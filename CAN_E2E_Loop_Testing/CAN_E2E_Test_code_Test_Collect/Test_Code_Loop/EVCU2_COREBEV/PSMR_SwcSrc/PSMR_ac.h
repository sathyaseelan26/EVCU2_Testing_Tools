/*
 * File: PSMR_ac.h
 *
 * Code generated for Simulink model 'PSMR_ac'.
 *
 * Model version                  : 9.149
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 18:42:29 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PSMR_ac_h_
#define RTW_HEADER_PSMR_ac_h_
#include "Rte_Type.h"
#ifndef PSMR_ac_COMMON_INCLUDES_
#define PSMR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_PSMR.h"
#endif                                 /* PSMR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_PSMR_ac_T
{
    float32 OutportBufferForVePSMR_Pct_Lv2A;/* '<S130>/Default_to_Zero' */
    float32 OutportBufferForVePSMR_Pct_Lv_h;/* '<S130>/Default_to_Zero' */
    float32 OutportBufferForVePSMR_Pct_Lv_a;/* '<S130>/Default_to_Zero' */
    float32 OutportBufferForVePSMR_U_Lv2PV1;/* '<S130>/Default_to_Zero' */
    float32 OutportBufferForVePSMR_U_Lv2PV2;/* '<S130>/Default_to_Zero' */
    float32 OutportBufferForVePSMR_U_Lv2PVS;/* '<S130>/Default_to_Zero' */
    float32 VePSMR_U_Lv2PV2Normal_intermedi;/* '<S73>/LimiterSwitch1' */
    float32 VePSMR_U_Lv2PV1Normal_intermedi;/* '<S72>/LimiterSwitch1' */
    boolean OutportBufferForVePSMR_b_Lv2Acc;/* '<S130>/Default_to_Not_Failed' */
    boolean OutportBufferForVePSMR_b_Lv2Lv1;/* '<S130>/Default_to_Not_Failed' */
    boolean OutportBufferForVePSMR_b_Lv2PVS;/* '<S130>/Default_to_Not_Failed' */
    boolean OutportBufferForVePSMR_b_Lv2P_n;/* '<S130>/Default_to_Not_Failed' */
    boolean OutportBufferForVePSMR_b_Lv2P_k;/* '<S130>/Default_to_Not_Failed' */
    boolean OutportBufferForVePSMR_b_Lv2_n3;/* '<S130>/Default_to_Not_Failed' */
    boolean Switch3;                   /* '<S88>/Switch3' */
    boolean Switch3_o;                 /* '<S89>/Switch3' */
    boolean Switch3_j;                 /* '<S90>/Switch3' */
    boolean VePSMR_b_Lv2PVSFailed_temp;/* '<S69>/PVS_Failed' */
    TePSMR_e_LV2PVSMode OutportBufferForVePSMR_e_Lv2PVS;/* '<S130>/No_Fault' */
    TeDFIB_e_FaultDebounceStatus OutportBufferForVeDFIR_FaultSts;/* '<S130>/Init' */
}
B_PSMR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_PSMR_ac_T
{
    float32 VePSMR_Pct_Lv2AccelPedalEffPosi;/* '<S10>/Unit_Delay' */
    float32 VePSMC_U_Lv2DelPVSHiRes_Prev;/* '<S47>/Unit Delay1' */
    float32 VePSMC_U_PVSNormFiltd_prev;/* '<S32>/Unit Delay' */
    uint16 UnitDelay_DSTATE;           /* '<S71>/Unit Delay' */
    uint16 UnitDelay_DSTATE_a;         /* '<S70>/Unit Delay' */
    uint16 VePSMC_Cnt_Lv2Lv1PdlPosDiffFltA;/* '<S31>/Unit Delay' */
    uint8 UnitDelay_DSTATE_f;          /* '<S88>/UnitDelay' */
    uint8 UnitDelay_DSTATE_b;          /* '<S97>/UnitDelay' */
    uint8 UnitDelay_DSTATE_h;          /* '<S89>/UnitDelay' */
    uint8 UnitDelay_DSTATE_l;          /* '<S105>/UnitDelay' */
    uint8 UnitDelay_DSTATE_d;          /* '<S90>/UnitDelay' */
    uint8 UnitDelay_DSTATE_h5;         /* '<S113>/UnitDelay' */
    boolean UnitDelay1_DSTATE;         /* '<S88>/UnitDelay1' */
    boolean VePSMC_b_Lv2KeyInRunPrev;  /* '<S91>/Unit Delay' */
    boolean UnitDelay1_DSTATE_e;       /* '<S89>/UnitDelay1' */
    boolean UnitDelay1_DSTATE_p;       /* '<S90>/UnitDelay1' */
    boolean UnitDelay_DSTATE_p;        /* '<S114>/Unit Delay' */
    boolean UnitDelay_DSTATE_o;        /* '<S106>/Unit Delay' */
    boolean UnitDelay_DSTATE_n;        /* '<S98>/Unit Delay' */
    boolean VePSMR_b_Lv2PVTrqRampActive_Pre;/* '<S58>/Unit Delay1' */
    TeDFIB_e_FaultDebounceStatus VeDFIR_FaultSts_CM_APP_SysPerf;
                                /* '<Root>/DS_VeDFIR_FaultSts_CM_APP_SysPerf' */
}
DW_PSMR_ac_T;

