/*
 * File: HSCR_ac.h
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

#ifndef RTW_HEADER_HSCR_ac_h_
#define RTW_HEADER_HSCR_ac_h_
#include <math.h>
#include "Rte_Type.h"
#ifndef HSCR_ac_COMMON_INCLUDES_
#define HSCR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_HSCR.h"
#endif                                 /* HSCR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals for system '<S25>/OPTL_1DAxis34ptsA' */
typedef struct
{
    float32 UpperIndex;                /* '<S43>/X_Data_and_Fractions' */
    float32 LowerIndex;                /* '<S43>/X_Data_and_Fractions' */
    float32 fra;                       /* '<S43>/X_Data_and_Fractions' */
}
B_OPTL_1DAxis34ptsA_HSCR_ac_T;

/* Block signals for system '<S25>/OPTL_Dynamic1D_A1_Pts' */
typedef struct
{
    float32 Selector3;                 /* '<S44>/Selector3' */
    float32 Selector4;                 /* '<S44>/Selector4' */
}
B_OPTL_Dynamic1D_A1_Pts_HSCR_ac_T;

/* Block signals (default storage) */
typedef struct tag_B_HSCR_ac_T
{
    float32 LeHSCR_r_InitDonutSpaceCoefA1;/* '<S126>/Constant Value1' */
    float32 LeHSCR_r_InitDonutSpaceCoefA2;/* '<S126>/Constant Value4' */
    float32 LeHSCR_r_InitDonutSpaceCoefB1;/* '<S126>/Constant Value6' */
    float32 LeHSCR_r_InitDonutSpaceCoefB2;/* '<S126>/Constant Value7' */
    float32 LeHSCR_r_InitDonutSpaceCoefC;/* '<S126>/Constant Value5' */
    float32 LeHSCR_r_InitDonutSpaceCoefCa;/* '<S126>/Constant Value8' */
    float32 LeHSCR_r_InitDonutSpaceCoefCb;/* '<S126>/Constant Value9' */
    float32 LeHSCR_n_Min_MtrA_Spd;     /* '<S126>/Constant Value2' */
    float32 LeHSCR_n_Max_MtrA_Spd;     /* '<S126>/Constant Value3' */
    float32 LeHSCR_n_Min_MtrB_Spd;     /* '<S126>/Constant Value10' */
    float32 LeHSCR_n_Max_MtrB_Spd;     /* '<S126>/Constant Value11' */
    float32 LeHSCR_n_Min_MtrC_Spd;     /* '<S126>/Constant Value12' */
    float32 LeHSCR_n_Max_MtrC_Spd;     /* '<S126>/Constant Value13' */
    float32 LeHSCR_r_InitDonutSpaceCoefC1;/* '<S126>/Constant Value14' */
    float32 LeHSCR_r_InitDonutSpaceCoefC2;/* '<S126>/Constant Value15' */
    float32 LeHSCR_r_InitDonutSpaceCoefCc;/* '<S126>/Constant Value16' */
    float32 Merge;                     /* '<S25>/Merge' */
    float32 Merge1;                    /* '<S26>/Merge1' */
    float32 Merge1_l;                  /* '<S27>/Merge1' */
    B_OPTL_Dynamic1D_A1_Pts_HSCR_ac_T OPTL_Dynamic1D_Cc_Pts;/* '<S27>/OPTL_Dynamic1D_Cc_Pts' */
    B_OPTL_Dynamic1D_A1_Pts_HSCR_ac_T OPTL_Dynamic1D_C2_Pts;/* '<S27>/OPTL_Dynamic1D_C2_Pts' */
    B_OPTL_Dynamic1D_A1_Pts_HSCR_ac_T OPTL_Dynamic1D_C1_Pts;/* '<S27>/OPTL_Dynamic1D_C1_Pts' */
    B_OPTL_1DAxis34ptsA_HSCR_ac_T OPTL_1DAxis34ptsC;/* '<S27>/OPTL_1DAxis34ptsC' */
    B_OPTL_Dynamic1D_A1_Pts_HSCR_ac_T OPTL_Dynamic1D_Cb_Pts;/* '<S26>/OPTL_Dynamic1D_Cb_Pts' */
    B_OPTL_Dynamic1D_A1_Pts_HSCR_ac_T OPTL_Dynamic1D_B2_Pts;/* '<S26>/OPTL_Dynamic1D_B2_Pts' */
    B_OPTL_Dynamic1D_A1_Pts_HSCR_ac_T OPTL_Dynamic1D_B1_Pts;/* '<S26>/OPTL_Dynamic1D_B1_Pts' */
    B_OPTL_1DAxis34ptsA_HSCR_ac_T OPTL_1DAxis34ptsB;/* '<S26>/OPTL_1DAxis34ptsB' */
    B_OPTL_Dynamic1D_A1_Pts_HSCR_ac_T OPTL_Dynamic1D_Ca_Pts;/* '<S25>/OPTL_Dynamic1D_Ca_Pts' */
    B_OPTL_Dynamic1D_A1_Pts_HSCR_ac_T OPTL_Dynamic1D_A2_Pts;/* '<S25>/OPTL_Dynamic1D_A2_Pts' */
    B_OPTL_Dynamic1D_A1_Pts_HSCR_ac_T OPTL_Dynamic1D_A1_Pts;/* '<S25>/OPTL_Dynamic1D_A1_Pts' */
    B_OPTL_1DAxis34ptsA_HSCR_ac_T OPTL_1DAxis34ptsA;/* '<S25>/OPTL_1DAxis34ptsA' */
}
B_HSCR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_HSCR_ac_T
{
    float32 UnitDelay3_DSTATE[3];      /* '<S5>/Unit Delay3' */
    float32 UnitDelay_DSTATE[3];       /* '<S5>/Unit Delay' */
    float32 UnitDelay_DSTATE_p;        /* '<S123>/Unit Delay' */
    float32 UnitDelay_DSTATE_i;        /* '<S113>/Unit Delay' */
    float32 UnitDelay_DSTATE_g;        /* '<S110>/Unit Delay' */
    float32 UnitDelay_DSTATE_g0;       /* '<S100>/Unit Delay' */
    float32 UnitDelay_DSTATE_b;        /* '<S97>/Unit Delay' */
    float32 UnitDelay_DSTATE_a;        /* '<S88>/Unit Delay' */
    boolean UnitDelay1_DSTATE;         /* '<S5>/Unit Delay1' */
    boolean UnitDelay_DSTATE_n;        /* '<S125>/Unit Delay' */
    boolean UnitDelay_DSTATE_j;        /* '<S116>/Unit Delay' */
    boolean UnitDelay_DSTATE_gr;       /* '<S112>/Unit Delay' */
    boolean UnitDelay_DSTATE_o;        /* '<S103>/Unit Delay' */
    boolean UnitDelay_DSTATE_ix;       /* '<S99>/Unit Delay' */
    boolean UnitDelay_DSTATE_f;        /* '<S90>/Unit Delay' */
    boolean UnitDelay_DSTATE_e[3];     /* '<S8>/Unit Delay' */
}
DW_HSCR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_HSCR
#include "MemMap.h"

