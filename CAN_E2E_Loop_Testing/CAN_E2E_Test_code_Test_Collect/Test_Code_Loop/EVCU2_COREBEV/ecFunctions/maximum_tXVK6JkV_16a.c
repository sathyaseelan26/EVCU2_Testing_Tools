/*
 * File: maximum_tXVK6JkV_16a.c
 *
 * Code generated for Simulink model 'PMPR_FUNC_COREBEV_ac'.
 *
 * Model version                  : 9.12
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Mon Jan  9 18:35:41 2023
 */

#include "rtwtypes.h"
#include "maximum_tXVK6JkV_16a.h"

/* Function for MATLAB Function: '<S397>/LB_Solver' */
float32 maximum_tXVK6JkV_16a(const float32 x[1536])
{
    sint32 k;
    float32 ex;
    float32 tmp;
    ex = x[0];
    for (k = 0; k < 1535; k++)
    {
        tmp = x[k + 1];
        if (ex < tmp)
        {
            ex = tmp;
        }
    }

    return ex;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
