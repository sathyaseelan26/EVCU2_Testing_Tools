/*
 * File: plook_u32ff_binca_16a.c
 *
 * Code generated for Simulink model 'OHSR_ac'.
 *
 * Model version                  : 9.144
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 14:39:20 2024
 */

#include "rtwtypes.h"
#include "binsearch_u32f_16a.h"
#include "plook_u32ff_binca_16a.h"

uint32 plook_u32ff_binca_16a(float32 u, const float32 bp[], uint32
    maxIndex, float32 *fraction)
{
    uint32 bpIndex;

    /* Prelookup - Index and Fraction
       Index Search method: 'binary'
       Extrapolation method: 'Clip'
       Use previous index: 'off'
       Use last breakpoint for index at or above upper limit: 'on'
       Remove protection against out-of-range input in generated code: 'off'
     */
    if (u <= bp[0U])
    {
        bpIndex = 0U;
        *fraction = 0.0F;
    }
    else if (u < bp[maxIndex])
    {
        bpIndex = binsearch_u32f_16a(u, bp, maxIndex >> 1U, maxIndex);
        *fraction = (u - bp[bpIndex]) / (bp[bpIndex + 1U] - bp[bpIndex]);
    }
    else
    {
        bpIndex = maxIndex;
        *fraction = 0.0F;
    }

    return bpIndex;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
