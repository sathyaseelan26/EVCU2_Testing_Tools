/*
 * File: ABCR_ac.h
 *
 * Code generated for Simulink model 'ABCR_ac'.
 *
 * Model version                  : 9.17
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:03:21 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ABCR_ac_h_
#define RTW_HEADER_ABCR_ac_h_
#include <math.h>
#include <string.h>
#include "Rte_Type.h"
#ifndef ABCR_ac_COMMON_INCLUDES_
#define ABCR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_ABCR.h"
#endif                                 /* ABCR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_ABCR_ac_T
{
    float32 LeHVTR_P_HV_AccPwr;        /* '<S40>/Constant Value6' */
    float32 ArrayAssignment[32];       /* '<S16>/Array Assignment' */
    float32 ArrayAssignment_m[32];     /* '<S33>/Array Assignment' */
}
B_ABCR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_ABCR_ac_T
{
    float32 UnitDelay_DSTATE[32];      /* '<S16>/Unit Delay' */
    float32 UnitDelay2_DSTATE;         /* '<S7>/Unit Delay2' */
    float32 UnitDelay_DSTATE_k;        /* '<S30>/Unit Delay' */
    float32 UnitDelay_DSTATE_eo;       /* '<S18>/Unit Delay' */
    float32 UnitDelay_DSTATE_h;        /* '<S17>/Unit Delay' */
    float32 UnitDelay_DSTATE_m;        /* '<S13>/Unit Delay' */
    uint16 UnitDelay1_DSTATE_j;        /* '<S16>/Unit Delay1' */
    uint16 UnitDelay_DSTATE_l;         /* '<S31>/Unit Delay' */
    boolean UnitDelay_DSTATE_g;        /* '<S34>/Unit Delay' */
}
DW_ABCR_ac_T;

/* Invariant block signals (default storage) */
typedef struct
{
    const float32 LeHVTR_P_HV_AccPwr;  /* '<S40>/Constant Value6' */
}
ConstB_ABCR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ABCR
#include "MemMap.h"

extern VAR(B_ABCR_ac_T, ABCR_VAR_INIT) ABCR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ABCR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ABCR
#include "MemMap.h"

extern VAR(DW_ABCR_ac_T, ABCR_VAR_INIT) ABCR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ABCR
#include "MemMap.h"
#define START_SEC_CONST_UNSPECIFIED_ABCR
#include "MemMap.h"

extern CONST(ConstB_ABCR_ac_T, ABCR_VAR_INIT) ABCR_ac_ConstB;/* constant block i/o */

