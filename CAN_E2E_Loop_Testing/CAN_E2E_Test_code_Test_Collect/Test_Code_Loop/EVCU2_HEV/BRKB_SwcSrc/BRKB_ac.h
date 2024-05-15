/*
 * File: BRKB_ac.h
 *
 * Code generated for Simulink model 'BRKB_ac'.
 *
 * Model version                  : 1.65
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:09:30 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_BRKB_ac_h_
#define RTW_HEADER_BRKB_ac_h_
#include "Rte_Type.h"
#ifndef BRKB_ac_COMMON_INCLUDES_
#define BRKB_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_BRKB.h"
#endif                                 /* BRKB_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_BRKB_ac_T
{

#if Rte_SysCon_Variant_BRKB_ONEBRKBOXSW_Presence

    float32 InputRaw0;                 /* '<S18>/AntiSpkFil' */

#define B_BRKB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BRKB_ONEBRKBOXSW_Presence

    float32 Cnt;                       /* '<S18>/AntiSpkFil' */

#define B_BRKB_AC_T_VARIANT_EXISTS
#endif

#ifndef B_BRKB_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
B_BRKB_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_BRKB_ac_T
{

#if Rte_SysCon_Variant_BRKB_ONEBRKBOXSW_Presence

    float32 VeBRKB_U_OneBrkBoxSwInit_DSTATE[2];/* '<S17>/VeBRKB_U_OneBrkBoxSwInit' */

#define DW_BRKB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BRKB_ONEBRKBOXSW_Presence

    boolean UnitDelay_DSTATE;          /* '<S18>/Unit Delay' */

#define DW_BRKB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BRKB_ONEBRKBOXSW_Presence

    uint8 is_active_c2_BRKB_ac;        /* '<S18>/AntiSpkFil' */

#define DW_BRKB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BRKB_ONEBRKBOXSW_Presence

    uint8 is_c2_BRKB_ac;               /* '<S18>/AntiSpkFil' */

#define DW_BRKB_AC_T_VARIANT_EXISTS
#endif

#ifndef DW_BRKB_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
DW_BRKB_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_BRKB
#include "MemMap.h"

extern VAR(B_BRKB_ac_T, BRKB_VAR_INIT) BRKB_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_BRKB
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_BRKB
#include "MemMap.h"

extern VAR(DW_BRKB_ac_T, BRKB_VAR_INIT) BRKB_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_BRKB
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
 * '<Root>' : 'BRKB_ac'
 * '<S1>'   : 'BRKB_ac/BRKR_5ms'
 * '<S2>'   : 'BRKB_ac/Initialize Function'
 * '<S3>'   : 'BRKB_ac/BRKR_5ms/Brake Switch'
 * '<S4>'   : 'BRKB_ac/BRKR_5ms/One Brake Box Switch'
 * '<S5>'   : 'BRKB_ac/BRKR_5ms/Brake Switch/Brake Switch'
 * '<S6>'   : 'BRKB_ac/BRKR_5ms/Brake Switch/Brake Switch/Filtering'
 * '<S7>'   : 'BRKB_ac/BRKR_5ms/Brake Switch/Brake Switch/Override'
 * '<S8>'   : 'BRKB_ac/BRKR_5ms/Brake Switch/Brake Switch/PolarInv'
 * '<S9>'   : 'BRKB_ac/BRKR_5ms/Brake Switch/Brake Switch/Filtering/HeBRKB_b_BrkrSwitchFiltdEnb'
 * '<S10>'  : 'BRKB_ac/BRKR_5ms/Brake Switch/Brake Switch/Filtering/SWITCH_DOWN'
 * '<S11>'  : 'BRKB_ac/BRKR_5ms/Brake Switch/Brake Switch/Override/KeBRKB_b_BrkrSwitchByp'
 * '<S12>'  : 'BRKB_ac/BRKR_5ms/Brake Switch/Brake Switch/Override/KeBRKB_b_BrkrSwitchBypEnbl'
 * '<S13>'  : 'BRKB_ac/BRKR_5ms/Brake Switch/Brake Switch/Override/SWITCH_UP'
 * '<S14>'  : 'BRKB_ac/BRKR_5ms/Brake Switch/Brake Switch/PolarInv/HeBRKB_b_BrkrSwitchPolarInvEnb'
 * '<S15>'  : 'BRKB_ac/BRKR_5ms/Brake Switch/Brake Switch/PolarInv/SWITCH_UP'
 * '<S16>'  : 'BRKB_ac/BRKR_5ms/One Brake Box Switch/One Brake Switch'
 * '<S17>'  : 'BRKB_ac/BRKR_5ms/One Brake Box Switch/One Brake Switch/ElecToPhyCnvnSys'
 * '<S18>'  : 'BRKB_ac/BRKR_5ms/One Brake Box Switch/One Brake Switch/SigAcqnAndFilSys'
 * '<S19>'  : 'BRKB_ac/BRKR_5ms/One Brake Box Switch/One Brake Switch/ElecToPhyCnvnSys/HtBRKB_Pct_OneBrkBoxSwChartc'
 * '<S20>'  : 'BRKB_ac/BRKR_5ms/One Brake Box Switch/One Brake Switch/ElecToPhyCnvnSys/Override'
 * '<S21>'  : 'BRKB_ac/BRKR_5ms/One Brake Box Switch/One Brake Switch/ElecToPhyCnvnSys/Recovery'
 * '<S22>'  : 'BRKB_ac/BRKR_5ms/One Brake Box Switch/One Brake Switch/ElecToPhyCnvnSys/SWITCH_DOWN'
 * '<S23>'  : 'BRKB_ac/BRKR_5ms/One Brake Box Switch/One Brake Switch/ElecToPhyCnvnSys/Override/KeAPSB_U_AccPedSnsrByp'
 * '<S24>'  : 'BRKB_ac/BRKR_5ms/One Brake Box Switch/One Brake Switch/ElecToPhyCnvnSys/Override/KeAPSB_b_AccPedSnsrBypEnbl'
 * '<S25>'  : 'BRKB_ac/BRKR_5ms/One Brake Box Switch/One Brake Switch/ElecToPhyCnvnSys/Recovery/KeAPSB_U_AccPedSnsrRcvry'
 * '<S26>'  : 'BRKB_ac/BRKR_5ms/One Brake Box Switch/One Brake Switch/ElecToPhyCnvnSys/Recovery/KeAPSB_b_AccPedSnsrRcvryEnbl'
 * '<S27>'  : 'BRKB_ac/BRKR_5ms/One Brake Box Switch/One Brake Switch/SigAcqnAndFilSys/AntiSpkFil'
 * '<S28>'  : 'BRKB_ac/BRKR_5ms/One Brake Box Switch/One Brake Switch/SigAcqnAndFilSys/KeAPSB_Cnt_AccPedSnsrSpikeThd'
 * '<S29>'  : 'BRKB_ac/BRKR_5ms/One Brake Box Switch/One Brake Switch/SigAcqnAndFilSys/KeAPSB_U_AccPedSnsrSpikeThd'
 * '<S30>'  : 'BRKB_ac/BRKR_5ms/One Brake Box Switch/One Brake Switch/SigAcqnAndFilSys/KeAPSB_k_AccPedSnsrFiltGx'
 * '<S31>'  : 'BRKB_ac/BRKR_5ms/One Brake Box Switch/One Brake Switch/SigAcqnAndFilSys/LoPassFil'
 * '<S32>'  : 'BRKB_ac/BRKR_5ms/One Brake Box Switch/One Brake Switch/SigAcqnAndFilSys/LoPassFil/Inputs_selection'
 * '<S33>'  : 'BRKB_ac/BRKR_5ms/One Brake Box Switch/One Brake Switch/SigAcqnAndFilSys/LoPassFil/Low_Pass_Filter_Fcn'
 * '<S34>'  : 'BRKB_ac/BRKR_5ms/One Brake Box Switch/One Brake Switch/SigAcqnAndFilSys/LoPassFil/Outputs_assignment'
 * '<S35>'  : 'BRKB_ac/Initialize Function/Brake Switch'
 * '<S36>'  : 'BRKB_ac/Initialize Function/One Brake Box Switch'
 * '<S37>'  : 'BRKB_ac/Initialize Function/Brake Switch/Brake Switch'
 * '<S38>'  : 'BRKB_ac/Initialize Function/Brake Switch/Brake Switch/KeBRKB_b_BrkrSwitchInit'
 * '<S39>'  : 'BRKB_ac/Initialize Function/One Brake Box Switch/Brake Switch'
 * '<S40>'  : 'BRKB_ac/Initialize Function/One Brake Box Switch/Brake Switch/KeAPSB_U_AccPedVoltInit'
 * '<S41>'  : 'BRKB_ac/Initialize Function/One Brake Box Switch/Brake Switch/KeAPSB_U_AccPedVoltInit1'
 */
#endif                                 /* RTW_HEADER_BRKB_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
