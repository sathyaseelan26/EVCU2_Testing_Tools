/*
 * File: AVTR_ac.c
 *
 * Code generated for Simulink model 'AVTR_ac'.
 *
 * Model version                  : 9.55
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:06:36 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "AVTR_ac.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_AVTR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(uint16, AVTR_VAR_INIT)
    KeAVTR_Cf_SDS_RHSC2_Healthy_DebounTim = 2U;/* Referenced by: '<S262>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(float32, AVTR_VAR_INIT) KeAVTR_P_SDS_HV_PwrAvg_D = 0.0F;/* Referenced by: '<S6>/Calib' */

#endif

#if !Rte_SysCon_Variant_AVTR_1

static volatile CONST(float32, AVTR_VAR_INIT) KeAVTR_P_SDS_HV_PwrAvg_NF_Dial =
    0.0F;                              /* Referenced by: '<S317>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(float32, AVTR_VAR_INIT) KeAVTR_P_SDS_HV_PwrAvg_init = 0.0F;/* Referenced by: '<S318>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(float32, AVTR_VAR_INIT) KeAVTR_P_SDS_PwrAvg_OffState =
    0.0F;                              /* Referenced by: '<S47>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(float32, AVTR_VAR_INIT) KeAVTR_T_CellTempMaxUsed_Dial =
    0.0F;                              /* Referenced by: '<S291>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(float32, AVTR_VAR_INIT) KeAVTR_T_CellTempMinUsed_Dial =
    0.0F;                              /* Referenced by: '<S293>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(float32, AVTR_VAR_INIT) KeAVTR_T_EVA_BatTmpCold_RgHi =
    1.0F;                              /* Referenced by: '<S34>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(float32, AVTR_VAR_INIT) KeAVTR_T_EVA_BatTmpCold_RgLw =
    0.0F;                              /* Referenced by: '<S35>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(float32, AVTR_VAR_INIT) KeAVTR_T_EVA_BatTmpHot_RgHi =
    40.0F;                             /* Referenced by: '<S36>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(float32, AVTR_VAR_INIT) KeAVTR_T_EVA_BatTmpHot_RgLw =
    39.0F;                             /* Referenced by: '<S37>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(float32, AVTR_VAR_INIT) KeAVTR_T_EVA_ClntTmpInAct_Dflt =
    28.0F;                             /* Referenced by: '<S250>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(float32, AVTR_VAR_INIT) KeAVTR_T_EVA_ClntTmpInAct_FailRt =
    0.1F;                              /* Referenced by: '<S251>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(float32, AVTR_VAR_INIT) KeAVTR_T_EVA_ClntTmpInAct_HealRt =
    0.5F;                              /* Referenced by: '<S252>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(float32, AVTR_VAR_INIT) KeAVTR_T_EVA_CoolReqHys = 2.0F;/* Referenced by: '<S192>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(float32, AVTR_VAR_INIT) KeAVTR_T_EVA_CoolReqHys_App2 =
    2.0F;                              /* Referenced by: '<S220>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(float32, AVTR_VAR_INIT) KeAVTR_T_EVA_CoolReqMarg = 0.0F;/* Referenced by: '<S193>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(float32, AVTR_VAR_INIT) KeAVTR_T_EVA_CoolReqMarg_App2 =
    0.0F;                              /* Referenced by: '<S221>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(float32, AVTR_VAR_INIT) KeAVTR_T_EVA_HeatReqHys = 2.0F;/* Referenced by: '<S199>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(float32, AVTR_VAR_INIT) KeAVTR_T_EVA_HeatReqHys_App2 =
    2.0F;                              /* Referenced by: '<S223>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(float32, AVTR_VAR_INIT) KeAVTR_T_EVA_HeatReqMarg = 0.0F;/* Referenced by: '<S200>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(float32, AVTR_VAR_INIT) KeAVTR_T_EVA_HeatReqMarg_App2 =
    0.0F;                              /* Referenced by: '<S224>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(float32, AVTR_VAR_INIT) KeAVTR_T_SDS_ClntTmpInAct_D =
    25.0F;                             /* Referenced by: '<S7>/Calib' */

#endif

#if !Rte_SysCon_Variant_AVTR_1

static volatile CONST(float32, AVTR_VAR_INIT) KeAVTR_T_SDS_ClntTmpIn_Act_NF_Dial
    = 25.0F;                           /* Referenced by: '<S319>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(float32, AVTR_VAR_INIT) KeAVTR_T_SDS_ClntTmpIn_Act_init =
    25.0F;                             /* Referenced by: '<S320>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_BFC_AllowdSt_SNA = 1;/* Referenced by: '<S237>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_BFC_Allowedstate_SD = 0;/* Referenced by: '<S8>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_BatCntctrCls_Disbl = 0;/* Referenced by: '<S238>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_BatCoolFlt_Disbl = 0;/* Referenced by: '<S239>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_BatCoolPerfFlt_Enb = 1;/* Referenced by: '<S138>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_BatCoolingFlt_OldApp_Enbl
    = 1;                               /* Referenced by: '<S51>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_BatCoolngFlt_Sts_SD = 0;/* Referenced by: '<S9>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_BattTmpRange_EVA_Disbl =
    0;                                 /* Referenced by: '<S240>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_BottleSensrClntLow_Enb =
    1;                                 /* Referenced by: '<S141>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_BottleSensrSG_Enb = 1;/* Referenced by: '<S142>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_CellTempMaxUsed_SD = 0;/* Referenced by: '<S292>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_CellTempMinUsed_SD = 0;/* Referenced by: '<S294>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_ChlrVlvStck_ClsEnb = 1;/* Referenced by:
                                                                      * '<S85>/Calib'
                                                                      * '<S149>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_ChlrVlv_OC_Enb = 0;/* Referenced by:
                                                                      * '<S86>/Calib'
                                                                      * '<S150>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_ChlrVlv_SG_Enb = 0;/* Referenced by:
                                                                      * '<S87>/Calib'
                                                                      * '<S151>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_ComBusOff_Enb = 0;/* Referenced by:
                                                                      * '<S95>/Calib'
                                                                      * '<S166>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_EAC_LOC_Enb = 1;/* Referenced by:
                                                                      * '<S96>/Calib'
                                                                      * '<S157>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_EAC_PerfFlt_Enb = 1;/* Referenced by:
                                                                      * '<S92>/Calib'
                                                                      * '<S158>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_EVA_CoolReq_S = 0;/* Referenced by: '<S42>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_EVA_HeatReq_S = 0;/* Referenced by: '<S43>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_EVA_TempErr_TT_S = 0;/* Referenced by: '<S44>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_EVA_ThrmlStMax_CoolEnb =
    1;                                 /* Referenced by: '<S273>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_EVA_ThrmlState_SD = 0;/* Referenced by:
                                                                      * '<S10>/Calib'
                                                                      * '<S247>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_HCPShutDwnCmd_Dial = 0;/* Referenced by: '<S295>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_HCPShutDwnCmd_SD = 0;/* Referenced by: '<S296>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_HCP_MaxCoolingSt_SD = 0;/* Referenced by: '<S11>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_HTAP_FunPer_FltDtct_Dial =
    0;                                 /* Referenced by: '<S297>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_HTAP_FunPer_FltDtct_SD =
    0;                                 /* Referenced by: '<S298>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_HTCV_LeakFltEnb = 1;/* Referenced by:
                                                                      * '<S88>/Calib'
                                                                      * '<S152>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_HTCV_StckFltEnb = 1;/* Referenced by:
                                                                      * '<S89>/Calib'
                                                                      * '<S153>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_HV_BatCntctrStat_SD = 0;/* Referenced by: '<S287>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT)
    KeAVTR_b_HV_BatTempCrit_CondState_SD = 0;/* Referenced by: '<S299>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_HV_BatTmpRng_SD = 0;/* Referenced by: '<S289>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_HtrOrEAC_FltRawPrst_Dial =
    0;                                 /* Referenced by: '<S301>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_HtrOrEAC_FltRawPrst_SD =
    0;                                 /* Referenced by: '<S302>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_InvDataOvrd = 0;/* Referenced by: '<S263>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_KeySts_SD = 0;/* Referenced by: '<S304>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_LOCRHSC2Ovrd = 0;/* Referenced by: '<S264>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_LOC_BPCM_Enb = 1;/* Referenced by: '<S167>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_LTAP_DryRun_Enb = 0;/* Referenced by: '<S168>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_LTAP_LOC_Enb = 1;/* Referenced by: '<S169>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_LTAP_PerfFlt_Enb = 1;/* Referenced by:
                                                                      * '<S79>/Calib'
                                                                      * '<S170>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_LTActPumpDryRun_FA_Dial =
    0;                                 /* Referenced by: '<S306>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_LTActPumpDryRun_FA_SD = 0;/* Referenced by: '<S307>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_LTActPumpDryRun_SD = 0;/* Referenced by: '<S308>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_PSA_EVA_Disbl = 0;/* Referenced by: '<S241>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_PresSensHi_Enb = 1;/* Referenced by:
                                                                      * '<S109>/Calib'
                                                                      * '<S178>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_PresSensLo_Enb = 1;/* Referenced by:
                                                                      * '<S111>/Calib'
                                                                      * '<S180>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_PresSensPerf_Enb = 1;/* Referenced by:
                                                                      * '<S107>/Calib'
                                                                      * '<S174>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_PressSnsr_FltDtct_Dial =
    0;                                 /* Referenced by: '<S310>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_PressSnsr_FltDtct_SD = 0;/* Referenced by: '<S311>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_PropSysActv_Dial = 0;/* Referenced by: '<S312>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_PropSysActv_SD = 0;/* Referenced by: '<S313>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_RadFan_FltDtct_Dial = 0;/* Referenced by: '<S314>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_RadFan_FltDtct_SD = 0;/* Referenced by: '<S315>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_RadFan_FltDtctd_Enb = 1;/* Referenced by: '<S181>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_SDSActualState_SD = 0;/* Referenced by: '<S12>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_SDS_ActTmpDeB_Enb = 1;/* Referenced by: '<S208>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_SDS_ActualState_Dsbl = 0;/* Referenced by: '<S242>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_SDS_ClntTempErr_SD = 0;/* Referenced by: '<S13>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_SDS_ClntTmpInAct_SD = 0;/* Referenced by: '<S14>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_SDS_CoolingReq_D = 0;/* Referenced by: '<S15>/Calib' */

#endif

#if !Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_SDS_CoolingReq_NF_Dial =
    0;                                 /* Referenced by: '<S321>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_SDS_CoolingReq_SD = 0;/* Referenced by: '<S16>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_SDS_CoolingReq_init = 0;/* Referenced by: '<S322>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_SDS_HV_PwrAvg_SD = 0;/* Referenced by: '<S17>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_SDS_HeatingReq_D = 0;/* Referenced by: '<S18>/Calib' */

#endif

#if !Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_SDS_HeatingReq_NF_Dial =
    0;                                 /* Referenced by: '<S323>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_SDS_HeatingReq_SD = 0;/* Referenced by: '<S19>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_SDS_HeatingReq_init = 0;/* Referenced by: '<S324>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_SDS_PwrAvgRcvd_Enb = 0;/* Referenced by: '<S48>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_SDS_RHSC2_Healthy_Disbl =
    0;                                 /* Referenced by: '<S243>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_SDS_ZeroActState_Disbl =
    0;                                 /* Referenced by: '<S244>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(boolean, AVTR_VAR_INIT) KeAVTR_b_SSDR_KeySts_EVA_Disbl = 0;/* Referenced by: '<S245>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(float32, AVTR_VAR_INIT) KeAVTR_dT_EVA_FakdHystErr = 2.0F;/* Referenced by: '<S205>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(float32, AVTR_VAR_INIT) KeAVTR_dT_Not_EVA_SDS_TempErr =
    0.0F;                              /* Referenced by: '<S206>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(float32, AVTR_VAR_INIT) KeAVTR_dT_SDS_ClntTempErr_D = 0.0F;/* Referenced by: '<S20>/Calib' */

#endif

#if !Rte_SysCon_Variant_AVTR_1

static volatile CONST(float32, AVTR_VAR_INIT) KeAVTR_dT_SDS_ClntTempErr_NF_Dial =
    0.0F;                              /* Referenced by: '<S325>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(float32, AVTR_VAR_INIT) KeAVTR_dT_SDS_ClntTempErr_init =
    0.0F;                              /* Referenced by: '<S326>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(TeAVTR_e_BFC_AllowedSt, AVTR_VAR_INIT)
    KeAVTR_e_BFC_Allowedstate_D = CeAVTR_e_BFC_NotAllowed;/* Referenced by: '<S21>/Calib' */

#endif

#if !Rte_SysCon_Variant_AVTR_1

static volatile CONST(TeAVTR_e_BFC_AllowedSt, AVTR_VAR_INIT)
    KeAVTR_e_BFC_Allowedstate_NF_Dial = CeAVTR_e_BFC_NotAllowed;/* Referenced by: '<S327>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(TeAVTR_e_BFC_AllowedSt, AVTR_VAR_INIT)
    KeAVTR_e_BFC_Allowedstate_init = CeAVTR_e_BFC_NotAllowed;/* Referenced by: '<S328>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(TeAVTR_e_EVA_ThermalState, AVTR_VAR_INIT)
    KeAVTR_e_EVA_ThrmlState_D = CeAVTR_e_NoEVACond;/* Referenced by:
                                                    * '<S22>/Calib'
                                                    * '<S248>/Calib'
                                                    */

#endif

#if !Rte_SysCon_Variant_AVTR_1

static volatile CONST(TeAVTR_e_EVA_ThermalState, AVTR_VAR_INIT)
    KeAVTR_e_EVA_ThrmlState_NF_Dial = CeAVTR_e_NoEVACond;/* Referenced by: '<S329>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(TeAVTR_e_EVA_ThermalState, AVTR_VAR_INIT)
    KeAVTR_e_EVA_ThrmlState_init = CeAVTR_e_NoEVACond;/* Referenced by: '<S330>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(TeAVTR_e_HCP_MaxCoolingSt, AVTR_VAR_INIT)
    KeAVTR_e_HCP_MaxCoolingSt_D = CeAVTR_e_HCP_MaxCoolingOFF;/* Referenced by: '<S23>/Calib' */

#endif

#if !Rte_SysCon_Variant_AVTR_1

static volatile CONST(TeAVTR_e_HCP_MaxCoolingSt, AVTR_VAR_INIT)
    KeAVTR_e_HCP_MaxCoolingSt_NF_Dial = CeAVTR_e_HCP_MaxCoolingOFF;/* Referenced by: '<S331>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(TeAVTR_e_HCP_MaxCoolingSt, AVTR_VAR_INIT)
    KeAVTR_e_HCP_MaxCoolingSt_init = CeAVTR_e_HCP_MaxCoolingOFF;/* Referenced by: '<S332>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(TeBTRR_e_BatCritCondSt, AVTR_VAR_INIT)
    KeAVTR_e_HVBatTempCrit_CondState_Dial = CeBTRR_e_BatNotCrit;/* Referenced by: '<S300>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(TeHVTR_e_HV_BatCntctrStat, AVTR_VAR_INIT)
    KeAVTR_e_HV_BatCntctrStat_Dial = CeHVTR_e_Open;/* Referenced by: '<S288>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(TeBTRR_e_BatTmpRng, AVTR_VAR_INIT)
    KeAVTR_e_HV_BatTmpRng_Dial = CeBTRR_e_BatTmpNormalRng;/* Referenced by: '<S290>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(TeSSDR_e_KeySts, AVTR_VAR_INIT) KeAVTR_e_KeySts_Dial =
    CeSSDR_e_KeyOff;                   /* Referenced by: '<S305>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(TePMPR_e_FTSNA, AVTR_VAR_INIT)
    KeAVTR_e_LTActPumpDryRun_Dial = CePMPR_e_FTSNA_False;/* Referenced by: '<S309>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(TeTRIR_e_SDS_ActualState, AVTR_VAR_INIT)
    KeAVTR_e_SDSActualState_D = CeTRIR_e_SDS_OFF;/* Referenced by: '<S24>/Calib' */

#endif

#if !Rte_SysCon_Variant_AVTR_1

static volatile CONST(TeTRIR_e_SDS_ActualState, AVTR_VAR_INIT)
    KeAVTR_e_SDS_ActualState_NF_Dial = CeTRIR_e_SDS_SNA;/* Referenced by: '<S333>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(TeTRIR_e_SDS_ActualState, AVTR_VAR_INIT)
    KeAVTR_e_SDS_ActualState_init = CeTRIR_e_SDS_OFF;/* Referenced by: '<S334>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(sint16, AVTR_VAR_INIT) KeAVTR_k_BatCoolngFlt_Sts_D = 0;/* Referenced by: '<S25>/Calib' */

#endif

#if !Rte_SysCon_Variant_AVTR_1

static volatile CONST(sint16, AVTR_VAR_INIT) KeAVTR_k_BatCoolngFlt_Sts_NF_Dial =
    0;                                 /* Referenced by: '<S335>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(sint16, AVTR_VAR_INIT) KeAVTR_k_BatCoolngFlt_Sts_init = 0;/* Referenced by: '<S336>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(float32, AVTR_VAR_INIT) KeAVTR_m_SDS_ItermGain = 0.0F;/* Referenced by: '<S225>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(float32, AVTR_VAR_INIT) KeAVTR_t_SDS_ActTmpDeb_Tim = 5.0F;/* Referenced by: '<S209>/Calib' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static volatile CONST(float32, AVTR_VAR_INIT) KeAVTR_t_SDS_ItermMax = 0.0F;/* Referenced by: '<S226>/Calib' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_AVTR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_AVTR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_AVTR_1

static VAR(float32, AVTR_VAR_INIT) VeAVTR_P_SDS_HV_PwrAvgRaw;/* '<S39>/Switch1' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(float32, AVTR_VAR_INIT) VeAVTR_P_SDS_HV_PwrAvg_BD;/* '<S27>/Switch1' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(float32, AVTR_VAR_INIT) VeAVTR_T_CellTempMaxUsed_AD;/* '<S276>/Switch' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(float32, AVTR_VAR_INIT) VeAVTR_T_CellTempMinUsed_AD;/* '<S277>/Switch' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(float32, AVTR_VAR_INIT) VeAVTR_T_SDS_ClntTmpIn_Act;/* '<S39>/Rounding2' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(float32, AVTR_VAR_INIT) VeAVTR_T_SDS_ClntTmpIn_ActDeb;/* '<S218>/Gain' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(float32, AVTR_VAR_INIT) VeAVTR_T_SDS_ClntTmpIn_Tgt;/* '<S39>/Switch2' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(boolean, AVTR_VAR_INIT) VeAVTR_b_BatTmpRng_EVA_On;/* '<S29>/Logical5' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(boolean, AVTR_VAR_INIT) VeAVTR_b_EVA_Allowed_BD;/* '<S33>/Switch' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(boolean, AVTR_VAR_INIT) VeAVTR_b_EVA_Allowed_Raw;/* '<S33>/Logical5' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(boolean, AVTR_VAR_INIT) VeAVTR_b_HTAP_FunPer_FltDtct_AD;/* '<S279>/Switch' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(boolean, AVTR_VAR_INIT) VeAVTR_b_HtrOrEAC_FltRawPrst_AD;/* '<S281>/Switch' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(boolean, AVTR_VAR_INIT) VeAVTR_b_LTActPumpDryRun_FA_AD;/* '<S283>/Switch1' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(boolean, AVTR_VAR_INIT) VeAVTR_b_PrepareToShtdwn_AD;/* '<S278>/Switch' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(boolean, AVTR_VAR_INIT) VeAVTR_b_PressSnsr_FltDtct_AD;/* '<S284>/Switch' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(boolean, AVTR_VAR_INIT) VeAVTR_b_PropSysActv_AD;/* '<S285>/Switch' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(boolean, AVTR_VAR_INIT) VeAVTR_b_RadFan_FltDtct_AD;/* '<S286>/Switch' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(boolean, AVTR_VAR_INIT) VeAVTR_b_SDS_CoolActvApp2;/* '<S219>/Switch1' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(boolean, AVTR_VAR_INIT) VeAVTR_b_SDS_CoolingReq_App1;/* '<S191>/Switch1' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(boolean, AVTR_VAR_INIT) VeAVTR_b_SDS_CoolingReq_BD;/* '<S26>/Switch2' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(boolean, AVTR_VAR_INIT) VeAVTR_b_SDS_HeatActvApp2;/* '<S211>/Logical_Operator' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(boolean, AVTR_VAR_INIT) VeAVTR_b_SDS_HeatingReq_App1;/* '<S186>/Logical3' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(boolean, AVTR_VAR_INIT) VeAVTR_b_SDS_HeatingReq_BD;/* '<S26>/Switch3' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(boolean, AVTR_VAR_INIT) VeAVTR_b_SDS_InvData_RHSC2;/* '<S253>/Logical' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(boolean, AVTR_VAR_INIT) VeAVTR_b_SDS_LOC_RHSC2;/* '<S253>/Logical1' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(boolean, AVTR_VAR_INIT) VeAVTR_b_SDS_RHSC2_Healthy;/* '<S265>/AND' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(boolean, AVTR_VAR_INIT) VeAVTR_b_SDS_RHSC2_Healthy_Raw;/* '<S253>/Logical6' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(float32, AVTR_VAR_INIT) VeAVTR_dT_SDS_ClntTempErrI_App2;/* '<S213>/MinMax' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(float32, AVTR_VAR_INIT) VeAVTR_dT_SDS_ClntTempErrP_App2;/* '<S212>/Abs' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(float32, AVTR_VAR_INIT) VeAVTR_dT_SDS_ClntTempErr_App1;/* '<S187>/Switch2' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(float32, AVTR_VAR_INIT) VeAVTR_dT_SDS_ClntTempErr_App2;/* '<S31>/Sum' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(float32, AVTR_VAR_INIT) VeAVTR_dT_SDS_ClntTempErr_BD;/* '<S26>/Switch1' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(float32, AVTR_VAR_INIT) VeAVTR_dT_SDS_ClntTempErr_Raw;/* '<S187>/Abs' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(float32, AVTR_VAR_INIT) VeAVTR_dT_SDS_ClntTempErr_TT_BD;/* '<S26>/Switch4' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(float32, AVTR_VAR_INIT) VeAVTR_dT_SDS_ClntTempErr_W_fak;/* '<S187>/Switch1' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(TeAVTR_e_BFC_AllowedSt, AVTR_VAR_INIT) VeAVTR_e_BFC_Allowedstate_BD;/* '<S33>/Switch1' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(sint16, AVTR_VAR_INIT) VeAVTR_e_BatCoolngFlt_Sts_BD;/* '<S28>/Switch2' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(sint16, AVTR_VAR_INIT) VeAVTR_e_BatCoolngFlt_Sts_BD_App1;/* '<S49>/Merge' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(sint16, AVTR_VAR_INIT) VeAVTR_e_BatCoolngFlt_Sts_BD_App2;/* '<S50>/Merge' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(TeAVTR_e_EVA_ThermalState, AVTR_VAR_INIT) VeAVTR_e_EVA_ThermalStates;/* '<S4>/Truth_Table1' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(TeAVTR_e_EVA_ThermalState, AVTR_VAR_INIT) VeAVTR_e_EVA_ThrmlState_BD;/* '<S38>/UnitDelay' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(TeAVTR_e_HCP_MaxCoolingSt, AVTR_VAR_INIT)
    VeAVTR_e_HCP_MaxCoolingSt_BD;      /* '<S40>/Switch' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(TeHVTR_e_HV_BatCntctrStat, AVTR_VAR_INIT)
    VeAVTR_e_HV_BatCntctrStat_AD;      /* '<S274>/Switch' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(TeBTRR_e_BatCritCondSt, AVTR_VAR_INIT)
    VeAVTR_e_HV_BatTempCrit_CondState_AD;/* '<S280>/Switch' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(TeBTRR_e_BatTmpRng, AVTR_VAR_INIT) VeAVTR_e_HV_BatTmpRng_AD;/* '<S275>/Switch' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(TeSSDR_e_KeySts, AVTR_VAR_INIT) VeAVTR_e_KeySts_AD;/* '<S282>/Switch' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(TePMPR_e_FTSNA, AVTR_VAR_INIT) VeAVTR_e_LTActPumpDryRun_AD;/* '<S283>/Switch' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(TeTRIR_e_SDS_ActualState, AVTR_VAR_INIT) VeAVTR_e_SDS_ActualState;/* '<S39>/Switch3' */

#endif

#if Rte_SysCon_Variant_AVTR_1

static VAR(TeTRIR_e_HCP_MaxCoolingReq, AVTR_VAR_INIT) VeAVTR_e_SDS_MaxCoolingReq;/* '<S39>/Switch4' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_AVTR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_AVTR
#include "MemMap.h"

VAR(B_AVTR_ac_T, AVTR_VAR_INIT) AVTR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_AVTR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_AVTR
#include "MemMap.h"

VAR(DW_AVTR_ac_T, AVTR_VAR_INIT) AVTR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_AVTR
#include "MemMap.h"

/* Model step function for TID1 */
#if Rte_SysCon_Variant_AVTR_1

