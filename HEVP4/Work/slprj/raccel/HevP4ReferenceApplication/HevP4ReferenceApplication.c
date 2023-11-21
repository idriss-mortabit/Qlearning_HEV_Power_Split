#include "HevP4ReferenceApplication.h"
#include "rtwtypes.h"
#include "HevP4ReferenceApplication_private.h"
#include "mwmathutil.h"
#include <emmintrin.h>
#include "getExpmParams_wY8zD8EB.h"
#include "recomputeBlockDiag_jaPUPAO1.h"
#include "xhseqr_9pzSUODQ.h"
#include "rt_logging_mmi.h"
#include "HevP4ReferenceApplication_capi.h"
#include "look1_pbinlcapw.h"
#include "HevP4OptimalController.h"
#include "SiEngineController.h"
#include "HevP4TransmissionController.h"
#include "DrivetrainHevP4.h"
#include "BattHevP4.h"
#include "MotMappedP4.h"
#include "SiMappedEngine.h"
#include "HevP4ReferenceApplication_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; extern ssExecutionInfo gblExecutionInfo ; RTWExtModeInfo *
gblRTWExtModeInfo = NULL ; void raccelForceExtModeShutdown ( boolean_T
extModeStartPktReceived ) { if ( ! extModeStartPktReceived ) { boolean_T
stopRequested = false ; rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 5 , &
stopRequested ) ; } rtExtModeShutdown ( 5 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 6 ; const char_T
* gbl_raccel_Version = "23.2 (R2023b) 01-Aug-2023" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; int_T enableFcnCallFlag [ ] = { 1 , 1 , 1 , 1 , 1 ,
1 } ; const char * raccelLoadInputsAndAperiodicHitTimes ( SimStruct * S ,
const char * inportFileName , int * matFileFormat ) { return
rt_RAccelReadInportsMatFile ( S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
#define cde5cxunga (-1)
#define bgdqeyjlxp ((uint8_T)0U)
#define bzqwqdzng0 (2U)
#define hhlssjf4c4 (1U)
#define j3rvyjhzzw (3U)
c5zlh4mzus c5zlh4mzusp ; jhyfx1uf4y jhyfx1uf4ys ; lkkrkctitn lkkrkctitnw ;
fhfulmlian fhfulmliann ; iml0ztclnc iml0ztclnce ; static SimStruct model_S ;
SimStruct * const rtS = & model_S ; static boolean_T borjpfup5m ( const
real_T x [ 4 ] ) ; static void a5ikvzwpk2 ( const real_T A [ 4 ] , real_T V [
4 ] , real_T T [ 4 ] ) ; static void hjnexlhqyo ( real_T A [ 4 ] , real_T F [
4 ] ) ; void cdu1aqffr2 ( real_T rtp_IC , jghfvfmmrg * localB ) { localB ->
jet0xs01ji = rtp_IC ; } void htnr1ntaxz ( fih5so2yut * localDW ) { localDW ->
jdyejkwif0 = false ; } void bfxorhfdyq ( SimStruct * rtS_p , fih5so2yut *
localDW ) { localDW -> jdyejkwif0 = false ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_p ) ; } void im2vq3d3ir (
SimStruct * rtS_i , boolean_T iiv1c2a3dv , real_T mypqtgzrhm , jghfvfmmrg *
localB , fih5so2yut * localDW ) { if ( ssIsSampleHit ( rtS_i , 1 , 0 ) &&
ssIsModeUpdateTimeStep ( rtS_i ) ) { if ( iiv1c2a3dv ) { if ( ! localDW ->
jdyejkwif0 ) { if ( ssGetTaskTime ( rtS_i , 1 ) != ssGetTStart ( rtS_i ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_i ) ; } localDW ->
jdyejkwif0 = true ; } } else if ( localDW -> jdyejkwif0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_i ) ; htnr1ntaxz ( localDW )
; } } if ( localDW -> jdyejkwif0 ) { localB -> jet0xs01ji = mypqtgzrhm ; if (
ssIsModeUpdateTimeStep ( rtS_i ) ) { srUpdateBC ( localDW -> hnlzvdkzrg ) ; }
} } static boolean_T borjpfup5m ( const real_T x [ 4 ] ) { real_T x_p ;
int32_T k ; boolean_T b_p ; b_p = true ; for ( k = 0 ; k < 4 ; k ++ ) { if (
b_p ) { x_p = x [ k ] ; if ( ( ! muDoubleScalarIsInf ( x_p ) ) && ( !
muDoubleScalarIsNaN ( x_p ) ) ) { } else { b_p = false ; } } else { b_p =
false ; } } return ! b_p ; } static void a5ikvzwpk2 ( const real_T A [ 4 ] ,
real_T V [ 4 ] , real_T T [ 4 ] ) { if ( borjpfup5m ( A ) ) { V [ 0 ] = (
rtNaN ) ; V [ 2 ] = ( rtNaN ) ; V [ 3 ] = ( rtNaN ) ; V [ 1 ] = 0.0 ; T [ 0 ]
= ( rtNaN ) ; T [ 1 ] = ( rtNaN ) ; T [ 2 ] = ( rtNaN ) ; T [ 3 ] = ( rtNaN )
; } else { T [ 0 ] = A [ 0 ] ; T [ 2 ] = A [ 2 ] ; T [ 3 ] = A [ 3 ] ; T [ 1
] = A [ 1 ] ; V [ 2 ] = 0.0 ; V [ 1 ] = 0.0 ; V [ 0 ] = 1.0 ; V [ 3 ] = 1.0 ;
xhseqr_9pzSUODQ ( T , V ) ; } } static void hjnexlhqyo ( real_T A [ 4 ] ,
real_T F [ 4 ] ) { __m128d tmp_g ; __m128d tmp_j ; __m128d tmp_m ; real_T A2
[ 4 ] ; real_T A4 [ 4 ] ; real_T A6 [ 4 ] ; real_T A6_p [ 4 ] ; real_T U [ 4
] ; real_T V [ 4 ] ; real_T A6_idx_2 ; real_T A6_idx_3 ; real_T A_e ; real_T
A_p ; real_T a22 ; real_T d ; real_T exptj ; real_T tmp ; real_T tmp_e ;
real_T tmp_i ; real_T tmp_p ; int32_T blockFormat ; int32_T exitg1 ; int32_T
i ; int32_T r1 ; int32_T r2 ; boolean_T exitg2 ; boolean_T recomputeDiags ;
if ( borjpfup5m ( A ) ) { F [ 0 ] = ( rtNaN ) ; F [ 1 ] = ( rtNaN ) ; F [ 2 ]
= ( rtNaN ) ; F [ 3 ] = ( rtNaN ) ; } else { recomputeDiags = true ;
blockFormat = 0 ; exitg2 = false ; while ( ( ! exitg2 ) && ( blockFormat < 2
) ) { r1 = 0 ; do { exitg1 = 0 ; if ( r1 < 2 ) { if ( ( r1 != blockFormat )
&& ( ! ( A [ ( blockFormat << 1 ) + r1 ] == 0.0 ) ) ) { recomputeDiags =
false ; exitg1 = 1 ; } else { r1 ++ ; } } else { blockFormat ++ ; exitg1 = 2
; } } while ( exitg1 == 0 ) ; if ( exitg1 == 1 ) { exitg2 = true ; } } if (
recomputeDiags ) { F [ 1 ] = 0.0 ; F [ 2 ] = 0.0 ; F [ 0 ] =
muDoubleScalarExp ( A [ 0 ] ) ; F [ 3 ] = muDoubleScalarExp ( A [ 3 ] ) ; }
else { recomputeDiags = true ; blockFormat = 0 ; exitg2 = false ; while ( ( !
exitg2 ) && ( blockFormat < 2 ) ) { r1 = 0 ; do { exitg1 = 0 ; if ( r1 <=
blockFormat ) { if ( ! ( A [ ( blockFormat << 1 ) + r1 ] == A [ ( r1 << 1 ) +
blockFormat ] ) ) { recomputeDiags = false ; exitg1 = 1 ; } else { r1 ++ ; }
} else { blockFormat ++ ; exitg1 = 2 ; } } while ( exitg1 == 0 ) ; if (
exitg1 == 1 ) { exitg2 = true ; } } if ( recomputeDiags ) { a5ikvzwpk2 ( A ,
A4 , A2 ) ; exptj = muDoubleScalarExp ( A2 [ 0 ] ) ; A6 [ 0 ] = A4 [ 0 ] *
exptj ; A6 [ 1 ] = A4 [ 1 ] * exptj ; exptj = muDoubleScalarExp ( A2 [ 3 ] )
; A6 [ 2 ] = A4 [ 2 ] * exptj ; A6 [ 3 ] = A4 [ 3 ] * exptj ; exptj = A4 [ 2
] ; d = A4 [ 0 ] ; a22 = A4 [ 3 ] ; A6_idx_2 = A4 [ 1 ] ; for ( i = 0 ; i <=
0 ; i += 2 ) { tmp_m = _mm_loadu_pd ( & A6 [ i + 2 ] ) ; tmp_g = _mm_loadu_pd
( & A6 [ i ] ) ; _mm_storeu_pd ( & F [ i ] , _mm_add_pd ( _mm_mul_pd ( tmp_m
, _mm_set1_pd ( exptj ) ) , _mm_mul_pd ( tmp_g , _mm_set1_pd ( d ) ) ) ) ;
_mm_storeu_pd ( & F [ i + 2 ] , _mm_add_pd ( _mm_mul_pd ( tmp_m , _mm_set1_pd
( a22 ) ) , _mm_mul_pd ( tmp_g , _mm_set1_pd ( A6_idx_2 ) ) ) ) ; } exptj = (
F [ 0 ] + F [ 0 ] ) / 2.0 ; d = ( F [ 1 ] + F [ 2 ] ) / 2.0 ; a22 = ( F [ 1 ]
+ F [ 2 ] ) / 2.0 ; F [ 3 ] = ( F [ 3 ] + F [ 3 ] ) / 2.0 ; F [ 0 ] = exptj ;
F [ 1 ] = d ; F [ 2 ] = a22 ; } else { recomputeDiags = true ; if ( ( A [ 1 ]
!= 0.0 ) && ( ( A [ 0 ] != A [ 3 ] ) || ( muDoubleScalarSign ( A [ 1 ] ) *
muDoubleScalarSign ( A [ 2 ] ) != - 1.0 ) ) ) { recomputeDiags = false ; }
getExpmParams_wY8zD8EB ( A , A2 , A4 , A6 , & r1 , & exptj ) ; if ( exptj !=
0.0 ) { d = muDoubleScalarPower ( 2.0 , exptj ) ; A [ 0 ] /= d ; A [ 1 ] /= d
; A [ 2 ] /= d ; A [ 3 ] /= d ; d = muDoubleScalarPower ( 2.0 , 2.0 * exptj )
; A2 [ 0 ] /= d ; A2 [ 1 ] /= d ; A2 [ 2 ] /= d ; A2 [ 3 ] /= d ; d =
muDoubleScalarPower ( 2.0 , 4.0 * exptj ) ; A4 [ 0 ] /= d ; A4 [ 1 ] /= d ;
A4 [ 2 ] /= d ; A4 [ 3 ] /= d ; d = muDoubleScalarPower ( 2.0 , 6.0 * exptj )
; A6 [ 0 ] /= d ; A6 [ 1 ] /= d ; A6 [ 2 ] /= d ; A6 [ 3 ] /= d ; } if (
recomputeDiags ) { if ( A [ 1 ] == 0.0 ) { blockFormat = 1 ; } else {
blockFormat = 2 ; } } if ( r1 == 3 ) { U [ 1 ] = A2 [ 1 ] ; U [ 2 ] = A2 [ 2
] ; U [ 0 ] = A2 [ 0 ] + 60.0 ; U [ 3 ] = A2 [ 3 ] + 60.0 ; A6_idx_2 = A [ 2
] ; A6_idx_3 = A [ 0 ] ; A_p = A [ 3 ] ; A_e = A [ 1 ] ; for ( i = 0 ; i < 2
; i ++ ) { d = U [ ( i << 1 ) + 1 ] ; a22 = U [ i << 1 ] ; A6_p [ i << 1 ] =
d * A6_idx_2 + a22 * A6_idx_3 ; A6_p [ ( i << 1 ) + 1 ] = d * A_p + a22 * A_e
; } U [ 0 ] = A6_p [ 0 ] ; V [ 0 ] = 12.0 * A2 [ 0 ] ; U [ 1 ] = A6_p [ 1 ] ;
V [ 1 ] = 12.0 * A2 [ 1 ] ; U [ 2 ] = A6_p [ 2 ] ; V [ 2 ] = 12.0 * A2 [ 2 ]
; U [ 3 ] = A6_p [ 3 ] ; V [ 3 ] = 12.0 * A2 [ 3 ] ; d = 120.0 ; } else if (
r1 == 5 ) { U [ 0 ] = 420.0 * A2 [ 0 ] + A4 [ 0 ] ; U [ 1 ] = 420.0 * A2 [ 1
] + A4 [ 1 ] ; U [ 2 ] = 420.0 * A2 [ 2 ] + A4 [ 2 ] ; U [ 3 ] = 420.0 * A2 [
3 ] + A4 [ 3 ] ; U [ 0 ] += 15120.0 ; U [ 3 ] += 15120.0 ; A6_idx_2 = A [ 2 ]
; A6_idx_3 = A [ 0 ] ; A_p = A [ 3 ] ; A_e = A [ 1 ] ; for ( i = 0 ; i < 2 ;
i ++ ) { d = U [ ( i << 1 ) + 1 ] ; a22 = U [ i << 1 ] ; A6_p [ i << 1 ] = d
* A6_idx_2 + a22 * A6_idx_3 ; A6_p [ ( i << 1 ) + 1 ] = d * A_p + a22 * A_e ;
} U [ 0 ] = A6_p [ 0 ] ; V [ 0 ] = 30.0 * A4 [ 0 ] + 3360.0 * A2 [ 0 ] ; U [
1 ] = A6_p [ 1 ] ; V [ 1 ] = 30.0 * A4 [ 1 ] + 3360.0 * A2 [ 1 ] ; U [ 2 ] =
A6_p [ 2 ] ; V [ 2 ] = 30.0 * A4 [ 2 ] + 3360.0 * A2 [ 2 ] ; U [ 3 ] = A6_p [
3 ] ; V [ 3 ] = 30.0 * A4 [ 3 ] + 3360.0 * A2 [ 3 ] ; d = 30240.0 ; } else if
( r1 == 7 ) { U [ 0 ] = ( 1512.0 * A4 [ 0 ] + A6 [ 0 ] ) + 277200.0 * A2 [ 0
] ; U [ 1 ] = ( 1512.0 * A4 [ 1 ] + A6 [ 1 ] ) + 277200.0 * A2 [ 1 ] ; U [ 2
] = ( 1512.0 * A4 [ 2 ] + A6 [ 2 ] ) + 277200.0 * A2 [ 2 ] ; U [ 3 ] = (
1512.0 * A4 [ 3 ] + A6 [ 3 ] ) + 277200.0 * A2 [ 3 ] ; U [ 0 ] += 8.64864E+6
; U [ 3 ] += 8.64864E+6 ; A6_idx_2 = A [ 2 ] ; A6_idx_3 = A [ 0 ] ; A_p = A [
3 ] ; A_e = A [ 1 ] ; for ( i = 0 ; i < 2 ; i ++ ) { d = U [ ( i << 1 ) + 1 ]
; a22 = U [ i << 1 ] ; A6_p [ i << 1 ] = d * A6_idx_2 + a22 * A6_idx_3 ; A6_p
[ ( i << 1 ) + 1 ] = d * A_p + a22 * A_e ; } U [ 0 ] = A6_p [ 0 ] ; V [ 0 ] =
( 56.0 * A6 [ 0 ] + 25200.0 * A4 [ 0 ] ) + 1.99584E+6 * A2 [ 0 ] ; U [ 1 ] =
A6_p [ 1 ] ; V [ 1 ] = ( 56.0 * A6 [ 1 ] + 25200.0 * A4 [ 1 ] ) + 1.99584E+6
* A2 [ 1 ] ; U [ 2 ] = A6_p [ 2 ] ; V [ 2 ] = ( 56.0 * A6 [ 2 ] + 25200.0 *
A4 [ 2 ] ) + 1.99584E+6 * A2 [ 2 ] ; U [ 3 ] = A6_p [ 3 ] ; V [ 3 ] = ( 56.0
* A6 [ 3 ] + 25200.0 * A4 [ 3 ] ) + 1.99584E+6 * A2 [ 3 ] ; d = 1.729728E+7 ;
} else if ( r1 == 9 ) { d = A6 [ 2 ] ; a22 = A6 [ 0 ] ; A6_idx_2 = A6 [ 3 ] ;
A6_idx_3 = A6 [ 1 ] ; for ( i = 0 ; i < 2 ; i ++ ) { A_p = A2 [ ( i << 1 ) +
1 ] ; A_e = A2 [ i << 1 ] ; V [ i << 1 ] = A_p * d + A_e * a22 ; V [ ( i << 1
) + 1 ] = A_p * A6_idx_2 + A_e * A6_idx_3 ; } U [ 0 ] = ( ( 3960.0 * A6 [ 0 ]
+ V [ 0 ] ) + 2.16216E+6 * A4 [ 0 ] ) + 3.027024E+8 * A2 [ 0 ] ; U [ 1 ] = (
( 3960.0 * A6 [ 1 ] + V [ 1 ] ) + 2.16216E+6 * A4 [ 1 ] ) + 3.027024E+8 * A2
[ 1 ] ; U [ 2 ] = ( ( 3960.0 * A6 [ 2 ] + V [ 2 ] ) + 2.16216E+6 * A4 [ 2 ] )
+ 3.027024E+8 * A2 [ 2 ] ; U [ 3 ] = ( ( 3960.0 * A6 [ 3 ] + V [ 3 ] ) +
2.16216E+6 * A4 [ 3 ] ) + 3.027024E+8 * A2 [ 3 ] ; U [ 0 ] += 8.8216128E+9 ;
U [ 3 ] += 8.8216128E+9 ; A6_idx_2 = A [ 2 ] ; A6_idx_3 = A [ 0 ] ; A_p = A [
3 ] ; A_e = A [ 1 ] ; for ( i = 0 ; i < 2 ; i ++ ) { d = U [ ( i << 1 ) + 1 ]
; a22 = U [ i << 1 ] ; A6_p [ i << 1 ] = d * A6_idx_2 + a22 * A6_idx_3 ; A6_p
[ ( i << 1 ) + 1 ] = d * A_p + a22 * A_e ; } U [ 0 ] = A6_p [ 0 ] ; V [ 0 ] =
( ( 90.0 * V [ 0 ] + 110880.0 * A6 [ 0 ] ) + 3.027024E+7 * A4 [ 0 ] ) +
2.0756736E+9 * A2 [ 0 ] ; U [ 1 ] = A6_p [ 1 ] ; V [ 1 ] = ( ( 90.0 * V [ 1 ]
+ 110880.0 * A6 [ 1 ] ) + 3.027024E+7 * A4 [ 1 ] ) + 2.0756736E+9 * A2 [ 1 ]
; U [ 2 ] = A6_p [ 2 ] ; V [ 2 ] = ( ( 90.0 * V [ 2 ] + 110880.0 * A6 [ 2 ] )
+ 3.027024E+7 * A4 [ 2 ] ) + 2.0756736E+9 * A2 [ 2 ] ; U [ 3 ] = A6_p [ 3 ] ;
V [ 3 ] = ( ( 90.0 * V [ 3 ] + 110880.0 * A6 [ 3 ] ) + 3.027024E+7 * A4 [ 3 ]
) + 2.0756736E+9 * A2 [ 3 ] ; d = 1.76432256E+10 ; } else { U [ 0 ] = (
3.352212864E+10 * A6 [ 0 ] + 1.05594705216E+13 * A4 [ 0 ] ) +
1.1873537964288E+15 * A2 [ 0 ] ; U [ 1 ] = ( 3.352212864E+10 * A6 [ 1 ] +
1.05594705216E+13 * A4 [ 1 ] ) + 1.1873537964288E+15 * A2 [ 1 ] ; U [ 2 ] = (
3.352212864E+10 * A6 [ 2 ] + 1.05594705216E+13 * A4 [ 2 ] ) +
1.1873537964288E+15 * A2 [ 2 ] ; U [ 3 ] = ( 3.352212864E+10 * A6 [ 3 ] +
1.05594705216E+13 * A4 [ 3 ] ) + 1.1873537964288E+15 * A2 [ 3 ] ; U [ 0 ] +=
3.238237626624E+16 ; U [ 3 ] += 3.238237626624E+16 ; d = ( 16380.0 * A4 [ 0 ]
+ A6 [ 0 ] ) + 4.08408E+7 * A2 [ 0 ] ; a22 = ( 16380.0 * A4 [ 1 ] + A6 [ 1 ]
) + 4.08408E+7 * A2 [ 1 ] ; A6_idx_2 = ( 16380.0 * A4 [ 2 ] + A6 [ 2 ] ) +
4.08408E+7 * A2 [ 2 ] ; A6_idx_3 = ( 16380.0 * A4 [ 3 ] + A6 [ 3 ] ) +
4.08408E+7 * A2 [ 3 ] ; for ( i = 0 ; i <= 0 ; i += 2 ) { tmp_m =
_mm_loadu_pd ( & A6 [ i + 2 ] ) ; tmp_g = _mm_loadu_pd ( & A6 [ i ] ) ; tmp_j
= _mm_loadu_pd ( & U [ i ] ) ; _mm_storeu_pd ( & A6_p [ i ] , _mm_add_pd (
_mm_add_pd ( _mm_mul_pd ( tmp_m , _mm_set1_pd ( a22 ) ) , _mm_mul_pd ( tmp_g
, _mm_set1_pd ( d ) ) ) , tmp_j ) ) ; tmp_j = _mm_loadu_pd ( & U [ i + 2 ] )
; _mm_storeu_pd ( & A6_p [ i + 2 ] , _mm_add_pd ( _mm_add_pd ( _mm_mul_pd (
tmp_m , _mm_set1_pd ( A6_idx_3 ) ) , _mm_mul_pd ( tmp_g , _mm_set1_pd (
A6_idx_2 ) ) ) , tmp_j ) ) ; } tmp = ( 182.0 * A6 [ 0 ] + 960960.0 * A4 [ 0 ]
) + 1.32324192E+9 * A2 [ 0 ] ; tmp_p = ( 182.0 * A6 [ 1 ] + 960960.0 * A4 [ 1
] ) + 1.32324192E+9 * A2 [ 1 ] ; tmp_e = ( 182.0 * A6 [ 2 ] + 960960.0 * A4 [
2 ] ) + 1.32324192E+9 * A2 [ 2 ] ; tmp_i = ( 182.0 * A6 [ 3 ] + 960960.0 * A4
[ 3 ] ) + 1.32324192E+9 * A2 [ 3 ] ; A6_idx_2 = A [ 2 ] ; A6_idx_3 = A [ 0 ]
; A_p = A [ 3 ] ; A_e = A [ 1 ] ; for ( i = 0 ; i < 2 ; i ++ ) { d = A6_p [ (
i << 1 ) + 1 ] ; a22 = A6_p [ i << 1 ] ; U [ i << 1 ] = d * A6_idx_2 + a22 *
A6_idx_3 ; U [ ( i << 1 ) + 1 ] = d * A_p + a22 * A_e ; d = A6 [ i + 2 ] ;
a22 = A6 [ i ] ; V [ i ] = ( ( ( d * tmp_p + a22 * tmp ) + 6.704425728E+11 *
a22 ) + 1.29060195264E+14 * A4 [ i ] ) + 7.7717703038976E+15 * A2 [ i ] ; V [
i + 2 ] = ( ( ( d * tmp_i + a22 * tmp_e ) + d * 6.704425728E+11 ) + A4 [ i +
2 ] * 1.29060195264E+14 ) + A2 [ i + 2 ] * 7.7717703038976E+15 ; } d =
6.476475253248E+16 ; } V [ 0 ] += d ; V [ 3 ] += d ; V [ 0 ] -= U [ 0 ] ; U [
0 ] *= 2.0 ; V [ 1 ] -= U [ 1 ] ; U [ 1 ] *= 2.0 ; V [ 2 ] -= U [ 2 ] ; U [ 2
] *= 2.0 ; V [ 3 ] -= U [ 3 ] ; U [ 3 ] *= 2.0 ; if ( muDoubleScalarAbs ( V [
1 ] ) > muDoubleScalarAbs ( V [ 0 ] ) ) { r1 = 1 ; r2 = 0 ; } else { r1 = 0 ;
r2 = 1 ; } d = V [ r2 ] / V [ r1 ] ; a22 = V [ r2 + 2 ] - V [ r1 + 2 ] * d ;
A6_idx_2 = ( U [ r2 ] - U [ r1 ] * d ) / a22 ; F [ 1 ] = A6_idx_2 ; F [ 0 ] =
( U [ r1 ] - V [ r1 + 2 ] * A6_idx_2 ) / V [ r1 ] ; A6_idx_2 = ( U [ r2 + 2 ]
- U [ r1 + 2 ] * d ) / a22 ; F [ 2 ] = ( U [ r1 + 2 ] - V [ r1 + 2 ] *
A6_idx_2 ) / V [ r1 ] ; F [ 0 ] ++ ; F [ 3 ] = A6_idx_2 + 1.0 ; if (
recomputeDiags ) { recomputeBlockDiag_jaPUPAO1 ( A , F , blockFormat ) ; } r1
= ( int32_T ) exptj ; for ( r2 = 0 ; r2 < r1 ; r2 ++ ) { for ( i = 0 ; i <= 0
; i += 2 ) { tmp_m = _mm_loadu_pd ( & F [ i + 2 ] ) ; tmp_m = _mm_mul_pd (
tmp_m , _mm_set1_pd ( F [ 1 ] ) ) ; tmp_g = _mm_loadu_pd ( & F [ i ] ) ;
tmp_g = _mm_mul_pd ( tmp_g , _mm_set1_pd ( F [ 0 ] ) ) ; _mm_storeu_pd ( & A6
[ i ] , _mm_add_pd ( tmp_m , tmp_g ) ) ; tmp_m = _mm_loadu_pd ( & F [ i + 2 ]
) ; tmp_m = _mm_mul_pd ( tmp_m , _mm_set1_pd ( F [ 3 ] ) ) ; tmp_g =
_mm_loadu_pd ( & F [ i ] ) ; tmp_g = _mm_mul_pd ( tmp_g , _mm_set1_pd ( F [ 2
] ) ) ; _mm_storeu_pd ( & A6 [ i + 2 ] , _mm_add_pd ( tmp_m , tmp_g ) ) ; } F
[ 0 ] = A6 [ 0 ] ; F [ 1 ] = A6 [ 1 ] ; F [ 2 ] = A6 [ 2 ] ; F [ 3 ] = A6 [ 3
] ; if ( recomputeDiags ) { A [ 0 ] *= 2.0 ; A [ 1 ] *= 2.0 ; A [ 2 ] *= 2.0
; A [ 3 ] *= 2.0 ; recomputeBlockDiag_jaPUPAO1 ( A , F , blockFormat ) ; } }
} } } } void MdlInitialize ( void ) { jhyfx1uf4ys . fzppb4fxpw = 0.0 ;
jhyfx1uf4ys . hrpvbqnxcm = 0.0 ; lkkrkctitnw . kh5xdhjoen = ( rtInf ) ;
lkkrkctitnw . bhsln1im02 = huq5bp1rix . FirstOrderHold1_IniOut ; lkkrkctitnw
. h4bk44iq0j = ( rtInf ) ; lkkrkctitnw . ovmdszn3vi = 0.0 ; lkkrkctitnw .
fnd1cgu2ez = ( rtInf ) ; lkkrkctitnw . hufmyzg00g = huq5bp1rix .
FirstOrderHold2_IniOut ; lkkrkctitnw . caj4332p1l = ( rtInf ) ; lkkrkctitnw .
fgxzeqilcf = 0.0 ; lkkrkctitnw . pz1rko3nhq = ( rtInf ) ; lkkrkctitnw .
jrbpexblku = huq5bp1rix . FirstOrderHold12_IniOut ; lkkrkctitnw . cpzvjo4vs1
= ( rtInf ) ; lkkrkctitnw . infpntaopi = 0.0 ; jhyfx1uf4ys . p5ary1pyta = 0.0
; jhyfx1uf4ys . f4jdoevyqa = 0.0 ; jhyfx1uf4ys . bsccreyw2k = huq5bp1rix .
Integrator_IC ; jhyfx1uf4ys . pplelyhu0b = huq5bp1rix . Integrator1_IC ;
jhyfx1uf4ys . l43r4icf05 = huq5bp1rix . Integrator_IC_pqmxruwudg ;
jhyfx1uf4ys . oje5ckcb53 = huq5bp1rix . Integrator1_IC_kgyqv13ctx ;
jhyfx1uf4ys . muxdrd5ttu = huq5bp1rix . Integrator2_IC ; jhyfx1uf4ys .
lcrtnfg2l5 = huq5bp1rix . Integrator3_IC ; jhyfx1uf4ys . nqlma2yszf =
huq5bp1rix . Integrator4_IC ; jhyfx1uf4ys . oelaqhrdzl = huq5bp1rix .
Integrator1_IC_ff5zrpozsh ; jhyfx1uf4ys . ble4yq3fvo = huq5bp1rix .
Integrator2_IC_oqp4nzfkjx ; lkkrkctitnw . c1ij1f4luo [ 0 ] = huq5bp1rix .
UnitDelay_InitialCondition [ 0 ] ; lkkrkctitnw . c1ij1f4luo [ 1 ] =
huq5bp1rix . UnitDelay_InitialCondition [ 1 ] ; lkkrkctitnw . lfduexc22r = (
rtInf ) ; lkkrkctitnw . mypipgzpqg = huq5bp1rix . FirstOrderHold_IniOut ;
lkkrkctitnw . hj5jjgcaox = ( rtInf ) ; lkkrkctitnw . e5k5uh1tii = 0.0 ;
lkkrkctitnw . mqxljfmsyj = ( rtInf ) ; lkkrkctitnw . odzx5k4e10 = huq5bp1rix
. FirstOrderHold_IniOut_d4ul1gk5t4 ; lkkrkctitnw . cvod5gblce = ( rtInf ) ;
lkkrkctitnw . pwychxn2rx = 0.0 ; lkkrkctitnw . jz4igdfsjy = ( rtInf ) ;
lkkrkctitnw . bschkhlqcx = huq5bp1rix . FirstOrderHold_IniOut_mzvwi51dfh ;
lkkrkctitnw . enyy3t4ps3 = ( rtInf ) ; lkkrkctitnw . p5zpn5rl4f = 0.0 ;
lkkrkctitnw . droxjfozbf = ( rtInf ) ; lkkrkctitnw . k5oauund31 = huq5bp1rix
. FirstOrderHold1_IniOut_ensanaqyt4 ; lkkrkctitnw . mpliu3opsq = ( rtInf ) ;
lkkrkctitnw . cutrrpdov1 = 0.0 ; lkkrkctitnw . evydn1x5u3 = ( rtInf ) ;
lkkrkctitnw . aliqzpm34m = huq5bp1rix . FirstOrderHold10_IniOut ; lkkrkctitnw
. o2dkzedwyd = ( rtInf ) ; lkkrkctitnw . pzq0ihn3t3 = 0.0 ; lkkrkctitnw .
iwacvi1cvr = ( rtInf ) ; lkkrkctitnw . fue3uld4xj = huq5bp1rix .
FirstOrderHold11_IniOut ; lkkrkctitnw . iepmyvc12j = ( rtInf ) ; lkkrkctitnw
. h5spwccaot = 0.0 ; lkkrkctitnw . lcvtpl0xhz = ( rtInf ) ; lkkrkctitnw .
jdrec4mf1t = huq5bp1rix . FirstOrderHold13_IniOut ; lkkrkctitnw . ipgludoliy
= ( rtInf ) ; lkkrkctitnw . gcwd3vcs2h = 0.0 ; lkkrkctitnw . itlwzywcut = (
rtInf ) ; lkkrkctitnw . mthxcazoeq = huq5bp1rix . FirstOrderHold14_IniOut ;
lkkrkctitnw . mzbogashtm = ( rtInf ) ; lkkrkctitnw . acnon4phey = 0.0 ;
lkkrkctitnw . oq5dnpwzel = ( rtInf ) ; lkkrkctitnw . k5sxdubawm = huq5bp1rix
. FirstOrderHold2_IniOut_hr33a1vjrv ; lkkrkctitnw . pcuhwhpn3x = ( rtInf ) ;
lkkrkctitnw . ldljdyravq = 0.0 ; lkkrkctitnw . jdxnqz3k3z = ( rtInf ) ;
lkkrkctitnw . m0gspyix5l = huq5bp1rix . FirstOrderHold3_IniOut ; lkkrkctitnw
. ialx3y2ktr = ( rtInf ) ; lkkrkctitnw . kpyfexn5a1 = 0.0 ; lkkrkctitnw .
mqiplucikd = ( rtInf ) ; lkkrkctitnw . mtylxvc53n = huq5bp1rix .
FirstOrderHold4_IniOut ; lkkrkctitnw . f1e1x0c2vm = ( rtInf ) ; lkkrkctitnw .
cpjc0nnbop = 0.0 ; lkkrkctitnw . nrnbdvzt0f = ( rtInf ) ; lkkrkctitnw .
irc32x12y1 = huq5bp1rix . FirstOrderHold5_IniOut ; lkkrkctitnw . g4iun1vbdu =
( rtInf ) ; lkkrkctitnw . eokzn5lqzs = 0.0 ; lkkrkctitnw . o141kdey3a = (
rtInf ) ; lkkrkctitnw . fxlat4s44d = huq5bp1rix . FirstOrderHold6_IniOut ;
lkkrkctitnw . fcb3sp11yw = ( rtInf ) ; lkkrkctitnw . pwfj2ojmua = 0.0 ;
lkkrkctitnw . icbcw4dt4i = ( rtInf ) ; lkkrkctitnw . gt3cupzjr1 = huq5bp1rix
. FirstOrderHold7_IniOut ; lkkrkctitnw . bntxvuzexg = ( rtInf ) ; lkkrkctitnw
. mudviuktks = 0.0 ; lkkrkctitnw . b2542hzgcf = ( rtInf ) ; lkkrkctitnw .
frklc1du0s = huq5bp1rix . FirstOrderHold8_IniOut ; lkkrkctitnw . hpttnbo4xq =
( rtInf ) ; lkkrkctitnw . chi35zyntr = 0.0 ; lkkrkctitnw . lnr1sinkco = (
rtInf ) ; lkkrkctitnw . mh53p0dtth = huq5bp1rix . FirstOrderHold9_IniOut ;
lkkrkctitnw . dm1feblhqa = ( rtInf ) ; lkkrkctitnw . bduaxxbpzz = 0.0 ;
c0k3gywf3v ( & ( lkkrkctitnw . ihhigf1gyq . rtm ) , & c5zlh4mzusp .
diuztsorgb , & ( lkkrkctitnw . ihhigf1gyq . rtb ) , & ( lkkrkctitnw .
ihhigf1gyq . rtdw ) , & ( jhyfx1uf4ys . ivpu5oi1vy ) ) ; ob0r0v13wu ( &
c5zlh4mzusp . ifin0uxrbw , & c5zlh4mzusp . b0bnfcsyz0 , & c5zlh4mzusp .
kmt0wccsr4 , & c5zlh4mzusp . n5n30ohz53 , & ( jhyfx1uf4ys . i0l3sl3egl ) ) ;
eeevvys3rt ( & ( lkkrkctitnw . fxfpjs5zwf . rtm ) , & ( lkkrkctitnw .
fxfpjs5zwf . rtdw ) , & ( jhyfx1uf4ys . a1ungebxie ) ) ; cdu1aqffr2 (
huq5bp1rix . SignalHold_IC , & c5zlh4mzusp . im2vq3d3irm ) ; cdu1aqffr2 (
huq5bp1rix . SignalHold_IC_b0akor01bo , & c5zlh4mzusp . d0xw0oxj5a ) ;
lkkrkctitnw . iyz0ey02aq = 0.0 ; lkkrkctitnw . k5owklwcio = 0.0 ; lkkrkctitnw
. irfopsw5u3 = 0.0 ; lkkrkctitnw . dde0fwvl0o = 0.0 ; lkkrkctitnw .
dgfmvwissk = cde5cxunga ; lkkrkctitnw . o5b1d5v4kk = 0U ; lkkrkctitnw .
cgd2ecnupw = 0U ; lkkrkctitnw . pxrensdadn = bgdqeyjlxp ; c5zlh4mzusp .
lbtq0ku545 = 0.0 ; lkkrkctitnw . frajpj20to = 0.0 ; jwsgs15ojz ( &
c5zlh4mzusp . pl1qpeb24y , & c5zlh4mzusp . beoymwb1ds , & ( lkkrkctitnw .
ahts4cu30v . rtdw ) ) ; fvrqcetvmh ( & c5zlh4mzusp . p0doo00o1w , &
c5zlh4mzusp . h5mtw1jmmu , & c5zlh4mzusp . kkglsripg0 , & c5zlh4mzusp .
eosdykmyyc , & c5zlh4mzusp . iwqceuwyof , & c5zlh4mzusp . hnif32llvq , & (
lkkrkctitnw . i1wwqrhe01 . rtb ) , & ( lkkrkctitnw . i1wwqrhe01 . rtdw ) ) ;
kpvk0y2dwm ( & c5zlh4mzusp . dxdkngxky3 , & ( lkkrkctitnw . ehgw5hos5u . rtdw
) ) ; lkkrkctitnw . erh05us4i2 = false ; lkkrkctitnw . ivnj3kwa54 =
cde5cxunga ; lkkrkctitnw . mgfuv3v40s = false ; lkkrkctitnw . kvsmqclsqu =
cde5cxunga ; fpbst3djiy ( & ( jhyfx1uf4ys . nx1404k4i3 ) ) ; { int_T
rootPeriodicContStateIndices [ 1 ] = { 37 } ; real_T
rootPeriodicContStateRanges [ 2 ] = { 0.0 , 720.0 } ; ( void ) memcpy ( (
void * ) fhfulmliann , rootPeriodicContStateIndices , 1 * sizeof ( int_T ) )
; ( void ) memcpy ( ( void * ) iml0ztclnce , rootPeriodicContStateRanges , 2
* sizeof ( real_T ) ) ; } } void MdlEnable ( void ) { eqwuvywyso ( & (
lkkrkctitnw . ihhigf1gyq . rtm ) , & ( lkkrkctitnw . ihhigf1gyq . rtdw ) , &
( ( ( p3zfy11wvw * ) ssGetContStateDisabled ( rtS ) ) -> ivpu5oi1vy ) ) ;
lkkrkctitnw . k5owklwcio = ssGetTaskTime ( rtS , 1 ) ; lkkrkctitnw .
dde0fwvl0o = lkkrkctitnw . k5owklwcio ; } void MdlStart ( void ) { { bool
externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} gxijjrm5wy ( & c5zlh4mzusp . p0doo00o1w , & c5zlh4mzusp . h5mtw1jmmu , &
c5zlh4mzusp . kkglsripg0 , & c5zlh4mzusp . eosdykmyyc , & c5zlh4mzusp .
iwqceuwyof , & c5zlh4mzusp . hnif32llvq ) ; fuersghdre ( & ( lkkrkctitnw .
ahts4cu30v . rtdw ) ) ; ojicl15012 ( & ( lkkrkctitnw . ihhigf1gyq . rtm ) , &
( lkkrkctitnw . ihhigf1gyq . rtb ) , & ( lkkrkctitnw . ihhigf1gyq . rtdw ) ,
& ( ( ( p3zfy11wvw * ) ssGetContStateDisabled ( rtS ) ) -> ivpu5oi1vy ) ) ;
e3hpwcezeu ( & ( lkkrkctitnw . lkxnu4ieaj . rtm ) , & c5zlh4mzusp .
n5n30ohz53 , & ( lkkrkctitnw . lkxnu4ieaj . rtdw ) ) ; lkkrkctitnw .
lh3epubkdg = 0 ; bfxorhfdyq ( rtS , & lkkrkctitnw . im2vq3d3irm ) ;
bfxorhfdyq ( rtS , & lkkrkctitnw . d0xw0oxj5a ) ; { FWksInfo * fromwksInfo ;
if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 , sizeof ( FWksInfo ) ) ) == (
NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName =
 "Simulink.signaleditorblock.SimulationData.getData('SGV2UDRSZWZlcmVuY2VBcHBsaWNhdGlvbi9Mb25naXR1ZGluYWwgRHJpdmVyL0Nsb3NlZCBMb29wL0lnbml0aW9uIFN3aXRjaCBQcm9maWxlMQ==','1')"
; fromwksInfo -> origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ;
fromwksInfo -> origWidth = 1 ; fromwksInfo -> origElSize = sizeof ( real_T )
; fromwksInfo -> data = ( void * ) huq5bp1rix . fromWS_Signal1_Data0 ;
fromwksInfo -> nDataPoints = 6 ; fromwksInfo -> time = ( double * )
huq5bp1rix . fromWS_Signal1_Time0 ; lkkrkctitnw . osxwf31rhs . TimePtr =
fromwksInfo -> time ; lkkrkctitnw . osxwf31rhs . DataPtr = fromwksInfo ->
data ; lkkrkctitnw . osxwf31rhs . RSimInfoPtr = fromwksInfo ; } lkkrkctitnw .
he0vfk52c2 . PrevIndex = 0 ; { int_T * zcTimeIndices = & lkkrkctitnw .
j4cpglu32p [ 0 ] ; const double * timePoints = ( double * ) lkkrkctitnw .
osxwf31rhs . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx = 0 ;
int_T i ; for ( i = 0 ; i < 6 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } lkkrkctitnw .
k5jlqybics = 0 ; } } MdlInitialize ( ) ; MdlEnable ( ) ; } void MdlOutputs (
int_T tid ) { real_T estknqghkv ; real_T cmaot5cdf2 ; real_T f5hz1naj3k ;
real_T gjahxt4ucf ; real_T p43om1eceo ; real_T eskid5f43y ; __m128d tmp ;
__m128d tmp_p ; real_T Ftemp [ 4 ] ; real_T Ftemp_p [ 4 ] ; real_T cw04qfyjxl
[ 4 ] ; real_T sigmaA [ 4 ] ; real_T a2emwewpwz ; real_T fac1 ; real_T fac2 ;
real_T gwpvut1k2o ; real_T h01yte3ap5 ; real_T jnb1m1brfj ; real_T sigmaA_tmp
; real_T sigmaB_idx_0 ; real_T sigmaB_idx_1 ; real_T sigmaB_idx_2 ; real_T
sigmaB_idx_3 ; int32_T i ; int32_T tmp_e ; int32_T tmp_i ; int32_T tmp_m ;
int_T iy ; srClearBC ( lkkrkctitnw . im2vq3d3irm . hnlzvdkzrg ) ; jnb1m1brfj
= ssGetT ( rtS ) ; if ( huq5bp1rix . repeat_Value > huq5bp1rix .
Switch_Threshold ) { a2emwewpwz = muDoubleScalarMod ( jnb1m1brfj , huq5bp1rix
. tFinal_Value ) ; } else { a2emwewpwz = jnb1m1brfj ; } c5zlh4mzusp .
dv3wt0wr2k = look1_pbinlcapw ( a2emwewpwz , huq5bp1rix .
uDLookupTable_bp01Data , huq5bp1rix . uDLookupTable_tableData , & lkkrkctitnw
. cjeoae02q5 , 400U ) ; c5zlh4mzusp . atf0jpz3pn = 0.0 ; c5zlh4mzusp .
atf0jpz3pn += huq5bp1rix . TransferFcn_C * jhyfx1uf4ys . fzppb4fxpw ;
c5zlh4mzusp . eun24ypzk4 = 0.0 ; c5zlh4mzusp . eun24ypzk4 += huq5bp1rix .
MotorCouplingDynamics_C * jhyfx1uf4ys . hrpvbqnxcm ; c5zlh4mzusp . jgjpqtsaas
= lkkrkctitnw . bhsln1im02 ; if ( lkkrkctitnw . kh5xdhjoen != ( rtInf ) ) {
c5zlh4mzusp . jgjpqtsaas += ( ssGetT ( rtS ) - lkkrkctitnw . kh5xdhjoen ) *
lkkrkctitnw . ovmdszn3vi ; } c5zlh4mzusp . cdupltdhpp = lkkrkctitnw .
hufmyzg00g ; if ( lkkrkctitnw . fnd1cgu2ez != ( rtInf ) ) { c5zlh4mzusp .
cdupltdhpp += ( ssGetT ( rtS ) - lkkrkctitnw . fnd1cgu2ez ) * lkkrkctitnw .
fgxzeqilcf ; } DrivetrainHevP4 ( & ( lkkrkctitnw . ihhigf1gyq . rtm ) , &
c5zlh4mzusp . atf0jpz3pn , & c5zlh4mzusp . eun24ypzk4 , & huq5bp1rix .
Constant2_Value , & huq5bp1rix . Constant3_Value , & c5zlh4mzusp . jgjpqtsaas
, & c5zlh4mzusp . cdupltdhpp , & c5zlh4mzusp . p1sxhrirqu , & c5zlh4mzusp .
diuztsorgb , & c5zlh4mzusp . epagtjnze1 , & c5zlh4mzusp . cwktzm5bx5 , &
c5zlh4mzusp . ct1fs04adt , & ( lkkrkctitnw . ihhigf1gyq . rtb ) , & (
lkkrkctitnw . ihhigf1gyq . rtdw ) , & ( jhyfx1uf4ys . ivpu5oi1vy ) , & (
lkkrkctitnw . ihhigf1gyq . rtzce ) , & ( ( ( p3zfy11wvw * )
ssGetContStateDisabled ( rtS ) ) -> ivpu5oi1vy ) ) ; c5zlh4mzusp . kiksb0cvme
[ 0 ] = 2.236936292054402 * c5zlh4mzusp . dv3wt0wr2k ; c5zlh4mzusp .
kiksb0cvme [ 1 ] = 2.236936292054402 * c5zlh4mzusp . p1sxhrirqu ; if (
ssIsSampleHit ( rtS , 1 , 0 ) && ( lkkrkctitnw . opaw4z2zn3 == 0 ) ) {
lkkrkctitnw . h04c4o3sdm [ 0 ] = c5zlh4mzusp . kiksb0cvme [ 0 ] ; lkkrkctitnw
. h04c4o3sdm [ 1 ] = c5zlh4mzusp . kiksb0cvme [ 1 ] ; } if ( ssIsSampleHit (
rtS , 4 , 0 ) ) { lkkrkctitnw . opaw4z2zn3 = 1 ; c5zlh4mzusp . fqf5ysmqtz [ 0
] = lkkrkctitnw . h04c4o3sdm [ 0 ] ; c5zlh4mzusp . fqf5ysmqtz [ 1 ] =
lkkrkctitnw . h04c4o3sdm [ 1 ] ; lkkrkctitnw . opaw4z2zn3 = 0 ; } c5zlh4mzusp
. jmeumg2nik = lkkrkctitnw . jrbpexblku ; if ( lkkrkctitnw . pz1rko3nhq != (
rtInf ) ) { c5zlh4mzusp . jmeumg2nik += ( ssGetT ( rtS ) - lkkrkctitnw .
pz1rko3nhq ) * lkkrkctitnw . infpntaopi ; } c5zlh4mzusp . iqalrceyqn =
huq5bp1rix . SensorDynamics_C * jhyfx1uf4ys . p5ary1pyta * 9.5492965855137211
; SiMappedEngine ( & ( lkkrkctitnw . lkxnu4ieaj . rtm ) , & c5zlh4mzusp .
jmeumg2nik , & c5zlh4mzusp . iqalrceyqn , & c5zlh4mzusp . nwxo2im0pt , &
c5zlh4mzusp . gsinv42o3l , & c5zlh4mzusp . bkrpyiybvs , & c5zlh4mzusp .
lpqjrdy4bs , & c5zlh4mzusp . iru4fbcx3b , & c5zlh4mzusp . emphi231ez , &
c5zlh4mzusp . gaeow3rqzh , & c5zlh4mzusp . duc0cubyeu , & c5zlh4mzusp .
oeo1eajcvy , & c5zlh4mzusp . ebuggei1gn , & c5zlh4mzusp . lygr2jvxsh , &
c5zlh4mzusp . i3nr2q4ehm , & c5zlh4mzusp . hpa0gdloal , & c5zlh4mzusp .
a0l4e55osj , & c5zlh4mzusp . iytvha1kaa , & c5zlh4mzusp . dn5ughrrsp , &
c5zlh4mzusp . gwrpevjgp4 , & c5zlh4mzusp . e0oyv3e4dd , & c5zlh4mzusp .
j5b0rut2qf , & c5zlh4mzusp . ifin0uxrbw , & c5zlh4mzusp . b0bnfcsyz0 , &
c5zlh4mzusp . kmt0wccsr4 , & c5zlh4mzusp . dmcl4w1he2 , & ( lkkrkctitnw .
lkxnu4ieaj . rtb ) , & ( lkkrkctitnw . lkxnu4ieaj . rtdw ) , & ( jhyfx1uf4ys
. i0l3sl3egl ) ) ; if ( ssIsSampleHit ( rtS , 1 , 0 ) && ( lkkrkctitnw .
fi1llmjhnm == 0 ) ) { lkkrkctitnw . m5xnya5qov = c5zlh4mzusp . gsinv42o3l ; }
if ( ssIsSampleHit ( rtS , 4 , 0 ) ) { lkkrkctitnw . fi1llmjhnm = 1 ;
c5zlh4mzusp . afw5zssttf = lkkrkctitnw . m5xnya5qov ; lkkrkctitnw .
fi1llmjhnm = 0 ; } c5zlh4mzusp . bsqyrdigvj = 9.5492965855137211 *
c5zlh4mzusp . cwktzm5bx5 ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if (
lkkrkctitnw . omlg0bte3m == 0 ) { lkkrkctitnw . ezbvugwn3z = c5zlh4mzusp .
bsqyrdigvj ; } if ( lkkrkctitnw . fb1jadv2t5 == 0 ) { lkkrkctitnw .
knm5vku22q = c5zlh4mzusp . nwxo2im0pt ; } } if ( ssIsSampleHit ( rtS , 4 , 0
) ) { lkkrkctitnw . omlg0bte3m = 1 ; c5zlh4mzusp . lxnnoylpgl = lkkrkctitnw .
ezbvugwn3z ; lkkrkctitnw . omlg0bte3m = 0 ; } if ( ssIsSampleHit ( rtS , 1 ,
0 ) && ( lkkrkctitnw . arub2p4zzr == 0 ) ) { lkkrkctitnw . melid01ejw =
c5zlh4mzusp . eun24ypzk4 ; } if ( ssIsSampleHit ( rtS , 4 , 0 ) ) {
lkkrkctitnw . fb1jadv2t5 = 1 ; c5zlh4mzusp . ogmmaptk1y = lkkrkctitnw .
knm5vku22q ; lkkrkctitnw . fb1jadv2t5 = 0 ; lkkrkctitnw . arub2p4zzr = 1 ;
c5zlh4mzusp . ovdoyylbqv = lkkrkctitnw . melid01ejw ; lkkrkctitnw .
arub2p4zzr = 0 ; } c5zlh4mzusp . po41xrhuja = 0.0 ; c5zlh4mzusp . po41xrhuja
+= huq5bp1rix . BatteryDischargeDynamics_C * jhyfx1uf4ys . f4jdoevyqa ;
BattHevP4 ( & ( lkkrkctitnw . fxfpjs5zwf . rtm ) , & c5zlh4mzusp . po41xrhuja
, & huq5bp1rix . Constant6_Value , & c5zlh4mzusp . mdfwff4l33 , & c5zlh4mzusp
. ovhryeknq0 , & c5zlh4mzusp . poxxkj3bvg , & c5zlh4mzusp . itmoz4lcsg , & (
lkkrkctitnw . fxfpjs5zwf . rtb ) , & ( lkkrkctitnw . fxfpjs5zwf . rtdw ) , &
( jhyfx1uf4ys . a1ungebxie ) ) ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if (
lkkrkctitnw . pixene2r1k == 0 ) { lkkrkctitnw . appsnxr1qq = c5zlh4mzusp .
poxxkj3bvg ; } if ( lkkrkctitnw . ohzb3swhrq == 0 ) { lkkrkctitnw .
maexa33f2j = c5zlh4mzusp . mdfwff4l33 ; } } if ( ssIsSampleHit ( rtS , 4 , 0
) ) { lkkrkctitnw . pixene2r1k = 1 ; c5zlh4mzusp . h1jghrqfqr = lkkrkctitnw .
appsnxr1qq ; lkkrkctitnw . pixene2r1k = 0 ; lkkrkctitnw . ohzb3swhrq = 1 ;
c5zlh4mzusp . f0okyy4yyu = lkkrkctitnw . maexa33f2j ; lkkrkctitnw .
ohzb3swhrq = 0 ; } c5zlh4mzusp . psmccdqk4g = huq5bp1rix . m3toUSGal_Gain *
jhyfx1uf4ys . pplelyhu0b ; if ( ssIsModeUpdateTimeStep ( rtS ) ) { if (
c5zlh4mzusp . psmccdqk4g >= huq5bp1rix . Saturation1_UpperSat ) { lkkrkctitnw
. pcvkuijeek = 1 ; } else if ( c5zlh4mzusp . psmccdqk4g > huq5bp1rix .
Saturation1_LowerSat ) { lkkrkctitnw . pcvkuijeek = 0 ; } else { lkkrkctitnw
. pcvkuijeek = - 1 ; } } if ( lkkrkctitnw . pcvkuijeek == 1 ) { a2emwewpwz =
huq5bp1rix . Saturation1_UpperSat ; } else if ( lkkrkctitnw . pcvkuijeek == -
1 ) { a2emwewpwz = huq5bp1rix . Saturation1_LowerSat ; } else { a2emwewpwz =
c5zlh4mzusp . psmccdqk4g ; } c5zlh4mzusp . bxy2xzbc3h = huq5bp1rix .
mtomile_Gain * jhyfx1uf4ys . bsccreyw2k / a2emwewpwz ; if ( ssIsSampleHit (
rtS , 1 , 0 ) && ( lkkrkctitnw . pblwjrwtpn == 0 ) ) { lkkrkctitnw .
gxfbvg10fk = c5zlh4mzusp . bxy2xzbc3h ; } if ( ssIsSampleHit ( rtS , 4 , 0 )
) { lkkrkctitnw . pblwjrwtpn = 1 ; c5zlh4mzusp . k03nsagqex = lkkrkctitnw .
gxfbvg10fk ; lkkrkctitnw . pblwjrwtpn = 0 ; } c5zlh4mzusp . luftbvp0tn =
huq5bp1rix . mtomi_Gain * jhyfx1uf4ys . l43r4icf05 ; if (
ssIsModeUpdateTimeStep ( rtS ) ) { if ( c5zlh4mzusp . luftbvp0tn >=
huq5bp1rix . Saturation_UpperSat ) { lkkrkctitnw . iyr13augnz = 1 ; } else if
( c5zlh4mzusp . luftbvp0tn > huq5bp1rix . Saturation_LowerSat ) { lkkrkctitnw
. iyr13augnz = 0 ; } else { lkkrkctitnw . iyr13augnz = - 1 ; } } if (
lkkrkctitnw . iyr13augnz == 1 ) { a2emwewpwz = huq5bp1rix .
Saturation_UpperSat ; } else if ( lkkrkctitnw . iyr13augnz == - 1 ) {
a2emwewpwz = huq5bp1rix . Saturation_LowerSat ; } else { a2emwewpwz =
c5zlh4mzusp . luftbvp0tn ; } c5zlh4mzusp . gsjn5sz45a = 1.0 / a2emwewpwz * (
huq5bp1rix . Kgtog_Gain * jhyfx1uf4ys . oje5ckcb53 ) ; if ( ssIsSampleHit (
rtS , 1 , 0 ) && ( lkkrkctitnw . cbx5s3rbvn == 0 ) ) { lkkrkctitnw .
o2woa2lt3g = c5zlh4mzusp . gsjn5sz45a ; } if ( ssIsSampleHit ( rtS , 4 , 0 )
) { lkkrkctitnw . cbx5s3rbvn = 1 ; c5zlh4mzusp . esrwrast5r = lkkrkctitnw .
o2woa2lt3g ; lkkrkctitnw . cbx5s3rbvn = 0 ; } c5zlh4mzusp . jar5tbvetj = 1.0
/ a2emwewpwz * ( huq5bp1rix . Kgtog_Gain_lwt3s4frso * jhyfx1uf4ys .
muxdrd5ttu ) ; if ( ssIsSampleHit ( rtS , 1 , 0 ) && ( lkkrkctitnw .
gvx5sloovp == 0 ) ) { lkkrkctitnw . lb0biqjhcr = c5zlh4mzusp . jar5tbvetj ; }
if ( ssIsSampleHit ( rtS , 4 , 0 ) ) { lkkrkctitnw . gvx5sloovp = 1 ;
c5zlh4mzusp . jhz2jkc3wd = lkkrkctitnw . lb0biqjhcr ; lkkrkctitnw .
gvx5sloovp = 0 ; } c5zlh4mzusp . obq4ahy2fk = 1.0 / a2emwewpwz * ( huq5bp1rix
. Kgtog_Gain_faw5o2w5mx * jhyfx1uf4ys . lcrtnfg2l5 ) ; if ( ssIsSampleHit (
rtS , 1 , 0 ) && ( lkkrkctitnw . f0hhltjlcn == 0 ) ) { lkkrkctitnw .
aooi2g3epf = c5zlh4mzusp . obq4ahy2fk ; } if ( ssIsSampleHit ( rtS , 4 , 0 )
) { lkkrkctitnw . f0hhltjlcn = 1 ; c5zlh4mzusp . n5gxdf2tw0 = lkkrkctitnw .
aooi2g3epf ; lkkrkctitnw . f0hhltjlcn = 0 ; } c5zlh4mzusp . l30tekirvc =
huq5bp1rix . mtokm_Gain * jhyfx1uf4ys . l43r4icf05 ; if (
ssIsModeUpdateTimeStep ( rtS ) ) { if ( c5zlh4mzusp . l30tekirvc >=
huq5bp1rix . Saturation1_UpperSat_hiohcychfu ) { lkkrkctitnw . juvdeom5ty = 1
; } else if ( c5zlh4mzusp . l30tekirvc > huq5bp1rix .
Saturation1_LowerSat_dttfca3rbr ) { lkkrkctitnw . juvdeom5ty = 0 ; } else {
lkkrkctitnw . juvdeom5ty = - 1 ; } } if ( lkkrkctitnw . juvdeom5ty == 1 ) {
a2emwewpwz = huq5bp1rix . Saturation1_UpperSat_hiohcychfu ; } else if (
lkkrkctitnw . juvdeom5ty == - 1 ) { a2emwewpwz = huq5bp1rix .
Saturation1_LowerSat_dttfca3rbr ; } else { a2emwewpwz = c5zlh4mzusp .
l30tekirvc ; } c5zlh4mzusp . opt4wflqns = 1.0 / a2emwewpwz * ( huq5bp1rix .
Kgtog_Gain_cjm53yufi4 * jhyfx1uf4ys . nqlma2yszf ) ; if ( ssIsSampleHit ( rtS
, 1 , 0 ) && ( lkkrkctitnw . n5ycrmji5n == 0 ) ) { lkkrkctitnw . pth0sd032r =
c5zlh4mzusp . opt4wflqns ; } if ( ssIsSampleHit ( rtS , 4 , 0 ) ) {
lkkrkctitnw . n5ycrmji5n = 1 ; c5zlh4mzusp . ggorcyccjy = lkkrkctitnw .
pth0sd032r ; lkkrkctitnw . n5ycrmji5n = 0 ; } c5zlh4mzusp . knetuj3j3h =
c5zlh4mzusp . ovhryeknq0 * c5zlh4mzusp . poxxkj3bvg / huq5bp1rix .
wperkw_Value / huq5bp1rix . USEPAkwhUSgalequivalent_Value / huq5bp1rix .
sperh_Value * huq5bp1rix . m3pergal_Gain + c5zlh4mzusp . a0l4e55osj ;
a2emwewpwz = c5zlh4mzusp . p1sxhrirqu * c5zlh4mzusp . p1sxhrirqu ;
c5zlh4mzusp . n1h1mpduzx = huq5bp1rix . mto100Km_Gain * jhyfx1uf4ys .
bsccreyw2k ; if ( ssIsModeUpdateTimeStep ( rtS ) ) { if ( c5zlh4mzusp .
n1h1mpduzx >= huq5bp1rix . Saturation_UpperSat_p152syy2lk ) { lkkrkctitnw .
db235qphyz = 1 ; } else if ( c5zlh4mzusp . n1h1mpduzx > huq5bp1rix .
Saturation_LowerSat_akgyws5are ) { lkkrkctitnw . db235qphyz = 0 ; } else {
lkkrkctitnw . db235qphyz = - 1 ; } } if ( ssIsMajorTimeStep ( rtS ) ) { if (
lkkrkctitnw . lh3epubkdg != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ;
lkkrkctitnw . lh3epubkdg = 0 ; } c5zlh4mzusp . g4ryn23br0 =
muDoubleScalarSqrt ( a2emwewpwz ) ; } else if ( a2emwewpwz < 0.0 ) {
c5zlh4mzusp . g4ryn23br0 = - muDoubleScalarSqrt ( muDoubleScalarAbs (
a2emwewpwz ) ) ; lkkrkctitnw . lh3epubkdg = 1 ; } else { c5zlh4mzusp .
g4ryn23br0 = muDoubleScalarSqrt ( a2emwewpwz ) ; } if ( ssIsSampleHit ( rtS ,
1 , 0 ) ) { if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { lkkrkctitnw . l1spg24m54 =
c5zlh4mzusp . duc0cubyeu ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) {
lkkrkctitnw . fulcowlnoh = c5zlh4mzusp . oeo1eajcvy ; } } if ( ssIsSampleHit
( rtS , 2 , 0 ) ) { c5zlh4mzusp . jmk0frun1h = lkkrkctitnw . l1spg24m54 ; }
if ( ssIsSampleHit ( rtS , 1 , 0 ) && ( lkkrkctitnw . g0rarwcx0n == 0 ) ) {
lkkrkctitnw . js1li4zbu0 = c5zlh4mzusp . ovhryeknq0 ; } if ( ssIsSampleHit (
rtS , 2 , 0 ) ) { c5zlh4mzusp . komuumxu3a = lkkrkctitnw . fulcowlnoh ; } if
( ssIsSampleHit ( rtS , 1 , 0 ) && ( lkkrkctitnw . ph3dyn2vbi == 0 ) ) {
lkkrkctitnw . eg44xjqske = c5zlh4mzusp . cwktzm5bx5 ; } if ( ssIsSampleHit (
rtS , 2 , 0 ) ) { lkkrkctitnw . g0rarwcx0n = 1 ; c5zlh4mzusp . hsnjs2culi =
lkkrkctitnw . js1li4zbu0 ; lkkrkctitnw . g0rarwcx0n = 0 ; } if (
ssIsSampleHit ( rtS , 1 , 0 ) && ( lkkrkctitnw . buvgxg4wiw == 0 ) ) {
lkkrkctitnw . hmcxdptmmg = c5zlh4mzusp . p1sxhrirqu ; } if ( ssIsSampleHit (
rtS , 2 , 0 ) ) { lkkrkctitnw . ph3dyn2vbi = 1 ; c5zlh4mzusp . ilzspmpfew =
lkkrkctitnw . eg44xjqske ; lkkrkctitnw . ph3dyn2vbi = 0 ; } if (
ssIsSampleHit ( rtS , 1 , 0 ) && ( lkkrkctitnw . dzase2snq2 == 0 ) ) {
lkkrkctitnw . adrjeq0yql = c5zlh4mzusp . diuztsorgb ; } if ( ssIsSampleHit (
rtS , 2 , 0 ) ) { lkkrkctitnw . buvgxg4wiw = 1 ; c5zlh4mzusp . aivc02lioe =
lkkrkctitnw . hmcxdptmmg ; lkkrkctitnw . buvgxg4wiw = 0 ; } if (
ssIsSampleHit ( rtS , 1 , 0 ) && ( lkkrkctitnw . ac55uhsiqx == 0 ) ) {
lkkrkctitnw . nzezetf530 = c5zlh4mzusp . ct1fs04adt ; } if ( ssIsSampleHit (
rtS , 2 , 0 ) ) { lkkrkctitnw . dzase2snq2 = 1 ; c5zlh4mzusp . kcmrsy4emv =
lkkrkctitnw . adrjeq0yql ; lkkrkctitnw . dzase2snq2 = 0 ; } if (
ssIsSampleHit ( rtS , 1 , 0 ) && ( lkkrkctitnw . etouatgqfx == 0 ) ) {
lkkrkctitnw . ar5h2piciy = c5zlh4mzusp . mdfwff4l33 ; } if ( ssIsSampleHit (
rtS , 2 , 0 ) ) { lkkrkctitnw . ac55uhsiqx = 1 ; c5zlh4mzusp . l20y3tl2fi =
lkkrkctitnw . nzezetf530 ; lkkrkctitnw . ac55uhsiqx = 0 ; } if (
ssIsSampleHit ( rtS , 1 , 0 ) && ssIsSampleHit ( rtS , 2 , 0 ) ) {
lkkrkctitnw . g13w5b43up = c5zlh4mzusp . ebuggei1gn ; } if ( ssIsSampleHit (
rtS , 2 , 0 ) ) { lkkrkctitnw . etouatgqfx = 1 ; c5zlh4mzusp . psiy0cbayl =
lkkrkctitnw . ar5h2piciy ; lkkrkctitnw . etouatgqfx = 0 ; } if (
ssIsSampleHit ( rtS , 1 , 0 ) && ssIsSampleHit ( rtS , 2 , 0 ) ) {
lkkrkctitnw . p1khtziyyr = c5zlh4mzusp . km2j44r5uv ; } if ( ssIsSampleHit (
rtS , 2 , 0 ) ) { c5zlh4mzusp . pobe11xeq5 = lkkrkctitnw . g13w5b43up ; } if
( ssIsSampleHit ( rtS , 1 , 0 ) && ssIsSampleHit ( rtS , 2 , 0 ) ) {
lkkrkctitnw . lgrvjhedz4 = c5zlh4mzusp . gsinv42o3l ; } if ( ssIsSampleHit (
rtS , 2 , 0 ) ) { c5zlh4mzusp . a3qhs3xdv3 = lkkrkctitnw . p1khtziyyr ; } if
( ssIsSampleHit ( rtS , 1 , 0 ) && ssIsSampleHit ( rtS , 2 , 0 ) ) {
lkkrkctitnw . cofsoqmglc = c5zlh4mzusp . dinw2mwr0y ; } if ( ssIsSampleHit (
rtS , 2 , 0 ) ) { c5zlh4mzusp . lspamfw4np = lkkrkctitnw . lgrvjhedz4 ; } if
( ssIsSampleHit ( rtS , 1 , 0 ) && ssIsSampleHit ( rtS , 2 , 0 ) ) {
lkkrkctitnw . lii3bzekam = c5zlh4mzusp . hq53ossn2q ; } if ( ssIsSampleHit (
rtS , 2 , 0 ) ) { c5zlh4mzusp . c3wnl42pzc = lkkrkctitnw . cofsoqmglc ; } if
( ssIsSampleHit ( rtS , 1 , 0 ) && ssIsSampleHit ( rtS , 2 , 0 ) ) {
lkkrkctitnw . ayhyrzc5bo = c5zlh4mzusp . gkeqenbznl ; } if ( ssIsSampleHit (
rtS , 2 , 0 ) ) { c5zlh4mzusp . mzvknutvpn = lkkrkctitnw . lii3bzekam ; } if
( ssIsSampleHit ( rtS , 1 , 0 ) && ssIsSampleHit ( rtS , 2 , 0 ) ) {
lkkrkctitnw . ep524gyioe = c5zlh4mzusp . bkrpyiybvs ; } if ( ssIsSampleHit (
rtS , 2 , 0 ) ) { c5zlh4mzusp . lzicrvfxs0 = lkkrkctitnw . ayhyrzc5bo ; } if
( ssIsSampleHit ( rtS , 1 , 0 ) && ssIsSampleHit ( rtS , 2 , 0 ) ) {
lkkrkctitnw . dkktohtk2t = c5zlh4mzusp . lpqjrdy4bs ; } if ( ssIsSampleHit (
rtS , 2 , 0 ) ) { c5zlh4mzusp . hmgklgutnu = lkkrkctitnw . ep524gyioe ; } if
( ssIsSampleHit ( rtS , 1 , 0 ) && ssIsSampleHit ( rtS , 2 , 0 ) ) {
lkkrkctitnw . ouiv2ttb4k = c5zlh4mzusp . lygr2jvxsh ; } if ( ssIsSampleHit (
rtS , 2 , 0 ) ) { c5zlh4mzusp . cyv2tcxosp = lkkrkctitnw . dkktohtk2t ; } if
( ssIsSampleHit ( rtS , 1 , 0 ) && ssIsSampleHit ( rtS , 2 , 0 ) ) {
lkkrkctitnw . fqljzsn5xc = c5zlh4mzusp . iru4fbcx3b ; } if ( ssIsSampleHit (
rtS , 2 , 0 ) ) { c5zlh4mzusp . kf0htme02q = lkkrkctitnw . ouiv2ttb4k ; } if
( ssIsSampleHit ( rtS , 1 , 0 ) && ssIsSampleHit ( rtS , 2 , 0 ) ) {
lkkrkctitnw . mgtnggtvl3 = c5zlh4mzusp . emphi231ez ; } if ( ssIsSampleHit (
rtS , 2 , 0 ) ) { c5zlh4mzusp . idps1oqtc2 = lkkrkctitnw . fqljzsn5xc ; } if
( ssIsSampleHit ( rtS , 1 , 0 ) && ssIsSampleHit ( rtS , 2 , 0 ) ) {
lkkrkctitnw . bhqhbe5hw0 = c5zlh4mzusp . gaeow3rqzh ; } if ( ssIsSampleHit (
rtS , 2 , 0 ) ) { c5zlh4mzusp . fpwy4odd1j = lkkrkctitnw . mgtnggtvl3 ; } if
( ssIsSampleHit ( rtS , 1 , 0 ) && ssIsSampleHit ( rtS , 2 , 0 ) ) {
lkkrkctitnw . npx35rsk2y = c5zlh4mzusp . e0oyv3e4dd ; } if ( ssIsSampleHit (
rtS , 2 , 0 ) ) { c5zlh4mzusp . hudumnlkkp = lkkrkctitnw . bhqhbe5hw0 ; } if
( ssIsSampleHit ( rtS , 1 , 0 ) && ssIsSampleHit ( rtS , 2 , 0 ) ) {
lkkrkctitnw . dek2b4z54h = c5zlh4mzusp . i3nr2q4ehm ; } if ( ssIsSampleHit (
rtS , 2 , 0 ) ) { c5zlh4mzusp . exmmyiyecb = lkkrkctitnw . npx35rsk2y ; } if
( ssIsSampleHit ( rtS , 1 , 0 ) && ssIsSampleHit ( rtS , 2 , 0 ) ) {
lkkrkctitnw . hr1f2ycsrs = c5zlh4mzusp . eey5gaxshl ; } if ( ssIsSampleHit (
rtS , 2 , 0 ) ) { c5zlh4mzusp . let5105viq = lkkrkctitnw . dek2b4z54h ; } if
( ssIsSampleHit ( rtS , 1 , 0 ) && ssIsSampleHit ( rtS , 2 , 0 ) ) {
lkkrkctitnw . a2gc015fmo = c5zlh4mzusp . kt4vcyt4rj ; } if ( ssIsSampleHit (
rtS , 2 , 0 ) ) { c5zlh4mzusp . da1swk5skq = lkkrkctitnw . hr1f2ycsrs ; } if
( ssIsSampleHit ( rtS , 1 , 0 ) && ssIsSampleHit ( rtS , 2 , 0 ) ) {
lkkrkctitnw . bugufqhsqr = c5zlh4mzusp . n5n30ohz53 ; } if ( ssIsSampleHit (
rtS , 2 , 0 ) ) { c5zlh4mzusp . aqbwnptjwk = lkkrkctitnw . a2gc015fmo ; } if
( ssIsSampleHit ( rtS , 1 , 0 ) && ( lkkrkctitnw . gzxynjg3le == 0 ) ) {
lkkrkctitnw . h3ritbtaba = huq5bp1rix . Constant7_Value ; } if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { c5zlh4mzusp . jg44dse3nj = lkkrkctitnw .
bugufqhsqr ; lkkrkctitnw . gzxynjg3le = 1 ; c5zlh4mzusp . j4pyldvufb =
lkkrkctitnw . h3ritbtaba ; lkkrkctitnw . gzxynjg3le = 0 ; } a2emwewpwz =
jhyfx1uf4ys . oelaqhrdzl ; gwpvut1k2o = jhyfx1uf4ys . oelaqhrdzl -
c5zlh4mzusp . lb0gyjdkb5 ; if ( c5zlh4mzusp . cj4kh32gsk ) { h01yte3ap5 = 0.0
; } else if ( gwpvut1k2o > huq5bp1rix . u1_UpperSat ) { h01yte3ap5 =
huq5bp1rix . u1_UpperSat ; } else if ( gwpvut1k2o < huq5bp1rix . u1_LowerSat
) { h01yte3ap5 = huq5bp1rix . u1_LowerSat ; } else { h01yte3ap5 = gwpvut1k2o
; } if ( h01yte3ap5 > huq5bp1rix . Saturation_UpperSat_jilowqvm5t ) {
estknqghkv = huq5bp1rix . Saturation_UpperSat_jilowqvm5t ; } else if (
h01yte3ap5 < huq5bp1rix . Saturation_LowerSat_f5zqi5regx ) { estknqghkv =
huq5bp1rix . Saturation_LowerSat_f5zqi5regx ; } else { estknqghkv =
h01yte3ap5 ; } im2vq3d3ir ( rtS , c5zlh4mzusp . fz3pquw0iv , estknqghkv , &
c5zlh4mzusp . im2vq3d3irm , & lkkrkctitnw . im2vq3d3irm ) ; if ( c5zlh4mzusp
. ldin2du1sj ) { h01yte3ap5 = 0.0 ; } else if ( gwpvut1k2o > huq5bp1rix .
u0_UpperSat ) { h01yte3ap5 = - huq5bp1rix . u0_UpperSat ; } else if (
gwpvut1k2o < huq5bp1rix . u0_LowerSat ) { h01yte3ap5 = - huq5bp1rix .
u0_LowerSat ; } else { h01yte3ap5 = - gwpvut1k2o ; } if ( h01yte3ap5 >
huq5bp1rix . Saturation_UpperSat_obsoocj435 ) { cmaot5cdf2 = huq5bp1rix .
Saturation_UpperSat_obsoocj435 ; } else if ( h01yte3ap5 < huq5bp1rix .
Saturation_LowerSat_nnal1fmgyu ) { cmaot5cdf2 = huq5bp1rix .
Saturation_LowerSat_nnal1fmgyu ; } else { cmaot5cdf2 = h01yte3ap5 ; }
im2vq3d3ir ( rtS , c5zlh4mzusp . aasrrzna5g , cmaot5cdf2 , & c5zlh4mzusp .
d0xw0oxj5a , & lkkrkctitnw . d0xw0oxj5a ) ; if ( ssIsSampleHit ( rtS , 1 , 0
) ) { lkkrkctitnw . k5owklwcio = ssGetTaskTime ( rtS , 1 ) ; lkkrkctitnw .
irfopsw5u3 = lkkrkctitnw . k5owklwcio - lkkrkctitnw . dde0fwvl0o ;
lkkrkctitnw . dde0fwvl0o = lkkrkctitnw . k5owklwcio ; lkkrkctitnw .
iyz0ey02aq += lkkrkctitnw . irfopsw5u3 ; lkkrkctitnw . dgfmvwissk =
cde5cxunga ; if ( lkkrkctitnw . o5b1d5v4kk == 0U ) { lkkrkctitnw . o5b1d5v4kk
= 1U ; lkkrkctitnw . cgd2ecnupw = 1U ; c5zlh4mzusp . lbtq0ku545 = huq5bp1rix
. LongitudinalDriver_GearInit ; lkkrkctitnw . frajpj20to = huq5bp1rix .
LongitudinalDriver_GearInit ; if ( huq5bp1rix . LongitudinalDriver_GearInit <
0.0 ) { lkkrkctitnw . iyz0ey02aq = 0.0 ; lkkrkctitnw . pxrensdadn =
j3rvyjhzzw ; c5zlh4mzusp . lbtq0ku545 = - 1.0 ; } else if ( huq5bp1rix .
LongitudinalDriver_GearInit == 0.0 ) { lkkrkctitnw . iyz0ey02aq = 0.0 ;
lkkrkctitnw . pxrensdadn = hhlssjf4c4 ; c5zlh4mzusp . lbtq0ku545 = 0.0 ; }
else { lkkrkctitnw . iyz0ey02aq = 0.0 ; lkkrkctitnw . pxrensdadn = bzqwqdzng0
; } } else { switch ( lkkrkctitnw . pxrensdadn ) { case hhlssjf4c4 : if ( ( (
ssGetTaskTime ( rtS , 1 ) - lkkrkctitnw . dde0fwvl0o ) + lkkrkctitnw .
iyz0ey02aq >= huq5bp1rix . LongitudinalDriver_tShift ) && ( ( c5zlh4mzusp .
dv3wt0wr2k > 0.0 ) && ( c5zlh4mzusp . im2vq3d3irm . jet0xs01ji > 0.0 ) ) ) {
lkkrkctitnw . frajpj20to ++ ; lkkrkctitnw . iyz0ey02aq = 0.0 ; lkkrkctitnw .
pxrensdadn = bzqwqdzng0 ; c5zlh4mzusp . lbtq0ku545 = lkkrkctitnw . frajpj20to
; } else if ( ( ( ssGetTaskTime ( rtS , 1 ) - lkkrkctitnw . dde0fwvl0o ) +
lkkrkctitnw . iyz0ey02aq >= huq5bp1rix . LongitudinalDriver_tShift ) && (
c5zlh4mzusp . dv3wt0wr2k < 0.0 ) ) { lkkrkctitnw . frajpj20to -- ;
lkkrkctitnw . iyz0ey02aq = 0.0 ; lkkrkctitnw . pxrensdadn = j3rvyjhzzw ;
c5zlh4mzusp . lbtq0ku545 = - 1.0 ; } break ; case bzqwqdzng0 : if ( ( (
ssGetTaskTime ( rtS , 1 ) - lkkrkctitnw . dde0fwvl0o ) + lkkrkctitnw .
iyz0ey02aq >= huq5bp1rix . LongitudinalDriver_tShift ) && ( ( ( c5zlh4mzusp .
d0xw0oxj5a . jet0xs01ji >= 0.0 ) && ( c5zlh4mzusp . p1sxhrirqu <= 0.0 ) && (
c5zlh4mzusp . im2vq3d3irm . jet0xs01ji <= 0.0 ) ) || ( c5zlh4mzusp .
dv3wt0wr2k <= 0.0 ) ) ) { lkkrkctitnw . frajpj20to -- ; lkkrkctitnw .
iyz0ey02aq = 0.0 ; lkkrkctitnw . pxrensdadn = hhlssjf4c4 ; c5zlh4mzusp .
lbtq0ku545 = 0.0 ; } break ; default : if ( ( ( ssGetTaskTime ( rtS , 1 ) -
lkkrkctitnw . dde0fwvl0o ) + lkkrkctitnw . iyz0ey02aq >= huq5bp1rix .
LongitudinalDriver_tShift ) && ( c5zlh4mzusp . dv3wt0wr2k >= 0.0 ) ) {
lkkrkctitnw . frajpj20to ++ ; lkkrkctitnw . iyz0ey02aq = 0.0 ; lkkrkctitnw .
pxrensdadn = hhlssjf4c4 ; c5zlh4mzusp . lbtq0ku545 = 0.0 ; } break ; } }
c5zlh4mzusp . e102hifvqt = ( c5zlh4mzusp . lbtq0ku545 > huq5bp1rix .
Constant_Value_lmzuecgapm ) ; } if ( ( c5zlh4mzusp . dv3wt0wr2k != huq5bp1rix
. Constant_Value ) && c5zlh4mzusp . e102hifvqt ) { if ( c5zlh4mzusp .
lbtq0ku545 != 0.0 ) { c5zlh4mzusp . os4bvdu2dn [ 0 ] = c5zlh4mzusp .
im2vq3d3irm . jet0xs01ji ; } else { c5zlh4mzusp . os4bvdu2dn [ 0 ] =
huq5bp1rix . Constant1_Value ; } c5zlh4mzusp . os4bvdu2dn [ 1 ] = c5zlh4mzusp
. d0xw0oxj5a . jet0xs01ji ; } else if ( c5zlh4mzusp . lbtq0ku545 != 0.0 ) {
c5zlh4mzusp . os4bvdu2dn [ 0 ] = c5zlh4mzusp . d0xw0oxj5a . jet0xs01ji ;
c5zlh4mzusp . os4bvdu2dn [ 1 ] = c5zlh4mzusp . im2vq3d3irm . jet0xs01ji ; }
else { c5zlh4mzusp . os4bvdu2dn [ 0 ] = huq5bp1rix .
Constant_Value_alt4mz2jvd ; c5zlh4mzusp . os4bvdu2dn [ 1 ] =
muDoubleScalarMax ( c5zlh4mzusp . d0xw0oxj5a . jet0xs01ji , c5zlh4mzusp .
im2vq3d3irm . jet0xs01ji ) ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) && (
lkkrkctitnw . giqmtzacnq == 0 ) ) { lkkrkctitnw . f3dj5ppzb4 = c5zlh4mzusp .
os4bvdu2dn [ 0 ] ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { lkkrkctitnw .
giqmtzacnq = 1 ; c5zlh4mzusp . bbi5p03ull = lkkrkctitnw . f3dj5ppzb4 ;
lkkrkctitnw . giqmtzacnq = 0 ; } { real_T * pDataValues = ( real_T * )
lkkrkctitnw . osxwf31rhs . DataPtr ; real_T * pTimeValues = ( real_T * )
lkkrkctitnw . osxwf31rhs . TimePtr ; int_T currTimeIndex = lkkrkctitnw .
he0vfk52c2 . PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints
, lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo * ) lkkrkctitnw .
osxwf31rhs . RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ; lastPoint
= numPoints - 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else
if ( t >= pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint - 1 ; }
else { if ( t < pTimeValues [ currTimeIndex ] ) { while ( t < pTimeValues [
currTimeIndex ] ) { currTimeIndex -- ; } } else { while ( t >= pTimeValues [
currTimeIndex + 1 ] ) { currTimeIndex ++ ; } } } lkkrkctitnw . he0vfk52c2 .
PrevIndex = currTimeIndex ; { real_T t1 = pTimeValues [ currTimeIndex ] ;
real_T t2 = pTimeValues [ currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1
) { f5hz1naj3k = pDataValues [ currTimeIndex ] ; } else { f5hz1naj3k =
pDataValues [ currTimeIndex + 1 ] ; } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; int_T * zcTimeIndices = & lkkrkctitnw . j4cpglu32p [ 0 ] ;
int_T * zcTimeIndicesIdx = & lkkrkctitnw . k5jlqybics ; int_T zcIdx =
zcTimeIndices [ * zcTimeIndicesIdx ] ; int_T numZcTimes = 2 ; if ( *
zcTimeIndicesIdx < numZcTimes ) { if ( ssIsMajorTimeStep ( rtS ) ) { if ( t >
pTimeValues [ zcIdx ] ) { while ( * zcTimeIndicesIdx < ( numZcTimes - 1 ) &&
( t > pTimeValues [ zcIdx ] ) ) { ( * zcTimeIndicesIdx ) ++ ; zcIdx =
zcTimeIndices [ * zcTimeIndicesIdx ] ; } } } else { if ( t >= pTimeValues [
zcIdx ] && ( ssGetTimeOfLastOutput ( rtS ) < pTimeValues [ zcIdx ] ) ) { t2 =
pTimeValues [ zcIdx ] ; if ( zcIdx == 0 ) { TimeIndex = 0 ; t1 = t2 - 1 ; }
else { t1 = pTimeValues [ zcIdx - 1 ] ; TimeIndex = zcIdx - 1 ; } f1 = ( t2 -
t ) / ( t2 - t1 ) ; f2 = 1.0 - f1 ; } } } d1 = pDataValues [ TimeIndex ] ; d2
= pDataValues [ TimeIndex + 1 ] ; if ( zcIdx == 0 ) { d2 = d1 ; } f5hz1naj3k
= ( real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ; pDataValues += numPoints ;
} } } if ( huq5bp1rix . ManualSwitch_CurrentSetting == 1 ) { c5zlh4mzusp .
ppit5xnaws = huq5bp1rix . Constant_Value_ev3pvj0r1w ; } else { c5zlh4mzusp .
ppit5xnaws = ( f5hz1naj3k != 0.0 ) ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) &&
( lkkrkctitnw . b4ck1dw0sr == 0 ) ) { lkkrkctitnw . p142joj1tt = c5zlh4mzusp
. os4bvdu2dn [ 1 ] ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { c5zlh4mzusp .
ldemmfgvw3 = c5zlh4mzusp . ppit5xnaws ; lkkrkctitnw . b4ck1dw0sr = 1 ;
c5zlh4mzusp . agsfivq05h = lkkrkctitnw . p142joj1tt ; lkkrkctitnw .
b4ck1dw0sr = 0 ; HevP4OptimalController ( & ( lkkrkctitnw . ahts4cu30v . rtm
) , & c5zlh4mzusp . bbi5p03ull , & c5zlh4mzusp . agsfivq05h , & c5zlh4mzusp .
aivc02lioe , & c5zlh4mzusp . psiy0cbayl , & c5zlh4mzusp . ilzspmpfew , &
c5zlh4mzusp . l20y3tl2fi , & c5zlh4mzusp . hsnjs2culi , & c5zlh4mzusp .
pl1qpeb24y , & c5zlh4mzusp . beoymwb1ds , & c5zlh4mzusp . mgnwmmmvsy , &
c5zlh4mzusp . oujuyvi0mg , & gjahxt4ucf , & c5zlh4mzusp . crshssffqc , &
c5zlh4mzusp . h0peaivwwn , & c5zlh4mzusp . k5jqk0sol2 , & c5zlh4mzusp .
o1oroyrw13 , & ( lkkrkctitnw . ahts4cu30v . rtb ) , & ( lkkrkctitnw .
ahts4cu30v . rtdw ) ) ; SiEngineController ( & ( lkkrkctitnw . i1wwqrhe01 .
rtm ) , & c5zlh4mzusp . k5jqk0sol2 , & c5zlh4mzusp . lspamfw4np , &
c5zlh4mzusp . mzvknutvpn , & c5zlh4mzusp . lzicrvfxs0 , & c5zlh4mzusp .
idps1oqtc2 , & c5zlh4mzusp . fpwy4odd1j , & c5zlh4mzusp . jmk0frun1h , &
c5zlh4mzusp . exmmyiyecb , & c5zlh4mzusp . j4pyldvufb , & c5zlh4mzusp .
ldemmfgvw3 , & c5zlh4mzusp . aqbwnptjwk , & c5zlh4mzusp . jg44dse3nj , &
c5zlh4mzusp . a3qhs3xdv3 , & c5zlh4mzusp . c3wnl42pzc , & c5zlh4mzusp .
cdj055qwtt , & c5zlh4mzusp . byo0djc3ev , & c5zlh4mzusp . l5uoxtpgkv , &
c5zlh4mzusp . p0doo00o1w , & c5zlh4mzusp . ddpajetaf2 , & c5zlh4mzusp .
plyh5aql1b , & c5zlh4mzusp . mdhboq50pb , & c5zlh4mzusp . h5mtw1jmmu , &
c5zlh4mzusp . nit2nkypbx , & c5zlh4mzusp . kkglsripg0 , & c5zlh4mzusp .
eosdykmyyc , & c5zlh4mzusp . iwqceuwyof , & c5zlh4mzusp . j5lxue1b2g , &
c5zlh4mzusp . hnif32llvq , & c5zlh4mzusp . gqj31rygmo , & p43om1eceo , &
eskid5f43y , & ( lkkrkctitnw . i1wwqrhe01 . rtb ) , & ( lkkrkctitnw .
i1wwqrhe01 . rtdw ) ) ; HevP4TransmissionController ( & c5zlh4mzusp .
aivc02lioe , & c5zlh4mzusp . bbi5p03ull , & c5zlh4mzusp . crshssffqc , &
c5zlh4mzusp . dxdkngxky3 , & ( lkkrkctitnw . ehgw5hos5u . rtb ) , & (
lkkrkctitnw . ehgw5hos5u . rtdw ) ) ; } if ( ssIsSampleHit ( rtS , 3 , 0 ) )
{ c5zlh4mzusp . h31pywel0d = ssGetTaskTime ( rtS , 3 ) ; } c5zlh4mzusp .
bq2avi4o4c = jnb1m1brfj - c5zlh4mzusp . h31pywel0d ; lkkrkctitnw . ivnj3kwa54
= cde5cxunga ; jnb1m1brfj = muDoubleScalarAbs ( c5zlh4mzusp . p1sxhrirqu ) ;
if ( jnb1m1brfj < 0.001 ) { jnb1m1brfj /= 0.001 ; jnb1m1brfj = 0.002 / ( 3.0
- jnb1m1brfj * jnb1m1brfj ) ; } h01yte3ap5 = jnb1m1brfj ; if ( c5zlh4mzusp .
p1sxhrirqu < 0.0 ) { h01yte3ap5 = - jnb1m1brfj ; } if ( jnb1m1brfj > 5.0 ) {
jnb1m1brfj = muDoubleScalarMax ( muDoubleScalarMin ( huq5bp1rix .
LongitudinalDriver_tau , huq5bp1rix . LongitudinalDriver_L / jnb1m1brfj ) ,
0.001 ) ; } else { jnb1m1brfj = huq5bp1rix . LongitudinalDriver_tau ; }
cw04qfyjxl [ 1 ] = - ( ( huq5bp1rix . LongitudinalDriver_aR / h01yte3ap5 +
huq5bp1rix . LongitudinalDriver_cR * c5zlh4mzusp . p1sxhrirqu ) *
muDoubleScalarTanh ( c5zlh4mzusp . p1sxhrirqu ) + huq5bp1rix .
LongitudinalDriver_bR ) / huq5bp1rix . LongitudinalDriver_m ; c5zlh4mzusp .
njyf5jbpjr [ 0 ] = 0.0 ; c5zlh4mzusp . njyf5jbpjr [ 1 ] = huq5bp1rix .
LongitudinalDriver_Kpt / huq5bp1rix . LongitudinalDriver_m ; sigmaA [ 0 ] =
0.0 ; sigmaB_idx_0 = 0.0 ; Ftemp [ 0 ] = 0.0 ; sigmaA [ 1 ] = 0.0 ;
sigmaB_idx_1 = 0.0 ; Ftemp [ 1 ] = cw04qfyjxl [ 1 ] ; sigmaA [ 2 ] = 0.0 ;
sigmaB_idx_2 = 0.0 ; Ftemp [ 2 ] = 1.0 ; sigmaA [ 3 ] = 0.0 ; sigmaB_idx_3 =
0.0 ; Ftemp [ 3 ] = 0.0 ; h01yte3ap5 = jnb1m1brfj ; fac1 = 2.0 ; fac2 = 1.0 ;
for ( iy = 0 ; iy < 15 ; iy ++ ) { sigmaA_tmp = Ftemp [ 0 ] * h01yte3ap5 ;
sigmaA [ 0 ] += sigmaA_tmp / fac1 ; sigmaB_idx_0 += sigmaA_tmp / fac2 ;
sigmaA_tmp = Ftemp [ 1 ] * h01yte3ap5 ; sigmaA [ 1 ] += sigmaA_tmp / fac1 ;
sigmaB_idx_1 += sigmaA_tmp / fac2 ; sigmaA_tmp = Ftemp [ 2 ] * h01yte3ap5 ;
sigmaA [ 2 ] += sigmaA_tmp / fac1 ; sigmaB_idx_2 += sigmaA_tmp / fac2 ;
sigmaA_tmp = Ftemp [ 3 ] * h01yte3ap5 ; sigmaA [ 3 ] += sigmaA_tmp / fac1 ;
sigmaB_idx_3 += sigmaA_tmp / fac2 ; for ( i = 0 ; i <= 0 ; i += 2 ) { tmp =
_mm_loadu_pd ( & Ftemp [ i + 2 ] ) ; tmp_p = _mm_loadu_pd ( & Ftemp [ i ] ) ;
_mm_storeu_pd ( & Ftemp_p [ i ] , _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd
( cw04qfyjxl [ 1 ] ) ) , _mm_mul_pd ( tmp_p , _mm_set1_pd ( 0.0 ) ) ) ) ;
_mm_storeu_pd ( & Ftemp_p [ i + 2 ] , _mm_add_pd ( _mm_mul_pd ( tmp ,
_mm_set1_pd ( 0.0 ) ) , tmp_p ) ) ; } Ftemp [ 0 ] = Ftemp_p [ 0 ] ; Ftemp [ 1
] = Ftemp_p [ 1 ] ; Ftemp [ 2 ] = Ftemp_p [ 2 ] ; Ftemp [ 3 ] = Ftemp_p [ 3 ]
; h01yte3ap5 *= jnb1m1brfj ; fac1 *= ( ( real_T ) iy + 1.0 ) + 1.0 ; fac2 *=
( ( real_T ) iy + 1.0 ) + 1.0 ; } jnb1m1brfj = ( ( sigmaA [ 0 ] + 1.0 ) *
jnb1m1brfj + jnb1m1brfj * sigmaA [ 1 ] ) * c5zlh4mzusp . njyf5jbpjr [ 0 ] + (
( sigmaA [ 3 ] + 1.0 ) * jnb1m1brfj + jnb1m1brfj * sigmaA [ 2 ] ) *
c5zlh4mzusp . njyf5jbpjr [ 1 ] ; lkkrkctitnw . kvsmqclsqu = cde5cxunga ;
Ftemp_p [ 0 ] = 0.0 ; Ftemp_p [ 1 ] = cw04qfyjxl [ 1 ] * 0.001 ; Ftemp_p [ 2
] = 0.001 ; Ftemp_p [ 3 ] = 0.0 ; tmp_e = 4 ; hjnexlhqyo ( Ftemp_p , sigmaA )
; Ftemp_p [ 0 ] = 0.0 ; Ftemp_p [ 1 ] = cw04qfyjxl [ 1 ] * 0.0 ; Ftemp_p [ 2
] = 0.0 ; Ftemp_p [ 3 ] = 0.0 ; tmp_i = 4 ; hjnexlhqyo ( Ftemp_p , Ftemp ) ;
Ftemp_p [ 0 ] = 0.0 ; Ftemp_p [ 1 ] = cw04qfyjxl [ 1 ] * 0.001 ; Ftemp_p [ 2
] = 0.001 ; Ftemp_p [ 3 ] = 0.0 ; tmp_m = 4 ; hjnexlhqyo ( Ftemp_p ,
cw04qfyjxl ) ; c5zlh4mzusp . phefapml0b = ( ( ( c5zlh4mzusp . dv3wt0wr2k - (
( ( ( ( Ftemp [ 0 ] * c5zlh4mzusp . njyf5jbpjr [ 0 ] + c5zlh4mzusp .
njyf5jbpjr [ 1 ] * Ftemp [ 2 ] ) + ( cw04qfyjxl [ 0 ] * c5zlh4mzusp .
njyf5jbpjr [ 0 ] + c5zlh4mzusp . njyf5jbpjr [ 1 ] * cw04qfyjxl [ 2 ] ) ) /
2.0 * 0.001 * gwpvut1k2o + ( sigmaA [ 0 ] * c5zlh4mzusp . p1sxhrirqu + sigmaA
[ 2 ] * 0.0 ) ) * ( ( sigmaB_idx_0 + 1.0 ) + sigmaB_idx_1 ) + ( ( (
c5zlh4mzusp . njyf5jbpjr [ 0 ] * Ftemp [ 1 ] + c5zlh4mzusp . njyf5jbpjr [ 1 ]
* Ftemp [ 3 ] ) + ( c5zlh4mzusp . njyf5jbpjr [ 0 ] * cw04qfyjxl [ 1 ] +
c5zlh4mzusp . njyf5jbpjr [ 1 ] * cw04qfyjxl [ 3 ] ) ) / 2.0 * 0.001 *
gwpvut1k2o + ( sigmaA [ 1 ] * c5zlh4mzusp . p1sxhrirqu + sigmaA [ 3 ] * 0.0 )
) * ( ( sigmaB_idx_3 + 1.0 ) + sigmaB_idx_2 ) ) + gwpvut1k2o * jnb1m1brfj ) )
/ jnb1m1brfj + a2emwewpwz ) - a2emwewpwz ) * ( 1.0 / huq5bp1rix .
LongitudinalDriver_tau * 3.1415926535897931 * 2.0 ) ; a2emwewpwz =
c5zlh4mzusp . dv3wt0wr2k - c5zlh4mzusp . p1sxhrirqu ; c5zlh4mzusp .
l2wo05eoex = a2emwewpwz * a2emwewpwz ; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) {
c5zlh4mzusp . kenkr33r5i [ 0 ] = lkkrkctitnw . c1ij1f4luo [ 0 ] ; c5zlh4mzusp
. kenkr33r5i [ 1 ] = lkkrkctitnw . c1ij1f4luo [ 1 ] ; } if ( a2emwewpwz >
c5zlh4mzusp . kenkr33r5i [ 0 ] ) { c5zlh4mzusp . iwdvnd12wl [ 0 ] =
a2emwewpwz ; } else { c5zlh4mzusp . iwdvnd12wl [ 0 ] = c5zlh4mzusp .
kenkr33r5i [ 0 ] ; } if ( a2emwewpwz < c5zlh4mzusp . kenkr33r5i [ 1 ] ) {
c5zlh4mzusp . iwdvnd12wl [ 1 ] = a2emwewpwz ; } else { c5zlh4mzusp .
iwdvnd12wl [ 1 ] = c5zlh4mzusp . kenkr33r5i [ 1 ] ; } c5zlh4mzusp .
js12er4ud2 = lkkrkctitnw . mypipgzpqg ; if ( lkkrkctitnw . lfduexc22r != (
rtInf ) ) { c5zlh4mzusp . js12er4ud2 += ( ssGetT ( rtS ) - lkkrkctitnw .
lfduexc22r ) * lkkrkctitnw . e5k5uh1tii ; } c5zlh4mzusp . ffpgbotpy5 =
lkkrkctitnw . odzx5k4e10 ; if ( lkkrkctitnw . mqxljfmsyj != ( rtInf ) ) {
c5zlh4mzusp . ffpgbotpy5 += ( ssGetT ( rtS ) - lkkrkctitnw . mqxljfmsyj ) *
lkkrkctitnw . pwychxn2rx ; } MotMappedP4 ( & ( lkkrkctitnw . d43yu213mh . rtm
) , & c5zlh4mzusp . ffpgbotpy5 , & c5zlh4mzusp . cwktzm5bx5 , & c5zlh4mzusp .
itmoz4lcsg , & c5zlh4mzusp . lbhkoluejj , & c5zlh4mzusp . la3brkkri1 , & (
lkkrkctitnw . d43yu213mh . rtb ) , & ( lkkrkctitnw . d43yu213mh . rtdw ) , &
( jhyfx1uf4ys . nx1404k4i3 ) ) ; c5zlh4mzusp . dnjvmk5ndp = lkkrkctitnw .
bschkhlqcx ; if ( lkkrkctitnw . jz4igdfsjy != ( rtInf ) ) { c5zlh4mzusp .
dnjvmk5ndp += ( ssGetT ( rtS ) - lkkrkctitnw . jz4igdfsjy ) * lkkrkctitnw .
p5zpn5rl4f ; } c5zlh4mzusp . bjaf22yvfs = lkkrkctitnw . k5oauund31 ; if (
lkkrkctitnw . droxjfozbf != ( rtInf ) ) { c5zlh4mzusp . bjaf22yvfs += (
ssGetT ( rtS ) - lkkrkctitnw . droxjfozbf ) * lkkrkctitnw . cutrrpdov1 ; }
c5zlh4mzusp . hxyqyfsavy = lkkrkctitnw . aliqzpm34m ; if ( lkkrkctitnw .
evydn1x5u3 != ( rtInf ) ) { c5zlh4mzusp . hxyqyfsavy += ( ssGetT ( rtS ) -
lkkrkctitnw . evydn1x5u3 ) * lkkrkctitnw . pzq0ihn3t3 ; } c5zlh4mzusp .
owiwiqigkl = lkkrkctitnw . fue3uld4xj ; if ( lkkrkctitnw . iwacvi1cvr != (
rtInf ) ) { c5zlh4mzusp . owiwiqigkl += ( ssGetT ( rtS ) - lkkrkctitnw .
iwacvi1cvr ) * lkkrkctitnw . h5spwccaot ; } c5zlh4mzusp . c5e2hzpnbf =
lkkrkctitnw . jdrec4mf1t ; if ( lkkrkctitnw . lcvtpl0xhz != ( rtInf ) ) {
c5zlh4mzusp . c5e2hzpnbf += ( ssGetT ( rtS ) - lkkrkctitnw . lcvtpl0xhz ) *
lkkrkctitnw . gcwd3vcs2h ; } c5zlh4mzusp . iljgvw41cw = lkkrkctitnw .
mthxcazoeq ; if ( lkkrkctitnw . itlwzywcut != ( rtInf ) ) { c5zlh4mzusp .
iljgvw41cw += ( ssGetT ( rtS ) - lkkrkctitnw . itlwzywcut ) * lkkrkctitnw .
acnon4phey ; } c5zlh4mzusp . og1vaqgvra = lkkrkctitnw . k5sxdubawm ; if (
lkkrkctitnw . oq5dnpwzel != ( rtInf ) ) { c5zlh4mzusp . og1vaqgvra += (
ssGetT ( rtS ) - lkkrkctitnw . oq5dnpwzel ) * lkkrkctitnw . ldljdyravq ; }
c5zlh4mzusp . ktrgii52uw = lkkrkctitnw . m0gspyix5l ; if ( lkkrkctitnw .
jdxnqz3k3z != ( rtInf ) ) { c5zlh4mzusp . ktrgii52uw += ( ssGetT ( rtS ) -
lkkrkctitnw . jdxnqz3k3z ) * lkkrkctitnw . kpyfexn5a1 ; } c5zlh4mzusp .
k2gcn0rpks = lkkrkctitnw . mtylxvc53n ; if ( lkkrkctitnw . mqiplucikd != (
rtInf ) ) { c5zlh4mzusp . k2gcn0rpks += ( ssGetT ( rtS ) - lkkrkctitnw .
mqiplucikd ) * lkkrkctitnw . cpjc0nnbop ; } c5zlh4mzusp . cmf5iapvn3 =
lkkrkctitnw . irc32x12y1 ; if ( lkkrkctitnw . nrnbdvzt0f != ( rtInf ) ) {
c5zlh4mzusp . cmf5iapvn3 += ( ssGetT ( rtS ) - lkkrkctitnw . nrnbdvzt0f ) *
lkkrkctitnw . eokzn5lqzs ; } c5zlh4mzusp . b0rjr1l1ao = lkkrkctitnw .
fxlat4s44d ; if ( lkkrkctitnw . o141kdey3a != ( rtInf ) ) { c5zlh4mzusp .
b0rjr1l1ao += ( ssGetT ( rtS ) - lkkrkctitnw . o141kdey3a ) * lkkrkctitnw .
pwfj2ojmua ; } c5zlh4mzusp . pdwrzcjj3o = lkkrkctitnw . gt3cupzjr1 ; if (
lkkrkctitnw . icbcw4dt4i != ( rtInf ) ) { c5zlh4mzusp . pdwrzcjj3o += (
ssGetT ( rtS ) - lkkrkctitnw . icbcw4dt4i ) * lkkrkctitnw . mudviuktks ; }
c5zlh4mzusp . gv0mllfnk1 = lkkrkctitnw . frklc1du0s ; if ( lkkrkctitnw .
b2542hzgcf != ( rtInf ) ) { c5zlh4mzusp . gv0mllfnk1 += ( ssGetT ( rtS ) -
lkkrkctitnw . b2542hzgcf ) * lkkrkctitnw . chi35zyntr ; } c5zlh4mzusp .
gtbbdrbjbz = lkkrkctitnw . mh53p0dtth ; if ( lkkrkctitnw . lnr1sinkco != (
rtInf ) ) { c5zlh4mzusp . gtbbdrbjbz += ( ssGetT ( rtS ) - lkkrkctitnw .
lnr1sinkco ) * lkkrkctitnw . bduaxxbpzz ; } UNUSED_PARAMETER ( tid ) ; } void
MdlOutputsTID5 ( int_T tid ) { c5zlh4mzusp . eey5gaxshl = 9.5492965855137211
* c5zlh4mzusp . dc2npfnluv ; SiEngineControllerTID1 ( & ( lkkrkctitnw .
i1wwqrhe01 . rtb ) , & ( lkkrkctitnw . i1wwqrhe01 . rtdw ) ) ;
HevP4OptimalControllerTID1 ( & ( lkkrkctitnw . ahts4cu30v . rtb ) ) ;
HevP4TransmissionControllerTID1 ( & ( lkkrkctitnw . ehgw5hos5u . rtb ) ) ;
c5zlh4mzusp . cj4kh32gsk = false ; c5zlh4mzusp . fz3pquw0iv = true ;
c5zlh4mzusp . ldin2du1sj = false ; c5zlh4mzusp . aasrrzna5g = true ;
c5zlh4mzusp . lb0gyjdkb5 = huq5bp1rix . LongitudinalDriver_g * huq5bp1rix .
LongitudinalDriver_m * huq5bp1rix . LongitudinalDriver_m / huq5bp1rix .
LongitudinalDriver_Kpt * 0.0 ; DrivetrainHevP4TID2 ( & ( lkkrkctitnw .
ihhigf1gyq . rtm ) , & c5zlh4mzusp . bxvneesqxv , & ( lkkrkctitnw .
ihhigf1gyq . rtb ) , & ( lkkrkctitnw . ihhigf1gyq . rtdw ) ) ; BattHevP4TID2
( & ( lkkrkctitnw . fxfpjs5zwf . rtb ) ) ; SiMappedEngineTID2 ( & c5zlh4mzusp
. n5n30ohz53 , & ( lkkrkctitnw . lkxnu4ieaj . rtb ) ) ; UNUSED_PARAMETER (
tid ) ; } void MdlUpdate ( int_T tid ) { real_T err ; real_T tol ; boolean_T
guard1 ; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { guard1 = false ; if ( ! (
lkkrkctitnw . kh5xdhjoen == ( rtInf ) ) ) { if ( ( c5zlh4mzusp . mgnwmmmvsy
>= - 1.0 ) && ( c5zlh4mzusp . mgnwmmmvsy <= 1.0 ) ) { tol = huq5bp1rix .
FirstOrderHold1_ErrTol ; } else if ( c5zlh4mzusp . mgnwmmmvsy > 1.0 ) { tol =
c5zlh4mzusp . mgnwmmmvsy * huq5bp1rix . FirstOrderHold1_ErrTol ; } else { tol
= - ( c5zlh4mzusp . mgnwmmmvsy * huq5bp1rix . FirstOrderHold1_ErrTol ) ; }
err = c5zlh4mzusp . jgjpqtsaas - c5zlh4mzusp . mgnwmmmvsy ; if ( ( err > tol
) || ( err < - tol ) ) { guard1 = true ; } else { lkkrkctitnw . ovmdszn3vi =
( c5zlh4mzusp . mgnwmmmvsy - lkkrkctitnw . h4bk44iq0j ) / ( ssGetT ( rtS ) -
lkkrkctitnw . kh5xdhjoen ) ; lkkrkctitnw . bhsln1im02 = c5zlh4mzusp .
jgjpqtsaas ; } } else { guard1 = true ; } if ( guard1 ) { if ( c5zlh4mzusp .
mgnwmmmvsy != c5zlh4mzusp . jgjpqtsaas ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; } lkkrkctitnw .
bhsln1im02 = c5zlh4mzusp . mgnwmmmvsy ; lkkrkctitnw . ovmdszn3vi = 0.0 ; }
lkkrkctitnw . h4bk44iq0j = c5zlh4mzusp . mgnwmmmvsy ; lkkrkctitnw .
kh5xdhjoen = ssGetT ( rtS ) ; guard1 = false ; if ( ! ( lkkrkctitnw .
fnd1cgu2ez == ( rtInf ) ) ) { if ( ( c5zlh4mzusp . dxdkngxky3 >= - 1.0 ) && (
c5zlh4mzusp . dxdkngxky3 <= 1.0 ) ) { tol = huq5bp1rix .
FirstOrderHold2_ErrTol ; } else if ( c5zlh4mzusp . dxdkngxky3 > 1.0 ) { tol =
c5zlh4mzusp . dxdkngxky3 * huq5bp1rix . FirstOrderHold2_ErrTol ; } else { tol
= - ( c5zlh4mzusp . dxdkngxky3 * huq5bp1rix . FirstOrderHold2_ErrTol ) ; }
err = c5zlh4mzusp . cdupltdhpp - c5zlh4mzusp . dxdkngxky3 ; if ( ( err > tol
) || ( err < - tol ) ) { guard1 = true ; } else { lkkrkctitnw . fgxzeqilcf =
( c5zlh4mzusp . dxdkngxky3 - lkkrkctitnw . caj4332p1l ) / ( ssGetT ( rtS ) -
lkkrkctitnw . fnd1cgu2ez ) ; lkkrkctitnw . hufmyzg00g = c5zlh4mzusp .
cdupltdhpp ; } } else { guard1 = true ; } if ( guard1 ) { if ( c5zlh4mzusp .
dxdkngxky3 != c5zlh4mzusp . cdupltdhpp ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; } lkkrkctitnw .
hufmyzg00g = c5zlh4mzusp . dxdkngxky3 ; lkkrkctitnw . fgxzeqilcf = 0.0 ; }
lkkrkctitnw . caj4332p1l = c5zlh4mzusp . dxdkngxky3 ; lkkrkctitnw .
fnd1cgu2ez = ssGetT ( rtS ) ; } f2ay4b3zfo ( & ( lkkrkctitnw . ihhigf1gyq .
rtm ) , & c5zlh4mzusp . epagtjnze1 , & ( lkkrkctitnw . ihhigf1gyq . rtb ) , &
( lkkrkctitnw . ihhigf1gyq . rtdw ) , & ( ( ( p3zfy11wvw * )
ssGetContStateDisabled ( rtS ) ) -> ivpu5oi1vy ) ) ; if ( ssIsSampleHit ( rtS
, 2 , 0 ) ) { guard1 = false ; if ( ! ( lkkrkctitnw . pz1rko3nhq == ( rtInf )
) ) { if ( ( c5zlh4mzusp . j5lxue1b2g >= - 1.0 ) && ( c5zlh4mzusp .
j5lxue1b2g <= 1.0 ) ) { tol = huq5bp1rix . FirstOrderHold12_ErrTol ; } else
if ( c5zlh4mzusp . j5lxue1b2g > 1.0 ) { tol = c5zlh4mzusp . j5lxue1b2g *
huq5bp1rix . FirstOrderHold12_ErrTol ; } else { tol = - ( c5zlh4mzusp .
j5lxue1b2g * huq5bp1rix . FirstOrderHold12_ErrTol ) ; } err = c5zlh4mzusp .
jmeumg2nik - c5zlh4mzusp . j5lxue1b2g ; if ( ( err > tol ) || ( err < - tol )
) { guard1 = true ; } else { lkkrkctitnw . infpntaopi = ( c5zlh4mzusp .
j5lxue1b2g - lkkrkctitnw . cpzvjo4vs1 ) / ( ssGetT ( rtS ) - lkkrkctitnw .
pz1rko3nhq ) ; lkkrkctitnw . jrbpexblku = c5zlh4mzusp . jmeumg2nik ; } } else
{ guard1 = true ; } if ( guard1 ) { if ( c5zlh4mzusp . j5lxue1b2g !=
c5zlh4mzusp . jmeumg2nik ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS
) ; ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; }
lkkrkctitnw . jrbpexblku = c5zlh4mzusp . j5lxue1b2g ; lkkrkctitnw .
infpntaopi = 0.0 ; } lkkrkctitnw . cpzvjo4vs1 = c5zlh4mzusp . j5lxue1b2g ;
lkkrkctitnw . pz1rko3nhq = ssGetT ( rtS ) ; } gxcx4c1tkl ( ) ; enrfi3fbq1 ( &
( lkkrkctitnw . fxfpjs5zwf . rtdw ) ) ; if ( ssIsSampleHit ( rtS , 2 , 0 ) )
{ bnwzenvtha ( & c5zlh4mzusp . aivc02lioe , & c5zlh4mzusp . psiy0cbayl , &
c5zlh4mzusp . ilzspmpfew , & c5zlh4mzusp . hsnjs2culi , & c5zlh4mzusp .
h0peaivwwn , & ( lkkrkctitnw . ahts4cu30v . rtb ) , & ( lkkrkctitnw .
ahts4cu30v . rtdw ) ) ; l3glajbtck ( & ( lkkrkctitnw . i1wwqrhe01 . rtb ) , &
( lkkrkctitnw . i1wwqrhe01 . rtdw ) ) ; lkkrkctitnw . c1ij1f4luo [ 0 ] =
c5zlh4mzusp . iwdvnd12wl [ 0 ] ; lkkrkctitnw . c1ij1f4luo [ 1 ] = c5zlh4mzusp
. iwdvnd12wl [ 1 ] ; guard1 = false ; if ( ! ( lkkrkctitnw . lfduexc22r == (
rtInf ) ) ) { if ( ( c5zlh4mzusp . oujuyvi0mg >= - 1.0 ) && ( c5zlh4mzusp .
oujuyvi0mg <= 1.0 ) ) { tol = huq5bp1rix . FirstOrderHold_ErrTol ; } else if
( c5zlh4mzusp . oujuyvi0mg > 1.0 ) { tol = c5zlh4mzusp . oujuyvi0mg *
huq5bp1rix . FirstOrderHold_ErrTol ; } else { tol = - ( c5zlh4mzusp .
oujuyvi0mg * huq5bp1rix . FirstOrderHold_ErrTol ) ; } err = c5zlh4mzusp .
js12er4ud2 - c5zlh4mzusp . oujuyvi0mg ; if ( ( err > tol ) || ( err < - tol )
) { guard1 = true ; } else { lkkrkctitnw . e5k5uh1tii = ( c5zlh4mzusp .
oujuyvi0mg - lkkrkctitnw . hj5jjgcaox ) / ( ssGetT ( rtS ) - lkkrkctitnw .
lfduexc22r ) ; lkkrkctitnw . mypipgzpqg = c5zlh4mzusp . js12er4ud2 ; } } else
{ guard1 = true ; } if ( guard1 ) { if ( c5zlh4mzusp . oujuyvi0mg !=
c5zlh4mzusp . js12er4ud2 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS
) ; ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; }
lkkrkctitnw . mypipgzpqg = c5zlh4mzusp . oujuyvi0mg ; lkkrkctitnw .
e5k5uh1tii = 0.0 ; } lkkrkctitnw . hj5jjgcaox = c5zlh4mzusp . oujuyvi0mg ;
lkkrkctitnw . lfduexc22r = ssGetT ( rtS ) ; guard1 = false ; if ( ! (
lkkrkctitnw . mqxljfmsyj == ( rtInf ) ) ) { if ( ( c5zlh4mzusp . o1oroyrw13
>= - 1.0 ) && ( c5zlh4mzusp . o1oroyrw13 <= 1.0 ) ) { tol = huq5bp1rix .
FirstOrderHold_ErrTol_drwqucvaxb ; } else if ( c5zlh4mzusp . o1oroyrw13 > 1.0
) { tol = c5zlh4mzusp . o1oroyrw13 * huq5bp1rix .
FirstOrderHold_ErrTol_drwqucvaxb ; } else { tol = - ( c5zlh4mzusp .
o1oroyrw13 * huq5bp1rix . FirstOrderHold_ErrTol_drwqucvaxb ) ; } err =
c5zlh4mzusp . ffpgbotpy5 - c5zlh4mzusp . o1oroyrw13 ; if ( ( err > tol ) || (
err < - tol ) ) { guard1 = true ; } else { lkkrkctitnw . pwychxn2rx = (
c5zlh4mzusp . o1oroyrw13 - lkkrkctitnw . cvod5gblce ) / ( ssGetT ( rtS ) -
lkkrkctitnw . mqxljfmsyj ) ; lkkrkctitnw . odzx5k4e10 = c5zlh4mzusp .
ffpgbotpy5 ; } } else { guard1 = true ; } if ( guard1 ) { if ( c5zlh4mzusp .
o1oroyrw13 != c5zlh4mzusp . ffpgbotpy5 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; } lkkrkctitnw .
odzx5k4e10 = c5zlh4mzusp . o1oroyrw13 ; lkkrkctitnw . pwychxn2rx = 0.0 ; }
lkkrkctitnw . cvod5gblce = c5zlh4mzusp . o1oroyrw13 ; lkkrkctitnw .
mqxljfmsyj = ssGetT ( rtS ) ; guard1 = false ; if ( ! ( lkkrkctitnw .
jz4igdfsjy == ( rtInf ) ) ) { if ( ( c5zlh4mzusp . cdj055qwtt >= - 1.0 ) && (
c5zlh4mzusp . cdj055qwtt <= 1.0 ) ) { tol = huq5bp1rix .
FirstOrderHold_ErrTol_p53gicbkas ; } else if ( c5zlh4mzusp . cdj055qwtt > 1.0
) { tol = c5zlh4mzusp . cdj055qwtt * huq5bp1rix .
FirstOrderHold_ErrTol_p53gicbkas ; } else { tol = - ( c5zlh4mzusp .
cdj055qwtt * huq5bp1rix . FirstOrderHold_ErrTol_p53gicbkas ) ; } err =
c5zlh4mzusp . dnjvmk5ndp - c5zlh4mzusp . cdj055qwtt ; if ( ( err > tol ) || (
err < - tol ) ) { guard1 = true ; } else { lkkrkctitnw . p5zpn5rl4f = (
c5zlh4mzusp . cdj055qwtt - lkkrkctitnw . enyy3t4ps3 ) / ( ssGetT ( rtS ) -
lkkrkctitnw . jz4igdfsjy ) ; lkkrkctitnw . bschkhlqcx = c5zlh4mzusp .
dnjvmk5ndp ; } } else { guard1 = true ; } if ( guard1 ) { if ( c5zlh4mzusp .
cdj055qwtt != c5zlh4mzusp . dnjvmk5ndp ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; } lkkrkctitnw .
bschkhlqcx = c5zlh4mzusp . cdj055qwtt ; lkkrkctitnw . p5zpn5rl4f = 0.0 ; }
lkkrkctitnw . enyy3t4ps3 = c5zlh4mzusp . cdj055qwtt ; lkkrkctitnw .
jz4igdfsjy = ssGetT ( rtS ) ; guard1 = false ; if ( ! ( lkkrkctitnw .
droxjfozbf == ( rtInf ) ) ) { if ( ( c5zlh4mzusp . byo0djc3ev >= - 1.0 ) && (
c5zlh4mzusp . byo0djc3ev <= 1.0 ) ) { tol = huq5bp1rix .
FirstOrderHold1_ErrTol_ltw51vguzo ; } else if ( c5zlh4mzusp . byo0djc3ev >
1.0 ) { tol = c5zlh4mzusp . byo0djc3ev * huq5bp1rix .
FirstOrderHold1_ErrTol_ltw51vguzo ; } else { tol = - ( c5zlh4mzusp .
byo0djc3ev * huq5bp1rix . FirstOrderHold1_ErrTol_ltw51vguzo ) ; } err =
c5zlh4mzusp . bjaf22yvfs - c5zlh4mzusp . byo0djc3ev ; if ( ( err > tol ) || (
err < - tol ) ) { guard1 = true ; } else { lkkrkctitnw . cutrrpdov1 = (
c5zlh4mzusp . byo0djc3ev - lkkrkctitnw . mpliu3opsq ) / ( ssGetT ( rtS ) -
lkkrkctitnw . droxjfozbf ) ; lkkrkctitnw . k5oauund31 = c5zlh4mzusp .
bjaf22yvfs ; } } else { guard1 = true ; } if ( guard1 ) { if ( c5zlh4mzusp .
byo0djc3ev != c5zlh4mzusp . bjaf22yvfs ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; } lkkrkctitnw .
k5oauund31 = c5zlh4mzusp . byo0djc3ev ; lkkrkctitnw . cutrrpdov1 = 0.0 ; }
lkkrkctitnw . mpliu3opsq = c5zlh4mzusp . byo0djc3ev ; lkkrkctitnw .
droxjfozbf = ssGetT ( rtS ) ; guard1 = false ; if ( ! ( lkkrkctitnw .
evydn1x5u3 == ( rtInf ) ) ) { if ( ( c5zlh4mzusp . eosdykmyyc >= - 1.0 ) && (
c5zlh4mzusp . eosdykmyyc <= 1.0 ) ) { tol = huq5bp1rix .
FirstOrderHold10_ErrTol ; } else if ( c5zlh4mzusp . eosdykmyyc > 1.0 ) { tol
= c5zlh4mzusp . eosdykmyyc * huq5bp1rix . FirstOrderHold10_ErrTol ; } else {
tol = - ( c5zlh4mzusp . eosdykmyyc * huq5bp1rix . FirstOrderHold10_ErrTol ) ;
} err = c5zlh4mzusp . hxyqyfsavy - c5zlh4mzusp . eosdykmyyc ; if ( ( err >
tol ) || ( err < - tol ) ) { guard1 = true ; } else { lkkrkctitnw .
pzq0ihn3t3 = ( c5zlh4mzusp . eosdykmyyc - lkkrkctitnw . o2dkzedwyd ) / (
ssGetT ( rtS ) - lkkrkctitnw . evydn1x5u3 ) ; lkkrkctitnw . aliqzpm34m =
c5zlh4mzusp . hxyqyfsavy ; } } else { guard1 = true ; } if ( guard1 ) { if (
c5zlh4mzusp . eosdykmyyc != c5zlh4mzusp . hxyqyfsavy ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; } lkkrkctitnw .
aliqzpm34m = c5zlh4mzusp . eosdykmyyc ; lkkrkctitnw . pzq0ihn3t3 = 0.0 ; }
lkkrkctitnw . o2dkzedwyd = c5zlh4mzusp . eosdykmyyc ; lkkrkctitnw .
evydn1x5u3 = ssGetT ( rtS ) ; guard1 = false ; if ( ! ( lkkrkctitnw .
iwacvi1cvr == ( rtInf ) ) ) { if ( ( c5zlh4mzusp . iwqceuwyof >= - 1.0 ) && (
c5zlh4mzusp . iwqceuwyof <= 1.0 ) ) { tol = huq5bp1rix .
FirstOrderHold11_ErrTol ; } else if ( c5zlh4mzusp . iwqceuwyof > 1.0 ) { tol
= c5zlh4mzusp . iwqceuwyof * huq5bp1rix . FirstOrderHold11_ErrTol ; } else {
tol = - ( c5zlh4mzusp . iwqceuwyof * huq5bp1rix . FirstOrderHold11_ErrTol ) ;
} err = c5zlh4mzusp . owiwiqigkl - c5zlh4mzusp . iwqceuwyof ; if ( ( err >
tol ) || ( err < - tol ) ) { guard1 = true ; } else { lkkrkctitnw .
h5spwccaot = ( c5zlh4mzusp . iwqceuwyof - lkkrkctitnw . iepmyvc12j ) / (
ssGetT ( rtS ) - lkkrkctitnw . iwacvi1cvr ) ; lkkrkctitnw . fue3uld4xj =
c5zlh4mzusp . owiwiqigkl ; } } else { guard1 = true ; } if ( guard1 ) { if (
c5zlh4mzusp . iwqceuwyof != c5zlh4mzusp . owiwiqigkl ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; } lkkrkctitnw .
fue3uld4xj = c5zlh4mzusp . iwqceuwyof ; lkkrkctitnw . h5spwccaot = 0.0 ; }
lkkrkctitnw . iepmyvc12j = c5zlh4mzusp . iwqceuwyof ; lkkrkctitnw .
iwacvi1cvr = ssGetT ( rtS ) ; guard1 = false ; if ( ! ( lkkrkctitnw .
lcvtpl0xhz == ( rtInf ) ) ) { if ( ( c5zlh4mzusp . hnif32llvq >= - 1.0 ) && (
c5zlh4mzusp . hnif32llvq <= 1.0 ) ) { tol = huq5bp1rix .
FirstOrderHold13_ErrTol ; } else if ( c5zlh4mzusp . hnif32llvq > 1.0 ) { tol
= c5zlh4mzusp . hnif32llvq * huq5bp1rix . FirstOrderHold13_ErrTol ; } else {
tol = - ( c5zlh4mzusp . hnif32llvq * huq5bp1rix . FirstOrderHold13_ErrTol ) ;
} err = c5zlh4mzusp . c5e2hzpnbf - c5zlh4mzusp . hnif32llvq ; if ( ( err >
tol ) || ( err < - tol ) ) { guard1 = true ; } else { lkkrkctitnw .
gcwd3vcs2h = ( c5zlh4mzusp . hnif32llvq - lkkrkctitnw . ipgludoliy ) / (
ssGetT ( rtS ) - lkkrkctitnw . lcvtpl0xhz ) ; lkkrkctitnw . jdrec4mf1t =
c5zlh4mzusp . c5e2hzpnbf ; } } else { guard1 = true ; } if ( guard1 ) { if (
c5zlh4mzusp . hnif32llvq != c5zlh4mzusp . c5e2hzpnbf ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; } lkkrkctitnw .
jdrec4mf1t = c5zlh4mzusp . hnif32llvq ; lkkrkctitnw . gcwd3vcs2h = 0.0 ; }
lkkrkctitnw . ipgludoliy = c5zlh4mzusp . hnif32llvq ; lkkrkctitnw .
lcvtpl0xhz = ssGetT ( rtS ) ; guard1 = false ; if ( ! ( lkkrkctitnw .
itlwzywcut == ( rtInf ) ) ) { if ( ( c5zlh4mzusp . gqj31rygmo >= - 1.0 ) && (
c5zlh4mzusp . gqj31rygmo <= 1.0 ) ) { tol = huq5bp1rix .
FirstOrderHold14_ErrTol ; } else if ( c5zlh4mzusp . gqj31rygmo > 1.0 ) { tol
= c5zlh4mzusp . gqj31rygmo * huq5bp1rix . FirstOrderHold14_ErrTol ; } else {
tol = - ( c5zlh4mzusp . gqj31rygmo * huq5bp1rix . FirstOrderHold14_ErrTol ) ;
} err = c5zlh4mzusp . iljgvw41cw - c5zlh4mzusp . gqj31rygmo ; if ( ( err >
tol ) || ( err < - tol ) ) { guard1 = true ; } else { lkkrkctitnw .
acnon4phey = ( c5zlh4mzusp . gqj31rygmo - lkkrkctitnw . mzbogashtm ) / (
ssGetT ( rtS ) - lkkrkctitnw . itlwzywcut ) ; lkkrkctitnw . mthxcazoeq =
c5zlh4mzusp . iljgvw41cw ; } } else { guard1 = true ; } if ( guard1 ) { if (
c5zlh4mzusp . gqj31rygmo != c5zlh4mzusp . iljgvw41cw ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; } lkkrkctitnw .
mthxcazoeq = c5zlh4mzusp . gqj31rygmo ; lkkrkctitnw . acnon4phey = 0.0 ; }
lkkrkctitnw . mzbogashtm = c5zlh4mzusp . gqj31rygmo ; lkkrkctitnw .
itlwzywcut = ssGetT ( rtS ) ; guard1 = false ; if ( ! ( lkkrkctitnw .
oq5dnpwzel == ( rtInf ) ) ) { if ( ( c5zlh4mzusp . l5uoxtpgkv >= - 1.0 ) && (
c5zlh4mzusp . l5uoxtpgkv <= 1.0 ) ) { tol = huq5bp1rix .
FirstOrderHold2_ErrTol_ffoy3v4qk5 ; } else if ( c5zlh4mzusp . l5uoxtpgkv >
1.0 ) { tol = c5zlh4mzusp . l5uoxtpgkv * huq5bp1rix .
FirstOrderHold2_ErrTol_ffoy3v4qk5 ; } else { tol = - ( c5zlh4mzusp .
l5uoxtpgkv * huq5bp1rix . FirstOrderHold2_ErrTol_ffoy3v4qk5 ) ; } err =
c5zlh4mzusp . og1vaqgvra - c5zlh4mzusp . l5uoxtpgkv ; if ( ( err > tol ) || (
err < - tol ) ) { guard1 = true ; } else { lkkrkctitnw . ldljdyravq = (
c5zlh4mzusp . l5uoxtpgkv - lkkrkctitnw . pcuhwhpn3x ) / ( ssGetT ( rtS ) -
lkkrkctitnw . oq5dnpwzel ) ; lkkrkctitnw . k5sxdubawm = c5zlh4mzusp .
og1vaqgvra ; } } else { guard1 = true ; } if ( guard1 ) { if ( c5zlh4mzusp .
l5uoxtpgkv != c5zlh4mzusp . og1vaqgvra ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; } lkkrkctitnw .
k5sxdubawm = c5zlh4mzusp . l5uoxtpgkv ; lkkrkctitnw . ldljdyravq = 0.0 ; }
lkkrkctitnw . pcuhwhpn3x = c5zlh4mzusp . l5uoxtpgkv ; lkkrkctitnw .
oq5dnpwzel = ssGetT ( rtS ) ; guard1 = false ; if ( ! ( lkkrkctitnw .
jdxnqz3k3z == ( rtInf ) ) ) { if ( ( c5zlh4mzusp . p0doo00o1w >= - 1.0 ) && (
c5zlh4mzusp . p0doo00o1w <= 1.0 ) ) { tol = huq5bp1rix .
FirstOrderHold3_ErrTol ; } else if ( c5zlh4mzusp . p0doo00o1w > 1.0 ) { tol =
c5zlh4mzusp . p0doo00o1w * huq5bp1rix . FirstOrderHold3_ErrTol ; } else { tol
= - ( c5zlh4mzusp . p0doo00o1w * huq5bp1rix . FirstOrderHold3_ErrTol ) ; }
err = c5zlh4mzusp . ktrgii52uw - c5zlh4mzusp . p0doo00o1w ; if ( ( err > tol
) || ( err < - tol ) ) { guard1 = true ; } else { lkkrkctitnw . kpyfexn5a1 =
( c5zlh4mzusp . p0doo00o1w - lkkrkctitnw . ialx3y2ktr ) / ( ssGetT ( rtS ) -
lkkrkctitnw . jdxnqz3k3z ) ; lkkrkctitnw . m0gspyix5l = c5zlh4mzusp .
ktrgii52uw ; } } else { guard1 = true ; } if ( guard1 ) { if ( c5zlh4mzusp .
p0doo00o1w != c5zlh4mzusp . ktrgii52uw ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; } lkkrkctitnw .
m0gspyix5l = c5zlh4mzusp . p0doo00o1w ; lkkrkctitnw . kpyfexn5a1 = 0.0 ; }
lkkrkctitnw . ialx3y2ktr = c5zlh4mzusp . p0doo00o1w ; lkkrkctitnw .
jdxnqz3k3z = ssGetT ( rtS ) ; guard1 = false ; if ( ! ( lkkrkctitnw .
mqiplucikd == ( rtInf ) ) ) { if ( ( c5zlh4mzusp . ddpajetaf2 >= - 1.0 ) && (
c5zlh4mzusp . ddpajetaf2 <= 1.0 ) ) { tol = huq5bp1rix .
FirstOrderHold4_ErrTol ; } else if ( c5zlh4mzusp . ddpajetaf2 > 1.0 ) { tol =
c5zlh4mzusp . ddpajetaf2 * huq5bp1rix . FirstOrderHold4_ErrTol ; } else { tol
= - ( c5zlh4mzusp . ddpajetaf2 * huq5bp1rix . FirstOrderHold4_ErrTol ) ; }
err = c5zlh4mzusp . k2gcn0rpks - c5zlh4mzusp . ddpajetaf2 ; if ( ( err > tol
) || ( err < - tol ) ) { guard1 = true ; } else { lkkrkctitnw . cpjc0nnbop =
( c5zlh4mzusp . ddpajetaf2 - lkkrkctitnw . f1e1x0c2vm ) / ( ssGetT ( rtS ) -
lkkrkctitnw . mqiplucikd ) ; lkkrkctitnw . mtylxvc53n = c5zlh4mzusp .
k2gcn0rpks ; } } else { guard1 = true ; } if ( guard1 ) { if ( c5zlh4mzusp .
ddpajetaf2 != c5zlh4mzusp . k2gcn0rpks ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; } lkkrkctitnw .
mtylxvc53n = c5zlh4mzusp . ddpajetaf2 ; lkkrkctitnw . cpjc0nnbop = 0.0 ; }
lkkrkctitnw . f1e1x0c2vm = c5zlh4mzusp . ddpajetaf2 ; lkkrkctitnw .
mqiplucikd = ssGetT ( rtS ) ; guard1 = false ; if ( ! ( lkkrkctitnw .
nrnbdvzt0f == ( rtInf ) ) ) { if ( ( c5zlh4mzusp . plyh5aql1b >= - 1.0 ) && (
c5zlh4mzusp . plyh5aql1b <= 1.0 ) ) { tol = huq5bp1rix .
FirstOrderHold5_ErrTol ; } else if ( c5zlh4mzusp . plyh5aql1b > 1.0 ) { tol =
c5zlh4mzusp . plyh5aql1b * huq5bp1rix . FirstOrderHold5_ErrTol ; } else { tol
= - ( c5zlh4mzusp . plyh5aql1b * huq5bp1rix . FirstOrderHold5_ErrTol ) ; }
err = c5zlh4mzusp . cmf5iapvn3 - c5zlh4mzusp . plyh5aql1b ; if ( ( err > tol
) || ( err < - tol ) ) { guard1 = true ; } else { lkkrkctitnw . eokzn5lqzs =
( c5zlh4mzusp . plyh5aql1b - lkkrkctitnw . g4iun1vbdu ) / ( ssGetT ( rtS ) -
lkkrkctitnw . nrnbdvzt0f ) ; lkkrkctitnw . irc32x12y1 = c5zlh4mzusp .
cmf5iapvn3 ; } } else { guard1 = true ; } if ( guard1 ) { if ( c5zlh4mzusp .
plyh5aql1b != c5zlh4mzusp . cmf5iapvn3 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; } lkkrkctitnw .
irc32x12y1 = c5zlh4mzusp . plyh5aql1b ; lkkrkctitnw . eokzn5lqzs = 0.0 ; }
lkkrkctitnw . g4iun1vbdu = c5zlh4mzusp . plyh5aql1b ; lkkrkctitnw .
nrnbdvzt0f = ssGetT ( rtS ) ; guard1 = false ; if ( ! ( lkkrkctitnw .
o141kdey3a == ( rtInf ) ) ) { if ( ( c5zlh4mzusp . mdhboq50pb >= - 1.0 ) && (
c5zlh4mzusp . mdhboq50pb <= 1.0 ) ) { tol = huq5bp1rix .
FirstOrderHold6_ErrTol ; } else if ( c5zlh4mzusp . mdhboq50pb > 1.0 ) { tol =
c5zlh4mzusp . mdhboq50pb * huq5bp1rix . FirstOrderHold6_ErrTol ; } else { tol
= - ( c5zlh4mzusp . mdhboq50pb * huq5bp1rix . FirstOrderHold6_ErrTol ) ; }
err = c5zlh4mzusp . b0rjr1l1ao - c5zlh4mzusp . mdhboq50pb ; if ( ( err > tol
) || ( err < - tol ) ) { guard1 = true ; } else { lkkrkctitnw . pwfj2ojmua =
( c5zlh4mzusp . mdhboq50pb - lkkrkctitnw . fcb3sp11yw ) / ( ssGetT ( rtS ) -
lkkrkctitnw . o141kdey3a ) ; lkkrkctitnw . fxlat4s44d = c5zlh4mzusp .
b0rjr1l1ao ; } } else { guard1 = true ; } if ( guard1 ) { if ( c5zlh4mzusp .
mdhboq50pb != c5zlh4mzusp . b0rjr1l1ao ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; } lkkrkctitnw .
fxlat4s44d = c5zlh4mzusp . mdhboq50pb ; lkkrkctitnw . pwfj2ojmua = 0.0 ; }
lkkrkctitnw . fcb3sp11yw = c5zlh4mzusp . mdhboq50pb ; lkkrkctitnw .
o141kdey3a = ssGetT ( rtS ) ; guard1 = false ; if ( ! ( lkkrkctitnw .
icbcw4dt4i == ( rtInf ) ) ) { if ( ( c5zlh4mzusp . h5mtw1jmmu >= - 1.0 ) && (
c5zlh4mzusp . h5mtw1jmmu <= 1.0 ) ) { tol = huq5bp1rix .
FirstOrderHold7_ErrTol ; } else if ( c5zlh4mzusp . h5mtw1jmmu > 1.0 ) { tol =
c5zlh4mzusp . h5mtw1jmmu * huq5bp1rix . FirstOrderHold7_ErrTol ; } else { tol
= - ( c5zlh4mzusp . h5mtw1jmmu * huq5bp1rix . FirstOrderHold7_ErrTol ) ; }
err = c5zlh4mzusp . pdwrzcjj3o - c5zlh4mzusp . h5mtw1jmmu ; if ( ( err > tol
) || ( err < - tol ) ) { guard1 = true ; } else { lkkrkctitnw . mudviuktks =
( c5zlh4mzusp . h5mtw1jmmu - lkkrkctitnw . bntxvuzexg ) / ( ssGetT ( rtS ) -
lkkrkctitnw . icbcw4dt4i ) ; lkkrkctitnw . gt3cupzjr1 = c5zlh4mzusp .
pdwrzcjj3o ; } } else { guard1 = true ; } if ( guard1 ) { if ( c5zlh4mzusp .
h5mtw1jmmu != c5zlh4mzusp . pdwrzcjj3o ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; } lkkrkctitnw .
gt3cupzjr1 = c5zlh4mzusp . h5mtw1jmmu ; lkkrkctitnw . mudviuktks = 0.0 ; }
lkkrkctitnw . bntxvuzexg = c5zlh4mzusp . h5mtw1jmmu ; lkkrkctitnw .
icbcw4dt4i = ssGetT ( rtS ) ; guard1 = false ; if ( ! ( lkkrkctitnw .
b2542hzgcf == ( rtInf ) ) ) { if ( ( c5zlh4mzusp . nit2nkypbx >= - 1.0 ) && (
c5zlh4mzusp . nit2nkypbx <= 1.0 ) ) { tol = huq5bp1rix .
FirstOrderHold8_ErrTol ; } else if ( c5zlh4mzusp . nit2nkypbx > 1.0 ) { tol =
c5zlh4mzusp . nit2nkypbx * huq5bp1rix . FirstOrderHold8_ErrTol ; } else { tol
= - ( c5zlh4mzusp . nit2nkypbx * huq5bp1rix . FirstOrderHold8_ErrTol ) ; }
err = c5zlh4mzusp . gv0mllfnk1 - c5zlh4mzusp . nit2nkypbx ; if ( ( err > tol
) || ( err < - tol ) ) { guard1 = true ; } else { lkkrkctitnw . chi35zyntr =
( c5zlh4mzusp . nit2nkypbx - lkkrkctitnw . hpttnbo4xq ) / ( ssGetT ( rtS ) -
lkkrkctitnw . b2542hzgcf ) ; lkkrkctitnw . frklc1du0s = c5zlh4mzusp .
gv0mllfnk1 ; } } else { guard1 = true ; } if ( guard1 ) { if ( c5zlh4mzusp .
nit2nkypbx != c5zlh4mzusp . gv0mllfnk1 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; } lkkrkctitnw .
frklc1du0s = c5zlh4mzusp . nit2nkypbx ; lkkrkctitnw . chi35zyntr = 0.0 ; }
lkkrkctitnw . hpttnbo4xq = c5zlh4mzusp . nit2nkypbx ; lkkrkctitnw .
b2542hzgcf = ssGetT ( rtS ) ; guard1 = false ; if ( ! ( lkkrkctitnw .
lnr1sinkco == ( rtInf ) ) ) { if ( ( c5zlh4mzusp . kkglsripg0 >= - 1.0 ) && (
c5zlh4mzusp . kkglsripg0 <= 1.0 ) ) { tol = huq5bp1rix .
FirstOrderHold9_ErrTol ; } else if ( c5zlh4mzusp . kkglsripg0 > 1.0 ) { tol =
c5zlh4mzusp . kkglsripg0 * huq5bp1rix . FirstOrderHold9_ErrTol ; } else { tol
= - ( c5zlh4mzusp . kkglsripg0 * huq5bp1rix . FirstOrderHold9_ErrTol ) ; }
err = c5zlh4mzusp . gtbbdrbjbz - c5zlh4mzusp . kkglsripg0 ; if ( ( err > tol
) || ( err < - tol ) ) { guard1 = true ; } else { lkkrkctitnw . bduaxxbpzz =
( c5zlh4mzusp . kkglsripg0 - lkkrkctitnw . dm1feblhqa ) / ( ssGetT ( rtS ) -
lkkrkctitnw . lnr1sinkco ) ; lkkrkctitnw . mh53p0dtth = c5zlh4mzusp .
gtbbdrbjbz ; } } else { guard1 = true ; } if ( guard1 ) { if ( c5zlh4mzusp .
kkglsripg0 != c5zlh4mzusp . gtbbdrbjbz ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; } lkkrkctitnw .
mh53p0dtth = c5zlh4mzusp . kkglsripg0 ; lkkrkctitnw . bduaxxbpzz = 0.0 ; }
lkkrkctitnw . dm1feblhqa = c5zlh4mzusp . kkglsripg0 ; lkkrkctitnw .
lnr1sinkco = ssGetT ( rtS ) ; } UNUSED_PARAMETER ( tid ) ; } void
MdlUpdateTID5 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void
MdlDerivatives ( void ) { nyo0ps4iab * _rtXdot ; _rtXdot = ( ( nyo0ps4iab * )
ssGetdX ( rtS ) ) ; _rtXdot -> fzppb4fxpw = 0.0 ; _rtXdot -> fzppb4fxpw +=
huq5bp1rix . TransferFcn_A * jhyfx1uf4ys . fzppb4fxpw ; _rtXdot -> fzppb4fxpw
+= c5zlh4mzusp . nwxo2im0pt ; _rtXdot -> hrpvbqnxcm = 0.0 ; _rtXdot ->
hrpvbqnxcm += huq5bp1rix . MotorCouplingDynamics_A * jhyfx1uf4ys . hrpvbqnxcm
; _rtXdot -> hrpvbqnxcm += c5zlh4mzusp . lbhkoluejj ; mr20y0atts ( & (
lkkrkctitnw . ihhigf1gyq . rtb ) , & ( lkkrkctitnw . ihhigf1gyq . rtdw ) , &
( jhyfx1uf4ys . ivpu5oi1vy ) , & ( ( ( p3zfy11wvw * ) ssGetContStateDisabled
( rtS ) ) -> ivpu5oi1vy ) , & ( ( ( nyo0ps4iab * ) ssGetdX ( rtS ) ) ->
ivpu5oi1vy ) ) ; _rtXdot -> p5ary1pyta = 0.0 ; _rtXdot -> p5ary1pyta +=
huq5bp1rix . SensorDynamics_A * jhyfx1uf4ys . p5ary1pyta ; _rtXdot ->
p5ary1pyta += c5zlh4mzusp . diuztsorgb ; apevzx5nn2 ( & c5zlh4mzusp .
dnjvmk5ndp , & c5zlh4mzusp . bjaf22yvfs , & c5zlh4mzusp . cmf5iapvn3 , &
c5zlh4mzusp . b0rjr1l1ao , & c5zlh4mzusp . pdwrzcjj3o , & c5zlh4mzusp .
gv0mllfnk1 , & c5zlh4mzusp . gtbbdrbjbz , & c5zlh4mzusp . hxyqyfsavy , &
c5zlh4mzusp . owiwiqigkl , & c5zlh4mzusp . c5e2hzpnbf , & c5zlh4mzusp .
iljgvw41cw , & ( lkkrkctitnw . lkxnu4ieaj . rtb ) , & ( jhyfx1uf4ys .
i0l3sl3egl ) , & ( ( ( nyo0ps4iab * ) ssGetdX ( rtS ) ) -> i0l3sl3egl ) ) ;
_rtXdot -> f4jdoevyqa = 0.0 ; _rtXdot -> f4jdoevyqa += huq5bp1rix .
BatteryDischargeDynamics_A * jhyfx1uf4ys . f4jdoevyqa ; _rtXdot -> f4jdoevyqa
+= c5zlh4mzusp . la3brkkri1 ; doej41yld0 ( & ( lkkrkctitnw . fxfpjs5zwf . rtb
) , & ( jhyfx1uf4ys . a1ungebxie ) , & ( ( ( nyo0ps4iab * ) ssGetdX ( rtS ) )
-> a1ungebxie ) ) ; _rtXdot -> bsccreyw2k = c5zlh4mzusp . g4ryn23br0 ;
_rtXdot -> pplelyhu0b = c5zlh4mzusp . knetuj3j3h ; _rtXdot -> l43r4icf05 =
c5zlh4mzusp . p1sxhrirqu ; _rtXdot -> oje5ckcb53 = c5zlh4mzusp . ifin0uxrbw ;
_rtXdot -> muxdrd5ttu = c5zlh4mzusp . b0bnfcsyz0 ; _rtXdot -> lcrtnfg2l5 =
c5zlh4mzusp . kmt0wccsr4 ; _rtXdot -> nqlma2yszf = c5zlh4mzusp . dmcl4w1he2 ;
_rtXdot -> oelaqhrdzl = c5zlh4mzusp . phefapml0b ; _rtXdot -> ble4yq3fvo =
c5zlh4mzusp . l2wo05eoex ; cj5kkg5mwz ( & ( lkkrkctitnw . d43yu213mh . rtb )
, & ( ( ( nyo0ps4iab * ) ssGetdX ( rtS ) ) -> nx1404k4i3 ) ) ; } void
MdlProjection ( void ) { } void MdlZeroCrossings ( void ) { jcm110q220 *
_rtZCSV ; _rtZCSV = ( ( jcm110q220 * ) ssGetSolverZcSignalVector ( rtS ) ) ;
fwphuadlf2 ( & c5zlh4mzusp . diuztsorgb , & ( lkkrkctitnw . ihhigf1gyq . rtb
) , & ( lkkrkctitnw . ihhigf1gyq . rtdw ) , & ( jhyfx1uf4ys . ivpu5oi1vy ) ,
& ( ( ( jcm110q220 * ) ssGetSolverZcSignalVector ( rtS ) ) -> czagahvfxt ) )
; gofm1sxsii ( & c5zlh4mzusp . jmeumg2nik , & c5zlh4mzusp . iytvha1kaa , &
c5zlh4mzusp . gwrpevjgp4 , & ( lkkrkctitnw . lkxnu4ieaj . rtb ) , & ( ( (
jcm110q220 * ) ssGetSolverZcSignalVector ( rtS ) ) -> lb4ckb0ufi ) ) ;
_rtZCSV -> eszvtz04mb = c5zlh4mzusp . psmccdqk4g - huq5bp1rix .
Saturation1_UpperSat ; _rtZCSV -> aos1jx50it = c5zlh4mzusp . psmccdqk4g -
huq5bp1rix . Saturation1_LowerSat ; _rtZCSV -> p03xs5vawb = c5zlh4mzusp .
luftbvp0tn - huq5bp1rix . Saturation_UpperSat ; _rtZCSV -> kmatiky2t2 =
c5zlh4mzusp . luftbvp0tn - huq5bp1rix . Saturation_LowerSat ; _rtZCSV ->
crvi12qfyy = c5zlh4mzusp . l30tekirvc - huq5bp1rix .
Saturation1_UpperSat_hiohcychfu ; _rtZCSV -> d4wfhz3pjs = c5zlh4mzusp .
l30tekirvc - huq5bp1rix . Saturation1_LowerSat_dttfca3rbr ; _rtZCSV ->
ly3icfkisg = c5zlh4mzusp . n1h1mpduzx - huq5bp1rix .
Saturation_UpperSat_p152syy2lk ; _rtZCSV -> dfbeyzw1ph = c5zlh4mzusp .
n1h1mpduzx - huq5bp1rix . Saturation_LowerSat_akgyws5are ; { const double *
timePtr = ( double * ) lkkrkctitnw . osxwf31rhs . TimePtr ; int_T *
zcTimeIndices = & lkkrkctitnw . j4cpglu32p [ 0 ] ; int_T zcTimeIndicesIdx =
lkkrkctitnw . k5jlqybics ; ( ( jcm110q220 * ) ssGetSolverZcSignalVector ( rtS
) ) -> iqs4kgcb2r = ssGetT ( rtS ) - timePtr [ zcTimeIndices [
zcTimeIndicesIdx ] ] ; } _rtZCSV -> hbkyprf2u0 = c5zlh4mzusp . bq2avi4o4c -
huq5bp1rix . HitCrossing_Offset ; bz1mr4ujfd ( & c5zlh4mzusp . itmoz4lcsg , &
( ( ( jcm110q220 * ) ssGetSolverZcSignalVector ( rtS ) ) -> jgkpling5h ) ) ;
} void MdlTerminate ( void ) { kbxp3i41oa ( & ( lkkrkctitnw . i1wwqrhe01 .
rtm ) ) ; ioun3a0d3c ( & ( lkkrkctitnw . ahts4cu30v . rtm ) ) ; escpily3xw (
& ( lkkrkctitnw . ehgw5hos5u . rtm ) ) ; jpmowlrhtz ( & ( lkkrkctitnw .
ihhigf1gyq . rtm ) ) ; d51nt2wcq4 ( & ( lkkrkctitnw . fxfpjs5zwf . rtm ) ) ;
fzkydmfar2 ( & ( lkkrkctitnw . d43yu213mh . rtm ) ) ; eluttkodxn ( & (
lkkrkctitnw . lkxnu4ieaj . rtm ) ) ; rt_FREE ( lkkrkctitnw . osxwf31rhs .
RSimInfoPtr ) ; } static void mr_HevP4ReferenceApplication_cacheDataAsMxArray
( mxArray * destArray , mwIndex i , int j , const void * srcData , size_t
numBytes ) ; static void mr_HevP4ReferenceApplication_cacheDataAsMxArray (
mxArray * destArray , mwIndex i , int j , const void * srcData , size_t
numBytes ) { mxArray * newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1
, numBytes , mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData (
newArray ) , ( const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber (
destArray , i , j , newArray ) ; } static void
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_HevP4ReferenceApplication_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) ; static void
mr_HevP4ReferenceApplication_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j
, mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_HevP4ReferenceApplication_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_HevP4ReferenceApplication_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) { const uint_T varVal = (
uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return
varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_HevP4ReferenceApplication_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void
mr_HevP4ReferenceApplication_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_HevP4ReferenceApplication_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) ; static void
mr_HevP4ReferenceApplication_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_HevP4ReferenceApplication_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void mr_HevP4ReferenceApplication_cacheBitFieldToCellArrayWithOffset
( mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal
) { mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_HevP4ReferenceApplication_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T
mr_HevP4ReferenceApplication_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_HevP4ReferenceApplication_GetDWork (
) { static const char_T * ssDWFieldNames [ 3 ] = { "c5zlh4mzusp" ,
"lkkrkctitnw" , "NULL_PrevZCX" , } ; mxArray * ssDW = mxCreateStructMatrix (
1 , 1 , 3 , ssDWFieldNames ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void
* ) & ( c5zlh4mzusp ) , sizeof ( c5zlh4mzusp ) ) ; { static const char_T *
rtdwDataFieldNames [ 173 ] = { "lkkrkctitnw.ihhigf1gyq" ,
"lkkrkctitnw.lkxnu4ieaj" , "lkkrkctitnw.fxfpjs5zwf" ,
"lkkrkctitnw.ahts4cu30v" , "lkkrkctitnw.i1wwqrhe01" ,
"lkkrkctitnw.ehgw5hos5u" , "lkkrkctitnw.d43yu213mh" ,
"lkkrkctitnw.c1ij1f4luo" , "lkkrkctitnw.kh5xdhjoen" ,
"lkkrkctitnw.bhsln1im02" , "lkkrkctitnw.ovmdszn3vi" ,
"lkkrkctitnw.h4bk44iq0j" , "lkkrkctitnw.fnd1cgu2ez" ,
"lkkrkctitnw.hufmyzg00g" , "lkkrkctitnw.fgxzeqilcf" ,
"lkkrkctitnw.caj4332p1l" , "lkkrkctitnw.h04c4o3sdm" ,
"lkkrkctitnw.pz1rko3nhq" , "lkkrkctitnw.jrbpexblku" ,
"lkkrkctitnw.infpntaopi" , "lkkrkctitnw.cpzvjo4vs1" ,
"lkkrkctitnw.m5xnya5qov" , "lkkrkctitnw.ezbvugwn3z" ,
"lkkrkctitnw.knm5vku22q" , "lkkrkctitnw.melid01ejw" ,
"lkkrkctitnw.appsnxr1qq" , "lkkrkctitnw.maexa33f2j" ,
"lkkrkctitnw.gxfbvg10fk" , "lkkrkctitnw.o2woa2lt3g" ,
"lkkrkctitnw.lb0biqjhcr" , "lkkrkctitnw.aooi2g3epf" ,
"lkkrkctitnw.pth0sd032r" , "lkkrkctitnw.l1spg24m54" ,
"lkkrkctitnw.fulcowlnoh" , "lkkrkctitnw.js1li4zbu0" ,
"lkkrkctitnw.eg44xjqske" , "lkkrkctitnw.hmcxdptmmg" ,
"lkkrkctitnw.adrjeq0yql" , "lkkrkctitnw.nzezetf530" ,
"lkkrkctitnw.ar5h2piciy" , "lkkrkctitnw.g13w5b43up" ,
"lkkrkctitnw.p1khtziyyr" , "lkkrkctitnw.lgrvjhedz4" ,
"lkkrkctitnw.cofsoqmglc" , "lkkrkctitnw.lii3bzekam" ,
"lkkrkctitnw.ayhyrzc5bo" , "lkkrkctitnw.ep524gyioe" ,
"lkkrkctitnw.dkktohtk2t" , "lkkrkctitnw.ouiv2ttb4k" ,
"lkkrkctitnw.fqljzsn5xc" , "lkkrkctitnw.mgtnggtvl3" ,
"lkkrkctitnw.bhqhbe5hw0" , "lkkrkctitnw.npx35rsk2y" ,
"lkkrkctitnw.dek2b4z54h" , "lkkrkctitnw.hr1f2ycsrs" ,
"lkkrkctitnw.a2gc015fmo" , "lkkrkctitnw.bugufqhsqr" ,
"lkkrkctitnw.h3ritbtaba" , "lkkrkctitnw.f3dj5ppzb4" ,
"lkkrkctitnw.p142joj1tt" , "lkkrkctitnw.lfduexc22r" ,
"lkkrkctitnw.mypipgzpqg" , "lkkrkctitnw.e5k5uh1tii" ,
"lkkrkctitnw.hj5jjgcaox" , "lkkrkctitnw.mqxljfmsyj" ,
"lkkrkctitnw.odzx5k4e10" , "lkkrkctitnw.pwychxn2rx" ,
"lkkrkctitnw.cvod5gblce" , "lkkrkctitnw.jz4igdfsjy" ,
"lkkrkctitnw.bschkhlqcx" , "lkkrkctitnw.p5zpn5rl4f" ,
"lkkrkctitnw.enyy3t4ps3" , "lkkrkctitnw.droxjfozbf" ,
"lkkrkctitnw.k5oauund31" , "lkkrkctitnw.cutrrpdov1" ,
"lkkrkctitnw.mpliu3opsq" , "lkkrkctitnw.evydn1x5u3" ,
"lkkrkctitnw.aliqzpm34m" , "lkkrkctitnw.pzq0ihn3t3" ,
"lkkrkctitnw.o2dkzedwyd" , "lkkrkctitnw.iwacvi1cvr" ,
"lkkrkctitnw.fue3uld4xj" , "lkkrkctitnw.h5spwccaot" ,
"lkkrkctitnw.iepmyvc12j" , "lkkrkctitnw.lcvtpl0xhz" ,
"lkkrkctitnw.jdrec4mf1t" , "lkkrkctitnw.gcwd3vcs2h" ,
"lkkrkctitnw.ipgludoliy" , "lkkrkctitnw.itlwzywcut" ,
"lkkrkctitnw.mthxcazoeq" , "lkkrkctitnw.acnon4phey" ,
"lkkrkctitnw.mzbogashtm" , "lkkrkctitnw.oq5dnpwzel" ,
"lkkrkctitnw.k5sxdubawm" , "lkkrkctitnw.ldljdyravq" ,
"lkkrkctitnw.pcuhwhpn3x" , "lkkrkctitnw.jdxnqz3k3z" ,
"lkkrkctitnw.m0gspyix5l" , "lkkrkctitnw.kpyfexn5a1" ,
"lkkrkctitnw.ialx3y2ktr" , "lkkrkctitnw.mqiplucikd" ,
"lkkrkctitnw.mtylxvc53n" , "lkkrkctitnw.cpjc0nnbop" ,
"lkkrkctitnw.f1e1x0c2vm" , "lkkrkctitnw.nrnbdvzt0f" ,
"lkkrkctitnw.irc32x12y1" , "lkkrkctitnw.eokzn5lqzs" ,
"lkkrkctitnw.g4iun1vbdu" , "lkkrkctitnw.o141kdey3a" ,
"lkkrkctitnw.fxlat4s44d" , "lkkrkctitnw.pwfj2ojmua" ,
"lkkrkctitnw.fcb3sp11yw" , "lkkrkctitnw.icbcw4dt4i" ,
"lkkrkctitnw.gt3cupzjr1" , "lkkrkctitnw.mudviuktks" ,
"lkkrkctitnw.bntxvuzexg" , "lkkrkctitnw.b2542hzgcf" ,
"lkkrkctitnw.frklc1du0s" , "lkkrkctitnw.chi35zyntr" ,
"lkkrkctitnw.hpttnbo4xq" , "lkkrkctitnw.lnr1sinkco" ,
"lkkrkctitnw.mh53p0dtth" , "lkkrkctitnw.bduaxxbpzz" ,
"lkkrkctitnw.dm1feblhqa" , "lkkrkctitnw.frajpj20to" ,
"lkkrkctitnw.iyz0ey02aq" , "lkkrkctitnw.k5owklwcio" ,
"lkkrkctitnw.irfopsw5u3" , "lkkrkctitnw.dde0fwvl0o" ,
"lkkrkctitnw.dgfmvwissk" , "lkkrkctitnw.kvsmqclsqu" ,
"lkkrkctitnw.ivnj3kwa54" , "lkkrkctitnw.cjeoae02q5" ,
"lkkrkctitnw.pxrensdadn" , "lkkrkctitnw.j4cpglu32p" ,
"lkkrkctitnw.k5jlqybics" , "lkkrkctitnw.he0vfk52c2" ,
"lkkrkctitnw.pcvkuijeek" , "lkkrkctitnw.iyr13augnz" ,
"lkkrkctitnw.juvdeom5ty" , "lkkrkctitnw.db235qphyz" ,
"lkkrkctitnw.opaw4z2zn3" , "lkkrkctitnw.fi1llmjhnm" ,
"lkkrkctitnw.omlg0bte3m" , "lkkrkctitnw.fb1jadv2t5" ,
"lkkrkctitnw.arub2p4zzr" , "lkkrkctitnw.pixene2r1k" ,
"lkkrkctitnw.ohzb3swhrq" , "lkkrkctitnw.pblwjrwtpn" ,
"lkkrkctitnw.cbx5s3rbvn" , "lkkrkctitnw.gvx5sloovp" ,
"lkkrkctitnw.f0hhltjlcn" , "lkkrkctitnw.n5ycrmji5n" ,
"lkkrkctitnw.lh3epubkdg" , "lkkrkctitnw.g0rarwcx0n" ,
"lkkrkctitnw.ph3dyn2vbi" , "lkkrkctitnw.buvgxg4wiw" ,
"lkkrkctitnw.dzase2snq2" , "lkkrkctitnw.ac55uhsiqx" ,
"lkkrkctitnw.etouatgqfx" , "lkkrkctitnw.gzxynjg3le" ,
"lkkrkctitnw.giqmtzacnq" , "lkkrkctitnw.b4ck1dw0sr" ,
"lkkrkctitnw.o5b1d5v4kk" , "lkkrkctitnw.cgd2ecnupw" ,
"lkkrkctitnw.ev0qxkvgf2" , "lkkrkctitnw.k25cpbrhkh" ,
"lkkrkctitnw.mgfuv3v40s" , "lkkrkctitnw.erh05us4i2" ,
"lkkrkctitnw.d0xw0oxj5a.hnlzvdkzrg" , "lkkrkctitnw.d0xw0oxj5a.jdyejkwif0" ,
"lkkrkctitnw.im2vq3d3irm.hnlzvdkzrg" , "lkkrkctitnw.im2vq3d3irm.jdyejkwif0" ,
} ; mxArray * rtdwData = mxCreateStructMatrix ( 1 , 1 , 173 ,
rtdwDataFieldNames ) ; { mxArray * varData = mr_DrivetrainHevP4_GetDWork ( &
( lkkrkctitnw . ihhigf1gyq ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 0 ,
varData ) ; } { mxArray * varData = mr_SiMappedEngine_GetDWork ( & (
lkkrkctitnw . lkxnu4ieaj ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 1 ,
varData ) ; } { mxArray * varData = mr_BattHevP4_GetDWork ( & ( lkkrkctitnw .
fxfpjs5zwf ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 2 , varData ) ; } {
mxArray * varData = mr_HevP4OptimalController_GetDWork ( & ( lkkrkctitnw .
ahts4cu30v ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 3 , varData ) ; } {
mxArray * varData = mr_SiEngineController_GetDWork ( & ( lkkrkctitnw .
i1wwqrhe01 ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 4 , varData ) ; } {
mxArray * varData = mr_HevP4TransmissionController_GetDWork ( & ( lkkrkctitnw
. ehgw5hos5u ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 5 , varData ) ; } {
mxArray * varData = mr_MotMappedP4_GetDWork ( & ( lkkrkctitnw . d43yu213mh )
) ; mxSetFieldByNumber ( rtdwData , 0 , 6 , varData ) ; }
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const
void * ) & ( lkkrkctitnw . c1ij1f4luo ) , sizeof ( lkkrkctitnw . c1ij1f4luo )
) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 8 , (
const void * ) & ( lkkrkctitnw . kh5xdhjoen ) , sizeof ( lkkrkctitnw .
kh5xdhjoen ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 9 , ( const void * ) & ( lkkrkctitnw . bhsln1im02 ) , sizeof (
lkkrkctitnw . bhsln1im02 ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const
void * ) & ( lkkrkctitnw . ovmdszn3vi ) , sizeof ( lkkrkctitnw . ovmdszn3vi )
) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 11 , (
const void * ) & ( lkkrkctitnw . h4bk44iq0j ) , sizeof ( lkkrkctitnw .
h4bk44iq0j ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 12 , ( const void * ) & ( lkkrkctitnw . fnd1cgu2ez ) , sizeof (
lkkrkctitnw . fnd1cgu2ez ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const
void * ) & ( lkkrkctitnw . hufmyzg00g ) , sizeof ( lkkrkctitnw . hufmyzg00g )
) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 14 , (
const void * ) & ( lkkrkctitnw . fgxzeqilcf ) , sizeof ( lkkrkctitnw .
fgxzeqilcf ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 15 , ( const void * ) & ( lkkrkctitnw . caj4332p1l ) , sizeof (
lkkrkctitnw . caj4332p1l ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 16 , ( const
void * ) & ( lkkrkctitnw . h04c4o3sdm ) , sizeof ( lkkrkctitnw . h04c4o3sdm )
) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 17 , (
const void * ) & ( lkkrkctitnw . pz1rko3nhq ) , sizeof ( lkkrkctitnw .
pz1rko3nhq ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 18 , ( const void * ) & ( lkkrkctitnw . jrbpexblku ) , sizeof (
lkkrkctitnw . jrbpexblku ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 19 , ( const
void * ) & ( lkkrkctitnw . infpntaopi ) , sizeof ( lkkrkctitnw . infpntaopi )
) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 20 , (
const void * ) & ( lkkrkctitnw . cpzvjo4vs1 ) , sizeof ( lkkrkctitnw .
cpzvjo4vs1 ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 21 , ( const void * ) & ( lkkrkctitnw . m5xnya5qov ) , sizeof (
lkkrkctitnw . m5xnya5qov ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 22 , ( const
void * ) & ( lkkrkctitnw . ezbvugwn3z ) , sizeof ( lkkrkctitnw . ezbvugwn3z )
) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 23 , (
const void * ) & ( lkkrkctitnw . knm5vku22q ) , sizeof ( lkkrkctitnw .
knm5vku22q ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 24 , ( const void * ) & ( lkkrkctitnw . melid01ejw ) , sizeof (
lkkrkctitnw . melid01ejw ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 25 , ( const
void * ) & ( lkkrkctitnw . appsnxr1qq ) , sizeof ( lkkrkctitnw . appsnxr1qq )
) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 26 , (
const void * ) & ( lkkrkctitnw . maexa33f2j ) , sizeof ( lkkrkctitnw .
maexa33f2j ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 27 , ( const void * ) & ( lkkrkctitnw . gxfbvg10fk ) , sizeof (
lkkrkctitnw . gxfbvg10fk ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 28 , ( const
void * ) & ( lkkrkctitnw . o2woa2lt3g ) , sizeof ( lkkrkctitnw . o2woa2lt3g )
) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 29 , (
const void * ) & ( lkkrkctitnw . lb0biqjhcr ) , sizeof ( lkkrkctitnw .
lb0biqjhcr ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 30 , ( const void * ) & ( lkkrkctitnw . aooi2g3epf ) , sizeof (
lkkrkctitnw . aooi2g3epf ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 31 , ( const
void * ) & ( lkkrkctitnw . pth0sd032r ) , sizeof ( lkkrkctitnw . pth0sd032r )
) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 32 , (
const void * ) & ( lkkrkctitnw . l1spg24m54 ) , sizeof ( lkkrkctitnw .
l1spg24m54 ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 33 , ( const void * ) & ( lkkrkctitnw . fulcowlnoh ) , sizeof (
lkkrkctitnw . fulcowlnoh ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 34 , ( const
void * ) & ( lkkrkctitnw . js1li4zbu0 ) , sizeof ( lkkrkctitnw . js1li4zbu0 )
) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 35 , (
const void * ) & ( lkkrkctitnw . eg44xjqske ) , sizeof ( lkkrkctitnw .
eg44xjqske ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 36 , ( const void * ) & ( lkkrkctitnw . hmcxdptmmg ) , sizeof (
lkkrkctitnw . hmcxdptmmg ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 37 , ( const
void * ) & ( lkkrkctitnw . adrjeq0yql ) , sizeof ( lkkrkctitnw . adrjeq0yql )
) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 38 , (
const void * ) & ( lkkrkctitnw . nzezetf530 ) , sizeof ( lkkrkctitnw .
nzezetf530 ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 39 , ( const void * ) & ( lkkrkctitnw . ar5h2piciy ) , sizeof (
lkkrkctitnw . ar5h2piciy ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 40 , ( const
void * ) & ( lkkrkctitnw . g13w5b43up ) , sizeof ( lkkrkctitnw . g13w5b43up )
) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 41 , (
const void * ) & ( lkkrkctitnw . p1khtziyyr ) , sizeof ( lkkrkctitnw .
p1khtziyyr ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 42 , ( const void * ) & ( lkkrkctitnw . lgrvjhedz4 ) , sizeof (
lkkrkctitnw . lgrvjhedz4 ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 43 , ( const
void * ) & ( lkkrkctitnw . cofsoqmglc ) , sizeof ( lkkrkctitnw . cofsoqmglc )
) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 44 , (
const void * ) & ( lkkrkctitnw . lii3bzekam ) , sizeof ( lkkrkctitnw .
lii3bzekam ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 45 , ( const void * ) & ( lkkrkctitnw . ayhyrzc5bo ) , sizeof (
lkkrkctitnw . ayhyrzc5bo ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 46 , ( const
void * ) & ( lkkrkctitnw . ep524gyioe ) , sizeof ( lkkrkctitnw . ep524gyioe )
) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 47 , (
const void * ) & ( lkkrkctitnw . dkktohtk2t ) , sizeof ( lkkrkctitnw .
dkktohtk2t ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 48 , ( const void * ) & ( lkkrkctitnw . ouiv2ttb4k ) , sizeof (
lkkrkctitnw . ouiv2ttb4k ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 49 , ( const
void * ) & ( lkkrkctitnw . fqljzsn5xc ) , sizeof ( lkkrkctitnw . fqljzsn5xc )
) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 50 , (
const void * ) & ( lkkrkctitnw . mgtnggtvl3 ) , sizeof ( lkkrkctitnw .
mgtnggtvl3 ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 51 , ( const void * ) & ( lkkrkctitnw . bhqhbe5hw0 ) , sizeof (
lkkrkctitnw . bhqhbe5hw0 ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 52 , ( const
void * ) & ( lkkrkctitnw . npx35rsk2y ) , sizeof ( lkkrkctitnw . npx35rsk2y )
) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 53 , (
const void * ) & ( lkkrkctitnw . dek2b4z54h ) , sizeof ( lkkrkctitnw .
dek2b4z54h ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 54 , ( const void * ) & ( lkkrkctitnw . hr1f2ycsrs ) , sizeof (
lkkrkctitnw . hr1f2ycsrs ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 55 , ( const
void * ) & ( lkkrkctitnw . a2gc015fmo ) , sizeof ( lkkrkctitnw . a2gc015fmo )
) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 56 , (
const void * ) & ( lkkrkctitnw . bugufqhsqr ) , sizeof ( lkkrkctitnw .
bugufqhsqr ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 57 , ( const void * ) & ( lkkrkctitnw . h3ritbtaba ) , sizeof (
lkkrkctitnw . h3ritbtaba ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 58 , ( const
void * ) & ( lkkrkctitnw . f3dj5ppzb4 ) , sizeof ( lkkrkctitnw . f3dj5ppzb4 )
) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 59 , (
const void * ) & ( lkkrkctitnw . p142joj1tt ) , sizeof ( lkkrkctitnw .
p142joj1tt ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 60 , ( const void * ) & ( lkkrkctitnw . lfduexc22r ) , sizeof (
lkkrkctitnw . lfduexc22r ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 61 , ( const
void * ) & ( lkkrkctitnw . mypipgzpqg ) , sizeof ( lkkrkctitnw . mypipgzpqg )
) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 62 , (
const void * ) & ( lkkrkctitnw . e5k5uh1tii ) , sizeof ( lkkrkctitnw .
e5k5uh1tii ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 63 , ( const void * ) & ( lkkrkctitnw . hj5jjgcaox ) , sizeof (
lkkrkctitnw . hj5jjgcaox ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 64 , ( const
void * ) & ( lkkrkctitnw . mqxljfmsyj ) , sizeof ( lkkrkctitnw . mqxljfmsyj )
) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 65 , (
const void * ) & ( lkkrkctitnw . odzx5k4e10 ) , sizeof ( lkkrkctitnw .
odzx5k4e10 ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 66 , ( const void * ) & ( lkkrkctitnw . pwychxn2rx ) , sizeof (
lkkrkctitnw . pwychxn2rx ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 67 , ( const
void * ) & ( lkkrkctitnw . cvod5gblce ) , sizeof ( lkkrkctitnw . cvod5gblce )
) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 68 , (
const void * ) & ( lkkrkctitnw . jz4igdfsjy ) , sizeof ( lkkrkctitnw .
jz4igdfsjy ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 69 , ( const void * ) & ( lkkrkctitnw . bschkhlqcx ) , sizeof (
lkkrkctitnw . bschkhlqcx ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 70 , ( const
void * ) & ( lkkrkctitnw . p5zpn5rl4f ) , sizeof ( lkkrkctitnw . p5zpn5rl4f )
) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 71 , (
const void * ) & ( lkkrkctitnw . enyy3t4ps3 ) , sizeof ( lkkrkctitnw .
enyy3t4ps3 ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 72 , ( const void * ) & ( lkkrkctitnw . droxjfozbf ) , sizeof (
lkkrkctitnw . droxjfozbf ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 73 , ( const
void * ) & ( lkkrkctitnw . k5oauund31 ) , sizeof ( lkkrkctitnw . k5oauund31 )
) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 74 , (
const void * ) & ( lkkrkctitnw . cutrrpdov1 ) , sizeof ( lkkrkctitnw .
cutrrpdov1 ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 75 , ( const void * ) & ( lkkrkctitnw . mpliu3opsq ) , sizeof (
lkkrkctitnw . mpliu3opsq ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 76 , ( const
void * ) & ( lkkrkctitnw . evydn1x5u3 ) , sizeof ( lkkrkctitnw . evydn1x5u3 )
) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 77 , (
const void * ) & ( lkkrkctitnw . aliqzpm34m ) , sizeof ( lkkrkctitnw .
aliqzpm34m ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 78 , ( const void * ) & ( lkkrkctitnw . pzq0ihn3t3 ) , sizeof (
lkkrkctitnw . pzq0ihn3t3 ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 79 , ( const
void * ) & ( lkkrkctitnw . o2dkzedwyd ) , sizeof ( lkkrkctitnw . o2dkzedwyd )
) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 80 , (
const void * ) & ( lkkrkctitnw . iwacvi1cvr ) , sizeof ( lkkrkctitnw .
iwacvi1cvr ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 81 , ( const void * ) & ( lkkrkctitnw . fue3uld4xj ) , sizeof (
lkkrkctitnw . fue3uld4xj ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 82 , ( const
void * ) & ( lkkrkctitnw . h5spwccaot ) , sizeof ( lkkrkctitnw . h5spwccaot )
) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 83 , (
const void * ) & ( lkkrkctitnw . iepmyvc12j ) , sizeof ( lkkrkctitnw .
iepmyvc12j ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 84 , ( const void * ) & ( lkkrkctitnw . lcvtpl0xhz ) , sizeof (
lkkrkctitnw . lcvtpl0xhz ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 85 , ( const
void * ) & ( lkkrkctitnw . jdrec4mf1t ) , sizeof ( lkkrkctitnw . jdrec4mf1t )
) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 86 , (
const void * ) & ( lkkrkctitnw . gcwd3vcs2h ) , sizeof ( lkkrkctitnw .
gcwd3vcs2h ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 87 , ( const void * ) & ( lkkrkctitnw . ipgludoliy ) , sizeof (
lkkrkctitnw . ipgludoliy ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 88 , ( const
void * ) & ( lkkrkctitnw . itlwzywcut ) , sizeof ( lkkrkctitnw . itlwzywcut )
) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 89 , (
const void * ) & ( lkkrkctitnw . mthxcazoeq ) , sizeof ( lkkrkctitnw .
mthxcazoeq ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 90 , ( const void * ) & ( lkkrkctitnw . acnon4phey ) , sizeof (
lkkrkctitnw . acnon4phey ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 91 , ( const
void * ) & ( lkkrkctitnw . mzbogashtm ) , sizeof ( lkkrkctitnw . mzbogashtm )
) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 92 , (
const void * ) & ( lkkrkctitnw . oq5dnpwzel ) , sizeof ( lkkrkctitnw .
oq5dnpwzel ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 93 , ( const void * ) & ( lkkrkctitnw . k5sxdubawm ) , sizeof (
lkkrkctitnw . k5sxdubawm ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 94 , ( const
void * ) & ( lkkrkctitnw . ldljdyravq ) , sizeof ( lkkrkctitnw . ldljdyravq )
) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 95 , (
const void * ) & ( lkkrkctitnw . pcuhwhpn3x ) , sizeof ( lkkrkctitnw .
pcuhwhpn3x ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 96 , ( const void * ) & ( lkkrkctitnw . jdxnqz3k3z ) , sizeof (
lkkrkctitnw . jdxnqz3k3z ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 97 , ( const
void * ) & ( lkkrkctitnw . m0gspyix5l ) , sizeof ( lkkrkctitnw . m0gspyix5l )
) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 98 , (
const void * ) & ( lkkrkctitnw . kpyfexn5a1 ) , sizeof ( lkkrkctitnw .
kpyfexn5a1 ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 99 , ( const void * ) & ( lkkrkctitnw . ialx3y2ktr ) , sizeof (
lkkrkctitnw . ialx3y2ktr ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 100 , (
const void * ) & ( lkkrkctitnw . mqiplucikd ) , sizeof ( lkkrkctitnw .
mqiplucikd ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 101 , ( const void * ) & ( lkkrkctitnw . mtylxvc53n ) , sizeof (
lkkrkctitnw . mtylxvc53n ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 102 , (
const void * ) & ( lkkrkctitnw . cpjc0nnbop ) , sizeof ( lkkrkctitnw .
cpjc0nnbop ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 103 , ( const void * ) & ( lkkrkctitnw . f1e1x0c2vm ) , sizeof (
lkkrkctitnw . f1e1x0c2vm ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 104 , (
const void * ) & ( lkkrkctitnw . nrnbdvzt0f ) , sizeof ( lkkrkctitnw .
nrnbdvzt0f ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 105 , ( const void * ) & ( lkkrkctitnw . irc32x12y1 ) , sizeof (
lkkrkctitnw . irc32x12y1 ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 106 , (
const void * ) & ( lkkrkctitnw . eokzn5lqzs ) , sizeof ( lkkrkctitnw .
eokzn5lqzs ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 107 , ( const void * ) & ( lkkrkctitnw . g4iun1vbdu ) , sizeof (
lkkrkctitnw . g4iun1vbdu ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 108 , (
const void * ) & ( lkkrkctitnw . o141kdey3a ) , sizeof ( lkkrkctitnw .
o141kdey3a ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 109 , ( const void * ) & ( lkkrkctitnw . fxlat4s44d ) , sizeof (
lkkrkctitnw . fxlat4s44d ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 110 , (
const void * ) & ( lkkrkctitnw . pwfj2ojmua ) , sizeof ( lkkrkctitnw .
pwfj2ojmua ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 111 , ( const void * ) & ( lkkrkctitnw . fcb3sp11yw ) , sizeof (
lkkrkctitnw . fcb3sp11yw ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 112 , (
const void * ) & ( lkkrkctitnw . icbcw4dt4i ) , sizeof ( lkkrkctitnw .
icbcw4dt4i ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 113 , ( const void * ) & ( lkkrkctitnw . gt3cupzjr1 ) , sizeof (
lkkrkctitnw . gt3cupzjr1 ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 114 , (
const void * ) & ( lkkrkctitnw . mudviuktks ) , sizeof ( lkkrkctitnw .
mudviuktks ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 115 , ( const void * ) & ( lkkrkctitnw . bntxvuzexg ) , sizeof (
lkkrkctitnw . bntxvuzexg ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 116 , (
const void * ) & ( lkkrkctitnw . b2542hzgcf ) , sizeof ( lkkrkctitnw .
b2542hzgcf ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 117 , ( const void * ) & ( lkkrkctitnw . frklc1du0s ) , sizeof (
lkkrkctitnw . frklc1du0s ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 118 , (
const void * ) & ( lkkrkctitnw . chi35zyntr ) , sizeof ( lkkrkctitnw .
chi35zyntr ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 119 , ( const void * ) & ( lkkrkctitnw . hpttnbo4xq ) , sizeof (
lkkrkctitnw . hpttnbo4xq ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 120 , (
const void * ) & ( lkkrkctitnw . lnr1sinkco ) , sizeof ( lkkrkctitnw .
lnr1sinkco ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 121 , ( const void * ) & ( lkkrkctitnw . mh53p0dtth ) , sizeof (
lkkrkctitnw . mh53p0dtth ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 122 , (
const void * ) & ( lkkrkctitnw . bduaxxbpzz ) , sizeof ( lkkrkctitnw .
bduaxxbpzz ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 123 , ( const void * ) & ( lkkrkctitnw . dm1feblhqa ) , sizeof (
lkkrkctitnw . dm1feblhqa ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 124 , (
const void * ) & ( lkkrkctitnw . frajpj20to ) , sizeof ( lkkrkctitnw .
frajpj20to ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 125 , ( const void * ) & ( lkkrkctitnw . iyz0ey02aq ) , sizeof (
lkkrkctitnw . iyz0ey02aq ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 126 , (
const void * ) & ( lkkrkctitnw . k5owklwcio ) , sizeof ( lkkrkctitnw .
k5owklwcio ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 127 , ( const void * ) & ( lkkrkctitnw . irfopsw5u3 ) , sizeof (
lkkrkctitnw . irfopsw5u3 ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 128 , (
const void * ) & ( lkkrkctitnw . dde0fwvl0o ) , sizeof ( lkkrkctitnw .
dde0fwvl0o ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 129 , ( const void * ) & ( lkkrkctitnw . dgfmvwissk ) , sizeof (
lkkrkctitnw . dgfmvwissk ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 130 , (
const void * ) & ( lkkrkctitnw . kvsmqclsqu ) , sizeof ( lkkrkctitnw .
kvsmqclsqu ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 131 , ( const void * ) & ( lkkrkctitnw . ivnj3kwa54 ) , sizeof (
lkkrkctitnw . ivnj3kwa54 ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 132 , (
const void * ) & ( lkkrkctitnw . cjeoae02q5 ) , sizeof ( lkkrkctitnw .
cjeoae02q5 ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 133 , ( const void * ) & ( lkkrkctitnw . pxrensdadn ) , sizeof (
lkkrkctitnw . pxrensdadn ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 134 , (
const void * ) & ( lkkrkctitnw . j4cpglu32p ) , sizeof ( lkkrkctitnw .
j4cpglu32p ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 135 , ( const void * ) & ( lkkrkctitnw . k5jlqybics ) , sizeof (
lkkrkctitnw . k5jlqybics ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 136 , (
const void * ) & ( lkkrkctitnw . he0vfk52c2 ) , sizeof ( lkkrkctitnw .
he0vfk52c2 ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 137 , ( const void * ) & ( lkkrkctitnw . pcvkuijeek ) , sizeof (
lkkrkctitnw . pcvkuijeek ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 138 , (
const void * ) & ( lkkrkctitnw . iyr13augnz ) , sizeof ( lkkrkctitnw .
iyr13augnz ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 139 , ( const void * ) & ( lkkrkctitnw . juvdeom5ty ) , sizeof (
lkkrkctitnw . juvdeom5ty ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 140 , (
const void * ) & ( lkkrkctitnw . db235qphyz ) , sizeof ( lkkrkctitnw .
db235qphyz ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 141 , ( const void * ) & ( lkkrkctitnw . opaw4z2zn3 ) , sizeof (
lkkrkctitnw . opaw4z2zn3 ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 142 , (
const void * ) & ( lkkrkctitnw . fi1llmjhnm ) , sizeof ( lkkrkctitnw .
fi1llmjhnm ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 143 , ( const void * ) & ( lkkrkctitnw . omlg0bte3m ) , sizeof (
lkkrkctitnw . omlg0bte3m ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 144 , (
const void * ) & ( lkkrkctitnw . fb1jadv2t5 ) , sizeof ( lkkrkctitnw .
fb1jadv2t5 ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 145 , ( const void * ) & ( lkkrkctitnw . arub2p4zzr ) , sizeof (
lkkrkctitnw . arub2p4zzr ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 146 , (
const void * ) & ( lkkrkctitnw . pixene2r1k ) , sizeof ( lkkrkctitnw .
pixene2r1k ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 147 , ( const void * ) & ( lkkrkctitnw . ohzb3swhrq ) , sizeof (
lkkrkctitnw . ohzb3swhrq ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 148 , (
const void * ) & ( lkkrkctitnw . pblwjrwtpn ) , sizeof ( lkkrkctitnw .
pblwjrwtpn ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 149 , ( const void * ) & ( lkkrkctitnw . cbx5s3rbvn ) , sizeof (
lkkrkctitnw . cbx5s3rbvn ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 150 , (
const void * ) & ( lkkrkctitnw . gvx5sloovp ) , sizeof ( lkkrkctitnw .
gvx5sloovp ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 151 , ( const void * ) & ( lkkrkctitnw . f0hhltjlcn ) , sizeof (
lkkrkctitnw . f0hhltjlcn ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 152 , (
const void * ) & ( lkkrkctitnw . n5ycrmji5n ) , sizeof ( lkkrkctitnw .
n5ycrmji5n ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 153 , ( const void * ) & ( lkkrkctitnw . lh3epubkdg ) , sizeof (
lkkrkctitnw . lh3epubkdg ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 154 , (
const void * ) & ( lkkrkctitnw . g0rarwcx0n ) , sizeof ( lkkrkctitnw .
g0rarwcx0n ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 155 , ( const void * ) & ( lkkrkctitnw . ph3dyn2vbi ) , sizeof (
lkkrkctitnw . ph3dyn2vbi ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 156 , (
const void * ) & ( lkkrkctitnw . buvgxg4wiw ) , sizeof ( lkkrkctitnw .
buvgxg4wiw ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 157 , ( const void * ) & ( lkkrkctitnw . dzase2snq2 ) , sizeof (
lkkrkctitnw . dzase2snq2 ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 158 , (
const void * ) & ( lkkrkctitnw . ac55uhsiqx ) , sizeof ( lkkrkctitnw .
ac55uhsiqx ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 159 , ( const void * ) & ( lkkrkctitnw . etouatgqfx ) , sizeof (
lkkrkctitnw . etouatgqfx ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 160 , (
const void * ) & ( lkkrkctitnw . gzxynjg3le ) , sizeof ( lkkrkctitnw .
gzxynjg3le ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 161 , ( const void * ) & ( lkkrkctitnw . giqmtzacnq ) , sizeof (
lkkrkctitnw . giqmtzacnq ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 162 , (
const void * ) & ( lkkrkctitnw . b4ck1dw0sr ) , sizeof ( lkkrkctitnw .
b4ck1dw0sr ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 163 , ( const void * ) & ( lkkrkctitnw . o5b1d5v4kk ) , sizeof (
lkkrkctitnw . o5b1d5v4kk ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 164 , (
const void * ) & ( lkkrkctitnw . cgd2ecnupw ) , sizeof ( lkkrkctitnw .
cgd2ecnupw ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 165 , ( const void * ) & ( lkkrkctitnw . ev0qxkvgf2 ) , sizeof (
lkkrkctitnw . ev0qxkvgf2 ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 166 , (
const void * ) & ( lkkrkctitnw . k25cpbrhkh ) , sizeof ( lkkrkctitnw .
k25cpbrhkh ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 167 , ( const void * ) & ( lkkrkctitnw . mgfuv3v40s ) , sizeof (
lkkrkctitnw . mgfuv3v40s ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 168 , (
const void * ) & ( lkkrkctitnw . erh05us4i2 ) , sizeof ( lkkrkctitnw .
erh05us4i2 ) ) ; mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 169 , ( const void * ) & ( lkkrkctitnw . d0xw0oxj5a . hnlzvdkzrg ) ,
sizeof ( lkkrkctitnw . d0xw0oxj5a . hnlzvdkzrg ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 170 , (
const void * ) & ( lkkrkctitnw . d0xw0oxj5a . jdyejkwif0 ) , sizeof (
lkkrkctitnw . d0xw0oxj5a . jdyejkwif0 ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 171 , (
const void * ) & ( lkkrkctitnw . im2vq3d3irm . hnlzvdkzrg ) , sizeof (
lkkrkctitnw . im2vq3d3irm . hnlzvdkzrg ) ) ;
mr_HevP4ReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 172 , (
const void * ) & ( lkkrkctitnw . im2vq3d3irm . jdyejkwif0 ) , sizeof (
lkkrkctitnw . im2vq3d3irm . jdyejkwif0 ) ) ; mxSetFieldByNumber ( ssDW , 0 ,
1 , rtdwData ) ; } return ssDW ; } void mr_HevP4ReferenceApplication_SetDWork
( const mxArray * ssDW ) { ( void ) ssDW ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
c5zlh4mzusp ) , ssDW , 0 , 0 , sizeof ( c5zlh4mzusp ) ) ; { const mxArray *
rtdwData = mxGetFieldByNumber ( ssDW , 0 , 1 ) ; mr_DrivetrainHevP4_SetDWork
( & ( lkkrkctitnw . ihhigf1gyq ) , mxGetFieldByNumber ( rtdwData , 0 , 0 ) )
; mr_SiMappedEngine_SetDWork ( & ( lkkrkctitnw . lkxnu4ieaj ) ,
mxGetFieldByNumber ( rtdwData , 0 , 1 ) ) ; mr_BattHevP4_SetDWork ( & (
lkkrkctitnw . fxfpjs5zwf ) , mxGetFieldByNumber ( rtdwData , 0 , 2 ) ) ;
mr_HevP4OptimalController_SetDWork ( & ( lkkrkctitnw . ahts4cu30v ) ,
mxGetFieldByNumber ( rtdwData , 0 , 3 ) ) ; mr_SiEngineController_SetDWork (
& ( lkkrkctitnw . i1wwqrhe01 ) , mxGetFieldByNumber ( rtdwData , 0 , 4 ) ) ;
mr_HevP4TransmissionController_SetDWork ( & ( lkkrkctitnw . ehgw5hos5u ) ,
mxGetFieldByNumber ( rtdwData , 0 , 5 ) ) ; mr_MotMappedP4_SetDWork ( & (
lkkrkctitnw . d43yu213mh ) , mxGetFieldByNumber ( rtdwData , 0 , 6 ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . c1ij1f4luo ) , rtdwData , 0 , 7 , sizeof ( lkkrkctitnw .
c1ij1f4luo ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . kh5xdhjoen ) , rtdwData , 0 , 8 , sizeof ( lkkrkctitnw
. kh5xdhjoen ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lkkrkctitnw . bhsln1im02 ) , rtdwData , 0 , 9 , sizeof (
lkkrkctitnw . bhsln1im02 ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . ovmdszn3vi ) , rtdwData , 0 , 10 , sizeof ( lkkrkctitnw .
ovmdszn3vi ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . h4bk44iq0j ) , rtdwData , 0 , 11 , sizeof ( lkkrkctitnw
. h4bk44iq0j ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lkkrkctitnw . fnd1cgu2ez ) , rtdwData , 0 , 12 , sizeof (
lkkrkctitnw . fnd1cgu2ez ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . hufmyzg00g ) , rtdwData , 0 , 13 , sizeof ( lkkrkctitnw .
hufmyzg00g ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . fgxzeqilcf ) , rtdwData , 0 , 14 , sizeof ( lkkrkctitnw
. fgxzeqilcf ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lkkrkctitnw . caj4332p1l ) , rtdwData , 0 , 15 , sizeof (
lkkrkctitnw . caj4332p1l ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . h04c4o3sdm ) , rtdwData , 0 , 16 , sizeof ( lkkrkctitnw .
h04c4o3sdm ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . pz1rko3nhq ) , rtdwData , 0 , 17 , sizeof ( lkkrkctitnw
. pz1rko3nhq ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lkkrkctitnw . jrbpexblku ) , rtdwData , 0 , 18 , sizeof (
lkkrkctitnw . jrbpexblku ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . infpntaopi ) , rtdwData , 0 , 19 , sizeof ( lkkrkctitnw .
infpntaopi ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . cpzvjo4vs1 ) , rtdwData , 0 , 20 , sizeof ( lkkrkctitnw
. cpzvjo4vs1 ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lkkrkctitnw . m5xnya5qov ) , rtdwData , 0 , 21 , sizeof (
lkkrkctitnw . m5xnya5qov ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . ezbvugwn3z ) , rtdwData , 0 , 22 , sizeof ( lkkrkctitnw .
ezbvugwn3z ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . knm5vku22q ) , rtdwData , 0 , 23 , sizeof ( lkkrkctitnw
. knm5vku22q ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lkkrkctitnw . melid01ejw ) , rtdwData , 0 , 24 , sizeof (
lkkrkctitnw . melid01ejw ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . appsnxr1qq ) , rtdwData , 0 , 25 , sizeof ( lkkrkctitnw .
appsnxr1qq ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . maexa33f2j ) , rtdwData , 0 , 26 , sizeof ( lkkrkctitnw
. maexa33f2j ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lkkrkctitnw . gxfbvg10fk ) , rtdwData , 0 , 27 , sizeof (
lkkrkctitnw . gxfbvg10fk ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . o2woa2lt3g ) , rtdwData , 0 , 28 , sizeof ( lkkrkctitnw .
o2woa2lt3g ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . lb0biqjhcr ) , rtdwData , 0 , 29 , sizeof ( lkkrkctitnw
. lb0biqjhcr ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lkkrkctitnw . aooi2g3epf ) , rtdwData , 0 , 30 , sizeof (
lkkrkctitnw . aooi2g3epf ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . pth0sd032r ) , rtdwData , 0 , 31 , sizeof ( lkkrkctitnw .
pth0sd032r ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . l1spg24m54 ) , rtdwData , 0 , 32 , sizeof ( lkkrkctitnw
. l1spg24m54 ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lkkrkctitnw . fulcowlnoh ) , rtdwData , 0 , 33 , sizeof (
lkkrkctitnw . fulcowlnoh ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . js1li4zbu0 ) , rtdwData , 0 , 34 , sizeof ( lkkrkctitnw .
js1li4zbu0 ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . eg44xjqske ) , rtdwData , 0 , 35 , sizeof ( lkkrkctitnw
. eg44xjqske ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lkkrkctitnw . hmcxdptmmg ) , rtdwData , 0 , 36 , sizeof (
lkkrkctitnw . hmcxdptmmg ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . adrjeq0yql ) , rtdwData , 0 , 37 , sizeof ( lkkrkctitnw .
adrjeq0yql ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . nzezetf530 ) , rtdwData , 0 , 38 , sizeof ( lkkrkctitnw
. nzezetf530 ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lkkrkctitnw . ar5h2piciy ) , rtdwData , 0 , 39 , sizeof (
lkkrkctitnw . ar5h2piciy ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . g13w5b43up ) , rtdwData , 0 , 40 , sizeof ( lkkrkctitnw .
g13w5b43up ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . p1khtziyyr ) , rtdwData , 0 , 41 , sizeof ( lkkrkctitnw
. p1khtziyyr ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lkkrkctitnw . lgrvjhedz4 ) , rtdwData , 0 , 42 , sizeof (
lkkrkctitnw . lgrvjhedz4 ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . cofsoqmglc ) , rtdwData , 0 , 43 , sizeof ( lkkrkctitnw .
cofsoqmglc ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . lii3bzekam ) , rtdwData , 0 , 44 , sizeof ( lkkrkctitnw
. lii3bzekam ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lkkrkctitnw . ayhyrzc5bo ) , rtdwData , 0 , 45 , sizeof (
lkkrkctitnw . ayhyrzc5bo ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . ep524gyioe ) , rtdwData , 0 , 46 , sizeof ( lkkrkctitnw .
ep524gyioe ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . dkktohtk2t ) , rtdwData , 0 , 47 , sizeof ( lkkrkctitnw
. dkktohtk2t ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lkkrkctitnw . ouiv2ttb4k ) , rtdwData , 0 , 48 , sizeof (
lkkrkctitnw . ouiv2ttb4k ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . fqljzsn5xc ) , rtdwData , 0 , 49 , sizeof ( lkkrkctitnw .
fqljzsn5xc ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . mgtnggtvl3 ) , rtdwData , 0 , 50 , sizeof ( lkkrkctitnw
. mgtnggtvl3 ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lkkrkctitnw . bhqhbe5hw0 ) , rtdwData , 0 , 51 , sizeof (
lkkrkctitnw . bhqhbe5hw0 ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . npx35rsk2y ) , rtdwData , 0 , 52 , sizeof ( lkkrkctitnw .
npx35rsk2y ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . dek2b4z54h ) , rtdwData , 0 , 53 , sizeof ( lkkrkctitnw
. dek2b4z54h ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lkkrkctitnw . hr1f2ycsrs ) , rtdwData , 0 , 54 , sizeof (
lkkrkctitnw . hr1f2ycsrs ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . a2gc015fmo ) , rtdwData , 0 , 55 , sizeof ( lkkrkctitnw .
a2gc015fmo ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . bugufqhsqr ) , rtdwData , 0 , 56 , sizeof ( lkkrkctitnw
. bugufqhsqr ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lkkrkctitnw . h3ritbtaba ) , rtdwData , 0 , 57 , sizeof (
lkkrkctitnw . h3ritbtaba ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . f3dj5ppzb4 ) , rtdwData , 0 , 58 , sizeof ( lkkrkctitnw .
f3dj5ppzb4 ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . p142joj1tt ) , rtdwData , 0 , 59 , sizeof ( lkkrkctitnw
. p142joj1tt ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lkkrkctitnw . lfduexc22r ) , rtdwData , 0 , 60 , sizeof (
lkkrkctitnw . lfduexc22r ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . mypipgzpqg ) , rtdwData , 0 , 61 , sizeof ( lkkrkctitnw .
mypipgzpqg ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . e5k5uh1tii ) , rtdwData , 0 , 62 , sizeof ( lkkrkctitnw
. e5k5uh1tii ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lkkrkctitnw . hj5jjgcaox ) , rtdwData , 0 , 63 , sizeof (
lkkrkctitnw . hj5jjgcaox ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . mqxljfmsyj ) , rtdwData , 0 , 64 , sizeof ( lkkrkctitnw .
mqxljfmsyj ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . odzx5k4e10 ) , rtdwData , 0 , 65 , sizeof ( lkkrkctitnw
. odzx5k4e10 ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lkkrkctitnw . pwychxn2rx ) , rtdwData , 0 , 66 , sizeof (
lkkrkctitnw . pwychxn2rx ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . cvod5gblce ) , rtdwData , 0 , 67 , sizeof ( lkkrkctitnw .
cvod5gblce ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . jz4igdfsjy ) , rtdwData , 0 , 68 , sizeof ( lkkrkctitnw
. jz4igdfsjy ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lkkrkctitnw . bschkhlqcx ) , rtdwData , 0 , 69 , sizeof (
lkkrkctitnw . bschkhlqcx ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . p5zpn5rl4f ) , rtdwData , 0 , 70 , sizeof ( lkkrkctitnw .
p5zpn5rl4f ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . enyy3t4ps3 ) , rtdwData , 0 , 71 , sizeof ( lkkrkctitnw
. enyy3t4ps3 ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lkkrkctitnw . droxjfozbf ) , rtdwData , 0 , 72 , sizeof (
lkkrkctitnw . droxjfozbf ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . k5oauund31 ) , rtdwData , 0 , 73 , sizeof ( lkkrkctitnw .
k5oauund31 ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . cutrrpdov1 ) , rtdwData , 0 , 74 , sizeof ( lkkrkctitnw
. cutrrpdov1 ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lkkrkctitnw . mpliu3opsq ) , rtdwData , 0 , 75 , sizeof (
lkkrkctitnw . mpliu3opsq ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . evydn1x5u3 ) , rtdwData , 0 , 76 , sizeof ( lkkrkctitnw .
evydn1x5u3 ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . aliqzpm34m ) , rtdwData , 0 , 77 , sizeof ( lkkrkctitnw
. aliqzpm34m ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lkkrkctitnw . pzq0ihn3t3 ) , rtdwData , 0 , 78 , sizeof (
lkkrkctitnw . pzq0ihn3t3 ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . o2dkzedwyd ) , rtdwData , 0 , 79 , sizeof ( lkkrkctitnw .
o2dkzedwyd ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . iwacvi1cvr ) , rtdwData , 0 , 80 , sizeof ( lkkrkctitnw
. iwacvi1cvr ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lkkrkctitnw . fue3uld4xj ) , rtdwData , 0 , 81 , sizeof (
lkkrkctitnw . fue3uld4xj ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . h5spwccaot ) , rtdwData , 0 , 82 , sizeof ( lkkrkctitnw .
h5spwccaot ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . iepmyvc12j ) , rtdwData , 0 , 83 , sizeof ( lkkrkctitnw
. iepmyvc12j ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lkkrkctitnw . lcvtpl0xhz ) , rtdwData , 0 , 84 , sizeof (
lkkrkctitnw . lcvtpl0xhz ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . jdrec4mf1t ) , rtdwData , 0 , 85 , sizeof ( lkkrkctitnw .
jdrec4mf1t ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . gcwd3vcs2h ) , rtdwData , 0 , 86 , sizeof ( lkkrkctitnw
. gcwd3vcs2h ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lkkrkctitnw . ipgludoliy ) , rtdwData , 0 , 87 , sizeof (
lkkrkctitnw . ipgludoliy ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . itlwzywcut ) , rtdwData , 0 , 88 , sizeof ( lkkrkctitnw .
itlwzywcut ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . mthxcazoeq ) , rtdwData , 0 , 89 , sizeof ( lkkrkctitnw
. mthxcazoeq ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lkkrkctitnw . acnon4phey ) , rtdwData , 0 , 90 , sizeof (
lkkrkctitnw . acnon4phey ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . mzbogashtm ) , rtdwData , 0 , 91 , sizeof ( lkkrkctitnw .
mzbogashtm ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . oq5dnpwzel ) , rtdwData , 0 , 92 , sizeof ( lkkrkctitnw
. oq5dnpwzel ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lkkrkctitnw . k5sxdubawm ) , rtdwData , 0 , 93 , sizeof (
lkkrkctitnw . k5sxdubawm ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . ldljdyravq ) , rtdwData , 0 , 94 , sizeof ( lkkrkctitnw .
ldljdyravq ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . pcuhwhpn3x ) , rtdwData , 0 , 95 , sizeof ( lkkrkctitnw
. pcuhwhpn3x ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lkkrkctitnw . jdxnqz3k3z ) , rtdwData , 0 , 96 , sizeof (
lkkrkctitnw . jdxnqz3k3z ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . m0gspyix5l ) , rtdwData , 0 , 97 , sizeof ( lkkrkctitnw .
m0gspyix5l ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . kpyfexn5a1 ) , rtdwData , 0 , 98 , sizeof ( lkkrkctitnw
. kpyfexn5a1 ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lkkrkctitnw . ialx3y2ktr ) , rtdwData , 0 , 99 , sizeof (
lkkrkctitnw . ialx3y2ktr ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . mqiplucikd ) , rtdwData , 0 , 100 , sizeof ( lkkrkctitnw .
mqiplucikd ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . mtylxvc53n ) , rtdwData , 0 , 101 , sizeof (
lkkrkctitnw . mtylxvc53n ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . cpjc0nnbop ) , rtdwData , 0 , 102 , sizeof ( lkkrkctitnw .
cpjc0nnbop ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . f1e1x0c2vm ) , rtdwData , 0 , 103 , sizeof (
lkkrkctitnw . f1e1x0c2vm ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . nrnbdvzt0f ) , rtdwData , 0 , 104 , sizeof ( lkkrkctitnw .
nrnbdvzt0f ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . irc32x12y1 ) , rtdwData , 0 , 105 , sizeof (
lkkrkctitnw . irc32x12y1 ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . eokzn5lqzs ) , rtdwData , 0 , 106 , sizeof ( lkkrkctitnw .
eokzn5lqzs ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . g4iun1vbdu ) , rtdwData , 0 , 107 , sizeof (
lkkrkctitnw . g4iun1vbdu ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . o141kdey3a ) , rtdwData , 0 , 108 , sizeof ( lkkrkctitnw .
o141kdey3a ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . fxlat4s44d ) , rtdwData , 0 , 109 , sizeof (
lkkrkctitnw . fxlat4s44d ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . pwfj2ojmua ) , rtdwData , 0 , 110 , sizeof ( lkkrkctitnw .
pwfj2ojmua ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . fcb3sp11yw ) , rtdwData , 0 , 111 , sizeof (
lkkrkctitnw . fcb3sp11yw ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . icbcw4dt4i ) , rtdwData , 0 , 112 , sizeof ( lkkrkctitnw .
icbcw4dt4i ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . gt3cupzjr1 ) , rtdwData , 0 , 113 , sizeof (
lkkrkctitnw . gt3cupzjr1 ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . mudviuktks ) , rtdwData , 0 , 114 , sizeof ( lkkrkctitnw .
mudviuktks ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . bntxvuzexg ) , rtdwData , 0 , 115 , sizeof (
lkkrkctitnw . bntxvuzexg ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . b2542hzgcf ) , rtdwData , 0 , 116 , sizeof ( lkkrkctitnw .
b2542hzgcf ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . frklc1du0s ) , rtdwData , 0 , 117 , sizeof (
lkkrkctitnw . frklc1du0s ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . chi35zyntr ) , rtdwData , 0 , 118 , sizeof ( lkkrkctitnw .
chi35zyntr ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . hpttnbo4xq ) , rtdwData , 0 , 119 , sizeof (
lkkrkctitnw . hpttnbo4xq ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . lnr1sinkco ) , rtdwData , 0 , 120 , sizeof ( lkkrkctitnw .
lnr1sinkco ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . mh53p0dtth ) , rtdwData , 0 , 121 , sizeof (
lkkrkctitnw . mh53p0dtth ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . bduaxxbpzz ) , rtdwData , 0 , 122 , sizeof ( lkkrkctitnw .
bduaxxbpzz ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . dm1feblhqa ) , rtdwData , 0 , 123 , sizeof (
lkkrkctitnw . dm1feblhqa ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . frajpj20to ) , rtdwData , 0 , 124 , sizeof ( lkkrkctitnw .
frajpj20to ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . iyz0ey02aq ) , rtdwData , 0 , 125 , sizeof (
lkkrkctitnw . iyz0ey02aq ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . k5owklwcio ) , rtdwData , 0 , 126 , sizeof ( lkkrkctitnw .
k5owklwcio ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . irfopsw5u3 ) , rtdwData , 0 , 127 , sizeof (
lkkrkctitnw . irfopsw5u3 ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . dde0fwvl0o ) , rtdwData , 0 , 128 , sizeof ( lkkrkctitnw .
dde0fwvl0o ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . dgfmvwissk ) , rtdwData , 0 , 129 , sizeof (
lkkrkctitnw . dgfmvwissk ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . kvsmqclsqu ) , rtdwData , 0 , 130 , sizeof ( lkkrkctitnw .
kvsmqclsqu ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . ivnj3kwa54 ) , rtdwData , 0 , 131 , sizeof (
lkkrkctitnw . ivnj3kwa54 ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . cjeoae02q5 ) , rtdwData , 0 , 132 , sizeof ( lkkrkctitnw .
cjeoae02q5 ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . pxrensdadn ) , rtdwData , 0 , 133 , sizeof (
lkkrkctitnw . pxrensdadn ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . j4cpglu32p ) , rtdwData , 0 , 134 , sizeof ( lkkrkctitnw .
j4cpglu32p ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . k5jlqybics ) , rtdwData , 0 , 135 , sizeof (
lkkrkctitnw . k5jlqybics ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . he0vfk52c2 ) , rtdwData , 0 , 136 , sizeof ( lkkrkctitnw .
he0vfk52c2 ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . pcvkuijeek ) , rtdwData , 0 , 137 , sizeof (
lkkrkctitnw . pcvkuijeek ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . iyr13augnz ) , rtdwData , 0 , 138 , sizeof ( lkkrkctitnw .
iyr13augnz ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . juvdeom5ty ) , rtdwData , 0 , 139 , sizeof (
lkkrkctitnw . juvdeom5ty ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . db235qphyz ) , rtdwData , 0 , 140 , sizeof ( lkkrkctitnw .
db235qphyz ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . opaw4z2zn3 ) , rtdwData , 0 , 141 , sizeof (
lkkrkctitnw . opaw4z2zn3 ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . fi1llmjhnm ) , rtdwData , 0 , 142 , sizeof ( lkkrkctitnw .
fi1llmjhnm ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . omlg0bte3m ) , rtdwData , 0 , 143 , sizeof (
lkkrkctitnw . omlg0bte3m ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . fb1jadv2t5 ) , rtdwData , 0 , 144 , sizeof ( lkkrkctitnw .
fb1jadv2t5 ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . arub2p4zzr ) , rtdwData , 0 , 145 , sizeof (
lkkrkctitnw . arub2p4zzr ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . pixene2r1k ) , rtdwData , 0 , 146 , sizeof ( lkkrkctitnw .
pixene2r1k ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . ohzb3swhrq ) , rtdwData , 0 , 147 , sizeof (
lkkrkctitnw . ohzb3swhrq ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . pblwjrwtpn ) , rtdwData , 0 , 148 , sizeof ( lkkrkctitnw .
pblwjrwtpn ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . cbx5s3rbvn ) , rtdwData , 0 , 149 , sizeof (
lkkrkctitnw . cbx5s3rbvn ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . gvx5sloovp ) , rtdwData , 0 , 150 , sizeof ( lkkrkctitnw .
gvx5sloovp ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . f0hhltjlcn ) , rtdwData , 0 , 151 , sizeof (
lkkrkctitnw . f0hhltjlcn ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . n5ycrmji5n ) , rtdwData , 0 , 152 , sizeof ( lkkrkctitnw .
n5ycrmji5n ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . lh3epubkdg ) , rtdwData , 0 , 153 , sizeof (
lkkrkctitnw . lh3epubkdg ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . g0rarwcx0n ) , rtdwData , 0 , 154 , sizeof ( lkkrkctitnw .
g0rarwcx0n ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . ph3dyn2vbi ) , rtdwData , 0 , 155 , sizeof (
lkkrkctitnw . ph3dyn2vbi ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . buvgxg4wiw ) , rtdwData , 0 , 156 , sizeof ( lkkrkctitnw .
buvgxg4wiw ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . dzase2snq2 ) , rtdwData , 0 , 157 , sizeof (
lkkrkctitnw . dzase2snq2 ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . ac55uhsiqx ) , rtdwData , 0 , 158 , sizeof ( lkkrkctitnw .
ac55uhsiqx ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . etouatgqfx ) , rtdwData , 0 , 159 , sizeof (
lkkrkctitnw . etouatgqfx ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . gzxynjg3le ) , rtdwData , 0 , 160 , sizeof ( lkkrkctitnw .
gzxynjg3le ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . giqmtzacnq ) , rtdwData , 0 , 161 , sizeof (
lkkrkctitnw . giqmtzacnq ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . b4ck1dw0sr ) , rtdwData , 0 , 162 , sizeof ( lkkrkctitnw .
b4ck1dw0sr ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . o5b1d5v4kk ) , rtdwData , 0 , 163 , sizeof (
lkkrkctitnw . o5b1d5v4kk ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . cgd2ecnupw ) , rtdwData , 0 , 164 , sizeof ( lkkrkctitnw .
cgd2ecnupw ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . ev0qxkvgf2 ) , rtdwData , 0 , 165 , sizeof (
lkkrkctitnw . ev0qxkvgf2 ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . k25cpbrhkh ) , rtdwData , 0 , 166 , sizeof ( lkkrkctitnw .
k25cpbrhkh ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . mgfuv3v40s ) , rtdwData , 0 , 167 , sizeof (
lkkrkctitnw . mgfuv3v40s ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . erh05us4i2 ) , rtdwData , 0 , 168 , sizeof ( lkkrkctitnw .
erh05us4i2 ) ) ; mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lkkrkctitnw . d0xw0oxj5a . hnlzvdkzrg ) , rtdwData , 0 , 169 , sizeof
( lkkrkctitnw . d0xw0oxj5a . hnlzvdkzrg ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . d0xw0oxj5a . jdyejkwif0 ) , rtdwData , 0 , 170 , sizeof (
lkkrkctitnw . d0xw0oxj5a . jdyejkwif0 ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . im2vq3d3irm . hnlzvdkzrg ) , rtdwData , 0 , 171 , sizeof (
lkkrkctitnw . im2vq3d3irm . hnlzvdkzrg ) ) ;
mr_HevP4ReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lkkrkctitnw . im2vq3d3irm . jdyejkwif0 ) , rtdwData , 0 , 172 , sizeof (
lkkrkctitnw . im2vq3d3irm . jdyejkwif0 ) ) ; } } mxArray *
mr_HevP4ReferenceApplication_GetSimStateDisallowedBlocks ( ) { mxArray * data
= NULL ; mwIndex subs [ 2 ] , offset ; size_t numChildrenWithDisallowedBlocks
= 0 ; size_t numBlocks = 0 ; mxArray * disallowedBlocksInChild [ 7 ] ;
disallowedBlocksInChild [ 0 ] = mr_BattHevP4_GetSimStateDisallowedBlocks ( )
; disallowedBlocksInChild [ 1 ] =
mr_DrivetrainHevP4_GetSimStateDisallowedBlocks ( ) ; disallowedBlocksInChild
[ 2 ] = mr_HevP4OptimalController_GetSimStateDisallowedBlocks ( ) ;
disallowedBlocksInChild [ 3 ] =
mr_HevP4TransmissionController_GetSimStateDisallowedBlocks ( ) ;
disallowedBlocksInChild [ 4 ] = mr_MotMappedP4_GetSimStateDisallowedBlocks (
) ; disallowedBlocksInChild [ 5 ] =
mr_SiEngineController_GetSimStateDisallowedBlocks ( ) ;
disallowedBlocksInChild [ 6 ] = mr_SiMappedEngine_GetSimStateDisallowedBlocks
( ) ; { size_t i ; for ( i = 0 ; i < 7 ; ++ i ) { mxArray * data_i =
disallowedBlocksInChild [ i ] ; if ( ( NULL ) != data_i ) { if ( 0 ==
numChildrenWithDisallowedBlocks ++ ) { data = data_i ; } numBlocks += mxGetM
( data_i ) ; } } } data = mxCreateCellMatrix ( numBlocks + 6 , 3 ) ; { static
const char_T * blockType [ 6 ] = { "Scope" , "Scope" , "Scope" , "Scope" ,
"Scope" , "Scope" , } ; static const char_T * blockPath [ 6 ] = {
"HevP4ReferenceApplication/Visualization/Performance and FE Scope" ,
"HevP4ReferenceApplication/Visualization/TP Emissions Scope" ,
"HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/Scope"
,
"HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/Scope1"
,
"HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/Scope2"
,
"HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/Scope3"
, } ; static const int reason [ 6 ] = { 0 , 0 , 0 , 0 , 0 , 0 , } ; for (
subs [ 0 ] = 0 ; subs [ 0 ] < 6 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0 ;
offset = mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data ,
offset , mxCreateString ( blockType [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ;
offset = mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data ,
offset , mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 2 ;
offset = mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data ,
offset , mxCreateDoubleScalar ( ( real_T ) reason [ subs [ 0 ] ] ) ) ; } } {
size_t i ; for ( i = 0 ; i < 7 ; ++ i ) { mxArray * data_i =
disallowedBlocksInChild [ i ] ; if ( ( NULL ) != data_i ) { mwIndex subs_i [
2 ] , offset_i ; const mwIndex numRows_i = ( mwIndex ) mxGetM ( data_i ) ;
for ( subs_i [ 0 ] = 0 ; subs_i [ 0 ] < numRows_i ; ++ ( subs_i [ 0 ] ) ) {
mwIndex j ; for ( j = 0 ; j < 3 ; ++ j ) { mxArray * data_ij ; subs_i [ 1 ] =
j ; offset_i = mxCalcSingleSubscript ( data_i , 2 , subs_i ) ; data_ij =
mxGetCell ( data_i , offset_i ) ; data_ij = mxDuplicateArray ( data_ij ) ;
subs [ 1 ] = j ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ;
mxSetCell ( data , offset , data_ij ) ; } ++ ( subs [ 0 ] ) ; }
mxDestroyArray ( data_i ) ; } } } return data ; } void MdlInitializeSizes (
void ) { ssSetNumContStates ( rtS , 63 ) ; ssSetNumPeriodicContStates ( rtS ,
1 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough
( rtS , 0 ) ; ssSetNumSampleTimes ( rtS , 5 ) ; ssSetNumBlocks ( rtS , 209 )
; ssSetNumBlockIO ( rtS , 178 ) ; ssSetNumBlockParams ( rtS , 928 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetSampleTime ( rtS , 1 , 0.0 ) ; ssSetSampleTime ( rtS , 2 , 0.01 ) ;
ssSetSampleTime ( rtS , 3 , 0.05 ) ; ssSetSampleTime ( rtS , 4 , 0.1 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; ssSetOffsetTime ( rtS , 1 , 1.0 ) ;
ssSetOffsetTime ( rtS , 2 , 0.0 ) ; ssSetOffsetTime ( rtS , 3 , 0.0 ) ;
ssSetOffsetTime ( rtS , 4 , 0.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 1068892458U ) ; ssSetChecksumVal ( rtS , 1 ,
3960671541U ) ; ssSetChecksumVal ( rtS , 2 , 1637318959U ) ; ssSetChecksumVal
( rtS , 3 , 3633016946U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; static struct _ssBlkInfo2 blkInfo2 ;
static struct _ssBlkInfoSLSize blkInfoSLSize ; rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; executionInfo -> gblObjects_ . numToFiles = 0 ;
executionInfo -> gblObjects_ . numFrFiles = 0 ; executionInfo -> gblObjects_
. numFrWksBlocks = 1 ; executionInfo -> gblObjects_ . numModelInputs = 0 ;
executionInfo -> gblObjects_ . numRootInportBlks = 0 ; executionInfo ->
gblObjects_ . inportDataTypeIdx = NULL ; executionInfo -> gblObjects_ .
inportDims = NULL ; executionInfo -> gblObjects_ . inportComplex = NULL ;
executionInfo -> gblObjects_ . inportInterpoFlag = NULL ; executionInfo ->
gblObjects_ . inportContinuous = NULL ; ssNonContDerivSigFeedingOutports *
mr_DrivetrainHevP4_13_1_0nonContOutputArray [ 6 ] = { ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) } ; ssNonContDerivSigFeedingOutports
mr_DrivetrainHevP4_13_1_0nonContDerivSig3 [ 2 ] ;
mr_DrivetrainHevP4_13_1_0nonContOutputArray [ 3 ] =
mr_DrivetrainHevP4_13_1_0nonContDerivSig3 ; ( void ) memset ( ( char_T * )
rtS , 0 , sizeof ( SimStruct ) ) ; ( void ) memset ( ( char_T * ) & mdlInfo ,
0 , sizeof ( struct _ssMdlInfo ) ) ; ( void ) memset ( ( char_T * ) &
blkInfo2 , 0 , sizeof ( struct _ssBlkInfo2 ) ) ; ( void ) memset ( ( char_T *
) & blkInfoSLSize , 0 , sizeof ( struct _ssBlkInfoSLSize ) ) ;
ssSetBlkInfo2Ptr ( rtS , & blkInfo2 ) ; ssSetBlkInfoSLSizePtr ( rtS , &
blkInfoSLSize ) ; ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; ssSetExecutionInfo (
rtS , executionInfo ) ; slsaAllocOPModelData ( rtS ) ; { static time_T
mdlPeriod [ NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ;
static time_T mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [
NSAMPLE_TIMES ] ; static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static
boolean_T mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T
mdlPerTaskSampleHits [ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T
mdlTimeOfNextSampleHit [ NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i <
NSAMPLE_TIMES ; i ++ ) { mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ;
mdlTaskTimes [ i ] = 0.0 ; mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } }
ssSetSampleTimePtr ( rtS , & mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , &
mdlOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ;
ssSetTPtr ( rtS , & mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , &
mdlSampleHits [ 0 ] ) ; ssSetTNextWasAdjustedPtr ( rtS , &
mdlTNextWasAdjustedPtr [ 0 ] ) ; ssSetPerTaskSampleHitsPtr ( rtS , &
mdlPerTaskSampleHits [ 0 ] ) ; ssSetTimeOfNextSampleHitPtr ( rtS , &
mdlTimeOfNextSampleHit [ 0 ] ) ; } ssSetSolverMode ( rtS ,
SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS , ( ( void * ) &
c5zlh4mzusp ) ) ; ( void ) memset ( ( ( void * ) & c5zlh4mzusp ) , 0 , sizeof
( c5zlh4mzus ) ) ; { c5zlh4mzusp . hq53ossn2q = 0.0 ; c5zlh4mzusp .
gkeqenbznl = 0.0 ; c5zlh4mzusp . dc2npfnluv = 0.0 ; c5zlh4mzusp . mdvnq0h50i
= 0.0 ; c5zlh4mzusp . gvrmsjkbyd = 0.0 ; c5zlh4mzusp . j1kzeqlfwg = 0.0 ;
c5zlh4mzusp . flt0akp4pe = 0.0 ; c5zlh4mzusp . lr2pgfw4gf = 0.0 ; c5zlh4mzusp
. monfilmur4 = 0.0 ; c5zlh4mzusp . keju3jlddl = 0.0 ; c5zlh4mzusp .
ah4pksqfih = 0.0 ; c5zlh4mzusp . kt4vcyt4rj = 0.0 ; c5zlh4mzusp . km2j44r5uv
= 0.0 ; c5zlh4mzusp . dinw2mwr0y = 0.0 ; c5zlh4mzusp . jyhrmsx1yf = 0.0 ;
c5zlh4mzusp . j2en423lbk = 0.0 ; c5zlh4mzusp . cytjwlxltd = 0.0 ; } } {
real_T * x = ( real_T * ) & jhyfx1uf4ys ; ssSetContStates ( rtS , x ) ; (
void ) memset ( ( void * ) x , 0 , sizeof ( jhyfx1uf4y ) ) ; } { void * dwork
= ( void * ) & lkkrkctitnw ; ssSetRootDWork ( rtS , dwork ) ; ( void ) memset
( dwork , 0 , sizeof ( lkkrkctitn ) ) ; } { static DataTypeTransInfo dtInfo ;
( void ) memset ( ( char_T * ) & dtInfo , 0 , sizeof ( dtInfo ) ) ;
ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo . numDataTypes = 30 ;
dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = &
rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = & rtBTransTable ; dtInfo .
PTransTable = & rtPTransTable ; dtInfo . dataTypeInfoTable =
rtDataTypeInfoTable ; } HevP4ReferenceApplication_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"HevP4ReferenceApplication" ) ; ssSetPath ( rtS , "HevP4ReferenceApplication"
) ; ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal ( rtS , 40.0 ) ; iiwxpwj3gt ( rtS
, 2 , 0 , & ( lkkrkctitnw . ahts4cu30v . rtm ) , & ( lkkrkctitnw . ahts4cu30v
. rtb ) , & ( lkkrkctitnw . ahts4cu30v . rtdw ) , NULL , 0 , & (
rt_dataMapInfoPtr -> mmi ) ,
 "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/Hybrid Control Module (HCM)/Hybrid Control Module (HCM) - Optimal"
, 0 , - 1 ) ; slsaCacheDWorkDataForSimTargetOP ( rtS , & ( lkkrkctitnw .
ahts4cu30v . rtm ) , sizeof ( lkkrkctitnw . ahts4cu30v . rtm ) ) ; { char_T *
tempStr = rtwCAPI_EncodePath (
 "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/Hybrid Control Module (HCM)/Hybrid Control Module (HCM) - Optimal"
) ; rtwCAPI_UpdateFullPaths ( ( rtwCAPI_GetChildMMI ( & ( rt_dataMapInfoPtr
-> mmi ) , 0 ) ) , tempStr , 1 ) ; utFree ( tempStr ) ; } cupigkiksm ( rtS ,
2 , 0 , & ( lkkrkctitnw . i1wwqrhe01 . rtm ) , & ( lkkrkctitnw . i1wwqrhe01 .
rtb ) , & ( lkkrkctitnw . i1wwqrhe01 . rtdw ) , NULL , 0 , & (
rt_dataMapInfoPtr -> mmi ) ,
 "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/SiEngineController"
, 1 , - 1 ) ; slsaCacheDWorkDataForSimTargetOP ( rtS , & ( lkkrkctitnw .
i1wwqrhe01 . rtm ) , sizeof ( lkkrkctitnw . i1wwqrhe01 . rtm ) ) ; { char_T *
tempStr = rtwCAPI_EncodePath (
 "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/SiEngineController"
) ; rtwCAPI_UpdateFullPaths ( ( rtwCAPI_GetChildMMI ( & ( rt_dataMapInfoPtr
-> mmi ) , 1 ) ) , tempStr , 1 ) ; utFree ( tempStr ) ; } dqt510qa0h ( rtS ,
2 , 0 , & ( lkkrkctitnw . ehgw5hos5u . rtm ) , & ( lkkrkctitnw . ehgw5hos5u .
rtb ) , & ( lkkrkctitnw . ehgw5hos5u . rtdw ) , NULL , 0 , & (
rt_dataMapInfoPtr -> mmi ) ,
 "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/Transmission Control Module (TCM)"
, 2 , - 1 ) ; slsaCacheDWorkDataForSimTargetOP ( rtS , & ( lkkrkctitnw .
ehgw5hos5u . rtm ) , sizeof ( lkkrkctitnw . ehgw5hos5u . rtm ) ) ; { char_T *
tempStr = rtwCAPI_EncodePath (
 "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/Transmission Control Module (TCM)"
) ; rtwCAPI_UpdateFullPaths ( ( rtwCAPI_GetChildMMI ( & ( rt_dataMapInfoPtr
-> mmi ) , 2 ) ) , tempStr , 1 ) ; utFree ( tempStr ) ; } pcjuxpuxtd ( rtS ,
mr_DrivetrainHevP4_13_1_0nonContOutputArray , 0 , 1 , 0 , & ( lkkrkctitnw .
ihhigf1gyq . rtm ) , & ( lkkrkctitnw . ihhigf1gyq . rtb ) , & ( lkkrkctitnw .
ihhigf1gyq . rtdw ) , & ( jhyfx1uf4ys . ivpu5oi1vy ) , & ( lkkrkctitnw .
ihhigf1gyq . rtzce ) , NULL , 0 , & ( rt_dataMapInfoPtr -> mmi ) ,
"HevP4ReferenceApplication/Passenger Car/Drivetrain/Drivetrain" , 3 , 2 ) ;
slsaCacheDWorkDataForSimTargetOP ( rtS , & ( lkkrkctitnw . ihhigf1gyq . rtm )
, sizeof ( lkkrkctitnw . ihhigf1gyq . rtm ) ) ; { char_T * tempStr =
rtwCAPI_EncodePath (
"HevP4ReferenceApplication/Passenger Car/Drivetrain/Drivetrain" ) ;
rtwCAPI_UpdateFullPaths ( ( rtwCAPI_GetChildMMI ( & ( rt_dataMapInfoPtr ->
mmi ) , 3 ) ) , tempStr , 1 ) ; utFree ( tempStr ) ; } ermomkkhlx ( rtS , 0 ,
1 , 0 , & ( lkkrkctitnw . fxfpjs5zwf . rtm ) , & ( lkkrkctitnw . fxfpjs5zwf .
rtb ) , & ( lkkrkctitnw . fxfpjs5zwf . rtdw ) , & ( jhyfx1uf4ys . a1ungebxie
) , NULL , 0 , & ( rt_dataMapInfoPtr -> mmi ) ,
"HevP4ReferenceApplication/Passenger Car/Electric Plant/Battery" , 4 , 50 ) ;
slsaCacheDWorkDataForSimTargetOP ( rtS , & ( lkkrkctitnw . fxfpjs5zwf . rtm )
, sizeof ( lkkrkctitnw . fxfpjs5zwf . rtm ) ) ; { char_T * tempStr =
rtwCAPI_EncodePath (
"HevP4ReferenceApplication/Passenger Car/Electric Plant/Battery" ) ;
rtwCAPI_UpdateFullPaths ( ( rtwCAPI_GetChildMMI ( & ( rt_dataMapInfoPtr ->
mmi ) , 4 ) ) , tempStr , 1 ) ; utFree ( tempStr ) ; } psoxkgqvrz ( rtS , 0 ,
0 , & ( lkkrkctitnw . d43yu213mh . rtm ) , & ( lkkrkctitnw . d43yu213mh . rtb
) , & ( lkkrkctitnw . d43yu213mh . rtdw ) , & ( jhyfx1uf4ys . nx1404k4i3 ) ,
NULL , 0 , & ( rt_dataMapInfoPtr -> mmi ) ,
 "HevP4ReferenceApplication/Passenger Car/Electric Plant/Electric Machine/MotMapped"
, 5 , 62 ) ; slsaCacheDWorkDataForSimTargetOP ( rtS , & ( lkkrkctitnw .
d43yu213mh . rtm ) , sizeof ( lkkrkctitnw . d43yu213mh . rtm ) ) ; { char_T *
tempStr = rtwCAPI_EncodePath (
 "HevP4ReferenceApplication/Passenger Car/Electric Plant/Electric Machine/MotMapped"
) ; rtwCAPI_UpdateFullPaths ( ( rtwCAPI_GetChildMMI ( & ( rt_dataMapInfoPtr
-> mmi ) , 5 ) ) , tempStr , 1 ) ; utFree ( tempStr ) ; } ht2eemxshs ( rtS ,
0 , 1 , 0 , & ( lkkrkctitnw . lkxnu4ieaj . rtm ) , & ( lkkrkctitnw .
lkxnu4ieaj . rtb ) , & ( lkkrkctitnw . lkxnu4ieaj . rtdw ) , & ( jhyfx1uf4ys
. i0l3sl3egl ) , NULL , 0 , & ( rt_dataMapInfoPtr -> mmi ) ,
"HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine" , 6 , 35 ) ;
slsaCacheDWorkDataForSimTargetOP ( rtS , & ( lkkrkctitnw . lkxnu4ieaj . rtm )
, sizeof ( lkkrkctitnw . lkxnu4ieaj . rtm ) ) ; { char_T * tempStr =
rtwCAPI_EncodePath (
"HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine" ) ;
rtwCAPI_UpdateFullPaths ( ( rtwCAPI_GetChildMMI ( & ( rt_dataMapInfoPtr ->
mmi ) , 6 ) ) , tempStr , 1 ) ; utFree ( tempStr ) ; } { static RTWLogInfo
rt_DataLoggingInfo ; rt_DataLoggingInfo . loggingInterval = ( NULL ) ;
ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; } { rtliSetLogT (
ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX ( ssGetRTWLogInfo ( rtS ) ,
"" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) , "xFinal" ) ;
rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetMMI ( ssGetRTWLogInfo ( rtS ) , & ( rt_dataMapInfoPtr -> mmi
) ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogYSignalInfo (
ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; rtliSetLogYSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static struct _ssStatesInfo2
statesInfo2 ; ssSetStatesInfo2 ( rtS , & statesInfo2 ) ; } { static
ssPeriodicStatesInfo periodicStatesInfo ; ssSetPeriodicStatesInfo ( rtS , &
periodicStatesInfo ) ; ssSetPeriodicContStateIndices ( rtS , fhfulmliann ) ;
( void ) memset ( ( void * ) fhfulmliann , 0 , 1 * sizeof ( int_T ) ) ;
ssSetPeriodicContStateRanges ( rtS , iml0ztclnce ) ; ( void ) memset ( ( void
* ) iml0ztclnce , 0 , 2 * sizeof ( real_T ) ) ; } { static
ssJacobianPerturbationBounds jacobianPerturbationBounds ;
ssSetJacobianPerturbationBounds ( rtS , & jacobianPerturbationBounds ) ; } {
static ssSolverInfo slvrInfo ; static boolean_T contStatesDisabled [ 63 ] ;
static real_T absTol [ 63 ] = { 1.0E-5 , 1.0E-5 , 1.0E-5 , 1.0E-5 , 1.0E-5 ,
1.0E-5 , 1.0E-5 , 1.0E-5 , 1.0E-5 , 1.0E-5 , 1.0E-5 , 1.0E-5 , 1.0E-5 ,
1.0E-5 , 1.0E-5 , 1.0E-5 , 1.0E-5 , 1.0E-5 , 1.0E-5 , 1.0E-5 , 1.0E-5 ,
1.0E-5 , 1.0E-5 , 1.0E-5 , 1.0E-5 , 1.0E-5 , 1.0E-5 , 1.0E-5 , 1.0E-5 ,
1.0E-5 , 1.0E-5 , 1.0E-5 , 1.0E-5 , 1.0E-5 , 1.0E-5 , 1.0E-5 , 1.0E-5 ,
1.0E-5 , 1.0E-5 , 1.0E-5 , 1.0E-5 , 1.0E-5 , 1.0E-5 , 1.0E-5 , 1.0E-5 ,
1.0E-5 , 1.0E-5 , 1.0E-5 , 1.0E-5 , 1.0E-5 , 1.0E-5 , 1.0E-5 , 1.0E-5 ,
1.0E-5 , 1.0E-5 , 1.0E-5 , 1.0E-5 , 1.0E-5 , 1.0E-5 , 1.0E-5 , 1.0E-5 ,
1.0E-5 , 1.0E-5 } ; static uint8_T absTolControl [ 63 ] = { 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U } ; static
real_T contStateJacPerturbBoundMinVec [ 63 ] ; static real_T
contStateJacPerturbBoundMaxVec [ 63 ] ; static uint8_T zcAttributes [ 39 ] =
{ ( 0x40 | ZC_EVENT_ALL_UP ) , ( 0x40 | ZC_EVENT_ALL_UP ) , ( 0x40 |
ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL_UP ) , ( 0x40 | ZC_EVENT_ALL_UP ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL_UP ) , ( 0x40 | ZC_EVENT_ALL_UP ) , (
ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL )
, ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) ,
( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL )
} ; static uint8_T zcEvents [ 39 ] = { ( 0x40 | ZC_EVENT_ALL_UP ) , ( 0x40 |
ZC_EVENT_ALL_UP ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL_UP ) , (
0x40 | ZC_EVENT_ALL_UP ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL )
, ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL )
, ( 0x40 | ZC_EVENT_ALL_UP ) , ( 0x40 | ZC_EVENT_ALL_UP ) , ( 0x40 |
ZC_EVENT_ALL_UP ) , ( 0x40 | ZC_EVENT_ALL_DN ) , ( 0x40 | ZC_EVENT_ALL ) , (
0x40 | ZC_EVENT_ALL_UP ) , ( 0x40 | ZC_EVENT_ALL_DN ) , ( 0x40 | ZC_EVENT_ALL
) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL
) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL
) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL
) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL
) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL
) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( ZC_EVENT_ALL_UP ) ,
( 0x40 | ZC_EVENT_ALL_DN ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL
) } ; { int i ; for ( i = 0 ; i < 63 ; ++ i ) {
contStateJacPerturbBoundMinVec [ i ] = 0 ; contStateJacPerturbBoundMaxVec [ i
] = rtGetInf ( ) ; } } ssSetSolverRelTol ( rtS , 0.001 ) ; ssSetStepSize (
rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 ) ; ssSetMaxNumMinSteps ( rtS , -
1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ; ssSetMaxStepSize ( rtS , 0.01 )
; ssSetSolverMaxOrder ( rtS , - 1 ) ; ssSetSolverRefineFactor ( rtS , 1 ) ;
ssSetOutputTimes ( rtS , ( NULL ) ) ; ssSetNumOutputTimes ( rtS , 0 ) ;
ssSetOutputTimesOnly ( rtS , 0 ) ; ssSetOutputTimesIndex ( rtS , 0 ) ;
ssSetZCCacheNeedsReset ( rtS , 1 ) ; ssSetDerivCacheNeedsReset ( rtS , 0 ) ;
ssSetNumNonContDerivSigInfos ( rtS , 0 ) ; ssSetNonContDerivSigInfos ( rtS ,
( NULL ) ) ; ssSetSolverInfo ( rtS , & slvrInfo ) ; ssSetSolverName ( rtS ,
"ode23tb" ) ; ssSetVariableStepSolver ( rtS , 1 ) ;
ssSetSolverConsistencyChecking ( rtS , 0 ) ; ssSetSolverAdaptiveZcDetection (
rtS , 1 ) ; ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetAbsTolVector (
rtS , absTol ) ; ssSetAbsTolControlVector ( rtS , absTolControl ) ;
ssSetSolverAbsTol_Obsolete ( rtS , absTol ) ;
ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl ) ;
ssSetJacobianPerturbationBoundsMinVec ( rtS , contStateJacPerturbBoundMinVec
) ; ssSetJacobianPerturbationBoundsMaxVec ( rtS ,
contStateJacPerturbBoundMaxVec ) ; ssSetSolverStateProjection ( rtS , 0 ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives ( rtS ,
MdlDerivatives ) ; ssSetSolverZcSignalAttrib ( rtS , zcAttributes ) ;
ssSetSolverNumZcSignals ( rtS , 39 ) ; ssSetModelZeroCrossings ( rtS ,
MdlZeroCrossings ) ; ssSetSolverZcEventsVector ( rtS , zcEvents ) ;
ssSetSolverConsecutiveZCsStepRelTol ( rtS , 2.8421709430404007E-13 ) ;
ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ; ssSetSolverConsecutiveZCsError
( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic ( rtS , 0 ) ;
ssSetSolverIgnoredZcDiagnostic ( rtS , 0 ) ; ssSetSolverZcThreshold ( rtS ,
0.001 ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 100 ) ;
ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid ( rtS , INT_MIN )
; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 32 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 100 ) ; }
ssSetChecksumVal ( rtS , 0 , 1068892458U ) ; ssSetChecksumVal ( rtS , 1 ,
3960671541U ) ; ssSetChecksumVal ( rtS , 2 , 1637318959U ) ; ssSetChecksumVal
( rtS , 3 , 3633016946U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 15 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = & rtAlwaysEnabled ;
systemRan [ 2 ] = ( sysRanDType * ) & lkkrkctitnw . im2vq3d3irm . hnlzvdkzrg
; systemRan [ 3 ] = & rtAlwaysEnabled ; systemRan [ 4 ] = & rtAlwaysEnabled ;
systemRan [ 5 ] = ( sysRanDType * ) & lkkrkctitnw . d0xw0oxj5a . hnlzvdkzrg ;
systemRan [ 6 ] = & rtAlwaysEnabled ; systemRan [ 7 ] = & rtAlwaysEnabled ;
systemRan [ 8 ] = & rtAlwaysEnabled ; systemRan [ 9 ] = & rtAlwaysEnabled ;
systemRan [ 10 ] = & rtAlwaysEnabled ; systemRan [ 11 ] = & rtAlwaysEnabled ;
systemRan [ 12 ] = & rtAlwaysEnabled ; systemRan [ 13 ] = & rtAlwaysEnabled ;
systemRan [ 14 ] = & rtAlwaysEnabled ; rteiSetModelMappingInfoPtr (
ssGetRTWExtModeInfo ( rtS ) , & ssGetModelMappingInfo ( rtS ) ) ;
rteiSetChecksumsPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetChecksums ( rtS ) )
; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetTPtr ( rtS ) ) ; }
slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_HevP4ReferenceApplication_GetSimStateDisallowedBlocks ) ;
slsaGetWorkFcnForSimTargetOP ( rtS , mr_HevP4ReferenceApplication_GetDWork )
; slsaSetWorkFcnForSimTargetOP ( rtS , mr_HevP4ReferenceApplication_SetDWork
) ; huq5bp1rix . FirstOrderHold1_ErrTol = rtInf ; huq5bp1rix .
FirstOrderHold2_ErrTol = rtInf ; huq5bp1rix . FirstOrderHold12_ErrTol = rtInf
; huq5bp1rix . Saturation1_UpperSat = rtInf ; huq5bp1rix .
Saturation_UpperSat = rtInf ; huq5bp1rix . Saturation1_UpperSat_hiohcychfu =
rtInf ; huq5bp1rix . Saturation_UpperSat_p152syy2lk = rtInf ; huq5bp1rix .
FirstOrderHold_ErrTol = rtInf ; huq5bp1rix . FirstOrderHold_ErrTol_drwqucvaxb
= rtInf ; huq5bp1rix . FirstOrderHold_ErrTol_p53gicbkas = rtInf ; huq5bp1rix
. FirstOrderHold1_ErrTol_ltw51vguzo = rtInf ; huq5bp1rix .
FirstOrderHold10_ErrTol = rtInf ; huq5bp1rix . FirstOrderHold11_ErrTol =
rtInf ; huq5bp1rix . FirstOrderHold13_ErrTol = rtInf ; huq5bp1rix .
FirstOrderHold14_ErrTol = rtInf ; huq5bp1rix .
FirstOrderHold2_ErrTol_ffoy3v4qk5 = rtInf ; huq5bp1rix .
FirstOrderHold3_ErrTol = rtInf ; huq5bp1rix . FirstOrderHold4_ErrTol = rtInf
; huq5bp1rix . FirstOrderHold5_ErrTol = rtInf ; huq5bp1rix .
FirstOrderHold6_ErrTol = rtInf ; huq5bp1rix . FirstOrderHold7_ErrTol = rtInf
; huq5bp1rix . FirstOrderHold8_ErrTol = rtInf ; huq5bp1rix .
FirstOrderHold9_ErrTol = rtInf ; rt_RapidReadMatFileAndUpdateParams ( rtS ) ;
if ( ssGetErrorStatus ( rtS ) ) { return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
void MdlOutputsParameterSampleTime ( int_T tid ) { MdlOutputsTID5 ( tid ) ; }
