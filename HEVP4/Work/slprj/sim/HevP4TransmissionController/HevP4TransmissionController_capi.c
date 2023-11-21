#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "HevP4TransmissionController_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 17
#endif
#ifndef SS_INT64
#define SS_INT64 18
#endif
#else
#include "builtin_typeid_types.h"
#include "HevP4TransmissionController.h"
#include "HevP4TransmissionController_capi.h"
#include "HevP4TransmissionController_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , - 1
, ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ;
static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static TARGET_CONST
rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "" , "" , 0 , 0 , 0 , 0 , 0 , 0 ,
0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 0 , 0 } } ; static uint_T rtDimensionArray [ ] = { 0 } ;
static rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( NULL ) , ( NULL ) , 0 , 0 }
} ; static int_T rtContextSystems [ 6 ] ; static rtwCAPI_LoggingMetaInfo
loggingMetaInfo [ ] = { { 0 , 0 , "" , 0 } } ; static
rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 6 ,
rtContextSystems , loggingMetaInfo , 0 , ( NULL ) , { 0 , ( NULL ) , ( NULL )
} , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL
) , 0 } , { rtBlockStates , 0 } , { rtDataTypeMap , rtDimensionMap ,
rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" ,
{ 3242685610U , 3682408879U , 4083151193U , 1434424446U } , &
mmiStaticInfoLogging , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * HevP4TransmissionController_GetCAPIStaticMap
( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void HevP4TransmissionController_InitializeSystemRan ( fb2uf2nk44 *
const koyns0ezya , sysRanDType * systemRan [ ] , e33vsk4ebo * localDW , int_T
systemTid [ ] , void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER (
koyns0ezya ) ; UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType
* ) rootSysRanPtr ; systemRan [ 1 ] = ( sysRanDType * ) & localDW ->
b0rvtl1mndg . c1eg2r0fq0 ; systemRan [ 2 ] = ( sysRanDType * ) & localDW ->
l52gatiaea ; systemRan [ 3 ] = ( sysRanDType * ) & localDW -> clcmyj3zq5 ;
systemRan [ 4 ] = ( NULL ) ; systemRan [ 5 ] = ( NULL ) ; systemTid [ 3 ] =
koyns0ezya -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 2 ] = koyns0ezya
-> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 1 ] = koyns0ezya -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 4 ] = koyns0ezya -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 5 ] = koyns0ezya -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] =
0 ; rtContextSystems [ 1 ] = 1 ; rtContextSystems [ 2 ] = 2 ;
rtContextSystems [ 3 ] = 3 ; rtContextSystems [ 4 ] = 0 ; rtContextSystems [
5 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void HevP4TransmissionController_InitializeDataMapInfo ( fb2uf2nk44 * const
koyns0ezya , e33vsk4ebo * localDW , void * sysRanPtr , int contextTid ) {
rtwCAPI_SetVersion ( koyns0ezya -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( koyns0ezya -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( koyns0ezya -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; rtwCAPI_SetPath ( koyns0ezya -> DataMapInfo . mmi ,
( NULL ) ) ; rtwCAPI_SetFullPath ( koyns0ezya -> DataMapInfo . mmi , ( NULL )
) ; rtwCAPI_SetInstanceLoggingInfo ( koyns0ezya -> DataMapInfo . mmi , &
koyns0ezya -> DataMapInfo . mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray (
koyns0ezya -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen (
koyns0ezya -> DataMapInfo . mmi , 0 ) ;
HevP4TransmissionController_InitializeSystemRan ( koyns0ezya , koyns0ezya ->
DataMapInfo . systemRan , localDW , koyns0ezya -> DataMapInfo . systemTid ,
sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( koyns0ezya -> DataMapInfo .
mmi , koyns0ezya -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid (
koyns0ezya -> DataMapInfo . mmi , koyns0ezya -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( koyns0ezya -> DataMapInfo . mmi , & koyns0ezya ->
Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void HevP4TransmissionController_host_InitializeDataMapInfo (
HevP4TransmissionController_host_DataMapInfo_T * dataMap , const char * path
) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap (
dataMap -> mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi ,
( NULL ) ) ; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
