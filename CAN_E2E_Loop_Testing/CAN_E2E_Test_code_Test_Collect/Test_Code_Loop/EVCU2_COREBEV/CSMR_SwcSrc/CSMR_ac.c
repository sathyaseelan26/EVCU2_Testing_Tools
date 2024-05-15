/*
 * File: CSMR_ac.c
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

#include "CSMR_ac.h"
#include "mod_JrdzB8Sm_16a.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_CSMR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(TeCSMR_e_ACCSystemSts, CSMR_VAR_INIT)
    KaCSMR_e_ACCSystemSts_Map[16] =
{
    CeCSMR_e_Off, CeCSMR_e_Enabled, CeCSMR_e_Engaged, CeCSMR_e_Engaged_BrakeOnly,
    CeCSMR_e_Cancel, CeCSMR_e_NCC_Enabled, CeCSMR_e_NCC_Engaged,
    CeCSMR_e_NCC_Cancel, CeCSMR_e_HAS_BSoC, CeCSMR_e_Off, CeCSMR_e_Off,
    CeCSMR_e_Off, CeCSMR_e_Off, CeCSMR_e_Off, CeCSMR_e_Off,
    CeCSMR_e_ACCSystemSts_SNA
};                                     /* Referenced by: '<S152>/Calib' */

static volatile CONST(uint16, CSMR_VAR_INIT) KeCSMR_Cnt_ASLDisableCntr = 3U;/* Referenced by: '<S114>/Calib' */
static volatile CONST(uint16, CSMR_VAR_INIT) KeCSMR_Cnt_ASLDisableCntr_Instant =
    2U;                                /* Referenced by: '<S116>/Calib' */
static volatile CONST(uint8, CSMR_VAR_INIT) KeCSMR_Cnt_ButtonConfCntrACC = 2U;/* Referenced by: '<S107>/Calib' */
static volatile CONST(uint8, CSMR_VAR_INIT) KeCSMR_Cnt_ButtonConfCntrLimCncl =
    3U;                                /* Referenced by: '<S39>/Calib' */
static volatile CONST(uint8, CSMR_VAR_INIT) KeCSMR_Cnt_ButtonConfCntrLimRes = 3U;/* Referenced by: '<S40>/Calib' */
static volatile CONST(uint8, CSMR_VAR_INIT) KeCSMR_Cnt_ButtonConfCntrLimSet = 3U;/* Referenced by: '<S41>/Calib' */
static volatile CONST(uint8, CSMR_VAR_INIT) KeCSMR_Cnt_CrusMntrCntrInc = 1U;/* Referenced by: '<S130>/Calib' */
static volatile CONST(uint8, CSMR_VAR_INIT) KeCSMR_Cnt_CrusMntrCntrLim = 20U;/* Referenced by: '<S131>/Calib' */
static volatile CONST(uint8, CSMR_VAR_INIT) KeCSMR_Cnt_InhEngageCntrLim = 4U;/* Referenced by: '<S108>/Calib' */
static volatile CONST(uint8, CSMR_VAR_INIT) KeCSMR_Cnt_OFFModStValue = 6U;/* Referenced by: '<S120>/Calib' */
static volatile CONST(uint8, CSMR_VAR_INIT) KeCSMR_Cnt_ONModStValue = 4U;/* Referenced by: '<S121>/Calib' */
static volatile CONST(uint8, CSMR_VAR_INIT) KeCSMR_Cnt_OtherModValue = 6U;/* Referenced by: '<S122>/Calib' */
static volatile CONST(float32, CSMR_VAR_INIT) KeCSMR_M_ToLimOverrideCCTrq =
    10.0F;                             /* Referenced by: '<S93>/Calib' */
static volatile CONST(float32, CSMR_VAR_INIT) KeCSMR_Pct_AccelPdlPctVal = 30.0F;/* Referenced by: '<S94>/Calib' */
static volatile CONST(float32, CSMR_VAR_INIT) KeCSMR_Pct_PVSThrsh = 5.0F;/* Referenced by: '<S95>/Calib' */
static volatile CONST(boolean, CSMR_VAR_INIT) KeCSMR_b_ACCOnOffVal = 0;/* Referenced by: '<S153>/Calib' */
static volatile CONST(boolean, CSMR_VAR_INIT)
    KeCSMR_b_ASLInstantActivationEnable = 1;/* Referenced by: '<S109>/Calib' */
static volatile CONST(boolean, CSMR_VAR_INIT) KeCSMR_b_ASLOnOffVal = 0;/* Referenced by: '<S154>/Calib' */
static volatile CONST(boolean, CSMR_VAR_INIT) KeCSMR_b_ASRMSRActive = 1;/* Referenced by: '<S23>/Calib' */
static volatile CONST(boolean, CSMR_VAR_INIT) KeCSMR_b_AccPdlOvrdActive = 1;/* Referenced by: '<S96>/Calib' */
static volatile CONST(boolean, CSMR_VAR_INIT) KeCSMR_b_AcceptSetTap = 1;/* Referenced by: '<S58>/Calib' */
static volatile CONST(boolean, CSMR_VAR_INIT) KeCSMR_b_BiasVehSpd = 1;/* Referenced by: '<S174>/Calib' */
static volatile CONST(boolean, CSMR_VAR_INIT) KeCSMR_b_CCInstantActivationEnable
    = 1;                               /* Referenced by: '<S155>/Calib' */
static volatile CONST(boolean, CSMR_VAR_INIT) KeCSMR_b_CcEnabledVal = 0;/* Referenced by: '<S156>/Calib' */
static volatile CONST(boolean, CSMR_VAR_INIT) KeCSMR_b_DisblMntr = 0;/* Referenced by: '<S181>/Calib' */
static volatile CONST(boolean, CSMR_VAR_INIT) KeCSMR_b_EngTrqEnblRqEnabled = 1;/* Referenced by: '<S157>/Calib' */
static volatile CONST(boolean, CSMR_VAR_INIT) KeCSMR_b_EngTrqEnblRqVal = 0;/* Referenced by: '<S158>/Calib' */
static volatile CONST(boolean, CSMR_VAR_INIT) KeCSMR_b_IgnoreSetTap = 0;/* Referenced by: '<S59>/Calib' */
static volatile CONST(boolean, CSMR_VAR_INIT) KeCSMR_b_InhCruiseVal = 0;/* Referenced by: '<S159>/Calib' */
static volatile CONST(boolean, CSMR_VAR_INIT) KeCSMR_b_Lv1CcInhEngage = 1;/* Referenced by: '<S24>/Calib' */
static volatile CONST(boolean, CSMR_VAR_INIT) KeCSMR_b_ONOFFModBCMOvrd = 1;/* Referenced by: '<S123>/Calib' */
static volatile CONST(boolean, CSMR_VAR_INIT) KeCSMR_b_OvrdACCOnOff = 1;/* Referenced by: '<S160>/Calib' */
static volatile CONST(boolean, CSMR_VAR_INIT) KeCSMR_b_OvrdASLOnOff = 0;/* Referenced by: '<S161>/Calib' */
static volatile CONST(boolean, CSMR_VAR_INIT) KeCSMR_b_OvrdCancelCrus = 1;/* Referenced by: '<S162>/Calib' */
static volatile CONST(boolean, CSMR_VAR_INIT) KeCSMR_b_OvrdCcEnabled = 0;/* Referenced by: '<S163>/Calib' */
static volatile CONST(boolean, CSMR_VAR_INIT) KeCSMR_b_OvrdInhCruise = 1;/* Referenced by: '<S164>/Calib' */
static volatile CONST(boolean, CSMR_VAR_INIT) KeCSMR_b_OvrdSCCM_CRS_CTRLFA = 0;/* Referenced by: '<S165>/Calib' */
static volatile CONST(boolean, CSMR_VAR_INIT) KeCSMR_b_PtcPdlInChrgVsCC = 0;/* Referenced by: '<S60>/Calib' */
static volatile CONST(boolean, CSMR_VAR_INIT) KeCSMR_b_SCCM_CRS_CTRLFAVal = 1;/* Referenced by: '<S166>/Calib' */
static volatile CONST(boolean, CSMR_VAR_INIT) KeCSMR_b_SSMRCancelCrusVal = 0;/* Referenced by: '<S167>/Calib' */
static volatile CONST(boolean, CSMR_VAR_INIT) KeCSMR_b_SetSpdInvalid = 1;/* Referenced by: '<S25>/Calib' */
static volatile CONST(boolean, CSMR_VAR_INIT) KeCSMR_b_SpdUnitChngd = 1;/* Referenced by: '<S61>/Calib' */
static volatile CONST(boolean, CSMR_VAR_INIT) KeCSMR_b_SpeedUnitDfltEnbl = 0;/* Referenced by: '<S168>/Calib' */
static volatile CONST(boolean, CSMR_VAR_INIT) KeCSMR_b_SpeedUnitOutOfRange = 1;/* Referenced by: '<S62>/Calib' */
static volatile CONST(boolean, CSMR_VAR_INIT) KeCSMR_b_TrqOvrdActive = 1;/* Referenced by: '<S97>/Calib' */
static volatile CONST(boolean, CSMR_VAR_INIT) KeCSMR_b_VehSpdDiff = 1;/* Referenced by: '<S63>/Calib' */
static volatile CONST(boolean, CSMR_VAR_INIT) KeCSMR_b_VehSpdFAEnabled = 0;/* Referenced by: '<S169>/Calib' */
static volatile CONST(boolean, CSMR_VAR_INIT) KeCSMR_b_VehSpdFAVal = 0;/* Referenced by: '<S170>/Calib' */
static volatile CONST(float32, CSMR_VAR_INIT) KeCSMR_t_CSMR_dt = 0.025F;/* Referenced by: '<S64>/Calib' */
static volatile CONST(float32, CSMR_VAR_INIT) KeCSMR_t_HoldTimeAcc = 0.8F;/* Referenced by: '<S65>/Calib' */
static volatile CONST(float32, CSMR_VAR_INIT) KeCSMR_t_HoldTimeDec = 0.8F;/* Referenced by: '<S66>/Calib' */
static volatile CONST(float32, CSMR_VAR_INIT) KeCSMR_t_HoldTimeInc = 0.8F;/* Referenced by: '<S67>/Calib' */
static volatile CONST(float32, CSMR_VAR_INIT) KeCSMR_v_ASLActivationMinSpd =
    10.0F;                             /* Referenced by: '<S18>/Calib' */
static volatile CONST(float32, CSMR_VAR_INIT) KeCSMR_v_CCSetSpd_AccHoldDeltaKPH =
    10.0F;                             /* Referenced by: '<S68>/Calib' */
static volatile CONST(float32, CSMR_VAR_INIT) KeCSMR_v_CCSetSpd_AccHoldDeltaMPH =
    5.0F;                              /* Referenced by: '<S69>/Calib' */
static volatile CONST(float32, CSMR_VAR_INIT) KeCSMR_v_CCSetSpd_AccTapDeltaKPH =
    1.0F;                              /* Referenced by: '<S70>/Calib' */
static volatile CONST(float32, CSMR_VAR_INIT) KeCSMR_v_CCSetSpd_AccTapDeltaMPH =
    1.0F;                              /* Referenced by: '<S71>/Calib' */
static volatile CONST(float32, CSMR_VAR_INIT) KeCSMR_v_CCSetSpd_DecHoldDeltaKPH =
    -10.0F;                            /* Referenced by: '<S72>/Calib' */
static volatile CONST(float32, CSMR_VAR_INIT) KeCSMR_v_CCSetSpd_DecHoldDeltaMPH =
    -5.0F;                             /* Referenced by: '<S73>/Calib' */
static volatile CONST(float32, CSMR_VAR_INIT) KeCSMR_v_CCSetSpd_DecTapDeltaKPH =
    -1.0F;                             /* Referenced by: '<S74>/Calib' */
static volatile CONST(float32, CSMR_VAR_INIT) KeCSMR_v_CCSetSpd_DecTapDeltaMPH =
    -1.0F;                             /* Referenced by: '<S75>/Calib' */
static volatile CONST(float32, CSMR_VAR_INIT) KeCSMR_v_Lv2CCKphMax = 140.0F;/* Referenced by: '<S175>/Calib' */
static volatile CONST(float32, CSMR_VAR_INIT) KeCSMR_v_Lv2CCKphMin = 30.0F;/* Referenced by: '<S176>/Calib' */
static volatile CONST(float32, CSMR_VAR_INIT) KeCSMR_v_Lv2CCKphMin_Resume =
    25.0F;                             /* Referenced by: '<S177>/Calib' */
static volatile CONST(float32, CSMR_VAR_INIT) KeCSMR_v_Lv2CCMphMax = 100.0F;/* Referenced by: '<S178>/Calib' */
static volatile CONST(float32, CSMR_VAR_INIT) KeCSMR_v_Lv2CCMphMin = 20.0F;/* Referenced by: '<S179>/Calib' */
static volatile CONST(float32, CSMR_VAR_INIT) KeCSMR_v_Lv2CCMphMin_Resume =
    17.0F;                             /* Referenced by: '<S180>/Calib' */
static volatile CONST(float32, CSMR_VAR_INIT) KeCSMR_v_Lv2CCSetSpdNotValid =
    0.0F;                              /* Referenced by: '<S26>/Calib' */
static volatile CONST(float32, CSMR_VAR_INIT) KeCSMR_v_Lv2Lv1SetSpdDeltaThrshd =
    20.0F;                             /* Referenced by: '<S27>/Calib' */
static volatile CONST(float32, CSMR_VAR_INIT)
    KeCSMR_v_Lv2Lv1SetSpdDeltaThrshdKPH = 20.0F;/* Referenced by: '<S28>/Calib' */
static volatile CONST(float32, CSMR_VAR_INIT) KeCSMR_v_PtcPdlInChrgSpd = 15.0F;/* Referenced by: '<S76>/Calib' */
static volatile CONST(float32, CSMR_VAR_INIT) KeCSMR_v_SetSpeedHysteresis = 2.0F;/* Referenced by: '<S110>/Calib' */
static volatile CONST(float32, CSMR_VAR_INIT) KeCSMR_v_VehSpdDecDiffKPH = 10.0F;/* Referenced by: '<S77>/Calib' */
static volatile CONST(float32, CSMR_VAR_INIT) KeCSMR_v_VehSpdDecDiffMPH = 10.0F;/* Referenced by: '<S78>/Calib' */
static volatile CONST(float32, CSMR_VAR_INIT) KeCSMR_v_VehSpdIncDiffKPH = 10.0F;/* Referenced by: '<S79>/Calib' */
static volatile CONST(float32, CSMR_VAR_INIT) KeCSMR_v_VehSpdIncDiffMPH = 10.0F;/* Referenced by: '<S80>/Calib' */

#define STOP_SEC_CALIB_UNSPECIFIED_CSMR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CSMR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(uint16, CSMR_VAR_INIT) VeCSMC_Cnt_Lv2ACC_OnCntr;/* '<S112>/Switch1' */
static VAR(uint16, CSMR_VAR_INIT) VeCSMC_Cnt_Lv2ASL_OffCntr;/* '<S115>/Switch1' */
static VAR(uint16, CSMR_VAR_INIT) VeCSMC_Cnt_Lv2ASL_OnCntr;/* '<S117>/Switch1' */
static VAR(uint16, CSMR_VAR_INIT) VeCSMC_Cnt_Lv2CrusInhEngCntr;/* '<S111>/Switch1' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_ASLActive;/* '<S14>/Merge1' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_ASLActive_prevF;/* '<S102>/Logical' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_ASLActive_prevT;/* '<S103>/Logical' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_AccPdlOverrdFallingEdge;/* '<S55>/Logical2' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_CCSetSpdHoldEvent;/* '<S52>/AND' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_CC_Lv1SetSpdValid;/* '<S10>/Comparison2' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_CC_ResetAccelPdlOvrd;/* '<S13>/Dtrmn_Set_Spd' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_CC_Resume_State;/* '<S51>/AND' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_CC_SetSpd_Valid;/* '<S50>/AND' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_CC_Set_DecHi;/* '<S87>/AND' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_CC_Set_IncHi;/* '<S86>/AND' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_CcDisabledForASL;/* '<S14>/Merge3' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_CcDisabledForASL_prevF;/* '<S102>/Logical3' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_CcDisabledForASL_prevT;/* '<S103>/Comparison4' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_CcDsblOnePress;/* '<S102>/Comparison2' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_CcDsblTwoPress;/* '<S102>/Comparison4' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_CrusEngReqObs;/* '<S46>/OR1' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_CrusEngReqObsRes;/* '<S35>/Logical15' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_CrusEngReqObsSet;/* '<S35>/Logical13' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_LV2CrusOffArb;/* '<S3>/Unit Delay' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_Lv1CrusOffDtctd;/* '<S11>/Logical3' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_Lv1CrusOnOffPres;/* '<S11>/RelationalOperator' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_Lv1CrusOnOffPresed;/* '<S11>/Logical4' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_Lv2CCEnabled;/* '<S118>/LogicalOperator3' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_Lv2CCNotEng_Prev;/* '<S3>/Unit Delay7' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_Lv2CCSetSpdNotVldArb;/* '<S11>/Logical6' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_Lv2CCSetSpdValid;/* '<S10>/Logical' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_Lv2Cancel;/* '<S12>/Comparison4' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_Lv2CancelDlyd;/* '<S43>/AND' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_Lv2CcOffInput1;/* '<S16>/logic' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_Lv2CcOffM;/* '<S16>/CC_OFF_MODE' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_Lv2CcOnInput1;/* '<S16>/LogicalOperator6' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_Lv2CcOnM;/* '<S16>/CC_ON_MODE' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_Lv2CcOnOffPressed1;/* '<S16>/RelationalOperator' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_Lv2CcOnOffPressed2;/* '<S16>/RelationalOperator1' */
static VAR(uint8, CSMR_VAR_INIT) VeCSMC_b_Lv2CcOnOffState;/* '<S16>/Switch' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_Lv2CcOnPressed;/* '<S16>/LogicalOperator1' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_Lv2CruiseMntrCntrRst;/* '<S132>/passDBCparam2' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_Lv2CruiseNotDtmin;/* '<S11>/Comparison1' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_Lv2CruiseOff;/* '<S11>/Logical8' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_Lv2CruiseStOff;/* '<S11>/Comparison2' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_Lv2CrusEng;/* '<S14>/Logical2' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_Lv2CrusInhEngTemp;/* '<S14>/Comparison13' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_Lv2CrusInhEngage;/* '<S14>/Logical4' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_Lv2CrusNotEng;/* '<S3>/Logical5' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_Lv2CrusNotEngArbPrev;/* '<S3>/Unit Delay2' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_Lv2CrusNotEngPrev;/* '<S3>/Unit Delay3' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_Lv2CrusOffMode;/* '<S11>/Logical2' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_Lv2CrusOffReq;/* '<S9>/Logical8' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_Lv2CrusSetDtctdDlyd;/* '<S44>/AND' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_Lv2SCCM_CRS_FA;/* '<S11>/Comparison4' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_PtcPdlInChrgVsCC;/* '<S55>/Logical3' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMC_b_SetSpdInvalidCal;/* '<S10>/Logical3' */
static VAR(TeDFIB_e_FaultDebounceStatus, CSMR_VAR_INIT)
    VeCSMC_e_Lv2FaultSts_CM_CruzCntrlErr_CruiseMntr;/* '<S136>/Switch1' */
static VAR(float32, CSMR_VAR_INIT) VeCSMC_v_CC_SetSpd;/* '<S88>/Gain' */
static VAR(uint8, CSMR_VAR_INIT) VeCSMD_Cnt_Lv2CruiseMntrFailed;/* '<S132>/Switch2' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMD_b_Lv2CruiseMntrFailed;/* '<S132>/Switch3' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMI_b_ACC_OnOff;/* '<S5>/Switch3' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMI_b_ASLOnOffSts;/* '<S5>/Switch6' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMI_b_CancelCruis;/* '<S5>/Switch2' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMI_b_DiagReset;/* '<S173>/Logical1' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMI_b_DisblMntr;/* '<S148>/Logical3' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMI_b_DisblMntr_LOC;/* '<S182>/OR1' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMI_b_EngTrqEnblRq;/* '<S5>/Switch8' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMI_b_InhibitCruise;/* '<S5>/Switch1' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMI_b_KeyOff;/* '<S173>/Logical4' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMI_b_LOC;/* '<S148>/Logical4' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMI_b_Lv2ACC_Enabled;/* '<S5>/Logical' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMI_b_Lv2CrusOnOff;/* '<S5>/Switch10' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMI_b_Lv2Lv1CcEnabled;/* '<S5>/Switch5' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMI_b_Lv2SCCM_CRS_CTRLFA;/* '<S5>/Switch4' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMI_b_Reset_Dtc;/* '<S173>/Logical5' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMI_b_SpeedUnit_Inter;/* '<S5>/Switch11' */
static VAR(boolean, CSMR_VAR_INIT) VeCSMI_b_VehSpdFA;/* '<S5>/Switch7' */
static VAR(float32, CSMR_VAR_INIT) VeCSMI_v_Lv2VehSpdBias;/* '<S147>/Switch11' */
static VAR(float32, CSMR_VAR_INIT) VeCSMI_v_Lv2VehSpdRound;/* '<S147>/Rounding2' */
static VAR(float32, CSMR_VAR_INIT) VeCSMR_v_Lv2CCMaxSpd;/* '<S147>/Switch10' */
static VAR(float32, CSMR_VAR_INIT) VeCSMR_v_Lv2CCMinSpd;/* '<S147>/Switch9' */
static VAR(float32, CSMR_VAR_INIT) VeCSMR_v_Lv2CCMinSpdResume;/* '<S147>/Switch1' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CSMR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_CSMR
#include "MemMap.h"

CONST(ConstB_CSMR_ac_T, CSMR_VAR_INIT) CSMR_ac_ConstB =
{
    CeDFIB_e_Init                      /* '<S185>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_CSMR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CSMR
#include "MemMap.h"

VAR(B_CSMR_ac_T, CSMR_VAR_INIT) CSMR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CSMR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CSMR
#include "MemMap.h"

VAR(DW_CSMR_ac_T, CSMR_VAR_INIT) CSMR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CSMR
#include "MemMap.h"

/* Forward declaration for local functions */
static void CSMR_a_enter_atomic_CeCSMR_e_CCSt_Set_SF(const boolean
    *VeCSMI_b_Lv2CrusAccel_out, const boolean *VeCSMI_b_Lv2CrusDecel_out);
