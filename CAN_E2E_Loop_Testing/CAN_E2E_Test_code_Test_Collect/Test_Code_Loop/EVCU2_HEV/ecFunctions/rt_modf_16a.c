/*
 * File: rt_modf_16a.c
 *
 * Code generated for Simulink model 'PDTR_ac'.
 *
 * Model version                  : 9.153
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 17:51:10 2024
 */

#include "rtwtypes.h"
#include <float.h>
#include <math.h>
#include "rt_modf_16a.h"

float32 rt_modf_16a(float32 u0, float32 u1)
{
    float32 q;
    float32 y;
    boolean yEq;
    y = u0;
    if (u1 == 0.0F)
    {
        if (u0 == 0.0F)
        {
            y = u1;
        }
    }
    else if (u0 == 0.0F)
    {
        y = 0.0F / u1;
    }
    else
    {
        y = fmodf(u0, u1);
        yEq = (y == 0.0F);
        if ((!yEq) && (u1 > floorf(u1)))
        {
            q = fabsf(u0 / u1);
            yEq = (fabsf(q - floorf(q + 0.5F)) <= (FLT_EPSILON * q));
        }

        if (yEq)
        {
            y = 0.0F;
        }
        else
        {
            if ((u0 < 0.0F) != (u1 < 0.0F))
            {
                y += u1;
            }
        }
    }

    return y;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
