#ifndef RTW_HEADER_HevP4ReferenceApplication_h_
#define RTW_HEADER_HevP4ReferenceApplication_h_
#ifndef HevP4ReferenceApplication_COMMON_INCLUDES_
#define HevP4ReferenceApplication_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "HevP4ReferenceApplication_types.h"
#include "DrivetrainHevP4.h"
#include "SiMappedEngine.h"
#include "BattHevP4.h"
#include "HevP4OptimalController.h"
#include "SiEngineController.h"
#include "HevP4TransmissionController.h"
#include "MotMappedP4.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include <string.h>
#include <stddef.h>
#include "rtGetInf.h"
#include "rtGetNaN.h"
#include "model_reference_types.h"
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include "zero_crossing_types.h"
#define MODEL_NAME HevP4ReferenceApplication
#define NSAMPLE_TIMES (6) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (178) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (63)   
#elif NCSTATES != 63
#error Invalid specification of NCSTATES defined in compiler command
#endif
#define UseMMIDataLogging
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T jet0xs01ji ; } jghfvfmmrg ; typedef struct { int8_T
hnlzvdkzrg ; boolean_T jdyejkwif0 ; } fih5so2yut ; typedef struct { real_T
dv3wt0wr2k ; real_T atf0jpz3pn ; real_T eun24ypzk4 ; real_T jgjpqtsaas ;
real_T cdupltdhpp ; real_T p1sxhrirqu ; real_T diuztsorgb ; real_T cwktzm5bx5
; real_T ct1fs04adt ; real_T kiksb0cvme [ 2 ] ; real_T fqf5ysmqtz [ 2 ] ;
real_T jmeumg2nik ; real_T iqalrceyqn ; real_T nwxo2im0pt ; real_T gsinv42o3l
; real_T bkrpyiybvs ; real_T lpqjrdy4bs ; real_T iru4fbcx3b ; real_T
emphi231ez ; real_T gaeow3rqzh ; real_T duc0cubyeu ; real_T oeo1eajcvy ;
real_T ebuggei1gn ; real_T lygr2jvxsh ; real_T i3nr2q4ehm ; real_T hpa0gdloal
; real_T a0l4e55osj ; real_T iytvha1kaa ; real_T dn5ughrrsp ; real_T
gwrpevjgp4 ; real_T e0oyv3e4dd ; real_T j5b0rut2qf ; real_T ifin0uxrbw ;
real_T b0bnfcsyz0 ; real_T kmt0wccsr4 ; real_T dmcl4w1he2 ; real_T afw5zssttf
; real_T bsqyrdigvj ; real_T lxnnoylpgl ; real_T ogmmaptk1y ; real_T
ovdoyylbqv ; real_T po41xrhuja ; real_T mdfwff4l33 ; real_T ovhryeknq0 ;
real_T poxxkj3bvg ; real_T itmoz4lcsg ; real_T h1jghrqfqr ; real_T f0okyy4yyu
; real_T psmccdqk4g ; real_T bxy2xzbc3h ; real_T k03nsagqex ; real_T
luftbvp0tn ; real_T gsjn5sz45a ; real_T esrwrast5r ; real_T jar5tbvetj ;
real_T jhz2jkc3wd ; real_T obq4ahy2fk ; real_T n5gxdf2tw0 ; real_T l30tekirvc
; real_T opt4wflqns ; real_T ggorcyccjy ; real_T knetuj3j3h ; real_T
n1h1mpduzx ; real_T g4ryn23br0 ; real_T jmk0frun1h ; real_T komuumxu3a ;
real_T hsnjs2culi ; real_T ilzspmpfew ; real_T aivc02lioe ; real_T kcmrsy4emv
; real_T l20y3tl2fi ; real_T psiy0cbayl ; real_T pobe11xeq5 ; real_T
a3qhs3xdv3 ; real_T lspamfw4np ; real_T c3wnl42pzc ; real_T mzvknutvpn ;
real_T lzicrvfxs0 ; real_T hmgklgutnu ; real_T cyv2tcxosp ; real_T kf0htme02q
; real_T idps1oqtc2 ; real_T fpwy4odd1j ; real_T hudumnlkkp ; real_T
exmmyiyecb ; real_T let5105viq ; real_T da1swk5skq ; real_T aqbwnptjwk ;
real_T jg44dse3nj ; real_T j4pyldvufb ; real_T os4bvdu2dn [ 2 ] ; real_T
bbi5p03ull ; real_T agsfivq05h ; real_T pl1qpeb24y ; real_T beoymwb1ds ;
real_T mgnwmmmvsy ; real_T oujuyvi0mg ; real_T crshssffqc ; real_T h0peaivwwn
; real_T k5jqk0sol2 ; real_T o1oroyrw13 ; real_T cdj055qwtt ; real_T
byo0djc3ev ; real_T l5uoxtpgkv ; real_T p0doo00o1w ; real_T ddpajetaf2 ;
real_T plyh5aql1b ; real_T mdhboq50pb ; real_T h5mtw1jmmu ; real_T nit2nkypbx
; real_T kkglsripg0 ; real_T eosdykmyyc ; real_T iwqceuwyof ; real_T
j5lxue1b2g ; real_T hnif32llvq ; real_T gqj31rygmo ; real_T dxdkngxky3 ;
real_T h31pywel0d ; real_T bq2avi4o4c ; real_T phefapml0b ; real_T l2wo05eoex
; real_T kenkr33r5i [ 2 ] ; real_T iwdvnd12wl [ 2 ] ; real_T js12er4ud2 ;
real_T ffpgbotpy5 ; real_T lbhkoluejj ; real_T la3brkkri1 ; real_T dnjvmk5ndp
; real_T bjaf22yvfs ; real_T hxyqyfsavy ; real_T owiwiqigkl ; real_T
c5e2hzpnbf ; real_T iljgvw41cw ; real_T og1vaqgvra ; real_T ktrgii52uw ;
real_T k2gcn0rpks ; real_T cmf5iapvn3 ; real_T b0rjr1l1ao ; real_T pdwrzcjj3o
; real_T gv0mllfnk1 ; real_T gtbbdrbjbz ; real_T eey5gaxshl ; real_T
lb0gyjdkb5 ; real_T n5n30ohz53 ; real_T hq53ossn2q ; real_T gkeqenbznl ;
real_T dc2npfnluv ; real_T mdvnq0h50i ; real_T gvrmsjkbyd ; real_T j1kzeqlfwg
; real_T flt0akp4pe ; real_T lr2pgfw4gf ; real_T monfilmur4 ; real_T
keju3jlddl ; real_T ah4pksqfih ; real_T kt4vcyt4rj ; real_T km2j44r5uv ;
real_T dinw2mwr0y ; real_T jyhrmsx1yf ; real_T j2en423lbk ; real_T cytjwlxltd
; real_T lbtq0ku545 ; real_T njyf5jbpjr [ 2 ] ; boolean_T epagtjnze1 ;
boolean_T e102hifvqt ; boolean_T ppit5xnaws ; boolean_T ldemmfgvw3 ;
boolean_T cj4kh32gsk ; boolean_T fz3pquw0iv ; boolean_T ldin2du1sj ;
boolean_T aasrrzna5g ; boolean_T bxvneesqxv ; jghfvfmmrg d0xw0oxj5a ;
jghfvfmmrg im2vq3d3irm ; } c5zlh4mzus ; typedef struct { real_T c1ij1f4luo [
2 ] ; real_T kh5xdhjoen ; real_T bhsln1im02 ; real_T ovmdszn3vi ; real_T
h4bk44iq0j ; real_T fnd1cgu2ez ; real_T hufmyzg00g ; real_T fgxzeqilcf ;
real_T caj4332p1l ; volatile real_T h04c4o3sdm [ 2 ] ; real_T pz1rko3nhq ;
real_T jrbpexblku ; real_T infpntaopi ; real_T cpzvjo4vs1 ; volatile real_T
m5xnya5qov ; volatile real_T ezbvugwn3z ; volatile real_T knm5vku22q ;
volatile real_T melid01ejw ; volatile real_T appsnxr1qq ; volatile real_T
maexa33f2j ; volatile real_T gxfbvg10fk ; volatile real_T o2woa2lt3g ;
volatile real_T lb0biqjhcr ; volatile real_T aooi2g3epf ; volatile real_T
pth0sd032r ; real_T l1spg24m54 ; real_T fulcowlnoh ; volatile real_T
js1li4zbu0 ; volatile real_T eg44xjqske ; volatile real_T hmcxdptmmg ;
volatile real_T adrjeq0yql ; volatile real_T nzezetf530 ; volatile real_T
ar5h2piciy ; real_T g13w5b43up ; real_T p1khtziyyr ; real_T lgrvjhedz4 ;
real_T cofsoqmglc ; real_T lii3bzekam ; real_T ayhyrzc5bo ; real_T ep524gyioe
; real_T dkktohtk2t ; real_T ouiv2ttb4k ; real_T fqljzsn5xc ; real_T
mgtnggtvl3 ; real_T bhqhbe5hw0 ; real_T npx35rsk2y ; real_T dek2b4z54h ;
real_T hr1f2ycsrs ; real_T a2gc015fmo ; real_T bugufqhsqr ; volatile real_T
h3ritbtaba ; volatile real_T f3dj5ppzb4 ; volatile real_T p142joj1tt ; real_T
lfduexc22r ; real_T mypipgzpqg ; real_T e5k5uh1tii ; real_T hj5jjgcaox ;
real_T mqxljfmsyj ; real_T odzx5k4e10 ; real_T pwychxn2rx ; real_T cvod5gblce
; real_T jz4igdfsjy ; real_T bschkhlqcx ; real_T p5zpn5rl4f ; real_T
enyy3t4ps3 ; real_T droxjfozbf ; real_T k5oauund31 ; real_T cutrrpdov1 ;
real_T mpliu3opsq ; real_T evydn1x5u3 ; real_T aliqzpm34m ; real_T pzq0ihn3t3
; real_T o2dkzedwyd ; real_T iwacvi1cvr ; real_T fue3uld4xj ; real_T
h5spwccaot ; real_T iepmyvc12j ; real_T lcvtpl0xhz ; real_T jdrec4mf1t ;
real_T gcwd3vcs2h ; real_T ipgludoliy ; real_T itlwzywcut ; real_T mthxcazoeq
; real_T acnon4phey ; real_T mzbogashtm ; real_T oq5dnpwzel ; real_T
k5sxdubawm ; real_T ldljdyravq ; real_T pcuhwhpn3x ; real_T jdxnqz3k3z ;
real_T m0gspyix5l ; real_T kpyfexn5a1 ; real_T ialx3y2ktr ; real_T mqiplucikd
; real_T mtylxvc53n ; real_T cpjc0nnbop ; real_T f1e1x0c2vm ; real_T
nrnbdvzt0f ; real_T irc32x12y1 ; real_T eokzn5lqzs ; real_T g4iun1vbdu ;
real_T o141kdey3a ; real_T fxlat4s44d ; real_T pwfj2ojmua ; real_T fcb3sp11yw
; real_T icbcw4dt4i ; real_T gt3cupzjr1 ; real_T mudviuktks ; real_T
bntxvuzexg ; real_T b2542hzgcf ; real_T frklc1du0s ; real_T chi35zyntr ;
real_T hpttnbo4xq ; real_T lnr1sinkco ; real_T mh53p0dtth ; real_T bduaxxbpzz
; real_T dm1feblhqa ; real_T frajpj20to ; real_T iyz0ey02aq ; real_T
k5owklwcio ; real_T irfopsw5u3 ; real_T dde0fwvl0o ; struct { void *
LoggedData [ 6 ] ; } kfm3yb2cmb ; struct { void * LoggedData [ 4 ] ; }
f4fatx1wo5 ; struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ;
} osxwf31rhs ; struct { void * LoggedData ; } lrusbacj5t ; struct { void *
LoggedData ; } nis2t3pp5z ; struct { void * LoggedData ; } eqnnkuj4dr ;
struct { void * LoggedData ; } osmmr52u5y ; int32_T dgfmvwissk ; int32_T
kvsmqclsqu ; int32_T ivnj3kwa54 ; uint32_T cjeoae02q5 ; uint32_T pxrensdadn ;
int_T j4cpglu32p [ 2 ] ; int_T k5jlqybics ; struct { int_T PrevIndex ; }
he0vfk52c2 ; int_T pcvkuijeek ; int_T iyr13augnz ; int_T juvdeom5ty ; int_T
db235qphyz ; volatile int8_T opaw4z2zn3 ; volatile int8_T fi1llmjhnm ;
volatile int8_T omlg0bte3m ; volatile int8_T fb1jadv2t5 ; volatile int8_T
arub2p4zzr ; volatile int8_T pixene2r1k ; volatile int8_T ohzb3swhrq ;
volatile int8_T pblwjrwtpn ; volatile int8_T cbx5s3rbvn ; volatile int8_T
gvx5sloovp ; volatile int8_T f0hhltjlcn ; volatile int8_T n5ycrmji5n ; int8_T
lh3epubkdg ; volatile int8_T g0rarwcx0n ; volatile int8_T ph3dyn2vbi ;
volatile int8_T buvgxg4wiw ; volatile int8_T dzase2snq2 ; volatile int8_T
ac55uhsiqx ; volatile int8_T etouatgqfx ; volatile int8_T gzxynjg3le ;
volatile int8_T giqmtzacnq ; volatile int8_T b4ck1dw0sr ; uint8_T o5b1d5v4kk
; uint8_T cgd2ecnupw ; uint8_T ev0qxkvgf2 ; uint8_T k25cpbrhkh ; boolean_T
mgfuv3v40s ; boolean_T erh05us4i2 ; httrpxnoync ihhigf1gyq ; obfkhtmwsvj
lkxnu4ieaj ; fc1yykdatze fxfpjs5zwf ; jaycrc4s13t ahts4cu30v ; lbmxgxauxab
i1wwqrhe01 ; fjvy5vdomkr ehgw5hos5u ; hs55xurqzk3 d43yu213mh ; fih5so2yut
d0xw0oxj5a ; fih5so2yut im2vq3d3irm ; } lkkrkctitn ; typedef struct { real_T
fzppb4fxpw ; real_T hrpvbqnxcm ; dv0k21emzh ivpu5oi1vy ; real_T p5ary1pyta ;
fge4b0tiis i0l3sl3egl ; real_T f4jdoevyqa ; nzo4ptcd4i a1ungebxie ; real_T
bsccreyw2k ; real_T pplelyhu0b ; real_T l43r4icf05 ; real_T oje5ckcb53 ;
real_T muxdrd5ttu ; real_T lcrtnfg2l5 ; real_T nqlma2yszf ; real_T oelaqhrdzl
; real_T ble4yq3fvo ; koxbpdaoz0 nx1404k4i3 ; } jhyfx1uf4y ; typedef int_T
fhfulmlian [ 1 ] ; typedef real_T iml0ztclnc [ 2 ] ; typedef struct { real_T
fzppb4fxpw ; real_T hrpvbqnxcm ; o4t1ox0xnc ivpu5oi1vy ; real_T p5ary1pyta ;
af1kriqllf i0l3sl3egl ; real_T f4jdoevyqa ; kuejxqaigs a1ungebxie ; real_T
bsccreyw2k ; real_T pplelyhu0b ; real_T l43r4icf05 ; real_T oje5ckcb53 ;
real_T muxdrd5ttu ; real_T lcrtnfg2l5 ; real_T nqlma2yszf ; real_T oelaqhrdzl
; real_T ble4yq3fvo ; cfdt5amtic nx1404k4i3 ; } nyo0ps4iab ; typedef struct {
boolean_T fzppb4fxpw ; boolean_T hrpvbqnxcm ; jjihdbtkak ivpu5oi1vy ;
boolean_T p5ary1pyta ; hbv32131sw i0l3sl3egl ; boolean_T f4jdoevyqa ;
exeeqdnta3 a1ungebxie ; boolean_T bsccreyw2k ; boolean_T pplelyhu0b ;
boolean_T l43r4icf05 ; boolean_T oje5ckcb53 ; boolean_T muxdrd5ttu ;
boolean_T lcrtnfg2l5 ; boolean_T nqlma2yszf ; boolean_T oelaqhrdzl ;
boolean_T ble4yq3fvo ; l241403ohv nx1404k4i3 ; } p3zfy11wvw ; typedef struct
{ real_T fzppb4fxpw ; real_T hrpvbqnxcm ; he0w3nuwh3 ivpu5oi1vy ; real_T
p5ary1pyta ; fxfoz2eidp i0l3sl3egl ; real_T f4jdoevyqa ; d1sixwk3if
a1ungebxie ; real_T bsccreyw2k ; real_T pplelyhu0b ; real_T l43r4icf05 ;
real_T oje5ckcb53 ; real_T muxdrd5ttu ; real_T lcrtnfg2l5 ; real_T nqlma2yszf
; real_T oelaqhrdzl ; real_T ble4yq3fvo ; cb1lstseqo nx1404k4i3 ; }
jc3bffow3k ; typedef struct { real_T fzppb4fxpw ; real_T hrpvbqnxcm ;
a5mysw00zg ivpu5oi1vy ; real_T p5ary1pyta ; aqpefy251j i0l3sl3egl ; real_T
f4jdoevyqa ; bfc2nuwctg a1ungebxie ; real_T bsccreyw2k ; real_T pplelyhu0b ;
real_T l43r4icf05 ; real_T oje5ckcb53 ; real_T muxdrd5ttu ; real_T lcrtnfg2l5
; real_T nqlma2yszf ; real_T oelaqhrdzl ; real_T ble4yq3fvo ; o1dbndwgao
nx1404k4i3 ; } pnu4g0sxi2 ; typedef struct { real_T fzppb4fxpw ; real_T
hrpvbqnxcm ; dx3odfua53 ivpu5oi1vy ; real_T p5ary1pyta ; m0vqg0xkmk
i0l3sl3egl ; real_T f4jdoevyqa ; pl1jvtcou5 a1ungebxie ; real_T bsccreyw2k ;
real_T pplelyhu0b ; real_T l43r4icf05 ; real_T oje5ckcb53 ; real_T muxdrd5ttu
; real_T lcrtnfg2l5 ; real_T nqlma2yszf ; real_T oelaqhrdzl ; real_T
ble4yq3fvo ; d21uefewkm nx1404k4i3 ; } dgyodbybnk ; typedef struct {
l2xiyzkbzo czagahvfxt ; e5ydmz2av1 lb4ckb0ufi ; real_T eszvtz04mb ; real_T
aos1jx50it ; real_T p03xs5vawb ; real_T kmatiky2t2 ; real_T crvi12qfyy ;
real_T d4wfhz3pjs ; real_T ly3icfkisg ; real_T dfbeyzw1ph ; real_T iqs4kgcb2r
; real_T hbkyprf2u0 ; an3hr1nuoh jgkpling5h ; } jcm110q220 ; typedef struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMappingInfo * childMMI [ 7 ] ; }
DataMapInfo ; struct huq5bp1rixa_ { real_T LongitudinalDriver_GearInit ;
real_T SignalHold_IC ; real_T SignalHold_IC_b0akor01bo ; real_T
LongitudinalDriver_Kpt ; real_T LongitudinalDriver_L ; real_T
LongitudinalDriver_aR ; real_T LongitudinalDriver_bR ; real_T
LongitudinalDriver_cR ; real_T LongitudinalDriver_g ; real_T
LongitudinalDriver_m ; real_T LongitudinalDriver_tShift ; real_T
LongitudinalDriver_tau ; real_T u1_UpperSat ; real_T u1_LowerSat ; real_T
u0_UpperSat ; real_T u0_LowerSat ; real_T Constant_Value ; real_T
Constant_Value_lmzuecgapm ; real_T Switch_Threshold ; real_T
uDLookupTable_tableData [ 401 ] ; real_T uDLookupTable_bp01Data [ 401 ] ;
real_T TransferFcn_A ; real_T TransferFcn_C ; real_T MotorCouplingDynamics_A
; real_T MotorCouplingDynamics_C ; real_T FirstOrderHold1_IniOut ; real_T
FirstOrderHold1_ErrTol ; real_T FirstOrderHold2_IniOut ; real_T
FirstOrderHold2_ErrTol ; real_T FirstOrderHold12_IniOut ; real_T
FirstOrderHold12_ErrTol ; real_T SensorDynamics_A ; real_T SensorDynamics_C ;
real_T BatteryDischargeDynamics_A ; real_T BatteryDischargeDynamics_C ;
real_T Integrator_IC ; real_T mtomile_Gain ; real_T Integrator1_IC ; real_T
m3toUSGal_Gain ; real_T Saturation1_UpperSat ; real_T Saturation1_LowerSat ;
real_T Integrator_IC_pqmxruwudg ; real_T mtomi_Gain ; real_T
Saturation_UpperSat ; real_T Saturation_LowerSat ; real_T
Integrator1_IC_kgyqv13ctx ; real_T Kgtog_Gain ; real_T Integrator2_IC ;
real_T Kgtog_Gain_lwt3s4frso ; real_T Integrator3_IC ; real_T
Kgtog_Gain_faw5o2w5mx ; real_T mtokm_Gain ; real_T
Saturation1_UpperSat_hiohcychfu ; real_T Saturation1_LowerSat_dttfca3rbr ;
real_T Integrator4_IC ; real_T Kgtog_Gain_cjm53yufi4 ; real_T m3pergal_Gain ;
real_T mto100Km_Gain ; real_T Saturation_UpperSat_p152syy2lk ; real_T
Saturation_LowerSat_akgyws5are ; real_T Integrator1_IC_ff5zrpozsh ; real_T
Saturation_UpperSat_jilowqvm5t ; real_T Saturation_LowerSat_f5zqi5regx ;
real_T Saturation_UpperSat_obsoocj435 ; real_T Saturation_LowerSat_nnal1fmgyu
; real_T fromWS_Signal1_Time0 [ 6 ] ; real_T fromWS_Signal1_Data0 [ 6 ] ;
real_T HitCrossing_Offset ; real_T Integrator2_IC_oqp4nzfkjx ; real_T
UnitDelay_InitialCondition [ 2 ] ; real_T FirstOrderHold_IniOut ; real_T
FirstOrderHold_ErrTol ; real_T FirstOrderHold_IniOut_d4ul1gk5t4 ; real_T
FirstOrderHold_ErrTol_drwqucvaxb ; real_T FirstOrderHold_IniOut_mzvwi51dfh ;
real_T FirstOrderHold_ErrTol_p53gicbkas ; real_T
FirstOrderHold1_IniOut_ensanaqyt4 ; real_T FirstOrderHold1_ErrTol_ltw51vguzo
; real_T FirstOrderHold10_IniOut ; real_T FirstOrderHold10_ErrTol ; real_T
FirstOrderHold11_IniOut ; real_T FirstOrderHold11_ErrTol ; real_T
FirstOrderHold13_IniOut ; real_T FirstOrderHold13_ErrTol ; real_T
FirstOrderHold14_IniOut ; real_T FirstOrderHold14_ErrTol ; real_T
FirstOrderHold2_IniOut_hr33a1vjrv ; real_T FirstOrderHold2_ErrTol_ffoy3v4qk5
; real_T FirstOrderHold3_IniOut ; real_T FirstOrderHold3_ErrTol ; real_T
FirstOrderHold4_IniOut ; real_T FirstOrderHold4_ErrTol ; real_T
FirstOrderHold5_IniOut ; real_T FirstOrderHold5_ErrTol ; real_T
FirstOrderHold6_IniOut ; real_T FirstOrderHold6_ErrTol ; real_T
FirstOrderHold7_IniOut ; real_T FirstOrderHold7_ErrTol ; real_T
FirstOrderHold8_IniOut ; real_T FirstOrderHold8_ErrTol ; real_T
FirstOrderHold9_IniOut ; real_T FirstOrderHold9_ErrTol ; real_T
USEPAkwhUSgalequivalent_Value ; real_T sperh_Value ; real_T wperkw_Value ;
real_T repeat_Value ; real_T tFinal_Value ; real_T Constant2_Value ; real_T
Constant3_Value ; real_T Constant6_Value ; real_T Constant7_Value ; real_T
Constant_Value_fj4sklkpbz ; real_T Constant_Value_fgligsbuwo ; real_T
Constant_Value_alt4mz2jvd ; real_T Constant1_Value ; boolean_T
Constant_Value_ev3pvj0r1w ; uint8_T ManualSwitch_CurrentSetting ; } ; extern
const char_T * RT_MEMORY_ALLOCATION_ERROR ; extern c5zlh4mzus c5zlh4mzusp ;
extern jhyfx1uf4y jhyfx1uf4ys ; extern lkkrkctitn lkkrkctitnw ; extern
huq5bp1rixa huq5bp1rix ; extern mxArray *
mr_HevP4ReferenceApplication_GetDWork ( ) ; extern void
mr_HevP4ReferenceApplication_SetDWork ( const mxArray * ssDW ) ; extern
mxArray * mr_HevP4ReferenceApplication_GetSimStateDisallowedBlocks ( ) ;
extern const rtwCAPI_ModelMappingStaticInfo *
HevP4ReferenceApplication_GetCAPIStaticMap ( void ) ; extern SimStruct *
const rtS ; extern DataMapInfo * rt_dataMapInfoPtr ; extern
rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid )
; void MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T
tid ) ; void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model (
ssExecutionInfo * executionInfo ) ;
#endif