static void CSMR_ac_CeCSMR_e_CCSt_Set_SF(const boolean *AND_b, const boolean
    *VeCSMI_b_Lv2CrusAccel_out, const boolean *VeCSMI_b_Lv2CrusDecel_out, const
    boolean *VeCSMI_b_Lv2CrusCancel_out, const float32
    *VeCSMR_v_Lv2VehSpdBiasRound, const float32 *VeCSMR_v_CCSetSpd_AccHoldDelta);

/* Function for Chart: '<S13>/Dtrmn_Set_Spd' */
static void CSMR_a_enter_atomic_CeCSMR_e_CCSt_Set_SF(const boolean
    *VeCSMI_b_Lv2CrusAccel_out, const boolean *VeCSMI_b_Lv2CrusDecel_out)
{
    /* Entry 'CeCSMR_e_CCSt_Set_SF': '<S56>:38' */
    CSMR_ac_B.CruiseControlState = CeCSMR_e_CCSt_Set;
    if ((CSMR_ac_B.CCSetSpd_HoldEvent) && (CSMR_ac_B.LeCSMR_v_CCSetSpd_Delta_mph
         == 0.0F))
    {
        CSMR_ac_B.LeCSMR_v_CCSetSpd_Delta_mph =
            CSMR_ac_B.VeCSMR_v_CCSetSpd_DecHoldDelta;
    }

    /* Constant: '<S59>/Calib' */
    if (((*VeCSMI_b_Lv2CrusAccel_out) || (*VeCSMI_b_Lv2CrusDecel_out)) ||
            (KeCSMR_b_IgnoreSetTap))
    {
        CSMR_ac_B.VeCSMR_b_IgnoreSetIncTap = false;
        CSMR_ac_B.VeCSMR_b_IgnoreSetDecTap = false;
    }

    /* End of Constant: '<S59>/Calib' */
    CSMR_ac_B.CCSetSpd_HoldEvent = false;
    CSMR_ac_B.CC_SetSpeed += CSMR_ac_B.LeCSMR_v_CCSetSpd_Delta_mph;
    CSMR_ac_B.CC_SetSpeed_Valid = true;
    CSMR_ac_B.VeCSMR_t_CC_Set_Tmr = 0.0F;
    VeCSMC_b_CC_ResetAccelPdlOvrd = true;
}

/* Function for Chart: '<S13>/Dtrmn_Set_Spd' */
static void CSMR_ac_CeCSMR_e_CCSt_Set_SF(const boolean *AND_b, const boolean
    *VeCSMI_b_Lv2CrusAccel_out, const boolean *VeCSMI_b_Lv2CrusDecel_out, const
    boolean *VeCSMI_b_Lv2CrusCancel_out, const float32
    *VeCSMR_v_Lv2VehSpdBiasRound, const float32 *VeCSMR_v_CCSetSpd_AccHoldDelta)
{
    boolean guard1 = false;
    boolean tmp;
    boolean tmp_0;
    boolean tmp_1;

    /* UnitDelay: '<S125>/Unit Delay1' incorporates:
     *  Constant: '<S58>/Calib'
     *  Constant: '<S61>/Calib'
     *  UnitDelay: '<S13>/Unit Delay'
     *  UnitDelay: '<S13>/Unit Delay3'
     */
    /* During 'CeCSMR_e_CCSt_Set_SF': '<S56>:38' */
    if (CSMR_ac_DW.VeCSMC_b_Lv2CcOffMode_prev)
    {
        /* Transition: '<S56>:52' */
        CSMR_ac_B.CC_Resume_State = false;

        /* Transition: '<S56>:53' */
        /* Exit 'CeCSMR_e_CCSt_Set_SF': '<S56>:38' */
        CSMR_ac_B.VeCSMR_t_CC_Set_Tmr = 0.0F;
        CSMR_ac_B.VeCSMR_e_StateChartMode = CeCSMR_e_CCSt_Off_SF;

        /* Entry 'CeCSMR_e_CCSt_Off_SF': '<S56>:44' */
        CSMR_ac_B.CruiseControlState = CeCSMR_e_CCSt_Off;
        CSMR_ac_B.CC_SetSpeed = 0.0F;
        CSMR_ac_B.CC_SetSpeed_Valid = false;
        VeCSMC_b_CC_ResetAccelPdlOvrd = true;
    }
    else if ((*VeCSMI_b_Lv2CrusCancel_out) ||
             ((!CSMR_ac_B.TmpSignalConversionAtVeCCTR_b_CcEngagedO) &&
              (CSMR_ac_DW.VeCSMC_b_Lv1CCEngaged_Prev)))
    {
        /* Transition: '<S56>:46' */
        CSMR_ac_B.CC_Resume_State = true;

        /* Exit 'CeCSMR_e_CCSt_Set_SF': '<S56>:38' */
        CSMR_ac_B.VeCSMR_t_CC_Set_Tmr = 0.0F;
        CSMR_ac_B.VeCSMR_e_StateChartMode = CeCSMR_e_CCSt_On_Cancel_SF;

        /* Entry 'CeCSMR_e_CCSt_On_Cancel_SF': '<S56>:42' */
        CSMR_ac_B.CruiseControlState = CeCSMR_e_CCSt_On_Cancel;
        CSMR_ac_B.CC_SetSpeed_Valid = true;
        VeCSMC_b_CC_ResetAccelPdlOvrd = true;
        CSMR_ac_B.CC_SetSpeed =
            CSMR_ac_B.TmpSignalConversionAtVeCCTR_v_CcSetSpdOu;
    }
    else
    {
        guard1 = false;
        if (((CSMR_ac_DW.VeCSMC_b_SpeedUnt_Prev != (*AND_b)) && (*AND_b)) &&
                (KeCSMR_b_SpdUnitChngd))
        {
            /* Transition: '<S56>:181' */
            /* Transition: '<S56>:182' */
            CSMR_ac_B.CC_SetSpeed *= 0.621359F;
            CSMR_ac_B.CC_SetSpeed = roundf(CSMR_ac_B.CC_SetSpeed);
            CSMR_ac_B.LeCSMR_v_CCSetSpd_Delta_mph = 0.0F;
            guard1 = true;
        }
        else if (((CSMR_ac_DW.VeCSMC_b_SpeedUnt_Prev != (*AND_b)) && (!(*AND_b)))
                 && (KeCSMR_b_SpdUnitChngd))
        {
            /* Transition: '<S56>:185' */
            /* Transition: '<S56>:186' */
            CSMR_ac_B.CC_SetSpeed *= 1.609375F;
            CSMR_ac_B.CC_SetSpeed = roundf(CSMR_ac_B.CC_SetSpeed);
            CSMR_ac_B.LeCSMR_v_CCSetSpd_Delta_mph = 0.0F;
            guard1 = true;
        }
        else if (((VeCSMC_b_CC_Set_DecHi) && (CSMR_ac_B.VeCSMR_t_CC_Set_Tmr >
                   KeCSMR_t_HoldTimeInc)) && (CSMR_ac_B.CC_SetSpeed >
                  VeCSMR_v_Lv2CCMinSpd))
        {
            /* Transition: '<S56>:87' */
            CSMR_ac_B.LeCSMR_v_CCSetSpd_Delta_mph = -mod_JrdzB8Sm_16a
                (CSMR_ac_B.CC_SetSpeed, *VeCSMR_v_CCSetSpd_AccHoldDelta);

            /* Transition: '<S56>:122' */
            CSMR_ac_B.VeCSMR_b_IgnoreSetDecTap = true;
            CSMR_ac_B.CCSetSpd_HoldEvent = true;
            guard1 = true;
        }
        else if (((VeCSMC_b_CC_Set_IncHi) && (CSMR_ac_B.VeCSMR_t_CC_Set_Tmr >
                   KeCSMR_t_HoldTimeInc)) && (CSMR_ac_B.CC_SetSpeed <
                  VeCSMR_v_Lv2CCMaxSpd))
        {
            /* Transition: '<S56>:93' */
            CSMR_ac_B.LeCSMR_v_CCSetSpd_Delta_mph =
                (*VeCSMR_v_CCSetSpd_AccHoldDelta) - mod_JrdzB8Sm_16a
                (CSMR_ac_B.CC_SetSpeed, *VeCSMR_v_CCSetSpd_AccHoldDelta);

            /* Transition: '<S56>:120' */
            CSMR_ac_B.VeCSMR_b_IgnoreSetIncTap = true;
            guard1 = true;
        }
        else
        {
            tmp = ((*VeCSMI_b_Lv2CrusAccel_out) || (*VeCSMI_b_Lv2CrusDecel_out));
            tmp_0 = !CSMR_ac_B.VeCSMR_b_IgnoreSetIncTap;
            tmp_1 = !CSMR_ac_B.VeCSMR_b_IgnoreSetDecTap;
            if ((((((((VeCSMC_b_PtcPdlInChrgVsCC) &&
                      ((((*VeCSMR_v_Lv2VehSpdBiasRound) - CSMR_ac_B.CC_SetSpeed)
                        > CSMR_ac_B.VeCSMR_v_VehSpdDecDiffArb) ||
                       ((CSMR_ac_B.CC_SetSpeed - (*VeCSMR_v_Lv2VehSpdBiasRound))
                        > CSMR_ac_B.VeCSMR_v_VehSpdIncDiffArb))) &&
                     (KeCSMR_b_VehSpdDiff)) && tmp) && tmp_0) && tmp_1) &&
                    (VeCSMR_v_Lv2CCMinSpd < (*VeCSMR_v_Lv2VehSpdBiasRound))) &&
                    ((*VeCSMR_v_Lv2VehSpdBiasRound) < VeCSMR_v_Lv2CCMaxSpd))
            {
                /* Transition: '<S56>:163' */
                CSMR_ac_B.CC_SetSpeed = *VeCSMR_v_Lv2VehSpdBiasRound;
                CSMR_ac_B.LeCSMR_v_CCSetSpd_Delta_mph = 0.0F;

                /* Transition: '<S56>:165' */
                guard1 = true;
            }
            else if ((((((((CSMR_ac_DW.VeCSMR_b_PtcPdlInChrgVsCC_prev) && tmp) &&
                          tmp_0) && tmp_1) &&
                        (((CSMR_ac_B.TmpSignalConversionAtVeCCTR_v_CcSetSpdOu -
                           CSMR_ac_B.CC_SetSpeed) > KeCSMR_v_PtcPdlInChrgSpd) ||
                         ((CSMR_ac_B.CC_SetSpeed -
                           CSMR_ac_B.TmpSignalConversionAtVeCCTR_v_CcSetSpdOu) >
                          KeCSMR_v_PtcPdlInChrgSpd))) && (VeCSMR_v_Lv2CCMinSpd <
                        (*VeCSMR_v_Lv2VehSpdBiasRound))) &&
                      ((*VeCSMR_v_Lv2VehSpdBiasRound) < VeCSMR_v_Lv2CCMaxSpd)) &&
                     (KeCSMR_b_PtcPdlInChrgVsCC))
            {
                /* Transition: '<S56>:198' */
                CSMR_ac_B.CC_SetSpeed =
                    CSMR_ac_B.TmpSignalConversionAtVeCCTR_v_CcSetSpdOu;
                CSMR_ac_B.LeCSMR_v_CCSetSpd_Delta_mph = 0.0F;

                /* Transition: '<S56>:199' */
                guard1 = true;
            }
            else if (((*VeCSMI_b_Lv2CrusAccel_out) && tmp_0) &&
                     (CSMR_ac_B.CC_SetSpeed < VeCSMR_v_Lv2CCMaxSpd))
            {
                /* Transition: '<S56>:69' */
                CSMR_ac_B.LeCSMR_v_CCSetSpd_Delta_mph =
                    CSMR_ac_B.VeCSMR_v_CCSetSpd_AccTapDelta;

                /* Transition: '<S56>:70' */
                CSMR_ac_B.VeCSMR_b_IgnoreSetIncTap = false;
                guard1 = true;
            }
            else if (((*VeCSMI_b_Lv2CrusDecel_out) &&
                      (!CSMR_ac_B.VeCSMR_b_IgnoreSetDecTap)) &&
                     (CSMR_ac_B.CC_SetSpeed > VeCSMR_v_Lv2CCMinSpd))
            {
                /* Transition: '<S56>:72' */
                CSMR_ac_B.LeCSMR_v_CCSetSpd_Delta_mph =
                    CSMR_ac_B.VeCSMR_v_CCSetSpd_DecTapDelta;

                /* Transition: '<S56>:73' */
                CSMR_ac_B.VeCSMR_b_IgnoreSetDecTap = false;
                guard1 = true;
            }
            else if ((CSMR_ac_B.CC_SetSpeed > VeCSMR_v_Lv2CCMaxSpd) &&
                     (KeCSMR_b_SpeedUnitOutOfRange))
            {
                /* Transition: '<S56>:190' */
                /* Transition: '<S56>:192' */
                CSMR_ac_B.CC_SetSpeed = VeCSMR_v_Lv2CCMaxSpd;
                CSMR_ac_B.LeCSMR_v_CCSetSpd_Delta_mph = 0.0F;
                guard1 = true;
            }
            else if ((CSMR_ac_B.CC_SetSpeed < VeCSMR_v_Lv2CCMinSpd) &&
                     (KeCSMR_b_SpeedUnitOutOfRange))
            {
                /* Transition: '<S56>:191' */
                /* Transition: '<S56>:193' */
                CSMR_ac_B.CC_SetSpeed = VeCSMR_v_Lv2CCMinSpd;
                CSMR_ac_B.LeCSMR_v_CCSetSpd_Delta_mph = 0.0F;
                guard1 = true;
            }
            else
            {
                if (tmp && (KeCSMR_b_AcceptSetTap))
                {
                    CSMR_ac_B.VeCSMR_b_IgnoreSetIncTap = false;
                    CSMR_ac_B.VeCSMR_b_IgnoreSetDecTap = false;
                }

                CSMR_ac_B.VeCSMR_t_CC_Set_Tmr += 0.025F;
                VeCSMC_b_CC_ResetAccelPdlOvrd = false;
            }
        }

        if (guard1)
        {
            /* Exit 'CeCSMR_e_CCSt_Set_SF': '<S56>:38' */
            CSMR_ac_B.VeCSMR_e_StateChartMode = CeCSMR_e_CCSt_Set_SF;
            CSMR_a_enter_atomic_CeCSMR_e_CCSt_Set_SF(VeCSMI_b_Lv2CrusAccel_out,
                VeCSMI_b_Lv2CrusDecel_out);
        }
    }

    /* End of UnitDelay: '<S125>/Unit Delay1' */
}