extern VAR(B_HSCR_ac_T, HSCR_VAR_INIT) HSCR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_HSCR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_HSCR
#include "MemMap.h"

extern VAR(DW_HSCR_ac_T, HSCR_VAR_INIT) HSCR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_HSCR
#include "MemMap.h"

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'HSCR_ac'
 * '<S1>'   : 'HSCR_ac/HSCR_MedTEB'
 * '<S2>'   : 'HSCR_ac/HSCR_PwrOn'
 * '<S3>'   : 'HSCR_ac/HSCR_SlowTEF'
 * '<S4>'   : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients'
 * '<S5>'   : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/Blend_x_yTerm_TimeBased'
 * '<S6>'   : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/ClippedEstimatedSpeeds'
 * '<S7>'   : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/DeadBand'
 * '<S8>'   : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/EdgeRising'
 * '<S9>'   : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs'
 * '<S10>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HaHSCR_t_NegSpdBlenderTimeStep'
 * '<S11>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/KaHSCR_t_NegSpdBlenderTime'
 * '<S12>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/KeHSCR_b_ChsFrntMtrSpd_MtrA'
 * '<S13>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/KeHSCR_b_ChsFrntMtrSpd_MtrB'
 * '<S14>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/KeHSCR_b_ChsFrntMtrSpd_MtrC'
 * '<S15>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/SpeedBlending_Na'
 * '<S16>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/SpeedBlending_Nb'
 * '<S17>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/SpeedBlending_Nc'
 * '<S18>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/Blend_x_yTerm_TimeBased/Protected Division'
 * '<S19>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/ClippedEstimatedSpeeds/Limiter1'
 * '<S20>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/DeadBand/KaHSCR_b_EnblMtrSpdDeadBand'
 * '<S21>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/DeadBand/KaHSCR_n_NegSpdThld'
 * '<S22>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/DeadBand/KaHSCR_n_PosSpdThld'
 * '<S23>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/DeadBand/RightOpenInterval'
 * '<S24>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/DocBlock'
 * '<S25>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrA'
 * '<S26>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrB'
 * '<S27>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrC'
 * '<S28>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/Model Info1'
 * '<S29>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/Set Block'
 * '<S30>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/Set Block1'
 * '<S31>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/Set Block2'
 * '<S32>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/Set Block3'
 * '<S33>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrA/Constant Value'
 * '<S34>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrA/Constant Value1'
 * '<S35>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrA/Constant Value2'
 * '<S36>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrA/Constant Value3'
 * '<S37>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrA/HSCL_A1A1_1DInterpolation'
 * '<S38>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrA/HSCL_A1A2_1DInterpolation'
 * '<S39>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrA/HSCL_A2A2_1DInterpolation'
 * '<S40>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrA/HSCL_Ca_1DInterpolation'
 * '<S41>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrA/Motor_A_Forward'
 * '<S42>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrA/Motor_A_Reverse'
 * '<S43>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrA/OPTL_1DAxis34ptsA'
 * '<S44>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrA/OPTL_Dynamic1D_A1_Pts'
 * '<S45>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrA/OPTL_Dynamic1D_A2_Pts'
 * '<S46>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrA/OPTL_Dynamic1D_Ca_Pts'
 * '<S47>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrA/Set Block3'
 * '<S48>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrA/Square Root'
 * '<S49>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrA/Motor_A_Forward/Set Block'
 * '<S50>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrA/OPTL_1DAxis34ptsA/X_Data_and_Fractions'
 * '<S51>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrB/Constant Value4'
 * '<S52>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrB/Constant Value5'
 * '<S53>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrB/Constant Value6'
 * '<S54>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrB/Constant Value7'
 * '<S55>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrB/HSCL_B1B1_1DInterpolation'
 * '<S56>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrB/HSCL_B1B2_1DInterpolation'
 * '<S57>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrB/HSCL_B2B2_1DInterpolation'
 * '<S58>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrB/HSCL_Cb_1DInterpolation'
 * '<S59>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrB/Motor_B_Forward'
 * '<S60>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrB/Motor_B_Reverse'
 * '<S61>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrB/OPTL_1DAxis34ptsB'
 * '<S62>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrB/OPTL_Dynamic1D_B1_Pts'
 * '<S63>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrB/OPTL_Dynamic1D_B2_Pts'
 * '<S64>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrB/OPTL_Dynamic1D_Cb_Pts'
 * '<S65>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrB/Set Block4'
 * '<S66>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrB/Square Root1'
 * '<S67>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrB/Motor_B_Forward/Set Block'
 * '<S68>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrB/OPTL_1DAxis34ptsB/X_Data_and_Fractions'
 * '<S69>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrC/Constant Value4'
 * '<S70>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrC/Constant Value5'
 * '<S71>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrC/Constant Value6'
 * '<S72>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrC/Constant Value7'
 * '<S73>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrC/HSCL_C1C1_1DInterpolation'
 * '<S74>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrC/HSCL_C1C2_1DInterpolation'
 * '<S75>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrC/HSCL_C2C2_1DInterpolation'
 * '<S76>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrC/HSCL_Cc_1DInterpolation'
 * '<S77>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrC/Motor_B_Forward'
 * '<S78>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrC/Motor_B_Reverse'
 * '<S79>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrC/OPTL_1DAxis34ptsC'
 * '<S80>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrC/OPTL_Dynamic1D_C1_Pts'
 * '<S81>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrC/OPTL_Dynamic1D_C2_Pts'
 * '<S82>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrC/OPTL_Dynamic1D_Cc_Pts'
 * '<S83>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrC/Set Block4'
 * '<S84>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrC/Square Root1'
 * '<S85>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrC/Motor_B_Forward/Set Block'
 * '<S86>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrC/OPTL_1DAxis34ptsC/X_Data_and_Fractions'
 * '<S87>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/SpeedBlending_Na/ '
 * '<S88>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/SpeedBlending_Na/GradientLimiter'
 * '<S89>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/SpeedBlending_Na/HaHSCR_b_EnblEstdSpd'
 * '<S90>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/SpeedBlending_Na/Hysteresis_3'
 * '<S91>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/SpeedBlending_Na/KeHSCR_M_EstSpdBldrRstTh'
 * '<S92>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/SpeedBlending_Na/KeHSCR_M_EstSpdBldrTh_LSP'
 * '<S93>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/SpeedBlending_Na/KeHSCR_b_UseMtrA_EstSpd'
 * '<S94>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/SpeedBlending_Na/KeHSCR_dr_BlendFactorLD'
 * '<S95>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/SpeedBlending_Na/KeHSCR_dr_BlendFactorLU '
 * '<S96>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/SpeedBlending_Na/KeHSCR_t_TurnOffdelayTime'
 * '<S97>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/SpeedBlending_Na/Turn Off Delay Time'
 * '<S98>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/SpeedBlending_Na/GradientLimiter/Limiter'
 * '<S99>'  : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/SpeedBlending_Na/Turn Off Delay Time/EdgeFalling'
 * '<S100>' : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/SpeedBlending_Nb/GradientLimiter'
 * '<S101>' : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/SpeedBlending_Nb/HaHSCR_b_EnblEstdSpd'
 * '<S102>' : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/SpeedBlending_Nb/HeHSCR_t_dT'
 * '<S103>' : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/SpeedBlending_Nb/Hysteresis_3'
 * '<S104>' : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/SpeedBlending_Nb/KeHSCR_M_EstSpdBldrRstTh'
 * '<S105>' : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/SpeedBlending_Nb/KeHSCR_M_EstSpdBldrTh_LSP'
 * '<S106>' : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/SpeedBlending_Nb/KeHSCR_b_UseMtrB_EstSpd'
 * '<S107>' : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/SpeedBlending_Nb/KeHSCR_dr_BlendFactorLD'
 * '<S108>' : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/SpeedBlending_Nb/KeHSCR_dr_BlendFactorLU '
 * '<S109>' : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/SpeedBlending_Nb/KeHSCR_t_TurnOffdelayTime'
 * '<S110>' : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/SpeedBlending_Nb/Turn Off Delay Time'
 * '<S111>' : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/SpeedBlending_Nb/GradientLimiter/Limiter'
 * '<S112>' : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/SpeedBlending_Nb/Turn Off Delay Time/EdgeFalling'
 * '<S113>' : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/SpeedBlending_Nc/GradientLimiter1'
 * '<S114>' : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/SpeedBlending_Nc/HaHSCR_b_EnblEstdSpd'
 * '<S115>' : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/SpeedBlending_Nc/HeHSCR_t_dT'
 * '<S116>' : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/SpeedBlending_Nc/Hysteresis_3'
 * '<S117>' : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/SpeedBlending_Nc/KeHSCR_M_EstSpdBldrRstTh'
 * '<S118>' : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/SpeedBlending_Nc/KeHSCR_M_EstSpdBldrTh_LSP'
 * '<S119>' : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/SpeedBlending_Nc/KeHSCR_b_UseMtrC_EstSpd'
 * '<S120>' : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/SpeedBlending_Nc/KeHSCR_dr_BlendFactorLD'
 * '<S121>' : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/SpeedBlending_Nc/KeHSCR_dr_BlendFactorLU '
 * '<S122>' : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/SpeedBlending_Nc/KeHSCR_t_TurnOffdelayTime'
 * '<S123>' : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/SpeedBlending_Nc/Turn Off Delay Time'
 * '<S124>' : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/SpeedBlending_Nc/GradientLimiter1/Limiter'
 * '<S125>' : 'HSCR_ac/HSCR_MedTEB/HSCC_Calculate_Donut_Space_Coefficients/SpeedBlending_Nc/Turn Off Delay Time/EdgeFalling'
 * '<S126>' : 'HSCR_ac/HSCR_PwrOn/HSCO_Output_Initialization'
 * '<S127>' : 'HSCR_ac/HSCR_SlowTEF/HSCC_Calculate_Motor_Speed_Limit'
 * '<S128>' : 'HSCR_ac/HSCR_SlowTEF/HSCC_Calculate_Motor_Speed_Limit/DocBlock'
 * '<S129>' : 'HSCR_ac/HSCR_SlowTEF/HSCC_Calculate_Motor_Speed_Limit/KtHSCR_n_MtrASpdMax'
 * '<S130>' : 'HSCR_ac/HSCR_SlowTEF/HSCC_Calculate_Motor_Speed_Limit/KtHSCR_n_MtrBSpdMax'
 * '<S131>' : 'HSCR_ac/HSCR_SlowTEF/HSCC_Calculate_Motor_Speed_Limit/KtHSCR_n_MtrCSpdMax'
 * '<S132>' : 'HSCR_ac/HSCR_SlowTEF/HSCC_Calculate_Motor_Speed_Limit/Set Block'
 * '<S133>' : 'HSCR_ac/HSCR_SlowTEF/HSCC_Calculate_Motor_Speed_Limit/Set Block1'
 * '<S134>' : 'HSCR_ac/HSCR_SlowTEF/HSCC_Calculate_Motor_Speed_Limit/Set Block2'
 * '<S135>' : 'HSCR_ac/HSCR_SlowTEF/HSCC_Calculate_Motor_Speed_Limit/Set Block3'
 * '<S136>' : 'HSCR_ac/HSCR_SlowTEF/HSCC_Calculate_Motor_Speed_Limit/Set Block4'
 * '<S137>' : 'HSCR_ac/HSCR_SlowTEF/HSCC_Calculate_Motor_Speed_Limit/Set Block5'
 */
#endif                                 /* RTW_HEADER_HSCR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