/* Invariant block signals (default storage) */
typedef struct
{
    const TePSMR_e_LV2PVSMode Constant;/* '<S132>/Constant' */
    const TeDFIB_e_FaultDebounceStatus Constant_i;/* '<S131>/Constant' */
}
ConstB_PSMR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PSMR
#include "MemMap.h"

extern VAR(B_PSMR_ac_T, PSMR_VAR_INIT) PSMR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PSMR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PSMR
#include "MemMap.h"

extern VAR(DW_PSMR_ac_T, PSMR_VAR_INIT) PSMR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PSMR
#include "MemMap.h"
#define START_SEC_CONST_UNSPECIFIED_PSMR
#include "MemMap.h"

extern CONST(ConstB_PSMR_ac_T, PSMR_VAR_INIT) PSMR_ac_ConstB;/* constant block i/o */

#define STOP_SEC_CONST_UNSPECIFIED_PSMR
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
 * '<Root>' : 'PSMR_ac'
 * '<S1>'   : 'PSMR_ac/PSMR_MedTEB'
 * '<S2>'   : 'PSMR_ac/PSMR_PwrOn'
 * '<S3>'   : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc'
 * '<S4>'   : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc'
 * '<S5>'   : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2'
 * '<S6>'   : 'PSMR_ac/PSMR_MedTEB/PSMR_MedTEB_StartCheckpoint'
 * '<S7>'   : 'PSMR_ac/PSMR_MedTEB/PSMR_MedTEB_StopCheckpoint'
 * '<S8>'   : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal'
 * '<S9>'   : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/DetermineLv2PVSMode'
 * '<S10>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/DtrmnAccelPdlPercent'
 * '<S11>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/Enum_Set_Block'
 * '<S12>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/Enumerated_Constant'
 * '<S13>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/LV2_Min'
 * '<S14>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/MinMaxLimiter'
 * '<S15>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/MinMaxLimiter1'
 * '<S16>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/MinMaxLimiter2'
 * '<S17>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/Multiport_Switch'
 * '<S18>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/SCALAR_BLK'
 * '<S19>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/DetermineLv2PVSMode/Enumerated_Constant'
 * '<S20>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/DetermineLv2PVSMode/Enumerated_Constant1'
 * '<S21>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/DetermineLv2PVSMode/Enumerated_Constant2'
 * '<S22>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/DetermineLv2PVSMode/Enumerated_Constant3'
 * '<S23>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/DetermineLv2PVSMode/Enumerated_Constant4'
 * '<S24>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/DtrmnAccelPdlPercent/Enum_Set_Block1'
 * '<S25>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/DtrmnAccelPdlPercent/Enumerated_Constant3'
 * '<S26>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/DtrmnAccelPdlPercent/IfThenElse'
 * '<S27>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/DtrmnAccelPdlPercent/IfThenElse1'
 * '<S28>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/DtrmnAccelPdlPercent/IfThenElse2'
 * '<S29>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/DtrmnAccelPdlPercent/IfThenElse3'
 * '<S30>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/DtrmnAccelPdlPercent/LV2_Abs'
 * '<S31>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/DtrmnAccelPdlPercent/LV2_Counter_Reset_Enabled'
 * '<S32>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/DtrmnAccelPdlPercent/LV2_Digital_Lowpass_Reset_Enabled'
 * '<S33>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/DtrmnAccelPdlPercent/LV2_Min'
 * '<S34>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/DtrmnAccelPdlPercent/MinMaxLimiter'
 * '<S35>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/DtrmnAccelPdlPercent/SCALAR_BLK'
 * '<S36>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/DtrmnAccelPdlPercent/SCALAR_BLK1'
 * '<S37>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/DtrmnAccelPdlPercent/SCALAR_BLK2'
 * '<S38>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/DtrmnAccelPdlPercent/SCALAR_BLK3'
 * '<S39>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/DtrmnAccelPdlPercent/SCALAR_BLK4'
 * '<S40>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/DtrmnAccelPdlPercent/SCALAR_BLK5'
 * '<S41>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/DtrmnAccelPdlPercent/VECTOR_BLK'
 * '<S42>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/DtrmnAccelPdlPercent/VECTOR_BLK1'
 * '<S43>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/Multiport_Switch/Enumerated_Constant1'
 * '<S44>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/Multiport_Switch/Enumerated_Constant2'
 * '<S45>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/Multiport_Switch/Enumerated_Constant3'
 * '<S46>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/Multiport_Switch/Enumerated_Constant4'
 * '<S47>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/Multiport_Switch/Level2_Vehicle_Trq_Limiting_Feature'
 * '<S48>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/Multiport_Switch/SCALAR_BLK'
 * '<S49>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/Multiport_Switch/Level2_Vehicle_Trq_Limiting_Feature/CompareToConstant'
 * '<S50>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/Multiport_Switch/Level2_Vehicle_Trq_Limiting_Feature/IsZero'
 * '<S51>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/Multiport_Switch/Level2_Vehicle_Trq_Limiting_Feature/LV2_Max'
 * '<S52>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/Multiport_Switch/Level2_Vehicle_Trq_Limiting_Feature/LV2_Min'
 * '<S53>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/Multiport_Switch/Level2_Vehicle_Trq_Limiting_Feature/SCALAR_BLK'
 * '<S54>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/Multiport_Switch/Level2_Vehicle_Trq_Limiting_Feature/SCALAR_BLK1'
 * '<S55>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/Multiport_Switch/Level2_Vehicle_Trq_Limiting_Feature/SCALAR_BLK2'
 * '<S56>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/Multiport_Switch/Level2_Vehicle_Trq_Limiting_Feature/SCALAR_BLK3'
 * '<S57>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/Multiport_Switch/Level2_Vehicle_Trq_Limiting_Feature/SCALAR_BLK4'
 * '<S58>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/Multiport_Switch/Level2_Vehicle_Trq_Limiting_Feature/Set_Reset'
 * '<S59>'  : 'PSMR_ac/PSMR_MedTEB/PSMC_Proc/CalculateLv2Pedal/Multiport_Switch/Level2_Vehicle_Trq_Limiting_Feature/VECTOR_BLK'
 * '<S60>'  : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc/Prcss_RstDiagCntr'
 * '<S61>'  : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc/Prcss_RstDiagCntr/Enum_Set_Block2'
 * '<S62>'  : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc/Prcss_RstDiagCntr/EnumeratedConstant'
 * '<S63>'  : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc/Prcss_RstDiagCntr/SCALAR_BLK'
 * '<S64>'  : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc/Prcss_RstDiagCntr/SCALAR_BLK1'
 * '<S65>'  : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc/Prcss_RstDiagCntr/SCALAR_BLK2'
 * '<S66>'  : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic'
 * '<S67>'  : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/Prcss_PSMR_PCode'
 * '<S68>'  : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/CalculateLv2PedalPosNorm'
 * '<S69>'  : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/MonitorLv2PedalPos'
 * '<S70>'  : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/CalculateLv2PedalPosNorm/Counter_Reset_Enabled'
 * '<S71>'  : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/CalculateLv2PedalPosNorm/Counter_Reset_Enabled1'
 * '<S72>'  : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/CalculateLv2PedalPosNorm/MinMaxLimiter'
 * '<S73>'  : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/CalculateLv2PedalPosNorm/MinMaxLimiter1'
 * '<S74>'  : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/CalculateLv2PedalPosNorm/SCALAR_BLK'
 * '<S75>'  : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/CalculateLv2PedalPosNorm/SCALAR_BLK1'
 * '<S76>'  : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/CalculateLv2PedalPosNorm/SCALAR_BLK10'
 * '<S77>'  : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/CalculateLv2PedalPosNorm/SCALAR_BLK11'
 * '<S78>'  : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/CalculateLv2PedalPosNorm/SCALAR_BLK12'
 * '<S79>'  : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/CalculateLv2PedalPosNorm/SCALAR_BLK2'
 * '<S80>'  : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/CalculateLv2PedalPosNorm/SCALAR_BLK3'
 * '<S81>'  : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/CalculateLv2PedalPosNorm/SCALAR_BLK4'
 * '<S82>'  : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/CalculateLv2PedalPosNorm/SCALAR_BLK5'
 * '<S83>'  : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/CalculateLv2PedalPosNorm/SCALAR_BLK6'
 * '<S84>'  : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/CalculateLv2PedalPosNorm/SCALAR_BLK7'
 * '<S85>'  : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/CalculateLv2PedalPosNorm/SCALAR_BLK8'
 * '<S86>'  : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/CalculateLv2PedalPosNorm/SCALAR_BLK9'
 * '<S87>'  : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/MonitorLv2PedalPos/LV2_Abs'
 * '<S88>'  : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/MonitorLv2PedalPos/LV2_Debounce_Counter_with_Latch_For_DBC_Status_PVS1'
 * '<S89>'  : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/MonitorLv2PedalPos/LV2_Debounce_Counter_with_Latch_For_DBC_Status_PVS2'
 * '<S90>'  : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/MonitorLv2PedalPos/LV2_Debounce_Counter_with_Latch_For_DBC_Status_PVSCoh'
 * '<S91>'  : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/MonitorLv2PedalPos/LV2_Edge_Rising'
 * '<S92>'  : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/MonitorLv2PedalPos/SCALAR_BLK'
 * '<S93>'  : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/MonitorLv2PedalPos/SCALAR_BLK1'
 * '<S94>'  : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/MonitorLv2PedalPos/SCALAR_BLK2'
 * '<S95>'  : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/MonitorLv2PedalPos/SCALAR_BLK3'
 * '<S96>'  : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/MonitorLv2PedalPos/SCALAR_BLK4'
 * '<S97>'  : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/MonitorLv2PedalPos/LV2_Debounce_Counter_with_Latch_For_DBC_Status_PVS1/DTC_Determination'
 * '<S98>'  : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/MonitorLv2PedalPos/LV2_Debounce_Counter_with_Latch_For_DBC_Status_PVS1/EdgeFalling'
 * '<S99>'  : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/MonitorLv2PedalPos/LV2_Debounce_Counter_with_Latch_For_DBC_Status_PVS1/EnumeratedSignal'
 * '<S100>' : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/MonitorLv2PedalPos/LV2_Debounce_Counter_with_Latch_For_DBC_Status_PVS1/EnumeratedSignal1'
 * '<S101>' : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/MonitorLv2PedalPos/LV2_Debounce_Counter_with_Latch_For_DBC_Status_PVS1/EnumeratedSignal2'
 * '<S102>' : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/MonitorLv2PedalPos/LV2_Debounce_Counter_with_Latch_For_DBC_Status_PVS1/TestNotDone'
 * '<S103>' : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/MonitorLv2PedalPos/LV2_Debounce_Counter_with_Latch_For_DBC_Status_PVS1/DTC_Determination/CounterZero'
 * '<S104>' : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/MonitorLv2PedalPos/LV2_Debounce_Counter_with_Latch_For_DBC_Status_PVS1/DTC_Determination/EnumSetBlock'
 * '<S105>' : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/MonitorLv2PedalPos/LV2_Debounce_Counter_with_Latch_For_DBC_Status_PVS2/DTC_Determination'
 * '<S106>' : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/MonitorLv2PedalPos/LV2_Debounce_Counter_with_Latch_For_DBC_Status_PVS2/EdgeFalling'
 * '<S107>' : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/MonitorLv2PedalPos/LV2_Debounce_Counter_with_Latch_For_DBC_Status_PVS2/EnumeratedSignal'
 * '<S108>' : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/MonitorLv2PedalPos/LV2_Debounce_Counter_with_Latch_For_DBC_Status_PVS2/EnumeratedSignal1'
 * '<S109>' : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/MonitorLv2PedalPos/LV2_Debounce_Counter_with_Latch_For_DBC_Status_PVS2/EnumeratedSignal2'
 * '<S110>' : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/MonitorLv2PedalPos/LV2_Debounce_Counter_with_Latch_For_DBC_Status_PVS2/TestNotDone'
 * '<S111>' : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/MonitorLv2PedalPos/LV2_Debounce_Counter_with_Latch_For_DBC_Status_PVS2/DTC_Determination/CounterZero'
 * '<S112>' : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/MonitorLv2PedalPos/LV2_Debounce_Counter_with_Latch_For_DBC_Status_PVS2/DTC_Determination/EnumSetBlock'
 * '<S113>' : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/MonitorLv2PedalPos/LV2_Debounce_Counter_with_Latch_For_DBC_Status_PVSCoh/DTC_Determination'
 * '<S114>' : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/MonitorLv2PedalPos/LV2_Debounce_Counter_with_Latch_For_DBC_Status_PVSCoh/EdgeFalling'
 * '<S115>' : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/MonitorLv2PedalPos/LV2_Debounce_Counter_with_Latch_For_DBC_Status_PVSCoh/EnumeratedSignal'
 * '<S116>' : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/MonitorLv2PedalPos/LV2_Debounce_Counter_with_Latch_For_DBC_Status_PVSCoh/EnumeratedSignal1'
 * '<S117>' : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/MonitorLv2PedalPos/LV2_Debounce_Counter_with_Latch_For_DBC_Status_PVSCoh/EnumeratedSignal2'
 * '<S118>' : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/MonitorLv2PedalPos/LV2_Debounce_Counter_with_Latch_For_DBC_Status_PVSCoh/TestNotDone'
 * '<S119>' : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/MonitorLv2PedalPos/LV2_Debounce_Counter_with_Latch_For_DBC_Status_PVSCoh/DTC_Determination/CounterZero'
 * '<S120>' : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/CheckLv2PedalDiagnostic/MonitorLv2PedalPos/LV2_Debounce_Counter_with_Latch_For_DBC_Status_PVSCoh/DTC_Determination/EnumSetBlock'
 * '<S121>' : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/Prcss_PSMR_PCode/Event_CM_APP_SysPerf_ReportTestFailed'
 * '<S122>' : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/Prcss_PSMR_PCode/Event_CM_APP_SysPerf_ReportTestInit'
 * '<S123>' : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/Prcss_PSMR_PCode/Event_CM_APP_SysPerf_ReportTestPassed'
 * '<S124>' : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/Prcss_PSMR_PCode/Fail_Set'
 * '<S125>' : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/Prcss_PSMR_PCode/Init_Set'
 * '<S126>' : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/Prcss_PSMR_PCode/Pass_Set'
 * '<S127>' : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/Prcss_PSMR_PCode/Event_CM_APP_SysPerf_ReportTestFailed/Enumerated_Constant'
 * '<S128>' : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/Prcss_PSMR_PCode/Event_CM_APP_SysPerf_ReportTestInit/Enumerated_Constant'
 * '<S129>' : 'PSMR_ac/PSMR_MedTEB/PSMI_Proc2/Prcss_PSMR_PCode/Event_CM_APP_SysPerf_ReportTestPassed/Enumerated_Constant'
 * '<S130>' : 'PSMR_ac/PSMR_PwrOn/Sub_Out_Init'
 * '<S131>' : 'PSMR_ac/PSMR_PwrOn/Sub_Out_Init/Init'
 * '<S132>' : 'PSMR_ac/PSMR_PwrOn/Sub_Out_Init/No_Fault'
 */
#endif                                 /* RTW_HEADER_PSMR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
