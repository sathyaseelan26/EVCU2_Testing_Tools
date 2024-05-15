/*
 * File: HSWB_ac.h
 *
 * Code generated for Simulink model 'HSWB_ac'.
 *
 * Model version                  : 1.53
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:49:37 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_HSWB_ac_h_
#define RTW_HEADER_HSWB_ac_h_
#include "Rte_Type.h"
#ifndef HSWB_ac_COMMON_INCLUDES_
#define HSWB_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_HSWB.h"
#endif                                 /* HSWB_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_HSWB_ac_T
{

#if Rte_SysCon_Variant_HSWB_HoodAjarSwitch_Presence

    float32 InputRaw0;                 /* '<S9>/AntiSpkFil' */

#define B_HSWB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWB_HoodAjarSwitch_Presence

    float32 Cnt;                       /* '<S9>/AntiSpkFil' */

#define B_HSWB_AC_T_VARIANT_EXISTS
#endif

#ifndef B_HSWB_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
B_HSWB_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_HSWB_ac_T
{

#if Rte_SysCon_Variant_HSWB_HoodAjarSwitch_Presence

    float32 VeHSWB_U_HoodAjarSnsInit_DSTATE;/* '<S8>/VeHSWB_U_HoodAjarSnsInit' */

#define DW_HSWB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWB_HoodAjarSwitch_Presence

    boolean UnitDelay_DSTATE;          /* '<S2>/Unit Delay' */

#define DW_HSWB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWB_HoodAjarSwitch_Presence

    uint8 is_active_c2_HSWB_ac;        /* '<S9>/AntiSpkFil' */

#define DW_HSWB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWB_HoodAjarSwitch_Presence

    uint8 is_c2_HSWB_ac;               /* '<S9>/AntiSpkFil' */

#define DW_HSWB_AC_T_VARIANT_EXISTS
#endif

#ifndef DW_HSWB_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
DW_HSWB_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_HSWB
#include "MemMap.h"

extern VAR(B_HSWB_ac_T, HSWB_VAR_INIT) HSWB_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_HSWB
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_HSWB
#include "MemMap.h"

extern VAR(DW_HSWB_ac_T, HSWB_VAR_INIT) HSWB_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_HSWB
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
 * '<Root>' : 'HSWB_ac'
 * '<S1>'   : 'HSWB_ac/Init'
 * '<S2>'   : 'HSWB_ac/SigMngtAndCnvn'
 * '<S3>'   : 'HSWB_ac/Init/HoodAjarSns'
 * '<S4>'   : 'HSWB_ac/Init/HoodAjarSns/HoodAjarSns'
 * '<S5>'   : 'HSWB_ac/Init/HoodAjarSns/HoodAjarSns/KeHSWB_U_HoodAjarSnsInit'
 * '<S6>'   : 'HSWB_ac/SigMngtAndCnvn/HoodAjarSns'
 * '<S7>'   : 'HSWB_ac/SigMngtAndCnvn/HoodAjarSns/HoodAjarSns'
 * '<S8>'   : 'HSWB_ac/SigMngtAndCnvn/HoodAjarSns/HoodAjarSns/ElecToPhyCnvnSys'
 * '<S9>'   : 'HSWB_ac/SigMngtAndCnvn/HoodAjarSns/HoodAjarSns/SigAcqnAndFilSys'
 * '<S10>'  : 'HSWB_ac/SigMngtAndCnvn/HoodAjarSns/HoodAjarSns/ElecToPhyCnvnSys/HtHSWB_U_HoodAjarSnsChartc'
 * '<S11>'  : 'HSWB_ac/SigMngtAndCnvn/HoodAjarSns/HoodAjarSns/ElecToPhyCnvnSys/Override'
 * '<S12>'  : 'HSWB_ac/SigMngtAndCnvn/HoodAjarSns/HoodAjarSns/ElecToPhyCnvnSys/Recovery'
 * '<S13>'  : 'HSWB_ac/SigMngtAndCnvn/HoodAjarSns/HoodAjarSns/ElecToPhyCnvnSys/SWITCH_DOWN'
 * '<S14>'  : 'HSWB_ac/SigMngtAndCnvn/HoodAjarSns/HoodAjarSns/ElecToPhyCnvnSys/Override/KeHSWB_U_HoodAjarSnsByp'
 * '<S15>'  : 'HSWB_ac/SigMngtAndCnvn/HoodAjarSns/HoodAjarSns/ElecToPhyCnvnSys/Override/KeHSWB_b_HoodAjarSnsBypEnbl'
 * '<S16>'  : 'HSWB_ac/SigMngtAndCnvn/HoodAjarSns/HoodAjarSns/ElecToPhyCnvnSys/Recovery/KeTAIB_T_OEXV_OutTempRcvry'
 * '<S17>'  : 'HSWB_ac/SigMngtAndCnvn/HoodAjarSns/HoodAjarSns/ElecToPhyCnvnSys/Recovery/KeTAIB_b_OEXV_OutTempRcvryEnbl'
 * '<S18>'  : 'HSWB_ac/SigMngtAndCnvn/HoodAjarSns/HoodAjarSns/SigAcqnAndFilSys/AntiSpkFil'
 * '<S19>'  : 'HSWB_ac/SigMngtAndCnvn/HoodAjarSns/HoodAjarSns/SigAcqnAndFilSys/KeHSWB_Cnt_HoodAjarSnsSpikeThd'
 * '<S20>'  : 'HSWB_ac/SigMngtAndCnvn/HoodAjarSns/HoodAjarSns/SigAcqnAndFilSys/KeHSWB_U_HoodAjarSnsSpikeThd'
 * '<S21>'  : 'HSWB_ac/SigMngtAndCnvn/HoodAjarSns/HoodAjarSns/SigAcqnAndFilSys/KeHSWB_k_HoodAjarSnsFiltGx'
 * '<S22>'  : 'HSWB_ac/SigMngtAndCnvn/HoodAjarSns/HoodAjarSns/SigAcqnAndFilSys/LoPassFil'
 * '<S23>'  : 'HSWB_ac/SigMngtAndCnvn/HoodAjarSns/HoodAjarSns/SigAcqnAndFilSys/LoPassFil/Inputs_selection'
 * '<S24>'  : 'HSWB_ac/SigMngtAndCnvn/HoodAjarSns/HoodAjarSns/SigAcqnAndFilSys/LoPassFil/Low_Pass_Filter_Fcn'
 * '<S25>'  : 'HSWB_ac/SigMngtAndCnvn/HoodAjarSns/HoodAjarSns/SigAcqnAndFilSys/LoPassFil/Outputs_assignment'
 */
#endif                                 /* RTW_HEADER_HSWB_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
