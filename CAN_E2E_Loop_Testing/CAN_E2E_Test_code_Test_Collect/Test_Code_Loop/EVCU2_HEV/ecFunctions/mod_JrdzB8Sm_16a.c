/*
 * File: mod_JrdzB8Sm_16a.c
 *
 * Code generated for Simulink model 'CSMR_ac'.
 *
 * Model version                  : 9.412
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:19:27 2024
 */

#include "rtwtypes.h"
#include <math.h>
#include "mod_JrdzB8Sm_16a.h"

/* Function for Chart: '<S13>/Dtrmn_Set_Spd' */
float32 mod_JrdzB8Sm_16a(float32 x, float32 y)
{
    float32 q;
    float32 r;
    boolean rEQ0;
    r = x;
    if (y == 0.0F)
    {
        if (x == 0.0F)
        {
            r = y;
        }
    }
    else if (x == 0.0F)
    {
        r = 0.0F / y;
    }
    else
    {
        r = fmodf(x, y);
        rEQ0 = (r == 0.0F);
        if (!rEQ0)
        {
            if (y > floorf(y))
            {
                q = fabsf(x / y);
                rEQ0 = (fabsf(q - floorf(q + 0.5F)) <= (1.1920929E-7F * q));
            }
        }

        if (rEQ0)
        {
            r = 0.0F;
        }
        else
        {
            if ((x < 0.0F) != (y < 0.0F))
            {
                r += y;
            }
        }
    }

    return r;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
