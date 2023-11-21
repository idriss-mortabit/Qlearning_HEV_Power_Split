#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "HevP4ReferenceApplication_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 24
#endif
#ifndef SS_INT64
#define SS_INT64 25
#endif
#else
#include "builtin_typeid_types.h"
#include "HevP4ReferenceApplication.h"
#include "HevP4ReferenceApplication_capi.h"
#include "HevP4ReferenceApplication_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Rate Transition1" ) , TARGET_STRING
( "Battery SOC" ) , 0 , 0 , 0 , 0 , 0 } , { 1 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Rate Transition10" ) , TARGET_STRING
( "Battery Current (A)" ) , 0 , 0 , 0 , 0 , 0 } , { 2 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Rate Transition2" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 3 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Rate Transition4" ) , TARGET_STRING
( "Trace Velocity, Target, Actual (mph)" ) , 0 , 0 , 1 , 0 , 0 } , { 4 , 0 ,
TARGET_STRING ( "HevP4ReferenceApplication/Visualization/Rate Transition5" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 5 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Rate Transition7" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 6 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Rate Transition8" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 7 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Unit Conversion" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 1 } , { 8 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Unit Conversion1" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 1 } , { 9 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition" ) ,
TARGET_STRING ( "AccelPdl" ) , 0 , 0 , 0 , 0 , 2 } , { 10 , 0 , TARGET_STRING
( "HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition10" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 11 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition11" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 12 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition13" ) ,
TARGET_STRING ( "BattV" ) , 0 , 0 , 0 , 0 , 2 } , { 13 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition15" ) ,
TARGET_STRING ( "MotSpd" ) , 0 , 0 , 0 , 0 , 2 } , { 14 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition16" ) ,
TARGET_STRING ( "VehSpdFdbk" ) , 0 , 0 , 0 , 0 , 2 } , { 15 , 0 ,
TARGET_STRING (
"HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition17" ) ,
TARGET_STRING ( "EngSpd" ) , 0 , 0 , 0 , 0 , 2 } , { 16 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition18" ) ,
TARGET_STRING ( "TransGear" ) , 0 , 0 , 0 , 0 , 2 } , { 17 , 0 ,
TARGET_STRING (
"HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition19" ) ,
TARGET_STRING ( "BattSoc" ) , 0 , 0 , 0 , 0 , 2 } , { 18 , 0 , TARGET_STRING
( "HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 19 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition21" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 20 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition22" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 21 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition23" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 22 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition25" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 23 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition26" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 24 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition27" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 25 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition28" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 26 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition29" ) ,
TARGET_STRING ( "IgnSwtch" ) , 0 , 1 , 0 , 0 , 2 } , { 27 , 0 , TARGET_STRING
( "HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 28 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition30" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 29 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition31" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 30 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition32" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 31 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition33" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 32 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition4" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 33 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition5" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 34 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition6" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 35 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition7" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 36 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition8" ) ,
TARGET_STRING ( "DecelPdl" ) , 0 , 0 , 0 , 0 , 2 } , { 37 , 0 , TARGET_STRING
( "HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition9" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 38 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Controllers/PCM Input/Unit Conversion14" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 39 , 0 , TARGET_STRING (
 "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/SiEngineController"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 40 , 0 , TARGET_STRING (
 "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/SiEngineController"
) , TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 2 } , { 41 , 0 , TARGET_STRING (
 "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/SiEngineController"
) , TARGET_STRING ( "" ) , 2 , 0 , 0 , 0 , 2 } , { 42 , 0 , TARGET_STRING (
 "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/SiEngineController"
) , TARGET_STRING ( "" ) , 3 , 0 , 0 , 0 , 2 } , { 43 , 0 , TARGET_STRING (
 "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/SiEngineController"
) , TARGET_STRING ( "" ) , 4 , 0 , 0 , 0 , 2 } , { 44 , 0 , TARGET_STRING (
 "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/SiEngineController"
) , TARGET_STRING ( "" ) , 5 , 0 , 0 , 0 , 2 } , { 45 , 0 , TARGET_STRING (
 "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/SiEngineController"
) , TARGET_STRING ( "" ) , 6 , 0 , 0 , 0 , 2 } , { 46 , 0 , TARGET_STRING (
 "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/SiEngineController"
) , TARGET_STRING ( "" ) , 7 , 0 , 0 , 0 , 2 } , { 47 , 0 , TARGET_STRING (
 "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/SiEngineController"
) , TARGET_STRING ( "" ) , 8 , 0 , 0 , 0 , 2 } , { 48 , 0 , TARGET_STRING (
 "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/SiEngineController"
) , TARGET_STRING ( "" ) , 9 , 0 , 0 , 0 , 2 } , { 49 , 0 , TARGET_STRING (
 "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/SiEngineController"
) , TARGET_STRING ( "" ) , 10 , 0 , 0 , 0 , 2 } , { 50 , 0 , TARGET_STRING (
 "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/SiEngineController"
) , TARGET_STRING ( "" ) , 11 , 0 , 0 , 0 , 2 } , { 51 , 0 , TARGET_STRING (
 "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/SiEngineController"
) , TARGET_STRING ( "" ) , 12 , 0 , 0 , 0 , 2 } , { 52 , 0 , TARGET_STRING (
 "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/SiEngineController"
) , TARGET_STRING ( "" ) , 13 , 0 , 0 , 0 , 2 } , { 53 , 0 , TARGET_STRING (
 "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/SiEngineController"
) , TARGET_STRING ( "" ) , 14 , 0 , 0 , 0 , 2 } , { 54 , 0 , TARGET_STRING (
 "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/Transmission Control Module (TCM)"
) , TARGET_STRING ( "GearCmd" ) , 0 , 0 , 0 , 0 , 2 } , { 55 , 0 ,
TARGET_STRING (
"HevP4ReferenceApplication/Drive Cycle Source/Signal Routing/UnitConversion"
) , TARGET_STRING ( "Reference Speed" ) , 0 , 0 , 0 , 0 , 1 } , { 56 , 0 ,
TARGET_STRING (
"HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Manual Switch" ) ,
TARGET_STRING ( "IgSw" ) , 0 , 1 , 0 , 0 , 1 } , { 57 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Drivetrain/Drivetrain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 58 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Drivetrain/Drivetrain" ) ,
TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 1 } , { 59 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Drivetrain/Drivetrain" ) ,
TARGET_STRING ( "" ) , 2 , 1 , 0 , 0 , 3 } , { 60 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Drivetrain/Drivetrain" ) ,
TARGET_STRING ( "" ) , 3 , 1 , 0 , 0 , 1 } , { 61 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Drivetrain/Drivetrain" ) ,
TARGET_STRING ( "" ) , 4 , 0 , 0 , 0 , 1 } , { 62 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Drivetrain/Drivetrain" ) ,
TARGET_STRING ( "" ) , 5 , 0 , 0 , 0 , 1 } , { 63 , 0 , TARGET_STRING (
 "HevP4ReferenceApplication/Passenger Car/Drivetrain Plant Input/First Order Hold"
) , TARGET_STRING ( "Cltch1Cmd" ) , 0 , 0 , 0 , 0 , 1 } , { 64 , 0 ,
TARGET_STRING (
 "HevP4ReferenceApplication/Passenger Car/Drivetrain Plant Input/First Order Hold1"
) , TARGET_STRING ( "BrkCmd" ) , 0 , 0 , 0 , 0 , 1 } , { 65 , 0 ,
TARGET_STRING (
 "HevP4ReferenceApplication/Passenger Car/Drivetrain Plant Input/First Order Hold2"
) , TARGET_STRING ( "GearCmd" ) , 0 , 0 , 0 , 0 , 1 } , { 66 , 0 ,
TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Drivetrain Plant Input/Transfer Fcn"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 67 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Electric Plant/Battery" ) ,
TARGET_STRING ( "BattSoc" ) , 0 , 0 , 0 , 0 , 1 } , { 68 , 0 , TARGET_STRING
( "HevP4ReferenceApplication/Passenger Car/Electric Plant/Battery" ) ,
TARGET_STRING ( "BattV" ) , 1 , 0 , 0 , 0 , 1 } , { 69 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Electric Plant/Battery" ) ,
TARGET_STRING ( "BattCrnt" ) , 2 , 0 , 0 , 0 , 1 } , { 70 , 0 , TARGET_STRING
( "HevP4ReferenceApplication/Passenger Car/Electric Plant/Battery" ) ,
TARGET_STRING ( "" ) , 3 , 0 , 0 , 0 , 1 } , { 71 , 0 , TARGET_STRING (
 "HevP4ReferenceApplication/Passenger Car/Electric Plant/Battery Discharge Dynamics"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 72 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Electric Plant/Motor Coupling Dynamics"
) , TARGET_STRING ( "MotTrq" ) , 0 , 0 , 0 , 0 , 1 } , { 73 , 0 ,
TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Electric Plant Input/First Order Hold"
) , TARGET_STRING ( "MotTrqCmd" ) , 0 , 0 , 0 , 0 , 1 } , { 74 , 0 ,
TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 75 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine" ) ,
TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 1 } , { 76 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine" ) ,
TARGET_STRING ( "" ) , 2 , 0 , 0 , 0 , 4 } , { 77 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine" ) ,
TARGET_STRING ( "" ) , 3 , 0 , 0 , 0 , 4 } , { 78 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine" ) ,
TARGET_STRING ( "" ) , 4 , 0 , 0 , 0 , 1 } , { 79 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine" ) ,
TARGET_STRING ( "" ) , 5 , 0 , 0 , 0 , 1 } , { 80 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine" ) ,
TARGET_STRING ( "" ) , 6 , 0 , 0 , 0 , 1 } , { 81 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine" ) ,
TARGET_STRING ( "" ) , 7 , 0 , 0 , 0 , 1 } , { 82 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine" ) ,
TARGET_STRING ( "" ) , 8 , 0 , 0 , 0 , 1 } , { 83 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine" ) ,
TARGET_STRING ( "" ) , 9 , 0 , 0 , 0 , 1 } , { 84 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine" ) ,
TARGET_STRING ( "" ) , 10 , 0 , 0 , 0 , 1 } , { 85 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine" ) ,
TARGET_STRING ( "" ) , 11 , 0 , 0 , 0 , 1 } , { 86 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine" ) ,
TARGET_STRING ( "" ) , 12 , 0 , 0 , 0 , 1 } , { 87 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine" ) ,
TARGET_STRING ( "" ) , 13 , 0 , 0 , 0 , 1 } , { 88 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine" ) ,
TARGET_STRING ( "" ) , 14 , 0 , 0 , 0 , 1 } , { 89 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine" ) ,
TARGET_STRING ( "" ) , 15 , 0 , 0 , 0 , 1 } , { 90 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine" ) ,
TARGET_STRING ( "" ) , 16 , 0 , 0 , 0 , 1 } , { 91 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine" ) ,
TARGET_STRING ( "" ) , 17 , 0 , 0 , 0 , 1 } , { 92 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine" ) ,
TARGET_STRING ( "" ) , 18 , 0 , 0 , 0 , 1 } , { 93 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine" ) ,
TARGET_STRING ( "" ) , 19 , 0 , 0 , 0 , 1 } , { 94 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine" ) ,
TARGET_STRING ( "" ) , 20 , 0 , 0 , 0 , 4 } , { 95 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine" ) ,
TARGET_STRING ( "" ) , 21 , 0 , 0 , 0 , 4 } , { 96 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine" ) ,
TARGET_STRING ( "" ) , 22 , 0 , 0 , 0 , 4 } , { 97 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine" ) ,
TARGET_STRING ( "" ) , 23 , 0 , 0 , 0 , 4 } , { 98 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine" ) ,
TARGET_STRING ( "" ) , 24 , 0 , 0 , 0 , 4 } , { 99 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine" ) ,
TARGET_STRING ( "" ) , 25 , 0 , 0 , 0 , 4 } , { 100 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine" ) ,
TARGET_STRING ( "" ) , 26 , 0 , 0 , 0 , 4 } , { 101 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine" ) ,
TARGET_STRING ( "" ) , 27 , 0 , 0 , 0 , 4 } , { 102 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine" ) ,
TARGET_STRING ( "" ) , 28 , 0 , 0 , 0 , 4 } , { 103 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine" ) ,
TARGET_STRING ( "" ) , 29 , 0 , 0 , 0 , 1 } , { 104 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine" ) ,
TARGET_STRING ( "" ) , 30 , 0 , 0 , 0 , 1 } , { 105 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine" ) ,
TARGET_STRING ( "" ) , 31 , 0 , 0 , 0 , 1 } , { 106 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine" ) ,
TARGET_STRING ( "" ) , 32 , 0 , 0 , 0 , 1 } , { 107 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine" ) ,
TARGET_STRING ( "" ) , 33 , 0 , 0 , 0 , 1 } , { 108 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine" ) ,
TARGET_STRING ( "" ) , 34 , 0 , 0 , 0 , 4 } , { 109 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine" ) ,
TARGET_STRING ( "" ) , 35 , 0 , 0 , 0 , 3 } , { 110 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine" ) ,
TARGET_STRING ( "" ) , 36 , 0 , 0 , 0 , 4 } , { 111 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine" ) ,
TARGET_STRING ( "" ) , 37 , 0 , 0 , 0 , 4 } , { 112 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine" ) ,
TARGET_STRING ( "" ) , 38 , 0 , 0 , 0 , 4 } , { 113 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine" ) ,
TARGET_STRING ( "" ) , 39 , 0 , 0 , 0 , 4 } , { 114 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine" ) ,
TARGET_STRING ( "" ) , 40 , 0 , 0 , 0 , 4 } , { 115 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 116 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 117 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold10"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 118 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold11"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 119 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold12"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 120 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold13"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 121 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold14"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 122 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 123 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold3"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 124 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold4"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 125 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold5"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 126 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold6"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 127 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold7"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 128 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold8"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 129 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold9"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 130 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/Unit Conversion15"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 131 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Emission Calculations/m to km" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 132 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Emission Calculations/m to mi" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 133 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Emission Calculations/L//100 Km Calc"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 134 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Emission Calculations/L//100 Km Calc1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 135 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Emission Calculations/L//100 Km Calc2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 136 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Emission Calculations/L//100 Km Calc3"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 137 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Emission Calculations/Rate Transition"
) , TARGET_STRING ( "TP HC Mass (g/mi)" ) , 0 , 0 , 0 , 0 , 0 } , { 138 , 0 ,
TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Emission Calculations/Rate Transition1"
) , TARGET_STRING ( "TP CO Mass (g/mi)" ) , 0 , 0 , 0 , 0 , 0 } , { 139 , 0 ,
TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Emission Calculations/Rate Transition2"
) , TARGET_STRING ( "TP NOx Mass (g/mi)" ) , 0 , 0 , 0 , 0 , 0 } , { 140 , 0
, TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Emission Calculations/Rate Transition3"
) , TARGET_STRING ( "TP CO2 Mass (g/km)" ) , 0 , 0 , 0 , 0 , 0 } , { 141 , 0
, TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Performance Calculations/m to 100Km"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 142 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Performance Calculations/m^3 to US Gal"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 143 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Performance Calculations/US MPG Calc"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 144 , 0 , TARGET_STRING (
 "HevP4ReferenceApplication/Visualization/Performance Calculations/Rate Transition3"
) , TARGET_STRING ( "US MPG" ) , 0 , 0 , 0 , 0 , 0 } , { 145 , 0 ,
TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Performance Calculations/Add" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 146 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Performance Calculations/Sqrt" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 147 , 0 , TARGET_STRING (
 "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/Hybrid Control Module (HCM)/Hybrid Control Module (HCM) - Optimal"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 148 , 0 , TARGET_STRING (
 "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/Hybrid Control Module (HCM)/Hybrid Control Module (HCM) - Optimal"
) , TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 2 } , { 149 , 0 , TARGET_STRING (
 "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/Hybrid Control Module (HCM)/Hybrid Control Module (HCM) - Optimal"
) , TARGET_STRING ( "" ) , 2 , 0 , 0 , 0 , 2 } , { 150 , 0 , TARGET_STRING (
 "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/Hybrid Control Module (HCM)/Hybrid Control Module (HCM) - Optimal"
) , TARGET_STRING ( "" ) , 3 , 0 , 0 , 0 , 2 } , { 151 , 0 , TARGET_STRING (
 "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/Hybrid Control Module (HCM)/Hybrid Control Module (HCM) - Optimal"
) , TARGET_STRING ( "" ) , 5 , 0 , 0 , 0 , 2 } , { 152 , 0 , TARGET_STRING (
 "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/Hybrid Control Module (HCM)/Hybrid Control Module (HCM) - Optimal"
) , TARGET_STRING ( "" ) , 6 , 0 , 0 , 0 , 2 } , { 153 , 0 , TARGET_STRING (
 "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/Hybrid Control Module (HCM)/Hybrid Control Module (HCM) - Optimal"
) , TARGET_STRING ( "" ) , 7 , 0 , 0 , 0 , 2 } , { 154 , 0 , TARGET_STRING (
 "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/Hybrid Control Module (HCM)/Hybrid Control Module (HCM) - Optimal"
) , TARGET_STRING ( "" ) , 8 , 0 , 0 , 0 , 2 } , { 155 , 0 , TARGET_STRING (
 "HevP4ReferenceApplication/Drive Cycle Source/Timing Mode/Continuous/Digital Clock"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 5 } , { 156 , 0 , TARGET_STRING (
"HevP4ReferenceApplication/Drive Cycle Source/Timing Mode/Continuous/Add1" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 157 , 0 , TARGET_STRING (
 "HevP4ReferenceApplication/Passenger Car/Electric Plant/Electric Machine/MotMapped"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 158 , 0 , TARGET_STRING (
 "HevP4ReferenceApplication/Passenger Car/Electric Plant/Electric Machine/MotMapped"
) , TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 1 } , { 159 , 8 , TARGET_STRING (
 "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Setup"
) , TARGET_STRING ( "" ) , 1 , 0 , 2 , 0 , 1 } , { 160 , 0 , TARGET_STRING (
 "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Setup/is_active_c8_autolibsharedcommon"
) , TARGET_STRING ( "is_active_c8_autolibsharedcommon" ) , 0 , 2 , 0 , 0 , 1
} , { 161 , 0 , TARGET_STRING (
 "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Vehicle/is_active_c7_autolibsharedcommon"
) , TARGET_STRING ( "is_active_c7_autolibsharedcommon" ) , 0 , 2 , 0 , 0 , 1
} , { 162 , 0 , TARGET_STRING (
 "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 163 , 0 , TARGET_STRING (
 "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Routing/Error Metrics/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 164 , 0 , TARGET_STRING (
 "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Routing/Error Metrics/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 165 , 0 , TARGET_STRING (
 "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Routing/Error Metrics/Unit Delay"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 166 , 13 , TARGET_STRING (
 "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Shift/Basic/Shift Controller"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 6 } , { 167 , 0 , TARGET_STRING (
 "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Shift/Basic/Shift Controller/is_active_c6_autolibsharedcommon"
) , TARGET_STRING ( "is_active_c6_autolibsharedcommon" ) , 0 , 2 , 0 , 0 , 6
} , { 168 , 0 , TARGET_STRING (
 "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Shift/Basic/Shift Controller/GearSelect.is_active_GearSelect"
) , TARGET_STRING ( "is_active_GearSelect" ) , 0 , 2 , 0 , 0 , 6 } , { 169 ,
0 , TARGET_STRING (
 "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Shift/Basic/Shift Controller/GearSelect.is_GearSelect"
) , TARGET_STRING ( "is_GearSelect" ) , 0 , 3 , 0 , 0 , 6 } , { 170 , 0 ,
TARGET_STRING (
 "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/Logical Operator2"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 3 } , { 171 , 0 , TARGET_STRING (
 "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Cont LPF/Divide"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 172 , 0 , TARGET_STRING (
 "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/Logical Operator2"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 3 } , { 173 , 0 , TARGET_STRING (
 "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Shift/Basic/Reverse Change/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 174 , 2 , TARGET_STRING (
 "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/Signal Hold/Pass Through"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 175 , 0 , TARGET_STRING (
 "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/Signal Hold/NOT"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 3 } , { 176 , 5 , TARGET_STRING (
 "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/Signal Hold/Pass Through"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 177 , 0 , TARGET_STRING (
 "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/Signal Hold/NOT"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 3 } , { 178 , 0 , TARGET_STRING (
 "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Shift/Basic/Reverse Change/Compare To Zero1/Compare"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 6 } , { 179 , 2 , TARGET_STRING (
 "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/Signal Hold/Pass Through/u"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 180 , 5 , TARGET_STRING (
 "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/Signal Hold/Pass Through/u"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 181 , TARGET_STRING (
"HevP4ReferenceApplication/Environment/Constant2" ) , TARGET_STRING ( "Value"
) , 0 , 0 , 0 } , { 182 , TARGET_STRING (
"HevP4ReferenceApplication/Environment/Constant3" ) , TARGET_STRING ( "Value"
) , 0 , 0 , 0 } , { 183 , TARGET_STRING (
"HevP4ReferenceApplication/Environment/Constant6" ) , TARGET_STRING ( "Value"
) , 0 , 0 , 0 } , { 184 , TARGET_STRING (
"HevP4ReferenceApplication/Environment/Constant7" ) , TARGET_STRING ( "Value"
) , 0 , 0 , 0 } , { 185 , TARGET_STRING (
"HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver"
) , TARGET_STRING ( "m" ) , 0 , 0 , 0 } , { 186 , TARGET_STRING (
"HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver"
) , TARGET_STRING ( "Kpt" ) , 0 , 0 , 0 } , { 187 , TARGET_STRING (
"HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver"
) , TARGET_STRING ( "tau" ) , 0 , 0 , 0 } , { 188 , TARGET_STRING (
"HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver"
) , TARGET_STRING ( "L" ) , 0 , 0 , 0 } , { 189 , TARGET_STRING (
"HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver"
) , TARGET_STRING ( "aR" ) , 0 , 0 , 0 } , { 190 , TARGET_STRING (
"HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver"
) , TARGET_STRING ( "bR" ) , 0 , 0 , 0 } , { 191 , TARGET_STRING (
"HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver"
) , TARGET_STRING ( "cR" ) , 0 , 0 , 0 } , { 192 , TARGET_STRING (
"HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver"
) , TARGET_STRING ( "g" ) , 0 , 0 , 0 } , { 193 , TARGET_STRING (
"HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver"
) , TARGET_STRING ( "GearInit" ) , 0 , 0 , 0 } , { 194 , TARGET_STRING (
"HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver"
) , TARGET_STRING ( "tShift" ) , 0 , 0 , 0 } , { 195 , TARGET_STRING (
"HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Constant" ) ,
TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 196 , TARGET_STRING (
"HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Manual Switch" ) ,
TARGET_STRING ( "CurrentSetting" ) , 2 , 0 , 0 } , { 197 , TARGET_STRING (
 "HevP4ReferenceApplication/Passenger Car/Drivetrain Plant Input/First Order Hold"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 0 } , { 198 , TARGET_STRING (
 "HevP4ReferenceApplication/Passenger Car/Drivetrain Plant Input/First Order Hold"
) , TARGET_STRING ( "ErrorTolerance" ) , 0 , 0 , 0 } , { 199 , TARGET_STRING
(
 "HevP4ReferenceApplication/Passenger Car/Drivetrain Plant Input/First Order Hold1"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 0 } , { 200 , TARGET_STRING (
 "HevP4ReferenceApplication/Passenger Car/Drivetrain Plant Input/First Order Hold1"
) , TARGET_STRING ( "ErrorTolerance" ) , 0 , 0 , 0 } , { 201 , TARGET_STRING
(
 "HevP4ReferenceApplication/Passenger Car/Drivetrain Plant Input/First Order Hold2"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 0 } , { 202 , TARGET_STRING (
 "HevP4ReferenceApplication/Passenger Car/Drivetrain Plant Input/First Order Hold2"
) , TARGET_STRING ( "ErrorTolerance" ) , 0 , 0 , 0 } , { 203 , TARGET_STRING
(
"HevP4ReferenceApplication/Passenger Car/Drivetrain Plant Input/Transfer Fcn"
) , TARGET_STRING ( "A" ) , 0 , 0 , 0 } , { 204 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Drivetrain Plant Input/Transfer Fcn"
) , TARGET_STRING ( "C" ) , 0 , 0 , 0 } , { 205 , TARGET_STRING (
 "HevP4ReferenceApplication/Passenger Car/Electric Plant/Battery Discharge Dynamics"
) , TARGET_STRING ( "A" ) , 0 , 0 , 0 } , { 206 , TARGET_STRING (
 "HevP4ReferenceApplication/Passenger Car/Electric Plant/Battery Discharge Dynamics"
) , TARGET_STRING ( "C" ) , 0 , 0 , 0 } , { 207 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Electric Plant/Motor Coupling Dynamics"
) , TARGET_STRING ( "A" ) , 0 , 0 , 0 } , { 208 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Electric Plant/Motor Coupling Dynamics"
) , TARGET_STRING ( "C" ) , 0 , 0 , 0 } , { 209 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Electric Plant Input/First Order Hold"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 0 } , { 210 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Electric Plant Input/First Order Hold"
) , TARGET_STRING ( "ErrorTolerance" ) , 0 , 0 , 0 } , { 211 , TARGET_STRING
(
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 0 } , { 212 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold"
) , TARGET_STRING ( "ErrorTolerance" ) , 0 , 0 , 0 } , { 213 , TARGET_STRING
(
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold1"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 0 } , { 214 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold1"
) , TARGET_STRING ( "ErrorTolerance" ) , 0 , 0 , 0 } , { 215 , TARGET_STRING
(
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold10"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 0 } , { 216 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold10"
) , TARGET_STRING ( "ErrorTolerance" ) , 0 , 0 , 0 } , { 217 , TARGET_STRING
(
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold11"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 0 } , { 218 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold11"
) , TARGET_STRING ( "ErrorTolerance" ) , 0 , 0 , 0 } , { 219 , TARGET_STRING
(
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold12"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 0 } , { 220 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold12"
) , TARGET_STRING ( "ErrorTolerance" ) , 0 , 0 , 0 } , { 221 , TARGET_STRING
(
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold13"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 0 } , { 222 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold13"
) , TARGET_STRING ( "ErrorTolerance" ) , 0 , 0 , 0 } , { 223 , TARGET_STRING
(
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold14"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 0 } , { 224 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold14"
) , TARGET_STRING ( "ErrorTolerance" ) , 0 , 0 , 0 } , { 225 , TARGET_STRING
(
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold2"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 0 } , { 226 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold2"
) , TARGET_STRING ( "ErrorTolerance" ) , 0 , 0 , 0 } , { 227 , TARGET_STRING
(
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold3"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 0 } , { 228 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold3"
) , TARGET_STRING ( "ErrorTolerance" ) , 0 , 0 , 0 } , { 229 , TARGET_STRING
(
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold4"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 0 } , { 230 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold4"
) , TARGET_STRING ( "ErrorTolerance" ) , 0 , 0 , 0 } , { 231 , TARGET_STRING
(
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold5"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 0 } , { 232 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold5"
) , TARGET_STRING ( "ErrorTolerance" ) , 0 , 0 , 0 } , { 233 , TARGET_STRING
(
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold6"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 0 } , { 234 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold6"
) , TARGET_STRING ( "ErrorTolerance" ) , 0 , 0 , 0 } , { 235 , TARGET_STRING
(
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold7"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 0 } , { 236 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold7"
) , TARGET_STRING ( "ErrorTolerance" ) , 0 , 0 , 0 } , { 237 , TARGET_STRING
(
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold8"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 0 } , { 238 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold8"
) , TARGET_STRING ( "ErrorTolerance" ) , 0 , 0 , 0 } , { 239 , TARGET_STRING
(
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold9"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 0 } , { 240 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold9"
) , TARGET_STRING ( "ErrorTolerance" ) , 0 , 0 , 0 } , { 241 , TARGET_STRING
(
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/Sensor Dynamics"
) , TARGET_STRING ( "A" ) , 0 , 0 , 0 } , { 242 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/Sensor Dynamics"
) , TARGET_STRING ( "C" ) , 0 , 0 , 0 } , { 243 , TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Emission Calculations/Kg to g" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 244 , TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Emission Calculations/Kg to g " ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 245 , TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Emission Calculations/Kg to g  " ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 246 , TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Emission Calculations/Kg to g   " )
, TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 247 , TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Emission Calculations/m to km" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 248 , TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Emission Calculations/m to mi" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 249 , TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Emission Calculations/Integrator" )
, TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 250 , TARGET_STRING
( "HevP4ReferenceApplication/Visualization/Emission Calculations/Integrator1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 251 ,
TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Emission Calculations/Integrator2" )
, TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 252 , TARGET_STRING
( "HevP4ReferenceApplication/Visualization/Emission Calculations/Integrator3"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 253 ,
TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Emission Calculations/Integrator4" )
, TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 254 , TARGET_STRING
( "HevP4ReferenceApplication/Visualization/Emission Calculations/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 255 , TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Emission Calculations/Saturation" )
, TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 256 , TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Emission Calculations/Saturation1" )
, TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 257 , TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Emission Calculations/Saturation1" )
, TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 258 , TARGET_STRING (
 "HevP4ReferenceApplication/Visualization/Performance Calculations/US EPA kwh//USgal equivalent"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 259 , TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Performance Calculations/s per h" )
, TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 260 , TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Performance Calculations/w per kw" )
, TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 261 , TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Performance Calculations/m to 100Km"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 262 , TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Performance Calculations/m to mile"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 263 , TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Performance Calculations/m^3 per gal"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 264 , TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Performance Calculations/m^3 to US Gal"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 265 , TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Performance Calculations/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 266 ,
TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Performance Calculations/Integrator1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 267 ,
TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Performance Calculations/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 268 , TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Performance Calculations/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 269 , TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Performance Calculations/Saturation1"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 270 , TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Performance Calculations/Saturation1"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 271 , TARGET_STRING (
"HevP4ReferenceApplication/Drive Cycle Source/Timing Mode/Continuous/repeat"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 272 , TARGET_STRING (
"HevP4ReferenceApplication/Drive Cycle Source/Timing Mode/Continuous/tFinal"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 273 , TARGET_STRING (
 "HevP4ReferenceApplication/Drive Cycle Source/Timing Mode/Continuous/Hit  Crossing"
) , TARGET_STRING ( "HitCrossingOffset" ) , 0 , 0 , 0 } , { 274 ,
TARGET_STRING (
 "HevP4ReferenceApplication/Drive Cycle Source/Timing Mode/Continuous/1-D Lookup Table"
) , TARGET_STRING ( "Table" ) , 0 , 3 , 0 } , { 275 , TARGET_STRING (
 "HevP4ReferenceApplication/Drive Cycle Source/Timing Mode/Continuous/1-D Lookup Table"
) , TARGET_STRING ( "BreakpointsForDimension1" ) , 0 , 3 , 0 } , { 276 ,
TARGET_STRING (
"HevP4ReferenceApplication/Drive Cycle Source/Timing Mode/Continuous/Switch"
) , TARGET_STRING ( "Threshold" ) , 0 , 0 , 0 } , { 277 , TARGET_STRING (
 "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Ignition Switch Profile1/fromWS_Signal 1"
) , TARGET_STRING ( "Time0" ) , 0 , 4 , 0 } , { 278 , TARGET_STRING (
 "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Ignition Switch Profile1/fromWS_Signal 1"
) , TARGET_STRING ( "Data0" ) , 0 , 4 , 0 } , { 279 , TARGET_STRING (
 "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Routing/Error Metrics/Integrator2"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 280 ,
TARGET_STRING (
 "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Routing/Error Metrics/Unit Delay"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 5 , 0 } , { 281 ,
TARGET_STRING (
 "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/Signal Hold"
) , TARGET_STRING ( "IC" ) , 0 , 0 , 0 } , { 282 , TARGET_STRING (
 "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 283 , TARGET_STRING (
 "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/0~1"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 284 , TARGET_STRING (
 "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/0~1"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 285 , TARGET_STRING (
 "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 286 , TARGET_STRING (
 "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 287 , TARGET_STRING (
 "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Cont LPF/Integrator1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 288 ,
TARGET_STRING (
 "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/Signal Hold"
) , TARGET_STRING ( "IC" ) , 0 , 0 , 0 } , { 289 , TARGET_STRING (
 "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 290 , TARGET_STRING (
 "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/-1~0"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 291 , TARGET_STRING (
 "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/-1~0"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 292 , TARGET_STRING (
 "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 293 , TARGET_STRING (
 "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 294 , TARGET_STRING (
 "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Shift/Basic/Reverse Change/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 295 , TARGET_STRING (
 "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Shift/Basic/Reverse Change/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 296 , TARGET_STRING (
 "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Shift/Basic/Reverse Change/Compare To Zero/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 297 , TARGET_STRING (
 "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Shift/Basic/Reverse Change/Compare To Zero1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 ,
0 , 0 } } ; static const rtwCAPI_States rtBlockStates [ ] = { { 298 , 0 ,
TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Drivetrain Plant Input/Transfer Fcn"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1
, 0 } , { 299 , 49 , TARGET_STRING (
 "HevP4ReferenceApplication/Passenger Car/Electric Plant/Battery Discharge Dynamics"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1
, 0 } , { 300 , 1 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Electric Plant/Motor Coupling Dynamics"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1
, 0 } , { 301 , 34 , TARGET_STRING (
"HevP4ReferenceApplication/Passenger Car/Engine Plant Input/Sensor Dynamics"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1
, 0 } , { 302 , 55 , TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Emission Calculations/Integrator" )
, TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1 ,
0 } , { 303 , 56 , TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Emission Calculations/Integrator1" )
, TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1 ,
0 } , { 304 , 57 , TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Emission Calculations/Integrator2" )
, TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1 ,
0 } , { 305 , 58 , TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Emission Calculations/Integrator3" )
, TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1 ,
0 } , { 306 , 59 , TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Emission Calculations/Integrator4" )
, TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1 ,
0 } , { 307 , 53 , TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Performance Calculations/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1
, 0 } , { 308 , 54 , TARGET_STRING (
"HevP4ReferenceApplication/Visualization/Performance Calculations/Integrator1"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1
, 0 } , { 309 , 61 , TARGET_STRING (
 "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Routing/Error Metrics/Integrator2"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1
, 0 } , { 310 , - 1 , TARGET_STRING (
 "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Routing/Error Metrics/Unit Delay"
) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 1 , 0 , 2 , 0 , - 1 , 0 } , {
311 , 60 , TARGET_STRING (
 "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Cont LPF/Integrator1"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1
, 0 } , { 0 , - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 ,
- 1 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { 0 , 5 , 1 , 3 , 9 ,
10 , 11 , 12 , 13 , 7 , 8 , 15 , 0 , 14 } ; static const rtwCAPI_Signals
rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ;
static const rtwCAPI_Signals rtRootOutputs [ ] = { { 0 , 0 , ( NULL ) , (
NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_ModelParameters
rtModelParameters [ ] = { { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & c5zlh4mzusp . f0okyy4yyu , &
c5zlh4mzusp . h1jghrqfqr , & c5zlh4mzusp . afw5zssttf , & c5zlh4mzusp .
fqf5ysmqtz [ 0 ] , & c5zlh4mzusp . lxnnoylpgl , & c5zlh4mzusp . ogmmaptk1y ,
& c5zlh4mzusp . ovdoyylbqv , & c5zlh4mzusp . kiksb0cvme [ 0 ] , & c5zlh4mzusp
. bsqyrdigvj , & c5zlh4mzusp . bbi5p03ull , & c5zlh4mzusp . jmk0frun1h , &
c5zlh4mzusp . komuumxu3a , & c5zlh4mzusp . hsnjs2culi , & c5zlh4mzusp .
ilzspmpfew , & c5zlh4mzusp . aivc02lioe , & c5zlh4mzusp . kcmrsy4emv , &
c5zlh4mzusp . l20y3tl2fi , & c5zlh4mzusp . psiy0cbayl , & c5zlh4mzusp .
pobe11xeq5 , & c5zlh4mzusp . a3qhs3xdv3 , & c5zlh4mzusp . lspamfw4np , &
c5zlh4mzusp . c3wnl42pzc , & c5zlh4mzusp . mzvknutvpn , & c5zlh4mzusp .
lzicrvfxs0 , & c5zlh4mzusp . hmgklgutnu , & c5zlh4mzusp . cyv2tcxosp , &
c5zlh4mzusp . ldemmfgvw3 , & c5zlh4mzusp . kf0htme02q , & c5zlh4mzusp .
idps1oqtc2 , & c5zlh4mzusp . j4pyldvufb , & c5zlh4mzusp . fpwy4odd1j , &
c5zlh4mzusp . hudumnlkkp , & c5zlh4mzusp . exmmyiyecb , & c5zlh4mzusp .
let5105viq , & c5zlh4mzusp . da1swk5skq , & c5zlh4mzusp . aqbwnptjwk , &
c5zlh4mzusp . agsfivq05h , & c5zlh4mzusp . jg44dse3nj , & c5zlh4mzusp .
eey5gaxshl , & c5zlh4mzusp . cdj055qwtt , & c5zlh4mzusp . byo0djc3ev , &
c5zlh4mzusp . l5uoxtpgkv , & c5zlh4mzusp . p0doo00o1w , & c5zlh4mzusp .
ddpajetaf2 , & c5zlh4mzusp . plyh5aql1b , & c5zlh4mzusp . mdhboq50pb , &
c5zlh4mzusp . h5mtw1jmmu , & c5zlh4mzusp . nit2nkypbx , & c5zlh4mzusp .
kkglsripg0 , & c5zlh4mzusp . eosdykmyyc , & c5zlh4mzusp . iwqceuwyof , &
c5zlh4mzusp . j5lxue1b2g , & c5zlh4mzusp . hnif32llvq , & c5zlh4mzusp .
gqj31rygmo , & c5zlh4mzusp . dxdkngxky3 , & c5zlh4mzusp . dv3wt0wr2k , &
c5zlh4mzusp . ppit5xnaws , & c5zlh4mzusp . p1sxhrirqu , & c5zlh4mzusp .
diuztsorgb , & c5zlh4mzusp . bxvneesqxv , & c5zlh4mzusp . epagtjnze1 , &
c5zlh4mzusp . cwktzm5bx5 , & c5zlh4mzusp . ct1fs04adt , & c5zlh4mzusp .
js12er4ud2 , & c5zlh4mzusp . jgjpqtsaas , & c5zlh4mzusp . cdupltdhpp , &
c5zlh4mzusp . atf0jpz3pn , & c5zlh4mzusp . mdfwff4l33 , & c5zlh4mzusp .
ovhryeknq0 , & c5zlh4mzusp . poxxkj3bvg , & c5zlh4mzusp . itmoz4lcsg , &
c5zlh4mzusp . po41xrhuja , & c5zlh4mzusp . eun24ypzk4 , & c5zlh4mzusp .
ffpgbotpy5 , & c5zlh4mzusp . nwxo2im0pt , & c5zlh4mzusp . gsinv42o3l , &
c5zlh4mzusp . hq53ossn2q , & c5zlh4mzusp . gkeqenbznl , & c5zlh4mzusp .
bkrpyiybvs , & c5zlh4mzusp . lpqjrdy4bs , & c5zlh4mzusp . iru4fbcx3b , &
c5zlh4mzusp . emphi231ez , & c5zlh4mzusp . gaeow3rqzh , & c5zlh4mzusp .
duc0cubyeu , & c5zlh4mzusp . oeo1eajcvy , & c5zlh4mzusp . ebuggei1gn , &
c5zlh4mzusp . lygr2jvxsh , & c5zlh4mzusp . i3nr2q4ehm , & c5zlh4mzusp .
hpa0gdloal , & c5zlh4mzusp . a0l4e55osj , & c5zlh4mzusp . iytvha1kaa , &
c5zlh4mzusp . dn5ughrrsp , & c5zlh4mzusp . gwrpevjgp4 , & c5zlh4mzusp .
e0oyv3e4dd , & c5zlh4mzusp . dc2npfnluv , & c5zlh4mzusp . mdvnq0h50i , &
c5zlh4mzusp . gvrmsjkbyd , & c5zlh4mzusp . j1kzeqlfwg , & c5zlh4mzusp .
flt0akp4pe , & c5zlh4mzusp . lr2pgfw4gf , & c5zlh4mzusp . monfilmur4 , &
c5zlh4mzusp . keju3jlddl , & c5zlh4mzusp . ah4pksqfih , & c5zlh4mzusp .
j5b0rut2qf , & c5zlh4mzusp . ifin0uxrbw , & c5zlh4mzusp . b0bnfcsyz0 , &
c5zlh4mzusp . kmt0wccsr4 , & c5zlh4mzusp . dmcl4w1he2 , & c5zlh4mzusp .
kt4vcyt4rj , & c5zlh4mzusp . n5n30ohz53 , & c5zlh4mzusp . km2j44r5uv , &
c5zlh4mzusp . dinw2mwr0y , & c5zlh4mzusp . jyhrmsx1yf , & c5zlh4mzusp .
j2en423lbk , & c5zlh4mzusp . cytjwlxltd , & c5zlh4mzusp . dnjvmk5ndp , &
c5zlh4mzusp . bjaf22yvfs , & c5zlh4mzusp . hxyqyfsavy , & c5zlh4mzusp .
owiwiqigkl , & c5zlh4mzusp . jmeumg2nik , & c5zlh4mzusp . c5e2hzpnbf , &
c5zlh4mzusp . iljgvw41cw , & c5zlh4mzusp . og1vaqgvra , & c5zlh4mzusp .
ktrgii52uw , & c5zlh4mzusp . k2gcn0rpks , & c5zlh4mzusp . cmf5iapvn3 , &
c5zlh4mzusp . b0rjr1l1ao , & c5zlh4mzusp . pdwrzcjj3o , & c5zlh4mzusp .
gv0mllfnk1 , & c5zlh4mzusp . gtbbdrbjbz , & c5zlh4mzusp . iqalrceyqn , &
c5zlh4mzusp . l30tekirvc , & c5zlh4mzusp . luftbvp0tn , & c5zlh4mzusp .
gsjn5sz45a , & c5zlh4mzusp . jar5tbvetj , & c5zlh4mzusp . obq4ahy2fk , &
c5zlh4mzusp . opt4wflqns , & c5zlh4mzusp . esrwrast5r , & c5zlh4mzusp .
jhz2jkc3wd , & c5zlh4mzusp . n5gxdf2tw0 , & c5zlh4mzusp . ggorcyccjy , &
c5zlh4mzusp . n1h1mpduzx , & c5zlh4mzusp . psmccdqk4g , & c5zlh4mzusp .
bxy2xzbc3h , & c5zlh4mzusp . k03nsagqex , & c5zlh4mzusp . knetuj3j3h , &
c5zlh4mzusp . g4ryn23br0 , & c5zlh4mzusp . pl1qpeb24y , & c5zlh4mzusp .
beoymwb1ds , & c5zlh4mzusp . mgnwmmmvsy , & c5zlh4mzusp . oujuyvi0mg , &
c5zlh4mzusp . crshssffqc , & c5zlh4mzusp . h0peaivwwn , & c5zlh4mzusp .
k5jqk0sol2 , & c5zlh4mzusp . o1oroyrw13 , & c5zlh4mzusp . h31pywel0d , &
c5zlh4mzusp . bq2avi4o4c , & c5zlh4mzusp . lbhkoluejj , & c5zlh4mzusp .
la3brkkri1 , & c5zlh4mzusp . njyf5jbpjr [ 0 ] , & lkkrkctitnw . k25cpbrhkh ,
& lkkrkctitnw . ev0qxkvgf2 , & c5zlh4mzusp . lb0gyjdkb5 , & c5zlh4mzusp .
l2wo05eoex , & c5zlh4mzusp . iwdvnd12wl [ 0 ] , & c5zlh4mzusp . kenkr33r5i [
0 ] , & c5zlh4mzusp . lbtq0ku545 , & lkkrkctitnw . o5b1d5v4kk , & lkkrkctitnw
. cgd2ecnupw , & lkkrkctitnw . pxrensdadn , & c5zlh4mzusp . cj4kh32gsk , &
c5zlh4mzusp . phefapml0b , & c5zlh4mzusp . ldin2du1sj , & c5zlh4mzusp .
os4bvdu2dn [ 0 ] , & c5zlh4mzusp . im2vq3d3irm . jet0xs01ji , & c5zlh4mzusp .
fz3pquw0iv , & c5zlh4mzusp . d0xw0oxj5a . jet0xs01ji , & c5zlh4mzusp .
aasrrzna5g , & c5zlh4mzusp . e102hifvqt , & c5zlh4mzusp . im2vq3d3irm .
jet0xs01ji , & c5zlh4mzusp . d0xw0oxj5a . jet0xs01ji , & huq5bp1rix .
Constant2_Value , & huq5bp1rix . Constant3_Value , & huq5bp1rix .
Constant6_Value , & huq5bp1rix . Constant7_Value , & huq5bp1rix .
LongitudinalDriver_m , & huq5bp1rix . LongitudinalDriver_Kpt , & huq5bp1rix .
LongitudinalDriver_tau , & huq5bp1rix . LongitudinalDriver_L , & huq5bp1rix .
LongitudinalDriver_aR , & huq5bp1rix . LongitudinalDriver_bR , & huq5bp1rix .
LongitudinalDriver_cR , & huq5bp1rix . LongitudinalDriver_g , & huq5bp1rix .
LongitudinalDriver_GearInit , & huq5bp1rix . LongitudinalDriver_tShift , &
huq5bp1rix . Constant_Value_ev3pvj0r1w , & huq5bp1rix .
ManualSwitch_CurrentSetting , & huq5bp1rix . FirstOrderHold_IniOut , &
huq5bp1rix . FirstOrderHold_ErrTol , & huq5bp1rix . FirstOrderHold1_IniOut ,
& huq5bp1rix . FirstOrderHold1_ErrTol , & huq5bp1rix . FirstOrderHold2_IniOut
, & huq5bp1rix . FirstOrderHold2_ErrTol , & huq5bp1rix . TransferFcn_A , &
huq5bp1rix . TransferFcn_C , & huq5bp1rix . BatteryDischargeDynamics_A , &
huq5bp1rix . BatteryDischargeDynamics_C , & huq5bp1rix .
MotorCouplingDynamics_A , & huq5bp1rix . MotorCouplingDynamics_C , &
huq5bp1rix . FirstOrderHold_IniOut_d4ul1gk5t4 , & huq5bp1rix .
FirstOrderHold_ErrTol_drwqucvaxb , & huq5bp1rix .
FirstOrderHold_IniOut_mzvwi51dfh , & huq5bp1rix .
FirstOrderHold_ErrTol_p53gicbkas , & huq5bp1rix .
FirstOrderHold1_IniOut_ensanaqyt4 , & huq5bp1rix .
FirstOrderHold1_ErrTol_ltw51vguzo , & huq5bp1rix . FirstOrderHold10_IniOut ,
& huq5bp1rix . FirstOrderHold10_ErrTol , & huq5bp1rix .
FirstOrderHold11_IniOut , & huq5bp1rix . FirstOrderHold11_ErrTol , &
huq5bp1rix . FirstOrderHold12_IniOut , & huq5bp1rix . FirstOrderHold12_ErrTol
, & huq5bp1rix . FirstOrderHold13_IniOut , & huq5bp1rix .
FirstOrderHold13_ErrTol , & huq5bp1rix . FirstOrderHold14_IniOut , &
huq5bp1rix . FirstOrderHold14_ErrTol , & huq5bp1rix .
FirstOrderHold2_IniOut_hr33a1vjrv , & huq5bp1rix .
FirstOrderHold2_ErrTol_ffoy3v4qk5 , & huq5bp1rix . FirstOrderHold3_IniOut , &
huq5bp1rix . FirstOrderHold3_ErrTol , & huq5bp1rix . FirstOrderHold4_IniOut ,
& huq5bp1rix . FirstOrderHold4_ErrTol , & huq5bp1rix . FirstOrderHold5_IniOut
, & huq5bp1rix . FirstOrderHold5_ErrTol , & huq5bp1rix .
FirstOrderHold6_IniOut , & huq5bp1rix . FirstOrderHold6_ErrTol , & huq5bp1rix
. FirstOrderHold7_IniOut , & huq5bp1rix . FirstOrderHold7_ErrTol , &
huq5bp1rix . FirstOrderHold8_IniOut , & huq5bp1rix . FirstOrderHold8_ErrTol ,
& huq5bp1rix . FirstOrderHold9_IniOut , & huq5bp1rix . FirstOrderHold9_ErrTol
, & huq5bp1rix . SensorDynamics_A , & huq5bp1rix . SensorDynamics_C , &
huq5bp1rix . Kgtog_Gain , & huq5bp1rix . Kgtog_Gain_lwt3s4frso , & huq5bp1rix
. Kgtog_Gain_faw5o2w5mx , & huq5bp1rix . Kgtog_Gain_cjm53yufi4 , & huq5bp1rix
. mtokm_Gain , & huq5bp1rix . mtomi_Gain , & huq5bp1rix .
Integrator_IC_pqmxruwudg , & huq5bp1rix . Integrator1_IC_kgyqv13ctx , &
huq5bp1rix . Integrator2_IC , & huq5bp1rix . Integrator3_IC , & huq5bp1rix .
Integrator4_IC , & huq5bp1rix . Saturation_UpperSat , & huq5bp1rix .
Saturation_LowerSat , & huq5bp1rix . Saturation1_UpperSat_hiohcychfu , &
huq5bp1rix . Saturation1_LowerSat_dttfca3rbr , & huq5bp1rix .
USEPAkwhUSgalequivalent_Value , & huq5bp1rix . sperh_Value , & huq5bp1rix .
wperkw_Value , & huq5bp1rix . mto100Km_Gain , & huq5bp1rix . mtomile_Gain , &
huq5bp1rix . m3pergal_Gain , & huq5bp1rix . m3toUSGal_Gain , & huq5bp1rix .
Integrator_IC , & huq5bp1rix . Integrator1_IC , & huq5bp1rix .
Saturation_UpperSat_p152syy2lk , & huq5bp1rix .
Saturation_LowerSat_akgyws5are , & huq5bp1rix . Saturation1_UpperSat , &
huq5bp1rix . Saturation1_LowerSat , & huq5bp1rix . repeat_Value , &
huq5bp1rix . tFinal_Value , & huq5bp1rix . HitCrossing_Offset , & huq5bp1rix
. uDLookupTable_tableData [ 0 ] , & huq5bp1rix . uDLookupTable_bp01Data [ 0 ]
, & huq5bp1rix . Switch_Threshold , & huq5bp1rix . fromWS_Signal1_Time0 [ 0 ]
, & huq5bp1rix . fromWS_Signal1_Data0 [ 0 ] , & huq5bp1rix .
Integrator2_IC_oqp4nzfkjx , & huq5bp1rix . UnitDelay_InitialCondition [ 0 ] ,
& huq5bp1rix . SignalHold_IC , & huq5bp1rix . Constant_Value_fj4sklkpbz , &
huq5bp1rix . u1_UpperSat , & huq5bp1rix . u1_LowerSat , & huq5bp1rix .
Saturation_UpperSat_jilowqvm5t , & huq5bp1rix .
Saturation_LowerSat_f5zqi5regx , & huq5bp1rix . Integrator1_IC_ff5zrpozsh , &
huq5bp1rix . SignalHold_IC_b0akor01bo , & huq5bp1rix .
Constant_Value_fgligsbuwo , & huq5bp1rix . u0_UpperSat , & huq5bp1rix .
u0_LowerSat , & huq5bp1rix . Saturation_UpperSat_obsoocj435 , & huq5bp1rix .
Saturation_LowerSat_nnal1fmgyu , & huq5bp1rix . Constant_Value_alt4mz2jvd , &
huq5bp1rix . Constant1_Value , & huq5bp1rix . Constant_Value , & huq5bp1rix .
Constant_Value_lmzuecgapm , & jhyfx1uf4ys . fzppb4fxpw , & jhyfx1uf4ys .
f4jdoevyqa , & jhyfx1uf4ys . hrpvbqnxcm , & jhyfx1uf4ys . p5ary1pyta , &
jhyfx1uf4ys . l43r4icf05 , & jhyfx1uf4ys . oje5ckcb53 , & jhyfx1uf4ys .
muxdrd5ttu , & jhyfx1uf4ys . lcrtnfg2l5 , & jhyfx1uf4ys . nqlma2yszf , &
jhyfx1uf4ys . bsccreyw2k , & jhyfx1uf4ys . pplelyhu0b , & jhyfx1uf4ys .
ble4yq3fvo , & lkkrkctitnw . c1ij1f4luo [ 0 ] , & jhyfx1uf4ys . oelaqhrdzl ,
} ; static int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } ,
{ "unsigned char" , "boolean_T" , 0 , 0 , sizeof ( boolean_T ) , ( uint8_T )
SS_BOOLEAN , 0 , 0 , 0 } , { "unsigned char" , "uint8_T" , 0 , 0 , sizeof (
uint8_T ) , ( uint8_T ) SS_UINT8 , 0 , 0 , 0 } , { "unsigned int" ,
"uint32_T" , 0 , 0 , sizeof ( uint32_T ) , ( uint8_T ) SS_UINT32 , 0 , 0 , 0
} } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 2 , 2 , 0 } , { rtwCAPI_VECTOR , 4 , 2 , 0 } , {
rtwCAPI_VECTOR , 6 , 2 , 0 } , { rtwCAPI_VECTOR , 8 , 2 , 0 } } ; static
const uint_T rtDimensionArray [ ] = { 1 , 1 , 2 , 1 , 401 , 1 , 6 , 1 , 1 , 2
} ; static const real_T rtcapiStoredFloats [ ] = { 0.1 , 0.0 , 0.01 , 0.05 ,
1.0 } ; static const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL
) , rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , (
int8_T ) 4 , ( uint8_T ) 0 } , { ( const void * ) & rtcapiStoredFloats [ 1 ]
, ( const void * ) & rtcapiStoredFloats [ 1 ] , ( int8_T ) 0 , ( uint8_T ) 0
} , { ( const void * ) & rtcapiStoredFloats [ 2 ] , ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( int8_T ) 2 , ( uint8_T ) 0 } , { ( NULL ) , (
NULL ) , 5 , 0 } , { ( NULL ) , ( NULL ) , - 2 , 0 } , { ( const void * ) &
rtcapiStoredFloats [ 3 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , (
int8_T ) 3 , ( uint8_T ) 0 } , { ( const void * ) & rtcapiStoredFloats [ 1 ]
, ( const void * ) & rtcapiStoredFloats [ 4 ] , ( int8_T ) 1 , ( uint8_T ) 0
} } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals ,
181 , rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 117 ,
rtModelParameters , 0 } , { rtBlockStates , 14 } , { rtDataTypeMap ,
rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap ,
rtDimensionArray } , "float" , { 1068892458U , 3960671541U , 1637318959U ,
3633016946U } , ( NULL ) , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ;
const rtwCAPI_ModelMappingStaticInfo *
HevP4ReferenceApplication_GetCAPIStaticMap ( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void HevP4ReferenceApplication_InitializeDataMapInfo ( void ) {
rtwCAPI_SetVersion ( ( * rt_dataMapInfoPtr ) . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetDataAddressMap ( ( * rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ;
rtwCAPI_SetVarDimsAddressMap ( ( * rt_dataMapInfoPtr ) . mmi ,
rtVarDimsAddrMap ) ; rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr )
. mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi
, ( * rt_dataMapInfoPtr ) . childMMI ) ; rtwCAPI_SetChildMMIArrayLen ( ( *
rt_dataMapInfoPtr ) . mmi , 7 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void HevP4ReferenceApplication_host_InitializeDataMapInfo (
HevP4ReferenceApplication_host_DataMapInfo_T * dataMap , const char * path )
{ rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap
-> mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL
) ) ; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , ( NULL ) ) ; dataMap -> childMMI [ 0 ] = & ( dataMap -> child0 . mmi )
; HevP4OptimalController_host_InitializeDataMapInfo ( & ( dataMap -> child0 )
,
 "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/Hybrid Control Module (HCM)/Hybrid Control Module (HCM) - Optimal"
) ; dataMap -> childMMI [ 1 ] = & ( dataMap -> child1 . mmi ) ;
SiEngineController_host_InitializeDataMapInfo ( & ( dataMap -> child1 ) ,
 "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/SiEngineController"
) ; dataMap -> childMMI [ 2 ] = & ( dataMap -> child2 . mmi ) ;
HevP4TransmissionController_host_InitializeDataMapInfo ( & ( dataMap ->
child2 ) ,
 "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/Transmission Control Module (TCM)"
) ; dataMap -> childMMI [ 3 ] = & ( dataMap -> child3 . mmi ) ;
DrivetrainHevP4_host_InitializeDataMapInfo ( & ( dataMap -> child3 ) ,
"HevP4ReferenceApplication/Passenger Car/Drivetrain/Drivetrain" ) ; dataMap
-> childMMI [ 4 ] = & ( dataMap -> child4 . mmi ) ;
BattHevP4_host_InitializeDataMapInfo ( & ( dataMap -> child4 ) ,
"HevP4ReferenceApplication/Passenger Car/Electric Plant/Battery" ) ; dataMap
-> childMMI [ 5 ] = & ( dataMap -> child5 . mmi ) ;
MotMappedP4_host_InitializeDataMapInfo ( & ( dataMap -> child5 ) ,
 "HevP4ReferenceApplication/Passenger Car/Electric Plant/Electric Machine/MotMapped"
) ; dataMap -> childMMI [ 6 ] = & ( dataMap -> child6 . mmi ) ;
SiMappedEngine_host_InitializeDataMapInfo ( & ( dataMap -> child6 ) ,
"HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine" ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , dataMap -> childMMI ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 7 ) ; }
#ifdef __cplusplus
}
#endif
#endif
