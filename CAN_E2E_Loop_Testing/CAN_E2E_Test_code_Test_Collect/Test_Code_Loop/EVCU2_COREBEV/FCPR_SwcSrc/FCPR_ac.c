/*
 * File: FCPR_ac.c
 *
 * Code generated for Simulink model 'FCPR_ac'.
 *
 * Model version                  : 9.109
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:41:55 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "FCPR_ac.h"
#include "look1_iflf_binlca_16a.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_FCPR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(float32, FCPR_VAR_INIT) KeFCPR_Cnt_WU_TmrInit = 0.0F;/* Referenced by: '<S75>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(float32, FCPR_VAR_INIT) KeFCPR_Cnt_WU_TmrStub = 0.0F;/* Referenced by: '<S137>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(float32, FCPR_VAR_INIT) KeFCPR_E_H2_EquivEgyInit = 0.0F;/* Referenced by: '<S76>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(float32, FCPR_VAR_INIT) KeFCPR_E_H2_EquivEgyStub = 0.0F;/* Referenced by: '<S138>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(float32, FCPR_VAR_INIT) KeFCPR_I_CurrInit = 0.0F;/* Referenced by: '<S77>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(float32, FCPR_VAR_INIT) KeFCPR_I_CurrStub = 0.0F;/* Referenced by: '<S139>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(float32, FCPR_VAR_INIT) KeFCPR_P_ActFCPSPwrCnsptInit =
    0.0F;                              /* Referenced by: '<S78>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(float32, FCPR_VAR_INIT) KeFCPR_P_ActFCPSPwrCnsptStub =
    0.0F;                              /* Referenced by: '<S140>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(float32, FCPR_VAR_INIT) KeFCPR_P_ActPwrInit = 0.0F;/* Referenced by: '<S79>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(float32, FCPR_VAR_INIT) KeFCPR_P_ActPwrStub = 0.0F;/* Referenced by: '<S141>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(float32, FCPR_VAR_INIT) KeFCPR_P_LongTiChrgPwrLimInit =
    0.0F;                              /* Referenced by: '<S80>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(float32, FCPR_VAR_INIT) KeFCPR_P_LongTiChrgPwrLimStub =
    0.0F;                              /* Referenced by: '<S142>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(float32, FCPR_VAR_INIT) KeFCPR_P_LongTiDchaPwrLimInit =
    0.0F;                              /* Referenced by: '<S81>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(float32, FCPR_VAR_INIT) KeFCPR_P_LongTiDchaPwrLimStub =
    0.0F;                              /* Referenced by: '<S143>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(float32, FCPR_VAR_INIT) KeFCPR_P_MaxAvailFCPSPwrInit =
    0.0F;                              /* Referenced by: '<S82>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(float32, FCPR_VAR_INIT) KeFCPR_P_MaxAvailFCPSPwrStub =
    0.0F;                              /* Referenced by: '<S144>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(float32, FCPR_VAR_INIT) KeFCPR_P_ReqdMinFCPSPwrInit = 0.0F;/* Referenced by: '<S83>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(float32, FCPR_VAR_INIT) KeFCPR_P_ReqdMinFCPSPwrStub = 0.0F;/* Referenced by: '<S145>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(float32, FCPR_VAR_INIT) KeFCPR_P_ShoTiChrgPwrLimInit =
    0.0F;                              /* Referenced by: '<S84>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(float32, FCPR_VAR_INIT) KeFCPR_P_ShoTiChrgPwrLimStub =
    0.0F;                              /* Referenced by: '<S146>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(float32, FCPR_VAR_INIT) KeFCPR_P_ShoTiDchaPwrLimInit =
    0.0F;                              /* Referenced by: '<S85>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(float32, FCPR_VAR_INIT) KeFCPR_P_ShoTiDchaPwrLimStub =
    0.0F;                              /* Referenced by: '<S147>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(float32, FCPR_VAR_INIT) KeFCPR_P_StrtUpPwrDmdInit = 0.0F;/* Referenced by: '<S86>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(float32, FCPR_VAR_INIT) KeFCPR_P_StrtUpPwrDmdStub = 0.0F;/* Referenced by: '<S148>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(float32, FCPR_VAR_INIT) KeFCPR_P_ThermPwrCnsReqInit = 0.0F;/* Referenced by: '<S87>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(float32, FCPR_VAR_INIT) KeFCPR_P_ThermPwrCnsReqStub = 0.0F;/* Referenced by: '<S149>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(float32, FCPR_VAR_INIT) KeFCPR_Pct_SetHbridgePWMOutputInit
    = 0.0F;                            /* Referenced by: '<S88>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(float32, FCPR_VAR_INIT) KeFCPR_Pct_SetHbridgePWMOutputStub
    = 0.0F;                            /* Referenced by: '<S150>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(float32, FCPR_VAR_INIT) KeFCPR_T_FCPS_HTCoolDeltaSpInit =
    0.0F;                              /* Referenced by: '<S89>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(float32, FCPR_VAR_INIT) KeFCPR_T_FCPS_HTCoolDeltaSpStub =
    0.0F;                              /* Referenced by: '<S151>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(float32, FCPR_VAR_INIT) KeFCPR_T_FCPS_HTCoolInTempInit =
    0.0F;                              /* Referenced by: '<S90>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(float32, FCPR_VAR_INIT) KeFCPR_T_FCPS_HTCoolInTempStub =
    0.0F;                              /* Referenced by: '<S152>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(float32, FCPR_VAR_INIT) KeFCPR_T_FCPS_HTCoolOutTempInit =
    0.0F;                              /* Referenced by: '<S91>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(float32, FCPR_VAR_INIT) KeFCPR_T_FCPS_HTCoolOutTempSpInit =
    0.0F;                              /* Referenced by: '<S92>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(float32, FCPR_VAR_INIT) KeFCPR_T_FCPS_HTCoolOutTempSpStub =
    0.0F;                              /* Referenced by: '<S153>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(float32, FCPR_VAR_INIT) KeFCPR_T_FCPS_HTCoolOutTempStub =
    0.0F;                              /* Referenced by: '<S154>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(float32, FCPR_VAR_INIT) KeFCPR_T_FCPS_LTCoolMaxTempInit =
    0.0F;                              /* Referenced by: '<S93>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(float32, FCPR_VAR_INIT) KeFCPR_T_FCPS_LTCoolMaxTempStub =
    0.0F;                              /* Referenced by: '<S155>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(float32, FCPR_VAR_INIT) KeFCPR_U_CoverMtrPosnInit = 0.85F;/* Referenced by: '<S94>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(float32, FCPR_VAR_INIT) KeFCPR_U_HB_SysVoltInit = 6.2F;/* Referenced by: '<S95>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(float32, FCPR_VAR_INIT) KeFCPR_U_LowrVoltLimInit = 0.0F;/* Referenced by: '<S96>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(float32, FCPR_VAR_INIT) KeFCPR_U_LowrVoltLimStub = 0.0F;/* Referenced by: '<S156>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(float32, FCPR_VAR_INIT) KeFCPR_U_UpprVoltLimInit = 0.0F;/* Referenced by: '<S97>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(float32, FCPR_VAR_INIT) KeFCPR_U_UpprVoltLimStub = 0.0F;/* Referenced by: '<S157>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(float32, FCPR_VAR_INIT) KeFCPR_U_VoltInit = 0.0F;/* Referenced by: '<S98>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(float32, FCPR_VAR_INIT) KeFCPR_U_VoltStub = 0.0F;/* Referenced by: '<S158>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_ActFCPSPwrCnsptFAInit = 0;/* Referenced by: '<S99>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_ActFCPSPwrCnsptFAStub = 0;/* Referenced by: '<S159>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_ActModFAInit = 0;/* Referenced by: '<S100>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_ActModFAStub = 0;/* Referenced by: '<S160>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_ActPwrFAInit = 0;/* Referenced by: '<S101>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_ActPwrFAStub = 0;/* Referenced by: '<S161>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_CoverMtrPosnFAInit = 0;/* Referenced by: '<S102>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_CurrFAInit = 0;/* Referenced by: '<S103>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_CurrFAStub = 0;/* Referenced by: '<S162>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_FCPS_HTCoolDeltaSpFAInit =
    0;                                 /* Referenced by: '<S104>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_FCPS_HTCoolDeltaSpFAStub =
    0;                                 /* Referenced by: '<S163>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_FCPS_HTCoolInTempFAInit =
    0;                                 /* Referenced by: '<S105>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_FCPS_HTCoolInTempFAStub =
    0;                                 /* Referenced by: '<S164>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_FCPS_HTCoolOutTempFAInit =
    0;                                 /* Referenced by: '<S106>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_FCPS_HTCoolOutTempFAStub =
    0;                                 /* Referenced by: '<S165>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT)
    KeFCPR_b_FCPS_HTCoolOutTempSpFAInit = 0;/* Referenced by: '<S107>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT)
    KeFCPR_b_FCPS_HTCoolOutTempSpFAStub = 0;/* Referenced by: '<S166>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_FCPS_HTCoolReqFAInit = 0;/* Referenced by: '<S108>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_FCPS_HTCoolReqFAStub = 0;/* Referenced by: '<S167>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_FCPS_LTCoolMaxTempFAInit =
    0;                                 /* Referenced by: '<S109>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_FCPS_LTCoolMaxTempFAStub =
    0;                                 /* Referenced by: '<S168>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_FC_DCDC_IntrlkStatFAInit =
    0;                                 /* Referenced by: '<S110>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_FC_DCDC_IntrlkStatFAStub =
    0;                                 /* Referenced by: '<S169>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_FuelLidReqInit = 0;/* Referenced by: '<S111>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_FuelLidReqStub = 0;/* Referenced by: '<S170>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_H2_RefuelStsInit = 0;/* Referenced by: '<S112>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_H2_RefuelStsStub = 0;/* Referenced by: '<S171>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_H2_SolenoidReqInit = 0;/* Referenced by: '<S113>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_H2_SolenoidReqStub = 0;/* Referenced by: '<S172>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_HB_SysVoltFAInit = 0;/* Referenced by: '<S114>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_HEAC_IntrlkStatFAInit = 0;/* Referenced by: '<S115>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_HEAC_IntrlkStatFAStub = 0;/* Referenced by: '<S173>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_HV_AfterRunStsInit = 0;/* Referenced by: '<S116>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_HV_AfterRunStsStub = 0;/* Referenced by: '<S174>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_HbridgeEnableControlInit =
    0;                                 /* Referenced by: '<S117>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_HbridgeEnableControlStub =
    0;                                 /* Referenced by: '<S175>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_KeepAliveReqStub = 0;/* Referenced by: '<S176>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_KeepAlive_ReqInit = 0;/* Referenced by: '<S118>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_LongTiChrgPwrLimFAInit =
    0;                                 /* Referenced by: '<S119>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_LongTiChrgPwrLimFAStub =
    0;                                 /* Referenced by: '<S177>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_LongTiDchaPwrLimFAInit =
    0;                                 /* Referenced by: '<S120>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_LongTiDchaPwrLimFAStub =
    0;                                 /* Referenced by: '<S178>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_LowrVoltLimFAInit = 0;/* Referenced by: '<S121>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_LowrVoltLimFAStub = 0;/* Referenced by: '<S179>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_MaxAvailFCPSPwrFAInit = 0;/* Referenced by: '<S122>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_MaxAvailFCPSPwrFAStub = 0;/* Referenced by: '<S180>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_ReqdMinFCPSPwrFAInit = 0;/* Referenced by: '<S123>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_ReqdMinFCPSPwrFAStub = 0;/* Referenced by: '<S181>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_RunReqToEVCUInit = 0;/* Referenced by: '<S124>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_RunReqToEVCUStub = 0;/* Referenced by: '<S182>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_ShoTiChrgPwrLimFAInit = 0;/* Referenced by: '<S125>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_ShoTiChrgPwrLimFAStub = 0;/* Referenced by: '<S183>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_ShoTiDchaPwrLimFAInit = 0;/* Referenced by: '<S126>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_ShoTiDchaPwrLimFAStub = 0;/* Referenced by: '<S184>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_SolenoidFltStsInit = 0;/* Referenced by: '<S127>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_SolenoidFltStsStub = 0;/* Referenced by: '<S185>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_SolenoidStsInit = 1;/* Referenced by: '<S128>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_SolenoidStsStub = 1;/* Referenced by: '<S186>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_StrtUpPwrDmdFAInit = 0;/* Referenced by: '<S129>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_StrtUpPwrDmdFAStub = 0;/* Referenced by: '<S187>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_ThermPwrCnsReqFAInit = 0;/* Referenced by: '<S130>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_ThermPwrCnsReqFAStub = 0;/* Referenced by: '<S188>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_UpprVoltLimFAInit = 0;/* Referenced by: '<S131>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_UpprVoltLimFAStub = 0;/* Referenced by: '<S189>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_VoltFAInit = 0;/* Referenced by: '<S132>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(boolean, FCPR_VAR_INIT) KeFCPR_b_VoltFAStub = 0;/* Referenced by: '<S190>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(TeFCPR_e_ActualMode, FCPR_VAR_INIT) KeFCPR_e_ActModInit =
    CeFCPR_e_ActualMode_NotAvailable;  /* Referenced by: '<S133>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(TeFCPR_e_ActualMode, FCPR_VAR_INIT) KeFCPR_e_ActModStub =
    CeFCPR_e_ActualMode_NotAvailable;  /* Referenced by: '<S191>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(TeFCPR_e_FCPS_HTCoolReq, FCPR_VAR_INIT)
    KeFCPR_e_FCPS_HTCoolReqInit = CeFCPR_e_No_Request;/* Referenced by: '<S134>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(TeFCPR_e_FCPS_HTCoolReq, FCPR_VAR_INIT)
    KeFCPR_e_FCPS_HTCoolReqStub = CeFCPR_e_No_Request;/* Referenced by: '<S192>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(TeHVTR_e_HV_IntrlkStat, FCPR_VAR_INIT)
    KeFCPR_e_FC_DCDC_IntrlkStatInit = CeHVTR_e_IntrlkNotSourced;/* Referenced by: '<S135>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(TeHVTR_e_HV_IntrlkStat, FCPR_VAR_INIT)
    KeFCPR_e_FC_DCDC_IntrlkStatStub = CeHVTR_e_IntrlkNotSourced;/* Referenced by: '<S193>/Calib' */

#endif

#if Rte_SysCon_Variant_FCPR_1

static volatile CONST(TeHVTR_e_HV_IntrlkStat, FCPR_VAR_INIT)
    KeFCPR_e_HEAC_IntrlkStatInit = CeHVTR_e_IntrlkNotSourced;/* Referenced by: '<S136>/Calib' */

#endif

#if !Rte_SysCon_Variant_FCPR_1

static volatile CONST(TeHVTR_e_HV_IntrlkStat, FCPR_VAR_INIT)
    KeFCPR_e_HEAC_IntrlkStatStub = CeHVTR_e_IntrlkNotSourced;/* Referenced by: '<S194>/Calib' */

#endif

static volatile CONST(float32, FCPR_VAR_INIT) KtFCPR_Cnt_SolnHldTi[2] =
{
    64.0F, 120.0F
} ;                                    /* Referenced by: '<S64>/Vector' */

static volatile CONST(float32, FCPR_VAR_INIT) KxFCPR_Cnt_SolnHldTi[2] =
{
    3.4F, 3.6F
} ;                                    /* Referenced by: '<S64>/Vector' */

#define STOP_SEC_CALIB_UNSPECIFIED_FCPR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_FCPR
#include "MemMap.h"

CONST(ConstB_FCPR_ac_T, FCPR_VAR_INIT) FCPR_ac_ConstB =
{

#if Rte_SysCon_Variant_FCPR_1

    CeFCPR_e_HB_NO_FAILURE_PRESENT     /* '<S74>/Constant' */
#define CONSTB_FCPR_AC_T_VARIANT_EXISTS
#endif
#ifndef CONSTB_FCPR_AC_T_VARIANT_EXISTS
    0
#endif                           /* CONSTB_FCPR_AC_T_VARIANT_EXISTS undefined */
};

#define STOP_SEC_CONST_UNSPECIFIED_FCPR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_FCPR
#include "MemMap.h"

VAR(B_FCPR_ac_T, FCPR_VAR_INIT) FCPR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_FCPR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_FCPR
#include "MemMap.h"

