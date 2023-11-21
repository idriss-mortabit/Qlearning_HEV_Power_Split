#ifndef RTW_HEADER_HevP4OptimalController_h_
#define RTW_HEADER_HevP4OptimalController_h_
#ifndef HevP4OptimalController_COMMON_INCLUDES_
#define HevP4OptimalController_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "sf_runtime/sfc_sdi.h"
#include "MtrTrq_wrapper.h"
#include "MtrTrq_wrapper_B_30_9.h"
#endif
#include "HevP4OptimalController_types.h"
#include "rtw_modelmap_simtarget.h"
#include <string.h>
#include "rt_nonfinite.h"
#include <stddef.h>
typedef struct { real_T hxfqvbaoqx [ 202 ] ; real_T evj45sbaej [ 202 ] ;
real_T ofuq2wgz45 [ 202 ] ; real_T n5s2xzhicy ; real_T h2va1bvoeq [ 200 ] ;
real_T ifrufs3efv ; real_T hdylaaqjyb ; } mjs35mr2uq ; typedef struct {
real_T dmxunhwslq [ 202 ] ; real_T ed5ewqoyhk [ 202 ] ; real_T mwvauacbhe [
202 ] ; real_T afdqonecir ; real_T hcqvryh3pk ; real_T pds1bi1lyu ; real_T
idxa25thow ; real_T ehclx4kaot ; real_T evsgt2lwva ; int32_T hbpd12ritj ;
int32_T kljvjnv1a0 ; int32_T p2qtmlrct4 ; uint32_T fevf52p4sx ; uint32_T
pqwv5mc2ke ; uint32_T eett11wdsp ; uint32_T arfuzgo5ru ; uint32_T mfomxibqip
; uint32_T juegnrb0o2 ; uint32_T pt2vjp5tsd ; int8_T a0xoiri2r5 ; int8_T
f13ilgvg50 ; int8_T g44dcraf04 ; } crm0fqgax1 ; struct k10a0cjydrp_ { real_T
P_0 [ 2 ] ; real_T P_1 [ 2 ] ; real_T P_2 [ 2 ] ; real_T P_3 [ 2 ] ; real_T
P_4 ; real_T P_5 ; real_T P_6 ; real_T P_7 [ 11 ] ; real_T P_8 [ 11 ] ;
real_T P_9 ; real_T P_10 [ 7 ] ; real_T P_11 ; real_T P_12 ; real_T P_13 ;
real_T P_14 ; real_T P_15 [ 7 ] ; real_T P_16 ; real_T P_17 ; real_T P_18 ;
real_T P_19 [ 11 ] ; real_T P_20 ; real_T P_21 ; real_T P_22 [ 2 ] ; real_T
P_23 [ 7 ] ; real_T P_24 ; real_T P_25 ; real_T P_26 ; real_T P_27 ; real_T
P_28 ; real_T P_29 ; real_T P_30 [ 1078 ] ; real_T P_31 [ 256 ] ; real_T P_32
[ 154 ] ; real_T P_33 [ 11 ] ; real_T P_34 [ 14 ] ; real_T P_35 [ 16 ] ;
real_T P_36 [ 16 ] ; real_T P_37 [ 16 ] ; real_T P_38 [ 14 ] ; real_T P_39 [
11 ] ; real_T P_40 ; real_T P_41 ; real_T P_42 ; real_T P_43 ; real_T P_44 ;
real_T P_45 ; real_T P_46 [ 16 ] ; real_T P_47 [ 16 ] ; real_T P_48 ; real_T
P_49 ; real_T P_50 [ 1078 ] ; real_T P_51 [ 7 ] ; real_T P_52 [ 11 ] ; real_T
P_53 [ 7 ] ; real_T P_54 [ 2 ] ; real_T P_55 ; real_T P_56 ; real_T P_57 ;
real_T P_58 ; real_T P_59 [ 7 ] ; real_T P_60 ; real_T P_61 [ 14 ] ; real_T
P_62 [ 14 ] ; real_T P_63 ; real_T P_64 ; real_T P_65 ; real_T P_66 ; real_T
P_67 ; real_T P_68 ; real_T P_69 ; real_T P_70 ; real_T P_71 ; real_T P_72 ;
real_T P_73 ; real_T P_74 ; real_T P_75 ; real_T P_76 ; real_T P_77 ; real_T
P_78 ; real_T P_79 ; real_T P_80 ; real_T P_81 ; real_T P_82 ; real_T P_83 ;
real_T P_84 ; real_T P_85 ; real_T P_86 [ 16 ] ; real_T P_87 ; real_T P_88 ;
real_T P_89 ; real_T P_90 ; real_T P_91 ; real_T P_92 ; real_T P_93 ; real_T
P_94 ; real_T P_95 ; real_T P_96 ; real_T P_97 ; real_T P_98 ; real_T P_99 ;
real_T P_100 ; real_T P_101 ; real_T P_102 ; real_T P_103 ; real_T P_104 ;
real_T P_105 ; real_T P_106 ; real_T P_107 ; real_T P_108 ; real_T P_109 ;
real_T P_110 ; real_T P_111 ; real_T P_112 ; real_T P_113 ; real_T P_114 ;
real_T P_115 ; real_T P_116 ; real_T P_117 ; real_T P_118 ; real_T P_119 ;
real_T P_120 ; real_T P_121 ; real_T P_122 ; real_T P_123 ; real_T P_124 ;
real_T P_125 ; real_T P_126 ; real_T P_127 ; real_T P_128 ; real_T P_129 [ 4
] ; real_T P_130 [ 2 ] ; real_T P_131 [ 2 ] ; real_T P_132 ; real_T P_133 ;
real_T P_134 ; real_T P_135 ; real_T P_136 ; real_T P_137 ; real_T P_138 ;
real_T P_139 ; real_T P_140 ; real_T P_141 ; real_T P_142 [ 2 ] ; real_T
P_143 [ 2 ] ; real_T P_144 ; real_T P_145 ; real_T P_146 ; real_T P_147 [ 200
] ; real_T P_148 ; real_T P_149 ; real_T P_150 ; real_T P_151 ; real_T P_152
; real_T P_153 ; real_T P_154 ; real_T P_155 ; real_T P_156 ; real_T P_157 ;
real_T P_158 ; real_T P_159 ; real_T P_160 [ 17 ] ; real_T P_161 [ 17 ] ;
real_T P_162 ; real_T P_163 ; real_T P_164 ; real_T P_165 ; real_T P_166 ;
real_T P_167 ; real_T P_168 ; real_T P_169 ; real_T P_170 ; real_T P_171 ;
real_T P_172 [ 1078 ] ; real_T P_173 [ 7 ] ; real_T P_174 [ 11 ] ; real_T
P_175 [ 7 ] ; real_T P_176 [ 2 ] ; real_T P_177 ; real_T P_178 ; real_T P_179
; real_T P_180 [ 7 ] ; real_T P_181 ; real_T P_182 ; real_T P_183 ; real_T
P_184 ; real_T P_185 [ 7 ] ; real_T P_186 ; real_T P_187 ; real_T P_188 [ 7 ]
; real_T P_189 ; real_T P_190 ; real_T P_191 ; real_T P_192 ; real_T P_193 ;
real_T P_194 ; real_T P_195 ; real_T P_196 [ 14 ] ; real_T P_197 [ 14 ] ;
real_T P_198 ; real_T P_199 ; real_T P_200 ; real_T P_201 ; real_T P_202 ;
real_T P_203 [ 2 ] ; real_T P_204 [ 2 ] ; real_T P_205 ; real_T P_206 [ 11 ]
; real_T P_207 [ 11 ] ; real_T P_208 ; real_T P_209 ; real_T P_210 ; real_T
P_211 ; real_T P_212 ; real_T P_213 ; real_T P_214 ; real_T P_215 ; real_T
P_216 ; real_T P_217 ; real_T P_218 ; real_T P_219 ; real_T P_220 ; real_T
P_221 ; real_T P_222 ; real_T P_223 ; real_T P_224 ; real_T P_225 ; real_T
P_226 ; real_T P_227 ; real_T P_228 ; real_T P_229 ; real_T P_230 ; real_T
P_231 ; real_T P_232 ; real_T P_233 ; real_T P_234 ; real_T P_235 ; uint32_T
P_236 [ 4 ] ; uint32_T P_237 [ 4 ] ; uint32_T P_238 [ 4 ] ; uint32_T P_239 [
4 ] ; uint32_T P_240 [ 2 ] ; uint32_T P_241 [ 2 ] ; uint32_T P_242 [ 2 ] ;
uint32_T P_243 [ 4 ] ; uint32_T P_244 [ 4 ] ; uint32_T P_245 [ 4 ] ; uint32_T
P_246 [ 4 ] ; uint8_T P_247 ; uint8_T P_248 ; uint8_T P_249 ; uint8_T P_250 ;
uint8_T P_251 ; uint8_T P_252 ; uint8_T P_253 ; } ; struct est0clsvcc {
struct SimStruct_tag * _mdlRefSfcnS ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; void * dataAddress [
6 ] ; int32_T * vardimsAddress [ 6 ] ; RTWLoggingFcnPtr loggingPtrs [ 6 ] ;
sysRanDType * systemRan [ 32 ] ; int_T systemTid [ 32 ] ; } DataMapInfo ;
struct { int_T mdlref_GlobalTID [ 2 ] ; } Timing ; } ; typedef struct {
mjs35mr2uq rtb ; crm0fqgax1 rtdw ; ahlzrh5kyk rtm ; } jaycrc4s13t ; extern
void iiwxpwj3gt ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T
mdlref_TID1 , ahlzrh5kyk * const fkxyq0okc4 , mjs35mr2uq * localB ,
crm0fqgax1 * localDW , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_HevP4OptimalController_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray *
mr_HevP4OptimalController_GetDWork ( const jaycrc4s13t * mdlrefDW ) ; extern
void mr_HevP4OptimalController_SetDWork ( jaycrc4s13t * mdlrefDW , const
mxArray * ssDW ) ; extern void
mr_HevP4OptimalController_RegisterSimStateChecksum ( SimStruct * S ) ; extern
mxArray * mr_HevP4OptimalController_GetSimStateDisallowedBlocks ( ) ; extern
const rtwCAPI_ModelMappingStaticInfo *
HevP4OptimalController_GetCAPIStaticMap ( void ) ; extern void jwsgs15ojz (
real_T * pi1krqudp5 , real_T * mf40pchx0k , crm0fqgax1 * localDW ) ; extern
void d43qhbwhjy ( crm0fqgax1 * localDW ) ; extern void fuersghdre (
crm0fqgax1 * localDW ) ; extern void bk11av3lhi ( ahlzrh5kyk * const
fkxyq0okc4 , crm0fqgax1 * localDW ) ; extern void bnwzenvtha ( mjs35mr2uq *
localB , crm0fqgax1 * localDW ) ; extern void HevP4OptimalController (
ahlzrh5kyk * const fkxyq0okc4 , const real_T * hlrxxhaw34 , const real_T *
ftel1beirh , const real_T * foteanntw2 , const real_T * erfydbzfwg , const
real_T * iko3cz1vuo , const real_T * jkzuoipy1i , const real_T * ebwg4ra50u ,
real_T * pi1krqudp5 , real_T * mf40pchx0k , real_T * noaictfmzt , real_T *
nbhjkcvfrt , real_T * gq3n00vyki , real_T * hr2f244jof , real_T * mlldgqnhed
, real_T * kb2gv350fg , real_T * jopc20jwhx , mjs35mr2uq * localB ,
crm0fqgax1 * localDW ) ; extern void HevP4OptimalControllerTID1 ( mjs35mr2uq
* localB ) ; extern void ioun3a0d3c ( ahlzrh5kyk * const fkxyq0okc4 ) ;
#endif
