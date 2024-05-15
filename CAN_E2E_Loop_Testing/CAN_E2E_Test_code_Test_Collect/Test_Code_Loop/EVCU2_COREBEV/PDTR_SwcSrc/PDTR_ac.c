/*
 * File: PDTR_ac.c
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

#include "PDTR_ac.h"
#include "rt_modf_16a.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_PDTR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KaPDTR_b_HoodKeyStat[7] =
{
    1, 0, 1, 0, 0, 1, 0
} ;                                    /* Referenced by: '<S79>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(TePDTR_e_BattDischg_State, PDTR_VAR_INIT)
    KaPDTR_e_BattDischg_StateSrcPriority[8] =
{
    CePDTR_e_Dischrg_BatTempCriticl, CePDTR_e_Dischrg_BatAndCab_Cndtn,
    CePDTR_e_Dischrg_BatTempNotOpt, CePDTR_e_Dischrg_CabReqPrsnt,
    CePDTR_e_Dischrg_ForcBatCool_Hys, CePDTR_e_Dischrg_AmbTempLow,
    CePDTR_e_Dischrg_ForcBatHeat_Hys, CePDTR_e_Dischrg_CabReqInOV
};                                     /* Referenced by: '<S14>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(float32, PDTR_VAR_INIT) KePDTR_K_MovAvgOrder = 200.0F;/* Referenced by: '<S153>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(float32, PDTR_VAR_INIT) KePDTR_Pct_HV_BatPackSOC_Arb_D =
    0.0F;                              /* Referenced by: '<S164>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(float32, PDTR_VAR_INIT) KePDTR_T_Amb_TempChilly = 20.0F;/* Referenced by: '<S63>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(float32, PDTR_VAR_INIT) KePDTR_T_ChillAllow_CellMaxTmp =
    25.0F;                             /* Referenced by: '<S64>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(float32, PDTR_VAR_INIT) KePDTR_T_ForcdBatCodn_LSP = 18.0F;/* Referenced by: '<S65>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(float32, PDTR_VAR_INIT) KePDTR_T_ForcdBatCodn_RSP = 27.0F;/* Referenced by: '<S66>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_AC_CompReq_D = 0;/* Referenced by: '<S165>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_AC_CompReq_SD = 0;/* Referenced by: '<S166>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_BatCntctrStat_SD = 0;/* Referenced by: '<S167>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_BatCritChk_Msg7 = 1;/* Referenced by: '<S80>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_BatOVChkMsg7 = 1;/* Referenced by: '<S81>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_BattCoolingCond_Req_D = 0;/* Referenced by: '<S205>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_BattCoolingCond_Req_SD =
    0;                                 /* Referenced by: '<S206>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_BattHeater_RU_Sel = 0;/* Referenced by: '<S44>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_BattHeatingCond_Req_D = 0;/* Referenced by: '<S207>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_BattHeatingCond_Req_SD =
    0;                                 /* Referenced by: '<S208>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_CabAllowed_D = 0;/* Referenced by: '<S168>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_CabAllowed_SD = 0;/* Referenced by: '<S169>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_CabHeatThermalState_SD =
    0;                                 /* Referenced by: '<S170>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_CabHeater_RU_Sel = 1;/* Referenced by: '<S45>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_CabReq_NotAllow_D = 0;/* Referenced by: '<S171>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_CabReq_NotAllow_SD = 0;/* Referenced by: '<S172>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_CabThermalMod_SD = 0;/* Referenced by: '<S173>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_CabinCond_Req_D = 0;/* Referenced by: '<S209>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_CabinCond_Req_SD = 0;/* Referenced by: '<S210>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_DispStChk1_Msg7 = 0;/* Referenced by: '<S82>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_DispStChk2_Msg7 = 1;/* Referenced by: '<S83>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_DsblOVForState5 = 1;/* Referenced by: '<S67>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_DsblPlgIn_Msg7 = 1;/* Referenced by: '<S84>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_Dsbl_HtrLockedChk = 0;/* Referenced by: '<S46>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_EburnEnbl_D = 0;/* Referenced by: '<S211>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_EburnEnbl_SD = 0;/* Referenced by: '<S212>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_EnableHysForBatCooling =
    1;                                 /* Referenced by: '<S68>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_EnblActvPsvHeatReq = 1;/* Referenced by: '<S128>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_EnblBatCritChk_Msg7 = 1;/* Referenced by: '<S85>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_EnblCrnk_OV = 1;/* Referenced by: '<S102>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_EnblNewModCabCondReq = 1;/* Referenced by: '<S31>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_EnblPwrSink = 1;/* Referenced by: '<S32>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_Enbl_EPDReset = 0;/* Referenced by: '<S56>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_Enbl_HtrTransitionChk = 0;/* Referenced by: '<S57>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_EnbleBurnFlag = 1;/* Referenced by: '<S159>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT)
    KePDTR_b_EngOrBattPwrDschg_State_SD = 0;/* Referenced by: '<S213>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_EngageThermalLoad_D = 0;/* Referenced by: '<S174>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_EngageThermalLoad_SD = 0;/* Referenced by: '<S175>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_EstSlopeAngle_SD = 0;/* Referenced by: '<S176>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_HVLimSpd_DispSt = 1;/* Referenced by: '<S103>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_HVNoRegen_DispSt = 1;/* Referenced by: '<S104>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_HVOVFail1_Msg7 = 1;/* Referenced by: '<S86>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_HVOVFail2_Msg7 = 1;/* Referenced by: '<S87>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_HVOverVoltFailure_SD = 0;/* Referenced by: '<S177>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_HV_BatPackSOC_Arb_SD = 0;/* Referenced by: '<S178>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_HV_BatRdy_D = 0;/* Referenced by: '<S179>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_HV_BatRdy_SD = 0;/* Referenced by: '<S180>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_HV_Bat_OverVltg_D = 0;/* Referenced by: '<S181>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_HV_Bat_OverVltg_SD = 0;/* Referenced by: '<S182>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_HeatingEle_Sel = 0;/* Referenced by: '<S47>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_HoodAjar_D = 0;/* Referenced by: '<S183>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_HoodAjar_SD = 0;/* Referenced by: '<S184>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_KeyRunCrnk_BattOV_D = 0;/* Referenced by: '<S214>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_KeyRunCrnk_BattOV_Init =
    0;                                 /* Referenced by: '<S220>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_KeyRunCrnk_BattOV_SD = 0;/* Referenced by: '<S215>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_KeyRun_OV_BattCrit_D = 0;/* Referenced by: '<S216>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_KeyRun_OV_BattCrit_Init =
    0;                                 /* Referenced by: '<S221>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_KeyRun_OV_BattCrit_SD = 0;/* Referenced by: '<S217>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_LTCLThrmlMode_SD = 0;/* Referenced by: '<S185>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_Msg7_BattFlts_Dsbl = 1;/* Referenced by: '<S88>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_OV1_DispSt = 1;/* Referenced by: '<S105>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_OV_BattDischg_State_SD =
    0;                                 /* Referenced by: '<S136>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_OV_BattFlts_Dsbl = 1;/* Referenced by: '<S106>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_PropSysActv_D = 0;/* Referenced by: '<S186>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_PropSysActv_SD = 0;/* Referenced by: '<S187>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_PwrSnkDispReq_D = 0;/* Referenced by: '<S188>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_PwrSnkDispReq_SD = 0;/* Referenced by: '<S189>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_RegenBrkInhb_D = 0;/* Referenced by: '<S190>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_RegenBrkInhb_SD = 0;/* Referenced by: '<S191>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_SSDR_KeySts_SD = 0;/* Referenced by: '<S192>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_SelInhRegBrkLevel = 0;/* Referenced by: '<S140>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_SelectOldApp_PwrDispSt =
    0;                                 /* Referenced by: '<S135>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_TravelDistance_SD = 0;/* Referenced by: '<S193>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_VhlPlgInDsbl = 0;/* Referenced by: '<S69>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_VhlPlgInDsbl1 = 0;/* Referenced by: '<S70>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_VhlPlgInEnbl = 1;/* Referenced by: '<S71>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_VhlPlgInEnbl1 = 0;/* Referenced by: '<S72>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(boolean, PDTR_VAR_INIT) KePDTR_b_eBurn_Stages_SD = 0;/* Referenced by: '<S194>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(TeHVTR_e_HV_BatCntctrStat, PDTR_VAR_INIT)
    KePDTR_e_BatCntctrStat_D = CeHVTR_e_Closed;/* Referenced by: '<S195>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(TeTHMR_e_CabHeatThrmlState, PDTR_VAR_INIT)
    KePDTR_e_CabHeatThermalState_D = CeTHMR_e_NoCabinHeating;/* Referenced by: '<S196>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(TeTHMR_e_CabinThermalMode, PDTR_VAR_INIT)
    KePDTR_e_CabThermalMode_D = CeTHMR_e_Cab_NoConditioning;/* Referenced by: '<S197>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(TePDTR_e_BattDischg_State, PDTR_VAR_INIT)
    KePDTR_e_EngOrBattPwrDschg_State_D = CePDTR_e_No_Dischrg;/* Referenced by: '<S218>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(TePDTR_e_BattDischg_State, PDTR_VAR_INIT)
    KePDTR_e_EngOrBattPwrDschg_State_Init = CePDTR_e_No_Dischrg;/* Referenced by: '<S222>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(TeHVTR_e_HVOverVoltFailure, PDTR_VAR_INIT)
    KePDTR_e_HVOverVoltFailure_D = CeHVTR_e_HVOverVoltPass;/* Referenced by: '<S198>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(TeTHMR_e_LTCLThermalMode, PDTR_VAR_INIT)
    KePDTR_e_LTCLThrmlMode_D = CeTHMR_e_LTCLActvPsvHeating;/* Referenced by: '<S199>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(TePDTR_e_BattDischg_State, PDTR_VAR_INIT)
    KePDTR_e_OV_BattDischg_State_D = CePDTR_e_No_Dischrg;/* Referenced by: '<S137>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(TeSSDR_e_KeySts, PDTR_VAR_INIT) KePDTR_e_SSDR_KeySts_D =
    CeSSDR_e_KeyOff;                   /* Referenced by: '<S200>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(TePLTR_e_eBurn_Stages, PDTR_VAR_INIT)
    KePDTR_e_eBurn_Stages_D = CePLTR_e_eBurn_NormalStage;/* Referenced by: '<S201>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(float32, PDTR_VAR_INIT) KePDTR_l_TravelDistance_D = 0.0F;/* Referenced by: '<S202>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(float32, PDTR_VAR_INIT) KePDTR_ml_DistAcqMovAvgFilter =
    200.0F;                            /* Referenced by: '<S157>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(float32, PDTR_VAR_INIT) KePDTR_ml_EBurnEnblDownHillSlp =
    100.0F;                            /* Referenced by: '<S158>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(float32, PDTR_VAR_INIT) KePDTR_pct_MinBattSocEBurnHigh =
    95.0F;                             /* Referenced by: '<S161>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(float32, PDTR_VAR_INIT) KePDTR_pct_MinBattSocEBurnLow =
    94.0F;                             /* Referenced by: '<S162>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(float32, PDTR_VAR_INIT) KePDTR_phi_EBurnEnblDownHillSlp =
    10.0F;                             /* Referenced by: '<S156>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(float32, PDTR_VAR_INIT) KePDTR_phi_EstSlopeAngle_D = 0.0F;/* Referenced by: '<S203>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(float32, PDTR_VAR_INIT) KePDTR_phi_InitFilterVal = 0.0F;/* Referenced by: '<S154>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(float32, PDTR_VAR_INIT) KePDTR_t_Msg7delay = 1.0F;/* Referenced by: '<S89>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(float32, PDTR_VAR_INIT) KePDTR_t_Msg7delay_dT = 0.1F;/* Referenced by: '<S90>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(float32, PDTR_VAR_INIT) KePDTR_t_OV_BattDschgSt_MatureTime
    = 1.0F;                            /* Referenced by: '<S33>/Calib' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static volatile CONST(float32, PDTR_VAR_INIT) KePDTR_t_OV_BattDschgSt_Mature_dT =
    0.1F;                              /* Referenced by: '<S34>/Calib' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_PDTR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PDTR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_AC_CompReq_AD;/* '<S4>/Switch11' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_BattAndCab_CndtnSt;/* '<S112>/Logical' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_BattCritic_Msg7;/* '<S15>/LogicalOperator16' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_BattHtrStatus_Latched;/* '<S12>/Logical12' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_BattHtr_StsNotOpr;/* '<S12>/Logical10' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_BattHtr_StsOpr;/* '<S12>/Comparison6' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_BattNotOpt_CndtnSt;/* '<S113>/Logical' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_BattOVFailure;/* '<S16>/LogicalOperator8' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_BattOvrVltg_AD;/* '<S4>/Switch' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_BattTempOvrthrshld;/* '<S13>/Switch2' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_BatteryHeater_NotLocked;/* '<S11>/Logical5' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_CabAllowed_AD;/* '<S4>/Switch14' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_CabHtrStatus_Latched;/* '<S12>/Logical9' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_CabHtr_StsNotOpr;/* '<S12>/Logical7' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_CabHtr_StsOpr;/* '<S12>/Comparison18' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_CabOnly_CndtnSt;/* '<S118>/Logical' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_CabReq_NotAllow_AD;/* '<S4>/Switch13' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_Cab_Cool_Or_Heat_Req;/* '<S7>/Logical8' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_CabinHeater_NotLocked;/* '<S11>/Logical6' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_DisSt_AmbTmpLw;/* '<S12>/Comparison3' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_DisSt_FrcdBattHeat;/* '<S12>/Comparison7' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_DistRollingCheck;/* '<S145>/RelationalOperator' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_Distance_Trigger;/* '<S143>/RelationalOperator' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_EnblFiltRoolingAnlge;/* '<S141>/LogicalOperator' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_EngageThermalLoad_AD;/* '<S4>/Switch15' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_HV_BatRdy_AD;/* '<S4>/Switch2' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_HoodAjar_AD;/* '<S4>/Switch21' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_Inhibit_Regen;/* '<S22>/Switch' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_Msg7_Active;/* '<S92>/AND' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_OV1_Msg7;/* '<S15>/LogicalOperator3' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_OV2_Msg7;/* '<S15>/LogicalOperator10' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_OV_EPD_BattCool_Req_BD;/* '<S8>/Logical1' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_OV_EPD_BattHeat_Req_BD;/* '<S8>/Logical9' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_OV_EPD_CabCond_Req_BD;/* '<S8>/Logical3' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_OV_EPD_ReqPrsnt;/* '<S8>/Logical2' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_PropSysActv_AD;/* '<S4>/Switch23' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_PwrDischrgState1;/* '<S13>/Logical1' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_PwrDischrgState2;/* '<S13>/Logical2' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_PwrDischrgState3;/* '<S13>/Logical3' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_PwrDischrgState4;/* '<S13>/Logical4' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_PwrDischrgState5;/* '<S13>/Logical27' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_PwrDischrgState6;/* '<S13>/Logical28' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_PwrDischrgState7;/* '<S13>/Logical19' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_PwrDischrgState8;/* '<S13>/Logical24' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_PwrSnkDispReq_AD;/* '<S4>/Switch17' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_ThemalFltsEBurnEnbl;/* '<S22>/LogicalOperator1' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_eBurnEnbl_B4;/* '<S146>/Logical2' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_eBurnPhiCheck;/* '<S142>/RelationalOperator' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_eBurnPhiEnbl;/* '<S139>/Logical2' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_b_eBurnSocCheck;/* '<S160>/Switch1' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(TeHVTR_e_HV_BatCntctrStat, PDTR_VAR_INIT) VePDTR_e_BatCntctrStat_AD;/* '<S4>/Switch3' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(TeHTIR_e_HVC_HtrSts, PDTR_VAR_INIT) VePDTR_e_BatteryHeater_Selected;/* '<S42>/Switch1' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(TeTHMR_e_CabHeatThrmlState, PDTR_VAR_INIT)
    VePDTR_e_CabHeatThermalState_AD;   /* '<S4>/Switch7' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(TeTHMR_e_CabinThermalMode, PDTR_VAR_INIT) VePDTR_e_CabThermalMode_AD;/* '<S4>/Switch6' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(TeHTIR_e_HVC_HtrSts, PDTR_VAR_INIT) VePDTR_e_CabinHeater_Selected;/* '<S43>/Switch1' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(TeHVTR_e_HVOverVoltFailure, PDTR_VAR_INIT)
    VePDTR_e_HVOverVoltFailure_AD;     /* '<S4>/Switch5' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(TeTHMR_e_LTCLThermalMode, PDTR_VAR_INIT) VePDTR_e_LTCLThrmlMode_AD;/* '<S4>/Switch8' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(TePDTR_e_BattDischg_State, PDTR_VAR_INIT)
    VePDTR_e_OV_EPD_PwrDischrgState;   /* '<S19>/Switch' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(TePDTR_e_BattDischg_State, PDTR_VAR_INIT)
    VePDTR_e_OV_EPD_PwrDschrg_State_New;/* '<S18>/Merge' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(TeSSDR_e_KeySts, PDTR_VAR_INIT) VePDTR_e_SSDR_KeySts_AD;/* '<S4>/Switch1' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(boolean, PDTR_VAR_INIT) VePDTR_e_eBurnBrakeHot;/* '<S138>/Logical2' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(float32, PDTR_VAR_INIT) VePDTR_phi_RoolingAngle_filter_raw;/* '<S155>/Switch1' */

