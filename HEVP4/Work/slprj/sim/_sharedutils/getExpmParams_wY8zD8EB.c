#include "rtwtypes.h"
#include "getExpmParams_wY8zD8EB.h"
#include "norm_doJDoZY6.h"
#include "mwmathutil.h"
#include <emmintrin.h>
#include "log2_88lh625s.h"
#include <math.h>

void getExpmParams_wY8zD8EB(const real_T A[4], real_T A2[4], real_T A4[4],
  real_T A6[4], int32_T *m, real_T *s)
{
  __m128d tmp;
  __m128d tmp_e;
  __m128d tmp_i;
  __m128d tmp_p;
  real_T T[4];
  real_T aBuffer[4];
  real_T aBuffer_p[4];
  real_T y[4];
  real_T a;
  real_T aBuffer_e;
  real_T aBuffer_i;
  real_T a_p;
  real_T d6;
  real_T eta1;
  real_T y_e;
  real_T y_i;
  real_T y_m;
  real_T y_p;
  int32_T b_s;
  int32_T i;
  boolean_T guard1;
  boolean_T guard2;
  boolean_T guard3;
  boolean_T guard4;
  *s = 0.0;
  for (i = 0; i < 2; i++) {
    A2[i << 1] = A[(i << 1) + 1] * A[2] + A[i << 1] * A[0];
    A2[(i << 1) + 1] = A[(i << 1) + 1] * A[3] + A[i << 1] * A[1];
  }

  for (i = 0; i <= 0; i += 2) {
    tmp = _mm_loadu_pd(&A2[i + 2]);
    tmp = _mm_mul_pd(tmp, _mm_set1_pd(A2[1]));
    tmp_p = _mm_loadu_pd(&A2[i]);
    tmp_p = _mm_mul_pd(tmp_p, _mm_set1_pd(A2[0]));
    tmp = _mm_add_pd(tmp, tmp_p);
    _mm_storeu_pd(&A4[i], tmp);
    tmp_p = _mm_loadu_pd(&A2[i + 2]);
    tmp_p = _mm_mul_pd(tmp_p, _mm_set1_pd(A2[3]));
    tmp_e = _mm_loadu_pd(&A2[i]);
    tmp_e = _mm_mul_pd(tmp_e, _mm_set1_pd(A2[2]));
    tmp_p = _mm_add_pd(tmp_p, tmp_e);
    _mm_storeu_pd(&A4[i + 2], tmp_p);
    tmp_e = _mm_mul_pd(tmp_p, _mm_set1_pd(A2[1]));
    tmp_i = _mm_mul_pd(tmp, _mm_set1_pd(A2[0]));
    _mm_storeu_pd(&A6[i], _mm_add_pd(tmp_e, tmp_i));
    tmp_p = _mm_mul_pd(tmp_p, _mm_set1_pd(A2[3]));
    tmp = _mm_mul_pd(tmp, _mm_set1_pd(A2[2]));
    _mm_storeu_pd(&A6[i + 2], _mm_add_pd(tmp_p, tmp));
  }

  d6 = muDoubleScalarPower(norm_doJDoZY6(A6), 0.16666666666666666);
  eta1 = muDoubleScalarMax(muDoubleScalarPower(norm_doJDoZY6(A4), 0.25), d6);
  guard1 = false;
  guard2 = false;
  guard3 = false;
  guard4 = false;
  if (eta1 <= 0.01495585217958292) {
    y[0] = 0.19285012468241128 * muDoubleScalarAbs(A[0]);
    y[1] = 0.19285012468241128 * muDoubleScalarAbs(A[1]);
    y[2] = 0.19285012468241128 * muDoubleScalarAbs(A[2]);
    y_p = 0.19285012468241128 * muDoubleScalarAbs(A[3]);
    y[3] = y_p;
    for (i = 0; i < 2; i++) {
      aBuffer[i << 1] = y[(i << 1) + 1] * y[2] + y[i << 1] * y[0];
      aBuffer[(i << 1) + 1] = y[(i << 1) + 1] * y_p + y[i << 1] * y[1];
    }

    y_e = y[2];
    y_i = y[0];
    y_m = y[1];
    for (i = 0; i < 2; i++) {
      aBuffer_p[i << 1] = aBuffer[(i << 1) + 1] * aBuffer[2] + aBuffer[i << 1] *
        aBuffer[0];
      y[i << 1] = aBuffer[(i << 1) + 1] * y_e + aBuffer[i << 1] * y_i;
      aBuffer_p[(i << 1) + 1] = aBuffer[(i << 1) + 1] * aBuffer[3] + aBuffer[i <<
        1] * aBuffer[1];
      y[(i << 1) + 1] = aBuffer[(i << 1) + 1] * y_p + aBuffer[i << 1] * y_m;
    }

    y_p = y[2];
    y_e = y[0];
    y_i = y[3];
    y_m = y[1];
    for (i = 0; i < 2; i++) {
      aBuffer_e = aBuffer_p[(i << 1) + 1];
      aBuffer_i = aBuffer_p[i << 1];
      y[i << 1] = aBuffer_e * y_p + aBuffer_i * y_e;
      y[(i << 1) + 1] = aBuffer_e * y_i + aBuffer_i * y_m;
    }

    if (muDoubleScalarMax(muDoubleScalarCeil(log2_88lh625s(norm_doJDoZY6(y) /
           norm_doJDoZY6(A) * 2.0 / 2.2204460492503131E-16) / 6.0), 0.0) == 0.0)
    {
      *m = 3;
    } else {
      guard4 = true;
    }
  } else {
    guard4 = true;
  }

  if (guard4) {
    if (eta1 <= 0.253939833006323) {
      y[0] = 0.12321872304378752 * muDoubleScalarAbs(A[0]);
      y[1] = 0.12321872304378752 * muDoubleScalarAbs(A[1]);
      y[2] = 0.12321872304378752 * muDoubleScalarAbs(A[2]);
      y_p = 0.12321872304378752 * muDoubleScalarAbs(A[3]);
      y[3] = y_p;
      for (i = 0; i < 2; i++) {
        aBuffer[i << 1] = y[(i << 1) + 1] * y[2] + y[i << 1] * y[0];
        aBuffer[(i << 1) + 1] = y[(i << 1) + 1] * y_p + y[i << 1] * y[1];
      }

      for (i = 0; i <= 0; i += 2) {
        tmp = _mm_loadu_pd(&y[i + 2]);
        tmp_p = _mm_mul_pd(tmp, _mm_set1_pd(aBuffer[1]));
        tmp_e = _mm_loadu_pd(&y[i]);
        tmp_i = _mm_mul_pd(tmp_e, _mm_set1_pd(aBuffer[0]));
        _mm_storeu_pd(&aBuffer_p[i], _mm_add_pd(tmp_p, tmp_i));
        tmp = _mm_mul_pd(tmp, _mm_set1_pd(aBuffer[3]));
        tmp_p = _mm_mul_pd(tmp_e, _mm_set1_pd(aBuffer[2]));
        _mm_storeu_pd(&aBuffer_p[i + 2], _mm_add_pd(tmp, tmp_p));
        tmp = _mm_loadu_pd(&aBuffer[i + 2]);
        tmp = _mm_mul_pd(tmp, _mm_set1_pd(aBuffer[1]));
        tmp_p = _mm_loadu_pd(&aBuffer[i]);
        tmp_p = _mm_mul_pd(tmp_p, _mm_set1_pd(aBuffer[0]));
        _mm_storeu_pd(&y[i], _mm_add_pd(tmp, tmp_p));
        tmp = _mm_loadu_pd(&aBuffer[i + 2]);
        tmp = _mm_mul_pd(tmp, _mm_set1_pd(aBuffer[3]));
        tmp_p = _mm_loadu_pd(&aBuffer[i]);
        tmp_p = _mm_mul_pd(tmp_p, _mm_set1_pd(aBuffer[2]));
        _mm_storeu_pd(&y[i + 2], _mm_add_pd(tmp, tmp_p));
      }

      a = aBuffer_p[2];
      a_p = aBuffer_p[0];
      y_i = aBuffer_p[3];
      y_m = aBuffer_p[1];
      for (i = 0; i < 2; i++) {
        y_p = y[(i << 1) + 1] * y[2] + y[i << 1] * y[0];
        y_e = y[(i << 1) + 1] * y[3] + y[i << 1] * y[1];
        aBuffer_p[i << 1] = y_e * a + y_p * a_p;
        aBuffer_p[(i << 1) + 1] = y_e * y_i + y_p * y_m;
      }

      if (muDoubleScalarMax(muDoubleScalarCeil(log2_88lh625s(norm_doJDoZY6
             (aBuffer_p) / norm_doJDoZY6(A) * 2.0 / 2.2204460492503131E-16) /
            10.0), 0.0) == 0.0) {
        *m = 5;
      } else {
        guard3 = true;
      }
    } else {
      guard3 = true;
    }
  }

  if (guard3) {
    for (i = 0; i < 2; i++) {
      y[i << 1] = A4[(i << 1) + 1] * A4[2] + A4[i << 1] * A4[0];
      y[(i << 1) + 1] = A4[(i << 1) + 1] * A4[3] + A4[i << 1] * A4[1];
    }

    eta1 = muDoubleScalarPower(norm_doJDoZY6(y), 0.125);
    d6 = muDoubleScalarMax(d6, eta1);
    if (d6 <= 0.95041789961629319) {
      y[0] = 0.090475336558796943 * muDoubleScalarAbs(A[0]);
      y[1] = 0.090475336558796943 * muDoubleScalarAbs(A[1]);
      y[2] = 0.090475336558796943 * muDoubleScalarAbs(A[2]);
      y_p = 0.090475336558796943 * muDoubleScalarAbs(A[3]);
      y[3] = y_p;
      for (i = 0; i < 2; i++) {
        aBuffer[i << 1] = y[(i << 1) + 1] * y[2] + y[i << 1] * y[0];
        aBuffer[(i << 1) + 1] = y[(i << 1) + 1] * y_p + y[i << 1] * y[1];
      }

      y_e = y[2];
      y_i = y[0];
      y_m = y[1];
      for (i = 0; i < 2; i++) {
        y[i << 1] = aBuffer[(i << 1) + 1] * y_e + aBuffer[i << 1] * y_i;
        aBuffer_p[i << 1] = aBuffer[(i << 1) + 1] * aBuffer[2] + aBuffer[i << 1]
          * aBuffer[0];
        y[(i << 1) + 1] = aBuffer[(i << 1) + 1] * y_p + aBuffer[i << 1] * y_m;
        aBuffer_p[(i << 1) + 1] = aBuffer[(i << 1) + 1] * aBuffer[3] + aBuffer[i
          << 1] * aBuffer[1];
      }

      y_p = y[2];
      y_e = y[0];
      y_i = y[3];
      y_m = y[1];
      for (i = 0; i < 2; i++) {
        aBuffer[i << 1] = aBuffer_p[(i << 1) + 1] * aBuffer_p[2] + aBuffer_p[i <<
          1] * aBuffer_p[0];
        y[i << 1] = aBuffer_p[(i << 1) + 1] * y_p + aBuffer_p[i << 1] * y_e;
        aBuffer[(i << 1) + 1] = aBuffer_p[(i << 1) + 1] * aBuffer_p[3] +
          aBuffer_p[i << 1] * aBuffer_p[1];
        y[(i << 1) + 1] = aBuffer_p[(i << 1) + 1] * y_i + aBuffer_p[i << 1] *
          y_m;
      }

      y_p = y[2];
      y_e = y[0];
      y_i = y[3];
      y_m = y[1];
      for (i = 0; i < 2; i++) {
        a = aBuffer[(i << 1) + 1];
        a_p = aBuffer[i << 1];
        y[i << 1] = a * y_p + a_p * y_e;
        y[(i << 1) + 1] = a * y_i + a_p * y_m;
      }

      if (muDoubleScalarMax(muDoubleScalarCeil(log2_88lh625s(norm_doJDoZY6(y) /
             norm_doJDoZY6(A) * 2.0 / 2.2204460492503131E-16) / 14.0), 0.0) ==
          0.0) {
        *m = 7;
      } else {
        guard2 = true;
      }
    } else {
      guard2 = true;
    }
  }

  if (guard2) {
    if (d6 <= 2.097847961257068) {
      y[0] = 0.071467735648795785 * muDoubleScalarAbs(A[0]);
      y[1] = 0.071467735648795785 * muDoubleScalarAbs(A[1]);
      y[2] = 0.071467735648795785 * muDoubleScalarAbs(A[2]);
      y_p = 0.071467735648795785 * muDoubleScalarAbs(A[3]);
      y[3] = y_p;
      for (i = 0; i < 2; i++) {
        aBuffer[i << 1] = y[(i << 1) + 1] * y[2] + y[i << 1] * y[0];
        aBuffer[(i << 1) + 1] = y[(i << 1) + 1] * y_p + y[i << 1] * y[1];
      }

      for (i = 0; i <= 0; i += 2) {
        tmp = _mm_loadu_pd(&y[i + 2]);
        tmp_p = _mm_mul_pd(tmp, _mm_set1_pd(aBuffer[1]));
        tmp_e = _mm_loadu_pd(&y[i]);
        tmp_i = _mm_mul_pd(tmp_e, _mm_set1_pd(aBuffer[0]));
        _mm_storeu_pd(&aBuffer_p[i], _mm_add_pd(tmp_p, tmp_i));
        tmp = _mm_mul_pd(tmp, _mm_set1_pd(aBuffer[3]));
        tmp_p = _mm_mul_pd(tmp_e, _mm_set1_pd(aBuffer[2]));
        _mm_storeu_pd(&aBuffer_p[i + 2], _mm_add_pd(tmp, tmp_p));
        tmp = _mm_loadu_pd(&aBuffer[i + 2]);
        tmp = _mm_mul_pd(tmp, _mm_set1_pd(aBuffer[1]));
        tmp_p = _mm_loadu_pd(&aBuffer[i]);
        tmp_p = _mm_mul_pd(tmp_p, _mm_set1_pd(aBuffer[0]));
        _mm_storeu_pd(&y[i], _mm_add_pd(tmp, tmp_p));
        tmp = _mm_loadu_pd(&aBuffer[i + 2]);
        tmp = _mm_mul_pd(tmp, _mm_set1_pd(aBuffer[3]));
        tmp_p = _mm_loadu_pd(&aBuffer[i]);
        tmp_p = _mm_mul_pd(tmp_p, _mm_set1_pd(aBuffer[2]));
        _mm_storeu_pd(&y[i + 2], _mm_add_pd(tmp, tmp_p));
      }

      for (i = 0; i < 2; i++) {
        aBuffer[i << 1] = y[(i << 1) + 1] * y[2] + y[i << 1] * y[0];
        aBuffer[(i << 1) + 1] = y[(i << 1) + 1] * y[3] + y[i << 1] * y[1];
      }

      a = aBuffer_p[2];
      a_p = aBuffer_p[0];
      y_i = aBuffer_p[3];
      y_m = aBuffer_p[1];
      for (i = 0; i < 2; i++) {
        aBuffer_e = aBuffer[(i << 1) + 1] * aBuffer[2] + aBuffer[i << 1] *
          aBuffer[0];
        aBuffer_i = aBuffer[(i << 1) + 1] * aBuffer[3] + aBuffer[i << 1] *
          aBuffer[1];
        aBuffer_p[i << 1] = aBuffer_i * a + aBuffer_e * a_p;
        aBuffer_p[(i << 1) + 1] = aBuffer_i * y_i + aBuffer_e * y_m;
      }

      if (muDoubleScalarMax(muDoubleScalarCeil(log2_88lh625s(norm_doJDoZY6
             (aBuffer_p) / norm_doJDoZY6(A) * 2.0 / 2.2204460492503131E-16) /
            18.0), 0.0) == 0.0) {
        *m = 9;
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }
  }

  if (guard1) {
    aBuffer_e = A4[2];
    aBuffer_i = A4[0];
    y_p = A4[3];
    y_e = A4[1];
    for (i = 0; i < 2; i++) {
      a = A6[(i << 1) + 1];
      a_p = A6[i << 1];
      y[i << 1] = a * aBuffer_e + a_p * aBuffer_i;
      y[(i << 1) + 1] = a * y_p + a_p * y_e;
    }

    *s = muDoubleScalarMax(muDoubleScalarCeil(log2_88lh625s(muDoubleScalarMin(d6,
      muDoubleScalarMax(eta1, muDoubleScalarPower(norm_doJDoZY6(y), 0.1))) /
      5.3719203511481517)), 0.0);
    d6 = muDoubleScalarPower(2.0, *s);
    eta1 = A[0] / d6;
    T[0] = eta1;
    y[0] = 0.05031554467093536 * muDoubleScalarAbs(eta1);
    eta1 = A[1] / d6;
    T[1] = eta1;
    y[1] = 0.05031554467093536 * muDoubleScalarAbs(eta1);
    eta1 = A[2] / d6;
    T[2] = eta1;
    y[2] = 0.05031554467093536 * muDoubleScalarAbs(eta1);
    eta1 = A[3] / d6;
    T[3] = eta1;
    y_p = 0.05031554467093536 * muDoubleScalarAbs(eta1);
    y[3] = y_p;
    for (i = 0; i < 2; i++) {
      aBuffer[i << 1] = y[(i << 1) + 1] * y[2] + y[i << 1] * y[0];
      aBuffer[(i << 1) + 1] = y[(i << 1) + 1] * y_p + y[i << 1] * y[1];
    }

    y_e = y[2];
    y_i = y[0];
    y_m = y[1];
    for (i = 0; i < 2; i++) {
      aBuffer_p[i << 1] = aBuffer[(i << 1) + 1] * aBuffer[2] + aBuffer[i << 1] *
        aBuffer[0];
      y[i << 1] = aBuffer[(i << 1) + 1] * y_e + aBuffer[i << 1] * y_i;
      aBuffer_p[(i << 1) + 1] = aBuffer[(i << 1) + 1] * aBuffer[3] + aBuffer[i <<
        1] * aBuffer[1];
      y[(i << 1) + 1] = aBuffer[(i << 1) + 1] * y_p + aBuffer[i << 1] * y_m;
    }

    for (i = 0; i < 2; i++) {
      aBuffer[i << 1] = aBuffer_p[(i << 1) + 1] * aBuffer_p[2] + aBuffer_p[i <<
        1] * aBuffer_p[0];
      aBuffer[(i << 1) + 1] = aBuffer_p[(i << 1) + 1] * aBuffer_p[3] +
        aBuffer_p[i << 1] * aBuffer_p[1];
    }

    d6 = y[2];
    eta1 = y[0];
    y_p = y[3];
    y_e = y[1];
    for (i = 0; i < 2; i++) {
      aBuffer_p[i << 1] = aBuffer[(i << 1) + 1] * aBuffer[2] + aBuffer[i << 1] *
        aBuffer[0];
      y[i << 1] = aBuffer[(i << 1) + 1] * d6 + aBuffer[i << 1] * eta1;
      aBuffer_p[(i << 1) + 1] = aBuffer[(i << 1) + 1] * aBuffer[3] + aBuffer[i <<
        1] * aBuffer[1];
      y[(i << 1) + 1] = aBuffer[(i << 1) + 1] * y_p + aBuffer[i << 1] * y_e;
    }

    d6 = y[2];
    eta1 = y[0];
    y_p = y[3];
    y_e = y[1];
    for (i = 0; i < 2; i++) {
      aBuffer_e = aBuffer_p[(i << 1) + 1];
      aBuffer_i = aBuffer_p[i << 1];
      y[i << 1] = aBuffer_e * d6 + aBuffer_i * eta1;
      y[(i << 1) + 1] = aBuffer_e * y_p + aBuffer_i * y_e;
    }

    *s += muDoubleScalarMax(muDoubleScalarCeil(log2_88lh625s(norm_doJDoZY6(y) /
      norm_doJDoZY6(T) * 2.0 / 2.2204460492503131E-16) / 26.0), 0.0);
    if (muDoubleScalarIsInf(*s)) {
      d6 = norm_doJDoZY6(A) / 5.3719203511481517;
      if ((!muDoubleScalarIsInf(d6)) && (!muDoubleScalarIsNaN(d6))) {
        d6 = frexp(d6, &b_s);
      } else {
        b_s = 0;
      }

      *s = b_s;
      if (d6 == 0.5) {
        *s = (real_T)b_s - 1.0;
      }
    }

    *m = 13;
  }
}
