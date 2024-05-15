/*
 * File: CSMR_ac.h
 *
 * Code generated for Simulink model 'CSMR_ac'.
 *
 * Model version                  : 9.412
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:19:27 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_CSMR_ac_h_
#define RTW_HEADER_CSMR_ac_h_
#include <math.h>
#include "Rte_Type.h"
#ifndef CSMR_ac_COMMON_INCLUDES_
#define CSMR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CSMR.h"
#endif                                 /* CSMR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_CSMR_ac_T
{
    float32 OutportBufferForVeCSMR_v_Lv2CCSetSpd_Out;/* '<S184>/Const3' */
    float32 OutportBufferForVeCSMR_v_ASLSetSpeed_Out;/* '<S184>/Const6' */
    float32 TmpSignalConversionAtVeCCTR_v_CcSetSpdOu;
    float32 VeCSMR_v_CCSetSpd_DecTapDelta;/* '<S13>/Switch2' */
    float32 VeCSMR_v_CCSetSpd_AccTapDelta;/* '<S13>/Switch3' */
    float32 VeCSMR_v_CCSetSpd_DecHoldDelta;/* '<S13>/Switch4' */
    float32 VeCSMR_v_VehSpdDecDiffArb; /* '<S13>/Switch5' */
    float32 VeCSMR_v_VehSpdIncDiffArb; /* '<S13>/Switch7' */
    float32 CC_SetSpeed;               /* '<S13>/Dtrmn_Set_Spd' */
    float32 VeCSMR_t_CC_Set_Tmr;       /* '<S13>/Dtrmn_Set_Spd' */
    float32 LeCSMR_v_CCSetSpd_Delta_mph;/* '<S13>/Dtrmn_Set_Spd' */
    boolean OutportBufferForVeCSMR_b_Lv2CrusOff_Out_;/* '<S184>/Const1' */
    boolean OutportBufferForVeCSMR_b_Lv2CCEngaged_Ou;/* '<S184>/Const2' */
    boolean OutportBufferForVeCSMR_b_ASLActive_Out_I;/* '<S184>/Const4' */
    boolean OutportBufferForVeCSMR_b_Lv2CCSetSpdVali;/* '<S184>/Const5' */
    boolean OutportBufferForVeCSMR_b_Lv2BrkPdlAppld_;/* '<S184>/Const7' */
    boolean OutportBufferForVeCSMR_b_Lv2VehSpdNotMee;/* '<S184>/Const8' */
    boolean OutportBufferForVeCSMR_b_Lv2CrusInhEnabl;/* '<S184>/Const9' */
    boolean OutportBufferForVeCSMR_b_PRND_NotInDrive;/* '<S184>/Const10' */
    boolean OutportBufferForVeCSMR_b_Lv2CcOffMode_Ou;/* '<S184>/Const11' */
    boolean OutportBufferForVeCSMR_b_Lv2CcOnMode_Out;/* '<S184>/Const12' */
    boolean OutportBufferForVeCSMR_b_Lv2ACC_On_Out_I;/* '<S184>/Const13' */
    boolean OutportBufferForVeCSMR_b_Lv2ASRActive_Ou;/* '<S184>/Const14' */
    boolean OutportBufferForVeCSMR_b_Lv2MSRActive_Ou;/* '<S184>/Const15' */
    boolean OutportBufferForVeCSMR_b_EngTrqEnblRqDAS;/* '<S184>/Const16' */
    boolean OutportBufferForVeCSMD_b_Lv2CruiseMntrFa;/* '<S184>/Const17' */
    boolean TmpSignalConversionAtVeCCTR_b_CcEngagedO;
    boolean CC_SetSpeed_Valid;         /* '<S13>/Dtrmn_Set_Spd' */
    boolean VeCSMR_b_IgnoreSetIncTap;  /* '<S13>/Dtrmn_Set_Spd' */
    boolean VeCSMR_b_IgnoreSetDecTap;  /* '<S13>/Dtrmn_Set_Spd' */
    boolean CC_Resume_State;           /* '<S13>/Dtrmn_Set_Spd' */
    boolean CCSetSpd_HoldEvent;        /* '<S13>/Dtrmn_Set_Spd' */
    TeDFIB_e_FaultDebounceStatus OutportBufferForVeCSMR_e_FaultSts_CM_Cru;/* '<S184>/Constant' */
    TeCSMR_e_CC_State_SF VeCSMR_e_StateChartMode;/* '<S13>/Dtrmn_Set_Spd' */
    TeCSMR_e_CC_State CruiseControlState;/* '<S13>/Dtrmn_Set_Spd' */
}
B_CSMR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_CSMR_ac_T
{
    float32 VeCSMC_t_CC_Set_Dec_Dly_prev;/* '<S87>/Unit Delay1' */
    float32 VeCSMC_t_CC_Set_Inc_Dly_prev;/* '<S86>/Unit Delay1' */
    float32 VeCSMC_Pct_AccelPdlPct_prev;/* '<S98>/Unit Delay' */
    uint8 UnitDelay_DSTATE_g;          /* '<S136>/UnitDelay' */
    uint8 VeCSMC_Cnt_Lv2CrusSetDtctdDlyd_prev;/* '<S44>/Unit Delay1' */
    uint8 VeCSMC_Cnt_Lv2CancelDlyd_prev;/* '<S43>/Unit Delay1' */
    uint8 VeCSMC_Cnt_Lv2ResumeDlyd_prev;/* '<S42>/Unit Delay1' */
    boolean UnitDelay_DSTATE_f;        /* '<S137>/Unit Delay' */
    boolean VeCSMC_b_LV2CrusOff_Prev;  /* '<S3>/Unit Delay' */
    boolean VeCSMI_b_Lv2CrusAccel_prev;/* '<S81>/Unit Delay' */
    boolean VeCSMI_b_Lv2CrusDecel_prev;/* '<S82>/Unit Delay' */
    boolean VeCSMI_b_Lv2CrusCancel_prev;/* '<S84>/Unit Delay' */
    boolean VeCSMI_b_Lv2CANResume_prev;/* '<S85>/Unit Delay' */
    boolean VeCSMC_b_CC_ResetAccelPdlOvrd_Prev;/* '<S13>/Unit Delay2' */
    boolean VeCSMC_b_AccPdlOvrdF_prev; /* '<S99>/Unit Delay1' */
    boolean VeCSMC_b_Lv2CrusNotEng_Prev;/* '<S3>/Unit Delay3' */
    boolean VeCSMR_b_PtcPdlInChrgVsCC_prev;/* '<S13>/Unit Delay4' */
    boolean VeCSMC_b_Lv1CCEngaged_Prev;/* '<S13>/Unit Delay' */
    boolean VeCSMC_b_SpeedUnt_Prev;    /* '<S13>/Unit Delay3' */
    boolean VeCSMC_b_Lv2CrusNotEngArb_Prev;/* '<S3>/Unit Delay2' */
    boolean VeCSMR_b_PtcPdlInChrgVsCCArb;/* '<S13>/Unit Delay5' */
    boolean VeCSMC_b_Lv2CcOnOffPressed2_Prev;/* '<S16>/Unit Delay3' */
    boolean VeCSMC_b_SWOnOffSts_Prev;  /* '<S16>/Unit Delay1' */
    boolean VeCSMC_b_Lv2CcOnMode_prev; /* '<S124>/Unit Delay1' */
    boolean VeCSMC_b_Lv2CcOffMode_prev;/* '<S125>/Unit Delay1' */
    boolean VeCSMR_b_Lv2CCEnabled_Prev;/* '<S118>/Unit Delay7' */
    boolean VeCSMR_b_Lv2ASLOnOffSts_prev;/* '<S113>/Unit Delay' */
    boolean VeCSMC_b_Lv2Lv1CcEngaged_prev;/* '<S14>/Unit Delay' */
    boolean VeCSMC_Cnt_Lv2ASL_OffCntr_Prev;/* '<S102>/Unit Delay' */
    boolean VeCSMC_Cnt_Lv2ASL_OnCntr_Prev;/* '<S103>/Unit Delay' */
    boolean VeCSMC_b_CC_Set_Dec_Dly_prev;/* '<S101>/Unit Delay' */
    boolean VeCSMC_b_CC_Set_Inc_Dly_prev;/* '<S100>/Unit Delay' */
    boolean VeCSMC_b_Lv2CrusSetDtctdDlyd_prev;/* '<S49>/Unit Delay' */
    boolean VeCSMC_b_Lv2CancelDlyd_prev;/* '<S48>/Unit Delay' */
    boolean VeCSMC_b_Lv2ResumeDlyd_prev;/* '<S47>/Unit Delay' */
    boolean VeCSMC_b_LV2CrusNotEng_Prev_prev;/* '<S45>/Unit Delay' */
    boolean VeCSMC_b_CrusEngageReqObs_prev;/* '<S46>/Unit Delay1' */
    boolean VeCSMC_b_Lv1CrusOnOffPres_prev;/* '<S11>/Unit Delay1' */
    boolean VeCSMI_b_SpeedUnt_Prev;    /* '<S5>/Unit Delay3' */
    boolean VeCSMR_b_Lv2CrusOnOffEdge_prev;/* '<S171>/Unit Delay' */
    boolean VeCSMR_b_Lv2CrusOnOffArb_prev;/* '<S172>/Unit Delay1' */
    boolean VeCSMR_b_ASLEnabled_Prev;  /* '<S5>/Unit Delay1' */
    boolean VeCSMR_b_Lv1ASLEnabled_Prev;/* '<S5>/Unit Delay' */
    TeCSMR_e_CC_State VeCSMC_e_CruiseControlState_Prev;/* '<S13>/Unit Delay1' */
    uint8 is_active_c3_CSMR_ac;        /* '<S13>/Dtrmn_Set_Spd' */
    TeDFIB_e_FaultDebounceStatus VeCSMR_e_FaultSts_CM_CruzCntrlErr;
                             /* '<Root>/DS_VeCSMR_e_FaultSts_CM_CruzCntrlErr' */
}
DW_CSMR_ac_T;

