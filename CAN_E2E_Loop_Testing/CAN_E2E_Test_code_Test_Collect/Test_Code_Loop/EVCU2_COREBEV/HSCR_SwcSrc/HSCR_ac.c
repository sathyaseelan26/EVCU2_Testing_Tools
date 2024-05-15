/*
 * File: HSCR_ac.c
 *
 * Code generated for Simulink model 'HSCR_ac'.
 *
 * Model version                  : 9.181
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:49:11 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "HSCR_ac.h"
#include "look1_iflf_binlca_16a.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_HSCR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(boolean, HSCR_VAR_INIT) HaHSCR_b_EnblEstdSpd[16] =
{
    0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by:
                                        * '<S89>/Calib'
                                        * '<S101>/Calib'
                                        * '<S114>/Calib'
                                        */

static volatile CONST(float32, HSCR_VAR_INIT) HaHSCR_t_NegSpdBlenderTimeStep[3] =
{
    0.0125F, 0.0125F, 0.0125F
} ;                                    /* Referenced by: '<S10>/Calib' */

static volatile CONST(float32, HSCR_VAR_INIT) HeHSCR_t_dT = 0.01F;/* Referenced by:
                                                                   * '<S87>/Calib'
                                                                   * '<S102>/Calib'
                                                                   * '<S115>/Calib'
                                                                   */
static volatile CONST(boolean, HSCR_VAR_INIT) KaHSCR_b_EnblMtrSpdDeadBand[3] =
{
    0, 0, 0
} ;                                    /* Referenced by: '<S20>/Calib' */

