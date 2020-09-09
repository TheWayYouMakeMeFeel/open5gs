/*
 * Copyright (C) 2019 by Sukchan Lee <acetcom@gmail.com>
 *
 * This file is part of Open5GS.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifdef __APPLE__
#include <mach/clock.h>
#include <mach/mach.h>
#include <mach/mach_time.h>
#include <sys/time.h>
#endif

#include "core-config-private.h"

#if HAVE_SYS_TIME_H
#include <sys/time.h>
#endif

#include "ogs-core.h"

/*
 * The following code is stolen from mongodb-c-driver
 * https://github.com/mongodb/mongo-c-driver/blob/master/src/libbson/src/bson/bson-clock.c
 */
int ogs_gettimeofday(struct timeval *tv)
{
#if defined(_WIN32)
#if defined(_MSC_VER)
#define DELTA_EPOCH_IN_MICROSEC 11644473600000000Ui64
#else
#define DELTA_EPOCH_IN_MICROSEC 11644473600000000ULL
#endif
	FILETIME ft;
	uint64_t tmp = 0;

	/*
	 * The const value is shamelessy stolen from
	 * http://www.boost.org/doc/libs/1_55_0/boost/chrono/detail/inlined/win/chrono.hpp
	 *
	 * File times are the number of 100 nanosecond intervals elapsed since
	 * 12:00 am Jan 1, 1601 UTC.  I haven't check the math particularly hard
	 *
	 * ...  good luck
	 */

    if (tv) {
        GetSystemTimeAsFileTime (&ft);

        /* pull out of the filetime into a 64 bit uint */
        tmp |= ft.dwHighDateTime;
        tmp <<= 32;
        tmp |= ft.dwLowDateTime;

        /* convert from 100's of nanosecs to microsecs */
        tmp /= 10;

        /* adjust to unix epoch */
        tmp -= DELTA_EPOCH_IN_MICROSEC;

        tv->tv_sec = (long) (tmp / 1000000UL);
        tv->tv_usec = (long) (tmp % 1000000UL);
    }

    return 0;
#else
    int rc = gettimeofday(tv, NULL);
    ogs_assert(rc == 0);
    return 0;
#endif
}

ogs_time_t ogs_time_now(void)
{
    int rc;
    struct timeval tv;

    rc = ogs_gettimeofday(&tv);
    ogs_assert(rc == 0);

    return tv.tv_sec * OGS_USEC_PER_SEC + tv.tv_usec;
}

/* The following code is stolen from APR library */
int ogs_time_from_lt(ogs_time_t *t, struct tm *tm, int tm_usec)
{
    ogs_time_t year = tm->tm_year;
    ogs_time_t days;
    static const int dayoffset[12] =
    {306, 337, 0, 31, 61, 92, 122, 153, 184, 214, 245, 275};

    if (tm->tm_mon < 0 || tm->tm_mon >= 12)
        return OGS_ERROR;

    /* shift new year to 1st March in order to make leap year calc easy */

    if (tm->tm_mon < 2)
        year--;

    /* Find number of days since 1st March 1900 (in the Gregorian calendar). */

    days = year * 365 + year / 4 - year / 100 + (year / 100 + 3) / 4;
    days += dayoffset[tm->tm_mon] + tm->tm_mday - 1;
    days -= 25508;              /* 1 jan 1970 is 25508 days since 1 mar 1900 */
    days = ((days * 24 + tm->tm_hour) * 60 + tm->tm_min) * 60 + tm->tm_sec;

    if (days < 0) {
        return OGS_ERROR;
    }
    *t = days * OGS_USEC_PER_SEC + tm_usec;

    return OGS_OK;
}

int ogs_time_from_gmt(ogs_time_t *t, struct tm *tm, int tm_usec)
{
    int status = ogs_time_from_lt(t, tm, tm_usec);
    if (status == OGS_OK)
        *t -= (ogs_time_t) tm->tm_gmtoff * OGS_USEC_PER_SEC;
    return status;
}

int ogs_timezone(void)
{
#if defined(_WIN32)
    u_long                 n;
    TIME_ZONE_INFORMATION  tz;

    n = GetTimeZoneInformation(&tz);

    switch (n) {
    case TIME_ZONE_ID_UNKNOWN:
        /* Bias = UTC - local time in minutes
         * tm_gmtoff is seconds east of UTC
         */
        return tz.Bias * -60;
    case TIME_ZONE_ID_STANDARD:
        return (tz.Bias + tz.StandardBias) * -60;
    case TIME_ZONE_ID_DAYLIGHT:
        return (tz.Bias + tz.DaylightBias) * -60;
    default:
        ogs_assert_if_reached();
        return 0;
    }
#else
    struct timeval tv;
    struct tm tm;
    int ret;

    ret = ogs_gettimeofday(&tv);
    ogs_assert(ret == 0);

    ogs_localtime(tv.tv_sec, &tm);

    return tm.tm_gmtoff;
#endif
}

ogs_time_t ogs_get_monotonic_time(void)
{
#if defined(HAVE_CLOCK_GETTIME) && defined(CLOCK_MONOTONIC)
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return ((ts.tv_sec * 1000000UL) + (ts.tv_nsec / 1000UL));
#elif defined(__APPLE__)
    static mach_timebase_info_data_t info = {0};
    static double ratio = 0.0;

    if (!info.denom) {
        /* the value from mach_absolute_time () * info.numer / info.denom
        * is in nano seconds. So we have to divid by 1000.0 to get micro
        * seconds*/
        mach_timebase_info(&info);
        ratio = (double) info.numer / (double) info.denom / 1000.0;
    }

    return mach_absolute_time() * ratio;
#elif defined(_WIN32)
    /* Despite it's name, this is in milliseconds! */
    ogs_time_t ticks = GetTickCount64();
    return (ticks * 1000L);
#elif defined(__hpux__)
    ogs_time_t nanosec = gethrtime();
    return (nanosec / 1000UL);
#else
#warning "Monotonic clock is not yet supported on your platform."
    struct timeval tv;

    ogs_gettimeofday(&tv);
    return (tv.tv_sec * 1000000UL) + tv.tv_usec;
#endif
}

void ogs_localtime(time_t s, struct tm *tm)
{
    ogs_assert(tm);
    memset(tm, 0, sizeof(*tm));

#if (HAVE_LOCALTIME_R)
    (void)localtime_r(&s, tm);
#else
    struct tm *t;

    t = localtime(&s);
    *tm = *t;
#endif
}

void ogs_gmtime(time_t s, struct tm *tm)
{
    ogs_assert(tm);
    memset(tm, 0, sizeof(*tm));

#if (HAVE_LOCALTIME_R)
    (void)gmtime_r(&s, tm);
#else
    struct tm *t;

    t = gmtime(&s);
    *tm = *t;
#endif
}

void ogs_msleep(time_t msec)
{
#if defined(_WIN32)
    Sleep(msec);
#else
    ogs_usleep(msec * 1000);
#endif
}

void ogs_usleep(time_t usec)
{
#if defined(_WIN32)
    Sleep(usec ? (1 + (usec - 1) / 1000) : 0);
#else
    struct timespec req, rem;
    req.tv_sec = usec / OGS_USEC_PER_SEC;
    req.tv_nsec = (usec % OGS_USEC_PER_SEC) * 1000;
    while (nanosleep(&req, &rem) == -1 && errno == EINTR)
        req = rem;
#endif
}
