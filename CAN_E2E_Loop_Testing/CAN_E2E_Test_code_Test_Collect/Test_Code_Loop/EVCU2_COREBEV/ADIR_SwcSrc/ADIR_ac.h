/*
 * File: ADIR_ac.h
 *
 * Code generated for Simulink model 'ADIR_ac'.
 *
 * Model version                  : 9.241
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:04:54 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ADIR_ac_h_
#define RTW_HEADER_ADIR_ac_h_
#include <math.h>
#include "Rte_Type.h"
#ifndef ADIR_ac_COMMON_INCLUDES_
#define ADIR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_ADIR.h"
#endif                                 /* ADIR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_ADIR_ac_T
{
    boolean OutportBufferForVeADIR_b_LftWEDClosingFa;/* '<S157>/Const14' */
    boolean OutportBufferForVeADIR_b_LftWEDOpeningFa;/* '<S157>/Const15' */
    boolean OutportBufferForVeADIR_b_RtWEDClosingFai;/* '<S157>/Const16' */
    boolean OutportBufferForVeADIR_b_RtWEDOpeningFai;/* '<S157>/Const17' */
    boolean OutportBufferForVeADIR_b_BSM_WEDModeReqF;/* '<S157>/Const13' */
    boolean OutportBufferForVeADIR_b_WEDFailuresTARo;/* '<S157>/Const2' */
    boolean OutportBufferForVeADIR_b_WEDSystemFailur;/* '<S157>/Const3' */

#if Rte_SysCon_Variant_ADIR_1

    boolean OutportBufferForBSM_WEDModeReqFA_Init_IR;
                                    /* '<S156>/KeADIR_b_BSM_WEDModeReqFAInit' */

#define B_ADIR_AC_T_VARIANT_EXISTS
#endif

    TeDFIB_e_FaultDebounceStatus OutportBufferForVeADIR_e_FaultSts_LF_WHL;/* '<S157>/Const56' */
    TeDFIB_e_FaultDebounceStatus OutportBufferForVeADIR_e_FaultSts_RF_WHL;/* '<S157>/Const57' */
    TeDFIB_e_FaultDebounceStatus OutportBufferForVeADIR_e_FaultSts_WHL_Hu;/* '<S157>/Const58' */
    TeDFIB_e_FaultDebounceStatus OutportBufferForVeADIR_e_FaultSts_WHL__p;/* '<S157>/Const1' */

#if Rte_SysCon_Variant_ADIR_1

    TeDFIB_e_FaultDebounceStatus Merge;/* '<S99>/Merge' */

#define B_ADIR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADIR_1

    TeDFIB_e_FaultDebounceStatus Merge_j;/* '<S147>/Merge' */

#define B_ADIR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADIR_1

    TeDFIB_e_FaultDebounceStatus Merge_c;/* '<S135>/Merge' */

#define B_ADIR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADIR_1

    TeDFIB_e_FaultDebounceStatus Merge_a;/* '<S124>/Merge' */

#define B_ADIR_AC_T_VARIANT_EXISTS
#endif

    TeADIR_e_WEDFailureSts OutportBufferForVeADIR_e_WEDMechFailure_;/* '<S157>/Const9' */

#if Rte_SysCon_Variant_ADIR_1

    TeADIR_e_WEDFailureSts Merge_h;    /* '<S78>/Merge' */

#define B_ADIR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADIR_1

    TeADIR_e_WEDExtToolCmd DataStoreRead_j;/* '<S156>/Data Store Read' */

#define B_ADIR_AC_T_VARIANT_EXISTS
#endif

    TeADCR_e_AWDReq OutportBufferForVeADIR_e_BSM_WEDModeReq_;/* '<S157>/Const10' */

#if Rte_SysCon_Variant_ADIR_1

    TeADCR_e_AWDReq OutportBufferForBSM_WEDModeReq_Init_IRV;
                                      /* '<S156>/KeADIR_e_BSM_WEDModeReqInit' */