#endif

#if Rte_SysCon_Variant_PDTR_1

static VAR(float32, PDTR_VAR_INIT) VePDTR_phi_RoolingAngle_filtered;/* '<S141>/Switch' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PDTR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PDTR
#include "MemMap.h"

VAR(B_PDTR_ac_T, PDTR_VAR_INIT) PDTR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PDTR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PDTR
#include "MemMap.h"

VAR(DW_PDTR_ac_T, PDTR_VAR_INIT) PDTR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PDTR
#include "MemMap.h"

/* Previous zero-crossings (trigger) states */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PDTR
#include "MemMap.h"

VAR(PrevZCX_PDTR_ac_T, PDTR_VAR_INIT) PDTR_ac_PrevZCX;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PDTR
#include "MemMap.h"

/* Model step function for TID1 */
#if Rte_SysCon_Variant_PDTR_1

FUNC(void, PDTR_CODE) PDTR_MedTEH(void) /* Explicit Task: MedTEH */
{

#if Rte_SysCon_Variant_PDTR_1

    uint32 delayLen;

#endif

#if Rte_SysCon_Variant_PDTR_1

    uint8 VePDTR_K_Index;

#endif

#if Rte_SysCon_Variant_PDTR_1

    boolean aVarTruthTableCondition_3;

#endif

#if Rte_SysCon_Variant_PDTR_1

    float32 tmpRead;

#endif

#if Rte_SysCon_Variant_PDTR_1

    TeHTIR_e_HVC_HtrSts tmpRead_0;

#endif

#if Rte_SysCon_Variant_PDTR_1

    TeHTIR_e_HVC_HtrSts tmpRead_1;

#endif

#if Rte_SysCon_Variant_PDTR_1

    boolean rtb_Logical5;

#endif

#if Rte_SysCon_Variant_PDTR_1

    boolean rtb_TmpSignalConversionAtVeBTRR_b_BattCo;

#endif

#if Rte_SysCon_Variant_PDTR_1

    boolean rtb_TmpSignalConversionAtVeBTRR_b_BattHe;

#endif

#if Rte_SysCon_Variant_PDTR_1

    boolean rtb_TmpSignalConversionAtVeBTRR_b_Batt_d;

#endif

#if Rte_SysCon_Variant_PDTR_1

    boolean rtb_TmpSignalConversionAtVeTPCR_b_HtrOrE;

#endif

#if Rte_SysCon_Variant_PDTR_1

    boolean rtb_TmpSignalConversionAtVeBTRR_b_BattTe;

#endif

#if Rte_SysCon_Variant_PDTR_1

    boolean rtb_Comparison3_p;

#endif

#if Rte_SysCon_Variant_PDTR_1

    sint16 rtb_VePDTR_K_HoodKeyIndex;

#endif

#if Rte_SysCon_Variant_PDTR_1

    float32 rtb_Delay_b;

#endif

#if Rte_SysCon_Variant_PDTR_1

    boolean rtb_OR1_ft;

#endif

#if Rte_SysCon_Variant_PDTR_1

    float32 rtb_TmpSignalConversionAtVeBTRR_T_CellTe;

#endif

#if Rte_SysCon_Variant_PDTR_1

    boolean rtb_TmpSignalConversionAtSFunctionInport[9];

#endif

#if Rte_SysCon_Variant_PDTR_1

    boolean rtb_OR1;

#endif

#if Rte_SysCon_Variant_PDTR_1

    boolean rtb_TmpSignalConversionAtVeCTRR_b_HVAC_H;

#endif

#if Rte_SysCon_Variant_PDTR_1

    TeBTRR_e_BatCritCondSt rtb_TmpSignalConversionAtVeBTRR_e_HV_Bat;

#endif

#if Rte_SysCon_Variant_PDTR_1

    TeOBCR_e_ChargingLevel rtb_TmpSignalConversionAtVeOBCR_e_Chargi;

#endif

#if Rte_SysCon_Variant_PDTR_1

    TeTHMR_e_BatThrmlSt rtb_TmpSignalConversionAtVeTHMR_e_BatThr;

#endif

#if Rte_SysCon_Variant_PDTR_1

    float32 Switch16;

#endif

#if Rte_SysCon_Variant_PDTR_1

    float32 Switch9;

#endif

#if Rte_SysCon_Variant_PDTR_1

    float32 Switch10;

#endif

#if Rte_SysCon_Variant_PDTR_1

    TePLTR_e_eBurn_Stages Switch12;

#endif

#if Rte_SysCon_Variant_PDTR_1

    sint32 tmp;

#endif

#if Rte_SysCon_Variant_PDTR_1

    TePDTR_e_BattDischg_State tmp_0;

#endif

#if Rte_SysCon_Variant_PDTR_1

    sint32 exitg1;

#endif

#if Rte_SysCon_Variant_PDTR_1

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
    /* Inport: '<Root>/VeFCRR_b_PwrSnkDispReq' */
    (void)Rte_Read_VeFCRR_b_PwrSnkDispReq_Value((&(VePDTR_b_PwrSnkDispReq_AD)));

    /* Inport: '<Root>/VePLTR_e_eBurn_Stages' */
    (void)Rte_Read_VePLTR_e_eBurn_Stages_Value(&Switch12);

    /* Inport: '<Root>/VePLTR_l_TravelDistance' */
    (void)Rte_Read_VePLTR_l_TravelDistance_Value(&Switch16);

    /* Inport: '<Root>/VePLTR_phi_EstSlopeAngle' */
    (void)Rte_Read_VePLTR_phi_EstSlopeAngle_Value(&Switch9);

    /* Inport: '<Root>/VeSRAR_b_RegenBrkInhb' */
    (void)Rte_Read_VeSRAR_b_RegenBrkInhb_Value((&(VePDTR_b_Inhibit_Regen)));

    /* Inport: '<Root>/VeBPCR_Pct_HV_BatPackSOC_Arb' */
    (void)Rte_Read_VeBPCR_Pct_HV_BatPackSOC_Arb_Value(&Switch10);

    /* Inport: '<Root>/VeTHMR_e_LTCLThrmlMode' */
    (void)Rte_Read_VeTHMR_e_LTCLThrmlMode_Value((&(VePDTR_e_LTCLThrmlMode_AD)));

    /* Inport: '<Root>/VeTHMR_e_CabHeatThermalState' */
    (void)Rte_Read_VeTHMR_e_CabHeatThermalState_Value
        ((&(VePDTR_e_CabHeatThermalState_AD)));

    /* Inport: '<Root>/VeTHMR_e_CabThermalMode' */
    (void)Rte_Read_VeTHMR_e_CabThermalMode_Value((&(VePDTR_e_CabThermalMode_AD)));

    /* Inport: '<Root>/VeHPMR_b_PropSysActv' */
    (void)Rte_Read_VeHPMR_b_PropSysActv_Value((&(VePDTR_b_PropSysActv_AD)));

    /* Inport: '<Root>/VeHSWR_b_HoodOpen' */
    (void)Rte_Read_VeHSWR_b_HoodOpen_Value((&(VePDTR_b_HoodAjar_AD)));

    /* Inport: '<Root>/VeTRAR_b_EngageThermalLoad' */
    (void)Rte_Read_VeTRAR_b_EngageThermalLoad_Value
        ((&(VePDTR_b_EngageThermalLoad_AD)));

    /* Inport: '<Root>/VeTHMR_b_CabAllowed' */
    (void)Rte_Read_VeTHMR_b_CabAllowed_Value((&(VePDTR_b_CabAllowed_AD)));

    /* Inport: '<Root>/VeTHMR_b_CabReq_NotAllow' */
    (void)Rte_Read_VeTHMR_b_CabReq_NotAllow_Value((&(VePDTR_b_CabReq_NotAllow_AD)));

    /* Inport: '<Root>/VeTAIR_b_ACCompReq' */
    (void)Rte_Read_VeTAIR_b_ACCompReq_Value((&(VePDTR_b_AC_CompReq_AD)));

    /* Inport: '<Root>/VeBTRR_b_OoR_Recoverable' */
    (void)Rte_Read_VeBTRR_b_OoR_Recoverable_Value(&aVarTruthTableCondition_3);

    /* Inport: '<Root>/VePWDR_e_HVOverVoltFailure' */
    (void)Rte_Read_VePWDR_e_HVOverVoltFailure_Value
        ((&(VePDTR_e_HVOverVoltFailure_AD)));

    /* Inport: '<Root>/VeBPCR_e_HV_BatCntctrStat' */
    (void)Rte_Read_VeBPCR_e_HV_BatCntctrStat_Value((&(VePDTR_e_BatCntctrStat_AD)));

    /* Inport: '<Root>/VeBPCR_b_HVBatRdy' */
    (void)Rte_Read_VeBPCR_b_HVBatRdy_Value((&(VePDTR_b_HV_BatRdy_AD)));

    /* Inport: '<Root>/VeSSDR_e_KeySts' */
    (void)Rte_Read_VeSSDR_e_KeySts_Value((&(VePDTR_e_SSDR_KeySts_AD)));

    /* Inport: '<Root>/VeBPCR_b_BPCM_OVActv' */
    (void)Rte_Read_VeBPCR_b_BPCM_OVActv_Value((&(VePDTR_b_BattOvrVltg_AD)));

    /* Outputs for Function Call SubSystem: '<Root>/PDTR_MedTEH' */
    /* SignalConversion generated from: '<S1>/VeBTRR_b_BattCondFlt' incorporates:
     *  Inport: '<Root>/VeBTRR_b_BattCondFlt'
     */
    (void)Rte_Read_VeBTRR_b_BattCondFlt_Value
        (&rtb_TmpSignalConversionAtVeBTRR_b_BattCo);

    /* SignalConversion generated from: '<S1>/VeBTRR_e_HV_BatTempCrit_CondState_New' incorporates:
     *  Inport: '<Root>/VeBTRR_e_HV_BatTempCrit_CondState_New'
     */
    (void)Rte_Read_VeBTRR_e_HV_BatTempCrit_CondState_New_Value
        (&rtb_TmpSignalConversionAtVeBTRR_e_HV_Bat);

    /* SignalConversion generated from: '<S1>/VeBTRR_b_BattTempNot_Optml' incorporates:
     *  Inport: '<Root>/VeBTRR_b_BattTempNot_Optml'
     */
    (void)Rte_Read_VeBTRR_b_BattTempNot_Optml_Value
        (&rtb_TmpSignalConversionAtVeBTRR_b_BattTe);

    /* SignalConversion generated from: '<S1>/VeBTRR_T_CellTempMaxUsed' incorporates:
     *  Inport: '<Root>/VeBTRR_T_CellTempMaxUsed'
     */
    (void)Rte_Read_VeBTRR_T_CellTempMaxUsed_Value
        (&rtb_TmpSignalConversionAtVeBTRR_T_CellTe);

    /* SignalConversion generated from: '<S1>/VeOBCR_e_ChargingLevel' incorporates:
     *  Inport: '<Root>/VeOBCR_e_ChargingLevel'
     */
    (void)Rte_Read_VeOBCR_e_ChargingLevel_Value
        (&rtb_TmpSignalConversionAtVeOBCR_e_Chargi);

    /* SignalConversion generated from: '<S1>/VeCTRR_b_HVAC_HeatReq' incorporates:
     *  Inport: '<Root>/VeCTRR_b_HVAC_HeatReq'
     */
    (void)Rte_Read_VeCTRR_b_HVAC_HeatReq_Value
        (&rtb_TmpSignalConversionAtVeCTRR_b_HVAC_H);

    /* SignalConversion generated from: '<S1>/VeHTIR_e_HV_ElecClntHtr_Sts' incorporates:
     *  Inport: '<Root>/VeHTIR_e_HV_ElecClntHtr_Sts'
     */
    (void)Rte_Read_VeHTIR_e_HV_ElecClntHtr_Sts_Value
        ((&(VePDTR_e_BatteryHeater_Selected)));

    /* SignalConversion generated from: '<S1>/VeBTRR_b_BattHeatingFlts' incorporates:
     *  Inport: '<Root>/VeBTRR_b_BattHeatingFlts'
     */
    (void)Rte_Read_VeBTRR_b_BattHeatingFlts_Value
        (&rtb_TmpSignalConversionAtVeBTRR_b_BattHe);

    /* SignalConversion generated from: '<S1>/VeBTRR_b_BattCoolFlts' incorporates:
     *  Inport: '<Root>/VeBTRR_b_BattCoolFlts'
     */
    (void)Rte_Read_VeBTRR_b_BattCoolFlts_Value
        (&rtb_TmpSignalConversionAtVeBTRR_b_Batt_d);

    /* SignalConversion generated from: '<S1>/VeTPCR_b_HtrOrEAC_FltRawPrst' incorporates:
     *  Inport: '<Root>/VeTPCR_b_HtrOrEAC_FltRawPrst'
     */
    (void)Rte_Read_VeTPCR_b_HtrOrEAC_FltRawPrst_Value
        (&rtb_TmpSignalConversionAtVeTPCR_b_HtrOrE);

    /* SignalConversion generated from: '<S1>/VeTHMR_e_BatThrmlSt' incorporates:
     *  Inport: '<Root>/VeTHMR_e_BatThrmlSt'
     */
    (void)Rte_Read_VeTHMR_e_BatThrmlSt_Value
        (&rtb_TmpSignalConversionAtVeTHMR_e_BatThr);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/PDTI_ProcessInputs'
     */
    /* Switch: '<S4>/Switch' incorporates:
     *  Constant: '<S182>/Calib'
     */
    if (KePDTR_b_HV_Bat_OverVltg_SD)
    {
        /* Switch: '<S4>/Switch' incorporates:
         *  Constant: '<S181>/Calib'
         *  Inport: '<Root>/VeBPCR_b_BPCM_OVActv'
         */
        VePDTR_b_BattOvrVltg_AD = KePDTR_b_HV_Bat_OverVltg_D;
    }

    /* End of Switch: '<S4>/Switch' */

    /* Switch: '<S4>/Switch1' incorporates:
     *  Constant: '<S192>/Calib'
     */
    if (KePDTR_b_SSDR_KeySts_SD)
    {
        /* Switch: '<S4>/Switch1' incorporates:
         *  Constant: '<S200>/Calib'
         *  Inport: '<Root>/VeSSDR_e_KeySts'
         */
        VePDTR_e_SSDR_KeySts_AD = KePDTR_e_SSDR_KeySts_D;
    }

    /* End of Switch: '<S4>/Switch1' */

    /* Switch: '<S4>/Switch2' incorporates:
     *  Constant: '<S180>/Calib'
     */
    if (KePDTR_b_HV_BatRdy_SD)
    {
        /* Switch: '<S4>/Switch2' incorporates:
         *  Constant: '<S179>/Calib'
         *  Inport: '<Root>/VeBPCR_b_HVBatRdy'
         */
        VePDTR_b_HV_BatRdy_AD = KePDTR_b_HV_BatRdy_D;
    }

    /* End of Switch: '<S4>/Switch2' */

    /* Switch: '<S4>/Switch3' incorporates:
     *  Constant: '<S167>/Calib'
     */
    if (KePDTR_b_BatCntctrStat_SD)
    {
        /* Switch: '<S4>/Switch3' incorporates:
         *  Constant: '<S195>/Calib'
         *  Inport: '<Root>/VeBPCR_e_HV_BatCntctrStat'
         */
        VePDTR_e_BatCntctrStat_AD = KePDTR_e_BatCntctrStat_D;
    }

    /* End of Switch: '<S4>/Switch3' */

    /* Switch: '<S4>/Switch5' incorporates:
     *  Constant: '<S177>/Calib'
     */
    if (KePDTR_b_HVOverVoltFailure_SD)
    {
        /* Switch: '<S4>/Switch5' incorporates:
         *  Constant: '<S198>/Calib'
         *  Inport: '<Root>/VePWDR_e_HVOverVoltFailure'
         */
        VePDTR_e_HVOverVoltFailure_AD = KePDTR_e_HVOverVoltFailure_D;
    }

    /* End of Switch: '<S4>/Switch5' */

    /* Switch: '<S4>/Switch11' incorporates:
     *  Constant: '<S166>/Calib'
     */
    if (KePDTR_b_AC_CompReq_SD)
    {
        /* Switch: '<S4>/Switch11' incorporates:
         *  Constant: '<S165>/Calib'
         *  Inport: '<Root>/VeTAIR_b_ACCompReq'
         */
        VePDTR_b_AC_CompReq_AD = KePDTR_b_AC_CompReq_D;
    }

    /* End of Switch: '<S4>/Switch11' */

    /* Switch: '<S4>/Switch13' incorporates:
     *  Constant: '<S172>/Calib'
     */
    if (KePDTR_b_CabReq_NotAllow_SD)
    {
        /* Switch: '<S4>/Switch13' incorporates:
         *  Constant: '<S171>/Calib'
         *  Inport: '<Root>/VeTHMR_b_CabReq_NotAllow'
         */
        VePDTR_b_CabReq_NotAllow_AD = KePDTR_b_CabReq_NotAllow_D;
    }

    /* End of Switch: '<S4>/Switch13' */

    /* Switch: '<S4>/Switch14' incorporates:
     *  Constant: '<S169>/Calib'
     */
    if (KePDTR_b_CabAllowed_SD)
    {
        /* Switch: '<S4>/Switch14' incorporates:
         *  Constant: '<S168>/Calib'
         *  Inport: '<Root>/VeTHMR_b_CabAllowed'
         */
        VePDTR_b_CabAllowed_AD = KePDTR_b_CabAllowed_D;
    }

    /* End of Switch: '<S4>/Switch14' */

    /* Switch: '<S4>/Switch15' incorporates:
     *  Constant: '<S175>/Calib'
     */
    if (KePDTR_b_EngageThermalLoad_SD)
    {
        /* Switch: '<S4>/Switch15' incorporates:
         *  Constant: '<S174>/Calib'
         *  Inport: '<Root>/VeTRAR_b_EngageThermalLoad'
         */
        VePDTR_b_EngageThermalLoad_AD = KePDTR_b_EngageThermalLoad_D;
    }

    /* End of Switch: '<S4>/Switch15' */

    /* Switch: '<S4>/Switch21' incorporates:
     *  Constant: '<S184>/Calib'
     */
    if (KePDTR_b_HoodAjar_SD)
    {
        /* Switch: '<S4>/Switch21' incorporates:
         *  Constant: '<S183>/Calib'
         *  Inport: '<Root>/VeHSWR_b_HoodOpen'
         */
        VePDTR_b_HoodAjar_AD = KePDTR_b_HoodAjar_D;
    }

    /* End of Switch: '<S4>/Switch21' */

    /* Switch: '<S4>/Switch23' incorporates:
     *  Constant: '<S187>/Calib'
     */
    if (KePDTR_b_PropSysActv_SD)
    {
        /* Switch: '<S4>/Switch23' incorporates:
         *  Constant: '<S186>/Calib'
         *  Inport: '<Root>/VeHPMR_b_PropSysActv'
         */
        VePDTR_b_PropSysActv_AD = KePDTR_b_PropSysActv_D;
    }

    /* End of Switch: '<S4>/Switch23' */

    /* Switch: '<S4>/Switch8' incorporates:
     *  Constant: '<S185>/Calib'
     */
    if (KePDTR_b_LTCLThrmlMode_SD)
    {
        /* Switch: '<S4>/Switch8' incorporates:
         *  Constant: '<S199>/Calib'
         *  Inport: '<Root>/VeTHMR_e_LTCLThrmlMode'
         */
        VePDTR_e_LTCLThrmlMode_AD = KePDTR_e_LTCLThrmlMode_D;
    }

    /* End of Switch: '<S4>/Switch8' */

    /* Switch: '<S4>/Switch6' incorporates:
     *  Constant: '<S173>/Calib'
     */
    if (KePDTR_b_CabThermalMod_SD)
    {
        /* Switch: '<S4>/Switch6' incorporates:
         *  Constant: '<S197>/Calib'
         *  Inport: '<Root>/VeTHMR_e_CabThermalMode'
         */
        VePDTR_e_CabThermalMode_AD = KePDTR_e_CabThermalMode_D;
    }

    /* End of Switch: '<S4>/Switch6' */

    /* Switch: '<S4>/Switch7' incorporates:
     *  Constant: '<S170>/Calib'
     */
    if (KePDTR_b_CabHeatThermalState_SD)
    {
        /* Switch: '<S4>/Switch7' incorporates:
         *  Constant: '<S196>/Calib'
         *  Inport: '<Root>/VeTHMR_e_CabHeatThermalState'
         */
        VePDTR_e_CabHeatThermalState_AD = KePDTR_e_CabHeatThermalState_D;
    }

    /* End of Switch: '<S4>/Switch7' */

    /* Switch: '<S4>/Switch9' incorporates:
     *  Constant: '<S176>/Calib'
     */
    if (KePDTR_b_EstSlopeAngle_SD)
    {
        /* Switch: '<S4>/Switch9' incorporates:
         *  Constant: '<S203>/Calib'
         */
        Switch9 = KePDTR_phi_EstSlopeAngle_D;
    }

    /* End of Switch: '<S4>/Switch9' */

    /* Switch: '<S4>/Switch10' incorporates:
     *  Constant: '<S178>/Calib'
     */
    if (KePDTR_b_HV_BatPackSOC_Arb_SD)
    {
        /* Switch: '<S4>/Switch10' incorporates:
         *  Constant: '<S164>/Calib'
         */
        Switch10 = KePDTR_Pct_HV_BatPackSOC_Arb_D;
    }

    /* End of Switch: '<S4>/Switch10' */

    /* Switch: '<S4>/Switch12' incorporates:
     *  Constant: '<S194>/Calib'
     */
    if (KePDTR_b_eBurn_Stages_SD)
    {
        /* Switch: '<S4>/Switch12' incorporates:
         *  Constant: '<S201>/Calib'
         */
        Switch12 = KePDTR_e_eBurn_Stages_D;
    }

    /* End of Switch: '<S4>/Switch12' */

    /* Switch: '<S4>/Switch16' incorporates:
     *  Constant: '<S193>/Calib'
     */
    if (KePDTR_b_TravelDistance_SD)
    {
        /* Switch: '<S4>/Switch16' incorporates:
         *  Constant: '<S202>/Calib'
         */
        Switch16 = KePDTR_l_TravelDistance_D;
    }

    /* End of Switch: '<S4>/Switch16' */

    /* Switch: '<S4>/Switch17' incorporates:
     *  Constant: '<S189>/Calib'
     */
    if (KePDTR_b_PwrSnkDispReq_SD)
    {
        /* Switch: '<S4>/Switch17' incorporates:
         *  Constant: '<S188>/Calib'
         *  Inport: '<Root>/VeFCRR_b_PwrSnkDispReq'
         */
        VePDTR_b_PwrSnkDispReq_AD = KePDTR_b_PwrSnkDispReq_D;
    }

    /* End of Switch: '<S4>/Switch17' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/PDTC_BattDschgSt'
     */
    /* Logic: '<S6>/Logical5' incorporates:
     *  Constant: '<S23>/Constant'
     *  Constant: '<S24>/Constant'
     *  RelationalOperator: '<S6>/Comparison11'
     *  RelationalOperator: '<S6>/Comparison4'
     */
    rtb_Logical5 = (((CeBTRR_e_BatMarginal == ((uint32)
                       rtb_TmpSignalConversionAtVeBTRR_e_HV_Bat)) || (((uint32)
                       rtb_TmpSignalConversionAtVeBTRR_e_HV_Bat) ==
                      CeBTRR_e_BatCrit)) || aVarTruthTableCondition_3);

    /* Switch: '<S7>/Switch' incorporates:
     *  Constant: '<S27>/Constant'
     *  Constant: '<S28>/Constant'
     *  Constant: '<S29>/Constant'
     *  Constant: '<S30>/Constant'
     *  Constant: '<S31>/Calib'
     *  Logic: '<S7>/Logical1'
     *  Logic: '<S7>/Logical5'
     *  Logic: '<S7>/Logical6'
     *  Logic: '<S7>/Logical7'
     *  Logic: '<S7>/Logical9'
     *  RelationalOperator: '<S7>/Comparison1'
     *  RelationalOperator: '<S7>/Comparison2'
     *  RelationalOperator: '<S7>/Comparison3'
     *  RelationalOperator: '<S7>/Comparison4'
     */
    if (KePDTR_b_EnblNewModCabCondReq)
    {
        rtb_OR1_ft = (rtb_TmpSignalConversionAtVeCTRR_b_HVAC_H ||
                      (VePDTR_b_AC_CompReq_AD));
    }
    else
    {
        rtb_OR1_ft = (((((((uint32)VePDTR_e_CabThermalMode_AD) ==
                          CeTHMR_e_Cab_Heating) || (((uint32)
                           VePDTR_e_CabHeatThermalState_AD) ==
                          CeTHMR_e_CabinActiveHeating)) || (((uint32)
                          VePDTR_e_CabHeatThermalState_AD) ==
                         CeTHMR_e_CabinActivePassiveHeating)) &&
                       rtb_TmpSignalConversionAtVeCTRR_b_HVAC_H) || ((((uint32)
                         VePDTR_e_CabThermalMode_AD) == CeTHMR_e_Cab_Cooling) &&
                       (VePDTR_b_AC_CompReq_AD)));
    }

    /* End of Switch: '<S7>/Switch' */

    /* Logic: '<S7>/Logical8' incorporates:
     *  Logic: '<S7>/Logical10'
     */
    VePDTR_b_Cab_Cool_Or_Heat_Req = ((rtb_OR1_ft &&
        (!VePDTR_b_CabReq_NotAllow_AD)) && (VePDTR_b_CabAllowed_AD));

    /* Logic: '<S17>/Logical3' incorporates:
     *  Constant: '<S107>/Constant'
     *  Constant: '<S108>/Constant'
     *  Constant: '<S109>/Constant'
     *  Constant: '<S110>/Constant'
     *  Constant: '<S111>/Constant'
     *  RelationalOperator: '<S17>/Comparison1'
     *  RelationalOperator: '<S17>/Comparison2'
     *  RelationalOperator: '<S17>/Comparison3'
     *  RelationalOperator: '<S17>/Comparison4'
     *  RelationalOperator: '<S17>/Comparison5'
     */
    rtb_TmpSignalConversionAtVeCTRR_b_HVAC_H = (((((((uint32)
        rtb_TmpSignalConversionAtVeOBCR_e_Chargi) == CeOBCR_e_ChargingLvlAC1) ||
        (((uint32)rtb_TmpSignalConversionAtVeOBCR_e_Chargi) ==
         CeOBCR_e_ChargingLvlAC2)) || (((uint32)
        rtb_TmpSignalConversionAtVeOBCR_e_Chargi) == CeOBCR_e_ChargingLvlAC3)) ||
        (((uint32)rtb_TmpSignalConversionAtVeOBCR_e_Chargi) ==
         CeOBCR_e_ChargingLvlDC1)) || (((uint32)
        rtb_TmpSignalConversionAtVeOBCR_e_Chargi) == CeOBCR_e_ChargingLvlDC2));

    /* Logic: '<S16>/LogicalOperator2' incorporates:
     *  Logic: '<S15>/LogicalOperator4'
     */
    aVarTruthTableCondition_3 = !VePDTR_b_HV_BatRdy_AD;

    /* Logic: '<S16>/LogicalOperator3' incorporates:
     *  Logic: '<S15>/LogicalOperator1'
     */
    rtb_TmpSignalConversionAtVeBTRR_b_BattCo =
        !rtb_TmpSignalConversionAtVeBTRR_b_BattCo;

    /* Logic: '<S16>/LogicalOperator8' incorporates:
     *  Constant: '<S100>/Constant'
     *  Constant: '<S101>/Constant'
     *  Constant: '<S102>/Calib'
     *  Constant: '<S103>/Calib'
     *  Constant: '<S104>/Calib'
     *  Constant: '<S105>/Calib'
     *  Constant: '<S106>/Calib'
     *  Constant: '<S94>/Constant'
     *  Constant: '<S95>/Constant'
     *  Constant: '<S96>/Constant'
     *  Constant: '<S97>/Constant'
     *  Constant: '<S98>/Constant'
     *  Constant: '<S99>/Constant'
     *  Logic: '<S16>/LogicalOperator'
     *  Logic: '<S16>/LogicalOperator1'
     *  Logic: '<S16>/LogicalOperator10'
     *  Logic: '<S16>/LogicalOperator11'
     *  Logic: '<S16>/LogicalOperator2'
     *  Logic: '<S16>/LogicalOperator3'
     *  Logic: '<S16>/LogicalOperator4'
     *  Logic: '<S16>/LogicalOperator5'
     *  Logic: '<S16>/LogicalOperator6'
     *  Logic: '<S16>/LogicalOperator7'
     *  Logic: '<S16>/LogicalOperator9'
     *  RelationalOperator: '<S16>/RelationalOperator'
     *  RelationalOperator: '<S16>/RelationalOperator1'
     *  RelationalOperator: '<S16>/RelationalOperator2'
     *  RelationalOperator: '<S16>/RelationalOperator3'
     *  RelationalOperator: '<S16>/RelationalOperator4'
     *  RelationalOperator: '<S16>/RelationalOperator5'
     *  RelationalOperator: '<S16>/RelationalOperator8'
     *  RelationalOperator: '<S16>/RelationalOperator9'
     */
    VePDTR_b_BattOVFailure = (((((((VePDTR_b_BattOvrVltg_AD) &&
        (((CeSSDR_e_KeyRun == ((uint32)VePDTR_e_SSDR_KeySts_AD)) || (((uint32)
        VePDTR_e_SSDR_KeySts_AD) == CeSSDR_e_KeyPostCrnk)) ||
         ((rtb_TmpSignalConversionAtVeCTRR_b_HVAC_H && (((uint32)
        VePDTR_e_SSDR_KeySts_AD) == CeSSDR_e_KeyCrank)) && (KePDTR_b_EnblCrnk_OV))))
        && aVarTruthTableCondition_3) && (((uint32)VePDTR_e_BatCntctrStat_AD) ==
        CeHVTR_e_Closed)) && (rtb_TmpSignalConversionAtVeBTRR_b_BattCo ||
        (KePDTR_b_OV_BattFlts_Dsbl))) && (KePDTR_b_OV1_DispSt)) ||
        ((((KePDTR_b_HVNoRegen_DispSt) && (CeHVTR_e_HVOverVoltFailureNoRegenLimp
        == ((uint32)VePDTR_e_HVOverVoltFailure_AD))) || ((((uint32)
        VePDTR_e_HVOverVoltFailure_AD) ==
        CeHVTR_e_HVOverVoltFailureLimVehicleSpd) && (KePDTR_b_HVLimSpd_DispSt)))
         && ((CeSSDR_e_KeyCrank == ((uint32)VePDTR_e_SSDR_KeySts_AD)) ||
             (((uint32)VePDTR_e_SSDR_KeySts_AD) == CeSSDR_e_KeyPostCrnk))));

    /* Outputs for Atomic SubSystem: '<S147>/Hysteresis' */
    /* Switch: '<S160>/Switch1' incorporates:
     *  Constant: '<S161>/Calib'
     *  RelationalOperator: '<S160>/GreaterThan'
     */
    if (Switch10 > KePDTR_pct_MinBattSocEBurnHigh)
    {
        /* Switch: '<S160>/Switch1' incorporates:
         *  Constant: '<S160>/ConstantValue'
         */
        VePDTR_b_eBurnSocCheck = true;
    }
    else
    {
        /* Switch: '<S160>/Switch1' incorporates:
         *  Constant: '<S162>/Calib'
         *  RelationalOperator: '<S160>/GreaterThan1'
         *  UnitDelay: '<S160>/UnitDelay'
         */
        VePDTR_b_eBurnSocCheck = ((Switch10 >= KePDTR_pct_MinBattSocEBurnLow) &&
            (VePDTR_b_eBurnSocCheck));
    }

    /* End of Switch: '<S160>/Switch1' */
    /* End of Outputs for SubSystem: '<S147>/Hysteresis' */

    /* Switch: '<S22>/Switch' incorporates:
     *  Constant: '<S140>/Calib'
     *  Constant: '<S191>/Calib'
     *  Switch: '<S4>/Switch4'
     */
    if (KePDTR_b_SelInhRegBrkLevel)
    {
        /* Outputs for Function Call SubSystem: '<S1>/PDTI_ProcessInputs' */
        /* Switch: '<S4>/Switch4' incorporates:
         *  Constant: '<S191>/Calib'
         */
        if (KePDTR_b_RegenBrkInhb_SD)
        {
            /* Switch: '<S22>/Switch' incorporates:
             *  Constant: '<S190>/Calib'
             *  Inport: '<Root>/VeSRAR_b_RegenBrkInhb'
             *  Logic: '<S22>/LogicalOperator2'
             */
            VePDTR_b_Inhibit_Regen = !KePDTR_b_RegenBrkInhb_D;
        }
        else
        {
            /* Switch: '<S22>/Switch' incorporates:
             *  Inport: '<Root>/VeSRAR_b_RegenBrkInhb'
             *  Logic: '<S22>/LogicalOperator2'
             */
            VePDTR_b_Inhibit_Regen = !VePDTR_b_Inhibit_Regen;
        }

        /* End of Outputs for SubSystem: '<S1>/PDTI_ProcessInputs' */
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S1>/PDTI_ProcessInputs' */
        if (KePDTR_b_RegenBrkInhb_SD)
        {
            /* Switch: '<S4>/Switch4' incorporates:
             *  Constant: '<S190>/Calib'
             *  Inport: '<Root>/VeSRAR_b_RegenBrkInhb'
             *  Switch: '<S22>/Switch'
             */
            VePDTR_b_Inhibit_Regen = KePDTR_b_RegenBrkInhb_D;
        }

        /* End of Outputs for SubSystem: '<S1>/PDTI_ProcessInputs' */
    }

    /* End of Switch: '<S22>/Switch' */

    /* Logic: '<S138>/Logical2' incorporates:
     *  Constant: '<S148>/Constant'
     *  Constant: '<S149>/Constant'
     *  Constant: '<S150>/Constant'
     *  RelationalOperator: '<S138>/Comparison1'
     *  RelationalOperator: '<S138>/Comparison2'
     *  RelationalOperator: '<S138>/Comparison3'
     */
    VePDTR_e_eBurnBrakeHot = (((((uint32)Switch12) == CePLTR_e_eBurn_Stage1) ||
        (((uint32)Switch12) == CePLTR_e_eBurn_Stage2)) || (((uint32)Switch12) ==
        CePLTR_e_eBurn_Stage3));

    /* Logic: '<S22>/LogicalOperator' incorporates:
     *  Logic: '<S8>/Logical4'
     *  Logic: '<S8>/Logical5'
     *  Logic: '<S8>/Logical6'
     */
    rtb_OR1_ft = !rtb_TmpSignalConversionAtVeBTRR_b_Batt_d;
    rtb_TmpSignalConversionAtVeTPCR_b_HtrOrE =
        !rtb_TmpSignalConversionAtVeTPCR_b_HtrOrE;
    rtb_TmpSignalConversionAtVeBTRR_b_Batt_d =
        !rtb_TmpSignalConversionAtVeBTRR_b_BattHe;

    /* Logic: '<S22>/LogicalOperator1' incorporates:
     *  Logic: '<S22>/LogicalOperator'
     */
    VePDTR_b_ThemalFltsEBurnEnbl = ((rtb_TmpSignalConversionAtVeBTRR_b_Batt_d &&
        rtb_OR1_ft) && rtb_TmpSignalConversionAtVeTPCR_b_HtrOrE);

    /* Logic: '<S139>/Logical2' incorporates:
     *  Logic: '<S146>/Logical2'
     */
    rtb_TmpSignalConversionAtVeBTRR_b_BattHe = ((((VePDTR_b_eBurnSocCheck) &&
        (VePDTR_b_PropSysActv_AD)) && (VePDTR_b_Inhibit_Regen)) &&
        (VePDTR_e_eBurnBrakeHot));

    /* Logic: '<S139>/Logical2' */
    VePDTR_b_eBurnPhiEnbl = (rtb_TmpSignalConversionAtVeBTRR_b_BattHe &&
        (VePDTR_b_ThemalFltsEBurnEnbl));

    /* Switch: '<S144>/Switch' incorporates:
     *  UnitDelay: '<S144>/UnitDelay1'
     */
    if (!VePDTR_b_eBurnPhiEnbl)
    {
        PDTR_ac_DW.UnitDelay1_DSTATE = Switch16;
    }

    /* End of Switch: '<S144>/Switch' */

    /* Sum: '<S144>/Add' incorporates:
     *  UnitDelay: '<S144>/UnitDelay1'
     */
    Switch10 = Switch16 - PDTR_ac_DW.UnitDelay1_DSTATE;

    /* Sum: '<S143>/Add' incorporates:
     *  Constant: '<S157>/Calib'
     *  Math: '<S143>/Mod'
     */
    Switch16 = Switch10 - rt_modf_16a(Switch10, KePDTR_ml_DistAcqMovAvgFilter);

    /* RelationalOperator: '<S143>/RelationalOperator' incorporates:
     *  Delay: '<S143>/Delay'
     */
    VePDTR_b_Distance_Trigger = (Switch16 != PDTR_ac_DW.Delay_DSTATE);

    /* Outputs for Triggered SubSystem: '<S22>/Moving_Avg_Filter_Angle' incorporates:
     *  TriggerPort: '<S141>/Trigger'
     */
    if ((VePDTR_b_Distance_Trigger) && (((uint32)
            PDTR_ac_PrevZCX.Moving_Avg_Filter_Angle_Trig_ZCE) != POS_ZCSIG))
    {
        /* Delay: '<S141>/Delay' incorporates:
         *  Constant: '<S153>/Calib'
         */
        if (KePDTR_K_MovAvgOrder < 1.0F)
        {
            /* Delay: '<S141>/Delay' */
            rtb_Delay_b = Switch9;
        }
        else
        {
            if (KePDTR_K_MovAvgOrder > 100.0F)
            {
                delayLen = 100U;
            }
            else
            {
                delayLen = (uint32)KePDTR_K_MovAvgOrder;
            }

            if (delayLen <= PDTR_ac_DW.CircBufIdx)
            {
                delayLen = PDTR_ac_DW.CircBufIdx - delayLen;
            }
            else
            {
                delayLen = (PDTR_ac_DW.CircBufIdx - delayLen) + 100U;
            }

            /* Delay: '<S141>/Delay' */
            rtb_Delay_b = PDTR_ac_DW.Delay_DSTATE_d[delayLen];
        }

        /* End of Delay: '<S141>/Delay' */

        /* Sum: '<S141>/Add' incorporates:
         *  UnitDelay: '<S141>/UnitDelay'
         */
        PDTR_ac_DW.UnitDelay_DSTATE = (PDTR_ac_DW.UnitDelay_DSTATE + Switch9) -
            rtb_Delay_b;

        /* Outputs for Atomic SubSystem: '<S141>/EdgeRising' */
        /* Logic: '<S152>/OR1' incorporates:
         *  UnitDelay: '<S152>/Unit Delay'
         */
        rtb_OR1 = !PDTR_ac_DW.UnitDelay_DSTATE_g;

        /* Update for UnitDelay: '<S152>/Unit Delay' */
        PDTR_ac_DW.UnitDelay_DSTATE_g = VePDTR_b_eBurnPhiEnbl;

        /* Outputs for Atomic SubSystem: '<S141>/CountDownResetEnabled' */
        /* Switch: '<S151>/Switch1' incorporates:
         *  Constant: '<S151>/ConstantValue'
         *  Constant: '<S153>/Calib'
         *  DataTypeConversion: '<S141>/Data Type Conversion'
         *  Logic: '<S151>/AND'
         *  Logic: '<S152>/AND'
         *  RelationalOperator: '<S151>/GreaterThan'
         *  Switch: '<S151>/Switch2'
         *  UnitDelay: '<S151>/UnitDelay'
         */
        if ((VePDTR_b_eBurnPhiEnbl) && rtb_OR1)
        {
            PDTR_ac_DW.UnitDelay_DSTATE_j = (uint16)KePDTR_K_MovAvgOrder;
        }
        else
        {
            if ((VePDTR_b_eBurnPhiEnbl) && (((sint32)
                    PDTR_ac_DW.UnitDelay_DSTATE_j) > 0))
            {
                /* UnitDelay: '<S151>/UnitDelay' incorporates:
                 *  Constant: '<S151>/ConstantValue1'
                 *  Sum: '<S151>/Subtraction'
                 *  Switch: '<S151>/Switch2'
                 */
                PDTR_ac_DW.UnitDelay_DSTATE_j = (uint16)((sint32)(((sint32)
                    PDTR_ac_DW.UnitDelay_DSTATE_j) - 1));
            }
        }

        /* End of Switch: '<S151>/Switch1' */
        /* End of Outputs for SubSystem: '<S141>/EdgeRising' */

        /* Logic: '<S141>/LogicalOperator' incorporates:
         *  Constant: '<S151>/ConstantValue2'
         *  RelationalOperator: '<S151>/GreaterThan1'
         *  UnitDelay: '<S151>/UnitDelay'
         */
        VePDTR_b_EnblFiltRoolingAnlge = (((sint32)PDTR_ac_DW.UnitDelay_DSTATE_j)
            <= 0);

        /* End of Outputs for SubSystem: '<S141>/CountDownResetEnabled' */

        /* Outputs for Atomic SubSystem: '<S141>/ProtectedDivision' */
        /* Switch: '<S155>/Switch1' incorporates:
         *  Constant: '<S153>/Calib'
         *  Constant: '<S155>/ConstantValue'
         *  Constant: '<S155>/ConstantValue1'
         *  Constant: '<S155>/ConstantValue2'
         *  Constant: '<S155>/ConstantValue3'
         *  Logic: '<S155>/AND'
         *  RelationalOperator: '<S155>/GreaterThanorEqual'
         *  RelationalOperator: '<S155>/GreaterThanorEqual1'
         *  RelationalOperator: '<S155>/NotEqual'
         *  RelationalOperator: '<S155>/NotEqual1'
         *  Switch: '<S155>/Switch2'
         *  Switch: '<S155>/Switch3'
         *  UnitDelay: '<S141>/UnitDelay'
         */
        if ((PDTR_ac_DW.UnitDelay_DSTATE != 0.0F) && (KePDTR_K_MovAvgOrder !=
                0.0F))
        {
            /* Switch: '<S155>/Switch1' incorporates:
             *  Product: '<S155>/Division'
             */
            VePDTR_phi_RoolingAngle_filter_raw = PDTR_ac_DW.UnitDelay_DSTATE /
                KePDTR_K_MovAvgOrder;
        }
        else if (PDTR_ac_DW.UnitDelay_DSTATE > 0.0F)
        {
            /* Switch: '<S155>/Switch2' incorporates:
             *  Constant: '<S155>/MAXFLOAT'
             *  Switch: '<S155>/Switch1'
             */
            VePDTR_phi_RoolingAngle_filter_raw = 3.402823466E+38F;
        }
        else if (PDTR_ac_DW.UnitDelay_DSTATE < 0.0F)
        {
            /* Switch: '<S155>/Switch3' incorporates:
             *  Constant: '<S155>/MINFLOAT'
             *  Switch: '<S155>/Switch1'
             *  Switch: '<S155>/Switch2'
             */
            VePDTR_phi_RoolingAngle_filter_raw = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S155>/Switch1' incorporates:
             *  Constant: '<S155>/ConstantValue4'
             *  Switch: '<S155>/Switch2'
             *  Switch: '<S155>/Switch3'
             */
            VePDTR_phi_RoolingAngle_filter_raw = 0.0F;
        }

        /* End of Switch: '<S155>/Switch1' */
        /* End of Outputs for SubSystem: '<S141>/ProtectedDivision' */

        /* Switch: '<S141>/Switch' */
        if (VePDTR_b_EnblFiltRoolingAnlge)
        {
            /* Switch: '<S141>/Switch' */
            VePDTR_phi_RoolingAngle_filtered =
                VePDTR_phi_RoolingAngle_filter_raw;
        }
        else
        {
            /* Switch: '<S141>/Switch' incorporates:
             *  Constant: '<S154>/Calib'
             */
            VePDTR_phi_RoolingAngle_filtered = KePDTR_phi_InitFilterVal;
        }

        /* End of Switch: '<S141>/Switch' */

        /* Update for Delay: '<S141>/Delay' */
        PDTR_ac_DW.Delay_DSTATE_d[PDTR_ac_DW.CircBufIdx] = Switch9;
        if (PDTR_ac_DW.CircBufIdx < 99U)
        {
            PDTR_ac_DW.CircBufIdx++;
        }
        else
        {
            PDTR_ac_DW.CircBufIdx = 0U;
        }

        /* End of Update for Delay: '<S141>/Delay' */
    }

    /* End of Outputs for SubSystem: '<S22>/Moving_Avg_Filter_Angle' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/PDTR_MedTEH' */

    /* Inport: '<Root>/VeHTIR_e_HV_ElecClntHtr2_Sts' */
    (void)Rte_Read_VeHTIR_e_HV_ElecClntHtr2_Sts_Value
        ((&(VePDTR_e_CabinHeater_Selected)));

    /* Inport: '<Root>/VeAATR_T_EstAmbAirTemp' */
    (void)Rte_Read_VeAATR_T_EstAmbAirTemp_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<Root>/PDTR_MedTEH' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/PDTC_BattDschgSt'
     */
    /* Outputs for Triggered SubSystem: '<S22>/Moving_Avg_Filter_Angle' incorporates:
     *  TriggerPort: '<S141>/Trigger'
     */
    PDTR_ac_PrevZCX.Moving_Avg_Filter_Angle_Trig_ZCE = VePDTR_b_Distance_Trigger
        ? ((ZCSigState)1) : ((ZCSigState)0);

    /* End of Outputs for SubSystem: '<S22>/Moving_Avg_Filter_Angle' */

    /* RelationalOperator: '<S142>/RelationalOperator' incorporates:
     *  Constant: '<S156>/Calib'
     */
    VePDTR_b_eBurnPhiCheck = (VePDTR_phi_RoolingAngle_filtered >
        KePDTR_phi_EBurnEnblDownHillSlp);

    /* Switch: '<S145>/Switch' incorporates:
     *  UnitDelay: '<S145>/UnitDelay1'
     */
    if (!VePDTR_b_eBurnPhiCheck)
    {
        PDTR_ac_DW.UnitDelay1_DSTATE_g = Switch10;
    }

    /* End of Switch: '<S145>/Switch' */

    /* RelationalOperator: '<S145>/RelationalOperator' incorporates:
     *  Constant: '<S158>/Calib'
     *  Sum: '<S145>/Add'
     *  UnitDelay: '<S145>/UnitDelay1'
     */
    VePDTR_b_DistRollingCheck = ((Switch10 - PDTR_ac_DW.UnitDelay1_DSTATE_g) >
        KePDTR_ml_EBurnEnblDownHillSlp);

    /* Logic: '<S146>/Logical2' incorporates:
     *  Constant: '<S159>/Calib'
     */
    VePDTR_b_eBurnEnbl_B4 = ((((rtb_TmpSignalConversionAtVeBTRR_b_BattHe &&
        (VePDTR_b_eBurnPhiCheck)) && (VePDTR_b_DistRollingCheck)) &&
        (VePDTR_b_ThemalFltsEBurnEnbl)) && (KePDTR_b_EnbleBurnFlag));

    /* Logic: '<S8>/Logical2' incorporates:
     *  Logic: '<S13>/Logical18'
     */
    rtb_TmpSignalConversionAtVeBTRR_b_BattHe = ((VePDTR_b_BattOVFailure) ||
        (VePDTR_b_EngageThermalLoad_AD));

    /* Logic: '<S8>/Logical2' incorporates:
     *  Constant: '<S32>/Calib'
     *  Logic: '<S8>/Logical7'
     */
    VePDTR_b_OV_EPD_ReqPrsnt = ((rtb_TmpSignalConversionAtVeBTRR_b_BattHe ||
        (VePDTR_b_eBurnEnbl_B4)) || ((VePDTR_b_PwrSnkDispReq_AD) &&
        (KePDTR_b_EnblPwrSink)));

    /* Logic: '<S8>/Logical1' */
    VePDTR_b_OV_EPD_BattCool_Req_BD = ((VePDTR_b_OV_EPD_ReqPrsnt) && rtb_OR1_ft);

    /* Logic: '<S8>/Logical3' */
    VePDTR_b_OV_EPD_CabCond_Req_BD = ((VePDTR_b_OV_EPD_ReqPrsnt) &&
        rtb_TmpSignalConversionAtVeTPCR_b_HtrOrE);

    /* Logic: '<S8>/Logical9' */
    VePDTR_b_OV_EPD_BattHeat_Req_BD = ((VePDTR_b_OV_EPD_ReqPrsnt) &&
        rtb_TmpSignalConversionAtVeBTRR_b_Batt_d);

    /* Logic: '<S13>/Logical7' incorporates:
     *  Logic: '<S13>/Logical10'
     *  Logic: '<S13>/Logical12'
     *  Logic: '<S13>/Logical15'
     *  Logic: '<S13>/Logical20'
     */
    rtb_TmpSignalConversionAtVeTPCR_b_HtrOrE = !VePDTR_b_Cab_Cool_Or_Heat_Req;

    /* Logic: '<S13>/Logical8' incorporates:
     *  Logic: '<S13>/Logical13'
     *  Logic: '<S13>/Logical16'
     *  Logic: '<S13>/Logical21'
     */
    rtb_TmpSignalConversionAtVeBTRR_b_Batt_d =
        !rtb_TmpSignalConversionAtVeBTRR_b_BattTe;

    /* Logic: '<S13>/Logical1' incorporates:
     *  Logic: '<S13>/Logical7'
     *  Logic: '<S13>/Logical8'
     */
    VePDTR_b_PwrDischrgState1 = ((((VePDTR_b_BattOVFailure) && rtb_Logical5) &&
        rtb_TmpSignalConversionAtVeTPCR_b_HtrOrE) &&
        rtb_TmpSignalConversionAtVeBTRR_b_Batt_d);

    /* Logic: '<S13>/Logical2' incorporates:
     *  Logic: '<S13>/Logical9'
     */
    VePDTR_b_PwrDischrgState2 = (((rtb_TmpSignalConversionAtVeBTRR_b_BattHe && (
        !rtb_Logical5)) && rtb_TmpSignalConversionAtVeTPCR_b_HtrOrE) &&
        rtb_TmpSignalConversionAtVeBTRR_b_BattTe);

    /* RelationalOperator: '<S13>/Comparison3' incorporates:
     *  Constant: '<S63>/Calib'
     */
    rtb_Comparison3_p = (tmpRead <= KePDTR_T_Amb_TempChilly);

    /* Switch: '<S43>/Switch1' incorporates:
     *  Constant: '<S45>/Calib'
     */
    if (KePDTR_b_CabHeater_RU_Sel)
    {
        /* Switch: '<S43>/Switch1' incorporates:
         *  Inport: '<Root>/VeHTIR_e_HV_ElecClntHtr2_Sts'
         *  SignalConversion generated from: '<S1>/VeHTIR_e_HV_ElecClntHtr_Sts'
         */
        VePDTR_e_CabinHeater_Selected = VePDTR_e_BatteryHeater_Selected;
    }

    /* End of Switch: '<S43>/Switch1' */

    /* Logic: '<S11>/Logical6' incorporates:
     *  Constant: '<S39>/Constant'
     *  Constant: '<S40>/Constant'
     *  Constant: '<S41>/Constant'
     *  Constant: '<S46>/Calib'
     *  Logic: '<S11>/Logical3'
     *  Logic: '<S11>/Logical4'
     *  RelationalOperator: '<S11>/Comparison3'
     *  RelationalOperator: '<S11>/Comparison5'
     *  RelationalOperator: '<S11>/Comparison6'
     *  Switch: '<S43>/Switch1'
     */
    VePDTR_b_CabinHeater_NotLocked = ((((((uint32)VePDTR_e_CabinHeater_Selected)
        != CeHTIR_e_HtrSts_LockedUntilNextStart) && (((uint32)
        VePDTR_e_CabinHeater_Selected) != CeHTIR_e_HtrSts_LockedUntilService)) &&
        (((uint32)VePDTR_e_CabinHeater_Selected) !=
         CeHTIR_e_HtrSts_LockedPermanent)) || (KePDTR_b_Dsbl_HtrLockedChk));

    /* RelationalOperator: '<S12>/Comparison3' incorporates:
     *  Constant: '<S52>/Constant'
     */
    VePDTR_b_DisSt_AmbTmpLw = (((uint32)PDTR_ac_DW.UnitDelay_DSTATE_g5) ==
        CePDTR_e_Dischrg_AmbTempLow);

    /* RelationalOperator: '<S12>/Comparison18' incorporates:
     *  Constant: '<S53>/Constant'
     *  RelationalOperator: '<S11>/Comparison6'
     *  Switch: '<S43>/Switch1'
     */
    VePDTR_b_CabHtr_StsOpr = (((uint32)VePDTR_e_CabinHeater_Selected) ==
        CeHTIR_e_HtrSts_Operation);

    /* Outputs for Atomic SubSystem: '<S12>/EdgeRising5' */
    /* Logic: '<S50>/OR1' incorporates:
     *  UnitDelay: '<S50>/UnitDelay'
     */
    rtb_OR1_ft = !PDTR_ac_DW.UnitDelay_DSTATE_m;

    /* Update for UnitDelay: '<S50>/UnitDelay' */
    PDTR_ac_DW.UnitDelay_DSTATE_m = VePDTR_b_DisSt_AmbTmpLw;

    /* Outputs for Atomic SubSystem: '<S12>/SignalLatchOnWithReset2' */
    /* Logic: '<S58>/OR1' incorporates:
     *  Logic: '<S50>/AND'
     *  Logic: '<S58>/NOT'
     *  Logic: '<S58>/OR'
     *  UnitDelay: '<S58>/UnitDelay'
     */
    PDTR_ac_DW.UnitDelay_DSTATE_d = ((VePDTR_b_CabHtr_StsOpr) ||
        (((!VePDTR_b_DisSt_AmbTmpLw) || (!rtb_OR1_ft)) &&
         (PDTR_ac_DW.UnitDelay_DSTATE_d)));

    /* End of Outputs for SubSystem: '<S12>/SignalLatchOnWithReset2' */
    /* End of Outputs for SubSystem: '<S12>/EdgeRising5' */

    /* Logic: '<S12>/Logical7' incorporates:
     *  RelationalOperator: '<S12>/Comparison5'
     *  UnitDelay: '<S58>/UnitDelay'
     */
    VePDTR_b_CabHtr_StsNotOpr = (PDTR_ac_DW.UnitDelay_DSTATE_d !=
        VePDTR_b_CabHtr_StsOpr);

    /* Outputs for Atomic SubSystem: '<S12>/EdgeRising7' */
    /* Logic: '<S51>/OR1' incorporates:
     *  UnitDelay: '<S51>/UnitDelay'
     */
    rtb_OR1 = !PDTR_ac_DW.UnitDelay_DSTATE_c;

    /* Update for UnitDelay: '<S51>/UnitDelay' incorporates:
     *  Constant: '<S12>/TRUEConstant2'
     */
    PDTR_ac_DW.UnitDelay_DSTATE_c = true;

    /* End of Outputs for SubSystem: '<S12>/EdgeRising7' */

    /* Outputs for Atomic SubSystem: '<S12>/EdgeRising1' */
    /* UnitDelay: '<S93>/UnitDelay' incorporates:
     *  UnitDelay: '<S48>/UnitDelay'
     */
    rtb_OR1_ft = PDTR_ac_DW.UnitDelay_DSTATE_dl;

    /* Update for UnitDelay: '<S48>/UnitDelay' */
    PDTR_ac_DW.UnitDelay_DSTATE_dl = VePDTR_b_EngageThermalLoad_AD;

    /* Outputs for Atomic SubSystem: '<S12>/SignalLatchOnWithReset5' */
    /* Outputs for Atomic SubSystem: '<S12>/SignalLatchOnWithReset4' */
    /* Outputs for Atomic SubSystem: '<S12>/EdgeRising7' */
    /* Logic: '<S60>/NOT' incorporates:
     *  Constant: '<S56>/Calib'
     *  Logic: '<S12>/Logical1'
     *  Logic: '<S12>/Logical3'
     *  Logic: '<S48>/AND'
     *  Logic: '<S48>/OR1'
     *  Logic: '<S51>/AND'
     *  Logic: '<S61>/NOT'
     */
    rtb_OR1 = ((!rtb_OR1) && (((!VePDTR_b_EngageThermalLoad_AD) || rtb_OR1_ft) ||
                (!KePDTR_b_Enbl_EPDReset)));

    /* End of Outputs for SubSystem: '<S12>/EdgeRising7' */
    /* End of Outputs for SubSystem: '<S12>/SignalLatchOnWithReset5' */
    /* End of Outputs for SubSystem: '<S12>/EdgeRising1' */

    /* Logic: '<S60>/OR1' incorporates:
     *  Constant: '<S57>/Calib'
     *  Logic: '<S12>/Logical6'
     *  Logic: '<S60>/NOT'
     *  Logic: '<S60>/OR'
     *  UnitDelay: '<S60>/UnitDelay'
     */
    PDTR_ac_DW.UnitDelay_DSTATE_no = ((((VePDTR_b_DisSt_AmbTmpLw) &&
        (VePDTR_b_CabHtr_StsNotOpr)) && (KePDTR_b_Enbl_HtrTransitionChk)) ||
        (rtb_OR1 && (PDTR_ac_DW.UnitDelay_DSTATE_no)));

    /* End of Outputs for SubSystem: '<S12>/SignalLatchOnWithReset4' */

    /* Logic: '<S12>/Logical9' incorporates:
     *  UnitDelay: '<S60>/UnitDelay'
     */
    VePDTR_b_CabHtrStatus_Latched = !PDTR_ac_DW.UnitDelay_DSTATE_no;

    /* Logic: '<S13>/Logical3' incorporates:
     *  Logic: '<S13>/Logical11'
     */
    VePDTR_b_PwrDischrgState3 = ((((((rtb_TmpSignalConversionAtVeBTRR_b_BattHe &&
        (!rtb_Logical5)) && rtb_TmpSignalConversionAtVeTPCR_b_HtrOrE) &&
        rtb_TmpSignalConversionAtVeBTRR_b_Batt_d) && rtb_Comparison3_p) &&
        (VePDTR_b_CabinHeater_NotLocked)) && (VePDTR_b_CabHtrStatus_Latched));

    /* Outputs for Atomic SubSystem: '<S13>/Hysteresis5' */
    /* Switch: '<S62>/Switch1' incorporates:
     *  Constant: '<S62>/ConstantValue'
     *  Constant: '<S65>/Calib'
     *  Constant: '<S66>/Calib'
     *  RelationalOperator: '<S62>/GreaterThan'
     *  RelationalOperator: '<S62>/GreaterThan1'
     *  UnitDelay: '<S62>/UnitDelay'
     */
    if (rtb_TmpSignalConversionAtVeBTRR_T_CellTe > KePDTR_T_ForcdBatCodn_RSP)
    {
        PDTR_ac_DW.UnitDelay_DSTATE_l = true;
    }
    else
    {
        PDTR_ac_DW.UnitDelay_DSTATE_l =
            ((rtb_TmpSignalConversionAtVeBTRR_T_CellTe >=
              KePDTR_T_ForcdBatCodn_LSP) && (PDTR_ac_DW.UnitDelay_DSTATE_l));
    }

    /* End of Switch: '<S62>/Switch1' */
    /* End of Outputs for SubSystem: '<S13>/Hysteresis5' */

    /* Switch: '<S13>/Switch2' incorporates:
     *  Constant: '<S68>/Calib'
     */
    if (KePDTR_b_EnableHysForBatCooling)
    {
        /* Switch: '<S13>/Switch2' incorporates:
         *  UnitDelay: '<S62>/UnitDelay'
         */
        VePDTR_b_BattTempOvrthrshld = PDTR_ac_DW.UnitDelay_DSTATE_l;
    }
    else
    {
        /* Switch: '<S13>/Switch2' incorporates:
         *  Constant: '<S64>/Calib'
         *  RelationalOperator: '<S13>/Comparison5'
         */
        VePDTR_b_BattTempOvrthrshld = (rtb_TmpSignalConversionAtVeBTRR_T_CellTe >
            KePDTR_T_ChillAllow_CellMaxTmp);
    }

    /* End of Switch: '<S13>/Switch2' */

    /* Logic: '<S13>/Logical17' incorporates:
     *  Logic: '<S13>/Logical29'
     */
    rtb_Comparison3_p = !rtb_Comparison3_p;

    /* Logic: '<S13>/Logical4' incorporates:
     *  Logic: '<S13>/Logical14'
     *  Logic: '<S13>/Logical17'
     */
    VePDTR_b_PwrDischrgState4 = (((((rtb_TmpSignalConversionAtVeBTRR_b_BattHe &&
        (!rtb_Logical5)) && rtb_TmpSignalConversionAtVeTPCR_b_HtrOrE) &&
        rtb_TmpSignalConversionAtVeBTRR_b_Batt_d) && rtb_Comparison3_p) &&
        (VePDTR_b_BattTempOvrthrshld));

    /* Switch: '<S13>/Switch1' incorporates:
     *  Constant: '<S70>/Calib'
     *  Constant: '<S72>/Calib'
     *  Logic: '<S13>/Logical32'
     *  Logic: '<S13>/Logical33'
     */
    if (KePDTR_b_VhlPlgInEnbl1)
    {
        rtb_OR1_ft = !rtb_TmpSignalConversionAtVeCTRR_b_HVAC_H;
    }
    else
    {
        rtb_OR1_ft = (rtb_TmpSignalConversionAtVeCTRR_b_HVAC_H ||
                      (KePDTR_b_VhlPlgInDsbl1));
    }

    /* End of Switch: '<S13>/Switch1' */

    /* Logic: '<S13>/Logical27' incorporates:
     *  Constant: '<S67>/Calib'
     *  Logic: '<S13>/Logical31'
     *  Logic: '<S13>/Logical34'
     *  Logic: '<S13>/Logical5'
     *  Logic: '<S13>/Logical6'
     */
    VePDTR_b_PwrDischrgState5 = ((((VePDTR_b_EngageThermalLoad_AD) &&
        (!rtb_Logical5)) && (VePDTR_b_Cab_Cool_Or_Heat_Req)) ||
        (((((VePDTR_b_BattOVFailure) && (!rtb_Logical5)) &&
           (VePDTR_b_Cab_Cool_Or_Heat_Req)) && (KePDTR_b_DsblOVForState5)) &&
         rtb_OR1_ft));

    /* Logic: '<S13>/Logical28' */
    VePDTR_b_PwrDischrgState6 = ((rtb_TmpSignalConversionAtVeBTRR_b_BattHe &&
        rtb_TmpSignalConversionAtVeBTRR_b_BattTe) &&
        (VePDTR_b_Cab_Cool_Or_Heat_Req));

    /* Switch: '<S42>/Switch1' incorporates:
     *  Constant: '<S44>/Calib'
     *  Inport: '<Root>/VeHTIR_e_HV_ElecClntHtr3_Sts'
     *  Inport: '<Root>/VeHTIR_e_HV_ElecClntHtr4_Sts'
     */
    if (!KePDTR_b_BattHeater_RU_Sel)
    {
        (void)Rte_Read_VeHTIR_e_HV_ElecClntHtr4_Sts_Value(&tmpRead_1);
        (void)Rte_Read_VeHTIR_e_HV_ElecClntHtr3_Sts_Value(&tmpRead_0);

        /* Switch: '<S11>/Switch' incorporates:
         *  Constant: '<S47>/Calib'
         *  Inport: '<Root>/VeHTIR_e_HV_ElecClntHtr3_Sts'
         *  Inport: '<Root>/VeHTIR_e_HV_ElecClntHtr4_Sts'
         */
        if (KePDTR_b_HeatingEle_Sel)
        {
            /* Switch: '<S42>/Switch1' incorporates:
             *  Inport: '<Root>/VeHTIR_e_HV_ElecClntHtr3_Sts'
             */
            VePDTR_e_BatteryHeater_Selected = tmpRead_0;
        }
        else
        {
            /* Switch: '<S42>/Switch1' incorporates:
             *  Inport: '<Root>/VeHTIR_e_HV_ElecClntHtr4_Sts'
             */
            VePDTR_e_BatteryHeater_Selected = tmpRead_1;
        }

        /* End of Switch: '<S11>/Switch' */
    }

    /* End of Switch: '<S42>/Switch1' */

    /* Logic: '<S11>/Logical5' incorporates:
     *  Constant: '<S36>/Constant'
     *  Constant: '<S37>/Constant'
     *  Constant: '<S38>/Constant'
     *  Constant: '<S46>/Calib'
     *  Logic: '<S11>/Logical1'
     *  Logic: '<S11>/Logical2'
     *  RelationalOperator: '<S11>/Comparison1'
     *  RelationalOperator: '<S11>/Comparison2'
     *  RelationalOperator: '<S11>/Comparison4'
     *  Switch: '<S42>/Switch1'
     */
    VePDTR_b_BatteryHeater_NotLocked = ((((((uint32)
        VePDTR_e_BatteryHeater_Selected) != CeHTIR_e_HtrSts_LockedUntilNextStart)
        && (((uint32)VePDTR_e_BatteryHeater_Selected) !=
            CeHTIR_e_HtrSts_LockedUntilService)) && (((uint32)
        VePDTR_e_BatteryHeater_Selected) != CeHTIR_e_HtrSts_LockedPermanent)) ||
        (KePDTR_b_Dsbl_HtrLockedChk));

    /* RelationalOperator: '<S12>/Comparison7' incorporates:
     *  Constant: '<S54>/Constant'
     */
    VePDTR_b_DisSt_FrcdBattHeat = (((uint32)PDTR_ac_DW.UnitDelay_DSTATE_g5) ==
        CePDTR_e_Dischrg_ForcBatHeat_Hys);

    /* RelationalOperator: '<S12>/Comparison6' incorporates:
     *  Constant: '<S55>/Constant'
     *  Switch: '<S42>/Switch1'
     */
    VePDTR_b_BattHtr_StsOpr = (((uint32)VePDTR_e_BatteryHeater_Selected) ==
        CeHTIR_e_HtrSts_Operation);

    /* Outputs for Atomic SubSystem: '<S12>/EdgeRising3' */
    /* Logic: '<S49>/OR1' incorporates:
     *  UnitDelay: '<S49>/UnitDelay'
     */
    rtb_OR1_ft = !PDTR_ac_DW.UnitDelay_DSTATE_p;

    /* Update for UnitDelay: '<S49>/UnitDelay' */
    PDTR_ac_DW.UnitDelay_DSTATE_p = VePDTR_b_DisSt_FrcdBattHeat;

    /* Outputs for Atomic SubSystem: '<S12>/SignalLatchOnWithReset3' */
    /* Logic: '<S59>/OR1' incorporates:
     *  Logic: '<S49>/AND'
     *  Logic: '<S59>/NOT'
     *  Logic: '<S59>/OR'
     *  UnitDelay: '<S59>/UnitDelay'
     */
    PDTR_ac_DW.UnitDelay_DSTATE_b = ((VePDTR_b_BattHtr_StsOpr) ||
        (((!VePDTR_b_DisSt_FrcdBattHeat) || (!rtb_OR1_ft)) &&
         (PDTR_ac_DW.UnitDelay_DSTATE_b)));

    /* End of Outputs for SubSystem: '<S12>/SignalLatchOnWithReset3' */
    /* End of Outputs for SubSystem: '<S12>/EdgeRising3' */

    /* Logic: '<S12>/Logical10' incorporates:
     *  RelationalOperator: '<S12>/Comparison8'
     *  UnitDelay: '<S59>/UnitDelay'
     */
    VePDTR_b_BattHtr_StsNotOpr = (PDTR_ac_DW.UnitDelay_DSTATE_b !=
        VePDTR_b_BattHtr_StsOpr);

    /* Outputs for Atomic SubSystem: '<S12>/SignalLatchOnWithReset5' */
    /* Logic: '<S61>/OR1' incorporates:
     *  Constant: '<S57>/Calib'
     *  Logic: '<S12>/Logical2'
     *  Logic: '<S61>/OR'
     *  UnitDelay: '<S61>/UnitDelay'
     */
    PDTR_ac_DW.UnitDelay_DSTATE_ip = ((((VePDTR_b_DisSt_FrcdBattHeat) &&
        (VePDTR_b_BattHtr_StsNotOpr)) && (KePDTR_b_Enbl_HtrTransitionChk)) ||
        (rtb_OR1 && (PDTR_ac_DW.UnitDelay_DSTATE_ip)));

    /* End of Outputs for SubSystem: '<S12>/SignalLatchOnWithReset5' */

    /* Logic: '<S12>/Logical12' incorporates:
     *  UnitDelay: '<S61>/UnitDelay'
     */
    VePDTR_b_BattHtrStatus_Latched = !PDTR_ac_DW.UnitDelay_DSTATE_ip;

    /* Logic: '<S13>/Logical19' incorporates:
     *  Logic: '<S13>/Logical22'
     *  Logic: '<S13>/Logical23'
     */
    VePDTR_b_PwrDischrgState7 = (((((((rtb_TmpSignalConversionAtVeBTRR_b_BattHe &&
        rtb_TmpSignalConversionAtVeTPCR_b_HtrOrE) &&
        (!VePDTR_b_BattTempOvrthrshld)) &&
        rtb_TmpSignalConversionAtVeBTRR_b_Batt_d) && (!rtb_Logical5)) &&
        rtb_Comparison3_p) && (VePDTR_b_BatteryHeater_NotLocked)) &&
        (VePDTR_b_BattHtrStatus_Latched));

    /* Switch: '<S13>/Switch' incorporates:
     *  Constant: '<S69>/Calib'
     *  Constant: '<S71>/Calib'
     *  Logic: '<S13>/Logical25'
     *  Logic: '<S13>/Logical26'
     */
    if (KePDTR_b_VhlPlgInEnbl)
    {
        rtb_OR1_ft = !rtb_TmpSignalConversionAtVeCTRR_b_HVAC_H;
    }
    else
    {
        rtb_OR1_ft = (rtb_TmpSignalConversionAtVeCTRR_b_HVAC_H ||
                      (KePDTR_b_VhlPlgInDsbl));
    }

    /* End of Switch: '<S13>/Switch' */

    /* Logic: '<S13>/Logical24' incorporates:
     *  Logic: '<S13>/Logical30'
     */
    VePDTR_b_PwrDischrgState8 = ((((VePDTR_b_BattOVFailure) && (!rtb_Logical5)) &&
        (VePDTR_b_Cab_Cool_Or_Heat_Req)) && rtb_OR1_ft);

    /* SignalConversion generated from: '<S20>/SFunction' incorporates:
     *  Chart: '<S3>/StatePriority'
     *  Constant: '<S3>/ConstantValue'
     */
    rtb_TmpSignalConversionAtSFunctionInport[0] = false;
    rtb_TmpSignalConversionAtSFunctionInport[1] = VePDTR_b_PwrDischrgState1;
    rtb_TmpSignalConversionAtSFunctionInport[2] = VePDTR_b_PwrDischrgState2;
    rtb_TmpSignalConversionAtSFunctionInport[3] = VePDTR_b_PwrDischrgState3;
    rtb_TmpSignalConversionAtSFunctionInport[4] = VePDTR_b_PwrDischrgState4;
    rtb_TmpSignalConversionAtSFunctionInport[5] = VePDTR_b_PwrDischrgState5;
    rtb_TmpSignalConversionAtSFunctionInport[6] = VePDTR_b_PwrDischrgState6;
    rtb_TmpSignalConversionAtSFunctionInport[7] = VePDTR_b_PwrDischrgState7;
    rtb_TmpSignalConversionAtSFunctionInport[8] = VePDTR_b_PwrDischrgState8;

    /* Chart: '<S3>/StatePriority' */
    /* Gateway: PDTR_MedTEH/PDTC_BattDschgSt/StatePriority */
    /* During: PDTR_MedTEH/PDTC_BattDschgSt/StatePriority */
    /* Entry Internal: PDTR_MedTEH/PDTC_BattDschgSt/StatePriority */
    /* Transition: '<S20>:12' */
    /* Transition: '<S20>:13' */
    VePDTR_K_Index = 0U;
    do
    {
        exitg1 = 0;
        if (((sint32)VePDTR_K_Index) < 8)
        {
            /* Transition: '<S20>:10' */
            /* Transition: '<S20>:32' */
            tmp = (sint32)KaPDTR_e_BattDischg_StateSrcPriority[(VePDTR_K_Index)];
            if (tmp != 255)
            {
                /* Transition: '<S20>:15' */
                /* Transition: '<S20>:17' */
                if (!rtb_TmpSignalConversionAtSFunctionInport[tmp])
                {
                    /* Transition: '<S20>:19' */
                    /* Transition: '<S20>:34' */
                    VePDTR_K_Index = (uint8)((sint32)(((sint32)VePDTR_K_Index) +
                        1));

                    /* Transition: '<S20>:37' */
                    /* Transition: '<S20>:40' */
                    /* Transition: '<S20>:41' */
                }
                else
                {
                    /* Transition: '<S20>:23' */
                    VePDTR_e_OV_EPD_PwrDischrgState =
                        KaPDTR_e_BattDischg_StateSrcPriority[(VePDTR_K_Index)];

                    /* Transition: '<S20>:45' */
                    /* Transition: '<S20>:46' */
                    exitg1 = 1;
                }
            }
            else
            {
                /* Transition: '<S20>:44' */
                VePDTR_e_OV_EPD_PwrDischrgState = CePDTR_e_No_Dischrg;

                /* Transition: '<S20>:46' */
                exitg1 = 1;
            }
        }
        else
        {
            /* Transition: '<S20>:8' */
            VePDTR_e_OV_EPD_PwrDischrgState = CePDTR_e_No_Dischrg;
            exitg1 = 1;
        }
    }
    while (exitg1 == 0);

    /* Logic: '<S18>/Logical1' */
    rtb_OR1_ft = ((VePDTR_b_OV_EPD_BattHeat_Req_BD) ||
                  (VePDTR_b_OV_EPD_BattCool_Req_BD));

    /* Logic: '<S18>/Logical2' incorporates:
     *  Constant: '<S123>/Constant'
     *  Constant: '<S124>/Constant'
     *  Constant: '<S125>/Constant'
     *  Constant: '<S126>/Constant'
     *  Constant: '<S127>/Constant'
     *  Constant: '<S128>/Calib'
     *  Logic: '<S115>/Logical2'
     *  Logic: '<S115>/Logical3'
     *  Logic: '<S116>/Logical'
     *  Logic: '<S116>/Logical1'
     *  Logic: '<S116>/Logical2'
     *  RelationalOperator: '<S115>/Comparison1'
     *  RelationalOperator: '<S115>/Comparison2'
     *  RelationalOperator: '<S116>/Comparison1'
     *  RelationalOperator: '<S116>/Comparison2'
     *  RelationalOperator: '<S116>/Comparison4'
     *  Switch: '<S4>/Switch8'
     */
    rtb_TmpSignalConversionAtVeBTRR_b_BattTe = (((((((uint32)
        rtb_TmpSignalConversionAtVeTHMR_e_BatThr) == CeTHMR_e_Heating) ||
        (((uint32)rtb_TmpSignalConversionAtVeTHMR_e_BatThr) ==
         CeTHMR_e_ActvPsvHeating)) || ((((uint32)VePDTR_e_LTCLThrmlMode_AD) ==
        CeTHMR_e_LTCLActvPsvHeating) && (KePDTR_b_EnblActvPsvHeatReq))) &&
        (VePDTR_b_OV_EPD_BattHeat_Req_BD)) || (((((uint32)
        rtb_TmpSignalConversionAtVeTHMR_e_BatThr) == CeTHMR_e_ActiveCooling) ||
        (((uint32)rtb_TmpSignalConversionAtVeTHMR_e_BatThr) ==
         CeTHMR_e_BTLActvWasteHeatRcvry)) && (VePDTR_b_OV_EPD_BattCool_Req_BD)));

    /* Outputs for Atomic SubSystem: '<S18>/BatAndCab_Cndtn' */
    /* Logic: '<S112>/Logical' incorporates:
     *  Logic: '<S112>/Logical3'
     */
    VePDTR_b_BattAndCab_CndtnSt = ((((rtb_OR1_ft &&
        (VePDTR_b_OV_EPD_CabCond_Req_BD)) &&
        rtb_TmpSignalConversionAtVeBTRR_b_BattTe) && (!rtb_Logical5)) &&
        (VePDTR_b_Cab_Cool_Or_Heat_Req));

    /* End of Outputs for SubSystem: '<S18>/BatAndCab_Cndtn' */

    /* Outputs for Atomic SubSystem: '<S18>/BatTempNotOpt' */
    /* Logic: '<S113>/Logical' incorporates:
     *  Logic: '<S113>/Logical2'
     */
    VePDTR_b_BattNotOpt_CndtnSt = (rtb_OR1_ft &&
        (rtb_TmpSignalConversionAtVeBTRR_b_BattTe || rtb_Logical5));

    /* End of Outputs for SubSystem: '<S18>/BatTempNotOpt' */

    /* Outputs for Atomic SubSystem: '<S18>/CabOnly_Cndtn' */
    /* Logic: '<S118>/Logical' */
    VePDTR_b_CabOnly_CndtnSt = ((VePDTR_b_OV_EPD_CabCond_Req_BD) &&
        (VePDTR_b_Cab_Cool_Or_Heat_Req));

    /* End of Outputs for SubSystem: '<S18>/CabOnly_Cndtn' */

    /* If: '<S18>/If' */
    if (VePDTR_b_BattAndCab_CndtnSt)
    {
        /* Outputs for IfAction SubSystem: '<S18>/Batt_Cabin_Cond_State' incorporates:
         *  ActionPort: '<S114>/ActionPort'
         */
        /* Merge: '<S18>/Merge' incorporates:
         *  Constant: '<S122>/Constant'
         *  DataTypeConversion: '<S121>/DataTypeConversion'
         */
        VePDTR_e_OV_EPD_PwrDschrg_State_New = CePDTR_e_Dischrg_BatAndCab_Cndtn;

        /* End of Outputs for SubSystem: '<S18>/Batt_Cabin_Cond_State' */
    }
    else if (VePDTR_b_BattNotOpt_CndtnSt)
    {
        /* Outputs for IfAction SubSystem: '<S18>/BatteryOnly_Cond_State' incorporates:
         *  ActionPort: '<S117>/ActionPort'
         */
        /* Merge: '<S18>/Merge' incorporates:
         *  Constant: '<S130>/Constant'
         *  DataTypeConversion: '<S129>/DataTypeConversion'
         */
        VePDTR_e_OV_EPD_PwrDschrg_State_New = CePDTR_e_Dischrg_BatTempNotOpt;

        /* End of Outputs for SubSystem: '<S18>/BatteryOnly_Cond_State' */
    }
    else if (VePDTR_b_CabOnly_CndtnSt)
    {
        /* Outputs for IfAction SubSystem: '<S18>/CabinOnly_Cond_State' incorporates:
         *  ActionPort: '<S119>/ActionPort'
         */
        /* Merge: '<S18>/Merge' incorporates:
         *  Constant: '<S132>/Constant'
         *  DataTypeConversion: '<S131>/DataTypeConversion'
         */
        VePDTR_e_OV_EPD_PwrDschrg_State_New = CePDTR_e_Dischrg_CabReqPrsnt;

        /* End of Outputs for SubSystem: '<S18>/CabinOnly_Cond_State' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S18>/NoDischarge_State' incorporates:
         *  ActionPort: '<S120>/ActionPort'
         */
        /* Merge: '<S18>/Merge' incorporates:
         *  Constant: '<S134>/Constant'
         *  DataTypeConversion: '<S133>/DataTypeConversion'
         */
        VePDTR_e_OV_EPD_PwrDschrg_State_New = CePDTR_e_No_Dischrg;

        /* End of Outputs for SubSystem: '<S18>/NoDischarge_State' */
    }

    /* End of If: '<S18>/If' */

    /* Switch: '<S19>/Switch' incorporates:
     *  Constant: '<S135>/Calib'
     */
    if (KePDTR_b_SelectOldApp_PwrDispSt)
    {
    }
    else
    {
        /* Switch: '<S19>/Switch' incorporates:
         *  Merge: '<S18>/Merge'
         */
        VePDTR_e_OV_EPD_PwrDischrgState = VePDTR_e_OV_EPD_PwrDschrg_State_New;
    }

    /* End of Switch: '<S19>/Switch' */

    /* Outputs for Atomic SubSystem: '<S9>/TimerResetEnabled' */
    /* Switch: '<S35>/Switch1' incorporates:
     *  Constant: '<S33>/Calib'
     *  Constant: '<S34>/Calib'
     *  Constant: '<S35>/ConstantValue3'
     *  Constant: '<S35>/ConstantValue4'
     *  Logic: '<S35>/AND1'
     *  MinMax: '<S35>/Maximum'
     *  RelationalOperator: '<S35>/GreaterThan2'
     *  RelationalOperator: '<S9>/Comparison6'
     *  Sum: '<S35>/Subtraction'
     *  Switch: '<S19>/Switch'
     *  UnitDelay: '<S35>/UnitDelay'
     *  UnitDelay: '<S9>/UnitDelay2'
     */
    if ((VePDTR_e_OV_EPD_PwrDischrgState != PDTR_ac_DW.UnitDelay2_DSTATE) &&
            (PDTR_ac_DW.UnitDelay_DSTATE_k <= 0.0F))
    {
        PDTR_ac_DW.UnitDelay_DSTATE_k = KePDTR_t_OV_BattDschgSt_MatureTime;
    }
    else
    {
        PDTR_ac_DW.UnitDelay_DSTATE_k = fmaxf(PDTR_ac_DW.UnitDelay_DSTATE_k -
            KePDTR_t_OV_BattDschgSt_Mature_dT, 0.0F);
    }

    /* End of Switch: '<S35>/Switch1' */

    /* Switch: '<S9>/Switch1' incorporates:
     *  Constant: '<S35>/ConstantValue2'
     *  RelationalOperator: '<S35>/GreaterThan1'
     *  RelationalOperator: '<S9>/Comparison6'
     *  Switch: '<S19>/Switch'
     *  UnitDelay: '<S35>/UnitDelay'
     *  UnitDelay: '<S9>/UnitDelay1'
     */
    if (PDTR_ac_DW.UnitDelay_DSTATE_k > 0.0F)
    {
    }
    else
    {
        PDTR_ac_DW.UnitDelay1_DSTATE_p = VePDTR_e_OV_EPD_PwrDischrgState;
    }

    /* End of Switch: '<S9>/Switch1' */
    /* End of Outputs for SubSystem: '<S9>/TimerResetEnabled' */

    /* UnitDelay: '<S93>/UnitDelay' incorporates:
     *  Constant: '<S73>/Constant'
     *  RelationalOperator: '<S15>/RelationalOperator2'
     */
    rtb_OR1_ft = (((uint32)PDTR_ac_DW.UnitDelay_DSTATE_g5) !=
                  CePDTR_e_No_Dischrg);

    /* Logic: '<S15>/LogicalOperator10' incorporates:
     *  Constant: '<S75>/Constant'
     *  Constant: '<S76>/Constant'
     *  Constant: '<S83>/Calib'
     *  Constant: '<S86>/Calib'
     *  Constant: '<S87>/Calib'
     *  Logic: '<S15>/LogicalOperator5'
     *  Logic: '<S15>/LogicalOperator6'
     *  Logic: '<S15>/LogicalOperator7'
     *  Logic: '<S15>/LogicalOperator9'
     *  RelationalOperator: '<S15>/RelationalOperator1'
     *  RelationalOperator: '<S15>/RelationalOperator3'
     */
    VePDTR_b_OV2_Msg7 = ((((KePDTR_b_HVOVFail1_Msg7) &&
                           (CeHVTR_e_HVOverVoltFailureNoRegenLimp == ((uint32)
        VePDTR_e_HVOverVoltFailure_AD))) || ((((uint32)
        VePDTR_e_HVOverVoltFailure_AD) ==
                            CeHVTR_e_HVOverVoltFailureLimVehicleSpd) &&
                           (KePDTR_b_HVOVFail2_Msg7))) && (rtb_OR1_ft ||
                          (KePDTR_b_DispStChk2_Msg7)));

    /* Logic: '<S15>/LogicalOperator3' incorporates:
     *  Constant: '<S81>/Calib'
     *  Constant: '<S82>/Calib'
     *  Logic: '<S15>/LogicalOperator8'
     */
    VePDTR_b_OV1_Msg7 = ((((VePDTR_b_BattOvrVltg_AD) &&
                           aVarTruthTableCondition_3) && (rtb_OR1_ft ||
                           (KePDTR_b_DispStChk1_Msg7))) &&
                         (KePDTR_b_BatOVChkMsg7));

    /* Logic: '<S15>/LogicalOperator16' incorporates:
     *  Constant: '<S77>/Constant'
     *  Constant: '<S78>/Constant'
     *  Constant: '<S80>/Calib'
     *  Constant: '<S84>/Calib'
     *  Constant: '<S85>/Calib'
     *  Logic: '<S15>/LogicalOperator12'
     *  Logic: '<S15>/LogicalOperator13'
     *  Logic: '<S15>/LogicalOperator14'
     *  Logic: '<S15>/LogicalOperator15'
     *  RelationalOperator: '<S15>/RelationalOperator4'
     *  RelationalOperator: '<S15>/RelationalOperator5'
     */
    VePDTR_b_BattCritic_Msg7 = (((KePDTR_b_EnblBatCritChk_Msg7) &&
        ((CeBTRR_e_BatMarginal == ((uint32)
        rtb_TmpSignalConversionAtVeBTRR_e_HV_Bat)) || ((((uint32)
        rtb_TmpSignalConversionAtVeBTRR_e_HV_Bat) == CeBTRR_e_BatCrit) &&
        (KePDTR_b_BatCritChk_Msg7)))) &&
        ((!rtb_TmpSignalConversionAtVeCTRR_b_HVAC_H) || (KePDTR_b_DsblPlgIn_Msg7)));

    /* Truth Table: '<S15>/TruthTable' */
    /* Truth Table Function 'PDTR_MedTEH/PDTC_BattDschgSt/Msg7_New/TruthTable': '<S91>:1' */
    /*  Hood Open */
    /*  Key in Run Pre-Start */
    /* Condition '#2': '<S91>:1:15' */
    rtb_TmpSignalConversionAtVeCTRR_b_HVAC_H = (((uint32)VePDTR_e_SSDR_KeySts_AD)
        == CeSSDR_e_KeyRun);

    /*  Key in Crank */
    /* Condition '#3': '<S91>:1:19' */
    aVarTruthTableCondition_3 = (((uint32)VePDTR_e_SSDR_KeySts_AD) ==
        CeSSDR_e_KeyCrank);

    /*  Key in Run Post-Start */
    /* Condition '#4': '<S91>:1:23' */
    rtb_Logical5 = (((uint32)VePDTR_e_SSDR_KeySts_AD) == CeSSDR_e_KeyPostCrnk);
    rtb_OR1_ft = !VePDTR_b_HoodAjar_AD;
    rtb_TmpSignalConversionAtVeBTRR_b_BattTe = !rtb_Logical5;
    rtb_TmpSignalConversionAtVeBTRR_b_BattHe = !aVarTruthTableCondition_3;
    if (((rtb_OR1_ft && rtb_TmpSignalConversionAtVeCTRR_b_HVAC_H) &&
            rtb_TmpSignalConversionAtVeBTRR_b_BattHe) &&
            rtb_TmpSignalConversionAtVeBTRR_b_BattTe)
    {
        /* Decision 'D1': '<S91>:1:25' */
        /*  Hood Closed, Key in Run Pre-Start */
        /* Action '1': '<S91>:1:45' */
        rtb_VePDTR_K_HoodKeyIndex = 1;
    }
    else
    {
        rtb_TmpSignalConversionAtVeTPCR_b_HtrOrE =
            !rtb_TmpSignalConversionAtVeCTRR_b_HVAC_H;
        rtb_OR1_ft = (rtb_OR1_ft && rtb_TmpSignalConversionAtVeTPCR_b_HtrOrE);
        if ((rtb_OR1_ft && aVarTruthTableCondition_3) &&
                rtb_TmpSignalConversionAtVeBTRR_b_BattTe)
        {
            /* Decision 'D2': '<S91>:1:27' */
            /*  Hood Closed, Key in Crank */
            /* Action '2': '<S91>:1:51' */
            rtb_VePDTR_K_HoodKeyIndex = 2;
        }
        else if ((rtb_OR1_ft && rtb_TmpSignalConversionAtVeBTRR_b_BattHe) &&
                 rtb_Logical5)
        {
            /* Decision 'D3': '<S91>:1:29' */
            /*  Hood Closed, Key in Run Post-Start */
            /* Action '3': '<S91>:1:57' */
            rtb_VePDTR_K_HoodKeyIndex = 3;
        }
        else if ((((VePDTR_b_HoodAjar_AD) &&
                   rtb_TmpSignalConversionAtVeCTRR_b_HVAC_H) &&
                  rtb_TmpSignalConversionAtVeBTRR_b_BattHe) &&
                 rtb_TmpSignalConversionAtVeBTRR_b_BattTe)
        {
            /* Condition '#1': '<S91>:1:11' */
            /* Decision 'D4': '<S91>:1:31' */
            /*  Hood Open, Key in Run Pre-Start */
            /* Action '4': '<S91>:1:63' */
            rtb_VePDTR_K_HoodKeyIndex = 4;
        }
        else
        {
            rtb_OR1_ft = ((VePDTR_b_HoodAjar_AD) &&
                          rtb_TmpSignalConversionAtVeTPCR_b_HtrOrE);
            if ((rtb_OR1_ft && aVarTruthTableCondition_3) &&
                    rtb_TmpSignalConversionAtVeBTRR_b_BattTe)
            {
                /* Condition '#1': '<S91>:1:11' */
                /* Decision 'D5': '<S91>:1:33' */
                /*  Hood Open, Key in Crank */
                /* Action '5': '<S91>:1:69' */
                rtb_VePDTR_K_HoodKeyIndex = 5;
            }
            else if ((rtb_OR1_ft && rtb_TmpSignalConversionAtVeBTRR_b_BattHe) &&
                     rtb_Logical5)
            {
                /* Condition '#1': '<S91>:1:11' */
                /* Decision 'D6': '<S91>:1:35' */
                /*  Hood Open, Key in Run Post-Start */
                /* Action '6': '<S91>:1:75' */
                rtb_VePDTR_K_HoodKeyIndex = 6;
            }
            else
            {
                /* Decision 'D7': '<S91>:1:37' */
                /*  Default */
                /*  Default */
                /* Action '7': '<S91>:1:81' */
                rtb_VePDTR_K_HoodKeyIndex = 7;
            }
        }
    }

    /* End of Truth Table: '<S15>/TruthTable' */

    /* Logic: '<S15>/LogicalOperator2' incorporates:
     *  Constant: '<S74>/Constant'
     *  Constant: '<S79>/Calib'
     *  Constant: '<S88>/Calib'
     *  Logic: '<S15>/LogicalOperator'
     *  Logic: '<S15>/LogicalOperator11'
     *  Logic: '<S15>/LogicalOperator17'
     *  RelationalOperator: '<S15>/RelationalOperator'
     *  Selector: '<S15>/Selector'
     */
    rtb_TmpSignalConversionAtVeBTRR_b_BattCo = (((((((uint32)
        VePDTR_e_BatCntctrStat_AD) == CeHVTR_e_Closed) &&
        (!VePDTR_b_PropSysActv_AD)) && (rtb_TmpSignalConversionAtVeBTRR_b_BattCo
        || (KePDTR_b_Msg7_BattFlts_Dsbl))) && (((VePDTR_b_OV1_Msg7) ||
        (VePDTR_b_OV2_Msg7)) || (VePDTR_b_BattCritic_Msg7))) &&
        (KaPDTR_b_HoodKeyStat[rtb_VePDTR_K_HoodKeyIndex - 1]));

    /* Outputs for Atomic SubSystem: '<S15>/TurnOnDelayTime' */
    /* Outputs for Atomic SubSystem: '<S92>/EdgeRising' */
    /* Logic: '<S93>/AND' incorporates:
     *  Logic: '<S93>/OR1'
     *  UnitDelay: '<S93>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeCTRR_b_HVAC_H =
        (rtb_TmpSignalConversionAtVeBTRR_b_BattCo &&
         (!PDTR_ac_DW.UnitDelay_DSTATE_io));

    /* Update for UnitDelay: '<S93>/UnitDelay' */
    PDTR_ac_DW.UnitDelay_DSTATE_io = rtb_TmpSignalConversionAtVeBTRR_b_BattCo;

    /* End of Outputs for SubSystem: '<S92>/EdgeRising' */

    /* Switch: '<S92>/Switch1' incorporates:
     *  Constant: '<S89>/Calib'
     *  Constant: '<S90>/Calib'
     *  Constant: '<S92>/ConstantValue1'
     *  Logic: '<S92>/OR'
     *  Logic: '<S92>/OR1'
     *  MinMax: '<S92>/Minimum'
     *  Sum: '<S92>/Summation'
     *  UnitDelay: '<S92>/UnitDelay'
     */
    if ((!rtb_TmpSignalConversionAtVeBTRR_b_BattCo) ||
            rtb_TmpSignalConversionAtVeCTRR_b_HVAC_H)
    {
        PDTR_ac_DW.UnitDelay_DSTATE_i = 0.0F;
    }
    else
    {
        PDTR_ac_DW.UnitDelay_DSTATE_i = fminf(KePDTR_t_Msg7delay,
            KePDTR_t_Msg7delay_dT + PDTR_ac_DW.UnitDelay_DSTATE_i);
    }

    /* End of Switch: '<S92>/Switch1' */

    /* Logic: '<S92>/AND' incorporates:
     *  Constant: '<S89>/Calib'
     *  RelationalOperator: '<S92>/GreaterThan'
     *  UnitDelay: '<S92>/UnitDelay'
     */
    VePDTR_b_Msg7_Active = (rtb_TmpSignalConversionAtVeBTRR_b_BattCo &&
                            (PDTR_ac_DW.UnitDelay_DSTATE_i >= KePDTR_t_Msg7delay));

    /* End of Outputs for SubSystem: '<S15>/TurnOnDelayTime' */

    /* Switch: '<S21>/Switch' incorporates:
     *  Constant: '<S136>/Calib'
     */
    if (KePDTR_b_OV_BattDischg_State_SD)
    {
        /* RelationalOperator: '<S12>/Comparison3' incorporates:
         *  Constant: '<S137>/Calib'
         *  Switch: '<S21>/Switch'
         */
        PDTR_ac_DW.UnitDelay_DSTATE_g5 = KePDTR_e_OV_BattDischg_State_D;
    }
    else
    {
        /* RelationalOperator: '<S12>/Comparison3' incorporates:
         *  Switch: '<S21>/Switch'
         *  Switch: '<S9>/Switch1'
         *  UnitDelay: '<S9>/UnitDelay1'
         */
        PDTR_ac_DW.UnitDelay_DSTATE_g5 = PDTR_ac_DW.UnitDelay1_DSTATE_p;
    }

    /* End of Switch: '<S21>/Switch' */

    /* Update for Delay: '<S143>/Delay' */
    PDTR_ac_DW.Delay_DSTATE = Switch16;

    /* Update for UnitDelay: '<S9>/UnitDelay2' incorporates:
     *  Switch: '<S19>/Switch'
     */
    PDTR_ac_DW.UnitDelay2_DSTATE = VePDTR_e_OV_EPD_PwrDischrgState;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/PDTO_Outputs'
     */
    /* Switch: '<S5>/Switch4' incorporates:
     *  Constant: '<S206>/Calib'
     */
    if (KePDTR_b_BattCoolingCond_Req_SD)
    {
        /* Outport: '<Root>/VePDTR_b_OV_EPD_BattCool_Req' incorporates:
         *  Constant: '<S205>/Calib'
         *  SignalConversion generated from: '<S1>/BattCoolReq_AD'
         */
        (void)Rte_Write_VePDTR_b_OV_EPD_BattCool_Req_Value
            (KePDTR_b_BattCoolingCond_Req_D);
    }
    else
    {
        /* Outport: '<Root>/VePDTR_b_OV_EPD_BattCool_Req' incorporates:
         *  SignalConversion generated from: '<S1>/BattCoolReq_AD'
         */
        (void)Rte_Write_VePDTR_b_OV_EPD_BattCool_Req_Value
            (VePDTR_b_OV_EPD_BattCool_Req_BD);
    }

    /* End of Switch: '<S5>/Switch4' */

    /* Switch: '<S5>/Switch3' incorporates:
     *  Constant: '<S208>/Calib'
     */
    if (KePDTR_b_BattHeatingCond_Req_SD)
    {
        /* Outport: '<Root>/VePDTR_b_OV_EPD_BattHeat_Req' incorporates:
         *  Constant: '<S207>/Calib'
         *  SignalConversion generated from: '<S1>/BattHeatReq_AD'
         */
        (void)Rte_Write_VePDTR_b_OV_EPD_BattHeat_Req_Value
            (KePDTR_b_BattHeatingCond_Req_D);
    }
    else
    {
        /* Outport: '<Root>/VePDTR_b_OV_EPD_BattHeat_Req' incorporates:
         *  SignalConversion generated from: '<S1>/BattHeatReq_AD'
         */
        (void)Rte_Write_VePDTR_b_OV_EPD_BattHeat_Req_Value
            (VePDTR_b_OV_EPD_BattHeat_Req_BD);
    }

    /* End of Switch: '<S5>/Switch3' */

    /* Switch: '<S5>/Switch5' incorporates:
     *  Constant: '<S210>/Calib'
     */
    if (KePDTR_b_CabinCond_Req_SD)
    {
        /* Outport: '<Root>/VePDTR_b_OV_EPD_CabCond_Req' incorporates:
         *  Constant: '<S209>/Calib'
         *  SignalConversion generated from: '<S1>/CabCond_Req_AD'
         */
        (void)Rte_Write_VePDTR_b_OV_EPD_CabCond_Req_Value
            (KePDTR_b_CabinCond_Req_D);
    }
    else
    {
        /* Outport: '<Root>/VePDTR_b_OV_EPD_CabCond_Req' incorporates:
         *  SignalConversion generated from: '<S1>/CabCond_Req_AD'
         */
        (void)Rte_Write_VePDTR_b_OV_EPD_CabCond_Req_Value
            (VePDTR_b_OV_EPD_CabCond_Req_BD);
    }

    /* End of Switch: '<S5>/Switch5' */

    /* Switch: '<S5>/Switch6' incorporates:
     *  Constant: '<S212>/Calib'
     */
    if (KePDTR_b_EburnEnbl_SD)
    {
        /* Outport: '<Root>/VePDTR_b_EburnEnbl' incorporates:
         *  Constant: '<S211>/Calib'
         *  SignalConversion generated from: '<S1>/EburnEnbl_AD'
         */
        (void)Rte_Write_VePDTR_b_EburnEnbl_Value(KePDTR_b_EburnEnbl_D);
    }
    else
    {
        /* Outport: '<Root>/VePDTR_b_EburnEnbl' incorporates:
         *  SignalConversion generated from: '<S1>/EburnEnbl_AD'
         */
        (void)Rte_Write_VePDTR_b_EburnEnbl_Value(VePDTR_b_eBurnEnbl_B4);
    }

    /* End of Switch: '<S5>/Switch6' */

    /* Switch: '<S5>/Switch1' incorporates:
     *  Constant: '<S213>/Calib'
     *  Constant: '<S218>/Calib'
     *  Switch: '<S21>/Switch'
     */
    if (KePDTR_b_EngOrBattPwrDschg_State_SD)
    {
        tmp_0 = KePDTR_e_EngOrBattPwrDschg_State_D;
    }
    else
    {
        tmp_0 = PDTR_ac_DW.UnitDelay_DSTATE_g5;
    }

    /* Outport: '<Root>/VePDTR_e_EngOrBattPwrDschg_State' incorporates:
     *  SignalConversion generated from: '<S1>/EngOrBattPwrDschg_State_out'
     *  Switch: '<S5>/Switch1'
     */
    (void)Rte_Write_VePDTR_e_EngOrBattPwrDschg_State_Value(tmp_0);

    /* Switch: '<S5>/Switch2' incorporates:
     *  Constant: '<S215>/Calib'
     */
    if (KePDTR_b_KeyRunCrnk_BattOV_SD)
    {
        /* Outport: '<Root>/VePDTR_b_KeyRunCrnk_BattOV' incorporates:
         *  Constant: '<S214>/Calib'
         *  SignalConversion generated from: '<S1>/KeyRunCrnk_BattOV_out'
         */
        (void)Rte_Write_VePDTR_b_KeyRunCrnk_BattOV_Value
            (KePDTR_b_KeyRunCrnk_BattOV_D);
    }
    else
    {
        /* Outport: '<Root>/VePDTR_b_KeyRunCrnk_BattOV' incorporates:
         *  SignalConversion generated from: '<S1>/KeyRunCrnk_BattOV_out'
         */
        (void)Rte_Write_VePDTR_b_KeyRunCrnk_BattOV_Value(VePDTR_b_BattOVFailure);
    }

    /* End of Switch: '<S5>/Switch2' */

    /* Switch: '<S5>/Switch' incorporates:
     *  Constant: '<S217>/Calib'
     */
    if (KePDTR_b_KeyRun_OV_BattCrit_SD)
    {
        /* Outport: '<Root>/VePDTR_b_KeyRun_OV_BattCrit' incorporates:
         *  Constant: '<S216>/Calib'
         *  SignalConversion generated from: '<S1>/KeyRun_OV_BattCrit_out'
         */
        (void)Rte_Write_VePDTR_b_KeyRun_OV_BattCrit_Value
            (KePDTR_b_KeyRun_OV_BattCrit_D);
    }
    else
    {
        /* Outport: '<Root>/VePDTR_b_KeyRun_OV_BattCrit' incorporates:
         *  SignalConversion generated from: '<S1>/KeyRun_OV_BattCrit_out'
         */
        (void)Rte_Write_VePDTR_b_KeyRun_OV_BattCrit_Value(VePDTR_b_Msg7_Active);
    }

    /* End of Switch: '<S5>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/PDTR_MedTEH' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_PDTR_1

FUNC(void, PDTR_CODE) PDTR_PwrOn(void)
{

#if Rte_SysCon_Variant_PDTR_1

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
    /* Outputs for Function Call SubSystem: '<Root>/PDTR_PwrOn' */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/PDTO_Outputs_Init'
     */
    /* Constant: '<S219>/Constant3' incorporates:
     *  Constant: '<S221>/Calib'
     */
    PDTR_ac_B.Constant3 = KePDTR_b_KeyRun_OV_BattCrit_Init;

    /* VariantMerge generated from: '<S219>/VariantSource2' incorporates:
     *  SignalConversion generated from: '<S219>/VariantSource2'
     */
    PDTR_ac_B.VariantMerge_For_Variant_Source_VariantS = PDTR_ac_B.Constant3;

    /* VariantMerge generated from: '<S219>/VariantSource1' incorporates:
     *  Constant: '<S222>/Calib'
     *  SignalConversion generated from: '<S219>/VariantSource1'
     */
    PDTR_ac_B.VariantMerge_For_Variant_Source_Varian_c =
        KePDTR_e_EngOrBattPwrDschg_State_Init;

    /* Constant: '<S219>/Constant3' incorporates:
     *  Constant: '<S220>/Calib'
     */
    PDTR_ac_B.Constant3 = KePDTR_b_KeyRunCrnk_BattOV_Init;

    /* VariantMerge generated from: '<S219>/VariantSource3' incorporates:
     *  SignalConversion generated from: '<S219>/VariantSource3'
     */
    PDTR_ac_B.VariantMerge_For_Variant_Source_Varian_g = PDTR_ac_B.Constant3;

    /* Constant: '<S219>/Constant3' incorporates:
     *  Constant: '<S219>/Constant'
     */
    PDTR_ac_B.Constant3 = false;

    /* VariantMerge generated from: '<S219>/VariantSource4' incorporates:
     *  SignalConversion generated from: '<S219>/VariantSource4'
     */
    PDTR_ac_B.VariantMerge_For_Variant_Source_Varian_a = PDTR_ac_B.Constant3;

    /* VariantMerge generated from: '<S219>/VariantSource5' incorporates:
     *  SignalConversion generated from: '<S219>/VariantSource5'
     */
    PDTR_ac_B.VariantMerge_For_Variant_Source_Varia_gh = PDTR_ac_B.Constant3;

    /* VariantMerge generated from: '<S219>/VariantSource6' incorporates:
     *  SignalConversion generated from: '<S219>/VariantSource6'
     */
    PDTR_ac_B.VariantMerge_For_Variant_Source_Varian_i = PDTR_ac_B.Constant3;

    /* VariantMerge generated from: '<S219>/VariantSource7' incorporates:
     *  SignalConversion generated from: '<S219>/VariantSource7'
     */
    PDTR_ac_B.VariantMerge_For_Variant_Source_Varian_k = PDTR_ac_B.Constant3;

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VePDTR_b_EburnEnbl' incorporates:
     *  SignalConversion generated from: '<S2>/EburnEnbl'
     */
    (void)Rte_Write_VePDTR_b_EburnEnbl_Value
        (PDTR_ac_B.VariantMerge_For_Variant_Source_Varian_k);

    /* Outport: '<Root>/VePDTR_b_OV_EPD_BattCool_Req' incorporates:
     *  SignalConversion generated from: '<S2>/OV_EPD_BattCool_Req'
     */
    (void)Rte_Write_VePDTR_b_OV_EPD_BattCool_Req_Value
        (PDTR_ac_B.VariantMerge_For_Variant_Source_Varia_gh);

    /* Outport: '<Root>/VePDTR_b_OV_EPD_BattHeat_Req' incorporates:
     *  SignalConversion generated from: '<S2>/OV_EPD_BattHeat_Req'
     */
    (void)Rte_Write_VePDTR_b_OV_EPD_BattHeat_Req_Value
        (PDTR_ac_B.VariantMerge_For_Variant_Source_Varian_a);

    /* Outport: '<Root>/VePDTR_b_OV_EPD_CabCond_Req' incorporates:
     *  SignalConversion generated from: '<S2>/OV_EPD_CabCond_Req'
     */
    (void)Rte_Write_VePDTR_b_OV_EPD_CabCond_Req_Value
        (PDTR_ac_B.VariantMerge_For_Variant_Source_Varian_i);

    /* Outport: '<Root>/VePDTR_b_KeyRunCrnk_BattOV' incorporates:
     *  SignalConversion generated from: '<S2>/VePDTR_b_KeyRunCrnk_BattOV_Init'
     */
    (void)Rte_Write_VePDTR_b_KeyRunCrnk_BattOV_Value
        (PDTR_ac_B.VariantMerge_For_Variant_Source_Varian_g);

    /* Outport: '<Root>/VePDTR_b_KeyRun_OV_BattCrit' incorporates:
     *  SignalConversion generated from: '<S2>/VePDTR_b_KeyRun_OV_BattCrit_Init'
     */
    (void)Rte_Write_VePDTR_b_KeyRun_OV_BattCrit_Value
        (PDTR_ac_B.VariantMerge_For_Variant_Source_VariantS);

    /* Outport: '<Root>/VePDTR_e_EngOrBattPwrDschg_State' incorporates:
     *  SignalConversion generated from: '<S2>/VePDTR_e_EngOrBattPwrDschg_State_Init'
     *  VariantMerge generated from: '<S219>/VariantSource1'
     */
    (void)Rte_Write_VePDTR_e_EngOrBattPwrDschg_State_Value
        (PDTR_ac_B.VariantMerge_For_Variant_Source_Varian_c);

    /* End of Outputs for SubSystem: '<Root>/PDTR_PwrOn' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
#endif

}

#endif

/* Model initialize function */
FUNC(void, PDTR_CODE) PDTR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */

    /* custom signals */
#if Rte_SysCon_Variant_PDTR_1

    VePDTR_e_LTCLThrmlMode_AD = CeTHMR_e_LTCLBalancing;

#endif

#if Rte_SysCon_Variant_PDTR_1

    PDTR_ac_PrevZCX.Moving_Avg_Filter_Angle_Trig_ZCE = POS_ZCSIG;

#endif

    /* SystemInitialize for Merge: '<Root>/Merge_1' incorporates:
     *  Merge: '<Root>/Merge_2'
     *  Merge: '<Root>/Merge_3'
     *  Merge: '<Root>/Merge_4'
     *  Merge: '<Root>/Merge_5'
     *  Merge: '<Root>/Merge_6'
     *  Merge: '<Root>/Merge_7'
     */
#if Rte_SysCon_Variant_PDTR_1

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
    /* SystemInitialize for Function Call SubSystem: '<Root>/PDTR_PwrOn' */
    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/PDTO_Outputs_Init'
     */
    /* SystemInitialize for VariantMerge generated from: '<S219>/VariantSource2' incorporates:
     *  SignalConversion generated from: '<S219>/VariantSource2'
     */
    PDTR_ac_B.VariantMerge_For_Variant_Source_VariantS = PDTR_ac_B.Constant3;

    /* SystemInitialize for VariantMerge generated from: '<S219>/VariantSource1' incorporates:
     *  Constant: '<S222>/Calib'
     *  SignalConversion generated from: '<S219>/VariantSource1'
     */
    PDTR_ac_B.VariantMerge_For_Variant_Source_Varian_c =
        KePDTR_e_EngOrBattPwrDschg_State_Init;

    /* SystemInitialize for VariantMerge generated from: '<S219>/VariantSource3' incorporates:
     *  SignalConversion generated from: '<S219>/VariantSource3'
     */
    PDTR_ac_B.VariantMerge_For_Variant_Source_Varian_g = PDTR_ac_B.Constant3;

    /* SystemInitialize for VariantMerge generated from: '<S219>/VariantSource4' incorporates:
     *  SignalConversion generated from: '<S219>/VariantSource4'
     */
    PDTR_ac_B.VariantMerge_For_Variant_Source_Varian_a = PDTR_ac_B.Constant3;

    /* SystemInitialize for VariantMerge generated from: '<S219>/VariantSource5' incorporates:
     *  SignalConversion generated from: '<S219>/VariantSource5'
     */
    PDTR_ac_B.VariantMerge_For_Variant_Source_Varia_gh = PDTR_ac_B.Constant3;

    /* SystemInitialize for VariantMerge generated from: '<S219>/VariantSource6' incorporates:
     *  SignalConversion generated from: '<S219>/VariantSource6'
     */
    PDTR_ac_B.VariantMerge_For_Variant_Source_Varian_i = PDTR_ac_B.Constant3;

    /* SystemInitialize for VariantMerge generated from: '<S219>/VariantSource7' incorporates:
     *  SignalConversion generated from: '<S219>/VariantSource7'
     */
    PDTR_ac_B.VariantMerge_For_Variant_Source_Varian_k = PDTR_ac_B.Constant3;

    /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of SystemInitialize for SubSystem: '<Root>/PDTR_PwrOn' */

    /* SystemInitialize for Function Call SubSystem: '<Root>/PDTR_MedTEH' */
    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/PDTI_ProcessInputs'
     */
    /* SystemInitialize for Switch: '<S4>/Switch8' incorporates:
     *  Inport: '<Root>/VeTHMR_e_LTCLThrmlMode'
     *  Outport: '<S4>/LTCLThrmlMode_AD'
     */
    VePDTR_e_LTCLThrmlMode_AD = CeTHMR_e_LTCLBalancing;

    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of SystemInitialize for SubSystem: '<Root>/PDTR_MedTEH' */

    /* SystemInitialize for Outport: '<Root>/VePDTR_e_EngOrBattPwrDschg_State' */
    (void)Rte_Write_VePDTR_e_EngOrBattPwrDschg_State_Value(CePDTR_e_No_Dischrg);

    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
#endif

    /* End of SystemInitialize for Merge: '<Root>/Merge_1' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
