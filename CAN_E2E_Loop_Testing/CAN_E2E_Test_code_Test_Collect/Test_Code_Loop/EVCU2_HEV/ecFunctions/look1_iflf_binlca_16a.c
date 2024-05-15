/*
 * File: look1_iflf_binlca_16a.c
 *
 * Code generated for Simulink model 'OMNR_ac'.
 *
 * Model version                  : 9.192
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sun Apr  7 12:57:20 2024
 */

#include "rtwtypes.h"
#include "look1_iflf_binlca_16a.h"

float32 look1_iflf_binlca_16a(float32 u0, const float32 bp0[], const float32
    table[], uint32 maxIndex)
{
    float32 frac;
    float32 y;
    float32 yL_0d0;
    uint32 bpIdx;
    uint32 iLeft;
    uint32 iRght;

    /* Column-major Lookup 1-D
       Canonical function name: look1_iflf_binlca
       Search method: 'binary'
       Use previous index: 'off'
       Interpolation method: 'Linear point-slope'
       Extrapolation method: 'Clip'
       Use last breakpoint for index at or above upper limit: 'on'
       Remove protection against out-of-range input in generated code: 'off'
     */
    /* Prelookup - Index and Fraction
       Index Search method: 'binary'
       Extrapolation method: 'Clip'
       Use previous index: 'off'
       Use last breakpoint for index at or above upper limit: 'on'
       Remove protection against out-of-range input in generated code: 'off'
     */
    if (u0 <= bp0[0U])
    {
        iLeft = 0U;
        frac = 0.0F;
    }
    else if (u0 < bp0[maxIndex])
    {
        /* Binary Search */
        bpIdx = (maxIndex >> 1U);
        iLeft = 0U;
        iRght = maxIndex;
        while ((iRght - iLeft) > 1U)
        {
            if (u0 < bp0[bpIdx])
            {
                iRght = bpIdx;
            }
            else
            {
                iLeft = bpIdx;
            }

            bpIdx = ((iRght + iLeft) >> 1U);
        }

        frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
    }
    else
    {
        iLeft = maxIndex;
        frac = 0.0F;
    }

    /* Column-major Interpolation 1-D
       Canonical function name: intrp1d_fu32fla
       Interpolation method: 'Linear point-slope'
       Use last breakpoint for index at or above upper limit: 'on'
       Overflow mode: 'wrapping'
     */
    if (iLeft == maxIndex)
    {
        y = table[iLeft];
    }
    else
    {
        yL_0d0 = table[iLeft];
        y = ((table[iLeft + 1U] - yL_0d0) * frac) + yL_0d0;
    }

    return y;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
