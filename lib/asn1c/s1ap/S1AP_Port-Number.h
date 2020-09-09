/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/s1ap-r16.1.0/36413-g10.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_S1AP_Port_Number_H_
#define	_S1AP_Port_Number_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* S1AP_Port-Number */
typedef OCTET_STRING_t	 S1AP_Port_Number_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_S1AP_Port_Number_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_Port_Number;
asn_struct_free_f S1AP_Port_Number_free;
asn_struct_print_f S1AP_Port_Number_print;
asn_constr_check_f S1AP_Port_Number_constraint;
ber_type_decoder_f S1AP_Port_Number_decode_ber;
der_type_encoder_f S1AP_Port_Number_encode_der;
xer_type_decoder_f S1AP_Port_Number_decode_xer;
xer_type_encoder_f S1AP_Port_Number_encode_xer;
oer_type_decoder_f S1AP_Port_Number_decode_oer;
oer_type_encoder_f S1AP_Port_Number_encode_oer;
per_type_decoder_f S1AP_Port_Number_decode_uper;
per_type_encoder_f S1AP_Port_Number_encode_uper;
per_type_decoder_f S1AP_Port_Number_decode_aper;
per_type_encoder_f S1AP_Port_Number_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_Port_Number_H_ */
#include <asn_internal.h>
