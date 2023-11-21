#ifndef RTW_HEADER_HevP4TransmissionController_h_
#define RTW_HEADER_HevP4TransmissionController_h_
#ifndef HevP4TransmissionController_COMMON_INCLUDES_
#define HevP4TransmissionController_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "sf_runtime/sfc_sdi.h"
#endif
#include "HevP4TransmissionController_types.h"
#include "rtw_modelmap_simtarget.h"
#include <string.h>
#include "rt_nonfinite.h"
#include <stddef.h>
typedef struct { int8_T c1eg2r0fq0 ; boolean_T cjqejitpdt ; } djh4op1pzv ;
typedef struct { real_T aeo5wmxfdm ; } kz2bup5g1r ; typedef struct { real_T
d4wwv1h2im ; real_T evxnx4j1pn ; real_T p2xrfjzwr5 ; int32_T o55lh2bsdf ;
uint32_T hubl5tx3rd ; uint32_T jek222xldn ; int8_T l52gatiaea ; int8_T
clcmyj3zq5 ; uint8_T ku53qexbmd ; uint8_T jtzo5ocjcj ; uint8_T om33mzodna ;
uint8_T ijjmr3qo4e ; uint8_T jlcsfmc3ih ; djh4op1pzv b0rvtl1mndg ; }
e33vsk4ebo ; struct pwvgz2im12_ { real_T P_0 ; real_T P_1 [ 2 ] ; real_T P_2
[ 2 ] ; real_T P_3 ; real_T P_4 ; real_T P_5 ; real_T P_6 ; } ; struct
ni25fleah5i_ { real_T P_0 [ 4 ] ; real_T P_1 [ 2 ] ; real_T P_2 [ 5 ] ;
real_T P_3 [ 40 ] ; real_T P_4 ; real_T P_5 ; real_T P_6 ; real_T P_7 [ 4 ] ;
real_T P_8 [ 2 ] ; real_T P_9 [ 5 ] ; real_T P_10 [ 40 ] ; real_T P_11 ;
real_T P_12 [ 5 ] ; real_T P_13 [ 4 ] ; real_T P_14 ; real_T P_15 [ 5 ] ;
real_T P_16 [ 4 ] ; real_T P_17 ; real_T P_18 ; real_T P_19 ; real_T P_20 ;
real_T P_21 ; uint32_T P_22 [ 3 ] ; uint32_T P_23 [ 3 ] ; uint32_T P_24 [ 3 ]
; uint32_T P_25 [ 3 ] ; pwvgz2im12 b0rvtl1mndg ; } ; struct jvv1ghyijy {
struct SimStruct_tag * _mdlRefSfcnS ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; sysRanDType *
systemRan [ 6 ] ; int_T systemTid [ 6 ] ; } DataMapInfo ; struct { int_T
mdlref_GlobalTID [ 2 ] ; } Timing ; } ; typedef struct { kz2bup5g1r rtb ;
e33vsk4ebo rtdw ; fb2uf2nk44 rtm ; } fjvy5vdomkr ; extern void dqt510qa0h (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , fb2uf2nk44
* const koyns0ezya , kz2bup5g1r * localB , e33vsk4ebo * localDW , void *
sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const
char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern
void mr_HevP4TransmissionController_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS ,
char_T * modelName , int_T * retVal ) ; extern mxArray *
mr_HevP4TransmissionController_GetDWork ( const fjvy5vdomkr * mdlrefDW ) ;
extern void mr_HevP4TransmissionController_SetDWork ( fjvy5vdomkr * mdlrefDW
, const mxArray * ssDW ) ; extern void
mr_HevP4TransmissionController_RegisterSimStateChecksum ( SimStruct * S ) ;
extern mxArray * mr_HevP4TransmissionController_GetSimStateDisallowedBlocks (
) ; extern const rtwCAPI_ModelMappingStaticInfo *
HevP4TransmissionController_GetCAPIStaticMap ( void ) ; extern void
ji5otnb2ew ( real_T * f0zdpsa4fa , pwvgz2im12 * localP ) ; extern void
b0rvtl1mnd ( real_T dllf30dvl0 , real_T * f0zdpsa4fa , real_T rtp_LugSpd ,
djh4op1pzv * localDW , pwvgz2im12 * localP ) ; extern void kpvk0y2dwm (
real_T * irmm3lmduv , e33vsk4ebo * localDW ) ; extern void fzfs2hgelw (
real_T * irmm3lmduv , e33vsk4ebo * localDW ) ; extern void
HevP4TransmissionController ( const real_T * nks2jchzrk , const real_T *
iqipezpago , const real_T * kqnmub0ccs , real_T * irmm3lmduv , kz2bup5g1r *
localB , e33vsk4ebo * localDW ) ; extern void HevP4TransmissionControllerTID1
( kz2bup5g1r * localB ) ; extern void escpily3xw ( fb2uf2nk44 * const
koyns0ezya ) ;
#endif