#define STOP_SEC_CONST_UNSPECIFIED_ABCR
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
 * '<Root>' : 'ABCR_ac'
 * '<S1>'   : 'ABCR_ac/ABCR_MedTEB'
 * '<S2>'   : 'ABCR_ac/ABCR_PwrOn'
 * '<S3>'   : 'ABCR_ac/ABCR_MedTEB/ABCC_Power_Feedback_Control'
 * '<S4>'   : 'ABCR_ac/ABCR_MedTEB/ABCC_Power_Feedback_Control/ABCC_PI_Controls'
 * '<S5>'   : 'ABCR_ac/ABCR_MedTEB/ABCC_Power_Feedback_Control/AccPwr_Calculations'
 * '<S6>'   : 'ABCR_ac/ABCR_MedTEB/ABCC_Power_Feedback_Control/Enable_Conditions'
 * '<S7>'   : 'ABCR_ac/ABCR_MedTEB/ABCC_Power_Feedback_Control/Error_Calculation'
 * '<S8>'   : 'ABCR_ac/ABCR_MedTEB/ABCC_Power_Feedback_Control/RateLimitedTransition'
 * '<S9>'   : 'ABCR_ac/ABCR_MedTEB/ABCC_Power_Feedback_Control/ABCC_PI_Controls/HeABCR_t_dT'
 * '<S10>'  : 'ABCR_ac/ABCR_MedTEB/ABCC_Power_Feedback_Control/ABCC_PI_Controls/KeABCR_P_PwrFdBckCtrl_Max'
 * '<S11>'  : 'ABCR_ac/ABCR_MedTEB/ABCC_Power_Feedback_Control/ABCC_PI_Controls/KeABCR_P_PwrFdBckCtrl_Min'
 * '<S12>'  : 'ABCR_ac/ABCR_MedTEB/ABCC_Power_Feedback_Control/ABCC_PI_Controls/KtABCR_k_PwrFdBckCtrl_I_Gain'
 * '<S13>'  : 'ABCR_ac/ABCR_MedTEB/ABCC_Power_Feedback_Control/ABCC_PI_Controls/PIControl'
 * '<S14>'  : 'ABCR_ac/ABCR_MedTEB/ABCC_Power_Feedback_Control/ABCC_PI_Controls/PIControl/integral_term'
 * '<S15>'  : 'ABCR_ac/ABCR_MedTEB/ABCC_Power_Feedback_Control/Enable_Conditions/HeABCR_b_PwrFdBckCtrl_Enbld'
 * '<S16>'  : 'ABCR_ac/ABCR_MedTEB/ABCC_Power_Feedback_Control/Error_Calculation/ABCC_Variable_Delay'
 * '<S17>'  : 'ABCR_ac/ABCR_MedTEB/ABCC_Power_Feedback_Control/Error_Calculation/Digital Lowpass Reset Enabled'
 * '<S18>'  : 'ABCR_ac/ABCR_MedTEB/ABCC_Power_Feedback_Control/Error_Calculation/Digital Lowpass Reset Enabled1'
 * '<S19>'  : 'ABCR_ac/ABCR_MedTEB/ABCC_Power_Feedback_Control/Error_Calculation/Enumerated_Constant'
 * '<S20>'  : 'ABCR_ac/ABCR_MedTEB/ABCC_Power_Feedback_Control/Error_Calculation/HeABCR_b_Enbl_FdBckCntrlFreeze'
 * '<S21>'  : 'ABCR_ac/ABCR_MedTEB/ABCC_Power_Feedback_Control/Error_Calculation/HeABCR_b_UseMtrA'
 * '<S22>'  : 'ABCR_ac/ABCR_MedTEB/ABCC_Power_Feedback_Control/Error_Calculation/HeABCR_b_UseMtrB'
 * '<S23>'  : 'ABCR_ac/ABCR_MedTEB/ABCC_Power_Feedback_Control/Error_Calculation/HeABCR_b_UseMtrC'
 * '<S24>'  : 'ABCR_ac/ABCR_MedTEB/ABCC_Power_Feedback_Control/Error_Calculation/HeABCR_t_dT'
 * '<S25>'  : 'ABCR_ac/ABCR_MedTEB/ABCC_Power_Feedback_Control/Error_Calculation/KeABCR_Cnt_BattPwrCal_Delay'
 * '<S26>'  : 'ABCR_ac/ABCR_MedTEB/ABCC_Power_Feedback_Control/Error_Calculation/KeABCR_b_BattPwrCal_Delay_Wash_Enable'
 * '<S27>'  : 'ABCR_ac/ABCR_MedTEB/ABCC_Power_Feedback_Control/Error_Calculation/KeABCR_k_PwrFdBckCtrl_BatPwrFltCoeff'
 * '<S28>'  : 'ABCR_ac/ABCR_MedTEB/ABCC_Power_Feedback_Control/Error_Calculation/KeABCR_k_PwrFdBckCtrl_ErrFltCoeff'
 * '<S29>'  : 'ABCR_ac/ABCR_MedTEB/ABCC_Power_Feedback_Control/Error_Calculation/KeABCR_t_CntrlrResume_Delay'
 * '<S30>'  : 'ABCR_ac/ABCR_MedTEB/ABCC_Power_Feedback_Control/Error_Calculation/Turn Off Delay Time'
 * '<S31>'  : 'ABCR_ac/ABCR_MedTEB/ABCC_Power_Feedback_Control/Error_Calculation/ABCC_Variable_Delay/Count Down  Reset Enabled'
 * '<S32>'  : 'ABCR_ac/ABCR_MedTEB/ABCC_Power_Feedback_Control/Error_Calculation/ABCC_Variable_Delay/WashMemory'
 * '<S33>'  : 'ABCR_ac/ABCR_MedTEB/ABCC_Power_Feedback_Control/Error_Calculation/ABCC_Variable_Delay/WashMemory/ForIterator_SubSys'
 * '<S34>'  : 'ABCR_ac/ABCR_MedTEB/ABCC_Power_Feedback_Control/Error_Calculation/Turn Off Delay Time/EdgeFalling1'
 * '<S35>'  : 'ABCR_ac/ABCR_MedTEB/ABCC_Power_Feedback_Control/RateLimitedTransition/GradientLimiter'
 * '<S36>'  : 'ABCR_ac/ABCR_MedTEB/ABCC_Power_Feedback_Control/RateLimitedTransition/KeABCR_r_PwrFdbckCtrl_EnblLD'
 * '<S37>'  : 'ABCR_ac/ABCR_MedTEB/ABCC_Power_Feedback_Control/RateLimitedTransition/KeABCR_r_PwrFdbckCtrl_EnblLU'
 * '<S38>'  : 'ABCR_ac/ABCR_MedTEB/ABCC_Power_Feedback_Control/RateLimitedTransition/MReport Model Info'
 * '<S39>'  : 'ABCR_ac/ABCR_MedTEB/ABCC_Power_Feedback_Control/RateLimitedTransition/GradientLimiter/Limiter'
 * '<S40>'  : 'ABCR_ac/ABCR_PwrOn/ABCO_Output_Initialization'
 */
#endif                                 /* RTW_HEADER_ABCR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
