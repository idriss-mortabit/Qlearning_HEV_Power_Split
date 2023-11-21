#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "MotMappedP4_capi_host.h"
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
#include "MotMappedP4.h"
#include "MotMappedP4_capi.h"
#include "MotMappedP4_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , 0 ,
TARGET_STRING (
 "MotMappedP4/Mapped Motor/Mapped Motor Core Speed 4/Tabulated Torque-speed Envelope/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 0 , - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 ,
- 1 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { 0 } ;
#ifndef HOST_CAPI_BUILD
static void MotMappedP4_InitializeDataAddr ( void * dataAddr [ ] , lnsmtgpggy
* localDW , koxbpdaoz0 * localX ) { dataAddr [ 0 ] = ( void * ) ( & localX ->
ese1fvnzzx ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void MotMappedP4_InitializeVarDimsAddr ( int32_T * vardimsAddr [ ] ) {
vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void MotMappedP4_InitializeLoggingFunctions ( RTWLoggingFcnPtr
loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; }
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
int8_T ) 0 , ( uint8_T ) 0 } } ; static int_T rtContextSystems [ 2 ] ; static
rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] = { { 0 , 0 , "" , 0 } } ; static
rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 2 ,
rtContextSystems , loggingMetaInfo , 0 , ( NULL ) , { 0 , ( NULL ) , ( NULL )
} , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL
) , 0 } , { rtBlockStates , 1 } , { rtDataTypeMap , rtDimensionMap ,
rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" ,
{ 1674830456U , 3393795020U , 3522065087U , 1900866777U } , &
mmiStaticInfoLogging , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * MotMappedP4_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void MotMappedP4_InitializeSystemRan ( fqfnmhstnm * const j4e5rul3ne ,
sysRanDType * systemRan [ ] , lnsmtgpggy * localDW , int_T systemTid [ ] ,
void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( j4e5rul3ne ) ;
UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType * )
rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemTid [ 1 ] = j4e5rul3ne ->
Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ;
rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void MotMappedP4_InitializeDataMapInfo ( fqfnmhstnm * const j4e5rul3ne ,
lnsmtgpggy * localDW , koxbpdaoz0 * localX , void * sysRanPtr , int
contextTid ) { rtwCAPI_SetVersion ( j4e5rul3ne -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( j4e5rul3ne -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( j4e5rul3ne -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; MotMappedP4_InitializeDataAddr ( j4e5rul3ne ->
DataMapInfo . dataAddress , localDW , localX ) ; rtwCAPI_SetDataAddressMap (
j4e5rul3ne -> DataMapInfo . mmi , j4e5rul3ne -> DataMapInfo . dataAddress ) ;
MotMappedP4_InitializeVarDimsAddr ( j4e5rul3ne -> DataMapInfo .
vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( j4e5rul3ne -> DataMapInfo .
mmi , j4e5rul3ne -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath (
j4e5rul3ne -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath (
j4e5rul3ne -> DataMapInfo . mmi , ( NULL ) ) ;
MotMappedP4_InitializeLoggingFunctions ( j4e5rul3ne -> DataMapInfo .
loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( j4e5rul3ne -> DataMapInfo . mmi ,
j4e5rul3ne -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetInstanceLoggingInfo (
j4e5rul3ne -> DataMapInfo . mmi , & j4e5rul3ne -> DataMapInfo .
mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( j4e5rul3ne -> DataMapInfo .
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( j4e5rul3ne -> DataMapInfo .
mmi , 0 ) ; MotMappedP4_InitializeSystemRan ( j4e5rul3ne , j4e5rul3ne ->
DataMapInfo . systemRan , localDW , j4e5rul3ne -> DataMapInfo . systemTid ,
sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( j4e5rul3ne -> DataMapInfo .
mmi , j4e5rul3ne -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid (
j4e5rul3ne -> DataMapInfo . mmi , j4e5rul3ne -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( j4e5rul3ne -> DataMapInfo . mmi , & j4e5rul3ne ->
Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void MotMappedP4_host_InitializeDataMapInfo ( MotMappedP4_host_DataMapInfo_T
* dataMap , const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
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