VAR(DW_FCPR_ac_T, FCPR_VAR_INIT) FCPR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_FCPR
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, FCPR_CODE) FCPR_MedTEB(void) /* Explicit Task: MedTEB */
{
    float32 rtb_Product;
    boolean rtb_AND_i_tmp;
    boolean rtb_AND_j;
    boolean rtb_Logical2;
    boolean rtb_UnitDelay_m;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFCPR_MedTEBInport10' */
#if Rte_SysCon_Variant_FCPR_1

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtFCPR_MedTEBInport10' incorporates:
     *  Merge: '<Root>/Merge_18'
     */
    FCPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy =
        Rte_IrvRead_FCPR_MedTEB_CoverMtrPosn_Init_write_IRV();

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtFCPR_MedTEBInport10' incorporates:
     *  Merge: '<Root>/Merge_21'
     */
    FCPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_o =
        Rte_IrvRead_FCPR_MedTEB_CoverMtrPosnFA_Init_write_IRV();

#else

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtFCPR_MedTEBInport10' */
    FCPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy = 0.0F;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFCPR_MedTEBInport10' */
#if Rte_SysCon_Variant_FCPR_1

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtFCPR_MedTEBInport10' incorporates:
     *  Merge: '<Root>/Merge_22'
     */
    FCPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_k =
        Rte_IrvRead_FCPR_MedTEB_UpdateHBridgeDiagData_Init_write_IRV();

#else

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtFCPR_MedTEBInport10' */
    FCPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_o = false;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFCPR_MedTEBInport10' */
#if Rte_SysCon_Variant_FCPR_1

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtFCPR_MedTEBInport10' incorporates:
     *  SignalConversion generated from: '<S53>/VeFCPR_b_HV_AfterRun_Sts'
     */
    FCPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_i =
        Rte_IrvRead_FCPR_MedTEB_VeFCPR_b_HV_AfterRun_Sts_IRV();

#else

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtFCPR_MedTEBInport10' */
    FCPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_k =
        CeFCPR_e_HB_NO_FAILURE_PRESENT;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFCPR_MedTEBInport10' */
#if Rte_SysCon_Variant_FCPR_1

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtFCPR_MedTEBInport10' incorporates:
     *  SignalConversion generated from: '<S51>/VeFCPR_b_H2_Refuel_Sts'
     */
    FCPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_g =
        Rte_IrvRead_FCPR_MedTEB_VeFCPR_b_H2_Refuel_Sts_IRV();

#else

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtFCPR_MedTEBInport10' */
    FCPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_i = false;

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtFCPR_MedTEBInport10' */
    FCPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_g = false;

#endif

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VePMDR_b_HB_SysVoltRawFA' */
    (void)Rte_Read_VePMDR_b_HB_SysVoltRawFA_Value(&rtb_Logical2);

    /* Inport: '<Root>/VePMDR_U_HB_SysVolt' */
    (void)Rte_Read_VePMDR_U_HB_SysVolt_Value(&rtb_Product);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/FCPR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Fifth_Valve_Mngt'
     */
    /* UnitDelay: '<S60>/Unit Delay' */
    rtb_UnitDelay_m = FCPR_ac_DW.UnitDelay_DSTATE_c;

    /* Outputs for Atomic SubSystem: '<S60>/Hysteresis_2' */
    /* Switch: '<S63>/Switch1' incorporates:
     *  Constant: '<S60>/Constant_Value5'
     *  Constant: '<S60>/Constant_Value6'
     *  Constant: '<S63>/Constant Value'
     *  RelationalOperator: '<S63>/Greater  Than'
     *  RelationalOperator: '<S63>/Greater  Than1'
     *  UnitDelay: '<S63>/Unit Delay'
     */
    if (FCPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy >= 3.4F)
    {
        FCPR_ac_DW.UnitDelay_DSTATE_h = true;
    }
    else
    {
        FCPR_ac_DW.UnitDelay_DSTATE_h =
            ((FCPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy >= 1.21F) &&
             (FCPR_ac_DW.UnitDelay_DSTATE_h));
    }

    /* End of Switch: '<S63>/Switch1' */
    /* End of Outputs for SubSystem: '<S60>/Hysteresis_2' */

    /* Switch: '<S67>/Switch1' incorporates:
     *  Constant: '<S60>/Constant_Value8'
     *  Switch: '<S67>/Switch2'
     *  UnitDelay: '<S60>/Unit Delay'
     *  UnitDelay: '<S63>/Unit Delay'
     *  UnitDelay: '<S67>/Unit Delay1'
     */
    if (FCPR_ac_DW.UnitDelay_DSTATE_c)
    {
        FCPR_ac_DW.UnitDelay1_DSTATE = 0.0F;
    }
    else
    {
        if (FCPR_ac_DW.UnitDelay_DSTATE_h)
        {
            /* Switch: '<S67>/Switch2' incorporates:
             *  UnitDelay: '<S67>/Unit Delay'
             *  UnitDelay: '<S67>/Unit Delay1'
             */
            FCPR_ac_DW.UnitDelay1_DSTATE = FCPR_ac_DW.UnitDelay_DSTATE;
        }
    }

    /* End of Switch: '<S67>/Switch1' */

    /* MinMax: '<S60>/MinMax2' incorporates:
     *  UnitDelay: '<S67>/Unit Delay1'
     */
    FCPR_ac_DW.UnitDelay_DSTATE = fmaxf(FCPR_ac_DW.UnitDelay1_DSTATE,
        FCPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy);

    /* Logic: '<S60>/Logical2' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFCPR_MedTEBInport10'
     */
    rtb_Logical2 = (rtb_Logical2 ||
                    (FCPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_o));

    /* Outputs for Atomic SubSystem: '<S60>/Turn_Off_Delay_Sample_Modified' */
    /* Outputs for Atomic SubSystem: '<S66>/EdgeFalling1' */
    /* Logic: '<S68>/OR1' incorporates:
     *  Logic: '<S66>/AND'
     *  UnitDelay: '<S63>/Unit Delay'
     */
    rtb_AND_i_tmp = !FCPR_ac_DW.UnitDelay_DSTATE_h;

    /* Logic: '<S68>/AND' incorporates:
     *  Logic: '<S68>/OR1'
     *  UnitDelay: '<S68>/Unit Delay'
     */
    rtb_AND_j = (rtb_AND_i_tmp && (FCPR_ac_DW.UnitDelay_DSTATE_e));

    /* Update for UnitDelay: '<S68>/Unit Delay' incorporates:
     *  UnitDelay: '<S63>/Unit Delay'
     */
    FCPR_ac_DW.UnitDelay_DSTATE_e = FCPR_ac_DW.UnitDelay_DSTATE_h;

    /* End of Outputs for SubSystem: '<S66>/EdgeFalling1' */

    /* Switch: '<S66>/Switch' incorporates:
     *  MinMax: '<S66>/Minimum1'
     *  UnitDelay: '<S66>/Unit Delay'
     */
    if (rtb_AND_j)
    {
        /* MinMax: '<S66>/Minimum1' incorporates:
         *  DataTypeConversion: '<S60>/FloatToFix'
         *  Lookup_n-D: '<S64>/Vector'
         *  MinMax: '<S60>/MinMax2'
         *  UnitDelay: '<S66>/Unit Delay'
         */
        FCPR_ac_DW.UnitDelay_DSTATE_d = (uint16)look1_iflf_binlca_16a
            (FCPR_ac_DW.UnitDelay_DSTATE, ((const float32 *)
              &(KxFCPR_Cnt_SolnHldTi[0])), ((const float32 *)
              &(KtFCPR_Cnt_SolnHldTi[0])), 1U);
    }
    else
    {
        if (((sint32)FCPR_ac_DW.UnitDelay_DSTATE_d) <= 1)
        {
            /* MinMax: '<S66>/Minimum1' */
            FCPR_ac_DW.UnitDelay_DSTATE_d = 1U;
        }

        /* MinMax: '<S66>/Minimum1' incorporates:
         *  Constant: '<S66>/Constant Value'
         *  Sum: '<S66>/Summation'
         *  UnitDelay: '<S66>/Unit Delay'
         */
        FCPR_ac_DW.UnitDelay_DSTATE_d = (uint16)((sint32)(((sint32)
            FCPR_ac_DW.UnitDelay_DSTATE_d) - 1));
    }

    /* End of Switch: '<S66>/Switch' */

    /* Logic: '<S60>/Logical3' incorporates:
     *  Constant: '<S66>/Constant Value2'
     *  Logic: '<S66>/AND'
     *  RelationalOperator: '<S66>/Greater  Than'
     *  UnitDelay: '<S60>/Unit Delay'
     *  UnitDelay: '<S66>/Unit Delay'
     */
    FCPR_ac_DW.UnitDelay_DSTATE_c = (rtb_AND_i_tmp && (((sint32)
        FCPR_ac_DW.UnitDelay_DSTATE_d) <= 0));

    /* End of Outputs for SubSystem: '<S60>/Turn_Off_Delay_Sample_Modified' */

    /* Switch: '<S60>/Switch2' */
    if (rtb_Logical2)
    {
        /* Switch: '<S60>/Switch2' incorporates:
         *  Constant: '<S60>/Constant_Value7'
         */
        rtb_Product = 0.0F;
    }
    else
    {
        /* Product: '<S60>/Product' incorporates:
         *  Constant: '<S60>/Constant_Value1'
         *  Constant: '<S60>/Constant_Value2'
         *  MinMax: '<S60>/MinMax1'
         *  Product: '<S60>/Product1'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFCPR_MedTEBInport10'
         */
        rtb_Product = (FCPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy /
                       fmaxf(rtb_Product, 6.2F)) * 100.0F;

        /* Outputs for Atomic SubSystem: '<S60>/Limiter' */
        /* Switch: '<S65>/Switch1' incorporates:
         *  Constant: '<S60>/Constant_Value3'
         *  RelationalOperator: '<S65>/Relational Operator'
         */
        if (100.0F < rtb_Product)
        {
            /* Switch: '<S65>/Switch1' */
            rtb_Product = 100.0F;
        }

        /* End of Switch: '<S65>/Switch1' */

        /* Switch: '<S65>/Switch' incorporates:
         *  Constant: '<S60>/Constant_Value4'
         *  RelationalOperator: '<S65>/Relational Operator1'
         */
        if (rtb_Product <= 0.0F)
        {
            /* Switch: '<S60>/Switch2' */
            rtb_Product = 0.0F;
        }

        /* End of Switch: '<S65>/Switch' */
        /* End of Outputs for SubSystem: '<S60>/Limiter' */
    }

    /* End of Switch: '<S60>/Switch2' */

    /* Switch: '<S67>/Switch3' incorporates:
     *  Constant: '<S60>/Constant_Value8'
     *  UnitDelay: '<S67>/Unit Delay'
     */
    if (rtb_UnitDelay_m)
    {
        FCPR_ac_DW.UnitDelay_DSTATE = 0.0F;
    }

    /* End of Switch: '<S67>/Switch3' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Logic_Invertion_Mngt'
     */
    /* Outport: '<Root>/VeFCPR_b_FCPS_H2_RefuelSts' incorporates:
     *  Logic: '<S61>/Logical1'
     *  SignalConversion generated from: '<S1>/H2_Refuel_Sts_Out'
     */
    (void)Rte_Write_VeFCPR_b_FCPS_H2_RefuelSts_Value
        (!FCPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_g);

    /* Outport: '<Root>/VeFCPR_b_FCPS_HV_AfterRunSts' incorporates:
     *  Logic: '<S61>/Logical3'
     *  SignalConversion generated from: '<S1>/HV_AfterRun_Sts_Out'
     */
    (void)Rte_Write_VeFCPR_b_FCPS_HV_AfterRunSts_Value
        (!FCPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_i);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeFCPR_Pct_SetHbridgePWMOutput' incorporates:
     *  SignalConversion generated from: '<S1>/SetHbridgePWMOutput'
     */
    (void)Rte_Write_VeFCPR_Pct_SetHbridgePWMOutput_Value(rtb_Product);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Fifth_Valve_Mngt'
     */
    /* Outport: '<Root>/VeFCPR_b_H2_Solenoid_Flt_Sts' incorporates:
     *  Constant: '<S62>/Constant'
     *  Logic: '<S60>/Logical1'
     *  RelationalOperator: '<S60>/Comparison4'
     *  SignalConversion generated from: '<S1>/Solenoid_Flt_Sts'
     *  VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtFCPR_MedTEBInport10'
     */
    (void)Rte_Write_VeFCPR_b_H2_Solenoid_Flt_Sts_Value((((uint32)
        FCPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_k) !=
        CeFCPR_e_HB_NO_FAILURE_PRESENT) || rtb_Logical2);

    /* Outport: '<Root>/VeFCPR_b_H2_Solenoid_Sts' incorporates:
     *  SignalConversion generated from: '<S1>/VeFCPR_b_H2_Solenoid_Sts'
     *  Switch: '<S60>/Switch1'
     *  UnitDelay: '<S60>/Unit Delay'
     */
    (void)Rte_Write_VeFCPR_b_H2_Solenoid_Sts_Value
        ((FCPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_o) ||
         (FCPR_ac_DW.UnitDelay_DSTATE_c));

    /* Outport: '<Root>/VeFCPR_b_HbridgeEnableControl' incorporates:
     *  Constant: '<S60>/TRUE_Constant'
     *  SignalConversion generated from: '<S1>/VeFCPR_b_HbridgeEnableControl'
     *  SignalConversion generated from: '<S60>/VeFCPR_b_HbridgeEnableControl'
     */
    (void)Rte_Write_VeFCPR_b_HbridgeEnableControl_Value(true);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) FsftFCPR_I_CURRENT(void)
{

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftFCPR_I_CURRENT' */
    /* Outport: '<Root>/VeFCPR_b_FCPS_Curr_FA' incorporates:
     *  Chart: '<S3>/FsftFCPR_I_CURRENTChrt'
     *  SignalConversion generated from: '<S3>/VeFCPR_b_CURRENTFA'
     */
    /* Gateway: FsftFCPR_I_CURRENT/FsftFCPR_I_CURRENTChrt */
    /* During: FsftFCPR_I_CURRENT/FsftFCPR_I_CURRENTChrt */
    /* Entry Internal: FsftFCPR_I_CURRENT/FsftFCPR_I_CURRENTChrt */
    /* Transition: '<S195>:2' */
    (void)Rte_Write_VeFCPR_b_FCPS_Curr_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftFCPR_I_CURRENT' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) FsftFCPR_P_FCPS_ActFCPSPwrCnspt(void)
{

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftFCPR_P_FCPS_ActFCPSPwrCnspt' */
    /* Outport: '<Root>/VeFCPR_b_FCPS_ActFCPSPwrCnspt_FA' incorporates:
     *  Chart: '<S4>/FsftFCPR_P_FCPS_ActFCPSPwrCnsptChrt'
     *  SignalConversion generated from: '<S4>/VeFCPR_b_FCPS_ActFCPSPwrCnsptFA'
     */
    /* Gateway: FsftFCPR_P_FCPS_ActFCPSPwrCnspt/FsftFCPR_P_FCPS_ActFCPSPwrCnsptChrt */
    /* During: FsftFCPR_P_FCPS_ActFCPSPwrCnspt/FsftFCPR_P_FCPS_ActFCPSPwrCnsptChrt */
    /* Entry Internal: FsftFCPR_P_FCPS_ActFCPSPwrCnspt/FsftFCPR_P_FCPS_ActFCPSPwrCnsptChrt */
    /* Transition: '<S196>:2' */
    (void)Rte_Write_VeFCPR_b_FCPS_ActFCPSPwrCnspt_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftFCPR_P_FCPS_ActFCPSPwrCnspt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) FsftFCPR_P_FCPS_MaxAvailFCPSPwr(void)
{

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftFCPR_P_FCPS_MaxAvailFCPSPwr' */
    /* Outport: '<Root>/VeFCPR_b_FCPS_MaxAvailFCPSPwr_FA' incorporates:
     *  Chart: '<S5>/FsftFCPR_P_FCPS_MaxAvailFCPSPwrChrt'
     *  SignalConversion generated from: '<S5>/VeFCPR_b_FCPS_MaxAvailFCPSPwrFA'
     */
    /* Gateway: FsftFCPR_P_FCPS_MaxAvailFCPSPwr/FsftFCPR_P_FCPS_MaxAvailFCPSPwrChrt */
    /* During: FsftFCPR_P_FCPS_MaxAvailFCPSPwr/FsftFCPR_P_FCPS_MaxAvailFCPSPwrChrt */
    /* Entry Internal: FsftFCPR_P_FCPS_MaxAvailFCPSPwr/FsftFCPR_P_FCPS_MaxAvailFCPSPwrChrt */
    /* Transition: '<S197>:2' */
    (void)Rte_Write_VeFCPR_b_FCPS_MaxAvailFCPSPwr_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftFCPR_P_FCPS_MaxAvailFCPSPwr' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) FsftFCPR_P_FCPS_ReqdMinFCPSPwr(void)
{

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftFCPR_P_FCPS_ReqdMinFCPSPwr' */
    /* Outport: '<Root>/VeFCPR_b_FCPS_ReqdMinFCPSPwr_FA' incorporates:
     *  Chart: '<S6>/FsftFCPR_P_FCPS_ReqdMinFCPSPwrChrt'
     *  SignalConversion generated from: '<S6>/VeFCPR_b_FCPS_ReqdMinFCPSPwr_FA'
     */
    /* Gateway: FsftFCPR_P_FCPS_ReqdMinFCPSPwr/FsftFCPR_P_FCPS_ReqdMinFCPSPwrChrt */
    /* During: FsftFCPR_P_FCPS_ReqdMinFCPSPwr/FsftFCPR_P_FCPS_ReqdMinFCPSPwrChrt */
    /* Entry Internal: FsftFCPR_P_FCPS_ReqdMinFCPSPwr/FsftFCPR_P_FCPS_ReqdMinFCPSPwrChrt */
    /* Transition: '<S198>:2' */
    (void)Rte_Write_VeFCPR_b_FCPS_ReqdMinFCPSPwr_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftFCPR_P_FCPS_ReqdMinFCPSPwr' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) FsftFCPR_P_FCPS_THERM_PWR_CNS_REQ(void)
{

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftFCPR_P_FCPS_THERM_PWR_CNS_REQ' */
    /* Outport: '<Root>/VeFCPR_P_FCPS_ThermPwrCnsReq_FA' incorporates:
     *  Chart: '<S7>/FsftFCPR_P_FCPS_THERM_PWR_CNS_REQChrt'
     *  SignalConversion generated from: '<S7>/VeFCPR_b_FCPS_THERM_PWR_CNS_REQ_FA'
     */
    /* Gateway: FsftFCPR_P_FCPS_THERM_PWR_CNS_REQ/FsftFCPR_P_FCPS_THERM_PWR_CNS_REQChrt */
    /* During: FsftFCPR_P_FCPS_THERM_PWR_CNS_REQ/FsftFCPR_P_FCPS_THERM_PWR_CNS_REQChrt */
    /* Entry Internal: FsftFCPR_P_FCPS_THERM_PWR_CNS_REQ/FsftFCPR_P_FCPS_THERM_PWR_CNS_REQChrt */
    /* Transition: '<S199>:2' */
    (void)Rte_Write_VeFCPR_P_FCPS_ThermPwrCnsReq_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftFCPR_P_FCPS_THERM_PWR_CNS_REQ' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) FsftFCPR_P_Gen_Pwr(void)
{

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftFCPR_P_Gen_Pwr' */
    /* Outport: '<Root>/VeFCPR_b_FCPS_ActPwr_FA' incorporates:
     *  Chart: '<S8>/FsftFCPR_P_Gen_PwrChrt'
     *  SignalConversion generated from: '<S8>/VeFCPR_b_Gen_PwrFA'
     */
    /* Gateway: FsftFCPR_P_Gen_Pwr/FsftFCPR_P_Gen_PwrChrt */
    /* During: FsftFCPR_P_Gen_Pwr/FsftFCPR_P_Gen_PwrChrt */
    /* Entry Internal: FsftFCPR_P_Gen_Pwr/FsftFCPR_P_Gen_PwrChrt */
    /* Transition: '<S200>:2' */
    (void)Rte_Write_VeFCPR_b_FCPS_ActPwr_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftFCPR_P_Gen_Pwr' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) FsftFCPR_P_LONGTIME_CHRG_PWRLIM(void)
{

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftFCPR_P_LONGTIME_CHRG_PWRLIM' */
    /* Outport: '<Root>/VeFCPR_b_FCPS_LongTiChrgPwrLim_FA' incorporates:
     *  Chart: '<S9>/FsftFCPR_P_LONGTIME_CHRG_PWRLIMChrt'
     *  SignalConversion generated from: '<S9>/VeFCPR_b_LONGTIME_CHRG_PWRLIMFA'
     */
    /* Gateway: FsftFCPR_P_LONGTIME_CHRG_PWRLIM/FsftFCPR_P_LONGTIME_CHRG_PWRLIMChrt */
    /* During: FsftFCPR_P_LONGTIME_CHRG_PWRLIM/FsftFCPR_P_LONGTIME_CHRG_PWRLIMChrt */
    /* Entry Internal: FsftFCPR_P_LONGTIME_CHRG_PWRLIM/FsftFCPR_P_LONGTIME_CHRG_PWRLIMChrt */
    /* Transition: '<S201>:2' */
    (void)Rte_Write_VeFCPR_b_FCPS_LongTiChrgPwrLim_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftFCPR_P_LONGTIME_CHRG_PWRLIM' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) FsftFCPR_P_LONGTIME_DISCHRG_PWRLIM(void)
{

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftFCPR_P_LONGTIME_DISCHRG_PWRLIM' */
    /* Outport: '<Root>/VeFCPR_b_FCPS_LongTiDchaPwrLim_FA' incorporates:
     *  Chart: '<S10>/FsftFCPR_P_LONGTIME_DISCHRG_PWRLIMChrt'
     *  SignalConversion generated from: '<S10>/VeFCPR_b_LONGTIME_DISCHRG_PWRLIMFA'
     */
    /* Gateway: FsftFCPR_P_LONGTIME_DISCHRG_PWRLIM/FsftFCPR_P_LONGTIME_DISCHRG_PWRLIMChrt */
    /* During: FsftFCPR_P_LONGTIME_DISCHRG_PWRLIM/FsftFCPR_P_LONGTIME_DISCHRG_PWRLIMChrt */
    /* Entry Internal: FsftFCPR_P_LONGTIME_DISCHRG_PWRLIM/FsftFCPR_P_LONGTIME_DISCHRG_PWRLIMChrt */
    /* Transition: '<S202>:2' */
    (void)Rte_Write_VeFCPR_b_FCPS_LongTiDchaPwrLim_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftFCPR_P_LONGTIME_DISCHRG_PWRLIM' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) FsftFCPR_P_SHORTTIME_CHRG_PWRLIM(void)
{

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftFCPR_P_SHORTTIME_CHRG_PWRLIM' */
    /* Outport: '<Root>/VeFCPR_b_FCPS_ShoTiChrgPwrLim_FA' incorporates:
     *  Chart: '<S11>/FsftFCPR_P_SHORTTIME_CHRG_PWRLIMChrt'
     *  SignalConversion generated from: '<S11>/VeFCPR_b_SHORTTIME_CHRG_PWRLIMFA'
     */
    /* Gateway: FsftFCPR_P_SHORTTIME_CHRG_PWRLIM/FsftFCPR_P_SHORTTIME_CHRG_PWRLIMChrt */
    /* During: FsftFCPR_P_SHORTTIME_CHRG_PWRLIM/FsftFCPR_P_SHORTTIME_CHRG_PWRLIMChrt */
    /* Entry Internal: FsftFCPR_P_SHORTTIME_CHRG_PWRLIM/FsftFCPR_P_SHORTTIME_CHRG_PWRLIMChrt */
    /* Transition: '<S203>:2' */
    (void)Rte_Write_VeFCPR_b_FCPS_ShoTiChrgPwrLim_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftFCPR_P_SHORTTIME_CHRG_PWRLIM' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) FsftFCPR_P_SHORTTIME_DISCHRG_PWRLIM(void)
{

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftFCPR_P_SHORTTIME_DISCHRG_PWRLIM' */
    /* Outport: '<Root>/VeFCPR_b_FCPS_ShoTiDchaPwrLim_FA' incorporates:
     *  Chart: '<S12>/FsftFCPR_P_SHORTTIME_DISCHRG_PWRLIMChrt'
     *  SignalConversion generated from: '<S12>/VeFCPR_b_SHORTTIME_DISCHRG_PWRLIMFA'
     */
    /* Gateway: FsftFCPR_P_SHORTTIME_DISCHRG_PWRLIM/FsftFCPR_P_SHORTTIME_DISCHRG_PWRLIMChrt */
    /* During: FsftFCPR_P_SHORTTIME_DISCHRG_PWRLIM/FsftFCPR_P_SHORTTIME_DISCHRG_PWRLIMChrt */
    /* Entry Internal: FsftFCPR_P_SHORTTIME_DISCHRG_PWRLIM/FsftFCPR_P_SHORTTIME_DISCHRG_PWRLIMChrt */
    /* Transition: '<S204>:2' */
    (void)Rte_Write_VeFCPR_b_FCPS_ShoTiDchaPwrLim_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftFCPR_P_SHORTTIME_DISCHRG_PWRLIM' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) FsftFCPR_P_STARTUP_PWR_DEMAND(void)
{

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftFCPR_P_STARTUP_PWR_DEMAND' */
    /* Outport: '<Root>/VeFCPR_b_FCPS_StarUp_PwrDmnd_FA' incorporates:
     *  Chart: '<S13>/FsftFCPR_P_STARTUP_PWR_DEMANDChrt'
     *  SignalConversion generated from: '<S13>/VeFCPR_b_STARTUP_PWR_DEMANDFA'
     */
    /* Gateway: FsftFCPR_P_STARTUP_PWR_DEMAND/FsftFCPR_P_STARTUP_PWR_DEMANDChrt */
    /* During: FsftFCPR_P_STARTUP_PWR_DEMAND/FsftFCPR_P_STARTUP_PWR_DEMANDChrt */
    /* Entry Internal: FsftFCPR_P_STARTUP_PWR_DEMAND/FsftFCPR_P_STARTUP_PWR_DEMANDChrt */
    /* Transition: '<S205>:2' */
    (void)Rte_Write_VeFCPR_b_FCPS_StarUp_PwrDmnd_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftFCPR_P_STARTUP_PWR_DEMAND' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) FsftFCPR_T_FCPS_HTCoolDeltaSp(void)
{

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftFCPR_T_FCPS_HTCoolDeltaSp' */
    /* Outport: '<Root>/VeFCPR_b_FCPS_HTCoolDeltaSp_FA' incorporates:
     *  Chart: '<S14>/FsftFCPR_T_FCPS_HTCoolDeltaSpChrt'
     *  SignalConversion generated from: '<S14>/VeFCPR_b_FCPS_HTCoolDeltaSpFA'
     */
    /* Gateway: FsftFCPR_T_FCPS_HTCoolDeltaSp/FsftFCPR_T_FCPS_HTCoolDeltaSpChrt */
    /* During: FsftFCPR_T_FCPS_HTCoolDeltaSp/FsftFCPR_T_FCPS_HTCoolDeltaSpChrt */
    /* Entry Internal: FsftFCPR_T_FCPS_HTCoolDeltaSp/FsftFCPR_T_FCPS_HTCoolDeltaSpChrt */
    /* Transition: '<S206>:2' */
    (void)Rte_Write_VeFCPR_b_FCPS_HTCoolDeltaSp_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftFCPR_T_FCPS_HTCoolDeltaSp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) FsftFCPR_T_FCPS_HTCoolInTemp(void)
{

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftFCPR_T_FCPS_HTCoolInTemp' */
    /* Outport: '<Root>/VeFCPR_b_FCPS_HTCoolInTemp_FA' incorporates:
     *  Chart: '<S15>/FsftFCPR_T_FCPS_HTCoolInTempChrt'
     *  SignalConversion generated from: '<S15>/VeFCPR_b_FCPS_HTCoolInTempFA'
     */
    /* Gateway: FsftFCPR_T_FCPS_HTCoolInTemp/FsftFCPR_T_FCPS_HTCoolInTempChrt */
    /* During: FsftFCPR_T_FCPS_HTCoolInTemp/FsftFCPR_T_FCPS_HTCoolInTempChrt */
    /* Entry Internal: FsftFCPR_T_FCPS_HTCoolInTemp/FsftFCPR_T_FCPS_HTCoolInTempChrt */
    /* Transition: '<S207>:2' */
    (void)Rte_Write_VeFCPR_b_FCPS_HTCoolInTemp_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftFCPR_T_FCPS_HTCoolInTemp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) FsftFCPR_T_FCPS_HTCoolOutTemp(void)
{

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftFCPR_T_FCPS_HTCoolOutTemp' */
    /* Outport: '<Root>/VeFCPR_b_FCPS_HTCoolOutTemp_FA' incorporates:
     *  Chart: '<S16>/FsftFCPR_T_FCPS_HTCoolOutTempChrt'
     *  SignalConversion generated from: '<S16>/VeFCPR_b_FCPS_HTCoolOutTempFA'
     */
    /* Gateway: FsftFCPR_T_FCPS_HTCoolOutTemp/FsftFCPR_T_FCPS_HTCoolOutTempChrt */
    /* During: FsftFCPR_T_FCPS_HTCoolOutTemp/FsftFCPR_T_FCPS_HTCoolOutTempChrt */
    /* Entry Internal: FsftFCPR_T_FCPS_HTCoolOutTemp/FsftFCPR_T_FCPS_HTCoolOutTempChrt */
    /* Transition: '<S208>:2' */
    (void)Rte_Write_VeFCPR_b_FCPS_HTCoolOutTemp_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftFCPR_T_FCPS_HTCoolOutTemp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) FsftFCPR_T_FCPS_HTCoolOutTempSp(void)
{

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftFCPR_T_FCPS_HTCoolOutTempSp' */
    /* Outport: '<Root>/VeFCPR_b_FCPS_HTCoolOutTempSp_FA' incorporates:
     *  Chart: '<S17>/FsftFCPR_T_FCPS_HTCoolOutTempSpChrt'
     *  SignalConversion generated from: '<S17>/VeFCPR_b_FCPS_HTCoolOutTempSpFA'
     */
    /* Gateway: FsftFCPR_T_FCPS_HTCoolOutTempSp/FsftFCPR_T_FCPS_HTCoolOutTempSpChrt */
    /* During: FsftFCPR_T_FCPS_HTCoolOutTempSp/FsftFCPR_T_FCPS_HTCoolOutTempSpChrt */
    /* Entry Internal: FsftFCPR_T_FCPS_HTCoolOutTempSp/FsftFCPR_T_FCPS_HTCoolOutTempSpChrt */
    /* Transition: '<S209>:2' */
    (void)Rte_Write_VeFCPR_b_FCPS_HTCoolOutTempSp_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftFCPR_T_FCPS_HTCoolOutTempSp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) FsftFCPR_T_FCPS_LTCoolMaxTemp(void)
{

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftFCPR_T_FCPS_LTCoolMaxTemp' */
    /* Outport: '<Root>/VeFCPR_b_FCPS_LTCoolMaxTemp_FA' incorporates:
     *  Chart: '<S18>/FsftFCPR_T_FCPS_LTCoolMaxTempChrt'
     *  SignalConversion generated from: '<S18>/VeFCPR_b_FCPS_LTCoolMaxTempFA'
     */
    /* Gateway: FsftFCPR_T_FCPS_LTCoolMaxTemp/FsftFCPR_T_FCPS_LTCoolMaxTempChrt */
    /* During: FsftFCPR_T_FCPS_LTCoolMaxTemp/FsftFCPR_T_FCPS_LTCoolMaxTempChrt */
    /* Entry Internal: FsftFCPR_T_FCPS_LTCoolMaxTemp/FsftFCPR_T_FCPS_LTCoolMaxTempChrt */
    /* Transition: '<S210>:2' */
    (void)Rte_Write_VeFCPR_b_FCPS_LTCoolMaxTemp_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftFCPR_T_FCPS_LTCoolMaxTemp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) FsftFCPR_U_LOWER_VOLTAGE_LIM(void)
{

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftFCPR_U_LOWER_VOLTAGE_LIM' */
    /* Outport: '<Root>/VeFCPR_b_FCPS_LowerVoltLIM_FA' incorporates:
     *  Chart: '<S19>/FsftFCPR_U_LOWER_VOLTAGE_LIMChrt'
     *  SignalConversion generated from: '<S19>/VeFCPR_b_LOWER_VOLTAGE_LIMFA'
     */
    /* Gateway: FsftFCPR_U_LOWER_VOLTAGE_LIM/FsftFCPR_U_LOWER_VOLTAGE_LIMChrt */
    /* During: FsftFCPR_U_LOWER_VOLTAGE_LIM/FsftFCPR_U_LOWER_VOLTAGE_LIMChrt */
    /* Entry Internal: FsftFCPR_U_LOWER_VOLTAGE_LIM/FsftFCPR_U_LOWER_VOLTAGE_LIMChrt */
    /* Transition: '<S211>:2' */
    (void)Rte_Write_VeFCPR_b_FCPS_LowerVoltLIM_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftFCPR_U_LOWER_VOLTAGE_LIM' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) FsftFCPR_U_UPPER_VOLTAGE_LIM(void)
{

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftFCPR_U_UPPER_VOLTAGE_LIM' */
    /* Outport: '<Root>/VeFCPR_b_FCPS_UpperVoltLIM_FA' incorporates:
     *  Chart: '<S20>/FsftFCPR_U_UPPER_VOLTAGE_LIMChrt'
     *  SignalConversion generated from: '<S20>/VeFCPR_b_UPPER_VOLTAGE_LIMFA'
     */
    /* Gateway: FsftFCPR_U_UPPER_VOLTAGE_LIM/FsftFCPR_U_UPPER_VOLTAGE_LIMChrt */
    /* During: FsftFCPR_U_UPPER_VOLTAGE_LIM/FsftFCPR_U_UPPER_VOLTAGE_LIMChrt */
    /* Entry Internal: FsftFCPR_U_UPPER_VOLTAGE_LIM/FsftFCPR_U_UPPER_VOLTAGE_LIMChrt */
    /* Transition: '<S212>:2' */
    (void)Rte_Write_VeFCPR_b_FCPS_UpperVoltLIM_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftFCPR_U_UPPER_VOLTAGE_LIM' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) FsftFCPR_U_VOLTAGE(void)
{

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftFCPR_U_VOLTAGE' */
    /* Outport: '<Root>/VeFCPR_b_FCPS_Volt_FA' incorporates:
     *  Chart: '<S21>/FsftFCPR_U_VOLTAGEChrt'
     *  SignalConversion generated from: '<S21>/VeFCPR_b_VOLTAGEFA'
     */
    /* Gateway: FsftFCPR_U_VOLTAGE/FsftFCPR_U_VOLTAGEChrt */
    /* During: FsftFCPR_U_VOLTAGE/FsftFCPR_U_VOLTAGEChrt */
    /* Entry Internal: FsftFCPR_U_VOLTAGE/FsftFCPR_U_VOLTAGEChrt */
    /* Transition: '<S213>:2' */
    (void)Rte_Write_VeFCPR_b_FCPS_Volt_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftFCPR_U_VOLTAGE' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) FsftFCPR_e_ActualMode(void)
{

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftFCPR_e_ActualMode' */
    /* Outport: '<Root>/VeFCPR_b_ActualMode_FA' incorporates:
     *  Chart: '<S22>/FsftFCPR_e_ActualModeChrt'
     *  SignalConversion generated from: '<S22>/VeFCPR_b_ActualModeFA'
     */
    /* Gateway: FsftFCPR_e_ActualMode/FsftFCPR_e_ActualModeChrt */
    /* During: FsftFCPR_e_ActualMode/FsftFCPR_e_ActualModeChrt */
    /* Entry Internal: FsftFCPR_e_ActualMode/FsftFCPR_e_ActualModeChrt */
    /* Transition: '<S214>:2' */
    (void)Rte_Write_VeFCPR_b_ActualMode_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftFCPR_e_ActualMode' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) FsftFCPR_e_FCPS_HTCoolReq(void)
{

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftFCPR_e_FCPS_HTCoolReq' */
    /* Outport: '<Root>/VeFCPR_b_FCPS_HTCoolReq_FA' incorporates:
     *  Chart: '<S23>/FsftFCPR_e_FCPS_HTCoolReqChrt'
     *  SignalConversion generated from: '<S23>/VeFCPR_b_FCPS_HTCoolReqFA'
     */
    /* Gateway: FsftFCPR_e_FCPS_HTCoolReq/FsftFCPR_e_FCPS_HTCoolReqChrt */
    /* During: FsftFCPR_e_FCPS_HTCoolReq/FsftFCPR_e_FCPS_HTCoolReqChrt */
    /* Entry Internal: FsftFCPR_e_FCPS_HTCoolReq/FsftFCPR_e_FCPS_HTCoolReqChrt */
    /* Transition: '<S215>:2' */
    (void)Rte_Write_VeFCPR_b_FCPS_HTCoolReq_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftFCPR_e_FCPS_HTCoolReq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) FsftFCPR_e_FC_DCDC_IntrlkStat(void)
{

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftFCPR_e_FC_DCDC_IntrlkStat' */
    /* Outport: '<Root>/VeFCPR_b_FC_DCDC_IntrlkStat_FA' incorporates:
     *  Chart: '<S24>/FsftFCPR_e_FC_DCDC_IntrlkStatChrt'
     *  SignalConversion generated from: '<S24>/VeFCPR_b_FC_DCDC_IntrlkStatFA'
     */
    /* Gateway: FsftFCPR_e_FC_DCDC_IntrlkStat/FsftFCPR_e_FC_DCDC_IntrlkStatChrt */
    /* During: FsftFCPR_e_FC_DCDC_IntrlkStat/FsftFCPR_e_FC_DCDC_IntrlkStatChrt */
    /* Entry Internal: FsftFCPR_e_FC_DCDC_IntrlkStat/FsftFCPR_e_FC_DCDC_IntrlkStatChrt */
    /* Transition: '<S216>:2' */
    (void)Rte_Write_VeFCPR_b_FC_DCDC_IntrlkStat_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftFCPR_e_FC_DCDC_IntrlkStat' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) FsftFCPR_e_HEAC_IntrlkStat(void)
{

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftFCPR_e_HEAC_IntrlkStat' */
    /* Outport: '<Root>/VeFCPR_b_HEAC_IntrlkStat_FA' incorporates:
     *  Chart: '<S25>/FsftFCPR_e_HEAC_IntrlkStatChrt'
     *  SignalConversion generated from: '<S25>/VeFCPR_b_HEAC_IntrlkStatFA'
     */
    /* Gateway: FsftFCPR_e_HEAC_IntrlkStat/FsftFCPR_e_HEAC_IntrlkStatChrt */
    /* During: FsftFCPR_e_HEAC_IntrlkStat/FsftFCPR_e_HEAC_IntrlkStatChrt */
    /* Entry Internal: FsftFCPR_e_HEAC_IntrlkStat/FsftFCPR_e_HEAC_IntrlkStatChrt */
    /* Transition: '<S217>:2' */
    (void)Rte_Write_VeFCPR_b_HEAC_IntrlkStat_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftFCPR_e_HEAC_IntrlkStat' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) PokeFCPR_Cnt_FCPS_WU_Tmr(VAR(float32, AUTOMATIC)
    LeFCPR_Cnt_FCPS_WU_Tmr)
{

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_Cnt_FCPS_WU_Tmr);

#endif

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeFCPR_Cnt_FCPS_WU_Tmr' */
    /* Outport: '<Root>/VeFCPR_Cnt_FCPS_WU_Tmr' incorporates:
     *  SignalConversion generated from: '<S26>/VeFCPR_Cnt_FCPS_WU_Tmr'
     *  SignalConversion generated from: '<S26>/LeFCPR_Cnt_FCPS_WU_Tmr'
     */
    /* Gateway: PokeFCPR_Cnt_FCPS_WU_Tmr/PokeFCPR_Cnt_FCPS_WU_TmrChrt */
    /* During: PokeFCPR_Cnt_FCPS_WU_Tmr/PokeFCPR_Cnt_FCPS_WU_TmrChrt */
    /* Entry Internal: PokeFCPR_Cnt_FCPS_WU_Tmr/PokeFCPR_Cnt_FCPS_WU_TmrChrt */
    /* Transition: '<S218>:2' */
    (void)Rte_Write_VeFCPR_Cnt_FCPS_WU_Tmr_Value(LeFCPR_Cnt_FCPS_WU_Tmr);

    /* End of Outputs for SubSystem: '<Root>/PokeFCPR_Cnt_FCPS_WU_Tmr' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) PokeFCPR_E_FCPS_H2_EquivEgy(VAR(float32, AUTOMATIC)
    LeFCPR_E_FCPS_H2_EquivEgy)
{

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_E_FCPS_H2_EquivEgy);

#endif

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeFCPR_E_FCPS_H2_EquivEgy' */
    /* Outport: '<Root>/VeFCPR_E_FCPS_H2_EquivEgy' incorporates:
     *  SignalConversion generated from: '<S27>/VeFCPR_E_FCPS_H2_EquivEgy'
     *  SignalConversion generated from: '<S27>/LeFCPR_E_FCPS_H2_EquivEgy'
     */
    /* Gateway: PokeFCPR_E_FCPS_H2_EquivEgy/PokeFCPR_E_FCPS_H2_EquivEgyChrt */
    /* During: PokeFCPR_E_FCPS_H2_EquivEgy/PokeFCPR_E_FCPS_H2_EquivEgyChrt */
    /* Entry Internal: PokeFCPR_E_FCPS_H2_EquivEgy/PokeFCPR_E_FCPS_H2_EquivEgyChrt */
    /* Transition: '<S219>:2' */
    (void)Rte_Write_VeFCPR_E_FCPS_H2_EquivEgy_Value(LeFCPR_E_FCPS_H2_EquivEgy);

    /* End of Outputs for SubSystem: '<Root>/PokeFCPR_E_FCPS_H2_EquivEgy' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) PokeFCPR_I_CURRENT(VAR(float32, AUTOMATIC)
    LeFCPR_I_CURRENT, VAR(boolean, AUTOMATIC) LeFCPR_b_CURRENTFA)
{

#if Rte_SysCon_Variant_FCPR_1

    boolean rtb_LeFCPR_b_CURRENTFA_out_b;

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_I_CURRENT);

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_b_CURRENTFA);

#endif

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeFCPR_I_CURRENT' */
    /* Chart: '<S28>/PokeFCPR_I_CURRENTChrt' incorporates:
     *  SignalConversion generated from: '<S28>/LeFCPR_I_CURRENT'
     *  SignalConversion generated from: '<S28>/LeFCPR_b_CURRENTFA'
     */
    /* Gateway: PokeFCPR_I_CURRENT/PokeFCPR_I_CURRENTChrt */
    /* During: PokeFCPR_I_CURRENT/PokeFCPR_I_CURRENTChrt */
    /* Entry Internal: PokeFCPR_I_CURRENT/PokeFCPR_I_CURRENTChrt */
    /* Transition: '<S220>:2' */
    if (!LeFCPR_b_CURRENTFA)
    {
        /* Transition: '<S220>:3' */
        /* Transition: '<S220>:15' */
        FCPR_ac_B.LeFCPR_I_CURRENT_out = LeFCPR_I_CURRENT;
        rtb_LeFCPR_b_CURRENTFA_out_b = false;

        /* Transition: '<S220>:18' */
    }
    else
    {
        /* Transition: '<S220>:4' */
        rtb_LeFCPR_b_CURRENTFA_out_b = true;
    }

    /* End of Chart: '<S28>/PokeFCPR_I_CURRENTChrt' */

    /* Outport: '<Root>/VeFCPR_I_FCPS_Curr' incorporates:
     *  SignalConversion generated from: '<S28>/VeFCPR_I_CURRENT'
     */
    (void)Rte_Write_VeFCPR_I_FCPS_Curr_Value(FCPR_ac_B.LeFCPR_I_CURRENT_out);

    /* Outport: '<Root>/VeFCPR_b_FCPS_Curr_FA' incorporates:
     *  SignalConversion generated from: '<S28>/VeFCPR_b_CURRENTFA'
     */
    (void)Rte_Write_VeFCPR_b_FCPS_Curr_FA_Value(rtb_LeFCPR_b_CURRENTFA_out_b);

    /* End of Outputs for SubSystem: '<Root>/PokeFCPR_I_CURRENT' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) PokeFCPR_P_FCPS_ActFCPSPwrCnspt(VAR(float32, AUTOMATIC)
    LeFCPR_P_FCPS_ActFCPSPwrCnspt, VAR(boolean, AUTOMATIC)
    LeFCPR_b_FCPS_ActFCPSPwrCnsptFA)
{

#if Rte_SysCon_Variant_FCPR_1

    boolean rtb_LeFCPR_b_FCPS_ActFCPSPwrCnsptFA_ou_e;

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_P_FCPS_ActFCPSPwrCnspt);

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_b_FCPS_ActFCPSPwrCnsptFA);

#endif

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeFCPR_P_FCPS_ActFCPSPwrCnspt' */
    /* Chart: '<S29>/PokeFCPR_P_FCPS_ActFCPSPwrCnsptChrt' incorporates:
     *  SignalConversion generated from: '<S29>/LeFCPR_P_FCPS_ActFCPSPwrCnspt'
     *  SignalConversion generated from: '<S29>/LeFCPR_b_FCPS_ActFCPSPwrCnsptFA'
     */
    /* Gateway: PokeFCPR_P_FCPS_ActFCPSPwrCnspt/PokeFCPR_P_FCPS_ActFCPSPwrCnsptChrt */
    /* During: PokeFCPR_P_FCPS_ActFCPSPwrCnspt/PokeFCPR_P_FCPS_ActFCPSPwrCnsptChrt */
    /* Entry Internal: PokeFCPR_P_FCPS_ActFCPSPwrCnspt/PokeFCPR_P_FCPS_ActFCPSPwrCnsptChrt */
    /* Transition: '<S221>:2' */
    if (!LeFCPR_b_FCPS_ActFCPSPwrCnsptFA)
    {
        /* Transition: '<S221>:3' */
        /* Transition: '<S221>:15' */
        FCPR_ac_B.LeFCPR_P_FCPS_ActFCPSPwrCnspt_out =
            LeFCPR_P_FCPS_ActFCPSPwrCnspt;
        rtb_LeFCPR_b_FCPS_ActFCPSPwrCnsptFA_ou_e = false;

        /* Transition: '<S221>:18' */
    }
    else
    {
        /* Transition: '<S221>:4' */
        rtb_LeFCPR_b_FCPS_ActFCPSPwrCnsptFA_ou_e = true;
    }

    /* End of Chart: '<S29>/PokeFCPR_P_FCPS_ActFCPSPwrCnsptChrt' */

    /* Outport: '<Root>/VeFCPR_P_FCPS_ActFCPSPwrCnspt' incorporates:
     *  SignalConversion generated from: '<S29>/VeFCPR_P_FCPS_ActFCPSPwrCnspt'
     */
    (void)Rte_Write_VeFCPR_P_FCPS_ActFCPSPwrCnspt_Value
        (FCPR_ac_B.LeFCPR_P_FCPS_ActFCPSPwrCnspt_out);

    /* Outport: '<Root>/VeFCPR_b_FCPS_ActFCPSPwrCnspt_FA' incorporates:
     *  SignalConversion generated from: '<S29>/VeFCPR_b_FCPS_ActFCPSPwrCnsptFA'
     */
    (void)Rte_Write_VeFCPR_b_FCPS_ActFCPSPwrCnspt_FA_Value
        (rtb_LeFCPR_b_FCPS_ActFCPSPwrCnsptFA_ou_e);

    /* End of Outputs for SubSystem: '<Root>/PokeFCPR_P_FCPS_ActFCPSPwrCnspt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) PokeFCPR_P_FCPS_MaxAvailFCPSPwr(VAR(float32, AUTOMATIC)
    LeFCPR_P_FCPS_MaxAvailFCPSPwr, VAR(boolean, AUTOMATIC)
    LeFCPR_b_FCPS_MaxAvailFCPSPwrFA)
{

#if Rte_SysCon_Variant_FCPR_1

    boolean rtb_LeFCPR_b_FCPS_MaxAvailFCPSPwrFA_ou_d;

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_P_FCPS_MaxAvailFCPSPwr);

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_b_FCPS_MaxAvailFCPSPwrFA);

#endif

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeFCPR_P_FCPS_MaxAvailFCPSPwr' */
    /* Chart: '<S30>/PokeFCPR_P_FCPS_MaxAvailFCPSPwrChrt' incorporates:
     *  SignalConversion generated from: '<S30>/LeFCPR_P_FCPS_MaxAvailFCPSPwr'
     *  SignalConversion generated from: '<S30>/LeFCPR_b_FCPS_MaxAvailFCPSPwrFA'
     */
    /* Gateway: PokeFCPR_P_FCPS_MaxAvailFCPSPwr/PokeFCPR_P_FCPS_MaxAvailFCPSPwrChrt */
    /* During: PokeFCPR_P_FCPS_MaxAvailFCPSPwr/PokeFCPR_P_FCPS_MaxAvailFCPSPwrChrt */
    /* Entry Internal: PokeFCPR_P_FCPS_MaxAvailFCPSPwr/PokeFCPR_P_FCPS_MaxAvailFCPSPwrChrt */
    /* Transition: '<S222>:2' */
    if (!LeFCPR_b_FCPS_MaxAvailFCPSPwrFA)
    {
        /* Transition: '<S222>:3' */
        /* Transition: '<S222>:15' */
        FCPR_ac_B.LeFCPR_P_FCPS_MaxAvailFCPSPwr_out =
            LeFCPR_P_FCPS_MaxAvailFCPSPwr;
        rtb_LeFCPR_b_FCPS_MaxAvailFCPSPwrFA_ou_d = false;

        /* Transition: '<S222>:18' */
    }
    else
    {
        /* Transition: '<S222>:4' */
        rtb_LeFCPR_b_FCPS_MaxAvailFCPSPwrFA_ou_d = true;
    }

    /* End of Chart: '<S30>/PokeFCPR_P_FCPS_MaxAvailFCPSPwrChrt' */

    /* Outport: '<Root>/VeFCPR_P_FCPS_MaxAvailFCPSPwr' incorporates:
     *  SignalConversion generated from: '<S30>/VeFCPR_P_FCPS_MaxAvailFCPSPwr'
     */
    (void)Rte_Write_VeFCPR_P_FCPS_MaxAvailFCPSPwr_Value
        (FCPR_ac_B.LeFCPR_P_FCPS_MaxAvailFCPSPwr_out);

    /* Outport: '<Root>/VeFCPR_b_FCPS_MaxAvailFCPSPwr_FA' incorporates:
     *  SignalConversion generated from: '<S30>/VeFCPR_b_FCPS_MaxAvailFCPSPwrFA'
     */
    (void)Rte_Write_VeFCPR_b_FCPS_MaxAvailFCPSPwr_FA_Value
        (rtb_LeFCPR_b_FCPS_MaxAvailFCPSPwrFA_ou_d);

    /* End of Outputs for SubSystem: '<Root>/PokeFCPR_P_FCPS_MaxAvailFCPSPwr' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) PokeFCPR_P_FCPS_ReqdMinFCPSPwr(VAR(float32, AUTOMATIC)
    LeFCPR_P_FCPS_ReqdMinFCPSPwr, VAR(boolean, AUTOMATIC)
    LeFCPR_b_FCPS_ReqdMinFCPSPwrFA)
{

#if Rte_SysCon_Variant_FCPR_1

    boolean rtb_LeFCPR_b_FCPS_ReqdMinFCPSPwrFA_out;

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_P_FCPS_ReqdMinFCPSPwr);

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_b_FCPS_ReqdMinFCPSPwrFA);

#endif

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeFCPR_P_FCPS_ReqdMinFCPSPwr' */
    /* Chart: '<S31>/PokeFCPR_P_FCPS_ReqdMinFCPSPwrChrt' incorporates:
     *  SignalConversion generated from: '<S31>/LeFCPR_P_FCPS_ReqdMinFCPSPwr'
     *  SignalConversion generated from: '<S31>/LeFCPR_b_FCPS_ReqdMinFCPSPwrFA'
     */
    /* Gateway: PokeFCPR_P_FCPS_ReqdMinFCPSPwr/PokeFCPR_P_FCPS_ReqdMinFCPSPwrChrt */
    /* During: PokeFCPR_P_FCPS_ReqdMinFCPSPwr/PokeFCPR_P_FCPS_ReqdMinFCPSPwrChrt */
    /* Entry Internal: PokeFCPR_P_FCPS_ReqdMinFCPSPwr/PokeFCPR_P_FCPS_ReqdMinFCPSPwrChrt */
    /* Transition: '<S223>:2' */
    if (!LeFCPR_b_FCPS_ReqdMinFCPSPwrFA)
    {
        /* Transition: '<S223>:3' */
        /* Transition: '<S223>:15' */
        FCPR_ac_B.LeFCPR_P_FCPS_ReqdMinFCPSPwr_out =
            LeFCPR_P_FCPS_ReqdMinFCPSPwr;
        rtb_LeFCPR_b_FCPS_ReqdMinFCPSPwrFA_out = false;

        /* Transition: '<S223>:18' */
    }
    else
    {
        /* Transition: '<S223>:4' */
        rtb_LeFCPR_b_FCPS_ReqdMinFCPSPwrFA_out = true;
    }

    /* End of Chart: '<S31>/PokeFCPR_P_FCPS_ReqdMinFCPSPwrChrt' */

    /* Outport: '<Root>/VeFCPR_P_FCPS_ReqdMinFCPSPwr' incorporates:
     *  SignalConversion generated from: '<S31>/VeFCPR_P_FCPS_ReqdMinFCPSPwr'
     */
    (void)Rte_Write_VeFCPR_P_FCPS_ReqdMinFCPSPwr_Value
        (FCPR_ac_B.LeFCPR_P_FCPS_ReqdMinFCPSPwr_out);

    /* Outport: '<Root>/VeFCPR_b_FCPS_ReqdMinFCPSPwr_FA' incorporates:
     *  SignalConversion generated from: '<S31>/VeFCPR_b_FCPS_ReqdMinFCPSPwrFA'
     */
    (void)Rte_Write_VeFCPR_b_FCPS_ReqdMinFCPSPwr_FA_Value
        (rtb_LeFCPR_b_FCPS_ReqdMinFCPSPwrFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeFCPR_P_FCPS_ReqdMinFCPSPwr' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) PokeFCPR_P_FCPS_THERM_PWR_CNS_REQ(VAR(float32, AUTOMATIC)
    LeFCPR_P_FCPS_THERM_PWR_CNS_REQ, VAR(boolean, AUTOMATIC)
    LeFCPR_b_FCPS_THERM_PWR_CNS_REQFA)
{

#if Rte_SysCon_Variant_FCPR_1

    boolean rtb_LeFCPR_b_FCPS_THERM_PWR_CNS_REQFA_ou;

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_P_FCPS_THERM_PWR_CNS_REQ);

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_b_FCPS_THERM_PWR_CNS_REQFA);

#endif

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeFCPR_P_FCPS_THERM_PWR_CNS_REQ' */
    /* Chart: '<S32>/PokeFCPR_P_FCPS_THERM_PWR_CNS_REQChrt' incorporates:
     *  SignalConversion generated from: '<S32>/LeFCPR_P_FCPS_THERM_PWR_CNS_REQ'
     *  SignalConversion generated from: '<S32>/LeFCPR_b_FCPS_THERM_PWR_CNS_REQFA'
     */
    /* Gateway: PokeFCPR_P_FCPS_THERM_PWR_CNS_REQ/PokeFCPR_P_FCPS_THERM_PWR_CNS_REQChrt */
    /* During: PokeFCPR_P_FCPS_THERM_PWR_CNS_REQ/PokeFCPR_P_FCPS_THERM_PWR_CNS_REQChrt */
    /* Entry Internal: PokeFCPR_P_FCPS_THERM_PWR_CNS_REQ/PokeFCPR_P_FCPS_THERM_PWR_CNS_REQChrt */
    /* Transition: '<S224>:2' */
    if (!LeFCPR_b_FCPS_THERM_PWR_CNS_REQFA)
    {
        /* Transition: '<S224>:3' */
        /* Transition: '<S224>:15' */
        FCPR_ac_B.LeFCPR_P_FCPS_THERM_PWR_CNS_REQ_out =
            LeFCPR_P_FCPS_THERM_PWR_CNS_REQ;
        rtb_LeFCPR_b_FCPS_THERM_PWR_CNS_REQFA_ou = false;

        /* Transition: '<S224>:18' */
    }
    else
    {
        /* Transition: '<S224>:4' */
        rtb_LeFCPR_b_FCPS_THERM_PWR_CNS_REQFA_ou = true;
    }

    /* End of Chart: '<S32>/PokeFCPR_P_FCPS_THERM_PWR_CNS_REQChrt' */

    /* Outport: '<Root>/VeFCPR_P_FCPS_ThermPwrCnsReq' incorporates:
     *  SignalConversion generated from: '<S32>/VeFCPR_P_FCPS_THERM_PWR_CNS_REQ'
     */
    (void)Rte_Write_VeFCPR_P_FCPS_ThermPwrCnsReq_Value
        (FCPR_ac_B.LeFCPR_P_FCPS_THERM_PWR_CNS_REQ_out);

    /* Outport: '<Root>/VeFCPR_P_FCPS_ThermPwrCnsReq_FA' incorporates:
     *  SignalConversion generated from: '<S32>/VeFCPR_b_FCPS_THERM_PWR_CNS_REQFA'
     */
    (void)Rte_Write_VeFCPR_P_FCPS_ThermPwrCnsReq_FA_Value
        (rtb_LeFCPR_b_FCPS_THERM_PWR_CNS_REQFA_ou);

    /* End of Outputs for SubSystem: '<Root>/PokeFCPR_P_FCPS_THERM_PWR_CNS_REQ' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) PokeFCPR_P_Gen_Pwr(VAR(float32, AUTOMATIC)
    LeFCPR_P_Gen_Pwr, VAR(boolean, AUTOMATIC) LeFCPR_b_Gen_PwrFA)
{

#if Rte_SysCon_Variant_FCPR_1

    boolean rtb_LeFCPR_b_Gen_PwrFA_out;

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_P_Gen_Pwr);

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_b_Gen_PwrFA);

#endif

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeFCPR_P_Gen_Pwr' */
    /* Chart: '<S33>/PokeFCPR_P_Gen_PwrChrt' incorporates:
     *  SignalConversion generated from: '<S33>/LeFCPR_P_Gen_Pwr'
     *  SignalConversion generated from: '<S33>/LeFCPR_b_Gen_PwrFA'
     */
    /* Gateway: PokeFCPR_P_Gen_Pwr/PokeFCPR_P_Gen_PwrChrt */
    /* During: PokeFCPR_P_Gen_Pwr/PokeFCPR_P_Gen_PwrChrt */
    /* Entry Internal: PokeFCPR_P_Gen_Pwr/PokeFCPR_P_Gen_PwrChrt */
    /* Transition: '<S225>:2' */
    if (!LeFCPR_b_Gen_PwrFA)
    {
        /* Transition: '<S225>:3' */
        /* Transition: '<S225>:15' */
        FCPR_ac_B.LeFCPR_P_Gen_Pwr_out = LeFCPR_P_Gen_Pwr;
        rtb_LeFCPR_b_Gen_PwrFA_out = false;

        /* Transition: '<S225>:18' */
    }
    else
    {
        /* Transition: '<S225>:4' */
        rtb_LeFCPR_b_Gen_PwrFA_out = true;
    }

    /* End of Chart: '<S33>/PokeFCPR_P_Gen_PwrChrt' */

    /* Outport: '<Root>/VeFCPR_P_FCPS_ActPwr' incorporates:
     *  SignalConversion generated from: '<S33>/VeFCPR_P_Gen_Pwr'
     */
    (void)Rte_Write_VeFCPR_P_FCPS_ActPwr_Value(FCPR_ac_B.LeFCPR_P_Gen_Pwr_out);

    /* Outport: '<Root>/VeFCPR_b_FCPS_ActPwr_FA' incorporates:
     *  SignalConversion generated from: '<S33>/VeFCPR_b_Gen_PwrFA'
     */
    (void)Rte_Write_VeFCPR_b_FCPS_ActPwr_FA_Value(rtb_LeFCPR_b_Gen_PwrFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeFCPR_P_Gen_Pwr' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) PokeFCPR_P_LONGTIME_CHRG_PWRLIM(VAR(float32, AUTOMATIC)
    LeFCPR_P_LONGTIME_CHRG_PWRLIM, VAR(boolean, AUTOMATIC)
    LeFCPR_b_LONGTIME_CHRG_PWRLIMFA)
{

#if Rte_SysCon_Variant_FCPR_1

    boolean rtb_LeFCPR_b_LONGTIME_CHRG_PWRLIMFA_out;

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_P_LONGTIME_CHRG_PWRLIM);

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_b_LONGTIME_CHRG_PWRLIMFA);

#endif

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeFCPR_P_LONGTIME_CHRG_PWRLIM' */
    /* Chart: '<S34>/PokeFCPR_P_LONGTIME_CHRG_PWRLIMChrt' incorporates:
     *  SignalConversion generated from: '<S34>/LeFCPR_P_LONGTIME_CHRG_PWRLIM'
     *  SignalConversion generated from: '<S34>/LeFCPR_b_LONGTIME_CHRG_PWRLIMFA'
     */
    /* Gateway: PokeFCPR_P_LONGTIME_CHRG_PWRLIM/PokeFCPR_P_LONGTIME_CHRG_PWRLIMChrt */
    /* During: PokeFCPR_P_LONGTIME_CHRG_PWRLIM/PokeFCPR_P_LONGTIME_CHRG_PWRLIMChrt */
    /* Entry Internal: PokeFCPR_P_LONGTIME_CHRG_PWRLIM/PokeFCPR_P_LONGTIME_CHRG_PWRLIMChrt */
    /* Transition: '<S226>:2' */
    if (!LeFCPR_b_LONGTIME_CHRG_PWRLIMFA)
    {
        /* Transition: '<S226>:3' */
        /* Transition: '<S226>:15' */
        FCPR_ac_B.LeFCPR_P_LONGTIME_CHRG_PWRLIM_out =
            LeFCPR_P_LONGTIME_CHRG_PWRLIM;
        rtb_LeFCPR_b_LONGTIME_CHRG_PWRLIMFA_out = false;

        /* Transition: '<S226>:18' */
    }
    else
    {
        /* Transition: '<S226>:4' */
        rtb_LeFCPR_b_LONGTIME_CHRG_PWRLIMFA_out = true;
    }

    /* End of Chart: '<S34>/PokeFCPR_P_LONGTIME_CHRG_PWRLIMChrt' */

    /* Outport: '<Root>/VeFCPR_P_FCPS_LongTiChrgPwrLim' incorporates:
     *  SignalConversion generated from: '<S34>/VeFCPR_P_LONGTIME_CHRG_PWRLIM'
     */
    (void)Rte_Write_VeFCPR_P_FCPS_LongTiChrgPwrLim_Value
        (FCPR_ac_B.LeFCPR_P_LONGTIME_CHRG_PWRLIM_out);

    /* Outport: '<Root>/VeFCPR_b_FCPS_LongTiChrgPwrLim_FA' incorporates:
     *  SignalConversion generated from: '<S34>/VeFCPR_b_LONGTIME_CHRG_PWRLIMFA'
     */
    (void)Rte_Write_VeFCPR_b_FCPS_LongTiChrgPwrLim_FA_Value
        (rtb_LeFCPR_b_LONGTIME_CHRG_PWRLIMFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeFCPR_P_LONGTIME_CHRG_PWRLIM' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) PokeFCPR_P_LONGTIME_DISCHRG_PWRLIM(VAR(float32, AUTOMATIC)
    LeFCPR_P_LONGTIME_DISCHRG_PWRLIM, VAR(boolean, AUTOMATIC)
    LeFCPR_b_LONGTIME_DISCHRG_PWRLIMFA)
{

#if Rte_SysCon_Variant_FCPR_1

    boolean rtb_LeFCPR_b_LONGTIME_DISCHRG_PWRLIMFA_n;

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_P_LONGTIME_DISCHRG_PWRLIM);

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_b_LONGTIME_DISCHRG_PWRLIMFA);

#endif

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeFCPR_P_LONGTIME_DISCHRG_PWRLIM' */
    /* Chart: '<S35>/PokeFCPR_P_LONGTIME_DISCHRG_PWRLIMChrt' incorporates:
     *  SignalConversion generated from: '<S35>/LeFCPR_P_LONGTIME_DISCHRG_PWRLIM'
     *  SignalConversion generated from: '<S35>/LeFCPR_b_LONGTIME_DISCHRG_PWRLIMFA'
     */
    /* Gateway: PokeFCPR_P_LONGTIME_DISCHRG_PWRLIM/PokeFCPR_P_LONGTIME_DISCHRG_PWRLIMChrt */
    /* During: PokeFCPR_P_LONGTIME_DISCHRG_PWRLIM/PokeFCPR_P_LONGTIME_DISCHRG_PWRLIMChrt */
    /* Entry Internal: PokeFCPR_P_LONGTIME_DISCHRG_PWRLIM/PokeFCPR_P_LONGTIME_DISCHRG_PWRLIMChrt */
    /* Transition: '<S227>:2' */
    if (!LeFCPR_b_LONGTIME_DISCHRG_PWRLIMFA)
    {
        /* Transition: '<S227>:3' */
        /* Transition: '<S227>:15' */
        FCPR_ac_B.LeFCPR_P_LONGTIME_DISCHRG_PWRLIM_out =
            LeFCPR_P_LONGTIME_DISCHRG_PWRLIM;
        rtb_LeFCPR_b_LONGTIME_DISCHRG_PWRLIMFA_n = false;

        /* Transition: '<S227>:18' */
    }
    else
    {
        /* Transition: '<S227>:4' */
        rtb_LeFCPR_b_LONGTIME_DISCHRG_PWRLIMFA_n = true;
    }

    /* End of Chart: '<S35>/PokeFCPR_P_LONGTIME_DISCHRG_PWRLIMChrt' */

    /* Outport: '<Root>/VeFCPR_P_FCPS_LongTiDchaPwrLim' incorporates:
     *  SignalConversion generated from: '<S35>/VeFCPR_P_LONGTIME_DISCHRG_PWRLIM'
     */
    (void)Rte_Write_VeFCPR_P_FCPS_LongTiDchaPwrLim_Value
        (FCPR_ac_B.LeFCPR_P_LONGTIME_DISCHRG_PWRLIM_out);

    /* Outport: '<Root>/VeFCPR_b_FCPS_LongTiDchaPwrLim_FA' incorporates:
     *  SignalConversion generated from: '<S35>/VeFCPR_b_LONGTIME_DISCHRG_PWRLIMFA'
     */
    (void)Rte_Write_VeFCPR_b_FCPS_LongTiDchaPwrLim_FA_Value
        (rtb_LeFCPR_b_LONGTIME_DISCHRG_PWRLIMFA_n);

    /* End of Outputs for SubSystem: '<Root>/PokeFCPR_P_LONGTIME_DISCHRG_PWRLIM' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) PokeFCPR_P_SHORTTIME_CHRG_PWRLIM(VAR(float32, AUTOMATIC)
    LeFCPR_P_SHORTTIME_CHRG_PWRLIM, VAR(boolean, AUTOMATIC)
    LeFCPR_b_SHORTTIME_CHRG_PWRLIMFA)
{

#if Rte_SysCon_Variant_FCPR_1

    boolean rtb_LeFCPR_b_SHORTTIME_CHRG_PWRLIMFA_out;

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_P_SHORTTIME_CHRG_PWRLIM);

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_b_SHORTTIME_CHRG_PWRLIMFA);

#endif

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeFCPR_P_SHORTTIME_CHRG_PWRLIM' */
    /* Chart: '<S36>/PokeFCPR_P_SHORTTIME_CHRG_PWRLIMChrt' incorporates:
     *  SignalConversion generated from: '<S36>/LeFCPR_P_SHORTTIME_CHRG_PWRLIM'
     *  SignalConversion generated from: '<S36>/LeFCPR_b_SHORTTIME_CHRG_PWRLIMFA'
     */
    /* Gateway: PokeFCPR_P_SHORTTIME_CHRG_PWRLIM/PokeFCPR_P_SHORTTIME_CHRG_PWRLIMChrt */
    /* During: PokeFCPR_P_SHORTTIME_CHRG_PWRLIM/PokeFCPR_P_SHORTTIME_CHRG_PWRLIMChrt */
    /* Entry Internal: PokeFCPR_P_SHORTTIME_CHRG_PWRLIM/PokeFCPR_P_SHORTTIME_CHRG_PWRLIMChrt */
    /* Transition: '<S228>:2' */
    if (!LeFCPR_b_SHORTTIME_CHRG_PWRLIMFA)
    {
        /* Transition: '<S228>:3' */
        /* Transition: '<S228>:15' */
        FCPR_ac_B.LeFCPR_P_SHORTTIME_CHRG_PWRLIM_out =
            LeFCPR_P_SHORTTIME_CHRG_PWRLIM;
        rtb_LeFCPR_b_SHORTTIME_CHRG_PWRLIMFA_out = false;

        /* Transition: '<S228>:18' */
    }
    else
    {
        /* Transition: '<S228>:4' */
        rtb_LeFCPR_b_SHORTTIME_CHRG_PWRLIMFA_out = true;
    }

    /* End of Chart: '<S36>/PokeFCPR_P_SHORTTIME_CHRG_PWRLIMChrt' */

    /* Outport: '<Root>/VeFCPR_P_FCPS_ShoTiChrgPwrLim' incorporates:
     *  SignalConversion generated from: '<S36>/VeFCPR_P_SHORTTIME_CHRG_PWRLIM'
     */
    (void)Rte_Write_VeFCPR_P_FCPS_ShoTiChrgPwrLim_Value
        (FCPR_ac_B.LeFCPR_P_SHORTTIME_CHRG_PWRLIM_out);

    /* Outport: '<Root>/VeFCPR_b_FCPS_ShoTiChrgPwrLim_FA' incorporates:
     *  SignalConversion generated from: '<S36>/VeFCPR_b_SHORTTIME_CHRG_PWRLIMFA'
     */
    (void)Rte_Write_VeFCPR_b_FCPS_ShoTiChrgPwrLim_FA_Value
        (rtb_LeFCPR_b_SHORTTIME_CHRG_PWRLIMFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeFCPR_P_SHORTTIME_CHRG_PWRLIM' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) PokeFCPR_P_SHORTTIME_DISCHRG_PWRLIM(VAR(float32, AUTOMATIC)
    LeFCPR_P_SHORTTIME_DISCHRG_PWRLIM, VAR(boolean, AUTOMATIC)
    LeFCPR_b_SHORTTIME_DISCHRG_PWRLIMFA)
{

#if Rte_SysCon_Variant_FCPR_1

    boolean rtb_LeFCPR_b_SHORTTIME_DISCHRG_PWRLIMFA_;

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_P_SHORTTIME_DISCHRG_PWRLIM);

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_b_SHORTTIME_DISCHRG_PWRLIMFA);

#endif

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeFCPR_P_SHORTTIME_DISCHRG_PWRLIM' */
    /* Chart: '<S37>/PokeFCPR_P_SHORTTIME_DISCHRG_PWRLIMChrt' incorporates:
     *  SignalConversion generated from: '<S37>/LeFCPR_P_SHORTTIME_DISCHRG_PWRLIM'
     *  SignalConversion generated from: '<S37>/LeFCPR_b_SHORTTIME_DISCHRG_PWRLIMFA'
     */
    /* Gateway: PokeFCPR_P_SHORTTIME_DISCHRG_PWRLIM/PokeFCPR_P_SHORTTIME_DISCHRG_PWRLIMChrt */
    /* During: PokeFCPR_P_SHORTTIME_DISCHRG_PWRLIM/PokeFCPR_P_SHORTTIME_DISCHRG_PWRLIMChrt */
    /* Entry Internal: PokeFCPR_P_SHORTTIME_DISCHRG_PWRLIM/PokeFCPR_P_SHORTTIME_DISCHRG_PWRLIMChrt */
    /* Transition: '<S229>:2' */
    if (!LeFCPR_b_SHORTTIME_DISCHRG_PWRLIMFA)
    {
        /* Transition: '<S229>:3' */
        /* Transition: '<S229>:15' */
        FCPR_ac_B.LeFCPR_P_SHORTTIME_DISCHRG_PWRLIM_out =
            LeFCPR_P_SHORTTIME_DISCHRG_PWRLIM;
        rtb_LeFCPR_b_SHORTTIME_DISCHRG_PWRLIMFA_ = false;

        /* Transition: '<S229>:18' */
    }
    else
    {
        /* Transition: '<S229>:4' */
        rtb_LeFCPR_b_SHORTTIME_DISCHRG_PWRLIMFA_ = true;
    }

    /* End of Chart: '<S37>/PokeFCPR_P_SHORTTIME_DISCHRG_PWRLIMChrt' */

    /* Outport: '<Root>/VeFCPR_P_FCPS_ShoTiDchaPwrLim' incorporates:
     *  SignalConversion generated from: '<S37>/VeFCPR_P_SHORTTIME_DISCHRG_PWRLIM'
     */
    (void)Rte_Write_VeFCPR_P_FCPS_ShoTiDchaPwrLim_Value
        (FCPR_ac_B.LeFCPR_P_SHORTTIME_DISCHRG_PWRLIM_out);

    /* Outport: '<Root>/VeFCPR_b_FCPS_ShoTiDchaPwrLim_FA' incorporates:
     *  SignalConversion generated from: '<S37>/VeFCPR_b_SHORTTIME_DISCHRG_PWRLIMFA'
     */
    (void)Rte_Write_VeFCPR_b_FCPS_ShoTiDchaPwrLim_FA_Value
        (rtb_LeFCPR_b_SHORTTIME_DISCHRG_PWRLIMFA_);

    /* End of Outputs for SubSystem: '<Root>/PokeFCPR_P_SHORTTIME_DISCHRG_PWRLIM' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) PokeFCPR_P_STARTUP_PWR_DEMAND(VAR(float32, AUTOMATIC)
    LeFCPR_P_STARTUP_PWR_DEMAND, VAR(boolean, AUTOMATIC)
    LeFCPR_b_STARTUP_PWR_DEMANDFA)
{

#if Rte_SysCon_Variant_FCPR_1

    boolean rtb_LeFCPR_b_STARTUP_PWR_DEMANDFA_out_c;

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_P_STARTUP_PWR_DEMAND);

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_b_STARTUP_PWR_DEMANDFA);

#endif

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeFCPR_P_STARTUP_PWR_DEMAND' */
    /* Chart: '<S38>/PokeFCPR_P_STARTUP_PWR_DEMANDChrt' incorporates:
     *  SignalConversion generated from: '<S38>/LeFCPR_P_STARTUP_PWR_DEMAND'
     *  SignalConversion generated from: '<S38>/LeFCPR_b_STARTUP_PWR_DEMANDFA'
     */
    /* Gateway: PokeFCPR_P_STARTUP_PWR_DEMAND/PokeFCPR_P_STARTUP_PWR_DEMANDChrt */
    /* During: PokeFCPR_P_STARTUP_PWR_DEMAND/PokeFCPR_P_STARTUP_PWR_DEMANDChrt */
    /* Entry Internal: PokeFCPR_P_STARTUP_PWR_DEMAND/PokeFCPR_P_STARTUP_PWR_DEMANDChrt */
    /* Transition: '<S230>:2' */
    if (!LeFCPR_b_STARTUP_PWR_DEMANDFA)
    {
        /* Transition: '<S230>:3' */
        /* Transition: '<S230>:15' */
        FCPR_ac_B.LeFCPR_P_STARTUP_PWR_DEMAND_out = LeFCPR_P_STARTUP_PWR_DEMAND;
        rtb_LeFCPR_b_STARTUP_PWR_DEMANDFA_out_c = false;

        /* Transition: '<S230>:18' */
    }
    else
    {
        /* Transition: '<S230>:4' */
        rtb_LeFCPR_b_STARTUP_PWR_DEMANDFA_out_c = true;
    }

    /* End of Chart: '<S38>/PokeFCPR_P_STARTUP_PWR_DEMANDChrt' */

    /* Outport: '<Root>/VeFCPR_P_FCPS_StarUp_PwrDmnd' incorporates:
     *  SignalConversion generated from: '<S38>/VeFCPR_P_STARTUP_PWR_DEMAND'
     */
    (void)Rte_Write_VeFCPR_P_FCPS_StarUp_PwrDmnd_Value
        (FCPR_ac_B.LeFCPR_P_STARTUP_PWR_DEMAND_out);

    /* Outport: '<Root>/VeFCPR_b_FCPS_StarUp_PwrDmnd_FA' incorporates:
     *  SignalConversion generated from: '<S38>/VeFCPR_b_STARTUP_PWR_DEMANDFA'
     */
    (void)Rte_Write_VeFCPR_b_FCPS_StarUp_PwrDmnd_FA_Value
        (rtb_LeFCPR_b_STARTUP_PWR_DEMANDFA_out_c);

    /* End of Outputs for SubSystem: '<Root>/PokeFCPR_P_STARTUP_PWR_DEMAND' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) PokeFCPR_T_FCPS_HTCoolDeltaSp(VAR(float32, AUTOMATIC)
    LeFCPR_T_FCPS_HTCoolDeltaSp, VAR(boolean, AUTOMATIC)
    LeFCPR_b_FCPS_HTCoolDeltaSpFA)
{

#if Rte_SysCon_Variant_FCPR_1

    boolean rtb_LeFCPR_b_FCPS_HTCoolDeltaSpFA_out_m;

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_T_FCPS_HTCoolDeltaSp);

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_b_FCPS_HTCoolDeltaSpFA);

#endif

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeFCPR_T_FCPS_HTCoolDeltaSp' */
    /* Chart: '<S39>/PokeFCPR_T_FCPS_HTCoolDeltaSpChrt' incorporates:
     *  SignalConversion generated from: '<S39>/LeFCPR_T_FCPS_HTCoolDeltaSp'
     *  SignalConversion generated from: '<S39>/LeFCPR_b_FCPS_HTCoolDeltaSpFA'
     */
    /* Gateway: PokeFCPR_T_FCPS_HTCoolDeltaSp/PokeFCPR_T_FCPS_HTCoolDeltaSpChrt */
    /* During: PokeFCPR_T_FCPS_HTCoolDeltaSp/PokeFCPR_T_FCPS_HTCoolDeltaSpChrt */
    /* Entry Internal: PokeFCPR_T_FCPS_HTCoolDeltaSp/PokeFCPR_T_FCPS_HTCoolDeltaSpChrt */
    /* Transition: '<S231>:2' */
    if (!LeFCPR_b_FCPS_HTCoolDeltaSpFA)
    {
        /* Transition: '<S231>:3' */
        /* Transition: '<S231>:15' */
        FCPR_ac_B.LeFCPR_T_FCPS_HTCoolDeltaSp_out = LeFCPR_T_FCPS_HTCoolDeltaSp;
        rtb_LeFCPR_b_FCPS_HTCoolDeltaSpFA_out_m = false;

        /* Transition: '<S231>:18' */
    }
    else
    {
        /* Transition: '<S231>:4' */
        rtb_LeFCPR_b_FCPS_HTCoolDeltaSpFA_out_m = true;
    }

    /* End of Chart: '<S39>/PokeFCPR_T_FCPS_HTCoolDeltaSpChrt' */

    /* Outport: '<Root>/VeFCPR_T_FCPS_HTCoolDeltaSp' incorporates:
     *  SignalConversion generated from: '<S39>/VeFCPR_T_FCPS_HTCoolDeltaSp'
     */
    (void)Rte_Write_VeFCPR_T_FCPS_HTCoolDeltaSp_Value
        (FCPR_ac_B.LeFCPR_T_FCPS_HTCoolDeltaSp_out);

    /* Outport: '<Root>/VeFCPR_b_FCPS_HTCoolDeltaSp_FA' incorporates:
     *  SignalConversion generated from: '<S39>/VeFCPR_b_FCPS_HTCoolDeltaSpFA'
     */
    (void)Rte_Write_VeFCPR_b_FCPS_HTCoolDeltaSp_FA_Value
        (rtb_LeFCPR_b_FCPS_HTCoolDeltaSpFA_out_m);

    /* End of Outputs for SubSystem: '<Root>/PokeFCPR_T_FCPS_HTCoolDeltaSp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) PokeFCPR_T_FCPS_HTCoolInTemp(VAR(float32, AUTOMATIC)
    LeFCPR_T_FCPS_HTCoolInTemp, VAR(boolean, AUTOMATIC)
    LeFCPR_b_FCPS_HTCoolInTempFA)
{

#if Rte_SysCon_Variant_FCPR_1

    boolean rtb_LeFCPR_b_FCPS_HTCoolInTempFA_out_n;

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_T_FCPS_HTCoolInTemp);

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_b_FCPS_HTCoolInTempFA);

#endif

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeFCPR_T_FCPS_HTCoolInTemp' */
    /* Chart: '<S40>/PokeFCPR_T_FCPS_HTCoolInTempChrt' incorporates:
     *  SignalConversion generated from: '<S40>/LeFCPR_T_FCPS_HTCoolInTemp'
     *  SignalConversion generated from: '<S40>/LeFCPR_b_FCPS_HTCoolInTempFA'
     */
    /* Gateway: PokeFCPR_T_FCPS_HTCoolInTemp/PokeFCPR_T_FCPS_HTCoolInTempChrt */
    /* During: PokeFCPR_T_FCPS_HTCoolInTemp/PokeFCPR_T_FCPS_HTCoolInTempChrt */
    /* Entry Internal: PokeFCPR_T_FCPS_HTCoolInTemp/PokeFCPR_T_FCPS_HTCoolInTempChrt */
    /* Transition: '<S232>:2' */
    if (!LeFCPR_b_FCPS_HTCoolInTempFA)
    {
        /* Transition: '<S232>:3' */
        /* Transition: '<S232>:15' */
        FCPR_ac_B.LeFCPR_T_FCPS_HTCoolInTemp_out = LeFCPR_T_FCPS_HTCoolInTemp;
        rtb_LeFCPR_b_FCPS_HTCoolInTempFA_out_n = false;

        /* Transition: '<S232>:18' */
    }
    else
    {
        /* Transition: '<S232>:4' */
        rtb_LeFCPR_b_FCPS_HTCoolInTempFA_out_n = true;
    }

    /* End of Chart: '<S40>/PokeFCPR_T_FCPS_HTCoolInTempChrt' */

    /* Outport: '<Root>/VeFCPR_T_FCPS_HTCoolInTemp' incorporates:
     *  SignalConversion generated from: '<S40>/VeFCPR_T_FCPS_HTCoolInTemp'
     */
    (void)Rte_Write_VeFCPR_T_FCPS_HTCoolInTemp_Value
        (FCPR_ac_B.LeFCPR_T_FCPS_HTCoolInTemp_out);

    /* Outport: '<Root>/VeFCPR_b_FCPS_HTCoolInTemp_FA' incorporates:
     *  SignalConversion generated from: '<S40>/VeFCPR_b_FCPS_HTCoolInTempFA'
     */
    (void)Rte_Write_VeFCPR_b_FCPS_HTCoolInTemp_FA_Value
        (rtb_LeFCPR_b_FCPS_HTCoolInTempFA_out_n);

    /* End of Outputs for SubSystem: '<Root>/PokeFCPR_T_FCPS_HTCoolInTemp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) PokeFCPR_T_FCPS_HTCoolOutTemp(VAR(float32, AUTOMATIC)
    LeFCPR_T_FCPS_HTCoolOutTemp, VAR(boolean, AUTOMATIC)
    LeFCPR_b_FCPS_HTCoolOutTempFA)
{

#if Rte_SysCon_Variant_FCPR_1

    boolean rtb_LeFCPR_b_FCPS_HTCoolOutTempFA_out_b;

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_T_FCPS_HTCoolOutTemp);

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_b_FCPS_HTCoolOutTempFA);

#endif

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeFCPR_T_FCPS_HTCoolOutTemp' */
    /* Chart: '<S41>/PokeFCPR_T_FCPS_HTCoolOutTempChrt' incorporates:
     *  SignalConversion generated from: '<S41>/LeFCPR_T_FCPS_HTCoolOutTemp'
     *  SignalConversion generated from: '<S41>/LeFCPR_b_FCPS_HTCoolOutTempFA'
     */
    /* Gateway: PokeFCPR_T_FCPS_HTCoolOutTemp/PokeFCPR_T_FCPS_HTCoolOutTempChrt */
    /* During: PokeFCPR_T_FCPS_HTCoolOutTemp/PokeFCPR_T_FCPS_HTCoolOutTempChrt */
    /* Entry Internal: PokeFCPR_T_FCPS_HTCoolOutTemp/PokeFCPR_T_FCPS_HTCoolOutTempChrt */
    /* Transition: '<S233>:2' */
    if (!LeFCPR_b_FCPS_HTCoolOutTempFA)
    {
        /* Transition: '<S233>:3' */
        /* Transition: '<S233>:15' */
        FCPR_ac_B.LeFCPR_T_FCPS_HTCoolOutTemp_out = LeFCPR_T_FCPS_HTCoolOutTemp;
        rtb_LeFCPR_b_FCPS_HTCoolOutTempFA_out_b = false;

        /* Transition: '<S233>:18' */
    }
    else
    {
        /* Transition: '<S233>:4' */
        rtb_LeFCPR_b_FCPS_HTCoolOutTempFA_out_b = true;
    }

    /* End of Chart: '<S41>/PokeFCPR_T_FCPS_HTCoolOutTempChrt' */

    /* Outport: '<Root>/VeFCPR_T_FCPS_HTCoolOutTemp' incorporates:
     *  SignalConversion generated from: '<S41>/VeFCPR_T_FCPS_HTCoolOutTemp'
     */
    (void)Rte_Write_VeFCPR_T_FCPS_HTCoolOutTemp_Value
        (FCPR_ac_B.LeFCPR_T_FCPS_HTCoolOutTemp_out);

    /* Outport: '<Root>/VeFCPR_b_FCPS_HTCoolOutTemp_FA' incorporates:
     *  SignalConversion generated from: '<S41>/VeFCPR_b_FCPS_HTCoolOutTempFA'
     */
    (void)Rte_Write_VeFCPR_b_FCPS_HTCoolOutTemp_FA_Value
        (rtb_LeFCPR_b_FCPS_HTCoolOutTempFA_out_b);

    /* End of Outputs for SubSystem: '<Root>/PokeFCPR_T_FCPS_HTCoolOutTemp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) PokeFCPR_T_FCPS_HTCoolOutTempSp(VAR(float32, AUTOMATIC)
    LeFCPR_T_FCPS_HTCoolOutTempSp, VAR(boolean, AUTOMATIC)
    LeFCPR_b_FCPS_HTCoolOutTempSpFA)
{

#if Rte_SysCon_Variant_FCPR_1

    boolean rtb_LeFCPR_b_FCPS_HTCoolOutTempSpFA_ou_c;

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_T_FCPS_HTCoolOutTempSp);

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_b_FCPS_HTCoolOutTempSpFA);

#endif

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeFCPR_T_FCPS_HTCoolOutTempSp' */
    /* Chart: '<S42>/PokeFCPR_T_FCPS_HTCoolOutTempSpChrt' incorporates:
     *  SignalConversion generated from: '<S42>/LeFCPR_T_FCPS_HTCoolOutTempSp'
     *  SignalConversion generated from: '<S42>/LeFCPR_b_FCPS_HTCoolOutTempSpFA'
     */
    /* Gateway: PokeFCPR_T_FCPS_HTCoolOutTempSp/PokeFCPR_T_FCPS_HTCoolOutTempSpChrt */
    /* During: PokeFCPR_T_FCPS_HTCoolOutTempSp/PokeFCPR_T_FCPS_HTCoolOutTempSpChrt */
    /* Entry Internal: PokeFCPR_T_FCPS_HTCoolOutTempSp/PokeFCPR_T_FCPS_HTCoolOutTempSpChrt */
    /* Transition: '<S234>:2' */
    if (!LeFCPR_b_FCPS_HTCoolOutTempSpFA)
    {
        /* Transition: '<S234>:3' */
        /* Transition: '<S234>:15' */
        FCPR_ac_B.LeFCPR_T_FCPS_HTCoolOutTempSp_out =
            LeFCPR_T_FCPS_HTCoolOutTempSp;
        rtb_LeFCPR_b_FCPS_HTCoolOutTempSpFA_ou_c = false;

        /* Transition: '<S234>:18' */
    }
    else
    {
        /* Transition: '<S234>:4' */
        rtb_LeFCPR_b_FCPS_HTCoolOutTempSpFA_ou_c = true;
    }

    /* End of Chart: '<S42>/PokeFCPR_T_FCPS_HTCoolOutTempSpChrt' */

    /* Outport: '<Root>/VeFCPR_T_FCPS_HTCoolOutTempSp' incorporates:
     *  SignalConversion generated from: '<S42>/VeFCPR_T_FCPS_HTCoolOutTempSp'
     */
    (void)Rte_Write_VeFCPR_T_FCPS_HTCoolOutTempSp_Value
        (FCPR_ac_B.LeFCPR_T_FCPS_HTCoolOutTempSp_out);

    /* Outport: '<Root>/VeFCPR_b_FCPS_HTCoolOutTempSp_FA' incorporates:
     *  SignalConversion generated from: '<S42>/VeFCPR_b_FCPS_HTCoolOutTempSpFA'
     */
    (void)Rte_Write_VeFCPR_b_FCPS_HTCoolOutTempSp_FA_Value
        (rtb_LeFCPR_b_FCPS_HTCoolOutTempSpFA_ou_c);

    /* End of Outputs for SubSystem: '<Root>/PokeFCPR_T_FCPS_HTCoolOutTempSp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) PokeFCPR_T_FCPS_LTCoolMaxTemp(VAR(float32, AUTOMATIC)
    LeFCPR_T_FCPS_LTCoolMaxTemp, VAR(boolean, AUTOMATIC)
    LeFCPR_b_FCPS_LTCoolMaxTempFA)
{

#if Rte_SysCon_Variant_FCPR_1

    boolean rtb_LeFCPR_b_FCPS_LTCoolMaxTempFA_out_i;

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_T_FCPS_LTCoolMaxTemp);

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_b_FCPS_LTCoolMaxTempFA);

#endif

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeFCPR_T_FCPS_LTCoolMaxTemp' */
    /* Chart: '<S43>/PokeFCPR_T_FCPS_LTCoolMaxTempChrt' incorporates:
     *  SignalConversion generated from: '<S43>/LeFCPR_T_FCPS_LTCoolMaxTemp'
     *  SignalConversion generated from: '<S43>/LeFCPR_b_FCPS_LTCoolMaxTempFA'
     */
    /* Gateway: PokeFCPR_T_FCPS_LTCoolMaxTemp/PokeFCPR_T_FCPS_LTCoolMaxTempChrt */
    /* During: PokeFCPR_T_FCPS_LTCoolMaxTemp/PokeFCPR_T_FCPS_LTCoolMaxTempChrt */
    /* Entry Internal: PokeFCPR_T_FCPS_LTCoolMaxTemp/PokeFCPR_T_FCPS_LTCoolMaxTempChrt */
    /* Transition: '<S235>:2' */
    if (!LeFCPR_b_FCPS_LTCoolMaxTempFA)
    {
        /* Transition: '<S235>:3' */
        /* Transition: '<S235>:15' */
        FCPR_ac_B.LeFCPR_T_FCPS_LTCoolMaxTemp_out = LeFCPR_T_FCPS_LTCoolMaxTemp;
        rtb_LeFCPR_b_FCPS_LTCoolMaxTempFA_out_i = false;

        /* Transition: '<S235>:18' */
    }
    else
    {
        /* Transition: '<S235>:4' */
        rtb_LeFCPR_b_FCPS_LTCoolMaxTempFA_out_i = true;
    }

    /* End of Chart: '<S43>/PokeFCPR_T_FCPS_LTCoolMaxTempChrt' */

    /* Outport: '<Root>/VeFCPR_T_FCPS_LTCoolMaxTemp' incorporates:
     *  SignalConversion generated from: '<S43>/VeFCPR_T_FCPS_LTCoolMaxTemp'
     */
    (void)Rte_Write_VeFCPR_T_FCPS_LTCoolMaxTemp_Value
        (FCPR_ac_B.LeFCPR_T_FCPS_LTCoolMaxTemp_out);

    /* Outport: '<Root>/VeFCPR_b_FCPS_LTCoolMaxTemp_FA' incorporates:
     *  SignalConversion generated from: '<S43>/VeFCPR_b_FCPS_LTCoolMaxTempFA'
     */
    (void)Rte_Write_VeFCPR_b_FCPS_LTCoolMaxTemp_FA_Value
        (rtb_LeFCPR_b_FCPS_LTCoolMaxTempFA_out_i);

    /* End of Outputs for SubSystem: '<Root>/PokeFCPR_T_FCPS_LTCoolMaxTemp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) PokeFCPR_U_CoverMtrPosn(VAR(float32, AUTOMATIC)
    LeFCPR_U_CoverMtrPosn, VAR(boolean, AUTOMATIC) LeFCPR_b_CoverMtrPosnFA)
{

#if Rte_SysCon_Variant_FCPR_1

    boolean rtb_LeFCPR_b_CoverMtrPosnFA_out;

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_U_CoverMtrPosn);

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_b_CoverMtrPosnFA);

#endif

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeFCPR_U_CoverMtrPosn' */
    /* Chart: '<S44>/PokeFCPR_U_CoverMtrPosnChrt' incorporates:
     *  SignalConversion generated from: '<S44>/LeFCPR_U_CoverMtrPosn'
     *  SignalConversion generated from: '<S44>/LeFCPR_b_CoverMtrPosnFA'
     */
    /* Gateway: PokeFCPR_U_CoverMtrPosn/PokeFCPR_U_CoverMtrPosnChrt */
    /* During: PokeFCPR_U_CoverMtrPosn/PokeFCPR_U_CoverMtrPosnChrt */
    /* Entry Internal: PokeFCPR_U_CoverMtrPosn/PokeFCPR_U_CoverMtrPosnChrt */
    /* Transition: '<S236>:2' */
    if (!LeFCPR_b_CoverMtrPosnFA)
    {
        /* Transition: '<S236>:3' */
        /* Transition: '<S236>:15' */
        FCPR_ac_B.LeFCPR_U_CoverMtrPosn_out = LeFCPR_U_CoverMtrPosn;
        rtb_LeFCPR_b_CoverMtrPosnFA_out = false;

        /* Transition: '<S236>:18' */
    }
    else
    {
        /* Transition: '<S236>:4' */
        rtb_LeFCPR_b_CoverMtrPosnFA_out = true;
    }

    /* End of Chart: '<S44>/PokeFCPR_U_CoverMtrPosnChrt' */

    /* Merge: '<Root>/Merge_18' incorporates:
     *  SignalConversion generated from: '<S44>/VeFCPR_U_CoverMtrPosn_write'
     * */
    Rte_IrvWrite_PokeFCPR_U_CoverMtrPosn_CoverMtrPosn_Init_write_IRV
        (FCPR_ac_B.LeFCPR_U_CoverMtrPosn_out);

    /* Merge: '<Root>/Merge_21' incorporates:
     *  SignalConversion generated from: '<S44>/VeFCPR_b_CoverMtrPosnFA_write'
     * */
    Rte_IrvWrite_PokeFCPR_U_CoverMtrPosn_CoverMtrPosnFA_Init_write_IRV
        (rtb_LeFCPR_b_CoverMtrPosnFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeFCPR_U_CoverMtrPosn' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) PokeFCPR_U_HB_SysVolt(VAR(float32, AUTOMATIC)
    LeFCPR_U_HB_SysVolt, VAR(boolean, AUTOMATIC) LeFCPR_b_HB_SysVoltFA)
{

#if Rte_SysCon_Variant_FCPR_1

    boolean rtb_LeFCPR_b_HB_SysVoltFA_out;

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_U_HB_SysVolt);

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_b_HB_SysVoltFA);

#endif

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeFCPR_U_HB_SysVolt' */
    /* Chart: '<S45>/PokeFCPR_U_HB_SysVoltChrt' incorporates:
     *  SignalConversion generated from: '<S45>/LeFCPR_U_HB_SysVolt'
     *  SignalConversion generated from: '<S45>/LeFCPR_b_HB_SysVoltFA'
     */
    /* Gateway: PokeFCPR_U_HB_SysVolt/PokeFCPR_U_HB_SysVoltChrt */
    /* During: PokeFCPR_U_HB_SysVolt/PokeFCPR_U_HB_SysVoltChrt */
    /* Entry Internal: PokeFCPR_U_HB_SysVolt/PokeFCPR_U_HB_SysVoltChrt */
    /* Transition: '<S237>:2' */
    if (!LeFCPR_b_HB_SysVoltFA)
    {
        /* Transition: '<S237>:3' */
        /* Transition: '<S237>:15' */
        FCPR_ac_B.LeFCPR_U_HB_SysVolt_out = LeFCPR_U_HB_SysVolt;
        rtb_LeFCPR_b_HB_SysVoltFA_out = false;

        /* Transition: '<S237>:18' */
    }
    else
    {
        /* Transition: '<S237>:4' */
        rtb_LeFCPR_b_HB_SysVoltFA_out = true;
    }

    /* End of Chart: '<S45>/PokeFCPR_U_HB_SysVoltChrt' */

    /* Merge: '<Root>/Merge_12' incorporates:
     *  SignalConversion generated from: '<S45>/VeFCPR_U_HB_SysVolt_write'
     * */
    Rte_IrvWrite_PokeFCPR_U_HB_SysVolt_HB_SysVolt_Init_write_IRV
        (FCPR_ac_B.LeFCPR_U_HB_SysVolt_out);

    /* Merge: '<Root>/Merge_17' incorporates:
     *  SignalConversion generated from: '<S45>/VeFCPR_b_HB_SysVoltFA_write'
     * */
    Rte_IrvWrite_PokeFCPR_U_HB_SysVolt_HB_SysVoltFA_Init_write_IRV
        (rtb_LeFCPR_b_HB_SysVoltFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeFCPR_U_HB_SysVolt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) PokeFCPR_U_LOWER_VOLTAGE_LIM(VAR(float32, AUTOMATIC)
    LeFCPR_U_LOWER_VOLTAGE_LIM, VAR(boolean, AUTOMATIC)
    LeFCPR_b_LOWER_VOLTAGE_LIMFA)
{

#if Rte_SysCon_Variant_FCPR_1

    boolean rtb_LeFCPR_b_LOWER_VOLTAGE_LIMFA_out_e;

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_U_LOWER_VOLTAGE_LIM);

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_b_LOWER_VOLTAGE_LIMFA);

#endif

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeFCPR_U_LOWER_VOLTAGE_LIM' */
    /* Chart: '<S46>/PokeFCPR_U_LOWER_VOLTAGE_LIMChrt' incorporates:
     *  SignalConversion generated from: '<S46>/LeFCPR_U_LOWER_VOLTAGE_LIM'
     *  SignalConversion generated from: '<S46>/LeFCPR_b_LOWER_VOLTAGE_LIMFA'
     */
    /* Gateway: PokeFCPR_U_LOWER_VOLTAGE_LIM/PokeFCPR_U_LOWER_VOLTAGE_LIMChrt */
    /* During: PokeFCPR_U_LOWER_VOLTAGE_LIM/PokeFCPR_U_LOWER_VOLTAGE_LIMChrt */
    /* Entry Internal: PokeFCPR_U_LOWER_VOLTAGE_LIM/PokeFCPR_U_LOWER_VOLTAGE_LIMChrt */
    /* Transition: '<S238>:2' */
    if (!LeFCPR_b_LOWER_VOLTAGE_LIMFA)
    {
        /* Transition: '<S238>:3' */
        /* Transition: '<S238>:15' */
        FCPR_ac_B.LeFCPR_U_LOWER_VOLTAGE_LIM_out = LeFCPR_U_LOWER_VOLTAGE_LIM;
        rtb_LeFCPR_b_LOWER_VOLTAGE_LIMFA_out_e = false;

        /* Transition: '<S238>:18' */
    }
    else
    {
        /* Transition: '<S238>:4' */
        rtb_LeFCPR_b_LOWER_VOLTAGE_LIMFA_out_e = true;
    }

    /* End of Chart: '<S46>/PokeFCPR_U_LOWER_VOLTAGE_LIMChrt' */

    /* Outport: '<Root>/VeFCPR_U_FCPS_LowerVoltLIM' incorporates:
     *  SignalConversion generated from: '<S46>/VeFCPR_U_LOWER_VOLTAGE_LIM'
     */
    (void)Rte_Write_VeFCPR_U_FCPS_LowerVoltLIM_Value
        (FCPR_ac_B.LeFCPR_U_LOWER_VOLTAGE_LIM_out);

    /* Outport: '<Root>/VeFCPR_b_FCPS_LowerVoltLIM_FA' incorporates:
     *  SignalConversion generated from: '<S46>/VeFCPR_b_LOWER_VOLTAGE_LIMFA'
     */
    (void)Rte_Write_VeFCPR_b_FCPS_LowerVoltLIM_FA_Value
        (rtb_LeFCPR_b_LOWER_VOLTAGE_LIMFA_out_e);

    /* End of Outputs for SubSystem: '<Root>/PokeFCPR_U_LOWER_VOLTAGE_LIM' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) PokeFCPR_U_UPPER_VOLTAGE_LIM(VAR(float32, AUTOMATIC)
    LeFCPR_U_UPPER_VOLTAGE_LIM, VAR(boolean, AUTOMATIC)
    LeFCPR_b_UPPER_VOLTAGE_LIMFA)
{

#if Rte_SysCon_Variant_FCPR_1

    boolean rtb_LeFCPR_b_UPPER_VOLTAGE_LIMFA_out_a;

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_U_UPPER_VOLTAGE_LIM);

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_b_UPPER_VOLTAGE_LIMFA);

#endif

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeFCPR_U_UPPER_VOLTAGE_LIM' */
    /* Chart: '<S47>/PokeFCPR_U_UPPER_VOLTAGE_LIMChrt' incorporates:
     *  SignalConversion generated from: '<S47>/LeFCPR_U_UPPER_VOLTAGE_LIM'
     *  SignalConversion generated from: '<S47>/LeFCPR_b_UPPER_VOLTAGE_LIMFA'
     */
    /* Gateway: PokeFCPR_U_UPPER_VOLTAGE_LIM/PokeFCPR_U_UPPER_VOLTAGE_LIMChrt */
    /* During: PokeFCPR_U_UPPER_VOLTAGE_LIM/PokeFCPR_U_UPPER_VOLTAGE_LIMChrt */
    /* Entry Internal: PokeFCPR_U_UPPER_VOLTAGE_LIM/PokeFCPR_U_UPPER_VOLTAGE_LIMChrt */
    /* Transition: '<S239>:2' */
    if (!LeFCPR_b_UPPER_VOLTAGE_LIMFA)
    {
        /* Transition: '<S239>:3' */
        /* Transition: '<S239>:15' */
        FCPR_ac_B.LeFCPR_U_UPPER_VOLTAGE_LIM_out = LeFCPR_U_UPPER_VOLTAGE_LIM;
        rtb_LeFCPR_b_UPPER_VOLTAGE_LIMFA_out_a = false;

        /* Transition: '<S239>:18' */
    }
    else
    {
        /* Transition: '<S239>:4' */
        rtb_LeFCPR_b_UPPER_VOLTAGE_LIMFA_out_a = true;
    }

    /* End of Chart: '<S47>/PokeFCPR_U_UPPER_VOLTAGE_LIMChrt' */

    /* Outport: '<Root>/VeFCPR_U_FCPS_UpperVoltLIM' incorporates:
     *  SignalConversion generated from: '<S47>/VeFCPR_U_UPPER_VOLTAGE_LIM'
     */
    (void)Rte_Write_VeFCPR_U_FCPS_UpperVoltLIM_Value
        (FCPR_ac_B.LeFCPR_U_UPPER_VOLTAGE_LIM_out);

    /* Outport: '<Root>/VeFCPR_b_FCPS_UpperVoltLIM_FA' incorporates:
     *  SignalConversion generated from: '<S47>/VeFCPR_b_UPPER_VOLTAGE_LIMFA'
     */
    (void)Rte_Write_VeFCPR_b_FCPS_UpperVoltLIM_FA_Value
        (rtb_LeFCPR_b_UPPER_VOLTAGE_LIMFA_out_a);

    /* End of Outputs for SubSystem: '<Root>/PokeFCPR_U_UPPER_VOLTAGE_LIM' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) PokeFCPR_U_VOLTAGE(VAR(float32, AUTOMATIC)
    LeFCPR_U_VOLTAGE, VAR(boolean, AUTOMATIC) LeFCPR_b_VOLTAGEFA)
{

#if Rte_SysCon_Variant_FCPR_1

    boolean rtb_LeFCPR_b_VOLTAGEFA_out_g;

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_U_VOLTAGE);

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_b_VOLTAGEFA);

#endif

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeFCPR_U_VOLTAGE' */
    /* Chart: '<S48>/PokeFCPR_U_VOLTAGEChrt' incorporates:
     *  SignalConversion generated from: '<S48>/LeFCPR_U_VOLTAGE'
     *  SignalConversion generated from: '<S48>/LeFCPR_b_VOLTAGEFA'
     */
    /* Gateway: PokeFCPR_U_VOLTAGE/PokeFCPR_U_VOLTAGEChrt */
    /* During: PokeFCPR_U_VOLTAGE/PokeFCPR_U_VOLTAGEChrt */
    /* Entry Internal: PokeFCPR_U_VOLTAGE/PokeFCPR_U_VOLTAGEChrt */
    /* Transition: '<S240>:2' */
    if (!LeFCPR_b_VOLTAGEFA)
    {
        /* Transition: '<S240>:3' */
        /* Transition: '<S240>:15' */
        FCPR_ac_B.LeFCPR_U_VOLTAGE_out = LeFCPR_U_VOLTAGE;
        rtb_LeFCPR_b_VOLTAGEFA_out_g = false;

        /* Transition: '<S240>:18' */
    }
    else
    {
        /* Transition: '<S240>:4' */
        rtb_LeFCPR_b_VOLTAGEFA_out_g = true;
    }

    /* End of Chart: '<S48>/PokeFCPR_U_VOLTAGEChrt' */

    /* Outport: '<Root>/VeFCPR_U_FCPS_Volt' incorporates:
     *  SignalConversion generated from: '<S48>/VeFCPR_U_VOLTAGE'
     */
    (void)Rte_Write_VeFCPR_U_FCPS_Volt_Value(FCPR_ac_B.LeFCPR_U_VOLTAGE_out);

    /* Outport: '<Root>/VeFCPR_b_FCPS_Volt_FA' incorporates:
     *  SignalConversion generated from: '<S48>/VeFCPR_b_VOLTAGEFA'
     */
    (void)Rte_Write_VeFCPR_b_FCPS_Volt_FA_Value(rtb_LeFCPR_b_VOLTAGEFA_out_g);

    /* End of Outputs for SubSystem: '<Root>/PokeFCPR_U_VOLTAGE' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) PokeFCPR_b_FCPS_RunReqToEVCU(VAR(boolean, AUTOMATIC)
    LeFCPR_b_FCPS_RunReqToEVCU)
{

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_b_FCPS_RunReqToEVCU);

#endif

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeFCPR_b_FCPS_RunReqToEVCU' */
    /* Outport: '<Root>/VeFCPR_b_FCPS_RunReqToEVCU' incorporates:
     *  SignalConversion generated from: '<S49>/VeFCPR_b_FCPS_RunReqToEVCU'
     *  SignalConversion generated from: '<S49>/LeFCPR_b_FCPS_RunReqToEVCU'
     */
    /* Gateway: PokeFCPR_b_FCPS_RunReqToEVCU/PokeFCPR_FCPS_RunReqToEVCUChrt */
    /* During: PokeFCPR_b_FCPS_RunReqToEVCU/PokeFCPR_FCPS_RunReqToEVCUChrt */
    /* Entry Internal: PokeFCPR_b_FCPS_RunReqToEVCU/PokeFCPR_FCPS_RunReqToEVCUChrt */
    /* Transition: '<S241>:2' */
    (void)Rte_Write_VeFCPR_b_FCPS_RunReqToEVCU_Value(LeFCPR_b_FCPS_RunReqToEVCU);

    /* End of Outputs for SubSystem: '<Root>/PokeFCPR_b_FCPS_RunReqToEVCU' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) PokeFCPR_b_FuelLidReq(VAR(boolean, AUTOMATIC)
    LeFCPR_b_FuelLidReq)
{

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_b_FuelLidReq);

#endif

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeFCPR_b_FuelLidReq' */
    /* Outport: '<Root>/VeFCPR_b_FuelLidReq' incorporates:
     *  SignalConversion generated from: '<S50>/VeFCPR_b_FuelLidReq'
     *  SignalConversion generated from: '<S50>/LeFCPR_b_FuelLidReq'
     */
    /* Gateway: PokeFCPR_b_FuelLidReq/PokeFCPR_b_FuelLidReqChrt */
    /* During: PokeFCPR_b_FuelLidReq/PokeFCPR_b_FuelLidReqChrt */
    /* Entry Internal: PokeFCPR_b_FuelLidReq/PokeFCPR_b_FuelLidReqChrt */
    /* Transition: '<S242>:2' */
    (void)Rte_Write_VeFCPR_b_FuelLidReq_Value(LeFCPR_b_FuelLidReq);

    /* End of Outputs for SubSystem: '<Root>/PokeFCPR_b_FuelLidReq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) PokeFCPR_b_H2_Refuel_Sts(VAR(boolean, AUTOMATIC)
    LeFCPR_b_H2_Refuel_Sts)
{

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_b_H2_Refuel_Sts);

#endif

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeFCPR_b_H2_Refuel_Sts' */
    /* SignalConversion generated from: '<S51>/VeFCPR_b_H2_Refuel_Sts' incorporates:
     *  SignalConversion generated from: '<S51>/LeFCPR_b_H2_Refuel_Sts'
     */
    /* Gateway: PokeFCPR_b_H2_Refuel_Sts/PokeFCPR_b_H2_Refuel_StsChrt */
    /* During: PokeFCPR_b_H2_Refuel_Sts/PokeFCPR_b_H2_Refuel_StsChrt */
    /* Entry Internal: PokeFCPR_b_H2_Refuel_Sts/PokeFCPR_b_H2_Refuel_StsChrt */
    /* Transition: '<S243>:2' */
    Rte_IrvWrite_PokeFCPR_b_H2_Refuel_Sts_VeFCPR_b_H2_Refuel_Sts_IRV
        (LeFCPR_b_H2_Refuel_Sts);

    /* End of Outputs for SubSystem: '<Root>/PokeFCPR_b_H2_Refuel_Sts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) PokeFCPR_b_H2_Solenoid_Req(VAR(boolean, AUTOMATIC)
    LeFCPR_b_H2_Solenoid_Req)
{

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_b_H2_Solenoid_Req);

#endif

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeFCPR_b_H2_Solenoid_Req' */
    /* Outport: '<Root>/VeFCPR_b_H2_Solenoid_Req' incorporates:
     *  SignalConversion generated from: '<S52>/VeFCPR_b_H2_Solenoid_Req'
     *  SignalConversion generated from: '<S52>/LeFCPR_b_H2_Solenoid_Req'
     */
    /* Gateway: PokeFCPR_b_H2_Solenoid_Req/PokeFCPR_b_H2_Solenoid_ReqChrt */
    /* During: PokeFCPR_b_H2_Solenoid_Req/PokeFCPR_b_H2_Solenoid_ReqChrt */
    /* Entry Internal: PokeFCPR_b_H2_Solenoid_Req/PokeFCPR_b_H2_Solenoid_ReqChrt */
    /* Transition: '<S244>:2' */
    (void)Rte_Write_VeFCPR_b_H2_Solenoid_Req_Value(LeFCPR_b_H2_Solenoid_Req);

    /* End of Outputs for SubSystem: '<Root>/PokeFCPR_b_H2_Solenoid_Req' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) PokeFCPR_b_HV_AfterRun_Sts(VAR(boolean, AUTOMATIC)
    LeFCPR_b_HV_AfterRun_Sts)
{

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_b_HV_AfterRun_Sts);

#endif

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeFCPR_b_HV_AfterRun_Sts' */
    /* SignalConversion generated from: '<S53>/VeFCPR_b_HV_AfterRun_Sts' incorporates:
     *  SignalConversion generated from: '<S53>/LeFCPR_b_HV_AfterRun_Sts'
     */
    /* Gateway: PokeFCPR_b_HV_AfterRun_Sts/PokeFCPR_b_HV_AfterRun_StsChrt */
    /* During: PokeFCPR_b_HV_AfterRun_Sts/PokeFCPR_b_HV_AfterRun_StsChrt */
    /* Entry Internal: PokeFCPR_b_HV_AfterRun_Sts/PokeFCPR_b_HV_AfterRun_StsChrt */
    /* Transition: '<S245>:2' */
    Rte_IrvWrite_PokeFCPR_b_HV_AfterRun_Sts_VeFCPR_b_HV_AfterRun_Sts_IRV
        (LeFCPR_b_HV_AfterRun_Sts);

    /* End of Outputs for SubSystem: '<Root>/PokeFCPR_b_HV_AfterRun_Sts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) PokeFCPR_b_KeepAlive_Req(VAR(boolean, AUTOMATIC)
    LeFCPR_b_KeepAlive_Req)
{

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_b_KeepAlive_Req);

#endif

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeFCPR_b_KeepAlive_Req' */
    /* Outport: '<Root>/VeFCPR_b_FCPS_KeepAliveReq' incorporates:
     *  SignalConversion generated from: '<S54>/VeFCPR_b_KeepAlive_Req'
     *  SignalConversion generated from: '<S54>/LeFCPR_b_KeepAlive_Req'
     */
    /* Gateway: PokeFCPR_b_KeepAlive_Req/PokeFCPR_b_KeepAlive_ReqChrt */
    /* During: PokeFCPR_b_KeepAlive_Req/PokeFCPR_b_KeepAlive_ReqChrt */
    /* Entry Internal: PokeFCPR_b_KeepAlive_Req/PokeFCPR_b_KeepAlive_ReqChrt */
    /* Transition: '<S246>:2' */
    (void)Rte_Write_VeFCPR_b_FCPS_KeepAliveReq_Value(LeFCPR_b_KeepAlive_Req);

    /* End of Outputs for SubSystem: '<Root>/PokeFCPR_b_KeepAlive_Req' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) PokeFCPR_e_ActualMode(VAR(TeFCPR_e_ActualMode, AUTOMATIC)
    LeFCPR_e_ActualMode, VAR(boolean, AUTOMATIC) LeFCPR_b_ActualModeFA)
{

#if Rte_SysCon_Variant_FCPR_1

    boolean rtb_LeFCPR_b_ActualModeFA_out_h;

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_e_ActualMode);

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_b_ActualModeFA);

#endif

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeFCPR_e_ActualMode' */
    /* Chart: '<S55>/PokeFCPR_e_ActualModeChrt' incorporates:
     *  SignalConversion generated from: '<S55>/LeFCPR_b_ActualModeFA'
     *  SignalConversion generated from: '<S55>/LeFCPR_e_ActualMode'
     */
    /* Gateway: PokeFCPR_e_ActualMode/PokeFCPR_e_ActualModeChrt */
    /* During: PokeFCPR_e_ActualMode/PokeFCPR_e_ActualModeChrt */
    /* Entry Internal: PokeFCPR_e_ActualMode/PokeFCPR_e_ActualModeChrt */
    /* Transition: '<S247>:2' */
    if (!LeFCPR_b_ActualModeFA)
    {
        /* Transition: '<S247>:3' */
        /* Transition: '<S247>:15' */
        FCPR_ac_B.LeFCPR_e_ActualMode_out = LeFCPR_e_ActualMode;
        rtb_LeFCPR_b_ActualModeFA_out_h = false;

        /* Transition: '<S247>:18' */
    }
    else
    {
        /* Transition: '<S247>:4' */
        rtb_LeFCPR_b_ActualModeFA_out_h = true;
    }

    /* End of Chart: '<S55>/PokeFCPR_e_ActualModeChrt' */

    /* Outport: '<Root>/VeFCPR_b_ActualMode_FA' incorporates:
     *  SignalConversion generated from: '<S55>/VeFCPR_b_ActualModeFA'
     */
    (void)Rte_Write_VeFCPR_b_ActualMode_FA_Value(rtb_LeFCPR_b_ActualModeFA_out_h);

    /* Outport: '<Root>/VeFCPR_e_ActualMode' incorporates:
     *  SignalConversion generated from: '<S55>/VeFCPR_e_ActualMode'
     */
    (void)Rte_Write_VeFCPR_e_ActualMode_Value(FCPR_ac_B.LeFCPR_e_ActualMode_out);

    /* End of Outputs for SubSystem: '<Root>/PokeFCPR_e_ActualMode' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) PokeFCPR_e_FCPS_HTCoolReq(VAR(TeFCPR_e_FCPS_HTCoolReq,
    AUTOMATIC) LeFCPR_e_FCPS_HTCoolReq, VAR(boolean, AUTOMATIC)
    LeFCPR_b_FCPS_HTCoolReqFA)
{

#if Rte_SysCon_Variant_FCPR_1

    boolean rtb_LeFCPR_b_FCPS_HTCoolReqFA_out_i;

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_e_FCPS_HTCoolReq);

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_b_FCPS_HTCoolReqFA);

#endif

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeFCPR_e_FCPS_HTCoolReq' */
    /* Chart: '<S56>/PokeFCPR_e_FCPS_HTCoolReqChrt' incorporates:
     *  SignalConversion generated from: '<S56>/LeFCPR_b_FCPS_HTCoolReqFA'
     *  SignalConversion generated from: '<S56>/LeFCPR_e_FCPS_HTCoolReq'
     */
    /* Gateway: PokeFCPR_e_FCPS_HTCoolReq/PokeFCPR_e_FCPS_HTCoolReqChrt */
    /* During: PokeFCPR_e_FCPS_HTCoolReq/PokeFCPR_e_FCPS_HTCoolReqChrt */
    /* Entry Internal: PokeFCPR_e_FCPS_HTCoolReq/PokeFCPR_e_FCPS_HTCoolReqChrt */
    /* Transition: '<S248>:2' */
    if (!LeFCPR_b_FCPS_HTCoolReqFA)
    {
        /* Transition: '<S248>:3' */
        /* Transition: '<S248>:15' */
        FCPR_ac_B.LeFCPR_e_FCPS_HTCoolReq_out = LeFCPR_e_FCPS_HTCoolReq;
        rtb_LeFCPR_b_FCPS_HTCoolReqFA_out_i = false;

        /* Transition: '<S248>:18' */
    }
    else
    {
        /* Transition: '<S248>:4' */
        rtb_LeFCPR_b_FCPS_HTCoolReqFA_out_i = true;
    }

    /* End of Chart: '<S56>/PokeFCPR_e_FCPS_HTCoolReqChrt' */

    /* Outport: '<Root>/VeFCPR_b_FCPS_HTCoolReq_FA' incorporates:
     *  SignalConversion generated from: '<S56>/VeFCPR_b_FCPS_HTCoolReqFA'
     */
    (void)Rte_Write_VeFCPR_b_FCPS_HTCoolReq_FA_Value
        (rtb_LeFCPR_b_FCPS_HTCoolReqFA_out_i);

    /* Outport: '<Root>/VeFCPR_e_FCPS_HTCoolReq' incorporates:
     *  SignalConversion generated from: '<S56>/VeFCPR_e_FCPS_HTCoolReq'
     */
    (void)Rte_Write_VeFCPR_e_FCPS_HTCoolReq_Value
        (FCPR_ac_B.LeFCPR_e_FCPS_HTCoolReq_out);

    /* End of Outputs for SubSystem: '<Root>/PokeFCPR_e_FCPS_HTCoolReq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) PokeFCPR_e_FC_DCDC_IntrlkStat(VAR(TeHVTR_e_HV_IntrlkStat,
    AUTOMATIC) LeFCPR_e_FC_DCDC_IntrlkStat, VAR(boolean, AUTOMATIC)
    LeFCPR_b_FC_DCDC_IntrlkStatFA)
{

#if Rte_SysCon_Variant_FCPR_1

    boolean rtb_LeFCPR_b_FC_DCDC_IntrlkStatFA_out_a;

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_e_FC_DCDC_IntrlkStat);

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_b_FC_DCDC_IntrlkStatFA);

#endif

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeFCPR_e_FC_DCDC_IntrlkStat' */
    /* Chart: '<S57>/PokeFCPR_e_FC_DCDC_IntrlkStatChrt' incorporates:
     *  SignalConversion generated from: '<S57>/LeFCPR_b_FC_DCDC_IntrlkStatFA'
     *  SignalConversion generated from: '<S57>/LeFCPR_e_FC_DCDC_IntrlkStat'
     */
    /* Gateway: PokeFCPR_e_FC_DCDC_IntrlkStat/PokeFCPR_e_FC_DCDC_IntrlkStatChrt */
    /* During: PokeFCPR_e_FC_DCDC_IntrlkStat/PokeFCPR_e_FC_DCDC_IntrlkStatChrt */
    /* Entry Internal: PokeFCPR_e_FC_DCDC_IntrlkStat/PokeFCPR_e_FC_DCDC_IntrlkStatChrt */
    /* Transition: '<S249>:2' */
    if (!LeFCPR_b_FC_DCDC_IntrlkStatFA)
    {
        /* Transition: '<S249>:3' */
        /* Transition: '<S249>:15' */
        FCPR_ac_B.LeFCPR_e_FC_DCDC_IntrlkStat_out = LeFCPR_e_FC_DCDC_IntrlkStat;
        rtb_LeFCPR_b_FC_DCDC_IntrlkStatFA_out_a = false;

        /* Transition: '<S249>:18' */
    }
    else
    {
        /* Transition: '<S249>:4' */
        rtb_LeFCPR_b_FC_DCDC_IntrlkStatFA_out_a = true;
    }

    /* End of Chart: '<S57>/PokeFCPR_e_FC_DCDC_IntrlkStatChrt' */

    /* Outport: '<Root>/VeFCPR_b_FC_DCDC_IntrlkStat_FA' incorporates:
     *  SignalConversion generated from: '<S57>/VeFCPR_b_FC_DCDC_IntrlkStatFA'
     */
    (void)Rte_Write_VeFCPR_b_FC_DCDC_IntrlkStat_FA_Value
        (rtb_LeFCPR_b_FC_DCDC_IntrlkStatFA_out_a);

    /* Outport: '<Root>/VeFCPR_e_FC_DCDC_IntrlkStat' incorporates:
     *  SignalConversion generated from: '<S57>/VeFCPR_e_FC_DCDC_IntrlkStat'
     */
    (void)Rte_Write_VeFCPR_e_FC_DCDC_IntrlkStat_Value
        (FCPR_ac_B.LeFCPR_e_FC_DCDC_IntrlkStat_out);

    /* End of Outputs for SubSystem: '<Root>/PokeFCPR_e_FC_DCDC_IntrlkStat' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) PokeFCPR_e_HEAC_IntrlkStat(VAR(TeHVTR_e_HV_IntrlkStat,
    AUTOMATIC) LeFCPR_e_HEAC_IntrlkStat, VAR(boolean, AUTOMATIC)
    LeFCPR_b_HEAC_IntrlkStatFA)
{

#if Rte_SysCon_Variant_FCPR_1

    boolean rtb_LeFCPR_b_HEAC_IntrlkStatFA_out_n;

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_e_HEAC_IntrlkStat);

#endif

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_b_HEAC_IntrlkStatFA);

#endif

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeFCPR_e_HEAC_IntrlkStat' */
    /* Chart: '<S58>/PokeFCPR_e_HEAC_IntrlkStatChrt' incorporates:
     *  SignalConversion generated from: '<S58>/LeFCPR_b_HEAC_IntrlkStatFA'
     *  SignalConversion generated from: '<S58>/LeFCPR_e_HEAC_IntrlkStat'
     */
    /* Gateway: PokeFCPR_e_HEAC_IntrlkStat/PokeFCPR_e_HEAC_IntrlkStatChrt */
    /* During: PokeFCPR_e_HEAC_IntrlkStat/PokeFCPR_e_HEAC_IntrlkStatChrt */
    /* Entry Internal: PokeFCPR_e_HEAC_IntrlkStat/PokeFCPR_e_HEAC_IntrlkStatChrt */
    /* Transition: '<S250>:2' */
    if (!LeFCPR_b_HEAC_IntrlkStatFA)
    {
        /* Transition: '<S250>:3' */
        /* Transition: '<S250>:15' */
        FCPR_ac_B.LeFCPR_e_HEAC_IntrlkStat_out = LeFCPR_e_HEAC_IntrlkStat;
        rtb_LeFCPR_b_HEAC_IntrlkStatFA_out_n = false;

        /* Transition: '<S250>:18' */
    }
    else
    {
        /* Transition: '<S250>:4' */
        rtb_LeFCPR_b_HEAC_IntrlkStatFA_out_n = true;
    }

    /* End of Chart: '<S58>/PokeFCPR_e_HEAC_IntrlkStatChrt' */

    /* Outport: '<Root>/VeFCPR_b_HEAC_IntrlkStat_FA' incorporates:
     *  SignalConversion generated from: '<S58>/VeFCPR_b_HEAC_IntrlkStatFA'
     */
    (void)Rte_Write_VeFCPR_b_HEAC_IntrlkStat_FA_Value
        (rtb_LeFCPR_b_HEAC_IntrlkStatFA_out_n);

    /* Outport: '<Root>/VeFCPR_e_HEAC_IntrlkStat' incorporates:
     *  SignalConversion generated from: '<S58>/VeFCPR_e_HEAC_IntrlkStat'
     */
    (void)Rte_Write_VeFCPR_e_HEAC_IntrlkStat_Value
        (FCPR_ac_B.LeFCPR_e_HEAC_IntrlkStat_out);

    /* End of Outputs for SubSystem: '<Root>/PokeFCPR_e_HEAC_IntrlkStat' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_FCPR_1

FUNC(void, FCPR_CODE) PokeFCPR_e_UpdateHBridgeDiagData(VAR
    (TeFCPR_e_UpdateHBridgeDiagData, AUTOMATIC) LeFCPR_e_UpdateHBridgeDiagData)
{

#if !Rte_SysCon_Variant_FCPR_1

    UNUSED_PARAMETER(LeFCPR_e_UpdateHBridgeDiagData);

#endif

#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeFCPR_e_UpdateHBridgeDiagData' */
    /* Merge: '<Root>/Merge_22' incorporates:
     *  SignalConversion generated from: '<S59>/LeFCPR_e_UpdateHBridgeDiagData'
     *  SignalConversion generated from: '<S59>/VeFCPR_e_UpdateHBridgeDiagData_write'
     */
    /* Gateway: PokeFCPR_e_UpdateHBridgeDiagData/PokeFCPR_e_UpdateHBridgeDiagDataChrt */
    /* During: PokeFCPR_e_UpdateHBridgeDiagData/PokeFCPR_e_UpdateHBridgeDiagDataChrt */
    /* Entry Internal: PokeFCPR_e_UpdateHBridgeDiagData/PokeFCPR_e_UpdateHBridgeDiagDataChrt */
    /* Transition: '<S251>:2' */
    Rte_IrvWrite_PokeFCPR_e_UpdateHBridgeDiagData_UpdateHBridgeDiagData_Init_write_IRV
        (LeFCPR_e_UpdateHBridgeDiagData);

    /* End of Outputs for SubSystem: '<Root>/PokeFCPR_e_UpdateHBridgeDiagData' */
#endif

}

#endif

/* Output function */
FUNC(void, FCPR_CODE) FCPR_PwrOn(void)
{

#if Rte_SysCon_Variant_FCPR_1

    boolean rtb_OutportBufferForCoverMtrPosnFA_Init_;

#endif

#if Rte_SysCon_Variant_FCPR_1

    float32 rtb_OutportBufferForCoverMtrPosn_Init_wr;

#endif

#if Rte_SysCon_Variant_FCPR_1

    boolean rtb_OutportBufferForHB_SysVoltFA_Init_wr;

#endif

#if Rte_SysCon_Variant_FCPR_1

    float32 rtb_OutportBufferForHB_SysVolt_Init_writ;

#endif

#if Rte_SysCon_Variant_FCPR_1

    TeFCPR_e_UpdateHBridgeDiagData rtb_OutportBufferForUpdateHBridgeDiagDat;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/FCPR_PwrOn'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/FCPI'
     */
    /* SignalConversion generated from: '<S69>/CoverMtrPosnFA_Init' incorporates:
     *  Constant: '<S102>/Calib'
     *  Constant: '<S114>/Calib'
     *  Constant: '<S94>/Calib'
     *  Constant: '<S95>/Calib'
     *  SignalConversion generated from: '<S69>/CoverMtrPosn_Init'
     *  SignalConversion generated from: '<S69>/HB_SysVoltFA_Init'
     *  SignalConversion generated from: '<S69>/HB_SysVolt_Init'
     *  SignalConversion generated from: '<S69>/UpdateHBridgeDiagData_Init'
     */
#if Rte_SysCon_Variant_FCPR_1

    /* Outputs for Atomic SubSystem: '<S70>/Variant_Subsystem' */
    /* Outputs for Atomic SubSystem: '<S71>/InitBlock' */
    /* VariantMerge generated from: '<S71>/LongTiDchaPwrLim_Init' incorporates:
     *  Constant: '<S81>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportLongTiDchaPwrLim_I =
        KeFCPR_P_LongTiDchaPwrLimInit;

    /* VariantMerge generated from: '<S71>/LongTiDchaPwrLimFA_Init' incorporates:
     *  Constant: '<S120>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportLongTiDchaPwrLimFA =
        KeFCPR_b_LongTiDchaPwrLimFAInit;

    /* VariantMerge generated from: '<S71>/ShoTiDchaPwrLim_Init' incorporates:
     *  Constant: '<S85>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportShoTiDchaPwrLim_In =
        KeFCPR_P_ShoTiDchaPwrLimInit;

    /* VariantMerge generated from: '<S71>/ShoTiDchaPwrLimFA_Init' incorporates:
     *  Constant: '<S126>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportShoTiDchaPwrLimFA_ =
        KeFCPR_b_ShoTiDchaPwrLimFAInit;

    /* VariantMerge generated from: '<S71>/LongTiChrgPwrLim_Init' incorporates:
     *  Constant: '<S80>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportLongTiChrgPwrLim_I =
        KeFCPR_P_LongTiChrgPwrLimInit;

    /* VariantMerge generated from: '<S71>/LongTiChrgPwrLimFA_Init' incorporates:
     *  Constant: '<S119>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportLongTiChrgPwrLimFA =
        KeFCPR_b_LongTiChrgPwrLimFAInit;

    /* VariantMerge generated from: '<S71>/ShoTiChrgPwrLim_Init' incorporates:
     *  Constant: '<S84>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportShoTiChrgPwrLim_In =
        KeFCPR_P_ShoTiChrgPwrLimInit;

    /* VariantMerge generated from: '<S71>/ShoTiChrgPwrLimFA_Init' incorporates:
     *  Constant: '<S125>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportShoTiChrgPwrLimFA_ =
        KeFCPR_b_ShoTiChrgPwrLimFAInit;

    /* VariantMerge generated from: '<S71>/StrtUpPwrDmd_Init' incorporates:
     *  Constant: '<S86>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportStrtUpPwrDmd_Init =
        KeFCPR_P_StrtUpPwrDmdInit;

    /* VariantMerge generated from: '<S71>/StrtUpPwrDmdFA_Init' incorporates:
     *  Constant: '<S129>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportStrtUpPwrDmdFA_Ini =
        KeFCPR_b_StrtUpPwrDmdFAInit;

    /* VariantMerge generated from: '<S71>/UpprVoltLim_Init' incorporates:
     *  Constant: '<S97>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportUpprVoltLim_Init = KeFCPR_U_UpprVoltLimInit;

    /* VariantMerge generated from: '<S71>/UpprVoltLimFA_Init' incorporates:
     *  Constant: '<S131>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportUpprVoltLimFA_Init =
        KeFCPR_b_UpprVoltLimFAInit;

    /* VariantMerge generated from: '<S71>/Volt_Init' incorporates:
     *  Constant: '<S98>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportVolt_Init = KeFCPR_U_VoltInit;

    /* VariantMerge generated from: '<S71>/VoltFA_Init' incorporates:
     *  Constant: '<S132>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportVoltFA_Init = KeFCPR_b_VoltFAInit;

    /* VariantMerge generated from: '<S71>/Curr_Init' incorporates:
     *  Constant: '<S77>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportCurr_Init = KeFCPR_I_CurrInit;

    /* VariantMerge generated from: '<S71>/CurrFA_Init' incorporates:
     *  Constant: '<S103>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportCurrFA_Init = KeFCPR_b_CurrFAInit;

    /* VariantMerge generated from: '<S71>/ActPwr_Init' incorporates:
     *  Constant: '<S79>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportActPwr_Init = KeFCPR_P_ActPwrInit;

    /* VariantMerge generated from: '<S71>/ActPwrFA_Init' incorporates:
     *  Constant: '<S101>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportActPwrFA_Init = KeFCPR_b_ActPwrFAInit;

    /* VariantMerge generated from: '<S71>/LowrVoltLim_Init' incorporates:
     *  Constant: '<S96>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportLowrVoltLim_Init = KeFCPR_U_LowrVoltLimInit;

    /* VariantMerge generated from: '<S71>/LowrVoltLimFA_Init' incorporates:
     *  Constant: '<S121>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportLowrVoltLimFA_Init =
        KeFCPR_b_LowrVoltLimFAInit;

    /* VariantMerge generated from: '<S71>/KeepAlive_Req_Init' incorporates:
     *  Constant: '<S118>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportKeepAlive_Req_Init =
        KeFCPR_b_KeepAlive_ReqInit;

    /* VariantMerge generated from: '<S71>/HV_AfterRun_Sts_Init' incorporates:
     *  Constant: '<S116>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportHV_AfterRun_Sts_In =
        KeFCPR_b_HV_AfterRunStsInit;

    /* VariantMerge generated from: '<S71>/H2_Refuel_Sts_Init' incorporates:
     *  Constant: '<S112>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportH2_Refuel_Sts_Init =
        KeFCPR_b_H2_RefuelStsInit;

    /* VariantMerge generated from: '<S71>/FuelLidReq_Init' incorporates:
     *  Constant: '<S111>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFuelLidReq_Init = KeFCPR_b_FuelLidReqInit;

    /* VariantMerge generated from: '<S71>/H2_EquivEgy_Init' incorporates:
     *  Constant: '<S76>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportH2_EquivEgy_Init = KeFCPR_E_H2_EquivEgyInit;

    /* VariantMerge generated from: '<S71>/WU_Tmr_Init' incorporates:
     *  Constant: '<S75>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportWU_Tmr_Init = KeFCPR_Cnt_WU_TmrInit;

    /* VariantMerge generated from: '<S71>/HbridgeEnableControl_Init' incorporates:
     *  Constant: '<S117>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportHbridgeEnableContr =
        KeFCPR_b_HbridgeEnableControlInit;

    /* VariantMerge generated from: '<S71>/SetHbridgePWMOutput_Init' incorporates:
     *  Constant: '<S88>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportSetHbridgePWMOutpu =
        KeFCPR_Pct_SetHbridgePWMOutputInit;

    /* VariantMerge generated from: '<S71>/Solenoid_Flt_Sts_Init' incorporates:
     *  Constant: '<S127>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportSolenoid_Flt_Sts_I =
        KeFCPR_b_SolenoidFltStsInit;

    /* VariantMerge generated from: '<S71>/Solenoid_Sts_Init' incorporates:
     *  Constant: '<S128>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportSolenoid_Sts_Init = KeFCPR_b_SolenoidStsInit;
    FCPR_ac_B.Calib = KeFCPR_U_HB_SysVoltInit;
    FCPR_ac_B.Calib_f = KeFCPR_b_HB_SysVoltFAInit;
    FCPR_ac_B.Calib_k = KeFCPR_U_CoverMtrPosnInit;
    FCPR_ac_B.Calib_b = KeFCPR_b_CoverMtrPosnFAInit;

    /* VariantMerge generated from: '<S71>/ActFCPSPwrCnspt_Init' incorporates:
     *  Constant: '<S102>/Calib'
     *  Constant: '<S114>/Calib'
     *  Constant: '<S78>/Calib'
     *  Constant: '<S94>/Calib'
     *  Constant: '<S95>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportActFCPSPwrCnspt_In =
        KeFCPR_P_ActFCPSPwrCnsptInit;

    /* VariantMerge generated from: '<S71>/ActFCPSPwrCnsptFA_Init' incorporates:
     *  Constant: '<S99>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportActFCPSPwrCnsptFA_ =
        KeFCPR_b_ActFCPSPwrCnsptFAInit;

    /* VariantMerge generated from: '<S71>/ActMod_Init' incorporates:
     *  Constant: '<S133>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportActMod_Init = KeFCPR_e_ActModInit;

    /* VariantMerge generated from: '<S71>/ActModFA_Init' incorporates:
     *  Constant: '<S100>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportActModFA_Init = KeFCPR_b_ActModFAInit;

    /* VariantMerge generated from: '<S71>/MaxAvailFCPSPwr_Init' incorporates:
     *  Constant: '<S82>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportMaxAvailFCPSPwr_In =
        KeFCPR_P_MaxAvailFCPSPwrInit;

    /* VariantMerge generated from: '<S71>/MaxAvailFCPSPwrFA_Init' incorporates:
     *  Constant: '<S122>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportMaxAvailFCPSPwrFA_ =
        KeFCPR_b_MaxAvailFCPSPwrFAInit;

    /* VariantMerge generated from: '<S71>/ReqdMinFCPSPwr_Init' incorporates:
     *  Constant: '<S83>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportReqdMinFCPSPwr_Ini =
        KeFCPR_P_ReqdMinFCPSPwrInit;

    /* VariantMerge generated from: '<S71>/ReqdMinFCPSPwrFA_Init' incorporates:
     *  Constant: '<S123>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportReqdMinFCPSPwrFA_I =
        KeFCPR_b_ReqdMinFCPSPwrFAInit;

    /* VariantMerge generated from: '<S71>/RunReqToEVCU_Init' incorporates:
     *  Constant: '<S124>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportRunReqToEVCU_Init =
        KeFCPR_b_RunReqToEVCUInit;

    /* VariantMerge generated from: '<S71>/FCPS_LTCoolMaxTemp_Init' incorporates:
     *  Constant: '<S93>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_LTCoolMaxTemp =
        KeFCPR_T_FCPS_LTCoolMaxTempInit;

    /* VariantMerge generated from: '<S71>/FCPS_HTCoolDeltaSp_Init' incorporates:
     *  Constant: '<S89>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolDeltaSp =
        KeFCPR_T_FCPS_HTCoolDeltaSpInit;

    /* VariantMerge generated from: '<S71>/FCPS_HTCoolOutTemp_Init' incorporates:
     *  Constant: '<S91>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolOutTe_i =
        KeFCPR_T_FCPS_HTCoolOutTempInit;

    /* VariantMerge generated from: '<S71>/FCPS_HTCoolReq_Init' incorporates:
     *  Constant: '<S134>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolReq_Ini =
        KeFCPR_e_FCPS_HTCoolReqInit;

    /* VariantMerge generated from: '<S71>/FCPS_HTCoolInTemp_Init' incorporates:
     *  Constant: '<S90>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolInTemp_ =
        KeFCPR_T_FCPS_HTCoolInTempInit;

    /* VariantMerge generated from: '<S71>/FC_DCDC_IntrlkStat_Init' incorporates:
     *  Constant: '<S135>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFC_DCDC_IntrlkSt_m =
        KeFCPR_e_FC_DCDC_IntrlkStatInit;

    /* VariantMerge generated from: '<S71>/FCPS_LTCoolMaxTempFA_Init' incorporates:
     *  Constant: '<S109>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_LTCoolMaxTe_f =
        KeFCPR_b_FCPS_LTCoolMaxTempFAInit;

    /* VariantMerge generated from: '<S71>/FCPS_HTCoolDeltaSpFA_Init' incorporates:
     *  Constant: '<S104>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolDelta_f =
        KeFCPR_b_FCPS_HTCoolDeltaSpFAInit;

    /* VariantMerge generated from: '<S71>/FCPS_HTCoolOutTempFA_Init' incorporates:
     *  Constant: '<S106>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolOutT_is =
        KeFCPR_b_FCPS_HTCoolOutTempFAInit;

    /* VariantMerge generated from: '<S71>/FCPS_HTCoolReqFA_Init' incorporates:
     *  Constant: '<S108>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolReqFA_I =
        KeFCPR_b_FCPS_HTCoolReqFAInit;

    /* VariantMerge generated from: '<S71>/FCPS_HTCoolInTempFA_Init' incorporates:
     *  Constant: '<S105>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolInTempF =
        KeFCPR_b_FCPS_HTCoolInTempFAInit;

    /* VariantMerge generated from: '<S71>/FCPS_HTCoolOutTempSpFA_Init' incorporates:
     *  Constant: '<S107>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolOutTe_d =
        KeFCPR_b_FCPS_HTCoolOutTempSpFAInit;

    /* VariantMerge generated from: '<S71>/FC_DCDC_IntrlkStatFA_Init' incorporates:
     *  Constant: '<S110>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFC_DCDC_IntrlkStat =
        KeFCPR_b_FC_DCDC_IntrlkStatFAInit;

    /* VariantMerge generated from: '<S71>/HEAC_IntrlkStatFA_Init' incorporates:
     *  Constant: '<S115>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportHEAC_IntrlkStatFA_ =
        KeFCPR_b_HEAC_IntrlkStatFAInit;

    /* VariantMerge generated from: '<S71>/H2_SolenoidReq_Init' incorporates:
     *  Constant: '<S113>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportH2_SolenoidReq_Ini =
        KeFCPR_b_H2_SolenoidReqInit;

    /* VariantMerge generated from: '<S71>/FCPS_HTCoolOutTempSp_Init' incorporates:
     *  Constant: '<S92>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolOutTemp =
        KeFCPR_T_FCPS_HTCoolOutTempSpInit;

    /* VariantMerge generated from: '<S71>/HEAC_IntrlkStat_Init' incorporates:
     *  Constant: '<S136>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportHEAC_IntrlkStat_In =
        KeFCPR_e_HEAC_IntrlkStatInit;

    /* VariantMerge generated from: '<S71>/ThermPwrCnsReq_Init' incorporates:
     *  Constant: '<S87>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportThermPwrCnsReq_Ini =
        KeFCPR_P_ThermPwrCnsReqInit;

    /* VariantMerge generated from: '<S71>/ThermPwrCnsReqFA_Init' incorporates:
     *  Constant: '<S130>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportThermPwrCnsReqFA_I =
        KeFCPR_b_ThermPwrCnsReqFAInit;

    /* SignalConversion generated from: '<S69>/CoverMtrPosnFA_Init' */
    FCPR_ac_B.OutportBufferForCoverMtrPosnFA_Init = FCPR_ac_B.Calib_b;

    /* SignalConversion generated from: '<S69>/CoverMtrPosn_Init' */
    FCPR_ac_B.OutportBufferForCoverMtrPosn_Init = FCPR_ac_B.Calib_k;

    /* SignalConversion generated from: '<S69>/HB_SysVoltFA_Init' */
    FCPR_ac_B.OutportBufferForHB_SysVoltFA_Init = FCPR_ac_B.Calib_f;

    /* SignalConversion generated from: '<S69>/HB_SysVolt_Init' */
    FCPR_ac_B.OutportBufferForHB_SysVolt_Init = FCPR_ac_B.Calib;

    /* SignalConversion generated from: '<S69>/UpdateHBridgeDiagData_Init' incorporates:
     *  Constant: '<S74>/Constant'
     */
    FCPR_ac_B.OutportBufferForUpdateHBridgeDiagData_In = FCPR_ac_ConstB.Constant;

    /* End of Outputs for SubSystem: '<S71>/InitBlock' */
    /* End of Outputs for SubSystem: '<S70>/Variant_Subsystem' */
#else

    /* Outputs for Atomic SubSystem: '<S71>/StubBlock' */
    /* VariantMerge generated from: '<S71>/LongTiDchaPwrLim_Init' incorporates:
     *  Constant: '<S143>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportLongTiDchaPwrLim_I =
        KeFCPR_P_LongTiDchaPwrLimStub;

    /* VariantMerge generated from: '<S71>/LongTiDchaPwrLimFA_Init' incorporates:
     *  Constant: '<S178>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportLongTiDchaPwrLimFA =
        KeFCPR_b_LongTiDchaPwrLimFAStub;

    /* VariantMerge generated from: '<S71>/ShoTiDchaPwrLim_Init' incorporates:
     *  Constant: '<S147>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportShoTiDchaPwrLim_In =
        KeFCPR_P_ShoTiDchaPwrLimStub;

    /* VariantMerge generated from: '<S71>/ShoTiDchaPwrLimFA_Init' incorporates:
     *  Constant: '<S184>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportShoTiDchaPwrLimFA_ =
        KeFCPR_b_ShoTiDchaPwrLimFAStub;

    /* VariantMerge generated from: '<S71>/LongTiChrgPwrLim_Init' incorporates:
     *  Constant: '<S142>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportLongTiChrgPwrLim_I =
        KeFCPR_P_LongTiChrgPwrLimStub;

    /* VariantMerge generated from: '<S71>/LongTiChrgPwrLimFA_Init' incorporates:
     *  Constant: '<S177>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportLongTiChrgPwrLimFA =
        KeFCPR_b_LongTiChrgPwrLimFAStub;

    /* VariantMerge generated from: '<S71>/ShoTiChrgPwrLim_Init' incorporates:
     *  Constant: '<S146>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportShoTiChrgPwrLim_In =
        KeFCPR_P_ShoTiChrgPwrLimStub;

    /* VariantMerge generated from: '<S71>/ShoTiChrgPwrLimFA_Init' incorporates:
     *  Constant: '<S183>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportShoTiChrgPwrLimFA_ =
        KeFCPR_b_ShoTiChrgPwrLimFAStub;

    /* VariantMerge generated from: '<S71>/StrtUpPwrDmd_Init' incorporates:
     *  Constant: '<S148>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportStrtUpPwrDmd_Init =
        KeFCPR_P_StrtUpPwrDmdStub;

    /* VariantMerge generated from: '<S71>/StrtUpPwrDmdFA_Init' incorporates:
     *  Constant: '<S187>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportStrtUpPwrDmdFA_Ini =
        KeFCPR_b_StrtUpPwrDmdFAStub;

    /* VariantMerge generated from: '<S71>/UpprVoltLim_Init' incorporates:
     *  Constant: '<S157>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportUpprVoltLim_Init = KeFCPR_U_UpprVoltLimStub;

    /* VariantMerge generated from: '<S71>/UpprVoltLimFA_Init' incorporates:
     *  Constant: '<S189>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportUpprVoltLimFA_Init =
        KeFCPR_b_UpprVoltLimFAStub;

    /* VariantMerge generated from: '<S71>/Volt_Init' incorporates:
     *  Constant: '<S158>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportVolt_Init = KeFCPR_U_VoltStub;

    /* VariantMerge generated from: '<S71>/VoltFA_Init' incorporates:
     *  Constant: '<S190>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportVoltFA_Init = KeFCPR_b_VoltFAStub;

    /* VariantMerge generated from: '<S71>/Curr_Init' incorporates:
     *  Constant: '<S139>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportCurr_Init = KeFCPR_I_CurrStub;

    /* VariantMerge generated from: '<S71>/ActPwr_Init' incorporates:
     *  Constant: '<S141>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportActPwr_Init = KeFCPR_P_ActPwrStub;

    /* VariantMerge generated from: '<S71>/ActPwrFA_Init' incorporates:
     *  Constant: '<S161>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportActPwrFA_Init = KeFCPR_b_ActPwrFAStub;

    /* VariantMerge generated from: '<S71>/LowrVoltLim_Init' incorporates:
     *  Constant: '<S156>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportLowrVoltLim_Init = KeFCPR_U_LowrVoltLimStub;

    /* VariantMerge generated from: '<S71>/LowrVoltLimFA_Init' incorporates:
     *  Constant: '<S179>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportLowrVoltLimFA_Init =
        KeFCPR_b_LowrVoltLimFAStub;

    /* VariantMerge generated from: '<S71>/KeepAlive_Req_Init' incorporates:
     *  Constant: '<S176>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportKeepAlive_Req_Init =
        KeFCPR_b_KeepAliveReqStub;

    /* VariantMerge generated from: '<S71>/HV_AfterRun_Sts_Init' incorporates:
     *  Constant: '<S174>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportHV_AfterRun_Sts_In =
        KeFCPR_b_HV_AfterRunStsStub;

    /* VariantMerge generated from: '<S71>/H2_Refuel_Sts_Init' incorporates:
     *  Constant: '<S171>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportH2_Refuel_Sts_Init =
        KeFCPR_b_H2_RefuelStsStub;

    /* VariantMerge generated from: '<S71>/FuelLidReq_Init' incorporates:
     *  Constant: '<S170>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFuelLidReq_Init = KeFCPR_b_FuelLidReqStub;

    /* VariantMerge generated from: '<S71>/H2_EquivEgy_Init' incorporates:
     *  Constant: '<S138>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportH2_EquivEgy_Init = KeFCPR_E_H2_EquivEgyStub;

    /* VariantMerge generated from: '<S71>/WU_Tmr_Init' incorporates:
     *  Constant: '<S137>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportWU_Tmr_Init = KeFCPR_Cnt_WU_TmrStub;

    /* VariantMerge generated from: '<S71>/HbridgeEnableControl_Init' incorporates:
     *  Constant: '<S175>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportHbridgeEnableContr =
        KeFCPR_b_HbridgeEnableControlStub;

    /* VariantMerge generated from: '<S71>/SetHbridgePWMOutput_Init' incorporates:
     *  Constant: '<S150>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportSetHbridgePWMOutpu =
        KeFCPR_Pct_SetHbridgePWMOutputStub;

    /* VariantMerge generated from: '<S71>/Solenoid_Flt_Sts_Init' incorporates:
     *  Constant: '<S185>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportSolenoid_Flt_Sts_I =
        KeFCPR_b_SolenoidFltStsStub;

    /* VariantMerge generated from: '<S71>/Solenoid_Sts_Init' incorporates:
     *  Constant: '<S186>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportSolenoid_Sts_Init = KeFCPR_b_SolenoidStsStub;

    /* VariantMerge generated from: '<S71>/CurrFA_Init' incorporates:
     *  Constant: '<S162>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportCurrFA_Init = KeFCPR_b_CurrFAStub;

    /* VariantMerge generated from: '<S71>/ActFCPSPwrCnspt_Init' incorporates:
     *  Constant: '<S140>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportActFCPSPwrCnspt_In =
        KeFCPR_P_ActFCPSPwrCnsptStub;

    /* VariantMerge generated from: '<S71>/ActFCPSPwrCnsptFA_Init' incorporates:
     *  Constant: '<S159>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportActFCPSPwrCnsptFA_ =
        KeFCPR_b_ActFCPSPwrCnsptFAStub;

    /* VariantMerge generated from: '<S71>/ActMod_Init' incorporates:
     *  Constant: '<S191>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportActMod_Init = KeFCPR_e_ActModStub;

    /* VariantMerge generated from: '<S71>/ActModFA_Init' incorporates:
     *  Constant: '<S160>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportActModFA_Init = KeFCPR_b_ActModFAStub;

    /* VariantMerge generated from: '<S71>/MaxAvailFCPSPwr_Init' incorporates:
     *  Constant: '<S144>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportMaxAvailFCPSPwr_In =
        KeFCPR_P_MaxAvailFCPSPwrStub;

    /* VariantMerge generated from: '<S71>/MaxAvailFCPSPwrFA_Init' incorporates:
     *  Constant: '<S180>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportMaxAvailFCPSPwrFA_ =
        KeFCPR_b_MaxAvailFCPSPwrFAStub;

    /* VariantMerge generated from: '<S71>/ReqdMinFCPSPwr_Init' incorporates:
     *  Constant: '<S145>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportReqdMinFCPSPwr_Ini =
        KeFCPR_P_ReqdMinFCPSPwrStub;

    /* VariantMerge generated from: '<S71>/ReqdMinFCPSPwrFA_Init' incorporates:
     *  Constant: '<S181>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportReqdMinFCPSPwrFA_I =
        KeFCPR_b_ReqdMinFCPSPwrFAStub;

    /* VariantMerge generated from: '<S71>/RunReqToEVCU_Init' incorporates:
     *  Constant: '<S182>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportRunReqToEVCU_Init =
        KeFCPR_b_RunReqToEVCUStub;

    /* VariantMerge generated from: '<S71>/FCPS_LTCoolMaxTemp_Init' incorporates:
     *  Constant: '<S155>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_LTCoolMaxTemp =
        KeFCPR_T_FCPS_LTCoolMaxTempStub;

    /* VariantMerge generated from: '<S71>/FCPS_HTCoolDeltaSp_Init' incorporates:
     *  Constant: '<S151>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolDeltaSp =
        KeFCPR_T_FCPS_HTCoolDeltaSpStub;

    /* VariantMerge generated from: '<S71>/FCPS_HTCoolOutTemp_Init' incorporates:
     *  Constant: '<S154>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolOutTe_i =
        KeFCPR_T_FCPS_HTCoolOutTempStub;

    /* VariantMerge generated from: '<S71>/FCPS_HTCoolReq_Init' incorporates:
     *  Constant: '<S192>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolReq_Ini =
        KeFCPR_e_FCPS_HTCoolReqStub;

    /* VariantMerge generated from: '<S71>/FCPS_HTCoolInTemp_Init' incorporates:
     *  Constant: '<S152>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolInTemp_ =
        KeFCPR_T_FCPS_HTCoolInTempStub;

    /* VariantMerge generated from: '<S71>/FC_DCDC_IntrlkStat_Init' incorporates:
     *  Constant: '<S193>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFC_DCDC_IntrlkSt_m =
        KeFCPR_e_FC_DCDC_IntrlkStatStub;

    /* VariantMerge generated from: '<S71>/FCPS_LTCoolMaxTempFA_Init' incorporates:
     *  Constant: '<S168>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_LTCoolMaxTe_f =
        KeFCPR_b_FCPS_LTCoolMaxTempFAStub;

    /* VariantMerge generated from: '<S71>/FCPS_HTCoolDeltaSpFA_Init' incorporates:
     *  Constant: '<S163>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolDelta_f =
        KeFCPR_b_FCPS_HTCoolDeltaSpFAStub;

    /* VariantMerge generated from: '<S71>/FCPS_HTCoolOutTempFA_Init' incorporates:
     *  Constant: '<S165>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolOutT_is =
        KeFCPR_b_FCPS_HTCoolOutTempFAStub;

    /* VariantMerge generated from: '<S71>/FCPS_HTCoolReqFA_Init' incorporates:
     *  Constant: '<S167>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolReqFA_I =
        KeFCPR_b_FCPS_HTCoolReqFAStub;

    /* VariantMerge generated from: '<S71>/FCPS_HTCoolInTempFA_Init' incorporates:
     *  Constant: '<S164>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolInTempF =
        KeFCPR_b_FCPS_HTCoolInTempFAStub;

    /* VariantMerge generated from: '<S71>/FCPS_HTCoolOutTempSpFA_Init' incorporates:
     *  Constant: '<S166>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolOutTe_d =
        KeFCPR_b_FCPS_HTCoolOutTempSpFAStub;

    /* VariantMerge generated from: '<S71>/FC_DCDC_IntrlkStatFA_Init' incorporates:
     *  Constant: '<S169>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFC_DCDC_IntrlkStat =
        KeFCPR_b_FC_DCDC_IntrlkStatFAStub;

    /* VariantMerge generated from: '<S71>/HEAC_IntrlkStatFA_Init' incorporates:
     *  Constant: '<S173>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportHEAC_IntrlkStatFA_ =
        KeFCPR_b_HEAC_IntrlkStatFAStub;

    /* VariantMerge generated from: '<S71>/H2_SolenoidReq_Init' incorporates:
     *  Constant: '<S172>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportH2_SolenoidReq_Ini =
        KeFCPR_b_H2_SolenoidReqStub;

    /* VariantMerge generated from: '<S71>/FCPS_HTCoolOutTempSp_Init' incorporates:
     *  Constant: '<S153>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolOutTemp =
        KeFCPR_T_FCPS_HTCoolOutTempSpStub;

    /* VariantMerge generated from: '<S71>/HEAC_IntrlkStat_Init' incorporates:
     *  Constant: '<S194>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportHEAC_IntrlkStat_In =
        KeFCPR_e_HEAC_IntrlkStatStub;

    /* VariantMerge generated from: '<S71>/ThermPwrCnsReq_Init' incorporates:
     *  Constant: '<S149>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportThermPwrCnsReq_Ini =
        KeFCPR_P_ThermPwrCnsReqStub;

    /* VariantMerge generated from: '<S71>/ThermPwrCnsReqFA_Init' incorporates:
     *  Constant: '<S188>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportThermPwrCnsReqFA_I =
        KeFCPR_b_ThermPwrCnsReqFAStub;

    /* End of Outputs for SubSystem: '<S71>/StubBlock' */
#endif

    /* End of SignalConversion generated from: '<S69>/CoverMtrPosnFA_Init' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeFCPR_b_FCPS_ActFCPSPwrCnspt_FA' incorporates:
     *  SignalConversion generated from: '<S2>/ActFCPSPwrCnsptFA_Init'
     */
    (void)Rte_Write_VeFCPR_b_FCPS_ActFCPSPwrCnspt_FA_Value
        (FCPR_ac_B.VariantMergeForOutportActFCPSPwrCnsptFA_);

    /* Outport: '<Root>/VeFCPR_P_FCPS_ActFCPSPwrCnspt' incorporates:
     *  SignalConversion generated from: '<S2>/ActFCPSPwrCnspt_Init'
     */
    (void)Rte_Write_VeFCPR_P_FCPS_ActFCPSPwrCnspt_Value
        (FCPR_ac_B.VariantMergeForOutportActFCPSPwrCnspt_In);

    /* Outport: '<Root>/VeFCPR_b_ActualMode_FA' incorporates:
     *  SignalConversion generated from: '<S2>/ActModFA_Init'
     */
    (void)Rte_Write_VeFCPR_b_ActualMode_FA_Value
        (FCPR_ac_B.VariantMergeForOutportActModFA_Init);

    /* Outport: '<Root>/VeFCPR_e_ActualMode' incorporates:
     *  SignalConversion generated from: '<S2>/ActMod_Init'
     *  VariantMerge generated from: '<S71>/ActMod_Init'
     */
    (void)Rte_Write_VeFCPR_e_ActualMode_Value
        (FCPR_ac_B.VariantMergeForOutportActMod_Init);

    /* Outport: '<Root>/VeFCPR_b_FCPS_ActPwr_FA' incorporates:
     *  SignalConversion generated from: '<S2>/ActPwrFA_Init'
     */
    (void)Rte_Write_VeFCPR_b_FCPS_ActPwr_FA_Value
        (FCPR_ac_B.VariantMergeForOutportActPwrFA_Init);

    /* Outport: '<Root>/VeFCPR_P_FCPS_ActPwr' incorporates:
     *  SignalConversion generated from: '<S2>/ActPwr_Init'
     */
    (void)Rte_Write_VeFCPR_P_FCPS_ActPwr_Value
        (FCPR_ac_B.VariantMergeForOutportActPwr_Init);

    /* SignalConversion generated from: '<S2>/CoverMtrPosnFA_Init_write' incorporates:
     *  SignalConversion generated from: '<S2>/CoverMtrPosn_Init_write'
     */
#if Rte_SysCon_Variant_FCPR_1

    /* SignalConversion generated from: '<S2>/CoverMtrPosnFA_Init_write' */
    rtb_OutportBufferForCoverMtrPosnFA_Init_ =
        FCPR_ac_B.OutportBufferForCoverMtrPosnFA_Init;

    /* SignalConversion generated from: '<S2>/CoverMtrPosn_Init_write' */
    rtb_OutportBufferForCoverMtrPosn_Init_wr =
        FCPR_ac_B.OutportBufferForCoverMtrPosn_Init;

#endif

    /* End of SignalConversion generated from: '<S2>/CoverMtrPosnFA_Init_write' */

    /* Outport: '<Root>/VeFCPR_b_FCPS_Curr_FA' incorporates:
     *  SignalConversion generated from: '<S2>/CurrFA_Init'
     */
    (void)Rte_Write_VeFCPR_b_FCPS_Curr_FA_Value
        (FCPR_ac_B.VariantMergeForOutportCurrFA_Init);

    /* Outport: '<Root>/VeFCPR_I_FCPS_Curr' incorporates:
     *  SignalConversion generated from: '<S2>/Curr_Init'
     */
    (void)Rte_Write_VeFCPR_I_FCPS_Curr_Value
        (FCPR_ac_B.VariantMergeForOutportCurr_Init);

    /* Outport: '<Root>/VeFCPR_b_FCPS_HTCoolDeltaSp_FA' incorporates:
     *  SignalConversion generated from: '<S2>/FCPS_HTCoolDeltaSpFA_Init'
     */
    (void)Rte_Write_VeFCPR_b_FCPS_HTCoolDeltaSp_FA_Value
        (FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolDelta_f);

    /* Outport: '<Root>/VeFCPR_T_FCPS_HTCoolDeltaSp' incorporates:
     *  SignalConversion generated from: '<S2>/FCPS_HTCoolDeltaSp_Init'
     */
    (void)Rte_Write_VeFCPR_T_FCPS_HTCoolDeltaSp_Value
        (FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolDeltaSp);

    /* Outport: '<Root>/VeFCPR_b_FCPS_HTCoolInTemp_FA' incorporates:
     *  SignalConversion generated from: '<S2>/FCPS_HTCoolInTempFA_Init'
     */
    (void)Rte_Write_VeFCPR_b_FCPS_HTCoolInTemp_FA_Value
        (FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolInTempF);

    /* Outport: '<Root>/VeFCPR_T_FCPS_HTCoolInTemp' incorporates:
     *  SignalConversion generated from: '<S2>/FCPS_HTCoolInTemp_Init'
     */
    (void)Rte_Write_VeFCPR_T_FCPS_HTCoolInTemp_Value
        (FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolInTemp_);

    /* Outport: '<Root>/VeFCPR_b_FCPS_HTCoolOutTemp_FA' incorporates:
     *  SignalConversion generated from: '<S2>/FCPS_HTCoolOutTempFA_Init'
     */
    (void)Rte_Write_VeFCPR_b_FCPS_HTCoolOutTemp_FA_Value
        (FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolOutT_is);

    /* Outport: '<Root>/VeFCPR_b_FCPS_HTCoolOutTempSp_FA' incorporates:
     *  SignalConversion generated from: '<S2>/FCPS_HTCoolOutTempSpFA_Init'
     */
    (void)Rte_Write_VeFCPR_b_FCPS_HTCoolOutTempSp_FA_Value
        (FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolOutTe_d);

    /* Outport: '<Root>/VeFCPR_T_FCPS_HTCoolOutTempSp' incorporates:
     *  SignalConversion generated from: '<S2>/FCPS_HTCoolOutTempSp_Init'
     */
    (void)Rte_Write_VeFCPR_T_FCPS_HTCoolOutTempSp_Value
        (FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolOutTemp);

    /* Outport: '<Root>/VeFCPR_T_FCPS_HTCoolOutTemp' incorporates:
     *  SignalConversion generated from: '<S2>/FCPS_HTCoolOutTemp_Init'
     */
    (void)Rte_Write_VeFCPR_T_FCPS_HTCoolOutTemp_Value
        (FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolOutTe_i);

    /* Outport: '<Root>/VeFCPR_b_FCPS_HTCoolReq_FA' incorporates:
     *  SignalConversion generated from: '<S2>/FCPS_HTCoolReqFA_Init'
     */
    (void)Rte_Write_VeFCPR_b_FCPS_HTCoolReq_FA_Value
        (FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolReqFA_I);

    /* Outport: '<Root>/VeFCPR_e_FCPS_HTCoolReq' incorporates:
     *  SignalConversion generated from: '<S2>/FCPS_HTCoolReq_Init'
     *  VariantMerge generated from: '<S71>/FCPS_HTCoolReq_Init'
     */
    (void)Rte_Write_VeFCPR_e_FCPS_HTCoolReq_Value
        (FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolReq_Ini);

    /* Outport: '<Root>/VeFCPR_b_FCPS_LTCoolMaxTemp_FA' incorporates:
     *  SignalConversion generated from: '<S2>/FCPS_LTCoolMaxTempFA_Init'
     */
    (void)Rte_Write_VeFCPR_b_FCPS_LTCoolMaxTemp_FA_Value
        (FCPR_ac_B.VariantMergeForOutportFCPS_LTCoolMaxTe_f);

    /* Outport: '<Root>/VeFCPR_T_FCPS_LTCoolMaxTemp' incorporates:
     *  SignalConversion generated from: '<S2>/FCPS_LTCoolMaxTemp_Init'
     */
    (void)Rte_Write_VeFCPR_T_FCPS_LTCoolMaxTemp_Value
        (FCPR_ac_B.VariantMergeForOutportFCPS_LTCoolMaxTemp);

    /* Outport: '<Root>/VeFCPR_b_FC_DCDC_IntrlkStat_FA' incorporates:
     *  SignalConversion generated from: '<S2>/FC_DCDC_IntrlkStatFA_Init'
     */
    (void)Rte_Write_VeFCPR_b_FC_DCDC_IntrlkStat_FA_Value
        (FCPR_ac_B.VariantMergeForOutportFC_DCDC_IntrlkStat);

    /* Outport: '<Root>/VeFCPR_e_FC_DCDC_IntrlkStat' incorporates:
     *  SignalConversion generated from: '<S2>/FC_DCDC_IntrlkStat_Init'
     *  VariantMerge generated from: '<S71>/FC_DCDC_IntrlkStat_Init'
     */
    (void)Rte_Write_VeFCPR_e_FC_DCDC_IntrlkStat_Value
        (FCPR_ac_B.VariantMergeForOutportFC_DCDC_IntrlkSt_m);

    /* Outport: '<Root>/VeFCPR_b_FuelLidReq' incorporates:
     *  SignalConversion generated from: '<S2>/FuelLidReq_Init'
     */
    (void)Rte_Write_VeFCPR_b_FuelLidReq_Value
        (FCPR_ac_B.VariantMergeForOutportFuelLidReq_Init);

    /* Outport: '<Root>/VeFCPR_E_FCPS_H2_EquivEgy' incorporates:
     *  SignalConversion generated from: '<S2>/H2_EquivEgy_Init'
     */
    (void)Rte_Write_VeFCPR_E_FCPS_H2_EquivEgy_Value
        (FCPR_ac_B.VariantMergeForOutportH2_EquivEgy_Init);

    /* Outport: '<Root>/VeFCPR_b_FCPS_H2_RefuelSts' incorporates:
     *  SignalConversion generated from: '<S2>/H2_Refuel_Sts_Init'
     */
    (void)Rte_Write_VeFCPR_b_FCPS_H2_RefuelSts_Value
        (FCPR_ac_B.VariantMergeForOutportH2_Refuel_Sts_Init);

    /* Outport: '<Root>/VeFCPR_b_H2_Solenoid_Req' incorporates:
     *  SignalConversion generated from: '<S2>/H2_SolenoidReq_Init'
     */
    (void)Rte_Write_VeFCPR_b_H2_Solenoid_Req_Value
        (FCPR_ac_B.VariantMergeForOutportH2_SolenoidReq_Ini);

    /* SignalConversion generated from: '<S2>/HB_SysVoltFA_Init_write' incorporates:
     *  SignalConversion generated from: '<S2>/HB_SysVolt_Init_write'
     */
#if Rte_SysCon_Variant_FCPR_1

    /* SignalConversion generated from: '<S2>/HB_SysVoltFA_Init_write' */
    rtb_OutportBufferForHB_SysVoltFA_Init_wr =
        FCPR_ac_B.OutportBufferForHB_SysVoltFA_Init;

    /* SignalConversion generated from: '<S2>/HB_SysVolt_Init_write' */
    rtb_OutportBufferForHB_SysVolt_Init_writ =
        FCPR_ac_B.OutportBufferForHB_SysVolt_Init;

#endif

    /* End of SignalConversion generated from: '<S2>/HB_SysVoltFA_Init_write' */

    /* Outport: '<Root>/VeFCPR_b_HEAC_IntrlkStat_FA' incorporates:
     *  SignalConversion generated from: '<S2>/HEAC_IntrlkStatFA_Init'
     */
    (void)Rte_Write_VeFCPR_b_HEAC_IntrlkStat_FA_Value
        (FCPR_ac_B.VariantMergeForOutportHEAC_IntrlkStatFA_);

    /* Outport: '<Root>/VeFCPR_e_HEAC_IntrlkStat' incorporates:
     *  SignalConversion generated from: '<S2>/HEAC_IntrlkStat_Init'
     *  VariantMerge generated from: '<S71>/HEAC_IntrlkStat_Init'
     */
    (void)Rte_Write_VeFCPR_e_HEAC_IntrlkStat_Value
        (FCPR_ac_B.VariantMergeForOutportHEAC_IntrlkStat_In);

    /* Outport: '<Root>/VeFCPR_b_FCPS_HV_AfterRunSts' incorporates:
     *  SignalConversion generated from: '<S2>/HV_AfterRun_Sts_Init'
     */
    (void)Rte_Write_VeFCPR_b_FCPS_HV_AfterRunSts_Value
        (FCPR_ac_B.VariantMergeForOutportHV_AfterRun_Sts_In);

    /* Outport: '<Root>/VeFCPR_b_HbridgeEnableControl' incorporates:
     *  SignalConversion generated from: '<S2>/HbridgeEnableControl_Init'
     */
    (void)Rte_Write_VeFCPR_b_HbridgeEnableControl_Value
        (FCPR_ac_B.VariantMergeForOutportHbridgeEnableContr);

    /* Outport: '<Root>/VeFCPR_b_FCPS_KeepAliveReq' incorporates:
     *  SignalConversion generated from: '<S2>/KeepAlive_Req_Init'
     */
    (void)Rte_Write_VeFCPR_b_FCPS_KeepAliveReq_Value
        (FCPR_ac_B.VariantMergeForOutportKeepAlive_Req_Init);

    /* Outport: '<Root>/VeFCPR_b_FCPS_LongTiChrgPwrLim_FA' incorporates:
     *  SignalConversion generated from: '<S2>/LongTiChrgPwrLimFA_Init'
     */
    (void)Rte_Write_VeFCPR_b_FCPS_LongTiChrgPwrLim_FA_Value
        (FCPR_ac_B.VariantMergeForOutportLongTiChrgPwrLimFA);

    /* Outport: '<Root>/VeFCPR_P_FCPS_LongTiChrgPwrLim' incorporates:
     *  SignalConversion generated from: '<S2>/LongTiChrgPwrLim_Init'
     */
    (void)Rte_Write_VeFCPR_P_FCPS_LongTiChrgPwrLim_Value
        (FCPR_ac_B.VariantMergeForOutportLongTiChrgPwrLim_I);

    /* Outport: '<Root>/VeFCPR_b_FCPS_LongTiDchaPwrLim_FA' incorporates:
     *  SignalConversion generated from: '<S2>/LongTiDchaPwrLimFA_Init'
     */
    (void)Rte_Write_VeFCPR_b_FCPS_LongTiDchaPwrLim_FA_Value
        (FCPR_ac_B.VariantMergeForOutportLongTiDchaPwrLimFA);

    /* Outport: '<Root>/VeFCPR_P_FCPS_LongTiDchaPwrLim' incorporates:
     *  SignalConversion generated from: '<S2>/LongTiDchaPwrLim_Init'
     */
    (void)Rte_Write_VeFCPR_P_FCPS_LongTiDchaPwrLim_Value
        (FCPR_ac_B.VariantMergeForOutportLongTiDchaPwrLim_I);

    /* Outport: '<Root>/VeFCPR_b_FCPS_LowerVoltLIM_FA' incorporates:
     *  SignalConversion generated from: '<S2>/LowrVoltLimFA_Init'
     */
    (void)Rte_Write_VeFCPR_b_FCPS_LowerVoltLIM_FA_Value
        (FCPR_ac_B.VariantMergeForOutportLowrVoltLimFA_Init);

    /* Outport: '<Root>/VeFCPR_U_FCPS_LowerVoltLIM' incorporates:
     *  SignalConversion generated from: '<S2>/LowrVoltLim_Init'
     */
    (void)Rte_Write_VeFCPR_U_FCPS_LowerVoltLIM_Value
        (FCPR_ac_B.VariantMergeForOutportLowrVoltLim_Init);

    /* Outport: '<Root>/VeFCPR_b_FCPS_MaxAvailFCPSPwr_FA' incorporates:
     *  SignalConversion generated from: '<S2>/MaxAvailFCPSPwrFA_Init'
     */
    (void)Rte_Write_VeFCPR_b_FCPS_MaxAvailFCPSPwr_FA_Value
        (FCPR_ac_B.VariantMergeForOutportMaxAvailFCPSPwrFA_);

    /* Outport: '<Root>/VeFCPR_P_FCPS_MaxAvailFCPSPwr' incorporates:
     *  SignalConversion generated from: '<S2>/MaxAvailFCPSPwr_Init'
     */
    (void)Rte_Write_VeFCPR_P_FCPS_MaxAvailFCPSPwr_Value
        (FCPR_ac_B.VariantMergeForOutportMaxAvailFCPSPwr_In);

    /* Outport: '<Root>/VeFCPR_b_FCPS_ReqdMinFCPSPwr_FA' incorporates:
     *  SignalConversion generated from: '<S2>/ReqdMinFCPSPwrFA_Init'
     */
    (void)Rte_Write_VeFCPR_b_FCPS_ReqdMinFCPSPwr_FA_Value
        (FCPR_ac_B.VariantMergeForOutportReqdMinFCPSPwrFA_I);

    /* Outport: '<Root>/VeFCPR_P_FCPS_ReqdMinFCPSPwr' incorporates:
     *  SignalConversion generated from: '<S2>/ReqdMinFCPSPwr_Init'
     */
    (void)Rte_Write_VeFCPR_P_FCPS_ReqdMinFCPSPwr_Value
        (FCPR_ac_B.VariantMergeForOutportReqdMinFCPSPwr_Ini);

    /* Outport: '<Root>/VeFCPR_b_FCPS_RunReqToEVCU' incorporates:
     *  SignalConversion generated from: '<S2>/RunReqToEVCU_Init'
     */
    (void)Rte_Write_VeFCPR_b_FCPS_RunReqToEVCU_Value
        (FCPR_ac_B.VariantMergeForOutportRunReqToEVCU_Init);

    /* Outport: '<Root>/VeFCPR_Pct_SetHbridgePWMOutput' incorporates:
     *  SignalConversion generated from: '<S2>/SetHbridgePWMOutput_Init'
     */
    (void)Rte_Write_VeFCPR_Pct_SetHbridgePWMOutput_Value
        (FCPR_ac_B.VariantMergeForOutportSetHbridgePWMOutpu);

    /* Outport: '<Root>/VeFCPR_b_FCPS_ShoTiChrgPwrLim_FA' incorporates:
     *  SignalConversion generated from: '<S2>/ShoTiChrgPwrLimFA_Init'
     */
    (void)Rte_Write_VeFCPR_b_FCPS_ShoTiChrgPwrLim_FA_Value
        (FCPR_ac_B.VariantMergeForOutportShoTiChrgPwrLimFA_);

    /* Outport: '<Root>/VeFCPR_P_FCPS_ShoTiChrgPwrLim' incorporates:
     *  SignalConversion generated from: '<S2>/ShoTiChrgPwrLim_Init'
     */
    (void)Rte_Write_VeFCPR_P_FCPS_ShoTiChrgPwrLim_Value
        (FCPR_ac_B.VariantMergeForOutportShoTiChrgPwrLim_In);

    /* Outport: '<Root>/VeFCPR_b_FCPS_ShoTiDchaPwrLim_FA' incorporates:
     *  SignalConversion generated from: '<S2>/ShoTiDchaPwrLimFA_Init'
     */
    (void)Rte_Write_VeFCPR_b_FCPS_ShoTiDchaPwrLim_FA_Value
        (FCPR_ac_B.VariantMergeForOutportShoTiDchaPwrLimFA_);

    /* Outport: '<Root>/VeFCPR_P_FCPS_ShoTiDchaPwrLim' incorporates:
     *  SignalConversion generated from: '<S2>/ShoTiDchaPwrLim_Init'
     */
    (void)Rte_Write_VeFCPR_P_FCPS_ShoTiDchaPwrLim_Value
        (FCPR_ac_B.VariantMergeForOutportShoTiDchaPwrLim_In);

    /* Outport: '<Root>/VeFCPR_b_H2_Solenoid_Flt_Sts' incorporates:
     *  SignalConversion generated from: '<S2>/Solenoid_Flt_Sts_Init'
     */
    (void)Rte_Write_VeFCPR_b_H2_Solenoid_Flt_Sts_Value
        (FCPR_ac_B.VariantMergeForOutportSolenoid_Flt_Sts_I);

    /* Outport: '<Root>/VeFCPR_b_H2_Solenoid_Sts' incorporates:
     *  SignalConversion generated from: '<S2>/Solenoid_Sts_Init'
     */
    (void)Rte_Write_VeFCPR_b_H2_Solenoid_Sts_Value
        (FCPR_ac_B.VariantMergeForOutportSolenoid_Sts_Init);

    /* Outport: '<Root>/VeFCPR_b_FCPS_StarUp_PwrDmnd_FA' incorporates:
     *  SignalConversion generated from: '<S2>/StrtUpPwrDmdFA_Init'
     */
    (void)Rte_Write_VeFCPR_b_FCPS_StarUp_PwrDmnd_FA_Value
        (FCPR_ac_B.VariantMergeForOutportStrtUpPwrDmdFA_Ini);

    /* Outport: '<Root>/VeFCPR_P_FCPS_StarUp_PwrDmnd' incorporates:
     *  SignalConversion generated from: '<S2>/StrtUpPwrDmd_Init'
     */
    (void)Rte_Write_VeFCPR_P_FCPS_StarUp_PwrDmnd_Value
        (FCPR_ac_B.VariantMergeForOutportStrtUpPwrDmd_Init);

    /* Outport: '<Root>/VeFCPR_P_FCPS_ThermPwrCnsReq_FA' incorporates:
     *  SignalConversion generated from: '<S2>/ThermPwrCnsReqFA_Init'
     */
    (void)Rte_Write_VeFCPR_P_FCPS_ThermPwrCnsReq_FA_Value
        (FCPR_ac_B.VariantMergeForOutportThermPwrCnsReqFA_I);

    /* Outport: '<Root>/VeFCPR_P_FCPS_ThermPwrCnsReq' incorporates:
     *  SignalConversion generated from: '<S2>/ThermPwrCnsReq_Init'
     */
    (void)Rte_Write_VeFCPR_P_FCPS_ThermPwrCnsReq_Value
        (FCPR_ac_B.VariantMergeForOutportThermPwrCnsReq_Ini);

    /* SignalConversion generated from: '<S2>/UpdateHBridgeDiagData_Init_write' */
#if Rte_SysCon_Variant_FCPR_1

    /* SignalConversion generated from: '<S2>/UpdateHBridgeDiagData_Init_write' incorporates:
     *  SignalConversion generated from: '<S69>/UpdateHBridgeDiagData_Init'
     */
    rtb_OutportBufferForUpdateHBridgeDiagDat =
        FCPR_ac_B.OutportBufferForUpdateHBridgeDiagData_In;

#endif

    /* End of SignalConversion generated from: '<S2>/UpdateHBridgeDiagData_Init_write' */

    /* Outport: '<Root>/VeFCPR_b_FCPS_UpperVoltLIM_FA' incorporates:
     *  SignalConversion generated from: '<S2>/UpprVoltLimFA_Init'
     */
    (void)Rte_Write_VeFCPR_b_FCPS_UpperVoltLIM_FA_Value
        (FCPR_ac_B.VariantMergeForOutportUpprVoltLimFA_Init);

    /* Outport: '<Root>/VeFCPR_U_FCPS_UpperVoltLIM' incorporates:
     *  SignalConversion generated from: '<S2>/UpprVoltLim_Init'
     */
    (void)Rte_Write_VeFCPR_U_FCPS_UpperVoltLIM_Value
        (FCPR_ac_B.VariantMergeForOutportUpprVoltLim_Init);

    /* Outport: '<Root>/VeFCPR_b_FCPS_Volt_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VoltFA_Init'
     */
    (void)Rte_Write_VeFCPR_b_FCPS_Volt_FA_Value
        (FCPR_ac_B.VariantMergeForOutportVoltFA_Init);

    /* Outport: '<Root>/VeFCPR_U_FCPS_Volt' incorporates:
     *  SignalConversion generated from: '<S2>/Volt_Init'
     */
    (void)Rte_Write_VeFCPR_U_FCPS_Volt_Value
        (FCPR_ac_B.VariantMergeForOutportVolt_Init);

    /* Outport: '<Root>/VeFCPR_Cnt_FCPS_WU_Tmr' incorporates:
     *  SignalConversion generated from: '<S2>/WU_Tmr_Init'
     */
    (void)Rte_Write_VeFCPR_Cnt_FCPS_WU_Tmr_Value
        (FCPR_ac_B.VariantMergeForOutportWU_Tmr_Init);

    /* SignalConversion generated from: '<S2>/CoverMtrPosnFA_Init_write' incorporates:
     *  SignalConversion generated from: '<S2>/CoverMtrPosn_Init_write'
     *  SignalConversion generated from: '<S2>/HB_SysVoltFA_Init_write'
     *  SignalConversion generated from: '<S2>/HB_SysVolt_Init_write'
     *  SignalConversion generated from: '<S2>/UpdateHBridgeDiagData_Init_write'
     */
#if Rte_SysCon_Variant_FCPR_1

    /* Merge: '<Root>/Merge_21' */
    Rte_IrvWrite_FCPR_PwrOn_CoverMtrPosnFA_Init_write_IRV
        (rtb_OutportBufferForCoverMtrPosnFA_Init_);

    /* Merge: '<Root>/Merge_18' */
    Rte_IrvWrite_FCPR_PwrOn_CoverMtrPosn_Init_write_IRV
        (rtb_OutportBufferForCoverMtrPosn_Init_wr);

    /* Merge: '<Root>/Merge_17' */
    Rte_IrvWrite_FCPR_PwrOn_HB_SysVoltFA_Init_write_IRV
        (rtb_OutportBufferForHB_SysVoltFA_Init_wr);

    /* Merge: '<Root>/Merge_12' */
    Rte_IrvWrite_FCPR_PwrOn_HB_SysVolt_Init_write_IRV
        (rtb_OutportBufferForHB_SysVolt_Init_writ);

    /* Merge: '<Root>/Merge_22' incorporates:
     *  SignalConversion generated from: '<S2>/UpdateHBridgeDiagData_Init_write'
     */
    Rte_IrvWrite_FCPR_PwrOn_UpdateHBridgeDiagData_Init_write_IRV
        (rtb_OutportBufferForUpdateHBridgeDiagDat);

#endif

    /* End of SignalConversion generated from: '<S2>/CoverMtrPosnFA_Init_write' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, FCPR_CODE) FCPR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/FCPR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/FCPI'
     */
    /* SystemInitialize for SignalConversion generated from: '<S69>/CoverMtrPosnFA_Init' incorporates:
     *  Constant: '<S102>/Calib'
     *  Constant: '<S114>/Calib'
     *  Constant: '<S94>/Calib'
     *  Constant: '<S95>/Calib'
     *  SignalConversion generated from: '<S69>/CoverMtrPosn_Init'
     *  SignalConversion generated from: '<S69>/HB_SysVoltFA_Init'
     *  SignalConversion generated from: '<S69>/HB_SysVolt_Init'
     *  SignalConversion generated from: '<S69>/UpdateHBridgeDiagData_Init'
     */
#if Rte_SysCon_Variant_FCPR_1

    /* SystemInitialize for Atomic SubSystem: '<S70>/Variant_Subsystem' */
    /* SystemInitialize for Atomic SubSystem: '<S71>/InitBlock' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeFCPR_P_LONGTIME_DISCHRG_PWRLIM' */
    /* Start for VariantMerge generated from: '<S71>/LongTiDchaPwrLim_Init' incorporates:
     *  Constant: '<S81>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportLongTiDchaPwrLim_I =
        KeFCPR_P_LongTiDchaPwrLimInit;

    /* Start for VariantMerge generated from: '<S71>/LongTiDchaPwrLimFA_Init' incorporates:
     *  Constant: '<S120>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportLongTiDchaPwrLimFA =
        KeFCPR_b_LongTiDchaPwrLimFAInit;

    /* Start for VariantMerge generated from: '<S71>/ShoTiDchaPwrLim_Init' incorporates:
     *  Constant: '<S85>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportShoTiDchaPwrLim_In =
        KeFCPR_P_ShoTiDchaPwrLimInit;

    /* Start for VariantMerge generated from: '<S71>/ShoTiDchaPwrLimFA_Init' incorporates:
     *  Constant: '<S126>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportShoTiDchaPwrLimFA_ =
        KeFCPR_b_ShoTiDchaPwrLimFAInit;

    /* Start for VariantMerge generated from: '<S71>/LongTiChrgPwrLim_Init' incorporates:
     *  Constant: '<S80>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportLongTiChrgPwrLim_I =
        KeFCPR_P_LongTiChrgPwrLimInit;

    /* Start for VariantMerge generated from: '<S71>/LongTiChrgPwrLimFA_Init' incorporates:
     *  Constant: '<S119>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportLongTiChrgPwrLimFA =
        KeFCPR_b_LongTiChrgPwrLimFAInit;

    /* Start for VariantMerge generated from: '<S71>/ShoTiChrgPwrLim_Init' incorporates:
     *  Constant: '<S84>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportShoTiChrgPwrLim_In =
        KeFCPR_P_ShoTiChrgPwrLimInit;

    /* Start for VariantMerge generated from: '<S71>/ShoTiChrgPwrLimFA_Init' incorporates:
     *  Constant: '<S125>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportShoTiChrgPwrLimFA_ =
        KeFCPR_b_ShoTiChrgPwrLimFAInit;

    /* Start for VariantMerge generated from: '<S71>/StrtUpPwrDmd_Init' incorporates:
     *  Constant: '<S86>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportStrtUpPwrDmd_Init =
        KeFCPR_P_StrtUpPwrDmdInit;

    /* Start for VariantMerge generated from: '<S71>/StrtUpPwrDmdFA_Init' incorporates:
     *  Constant: '<S129>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportStrtUpPwrDmdFA_Ini =
        KeFCPR_b_StrtUpPwrDmdFAInit;

    /* Start for VariantMerge generated from: '<S71>/UpprVoltLim_Init' incorporates:
     *  Constant: '<S97>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportUpprVoltLim_Init = KeFCPR_U_UpprVoltLimInit;

    /* Start for VariantMerge generated from: '<S71>/UpprVoltLimFA_Init' incorporates:
     *  Constant: '<S131>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportUpprVoltLimFA_Init =
        KeFCPR_b_UpprVoltLimFAInit;

    /* Start for VariantMerge generated from: '<S71>/Volt_Init' incorporates:
     *  Constant: '<S98>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportVolt_Init = KeFCPR_U_VoltInit;

    /* Start for VariantMerge generated from: '<S71>/VoltFA_Init' incorporates:
     *  Constant: '<S132>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportVoltFA_Init = KeFCPR_b_VoltFAInit;

    /* Start for VariantMerge generated from: '<S71>/Curr_Init' incorporates:
     *  Constant: '<S77>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportCurr_Init = KeFCPR_I_CurrInit;

    /* Start for VariantMerge generated from: '<S71>/CurrFA_Init' incorporates:
     *  Constant: '<S103>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportCurrFA_Init = KeFCPR_b_CurrFAInit;

    /* Start for VariantMerge generated from: '<S71>/ActPwr_Init' incorporates:
     *  Constant: '<S79>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportActPwr_Init = KeFCPR_P_ActPwrInit;

    /* Start for VariantMerge generated from: '<S71>/ActPwrFA_Init' incorporates:
     *  Constant: '<S101>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportActPwrFA_Init = KeFCPR_b_ActPwrFAInit;

    /* Start for VariantMerge generated from: '<S71>/LowrVoltLim_Init' incorporates:
     *  Constant: '<S96>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportLowrVoltLim_Init = KeFCPR_U_LowrVoltLimInit;

    /* Start for VariantMerge generated from: '<S71>/LowrVoltLimFA_Init' incorporates:
     *  Constant: '<S121>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportLowrVoltLimFA_Init =
        KeFCPR_b_LowrVoltLimFAInit;

    /* Start for VariantMerge generated from: '<S71>/KeepAlive_Req_Init' incorporates:
     *  Constant: '<S118>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportKeepAlive_Req_Init =
        KeFCPR_b_KeepAlive_ReqInit;

    /* Start for VariantMerge generated from: '<S71>/HV_AfterRun_Sts_Init' incorporates:
     *  Constant: '<S116>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportHV_AfterRun_Sts_In =
        KeFCPR_b_HV_AfterRunStsInit;

    /* Start for VariantMerge generated from: '<S71>/H2_Refuel_Sts_Init' incorporates:
     *  Constant: '<S112>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportH2_Refuel_Sts_Init =
        KeFCPR_b_H2_RefuelStsInit;

    /* Start for VariantMerge generated from: '<S71>/FuelLidReq_Init' incorporates:
     *  Constant: '<S111>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFuelLidReq_Init = KeFCPR_b_FuelLidReqInit;

    /* Start for VariantMerge generated from: '<S71>/H2_EquivEgy_Init' incorporates:
     *  Constant: '<S76>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportH2_EquivEgy_Init = KeFCPR_E_H2_EquivEgyInit;

    /* Start for VariantMerge generated from: '<S71>/WU_Tmr_Init' incorporates:
     *  Constant: '<S75>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportWU_Tmr_Init = KeFCPR_Cnt_WU_TmrInit;

    /* Start for VariantMerge generated from: '<S71>/HbridgeEnableControl_Init' incorporates:
     *  Constant: '<S117>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportHbridgeEnableContr =
        KeFCPR_b_HbridgeEnableControlInit;

    /* Start for VariantMerge generated from: '<S71>/SetHbridgePWMOutput_Init' incorporates:
     *  Constant: '<S88>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportSetHbridgePWMOutpu =
        KeFCPR_Pct_SetHbridgePWMOutputInit;

    /* Start for VariantMerge generated from: '<S71>/Solenoid_Flt_Sts_Init' incorporates:
     *  Constant: '<S127>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportSolenoid_Flt_Sts_I =
        KeFCPR_b_SolenoidFltStsInit;

    /* Start for VariantMerge generated from: '<S71>/Solenoid_Sts_Init' incorporates:
     *  Constant: '<S128>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportSolenoid_Sts_Init = KeFCPR_b_SolenoidStsInit;
    FCPR_ac_B.Calib = KeFCPR_U_HB_SysVoltInit;
    FCPR_ac_B.Calib_f = KeFCPR_b_HB_SysVoltFAInit;
    FCPR_ac_B.Calib_k = KeFCPR_U_CoverMtrPosnInit;
    FCPR_ac_B.Calib_b = KeFCPR_b_CoverMtrPosnFAInit;

    /* Start for VariantMerge generated from: '<S71>/ActFCPSPwrCnspt_Init' incorporates:
     *  Constant: '<S102>/Calib'
     *  Constant: '<S114>/Calib'
     *  Constant: '<S78>/Calib'
     *  Constant: '<S94>/Calib'
     *  Constant: '<S95>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportActFCPSPwrCnspt_In =
        KeFCPR_P_ActFCPSPwrCnsptInit;

    /* Start for VariantMerge generated from: '<S71>/ActFCPSPwrCnsptFA_Init' incorporates:
     *  Constant: '<S99>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportActFCPSPwrCnsptFA_ =
        KeFCPR_b_ActFCPSPwrCnsptFAInit;

    /* Start for VariantMerge generated from: '<S71>/ActMod_Init' incorporates:
     *  Constant: '<S133>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportActMod_Init = KeFCPR_e_ActModInit;

    /* Start for VariantMerge generated from: '<S71>/ActModFA_Init' incorporates:
     *  Constant: '<S100>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportActModFA_Init = KeFCPR_b_ActModFAInit;

    /* Start for VariantMerge generated from: '<S71>/MaxAvailFCPSPwr_Init' incorporates:
     *  Constant: '<S82>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportMaxAvailFCPSPwr_In =
        KeFCPR_P_MaxAvailFCPSPwrInit;

    /* Start for VariantMerge generated from: '<S71>/MaxAvailFCPSPwrFA_Init' incorporates:
     *  Constant: '<S122>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportMaxAvailFCPSPwrFA_ =
        KeFCPR_b_MaxAvailFCPSPwrFAInit;

    /* Start for VariantMerge generated from: '<S71>/ReqdMinFCPSPwr_Init' incorporates:
     *  Constant: '<S83>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportReqdMinFCPSPwr_Ini =
        KeFCPR_P_ReqdMinFCPSPwrInit;

    /* Start for VariantMerge generated from: '<S71>/ReqdMinFCPSPwrFA_Init' incorporates:
     *  Constant: '<S123>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportReqdMinFCPSPwrFA_I =
        KeFCPR_b_ReqdMinFCPSPwrFAInit;

    /* Start for VariantMerge generated from: '<S71>/RunReqToEVCU_Init' incorporates:
     *  Constant: '<S124>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportRunReqToEVCU_Init =
        KeFCPR_b_RunReqToEVCUInit;

    /* Start for VariantMerge generated from: '<S71>/FCPS_LTCoolMaxTemp_Init' incorporates:
     *  Constant: '<S93>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_LTCoolMaxTemp =
        KeFCPR_T_FCPS_LTCoolMaxTempInit;

    /* Start for VariantMerge generated from: '<S71>/FCPS_HTCoolDeltaSp_Init' incorporates:
     *  Constant: '<S89>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolDeltaSp =
        KeFCPR_T_FCPS_HTCoolDeltaSpInit;

    /* Start for VariantMerge generated from: '<S71>/FCPS_HTCoolOutTemp_Init' incorporates:
     *  Constant: '<S91>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolOutTe_i =
        KeFCPR_T_FCPS_HTCoolOutTempInit;

    /* Start for VariantMerge generated from: '<S71>/FCPS_HTCoolReq_Init' incorporates:
     *  Constant: '<S134>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolReq_Ini =
        KeFCPR_e_FCPS_HTCoolReqInit;

    /* Start for VariantMerge generated from: '<S71>/FCPS_HTCoolInTemp_Init' incorporates:
     *  Constant: '<S90>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolInTemp_ =
        KeFCPR_T_FCPS_HTCoolInTempInit;

    /* Start for VariantMerge generated from: '<S71>/FC_DCDC_IntrlkStat_Init' incorporates:
     *  Constant: '<S135>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFC_DCDC_IntrlkSt_m =
        KeFCPR_e_FC_DCDC_IntrlkStatInit;

    /* Start for VariantMerge generated from: '<S71>/FCPS_LTCoolMaxTempFA_Init' incorporates:
     *  Constant: '<S109>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_LTCoolMaxTe_f =
        KeFCPR_b_FCPS_LTCoolMaxTempFAInit;

    /* Start for VariantMerge generated from: '<S71>/FCPS_HTCoolDeltaSpFA_Init' incorporates:
     *  Constant: '<S104>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolDelta_f =
        KeFCPR_b_FCPS_HTCoolDeltaSpFAInit;

    /* Start for VariantMerge generated from: '<S71>/FCPS_HTCoolOutTempFA_Init' incorporates:
     *  Constant: '<S106>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolOutT_is =
        KeFCPR_b_FCPS_HTCoolOutTempFAInit;

    /* Start for VariantMerge generated from: '<S71>/FCPS_HTCoolReqFA_Init' incorporates:
     *  Constant: '<S108>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolReqFA_I =
        KeFCPR_b_FCPS_HTCoolReqFAInit;

    /* Start for VariantMerge generated from: '<S71>/FCPS_HTCoolInTempFA_Init' incorporates:
     *  Constant: '<S105>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolInTempF =
        KeFCPR_b_FCPS_HTCoolInTempFAInit;

    /* Start for VariantMerge generated from: '<S71>/FCPS_HTCoolOutTempSpFA_Init' incorporates:
     *  Constant: '<S107>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolOutTe_d =
        KeFCPR_b_FCPS_HTCoolOutTempSpFAInit;

    /* Start for VariantMerge generated from: '<S71>/FC_DCDC_IntrlkStatFA_Init' incorporates:
     *  Constant: '<S110>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFC_DCDC_IntrlkStat =
        KeFCPR_b_FC_DCDC_IntrlkStatFAInit;

    /* Start for VariantMerge generated from: '<S71>/HEAC_IntrlkStatFA_Init' incorporates:
     *  Constant: '<S115>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportHEAC_IntrlkStatFA_ =
        KeFCPR_b_HEAC_IntrlkStatFAInit;

    /* Start for VariantMerge generated from: '<S71>/H2_SolenoidReq_Init' incorporates:
     *  Constant: '<S113>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportH2_SolenoidReq_Ini =
        KeFCPR_b_H2_SolenoidReqInit;

    /* Start for VariantMerge generated from: '<S71>/FCPS_HTCoolOutTempSp_Init' incorporates:
     *  Constant: '<S92>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolOutTemp =
        KeFCPR_T_FCPS_HTCoolOutTempSpInit;

    /* Start for VariantMerge generated from: '<S71>/HEAC_IntrlkStat_Init' incorporates:
     *  Constant: '<S136>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportHEAC_IntrlkStat_In =
        KeFCPR_e_HEAC_IntrlkStatInit;

    /* Start for VariantMerge generated from: '<S71>/ThermPwrCnsReq_Init' incorporates:
     *  Constant: '<S87>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportThermPwrCnsReq_Ini =
        KeFCPR_P_ThermPwrCnsReqInit;

    /* Start for VariantMerge generated from: '<S71>/ThermPwrCnsReqFA_Init' incorporates:
     *  Constant: '<S130>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportThermPwrCnsReqFA_I =
        KeFCPR_b_ThermPwrCnsReqFAInit;

    /* SystemInitialize for SignalConversion generated from: '<S69>/CoverMtrPosnFA_Init' */
    FCPR_ac_B.OutportBufferForCoverMtrPosnFA_Init = FCPR_ac_B.Calib_b;

    /* SystemInitialize for SignalConversion generated from: '<S69>/CoverMtrPosn_Init' */
    FCPR_ac_B.OutportBufferForCoverMtrPosn_Init = FCPR_ac_B.Calib_k;

    /* SystemInitialize for SignalConversion generated from: '<S69>/HB_SysVoltFA_Init' */
    FCPR_ac_B.OutportBufferForHB_SysVoltFA_Init = FCPR_ac_B.Calib_f;

    /* SystemInitialize for SignalConversion generated from: '<S69>/HB_SysVolt_Init' */
    FCPR_ac_B.OutportBufferForHB_SysVolt_Init = FCPR_ac_B.Calib;

    /* SystemInitialize for SignalConversion generated from: '<S69>/UpdateHBridgeDiagData_Init' incorporates:
     *  Constant: '<S74>/Constant'
     */
    FCPR_ac_B.OutportBufferForUpdateHBridgeDiagData_In = FCPR_ac_ConstB.Constant;

    /* End of SystemInitialize for SubSystem: '<S71>/InitBlock' */
    /* End of SystemInitialize for SubSystem: '<S70>/Variant_Subsystem' */
#else

    /* SystemInitialize for Atomic SubSystem: '<S71>/StubBlock' */
    /* Start for VariantMerge generated from: '<S71>/LongTiDchaPwrLim_Init' incorporates:
     *  Constant: '<S143>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportLongTiDchaPwrLim_I =
        KeFCPR_P_LongTiDchaPwrLimStub;

    /* Start for VariantMerge generated from: '<S71>/LongTiDchaPwrLimFA_Init' incorporates:
     *  Constant: '<S178>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportLongTiDchaPwrLimFA =
        KeFCPR_b_LongTiDchaPwrLimFAStub;

    /* Start for VariantMerge generated from: '<S71>/ShoTiDchaPwrLim_Init' incorporates:
     *  Constant: '<S147>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportShoTiDchaPwrLim_In =
        KeFCPR_P_ShoTiDchaPwrLimStub;

    /* Start for VariantMerge generated from: '<S71>/ShoTiDchaPwrLimFA_Init' incorporates:
     *  Constant: '<S184>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportShoTiDchaPwrLimFA_ =
        KeFCPR_b_ShoTiDchaPwrLimFAStub;

    /* Start for VariantMerge generated from: '<S71>/LongTiChrgPwrLim_Init' incorporates:
     *  Constant: '<S142>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportLongTiChrgPwrLim_I =
        KeFCPR_P_LongTiChrgPwrLimStub;

    /* Start for VariantMerge generated from: '<S71>/LongTiChrgPwrLimFA_Init' incorporates:
     *  Constant: '<S177>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportLongTiChrgPwrLimFA =
        KeFCPR_b_LongTiChrgPwrLimFAStub;

    /* Start for VariantMerge generated from: '<S71>/ShoTiChrgPwrLim_Init' incorporates:
     *  Constant: '<S146>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportShoTiChrgPwrLim_In =
        KeFCPR_P_ShoTiChrgPwrLimStub;

    /* Start for VariantMerge generated from: '<S71>/ShoTiChrgPwrLimFA_Init' incorporates:
     *  Constant: '<S183>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportShoTiChrgPwrLimFA_ =
        KeFCPR_b_ShoTiChrgPwrLimFAStub;

    /* Start for VariantMerge generated from: '<S71>/StrtUpPwrDmd_Init' incorporates:
     *  Constant: '<S148>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportStrtUpPwrDmd_Init =
        KeFCPR_P_StrtUpPwrDmdStub;

    /* Start for VariantMerge generated from: '<S71>/StrtUpPwrDmdFA_Init' incorporates:
     *  Constant: '<S187>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportStrtUpPwrDmdFA_Ini =
        KeFCPR_b_StrtUpPwrDmdFAStub;

    /* Start for VariantMerge generated from: '<S71>/UpprVoltLim_Init' incorporates:
     *  Constant: '<S157>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportUpprVoltLim_Init = KeFCPR_U_UpprVoltLimStub;

    /* Start for VariantMerge generated from: '<S71>/UpprVoltLimFA_Init' incorporates:
     *  Constant: '<S189>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportUpprVoltLimFA_Init =
        KeFCPR_b_UpprVoltLimFAStub;

    /* Start for VariantMerge generated from: '<S71>/Volt_Init' incorporates:
     *  Constant: '<S158>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportVolt_Init = KeFCPR_U_VoltStub;

    /* Start for VariantMerge generated from: '<S71>/VoltFA_Init' incorporates:
     *  Constant: '<S190>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportVoltFA_Init = KeFCPR_b_VoltFAStub;

    /* Start for VariantMerge generated from: '<S71>/Curr_Init' incorporates:
     *  Constant: '<S139>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportCurr_Init = KeFCPR_I_CurrStub;

    /* Start for VariantMerge generated from: '<S71>/ActPwr_Init' incorporates:
     *  Constant: '<S141>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportActPwr_Init = KeFCPR_P_ActPwrStub;

    /* Start for VariantMerge generated from: '<S71>/ActPwrFA_Init' incorporates:
     *  Constant: '<S161>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportActPwrFA_Init = KeFCPR_b_ActPwrFAStub;

    /* Start for VariantMerge generated from: '<S71>/LowrVoltLim_Init' incorporates:
     *  Constant: '<S156>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportLowrVoltLim_Init = KeFCPR_U_LowrVoltLimStub;

    /* Start for VariantMerge generated from: '<S71>/LowrVoltLimFA_Init' incorporates:
     *  Constant: '<S179>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportLowrVoltLimFA_Init =
        KeFCPR_b_LowrVoltLimFAStub;

    /* Start for VariantMerge generated from: '<S71>/KeepAlive_Req_Init' incorporates:
     *  Constant: '<S176>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportKeepAlive_Req_Init =
        KeFCPR_b_KeepAliveReqStub;

    /* Start for VariantMerge generated from: '<S71>/HV_AfterRun_Sts_Init' incorporates:
     *  Constant: '<S174>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportHV_AfterRun_Sts_In =
        KeFCPR_b_HV_AfterRunStsStub;

    /* Start for VariantMerge generated from: '<S71>/H2_Refuel_Sts_Init' incorporates:
     *  Constant: '<S171>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportH2_Refuel_Sts_Init =
        KeFCPR_b_H2_RefuelStsStub;

    /* Start for VariantMerge generated from: '<S71>/FuelLidReq_Init' incorporates:
     *  Constant: '<S170>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFuelLidReq_Init = KeFCPR_b_FuelLidReqStub;

    /* Start for VariantMerge generated from: '<S71>/H2_EquivEgy_Init' incorporates:
     *  Constant: '<S138>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportH2_EquivEgy_Init = KeFCPR_E_H2_EquivEgyStub;

    /* Start for VariantMerge generated from: '<S71>/WU_Tmr_Init' incorporates:
     *  Constant: '<S137>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportWU_Tmr_Init = KeFCPR_Cnt_WU_TmrStub;

    /* Start for VariantMerge generated from: '<S71>/HbridgeEnableControl_Init' incorporates:
     *  Constant: '<S175>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportHbridgeEnableContr =
        KeFCPR_b_HbridgeEnableControlStub;

    /* Start for VariantMerge generated from: '<S71>/SetHbridgePWMOutput_Init' incorporates:
     *  Constant: '<S150>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportSetHbridgePWMOutpu =
        KeFCPR_Pct_SetHbridgePWMOutputStub;

    /* Start for VariantMerge generated from: '<S71>/Solenoid_Flt_Sts_Init' incorporates:
     *  Constant: '<S185>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportSolenoid_Flt_Sts_I =
        KeFCPR_b_SolenoidFltStsStub;

    /* Start for VariantMerge generated from: '<S71>/Solenoid_Sts_Init' incorporates:
     *  Constant: '<S186>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportSolenoid_Sts_Init = KeFCPR_b_SolenoidStsStub;

    /* Start for VariantMerge generated from: '<S71>/CurrFA_Init' incorporates:
     *  Constant: '<S162>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportCurrFA_Init = KeFCPR_b_CurrFAStub;

    /* Start for VariantMerge generated from: '<S71>/ActFCPSPwrCnspt_Init' incorporates:
     *  Constant: '<S140>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportActFCPSPwrCnspt_In =
        KeFCPR_P_ActFCPSPwrCnsptStub;

    /* Start for VariantMerge generated from: '<S71>/ActFCPSPwrCnsptFA_Init' incorporates:
     *  Constant: '<S159>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportActFCPSPwrCnsptFA_ =
        KeFCPR_b_ActFCPSPwrCnsptFAStub;

    /* Start for VariantMerge generated from: '<S71>/ActMod_Init' incorporates:
     *  Constant: '<S191>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportActMod_Init = KeFCPR_e_ActModStub;

    /* Start for VariantMerge generated from: '<S71>/ActModFA_Init' incorporates:
     *  Constant: '<S160>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportActModFA_Init = KeFCPR_b_ActModFAStub;

    /* Start for VariantMerge generated from: '<S71>/MaxAvailFCPSPwr_Init' incorporates:
     *  Constant: '<S144>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportMaxAvailFCPSPwr_In =
        KeFCPR_P_MaxAvailFCPSPwrStub;

    /* Start for VariantMerge generated from: '<S71>/MaxAvailFCPSPwrFA_Init' incorporates:
     *  Constant: '<S180>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportMaxAvailFCPSPwrFA_ =
        KeFCPR_b_MaxAvailFCPSPwrFAStub;

    /* Start for VariantMerge generated from: '<S71>/ReqdMinFCPSPwr_Init' incorporates:
     *  Constant: '<S145>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportReqdMinFCPSPwr_Ini =
        KeFCPR_P_ReqdMinFCPSPwrStub;

    /* Start for VariantMerge generated from: '<S71>/ReqdMinFCPSPwrFA_Init' incorporates:
     *  Constant: '<S181>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportReqdMinFCPSPwrFA_I =
        KeFCPR_b_ReqdMinFCPSPwrFAStub;

    /* Start for VariantMerge generated from: '<S71>/RunReqToEVCU_Init' incorporates:
     *  Constant: '<S182>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportRunReqToEVCU_Init =
        KeFCPR_b_RunReqToEVCUStub;

    /* Start for VariantMerge generated from: '<S71>/FCPS_LTCoolMaxTemp_Init' incorporates:
     *  Constant: '<S155>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_LTCoolMaxTemp =
        KeFCPR_T_FCPS_LTCoolMaxTempStub;

    /* Start for VariantMerge generated from: '<S71>/FCPS_HTCoolDeltaSp_Init' incorporates:
     *  Constant: '<S151>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolDeltaSp =
        KeFCPR_T_FCPS_HTCoolDeltaSpStub;

    /* Start for VariantMerge generated from: '<S71>/FCPS_HTCoolOutTemp_Init' incorporates:
     *  Constant: '<S154>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolOutTe_i =
        KeFCPR_T_FCPS_HTCoolOutTempStub;

    /* Start for VariantMerge generated from: '<S71>/FCPS_HTCoolReq_Init' incorporates:
     *  Constant: '<S192>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolReq_Ini =
        KeFCPR_e_FCPS_HTCoolReqStub;

    /* Start for VariantMerge generated from: '<S71>/FCPS_HTCoolInTemp_Init' incorporates:
     *  Constant: '<S152>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolInTemp_ =
        KeFCPR_T_FCPS_HTCoolInTempStub;

    /* Start for VariantMerge generated from: '<S71>/FC_DCDC_IntrlkStat_Init' incorporates:
     *  Constant: '<S193>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFC_DCDC_IntrlkSt_m =
        KeFCPR_e_FC_DCDC_IntrlkStatStub;

    /* Start for VariantMerge generated from: '<S71>/FCPS_LTCoolMaxTempFA_Init' incorporates:
     *  Constant: '<S168>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_LTCoolMaxTe_f =
        KeFCPR_b_FCPS_LTCoolMaxTempFAStub;

    /* Start for VariantMerge generated from: '<S71>/FCPS_HTCoolDeltaSpFA_Init' incorporates:
     *  Constant: '<S163>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolDelta_f =
        KeFCPR_b_FCPS_HTCoolDeltaSpFAStub;

    /* Start for VariantMerge generated from: '<S71>/FCPS_HTCoolOutTempFA_Init' incorporates:
     *  Constant: '<S165>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolOutT_is =
        KeFCPR_b_FCPS_HTCoolOutTempFAStub;

    /* Start for VariantMerge generated from: '<S71>/FCPS_HTCoolReqFA_Init' incorporates:
     *  Constant: '<S167>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolReqFA_I =
        KeFCPR_b_FCPS_HTCoolReqFAStub;

    /* Start for VariantMerge generated from: '<S71>/FCPS_HTCoolInTempFA_Init' incorporates:
     *  Constant: '<S164>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolInTempF =
        KeFCPR_b_FCPS_HTCoolInTempFAStub;

    /* Start for VariantMerge generated from: '<S71>/FCPS_HTCoolOutTempSpFA_Init' incorporates:
     *  Constant: '<S166>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolOutTe_d =
        KeFCPR_b_FCPS_HTCoolOutTempSpFAStub;

    /* Start for VariantMerge generated from: '<S71>/FC_DCDC_IntrlkStatFA_Init' incorporates:
     *  Constant: '<S169>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFC_DCDC_IntrlkStat =
        KeFCPR_b_FC_DCDC_IntrlkStatFAStub;

    /* Start for VariantMerge generated from: '<S71>/HEAC_IntrlkStatFA_Init' incorporates:
     *  Constant: '<S173>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportHEAC_IntrlkStatFA_ =
        KeFCPR_b_HEAC_IntrlkStatFAStub;

    /* Start for VariantMerge generated from: '<S71>/H2_SolenoidReq_Init' incorporates:
     *  Constant: '<S172>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportH2_SolenoidReq_Ini =
        KeFCPR_b_H2_SolenoidReqStub;

    /* Start for VariantMerge generated from: '<S71>/FCPS_HTCoolOutTempSp_Init' incorporates:
     *  Constant: '<S153>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportFCPS_HTCoolOutTemp =
        KeFCPR_T_FCPS_HTCoolOutTempSpStub;

    /* Start for VariantMerge generated from: '<S71>/HEAC_IntrlkStat_Init' incorporates:
     *  Constant: '<S194>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportHEAC_IntrlkStat_In =
        KeFCPR_e_HEAC_IntrlkStatStub;

    /* Start for VariantMerge generated from: '<S71>/ThermPwrCnsReq_Init' incorporates:
     *  Constant: '<S149>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportThermPwrCnsReq_Ini =
        KeFCPR_P_ThermPwrCnsReqStub;

    /* Start for VariantMerge generated from: '<S71>/ThermPwrCnsReqFA_Init' incorporates:
     *  Constant: '<S188>/Calib'
     */
    FCPR_ac_B.VariantMergeForOutportThermPwrCnsReqFA_I =
        KeFCPR_b_ThermPwrCnsReqFAStub;

    /* End of SystemInitialize for SubSystem: '<S71>/StubBlock' */
#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S69>/CoverMtrPosnFA_Init' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeFCPR_P_LONGTIME_DISCHRG_PWRLIM' */
    /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Outport: '<Root>/VeFCPR_e_ActualMode' incorporates:
     *  Merge: '<Root>/Merge_38'
     */
    (void)Rte_Write_VeFCPR_e_ActualMode_Value(CeFCPR_e_ActualMode_NotAvailable);

    /* SystemInitialize for Outport: '<Root>/VeFCPR_e_FCPS_HTCoolReq' incorporates:
     *  Merge: '<Root>/Merge_52'
     */
    (void)Rte_Write_VeFCPR_e_FCPS_HTCoolReq_Value(CeFCPR_e_No_Request);

    /* SystemInitialize for Outport: '<Root>/VeFCPR_e_FC_DCDC_IntrlkStat' incorporates:
     *  Merge: '<Root>/Merge_60'
     */
    (void)Rte_Write_VeFCPR_e_FC_DCDC_IntrlkStat_Value(CeHVTR_e_IntrlkNotSourced);

    /* SystemInitialize for Outport: '<Root>/VeFCPR_e_HEAC_IntrlkStat' incorporates:
     *  Merge: '<Root>/Merge_62'
     */
    (void)Rte_Write_VeFCPR_e_HEAC_IntrlkStat_Value(CeHVTR_e_IntrlkNotSourced);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