/* Invariant block signals (default storage) */
typedef struct
{
    const TeDFIB_e_FaultDebounceStatus Constant;/* '<S185>/Constant' */
}
ConstB_CSMR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CSMR
#include "MemMap.h"

extern VAR(B_CSMR_ac_T, CSMR_VAR_INIT) CSMR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CSMR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CSMR
#include "MemMap.h"

extern VAR(DW_CSMR_ac_T, CSMR_VAR_INIT) CSMR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CSMR
#include "MemMap.h"
#define START_SEC_CONST_UNSPECIFIED_CSMR
#include "MemMap.h"

extern CONST(ConstB_CSMR_ac_T, CSMR_VAR_INIT) CSMR_ac_ConstB;/* constant block i/o */

#define STOP_SEC_CONST_UNSPECIFIED_CSMR
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
 * '<Root>' : 'CSMR_ac'
 * '<S1>'   : 'CSMR_ac/CSMR_MedTEB'
 * '<S2>'   : 'CSMR_ac/CSMR_PwrOn'
 * '<S3>'   : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM'
 * '<S4>'   : 'CSMR_ac/CSMR_MedTEB/CSMD'
 * '<S5>'   : 'CSMR_ac/CSMR_MedTEB/CSMI_Inputs'
 * '<S6>'   : 'CSMR_ac/CSMR_MedTEB/CSMR_FastTEF_StartCheckpoint'
 * '<S7>'   : 'CSMR_ac/CSMR_MedTEB/CSMR_FastTEF_StopCheckpoint'
 * '<S8>'   : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/BooleanSetBlock3'
 * '<S9>'   : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Cancel_Lv2_Cruise'
 * '<S10>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Chk_Lv2_Set_Spd'
 * '<S11>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_ENB_INHIBIT'
 * '<S12>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_ENGAGED'
 * '<S13>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd'
 * '<S14>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_ENG_INHIBIT'
 * '<S15>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_Lv2_CC_Enabled'
 * '<S16>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_OnOff_Mode'
 * '<S17>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/IfThenElse18'
 * '<S18>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/KeCSMR_v_ASLActivationMinSpd'
 * '<S19>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/SetBlock3'
 * '<S20>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Cancel_Lv2_Cruise/BooleanSetBlock1'
 * '<S21>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Cancel_Lv2_Cruise/BooleanSetBlock3'
 * '<S22>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Cancel_Lv2_Cruise/Enumerated_Constant1'
 * '<S23>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Cancel_Lv2_Cruise/KeCSMR_b_ASRMSRActive'
 * '<S24>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Cancel_Lv2_Cruise/KeCSMR_b_Lv1CcInhEngage'
 * '<S25>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Chk_Lv2_Set_Spd/KeCSMR_b_SetSpdInvalid'
 * '<S26>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Chk_Lv2_Set_Spd/KeCSMR_v_Lv2CCSetSpdNotValid'
 * '<S27>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Chk_Lv2_Set_Spd/KeCSMR_v_Lv2Lv1SetSpdDeltaThrshd'
 * '<S28>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Chk_Lv2_Set_Spd/KeCSMR_v_Lv2Lv1SetSpdDeltaThrshdKPH'
 * '<S29>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Chk_Lv2_Set_Spd/LV2_Abs'
 * '<S30>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_ENB_INHIBIT/Enumerated_Constant1'
 * '<S31>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_ENB_INHIBIT/Enumerated_Constant3'
 * '<S32>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_ENB_INHIBIT/Enumerated_Constant5'
 * '<S33>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_ENB_INHIBIT/Enumerated_Constant6'
 * '<S34>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_ENB_INHIBIT/IfThenElse1'
 * '<S35>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_ENGAGED/Chk_Lv2CC_Eng_Req'
 * '<S36>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_ENGAGED/Enumerated_Constant'
 * '<S37>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_ENGAGED/Enumerated_Constant1'
 * '<S38>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_ENGAGED/Enumerated_Constant2'
 * '<S39>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_ENGAGED/KeCSMR_Cnt_ButtonConfCntrLimCncl'
 * '<S40>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_ENGAGED/KeCSMR_Cnt_ButtonConfCntrLimRes'
 * '<S41>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_ENGAGED/KeCSMR_Cnt_ButtonConfCntrLimSet'
 * '<S42>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_ENGAGED/LV2_Turn_Off_Delay_Sample_Modified2'
 * '<S43>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_ENGAGED/LV2_Turn_Off_Delay_Sample_Modified3'
 * '<S44>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_ENGAGED/LV2_Turn_Off_Delay_Sample_Modified4'
 * '<S45>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_ENGAGED/Chk_Lv2CC_Eng_Req/LV2_Edge_Rising'
 * '<S46>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_ENGAGED/Chk_Lv2CC_Eng_Req/LV2_Latch_On_With_Reset'
 * '<S47>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_ENGAGED/LV2_Turn_Off_Delay_Sample_Modified2/EdgeFalling'
 * '<S48>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_ENGAGED/LV2_Turn_Off_Delay_Sample_Modified3/EdgeFalling'
 * '<S49>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_ENGAGED/LV2_Turn_Off_Delay_Sample_Modified4/EdgeFalling'
 * '<S50>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/BooleanSetBlock'
 * '<S51>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/BooleanSetBlock1'
 * '<S52>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/BooleanSetBlock2'
 * '<S53>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/BooleanSetBlock5'
 * '<S54>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/BooleanSetBlock6'
 * '<S55>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/DtrmnAcelPdlOvridActive'
 * '<S56>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/Dtrmn_Set_Spd'
 * '<S57>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/EnumSetBlock'
 * '<S58>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/KeCSMR_b_AcceptSetTap'
 * '<S59>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/KeCSMR_b_IgnoreSetTap'
 * '<S60>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/KeCSMR_b_PtcPdlInChrgVsCC'
 * '<S61>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/KeCSMR_b_SpdUnitChngd'
 * '<S62>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/KeCSMR_b_SpeedUnitOutOfRange'
 * '<S63>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/KeCSMR_b_VehSpdDiff'
 * '<S64>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/KeCSMR_t_CSMR_dt'
 * '<S65>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/KeCSMR_t_HoldTimeAcc'
 * '<S66>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/KeCSMR_t_HoldTimeDec'
 * '<S67>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/KeCSMR_t_HoldTimeInc'
 * '<S68>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/KeCSMR_v_CCSetSpd_AccHoldDeltaKPH'
 * '<S69>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/KeCSMR_v_CCSetSpd_AccHoldDeltaMPH'
 * '<S70>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/KeCSMR_v_CCSetSpd_AccTapDeltaKPH'
 * '<S71>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/KeCSMR_v_CCSetSpd_AccTapDeltaMPH'
 * '<S72>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/KeCSMR_v_CCSetSpd_DecHoldDeltaKPH'
 * '<S73>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/KeCSMR_v_CCSetSpd_DecHoldDeltaMPH'
 * '<S74>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/KeCSMR_v_CCSetSpd_DecTapDeltaKPH'
 * '<S75>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/KeCSMR_v_CCSetSpd_DecTapDeltaMPH'
 * '<S76>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/KeCSMR_v_PtcPdlInChrgSpd'
 * '<S77>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/KeCSMR_v_VehSpdDecDiffKPH'
 * '<S78>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/KeCSMR_v_VehSpdDecDiffMPH'
 * '<S79>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/KeCSMR_v_VehSpdIncDiffKPH'
 * '<S80>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/KeCSMR_v_VehSpdIncDiffMPH'
 * '<S81>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/LV2_Edge_Falling'
 * '<S82>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/LV2_Edge_Falling1'
 * '<S83>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/LV2_Edge_Rising'
 * '<S84>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/LV2_Edge_Rising3'
 * '<S85>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/LV2_Edge_Rising4'
 * '<S86>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/LV2_Turn_On_Delay_Time'
 * '<S87>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/LV2_Turn_On_Delay_Time1'
 * '<S88>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/SetBlock1'
 * '<S89>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/SetBlock2'
 * '<S90>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/SetBlock3'
 * '<S91>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/SetBlock4'
 * '<S92>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/DtrmnAcelPdlOvridActive/Enumerated_Constant'
 * '<S93>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/DtrmnAcelPdlOvridActive/KeCSMR_M_ToLimOverrideCCTrq'
 * '<S94>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/DtrmnAcelPdlOvridActive/KeCSMR_Pct_AccelPdlPctVal'
 * '<S95>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/DtrmnAcelPdlOvridActive/KeCSMR_Pct_PVSThrsh'
 * '<S96>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/DtrmnAcelPdlOvridActive/KeCSMR_b_AccPdlOvrdActive'
 * '<S97>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/DtrmnAcelPdlOvridActive/KeCSMR_b_TrqOvrdActive'
 * '<S98>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/DtrmnAcelPdlOvridActive/LV2_Digital_Lowpass_Reset_Enabled'
 * '<S99>'  : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/DtrmnAcelPdlOvridActive/LV2_Latch_On_With_Reset'
 * '<S100>' : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/LV2_Turn_On_Delay_Time/Edge_Rising'
 * '<S101>' : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/LV2_Turn_On_Delay_Time1/Edge_Rising'
 * '<S102>' : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_ENG_INHIBIT/ASL_Instant_Activation_False'
 * '<S103>' : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_ENG_INHIBIT/ASL_Instant_Activation_True'
 * '<S104>' : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_ENG_INHIBIT/Enumerated_Constant'
 * '<S105>' : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_ENG_INHIBIT/Enumerated_Constant1'
 * '<S106>' : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_ENG_INHIBIT/IfThenElse18'
 * '<S107>' : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_ENG_INHIBIT/KeCSMR_Cnt_ButtonConfCntrACC'
 * '<S108>' : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_ENG_INHIBIT/KeCSMR_Cnt_InhEngageCntrLim'
 * '<S109>' : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_ENG_INHIBIT/KeCSMR_b_ASLInstantActivationEnable'
 * '<S110>' : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_ENG_INHIBIT/KeCSMR_v_SetSpeedHysteresis'
 * '<S111>' : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_ENG_INHIBIT/LV2_Counter_Reset_Enabled'
 * '<S112>' : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_ENG_INHIBIT/LV2_Counter_Reset_Enabled2'
 * '<S113>' : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_ENG_INHIBIT/LV2_Edge_Rising'
 * '<S114>' : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_ENG_INHIBIT/ASL_Instant_Activation_False/KeCSMR_Cnt_ASLDisableCntr'
 * '<S115>' : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_ENG_INHIBIT/ASL_Instant_Activation_False/LV2_Counter_Reset_Enabled'
 * '<S116>' : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_ENG_INHIBIT/ASL_Instant_Activation_True/KeCSMR_Cnt_ASLDisableCntr_Instant'
 * '<S117>' : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_ENG_INHIBIT/ASL_Instant_Activation_True/LV2_Counter_Reset_Enabled'
 * '<S118>' : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_Lv2_CC_Enabled/SR_FlipFlop'
 * '<S119>' : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_OnOff_Mode/IfThenElse18'
 * '<S120>' : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_OnOff_Mode/KeCSMR_Cnt_OFFModStValue'
 * '<S121>' : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_OnOff_Mode/KeCSMR_Cnt_ONModStValue'
 * '<S122>' : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_OnOff_Mode/KeCSMR_Cnt_OtherModValue'
 * '<S123>' : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_OnOff_Mode/KeCSMR_b_ONOFFModBCMOvrd'
 * '<S124>' : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_OnOff_Mode/LV2_Latch_On_With_Reset'
 * '<S125>' : 'CSMR_ac/CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_OnOff_Mode/LV2_Latch_On_With_Reset1'
 * '<S126>' : 'CSMR_ac/CSMR_MedTEB/CSMD/CSMD_Subsystem'
 * '<S127>' : 'CSMR_ac/CSMR_MedTEB/CSMD/CSMD_Subsystem/Event_CM_CruzCntrlErr_ReportTestFailed'
 * '<S128>' : 'CSMR_ac/CSMR_MedTEB/CSMD/CSMD_Subsystem/Event_CM_CruzCntrlErr_ReportTestInit'
 * '<S129>' : 'CSMR_ac/CSMR_MedTEB/CSMD/CSMD_Subsystem/Event_CM_CruzCntrlErr_ReportTestPassed'
 * '<S130>' : 'CSMR_ac/CSMR_MedTEB/CSMD/CSMD_Subsystem/KeCSMR_Cnt_CrusMntrCntrInc'
 * '<S131>' : 'CSMR_ac/CSMR_MedTEB/CSMD/CSMD_Subsystem/KeCSMR_Cnt_CrusMntrCntrLim'
 * '<S132>' : 'CSMR_ac/CSMR_MedTEB/CSMD/CSMD_Subsystem/LV2_Debounce_Counter_with_Latch_For_DBC_Status_CruiseMntr'
 * '<S133>' : 'CSMR_ac/CSMR_MedTEB/CSMD/CSMD_Subsystem/Event_CM_CruzCntrlErr_ReportTestFailed/EnumeratedConstant16'
 * '<S134>' : 'CSMR_ac/CSMR_MedTEB/CSMD/CSMD_Subsystem/Event_CM_CruzCntrlErr_ReportTestInit/Enumerated_Constant'
 * '<S135>' : 'CSMR_ac/CSMR_MedTEB/CSMD/CSMD_Subsystem/Event_CM_CruzCntrlErr_ReportTestPassed/EnumeratedConstant16'
 * '<S136>' : 'CSMR_ac/CSMR_MedTEB/CSMD/CSMD_Subsystem/LV2_Debounce_Counter_with_Latch_For_DBC_Status_CruiseMntr/DTC_Determination'
 * '<S137>' : 'CSMR_ac/CSMR_MedTEB/CSMD/CSMD_Subsystem/LV2_Debounce_Counter_with_Latch_For_DBC_Status_CruiseMntr/EdgeFalling'
 * '<S138>' : 'CSMR_ac/CSMR_MedTEB/CSMD/CSMD_Subsystem/LV2_Debounce_Counter_with_Latch_For_DBC_Status_CruiseMntr/EnumeratedSignal'
 * '<S139>' : 'CSMR_ac/CSMR_MedTEB/CSMD/CSMD_Subsystem/LV2_Debounce_Counter_with_Latch_For_DBC_Status_CruiseMntr/EnumeratedSignal1'
 * '<S140>' : 'CSMR_ac/CSMR_MedTEB/CSMD/CSMD_Subsystem/LV2_Debounce_Counter_with_Latch_For_DBC_Status_CruiseMntr/EnumeratedSignal2'
 * '<S141>' : 'CSMR_ac/CSMR_MedTEB/CSMD/CSMD_Subsystem/LV2_Debounce_Counter_with_Latch_For_DBC_Status_CruiseMntr/TestNotDone'
 * '<S142>' : 'CSMR_ac/CSMR_MedTEB/CSMD/CSMD_Subsystem/LV2_Debounce_Counter_with_Latch_For_DBC_Status_CruiseMntr/DTC_Determination/CounterZero'
 * '<S143>' : 'CSMR_ac/CSMR_MedTEB/CSMD/CSMD_Subsystem/LV2_Debounce_Counter_with_Latch_For_DBC_Status_CruiseMntr/DTC_Determination/EnumSetBlock'
 * '<S144>' : 'CSMR_ac/CSMR_MedTEB/CSMI_Inputs/BooleanSetBlock1'
 * '<S145>' : 'CSMR_ac/CSMR_MedTEB/CSMI_Inputs/BooleanSetBlock2'
 * '<S146>' : 'CSMR_ac/CSMR_MedTEB/CSMI_Inputs/BooleanSetBlock20'
 * '<S147>' : 'CSMR_ac/CSMR_MedTEB/CSMI_Inputs/Calculate_Veh_Spd_Bias'
 * '<S148>' : 'CSMR_ac/CSMR_MedTEB/CSMI_Inputs/Disable_Monitoring'
 * '<S149>' : 'CSMR_ac/CSMR_MedTEB/CSMI_Inputs/EnumSetBlock7'
 * '<S150>' : 'CSMR_ac/CSMR_MedTEB/CSMI_Inputs/Enumerated_Constant1'
 * '<S151>' : 'CSMR_ac/CSMR_MedTEB/CSMI_Inputs/Enumerated_Constant2'
 * '<S152>' : 'CSMR_ac/CSMR_MedTEB/CSMI_Inputs/KaCSMR_e_ACCSystemSts_Map'
 * '<S153>' : 'CSMR_ac/CSMR_MedTEB/CSMI_Inputs/KeCSMR_b_ACCOnOffVal'
 * '<S154>' : 'CSMR_ac/CSMR_MedTEB/CSMI_Inputs/KeCSMR_b_ASLOnOffVal'
 * '<S155>' : 'CSMR_ac/CSMR_MedTEB/CSMI_Inputs/KeCSMR_b_CCInstantActivationEnable'
 * '<S156>' : 'CSMR_ac/CSMR_MedTEB/CSMI_Inputs/KeCSMR_b_CcEnabledVal'
 * '<S157>' : 'CSMR_ac/CSMR_MedTEB/CSMI_Inputs/KeCSMR_b_EngTrqEnblRqEnabled'
 * '<S158>' : 'CSMR_ac/CSMR_MedTEB/CSMI_Inputs/KeCSMR_b_EngTrqEnblRqVal'
 * '<S159>' : 'CSMR_ac/CSMR_MedTEB/CSMI_Inputs/KeCSMR_b_InhCruiseVal'
 * '<S160>' : 'CSMR_ac/CSMR_MedTEB/CSMI_Inputs/KeCSMR_b_OvrdACCOnOff'
 * '<S161>' : 'CSMR_ac/CSMR_MedTEB/CSMI_Inputs/KeCSMR_b_OvrdASLOnOff'
 * '<S162>' : 'CSMR_ac/CSMR_MedTEB/CSMI_Inputs/KeCSMR_b_OvrdCancelCrus'
 * '<S163>' : 'CSMR_ac/CSMR_MedTEB/CSMI_Inputs/KeCSMR_b_OvrdCcEnabled'
 * '<S164>' : 'CSMR_ac/CSMR_MedTEB/CSMI_Inputs/KeCSMR_b_OvrdInhCruise'
 * '<S165>' : 'CSMR_ac/CSMR_MedTEB/CSMI_Inputs/KeCSMR_b_OvrdSCCM_CRS_CTRLFA'
 * '<S166>' : 'CSMR_ac/CSMR_MedTEB/CSMI_Inputs/KeCSMR_b_SCCM_CRS_CTRLFAVal'
 * '<S167>' : 'CSMR_ac/CSMR_MedTEB/CSMI_Inputs/KeCSMR_b_SSMRCancelCrusVal'
 * '<S168>' : 'CSMR_ac/CSMR_MedTEB/CSMI_Inputs/KeCSMR_b_SpeedUnitDfltEnbl'
 * '<S169>' : 'CSMR_ac/CSMR_MedTEB/CSMI_Inputs/KeCSMR_b_VehSpdFAEnabled'
 * '<S170>' : 'CSMR_ac/CSMR_MedTEB/CSMI_Inputs/KeCSMR_b_VehSpdFAVal'
 * '<S171>' : 'CSMR_ac/CSMR_MedTEB/CSMI_Inputs/LV2_Edge_Falling'
 * '<S172>' : 'CSMR_ac/CSMR_MedTEB/CSMI_Inputs/LV2_Latch_On_With_Reset'
 * '<S173>' : 'CSMR_ac/CSMR_MedTEB/CSMI_Inputs/Reset_Dtc'
 * '<S174>' : 'CSMR_ac/CSMR_MedTEB/CSMI_Inputs/Calculate_Veh_Spd_Bias/KeCSMR_b_BiasVehSpd'
 * '<S175>' : 'CSMR_ac/CSMR_MedTEB/CSMI_Inputs/Calculate_Veh_Spd_Bias/KeCSMR_v_Lv2CCKphMax'
 * '<S176>' : 'CSMR_ac/CSMR_MedTEB/CSMI_Inputs/Calculate_Veh_Spd_Bias/KeCSMR_v_Lv2CCKphMin'
 * '<S177>' : 'CSMR_ac/CSMR_MedTEB/CSMI_Inputs/Calculate_Veh_Spd_Bias/KeCSMR_v_Lv2CCKphMin_Resume'
 * '<S178>' : 'CSMR_ac/CSMR_MedTEB/CSMI_Inputs/Calculate_Veh_Spd_Bias/KeCSMR_v_Lv2CCMphMax'
 * '<S179>' : 'CSMR_ac/CSMR_MedTEB/CSMI_Inputs/Calculate_Veh_Spd_Bias/KeCSMR_v_Lv2CCMphMin'
 * '<S180>' : 'CSMR_ac/CSMR_MedTEB/CSMI_Inputs/Calculate_Veh_Spd_Bias/KeCSMR_v_Lv2CCMphMin_Resume'
 * '<S181>' : 'CSMR_ac/CSMR_MedTEB/CSMI_Inputs/Disable_Monitoring/KeCSMR_b_DisblMntr'
 * '<S182>' : 'CSMR_ac/CSMR_MedTEB/CSMI_Inputs/Disable_Monitoring/LV2_Latch_On_With_Reset'
 * '<S183>' : 'CSMR_ac/CSMR_MedTEB/CSMI_Inputs/Reset_Dtc/EnumeratedConstant'
 * '<S184>' : 'CSMR_ac/CSMR_PwrOn/Sub_Out_Init'
 * '<S185>' : 'CSMR_ac/CSMR_PwrOn/Sub_Out_Init/Constant'
 */
#endif                                 /* RTW_HEADER_CSMR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
