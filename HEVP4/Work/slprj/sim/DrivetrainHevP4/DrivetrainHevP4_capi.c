#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "DrivetrainHevP4_capi_host.h"
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
#include "DrivetrainHevP4.h"
#include "DrivetrainHevP4_capi.h"
#include "DrivetrainHevP4_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , 9 ,
TARGET_STRING ( "DrivetrainHevP4/Vehicle/Integrator" ) , TARGET_STRING ( "" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0 } , { 1 , 5 ,
TARGET_STRING ( "DrivetrainHevP4/Vehicle/Cont LPF/Integrator1" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0
} , { 2 , 1 , TARGET_STRING ( "DrivetrainHevP4/Vehicle/Cont LPF1/Integrator1"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 3 , 19 , TARGET_STRING (
 "DrivetrainHevP4/Differential and Compliance/Open Differential/Open Differential/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 4 , 21 , TARGET_STRING (
 "DrivetrainHevP4/Differential and Compliance/Open Differential1/Open Differential/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 5 , 12 , TARGET_STRING (
 "DrivetrainHevP4/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Integrator1"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 6 , 3 , TARGET_STRING (
 "DrivetrainHevP4/Differential and Compliance/Front Axle Compliance 1/Torsional Compliance Linear 2way/Torsional Compliance Linear/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 7 , 7 , TARGET_STRING (
 "DrivetrainHevP4/Differential and Compliance/Rear Axle Compliance 1/Torsional Compliance Linear 2way/Torsional Compliance Linear/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 8 , 18 , TARGET_STRING (
 "DrivetrainHevP4/Torque Converter Automatic Transmission/Driveshaft Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 9 , 14 , TARGET_STRING (
 "DrivetrainHevP4/Torque Converter Automatic Transmission/Driveshaft Compliance1/Torsional Compliance Linear 2way/Torsional Compliance Linear/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 10 , 16 , TARGET_STRING (
 "DrivetrainHevP4/Torque Converter Automatic Transmission/Ideal Fixed Gear Transmission/Ideal Fixed Gear Transmission/Cont LPF IC Dyn/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 11 , 31 , TARGET_STRING (
 "DrivetrainHevP4/Torque Converter Automatic Transmission/Ideal Fixed Gear Transmission/Ideal Fixed Gear Transmission/Locked/x"
) , TARGET_STRING ( "w" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , -
1 , 0 } , { 12 , 29 , TARGET_STRING (
 "DrivetrainHevP4/Torque Converter Automatic Transmission/Ideal Fixed Gear Transmission/Ideal Fixed Gear Transmission/Unlocked/xe"
) , TARGET_STRING ( "we" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , -
1 , 0 } , { 13 , 30 , TARGET_STRING (
 "DrivetrainHevP4/Torque Converter Automatic Transmission/Ideal Fixed Gear Transmission/Ideal Fixed Gear Transmission/Unlocked/xv"
) , TARGET_STRING ( "wv" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , -
1 , 0 } , { 14 , 28 , TARGET_STRING (
 "DrivetrainHevP4/Torque Converter Automatic Transmission/Torque Converter/Torque Converter With Lock-up/Locked/Locked Shaft\nIntegrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 15 , 25 , TARGET_STRING (
 "DrivetrainHevP4/Torque Converter Automatic Transmission/Torque Converter/Torque Converter With Lock-up/Unlocked/Pump\nIntegrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 16 , 26 , TARGET_STRING (
 "DrivetrainHevP4/Torque Converter Automatic Transmission/Torque Converter/Torque Converter With Lock-up/Unlocked/Turbine\nIntegrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 17 , 0 , TARGET_STRING (
 "DrivetrainHevP4/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Vehicle/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 18 , 2 , TARGET_STRING (
 "DrivetrainHevP4/Differential and Compliance/Front Axle Compliance 1/Torsional Compliance Linear 2way/Torsional Compliance Linear/Cont LPF IC Dyn/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 19 , 6 , TARGET_STRING (
 "DrivetrainHevP4/Differential and Compliance/Rear Axle Compliance 1/Torsional Compliance Linear 2way/Torsional Compliance Linear/Cont LPF IC Dyn/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 20 , 17 , TARGET_STRING (
 "DrivetrainHevP4/Torque Converter Automatic Transmission/Driveshaft Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Cont LPF IC Dyn/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 21 , 13 , TARGET_STRING (
 "DrivetrainHevP4/Torque Converter Automatic Transmission/Driveshaft Compliance1/Torsional Compliance Linear 2way/Torsional Compliance Linear/Cont LPF IC Dyn/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 22 , 4 , TARGET_STRING (
 "DrivetrainHevP4/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/relaxation/Cont LPF Dyn/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 23 , 8 , TARGET_STRING (
 "DrivetrainHevP4/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/relaxation/Cont LPF Dyn/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 24 , 15 , TARGET_STRING (
 "DrivetrainHevP4/Torque Converter Automatic Transmission/Torque Converter/Torque Converter With Lock-up/Lock-up Type/Internal/Cont LPF IC Dyn/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 25 , 11 , TARGET_STRING (
 "DrivetrainHevP4/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Body Frame/Longitudinal 1DOF/Integrator3"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 26 , 27 , TARGET_STRING (
 "DrivetrainHevP4/Torque Converter Automatic Transmission/Torque Converter/Torque Converter With Lock-up/Unlocked/Torque Converter/Torque Response/LPF/Cont LPF Dyn/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 0 , - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 ,
- 1 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { 9 , 5 , 1 , 18 , 19
, 11 , 3 , 7 , 17 , 13 , 15 , 28 , 26 , 27 , 25 , 22 , 23 , 0 , 2 , 6 , 16 ,
12 , 4 , 8 , 14 , 10 , 24 } ;
#ifndef HOST_CAPI_BUILD
static void DrivetrainHevP4_InitializeDataAddr ( void * dataAddr [ ] ,
f2a5ytrc5f * localDW , dv0k21emzh * localX ) { dataAddr [ 0 ] = ( void * ) (
& localX -> fvzlzvmibc [ 0 ] ) ; dataAddr [ 1 ] = ( void * ) ( & localX ->
ojbokxhqxh ) ; dataAddr [ 2 ] = ( void * ) ( & localX -> e0iug524d1 ) ;
dataAddr [ 3 ] = ( void * ) ( & localX -> hh1fbq041v [ 0 ] ) ; dataAddr [ 4 ]
= ( void * ) ( & localX -> g4a4nx25kp [ 0 ] ) ; dataAddr [ 5 ] = ( void * ) (
& localX -> i1kwothjwq ) ; dataAddr [ 6 ] = ( void * ) ( & localX ->
j4b4mw5go4 ) ; dataAddr [ 7 ] = ( void * ) ( & localX -> lqa034fanw ) ;
dataAddr [ 8 ] = ( void * ) ( & localX -> ibw2wgocuq ) ; dataAddr [ 9 ] = (
void * ) ( & localX -> dwubb510sy ) ; dataAddr [ 10 ] = ( void * ) ( & localX
-> ds1yb3kwf1 ) ; dataAddr [ 11 ] = ( void * ) ( & localX -> m4rqj3hpvj ) ;
dataAddr [ 12 ] = ( void * ) ( & localX -> kahcvzwgxd ) ; dataAddr [ 13 ] = (
void * ) ( & localX -> jk1yalfhod ) ; dataAddr [ 14 ] = ( void * ) ( & localX
-> mlndfk2ces ) ; dataAddr [ 15 ] = ( void * ) ( & localX -> au0xgwt5db ) ;
dataAddr [ 16 ] = ( void * ) ( & localX -> ghortk2b5p ) ; dataAddr [ 17 ] = (
void * ) ( & localX -> fzwsn2jmhl ) ; dataAddr [ 18 ] = ( void * ) ( & localX
-> ci1kkjexs5 ) ; dataAddr [ 19 ] = ( void * ) ( & localX -> kuyuzmfdlw ) ;
dataAddr [ 20 ] = ( void * ) ( & localX -> ievyscdcrq ) ; dataAddr [ 21 ] = (
void * ) ( & localX -> asdzcbvawm ) ; dataAddr [ 22 ] = ( void * ) ( & localX
-> iym4havdyu ) ; dataAddr [ 23 ] = ( void * ) ( & localX -> pwwnn4rpgi ) ;
dataAddr [ 24 ] = ( void * ) ( & localX -> atiz2s5la3 ) ; dataAddr [ 25 ] = (
void * ) ( & localX -> evnnue2pdp ) ; dataAddr [ 26 ] = ( void * ) ( & localX
-> dgkffoehk2 ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void DrivetrainHevP4_InitializeVarDimsAddr ( int32_T * vardimsAddr [ ]
) { vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void DrivetrainHevP4_InitializeLoggingFunctions ( RTWLoggingFcnPtr
loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; loggingPtrs [ 1 ] = ( NULL
) ; loggingPtrs [ 2 ] = ( NULL ) ; loggingPtrs [ 3 ] = ( NULL ) ; loggingPtrs
[ 4 ] = ( NULL ) ; loggingPtrs [ 5 ] = ( NULL ) ; loggingPtrs [ 6 ] = ( NULL
) ; loggingPtrs [ 7 ] = ( NULL ) ; loggingPtrs [ 8 ] = ( NULL ) ; loggingPtrs
[ 9 ] = ( NULL ) ; loggingPtrs [ 10 ] = ( NULL ) ; loggingPtrs [ 11 ] = (
NULL ) ; loggingPtrs [ 12 ] = ( NULL ) ; loggingPtrs [ 13 ] = ( NULL ) ;
loggingPtrs [ 14 ] = ( NULL ) ; loggingPtrs [ 15 ] = ( NULL ) ; loggingPtrs [
16 ] = ( NULL ) ; loggingPtrs [ 17 ] = ( NULL ) ; loggingPtrs [ 18 ] = ( NULL
) ; loggingPtrs [ 19 ] = ( NULL ) ; loggingPtrs [ 20 ] = ( NULL ) ;
loggingPtrs [ 21 ] = ( NULL ) ; loggingPtrs [ 22 ] = ( NULL ) ; loggingPtrs [
23 ] = ( NULL ) ; loggingPtrs [ 24 ] = ( NULL ) ; loggingPtrs [ 25 ] = ( NULL
) ; loggingPtrs [ 26 ] = ( NULL ) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } }
;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_VECTOR , 0 , 2 , 0 } , { rtwCAPI_SCALAR , 2 , 2 , 0 } } ; static
uint_T rtDimensionArray [ ] = { 2 , 1 , 1 , 1 } ; static const real_T
rtcapiStoredFloats [ ] = { 0.0 } ; static rtwCAPI_FixPtMap rtFixPtMap [ ] = {
{ ( NULL ) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , }
; static rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , (
int8_T ) 0 , ( uint8_T ) 0 } } ; static int_T rtContextSystems [ 37 ] ;
static rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] = { { 0 , 0 , "" , 0 } } ;
static rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 37 ,
rtContextSystems , loggingMetaInfo , 0 , ( NULL ) , { 0 , ( NULL ) , ( NULL )
} , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL
) , 0 } , { rtBlockStates , 27 } , { rtDataTypeMap , rtDimensionMap ,
rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" ,
{ 2751365443U , 3005098251U , 1201726834U , 1063416906U } , &
mmiStaticInfoLogging , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * DrivetrainHevP4_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void DrivetrainHevP4_InitializeSystemRan ( oqvwukdwj0 * const
ivyyfeoocu , sysRanDType * systemRan [ ] , f2a5ytrc5f * localDW , int_T
systemTid [ ] , void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER (
ivyyfeoocu ) ; UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType
* ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemRan [ 2 ] = ( NULL ) ;
systemRan [ 3 ] = ( NULL ) ; systemRan [ 4 ] = ( NULL ) ; systemRan [ 5 ] = (
sysRanDType * ) & localDW -> eo10mdoia0 ; systemRan [ 6 ] = ( NULL ) ;
systemRan [ 7 ] = ( NULL ) ; systemRan [ 8 ] = ( NULL ) ; systemRan [ 9 ] = (
sysRanDType * ) & localDW -> pvdkznjss2 ; systemRan [ 10 ] = ( sysRanDType *
) & localDW -> fc3sbhift3 ; systemRan [ 11 ] = ( sysRanDType * ) & localDW ->
jzzjgbrvwm ; systemRan [ 12 ] = ( NULL ) ; systemRan [ 13 ] = ( NULL ) ;
systemRan [ 14 ] = ( NULL ) ; systemRan [ 15 ] = ( sysRanDType * ) & localDW
-> hzuoark40t ; systemRan [ 16 ] = ( NULL ) ; systemRan [ 17 ] = (
sysRanDType * ) & localDW -> lhmuy0r2mt [ 0 ] . mwc1d4al3c . fcfn4zgb1m0 .
gj3w1fwhmk ; systemRan [ 18 ] = ( sysRanDType * ) & localDW -> lhmuy0r2mt [ 0
] . mwc1d4al3c . pnwnqvpsljv . mo21e3pi2e ; systemRan [ 19 ] = ( sysRanDType
* ) & localDW -> lhmuy0r2mt [ 0 ] . mwc1d4al3c . gf1fdxvjnxm . b0whoil2mj ;
systemRan [ 20 ] = ( sysRanDType * ) & localDW -> lhmuy0r2mt [ 0 ] .
mwc1d4al3c . gm224dghg1i . akhjbcdors ; systemRan [ 21 ] = ( NULL ) ;
systemRan [ 22 ] = ( NULL ) ; systemRan [ 23 ] = ( NULL ) ; systemRan [ 24 ]
= ( NULL ) ; systemRan [ 25 ] = ( NULL ) ; systemRan [ 26 ] = ( NULL ) ;
systemRan [ 27 ] = ( sysRanDType * ) & localDW -> oodask1ixq [ 0 ] .
mifpjkvj4c . iqoij5snsx . gj3w1fwhmk ; systemRan [ 28 ] = ( sysRanDType * ) &
localDW -> oodask1ixq [ 0 ] . mifpjkvj4c . h2plpnu3mt . mo21e3pi2e ;
systemRan [ 29 ] = ( sysRanDType * ) & localDW -> oodask1ixq [ 0 ] .
mifpjkvj4c . gtmuxhbejy . b0whoil2mj ; systemRan [ 30 ] = ( sysRanDType * ) &
localDW -> oodask1ixq [ 0 ] . mifpjkvj4c . khilm44itf . akhjbcdors ;
systemRan [ 31 ] = ( NULL ) ; systemRan [ 32 ] = ( NULL ) ; systemRan [ 33 ]
= ( NULL ) ; systemRan [ 34 ] = ( NULL ) ; systemRan [ 35 ] = ( NULL ) ;
systemRan [ 36 ] = ( NULL ) ; systemTid [ 1 ] = ivyyfeoocu -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 2 ] = ivyyfeoocu -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 3 ] = ivyyfeoocu -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 4 ] = ivyyfeoocu -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 5 ] = ivyyfeoocu -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 6 ] = ivyyfeoocu -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 7 ] = ivyyfeoocu -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 8 ] = ivyyfeoocu -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 9 ] = ivyyfeoocu -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 10 ] = ivyyfeoocu -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 11 ] = ivyyfeoocu -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 12 ] = ivyyfeoocu -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 13 ] = ivyyfeoocu -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 14 ] = ivyyfeoocu -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 15 ] = ivyyfeoocu -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 16 ] = ivyyfeoocu -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 26 ] = ivyyfeoocu -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 20 ] = ivyyfeoocu -> Timing .
mdlref_GlobalTID [ 1 ] ; systemTid [ 30 ] = ivyyfeoocu -> Timing .
mdlref_GlobalTID [ 1 ] ; systemTid [ 19 ] = ivyyfeoocu -> Timing .
mdlref_GlobalTID [ 1 ] ; systemTid [ 29 ] = ivyyfeoocu -> Timing .
mdlref_GlobalTID [ 1 ] ; systemTid [ 17 ] = ivyyfeoocu -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 27 ] = ivyyfeoocu -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 18 ] = ivyyfeoocu -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 28 ] = ivyyfeoocu -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 21 ] = ivyyfeoocu -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 22 ] = ivyyfeoocu -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 23 ] = ivyyfeoocu -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 24 ] = ivyyfeoocu -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 25 ] = ivyyfeoocu -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 31 ] = ivyyfeoocu -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 32 ] = ivyyfeoocu -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 33 ] = ivyyfeoocu -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 34 ] = ivyyfeoocu -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 35 ] = ivyyfeoocu -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 36 ] = ivyyfeoocu -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] =
0 ; rtContextSystems [ 1 ] = 0 ; rtContextSystems [ 2 ] = 0 ;
rtContextSystems [ 3 ] = 5 ; rtContextSystems [ 4 ] = 5 ; rtContextSystems [
5 ] = 5 ; rtContextSystems [ 6 ] = 9 ; rtContextSystems [ 7 ] = 9 ;
rtContextSystems [ 8 ] = 9 ; rtContextSystems [ 9 ] = 9 ; rtContextSystems [
10 ] = 10 ; rtContextSystems [ 11 ] = 11 ; rtContextSystems [ 12 ] = 15 ;
rtContextSystems [ 13 ] = 15 ; rtContextSystems [ 14 ] = 15 ;
rtContextSystems [ 15 ] = 15 ; rtContextSystems [ 16 ] = 0 ; rtContextSystems
[ 17 ] = 17 ; rtContextSystems [ 18 ] = 18 ; rtContextSystems [ 19 ] = 19 ;
rtContextSystems [ 20 ] = 20 ; rtContextSystems [ 21 ] = 0 ; rtContextSystems
[ 22 ] = 0 ; rtContextSystems [ 23 ] = 0 ; rtContextSystems [ 24 ] = 0 ;
rtContextSystems [ 25 ] = 0 ; rtContextSystems [ 26 ] = 0 ; rtContextSystems
[ 27 ] = 27 ; rtContextSystems [ 28 ] = 28 ; rtContextSystems [ 29 ] = 29 ;
rtContextSystems [ 30 ] = 30 ; rtContextSystems [ 31 ] = 0 ; rtContextSystems
[ 32 ] = 0 ; rtContextSystems [ 33 ] = 0 ; rtContextSystems [ 34 ] = 0 ;
rtContextSystems [ 35 ] = 0 ; rtContextSystems [ 36 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void DrivetrainHevP4_InitializeDataMapInfo ( oqvwukdwj0 * const ivyyfeoocu ,
f2a5ytrc5f * localDW , dv0k21emzh * localX , void * sysRanPtr , int
contextTid ) { rtwCAPI_SetVersion ( ivyyfeoocu -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( ivyyfeoocu -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( ivyyfeoocu -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; DrivetrainHevP4_InitializeDataAddr ( ivyyfeoocu ->
DataMapInfo . dataAddress , localDW , localX ) ; rtwCAPI_SetDataAddressMap (
ivyyfeoocu -> DataMapInfo . mmi , ivyyfeoocu -> DataMapInfo . dataAddress ) ;
DrivetrainHevP4_InitializeVarDimsAddr ( ivyyfeoocu -> DataMapInfo .
vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( ivyyfeoocu -> DataMapInfo .
mmi , ivyyfeoocu -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath (
ivyyfeoocu -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath (
ivyyfeoocu -> DataMapInfo . mmi , ( NULL ) ) ;
DrivetrainHevP4_InitializeLoggingFunctions ( ivyyfeoocu -> DataMapInfo .
loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( ivyyfeoocu -> DataMapInfo . mmi ,
ivyyfeoocu -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetInstanceLoggingInfo (
ivyyfeoocu -> DataMapInfo . mmi , & ivyyfeoocu -> DataMapInfo .
mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( ivyyfeoocu -> DataMapInfo .
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( ivyyfeoocu -> DataMapInfo .
mmi , 0 ) ; DrivetrainHevP4_InitializeSystemRan ( ivyyfeoocu , ivyyfeoocu ->
DataMapInfo . systemRan , localDW , ivyyfeoocu -> DataMapInfo . systemTid ,
sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( ivyyfeoocu -> DataMapInfo .
mmi , ivyyfeoocu -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid (
ivyyfeoocu -> DataMapInfo . mmi , ivyyfeoocu -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( ivyyfeoocu -> DataMapInfo . mmi , & ivyyfeoocu ->
Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void DrivetrainHevP4_host_InitializeDataMapInfo (
DrivetrainHevP4_host_DataMapInfo_T * dataMap , const char * path ) {
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
