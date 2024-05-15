/*
 * File: PDTR_ac.h
 *
 * Code generated for Simulink model 'PDTR_ac'.
 *
 * Model version                  : 9.153
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 17:51:10 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PDTR_ac_h_
#define RTW_HEADER_PDTR_ac_h_
#include <math.h>
#include "Rte_Type.h"
#ifndef PDTR_ac_COMMON_INCLUDES_
#define PDTR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "Rte_PDTR.h"
#endif                                 /* PDTR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_PDTR_ac_T
{

#if Rte_SysCon_Variant_PDTR_1

    boolean VariantMerge_For_Variant_Source_VariantS;

#define B_PDTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PDTR_1

    boolean VariantMerge_For_Variant_Source_Varian_g;

#define B_PDTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PDTR_1

    boolean VariantMerge_For_Variant_Source_Varian_a;

#define B_PDTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PDTR_1

    boolean VariantMerge_For_Variant_Source_Varia_gh;

#define B_PDTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PDTR_1

    boolean VariantMerge_For_Variant_Source_Varian_i;

#define B_PDTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PDTR_1

    boolean VariantMerge_For_Variant_Source_Varian_k;

#define B_PDTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PDTR_1

    boolean Constant3;                 /* '<S219>/Constant3' */

#define B_PDTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PDTR_1

    TePDTR_e_BattDischg_State VariantMerge_For_Variant_Source_Varian_c;

#define B_PDTR_AC_T_VARIANT_EXISTS
#endif

