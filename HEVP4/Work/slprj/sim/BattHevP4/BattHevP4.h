#ifndef RTW_HEADER_BattHevP4_h_
#define RTW_HEADER_BattHevP4_h_
#ifndef BattHevP4_COMMON_INCLUDES_
#define BattHevP4_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "BattHevP4_types.h"
#include "model_reference_types.h"
#include "rtw_modelmap_simtarget.h"
#include <string.h>
#include "rt_nonfinite.h"
#include <stddef.h>
typedef struct { real_T my24rvqlbm ; real_T a1vd5ppugp ; real_T b5hnonjr3b ;
real_T jdbhkyvenr ; real_T bnvk15s1xo ; real_T np3abu5lh3 ; real_T cxi5wtxqys
; real_T gwteynrxii ; real_T b0ulkqpsva ; real_T hrge0n0lum ; } bllc4q2ho5 ;
typedef struct { int_T l1nvnskku2 ; int_T finstnqrrv ; int_T kelsdeeypp ; }
hnrscff1gh ; typedef struct { real_T jf4yxb00my ; real_T huozquuyis ; real_T
f0u4ldealx ; } nzo4ptcd4i ; typedef struct { real_T jf4yxb00my ; real_T
huozquuyis ; real_T f0u4ldealx ; } kuejxqaigs ; typedef struct { boolean_T
jf4yxb00my ; boolean_T huozquuyis ; boolean_T f0u4ldealx ; } exeeqdnta3 ;
typedef struct { real_T jf4yxb00my ; real_T huozquuyis ; real_T f0u4ldealx ;
} d1sixwk3if ; typedef struct { real_T jf4yxb00my ; real_T huozquuyis ;
real_T f0u4ldealx ; } bfc2nuwctg ; typedef struct { real_T jf4yxb00my ;
real_T huozquuyis ; real_T f0u4ldealx ; } pl1jvtcou5 ; struct d5lodtjlb0a_ {
real_T P_0 ; real_T P_1 ; real_T P_2 [ 7 ] ; real_T P_3 [ 101 ] ; real_T P_4
[ 6 ] ; real_T P_5 [ 101 ] ; real_T P_6 ; real_T P_7 ; real_T P_8 ; real_T
P_9 [ 42 ] ; real_T P_10 ; real_T P_11 ; real_T P_12 ; real_T P_13 ; real_T
P_14 ; real_T P_15 ; real_T P_16 ; real_T P_17 ; real_T P_18 ; real_T P_19 ;
real_T P_20 ; real_T P_21 ; real_T P_22 ; real_T P_23 ; real_T P_24 ; real_T
P_25 ; real_T P_26 ; uint32_T P_27 [ 2 ] ; } ; struct b5hj4cb40u { struct
SimStruct_tag * _mdlRefSfcnS ; const rtTimingBridge * timingBridge ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 3 ] ; int32_T * vardimsAddress [ 3
] ; RTWLoggingFcnPtr loggingPtrs [ 3 ] ; sysRanDType * systemRan [ 7 ] ;
int_T systemTid [ 7 ] ; } DataMapInfo ; struct { int_T mdlref_GlobalTID [ 3 ]
; time_T tStart ; } Timing ; } ; typedef struct { bllc4q2ho5 rtb ; hnrscff1gh
rtdw ; eiq1jwny0u rtm ; } fc1yykdatze ; extern void ermomkkhlx ( SimStruct *
_mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T mdlref_TID2 ,
eiq1jwny0u * const nq3nnf3z4x , bllc4q2ho5 * localB , hnrscff1gh * localDW ,
nzo4ptcd4i * localX , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_BattHevP4_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName ,
int_T * retVal ) ; extern mxArray * mr_BattHevP4_GetDWork ( const fc1yykdatze
* mdlrefDW ) ; extern void mr_BattHevP4_SetDWork ( fc1yykdatze * mdlrefDW ,
const mxArray * ssDW ) ; extern void mr_BattHevP4_RegisterSimStateChecksum (
SimStruct * S ) ; extern mxArray * mr_BattHevP4_GetSimStateDisallowedBlocks (
) ; extern const rtwCAPI_ModelMappingStaticInfo * BattHevP4_GetCAPIStaticMap
( void ) ; extern void eeevvys3rt ( eiq1jwny0u * const nq3nnf3z4x ,
hnrscff1gh * localDW , nzo4ptcd4i * localX ) ; extern void b0rwgxz4xm (
eiq1jwny0u * const nq3nnf3z4x , hnrscff1gh * localDW , nzo4ptcd4i * localX )
; extern void doej41yld0 ( bllc4q2ho5 * localB , nzo4ptcd4i * localX ,
kuejxqaigs * localXdot ) ; extern void enrfi3fbq1 ( hnrscff1gh * localDW ) ;
extern void BattHevP4 ( eiq1jwny0u * const nq3nnf3z4x , const real_T *
pj1iwrln5n , const real_T * ala00kodu2 , real_T * bmfyi5hubj , real_T *
faaggkrksa , real_T * fs55xx0haa , real_T * b1rlmxqb0y , bllc4q2ho5 * localB
, hnrscff1gh * localDW , nzo4ptcd4i * localX ) ; extern void BattHevP4TID2 (
bllc4q2ho5 * localB ) ; extern void d51nt2wcq4 ( eiq1jwny0u * const
nq3nnf3z4x ) ;
#endif
