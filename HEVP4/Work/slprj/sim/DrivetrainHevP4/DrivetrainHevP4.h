#ifndef RTW_HEADER_DrivetrainHevP4_h_
#define RTW_HEADER_DrivetrainHevP4_h_
#ifndef DrivetrainHevP4_COMMON_INCLUDES_
#define DrivetrainHevP4_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "sf_runtime/sfc_sdi.h"
#endif
#include "DrivetrainHevP4_types.h"
#include <string.h>
#include "rt_zcfcn.h"
#include "model_reference_types.h"
#include "rtw_modelmap_simtarget.h"
#include "rt_nonfinite.h"
#include <stddef.h>
#include "zero_crossing_types.h"
typedef struct { real_T dyrezqdlbd [ 3 ] ; real_T gnestwek04 [ 2 ] ; }
mei5uul1vg ; typedef struct { real_T hzgu5jfdz4 [ 5 ] ; real_T n4ygn5s3it [
16 ] ; real_T flvdifijue [ 24 ] ; real_T gpm5eaqmyj ; real_T bkv4f44vnh ; }
f5chniozhx ; typedef struct { boolean_T gbots353vs ; } pvg0j4aud3 ; typedef
struct { int8_T akhjbcdors ; } ofm2fmse3j ; typedef struct { real_T
lx42h0kmkr ; boolean_T h3eqmn5teq ; } idxwbd24bx ; typedef struct { boolean_T
pf0qopor1e ; int8_T b0whoil2mj ; } hesg3lojnr ; typedef struct { int8_T
gj3w1fwhmk ; } lbsk3pfzhl ; typedef struct { real_T ohogcchg4x ; real_T
mxgu00gy3b ; real_T nagwv0qb3m ; real_T c3hlqh1x0j ; real_T d4pvsnuxbh ;
real_T eyxyh4dlxh ; } ibre5dujvi ; typedef struct { int8_T mo21e3pi2e ; }
adcxxfebzi ; typedef struct { real_T o31yfqchat ; } pszu5oshkv ; typedef
struct { real_T o31yfqchat ; } lessjmahpg ; typedef struct { boolean_T
o31yfqchat ; } ped3gwkpr0 ; typedef struct { real_T o31yfqchat ; } mwrqqgfwua
; typedef struct { real_T o31yfqchat ; } olllitvyoz ; typedef struct { real_T
o31yfqchat ; } e1vu1q5qxz ; typedef struct { real_T eapq4cihew ; real_T
aihsek3hsz ; real_T mwotjr1kqm ; real_T pcqqdv331l ; ibre5dujvi pnwnqvpsljv ;
idxwbd24bx gf1fdxvjnxm ; pvg0j4aud3 gm224dghg1i ; } mvgl2tnqzx ; typedef
struct { real_T cc4y0uq4r0 ; int8_T hee5prt23b ; int8_T gsvo0gz55h ; uint8_T
budmlwrz5d ; uint8_T gt3cxlciul ; boolean_T fjpdvl1pgq ; boolean_T pwwhqetnzc
; adcxxfebzi pnwnqvpsljv ; lbsk3pfzhl fcfn4zgb1m0 ; hesg3lojnr gf1fdxvjnxm ;
ofm2fmse3j gm224dghg1i ; } lod0asgoor ; typedef struct { pszu5oshkv
pnwnqvpsljv ; } oatgowdgin ; typedef struct { lessjmahpg pnwnqvpsljv ; }
e3wgsgh4bl ; typedef struct { ped3gwkpr0 pnwnqvpsljv ; } ep31uir1gb ; typedef
struct { mwrqqgfwua pnwnqvpsljv ; } gm1f0vzmue ; typedef struct { olllitvyoz
pnwnqvpsljv ; } bwgxpflifj ; typedef struct { e1vu1q5qxz pnwnqvpsljv ; }
nvj3mut5hc ; typedef struct { mvgl2tnqzx mwc1d4al3c ; } mmfalkfbja ; typedef
struct { lod0asgoor mwc1d4al3c ; } m2ntsuath4 ; typedef struct { oatgowdgin
mwc1d4al3c ; } bf1wgrpuog ; typedef struct { e3wgsgh4bl mwc1d4al3c ; }
bh51gwwwev ; typedef struct { ep31uir1gb mwc1d4al3c ; } mxgm1uhvmj ; typedef
struct { gm1f0vzmue mwc1d4al3c ; } i215lhohcc ; typedef struct { bwgxpflifj
mwc1d4al3c ; } pcahkstfpc ; typedef struct { nvj3mut5hc mwc1d4al3c ; }
kkcehek014 ; typedef struct { real_T eqhtfgp440 ; real_T hssankyiux ; real_T
hjk4kail3m ; real_T ewugpkowc4 ; ibre5dujvi h2plpnu3mt ; idxwbd24bx
gtmuxhbejy ; pvg0j4aud3 khilm44itf ; } mxsazlu04j ; typedef struct { real_T
msturv5mf2 ; int8_T eoiiwds1vs ; int8_T ff52rggg3b ; uint8_T aymfqvghll ;
uint8_T igqncywq3x ; boolean_T fj5msgkhuw ; boolean_T gzd2sy5gbk ; adcxxfebzi
h2plpnu3mt ; lbsk3pfzhl iqoij5snsx ; hesg3lojnr gtmuxhbejy ; ofm2fmse3j
khilm44itf ; } knueqfvynn ; typedef struct { pszu5oshkv h2plpnu3mt ; }
pvu54otdxg ; typedef struct { lessjmahpg h2plpnu3mt ; } a1kadfxhlm ; typedef
struct { ped3gwkpr0 h2plpnu3mt ; } glw1qhordy ; typedef struct { mwrqqgfwua
h2plpnu3mt ; } dcnc2xleuj ; typedef struct { olllitvyoz h2plpnu3mt ; }
l4aynymont ; typedef struct { e1vu1q5qxz h2plpnu3mt ; } nrrabe5ipx ; typedef
struct { mxsazlu04j mifpjkvj4c ; } ipnwdtrgl5 ; typedef struct { knueqfvynn
mifpjkvj4c ; } nc2yz0re2u ; typedef struct { pvu54otdxg mifpjkvj4c ; }
cam4fexf0e ; typedef struct { a1kadfxhlm mifpjkvj4c ; } bz4tdbyg0y ; typedef
struct { glw1qhordy mifpjkvj4c ; } grnubih1kl ; typedef struct { dcnc2xleuj
mifpjkvj4c ; } lw31f3qy3m ; typedef struct { l4aynymont mifpjkvj4c ; }
iwpxvxeqxb ; typedef struct { nrrabe5ipx mifpjkvj4c ; } ioj34bj4x3 ; typedef
struct { real_T cec4bxcbhi ; real_T gukhu3ijh1 [ 3 ] ; real_T e1bxwmjm0o ;
real_T epejmvokjb ; real_T oiccsxmfc0 ; real_T cvgqawtxd2 ; real_T mkqlit4lyd
; real_T gsvlqm3nsk ; real_T gmt3poj0so ; real_T mzinyvbdpx ; real_T
pr3cg1ha33 ; real_T occeweni1n ; real_T fhmeql5up3 [ 2 ] ; real_T kraacilkr3
; real_T oyptmqqt4o ; real_T ljh5u1acpa ; real_T cd2gv14vry ; real_T
niifni1al0 ; real_T dsvmkt1cgs ; real_T onje2csnwv ; real_T fry4eke1hg ;
real_T io22wmrl1e ; real_T oxoyxuurgp ; real_T be1wzchom3 ; real_T ek3squgt0x
; real_T mxhnw2ktck ; real_T dg1a1yunpp ; real_T drywpc5ov4 ; real_T
o3qk5tvbfy ; real_T nam42e4bjp ; real_T pn3te01nlx ; real_T heskvxmmnh ;
real_T fm10e1ao44 ; real_T hzfj2hy3tt ; real_T juttgy3dz5 ; real_T g3mpjs4fc0
; real_T aff1zr5fiz ; real_T aoab1mcoqd ; real_T nyqp2upnik ; real_T
mr1f1boypy ; real_T gtzo2kivgc ; real_T aucozmyinh ; real_T bekdfczw0e ;
real_T flgyy2zou1 ; real_T c1j4rwiuym ; real_T pdta0pgvmw ; real_T psrgwnnlh0
; real_T i5yj1qj5v3 [ 2 ] ; real_T kgk4a0mjis ; real_T nv4mnufhrx ; real_T
cjglkijkah [ 2 ] ; real_T j5t2rk2sih ; real_T fd0tovz3nx ; real_T lvwghuuv4n
; real_T fh3orkmu21 ; real_T bleeiru2sr ; real_T fe1otu0gja ; real_T
hbxu4f1wb0 ; real_T awcntgnx3h ; real_T fnv1q5plhv ; real_T ljyemqt3v4 ;
real_T be4ry5q1am ; real_T k3dacr0mha ; real_T bokfc5lq0a [ 10 ] ; real_T
ny1zcj0jmp ; real_T j35i32lj01 ; real_T hrfkonmsex ; real_T pj5zsfb4kd ;
real_T ihesps1hq2 ; real_T eiifz4uu41 ; real_T dwfltpq3sa ; real_T nve4s2kze1
; real_T av4vht34f5 ; real_T njakm2joqh ; real_T mdqu3ek43b ; real_T
djghxpbhft ; real_T neygrfvky2 ; real_T kujqrzsfke ; boolean_T gjufqb52aq ;
boolean_T euzshrvedh ; boolean_T kqg3p5gqwp ; boolean_T cf2p35ih0y ;
boolean_T f2u0ml4nqb ; ipnwdtrgl5 oodask1ixq [ 1 ] ; f5chniozhx pqa4uoh3p3 ;
mmfalkfbja lhmuy0r2mt [ 1 ] ; f5chniozhx gp3qroe5qv ; mei5uul1vg au45bfcvxs ;
mei5uul1vg opea03cz4z ; } gpz52e3dwe ; typedef struct { real_T a05qxnyi0a ;
real_T kai0m0e2ew ; real_T hgsyk0bc45 ; real_T d4jrbui4i1 ; real_T duvopzo5hi
; real_T la5hpljke2 ; uint32_T d21f1j45dt ; int_T pdphadbq31 ; int_T
ghexlrxee4 ; int_T mofqbaru1g ; int_T nmkn0jbvty ; int_T fp1iusufwe ; int_T
fp0ancafza ; int_T go4nltk2qq ; int_T lmofltzpch ; int_T ftanrlzxqu ; int_T
cs3aeuofig ; int_T lq4git1asr ; int_T g0lhf5n0k0 ; int_T byy0jx5dbt ; int_T
m0azm0ihsg ; int_T ioyvk1irfb ; int_T mnv4vjrnep ; int_T jqva5kfmih ; int_T
ldmgpk510f ; int_T pputvuru1l ; int_T eq1l4ggd02 ; int_T p3dybhws34 ; int8_T
kb3b4zgdci ; int8_T p5dxjc2b1n ; int8_T fqwhbtulpg ; int8_T hzuoark40t ;
int8_T jzzjgbrvwm ; int8_T fc3sbhift3 ; int8_T pvdkznjss2 ; int8_T eo10mdoia0
; boolean_T lwg3p0cdvf ; boolean_T k4j33f4byh ; boolean_T lwrnf4n3xe ;
boolean_T mtqbtozmmf ; boolean_T nxeroykpr2 ; boolean_T ch2lrz3var ;
boolean_T eagcze1ljh ; boolean_T k2cw3yj0k4 ; boolean_T l53qtov1bq ;
boolean_T argkysitez ; boolean_T he5fvhy1qg ; boolean_T azodehxuoi ;
boolean_T lvgmhoo4ri ; nc2yz0re2u oodask1ixq [ 1 ] ; m2ntsuath4 lhmuy0r2mt [
1 ] ; } f2a5ytrc5f ; typedef struct { real_T fzwsn2jmhl ; real_T e0iug524d1 ;
real_T ci1kkjexs5 ; real_T j4b4mw5go4 ; real_T iym4havdyu ; real_T ojbokxhqxh
; real_T kuyuzmfdlw ; real_T lqa034fanw ; real_T pwwnn4rpgi ; real_T
fvzlzvmibc [ 2 ] ; real_T evnnue2pdp ; real_T i1kwothjwq ; real_T asdzcbvawm
; real_T dwubb510sy ; real_T atiz2s5la3 ; real_T ds1yb3kwf1 ; real_T
ievyscdcrq ; real_T ibw2wgocuq ; real_T hh1fbq041v [ 2 ] ; real_T g4a4nx25kp
[ 2 ] ; cam4fexf0e oodask1ixq [ 1 ] ; bf1wgrpuog lhmuy0r2mt [ 1 ] ; real_T
au0xgwt5db ; real_T ghortk2b5p ; real_T dgkffoehk2 ; real_T mlndfk2ces ;
real_T kahcvzwgxd ; real_T jk1yalfhod ; real_T m4rqj3hpvj ; } dv0k21emzh ;
typedef struct { real_T fzwsn2jmhl ; real_T e0iug524d1 ; real_T ci1kkjexs5 ;
real_T j4b4mw5go4 ; real_T iym4havdyu ; real_T ojbokxhqxh ; real_T kuyuzmfdlw
; real_T lqa034fanw ; real_T pwwnn4rpgi ; real_T fvzlzvmibc [ 2 ] ; real_T
evnnue2pdp ; real_T i1kwothjwq ; real_T asdzcbvawm ; real_T dwubb510sy ;
real_T atiz2s5la3 ; real_T ds1yb3kwf1 ; real_T ievyscdcrq ; real_T ibw2wgocuq
; real_T hh1fbq041v [ 2 ] ; real_T g4a4nx25kp [ 2 ] ; bz4tdbyg0y oodask1ixq [
1 ] ; bh51gwwwev lhmuy0r2mt [ 1 ] ; real_T au0xgwt5db ; real_T ghortk2b5p ;
real_T dgkffoehk2 ; real_T mlndfk2ces ; real_T kahcvzwgxd ; real_T jk1yalfhod
; real_T m4rqj3hpvj ; } o4t1ox0xnc ; typedef struct { boolean_T fzwsn2jmhl ;
boolean_T e0iug524d1 ; boolean_T ci1kkjexs5 ; boolean_T j4b4mw5go4 ;
boolean_T iym4havdyu ; boolean_T ojbokxhqxh ; boolean_T kuyuzmfdlw ;
boolean_T lqa034fanw ; boolean_T pwwnn4rpgi ; boolean_T fvzlzvmibc [ 2 ] ;
boolean_T evnnue2pdp ; boolean_T i1kwothjwq ; boolean_T asdzcbvawm ;
boolean_T dwubb510sy ; boolean_T atiz2s5la3 ; boolean_T ds1yb3kwf1 ;
boolean_T ievyscdcrq ; boolean_T ibw2wgocuq ; boolean_T hh1fbq041v [ 2 ] ;
boolean_T g4a4nx25kp [ 2 ] ; grnubih1kl oodask1ixq [ 1 ] ; mxgm1uhvmj
lhmuy0r2mt [ 1 ] ; boolean_T au0xgwt5db ; boolean_T ghortk2b5p ; boolean_T
dgkffoehk2 ; boolean_T mlndfk2ces ; boolean_T kahcvzwgxd ; boolean_T
jk1yalfhod ; boolean_T m4rqj3hpvj ; } jjihdbtkak ; typedef struct { real_T
fzwsn2jmhl ; real_T e0iug524d1 ; real_T ci1kkjexs5 ; real_T j4b4mw5go4 ;
real_T iym4havdyu ; real_T ojbokxhqxh ; real_T kuyuzmfdlw ; real_T lqa034fanw
; real_T pwwnn4rpgi ; real_T fvzlzvmibc [ 2 ] ; real_T evnnue2pdp ; real_T
i1kwothjwq ; real_T asdzcbvawm ; real_T dwubb510sy ; real_T atiz2s5la3 ;
real_T ds1yb3kwf1 ; real_T ievyscdcrq ; real_T ibw2wgocuq ; real_T hh1fbq041v
[ 2 ] ; real_T g4a4nx25kp [ 2 ] ; lw31f3qy3m oodask1ixq [ 1 ] ; i215lhohcc
lhmuy0r2mt [ 1 ] ; real_T au0xgwt5db ; real_T ghortk2b5p ; real_T dgkffoehk2
; real_T mlndfk2ces ; real_T kahcvzwgxd ; real_T jk1yalfhod ; real_T
m4rqj3hpvj ; } he0w3nuwh3 ; typedef struct { real_T fzwsn2jmhl ; real_T
e0iug524d1 ; real_T ci1kkjexs5 ; real_T j4b4mw5go4 ; real_T iym4havdyu ;
real_T ojbokxhqxh ; real_T kuyuzmfdlw ; real_T lqa034fanw ; real_T pwwnn4rpgi
; real_T fvzlzvmibc [ 2 ] ; real_T evnnue2pdp ; real_T i1kwothjwq ; real_T
asdzcbvawm ; real_T dwubb510sy ; real_T atiz2s5la3 ; real_T ds1yb3kwf1 ;
real_T ievyscdcrq ; real_T ibw2wgocuq ; real_T hh1fbq041v [ 2 ] ; real_T
g4a4nx25kp [ 2 ] ; iwpxvxeqxb oodask1ixq [ 1 ] ; pcahkstfpc lhmuy0r2mt [ 1 ]
; real_T au0xgwt5db ; real_T ghortk2b5p ; real_T dgkffoehk2 ; real_T
mlndfk2ces ; real_T kahcvzwgxd ; real_T jk1yalfhod ; real_T m4rqj3hpvj ; }
a5mysw00zg ; typedef struct { real_T fzwsn2jmhl ; real_T e0iug524d1 ; real_T
ci1kkjexs5 ; real_T j4b4mw5go4 ; real_T iym4havdyu ; real_T ojbokxhqxh ;
real_T kuyuzmfdlw ; real_T lqa034fanw ; real_T pwwnn4rpgi ; real_T fvzlzvmibc
[ 2 ] ; real_T evnnue2pdp ; real_T i1kwothjwq ; real_T asdzcbvawm ; real_T
dwubb510sy ; real_T atiz2s5la3 ; real_T ds1yb3kwf1 ; real_T ievyscdcrq ;
real_T ibw2wgocuq ; real_T hh1fbq041v [ 2 ] ; real_T g4a4nx25kp [ 2 ] ;
ioj34bj4x3 oodask1ixq [ 1 ] ; kkcehek014 lhmuy0r2mt [ 1 ] ; real_T au0xgwt5db
; real_T ghortk2b5p ; real_T dgkffoehk2 ; real_T mlndfk2ces ; real_T
kahcvzwgxd ; real_T jk1yalfhod ; real_T m4rqj3hpvj ; } dx3odfua53 ; typedef
struct { real_T k0vhffdb40 ; real_T nukfiqkhf2 ; real_T m0iwjoabwl ; real_T
i0ddcpwna2 ; real_T muqfwyftx2 ; real_T bc4gdzmp5n ; real_T npv0xdvjab ;
real_T czayckgbv0 ; real_T je0zswefvn ; real_T e3xhmi3ez5 ; real_T j3wc0wcjp5
; real_T kvhy4ki4zf ; real_T aalswztjav ; real_T bzkxzupqst ; real_T
m5ko21ayab ; real_T p1zurwrw5v ; real_T atoyuak42p ; real_T prryqpb1hn ;
real_T kuicuokhr5 ; real_T dvlbim3i32 ; real_T e3j1c33v5g ; real_T pzhibzkub2
; real_T d05vnqtl1k ; } l2xiyzkbzo ; typedef struct { ZCSigState bijsfjfrcl ;
ZCSigState ne4aagom4d ; ZCSigState ajmpenxuwc ; ZCSigState m2l2bafuxi ;
ZCSigState bgvqe2fp30 ; ZCSigState fasjnd50pz ; ZCSigState pyejmhcubo ; }
njnki40qhm ; struct dcxuaghy1r_ { real_T P_0 ; } ; struct f3dpku3x5m_ {
boolean_T P_0 ; } ; struct oytbhre2kf_ { real_T P_0 ; boolean_T P_1 ;
boolean_T P_2 ; boolean_T P_3 [ 8 ] ; } ; struct c4irgkxq4h_ { real_T P_0 ;
real_T P_1 ; real_T P_2 ; } ; struct nhnmqwzrv2_ { real_T P_0 ; } ; struct
lpj4ragplm_ { nhnmqwzrv2 pnwnqvpsljv ; c4irgkxq4h fcfn4zgb1m0 ; oytbhre2kf
gf1fdxvjnxm ; f3dpku3x5m gm224dghg1i ; } ; struct mxi4axdowd_ { lpj4ragplm
mwc1d4al3c ; } ; struct cnusb2dxse_ { nhnmqwzrv2 h2plpnu3mt ; c4irgkxq4h
iqoij5snsx ; oytbhre2kf gtmuxhbejy ; f3dpku3x5m khilm44itf ; } ; struct
b2p5eyr5sy_ { cnusb2dxse mifpjkvj4c ; } ; struct baykbb21q4g_ { real_T P_0 ;
real_T P_1 ; real_T P_2 ; real_T P_3 ; real_T P_4 [ 2 ] ; real_T P_5 [ 2 ] ;
real_T P_6 ; real_T P_7 ; real_T P_8 ; real_T P_9 ; real_T P_10 [ 7 ] ;
real_T P_11 ; real_T P_12 ; real_T P_13 ; real_T P_14 ; real_T P_15 ; real_T
P_16 ; real_T P_17 [ 7 ] ; real_T P_18 ; real_T P_19 ; real_T P_20 ; real_T
P_21 ; real_T P_22 ; real_T P_23 ; real_T P_24 ; real_T P_25 ; real_T P_26 ;
real_T P_27 [ 7 ] ; real_T P_28 ; real_T P_29 ; real_T P_30 ; real_T P_31 ;
real_T P_32 ; real_T P_33 ; real_T P_34 ; real_T P_35 ; real_T P_36 ; real_T
P_37 ; real_T P_38 ; real_T P_39 ; real_T P_40 ; real_T P_41 ; real_T P_42 [
2 ] ; real_T P_43 [ 7 ] ; real_T P_44 ; real_T P_45 ; real_T P_46 ; real_T
P_47 ; real_T P_48 ; real_T P_49 ; real_T P_50 ; real_T P_51 ; real_T P_52 ;
real_T P_53 ; real_T P_54 ; real_T P_55 ; real_T P_56 ; real_T P_57 ; real_T
P_58 ; real_T P_59 ; real_T P_60 ; real_T P_61 ; real_T P_62 ; real_T P_63 ;
real_T P_64 [ 2 ] ; real_T P_65 ; real_T P_66 [ 7 ] ; real_T P_67 ; real_T
P_68 ; real_T P_69 ; real_T P_70 ; real_T P_71 ; real_T P_72 ; real_T P_73 ;
real_T P_74 ; real_T P_75 ; real_T P_76 ; real_T P_77 ; real_T P_78 ; real_T
P_79 ; real_T P_80 ; real_T P_81 ; real_T P_82 ; real_T P_83 ; real_T P_84 ;
real_T P_85 [ 1078 ] ; real_T P_86 ; real_T P_87 ; real_T P_88 ; real_T P_89
; real_T P_90 ; real_T P_91 ; real_T P_92 ; real_T P_93 ; real_T P_94 ;
real_T P_95 ; real_T P_96 ; real_T P_97 ; real_T P_98 ; real_T P_99 ; real_T
P_100 ; real_T P_101 ; real_T P_102 ; real_T P_103 ; real_T P_104 ; real_T
P_105 ; real_T P_106 [ 11 ] ; real_T P_107 ; real_T P_108 ; real_T P_109 ;
real_T P_110 ; real_T P_111 ; real_T P_112 ; real_T P_113 ; real_T P_114 ;
real_T P_115 ; real_T P_116 ; real_T P_117 ; real_T P_118 ; real_T P_119 ;
real_T P_120 ; real_T P_121 ; real_T P_122 [ 10 ] ; real_T P_123 ; real_T
P_124 ; real_T P_125 ; real_T P_126 [ 10 ] ; real_T P_127 ; real_T P_128 ;
real_T P_129 ; real_T P_130 ; real_T P_131 ; real_T P_132 ; real_T P_133 ;
real_T P_134 ; real_T P_135 ; real_T P_136 ; real_T P_137 ; real_T P_138 ;
real_T P_139 ; real_T P_140 ; real_T P_141 [ 10 ] ; real_T P_142 ; real_T
P_143 ; real_T P_144 ; real_T P_145 ; real_T P_146 ; real_T P_147 ; real_T
P_148 ; real_T P_149 ; real_T P_150 ; real_T P_151 ; real_T P_152 ; real_T
P_153 ; real_T P_154 ; real_T P_155 ; real_T P_156 ; real_T P_157 ; real_T
P_158 ; real_T P_159 ; real_T P_160 ; real_T P_161 ; real_T P_162 ; real_T
P_163 ; real_T P_164 ; real_T P_165 ; real_T P_166 ; real_T P_167 ; real_T
P_168 ; real_T P_169 ; real_T P_170 ; real_T P_171 ; real_T P_172 ; real_T
P_173 ; real_T P_174 ; real_T P_175 ; real_T P_176 ; real_T P_177 ; real_T
P_178 ; real_T P_179 ; real_T P_180 ; real_T P_181 ; real_T P_182 ; real_T
P_183 ; real_T P_184 ; real_T P_185 ; real_T P_186 ; real_T P_187 ; real_T
P_188 ; real_T P_189 ; real_T P_190 ; real_T P_191 ; real_T P_192 ; real_T
P_193 ; real_T P_194 ; real_T P_195 ; real_T P_196 ; real_T P_197 ; real_T
P_198 ; real_T P_199 ; real_T P_200 ; real_T P_201 ; real_T P_202 ; real_T
P_203 ; real_T P_204 ; real_T P_205 ; real_T P_206 ; real_T P_207 ; real_T
P_208 ; real_T P_209 ; real_T P_210 ; real_T P_211 ; real_T P_212 ; real_T
P_213 ; real_T P_214 ; real_T P_215 ; real_T P_216 ; real_T P_217 ; real_T
P_218 ; real_T P_219 [ 2 ] ; real_T P_220 [ 2 ] ; real_T P_221 [ 3 ] ; real_T
P_222 ; real_T P_223 ; real_T P_224 ; real_T P_225 ; real_T P_226 ; real_T
P_227 ; real_T P_228 ; real_T P_229 ; real_T P_230 ; real_T P_231 ; real_T
P_232 ; real_T P_233 ; real_T P_234 ; real_T P_235 ; real_T P_236 ; real_T
P_237 ; real_T P_238 ; real_T P_239 ; real_T P_240 ; real_T P_241 ; real_T
P_242 ; real_T P_243 ; real_T P_244 ; real_T P_245 ; real_T P_246 ; real_T
P_247 ; real_T P_248 ; real_T P_249 ; real_T P_250 ; real_T P_251 ; real_T
P_252 ; real_T P_253 ; real_T P_254 ; real_T P_255 ; real_T P_256 ; real_T
P_257 ; real_T P_258 ; real_T P_259 ; real_T P_260 ; real_T P_261 ; real_T
P_262 ; real_T P_263 ; real_T P_264 ; real_T P_265 ; real_T P_266 ; real_T
P_267 ; real_T P_268 ; real_T P_269 ; real_T P_270 ; real_T P_271 ; real_T
P_272 ; real_T P_273 ; real_T P_274 ; real_T P_275 ; real_T P_276 ; real_T
P_277 ; real_T P_278 ; real_T P_279 ; real_T P_280 ; real_T P_281 ; real_T
P_282 ; real_T P_283 ; real_T P_284 ; real_T P_285 ; real_T P_286 ; real_T
P_287 [ 3 ] ; real_T P_288 [ 3 ] ; real_T P_289 ; real_T P_290 ; real_T P_291
; real_T P_292 ; real_T P_293 [ 3 ] ; real_T P_294 ; real_T P_295 ; real_T
P_296 ; real_T P_297 ; real_T P_298 ; real_T P_299 ; real_T P_300 ; real_T
P_301 ; real_T P_302 ; real_T P_303 ; real_T P_304 ; real_T P_305 ; real_T
P_306 ; real_T P_307 ; real_T P_308 ; real_T P_309 ; real_T P_310 ; real_T
P_311 ; real_T P_312 ; real_T P_313 ; real_T P_314 ; real_T P_315 ; real_T
P_316 ; real_T P_317 ; real_T P_318 ; real_T P_319 ; real_T P_320 ; real_T
P_321 ; real_T P_322 ; real_T P_323 ; real_T P_324 ; real_T P_325 ; real_T
P_326 ; real_T P_327 ; real_T P_328 ; real_T P_329 ; real_T P_330 ; real_T
P_331 ; real_T P_332 ; real_T P_333 ; real_T P_334 ; real_T P_335 ; real_T
P_336 ; real_T P_337 ; real_T P_338 ; real_T P_339 ; real_T P_340 ; real_T
P_341 ; real_T P_342 ; real_T P_343 ; real_T P_344 ; real_T P_345 ; real_T
P_346 ; real_T P_347 [ 34 ] ; real_T P_348 [ 3 ] ; real_T P_349 [ 3 ] ;
real_T P_350 [ 9 ] ; real_T P_351 ; real_T P_352 ; real_T P_353 ; real_T
P_354 ; real_T P_355 ; real_T P_356 ; real_T P_357 ; real_T P_358 ; real_T
P_359 ; real_T P_360 [ 3 ] ; real_T P_361 [ 3 ] ; real_T P_362 [ 9 ] ; real_T
P_363 ; real_T P_364 ; real_T P_365 ; real_T P_366 ; real_T P_367 ; real_T
P_368 ; real_T P_369 ; real_T P_370 ; real_T P_371 ; real_T P_372 ; real_T
P_373 ; real_T P_374 ; real_T P_375 ; real_T P_376 ; real_T P_377 ; real_T
P_378 ; real_T P_379 ; real_T P_380 ; real_T P_381 ; real_T P_382 ; real_T
P_383 ; real_T P_384 ; real_T P_385 ; real_T P_386 ; real_T P_387 ; real_T
P_388 ; real_T P_389 ; real_T P_390 ; real_T P_391 ; real_T P_392 ; real_T
P_393 ; real_T P_394 ; real_T P_395 ; real_T P_396 [ 34 ] ; real_T P_397 [ 3
] ; real_T P_398 [ 3 ] ; real_T P_399 [ 9 ] ; real_T P_400 ; real_T P_401 ;
real_T P_402 ; real_T P_403 ; real_T P_404 ; real_T P_405 ; real_T P_406 ;
real_T P_407 ; real_T P_408 ; real_T P_409 [ 3 ] ; real_T P_410 [ 3 ] ;
real_T P_411 [ 9 ] ; real_T P_412 ; real_T P_413 ; real_T P_414 ; real_T
P_415 ; real_T P_416 ; real_T P_417 ; real_T P_418 ; real_T P_419 ; real_T
P_420 ; real_T P_421 ; real_T P_422 ; real_T P_423 ; real_T P_424 ; real_T
P_425 ; real_T P_426 ; real_T P_427 ; real_T P_428 ; real_T P_429 ; real_T
P_430 ; real_T P_431 ; real_T P_432 ; real_T P_433 ; real_T P_434 ; real_T
P_435 ; real_T P_436 ; real_T P_437 ; uint32_T P_438 [ 4 ] ; uint32_T P_439 [
4 ] ; uint32_T P_440 [ 4 ] ; uint32_T P_441 [ 4 ] ; uint32_T P_442 ; uint32_T
P_443 ; boolean_T P_444 ; boolean_T P_445 [ 8 ] ; boolean_T P_446 ; boolean_T
P_447 ; uint8_T P_448 ; b2p5eyr5sy oodask1ixq ; mxi4axdowd lhmuy0r2mt ;
dcxuaghy1r au45bfcvxs ; dcxuaghy1r opea03cz4z ; } ; struct lzep320e1q {
struct SimStruct_tag * _mdlRefSfcnS ; struct { real_T mr_nonContSig0 [ 1 ] ;
real_T mr_nonContSig1 [ 1 ] ; real_T mr_nonContSig2 [ 1 ] ; real_T
mr_nonContSig3 [ 1 ] ; real_T mr_nonContSig4 [ 1 ] ; real_T mr_nonContSig5 [
1 ] ; real_T mr_nonContSig6 [ 1 ] ; boolean_T mr_nonContSig7 [ 1 ] ;
boolean_T mr_nonContSig8 [ 1 ] ; boolean_T mr_nonContSig9 [ 1 ] ; boolean_T
mr_nonContSig10 [ 1 ] ; boolean_T mr_nonContSig11 [ 1 ] ; boolean_T
mr_nonContSig12 [ 1 ] ; } NonContDerivMemory ; ssNonContDerivSigInfo
nonContDerivSignal [ 13 ] ; const rtTimingBridge * timingBridge ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 27 ] ; int32_T * vardimsAddress [
27 ] ; RTWLoggingFcnPtr loggingPtrs [ 27 ] ; sysRanDType * systemRan [ 37 ] ;
int_T systemTid [ 37 ] ; } DataMapInfo ; struct { int_T mdlref_GlobalTID [ 3
] ; time_T tStart ; } Timing ; } ; typedef struct { gpz52e3dwe rtb ;
f2a5ytrc5f rtdw ; oqvwukdwj0 rtm ; njnki40qhm rtzce ; } httrpxnoync ; extern
void pcjuxpuxtd ( SimStruct * _mdlRefSfcnS , ssNonContDerivSigFeedingOutports
* * mr_nonContOutputArray , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T
mdlref_TID2 , oqvwukdwj0 * const ivyyfeoocu , gpz52e3dwe * localB ,
f2a5ytrc5f * localDW , dv0k21emzh * localX , njnki40qhm * localZCE , void *
sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const
char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern
void mr_DrivetrainHevP4_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_DrivetrainHevP4_GetDWork (
const httrpxnoync * mdlrefDW ) ; extern void mr_DrivetrainHevP4_SetDWork (
httrpxnoync * mdlrefDW , const mxArray * ssDW ) ; extern void
mr_DrivetrainHevP4_RegisterSimStateChecksum ( SimStruct * S ) ; extern
mxArray * mr_DrivetrainHevP4_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * DrivetrainHevP4_GetCAPIStaticMap ( void ) ;
extern void hyrr1hlavl ( real_T d0diki5mh3 , real_T ejqkswypbk , real_T
l2obkox1rs , real_T jmabamgcq3 , real_T elawr3k43n , real_T cyxzu3jzne ,
real_T namstxom5s , real_T gipvlr4btd , real_T n4kc2akovl , real_T lbaswz2zzo
, const real_T n33pp5g4p5 [ 2 ] , mei5uul1vg * localB , dcxuaghy1r * localP )
; extern void jvumz1wqzb ( real_T e32hqmxcik , real_T g4yiqgzlfz , real_T
bm31o0lmcy , real_T fbrcp1gcla , real_T bpq5ic21qp , real_T gijpxs2bjg ,
real_T jlieuueiew , real_T gman1fkyaa , real_T ii1xlm3r5g , const real_T
pta3jbcakl [ 34 ] , const real_T i4bb0tkvyk [ 3 ] , const real_T bktnd0kqxc [
3 ] , const real_T gb2xsiivlc [ 9 ] , real_T pdglkljozc , real_T fpvghkhkpp ,
real_T lyweobwsbg , real_T ceopf1y5fb , real_T pwio4ydq4p , real_T l4oixmwf4q
, real_T ojjddhxxgt , real_T hr51er3xcr , real_T c1dpgwnvgy , real_T
ncoudnoynq , real_T i0h1xhuyo5 , real_T a315m1shrb , real_T kzik1edfww ,
real_T ceu0tixjpi , real_T a0pvwafjqk , real_T mfamzdtbra , const real_T
b25dw0u5yz [ 3 ] , const real_T ovwuqgqkz0 [ 3 ] , const real_T efbftymzw5 [
9 ] , real_T krinwnuhlt , real_T ezg3ffxbav , real_T jmo4bvlw0n , real_T
pfb4qkioav , real_T fzmenqhfu1 , real_T fwb4rozpgo , real_T iwcsd0po4j ,
real_T dhup20fpaw , real_T jnkjdxxtim , real_T ddpr3vduzj , real_T ll31ao3h51
, real_T mdrwilcnr5 , real_T lvjin1kgg2 , real_T f5o1nqecto , real_T
foe3koqshe , real_T eyv23wmgz0 , real_T byfhhk5ony , real_T lztqoge5ru ,
real_T m23cfkuvqb , real_T njlfhlvaeh , real_T ipscuov1rg , real_T hmzrfzxtzf
, real_T hhqjcdfhky , real_T gcw0awhbma , real_T j12ddjtvwd , real_T
ccj0lhktdw , real_T mq3asuq45a , real_T rtp_FZMAX , real_T rtp_FZMIN , real_T
rtp_VXLOW , real_T rtp_kappamax , f5chniozhx * localB ) ; extern void
itn0mcebvp ( pvg0j4aud3 * localB , f3dpku3x5m * localP ) ; extern void
ljdzh00q43 ( pvg0j4aud3 * localB ) ; extern void gm224dghg1 ( real_T
jsbsy3xvhe , real_T brc22koind , pvg0j4aud3 * localB , ofm2fmse3j * localDW )
; extern void cs1wforvzk ( idxwbd24bx * localB , hesg3lojnr * localDW ,
oytbhre2kf * localP ) ; extern void b2ywm0rdhh ( idxwbd24bx * localB ) ;
extern void gf1fdxvjnx ( real_T kkfitefieh , real_T odflcaqp0d , idxwbd24bx *
localB , hesg3lojnr * localDW , oytbhre2kf * localP ) ; extern void
gf1fdxvjnxTID2 ( real_T rtp_br , idxwbd24bx * localB , oytbhre2kf * localP )
; extern void ijaqbv1leg ( oqvwukdwj0 * const ivyyfeoocu ) ; extern void
ju1ireyhgh ( real_T * ohcxkhnddc , real_T * abwgninsl2 , real_T * b40zuskg0v
, real_T * doqjgmeyjy ) ; extern void emfxosxaah ( oqvwukdwj0 * const
ivyyfeoocu ) ; extern void fcfn4zgb1m ( oqvwukdwj0 * const ivyyfeoocu ,
real_T ao4bcuyqyf , real_T * ohcxkhnddc , real_T * abwgninsl2 , real_T *
b40zuskg0v , real_T * doqjgmeyjy , c4irgkxq4h * localP ) ; extern void
ospz1jw4tz ( real_T rtp_omegao , pszu5oshkv * localX ) ; extern void
gbdizyxaee ( oqvwukdwj0 * const ivyyfeoocu , ped3gwkpr0 * localXdis ) ;
extern void bgng0dfead ( real_T * n25s4rnzle , real_T * fotmkurbja , real_T *
pn21eijkzx , real_T * eiyqnu5b23 , ibre5dujvi * localB ) ; extern void
lzoorlbact ( ibre5dujvi * localB , lessjmahpg * localXdot ) ; extern void
b3shgkl452 ( oqvwukdwj0 * const ivyyfeoocu , ped3gwkpr0 * localXdis ) ;
extern void pnwnqvpslj ( real_T ojopfjv3df , real_T n42uqbks0p , real_T *
n25s4rnzle , real_T * fotmkurbja , real_T * pn21eijkzx , real_T * eiyqnu5b23
, real_T rtp_br , real_T rtp_Iyy , ibre5dujvi * localB , nhnmqwzrv2 * localP
, pszu5oshkv * localX ) ; extern void mmd2jxhmnb ( real_T rtp_omegao ,
mvgl2tnqzx * localB , lod0asgoor * localDW , lpj4ragplm * localP , oatgowdgin
* localX ) ; extern void chk5g2q1cb ( mvgl2tnqzx * localB , lod0asgoor *
localDW ) ; extern void bigtign1l3 ( oqvwukdwj0 * const ivyyfeoocu ,
lod0asgoor * localDW , ep31uir1gb * localXdis ) ; extern void j5chng11nc (
mvgl2tnqzx * localB ) ; extern void kyt34vrl1t ( mvgl2tnqzx * localB ,
lod0asgoor * localDW , e3wgsgh4bl * localXdot ) ; extern void el2g0zdrbp (
oqvwukdwj0 * const ivyyfeoocu , lod0asgoor * localDW , ep31uir1gb * localXdis
) ; extern void px02myt3he ( oqvwukdwj0 * const ivyyfeoocu , real_T
efeu1kmwm1 , real_T hwn3xib13c , real_T psoblxm5zn , real_T rtp_omegao ,
real_T rtp_br , real_T rtp_Iyy , real_T rtp_OmegaTol , mvgl2tnqzx * localB ,
lod0asgoor * localDW , lpj4ragplm * localP , oatgowdgin * localX , ep31uir1gb
* localXdis ) ; extern void px02myt3heTID2 ( real_T rtp_br , mvgl2tnqzx *
localB , lpj4ragplm * localP ) ; extern void dwspnpzpdx ( real_T rtp_omegao ,
mxsazlu04j * localB , knueqfvynn * localDW , cnusb2dxse * localP , pvu54otdxg
* localX ) ; extern void dupy5rq5ph ( mxsazlu04j * localB , knueqfvynn *
localDW ) ; extern void cwxr2wf5bj ( oqvwukdwj0 * const ivyyfeoocu ,
knueqfvynn * localDW , glw1qhordy * localXdis ) ; extern void dgndf5bjao (
mxsazlu04j * localB ) ; extern void d5apf4pypv ( mxsazlu04j * localB ,
knueqfvynn * localDW , a1kadfxhlm * localXdot ) ; extern void ehba0b4b2q (
oqvwukdwj0 * const ivyyfeoocu , knueqfvynn * localDW , glw1qhordy * localXdis
) ; extern void kmiehcqwcy ( oqvwukdwj0 * const ivyyfeoocu , real_T
hhkvoalkgo , real_T hlbxdumzm1 , real_T bjr0h50nho , real_T rtp_omegao ,
real_T rtp_br , real_T rtp_Iyy , real_T rtp_OmegaTol , mxsazlu04j * localB ,
knueqfvynn * localDW , cnusb2dxse * localP , pvu54otdxg * localX , glw1qhordy
* localXdis ) ; extern void kmiehcqwcyTID2 ( real_T rtp_br , mxsazlu04j *
localB , cnusb2dxse * localP ) ; extern void c0k3gywf3v ( oqvwukdwj0 * const
ivyyfeoocu , real_T * angnzwuao0 , gpz52e3dwe * localB , f2a5ytrc5f * localDW
, dv0k21emzh * localX ) ; extern void fefsokrdgk ( oqvwukdwj0 * const
ivyyfeoocu , gpz52e3dwe * localB , f2a5ytrc5f * localDW , dv0k21emzh * localX
) ; extern void eqwuvywyso ( oqvwukdwj0 * const ivyyfeoocu , f2a5ytrc5f *
localDW , jjihdbtkak * localXdis ) ; extern void ojicl15012 ( oqvwukdwj0 *
const ivyyfeoocu , gpz52e3dwe * localB , f2a5ytrc5f * localDW , jjihdbtkak *
localXdis ) ; extern void mr20y0atts ( gpz52e3dwe * localB , f2a5ytrc5f *
localDW , dv0k21emzh * localX , jjihdbtkak * localXdis , o4t1ox0xnc *
localXdot ) ; extern void fwphuadlf2 ( real_T * angnzwuao0 , gpz52e3dwe *
localB , f2a5ytrc5f * localDW , dv0k21emzh * localX , l2xiyzkbzo * localZCSV
) ; extern void kv2sxzppxj ( oqvwukdwj0 * const ivyyfeoocu , f2a5ytrc5f *
localDW , jjihdbtkak * localXdis ) ; extern void f2ay4b3zfo ( oqvwukdwj0 *
const ivyyfeoocu , boolean_T * kkdxx45yej , gpz52e3dwe * localB , f2a5ytrc5f
* localDW , jjihdbtkak * localXdis ) ; extern void DrivetrainHevP4 (
oqvwukdwj0 * const ivyyfeoocu , const real_T * f1yddjot4o , const real_T *
f35royvs0l , const real_T * nur0x3dnrd , const real_T * adynfirr4h , const
real_T * cypg0t3kxa , const real_T * f0jwsprwuj , real_T * i0kowghn5g ,
real_T * angnzwuao0 , boolean_T * kkdxx45yej , real_T * otyz5h01ax , real_T *
dly32btpwe , gpz52e3dwe * localB , f2a5ytrc5f * localDW , dv0k21emzh * localX
, njnki40qhm * localZCE , jjihdbtkak * localXdis ) ; extern void
DrivetrainHevP4TID2 ( oqvwukdwj0 * const ivyyfeoocu , boolean_T * lrcjfnpoyz
, gpz52e3dwe * localB , f2a5ytrc5f * localDW ) ; extern void jpmowlrhtz (
oqvwukdwj0 * const ivyyfeoocu ) ;
#endif