#define B_ADIR_AC_T_VARIANT_EXISTS
#endif

}
B_ADIR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_ADIR_ac_T
{
    uint16 NeADIR_Cnt_WEDMechFailure_MFOP;/* '<Root>/Data Store Memory1' */

#if Rte_SysCon_Variant_ADIR_1

    uint8 UnitDelay_DSTATE_b;          /* '<S36>/Unit Delay' */

#define DW_ADIR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADIR_1

    boolean UnitDelay_DSTATE_e;        /* '<S100>/Unit Delay' */

#define DW_ADIR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADIR_1

    boolean UnitDelay1_DSTATE;         /* '<S100>/Unit Delay1' */

#define DW_ADIR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADIR_1

    boolean UnitDelay_DSTATE_bg;       /* '<S148>/Unit Delay' */

#define DW_ADIR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADIR_1

    boolean UnitDelay_DSTATE_h;        /* '<S136>/Unit Delay' */

#define DW_ADIR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADIR_1

    boolean UnitDelay_DSTATE_j;        /* '<S125>/Unit Delay' */

#define DW_ADIR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADIR_1

    boolean UnitDelay_DSTATE_m;        /* '<S101>/Unit Delay' */

#define DW_ADIR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADIR_1

    uint8 is_active_c2_ADIR_ac;        /* '<S122>/RtWEDRetryCheck' */

#define DW_ADIR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADIR_1

    uint8 is_c2_ADIR_ac;               /* '<S122>/RtWEDRetryCheck' */

#define DW_ADIR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADIR_1

    uint8 is_WEDShiftDetection;        /* '<S122>/RtWEDRetryCheck' */

#define DW_ADIR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADIR_1

    uint8 is_active_c1_ADIR_ac;        /* '<S120>/LftWEDRetryCheck' */

#define DW_ADIR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADIR_1

    uint8 is_c1_ADIR_ac;               /* '<S120>/LftWEDRetryCheck' */

#define DW_ADIR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADIR_1

    uint8 is_WEDShiftDetection_l;      /* '<S120>/LftWEDRetryCheck' */

#define DW_ADIR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADIR_1

    uint8 is_active_c14_ADIR_ac;       /* '<S53>/MechFailureCheck' */

#define DW_ADIR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADIR_1

    uint8 is_c14_ADIR_ac;              /* '<S53>/MechFailureCheck' */

#define DW_ADIR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADIR_1

    uint8 is_WEDBrokenCLOSEDDiag;      /* '<S53>/MechFailureCheck' */

#define DW_ADIR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADIR_1

    uint8 is_WEDBrokenOPENDiag;        /* '<S53>/MechFailureCheck' */

#define DW_ADIR_AC_T_VARIANT_EXISTS
#endif

}
DW_ADIR_ac_T;

/* Invariant block signals (default storage) */
typedef struct
{
    const TeDFIB_e_FaultDebounceStatus Constant;/* '<S162>/Constant' */
    const TeDFIB_e_FaultDebounceStatus Constant_l;/* '<S163>/Constant' */
    const TeDFIB_e_FaultDebounceStatus Constant_o;/* '<S164>/Constant' */
    const TeDFIB_e_FaultDebounceStatus Constant_j;/* '<S160>/Constant' */
    const TeADIR_e_WEDFailureSts Constant_d;/* '<S165>/Constant' */
    const TeADCR_e_AWDReq Constant_i;  /* '<S161>/Constant' */
}
ConstB_ADIR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ADIR
#include "MemMap.h"

extern VAR(B_ADIR_ac_T, ADIR_VAR_INIT) ADIR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ADIR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ADIR
#include "MemMap.h"

extern VAR(DW_ADIR_ac_T, ADIR_VAR_INIT) ADIR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ADIR
#include "MemMap.h"
#define START_SEC_CONST_UNSPECIFIED_ADIR
#include "MemMap.h"

extern CONST(ConstB_ADIR_ac_T, ADIR_VAR_INIT) ADIR_ac_ConstB;/* constant block i/o */

