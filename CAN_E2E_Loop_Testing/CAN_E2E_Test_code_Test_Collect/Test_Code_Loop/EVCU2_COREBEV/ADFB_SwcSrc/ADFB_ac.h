/*
 * File: ADFB_ac.h
 *
 * Code generated for Simulink model 'ADFB_ac'.
 *
 * Model version                  : 1.75
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:04:06 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ADFB_ac_h_
#define RTW_HEADER_ADFB_ac_h_
#include "Rte_Type.h"
#ifndef ADFB_ac_COMMON_INCLUDES_
#define ADFB_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_ADFB.h"
#endif                                 /* ADFB_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_ADFB_ac_T
{
    TeDFIB_e_FaultDebounceStatus Merge_j;/* '<S14>/Merge' */
}
B_ADFB_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_ADFB_ac_T
{
    uint16 NeADFB_Cnt_A2DFault_MFOP;
                                 /* '<Root>/DSM_NeCDMR_Cnt_CPIMInternal_MSOF' */
    boolean UnitDelay_DSTATE_m;        /* '<S15>/Unit Delay' */
    boolean UnitDelay1_DSTATE;         /* '<S15>/Unit Delay1' */
    boolean UnitDelay_DSTATE_k;        /* '<S16>/Unit Delay' */
}
DW_ADFB_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ADFB
#include "MemMap.h"

extern VAR(B_ADFB_ac_T, ADFB_VAR_INIT) ADFB_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ADFB
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ADFB
#include "MemMap.h"

extern VAR(DW_ADFB_ac_T, ADFB_VAR_INIT) ADFB_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ADFB
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
 * '<Root>' : 'ADFB_ac'
 * '<S1>'   : 'ADFB_ac/ADFB_PwrOff'
 * '<S2>'   : 'ADFB_ac/Init'
 * '<S3>'   : 'ADFB_ac/SigMngt'
 * '<S4>'   : 'ADFB_ac/Init/A2DFault'
 * '<S5>'   : 'ADFB_ac/Init/A2DFault/Enumerated_Constant4'
 * '<S6>'   : 'ADFB_ac/SigMngt/A2DFault'
 * '<S7>'   : 'ADFB_ac/SigMngt/A2DFault/DiagSys'
 * '<S8>'   : 'ADFB_ac/SigMngt/A2DFault/DiagSys/CircLoFltSys'
 * '<S9>'   : 'ADFB_ac/SigMngt/A2DFault/DiagSys/ResetCountsFOMs'
 * '<S10>'  : 'ADFB_ac/SigMngt/A2DFault/DiagSys/CircLoFltSys/KeADFB_Cnt_FailLimA2DFault'
 * '<S11>'  : 'ADFB_ac/SigMngt/A2DFault/DiagSys/CircLoFltSys/KeADFB_Cnt_SmplLimA2DFault'
 * '<S12>'  : 'ADFB_ac/SigMngt/A2DFault/DiagSys/CircLoFltSys/KeADFB_b_DiagEnbl_A2DFault'
 * '<S13>'  : 'ADFB_ac/SigMngt/A2DFault/DiagSys/CircLoFltSys/KeTAIB_Cnt_STGSmplLimCEXV_OutTSnsr1'
 * '<S14>'  : 'ADFB_ac/SigMngt/A2DFault/DiagSys/CircLoFltSys/XofY_v1'
 * '<S15>'  : 'ADFB_ac/SigMngt/A2DFault/DiagSys/CircLoFltSys/XofY_v1/BaseXofY'
 * '<S16>'  : 'ADFB_ac/SigMngt/A2DFault/DiagSys/CircLoFltSys/XofY_v1/EdgeFalling1'
 * '<S17>'  : 'ADFB_ac/SigMngt/A2DFault/DiagSys/CircLoFltSys/XofY_v1/Enumerated Constant16'
 * '<S18>'  : 'ADFB_ac/SigMngt/A2DFault/DiagSys/CircLoFltSys/XofY_v1/Fail'
 * '<S19>'  : 'ADFB_ac/SigMngt/A2DFault/DiagSys/CircLoFltSys/XofY_v1/Init'
 * '<S20>'  : 'ADFB_ac/SigMngt/A2DFault/DiagSys/CircLoFltSys/XofY_v1/Pass'
 * '<S21>'  : 'ADFB_ac/SigMngt/A2DFault/DiagSys/CircLoFltSys/XofY_v1/UpdateMFOP'
 * '<S22>'  : 'ADFB_ac/SigMngt/A2DFault/DiagSys/CircLoFltSys/XofY_v1/BaseXofY/Counter Reset  Enabled '
 * '<S23>'  : 'ADFB_ac/SigMngt/A2DFault/DiagSys/CircLoFltSys/XofY_v1/BaseXofY/Counter Reset  Enabled 1'
 * '<S24>'  : 'ADFB_ac/SigMngt/A2DFault/DiagSys/CircLoFltSys/XofY_v1/Fail/Enumerated Constant16'
 * '<S25>'  : 'ADFB_ac/SigMngt/A2DFault/DiagSys/CircLoFltSys/XofY_v1/Init/Enumerated Constant16'
 * '<S26>'  : 'ADFB_ac/SigMngt/A2DFault/DiagSys/CircLoFltSys/XofY_v1/Pass/Enumerated Constant16'
 * '<S27>'  : 'ADFB_ac/SigMngt/A2DFault/DiagSys/CircLoFltSys/XofY_v1/UpdateMFOP/Max Fails on Pass FOM'
 * '<S28>'  : 'ADFB_ac/SigMngt/A2DFault/DiagSys/CircLoFltSys/XofY_v1/UpdateMFOP/ResetLogic'
 */
#endif                                 /* RTW_HEADER_ADFB_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
