/*
 * File: LLER_ac.h
 *
 * Code generated for Simulink model 'LLER_ac'.
 *
 * Model version                  : 9.40
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 14:26:02 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_LLER_ac_h_
#define RTW_HEADER_LLER_ac_h_
#ifndef LLER_ac_COMMON_INCLUDES_
#define LLER_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_LLER.h"
#endif                                 /* LLER_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_LLER_ac_T
{
    float32 NeLLER_r_NvMin_TireTol_Ratio_FL;/* '<Root>/NvMin_TireTol_Ratio_FL' */
    float32 NeLLER_r_NvMin_TireTol_Ratio_FR;/* '<Root>/NvMin_TireTol_Ratio_FR' */
    float32 NeLLER_r_NvMin_TireTol_Ratio_RL;/* '<Root>/NvMin_TireTol_Ratio_RL' */
    float32 NeLLER_r_NvMin_TireTol_Ratio_RR;/* '<Root>/NvMin_TireTol_Ratio_RR' */
}
DW_LLER_ac_T;

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_LLER
#include "MemMap.h"

extern VAR(DW_LLER_ac_T, LLER_VAR_INIT) LLER_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_LLER
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
 * '<Root>' : 'LLER_ac'
 * '<S1>'   : 'LLER_ac/LLER_PwrOff'
 * '<S2>'   : 'LLER_ac/LLER_PwrOn'
 */
#endif                                 /* RTW_HEADER_LLER_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
