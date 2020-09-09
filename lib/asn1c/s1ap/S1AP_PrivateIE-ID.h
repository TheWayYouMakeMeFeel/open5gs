/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-CommonDataTypes"
 * 	found in "../support/s1ap-r16.1.0/36413-g10.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_S1AP_PrivateIE_ID_H_
#define	_S1AP_PrivateIE_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <OBJECT_IDENTIFIER.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_PrivateIE_ID_PR {
	S1AP_PrivateIE_ID_PR_NOTHING,	/* No components present */
	S1AP_PrivateIE_ID_PR_local,
	S1AP_PrivateIE_ID_PR_global
} S1AP_PrivateIE_ID_PR;

/* S1AP_PrivateIE-ID */
typedef struct S1AP_PrivateIE_ID {
	S1AP_PrivateIE_ID_PR present;
	union S1AP_PrivateIE_ID_u {
		long	 local;
		OBJECT_IDENTIFIER_t	 global;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_PrivateIE_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_PrivateIE_ID;
extern asn_CHOICE_specifics_t asn_SPC_S1AP_PrivateIE_ID_specs_1;
extern asn_TYPE_member_t asn_MBR_S1AP_PrivateIE_ID_1[2];
extern asn_per_constraints_t asn_PER_type_S1AP_PrivateIE_ID_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_PrivateIE_ID_H_ */
#include <asn_internal.h>
