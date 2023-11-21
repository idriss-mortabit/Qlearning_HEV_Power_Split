#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "HevP4OptimalController_capi_host.h"
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
#include "HevP4OptimalController.h"
#include "HevP4OptimalController_capi.h"
#include "HevP4OptimalController_private.h"
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
, TARGET_STRING (
 "HevP4OptimalController/ECMS/Energy Management/Hamiltonian computation\nand minimization/Discrete\nTransfer Fcn"
) , TARGET_STRING ( "states" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 1
, - 1 , TARGET_STRING (
 "HevP4OptimalController/ECMS/Energy Management/Hamiltonian computation\nand minimization/Unit Delay2"
) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 2
, - 1 , TARGET_STRING (
 "HevP4OptimalController/ECMS/Energy Management Off/WhlTrqCmd2MotTrq/WhlTrq2MotTrq P4/Unit Delay"
) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 3
, - 1 , TARGET_STRING (
 "HevP4OptimalController/ECMS/Energy Management/Powertrain Constraints/Engine Constraint/Eng On/Whl2EngTrq/Unit Delay1"
) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 1 , 0 , 0 , 0 , - 1 , 0 } , { 4
, - 1 , TARGET_STRING (
 "HevP4OptimalController/ECMS/Energy Management/Powertrain Constraints/Engine Constraint/Eng On/Whl2EngTrq/Unit Delay2"
) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 1 , 0 , 0 , 0 , - 1 , 0 } , { 5
, - 1 , TARGET_STRING (
 "HevP4OptimalController/ECMS/Energy Management/Powertrain Constraints/Motor Constraint/WhlTrqCmd2MotTrq/WhlTrq2MotTrq P4/Unit Delay"
) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 1 , 0 , 0 , 0 , - 1 , 0 } , { 0
, - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } }
; static int_T rt_LoggedStateIdxList [ ] = { 4 , 3 , 5 , 0 , 1 , 2 } ;
#ifndef HOST_CAPI_BUILD
static void HevP4OptimalController_InitializeDataAddr ( void * dataAddr [ ] ,
crm0fqgax1 * localDW ) { dataAddr [ 0 ] = ( void * ) ( & localDW ->
hcqvryh3pk ) ; dataAddr [ 1 ] = ( void * ) ( & localDW -> afdqonecir ) ;
dataAddr [ 2 ] = ( void * ) ( & localDW -> pds1bi1lyu ) ; dataAddr [ 3 ] = (
void * ) ( & localDW -> dmxunhwslq [ 0 ] ) ; dataAddr [ 4 ] = ( void * ) ( &
localDW -> ed5ewqoyhk [ 0 ] ) ; dataAddr [ 5 ] = ( void * ) ( & localDW ->
mwvauacbhe [ 0 ] ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void HevP4OptimalController_InitializeVarDimsAddr ( int32_T *
vardimsAddr [ ] ) { vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void HevP4OptimalController_InitializeLoggingFunctions (
RTWLoggingFcnPtr loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ;
loggingPtrs [ 1 ] = ( NULL ) ; loggingPtrs [ 2 ] = ( NULL ) ; loggingPtrs [ 3
] = ( NULL ) ; loggingPtrs [ 4 ] = ( NULL ) ; loggingPtrs [ 5 ] = ( NULL ) ;
}
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } }
;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } } ; static
uint_T rtDimensionArray [ ] = { 1 , 1 , 202 , 1 } ; static const real_T
rtcapiStoredFloats [ ] = { 0.01 , 0.0 } ; static rtwCAPI_FixPtMap rtFixPtMap
[ ] = { { ( NULL ) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T )
0 } , } ; static rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void
* ) & rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ]
, ( int8_T ) 0 , ( uint8_T ) 0 } } ; static int_T rtContextSystems [ 32 ] ;
static rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] = { { 0 , 0 , "" , 0 } } ;
static rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 32 ,
rtContextSystems , loggingMetaInfo , 0 , ( NULL ) , { 0 , ( NULL ) , ( NULL )
} , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL
) , 0 } , { rtBlockStates , 6 } , { rtDataTypeMap , rtDimensionMap ,
rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" ,
{ 3282752261U , 3556045580U , 2432809553U , 1298219847U } , &
mmiStaticInfoLogging , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * HevP4OptimalController_GetCAPIStaticMap (
void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void HevP4OptimalController_InitializeSystemRan ( ahlzrh5kyk * const
fkxyq0okc4 , sysRanDType * systemRan [ ] , crm0fqgax1 * localDW , int_T
systemTid [ ] , void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER (
fkxyq0okc4 ) ; UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType
* ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemRan [ 2 ] = ( NULL ) ;
systemRan [ 3 ] = ( NULL ) ; systemRan [ 4 ] = ( NULL ) ; systemRan [ 5 ] = (
NULL ) ; systemRan [ 6 ] = ( NULL ) ; systemRan [ 7 ] = ( NULL ) ; systemRan
[ 8 ] = ( NULL ) ; systemRan [ 9 ] = ( NULL ) ; systemRan [ 10 ] = ( NULL ) ;
systemRan [ 11 ] = ( NULL ) ; systemRan [ 12 ] = ( NULL ) ; systemRan [ 13 ]
= ( NULL ) ; systemRan [ 14 ] = ( NULL ) ; systemRan [ 15 ] = ( NULL ) ;
systemRan [ 16 ] = ( NULL ) ; systemRan [ 17 ] = ( NULL ) ; systemRan [ 18 ]
= ( NULL ) ; systemRan [ 19 ] = ( sysRanDType * ) & localDW -> f13ilgvg50 ;
systemRan [ 20 ] = ( NULL ) ; systemRan [ 21 ] = ( NULL ) ; systemRan [ 22 ]
= ( sysRanDType * ) & localDW -> g44dcraf04 ; systemRan [ 23 ] = ( NULL ) ;
systemRan [ 24 ] = ( NULL ) ; systemRan [ 25 ] = ( NULL ) ; systemRan [ 26 ]
= ( NULL ) ; systemRan [ 27 ] = ( NULL ) ; systemRan [ 28 ] = ( NULL ) ;
systemRan [ 29 ] = ( NULL ) ; systemRan [ 30 ] = ( NULL ) ; systemRan [ 31 ]
= ( NULL ) ; systemTid [ 1 ] = fkxyq0okc4 -> Timing . mdlref_GlobalTID [ 0 ]
; systemTid [ 2 ] = fkxyq0okc4 -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid
[ 3 ] = fkxyq0okc4 -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 4 ] =
fkxyq0okc4 -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 5 ] = fkxyq0okc4
-> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 6 ] = fkxyq0okc4 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 7 ] = fkxyq0okc4 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 8 ] = fkxyq0okc4 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 9 ] = fkxyq0okc4 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 20 ] = fkxyq0okc4 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 21 ] = fkxyq0okc4 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 22 ] = fkxyq0okc4 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 10 ] = fkxyq0okc4 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 11 ] = fkxyq0okc4 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 12 ] = fkxyq0okc4 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 13 ] = fkxyq0okc4 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 14 ] = fkxyq0okc4 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 15 ] = fkxyq0okc4 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 16 ] = fkxyq0okc4 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 17 ] = fkxyq0okc4 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 18 ] = fkxyq0okc4 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 19 ] = fkxyq0okc4 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 23 ] = fkxyq0okc4 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 24 ] = fkxyq0okc4 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 25 ] = fkxyq0okc4 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 26 ] = fkxyq0okc4 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 27 ] = fkxyq0okc4 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 28 ] = fkxyq0okc4 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 29 ] = fkxyq0okc4 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 30 ] = fkxyq0okc4 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 31 ] = fkxyq0okc4 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] =
0 ; rtContextSystems [ 1 ] = 0 ; rtContextSystems [ 2 ] = 0 ;
rtContextSystems [ 3 ] = 0 ; rtContextSystems [ 4 ] = 0 ; rtContextSystems [
5 ] = 0 ; rtContextSystems [ 6 ] = 0 ; rtContextSystems [ 7 ] = 0 ;
rtContextSystems [ 8 ] = 0 ; rtContextSystems [ 9 ] = 0 ; rtContextSystems [
10 ] = 19 ; rtContextSystems [ 11 ] = 19 ; rtContextSystems [ 12 ] = 19 ;
rtContextSystems [ 13 ] = 19 ; rtContextSystems [ 14 ] = 19 ;
rtContextSystems [ 15 ] = 19 ; rtContextSystems [ 16 ] = 19 ;
rtContextSystems [ 17 ] = 19 ; rtContextSystems [ 18 ] = 19 ;
rtContextSystems [ 19 ] = 19 ; rtContextSystems [ 20 ] = 22 ;
rtContextSystems [ 21 ] = 22 ; rtContextSystems [ 22 ] = 22 ;
rtContextSystems [ 23 ] = 0 ; rtContextSystems [ 24 ] = 0 ; rtContextSystems
[ 25 ] = 0 ; rtContextSystems [ 26 ] = 0 ; rtContextSystems [ 27 ] = 0 ;
rtContextSystems [ 28 ] = 0 ; rtContextSystems [ 29 ] = 0 ; rtContextSystems
[ 30 ] = 0 ; rtContextSystems [ 31 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void HevP4OptimalController_InitializeDataMapInfo ( ahlzrh5kyk * const
fkxyq0okc4 , crm0fqgax1 * localDW , void * sysRanPtr , int contextTid ) {
rtwCAPI_SetVersion ( fkxyq0okc4 -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( fkxyq0okc4 -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( fkxyq0okc4 -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; HevP4OptimalController_InitializeDataAddr (
fkxyq0okc4 -> DataMapInfo . dataAddress , localDW ) ;
rtwCAPI_SetDataAddressMap ( fkxyq0okc4 -> DataMapInfo . mmi , fkxyq0okc4 ->
DataMapInfo . dataAddress ) ; HevP4OptimalController_InitializeVarDimsAddr (
fkxyq0okc4 -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap (
fkxyq0okc4 -> DataMapInfo . mmi , fkxyq0okc4 -> DataMapInfo . vardimsAddress
) ; rtwCAPI_SetPath ( fkxyq0okc4 -> DataMapInfo . mmi , ( NULL ) ) ;
rtwCAPI_SetFullPath ( fkxyq0okc4 -> DataMapInfo . mmi , ( NULL ) ) ;
HevP4OptimalController_InitializeLoggingFunctions ( fkxyq0okc4 -> DataMapInfo
. loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( fkxyq0okc4 -> DataMapInfo . mmi ,
fkxyq0okc4 -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetInstanceLoggingInfo (
fkxyq0okc4 -> DataMapInfo . mmi , & fkxyq0okc4 -> DataMapInfo .
mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( fkxyq0okc4 -> DataMapInfo .
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( fkxyq0okc4 -> DataMapInfo .
mmi , 0 ) ; HevP4OptimalController_InitializeSystemRan ( fkxyq0okc4 ,
fkxyq0okc4 -> DataMapInfo . systemRan , localDW , fkxyq0okc4 -> DataMapInfo .
systemTid , sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( fkxyq0okc4 ->
DataMapInfo . mmi , fkxyq0okc4 -> DataMapInfo . systemRan ) ;
rtwCAPI_SetSystemTid ( fkxyq0okc4 -> DataMapInfo . mmi , fkxyq0okc4 ->
DataMapInfo . systemTid ) ; rtwCAPI_SetGlobalTIDMap ( fkxyq0okc4 ->
DataMapInfo . mmi , & fkxyq0okc4 -> Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void HevP4OptimalController_host_InitializeDataMapInfo (
HevP4OptimalController_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
