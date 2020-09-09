/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r16.1.0/38413-g10.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_NGAP_PDUSessionResourceModifyConfirmTransfer_H_
#define	_NGAP_PDUSessionResourceModifyConfirmTransfer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_QosFlowModifyConfirmList.h"
#include "NGAP_UPTransportLayerInformation.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_UPTransportLayerInformationPairList;
struct NGAP_QosFlowListWithCause;
struct NGAP_ProtocolExtensionContainer;

/* NGAP_PDUSessionResourceModifyConfirmTransfer */
typedef struct NGAP_PDUSessionResourceModifyConfirmTransfer {
	NGAP_QosFlowModifyConfirmList_t	 qosFlowModifyConfirmList;
	NGAP_UPTransportLayerInformation_t	 uLNGU_UP_TNLInformation;
	struct NGAP_UPTransportLayerInformationPairList	*additionalNG_UUPTNLInformation;	/* OPTIONAL */
	struct NGAP_QosFlowListWithCause	*qosFlowFailedToModifyList;	/* OPTIONAL */
	struct NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_PDUSessionResourceModifyConfirmTransfer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_PDUSessionResourceModifyConfirmTransfer;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_PDUSessionResourceModifyConfirmTransfer_H_ */
#include <asn_internal.h>
