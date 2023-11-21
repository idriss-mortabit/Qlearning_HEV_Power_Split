#include "MotMappedP4.h"
#include "rtwtypes.h"
#include "MotMappedP4_private.h"
#include "MotMappedP4_capi.h"
#include "look1_binlcapw.h"
#include "look1_binlcpw.h"
#include "look2_binlcapw.h"
#include <string.h>
#include "rt_nonfinite.h"
static RegMdlInfo rtMdlInfo_MotMappedP4 [ 43 ] = { { "hs55xurqzk3" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "MotMappedP4" } , {
"an3hr1nuoh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotMappedP4" } , { "d21uefewkm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "MotMappedP4" } , { "o1dbndwgao" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "MotMappedP4" } , {
"cb1lstseqo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotMappedP4" } , { "l241403ohv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "MotMappedP4" } , { "cfdt5amtic" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "MotMappedP4" } , {
"koxbpdaoz0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotMappedP4" } , { "cenygxuok1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "MotMappedP4" } , { "m3sne5kaq0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "MotMappedP4" } , {
"gbluh052ug" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotMappedP4" } , { "cheyhtpovr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "MotMappedP4" } , { "lnsmtgpggy" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "MotMappedP4" } , {
"l50vdwjvbe" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotMappedP4" } , { "dv3ob2udbe" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "MotMappedP4" } , { "fzkydmfar2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "MotMappedP4" } , {
"jfuddvgjkf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotMappedP4" } , { "bz1mr4ujfd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "MotMappedP4" } , { "cj5kkg5mwz" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "MotMappedP4" } , {
"ekzrejzn5g" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotMappedP4" } , { "pcle0rahmc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "MotMappedP4" } , { "fpbst3djiy" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "MotMappedP4" } , {
"psoxkgqvrz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotMappedP4" } , { "cbwxnevkdq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "MotMappedP4" } , { "dbpmxri0xq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "MotMappedP4" } , {
"MotMappedP4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , {
"jbrgfbpafn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotMappedP4" } , { "lm31vc4khk" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "MotMappedP4" } , { "fqfnmhstnm" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "MotMappedP4" } , {
"mr_MotMappedP4_GetSimStateDisallowedBlocks" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "MotMappedP4" } , {
"mr_MotMappedP4_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "MotMappedP4" } , {
"mr_MotMappedP4_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "MotMappedP4" } , {
"mr_MotMappedP4_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "MotMappedP4" } , {
"mr_MotMappedP4_cacheDataToMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "MotMappedP4" } , {
"mr_MotMappedP4_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "MotMappedP4" } , {
"mr_MotMappedP4_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "MotMappedP4" } , { "mr_MotMappedP4_restoreDataFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "MotMappedP4" } , {
"mr_MotMappedP4_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 ,
( void * ) "MotMappedP4" } , { "mr_MotMappedP4_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "MotMappedP4" } , {
"mr_MotMappedP4_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"MotMappedP4" } , { "mr_MotMappedP4_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "MotMappedP4" } , { "MotMappedP4.h" ,
MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , { "MotMappedP4.c" ,
MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * ) "MotMappedP4" } } ;
msqdxuhx1ey msqdxuhx1e = { 0.02 , { 47.74648293 , 52.08707228 , 57.29577951 ,
63.66197724 , 71.61972439 , 81.85111359 , 95.49296586 , 114.591559 ,
143.2394488 , 190.9859317 , 200.0 , 200.0 , 200.0 , 200.0 , 200.0 , 200.0 ,
200.0 , 190.9859317 , 143.2394488 , 114.591559 , 95.49296586 , 81.85111359 ,
71.61972439 , 63.66197724 , 57.29577951 , 52.08707228 , 47.74648293 } , { -
628.318530717959 , - 575.958653158129 , - 523.598775598299 , -
471.238898038469 , - 418.879020478639 , - 366.519142918809 , -
314.159265358979 , - 261.799387799149 , - 209.43951023932 , - 157.07963267949
, - 149.999649206931 , - 104.71975511966 , - 52.3598775598299 , 0.0 ,
52.3598775598299 , 104.71975511966 , 149.999649206931 , 157.07963267949 ,
209.43951023932 , 261.799387799149 , 314.159265358979 , 366.519142918809 ,
418.879020478639 , 471.238898038469 , 523.598775598299 , 575.958653158129 ,
628.318530717959 } , 0.0 , { - 1.0 , 1.0 } , { - 1.0 , 1.0 } , {
9458.558526937 , 8670.34531635892 , 7882.13210578084 , 7093.91889520275 ,
6305.70568462467 , 5517.49247404658 , 4729.2792634685 , 5178.44942899416 ,
5711.98664289054 , 5114.22059886711 , 5714.27235074022 , 4597.45266378994 ,
4487.98950512827 , 0.0 , 3141.59265358979 , 3769.91118430775 ,
4799.98877462179 , 4398.22971502571 , 5026.54824574367 , 4712.38898038469 ,
4398.22971502571 , 5131.26800086332 , 5864.30628670094 , 6597.34457253856 ,
7330.38285837618 , 8063.4211442138 , 8796.45943005141 , 8512.7026742433 ,
7803.31078472303 , 7093.91889520275 , 6384.52700568248 , 5675.1351161622 ,
4965.74322664193 , 4256.35133712165 , 4660.60448609474 , 5140.78797860148 ,
4602.7985389804 , 5142.8451156662 , 4137.70739741095 , 3311.40847270275 , 0.0
, 2450.44226980004 , 3392.92006587698 , 4319.98989715961 , 3958.40674352314 ,
4523.8934211693 , 4241.15008234622 , 3958.40674352314 , 4618.14120077699 ,
5277.87565803085 , 5937.61011528471 , 6597.34457253856 , 7257.07902979242 ,
7916.81348704627 , 7566.8468215496 , 6936.27625308713 , 6305.70568462467 ,
5675.1351161622 , 5044.56454769974 , 4413.99397923727 , 3783.4234107748 ,
3642.42626503164 , 4569.58931431243 , 4091.37647909369 , 3906.96760725029 ,
3191.45920364677 , 2645.55170828614 , 0.0 , 2010.61929829747 ,
2680.82573106329 , 3359.99214223525 , 3518.58377202057 , 4021.23859659494 ,
3351.03216382911 , 3518.58377202057 , 4105.01440069066 , 4691.44502936075 ,
5277.87565803085 , 5864.30628670094 , 6450.73691537104 , 7037.16754404113 ,
6620.9909688559 , 6069.24172145124 , 5517.49247404659 , 4965.74322664193 ,
4413.99397923727 , 3862.24473183261 , 3310.49548442795 , 3187.12298190269 ,
3257.94793705608 , 2998.79298751753 , 3418.596656344 , 2792.52680319093 ,
2067.54388313174 , 0.0 , 1612.68422884276 , 2345.72251468038 ,
2939.99312445584 , 2638.93782901543 , 2932.15314335047 , 2932.15314335047 ,
3078.760800518 , 3591.88760060433 , 4105.01440069066 , 4618.14120077699 ,
5131.26800086333 , 5644.39480094966 , 6157.52160103599 , 5675.1351161622 ,
5202.20718981535 , 4729.2792634685 , 4256.35133712165 , 3783.4234107748 ,
3310.49548442795 , 2837.5675580811 , 2731.81969877373 , 2792.52680319093 ,
2570.39398930074 , 2454.53971429523 , 2045.68823954684 , 1772.18047125578 ,
0.0 , 1382.30076757951 , 1759.29188601028 , 2159.9949485798 ,
2261.94671058465 , 2513.27412287183 , 2513.27412287183 , 2638.93782901542 ,
3078.76080051799 , 3518.58377202057 , 3958.40674352314 , 4398.22971502571 ,
4838.05268652828 , 5277.87565803085 , 4729.2792634685 , 4335.17265817946 ,
3941.06605289042 , 3546.95944760138 , 3152.85284231233 , 2758.74623702329 ,
2731.81969877373 , 2589.22471449708 , 2327.10566932577 , 2141.99499108395 ,
2045.44976191269 , 1704.74019962237 , 1308.99693899575 , 0.0 ,
1047.1975511966 , 1466.07657167524 , 1799.99579048317 , 1884.95559215388 ,
2094.39510239319 , 2356.19449019234 , 2513.27412287183 , 2565.63400043166 ,
2932.15314335047 , 3298.67228626928 , 3665.19142918809 , 4031.7105721069 ,
4398.22971502571 , 3783.4234107748 , 3468.13812654357 , 3152.85284231233 ,
2837.5675580811 , 2522.28227384987 , 2549.69838552215 , 2485.6557259172 ,
2071.37977159766 , 1861.68453546062 , 1713.59599286716 , 1636.35980953016 ,
1363.7921596979 , 919.490532757988 , 0.0 , 753.98223686155 , 1172.86125734019
, 1439.99663238654 , 1507.9644737231 , 1675.51608191456 , 1884.95559215388 ,
2261.94671058465 , 2345.72251468038 , 2345.72251468038 , 2638.93782901542 ,
2932.15314335047 , 3225.36845768552 , 3518.58377202057 , 2837.5675580811 ,
2601.10359490768 , 2364.63963173425 , 2128.17566856083 , 1891.7117053874 ,
1912.27378914161 , 1864.2417944379 , 1745.32925199433 , 1713.59599286716 ,
1285.19699465037 , 1465.11285271886 , 1022.84411977342 , 689.617899568491 ,
0.0 , 565.486677646163 , 879.645943005142 , 1259.99705333822 ,
1130.97335529233 , 1507.9644737231 , 1570.7963267949 , 1696.46003293849 ,
1759.29188601028 , 1759.29188601028 , 1979.20337176157 , 2199.11485751285 ,
2419.02634326414 , 2638.93782901542 , 2485.6557259172 , 2003.3344457674 ,
1821.21313251582 , 1864.2417944379 , 1657.10381727813 , 1628.97396852804 ,
1713.59599286716 , 1427.99666072263 , 1363.7921596979 , 1022.84411977342 ,
976.741901812573 , 797.864800911693 , 523.598775598299 , 0.0 ,
418.879020478639 , 670.206432765823 , 839.998035558812 , 879.645943005142 ,
1172.86125734019 , 1256.63706143592 , 1507.9644737231 , 1466.07657167524 ,
1507.9644737231 , 1696.46003293849 , 1675.51608191456 , 1843.06769010601 ,
2261.94671058465 , 2045.68823954684 , 1875.21421958461 , 1704.74019962237 ,
1534.26617966013 , 1363.7921596979 , 1396.26340159546 , 1379.23579913698 ,
1149.36316594749 , 1047.1975511966 , 785.398163397448 , 749.998246034654 ,
590.726823751927 , 295.363411875963 , 0.0 , 230.383461263251 ,
460.766922526503 , 599.998596827723 , 628.318530717959 , 837.758040957278 ,
942.477796076938 , 1130.97335529233 , 1172.86125734019 , 1172.86125734019 ,
1319.46891450771 , 1466.07657167524 , 1612.68422884276 , 1759.29188601028 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 1759.29188601028 , 1612.68422884276 , 1466.07657167524 ,
1319.46891450771 , 1172.86125734019 , 1172.86125734019 , 1130.97335529233 ,
942.477796076938 , 837.758040957278 , 628.318530717959 , 599.998596827723 ,
460.766922526503 , 230.383461263251 , 0.0 , 295.363411875963 ,
590.726823751927 , 749.998246034654 , 785.398163397448 , 1047.1975511966 ,
1149.36316594749 , 1379.23579913698 , 1396.26340159546 , 1363.7921596979 ,
1534.26617966013 , 1704.74019962237 , 1875.21421958461 , 2045.68823954684 ,
2261.94671058465 , 1843.06769010601 , 1675.51608191456 , 1696.46003293849 ,
1507.9644737231 , 1466.07657167524 , 1507.9644737231 , 1256.63706143592 ,
1172.86125734019 , 879.645943005142 , 839.998035558812 , 670.206432765823 ,
418.879020478639 , 0.0 , 523.598775598299 , 797.864800911693 ,
976.741901812573 , 1022.84411977342 , 1363.7921596979 , 1427.99666072263 ,
1713.59599286716 , 1628.97396852804 , 1657.10381727813 , 1864.2417944379 ,
1821.21313251582 , 2003.3344457674 , 2485.6557259172 , 2638.93782901542 ,
2419.02634326414 , 2199.11485751285 , 1979.20337176157 , 1759.29188601028 ,
1759.29188601028 , 1696.46003293849 , 1570.7963267949 , 1507.9644737231 ,
1130.97335529233 , 1259.99705333822 , 879.645943005142 , 565.486677646163 ,
0.0 , 689.617899568491 , 1022.84411977342 , 1465.11285271886 ,
1285.19699465037 , 1713.59599286716 , 1745.32925199433 , 1864.2417944379 ,
1912.27378914161 , 1891.7117053874 , 2128.17566856083 , 2364.63963173425 ,
2601.10359490768 , 2837.5675580811 , 3518.58377202057 , 3225.36845768552 ,
2932.15314335047 , 2638.93782901542 , 2345.72251468038 , 2345.72251468038 ,
2261.94671058465 , 1884.95559215388 , 1675.51608191456 , 1507.9644737231 ,
1439.99663238654 , 1172.86125734019 , 753.98223686155 , 0.0 ,
919.490532757988 , 1363.7921596979 , 1636.35980953016 , 1713.59599286716 ,
1861.68453546062 , 2071.37977159766 , 2485.6557259172 , 2549.69838552215 ,
2522.28227384987 , 2837.5675580811 , 3152.85284231233 , 3468.13812654357 ,
3783.4234107748 , 4398.22971502571 , 4031.7105721069 , 3665.19142918809 ,
3298.67228626928 , 2932.15314335047 , 2565.63400043166 , 2513.27412287183 ,
2356.19449019234 , 2094.39510239319 , 1884.95559215388 , 1799.99579048317 ,
1466.07657167524 , 1047.1975511966 , 0.0 , 1308.99693899575 ,
1704.74019962237 , 2045.44976191269 , 2141.99499108395 , 2327.10566932577 ,
2589.22471449708 , 2731.81969877373 , 2758.74623702329 , 3152.85284231233 ,
3546.95944760138 , 3941.06605289042 , 4335.17265817946 , 4729.2792634685 ,
5277.87565803085 , 4838.05268652828 , 4398.22971502571 , 3958.40674352314 ,
3518.58377202057 , 3078.76080051799 , 2638.93782901542 , 2513.27412287183 ,
2513.27412287183 , 2261.94671058465 , 2159.9949485798 , 1759.29188601028 ,
1382.30076757951 , 0.0 , 1772.18047125578 , 2045.68823954684 ,
2454.53971429523 , 2570.39398930074 , 2792.52680319093 , 2731.81969877373 ,
2837.5675580811 , 3310.49548442795 , 3783.4234107748 , 4256.35133712165 ,
4729.2792634685 , 5202.20718981535 , 5675.1351161622 , 6157.52160103599 ,
5644.39480094966 , 5131.26800086333 , 4618.14120077699 , 4105.01440069066 ,
3591.88760060433 , 3078.760800518 , 2932.15314335047 , 2932.15314335047 ,
2638.93782901543 , 2939.99312445584 , 2345.72251468038 , 1612.68422884276 ,
0.0 , 2067.54388313174 , 2792.52680319093 , 3418.596656344 , 2998.79298751753
, 3257.94793705608 , 3187.12298190269 , 3310.49548442795 , 3862.24473183261 ,
4413.99397923727 , 4965.74322664193 , 5517.49247404659 , 6069.24172145124 ,
6620.9909688559 , 7037.16754404113 , 6450.73691537104 , 5864.30628670094 ,
5277.87565803085 , 4691.44502936075 , 4105.01440069066 , 3518.58377202057 ,
3351.03216382911 , 4021.23859659494 , 3518.58377202057 , 3359.99214223525 ,
2680.82573106329 , 2010.61929829747 , 0.0 , 2645.55170828614 ,
3191.45920364677 , 3906.96760725029 , 4091.37647909369 , 4569.58931431243 ,
3642.42626503164 , 3783.4234107748 , 4413.99397923727 , 5044.56454769974 ,
5675.1351161622 , 6305.70568462467 , 6936.27625308713 , 7566.8468215496 ,
7916.81348704627 , 7257.07902979242 , 6597.34457253856 , 5937.61011528471 ,
5277.87565803085 , 4618.14120077699 , 3958.40674352314 , 4241.15008234622 ,
4523.8934211693 , 3958.40674352314 , 4319.98989715961 , 3392.92006587698 ,
2450.44226980004 , 0.0 , 3311.40847270275 , 4137.70739741095 ,
5142.8451156662 , 4602.7985389804 , 5140.78797860148 , 4660.60448609474 ,
4256.35133712165 , 4965.74322664193 , 5675.1351161622 , 6384.52700568248 ,
7093.91889520275 , 7803.31078472303 , 8512.7026742433 , 8796.45943005141 ,
8063.4211442138 , 7330.38285837618 , 6597.34457253856 , 5864.30628670094 ,
5131.26800086332 , 4398.22971502571 , 4712.38898038469 , 5026.54824574367 ,
4398.22971502571 , 4799.98877462179 , 3769.91118430775 , 3141.59265358979 ,
0.0 , 4487.98950512827 , 4597.45266378994 , 5714.27235074022 ,
5114.22059886711 , 5711.98664289054 , 5178.44942899416 , 4729.2792634685 ,
5517.49247404658 , 6305.70568462467 , 7093.91889520275 , 7882.13210578084 ,
8670.34531635892 , 9458.558526937 } , { - 628.318530717959 , -
575.958653158129 , - 523.598775598299 , - 471.238898038469 , -
418.879020478639 , - 366.519142918809 , - 314.159265358979 , -
261.799387799149 , - 209.43951023932 , - 157.07963267949 , - 149.999649206931
, - 104.71975511966 , - 52.3598775598299 , 0.0 , 52.3598775598299 ,
104.71975511966 , 149.999649206931 , 157.07963267949 , 209.43951023932 ,
261.799387799149 , 314.159265358979 , 366.519142918809 , 418.879020478639 ,
471.238898038469 , 523.598775598299 , 575.958653158129 , 628.318530717959 } ,
{ - 200.0 , - 180.0 , - 160.0 , - 140.0 , - 120.0 , - 100.0 , - 80.0 , - 60.0
, - 40.0 , - 20.0 , 0.0 , 20.0 , 40.0 , 60.0 , 80.0 , 100.0 , 120.0 , 140.0 ,
160.0 , 180.0 , 200.0 } , 0.0 , 0.0001 , { 26U , 20U } } ; void fpbst3djiy (
koxbpdaoz0 * localX ) { localX -> ese1fvnzzx = msqdxuhx1e . P_3 ; } void
pcle0rahmc ( koxbpdaoz0 * localX ) { localX -> ese1fvnzzx = msqdxuhx1e . P_3
; } void MotMappedP4 ( fqfnmhstnm * const j4e5rul3ne , const real_T *
hkik3xnhwe , const real_T * dogolf5sre , const real_T * kizu15wtuq , real_T *
hdfyywzzvi , real_T * lqatlxu1mv , l50vdwjvbe * localB , lnsmtgpggy * localDW
, koxbpdaoz0 * localX ) { real_T bo5obd03jg ; real_T etp3b4c0zk ; real_T
i2f2bwtosl_p ; real_T ok31usl5fp_p ; bo5obd03jg = look1_binlcapw ( *
dogolf5sre , msqdxuhx1e . P_2 , msqdxuhx1e . P_1 , 26U ) ; i2f2bwtosl_p = 1.0
/ msqdxuhx1e . P_0 * localX -> ese1fvnzzx ; * hdfyywzzvi = look1_binlcpw (
1.0 / bo5obd03jg * i2f2bwtosl_p , msqdxuhx1e . P_5 , msqdxuhx1e . P_4 , 1U )
* bo5obd03jg ; bo5obd03jg = * dogolf5sre * * hdfyywzzvi ; etp3b4c0zk =
look2_binlcapw ( * dogolf5sre , * hdfyywzzvi , msqdxuhx1e . P_7 , msqdxuhx1e
. P_8 , msqdxuhx1e . P_6 , msqdxuhx1e . P_11 , 27U ) ; if (
ssIsModeUpdateTimeStep ( j4e5rul3ne -> _mdlRefSfcnS ) ) { if ( * kizu15wtuq
>= msqdxuhx1e . P_9 ) { localDW -> gg4enshh5a = 1 ; } else if ( * kizu15wtuq
> msqdxuhx1e . P_10 ) { localDW -> gg4enshh5a = 0 ; } else { localDW ->
gg4enshh5a = - 1 ; } } if ( localDW -> gg4enshh5a == 1 ) { ok31usl5fp_p =
msqdxuhx1e . P_9 ; } else if ( localDW -> gg4enshh5a == - 1 ) { ok31usl5fp_p
= msqdxuhx1e . P_10 ; } else { ok31usl5fp_p = * kizu15wtuq ; } * lqatlxu1mv =
( bo5obd03jg + etp3b4c0zk ) / ok31usl5fp_p ; localB -> buqsqvsxs4 = *
hkik3xnhwe - i2f2bwtosl_p ; } void cj5kkg5mwz ( l50vdwjvbe * localB ,
cfdt5amtic * localXdot ) { localXdot -> ese1fvnzzx = localB -> buqsqvsxs4 ; }
void bz1mr4ujfd ( const real_T * kizu15wtuq , an3hr1nuoh * localZCSV ) {
localZCSV -> lsg4f34hue = * kizu15wtuq - msqdxuhx1e . P_9 ; localZCSV ->
dchswhevzc = * kizu15wtuq - msqdxuhx1e . P_10 ; } void fzkydmfar2 (
fqfnmhstnm * const j4e5rul3ne ) { if ( ! slIsRapidAcceleratorSimulating ( ) )
{ slmrRunPluginEvent ( j4e5rul3ne -> _mdlRefSfcnS , "MotMappedP4" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void psoxkgqvrz (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , fqfnmhstnm
* const j4e5rul3ne , l50vdwjvbe * localB , lnsmtgpggy * localDW , koxbpdaoz0
* localX , void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo *
rt_ParentMMI , const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T
rt_CSTATEIdx ) { rt_InitInfAndNaN ( sizeof ( real_T ) ) ; msqdxuhx1e . P_9 =
rtInf ; ( void ) memset ( ( void * ) j4e5rul3ne , 0 , sizeof ( fqfnmhstnm ) )
; j4e5rul3ne -> Timing . mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; j4e5rul3ne ->
Timing . mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; j4e5rul3ne -> _mdlRefSfcnS =
( _mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( j4e5rul3ne -> _mdlRefSfcnS , "MotMappedP4" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { localB -> buqsqvsxs4 = 0.0
; } ( void ) memset ( ( void * ) localDW , 0 , sizeof ( lnsmtgpggy ) ) ;
MotMappedP4_InitializeDataMapInfo ( j4e5rul3ne , localDW , localX , sysRanPtr
, contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != (
NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & (
j4e5rul3ne -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( j4e5rul3ne ->
DataMapInfo . mmi , rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex (
j4e5rul3ne -> DataMapInfo . mmi , rt_CSTATEIdx ) ; } } void
mr_MotMappedP4_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName ,
int_T * retVal ) { * retVal = 0 ; { boolean_T regSubmodelsMdlinfo = false ;
ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if (
regSubmodelsMdlinfo ) { } } * retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS
, modelName , rtMdlInfo_MotMappedP4 , 43 ) ; * retVal = 1 ; } static void
mr_MotMappedP4_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) ; static void
mr_MotMappedP4_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_MotMappedP4_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_MotMappedP4_restoreDataFromMxArray ( void * destData , const mxArray
* srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * )
destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i
, j ) ) , numBytes ) ; } static void mr_MotMappedP4_cacheBitFieldToMxArray (
mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_MotMappedP4_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int
j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_MotMappedP4_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_MotMappedP4_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_MotMappedP4_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i
, int j , mwIndex offset , const void * srcData , size_t numBytes ) ; static
void mr_MotMappedP4_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
{ uint8_T * varData = ( uint8_T * ) mxGetData ( mxGetFieldByNumber (
destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData [ offset * numBytes
] , ( const uint8_T * ) srcData , numBytes ) ; } static void
mr_MotMappedP4_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ;
static void mr_MotMappedP4_restoreDataFromMxArrayWithOffset ( void * destData
, const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_MotMappedP4_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray
, mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_MotMappedP4_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
real_T ) fieldVal ) ) ; } static uint_T
mr_MotMappedP4_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_MotMappedP4_extractBitFieldFromCellArrayWithOffset ( const mxArray
* srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_MotMappedP4_GetDWork ( const hs55xurqzk3 * mdlrefDW ) {
static const char_T * ssDWFieldNames [ 3 ] = { "rtb" , "rtdw" , "NULL->rtzce"
, } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_MotMappedP4_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & (
mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb ) ) ; { static const char_T *
rtdwDataFieldNames [ 1 ] = { "mdlrefDW->rtdw.gg4enshh5a" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 1 , rtdwDataFieldNames ) ;
mr_MotMappedP4_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void * ) & (
mdlrefDW -> rtdw . gg4enshh5a ) , sizeof ( mdlrefDW -> rtdw . gg4enshh5a ) )
; mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } ( void ) mdlrefDW ;
return ssDW ; } void mr_MotMappedP4_SetDWork ( hs55xurqzk3 * mdlrefDW , const
mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ;
mr_MotMappedP4_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtb ) ,
ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ; mr_MotMappedP4_restoreDataFromMxArray (
( void * ) & ( mdlrefDW -> rtdw . gg4enshh5a ) , rtdwData , 0 , 0 , sizeof (
mdlrefDW -> rtdw . gg4enshh5a ) ) ; } } void
mr_MotMappedP4_RegisterSimStateChecksum ( SimStruct * S ) { const uint32_T
chksum [ 4 ] = { 2844007177U , 1620898710U , 211074160U , 999771375U , } ;
slmrModelRefRegisterSimStateChecksum ( S , "MotMappedP4" , & chksum [ 0 ] ) ;
} mxArray * mr_MotMappedP4_GetSimStateDisallowedBlocks ( ) { return ( NULL )
; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