#define STOP_SEC_CONST_UNSPECIFIED_ADIR
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
 * '<Root>' : 'ADIR_ac'
 * '<S1>'   : 'ADIR_ac/ADIR_FastTEF'
 * '<S2>'   : 'ADIR_ac/ADIR_MedTED'
 * '<S3>'   : 'ADIR_ac/ADIR_PwrOff'
 * '<S4>'   : 'ADIR_ac/ADIR_PwrOn'
 * '<S5>'   : 'ADIR_ac/FsftADIR_b_BSM_WEDModeReq'
 * '<S6>'   : 'ADIR_ac/PokeADIR_e_BSM_WEDModeReq'
 * '<S7>'   : 'ADIR_ac/RWDB652_WEDExtToolCmd'
 * '<S8>'   : 'ADIR_ac/ADIR_FastTEF/Input_Override'
 * '<S9>'   : 'ADIR_ac/ADIR_FastTEF/Input_Override/BSM_WEDModeReq_OV'
 * '<S10>'  : 'ADIR_ac/ADIR_FastTEF/Input_Override/BSM_WEDModeReq_OV/KeADIR_b_BSM_WEDModeReqFA_D'
 * '<S11>'  : 'ADIR_ac/ADIR_FastTEF/Input_Override/BSM_WEDModeReq_OV/KeADIR_b_BSM_WEDModeReqFA_SD'
 * '<S12>'  : 'ADIR_ac/ADIR_FastTEF/Input_Override/BSM_WEDModeReq_OV/KeADIR_b_BSM_WEDModeReq_SD'
 * '<S13>'  : 'ADIR_ac/ADIR_FastTEF/Input_Override/BSM_WEDModeReq_OV/KeADIR_e_BSM_WEDModeReq_D'
 * '<S14>'  : 'ADIR_ac/ADIR_MedTED/Overrides'
 * '<S15>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics'
 * '<S16>'  : 'ADIR_ac/ADIR_MedTED/Overrides/KeADIR_b_LftWEDClosingFail_D'
 * '<S17>'  : 'ADIR_ac/ADIR_MedTED/Overrides/KeADIR_b_LftWEDClosingFail_SD'
 * '<S18>'  : 'ADIR_ac/ADIR_MedTED/Overrides/KeADIR_b_LftWEDOpeningFail_D'
 * '<S19>'  : 'ADIR_ac/ADIR_MedTED/Overrides/KeADIR_b_LftWEDOpeningFail_SD'
 * '<S20>'  : 'ADIR_ac/ADIR_MedTED/Overrides/KeADIR_b_RtWEDClosingFail_D'
 * '<S21>'  : 'ADIR_ac/ADIR_MedTED/Overrides/KeADIR_b_RtWEDClosingFail_SD'
 * '<S22>'  : 'ADIR_ac/ADIR_MedTED/Overrides/KeADIR_b_RtWEDOpeningFail_D'
 * '<S23>'  : 'ADIR_ac/ADIR_MedTED/Overrides/KeADIR_b_RtWEDOpeningFail_SD'
 * '<S24>'  : 'ADIR_ac/ADIR_MedTED/Overrides/KeADIR_b_WEDExtToolCmd_SD'
 * '<S25>'  : 'ADIR_ac/ADIR_MedTED/Overrides/KeADIR_b_WEDFailuresTARoutine_D'
 * '<S26>'  : 'ADIR_ac/ADIR_MedTED/Overrides/KeADIR_b_WEDFailuresTARoutine_SD'
 * '<S27>'  : 'ADIR_ac/ADIR_MedTED/Overrides/KeADIR_b_WEDMechFailure_Sts_SD'
 * '<S28>'  : 'ADIR_ac/ADIR_MedTED/Overrides/KeADIR_b_WEDSystemFailure_D'
 * '<S29>'  : 'ADIR_ac/ADIR_MedTED/Overrides/KeADIR_b_WEDSystemFailure_SD'
 * '<S30>'  : 'ADIR_ac/ADIR_MedTED/Overrides/KeADIR_e_WEDExtToolCmd_D'
 * '<S31>'  : 'ADIR_ac/ADIR_MedTED/Overrides/KeADIR_e_WEDMechFailure_Sts_D'
 * '<S32>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/SharedEnableCnds'
 * '<S33>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDFailureFlags'
 * '<S34>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag'
 * '<S35>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDRetryDiag'
 * '<S36>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDServiceEoLDiag'
 * '<S37>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/SharedEnableCnds/KeADIR_b_IsDiagGlobalConditionsValid_OV'
 * '<S38>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/SharedEnableCnds/KeADIR_b_LftWEDElecFailCheck_OV'
 * '<S39>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/SharedEnableCnds/KeADIR_b_RtWEDElecFailCheck_OV'
 * '<S40>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDFailureFlags/getFaultActiveAndTestCompleted'
 * '<S41>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDFailureFlags/getFaultActiveAndTestCompleted1'
 * '<S42>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDFailureFlags/getFaultActiveAndTestCompleted10'
 * '<S43>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDFailureFlags/getFaultActiveAndTestCompleted2'
 * '<S44>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDFailureFlags/getFaultActiveAndTestCompleted3'
 * '<S45>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDFailureFlags/getFaultActiveAndTestCompleted4'
 * '<S46>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDFailureFlags/getFaultActiveAndTestCompleted5'
 * '<S47>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDFailureFlags/getFaultActiveAndTestCompleted6'
 * '<S48>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDFailureFlags/getFaultActiveAndTestCompleted7'
 * '<S49>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDFailureFlags/getFaultActiveAndTestCompleted8'
 * '<S50>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDFailureFlags/getFaultActiveAndTestCompleted9'
 * '<S51>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/Enable_Reset_Cnds'
 * '<S52>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/MechFailureDetection'
 * '<S53>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/MechFailureDiag'
 * '<S54>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/SharedEnableCnds'
 * '<S55>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/ThresholdChecks'
 * '<S56>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/Enable_Reset_Cnds/ABSActive_OV'
 * '<S57>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/Enable_Reset_Cnds/ASRActive_OV'
 * '<S58>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/Enable_Reset_Cnds/ESCActive_OV'
 * '<S59>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/Enable_Reset_Cnds/LatAccelOutOfRange_OV'
 * '<S60>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/Enable_Reset_Cnds/LongAccelOutOfRange_OV'
 * '<S61>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/Enable_Reset_Cnds/MtrA_SpdFA_OV'
 * '<S62>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/Enable_Reset_Cnds/SteerAngleOutOfRange_OV'
 * '<S63>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/Enable_Reset_Cnds/VehSpdOutOfRange_OV'
 * '<S64>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/Enable_Reset_Cnds/WhlSpdLHF_FA_OV'
 * '<S65>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/Enable_Reset_Cnds/WhlSpdRHF_FA_OV'
 * '<S66>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/Enable_Reset_Cnds/ABSActive_OV/KeADIR_b_ABSActive_OV'
 * '<S67>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/Enable_Reset_Cnds/ASRActive_OV/KeADIR_b_ASRActive_OV'
 * '<S68>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/Enable_Reset_Cnds/ESCActive_OV/KeADIR_b_ESCActive_OV'
 * '<S69>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/Enable_Reset_Cnds/LatAccelOutOfRange_OV/KeADIR_b_LatAccelOutOfRange_OV'
 * '<S70>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/Enable_Reset_Cnds/LongAccelOutOfRange_OV/KeADIR_b_LongAccelOutOfRange_OV'
 * '<S71>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/Enable_Reset_Cnds/MtrA_SpdFA_OV/KeADIR_b_MtrA_SpdFA_OV'
 * '<S72>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/Enable_Reset_Cnds/SteerAngleOutOfRange_OV/KeADIR_b_SteerAngleOutOfRange_OV'
 * '<S73>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/Enable_Reset_Cnds/VehSpdOutOfRange_OV/KeADIR_b_VehSpdOutOfRange_OV'
 * '<S74>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/Enable_Reset_Cnds/WhlSpdLHF_FA_OV/KeADIR_b_WhlSpdLHF_FA_OV'
 * '<S75>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/Enable_Reset_Cnds/WhlSpdRHF_FA_OV/KeADIR_b_WhlSpdRHF_FA_OV'
 * '<S76>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/MechFailureDetection/KeADIR_n_MtrANeutralZone'
 * '<S77>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/MechFailureDetection/KeADIR_r_FinalDriveRatio'
 * '<S78>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/MechFailureDiag/FailureTypeReport'
 * '<S79>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/MechFailureDiag/KeADIR_b_WEDBrokenDiagEn'
 * '<S80>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/MechFailureDiag/KeADIR_n_WEDBrokenOpenTh'
 * '<S81>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/MechFailureDiag/KeADIR_t_MedTED'
 * '<S82>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/MechFailureDiag/KeADIR_t_MtrABrkngTmLmt'
 * '<S83>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/MechFailureDiag/LoEnable_ResetCounts'
 * '<S84>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/MechFailureDiag/MechFailureCheck'
 * '<S85>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/MechFailureDiag/MechFailure_Diag_XoY'
 * '<S86>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/MechFailureDiag/FailureTypeReport/Const1'
 * '<S87>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/MechFailureDiag/FailureTypeReport/Const56'
 * '<S88>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/MechFailureDiag/FailureTypeReport/Enumerated Constant1'
 * '<S89>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/MechFailureDiag/FailureTypeReport/Enumerated Constant16'
 * '<S90>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/MechFailureDiag/FailureTypeReport/Enumerated Constant2'
 * '<S91>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/MechFailureDiag/FailureTypeReport/WEDStsBrokenClosed'
 * '<S92>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/MechFailureDiag/FailureTypeReport/WEDStsBrokenOpen'
 * '<S93>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/MechFailureDiag/FailureTypeReport/WEDStsNoBreakages'
 * '<S94>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/MechFailureDiag/FailureTypeReport/WEDStsBrokenClosed/Const56'
 * '<S95>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/MechFailureDiag/FailureTypeReport/WEDStsBrokenOpen/Const56'
 * '<S96>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/MechFailureDiag/FailureTypeReport/WEDStsNoBreakages/Const56'
 * '<S97>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/MechFailureDiag/MechFailure_Diag_XoY/KeADIR_Cnt_WEDMechFailure_FailCnt'
 * '<S98>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/MechFailureDiag/MechFailure_Diag_XoY/KeADIR_Cnt_WEDMechFailure_SmpCnt'
 * '<S99>'  : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/MechFailureDiag/MechFailure_Diag_XoY/XofY_v2'
 * '<S100>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/MechFailureDiag/MechFailure_Diag_XoY/XofY_v2/BaseXofY'
 * '<S101>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/MechFailureDiag/MechFailure_Diag_XoY/XofY_v2/EdgeFalling1'
 * '<S102>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/MechFailureDiag/MechFailure_Diag_XoY/XofY_v2/Enumerated Constant16'
 * '<S103>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/MechFailureDiag/MechFailure_Diag_XoY/XofY_v2/Fail'
 * '<S104>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/MechFailureDiag/MechFailure_Diag_XoY/XofY_v2/Init'
 * '<S105>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/MechFailureDiag/MechFailure_Diag_XoY/XofY_v2/Pass'
 * '<S106>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/MechFailureDiag/MechFailure_Diag_XoY/XofY_v2/UpdateMFOP'
 * '<S107>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/MechFailureDiag/MechFailure_Diag_XoY/XofY_v2/BaseXofY/Counter Reset  Enabled '
 * '<S108>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/MechFailureDiag/MechFailure_Diag_XoY/XofY_v2/BaseXofY/Counter Reset  Enabled 1'
 * '<S109>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/MechFailureDiag/MechFailure_Diag_XoY/XofY_v2/Fail/Enumerated Constant16'
 * '<S110>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/MechFailureDiag/MechFailure_Diag_XoY/XofY_v2/Init/Enumerated Constant16'
 * '<S111>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/MechFailureDiag/MechFailure_Diag_XoY/XofY_v2/Pass/Enumerated Constant16'
 * '<S112>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/MechFailureDiag/MechFailure_Diag_XoY/XofY_v2/UpdateMFOP/Max Fails on Pass FOM'
 * '<S113>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/MechFailureDiag/MechFailure_Diag_XoY/XofY_v2/UpdateMFOP/ResetLogic'
 * '<S114>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/ThresholdChecks/KeADIR_a_AbsLatAccelMaxTh'
 * '<S115>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/ThresholdChecks/KeADIR_a_AbsLongAccelMaxTh'
 * '<S116>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/ThresholdChecks/KeADIR_phi_AbsSteerAngleMaxTh'
 * '<S117>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/ThresholdChecks/KeADIR_v_VehSpdSignedMaxTh'
 * '<S118>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/ThresholdChecks/KeADIR_v_VehSpdSignedMinTh'
 * '<S119>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDRetryDiag/KeADIR_b_WEDRetryDiagEn'
 * '<S120>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDRetryDiag/LeftWEDRetryDiag'
 * '<S121>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDRetryDiag/RetryFailDetection'
 * '<S122>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDRetryDiag/RightWEDRetryDiag'
 * '<S123>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDRetryDiag/LeftWEDRetryDiag/LftWEDRetryCheck'
 * '<S124>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDRetryDiag/LeftWEDRetryDiag/SetFaultSts'
 * '<S125>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDRetryDiag/LeftWEDRetryDiag/SetFaultSts/EdgeFalling1'
 * '<S126>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDRetryDiag/LeftWEDRetryDiag/SetFaultSts/Fail'
 * '<S127>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDRetryDiag/LeftWEDRetryDiag/SetFaultSts/Init'
 * '<S128>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDRetryDiag/LeftWEDRetryDiag/SetFaultSts/Pass'
 * '<S129>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDRetryDiag/LeftWEDRetryDiag/SetFaultSts/Fail/Enumerated Constant16'
 * '<S130>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDRetryDiag/LeftWEDRetryDiag/SetFaultSts/Init/Enumerated Constant16'
 * '<S131>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDRetryDiag/LeftWEDRetryDiag/SetFaultSts/Pass/Enumerated Constant16'
 * '<S132>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDRetryDiag/RetryFailDetection/KeADIR_Cnt_MaxClsngAttemptsThrshld'
 * '<S133>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDRetryDiag/RetryFailDetection/KeADIR_Cnt_MaxOpngAttemptsThrshld'
 * '<S134>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDRetryDiag/RightWEDRetryDiag/RtWEDRetryCheck'
 * '<S135>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDRetryDiag/RightWEDRetryDiag/SetFaultSts'
 * '<S136>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDRetryDiag/RightWEDRetryDiag/SetFaultSts/EdgeFalling1'
 * '<S137>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDRetryDiag/RightWEDRetryDiag/SetFaultSts/Fail'
 * '<S138>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDRetryDiag/RightWEDRetryDiag/SetFaultSts/Init'
 * '<S139>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDRetryDiag/RightWEDRetryDiag/SetFaultSts/Pass'
 * '<S140>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDRetryDiag/RightWEDRetryDiag/SetFaultSts/Fail/Enumerated Constant16'
 * '<S141>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDRetryDiag/RightWEDRetryDiag/SetFaultSts/Init/Enumerated Constant16'
 * '<S142>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDRetryDiag/RightWEDRetryDiag/SetFaultSts/Pass/Enumerated Constant16'
 * '<S143>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDServiceEoLDiag/EEpromWrite'
 * '<S144>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDServiceEoLDiag/KeADIR_b_WEDOverrideDiagEn'
 * '<S145>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDServiceEoLDiag/WEDBypassDiag'
 * '<S146>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDServiceEoLDiag/WEDBypassDiag/Enumerated Constant1'
 * '<S147>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDServiceEoLDiag/WEDBypassDiag/SetFaultSts'
 * '<S148>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDServiceEoLDiag/WEDBypassDiag/SetFaultSts/EdgeFalling1'
 * '<S149>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDServiceEoLDiag/WEDBypassDiag/SetFaultSts/Fail'
 * '<S150>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDServiceEoLDiag/WEDBypassDiag/SetFaultSts/Init'
 * '<S151>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDServiceEoLDiag/WEDBypassDiag/SetFaultSts/Pass'
 * '<S152>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDServiceEoLDiag/WEDBypassDiag/SetFaultSts/Fail/Enumerated Constant16'
 * '<S153>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDServiceEoLDiag/WEDBypassDiag/SetFaultSts/Init/Enumerated Constant16'
 * '<S154>' : 'ADIR_ac/ADIR_MedTED/WED_Diagnostics/WEDServiceEoLDiag/WEDBypassDiag/SetFaultSts/Pass/Enumerated Constant16'
 * '<S155>' : 'ADIR_ac/ADIR_PwrOn/DSM_Init'
 * '<S156>' : 'ADIR_ac/ADIR_PwrOn/IRV_Init'
 * '<S157>' : 'ADIR_ac/ADIR_PwrOn/Out_Init'
 * '<S158>' : 'ADIR_ac/ADIR_PwrOn/IRV_Init/KeADIR_b_BSM_WEDModeReqFAInit'
 * '<S159>' : 'ADIR_ac/ADIR_PwrOn/IRV_Init/KeADIR_e_BSM_WEDModeReqInit'
 * '<S160>' : 'ADIR_ac/ADIR_PwrOn/Out_Init/Const1'
 * '<S161>' : 'ADIR_ac/ADIR_PwrOn/Out_Init/Const10'
 * '<S162>' : 'ADIR_ac/ADIR_PwrOn/Out_Init/Const56'
 * '<S163>' : 'ADIR_ac/ADIR_PwrOn/Out_Init/Const57'
 * '<S164>' : 'ADIR_ac/ADIR_PwrOn/Out_Init/Const58'
 * '<S165>' : 'ADIR_ac/ADIR_PwrOn/Out_Init/Const9'
 * '<S166>' : 'ADIR_ac/FsftADIR_b_BSM_WEDModeReq/FsftADIR_b_BSM_WEDModeReqChrt'
 * '<S167>' : 'ADIR_ac/FsftADIR_b_BSM_WEDModeReq/KeADIR_e_BSM_WEDModeReqDflt'
 * '<S168>' : 'ADIR_ac/PokeADIR_e_BSM_WEDModeReq/KaADIR_e_BSM_WEDModeReqMap'
 * '<S169>' : 'ADIR_ac/PokeADIR_e_BSM_WEDModeReq/KeADIR_e_BSM_WEDModeReqDflt'
 * '<S170>' : 'ADIR_ac/PokeADIR_e_BSM_WEDModeReq/PokeADIR_e_BSM_WEDModeReqChrt'
 */
#endif                                 /* RTW_HEADER_ADIR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
