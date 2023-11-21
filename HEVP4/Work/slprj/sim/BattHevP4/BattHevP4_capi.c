#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "BattHevP4_capi_host.h"
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
#include "BattHevP4.h"
#include "BattHevP4_capi.h"
#include "BattHevP4_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , 1 ,
TARGET_STRING ( "BattHevP4/Lithium Ion Battery Pack/Output Filter/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 1 , 0 , TARGET_STRING (
 "BattHevP4/DC-DC Converter/DC to DC Converter Core Single Efficiency Loss/DC to DC Voltage Response/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 2 , 2 , TARGET_STRING (
 "BattHevP4/Lithium Ion Battery Pack/Datasheet Battery Internal/Datasheet Battery/Charge Model/Integrator\nLimited"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 0 , - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 ,
- 1 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { 1 , 0 , 2 } ;
#ifndef HOST_CAPI_BUILD
static void BattHevP4_InitializeDataAddr ( void * dataAddr [ ] , hnrscff1gh *
localDW , nzo4ptcd4i * localX ) { dataAddr [ 0 ] = ( void * ) ( & localX ->
huozquuyis ) ; dataAddr [ 1 ] = ( void * ) ( & localX -> jf4yxb00my ) ;
dataAddr [ 2 ] = ( void * ) ( & localX -> f0u4ldealx ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void BattHevP4_InitializeVarDimsAddr ( int32_T * vardimsAddr [ ] ) {
vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void BattHevP4_InitializeLoggingFunctions ( RTWLoggingFcnPtr
loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; loggingPtrs [ 1 ] = ( NULL
) ; loggingPtrs [ 2 ] = ( NULL ) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } }
;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } } ; static uint_T rtDimensionArray [ ] = { 1 , 1
} ; static const real_T rtcapiStoredFloats [ ] = { 0.0 } ; static
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , (
int8_T ) 0 , ( uint8_T ) 0 } } ; static int_T rtContextSystems [ 7 ] ; static
rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] = { { 0 , 0 , "" , 0 } } ; static
rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 7 ,
rtContextSystems , loggingMetaInfo , 0 , ( NULL ) , { 0 , ( NULL ) , ( NULL )
} , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL
) , 0 } , { rtBlockStates , 3 } , { rtDataTypeMap , rtDimensionMap ,
rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" ,
{ 4042220637U , 2357087237U , 4255546793U , 3668921249U } , &
mmiStaticInfoLogging , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * BattHevP4_GetCAPIStaticMap ( void ) { return
& mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void BattHevP4_InitializeSystemRan ( eiq1jwny0u * const nq3nnf3z4x ,
sysRanDType * systemRan [ ] , hnrscff1gh * localDW , int_T systemTid [ ] ,
void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( nq3nnf3z4x ) ;
UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType * )
rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemRan [ 2 ] = ( NULL ) ;
systemRan [ 3 ] = ( NULL ) ; systemRan [ 4 ] = ( NULL ) ; systemRan [ 5 ] = (
NULL ) ; systemRan [ 6 ] = ( NULL ) ; systemTid [ 1 ] = nq3nnf3z4x -> Timing
. mdlref_GlobalTID [ 0 ] ; systemTid [ 2 ] = nq3nnf3z4x -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 3 ] = nq3nnf3z4x -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 4 ] = nq3nnf3z4x -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 5 ] = nq3nnf3z4x -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 6 ] = nq3nnf3z4x -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] =
0 ; rtContextSystems [ 1 ] = 0 ; rtContextSystems [ 2 ] = 0 ;
rtContextSystems [ 3 ] = 0 ; rtContextSystems [ 4 ] = 0 ; rtContextSystems [
5 ] = 0 ; rtContextSystems [ 6 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void BattHevP4_InitializeDataMapInfo ( eiq1jwny0u * const nq3nnf3z4x ,
hnrscff1gh * localDW , nzo4ptcd4i * localX , void * sysRanPtr , int
contextTid ) { rtwCAPI_SetVersion ( nq3nnf3z4x -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( nq3nnf3z4x -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( nq3nnf3z4x -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; BattHevP4_InitializeDataAddr ( nq3nnf3z4x ->
DataMapInfo . dataAddress , localDW , localX ) ; rtwCAPI_SetDataAddressMap (
nq3nnf3z4x -> DataMapInfo . mmi , nq3nnf3z4x -> DataMapInfo . dataAddress ) ;
BattHevP4_InitializeVarDimsAddr ( nq3nnf3z4x -> DataMapInfo . vardimsAddress
) ; rtwCAPI_SetVarDimsAddressMap ( nq3nnf3z4x -> DataMapInfo . mmi ,
nq3nnf3z4x -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath ( nq3nnf3z4x
-> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath ( nq3nnf3z4x ->
DataMapInfo . mmi , ( NULL ) ) ; BattHevP4_InitializeLoggingFunctions (
nq3nnf3z4x -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetLoggingPtrs (
nq3nnf3z4x -> DataMapInfo . mmi , nq3nnf3z4x -> DataMapInfo . loggingPtrs ) ;
rtwCAPI_SetInstanceLoggingInfo ( nq3nnf3z4x -> DataMapInfo . mmi , &
nq3nnf3z4x -> DataMapInfo . mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray (
nq3nnf3z4x -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen (
nq3nnf3z4x -> DataMapInfo . mmi , 0 ) ; BattHevP4_InitializeSystemRan (
nq3nnf3z4x , nq3nnf3z4x -> DataMapInfo . systemRan , localDW , nq3nnf3z4x ->
DataMapInfo . systemTid , sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan (
nq3nnf3z4x -> DataMapInfo . mmi , nq3nnf3z4x -> DataMapInfo . systemRan ) ;
rtwCAPI_SetSystemTid ( nq3nnf3z4x -> DataMapInfo . mmi , nq3nnf3z4x ->
DataMapInfo . systemTid ) ; rtwCAPI_SetGlobalTIDMap ( nq3nnf3z4x ->
DataMapInfo . mmi , & nq3nnf3z4x -> Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void BattHevP4_host_InitializeDataMapInfo ( BattHevP4_host_DataMapInfo_T *
dataMap , const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetPath
( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
