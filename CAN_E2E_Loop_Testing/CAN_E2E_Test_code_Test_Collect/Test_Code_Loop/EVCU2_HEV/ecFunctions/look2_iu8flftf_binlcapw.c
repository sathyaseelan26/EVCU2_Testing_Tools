/*
 * File: look2_iu8flftf_binlcapw.c
 *
 * Code generated for Simulink model 'WTAR_ac'.
 *
 * Model version                  : 9.323
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 20:12:40 2024
 */

#include "rtwtypes.h"
#include "look2_iu8flftf_binlcapw.h"

float32 look2_iu8flftf_binlcapw(uint8 u0, float32 u1, const uint8 bp0[],
    const float32 bp1[], const float32 table[], const uint32 maxIndex[],
    uint32 stride)
{
    float32 fractions[2];
    float32 frac;
    float32 y;
    float32 yL_0d0;
    uint32 bpIndices[2];
    uint32 bpIdx;
    uint32 iLeft;
    uint32 iRght;
    uint8 bpLeftVar;

    /* Column-major Lookup 2-D
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
    else if (u0 < bp0[maxIndex[0U]])
    {
        /* Binary Search */
        bpIdx = (maxIndex[0U] >> 1ULL);
        iLeft = 0U;
        iRght = maxIndex[0U];
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

            bpIdx = ((iRght + iLeft) >> 1ULL);
        }

        bpLeftVar = bp0[iLeft];
        frac = ((float32)((uint8)(((uint32)u0) - ((uint32)bpLeftVar)))) /
            ((float32)((uint8)(((uint32)bp0[iLeft + 1U]) - ((uint32)
                bpLeftVar))));
    }
    else
    {
        iLeft = maxIndex[0U];
        frac = 0.0F;
    }

    fractions[0U] = frac;
    bpIndices[0U] = iLeft;

    /* Prelookup - Index and Fraction
       Index Search method: 'binary'
       Extrapolation method: 'Clip'
       Use previous index: 'off'
       Use last breakpoint for index at or above upper limit: 'on'
       Remove protection against out-of-range input in generated code: 'off'
     */
    if (u1 <= bp1[0U])
    {
        iLeft = 0U;
        frac = 0.0F;
    }
    else if (u1 < bp1[maxIndex[1U]])
    {
        /* Binary Search */
        bpIdx = (maxIndex[1U] >> 1ULL);
        iLeft = 0U;
        iRght = maxIndex[1U];
        while ((iRght - iLeft) > 1U)
        {
            if (u1 < bp1[bpIdx])
            {
                iRght = bpIdx;
            }
            else
            {
                iLeft = bpIdx;
            }

            bpIdx = ((iRght + iLeft) >> 1ULL);
        }

        frac = (u1 - bp1[iLeft]) / (bp1[iLeft + 1U] - bp1[iLeft]);
    }
    else
    {
        iLeft = maxIndex[1U];
        frac = 0.0F;
    }

    /* Column-major Interpolation 2-D
       Interpolation method: 'Linear point-slope'
       Use last breakpoint for index at or above upper limit: 'on'
       Overflow mode: 'portable wrapping'
     */
    bpIdx = (iLeft * stride) + bpIndices[0U];
    if (bpIndices[0U] == maxIndex[0U])
    {
        y = table[bpIdx];
    }
    else
    {
        yL_0d0 = table[bpIdx];
        y = ((table[bpIdx + 1U] - yL_0d0) * fractions[0U]) + yL_0d0;
    }

    if (iLeft == maxIndex[1U])
    {
    }
    else
    {
        bpIdx += stride;
        if (bpIndices[0U] == maxIndex[0U])
        {
            yL_0d0 = table[bpIdx];
        }
        else
        {
            yL_0d0 = table[bpIdx];
            yL_0d0 += (table[bpIdx + 1U] - yL_0d0) * fractions[0U];
        }

        y += (yL_0d0 - y) * frac;
    }

    return y;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
