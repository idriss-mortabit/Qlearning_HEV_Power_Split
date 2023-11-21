#include "DrivetrainHevP4.h"
#include "rtwtypes.h"
#include "DrivetrainHevP4_private.h"
#include "automldiffopen_ujNuWwNk.h"
#include "mwmathutil.h"
#include "interp2_Dz8B5aYN.h"
#include <emmintrin.h>
#include "DrivetrainHevP4_capi.h"
#include "look1_binlcpw.h"
#include "look1_binlxpw.h"
#include "plook_bincpa.h"
#include "intrp1d_la_pw.h"
#include "plook_binc.h"
#include "intrp4d_l_pw.h"
#include "zero_crossing_types.h"
#include "plook_u32d_binckan.h"
#include <string.h>
#include "rt_nonfinite.h"
#define axjxyeievi ((uint8_T)2U)
#define gwkwla1ohj ((uint8_T)0U)
#define pbig2waoo0 ((uint8_T)1U)
#define dxybnkslpm ((uint8_T)1U)
#define e2hbrmeh0w ((uint8_T)2U)
#define fal3xx2xrb ((uint8_T)0U)
static RegMdlInfo rtMdlInfo_DrivetrainHevP4 [ 260 ] = { { "ax0vfd4pkg" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "nrrabe5ipx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "l4aynymont" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "dcnc2xleuj" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "glw1qhordy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "a1kadfxhlm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "pvu54otdxg" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "czvddwius0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "ilglqqvgmj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "oefd50cmgb" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "cnusb2dxse" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "knueqfvynn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "mxsazlu04j" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "gfkqwejne5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "ioj34bj4x3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "iwpxvxeqxb" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "lw31f3qy3m" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "grnubih1kl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "bz4tdbyg0y" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "cam4fexf0e" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "elra5f4qt2" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "l5ss5smuho" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "a5hgqekqbs" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "b2p5eyr5sy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "nc2yz0re2u" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "ipnwdtrgl5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "ns3yl1fkhy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "e1vu1q5qxz" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "olllitvyoz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "mwrqqgfwua" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "ped3gwkpr0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "lessjmahpg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "pszu5oshkv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "m4yebcck13" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "kpipzttqgd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "a3lxs3ajmh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "nhnmqwzrv2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "adcxxfebzi" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "ibre5dujvi" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "cqu11yoiiw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "ffzgpn5pq2" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "f2lngaco3y" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "hrv0sukee4" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "plrkbi5dmd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "eesjawh433" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "fngacwvt1l" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "enhag5dmet" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "jyek450pao" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "ocz5ewouoh" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "c4irgkxq4h" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "lbsk3pfzhl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "eldqpje5to" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "laghtdtbdh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "jgsnswz31p" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "kieevsufkd" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "jwgppcly40" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "l2jjwly1ej" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "nndc4gdzoz" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "bmtlwwfdmx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "fzcwuzw34u" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "e4m0y5yyag" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "oxkb5uzw2j" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "oytbhre2kf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "hesg3lojnr" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "idxwbd24bx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "l2etyradlg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "h0bc3qfkuv" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "cj3zgm1sca" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "p1xuepy5e3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "kjapzjjg03" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "bh323epmdf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "pbxuwzpt3r" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "ctlsi13iaa" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "lk4uvi1khn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "g4dmvp4q1n" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "f3dpku3x5m" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "ofm2fmse3j" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "pvg0j4aud3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "esh53545ti" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "nvj3mut5hc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "bwgxpflifj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "gm1f0vzmue" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "ep31uir1gb" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "e3wgsgh4bl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "oatgowdgin" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "i1egc3e5bo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "pe5ztbf4jh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "dzahz4uo2o" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "lpj4ragplm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "lod0asgoor" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "mvgl2tnqzx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "hby4yebahl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "kkcehek014" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "pcahkstfpc" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "i215lhohcc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "mxgm1uhvmj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "bh51gwwwev" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "bf1wgrpuog" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "d414r1dygg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "bi5klfhbtz" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "of35zlgtzz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "mxi4axdowd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "m2ntsuath4" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "mmfalkfbja" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "nq5qepjn4n" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "o5bo3sigty" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "kjvpkaznuq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "m0qcubrrbo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "bujsy4g3hz" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "ilznbcs31z" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "cyvqqqr04y" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "dgve3sfeei" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "i0tvltr112" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "gfvsvewld3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "jg1b4wqul2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "oszmntpvzo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "f5chniozhx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "odnqhqzox4" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "fkyi5vrwtd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "pywvutqhje" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "olh3op0jeh" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "fao0wvbafs" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "bduo4l2kzn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "bvc0wkzptk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "htjhelbcpi" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "aboxwyk5fr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "mn2klmypk0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "dcxuaghy1r" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "ngdui3hj4h" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "mei5uul1vg" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "httrpxnoync" , MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "l2xiyzkbzo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "dx3odfua53" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "a5mysw00zg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "he0w3nuwh3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "jjihdbtkak" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "o4t1ox0xnc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "dv0k21emzh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "grtkkvyzyw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "njnki40qhm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "hfpmmea0at" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "hym2trk2sa" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "f2a5ytrc5f" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "gpz52e3dwe" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "pcydpzt0ds" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "jpmowlrhtz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "f3rrpnlgwu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "kv2sxzppxj" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "eqwuvywyso" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "fwphuadlf2" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "mr20y0atts" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "f2ay4b3zfo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "fefsokrdgk" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "c0k3gywf3v" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "pcjuxpuxtd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "ojicl15012" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "goyqlvnczx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "dt0nr5gial" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "b4uxxo42uq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "ivxhlmqvi5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "ehba0b4b2q" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "cwxr2wf5bj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "d5apf4pypv" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "dmksgz1ajz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "dupy5rq5ph" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "dwspnpzpdx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "lifwnzzfkf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "dgndf5bjao" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "ouf0zfbh2j" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "kmiehcqwcy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( void * )
"Clutch" } , { "b5xhft12jc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "DrivetrainHevP4" } , { "etnvbvlupk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "gnftvwqjf3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "el2g0zdrbp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "bigtign1l3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "kyt34vrl1t" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "ksdljfak4y" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "chk5g2q1cb" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "mmd2jxhmnb" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "drfmigqpgb" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "j5chng11nc" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "m0wxghevwj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "px02myt3he" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
0 , ( void * ) "Clutch" } , { "o3l2rrwumo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "DrivetrainHevP4" } , { "porntxk5j5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "ig13vg2csm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "b3shgkl452" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "gbdizyxaee" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "lzoorlbact" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "l3xc0uiun0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "ldjhkqz15u" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "ospz1jw4tz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "lvapj2g2an" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "bgng0dfead" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "jwyspsjfk5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "pnwnqvpslj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
0 , ( void * ) "Slipping" } , { "ny514dvpzu" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "d2a5miqwi2" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "g2swf2uc1r" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "emfxosxaah" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "ijaqbv1leg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "ag5xc55qjm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "kdzhhay210" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "ju1ireyhgh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "acqumsqtox" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "fcfn4zgb1m" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( void * ) "Locked" } , {
"jdkadrm1oq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "ft4d3xjalc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "oufzhx2ll3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "ftkhxi4mss" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "iresdflse1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "cs1wforvzk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "nnt3110oa2" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "b2ywm0rdhh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "emxla55yqk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "gf1fdxvjnx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( void * )
"detectLockup" } , { "o1gokvrlgg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainHevP4" } , { "lpi40mnetf" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "ecptc0ywr3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "itn0mcebvp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "fvrsotq5m1" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "ljdzh00q43" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "mnezth1ovw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "gm224dghg1" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( void * ) "detectSlip" } , {
"hvbbd5otdv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "f52v2cgmnb" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "pcptpsmmzv" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "jiagk2fzzw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "iolxvzorxt" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "faiokapds1" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "pzkyunrhkq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "bas5jllnpj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "jvumz1wqzb" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( void * ) "Simple Magic Tire" } ,
{ "h1cger2x1l" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "mg5k1kvhf3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "jlkkdeshwg" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "gxz3jeo5hy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "hswyusfdze" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "ft55c4enh2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "mp1fk5mlqa" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "lafkasfk1x" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "hyrr1hlavl" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( void * ) "Open Differential" } ,
{ "DrivetrainHevP4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } ,
{ "mmfavsgp1q" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainHevP4" } , { "lzep320e1q" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainHevP4" } , { "oqvwukdwj0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainHevP4" } ,
{ "mr_DrivetrainHevP4_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DrivetrainHevP4" } , {
"mr_DrivetrainHevP4_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DrivetrainHevP4" } , {
"mr_DrivetrainHevP4_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DrivetrainHevP4" } , {
"mr_DrivetrainHevP4_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DrivetrainHevP4" } , {
"mr_DrivetrainHevP4_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DrivetrainHevP4" } , {
"mr_DrivetrainHevP4_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "DrivetrainHevP4" } , {
"mr_DrivetrainHevP4_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "DrivetrainHevP4" } , {
"mr_DrivetrainHevP4_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "DrivetrainHevP4" } , {
"mr_DrivetrainHevP4_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "DrivetrainHevP4" } , {
"mr_DrivetrainHevP4_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "DrivetrainHevP4" } , { "mr_DrivetrainHevP4_SetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DrivetrainHevP4" } , {
"mr_DrivetrainHevP4_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void
* ) "DrivetrainHevP4" } , { "DrivetrainHevP4.h" , MDL_INFO_MODEL_FILENAME , 0
, - 1 , ( NULL ) } , { "DrivetrainHevP4.c" , MDL_INFO_MODEL_FILENAME , 0 , -
1 , ( void * ) "DrivetrainHevP4" } } ; baykbb21q4g baykbb21q4 = { 2.46 , 0.25
, 0.0 , 0.0 , { 0.0 , 0.0 } , { 0.0 , 0.0 } , 6570.0 , 6570.0 , 0.0 , 0.0 , {
0.0 , 1.0 , 2.0 , 3.0 , 4.0 , 5.0 , 6.0 } , 0.0 , 0.8 , 0.8 , 0.01 , 0.01 ,
0.2 , { 0.009 , 0.01 , 0.01 , 0.01 , 0.01 , 0.01 , 0.01 } , 0.01 , 0.01 ,
0.01 , 0.01 , 0.01 , 1.0 , 10000.0 , 0.15 , 0.15 , { 1.0 , 4.212 , 2.637 ,
1.8 , 1.386 , 1.0 , 0.772 } , 2.0 , 2.0 , 3.32 , 4.1 , 101325.0 , 287.058 ,
0.0 , 0.0 , 0.327 , 0.327 , 0.11 , 0.15 , 0.15 , 300.0 , { 313.0 , 358.0 } ,
{ 25.0 , 50.0 , 75.0 , 100.0 , 150.0 , 200.0 , 250.0 } , 0.336 , 0.336 , 2.0
, 2.0 , 1.09 , 0.01 , 0.01 , 0.0 , 0.0 , 400.0 , 400.0 , 1.7 , 400.0 , 400.0
, 0.0 , 0.0 , 0.001 , 0.001 , 1.0 , 1.0 , { - 1.0 , 1.0 } , 0.001 , { 0.003 ,
0.003 , 0.003 , 0.003 , 0.003 , 0.003 , 0.003 } , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.0 , 0.0 , 1.0 , 0.05 , 0.05 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.98 , 0.98 , { 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 ,
0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766
, 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 ,
0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766
, 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 ,
0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766
, 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 ,
0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766
, 0.766 , 0.766 , 0.766 , 0.766 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596
, 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 ,
0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 ,
0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 ,
0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 ,
0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 ,
0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 ,
0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 ,
0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 ,
0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.504
, 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 ,
0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504
, 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 ,
0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504
, 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 ,
0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504
, 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 ,
0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504
, 0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.917 , 0.917 , 0.917 , 0.917 ,
0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917
, 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 ,
0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917
, 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 ,
0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917
, 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 ,
0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917
, 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.9224 , 0.9224 , 0.9224 ,
0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 ,
0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 ,
0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 ,
0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 ,
0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 ,
0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 ,
0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 ,
0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 ,
0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 ,
0.9224 , 0.9224 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 ,
0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 ,
0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 ,
0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 ,
0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 ,
0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 ,
0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 ,
0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 ,
0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 ,
0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.766 , 0.766
, 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 ,
0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766
, 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 ,
0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766
, 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 ,
0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766
, 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 ,
0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 , 0.766 ,
0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 ,
0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 ,
0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 ,
0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 ,
0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 ,
0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 ,
0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 ,
0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 ,
0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 ,
0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.4596 , 0.504 , 0.504 , 0.504 , 0.504 ,
0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504
, 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 ,
0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504
, 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 ,
0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504
, 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 ,
0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504
, 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.504 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.98119000000000012 , 0.98119000000000012 ,
0.98119000000000012 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 ,
0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917
, 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 ,
0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917
, 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 ,
0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917
, 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 ,
0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917 , 0.917
, 0.917 , 0.917 , 0.917 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224
, 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 ,
0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 ,
0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 ,
0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 ,
0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 ,
0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 ,
0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 ,
0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 ,
0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9224 , 0.9124 ,
0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 ,
0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 ,
0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 ,
0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 ,
0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 ,
0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 ,
0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 ,
0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 ,
0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 , 0.9124 ,
0.9124 , 0.9124 , 0.9124 , 0.9124 } , 9.81 , 0.5 , 10000.0 , 10000.0 ,
10000.0 , 10000.0 , 1.5 , 1.5 , 1.0 , 1.0 , 1623.0 , 0.35 , 0.35 , 0.45 ,
0.45 , 0.4 , 0.45 , 2.0 , 2.0 , 0.0 , { 500.38314108091896 , 749.619781962827
, 1002.6761414789406 , 1250.9578527022975 , 1499.239563925654 ,
1747.5212751490108 , 1995.8029863723675 , 2501.915705404595 ,
2998.479127851308 , 4001.1552693302488 , 5003.83141080919 } , 500.0 , 500.0 ,
500.0 , 500.0 , 0.0 , 0.0 , 94.247779607693786 , 0.0 , 0.0 , 0.0 ,
83.775804095727821 , 0.0 , 0.0 , 0.0 , 0.0 , { 0.0 , 0.5 , 0.6 , 0.7 , 0.8 ,
0.87 , 0.92 , 0.94 , 0.96 , 0.97 } , 0.85 , 234400.0 , 234400.0 , { 12.2938 ,
12.8588 , 13.1452 , 13.6285 , 14.6163 , 16.2675 , 19.3503 , 22.1046 , 29.9986
, 50.0 } , 0.6 , 0.1 , 0.08 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0E-6 , 1.0E-6 , 1.0 ,
10.0 , 10.0 , 0.0 , 0.0 , { 2.232 , 1.5462 , 1.4058 , 1.2746 , 1.1528 ,
1.0732 , 1.0192 , 0.9983 , 0.9983 , 0.9983 } , 0.0 , 20.0 , 4.0 , 0.5 , 0.0 ,
20.0 , 4.0 , 0.5 , - 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 0.0 , 20.0 , 4.0 , 0.5 , - 1.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 1.0 , 0.0 , 1.0 , 1.0 , 1.0 , 1.0 , 0.0 , 0.0 , 5000.0 , - 5000.0 , 0.0
, 0.0 , 1.0 , 0.0 , 0.0 , 0.15915494309189535 , 0.0 , 2.2204460492503131E-16
, 0.0 , 5000.0 , - 5000.0 , 5000.0 , - 5000.0 , 4.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
1.0 , 1.0 , 1.0 , - 1.0 , 1.0 , 0.0 , 0.0 , 0.0 , - 1.0 , 0.6 , 0.0 ,
2.2204460492503131E-16 , 0.0 , 0.0 , 0.0 , - 1.0 , 0.4 , 0.0 ,
2.2204460492503131E-16 , { 0.0 , 0.0 } , { - 1.0 , 1.0 } , { 4.0 , 4.0 , 0.0
} , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 2.2204460492503131E-16 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 6.0 ,
0.0 , - 0.5 , 0.5 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 5000.0 , - 5000.0 , 5000.0 , - 5000.0 , 0.5 , 0.0 , 20.0 , 4.0 , 0.5 , 0.0
, 20.0 , 4.0 , 0.5 , 0.0 , 20.0 , 4.0 , 0.5 , 0.5 , 0.0 , 20.0 , 4.0 , 0.5 ,
0.0 , 20.0 , 4.0 , 0.5 , 0.0 , 20.0 , 4.0 , 0.5 , { 0.0 , 0.0 , 0.0 } , { 0.0
, 0.0 , 0.0 } , 0.0 , 0.0 , 0.0 , 0.0 , { 0.0 , 0.0 , 1.0 } , 1.0 , 1.0 , 0.0
, 1.0 , 6.2831853071795862 , 1.0 , 313.0 , 6.2831853071795862 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 0.0 , 0.0 ,
2.2204460492503131E-16 , 1.0 , 1.65 , 10.0 , 0.01 , { 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 } , { 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 10000.0 , 1.0E+6 , { 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 } ,
{ 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.78539816339744828 ,
0.0 , 0.0 , 2.2204460492503131E-16 , 1.0 , 1.65 , 10.0 , 0.01 , { 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0
} , { 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 10000.0 , 1.0E+6 , { 0.0 , 0.0 , 0.0 } , { 0.0 ,
0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 ,
0.78539816339744828 , { 6U , 10U , 6U , 1U } , { 1U , 7U , 77U , 539U } , {
6U , 10U , 6U , 1U } , { 1U , 7U , 77U , 539U } , 9U , 9U , false , { false ,
true , false , false , true , true , true , false } , true , false , 0U , { {
{ - 4.0 } , { 0.0 , 0.0 , 0.0 } , { 0.0 , false , false , { false , true ,
false , false , true , true , true , false } } , { false } } } , { { { - 4.0
} , { 0.0 , 0.0 , 0.0 } , { 0.0 , false , false , { false , true , false ,
false , true , true , true , false } } , { false } } } , { 1.0 } , { 1.0 } }
; static real_T o2rb5o1ldf ( real_T kappa , real_T Vx , real_T Fz , real_T
b_gamma , real_T LONGVL , real_T FNOMIN , real_T b_FZMIN , real_T b_FZMAX ,
real_T press , real_T NOMPRES , real_T PRESMIN , real_T PRESMAX , real_T PCX1
, real_T PDX1 , real_T PDX2 , real_T PDX3 , real_T PEX1 , real_T PEX2 ,
real_T PEX3 , real_T PEX4 , real_T PKX1 , real_T PKX2 , real_T PKX3 , real_T
PHX1 , real_T PHX2 , real_T PVX1 , real_T PVX2 , real_T PPX1 , real_T PPX2 ,
real_T PPX3 , real_T PPX4 , real_T lam_Fzo , real_T lam_muV , real_T lam_mux
, real_T lam_Kxkappa , real_T lam_Cx , real_T lam_Ex , real_T lam_Hx , real_T
lam_Vx ) ; static boolean_T dn4csssigh ( real_T Tout , real_T Tfmaxs ,
mvgl2tnqzx * localB , lod0asgoor * localDW ) ; static boolean_T ietdmt2goc (
real_T Tout , real_T Tfmaxs , mvgl2tnqzx * localB , lod0asgoor * localDW ,
lpj4ragplm * localP ) ; static boolean_T oaijgua1nq ( real_T Tout , real_T
Tfmaxs , mxsazlu04j * localB , knueqfvynn * localDW ) ; static boolean_T
ehzjr30qbw ( real_T Tout , real_T Tfmaxs , mxsazlu04j * localB , knueqfvynn *
localDW , cnusb2dxse * localP ) ; void hyrr1hlavl ( real_T d0diki5mh3 ,
real_T ejqkswypbk , real_T l2obkox1rs , real_T jmabamgcq3 , real_T elawr3k43n
, real_T cyxzu3jzne , real_T namstxom5s , real_T gipvlr4btd , real_T
n4kc2akovl , real_T lbaswz2zzo , const real_T n33pp5g4p5 [ 2 ] , mei5uul1vg *
localB , dcxuaghy1r * localP ) { real_T a__2 [ 3 ] ; localB -> dyrezqdlbd [ 0
] = d0diki5mh3 ; localB -> dyrezqdlbd [ 1 ] = ejqkswypbk ; localB ->
dyrezqdlbd [ 2 ] = l2obkox1rs ; if ( localP -> P_0 == 1.0 ) {
automldiffopen_ujNuWwNk ( localB -> dyrezqdlbd , jmabamgcq3 , elawr3k43n ,
cyxzu3jzne , namstxom5s , 1.0 , gipvlr4btd , n4kc2akovl , lbaswz2zzo ,
n33pp5g4p5 , a__2 , localB -> gnestwek04 ) ; } else { automldiffopen_ujNuWwNk
( localB -> dyrezqdlbd , jmabamgcq3 , elawr3k43n , cyxzu3jzne , namstxom5s ,
0.0 , gipvlr4btd , n4kc2akovl , lbaswz2zzo , n33pp5g4p5 , a__2 , localB ->
gnestwek04 ) ; } } static real_T o2rb5o1ldf ( real_T kappa , real_T Vx ,
real_T Fz , real_T b_gamma , real_T LONGVL , real_T FNOMIN , real_T b_FZMIN ,
real_T b_FZMAX , real_T press , real_T NOMPRES , real_T PRESMIN , real_T
PRESMAX , real_T PCX1 , real_T PDX1 , real_T PDX2 , real_T PDX3 , real_T PEX1
, real_T PEX2 , real_T PEX3 , real_T PEX4 , real_T PKX1 , real_T PKX2 ,
real_T PKX3 , real_T PHX1 , real_T PHX2 , real_T PVX1 , real_T PVX2 , real_T
PPX1 , real_T PPX2 , real_T PPX3 , real_T PPX4 , real_T lam_Fzo , real_T
lam_muV , real_T lam_mux , real_T lam_Kxkappa , real_T lam_Cx , real_T lam_Ex
, real_T lam_Hx , real_T lam_Vx ) { real_T Cx ; real_T Cx_tmp ; real_T a__1 ;
real_T b_idx_0 ; real_T dfz ; real_T dpi ; real_T f_idx_0 ; real_T h_idx_0 ;
real_T j_idx_0 ; real_T kappa_x ; real_T lam_mux_star ; b_idx_0 = Fz ; if (
Fz < b_FZMIN ) { b_idx_0 = b_FZMIN ; } if ( b_idx_0 > b_FZMAX ) { b_idx_0 =
b_FZMAX ; } dpi = press ; if ( press < PRESMIN ) { dpi = PRESMIN ; } if ( dpi
> PRESMAX ) { dpi = PRESMAX ; } dpi = ( dpi - NOMPRES ) / NOMPRES ; dfz = (
b_idx_0 - FNOMIN * lam_Fzo ) / FNOMIN * lam_Fzo ; kappa_x = ( PHX2 * dfz +
PHX1 ) * lam_Hx + kappa ; lam_mux_star = - muDoubleScalarAbs ( Vx ) * kappa ;
lam_mux_star = lam_mux / ( muDoubleScalarSqrt ( lam_mux_star * lam_mux_star )
* lam_muV / LONGVL + 1.0 ) ; Cx = PCX1 * lam_Cx ; f_idx_0 = Cx ; if ( Cx <
0.0 ) { f_idx_0 = 0.0 ; } Cx_tmp = dpi * dpi ; Cx = ( ( PPX3 * dpi + 1.0 ) +
Cx_tmp * PPX4 ) * ( PDX2 * dfz + PDX1 ) * ( 1.0 - b_gamma * b_gamma * PDX3 )
* lam_mux_star * b_idx_0 ; h_idx_0 = Cx ; if ( Cx < 0.0 ) { h_idx_0 = 0.0 ; }
Cx = ( ( PEX2 * dfz + PEX1 ) + dfz * dfz * PEX3 ) * ( 1.0 -
muDoubleScalarTanh ( 10.0 * kappa_x ) * PEX4 ) * lam_Ex ; j_idx_0 = Cx ; if (
Cx > 1.0 ) { j_idx_0 = 1.0 ; } Cx = f_idx_0 * h_idx_0 ; a__1 =
muDoubleScalarAbs ( Cx ) ; if ( a__1 < 0.1 ) { a__1 /= 0.1 ; a__1 = 0.2 / (
3.0 - a__1 * a__1 ) ; } if ( Cx < 0.0 ) { a__1 = - a__1 ; } dpi = ( PKX2 *
dfz + PKX1 ) * b_idx_0 * muDoubleScalarExp ( PKX3 * dfz ) * ( ( PPX1 * dpi +
1.0 ) + Cx_tmp * PPX2 ) * lam_Kxkappa / a__1 ; dpi *= kappa_x ; return
muDoubleScalarSin ( muDoubleScalarAtan ( dpi - ( dpi - muDoubleScalarAtan (
dpi ) ) * j_idx_0 ) * f_idx_0 ) * h_idx_0 + ( PVX2 * dfz + PVX1 ) * b_idx_0 *
( lam_mux_star * 10.0 / ( 9.0 * lam_mux_star + 1.0 ) ) * lam_Vx ; } void
jvumz1wqzb ( real_T e32hqmxcik , real_T g4yiqgzlfz , real_T bm31o0lmcy ,
real_T fbrcp1gcla , real_T bpq5ic21qp , real_T gijpxs2bjg , real_T jlieuueiew
, real_T gman1fkyaa , real_T ii1xlm3r5g , const real_T pta3jbcakl [ 34 ] ,
const real_T i4bb0tkvyk [ 3 ] , const real_T bktnd0kqxc [ 3 ] , const real_T
gb2xsiivlc [ 9 ] , real_T pdglkljozc , real_T fpvghkhkpp , real_T lyweobwsbg
, real_T ceopf1y5fb , real_T pwio4ydq4p , real_T l4oixmwf4q , real_T
ojjddhxxgt , real_T hr51er3xcr , real_T c1dpgwnvgy , real_T ncoudnoynq ,
real_T i0h1xhuyo5 , real_T a315m1shrb , real_T kzik1edfww , real_T ceu0tixjpi
, real_T a0pvwafjqk , real_T mfamzdtbra , const real_T b25dw0u5yz [ 3 ] ,
const real_T ovwuqgqkz0 [ 3 ] , const real_T efbftymzw5 [ 9 ] , real_T
krinwnuhlt , real_T ezg3ffxbav , real_T jmo4bvlw0n , real_T pfb4qkioav ,
real_T fzmenqhfu1 , real_T fwb4rozpgo , real_T iwcsd0po4j , real_T dhup20fpaw
, real_T jnkjdxxtim , real_T ddpr3vduzj , real_T ll31ao3h51 , real_T
mdrwilcnr5 , real_T lvjin1kgg2 , real_T f5o1nqecto , real_T foe3koqshe ,
real_T eyv23wmgz0 , real_T byfhhk5ony , real_T lztqoge5ru , real_T m23cfkuvqb
, real_T njlfhlvaeh , real_T ipscuov1rg , real_T hmzrfzxtzf , real_T
hhqjcdfhky , real_T gcw0awhbma , real_T j12ddjtvwd , real_T ccj0lhktdw ,
real_T mq3asuq45a , real_T rtp_FZMAX , real_T rtp_FZMIN , real_T rtp_VXLOW ,
real_T rtp_kappamax , f5chniozhx * localB ) { real_T gb2xsiivlc_p [ 9 ] ;
real_T Re ; real_T Vxpabs_tmp ; real_T h_idx_0 ; real_T i_idx_0 ; real_T
m_idx_0 ; int32_T i ; localB -> hzgu5jfdz4 [ 0 ] = bpq5ic21qp ; localB ->
hzgu5jfdz4 [ 1 ] = gijpxs2bjg ; localB -> hzgu5jfdz4 [ 2 ] = jlieuueiew ;
localB -> hzgu5jfdz4 [ 3 ] = gman1fkyaa ; localB -> hzgu5jfdz4 [ 4 ] =
ii1xlm3r5g ; localB -> n4ygn5s3it [ 0 ] = pdglkljozc ; localB -> n4ygn5s3it [
1 ] = fpvghkhkpp ; localB -> n4ygn5s3it [ 2 ] = lyweobwsbg ; localB ->
n4ygn5s3it [ 3 ] = ceopf1y5fb ; localB -> n4ygn5s3it [ 4 ] = pwio4ydq4p ;
localB -> n4ygn5s3it [ 5 ] = l4oixmwf4q ; localB -> n4ygn5s3it [ 6 ] =
ojjddhxxgt ; localB -> n4ygn5s3it [ 7 ] = hr51er3xcr ; localB -> n4ygn5s3it [
8 ] = c1dpgwnvgy ; localB -> n4ygn5s3it [ 9 ] = ncoudnoynq ; localB ->
n4ygn5s3it [ 10 ] = i0h1xhuyo5 ; localB -> n4ygn5s3it [ 11 ] = a315m1shrb ;
localB -> n4ygn5s3it [ 12 ] = kzik1edfww ; localB -> n4ygn5s3it [ 13 ] =
ceu0tixjpi ; localB -> n4ygn5s3it [ 14 ] = a0pvwafjqk ; localB -> n4ygn5s3it
[ 15 ] = mfamzdtbra ; localB -> flvdifijue [ 0 ] = pdglkljozc ; localB ->
flvdifijue [ 1 ] = ezg3ffxbav ; localB -> flvdifijue [ 2 ] = jmo4bvlw0n ;
localB -> flvdifijue [ 3 ] = pfb4qkioav ; localB -> flvdifijue [ 4 ] =
fzmenqhfu1 ; localB -> flvdifijue [ 5 ] = fwb4rozpgo ; localB -> flvdifijue [
6 ] = iwcsd0po4j ; localB -> flvdifijue [ 7 ] = dhup20fpaw ; localB ->
flvdifijue [ 8 ] = jnkjdxxtim ; localB -> flvdifijue [ 9 ] = ddpr3vduzj ;
localB -> flvdifijue [ 10 ] = ll31ao3h51 ; localB -> flvdifijue [ 11 ] =
mdrwilcnr5 ; localB -> flvdifijue [ 12 ] = lvjin1kgg2 ; localB -> flvdifijue
[ 13 ] = f5o1nqecto ; localB -> flvdifijue [ 14 ] = foe3koqshe ; localB ->
flvdifijue [ 15 ] = eyv23wmgz0 ; localB -> flvdifijue [ 16 ] = byfhhk5ony ;
localB -> flvdifijue [ 17 ] = lztqoge5ru ; localB -> flvdifijue [ 18 ] =
m23cfkuvqb ; localB -> flvdifijue [ 19 ] = njlfhlvaeh ; localB -> flvdifijue
[ 20 ] = ipscuov1rg ; localB -> flvdifijue [ 21 ] = hmzrfzxtzf ; localB ->
flvdifijue [ 22 ] = hhqjcdfhky ; localB -> flvdifijue [ 23 ] = gcw0awhbma ;
switch ( ( int32_T ) mq3asuq45a ) { case 0 : Re = e32hqmxcik ; break ; case 1
: Re = 0.0 * muDoubleScalarAbs ( bm31o0lmcy ) + krinwnuhlt ; if ( Re < 0.001
) { Re = 0.001 ; } break ; case 2 : Re = e32hqmxcik ; break ; default : Re =
e32hqmxcik ; break ; } Vxpabs_tmp = muDoubleScalarAbs ( fbrcp1gcla ) ;
h_idx_0 = Vxpabs_tmp ; if ( Vxpabs_tmp < rtp_VXLOW ) { h_idx_0 = Vxpabs_tmp /
rtp_VXLOW ; h_idx_0 = 2.0 * rtp_VXLOW / ( 3.0 - h_idx_0 * h_idx_0 ) ; }
h_idx_0 = ( e32hqmxcik * bm31o0lmcy - fbrcp1gcla ) / h_idx_0 ; if ( h_idx_0 <
- rtp_kappamax ) { h_idx_0 = - rtp_kappamax ; } if ( h_idx_0 > rtp_kappamax )
{ h_idx_0 = rtp_kappamax ; } switch ( ( int32_T ) j12ddjtvwd ) { case 0 :
i_idx_0 = g4yiqgzlfz ; if ( g4yiqgzlfz < rtp_FZMIN ) { i_idx_0 = rtp_FZMIN ;
} if ( i_idx_0 > rtp_FZMAX ) { i_idx_0 = rtp_FZMAX ; } h_idx_0 *= localB ->
hzgu5jfdz4 [ 2 ] ; h_idx_0 = muDoubleScalarSin ( muDoubleScalarAtan ( h_idx_0
- ( h_idx_0 - muDoubleScalarAtan ( h_idx_0 ) ) * localB -> hzgu5jfdz4 [ 3 ] )
* localB -> hzgu5jfdz4 [ 1 ] ) * localB -> hzgu5jfdz4 [ 0 ] * ( i_idx_0 *
localB -> hzgu5jfdz4 [ 4 ] ) ; break ; case 2 : h_idx_0 = o2rb5o1ldf (
h_idx_0 , fbrcp1gcla , g4yiqgzlfz , pta3jbcakl [ 0 ] , pta3jbcakl [ 1 ] ,
pta3jbcakl [ 2 ] , rtp_FZMIN , rtp_FZMAX , pta3jbcakl [ 3 ] , pta3jbcakl [ 4
] , pta3jbcakl [ 5 ] , pta3jbcakl [ 6 ] , pta3jbcakl [ 7 ] , pta3jbcakl [ 8 ]
, pta3jbcakl [ 9 ] , pta3jbcakl [ 10 ] , pta3jbcakl [ 11 ] , pta3jbcakl [ 12
] , pta3jbcakl [ 13 ] , pta3jbcakl [ 14 ] , pta3jbcakl [ 15 ] , pta3jbcakl [
16 ] , pta3jbcakl [ 17 ] , pta3jbcakl [ 18 ] , pta3jbcakl [ 19 ] , pta3jbcakl
[ 20 ] , pta3jbcakl [ 21 ] , pta3jbcakl [ 22 ] , pta3jbcakl [ 23 ] ,
pta3jbcakl [ 24 ] , pta3jbcakl [ 25 ] , pta3jbcakl [ 26 ] , pta3jbcakl [ 27 ]
, pta3jbcakl [ 28 ] , pta3jbcakl [ 29 ] , pta3jbcakl [ 30 ] , pta3jbcakl [ 31
] , pta3jbcakl [ 32 ] , pta3jbcakl [ 33 ] ) ; break ; case 3 : i_idx_0 =
g4yiqgzlfz ; if ( g4yiqgzlfz < rtp_FZMIN ) { i_idx_0 = rtp_FZMIN ; } if (
i_idx_0 > rtp_FZMAX ) { i_idx_0 = rtp_FZMAX ; } for ( i = 0 ; i < 3 ; i ++ )
{ gb2xsiivlc_p [ 3 * i ] = gb2xsiivlc [ i ] ; gb2xsiivlc_p [ 3 * i + 1 ] =
gb2xsiivlc [ i + 3 ] ; gb2xsiivlc_p [ 3 * i + 2 ] = gb2xsiivlc [ i + 6 ] ; }
h_idx_0 = interp2_Dz8B5aYN ( i4bb0tkvyk , bktnd0kqxc , gb2xsiivlc_p , h_idx_0
, i_idx_0 ) * localB -> hzgu5jfdz4 [ 4 ] ; break ; default : h_idx_0 = 0.0 ;
break ; } switch ( ( int32_T ) ccj0lhktdw ) { case 0 : localB -> bkv4f44vnh =
0.0 ; break ; case 1 : i_idx_0 = localB -> n4ygn5s3it [ 0 ] ; if ( localB ->
n4ygn5s3it [ 0 ] < localB -> n4ygn5s3it [ 14 ] ) { i_idx_0 = localB ->
n4ygn5s3it [ 14 ] ; } if ( i_idx_0 > localB -> n4ygn5s3it [ 15 ] ) { i_idx_0
= localB -> n4ygn5s3it [ 15 ] ; } m_idx_0 = g4yiqgzlfz ; if ( g4yiqgzlfz <
rtp_FZMIN ) { m_idx_0 = rtp_FZMIN ; } if ( m_idx_0 > rtp_FZMAX ) { m_idx_0 =
rtp_FZMAX ; } localB -> bkv4f44vnh = ( ( localB -> n4ygn5s3it [ 4 ] *
Vxpabs_tmp + localB -> n4ygn5s3it [ 3 ] ) + fbrcp1gcla * fbrcp1gcla * localB
-> n4ygn5s3it [ 5 ] ) * ( muDoubleScalarTanh ( bm31o0lmcy ) * Re ) * (
muDoubleScalarPower ( m_idx_0 , localB -> n4ygn5s3it [ 9 ] ) *
muDoubleScalarPower ( i_idx_0 , localB -> n4ygn5s3it [ 10 ] ) ) ; break ;
case 2 : i_idx_0 = localB -> n4ygn5s3it [ 0 ] ; if ( localB -> n4ygn5s3it [ 0
] < localB -> n4ygn5s3it [ 14 ] ) { i_idx_0 = localB -> n4ygn5s3it [ 14 ] ; }
if ( i_idx_0 > localB -> n4ygn5s3it [ 15 ] ) { i_idx_0 = localB -> n4ygn5s3it
[ 15 ] ; } m_idx_0 = g4yiqgzlfz ; if ( g4yiqgzlfz < 0.0 ) { m_idx_0 = 0.0 ; }
if ( m_idx_0 > rtp_FZMAX ) { m_idx_0 = rtp_FZMAX ; } localB -> bkv4f44vnh = (
( ( ( localB -> n4ygn5s3it [ 4 ] * h_idx_0 / localB -> n4ygn5s3it [ 1 ] +
localB -> n4ygn5s3it [ 3 ] ) + muDoubleScalarAbs ( fbrcp1gcla / 16.7 ) *
localB -> n4ygn5s3it [ 5 ] ) + muDoubleScalarPower ( fbrcp1gcla / 16.7 , 4.0
) * localB -> n4ygn5s3it [ 6 ] ) + ( m_idx_0 * localB -> n4ygn5s3it [ 8 ] /
localB -> n4ygn5s3it [ 1 ] + localB -> n4ygn5s3it [ 7 ] ) * ( localB ->
n4ygn5s3it [ 11 ] * localB -> n4ygn5s3it [ 11 ] ) ) * ( muDoubleScalarTanh (
bm31o0lmcy ) * m_idx_0 * localB -> n4ygn5s3it [ 13 ] ) * (
muDoubleScalarPower ( m_idx_0 / localB -> n4ygn5s3it [ 1 ] , localB ->
n4ygn5s3it [ 9 ] ) * muDoubleScalarPower ( i_idx_0 / localB -> n4ygn5s3it [ 2
] , localB -> n4ygn5s3it [ 10 ] ) ) * localB -> n4ygn5s3it [ 12 ] ; break ;
case 3 : i_idx_0 = g4yiqgzlfz ; if ( g4yiqgzlfz < 0.0 ) { i_idx_0 = 0.0 ; }
if ( i_idx_0 > rtp_FZMAX ) { i_idx_0 = rtp_FZMAX ; } for ( i = 0 ; i < 3 ; i
++ ) { gb2xsiivlc_p [ 3 * i ] = efbftymzw5 [ i ] ; gb2xsiivlc_p [ 3 * i + 1 ]
= efbftymzw5 [ i + 3 ] ; gb2xsiivlc_p [ 3 * i + 2 ] = efbftymzw5 [ i + 6 ] ;
} localB -> bkv4f44vnh = - ( muDoubleScalarTanh ( bm31o0lmcy ) *
interp2_Dz8B5aYN ( b25dw0u5yz , ovwuqgqkz0 , gb2xsiivlc_p , fbrcp1gcla ,
i_idx_0 ) ) ; break ; case 4 : i_idx_0 = localB -> n4ygn5s3it [ 0 ] ; if (
localB -> n4ygn5s3it [ 0 ] < localB -> n4ygn5s3it [ 14 ] ) { i_idx_0 = localB
-> n4ygn5s3it [ 14 ] ; } if ( i_idx_0 > localB -> n4ygn5s3it [ 15 ] ) {
i_idx_0 = localB -> n4ygn5s3it [ 15 ] ; } m_idx_0 = g4yiqgzlfz ; if (
g4yiqgzlfz < rtp_FZMIN ) { m_idx_0 = rtp_FZMIN ; } if ( m_idx_0 > rtp_FZMAX )
{ m_idx_0 = rtp_FZMAX ; } localB -> bkv4f44vnh = - ( ( m_idx_0 * localB ->
n4ygn5s3it [ 4 ] * 0.001 / ( ( i_idx_0 - localB -> n4ygn5s3it [ 6 ] ) *
localB -> n4ygn5s3it [ 5 ] + 1.0 ) + localB -> n4ygn5s3it [ 3 ] ) * ( -
muDoubleScalarTanh ( bm31o0lmcy ) * Re ) ) ; break ; default : localB ->
bkv4f44vnh = 0.0 ; break ; } localB -> gpm5eaqmyj = h_idx_0 ; } void
itn0mcebvp ( pvg0j4aud3 * localB , f3dpku3x5m * localP ) { localB ->
gbots353vs = localP -> P_0 ; } void ljdzh00q43 ( pvg0j4aud3 * localB ) {
localB -> gbots353vs = false ; } void gm224dghg1 ( real_T jsbsy3xvhe , real_T
brc22koind , pvg0j4aud3 * localB , ofm2fmse3j * localDW ) { localB ->
gbots353vs = ( muDoubleScalarAbs ( jsbsy3xvhe ) >= brc22koind ) ; localDW ->
akhjbcdors = 4 ; } void cs1wforvzk ( idxwbd24bx * localB , hesg3lojnr *
localDW , oytbhre2kf * localP ) { localDW -> pf0qopor1e = localP -> P_2 ;
localB -> h3eqmn5teq = localP -> P_1 ; } void b2ywm0rdhh ( idxwbd24bx *
localB ) { localB -> h3eqmn5teq = false ; localB -> lx42h0kmkr = 0.0 ; } void
gf1fdxvjnx ( real_T kkfitefieh , real_T odflcaqp0d , idxwbd24bx * localB ,
hesg3lojnr * localDW , oytbhre2kf * localP ) { localB -> h3eqmn5teq = localP
-> P_3 [ ( ( ( uint32_T ) ( muDoubleScalarAbs ( ( ( 0.0 - kkfitefieh ) -
localB -> lx42h0kmkr ) + localB -> lx42h0kmkr ) >= odflcaqp0d ) + ( (
uint32_T ) ( muDoubleScalarAbs ( - kkfitefieh ) <= odflcaqp0d ) << 1 ) ) << 1
) + localDW -> pf0qopor1e ] ; localDW -> pf0qopor1e = localB -> h3eqmn5teq ;
localDW -> b0whoil2mj = 4 ; } void gf1fdxvjnxTID2 ( real_T rtp_br ,
idxwbd24bx * localB , oytbhre2kf * localP ) { localB -> lx42h0kmkr = rtp_br *
localP -> P_0 ; } void ijaqbv1leg ( oqvwukdwj0 * const ivyyfeoocu ) { if (
rtmGetTaskTime ( ivyyfeoocu , 0 ) != rtmGetTStart ( ivyyfeoocu ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( ivyyfeoocu -> _mdlRefSfcnS ) ; }
} void emfxosxaah ( oqvwukdwj0 * const ivyyfeoocu ) {
ssSetBlockStateForSolverChangedAtMajorStep ( ivyyfeoocu -> _mdlRefSfcnS ) ; }
void ju1ireyhgh ( real_T * ohcxkhnddc , real_T * abwgninsl2 , real_T *
b40zuskg0v , real_T * doqjgmeyjy ) { * ohcxkhnddc = 0.0 ; * abwgninsl2 = 0.0
; * b40zuskg0v = 0.0 ; * doqjgmeyjy = 0.0 ; } void fcfn4zgb1m ( oqvwukdwj0 *
const ivyyfeoocu , real_T ao4bcuyqyf , real_T * ohcxkhnddc , real_T *
abwgninsl2 , real_T * b40zuskg0v , real_T * doqjgmeyjy , c4irgkxq4h * localP
) { * ohcxkhnddc = - ao4bcuyqyf ; if ( rtmIsMajorTimeStep ( ivyyfeoocu ) &&
rtmIsSampleHit ( ivyyfeoocu , 1 , 0 ) ) { * abwgninsl2 = localP -> P_0 ; *
b40zuskg0v = localP -> P_1 ; * doqjgmeyjy = localP -> P_2 ; } } void
ospz1jw4tz ( real_T rtp_omegao , pszu5oshkv * localX ) { localX -> o31yfqchat
= rtp_omegao ; } void gbdizyxaee ( oqvwukdwj0 * const ivyyfeoocu , ped3gwkpr0
* localXdis ) { if ( rtmGetTaskTime ( ivyyfeoocu , 0 ) != rtmGetTStart (
ivyyfeoocu ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( ivyyfeoocu ->
_mdlRefSfcnS ) ; } ( void ) memset ( & ( localXdis -> o31yfqchat ) , 0 , 1 *
sizeof ( boolean_T ) ) ; } void b3shgkl452 ( oqvwukdwj0 * const ivyyfeoocu ,
ped3gwkpr0 * localXdis ) { ssSetBlockStateForSolverChangedAtMajorStep (
ivyyfeoocu -> _mdlRefSfcnS ) ; ( void ) memset ( & ( localXdis -> o31yfqchat
) , 1 , 1 * sizeof ( boolean_T ) ) ; } void bgng0dfead ( real_T * n25s4rnzle
, real_T * fotmkurbja , real_T * pn21eijkzx , real_T * eiyqnu5b23 ,
ibre5dujvi * localB ) { localB -> ohogcchg4x = 0.0 ; localB -> mxgu00gy3b =
0.0 ; localB -> nagwv0qb3m = 0.0 ; localB -> c3hlqh1x0j = 0.0 ; * eiyqnu5b23
= 0.0 ; * n25s4rnzle = 0.0 ; localB -> d4pvsnuxbh = 0.0 ; localB ->
eyxyh4dlxh = 0.0 ; * fotmkurbja = 0.0 ; * pn21eijkzx = 0.0 ; } void
pnwnqvpslj ( real_T ojopfjv3df , real_T n42uqbks0p , real_T * n25s4rnzle ,
real_T * fotmkurbja , real_T * pn21eijkzx , real_T * eiyqnu5b23 , real_T
rtp_br , real_T rtp_Iyy , ibre5dujvi * localB , nhnmqwzrv2 * localP ,
pszu5oshkv * localX ) { real_T tmp ; localB -> ohogcchg4x = localX ->
o31yfqchat ; localB -> mxgu00gy3b = localP -> P_0 * localB -> ohogcchg4x ;
localB -> nagwv0qb3m = ojopfjv3df * muDoubleScalarTanh ( localB -> mxgu00gy3b
) ; localB -> c3hlqh1x0j = rtp_br * localB -> ohogcchg4x ; * eiyqnu5b23 =
localB -> c3hlqh1x0j ; * n25s4rnzle = localB -> ohogcchg4x ; localB ->
d4pvsnuxbh = ( localB -> nagwv0qb3m - n42uqbks0p ) - localB -> c3hlqh1x0j ;
tmp = 1.0 / rtp_Iyy ; localB -> eyxyh4dlxh = tmp * localB -> d4pvsnuxbh ; *
fotmkurbja = localB -> eyxyh4dlxh ; * pn21eijkzx = localB -> d4pvsnuxbh ; }
void lzoorlbact ( ibre5dujvi * localB , lessjmahpg * localXdot ) { localXdot
-> o31yfqchat = localB -> eyxyh4dlxh ; } static boolean_T dn4csssigh ( real_T
Tout , real_T Tfmaxs , mvgl2tnqzx * localB , lod0asgoor * localDW ) {
boolean_T b_yn ; gm224dghg1 ( Tout , Tfmaxs , & localB -> gm224dghg1i , &
localDW -> gm224dghg1i ) ; b_yn = localB -> gm224dghg1i . gbots353vs ; return
b_yn ; } static boolean_T ietdmt2goc ( real_T Tout , real_T Tfmaxs ,
mvgl2tnqzx * localB , lod0asgoor * localDW , lpj4ragplm * localP ) {
boolean_T b_yn ; gf1fdxvjnx ( Tout , Tfmaxs , & localB -> gf1fdxvjnxm , &
localDW -> gf1fdxvjnxm , & localP -> gf1fdxvjnxm ) ; b_yn = localB ->
gf1fdxvjnxm . h3eqmn5teq ; return b_yn ; } void mmd2jxhmnb ( real_T
rtp_omegao , mvgl2tnqzx * localB , lod0asgoor * localDW , lpj4ragplm * localP
, oatgowdgin * localX ) { localDW -> budmlwrz5d = 0U ; localDW -> gt3cxlciul
= gwkwla1ohj ; localB -> eapq4cihew = 0.0 ; localB -> aihsek3hsz = 0.0 ;
localB -> pcqqdv331l = 0.0 ; localB -> mwotjr1kqm = 0.0 ; itn0mcebvp ( &
localB -> gm224dghg1i , & localP -> gm224dghg1i ) ; cs1wforvzk ( & localB ->
gf1fdxvjnxm , & localDW -> gf1fdxvjnxm , & localP -> gf1fdxvjnxm ) ;
ospz1jw4tz ( rtp_omegao , & localX -> pnwnqvpsljv ) ; } void chk5g2q1cb (
mvgl2tnqzx * localB , lod0asgoor * localDW ) { localDW -> budmlwrz5d = 0U ;
localDW -> gt3cxlciul = gwkwla1ohj ; localB -> eapq4cihew = 0.0 ; localB ->
aihsek3hsz = 0.0 ; localB -> pcqqdv331l = 0.0 ; localB -> mwotjr1kqm = 0.0 ;
} void bigtign1l3 ( oqvwukdwj0 * const ivyyfeoocu , lod0asgoor * localDW ,
ep31uir1gb * localXdis ) { if ( localDW -> gt3cxlciul == pbig2waoo0 ) {
ijaqbv1leg ( ivyyfeoocu ) ; } if ( localDW -> gt3cxlciul == axjxyeievi ) {
gbdizyxaee ( ivyyfeoocu , & localXdis -> pnwnqvpsljv ) ; } } void el2g0zdrbp
( oqvwukdwj0 * const ivyyfeoocu , lod0asgoor * localDW , ep31uir1gb *
localXdis ) { if ( localDW -> gt3cxlciul == pbig2waoo0 ) { emfxosxaah (
ivyyfeoocu ) ; } if ( localDW -> gt3cxlciul == axjxyeievi ) { b3shgkl452 (
ivyyfeoocu , & localXdis -> pnwnqvpsljv ) ; } } void j5chng11nc ( mvgl2tnqzx
* localB ) { localB -> eapq4cihew = 0.0 ; localB -> aihsek3hsz = 0.0 ; localB
-> mwotjr1kqm = 0.0 ; localB -> pcqqdv331l = 0.0 ; ju1ireyhgh ( & localB ->
mwotjr1kqm , & localB -> eapq4cihew , & localB -> aihsek3hsz , & localB ->
pcqqdv331l ) ; ljdzh00q43 ( & localB -> gm224dghg1i ) ; b2ywm0rdhh ( & localB
-> gf1fdxvjnxm ) ; bgng0dfead ( & localB -> eapq4cihew , & localB ->
aihsek3hsz , & localB -> mwotjr1kqm , & localB -> pcqqdv331l , & localB ->
pnwnqvpsljv ) ; } void px02myt3he ( oqvwukdwj0 * const ivyyfeoocu , real_T
efeu1kmwm1 , real_T hwn3xib13c , real_T psoblxm5zn , real_T rtp_omegao ,
real_T rtp_br , real_T rtp_Iyy , real_T rtp_OmegaTol , mvgl2tnqzx * localB ,
lod0asgoor * localDW , lpj4ragplm * localP , oatgowdgin * localX , ep31uir1gb
* localXdis ) { if ( ssIsModeUpdateTimeStep ( ivyyfeoocu -> _mdlRefSfcnS ) )
{ localDW -> cc4y0uq4r0 = rtmGetTaskTime ( ivyyfeoocu , 0 ) ; if ( localDW ->
budmlwrz5d == 0U ) { localDW -> budmlwrz5d = 1U ; localX -> pnwnqvpsljv .
o31yfqchat = rtp_omegao ; localDW -> gt3cxlciul = axjxyeievi ; gbdizyxaee (
ivyyfeoocu , & localXdis -> pnwnqvpsljv ) ; pnwnqvpslj ( psoblxm5zn ,
efeu1kmwm1 , & localB -> eapq4cihew , & localB -> aihsek3hsz , & localB ->
mwotjr1kqm , & localB -> pcqqdv331l , rtp_br , rtp_Iyy , & localB ->
pnwnqvpsljv , & localP -> pnwnqvpsljv , & localX -> pnwnqvpsljv ) ; localDW
-> fjpdvl1pgq = true ; ssSetBlockStateForSolverChangedAtMajorStep (
ivyyfeoocu -> _mdlRefSfcnS ) ; } else if ( localDW -> gt3cxlciul ==
pbig2waoo0 ) { if ( dn4csssigh ( efeu1kmwm1 , hwn3xib13c , localB , localDW )
) { localX -> pnwnqvpsljv . o31yfqchat = 0.0 ; localDW -> pwwhqetnzc = false
; emfxosxaah ( ivyyfeoocu ) ; localDW -> gt3cxlciul = axjxyeievi ; gbdizyxaee
( ivyyfeoocu , & localXdis -> pnwnqvpsljv ) ; pnwnqvpslj ( psoblxm5zn ,
efeu1kmwm1 , & localB -> eapq4cihew , & localB -> aihsek3hsz , & localB ->
mwotjr1kqm , & localB -> pcqqdv331l , rtp_br , rtp_Iyy , & localB ->
pnwnqvpsljv , & localP -> pnwnqvpsljv , & localX -> pnwnqvpsljv ) ; localDW
-> fjpdvl1pgq = true ; ssSetBlockStateForSolverChangedAtMajorStep (
ivyyfeoocu -> _mdlRefSfcnS ) ; } } else if ( ietdmt2goc ( efeu1kmwm1 ,
hwn3xib13c , localB , localDW , localP ) && ( muDoubleScalarAbs ( localB ->
eapq4cihew ) <= rtp_OmegaTol ) ) { localDW -> fjpdvl1pgq = false ; b3shgkl452
( ivyyfeoocu , & localXdis -> pnwnqvpsljv ) ; localDW -> gt3cxlciul =
pbig2waoo0 ; ijaqbv1leg ( ivyyfeoocu ) ; fcfn4zgb1m ( ivyyfeoocu , efeu1kmwm1
, & localB -> mwotjr1kqm , & localB -> eapq4cihew , & localB -> aihsek3hsz ,
& localB -> pcqqdv331l , & localP -> fcfn4zgb1m0 ) ; localDW -> pwwhqetnzc =
true ; ssSetBlockStateForSolverChangedAtMajorStep ( ivyyfeoocu ->
_mdlRefSfcnS ) ; } } if ( localDW -> gt3cxlciul == pbig2waoo0 ) { if ( !
localDW -> pwwhqetnzc ) { fcfn4zgb1m ( ivyyfeoocu , efeu1kmwm1 , & localB ->
mwotjr1kqm , & localB -> eapq4cihew , & localB -> aihsek3hsz , & localB ->
pcqqdv331l , & localP -> fcfn4zgb1m0 ) ; } else { localDW -> pwwhqetnzc =
false ; } } else if ( ! localDW -> fjpdvl1pgq ) { pnwnqvpslj ( psoblxm5zn ,
efeu1kmwm1 , & localB -> eapq4cihew , & localB -> aihsek3hsz , & localB ->
mwotjr1kqm , & localB -> pcqqdv331l , rtp_br , rtp_Iyy , & localB ->
pnwnqvpsljv , & localP -> pnwnqvpsljv , & localX -> pnwnqvpsljv ) ; } else {
localDW -> fjpdvl1pgq = false ; } } void px02myt3heTID2 ( real_T rtp_br ,
mvgl2tnqzx * localB , lpj4ragplm * localP ) { gf1fdxvjnxTID2 ( rtp_br , &
localB -> gf1fdxvjnxm , & localP -> gf1fdxvjnxm ) ; } void kyt34vrl1t (
mvgl2tnqzx * localB , lod0asgoor * localDW , e3wgsgh4bl * localXdot ) {
localXdot -> pnwnqvpsljv . o31yfqchat = 0.0 ; if ( localDW -> gt3cxlciul ==
axjxyeievi ) { lzoorlbact ( & localB -> pnwnqvpsljv , & localXdot ->
pnwnqvpsljv ) ; } if ( localDW -> gt3cxlciul == pbig2waoo0 ) { if ( localDW
-> pwwhqetnzc ) { localDW -> pwwhqetnzc = false ; } } else if ( localDW ->
fjpdvl1pgq ) { localDW -> fjpdvl1pgq = false ; } } static boolean_T
oaijgua1nq ( real_T Tout , real_T Tfmaxs , mxsazlu04j * localB , knueqfvynn *
localDW ) { boolean_T b_yn ; gm224dghg1 ( Tout , Tfmaxs , & localB ->
khilm44itf , & localDW -> khilm44itf ) ; b_yn = localB -> khilm44itf .
gbots353vs ; return b_yn ; } static boolean_T ehzjr30qbw ( real_T Tout ,
real_T Tfmaxs , mxsazlu04j * localB , knueqfvynn * localDW , cnusb2dxse *
localP ) { boolean_T b_yn ; gf1fdxvjnx ( Tout , Tfmaxs , & localB ->
gtmuxhbejy , & localDW -> gtmuxhbejy , & localP -> gtmuxhbejy ) ; b_yn =
localB -> gtmuxhbejy . h3eqmn5teq ; return b_yn ; } void dwspnpzpdx ( real_T
rtp_omegao , mxsazlu04j * localB , knueqfvynn * localDW , cnusb2dxse * localP
, pvu54otdxg * localX ) { localDW -> aymfqvghll = 0U ; localDW -> igqncywq3x
= fal3xx2xrb ; localB -> eqhtfgp440 = 0.0 ; localB -> hssankyiux = 0.0 ;
localB -> ewugpkowc4 = 0.0 ; localB -> hjk4kail3m = 0.0 ; itn0mcebvp ( &
localB -> khilm44itf , & localP -> khilm44itf ) ; cs1wforvzk ( & localB ->
gtmuxhbejy , & localDW -> gtmuxhbejy , & localP -> gtmuxhbejy ) ; ospz1jw4tz
( rtp_omegao , & localX -> h2plpnu3mt ) ; } void dupy5rq5ph ( mxsazlu04j *
localB , knueqfvynn * localDW ) { localDW -> aymfqvghll = 0U ; localDW ->
igqncywq3x = fal3xx2xrb ; localB -> eqhtfgp440 = 0.0 ; localB -> hssankyiux =
0.0 ; localB -> ewugpkowc4 = 0.0 ; localB -> hjk4kail3m = 0.0 ; } void
cwxr2wf5bj ( oqvwukdwj0 * const ivyyfeoocu , knueqfvynn * localDW ,
glw1qhordy * localXdis ) { if ( localDW -> igqncywq3x == dxybnkslpm ) {
ijaqbv1leg ( ivyyfeoocu ) ; } if ( localDW -> igqncywq3x == e2hbrmeh0w ) {
gbdizyxaee ( ivyyfeoocu , & localXdis -> h2plpnu3mt ) ; } } void ehba0b4b2q (
oqvwukdwj0 * const ivyyfeoocu , knueqfvynn * localDW , glw1qhordy * localXdis
) { if ( localDW -> igqncywq3x == dxybnkslpm ) { emfxosxaah ( ivyyfeoocu ) ;
} if ( localDW -> igqncywq3x == e2hbrmeh0w ) { b3shgkl452 ( ivyyfeoocu , &
localXdis -> h2plpnu3mt ) ; } } void dgndf5bjao ( mxsazlu04j * localB ) {
localB -> eqhtfgp440 = 0.0 ; localB -> hssankyiux = 0.0 ; localB ->
hjk4kail3m = 0.0 ; localB -> ewugpkowc4 = 0.0 ; ju1ireyhgh ( & localB ->
hjk4kail3m , & localB -> eqhtfgp440 , & localB -> hssankyiux , & localB ->
ewugpkowc4 ) ; ljdzh00q43 ( & localB -> khilm44itf ) ; b2ywm0rdhh ( & localB
-> gtmuxhbejy ) ; bgng0dfead ( & localB -> eqhtfgp440 , & localB ->
hssankyiux , & localB -> hjk4kail3m , & localB -> ewugpkowc4 , & localB ->
h2plpnu3mt ) ; } void kmiehcqwcy ( oqvwukdwj0 * const ivyyfeoocu , real_T
hhkvoalkgo , real_T hlbxdumzm1 , real_T bjr0h50nho , real_T rtp_omegao ,
real_T rtp_br , real_T rtp_Iyy , real_T rtp_OmegaTol , mxsazlu04j * localB ,
knueqfvynn * localDW , cnusb2dxse * localP , pvu54otdxg * localX , glw1qhordy
* localXdis ) { if ( ssIsModeUpdateTimeStep ( ivyyfeoocu -> _mdlRefSfcnS ) )
{ localDW -> msturv5mf2 = rtmGetTaskTime ( ivyyfeoocu , 0 ) ; if ( localDW ->
aymfqvghll == 0U ) { localDW -> aymfqvghll = 1U ; localX -> h2plpnu3mt .
o31yfqchat = rtp_omegao ; localDW -> igqncywq3x = e2hbrmeh0w ; gbdizyxaee (
ivyyfeoocu , & localXdis -> h2plpnu3mt ) ; pnwnqvpslj ( bjr0h50nho ,
hhkvoalkgo , & localB -> eqhtfgp440 , & localB -> hssankyiux , & localB ->
hjk4kail3m , & localB -> ewugpkowc4 , rtp_br , rtp_Iyy , & localB ->
h2plpnu3mt , & localP -> h2plpnu3mt , & localX -> h2plpnu3mt ) ; localDW ->
fj5msgkhuw = true ; ssSetBlockStateForSolverChangedAtMajorStep ( ivyyfeoocu
-> _mdlRefSfcnS ) ; } else if ( localDW -> igqncywq3x == dxybnkslpm ) { if (
oaijgua1nq ( hhkvoalkgo , hlbxdumzm1 , localB , localDW ) ) { localX ->
h2plpnu3mt . o31yfqchat = 0.0 ; localDW -> gzd2sy5gbk = false ; emfxosxaah (
ivyyfeoocu ) ; localDW -> igqncywq3x = e2hbrmeh0w ; gbdizyxaee ( ivyyfeoocu ,
& localXdis -> h2plpnu3mt ) ; pnwnqvpslj ( bjr0h50nho , hhkvoalkgo , & localB
-> eqhtfgp440 , & localB -> hssankyiux , & localB -> hjk4kail3m , & localB ->
ewugpkowc4 , rtp_br , rtp_Iyy , & localB -> h2plpnu3mt , & localP ->
h2plpnu3mt , & localX -> h2plpnu3mt ) ; localDW -> fj5msgkhuw = true ;
ssSetBlockStateForSolverChangedAtMajorStep ( ivyyfeoocu -> _mdlRefSfcnS ) ; }
} else if ( ehzjr30qbw ( hhkvoalkgo , hlbxdumzm1 , localB , localDW , localP
) && ( muDoubleScalarAbs ( localB -> eqhtfgp440 ) <= rtp_OmegaTol ) ) {
localDW -> fj5msgkhuw = false ; b3shgkl452 ( ivyyfeoocu , & localXdis ->
h2plpnu3mt ) ; localDW -> igqncywq3x = dxybnkslpm ; ijaqbv1leg ( ivyyfeoocu )
; fcfn4zgb1m ( ivyyfeoocu , hhkvoalkgo , & localB -> hjk4kail3m , & localB ->
eqhtfgp440 , & localB -> hssankyiux , & localB -> ewugpkowc4 , & localP ->
iqoij5snsx ) ; localDW -> gzd2sy5gbk = true ;
ssSetBlockStateForSolverChangedAtMajorStep ( ivyyfeoocu -> _mdlRefSfcnS ) ; }
} if ( localDW -> igqncywq3x == dxybnkslpm ) { if ( ! localDW -> gzd2sy5gbk )
{ fcfn4zgb1m ( ivyyfeoocu , hhkvoalkgo , & localB -> hjk4kail3m , & localB ->
eqhtfgp440 , & localB -> hssankyiux , & localB -> ewugpkowc4 , & localP ->
iqoij5snsx ) ; } else { localDW -> gzd2sy5gbk = false ; } } else if ( !
localDW -> fj5msgkhuw ) { pnwnqvpslj ( bjr0h50nho , hhkvoalkgo , & localB ->
eqhtfgp440 , & localB -> hssankyiux , & localB -> hjk4kail3m , & localB ->
ewugpkowc4 , rtp_br , rtp_Iyy , & localB -> h2plpnu3mt , & localP ->
h2plpnu3mt , & localX -> h2plpnu3mt ) ; } else { localDW -> fj5msgkhuw =
false ; } } void kmiehcqwcyTID2 ( real_T rtp_br , mxsazlu04j * localB ,
cnusb2dxse * localP ) { gf1fdxvjnxTID2 ( rtp_br , & localB -> gtmuxhbejy , &
localP -> gtmuxhbejy ) ; } void d5apf4pypv ( mxsazlu04j * localB , knueqfvynn
* localDW , a1kadfxhlm * localXdot ) { localXdot -> h2plpnu3mt . o31yfqchat =
0.0 ; if ( localDW -> igqncywq3x == e2hbrmeh0w ) { lzoorlbact ( & localB ->
h2plpnu3mt , & localXdot -> h2plpnu3mt ) ; } if ( localDW -> igqncywq3x ==
dxybnkslpm ) { if ( localDW -> gzd2sy5gbk ) { localDW -> gzd2sy5gbk = false ;
} } else if ( localDW -> fj5msgkhuw ) { localDW -> fj5msgkhuw = false ; } }
void c0k3gywf3v ( oqvwukdwj0 * const ivyyfeoocu , real_T * angnzwuao0 ,
gpz52e3dwe * localB , f2a5ytrc5f * localDW , dv0k21emzh * localX ) { int32_T
acw3aaqgin ; int32_T mftmtr3bb1 ; boolean_T tmp ; localX -> fzwsn2jmhl =
baykbb21q4 . P_140 ; localX -> e0iug524d1 = baykbb21q4 . P_205 ; localDW ->
a05qxnyi0a = baykbb21q4 . P_206 ; localDW -> pdphadbq31 = 1 ; if (
rtmIsFirstInitCond ( ivyyfeoocu ) ) { localX -> ci1kkjexs5 = 0.0 ; tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
ivyyfeoocu -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
ivyyfeoocu -> _mdlRefSfcnS ) ) ; localDW -> pdphadbq31 = ! tmp ; } else {
localDW -> pdphadbq31 = 1 ; } localX -> kuyuzmfdlw = 0.0 ; } localX ->
j4b4mw5go4 = baykbb21q4 . P_130 ; localX -> iym4havdyu = baykbb21q4 . P_207 ;
localX -> ojbokxhqxh = baykbb21q4 . P_212 ; localDW -> kai0m0e2ew =
baykbb21q4 . P_213 ; localDW -> ghexlrxee4 = 1 ; if ( rtmIsFirstInitCond (
ivyyfeoocu ) ) { tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp
= ( slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
ivyyfeoocu -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
ivyyfeoocu -> _mdlRefSfcnS ) ) ; localDW -> ghexlrxee4 = ! tmp ; } else {
localDW -> ghexlrxee4 = 1 ; } localX -> asdzcbvawm = 0.0 ; } localX ->
lqa034fanw = baykbb21q4 . P_131 ; localX -> pwwnn4rpgi = baykbb21q4 . P_214 ;
localX -> fvzlzvmibc [ 0 ] = baykbb21q4 . P_222 ; localX -> fvzlzvmibc [ 1 ]
= baykbb21q4 . P_222 ; localX -> evnnue2pdp = baykbb21q4 . P_140 ; localX ->
i1kwothjwq = baykbb21q4 . P_139 ; localDW -> hgsyk0bc45 = baykbb21q4 . P_224
; localDW -> mofqbaru1g = 1 ; if ( rtmIsFirstInitCond ( ivyyfeoocu ) ) { tmp
= slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
ivyyfeoocu -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
ivyyfeoocu -> _mdlRefSfcnS ) ) ; localDW -> mofqbaru1g = ! tmp ; } else {
localDW -> mofqbaru1g = 1 ; } localX -> atiz2s5la3 = 0.0 ; } localX ->
dwubb510sy = baykbb21q4 . P_132 ; localDW -> d4jrbui4i1 = baykbb21q4 . P_225
; localDW -> nmkn0jbvty = 1 ; if ( rtmIsFirstInitCond ( ivyyfeoocu ) ) { tmp
= slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
ivyyfeoocu -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
ivyyfeoocu -> _mdlRefSfcnS ) ) ; localDW -> nmkn0jbvty = ! tmp ; } else {
localDW -> nmkn0jbvty = 1 ; } localX -> ds1yb3kwf1 = 0.0 ; } localDW ->
lwg3p0cdvf = baykbb21q4 . P_444 ; localDW -> duvopzo5hi = baykbb21q4 . P_242
; localDW -> fp1iusufwe = 1 ; if ( rtmIsFirstInitCond ( ivyyfeoocu ) ) { tmp
= slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
ivyyfeoocu -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
ivyyfeoocu -> _mdlRefSfcnS ) ) ; localDW -> fp1iusufwe = ! tmp ; } else {
localDW -> fp1iusufwe = 1 ; } localX -> ievyscdcrq = 0.0 ; } localDW ->
la5hpljke2 = baykbb21q4 . P_249 ; localDW -> fp0ancafza = 1 ; if (
rtmIsFirstInitCond ( ivyyfeoocu ) ) { tmp = slIsRapidAcceleratorSimulating (
) ; if ( tmp ) { tmp = ( slIsRapidAcceleratorSimulating ( ) ?
ssGetGlobalInitialStatesAvailable ( ivyyfeoocu -> _mdlRefSfcnS ) :
simTgtGlobalInitialStatesAvailable ( ivyyfeoocu -> _mdlRefSfcnS ) ) ; localDW
-> fp0ancafza = ! tmp ; } else { localDW -> fp0ancafza = 1 ; } localX ->
hh1fbq041v [ 0 ] = 0.0 ; localX -> hh1fbq041v [ 1 ] = 0.0 ; } localX ->
ibw2wgocuq = baykbb21q4 . P_133 ; localDW -> go4nltk2qq = 1 ; if (
rtmIsFirstInitCond ( ivyyfeoocu ) ) { tmp = slIsRapidAcceleratorSimulating (
) ; if ( tmp ) { tmp = ( slIsRapidAcceleratorSimulating ( ) ?
ssGetGlobalInitialStatesAvailable ( ivyyfeoocu -> _mdlRefSfcnS ) :
simTgtGlobalInitialStatesAvailable ( ivyyfeoocu -> _mdlRefSfcnS ) ) ; localDW
-> go4nltk2qq = ! tmp ; } else { localDW -> go4nltk2qq = 1 ; } localX ->
g4a4nx25kp [ 0 ] = 0.0 ; localX -> g4a4nx25kp [ 1 ] = 0.0 ; } localDW ->
lmofltzpch = 1 ; if ( rtmIsFirstInitCond ( ivyyfeoocu ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
ivyyfeoocu -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
ivyyfeoocu -> _mdlRefSfcnS ) ) ; localDW -> lmofltzpch = ! tmp ; } else {
localDW -> lmofltzpch = 1 ; } } for ( mftmtr3bb1 = 0 ; mftmtr3bb1 < 1 ;
mftmtr3bb1 ++ ) { mmd2jxhmnb ( baykbb21q4 . P_114 , & localB -> lhmuy0r2mt [
mftmtr3bb1 ] . mwc1d4al3c , & localDW -> lhmuy0r2mt [ mftmtr3bb1 ] .
mwc1d4al3c , & baykbb21q4 . lhmuy0r2mt . mwc1d4al3c , & localX -> lhmuy0r2mt
[ mftmtr3bb1 ] . mwc1d4al3c ) ; } for ( acw3aaqgin = 0 ; acw3aaqgin < 1 ;
acw3aaqgin ++ ) { dwspnpzpdx ( baykbb21q4 . P_115 , & localB -> oodask1ixq [
acw3aaqgin ] . mifpjkvj4c , & localDW -> oodask1ixq [ acw3aaqgin ] .
mifpjkvj4c , & baykbb21q4 . oodask1ixq . mifpjkvj4c , & localX -> oodask1ixq
[ acw3aaqgin ] . mifpjkvj4c ) ; } localDW -> lq4git1asr = 1 ; if (
rtmIsFirstInitCond ( ivyyfeoocu ) ) { localX -> mlndfk2ces = 0.0 ; tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
ivyyfeoocu -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
ivyyfeoocu -> _mdlRefSfcnS ) ) ; localDW -> lq4git1asr = ! tmp ; } else {
localDW -> lq4git1asr = 1 ; } localX -> au0xgwt5db = 0.0 ; } localDW ->
ftanrlzxqu = 1 ; if ( rtmIsFirstInitCond ( ivyyfeoocu ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
ivyyfeoocu -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
ivyyfeoocu -> _mdlRefSfcnS ) ) ; localDW -> ftanrlzxqu = ! tmp ; } else {
localDW -> ftanrlzxqu = 1 ; } localX -> ghortk2b5p = 0.0 ; } localDW ->
cs3aeuofig = 1 ; if ( rtmIsFirstInitCond ( ivyyfeoocu ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
ivyyfeoocu -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
ivyyfeoocu -> _mdlRefSfcnS ) ) ; localDW -> cs3aeuofig = ! tmp ; } else {
localDW -> cs3aeuofig = 1 ; } localX -> m4rqj3hpvj = 0.0 ; } localX ->
dgkffoehk2 = baykbb21q4 . P_186 ; localB -> pj5zsfb4kd = baykbb21q4 . P_185 ;
* angnzwuao0 = baykbb21q4 . P_234 ; localDW -> m0azm0ihsg = 1 ; if (
rtmIsFirstInitCond ( ivyyfeoocu ) ) { tmp = slIsRapidAcceleratorSimulating (
) ; if ( tmp ) { tmp = ( slIsRapidAcceleratorSimulating ( ) ?
ssGetGlobalInitialStatesAvailable ( ivyyfeoocu -> _mdlRefSfcnS ) :
simTgtGlobalInitialStatesAvailable ( ivyyfeoocu -> _mdlRefSfcnS ) ) ; localDW
-> m0azm0ihsg = ! tmp ; } else { localDW -> m0azm0ihsg = 1 ; } localX ->
kahcvzwgxd = 0.0 ; } localDW -> g0lhf5n0k0 = 1 ; if ( rtmIsFirstInitCond (
ivyyfeoocu ) ) { tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp
= ( slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
ivyyfeoocu -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
ivyyfeoocu -> _mdlRefSfcnS ) ) ; localDW -> g0lhf5n0k0 = ! tmp ; } else {
localDW -> g0lhf5n0k0 = 1 ; } localX -> jk1yalfhod = 0.0 ; } localDW ->
byy0jx5dbt = 1 ; if ( rtmIsFirstInitCond ( ivyyfeoocu ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
ivyyfeoocu -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
ivyyfeoocu -> _mdlRefSfcnS ) ) ; localDW -> byy0jx5dbt = ! tmp ; } else {
localDW -> byy0jx5dbt = 1 ; } } } void fefsokrdgk ( oqvwukdwj0 * const
ivyyfeoocu , gpz52e3dwe * localB , f2a5ytrc5f * localDW , dv0k21emzh * localX
) { int32_T acw3aaqgin ; int32_T mftmtr3bb1 ; boolean_T tmp ; localX ->
fzwsn2jmhl = baykbb21q4 . P_140 ; localX -> e0iug524d1 = baykbb21q4 . P_205 ;
localDW -> a05qxnyi0a = baykbb21q4 . P_206 ; localDW -> pdphadbq31 = 1 ; if (
rtmIsFirstInitCond ( ivyyfeoocu ) ) { localX -> ci1kkjexs5 = 0.0 ; tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
ivyyfeoocu -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
ivyyfeoocu -> _mdlRefSfcnS ) ) ; localDW -> pdphadbq31 = ! tmp ; } else {
localDW -> pdphadbq31 = 1 ; } localX -> kuyuzmfdlw = 0.0 ; } localX ->
j4b4mw5go4 = baykbb21q4 . P_130 ; localX -> iym4havdyu = baykbb21q4 . P_207 ;
localX -> ojbokxhqxh = baykbb21q4 . P_212 ; localDW -> kai0m0e2ew =
baykbb21q4 . P_213 ; localDW -> ghexlrxee4 = 1 ; if ( rtmIsFirstInitCond (
ivyyfeoocu ) ) { tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp
= ( slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
ivyyfeoocu -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
ivyyfeoocu -> _mdlRefSfcnS ) ) ; localDW -> ghexlrxee4 = ! tmp ; } else {
localDW -> ghexlrxee4 = 1 ; } localX -> asdzcbvawm = 0.0 ; } localX ->
lqa034fanw = baykbb21q4 . P_131 ; localX -> pwwnn4rpgi = baykbb21q4 . P_214 ;
localX -> fvzlzvmibc [ 0 ] = baykbb21q4 . P_222 ; localX -> fvzlzvmibc [ 1 ]
= baykbb21q4 . P_222 ; localX -> evnnue2pdp = baykbb21q4 . P_140 ; localX ->
i1kwothjwq = baykbb21q4 . P_139 ; localDW -> hgsyk0bc45 = baykbb21q4 . P_224
; localDW -> mofqbaru1g = 1 ; if ( rtmIsFirstInitCond ( ivyyfeoocu ) ) { tmp
= slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
ivyyfeoocu -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
ivyyfeoocu -> _mdlRefSfcnS ) ) ; localDW -> mofqbaru1g = ! tmp ; } else {
localDW -> mofqbaru1g = 1 ; } localX -> atiz2s5la3 = 0.0 ; } localX ->
dwubb510sy = baykbb21q4 . P_132 ; localDW -> d4jrbui4i1 = baykbb21q4 . P_225
; localDW -> nmkn0jbvty = 1 ; if ( rtmIsFirstInitCond ( ivyyfeoocu ) ) { tmp
= slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
ivyyfeoocu -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
ivyyfeoocu -> _mdlRefSfcnS ) ) ; localDW -> nmkn0jbvty = ! tmp ; } else {
localDW -> nmkn0jbvty = 1 ; } localX -> ds1yb3kwf1 = 0.0 ; } localDW ->
lwg3p0cdvf = baykbb21q4 . P_444 ; localDW -> duvopzo5hi = baykbb21q4 . P_242
; localDW -> fp1iusufwe = 1 ; if ( rtmIsFirstInitCond ( ivyyfeoocu ) ) { tmp
= slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
ivyyfeoocu -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
ivyyfeoocu -> _mdlRefSfcnS ) ) ; localDW -> fp1iusufwe = ! tmp ; } else {
localDW -> fp1iusufwe = 1 ; } localX -> ievyscdcrq = 0.0 ; } localDW ->
la5hpljke2 = baykbb21q4 . P_249 ; localDW -> fp0ancafza = 1 ; if (
rtmIsFirstInitCond ( ivyyfeoocu ) ) { tmp = slIsRapidAcceleratorSimulating (
) ; if ( tmp ) { tmp = ( slIsRapidAcceleratorSimulating ( ) ?
ssGetGlobalInitialStatesAvailable ( ivyyfeoocu -> _mdlRefSfcnS ) :
simTgtGlobalInitialStatesAvailable ( ivyyfeoocu -> _mdlRefSfcnS ) ) ; localDW
-> fp0ancafza = ! tmp ; } else { localDW -> fp0ancafza = 1 ; } localX ->
hh1fbq041v [ 0 ] = 0.0 ; localX -> hh1fbq041v [ 1 ] = 0.0 ; } localX ->
ibw2wgocuq = baykbb21q4 . P_133 ; localDW -> go4nltk2qq = 1 ; if (
rtmIsFirstInitCond ( ivyyfeoocu ) ) { tmp = slIsRapidAcceleratorSimulating (
) ; if ( tmp ) { tmp = ( slIsRapidAcceleratorSimulating ( ) ?
ssGetGlobalInitialStatesAvailable ( ivyyfeoocu -> _mdlRefSfcnS ) :
simTgtGlobalInitialStatesAvailable ( ivyyfeoocu -> _mdlRefSfcnS ) ) ; localDW
-> go4nltk2qq = ! tmp ; } else { localDW -> go4nltk2qq = 1 ; } localX ->
g4a4nx25kp [ 0 ] = 0.0 ; localX -> g4a4nx25kp [ 1 ] = 0.0 ; } localDW ->
lmofltzpch = 1 ; if ( rtmIsFirstInitCond ( ivyyfeoocu ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
ivyyfeoocu -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
ivyyfeoocu -> _mdlRefSfcnS ) ) ; localDW -> lmofltzpch = ! tmp ; } else {
localDW -> lmofltzpch = 1 ; } } for ( mftmtr3bb1 = 0 ; mftmtr3bb1 < 1 ;
mftmtr3bb1 ++ ) { chk5g2q1cb ( & localB -> lhmuy0r2mt [ mftmtr3bb1 ] .
mwc1d4al3c , & localDW -> lhmuy0r2mt [ mftmtr3bb1 ] . mwc1d4al3c ) ; } for (
acw3aaqgin = 0 ; acw3aaqgin < 1 ; acw3aaqgin ++ ) { dupy5rq5ph ( & localB ->
oodask1ixq [ acw3aaqgin ] . mifpjkvj4c , & localDW -> oodask1ixq [ acw3aaqgin
] . mifpjkvj4c ) ; } } void eqwuvywyso ( oqvwukdwj0 * const ivyyfeoocu ,
f2a5ytrc5f * localDW , jjihdbtkak * localXdis ) { int32_T acw3aaqgin ;
int32_T mftmtr3bb1 ; for ( mftmtr3bb1 = 0 ; mftmtr3bb1 < 1 ; mftmtr3bb1 ++ )
{ bigtign1l3 ( ivyyfeoocu , & localDW -> lhmuy0r2mt [ mftmtr3bb1 ] .
mwc1d4al3c , & localXdis -> lhmuy0r2mt [ mftmtr3bb1 ] . mwc1d4al3c ) ; } for
( acw3aaqgin = 0 ; acw3aaqgin < 1 ; acw3aaqgin ++ ) { cwxr2wf5bj ( ivyyfeoocu
, & localDW -> oodask1ixq [ acw3aaqgin ] . mifpjkvj4c , & localXdis ->
oodask1ixq [ acw3aaqgin ] . mifpjkvj4c ) ; } } void kv2sxzppxj ( oqvwukdwj0 *
const ivyyfeoocu , f2a5ytrc5f * localDW , jjihdbtkak * localXdis ) { int32_T
acw3aaqgin ; int32_T mftmtr3bb1 ; real_T tmp ; real_T tmp_p ; for (
mftmtr3bb1 = 0 ; mftmtr3bb1 < 1 ; mftmtr3bb1 ++ ) { el2g0zdrbp ( ivyyfeoocu ,
& localDW -> lhmuy0r2mt [ mftmtr3bb1 ] . mwc1d4al3c , & localXdis ->
lhmuy0r2mt [ mftmtr3bb1 ] . mwc1d4al3c ) ; } for ( acw3aaqgin = 0 ;
acw3aaqgin < 1 ; acw3aaqgin ++ ) { ehba0b4b2q ( ivyyfeoocu , & localDW ->
oodask1ixq [ acw3aaqgin ] . mifpjkvj4c , & localXdis -> oodask1ixq [
acw3aaqgin ] . mifpjkvj4c ) ; } ssSetBlockStateForSolverChangedAtMajorStep (
ivyyfeoocu -> _mdlRefSfcnS ) ; tmp = rtmGetTaskTime ( ivyyfeoocu , 0 ) ;
tmp_p = rtmGetTStart ( ivyyfeoocu ) ; if ( tmp == tmp_p ) { ( void ) memset (
& ( localXdis -> mlndfk2ces ) , 1 , 1 * sizeof ( boolean_T ) ) ; ( void )
memset ( & ( localXdis -> au0xgwt5db ) , 1 , 3 * sizeof ( boolean_T ) ) ;
localDW -> lvgmhoo4ri = false ; } switch ( localDW -> p5dxjc2b1n ) { case 0 :
( void ) memset ( & ( localXdis -> mlndfk2ces ) , 1 , 1 * sizeof ( boolean_T
) ) ; break ; case 1 : ( void ) memset ( & ( localXdis -> au0xgwt5db ) , 1 ,
3 * sizeof ( boolean_T ) ) ; localDW -> lvgmhoo4ri = false ; break ; default
: break ; } localDW -> p5dxjc2b1n = - 1 ;
ssSetBlockStateForSolverChangedAtMajorStep ( ivyyfeoocu -> _mdlRefSfcnS ) ;
if ( tmp == tmp_p ) { ( void ) memset ( & ( localXdis -> m4rqj3hpvj ) , 1 , 1
* sizeof ( boolean_T ) ) ; ( void ) memset ( & ( localXdis -> kahcvzwgxd ) ,
1 , 2 * sizeof ( boolean_T ) ) ; } switch ( localDW -> fqwhbtulpg ) { case 0
: ( void ) memset ( & ( localXdis -> m4rqj3hpvj ) , 1 , 1 * sizeof (
boolean_T ) ) ; break ; case 1 : ( void ) memset ( & ( localXdis ->
kahcvzwgxd ) , 1 , 2 * sizeof ( boolean_T ) ) ; break ; default : break ; }
localDW -> fqwhbtulpg = - 1 ; } void ojicl15012 ( oqvwukdwj0 * const
ivyyfeoocu , gpz52e3dwe * localB , f2a5ytrc5f * localDW , jjihdbtkak *
localXdis ) { int32_T acw3aaqgin ; int32_T mftmtr3bb1 ; localB -> aucozmyinh
= baykbb21q4 . P_296 ; localB -> c1j4rwiuym = baykbb21q4 . P_11 ; localB ->
pdta0pgvmw = baykbb21q4 . P_79 ; localB -> psrgwnnlh0 = baykbb21q4 . P_80 ;
localB -> nv4mnufhrx = baykbb21q4 . P_81 ; localB -> fd0tovz3nx = baykbb21q4
. P_82 ; for ( mftmtr3bb1 = 0 ; mftmtr3bb1 < 1 ; mftmtr3bb1 ++ ) { j5chng11nc
( & localB -> lhmuy0r2mt [ mftmtr3bb1 ] . mwc1d4al3c ) ; } for ( acw3aaqgin =
0 ; acw3aaqgin < 1 ; acw3aaqgin ++ ) { dgndf5bjao ( & localB -> oodask1ixq [
acw3aaqgin ] . mifpjkvj4c ) ; } localDW -> kb3b4zgdci = 0 ; localDW ->
k4j33f4byh = true ; localDW -> lwrnf4n3xe = true ; localDW -> mtqbtozmmf =
true ; ssSetBlockStateForSolverChangedAtMajorStep ( ivyyfeoocu ->
_mdlRefSfcnS ) ; ( void ) memset ( & ( localXdis -> mlndfk2ces ) , 1 , 1 *
sizeof ( boolean_T ) ) ; ssSetBlockStateForSolverChangedAtMajorStep (
ivyyfeoocu -> _mdlRefSfcnS ) ; ( void ) memset ( & ( localXdis -> au0xgwt5db
) , 1 , 3 * sizeof ( boolean_T ) ) ; localDW -> lvgmhoo4ri = false ; localDW
-> p5dxjc2b1n = - 1 ; localDW -> eagcze1ljh = true ; localDW -> k2cw3yj0k4 =
true ; localDW -> l53qtov1bq = true ;
ssSetBlockStateForSolverChangedAtMajorStep ( ivyyfeoocu -> _mdlRefSfcnS ) ; (
void ) memset ( & ( localXdis -> m4rqj3hpvj ) , 1 , 1 * sizeof ( boolean_T )
) ; ssSetBlockStateForSolverChangedAtMajorStep ( ivyyfeoocu -> _mdlRefSfcnS )
; ( void ) memset ( & ( localXdis -> kahcvzwgxd ) , 1 , 2 * sizeof (
boolean_T ) ) ; localDW -> fqwhbtulpg = - 1 ; } void DrivetrainHevP4 (
oqvwukdwj0 * const ivyyfeoocu , const real_T * f1yddjot4o , const real_T *
f35royvs0l , const real_T * nur0x3dnrd , const real_T * adynfirr4h , const
real_T * cypg0t3kxa , const real_T * f0jwsprwuj , real_T * i0kowghn5g ,
real_T * angnzwuao0 , boolean_T * kkdxx45yej , real_T * otyz5h01ax , real_T *
dly32btpwe , gpz52e3dwe * localB , f2a5ytrc5f * localDW , dv0k21emzh * localX
, njnki40qhm * localZCE , jjihdbtkak * localXdis ) { real_T csebehjbqi ;
real_T knl2obx1gl ; real_T p4uilbaz4f ; real_T n5pcldz0zt ; real_T hqewq1qube
; real_T k2xmsubhcb ; int32_T acw3aaqgin ; int32_T mftmtr3bb1 ; __m128d tmp ;
real_T gyztpz3yty_p [ 6 ] ; real_T naywudmk0g_p [ 4 ] ; real_T j0jditj4mm_p [
2 ] ; real_T mk1ael1b2v_p [ 2 ] ; real_T a5uv3oymxx ; real_T apo5rnh2r4_p ;
real_T g1l3kytqj0_p ; real_T he1kmjud5a_idx_0 ; real_T hki34vtjnv_p ; real_T
htragqvhmu_p ; real_T hzpx21b5hr_p ; real_T itfqqzwjsw_idx_0 ; real_T
lloq400s2j_p ; real_T lmhbywdt1w ; real_T m4v3pwx3gp_p ; real_T mb1yx4uqj4_p
; real_T mphxn1b4ym_p ; real_T nsqbm2polz_p ; real_T o45ekqd13x_p ; real_T
olhvao1vrb_p ; real_T ooraxcq41l_p ; real_T opgvmw0q00_p ; real_T
pr3cg1ha33_tmp ; int32_T i ; uint32_T bpIndices [ 4 ] ; uint32_T aae02dnkop_p
; const char_T * arg1 ; int8_T rtAction ; int8_T rtPrevAction ; boolean_T
aivsyrjhjg ; void * S ; void * diag ; ZCEventType zcEvent ; localB ->
cec4bxcbhi = localX -> fzwsn2jmhl ; localB -> gukhu3ijh1 [ 0 ] = localB ->
cec4bxcbhi ; localB -> gukhu3ijh1 [ 1 ] = 0.0 ; localB -> gukhu3ijh1 [ 2 ] =
0.0 ; * i0kowghn5g = localB -> gukhu3ijh1 [ 0 ] ; olhvao1vrb_p = localX ->
e0iug524d1 ; if ( rtmIsMajorTimeStep ( ivyyfeoocu ) && rtmIsSampleHit (
ivyyfeoocu , 1 , 0 ) ) { localB -> e1bxwmjm0o = localDW -> a05qxnyi0a ; } if
( ssIsModeUpdateTimeStep ( ivyyfeoocu -> _mdlRefSfcnS ) ) { zcEvent =
rt_ZCFcn ( RISING_ZERO_CROSSING , & localZCE -> bijsfjfrcl , ( localB ->
e1bxwmjm0o ) ) ; if ( ( zcEvent != NO_ZCEVENT ) || ( localDW -> pdphadbq31 !=
0 ) ) { aivsyrjhjg = ( localX -> ci1kkjexs5 != localB -> nv4mnufhrx ) ;
localX -> ci1kkjexs5 = localB -> nv4mnufhrx ; if ( aivsyrjhjg ) {
ssSetBlockStateForSolverChangedAtMajorStep ( ivyyfeoocu -> _mdlRefSfcnS ) ; }
} hzpx21b5hr_p = localX -> ci1kkjexs5 ; } else { hzpx21b5hr_p = localX ->
ci1kkjexs5 ; } mphxn1b4ym_p = baykbb21q4 . P_53 * hzpx21b5hr_p + baykbb21q4 .
P_88 * localX -> j4b4mw5go4 ; hki34vtjnv_p = localX -> iym4havdyu ; localB ->
epejmvokjb = ( mphxn1b4ym_p - localX -> iym4havdyu * localB -> lvwghuuv4n ) *
baykbb21q4 . P_208 ; o45ekqd13x_p = baykbb21q4 . P_209 * * cypg0t3kxa ;
lmhbywdt1w = o45ekqd13x_p * localB -> fh3orkmu21 * baykbb21q4 . P_77 *
baykbb21q4 . P_103 ; if ( lmhbywdt1w > baykbb21q4 . P_210 ) { lmhbywdt1w =
baykbb21q4 . P_210 ; } else if ( lmhbywdt1w < baykbb21q4 . P_211 ) {
lmhbywdt1w = baykbb21q4 . P_211 ; } o45ekqd13x_p = baykbb21q4 . P_39 *
baykbb21q4 . P_97 * lmhbywdt1w ; localB -> oiccsxmfc0 = baykbb21q4 . P_99 /
baykbb21q4 . P_97 * o45ekqd13x_p ; localB -> cvgqawtxd2 = baykbb21q4 . P_97 /
baykbb21q4 . P_97 * o45ekqd13x_p ; mftmtr3bb1 = 0 ; while ( mftmtr3bb1 < 1 )
{ n5pcldz0zt = localB -> epejmvokjb ; hqewq1qube = localB -> oiccsxmfc0 ;
k2xmsubhcb = localB -> cvgqawtxd2 ; px02myt3he ( ivyyfeoocu , n5pcldz0zt ,
hqewq1qube , k2xmsubhcb , baykbb21q4 . P_114 , baykbb21q4 . P_67 , baykbb21q4
. P_12 , baykbb21q4 . P_46 * baykbb21q4 . P_36 * 0.0 , & localB -> lhmuy0r2mt
[ mftmtr3bb1 ] . mwc1d4al3c , & localDW -> lhmuy0r2mt [ mftmtr3bb1 ] .
mwc1d4al3c , & baykbb21q4 . lhmuy0r2mt . mwc1d4al3c , & localX -> lhmuy0r2mt
[ mftmtr3bb1 ] . mwc1d4al3c , & localXdis -> lhmuy0r2mt [ mftmtr3bb1 ] .
mwc1d4al3c ) ; localB -> awcntgnx3h = localB -> lhmuy0r2mt [ mftmtr3bb1 ] .
mwc1d4al3c . eapq4cihew ; mftmtr3bb1 ++ ; } jvumz1wqzb ( localB -> lvwghuuv4n
, olhvao1vrb_p , localB -> awcntgnx3h , localB -> gukhu3ijh1 [ 0 ] ,
baykbb21q4 . P_343 , baykbb21q4 . P_344 , baykbb21q4 . P_345 , baykbb21q4 .
P_346 , baykbb21q4 . P_94 , baykbb21q4 . P_347 , baykbb21q4 . P_348 ,
baykbb21q4 . P_349 , baykbb21q4 . P_350 , baykbb21q4 . P_124 , baykbb21q4 .
P_351 , baykbb21q4 . P_352 , baykbb21q4 . P_49 , baykbb21q4 . P_58 ,
baykbb21q4 . P_74 , baykbb21q4 . P_353 , baykbb21q4 . P_354 , baykbb21q4 .
P_355 , baykbb21q4 . P_62 , baykbb21q4 . P_51 , baykbb21q4 . P_356 ,
baykbb21q4 . P_357 , baykbb21q4 . P_44 , baykbb21q4 . P_358 , baykbb21q4 .
P_359 , baykbb21q4 . P_360 , baykbb21q4 . P_361 , baykbb21q4 . P_362 , 0.0 ,
baykbb21q4 . P_363 , baykbb21q4 . P_364 , baykbb21q4 . P_365 , baykbb21q4 .
P_366 , baykbb21q4 . P_367 , baykbb21q4 . P_368 , baykbb21q4 . P_369 ,
baykbb21q4 . P_370 , baykbb21q4 . P_371 , baykbb21q4 . P_372 , baykbb21q4 .
P_373 , baykbb21q4 . P_374 , baykbb21q4 . P_375 , baykbb21q4 . P_376 ,
baykbb21q4 . P_377 , baykbb21q4 . P_378 , baykbb21q4 . P_379 , baykbb21q4 .
P_380 , baykbb21q4 . P_381 , baykbb21q4 . P_382 , baykbb21q4 . P_383 ,
baykbb21q4 . P_384 , baykbb21q4 . P_385 , baykbb21q4 . P_340 , baykbb21q4 .
P_386 , baykbb21q4 . P_387 , baykbb21q4 . P_6 , baykbb21q4 . P_8 , baykbb21q4
. P_46 , baykbb21q4 . P_92 , & localB -> gp3qroe5qv ) ; mb1yx4uqj4_p = localB
-> gp3qroe5qv . gpm5eaqmyj + localB -> gp3qroe5qv . gpm5eaqmyj ; lloq400s2j_p
= localX -> ojbokxhqxh ; if ( rtmIsMajorTimeStep ( ivyyfeoocu ) &&
rtmIsSampleHit ( ivyyfeoocu , 1 , 0 ) ) { localB -> mkqlit4lyd = localDW ->
kai0m0e2ew ; } if ( ssIsModeUpdateTimeStep ( ivyyfeoocu -> _mdlRefSfcnS ) ) {
zcEvent = rt_ZCFcn ( RISING_ZERO_CROSSING , & localZCE -> ne4aagom4d , (
localB -> mkqlit4lyd ) ) ; if ( ( zcEvent != NO_ZCEVENT ) || ( localDW ->
ghexlrxee4 != 0 ) ) { aivsyrjhjg = ( localX -> kuyuzmfdlw != localB ->
fd0tovz3nx ) ; localX -> kuyuzmfdlw = localB -> fd0tovz3nx ; if ( aivsyrjhjg
) { ssSetBlockStateForSolverChangedAtMajorStep ( ivyyfeoocu -> _mdlRefSfcnS )
; } } g1l3kytqj0_p = localX -> kuyuzmfdlw ; } else { g1l3kytqj0_p = localX ->
kuyuzmfdlw ; } htragqvhmu_p = baykbb21q4 . P_54 * g1l3kytqj0_p + baykbb21q4 .
P_89 * localX -> lqa034fanw ; o45ekqd13x_p = localX -> pwwnn4rpgi ; localB ->
gsvlqm3nsk = ( htragqvhmu_p - localX -> pwwnn4rpgi * localB -> bleeiru2sr ) *
baykbb21q4 . P_215 ; nsqbm2polz_p = baykbb21q4 . P_216 * * cypg0t3kxa ;
lmhbywdt1w = nsqbm2polz_p * localB -> fe1otu0gja * baykbb21q4 . P_78 *
baykbb21q4 . P_104 ; if ( lmhbywdt1w > baykbb21q4 . P_217 ) { lmhbywdt1w =
baykbb21q4 . P_217 ; } else if ( lmhbywdt1w < baykbb21q4 . P_218 ) {
lmhbywdt1w = baykbb21q4 . P_218 ; } nsqbm2polz_p = baykbb21q4 . P_40 *
baykbb21q4 . P_98 * lmhbywdt1w ; localB -> gmt3poj0so = baykbb21q4 . P_100 /
baykbb21q4 . P_98 * nsqbm2polz_p ; localB -> mzinyvbdpx = baykbb21q4 . P_98 /
baykbb21q4 . P_98 * nsqbm2polz_p ; acw3aaqgin = 0 ; while ( acw3aaqgin < 1 )
{ csebehjbqi = localB -> gsvlqm3nsk ; knl2obx1gl = localB -> gmt3poj0so ;
p4uilbaz4f = localB -> mzinyvbdpx ; kmiehcqwcy ( ivyyfeoocu , csebehjbqi ,
knl2obx1gl , p4uilbaz4f , baykbb21q4 . P_115 , baykbb21q4 . P_68 , baykbb21q4
. P_13 , baykbb21q4 . P_47 * baykbb21q4 . P_37 * 0.0 , & localB -> oodask1ixq
[ acw3aaqgin ] . mifpjkvj4c , & localDW -> oodask1ixq [ acw3aaqgin ] .
mifpjkvj4c , & baykbb21q4 . oodask1ixq . mifpjkvj4c , & localX -> oodask1ixq
[ acw3aaqgin ] . mifpjkvj4c , & localXdis -> oodask1ixq [ acw3aaqgin ] .
mifpjkvj4c ) ; localB -> hbxu4f1wb0 = localB -> oodask1ixq [ acw3aaqgin ] .
mifpjkvj4c . eqhtfgp440 ; acw3aaqgin ++ ; } jvumz1wqzb ( localB -> bleeiru2sr
, lloq400s2j_p , localB -> hbxu4f1wb0 , localB -> gukhu3ijh1 [ 0 ] ,
baykbb21q4 . P_392 , baykbb21q4 . P_393 , baykbb21q4 . P_394 , baykbb21q4 .
P_395 , baykbb21q4 . P_95 , baykbb21q4 . P_396 , baykbb21q4 . P_397 ,
baykbb21q4 . P_398 , baykbb21q4 . P_399 , baykbb21q4 . P_125 , baykbb21q4 .
P_400 , baykbb21q4 . P_401 , baykbb21q4 . P_50 , baykbb21q4 . P_59 ,
baykbb21q4 . P_75 , baykbb21q4 . P_402 , baykbb21q4 . P_403 , baykbb21q4 .
P_404 , baykbb21q4 . P_63 , baykbb21q4 . P_52 , baykbb21q4 . P_405 ,
baykbb21q4 . P_406 , baykbb21q4 . P_45 , baykbb21q4 . P_407 , baykbb21q4 .
P_408 , baykbb21q4 . P_409 , baykbb21q4 . P_410 , baykbb21q4 . P_411 , 0.0 ,
baykbb21q4 . P_412 , baykbb21q4 . P_413 , baykbb21q4 . P_414 , baykbb21q4 .
P_415 , baykbb21q4 . P_416 , baykbb21q4 . P_417 , baykbb21q4 . P_418 ,
baykbb21q4 . P_419 , baykbb21q4 . P_420 , baykbb21q4 . P_421 , baykbb21q4 .
P_422 , baykbb21q4 . P_423 , baykbb21q4 . P_424 , baykbb21q4 . P_425 ,
baykbb21q4 . P_426 , baykbb21q4 . P_427 , baykbb21q4 . P_428 , baykbb21q4 .
P_429 , baykbb21q4 . P_430 , baykbb21q4 . P_431 , baykbb21q4 . P_432 ,
baykbb21q4 . P_433 , baykbb21q4 . P_434 , baykbb21q4 . P_389 , baykbb21q4 .
P_435 , baykbb21q4 . P_436 , baykbb21q4 . P_7 , baykbb21q4 . P_9 , baykbb21q4
. P_47 , baykbb21q4 . P_93 , & localB -> pqa4uoh3p3 ) ; nsqbm2polz_p = localB
-> pqa4uoh3p3 . gpm5eaqmyj + localB -> pqa4uoh3p3 . gpm5eaqmyj ;
itfqqzwjsw_idx_0 = * adynfirr4h ; a5uv3oymxx = localB -> cec4bxcbhi - ( -
itfqqzwjsw_idx_0 ) ; itfqqzwjsw_idx_0 = a5uv3oymxx * a5uv3oymxx ; if (
rtmIsMajorTimeStep ( ivyyfeoocu ) ) { if ( localDW -> kb3b4zgdci != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( ivyyfeoocu -> _mdlRefSfcnS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( ivyyfeoocu ->
_mdlRefSfcnS ) ; localDW -> kb3b4zgdci = 0 ; } itfqqzwjsw_idx_0 =
muDoubleScalarSqrt ( itfqqzwjsw_idx_0 ) ; } else if ( itfqqzwjsw_idx_0 < 0.0
) { itfqqzwjsw_idx_0 = - muDoubleScalarSqrt ( muDoubleScalarAbs (
itfqqzwjsw_idx_0 ) ) ; localDW -> kb3b4zgdci = 1 ; } else { itfqqzwjsw_idx_0
= muDoubleScalarSqrt ( itfqqzwjsw_idx_0 ) ; } opgvmw0q00_p = itfqqzwjsw_idx_0
* itfqqzwjsw_idx_0 ; gyztpz3yty_p [ 0 ] = baykbb21q4 . P_1 ; itfqqzwjsw_idx_0
= muDoubleScalarAtan2 ( 0.0 , a5uv3oymxx ) ; gyztpz3yty_p [ 1 ] =
look1_binlcpw ( itfqqzwjsw_idx_0 , baykbb21q4 . P_64 , baykbb21q4 . P_4 , 1U
) ; gyztpz3yty_p [ 2 ] = baykbb21q4 . P_2 ; gyztpz3yty_p [ 3 ] =
look1_binlxpw ( itfqqzwjsw_idx_0 , baykbb21q4 . P_220 , baykbb21q4 . P_219 ,
1U ) ; he1kmjud5a_idx_0 = muDoubleScalarTanh ( baykbb21q4 . P_221 [ 0 ] *
a5uv3oymxx ) ; gyztpz3yty_p [ 4 ] = he1kmjud5a_idx_0 * baykbb21q4 . P_3 ;
gyztpz3yty_p [ 5 ] = look1_binlxpw ( itfqqzwjsw_idx_0 , baykbb21q4 . P_64 ,
baykbb21q4 . P_5 , 1U ) ; itfqqzwjsw_idx_0 = 0.5 * baykbb21q4 . P_0 *
baykbb21q4 . P_32 / baykbb21q4 . P_33 ; for ( i = 0 ; i <= 4 ; i += 2 ) { tmp
= _mm_loadu_pd ( & gyztpz3yty_p [ i ] ) ; _mm_storeu_pd ( & gyztpz3yty_p [ i
] , _mm_mul_pd ( _mm_div_pd ( _mm_mul_pd ( _mm_set1_pd ( opgvmw0q00_p ) , tmp
) , _mm_set1_pd ( baykbb21q4 . P_41 ) ) , _mm_set1_pd ( itfqqzwjsw_idx_0 ) )
) ; } ooraxcq41l_p = baykbb21q4 . P_48 + baykbb21q4 . P_55 ; opgvmw0q00_p =
ooraxcq41l_p * gyztpz3yty_p [ 4 ] + baykbb21q4 . P_288 [ 1 ] ;
itfqqzwjsw_idx_0 = 0.017453292519943295 * * nur0x3dnrd ; muDoubleScalarSinCos
( itfqqzwjsw_idx_0 , & a5uv3oymxx , & lmhbywdt1w ) ; he1kmjud5a_idx_0 = (
he1kmjud5a_idx_0 - baykbb21q4 . P_293 [ 0 ] ) * gyztpz3yty_p [ 0 ] ;
itfqqzwjsw_idx_0 = ( muDoubleScalarTanh ( baykbb21q4 . P_221 [ 2 ] * 0.0 ) -
baykbb21q4 . P_293 [ 2 ] ) * gyztpz3yty_p [ 2 ] + ( lmhbywdt1w * localB ->
gtzo2kivgc + baykbb21q4 . P_287 [ 2 ] ) ; a5uv3oymxx *= localB -> gtzo2kivgc
; mb1yx4uqj4_p = ( ( ( baykbb21q4 . P_287 [ 0 ] - a5uv3oymxx ) + mb1yx4uqj4_p
) + nsqbm2polz_p ) - he1kmjud5a_idx_0 ; nsqbm2polz_p = ( ( ( he1kmjud5a_idx_0
- baykbb21q4 . P_287 [ 0 ] ) + a5uv3oymxx ) + mb1yx4uqj4_p ) * baykbb21q4 .
P_87 ; pr3cg1ha33_tmp = 1.0 / ooraxcq41l_p ; localB -> pr3cg1ha33 = ( ( (
baykbb21q4 . P_48 * itfqqzwjsw_idx_0 + opgvmw0q00_p ) + nsqbm2polz_p ) *
pr3cg1ha33_tmp * ( 1.0 / baykbb21q4 . P_29 ) - lloq400s2j_p ) * baykbb21q4 .
P_137 ; localB -> occeweni1n = ( ( ( baykbb21q4 . P_55 * itfqqzwjsw_idx_0 -
opgvmw0q00_p ) - nsqbm2polz_p ) * pr3cg1ha33_tmp * ( 1.0 / baykbb21q4 . P_28
) - olhvao1vrb_p ) * baykbb21q4 . P_138 ; localB -> fhmeql5up3 [ 0 ] = 0.0 ;
localB -> fhmeql5up3 [ 1 ] = 0.0 ; localB -> kraacilkr3 = 1.0 / baykbb21q4 .
P_96 * mb1yx4uqj4_p ; olhvao1vrb_p = localX -> au0xgwt5db - localX ->
ghortk2b5p ; if ( rtmIsMajorTimeStep ( ivyyfeoocu ) && rtmIsSampleHit (
ivyyfeoocu , 1 , 0 ) ) { zcEvent = rt_ZCFcn ( ANY_ZERO_CROSSING , & localZCE
-> ajmpenxuwc , ( olhvao1vrb_p - baykbb21q4 . P_223 ) ) ; if ( localDW ->
ioyvk1irfb == 0 ) { if ( zcEvent != NO_ZCEVENT ) { localB -> gjufqb52aq = !
localB -> gjufqb52aq ; localDW -> ioyvk1irfb = 1 ; } else if ( localB ->
gjufqb52aq ) { localB -> gjufqb52aq = ( ( ! ( olhvao1vrb_p != baykbb21q4 .
P_223 ) ) && localB -> gjufqb52aq ) ; } else { localB -> gjufqb52aq = ( (
olhvao1vrb_p == baykbb21q4 . P_223 ) || localB -> gjufqb52aq ) ; } } else {
localB -> gjufqb52aq = ( ( ! ( olhvao1vrb_p != baykbb21q4 . P_223 ) ) &&
localB -> gjufqb52aq ) ; localDW -> ioyvk1irfb = 0 ; } localB -> oyptmqqt4o =
localDW -> hgsyk0bc45 ; } if ( ssIsModeUpdateTimeStep ( ivyyfeoocu ->
_mdlRefSfcnS ) ) { zcEvent = rt_ZCFcn ( RISING_ZERO_CROSSING , & localZCE ->
m2l2bafuxi , ( localB -> oyptmqqt4o ) ) ; if ( ( zcEvent != NO_ZCEVENT ) || (
localDW -> mofqbaru1g != 0 ) ) { aivsyrjhjg = ( localX -> asdzcbvawm !=
localB -> psrgwnnlh0 ) ; localX -> asdzcbvawm = localB -> psrgwnnlh0 ; if (
aivsyrjhjg ) { ssSetBlockStateForSolverChangedAtMajorStep ( ivyyfeoocu ->
_mdlRefSfcnS ) ; } } olhvao1vrb_p = localX -> asdzcbvawm ; } else {
olhvao1vrb_p = localX -> asdzcbvawm ; } lloq400s2j_p = baykbb21q4 . P_56 *
olhvao1vrb_p + baykbb21q4 . P_90 * localX -> dwubb510sy ; itfqqzwjsw_idx_0 =
baykbb21q4 . P_69 * localX -> au0xgwt5db ; apo5rnh2r4_p = * f1yddjot4o -
lloq400s2j_p ; a5uv3oymxx = ( ( apo5rnh2r4_p - baykbb21q4 . P_65 * localX ->
au0xgwt5db ) - itfqqzwjsw_idx_0 ) * ( baykbb21q4 . P_18 / ( baykbb21q4 . P_16
+ baykbb21q4 . P_18 ) ) ; if ( rtmIsMajorTimeStep ( ivyyfeoocu ) &&
rtmIsSampleHit ( ivyyfeoocu , 1 , 0 ) ) { localB -> ljh5u1acpa = localDW ->
d4jrbui4i1 ; } if ( ssIsModeUpdateTimeStep ( ivyyfeoocu -> _mdlRefSfcnS ) ) {
zcEvent = rt_ZCFcn ( RISING_ZERO_CROSSING , & localZCE -> bgvqe2fp30 , (
localB -> ljh5u1acpa ) ) ; if ( ( zcEvent != NO_ZCEVENT ) || ( localDW ->
nmkn0jbvty != 0 ) ) { aivsyrjhjg = ( localX -> atiz2s5la3 != localB ->
aucozmyinh ) ; localX -> atiz2s5la3 = localB -> aucozmyinh ; if ( aivsyrjhjg
) { ssSetBlockStateForSolverChangedAtMajorStep ( ivyyfeoocu -> _mdlRefSfcnS )
; } } nsqbm2polz_p = localX -> atiz2s5la3 ; } else { nsqbm2polz_p = localX ->
atiz2s5la3 ; } localB -> cd2gv14vry = baykbb21q4 . P_24 * nsqbm2polz_p ; if (
ssIsModeUpdateTimeStep ( ivyyfeoocu -> _mdlRefSfcnS ) ) { if ( localB ->
cd2gv14vry >= baykbb21q4 . P_226 ) { localDW -> mnv4vjrnep = 1 ; } else if (
localB -> cd2gv14vry > baykbb21q4 . P_227 ) { localDW -> mnv4vjrnep = 0 ; }
else { localDW -> mnv4vjrnep = - 1 ; } } if ( localDW -> mnv4vjrnep == 1 ) {
pr3cg1ha33_tmp = baykbb21q4 . P_226 ; } else if ( localDW -> mnv4vjrnep == -
1 ) { pr3cg1ha33_tmp = baykbb21q4 . P_227 ; } else { pr3cg1ha33_tmp = localB
-> cd2gv14vry ; } opgvmw0q00_p = baykbb21q4 . P_38 * baykbb21q4 . P_101 *
pr3cg1ha33_tmp ; mb1yx4uqj4_p = baykbb21q4 . P_102 / baykbb21q4 . P_101 *
opgvmw0q00_p ; aivsyrjhjg = ( localB -> gjufqb52aq && ( muDoubleScalarAbs (
a5uv3oymxx + itfqqzwjsw_idx_0 ) <= mb1yx4uqj4_p ) ) ; itfqqzwjsw_idx_0 =
baykbb21q4 . P_69 * localX -> mlndfk2ces ; if ( rtmIsMajorTimeStep (
ivyyfeoocu ) && rtmIsSampleHit ( ivyyfeoocu , 1 , 0 ) ) { localB ->
euzshrvedh = localDW -> lwg3p0cdvf ; if ( localDW -> k4j33f4byh ) { localDW
-> k4j33f4byh = false ; localB -> niifni1al0 = baykbb21q4 . P_228 ; } else {
localB -> niifni1al0 = baykbb21q4 . P_295 ; } } * kkdxx45yej = baykbb21q4 .
P_445 [ ( ( ( uint32_T ) ( muDoubleScalarAbs ( ( ( apo5rnh2r4_p - baykbb21q4
. P_65 * localX -> mlndfk2ces ) - itfqqzwjsw_idx_0 ) * ( baykbb21q4 . P_18 /
( baykbb21q4 . P_16 + baykbb21q4 . P_18 ) ) + itfqqzwjsw_idx_0 ) >=
mb1yx4uqj4_p ) + ( ( uint32_T ) aivsyrjhjg << 1 ) ) << 1 ) + localB ->
euzshrvedh ] ; if ( localB -> niifni1al0 > baykbb21q4 . P_229 ) {
mb1yx4uqj4_p = localX -> mlndfk2ces ; } else { mb1yx4uqj4_p = baykbb21q4 .
P_112 ; } if ( rtmIsMajorTimeStep ( ivyyfeoocu ) && rtmIsSampleHit (
ivyyfeoocu , 1 , 0 ) ) { if ( localDW -> lwrnf4n3xe ) { localDW -> lwrnf4n3xe
= false ; localB -> dsvmkt1cgs = baykbb21q4 . P_230 ; } else { localB ->
dsvmkt1cgs = baykbb21q4 . P_299 ; } if ( localDW -> mtqbtozmmf ) { localDW ->
mtqbtozmmf = false ; localB -> onje2csnwv = baykbb21q4 . P_232 ; } else {
localB -> onje2csnwv = baykbb21q4 . P_294 ; } } if ( localB -> dsvmkt1cgs >
baykbb21q4 . P_231 ) { itfqqzwjsw_idx_0 = localX -> mlndfk2ces ; } else {
itfqqzwjsw_idx_0 = baykbb21q4 . P_116 ; } if ( localB -> onje2csnwv >
baykbb21q4 . P_233 ) { a5uv3oymxx = localX -> au0xgwt5db ; } else {
a5uv3oymxx = baykbb21q4 . P_112 ; } rtPrevAction = localDW -> p5dxjc2b1n ; if
( ssIsModeUpdateTimeStep ( ivyyfeoocu -> _mdlRefSfcnS ) ) { rtAction = (
int8_T ) ! * kkdxx45yej ; localDW -> p5dxjc2b1n = rtAction ; } else {
rtAction = localDW -> p5dxjc2b1n ; } if ( rtPrevAction != rtAction ) {
ssSetBlockStateForSolverChangedAtMajorStep ( ivyyfeoocu -> _mdlRefSfcnS ) ;
if ( rtmGetTaskTime ( ivyyfeoocu , 0 ) == rtmGetTStart ( ivyyfeoocu ) ) { (
void ) memset ( & ( localXdis -> mlndfk2ces ) , 1 , 1 * sizeof ( boolean_T )
) ; ( void ) memset ( & ( localXdis -> au0xgwt5db ) , 1 , 3 * sizeof (
boolean_T ) ) ; localDW -> lvgmhoo4ri = false ; } switch ( rtPrevAction ) {
case 0 : ( void ) memset ( & ( localXdis -> mlndfk2ces ) , 1 , 1 * sizeof (
boolean_T ) ) ; break ; case 1 : ( void ) memset ( & ( localXdis ->
au0xgwt5db ) , 1 , 3 * sizeof ( boolean_T ) ) ; localDW -> lvgmhoo4ri = false
; break ; default : break ; } } if ( rtAction == 0 ) { if ( rtPrevAction != 0
) { localDW -> lq4git1asr = 1 ; if ( rtmIsFirstInitCond ( ivyyfeoocu ) ) {
localX -> mlndfk2ces = 0.0 ; aivsyrjhjg = slIsRapidAcceleratorSimulating ( )
; if ( aivsyrjhjg ) { aivsyrjhjg = ( slIsRapidAcceleratorSimulating ( ) ?
ssGetGlobalInitialStatesAvailable ( ivyyfeoocu -> _mdlRefSfcnS ) :
simTgtGlobalInitialStatesAvailable ( ivyyfeoocu -> _mdlRefSfcnS ) ) ; localDW
-> lq4git1asr = ! aivsyrjhjg ; } else { localDW -> lq4git1asr = 1 ; } } if (
rtmGetTaskTime ( ivyyfeoocu , 0 ) != rtmGetTStart ( ivyyfeoocu ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( ivyyfeoocu -> _mdlRefSfcnS ) ; }
( void ) memset ( & ( localXdis -> mlndfk2ces ) , 0 , 1 * sizeof ( boolean_T
) ) ; } if ( ssIsModeUpdateTimeStep ( ivyyfeoocu -> _mdlRefSfcnS ) ) { if (
localDW -> lq4git1asr != 0 ) { localX -> mlndfk2ces = a5uv3oymxx ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( ivyyfeoocu ->
_mdlRefSfcnS ) ; } if ( localX -> mlndfk2ces >= baykbb21q4 . P_180 ) { if (
localX -> mlndfk2ces != baykbb21q4 . P_180 ) { localX -> mlndfk2ces =
baykbb21q4 . P_180 ; ssSetBlockStateForSolverChangedAtMajorStep ( ivyyfeoocu
-> _mdlRefSfcnS ) ; ssSetContTimeOutputInconsistentWithStateAtMajorStep (
ivyyfeoocu -> _mdlRefSfcnS ) ; } } else if ( ( localX -> mlndfk2ces <=
baykbb21q4 . P_181 ) && ( localX -> mlndfk2ces != baykbb21q4 . P_181 ) ) {
localX -> mlndfk2ces = baykbb21q4 . P_181 ;
ssSetBlockStateForSolverChangedAtMajorStep ( ivyyfeoocu -> _mdlRefSfcnS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( ivyyfeoocu ->
_mdlRefSfcnS ) ; } mb1yx4uqj4_p = localX -> mlndfk2ces ; } else if ( localX
-> mlndfk2ces >= baykbb21q4 . P_180 ) { mb1yx4uqj4_p = baykbb21q4 . P_180 ;
localX -> mlndfk2ces = baykbb21q4 . P_180 ; } else if ( localX -> mlndfk2ces
<= baykbb21q4 . P_181 ) { mb1yx4uqj4_p = baykbb21q4 . P_181 ; localX ->
mlndfk2ces = baykbb21q4 . P_181 ; } else { mb1yx4uqj4_p = localX ->
mlndfk2ces ; } localB -> dwfltpq3sa = ( apo5rnh2r4_p - ( baykbb21q4 . P_65 *
mb1yx4uqj4_p + baykbb21q4 . P_69 * mb1yx4uqj4_p ) ) * ( 1.0 / ( baykbb21q4 .
P_16 + baykbb21q4 . P_18 ) ) ; opgvmw0q00_p = mb1yx4uqj4_p * localB ->
dwfltpq3sa ; * angnzwuao0 = mb1yx4uqj4_p ; itfqqzwjsw_idx_0 = baykbb21q4 .
P_16 * opgvmw0q00_p ; a5uv3oymxx = baykbb21q4 . P_18 * opgvmw0q00_p ; if (
rtmIsMajorTimeStep ( ivyyfeoocu ) && rtmIsSampleHit ( ivyyfeoocu , 1 , 0 ) )
{ localB -> io22wmrl1e = baykbb21q4 . P_184 ; } if ( ssIsModeUpdateTimeStep (
ivyyfeoocu -> _mdlRefSfcnS ) ) { srUpdateBC ( localDW -> fc3sbhift3 ) ; } }
else { if ( rtAction != rtPrevAction ) { localDW -> ftanrlzxqu = 1 ; if (
rtmIsFirstInitCond ( ivyyfeoocu ) ) { localX -> au0xgwt5db = 0.0 ; aivsyrjhjg
= slIsRapidAcceleratorSimulating ( ) ; if ( aivsyrjhjg ) { aivsyrjhjg = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
ivyyfeoocu -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
ivyyfeoocu -> _mdlRefSfcnS ) ) ; localDW -> ftanrlzxqu = ! aivsyrjhjg ; }
else { localDW -> ftanrlzxqu = 1 ; } localX -> ghortk2b5p = 0.0 ; } localDW
-> cs3aeuofig = 1 ; if ( rtmIsFirstInitCond ( ivyyfeoocu ) ) { aivsyrjhjg =
slIsRapidAcceleratorSimulating ( ) ; if ( aivsyrjhjg ) { aivsyrjhjg = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
ivyyfeoocu -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
ivyyfeoocu -> _mdlRefSfcnS ) ) ; localDW -> cs3aeuofig = ! aivsyrjhjg ; }
else { localDW -> cs3aeuofig = 1 ; } } if ( rtmGetTaskTime ( ivyyfeoocu , 0 )
!= rtmGetTStart ( ivyyfeoocu ) ) { ssSetBlockStateForSolverChangedAtMajorStep
( ivyyfeoocu -> _mdlRefSfcnS ) ; } ( void ) memset ( & ( localXdis ->
au0xgwt5db ) , 0 , 3 * sizeof ( boolean_T ) ) ; } if ( ssIsModeUpdateTimeStep
( ivyyfeoocu -> _mdlRefSfcnS ) ) { if ( localDW -> ftanrlzxqu != 0 ) { localX
-> au0xgwt5db = mb1yx4uqj4_p ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( ivyyfeoocu ->
_mdlRefSfcnS ) ; } if ( localX -> au0xgwt5db >= baykbb21q4 . P_191 ) { if (
localX -> au0xgwt5db != baykbb21q4 . P_191 ) { localX -> au0xgwt5db =
baykbb21q4 . P_191 ; ssSetBlockStateForSolverChangedAtMajorStep ( ivyyfeoocu
-> _mdlRefSfcnS ) ; ssSetContTimeOutputInconsistentWithStateAtMajorStep (
ivyyfeoocu -> _mdlRefSfcnS ) ; } localDW -> ldmgpk510f = 3 ; } else if (
localX -> au0xgwt5db <= baykbb21q4 . P_192 ) { if ( localX -> au0xgwt5db !=
baykbb21q4 . P_192 ) { localX -> au0xgwt5db = baykbb21q4 . P_192 ;
ssSetBlockStateForSolverChangedAtMajorStep ( ivyyfeoocu -> _mdlRefSfcnS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( ivyyfeoocu ->
_mdlRefSfcnS ) ; } localDW -> ldmgpk510f = 4 ; } else { if ( localDW ->
ldmgpk510f != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( ivyyfeoocu
-> _mdlRefSfcnS ) ; } localDW -> ldmgpk510f = 0 ; } localB -> fnv1q5plhv =
localX -> au0xgwt5db ; } else { localB -> fnv1q5plhv = localX -> au0xgwt5db ;
} if ( ssIsModeUpdateTimeStep ( ivyyfeoocu -> _mdlRefSfcnS ) ) { if ( localDW
-> cs3aeuofig != 0 ) { localX -> ghortk2b5p = itfqqzwjsw_idx_0 ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( ivyyfeoocu ->
_mdlRefSfcnS ) ; } if ( localX -> ghortk2b5p >= baykbb21q4 . P_193 ) { if (
localX -> ghortk2b5p != baykbb21q4 . P_193 ) { localX -> ghortk2b5p =
baykbb21q4 . P_193 ; ssSetBlockStateForSolverChangedAtMajorStep ( ivyyfeoocu
-> _mdlRefSfcnS ) ; ssSetContTimeOutputInconsistentWithStateAtMajorStep (
ivyyfeoocu -> _mdlRefSfcnS ) ; } localDW -> pputvuru1l = 3 ; } else if (
localX -> ghortk2b5p <= baykbb21q4 . P_194 ) { if ( localX -> ghortk2b5p !=
baykbb21q4 . P_194 ) { localX -> ghortk2b5p = baykbb21q4 . P_194 ;
ssSetBlockStateForSolverChangedAtMajorStep ( ivyyfeoocu -> _mdlRefSfcnS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( ivyyfeoocu ->
_mdlRefSfcnS ) ; } localDW -> pputvuru1l = 4 ; } else { if ( localDW ->
pputvuru1l != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( ivyyfeoocu
-> _mdlRefSfcnS ) ; } localDW -> pputvuru1l = 0 ; } mb1yx4uqj4_p = localX ->
ghortk2b5p ; } else { mb1yx4uqj4_p = localX -> ghortk2b5p ; } apo5rnh2r4_p =
( localB -> fnv1q5plhv - mb1yx4uqj4_p ) * baykbb21q4 . P_195 ; lmhbywdt1w =
baykbb21q4 . P_69 * mb1yx4uqj4_p ; a5uv3oymxx = baykbb21q4 . P_65 * localB ->
fnv1q5plhv ; if ( ssIsModeUpdateTimeStep ( ivyyfeoocu -> _mdlRefSfcnS ) ) {
localDW -> argkysitez = ( localB -> fnv1q5plhv >= baykbb21q4 . P_196 ) ; } if
( muDoubleScalarAbs ( localB -> fnv1q5plhv ) > baykbb21q4 . P_76 ) { if ( (
localB -> fnv1q5plhv >= - baykbb21q4 . P_136 ) && ( localB -> fnv1q5plhv <=
baykbb21q4 . P_136 ) ) { if ( localDW -> argkysitez ) { pr3cg1ha33_tmp =
baykbb21q4 . P_204 ; } else { pr3cg1ha33_tmp = localB -> hrfkonmsex ; }
itfqqzwjsw_idx_0 = 2.0 / ( 3.0 - muDoubleScalarPower ( localB -> fnv1q5plhv ,
2.0 ) ) * pr3cg1ha33_tmp ; } else { itfqqzwjsw_idx_0 = localB -> fnv1q5plhv ;
} localB -> ljyemqt3v4 = mb1yx4uqj4_p / itfqqzwjsw_idx_0 ; } else { localB ->
ljyemqt3v4 = baykbb21q4 . P_202 ; } if ( rtmIsMajorTimeStep ( ivyyfeoocu ) &&
rtmIsSampleHit ( ivyyfeoocu , 1 , 0 ) ) { if ( ssIsModeUpdateTimeStep (
ivyyfeoocu -> _mdlRefSfcnS ) ) { localDW -> he5fvhy1qg = ( localB ->
ljyemqt3v4 > localB -> ny1zcj0jmp ) ; localDW -> azodehxuoi = ( localB ->
ljyemqt3v4 < localB -> j35i32lj01 ) ; } localB -> kqg3p5gqwp = localDW ->
he5fvhy1qg ; localB -> cf2p35ih0y = localDW -> azodehxuoi ; } if ( localB ->
kqg3p5gqwp ) { itfqqzwjsw_idx_0 = localB -> ny1zcj0jmp ; } else if ( localB
-> cf2p35ih0y ) { itfqqzwjsw_idx_0 = localB -> j35i32lj01 ; } else {
itfqqzwjsw_idx_0 = localB -> ljyemqt3v4 ; } if ( ( baykbb21q4 . P_448 != 0 )
&& ( ( itfqqzwjsw_idx_0 < baykbb21q4 . P_122 [ 0U ] ) || ( itfqqzwjsw_idx_0 >
baykbb21q4 . P_122 [ 9U ] ) ) ) { if ( baykbb21q4 . P_448 == 2 ) { S =
ivyyfeoocu -> _mdlRefSfcnS ; arg1 = rt_CreateFullPathToTop ( ivyyfeoocu ->
DataMapInfo . mmi . InstanceMap . fullPath ,
 "DrivetrainHevP4/Torque Converter Automatic Transmission/Torque Converter/Torque Converter With Lock-up/Unlocked/Torque Converter/speed ratio Prelookup"
) ; diag = CreateDiagnosticAsVoidPtr (
"Simulink:blocks:PreLookupOutofRangeInputError" , 1 , 5 , arg1 ) ;
rt_ssSet_slErrMsg ( S , diag ) ; } else { S = ivyyfeoocu -> _mdlRefSfcnS ;
arg1 = rt_CreateFullPathToTop ( ivyyfeoocu -> DataMapInfo . mmi . InstanceMap
. fullPath ,
 "DrivetrainHevP4/Torque Converter Automatic Transmission/Torque Converter/Torque Converter With Lock-up/Unlocked/Torque Converter/speed ratio Prelookup"
) ; diag = CreateDiagnosticAsVoidPtr (
"Simulink:blocks:PreLookupOutofRangeInputWarn_Clip" , 1 , 5 , arg1 ) ;
rt_ssReportDiagnosticAsWarning ( S , diag ) ; } } aae02dnkop_p = plook_bincpa
( itfqqzwjsw_idx_0 , baykbb21q4 . P_122 , 9U , & he1kmjud5a_idx_0 , & localDW
-> d21f1j45dt ) ; ooraxcq41l_p = intrp1d_la_pw ( aae02dnkop_p ,
he1kmjud5a_idx_0 , baykbb21q4 . P_141 , 9U ) ; if ( ( rtmIsMajorTimeStep (
ivyyfeoocu ) && rtmIsSampleHit ( ivyyfeoocu , 1 , 0 ) ) &&
ssIsModeUpdateTimeStep ( ivyyfeoocu -> _mdlRefSfcnS ) ) { if ( localB ->
f2u0ml4nqb ) { if ( ! localDW -> lvgmhoo4ri ) { if ( rtmGetTaskTime (
ivyyfeoocu , 1 ) != rtmGetTStart ( ivyyfeoocu ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( ivyyfeoocu -> _mdlRefSfcnS ) ; }
( void ) memset ( & ( localXdis -> dgkffoehk2 ) , 0 , 1 * sizeof ( boolean_T
) ) ; localX -> dgkffoehk2 = baykbb21q4 . P_186 ; localDW -> lvgmhoo4ri =
true ; } } else { if ( rtmGetTaskTime ( ivyyfeoocu , 1 ) == rtmGetTStart (
ivyyfeoocu ) ) { ( void ) memset ( & ( localXdis -> dgkffoehk2 ) , 1 , 1 *
sizeof ( boolean_T ) ) ; } if ( localDW -> lvgmhoo4ri ) {
ssSetBlockStateForSolverChangedAtMajorStep ( ivyyfeoocu -> _mdlRefSfcnS ) ; (
void ) memset ( & ( localXdis -> dgkffoehk2 ) , 1 , 1 * sizeof ( boolean_T )
) ; localDW -> lvgmhoo4ri = false ; } } } if ( localDW -> lvgmhoo4ri ) {
localB -> pj5zsfb4kd = localX -> dgkffoehk2 ; localB -> ihesps1hq2 = (
ooraxcq41l_p - localB -> pj5zsfb4kd ) * localB -> eiifz4uu41 ; if (
ssIsModeUpdateTimeStep ( ivyyfeoocu -> _mdlRefSfcnS ) ) { srUpdateBC (
localDW -> jzzjgbrvwm ) ; } } he1kmjud5a_idx_0 = muDoubleScalarTanh ( localB
-> fnv1q5plhv - mb1yx4uqj4_p ) * intrp1d_la_pw ( aae02dnkop_p ,
he1kmjud5a_idx_0 , localB -> bokfc5lq0a , 9U ) * localB -> fnv1q5plhv *
localB -> fnv1q5plhv ; if ( he1kmjud5a_idx_0 > baykbb21q4 . P_198 ) {
he1kmjud5a_idx_0 = baykbb21q4 . P_198 ; } else if ( he1kmjud5a_idx_0 <
baykbb21q4 . P_199 ) { he1kmjud5a_idx_0 = baykbb21q4 . P_199 ; } apo5rnh2r4_p
= opgvmw0q00_p * muDoubleScalarTanh ( apo5rnh2r4_p ) ; if ( baykbb21q4 .
P_128 > baykbb21q4 . P_197 ) { ooraxcq41l_p = localB -> pj5zsfb4kd ; }
opgvmw0q00_p = ( ( ooraxcq41l_p * he1kmjud5a_idx_0 + apo5rnh2r4_p ) -
lmhbywdt1w ) - lloq400s2j_p ; a5uv3oymxx = ( ( * f1yddjot4o - apo5rnh2r4_p )
- he1kmjud5a_idx_0 ) - a5uv3oymxx ; localB -> be4ry5q1am = 1.0 / baykbb21q4 .
P_16 * a5uv3oymxx ; * angnzwuao0 = localB -> fnv1q5plhv ; localB ->
io22wmrl1e = itfqqzwjsw_idx_0 ; itfqqzwjsw_idx_0 = a5uv3oymxx * localB ->
fnv1q5plhv ; a5uv3oymxx = opgvmw0q00_p * mb1yx4uqj4_p ; localB -> k3dacr0mha
= 1.0 / baykbb21q4 . P_18 * opgvmw0q00_p ; if ( ssIsModeUpdateTimeStep (
ivyyfeoocu -> _mdlRefSfcnS ) ) { srUpdateBC ( localDW -> hzuoark40t ) ; } }
opgvmw0q00_p = * f1yddjot4o * * angnzwuao0 ; lmhbywdt1w = - lloq400s2j_p *
mb1yx4uqj4_p ; if ( opgvmw0q00_p > baykbb21q4 . P_237 ) { opgvmw0q00_p =
baykbb21q4 . P_237 ; } else if ( opgvmw0q00_p < baykbb21q4 . P_238 ) {
opgvmw0q00_p = baykbb21q4 . P_238 ; } if ( lmhbywdt1w > baykbb21q4 . P_237 )
{ lmhbywdt1w = baykbb21q4 . P_237 ; } else if ( lmhbywdt1w < baykbb21q4 .
P_238 ) { lmhbywdt1w = baykbb21q4 . P_238 ; } if ( - itfqqzwjsw_idx_0 >
baykbb21q4 . P_237 ) { pr3cg1ha33_tmp = baykbb21q4 . P_237 ; } else if ( -
itfqqzwjsw_idx_0 < baykbb21q4 . P_238 ) { pr3cg1ha33_tmp = baykbb21q4 . P_238
; } else { pr3cg1ha33_tmp = - itfqqzwjsw_idx_0 ; } if ( - a5uv3oymxx >
baykbb21q4 . P_237 ) { apo5rnh2r4_p = baykbb21q4 . P_237 ; } else if ( -
a5uv3oymxx < baykbb21q4 . P_238 ) { apo5rnh2r4_p = baykbb21q4 . P_238 ; }
else { apo5rnh2r4_p = - a5uv3oymxx ; } localB -> fry4eke1hg = ( (
opgvmw0q00_p + lmhbywdt1w ) + pr3cg1ha33_tmp ) + apo5rnh2r4_p ; if (
ssIsModeUpdateTimeStep ( ivyyfeoocu -> _mdlRefSfcnS ) ) { localDW ->
jqva5kfmih = ( localB -> fry4eke1hg >= 0.0 ) ; localDW -> nxeroykpr2 = ( ( *
angnzwuao0 >= baykbb21q4 . P_113 ) || ( ( ! ( * angnzwuao0 <= baykbb21q4 .
P_117 ) ) && localDW -> nxeroykpr2 ) ) ; } if ( rtmIsMajorTimeStep (
ivyyfeoocu ) && rtmIsSampleHit ( ivyyfeoocu , 1 , 0 ) ) { if (
ssIsModeUpdateTimeStep ( ivyyfeoocu -> _mdlRefSfcnS ) ) { localDW ->
ch2lrz3var = ( localB -> io22wmrl1e >= baykbb21q4 . P_123 ) ; } if ( localDW
-> nxeroykpr2 ) { aivsyrjhjg = baykbb21q4 . P_446 ; } else { aivsyrjhjg =
baykbb21q4 . P_447 ; } localB -> oxoyxuurgp = ( aivsyrjhjg && localDW ->
ch2lrz3var ) ; } if ( ! ( localB -> ljh5u1acpa != 0.0 ) ) { nsqbm2polz_p =
localB -> aucozmyinh ; } localB -> be1wzchom3 = ( localB -> oxoyxuurgp -
nsqbm2polz_p ) * localB -> bekdfczw0e ; if ( rtmIsMajorTimeStep ( ivyyfeoocu
) && rtmIsSampleHit ( ivyyfeoocu , 1 , 0 ) ) { localB -> ek3squgt0x = localDW
-> duvopzo5hi ; } if ( ssIsModeUpdateTimeStep ( ivyyfeoocu -> _mdlRefSfcnS )
) { zcEvent = rt_ZCFcn ( RISING_ZERO_CROSSING , & localZCE -> fasjnd50pz , (
localB -> ek3squgt0x ) ) ; if ( ( zcEvent != NO_ZCEVENT ) || ( localDW ->
fp1iusufwe != 0 ) ) { aivsyrjhjg = ( localX -> ds1yb3kwf1 != localB ->
c1j4rwiuym ) ; localX -> ds1yb3kwf1 = localB -> c1j4rwiuym ; if ( aivsyrjhjg
) { ssSetBlockStateForSolverChangedAtMajorStep ( ivyyfeoocu -> _mdlRefSfcnS )
; } } itfqqzwjsw_idx_0 = localX -> ds1yb3kwf1 ; } else { itfqqzwjsw_idx_0 =
localX -> ds1yb3kwf1 ; } if ( * f0jwsprwuj > baykbb21q4 . P_243 ) {
nsqbm2polz_p = baykbb21q4 . P_243 ; } else if ( * f0jwsprwuj < baykbb21q4 .
P_244 ) { nsqbm2polz_p = baykbb21q4 . P_244 ; } else { nsqbm2polz_p = *
f0jwsprwuj ; } if ( localB -> ek3squgt0x != 0.0 ) { pr3cg1ha33_tmp =
itfqqzwjsw_idx_0 ; } else { pr3cg1ha33_tmp = localB -> c1j4rwiuym ; } localB
-> mxhnw2ktck = ( nsqbm2polz_p - pr3cg1ha33_tmp ) * localB -> flgyy2zou1 ; if
( itfqqzwjsw_idx_0 > baykbb21q4 . P_246 ) { lmhbywdt1w = itfqqzwjsw_idx_0 -
baykbb21q4 . P_246 ; } else if ( itfqqzwjsw_idx_0 >= baykbb21q4 . P_245 ) {
lmhbywdt1w = 0.0 ; } else { lmhbywdt1w = itfqqzwjsw_idx_0 - baykbb21q4 .
P_245 ; } if ( rtmIsMajorTimeStep ( ivyyfeoocu ) && rtmIsSampleHit (
ivyyfeoocu , 1 , 0 ) ) { if ( localDW -> eagcze1ljh ) { localDW -> eagcze1ljh
= false ; localB -> dg1a1yunpp = baykbb21q4 . P_247 ; } else { localB ->
dg1a1yunpp = baykbb21q4 . P_303 ; } localB -> drywpc5ov4 = localDW ->
la5hpljke2 ; } if ( localB -> dg1a1yunpp > baykbb21q4 . P_248 ) { a5uv3oymxx
= localX -> kahcvzwgxd ; } else { a5uv3oymxx = baykbb21q4 . P_111 ; } if (
ssIsModeUpdateTimeStep ( ivyyfeoocu -> _mdlRefSfcnS ) ) { zcEvent = rt_ZCFcn
( RISING_ZERO_CROSSING , & localZCE -> pyejmhcubo , ( localB -> drywpc5ov4 )
) ; if ( ( zcEvent != NO_ZCEVENT ) || ( localDW -> fp0ancafza != 0 ) ) {
aivsyrjhjg = ( localX -> ievyscdcrq != localB -> pdta0pgvmw ) ; localX ->
ievyscdcrq = localB -> pdta0pgvmw ; if ( aivsyrjhjg ) {
ssSetBlockStateForSolverChangedAtMajorStep ( ivyyfeoocu -> _mdlRefSfcnS ) ; }
} opgvmw0q00_p = localX -> ievyscdcrq ; } else { opgvmw0q00_p = localX ->
ievyscdcrq ; } nsqbm2polz_p = baykbb21q4 . P_57 * opgvmw0q00_p + baykbb21q4 .
P_91 * localX -> ibw2wgocuq ; if ( rtmIsMajorTimeStep ( ivyyfeoocu ) &&
rtmIsSampleHit ( ivyyfeoocu , 1 , 0 ) ) { if ( localDW -> k2cw3yj0k4 ) {
localDW -> k2cw3yj0k4 = false ; localB -> o3qk5tvbfy = baykbb21q4 . P_250 ; }
else { localB -> o3qk5tvbfy = baykbb21q4 . P_305 ; } if ( localDW ->
l53qtov1bq ) { localDW -> l53qtov1bq = false ; localB -> nam42e4bjp =
baykbb21q4 . P_252 ; } else { localB -> nam42e4bjp = baykbb21q4 . P_304 ; } }
if ( localB -> o3qk5tvbfy > baykbb21q4 . P_251 ) { ooraxcq41l_p = localX ->
m4rqj3hpvj ; } else { ooraxcq41l_p = baykbb21q4 . P_111 ; } if ( localB ->
nam42e4bjp > baykbb21q4 . P_253 ) { apo5rnh2r4_p = localX -> m4rqj3hpvj ; }
else { apo5rnh2r4_p = baykbb21q4 . P_105 ; } rtPrevAction = localDW ->
fqwhbtulpg ; if ( ssIsModeUpdateTimeStep ( ivyyfeoocu -> _mdlRefSfcnS ) ) {
rtAction = ( int8_T ) ! ( lmhbywdt1w != 0.0 ) ; localDW -> fqwhbtulpg =
rtAction ; } else { rtAction = localDW -> fqwhbtulpg ; } if ( rtPrevAction !=
rtAction ) { ssSetBlockStateForSolverChangedAtMajorStep ( ivyyfeoocu ->
_mdlRefSfcnS ) ; if ( rtmGetTaskTime ( ivyyfeoocu , 0 ) == rtmGetTStart (
ivyyfeoocu ) ) { ( void ) memset ( & ( localXdis -> m4rqj3hpvj ) , 1 , 1 *
sizeof ( boolean_T ) ) ; ( void ) memset ( & ( localXdis -> kahcvzwgxd ) , 1
, 2 * sizeof ( boolean_T ) ) ; } switch ( rtPrevAction ) { case 0 : ( void )
memset ( & ( localXdis -> m4rqj3hpvj ) , 1 , 1 * sizeof ( boolean_T ) ) ;
break ; case 1 : ( void ) memset ( & ( localXdis -> kahcvzwgxd ) , 1 , 2 *
sizeof ( boolean_T ) ) ; break ; default : break ; } } if ( rtAction == 0 ) {
if ( rtPrevAction != 0 ) { localDW -> m0azm0ihsg = 1 ; if (
rtmIsFirstInitCond ( ivyyfeoocu ) ) { localX -> m4rqj3hpvj = 0.0 ; aivsyrjhjg
= slIsRapidAcceleratorSimulating ( ) ; if ( aivsyrjhjg ) { aivsyrjhjg = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
ivyyfeoocu -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
ivyyfeoocu -> _mdlRefSfcnS ) ) ; localDW -> m0azm0ihsg = ! aivsyrjhjg ; }
else { localDW -> m0azm0ihsg = 1 ; } } if ( rtmGetTaskTime ( ivyyfeoocu , 0 )
!= rtmGetTStart ( ivyyfeoocu ) ) { ssSetBlockStateForSolverChangedAtMajorStep
( ivyyfeoocu -> _mdlRefSfcnS ) ; } ( void ) memset ( & ( localXdis ->
m4rqj3hpvj ) , 0 , 1 * sizeof ( boolean_T ) ) ; } localB -> neygrfvky2 =
look1_binlxpw ( itfqqzwjsw_idx_0 , baykbb21q4 . P_10 , baykbb21q4 . P_27 , 6U
) ; if ( ssIsModeUpdateTimeStep ( ivyyfeoocu -> _mdlRefSfcnS ) ) { localDW ->
p3dybhws34 = ( localB -> neygrfvky2 >= 0.0 ) ; } if ( localDW -> p3dybhws34 >
0 ) { lmhbywdt1w = localB -> neygrfvky2 ; } else { lmhbywdt1w = - localB ->
neygrfvky2 ; } if ( ssIsModeUpdateTimeStep ( ivyyfeoocu -> _mdlRefSfcnS ) ) {
if ( localDW -> m0azm0ihsg != 0 ) { localX -> m4rqj3hpvj = a5uv3oymxx ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( ivyyfeoocu ->
_mdlRefSfcnS ) ; } a5uv3oymxx = localX -> m4rqj3hpvj ; } else { a5uv3oymxx =
localX -> m4rqj3hpvj ; } bpIndices [ 0U ] = plook_binc ( lloq400s2j_p ,
baykbb21q4 . P_43 , 6U , & he1kmjud5a_idx_0 ) ; naywudmk0g_p [ 0U ] =
he1kmjud5a_idx_0 ; bpIndices [ 1U ] = plook_binc ( a5uv3oymxx , baykbb21q4 .
P_106 , 10U , & he1kmjud5a_idx_0 ) ; naywudmk0g_p [ 1U ] = he1kmjud5a_idx_0 ;
bpIndices [ 2U ] = plook_binc ( itfqqzwjsw_idx_0 , baykbb21q4 . P_10 , 6U , &
he1kmjud5a_idx_0 ) ; naywudmk0g_p [ 2U ] = he1kmjud5a_idx_0 ; bpIndices [ 3U
] = plook_binc ( baykbb21q4 . P_300 , baykbb21q4 . P_42 , 1U , &
he1kmjud5a_idx_0 ) ; naywudmk0g_p [ 3U ] = he1kmjud5a_idx_0 ; apo5rnh2r4_p =
intrp4d_l_pw ( bpIndices , naywudmk0g_p , baykbb21q4 . P_85 , baykbb21q4 .
P_439 ) ; m4v3pwx3gp_p = muDoubleScalarAbs ( a5uv3oymxx ) ; ooraxcq41l_p = (
muDoubleScalarTanh ( ( baykbb21q4 . P_143 * m4v3pwx3gp_p - baykbb21q4 . P_159
) * baykbb21q4 . P_144 ) + baykbb21q4 . P_159 ) * baykbb21q4 . P_145 ;
he1kmjud5a_idx_0 = - nsqbm2polz_p / localB -> neygrfvky2 ; m4v3pwx3gp_p = (
muDoubleScalarTanh ( ( baykbb21q4 . P_147 * m4v3pwx3gp_p - baykbb21q4 . P_162
) * baykbb21q4 . P_148 ) + baykbb21q4 . P_162 ) * baykbb21q4 . P_149 ; if (
lloq400s2j_p * a5uv3oymxx > baykbb21q4 . P_142 ) { pr3cg1ha33_tmp =
apo5rnh2r4_p ; } else { pr3cg1ha33_tmp = baykbb21q4 . P_157 ; } if ( ! (
he1kmjud5a_idx_0 * a5uv3oymxx > baykbb21q4 . P_146 ) ) { apo5rnh2r4_p =
baykbb21q4 . P_160 ; } localB -> kujqrzsfke = ( ( ( ( baykbb21q4 . P_159 -
ooraxcq41l_p ) * baykbb21q4 . P_158 + pr3cg1ha33_tmp * ooraxcq41l_p ) *
lloq400s2j_p + ( ( baykbb21q4 . P_162 - m4v3pwx3gp_p ) * baykbb21q4 . P_161 +
apo5rnh2r4_p * m4v3pwx3gp_p ) * he1kmjud5a_idx_0 ) - 1.0 / lmhbywdt1w /
lmhbywdt1w * look1_binlxpw ( itfqqzwjsw_idx_0 , baykbb21q4 . P_10 ,
baykbb21q4 . P_66 , 6U ) * a5uv3oymxx ) * ( 1.0 / ( look1_binlxpw (
itfqqzwjsw_idx_0 , baykbb21q4 . P_10 , baykbb21q4 . P_17 , 6U ) / lmhbywdt1w
/ lmhbywdt1w ) ) ; lloq400s2j_p = a5uv3oymxx / localB -> neygrfvky2 ; if (
ssIsModeUpdateTimeStep ( ivyyfeoocu -> _mdlRefSfcnS ) ) { srUpdateBC (
localDW -> eo10mdoia0 ) ; } } else { if ( rtAction != rtPrevAction ) {
localDW -> g0lhf5n0k0 = 1 ; if ( rtmIsFirstInitCond ( ivyyfeoocu ) ) { localX
-> kahcvzwgxd = 0.0 ; aivsyrjhjg = slIsRapidAcceleratorSimulating ( ) ; if (
aivsyrjhjg ) { aivsyrjhjg = ( slIsRapidAcceleratorSimulating ( ) ?
ssGetGlobalInitialStatesAvailable ( ivyyfeoocu -> _mdlRefSfcnS ) :
simTgtGlobalInitialStatesAvailable ( ivyyfeoocu -> _mdlRefSfcnS ) ) ; localDW
-> g0lhf5n0k0 = ! aivsyrjhjg ; } else { localDW -> g0lhf5n0k0 = 1 ; } localX
-> jk1yalfhod = 0.0 ; } localDW -> byy0jx5dbt = 1 ; if ( rtmIsFirstInitCond (
ivyyfeoocu ) ) { aivsyrjhjg = slIsRapidAcceleratorSimulating ( ) ; if (
aivsyrjhjg ) { aivsyrjhjg = ( slIsRapidAcceleratorSimulating ( ) ?
ssGetGlobalInitialStatesAvailable ( ivyyfeoocu -> _mdlRefSfcnS ) :
simTgtGlobalInitialStatesAvailable ( ivyyfeoocu -> _mdlRefSfcnS ) ) ; localDW
-> byy0jx5dbt = ! aivsyrjhjg ; } else { localDW -> byy0jx5dbt = 1 ; } } if (
rtmGetTaskTime ( ivyyfeoocu , 0 ) != rtmGetTStart ( ivyyfeoocu ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( ivyyfeoocu -> _mdlRefSfcnS ) ; }
( void ) memset ( & ( localXdis -> kahcvzwgxd ) , 0 , 2 * sizeof ( boolean_T
) ) ; } localB -> nve4s2kze1 = look1_binlxpw ( itfqqzwjsw_idx_0 , baykbb21q4
. P_10 , baykbb21q4 . P_27 , 6U ) ; if ( ssIsModeUpdateTimeStep ( ivyyfeoocu
-> _mdlRefSfcnS ) ) { localDW -> eq1l4ggd02 = ( localB -> nve4s2kze1 >= 0.0 )
; } if ( localDW -> eq1l4ggd02 > 0 ) { lmhbywdt1w = localB -> nve4s2kze1 ; }
else { lmhbywdt1w = - localB -> nve4s2kze1 ; } if ( ssIsModeUpdateTimeStep (
ivyyfeoocu -> _mdlRefSfcnS ) ) { if ( localDW -> g0lhf5n0k0 != 0 ) { localX
-> kahcvzwgxd = ooraxcq41l_p ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( ivyyfeoocu ->
_mdlRefSfcnS ) ; } a5uv3oymxx = localX -> kahcvzwgxd ; if ( localDW ->
byy0jx5dbt != 0 ) { localX -> jk1yalfhod = apo5rnh2r4_p ; } apo5rnh2r4_p =
localX -> jk1yalfhod ; } else { a5uv3oymxx = localX -> kahcvzwgxd ;
apo5rnh2r4_p = localX -> jk1yalfhod ; } ooraxcq41l_p = - nsqbm2polz_p /
localB -> nve4s2kze1 ; if ( ooraxcq41l_p * apo5rnh2r4_p > baykbb21q4 . P_163
) { bpIndices [ 0U ] = plook_binc ( baykbb21q4 . P_179 , baykbb21q4 . P_43 ,
6U , & he1kmjud5a_idx_0 ) ; naywudmk0g_p [ 0U ] = he1kmjud5a_idx_0 ;
bpIndices [ 1U ] = plook_binc ( apo5rnh2r4_p , baykbb21q4 . P_106 , 10U , &
he1kmjud5a_idx_0 ) ; naywudmk0g_p [ 1U ] = he1kmjud5a_idx_0 ; bpIndices [ 2U
] = plook_binc ( itfqqzwjsw_idx_0 , baykbb21q4 . P_10 , 6U , &
he1kmjud5a_idx_0 ) ; naywudmk0g_p [ 2U ] = he1kmjud5a_idx_0 ; bpIndices [ 3U
] = plook_binc ( baykbb21q4 . P_300 , baykbb21q4 . P_42 , 1U , &
he1kmjud5a_idx_0 ) ; naywudmk0g_p [ 3U ] = he1kmjud5a_idx_0 ;
he1kmjud5a_idx_0 = intrp4d_l_pw ( bpIndices , naywudmk0g_p , baykbb21q4 .
P_85 , baykbb21q4 . P_441 ) ; } else { he1kmjud5a_idx_0 = baykbb21q4 . P_174
; } m4v3pwx3gp_p = ( muDoubleScalarTanh ( ( baykbb21q4 . P_164 *
muDoubleScalarAbs ( apo5rnh2r4_p ) - baykbb21q4 . P_176 ) * baykbb21q4 .
P_165 ) + baykbb21q4 . P_176 ) * baykbb21q4 . P_166 ; localB -> av4vht34f5 =
( lloq400s2j_p - localB -> mdqu3ek43b * a5uv3oymxx ) * ( 1.0 / localB ->
djghxpbhft ) ; localB -> njakm2joqh = ( ( ( baykbb21q4 . P_176 - m4v3pwx3gp_p
) * baykbb21q4 . P_175 + he1kmjud5a_idx_0 * m4v3pwx3gp_p ) * ooraxcq41l_p -
1.0 / lmhbywdt1w / lmhbywdt1w * look1_binlxpw ( itfqqzwjsw_idx_0 , baykbb21q4
. P_10 , baykbb21q4 . P_66 , 6U ) * apo5rnh2r4_p ) * ( 1.0 / ( look1_binlxpw
( itfqqzwjsw_idx_0 , baykbb21q4 . P_10 , baykbb21q4 . P_17 , 6U ) /
lmhbywdt1w / lmhbywdt1w ) ) ; lloq400s2j_p = apo5rnh2r4_p / localB ->
nve4s2kze1 ; if ( ssIsModeUpdateTimeStep ( ivyyfeoocu -> _mdlRefSfcnS ) ) {
srUpdateBC ( localDW -> pvdkznjss2 ) ; } } * dly32btpwe = muDoubleScalarRound
( itfqqzwjsw_idx_0 ) ; if ( ssIsModeUpdateTimeStep ( ivyyfeoocu ->
_mdlRefSfcnS ) ) { if ( localDW -> go4nltk2qq != 0 ) { localX -> hh1fbq041v [
0 ] = localB -> cjglkijkah [ 0 ] ; localX -> hh1fbq041v [ 1 ] = localB ->
cjglkijkah [ 1 ] ; } if ( localX -> hh1fbq041v [ 0 ] >= baykbb21q4 . P_257 )
{ if ( localX -> hh1fbq041v [ 0 ] != baykbb21q4 . P_257 ) { localX ->
hh1fbq041v [ 0 ] = baykbb21q4 . P_257 ;
ssSetBlockStateForSolverChangedAtMajorStep ( ivyyfeoocu -> _mdlRefSfcnS ) ; }
} else if ( ( localX -> hh1fbq041v [ 0 ] <= baykbb21q4 . P_258 ) && ( localX
-> hh1fbq041v [ 0 ] != baykbb21q4 . P_258 ) ) { localX -> hh1fbq041v [ 0 ] =
baykbb21q4 . P_258 ; ssSetBlockStateForSolverChangedAtMajorStep ( ivyyfeoocu
-> _mdlRefSfcnS ) ; } if ( localX -> hh1fbq041v [ 1 ] >= baykbb21q4 . P_257 )
{ if ( localX -> hh1fbq041v [ 1 ] != baykbb21q4 . P_257 ) { localX ->
hh1fbq041v [ 1 ] = baykbb21q4 . P_257 ;
ssSetBlockStateForSolverChangedAtMajorStep ( ivyyfeoocu -> _mdlRefSfcnS ) ; }
} else if ( ( localX -> hh1fbq041v [ 1 ] <= baykbb21q4 . P_258 ) && ( localX
-> hh1fbq041v [ 1 ] != baykbb21q4 . P_258 ) ) { localX -> hh1fbq041v [ 1 ] =
baykbb21q4 . P_258 ; ssSetBlockStateForSolverChangedAtMajorStep ( ivyyfeoocu
-> _mdlRefSfcnS ) ; } j0jditj4mm_p [ 0 ] = localX -> hh1fbq041v [ 0 ] ;
j0jditj4mm_p [ 1 ] = localX -> hh1fbq041v [ 1 ] ; } else { if ( localX ->
hh1fbq041v [ 0 ] >= baykbb21q4 . P_257 ) { j0jditj4mm_p [ 0 ] = baykbb21q4 .
P_257 ; } else if ( localX -> hh1fbq041v [ 0 ] <= baykbb21q4 . P_258 ) {
j0jditj4mm_p [ 0 ] = baykbb21q4 . P_258 ; } else { j0jditj4mm_p [ 0 ] =
localX -> hh1fbq041v [ 0 ] ; } if ( localX -> hh1fbq041v [ 1 ] >= baykbb21q4
. P_257 ) { j0jditj4mm_p [ 1 ] = baykbb21q4 . P_257 ; } else if ( localX ->
hh1fbq041v [ 1 ] <= baykbb21q4 . P_258 ) { j0jditj4mm_p [ 1 ] = baykbb21q4 .
P_258 ; } else { j0jditj4mm_p [ 1 ] = localX -> hh1fbq041v [ 1 ] ; } }
itfqqzwjsw_idx_0 = baykbb21q4 . P_30 / 2.0 ; lmhbywdt1w = localB ->
j5t2rk2sih * j0jditj4mm_p [ 0 ] * itfqqzwjsw_idx_0 + localB -> j5t2rk2sih *
j0jditj4mm_p [ 1 ] * itfqqzwjsw_idx_0 ; localB -> pn3te01nlx = lloq400s2j_p -
lmhbywdt1w ; if ( ! ( localB -> drywpc5ov4 != 0.0 ) ) { opgvmw0q00_p = localB
-> pdta0pgvmw ; } localB -> heskvxmmnh = ( localB -> pn3te01nlx -
opgvmw0q00_p ) * baykbb21q4 . P_107 ; localB -> fm10e1ao44 = mb1yx4uqj4_p -
a5uv3oymxx ; if ( ! ( localB -> oyptmqqt4o != 0.0 ) ) { olhvao1vrb_p = localB
-> psrgwnnlh0 ; } localB -> hzfj2hy3tt = ( localB -> fm10e1ao44 -
olhvao1vrb_p ) * baykbb21q4 . P_108 ; if ( ssIsModeUpdateTimeStep (
ivyyfeoocu -> _mdlRefSfcnS ) ) { if ( localDW -> lmofltzpch != 0 ) { localX
-> g4a4nx25kp [ 0 ] = localB -> i5yj1qj5v3 [ 0 ] ; localX -> g4a4nx25kp [ 1 ]
= localB -> i5yj1qj5v3 [ 1 ] ; } if ( localX -> g4a4nx25kp [ 0 ] >=
baykbb21q4 . P_259 ) { if ( localX -> g4a4nx25kp [ 0 ] != baykbb21q4 . P_259
) { localX -> g4a4nx25kp [ 0 ] = baykbb21q4 . P_259 ;
ssSetBlockStateForSolverChangedAtMajorStep ( ivyyfeoocu -> _mdlRefSfcnS ) ; }
} else if ( ( localX -> g4a4nx25kp [ 0 ] <= baykbb21q4 . P_260 ) && ( localX
-> g4a4nx25kp [ 0 ] != baykbb21q4 . P_260 ) ) { localX -> g4a4nx25kp [ 0 ] =
baykbb21q4 . P_260 ; ssSetBlockStateForSolverChangedAtMajorStep ( ivyyfeoocu
-> _mdlRefSfcnS ) ; } if ( localX -> g4a4nx25kp [ 1 ] >= baykbb21q4 . P_259 )
{ if ( localX -> g4a4nx25kp [ 1 ] != baykbb21q4 . P_259 ) { localX ->
g4a4nx25kp [ 1 ] = baykbb21q4 . P_259 ;
ssSetBlockStateForSolverChangedAtMajorStep ( ivyyfeoocu -> _mdlRefSfcnS ) ; }
} else if ( ( localX -> g4a4nx25kp [ 1 ] <= baykbb21q4 . P_260 ) && ( localX
-> g4a4nx25kp [ 1 ] != baykbb21q4 . P_260 ) ) { localX -> g4a4nx25kp [ 1 ] =
baykbb21q4 . P_260 ; ssSetBlockStateForSolverChangedAtMajorStep ( ivyyfeoocu
-> _mdlRefSfcnS ) ; } mk1ael1b2v_p [ 0 ] = localX -> g4a4nx25kp [ 0 ] ;
mk1ael1b2v_p [ 1 ] = localX -> g4a4nx25kp [ 1 ] ; } else { if ( localX ->
g4a4nx25kp [ 0 ] >= baykbb21q4 . P_259 ) { mk1ael1b2v_p [ 0 ] = baykbb21q4 .
P_259 ; } else if ( localX -> g4a4nx25kp [ 0 ] <= baykbb21q4 . P_260 ) {
mk1ael1b2v_p [ 0 ] = baykbb21q4 . P_260 ; } else { mk1ael1b2v_p [ 0 ] =
localX -> g4a4nx25kp [ 0 ] ; } if ( localX -> g4a4nx25kp [ 1 ] >= baykbb21q4
. P_259 ) { mk1ael1b2v_p [ 1 ] = baykbb21q4 . P_259 ; } else if ( localX ->
g4a4nx25kp [ 1 ] <= baykbb21q4 . P_260 ) { mk1ael1b2v_p [ 1 ] = baykbb21q4 .
P_260 ; } else { mk1ael1b2v_p [ 1 ] = localX -> g4a4nx25kp [ 1 ] ; } }
itfqqzwjsw_idx_0 = baykbb21q4 . P_31 / 2.0 ; * otyz5h01ax = localB ->
kgk4a0mjis * mk1ael1b2v_p [ 0 ] * itfqqzwjsw_idx_0 + localB -> kgk4a0mjis *
mk1ael1b2v_p [ 1 ] * itfqqzwjsw_idx_0 ; naywudmk0g_p [ 0 ] = * otyz5h01ax ;
olhvao1vrb_p = * f35royvs0l * naywudmk0g_p [ 0 ] ; lloq400s2j_p = (
muDoubleScalarTanh ( ( baykbb21q4 . P_263 * muDoubleScalarAbs ( naywudmk0g_p
[ 0 ] ) - baykbb21q4 . P_319 ) * baykbb21q4 . P_264 ) + baykbb21q4 . P_319 )
* baykbb21q4 . P_265 ; if ( olhvao1vrb_p > baykbb21q4 . P_262 ) {
pr3cg1ha33_tmp = baykbb21q4 . P_83 ; } else { pr3cg1ha33_tmp = baykbb21q4 .
P_317 ; } olhvao1vrb_p = ( ( baykbb21q4 . P_319 - lloq400s2j_p ) * baykbb21q4
. P_318 + pr3cg1ha33_tmp * lloq400s2j_p ) * * f35royvs0l ; lloq400s2j_p = (
muDoubleScalarTanh ( ( baykbb21q4 . P_267 * muDoubleScalarAbs ( -
mk1ael1b2v_p [ 0 ] ) - baykbb21q4 . P_313 ) * baykbb21q4 . P_268 ) +
baykbb21q4 . P_313 ) * baykbb21q4 . P_269 ; mb1yx4uqj4_p = (
muDoubleScalarTanh ( ( baykbb21q4 . P_271 * muDoubleScalarAbs ( -
mk1ael1b2v_p [ 1 ] ) - baykbb21q4 . P_316 ) * baykbb21q4 . P_272 ) +
baykbb21q4 . P_316 ) * baykbb21q4 . P_273 ; if ( - htragqvhmu_p * -
mk1ael1b2v_p [ 0 ] > baykbb21q4 . P_266 ) { pr3cg1ha33_tmp = baykbb21q4 .
P_83 ; } else { pr3cg1ha33_tmp = baykbb21q4 . P_311 ; } if ( - htragqvhmu_p *
- mk1ael1b2v_p [ 1 ] > baykbb21q4 . P_270 ) { apo5rnh2r4_p = baykbb21q4 .
P_83 ; } else { apo5rnh2r4_p = baykbb21q4 . P_314 ; } hyrr1hlavl (
olhvao1vrb_p , ( pr3cg1ha33_tmp * lloq400s2j_p + ( baykbb21q4 . P_313 -
lloq400s2j_p ) * baykbb21q4 . P_312 ) * - htragqvhmu_p , ( apo5rnh2r4_p *
mb1yx4uqj4_p + ( baykbb21q4 . P_316 - mb1yx4uqj4_p ) * baykbb21q4 . P_315 ) *
- htragqvhmu_p , baykbb21q4 . P_70 , baykbb21q4 . P_60 , baykbb21q4 . P_72 ,
baykbb21q4 . P_31 , baykbb21q4 . P_14 , baykbb21q4 . P_19 , baykbb21q4 . P_21
, mk1ael1b2v_p , & localB -> au45bfcvxs , & baykbb21q4 . au45bfcvxs ) ;
localB -> juttgy3dz5 = - j0jditj4mm_p [ 0 ] - localB -> awcntgnx3h ; if ( ! (
localB -> e1bxwmjm0o != 0.0 ) ) { hzpx21b5hr_p = localB -> nv4mnufhrx ; }
localB -> g3mpjs4fc0 = ( localB -> juttgy3dz5 - hzpx21b5hr_p ) * baykbb21q4 .
P_109 ; hzpx21b5hr_p = ( muDoubleScalarTanh ( ( baykbb21q4 . P_276 *
muDoubleScalarAbs ( lmhbywdt1w ) - baykbb21q4 . P_335 ) * baykbb21q4 . P_277
) + baykbb21q4 . P_335 ) * baykbb21q4 . P_278 ; htragqvhmu_p = (
muDoubleScalarTanh ( ( baykbb21q4 . P_280 * muDoubleScalarAbs ( -
j0jditj4mm_p [ 0 ] ) - baykbb21q4 . P_329 ) * baykbb21q4 . P_281 ) +
baykbb21q4 . P_329 ) * baykbb21q4 . P_282 ; olhvao1vrb_p = (
muDoubleScalarTanh ( ( baykbb21q4 . P_284 * muDoubleScalarAbs ( -
j0jditj4mm_p [ 1 ] ) - baykbb21q4 . P_332 ) * baykbb21q4 . P_285 ) +
baykbb21q4 . P_332 ) * baykbb21q4 . P_286 ; if ( nsqbm2polz_p * lmhbywdt1w >
baykbb21q4 . P_275 ) { pr3cg1ha33_tmp = baykbb21q4 . P_84 ; } else {
pr3cg1ha33_tmp = baykbb21q4 . P_333 ; } if ( - mphxn1b4ym_p * - j0jditj4mm_p
[ 0 ] > baykbb21q4 . P_279 ) { apo5rnh2r4_p = baykbb21q4 . P_84 ; } else {
apo5rnh2r4_p = baykbb21q4 . P_327 ; } if ( - mphxn1b4ym_p * - j0jditj4mm_p [
1 ] > baykbb21q4 . P_283 ) { mb1yx4uqj4_p = baykbb21q4 . P_84 ; } else {
mb1yx4uqj4_p = baykbb21q4 . P_330 ; } hyrr1hlavl ( ( pr3cg1ha33_tmp *
hzpx21b5hr_p + ( baykbb21q4 . P_335 - hzpx21b5hr_p ) * baykbb21q4 . P_334 ) *
nsqbm2polz_p , ( apo5rnh2r4_p * htragqvhmu_p + ( baykbb21q4 . P_329 -
htragqvhmu_p ) * baykbb21q4 . P_328 ) * - mphxn1b4ym_p , ( mb1yx4uqj4_p *
olhvao1vrb_p + ( baykbb21q4 . P_332 - olhvao1vrb_p ) * baykbb21q4 . P_331 ) *
- mphxn1b4ym_p , baykbb21q4 . P_71 , baykbb21q4 . P_61 , baykbb21q4 . P_73 ,
baykbb21q4 . P_30 , baykbb21q4 . P_15 , baykbb21q4 . P_20 , baykbb21q4 . P_22
, j0jditj4mm_p , & localB -> opea03cz4z , & baykbb21q4 . opea03cz4z ) ;
localB -> aff1zr5fiz = - mk1ael1b2v_p [ 0 ] - localB -> hbxu4f1wb0 ; if ( ! (
localB -> mkqlit4lyd != 0.0 ) ) { g1l3kytqj0_p = localB -> fd0tovz3nx ; }
localB -> aoab1mcoqd = ( localB -> aff1zr5fiz - g1l3kytqj0_p ) * baykbb21q4 .
P_110 ; mphxn1b4ym_p = localB -> awcntgnx3h * localB -> lvwghuuv4n ; if ( (
mphxn1b4ym_p >= - baykbb21q4 . P_46 ) && ( mphxn1b4ym_p <= baykbb21q4 . P_46
) ) { mphxn1b4ym_p = 4.0 / ( 3.0 - muDoubleScalarPower ( mphxn1b4ym_p / 2.0 ,
2.0 ) ) ; } else { mphxn1b4ym_p = muDoubleScalarAbs ( mphxn1b4ym_p ) ; }
localB -> nyqp2upnik = ( ( localB -> gp3qroe5qv . bkv4f44vnh / localB ->
lvwghuuv4n + localB -> gp3qroe5qv . gpm5eaqmyj ) - hki34vtjnv_p ) * (
mphxn1b4ym_p / baykbb21q4 . P_25 ) ; hki34vtjnv_p = localB -> hbxu4f1wb0 *
localB -> bleeiru2sr ; if ( ( hki34vtjnv_p >= - baykbb21q4 . P_47 ) && (
hki34vtjnv_p <= baykbb21q4 . P_47 ) ) { hki34vtjnv_p = 4.0 / ( 3.0 -
muDoubleScalarPower ( hki34vtjnv_p / 2.0 , 2.0 ) ) ; } else { hki34vtjnv_p =
muDoubleScalarAbs ( hki34vtjnv_p ) ; } localB -> mr1f1boypy = ( ( localB ->
pqa4uoh3p3 . bkv4f44vnh / localB -> bleeiru2sr + localB -> pqa4uoh3p3 .
gpm5eaqmyj ) - o45ekqd13x_p ) * ( hki34vtjnv_p / baykbb21q4 . P_26 ) ; } void
DrivetrainHevP4TID2 ( oqvwukdwj0 * const ivyyfeoocu , boolean_T * lrcjfnpoyz
, gpz52e3dwe * localB , f2a5ytrc5f * localDW ) { int32_T acw3aaqgin ; int32_T
mftmtr3bb1 ; real_T P_126 ; int32_T i ; uint32_T mdqu3ek43b_tmp ; localB ->
gtzo2kivgc = baykbb21q4 . P_96 * baykbb21q4 . P_86 ; localB -> aucozmyinh =
baykbb21q4 . P_296 ; localB -> bekdfczw0e = 1.0 / baykbb21q4 . P_127 *
baykbb21q4 . P_298 ; localB -> flgyy2zou1 = 1.0 / baykbb21q4 . P_129 *
baykbb21q4 . P_301 ; localB -> c1j4rwiuym = baykbb21q4 . P_11 ; localB ->
pdta0pgvmw = baykbb21q4 . P_79 ; localB -> psrgwnnlh0 = baykbb21q4 . P_80 ; *
lrcjfnpoyz = false ; localB -> i5yj1qj5v3 [ 0 ] = baykbb21q4 . P_118 ; localB
-> i5yj1qj5v3 [ 1 ] = baykbb21q4 . P_120 ; if ( baykbb21q4 . P_320 >
baykbb21q4 . P_322 ) { localB -> kgk4a0mjis = baykbb21q4 . P_321 ; } else {
localB -> kgk4a0mjis = - baykbb21q4 . P_321 ; } localB -> nv4mnufhrx =
baykbb21q4 . P_81 ; localB -> cjglkijkah [ 0 ] = baykbb21q4 . P_119 ; localB
-> cjglkijkah [ 1 ] = baykbb21q4 . P_121 ; if ( baykbb21q4 . P_336 >
baykbb21q4 . P_338 ) { localB -> j5t2rk2sih = baykbb21q4 . P_337 ; } else {
localB -> j5t2rk2sih = - baykbb21q4 . P_337 ; } localB -> fd0tovz3nx =
baykbb21q4 . P_82 ; if ( baykbb21q4 . P_36 > baykbb21q4 . P_341 ) { localB ->
lvwghuuv4n = baykbb21q4 . P_341 ; } else if ( baykbb21q4 . P_36 < baykbb21q4
. P_342 ) { localB -> lvwghuuv4n = baykbb21q4 . P_342 ; } else { localB ->
lvwghuuv4n = baykbb21q4 . P_36 ; } localB -> fh3orkmu21 = baykbb21q4 . P_388
* baykbb21q4 . P_77 ; mftmtr3bb1 = 0 ; while ( mftmtr3bb1 < 1 ) {
px02myt3heTID2 ( baykbb21q4 . P_67 , & localB -> lhmuy0r2mt [ mftmtr3bb1 ] .
mwc1d4al3c , & baykbb21q4 . lhmuy0r2mt . mwc1d4al3c ) ; mftmtr3bb1 ++ ; } if
( baykbb21q4 . P_37 > baykbb21q4 . P_390 ) { localB -> bleeiru2sr =
baykbb21q4 . P_390 ; } else if ( baykbb21q4 . P_37 < baykbb21q4 . P_391 ) {
localB -> bleeiru2sr = baykbb21q4 . P_391 ; } else { localB -> bleeiru2sr =
baykbb21q4 . P_37 ; } localB -> fe1otu0gja = baykbb21q4 . P_437 * baykbb21q4
. P_78 ; acw3aaqgin = 0 ; while ( acw3aaqgin < 1 ) { kmiehcqwcyTID2 (
baykbb21q4 . P_68 , & localB -> oodask1ixq [ acw3aaqgin ] . mifpjkvj4c , &
baykbb21q4 . oodask1ixq . mifpjkvj4c ) ; acw3aaqgin ++ ; } for ( i = 0 ; i <
10 ; i ++ ) { if ( baykbb21q4 . P_23 > baykbb21q4 . P_200 ) { localB ->
bokfc5lq0a [ i ] = baykbb21q4 . P_126 [ i ] ; } else { P_126 = baykbb21q4 .
P_126 [ i ] ; localB -> bokfc5lq0a [ i ] = 1.0 / P_126 / P_126 ; } } localB
-> f2u0ml4nqb = ( baykbb21q4 . P_128 > baykbb21q4 . P_190 ) ; P_126 =
baykbb21q4 . P_187 * baykbb21q4 . P_128 ; if ( P_126 > baykbb21q4 . P_188 ) {
P_126 = baykbb21q4 . P_188 ; } else if ( P_126 < baykbb21q4 . P_189 ) { P_126
= baykbb21q4 . P_189 ; } localB -> eiifz4uu41 = 1.0 / P_126 ; if (
ssIsModeUpdateTimeStep ( ivyyfeoocu -> _mdlRefSfcnS ) ) { srUpdateBC (
localDW -> jzzjgbrvwm ) ; } P_126 = baykbb21q4 . P_201 ; for ( i = 0 ; i < 10
; i ++ ) { P_126 = muDoubleScalarMax ( P_126 , baykbb21q4 . P_122 [ i ] ) ; }
localB -> ny1zcj0jmp = P_126 ; localB -> j35i32lj01 = baykbb21q4 . P_203 *
localB -> ny1zcj0jmp ; localB -> hrfkonmsex = - baykbb21q4 . P_204 ;
mdqu3ek43b_tmp = plook_u32d_binckan ( baykbb21q4 . P_178 , baykbb21q4 . P_10
, 6U ) ; localB -> mdqu3ek43b = baykbb21q4 . P_66 [ mdqu3ek43b_tmp ] ; localB
-> djghxpbhft = baykbb21q4 . P_17 [ plook_u32d_binckan ( baykbb21q4 . P_177 ,
baykbb21q4 . P_10 , 6U ) ] - baykbb21q4 . P_17 [ mdqu3ek43b_tmp ] ; } void
f2ay4b3zfo ( oqvwukdwj0 * const ivyyfeoocu , boolean_T * kkdxx45yej ,
gpz52e3dwe * localB , f2a5ytrc5f * localDW , jjihdbtkak * localXdis ) { if (
rtmIsMajorTimeStep ( ivyyfeoocu ) ) { if ( memcmp ( ivyyfeoocu ->
nonContDerivSignal [ 0 ] . pCurrVal , ivyyfeoocu -> nonContDerivSignal [ 0 ]
. pPrevVal , ivyyfeoocu -> nonContDerivSignal [ 0 ] . sizeInBytes ) != 0 ) {
( void ) memcpy ( ivyyfeoocu -> nonContDerivSignal [ 0 ] . pPrevVal ,
ivyyfeoocu -> nonContDerivSignal [ 0 ] . pCurrVal , ivyyfeoocu ->
nonContDerivSignal [ 0 ] . sizeInBytes ) ; ssSetSolverNeedsReset ( ivyyfeoocu
-> _mdlRefSfcnS ) ; } if ( memcmp ( ivyyfeoocu -> nonContDerivSignal [ 1 ] .
pCurrVal , ivyyfeoocu -> nonContDerivSignal [ 1 ] . pPrevVal , ivyyfeoocu ->
nonContDerivSignal [ 1 ] . sizeInBytes ) != 0 ) { ( void ) memcpy (
ivyyfeoocu -> nonContDerivSignal [ 1 ] . pPrevVal , ivyyfeoocu ->
nonContDerivSignal [ 1 ] . pCurrVal , ivyyfeoocu -> nonContDerivSignal [ 1 ]
. sizeInBytes ) ; ssSetSolverNeedsReset ( ivyyfeoocu -> _mdlRefSfcnS ) ; } if
( memcmp ( ivyyfeoocu -> nonContDerivSignal [ 2 ] . pCurrVal , ivyyfeoocu ->
nonContDerivSignal [ 2 ] . pPrevVal , ivyyfeoocu -> nonContDerivSignal [ 2 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( ivyyfeoocu -> nonContDerivSignal [
2 ] . pPrevVal , ivyyfeoocu -> nonContDerivSignal [ 2 ] . pCurrVal ,
ivyyfeoocu -> nonContDerivSignal [ 2 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( ivyyfeoocu -> _mdlRefSfcnS ) ; } if ( memcmp (
ivyyfeoocu -> nonContDerivSignal [ 3 ] . pCurrVal , ivyyfeoocu ->
nonContDerivSignal [ 3 ] . pPrevVal , ivyyfeoocu -> nonContDerivSignal [ 3 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( ivyyfeoocu -> nonContDerivSignal [
3 ] . pPrevVal , ivyyfeoocu -> nonContDerivSignal [ 3 ] . pCurrVal ,
ivyyfeoocu -> nonContDerivSignal [ 3 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( ivyyfeoocu -> _mdlRefSfcnS ) ; } if ( memcmp (
ivyyfeoocu -> nonContDerivSignal [ 4 ] . pCurrVal , ivyyfeoocu ->
nonContDerivSignal [ 4 ] . pPrevVal , ivyyfeoocu -> nonContDerivSignal [ 4 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( ivyyfeoocu -> nonContDerivSignal [
4 ] . pPrevVal , ivyyfeoocu -> nonContDerivSignal [ 4 ] . pCurrVal ,
ivyyfeoocu -> nonContDerivSignal [ 4 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( ivyyfeoocu -> _mdlRefSfcnS ) ; } if ( memcmp (
ivyyfeoocu -> nonContDerivSignal [ 5 ] . pCurrVal , ivyyfeoocu ->
nonContDerivSignal [ 5 ] . pPrevVal , ivyyfeoocu -> nonContDerivSignal [ 5 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( ivyyfeoocu -> nonContDerivSignal [
5 ] . pPrevVal , ivyyfeoocu -> nonContDerivSignal [ 5 ] . pCurrVal ,
ivyyfeoocu -> nonContDerivSignal [ 5 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( ivyyfeoocu -> _mdlRefSfcnS ) ; } if ( memcmp (
ivyyfeoocu -> nonContDerivSignal [ 6 ] . pCurrVal , ivyyfeoocu ->
nonContDerivSignal [ 6 ] . pPrevVal , ivyyfeoocu -> nonContDerivSignal [ 6 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( ivyyfeoocu -> nonContDerivSignal [
6 ] . pPrevVal , ivyyfeoocu -> nonContDerivSignal [ 6 ] . pCurrVal ,
ivyyfeoocu -> nonContDerivSignal [ 6 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( ivyyfeoocu -> _mdlRefSfcnS ) ; } if ( memcmp (
ivyyfeoocu -> nonContDerivSignal [ 7 ] . pCurrVal , ivyyfeoocu ->
nonContDerivSignal [ 7 ] . pPrevVal , ivyyfeoocu -> nonContDerivSignal [ 7 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( ivyyfeoocu -> nonContDerivSignal [
7 ] . pPrevVal , ivyyfeoocu -> nonContDerivSignal [ 7 ] . pCurrVal ,
ivyyfeoocu -> nonContDerivSignal [ 7 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( ivyyfeoocu -> _mdlRefSfcnS ) ; } if ( memcmp (
ivyyfeoocu -> nonContDerivSignal [ 8 ] . pCurrVal , ivyyfeoocu ->
nonContDerivSignal [ 8 ] . pPrevVal , ivyyfeoocu -> nonContDerivSignal [ 8 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( ivyyfeoocu -> nonContDerivSignal [
8 ] . pPrevVal , ivyyfeoocu -> nonContDerivSignal [ 8 ] . pCurrVal ,
ivyyfeoocu -> nonContDerivSignal [ 8 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( ivyyfeoocu -> _mdlRefSfcnS ) ; } if ( memcmp (
ivyyfeoocu -> nonContDerivSignal [ 9 ] . pCurrVal , ivyyfeoocu ->
nonContDerivSignal [ 9 ] . pPrevVal , ivyyfeoocu -> nonContDerivSignal [ 9 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( ivyyfeoocu -> nonContDerivSignal [
9 ] . pPrevVal , ivyyfeoocu -> nonContDerivSignal [ 9 ] . pCurrVal ,
ivyyfeoocu -> nonContDerivSignal [ 9 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( ivyyfeoocu -> _mdlRefSfcnS ) ; } if ( memcmp (
ivyyfeoocu -> nonContDerivSignal [ 10 ] . pCurrVal , ivyyfeoocu ->
nonContDerivSignal [ 10 ] . pPrevVal , ivyyfeoocu -> nonContDerivSignal [ 10
] . sizeInBytes ) != 0 ) { ( void ) memcpy ( ivyyfeoocu -> nonContDerivSignal
[ 10 ] . pPrevVal , ivyyfeoocu -> nonContDerivSignal [ 10 ] . pCurrVal ,
ivyyfeoocu -> nonContDerivSignal [ 10 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( ivyyfeoocu -> _mdlRefSfcnS ) ; } if ( memcmp (
ivyyfeoocu -> nonContDerivSignal [ 11 ] . pCurrVal , ivyyfeoocu ->
nonContDerivSignal [ 11 ] . pPrevVal , ivyyfeoocu -> nonContDerivSignal [ 11
] . sizeInBytes ) != 0 ) { ( void ) memcpy ( ivyyfeoocu -> nonContDerivSignal
[ 11 ] . pPrevVal , ivyyfeoocu -> nonContDerivSignal [ 11 ] . pCurrVal ,
ivyyfeoocu -> nonContDerivSignal [ 11 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( ivyyfeoocu -> _mdlRefSfcnS ) ; } if ( memcmp (
ivyyfeoocu -> nonContDerivSignal [ 12 ] . pCurrVal , ivyyfeoocu ->
nonContDerivSignal [ 12 ] . pPrevVal , ivyyfeoocu -> nonContDerivSignal [ 12
] . sizeInBytes ) != 0 ) { ( void ) memcpy ( ivyyfeoocu -> nonContDerivSignal
[ 12 ] . pPrevVal , ivyyfeoocu -> nonContDerivSignal [ 12 ] . pCurrVal ,
ivyyfeoocu -> nonContDerivSignal [ 12 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( ivyyfeoocu -> _mdlRefSfcnS ) ; } } if (
rtmIsMajorTimeStep ( ivyyfeoocu ) && rtmIsSampleHit ( ivyyfeoocu , 1 , 0 ) )
{ localDW -> a05qxnyi0a = baykbb21q4 . P_323 ; } localDW -> pdphadbq31 = 0 ;
if ( rtmIsMajorTimeStep ( ivyyfeoocu ) && rtmIsSampleHit ( ivyyfeoocu , 1 , 0
) ) { localDW -> kai0m0e2ew = baykbb21q4 . P_339 ; } localDW -> ghexlrxee4 =
0 ; if ( rtmIsMajorTimeStep ( ivyyfeoocu ) && rtmIsSampleHit ( ivyyfeoocu , 1
, 0 ) ) { localDW -> hgsyk0bc45 = baykbb21q4 . P_307 ; localDW -> d4jrbui4i1
= baykbb21q4 . P_297 ; } localDW -> mofqbaru1g = 0 ; localDW -> nmkn0jbvty =
0 ; if ( rtmIsMajorTimeStep ( ivyyfeoocu ) && rtmIsSampleHit ( ivyyfeoocu , 1
, 0 ) ) { localDW -> lwg3p0cdvf = * kkdxx45yej ; } if ( localDW -> p5dxjc2b1n
== 0 ) { localDW -> lq4git1asr = 0 ; } else { localDW -> ftanrlzxqu = 0 ;
switch ( localDW -> ldmgpk510f ) { case 3 : if ( localB -> be4ry5q1am < 0.0 )
{ localDW -> ldmgpk510f = 1 ; ssSetBlockStateForSolverChangedAtMajorStep (
ivyyfeoocu -> _mdlRefSfcnS ) ; } break ; case 4 : if ( localB -> be4ry5q1am >
0.0 ) { localDW -> ldmgpk510f = 2 ;
ssSetBlockStateForSolverChangedAtMajorStep ( ivyyfeoocu -> _mdlRefSfcnS ) ; }
break ; default : break ; } localXdis -> au0xgwt5db = ( ( localDW ->
ldmgpk510f == 3 ) || ( localDW -> ldmgpk510f == 4 ) ) ; localDW -> cs3aeuofig
= 0 ; switch ( localDW -> pputvuru1l ) { case 3 : if ( localB -> k3dacr0mha <
0.0 ) { localDW -> pputvuru1l = 1 ;
ssSetBlockStateForSolverChangedAtMajorStep ( ivyyfeoocu -> _mdlRefSfcnS ) ; }
break ; case 4 : if ( localB -> k3dacr0mha > 0.0 ) { localDW -> pputvuru1l =
2 ; ssSetBlockStateForSolverChangedAtMajorStep ( ivyyfeoocu -> _mdlRefSfcnS )
; } break ; default : break ; } localXdis -> ghortk2b5p = ( ( localDW ->
pputvuru1l == 3 ) || ( localDW -> pputvuru1l == 4 ) ) ; } if (
rtmIsMajorTimeStep ( ivyyfeoocu ) && rtmIsSampleHit ( ivyyfeoocu , 1 , 0 ) )
{ localDW -> duvopzo5hi = baykbb21q4 . P_302 ; localDW -> la5hpljke2 =
baykbb21q4 . P_306 ; } localDW -> fp1iusufwe = 0 ; localDW -> fp0ancafza = 0
; if ( localDW -> fqwhbtulpg == 0 ) { localDW -> m0azm0ihsg = 0 ; } else {
localDW -> g0lhf5n0k0 = 0 ; localDW -> byy0jx5dbt = 0 ; } localDW ->
go4nltk2qq = 0 ; localDW -> lmofltzpch = 0 ; } void mr20y0atts ( gpz52e3dwe *
localB , f2a5ytrc5f * localDW , dv0k21emzh * localX , jjihdbtkak * localXdis
, o4t1ox0xnc * localXdot ) { real_T csebehjbqi ; real_T knl2obx1gl ; real_T
p4uilbaz4f ; real_T n5pcldz0zt ; real_T hqewq1qube ; real_T k2xmsubhcb ;
int32_T acw3aaqgin ; int32_T mftmtr3bb1 ; localXdot -> fzwsn2jmhl = localB ->
kraacilkr3 ; localXdot -> e0iug524d1 = localB -> occeweni1n ; localXdot ->
ci1kkjexs5 = localB -> g3mpjs4fc0 ; localXdot -> j4b4mw5go4 = localB ->
juttgy3dz5 ; localXdot -> iym4havdyu = localB -> nyqp2upnik ; for (
mftmtr3bb1 = 0 ; mftmtr3bb1 < 1 ; mftmtr3bb1 ++ ) { n5pcldz0zt = localB ->
epejmvokjb ; hqewq1qube = localB -> oiccsxmfc0 ; k2xmsubhcb = localB ->
cvgqawtxd2 ; kyt34vrl1t ( & localB -> lhmuy0r2mt [ mftmtr3bb1 ] . mwc1d4al3c
, & localDW -> lhmuy0r2mt [ mftmtr3bb1 ] . mwc1d4al3c , & localXdot ->
lhmuy0r2mt [ mftmtr3bb1 ] . mwc1d4al3c ) ; } localXdot -> ojbokxhqxh = localB
-> pr3cg1ha33 ; localXdot -> kuyuzmfdlw = localB -> aoab1mcoqd ; localXdot ->
lqa034fanw = localB -> aff1zr5fiz ; localXdot -> pwwnn4rpgi = localB ->
mr1f1boypy ; for ( acw3aaqgin = 0 ; acw3aaqgin < 1 ; acw3aaqgin ++ ) {
csebehjbqi = localB -> gsvlqm3nsk ; knl2obx1gl = localB -> gmt3poj0so ;
p4uilbaz4f = localB -> mzinyvbdpx ; d5apf4pypv ( & localB -> oodask1ixq [
acw3aaqgin ] . mifpjkvj4c , & localDW -> oodask1ixq [ acw3aaqgin ] .
mifpjkvj4c , & localXdot -> oodask1ixq [ acw3aaqgin ] . mifpjkvj4c ) ; }
localXdot -> fvzlzvmibc [ 0 ] = localB -> fhmeql5up3 [ 0 ] ; localXdot ->
fvzlzvmibc [ 1 ] = localB -> fhmeql5up3 [ 1 ] ; localXdot -> evnnue2pdp =
localB -> gukhu3ijh1 [ 0 ] ; localXdot -> i1kwothjwq = localB -> cec4bxcbhi ;
localXdot -> asdzcbvawm = localB -> hzfj2hy3tt ; localXdot -> dwubb510sy =
localB -> fm10e1ao44 ; localXdot -> atiz2s5la3 = localB -> be1wzchom3 ;
localXdot -> mlndfk2ces = 0.0 ; { real_T * dx ; int_T i ; dx = & ( localXdot
-> au0xgwt5db ) ; for ( i = 0 ; i < 3 ; i ++ ) { dx [ i ] = 0.0 ; } } switch
( localDW -> p5dxjc2b1n ) { case 0 : if ( ( ( localX -> mlndfk2ces >
baykbb21q4 . P_181 ) && ( localX -> mlndfk2ces < baykbb21q4 . P_180 ) ) || (
( localX -> mlndfk2ces <= baykbb21q4 . P_181 ) && ( localB -> dwfltpq3sa >
0.0 ) ) || ( ( localX -> mlndfk2ces >= baykbb21q4 . P_180 ) && ( localB ->
dwfltpq3sa < 0.0 ) ) ) { localXdot -> mlndfk2ces = localB -> dwfltpq3sa ; }
else { localXdot -> mlndfk2ces = 0.0 ; } break ; case 1 : if ( localXdis ->
au0xgwt5db ) { localXdot -> au0xgwt5db = 0.0 ; } else { localXdot ->
au0xgwt5db = localB -> be4ry5q1am ; } if ( localXdis -> ghortk2b5p ) {
localXdot -> ghortk2b5p = 0.0 ; } else { localXdot -> ghortk2b5p = localB ->
k3dacr0mha ; } if ( localDW -> lvgmhoo4ri ) { localXdot -> dgkffoehk2 =
localB -> ihesps1hq2 ; } else { localXdot -> dgkffoehk2 = 0.0 ; } break ;
default : break ; } localXdot -> ds1yb3kwf1 = localB -> mxhnw2ktck ;
localXdot -> ievyscdcrq = localB -> heskvxmmnh ; localXdot -> ibw2wgocuq =
localB -> pn3te01nlx ; localXdot -> m4rqj3hpvj = 0.0 ; { real_T * dx ; int_T
i ; dx = & ( localXdot -> kahcvzwgxd ) ; for ( i = 0 ; i < 2 ; i ++ ) { dx [
i ] = 0.0 ; } } switch ( localDW -> fqwhbtulpg ) { case 0 : localXdot ->
m4rqj3hpvj = localB -> kujqrzsfke ; break ; case 1 : localXdot -> kahcvzwgxd
= localB -> av4vht34f5 ; localXdot -> jk1yalfhod = localB -> njakm2joqh ;
break ; default : break ; } if ( ( ( localX -> hh1fbq041v [ 0 ] > baykbb21q4
. P_258 ) && ( localX -> hh1fbq041v [ 0 ] < baykbb21q4 . P_257 ) ) || ( (
localX -> hh1fbq041v [ 0 ] <= baykbb21q4 . P_258 ) && ( localB -> opea03cz4z
. gnestwek04 [ 0 ] > 0.0 ) ) || ( ( localX -> hh1fbq041v [ 0 ] >= baykbb21q4
. P_257 ) && ( localB -> opea03cz4z . gnestwek04 [ 0 ] < 0.0 ) ) ) {
localXdot -> hh1fbq041v [ 0 ] = localB -> opea03cz4z . gnestwek04 [ 0 ] ; }
else { localXdot -> hh1fbq041v [ 0 ] = 0.0 ; } if ( ( ( localX -> hh1fbq041v
[ 1 ] > baykbb21q4 . P_258 ) && ( localX -> hh1fbq041v [ 1 ] < baykbb21q4 .
P_257 ) ) || ( ( localX -> hh1fbq041v [ 1 ] <= baykbb21q4 . P_258 ) && (
localB -> opea03cz4z . gnestwek04 [ 1 ] > 0.0 ) ) || ( ( localX -> hh1fbq041v
[ 1 ] >= baykbb21q4 . P_257 ) && ( localB -> opea03cz4z . gnestwek04 [ 1 ] <
0.0 ) ) ) { localXdot -> hh1fbq041v [ 1 ] = localB -> opea03cz4z . gnestwek04
[ 1 ] ; } else { localXdot -> hh1fbq041v [ 1 ] = 0.0 ; } if ( ( ( localX ->
g4a4nx25kp [ 0 ] > baykbb21q4 . P_260 ) && ( localX -> g4a4nx25kp [ 0 ] <
baykbb21q4 . P_259 ) ) || ( ( localX -> g4a4nx25kp [ 0 ] <= baykbb21q4 .
P_260 ) && ( localB -> au45bfcvxs . gnestwek04 [ 0 ] > 0.0 ) ) || ( ( localX
-> g4a4nx25kp [ 0 ] >= baykbb21q4 . P_259 ) && ( localB -> au45bfcvxs .
gnestwek04 [ 0 ] < 0.0 ) ) ) { localXdot -> g4a4nx25kp [ 0 ] = localB ->
au45bfcvxs . gnestwek04 [ 0 ] ; } else { localXdot -> g4a4nx25kp [ 0 ] = 0.0
; } if ( ( ( localX -> g4a4nx25kp [ 1 ] > baykbb21q4 . P_260 ) && ( localX ->
g4a4nx25kp [ 1 ] < baykbb21q4 . P_259 ) ) || ( ( localX -> g4a4nx25kp [ 1 ]
<= baykbb21q4 . P_260 ) && ( localB -> au45bfcvxs . gnestwek04 [ 1 ] > 0.0 )
) || ( ( localX -> g4a4nx25kp [ 1 ] >= baykbb21q4 . P_259 ) && ( localB ->
au45bfcvxs . gnestwek04 [ 1 ] < 0.0 ) ) ) { localXdot -> g4a4nx25kp [ 1 ] =
localB -> au45bfcvxs . gnestwek04 [ 1 ] ; } else { localXdot -> g4a4nx25kp [
1 ] = 0.0 ; } } void fwphuadlf2 ( real_T * angnzwuao0 , gpz52e3dwe * localB ,
f2a5ytrc5f * localDW , dv0k21emzh * localX , l2xiyzkbzo * localZCSV ) {
localZCSV -> bc4gdzmp5n = localB -> cd2gv14vry - baykbb21q4 . P_226 ;
localZCSV -> npv0xdvjab = localB -> cd2gv14vry - baykbb21q4 . P_227 ; {
real_T * zcsv = & ( localZCSV -> aalswztjav ) ; int_T i ; for ( i = 0 ; i < 9
; i ++ ) { zcsv [ i ] = 0.0 ; } } if ( localDW -> p5dxjc2b1n == 1 ) { switch
( localDW -> ldmgpk510f ) { case 1 : localZCSV -> aalswztjav = 0.0 ;
localZCSV -> bzkxzupqst = baykbb21q4 . P_191 - baykbb21q4 . P_192 ; break ;
case 2 : localZCSV -> aalswztjav = baykbb21q4 . P_192 - baykbb21q4 . P_191 ;
localZCSV -> bzkxzupqst = 0.0 ; break ; default : localZCSV -> aalswztjav =
localX -> au0xgwt5db - baykbb21q4 . P_191 ; localZCSV -> bzkxzupqst = localX
-> au0xgwt5db - baykbb21q4 . P_192 ; break ; } if ( ( localDW -> ldmgpk510f
== 3 ) || ( localDW -> ldmgpk510f == 4 ) ) { localZCSV -> m5ko21ayab = localB
-> be4ry5q1am ; } else { localZCSV -> m5ko21ayab = 0.0 ; } switch ( localDW
-> pputvuru1l ) { case 1 : localZCSV -> p1zurwrw5v = 0.0 ; localZCSV ->
atoyuak42p = baykbb21q4 . P_193 - baykbb21q4 . P_194 ; break ; case 2 :
localZCSV -> p1zurwrw5v = baykbb21q4 . P_194 - baykbb21q4 . P_193 ; localZCSV
-> atoyuak42p = 0.0 ; break ; default : localZCSV -> p1zurwrw5v = localX ->
ghortk2b5p - baykbb21q4 . P_193 ; localZCSV -> atoyuak42p = localX ->
ghortk2b5p - baykbb21q4 . P_194 ; break ; } if ( ( localDW -> pputvuru1l == 3
) || ( localDW -> pputvuru1l == 4 ) ) { localZCSV -> prryqpb1hn = localB ->
k3dacr0mha ; } else { localZCSV -> prryqpb1hn = 0.0 ; } localZCSV ->
kuicuokhr5 = localB -> fnv1q5plhv - baykbb21q4 . P_196 ; localZCSV ->
dvlbim3i32 = localB -> ljyemqt3v4 - localB -> ny1zcj0jmp ; localZCSV ->
e3j1c33v5g = localB -> ljyemqt3v4 - localB -> j35i32lj01 ; } localZCSV ->
czayckgbv0 = localB -> fry4eke1hg ; if ( localDW -> nxeroykpr2 ) { localZCSV
-> je0zswefvn = * angnzwuao0 - baykbb21q4 . P_117 ; } else { localZCSV ->
je0zswefvn = * angnzwuao0 - baykbb21q4 . P_113 ; } localZCSV -> e3xhmi3ez5 =
localB -> io22wmrl1e - baykbb21q4 . P_123 ; { localZCSV -> d05vnqtl1k = 0.0 ;
} if ( localDW -> fqwhbtulpg == 0 ) { localZCSV -> d05vnqtl1k = localB ->
neygrfvky2 ; } { localZCSV -> pzhibzkub2 = 0.0 ; } if ( localDW -> fqwhbtulpg
== 1 ) { localZCSV -> pzhibzkub2 = localB -> nve4s2kze1 ; } } void jpmowlrhtz
( oqvwukdwj0 * const ivyyfeoocu ) { if ( ! slIsRapidAcceleratorSimulating ( )
) { slmrRunPluginEvent ( ivyyfeoocu -> _mdlRefSfcnS , "DrivetrainHevP4" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void pcjuxpuxtd (
SimStruct * _mdlRefSfcnS , ssNonContDerivSigFeedingOutports * *
mr_nonContOutputArray , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T
mdlref_TID2 , oqvwukdwj0 * const ivyyfeoocu , gpz52e3dwe * localB ,
f2a5ytrc5f * localDW , dv0k21emzh * localX , njnki40qhm * localZCE , void *
sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const
char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) {
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; baykbb21q4 . P_152 = rtMinusInf ;
baykbb21q4 . P_153 = rtInf ; baykbb21q4 . P_169 = rtMinusInf ; baykbb21q4 .
P_170 = rtInf ; baykbb21q4 . P_188 = rtInf ; baykbb21q4 . P_198 = rtInf ;
baykbb21q4 . P_210 = rtInf ; baykbb21q4 . P_217 = rtInf ; baykbb21q4 . P_226
= rtInf ; baykbb21q4 . P_238 = rtMinusInf ; baykbb21q4 . P_341 = rtInf ;
baykbb21q4 . P_390 = rtInf ; ( void ) memset ( ( void * ) ivyyfeoocu , 0 ,
sizeof ( oqvwukdwj0 ) ) ; ivyyfeoocu -> Timing . mdlref_GlobalTID [ 0 ] =
mdlref_TID0 ; ivyyfeoocu -> Timing . mdlref_GlobalTID [ 1 ] = mdlref_TID1 ;
ivyyfeoocu -> Timing . mdlref_GlobalTID [ 2 ] = mdlref_TID2 ; ivyyfeoocu ->
_mdlRefSfcnS = ( _mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) )
{ slmrRunPluginEvent ( ivyyfeoocu -> _mdlRefSfcnS , "DrivetrainHevP4" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } ( void ) memset ( ( ( void *
) localB ) , 0 , sizeof ( gpz52e3dwe ) ) ; { int32_T i ; for ( i = 0 ; i < 10
; i ++ ) { localB -> bokfc5lq0a [ i ] = 0.0 ; } for ( i = 0 ; i < 5 ; i ++ )
{ localB -> pqa4uoh3p3 . hzgu5jfdz4 [ i ] = 0.0 ; } for ( i = 0 ; i < 16 ; i
++ ) { localB -> pqa4uoh3p3 . n4ygn5s3it [ i ] = 0.0 ; } for ( i = 0 ; i < 24
; i ++ ) { localB -> pqa4uoh3p3 . flvdifijue [ i ] = 0.0 ; } for ( i = 0 ; i
< 5 ; i ++ ) { localB -> gp3qroe5qv . hzgu5jfdz4 [ i ] = 0.0 ; } for ( i = 0
; i < 16 ; i ++ ) { localB -> gp3qroe5qv . n4ygn5s3it [ i ] = 0.0 ; } for ( i
= 0 ; i < 24 ; i ++ ) { localB -> gp3qroe5qv . flvdifijue [ i ] = 0.0 ; }
localB -> cec4bxcbhi = 0.0 ; localB -> gukhu3ijh1 [ 0 ] = 0.0 ; localB ->
gukhu3ijh1 [ 1 ] = 0.0 ; localB -> gukhu3ijh1 [ 2 ] = 0.0 ; localB ->
e1bxwmjm0o = 0.0 ; localB -> epejmvokjb = 0.0 ; localB -> oiccsxmfc0 = 0.0 ;
localB -> cvgqawtxd2 = 0.0 ; localB -> mkqlit4lyd = 0.0 ; localB ->
gsvlqm3nsk = 0.0 ; localB -> gmt3poj0so = 0.0 ; localB -> mzinyvbdpx = 0.0 ;
localB -> pr3cg1ha33 = 0.0 ; localB -> occeweni1n = 0.0 ; localB ->
fhmeql5up3 [ 0 ] = 0.0 ; localB -> fhmeql5up3 [ 1 ] = 0.0 ; localB ->
kraacilkr3 = 0.0 ; localB -> oyptmqqt4o = 0.0 ; localB -> ljh5u1acpa = 0.0 ;
localB -> cd2gv14vry = 0.0 ; localB -> niifni1al0 = 0.0 ; localB ->
dsvmkt1cgs = 0.0 ; localB -> onje2csnwv = 0.0 ; localB -> fry4eke1hg = 0.0 ;
localB -> io22wmrl1e = 0.0 ; localB -> oxoyxuurgp = 0.0 ; localB ->
be1wzchom3 = 0.0 ; localB -> ek3squgt0x = 0.0 ; localB -> mxhnw2ktck = 0.0 ;
localB -> dg1a1yunpp = 0.0 ; localB -> drywpc5ov4 = 0.0 ; localB ->
o3qk5tvbfy = 0.0 ; localB -> nam42e4bjp = 0.0 ; localB -> pn3te01nlx = 0.0 ;
localB -> heskvxmmnh = 0.0 ; localB -> fm10e1ao44 = 0.0 ; localB ->
hzfj2hy3tt = 0.0 ; localB -> juttgy3dz5 = 0.0 ; localB -> g3mpjs4fc0 = 0.0 ;
localB -> aff1zr5fiz = 0.0 ; localB -> aoab1mcoqd = 0.0 ; localB ->
nyqp2upnik = 0.0 ; localB -> mr1f1boypy = 0.0 ; localB -> gtzo2kivgc = 0.0 ;
localB -> aucozmyinh = 0.0 ; localB -> bekdfczw0e = 0.0 ; localB ->
flgyy2zou1 = 0.0 ; localB -> c1j4rwiuym = 0.0 ; localB -> pdta0pgvmw = 0.0 ;
localB -> psrgwnnlh0 = 0.0 ; localB -> i5yj1qj5v3 [ 0 ] = 0.0 ; localB ->
i5yj1qj5v3 [ 1 ] = 0.0 ; localB -> kgk4a0mjis = 0.0 ; localB -> nv4mnufhrx =
0.0 ; localB -> cjglkijkah [ 0 ] = 0.0 ; localB -> cjglkijkah [ 1 ] = 0.0 ;
localB -> j5t2rk2sih = 0.0 ; localB -> fd0tovz3nx = 0.0 ; localB ->
lvwghuuv4n = 0.0 ; localB -> fh3orkmu21 = 0.0 ; localB -> bleeiru2sr = 0.0 ;
localB -> fe1otu0gja = 0.0 ; localB -> hbxu4f1wb0 = 0.0 ; localB ->
awcntgnx3h = 0.0 ; localB -> fnv1q5plhv = 0.0 ; localB -> ljyemqt3v4 = 0.0 ;
localB -> be4ry5q1am = 0.0 ; localB -> k3dacr0mha = 0.0 ; localB ->
ny1zcj0jmp = 0.0 ; localB -> j35i32lj01 = 0.0 ; localB -> hrfkonmsex = 0.0 ;
localB -> pj5zsfb4kd = 0.0 ; localB -> ihesps1hq2 = 0.0 ; localB ->
eiifz4uu41 = 0.0 ; localB -> dwfltpq3sa = 0.0 ; localB -> nve4s2kze1 = 0.0 ;
localB -> av4vht34f5 = 0.0 ; localB -> njakm2joqh = 0.0 ; localB ->
mdqu3ek43b = 0.0 ; localB -> djghxpbhft = 0.0 ; localB -> neygrfvky2 = 0.0 ;
localB -> kujqrzsfke = 0.0 ; localB -> pqa4uoh3p3 . gpm5eaqmyj = 0.0 ; localB
-> pqa4uoh3p3 . bkv4f44vnh = 0.0 ; localB -> gp3qroe5qv . gpm5eaqmyj = 0.0 ;
localB -> gp3qroe5qv . bkv4f44vnh = 0.0 ; localB -> au45bfcvxs . dyrezqdlbd [
0 ] = 0.0 ; localB -> au45bfcvxs . dyrezqdlbd [ 1 ] = 0.0 ; localB ->
au45bfcvxs . dyrezqdlbd [ 2 ] = 0.0 ; localB -> au45bfcvxs . gnestwek04 [ 0 ]
= 0.0 ; localB -> au45bfcvxs . gnestwek04 [ 1 ] = 0.0 ; localB -> opea03cz4z
. dyrezqdlbd [ 0 ] = 0.0 ; localB -> opea03cz4z . dyrezqdlbd [ 1 ] = 0.0 ;
localB -> opea03cz4z . dyrezqdlbd [ 2 ] = 0.0 ; localB -> opea03cz4z .
gnestwek04 [ 0 ] = 0.0 ; localB -> opea03cz4z . gnestwek04 [ 1 ] = 0.0 ; } (
void ) memset ( ( void * ) localDW , 0 , sizeof ( f2a5ytrc5f ) ) ; localDW ->
a05qxnyi0a = 0.0 ; localDW -> kai0m0e2ew = 0.0 ; localDW -> hgsyk0bc45 = 0.0
; localDW -> d4jrbui4i1 = 0.0 ; localDW -> duvopzo5hi = 0.0 ; localDW ->
la5hpljke2 = 0.0 ; DrivetrainHevP4_InitializeDataMapInfo ( ivyyfeoocu ,
localDW , localX , sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL )
) && ( rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI ,
rt_ChildMMIIdx , & ( ivyyfeoocu -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath (
ivyyfeoocu -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( ivyyfeoocu -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } ivyyfeoocu -> nonContDerivSignal [ 0 ] . pPrevVal = (
char_T * ) ivyyfeoocu -> NonContDerivMemory . mr_nonContSig0 ; ivyyfeoocu ->
nonContDerivSignal [ 0 ] . sizeInBytes = ( 1 * sizeof ( real_T ) ) ;
ivyyfeoocu -> nonContDerivSignal [ 0 ] . pCurrVal = ( char_T * ) ( & localB
-> drywpc5ov4 ) ; ; ivyyfeoocu -> nonContDerivSignal [ 1 ] . pPrevVal = (
char_T * ) ivyyfeoocu -> NonContDerivMemory . mr_nonContSig1 ; ivyyfeoocu ->
nonContDerivSignal [ 1 ] . sizeInBytes = ( 1 * sizeof ( real_T ) ) ;
ivyyfeoocu -> nonContDerivSignal [ 1 ] . pCurrVal = ( char_T * ) ( & localB
-> ek3squgt0x ) ; ; ivyyfeoocu -> nonContDerivSignal [ 2 ] . pPrevVal = (
char_T * ) ivyyfeoocu -> NonContDerivMemory . mr_nonContSig2 ; ivyyfeoocu ->
nonContDerivSignal [ 2 ] . sizeInBytes = ( 1 * sizeof ( real_T ) ) ;
ivyyfeoocu -> nonContDerivSignal [ 2 ] . pCurrVal = ( char_T * ) ( & localB
-> oxoyxuurgp ) ; ; ivyyfeoocu -> nonContDerivSignal [ 3 ] . pPrevVal = (
char_T * ) ivyyfeoocu -> NonContDerivMemory . mr_nonContSig3 ; ivyyfeoocu ->
nonContDerivSignal [ 3 ] . sizeInBytes = ( 1 * sizeof ( real_T ) ) ;
ivyyfeoocu -> nonContDerivSignal [ 3 ] . pCurrVal = ( char_T * ) ( & localB
-> ljh5u1acpa ) ; ; ivyyfeoocu -> nonContDerivSignal [ 4 ] . pPrevVal = (
char_T * ) ivyyfeoocu -> NonContDerivMemory . mr_nonContSig4 ; ivyyfeoocu ->
nonContDerivSignal [ 4 ] . sizeInBytes = ( 1 * sizeof ( real_T ) ) ;
ivyyfeoocu -> nonContDerivSignal [ 4 ] . pCurrVal = ( char_T * ) ( & localB
-> oyptmqqt4o ) ; ; ivyyfeoocu -> nonContDerivSignal [ 5 ] . pPrevVal = (
char_T * ) ivyyfeoocu -> NonContDerivMemory . mr_nonContSig5 ; ivyyfeoocu ->
nonContDerivSignal [ 5 ] . sizeInBytes = ( 1 * sizeof ( real_T ) ) ;
ivyyfeoocu -> nonContDerivSignal [ 5 ] . pCurrVal = ( char_T * ) ( & localB
-> mkqlit4lyd ) ; ; ivyyfeoocu -> nonContDerivSignal [ 6 ] . pPrevVal = (
char_T * ) ivyyfeoocu -> NonContDerivMemory . mr_nonContSig6 ; ivyyfeoocu ->
nonContDerivSignal [ 6 ] . sizeInBytes = ( 1 * sizeof ( real_T ) ) ;
ivyyfeoocu -> nonContDerivSignal [ 6 ] . pCurrVal = ( char_T * ) ( & localB
-> e1bxwmjm0o ) ; ; ivyyfeoocu -> nonContDerivSignal [ 7 ] . pPrevVal = (
char_T * ) ivyyfeoocu -> NonContDerivMemory . mr_nonContSig7 ; ivyyfeoocu ->
nonContDerivSignal [ 7 ] . sizeInBytes = ( 1 * sizeof ( boolean_T ) ) ;
ivyyfeoocu -> nonContDerivSignal [ 7 ] . pCurrVal = ( char_T * ) ( & localB
-> oodask1ixq [ 0 ] . mifpjkvj4c . khilm44itf . gbots353vs ) ; ; ivyyfeoocu
-> nonContDerivSignal [ 8 ] . pPrevVal = ( char_T * ) ivyyfeoocu ->
NonContDerivMemory . mr_nonContSig8 ; ivyyfeoocu -> nonContDerivSignal [ 8 ]
. sizeInBytes = ( 1 * sizeof ( boolean_T ) ) ; ivyyfeoocu ->
nonContDerivSignal [ 8 ] . pCurrVal = ( char_T * ) ( & localB -> oodask1ixq [
0 ] . mifpjkvj4c . gtmuxhbejy . h3eqmn5teq ) ; ; ivyyfeoocu ->
nonContDerivSignal [ 9 ] . pPrevVal = ( char_T * ) ivyyfeoocu ->
NonContDerivMemory . mr_nonContSig9 ; ivyyfeoocu -> nonContDerivSignal [ 9 ]
. sizeInBytes = ( 1 * sizeof ( boolean_T ) ) ; ivyyfeoocu ->
nonContDerivSignal [ 9 ] . pCurrVal = ( char_T * ) ( & localB -> lhmuy0r2mt [
0 ] . mwc1d4al3c . gm224dghg1i . gbots353vs ) ; ; ivyyfeoocu ->
nonContDerivSignal [ 10 ] . pPrevVal = ( char_T * ) ivyyfeoocu ->
NonContDerivMemory . mr_nonContSig10 ; ivyyfeoocu -> nonContDerivSignal [ 10
] . sizeInBytes = ( 1 * sizeof ( boolean_T ) ) ; ivyyfeoocu ->
nonContDerivSignal [ 10 ] . pCurrVal = ( char_T * ) ( & localB -> lhmuy0r2mt
[ 0 ] . mwc1d4al3c . gf1fdxvjnxm . h3eqmn5teq ) ; ; ivyyfeoocu ->
nonContDerivSignal [ 11 ] . pPrevVal = ( char_T * ) ivyyfeoocu ->
NonContDerivMemory . mr_nonContSig11 ; ivyyfeoocu -> nonContDerivSignal [ 11
] . sizeInBytes = ( 1 * sizeof ( boolean_T ) ) ; ivyyfeoocu ->
nonContDerivSignal [ 11 ] . pCurrVal = ( char_T * ) ( & localB -> cf2p35ih0y
) ; ; ivyyfeoocu -> nonContDerivSignal [ 12 ] . pPrevVal = ( char_T * )
ivyyfeoocu -> NonContDerivMemory . mr_nonContSig12 ; ivyyfeoocu ->
nonContDerivSignal [ 12 ] . sizeInBytes = ( 1 * sizeof ( boolean_T ) ) ;
ivyyfeoocu -> nonContDerivSignal [ 12 ] . pCurrVal = ( char_T * ) ( & localB
-> kqg3p5gqwp ) ; ; if ( mr_nonContOutputArray [ 3 ] != ( NULL ) ) {
mr_nonContOutputArray [ 3 ] [ 0 ] . sizeInBytes = 1 * sizeof ( boolean_T ) ;
mr_nonContOutputArray [ 3 ] [ 0 ] . currVal = ( char_T * ) & localB ->
euzshrvedh ; mr_nonContOutputArray [ 3 ] [ 0 ] . next = & (
mr_nonContOutputArray [ 3 ] [ 1 ] ) ; } if ( mr_nonContOutputArray [ 3 ] != (
NULL ) ) { mr_nonContOutputArray [ 3 ] [ 1 ] . sizeInBytes = 1 * sizeof (
boolean_T ) ; mr_nonContOutputArray [ 3 ] [ 1 ] . currVal = ( char_T * ) &
localB -> gjufqb52aq ; mr_nonContOutputArray [ 3 ] [ 1 ] . next = ( NULL ) ;
} localZCE -> bijsfjfrcl = UNINITIALIZED_ZCSIG ; localZCE -> ne4aagom4d =
UNINITIALIZED_ZCSIG ; localZCE -> ajmpenxuwc = UNINITIALIZED_ZCSIG ; localZCE
-> m2l2bafuxi = UNINITIALIZED_ZCSIG ; localZCE -> bgvqe2fp30 =
UNINITIALIZED_ZCSIG ; localZCE -> fasjnd50pz = UNINITIALIZED_ZCSIG ; localZCE
-> pyejmhcubo = UNINITIALIZED_ZCSIG ; } void mr_DrivetrainHevP4_MdlInfoRegFcn
( SimStruct * mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal
= 0 ; { boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } *
retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_DrivetrainHevP4 , 260 ) ; * retVal = 1 ; } static void
mr_DrivetrainHevP4_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int
j , const void * srcData , size_t numBytes ) ; static void
mr_DrivetrainHevP4_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int
j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_DrivetrainHevP4_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_DrivetrainHevP4_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_DrivetrainHevP4_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) ; static void
mr_DrivetrainHevP4_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_DrivetrainHevP4_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_DrivetrainHevP4_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_DrivetrainHevP4_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_DrivetrainHevP4_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_DrivetrainHevP4_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void mr_DrivetrainHevP4_restoreDataFromMxArrayWithOffset
( void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * )
mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T *
) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes )
; } static void mr_DrivetrainHevP4_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void mr_DrivetrainHevP4_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_DrivetrainHevP4_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_DrivetrainHevP4_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_DrivetrainHevP4_GetDWork ( const
httrpxnoync * mdlrefDW ) { static const char_T * ssDWFieldNames [ 3 ] = {
"rtb" , "rtdw" , "rtzce" , } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1
, 3 , ssDWFieldNames ) ; mr_DrivetrainHevP4_cacheDataAsMxArray ( ssDW , 0 , 0
, ( const void * ) & ( mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb ) ) ; {
static const char_T * rtdwDataFieldNames [ 73 ] = {
"mdlrefDW->rtdw.a05qxnyi0a" , "mdlrefDW->rtdw.kai0m0e2ew" ,
"mdlrefDW->rtdw.hgsyk0bc45" , "mdlrefDW->rtdw.d4jrbui4i1" ,
"mdlrefDW->rtdw.duvopzo5hi" , "mdlrefDW->rtdw.la5hpljke2" ,
"mdlrefDW->rtdw.d21f1j45dt" , "mdlrefDW->rtdw.pdphadbq31" ,
"mdlrefDW->rtdw.ghexlrxee4" , "mdlrefDW->rtdw.mofqbaru1g" ,
"mdlrefDW->rtdw.nmkn0jbvty" , "mdlrefDW->rtdw.fp1iusufwe" ,
"mdlrefDW->rtdw.fp0ancafza" , "mdlrefDW->rtdw.go4nltk2qq" ,
"mdlrefDW->rtdw.lmofltzpch" , "mdlrefDW->rtdw.ftanrlzxqu" ,
"mdlrefDW->rtdw.cs3aeuofig" , "mdlrefDW->rtdw.lq4git1asr" ,
"mdlrefDW->rtdw.g0lhf5n0k0" , "mdlrefDW->rtdw.byy0jx5dbt" ,
"mdlrefDW->rtdw.m0azm0ihsg" , "mdlrefDW->rtdw.ioyvk1irfb" ,
"mdlrefDW->rtdw.mnv4vjrnep" , "mdlrefDW->rtdw.jqva5kfmih" ,
"mdlrefDW->rtdw.ldmgpk510f" , "mdlrefDW->rtdw.pputvuru1l" ,
"mdlrefDW->rtdw.eq1l4ggd02" , "mdlrefDW->rtdw.p3dybhws34" ,
"mdlrefDW->rtdw.kb3b4zgdci" , "mdlrefDW->rtdw.p5dxjc2b1n" ,
"mdlrefDW->rtdw.fqwhbtulpg" , "mdlrefDW->rtdw.hzuoark40t" ,
"mdlrefDW->rtdw.jzzjgbrvwm" , "mdlrefDW->rtdw.fc3sbhift3" ,
"mdlrefDW->rtdw.pvdkznjss2" , "mdlrefDW->rtdw.eo10mdoia0" ,
"mdlrefDW->rtdw.lwg3p0cdvf" , "mdlrefDW->rtdw.k4j33f4byh" ,
"mdlrefDW->rtdw.lwrnf4n3xe" , "mdlrefDW->rtdw.mtqbtozmmf" ,
"mdlrefDW->rtdw.nxeroykpr2" , "mdlrefDW->rtdw.ch2lrz3var" ,
"mdlrefDW->rtdw.eagcze1ljh" , "mdlrefDW->rtdw.k2cw3yj0k4" ,
"mdlrefDW->rtdw.l53qtov1bq" , "mdlrefDW->rtdw.argkysitez" ,
"mdlrefDW->rtdw.he5fvhy1qg" , "mdlrefDW->rtdw.azodehxuoi" ,
"mdlrefDW->rtdw.lvgmhoo4ri" ,
"mdlrefDW->rtdw.oodask1ixq[0].mifpjkvj4c.msturv5mf2" ,
"mdlrefDW->rtdw.oodask1ixq[0].mifpjkvj4c.eoiiwds1vs" ,
"mdlrefDW->rtdw.oodask1ixq[0].mifpjkvj4c.ff52rggg3b" ,
"mdlrefDW->rtdw.oodask1ixq[0].mifpjkvj4c.aymfqvghll" ,
"mdlrefDW->rtdw.oodask1ixq[0].mifpjkvj4c.igqncywq3x" ,
"mdlrefDW->rtdw.oodask1ixq[0].mifpjkvj4c.fj5msgkhuw" ,
"mdlrefDW->rtdw.oodask1ixq[0].mifpjkvj4c.gzd2sy5gbk" ,
"mdlrefDW->rtdw.oodask1ixq[0].mifpjkvj4c.h2plpnu3mt.mo21e3pi2e" ,
"mdlrefDW->rtdw.oodask1ixq[0].mifpjkvj4c.iqoij5snsx.gj3w1fwhmk" ,
"mdlrefDW->rtdw.oodask1ixq[0].mifpjkvj4c.gtmuxhbejy.pf0qopor1e" ,
"mdlrefDW->rtdw.oodask1ixq[0].mifpjkvj4c.gtmuxhbejy.b0whoil2mj" ,
"mdlrefDW->rtdw.oodask1ixq[0].mifpjkvj4c.khilm44itf.akhjbcdors" ,
"mdlrefDW->rtdw.lhmuy0r2mt[0].mwc1d4al3c.cc4y0uq4r0" ,
"mdlrefDW->rtdw.lhmuy0r2mt[0].mwc1d4al3c.hee5prt23b" ,
"mdlrefDW->rtdw.lhmuy0r2mt[0].mwc1d4al3c.gsvo0gz55h" ,
"mdlrefDW->rtdw.lhmuy0r2mt[0].mwc1d4al3c.budmlwrz5d" ,
"mdlrefDW->rtdw.lhmuy0r2mt[0].mwc1d4al3c.gt3cxlciul" ,
"mdlrefDW->rtdw.lhmuy0r2mt[0].mwc1d4al3c.fjpdvl1pgq" ,
"mdlrefDW->rtdw.lhmuy0r2mt[0].mwc1d4al3c.pwwhqetnzc" ,
"mdlrefDW->rtdw.lhmuy0r2mt[0].mwc1d4al3c.pnwnqvpsljv.mo21e3pi2e" ,
"mdlrefDW->rtdw.lhmuy0r2mt[0].mwc1d4al3c.fcfn4zgb1m0.gj3w1fwhmk" ,
"mdlrefDW->rtdw.lhmuy0r2mt[0].mwc1d4al3c.gf1fdxvjnxm.pf0qopor1e" ,
"mdlrefDW->rtdw.lhmuy0r2mt[0].mwc1d4al3c.gf1fdxvjnxm.b0whoil2mj" ,
"mdlrefDW->rtdw.lhmuy0r2mt[0].mwc1d4al3c.gm224dghg1i.akhjbcdors" , } ;
mxArray * rtdwData = mxCreateStructMatrix ( 1 , 1 , 73 , rtdwDataFieldNames )
; int k0 ; mxSetFieldByNumber ( rtdwData , 0 , 49 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . oodask1ixq
[ 0 ] . mifpjkvj4c . msturv5mf2 ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 50 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . oodask1ixq [ 0 ] . mifpjkvj4c . eoiiwds1vs ) ,
mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 51 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . oodask1ixq
[ 0 ] . mifpjkvj4c . ff52rggg3b ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 52 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . oodask1ixq [ 0 ] . mifpjkvj4c . aymfqvghll ) ,
mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 53 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . oodask1ixq
[ 0 ] . mifpjkvj4c . igqncywq3x ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 54 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . oodask1ixq [ 0 ] . mifpjkvj4c . fj5msgkhuw ) ,
mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 55 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . oodask1ixq
[ 0 ] . mifpjkvj4c . gzd2sy5gbk ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 56 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . oodask1ixq [ 0 ] . mifpjkvj4c . h2plpnu3mt .
mo21e3pi2e ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0
, 57 , mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw .
oodask1ixq [ 0 ] . mifpjkvj4c . iqoij5snsx . gj3w1fwhmk ) , mxUINT8_CLASS ,
mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 58 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . oodask1ixq
[ 0 ] . mifpjkvj4c . gtmuxhbejy . pf0qopor1e ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 59 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . oodask1ixq [ 0 ] . mifpjkvj4c . gtmuxhbejy .
b0whoil2mj ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0
, 60 , mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw .
oodask1ixq [ 0 ] . mifpjkvj4c . khilm44itf . akhjbcdors ) , mxUINT8_CLASS ,
mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 61 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . lhmuy0r2mt
[ 0 ] . mwc1d4al3c . cc4y0uq4r0 ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 62 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . lhmuy0r2mt [ 0 ] . mwc1d4al3c . hee5prt23b ) ,
mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 63 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . lhmuy0r2mt
[ 0 ] . mwc1d4al3c . gsvo0gz55h ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 64 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . lhmuy0r2mt [ 0 ] . mwc1d4al3c . budmlwrz5d ) ,
mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 65 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . lhmuy0r2mt
[ 0 ] . mwc1d4al3c . gt3cxlciul ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 66 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . lhmuy0r2mt [ 0 ] . mwc1d4al3c . fjpdvl1pgq ) ,
mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 67 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . lhmuy0r2mt
[ 0 ] . mwc1d4al3c . pwwhqetnzc ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 68 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . lhmuy0r2mt [ 0 ] . mwc1d4al3c . pnwnqvpsljv .
mo21e3pi2e ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0
, 69 , mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw .
lhmuy0r2mt [ 0 ] . mwc1d4al3c . fcfn4zgb1m0 . gj3w1fwhmk ) , mxUINT8_CLASS ,
mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 70 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . lhmuy0r2mt
[ 0 ] . mwc1d4al3c . gf1fdxvjnxm . pf0qopor1e ) , mxUINT8_CLASS , mxREAL ) )
; mxSetFieldByNumber ( rtdwData , 0 , 71 , mxCreateUninitNumericMatrix ( 1 ,
1 * sizeof ( mdlrefDW -> rtdw . lhmuy0r2mt [ 0 ] . mwc1d4al3c . gf1fdxvjnxm .
b0whoil2mj ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0
, 72 , mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw .
lhmuy0r2mt [ 0 ] . mwc1d4al3c . gm224dghg1i . akhjbcdors ) , mxUINT8_CLASS ,
mxREAL ) ) ; mr_DrivetrainHevP4_cacheDataAsMxArray ( rtdwData , 0 , 0 , (
const void * ) & ( mdlrefDW -> rtdw . a05qxnyi0a ) , sizeof ( mdlrefDW ->
rtdw . a05qxnyi0a ) ) ; mr_DrivetrainHevP4_cacheDataAsMxArray ( rtdwData , 0
, 1 , ( const void * ) & ( mdlrefDW -> rtdw . kai0m0e2ew ) , sizeof (
mdlrefDW -> rtdw . kai0m0e2ew ) ) ; mr_DrivetrainHevP4_cacheDataAsMxArray (
rtdwData , 0 , 2 , ( const void * ) & ( mdlrefDW -> rtdw . hgsyk0bc45 ) ,
sizeof ( mdlrefDW -> rtdw . hgsyk0bc45 ) ) ;
mr_DrivetrainHevP4_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void * ) &
( mdlrefDW -> rtdw . d4jrbui4i1 ) , sizeof ( mdlrefDW -> rtdw . d4jrbui4i1 )
) ; mr_DrivetrainHevP4_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void *
) & ( mdlrefDW -> rtdw . duvopzo5hi ) , sizeof ( mdlrefDW -> rtdw .
duvopzo5hi ) ) ; mr_DrivetrainHevP4_cacheDataAsMxArray ( rtdwData , 0 , 5 , (
const void * ) & ( mdlrefDW -> rtdw . la5hpljke2 ) , sizeof ( mdlrefDW ->
rtdw . la5hpljke2 ) ) ; mr_DrivetrainHevP4_cacheDataAsMxArray ( rtdwData , 0
, 6 , ( const void * ) & ( mdlrefDW -> rtdw . d21f1j45dt ) , sizeof (
mdlrefDW -> rtdw . d21f1j45dt ) ) ; mr_DrivetrainHevP4_cacheDataAsMxArray (
rtdwData , 0 , 7 , ( const void * ) & ( mdlrefDW -> rtdw . pdphadbq31 ) ,
sizeof ( mdlrefDW -> rtdw . pdphadbq31 ) ) ;
mr_DrivetrainHevP4_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const void * ) &
( mdlrefDW -> rtdw . ghexlrxee4 ) , sizeof ( mdlrefDW -> rtdw . ghexlrxee4 )
) ; mr_DrivetrainHevP4_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void *
) & ( mdlrefDW -> rtdw . mofqbaru1g ) , sizeof ( mdlrefDW -> rtdw .
mofqbaru1g ) ) ; mr_DrivetrainHevP4_cacheDataAsMxArray ( rtdwData , 0 , 10 ,
( const void * ) & ( mdlrefDW -> rtdw . nmkn0jbvty ) , sizeof ( mdlrefDW ->
rtdw . nmkn0jbvty ) ) ; mr_DrivetrainHevP4_cacheDataAsMxArray ( rtdwData , 0
, 11 , ( const void * ) & ( mdlrefDW -> rtdw . fp1iusufwe ) , sizeof (
mdlrefDW -> rtdw . fp1iusufwe ) ) ; mr_DrivetrainHevP4_cacheDataAsMxArray (
rtdwData , 0 , 12 , ( const void * ) & ( mdlrefDW -> rtdw . fp0ancafza ) ,
sizeof ( mdlrefDW -> rtdw . fp0ancafza ) ) ;
mr_DrivetrainHevP4_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const void * )
& ( mdlrefDW -> rtdw . go4nltk2qq ) , sizeof ( mdlrefDW -> rtdw . go4nltk2qq
) ) ; mr_DrivetrainHevP4_cacheDataAsMxArray ( rtdwData , 0 , 14 , ( const
void * ) & ( mdlrefDW -> rtdw . lmofltzpch ) , sizeof ( mdlrefDW -> rtdw .
lmofltzpch ) ) ; mr_DrivetrainHevP4_cacheDataAsMxArray ( rtdwData , 0 , 15 ,
( const void * ) & ( mdlrefDW -> rtdw . ftanrlzxqu ) , sizeof ( mdlrefDW ->
rtdw . ftanrlzxqu ) ) ; mr_DrivetrainHevP4_cacheDataAsMxArray ( rtdwData , 0
, 16 , ( const void * ) & ( mdlrefDW -> rtdw . cs3aeuofig ) , sizeof (
mdlrefDW -> rtdw . cs3aeuofig ) ) ; mr_DrivetrainHevP4_cacheDataAsMxArray (
rtdwData , 0 , 17 , ( const void * ) & ( mdlrefDW -> rtdw . lq4git1asr ) ,
sizeof ( mdlrefDW -> rtdw . lq4git1asr ) ) ;
mr_DrivetrainHevP4_cacheDataAsMxArray ( rtdwData , 0 , 18 , ( const void * )
& ( mdlrefDW -> rtdw . g0lhf5n0k0 ) , sizeof ( mdlrefDW -> rtdw . g0lhf5n0k0
) ) ; mr_DrivetrainHevP4_cacheDataAsMxArray ( rtdwData , 0 , 19 , ( const
void * ) & ( mdlrefDW -> rtdw . byy0jx5dbt ) , sizeof ( mdlrefDW -> rtdw .
byy0jx5dbt ) ) ; mr_DrivetrainHevP4_cacheDataAsMxArray ( rtdwData , 0 , 20 ,
( const void * ) & ( mdlrefDW -> rtdw . m0azm0ihsg ) , sizeof ( mdlrefDW ->
rtdw . m0azm0ihsg ) ) ; mr_DrivetrainHevP4_cacheDataAsMxArray ( rtdwData , 0
, 21 , ( const void * ) & ( mdlrefDW -> rtdw . ioyvk1irfb ) , sizeof (
mdlrefDW -> rtdw . ioyvk1irfb ) ) ; mr_DrivetrainHevP4_cacheDataAsMxArray (
rtdwData , 0 , 22 , ( const void * ) & ( mdlrefDW -> rtdw . mnv4vjrnep ) ,
sizeof ( mdlrefDW -> rtdw . mnv4vjrnep ) ) ;
mr_DrivetrainHevP4_cacheDataAsMxArray ( rtdwData , 0 , 23 , ( const void * )
& ( mdlrefDW -> rtdw . jqva5kfmih ) , sizeof ( mdlrefDW -> rtdw . jqva5kfmih
) ) ; mr_DrivetrainHevP4_cacheDataAsMxArray ( rtdwData , 0 , 24 , ( const
void * ) & ( mdlrefDW -> rtdw . ldmgpk510f ) , sizeof ( mdlrefDW -> rtdw .
ldmgpk510f ) ) ; mr_DrivetrainHevP4_cacheDataAsMxArray ( rtdwData , 0 , 25 ,
( const void * ) & ( mdlrefDW -> rtdw . pputvuru1l ) , sizeof ( mdlrefDW ->
rtdw . pputvuru1l ) ) ; mr_DrivetrainHevP4_cacheDataAsMxArray ( rtdwData , 0
, 26 , ( const void * ) & ( mdlrefDW -> rtdw . eq1l4ggd02 ) , sizeof (
mdlrefDW -> rtdw . eq1l4ggd02 ) ) ; mr_DrivetrainHevP4_cacheDataAsMxArray (
rtdwData , 0 , 27 , ( const void * ) & ( mdlrefDW -> rtdw . p3dybhws34 ) ,
sizeof ( mdlrefDW -> rtdw . p3dybhws34 ) ) ;
mr_DrivetrainHevP4_cacheDataAsMxArray ( rtdwData , 0 , 28 , ( const void * )
& ( mdlrefDW -> rtdw . kb3b4zgdci ) , sizeof ( mdlrefDW -> rtdw . kb3b4zgdci
) ) ; mr_DrivetrainHevP4_cacheDataAsMxArray ( rtdwData , 0 , 29 , ( const
void * ) & ( mdlrefDW -> rtdw . p5dxjc2b1n ) , sizeof ( mdlrefDW -> rtdw .
p5dxjc2b1n ) ) ; mr_DrivetrainHevP4_cacheDataAsMxArray ( rtdwData , 0 , 30 ,
( const void * ) & ( mdlrefDW -> rtdw . fqwhbtulpg ) , sizeof ( mdlrefDW ->
rtdw . fqwhbtulpg ) ) ; mr_DrivetrainHevP4_cacheDataAsMxArray ( rtdwData , 0
, 31 , ( const void * ) & ( mdlrefDW -> rtdw . hzuoark40t ) , sizeof (
mdlrefDW -> rtdw . hzuoark40t ) ) ; mr_DrivetrainHevP4_cacheDataAsMxArray (
rtdwData , 0 , 32 , ( const void * ) & ( mdlrefDW -> rtdw . jzzjgbrvwm ) ,
sizeof ( mdlrefDW -> rtdw . jzzjgbrvwm ) ) ;
mr_DrivetrainHevP4_cacheDataAsMxArray ( rtdwData , 0 , 33 , ( const void * )
& ( mdlrefDW -> rtdw . fc3sbhift3 ) , sizeof ( mdlrefDW -> rtdw . fc3sbhift3
) ) ; mr_DrivetrainHevP4_cacheDataAsMxArray ( rtdwData , 0 , 34 , ( const
void * ) & ( mdlrefDW -> rtdw . pvdkznjss2 ) , sizeof ( mdlrefDW -> rtdw .
pvdkznjss2 ) ) ; mr_DrivetrainHevP4_cacheDataAsMxArray ( rtdwData , 0 , 35 ,
( const void * ) & ( mdlrefDW -> rtdw . eo10mdoia0 ) , sizeof ( mdlrefDW ->
rtdw . eo10mdoia0 ) ) ; mr_DrivetrainHevP4_cacheDataAsMxArray ( rtdwData , 0
, 36 , ( const void * ) & ( mdlrefDW -> rtdw . lwg3p0cdvf ) , sizeof (
mdlrefDW -> rtdw . lwg3p0cdvf ) ) ; mr_DrivetrainHevP4_cacheDataAsMxArray (
rtdwData , 0 , 37 , ( const void * ) & ( mdlrefDW -> rtdw . k4j33f4byh ) ,
sizeof ( mdlrefDW -> rtdw . k4j33f4byh ) ) ;
mr_DrivetrainHevP4_cacheDataAsMxArray ( rtdwData , 0 , 38 , ( const void * )
& ( mdlrefDW -> rtdw . lwrnf4n3xe ) , sizeof ( mdlrefDW -> rtdw . lwrnf4n3xe
) ) ; mr_DrivetrainHevP4_cacheDataAsMxArray ( rtdwData , 0 , 39 , ( const
void * ) & ( mdlrefDW -> rtdw . mtqbtozmmf ) , sizeof ( mdlrefDW -> rtdw .
mtqbtozmmf ) ) ; mr_DrivetrainHevP4_cacheDataAsMxArray ( rtdwData , 0 , 40 ,
( const void * ) & ( mdlrefDW -> rtdw . nxeroykpr2 ) , sizeof ( mdlrefDW ->
rtdw . nxeroykpr2 ) ) ; mr_DrivetrainHevP4_cacheDataAsMxArray ( rtdwData , 0
, 41 , ( const void * ) & ( mdlrefDW -> rtdw . ch2lrz3var ) , sizeof (
mdlrefDW -> rtdw . ch2lrz3var ) ) ; mr_DrivetrainHevP4_cacheDataAsMxArray (
rtdwData , 0 , 42 , ( const void * ) & ( mdlrefDW -> rtdw . eagcze1ljh ) ,
sizeof ( mdlrefDW -> rtdw . eagcze1ljh ) ) ;
mr_DrivetrainHevP4_cacheDataAsMxArray ( rtdwData , 0 , 43 , ( const void * )
& ( mdlrefDW -> rtdw . k2cw3yj0k4 ) , sizeof ( mdlrefDW -> rtdw . k2cw3yj0k4
) ) ; mr_DrivetrainHevP4_cacheDataAsMxArray ( rtdwData , 0 , 44 , ( const
void * ) & ( mdlrefDW -> rtdw . l53qtov1bq ) , sizeof ( mdlrefDW -> rtdw .
l53qtov1bq ) ) ; mr_DrivetrainHevP4_cacheDataAsMxArray ( rtdwData , 0 , 45 ,
( const void * ) & ( mdlrefDW -> rtdw . argkysitez ) , sizeof ( mdlrefDW ->
rtdw . argkysitez ) ) ; mr_DrivetrainHevP4_cacheDataAsMxArray ( rtdwData , 0
, 46 , ( const void * ) & ( mdlrefDW -> rtdw . he5fvhy1qg ) , sizeof (
mdlrefDW -> rtdw . he5fvhy1qg ) ) ; mr_DrivetrainHevP4_cacheDataAsMxArray (
rtdwData , 0 , 47 , ( const void * ) & ( mdlrefDW -> rtdw . azodehxuoi ) ,
sizeof ( mdlrefDW -> rtdw . azodehxuoi ) ) ;
mr_DrivetrainHevP4_cacheDataAsMxArray ( rtdwData , 0 , 48 , ( const void * )
& ( mdlrefDW -> rtdw . lvgmhoo4ri ) , sizeof ( mdlrefDW -> rtdw . lvgmhoo4ri
) ) ; for ( k0 = 0 ; k0 < 1 ; ++ k0 ) { const mwIndex offset0 = k0 ;
mr_DrivetrainHevP4_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 49 , offset0
, & ( mdlrefDW -> rtdw . oodask1ixq [ k0 ] . mifpjkvj4c . msturv5mf2 ) ,
sizeof ( mdlrefDW -> rtdw . oodask1ixq [ 0 ] . mifpjkvj4c . msturv5mf2 ) ) ;
mr_DrivetrainHevP4_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 50 , offset0
, & ( mdlrefDW -> rtdw . oodask1ixq [ k0 ] . mifpjkvj4c . eoiiwds1vs ) ,
sizeof ( mdlrefDW -> rtdw . oodask1ixq [ 0 ] . mifpjkvj4c . eoiiwds1vs ) ) ;
mr_DrivetrainHevP4_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 51 , offset0
, & ( mdlrefDW -> rtdw . oodask1ixq [ k0 ] . mifpjkvj4c . ff52rggg3b ) ,
sizeof ( mdlrefDW -> rtdw . oodask1ixq [ 0 ] . mifpjkvj4c . ff52rggg3b ) ) ;
mr_DrivetrainHevP4_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 52 , offset0
, & ( mdlrefDW -> rtdw . oodask1ixq [ k0 ] . mifpjkvj4c . aymfqvghll ) ,
sizeof ( mdlrefDW -> rtdw . oodask1ixq [ 0 ] . mifpjkvj4c . aymfqvghll ) ) ;
mr_DrivetrainHevP4_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 53 , offset0
, & ( mdlrefDW -> rtdw . oodask1ixq [ k0 ] . mifpjkvj4c . igqncywq3x ) ,
sizeof ( mdlrefDW -> rtdw . oodask1ixq [ 0 ] . mifpjkvj4c . igqncywq3x ) ) ;
mr_DrivetrainHevP4_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 54 , offset0
, & ( mdlrefDW -> rtdw . oodask1ixq [ k0 ] . mifpjkvj4c . fj5msgkhuw ) ,
sizeof ( mdlrefDW -> rtdw . oodask1ixq [ 0 ] . mifpjkvj4c . fj5msgkhuw ) ) ;
mr_DrivetrainHevP4_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 55 , offset0
, & ( mdlrefDW -> rtdw . oodask1ixq [ k0 ] . mifpjkvj4c . gzd2sy5gbk ) ,
sizeof ( mdlrefDW -> rtdw . oodask1ixq [ 0 ] . mifpjkvj4c . gzd2sy5gbk ) ) ;
mr_DrivetrainHevP4_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 56 , offset0
, & ( mdlrefDW -> rtdw . oodask1ixq [ k0 ] . mifpjkvj4c . h2plpnu3mt .
mo21e3pi2e ) , sizeof ( mdlrefDW -> rtdw . oodask1ixq [ 0 ] . mifpjkvj4c .
h2plpnu3mt . mo21e3pi2e ) ) ; mr_DrivetrainHevP4_cacheDataToMxArrayWithOffset
( rtdwData , 0 , 57 , offset0 , & ( mdlrefDW -> rtdw . oodask1ixq [ k0 ] .
mifpjkvj4c . iqoij5snsx . gj3w1fwhmk ) , sizeof ( mdlrefDW -> rtdw .
oodask1ixq [ 0 ] . mifpjkvj4c . iqoij5snsx . gj3w1fwhmk ) ) ;
mr_DrivetrainHevP4_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 58 , offset0
, & ( mdlrefDW -> rtdw . oodask1ixq [ k0 ] . mifpjkvj4c . gtmuxhbejy .
pf0qopor1e ) , sizeof ( mdlrefDW -> rtdw . oodask1ixq [ 0 ] . mifpjkvj4c .
gtmuxhbejy . pf0qopor1e ) ) ; mr_DrivetrainHevP4_cacheDataToMxArrayWithOffset
( rtdwData , 0 , 59 , offset0 , & ( mdlrefDW -> rtdw . oodask1ixq [ k0 ] .
mifpjkvj4c . gtmuxhbejy . b0whoil2mj ) , sizeof ( mdlrefDW -> rtdw .
oodask1ixq [ 0 ] . mifpjkvj4c . gtmuxhbejy . b0whoil2mj ) ) ;
mr_DrivetrainHevP4_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 60 , offset0
, & ( mdlrefDW -> rtdw . oodask1ixq [ k0 ] . mifpjkvj4c . khilm44itf .
akhjbcdors ) , sizeof ( mdlrefDW -> rtdw . oodask1ixq [ 0 ] . mifpjkvj4c .
khilm44itf . akhjbcdors ) ) ; } for ( k0 = 0 ; k0 < 1 ; ++ k0 ) { const
mwIndex offset0 = k0 ; mr_DrivetrainHevP4_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 61 , offset0 , & ( mdlrefDW -> rtdw . lhmuy0r2mt [ k0 ] .
mwc1d4al3c . cc4y0uq4r0 ) , sizeof ( mdlrefDW -> rtdw . lhmuy0r2mt [ 0 ] .
mwc1d4al3c . cc4y0uq4r0 ) ) ; mr_DrivetrainHevP4_cacheDataToMxArrayWithOffset
( rtdwData , 0 , 62 , offset0 , & ( mdlrefDW -> rtdw . lhmuy0r2mt [ k0 ] .
mwc1d4al3c . hee5prt23b ) , sizeof ( mdlrefDW -> rtdw . lhmuy0r2mt [ 0 ] .
mwc1d4al3c . hee5prt23b ) ) ; mr_DrivetrainHevP4_cacheDataToMxArrayWithOffset
( rtdwData , 0 , 63 , offset0 , & ( mdlrefDW -> rtdw . lhmuy0r2mt [ k0 ] .
mwc1d4al3c . gsvo0gz55h ) , sizeof ( mdlrefDW -> rtdw . lhmuy0r2mt [ 0 ] .
mwc1d4al3c . gsvo0gz55h ) ) ; mr_DrivetrainHevP4_cacheDataToMxArrayWithOffset
( rtdwData , 0 , 64 , offset0 , & ( mdlrefDW -> rtdw . lhmuy0r2mt [ k0 ] .
mwc1d4al3c . budmlwrz5d ) , sizeof ( mdlrefDW -> rtdw . lhmuy0r2mt [ 0 ] .
mwc1d4al3c . budmlwrz5d ) ) ; mr_DrivetrainHevP4_cacheDataToMxArrayWithOffset
( rtdwData , 0 , 65 , offset0 , & ( mdlrefDW -> rtdw . lhmuy0r2mt [ k0 ] .
mwc1d4al3c . gt3cxlciul ) , sizeof ( mdlrefDW -> rtdw . lhmuy0r2mt [ 0 ] .
mwc1d4al3c . gt3cxlciul ) ) ; mr_DrivetrainHevP4_cacheDataToMxArrayWithOffset
( rtdwData , 0 , 66 , offset0 , & ( mdlrefDW -> rtdw . lhmuy0r2mt [ k0 ] .
mwc1d4al3c . fjpdvl1pgq ) , sizeof ( mdlrefDW -> rtdw . lhmuy0r2mt [ 0 ] .
mwc1d4al3c . fjpdvl1pgq ) ) ; mr_DrivetrainHevP4_cacheDataToMxArrayWithOffset
( rtdwData , 0 , 67 , offset0 , & ( mdlrefDW -> rtdw . lhmuy0r2mt [ k0 ] .
mwc1d4al3c . pwwhqetnzc ) , sizeof ( mdlrefDW -> rtdw . lhmuy0r2mt [ 0 ] .
mwc1d4al3c . pwwhqetnzc ) ) ; mr_DrivetrainHevP4_cacheDataToMxArrayWithOffset
( rtdwData , 0 , 68 , offset0 , & ( mdlrefDW -> rtdw . lhmuy0r2mt [ k0 ] .
mwc1d4al3c . pnwnqvpsljv . mo21e3pi2e ) , sizeof ( mdlrefDW -> rtdw .
lhmuy0r2mt [ 0 ] . mwc1d4al3c . pnwnqvpsljv . mo21e3pi2e ) ) ;
mr_DrivetrainHevP4_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 69 , offset0
, & ( mdlrefDW -> rtdw . lhmuy0r2mt [ k0 ] . mwc1d4al3c . fcfn4zgb1m0 .
gj3w1fwhmk ) , sizeof ( mdlrefDW -> rtdw . lhmuy0r2mt [ 0 ] . mwc1d4al3c .
fcfn4zgb1m0 . gj3w1fwhmk ) ) ;
mr_DrivetrainHevP4_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 70 , offset0
, & ( mdlrefDW -> rtdw . lhmuy0r2mt [ k0 ] . mwc1d4al3c . gf1fdxvjnxm .
pf0qopor1e ) , sizeof ( mdlrefDW -> rtdw . lhmuy0r2mt [ 0 ] . mwc1d4al3c .
gf1fdxvjnxm . pf0qopor1e ) ) ;
mr_DrivetrainHevP4_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 71 , offset0
, & ( mdlrefDW -> rtdw . lhmuy0r2mt [ k0 ] . mwc1d4al3c . gf1fdxvjnxm .
b0whoil2mj ) , sizeof ( mdlrefDW -> rtdw . lhmuy0r2mt [ 0 ] . mwc1d4al3c .
gf1fdxvjnxm . b0whoil2mj ) ) ;
mr_DrivetrainHevP4_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 72 , offset0
, & ( mdlrefDW -> rtdw . lhmuy0r2mt [ k0 ] . mwc1d4al3c . gm224dghg1i .
akhjbcdors ) , sizeof ( mdlrefDW -> rtdw . lhmuy0r2mt [ 0 ] . mwc1d4al3c .
gm224dghg1i . akhjbcdors ) ) ; } mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData
) ; } mr_DrivetrainHevP4_cacheDataAsMxArray ( ssDW , 0 , 2 , ( const void * )
& ( mdlrefDW -> rtzce ) , sizeof ( mdlrefDW -> rtzce ) ) ; ( void ) mdlrefDW
; return ssDW ; } void mr_DrivetrainHevP4_SetDWork ( httrpxnoync * mdlrefDW ,
const mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ;
mr_DrivetrainHevP4_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtb )
, ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ; int k0 ;
mr_DrivetrainHevP4_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
a05qxnyi0a ) , rtdwData , 0 , 0 , sizeof ( mdlrefDW -> rtdw . a05qxnyi0a ) )
; mr_DrivetrainHevP4_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw
. kai0m0e2ew ) , rtdwData , 0 , 1 , sizeof ( mdlrefDW -> rtdw . kai0m0e2ew )
) ; mr_DrivetrainHevP4_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW ->
rtdw . hgsyk0bc45 ) , rtdwData , 0 , 2 , sizeof ( mdlrefDW -> rtdw .
hgsyk0bc45 ) ) ; mr_DrivetrainHevP4_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . d4jrbui4i1 ) , rtdwData , 0 , 3 , sizeof ( mdlrefDW ->
rtdw . d4jrbui4i1 ) ) ; mr_DrivetrainHevP4_restoreDataFromMxArray ( ( void *
) & ( mdlrefDW -> rtdw . duvopzo5hi ) , rtdwData , 0 , 4 , sizeof ( mdlrefDW
-> rtdw . duvopzo5hi ) ) ; mr_DrivetrainHevP4_restoreDataFromMxArray ( ( void
* ) & ( mdlrefDW -> rtdw . la5hpljke2 ) , rtdwData , 0 , 5 , sizeof (
mdlrefDW -> rtdw . la5hpljke2 ) ) ; mr_DrivetrainHevP4_restoreDataFromMxArray
( ( void * ) & ( mdlrefDW -> rtdw . d21f1j45dt ) , rtdwData , 0 , 6 , sizeof
( mdlrefDW -> rtdw . d21f1j45dt ) ) ;
mr_DrivetrainHevP4_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
pdphadbq31 ) , rtdwData , 0 , 7 , sizeof ( mdlrefDW -> rtdw . pdphadbq31 ) )
; mr_DrivetrainHevP4_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw
. ghexlrxee4 ) , rtdwData , 0 , 8 , sizeof ( mdlrefDW -> rtdw . ghexlrxee4 )
) ; mr_DrivetrainHevP4_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW ->
rtdw . mofqbaru1g ) , rtdwData , 0 , 9 , sizeof ( mdlrefDW -> rtdw .
mofqbaru1g ) ) ; mr_DrivetrainHevP4_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . nmkn0jbvty ) , rtdwData , 0 , 10 , sizeof ( mdlrefDW ->
rtdw . nmkn0jbvty ) ) ; mr_DrivetrainHevP4_restoreDataFromMxArray ( ( void *
) & ( mdlrefDW -> rtdw . fp1iusufwe ) , rtdwData , 0 , 11 , sizeof ( mdlrefDW
-> rtdw . fp1iusufwe ) ) ; mr_DrivetrainHevP4_restoreDataFromMxArray ( ( void
* ) & ( mdlrefDW -> rtdw . fp0ancafza ) , rtdwData , 0 , 12 , sizeof (
mdlrefDW -> rtdw . fp0ancafza ) ) ; mr_DrivetrainHevP4_restoreDataFromMxArray
( ( void * ) & ( mdlrefDW -> rtdw . go4nltk2qq ) , rtdwData , 0 , 13 , sizeof
( mdlrefDW -> rtdw . go4nltk2qq ) ) ;
mr_DrivetrainHevP4_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
lmofltzpch ) , rtdwData , 0 , 14 , sizeof ( mdlrefDW -> rtdw . lmofltzpch ) )
; mr_DrivetrainHevP4_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw
. ftanrlzxqu ) , rtdwData , 0 , 15 , sizeof ( mdlrefDW -> rtdw . ftanrlzxqu )
) ; mr_DrivetrainHevP4_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW ->
rtdw . cs3aeuofig ) , rtdwData , 0 , 16 , sizeof ( mdlrefDW -> rtdw .
cs3aeuofig ) ) ; mr_DrivetrainHevP4_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . lq4git1asr ) , rtdwData , 0 , 17 , sizeof ( mdlrefDW ->
rtdw . lq4git1asr ) ) ; mr_DrivetrainHevP4_restoreDataFromMxArray ( ( void *
) & ( mdlrefDW -> rtdw . g0lhf5n0k0 ) , rtdwData , 0 , 18 , sizeof ( mdlrefDW
-> rtdw . g0lhf5n0k0 ) ) ; mr_DrivetrainHevP4_restoreDataFromMxArray ( ( void
* ) & ( mdlrefDW -> rtdw . byy0jx5dbt ) , rtdwData , 0 , 19 , sizeof (
mdlrefDW -> rtdw . byy0jx5dbt ) ) ; mr_DrivetrainHevP4_restoreDataFromMxArray
( ( void * ) & ( mdlrefDW -> rtdw . m0azm0ihsg ) , rtdwData , 0 , 20 , sizeof
( mdlrefDW -> rtdw . m0azm0ihsg ) ) ;
mr_DrivetrainHevP4_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
ioyvk1irfb ) , rtdwData , 0 , 21 , sizeof ( mdlrefDW -> rtdw . ioyvk1irfb ) )
; mr_DrivetrainHevP4_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw
. mnv4vjrnep ) , rtdwData , 0 , 22 , sizeof ( mdlrefDW -> rtdw . mnv4vjrnep )
) ; mr_DrivetrainHevP4_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW ->
rtdw . jqva5kfmih ) , rtdwData , 0 , 23 , sizeof ( mdlrefDW -> rtdw .
jqva5kfmih ) ) ; mr_DrivetrainHevP4_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ldmgpk510f ) , rtdwData , 0 , 24 , sizeof ( mdlrefDW ->
rtdw . ldmgpk510f ) ) ; mr_DrivetrainHevP4_restoreDataFromMxArray ( ( void *
) & ( mdlrefDW -> rtdw . pputvuru1l ) , rtdwData , 0 , 25 , sizeof ( mdlrefDW
-> rtdw . pputvuru1l ) ) ; mr_DrivetrainHevP4_restoreDataFromMxArray ( ( void
* ) & ( mdlrefDW -> rtdw . eq1l4ggd02 ) , rtdwData , 0 , 26 , sizeof (
mdlrefDW -> rtdw . eq1l4ggd02 ) ) ; mr_DrivetrainHevP4_restoreDataFromMxArray
( ( void * ) & ( mdlrefDW -> rtdw . p3dybhws34 ) , rtdwData , 0 , 27 , sizeof
( mdlrefDW -> rtdw . p3dybhws34 ) ) ;
mr_DrivetrainHevP4_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
kb3b4zgdci ) , rtdwData , 0 , 28 , sizeof ( mdlrefDW -> rtdw . kb3b4zgdci ) )
; mr_DrivetrainHevP4_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw
. p5dxjc2b1n ) , rtdwData , 0 , 29 , sizeof ( mdlrefDW -> rtdw . p5dxjc2b1n )
) ; mr_DrivetrainHevP4_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW ->
rtdw . fqwhbtulpg ) , rtdwData , 0 , 30 , sizeof ( mdlrefDW -> rtdw .
fqwhbtulpg ) ) ; mr_DrivetrainHevP4_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . hzuoark40t ) , rtdwData , 0 , 31 , sizeof ( mdlrefDW ->
rtdw . hzuoark40t ) ) ; mr_DrivetrainHevP4_restoreDataFromMxArray ( ( void *
) & ( mdlrefDW -> rtdw . jzzjgbrvwm ) , rtdwData , 0 , 32 , sizeof ( mdlrefDW
-> rtdw . jzzjgbrvwm ) ) ; mr_DrivetrainHevP4_restoreDataFromMxArray ( ( void
* ) & ( mdlrefDW -> rtdw . fc3sbhift3 ) , rtdwData , 0 , 33 , sizeof (
mdlrefDW -> rtdw . fc3sbhift3 ) ) ; mr_DrivetrainHevP4_restoreDataFromMxArray
( ( void * ) & ( mdlrefDW -> rtdw . pvdkznjss2 ) , rtdwData , 0 , 34 , sizeof
( mdlrefDW -> rtdw . pvdkznjss2 ) ) ;
mr_DrivetrainHevP4_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
eo10mdoia0 ) , rtdwData , 0 , 35 , sizeof ( mdlrefDW -> rtdw . eo10mdoia0 ) )
; mr_DrivetrainHevP4_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw
. lwg3p0cdvf ) , rtdwData , 0 , 36 , sizeof ( mdlrefDW -> rtdw . lwg3p0cdvf )
) ; mr_DrivetrainHevP4_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW ->
rtdw . k4j33f4byh ) , rtdwData , 0 , 37 , sizeof ( mdlrefDW -> rtdw .
k4j33f4byh ) ) ; mr_DrivetrainHevP4_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . lwrnf4n3xe ) , rtdwData , 0 , 38 , sizeof ( mdlrefDW ->
rtdw . lwrnf4n3xe ) ) ; mr_DrivetrainHevP4_restoreDataFromMxArray ( ( void *
) & ( mdlrefDW -> rtdw . mtqbtozmmf ) , rtdwData , 0 , 39 , sizeof ( mdlrefDW
-> rtdw . mtqbtozmmf ) ) ; mr_DrivetrainHevP4_restoreDataFromMxArray ( ( void
* ) & ( mdlrefDW -> rtdw . nxeroykpr2 ) , rtdwData , 0 , 40 , sizeof (
mdlrefDW -> rtdw . nxeroykpr2 ) ) ; mr_DrivetrainHevP4_restoreDataFromMxArray
( ( void * ) & ( mdlrefDW -> rtdw . ch2lrz3var ) , rtdwData , 0 , 41 , sizeof
( mdlrefDW -> rtdw . ch2lrz3var ) ) ;
mr_DrivetrainHevP4_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
eagcze1ljh ) , rtdwData , 0 , 42 , sizeof ( mdlrefDW -> rtdw . eagcze1ljh ) )
; mr_DrivetrainHevP4_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw
. k2cw3yj0k4 ) , rtdwData , 0 , 43 , sizeof ( mdlrefDW -> rtdw . k2cw3yj0k4 )
) ; mr_DrivetrainHevP4_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW ->
rtdw . l53qtov1bq ) , rtdwData , 0 , 44 , sizeof ( mdlrefDW -> rtdw .
l53qtov1bq ) ) ; mr_DrivetrainHevP4_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . argkysitez ) , rtdwData , 0 , 45 , sizeof ( mdlrefDW ->
rtdw . argkysitez ) ) ; mr_DrivetrainHevP4_restoreDataFromMxArray ( ( void *
) & ( mdlrefDW -> rtdw . he5fvhy1qg ) , rtdwData , 0 , 46 , sizeof ( mdlrefDW
-> rtdw . he5fvhy1qg ) ) ; mr_DrivetrainHevP4_restoreDataFromMxArray ( ( void
* ) & ( mdlrefDW -> rtdw . azodehxuoi ) , rtdwData , 0 , 47 , sizeof (
mdlrefDW -> rtdw . azodehxuoi ) ) ; mr_DrivetrainHevP4_restoreDataFromMxArray
( ( void * ) & ( mdlrefDW -> rtdw . lvgmhoo4ri ) , rtdwData , 0 , 48 , sizeof
( mdlrefDW -> rtdw . lvgmhoo4ri ) ) ; for ( k0 = 0 ; k0 < 1 ; ++ k0 ) { const
mwIndex offset0 = k0 ; mr_DrivetrainHevP4_restoreDataFromMxArrayWithOffset (
& ( mdlrefDW -> rtdw . oodask1ixq [ k0 ] . mifpjkvj4c . msturv5mf2 ) ,
rtdwData , 0 , 49 , offset0 , sizeof ( mdlrefDW -> rtdw . oodask1ixq [ 0 ] .
mifpjkvj4c . msturv5mf2 ) ) ;
mr_DrivetrainHevP4_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
oodask1ixq [ k0 ] . mifpjkvj4c . eoiiwds1vs ) , rtdwData , 0 , 50 , offset0 ,
sizeof ( mdlrefDW -> rtdw . oodask1ixq [ 0 ] . mifpjkvj4c . eoiiwds1vs ) ) ;
mr_DrivetrainHevP4_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
oodask1ixq [ k0 ] . mifpjkvj4c . ff52rggg3b ) , rtdwData , 0 , 51 , offset0 ,
sizeof ( mdlrefDW -> rtdw . oodask1ixq [ 0 ] . mifpjkvj4c . ff52rggg3b ) ) ;
mr_DrivetrainHevP4_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
oodask1ixq [ k0 ] . mifpjkvj4c . aymfqvghll ) , rtdwData , 0 , 52 , offset0 ,
sizeof ( mdlrefDW -> rtdw . oodask1ixq [ 0 ] . mifpjkvj4c . aymfqvghll ) ) ;
mr_DrivetrainHevP4_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
oodask1ixq [ k0 ] . mifpjkvj4c . igqncywq3x ) , rtdwData , 0 , 53 , offset0 ,
sizeof ( mdlrefDW -> rtdw . oodask1ixq [ 0 ] . mifpjkvj4c . igqncywq3x ) ) ;
mr_DrivetrainHevP4_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
oodask1ixq [ k0 ] . mifpjkvj4c . fj5msgkhuw ) , rtdwData , 0 , 54 , offset0 ,
sizeof ( mdlrefDW -> rtdw . oodask1ixq [ 0 ] . mifpjkvj4c . fj5msgkhuw ) ) ;
mr_DrivetrainHevP4_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
oodask1ixq [ k0 ] . mifpjkvj4c . gzd2sy5gbk ) , rtdwData , 0 , 55 , offset0 ,
sizeof ( mdlrefDW -> rtdw . oodask1ixq [ 0 ] . mifpjkvj4c . gzd2sy5gbk ) ) ;
mr_DrivetrainHevP4_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
oodask1ixq [ k0 ] . mifpjkvj4c . h2plpnu3mt . mo21e3pi2e ) , rtdwData , 0 ,
56 , offset0 , sizeof ( mdlrefDW -> rtdw . oodask1ixq [ 0 ] . mifpjkvj4c .
h2plpnu3mt . mo21e3pi2e ) ) ;
mr_DrivetrainHevP4_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
oodask1ixq [ k0 ] . mifpjkvj4c . iqoij5snsx . gj3w1fwhmk ) , rtdwData , 0 ,
57 , offset0 , sizeof ( mdlrefDW -> rtdw . oodask1ixq [ 0 ] . mifpjkvj4c .
iqoij5snsx . gj3w1fwhmk ) ) ;
mr_DrivetrainHevP4_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
oodask1ixq [ k0 ] . mifpjkvj4c . gtmuxhbejy . pf0qopor1e ) , rtdwData , 0 ,
58 , offset0 , sizeof ( mdlrefDW -> rtdw . oodask1ixq [ 0 ] . mifpjkvj4c .
gtmuxhbejy . pf0qopor1e ) ) ;
mr_DrivetrainHevP4_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
oodask1ixq [ k0 ] . mifpjkvj4c . gtmuxhbejy . b0whoil2mj ) , rtdwData , 0 ,
59 , offset0 , sizeof ( mdlrefDW -> rtdw . oodask1ixq [ 0 ] . mifpjkvj4c .
gtmuxhbejy . b0whoil2mj ) ) ;
mr_DrivetrainHevP4_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
oodask1ixq [ k0 ] . mifpjkvj4c . khilm44itf . akhjbcdors ) , rtdwData , 0 ,
60 , offset0 , sizeof ( mdlrefDW -> rtdw . oodask1ixq [ 0 ] . mifpjkvj4c .
khilm44itf . akhjbcdors ) ) ; } for ( k0 = 0 ; k0 < 1 ; ++ k0 ) { const
mwIndex offset0 = k0 ; mr_DrivetrainHevP4_restoreDataFromMxArrayWithOffset (
& ( mdlrefDW -> rtdw . lhmuy0r2mt [ k0 ] . mwc1d4al3c . cc4y0uq4r0 ) ,
rtdwData , 0 , 61 , offset0 , sizeof ( mdlrefDW -> rtdw . lhmuy0r2mt [ 0 ] .
mwc1d4al3c . cc4y0uq4r0 ) ) ;
mr_DrivetrainHevP4_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
lhmuy0r2mt [ k0 ] . mwc1d4al3c . hee5prt23b ) , rtdwData , 0 , 62 , offset0 ,
sizeof ( mdlrefDW -> rtdw . lhmuy0r2mt [ 0 ] . mwc1d4al3c . hee5prt23b ) ) ;
mr_DrivetrainHevP4_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
lhmuy0r2mt [ k0 ] . mwc1d4al3c . gsvo0gz55h ) , rtdwData , 0 , 63 , offset0 ,
sizeof ( mdlrefDW -> rtdw . lhmuy0r2mt [ 0 ] . mwc1d4al3c . gsvo0gz55h ) ) ;
mr_DrivetrainHevP4_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
lhmuy0r2mt [ k0 ] . mwc1d4al3c . budmlwrz5d ) , rtdwData , 0 , 64 , offset0 ,
sizeof ( mdlrefDW -> rtdw . lhmuy0r2mt [ 0 ] . mwc1d4al3c . budmlwrz5d ) ) ;
mr_DrivetrainHevP4_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
lhmuy0r2mt [ k0 ] . mwc1d4al3c . gt3cxlciul ) , rtdwData , 0 , 65 , offset0 ,
sizeof ( mdlrefDW -> rtdw . lhmuy0r2mt [ 0 ] . mwc1d4al3c . gt3cxlciul ) ) ;
mr_DrivetrainHevP4_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
lhmuy0r2mt [ k0 ] . mwc1d4al3c . fjpdvl1pgq ) , rtdwData , 0 , 66 , offset0 ,
sizeof ( mdlrefDW -> rtdw . lhmuy0r2mt [ 0 ] . mwc1d4al3c . fjpdvl1pgq ) ) ;
mr_DrivetrainHevP4_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
lhmuy0r2mt [ k0 ] . mwc1d4al3c . pwwhqetnzc ) , rtdwData , 0 , 67 , offset0 ,
sizeof ( mdlrefDW -> rtdw . lhmuy0r2mt [ 0 ] . mwc1d4al3c . pwwhqetnzc ) ) ;
mr_DrivetrainHevP4_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
lhmuy0r2mt [ k0 ] . mwc1d4al3c . pnwnqvpsljv . mo21e3pi2e ) , rtdwData , 0 ,
68 , offset0 , sizeof ( mdlrefDW -> rtdw . lhmuy0r2mt [ 0 ] . mwc1d4al3c .
pnwnqvpsljv . mo21e3pi2e ) ) ;
mr_DrivetrainHevP4_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
lhmuy0r2mt [ k0 ] . mwc1d4al3c . fcfn4zgb1m0 . gj3w1fwhmk ) , rtdwData , 0 ,
69 , offset0 , sizeof ( mdlrefDW -> rtdw . lhmuy0r2mt [ 0 ] . mwc1d4al3c .
fcfn4zgb1m0 . gj3w1fwhmk ) ) ;
mr_DrivetrainHevP4_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
lhmuy0r2mt [ k0 ] . mwc1d4al3c . gf1fdxvjnxm . pf0qopor1e ) , rtdwData , 0 ,
70 , offset0 , sizeof ( mdlrefDW -> rtdw . lhmuy0r2mt [ 0 ] . mwc1d4al3c .
gf1fdxvjnxm . pf0qopor1e ) ) ;
mr_DrivetrainHevP4_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
lhmuy0r2mt [ k0 ] . mwc1d4al3c . gf1fdxvjnxm . b0whoil2mj ) , rtdwData , 0 ,
71 , offset0 , sizeof ( mdlrefDW -> rtdw . lhmuy0r2mt [ 0 ] . mwc1d4al3c .
gf1fdxvjnxm . b0whoil2mj ) ) ;
mr_DrivetrainHevP4_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
lhmuy0r2mt [ k0 ] . mwc1d4al3c . gm224dghg1i . akhjbcdors ) , rtdwData , 0 ,
72 , offset0 , sizeof ( mdlrefDW -> rtdw . lhmuy0r2mt [ 0 ] . mwc1d4al3c .
gm224dghg1i . akhjbcdors ) ) ; } } mr_DrivetrainHevP4_restoreDataFromMxArray
( ( void * ) & ( mdlrefDW -> rtzce ) , ssDW , 0 , 2 , sizeof ( mdlrefDW ->
rtzce ) ) ; } void mr_DrivetrainHevP4_RegisterSimStateChecksum ( SimStruct *
S ) { const uint32_T chksum [ 4 ] = { 3780927633U , 2834975573U , 2157197140U
, 632238765U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"DrivetrainHevP4" , & chksum [ 0 ] ) ; } mxArray *
mr_DrivetrainHevP4_GetSimStateDisallowedBlocks ( ) { return ( NULL ) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
