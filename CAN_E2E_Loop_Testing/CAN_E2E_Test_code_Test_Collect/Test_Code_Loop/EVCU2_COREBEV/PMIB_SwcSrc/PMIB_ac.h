/*
 * File: PMIB_ac.h
 *
 * Code generated for Simulink model 'PMIB_ac'.
 *
 * Model version                  : 4.374
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 18:14:48 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PMIB_ac_h_
#define RTW_HEADER_PMIB_ac_h_
#include "Rte_Type.h"
#ifndef PMIB_ac_COMMON_INCLUDES_
#define PMIB_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_PMIB.h"
#endif                                 /* PMIB_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_PMIB_ac_T
{

#if Rte_SysCon_Variant_PMIB_EOPSPDFB_Presence

    float32 InputRaw0;                 /* '<S12>/AntiSpkFil' */

#define B_PMIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PMIB_EOPSPDFB_Presence

    float32 Cnt;                       /* '<S12>/AntiSpkFil' */

#define B_PMIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PMIB_EOPSPDFB_Presence

    TeDFIB_e_FaultDebounceStatus Merge;/* '<S20>/Merge' */

#define B_PMIB_AC_T_VARIANT_EXISTS
#endif

#ifndef B_PMIB_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
B_PMIB_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_PMIB_ac_T
{

#if Rte_SysCon_Variant_PMIB_EOPSPDFB_Presence

    float32 VePMIB_f_EleclOilPmp_SpdFdInit_DSTATE;
                                    /* '<S11>/VePMIB_f_EleclOilPmp_SpdFdInit' */

#define DW_PMIB_AC_T_VARIANT_EXISTS
#endif

    uint16 NePMIB_Cnt_EleclOilPmpSpdFb_MFOP;
                                 /* '<Root>/DSM_NeCDMR_Cnt_CPIMInternal_MSOF' */

#if Rte_SysCon_Variant_PMIB_EOPSPDFB_Presence

    boolean UnitDelay_DSTATE_k;        /* '<S3>/Unit Delay' */

#define DW_PMIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PMIB_EOPSPDFB_Presence

    boolean UnitDelay_DSTATE_l;        /* '<S21>/Unit Delay' */

#define DW_PMIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PMIB_EOPSPDFB_Presence

    boolean UnitDelay1_DSTATE;         /* '<S21>/Unit Delay1' */

#define DW_PMIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PMIB_EOPSPDFB_Presence

    boolean UnitDelay_DSTATE_lh;       /* '<S22>/Unit Delay' */

#define DW_PMIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PMIB_EOPSPDFB_Presence

    uint8 is_active_c4_PMIB_ac;        /* '<S12>/AntiSpkFil' */

#define DW_PMIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PMIB_EOPSPDFB_Presence

    uint8 is_c4_PMIB_ac;               /* '<S12>/AntiSpkFil' */

#define DW_PMIB_AC_T_VARIANT_EXISTS
#endif

}
DW_PMIB_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PMIB
#include "MemMap.h"

extern VAR(B_PMIB_ac_T, PMIB_VAR_INIT) PMIB_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PMIB
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PMIB
#include "MemMap.h"

