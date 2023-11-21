#include "BattHevP4.h"
#include "rtwtypes.h"
#include "BattHevP4_private.h"
#include "mwmathutil.h"
#include "BattHevP4_capi.h"
#include "look2_binlcapw.h"
#include "look1_binlcapw.h"
#include <string.h>
#include "rt_nonfinite.h"
static RegMdlInfo rtMdlInfo_BattHevP4 [ 42 ] = { { "fc1yykdatze" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "BattHevP4" } , {
"llubngs23w" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BattHevP4" } , { "pl1jvtcou5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "BattHevP4" } , { "bfc2nuwctg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "BattHevP4" } , { "d1sixwk3if" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BattHevP4" } , {
"exeeqdnta3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BattHevP4" } , { "kuejxqaigs" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "BattHevP4" } , { "nzo4ptcd4i" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "BattHevP4" } , { "cixw1x0yom" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BattHevP4" } , {
"fz45xiax0b" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BattHevP4" } , { "nbc0by4nne" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "BattHevP4" } , { "pa2nxv0wvi" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "BattHevP4" } , { "hnrscff1gh" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BattHevP4" } , {
"bllc4q2ho5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BattHevP4" } , { "h3nahr2di0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "BattHevP4" } , { "d51nt2wcq4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "BattHevP4" } , { "oc0azpsjvj" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BattHevP4" } , {
"doej41yld0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BattHevP4" } , { "enrfi3fbq1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "BattHevP4" } , { "b0rwgxz4xm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "BattHevP4" } , { "eeevvys3rt" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BattHevP4" } , {
"ermomkkhlx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BattHevP4" } , { "i0rtzz5uln" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "BattHevP4" } , { "pm2vt2yrii" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "BattHevP4" } , { "BattHevP4" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "dynleu1pfi" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BattHevP4" } , {
"b5hj4cb40u" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BattHevP4" } , { "eiq1jwny0u" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "BattHevP4" } , { "mr_BattHevP4_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BattHevP4" } , {
"mr_BattHevP4_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BattHevP4" } , {
"mr_BattHevP4_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BattHevP4" } , {
"mr_BattHevP4_restoreDataFromMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "BattHevP4" } , {
"mr_BattHevP4_cacheDataToMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "BattHevP4" } , {
"mr_BattHevP4_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "BattHevP4" } , { "mr_BattHevP4_cacheBitFieldToMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BattHevP4" } , {
"mr_BattHevP4_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1
, ( void * ) "BattHevP4" } , { "mr_BattHevP4_cacheDataAsMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BattHevP4" } , {
"mr_BattHevP4_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "BattHevP4" } , { "mr_BattHevP4_SetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BattHevP4" } , {
"mr_BattHevP4_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"BattHevP4" } , { "BattHevP4.h" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL
) } , { "BattHevP4.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * )
"BattHevP4" } } ; d5lodtjlb0a d5lodtjlb0 = { 3.1799999999999997 , 5.3 , {
243.1 , 253.1 , 263.1 , 273.1 , 283.1 , 298.1 , 313.1 } , { 0.0 , 0.01 , 0.02
, 0.03 , 0.04 , 0.05 , 0.06 , 0.07 , 0.08 , 0.09 , 0.1 , 0.11 , 0.12 , 0.13 ,
0.14 , 0.15 , 0.16 , 0.17 , 0.18 , 0.19 , 0.2 , 0.21 , 0.22 , 0.23 , 0.24 ,
0.25 , 0.26 , 0.27 , 0.28 , 0.29 , 0.3 , 0.31 , 0.32 , 0.33 , 0.34 , 0.35 ,
0.36 , 0.37 , 0.38 , 0.39 , 0.4 , 0.41 , 0.42 , 0.43 , 0.44 , 0.45 , 0.46 ,
0.47 , 0.48 , 0.49 , 0.5 , 0.51 , 0.52 , 0.53 , 0.54 , 0.55 , 0.56 , 0.57 ,
0.58 , 0.59 , 0.6 , 0.61 , 0.62 , 0.63 , 0.64 , 0.65 , 0.66 , 0.67 , 0.68 ,
0.69 , 0.7 , 0.71 , 0.72 , 0.73 , 0.74 , 0.75 , 0.76 , 0.77 , 0.78 , 0.79 ,
0.8 , 0.81 , 0.82 , 0.83 , 0.84 , 0.85 , 0.86 , 0.87 , 0.88 , 0.89 , 0.9 ,
0.91 , 0.92 , 0.93 , 0.94 , 0.95 , 0.96 , 0.97 , 0.98 , 0.99 , 1.0 } , { 0.0
, 0.2 , 0.4 , 0.6 , 0.8 , 1.0 } , { 2.8 , 3.228 , 3.284 , 3.361 , 3.408 ,
3.427 , 3.472 , 3.477 , 3.493 , 3.504 , 3.516 , 3.528 , 3.537 , 3.545 , 3.555
, 3.561 , 3.566 , 3.576 , 3.587 , 3.589 , 3.594 , 3.6 , 3.608 , 3.61 , 3.616
, 3.619 , 3.626 , 3.632 , 3.637 , 3.64 , 3.645 , 3.646 , 3.652 , 3.655 ,
3.658 , 3.661 , 3.664 , 3.668 , 3.673 , 3.678 , 3.68 , 3.681 , 3.686 , 3.692
, 3.699 , 3.702 , 3.705 , 3.71 , 3.717 , 3.723 , 3.728 , 3.733 , 3.735 ,
3.742 , 3.749 , 3.755 , 3.761 , 3.768 , 3.773 , 3.78 , 3.791 , 3.798 , 3.798
, 3.814 , 3.818 , 3.825 , 3.841 , 3.846 , 3.855 , 3.863 , 3.877 , 3.885 ,
3.894 , 3.907 , 3.919 , 3.926 , 3.935 , 3.944 , 3.954 , 3.964 , 3.974 , 3.988
, 3.998 , 4.014 , 4.029 , 4.034 , 4.047 , 4.065 , 4.074 , 4.086 , 4.097 ,
4.131 , 4.126 , 4.138 , 4.15 , 4.18 , 4.174 , 4.187 , 4.207 , 4.231 , 4.221 }
, 1.0 , 72.0 , 30000.0 , { 0.008846 , 0.006389 , 0.004364 , 0.002031 ,
0.001443 , 0.0005603 , 0.001028 , 0.009319 , 0.006554 , 0.004101 , 0.002563 ,
0.001825 , 0.0007192 , 0.001338 , 0.009027 , 0.005553 , 0.00406 , 0.002532 ,
0.001795 , 0.0006887 , 0.001 , 0.00847 , 0.005525 , 0.003452 , 0.00246 ,
0.001778 , 0.0007557 , 0.001536 , 0.01032 , 0.006043 , 0.003846 , 0.002716 ,
0.001924 , 0.0007355 , 0.001546 , 0.01314 , 0.007805 , 0.004517 , 0.003047 ,
0.002234 , 0.001014 , 0.002789 } , 0.001 , 0.001 , 650.0 , 272.952 , 98.0 ,
0.001 , 0.001 , 0.0 , 0.0 , 0.0 , 100.0 , 650.0 , 0.0 , 0.0 , 1.0 , 100.0 ,
100.0 , { 6U , 5U } } ; void eeevvys3rt ( eiq1jwny0u * const nq3nnf3z4x ,
hnrscff1gh * localDW , nzo4ptcd4i * localX ) { boolean_T tmp ; localDW ->
l1nvnskku2 = 1 ; if ( rtmIsFirstInitCond ( nq3nnf3z4x ) ) { localX ->
jf4yxb00my = 0.0 ; tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) {
tmp = ( slIsRapidAcceleratorSimulating ( ) ?
ssGetGlobalInitialStatesAvailable ( nq3nnf3z4x -> _mdlRefSfcnS ) :
simTgtGlobalInitialStatesAvailable ( nq3nnf3z4x -> _mdlRefSfcnS ) ) ; localDW
-> l1nvnskku2 = ! tmp ; } else { localDW -> l1nvnskku2 = 1 ; } localX ->
huozquuyis = 0.0 ; } localDW -> finstnqrrv = 1 ; if ( rtmIsFirstInitCond (
nq3nnf3z4x ) ) { tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp
= ( slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
nq3nnf3z4x -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
nq3nnf3z4x -> _mdlRefSfcnS ) ) ; localDW -> finstnqrrv = ! tmp ; } else {
localDW -> finstnqrrv = 1 ; } localX -> f0u4ldealx = 0.0 ; } localDW ->
kelsdeeypp = 1 ; if ( rtmIsFirstInitCond ( nq3nnf3z4x ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
nq3nnf3z4x -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
nq3nnf3z4x -> _mdlRefSfcnS ) ) ; localDW -> kelsdeeypp = ! tmp ; } else {
localDW -> kelsdeeypp = 1 ; } } } void b0rwgxz4xm ( eiq1jwny0u * const
nq3nnf3z4x , hnrscff1gh * localDW , nzo4ptcd4i * localX ) { boolean_T tmp ;
localDW -> l1nvnskku2 = 1 ; if ( rtmIsFirstInitCond ( nq3nnf3z4x ) ) { localX
-> jf4yxb00my = 0.0 ; tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) {
tmp = ( slIsRapidAcceleratorSimulating ( ) ?
ssGetGlobalInitialStatesAvailable ( nq3nnf3z4x -> _mdlRefSfcnS ) :
simTgtGlobalInitialStatesAvailable ( nq3nnf3z4x -> _mdlRefSfcnS ) ) ; localDW
-> l1nvnskku2 = ! tmp ; } else { localDW -> l1nvnskku2 = 1 ; } localX ->
huozquuyis = 0.0 ; } localDW -> finstnqrrv = 1 ; if ( rtmIsFirstInitCond (
nq3nnf3z4x ) ) { tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp
= ( slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
nq3nnf3z4x -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
nq3nnf3z4x -> _mdlRefSfcnS ) ) ; localDW -> finstnqrrv = ! tmp ; } else {
localDW -> finstnqrrv = 1 ; } localX -> f0u4ldealx = 0.0 ; } localDW ->
kelsdeeypp = 1 ; if ( rtmIsFirstInitCond ( nq3nnf3z4x ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
nq3nnf3z4x -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
nq3nnf3z4x -> _mdlRefSfcnS ) ) ; localDW -> kelsdeeypp = ! tmp ; } else {
localDW -> kelsdeeypp = 1 ; } } } void BattHevP4 ( eiq1jwny0u * const
nq3nnf3z4x , const real_T * pj1iwrln5n , const real_T * ala00kodu2 , real_T *
bmfyi5hubj , real_T * faaggkrksa , real_T * fs55xx0haa , real_T * b1rlmxqb0y
, bllc4q2ho5 * localB , hnrscff1gh * localDW , nzo4ptcd4i * localX ) { real_T
aixttagwxj_p ; real_T c2h5unrcs2_p ; real_T dji5pi2n2w_p ; boolean_T
moe43uqkf1 ; boolean_T mzqopzuc0m ; mzqopzuc0m = ( * pj1iwrln5n >= -
d5lodtjlb0 . P_15 ) ; moe43uqkf1 = ( * pj1iwrln5n <= d5lodtjlb0 . P_15 ) ; if
( mzqopzuc0m && moe43uqkf1 ) { dji5pi2n2w_p = * pj1iwrln5n / 0.001 ;
aixttagwxj_p = 0.002 / ( 3.0 - muDoubleScalarPower ( dji5pi2n2w_p , 2.0 ) ) ;
} else { aixttagwxj_p = muDoubleScalarAbs ( * pj1iwrln5n ) ; } if (
ssIsModeUpdateTimeStep ( nq3nnf3z4x -> _mdlRefSfcnS ) ) { if ( localDW ->
l1nvnskku2 != 0 ) { localX -> jf4yxb00my = localB -> jdbhkyvenr ; }
c2h5unrcs2_p = localX -> jf4yxb00my ; if ( localDW -> finstnqrrv != 0 ) {
localX -> huozquuyis = localB -> hrge0n0lum ; } dji5pi2n2w_p = localX ->
huozquuyis ; } else { c2h5unrcs2_p = localX -> jf4yxb00my ; dji5pi2n2w_p =
localX -> huozquuyis ; } * b1rlmxqb0y = 1.0 / d5lodtjlb0 . P_10 *
c2h5unrcs2_p ; localB -> my24rvqlbm = muDoubleScalarMin ( d5lodtjlb0 . P_8 /
aixttagwxj_p , localB -> bnvk15s1xo ) - * b1rlmxqb0y ; aixttagwxj_p = *
b1rlmxqb0y * * pj1iwrln5n ; * faaggkrksa = 1.0 / d5lodtjlb0 . P_11 *
dji5pi2n2w_p ; mzqopzuc0m = ( * faaggkrksa >= - d5lodtjlb0 . P_16 ) ;
moe43uqkf1 = ( * faaggkrksa <= d5lodtjlb0 . P_16 ) ; if ( mzqopzuc0m &&
moe43uqkf1 ) { dji5pi2n2w_p = * faaggkrksa / 0.001 ; if ( * faaggkrksa >=
d5lodtjlb0 . P_17 ) { c2h5unrcs2_p = d5lodtjlb0 . P_24 ; } else {
c2h5unrcs2_p = localB -> np3abu5lh3 ; } dji5pi2n2w_p = 0.002 / ( 3.0 -
muDoubleScalarPower ( dji5pi2n2w_p , 2.0 ) ) * c2h5unrcs2_p ; } else {
dji5pi2n2w_p = * faaggkrksa ; } if ( aixttagwxj_p >= d5lodtjlb0 . P_18 ) {
c2h5unrcs2_p = aixttagwxj_p * localB -> cxi5wtxqys ; } else { c2h5unrcs2_p =
muDoubleScalarAbs ( aixttagwxj_p ) * localB -> gwteynrxii ; } * fs55xx0haa =
( aixttagwxj_p + c2h5unrcs2_p ) / dji5pi2n2w_p ; localB -> a1vd5ppugp = - 1.0
/ ( d5lodtjlb0 . P_6 * 3600.0 ) * * fs55xx0haa ; if ( ssIsModeUpdateTimeStep
( nq3nnf3z4x -> _mdlRefSfcnS ) ) { if ( localDW -> kelsdeeypp != 0 ) { localX
-> f0u4ldealx = localB -> b0ulkqpsva ; } if ( localX -> f0u4ldealx >=
d5lodtjlb0 . P_1 ) { if ( localX -> f0u4ldealx != d5lodtjlb0 . P_1 ) { localX
-> f0u4ldealx = d5lodtjlb0 . P_1 ; ssSetBlockStateForSolverChangedAtMajorStep
( nq3nnf3z4x -> _mdlRefSfcnS ) ; } } else if ( ( localX -> f0u4ldealx <=
d5lodtjlb0 . P_19 ) && ( localX -> f0u4ldealx != d5lodtjlb0 . P_19 ) ) {
localX -> f0u4ldealx = d5lodtjlb0 . P_19 ;
ssSetBlockStateForSolverChangedAtMajorStep ( nq3nnf3z4x -> _mdlRefSfcnS ) ; }
aixttagwxj_p = localX -> f0u4ldealx ; } else if ( localX -> f0u4ldealx >=
d5lodtjlb0 . P_1 ) { aixttagwxj_p = d5lodtjlb0 . P_1 ; } else if ( localX ->
f0u4ldealx <= d5lodtjlb0 . P_19 ) { aixttagwxj_p = d5lodtjlb0 . P_19 ; } else
{ aixttagwxj_p = localX -> f0u4ldealx ; } aixttagwxj_p /= d5lodtjlb0 . P_1 ;
c2h5unrcs2_p = look2_binlcapw ( * ala00kodu2 , aixttagwxj_p , d5lodtjlb0 .
P_2 , d5lodtjlb0 . P_4 , d5lodtjlb0 . P_9 , d5lodtjlb0 . P_27 , 7U ) ;
dji5pi2n2w_p = 1.0 / d5lodtjlb0 . P_6 * * fs55xx0haa ; localB -> b5hnonjr3b =
( look1_binlcapw ( aixttagwxj_p , d5lodtjlb0 . P_3 , d5lodtjlb0 . P_5 , 100U
) - c2h5unrcs2_p * dji5pi2n2w_p ) * d5lodtjlb0 . P_7 - * faaggkrksa ; *
bmfyi5hubj = d5lodtjlb0 . P_20 * aixttagwxj_p ; } void BattHevP4TID2 (
bllc4q2ho5 * localB ) { real_T cnuocppu0x ; localB -> jdbhkyvenr = d5lodtjlb0
. P_10 * d5lodtjlb0 . P_12 ; if ( d5lodtjlb0 . P_21 >= d5lodtjlb0 . P_23 ) {
localB -> bnvk15s1xo = d5lodtjlb0 . P_21 ; } else { localB -> bnvk15s1xo =
d5lodtjlb0 . P_22 ; } localB -> np3abu5lh3 = - d5lodtjlb0 . P_24 ; cnuocppu0x
= d5lodtjlb0 . P_25 - d5lodtjlb0 . P_14 ; localB -> cxi5wtxqys = cnuocppu0x /
d5lodtjlb0 . P_14 ; localB -> gwteynrxii = cnuocppu0x / d5lodtjlb0 . P_26 ;
if ( d5lodtjlb0 . P_0 > d5lodtjlb0 . P_1 ) { localB -> b0ulkqpsva =
d5lodtjlb0 . P_1 ; } else { localB -> b0ulkqpsva = d5lodtjlb0 . P_0 ; }
localB -> hrge0n0lum = d5lodtjlb0 . P_13 * d5lodtjlb0 . P_11 ; } void
enrfi3fbq1 ( hnrscff1gh * localDW ) { localDW -> l1nvnskku2 = 0 ; localDW ->
finstnqrrv = 0 ; localDW -> kelsdeeypp = 0 ; } void doej41yld0 ( bllc4q2ho5 *
localB , nzo4ptcd4i * localX , kuejxqaigs * localXdot ) { localXdot ->
jf4yxb00my = localB -> my24rvqlbm ; localXdot -> huozquuyis = localB ->
b5hnonjr3b ; if ( ( ( localX -> f0u4ldealx > d5lodtjlb0 . P_19 ) && ( localX
-> f0u4ldealx < d5lodtjlb0 . P_1 ) ) || ( ( localX -> f0u4ldealx <=
d5lodtjlb0 . P_19 ) && ( localB -> a1vd5ppugp > 0.0 ) ) || ( ( localX ->
f0u4ldealx >= d5lodtjlb0 . P_1 ) && ( localB -> a1vd5ppugp < 0.0 ) ) ) {
localXdot -> f0u4ldealx = localB -> a1vd5ppugp ; } else { localXdot ->
f0u4ldealx = 0.0 ; } } void d51nt2wcq4 ( eiq1jwny0u * const nq3nnf3z4x ) { if
( ! slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( nq3nnf3z4x ->
_mdlRefSfcnS , "BattHevP4" , "SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ;
} } void ermomkkhlx ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T
mdlref_TID1 , int_T mdlref_TID2 , eiq1jwny0u * const nq3nnf3z4x , bllc4q2ho5
* localB , hnrscff1gh * localDW , nzo4ptcd4i * localX , void * sysRanPtr ,
int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { rt_InitInfAndNaN
( sizeof ( real_T ) ) ; ( void ) memset ( ( void * ) nq3nnf3z4x , 0 , sizeof
( eiq1jwny0u ) ) ; nq3nnf3z4x -> Timing . mdlref_GlobalTID [ 0 ] =
mdlref_TID0 ; nq3nnf3z4x -> Timing . mdlref_GlobalTID [ 1 ] = mdlref_TID1 ;
nq3nnf3z4x -> Timing . mdlref_GlobalTID [ 2 ] = mdlref_TID2 ; nq3nnf3z4x ->
_mdlRefSfcnS = ( _mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) )
{ slmrRunPluginEvent ( nq3nnf3z4x -> _mdlRefSfcnS , "BattHevP4" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { localB -> my24rvqlbm = 0.0
; localB -> a1vd5ppugp = 0.0 ; localB -> b5hnonjr3b = 0.0 ; localB ->
jdbhkyvenr = 0.0 ; localB -> bnvk15s1xo = 0.0 ; localB -> np3abu5lh3 = 0.0 ;
localB -> cxi5wtxqys = 0.0 ; localB -> gwteynrxii = 0.0 ; localB ->
b0ulkqpsva = 0.0 ; localB -> hrge0n0lum = 0.0 ; } ( void ) memset ( ( void *
) localDW , 0 , sizeof ( hnrscff1gh ) ) ; BattHevP4_InitializeDataMapInfo (
nq3nnf3z4x , localDW , localX , sysRanPtr , contextTid ) ; if ( (
rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != ( NULL ) ) ) {
rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & ( nq3nnf3z4x ->
DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( nq3nnf3z4x -> DataMapInfo . mmi ,
rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex ( nq3nnf3z4x ->
DataMapInfo . mmi , rt_CSTATEIdx ) ; } } void mr_BattHevP4_MdlInfoRegFcn (
SimStruct * mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal =
0 ; { boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } *
retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_BattHevP4 , 42 ) ; * retVal = 1 ; } static void
mr_BattHevP4_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) ; static void
mr_BattHevP4_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_BattHevP4_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_BattHevP4_restoreDataFromMxArray ( void * destData , const mxArray *
srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * )
destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i
, j ) ) , numBytes ) ; } static void mr_BattHevP4_cacheBitFieldToMxArray (
mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_BattHevP4_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j
, uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_BattHevP4_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex
i , int j , uint_T numBits ) ; static uint_T
mr_BattHevP4_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex
i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T ) mxGetScalar (
mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( ( 1u << numBits
) - 1u ) ; } static void mr_BattHevP4_cacheDataToMxArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void mr_BattHevP4_cacheDataToMxArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_BattHevP4_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ;
static void mr_BattHevP4_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_BattHevP4_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_BattHevP4_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
real_T ) fieldVal ) ) ; } static uint_T
mr_BattHevP4_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_BattHevP4_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_BattHevP4_GetDWork ( const fc1yykdatze * mdlrefDW ) {
static const char_T * ssDWFieldNames [ 3 ] = { "rtb" , "rtdw" , "NULL->rtzce"
, } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_BattHevP4_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & (
mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb ) ) ; { static const char_T *
rtdwDataFieldNames [ 3 ] = { "mdlrefDW->rtdw.l1nvnskku2" ,
"mdlrefDW->rtdw.finstnqrrv" , "mdlrefDW->rtdw.kelsdeeypp" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 3 , rtdwDataFieldNames ) ;
mr_BattHevP4_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void * ) & (
mdlrefDW -> rtdw . l1nvnskku2 ) , sizeof ( mdlrefDW -> rtdw . l1nvnskku2 ) )
; mr_BattHevP4_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void * ) & (
mdlrefDW -> rtdw . finstnqrrv ) , sizeof ( mdlrefDW -> rtdw . finstnqrrv ) )
; mr_BattHevP4_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void * ) & (
mdlrefDW -> rtdw . kelsdeeypp ) , sizeof ( mdlrefDW -> rtdw . kelsdeeypp ) )
; mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } ( void ) mdlrefDW ;
return ssDW ; } void mr_BattHevP4_SetDWork ( fc1yykdatze * mdlrefDW , const
mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ;
mr_BattHevP4_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtb ) , ssDW
, 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ; mr_BattHevP4_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . l1nvnskku2 ) , rtdwData , 0 , 0 , sizeof (
mdlrefDW -> rtdw . l1nvnskku2 ) ) ; mr_BattHevP4_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . finstnqrrv ) , rtdwData , 0 , 1 , sizeof (
mdlrefDW -> rtdw . finstnqrrv ) ) ; mr_BattHevP4_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . kelsdeeypp ) , rtdwData , 0 , 2 , sizeof (
mdlrefDW -> rtdw . kelsdeeypp ) ) ; } } void
mr_BattHevP4_RegisterSimStateChecksum ( SimStruct * S ) { const uint32_T
chksum [ 4 ] = { 1379406796U , 264540867U , 2500252106U , 2783348916U , } ;
slmrModelRefRegisterSimStateChecksum ( S , "BattHevP4" , & chksum [ 0 ] ) ; }
mxArray * mr_BattHevP4_GetSimStateDisallowedBlocks ( ) { return ( NULL ) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
