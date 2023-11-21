#include <string.h>
#ifdef MATLAB_MEX_FILE
#include "tmwtypes.h"
#else
#include "rtwtypes.h"
#endif
#include "engtrq_lib.h"
void MtrTrq_wrapper_Output_B_30_9 ( const real_T u1 , const real_T u2 , const
real_T u3 , const real_T u4 , const real_T u5 , const real_T u6 , real_T * y1
, real_T * y2 ) { MtrTrq ( ( real_T ) ( u1 ) , ( real_T ) ( u2 ) , ( real_T )
( u3 ) , ( real_T ) ( u4 ) , ( real_T ) ( u5 ) , ( real_T ) ( u6 ) , y1 , y2
) ; }
