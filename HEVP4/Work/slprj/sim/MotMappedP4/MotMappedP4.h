#ifndef RTW_HEADER_MotMappedP4_h_
#define RTW_HEADER_MotMappedP4_h_
#ifndef MotMappedP4_COMMON_INCLUDES_
#define MotMappedP4_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "MotMappedP4_types.h"
#include "rtw_modelmap_simtarget.h"
#include <string.h>
#include "rt_nonfinite.h"
#include <stddef.h>
typedef struct { real_T buqsqvsxs4 ; } l50vdwjvbe ; typedef struct { int_T
gg4enshh5a ; } lnsmtgpggy ; typedef struct { real_T ese1fvnzzx ; } koxbpdaoz0
; typedef struct { real_T ese1fvnzzx ; } cfdt5amtic ; typedef struct {
boolean_T ese1fvnzzx ; } l241403ohv ; typedef struct { real_T ese1fvnzzx ; }
cb1lstseqo ; typedef struct { real_T ese1fvnzzx ; } o1dbndwgao ; typedef
struct { real_T ese1fvnzzx ; } d21uefewkm ; typedef struct { real_T
lsg4f34hue ; real_T dchswhevzc ; } an3hr1nuoh ; struct msqdxuhx1ey_ { real_T
P_0 ; real_T P_1 [ 27 ] ; real_T P_2 [ 27 ] ; real_T P_3 ; real_T P_4 [ 2 ] ;
real_T P_5 [ 2 ] ; real_T P_6 [ 567 ] ; real_T P_7 [ 27 ] ; real_T P_8 [ 21 ]
; real_T P_9 ; real_T P_10 ; uint32_T P_11 [ 2 ] ; } ; struct lm31vc4khk {
struct SimStruct_tag * _mdlRefSfcnS ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; void * dataAddress [
1 ] ; int32_T * vardimsAddress [ 1 ] ; RTWLoggingFcnPtr loggingPtrs [ 1 ] ;
sysRanDType * systemRan [ 2 ] ; int_T systemTid [ 2 ] ; } DataMapInfo ;
struct { int_T mdlref_GlobalTID [ 2 ] ; time_T tStart ; } Timing ; } ;
typedef struct { l50vdwjvbe rtb ; lnsmtgpggy rtdw ; fqfnmhstnm rtm ; }
hs55xurqzk3 ; extern void psoxkgqvrz ( SimStruct * _mdlRefSfcnS , int_T
mdlref_TID0 , int_T mdlref_TID1 , fqfnmhstnm * const j4e5rul3ne , l50vdwjvbe
* localB , lnsmtgpggy * localDW , koxbpdaoz0 * localX , void * sysRanPtr ,
int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_MotMappedP4_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName ,
int_T * retVal ) ; extern mxArray * mr_MotMappedP4_GetDWork ( const
hs55xurqzk3 * mdlrefDW ) ; extern void mr_MotMappedP4_SetDWork ( hs55xurqzk3
* mdlrefDW , const mxArray * ssDW ) ; extern void
mr_MotMappedP4_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray *
mr_MotMappedP4_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * MotMappedP4_GetCAPIStaticMap ( void ) ;
extern void fpbst3djiy ( koxbpdaoz0 * localX ) ; extern void pcle0rahmc (
koxbpdaoz0 * localX ) ; extern void cj5kkg5mwz ( l50vdwjvbe * localB ,
cfdt5amtic * localXdot ) ; extern void bz1mr4ujfd ( const real_T * kizu15wtuq
, an3hr1nuoh * localZCSV ) ; extern void MotMappedP4 ( fqfnmhstnm * const
j4e5rul3ne , const real_T * hkik3xnhwe , const real_T * dogolf5sre , const
real_T * kizu15wtuq , real_T * hdfyywzzvi , real_T * lqatlxu1mv , l50vdwjvbe
* localB , lnsmtgpggy * localDW , koxbpdaoz0 * localX ) ; extern void
fzkydmfar2 ( fqfnmhstnm * const j4e5rul3ne ) ;
#endif
