/*
 * File: intrp2d_fu32fla_16a.c
 *
 * Code generated for Simulink model 'OHSR_ac'.
 *
 * Model version                  : 9.144
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 14:39:20 2024
 */

#include "rtwtypes.h"
#include "intrp2d_fu32fla_16a.h"

float32 intrp2d_fu32fla_16a(const uint32 bpIndex[], const float32 frac[],
    const float32 table[], const uint32 stride, const uint32 maxIndex[])
{
    float32 y;
    float32 yL_0d0;
    uint32 offset_1d;

    /* Column-major Interpolation 2-D
       Canonical function name: intrp2d_fu32fla
       Interpolation method: 'Linear point-slope'
       Use last breakpoint for index at or above upper limit: 'on'
       Overflow mode: 'wrapping'
     */
    offset_1d = (bpIndex[1U] * stride) + bpIndex[0U];
    if (bpIndex[0U] == maxIndex[0U])
    {
        y = table[offset_1d];
    }
    else
    {
        yL_0d0 = table[offset_1d];
        y = ((table[offset_1d + 1U] - yL_0d0) * frac[0U]) + yL_0d0;
    }

    if (bpIndex[1U] == maxIndex[1U])
    {
    }
    else
    {
        offset_1d += stride;
        if (bpIndex[0U] == maxIndex[0U])
        {
            yL_0d0 = table[offset_1d];
        }
        else
        {
            yL_0d0 = table[offset_1d];
            yL_0d0 += (table[offset_1d + 1U] - yL_0d0) * frac[0U];
        }

        y += (yL_0d0 - y) * frac[1U];
    }

    return y;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