static volatile CONST(float32, HSCR_VAR_INIT) KaHSCR_n_NegSpdThld[3] =
{
    0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S21>/Calib' */

static volatile CONST(float32, HSCR_VAR_INIT) KaHSCR_n_PosSpdThld[3] =
{
    0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S22>/Calib' */

static volatile CONST(float32, HSCR_VAR_INIT) KaHSCR_t_NegSpdBlenderTime[3] =
{
    0.025F, 0.025F, 0.025F
} ;                                    /* Referenced by: '<S11>/Calib' */

static volatile CONST(float32, HSCR_VAR_INIT) KeHSCR_M_EstSpdBldrRstTh = 40.0F;/* Referenced by:
                                                                      * '<S91>/Calib'
                                                                      * '<S104>/Calib'
                                                                      * '<S117>/Calib'
                                                                      */
static volatile CONST(float32, HSCR_VAR_INIT) KeHSCR_M_EstSpdBldrTh_LSP = 44.0F;/* Referenced by:
                                                                      * '<S92>/Calib'
                                                                      * '<S105>/Calib'
                                                                      * '<S118>/Calib'
                                                                      */
static volatile CONST(boolean, HSCR_VAR_INIT) KeHSCR_b_ChsFrntMtrSpd_MtrA = 1;/* Referenced by: '<S12>/Calib' */
static volatile CONST(boolean, HSCR_VAR_INIT) KeHSCR_b_ChsFrntMtrSpd_MtrB = 0;/* Referenced by: '<S13>/Calib' */
static volatile CONST(boolean, HSCR_VAR_INIT) KeHSCR_b_ChsFrntMtrSpd_MtrC = 0;/* Referenced by: '<S14>/Calib' */
static volatile CONST(boolean, HSCR_VAR_INIT) KeHSCR_b_UseMtrA_EstSpd = 1;/* Referenced by: '<S93>/Calib' */
static volatile CONST(boolean, HSCR_VAR_INIT) KeHSCR_b_UseMtrB_EstSpd = 0;/* Referenced by: '<S106>/Calib' */
static volatile CONST(boolean, HSCR_VAR_INIT) KeHSCR_b_UseMtrC_EstSpd = 0;/* Referenced by: '<S119>/Calib' */
static volatile CONST(float32, HSCR_VAR_INIT) KeHSCR_dr_BlendFactorLD = -0.05F;/* Referenced by:
                                                                      * '<S94>/Calib'
                                                                      * '<S107>/Calib'
                                                                      * '<S120>/Calib'
                                                                      */
static volatile CONST(float32, HSCR_VAR_INIT) KeHSCR_dr_BlendFactorLU = 0.1F;/* Referenced by:
                                                                      * '<S95>/Calib'
                                                                      * '<S108>/Calib'
                                                                      * '<S121>/Calib'
                                                                      */
static volatile CONST(float32, HSCR_VAR_INIT) KeHSCR_t_TurnOffdelayTime = 0.1F;/* Referenced by:
                                                                      * '<S96>/Calib'
                                                                      * '<S109>/Calib'
                                                                      * '<S122>/Calib'
                                                                      */
static volatile CONST(float32, HSCR_VAR_INIT) KtHSCR_n_MtrASpdMax[7] =
{
    6000.0F, 6000.0F, 6400.0F, 6800.0F, 7600.0F, 8400.0F, 10000.0F
} ;                                    /* Referenced by: '<S129>/Vector' */

static volatile CONST(float32, HSCR_VAR_INIT) KtHSCR_n_MtrBSpdMax[7] =
{
    6000.0F, 6000.0F, 6400.0F, 6800.0F, 7600.0F, 8400.0F, 10000.0F
} ;                                    /* Referenced by: '<S130>/Vector' */

static volatile CONST(float32, HSCR_VAR_INIT) KtHSCR_n_MtrCSpdMax[7] =
{
    6000.0F, 6000.0F, 6400.0F, 6800.0F, 7600.0F, 8400.0F, 10000.0F
} ;                                    /* Referenced by: '<S131>/Vector' */

static volatile CONST(float32, HSCR_VAR_INIT) KxHSCR_n_MtrASpdMax[7] =
{
    -40.0F, -30.0F, -25.0F, -20.0F, -10.0F, 0.0F, 20.0F
} ;                                    /* Referenced by: '<S129>/Vector' */

static volatile CONST(float32, HSCR_VAR_INIT) KxHSCR_n_MtrBSpdMax[7] =
{
    -40.0F, -30.0F, -25.0F, -20.0F, -10.0F, 0.0F, 20.0F
} ;                                    /* Referenced by: '<S130>/Vector' */

static volatile CONST(float32, HSCR_VAR_INIT) KxHSCR_n_MtrCSpdMax[7] =
{
    -40.0F, -30.0F, -25.0F, -20.0F, -10.0F, 0.0F, 20.0F
} ;                                    /* Referenced by: '<S131>/Vector' */

#define STOP_SEC_CALIB_UNSPECIFIED_HSCR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_HSCR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(boolean, HSCR_VAR_INIT) VaHSCC_b_EnblBlndr[3];/* '<S7>/Logical' */
static VAR(float32, HSCR_VAR_INIT) VaHSCC_n_MtrSpdBlnd[3];/* '<S5>/Summation' */
static VAR(float32, HSCR_VAR_INIT) VaHSCC_n_MtrSpdHys[3];/* '<S7>/Switch' */
static VAR(float32, HSCR_VAR_INIT) VeHSCC_n_Min_MtrA_Spd;/* '<S127>/Summation1' */
static VAR(float32, HSCR_VAR_INIT) VeHSCC_n_Min_MtrB_Spd;/* '<S127>/Summation' */
static VAR(float32, HSCR_VAR_INIT) VeHSCC_n_Min_MtrC_Spd;/* '<S127>/Summation2' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_HSCR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_HSCR
#include "MemMap.h"

VAR(B_HSCR_ac_T, HSCR_VAR_INIT) HSCR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_HSCR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_HSCR
#include "MemMap.h"

VAR(DW_HSCR_ac_T, HSCR_VAR_INIT) HSCR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_HSCR
#include "MemMap.h"

static FUNC(void, HSCR_CODE_LOCAL) HSCR_ac_Motor_A_Forward(VAR(float32,
    AUTOMATIC) rtu_In1, P2VAR(float32, AUTOMATIC, HSCR_VAR_INIT) rty_Out1);
static FUNC(void, HSCR_CODE_LOCAL) HSCR_ac_Motor_A_Reverse(VAR(float32,
    AUTOMATIC) rtu_Raw, P2VAR(float32, AUTOMATIC, HSCR_VAR_INIT) rty_Rev);
static FUNC(void, HSCR_CODE_LOCAL) HSCR_ac_OPTL_1DAxis34ptsA(VAR(float32,
    AUTOMATIC) rtu_Input_value, CONST(float32, AUTOMATIC) rtu_DataArray[34],
    P2VAR(B_OPTL_1DAxis34ptsA_HSCR_ac_T, AUTOMATIC, HSCR_VAR_INIT) localB);
static FUNC(void, HSCR_CODE_LOCAL) HSCR_ac_OPTL_Dynamic1D_A1_Pts(VAR(float32,
    AUTOMATIC) rtu_Upper_Index, VAR(float32, AUTOMATIC) rtu_Lower_Index, CONST
    (float32, AUTOMATIC) rtu_X_ArrayData[34], P2VAR
    (B_OPTL_Dynamic1D_A1_Pts_HSCR_ac_T, AUTOMATIC, HSCR_VAR_INIT) localB);

/* Forward declaration for local functions */
static float32 HSCR_ac_frac(float32 Upper, float32 Lower, float32 Input);

/*
 * Output and update for action system:
 *    '<S25>/Motor_A_Forward'
 *    '<S26>/Motor_B_Forward'
 *    '<S27>/Motor_B_Forward'
 */
static FUNC(void, HSCR_CODE_LOCAL) HSCR_ac_Motor_A_Forward(VAR(float32,
    AUTOMATIC) rtu_In1, P2VAR(float32, AUTOMATIC, HSCR_VAR_INIT) rty_Out1)
{
    /* Gain: '<S49>/Gain' */
    *rty_Out1 = rtu_In1;
}

/*
 * Output and update for action system:
 *    '<S25>/Motor_A_Reverse'
 *    '<S26>/Motor_B_Reverse'
 *    '<S27>/Motor_B_Reverse'
 */
static FUNC(void, HSCR_CODE_LOCAL) HSCR_ac_Motor_A_Reverse(VAR(float32,
    AUTOMATIC) rtu_Raw, P2VAR(float32, AUTOMATIC, HSCR_VAR_INIT) rty_Rev)
{
    /* Product: '<S42>/Product' */
    *rty_Rev = -rtu_Raw;
}

/* Function for Chart: '<S43>/X_Data_and_Fractions' */
static float32 HSCR_ac_frac(float32 Upper, float32 Lower, float32 Input)
{
    /* Graphical Function 'frac': '<S50>:1' */
    /* Transition: '<S50>:122' */
    /* Transition: '<S50>:121' */
    return (Input - Lower) / (Upper - Lower);
}

/*
 * Output and update for atomic system:
 *    '<S25>/OPTL_1DAxis34ptsA'
 *    '<S26>/OPTL_1DAxis34ptsB'
 *    '<S27>/OPTL_1DAxis34ptsC'
 * Common block description:
 *   x.x
 */
static FUNC(void, HSCR_CODE_LOCAL) HSCR_ac_OPTL_1DAxis34ptsA(VAR(float32,
    AUTOMATIC) rtu_Input_value, CONST(float32, AUTOMATIC) rtu_DataArray[34],
    P2VAR(B_OPTL_1DAxis34ptsA_HSCR_ac_T, AUTOMATIC, HSCR_VAR_INIT) localB)
{
    /* Chart: '<S43>/X_Data_and_Fractions' */
    /* Gateway: OPTL_1DDynamicBinSearch34pts/X_Data_and_Fractions */
    /* During: OPTL_1DDynamicBinSearch34pts/X_Data_and_Fractions */
    /* Entry Internal: OPTL_1DDynamicBinSearch34pts/X_Data_and_Fractions */
    /* Transition: '<S50>:2' */
    if (rtu_Input_value >= rtu_DataArray[17])
    {
        /* Transition: '<S50>:3' */
        if (rtu_Input_value >= rtu_DataArray[25])
        {
            /* Transition: '<S50>:5' */
            if (rtu_Input_value >= rtu_DataArray[29])
            {
                /* Transition: '<S50>:7' */
                if (rtu_Input_value >= rtu_DataArray[31])
                {
                    /* Transition: '<S50>:9' */
                    if (rtu_Input_value >= rtu_DataArray[32])
                    {
                        /* Transition: '<S50>:11' */
                        if (rtu_Input_value >= rtu_DataArray[33])
                        {
                            /* Transition: '<S50>:250' */
                            localB->UpperIndex = 33.0F;
                            localB->LowerIndex = 32.0F;
                            localB->fra = HSCR_ac_frac(rtu_DataArray[33],
                                rtu_DataArray[32], rtu_DataArray[33]);

                            /* Transition: '<S50>:272' */
                        }
                        else
                        {
                            /* Transition: '<S50>:13' */
                            localB->UpperIndex = 33.0F;
                            localB->LowerIndex = 32.0F;
                            localB->fra = HSCR_ac_frac(rtu_DataArray[33],
                                rtu_DataArray[32], rtu_Input_value);
                        }
                    }
                    else
                    {
                        /* Transition: '<S50>:26' */
                        localB->UpperIndex = 32.0F;
                        localB->LowerIndex = 31.0F;
                        localB->fra = HSCR_ac_frac(rtu_DataArray[32],
                            rtu_DataArray[31], rtu_Input_value);

                        /* Transition: '<S50>:39' */
                        /* Transition: '<S50>:230' */
                    }
                }
                else
                {
                    /* Transition: '<S50>:24' */
                    if (rtu_Input_value >= rtu_DataArray[30])
                    {
                        /* Transition: '<S50>:12' */
                        localB->UpperIndex = 31.0F;
                        localB->LowerIndex = 30.0F;
                        localB->fra = HSCR_ac_frac(rtu_DataArray[31],
                            rtu_DataArray[30], rtu_Input_value);

                        /* Transition: '<S50>:29' */
                        /* Transition: '<S50>:14' */
                        /* Transition: '<S50>:39' */
                        /* Transition: '<S50>:230' */
                    }
                    else
                    {
                        /* Transition: '<S50>:15' */
                        /* Transition: '<S50>:27' */
                        localB->UpperIndex = 30.0F;
                        localB->LowerIndex = 29.0F;
                        localB->fra = HSCR_ac_frac(rtu_DataArray[30],
                            rtu_DataArray[29], rtu_Input_value);

                        /* Transition: '<S50>:14' */
                        /* Transition: '<S50>:39' */
                        /* Transition: '<S50>:230' */
                    }
                }
            }
            else
            {
                /* Transition: '<S50>:23' */
                if (rtu_Input_value >= rtu_DataArray[27])
                {
                    /* Transition: '<S50>:10' */
                    if (rtu_Input_value >= rtu_DataArray[28])
                    {
                        /* Transition: '<S50>:16' */
                        localB->UpperIndex = 29.0F;
                        localB->LowerIndex = 28.0F;
                        localB->fra = HSCR_ac_frac(rtu_DataArray[29],
                            rtu_DataArray[28], rtu_Input_value);

                        /* Transition: '<S50>:33' */
                    }
                    else
                    {
                        /* Transition: '<S50>:32' */
                        localB->UpperIndex = 28.0F;
                        localB->LowerIndex = 27.0F;
                        localB->fra = HSCR_ac_frac(rtu_DataArray[28],
                            rtu_DataArray[27], rtu_Input_value);

                        /* Transition: '<S50>:34' */
                    }
                }
                else
                {
                    /* Transition: '<S50>:30' */
                    if (rtu_Input_value >= rtu_DataArray[26])
                    {
                        /* Transition: '<S50>:31' */
                        localB->UpperIndex = 27.0F;
                        localB->LowerIndex = 26.0F;
                        localB->fra = HSCR_ac_frac(rtu_DataArray[27],
                            rtu_DataArray[26], rtu_Input_value);

                        /* Transition: '<S50>:37' */
                    }
                    else
                    {
                        /* Transition: '<S50>:36' */
                        localB->UpperIndex = 26.0F;
                        localB->LowerIndex = 25.0F;
                        localB->fra = HSCR_ac_frac(rtu_DataArray[26],
                            rtu_DataArray[25], rtu_Input_value);

                        /* Transition: '<S50>:17' */
                    }

                    /* Transition: '<S50>:35' */
                    /* Transition: '<S50>:34' */
                }

                /* Transition: '<S50>:28' */
                /* Transition: '<S50>:29' */
                /* Transition: '<S50>:14' */
                /* Transition: '<S50>:39' */
                /* Transition: '<S50>:230' */
            }

            /* Transition: '<S50>:53' */
            /* Transition: '<S50>:67' */
        }
        else
        {
            /* Transition: '<S50>:22' */
            if (rtu_Input_value >= rtu_DataArray[21])
            {
                /* Transition: '<S50>:8' */
                if (rtu_Input_value >= rtu_DataArray[23])
                {
                    /* Transition: '<S50>:42' */
                    if (rtu_Input_value >= rtu_DataArray[24])
                    {
                        /* Transition: '<S50>:45' */
                        localB->UpperIndex = 25.0F;
                        localB->LowerIndex = 24.0F;
                        localB->fra = HSCR_ac_frac(rtu_DataArray[25],
                            rtu_DataArray[24], rtu_Input_value);

                        /* Transition: '<S50>:47' */
                    }
                    else
                    {
                        /* Transition: '<S50>:46' */
                        localB->UpperIndex = 24.0F;
                        localB->LowerIndex = 23.0F;
                        localB->fra = HSCR_ac_frac(rtu_DataArray[24],
                            rtu_DataArray[23], rtu_Input_value);

                        /* Transition: '<S50>:48' */
                    }
                }
                else
                {
                    /* Transition: '<S50>:43' */
                    if (rtu_Input_value >= rtu_DataArray[22])
                    {
                        /* Transition: '<S50>:44' */
                        localB->UpperIndex = 23.0F;
                        localB->LowerIndex = 22.0F;
                        localB->fra = HSCR_ac_frac(rtu_DataArray[23],
                            rtu_DataArray[22], rtu_Input_value);

                        /* Transition: '<S50>:40' */
                    }
                    else
                    {
                        /* Transition: '<S50>:49' */
                        localB->UpperIndex = 22.0F;
                        localB->LowerIndex = 21.0F;
                        localB->fra = HSCR_ac_frac(rtu_DataArray[22],
                            rtu_DataArray[21], rtu_Input_value);

                        /* Transition: '<S50>:50' */
                    }

                    /* Transition: '<S50>:51' */
                    /* Transition: '<S50>:48' */
                }

                /* Transition: '<S50>:52' */
                /* Transition: '<S50>:67' */
            }
            else
            {
                /* Transition: '<S50>:54' */
                if (rtu_Input_value >= rtu_DataArray[19])
                {
                    /* Transition: '<S50>:55' */
                    if (rtu_Input_value >= rtu_DataArray[20])
                    {
                        /* Transition: '<S50>:58' */
                        localB->UpperIndex = 21.0F;
                        localB->LowerIndex = 20.0F;
                        localB->fra = HSCR_ac_frac(rtu_DataArray[21],
                            rtu_DataArray[20], rtu_Input_value);

                        /* Transition: '<S50>:57' */
                    }
                    else
                    {
                        /* Transition: '<S50>:59' */
                        localB->UpperIndex = 20.0F;
                        localB->LowerIndex = 19.0F;
                        localB->fra = HSCR_ac_frac(rtu_DataArray[20],
                            rtu_DataArray[19], rtu_Input_value);

                        /* Transition: '<S50>:60' */
                    }

                    /* Transition: '<S50>:65' */
                }
                else
                {
                    /* Transition: '<S50>:56' */
                    if (rtu_Input_value >= rtu_DataArray[18])
                    {
                        /* Transition: '<S50>:61' */
                        localB->UpperIndex = 19.0F;
                        localB->LowerIndex = 18.0F;
                        localB->fra = HSCR_ac_frac(rtu_DataArray[19],
                            rtu_DataArray[18], rtu_Input_value);

                        /* Transition: '<S50>:63' */
                    }
                    else
                    {
                        /* Transition: '<S50>:62' */
                        localB->UpperIndex = 18.0F;
                        localB->LowerIndex = 17.0F;
                        localB->fra = HSCR_ac_frac(rtu_DataArray[18],
                            rtu_DataArray[17], rtu_Input_value);

                        /* Transition: '<S50>:18' */
                    }

                    /* Transition: '<S50>:64' */
                }

                /* Transition: '<S50>:66' */
            }
        }

        /* Transition: '<S50>:68' */
        /* Transition: '<S50>:113' */
        /* Transition: '<S50>:19' */
    }
    else
    {
        /* Transition: '<S50>:4' */
        if (rtu_Input_value >= rtu_DataArray[9])
        {
            /* Transition: '<S50>:21' */
            if (rtu_Input_value >= rtu_DataArray[13])
            {
                /* Transition: '<S50>:70' */
                if (rtu_Input_value >= rtu_DataArray[15])
                {
                    /* Transition: '<S50>:75' */
                    if (rtu_Input_value >= rtu_DataArray[16])
                    {
                        /* Transition: '<S50>:77' */
                        localB->UpperIndex = 17.0F;
                        localB->LowerIndex = 16.0F;
                        localB->fra = HSCR_ac_frac(rtu_DataArray[17],
                            rtu_DataArray[16], rtu_Input_value);

                        /* Transition: '<S50>:78' */
                    }
                    else
                    {
                        /* Transition: '<S50>:76' */
                        localB->UpperIndex = 16.0F;
                        localB->LowerIndex = 15.0F;
                        localB->fra = HSCR_ac_frac(rtu_DataArray[16],
                            rtu_DataArray[15], rtu_Input_value);

                        /* Transition: '<S50>:79' */
                    }

                    /* Transition: '<S50>:85' */
                }
                else
                {
                    /* Transition: '<S50>:71' */
                    /* Transition: '<S50>:80' */
                    if (rtu_Input_value >= rtu_DataArray[14])
                    {
                        /* Transition: '<S50>:81' */
                        localB->UpperIndex = 15.0F;
                        localB->LowerIndex = 14.0F;
                        localB->fra = HSCR_ac_frac(rtu_DataArray[15],
                            rtu_DataArray[14], rtu_Input_value);

                        /* Transition: '<S50>:82' */
                    }
                    else
                    {
                        /* Transition: '<S50>:20' */
                        localB->UpperIndex = 14.0F;
                        localB->LowerIndex = 13.0F;
                        localB->fra = HSCR_ac_frac(rtu_DataArray[14],
                            rtu_DataArray[13], rtu_Input_value);

                        /* Transition: '<S50>:83' */
                    }

                    /* Transition: '<S50>:84' */
                }

                /* Transition: '<S50>:6' */
            }
            else
            {
                /* Transition: '<S50>:86' */
                if (rtu_Input_value >= rtu_DataArray[11])
                {
                    /* Transition: '<S50>:87' */
                    if (rtu_Input_value >= rtu_DataArray[12])
                    {
                        /* Transition: '<S50>:90' */
                        localB->UpperIndex = 13.0F;
                        localB->LowerIndex = 12.0F;
                        localB->fra = HSCR_ac_frac(rtu_DataArray[13],
                            rtu_DataArray[12], rtu_Input_value);

                        /* Transition: '<S50>:91' */
                        /* Transition: '<S50>:72' */
                    }
                    else
                    {
                        /* Transition: '<S50>:88' */
                        localB->UpperIndex = 12.0F;
                        localB->LowerIndex = 11.0F;
                        localB->fra = HSCR_ac_frac(rtu_DataArray[12],
                            rtu_DataArray[11], rtu_Input_value);

                        /* Transition: '<S50>:89' */
                        /* Transition: '<S50>:72' */
                    }
                }
                else
                {
                    /* Transition: '<S50>:92' */
                    if (rtu_Input_value >= rtu_DataArray[10])
                    {
                        /* Transition: '<S50>:93' */
                        localB->UpperIndex = 11.0F;
                        localB->LowerIndex = 10.0F;
                        localB->fra = HSCR_ac_frac(rtu_DataArray[11],
                            rtu_DataArray[10], rtu_Input_value);

                        /* Transition: '<S50>:89' */
                        /* Transition: '<S50>:72' */
                    }
                    else
                    {
                        /* Transition: '<S50>:94' */
                        localB->UpperIndex = 10.0F;
                        localB->LowerIndex = 9.0F;
                        localB->fra = HSCR_ac_frac(rtu_DataArray[10],
                            rtu_DataArray[9], rtu_Input_value);

                        /* Transition: '<S50>:95' */
                    }
                }

                /* Transition: '<S50>:74' */
            }

            /* Transition: '<S50>:69' */
        }
        else
        {
            /* Transition: '<S50>:73' */
            if (rtu_Input_value >= rtu_DataArray[5])
            {
                /* Transition: '<S50>:96' */
                if (rtu_Input_value >= rtu_DataArray[7])
                {
                    /* Transition: '<S50>:99' */
                    if (rtu_Input_value >= rtu_DataArray[8])
                    {
                        /* Transition: '<S50>:103' */
                        localB->UpperIndex = 9.0F;
                        localB->LowerIndex = 8.0F;
                        localB->fra = HSCR_ac_frac(rtu_DataArray[9],
                            rtu_DataArray[8], rtu_Input_value);

                        /* Transition: '<S50>:100' */
                    }
                    else
                    {
                        /* Transition: '<S50>:102' */
                        localB->UpperIndex = 8.0F;
                        localB->LowerIndex = 7.0F;
                        localB->fra = HSCR_ac_frac(rtu_DataArray[8],
                            rtu_DataArray[7], rtu_Input_value);

                        /* Transition: '<S50>:101' */
                    }

                    /* Transition: '<S50>:109' */
                    /* Transition: '<S50>:119' */
                    /* Transition: '<S50>:97' */
                }
                else
                {
                    /* Transition: '<S50>:104' */
                    if (rtu_Input_value >= rtu_DataArray[6])
                    {
                        /* Transition: '<S50>:105' */
                        localB->UpperIndex = 7.0F;
                        localB->LowerIndex = 6.0F;
                        localB->fra = HSCR_ac_frac(rtu_DataArray[7],
                            rtu_DataArray[6], rtu_Input_value);

                        /* Transition: '<S50>:107' */
                        /* Transition: '<S50>:97' */
                    }
                    else
                    {
                        /* Transition: '<S50>:106' */
                        localB->UpperIndex = 6.0F;
                        localB->LowerIndex = 5.0F;
                        localB->fra = HSCR_ac_frac(rtu_DataArray[6],
                            rtu_DataArray[5], rtu_Input_value);
                    }
                }

                /* Transition: '<S50>:120' */
                /* Transition: '<S50>:259' */
                /* Transition: '<S50>:261' */
            }
            else
            {
                /* Transition: '<S50>:110' */
                if (rtu_Input_value >= rtu_DataArray[3])
                {
                    /* Transition: '<S50>:111' */
                    if (rtu_Input_value >= rtu_DataArray[4])
                    {
                        /* Transition: '<S50>:115' */
                        localB->UpperIndex = 5.0F;
                        localB->LowerIndex = 4.0F;
                        localB->fra = HSCR_ac_frac(rtu_DataArray[5],
                            rtu_DataArray[4], rtu_Input_value);

                        /* Transition: '<S50>:41' */
                    }
                    else
                    {
                        /* Transition: '<S50>:114' */
                        localB->UpperIndex = 4.0F;
                        localB->LowerIndex = 3.0F;
                        localB->fra = HSCR_ac_frac(rtu_DataArray[4],
                            rtu_DataArray[3], rtu_Input_value);
                    }

                    /* Transition: '<S50>:270' */
                    /* Transition: '<S50>:269' */
                }
                else
                {
                    /* Transition: '<S50>:112' */
                    if (rtu_Input_value >= rtu_DataArray[1])
                    {
                        /* Transition: '<S50>:116' */
                        if (rtu_Input_value >= rtu_DataArray[2])
                        {
                            /* Transition: '<S50>:38' */
                            localB->UpperIndex = 3.0F;
                            localB->LowerIndex = 2.0F;
                            localB->fra = HSCR_ac_frac(rtu_DataArray[3],
                                rtu_DataArray[2], rtu_Input_value);

                            /* Transition: '<S50>:270' */
                            /* Transition: '<S50>:269' */
                        }
                        else
                        {
                            /* Transition: '<S50>:265' */
                            localB->UpperIndex = 2.0F;
                            localB->LowerIndex = 1.0F;
                            localB->fra = HSCR_ac_frac(rtu_DataArray[2],
                                rtu_DataArray[1], rtu_Input_value);

                            /* Transition: '<S50>:268' */
                            /* Transition: '<S50>:269' */
                        }
                    }
                    else
                    {
                        /* Transition: '<S50>:108' */
                        if (rtu_Input_value >= rtu_DataArray[0])
                        {
                            /* Transition: '<S50>:118' */
                            localB->UpperIndex = 1.0F;
                            localB->LowerIndex = 0.0F;
                            localB->fra = HSCR_ac_frac(rtu_DataArray[1],
                                rtu_DataArray[0], rtu_Input_value);

                            /* Transition: '<S50>:262' */
                            /* Transition: '<S50>:261' */
                        }
                        else
                        {
                            /* Transition: '<S50>:255' */
                            localB->UpperIndex = 1.0F;
                            localB->LowerIndex = 0.0F;
                            localB->fra = HSCR_ac_frac(rtu_DataArray[1],
                                rtu_DataArray[0], rtu_DataArray[0]);

                            /* Transition: '<S50>:259' */
                            /* Transition: '<S50>:261' */
                        }
                    }
                }
            }

            /* Transition: '<S50>:98' */
            /* Transition: '<S50>:19' */
        }
    }

    /* End of Chart: '<S43>/X_Data_and_Fractions' */
}

/*
 * Output and update for atomic system:
 *    '<S25>/OPTL_Dynamic1D_A1_Pts'
 *    '<S25>/OPTL_Dynamic1D_A2_Pts'
 *    '<S25>/OPTL_Dynamic1D_Ca_Pts'
 *    '<S26>/OPTL_Dynamic1D_B1_Pts'
 *    '<S26>/OPTL_Dynamic1D_B2_Pts'
 *    '<S26>/OPTL_Dynamic1D_Cb_Pts'
 *    '<S27>/OPTL_Dynamic1D_C1_Pts'
 *    '<S27>/OPTL_Dynamic1D_C2_Pts'
 *    '<S27>/OPTL_Dynamic1D_Cc_Pts'
 * Common block description:
 *   x.x
 */
static FUNC(void, HSCR_CODE_LOCAL) HSCR_ac_OPTL_Dynamic1D_A1_Pts(VAR(float32,
    AUTOMATIC) rtu_Upper_Index, VAR(float32, AUTOMATIC) rtu_Lower_Index, CONST
    (float32, AUTOMATIC) rtu_X_ArrayData[34], P2VAR
    (B_OPTL_Dynamic1D_A1_Pts_HSCR_ac_T, AUTOMATIC, HSCR_VAR_INIT) localB)
{
    /* Selector: '<S44>/Selector3' */
    localB->Selector3 = rtu_X_ArrayData[(sint32)rtu_Upper_Index];

    /* Selector: '<S44>/Selector4' */
    localB->Selector4 = rtu_X_ArrayData[(sint32)rtu_Lower_Index];
}

/* Model step function for TID1 */
FUNC(void, HSCR_CODE) HSCR_MedTEB(void) /* Explicit Task: MedTEB */
{
    sint32 i;
    float32 rtb_Maximum[3];
    float32 rtb_Abs;
    float32 rtb_Min1;
    float32 rtb_Min3;
    float32 rtb_Summation4_bb;
    float32 rtb_Summation4_m5;
    float32 rtb_TmpSignalConversionAtVeHADR_n_FrntMt;
    float32 rtb_TmpSignalConversionAtVeHADR_n_RearMt;
    float32 rtb_TmpSignalConversionAtVeMSPR_n_MtrB_S;
    float32 tmpRead;
    float32 tmpRead_0;
    TeHSER_e_SteadyStates rtb_TmpSignalConversionAtVeHSER_e_HTDR_S;
    boolean rtb_AND_n;
    boolean rtb_Logical2;
    boolean rtb_Logical2_p;

    /* Inport: '<Root>/VeHTDR_M_MtrA_TorqCmnd' */
    (void)Rte_Read_VeHTDR_M_MtrA_TorqCmnd_Value(&rtb_Abs);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/HSCR_MedTEB'
     */
    /* SignalConversion generated from: '<S1>/VeMSPR_n_MtrB_Spd' incorporates:
     *  Inport: '<Root>/VeMSPR_n_MtrB_Spd'
     */
    (void)Rte_Read_VeMSPR_n_MtrB_Spd_Value
        (&rtb_TmpSignalConversionAtVeMSPR_n_MtrB_S);

    /* SignalConversion generated from: '<S1>/VeHADR_n_FrntMtrSpeedEst' incorporates:
     *  Inport: '<Root>/VeHADR_n_FrntMtrSpeedEst'
     */
    (void)Rte_Read_VeHADR_n_FrntMtrSpeedEst_Value
        (&rtb_TmpSignalConversionAtVeHADR_n_FrntMt);

    /* SignalConversion generated from: '<S1>/VeHADR_n_RearMtrSpeedEst' incorporates:
     *  Inport: '<Root>/VeHADR_n_RearMtrSpeedEst'
     */
    (void)Rte_Read_VeHADR_n_RearMtrSpeedEst_Value
        (&rtb_TmpSignalConversionAtVeHADR_n_RearMt);

    /* SignalConversion generated from: '<S1>/VeHSER_e_HTDR_State' incorporates:
     *  Inport: '<Root>/VeHSER_e_HTDR_State'
     */
    (void)Rte_Read_VeHSER_e_HTDR_State_Value
        (&rtb_TmpSignalConversionAtVeHSER_e_HTDR_S);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/HSCC_Calculate_Donut_Space_Coefficients'
     */
    for (i = 0; i < 3; i++)
    {
        /* MinMax: '<S5>/Maximum' incorporates:
         *  Constant: '<S10>/Calib'
         *  Constant: '<S11>/Calib'
         */
        rtb_Maximum[i] = fmaxf(HaHSCR_t_NegSpdBlenderTimeStep[(i)],
                               KaHSCR_t_NegSpdBlenderTime[(i)]);
    }

    /* MinMax: '<S6>/Min3' incorporates:
     *  Constant: '<S6>/Constant Value2'
     */
    rtb_Min3 = fmaxf(rtb_TmpSignalConversionAtVeMSPR_n_MtrB_S, 0.0F);

    /* MinMax: '<S6>/Min1' incorporates:
     *  Constant: '<S6>/Constant Value2'
     */
    rtb_Min1 = fminf(0.0F, rtb_TmpSignalConversionAtVeMSPR_n_MtrB_S);

    /* Outputs for Atomic SubSystem: '<S6>/Limiter1' */
    /* Switch: '<S19>/Switch1' incorporates:
     *  RelationalOperator: '<S19>/Relational Operator'
     */
    if (rtb_Min3 < rtb_TmpSignalConversionAtVeHADR_n_FrntMt)
    {
        /* Sum: '<S27>/Summation3' */
        rtb_TmpSignalConversionAtVeHADR_n_FrntMt = rtb_Min3;
    }

    /* End of Switch: '<S19>/Switch1' */

    /* Switch: '<S19>/Switch' incorporates:
     *  RelationalOperator: '<S19>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtVeHADR_n_FrntMt > rtb_Min1)
    {
        /* Switch: '<S19>/Switch' */
        rtb_Min1 = rtb_TmpSignalConversionAtVeHADR_n_FrntMt;
    }

    /* End of Switch: '<S19>/Switch' */
    /* End of Outputs for SubSystem: '<S6>/Limiter1' */

    /* Abs: '<S15>/Abs' */
    rtb_Abs = fabsf(rtb_Abs);

    /* Outputs for Atomic SubSystem: '<S15>/Hysteresis_3' */
    /* Switch: '<S90>/Switch1' incorporates:
     *  Constant: '<S90>/Constant Value'
     *  Constant: '<S91>/Calib'
     *  Constant: '<S92>/Calib'
     *  RelationalOperator: '<S90>/Greater  Than'
     *  RelationalOperator: '<S90>/Greater  Than1'
     *  UnitDelay: '<S90>/Unit Delay'
     */
    if (rtb_Abs > KeHSCR_M_EstSpdBldrRstTh)
    {
        HSCR_ac_DW.UnitDelay_DSTATE_f = true;
    }
    else
    {
        HSCR_ac_DW.UnitDelay_DSTATE_f = ((rtb_Abs > KeHSCR_M_EstSpdBldrTh_LSP) &&
            (HSCR_ac_DW.UnitDelay_DSTATE_f));
    }

    /* End of Switch: '<S90>/Switch1' */
    /* End of Outputs for SubSystem: '<S15>/Hysteresis_3' */

    /* Selector: '<S15>/Selector' incorporates:
     *  Constant: '<S101>/Calib'
     *  Constant: '<S114>/Calib'
     *  Constant: '<S89>/Calib'
     *  DataTypeConversion: '<S15>/Data Type Conversion'
     *  Selector: '<S16>/Selector'
     *  Selector: '<S17>/Selector'
     *  SignalConversion generated from: '<S1>/VeHSER_e_HTDR_State'
     */
    rtb_Logical2_p = HaHSCR_b_EnblEstdSpd
        [(rtb_TmpSignalConversionAtVeHSER_e_HTDR_S)];

    /* Logic: '<S15>/Logical2' incorporates:
     *  Constant: '<S89>/Calib'
     *  Constant: '<S93>/Calib'
     *  Selector: '<S15>/Selector'
     *  UnitDelay: '<S90>/Unit Delay'
     */
    rtb_Logical2 = (((KeHSCR_b_UseMtrA_EstSpd) && rtb_Logical2_p) &&
                    (HSCR_ac_DW.UnitDelay_DSTATE_f));

    /* Outputs for Atomic SubSystem: '<S15>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S97>/EdgeFalling' */
    /* Logic: '<S99>/AND' incorporates:
     *  Logic: '<S99>/OR1'
     *  UnitDelay: '<S99>/Unit Delay'
     */
    rtb_AND_n = ((!rtb_Logical2) && (HSCR_ac_DW.UnitDelay_DSTATE_ix));

    /* Update for UnitDelay: '<S99>/Unit Delay' */
    HSCR_ac_DW.UnitDelay_DSTATE_ix = rtb_Logical2;

    /* End of Outputs for SubSystem: '<S97>/EdgeFalling' */

    /* Switch: '<S97>/Switch' incorporates:
     *  Constant: '<S87>/Calib'
     *  Constant: '<S96>/Calib'
     *  Constant: '<S97>/Constant Value1'
     *  MinMax: '<S97>/Minimum'
     *  Sum: '<S97>/Summation'
     *  UnitDelay: '<S97>/Unit Delay'
     */
    if (rtb_AND_n)
    {
        HSCR_ac_DW.UnitDelay_DSTATE_b = KeHSCR_t_TurnOffdelayTime;
    }
    else
    {
        HSCR_ac_DW.UnitDelay_DSTATE_b = fmaxf(HSCR_ac_DW.UnitDelay_DSTATE_b -
            HeHSCR_t_dT, 0.0F);
    }

    /* End of Switch: '<S97>/Switch' */
    /* End of Outputs for SubSystem: '<S15>/Turn Off Delay Time' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeHTDR_M_MtrB_TorqCmnd' */
    (void)Rte_Read_VeHTDR_M_MtrB_TorqCmnd_Value(&tmpRead_0);

    /* Inport: '<Root>/VeMSPR_n_MtrA_Spd' */
    (void)Rte_Read_VeMSPR_n_MtrA_Spd_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/HSCR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/HSCC_Calculate_Donut_Space_Coefficients'
     */
    /* Outputs for Atomic SubSystem: '<S15>/GradientLimiter' */
    /* Outputs for Atomic SubSystem: '<S15>/Turn Off Delay Time' */
    /* Sum: '<S88>/Sum2' incorporates:
     *  Constant: '<S97>/Constant Value2'
     *  Logic: '<S97>/AND'
     *  RelationalOperator: '<S97>/Greater  Than'
     *  UnitDelay: '<S88>/Unit Delay'
     *  UnitDelay: '<S97>/Unit Delay'
     */
    rtb_Abs = ((float32)((rtb_Logical2 || (HSCR_ac_DW.UnitDelay_DSTATE_b > 0.0F))
                         ? 1 : 0)) - HSCR_ac_DW.UnitDelay_DSTATE_a;

    /* End of Outputs for SubSystem: '<S15>/Turn Off Delay Time' */

    /* Outputs for Atomic SubSystem: '<S88>/Limiter' */
    /* Switch: '<S98>/Switch1' incorporates:
     *  Constant: '<S95>/Calib'
     *  RelationalOperator: '<S98>/Relational Operator'
     */
    if (KeHSCR_dr_BlendFactorLU < rtb_Abs)
    {
        /* Sum: '<S26>/Summation3' */
        rtb_Abs = KeHSCR_dr_BlendFactorLU;
    }

    /* End of Switch: '<S98>/Switch1' */

    /* Switch: '<S98>/Switch' incorporates:
     *  Constant: '<S94>/Calib'
     *  RelationalOperator: '<S98>/Relational Operator1'
     */
    if (rtb_Abs <= KeHSCR_dr_BlendFactorLD)
    {
        rtb_Abs = KeHSCR_dr_BlendFactorLD;
    }

    /* End of Switch: '<S98>/Switch' */
    /* End of Outputs for SubSystem: '<S88>/Limiter' */

    /* Sum: '<S88>/Sum3' incorporates:
     *  UnitDelay: '<S88>/Unit Delay'
     */
    HSCR_ac_DW.UnitDelay_DSTATE_a += rtb_Abs;

    /* End of Outputs for SubSystem: '<S15>/GradientLimiter' */

    /* Switch: '<S4>/Switch2' incorporates:
     *  Constant: '<S12>/Calib'
     */
    if (KeHSCR_b_ChsFrntMtrSpd_MtrA)
    {
        rtb_Abs = rtb_Min1;
    }
    else
    {
        rtb_Abs = rtb_TmpSignalConversionAtVeHADR_n_RearMt;
    }

    /* End of Switch: '<S4>/Switch2' */

    /* Sum: '<S15>/Sum4' incorporates:
     *  Constant: '<S15>/Constant Value5'
     *  Product: '<S15>/Product4'
     *  Product: '<S15>/Product5'
     *  Sum: '<S15>/Sum5'
     *  UnitDelay: '<S88>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeHADR_n_FrntMt = ((1.0F -
        HSCR_ac_DW.UnitDelay_DSTATE_a) * tmpRead) + (rtb_Abs *
        HSCR_ac_DW.UnitDelay_DSTATE_a);

    /* Abs: '<S16>/Abs' */
    rtb_Abs = fabsf(tmpRead_0);

    /* Outputs for Atomic SubSystem: '<S16>/Hysteresis_3' */
    /* Switch: '<S103>/Switch1' incorporates:
     *  Constant: '<S103>/Constant Value'
     *  Constant: '<S104>/Calib'
     *  Constant: '<S105>/Calib'
     *  RelationalOperator: '<S103>/Greater  Than'
     *  RelationalOperator: '<S103>/Greater  Than1'
     *  UnitDelay: '<S103>/Unit Delay'
     */
    if (rtb_Abs > KeHSCR_M_EstSpdBldrRstTh)
    {
        HSCR_ac_DW.UnitDelay_DSTATE_o = true;
    }
    else
    {
        HSCR_ac_DW.UnitDelay_DSTATE_o = ((rtb_Abs > KeHSCR_M_EstSpdBldrTh_LSP) &&
            (HSCR_ac_DW.UnitDelay_DSTATE_o));
    }

    /* End of Switch: '<S103>/Switch1' */
    /* End of Outputs for SubSystem: '<S16>/Hysteresis_3' */

    /* Logic: '<S16>/Logical2' incorporates:
     *  Constant: '<S106>/Calib'
     *  UnitDelay: '<S103>/Unit Delay'
     */
    rtb_Logical2 = (((KeHSCR_b_UseMtrB_EstSpd) && rtb_Logical2_p) &&
                    (HSCR_ac_DW.UnitDelay_DSTATE_o));

    /* Outputs for Atomic SubSystem: '<S16>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S110>/EdgeFalling' */
    /* Logic: '<S112>/AND' incorporates:
     *  Logic: '<S112>/OR1'
     *  UnitDelay: '<S112>/Unit Delay'
     */
    rtb_AND_n = ((!rtb_Logical2) && (HSCR_ac_DW.UnitDelay_DSTATE_gr));

    /* Update for UnitDelay: '<S112>/Unit Delay' */
    HSCR_ac_DW.UnitDelay_DSTATE_gr = rtb_Logical2;

    /* End of Outputs for SubSystem: '<S110>/EdgeFalling' */

    /* Switch: '<S110>/Switch' incorporates:
     *  Constant: '<S102>/Calib'
     *  Constant: '<S109>/Calib'
     *  Constant: '<S110>/Constant Value1'
     *  MinMax: '<S110>/Minimum'
     *  Sum: '<S110>/Summation'
     *  UnitDelay: '<S110>/Unit Delay'
     */
    if (rtb_AND_n)
    {
        HSCR_ac_DW.UnitDelay_DSTATE_g = KeHSCR_t_TurnOffdelayTime;
    }
    else
    {
        HSCR_ac_DW.UnitDelay_DSTATE_g = fmaxf(HSCR_ac_DW.UnitDelay_DSTATE_g -
            HeHSCR_t_dT, 0.0F);
    }

    /* End of Switch: '<S110>/Switch' */
    /* End of Outputs for SubSystem: '<S16>/Turn Off Delay Time' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeHTDR_M_MtrC_TorqCmnd' */
    (void)Rte_Read_VeHTDR_M_MtrC_TorqCmnd_Value(&rtb_Summation4_m5);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/HSCR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/HSCC_Calculate_Donut_Space_Coefficients'
     */
    /* Outputs for Atomic SubSystem: '<S16>/GradientLimiter' */
    /* Outputs for Atomic SubSystem: '<S16>/Turn Off Delay Time' */
    /* Sum: '<S100>/Sum2' incorporates:
     *  Constant: '<S110>/Constant Value2'
     *  Logic: '<S110>/AND'
     *  RelationalOperator: '<S110>/Greater  Than'
     *  UnitDelay: '<S100>/Unit Delay'
     *  UnitDelay: '<S110>/Unit Delay'
     */
    rtb_Abs = ((float32)((rtb_Logical2 || (HSCR_ac_DW.UnitDelay_DSTATE_g > 0.0F))
                         ? 1 : 0)) - HSCR_ac_DW.UnitDelay_DSTATE_g0;

    /* End of Outputs for SubSystem: '<S16>/Turn Off Delay Time' */

    /* Outputs for Atomic SubSystem: '<S100>/Limiter' */
    /* Switch: '<S111>/Switch1' incorporates:
     *  Constant: '<S108>/Calib'
     *  RelationalOperator: '<S111>/Relational Operator'
     */
    if (KeHSCR_dr_BlendFactorLU < rtb_Abs)
    {
        /* Sum: '<S26>/Summation3' */
        rtb_Abs = KeHSCR_dr_BlendFactorLU;
    }

    /* End of Switch: '<S111>/Switch1' */

    /* Switch: '<S111>/Switch' incorporates:
     *  Constant: '<S107>/Calib'
     *  RelationalOperator: '<S111>/Relational Operator1'
     */
    if (rtb_Abs <= KeHSCR_dr_BlendFactorLD)
    {
        rtb_Abs = KeHSCR_dr_BlendFactorLD;
    }

    /* End of Switch: '<S111>/Switch' */
    /* End of Outputs for SubSystem: '<S100>/Limiter' */

    /* Sum: '<S100>/Sum3' incorporates:
     *  UnitDelay: '<S100>/Unit Delay'
     */
    HSCR_ac_DW.UnitDelay_DSTATE_g0 += rtb_Abs;

    /* End of Outputs for SubSystem: '<S16>/GradientLimiter' */

    /* Switch: '<S4>/Switch1' incorporates:
     *  Constant: '<S13>/Calib'
     */
    if (KeHSCR_b_ChsFrntMtrSpd_MtrB)
    {
        rtb_Abs = rtb_Min1;
    }
    else
    {
        rtb_Abs = rtb_TmpSignalConversionAtVeHADR_n_RearMt;
    }

    /* End of Switch: '<S4>/Switch1' */

    /* Sum: '<S16>/Sum1' incorporates:
     *  Constant: '<S16>/Constant Value4'
     *  Product: '<S16>/Product1'
     *  Product: '<S16>/Product2'
     *  Sum: '<S16>/Sum2'
     *  UnitDelay: '<S100>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeMSPR_n_MtrB_S = ((1.0F -
        HSCR_ac_DW.UnitDelay_DSTATE_g0) *
        rtb_TmpSignalConversionAtVeMSPR_n_MtrB_S) + (rtb_Abs *
        HSCR_ac_DW.UnitDelay_DSTATE_g0);

    /* Abs: '<S17>/Abs' */
    rtb_Abs = fabsf(rtb_Summation4_m5);

    /* Outputs for Atomic SubSystem: '<S17>/Hysteresis_3' */
    /* Switch: '<S116>/Switch1' incorporates:
     *  Constant: '<S116>/Constant Value'
     *  Constant: '<S117>/Calib'
     *  Constant: '<S118>/Calib'
     *  RelationalOperator: '<S116>/Greater  Than'
     *  RelationalOperator: '<S116>/Greater  Than1'
     *  UnitDelay: '<S116>/Unit Delay'
     */
    if (rtb_Abs > KeHSCR_M_EstSpdBldrRstTh)
    {
        HSCR_ac_DW.UnitDelay_DSTATE_j = true;
    }
    else
    {
        HSCR_ac_DW.UnitDelay_DSTATE_j = ((rtb_Abs > KeHSCR_M_EstSpdBldrTh_LSP) &&
            (HSCR_ac_DW.UnitDelay_DSTATE_j));
    }

    /* End of Switch: '<S116>/Switch1' */
    /* End of Outputs for SubSystem: '<S17>/Hysteresis_3' */

    /* Logic: '<S17>/Logical2' incorporates:
     *  Constant: '<S119>/Calib'
     *  UnitDelay: '<S116>/Unit Delay'
     */
    rtb_Logical2_p = (((KeHSCR_b_UseMtrC_EstSpd) && rtb_Logical2_p) &&
                      (HSCR_ac_DW.UnitDelay_DSTATE_j));

    /* Outputs for Atomic SubSystem: '<S17>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S123>/EdgeFalling' */
    /* Logic: '<S125>/AND' incorporates:
     *  Logic: '<S125>/OR1'
     *  UnitDelay: '<S125>/Unit Delay'
     */
    rtb_Logical2 = ((!rtb_Logical2_p) && (HSCR_ac_DW.UnitDelay_DSTATE_n));

    /* Update for UnitDelay: '<S125>/Unit Delay' */
    HSCR_ac_DW.UnitDelay_DSTATE_n = rtb_Logical2_p;

    /* End of Outputs for SubSystem: '<S123>/EdgeFalling' */

    /* Switch: '<S123>/Switch' incorporates:
     *  Constant: '<S115>/Calib'
     *  Constant: '<S122>/Calib'
     *  Constant: '<S123>/Constant Value1'
     *  MinMax: '<S123>/Minimum'
     *  Sum: '<S123>/Summation'
     *  UnitDelay: '<S123>/Unit Delay'
     */
    if (rtb_Logical2)
    {
        HSCR_ac_DW.UnitDelay_DSTATE_p = KeHSCR_t_TurnOffdelayTime;
    }
    else
    {
        HSCR_ac_DW.UnitDelay_DSTATE_p = fmaxf(HSCR_ac_DW.UnitDelay_DSTATE_p -
            HeHSCR_t_dT, 0.0F);
    }

    /* End of Switch: '<S123>/Switch' */
    /* End of Outputs for SubSystem: '<S17>/Turn Off Delay Time' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeMSPR_n_MtrC_Spd' */
    (void)Rte_Read_VeMSPR_n_MtrC_Spd_Value(&rtb_Summation4_bb);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/HSCR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/HSCC_Calculate_Donut_Space_Coefficients'
     */
    /* Outputs for Atomic SubSystem: '<S17>/GradientLimiter1' */
    /* Outputs for Atomic SubSystem: '<S17>/Turn Off Delay Time' */
    /* Sum: '<S113>/Sum2' incorporates:
     *  Constant: '<S123>/Constant Value2'
     *  Logic: '<S123>/AND'
     *  RelationalOperator: '<S123>/Greater  Than'
     *  UnitDelay: '<S113>/Unit Delay'
     *  UnitDelay: '<S123>/Unit Delay'
     */
    rtb_Abs = ((float32)((rtb_Logical2_p || (HSCR_ac_DW.UnitDelay_DSTATE_p >
                  0.0F)) ? 1 : 0)) - HSCR_ac_DW.UnitDelay_DSTATE_i;

    /* End of Outputs for SubSystem: '<S17>/Turn Off Delay Time' */

    /* Outputs for Atomic SubSystem: '<S113>/Limiter' */
    /* Switch: '<S124>/Switch1' incorporates:
     *  Constant: '<S121>/Calib'
     *  RelationalOperator: '<S124>/Relational Operator'
     */
    if (KeHSCR_dr_BlendFactorLU < rtb_Abs)
    {
        /* Sum: '<S26>/Summation3' */
        rtb_Abs = KeHSCR_dr_BlendFactorLU;
    }

    /* End of Switch: '<S124>/Switch1' */

    /* Switch: '<S124>/Switch' incorporates:
     *  Constant: '<S120>/Calib'
     *  RelationalOperator: '<S124>/Relational Operator1'
     */
    if (rtb_Abs <= KeHSCR_dr_BlendFactorLD)
    {
        rtb_Abs = KeHSCR_dr_BlendFactorLD;
    }

    /* End of Switch: '<S124>/Switch' */
    /* End of Outputs for SubSystem: '<S113>/Limiter' */

    /* Sum: '<S113>/Sum3' incorporates:
     *  UnitDelay: '<S113>/Unit Delay'
     */
    HSCR_ac_DW.UnitDelay_DSTATE_i += rtb_Abs;

    /* End of Outputs for SubSystem: '<S17>/GradientLimiter1' */

    /* Switch: '<S4>/Switch3' incorporates:
     *  Constant: '<S14>/Calib'
     */
    if (KeHSCR_b_ChsFrntMtrSpd_MtrC)
    {
        rtb_TmpSignalConversionAtVeHADR_n_RearMt = rtb_Min1;
    }

    /* End of Switch: '<S4>/Switch3' */

    /* Sum: '<S17>/Sum1' incorporates:
     *  Constant: '<S17>/Constant Value4'
     *  Product: '<S17>/Product1'
     *  Product: '<S17>/Product2'
     *  Sum: '<S17>/Sum2'
     *  UnitDelay: '<S113>/Unit Delay'
     */
    rtb_Abs = ((1.0F - HSCR_ac_DW.UnitDelay_DSTATE_i) * rtb_Summation4_bb) +
        (rtb_TmpSignalConversionAtVeHADR_n_RearMt *
         HSCR_ac_DW.UnitDelay_DSTATE_i);

    /* Outputs for Atomic SubSystem: '<S7>/RightOpenInterval' */
    /* Switch: '<S7>/Switch' incorporates:
     *  Constant: '<S20>/Calib'
     *  Constant: '<S21>/Calib'
     *  Constant: '<S22>/Calib'
     *  Logic: '<S23>/Logical Operator'
     *  Logic: '<S7>/Logical1'
     *  RelationalOperator: '<S23>/Relatonal Operator'
     *  RelationalOperator: '<S23>/Relatonal Operator1'
     */
    if (((rtb_TmpSignalConversionAtVeHADR_n_FrntMt >= KaHSCR_n_NegSpdThld[0]) &&
         (rtb_TmpSignalConversionAtVeHADR_n_FrntMt < KaHSCR_n_PosSpdThld[0])) &&
        (KaHSCR_b_EnblMtrSpdDeadBand[0]))
    {
        /* Switch: '<S7>/Switch' incorporates:
         *  Constant: '<S7>/Constant Value2'
         */
        VaHSCC_n_MtrSpdHys[0] = 0.0F;
    }
    else
    {
        /* Switch: '<S7>/Switch' */
        VaHSCC_n_MtrSpdHys[0] = rtb_TmpSignalConversionAtVeHADR_n_FrntMt;
    }

    if (((rtb_TmpSignalConversionAtVeMSPR_n_MtrB_S >= KaHSCR_n_NegSpdThld[1]) &&
         (rtb_TmpSignalConversionAtVeMSPR_n_MtrB_S < KaHSCR_n_PosSpdThld[1])) &&
        (KaHSCR_b_EnblMtrSpdDeadBand[1]))
    {
        /* Switch: '<S7>/Switch' incorporates:
         *  Constant: '<S7>/Constant Value2'
         */
        VaHSCC_n_MtrSpdHys[1] = 0.0F;
    }
    else
    {
        /* Switch: '<S7>/Switch' */
        VaHSCC_n_MtrSpdHys[1] = rtb_TmpSignalConversionAtVeMSPR_n_MtrB_S;
    }

    if (((rtb_Abs >= KaHSCR_n_NegSpdThld[2]) && (rtb_Abs < KaHSCR_n_PosSpdThld[2]))
        && (KaHSCR_b_EnblMtrSpdDeadBand[2]))
    {
        /* Switch: '<S7>/Switch' incorporates:
         *  Constant: '<S7>/Constant Value2'
         */
        VaHSCC_n_MtrSpdHys[2] = 0.0F;
    }
    else
    {
        /* Switch: '<S7>/Switch' */
        VaHSCC_n_MtrSpdHys[2] = rtb_Abs;
    }

    /* End of Switch: '<S7>/Switch' */
    /* End of Outputs for SubSystem: '<S7>/RightOpenInterval' */

    /* Outputs for Atomic SubSystem: '<S4>/EdgeRising' */
    for (i = 0; i < 3; i++)
    {
        /* Outputs for Atomic SubSystem: '<S5>/Protected Division' */
        /* RelationalOperator: '<S18>/Not Equal1' incorporates:
         *  Switch: '<S5>/Switch3'
         */
        rtb_Abs = rtb_Maximum[i];

        /* End of Outputs for SubSystem: '<S5>/Protected Division' */

        /* Logic: '<S7>/Logical' incorporates:
         *  Constant: '<S20>/Calib'
         *  Constant: '<S7>/Constant Value3'
         *  RelationalOperator: '<S7>/Comparison2'
         */
        VaHSCC_b_EnblBlndr[(i)] = ((VaHSCC_n_MtrSpdHys[(i)] < 0.0F) &&
            (KaHSCR_b_EnblMtrSpdDeadBand[(i)]));

        /* Logic: '<S8>/AND' incorporates:
         *  Logic: '<S8>/OR1'
         *  UnitDelay: '<S8>/Unit Delay'
         */
        rtb_Logical2_p = ((VaHSCC_b_EnblBlndr[(i)]) &&
                          (!HSCR_ac_DW.UnitDelay_DSTATE_e[i]));

        /* Update for UnitDelay: '<S8>/Unit Delay' */
        HSCR_ac_DW.UnitDelay_DSTATE_e[i] = VaHSCC_b_EnblBlndr[(i)];

        /* Switch: '<S5>/Switch2' incorporates:
         *  Constant: '<S4>/Constant Value'
         *  Constant: '<S5>/Constant Value2'
         *  Constant: '<S5>/Constant Value4'
         *  Logic: '<S5>/Logical'
         *  MinMax: '<S5>/MinMax'
         *  Sum: '<S5>/Summation1'
         *  Switch: '<S5>/Switch1'
         *  Switch: '<S5>/Switch3'
         *  UnitDelay: '<S5>/Unit Delay'
         *  UnitDelay: '<S5>/Unit Delay1'
         *  UnitDelay: '<S5>/Unit Delay3'
         */
        if (rtb_Logical2_p)
        {
            HSCR_ac_DW.UnitDelay_DSTATE[i] = 0.0F;
            HSCR_ac_DW.UnitDelay3_DSTATE[i] = 0.0F;
        }
        else
        {
            if (HSCR_ac_DW.UnitDelay1_DSTATE)
            {
                /* MinMax: '<S5>/MinMax' incorporates:
                 *  Switch: '<S5>/Switch1'
                 *  UnitDelay: '<S5>/Unit Delay3'
                 */
                rtb_TmpSignalConversionAtVeHADR_n_FrntMt =
                    HSCR_ac_DW.UnitDelay3_DSTATE[i];
            }
            else
            {
                /* MinMax: '<S5>/MinMax' incorporates:
                 *  Constant: '<S5>/Constant Value3'
                 *  Switch: '<S5>/Switch1'
                 */
                rtb_TmpSignalConversionAtVeHADR_n_FrntMt = 1.0F;
            }

            /* Outputs for Atomic SubSystem: '<S5>/Protected Division' */
            /* MinMax: '<S5>/MinMax' incorporates:
             *  Constant: '<S10>/Calib'
             *  Constant: '<S18>/Constant Value'
             *  Constant: '<S18>/Constant Value1'
             *  Constant: '<S18>/Constant Value2'
             *  Constant: '<S18>/Constant Value3'
             *  Constant: '<S18>/Constant Value4'
             *  Logic: '<S18>/AND'
             *  Product: '<S18>/Division'
             *  RelationalOperator: '<S18>/Greater Than or Equal '
             *  RelationalOperator: '<S18>/Greater Than or Equal 1'
             *  RelationalOperator: '<S18>/Not Equal'
             *  RelationalOperator: '<S18>/Not Equal1'
             *  Switch: '<S18>/Switch1'
             *  Switch: '<S18>/Switch2'
             *  Switch: '<S18>/Switch3'
             */
            if ((HaHSCR_t_NegSpdBlenderTimeStep[(i)] != 0.0F) && (rtb_Abs !=
                    0.0F))
            {
                rtb_Abs = HaHSCR_t_NegSpdBlenderTimeStep[(i)] / rtb_Abs;
            }
            else if (HaHSCR_t_NegSpdBlenderTimeStep[(i)] > 0.0F)
            {
                /* Switch: '<S18>/Switch2' incorporates:
                 *  Constant: '<S18>/MAXFLOAT'
                 */
                rtb_Abs = 3.402823466E+38F;
            }
            else if (HaHSCR_t_NegSpdBlenderTimeStep[(i)] < 0.0F)
            {
                /* Switch: '<S18>/Switch3' incorporates:
                 *  Constant: '<S18>/MINFLOAT'
                 */
                rtb_Abs = -3.402823466E+38F;
            }
            else
            {
                rtb_Abs = 0.0F;
            }

            /* End of Outputs for SubSystem: '<S5>/Protected Division' */
            HSCR_ac_DW.UnitDelay3_DSTATE[i] = fminf
                (rtb_TmpSignalConversionAtVeHADR_n_FrntMt + rtb_Abs, 1.0F);
        }

        /* End of Switch: '<S5>/Switch2' */

        /* Sum: '<S5>/Summation' incorporates:
         *  Constant: '<S5>/Constant Value'
         *  Product: '<S5>/Multiplication'
         *  Product: '<S5>/Multiplication3'
         *  Sum: '<S5>/Subtraction'
         *  UnitDelay: '<S5>/Unit Delay'
         *  UnitDelay: '<S5>/Unit Delay3'
         */
        VaHSCC_n_MtrSpdBlnd[(i)] = ((1.0F - HSCR_ac_DW.UnitDelay3_DSTATE[i]) *
            HSCR_ac_DW.UnitDelay_DSTATE[i]) + (HSCR_ac_DW.UnitDelay3_DSTATE[i] *
            VaHSCC_n_MtrSpdHys[(i)]);
    }

    /* End of Outputs for SubSystem: '<S4>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S25>/OPTL_1DAxis34ptsA' */
    /* Abs: '<S25>/Abs' incorporates:
     *  Constant: '<S33>/Calib'
     */
    HSCR_ac_OPTL_1DAxis34ptsA(fabsf(VaHSCC_n_MtrSpdBlnd[0]),
        (Rte_Prm_KaHSCR_n_DonutSpaceCoeffs_AxisA_KaHSCR_n_DonutSpaceCoeffs_AxisA
         ()), &HSCR_ac_B.OPTL_1DAxis34ptsA);

    /* End of Outputs for SubSystem: '<S25>/OPTL_1DAxis34ptsA' */

    /* Outputs for Atomic SubSystem: '<S25>/OPTL_Dynamic1D_A1_Pts' */
    /* Constant: '<S34>/Calib' */
    HSCR_ac_OPTL_Dynamic1D_A1_Pts(HSCR_ac_B.OPTL_1DAxis34ptsA.UpperIndex,
        HSCR_ac_B.OPTL_1DAxis34ptsA.LowerIndex,
        (Rte_Prm_KaHSCR_k_Donut_Space_Coefs_A1_KaHSCR_k_Donut_Space_Coefs_A1()),
        &HSCR_ac_B.OPTL_Dynamic1D_A1_Pts);

    /* End of Outputs for SubSystem: '<S25>/OPTL_Dynamic1D_A1_Pts' */

    /* Sum: '<S25>/Summation1' incorporates:
     *  Product: '<S25>/Product4'
     */
    rtb_TmpSignalConversionAtVeHADR_n_RearMt =
        HSCR_ac_B.OPTL_Dynamic1D_A1_Pts.Selector4 *
        HSCR_ac_B.OPTL_Dynamic1D_A1_Pts.Selector4;

    /* Sum: '<S37>/Summation4' incorporates:
     *  Product: '<S25>/Product3'
     *  Product: '<S37>/Multiplication'
     *  Sum: '<S37>/Summation'
     */
    rtb_TmpSignalConversionAtVeHADR_n_FrntMt =
        (((HSCR_ac_B.OPTL_Dynamic1D_A1_Pts.Selector3 *
           HSCR_ac_B.OPTL_Dynamic1D_A1_Pts.Selector3) -
          rtb_TmpSignalConversionAtVeHADR_n_RearMt) *
         HSCR_ac_B.OPTL_1DAxis34ptsA.fra) +
        rtb_TmpSignalConversionAtVeHADR_n_RearMt;

    /* Outputs for Atomic SubSystem: '<S25>/OPTL_Dynamic1D_A2_Pts' */
    /* Constant: '<S35>/Calib' */
    HSCR_ac_OPTL_Dynamic1D_A1_Pts(HSCR_ac_B.OPTL_1DAxis34ptsA.UpperIndex,
        HSCR_ac_B.OPTL_1DAxis34ptsA.LowerIndex,
        (Rte_Prm_KaHSCR_k_Donut_Space_Coefs_A2_KaHSCR_k_Donut_Space_Coefs_A2()),
        &HSCR_ac_B.OPTL_Dynamic1D_A2_Pts);

    /* End of Outputs for SubSystem: '<S25>/OPTL_Dynamic1D_A2_Pts' */

    /* Sum: '<S25>/Summation1' incorporates:
     *  Product: '<S25>/Product6'
     */
    rtb_TmpSignalConversionAtVeHADR_n_RearMt =
        HSCR_ac_B.OPTL_Dynamic1D_A1_Pts.Selector4 *
        HSCR_ac_B.OPTL_Dynamic1D_A2_Pts.Selector4;

    /* Sum: '<S38>/Summation4' incorporates:
     *  Product: '<S25>/Product5'
     *  Product: '<S38>/Multiplication'
     *  Sum: '<S38>/Summation'
     */
    rtb_Min1 = (((HSCR_ac_B.OPTL_Dynamic1D_A1_Pts.Selector3 *
                  HSCR_ac_B.OPTL_Dynamic1D_A2_Pts.Selector3) -
                 rtb_TmpSignalConversionAtVeHADR_n_RearMt) *
                HSCR_ac_B.OPTL_1DAxis34ptsA.fra) +
        rtb_TmpSignalConversionAtVeHADR_n_RearMt;

    /* Sum: '<S25>/Summation1' incorporates:
     *  Product: '<S25>/Product1'
     */
    rtb_TmpSignalConversionAtVeHADR_n_RearMt =
        HSCR_ac_B.OPTL_Dynamic1D_A2_Pts.Selector4 *
        HSCR_ac_B.OPTL_Dynamic1D_A2_Pts.Selector4;

    /* Sum: '<S39>/Summation4' incorporates:
     *  Product: '<S25>/Product'
     *  Product: '<S39>/Multiplication'
     *  Sum: '<S39>/Summation'
     */
    rtb_Abs = (((HSCR_ac_B.OPTL_Dynamic1D_A2_Pts.Selector3 *
                 HSCR_ac_B.OPTL_Dynamic1D_A2_Pts.Selector3) -
                rtb_TmpSignalConversionAtVeHADR_n_RearMt) *
               HSCR_ac_B.OPTL_1DAxis34ptsA.fra) +
        rtb_TmpSignalConversionAtVeHADR_n_RearMt;

    /* Outputs for Atomic SubSystem: '<S25>/OPTL_Dynamic1D_Ca_Pts' */
    /* Constant: '<S36>/Calib' */
    HSCR_ac_OPTL_Dynamic1D_A1_Pts(HSCR_ac_B.OPTL_1DAxis34ptsA.UpperIndex,
        HSCR_ac_B.OPTL_1DAxis34ptsA.LowerIndex,
        (Rte_Prm_KaHSCR_k_Donut_Space_Coefs_C_KaHSCR_k_Donut_Space_Coefs_C()),
        &HSCR_ac_B.OPTL_Dynamic1D_Ca_Pts);

    /* End of Outputs for SubSystem: '<S25>/OPTL_Dynamic1D_Ca_Pts' */

    /* Switch: '<S48>/Switch' */
    if (rtb_TmpSignalConversionAtVeHADR_n_FrntMt >= 0.0F)
    {
        /* Sum: '<S25>/Summation1' incorporates:
         *  Sqrt: '<S48>/Sqrt'
         */
        rtb_TmpSignalConversionAtVeHADR_n_RearMt = sqrtf
            (rtb_TmpSignalConversionAtVeHADR_n_FrntMt);
    }
    else
    {
        /* Sum: '<S25>/Summation1' incorporates:
         *  Constant: '<S48>/Zero'
         */
        rtb_TmpSignalConversionAtVeHADR_n_RearMt = 0.0F;
    }

    /* End of Switch: '<S48>/Switch' */

    /* Product: '<S25>/Product7' */
    rtb_TmpSignalConversionAtVeHADR_n_FrntMt = (1.0F /
        rtb_TmpSignalConversionAtVeHADR_n_RearMt) * rtb_Min1;

    /* If: '<S25>/If' */
    if (VaHSCC_n_MtrSpdBlnd[0] >= 0.0F)
    {
        /* Outputs for IfAction SubSystem: '<S25>/Motor_A_Forward' incorporates:
         *  ActionPort: '<S41>/Action Port'
         */
        HSCR_ac_Motor_A_Forward(rtb_TmpSignalConversionAtVeHADR_n_FrntMt,
                                &HSCR_ac_B.Merge);

        /* End of Outputs for SubSystem: '<S25>/Motor_A_Forward' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S25>/Motor_A_Reverse' incorporates:
         *  ActionPort: '<S42>/Action Port'
         */
        HSCR_ac_Motor_A_Reverse(rtb_TmpSignalConversionAtVeHADR_n_FrntMt,
                                &HSCR_ac_B.Merge);

        /* End of Outputs for SubSystem: '<S25>/Motor_A_Reverse' */
    }

    /* End of If: '<S25>/If' */

    /* SignalConversion generated from: '<S1>/A1' incorporates:
     *  Gain: '<S47>/Gain'
     *  Outport: '<Root>/VeHSCR_r_DonutSpaceCoefA1'
     */
    (void)Rte_Write_VeHSCR_r_DonutSpaceCoefA1_Value
        (rtb_TmpSignalConversionAtVeHADR_n_RearMt);

    /* Sum: '<S25>/Summation1' incorporates:
     *  Product: '<S25>/Product2'
     *  Product: '<S40>/Multiplication'
     *  Sum: '<S40>/Summation'
     *  Sum: '<S40>/Summation4'
     */
    rtb_TmpSignalConversionAtVeHADR_n_RearMt =
        ((((HSCR_ac_B.OPTL_Dynamic1D_Ca_Pts.Selector3 -
            HSCR_ac_B.OPTL_Dynamic1D_Ca_Pts.Selector4) *
           HSCR_ac_B.OPTL_1DAxis34ptsA.fra) +
          HSCR_ac_B.OPTL_Dynamic1D_Ca_Pts.Selector4) + rtb_Abs) -
        (rtb_TmpSignalConversionAtVeHADR_n_FrntMt *
         rtb_TmpSignalConversionAtVeHADR_n_FrntMt);

    /* Outputs for Atomic SubSystem: '<S26>/OPTL_1DAxis34ptsB' */
    /* Abs: '<S26>/Abs1' incorporates:
     *  Constant: '<S51>/Calib'
     */
    HSCR_ac_OPTL_1DAxis34ptsA(fabsf(VaHSCC_n_MtrSpdBlnd[1]),
        (Rte_Prm_KaHSCR_n_DonutSpaceCoeffs_AxisB_KaHSCR_n_DonutSpaceCoeffs_AxisB
         ()), &HSCR_ac_B.OPTL_1DAxis34ptsB);

    /* End of Outputs for SubSystem: '<S26>/OPTL_1DAxis34ptsB' */

    /* Outputs for Atomic SubSystem: '<S26>/OPTL_Dynamic1D_B1_Pts' */
    /* Constant: '<S52>/Calib' */
    HSCR_ac_OPTL_Dynamic1D_A1_Pts(HSCR_ac_B.OPTL_1DAxis34ptsB.UpperIndex,
        HSCR_ac_B.OPTL_1DAxis34ptsB.LowerIndex,
        (Rte_Prm_KaHSCR_k_Donut_Space_Coefs_B1_KaHSCR_k_Donut_Space_Coefs_B1()),
        &HSCR_ac_B.OPTL_Dynamic1D_B1_Pts);

    /* End of Outputs for SubSystem: '<S26>/OPTL_Dynamic1D_B1_Pts' */

    /* Sum: '<S26>/Summation3' incorporates:
     *  Product: '<S26>/Product12'
     */
    rtb_Abs = HSCR_ac_B.OPTL_Dynamic1D_B1_Pts.Selector4 *
        HSCR_ac_B.OPTL_Dynamic1D_B1_Pts.Selector4;

    /* Sum: '<S55>/Summation4' incorporates:
     *  Product: '<S26>/Product11'
     *  Product: '<S55>/Multiplication'
     *  Sum: '<S55>/Summation'
     */
    rtb_Min1 = (((HSCR_ac_B.OPTL_Dynamic1D_B1_Pts.Selector3 *
                  HSCR_ac_B.OPTL_Dynamic1D_B1_Pts.Selector3) - rtb_Abs) *
                HSCR_ac_B.OPTL_1DAxis34ptsB.fra) + rtb_Abs;

    /* Outputs for Atomic SubSystem: '<S26>/OPTL_Dynamic1D_B2_Pts' */
    /* Constant: '<S53>/Calib' */
    HSCR_ac_OPTL_Dynamic1D_A1_Pts(HSCR_ac_B.OPTL_1DAxis34ptsB.UpperIndex,
        HSCR_ac_B.OPTL_1DAxis34ptsB.LowerIndex,
        (Rte_Prm_KaHSCR_k_Donut_Space_Coefs_B2_KaHSCR_k_Donut_Space_Coefs_B2()),
        &HSCR_ac_B.OPTL_Dynamic1D_B2_Pts);

    /* End of Outputs for SubSystem: '<S26>/OPTL_Dynamic1D_B2_Pts' */

    /* Sum: '<S26>/Summation3' incorporates:
     *  Product: '<S26>/Product14'
     */
    rtb_Abs = HSCR_ac_B.OPTL_Dynamic1D_B1_Pts.Selector4 *
        HSCR_ac_B.OPTL_Dynamic1D_B2_Pts.Selector4;

    /* Sum: '<S56>/Summation4' incorporates:
     *  Product: '<S26>/Product13'
     *  Product: '<S56>/Multiplication'
     *  Sum: '<S56>/Summation'
     */
    rtb_Summation4_bb = (((HSCR_ac_B.OPTL_Dynamic1D_B1_Pts.Selector3 *
                           HSCR_ac_B.OPTL_Dynamic1D_B2_Pts.Selector3) - rtb_Abs)
                         * HSCR_ac_B.OPTL_1DAxis34ptsB.fra) + rtb_Abs;

    /* Sum: '<S26>/Summation3' incorporates:
     *  Product: '<S26>/Product9'
     */
    rtb_Abs = HSCR_ac_B.OPTL_Dynamic1D_B2_Pts.Selector4 *
        HSCR_ac_B.OPTL_Dynamic1D_B2_Pts.Selector4;

    /* Sum: '<S57>/Summation4' incorporates:
     *  Product: '<S26>/Product8'
     *  Product: '<S57>/Multiplication'
     *  Sum: '<S57>/Summation'
     */
    rtb_TmpSignalConversionAtVeHADR_n_FrntMt =
        (((HSCR_ac_B.OPTL_Dynamic1D_B2_Pts.Selector3 *
           HSCR_ac_B.OPTL_Dynamic1D_B2_Pts.Selector3) - rtb_Abs) *
         HSCR_ac_B.OPTL_1DAxis34ptsB.fra) + rtb_Abs;

    /* Outputs for Atomic SubSystem: '<S26>/OPTL_Dynamic1D_Cb_Pts' */
    /* Constant: '<S54>/Calib' */
    HSCR_ac_OPTL_Dynamic1D_A1_Pts(HSCR_ac_B.OPTL_1DAxis34ptsB.UpperIndex,
        HSCR_ac_B.OPTL_1DAxis34ptsB.LowerIndex,
        (Rte_Prm_KaHSCR_k_Donut_Space_Coefs_D_KaHSCR_k_Donut_Space_Coefs_D()),
        &HSCR_ac_B.OPTL_Dynamic1D_Cb_Pts);

    /* End of Outputs for SubSystem: '<S26>/OPTL_Dynamic1D_Cb_Pts' */

    /* Switch: '<S66>/Switch' */
    if (rtb_Min1 >= 0.0F)
    {
        /* Sum: '<S26>/Summation3' incorporates:
         *  Sqrt: '<S66>/Sqrt'
         */
        rtb_Abs = sqrtf(rtb_Min1);
    }
    else
    {
        /* Sum: '<S26>/Summation3' incorporates:
         *  Constant: '<S66>/Zero'
         */
        rtb_Abs = 0.0F;
    }

    /* End of Switch: '<S66>/Switch' */

    /* Product: '<S26>/Product15' */
    rtb_Min1 = (1.0F / rtb_Abs) * rtb_Summation4_bb;

    /* If: '<S26>/If1' */
    if (VaHSCC_n_MtrSpdBlnd[1] >= 0.0F)
    {
        /* Outputs for IfAction SubSystem: '<S26>/Motor_B_Forward' incorporates:
         *  ActionPort: '<S59>/Action Port'
         */
        HSCR_ac_Motor_A_Forward(rtb_Min1, &HSCR_ac_B.Merge1);

        /* End of Outputs for SubSystem: '<S26>/Motor_B_Forward' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S26>/Motor_B_Reverse' incorporates:
         *  ActionPort: '<S60>/Action Port'
         */
        HSCR_ac_Motor_A_Reverse(rtb_Min1, &HSCR_ac_B.Merge1);

        /* End of Outputs for SubSystem: '<S26>/Motor_B_Reverse' */
    }

    /* End of If: '<S26>/If1' */

    /* SignalConversion generated from: '<S1>/B1' incorporates:
     *  Gain: '<S65>/Gain'
     *  Outport: '<Root>/VeHSCR_r_DonutSpaceCoefB1'
     */
    (void)Rte_Write_VeHSCR_r_DonutSpaceCoefB1_Value(rtb_Abs);

    /* Sum: '<S26>/Summation3' incorporates:
     *  Product: '<S26>/Product10'
     *  Product: '<S58>/Multiplication'
     *  Sum: '<S58>/Summation'
     *  Sum: '<S58>/Summation4'
     */
    rtb_Abs = ((((HSCR_ac_B.OPTL_Dynamic1D_Cb_Pts.Selector3 -
                  HSCR_ac_B.OPTL_Dynamic1D_Cb_Pts.Selector4) *
                 HSCR_ac_B.OPTL_1DAxis34ptsB.fra) +
                HSCR_ac_B.OPTL_Dynamic1D_Cb_Pts.Selector4) +
               rtb_TmpSignalConversionAtVeHADR_n_FrntMt) - (rtb_Min1 * rtb_Min1);

    /* Outputs for Atomic SubSystem: '<S27>/OPTL_1DAxis34ptsC' */
    /* Abs: '<S27>/Abs1' incorporates:
     *  Constant: '<S69>/Calib'
     */
    HSCR_ac_OPTL_1DAxis34ptsA(fabsf(VaHSCC_n_MtrSpdBlnd[2]),
        (Rte_Prm_KaHSCR_n_DonutSpaceCoeffs_AxisC_KaHSCR_n_DonutSpaceCoeffs_AxisC
         ()), &HSCR_ac_B.OPTL_1DAxis34ptsC);

    /* End of Outputs for SubSystem: '<S27>/OPTL_1DAxis34ptsC' */

    /* Outputs for Atomic SubSystem: '<S27>/OPTL_Dynamic1D_C1_Pts' */
    /* Constant: '<S70>/Calib' */
    HSCR_ac_OPTL_Dynamic1D_A1_Pts(HSCR_ac_B.OPTL_1DAxis34ptsC.UpperIndex,
        HSCR_ac_B.OPTL_1DAxis34ptsC.LowerIndex,
        (Rte_Prm_KaHSCR_k_Donut_Space_Coefs_C1_KaHSCR_k_Donut_Space_Coefs_C1()),
        &HSCR_ac_B.OPTL_Dynamic1D_C1_Pts);

    /* End of Outputs for SubSystem: '<S27>/OPTL_Dynamic1D_C1_Pts' */

    /* Sum: '<S27>/Summation3' incorporates:
     *  Product: '<S27>/Product12'
     */
    rtb_TmpSignalConversionAtVeHADR_n_FrntMt =
        HSCR_ac_B.OPTL_Dynamic1D_C1_Pts.Selector4 *
        HSCR_ac_B.OPTL_Dynamic1D_C1_Pts.Selector4;

    /* Sum: '<S73>/Summation4' incorporates:
     *  Product: '<S27>/Product11'
     *  Product: '<S73>/Multiplication'
     *  Sum: '<S73>/Summation'
     */
    rtb_Summation4_bb = (((HSCR_ac_B.OPTL_Dynamic1D_C1_Pts.Selector3 *
                           HSCR_ac_B.OPTL_Dynamic1D_C1_Pts.Selector3) -
                          rtb_TmpSignalConversionAtVeHADR_n_FrntMt) *
                         HSCR_ac_B.OPTL_1DAxis34ptsC.fra) +
        rtb_TmpSignalConversionAtVeHADR_n_FrntMt;

    /* Outputs for Atomic SubSystem: '<S27>/OPTL_Dynamic1D_C2_Pts' */
    /* Constant: '<S71>/Calib' */
    HSCR_ac_OPTL_Dynamic1D_A1_Pts(HSCR_ac_B.OPTL_1DAxis34ptsC.UpperIndex,
        HSCR_ac_B.OPTL_1DAxis34ptsC.LowerIndex,
        (Rte_Prm_KaHSCR_k_Donut_Space_Coefs_C2_KaHSCR_k_Donut_Space_Coefs_C2()),
        &HSCR_ac_B.OPTL_Dynamic1D_C2_Pts);

    /* End of Outputs for SubSystem: '<S27>/OPTL_Dynamic1D_C2_Pts' */

    /* Sum: '<S27>/Summation3' incorporates:
     *  Product: '<S27>/Product14'
     */
    rtb_TmpSignalConversionAtVeHADR_n_FrntMt =
        HSCR_ac_B.OPTL_Dynamic1D_C1_Pts.Selector4 *
        HSCR_ac_B.OPTL_Dynamic1D_C2_Pts.Selector4;

    /* Sum: '<S74>/Summation4' incorporates:
     *  Product: '<S27>/Product13'
     *  Product: '<S74>/Multiplication'
     *  Sum: '<S74>/Summation'
     */
    rtb_Summation4_m5 = (((HSCR_ac_B.OPTL_Dynamic1D_C1_Pts.Selector3 *
                           HSCR_ac_B.OPTL_Dynamic1D_C2_Pts.Selector3) -
                          rtb_TmpSignalConversionAtVeHADR_n_FrntMt) *
                         HSCR_ac_B.OPTL_1DAxis34ptsC.fra) +
        rtb_TmpSignalConversionAtVeHADR_n_FrntMt;

    /* Sum: '<S27>/Summation3' incorporates:
     *  Product: '<S27>/Product9'
     */
    rtb_TmpSignalConversionAtVeHADR_n_FrntMt =
        HSCR_ac_B.OPTL_Dynamic1D_C2_Pts.Selector4 *
        HSCR_ac_B.OPTL_Dynamic1D_C2_Pts.Selector4;

    /* Sum: '<S75>/Summation4' incorporates:
     *  Product: '<S27>/Product8'
     *  Product: '<S75>/Multiplication'
     *  Sum: '<S75>/Summation'
     */
    rtb_Min1 = (((HSCR_ac_B.OPTL_Dynamic1D_C2_Pts.Selector3 *
                  HSCR_ac_B.OPTL_Dynamic1D_C2_Pts.Selector3) -
                 rtb_TmpSignalConversionAtVeHADR_n_FrntMt) *
                HSCR_ac_B.OPTL_1DAxis34ptsC.fra) +
        rtb_TmpSignalConversionAtVeHADR_n_FrntMt;

    /* Outputs for Atomic SubSystem: '<S27>/OPTL_Dynamic1D_Cc_Pts' */
    /* Constant: '<S72>/Calib' */
    HSCR_ac_OPTL_Dynamic1D_A1_Pts(HSCR_ac_B.OPTL_1DAxis34ptsC.UpperIndex,
        HSCR_ac_B.OPTL_1DAxis34ptsC.LowerIndex,
        (Rte_Prm_KaHSCR_k_Donut_Space_Coefs_E_KaHSCR_k_Donut_Space_Coefs_E()),
        &HSCR_ac_B.OPTL_Dynamic1D_Cc_Pts);

    /* End of Outputs for SubSystem: '<S27>/OPTL_Dynamic1D_Cc_Pts' */

    /* Switch: '<S84>/Switch' */
    if (rtb_Summation4_bb >= 0.0F)
    {
        /* Sum: '<S27>/Summation3' incorporates:
         *  Sqrt: '<S84>/Sqrt'
         */
        rtb_TmpSignalConversionAtVeHADR_n_FrntMt = sqrtf(rtb_Summation4_bb);
    }
    else
    {
        /* Sum: '<S27>/Summation3' incorporates:
         *  Constant: '<S84>/Zero'
         */
        rtb_TmpSignalConversionAtVeHADR_n_FrntMt = 0.0F;
    }

    /* End of Switch: '<S84>/Switch' */

    /* Product: '<S27>/Product15' */
    rtb_Summation4_bb = (1.0F / rtb_TmpSignalConversionAtVeHADR_n_FrntMt) *
        rtb_Summation4_m5;

    /* If: '<S27>/If1' */
    if (VaHSCC_n_MtrSpdBlnd[2] >= 0.0F)
    {
        /* Outputs for IfAction SubSystem: '<S27>/Motor_B_Forward' incorporates:
         *  ActionPort: '<S77>/Action Port'
         */
        HSCR_ac_Motor_A_Forward(rtb_Summation4_bb, &HSCR_ac_B.Merge1_l);

        /* End of Outputs for SubSystem: '<S27>/Motor_B_Forward' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S27>/Motor_B_Reverse' incorporates:
         *  ActionPort: '<S78>/Action Port'
         */
        HSCR_ac_Motor_A_Reverse(rtb_Summation4_bb, &HSCR_ac_B.Merge1_l);

        /* End of Outputs for SubSystem: '<S27>/Motor_B_Reverse' */
    }

    /* End of If: '<S27>/If1' */

    /* SignalConversion generated from: '<S1>/C1' incorporates:
     *  Gain: '<S83>/Gain'
     *  Outport: '<Root>/VeHSCR_r_DonutSpaceCoefC1'
     */
    (void)Rte_Write_VeHSCR_r_DonutSpaceCoefC1_Value
        (rtb_TmpSignalConversionAtVeHADR_n_FrntMt);

    /* Sum: '<S27>/Summation3' incorporates:
     *  Product: '<S27>/Product10'
     *  Product: '<S76>/Multiplication'
     *  Sum: '<S76>/Summation'
     *  Sum: '<S76>/Summation4'
     */
    rtb_TmpSignalConversionAtVeHADR_n_FrntMt =
        ((((HSCR_ac_B.OPTL_Dynamic1D_Cc_Pts.Selector3 -
            HSCR_ac_B.OPTL_Dynamic1D_Cc_Pts.Selector4) *
           HSCR_ac_B.OPTL_1DAxis34ptsC.fra) +
          HSCR_ac_B.OPTL_Dynamic1D_Cc_Pts.Selector4) + rtb_Min1) -
        (rtb_Summation4_bb * rtb_Summation4_bb);

    /* Update for UnitDelay: '<S5>/Unit Delay1' incorporates:
     *  Constant: '<S5>/TRUE Constant'
     */
    HSCR_ac_DW.UnitDelay1_DSTATE = true;

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeHSCR_r_DonutSpaceCoefA2' incorporates:
     *  SignalConversion generated from: '<S1>/A2'
     */
    (void)Rte_Write_VeHSCR_r_DonutSpaceCoefA2_Value(HSCR_ac_B.Merge);

    /* Outport: '<Root>/VeHSCR_r_DonutSpaceCoefB2' incorporates:
     *  SignalConversion generated from: '<S1>/B2'
     */
    (void)Rte_Write_VeHSCR_r_DonutSpaceCoefB2_Value(HSCR_ac_B.Merge1);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/HSCC_Calculate_Donut_Space_Coefficients'
     */
    /* Outport: '<Root>/VeHSCR_r_DonutSpaceCoefC' incorporates:
     *  SignalConversion generated from: '<S1>/C'
     *  Sum: '<S9>/Summation2'
     */
    (void)Rte_Write_VeHSCR_r_DonutSpaceCoefC_Value
        ((rtb_TmpSignalConversionAtVeHADR_n_RearMt + rtb_Abs) +
         rtb_TmpSignalConversionAtVeHADR_n_FrntMt);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeHSCR_r_DonutSpaceCoefC2' incorporates:
     *  SignalConversion generated from: '<S1>/C2'
     */
    (void)Rte_Write_VeHSCR_r_DonutSpaceCoefC2_Value(HSCR_ac_B.Merge1_l);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/HSCC_Calculate_Donut_Space_Coefficients'
     */
    /* Outport: '<Root>/VeHSCR_r_DonutSpaceCoefCa' incorporates:
     *  Gain: '<S30>/Gain'
     *  SignalConversion generated from: '<S1>/Ca'
     */
    (void)Rte_Write_VeHSCR_r_DonutSpaceCoefCa_Value
        (rtb_TmpSignalConversionAtVeHADR_n_RearMt);

    /* Outport: '<Root>/VeHSCR_r_DonutSpaceCoefCb' incorporates:
     *  Gain: '<S31>/Gain'
     *  SignalConversion generated from: '<S1>/Cb'
     */
    (void)Rte_Write_VeHSCR_r_DonutSpaceCoefCb_Value(rtb_Abs);

    /* Outport: '<Root>/VeHSCR_r_DonutSpaceCoefCc' incorporates:
     *  Gain: '<S32>/Gain'
     *  SignalConversion generated from: '<S1>/Cc'
     */
    (void)Rte_Write_VeHSCR_r_DonutSpaceCoefCc_Value
        (rtb_TmpSignalConversionAtVeHADR_n_FrntMt);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Model step function for TID2 */
FUNC(void, HSCR_CODE) HSCR_SlowTEF(void) /* Explicit Task: SlowTEF */
{
    float32 rtb_Switch2_f;
    float32 rtb_Switch_o0;
    float32 rtb_TmpSignalConversionAtVeTFTR_T_TransO;
    float32 tmpRead_1;
    boolean tmpRead;
    boolean tmpRead_0;
    boolean tmpRead_2;

    /* RootInportFunctionCallGenerator generated from: '<Root>/SlowTEF' incorporates:
     *  SubSystem: '<Root>/HSCR_SlowTEF'
     */
    /* SignalConversion generated from: '<S3>/VeTFTR_T_TransOilTemp' incorporates:
     *  Inport: '<Root>/VeTFTR_T_TransOilTemp'
     */
    (void)Rte_Read_VeTFTR_T_TransOilTemp_Value
        (&rtb_TmpSignalConversionAtVeTFTR_T_TransO);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/SlowTEF' */

    /* Inport: '<Root>/VeMSPR_b_MaxP1SpdLmtFA' */
    (void)Rte_Read_VeMSPR_b_MaxP1SpdLmtFA_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/SlowTEF' incorporates:
     *  SubSystem: '<Root>/HSCR_SlowTEF'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/HSCC_Calculate_Motor_Speed_Limit'
     */
    /* Switch: '<S127>/Switch' incorporates:
     *  Inport: '<Root>/VeMSPR_n_MaxP1SpdLmt'
     */
    if (tmpRead)
    {
        /* Switch: '<S127>/Switch' incorporates:
         *  Lookup_n-D: '<S129>/Vector'
         *  SignalConversion generated from: '<S3>/VeTFTR_T_TransOilTemp'
         */
        rtb_Switch_o0 = look1_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVeTFTR_T_TransO, ((const float32 *)
              &(KxHSCR_n_MtrASpdMax[0])), ((const float32 *)
              &(KtHSCR_n_MtrASpdMax[0])), 6U);
    }
    else
    {
        (void)Rte_Read_VeMSPR_n_MaxP1SpdLmt_Value(&rtb_Switch_o0);

        /* Switch: '<S127>/Switch' incorporates:
         *  Inport: '<Root>/VeMSPR_n_MaxP1SpdLmt'
         *  Lookup_n-D: '<S129>/Vector'
         *  MinMax: '<S127>/MinMax'
         *  SignalConversion generated from: '<S3>/VeTFTR_T_TransOilTemp'
         */
        rtb_Switch_o0 = fminf(look1_iflf_binlca_16a
                              (rtb_TmpSignalConversionAtVeTFTR_T_TransO, ((const
            float32 *)&(KxHSCR_n_MtrASpdMax[0])), ((const float32 *)
                                &(KtHSCR_n_MtrASpdMax[0])), 6U), rtb_Switch_o0);
    }

    /* End of Switch: '<S127>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/SlowTEF' */

    /* Inport: '<Root>/VeMSPR_b_MaxP2SpdLmtFA' */
    (void)Rte_Read_VeMSPR_b_MaxP2SpdLmtFA_Value(&tmpRead_0);

    /* RootInportFunctionCallGenerator generated from: '<Root>/SlowTEF' incorporates:
     *  SubSystem: '<Root>/HSCR_SlowTEF'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/HSCC_Calculate_Motor_Speed_Limit'
     */
    /* Switch: '<S127>/Switch1' incorporates:
     *  Inport: '<Root>/VeMSPR_n_MaxP2SpdLmt'
     */
    if (tmpRead_0)
    {
        /* Switch: '<S127>/Switch2' incorporates:
         *  Lookup_n-D: '<S130>/Vector'
         *  SignalConversion generated from: '<S3>/VeTFTR_T_TransOilTemp'
         */
        rtb_Switch2_f = look1_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVeTFTR_T_TransO, ((const float32 *)
              &(KxHSCR_n_MtrBSpdMax[0])), ((const float32 *)
              &(KtHSCR_n_MtrBSpdMax[0])), 6U);
    }
    else
    {
        (void)Rte_Read_VeMSPR_n_MaxP2SpdLmt_Value(&rtb_Switch2_f);

        /* Switch: '<S127>/Switch2' incorporates:
         *  Inport: '<Root>/VeMSPR_n_MaxP2SpdLmt'
         *  Lookup_n-D: '<S130>/Vector'
         *  MinMax: '<S127>/MinMax1'
         *  SignalConversion generated from: '<S3>/VeTFTR_T_TransOilTemp'
         */
        rtb_Switch2_f = fminf(look1_iflf_binlca_16a
                              (rtb_TmpSignalConversionAtVeTFTR_T_TransO, ((const
            float32 *)&(KxHSCR_n_MtrBSpdMax[0])), ((const float32 *)
                                &(KtHSCR_n_MtrBSpdMax[0])), 6U), rtb_Switch2_f);
    }

    /* End of Switch: '<S127>/Switch1' */

    /* SignalConversion generated from: '<S3>/Nb_max' incorporates:
     *  Gain: '<S133>/Gain'
     *  Outport: '<Root>/VeHSCR_n_Max_MtrB_Spd'
     */
    (void)Rte_Write_VeHSCR_n_Max_MtrB_Spd_Value(rtb_Switch2_f);

    /* Sum: '<S127>/Summation1' incorporates:
     *  Constant: '<S127>/Constant Value1'
     */
    VeHSCC_n_Min_MtrA_Spd = 0.0F - rtb_Switch_o0;

    /* Sum: '<S127>/Summation' incorporates:
     *  Constant: '<S127>/Constant Value1'
     */
    VeHSCC_n_Min_MtrB_Spd = 0.0F - rtb_Switch2_f;

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/SlowTEF' */

    /* Inport: '<Root>/VeMSPR_b_MaxMtrCSpdLmt_FA' */
    (void)Rte_Read_VeMSPR_b_MaxMtrCSpdLmt_FA_Value(&tmpRead_2);

    /* RootInportFunctionCallGenerator generated from: '<Root>/SlowTEF' incorporates:
     *  SubSystem: '<Root>/HSCR_SlowTEF'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/HSCC_Calculate_Motor_Speed_Limit'
     */
    /* Switch: '<S127>/Switch2' incorporates:
     *  Inport: '<Root>/VeMSPR_n_MaxMtrCSpdLmt'
     */
    if (tmpRead_2)
    {
        /* Switch: '<S127>/Switch2' incorporates:
         *  Lookup_n-D: '<S131>/Vector'
         *  SignalConversion generated from: '<S3>/VeTFTR_T_TransOilTemp'
         */
        rtb_Switch2_f = look1_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVeTFTR_T_TransO, ((const float32 *)
              &(KxHSCR_n_MtrCSpdMax[0])), ((const float32 *)
              &(KtHSCR_n_MtrCSpdMax[0])), 6U);
    }
    else
    {
        (void)Rte_Read_VeMSPR_n_MaxMtrCSpdLmt_Value(&tmpRead_1);

        /* Switch: '<S127>/Switch2' incorporates:
         *  Inport: '<Root>/VeMSPR_n_MaxMtrCSpdLmt'
         *  Lookup_n-D: '<S131>/Vector'
         *  MinMax: '<S127>/MinMax2'
         *  SignalConversion generated from: '<S3>/VeTFTR_T_TransOilTemp'
         */
        rtb_Switch2_f = fminf(look1_iflf_binlca_16a
                              (rtb_TmpSignalConversionAtVeTFTR_T_TransO, ((const
            float32 *)&(KxHSCR_n_MtrCSpdMax[0])), ((const float32 *)
                                &(KtHSCR_n_MtrCSpdMax[0])), 6U), tmpRead_1);
    }

    /* End of Switch: '<S127>/Switch2' */

    /* Sum: '<S127>/Summation2' incorporates:
     *  Constant: '<S127>/Constant Value1'
     */
    VeHSCC_n_Min_MtrC_Spd = 0.0F - rtb_Switch2_f;

    /* Outport: '<Root>/VeHSCR_n_Max_MtrA_Spd' incorporates:
     *  Gain: '<S132>/Gain'
     *  SignalConversion generated from: '<S3>/Na_max'
     */
    (void)Rte_Write_VeHSCR_n_Max_MtrA_Spd_Value(rtb_Switch_o0);

    /* Outport: '<Root>/VeHSCR_n_Min_MtrA_Spd' incorporates:
     *  Gain: '<S134>/Gain'
     *  SignalConversion generated from: '<S3>/Na_min'
     */
    (void)Rte_Write_VeHSCR_n_Min_MtrA_Spd_Value(VeHSCC_n_Min_MtrA_Spd);

    /* Outport: '<Root>/VeHSCR_n_Min_MtrB_Spd' incorporates:
     *  Gain: '<S135>/Gain'
     *  SignalConversion generated from: '<S3>/Nb_min'
     */
    (void)Rte_Write_VeHSCR_n_Min_MtrB_Spd_Value(VeHSCC_n_Min_MtrB_Spd);

    /* Outport: '<Root>/VeHSCR_n_Max_MtrC_Spd' incorporates:
     *  Gain: '<S136>/Gain'
     *  SignalConversion generated from: '<S3>/Nc_max'
     */
    (void)Rte_Write_VeHSCR_n_Max_MtrC_Spd_Value(rtb_Switch2_f);

    /* Outport: '<Root>/VeHSCR_n_Min_MtrC_Spd' incorporates:
     *  Gain: '<S137>/Gain'
     *  SignalConversion generated from: '<S3>/Nc_min'
     */
    (void)Rte_Write_VeHSCR_n_Min_MtrC_Spd_Value(VeHSCC_n_Min_MtrC_Spd);

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/SlowTEF' */
}