FUNC(void, AVTR_CODE) AVTR_MedTEH(void) /* Explicit Task: MedTEH */
{

#if Rte_SysCon_Variant_AVTR_1

    boolean aVarTruthTableCondition_3;

#endif

#if Rte_SysCon_Variant_AVTR_1

    float32 tmpRead;

#endif

#if Rte_SysCon_Variant_AVTR_1

    float32 rtb_Sum;

#endif

#if Rte_SysCon_Variant_AVTR_1

    boolean rtb_Comparison2;

#endif

#if Rte_SysCon_Variant_AVTR_1

    boolean rtb_Logical4_b;

#endif

#if Rte_SysCon_Variant_AVTR_1

    boolean rtb_Logical8_f;

#endif

#if Rte_SysCon_Variant_AVTR_1

    boolean rtb_Logical3;

#endif

#if Rte_SysCon_Variant_AVTR_1

    float32 rtb_Sum1;

#endif

#if Rte_SysCon_Variant_AVTR_1

    boolean rtb_Comparison;

#endif

#if Rte_SysCon_Variant_AVTR_1

    float32 rtb_Sum_c;

#endif

#if Rte_SysCon_Variant_AVTR_1

    boolean rtb_Comparison2_f2;

#endif

#if Rte_SysCon_Variant_AVTR_1

    boolean rtb_Logical1_ex;

#endif

#if Rte_SysCon_Variant_AVTR_1

    boolean rtb_Logical22_n;

#endif

#if Rte_SysCon_Variant_AVTR_1

    boolean rtb_Logical2_d;

#endif

#if Rte_SysCon_Variant_AVTR_1

    boolean rtb_Logical3_ji;

#endif

#if Rte_SysCon_Variant_AVTR_1

    boolean rtb_UnitDelay_k3;

#endif

#if Rte_SysCon_Variant_AVTR_1

    boolean rtb_NotEqual_i;

#endif

#if Rte_SysCon_Variant_AVTR_1

    boolean rtb_Comparison2_i;

#endif

#if Rte_SysCon_Variant_AVTR_1

    TeAVTR_e_HCP_MaxCoolingSt tmp;

#endif

#if Rte_SysCon_Variant_AVTR_1

    boolean UnitDelay_DSTATE_cf_tmp;

#endif

#if Rte_SysCon_Variant_AVTR_1

    TeAVTR_e_EVA_ThermalState tmp_0;

#endif

#if Rte_SysCon_Variant_AVTR_1

    uint32 rtb_Logical8_i_tmp;

#endif

#if Rte_SysCon_Variant_AVTR_1

    uint32 rtb_Logical8_i_tmp_0;

#endif

#if Rte_SysCon_Variant_AVTR_1

    uint32 rtb_Logical22_d_tmp;

#endif

#if Rte_SysCon_Variant_AVTR_1

    uint32 rtb_Logical22_d_tmp_0;

#endif

#if Rte_SysCon_Variant_AVTR_1

    uint32 rtb_Logical4_k_tmp;

#endif

#if Rte_SysCon_Variant_AVTR_1

    uint32 rtb_Logical4_k_tmp_0;

#endif

#if Rte_SysCon_Variant_AVTR_1

    uint32 rtb_Logical4_k_tmp_1;

#endif

#if Rte_SysCon_Variant_AVTR_1

    uint32 rtb_Logical4_k_tmp_2;

#endif

#if Rte_SysCon_Variant_AVTR_1

    uint32 rtb_Logical4_k_tmp_3;

#endif

#if Rte_SysCon_Variant_AVTR_1

    uint32 rtb_Logical4_k_tmp_4;

#endif

#if Rte_SysCon_Variant_AVTR_1

    uint32 rtb_Logical4_k_tmp_5;

#endif

#if Rte_SysCon_Variant_AVTR_1

    uint32 rtb_Logical4_k_tmp_6;

#endif

#if Rte_SysCon_Variant_AVTR_1

    uint32 rtb_Logical4_k_tmp_7;

#endif

#if Rte_SysCon_Variant_AVTR_1

    uint32 rtb_Logical4_k_tmp_8;

#endif

#if Rte_SysCon_Variant_AVTR_1

    uint32 rtb_Logical22_d_tmp_1;

#endif

#if Rte_SysCon_Variant_AVTR_1

    uint32 rtb_Logical22_d_tmp_2;

#endif

#if Rte_SysCon_Variant_AVTR_1

    uint32 rtb_Logical3_p_tmp;

#endif

#if Rte_SysCon_Variant_AVTR_1

    uint32 rtb_Logical3_p_tmp_0;

#endif

#if Rte_SysCon_Variant_AVTR_1

    boolean rtb_Logical2_nw_tmp;

#endif

#if Rte_SysCon_Variant_AVTR_1

    uint32 rtb_UnitDelay_cs_tmp;

#endif

#if Rte_SysCon_Variant_AVTR_1

    uint32 rtb_UnitDelay_cs_tmp_0;

#endif

#if Rte_SysCon_Variant_AVTR_1

    boolean tmp_1;

#endif

#if Rte_SysCon_Variant_AVTR_1

    boolean tmp_2;

#endif

#if Rte_SysCon_Variant_AVTR_1

    boolean tmp_3;

#endif

#if Rte_SysCon_Variant_AVTR_1

    boolean tmp_4;

#endif

#if Rte_SysCon_Variant_AVTR_1

    TeAVTR_e_BFC_AllowedSt aVarTruthTableCondition_1_tmp;

#endif

#if Rte_SysCon_Variant_AVTR_1

    TeTRIR_e_SDS_ActualState rtb_OR1_d_tmp;

#endif

#if Rte_SysCon_Variant_AVTR_1

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
    /* Outputs for Function Call SubSystem: '<Root>/AVTR_MedTEH' */
    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommRHSC2' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommRHSC2'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommRHSC2_Value
        (&AVTR_ac_DW.StatusByte_LostCommRHSC2);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_InvData_RHSC2' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_RHSC2'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_RHSC2_Value
        (&AVTR_ac_DW.StatusByte_InvData_RHSC2);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommBCP' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommBCP'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommBCP_Value
        (&AVTR_ac_DW.StatusByte_LostCommBCP);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LosCommBECM_A' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LosCommBECM_A'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LosCommBECM_A_Value
        (&AVTR_ac_DW.StatusByte_LosCommBECM_A);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_BattCoolLvlSnsCkt' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattCoolLvlSnsCkt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattCoolLvlSnsCkt_Value
        (&AVTR_ac_DW.StatusByte_BattCoolLvlSnsCkt);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_BattCoolLvlLow' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattCoolLvlLow'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattCoolLvlLow_Value
        (&AVTR_ac_DW.StatusByte_BattCoolLvlLow);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_BattCool' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattCool'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattCool_Value
        (&AVTR_ac_DW.StatusByte_BattCool);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_AC_RefrigPresSnsrALo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigPresSnsrALo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigPresSnsrALo_Value
        (&AVTR_ac_DW.StatusByte_AC_RefrigPresSnsrALo);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_AC_RefrigPresSnsrAHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigPresSnsrAHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigPresSnsrAHi_Value
        (&AVTR_ac_DW.StatusByte_AC_RefrigPresSnsrAHi);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommEAC' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommEAC'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommEAC_Value
        (&AVTR_ac_DW.StatusByte_LostCommEAC);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CommBusOff' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CommBusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CommBusOff_Value
        (&AVTR_ac_DW.StatusByte_CommBusOff);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_EACPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_EACPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_EACPerf_Value
        (&AVTR_ac_DW.StatusByte_EACPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CoolantVlvA_StkOpn' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolantVlvA_StkOpn'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolantVlvA_StkOpn_Value
        (&AVTR_ac_DW.StatusByte_CoolantVlvA_StkOpn);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CoolantVlvA_Perf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolantVlvA_Perf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolantVlvA_Perf_Value
        (&AVTR_ac_DW.StatusByte_CoolantVlvA_Perf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CoolCtrlVlv1Ckt' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolCtrlVlv1Ckt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolCtrlVlv1Ckt_Value
        (&AVTR_ac_DW.StatusByte_CoolCtrlVlv1Ckt);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CoolCtrlVlv1CktLo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolCtrlVlv1CktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolCtrlVlv1CktLo_Value
        (&AVTR_ac_DW.StatusByte_CoolCtrlVlv1CktLo);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CoolCtrlVlv1CktHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolCtrlVlv1CktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolCtrlVlv1CktHi_Value
        (&AVTR_ac_DW.StatusByte_CoolCtrlVlv1CktHi);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_BattCoolPmpPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattCoolPmpPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattCoolPmpPerf_Value
        (&AVTR_ac_DW.StatusByte_BattCoolPmpPerf);

    /* End of Outputs for SubSystem: '<Root>/AVTR_MedTEH' */

    /* Inport: '<Root>/VeCPDR_b_HTAP_FunPer_FltDtct' */
    (void)Rte_Read_VeCPDR_b_HTAP_FunPer_FltDtct_Value
        ((&(VeAVTR_b_HTAP_FunPer_FltDtct_AD)));

    /* Inport: '<Root>/VeHCDR_b_PressSnsr_FltDtct' */
    (void)Rte_Read_VeHCDR_b_PressSnsr_FltDtct_Value
        ((&(VeAVTR_b_PressSnsr_FltDtct_AD)));

    /* Inport: '<Root>/VeTRIR_b_SDS_MaxCoolingReq_FA' */
    (void)Rte_Read_VeTRIR_b_SDS_MaxCoolingReq_FA_Value(&rtb_Comparison2_i);

    /* Inport: '<Root>/VeTRIR_b_SDS_ActualState_FA' */
    (void)Rte_Read_VeTRIR_b_SDS_ActualState_FA_Value(&rtb_Comparison2);

    /* Inport: '<Root>/VeTRIR_b_SDS_ClntTmpIn_Tgt_FA' */
    (void)Rte_Read_VeTRIR_b_SDS_ClntTmpIn_Tgt_FA_Value(&rtb_UnitDelay_k3);

    /* Inport: '<Root>/VeTRIR_b_SDS_ClntTmpIn_Act_FA_final' */
    (void)Rte_Read_VeTRIR_b_SDS_ClntTmpIn_Act_FA_final_Value
        (&aVarTruthTableCondition_3);

    /* Inport: '<Root>/VeTRIR_b_SDS_HV_PwrAvgRaw_FA' */
    (void)Rte_Read_VeTRIR_b_SDS_HV_PwrAvgRaw_FA_Value(&rtb_Comparison);

    /* Inport: '<Root>/VeFSCR_b_RadFan_FltDtct' */
    (void)Rte_Read_VeFSCR_b_RadFan_FltDtct_Value((&(VeAVTR_b_RadFan_FltDtct_AD)));

    /* Inport: '<Root>/VePMIR_b_LTActvPumpDryRun_FA' */
    (void)Rte_Read_VePMIR_b_LTActvPumpDryRun_FA_Value
        ((&(VeAVTR_b_LTActPumpDryRun_FA_AD)));

    /* Inport: '<Root>/VePMIR_e_LTActvPumpDryRun' */
    (void)Rte_Read_VePMIR_e_LTActvPumpDryRun_Value
        ((&(VeAVTR_e_LTActPumpDryRun_AD)));

    /* Inport: '<Root>/VeBTRR_e_HV_BatTmpRng' */
    (void)Rte_Read_VeBTRR_e_HV_BatTmpRng_Value((&(VeAVTR_e_HV_BatTmpRng_AD)));

    /* Inport: '<Root>/VeBTRR_e_HV_BatTempCrit_CondState_New' */
    (void)Rte_Read_VeBTRR_e_HV_BatTempCrit_CondState_New_Value
        ((&(VeAVTR_e_HV_BatTempCrit_CondState_AD)));

    /* Inport: '<Root>/VeSSDR_b_PrepareToShtdwn' */
    (void)Rte_Read_VeSSDR_b_PrepareToShtdwn_Value((&(VeAVTR_b_PrepareToShtdwn_AD)));

    /* Inport: '<Root>/VeHPMR_b_PropSysActv' */
    (void)Rte_Read_VeHPMR_b_PropSysActv_Value((&(VeAVTR_b_PropSysActv_AD)));

    /* Inport: '<Root>/VeBPCR_e_HV_BatCntctrStat' */
    (void)Rte_Read_VeBPCR_e_HV_BatCntctrStat_Value
        ((&(VeAVTR_e_HV_BatCntctrStat_AD)));

    /* Inport: '<Root>/VeSSDR_e_KeySts' */
    (void)Rte_Read_VeSSDR_e_KeySts_Value((&(VeAVTR_e_KeySts_AD)));

    /* Inport: '<Root>/VeBTRR_T_CellTempMinUsed' */
    (void)Rte_Read_VeBTRR_T_CellTempMinUsed_Value((&(VeAVTR_T_CellTempMinUsed_AD)));

    /* Inport: '<Root>/VeBTRR_T_CellTempMaxUsed' */
    (void)Rte_Read_VeBTRR_T_CellTempMaxUsed_Value((&(VeAVTR_T_CellTempMaxUsed_AD)));

    /* Inport: '<Root>/VeTPCR_b_HtrOrEAC_FltRawPrst' */
    (void)Rte_Read_VeTPCR_b_HtrOrEAC_FltRawPrst_Value
        ((&(VeAVTR_b_HtrOrEAC_FltRawPrst_AD)));

    /* Outputs for Function Call SubSystem: '<Root>/AVTR_MedTEH' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/EVA_Signals'
     */
    /* Switch: '<S284>/Switch' incorporates:
     *  Constant: '<S311>/Calib'
     */
    if (KeAVTR_b_PressSnsr_FltDtct_SD)
    {
        /* Switch: '<S284>/Switch' incorporates:
         *  Constant: '<S310>/Calib'
         *  Inport: '<Root>/VeHCDR_b_PressSnsr_FltDtct'
         */
        VeAVTR_b_PressSnsr_FltDtct_AD = KeAVTR_b_PressSnsr_FltDtct_Dial;
    }

    /* End of Switch: '<S284>/Switch' */

    /* Switch: '<S281>/Switch' incorporates:
     *  Constant: '<S302>/Calib'
     */
    if (KeAVTR_b_HtrOrEAC_FltRawPrst_SD)
    {
        /* Switch: '<S281>/Switch' incorporates:
         *  Constant: '<S301>/Calib'
         *  Inport: '<Root>/VeTPCR_b_HtrOrEAC_FltRawPrst'
         */
        VeAVTR_b_HtrOrEAC_FltRawPrst_AD = KeAVTR_b_HtrOrEAC_FltRawPrst_Dial;
    }

    /* End of Switch: '<S281>/Switch' */

    /* Switch: '<S279>/Switch' incorporates:
     *  Constant: '<S298>/Calib'
     */
    if (KeAVTR_b_HTAP_FunPer_FltDtct_SD)
    {
        /* Switch: '<S279>/Switch' incorporates:
         *  Constant: '<S297>/Calib'
         *  Inport: '<Root>/VeCPDR_b_HTAP_FunPer_FltDtct'
         */
        VeAVTR_b_HTAP_FunPer_FltDtct_AD = KeAVTR_b_HTAP_FunPer_FltDtct_Dial;
    }

    /* End of Switch: '<S279>/Switch' */

    /* Switch: '<S276>/Switch' incorporates:
     *  Constant: '<S292>/Calib'
     */
    if (KeAVTR_b_CellTempMaxUsed_SD)
    {
        /* Switch: '<S276>/Switch' incorporates:
         *  Constant: '<S291>/Calib'
         *  Inport: '<Root>/VeBTRR_T_CellTempMaxUsed'
         */
        VeAVTR_T_CellTempMaxUsed_AD = KeAVTR_T_CellTempMaxUsed_Dial;
    }

    /* End of Switch: '<S276>/Switch' */

    /* Switch: '<S277>/Switch' incorporates:
     *  Constant: '<S294>/Calib'
     */
    if (KeAVTR_b_CellTempMinUsed_SD)
    {
        /* Switch: '<S277>/Switch' incorporates:
         *  Constant: '<S293>/Calib'
         *  Inport: '<Root>/VeBTRR_T_CellTempMinUsed'
         */
        VeAVTR_T_CellTempMinUsed_AD = KeAVTR_T_CellTempMinUsed_Dial;
    }

    /* End of Switch: '<S277>/Switch' */

    /* Switch: '<S282>/Switch' incorporates:
     *  Constant: '<S304>/Calib'
     */
    if (KeAVTR_b_KeySts_SD)
    {
        /* Switch: '<S282>/Switch' incorporates:
         *  Constant: '<S305>/Calib'
         *  Inport: '<Root>/VeSSDR_e_KeySts'
         */
        VeAVTR_e_KeySts_AD = KeAVTR_e_KeySts_Dial;
    }

    /* End of Switch: '<S282>/Switch' */

    /* Switch: '<S274>/Switch' incorporates:
     *  Constant: '<S287>/Calib'
     */
    if (KeAVTR_b_HV_BatCntctrStat_SD)
    {
        /* Switch: '<S274>/Switch' incorporates:
         *  Constant: '<S288>/Calib'
         *  Inport: '<Root>/VeBPCR_e_HV_BatCntctrStat'
         */
        VeAVTR_e_HV_BatCntctrStat_AD = KeAVTR_e_HV_BatCntctrStat_Dial;
    }

    /* End of Switch: '<S274>/Switch' */

    /* Switch: '<S285>/Switch' incorporates:
     *  Constant: '<S313>/Calib'
     */
    if (KeAVTR_b_PropSysActv_SD)
    {
        /* Switch: '<S285>/Switch' incorporates:
         *  Constant: '<S312>/Calib'
         *  Inport: '<Root>/VeHPMR_b_PropSysActv'
         */
        VeAVTR_b_PropSysActv_AD = KeAVTR_b_PropSysActv_Dial;
    }

    /* End of Switch: '<S285>/Switch' */

    /* Switch: '<S278>/Switch' incorporates:
     *  Constant: '<S296>/Calib'
     */
    if (KeAVTR_b_HCPShutDwnCmd_SD)
    {
        /* Switch: '<S278>/Switch' incorporates:
         *  Constant: '<S295>/Calib'
         *  Inport: '<Root>/VeSSDR_b_PrepareToShtdwn'
         */
        VeAVTR_b_PrepareToShtdwn_AD = KeAVTR_b_HCPShutDwnCmd_Dial;
    }

    /* End of Switch: '<S278>/Switch' */

    /* Switch: '<S280>/Switch' incorporates:
     *  Constant: '<S299>/Calib'
     */
    if (KeAVTR_b_HV_BatTempCrit_CondState_SD)
    {
        /* Switch: '<S280>/Switch' incorporates:
         *  Constant: '<S300>/Calib'
         *  Inport: '<Root>/VeBTRR_e_HV_BatTempCrit_CondState_New'
         */
        VeAVTR_e_HV_BatTempCrit_CondState_AD =
            KeAVTR_e_HVBatTempCrit_CondState_Dial;
    }

    /* End of Switch: '<S280>/Switch' */

    /* Switch: '<S275>/Switch' incorporates:
     *  Constant: '<S289>/Calib'
     */
    if (KeAVTR_b_HV_BatTmpRng_SD)
    {
        /* Switch: '<S275>/Switch' incorporates:
         *  Constant: '<S290>/Calib'
         *  Inport: '<Root>/VeBTRR_e_HV_BatTmpRng'
         */
        VeAVTR_e_HV_BatTmpRng_AD = KeAVTR_e_HV_BatTmpRng_Dial;
    }

    /* End of Switch: '<S275>/Switch' */

    /* Switch: '<S283>/Switch' incorporates:
     *  Constant: '<S308>/Calib'
     */
    if (KeAVTR_b_LTActPumpDryRun_SD)
    {
        /* Switch: '<S283>/Switch' incorporates:
         *  Constant: '<S309>/Calib'
         *  Inport: '<Root>/VePMIR_e_LTActvPumpDryRun'
         */
        VeAVTR_e_LTActPumpDryRun_AD = KeAVTR_e_LTActPumpDryRun_Dial;
    }

    /* End of Switch: '<S283>/Switch' */

    /* Switch: '<S283>/Switch1' incorporates:
     *  Constant: '<S307>/Calib'
     */
    if (KeAVTR_b_LTActPumpDryRun_FA_SD)
    {
        /* Switch: '<S283>/Switch1' incorporates:
         *  Constant: '<S306>/Calib'
         *  Inport: '<Root>/VePMIR_b_LTActvPumpDryRun_FA'
         */
        VeAVTR_b_LTActPumpDryRun_FA_AD = KeAVTR_b_LTActPumpDryRun_FA_Dial;
    }

    /* End of Switch: '<S283>/Switch1' */

    /* Switch: '<S286>/Switch' incorporates:
     *  Constant: '<S315>/Calib'
     */
    if (KeAVTR_b_RadFan_FltDtct_SD)
    {
        /* Switch: '<S286>/Switch' incorporates:
         *  Constant: '<S314>/Calib'
         *  Inport: '<Root>/VeFSCR_b_RadFan_FltDtct'
         */
        VeAVTR_b_RadFan_FltDtct_AD = KeAVTR_b_RadFan_FltDtct_Dial;
    }

    /* End of Switch: '<S286>/Switch' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/EVA_Control'
     */
    /* Logic: '<S253>/Logical' incorporates:
     *  Constant: '<S260>/Constant1'
     *  Constant: '<S260>/Constant2'
     *  Constant: '<S263>/Calib'
     *  DataStoreRead: '<S260>/StatusByte_InvData_RHSC2'
     *  Logic: '<S260>/LogicalOperator'
     *  RelationalOperator: '<S260>/RelationalOperator1'
     *  RelationalOperator: '<S260>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S260>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S260>/BitwiseOperator2'
     */
    VeAVTR_b_SDS_InvData_RHSC2 = ((KeAVTR_b_InvDataOvrd) && (((((uint32)
        AVTR_ac_DW.StatusByte_InvData_RHSC2) & 1U) != 0U) && ((((uint32)
        AVTR_ac_DW.StatusByte_InvData_RHSC2) & 64U) == 0U)));

    /* Logic: '<S253>/Logical1' incorporates:
     *  Constant: '<S261>/Constant1'
     *  Constant: '<S261>/Constant2'
     *  Constant: '<S264>/Calib'
     *  DataStoreRead: '<S261>/StatusByte_LostCommRHSC2'
     *  Logic: '<S261>/LogicalOperator'
     *  RelationalOperator: '<S261>/RelationalOperator1'
     *  RelationalOperator: '<S261>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S261>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S261>/BitwiseOperator2'
     */
    VeAVTR_b_SDS_LOC_RHSC2 = ((KeAVTR_b_LOCRHSC2Ovrd) && (((((uint32)
        AVTR_ac_DW.StatusByte_LostCommRHSC2) & 1U) != 0U) && ((((uint32)
        AVTR_ac_DW.StatusByte_LostCommRHSC2) & 64U) == 0U)));

    /* Logic: '<S253>/Logical6' */
    VeAVTR_b_SDS_RHSC2_Healthy_Raw = (((((((!VeAVTR_b_SDS_InvData_RHSC2) &&
        (!VeAVTR_b_SDS_LOC_RHSC2)) && (!aVarTruthTableCondition_3)) &&
        (!rtb_UnitDelay_k3)) && (!rtb_Comparison)) && (!rtb_Comparison2)) &&
        (!rtb_Comparison2_i));

    /* Outputs for Atomic SubSystem: '<S253>/TurnOnDelaySample' */
    /* Outputs for Atomic SubSystem: '<S265>/EdgeRising' */
    /* UnitDelay: '<S246>/UnitDelay' incorporates:
     *  UnitDelay: '<S266>/UnitDelay'
     */
    rtb_UnitDelay_k3 = AVTR_ac_DW.UnitDelay_DSTATE_g;

    /* Update for UnitDelay: '<S266>/UnitDelay' */
    AVTR_ac_DW.UnitDelay_DSTATE_g = VeAVTR_b_SDS_RHSC2_Healthy_Raw;

    /* Switch: '<S265>/Switch1' incorporates:
     *  Constant: '<S262>/Calib'
     *  Constant: '<S265>/ConstantValue'
     *  Constant: '<S265>/ConstantValue1'
     *  Logic: '<S265>/OR'
     *  Logic: '<S265>/OR1'
     *  Logic: '<S266>/AND'
     *  Logic: '<S266>/OR1'
     *  MinMax: '<S265>/Minimum'
     *  Sum: '<S265>/Summation'
     *  UnitDelay: '<S265>/UnitDelay'
     */
    if ((!VeAVTR_b_SDS_RHSC2_Healthy_Raw) || ((VeAVTR_b_SDS_RHSC2_Healthy_Raw) &&
         (!rtb_UnitDelay_k3)))
    {
        AVTR_ac_DW.UnitDelay_DSTATE_m = 0U;
    }
    else if (KeAVTR_Cf_SDS_RHSC2_Healthy_DebounTim < ((uint16)(((uint32)
                AVTR_ac_DW.UnitDelay_DSTATE_m) + 1U)))
    {
        /* MinMax: '<S265>/Minimum' incorporates:
         *  Constant: '<S262>/Calib'
         */
        AVTR_ac_DW.UnitDelay_DSTATE_m = KeAVTR_Cf_SDS_RHSC2_Healthy_DebounTim;
    }
    else
    {
        /* MinMax: '<S265>/Minimum' incorporates:
         *  Constant: '<S265>/ConstantValue'
         *  Sum: '<S265>/Summation'
         *  UnitDelay: '<S265>/UnitDelay'
         */
        AVTR_ac_DW.UnitDelay_DSTATE_m = (uint16)(((uint32)
            AVTR_ac_DW.UnitDelay_DSTATE_m) + 1U);
    }

    /* End of Switch: '<S265>/Switch1' */
    /* End of Outputs for SubSystem: '<S265>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S253>/TurnOnDelaySample' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/AVTR_MedTEH' */

    /* Inport: '<Root>/VeTRIR_T_SDS_ClntTmpIn_Tgt' */
    (void)Rte_Read_VeTRIR_T_SDS_ClntTmpIn_Tgt_Value(&rtb_Sum);

    /* Inport: '<Root>/VeTRIR_T_SDS_ClntTmpIn_Act' */
    (void)Rte_Read_VeTRIR_T_SDS_ClntTmpIn_Act_Value(&rtb_Sum_c);

    /* Outputs for Function Call SubSystem: '<Root>/AVTR_MedTEH' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/EVA_Control'
     */
    /* Outputs for Atomic SubSystem: '<S253>/TurnOnDelaySample' */
    /* Logic: '<S265>/AND' incorporates:
     *  Constant: '<S262>/Calib'
     *  RelationalOperator: '<S265>/GreaterThan'
     *  UnitDelay: '<S265>/UnitDelay'
     */
    VeAVTR_b_SDS_RHSC2_Healthy = ((VeAVTR_b_SDS_RHSC2_Healthy_Raw) &&
        (AVTR_ac_DW.UnitDelay_DSTATE_m >= KeAVTR_Cf_SDS_RHSC2_Healthy_DebounTim));

    /* End of Outputs for SubSystem: '<S253>/TurnOnDelaySample' */

    /* Switch: '<S39>/Switch2' */
    if (VeAVTR_b_SDS_RHSC2_Healthy)
    {
        /* Switch: '<S39>/Switch2' */
        VeAVTR_T_SDS_ClntTmpIn_Tgt = rtb_Sum;
    }

    /* End of Switch: '<S39>/Switch2' */

    /* Sum: '<S254>/Sum' incorporates:
     *  Constant: '<S251>/Calib'
     *  UnitDelay: '<S249>/UnitDelay1'
     */
    rtb_Sum = KeAVTR_T_EVA_ClntTmpInAct_FailRt + AVTR_ac_DW.UnitDelay1_DSTATE;

    /* RelationalOperator: '<S254>/Comparison2' incorporates:
     *  Constant: '<S250>/Calib'
     */
    rtb_Comparison2 = (KeAVTR_T_EVA_ClntTmpInAct_Dflt < rtb_Sum);

    /* Logic: '<S254>/Logical1' incorporates:
     *  Logic: '<S249>/Logical4'
     *  Logic: '<S249>/Logical6'
     *  RelationalOperator: '<S249>/Comparison1'
     *  Switch: '<S249>/Switch'
     */
    rtb_Comparison2_i = !VeAVTR_b_SDS_RHSC2_Healthy;

    /* Logic: '<S249>/Logical2' incorporates:
     *  Logic: '<S249>/Logical7'
     *  UnitDelay: '<S249>/UnitDelay3'
     */
    rtb_UnitDelay_k3 = (rtb_Comparison2_i && (!AVTR_ac_DW.UnitDelay3_DSTATE));

    /* Logic: '<S249>/Logical3' incorporates:
     *  Logic: '<S249>/Logical5'
     *  UnitDelay: '<S249>/UnitDelay2'
     */
    rtb_Logical3 = ((VeAVTR_b_SDS_RHSC2_Healthy) &&
                    (AVTR_ac_DW.UnitDelay2_DSTATE_b));

    /* Logic: '<S254>/Logical3' incorporates:
     *  Logic: '<S255>/Logical5'
     */
    aVarTruthTableCondition_3 = !rtb_Logical3;

    /* Outputs for Atomic SubSystem: '<S254>/SignalLatchOnWithReset' */
    /* Logic: '<S256>/OR1' incorporates:
     *  Logic: '<S254>/Logical3'
     *  Logic: '<S256>/NOT'
     *  Logic: '<S256>/OR'
     *  UnitDelay: '<S256>/UnitDelay'
     */
    AVTR_ac_DW.UnitDelay_DSTATE_gg = (rtb_UnitDelay_k3 || (((!rtb_Comparison2) &&
        aVarTruthTableCondition_3) && (AVTR_ac_DW.UnitDelay_DSTATE_gg)));

    /* End of Outputs for SubSystem: '<S254>/SignalLatchOnWithReset' */

    /* Sum: '<S254>/Sum1' incorporates:
     *  Constant: '<S252>/Calib'
     *  UnitDelay: '<S249>/UnitDelay1'
     */
    rtb_Sum1 = AVTR_ac_DW.UnitDelay1_DSTATE - KeAVTR_T_EVA_ClntTmpInAct_HealRt;

    /* Switch: '<S39>/Switch5' incorporates:
     *  UnitDelay: '<S39>/UnitDelay4'
     */
    if (VeAVTR_b_SDS_RHSC2_Healthy)
    {
        AVTR_ac_DW.UnitDelay4_DSTATE = rtb_Sum_c;
    }

    /* End of Switch: '<S39>/Switch5' */

    /* RelationalOperator: '<S254>/Comparison' incorporates:
     *  UnitDelay: '<S39>/UnitDelay4'
     */
    rtb_Comparison = (rtb_Sum1 > AVTR_ac_DW.UnitDelay4_DSTATE);

    /* Logic: '<S254>/Logical5' incorporates:
     *  Logic: '<S255>/Logical3'
     */
    UnitDelay_DSTATE_cf_tmp = !rtb_UnitDelay_k3;

    /* Outputs for Atomic SubSystem: '<S254>/SignalLatchOnWithReset1' */
    /* Logic: '<S257>/OR1' incorporates:
     *  Logic: '<S254>/Logical4'
     *  Logic: '<S254>/Logical5'
     *  Logic: '<S257>/NOT'
     *  Logic: '<S257>/OR'
     *  UnitDelay: '<S257>/UnitDelay'
     */
    AVTR_ac_DW.UnitDelay_DSTATE_cf = (rtb_Logical3 || ((rtb_Comparison &&
        UnitDelay_DSTATE_cf_tmp) && (AVTR_ac_DW.UnitDelay_DSTATE_cf)));

    /* End of Outputs for SubSystem: '<S254>/SignalLatchOnWithReset1' */

    /* Sum: '<S255>/Sum' incorporates:
     *  Constant: '<S252>/Calib'
     *  UnitDelay: '<S249>/UnitDelay1'
     */
    rtb_Sum_c = KeAVTR_T_EVA_ClntTmpInAct_HealRt + AVTR_ac_DW.UnitDelay1_DSTATE;

    /* RelationalOperator: '<S255>/Comparison2' incorporates:
     *  UnitDelay: '<S39>/UnitDelay4'
     */
    rtb_Comparison2_f2 = (AVTR_ac_DW.UnitDelay4_DSTATE < rtb_Sum_c);

    /* Outputs for Atomic SubSystem: '<S255>/SignalLatchOnWithReset' */
    /* Logic: '<S258>/OR1' incorporates:
     *  Logic: '<S255>/Logical3'
     *  Logic: '<S258>/NOT'
     *  Logic: '<S258>/OR'
     *  UnitDelay: '<S258>/UnitDelay'
     */
    AVTR_ac_DW.UnitDelay_DSTATE_h = (rtb_Logical3 || (((!rtb_Comparison2_f2) &&
        UnitDelay_DSTATE_cf_tmp) && (AVTR_ac_DW.UnitDelay_DSTATE_h)));

    /* End of Outputs for SubSystem: '<S255>/SignalLatchOnWithReset' */

    /* Sum: '<S255>/Sum1' incorporates:
     *  Constant: '<S251>/Calib'
     *  UnitDelay: '<S249>/UnitDelay1'
     */
    AVTR_ac_DW.UnitDelay1_DSTATE -= KeAVTR_T_EVA_ClntTmpInAct_FailRt;

    /* RelationalOperator: '<S255>/Comparison' incorporates:
     *  Constant: '<S250>/Calib'
     */
    rtb_Logical3 = (AVTR_ac_DW.UnitDelay1_DSTATE >
                    KeAVTR_T_EVA_ClntTmpInAct_Dflt);

    /* Outputs for Atomic SubSystem: '<S255>/SignalLatchOnWithReset1' */
    /* Logic: '<S259>/OR1' incorporates:
     *  Logic: '<S255>/Logical4'
     *  Logic: '<S255>/Logical5'
     *  Logic: '<S259>/NOT'
     *  Logic: '<S259>/OR'
     *  UnitDelay: '<S259>/UnitDelay'
     */
    AVTR_ac_DW.UnitDelay_DSTATE_a = (rtb_UnitDelay_k3 || ((rtb_Logical3 &&
        aVarTruthTableCondition_3) && (AVTR_ac_DW.UnitDelay_DSTATE_a)));

    /* End of Outputs for SubSystem: '<S255>/SignalLatchOnWithReset1' */

    /* Switch: '<S249>/Switch' incorporates:
     *  Constant: '<S250>/Calib'
     *  Logic: '<S255>/Logical2'
     *  Logic: '<S255>/Logical6'
     *  RelationalOperator: '<S249>/Comparison4'
     *  Switch: '<S255>/Switch4'
     *  Switch: '<S255>/Switch5'
     *  UnitDelay: '<S259>/UnitDelay'
     *  UnitDelay: '<S39>/UnitDelay4'
     */
    if (AVTR_ac_DW.UnitDelay4_DSTATE <= KeAVTR_T_EVA_ClntTmpInAct_Dflt)
    {
        /* Switch: '<S254>/Switch4' incorporates:
         *  Logic: '<S254>/Logical2'
         *  Switch: '<S254>/Switch5'
         *  UnitDelay: '<S256>/UnitDelay'
         *  UnitDelay: '<S257>/UnitDelay'
         */
        if (rtb_Comparison2_i || (AVTR_ac_DW.UnitDelay_DSTATE_gg))
        {
            /* Switch: '<S254>/Switch3' */
            if (AVTR_ac_DW.UnitDelay_DSTATE_gg)
            {
                /* Switch: '<S254>/Switch2' */
                if (rtb_Comparison2)
                {
                    /* UnitDelay: '<S249>/UnitDelay1' incorporates:
                     *  Switch: '<S254>/Switch3'
                     *  Switch: '<S254>/Switch4'
                     */
                    AVTR_ac_DW.UnitDelay1_DSTATE =
                        KeAVTR_T_EVA_ClntTmpInAct_Dflt;
                }
                else
                {
                    /* UnitDelay: '<S249>/UnitDelay1' incorporates:
                     *  Switch: '<S254>/Switch3'
                     *  Switch: '<S254>/Switch4'
                     */
                    AVTR_ac_DW.UnitDelay1_DSTATE = rtb_Sum;
                }

                /* End of Switch: '<S254>/Switch2' */
            }
            else
            {
                /* UnitDelay: '<S249>/UnitDelay1' incorporates:
                 *  Switch: '<S254>/Switch3'
                 *  Switch: '<S254>/Switch4'
                 */
                AVTR_ac_DW.UnitDelay1_DSTATE = KeAVTR_T_EVA_ClntTmpInAct_Dflt;
            }

            /* End of Switch: '<S254>/Switch3' */
        }
        else if (AVTR_ac_DW.UnitDelay_DSTATE_cf)
        {
            /* Switch: '<S254>/Switch1' incorporates:
             *  Switch: '<S254>/Switch5'
             */
            if (rtb_Comparison)
            {
                /* UnitDelay: '<S249>/UnitDelay1' incorporates:
                 *  Switch: '<S254>/Switch4'
                 *  Switch: '<S254>/Switch5'
                 */
                AVTR_ac_DW.UnitDelay1_DSTATE = rtb_Sum1;
            }
            else
            {
                /* UnitDelay: '<S249>/UnitDelay1' incorporates:
                 *  Switch: '<S254>/Switch4'
                 *  Switch: '<S254>/Switch5'
                 */
                AVTR_ac_DW.UnitDelay1_DSTATE = AVTR_ac_DW.UnitDelay4_DSTATE;
            }

            /* End of Switch: '<S254>/Switch1' */
        }
        else
        {
            /* UnitDelay: '<S249>/UnitDelay1' incorporates:
             *  Switch: '<S254>/Switch4'
             *  Switch: '<S254>/Switch5'
             */
            AVTR_ac_DW.UnitDelay1_DSTATE = AVTR_ac_DW.UnitDelay4_DSTATE;
        }

        /* End of Switch: '<S254>/Switch4' */
    }
    else if ((VeAVTR_b_SDS_RHSC2_Healthy) && (!AVTR_ac_DW.UnitDelay_DSTATE_a))
    {
        /* Switch: '<S255>/Switch3' incorporates:
         *  Switch: '<S255>/Switch4'
         *  UnitDelay: '<S258>/UnitDelay'
         */
        if (AVTR_ac_DW.UnitDelay_DSTATE_h)
        {
            /* Switch: '<S255>/Switch2' */
            if (rtb_Comparison2_f2)
            {
                /* UnitDelay: '<S249>/UnitDelay1' incorporates:
                 *  Switch: '<S255>/Switch3'
                 *  Switch: '<S255>/Switch4'
                 */
                AVTR_ac_DW.UnitDelay1_DSTATE = AVTR_ac_DW.UnitDelay4_DSTATE;
            }
            else
            {
                /* UnitDelay: '<S249>/UnitDelay1' incorporates:
                 *  Switch: '<S255>/Switch3'
                 *  Switch: '<S255>/Switch4'
                 */
                AVTR_ac_DW.UnitDelay1_DSTATE = rtb_Sum_c;
            }

            /* End of Switch: '<S255>/Switch2' */
        }
        else
        {
            /* UnitDelay: '<S249>/UnitDelay1' incorporates:
             *  Switch: '<S255>/Switch3'
             *  Switch: '<S255>/Switch4'
             */
            AVTR_ac_DW.UnitDelay1_DSTATE = AVTR_ac_DW.UnitDelay4_DSTATE;
        }

        /* End of Switch: '<S255>/Switch3' */
    }
    else if (AVTR_ac_DW.UnitDelay_DSTATE_a)
    {
        /* Switch: '<S255>/Switch1' incorporates:
         *  Switch: '<S255>/Switch4'
         *  Switch: '<S255>/Switch5'
         */
        if (!rtb_Logical3)
        {
            /* UnitDelay: '<S249>/UnitDelay1' incorporates:
             *  Switch: '<S255>/Switch4'
             *  Switch: '<S255>/Switch5'
             */
            AVTR_ac_DW.UnitDelay1_DSTATE = KeAVTR_T_EVA_ClntTmpInAct_Dflt;
        }

        /* End of Switch: '<S255>/Switch1' */
    }
    else
    {
        /* UnitDelay: '<S249>/UnitDelay1' incorporates:
         *  Switch: '<S255>/Switch4'
         *  Switch: '<S255>/Switch5'
         */
        AVTR_ac_DW.UnitDelay1_DSTATE = KeAVTR_T_EVA_ClntTmpInAct_Dflt;
    }

    /* Rounding: '<S39>/Rounding2' incorporates:
     *  UnitDelay: '<S249>/UnitDelay1'
     */
    VeAVTR_T_SDS_ClntTmpIn_Act = roundf(AVTR_ac_DW.UnitDelay1_DSTATE);

    /* Outputs for Atomic SubSystem: '<S185>/Hysteresis1' */
    /* Switch: '<S191>/Switch1' incorporates:
     *  RelationalOperator: '<S191>/GreaterThan'
     *  Switch: '<S185>/Switch'
     *  UnitDelay: '<S185>/UnitDelay2'
     */
    if (VeAVTR_T_SDS_ClntTmpIn_Act > VeAVTR_T_SDS_ClntTmpIn_Tgt)
    {
        /* Switch: '<S191>/Switch1' incorporates:
         *  Constant: '<S191>/ConstantValue'
         */
        VeAVTR_b_SDS_CoolingReq_App1 = true;
    }
    else
    {
        if (AVTR_ac_DW.UnitDelay2_DSTATE)
        {
            /* Switch: '<S185>/Switch' incorporates:
             *  Constant: '<S192>/Calib'
             *  Sum: '<S185>/Subtract1'
             *  UnitDelay: '<S185>/UnitDelay'
             */
            rtb_Sum_c = AVTR_ac_DW.UnitDelay_DSTATE - KeAVTR_T_EVA_CoolReqHys;
        }
        else
        {
            /* Switch: '<S185>/Switch' incorporates:
             *  Constant: '<S193>/Calib'
             *  Sum: '<S185>/Subtract3'
             */
            rtb_Sum_c = VeAVTR_T_SDS_ClntTmpIn_Tgt - KeAVTR_T_EVA_CoolReqMarg;
        }

        /* Switch: '<S191>/Switch1' incorporates:
         *  RelationalOperator: '<S191>/GreaterThan1'
         *  UnitDelay: '<S191>/UnitDelay'
         */
        VeAVTR_b_SDS_CoolingReq_App1 = ((VeAVTR_T_SDS_ClntTmpIn_Act >= rtb_Sum_c)
            && (VeAVTR_b_SDS_CoolingReq_App1));
    }

    /* End of Switch: '<S191>/Switch1' */
    /* End of Outputs for SubSystem: '<S185>/Hysteresis1' */

    /* Switch: '<S186>/Switch1' incorporates:
     *  Constant: '<S199>/Calib'
     *  Constant: '<S200>/Calib'
     *  Sum: '<S186>/Subtract2'
     *  Sum: '<S186>/Subtract4'
     *  UnitDelay: '<S186>/UnitDelay1'
     *  UnitDelay: '<S186>/UnitDelay3'
     */
    if (VeAVTR_b_SDS_HeatingReq_App1)
    {
        rtb_Sum_c = AVTR_ac_DW.UnitDelay1_DSTATE_d + KeAVTR_T_EVA_HeatReqHys;
    }
    else
    {
        rtb_Sum_c = VeAVTR_T_SDS_ClntTmpIn_Tgt - KeAVTR_T_EVA_HeatReqMarg;
    }

    /* End of Switch: '<S186>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S186>/Hysteresis2' */
    /* Switch: '<S198>/Switch1' incorporates:
     *  Constant: '<S198>/ConstantValue'
     *  RelationalOperator: '<S198>/GreaterThan'
     *  RelationalOperator: '<S198>/GreaterThan1'
     *  UnitDelay: '<S198>/UnitDelay'
     */
    if (VeAVTR_T_SDS_ClntTmpIn_Act > rtb_Sum_c)
    {
        AVTR_ac_DW.UnitDelay_DSTATE_at = true;
    }
    else
    {
        AVTR_ac_DW.UnitDelay_DSTATE_at = ((VeAVTR_T_SDS_ClntTmpIn_Act >=
            VeAVTR_T_SDS_ClntTmpIn_Tgt) && (AVTR_ac_DW.UnitDelay_DSTATE_at));
    }

    /* End of Switch: '<S198>/Switch1' */
    /* End of Outputs for SubSystem: '<S186>/Hysteresis2' */

    /* Logic: '<S186>/Logical3' incorporates:
     *  UnitDelay: '<S198>/UnitDelay'
     */
    VeAVTR_b_SDS_HeatingReq_App1 = !AVTR_ac_DW.UnitDelay_DSTATE_at;

    /* Abs: '<S187>/Abs' incorporates:
     *  Sum: '<S187>/Sum2'
     */
    VeAVTR_dT_SDS_ClntTempErr_Raw = fabsf(VeAVTR_T_SDS_ClntTmpIn_Tgt -
        VeAVTR_T_SDS_ClntTmpIn_Act);

    /* Switch: '<S187>/Switch1' incorporates:
     *  Constant: '<S187>/ConstantValue4'
     *  Logic: '<S187>/Logical1'
     *  Logic: '<S187>/Logical2'
     *  RelationalOperator: '<S187>/Comparison3'
     */
    if (((VeAVTR_b_SDS_CoolingReq_App1) || (VeAVTR_b_SDS_HeatingReq_App1)) &&
            (0.0F == VeAVTR_dT_SDS_ClntTempErr_Raw))
    {
        /* Switch: '<S187>/Switch1' incorporates:
         *  Constant: '<S205>/Calib'
         */
        VeAVTR_dT_SDS_ClntTempErr_W_fak = KeAVTR_dT_EVA_FakdHystErr;
    }
    else
    {
        /* Switch: '<S187>/Switch1' */
        VeAVTR_dT_SDS_ClntTempErr_W_fak = VeAVTR_dT_SDS_ClntTempErr_Raw;
    }

    /* End of Switch: '<S187>/Switch1' */

    /* UnitDelay: '<S38>/UnitDelay' */
    VeAVTR_e_EVA_ThrmlState_BD = AVTR_ac_DW.UnitDelay_DSTATE_p;

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/AVTO_100ms'
     */
    /* RelationalOperator: '<S187>/Comparison1' incorporates:
     *  RelationalOperator: '<S187>/Comparison2'
     *  RelationalOperator: '<S187>/Comparison4'
     *  RelationalOperator: '<S40>/Comparison2'
     *  Switch: '<S3>/Switch8'
     *  UnitDelay: '<S38>/UnitDelay'
     */
    tmp_0 = VeAVTR_e_EVA_ThrmlState_BD;

    /* Switch: '<S187>/Switch2' incorporates:
     *  Constant: '<S202>/Constant'
     *  Constant: '<S203>/Constant'
     *  Constant: '<S204>/Constant'
     *  Logic: '<S187>/Logical7'
     *  RelationalOperator: '<S187>/Comparison1'
     *  RelationalOperator: '<S187>/Comparison2'
     *  RelationalOperator: '<S187>/Comparison4'
     *  UnitDelay: '<S38>/UnitDelay'
     */
    if (((CeAVTR_e_EVA_Cool == ((uint32)VeAVTR_e_EVA_ThrmlState_BD)) ||
            (((uint32)VeAVTR_e_EVA_ThrmlState_BD) == CeAVTR_e_EVA_Heat)) ||
            (((uint32)VeAVTR_e_EVA_ThrmlState_BD) == CeAVTR_e_EVA_MaxCool))
    {
        /* Switch: '<S187>/Switch2' */
        VeAVTR_dT_SDS_ClntTempErr_App1 = VeAVTR_dT_SDS_ClntTempErr_W_fak;
    }
    else
    {
        /* Switch: '<S187>/Switch2' incorporates:
         *  Constant: '<S206>/Calib'
         */
        VeAVTR_dT_SDS_ClntTempErr_App1 = KeAVTR_dT_Not_EVA_SDS_TempErr;
    }

    /* End of Switch: '<S187>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S207>/CountDownResetEnabled' */
    /* Switch: '<S214>/Switch1' incorporates:
     *  Constant: '<S207>/ConstantValue'
     *  Constant: '<S209>/Calib'
     *  Constant: '<S214>/ConstantValue'
     *  Logic: '<S207>/Logical2'
     *  Product: '<S207>/Product'
     *  RelationalOperator: '<S207>/Comparison4'
     *  RelationalOperator: '<S214>/GreaterThan'
     *  Switch: '<S214>/Switch2'
     *  UnitDelay: '<S207>/UnitDelay'
     *  UnitDelay: '<S214>/UnitDelay'
     */
    if (VeAVTR_T_SDS_ClntTmpIn_Act != AVTR_ac_DW.UnitDelay_DSTATE_c)
    {
        AVTR_ac_DW.UnitDelay_DSTATE_f = KeAVTR_t_SDS_ActTmpDeb_Tim * 10.0F;
    }
    else
    {
        if (AVTR_ac_DW.UnitDelay_DSTATE_f > 0.0F)
        {
            /* UnitDelay: '<S214>/UnitDelay' incorporates:
             *  Constant: '<S214>/ConstantValue1'
             *  Sum: '<S214>/Subtraction'
             *  Switch: '<S214>/Switch2'
             */
            AVTR_ac_DW.UnitDelay_DSTATE_f--;
        }
    }

    /* End of Switch: '<S214>/Switch1' */

    /* RelationalOperator: '<S214>/GreaterThan1' incorporates:
     *  Constant: '<S214>/ConstantValue2'
     *  UnitDelay: '<S214>/UnitDelay'
     */
    rtb_Comparison2 = (AVTR_ac_DW.UnitDelay_DSTATE_f > 0.0F);

    /* End of Outputs for SubSystem: '<S207>/CountDownResetEnabled' */

    /* Outputs for Atomic SubSystem: '<S207>/EdgeFalling' */
    /* Logic: '<S215>/AND' incorporates:
     *  Logic: '<S215>/OR1'
     *  UnitDelay: '<S215>/UnitDelay'
     */
    rtb_UnitDelay_k3 = ((!rtb_Comparison2) && (AVTR_ac_DW.UnitDelay_DSTATE_o1));

    /* Update for UnitDelay: '<S215>/UnitDelay' */
    AVTR_ac_DW.UnitDelay_DSTATE_o1 = rtb_Comparison2;

    /* End of Outputs for SubSystem: '<S207>/EdgeFalling' */

    /* Outputs for Enabled SubSystem: '<S207>/EnabledSubsystem' incorporates:
     *  EnablePort: '<S216>/Enable'
     */
    /* Logic: '<S207>/Logical1' incorporates:
     *  Switch: '<S217>/Switch1'
     *  UnitDelay: '<S207>/UnitDelay2'
     */
    if (rtb_UnitDelay_k3 || (AVTR_ac_DW.UnitDelay2_DSTATE_d))
    {
        /* SignalConversion generated from: '<S216>/Out1' incorporates:
         *  Constant: '<S216>/ConstantValue1'
         */
        AVTR_ac_B.OutportBufferForOut1 = false;

        /* Gain: '<S218>/Gain' */
        VeAVTR_T_SDS_ClntTmpIn_ActDeb = VeAVTR_T_SDS_ClntTmpIn_Act;
    }

    /* End of Logic: '<S207>/Logical1' */
    /* End of Outputs for SubSystem: '<S207>/EnabledSubsystem' */

    /* Switch: '<S31>/Switch' incorporates:
     *  Constant: '<S208>/Calib'
     */
    if (KeAVTR_b_SDS_ActTmpDeB_Enb)
    {
        /* Switch: '<S31>/Switch' */
        rtb_Sum_c = VeAVTR_T_SDS_ClntTmpIn_ActDeb;
    }
    else
    {
        /* Switch: '<S31>/Switch' */
        rtb_Sum_c = VeAVTR_T_SDS_ClntTmpIn_Act;
    }

    /* End of Switch: '<S31>/Switch' */

    /* Sum: '<S212>/Sum2' incorporates:
     *  Sum: '<S213>/Subtract'
     *  Switch: '<S213>/Switch'
     */
    rtb_Sum = VeAVTR_T_SDS_ClntTmpIn_Tgt - rtb_Sum_c;

    /* Abs: '<S212>/Abs' incorporates:
     *  Sum: '<S212>/Sum2'
     */
    VeAVTR_dT_SDS_ClntTempErrP_App2 = fabsf(rtb_Sum);

    /* Outputs for Atomic SubSystem: '<S210>/Hysteresis2' */
    /* Switch: '<S219>/Switch1' incorporates:
     *  Constant: '<S220>/Calib'
     *  RelationalOperator: '<S219>/GreaterThan'
     *  Sum: '<S210>/Sum1'
     */
    if (rtb_Sum_c > (VeAVTR_T_SDS_ClntTmpIn_Tgt + KeAVTR_T_EVA_CoolReqHys_App2))
    {
        /* Switch: '<S219>/Switch1' incorporates:
         *  Constant: '<S219>/ConstantValue'
         */
        VeAVTR_b_SDS_CoolActvApp2 = true;
    }
    else
    {
        /* Switch: '<S219>/Switch1' incorporates:
         *  Constant: '<S221>/Calib'
         *  RelationalOperator: '<S219>/GreaterThan1'
         *  Sum: '<S210>/Sum2'
         *  UnitDelay: '<S219>/UnitDelay'
         */
        VeAVTR_b_SDS_CoolActvApp2 = ((rtb_Sum_c >=
            (KeAVTR_T_EVA_CoolReqMarg_App2 + VeAVTR_T_SDS_ClntTmpIn_Tgt)) &&
            (VeAVTR_b_SDS_CoolActvApp2));
    }

    /* End of Switch: '<S219>/Switch1' */
    /* End of Outputs for SubSystem: '<S210>/Hysteresis2' */

    /* Outputs for Atomic SubSystem: '<S211>/Hysteresis2' */
    /* Switch: '<S222>/Switch1' incorporates:
     *  Constant: '<S222>/ConstantValue'
     *  Constant: '<S223>/Calib'
     *  Constant: '<S224>/Calib'
     *  RelationalOperator: '<S222>/GreaterThan'
     *  RelationalOperator: '<S222>/GreaterThan1'
     *  Sum: '<S211>/Sum1'
     *  Sum: '<S211>/Sum2'
     *  UnitDelay: '<S222>/UnitDelay'
     */
    if (rtb_Sum_c > (VeAVTR_T_SDS_ClntTmpIn_Tgt - KeAVTR_T_EVA_HeatReqMarg_App2))
    {
        AVTR_ac_DW.UnitDelay_DSTATE_ex = true;
    }
    else
    {
        AVTR_ac_DW.UnitDelay_DSTATE_ex = ((rtb_Sum_c >=
            (VeAVTR_T_SDS_ClntTmpIn_Tgt - KeAVTR_T_EVA_HeatReqHys_App2)) &&
            (AVTR_ac_DW.UnitDelay_DSTATE_ex));
    }

    /* End of Switch: '<S222>/Switch1' */
    /* End of Outputs for SubSystem: '<S211>/Hysteresis2' */

    /* Logic: '<S211>/Logical_Operator' incorporates:
     *  UnitDelay: '<S222>/UnitDelay'
     */
    VeAVTR_b_SDS_HeatActvApp2 = !AVTR_ac_DW.UnitDelay_DSTATE_ex;

    /* Switch: '<S213>/Switch' incorporates:
     *  Constant: '<S213>/Constant'
     *  Constant: '<S225>/Calib'
     *  Logic: '<S213>/LogicalOperator'
     *  Logic: '<S213>/LogicalOperator1'
     *  Logic: '<S213>/LogicalOperator2'
     *  Product: '<S213>/Product'
     *  RelationalOperator: '<S213>/RelationalOperator'
     *  RelationalOperator: '<S213>/RelationalOperator1'
     *  Sum: '<S213>/Add'
     *  UnitDelay: '<S213>/UnitDelay'
     */
    if (((VeAVTR_T_SDS_ClntTmpIn_Tgt < rtb_Sum_c) && (VeAVTR_b_SDS_CoolActvApp2))
        || ((VeAVTR_T_SDS_ClntTmpIn_Tgt > rtb_Sum_c) &&
            (VeAVTR_b_SDS_HeatActvApp2)))
    {
        AVTR_ac_DW.UnitDelay_DSTATE_e += rtb_Sum * KeAVTR_m_SDS_ItermGain;
    }
    else
    {
        AVTR_ac_DW.UnitDelay_DSTATE_e = 0.0F;
    }

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/AVTR_MedTEH' */

    /* Inport: '<Root>/VeTRIR_e_SDS_ActualState' */
    (void)Rte_Read_VeTRIR_e_SDS_ActualState_Value((&(VeAVTR_e_SDS_ActualState)));

    /* Inport: '<Root>/VeTRIR_b_SDS_HV_PwrAvgRcvd_Raw' */
    (void)Rte_Read_VeTRIR_b_SDS_HV_PwrAvgRcvd_Raw_Value(&rtb_NotEqual_i);

    /* Inport: '<Root>/VeTRIR_P_SDS_HV_PwrAvgRaw' */
    (void)Rte_Read_VeTRIR_P_SDS_HV_PwrAvgRaw_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<Root>/AVTR_MedTEH' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/EVA_Control'
     */
    /* MinMax: '<S213>/MinMax' incorporates:
     *  Abs: '<S213>/Abs2'
     *  Constant: '<S226>/Calib'
     *  UnitDelay: '<S213>/UnitDelay'
     */
    VeAVTR_dT_SDS_ClntTempErrI_App2 = fminf(KeAVTR_t_SDS_ItermMax, fabsf
        (AVTR_ac_DW.UnitDelay_DSTATE_e));

    /* Sum: '<S31>/Sum' */
    VeAVTR_dT_SDS_ClntTempErr_App2 = VeAVTR_dT_SDS_ClntTempErrP_App2 +
        VeAVTR_dT_SDS_ClntTempErrI_App2;

    /* Switch: '<S26>/Switch1' incorporates:
     *  Constant: '<S44>/Calib'
     *  Switch: '<S26>/Switch4'
     */
    if (KeAVTR_b_EVA_TempErr_TT_S)
    {
        /* Switch: '<S26>/Switch1' */
        VeAVTR_dT_SDS_ClntTempErr_BD = VeAVTR_dT_SDS_ClntTempErr_App1;

        /* Switch: '<S26>/Switch4' */
        VeAVTR_dT_SDS_ClntTempErr_TT_BD = VeAVTR_dT_SDS_ClntTempErr_W_fak;
    }
    else
    {
        /* Switch: '<S26>/Switch1' */
        VeAVTR_dT_SDS_ClntTempErr_BD = VeAVTR_dT_SDS_ClntTempErr_App2;

        /* Switch: '<S26>/Switch4' */
        VeAVTR_dT_SDS_ClntTempErr_TT_BD = VeAVTR_dT_SDS_ClntTempErr_App2;
    }

    /* End of Switch: '<S26>/Switch1' */

    /* Switch: '<S26>/Switch2' incorporates:
     *  Constant: '<S42>/Calib'
     */
    if (KeAVTR_b_EVA_CoolReq_S)
    {
        /* Switch: '<S26>/Switch2' */
        VeAVTR_b_SDS_CoolingReq_BD = VeAVTR_b_SDS_CoolingReq_App1;
    }
    else
    {
        /* Switch: '<S26>/Switch2' */
        VeAVTR_b_SDS_CoolingReq_BD = VeAVTR_b_SDS_CoolActvApp2;
    }

    /* End of Switch: '<S26>/Switch2' */

    /* Switch: '<S26>/Switch3' incorporates:
     *  Constant: '<S43>/Calib'
     */
    if (KeAVTR_b_EVA_HeatReq_S)
    {
        /* Switch: '<S26>/Switch3' */
        VeAVTR_b_SDS_HeatingReq_BD = VeAVTR_b_SDS_HeatingReq_App1;
    }
    else
    {
        /* Switch: '<S26>/Switch3' */
        VeAVTR_b_SDS_HeatingReq_BD = VeAVTR_b_SDS_HeatActvApp2;
    }

    /* End of Switch: '<S26>/Switch3' */

    /* Switch: '<S39>/Switch3' incorporates:
     *  Switch: '<S39>/Switch1'
     */
    if (VeAVTR_b_SDS_RHSC2_Healthy)
    {
        /* Switch: '<S39>/Switch1' */
        VeAVTR_P_SDS_HV_PwrAvgRaw = tmpRead;
    }
    else
    {
        /* Switch: '<S39>/Switch3' incorporates:
         *  Inport: '<Root>/VeTRIR_e_SDS_ActualState'
         *  UnitDelay: '<S39>/UnitDelay3'
         */
        VeAVTR_e_SDS_ActualState = AVTR_ac_DW.UnitDelay3_DSTATE_h;
    }

    /* End of Switch: '<S39>/Switch3' */

    /* Switch: '<S27>/Switch1' incorporates:
     *  Constant: '<S45>/Constant'
     *  Constant: '<S48>/Calib'
     *  Logic: '<S27>/Logical6'
     *  Logic: '<S27>/Logical7'
     *  RelationalOperator: '<S27>/Comparison6'
     */
    if ((((uint32)VeAVTR_e_HV_BatCntctrStat_AD) == CeHVTR_e_Closed) &&
            (rtb_NotEqual_i || (KeAVTR_b_SDS_PwrAvgRcvd_Enb)))
    {
        /* Switch: '<S27>/Switch2' incorporates:
         *  Constant: '<S46>/Constant'
         *  RelationalOperator: '<S27>/Comparison1'
         *  Switch: '<S39>/Switch3'
         */
        if (((uint32)VeAVTR_e_SDS_ActualState) == CeTRIR_e_SDS_OFF)
        {
            /* Switch: '<S27>/Switch1' incorporates:
             *  Constant: '<S47>/Calib'
             */
            VeAVTR_P_SDS_HV_PwrAvg_BD = KeAVTR_P_SDS_PwrAvg_OffState;
        }
        else
        {
            /* Switch: '<S27>/Switch1' */
            VeAVTR_P_SDS_HV_PwrAvg_BD = VeAVTR_P_SDS_HV_PwrAvgRaw;
        }

        /* End of Switch: '<S27>/Switch2' */
    }
    else
    {
        /* Switch: '<S27>/Switch1' incorporates:
         *  Constant: '<S27>/ConstantValue2'
         */
        VeAVTR_P_SDS_HV_PwrAvg_BD = 0.0F;
    }

    /* End of Switch: '<S27>/Switch1' */

    /* S-Function (sfix_bitop): '<S78>/BitwiseOperator2' incorporates:
     *  DataStoreRead: '<S78>/StatusByte_BattCoolPmpPerf'
     *  S-Function (sfix_bitop): '<S162>/BitwiseOperator2'
     */
    rtb_Logical8_i_tmp = ((uint32)AVTR_ac_DW.StatusByte_BattCoolPmpPerf) & 1U;

    /* S-Function (sfix_bitop): '<S78>/BitwiseOperator1' incorporates:
     *  DataStoreRead: '<S78>/StatusByte_BattCoolPmpPerf'
     *  S-Function (sfix_bitop): '<S162>/BitwiseOperator1'
     */
    rtb_Logical8_i_tmp_0 = ((uint32)AVTR_ac_DW.StatusByte_BattCoolPmpPerf) & 64U;

    /* Logic: '<S134>/Logical8' incorporates:
     *  Constant: '<S78>/Constant1'
     *  Constant: '<S78>/Constant2'
     *  Constant: '<S79>/Calib'
     *  Logic: '<S52>/Logical20'
     *  Logic: '<S78>/LogicalOperator'
     *  RelationalOperator: '<S78>/RelationalOperator1'
     *  RelationalOperator: '<S78>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S78>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S78>/BitwiseOperator2'
     */
    rtb_Logical8_f = (((rtb_Logical8_i_tmp != 0U) && (rtb_Logical8_i_tmp_0 == 0U))
                      && (KeAVTR_b_LTAP_PerfFlt_Enb));

    /* S-Function (sfix_bitop): '<S82>/BitwiseOperator2' incorporates:
     *  DataStoreRead: '<S82>/StatusByte_CoolCtrlVlv1Ckt'
     *  S-Function (sfix_bitop): '<S146>/BitwiseOperator2'
     */
    rtb_Logical4_k_tmp = ((uint32)AVTR_ac_DW.StatusByte_CoolCtrlVlv1Ckt) & 1U;

    /* S-Function (sfix_bitop): '<S82>/BitwiseOperator1' incorporates:
     *  DataStoreRead: '<S82>/StatusByte_CoolCtrlVlv1Ckt'
     *  S-Function (sfix_bitop): '<S146>/BitwiseOperator1'
     */
    rtb_Logical4_k_tmp_0 = ((uint32)AVTR_ac_DW.StatusByte_CoolCtrlVlv1Ckt) & 64U;

    /* S-Function (sfix_bitop): '<S81>/BitwiseOperator2' incorporates:
     *  DataStoreRead: '<S81>/StatusByte_CoolCtrlVlv1CktLo'
     *  S-Function (sfix_bitop): '<S145>/BitwiseOperator2'
     */
    rtb_Logical4_k_tmp_1 = ((uint32)AVTR_ac_DW.StatusByte_CoolCtrlVlv1CktLo) &
        1U;

    /* S-Function (sfix_bitop): '<S81>/BitwiseOperator1' incorporates:
     *  DataStoreRead: '<S81>/StatusByte_CoolCtrlVlv1CktLo'
     *  S-Function (sfix_bitop): '<S145>/BitwiseOperator1'
     */
    rtb_Logical4_k_tmp_2 = ((uint32)AVTR_ac_DW.StatusByte_CoolCtrlVlv1CktLo) &
        64U;

    /* S-Function (sfix_bitop): '<S80>/BitwiseOperator2' incorporates:
     *  DataStoreRead: '<S80>/StatusByte_CoolCtrlVlv1CktHi'
     *  S-Function (sfix_bitop): '<S144>/BitwiseOperator2'
     */
    rtb_Logical4_k_tmp_3 = ((uint32)AVTR_ac_DW.StatusByte_CoolCtrlVlv1CktHi) &
        1U;

    /* S-Function (sfix_bitop): '<S80>/BitwiseOperator1' incorporates:
     *  DataStoreRead: '<S80>/StatusByte_CoolCtrlVlv1CktHi'
     *  S-Function (sfix_bitop): '<S144>/BitwiseOperator1'
     */
    rtb_Logical4_k_tmp_4 = ((uint32)AVTR_ac_DW.StatusByte_CoolCtrlVlv1CktHi) &
        64U;

    /* S-Function (sfix_bitop): '<S84>/BitwiseOperator2' incorporates:
     *  DataStoreRead: '<S84>/StatusByte_CoolantVlvA_StkOpn'
     *  S-Function (sfix_bitop): '<S148>/BitwiseOperator2'
     */
    rtb_Logical4_k_tmp_5 = ((uint32)AVTR_ac_DW.StatusByte_CoolantVlvA_StkOpn) &
        1U;

    /* S-Function (sfix_bitop): '<S84>/BitwiseOperator1' incorporates:
     *  DataStoreRead: '<S84>/StatusByte_CoolantVlvA_StkOpn'
     *  S-Function (sfix_bitop): '<S148>/BitwiseOperator1'
     */
    rtb_Logical4_k_tmp_6 = ((uint32)AVTR_ac_DW.StatusByte_CoolantVlvA_StkOpn) &
        64U;

    /* S-Function (sfix_bitop): '<S83>/BitwiseOperator2' incorporates:
     *  DataStoreRead: '<S83>/StatusByte_CoolantVlvA_Perf'
     *  S-Function (sfix_bitop): '<S147>/BitwiseOperator2'
     */
    rtb_Logical4_k_tmp_7 = ((uint32)AVTR_ac_DW.StatusByte_CoolantVlvA_Perf) & 1U;

    /* S-Function (sfix_bitop): '<S83>/BitwiseOperator1' incorporates:
     *  DataStoreRead: '<S83>/StatusByte_CoolantVlvA_Perf'
     *  S-Function (sfix_bitop): '<S147>/BitwiseOperator1'
     */
    rtb_Logical4_k_tmp_8 = ((uint32)AVTR_ac_DW.StatusByte_CoolantVlvA_Perf) &
        64U;

    /* Logic: '<S113>/Logical4' incorporates:
     *  Constant: '<S80>/Constant1'
     *  Constant: '<S80>/Constant2'
     *  Constant: '<S81>/Constant1'
     *  Constant: '<S81>/Constant2'
     *  Constant: '<S82>/Constant1'
     *  Constant: '<S82>/Constant2'
     *  Constant: '<S83>/Constant1'
     *  Constant: '<S83>/Constant2'
     *  Constant: '<S84>/Constant1'
     *  Constant: '<S84>/Constant2'
     *  Constant: '<S85>/Calib'
     *  Constant: '<S86>/Calib'
     *  Constant: '<S87>/Calib'
     *  Constant: '<S88>/Calib'
     *  Constant: '<S89>/Calib'
     *  Logic: '<S53>/Logical1'
     *  Logic: '<S53>/Logical2'
     *  Logic: '<S53>/Logical3'
     *  Logic: '<S53>/Logical4'
     *  Logic: '<S53>/Logical5'
     *  Logic: '<S53>/Logical8'
     *  Logic: '<S80>/LogicalOperator'
     *  Logic: '<S81>/LogicalOperator'
     *  Logic: '<S82>/LogicalOperator'
     *  Logic: '<S83>/LogicalOperator'
     *  Logic: '<S84>/LogicalOperator'
     *  RelationalOperator: '<S80>/RelationalOperator1'
     *  RelationalOperator: '<S80>/RelationalOperator2'
     *  RelationalOperator: '<S81>/RelationalOperator1'
     *  RelationalOperator: '<S81>/RelationalOperator2'
     *  RelationalOperator: '<S82>/RelationalOperator1'
     *  RelationalOperator: '<S82>/RelationalOperator2'
     *  RelationalOperator: '<S83>/RelationalOperator1'
     *  RelationalOperator: '<S83>/RelationalOperator2'
     *  RelationalOperator: '<S84>/RelationalOperator1'
     *  RelationalOperator: '<S84>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S80>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S80>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S81>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S81>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S82>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S82>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S83>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S83>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S84>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S84>/BitwiseOperator2'
     */
    rtb_Logical4_b = (((((((rtb_Logical4_k_tmp != 0U) && (rtb_Logical4_k_tmp_0 ==
                            0U)) && (KeAVTR_b_ChlrVlv_OC_Enb)) ||
                         (((rtb_Logical4_k_tmp_1 != 0U) && (rtb_Logical4_k_tmp_2
                            == 0U)) && (KeAVTR_b_ChlrVlv_SG_Enb))) ||
                        (((rtb_Logical4_k_tmp_3 != 0U) && (rtb_Logical4_k_tmp_4 ==
                           0U)) && (KeAVTR_b_ChlrVlvStck_ClsEnb))) ||
                       (((rtb_Logical4_k_tmp_5 != 0U) && (rtb_Logical4_k_tmp_6 ==
                          0U)) && (KeAVTR_b_HTCV_LeakFltEnb))) ||
                      (((rtb_Logical4_k_tmp_7 != 0U) && (rtb_Logical4_k_tmp_8 ==
                         0U)) && (KeAVTR_b_HTCV_StckFltEnb)));

    /* Logic: '<S133>/Logical1' incorporates:
     *  Constant: '<S91>/Constant1'
     *  Constant: '<S91>/Constant2'
     *  Constant: '<S92>/Calib'
     *  DataStoreRead: '<S91>/StatusByte_EACPerf'
     *  Logic: '<S55>/Logical21'
     *  Logic: '<S91>/LogicalOperator'
     *  RelationalOperator: '<S91>/RelationalOperator1'
     *  RelationalOperator: '<S91>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S91>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S91>/BitwiseOperator2'
     */
    rtb_Logical1_ex = ((((((uint32)AVTR_ac_DW.StatusByte_EACPerf) & 1U) != 0U) &&
                        ((((uint32)AVTR_ac_DW.StatusByte_EACPerf) & 64U) == 0U))
                       && (KeAVTR_b_EAC_PerfFlt_Enb));

    /* S-Function (sfix_bitop): '<S93>/BitwiseOperator2' incorporates:
     *  DataStoreRead: '<S93>/StatusByte_CommBusOff'
     *  S-Function (sfix_bitop): '<S163>/BitwiseOperator2'
     */
    rtb_Logical22_d_tmp = ((uint32)AVTR_ac_DW.StatusByte_CommBusOff) & 1U;

    /* S-Function (sfix_bitop): '<S93>/BitwiseOperator1' incorporates:
     *  DataStoreRead: '<S93>/StatusByte_CommBusOff'
     *  S-Function (sfix_bitop): '<S163>/BitwiseOperator1'
     */
    rtb_Logical22_d_tmp_0 = ((uint32)AVTR_ac_DW.StatusByte_CommBusOff) & 64U;

    /* S-Function (sfix_bitop): '<S94>/BitwiseOperator2' incorporates:
     *  DataStoreRead: '<S94>/StatusByte_LostCommEAC'
     *  S-Function (sfix_bitop): '<S156>/BitwiseOperator2'
     */
    rtb_Logical22_d_tmp_1 = ((uint32)AVTR_ac_DW.StatusByte_LostCommEAC) & 1U;

    /* S-Function (sfix_bitop): '<S94>/BitwiseOperator1' incorporates:
     *  DataStoreRead: '<S94>/StatusByte_LostCommEAC'
     *  S-Function (sfix_bitop): '<S156>/BitwiseOperator1'
     */
    rtb_Logical22_d_tmp_2 = ((uint32)AVTR_ac_DW.StatusByte_LostCommEAC) & 64U;

    /* Logic: '<S114>/Logical22' incorporates:
     *  Constant: '<S93>/Constant1'
     *  Constant: '<S93>/Constant2'
     *  Constant: '<S94>/Constant1'
     *  Constant: '<S94>/Constant2'
     *  Constant: '<S95>/Calib'
     *  Constant: '<S96>/Calib'
     *  Logic: '<S56>/Logical1'
     *  Logic: '<S56>/Logical2'
     *  Logic: '<S56>/Logical3'
     *  Logic: '<S93>/LogicalOperator'
     *  Logic: '<S94>/LogicalOperator'
     *  RelationalOperator: '<S93>/RelationalOperator1'
     *  RelationalOperator: '<S93>/RelationalOperator2'
     *  RelationalOperator: '<S94>/RelationalOperator1'
     *  RelationalOperator: '<S94>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S93>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S93>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S94>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S94>/BitwiseOperator2'
     */
    rtb_Logical22_n = ((((rtb_Logical22_d_tmp_1 != 0U) && (rtb_Logical22_d_tmp_2
                          == 0U)) && (KeAVTR_b_EAC_LOC_Enb)) ||
                       (((rtb_Logical22_d_tmp != 0U) && (rtb_Logical22_d_tmp_0 ==
                          0U)) && (KeAVTR_b_ComBusOff_Enb)));

    /* Logic: '<S75>/Logical22' incorporates:
     *  Constant: '<S107>/Calib'
     *  Logic: '<S133>/Logical22'
     */
    rtb_Logical2_nw_tmp = ((VeAVTR_b_PressSnsr_FltDtct_AD) &&
                           (KeAVTR_b_PresSensPerf_Enb));

    /* S-Function (sfix_bitop): '<S110>/BitwiseOperator2' incorporates:
     *  DataStoreRead: '<S110>/StatusByte_AC_RefrigPresSnsrALo'
     *  S-Function (sfix_bitop): '<S179>/BitwiseOperator2'
     */
    rtb_Logical3_p_tmp = ((uint32)AVTR_ac_DW.StatusByte_AC_RefrigPresSnsrALo) &
        1U;

    /* S-Function (sfix_bitop): '<S110>/BitwiseOperator1' incorporates:
     *  DataStoreRead: '<S110>/StatusByte_AC_RefrigPresSnsrALo'
     *  S-Function (sfix_bitop): '<S179>/BitwiseOperator1'
     */
    rtb_Logical3_p_tmp_0 = ((uint32)AVTR_ac_DW.StatusByte_AC_RefrigPresSnsrALo)
        & 64U;

    /* Logic: '<S116>/Logical3' incorporates:
     *  Constant: '<S110>/Constant1'
     *  Constant: '<S110>/Constant2'
     *  Constant: '<S111>/Calib'
     *  Logic: '<S110>/LogicalOperator'
     *  Logic: '<S77>/Logical9'
     *  RelationalOperator: '<S110>/RelationalOperator1'
     *  RelationalOperator: '<S110>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S110>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S110>/BitwiseOperator2'
     */
    rtb_Logical3_ji = (((rtb_Logical3_p_tmp != 0U) && (rtb_Logical3_p_tmp_0 ==
                         0U)) && (KeAVTR_b_PresSensLo_Enb));

    /* S-Function (sfix_bitop): '<S108>/BitwiseOperator2' incorporates:
     *  DataStoreRead: '<S108>/StatusByte_AC_RefrigPresSnsrAHi'
     *  S-Function (sfix_bitop): '<S177>/BitwiseOperator2'
     */
    rtb_UnitDelay_cs_tmp = ((uint32)AVTR_ac_DW.StatusByte_AC_RefrigPresSnsrAHi)
        & 1U;

    /* S-Function (sfix_bitop): '<S108>/BitwiseOperator1' incorporates:
     *  DataStoreRead: '<S108>/StatusByte_AC_RefrigPresSnsrAHi'
     *  S-Function (sfix_bitop): '<S177>/BitwiseOperator1'
     */
    rtb_UnitDelay_cs_tmp_0 = ((uint32)AVTR_ac_DW.StatusByte_AC_RefrigPresSnsrAHi)
        & 64U;

    /* UnitDelay: '<S246>/UnitDelay' incorporates:
     *  Constant: '<S108>/Constant1'
     *  Constant: '<S108>/Constant2'
     *  Constant: '<S109>/Calib'
     *  Logic: '<S108>/LogicalOperator'
     *  Logic: '<S76>/Logical4'
     *  RelationalOperator: '<S108>/RelationalOperator1'
     *  RelationalOperator: '<S108>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S108>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S108>/BitwiseOperator2'
     */
    rtb_UnitDelay_k3 = (((rtb_UnitDelay_cs_tmp != 0U) && (rtb_UnitDelay_cs_tmp_0
                          == 0U)) && (KeAVTR_b_PresSensHi_Enb));

    /* Logic: '<S64>/Logical14' incorporates:
     *  Logic: '<S65>/Logical1'
     *  Logic: '<S66>/Logical5'
     *  Logic: '<S67>/Logical9'
     *  Logic: '<S68>/Logical12'
     *  Logic: '<S69>/Logical15'
     *  Logic: '<S75>/Logical22'
     */
    rtb_NotEqual_i = !rtb_Logical4_b;
    rtb_Comparison2 = !rtb_Logical1_ex;
    aVarTruthTableCondition_3 = !rtb_Logical22_n;
    rtb_Comparison = !rtb_Logical2_nw_tmp;
    rtb_Comparison2_f2 = !rtb_Logical3_ji;
    rtb_Logical3 = !rtb_UnitDelay_k3;
    UnitDelay_DSTATE_cf_tmp = !rtb_Logical8_f;

    /* Outputs for IfAction SubSystem: '<S49>/Flt_Error1' incorporates:
     *  ActionPort: '<S60>/ActionPort'
     */
    /* If: '<S49>/If' incorporates:
     *  Constant: '<S54>/ConstantValue4'
     *  Constant: '<S60>/ConstantValue4'
     *  Constant: '<S63>/ConstantValue4'
     *  Gain: '<S100>/Gain'
     *  Gain: '<S103>/Gain'
     *  Gain: '<S90>/Gain'
     *  Logic: '<S64>/Logical14'
     *  Logic: '<S65>/Logical1'
     *  Logic: '<S65>/Logical2'
     *  Logic: '<S66>/Logical5'
     *  Logic: '<S66>/Logical7'
     */
    if ((((((rtb_NotEqual_i && UnitDelay_DSTATE_cf_tmp) && rtb_Comparison2) &&
            aVarTruthTableCondition_3) && rtb_Comparison) && rtb_Comparison2_f2)
        && rtb_Logical3)
    {
        /* Merge: '<S49>/Merge' */
        VeAVTR_e_BatCoolngFlt_Sts_BD_App1 = 0;
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S49>/LTAP_PerfFlt' incorporates:
         *  ActionPort: '<S63>/ActionPort'
         */
        if (rtb_Logical8_f && (((((rtb_NotEqual_i && rtb_Comparison2) &&
                                  aVarTruthTableCondition_3) && rtb_Comparison) &&
                                rtb_Comparison2_f2) && rtb_Logical3))
        {
            /* Gain: '<S103>/Gain' incorporates:
             *  Constant: '<S63>/ConstantValue4'
             *  Merge: '<S49>/Merge'
             */
            VeAVTR_e_BatCoolngFlt_Sts_BD_App1 = 1;
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S49>/ChlrVlv_StuckCls' incorporates:
             *  ActionPort: '<S54>/ActionPort'
             */
            if (rtb_Logical4_b && (((((UnitDelay_DSTATE_cf_tmp &&
                                       rtb_Comparison2) &&
                                      aVarTruthTableCondition_3) &&
                                     rtb_Comparison) && rtb_Comparison2_f2) &&
                                   rtb_Logical3))
            {
                /* Gain: '<S90>/Gain' incorporates:
                 *  Constant: '<S54>/ConstantValue4'
                 *  Merge: '<S49>/Merge'
                 */
                VeAVTR_e_BatCoolngFlt_Sts_BD_App1 = 2;
            }
            else
            {
                /* Logic: '<S67>/Logical9' incorporates:
                 *  Logic: '<S68>/Logical12'
                 */
                rtb_NotEqual_i = (UnitDelay_DSTATE_cf_tmp && rtb_NotEqual_i);

                /* Outputs for IfAction SubSystem: '<S49>/EAC_PerfFlt' incorporates:
                 *  ActionPort: '<S58>/ActionPort'
                 */
                /* Gain: '<S98>/Gain' incorporates:
                 *  Constant: '<S58>/ConstantValue4'
                 *  Logic: '<S67>/Logical10'
                 *  Logic: '<S67>/Logical9'
                 */
                if (rtb_Logical1_ex && ((((rtb_NotEqual_i &&
                                           aVarTruthTableCondition_3) &&
                                          rtb_Comparison) && rtb_Comparison2_f2)
                                        && rtb_Logical3))
                {
                    /* Merge: '<S49>/Merge' */
                    VeAVTR_e_BatCoolngFlt_Sts_BD_App1 = 3;
                }
                else
                {
                    /* Logic: '<S68>/Logical12' incorporates:
                     *  Logic: '<S69>/Logical15'
                     *  Logic: '<S70>/Logical17'
                     *  Logic: '<S71>/Logical19'
                     */
                    rtb_NotEqual_i = (rtb_NotEqual_i && rtb_Comparison2);
                    rtb_Comparison2 = !rtb_UnitDelay_k3;

                    /* Outputs for IfAction SubSystem: '<S49>/EAC_Com_Flt' incorporates:
                     *  ActionPort: '<S57>/ActionPort'
                     */
                    /* Gain: '<S97>/Gain' incorporates:
                     *  Constant: '<S57>/ConstantValue4'
                     *  Logic: '<S68>/Logical11'
                     *  Logic: '<S68>/Logical12'
                     */
                    if (rtb_Logical22_n && (((rtb_NotEqual_i && rtb_Comparison) &&
                          rtb_Comparison2_f2) && rtb_Comparison2))
                    {
                        /* Merge: '<S49>/Merge' */
                        VeAVTR_e_BatCoolngFlt_Sts_BD_App1 = 4;
                    }
                    else
                    {
                        /* Logic: '<S69>/Logical15' incorporates:
                         *  Logic: '<S70>/Logical17'
                         *  Logic: '<S71>/Logical19'
                         */
                        aVarTruthTableCondition_3 = (rtb_NotEqual_i &&
                            aVarTruthTableCondition_3);
                        rtb_Comparison = !rtb_Logical3_ji;

                        /* Outputs for IfAction SubSystem: '<S49>/PresSens_Perf' incorporates:
                         *  ActionPort: '<S74>/ActionPort'
                         */
                        /* Gain: '<S106>/Gain' incorporates:
                         *  Constant: '<S74>/ConstantValue4'
                         *  Logic: '<S69>/Logical13'
                         *  Logic: '<S69>/Logical15'
                         *  Logic: '<S75>/Logical22'
                         */
                        if (rtb_Logical2_nw_tmp && ((aVarTruthTableCondition_3 &&
                              rtb_Comparison) && rtb_Comparison2))
                        {
                            /* Merge: '<S49>/Merge' */
                            VeAVTR_e_BatCoolngFlt_Sts_BD_App1 = 5;
                        }
                        else
                        {
                            /* Logic: '<S70>/Logical17' incorporates:
                             *  Logic: '<S71>/Logical19'
                             */
                            rtb_Comparison2_f2 = !rtb_Logical2_nw_tmp;

                            /* Outputs for IfAction SubSystem: '<S49>/PresSens_Lo' incorporates:
                             *  ActionPort: '<S73>/ActionPort'
                             */
                            /* Gain: '<S105>/Gain' incorporates:
                             *  Constant: '<S59>/ConstantValue4'
                             *  Constant: '<S72>/ConstantValue4'
                             *  Constant: '<S73>/ConstantValue4'
                             *  Gain: '<S104>/Gain'
                             *  Gain: '<S99>/Gain'
                             *  Logic: '<S70>/Logical16'
                             *  Logic: '<S70>/Logical17'
                             *  Logic: '<S71>/Logical18'
                             *  Logic: '<S71>/Logical19'
                             */
                            if (rtb_Logical3_ji && ((aVarTruthTableCondition_3 &&
                                  rtb_Comparison2_f2) && rtb_Comparison2))
                            {
                                /* Merge: '<S49>/Merge' */
                                VeAVTR_e_BatCoolngFlt_Sts_BD_App1 = 6;
                            }
                            else
                            {
                                /* Outputs for IfAction SubSystem: '<S49>/Flt_Error' incorporates:
                                 *  ActionPort: '<S59>/ActionPort'
                                 */
                                /* Outputs for IfAction SubSystem: '<S49>/PresSens_Hi' incorporates:
                                 *  ActionPort: '<S72>/ActionPort'
                                 */
                                if (rtb_UnitDelay_k3 && (((rtb_NotEqual_i &&
                                                           (!rtb_Logical22_n)) &&
                                      rtb_Comparison2_f2) && rtb_Comparison))
                                {
                                    /* Gain: '<S104>/Gain' incorporates:
                                     *  Constant: '<S59>/ConstantValue4'
                                     *  Constant: '<S72>/ConstantValue4'
                                     *  Gain: '<S99>/Gain'
                                     *  Merge: '<S49>/Merge'
                                     */
                                    VeAVTR_e_BatCoolngFlt_Sts_BD_App1 = 7;
                                }
                                else
                                {
                                    /* Merge: '<S49>/Merge' incorporates:
                                     *  Constant: '<S59>/ConstantValue4'
                                     *  Gain: '<S99>/Gain'
                                     */
                                    VeAVTR_e_BatCoolngFlt_Sts_BD_App1 = 15;
                                }

                                /* End of Outputs for SubSystem: '<S49>/PresSens_Hi' */
                                /* End of Outputs for SubSystem: '<S49>/Flt_Error' */
                            }

                            /* End of Gain: '<S105>/Gain' */
                            /* End of Outputs for SubSystem: '<S49>/PresSens_Lo' */
                        }

                        /* End of Gain: '<S106>/Gain' */
                        /* End of Outputs for SubSystem: '<S49>/PresSens_Perf' */
                    }

                    /* End of Gain: '<S97>/Gain' */
                    /* End of Outputs for SubSystem: '<S49>/EAC_Com_Flt' */
                }

                /* End of Gain: '<S98>/Gain' */
                /* End of Outputs for SubSystem: '<S49>/EAC_PerfFlt' */
            }

            /* End of Outputs for SubSystem: '<S49>/ChlrVlv_StuckCls' */
        }

        /* End of Outputs for SubSystem: '<S49>/LTAP_PerfFlt' */
    }

    /* End of If: '<S49>/If' */
    /* End of Outputs for SubSystem: '<S49>/Flt_Error1' */

    /* UnitDelay: '<S246>/UnitDelay' incorporates:
     *  Constant: '<S161>/Constant'
     *  Constant: '<S162>/Constant1'
     *  Constant: '<S162>/Constant2'
     *  Constant: '<S163>/Constant1'
     *  Constant: '<S163>/Constant2'
     *  Constant: '<S164>/Constant1'
     *  Constant: '<S164>/Constant2'
     *  Constant: '<S165>/Constant1'
     *  Constant: '<S165>/Constant2'
     *  Constant: '<S166>/Calib'
     *  Constant: '<S167>/Calib'
     *  Constant: '<S168>/Calib'
     *  Constant: '<S169>/Calib'
     *  Constant: '<S170>/Calib'
     *  DataStoreRead: '<S164>/StatusByte_LosCommBECM_A'
     *  DataStoreRead: '<S165>/StatusByte_LostCommBCP'
     *  Logic: '<S121>/Logical1'
     *  Logic: '<S121>/Logical2'
     *  Logic: '<S121>/Logical20'
     *  Logic: '<S121>/Logical3'
     *  Logic: '<S121>/Logical4'
     *  Logic: '<S121>/Logical5'
     *  Logic: '<S121>/Logical6'
     *  Logic: '<S162>/LogicalOperator'
     *  Logic: '<S163>/LogicalOperator'
     *  Logic: '<S164>/LogicalOperator'
     *  Logic: '<S165>/LogicalOperator'
     *  RelationalOperator: '<S121>/Comparison4'
     *  RelationalOperator: '<S162>/RelationalOperator1'
     *  RelationalOperator: '<S162>/RelationalOperator2'
     *  RelationalOperator: '<S163>/RelationalOperator1'
     *  RelationalOperator: '<S163>/RelationalOperator2'
     *  RelationalOperator: '<S164>/RelationalOperator1'
     *  RelationalOperator: '<S164>/RelationalOperator2'
     *  RelationalOperator: '<S165>/RelationalOperator1'
     *  RelationalOperator: '<S165>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S164>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S164>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S165>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S165>/BitwiseOperator2'
     *  Switch: '<S283>/Switch'
     */
    rtb_UnitDelay_k3 = (((((((rtb_Logical8_i_tmp != 0U) && (rtb_Logical8_i_tmp_0
        == 0U)) && (KeAVTR_b_LTAP_PerfFlt_Enb)) || ((((((uint32)
        AVTR_ac_DW.StatusByte_LostCommBCP) & 1U) != 0U) && ((((uint32)
        AVTR_ac_DW.StatusByte_LostCommBCP) & 64U) == 0U)) &&
                            (KeAVTR_b_LTAP_LOC_Enb))) || (((rtb_Logical22_d_tmp
        != 0U) && (rtb_Logical22_d_tmp_0 == 0U)) && (KeAVTR_b_ComBusOff_Enb))) ||
                         ((((((uint32)AVTR_ac_DW.StatusByte_LosCommBECM_A) & 1U)
                            != 0U) && ((((uint32)
        AVTR_ac_DW.StatusByte_LosCommBECM_A) & 64U) == 0U)) &&
                          (KeAVTR_b_LOC_BPCM_Enb))) || (((CePMPR_e_FTSNA_False
                           != ((uint32)VeAVTR_e_LTActPumpDryRun_AD)) ||
                          (VeAVTR_b_LTActPumpDryRun_FA_AD)) &&
                         (KeAVTR_b_LTAP_DryRun_Enb)));

    /* Logic: '<S116>/Logical3' incorporates:
     *  Constant: '<S144>/Constant1'
     *  Constant: '<S144>/Constant2'
     *  Constant: '<S145>/Constant1'
     *  Constant: '<S145>/Constant2'
     *  Constant: '<S146>/Constant1'
     *  Constant: '<S146>/Constant2'
     *  Constant: '<S147>/Constant1'
     *  Constant: '<S147>/Constant2'
     *  Constant: '<S148>/Constant1'
     *  Constant: '<S148>/Constant2'
     *  Constant: '<S149>/Calib'
     *  Constant: '<S150>/Calib'
     *  Constant: '<S151>/Calib'
     *  Constant: '<S152>/Calib'
     *  Constant: '<S153>/Calib'
     *  Logic: '<S116>/Logical1'
     *  Logic: '<S116>/Logical2'
     *  Logic: '<S116>/Logical4'
     *  Logic: '<S116>/Logical5'
     *  Logic: '<S116>/Logical8'
     *  Logic: '<S144>/LogicalOperator'
     *  Logic: '<S145>/LogicalOperator'
     *  Logic: '<S146>/LogicalOperator'
     *  Logic: '<S147>/LogicalOperator'
     *  Logic: '<S148>/LogicalOperator'
     *  RelationalOperator: '<S144>/RelationalOperator1'
     *  RelationalOperator: '<S144>/RelationalOperator2'
     *  RelationalOperator: '<S145>/RelationalOperator1'
     *  RelationalOperator: '<S145>/RelationalOperator2'
     *  RelationalOperator: '<S146>/RelationalOperator1'
     *  RelationalOperator: '<S146>/RelationalOperator2'
     *  RelationalOperator: '<S147>/RelationalOperator1'
     *  RelationalOperator: '<S147>/RelationalOperator2'
     *  RelationalOperator: '<S148>/RelationalOperator1'
     *  RelationalOperator: '<S148>/RelationalOperator2'
     */
    rtb_Logical3_ji = (((((((rtb_Logical4_k_tmp != 0U) && (rtb_Logical4_k_tmp_0 ==
        0U)) && (KeAVTR_b_ChlrVlv_OC_Enb)) || (((rtb_Logical4_k_tmp_1 != 0U) &&
                            (rtb_Logical4_k_tmp_2 == 0U)) &&
                           (KeAVTR_b_ChlrVlv_SG_Enb))) ||
                         (((rtb_Logical4_k_tmp_3 != 0U) && (rtb_Logical4_k_tmp_4
                            == 0U)) && (KeAVTR_b_ChlrVlvStck_ClsEnb))) ||
                        (((rtb_Logical4_k_tmp_5 != 0U) && (rtb_Logical4_k_tmp_6 ==
                           0U)) && (KeAVTR_b_HTCV_LeakFltEnb))) ||
                       (((rtb_Logical4_k_tmp_7 != 0U) && (rtb_Logical4_k_tmp_8 ==
                          0U)) && (KeAVTR_b_HTCV_StckFltEnb)));

    /* Logic: '<S118>/Logical2' incorporates:
     *  Constant: '<S155>/Constant'
     *  Constant: '<S156>/Constant1'
     *  Constant: '<S156>/Constant2'
     *  Constant: '<S157>/Calib'
     *  Constant: '<S158>/Calib'
     *  DataStoreRead: '<S155>/StatusByte_EACPerf'
     *  Logic: '<S118>/Logical1'
     *  Logic: '<S118>/Logical21'
     *  Logic: '<S156>/LogicalOperator'
     *  RelationalOperator: '<S155>/RelationalOperator'
     *  RelationalOperator: '<S156>/RelationalOperator1'
     *  RelationalOperator: '<S156>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S155>/BitwiseOperator7'
     */
    rtb_Logical2_d = ((((rtb_Logical22_d_tmp_1 != 0U) && (rtb_Logical22_d_tmp_2 ==
                         0U)) && (KeAVTR_b_EAC_LOC_Enb)) || (((((sint32)
                          AVTR_ac_DW.StatusByte_EACPerf) & 1) > 0) &&
                       (KeAVTR_b_EAC_PerfFlt_Enb)));

    /* Logic: '<S114>/Logical22' incorporates:
     *  Constant: '<S139>/Constant1'
     *  Constant: '<S139>/Constant2'
     *  Constant: '<S140>/Constant1'
     *  Constant: '<S140>/Constant2'
     *  Constant: '<S141>/Calib'
     *  Constant: '<S142>/Calib'
     *  DataStoreRead: '<S139>/StatusByte_BattCoolLvlLow'
     *  DataStoreRead: '<S140>/StatusByte_BattCoolLvlSnsCkt'
     *  Logic: '<S114>/Logical20'
     *  Logic: '<S114>/Logical21'
     *  Logic: '<S139>/LogicalOperator'
     *  Logic: '<S140>/LogicalOperator'
     *  RelationalOperator: '<S139>/RelationalOperator1'
     *  RelationalOperator: '<S139>/RelationalOperator2'
     *  RelationalOperator: '<S140>/RelationalOperator1'
     *  RelationalOperator: '<S140>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S139>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S139>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S140>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S140>/BitwiseOperator2'
     */
    rtb_Logical22_n = (((((((uint32)AVTR_ac_DW.StatusByte_BattCoolLvlLow) & 1U)
                          != 0U) && ((((uint32)
                            AVTR_ac_DW.StatusByte_BattCoolLvlLow) & 64U) == 0U))
                        && (KeAVTR_b_BottleSensrClntLow_Enb)) || ((((((uint32)
                            AVTR_ac_DW.StatusByte_BattCoolLvlSnsCkt) & 1U) != 0U)
                         && ((((uint32)AVTR_ac_DW.StatusByte_BattCoolLvlSnsCkt)
                           & 64U) == 0U)) && (KeAVTR_b_BottleSensrSG_Enb)));

    /* Logic: '<S133>/Logical1' incorporates:
     *  Constant: '<S177>/Constant1'
     *  Constant: '<S177>/Constant2'
     *  Constant: '<S178>/Calib'
     *  Constant: '<S179>/Constant1'
     *  Constant: '<S179>/Constant2'
     *  Constant: '<S180>/Calib'
     *  Logic: '<S175>/Logical4'
     *  Logic: '<S176>/Logical9'
     *  Logic: '<S177>/LogicalOperator'
     *  Logic: '<S179>/LogicalOperator'
     *  RelationalOperator: '<S177>/RelationalOperator1'
     *  RelationalOperator: '<S177>/RelationalOperator2'
     *  RelationalOperator: '<S179>/RelationalOperator1'
     *  RelationalOperator: '<S179>/RelationalOperator2'
     */
    rtb_Logical1_ex = ((rtb_Logical2_nw_tmp || (((rtb_Logical3_p_tmp != 0U) &&
                          (rtb_Logical3_p_tmp_0 == 0U)) &&
                         (KeAVTR_b_PresSensLo_Enb))) || (((rtb_UnitDelay_cs_tmp
                          != 0U) && (rtb_UnitDelay_cs_tmp_0 == 0U)) &&
                        (KeAVTR_b_PresSensHi_Enb)));

    /* Logic: '<S134>/Logical8' incorporates:
     *  Constant: '<S181>/Calib'
     */
    rtb_Logical8_f = ((VeAVTR_b_RadFan_FltDtct_AD) &&
                      (KeAVTR_b_RadFan_FltDtctd_Enb));

    /* Logic: '<S113>/Logical4' incorporates:
     *  Constant: '<S137>/Constant1'
     *  Constant: '<S137>/Constant2'
     *  Constant: '<S138>/Calib'
     *  DataStoreRead: '<S137>/StatusByte_BattCool'
     *  Logic: '<S137>/LogicalOperator'
     *  RelationalOperator: '<S137>/RelationalOperator1'
     *  RelationalOperator: '<S137>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S137>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S137>/BitwiseOperator2'
     */
    rtb_Logical4_b = ((((((uint32)AVTR_ac_DW.StatusByte_BattCool) & 1U) != 0U) &&
                       ((((uint32)AVTR_ac_DW.StatusByte_BattCool) & 64U) == 0U))
                      && (KeAVTR_b_BatCoolPerfFlt_Enb));

    /* Logic: '<S123>/Logical14' incorporates:
     *  Logic: '<S124>/Logical1'
     *  Logic: '<S125>/Logical5'
     *  Logic: '<S126>/Logical9'
     *  Logic: '<S127>/Logical12'
     *  Logic: '<S128>/Logical15'
     *  Logic: '<S129>/Logical17'
     *  Logic: '<S130>/Logical19'
     */
    rtb_NotEqual_i = !rtb_Logical3_ji;
    rtb_Comparison2 = !rtb_Logical2_d;
    aVarTruthTableCondition_3 = !rtb_Logical22_n;
    rtb_Comparison = !rtb_Logical1_ex;
    rtb_Comparison2_f2 = !rtb_Logical8_f;
    rtb_Logical3 = !rtb_Logical4_b;
    UnitDelay_DSTATE_cf_tmp = !rtb_UnitDelay_k3;
    rtb_Logical2_nw_tmp = (UnitDelay_DSTATE_cf_tmp && rtb_NotEqual_i);
    tmp_1 = (rtb_Logical2_nw_tmp && rtb_Comparison2);
    tmp_2 = (tmp_1 && aVarTruthTableCondition_3);
    tmp_3 = (tmp_2 && rtb_Comparison);
    tmp_4 = (tmp_3 && rtb_Comparison2_f2);

    /* Outputs for IfAction SubSystem: '<S50>/No_Flt' incorporates:
     *  ActionPort: '<S131>/ActionPort'
     */
    /* If: '<S50>/If' incorporates:
     *  Constant: '<S112>/ConstantValue4'
     *  Constant: '<S115>/ConstantValue4'
     *  Constant: '<S117>/ConstantValue4'
     *  Constant: '<S119>/ConstantValue4'
     *  Constant: '<S120>/ConstantValue4'
     *  Constant: '<S122>/ConstantValue4'
     *  Constant: '<S131>/ConstantValue4'
     *  Constant: '<S132>/ConstantValue4'
     *  Constant: '<S135>/ConstantValue4'
     *  Gain: '<S136>/Gain'
     *  Gain: '<S143>/Gain'
     *  Gain: '<S154>/Gain'
     *  Gain: '<S159>/Gain'
     *  Gain: '<S160>/Gain'
     *  Gain: '<S171>/Gain'
     *  Gain: '<S172>/Gain'
     *  Gain: '<S173>/Gain'
     *  Gain: '<S182>/Gain'
     *  Logic: '<S123>/Logical14'
     *  Logic: '<S124>/Logical1'
     *  Logic: '<S124>/Logical2'
     *  Logic: '<S125>/Logical5'
     *  Logic: '<S125>/Logical7'
     *  Logic: '<S126>/Logical10'
     *  Logic: '<S126>/Logical9'
     *  Logic: '<S127>/Logical11'
     *  Logic: '<S127>/Logical12'
     *  Logic: '<S128>/Logical13'
     *  Logic: '<S128>/Logical15'
     *  Logic: '<S129>/Logical16'
     *  Logic: '<S129>/Logical17'
     *  Logic: '<S130>/Logical18'
     */
    if (tmp_4 && rtb_Logical3)
    {
        /* Merge: '<S50>/Merge' */
        VeAVTR_e_BatCoolngFlt_Sts_BD_App2 = 0;
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S50>/LTAP_Flt' incorporates:
         *  ActionPort: '<S122>/ActionPort'
         */
        if (rtb_UnitDelay_k3 && (((((rtb_NotEqual_i && rtb_Comparison2) &&
                                    aVarTruthTableCondition_3) && rtb_Comparison)
              && rtb_Comparison2_f2) && rtb_Logical3))
        {
            /* Gain: '<S171>/Gain' incorporates:
             *  Constant: '<S122>/ConstantValue4'
             *  Merge: '<S50>/Merge'
             */
            VeAVTR_e_BatCoolngFlt_Sts_BD_App2 = 1;
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S50>/ChlrVlv_Stuck' incorporates:
             *  ActionPort: '<S117>/ActionPort'
             */
            if (rtb_Logical3_ji && (((((UnitDelay_DSTATE_cf_tmp &&
                                        rtb_Comparison2) &&
                                       aVarTruthTableCondition_3) &&
                                      rtb_Comparison) && rtb_Comparison2_f2) &&
                                    rtb_Logical3))
            {
                /* Gain: '<S154>/Gain' incorporates:
                 *  Constant: '<S117>/ConstantValue4'
                 *  Merge: '<S50>/Merge'
                 */
                VeAVTR_e_BatCoolngFlt_Sts_BD_App2 = 2;
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S50>/EAC_Flts' incorporates:
                 *  ActionPort: '<S119>/ActionPort'
                 */
                if (rtb_Logical2_d && ((((rtb_Logical2_nw_tmp &&
                                          aVarTruthTableCondition_3) &&
                                         rtb_Comparison) && rtb_Comparison2_f2) &&
                                       rtb_Logical3))
                {
                    /* Gain: '<S159>/Gain' incorporates:
                     *  Constant: '<S119>/ConstantValue4'
                     *  Merge: '<S50>/Merge'
                     */
                    VeAVTR_e_BatCoolngFlt_Sts_BD_App2 = 3;
                }
                else
                {
                    /* Outputs for IfAction SubSystem: '<S50>/BottleSnsr_Flts' incorporates:
                     *  ActionPort: '<S115>/ActionPort'
                     */
                    if (rtb_Logical22_n && (((tmp_1 && rtb_Comparison) &&
                                             rtb_Comparison2_f2) && rtb_Logical3))
                    {
                        /* Gain: '<S143>/Gain' incorporates:
                         *  Constant: '<S115>/ConstantValue4'
                         *  Merge: '<S50>/Merge'
                         */
                        VeAVTR_e_BatCoolngFlt_Sts_BD_App2 = 4;
                    }
                    else
                    {
                        /* Outputs for IfAction SubSystem: '<S50>/PresSens_Flts' incorporates:
                         *  ActionPort: '<S132>/ActionPort'
                         */
                        if (rtb_Logical1_ex && ((tmp_2 && rtb_Comparison2_f2) &&
                                                rtb_Logical3))
                        {
                            /* Gain: '<S173>/Gain' incorporates:
                             *  Constant: '<S132>/ConstantValue4'
                             *  Merge: '<S50>/Merge'
                             */
                            VeAVTR_e_BatCoolngFlt_Sts_BD_App2 = 5;
                        }
                        else
                        {
                            /* Outputs for IfAction SubSystem: '<S50>/RadFan_Flts' incorporates:
                             *  ActionPort: '<S135>/ActionPort'
                             */
                            if (rtb_Logical8_f && (tmp_3 && rtb_Logical3))
                            {
                                /* Gain: '<S182>/Gain' incorporates:
                                 *  Constant: '<S135>/ConstantValue4'
                                 *  Merge: '<S50>/Merge'
                                 */
                                VeAVTR_e_BatCoolngFlt_Sts_BD_App2 = 6;
                            }
                            else
                            {
                                /* Outputs for IfAction SubSystem: '<S50>/Flt_Error' incorporates:
                                 *  ActionPort: '<S120>/ActionPort'
                                 */
                                /* Outputs for IfAction SubSystem: '<S50>/BatCoolingPerf' incorporates:
                                 *  ActionPort: '<S112>/ActionPort'
                                 */
                                if (rtb_Logical4_b && tmp_4)
                                {
                                    /* Gain: '<S136>/Gain' incorporates:
                                     *  Constant: '<S112>/ConstantValue4'
                                     *  Constant: '<S120>/ConstantValue4'
                                     *  Gain: '<S160>/Gain'
                                     *  Merge: '<S50>/Merge'
                                     */
                                    VeAVTR_e_BatCoolngFlt_Sts_BD_App2 = 7;
                                }
                                else
                                {
                                    /* Merge: '<S50>/Merge' incorporates:
                                     *  Constant: '<S120>/ConstantValue4'
                                     *  Gain: '<S160>/Gain'
                                     */
                                    VeAVTR_e_BatCoolngFlt_Sts_BD_App2 = 15;
                                }

                                /* End of Outputs for SubSystem: '<S50>/BatCoolingPerf' */
                                /* End of Outputs for SubSystem: '<S50>/Flt_Error' */
                            }

                            /* End of Outputs for SubSystem: '<S50>/RadFan_Flts' */
                        }

                        /* End of Outputs for SubSystem: '<S50>/PresSens_Flts' */
                    }

                    /* End of Outputs for SubSystem: '<S50>/BottleSnsr_Flts' */
                }

                /* End of Outputs for SubSystem: '<S50>/EAC_Flts' */
            }

            /* End of Outputs for SubSystem: '<S50>/ChlrVlv_Stuck' */
        }

        /* End of Outputs for SubSystem: '<S50>/LTAP_Flt' */
    }

    /* End of If: '<S50>/If' */
    /* End of Outputs for SubSystem: '<S50>/No_Flt' */

    /* Switch: '<S28>/Switch2' incorporates:
     *  Constant: '<S51>/Calib'
     */
    if (KeAVTR_b_BatCoolingFlt_OldApp_Enbl)
    {
        /* Switch: '<S28>/Switch2' */
        VeAVTR_e_BatCoolngFlt_Sts_BD = VeAVTR_e_BatCoolngFlt_Sts_BD_App1;
    }
    else
    {
        /* Switch: '<S28>/Switch2' */
        VeAVTR_e_BatCoolngFlt_Sts_BD = VeAVTR_e_BatCoolngFlt_Sts_BD_App2;
    }

    /* End of Switch: '<S28>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S29>/Hysteresis2' */
    /* Switch: '<S183>/Switch1' incorporates:
     *  Constant: '<S183>/ConstantValue'
     *  Constant: '<S34>/Calib'
     *  Constant: '<S35>/Calib'
     *  RelationalOperator: '<S183>/GreaterThan'
     *  RelationalOperator: '<S183>/GreaterThan1'
     *  UnitDelay: '<S183>/UnitDelay'
     */
    if (VeAVTR_T_CellTempMinUsed_AD > KeAVTR_T_EVA_BatTmpCold_RgHi)
    {
        AVTR_ac_DW.UnitDelay_DSTATE_dz = true;
    }
    else
    {
        AVTR_ac_DW.UnitDelay_DSTATE_dz = ((VeAVTR_T_CellTempMinUsed_AD >=
            KeAVTR_T_EVA_BatTmpCold_RgLw) && (AVTR_ac_DW.UnitDelay_DSTATE_dz));
    }

    /* End of Switch: '<S183>/Switch1' */
    /* End of Outputs for SubSystem: '<S29>/Hysteresis2' */

    /* Outputs for Atomic SubSystem: '<S29>/Hysteresis3' */
    /* Switch: '<S184>/Switch1' incorporates:
     *  Constant: '<S184>/ConstantValue'
     *  Constant: '<S36>/Calib'
     *  Constant: '<S37>/Calib'
     *  RelationalOperator: '<S184>/GreaterThan'
     *  RelationalOperator: '<S184>/GreaterThan1'
     *  UnitDelay: '<S184>/UnitDelay'
     */
    if (VeAVTR_T_CellTempMaxUsed_AD > KeAVTR_T_EVA_BatTmpHot_RgHi)
    {
        AVTR_ac_DW.UnitDelay_DSTATE_bk = true;
    }
    else
    {
        AVTR_ac_DW.UnitDelay_DSTATE_bk = ((VeAVTR_T_CellTempMaxUsed_AD >=
            KeAVTR_T_EVA_BatTmpHot_RgLw) && (AVTR_ac_DW.UnitDelay_DSTATE_bk));
    }

    /* End of Switch: '<S184>/Switch1' */
    /* End of Outputs for SubSystem: '<S29>/Hysteresis3' */

    /* Logic: '<S29>/Logical5' incorporates:
     *  Logic: '<S29>/Logical1'
     *  UnitDelay: '<S183>/UnitDelay'
     *  UnitDelay: '<S184>/UnitDelay'
     */
    VeAVTR_b_BatTmpRng_EVA_On = ((!AVTR_ac_DW.UnitDelay_DSTATE_bk) &&
        (AVTR_ac_DW.UnitDelay_DSTATE_dz));

    /* Outputs for Atomic SubSystem: '<S185>/EdgeBi' */
    /* RelationalOperator: '<S189>/NotEqual' incorporates:
     *  UnitDelay: '<S189>/UnitDelay'
     */
    rtb_NotEqual_i = (VeAVTR_b_SDS_CoolingReq_App1 !=
                      AVTR_ac_DW.UnitDelay_DSTATE_dc);

    /* Update for UnitDelay: '<S189>/UnitDelay' */
    AVTR_ac_DW.UnitDelay_DSTATE_dc = VeAVTR_b_SDS_CoolingReq_App1;

    /* End of Outputs for SubSystem: '<S185>/EdgeBi' */

    /* Outputs for Atomic SubSystem: '<S185>/EdgeRising3' */
    /* Logic: '<S190>/AND' incorporates:
     *  Logic: '<S190>/OR1'
     *  UnitDelay: '<S190>/UnitDelay'
     */
    rtb_Comparison2 = !AVTR_ac_DW.UnitDelay_DSTATE_ba;

    /* Update for UnitDelay: '<S190>/UnitDelay' incorporates:
     *  Constant: '<S185>/TRUEConstant1'
     */
    AVTR_ac_DW.UnitDelay_DSTATE_ba = true;

    /* End of Outputs for SubSystem: '<S185>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S188>/SignalLatchOnWithReset' */
    /* Logic: '<S194>/OR1' incorporates:
     *  Logic: '<S185>/Logical1'
     *  Logic: '<S194>/NOT'
     *  Logic: '<S194>/OR'
     *  UnitDelay: '<S194>/UnitDelay'
     */
    AVTR_ac_DW.UnitDelay_DSTATE_n = ((VeAVTR_b_SDS_CoolingReq_App1) ||
        (((!rtb_NotEqual_i) && (!rtb_Comparison2)) &&
         (AVTR_ac_DW.UnitDelay_DSTATE_n)));

    /* End of Outputs for SubSystem: '<S188>/SignalLatchOnWithReset' */

    /* Switch: '<S188>/Switch1' incorporates:
     *  UnitDelay: '<S188>/UnitDelay1'
     *  UnitDelay: '<S194>/UnitDelay'
     */
    if (!AVTR_ac_DW.UnitDelay_DSTATE_n)
    {
        AVTR_ac_DW.UnitDelay1_DSTATE_a = VeAVTR_T_SDS_ClntTmpIn_Tgt;
    }

    /* End of Switch: '<S188>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S186>/EdgeBi1' */
    /* RelationalOperator: '<S196>/NotEqual' incorporates:
     *  UnitDelay: '<S196>/UnitDelay'
     */
    rtb_NotEqual_i = (VeAVTR_b_SDS_HeatingReq_App1 !=
                      AVTR_ac_DW.UnitDelay_DSTATE_hn);

    /* Update for UnitDelay: '<S196>/UnitDelay' */
    AVTR_ac_DW.UnitDelay_DSTATE_hn = VeAVTR_b_SDS_HeatingReq_App1;

    /* End of Outputs for SubSystem: '<S186>/EdgeBi1' */

    /* Outputs for Atomic SubSystem: '<S186>/EdgeRising2' */
    /* Logic: '<S197>/AND' incorporates:
     *  Logic: '<S197>/OR1'
     *  UnitDelay: '<S197>/UnitDelay'
     */
    rtb_Comparison2 = !AVTR_ac_DW.UnitDelay_DSTATE_i;

    /* Update for UnitDelay: '<S197>/UnitDelay' incorporates:
     *  Constant: '<S186>/TRUEConstant'
     */
    AVTR_ac_DW.UnitDelay_DSTATE_i = true;

    /* End of Outputs for SubSystem: '<S186>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S195>/SignalLatchOnWithReset' */
    /* Logic: '<S201>/OR1' incorporates:
     *  Logic: '<S186>/Logical2'
     *  Logic: '<S201>/NOT'
     *  Logic: '<S201>/OR'
     *  UnitDelay: '<S201>/UnitDelay'
     */
    AVTR_ac_DW.UnitDelay_DSTATE_as = ((VeAVTR_b_SDS_HeatingReq_App1) ||
        (((!rtb_NotEqual_i) && (!rtb_Comparison2)) &&
         (AVTR_ac_DW.UnitDelay_DSTATE_as)));

    /* End of Outputs for SubSystem: '<S195>/SignalLatchOnWithReset' */

    /* Switch: '<S195>/Switch1' incorporates:
     *  UnitDelay: '<S195>/UnitDelay1'
     *  UnitDelay: '<S201>/UnitDelay'
     */
    if (!AVTR_ac_DW.UnitDelay_DSTATE_as)
    {
        AVTR_ac_DW.UnitDelay1_DSTATE_c = VeAVTR_T_SDS_ClntTmpIn_Tgt;
    }

    /* End of Switch: '<S195>/Switch1' */

    /* Logic: '<S33>/Logical5' incorporates:
     *  Constant: '<S227>/Constant'
     *  Constant: '<S228>/Constant'
     *  Constant: '<S232>/Constant'
     *  Constant: '<S238>/Calib'
     *  Constant: '<S245>/Calib'
     *  Logic: '<S33>/Logical7'
     *  Logic: '<S33>/Logical9'
     *  RelationalOperator: '<S33>/Comparison4'
     *  RelationalOperator: '<S33>/Comparison5'
     *  RelationalOperator: '<S33>/Comparison6'
     */
    VeAVTR_b_EVA_Allowed_Raw = ((((CeSSDR_e_KeyCrank == ((uint32)
        VeAVTR_e_KeySts_AD)) || (((uint32)VeAVTR_e_KeySts_AD) ==
        CeSSDR_e_KeyPostCrnk)) || (KeAVTR_b_SSDR_KeySts_EVA_Disbl)) &&
        ((((uint32)VeAVTR_e_HV_BatCntctrStat_AD) == CeHVTR_e_Closed) ||
         (KeAVTR_b_BatCntctrCls_Disbl)));

    /* Outputs for Atomic SubSystem: '<S33>/EdgeBi' */
    /* RelationalOperator: '<S229>/NotEqual' incorporates:
     *  UnitDelay: '<S229>/UnitDelay'
     */
    rtb_NotEqual_i = (VeAVTR_b_EVA_Allowed_Raw != AVTR_ac_DW.UnitDelay_DSTATE_o4);

    /* Update for UnitDelay: '<S229>/UnitDelay' */
    AVTR_ac_DW.UnitDelay_DSTATE_o4 = VeAVTR_b_EVA_Allowed_Raw;

    /* End of Outputs for SubSystem: '<S33>/EdgeBi' */

    /* Outputs for Atomic SubSystem: '<S33>/EdgeFalling' */
    /* Logic: '<S230>/AND' incorporates:
     *  Logic: '<S230>/OR1'
     *  UnitDelay: '<S230>/UnitDelay'
     */
    rtb_Comparison2 = ((!VeAVTR_b_PrepareToShtdwn_AD) &&
                       (AVTR_ac_DW.UnitDelay_DSTATE_go));

    /* Update for UnitDelay: '<S230>/UnitDelay' */
    AVTR_ac_DW.UnitDelay_DSTATE_go = VeAVTR_b_PrepareToShtdwn_AD;

    /* End of Outputs for SubSystem: '<S33>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S33>/EdgeRising' */
    /* Logic: '<S231>/AND' incorporates:
     *  Logic: '<S231>/OR1'
     *  UnitDelay: '<S231>/UnitDelay'
     */
    rtb_UnitDelay_k3 = !AVTR_ac_DW.UnitDelay_DSTATE_cc;

    /* Update for UnitDelay: '<S231>/UnitDelay' incorporates:
     *  Constant: '<S33>/TRUEConstant'
     */
    AVTR_ac_DW.UnitDelay_DSTATE_cc = true;

    /* End of Outputs for SubSystem: '<S33>/EdgeRising' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/AVTO_100ms'
     */
    /* RelationalOperator: '<S33>/Comparison2' incorporates:
     *  Switch: '<S39>/Switch3'
     *  Switch: '<S3>/Switch10'
     *  Truth Table: '<S4>/Truth_Table1'
     */
    rtb_OR1_d_tmp = VeAVTR_e_SDS_ActualState;

    /* Outputs for Atomic SubSystem: '<S33>/SignalLatchOnWithReset1' */
    /* Logic: '<S246>/OR1' incorporates:
     *  Constant: '<S236>/Constant'
     *  Constant: '<S239>/Calib'
     *  Constant: '<S240>/Calib'
     *  Constant: '<S241>/Calib'
     *  Constant: '<S242>/Calib'
     *  Constant: '<S243>/Calib'
     *  Constant: '<S33>/ConstantValue2'
     *  Logic: '<S246>/NOT'
     *  Logic: '<S246>/OR'
     *  Logic: '<S33>/Logical1'
     *  Logic: '<S33>/Logical10'
     *  Logic: '<S33>/Logical2'
     *  Logic: '<S33>/Logical3'
     *  Logic: '<S33>/Logical4'
     *  Logic: '<S33>/Logical6'
     *  Logic: '<S33>/Logical8'
     *  RelationalOperator: '<S33>/Comparison1'
     *  RelationalOperator: '<S33>/Comparison2'
     *  Switch: '<S39>/Switch3'
     *  UnitDelay: '<S246>/UnitDelay'
     */
    AVTR_ac_DW.UnitDelay_DSTATE_o = ((((((((VeAVTR_b_BatTmpRng_EVA_On) ||
        (KeAVTR_b_BattTmpRange_EVA_Disbl)) && ((VeAVTR_e_BatCoolngFlt_Sts_BD ==
        0) || (KeAVTR_b_BatCoolFlt_Disbl))) && ((((uint32)
        VeAVTR_e_SDS_ActualState) == CeTRIR_e_SDS_OFF) ||
        (KeAVTR_b_SDS_ActualState_Dsbl))) && ((VeAVTR_b_PropSysActv_AD) ||
        (KeAVTR_b_PSA_EVA_Disbl))) && ((VeAVTR_b_SDS_RHSC2_Healthy) ||
        (KeAVTR_b_SDS_RHSC2_Healthy_Disbl))) && (VeAVTR_b_EVA_Allowed_Raw)) ||
        ((((!rtb_NotEqual_i) && (!rtb_UnitDelay_k3)) && (!rtb_Comparison2)) &&
         (AVTR_ac_DW.UnitDelay_DSTATE_o)));

    /* End of Outputs for SubSystem: '<S33>/SignalLatchOnWithReset1' */

    /* Switch: '<S33>/Switch' incorporates:
     *  Constant: '<S244>/Calib'
     */
    if (KeAVTR_b_SDS_ZeroActState_Disbl)
    {
        /* Switch: '<S33>/Switch' */
        VeAVTR_b_EVA_Allowed_BD = VeAVTR_b_EVA_Allowed_Raw;
    }
    else
    {
        /* Switch: '<S33>/Switch' */
        VeAVTR_b_EVA_Allowed_BD = AVTR_ac_DW.UnitDelay_DSTATE_o;
    }

    /* End of Switch: '<S33>/Switch' */

    /* Switch: '<S33>/Switch1' incorporates:
     *  Constant: '<S237>/Calib'
     *  Logic: '<S33>/Logical11'
     *  Logic: '<S33>/Logical12'
     *  Switch: '<S33>/Switch2'
     */
    if (VeAVTR_b_EVA_Allowed_BD)
    {
        /* Switch: '<S33>/Switch1' incorporates:
         *  Constant: '<S234>/Constant'
         */
        VeAVTR_e_BFC_Allowedstate_BD = CeAVTR_e_BFC_Allowed;
    }
    else if ((!VeAVTR_b_EVA_Allowed_BD) && (KeAVTR_b_BFC_AllowdSt_SNA))
    {
        /* Switch: '<S33>/Switch2' incorporates:
         *  Constant: '<S233>/Constant'
         *  Switch: '<S33>/Switch1'
         */
        VeAVTR_e_BFC_Allowedstate_BD = CeAVTR_e_BFC_NotAllowed;
    }
    else
    {
        /* Switch: '<S33>/Switch1' incorporates:
         *  Constant: '<S235>/Constant'
         *  Switch: '<S33>/Switch2'
         */
        VeAVTR_e_BFC_Allowedstate_BD = CeAVTR_e_BFC_SNA;
    }

    /* End of Switch: '<S33>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/AVTR_MedTEH' */

    /* Inport: '<Root>/VeTRIR_e_SDS_MaxCoolingReq' */
    (void)Rte_Read_VeTRIR_e_SDS_MaxCoolingReq_Value
        ((&(VeAVTR_e_SDS_MaxCoolingReq)));

    /* Outputs for Function Call SubSystem: '<Root>/AVTR_MedTEH' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/EVA_Control'
     */
    /* Switch: '<S39>/Switch4' */
    if (VeAVTR_b_SDS_RHSC2_Healthy)
    {
    }
    else
    {
        /* Switch: '<S39>/Switch4' incorporates:
         *  Inport: '<Root>/VeTRIR_e_SDS_MaxCoolingReq'
         *  UnitDelay: '<S39>/UnitDelay2'
         */
        VeAVTR_e_SDS_MaxCoolingReq = AVTR_ac_DW.UnitDelay2_DSTATE_k;
    }

    /* End of Switch: '<S39>/Switch4' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/AVTO_100ms'
     */
    /* Truth Table: '<S4>/Truth_Table1' incorporates:
     *  RelationalOperator: '<S33>/Comparison2'
     *  Switch: '<S33>/Switch1'
     *  Switch: '<S39>/Switch3'
     *  Switch: '<S3>/Switch6'
     */
    /* Truth Table Function 'AVTR_MedTEH/EVA_Control/Truth_Table1': '<S41>:1' */
    /*  BFC Allowed state */
    /* Condition '#1': '<S41>:1:15' */
    aVarTruthTableCondition_1_tmp = VeAVTR_e_BFC_Allowedstate_BD;
    rtb_NotEqual_i = (((uint32)VeAVTR_e_BFC_Allowedstate_BD) ==
                      CeAVTR_e_BFC_NotAllowed);

    /*  BFC Allowed state */
    /* Condition '#2': '<S41>:1:19' */
    rtb_Comparison2 = (((uint32)VeAVTR_e_BFC_Allowedstate_BD) ==
                       CeAVTR_e_BFC_Allowed);

    /*  SDS Actual State */
    /* Condition '#3': '<S41>:1:23' */
    aVarTruthTableCondition_3 = (((uint32)VeAVTR_e_SDS_ActualState) ==
        CeTRIR_e_SDS_OFF);

    /*  SDS Actual State */
    /* Condition '#4': '<S41>:1:27' */
    rtb_Comparison = (((uint32)VeAVTR_e_SDS_ActualState) == CeTRIR_e_SDS_ON);

    /*  SDS Cooling request */
    /*  SDS Heating request */
    /*  SDS max cooling request */
    /* Condition '#7': '<S41>:1:39' */
    rtb_UnitDelay_k3 = (((uint32)VeAVTR_e_SDS_MaxCoolingReq) ==
                        CeTRIR_e_HCP_MaxCoolingNotRequested);

    /*  SDS max cooling request */
    /* Condition '#8': '<S41>:1:43' */
    rtb_Logical8_f = (((uint32)VeAVTR_e_SDS_MaxCoolingReq) ==
                      CeTRIR_e_HCP_MaxCoolingRequested);
    if (rtb_NotEqual_i && (!rtb_Comparison2))
    {
        /* Decision 'D1': '<S41>:1:45' */
        /*  No_EVA_Cond */
        /* Action '1': '<S41>:1:71' */
        VeAVTR_e_EVA_ThermalStates = CeAVTR_e_NoEVACond;
    }
    else
    {
        rtb_NotEqual_i = ((!rtb_NotEqual_i) && rtb_Comparison2);
        rtb_Comparison2 = !rtb_Comparison;
        if ((rtb_NotEqual_i && aVarTruthTableCondition_3) && rtb_Comparison2)
        {
            /* Decision 'D2': '<S41>:1:47' */
            /*  No_EVA_Cond */
            /* Action '1': '<S41>:1:71' */
            VeAVTR_e_EVA_ThermalStates = CeAVTR_e_NoEVACond;
        }
        else
        {
            rtb_NotEqual_i = (rtb_NotEqual_i && (!aVarTruthTableCondition_3));
            aVarTruthTableCondition_3 = (rtb_NotEqual_i && rtb_Comparison);
            rtb_Comparison = !rtb_Logical8_f;
            rtb_Comparison2_f2 = !VeAVTR_b_SDS_HeatingReq_BD;
            rtb_Logical3 = ((aVarTruthTableCondition_3 &&
                             (VeAVTR_b_SDS_CoolingReq_BD)) && rtb_Comparison2_f2);
            if ((rtb_Logical3 && rtb_UnitDelay_k3) && rtb_Comparison)
            {
                /* Decision 'D3': '<S41>:1:49' */
                /* Condition '#5': '<S41>:1:31' */
                /*  EVA_Cooling */
                /* Action '2': '<S41>:1:77' */
                VeAVTR_e_EVA_ThermalStates = CeAVTR_e_EVA_Cool;
            }
            else
            {
                UnitDelay_DSTATE_cf_tmp = !VeAVTR_b_SDS_CoolingReq_BD;
                aVarTruthTableCondition_3 = (aVarTruthTableCondition_3 &&
                    UnitDelay_DSTATE_cf_tmp);
                if (((aVarTruthTableCondition_3 && (VeAVTR_b_SDS_HeatingReq_BD))
                     && rtb_UnitDelay_k3) && rtb_Comparison)
                {
                    /* Decision 'D4': '<S41>:1:51' */
                    /* Condition '#6': '<S41>:1:35' */
                    /*  EVA_Heating */
                    /* Action '3': '<S41>:1:83' */
                    VeAVTR_e_EVA_ThermalStates = CeAVTR_e_EVA_Heat;
                }
                else
                {
                    rtb_Logical2_nw_tmp = !rtb_UnitDelay_k3;
                    if ((rtb_Logical3 && rtb_Logical2_nw_tmp) && rtb_Logical8_f)
                    {
                        /* Decision 'D5': '<S41>:1:53' */
                        /* Condition '#5': '<S41>:1:31' */
                        /*  EVA_MAxCooling */
                        /* Action '4': '<S41>:1:89' */
                        VeAVTR_e_EVA_ThermalStates = CeAVTR_e_EVA_MaxCool;
                    }
                    else if (((aVarTruthTableCondition_3 && rtb_Comparison2_f2) &&
                              rtb_UnitDelay_k3) && rtb_Comparison)
                    {
                        /* Decision 'D6': '<S41>:1:55' */
                        /*  EVA_Balancing */
                        /* Action '5': '<S41>:1:95' */
                        VeAVTR_e_EVA_ThermalStates = CeAVTR_e_EVA_Balancing;
                    }
                    else
                    {
                        rtb_NotEqual_i = (rtb_NotEqual_i && rtb_Comparison2);
                        if (((rtb_NotEqual_i && (VeAVTR_b_SDS_CoolingReq_BD)) &&
                             rtb_Comparison2_f2) && rtb_Comparison)
                        {
                            /* Decision 'D7': '<S41>:1:57' */
                            /* Condition '#5': '<S41>:1:31' */
                            /*  EVA_Cooling */
                            /* Action '2': '<S41>:1:77' */
                            VeAVTR_e_EVA_ThermalStates = CeAVTR_e_EVA_Cool;
                        }
                        else if (((rtb_NotEqual_i && UnitDelay_DSTATE_cf_tmp) &&
                                  (VeAVTR_b_SDS_HeatingReq_BD)) &&
                                 rtb_Comparison)
                        {
                            /* Decision 'D8': '<S41>:1:59' */
                            /* Condition '#6': '<S41>:1:35' */
                            /*  EVA_Heating */
                            /* Action '3': '<S41>:1:83' */
                            VeAVTR_e_EVA_ThermalStates = CeAVTR_e_EVA_Heat;
                        }
                        else if (((rtb_NotEqual_i && rtb_Comparison2_f2) &&
                                  rtb_Logical2_nw_tmp) && rtb_Logical8_f)
                        {
                            /* Decision 'D9': '<S41>:1:61' */
                            /*  EVA_MAxCooling */
                            /* Action '4': '<S41>:1:89' */
                            VeAVTR_e_EVA_ThermalStates = CeAVTR_e_EVA_MaxCool;
                        }
                        else
                        {
                            /* Decision 'D10': '<S41>:1:63' */
                            /*  Default */
                            /*  EVA_Cooling */
                            /* Action '2': '<S41>:1:77' */
                            VeAVTR_e_EVA_ThermalStates = CeAVTR_e_EVA_Cool;
                        }
                    }
                }
            }
        }
    }

    /* Switch: '<S38>/Switch' incorporates:
     *  Constant: '<S247>/Calib'
     *  Constant: '<S248>/Calib'
     *  UnitDelay: '<S38>/UnitDelay'
     */
    if (KeAVTR_b_EVA_ThrmlState_SD)
    {
        AVTR_ac_DW.UnitDelay_DSTATE_p = KeAVTR_e_EVA_ThrmlState_D;
    }
    else
    {
        AVTR_ac_DW.UnitDelay_DSTATE_p = VeAVTR_e_EVA_ThermalStates;
    }

    /* End of Switch: '<S38>/Switch' */

    /* Logic: '<S249>/Logical4' incorporates:
     *  UnitDelay: '<S249>/UnitDelay2'
     */
    AVTR_ac_DW.UnitDelay2_DSTATE_b = rtb_Comparison2_i;

    /* Logic: '<S249>/Logical6' incorporates:
     *  UnitDelay: '<S249>/UnitDelay3'
     */
    AVTR_ac_DW.UnitDelay3_DSTATE = rtb_Comparison2_i;

    /* RelationalOperator: '<S40>/Comparison2' incorporates:
     *  Constant: '<S270>/Constant'
     *  RelationalOperator: '<S187>/Comparison1'
     *  UnitDelay: '<S38>/UnitDelay'
     */
    rtb_Comparison2_i = (((uint32)VeAVTR_e_EVA_ThrmlState_BD) ==
                         CeAVTR_e_EVA_MaxCool);

    /* Switch: '<S40>/Switch' incorporates:
     *  Constant: '<S271>/Constant'
     *  Constant: '<S272>/Constant'
     *  Constant: '<S273>/Calib'
     *  Logic: '<S40>/Logical1'
     *  Logic: '<S40>/Logical2'
     *  Logic: '<S40>/Logical3'
     *  Logic: '<S40>/Logical4'
     *  Logic: '<S40>/Logical5'
     *  RelationalOperator: '<S40>/Comparison1'
     *  RelationalOperator: '<S40>/Comparison4'
     *  Switch: '<S40>/Switch1'
     */
    if (((KeAVTR_b_EVA_ThrmlStMax_CoolEnb) || rtb_Comparison2_i) &&
            (CeTRIR_e_HCP_MaxCoolingRequested == ((uint32)
            VeAVTR_e_SDS_MaxCoolingReq)))
    {
        /* Switch: '<S40>/Switch' incorporates:
         *  Constant: '<S268>/Constant'
         */
        VeAVTR_e_HCP_MaxCoolingSt_BD = CeAVTR_e_HCP_MaxCoolingON;
    }
    else if ((((uint32)VeAVTR_e_SDS_MaxCoolingReq) ==
              CeTRIR_e_HCP_MaxCoolingNotRequested) && ((!rtb_Comparison2_i) ||
              (KeAVTR_b_EVA_ThrmlStMax_CoolEnb)))
    {
        /* Switch: '<S40>/Switch1' incorporates:
         *  Constant: '<S267>/Constant'
         *  Switch: '<S40>/Switch'
         */
        VeAVTR_e_HCP_MaxCoolingSt_BD = CeAVTR_e_HCP_MaxCoolingOFF;
    }
    else
    {
        /* Switch: '<S40>/Switch' incorporates:
         *  Constant: '<S269>/Constant'
         *  Switch: '<S40>/Switch1'
         */
        VeAVTR_e_HCP_MaxCoolingSt_BD = CeAVTR_e_HCP_MaxCoolingSNA;
    }

    /* End of Switch: '<S40>/Switch' */

    /* Update for UnitDelay: '<S185>/UnitDelay' incorporates:
     *  UnitDelay: '<S188>/UnitDelay1'
     */
    AVTR_ac_DW.UnitDelay_DSTATE = AVTR_ac_DW.UnitDelay1_DSTATE_a;

    /* Update for UnitDelay: '<S185>/UnitDelay2' */
    AVTR_ac_DW.UnitDelay2_DSTATE = VeAVTR_b_SDS_CoolingReq_App1;

    /* Update for UnitDelay: '<S186>/UnitDelay1' incorporates:
     *  UnitDelay: '<S195>/UnitDelay1'
     */
    AVTR_ac_DW.UnitDelay1_DSTATE_d = AVTR_ac_DW.UnitDelay1_DSTATE_c;

    /* Update for UnitDelay: '<S207>/UnitDelay' */
    AVTR_ac_DW.UnitDelay_DSTATE_c = VeAVTR_T_SDS_ClntTmpIn_Act;

    /* Update for UnitDelay: '<S207>/UnitDelay2' */
    AVTR_ac_DW.UnitDelay2_DSTATE_d = AVTR_ac_B.OutportBufferForOut1;

    /* Update for UnitDelay: '<S39>/UnitDelay3' incorporates:
     *  Switch: '<S39>/Switch3'
     */
    AVTR_ac_DW.UnitDelay3_DSTATE_h = VeAVTR_e_SDS_ActualState;

    /* Update for UnitDelay: '<S39>/UnitDelay2' incorporates:
     *  Switch: '<S39>/Switch4'
     */
    AVTR_ac_DW.UnitDelay2_DSTATE_k = VeAVTR_e_SDS_MaxCoolingReq;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/AVTO_100ms'
     */
    /* Switch: '<S3>/Switch5' incorporates:
     *  Constant: '<S17>/Calib'
     */
    if (KeAVTR_b_SDS_HV_PwrAvg_SD)
    {
        /* Outport: '<Root>/VeAVTR_P_SDS_HV_PwrAvg' incorporates:
         *  Constant: '<S6>/Calib'
         *  SignalConversion generated from: '<S1>/VeAVTR_P_SDS_HV_PwrAvg_AD'
         */
        (void)Rte_Write_VeAVTR_P_SDS_HV_PwrAvg_Value(KeAVTR_P_SDS_HV_PwrAvg_D);
    }
    else
    {
        /* Outport: '<Root>/VeAVTR_P_SDS_HV_PwrAvg' incorporates:
         *  SignalConversion generated from: '<S1>/VeAVTR_P_SDS_HV_PwrAvg_AD'
         */
        (void)Rte_Write_VeAVTR_P_SDS_HV_PwrAvg_Value(VeAVTR_P_SDS_HV_PwrAvg_BD);
    }

    /* End of Switch: '<S3>/Switch5' */

    /* Switch: '<S3>/Switch9' incorporates:
     *  Constant: '<S14>/Calib'
     */
    if (KeAVTR_b_SDS_ClntTmpInAct_SD)
    {
        /* Outport: '<Root>/VeAVTR_T_SDS_Clnt_TmpIn_Act' incorporates:
         *  Constant: '<S7>/Calib'
         *  SignalConversion generated from: '<S1>/VeAVTR_T_SDSClntTmpIn_Act_AD'
         */
        (void)Rte_Write_VeAVTR_T_SDS_Clnt_TmpIn_Act_Value
            (KeAVTR_T_SDS_ClntTmpInAct_D);
    }
    else
    {
        /* Outport: '<Root>/VeAVTR_T_SDS_Clnt_TmpIn_Act' incorporates:
         *  SignalConversion generated from: '<S1>/VeAVTR_T_SDSClntTmpIn_Act_AD'
         */
        (void)Rte_Write_VeAVTR_T_SDS_Clnt_TmpIn_Act_Value
            (VeAVTR_T_SDS_ClntTmpIn_Act);
    }

    /* End of Switch: '<S3>/Switch9' */

    /* Switch: '<S3>/Switch3' incorporates:
     *  Constant: '<S16>/Calib'
     */
    if (KeAVTR_b_SDS_CoolingReq_SD)
    {
        /* Outport: '<Root>/VeAVTR_b_SDS_CoolingReq' incorporates:
         *  Constant: '<S15>/Calib'
         *  SignalConversion generated from: '<S1>/VeAVTR_b_SDS_CoolingReq_AD'
         */
        (void)Rte_Write_VeAVTR_b_SDS_CoolingReq_Value(KeAVTR_b_SDS_CoolingReq_D);
    }
    else
    {
        /* Outport: '<Root>/VeAVTR_b_SDS_CoolingReq' incorporates:
         *  SignalConversion generated from: '<S1>/VeAVTR_b_SDS_CoolingReq_AD'
         */
        (void)Rte_Write_VeAVTR_b_SDS_CoolingReq_Value(VeAVTR_b_SDS_CoolingReq_BD);
    }

    /* End of Switch: '<S3>/Switch3' */

    /* Switch: '<S3>/Switch4' incorporates:
     *  Constant: '<S19>/Calib'
     */
    if (KeAVTR_b_SDS_HeatingReq_SD)
    {
        /* Outport: '<Root>/VeAVTR_b_SDS_HeatingReq' incorporates:
         *  Constant: '<S18>/Calib'
         *  SignalConversion generated from: '<S1>/VeAVTR_b_SDS_HeatingReq_AD'
         */
        (void)Rte_Write_VeAVTR_b_SDS_HeatingReq_Value(KeAVTR_b_SDS_HeatingReq_D);
    }
    else
    {
        /* Outport: '<Root>/VeAVTR_b_SDS_HeatingReq' incorporates:
         *  SignalConversion generated from: '<S1>/VeAVTR_b_SDS_HeatingReq_AD'
         */
        (void)Rte_Write_VeAVTR_b_SDS_HeatingReq_Value(VeAVTR_b_SDS_HeatingReq_BD);
    }

    /* End of Switch: '<S3>/Switch4' */

    /* Switch: '<S3>/Switch2' incorporates:
     *  Constant: '<S13>/Calib'
     */
    if (KeAVTR_b_SDS_ClntTempErr_SD)
    {
        /* Outport: '<Root>/VeAVTR_dT_SDS_ClntTempErr' incorporates:
         *  Constant: '<S20>/Calib'
         *  SignalConversion generated from: '<S1>/VeAVTR_dT_SDS_ClntTempErr_AD'
         */
        (void)Rte_Write_VeAVTR_dT_SDS_ClntTempErr_Value
            (KeAVTR_dT_SDS_ClntTempErr_D);
    }
    else
    {
        /* Outport: '<Root>/VeAVTR_dT_SDS_ClntTempErr' incorporates:
         *  SignalConversion generated from: '<S1>/VeAVTR_dT_SDS_ClntTempErr_AD'
         */
        (void)Rte_Write_VeAVTR_dT_SDS_ClntTempErr_Value
            (VeAVTR_dT_SDS_ClntTempErr_BD);
    }

    /* End of Switch: '<S3>/Switch2' */

    /* Switch: '<S3>/Switch6' incorporates:
     *  Constant: '<S21>/Calib'
     *  Constant: '<S8>/Calib'
     */
    if (KeAVTR_b_BFC_Allowedstate_SD)
    {
        aVarTruthTableCondition_1_tmp = KeAVTR_e_BFC_Allowedstate_D;
    }

    /* Outport: '<Root>/VeAVTR_e_BFC_Allowedstate' incorporates:
     *  SignalConversion generated from: '<S1>/VeAVTR_e_BFC_Allowedstate_AD'
     *  Switch: '<S3>/Switch6'
     */
    (void)Rte_Write_VeAVTR_e_BFC_Allowedstate_Value
        (aVarTruthTableCondition_1_tmp);

    /* Switch: '<S3>/Switch1' incorporates:
     *  Constant: '<S9>/Calib'
     */
    if (KeAVTR_b_BatCoolngFlt_Sts_SD)
    {
        /* Outport: '<Root>/VeAVTR_e_BatCoolngFlt_Sts' incorporates:
         *  Constant: '<S25>/Calib'
         *  SignalConversion generated from: '<S1>/VeAVTR_e_BatCoolngFlt_Sts_AD'
         */
        (void)Rte_Write_VeAVTR_e_BatCoolngFlt_Sts_Value
            (KeAVTR_k_BatCoolngFlt_Sts_D);
    }
    else
    {
        /* Outport: '<Root>/VeAVTR_e_BatCoolngFlt_Sts' incorporates:
         *  SignalConversion generated from: '<S1>/VeAVTR_e_BatCoolngFlt_Sts_AD'
         */
        (void)Rte_Write_VeAVTR_e_BatCoolngFlt_Sts_Value
            (VeAVTR_e_BatCoolngFlt_Sts_BD);
    }

    /* End of Switch: '<S3>/Switch1' */

    /* Switch: '<S3>/Switch8' incorporates:
     *  Constant: '<S10>/Calib'
     *  Constant: '<S22>/Calib'
     */
    if (KeAVTR_b_EVA_ThrmlState_SD)
    {
        tmp_0 = KeAVTR_e_EVA_ThrmlState_D;
    }

    /* Outport: '<Root>/VeAVTR_e_EVA_ThrmlState' incorporates:
     *  SignalConversion generated from: '<S1>/VeAVTR_e_EVA_ThrmlState_AD'
     *  Switch: '<S3>/Switch8'
     */
    (void)Rte_Write_VeAVTR_e_EVA_ThrmlState_Value(tmp_0);

    /* Switch: '<S3>/Switch7' incorporates:
     *  Constant: '<S11>/Calib'
     *  Constant: '<S23>/Calib'
     *  Switch: '<S40>/Switch'
     */
    if (KeAVTR_b_HCP_MaxCoolingSt_SD)
    {
        tmp = KeAVTR_e_HCP_MaxCoolingSt_D;
    }
    else
    {
        tmp = VeAVTR_e_HCP_MaxCoolingSt_BD;
    }

    /* Outport: '<Root>/VeAVTR_e_HCP_MaxCoolingSt' incorporates:
     *  SignalConversion generated from: '<S1>/VeAVTR_e_HCP_MaxCoolingSt_AD'
     *  Switch: '<S3>/Switch7'
     */
    (void)Rte_Write_VeAVTR_e_HCP_MaxCoolingSt_Value(tmp);

    /* Switch: '<S3>/Switch10' incorporates:
     *  Constant: '<S12>/Calib'
     *  Constant: '<S24>/Calib'
     */
    if (KeAVTR_b_SDSActualState_SD)
    {
        rtb_OR1_d_tmp = KeAVTR_e_SDSActualState_D;
    }

    /* Outport: '<Root>/VeAVTR_e_SDS_Actual_State' incorporates:
     *  SignalConversion generated from: '<S1>/VeAVTR_e_SDSActualState_AD'
     *  Switch: '<S3>/Switch10'
     */
    (void)Rte_Write_VeAVTR_e_SDS_Actual_State_Value(rtb_OR1_d_tmp);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/AVTR_MedTEH' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
#endif

}

#endif

/* Output function */
FUNC(void, AVTR_CODE) AVTR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/AVTR_PwrOn'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/AVTO_Init'
     */
    /* SignalConversion generated from: '<S316>/VariantSource1' incorporates:
     *  Constant: '<S335>/Calib'
     *  Constant: '<S336>/Calib'
     */
#if Rte_SysCon_Variant_AVTR_1

    AVTR_ac_B.Calib_f = KeAVTR_k_BatCoolngFlt_Sts_init;

    /* VariantMerge generated from: '<S316>/VariantSource1' incorporates:
     *  Constant: '<S336>/Calib'
     */
    AVTR_ac_B.VariantMerge_For_Variant_Source_Varian_c = AVTR_ac_B.Calib_f;

#else

    AVTR_ac_B.Calib_b = KeAVTR_k_BatCoolngFlt_Sts_NF_Dial;

#endif

    /* End of SignalConversion generated from: '<S316>/VariantSource1' */

    /* SignalConversion generated from: '<S316>/VariantSource2' incorporates:
     *  Constant: '<S319>/Calib'
     *  Constant: '<S320>/Calib'
     *  Constant: '<S325>/Calib'
     *  Constant: '<S326>/Calib'
     *  SignalConversion generated from: '<S316>/VariantSource1'
     */
#if Rte_SysCon_Variant_AVTR_1

    AVTR_ac_B.Calib_n = KeAVTR_dT_SDS_ClntTempErr_init;

    /* VariantMerge generated from: '<S316>/VariantSource2' incorporates:
     *  Constant: '<S319>/Calib'
     */
    AVTR_ac_B.VariantMerge_For_Variant_Source_VariantS = AVTR_ac_B.Calib_n;

#else

    /* VariantMerge generated from: '<S316>/VariantSource1' incorporates:
     *  SignalConversion generated from: '<S316>/VariantSource1'
     */
    AVTR_ac_B.VariantMerge_For_Variant_Source_Varian_c = AVTR_ac_B.Calib_b;
    AVTR_ac_B.Calib = KeAVTR_dT_SDS_ClntTempErr_NF_Dial;

#endif

    /* End of SignalConversion generated from: '<S316>/VariantSource2' */

    /* SignalConversion generated from: '<S316>/VariantSource3' incorporates:
     *  Constant: '<S321>/Calib'
     *  Constant: '<S322>/Calib'
     *  Constant: '<S323>/Calib'
     *  Constant: '<S324>/Calib'
     *  SignalConversion generated from: '<S316>/VariantSource2'
     */
#if Rte_SysCon_Variant_AVTR_1

    AVTR_ac_B.Calib_d = KeAVTR_b_SDS_CoolingReq_init;

    /* VariantMerge generated from: '<S316>/VariantSource3' incorporates:
     *  Constant: '<S323>/Calib'
     */
    AVTR_ac_B.VariantMerge_For_Variant_Source_Varia_gv = AVTR_ac_B.Calib_d;

#else

    /* VariantMerge generated from: '<S316>/VariantSource2' incorporates:
     *  SignalConversion generated from: '<S316>/VariantSource2'
     */
    AVTR_ac_B.VariantMerge_For_Variant_Source_VariantS = AVTR_ac_B.Calib;
    AVTR_ac_B.Calib_j = KeAVTR_b_SDS_CoolingReq_NF_Dial;

    /* VariantMerge generated from: '<S316>/VariantSource3' incorporates:
     *  Constant: '<S321>/Calib'
     *  Constant: '<S324>/Calib'
     *  SignalConversion generated from: '<S316>/VariantSource3'
     */
    AVTR_ac_B.VariantMerge_For_Variant_Source_Varia_gv = AVTR_ac_B.Calib_j;
    AVTR_ac_B.Calib_d = KeAVTR_b_SDS_HeatingReq_NF_Dial;

#endif

    /* End of SignalConversion generated from: '<S316>/VariantSource3' */

    /* SignalConversion generated from: '<S316>/VariantSource4' incorporates:
     *  Constant: '<S317>/Calib'
     *  Constant: '<S318>/Calib'
     *  Constant: '<S319>/Calib'
     *  Constant: '<S320>/Calib'
     *  Constant: '<S324>/Calib'
     *  SignalConversion generated from: '<S316>/VariantSource5'
     */
#if Rte_SysCon_Variant_AVTR_1

    AVTR_ac_B.Calib_j = KeAVTR_b_SDS_HeatingReq_init;

    /* VariantMerge generated from: '<S316>/VariantSource4' incorporates:
     *  Constant: '<S324>/Calib'
     */
    AVTR_ac_B.VariantMerge_For_Variant_Source_Varian_a = AVTR_ac_B.Calib_j;
    AVTR_ac_B.Calib = KeAVTR_P_SDS_HV_PwrAvg_init;

    /* VariantMerge generated from: '<S316>/VariantSource5' incorporates:
     *  Constant: '<S320>/Calib'
     */
    AVTR_ac_B.VariantMerge_For_Variant_Source_Varian_g = AVTR_ac_B.Calib;

#else

    /* VariantMerge generated from: '<S316>/VariantSource4' incorporates:
     *  SignalConversion generated from: '<S316>/VariantSource4'
     */
    AVTR_ac_B.VariantMerge_For_Variant_Source_Varian_a = AVTR_ac_B.Calib_d;
    AVTR_ac_B.Calib_n = KeAVTR_P_SDS_HV_PwrAvg_NF_Dial;

#endif

    /* End of SignalConversion generated from: '<S316>/VariantSource4' */

    /* SignalConversion generated from: '<S316>/VariantSource6' incorporates:
     *  Constant: '<S327>/Calib'
     *  Constant: '<S328>/Calib'
     *  SignalConversion generated from: '<S316>/VariantSource5'
     */
#if Rte_SysCon_Variant_AVTR_1

    AVTR_ac_B.Calib_h = KeAVTR_e_BFC_Allowedstate_init;

    /* VariantMerge generated from: '<S316>/VariantSource6' incorporates:
     *  Constant: '<S328>/Calib'
     */
    AVTR_ac_B.VariantMerge_For_Variant_Source_Varia_i0 = AVTR_ac_B.Calib_h;

#else

    /* VariantMerge generated from: '<S316>/VariantSource5' incorporates:
     *  SignalConversion generated from: '<S316>/VariantSource5'
     */
    AVTR_ac_B.VariantMerge_For_Variant_Source_Varian_g = AVTR_ac_B.Calib_n;
    AVTR_ac_B.Calib_p = KeAVTR_e_BFC_Allowedstate_NF_Dial;

#endif

    /* End of SignalConversion generated from: '<S316>/VariantSource6' */

    /* SignalConversion generated from: '<S316>/VariantSource7' incorporates:
     *  Constant: '<S331>/Calib'
     *  Constant: '<S332>/Calib'
     *  SignalConversion generated from: '<S316>/VariantSource6'
     */
#if Rte_SysCon_Variant_AVTR_1

    AVTR_ac_B.Calib_k = KeAVTR_e_HCP_MaxCoolingSt_init;

    /* VariantMerge generated from: '<S316>/VariantSource7' incorporates:
     *  Constant: '<S332>/Calib'
     */
    AVTR_ac_B.VariantMerge_For_Variant_Source_Varian_k = AVTR_ac_B.Calib_k;

#else

    /* VariantMerge generated from: '<S316>/VariantSource6' incorporates:
     *  Constant: '<S327>/Calib'
     *  SignalConversion generated from: '<S316>/VariantSource6'
     */
    AVTR_ac_B.VariantMerge_For_Variant_Source_Varia_i0 = AVTR_ac_B.Calib_p;
    AVTR_ac_B.Calib_l = KeAVTR_e_HCP_MaxCoolingSt_NF_Dial;

#endif

    /* End of SignalConversion generated from: '<S316>/VariantSource7' */

    /* SignalConversion generated from: '<S316>/VariantSource8' incorporates:
     *  Constant: '<S329>/Calib'
     *  Constant: '<S330>/Calib'
     *  SignalConversion generated from: '<S316>/VariantSource7'
     */
#if Rte_SysCon_Variant_AVTR_1

    AVTR_ac_B.Calib_mk = KeAVTR_e_EVA_ThrmlState_init;

    /* VariantMerge generated from: '<S316>/VariantSource8' incorporates:
     *  Constant: '<S330>/Calib'
     */
    AVTR_ac_B.VariantMerge_For_Variant_Source_Varia_cr = AVTR_ac_B.Calib_mk;

#else

    /* VariantMerge generated from: '<S316>/VariantSource7' incorporates:
     *  Constant: '<S331>/Calib'
     *  SignalConversion generated from: '<S316>/VariantSource7'
     */
    AVTR_ac_B.VariantMerge_For_Variant_Source_Varian_k = AVTR_ac_B.Calib_l;
    AVTR_ac_B.Calib_m = KeAVTR_e_EVA_ThrmlState_NF_Dial;

#endif

    /* End of SignalConversion generated from: '<S316>/VariantSource8' */

    /* SignalConversion generated from: '<S316>/VariantSource9' incorporates:
     *  Constant: '<S319>/Calib'
     *  Constant: '<S320>/Calib'
     *  SignalConversion generated from: '<S316>/VariantSource8'
     */
#if Rte_SysCon_Variant_AVTR_1

    AVTR_ac_B.Calib = KeAVTR_T_SDS_ClntTmpIn_Act_init;

    /* VariantMerge generated from: '<S316>/VariantSource9' incorporates:
     *  Constant: '<S320>/Calib'
     */
    AVTR_ac_B.VariantMerge_For_Variant_Source_Varian_j = AVTR_ac_B.Calib;

#else

    /* VariantMerge generated from: '<S316>/VariantSource8' incorporates:
     *  Constant: '<S329>/Calib'
     *  SignalConversion generated from: '<S316>/VariantSource8'
     */
    AVTR_ac_B.VariantMerge_For_Variant_Source_Varia_cr = AVTR_ac_B.Calib_m;
    AVTR_ac_B.Calib_n = KeAVTR_T_SDS_ClntTmpIn_Act_NF_Dial;

#endif

    /* End of SignalConversion generated from: '<S316>/VariantSource9' */

    /* SignalConversion generated from: '<S316>/VariantSource10' incorporates:
     *  Constant: '<S333>/Calib'
     *  Constant: '<S334>/Calib'
     *  SignalConversion generated from: '<S316>/VariantSource9'
     */
#if Rte_SysCon_Variant_AVTR_1

    AVTR_ac_B.Calib_f4 = KeAVTR_e_SDS_ActualState_init;

    /* VariantMerge generated from: '<S316>/VariantSource10' incorporates:
     *  Constant: '<S334>/Calib'
     */
    AVTR_ac_B.VariantMerge_For_Variant_Source_Varian_i = AVTR_ac_B.Calib_f4;

#else

    /* VariantMerge generated from: '<S316>/VariantSource9' incorporates:
     *  SignalConversion generated from: '<S316>/VariantSource9'
     */
    AVTR_ac_B.VariantMerge_For_Variant_Source_Varian_j = AVTR_ac_B.Calib_n;
    AVTR_ac_B.Calib_i = KeAVTR_e_SDS_ActualState_NF_Dial;

    /* VariantMerge generated from: '<S316>/VariantSource10' incorporates:
     *  Constant: '<S333>/Calib'
     *  SignalConversion generated from: '<S316>/VariantSource10'
     */
    AVTR_ac_B.VariantMerge_For_Variant_Source_Varian_i = AVTR_ac_B.Calib_i;

#endif

    /* End of SignalConversion generated from: '<S316>/VariantSource10' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeAVTR_P_SDS_HV_PwrAvg' incorporates:
     *  SignalConversion generated from: '<S2>/VeAVTR_P_SDS_HV_PwrAvg_init'
     */
    (void)Rte_Write_VeAVTR_P_SDS_HV_PwrAvg_Value
        (AVTR_ac_B.VariantMerge_For_Variant_Source_Varian_g);

    /* Outport: '<Root>/VeAVTR_T_SDS_Clnt_TmpIn_Act' incorporates:
     *  SignalConversion generated from: '<S2>/VeAVTR_T_SDS_ClntTmpIn_Act_init'
     */
    (void)Rte_Write_VeAVTR_T_SDS_Clnt_TmpIn_Act_Value
        (AVTR_ac_B.VariantMerge_For_Variant_Source_Varian_j);

    /* Outport: '<Root>/VeAVTR_b_SDS_CoolingReq' incorporates:
     *  SignalConversion generated from: '<S2>/VeAVTR_b_SDS_CoolingReq_init'
     */
    (void)Rte_Write_VeAVTR_b_SDS_CoolingReq_Value
        (AVTR_ac_B.VariantMerge_For_Variant_Source_Varia_gv);

    /* Outport: '<Root>/VeAVTR_b_SDS_HeatingReq' incorporates:
     *  SignalConversion generated from: '<S2>/VeAVTR_b_SDS_HeatingReq_init'
     */
    (void)Rte_Write_VeAVTR_b_SDS_HeatingReq_Value
        (AVTR_ac_B.VariantMerge_For_Variant_Source_Varian_a);

    /* Outport: '<Root>/VeAVTR_dT_SDS_ClntTempErr' incorporates:
     *  SignalConversion generated from: '<S2>/VeAVTR_dT_SDS_ClntTempErr_init'
     */
    (void)Rte_Write_VeAVTR_dT_SDS_ClntTempErr_Value
        (AVTR_ac_B.VariantMerge_For_Variant_Source_VariantS);

    /* Outport: '<Root>/VeAVTR_e_BFC_Allowedstate' incorporates:
     *  SignalConversion generated from: '<S2>/VeAVTR_e_BFC_Allowedstate_init'
     *  VariantMerge generated from: '<S316>/VariantSource6'
     */
    (void)Rte_Write_VeAVTR_e_BFC_Allowedstate_Value
        (AVTR_ac_B.VariantMerge_For_Variant_Source_Varia_i0);

    /* Outport: '<Root>/VeAVTR_e_EVA_ThrmlState' incorporates:
     *  SignalConversion generated from: '<S2>/VeAVTR_e_EVA_ThrmlState_init'
     *  VariantMerge generated from: '<S316>/VariantSource8'
     */
    (void)Rte_Write_VeAVTR_e_EVA_ThrmlState_Value
        (AVTR_ac_B.VariantMerge_For_Variant_Source_Varia_cr);

    /* Outport: '<Root>/VeAVTR_e_HCP_MaxCoolingSt' incorporates:
     *  SignalConversion generated from: '<S2>/VeAVTR_e_HCP_MaxCoolingSt_init'
     *  VariantMerge generated from: '<S316>/VariantSource7'
     */
    (void)Rte_Write_VeAVTR_e_HCP_MaxCoolingSt_Value
        (AVTR_ac_B.VariantMerge_For_Variant_Source_Varian_k);

    /* Outport: '<Root>/VeAVTR_e_SDS_Actual_State' incorporates:
     *  SignalConversion generated from: '<S2>/VeAVTR_e_SDS_ActualState_init'
     *  VariantMerge generated from: '<S316>/VariantSource10'
     */
    (void)Rte_Write_VeAVTR_e_SDS_Actual_State_Value
        (AVTR_ac_B.VariantMerge_For_Variant_Source_Varian_i);

    /* Outport: '<Root>/VeAVTR_e_BatCoolngFlt_Sts' incorporates:
     *  SignalConversion generated from: '<S2>/VeAVTR_k_BatCoolngFlt_Sts_init'
     */
    (void)Rte_Write_VeAVTR_e_BatCoolngFlt_Sts_Value
        (AVTR_ac_B.VariantMerge_For_Variant_Source_Varian_c);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, AVTR_CODE) AVTR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */
    {
        AVTR_ac_B.VariantMerge_For_Variant_Source_Varia_cr = CeAVTR_e_NoEVACond;

#if !Rte_SysCon_Variant_AVTR_1

        AVTR_ac_B.Calib_m = CeAVTR_e_NoEVACond;

#endif

#if Rte_SysCon_Variant_AVTR_1

        AVTR_ac_B.Calib_mk = CeAVTR_e_NoEVACond;

#endif

    }

    /* custom signals */
#if Rte_SysCon_Variant_AVTR_1

    VeAVTR_e_HV_BatTmpRng_AD = CeBTRR_e_BatTmpDfltRng;

#endif

#if Rte_SysCon_Variant_AVTR_1

    VeAVTR_e_EVA_ThrmlState_BD = CeAVTR_e_NoEVACond;

#endif

#if Rte_SysCon_Variant_AVTR_1

    VeAVTR_e_EVA_ThermalStates = CeAVTR_e_NoEVACond;

#endif

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/AVTR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/AVTO_Init'
     */
    /* Start for Constant: '<S335>/Calib' incorporates:
     *  Constant: '<S322>/Calib'
     *  Constant: '<S325>/Calib'
     *  Constant: '<S326>/Calib'
     *  Constant: '<S336>/Calib'
     */
#if !Rte_SysCon_Variant_AVTR_1

    /* Start for Constant: '<S335>/Calib' */
    AVTR_ac_B.Calib_b = KeAVTR_k_BatCoolngFlt_Sts_NF_Dial;

    /* Start for Constant: '<S320>/Calib' */
    AVTR_ac_B.Calib = KeAVTR_dT_SDS_ClntTempErr_NF_Dial;

#else

    /* Start for Constant: '<S336>/Calib' */
    AVTR_ac_B.Calib_f = KeAVTR_k_BatCoolngFlt_Sts_init;

    /* Start for Constant: '<S319>/Calib' incorporates:
     *  Constant: '<S326>/Calib'
     */
    AVTR_ac_B.Calib_n = KeAVTR_dT_SDS_ClntTempErr_init;

    /* Start for Constant: '<S323>/Calib' incorporates:
     *  Constant: '<S322>/Calib'
     */
    AVTR_ac_B.Calib_d = KeAVTR_b_SDS_CoolingReq_init;

#endif

    /* End of Start for Constant: '<S335>/Calib' */

    /* Start for Constant: '<S321>/Calib' incorporates:
     *  Constant: '<S317>/Calib'
     *  Constant: '<S318>/Calib'
     *  Constant: '<S323>/Calib'
     *  Constant: '<S324>/Calib'
     *  Constant: '<S328>/Calib'
     */
#if !Rte_SysCon_Variant_AVTR_1

    /* Start for Constant: '<S324>/Calib' */
    AVTR_ac_B.Calib_j = KeAVTR_b_SDS_CoolingReq_NF_Dial;

    /* Start for Constant: '<S323>/Calib' */
    AVTR_ac_B.Calib_d = KeAVTR_b_SDS_HeatingReq_NF_Dial;

    /* Start for Constant: '<S319>/Calib' */
    AVTR_ac_B.Calib_n = KeAVTR_P_SDS_HV_PwrAvg_NF_Dial;

#else

    /* Start for Constant: '<S324>/Calib' */
    AVTR_ac_B.Calib_j = KeAVTR_b_SDS_HeatingReq_init;

    /* Start for Constant: '<S320>/Calib' incorporates:
     *  Constant: '<S318>/Calib'
     */
    AVTR_ac_B.Calib = KeAVTR_P_SDS_HV_PwrAvg_init;

    /* Start for Constant: '<S328>/Calib' */
    AVTR_ac_B.Calib_h = KeAVTR_e_BFC_Allowedstate_init;

#endif

    /* End of Start for Constant: '<S321>/Calib' */

    /* Start for Constant: '<S327>/Calib' incorporates:
     *  Constant: '<S320>/Calib'
     *  Constant: '<S329>/Calib'
     *  Constant: '<S330>/Calib'
     *  Constant: '<S331>/Calib'
     *  Constant: '<S332>/Calib'
     */
#if !Rte_SysCon_Variant_AVTR_1

    /* Start for Constant: '<S327>/Calib' */
    AVTR_ac_B.Calib_p = KeAVTR_e_BFC_Allowedstate_NF_Dial;

    /* Start for Constant: '<S331>/Calib' */
    AVTR_ac_B.Calib_l = KeAVTR_e_HCP_MaxCoolingSt_NF_Dial;

    /* Start for Constant: '<S329>/Calib' */
    AVTR_ac_B.Calib_m = KeAVTR_e_EVA_ThrmlState_NF_Dial;

#else

    /* Start for Constant: '<S332>/Calib' */
    AVTR_ac_B.Calib_k = KeAVTR_e_HCP_MaxCoolingSt_init;

    /* Start for Constant: '<S330>/Calib' */
    AVTR_ac_B.Calib_mk = KeAVTR_e_EVA_ThrmlState_init;

    /* Start for Constant: '<S320>/Calib' */
    AVTR_ac_B.Calib = KeAVTR_T_SDS_ClntTmpIn_Act_init;

#endif

    /* End of Start for Constant: '<S327>/Calib' */

    /* Start for Constant: '<S319>/Calib' incorporates:
     *  Constant: '<S334>/Calib'
     *  SignalConversion generated from: '<S316>/VariantSource1'
     */
#if !Rte_SysCon_Variant_AVTR_1

    /* Start for Constant: '<S319>/Calib' */
    AVTR_ac_B.Calib_n = KeAVTR_T_SDS_ClntTmpIn_Act_NF_Dial;

#else

    /* Start for Constant: '<S334>/Calib' */
    AVTR_ac_B.Calib_f4 = KeAVTR_e_SDS_ActualState_init;

    /* SystemInitialize for VariantMerge generated from: '<S316>/VariantSource1' incorporates:
     *  SignalConversion generated from: '<S316>/VariantSource1'
     */
    AVTR_ac_B.VariantMerge_For_Variant_Source_Varian_c = AVTR_ac_B.Calib_f;

#endif

    /* End of Start for Constant: '<S319>/Calib' */

    /* Start for Constant: '<S333>/Calib' incorporates:
     *  SignalConversion generated from: '<S316>/VariantSource2'
     */
#if !Rte_SysCon_Variant_AVTR_1

    /* Start for Constant: '<S333>/Calib' */
    AVTR_ac_B.Calib_i = KeAVTR_e_SDS_ActualState_NF_Dial;

#else

    /* SystemInitialize for VariantMerge generated from: '<S316>/VariantSource2' incorporates:
     *  SignalConversion generated from: '<S316>/VariantSource2'
     */
    AVTR_ac_B.VariantMerge_For_Variant_Source_VariantS = AVTR_ac_B.Calib_n;

#endif

    /* End of Start for Constant: '<S333>/Calib' */

    /* SystemInitialize for SignalConversion generated from: '<S316>/VariantSource1' incorporates:
     *  SignalConversion generated from: '<S316>/VariantSource3'
     */
#if !Rte_SysCon_Variant_AVTR_1

    /* SystemInitialize for VariantMerge generated from: '<S316>/VariantSource1' */
    AVTR_ac_B.VariantMerge_For_Variant_Source_Varian_c = AVTR_ac_B.Calib_b;

#else

    /* SystemInitialize for VariantMerge generated from: '<S316>/VariantSource3' incorporates:
     *  SignalConversion generated from: '<S316>/VariantSource3'
     */
    AVTR_ac_B.VariantMerge_For_Variant_Source_Varia_gv = AVTR_ac_B.Calib_d;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S316>/VariantSource1' */

    /* SystemInitialize for SignalConversion generated from: '<S316>/VariantSource2' incorporates:
     *  SignalConversion generated from: '<S316>/VariantSource3'
     *  SignalConversion generated from: '<S316>/VariantSource4'
     *  SignalConversion generated from: '<S316>/VariantSource5'
     */
#if !Rte_SysCon_Variant_AVTR_1

    /* SystemInitialize for VariantMerge generated from: '<S316>/VariantSource2' */
    AVTR_ac_B.VariantMerge_For_Variant_Source_VariantS = AVTR_ac_B.Calib;

    /* SystemInitialize for VariantMerge generated from: '<S316>/VariantSource3' */
    AVTR_ac_B.VariantMerge_For_Variant_Source_Varia_gv = AVTR_ac_B.Calib_j;

#else

    /* SystemInitialize for VariantMerge generated from: '<S316>/VariantSource4' incorporates:
     *  SignalConversion generated from: '<S316>/VariantSource4'
     */
    AVTR_ac_B.VariantMerge_For_Variant_Source_Varian_a = AVTR_ac_B.Calib_j;

    /* SystemInitialize for VariantMerge generated from: '<S316>/VariantSource5' incorporates:
     *  SignalConversion generated from: '<S316>/VariantSource5'
     */
    AVTR_ac_B.VariantMerge_For_Variant_Source_Varian_g = AVTR_ac_B.Calib;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S316>/VariantSource2' */

    /* SystemInitialize for SignalConversion generated from: '<S316>/VariantSource4' incorporates:
     *  SignalConversion generated from: '<S316>/VariantSource6'
     */
#if !Rte_SysCon_Variant_AVTR_1

    /* SystemInitialize for VariantMerge generated from: '<S316>/VariantSource4' */
    AVTR_ac_B.VariantMerge_For_Variant_Source_Varian_a = AVTR_ac_B.Calib_d;

#else

    /* SystemInitialize for VariantMerge generated from: '<S316>/VariantSource6' incorporates:
     *  Constant: '<S328>/Calib'
     *  SignalConversion generated from: '<S316>/VariantSource6'
     */
    AVTR_ac_B.VariantMerge_For_Variant_Source_Varia_i0 = AVTR_ac_B.Calib_h;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S316>/VariantSource4' */

    /* SystemInitialize for SignalConversion generated from: '<S316>/VariantSource5' incorporates:
     *  SignalConversion generated from: '<S316>/VariantSource7'
     */
#if !Rte_SysCon_Variant_AVTR_1

    /* SystemInitialize for VariantMerge generated from: '<S316>/VariantSource5' */
    AVTR_ac_B.VariantMerge_For_Variant_Source_Varian_g = AVTR_ac_B.Calib_n;

#else

    /* SystemInitialize for VariantMerge generated from: '<S316>/VariantSource7' incorporates:
     *  Constant: '<S332>/Calib'
     *  SignalConversion generated from: '<S316>/VariantSource7'
     */
    AVTR_ac_B.VariantMerge_For_Variant_Source_Varian_k = AVTR_ac_B.Calib_k;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S316>/VariantSource5' */

    /* SystemInitialize for SignalConversion generated from: '<S316>/VariantSource6' incorporates:
     *  SignalConversion generated from: '<S316>/VariantSource8'
     */
#if !Rte_SysCon_Variant_AVTR_1

    /* SystemInitialize for VariantMerge generated from: '<S316>/VariantSource6' incorporates:
     *  Constant: '<S327>/Calib'
     */
    AVTR_ac_B.VariantMerge_For_Variant_Source_Varia_i0 = AVTR_ac_B.Calib_p;

#else

    /* SystemInitialize for VariantMerge generated from: '<S316>/VariantSource8' incorporates:
     *  Constant: '<S330>/Calib'
     *  SignalConversion generated from: '<S316>/VariantSource8'
     */
    AVTR_ac_B.VariantMerge_For_Variant_Source_Varia_cr = AVTR_ac_B.Calib_mk;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S316>/VariantSource6' */

    /* SystemInitialize for SignalConversion generated from: '<S316>/VariantSource7' incorporates:
     *  SignalConversion generated from: '<S316>/VariantSource9'
     */
#if !Rte_SysCon_Variant_AVTR_1

    /* SystemInitialize for VariantMerge generated from: '<S316>/VariantSource7' incorporates:
     *  Constant: '<S331>/Calib'
     */
    AVTR_ac_B.VariantMerge_For_Variant_Source_Varian_k = AVTR_ac_B.Calib_l;

#else

    /* SystemInitialize for VariantMerge generated from: '<S316>/VariantSource9' incorporates:
     *  SignalConversion generated from: '<S316>/VariantSource9'
     */
    AVTR_ac_B.VariantMerge_For_Variant_Source_Varian_j = AVTR_ac_B.Calib;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S316>/VariantSource7' */

    /* SystemInitialize for SignalConversion generated from: '<S316>/VariantSource8' incorporates:
     *  SignalConversion generated from: '<S316>/VariantSource10'
     */
#if !Rte_SysCon_Variant_AVTR_1

    /* SystemInitialize for VariantMerge generated from: '<S316>/VariantSource8' incorporates:
     *  Constant: '<S329>/Calib'
     */
    AVTR_ac_B.VariantMerge_For_Variant_Source_Varia_cr = AVTR_ac_B.Calib_m;

#else

    /* SystemInitialize for VariantMerge generated from: '<S316>/VariantSource10' incorporates:
     *  Constant: '<S334>/Calib'
     *  SignalConversion generated from: '<S316>/VariantSource10'
     */
    AVTR_ac_B.VariantMerge_For_Variant_Source_Varian_i = AVTR_ac_B.Calib_f4;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S316>/VariantSource8' */

    /* SystemInitialize for SignalConversion generated from: '<S316>/VariantSource9' incorporates:
     *  SignalConversion generated from: '<S316>/VariantSource10'
     */
#if !Rte_SysCon_Variant_AVTR_1

    /* SystemInitialize for VariantMerge generated from: '<S316>/VariantSource9' */
    AVTR_ac_B.VariantMerge_For_Variant_Source_Varian_j = AVTR_ac_B.Calib_n;

    /* SystemInitialize for VariantMerge generated from: '<S316>/VariantSource10' incorporates:
     *  Constant: '<S333>/Calib'
     */
    AVTR_ac_B.VariantMerge_For_Variant_Source_Varian_i = AVTR_ac_B.Calib_i;

#else

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
    /* SystemInitialize for Function Call SubSystem: '<Root>/AVTR_MedTEH' */
    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/EVA_Signals'
     */
    /* SystemInitialize for Switch: '<S275>/Switch' incorporates:
     *  Inport: '<Root>/VeBTRR_e_HV_BatTmpRng'
     *  Outport: '<S5>/HV_BatTmpRng_AD'
     */
    VeAVTR_e_HV_BatTmpRng_AD = CeBTRR_e_BatTmpDfltRng;

    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/EVA_Control'
     */
    /* InitializeConditions for UnitDelay: '<S38>/UnitDelay' */
    AVTR_ac_DW.UnitDelay_DSTATE_p = CeAVTR_e_NoEVAState;

    /* SystemInitialize for Enabled SubSystem: '<S207>/EnabledSubsystem' */
    /* SystemInitialize for SignalConversion generated from: '<S216>/Out1' incorporates:
     *  Outport: '<S216>/Out1'
     */
    AVTR_ac_B.OutportBufferForOut1 = true;

    /* SystemInitialize for Gain: '<S218>/Gain' incorporates:
     *  Outport: '<S216>/Out2'
     */
    VeAVTR_T_SDS_ClntTmpIn_ActDeb = 1.0F;

    /* End of SystemInitialize for SubSystem: '<S207>/EnabledSubsystem' */

    /* SystemInitialize for UnitDelay: '<S38>/UnitDelay' incorporates:
     *  Outport: '<S4>/EVA_ThrmlState'
     */
    VeAVTR_e_EVA_ThrmlState_BD = CeAVTR_e_NoEVACond;

    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of SystemInitialize for SubSystem: '<Root>/AVTR_MedTEH' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S316>/VariantSource9' */
    /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Outport: '<Root>/VeAVTR_e_BFC_Allowedstate' incorporates:
     *  Merge: '<Root>/Merge_6'
     */
    (void)Rte_Write_VeAVTR_e_BFC_Allowedstate_Value(CeAVTR_e_BFC_NotAllowed);

    /* SystemInitialize for Outport: '<Root>/VeAVTR_e_HCP_MaxCoolingSt' incorporates:
     *  Merge: '<Root>/Merge_7'
     */
    (void)Rte_Write_VeAVTR_e_HCP_MaxCoolingSt_Value(CeAVTR_e_HCP_MaxCoolingOFF);

    /* SystemInitialize for Outport: '<Root>/VeAVTR_e_EVA_ThrmlState' incorporates:
     *  Merge: '<Root>/Merge_8'
     */
    (void)Rte_Write_VeAVTR_e_EVA_ThrmlState_Value(CeAVTR_e_NoEVACond);

    /* SystemInitialize for Outport: '<Root>/VeAVTR_e_SDS_Actual_State' incorporates:
     *  Merge: '<Root>/Merge_10'
     */
    (void)Rte_Write_VeAVTR_e_SDS_Actual_State_Value(CeTRIR_e_SDS_OFF);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
