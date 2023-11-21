#include "HevP4TransmissionController.h"
#include "rtwtypes.h"
#include "HevP4TransmissionController_private.h"
#include "mwmathutil.h"
#include "HevP4TransmissionController_capi.h"
#include "look1_binlcpw.h"
#include "plook_binc.h"
#include "intrp3d_l_pw.h"
#include "look1_binlcapw.h"
#include <string.h>
#include "rt_nonfinite.h"
#define aqtivw5r0e (0)
#define bkqnn2hdj2 (-1)
#define d4bxpqffud ((uint8_T)3U)
#define edo23i1bj1 ((uint8_T)3U)
#define eht5wh3wqv ((uint8_T)5U)
#define etpv0qzcxn ((uint8_T)2U)
#define fkeu3el540 ((uint8_T)4U)
#define flwccsbru3 ((uint8_T)5U)
#define fu43vzbivv ((uint8_T)0U)
#define fy3ou1d1zs ((uint8_T)1U)
#define g3ouo24bae ((uint8_T)1U)
#define ibikiubzvq ((uint8_T)2U)
#define mlirldble4 ((uint8_T)4U)
#define o013sm3esm ((uint8_T)6U)
#define pxdaxvc05y (1)
static RegMdlInfo rtMdlInfo_HevP4TransmissionController [ 63 ] = { {
"p0esoajseu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "jaun1ojom4" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "pysfl0iake" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "j1skykulen" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "ljxlkvtoit" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "pg1oudhrgj" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "noup2s0f0n" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "flyqpfqfak" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "bfji0hnx2h" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "nqvdl4imuc" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "pwvgz2im12" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "djh4op1pzv" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "olpajh1fqj" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "fjvy5vdomkr" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "ppofvw2i5m" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "fvgp1l1zvb" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "cv2ewc0b0t" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "ixttrddzry" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "nn40jxkor1" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "ptcourw1qu" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "a55sdtwv1i" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "jsyh1unp4e" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "hrbd10myag" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "ig3r0iplpr" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "dqim5x1wgk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "e33vsk4ebo" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "kz2bup5g1r" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "cyu3o5gg4b" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "escpily3xw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "bhfs4s1cxc" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "aquxfk0zkz" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "jxsvo05z43" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "fzfs2hgelw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "kpvk0y2dwm" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "dqt510qa0h" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "kib4pbhqbp" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "f20wryriax" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "l0v5h0hhp1" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "khn1iyau5g" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "btnvcckejp" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "ji5otnb2ew" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "pw20nevm10" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "czodoyeebt" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "dr3wagwnuv" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "b0rvtl1mnd" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( void * ) "LugCheck" } , {
"HevP4TransmissionController" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , (
NULL ) } , { "jxgfx0kxxd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "HevP4TransmissionController" } , { "jvv1ghyijy" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "fb2uf2nk44" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , {
"mr_HevP4TransmissionController_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , {
"mr_HevP4TransmissionController_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , {
"mr_HevP4TransmissionController_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , {
"mr_HevP4TransmissionController_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , {
"mr_HevP4TransmissionController_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , {
"mr_HevP4TransmissionController_extractBitFieldFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , {
"mr_HevP4TransmissionController_cacheBitFieldToMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , {
"mr_HevP4TransmissionController_restoreDataFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , {
"mr_HevP4TransmissionController_cacheDataAsMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , {
"mr_HevP4TransmissionController_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "mr_HevP4TransmissionController_SetDWork"
, MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "mr_HevP4TransmissionController_GetDWork"
, MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"HevP4TransmissionController" } , { "HevP4TransmissionController.h" ,
MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , {
"HevP4TransmissionController.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void
* ) "HevP4TransmissionController" } } ; ni25fleah5i ni25fleah5 = { { 0.0 ,
0.6 , 0.9 , 1.0 } , { 1.0 , 2.0 } , { 2.0 , 3.0 , 4.0 , 5.0 , 6.0 } , { 10.8
, 10.8 , 36.0 , 36.0 , 25.2 , 25.2 , 61.2 , 61.2 , 39.6 , 39.6 ,
93.600000000000009 , 93.600000000000009 , 54.0 , 54.0 , 126.0 , 126.0 , 68.4
, 68.4 , 176.4 , 176.4 , 31.619930749150555 , 38.819930749150558 ,
42.419930749150552 , 43.619930749150555 , 44.318578948924035 ,
51.518578948924031 , 55.118578948924039 , 56.318578948924035 ,
53.598360325681568 , 60.798360325681571 , 64.398360325681566 ,
65.598360325681568 , 66.252607657623685 , 73.452607657623687 ,
77.052607657623682 , 78.252607657623685 , 84.53096491487338 ,
91.730964914873383 , 95.330964914873377 , 96.53096491487338 } , 1.0 , 1200.0
, 1000.0 , { 0.0 , 0.25 , 0.9 , 1.0 } , { 1.0 , 2.0 } , { 1.0 , 2.0 , 3.0 ,
4.0 , 5.0 } , { 18.0 , 18.0 , 43.2 , 43.2 , 32.4 , 32.4 , 68.4 , 68.4 ,
46.800000000000004 , 46.800000000000004 , 100.8 , 100.8 , 61.2 , 61.2 ,
133.20000000000002 , 133.20000000000002 , 75.600000000000009 ,
75.600000000000009 , 183.6 , 183.6 , 35.619930749150555 , 38.619930749150555
, 46.419930749150552 , 47.619930749150555 , 48.318578948924035 ,
51.318578948924035 , 59.118578948924039 , 60.318578948924035 ,
57.598360325681568 , 60.598360325681568 , 68.398360325681566 ,
69.598360325681568 , 70.252607657623685 , 73.252607657623685 ,
81.052607657623682 , 82.252607657623685 , 88.53096491487338 ,
91.53096491487338 , 99.330964914873377 , 100.53096491487338 } , 0.0 , { 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 , 0.0 } , 0.0 , { 0.0 , 0.0 , 0.0
, 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 , 0.0 } , 6.0 , 120.0 , 1.0 , 3000.0 , 1.0
, { 3U , 4U , 1U } , { 1U , 4U , 20U } , { 3U , 4U , 1U } , { 1U , 4U , 20U }
, { 0.0 , { 0.0 , 1.0 } , { 0.0 , 200.0 } , 0.75 , 0.25 , 1.0 , 0.0 } } ;
static void bkugv4lefu ( const real_T * oejmiqwoze_p , const real_T *
iqipezpago , const real_T * kqnmub0ccs , real_T * irmm3lmduv , kz2bup5g1r *
localB , e33vsk4ebo * localDW ) ; void ji5otnb2ew ( real_T * f0zdpsa4fa ,
pwvgz2im12 * localP ) { * f0zdpsa4fa = localP -> P_0 ; } void b0rvtl1mnd (
real_T dllf30dvl0 , real_T * f0zdpsa4fa , real_T rtp_LugSpd , djh4op1pzv *
localDW , pwvgz2im12 * localP ) { real_T libmdzxlsl ; libmdzxlsl =
look1_binlcpw ( rtp_LugSpd - dllf30dvl0 , localP -> P_2 , localP -> P_1 , 1U
) ; localDW -> cjqejitpdt = ( ( libmdzxlsl >= localP -> P_3 ) || ( ( ! (
libmdzxlsl <= localP -> P_4 ) ) && localDW -> cjqejitpdt ) ) ; if ( localDW
-> cjqejitpdt ) { * f0zdpsa4fa = localP -> P_5 ; } else { * f0zdpsa4fa =
localP -> P_6 ; } localDW -> c1eg2r0fq0 = 4 ; } static void bkugv4lefu (
const real_T * oejmiqwoze_p , const real_T * iqipezpago , const real_T *
kqnmub0ccs , real_T * irmm3lmduv , kz2bup5g1r * localB , e33vsk4ebo * localDW
) { switch ( localDW -> om33mzodna ) { case g3ouo24bae : if ( localDW ->
o55lh2bsdf == pxdaxvc05y ) { ( * irmm3lmduv ) ++ ; localDW -> om33mzodna =
etpv0qzcxn ; } else if ( localDW -> o55lh2bsdf == aqtivw5r0e ) { ( *
irmm3lmduv ) -- ; localDW -> om33mzodna = etpv0qzcxn ; } else if ( *
kqnmub0ccs == 1.0 ) { localDW -> hubl5tx3rd = 0U ; localDW -> om33mzodna =
d4bxpqffud ; * irmm3lmduv = 0.0 ; } else { b0rvtl1mnd ( localB -> aeo5wmxfdm
, & localDW -> d4wwv1h2im , ni25fleah5 . P_5 , & localDW -> b0rvtl1mndg , &
ni25fleah5 . b0rvtl1mndg ) ; } break ; case etpv0qzcxn : if ( localDW ->
o55lh2bsdf == pxdaxvc05y ) { ( * irmm3lmduv ) ++ ; localDW -> om33mzodna =
g3ouo24bae ; } else if ( localDW -> o55lh2bsdf == aqtivw5r0e ) { ( *
irmm3lmduv ) -- ; localDW -> om33mzodna = g3ouo24bae ; } else if ( ( (
localDW -> d4wwv1h2im != 0.0 ) && ( * iqipezpago < 0.01 ) && ( * irmm3lmduv
== 1.0 ) ) || ( * kqnmub0ccs == 1.0 ) ) { localDW -> hubl5tx3rd = 0U ;
localDW -> om33mzodna = d4bxpqffud ; * irmm3lmduv = 0.0 ; } else { b0rvtl1mnd
( localB -> aeo5wmxfdm , & localDW -> d4wwv1h2im , ni25fleah5 . P_5 , &
localDW -> b0rvtl1mndg , & ni25fleah5 . b0rvtl1mndg ) ; } break ; case
d4bxpqffud : if ( ( * iqipezpago >= 0.1 ) && ( * kqnmub0ccs == 0.0 ) && (
localB -> aeo5wmxfdm >= ni25fleah5 . P_6 ) ) { * irmm3lmduv = 1.0 ; localDW
-> om33mzodna = etpv0qzcxn ; } else if ( ( ni25fleah5 . P_19 == - 1.0 ) && (
* kqnmub0ccs == 0.0 ) ) { localDW -> om33mzodna = eht5wh3wqv ; * irmm3lmduv =
- 1.0 ; } else { b0rvtl1mnd ( localB -> aeo5wmxfdm , & localDW -> d4wwv1h2im
, ni25fleah5 . P_5 , & localDW -> b0rvtl1mndg , & ni25fleah5 . b0rvtl1mndg )
; } break ; case mlirldble4 : if ( ( muDoubleScalarAbs ( * oejmiqwoze_p ) <=
1.0 ) && ( * iqipezpago > 0.0 ) ) { localDW -> hubl5tx3rd = 0U ; localDW ->
om33mzodna = d4bxpqffud ; * irmm3lmduv = 0.0 ; } break ; case eht5wh3wqv : if
( ( ni25fleah5 . P_19 == 1.0 ) || ( * kqnmub0ccs == 1.0 ) ) { localDW ->
hubl5tx3rd = 0U ; localDW -> om33mzodna = d4bxpqffud ; * irmm3lmduv = 0.0 ; }
break ; default : localDW -> om33mzodna = fu43vzbivv ; break ; } } void
kpvk0y2dwm ( real_T * irmm3lmduv , e33vsk4ebo * localDW ) { real_T
dygixtwkjs_p ; localDW -> hubl5tx3rd = 0U ; localDW -> jek222xldn = 0U ;
localDW -> o55lh2bsdf = bkqnn2hdj2 ; localDW -> ku53qexbmd = 0U ; localDW ->
jtzo5ocjcj = 0U ; localDW -> om33mzodna = fu43vzbivv ; localDW -> ijjmr3qo4e
= 0U ; localDW -> jlcsfmc3ih = fu43vzbivv ; * irmm3lmduv = 0.0 ; localDW ->
d4wwv1h2im = 0.0 ; localDW -> evxnx4j1pn = 0.0 ; localDW -> p2xrfjzwr5 = 0.0
; ji5otnb2ew ( & dygixtwkjs_p , & ni25fleah5 . b0rvtl1mndg ) ; } void
fzfs2hgelw ( real_T * irmm3lmduv , e33vsk4ebo * localDW ) { localDW ->
hubl5tx3rd = 0U ; localDW -> jek222xldn = 0U ; localDW -> o55lh2bsdf =
bkqnn2hdj2 ; localDW -> ku53qexbmd = 0U ; localDW -> jtzo5ocjcj = 0U ;
localDW -> om33mzodna = fu43vzbivv ; localDW -> ijjmr3qo4e = 0U ; localDW ->
jlcsfmc3ih = fu43vzbivv ; * irmm3lmduv = 0.0 ; localDW -> d4wwv1h2im = 0.0 ;
localDW -> evxnx4j1pn = 0.0 ; localDW -> p2xrfjzwr5 = 0.0 ; } void
HevP4TransmissionController ( const real_T * nks2jchzrk , const real_T *
iqipezpago , const real_T * kqnmub0ccs , real_T * irmm3lmduv , kz2bup5g1r *
localB , e33vsk4ebo * localDW ) { real_T fractions [ 3 ] ; real_T fractions_p
[ 3 ] ; real_T c4ntbmbc2g_p ; real_T d2vdxq3gaa_p ; real_T nv4qhhr4ub_p ;
real_T oejmiqwoze_e ; real_T oh3qvl0aun_p ; uint32_T bpIndices [ 3 ] ;
uint32_T bpIndices_p [ 3 ] ; oejmiqwoze_e = 3.5999999999999996 * * nks2jchzrk
; if ( localDW -> hubl5tx3rd < MAX_uint32_T ) { localDW -> hubl5tx3rd ++ ; }
if ( localDW -> jek222xldn < MAX_uint32_T ) { localDW -> jek222xldn ++ ; }
localDW -> o55lh2bsdf = bkqnn2hdj2 ; if ( localDW -> ku53qexbmd == 0U ) {
localDW -> ku53qexbmd = 1U ; localDW -> jtzo5ocjcj = 1U ; * irmm3lmduv =
ni25fleah5 . P_4 ; if ( ni25fleah5 . P_4 == 80.0 ) { localDW -> om33mzodna =
mlirldble4 ; * irmm3lmduv = 80.0 ; } else if ( ni25fleah5 . P_4 < 0.0 ) {
localDW -> om33mzodna = eht5wh3wqv ; * irmm3lmduv = - 1.0 ; } else if (
ni25fleah5 . P_4 == 0.0 ) { localDW -> hubl5tx3rd = 0U ; localDW ->
om33mzodna = d4bxpqffud ; * irmm3lmduv = 0.0 ; } else if ( ( int32_T )
ni25fleah5 . P_4 % 2 == 0 ) { localDW -> om33mzodna = g3ouo24bae ; } else {
localDW -> om33mzodna = etpv0qzcxn ; } localDW -> ijjmr3qo4e = 1U ; if (
ni25fleah5 . P_19 == 1.0 ) { localDW -> jlcsfmc3ih = edo23i1bj1 ; } else {
localDW -> jlcsfmc3ih = ibikiubzvq ; } } else { if ( localDW -> jtzo5ocjcj !=
0U ) { bkugv4lefu ( & oejmiqwoze_e , iqipezpago , kqnmub0ccs , irmm3lmduv ,
localB , localDW ) ; } if ( localDW -> ijjmr3qo4e != 0U ) { nv4qhhr4ub_p = *
irmm3lmduv ; d2vdxq3gaa_p = * iqipezpago ; bpIndices [ 0U ] = plook_binc (
d2vdxq3gaa_p , ni25fleah5 . P_7 , 3U , & oh3qvl0aun_p ) ; fractions [ 0U ] =
oh3qvl0aun_p ; bpIndices [ 1U ] = plook_binc ( nv4qhhr4ub_p , ni25fleah5 .
P_9 , 4U , & oh3qvl0aun_p ) ; fractions [ 1U ] = oh3qvl0aun_p ; bpIndices [
2U ] = plook_binc ( ni25fleah5 . P_21 , ni25fleah5 . P_8 , 1U , &
oh3qvl0aun_p ) ; fractions [ 2U ] = oh3qvl0aun_p ; nv4qhhr4ub_p = (
intrp3d_l_pw ( bpIndices , fractions , ni25fleah5 . P_10 , ni25fleah5 . P_23
) + look1_binlcapw ( nv4qhhr4ub_p , ni25fleah5 . P_9 , ni25fleah5 . P_12 , 4U
) ) + look1_binlcapw ( d2vdxq3gaa_p , ni25fleah5 . P_7 , ni25fleah5 . P_13 ,
3U ) ; localDW -> clcmyj3zq5 = 4 ; d2vdxq3gaa_p = * irmm3lmduv ; c4ntbmbc2g_p
= * iqipezpago ; bpIndices_p [ 0U ] = plook_binc ( c4ntbmbc2g_p , ni25fleah5
. P_0 , 3U , & oh3qvl0aun_p ) ; fractions_p [ 0U ] = oh3qvl0aun_p ;
bpIndices_p [ 1U ] = plook_binc ( d2vdxq3gaa_p , ni25fleah5 . P_2 , 4U , &
oh3qvl0aun_p ) ; fractions_p [ 1U ] = oh3qvl0aun_p ; bpIndices_p [ 2U ] =
plook_binc ( ni25fleah5 . P_21 , ni25fleah5 . P_1 , 1U , & oh3qvl0aun_p ) ;
fractions_p [ 2U ] = oh3qvl0aun_p ; oh3qvl0aun_p = ( intrp3d_l_pw (
bpIndices_p , fractions_p , ni25fleah5 . P_3 , ni25fleah5 . P_25 ) +
look1_binlcapw ( d2vdxq3gaa_p , ni25fleah5 . P_2 , ni25fleah5 . P_15 , 4U ) )
+ look1_binlcapw ( c4ntbmbc2g_p , ni25fleah5 . P_0 , ni25fleah5 . P_16 , 3U )
; localDW -> l52gatiaea = 4 ; switch ( localDW -> jlcsfmc3ih ) { case
fy3ou1d1zs : localDW -> o55lh2bsdf = aqtivw5r0e ; if ( localDW -> jtzo5ocjcj
!= 0U ) { bkugv4lefu ( & oejmiqwoze_e , iqipezpago , kqnmub0ccs , irmm3lmduv
, localB , localDW ) ; } localDW -> o55lh2bsdf = - 1 ; localDW -> jlcsfmc3ih
= edo23i1bj1 ; break ; case ibikiubzvq : if ( ni25fleah5 . P_19 == 1.0 ) {
localDW -> jlcsfmc3ih = edo23i1bj1 ; } break ; case edo23i1bj1 : if ( ( (
oejmiqwoze_e < oh3qvl0aun_p ) || ( localDW -> d4wwv1h2im != 0.0 ) ) && ( *
irmm3lmduv > 1.0 ) ) { localDW -> jek222xldn = 0U ; localDW -> jlcsfmc3ih =
flwccsbru3 ; } else if ( ( oejmiqwoze_e > nv4qhhr4ub_p ) && ( * irmm3lmduv <=
ni25fleah5 . P_17 - 1.0 ) && ( localB -> aeo5wmxfdm >= ni25fleah5 . P_6 ) ) {
localDW -> jek222xldn = 0U ; localDW -> jlcsfmc3ih = o013sm3esm ; } else if (
ni25fleah5 . P_19 != 1.0 ) { localDW -> jlcsfmc3ih = ibikiubzvq ; } break ;
case fkeu3el540 : localDW -> o55lh2bsdf = pxdaxvc05y ; if ( localDW ->
jtzo5ocjcj != 0U ) { bkugv4lefu ( & oejmiqwoze_e , iqipezpago , kqnmub0ccs ,
irmm3lmduv , localB , localDW ) ; } localDW -> o55lh2bsdf = - 1 ; localDW ->
jlcsfmc3ih = edo23i1bj1 ; break ; case flwccsbru3 : if ( ( localDW ->
jek222xldn >= ( uint32_T ) muDoubleScalarCeil ( localDW -> evxnx4j1pn * 100.0
) ) && ( ( oejmiqwoze_e < oh3qvl0aun_p - 2.0 ) || ( localDW -> d4wwv1h2im !=
0.0 ) ) ) { localDW -> jlcsfmc3ih = fy3ou1d1zs ; } else if ( ( oejmiqwoze_e
>= oh3qvl0aun_p ) || ( ! ( localDW -> d4wwv1h2im != 0.0 ) ) ) { localDW ->
jlcsfmc3ih = edo23i1bj1 ; } break ; case o013sm3esm : if ( ( localDW ->
jek222xldn >= ( uint32_T ) muDoubleScalarCeil ( localDW -> p2xrfjzwr5 * 100.0
) ) && ( oejmiqwoze_e > nv4qhhr4ub_p ) ) { localDW -> jlcsfmc3ih = fkeu3el540
; } else if ( ( oejmiqwoze_e <= nv4qhhr4ub_p ) || ( localDW -> d4wwv1h2im !=
0.0 ) ) { localDW -> jlcsfmc3ih = edo23i1bj1 ; } break ; default : localDW ->
jlcsfmc3ih = fu43vzbivv ; break ; } } } } void
HevP4TransmissionControllerTID1 ( kz2bup5g1r * localB ) { localB ->
aeo5wmxfdm = 9.5492965855137211 * ni25fleah5 . P_20 ; } void escpily3xw (
fb2uf2nk44 * const koyns0ezya ) { if ( ! slIsRapidAcceleratorSimulating ( ) )
{ slmrRunPluginEvent ( koyns0ezya -> _mdlRefSfcnS ,
"HevP4TransmissionController" , "SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT"
) ; } } void dqt510qa0h ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 ,
int_T mdlref_TID1 , fb2uf2nk44 * const koyns0ezya , kz2bup5g1r * localB ,
e33vsk4ebo * localDW , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { rt_InitInfAndNaN ( sizeof ( real_T )
) ; ( void ) memset ( ( void * ) koyns0ezya , 0 , sizeof ( fb2uf2nk44 ) ) ;
koyns0ezya -> Timing . mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; koyns0ezya ->
Timing . mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; koyns0ezya -> _mdlRefSfcnS =
( _mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( koyns0ezya -> _mdlRefSfcnS ,
"HevP4TransmissionController" , "START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ;
} { localB -> aeo5wmxfdm = 0.0 ; } ( void ) memset ( ( void * ) localDW , 0 ,
sizeof ( e33vsk4ebo ) ) ; localDW -> d4wwv1h2im = 0.0 ; localDW -> evxnx4j1pn
= 0.0 ; localDW -> p2xrfjzwr5 = 0.0 ;
HevP4TransmissionController_InitializeDataMapInfo ( koyns0ezya , localDW ,
sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && (
rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI ,
rt_ChildMMIIdx , & ( koyns0ezya -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath (
koyns0ezya -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( koyns0ezya -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } } void mr_HevP4TransmissionController_MdlInfoRegFcn (
SimStruct * mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal =
0 ; { boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } *
retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_HevP4TransmissionController , 63 ) ; * retVal = 1 ; } static void
mr_HevP4TransmissionController_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) ; static void
mr_HevP4TransmissionController_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) { mxArray *
newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void
mr_HevP4TransmissionController_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_HevP4TransmissionController_restoreDataFromMxArray ( void * destData
, const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy (
( uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_HevP4TransmissionController_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) ; static void
mr_HevP4TransmissionController_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j
, mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_HevP4TransmissionController_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_HevP4TransmissionController_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) { const uint_T varVal = (
uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return
varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_HevP4TransmissionController_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void
mr_HevP4TransmissionController_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_HevP4TransmissionController_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) ; static void
mr_HevP4TransmissionController_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_HevP4TransmissionController_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void
mr_HevP4TransmissionController_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_HevP4TransmissionController_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T
mr_HevP4TransmissionController_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_HevP4TransmissionController_GetDWork
( const fjvy5vdomkr * mdlrefDW ) { static const char_T * ssDWFieldNames [ 3 ]
= { "rtb" , "rtdw" , "NULL->rtzce" , } ; mxArray * ssDW =
mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_HevP4TransmissionController_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const
void * ) & ( mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb ) ) ; { static
const char_T * rtdwDataFieldNames [ 15 ] = { "mdlrefDW->rtdw.d4wwv1h2im" ,
"mdlrefDW->rtdw.evxnx4j1pn" , "mdlrefDW->rtdw.p2xrfjzwr5" ,
"mdlrefDW->rtdw.o55lh2bsdf" , "mdlrefDW->rtdw.hubl5tx3rd" ,
"mdlrefDW->rtdw.jek222xldn" , "mdlrefDW->rtdw.l52gatiaea" ,
"mdlrefDW->rtdw.clcmyj3zq5" , "mdlrefDW->rtdw.ku53qexbmd" ,
"mdlrefDW->rtdw.jtzo5ocjcj" , "mdlrefDW->rtdw.om33mzodna" ,
"mdlrefDW->rtdw.ijjmr3qo4e" , "mdlrefDW->rtdw.jlcsfmc3ih" ,
"mdlrefDW->rtdw.b0rvtl1mndg.c1eg2r0fq0" ,
"mdlrefDW->rtdw.b0rvtl1mndg.cjqejitpdt" , } ; mxArray * rtdwData =
mxCreateStructMatrix ( 1 , 1 , 15 , rtdwDataFieldNames ) ;
mr_HevP4TransmissionController_cacheDataAsMxArray ( rtdwData , 0 , 0 , (
const void * ) & ( mdlrefDW -> rtdw . d4wwv1h2im ) , sizeof ( mdlrefDW ->
rtdw . d4wwv1h2im ) ) ; mr_HevP4TransmissionController_cacheDataAsMxArray (
rtdwData , 0 , 1 , ( const void * ) & ( mdlrefDW -> rtdw . evxnx4j1pn ) ,
sizeof ( mdlrefDW -> rtdw . evxnx4j1pn ) ) ;
mr_HevP4TransmissionController_cacheDataAsMxArray ( rtdwData , 0 , 2 , (
const void * ) & ( mdlrefDW -> rtdw . p2xrfjzwr5 ) , sizeof ( mdlrefDW ->
rtdw . p2xrfjzwr5 ) ) ; mr_HevP4TransmissionController_cacheDataAsMxArray (
rtdwData , 0 , 3 , ( const void * ) & ( mdlrefDW -> rtdw . o55lh2bsdf ) ,
sizeof ( mdlrefDW -> rtdw . o55lh2bsdf ) ) ;
mr_HevP4TransmissionController_cacheDataAsMxArray ( rtdwData , 0 , 4 , (
const void * ) & ( mdlrefDW -> rtdw . hubl5tx3rd ) , sizeof ( mdlrefDW ->
rtdw . hubl5tx3rd ) ) ; mr_HevP4TransmissionController_cacheDataAsMxArray (
rtdwData , 0 , 5 , ( const void * ) & ( mdlrefDW -> rtdw . jek222xldn ) ,
sizeof ( mdlrefDW -> rtdw . jek222xldn ) ) ;
mr_HevP4TransmissionController_cacheDataAsMxArray ( rtdwData , 0 , 6 , (
const void * ) & ( mdlrefDW -> rtdw . l52gatiaea ) , sizeof ( mdlrefDW ->
rtdw . l52gatiaea ) ) ; mr_HevP4TransmissionController_cacheDataAsMxArray (
rtdwData , 0 , 7 , ( const void * ) & ( mdlrefDW -> rtdw . clcmyj3zq5 ) ,
sizeof ( mdlrefDW -> rtdw . clcmyj3zq5 ) ) ;
mr_HevP4TransmissionController_cacheDataAsMxArray ( rtdwData , 0 , 8 , (
const void * ) & ( mdlrefDW -> rtdw . ku53qexbmd ) , sizeof ( mdlrefDW ->
rtdw . ku53qexbmd ) ) ; mr_HevP4TransmissionController_cacheDataAsMxArray (
rtdwData , 0 , 9 , ( const void * ) & ( mdlrefDW -> rtdw . jtzo5ocjcj ) ,
sizeof ( mdlrefDW -> rtdw . jtzo5ocjcj ) ) ;
mr_HevP4TransmissionController_cacheDataAsMxArray ( rtdwData , 0 , 10 , (
const void * ) & ( mdlrefDW -> rtdw . om33mzodna ) , sizeof ( mdlrefDW ->
rtdw . om33mzodna ) ) ; mr_HevP4TransmissionController_cacheDataAsMxArray (
rtdwData , 0 , 11 , ( const void * ) & ( mdlrefDW -> rtdw . ijjmr3qo4e ) ,
sizeof ( mdlrefDW -> rtdw . ijjmr3qo4e ) ) ;
mr_HevP4TransmissionController_cacheDataAsMxArray ( rtdwData , 0 , 12 , (
const void * ) & ( mdlrefDW -> rtdw . jlcsfmc3ih ) , sizeof ( mdlrefDW ->
rtdw . jlcsfmc3ih ) ) ; mr_HevP4TransmissionController_cacheDataAsMxArray (
rtdwData , 0 , 13 , ( const void * ) & ( mdlrefDW -> rtdw . b0rvtl1mndg .
c1eg2r0fq0 ) , sizeof ( mdlrefDW -> rtdw . b0rvtl1mndg . c1eg2r0fq0 ) ) ;
mr_HevP4TransmissionController_cacheDataAsMxArray ( rtdwData , 0 , 14 , (
const void * ) & ( mdlrefDW -> rtdw . b0rvtl1mndg . cjqejitpdt ) , sizeof (
mdlrefDW -> rtdw . b0rvtl1mndg . cjqejitpdt ) ) ; mxSetFieldByNumber ( ssDW ,
0 , 1 , rtdwData ) ; } ( void ) mdlrefDW ; return ssDW ; } void
mr_HevP4TransmissionController_SetDWork ( fjvy5vdomkr * mdlrefDW , const
mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ;
mr_HevP4TransmissionController_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtb ) , ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const
mxArray * rtdwData = mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_HevP4TransmissionController_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . d4wwv1h2im ) , rtdwData , 0 , 0 , sizeof ( mdlrefDW ->
rtdw . d4wwv1h2im ) ) ; mr_HevP4TransmissionController_restoreDataFromMxArray
( ( void * ) & ( mdlrefDW -> rtdw . evxnx4j1pn ) , rtdwData , 0 , 1 , sizeof
( mdlrefDW -> rtdw . evxnx4j1pn ) ) ;
mr_HevP4TransmissionController_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . p2xrfjzwr5 ) , rtdwData , 0 , 2 , sizeof ( mdlrefDW ->
rtdw . p2xrfjzwr5 ) ) ; mr_HevP4TransmissionController_restoreDataFromMxArray
( ( void * ) & ( mdlrefDW -> rtdw . o55lh2bsdf ) , rtdwData , 0 , 3 , sizeof
( mdlrefDW -> rtdw . o55lh2bsdf ) ) ;
mr_HevP4TransmissionController_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . hubl5tx3rd ) , rtdwData , 0 , 4 , sizeof ( mdlrefDW ->
rtdw . hubl5tx3rd ) ) ; mr_HevP4TransmissionController_restoreDataFromMxArray
( ( void * ) & ( mdlrefDW -> rtdw . jek222xldn ) , rtdwData , 0 , 5 , sizeof
( mdlrefDW -> rtdw . jek222xldn ) ) ;
mr_HevP4TransmissionController_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . l52gatiaea ) , rtdwData , 0 , 6 , sizeof ( mdlrefDW ->
rtdw . l52gatiaea ) ) ; mr_HevP4TransmissionController_restoreDataFromMxArray
( ( void * ) & ( mdlrefDW -> rtdw . clcmyj3zq5 ) , rtdwData , 0 , 7 , sizeof
( mdlrefDW -> rtdw . clcmyj3zq5 ) ) ;
mr_HevP4TransmissionController_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ku53qexbmd ) , rtdwData , 0 , 8 , sizeof ( mdlrefDW ->
rtdw . ku53qexbmd ) ) ; mr_HevP4TransmissionController_restoreDataFromMxArray
( ( void * ) & ( mdlrefDW -> rtdw . jtzo5ocjcj ) , rtdwData , 0 , 9 , sizeof
( mdlrefDW -> rtdw . jtzo5ocjcj ) ) ;
mr_HevP4TransmissionController_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . om33mzodna ) , rtdwData , 0 , 10 , sizeof ( mdlrefDW ->
rtdw . om33mzodna ) ) ; mr_HevP4TransmissionController_restoreDataFromMxArray
( ( void * ) & ( mdlrefDW -> rtdw . ijjmr3qo4e ) , rtdwData , 0 , 11 , sizeof
( mdlrefDW -> rtdw . ijjmr3qo4e ) ) ;
mr_HevP4TransmissionController_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . jlcsfmc3ih ) , rtdwData , 0 , 12 , sizeof ( mdlrefDW ->
rtdw . jlcsfmc3ih ) ) ; mr_HevP4TransmissionController_restoreDataFromMxArray
( ( void * ) & ( mdlrefDW -> rtdw . b0rvtl1mndg . c1eg2r0fq0 ) , rtdwData , 0
, 13 , sizeof ( mdlrefDW -> rtdw . b0rvtl1mndg . c1eg2r0fq0 ) ) ;
mr_HevP4TransmissionController_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . b0rvtl1mndg . cjqejitpdt ) , rtdwData , 0 , 14 , sizeof (
mdlrefDW -> rtdw . b0rvtl1mndg . cjqejitpdt ) ) ; } } void
mr_HevP4TransmissionController_RegisterSimStateChecksum ( SimStruct * S ) {
const uint32_T chksum [ 4 ] = { 2181776542U , 2907559161U , 3066834118U ,
1677244374U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"HevP4TransmissionController" , & chksum [ 0 ] ) ; } mxArray *
mr_HevP4TransmissionController_GetSimStateDisallowedBlocks ( ) { return (
NULL ) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