/* Output function */
FUNC(void, HSCR_CODE) HSCR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/HSCR_PwrOn'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/HSCO_Output_Initialization'
     */
    /* SignalConversion generated from: '<S126>/A1' */
    HSCR_ac_B.LeHSCR_r_InitDonutSpaceCoefA1 = 0.0F;

    /* SignalConversion generated from: '<S126>/A2' */
    HSCR_ac_B.LeHSCR_r_InitDonutSpaceCoefA2 = 0.0F;

    /* SignalConversion generated from: '<S126>/B1' */
    HSCR_ac_B.LeHSCR_r_InitDonutSpaceCoefB1 = 0.0F;

    /* SignalConversion generated from: '<S126>/B2' */
    HSCR_ac_B.LeHSCR_r_InitDonutSpaceCoefB2 = 0.0F;

    /* SignalConversion generated from: '<S126>/C' */
    HSCR_ac_B.LeHSCR_r_InitDonutSpaceCoefC = 25.0F;

    /* SignalConversion generated from: '<S126>/Ca' */
    HSCR_ac_B.LeHSCR_r_InitDonutSpaceCoefCa = 0.0F;

    /* SignalConversion generated from: '<S126>/Cb' */
    HSCR_ac_B.LeHSCR_r_InitDonutSpaceCoefCb = 0.0F;

    /* SignalConversion generated from: '<S126>/Na_Min' */
    HSCR_ac_B.LeHSCR_n_Min_MtrA_Spd = -100.0F;

    /* SignalConversion generated from: '<S126>/Na_Max' */
    HSCR_ac_B.LeHSCR_n_Max_MtrA_Spd = 100.0F;

    /* SignalConversion generated from: '<S126>/Nb_Min' */
    HSCR_ac_B.LeHSCR_n_Min_MtrB_Spd = -100.0F;

    /* SignalConversion generated from: '<S126>/Nb_Max' */
    HSCR_ac_B.LeHSCR_n_Max_MtrB_Spd = 100.0F;

    /* SignalConversion generated from: '<S126>/Nc_Min' */
    HSCR_ac_B.LeHSCR_n_Min_MtrC_Spd = -100.0F;

    /* SignalConversion generated from: '<S126>/Nc_Max' */
    HSCR_ac_B.LeHSCR_n_Max_MtrC_Spd = 100.0F;

    /* SignalConversion generated from: '<S126>/C1' */
    HSCR_ac_B.LeHSCR_r_InitDonutSpaceCoefC1 = 0.0F;

    /* SignalConversion generated from: '<S126>/C2' */
    HSCR_ac_B.LeHSCR_r_InitDonutSpaceCoefC2 = 0.0F;

    /* SignalConversion generated from: '<S126>/Cc' */
    HSCR_ac_B.LeHSCR_r_InitDonutSpaceCoefCc = 0.0F;

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeHSCR_r_DonutSpaceCoefA1' incorporates:
     *  SignalConversion generated from: '<S2>/A1'
     */
    (void)Rte_Write_VeHSCR_r_DonutSpaceCoefA1_Value
        (HSCR_ac_B.LeHSCR_r_InitDonutSpaceCoefA1);

    /* Outport: '<Root>/VeHSCR_r_DonutSpaceCoefA2' incorporates:
     *  SignalConversion generated from: '<S2>/A2'
     */
    (void)Rte_Write_VeHSCR_r_DonutSpaceCoefA2_Value
        (HSCR_ac_B.LeHSCR_r_InitDonutSpaceCoefA2);

    /* Outport: '<Root>/VeHSCR_r_DonutSpaceCoefB1' incorporates:
     *  SignalConversion generated from: '<S2>/B1'
     */
    (void)Rte_Write_VeHSCR_r_DonutSpaceCoefB1_Value
        (HSCR_ac_B.LeHSCR_r_InitDonutSpaceCoefB1);

    /* Outport: '<Root>/VeHSCR_r_DonutSpaceCoefB2' incorporates:
     *  SignalConversion generated from: '<S2>/B2'
     */
    (void)Rte_Write_VeHSCR_r_DonutSpaceCoefB2_Value
        (HSCR_ac_B.LeHSCR_r_InitDonutSpaceCoefB2);

    /* Outport: '<Root>/VeHSCR_r_DonutSpaceCoefC' incorporates:
     *  SignalConversion generated from: '<S2>/C'
     */
    (void)Rte_Write_VeHSCR_r_DonutSpaceCoefC_Value
        (HSCR_ac_B.LeHSCR_r_InitDonutSpaceCoefC);

    /* Outport: '<Root>/VeHSCR_r_DonutSpaceCoefC1' incorporates:
     *  SignalConversion generated from: '<S2>/C1'
     */
    (void)Rte_Write_VeHSCR_r_DonutSpaceCoefC1_Value
        (HSCR_ac_B.LeHSCR_r_InitDonutSpaceCoefC1);

    /* Outport: '<Root>/VeHSCR_r_DonutSpaceCoefC2' incorporates:
     *  SignalConversion generated from: '<S2>/C2'
     */
    (void)Rte_Write_VeHSCR_r_DonutSpaceCoefC2_Value
        (HSCR_ac_B.LeHSCR_r_InitDonutSpaceCoefC2);

    /* Outport: '<Root>/VeHSCR_r_DonutSpaceCoefCa' incorporates:
     *  SignalConversion generated from: '<S2>/Ca'
     */
    (void)Rte_Write_VeHSCR_r_DonutSpaceCoefCa_Value
        (HSCR_ac_B.LeHSCR_r_InitDonutSpaceCoefCa);

    /* Outport: '<Root>/VeHSCR_r_DonutSpaceCoefCb' incorporates:
     *  SignalConversion generated from: '<S2>/Cb'
     */
    (void)Rte_Write_VeHSCR_r_DonutSpaceCoefCb_Value
        (HSCR_ac_B.LeHSCR_r_InitDonutSpaceCoefCb);

    /* Outport: '<Root>/VeHSCR_r_DonutSpaceCoefCc' incorporates:
     *  SignalConversion generated from: '<S2>/Cc'
     */
    (void)Rte_Write_VeHSCR_r_DonutSpaceCoefCc_Value
        (HSCR_ac_B.LeHSCR_r_InitDonutSpaceCoefCc);

    /* Outport: '<Root>/VeHSCR_n_Max_MtrA_Spd' incorporates:
     *  SignalConversion generated from: '<S2>/Na_Max'
     */
    (void)Rte_Write_VeHSCR_n_Max_MtrA_Spd_Value(HSCR_ac_B.LeHSCR_n_Max_MtrA_Spd);

    /* Outport: '<Root>/VeHSCR_n_Min_MtrA_Spd' incorporates:
     *  SignalConversion generated from: '<S2>/Na_Min'
     */
    (void)Rte_Write_VeHSCR_n_Min_MtrA_Spd_Value(HSCR_ac_B.LeHSCR_n_Min_MtrA_Spd);

    /* Outport: '<Root>/VeHSCR_n_Max_MtrB_Spd' incorporates:
     *  SignalConversion generated from: '<S2>/Nb_Max'
     */
    (void)Rte_Write_VeHSCR_n_Max_MtrB_Spd_Value(HSCR_ac_B.LeHSCR_n_Max_MtrB_Spd);

    /* Outport: '<Root>/VeHSCR_n_Min_MtrB_Spd' incorporates:
     *  SignalConversion generated from: '<S2>/Nb_Min'
     */
    (void)Rte_Write_VeHSCR_n_Min_MtrB_Spd_Value(HSCR_ac_B.LeHSCR_n_Min_MtrB_Spd);

    /* Outport: '<Root>/VeHSCR_n_Max_MtrC_Spd' incorporates:
     *  SignalConversion generated from: '<S2>/Nc_Max'
     */
    (void)Rte_Write_VeHSCR_n_Max_MtrC_Spd_Value(HSCR_ac_B.LeHSCR_n_Max_MtrC_Spd);

    /* Outport: '<Root>/VeHSCR_n_Min_MtrC_Spd' incorporates:
     *  SignalConversion generated from: '<S2>/Nc_Min'
     */
    (void)Rte_Write_VeHSCR_n_Min_MtrC_Spd_Value(HSCR_ac_B.LeHSCR_n_Min_MtrC_Spd);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, HSCR_CODE) HSCR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/HSCR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/HSCO_Output_Initialization'
     */
    /* SystemInitialize for SignalConversion generated from: '<S126>/C' */
    HSCR_ac_B.LeHSCR_r_InitDonutSpaceCoefC = 25.0F;

    /* SystemInitialize for SignalConversion generated from: '<S126>/Na_Min' */
    HSCR_ac_B.LeHSCR_n_Min_MtrA_Spd = -100.0F;

    /* SystemInitialize for SignalConversion generated from: '<S126>/Na_Max' */
    HSCR_ac_B.LeHSCR_n_Max_MtrA_Spd = 100.0F;

    /* SystemInitialize for SignalConversion generated from: '<S126>/Nb_Min' */
    HSCR_ac_B.LeHSCR_n_Min_MtrB_Spd = -100.0F;

    /* SystemInitialize for SignalConversion generated from: '<S126>/Nb_Max' */
    HSCR_ac_B.LeHSCR_n_Max_MtrB_Spd = 100.0F;

    /* SystemInitialize for SignalConversion generated from: '<S126>/Nc_Min' */
    HSCR_ac_B.LeHSCR_n_Min_MtrC_Spd = -100.0F;

    /* SystemInitialize for SignalConversion generated from: '<S126>/Nc_Max' */
    HSCR_ac_B.LeHSCR_n_Max_MtrC_Spd = 100.0F;

    /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