#ifndef B_PDTR_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
B_PDTR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_PDTR_ac_T
{

#if Rte_SysCon_Variant_PDTR_1

    float32 UnitDelay1_DSTATE;         /* '<S144>/UnitDelay1' */

#define DW_PDTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PDTR_1

    float32 Delay_DSTATE;              /* '<S143>/Delay' */

#define DW_PDTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PDTR_1

    float32 UnitDelay1_DSTATE_g;       /* '<S145>/UnitDelay1' */

#define DW_PDTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PDTR_1

    float32 UnitDelay_DSTATE;          /* '<S141>/UnitDelay' */

#define DW_PDTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PDTR_1

    float32 Delay_DSTATE_d[100];       /* '<S141>/Delay' */

#define DW_PDTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PDTR_1

    float32 UnitDelay_DSTATE_i;        /* '<S92>/UnitDelay' */

#define DW_PDTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PDTR_1

    float32 UnitDelay_DSTATE_k;        /* '<S35>/UnitDelay' */

#define DW_PDTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PDTR_1

    uint32 CircBufIdx;                 /* '<S141>/Delay' */

#define DW_PDTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PDTR_1

    uint16 UnitDelay_DSTATE_j;         /* '<S151>/UnitDelay' */

#define DW_PDTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PDTR_1

    boolean UnitDelay_DSTATE_g;        /* '<S152>/Unit Delay' */

#define DW_PDTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PDTR_1

    boolean UnitDelay_DSTATE_io;       /* '<S93>/UnitDelay' */

#define DW_PDTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PDTR_1

    boolean UnitDelay_DSTATE_l;        /* '<S62>/UnitDelay' */

#define DW_PDTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PDTR_1

    boolean UnitDelay_DSTATE_ip;       /* '<S61>/UnitDelay' */

#define DW_PDTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PDTR_1

    boolean UnitDelay_DSTATE_no;       /* '<S60>/UnitDelay' */

#define DW_PDTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PDTR_1

    boolean UnitDelay_DSTATE_b;        /* '<S59>/UnitDelay' */

#define DW_PDTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PDTR_1

    boolean UnitDelay_DSTATE_d;        /* '<S58>/UnitDelay' */

#define DW_PDTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PDTR_1

    boolean UnitDelay_DSTATE_c;        /* '<S51>/UnitDelay' */

#define DW_PDTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PDTR_1

    boolean UnitDelay_DSTATE_m;        /* '<S50>/UnitDelay' */

#define DW_PDTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PDTR_1

    boolean UnitDelay_DSTATE_p;        /* '<S49>/UnitDelay' */

#define DW_PDTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PDTR_1

    boolean UnitDelay_DSTATE_dl;       /* '<S48>/UnitDelay' */

#define DW_PDTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PDTR_1

    TePDTR_e_BattDischg_State UnitDelay_DSTATE_g5;/* '<S3>/UnitDelay' */

#define DW_PDTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PDTR_1

    TePDTR_e_BattDischg_State UnitDelay2_DSTATE;/* '<S9>/UnitDelay2' */

#define DW_PDTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PDTR_1

    TePDTR_e_BattDischg_State UnitDelay1_DSTATE_p;/* '<S9>/UnitDelay1' */

#define DW_PDTR_AC_T_VARIANT_EXISTS
#endif

#ifndef DW_PDTR_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
DW_PDTR_ac_T;

/* Zero-crossing (trigger) state */
typedef struct tag_PrevZCX_PDTR_ac_T
{

#if Rte_SysCon_Variant_PDTR_1

    ZCSigState Moving_Avg_Filter_Angle_Trig_ZCE;/* '<S22>/Moving_Avg_Filter_Angle' */

#define PREVZCX_PDTR_AC_T_VARIANT_EXISTS
#endif

#ifndef PREVZCX_PDTR_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
PrevZCX_PDTR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PDTR
#include "MemMap.h"

extern VAR(B_PDTR_ac_T, PDTR_VAR_INIT) PDTR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PDTR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PDTR
#include "MemMap.h"

extern VAR(DW_PDTR_ac_T, PDTR_VAR_INIT) PDTR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PDTR
#include "MemMap.h"

/* Zero-crossing (trigger) state */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PDTR
#include "MemMap.h"

extern VAR(PrevZCX_PDTR_ac_T, PDTR_VAR_INIT) PDTR_ac_PrevZCX;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PDTR
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
 * '<Root>' : 'PDTR_ac'
 * '<S1>'   : 'PDTR_ac/PDTR_MedTEH'
 * '<S2>'   : 'PDTR_ac/PDTR_PwrOn'
 * '<S3>'   : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt'
 * '<S4>'   : 'PDTR_ac/PDTR_MedTEH/PDTI_ProcessInputs'
 * '<S5>'   : 'PDTR_ac/PDTR_MedTEH/PDTO_Outputs'
 * '<S6>'   : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/BattCritic'
 * '<S7>'   : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/CabHeatOrCoolReq'
 * '<S8>'   : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Conditioning_Reqs'
 * '<S9>'   : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Debounce_State'
 * '<S10>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/DocBlock'
 * '<S11>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/HtrStsLocked'
 * '<S12>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/HtrStsTrans'
 * '<S13>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/If_Condition_Check'
 * '<S14>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/KaPDTR_e_BattDischg_StateSrcPriority'
 * '<S15>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Msg7_New'
 * '<S16>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/OVDeterm_New'
 * '<S17>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/PDTC_PlugInSt'
 * '<S18>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Reduced_States'
 * '<S19>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Select_App'
 * '<S20>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/StatePriority'
 * '<S21>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/State_Overrides'
 * '<S22>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/eBurn_Req'
 * '<S23>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/BattCritic/Enumerated_Constant'
 * '<S24>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/BattCritic/Enumerated_Constant1'
 * '<S25>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/CabHeatOrCoolReq/DocBlock'
 * '<S26>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/CabHeatOrCoolReq/DocBlock1'
 * '<S27>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/CabHeatOrCoolReq/Enumerated_Constant1'
 * '<S28>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/CabHeatOrCoolReq/Enumerated_Constant2'
 * '<S29>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/CabHeatOrCoolReq/Enumerated_Constant3'
 * '<S30>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/CabHeatOrCoolReq/Enumerated_Constant5'
 * '<S31>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/CabHeatOrCoolReq/KePDTR_b_EnblNewModCabCondReq'
 * '<S32>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Conditioning_Reqs/KePDTR_b_EnblPwrSink'
 * '<S33>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Debounce_State/KePDTR_t_OV_BattDschgSt_MatureTime'
 * '<S34>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Debounce_State/KePDTR_t_OV_BattDschgSt_Mature_dT'
 * '<S35>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Debounce_State/TimerResetEnabled'
 * '<S36>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/HtrStsLocked/Enumerated_Constant'
 * '<S37>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/HtrStsLocked/Enumerated_Constant1'
 * '<S38>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/HtrStsLocked/Enumerated_Constant2'
 * '<S39>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/HtrStsLocked/Enumerated_Constant3'
 * '<S40>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/HtrStsLocked/Enumerated_Constant4'
 * '<S41>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/HtrStsLocked/Enumerated_Constant5'
 * '<S42>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/HtrStsLocked/IfThenElse'
 * '<S43>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/HtrStsLocked/IfThenElse1'
 * '<S44>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/HtrStsLocked/KePDTR_b_BattHeater_RU_Sel'
 * '<S45>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/HtrStsLocked/KePDTR_b_CabHeater_RU_Sel'
 * '<S46>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/HtrStsLocked/KePDTR_b_Dsbl_HtrLockedChk'
 * '<S47>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/HtrStsLocked/KePDTR_b_HeatingEle_Sel'
 * '<S48>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/HtrStsTrans/EdgeRising1'
 * '<S49>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/HtrStsTrans/EdgeRising3'
 * '<S50>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/HtrStsTrans/EdgeRising5'
 * '<S51>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/HtrStsTrans/EdgeRising7'
 * '<S52>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/HtrStsTrans/Enumerated_Constant'
 * '<S53>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/HtrStsTrans/Enumerated_Constant1'
 * '<S54>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/HtrStsTrans/Enumerated_Constant2'
 * '<S55>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/HtrStsTrans/Enumerated_Constant5'
 * '<S56>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/HtrStsTrans/KePDTR_b_Enbl_EPDReset'
 * '<S57>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/HtrStsTrans/KePDTR_b_Enbl_HtrTransitionChk'
 * '<S58>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/HtrStsTrans/SignalLatchOnWithReset2'
 * '<S59>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/HtrStsTrans/SignalLatchOnWithReset3'
 * '<S60>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/HtrStsTrans/SignalLatchOnWithReset4'
 * '<S61>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/HtrStsTrans/SignalLatchOnWithReset5'
 * '<S62>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/If_Condition_Check/Hysteresis5'
 * '<S63>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/If_Condition_Check/KePDTR_T_Amb_TempChilly'
 * '<S64>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/If_Condition_Check/KePDTR_T_ChillAllow_CellMaxTmp'
 * '<S65>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/If_Condition_Check/KePDTR_T_ForcdBatCodn_LSP'
 * '<S66>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/If_Condition_Check/KePDTR_T_ForcdBatCodn_RSP'
 * '<S67>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/If_Condition_Check/KePDTR_b_DsblOVForState5'
 * '<S68>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/If_Condition_Check/KePDTR_b_EnableHysForBatCooling'
 * '<S69>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/If_Condition_Check/KePDTR_b_VhlPlgInDsbl'
 * '<S70>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/If_Condition_Check/KePDTR_b_VhlPlgInDsbl1'
 * '<S71>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/If_Condition_Check/KePDTR_b_VhlPlgInEnbl'
 * '<S72>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/If_Condition_Check/KePDTR_b_VhlPlgInEnbl1'
 * '<S73>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Msg7_New/Enumerated_Constant'
 * '<S74>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Msg7_New/Enumerated_Constant1'
 * '<S75>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Msg7_New/Enumerated_Constant2'
 * '<S76>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Msg7_New/Enumerated_Constant3'
 * '<S77>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Msg7_New/Enumerated_Constant4'
 * '<S78>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Msg7_New/Enumerated_Constant5'
 * '<S79>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Msg7_New/KaPDTR_b_HoodKeyStat'
 * '<S80>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Msg7_New/KePDTR_b_BatCritChk_Msg7'
 * '<S81>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Msg7_New/KePDTR_b_BatOVChkMsg7'
 * '<S82>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Msg7_New/KePDTR_b_DispStChk1_Msg7'
 * '<S83>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Msg7_New/KePDTR_b_DispStChk2_Msg7'
 * '<S84>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Msg7_New/KePDTR_b_DsblPlgIn_Msg7'
 * '<S85>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Msg7_New/KePDTR_b_EnblBatCritChk_Msg7'
 * '<S86>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Msg7_New/KePDTR_b_HVOVFail1_Msg7'
 * '<S87>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Msg7_New/KePDTR_b_HVOVFail2_Msg7'
 * '<S88>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Msg7_New/KePDTR_b_Msg7_BattFlts_Dsbl'
 * '<S89>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Msg7_New/KePDTR_t_Msg7delay'
 * '<S90>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Msg7_New/KePDTR_t_Msg7delay_dT'
 * '<S91>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Msg7_New/TruthTable'
 * '<S92>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Msg7_New/TurnOnDelayTime'
 * '<S93>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Msg7_New/TurnOnDelayTime/EdgeRising'
 * '<S94>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/OVDeterm_New/Enumerated_Constant'
 * '<S95>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/OVDeterm_New/Enumerated_Constant1'
 * '<S96>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/OVDeterm_New/Enumerated_Constant2'
 * '<S97>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/OVDeterm_New/Enumerated_Constant3'
 * '<S98>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/OVDeterm_New/Enumerated_Constant4'
 * '<S99>'  : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/OVDeterm_New/Enumerated_Constant5'
 * '<S100>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/OVDeterm_New/Enumerated_Constant6'
 * '<S101>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/OVDeterm_New/Enumerated_Constant7'
 * '<S102>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/OVDeterm_New/KePDTR_b_EnblCrnk_OV'
 * '<S103>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/OVDeterm_New/KePDTR_b_HVLimSpd_DispSt'
 * '<S104>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/OVDeterm_New/KePDTR_b_HVNoRegen_DispSt'
 * '<S105>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/OVDeterm_New/KePDTR_b_OV1_DispSt'
 * '<S106>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/OVDeterm_New/KePDTR_b_OV_BattFlts_Dsbl'
 * '<S107>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/PDTC_PlugInSt/CeHSCR_e_All1'
 * '<S108>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/PDTC_PlugInSt/CeHSCR_e_All4'
 * '<S109>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/PDTC_PlugInSt/CeHSCR_e_All5'
 * '<S110>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/PDTC_PlugInSt/CeHSCR_e_All6'
 * '<S111>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/PDTC_PlugInSt/CeHSCR_e_All7'
 * '<S112>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Reduced_States/BatAndCab_Cndtn'
 * '<S113>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Reduced_States/BatTempNotOpt'
 * '<S114>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Reduced_States/Batt_Cabin_Cond_State'
 * '<S115>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Reduced_States/Batt_CoolCond_Check'
 * '<S116>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Reduced_States/Batt_HeatCond_Check'
 * '<S117>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Reduced_States/BatteryOnly_Cond_State'
 * '<S118>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Reduced_States/CabOnly_Cndtn'
 * '<S119>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Reduced_States/CabinOnly_Cond_State'
 * '<S120>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Reduced_States/NoDischarge_State'
 * '<S121>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Reduced_States/Batt_Cabin_Cond_State/EnumSetBlock'
 * '<S122>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Reduced_States/Batt_Cabin_Cond_State/Enumerated_Constant'
 * '<S123>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Reduced_States/Batt_CoolCond_Check/EnumeratedConstant'
 * '<S124>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Reduced_States/Batt_CoolCond_Check/EnumeratedConstant1'
 * '<S125>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Reduced_States/Batt_HeatCond_Check/EnumeratedConstant'
 * '<S126>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Reduced_States/Batt_HeatCond_Check/EnumeratedConstant1'
 * '<S127>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Reduced_States/Batt_HeatCond_Check/EnumeratedConstant2'
 * '<S128>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Reduced_States/Batt_HeatCond_Check/KePDTR_b_EnblActvPsvHeatReq'
 * '<S129>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Reduced_States/BatteryOnly_Cond_State/EnumSetBlock'
 * '<S130>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Reduced_States/BatteryOnly_Cond_State/Enumerated_Constant'
 * '<S131>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Reduced_States/CabinOnly_Cond_State/EnumSetBlock'
 * '<S132>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Reduced_States/CabinOnly_Cond_State/Enumerated_Constant'
 * '<S133>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Reduced_States/NoDischarge_State/EnumSetBlock'
 * '<S134>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Reduced_States/NoDischarge_State/Enumerated_Constant'
 * '<S135>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/Select_App/KePDTR_b_SelectOldApp_PwrDispSt'
 * '<S136>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/State_Overrides/KePDTR_b_OV_BattDischg_State_SD'
 * '<S137>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/State_Overrides/KePDTR_e_OV_BattDischg_State_D'
 * '<S138>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/eBurn_Req/BrakeHot_Check'
 * '<S139>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/eBurn_Req/EnblDistAngle_Calc'
 * '<S140>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/eBurn_Req/KePDTR_b_SelInhRegBrkLevel'
 * '<S141>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/eBurn_Req/Moving_Avg_Filter_Angle'
 * '<S142>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/eBurn_Req/Subsystem'
 * '<S143>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/eBurn_Req/Trigger_Dist'
 * '<S144>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/eBurn_Req/eBurnAct_Distance_Calc'
 * '<S145>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/eBurn_Req/eBurn_Dist_Calc'
 * '<S146>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/eBurn_Req/eBurn_FlagSet'
 * '<S147>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/eBurn_Req/eBurn_SOC_Check'
 * '<S148>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/eBurn_Req/BrakeHot_Check/EnumeratedConstant'
 * '<S149>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/eBurn_Req/BrakeHot_Check/EnumeratedConstant1'
 * '<S150>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/eBurn_Req/BrakeHot_Check/EnumeratedConstant2'
 * '<S151>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/eBurn_Req/Moving_Avg_Filter_Angle/CountDownResetEnabled'
 * '<S152>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/eBurn_Req/Moving_Avg_Filter_Angle/EdgeRising'
 * '<S153>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/eBurn_Req/Moving_Avg_Filter_Angle/KePDTR_K_MovAvgOrder'
 * '<S154>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/eBurn_Req/Moving_Avg_Filter_Angle/KePDTR_phi_InitFilterVal'
 * '<S155>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/eBurn_Req/Moving_Avg_Filter_Angle/ProtectedDivision'
 * '<S156>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/eBurn_Req/Subsystem/KePDTR_phi_EBurnEnblDownHillSlp'
 * '<S157>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/eBurn_Req/Trigger_Dist/KePDTR_ml_DistAcqMovAvgFilter'
 * '<S158>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/eBurn_Req/eBurn_Dist_Calc/KePDTR_ml_EBurnEnblDownHillSlp'
 * '<S159>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/eBurn_Req/eBurn_FlagSet/KePDTR_b_EnbleBurnFlag'
 * '<S160>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/eBurn_Req/eBurn_SOC_Check/Hysteresis'
 * '<S161>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/eBurn_Req/eBurn_SOC_Check/KePDTR_pct_MinBattSocEBurnHigh'
 * '<S162>' : 'PDTR_ac/PDTR_MedTEH/PDTC_BattDschgSt/eBurn_Req/eBurn_SOC_Check/KePDTR_pct_MinBattSocEBurnLow'
 * '<S163>' : 'PDTR_ac/PDTR_MedTEH/PDTI_ProcessInputs/DocBlock1'
 * '<S164>' : 'PDTR_ac/PDTR_MedTEH/PDTI_ProcessInputs/KePDTR_Pct_HV_BatPackSOC_Arb_D'
 * '<S165>' : 'PDTR_ac/PDTR_MedTEH/PDTI_ProcessInputs/KePDTR_b_AC_CompReq_D'
 * '<S166>' : 'PDTR_ac/PDTR_MedTEH/PDTI_ProcessInputs/KePDTR_b_AC_CompReq_SD'
 * '<S167>' : 'PDTR_ac/PDTR_MedTEH/PDTI_ProcessInputs/KePDTR_b_BatCntctrStat_SD'
 * '<S168>' : 'PDTR_ac/PDTR_MedTEH/PDTI_ProcessInputs/KePDTR_b_CabAllowed_D'
 * '<S169>' : 'PDTR_ac/PDTR_MedTEH/PDTI_ProcessInputs/KePDTR_b_CabAllowed_SD'
 * '<S170>' : 'PDTR_ac/PDTR_MedTEH/PDTI_ProcessInputs/KePDTR_b_CabHeatThermalState_SD'
 * '<S171>' : 'PDTR_ac/PDTR_MedTEH/PDTI_ProcessInputs/KePDTR_b_CabReq_NotAllow_D'
 * '<S172>' : 'PDTR_ac/PDTR_MedTEH/PDTI_ProcessInputs/KePDTR_b_CabReq_NotAllow_SD'
 * '<S173>' : 'PDTR_ac/PDTR_MedTEH/PDTI_ProcessInputs/KePDTR_b_CabThermalMod_SD'
 * '<S174>' : 'PDTR_ac/PDTR_MedTEH/PDTI_ProcessInputs/KePDTR_b_EngageThermalLoad_D'
 * '<S175>' : 'PDTR_ac/PDTR_MedTEH/PDTI_ProcessInputs/KePDTR_b_EngageThermalLoad_SD'
 * '<S176>' : 'PDTR_ac/PDTR_MedTEH/PDTI_ProcessInputs/KePDTR_b_EstSlopeAngle_SD'
 * '<S177>' : 'PDTR_ac/PDTR_MedTEH/PDTI_ProcessInputs/KePDTR_b_HVOverVoltFailure_SD'
 * '<S178>' : 'PDTR_ac/PDTR_MedTEH/PDTI_ProcessInputs/KePDTR_b_HV_BatPackSOC_Arb_SD'
 * '<S179>' : 'PDTR_ac/PDTR_MedTEH/PDTI_ProcessInputs/KePDTR_b_HV_BatRdy_D'
 * '<S180>' : 'PDTR_ac/PDTR_MedTEH/PDTI_ProcessInputs/KePDTR_b_HV_BatRdy_SD'
 * '<S181>' : 'PDTR_ac/PDTR_MedTEH/PDTI_ProcessInputs/KePDTR_b_HV_Bat_OverVltg_D'
 * '<S182>' : 'PDTR_ac/PDTR_MedTEH/PDTI_ProcessInputs/KePDTR_b_HV_Bat_OverVltg_SD'
 * '<S183>' : 'PDTR_ac/PDTR_MedTEH/PDTI_ProcessInputs/KePDTR_b_HoodAjar_D'
 * '<S184>' : 'PDTR_ac/PDTR_MedTEH/PDTI_ProcessInputs/KePDTR_b_HoodAjar_SD'
 * '<S185>' : 'PDTR_ac/PDTR_MedTEH/PDTI_ProcessInputs/KePDTR_b_LTCLThrmlMode_SD'
 * '<S186>' : 'PDTR_ac/PDTR_MedTEH/PDTI_ProcessInputs/KePDTR_b_PropSysActv_D'
 * '<S187>' : 'PDTR_ac/PDTR_MedTEH/PDTI_ProcessInputs/KePDTR_b_PropSysActv_SD'
 * '<S188>' : 'PDTR_ac/PDTR_MedTEH/PDTI_ProcessInputs/KePDTR_b_PwrSnkDispReq_D'
 * '<S189>' : 'PDTR_ac/PDTR_MedTEH/PDTI_ProcessInputs/KePDTR_b_PwrSnkDispReq_SD'
 * '<S190>' : 'PDTR_ac/PDTR_MedTEH/PDTI_ProcessInputs/KePDTR_b_RegenBrkInhb_D'
 * '<S191>' : 'PDTR_ac/PDTR_MedTEH/PDTI_ProcessInputs/KePDTR_b_RegenBrkInhb_SD'
 * '<S192>' : 'PDTR_ac/PDTR_MedTEH/PDTI_ProcessInputs/KePDTR_b_SSDR_KeySts_SD'
 * '<S193>' : 'PDTR_ac/PDTR_MedTEH/PDTI_ProcessInputs/KePDTR_b_TravelDistance_SD'
 * '<S194>' : 'PDTR_ac/PDTR_MedTEH/PDTI_ProcessInputs/KePDTR_b_eBurn_Stages_SD'
 * '<S195>' : 'PDTR_ac/PDTR_MedTEH/PDTI_ProcessInputs/KePDTR_e_BatCntctrStat_D'
 * '<S196>' : 'PDTR_ac/PDTR_MedTEH/PDTI_ProcessInputs/KePDTR_e_CabHeatThermalState_D'
 * '<S197>' : 'PDTR_ac/PDTR_MedTEH/PDTI_ProcessInputs/KePDTR_e_CabThermalMode_D'
 * '<S198>' : 'PDTR_ac/PDTR_MedTEH/PDTI_ProcessInputs/KePDTR_e_HVOverVoltFailure_D'
 * '<S199>' : 'PDTR_ac/PDTR_MedTEH/PDTI_ProcessInputs/KePDTR_e_LTCLThrmlMode_D'
 * '<S200>' : 'PDTR_ac/PDTR_MedTEH/PDTI_ProcessInputs/KePDTR_e_SSDR_KeySts_D'
 * '<S201>' : 'PDTR_ac/PDTR_MedTEH/PDTI_ProcessInputs/KePDTR_e_eBurn_Stages_D'
 * '<S202>' : 'PDTR_ac/PDTR_MedTEH/PDTI_ProcessInputs/KePDTR_l_TravelDistance_D'
 * '<S203>' : 'PDTR_ac/PDTR_MedTEH/PDTI_ProcessInputs/KePDTR_phi_EstSlopeAngle_D'
 * '<S204>' : 'PDTR_ac/PDTR_MedTEH/PDTO_Outputs/DocBlock1'
 * '<S205>' : 'PDTR_ac/PDTR_MedTEH/PDTO_Outputs/KePDTR_b_BattCoolingCond_Req_D'
 * '<S206>' : 'PDTR_ac/PDTR_MedTEH/PDTO_Outputs/KePDTR_b_BattCoolingCond_Req_SD'
 * '<S207>' : 'PDTR_ac/PDTR_MedTEH/PDTO_Outputs/KePDTR_b_BattHeatingCond_Req_D'
 * '<S208>' : 'PDTR_ac/PDTR_MedTEH/PDTO_Outputs/KePDTR_b_BattHeatingCond_Req_SD'
 * '<S209>' : 'PDTR_ac/PDTR_MedTEH/PDTO_Outputs/KePDTR_b_CabinCond_Req_D'
 * '<S210>' : 'PDTR_ac/PDTR_MedTEH/PDTO_Outputs/KePDTR_b_CabinCond_Req_SD'
 * '<S211>' : 'PDTR_ac/PDTR_MedTEH/PDTO_Outputs/KePDTR_b_EburnEnbl_D'
 * '<S212>' : 'PDTR_ac/PDTR_MedTEH/PDTO_Outputs/KePDTR_b_EburnEnbl_SD'
 * '<S213>' : 'PDTR_ac/PDTR_MedTEH/PDTO_Outputs/KePDTR_b_EngOrBattPwrDschg_State_SD'
 * '<S214>' : 'PDTR_ac/PDTR_MedTEH/PDTO_Outputs/KePDTR_b_KeyRunCrnk_BattOV_D'
 * '<S215>' : 'PDTR_ac/PDTR_MedTEH/PDTO_Outputs/KePDTR_b_KeyRunCrnk_BattOV_SD'
 * '<S216>' : 'PDTR_ac/PDTR_MedTEH/PDTO_Outputs/KePDTR_b_KeyRun_OV_BattCrit_D'
 * '<S217>' : 'PDTR_ac/PDTR_MedTEH/PDTO_Outputs/KePDTR_b_KeyRun_OV_BattCrit_SD'
 * '<S218>' : 'PDTR_ac/PDTR_MedTEH/PDTO_Outputs/KePDTR_e_EngOrBattPwrDschg_State_D'
 * '<S219>' : 'PDTR_ac/PDTR_PwrOn/PDTO_Outputs_Init'
 * '<S220>' : 'PDTR_ac/PDTR_PwrOn/PDTO_Outputs_Init/KePDTR_b_KeyRunCrnk_BattOV_Init'
 * '<S221>' : 'PDTR_ac/PDTR_PwrOn/PDTO_Outputs_Init/KePDTR_b_KeyRun_OV_BattCrit_Init'
 * '<S222>' : 'PDTR_ac/PDTR_PwrOn/PDTO_Outputs_Init/KePDTR_e_EngOrBattPwrDschg_State_Init'
 */
#endif                                 /* RTW_HEADER_PDTR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