/* Model step function for TID1 */
FUNC(void, CSMR_CODE) CSMR_MedTED(void) /* Explicit Task: MedTED */
{
    float32 VeCSMR_v_Lv2VehSpdBiasRound;
    float32 rtb_TmpSignalConversionAtVeASLR_v_SetVeh;
    float32 rtb_TmpSignalConversionAtVeSTMR_Pct_Lv2A;
    float32 rtb_VeCSMC_v_CC_SetSpeedDelta;
    float32 tmpRead_e;
    TeCSMR_e_VehACCStat tmpRead_a;
    TeGSMR_e_Lv2PRND_Position tmpRead_2;
    TeLTIR_e_KeySts tmpRead_6;
    TePLTR_e_IncreasingSpdConst tmpRead_8;
    TePSMR_e_LV2PVSMode tmpRead_0;
    TeSTMR_e_ACCSystemSts_M182 tmpRead_c;
    TeSTMR_e_Lv2BrkPdlStat rtb_TmpSignalConversionAtVeSTMR_e_BrkPdl;
    uint8 rtb_Inc_Cntr;
    uint8 rtb_Switch1_f;
    uint8 tmpRead_h;
    boolean VeCSMI_b_Lv2CrusCancel_out;
    boolean VeCSMI_b_Lv2CrusDecel_out;
    boolean VeCSMR_b_CcInhEngage;
    boolean VeCSMR_b_Lv2CrusInhEnable;
    boolean guard1 = false;
    boolean rtb_LogicalOperator7;
    boolean rtb_TmpSignalConversionAtVeLTIR_b_Lv2Spe;
    boolean rtb_TmpSignalConversionAtVeSCMR_b_Lv2ASR;
    boolean rtb_TmpSignalConversionAtVeSCMR_b_Lv2CAN;
    boolean rtb_TmpSignalConversionAtVeSCMR_b_Lv2C_d;
    boolean rtb_TmpSignalConversionAtVeSCMR_b_Lv2C_k;
    boolean rtb_TmpSignalConversionAtVeSCMR_b_Lv2Cru;
    boolean rtb_TmpSignalConversionAtVeSCMR_b_Lv2MSR;
    boolean rtb_TmpSignalConversionAtVeSCMR_b_Lv2Pro;
    boolean rtb_TmpSignalConversionAtVeSCMR_b_Lv2_o2;
    boolean rtb_UnitDelay7;
    boolean tmpRead;
    boolean tmpRead_1;
    boolean tmpRead_3;
    boolean tmpRead_4;
    boolean tmpRead_5;
    boolean tmpRead_7;
    boolean tmpRead_9;
    boolean tmpRead_b;
    boolean tmpRead_d;
    boolean tmpRead_f;
    boolean tmpRead_g;

    /* Inport: '<Root>/VeSCMR_b_Lv2LOC_BCM_CANC' */
    (void)Rte_Read_VeSCMR_b_Lv2LOC_BCM_CANC_Value(&tmpRead_g);

    /* Inport: '<Root>/VeSCMR_b_Lv2CANBusOff_CANC2' */
    (void)Rte_Read_VeSCMR_b_Lv2CANBusOff_CANC2_Value(&tmpRead_b);

    /* Inport: '<Root>/VePLTR_e_ProxiIncreasingSpdCnst' */
    (void)Rte_Read_VePLTR_e_ProxiIncreasingSpdCnst_Value(&tmpRead_8);

    /* Inport: '<Root>/VeSCMR_b_Lv2LOC_BSM_CANC' */
    (void)Rte_Read_VeSCMR_b_Lv2LOC_BSM_CANC_Value(&tmpRead_1);

    /* Inport: '<Root>/VeLTIR_b_Lv2SCCM_CRS_CTRL_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2SCCM_CRS_CTRL_FA_Value
        ((&(VeCSMI_b_Lv2SCCM_CRS_CTRLFA)));

    /* Inport: '<Root>/VeSRAR_b_InhibitCruise' */
    (void)Rte_Read_VeSRAR_b_InhibitCruise_Value((&(VeCSMI_b_InhibitCruise)));

    /* Inport: '<Root>/VeSCMR_b_Lv2CrusOnOff' */
    (void)Rte_Read_VeSCMR_b_Lv2CrusOnOff_Value(&tmpRead);

    /* Inport: '<Root>/VeCCTR_e_Lv1CrusCanState' */
    (void)Rte_Read_VeCCTR_e_Lv1CrusCanState_Value(&rtb_Inc_Cntr);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/CSMR_MedTEB'
     */
    /* SignalConversion generated from: '<S1>/VeSSMR_v_VehSpd' incorporates:
     *  Inport: '<Root>/VeSSMR_v_VehSpd'
     */
    (void)Rte_Read_VeSSMR_v_VehSpd_Value((&(VeCSMI_v_Lv2VehSpdBias)));

    /* SignalConversion generated from: '<S1>/VeLTIR_b_Lv2SpeedUnit' incorporates:
     *  Inport: '<Root>/VeLTIR_b_Lv2SpeedUnit'
     */
    (void)Rte_Read_VeLTIR_b_Lv2SpeedUnit_Value
        (&rtb_TmpSignalConversionAtVeLTIR_b_Lv2Spe);

    /* SignalConversion generated from: '<S1>/VeSCMR_b_Lv2CANBusOff_CANC' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2CANBusOff_CANC'
     */
    (void)Rte_Read_VeSCMR_b_Lv2CANBusOff_CANC_Value
        (&rtb_TmpSignalConversionAtVeSCMR_b_Lv2CAN);

    /* SignalConversion generated from: '<S1>/VeSCMR_b_Lv2CrusAccel' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2CrusAccel'
     */
    (void)Rte_Read_VeSCMR_b_Lv2CrusAccel_Value
        (&rtb_TmpSignalConversionAtVeSCMR_b_Lv2Cru);

    /* SignalConversion generated from: '<S1>/VeSCMR_b_Lv2CrusDecel' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2CrusDecel'
     */
    (void)Rte_Read_VeSCMR_b_Lv2CrusDecel_Value
        (&rtb_TmpSignalConversionAtVeSCMR_b_Lv2C_k);

    /* SignalConversion generated from: '<S1>/VeSCMR_b_Lv2CrusCancel' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2CrusCancel'
     */
    (void)Rte_Read_VeSCMR_b_Lv2CrusCancel_Value
        (&rtb_TmpSignalConversionAtVeSCMR_b_Lv2_o2);

    /* SignalConversion generated from: '<S1>/VeSCMR_b_Lv2CrusResume' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2CrusResume'
     */
    (void)Rte_Read_VeSCMR_b_Lv2CrusResume_Value
        (&rtb_TmpSignalConversionAtVeSCMR_b_Lv2C_d);

    /* SignalConversion generated from: '<S1>/VeSTMR_Pct_Lv2AccelPdlPos' incorporates:
     *  Inport: '<Root>/VeSTMR_Pct_Lv2AccelPdlPos'
     */
    (void)Rte_Read_VeSTMR_Pct_Lv2AccelPdlPos_Value
        (&rtb_TmpSignalConversionAtVeSTMR_Pct_Lv2A);

    /* SignalConversion generated from: '<S1>/VeSCMR_b_Lv2ASRActive' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2ASRActive'
     */
    (void)Rte_Read_VeSCMR_b_Lv2ASRActive_Value
        (&rtb_TmpSignalConversionAtVeSCMR_b_Lv2ASR);

    /* SignalConversion generated from: '<S1>/VeSCMR_b_Lv2MSRActive' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2MSRActive'
     */
    (void)Rte_Read_VeSCMR_b_Lv2MSRActive_Value
        (&rtb_TmpSignalConversionAtVeSCMR_b_Lv2MSR);

    /* SignalConversion generated from: '<S1>/VeSTMR_e_BrkPdlStat' incorporates:
     *  Inport: '<Root>/VeSTMR_e_BrkPdlStat'
     */
    (void)Rte_Read_VeSTMR_e_BrkPdlStat_Value
        (&rtb_TmpSignalConversionAtVeSTMR_e_BrkPdl);

    /* SignalConversion generated from: '<S1>/VeASLR_v_SetVehSpdLimKPH' incorporates:
     *  Inport: '<Root>/VeASLR_v_SetVehSpdLimKPH'
     */
    (void)Rte_Read_VeASLR_v_SetVehSpdLimKPH_Value
        (&rtb_TmpSignalConversionAtVeASLR_v_SetVeh);

    /* SignalConversion generated from: '<S1>/VeCCTR_b_CcEngaged' incorporates:
     *  Inport: '<Root>/VeCCTR_b_CcEngaged'
     */
    (void)Rte_Read_VeCCTR_b_CcEngaged_Value
        (&CSMR_ac_B.TmpSignalConversionAtVeCCTR_b_CcEngagedO);

    /* SignalConversion generated from: '<S1>/VeCCTR_v_CcSetSpd' incorporates:
     *  Inport: '<Root>/VeCCTR_v_CcSetSpd'
     */
    (void)Rte_Read_VeCCTR_v_CcSetSpd_Value
        (&CSMR_ac_B.TmpSignalConversionAtVeCCTR_v_CcSetSpdOu);

    /* SignalConversion generated from: '<S1>/VeSCMR_b_Lv2ProxiSpdLimiter' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2ProxiSpdLimiter'
     */
    (void)Rte_Read_VeSCMR_b_Lv2ProxiSpdLimiter_Value
        (&rtb_TmpSignalConversionAtVeSCMR_b_Lv2Pro);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CSMR_FastTEF_StartCheckpoint'
     */
    /* FunctionCaller: '<S6>/CSMR_FastTEF_StartCheckpoint' */
    Rte_Call_CSMR_FastTEF_StartCheckpoint_CheckpointReached();

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CSMI_Inputs'
     */
    /* Switch: '<S5>/Switch1' incorporates:
     *  Constant: '<S164>/Calib'
     */
    if (KeCSMR_b_OvrdInhCruise)
    {
        /* Switch: '<S5>/Switch1' incorporates:
         *  Constant: '<S159>/Calib'
         *  Inport: '<Root>/VeSRAR_b_InhibitCruise'
         */
        VeCSMI_b_InhibitCruise = KeCSMR_b_InhCruiseVal;
    }

    /* End of Switch: '<S5>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S5>/Disable_Monitoring' */
    /* Logic: '<S148>/Logical4' incorporates:
     *  Logic: '<S148>/Logical5'
     *  Logic: '<S182>/NOT'
     *  Logic: '<S5>/Logical1'
     *  Logic: '<S5>/Logical2'
     */
    VeCSMI_b_LOC = (((tmpRead_g || rtb_TmpSignalConversionAtVeSCMR_b_Lv2CAN) ||
                     (rtb_TmpSignalConversionAtVeSCMR_b_Lv2CAN || tmpRead_1)) ||
                    tmpRead_b);

    /* Logic: '<S182>/OR1' incorporates:
     *  Logic: '<S182>/OR'
     */
    VeCSMI_b_DisblMntr_LOC = ((VeCSMI_b_LOC) || ((VeCSMI_b_LOC) &&
        (VeCSMI_b_DisblMntr_LOC)));

    /* Logic: '<S148>/Logical3' incorporates:
     *  Constant: '<S181>/Calib'
     */
    VeCSMI_b_DisblMntr = ((KeCSMR_b_DisblMntr) || (VeCSMI_b_DisblMntr_LOC));

    /* End of Outputs for SubSystem: '<S5>/Disable_Monitoring' */

    /* Switch: '<S5>/Switch4' incorporates:
     *  Constant: '<S165>/Calib'
     */
    if (KeCSMR_b_OvrdSCCM_CRS_CTRLFA)
    {
        /* Switch: '<S5>/Switch4' incorporates:
         *  Constant: '<S166>/Calib'
         *  Inport: '<Root>/VeLTIR_b_Lv2SCCM_CRS_CTRL_FA'
         */
        VeCSMI_b_Lv2SCCM_CRS_CTRLFA = KeCSMR_b_SCCM_CRS_CTRLFAVal;
    }

    /* End of Switch: '<S5>/Switch4' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeLTIR_b_Lv2SpeedUnit_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2SpeedUnit_FA_Value(&tmpRead_f);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/CSMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CSMI_Inputs'
     */
    /* Switch: '<S5>/Switch11' */
    if (tmpRead_f)
    {
        /* Switch: '<S5>/Switch11' incorporates:
         *  Constant: '<S168>/Calib'
         *  Switch: '<S5>/Switch12'
         *  UnitDelay: '<S5>/Unit Delay3'
         */
        VeCSMI_b_SpeedUnit_Inter = ((!KeCSMR_b_SpeedUnitDfltEnbl) &&
            (CSMR_ac_DW.VeCSMI_b_SpeedUnt_Prev));
    }
    else
    {
        /* Switch: '<S5>/Switch11' */
        VeCSMI_b_SpeedUnit_Inter = rtb_TmpSignalConversionAtVeLTIR_b_Lv2Spe;
    }

    /* End of Switch: '<S5>/Switch11' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VePLTR_Pct_ProxiSpdomtrTol' */
    (void)Rte_Read_VePLTR_Pct_ProxiSpdomtrTol_Value(&VeCSMR_v_Lv2VehSpdBiasRound);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/CSMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CSMI_Inputs'
     */
    /* Switch: '<S147>/Switch11' incorporates:
     *  Switch: '<S147>/Switch1'
     *  Switch: '<S147>/Switch10'
     */
    if (VeCSMI_b_SpeedUnit_Inter)
    {
        /* Switch: '<S147>/Switch11' incorporates:
         *  Constant: '<S147>/ConstantValue'
         *  Product: '<S147>/Product1'
         */
        VeCSMI_v_Lv2VehSpdBias = 0.621359229F * VeCSMI_v_Lv2VehSpdBias;

        /* Switch: '<S147>/Switch1' incorporates:
         *  Constant: '<S180>/Calib'
         */
        VeCSMR_v_Lv2CCMinSpdResume = KeCSMR_v_Lv2CCMphMin_Resume;

        /* Switch: '<S147>/Switch10' incorporates:
         *  Constant: '<S178>/Calib'
         */
        VeCSMR_v_Lv2CCMaxSpd = KeCSMR_v_Lv2CCMphMax;
    }
    else
    {
        /* Switch: '<S147>/Switch1' incorporates:
         *  Constant: '<S177>/Calib'
         */
        VeCSMR_v_Lv2CCMinSpdResume = KeCSMR_v_Lv2CCKphMin_Resume;

        /* Switch: '<S147>/Switch10' incorporates:
         *  Constant: '<S175>/Calib'
         */
        VeCSMR_v_Lv2CCMaxSpd = KeCSMR_v_Lv2CCKphMax;
    }

    /* End of Switch: '<S147>/Switch11' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeDTRR_b_EngTrqEnblRqDAS' */
    (void)Rte_Read_VeDTRR_b_EngTrqEnblRqDAS_Value((&(VeCSMI_b_EngTrqEnblRq)));

    /* Inport: '<Root>/VeSSMR_b_VehSpdFA' */
    (void)Rte_Read_VeSSMR_b_VehSpdFA_Value((&(VeCSMI_b_VehSpdFA)));

    /* Inport: '<Root>/VeSCMR_e_Lv2ACC_SystemSts' */
    (void)Rte_Read_VeSCMR_e_Lv2ACC_SystemSts_Value(&tmpRead_c);

    /* Inport: '<Root>/VeSCMR_e_Lv2VehACC_Stat' */
    (void)Rte_Read_VeSCMR_e_Lv2VehACC_Stat_Value(&tmpRead_a);

    /* Inport: '<Root>/VeLTIR_b_Lv2KeySts_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2KeySts_FA_Value(&tmpRead_7);

    /* Inport: '<Root>/VeLTIR_e_Lv2KeySts' */
    (void)Rte_Read_VeLTIR_e_Lv2KeySts_Value(&tmpRead_6);

    /* Inport: '<Root>/VeDFIR_b_DiagSystemDsbl' */
    (void)Rte_Read_VeDFIR_b_DiagSystemDsbl_Value(&tmpRead_5);

    /* Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe' */
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value(&tmpRead_4);

    /* Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl' */
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value(&tmpRead_3);

    /* Inport: '<Root>/VeSCMR_b_Lv2ACC_OnOff' */
    (void)Rte_Read_VeSCMR_b_Lv2ACC_OnOff_Value((&(VeCSMI_b_ACC_OnOff)));

    /* Inport: '<Root>/VeSCMR_b_Lv2ASLOnOffSts' */
    (void)Rte_Read_VeSCMR_b_Lv2ASLOnOffSts_Value((&(VeCSMI_b_ASLOnOffSts)));

    /* Inport: '<Root>/VeSSMR_b_CancelCrus' */
    (void)Rte_Read_VeSSMR_b_CancelCrus_Value((&(VeCSMI_b_CancelCruis)));

    /* Inport: '<Root>/VeCCTR_b_CcEnabled' */
    (void)Rte_Read_VeCCTR_b_CcEnabled_Value((&(VeCSMI_b_Lv2Lv1CcEnabled)));

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/CSMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CSMI_Inputs'
     */
    /* Rounding: '<S147>/Rounding2' incorporates:
     *  Constant: '<S147>/ConstantValue1'
     *  Constant: '<S147>/ConstantValue4'
     *  DataTypeConversion: '<S1>/Data Type Conversion1'
     *  Inport: '<Root>/VePLTR_e_ProxiIncreasingSpdCnst'
     *  Product: '<S147>/Product'
     *  Product: '<S147>/Product2'
     *  Sum: '<S147>/Sum'
     *  Sum: '<S147>/Sum2'
     */
    VeCSMI_v_Lv2VehSpdRound = roundf((((0.01F * VeCSMR_v_Lv2VehSpdBiasRound) +
        1.0F) * VeCSMI_v_Lv2VehSpdBias) + ((float32)tmpRead_8));

    /* Switch: '<S147>/Switch2' incorporates:
     *  Constant: '<S174>/Calib'
     */
    if (KeCSMR_b_BiasVehSpd)
    {
        /* Switch: '<S147>/Switch2' */
        VeCSMR_v_Lv2VehSpdBiasRound = VeCSMI_v_Lv2VehSpdRound;
    }
    else
    {
        /* Switch: '<S147>/Switch2' */
        VeCSMR_v_Lv2VehSpdBiasRound = VeCSMI_v_Lv2VehSpdBias;
    }

    /* End of Switch: '<S147>/Switch2' */

    /* Switch: '<S147>/Switch9' */
    if (VeCSMI_b_SpeedUnit_Inter)
    {
        /* Switch: '<S147>/Switch9' incorporates:
         *  Constant: '<S179>/Calib'
         */
        VeCSMR_v_Lv2CCMinSpd = KeCSMR_v_Lv2CCMphMin;
    }
    else
    {
        /* Switch: '<S147>/Switch9' incorporates:
         *  Constant: '<S176>/Calib'
         */
        VeCSMR_v_Lv2CCMinSpd = KeCSMR_v_Lv2CCKphMin;
    }

    /* End of Switch: '<S147>/Switch9' */

    /* Switch: '<S5>/Switch2' incorporates:
     *  Constant: '<S162>/Calib'
     */
    if (KeCSMR_b_OvrdCancelCrus)
    {
        /* Switch: '<S5>/Switch2' incorporates:
         *  Constant: '<S167>/Calib'
         *  Inport: '<Root>/VeSSMR_b_CancelCrus'
         */
        VeCSMI_b_CancelCruis = KeCSMR_b_SSMRCancelCrusVal;
    }

    /* End of Switch: '<S5>/Switch2' */

    /* Switch: '<S5>/Switch6' incorporates:
     *  Constant: '<S161>/Calib'
     */
    if (KeCSMR_b_OvrdASLOnOff)
    {
        /* Switch: '<S5>/Switch6' incorporates:
         *  Constant: '<S154>/Calib'
         *  Inport: '<Root>/VeSCMR_b_Lv2ASLOnOffSts'
         */
        VeCSMI_b_ASLOnOffSts = KeCSMR_b_ASLOnOffVal;
    }

    /* End of Switch: '<S5>/Switch6' */

    /* Switch: '<S5>/Switch3' incorporates:
     *  Constant: '<S160>/Calib'
     */
    if (KeCSMR_b_OvrdACCOnOff)
    {
        /* Switch: '<S5>/Switch3' incorporates:
         *  Constant: '<S153>/Calib'
         *  Inport: '<Root>/VeSCMR_b_Lv2ACC_OnOff'
         */
        VeCSMI_b_ACC_OnOff = KeCSMR_b_ACCOnOffVal;
    }

    /* End of Switch: '<S5>/Switch3' */

    /* Logic: '<S173>/Logical1' */
    VeCSMI_b_DiagReset = ((tmpRead_3 || tmpRead_4) || tmpRead_5);

    /* Logic: '<S173>/Logical4' incorporates:
     *  Constant: '<S183>/Constant'
     *  Inport: '<Root>/VeLTIR_e_Lv2KeySts'
     *  Logic: '<S173>/Logical9'
     *  RelationalOperator: '<S173>/Comparison3'
     */
    VeCSMI_b_KeyOff = ((((uint32)tmpRead_6) == CeLTIR_e_IGN_LK) && (!tmpRead_7));

    /* Logic: '<S173>/Logical5' */
    VeCSMI_b_Reset_Dtc = ((VeCSMI_b_DiagReset) || (VeCSMI_b_KeyOff));

    /* Switch: '<S5>/Switch5' incorporates:
     *  Constant: '<S163>/Calib'
     */
    if (KeCSMR_b_OvrdCcEnabled)
    {
        /* Switch: '<S5>/Switch5' incorporates:
         *  Constant: '<S156>/Calib'
         *  Inport: '<Root>/VeCCTR_b_CcEnabled'
         */
        VeCSMI_b_Lv2Lv1CcEnabled = KeCSMR_b_CcEnabledVal;
    }

    /* End of Switch: '<S5>/Switch5' */

    /* Logic: '<S5>/Logical' incorporates:
     *  Constant: '<S150>/Constant'
     *  Constant: '<S151>/Constant'
     *  Constant: '<S152>/Calib'
     *  Inport: '<Root>/VeSCMR_e_Lv2ACC_SystemSts'
     *  Inport: '<Root>/VeSCMR_e_Lv2VehACC_Stat'
     *  RelationalOperator: '<S5>/Comparison1'
     *  RelationalOperator: '<S5>/Comparison5'
     *  Selector: '<S5>/Selector'
     */
    VeCSMI_b_Lv2ACC_Enabled = ((((uint32)tmpRead_a) != CeCSMR_e_Lv2Absent) &&
        (((uint32)KaCSMR_e_ACCSystemSts_Map[(tmpRead_c)]) != CeCSMR_e_Off));

    /* Switch: '<S5>/Switch7' incorporates:
     *  Constant: '<S169>/Calib'
     */
    if (KeCSMR_b_VehSpdFAEnabled)
    {
        /* Switch: '<S5>/Switch7' incorporates:
         *  Constant: '<S170>/Calib'
         *  Inport: '<Root>/VeSSMR_b_VehSpdFA'
         */
        VeCSMI_b_VehSpdFA = KeCSMR_b_VehSpdFAVal;
    }

    /* End of Switch: '<S5>/Switch7' */

    /* Switch: '<S5>/Switch8' incorporates:
     *  Constant: '<S157>/Calib'
     */
    if (KeCSMR_b_EngTrqEnblRqEnabled)
    {
        /* Switch: '<S5>/Switch8' incorporates:
         *  Constant: '<S158>/Calib'
         *  Inport: '<Root>/VeDTRR_b_EngTrqEnblRqDAS'
         */
        VeCSMI_b_EngTrqEnblRq = KeCSMR_b_EngTrqEnblRqVal;
    }

    /* End of Switch: '<S5>/Switch8' */

    /* Logic: '<S172>/OR1' incorporates:
     *  Logic: '<S171>/AND'
     *  Logic: '<S171>/OR1'
     *  Logic: '<S172>/NOT'
     *  Logic: '<S172>/OR'
     *  Logic: '<S5>/Logical3'
     *  UnitDelay: '<S171>/Unit Delay'
     *  UnitDelay: '<S172>/Unit Delay1'
     *  UnitDelay: '<S5>/Unit Delay1'
     */
    CSMR_ac_DW.VeCSMR_b_Lv2CrusOnOffArb_prev =
        (((CSMR_ac_DW.VeCSMR_b_ASLEnabled_Prev) && tmpRead) || ((tmpRead ||
           (!CSMR_ac_DW.VeCSMR_b_Lv2CrusOnOffEdge_prev)) &&
          (CSMR_ac_DW.VeCSMR_b_Lv2CrusOnOffArb_prev)));

    /* Switch: '<S5>/Switch10' incorporates:
     *  Constant: '<S155>/Calib'
     */
    if (KeCSMR_b_CCInstantActivationEnable)
    {
        /* Switch: '<S5>/Switch10' */
        VeCSMI_b_Lv2CrusOnOff = tmpRead;
    }
    else
    {
        /* Switch: '<S5>/Switch10' incorporates:
         *  Switch: '<S5>/Switch9'
         *  UnitDelay: '<S172>/Unit Delay1'
         */
        VeCSMI_b_Lv2CrusOnOff = ((!CSMR_ac_DW.VeCSMR_b_Lv2CrusOnOffArb_prev) &&
            tmpRead);
    }

    /* End of Switch: '<S5>/Switch10' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeCCTR_b_CcInhEngage' */
    (void)Rte_Read_VeCCTR_b_CcInhEngage_Value(&VeCSMR_b_CcInhEngage);

    /* Inport: '<Root>/VeASLR_b_ASLEnabled' */
    (void)Rte_Read_VeASLR_b_ASLEnabled_Value(&tmpRead_d);

    /* Inport: '<Root>/VeLTIR_b_Lv2ASR_MSRActv_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2ASR_MSRActv_FA_Value(&rtb_LogicalOperator7);

    /* Inport: '<Root>/VeSCMR_b_Lv2Crus_FailSts' */
    (void)Rte_Read_VeSCMR_b_Lv2Crus_FailSts_Value(&VeCSMI_b_Lv2CrusDecel_out);

    /* Inport: '<Root>/VeSTMR_b_Lv2CruiseTrqChkFailed' */
    (void)Rte_Read_VeSTMR_b_Lv2CruiseTrqChkFailed_Value
        (&VeCSMI_b_Lv2CrusCancel_out);

    /* Inport: '<Root>/VeCCTR_b_Lv1CrusOffReq' */
    (void)Rte_Read_VeCCTR_b_Lv1CrusOffReq_Value(&rtb_UnitDelay7);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/CSMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CSMI_Inputs'
     */
    /* Update for UnitDelay: '<S5>/Unit Delay3' */
    CSMR_ac_DW.VeCSMI_b_SpeedUnt_Prev = rtb_TmpSignalConversionAtVeLTIR_b_Lv2Spe;

    /* Update for UnitDelay: '<S171>/Unit Delay' */
    CSMR_ac_DW.VeCSMR_b_Lv2CrusOnOffEdge_prev = tmpRead;

    /* Update for UnitDelay: '<S5>/Unit Delay1' incorporates:
     *  UnitDelay: '<S5>/Unit Delay'
     */
    CSMR_ac_DW.VeCSMR_b_ASLEnabled_Prev = CSMR_ac_DW.VeCSMR_b_Lv1ASLEnabled_Prev;

    /* Update for UnitDelay: '<S5>/Unit Delay' */
    CSMR_ac_DW.VeCSMR_b_Lv1ASLEnabled_Prev = tmpRead_d;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CSMC_SUBSYSTEM'
     */
    /* UnitDelay: '<S3>/Unit Delay' */
    VeCSMC_b_LV2CrusOffArb = CSMR_ac_DW.VeCSMC_b_LV2CrusOff_Prev;

    /* Logic: '<S9>/Logical8' */
    VeCSMC_b_Lv2CrusOffReq = (((((rtb_UnitDelay7 || (VeCSMI_b_InhibitCruise)) ||
        VeCSMI_b_Lv2CrusCancel_out) || VeCSMI_b_Lv2CrusDecel_out) ||
        (VeCSMI_b_Lv2ACC_Enabled)) || (VeCSMC_b_LV2CrusOffArb));

    /* Logic: '<S9>/Logical2' incorporates:
     *  Constant: '<S22>/Constant'
     *  Constant: '<S23>/Calib'
     *  Constant: '<S24>/Calib'
     *  Logic: '<S9>/Logical1'
     *  Logic: '<S9>/Logical3'
     *  RelationalOperator: '<S9>/Comparison5'
     */
    VeCSMR_b_CcInhEngage = (((((rtb_LogicalOperator7 ||
        rtb_TmpSignalConversionAtVeSCMR_b_Lv2ASR) ||
        rtb_TmpSignalConversionAtVeSCMR_b_Lv2MSR) || (VeCSMR_b_CcInhEngage &&
        (KeCSMR_b_Lv1CcInhEngage))) || (((uint32)
        rtb_TmpSignalConversionAtVeSTMR_e_BrkPdl) != CeSTMR_e_BrkNotAppld)) &&
                            (KeCSMR_b_ASRMSRActive));

    /* Outputs for Atomic SubSystem: '<S3>/Dtrmn_OnOff_Mode' */
    /* Switch: '<S119>/Switch1' incorporates:
     *  Logic: '<S16>/Logical16'
     *  Logic: '<S16>/Logical18'
     *  UnitDelay: '<S16>/Unit Delay1'
     */
    if ((VeCSMI_b_Lv2CrusOnOff) && (!CSMR_ac_DW.VeCSMC_b_SWOnOffSts_Prev))
    {
        /* Switch: '<S119>/Switch1' incorporates:
         *  Constant: '<S121>/Calib'
         */
        rtb_Switch1_f = KeCSMR_Cnt_ONModStValue;
    }
    else
    {
        /* Switch: '<S119>/Switch1' incorporates:
         *  Constant: '<S122>/Calib'
         */
        rtb_Switch1_f = KeCSMR_Cnt_OtherModValue;
    }

    /* End of Switch: '<S119>/Switch1' */

    /* Switch: '<S16>/Switch' incorporates:
     *  Constant: '<S123>/Calib'
     */
    if (KeCSMR_b_ONOFFModBCMOvrd)
    {
        /* Switch: '<S16>/Switch' incorporates:
         *  Constant: '<S121>/Calib'
         */
        VeCSMC_b_Lv2CcOnOffState = KeCSMR_Cnt_ONModStValue;
    }
    else
    {
        /* Switch: '<S16>/Switch' incorporates:
         *  Constant: '<S120>/Calib'
         */
        VeCSMC_b_Lv2CcOnOffState = KeCSMR_Cnt_OFFModStValue;
    }

    /* End of Switch: '<S16>/Switch' */

    /* RelationalOperator: '<S16>/RelationalOperator1' */
    VeCSMC_b_Lv2CcOnOffPressed2 = (rtb_Switch1_f == VeCSMC_b_Lv2CcOnOffState);

    /* Logic: '<S16>/LogicalOperator1' incorporates:
     *  Logic: '<S16>/LogicalOperator2'
     *  UnitDelay: '<S16>/Unit Delay3'
     */
    VeCSMC_b_Lv2CcOnPressed = ((!CSMR_ac_DW.VeCSMC_b_Lv2CcOnOffPressed2_Prev) &&
        (VeCSMC_b_Lv2CcOnOffPressed2));

    /* Logic: '<S16>/logic' incorporates:
     *  UnitDelay: '<S3>/Unit Delay1'
     */
    VeCSMC_b_Lv2CcOffInput1 = ((VeCSMC_b_Lv2CcOnPressed) &&
        (VeCSMC_b_Lv2CCEnabled));

    /* Logic: '<S16>/CC_OFF_MODE' */
    VeCSMC_b_Lv2CcOffM = ((VeCSMC_b_Lv2CrusOffReq) || (VeCSMC_b_Lv2CcOffInput1));

    /* Logic: '<S16>/LogicalOperator7' incorporates:
     *  UnitDelay: '<S16>/Unit Delay2'
     */
    rtb_LogicalOperator7 = !VeCSMC_b_Lv2CcOnOffPressed1;

    /* RelationalOperator: '<S16>/RelationalOperator' incorporates:
     *  Constant: '<S121>/Calib'
     */
    VeCSMC_b_Lv2CcOnOffPressed1 = (rtb_Switch1_f == KeCSMR_Cnt_ONModStValue);

    /* Logic: '<S16>/LogicalOperator6' */
    VeCSMC_b_Lv2CcOnInput1 = (rtb_LogicalOperator7 &&
        (VeCSMC_b_Lv2CcOnOffPressed1));

    /* Logic: '<S16>/CC_ON_MODE' incorporates:
     *  Logic: '<S16>/LogicalOperator13'
     *  Logic: '<S16>/LogicalOperator3'
     *  UnitDelay: '<S3>/Unit Delay1'
     */
    VeCSMC_b_Lv2CcOnM = (((VeCSMC_b_Lv2CcOnInput1) && (!VeCSMC_b_Lv2CCEnabled)) &&
                         (!VeCSMC_b_Lv2CrusOffReq));

    /* Logic: '<S124>/OR1' incorporates:
     *  Logic: '<S124>/NOT'
     *  Logic: '<S124>/OR'
     *  UnitDelay: '<S124>/Unit Delay1'
     */
    CSMR_ac_DW.VeCSMC_b_Lv2CcOnMode_prev = ((VeCSMC_b_Lv2CcOnM) ||
        ((!VeCSMC_b_Lv2CcOffM) && (CSMR_ac_DW.VeCSMC_b_Lv2CcOnMode_prev)));

    /* Logic: '<S125>/OR1' incorporates:
     *  Logic: '<S125>/NOT'
     *  Logic: '<S125>/OR'
     *  UnitDelay: '<S125>/Unit Delay1'
     */
    CSMR_ac_DW.VeCSMC_b_Lv2CcOffMode_prev = ((VeCSMC_b_Lv2CcOffM) ||
        ((!VeCSMC_b_Lv2CcOnM) && (CSMR_ac_DW.VeCSMC_b_Lv2CcOffMode_prev)));

    /* Update for UnitDelay: '<S16>/Unit Delay3' */
    CSMR_ac_DW.VeCSMC_b_Lv2CcOnOffPressed2_Prev = VeCSMC_b_Lv2CcOnOffPressed2;

    /* Update for UnitDelay: '<S16>/Unit Delay1' */
    CSMR_ac_DW.VeCSMC_b_SWOnOffSts_Prev = VeCSMI_b_Lv2CrusOnOff;

    /* End of Outputs for SubSystem: '<S3>/Dtrmn_OnOff_Mode' */

    /* Outputs for Atomic SubSystem: '<S13>/LV2_Turn_On_Delay_Time' */
    /* Logic: '<S81>/OR1' incorporates:
     *  Logic: '<S86>/OR1'
     */
    VeCSMI_b_Lv2CrusDecel_out = !rtb_TmpSignalConversionAtVeSCMR_b_Lv2Cru;

    /* End of Outputs for SubSystem: '<S13>/LV2_Turn_On_Delay_Time' */

    /* Logic: '<S81>/AND' incorporates:
     *  Logic: '<S81>/OR1'
     *  UnitDelay: '<S81>/Unit Delay'
     */
    rtb_LogicalOperator7 = (VeCSMI_b_Lv2CrusDecel_out &&
                            (CSMR_ac_DW.VeCSMI_b_Lv2CrusAccel_prev));

    /* Outputs for Atomic SubSystem: '<S13>/LV2_Turn_On_Delay_Time' */
    /* Switch: '<S86>/Switch1' incorporates:
     *  Constant: '<S64>/Calib'
     *  Constant: '<S65>/Calib'
     *  Constant: '<S86>/ConstantValue1'
     *  Logic: '<S100>/AND1'
     *  Logic: '<S100>/OR2'
     *  Logic: '<S86>/OR'
     *  MinMax: '<S86>/Minimum'
     *  Sum: '<S86>/Summation'
     *  UnitDelay: '<S100>/Unit Delay'
     *  UnitDelay: '<S86>/Unit Delay1'
     */
    if (VeCSMI_b_Lv2CrusDecel_out || (rtb_TmpSignalConversionAtVeSCMR_b_Lv2Cru &&
         (!CSMR_ac_DW.VeCSMC_b_CC_Set_Inc_Dly_prev)))
    {
        CSMR_ac_DW.VeCSMC_t_CC_Set_Inc_Dly_prev = 0.0F;
    }
    else
    {
        CSMR_ac_DW.VeCSMC_t_CC_Set_Inc_Dly_prev = fminf(KeCSMR_t_HoldTimeAcc,
            KeCSMR_t_CSMR_dt + CSMR_ac_DW.VeCSMC_t_CC_Set_Inc_Dly_prev);
    }

    /* End of Switch: '<S86>/Switch1' */

    /* Logic: '<S86>/AND' incorporates:
     *  Constant: '<S65>/Calib'
     *  RelationalOperator: '<S86>/GreaterThan'
     *  UnitDelay: '<S86>/Unit Delay1'
     */
    VeCSMC_b_CC_Set_IncHi = (rtb_TmpSignalConversionAtVeSCMR_b_Lv2Cru &&
        (CSMR_ac_DW.VeCSMC_t_CC_Set_Inc_Dly_prev >= KeCSMR_t_HoldTimeAcc));

    /* Update for UnitDelay: '<S100>/Unit Delay' */
    CSMR_ac_DW.VeCSMC_b_CC_Set_Inc_Dly_prev =
        rtb_TmpSignalConversionAtVeSCMR_b_Lv2Cru;

    /* End of Outputs for SubSystem: '<S13>/LV2_Turn_On_Delay_Time' */

    /* Outputs for Atomic SubSystem: '<S13>/LV2_Turn_On_Delay_Time1' */
    /* Logic: '<S82>/OR1' incorporates:
     *  Logic: '<S87>/OR1'
     */
    VeCSMI_b_Lv2CrusCancel_out = !rtb_TmpSignalConversionAtVeSCMR_b_Lv2C_k;

    /* End of Outputs for SubSystem: '<S13>/LV2_Turn_On_Delay_Time1' */

    /* Logic: '<S82>/AND' incorporates:
     *  Logic: '<S82>/OR1'
     *  UnitDelay: '<S82>/Unit Delay'
     */
    VeCSMI_b_Lv2CrusDecel_out = (VeCSMI_b_Lv2CrusCancel_out &&
        (CSMR_ac_DW.VeCSMI_b_Lv2CrusDecel_prev));

    /* Outputs for Atomic SubSystem: '<S13>/LV2_Turn_On_Delay_Time1' */
    /* Switch: '<S87>/Switch1' incorporates:
     *  Constant: '<S64>/Calib'
     *  Constant: '<S66>/Calib'
     *  Constant: '<S87>/ConstantValue1'
     *  Logic: '<S101>/AND1'
     *  Logic: '<S101>/OR2'
     *  Logic: '<S87>/OR'
     *  MinMax: '<S87>/Minimum'
     *  Sum: '<S87>/Summation'
     *  UnitDelay: '<S101>/Unit Delay'
     *  UnitDelay: '<S87>/Unit Delay1'
     */
    if (VeCSMI_b_Lv2CrusCancel_out || (rtb_TmpSignalConversionAtVeSCMR_b_Lv2C_k &&
         (!CSMR_ac_DW.VeCSMC_b_CC_Set_Dec_Dly_prev)))
    {
        CSMR_ac_DW.VeCSMC_t_CC_Set_Dec_Dly_prev = 0.0F;
    }
    else
    {
        CSMR_ac_DW.VeCSMC_t_CC_Set_Dec_Dly_prev = fminf(KeCSMR_t_HoldTimeDec,
            KeCSMR_t_CSMR_dt + CSMR_ac_DW.VeCSMC_t_CC_Set_Dec_Dly_prev);
    }

    /* End of Switch: '<S87>/Switch1' */
    /* End of Outputs for SubSystem: '<S13>/LV2_Turn_On_Delay_Time1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeSTMR_M_Lv2AccelPdlWhlTrq' */
    (void)Rte_Read_VeSTMR_M_Lv2AccelPdlWhlTrq_Value
        (&rtb_VeCSMC_v_CC_SetSpeedDelta);

    /* Inport: '<Root>/VeSTMR_M_Lv2PtcWhlCcTrqReq' */
    (void)Rte_Read_VeSTMR_M_Lv2PtcWhlCcTrqReq_Value(&tmpRead_e);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/CSMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CSMC_SUBSYSTEM'
     */
    /* Outputs for Atomic SubSystem: '<S13>/LV2_Turn_On_Delay_Time1' */
    /* Logic: '<S87>/AND' incorporates:
     *  Constant: '<S66>/Calib'
     *  RelationalOperator: '<S87>/GreaterThan'
     *  UnitDelay: '<S87>/Unit Delay1'
     */
    VeCSMC_b_CC_Set_DecHi = (rtb_TmpSignalConversionAtVeSCMR_b_Lv2C_k &&
        (CSMR_ac_DW.VeCSMC_t_CC_Set_Dec_Dly_prev >= KeCSMR_t_HoldTimeDec));

    /* Update for UnitDelay: '<S101>/Unit Delay' */
    CSMR_ac_DW.VeCSMC_b_CC_Set_Dec_Dly_prev =
        rtb_TmpSignalConversionAtVeSCMR_b_Lv2C_k;

    /* End of Outputs for SubSystem: '<S13>/LV2_Turn_On_Delay_Time1' */

    /* Logic: '<S84>/AND1' incorporates:
     *  Logic: '<S84>/OR2'
     *  UnitDelay: '<S84>/Unit Delay'
     */
    VeCSMI_b_Lv2CrusCancel_out = (rtb_TmpSignalConversionAtVeSCMR_b_Lv2_o2 &&
        (!CSMR_ac_DW.VeCSMI_b_Lv2CrusCancel_prev));

    /* Outputs for Atomic SubSystem: '<S55>/LV2_Digital_Lowpass_Reset_Enabled' */
    /* Switch: '<S98>/Switch1' incorporates:
     *  Sum: '<S98>/Subtraction'
     *  Sum: '<S98>/Summation'
     *  UnitDelay: '<S98>/Unit Delay'
     */
    CSMR_ac_DW.VeCSMC_Pct_AccelPdlPct_prev +=
        rtb_TmpSignalConversionAtVeSTMR_Pct_Lv2A -
        CSMR_ac_DW.VeCSMC_Pct_AccelPdlPct_prev;

    /* End of Outputs for SubSystem: '<S55>/LV2_Digital_Lowpass_Reset_Enabled' */

    /* Logic: '<S99>/OR1' incorporates:
     *  Constant: '<S92>/Constant'
     *  Constant: '<S94>/Calib'
     *  Logic: '<S55>/Logical'
     *  Logic: '<S99>/NOT'
     *  Logic: '<S99>/OR'
     *  RelationalOperator: '<S55>/Comparison1'
     *  RelationalOperator: '<S55>/Comparison4'
     *  UnitDelay: '<S13>/Unit Delay1'
     *  UnitDelay: '<S13>/Unit Delay2'
     *  UnitDelay: '<S98>/Unit Delay'
     *  UnitDelay: '<S99>/Unit Delay1'
     */
    CSMR_ac_DW.VeCSMC_b_AccPdlOvrdF_prev =
        (((CSMR_ac_DW.VeCSMC_Pct_AccelPdlPct_prev > KeCSMR_Pct_AccelPdlPctVal) &&
          (((uint32)CSMR_ac_DW.VeCSMC_e_CruiseControlState_Prev) ==
           CeCSMR_e_CCSt_Set)) ||
         ((!CSMR_ac_DW.VeCSMC_b_CC_ResetAccelPdlOvrd_Prev) &&
          (CSMR_ac_DW.VeCSMC_b_AccPdlOvrdF_prev)));

    /* Logic: '<S55>/Logical2' incorporates:
     *  Constant: '<S96>/Calib'
     *  UnitDelay: '<S99>/Unit Delay1'
     */
    VeCSMC_b_AccPdlOverrdFallingEdge = ((CSMR_ac_DW.VeCSMC_b_AccPdlOvrdF_prev) &&
        (KeCSMR_b_AccPdlOvrdActive));

    /* UnitDelay: '<S3>/Unit Delay3' */
    VeCSMC_b_Lv2CrusNotEngPrev = CSMR_ac_DW.VeCSMC_b_Lv2CrusNotEng_Prev;

    /* Logic: '<S55>/Logical3' incorporates:
     *  Constant: '<S93>/Calib'
     *  Constant: '<S95>/Calib'
     *  Constant: '<S97>/Calib'
     *  Logic: '<S55>/Logical1'
     *  RelationalOperator: '<S55>/Comparison2'
     *  RelationalOperator: '<S55>/Comparison3'
     *  Sum: '<S55>/Sum1'
     */
    VeCSMC_b_PtcPdlInChrgVsCC = (((((rtb_VeCSMC_v_CC_SetSpeedDelta - tmpRead_e) >=
        KeCSMR_M_ToLimOverrideCCTrq) && (VeCSMC_b_Lv2CrusNotEngPrev)) &&
        (rtb_TmpSignalConversionAtVeSTMR_Pct_Lv2A > KeCSMR_Pct_PVSThrsh)) &&
        (KeCSMR_b_TrqOvrdActive));

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CSMI_Inputs'
     */
    /* Switch: '<S13>/Switch1' incorporates:
     *  Logic: '<S144>/AND'
     *  Switch: '<S13>/Switch2'
     *  Switch: '<S13>/Switch3'
     *  Switch: '<S13>/Switch4'
     *  Switch: '<S13>/Switch5'
     *  Switch: '<S13>/Switch7'
     */
    if (VeCSMI_b_SpeedUnit_Inter)
    {
        /* Switch: '<S13>/Switch1' incorporates:
         *  Constant: '<S69>/Calib'
         */
        rtb_TmpSignalConversionAtVeSTMR_Pct_Lv2A =
            KeCSMR_v_CCSetSpd_AccHoldDeltaMPH;

        /* Switch: '<S13>/Switch2' incorporates:
         *  Constant: '<S75>/Calib'
         */
        CSMR_ac_B.VeCSMR_v_CCSetSpd_DecTapDelta =
            KeCSMR_v_CCSetSpd_DecTapDeltaMPH;

        /* Switch: '<S13>/Switch3' incorporates:
         *  Constant: '<S71>/Calib'
         */
        CSMR_ac_B.VeCSMR_v_CCSetSpd_AccTapDelta =
            KeCSMR_v_CCSetSpd_AccTapDeltaMPH;

        /* Switch: '<S13>/Switch4' incorporates:
         *  Constant: '<S73>/Calib'
         */
        CSMR_ac_B.VeCSMR_v_CCSetSpd_DecHoldDelta =
            KeCSMR_v_CCSetSpd_DecHoldDeltaMPH;

        /* Switch: '<S13>/Switch5' incorporates:
         *  Constant: '<S78>/Calib'
         */
        CSMR_ac_B.VeCSMR_v_VehSpdDecDiffArb = KeCSMR_v_VehSpdDecDiffMPH;

        /* Switch: '<S13>/Switch7' incorporates:
         *  Constant: '<S80>/Calib'
         */
        CSMR_ac_B.VeCSMR_v_VehSpdIncDiffArb = KeCSMR_v_VehSpdIncDiffMPH;
    }
    else
    {
        /* Switch: '<S13>/Switch1' incorporates:
         *  Constant: '<S68>/Calib'
         */
        rtb_TmpSignalConversionAtVeSTMR_Pct_Lv2A =
            KeCSMR_v_CCSetSpd_AccHoldDeltaKPH;

        /* Switch: '<S13>/Switch2' incorporates:
         *  Constant: '<S74>/Calib'
         */
        CSMR_ac_B.VeCSMR_v_CCSetSpd_DecTapDelta =
            KeCSMR_v_CCSetSpd_DecTapDeltaKPH;

        /* Switch: '<S13>/Switch3' incorporates:
         *  Constant: '<S70>/Calib'
         */
        CSMR_ac_B.VeCSMR_v_CCSetSpd_AccTapDelta =
            KeCSMR_v_CCSetSpd_AccTapDeltaKPH;

        /* Switch: '<S13>/Switch4' incorporates:
         *  Constant: '<S72>/Calib'
         */
        CSMR_ac_B.VeCSMR_v_CCSetSpd_DecHoldDelta =
            KeCSMR_v_CCSetSpd_DecHoldDeltaKPH;

        /* Switch: '<S13>/Switch5' incorporates:
         *  Constant: '<S77>/Calib'
         */
        CSMR_ac_B.VeCSMR_v_VehSpdDecDiffArb = KeCSMR_v_VehSpdDecDiffKPH;

        /* Switch: '<S13>/Switch7' incorporates:
         *  Constant: '<S79>/Calib'
         */
        CSMR_ac_B.VeCSMR_v_VehSpdIncDiffArb = KeCSMR_v_VehSpdIncDiffKPH;
    }

    /* End of Switch: '<S13>/Switch1' */

    /* Chart: '<S13>/Dtrmn_Set_Spd' incorporates:
     *  Logic: '<S144>/AND'
     *  UnitDelay: '<S124>/Unit Delay1'
     *  UnitDelay: '<S125>/Unit Delay1'
     *  UnitDelay: '<S13>/Unit Delay3'
     */
    /* Gateway: CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/Dtrmn_Set_Spd */
    /* During: CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/Dtrmn_Set_Spd */
    if (((uint32)CSMR_ac_DW.is_active_c3_CSMR_ac) == 0U)
    {
        /* Entry: CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/Dtrmn_Set_Spd */
        CSMR_ac_DW.is_active_c3_CSMR_ac = 1U;

        /* Entry Internal: CSMR_MedTEB/CSMC_SUBSYSTEM/Dtrmn_CC_Set_Spd/Dtrmn_Set_Spd */
        /* Transition: '<S56>:35' */
        if (CSMR_ac_DW.VeCSMC_b_Lv2CcOnMode_prev)
        {
            /* Transition: '<S56>:151' */
            CSMR_ac_B.VeCSMR_e_StateChartMode = CeCSMR_e_CCSt_On_SF;

            /* RelationalOperator: '<S11>/Comparison1' */
            /* Entry 'CeCSMR_e_CCSt_On_SF': '<S56>:36' */
            CSMR_ac_B.CruiseControlState = CeCSMR_e_CCSt_On;
            CSMR_ac_B.CC_SetSpeed = 0.0F;
            CSMR_ac_B.CC_SetSpeed_Valid = false;
            VeCSMC_b_CC_ResetAccelPdlOvrd = true;
        }
        else if (CSMR_ac_DW.VeCSMC_b_Lv2CcOffMode_prev)
        {
            /* Transition: '<S56>:152' */
            CSMR_ac_B.VeCSMR_e_StateChartMode = CeCSMR_e_CCSt_Off_SF;

            /* RelationalOperator: '<S11>/Comparison1' */
            /* Entry 'CeCSMR_e_CCSt_Off_SF': '<S56>:44' */
            CSMR_ac_B.CruiseControlState = CeCSMR_e_CCSt_Off;
            CSMR_ac_B.CC_SetSpeed = 0.0F;
            CSMR_ac_B.CC_SetSpeed_Valid = false;
            VeCSMC_b_CC_ResetAccelPdlOvrd = true;
        }
        else
        {
            /* Transition: '<S56>:153' */
            CSMR_ac_B.VeCSMR_e_StateChartMode = CeCSMR_e_CCSt_NotDtrmn_SF;

            /* RelationalOperator: '<S11>/Comparison1' */
            /* Entry 'CeCSMR_e_CCSt_NotDtrmn_SF': '<S56>:34' */
            CSMR_ac_B.CruiseControlState = CeCSMR_e_CCSt_NotDtrmn;
            CSMR_ac_B.CC_SetSpeed = 0.0F;
            CSMR_ac_B.CC_SetSpeed_Valid = true;
            VeCSMC_b_CC_ResetAccelPdlOvrd = true;
        }
    }
    else
    {
        guard1 = false;
        switch (CSMR_ac_B.VeCSMR_e_StateChartMode)
        {
          case CeCSMR_e_CCSt_NotDtrmn_SF:
            /* During 'CeCSMR_e_CCSt_NotDtrmn_SF': '<S56>:34' */
            if (CSMR_ac_DW.VeCSMC_b_Lv2CcOnMode_prev)
            {
                /* Transition: '<S56>:37' */
                CSMR_ac_B.VeCSMR_e_StateChartMode = CeCSMR_e_CCSt_On_SF;

                /* RelationalOperator: '<S11>/Comparison1' */
                /* Entry 'CeCSMR_e_CCSt_On_SF': '<S56>:36' */
                CSMR_ac_B.CruiseControlState = CeCSMR_e_CCSt_On;
                CSMR_ac_B.CC_SetSpeed = 0.0F;
                CSMR_ac_B.CC_SetSpeed_Valid = false;
                VeCSMC_b_CC_ResetAccelPdlOvrd = true;
            }
            else
            {
                if (CSMR_ac_DW.VeCSMC_b_Lv2CcOffMode_prev)
                {
                    /* Transition: '<S56>:145' */
                    CSMR_ac_B.VeCSMR_e_StateChartMode = CeCSMR_e_CCSt_Off_SF;

                    /* RelationalOperator: '<S11>/Comparison1' */
                    /* Entry 'CeCSMR_e_CCSt_Off_SF': '<S56>:44' */
                    CSMR_ac_B.CruiseControlState = CeCSMR_e_CCSt_Off;
                    CSMR_ac_B.CC_SetSpeed = 0.0F;
                    CSMR_ac_B.CC_SetSpeed_Valid = false;
                    VeCSMC_b_CC_ResetAccelPdlOvrd = true;
                }
            }
            break;

          case CeCSMR_e_CCSt_Off_SF:
            /* During 'CeCSMR_e_CCSt_Off_SF': '<S56>:44' */
            if (CSMR_ac_DW.VeCSMC_b_Lv2CcOnMode_prev)
            {
                /* Transition: '<S56>:49' */
                CSMR_ac_B.VeCSMR_e_StateChartMode = CeCSMR_e_CCSt_On_SF;

                /* RelationalOperator: '<S11>/Comparison1' */
                /* Entry 'CeCSMR_e_CCSt_On_SF': '<S56>:36' */
                CSMR_ac_B.CruiseControlState = CeCSMR_e_CCSt_On;
                CSMR_ac_B.CC_SetSpeed = 0.0F;
                CSMR_ac_B.CC_SetSpeed_Valid = false;
                VeCSMC_b_CC_ResetAccelPdlOvrd = true;
            }
            else
            {
                /* RelationalOperator: '<S11>/Comparison1' */
                CSMR_ac_B.CruiseControlState = CeCSMR_e_CCSt_Off;
                CSMR_ac_B.CC_SetSpeed = 0.0F;
                CSMR_ac_B.CC_SetSpeed_Valid = false;
                VeCSMC_b_CC_ResetAccelPdlOvrd = true;
            }
            break;

          case CeCSMR_e_CCSt_On_Cancel_SF:
            /* During 'CeCSMR_e_CCSt_On_Cancel_SF': '<S56>:42' */
            if (CSMR_ac_DW.VeCSMC_b_Lv2CcOffMode_prev)
            {
                /* Transition: '<S56>:55' */
                CSMR_ac_B.CC_Resume_State = false;

                /* Transition: '<S56>:56' */
                /* Transition: '<S56>:53' */
                CSMR_ac_B.VeCSMR_e_StateChartMode = CeCSMR_e_CCSt_Off_SF;

                /* RelationalOperator: '<S11>/Comparison1' */
                /* Entry 'CeCSMR_e_CCSt_Off_SF': '<S56>:44' */
                CSMR_ac_B.CruiseControlState = CeCSMR_e_CCSt_Off;
                CSMR_ac_B.CC_SetSpeed = 0.0F;
                CSMR_ac_B.CC_SetSpeed_Valid = false;
                VeCSMC_b_CC_ResetAccelPdlOvrd = true;
            }
            else if ((((rtb_LogicalOperator7 || VeCSMI_b_Lv2CrusDecel_out) &&
                       (!VeCSMR_b_CcInhEngage)) && (VeCSMR_v_Lv2CCMinSpd <
                       VeCSMR_v_Lv2VehSpdBiasRound)) &&
                     (VeCSMR_v_Lv2VehSpdBiasRound < VeCSMR_v_Lv2CCMaxSpd))
            {
                /* Transition: '<S56>:157' */
                CSMR_ac_B.CC_SetSpeed = VeCSMR_v_Lv2VehSpdBiasRound;
                CSMR_ac_B.LeCSMR_v_CCSetSpd_Delta_mph = 0.0F;
                CSMR_ac_B.VeCSMR_b_IgnoreSetIncTap = false;
                CSMR_ac_B.VeCSMR_b_IgnoreSetDecTap = false;
                CSMR_ac_B.CCSetSpd_HoldEvent = false;
                guard1 = true;
            }
            else if ((((rtb_TmpSignalConversionAtVeSCMR_b_Lv2C_d &&
                        (!CSMR_ac_DW.VeCSMI_b_Lv2CANResume_prev)) &&
                       (!VeCSMR_b_CcInhEngage)) && (VeCSMR_v_Lv2CCMinSpdResume <
                       VeCSMR_v_Lv2VehSpdBiasRound)) &&
                     (VeCSMR_v_Lv2VehSpdBiasRound < VeCSMR_v_Lv2CCMaxSpd))
            {
                /* Transition: '<S56>:58' */
                CSMR_ac_B.LeCSMR_v_CCSetSpd_Delta_mph = 0.0F;
                CSMR_ac_B.CC_Resume_State = true;
                CSMR_ac_B.VeCSMR_b_IgnoreSetIncTap = false;
                CSMR_ac_B.VeCSMR_b_IgnoreSetDecTap = false;

                /* Transition: '<S56>:92' */
                /* Transition: '<S56>:62' */
                guard1 = true;
            }
            else
            {
                /* Outputs for Function Call SubSystem: '<S1>/CSMI_Inputs' */
                if ((VeCSMI_b_SpeedUnit_Inter !=
                        CSMR_ac_DW.VeCSMC_b_SpeedUnt_Prev) &&
                        (!VeCSMI_b_SpeedUnit_Inter))
                {
                    CSMR_ac_B.CC_SetSpeed *= 1.609375F;
                    CSMR_ac_B.CC_SetSpeed = roundf(CSMR_ac_B.CC_SetSpeed);
                }

                if ((VeCSMI_b_SpeedUnit_Inter !=
                        CSMR_ac_DW.VeCSMC_b_SpeedUnt_Prev) &&
                        (VeCSMI_b_SpeedUnit_Inter))
                {
                    CSMR_ac_B.CC_SetSpeed *= 0.621359F;
                    CSMR_ac_B.CC_SetSpeed = roundf(CSMR_ac_B.CC_SetSpeed);
                }

                /* End of Outputs for SubSystem: '<S1>/CSMI_Inputs' */
            }
            break;

          case CeCSMR_e_CCSt_On_SF:
            /* During 'CeCSMR_e_CCSt_On_SF': '<S56>:36' */
            if ((((rtb_LogicalOperator7 || VeCSMI_b_Lv2CrusDecel_out) &&
                    (!VeCSMR_b_CcInhEngage)) && (VeCSMR_v_Lv2CCMinSpd <
                    VeCSMR_v_Lv2VehSpdBiasRound)) &&
                    (VeCSMR_v_Lv2VehSpdBiasRound < VeCSMR_v_Lv2CCMaxSpd))
            {
                /* Transition: '<S56>:40' */
                CSMR_ac_B.CC_SetSpeed = VeCSMR_v_Lv2VehSpdBiasRound;
                CSMR_ac_B.LeCSMR_v_CCSetSpd_Delta_mph = 0.0F;
                CSMR_ac_B.VeCSMR_b_IgnoreSetIncTap = false;
                CSMR_ac_B.VeCSMR_b_IgnoreSetDecTap = false;
                CSMR_ac_B.CCSetSpd_HoldEvent = false;
                CSMR_ac_B.VeCSMR_e_StateChartMode = CeCSMR_e_CCSt_Set_SF;
                CSMR_a_enter_atomic_CeCSMR_e_CCSt_Set_SF(&rtb_LogicalOperator7,
                    &VeCSMI_b_Lv2CrusDecel_out);
            }
            else if (CSMR_ac_DW.VeCSMC_b_Lv2CcOffMode_prev)
            {
                /* Transition: '<S56>:48' */
                CSMR_ac_B.VeCSMR_e_StateChartMode = CeCSMR_e_CCSt_Off_SF;

                /* RelationalOperator: '<S11>/Comparison1' */
                /* Entry 'CeCSMR_e_CCSt_Off_SF': '<S56>:44' */
                CSMR_ac_B.CruiseControlState = CeCSMR_e_CCSt_Off;
                CSMR_ac_B.CC_SetSpeed = 0.0F;
                CSMR_ac_B.CC_SetSpeed_Valid = false;
                VeCSMC_b_CC_ResetAccelPdlOvrd = true;
            }
            else
            {
                /* RelationalOperator: '<S11>/Comparison1' */
                CSMR_ac_B.CruiseControlState = CeCSMR_e_CCSt_On;
                CSMR_ac_B.CC_SetSpeed = 0.0F;
                CSMR_ac_B.CC_SetSpeed_Valid = false;
                VeCSMC_b_CC_ResetAccelPdlOvrd = true;
            }
            break;

          default:
            CSMR_ac_CeCSMR_e_CCSt_Set_SF((&(VeCSMI_b_SpeedUnit_Inter)),
                &rtb_LogicalOperator7, &VeCSMI_b_Lv2CrusDecel_out,
                &VeCSMI_b_Lv2CrusCancel_out, &VeCSMR_v_Lv2VehSpdBiasRound,
                &rtb_TmpSignalConversionAtVeSTMR_Pct_Lv2A);
            break;
        }

        if (guard1)
        {
            CSMR_ac_B.VeCSMR_e_StateChartMode = CeCSMR_e_CCSt_Set_SF;
            CSMR_a_enter_atomic_CeCSMR_e_CCSt_Set_SF(&rtb_LogicalOperator7,
                &VeCSMI_b_Lv2CrusDecel_out);
        }
    }

    /* End of Chart: '<S13>/Dtrmn_Set_Spd' */

    /* Logic: '<S50>/AND' */
    VeCSMC_b_CC_SetSpd_Valid = CSMR_ac_B.CC_SetSpeed_Valid;

    /* Gain: '<S88>/Gain' */
    VeCSMC_v_CC_SetSpd = CSMR_ac_B.CC_SetSpeed;

    /* Outputs for Atomic SubSystem: '<S3>/Chk_Lv2_Set_Spd' */
    /* Sum: '<S10>/Sum1' */
    rtb_VeCSMC_v_CC_SetSpeedDelta =
        CSMR_ac_B.TmpSignalConversionAtVeCCTR_v_CcSetSpdOu - VeCSMC_v_CC_SetSpd;

    /* Switch: '<S29>/LV2_Abs_switch' incorporates:
     *  Constant: '<S29>/ConstantValue1'
     *  Product: '<S29>/Product'
     *  RelationalOperator: '<S29>/Comparison'
     */
    if (rtb_VeCSMC_v_CC_SetSpeedDelta < 0.0F)
    {
        rtb_VeCSMC_v_CC_SetSpeedDelta = -rtb_VeCSMC_v_CC_SetSpeedDelta;
    }

    /* End of Switch: '<S29>/LV2_Abs_switch' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CSMI_Inputs'
     */
    /* Switch: '<S10>/Switch2' incorporates:
     *  Constant: '<S27>/Calib'
     *  Constant: '<S28>/Calib'
     *  Logic: '<S144>/AND'
     */
    if (VeCSMI_b_SpeedUnit_Inter)
    {
        rtb_TmpSignalConversionAtVeSTMR_Pct_Lv2A =
            KeCSMR_v_Lv2Lv1SetSpdDeltaThrshd;
    }
    else
    {
        rtb_TmpSignalConversionAtVeSTMR_Pct_Lv2A =
            KeCSMR_v_Lv2Lv1SetSpdDeltaThrshdKPH;
    }

    /* End of Switch: '<S10>/Switch2' */

    /* RelationalOperator: '<S10>/Comparison2' */
    VeCSMC_b_CC_Lv1SetSpdValid = (rtb_VeCSMC_v_CC_SetSpeedDelta <
        rtb_TmpSignalConversionAtVeSTMR_Pct_Lv2A);

    /* Logic: '<S10>/Logical' */
    VeCSMC_b_Lv2CCSetSpdValid = ((VeCSMC_b_CC_SetSpd_Valid) &&
        (VeCSMC_b_CC_Lv1SetSpdValid));

    /* Logic: '<S10>/Logical3' incorporates:
     *  Constant: '<S25>/Calib'
     *  Logic: '<S10>/Logical1'
     *  RelationalOperator: '<S10>/Comparison1'
     *  RelationalOperator: '<S10>/Comparison3'
     */
    VeCSMC_b_SetSpdInvalidCal = (((VeCSMC_v_CC_SetSpd < VeCSMR_v_Lv2CCMinSpd) ||
        (VeCSMC_v_CC_SetSpd > VeCSMR_v_Lv2CCMaxSpd)) && (KeCSMR_b_SetSpdInvalid));

    /* Logic: '<S10>/Logical2' */
    rtb_LogicalOperator7 = ((VeCSMC_b_Lv2CCSetSpdValid) ||
                            (VeCSMC_b_SetSpdInvalidCal));

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CSMI_Inputs'
     */
    /* Switch: '<S10>/Switch1' incorporates:
     *  Logic: '<S144>/AND'
     *  Switch: '<S10>/Switch'
     */
    if (VeCSMI_b_SpeedUnit_Inter)
    {
        /* Switch: '<S10>/Switch' incorporates:
         *  Constant: '<S26>/Calib'
         */
        if (rtb_LogicalOperator7)
        {
            rtb_TmpSignalConversionAtVeSTMR_Pct_Lv2A =
                CSMR_ac_B.TmpSignalConversionAtVeCCTR_v_CcSetSpdOu;
        }
        else
        {
            rtb_TmpSignalConversionAtVeSTMR_Pct_Lv2A =
                KeCSMR_v_Lv2CCSetSpdNotValid;
        }

        /* Switch: '<S10>/Switch1' incorporates:
         *  Constant: '<S10>/ConstantValue1'
         *  Product: '<S10>/Product1'
         *  Rounding: '<S10>/Rounding1'
         */
        rtb_VeCSMC_v_CC_SetSpeedDelta = roundf
            (rtb_TmpSignalConversionAtVeSTMR_Pct_Lv2A * 1.609375F);
    }
    else if (rtb_LogicalOperator7)
    {
        /* Switch: '<S10>/Switch' incorporates:
         *  Switch: '<S10>/Switch1'
         */
        rtb_VeCSMC_v_CC_SetSpeedDelta =
            CSMR_ac_B.TmpSignalConversionAtVeCCTR_v_CcSetSpdOu;
    }
    else
    {
        /* Switch: '<S10>/Switch1' incorporates:
         *  Constant: '<S26>/Calib'
         *  Switch: '<S10>/Switch'
         */
        rtb_VeCSMC_v_CC_SetSpeedDelta = KeCSMR_v_Lv2CCSetSpdNotValid;
    }

    /* End of Switch: '<S10>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<S3>/Chk_Lv2_Set_Spd' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeSCMR_b_Lv2ProxiCC' */
    (void)Rte_Read_VeSCMR_b_Lv2ProxiCC_Value(&VeCSMR_b_Lv2CrusInhEnable);

    /* Inport: '<Root>/VePSMR_e_Lv2PVSMode' */
    (void)Rte_Read_VePSMR_e_Lv2PVSMode_Value(&tmpRead_0);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/CSMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CSMC_SUBSYSTEM'
     */
    /* UnitDelay: '<S3>/Unit Delay2' */
    VeCSMC_b_Lv2CrusNotEngArbPrev = CSMR_ac_DW.VeCSMC_b_Lv2CrusNotEngArb_Prev;

    /* Outputs for Atomic SubSystem: '<S3>/Dtrmn_CC_ENB_INHIBIT' */
    /* RelationalOperator: '<S11>/Comparison1' incorporates:
     *  Constant: '<S32>/Constant'
     */
    VeCSMC_b_Lv2CruiseNotDtmin = (((uint32)CSMR_ac_B.CruiseControlState) ==
        CeCSMR_e_CCSt_NotDtrmn);

    /* RelationalOperator: '<S11>/Comparison2' incorporates:
     *  Constant: '<S33>/Constant'
     */
    VeCSMC_b_Lv2CruiseStOff = (((uint32)CSMR_ac_B.CruiseControlState) ==
        CeCSMR_e_CCSt_Off);

    /* RelationalOperator: '<S11>/Comparison4' incorporates:
     *  Constant: '<S30>/Constant'
     *  Inport: '<Root>/VePSMR_e_Lv2PVSMode'
     */
    VeCSMC_b_Lv2SCCM_CRS_FA = (((uint32)tmpRead_0) != CePSMR_e_NO_Fault);

    /* Logic: '<S11>/Logical8' */
    VeCSMC_b_Lv2CruiseOff = ((VeCSMC_b_Lv2CruiseNotDtmin) ||
        (VeCSMC_b_Lv2CruiseStOff));

    /* RelationalOperator: '<S11>/RelationalOperator' incorporates:
     *  Constant: '<S31>/Constant'
     *  DataTypeConversion: '<S1>/Data Type Conversion'
     */
    VeCSMC_b_Lv1CrusOnOffPres = (((uint32)rtb_Inc_Cntr) == CeCCTR_e_On);

    /* Logic: '<S11>/Logical4' incorporates:
     *  Logic: '<S11>/Logical5'
     *  UnitDelay: '<S11>/Unit Delay1'
     */
    VeCSMC_b_Lv1CrusOnOffPresed = ((!CSMR_ac_DW.VeCSMC_b_Lv1CrusOnOffPres_prev) &&
        (VeCSMC_b_Lv1CrusOnOffPres));

    /* Logic: '<S11>/Logical3' */
    VeCSMC_b_Lv1CrusOffDtctd = (((VeCSMC_b_Lv1CrusOnOffPresed) &&
        (VeCSMI_b_Lv2Lv1CcEnabled)) &&
        (CSMR_ac_B.TmpSignalConversionAtVeCCTR_b_CcEngagedO));

    /* Logic: '<S11>/Logical2' */
    VeCSMC_b_Lv2CrusOffMode = ((VeCSMC_b_Lv2CruiseOff) ||
        (VeCSMC_b_Lv1CrusOffDtctd));

    /* Logic: '<S11>/Logical6' incorporates:
     *  Logic: '<S11>/Logical7'
     */
    VeCSMC_b_Lv2CCSetSpdNotVldArb = ((!rtb_LogicalOperator7) &&
        (VeCSMC_b_Lv2CrusNotEngArbPrev));

    /* Logic: '<S11>/Logical1' incorporates:
     *  Logic: '<S11>/Logical9'
     */
    VeCSMR_b_Lv2CrusInhEnable = (((((((VeCSMC_b_Lv2CrusOffReq) ||
        (VeCSMC_b_Lv2SCCM_CRS_FA)) || (VeCSMI_b_Lv2SCCM_CRS_CTRLFA)) ||
        (VeCSMI_b_CancelCruis)) || (VeCSMI_b_VehSpdFA)) ||
        (!VeCSMR_b_Lv2CrusInhEnable)) || (VeCSMC_b_Lv2CCSetSpdNotVldArb));

    /* Update for UnitDelay: '<S11>/Unit Delay1' */
    CSMR_ac_DW.VeCSMC_b_Lv1CrusOnOffPres_prev = VeCSMC_b_Lv1CrusOnOffPres;

    /* End of Outputs for SubSystem: '<S3>/Dtrmn_CC_ENB_INHIBIT' */

    /* UnitDelay: '<S3>/Unit Delay7' */
    VeCSMC_b_Lv2CCNotEng_Prev = VeCSMC_b_Lv2CrusNotEng;

    /* Outputs for Atomic SubSystem: '<S3>/Dtrmn_CC_ENGAGED' */
    /* RelationalOperator: '<S12>/Comparison1' incorporates:
     *  Constant: '<S37>/Constant'
     */
    VeCSMI_b_Lv2CrusDecel_out = (((uint32)CSMR_ac_B.CruiseControlState) ==
        CeCSMR_e_CCSt_Off);

    /* RelationalOperator: '<S12>/RelationalOperator4' incorporates:
     *  Constant: '<S38>/Constant'
     */
    VeCSMI_b_Lv2CrusCancel_out = (((uint32)CSMR_ac_B.CruiseControlState) ==
        CeCSMR_e_CCSt_Set);

    /* Outputs for Atomic SubSystem: '<S12>/LV2_Turn_Off_Delay_Sample_Modified4' */
    /* Switch: '<S44>/Switch' incorporates:
     *  Logic: '<S49>/AND'
     *  Logic: '<S49>/OR1'
     *  MinMax: '<S44>/Minimum1'
     *  UnitDelay: '<S44>/Unit Delay1'
     *  UnitDelay: '<S49>/Unit Delay'
     */
    if ((!VeCSMI_b_Lv2CrusCancel_out) &&
            (CSMR_ac_DW.VeCSMC_b_Lv2CrusSetDtctdDlyd_prev))
    {
        /* MinMax: '<S44>/Minimum1' incorporates:
         *  Constant: '<S41>/Calib'
         *  UnitDelay: '<S44>/Unit Delay1'
         */
        CSMR_ac_DW.VeCSMC_Cnt_Lv2CrusSetDtctdDlyd_prev =
            KeCSMR_Cnt_ButtonConfCntrLimSet;
    }
    else
    {
        if (((sint32)CSMR_ac_DW.VeCSMC_Cnt_Lv2CrusSetDtctdDlyd_prev) <= 1)
        {
            /* MinMax: '<S44>/Minimum1' */
            CSMR_ac_DW.VeCSMC_Cnt_Lv2CrusSetDtctdDlyd_prev = 1U;
        }

        /* MinMax: '<S44>/Minimum1' incorporates:
         *  Constant: '<S44>/ConstantValue'
         *  Sum: '<S44>/Summation'
         *  UnitDelay: '<S44>/Unit Delay1'
         */
        CSMR_ac_DW.VeCSMC_Cnt_Lv2CrusSetDtctdDlyd_prev = (uint8)((sint32)
            (((sint32)CSMR_ac_DW.VeCSMC_Cnt_Lv2CrusSetDtctdDlyd_prev) - 1));
    }

    /* End of Switch: '<S44>/Switch' */

    /* Logic: '<S44>/AND' incorporates:
     *  Constant: '<S44>/ConstantValue2'
     *  RelationalOperator: '<S44>/GreaterThan'
     *  UnitDelay: '<S44>/Unit Delay1'
     */
    VeCSMC_b_Lv2CrusSetDtctdDlyd = (VeCSMI_b_Lv2CrusCancel_out || (((sint32)
        CSMR_ac_DW.VeCSMC_Cnt_Lv2CrusSetDtctdDlyd_prev) > 0));

    /* Update for UnitDelay: '<S49>/Unit Delay' */
    CSMR_ac_DW.VeCSMC_b_Lv2CrusSetDtctdDlyd_prev = VeCSMI_b_Lv2CrusCancel_out;

    /* End of Outputs for SubSystem: '<S12>/LV2_Turn_Off_Delay_Sample_Modified4' */

    /* Outputs for Atomic SubSystem: '<S12>/LV2_Turn_Off_Delay_Sample_Modified2' */
    /* Switch: '<S42>/Switch' incorporates:
     *  Logic: '<S47>/AND'
     *  Logic: '<S47>/OR1'
     *  MinMax: '<S42>/Minimum1'
     *  UnitDelay: '<S42>/Unit Delay1'
     *  UnitDelay: '<S47>/Unit Delay'
     */
    if ((!rtb_TmpSignalConversionAtVeSCMR_b_Lv2C_d) &&
            (CSMR_ac_DW.VeCSMC_b_Lv2ResumeDlyd_prev))
    {
        /* MinMax: '<S42>/Minimum1' incorporates:
         *  Constant: '<S40>/Calib'
         *  UnitDelay: '<S42>/Unit Delay1'
         */
        CSMR_ac_DW.VeCSMC_Cnt_Lv2ResumeDlyd_prev =
            KeCSMR_Cnt_ButtonConfCntrLimRes;
    }
    else
    {
        if (((sint32)CSMR_ac_DW.VeCSMC_Cnt_Lv2ResumeDlyd_prev) <= 1)
        {
            /* MinMax: '<S42>/Minimum1' */
            CSMR_ac_DW.VeCSMC_Cnt_Lv2ResumeDlyd_prev = 1U;
        }

        /* MinMax: '<S42>/Minimum1' incorporates:
         *  Constant: '<S42>/ConstantValue'
         *  Sum: '<S42>/Summation'
         *  UnitDelay: '<S42>/Unit Delay1'
         */
        CSMR_ac_DW.VeCSMC_Cnt_Lv2ResumeDlyd_prev = (uint8)((sint32)(((sint32)
            CSMR_ac_DW.VeCSMC_Cnt_Lv2ResumeDlyd_prev) - 1));
    }

    /* End of Switch: '<S42>/Switch' */

    /* Update for UnitDelay: '<S47>/Unit Delay' */
    CSMR_ac_DW.VeCSMC_b_Lv2ResumeDlyd_prev =
        rtb_TmpSignalConversionAtVeSCMR_b_Lv2C_d;

    /* End of Outputs for SubSystem: '<S12>/LV2_Turn_Off_Delay_Sample_Modified2' */

    /* RelationalOperator: '<S12>/Comparison4' incorporates:
     *  Constant: '<S36>/Constant'
     */
    VeCSMC_b_Lv2Cancel = (((uint32)CSMR_ac_B.CruiseControlState) ==
                          CeCSMR_e_CCSt_On_Cancel);

    /* Outputs for Atomic SubSystem: '<S12>/LV2_Turn_Off_Delay_Sample_Modified3' */
    /* Switch: '<S43>/Switch' incorporates:
     *  Logic: '<S48>/AND'
     *  Logic: '<S48>/OR1'
     *  MinMax: '<S43>/Minimum1'
     *  UnitDelay: '<S43>/Unit Delay1'
     *  UnitDelay: '<S48>/Unit Delay'
     */
    if ((!VeCSMC_b_Lv2Cancel) && (CSMR_ac_DW.VeCSMC_b_Lv2CancelDlyd_prev))
    {
        /* MinMax: '<S43>/Minimum1' incorporates:
         *  Constant: '<S39>/Calib'
         *  UnitDelay: '<S43>/Unit Delay1'
         */
        CSMR_ac_DW.VeCSMC_Cnt_Lv2CancelDlyd_prev =
            KeCSMR_Cnt_ButtonConfCntrLimCncl;
    }
    else
    {
        if (((sint32)CSMR_ac_DW.VeCSMC_Cnt_Lv2CancelDlyd_prev) <= 1)
        {
            /* MinMax: '<S43>/Minimum1' */
            CSMR_ac_DW.VeCSMC_Cnt_Lv2CancelDlyd_prev = 1U;
        }

        /* MinMax: '<S43>/Minimum1' incorporates:
         *  Constant: '<S43>/ConstantValue'
         *  Sum: '<S43>/Summation'
         *  UnitDelay: '<S43>/Unit Delay1'
         */
        CSMR_ac_DW.VeCSMC_Cnt_Lv2CancelDlyd_prev = (uint8)((sint32)(((sint32)
            CSMR_ac_DW.VeCSMC_Cnt_Lv2CancelDlyd_prev) - 1));
    }

    /* End of Switch: '<S43>/Switch' */

    /* Logic: '<S43>/AND' incorporates:
     *  Constant: '<S43>/ConstantValue2'
     *  RelationalOperator: '<S43>/GreaterThan'
     *  UnitDelay: '<S43>/Unit Delay1'
     */
    VeCSMC_b_Lv2CancelDlyd = ((VeCSMC_b_Lv2Cancel) || (((sint32)
        CSMR_ac_DW.VeCSMC_Cnt_Lv2CancelDlyd_prev) > 0));

    /* Update for UnitDelay: '<S48>/Unit Delay' */
    CSMR_ac_DW.VeCSMC_b_Lv2CancelDlyd_prev = VeCSMC_b_Lv2Cancel;

    /* End of Outputs for SubSystem: '<S12>/LV2_Turn_Off_Delay_Sample_Modified3' */

    /* Outputs for Atomic SubSystem: '<S12>/Chk_Lv2CC_Eng_Req' */
    /* Logic: '<S35>/Logical15' incorporates:
     *  Logic: '<S45>/AND1'
     *  Logic: '<S45>/OR2'
     *  UnitDelay: '<S45>/Unit Delay'
     */
    VeCSMC_b_CrusEngReqObsRes = ((VeCSMI_b_Lv2CrusDecel_out ||
        (VeCSMC_b_Lv2CancelDlyd)) || ((VeCSMC_b_Lv2CCNotEng_Prev) &&
        (!CSMR_ac_DW.VeCSMC_b_LV2CrusNotEng_Prev_prev)));

    /* Logic: '<S35>/Logical14' incorporates:
     *  Logic: '<S46>/NOT'
     */
    VeCSMI_b_Lv2CrusCancel_out = !VeCSMC_b_CrusEngReqObsRes;

    /* Outputs for Atomic SubSystem: '<S12>/LV2_Turn_Off_Delay_Sample_Modified2' */
    /* Logic: '<S35>/Logical13' incorporates:
     *  Constant: '<S42>/ConstantValue2'
     *  Logic: '<S12>/Logical15'
     *  Logic: '<S35>/Logical1'
     *  Logic: '<S35>/Logical14'
     *  Logic: '<S35>/Logical18'
     *  Logic: '<S42>/AND'
     *  RelationalOperator: '<S42>/GreaterThan'
     *  UnitDelay: '<S42>/Unit Delay1'
     */
    VeCSMC_b_CrusEngReqObsSet = (((!VeCSMI_b_Lv2CrusDecel_out) &&
        (((VeCSMC_b_Lv2CCNotEng_Prev) && (VeCSMC_b_Lv2CrusSetDtctdDlyd)) ||
         (rtb_TmpSignalConversionAtVeSCMR_b_Lv2C_d || (((sint32)
        CSMR_ac_DW.VeCSMC_Cnt_Lv2ResumeDlyd_prev) > 0)))) &&
        VeCSMI_b_Lv2CrusCancel_out);

    /* End of Outputs for SubSystem: '<S12>/LV2_Turn_Off_Delay_Sample_Modified2' */

    /* Logic: '<S46>/OR1' incorporates:
     *  Logic: '<S46>/OR'
     *  UnitDelay: '<S46>/Unit Delay1'
     */
    VeCSMC_b_CrusEngReqObs = ((VeCSMC_b_CrusEngReqObsSet) ||
        (VeCSMI_b_Lv2CrusCancel_out &&
         (CSMR_ac_DW.VeCSMC_b_CrusEngageReqObs_prev)));

    /* Update for UnitDelay: '<S45>/Unit Delay' */
    CSMR_ac_DW.VeCSMC_b_LV2CrusNotEng_Prev_prev = VeCSMC_b_Lv2CCNotEng_Prev;

    /* Update for UnitDelay: '<S46>/Unit Delay1' */
    CSMR_ac_DW.VeCSMC_b_CrusEngageReqObs_prev = VeCSMC_b_CrusEngReqObs;

    /* End of Outputs for SubSystem: '<S12>/Chk_Lv2CC_Eng_Req' */
    /* End of Outputs for SubSystem: '<S3>/Dtrmn_CC_ENGAGED' */

    /* Logic: '<S51>/AND' */
    VeCSMC_b_CC_Resume_State = CSMR_ac_B.CC_Resume_State;

    /* Logic: '<S52>/AND' */
    VeCSMC_b_CCSetSpdHoldEvent = CSMR_ac_B.CCSetSpd_HoldEvent;

    /* Outputs for Atomic SubSystem: '<S3>/Dtrmn_ENG_INHIBIT' */
    /* Logic: '<S113>/AND1' incorporates:
     *  Logic: '<S113>/OR2'
     *  UnitDelay: '<S113>/Unit Delay'
     */
    VeCSMI_b_Lv2CrusDecel_out = ((VeCSMI_b_ASLOnOffSts) &&
        (!CSMR_ac_DW.VeCSMR_b_Lv2ASLOnOffSts_prev));

    /* Outputs for IfAction SubSystem: '<S14>/ASL_Instant_Activation_True' incorporates:
     *  ActionPort: '<S103>/ActionPort'
     */
    /* If: '<S14>/If_ASL_Instant_Activation' incorporates:
     *  Constant: '<S109>/Calib'
     *  Logic: '<S103>/Logical2'
     *  Logic: '<S14>/Logical11'
     *  Logic: '<S14>/Logical12'
     *  Logic: '<S14>/Logical13'
     */
    VeCSMI_b_Lv2CrusCancel_out = !VeCSMI_b_Lv2Lv1CcEnabled;

    /* End of Outputs for SubSystem: '<S14>/ASL_Instant_Activation_True' */
    if (VeCSMI_b_Lv2CrusCancel_out || (KeCSMR_b_ASLInstantActivationEnable))
    {
        /* Outputs for IfAction SubSystem: '<S14>/ASL_Instant_Activation_True' incorporates:
         *  ActionPort: '<S103>/ActionPort'
         */
        /* Outputs for Atomic SubSystem: '<S103>/LV2_Counter_Reset_Enabled' */
        /* Switch: '<S117>/Switch1' incorporates:
         *  Switch: '<S117>/Switch2'
         *  UnitDelay: '<S103>/Unit Delay'
         */
        if (CSMR_ac_DW.VeCSMC_Cnt_Lv2ASL_OnCntr_Prev)
        {
            /* Switch: '<S117>/Switch1' incorporates:
             *  Constant: '<S117>/ConstantValue2'
             */
            VeCSMC_Cnt_Lv2ASL_OnCntr = 0U;
        }
        else
        {
            if (VeCSMI_b_Lv2CrusDecel_out)
            {
                /* Switch: '<S117>/Switch1' incorporates:
                 *  Constant: '<S117>/ConstantValue1'
                 *  Sum: '<S117>/Subtraction'
                 *  Switch: '<S117>/Switch2'
                 *  UnitDelay: '<S117>/Unit Delay'
                 */
                VeCSMC_Cnt_Lv2ASL_OnCntr = (uint16)(((uint32)
                    VeCSMC_Cnt_Lv2ASL_OnCntr) + 1U);
            }
        }

        /* End of Switch: '<S117>/Switch1' */
        /* End of Outputs for SubSystem: '<S103>/LV2_Counter_Reset_Enabled' */

        /* RelationalOperator: '<S103>/Comparison1' incorporates:
         *  Constant: '<S116>/Calib'
         *  UnitDelay: '<S103>/Unit Delay'
         */
        CSMR_ac_DW.VeCSMC_Cnt_Lv2ASL_OnCntr_Prev = (VeCSMC_Cnt_Lv2ASL_OnCntr >=
            KeCSMR_Cnt_ASLDisableCntr_Instant);

        /* RelationalOperator: '<S103>/Comparison4' incorporates:
         *  Constant: '<S103>/ASL_button_pressed_once'
         */
        VeCSMC_b_CcDisabledForASL_prevT = (((sint32)VeCSMC_Cnt_Lv2ASL_OnCntr) ==
            1);

        /* Logic: '<S103>/Logical' incorporates:
         *  Logic: '<S103>/Logical1'
         */
        VeCSMC_b_ASLActive_prevT = (((VeCSMI_b_Lv2CrusCancel_out &&
            (!VeCSMI_b_Lv2ACC_Enabled)) &&
            rtb_TmpSignalConversionAtVeSCMR_b_Lv2Pro) &&
            (VeCSMC_b_CcDisabledForASL_prevT));

        /* Merge: '<S14>/Merge1' incorporates:
         *  SignalConversion: '<S103>/SignalConversion'
         */
        VeCSMC_b_ASLActive = VeCSMC_b_ASLActive_prevT;

        /* Merge: '<S14>/Merge3' incorporates:
         *  SignalConversion: '<S103>/SignalConversion1'
         */
        VeCSMC_b_CcDisabledForASL = VeCSMC_b_CcDisabledForASL_prevT;

        /* End of Outputs for SubSystem: '<S14>/ASL_Instant_Activation_True' */
    }
    else
    {
        if (!KeCSMR_b_ASLInstantActivationEnable)
        {
            /* Outputs for IfAction SubSystem: '<S14>/ASL_Instant_Activation_False' incorporates:
             *  ActionPort: '<S102>/ActionPort'
             */
            /* Outputs for Atomic SubSystem: '<S102>/LV2_Counter_Reset_Enabled' */
            /* Switch: '<S115>/Switch1' incorporates:
             *  Switch: '<S115>/Switch2'
             *  UnitDelay: '<S102>/Unit Delay'
             */
            if (CSMR_ac_DW.VeCSMC_Cnt_Lv2ASL_OffCntr_Prev)
            {
                /* Switch: '<S115>/Switch1' incorporates:
                 *  Constant: '<S115>/ConstantValue2'
                 */
                VeCSMC_Cnt_Lv2ASL_OffCntr = 0U;
            }
            else
            {
                if (VeCSMI_b_Lv2CrusDecel_out)
                {
                    /* Switch: '<S115>/Switch1' incorporates:
                     *  Constant: '<S115>/ConstantValue1'
                     *  Sum: '<S115>/Subtraction'
                     *  Switch: '<S115>/Switch2'
                     *  UnitDelay: '<S115>/Unit Delay'
                     */
                    VeCSMC_Cnt_Lv2ASL_OffCntr = (uint16)(((uint32)
                        VeCSMC_Cnt_Lv2ASL_OffCntr) + 1U);
                }
            }

            /* End of Switch: '<S115>/Switch1' */
            /* End of Outputs for SubSystem: '<S102>/LV2_Counter_Reset_Enabled' */

            /* RelationalOperator: '<S102>/Comparison1' incorporates:
             *  Constant: '<S114>/Calib'
             *  UnitDelay: '<S102>/Unit Delay'
             */
            CSMR_ac_DW.VeCSMC_Cnt_Lv2ASL_OffCntr_Prev =
                (VeCSMC_Cnt_Lv2ASL_OffCntr >= KeCSMR_Cnt_ASLDisableCntr);

            /* RelationalOperator: '<S102>/Comparison2' incorporates:
             *  Constant: '<S102>/ASL_button_pressed_once'
             */
            VeCSMC_b_CcDsblOnePress = (((sint32)VeCSMC_Cnt_Lv2ASL_OffCntr) == 1);

            /* RelationalOperator: '<S102>/Comparison4' incorporates:
             *  Constant: '<S102>/ASL_button_pressed_twice'
             */
            VeCSMC_b_CcDsblTwoPress = (((sint32)VeCSMC_Cnt_Lv2ASL_OffCntr) == 2);

            /* Logic: '<S102>/Logical' incorporates:
             *  Logic: '<S102>/Logical1'
             *  Logic: '<S102>/Logical2'
             */
            VeCSMC_b_ASLActive_prevF = ((((!VeCSMI_b_Lv2Lv1CcEnabled) &&
                (!VeCSMI_b_Lv2ACC_Enabled)) &&
                rtb_TmpSignalConversionAtVeSCMR_b_Lv2Pro) &&
                (VeCSMC_b_CcDsblTwoPress));

            /* Logic: '<S102>/Logical3' */
            VeCSMC_b_CcDisabledForASL_prevF = ((VeCSMC_b_CcDsblTwoPress) ||
                (VeCSMC_b_CcDsblOnePress));

            /* Merge: '<S14>/Merge1' incorporates:
             *  SignalConversion: '<S102>/SignalConversion'
             */
            VeCSMC_b_ASLActive = VeCSMC_b_ASLActive_prevF;

            /* Merge: '<S14>/Merge3' incorporates:
             *  SignalConversion: '<S102>/SignalConversion1'
             */
            VeCSMC_b_CcDisabledForASL = VeCSMC_b_CcDisabledForASL_prevF;

            /* End of Outputs for SubSystem: '<S14>/ASL_Instant_Activation_False' */
        }
    }

    /* End of If: '<S14>/If_ASL_Instant_Activation' */
    /* End of Outputs for SubSystem: '<S3>/Dtrmn_ENG_INHIBIT' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeGSMR_e_Lv2PRND_Position' */
    (void)Rte_Read_VeGSMR_e_Lv2PRND_Position_Value(&tmpRead_2);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/CSMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CSMC_SUBSYSTEM'
     */
    /* Outputs for Atomic SubSystem: '<S3>/Dtrmn_ENG_INHIBIT' */
    /* RelationalOperator: '<S14>/Comparison5' incorporates:
     *  Constant: '<S105>/Constant'
     */
    rtb_TmpSignalConversionAtVeSCMR_b_Lv2Pro = (((uint32)
        rtb_TmpSignalConversionAtVeSTMR_e_BrkPdl) != CeSTMR_e_BrkNotAppld);

    /* Switch: '<S106>/Switch1' */
    if (VeCSMC_b_CC_Resume_State)
    {
        rtb_TmpSignalConversionAtVeSTMR_Pct_Lv2A = VeCSMR_v_Lv2CCMinSpdResume;
    }
    else
    {
        rtb_TmpSignalConversionAtVeSTMR_Pct_Lv2A = VeCSMR_v_Lv2CCMinSpd;
    }

    /* End of Switch: '<S106>/Switch1' */

    /* RelationalOperator: '<S14>/Comparison2' incorporates:
     *  Constant: '<S110>/Calib'
     *  Sum: '<S14>/Sum'
     */
    VeCSMI_b_Lv2CrusDecel_out = ((KeCSMR_v_SetSpeedHysteresis +
        VeCSMR_v_Lv2VehSpdBiasRound) < rtb_TmpSignalConversionAtVeSTMR_Pct_Lv2A);

    /* RelationalOperator: '<S14>/Comparison3' incorporates:
     *  Constant: '<S104>/Constant'
     *  Inport: '<Root>/VeGSMR_e_Lv2PRND_Position'
     */
    VeCSMI_b_Lv2CrusCancel_out = (((uint32)tmpRead_2) !=
        CeGSMR_e_TransRangeDrive);

    /* Logic: '<S14>/Logical4' */
    VeCSMC_b_Lv2CrusInhEngage = ((((rtb_TmpSignalConversionAtVeSCMR_b_Lv2Pro ||
        VeCSMI_b_Lv2CrusDecel_out) || VeCSMR_b_Lv2CrusInhEnable) ||
        VeCSMI_b_Lv2CrusCancel_out) || (VeCSMI_b_Lv2ACC_Enabled));

    /* Outputs for Atomic SubSystem: '<S14>/LV2_Counter_Reset_Enabled' */
    /* Switch: '<S111>/Switch2' incorporates:
     *  Logic: '<S14>/Logical9'
     *  Switch: '<S111>/Switch1'
     */
    if (!VeCSMC_b_Lv2CrusInhEngage)
    {
        /* Switch: '<S111>/Switch1' incorporates:
         *  Constant: '<S111>/ConstantValue2'
         */
        VeCSMC_Cnt_Lv2CrusInhEngCntr = 0U;
    }
    else
    {
        /* Switch: '<S111>/Switch1' incorporates:
         *  Constant: '<S111>/ConstantValue1'
         *  Sum: '<S111>/Subtraction'
         *  Switch: '<S111>/Switch2'
         *  UnitDelay: '<S111>/Unit Delay'
         */
        VeCSMC_Cnt_Lv2CrusInhEngCntr = (uint16)(((uint32)
            VeCSMC_Cnt_Lv2CrusInhEngCntr) + 1U);
    }

    /* End of Switch: '<S111>/Switch2' */
    /* End of Outputs for SubSystem: '<S14>/LV2_Counter_Reset_Enabled' */

    /* RelationalOperator: '<S14>/Comparison13' incorporates:
     *  Constant: '<S108>/Calib'
     */
    VeCSMC_b_Lv2CrusInhEngTemp = (VeCSMC_Cnt_Lv2CrusInhEngCntr >= ((uint16)
        KeCSMR_Cnt_InhEngageCntrLim));

    /* UnitDelay: '<S118>/Unit Delay7' incorporates:
     *  Logic: '<S14>/Logical8'
     */
    rtb_UnitDelay7 = !VeCSMI_b_DisblMntr;

    /* Logic: '<S14>/Logical2' */
    VeCSMC_b_Lv2CrusEng = !VeCSMC_b_Lv2CrusInhEngTemp;

    /* Logic: '<S14>/Logical' incorporates:
     *  Logic: '<S14>/Logical3'
     *  UnitDelay: '<S3>/Unit Delay2'
     */
    CSMR_ac_DW.VeCSMC_b_Lv2CrusNotEngArb_Prev = ((((rtb_UnitDelay7 &&
        (VeCSMC_b_CrusEngReqObs)) &&
        (CSMR_ac_B.TmpSignalConversionAtVeCCTR_b_CcEngagedO)) &&
        (!VeCSMR_b_CcInhEngage)) && (VeCSMC_b_Lv2CrusEng));

    /* Logic: '<S14>/Logical1' incorporates:
     *  UnitDelay: '<S14>/Unit Delay'
     *  UnitDelay: '<S3>/Unit Delay'
     */
    CSMR_ac_DW.VeCSMC_b_LV2CrusOff_Prev = ((((VeCSMC_b_Lv2CrusInhEngTemp) &&
        (CSMR_ac_B.TmpSignalConversionAtVeCCTR_b_CcEngagedO)) &&
        (CSMR_ac_DW.VeCSMC_b_Lv2Lv1CcEngaged_prev)) && rtb_UnitDelay7);

    /* Outputs for Atomic SubSystem: '<S14>/LV2_Counter_Reset_Enabled2' */
    /* Switch: '<S112>/Switch2' incorporates:
     *  Logic: '<S14>/Logical7'
     *  Switch: '<S112>/Switch1'
     */
    if (!VeCSMI_b_ACC_OnOff)
    {
        /* Switch: '<S112>/Switch1' incorporates:
         *  Constant: '<S112>/ConstantValue2'
         */
        VeCSMC_Cnt_Lv2ACC_OnCntr = 0U;
    }
    else
    {
        /* Switch: '<S112>/Switch1' incorporates:
         *  Constant: '<S112>/ConstantValue1'
         *  Sum: '<S112>/Subtraction'
         *  Switch: '<S112>/Switch2'
         *  UnitDelay: '<S112>/Unit Delay'
         */
        VeCSMC_Cnt_Lv2ACC_OnCntr = (uint16)(((uint32)VeCSMC_Cnt_Lv2ACC_OnCntr) +
            1U);
    }

    /* End of Switch: '<S112>/Switch2' */
    /* End of Outputs for SubSystem: '<S14>/LV2_Counter_Reset_Enabled2' */
    /* End of Outputs for SubSystem: '<S3>/Dtrmn_ENG_INHIBIT' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeDMAB_y_StatusByte_CM_CruzCntrlErr' */
    (void)Rte_Read_VeDMAB_y_StatusByte_CM_CruzCntrlErr_Value(&tmpRead_h);

    /* Inport: '<Root>/VeSCMR_b_Lv2ACC_Engaged' */
    (void)Rte_Read_VeSCMR_b_Lv2ACC_Engaged_Value(&tmpRead_9);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/CSMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CSMC_SUBSYSTEM'
     */
    /* Outputs for Atomic SubSystem: '<S3>/Dtrmn_ENG_INHIBIT' */
    /* Update for UnitDelay: '<S113>/Unit Delay' */
    CSMR_ac_DW.VeCSMR_b_Lv2ASLOnOffSts_prev = VeCSMI_b_ASLOnOffSts;

    /* Update for UnitDelay: '<S14>/Unit Delay' */
    CSMR_ac_DW.VeCSMC_b_Lv2Lv1CcEngaged_prev =
        CSMR_ac_B.TmpSignalConversionAtVeCCTR_b_CcEngagedO;

    /* End of Outputs for SubSystem: '<S3>/Dtrmn_ENG_INHIBIT' */

    /* Logic: '<S15>/LogicalOperator12' incorporates:
     *  Logic: '<S15>/LogicalOperator13'
     */
    VeCSMR_b_CcInhEngage = !VeCSMR_b_Lv2CrusInhEnable;

    /* Outputs for Atomic SubSystem: '<S15>/SR_FlipFlop' */
    /* Logic: '<S118>/LogicalOperator3' incorporates:
     *  Logic: '<S118>/LogicalOperator'
     *  Logic: '<S118>/LogicalOperator2'
     *  Logic: '<S15>/LogicalOperator11'
     *  Logic: '<S15>/LogicalOperator12'
     *  Logic: '<S15>/LogicalOperator13'
     *  UnitDelay: '<S118>/Unit Delay7'
     *  UnitDelay: '<S124>/Unit Delay1'
     *  UnitDelay: '<S125>/Unit Delay1'
     */
    VeCSMC_b_Lv2CCEnabled = (((CSMR_ac_DW.VeCSMC_b_Lv2CcOnMode_prev) &&
        VeCSMR_b_CcInhEngage) || ((VeCSMR_b_CcInhEngage &&
        (!CSMR_ac_DW.VeCSMC_b_Lv2CcOffMode_prev)) &&
        (CSMR_ac_DW.VeCSMR_b_Lv2CCEnabled_Prev)));

    /* Update for UnitDelay: '<S118>/Unit Delay7' */
    CSMR_ac_DW.VeCSMR_b_Lv2CCEnabled_Prev = VeCSMC_b_Lv2CCEnabled;

    /* End of Outputs for SubSystem: '<S15>/SR_FlipFlop' */

    /* Logic: '<S3>/Logical5' incorporates:
     *  UnitDelay: '<S3>/Unit Delay2'
     */
    VeCSMC_b_Lv2CrusNotEng = !CSMR_ac_DW.VeCSMC_b_Lv2CrusNotEngArb_Prev;

    /* Update for UnitDelay: '<S81>/Unit Delay' */
    CSMR_ac_DW.VeCSMI_b_Lv2CrusAccel_prev =
        rtb_TmpSignalConversionAtVeSCMR_b_Lv2Cru;

    /* Update for UnitDelay: '<S82>/Unit Delay' */
    CSMR_ac_DW.VeCSMI_b_Lv2CrusDecel_prev =
        rtb_TmpSignalConversionAtVeSCMR_b_Lv2C_k;

    /* Update for UnitDelay: '<S84>/Unit Delay' */
    CSMR_ac_DW.VeCSMI_b_Lv2CrusCancel_prev =
        rtb_TmpSignalConversionAtVeSCMR_b_Lv2_o2;

    /* Update for UnitDelay: '<S85>/Unit Delay' */
    CSMR_ac_DW.VeCSMI_b_Lv2CANResume_prev =
        rtb_TmpSignalConversionAtVeSCMR_b_Lv2C_d;

    /* Update for UnitDelay: '<S13>/Unit Delay1' */
    CSMR_ac_DW.VeCSMC_e_CruiseControlState_Prev = CSMR_ac_B.CruiseControlState;

    /* Update for UnitDelay: '<S13>/Unit Delay2' */
    CSMR_ac_DW.VeCSMC_b_CC_ResetAccelPdlOvrd_Prev =
        VeCSMC_b_CC_ResetAccelPdlOvrd;

    /* Update for UnitDelay: '<S3>/Unit Delay3' incorporates:
     *  UnitDelay: '<S3>/Unit Delay2'
     */
    CSMR_ac_DW.VeCSMC_b_Lv2CrusNotEng_Prev =
        CSMR_ac_DW.VeCSMC_b_Lv2CrusNotEngArb_Prev;

    /* Update for UnitDelay: '<S13>/Unit Delay4' incorporates:
     *  UnitDelay: '<S13>/Unit Delay5'
     */
    CSMR_ac_DW.VeCSMR_b_PtcPdlInChrgVsCC_prev =
        CSMR_ac_DW.VeCSMR_b_PtcPdlInChrgVsCCArb;

    /* Update for UnitDelay: '<S13>/Unit Delay' */
    CSMR_ac_DW.VeCSMC_b_Lv1CCEngaged_Prev =
        CSMR_ac_B.TmpSignalConversionAtVeCCTR_b_CcEngagedO;

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CSMI_Inputs'
     */
    /* Update for UnitDelay: '<S13>/Unit Delay3' incorporates:
     *  Logic: '<S144>/AND'
     */
    CSMR_ac_DW.VeCSMC_b_SpeedUnt_Prev = VeCSMI_b_SpeedUnit_Inter;

    /* Update for UnitDelay: '<S13>/Unit Delay5' */
    CSMR_ac_DW.VeCSMR_b_PtcPdlInChrgVsCCArb = VeCSMC_b_PtcPdlInChrgVsCC;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CSMD'
     */
    /* RelationalOperator: '<S141>/Compare' incorporates:
     *  Constant: '<S141>/Constant'
     *  S-Function (sfix_bitop): '<S132>/Bit6'
     */
    rtb_TmpSignalConversionAtVeSCMR_b_Lv2Cru = ((((uint32)tmpRead_h) & 64U) ==
        0U);

    /* Outputs for Atomic SubSystem: '<S132>/EdgeFalling' */
    /* Logic: '<S137>/AND' incorporates:
     *  Logic: '<S137>/OR1'
     *  UnitDelay: '<S137>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeSCMR_b_Lv2C_k =
        ((!rtb_TmpSignalConversionAtVeSCMR_b_Lv2Cru) &&
         (CSMR_ac_DW.UnitDelay_DSTATE_f));

    /* Update for UnitDelay: '<S137>/Unit Delay' */
    CSMR_ac_DW.UnitDelay_DSTATE_f = rtb_TmpSignalConversionAtVeSCMR_b_Lv2Cru;

    /* End of Outputs for SubSystem: '<S132>/EdgeFalling' */

    /* Logic: '<S132>/passDBCparam2' incorporates:
     *  Logic: '<S126>/Logical1'
     */
    VeCSMC_b_Lv2CruiseMntrCntrRst = (((VeCSMI_b_Reset_Dtc) ||
        (VeCSMI_b_DisblMntr)) || rtb_TmpSignalConversionAtVeSCMR_b_Lv2C_k);

    /* Switch: '<S132>/dec_if_Ok_else_inc' incorporates:
     *  MinMax: '<S132>/FixPtMinax'
     *  UnitDelay: '<S132>/UnitDelay'
     *  UnitDelay: '<S3>/Unit Delay'
     */
    if (CSMR_ac_DW.VeCSMC_b_LV2CrusOff_Prev)
    {
        /* Sum: '<S132>/Inc_Cntr' incorporates:
         *  Constant: '<S130>/Calib'
         *  UnitDelay: '<S132>/UnitDelay'
         */
        rtb_Inc_Cntr = (uint8)(((uint32)VeCSMD_Cnt_Lv2CruiseMntrFailed) +
                               ((uint32)KeCSMR_Cnt_CrusMntrCntrInc));

        /* Switch: '<S132>/Switch1' incorporates:
         *  RelationalOperator: '<S132>/Relational_Operator'
         *  UnitDelay: '<S132>/UnitDelay'
         */
        if (rtb_Inc_Cntr < VeCSMD_Cnt_Lv2CruiseMntrFailed)
        {
            /* Switch: '<S132>/dec_if_Ok_else_inc' incorporates:
             *  Constant: '<S132>/CounterMax'
             */
            rtb_Inc_Cntr = MAX_uint8_T;
        }

        /* End of Switch: '<S132>/Switch1' */
    }
    else
    {
        if (((sint32)VeCSMD_Cnt_Lv2CruiseMntrFailed) <= 1)
        {
            /* MinMax: '<S132>/FixPtMinax' */
            VeCSMD_Cnt_Lv2CruiseMntrFailed = 1U;
        }

        /* Switch: '<S132>/dec_if_Ok_else_inc' incorporates:
         *  Constant: '<S126>/FixedDecrement2'
         *  Sum: '<S132>/Dec_Cntr'
         */
        rtb_Inc_Cntr = (uint8)((sint32)(((sint32)VeCSMD_Cnt_Lv2CruiseMntrFailed)
                                - 1));
    }

    /* End of Switch: '<S132>/dec_if_Ok_else_inc' */

    /* Switch: '<S132>/Switch3' incorporates:
     *  Switch: '<S132>/Switch2'
     *  Switch: '<S136>/Switch1'
     */
    if (VeCSMC_b_Lv2CruiseMntrCntrRst)
    {
        /* Switch: '<S132>/Switch3' incorporates:
         *  Constant: '<S132>/ResetZero1'
         */
        VeCSMD_b_Lv2CruiseMntrFailed = false;

        /* MinMax: '<S132>/FixPtMinax' incorporates:
         *  Constant: '<S132>/ResetZero'
         *  Switch: '<S132>/Switch2'
         */
        VeCSMD_Cnt_Lv2CruiseMntrFailed = 0U;

        /* Switch: '<S136>/Switch1' incorporates:
         *  Constant: '<S139>/Constant'
         */
        VeCSMC_e_Lv2FaultSts_CM_CruzCntrlErr_CruiseMntr = CeDFIB_e_Init;
    }
    else
    {
        /* Switch: '<S132>/Switch3' incorporates:
         *  Constant: '<S131>/Calib'
         *  Logic: '<S132>/Cntr_fail'
         *  RelationalOperator: '<S132>/Enough_counts_to_Fail'
         *  UnitDelay: '<S132>/UnitDelay1'
         */
        VeCSMD_b_Lv2CruiseMntrFailed = ((rtb_Inc_Cntr >=
            KeCSMR_Cnt_CrusMntrCntrLim) || (VeCSMD_b_Lv2CruiseMntrFailed));

        /* MinMax: '<S132>/FixPtMinax' incorporates:
         *  Switch: '<S132>/Switch2'
         */
        VeCSMD_Cnt_Lv2CruiseMntrFailed = rtb_Inc_Cntr;

        /* Switch: '<S136>/Switch2' incorporates:
         *  Constant: '<S142>/Constant'
         *  RelationalOperator: '<S142>/Compare'
         *  Switch: '<S136>/Switch3'
         */
        if (VeCSMD_b_Lv2CruiseMntrFailed)
        {
            /* Switch: '<S136>/Switch1' incorporates:
             *  Constant: '<S138>/Constant'
             *  Switch: '<S136>/Switch2'
             */
            VeCSMC_e_Lv2FaultSts_CM_CruzCntrlErr_CruiseMntr = CeDFIB_e_Fail;
        }
        else if (((sint32)VeCSMD_Cnt_Lv2CruiseMntrFailed) == 0)
        {
            /* Switch: '<S136>/Switch3' incorporates:
             *  Constant: '<S140>/Constant'
             *  Switch: '<S136>/Switch1'
             */
            VeCSMC_e_Lv2FaultSts_CM_CruzCntrlErr_CruiseMntr = CeDFIB_e_Pass;
        }
        else
        {
            /* Switch: '<S136>/Switch1' incorporates:
             *  Switch: '<S136>/Switch3'
             *  UnitDelay: '<S136>/UnitDelay'
             */
            VeCSMC_e_Lv2FaultSts_CM_CruzCntrlErr_CruiseMntr =
                CSMR_ac_DW.UnitDelay_DSTATE_g;
        }

        /* End of Switch: '<S136>/Switch2' */
    }

    /* End of Switch: '<S132>/Switch3' */

    /* SwitchCase: '<S126>/Determine_P1D52_Status' incorporates:
     *  Switch: '<S136>/Switch1'
     */
    switch (VeCSMC_e_Lv2FaultSts_CM_CruzCntrlErr_CruiseMntr)
    {
      case CeDFIB_e_Init:
        /* Outputs for IfAction SubSystem: '<S126>/Event_CM_CruzCntrlErr_ReportTestInit' incorporates:
         *  ActionPort: '<S128>/ActionPort'
         */
        /* DataStoreWrite: '<S128>/VeCSMR_e_FaultSts_CM_CruzCntrlErr' incorporates:
         *  Constant: '<S134>/Constant'
         */
        CSMR_ac_DW.VeCSMR_e_FaultSts_CM_CruzCntrlErr = CeDFIB_e_Init;

        /* End of Outputs for SubSystem: '<S126>/Event_CM_CruzCntrlErr_ReportTestInit' */
        break;

      case CeDFIB_e_Fail:
        /* Outputs for IfAction SubSystem: '<S126>/Event_CM_CruzCntrlErr_ReportTestFailed' incorporates:
         *  ActionPort: '<S127>/ActionPort'
         */
        /* DataStoreWrite: '<S127>/VeCSMR_e_FaultSts_CM_CruzCntrlErr' incorporates:
         *  Constant: '<S133>/Constant'
         */
        CSMR_ac_DW.VeCSMR_e_FaultSts_CM_CruzCntrlErr = CeDFIB_e_Fail;

        /* End of Outputs for SubSystem: '<S126>/Event_CM_CruzCntrlErr_ReportTestFailed' */
        break;

      case CeDFIB_e_Pass:
        /* Outputs for IfAction SubSystem: '<S126>/Event_CM_CruzCntrlErr_ReportTestPassed' incorporates:
         *  ActionPort: '<S129>/ActionPort'
         */
        /* DataStoreWrite: '<S129>/VeCSMR_e_FaultSts_CM_CruzCntrlErr' incorporates:
         *  Constant: '<S135>/Constant'
         */
        CSMR_ac_DW.VeCSMR_e_FaultSts_CM_CruzCntrlErr = CeDFIB_e_Pass;

        /* End of Outputs for SubSystem: '<S126>/Event_CM_CruzCntrlErr_ReportTestPassed' */
        break;

      default:
        /* no actions */
        break;
    }

    /* End of SwitchCase: '<S126>/Determine_P1D52_Status' */

    /* DataTypeConversion: '<S136>/UNIT8' incorporates:
     *  Switch: '<S136>/Switch1'
     *  UnitDelay: '<S136>/UnitDelay'
     */
    CSMR_ac_DW.UnitDelay_DSTATE_g = (uint8)
        VeCSMC_e_Lv2FaultSts_CM_CruzCntrlErr_CruiseMntr;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CSMC_SUBSYSTEM'
     */
    /* Outport: '<Root>/VeCSMR_b_Lv2ASRActive' incorporates:
     *  Logic: '<S21>/AND'
     *  SignalConversion generated from: '<S1>/Lv2ASRActive'
     */
    (void)Rte_Write_VeCSMR_b_Lv2ASRActive_Value
        (rtb_TmpSignalConversionAtVeSCMR_b_Lv2ASR);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeCSMR_b_Lv2CcOffMode' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2CcOffMode'
     *  UnitDelay: '<S125>/Unit Delay1'
     */
    (void)Rte_Write_VeCSMR_b_Lv2CcOffMode_Value
        (CSMR_ac_DW.VeCSMC_b_Lv2CcOffMode_prev);

    /* Outport: '<Root>/VeCSMR_b_Lv2CcOnMode' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2CcOnMode'
     *  UnitDelay: '<S124>/Unit Delay1'
     */
    (void)Rte_Write_VeCSMR_b_Lv2CcOnMode_Value
        (CSMR_ac_DW.VeCSMC_b_Lv2CcOnMode_prev);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CSMC_SUBSYSTEM'
     */
    /* Outport: '<Root>/VeCSMR_b_Lv2MSRActive' incorporates:
     *  Logic: '<S20>/AND'
     *  SignalConversion generated from: '<S1>/Lv2MSRActive'
     */
    (void)Rte_Write_VeCSMR_b_Lv2MSRActive_Value
        (rtb_TmpSignalConversionAtVeSCMR_b_Lv2MSR);

    /* Outport: '<Root>/VeCSMR_b_ASLActive' incorporates:
     *  Constant: '<S3>/FALSEConstant1'
     *  Logic: '<S3>/Logical'
     *  SignalConversion generated from: '<S1>/VeCSMC_b_ASLActive'
     */
    (void)Rte_Write_VeCSMR_b_ASLActive_Value(false);

    /* Outport: '<Root>/VeCSMR_b_EngTrqEnblRqDAS' incorporates:
     *  SignalConversion generated from: '<S1>/VeCSMC_b_EngTrqEnblRqDAS'
     *  Switch: '<S17>/Switch1'
     */
    (void)Rte_Write_VeCSMR_b_EngTrqEnblRqDAS_Value((!VeCSMI_b_VehSpdFA) &&
        (VeCSMI_b_EngTrqEnblRq));

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeCSMR_b_Lv2CCSetSpdValid' incorporates:
     *  SignalConversion generated from: '<S1>/VeCSMC_b_Lv2CCSetSpdValid'
     */
    (void)Rte_Write_VeCSMR_b_Lv2CCSetSpdValid_Value(rtb_LogicalOperator7);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CSMC_SUBSYSTEM'
     */
    /* Outport: '<Root>/VeCSMR_v_ASLSetSpeed' incorporates:
     *  Gain: '<S19>/Gain'
     *  SignalConversion generated from: '<S1>/VeCSMC_v_ASLSetSpeed'
     */
    (void)Rte_Write_VeCSMR_v_ASLSetSpeed_Value
        (rtb_TmpSignalConversionAtVeASLR_v_SetVeh);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeCSMR_v_Lv2CCSetSpd' incorporates:
     *  SignalConversion generated from: '<S1>/VeCSMC_v_Lv2CCSetSpd'
     */
    (void)Rte_Write_VeCSMR_v_Lv2CCSetSpd_Value(rtb_VeCSMC_v_CC_SetSpeedDelta);

    /* Outport: '<Root>/VeCSMR_b_Lv2CruiseMntrFailed' incorporates:
     *  SignalConversion generated from: '<S1>/VeCSMD_b_Lv2CruiseMntrFailed'
     */
    (void)Rte_Write_VeCSMR_b_Lv2CruiseMntrFailed_Value
        (VeCSMD_b_Lv2CruiseMntrFailed);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CSMC_SUBSYSTEM'
     */
    /* Outputs for Atomic SubSystem: '<S3>/Dtrmn_ENG_INHIBIT' */
    /* Outport: '<Root>/VeCSMR_b_Lv2ACC_On' incorporates:
     *  Constant: '<S107>/Calib'
     *  Logic: '<S14>/Logical10'
     *  RelationalOperator: '<S14>/Comparison4'
     *  SignalConversion generated from: '<S1>/b_ACC_On'
     */
    (void)Rte_Write_VeCSMR_b_Lv2ACC_On_Value((VeCSMC_Cnt_Lv2ACC_OnCntr >=
        ((uint16)KeCSMR_Cnt_ButtonConfCntrACC)) && tmpRead_9);

    /* End of Outputs for SubSystem: '<S3>/Dtrmn_ENG_INHIBIT' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeCSMR_b_Lv2BrkPdlAppld_NotDtrmn' incorporates:
     *  SignalConversion generated from: '<S1>/b_BrkPdlAppld_NotDtrmn'
     */
    (void)Rte_Write_VeCSMR_b_Lv2BrkPdlAppld_NotDtrmn_Value
        (rtb_TmpSignalConversionAtVeSCMR_b_Lv2Pro);

    /* Outport: '<Root>/VeCSMR_b_Lv2CrusInhEnable' incorporates:
     *  SignalConversion generated from: '<S1>/b_CrusInhEnable'
     */
    (void)Rte_Write_VeCSMR_b_Lv2CrusInhEnable_Value(VeCSMR_b_Lv2CrusInhEnable);

    /* Outport: '<Root>/VeCSMR_b_Lv2CrusOff' incorporates:
     *  SignalConversion generated from: '<S1>/b_LV2CrusOff'
     *  UnitDelay: '<S3>/Unit Delay'
     */
    (void)Rte_Write_VeCSMR_b_Lv2CrusOff_Value
        (CSMR_ac_DW.VeCSMC_b_LV2CrusOff_Prev);

    /* Outport: '<Root>/VeCSMR_b_Lv2CCEngaged' incorporates:
     *  SignalConversion generated from: '<S1>/b_Lv2CrusEngaged'
     *  UnitDelay: '<S3>/Unit Delay2'
     */
    (void)Rte_Write_VeCSMR_b_Lv2CCEngaged_Value
        (CSMR_ac_DW.VeCSMC_b_Lv2CrusNotEngArb_Prev);

    /* Outport: '<Root>/VeCSMR_b_PRND_NotInDrive' incorporates:
     *  SignalConversion generated from: '<S1>/b_PRND_NotInDrive'
     */
    (void)Rte_Write_VeCSMR_b_PRND_NotInDrive_Value(VeCSMI_b_Lv2CrusCancel_out);

    /* Outport: '<Root>/VeCSMR_b_Lv2VehSpdNotMeetMinSpd' incorporates:
     *  SignalConversion generated from: '<S1>/b_VehSpdNotMeetMinSpd'
     */
    (void)Rte_Write_VeCSMR_b_Lv2VehSpdNotMeetMinSpd_Value
        (VeCSMI_b_Lv2CrusDecel_out);

    /* Outport: '<Root>/VeCSMR_e_FaultSts_CM_CruzCntrlErr' incorporates:
     *  DataStoreRead: '<S1>/DSR_VeCSMR_e_FaultSts_CM_CruzCntrlErr'
     */
    (void)Rte_Write_VeCSMR_e_FaultSts_CM_CruzCntrlErr_Value
        (CSMR_ac_DW.VeCSMR_e_FaultSts_CM_CruzCntrlErr);

    /* Outputs for Atomic SubSystem: '<S1>/CSMR_FastTEF_StopCheckpoint' */
    /* FunctionCaller: '<S7>/CSMR_FastTEF_StopCheckpoint' */
    Rte_Call_CSMR_FastTEF_StopCheckpoint_CheckpointReached();

    /* End of Outputs for SubSystem: '<S1>/CSMR_FastTEF_StopCheckpoint' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
}

/* Output function */
FUNC(void, CSMR_CODE) CSMR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/CSMR_PwrOn'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S184>/VeCSMR_b_Lv2CrusOff_Out_Init' */
    CSMR_ac_B.OutportBufferForVeCSMR_b_Lv2CrusOff_Out_ = false;

    /* SignalConversion generated from: '<S184>/VeCSMR_b_Lv2CCEngaged_Out_Init' */
    CSMR_ac_B.OutportBufferForVeCSMR_b_Lv2CCEngaged_Ou = false;

    /* SignalConversion generated from: '<S184>/VeCSMR_v_Lv2CCSetSpd_Out_Init' */
    CSMR_ac_B.OutportBufferForVeCSMR_v_Lv2CCSetSpd_Out = 0.0F;

    /* SignalConversion generated from: '<S184>/VeCSMR_b_ASLActive_Out_Init' */
    CSMR_ac_B.OutportBufferForVeCSMR_b_ASLActive_Out_I = false;

    /* SignalConversion generated from: '<S184>/VeCSMR_b_Lv2CCSetSpdValid_Out_Init' */
    CSMR_ac_B.OutportBufferForVeCSMR_b_Lv2CCSetSpdVali = false;

    /* SignalConversion generated from: '<S184>/VeCSMR_v_ASLSetSpeed_Out_Init' */
    CSMR_ac_B.OutportBufferForVeCSMR_v_ASLSetSpeed_Out = 0.0F;

    /* SignalConversion generated from: '<S184>/VeCSMR_b_Lv2BrkPdlAppld_NotDtrmn_Out_Init' */
    CSMR_ac_B.OutportBufferForVeCSMR_b_Lv2BrkPdlAppld_ = false;

    /* SignalConversion generated from: '<S184>/VeCSMR_b_Lv2VehSpdNotMeetMinSpd_Out_Init' */
    CSMR_ac_B.OutportBufferForVeCSMR_b_Lv2VehSpdNotMee = false;

    /* SignalConversion generated from: '<S184>/VeCSMR_b_Lv2CrusInhEnable_Out_Init' */
    CSMR_ac_B.OutportBufferForVeCSMR_b_Lv2CrusInhEnabl = false;

    /* SignalConversion generated from: '<S184>/VeCSMR_b_PRND_NotInDrive_Out_Init' */
    CSMR_ac_B.OutportBufferForVeCSMR_b_PRND_NotInDrive = false;

    /* SignalConversion generated from: '<S184>/VeCSMR_b_Lv2CcOffMode_Out_Init' */
    CSMR_ac_B.OutportBufferForVeCSMR_b_Lv2CcOffMode_Ou = false;

    /* SignalConversion generated from: '<S184>/VeCSMR_b_Lv2CcOnMode_Out_Init' */
    CSMR_ac_B.OutportBufferForVeCSMR_b_Lv2CcOnMode_Out = false;

    /* SignalConversion generated from: '<S184>/VeCSMR_b_Lv2ACC_On_Out_Init' */
    CSMR_ac_B.OutportBufferForVeCSMR_b_Lv2ACC_On_Out_I = false;

    /* SignalConversion generated from: '<S184>/VeCSMR_b_Lv2ASRActive_Out_Init' */
    CSMR_ac_B.OutportBufferForVeCSMR_b_Lv2ASRActive_Ou = false;

    /* SignalConversion generated from: '<S184>/VeCSMR_b_Lv2MSRActive_Out_Init' */
    CSMR_ac_B.OutportBufferForVeCSMR_b_Lv2MSRActive_Ou = false;

    /* SignalConversion generated from: '<S184>/VeCSMR_b_EngTrqEnblRqDAS_Out_Init' */
    CSMR_ac_B.OutportBufferForVeCSMR_b_EngTrqEnblRqDAS = false;

    /* SignalConversion generated from: '<S184>/VeCSMR_e_FaultSts_CM_CruzCntrlErr' incorporates:
     *  Constant: '<S185>/Constant'
     */
    CSMR_ac_B.OutportBufferForVeCSMR_e_FaultSts_CM_Cru = CSMR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S184>/VeCSMD_b_Lv2CruiseMntrFailed_Out_Init' */
    CSMR_ac_B.OutportBufferForVeCSMD_b_Lv2CruiseMntrFa = false;

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeCSMR_e_FaultSts_CM_CruzCntrlErr' incorporates:
     *  SignalConversion generated from: '<S184>/VeCSMR_e_FaultSts_CM_CruzCntrlErr'
     *  SignalConversion generated from: '<S2>/R_VeCSMR_e_FaultSts_CM_CruzCntrlErr'
     */
    (void)Rte_Write_VeCSMR_e_FaultSts_CM_CruzCntrlErr_Value
        (CSMR_ac_B.OutportBufferForVeCSMR_e_FaultSts_CM_Cru);

    /* Outport: '<Root>/VeCSMR_b_Lv2CruiseMntrFailed' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSMD_b_Lv2CruiseMntrFailed_Out_Init'
     */
    (void)Rte_Write_VeCSMR_b_Lv2CruiseMntrFailed_Value
        (CSMR_ac_B.OutportBufferForVeCSMD_b_Lv2CruiseMntrFa);

    /* Outport: '<Root>/VeCSMR_b_ASLActive' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSMR_b_ASLActive_Out_Init'
     */
    (void)Rte_Write_VeCSMR_b_ASLActive_Value
        (CSMR_ac_B.OutportBufferForVeCSMR_b_ASLActive_Out_I);

    /* Outport: '<Root>/VeCSMR_b_EngTrqEnblRqDAS' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSMR_b_EngTrqEnblRqDAS_Out_Init'
     */
    (void)Rte_Write_VeCSMR_b_EngTrqEnblRqDAS_Value
        (CSMR_ac_B.OutportBufferForVeCSMR_b_EngTrqEnblRqDAS);

    /* Outport: '<Root>/VeCSMR_b_Lv2ACC_On' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSMR_b_Lv2ACC_On_Out_Init'
     */
    (void)Rte_Write_VeCSMR_b_Lv2ACC_On_Value
        (CSMR_ac_B.OutportBufferForVeCSMR_b_Lv2ACC_On_Out_I);

    /* Outport: '<Root>/VeCSMR_b_Lv2ASRActive' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSMR_b_Lv2ASRActive_Out_Init'
     */
    (void)Rte_Write_VeCSMR_b_Lv2ASRActive_Value
        (CSMR_ac_B.OutportBufferForVeCSMR_b_Lv2ASRActive_Ou);

    /* Outport: '<Root>/VeCSMR_b_Lv2BrkPdlAppld_NotDtrmn' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSMR_b_Lv2BrkPdlAppld_NotDtrmn_Out_Init'
     */
    (void)Rte_Write_VeCSMR_b_Lv2BrkPdlAppld_NotDtrmn_Value
        (CSMR_ac_B.OutportBufferForVeCSMR_b_Lv2BrkPdlAppld_);

    /* Outport: '<Root>/VeCSMR_b_Lv2CCEngaged' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSMR_b_Lv2CCEngaged_Out_Init'
     */
    (void)Rte_Write_VeCSMR_b_Lv2CCEngaged_Value
        (CSMR_ac_B.OutportBufferForVeCSMR_b_Lv2CCEngaged_Ou);

    /* Outport: '<Root>/VeCSMR_b_Lv2CCSetSpdValid' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSMR_b_Lv2CCSetSpdValid_Out_Init'
     */
    (void)Rte_Write_VeCSMR_b_Lv2CCSetSpdValid_Value
        (CSMR_ac_B.OutportBufferForVeCSMR_b_Lv2CCSetSpdVali);

    /* Outport: '<Root>/VeCSMR_b_Lv2CcOffMode' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSMR_b_Lv2CcOffMode_Out_Init'
     */
    (void)Rte_Write_VeCSMR_b_Lv2CcOffMode_Value
        (CSMR_ac_B.OutportBufferForVeCSMR_b_Lv2CcOffMode_Ou);

    /* Outport: '<Root>/VeCSMR_b_Lv2CcOnMode' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSMR_b_Lv2CcOnMode_Out_Init'
     */
    (void)Rte_Write_VeCSMR_b_Lv2CcOnMode_Value
        (CSMR_ac_B.OutportBufferForVeCSMR_b_Lv2CcOnMode_Out);

    /* Outport: '<Root>/VeCSMR_b_Lv2CrusInhEnable' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSMR_b_Lv2CrusInhEnable_Out_Init'
     */
    (void)Rte_Write_VeCSMR_b_Lv2CrusInhEnable_Value
        (CSMR_ac_B.OutportBufferForVeCSMR_b_Lv2CrusInhEnabl);

    /* Outport: '<Root>/VeCSMR_b_Lv2CrusOff' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSMR_b_Lv2CrusOff_Out_Init'
     */
    (void)Rte_Write_VeCSMR_b_Lv2CrusOff_Value
        (CSMR_ac_B.OutportBufferForVeCSMR_b_Lv2CrusOff_Out_);

    /* Outport: '<Root>/VeCSMR_b_Lv2MSRActive' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSMR_b_Lv2MSRActive_Out_Init'
     */
    (void)Rte_Write_VeCSMR_b_Lv2MSRActive_Value
        (CSMR_ac_B.OutportBufferForVeCSMR_b_Lv2MSRActive_Ou);

    /* Outport: '<Root>/VeCSMR_b_Lv2VehSpdNotMeetMinSpd' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSMR_b_Lv2VehSpdNotMeetMinSpd_Out_Init'
     */
    (void)Rte_Write_VeCSMR_b_Lv2VehSpdNotMeetMinSpd_Value
        (CSMR_ac_B.OutportBufferForVeCSMR_b_Lv2VehSpdNotMee);

    /* Outport: '<Root>/VeCSMR_b_PRND_NotInDrive' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSMR_b_PRND_NotInDrive_Out_Init'
     */
    (void)Rte_Write_VeCSMR_b_PRND_NotInDrive_Value
        (CSMR_ac_B.OutportBufferForVeCSMR_b_PRND_NotInDrive);

    /* Outport: '<Root>/VeCSMR_v_ASLSetSpeed' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSMR_v_ASLSetSpeed_Out_Init'
     */
    (void)Rte_Write_VeCSMR_v_ASLSetSpeed_Value
        (CSMR_ac_B.OutportBufferForVeCSMR_v_ASLSetSpeed_Out);

    /* Outport: '<Root>/VeCSMR_v_Lv2CCSetSpd' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSMR_v_Lv2CCSetSpd_Out_Init'
     */
    (void)Rte_Write_VeCSMR_v_Lv2CCSetSpd_Value
        (CSMR_ac_B.OutportBufferForVeCSMR_v_Lv2CCSetSpd_Out);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, CSMR_CODE) CSMR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/CSMR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S184>/VeCSMR_e_FaultSts_CM_CruzCntrlErr' incorporates:
     *  Constant: '<S185>/Constant'
     */
    CSMR_ac_B.OutportBufferForVeCSMR_e_FaultSts_CM_Cru = CSMR_ac_ConstB.Constant;

    /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Outport: '<Root>/VeCSMR_e_FaultSts_CM_CruzCntrlErr' incorporates:
     *  Merge: '<Root>/M_VeCSMR_e_FaultSts_CM_CruzCntrlErr'
     */
    (void)Rte_Write_VeCSMR_e_FaultSts_CM_CruzCntrlErr_Value(CeDFIB_e_Init);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