extern VAR(DW_PMIB_ac_T, PMIB_VAR_INIT) PMIB_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PMIB
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
 * '<Root>' : 'PMIB_ac'
 * '<S1>'   : 'PMIB_ac/ADIB_PwrOff'
 * '<S2>'   : 'PMIB_ac/Init'
 * '<S3>'   : 'PMIB_ac/SigMngtAndCnvn'
 * '<S4>'   : 'PMIB_ac/Init/EleclOilPmp_Init'
 * '<S5>'   : 'PMIB_ac/Init/EleclOilPmp_Init/EleclOilPmp_Init'
 * '<S6>'   : 'PMIB_ac/Init/EleclOilPmp_Init/EleclOilPmp_Init/Enumerated_Constant4'
 * '<S7>'   : 'PMIB_ac/Init/EleclOilPmp_Init/EleclOilPmp_Init/KePMIB_f_EleclOilPmp_SpdFdInit'
 * '<S8>'   : 'PMIB_ac/SigMngtAndCnvn/EleclOilPmpSpdFb'
 * '<S9>'   : 'PMIB_ac/SigMngtAndCnvn/EleclOilPmpSpdFb/EleclOilPmpSpdFb'
 * '<S10>'  : 'PMIB_ac/SigMngtAndCnvn/EleclOilPmpSpdFb/EleclOilPmpSpdFb/DiagSys'
 * '<S11>'  : 'PMIB_ac/SigMngtAndCnvn/EleclOilPmpSpdFb/EleclOilPmpSpdFb/ElecToPhyCnvnSys'
 * '<S12>'  : 'PMIB_ac/SigMngtAndCnvn/EleclOilPmpSpdFb/EleclOilPmpSpdFb/SigAcqnAndFilSys'
 * '<S13>'  : 'PMIB_ac/SigMngtAndCnvn/EleclOilPmpSpdFb/EleclOilPmpSpdFb/DiagSys/Feedback Signal'
 * '<S14>'  : 'PMIB_ac/SigMngtAndCnvn/EleclOilPmpSpdFb/EleclOilPmpSpdFb/DiagSys/ResetCountsFOMs'
 * '<S15>'  : 'PMIB_ac/SigMngtAndCnvn/EleclOilPmpSpdFb/EleclOilPmpSpdFb/DiagSys/Feedback Signal/KePMIB_Cnt_FailLimEleclOilPmpSpdFb'
 * '<S16>'  : 'PMIB_ac/SigMngtAndCnvn/EleclOilPmpSpdFb/EleclOilPmpSpdFb/DiagSys/Feedback Signal/KePMIB_Cnt_SmplLimEleclOilPmpSpdFb'
 * '<S17>'  : 'PMIB_ac/SigMngtAndCnvn/EleclOilPmpSpdFb/EleclOilPmpSpdFb/DiagSys/Feedback Signal/KePMIB_f_LowFltLim_EleclOilPmpSpdFb'
 * '<S18>'  : 'PMIB_ac/SigMngtAndCnvn/EleclOilPmpSpdFb/EleclOilPmpSpdFb/DiagSys/Feedback Signal/KeTAIB_Cnt_STGSmplLimCEXV_OutTSnsr1'
 * '<S19>'  : 'PMIB_ac/SigMngtAndCnvn/EleclOilPmpSpdFb/EleclOilPmpSpdFb/DiagSys/Feedback Signal/KeTAIB_b_DiagEnblRadFanErrM0'
 * '<S20>'  : 'PMIB_ac/SigMngtAndCnvn/EleclOilPmpSpdFb/EleclOilPmpSpdFb/DiagSys/Feedback Signal/XofY_v1'
 * '<S21>'  : 'PMIB_ac/SigMngtAndCnvn/EleclOilPmpSpdFb/EleclOilPmpSpdFb/DiagSys/Feedback Signal/XofY_v1/BaseXofY'
 * '<S22>'  : 'PMIB_ac/SigMngtAndCnvn/EleclOilPmpSpdFb/EleclOilPmpSpdFb/DiagSys/Feedback Signal/XofY_v1/EdgeFalling1'
 * '<S23>'  : 'PMIB_ac/SigMngtAndCnvn/EleclOilPmpSpdFb/EleclOilPmpSpdFb/DiagSys/Feedback Signal/XofY_v1/Enumerated Constant16'
 * '<S24>'  : 'PMIB_ac/SigMngtAndCnvn/EleclOilPmpSpdFb/EleclOilPmpSpdFb/DiagSys/Feedback Signal/XofY_v1/Fail'
 * '<S25>'  : 'PMIB_ac/SigMngtAndCnvn/EleclOilPmpSpdFb/EleclOilPmpSpdFb/DiagSys/Feedback Signal/XofY_v1/Init'
 * '<S26>'  : 'PMIB_ac/SigMngtAndCnvn/EleclOilPmpSpdFb/EleclOilPmpSpdFb/DiagSys/Feedback Signal/XofY_v1/Pass'
 * '<S27>'  : 'PMIB_ac/SigMngtAndCnvn/EleclOilPmpSpdFb/EleclOilPmpSpdFb/DiagSys/Feedback Signal/XofY_v1/UpdateMFOP'
 * '<S28>'  : 'PMIB_ac/SigMngtAndCnvn/EleclOilPmpSpdFb/EleclOilPmpSpdFb/DiagSys/Feedback Signal/XofY_v1/BaseXofY/Counter Reset  Enabled '
 * '<S29>'  : 'PMIB_ac/SigMngtAndCnvn/EleclOilPmpSpdFb/EleclOilPmpSpdFb/DiagSys/Feedback Signal/XofY_v1/BaseXofY/Counter Reset  Enabled 1'
 * '<S30>'  : 'PMIB_ac/SigMngtAndCnvn/EleclOilPmpSpdFb/EleclOilPmpSpdFb/DiagSys/Feedback Signal/XofY_v1/Fail/Enumerated Constant16'
 * '<S31>'  : 'PMIB_ac/SigMngtAndCnvn/EleclOilPmpSpdFb/EleclOilPmpSpdFb/DiagSys/Feedback Signal/XofY_v1/Init/Enumerated Constant16'
 * '<S32>'  : 'PMIB_ac/SigMngtAndCnvn/EleclOilPmpSpdFb/EleclOilPmpSpdFb/DiagSys/Feedback Signal/XofY_v1/Pass/Enumerated Constant16'
 * '<S33>'  : 'PMIB_ac/SigMngtAndCnvn/EleclOilPmpSpdFb/EleclOilPmpSpdFb/DiagSys/Feedback Signal/XofY_v1/UpdateMFOP/Max Fails on Pass FOM'
 * '<S34>'  : 'PMIB_ac/SigMngtAndCnvn/EleclOilPmpSpdFb/EleclOilPmpSpdFb/DiagSys/Feedback Signal/XofY_v1/UpdateMFOP/ResetLogic'
 * '<S35>'  : 'PMIB_ac/SigMngtAndCnvn/EleclOilPmpSpdFb/EleclOilPmpSpdFb/ElecToPhyCnvnSys/Override'
 * '<S36>'  : 'PMIB_ac/SigMngtAndCnvn/EleclOilPmpSpdFb/EleclOilPmpSpdFb/ElecToPhyCnvnSys/Protected Division'
 * '<S37>'  : 'PMIB_ac/SigMngtAndCnvn/EleclOilPmpSpdFb/EleclOilPmpSpdFb/ElecToPhyCnvnSys/Recovery'
 * '<S38>'  : 'PMIB_ac/SigMngtAndCnvn/EleclOilPmpSpdFb/EleclOilPmpSpdFb/ElecToPhyCnvnSys/SWITCH_DOWN'
 * '<S39>'  : 'PMIB_ac/SigMngtAndCnvn/EleclOilPmpSpdFb/EleclOilPmpSpdFb/ElecToPhyCnvnSys/Override/KePMIB_b_EleclOilPmp_SpdFdBypEnbl'
 * '<S40>'  : 'PMIB_ac/SigMngtAndCnvn/EleclOilPmpSpdFb/EleclOilPmpSpdFb/ElecToPhyCnvnSys/Override/KePMIB_f_EOP_SpeedFdbkByp'
 * '<S41>'  : 'PMIB_ac/SigMngtAndCnvn/EleclOilPmpSpdFb/EleclOilPmpSpdFb/ElecToPhyCnvnSys/Recovery/KePMIB_b_EleclOilPmp_SpdFdRcvryEnbl'
 * '<S42>'  : 'PMIB_ac/SigMngtAndCnvn/EleclOilPmpSpdFb/EleclOilPmpSpdFb/ElecToPhyCnvnSys/Recovery/KePMIB_f_EleclOilPmp_SpdFbRcvry'
 * '<S43>'  : 'PMIB_ac/SigMngtAndCnvn/EleclOilPmpSpdFb/EleclOilPmpSpdFb/SigAcqnAndFilSys/AntiSpkFil'
 * '<S44>'  : 'PMIB_ac/SigMngtAndCnvn/EleclOilPmpSpdFb/EleclOilPmpSpdFb/SigAcqnAndFilSys/KePMIB_Cnt_EleclOilPmpSpdFb_PrdSpikeThd'
 * '<S45>'  : 'PMIB_ac/SigMngtAndCnvn/EleclOilPmpSpdFb/EleclOilPmpSpdFb/SigAcqnAndFilSys/KePMIB_k_EleclOilPmpSpdFb_PrdFiltGx'
 * '<S46>'  : 'PMIB_ac/SigMngtAndCnvn/EleclOilPmpSpdFb/EleclOilPmpSpdFb/SigAcqnAndFilSys/KePMIB_t_EleclOilPmpSpdFb_PrdSpikeThd'
 * '<S47>'  : 'PMIB_ac/SigMngtAndCnvn/EleclOilPmpSpdFb/EleclOilPmpSpdFb/SigAcqnAndFilSys/LoPassFil'
 * '<S48>'  : 'PMIB_ac/SigMngtAndCnvn/EleclOilPmpSpdFb/EleclOilPmpSpdFb/SigAcqnAndFilSys/LoPassFil/Inputs_selection'
 * '<S49>'  : 'PMIB_ac/SigMngtAndCnvn/EleclOilPmpSpdFb/EleclOilPmpSpdFb/SigAcqnAndFilSys/LoPassFil/Low_Pass_Filter_Fcn'
 * '<S50>'  : 'PMIB_ac/SigMngtAndCnvn/EleclOilPmpSpdFb/EleclOilPmpSpdFb/SigAcqnAndFilSys/LoPassFil/Outputs_assignment'
 */
#endif                                 /* RTW_HEADER_PMIB_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
