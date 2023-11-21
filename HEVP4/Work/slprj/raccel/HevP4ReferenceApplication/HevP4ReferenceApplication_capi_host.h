#ifndef RTW_HEADER_HevP4ReferenceApplication_cap_host_h__
#define RTW_HEADER_HevP4ReferenceApplication_cap_host_h__
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap_simtarget.h"
#include "HevP4OptimalController_capi_host.h"
#include "SiEngineController_capi_host.h"
#include "HevP4TransmissionController_capi_host.h"
#include "DrivetrainHevP4_capi_host.h"
#include "BattHevP4_capi_host.h"
#include "MotMappedP4_capi_host.h"
#include "SiMappedEngine_capi_host.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMappingInfo *
childMMI [ 7 ] ; HevP4OptimalController_host_DataMapInfo_T child0 ;
SiEngineController_host_DataMapInfo_T child1 ;
HevP4TransmissionController_host_DataMapInfo_T child2 ;
DrivetrainHevP4_host_DataMapInfo_T child3 ; BattHevP4_host_DataMapInfo_T
child4 ; MotMappedP4_host_DataMapInfo_T child5 ;
SiMappedEngine_host_DataMapInfo_T child6 ; }
HevP4ReferenceApplication_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void HevP4ReferenceApplication_host_InitializeDataMapInfo (
HevP4ReferenceApplication_host_DataMapInfo_T * dataMap , const char * path )
;
#ifdef __cplusplus
}
#endif
#endif
#endif
