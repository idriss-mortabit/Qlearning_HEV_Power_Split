#include "intrp1d_la_pw.h"
#include "rtwtypes.h"

real_T intrp1d_la_pw(uint32_T bpIndex, real_T frac, const real_T table[],
                     uint32_T maxIndex)
{
  real_T y;
  real_T yL_0d0;
  if (bpIndex == maxIndex) {
    y = table[bpIndex];
  } else {
    yL_0d0 = table[bpIndex];
    y = (table[bpIndex + 1U] - yL_0d0) * frac + yL_0d0;
  }

  return y;
}
