/*
 * File: binsearch_u32f_16a.c
 *
 * Code generated for Simulink model 'OHSR_ac'.
 *
 * Model version                  : 9.144
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 14:39:20 2024
 */

#include "rtwtypes.h"
#include "binsearch_u32f_16a.h"

uint32 binsearch_u32f_16a(float32 u, const float32 bp[], uint32 startIndex,
    uint32 maxIndex)
{
    uint32 bpIdx;
    uint32 bpIndex;
    uint32 iRght;

    /* Binary Search */
    bpIdx = startIndex;
    bpIndex = 0U;
    iRght = maxIndex;
    while ((iRght - bpIndex) > 1U)
    {
        if (u < bp[bpIdx])
        {
            iRght = bpIdx;
        }
        else
        {
            bpIndex = bpIdx;
        }

        bpIdx = ((iRght + bpIndex) >> 1U);
    }

    return bpIndex;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
