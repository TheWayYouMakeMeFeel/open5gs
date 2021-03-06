/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-Containers"
 * 	found in "../support/s1ap-r16.1.0/36413-g10.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_S1AP_ProtocolIE_SingleContainer_H_
#define	_S1AP_ProtocolIE_SingleContainer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1AP_ProtocolIE-Field.h"

#ifdef __cplusplus
extern "C" {
#endif

/* S1AP_ProtocolIE-SingleContainer */
typedef S1AP_E_RABToBeSetupItemBearerSUReqIEs_t	 S1AP_ProtocolIE_SingleContainer_7330P0_t;
typedef S1AP_E_RABSetupItemBearerSUResIEs_t	 S1AP_ProtocolIE_SingleContainer_7330P1_t;
typedef S1AP_E_RABToBeModifiedItemBearerModReqIEs_t	 S1AP_ProtocolIE_SingleContainer_7330P2_t;
typedef S1AP_E_RABModifyItemBearerModResIEs_t	 S1AP_ProtocolIE_SingleContainer_7330P3_t;
typedef S1AP_E_RABReleaseItemBearerRelCompIEs_t	 S1AP_ProtocolIE_SingleContainer_7330P4_t;
typedef S1AP_E_RABToBeSetupItemCtxtSUReqIEs_t	 S1AP_ProtocolIE_SingleContainer_7330P5_t;
typedef S1AP_E_RABSetupItemCtxtSUResIEs_t	 S1AP_ProtocolIE_SingleContainer_7330P6_t;
typedef S1AP_TAIItemIEs_t	 S1AP_ProtocolIE_SingleContainer_7330P7_t;
typedef S1AP_UE_associatedLogicalS1_ConnectionItemRes_t	 S1AP_ProtocolIE_SingleContainer_7330P8_t;
typedef S1AP_UE_associatedLogicalS1_ConnectionItemResAck_t	 S1AP_ProtocolIE_SingleContainer_7330P9_t;
typedef S1AP_E_RABModifyItemBearerModConfIEs_t	 S1AP_ProtocolIE_SingleContainer_7330P10_t;
typedef S1AP_Bearers_SubjectToStatusTransfer_ItemIEs_t	 S1AP_ProtocolIE_SingleContainer_7330P11_t;
typedef S1AP_E_RABInformationListIEs_t	 S1AP_ProtocolIE_SingleContainer_7330P12_t;
typedef S1AP_E_RABItemIEs_t	 S1AP_ProtocolIE_SingleContainer_7330P13_t;
typedef S1AP_E_RABUsageReportItemIEs_t	 S1AP_ProtocolIE_SingleContainer_7330P14_t;
typedef S1AP_MDTMode_ExtensionIE_t	 S1AP_ProtocolIE_SingleContainer_7330P15_t;
typedef S1AP_RecommendedCellItemIEs_t	 S1AP_ProtocolIE_SingleContainer_7330P16_t;
typedef S1AP_RecommendedENBItemIEs_t	 S1AP_ProtocolIE_SingleContainer_7330P17_t;
typedef S1AP_SecondaryRATDataUsageReportItemIEs_t	 S1AP_ProtocolIE_SingleContainer_7330P18_t;
typedef S1AP_SONInformation_ExtensionIE_t	 S1AP_ProtocolIE_SingleContainer_7330P19_t;
typedef S1AP_E_RABDataForwardingItemIEs_t	 S1AP_ProtocolIE_SingleContainer_7330P20_t;
typedef S1AP_E_RABToBeSetupItemHOReqIEs_t	 S1AP_ProtocolIE_SingleContainer_7330P21_t;
typedef S1AP_E_RABAdmittedItemIEs_t	 S1AP_ProtocolIE_SingleContainer_7330P22_t;
typedef S1AP_E_RABFailedtoSetupItemHOReqAckIEs_t	 S1AP_ProtocolIE_SingleContainer_7330P23_t;
typedef S1AP_E_RABToBeSwitchedDLItemIEs_t	 S1AP_ProtocolIE_SingleContainer_7330P24_t;
typedef S1AP_E_RABToBeSwitchedULItemIEs_t	 S1AP_ProtocolIE_SingleContainer_7330P25_t;
typedef S1AP_E_RABToBeModifiedItemBearerModIndIEs_t	 S1AP_ProtocolIE_SingleContainer_7330P26_t;
typedef S1AP_E_RABNotToBeModifiedItemBearerModIndIEs_t	 S1AP_ProtocolIE_SingleContainer_7330P27_t;
typedef S1AP_E_RABFailedToResumeItemResumeReqIEs_t	 S1AP_ProtocolIE_SingleContainer_7330P28_t;
typedef S1AP_E_RABFailedToResumeItemResumeResIEs_t	 S1AP_ProtocolIE_SingleContainer_7330P29_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7330P0;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7330P0_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7330P0_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7330P0_constraint;
ber_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P0_decode_ber;
der_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P0_encode_der;
xer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P0_decode_xer;
xer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P0_encode_xer;
oer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P0_decode_oer;
oer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P0_encode_oer;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P0_decode_uper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P0_encode_uper;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P0_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P0_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7330P1;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7330P1_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7330P1_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7330P1_constraint;
ber_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P1_decode_ber;
der_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P1_encode_der;
xer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P1_decode_xer;
xer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P1_encode_xer;
oer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P1_decode_oer;
oer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P1_encode_oer;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P1_decode_uper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P1_encode_uper;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P1_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P1_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7330P2;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7330P2_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7330P2_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7330P2_constraint;
ber_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P2_decode_ber;
der_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P2_encode_der;
xer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P2_decode_xer;
xer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P2_encode_xer;
oer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P2_decode_oer;
oer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P2_encode_oer;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P2_decode_uper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P2_encode_uper;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P2_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P2_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7330P3;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7330P3_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7330P3_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7330P3_constraint;
ber_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P3_decode_ber;
der_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P3_encode_der;
xer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P3_decode_xer;
xer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P3_encode_xer;
oer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P3_decode_oer;
oer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P3_encode_oer;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P3_decode_uper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P3_encode_uper;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P3_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P3_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7330P4;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7330P4_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7330P4_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7330P4_constraint;
ber_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P4_decode_ber;
der_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P4_encode_der;
xer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P4_decode_xer;
xer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P4_encode_xer;
oer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P4_decode_oer;
oer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P4_encode_oer;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P4_decode_uper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P4_encode_uper;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P4_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P4_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7330P5;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7330P5_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7330P5_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7330P5_constraint;
ber_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P5_decode_ber;
der_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P5_encode_der;
xer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P5_decode_xer;
xer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P5_encode_xer;
oer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P5_decode_oer;
oer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P5_encode_oer;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P5_decode_uper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P5_encode_uper;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P5_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P5_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7330P6;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7330P6_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7330P6_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7330P6_constraint;
ber_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P6_decode_ber;
der_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P6_encode_der;
xer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P6_decode_xer;
xer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P6_encode_xer;
oer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P6_decode_oer;
oer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P6_encode_oer;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P6_decode_uper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P6_encode_uper;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P6_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P6_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7330P7;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7330P7_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7330P7_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7330P7_constraint;
ber_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P7_decode_ber;
der_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P7_encode_der;
xer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P7_decode_xer;
xer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P7_encode_xer;
oer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P7_decode_oer;
oer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P7_encode_oer;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P7_decode_uper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P7_encode_uper;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P7_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P7_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7330P8;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7330P8_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7330P8_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7330P8_constraint;
ber_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P8_decode_ber;
der_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P8_encode_der;
xer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P8_decode_xer;
xer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P8_encode_xer;
oer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P8_decode_oer;
oer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P8_encode_oer;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P8_decode_uper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P8_encode_uper;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P8_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P8_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7330P9;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7330P9_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7330P9_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7330P9_constraint;
ber_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P9_decode_ber;
der_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P9_encode_der;
xer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P9_decode_xer;
xer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P9_encode_xer;
oer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P9_decode_oer;
oer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P9_encode_oer;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P9_decode_uper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P9_encode_uper;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P9_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P9_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7330P10;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7330P10_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7330P10_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7330P10_constraint;
ber_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P10_decode_ber;
der_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P10_encode_der;
xer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P10_decode_xer;
xer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P10_encode_xer;
oer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P10_decode_oer;
oer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P10_encode_oer;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P10_decode_uper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P10_encode_uper;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P10_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P10_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7330P11;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7330P11_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7330P11_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7330P11_constraint;
ber_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P11_decode_ber;
der_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P11_encode_der;
xer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P11_decode_xer;
xer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P11_encode_xer;
oer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P11_decode_oer;
oer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P11_encode_oer;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P11_decode_uper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P11_encode_uper;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P11_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P11_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7330P12;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7330P12_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7330P12_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7330P12_constraint;
ber_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P12_decode_ber;
der_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P12_encode_der;
xer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P12_decode_xer;
xer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P12_encode_xer;
oer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P12_decode_oer;
oer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P12_encode_oer;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P12_decode_uper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P12_encode_uper;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P12_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P12_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7330P13;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7330P13_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7330P13_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7330P13_constraint;
ber_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P13_decode_ber;
der_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P13_encode_der;
xer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P13_decode_xer;
xer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P13_encode_xer;
oer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P13_decode_oer;
oer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P13_encode_oer;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P13_decode_uper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P13_encode_uper;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P13_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P13_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7330P14;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7330P14_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7330P14_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7330P14_constraint;
ber_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P14_decode_ber;
der_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P14_encode_der;
xer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P14_decode_xer;
xer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P14_encode_xer;
oer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P14_decode_oer;
oer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P14_encode_oer;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P14_decode_uper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P14_encode_uper;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P14_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P14_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7330P15;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7330P15_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7330P15_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7330P15_constraint;
ber_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P15_decode_ber;
der_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P15_encode_der;
xer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P15_decode_xer;
xer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P15_encode_xer;
oer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P15_decode_oer;
oer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P15_encode_oer;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P15_decode_uper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P15_encode_uper;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P15_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P15_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7330P16;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7330P16_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7330P16_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7330P16_constraint;
ber_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P16_decode_ber;
der_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P16_encode_der;
xer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P16_decode_xer;
xer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P16_encode_xer;
oer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P16_decode_oer;
oer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P16_encode_oer;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P16_decode_uper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P16_encode_uper;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P16_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P16_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7330P17;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7330P17_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7330P17_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7330P17_constraint;
ber_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P17_decode_ber;
der_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P17_encode_der;
xer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P17_decode_xer;
xer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P17_encode_xer;
oer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P17_decode_oer;
oer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P17_encode_oer;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P17_decode_uper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P17_encode_uper;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P17_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P17_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7330P18;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7330P18_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7330P18_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7330P18_constraint;
ber_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P18_decode_ber;
der_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P18_encode_der;
xer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P18_decode_xer;
xer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P18_encode_xer;
oer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P18_decode_oer;
oer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P18_encode_oer;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P18_decode_uper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P18_encode_uper;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P18_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P18_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7330P19;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7330P19_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7330P19_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7330P19_constraint;
ber_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P19_decode_ber;
der_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P19_encode_der;
xer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P19_decode_xer;
xer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P19_encode_xer;
oer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P19_decode_oer;
oer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P19_encode_oer;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P19_decode_uper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P19_encode_uper;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P19_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P19_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7330P20;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7330P20_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7330P20_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7330P20_constraint;
ber_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P20_decode_ber;
der_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P20_encode_der;
xer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P20_decode_xer;
xer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P20_encode_xer;
oer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P20_decode_oer;
oer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P20_encode_oer;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P20_decode_uper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P20_encode_uper;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P20_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P20_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7330P21;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7330P21_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7330P21_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7330P21_constraint;
ber_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P21_decode_ber;
der_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P21_encode_der;
xer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P21_decode_xer;
xer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P21_encode_xer;
oer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P21_decode_oer;
oer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P21_encode_oer;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P21_decode_uper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P21_encode_uper;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P21_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P21_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7330P22;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7330P22_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7330P22_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7330P22_constraint;
ber_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P22_decode_ber;
der_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P22_encode_der;
xer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P22_decode_xer;
xer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P22_encode_xer;
oer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P22_decode_oer;
oer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P22_encode_oer;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P22_decode_uper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P22_encode_uper;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P22_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P22_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7330P23;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7330P23_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7330P23_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7330P23_constraint;
ber_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P23_decode_ber;
der_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P23_encode_der;
xer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P23_decode_xer;
xer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P23_encode_xer;
oer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P23_decode_oer;
oer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P23_encode_oer;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P23_decode_uper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P23_encode_uper;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P23_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P23_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7330P24;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7330P24_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7330P24_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7330P24_constraint;
ber_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P24_decode_ber;
der_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P24_encode_der;
xer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P24_decode_xer;
xer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P24_encode_xer;
oer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P24_decode_oer;
oer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P24_encode_oer;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P24_decode_uper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P24_encode_uper;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P24_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P24_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7330P25;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7330P25_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7330P25_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7330P25_constraint;
ber_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P25_decode_ber;
der_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P25_encode_der;
xer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P25_decode_xer;
xer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P25_encode_xer;
oer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P25_decode_oer;
oer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P25_encode_oer;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P25_decode_uper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P25_encode_uper;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P25_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P25_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7330P26;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7330P26_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7330P26_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7330P26_constraint;
ber_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P26_decode_ber;
der_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P26_encode_der;
xer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P26_decode_xer;
xer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P26_encode_xer;
oer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P26_decode_oer;
oer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P26_encode_oer;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P26_decode_uper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P26_encode_uper;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P26_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P26_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7330P27;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7330P27_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7330P27_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7330P27_constraint;
ber_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P27_decode_ber;
der_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P27_encode_der;
xer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P27_decode_xer;
xer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P27_encode_xer;
oer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P27_decode_oer;
oer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P27_encode_oer;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P27_decode_uper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P27_encode_uper;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P27_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P27_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7330P28;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7330P28_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7330P28_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7330P28_constraint;
ber_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P28_decode_ber;
der_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P28_encode_der;
xer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P28_decode_xer;
xer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P28_encode_xer;
oer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P28_decode_oer;
oer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P28_encode_oer;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P28_decode_uper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P28_encode_uper;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P28_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P28_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7330P29;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7330P29_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7330P29_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7330P29_constraint;
ber_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P29_decode_ber;
der_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P29_encode_der;
xer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P29_decode_xer;
xer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P29_encode_xer;
oer_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P29_decode_oer;
oer_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P29_encode_oer;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P29_decode_uper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P29_encode_uper;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7330P29_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7330P29_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_ProtocolIE_SingleContainer_H_ */
#include <asn_internal.h>
