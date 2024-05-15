/*
 * File: COMR_ac.h
 *
 * Code generated for Simulink model 'COMR_ac'.
 *
 * Model version                  : 9.27
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:15:49 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_COMR_ac_h_
#define RTW_HEADER_COMR_ac_h_
#ifndef COMR_ac_COMMON_INCLUDES_
#define COMR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_COMR.h"
#endif                                 /* COMR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_COMR_ac_T
{
    boolean VeCOMR_b_Random3_Fn;       /* '<S6>/KeCOMR_b_Random3' */
    boolean VeCOMR_b_Random3_Out_Init; /* '<S4>/Const10' */
}
B_COMR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_COMR
#include "MemMap.h"

extern VAR(B_COMR_ac_T, COMR_VAR_INIT) COMR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_COMR
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
 * '<Root>' : 'COMR_ac'
 * '<S1>'   : 'COMR_ac/COMR_PwrOn'
 * '<S2>'   : 'COMR_ac/COMR_SlowTEF'
 * '<S3>'   : 'COMR_ac/COMR_PwrOn/Init_COMI'
 * '<S4>'   : 'COMR_ac/COMR_PwrOn/Sub_Out_Init'
 * '<S5>'   : 'COMR_ac/COMR_PwrOn/Init_COMI/KeCOMR_b_ShftMdSts'
 * '<S6>'   : 'COMR_ac/COMR_SlowTEF/COMR_RandomMap'
 * '<S7>'   : 'COMR_ac/COMR_SlowTEF/COMR_RandomMap/KeCOMR_b_Random3'
 */
#endif                                 /* RTW_HEADER_COMR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
