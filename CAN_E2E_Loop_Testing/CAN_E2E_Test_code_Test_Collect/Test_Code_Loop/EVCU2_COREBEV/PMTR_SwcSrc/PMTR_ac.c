/*
 * File: PMTR_ac.c
 *
 * Code generated for Simulink model 'PMTR_ac'.
 *
 * Model version                  : 9.66
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 18:39:10 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PMTR_ac.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_PMTR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(uint16, PMTR_VAR_INIT) KePMTR_Cnt_DbncLatchdImpct_tim =
    10U;                               /* Referenced by: '<S172>/Calib' */
static volatile CONST(uint16, PMTR_VAR_INIT) KePMTR_Cnt_DebncThrmlEnblRsnNew =
    5U;                                /* Referenced by: '<S13>/Calib' */
static volatile CONST(uint16, PMTR_VAR_INIT) KePMTR_Cnt_RemEnblBattCoolTime =
    120U;                              /* Referenced by: '<S120>/Calib' */
static volatile CONST(uint16, PMTR_VAR_INIT) KePMTR_Cnt_RemEnblBattHeatTime =
    120U;                              /* Referenced by: '<S121>/Calib' */
static volatile CONST(uint16, PMTR_VAR_INIT) KePMTR_Cnt_RemEnblCabCoolTime =
    120U;                              /* Referenced by: '<S122>/Calib' */
static volatile CONST(uint16, PMTR_VAR_INIT) KePMTR_Cnt_RemEnblCabHeatTime =
    120U;                              /* Referenced by: '<S123>/Calib' */
static volatile CONST(uint16, PMTR_VAR_INIT) KePMTR_Cnt_RemEnblDefCabCoolTime =
    300U;                              /* Referenced by: '<S124>/Calib' */
static volatile CONST(uint16, PMTR_VAR_INIT) KePMTR_Cnt_RemEnblDefCabHeatTime =
    300U;                              /* Referenced by: '<S125>/Calib' */
static volatile CONST(uint16, PMTR_VAR_INIT) KePMTR_Cnt_ShipNDefCabCoolTime =
    600U;                              /* Referenced by: '<S126>/Calib' */
static volatile CONST(uint16, PMTR_VAR_INIT) KePMTR_Cnt_ShipNDefCabHeatTime =
    600U;                              /* Referenced by: '<S127>/Calib' */
static volatile CONST(float32, PMTR_VAR_INIT) KePMTR_P_BattCoolReqMin = 50.0F;/* Referenced by: '<S139>/Calib' */
static volatile CONST(float32, PMTR_VAR_INIT) KePMTR_P_BattHeatReqMin = 50.0F;/* Referenced by: '<S140>/Calib' */
static volatile CONST(float32, PMTR_VAR_INIT) KePMTR_P_CabCoolReqMin = 50.0F;/* Referenced by: '<S141>/Calib' */
static volatile CONST(float32, PMTR_VAR_INIT) KePMTR_P_CabHeatReqMin = 50.0F;/* Referenced by: '<S142>/Calib' */
static volatile CONST(float32, PMTR_VAR_INIT) KePMTR_T_HoodAjarKeyCrankTimer =
    1.5F;                              /* Referenced by: '<S34>/Calib' */
static volatile CONST(float32, PMTR_VAR_INIT) KePMTR_U_HB_SysVolt_D = 0.0F;/* Referenced by: '<S38>/Calib' */
static volatile CONST(float32, PMTR_VAR_INIT) KePMTR_U_SysVltLwrLim_BF3 = 12.0F;/* Referenced by: '<S194>/Calib' */
static volatile CONST(float32, PMTR_VAR_INIT) KePMTR_U_SysVltUprLim_BF3 = 16.0F;/* Referenced by: '<S195>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_BPCM_OVActv_D = 0;/* Referenced by: '<S39>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_BPCM_OVActv_SD = 0;/* Referenced by: '<S40>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_BattCntctrOpenPndg_D = 0;/* Referenced by: '<S41>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_BattCntctrOpenPndg_SD = 0;/* Referenced by: '<S42>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_DsblThrmlEnblRsnDbnc = 1;/* Referenced by: '<S14>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_EnbComp4PerWup = 0;/* Referenced by: '<S18>/Truth_Table' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_EnbPerWupNotPlugIn = 1;/* Referenced by: '<S18>/Truth_Table' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_HB_SysVolt_SD = 0;/* Referenced by: '<S43>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_HTCoolReq_Enbl = 0;/* Referenced by: '<S15>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_HVDspt_Enbl_D = 0;/* Referenced by: '<S44>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_HVDspt_Enbl_SD = 0;/* Referenced by: '<S45>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_HV_BatCntctrStat_SD = 0;/* Referenced by: '<S46>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_HoodAjarThrmlDisable = 1;/* Referenced by:
                                                                      * '<S18>/Truth_Table'
                                                                      * '<S19>/Truth_Table'
                                                                      */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_Impct_DisabDebnc_RST = 1;/* Referenced by: '<S173>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_InFieldMode_D = 0;/* Referenced by: '<S47>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_InFieldMode_SD = 0;/* Referenced by: '<S48>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_KeyInIgn_SD = 0;/* Referenced by: '<S49>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_KeySts_SD = 0;/* Referenced by: '<S50>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_Key_DisabDebnc_RST = 1;/* Referenced by: '<S16>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_LatcdImpct_D = 0;/* Referenced by: '<S51>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_LatcdImpct_SD = 0;/* Referenced by: '<S52>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_LatchImpctDbncd_SD = 0;/* Referenced by: '<S182>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_LogtxMode_EnblBattAlways =
    0;                                 /* Referenced by: '<S128>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_PMPRRdyToShtDwn_D = 0;/* Referenced by: '<S53>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_PMPRRdyToShtDwn_SD = 0;/* Referenced by: '<S54>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_PrepareToShtdwn_D = 0;/* Referenced by: '<S55>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_PrepareToShtdwn_SD = 0;/* Referenced by: '<S56>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_PropSysActv_D = 0;/* Referenced by: '<S57>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_PropSysActv_SD = 0;/* Referenced by: '<S58>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_RCVRRdyToShtDwn_D = 0;/* Referenced by: '<S59>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_RCVRRdyToShtDwn_SD = 0;/* Referenced by: '<S60>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_REMBattCoolAction_D = 0;/* Referenced by: '<S76>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_REMBattCoolAction_SD = 0;/* Referenced by: '<S77>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_REMBattHeatAction_D = 0;/* Referenced by: '<S78>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_REMBattHeatAction_SD = 0;/* Referenced by: '<S79>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_REMCabCoolAction_D = 0;/* Referenced by: '<S80>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_REMCabCoolAction_SD = 0;/* Referenced by: '<S81>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_REMCabHeatAction_D = 0;/* Referenced by: '<S82>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_REMCabHeatAction_SD = 0;/* Referenced by: '<S83>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_REMDisabled_D = 0;/* Referenced by: '<S61>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_REMDisabled_SD = 0;/* Referenced by: '<S62>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_REMMode_EnblBattAlways =
    0;                                 /* Referenced by: '<S129>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_RadFanEOL_ThrmlEnable = 0;/* Referenced by:
                                                                      * '<S18>/Truth_Table'
                                                                      * '<S19>/Truth_Table'
                                                                      * '<S196>/Calib'
                                                                      */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_ShipNDefDsblNoTimer = 0;/* Referenced by: '<S130>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_ShipNDefEnblNoTimer = 0;/* Referenced by: '<S131>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_ShipNDefTimer = 1;/* Referenced by: '<S132>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_ShippingMode_SD = 0;/* Referenced by: '<S63>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_ThrmlDevisEnbl_SD = 0;/* Referenced by: '<S84>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT)
    KePMTR_b_ThrmlEnblRsnNew_FanAftrrunEnbl = 1;/* Referenced by: '<S28>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT)
    KePMTR_b_ThrmlEnblRsnNew_PmpAftrrunEnbl = 1;/* Referenced by: '<S29>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_ThrmlEnbled_Reason_SD = 0;/* Referenced by: '<S85>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_ThrmlRelyCmd_Disb_BF3 = 1;/* Referenced by: '<S197>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_ThrmlRelyCmd_Disb_P1A1E =
    1;                                 /* Referenced by:
                                        * '<S191>/Calib'
                                        * '<S198>/Calib'
                                        */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_ThrmlRlyState_SD = 0;/* Referenced by: '<S90>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_ThrmlRlySts_D = 0;/* Referenced by: '<S91>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_ThrmlRlySts_SD = 0;/* Referenced by: '<S92>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_ThrmlShtdwnReqHonrd_D = 0;/* Referenced by: '<S86>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_ThrmlShtdwnReqHonrd_SD =
    0;                                 /* Referenced by: '<S87>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_ThrmlSystEnbl_RlySts_D =
    0;                                 /* Referenced by: '<S93>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_ThrmlSystEnbl_RlySts_SD =
    0;                                 /* Referenced by: '<S94>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_VehDynaCMPwrRlyCktHi_D =
    0;                                 /* Referenced by: '<S64>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_VehDynaCMPwrRlyCktHi_SD =
    0;                                 /* Referenced by: '<S65>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_VehDynaCMPwrRlyCktLo_D =
    0;                                 /* Referenced by: '<S66>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT) KePMTR_b_VehDynaCMPwrRlyCktLo_SD =
    0;                                 /* Referenced by: '<S67>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT)
    KePMTR_b_VehDynaCMPwrRlyCktShotoBatt_D = 0;/* Referenced by: '<S68>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT)
    KePMTR_b_VehDynaCMPwrRlyCktShotoBatt_SD = 0;/* Referenced by: '<S69>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT)
    KePMTR_b_VehDynaCMPwrRlyCktShotoGnd_D = 0;/* Referenced by: '<S70>/Calib' */
static volatile CONST(boolean, PMTR_VAR_INIT)
    KePMTR_b_VehDynaCMPwrRlyCktShotoGnd_SD = 0;/* Referenced by: '<S71>/Calib' */
static volatile CONST(float32, PMTR_VAR_INIT) KePMTR_dT_KeyCrankSampleTime =
    0.1F;                              /* Referenced by: '<S35>/Calib' */
static volatile CONST(TeHVTR_e_HV_BatCntctrStat, PMTR_VAR_INIT)
    KePMTR_e_HV_BatCntctrStat_D = CeHVTR_e_Open;/* Referenced by: '<S72>/Calib' */
static volatile CONST(TePMDR_e_KeyInIgn, PMTR_VAR_INIT) KePMTR_e_KeyInIgn_D =
    CePMDR_e_KeyInIgn_DEFAULT;         /* Referenced by: '<S73>/Calib' */
static volatile CONST(TeSSDR_e_KeySts, PMTR_VAR_INIT) KePMTR_e_KeySts_D =
    CeSSDR_e_KeyOff;                   /* Referenced by: '<S74>/Calib' */
static volatile CONST(TePLTR_e_ShipingMode, PMTR_VAR_INIT)
    KePMTR_e_ShippingMode_D = CePLTR_e_ShipingMode_CUST_MD;/* Referenced by: '<S75>/Calib' */
static volatile CONST(TePMTR_e_ThrmlDevisEnbl, PMTR_VAR_INIT)
    KePMTR_e_ThrmlDevisEnbl_D = CePMTR_e_ENB_All_Thrml;/* Referenced by: '<S88>/Calib' */
static volatile CONST(TePMTR_e_ThermlEnblReason, PMTR_VAR_INIT)
    KePMTR_e_ThrmlEnbled_Reason_D = CePMTR_e_EnblKeyOnly_Run;/* Referenced by: '<S89>/Calib' */
static volatile CONST(TePMTR_e_ThermalRelayStatus, PMTR_VAR_INIT)
    KePMTR_e_ThrmlRlyState_D = CePMTR_e_ThermalRelay_SNA;/* Referenced by: '<S95>/Calib' */
static volatile CONST(TePMTR_e_ThrmlDevisEnbl, PMTR_VAR_INIT)
    KePMTR_e_mHEV_ThrmlDevEnbl_AftRun_ExclCranking =
    CePMTR_e_Enb_Only_LT_Pmp_N_Fan;    /* Referenced by: '<S19>/Truth_Table' */
static volatile CONST(TePMTR_e_ThrmlDevisEnbl, PMTR_VAR_INIT)
    KePMTR_e_mHEV_ThrmlDevEnbl_AftRun_FailedCrank =
    CePMTR_e_Enb_Only_LT_Pmp_N_Fan;    /* Referenced by: '<S19>/Truth_Table' */
static volatile CONST(TePMTR_e_ThrmlDevisEnbl, PMTR_VAR_INIT)
    KePMTR_e_mHEV_ThrmlDevEnbl_CnctrClose_CnctrOpenReq_NoAftRun =
    CePMTR_e_DISBL_All_Thrml;          /* Referenced by: '<S19>/Truth_Table' */
static volatile CONST(TePMTR_e_ThrmlDevisEnbl, PMTR_VAR_INIT)
    KePMTR_e_mHEV_ThrmlDevEnbl_CnctrClose_NoCnctrOpenReq =
    CePMTR_e_ENB_All_Thrml;            /* Referenced by: '<S19>/Truth_Table' */
static volatile CONST(TePMTR_e_ThrmlDevisEnbl, PMTR_VAR_INIT)
    KePMTR_e_mHEV_ThrmlDevEnbl_CnctrOpen_NoAftRun = CePMTR_e_DISBL_All_Thrml;/* Referenced by: '<S19>/Truth_Table' */
static volatile CONST(TePMTR_e_ThrmlDevisEnbl, PMTR_VAR_INIT)
    KePMTR_e_mHEV_ThrmlDevEnbl_Cranking_CrankFailed_PSAFalse =
    CePMTR_e_DISBL_All_Thrml;          /* Referenced by: '<S19>/Truth_Table' */
static volatile CONST(TePMTR_e_ThrmlDevisEnbl, PMTR_VAR_INIT)
    KePMTR_e_mHEV_ThrmlDevEnbl_Cranking_PSAFalse = CePMTR_e_ENB_Only_Pmps;/* Referenced by: '<S19>/Truth_Table' */
static volatile CONST(TePMTR_e_ThrmlDevisEnbl, PMTR_VAR_INIT)
    KePMTR_e_mHEV_ThrmlDevEnbl_Cranking_PSATrue = CePMTR_e_ENB_All_Thrml;/* Referenced by: '<S19>/Truth_Table' */
static volatile CONST(TePMTR_e_ThrmlDevisEnbl, PMTR_VAR_INIT)
    KePMTR_e_mHEV_ThrmlDevEnbl_EOL = CePMTR_e_DISBL_All_Thrml;/* Referenced by: '<S19>/Truth_Table' */
static volatile CONST(TePMTR_e_ThrmlDevisEnbl, PMTR_VAR_INIT)
    KePMTR_e_mHEV_ThrmlDevEnbl_HTE = CePMTR_e_Enb_Only_LT_Pmp_N_Fan;/* Referenced by: '<S19>/Truth_Table' */
static volatile CONST(TePMTR_e_ThrmlDevisEnbl, PMTR_VAR_INIT)
    KePMTR_e_mHEV_ThrmlDevEnbl_KeyAcc = CePMTR_e_DISBL_All_Thrml;/* Referenced by: '<S19>/Truth_Table' */
static volatile CONST(TePMTR_e_ThrmlDevisEnbl, PMTR_VAR_INIT)
    KePMTR_e_mHEV_ThrmlDevEnbl_KeyOff = CePMTR_e_DISBL_All_Thrml;/* Referenced by: '<S19>/Truth_Table' */
static volatile CONST(TePMTR_e_ThrmlDevisEnbl, PMTR_VAR_INIT)
    KePMTR_e_mHEV_ThrmlDevEnbl_KeyPreCrank = CePMTR_e_DISBL_All_Thrml;/* Referenced by: '<S19>/Truth_Table' */
static volatile CONST(TePMTR_e_ThrmlDevisEnbl, PMTR_VAR_INIT)
    KePMTR_e_mHEV_ThrmlDevEnbl_PSATrue = CePMTR_e_ENB_All_Thrml;/* Referenced by: '<S19>/Truth_Table' */
static volatile CONST(TePMTR_e_ThrmlDevisEnbl, PMTR_VAR_INIT)
    KePMTR_e_mHEV_ThrmlDevEnbl_PostCrank_PSAFalse = CePMTR_e_DISBL_All_Thrml;/* Referenced by: '<S19>/Truth_Table' */
static volatile CONST(TePMTR_e_ThrmlDevisEnbl, PMTR_VAR_INIT)
    KePMTR_e_mHEV_ThrmlDevEnbl_PostCrank_PSATrue = CePMTR_e_ENB_All_Thrml;/* Referenced by: '<S19>/Truth_Table' */
static volatile CONST(TePMTR_e_ThermlEnblReason, PMTR_VAR_INIT)
    KePMTR_e_mHEV_ThrmlEnblRsn_AftRun_ExclCranking =
    CePMTR_e_EnblKey_Acc_or_DrvDoorAjr;/* Referenced by: '<S19>/Truth_Table' */
static volatile CONST(TePMTR_e_ThermlEnblReason, PMTR_VAR_INIT)
    KePMTR_e_mHEV_ThrmlEnblRsn_AftRun_FailedCrank =
    CePMTR_e_EnblKey_Acc_or_DrvDoorAjr;/* Referenced by: '<S19>/Truth_Table' */
static volatile CONST(TePMTR_e_ThermlEnblReason, PMTR_VAR_INIT)
    KePMTR_e_mHEV_ThrmlEnblRsn_CnctrClose_CnctrOpenReq_NoAftRun =
    CePMTR_e_DisableAll;               /* Referenced by: '<S19>/Truth_Table' */
static volatile CONST(TePMTR_e_ThermlEnblReason, PMTR_VAR_INIT)
    KePMTR_e_mHEV_ThrmlEnblRsn_CnctrClose_NoCnctrOpenReq =
    CePMTR_e_EnblKeyOnly_Run;          /* Referenced by: '<S19>/Truth_Table' */
static volatile CONST(TePMTR_e_ThermlEnblReason, PMTR_VAR_INIT)
    KePMTR_e_mHEV_ThrmlEnblRsn_CnctrOpen_NoAftRun = CePMTR_e_DisableAll;/* Referenced by: '<S19>/Truth_Table' */
static volatile CONST(TePMTR_e_ThermlEnblReason, PMTR_VAR_INIT)
    KePMTR_e_mHEV_ThrmlEnblRsn_Cranking_CrankFailed_PSAFalse =
    CePMTR_e_DisableAll;               /* Referenced by: '<S19>/Truth_Table' */
static volatile CONST(TePMTR_e_ThermlEnblReason, PMTR_VAR_INIT)
    KePMTR_e_mHEV_ThrmlEnblRsn_Cranking_PSAFalse = CePMTR_e_EnblKey_Crank;/* Referenced by: '<S19>/Truth_Table' */
static volatile CONST(TePMTR_e_ThermlEnblReason, PMTR_VAR_INIT)
    KePMTR_e_mHEV_ThrmlEnblRsn_Cranking_PSATrue = CePMTR_e_EnblKeyOnly_Cranked;/* Referenced by: '<S19>/Truth_Table' */
static volatile CONST(TePMTR_e_ThermlEnblReason, PMTR_VAR_INIT)
    KePMTR_e_mHEV_ThrmlEnblRsn_EOL = CePMTR_e_DisableAll;/* Referenced by: '<S19>/Truth_Table' */
static volatile CONST(TePMTR_e_ThermlEnblReason, PMTR_VAR_INIT)
    KePMTR_e_mHEV_ThrmlEnblRsn_HTE = CePMTR_e_EnblKey_Acc_or_DrvDoorAjr;/* Referenced by: '<S19>/Truth_Table' */
static volatile CONST(TePMTR_e_ThermlEnblReason, PMTR_VAR_INIT)
    KePMTR_e_mHEV_ThrmlEnblRsn_KeyAcc = CePMTR_e_DisableAll;/* Referenced by: '<S19>/Truth_Table' */
static volatile CONST(TePMTR_e_ThermlEnblReason, PMTR_VAR_INIT)
    KePMTR_e_mHEV_ThrmlEnblRsn_KeyOff = CePMTR_e_DisableAll;/* Referenced by: '<S19>/Truth_Table' */
static volatile CONST(TePMTR_e_ThermlEnblReason, PMTR_VAR_INIT)
    KePMTR_e_mHEV_ThrmlEnblRsn_KeyPreCrank = CePMTR_e_DisableAll;/* Referenced by: '<S19>/Truth_Table' */
static volatile CONST(TePMTR_e_ThermlEnblReason, PMTR_VAR_INIT)
    KePMTR_e_mHEV_ThrmlEnblRsn_PSATrue = CePMTR_e_EnblKeyOnly_Run;/* Referenced by: '<S19>/Truth_Table' */
static volatile CONST(TePMTR_e_ThermlEnblReason, PMTR_VAR_INIT)
    KePMTR_e_mHEV_ThrmlEnblRsn_PostCrank_PSAFalse = CePMTR_e_DisableAll;/* Referenced by: '<S19>/Truth_Table' */
static volatile CONST(TePMTR_e_ThermlEnblReason, PMTR_VAR_INIT)
    KePMTR_e_mHEV_ThrmlEnblRsn_PostCrank_PSATrue = CePMTR_e_EnblKeyOnly_Cranked;/* Referenced by: '<S19>/Truth_Table' */

#define STOP_SEC_CALIB_UNSPECIFIED_PMTR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PMTR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(float32, PMTR_VAR_INIT) VePMTR_U_HB_SysVolt;/* '<S4>/Switch9' */
static VAR(boolean, PMTR_VAR_INIT) VePMTR_b_AfterRunReq;/* '<S17>/Logical33' */
static VAR(boolean, PMTR_VAR_INIT) VePMTR_b_BPCM_OVActv;/* '<S4>/Switch20' */
static VAR(boolean, PMTR_VAR_INIT) VePMTR_b_BattCntctrOpenPndg;/* '<S4>/Switch15' */
static VAR(boolean, PMTR_VAR_INIT) VePMTR_b_HVDspt_Enbl;/* '<S4>/Switch5' */
static VAR(boolean, PMTR_VAR_INIT) VePMTR_b_InFieldMode;/* '<S4>/Switch17' */
static VAR(boolean, PMTR_VAR_INIT) VePMTR_b_KeyCrankActiveLong;/* '<S36>/AND' */
static VAR(boolean, PMTR_VAR_INIT) VePMTR_b_KeyCrankLongOrPostCrank;/* '<S20>/Logical5' */
static VAR(boolean, PMTR_VAR_INIT) VePMTR_b_LatcdImpct;/* '<S4>/Switch8' */
static VAR(boolean, PMTR_VAR_INIT) VePMTR_b_LatchdImpct_Delyd_1;/* '<S174>/Switch' */
static VAR(boolean, PMTR_VAR_INIT) VePMTR_b_LatchdImpct_Delyd_1_B4D;/* '<S181>/Gain' */
static VAR(boolean, PMTR_VAR_INIT) VePMTR_b_PMPRRdyToShtDwn;/* '<S4>/Switch4' */
static VAR(boolean, PMTR_VAR_INIT) VePMTR_b_PrepareToShtdwn;/* '<S4>/Switch3' */
static VAR(boolean, PMTR_VAR_INIT) VePMTR_b_PropSysActv;/* '<S4>/Switch1' */
static VAR(boolean, PMTR_VAR_INIT) VePMTR_b_RCVRRdyToShtDwn;/* '<S4>/Switch2' */
static VAR(boolean, PMTR_VAR_INIT) VePMTR_b_REMBatteryCooling;/* '<S145>/Merge3' */
static VAR(boolean, PMTR_VAR_INIT) VePMTR_b_REMBatteryHeating;/* '<S143>/Merge3' */
static VAR(boolean, PMTR_VAR_INIT) VePMTR_b_REMCabinCooling;/* '<S146>/Merge3' */
static VAR(boolean, PMTR_VAR_INIT) VePMTR_b_REMCabinHeating;/* '<S144>/Merge3' */
static VAR(boolean, PMTR_VAR_INIT) VePMTR_b_REMDisabled;/* '<S4>/Switch18' */
static VAR(boolean, PMTR_VAR_INIT) VePMTR_b_REM_BattCoolAction_B4D;/* '<S8>/Data Type Conversion2' */
static VAR(boolean, PMTR_VAR_INIT) VePMTR_b_REM_BattHeatAction_B4D;/* '<S8>/Data Type Conversion' */
static VAR(boolean, PMTR_VAR_INIT) VePMTR_b_REM_CabCoolAction_B4D;/* '<S8>/Data Type Conversion3' */
static VAR(boolean, PMTR_VAR_INIT) VePMTR_b_REM_CabHeatAction_B4D;/* '<S8>/Data Type Conversion1' */
static VAR(boolean, PMTR_VAR_INIT) VePMTR_b_RemTimerBatteryCooling;/* '<S133>/Logical3' */
static VAR(boolean, PMTR_VAR_INIT) VePMTR_b_RemTimerBatteryHeating;/* '<S133>/Logical1' */
static VAR(boolean, PMTR_VAR_INIT) VePMTR_b_RemTimerCabinCooling;/* '<S133>/Logical4' */
static VAR(boolean, PMTR_VAR_INIT) VePMTR_b_RemTimerCabinHeating;/* '<S133>/Logical2' */
static VAR(boolean, PMTR_VAR_INIT) VePMTR_b_ThrmlShtdwnReqHonrd_B4D;/* '<S10>/Logical' */
static VAR(boolean, PMTR_VAR_INIT) VePMTR_b_ThrmlSysEnb_Raw;/* '<S192>/Logical1' */
static VAR(boolean, PMTR_VAR_INIT) VePMTR_b_ThrmlSystEnbl_RlyCmnd_B4D;/* '<S188>/Switch1' */
static VAR(boolean, PMTR_VAR_INIT) VePMTR_b_ThrmlSystEnbl_RlySts_B4D;/* '<S175>/Comparison3' */
static VAR(boolean, PMTR_VAR_INIT) VePMTR_b_VehDynaCMPwrRlyCktHi;/* '<S4>/Switch10' */
static VAR(boolean, PMTR_VAR_INIT) VePMTR_b_VehDynaCMPwrRlyCktLo;/* '<S4>/Switch11' */
static VAR(boolean, PMTR_VAR_INIT) VePMTR_b_VehDynaCMPwrRlyCktShotoBatt;/* '<S4>/Switch13' */
static VAR(boolean, PMTR_VAR_INIT) VePMTR_b_VehDynaCMPwrRlyCktShotoGnd;/* '<S4>/Switch12' */
static VAR(TeHVTR_e_HV_BatCntctrStat, PMTR_VAR_INIT) VePMTR_e_HV_BatCntctrStat;/* '<S4>/Switch14' */
static VAR(TePMDR_e_KeyInIgn, PMTR_VAR_INIT) VePMTR_e_KeyInIgn;/* '<S4>/Switch7' */
static VAR(TeSSDR_e_KeySts, PMTR_VAR_INIT) VePMTR_e_KeySts;/* '<S4>/Switch' */
static VAR(TePLTR_e_ShipingMode, PMTR_VAR_INIT) VePMTR_e_ShippingMode;/* '<S4>/Switch19' */
static VAR(TePMTR_e_ThrmlDevisEnbl, PMTR_VAR_INIT) VePMTR_e_ThrmlDevEnbl_B4D;/* '<S3>/Merge' */
static VAR(TePMTR_e_ThermlEnblReason, PMTR_VAR_INIT) VePMTR_e_ThrmlEnblRsn_B4D;/* '<S3>/Switch' */
static VAR(TePMTR_e_ThermalRelayStatus, PMTR_VAR_INIT)
    VePMTR_e_ThrmlRlyState_B4D;        /* '<S189>/Switch1' */
static VAR(TePMTR_e_VehicleMode, PMTR_VAR_INIT) VePMTR_e_VehicleMode;/* '<S8>/Merge3' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PMTR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_PMTR
#include "MemMap.h"

CONST(ConstB_PMTR_ac_T, PMTR_VAR_INIT) PMTR_ac_ConstB =
{
    CePMTR_e_DISBL_All_Thrml,          /* '<S200>/Const2' */
    CePMTR_e_EnblKey_Acc_or_DrvDoorAjr,/* '<S200>/Const1' */
    CePMTR_e_ThermalRelay_SNA          /* '<S200>/Const8' */
};

#define STOP_SEC_CONST_UNSPECIFIED_PMTR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PMTR
#include "MemMap.h"

VAR(B_PMTR_ac_T, PMTR_VAR_INIT) PMTR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PMTR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PMTR
#include "MemMap.h"

VAR(DW_PMTR_ac_T, PMTR_VAR_INIT) PMTR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PMTR
#include "MemMap.h"

static FUNC(void, PMTR_CODE_LOCAL) PMTR_ac_IfActionSubsystem2(P2VAR(boolean,
    AUTOMATIC, PMTR_VAR_INIT) rty_Out1);
static FUNC(void, PMTR_CODE_LOCAL) PMTR_ac_IfActionSubsystem1(P2VAR(boolean,
    AUTOMATIC, PMTR_VAR_INIT) rty_Out1);
static FUNC(void, PMTR_CODE_LOCAL) PMTR_ac_IfActionSubsystem2_b(P2VAR(boolean,
    AUTOMATIC, PMTR_VAR_INIT) rty_Out1);

/*
 * Output and update for action system:
 *    '<S143>/If Action Subsystem2'
 *    '<S143>/If Action Subsystem3'
 */
static FUNC(void, PMTR_CODE_LOCAL) PMTR_ac_IfActionSubsystem2(P2VAR(boolean,
    AUTOMATIC, PMTR_VAR_INIT) rty_Out1)
{
    /* SignalConversion generated from: '<S148>/Out1' incorporates:
     *  Constant: '<S148>/FALSE Constant1'
     */
    *rty_Out1 = false;
}

/*
 * Output and update for action system:
 *    '<S143>/If Action Subsystem1'
 *    '<S144>/If Action Subsystem1'
 *    '<S145>/If Action Subsystem1'
 *    '<S146>/If Action Subsystem1'
 */
static FUNC(void, PMTR_CODE_LOCAL) PMTR_ac_IfActionSubsystem1(P2VAR(boolean,
    AUTOMATIC, PMTR_VAR_INIT) rty_Out1)
{
    /* SignalConversion generated from: '<S147>/Out1' incorporates:
     *  Constant: '<S147>/TRUE Constant'
     */
    *rty_Out1 = true;
}

/*
 * Output and update for action system:
 *    '<S144>/If Action Subsystem2'
 *    '<S144>/If Action Subsystem3'
 *    '<S145>/If Action Subsystem2'
 *    '<S145>/If Action Subsystem3'
 *    '<S146>/If Action Subsystem2'
 *    '<S146>/If Action Subsystem3'
 */
static FUNC(void, PMTR_CODE_LOCAL) PMTR_ac_IfActionSubsystem2_b(P2VAR(boolean,
    AUTOMATIC, PMTR_VAR_INIT) rty_Out1)
{
    /* SignalConversion generated from: '<S154>/Out1' incorporates:
     *  Constant: '<S154>/FALSE Constant'
     */
    *rty_Out1 = false;
}

/* Model step function for TID1 */
FUNC(void, PMTR_CODE) PMTR_MedTEH(void) /* Explicit Task: MedTEH */
{

#if !(!Rte_SysCon_Variant_PMTR_3)

    boolean aVarTruthTableCondition_1;

#endif

#if !(!Rte_SysCon_Variant_PMTR_3)

    boolean aVarTruthTableCondition_3;

#endif

#if !(!Rte_SysCon_Variant_PMTR_3)

    boolean aVarTruthTableCondition_11;

#endif

#if !(!Rte_SysCon_Variant_PMTR_3)

    boolean aVarTruthTableCondition_16;

#endif

#if !(!Rte_SysCon_Variant_PMTR_3)

    boolean d;

#endif

    float32 tmpRead;
    float32 tmpRead_0;
    float32 tmpRead_1;
    float32 tmpRead_2;
    boolean e;

#if !(!Rte_SysCon_Variant_PMTR_3)

    boolean tmpRead_3;

#endif

    uint16 rtb_LogicalOperator4_0;
    TeFCPR_e_FCPS_HTCoolReq tmpRead_4;
    TeOBCR_e_ChargingLevel rtb_TmpSignalConversionAtVeOBCR_e_Chargi;
    TePMTR_e_ThermlEnblReason tmp;
    TeTMIR_e_ECM_LTP_FanAftRunRq rtb_TmpSignalConversionAtVeTHMR_e_HCP_LT;
    boolean rtb_AND_hf;
    boolean rtb_AND_m;
    boolean rtb_AND_mv;
    boolean rtb_Logical1;
    boolean rtb_TmpSignalConversionAtVeBTRR_b_isChar;
    boolean rtb_TmpSignalConversionAtVeFSCR_b_HVFunc;
    boolean rtb_TmpSignalConversionAtVeFSCR_b_RadFan;
    boolean rtb_TmpSignalConversionAtVeSSDR_b_EnblTh;
    boolean rtb_TmpSignalConversionAtVeTHMR_b_CabPre;
    boolean rtb_TmpSignalConversionAtVeTHMR_b_DrvDrA;
    boolean rtb_TmpSignalConversionAtVeTHMR_b_PerWup;
    boolean rtb_UnitDelay_n;
    boolean rtb_VariantMerge_For_Variant_Source_Va_h;
    boolean tmpRead_5;

#if !(!Rte_SysCon_Variant_PMTR_3)

    boolean tmp_0;

#endif

#if !(!Rte_SysCon_Variant_PMTR_3)

    boolean tmp_1;

#endif

#if !(!Rte_SysCon_Variant_PMTR_3)

    boolean tmp_2;

#endif

#if !(!Rte_SysCon_Variant_PMTR_3)

    boolean tmp_3;

#endif

#if !(!Rte_SysCon_Variant_PMTR_3)

    boolean tmp_4;

#endif

#if !(!Rte_SysCon_Variant_PMTR_3)

    boolean tmp_5;

#endif

#if !(!Rte_SysCon_Variant_PMTR_3)

    boolean tmp_6;

#endif

    TePMTR_e_ThermalRelayStatus VePMTR_b_ThrmlSystEnbl_RlySts_B4D_tmp;
    TePMTR_e_ThrmlDevisEnbl VePMTR_b_ThrmlShtdwnReqHonrd_B4D_tmp;

    /* Inport: '<Root>/VeFCPR_b_FCPS_HV_AfterRunSts' */
    (void)Rte_Read_VeFCPR_b_FCPS_HV_AfterRunSts_Value(&tmpRead_5);

    /* Inport: '<Root>/VeFCPR_e_FCPS_HTCoolReq' */
    (void)Rte_Read_VeFCPR_e_FCPS_HTCoolReq_Value(&tmpRead_4);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/PMTR_MedTEH'
     */
    /* DataStoreWrite: '<S1>/DSW_StatusByte_ThrmlRlyCtrlCkt' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_ThrmlRlyCtrlCkt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_ThrmlRlyCtrlCkt_Value
        (&PMTR_ac_DW.StatusByte_ThrmlRlyCtrlCkt);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

    /* Inport: '<Root>/VeGENR_b_HVDspt_Enbl' */
    (void)Rte_Read_VeGENR_b_HVDspt_Enbl_Value((&(VePMTR_b_HVDspt_Enbl)));

    /* Inport: '<Root>/VeBSWR_b_VehDynaCMPwrRlyCktShotoBatt' */
    (void)Rte_Read_VeBSWR_b_VehDynaCMPwrRlyCktShotoBatt_Value
        ((&(VePMTR_b_VehDynaCMPwrRlyCktShotoBatt)));

    /* Inport: '<Root>/VeBSWR_b_VehDynaCMPwrRlyCktShotoGnd' */
    (void)Rte_Read_VeBSWR_b_VehDynaCMPwrRlyCktShotoGnd_Value
        ((&(VePMTR_b_VehDynaCMPwrRlyCktShotoGnd)));

    /* Inport: '<Root>/VeBSWR_b_VehDynaCMPwrRlyCktLo' */
    (void)Rte_Read_VeBSWR_b_VehDynaCMPwrRlyCktLo_Value
        ((&(VePMTR_b_VehDynaCMPwrRlyCktLo)));

    /* Inport: '<Root>/VeBSWR_b_VehDynaCMPwrRlyCktHi' */
    (void)Rte_Read_VeBSWR_b_VehDynaCMPwrRlyCktHi_Value
        ((&(VePMTR_b_VehDynaCMPwrRlyCktHi)));

    /* Inport: '<Root>/VePMPR_b_RdyToShtDwn' */
    (void)Rte_Read_VePMPR_b_RdyToShtDwn_Value((&(VePMTR_b_PMPRRdyToShtDwn)));

    /* Inport: '<Root>/VeSSDR_b_PrepareToShtdwn' */
    (void)Rte_Read_VeSSDR_b_PrepareToShtdwn_Value((&(VePMTR_b_PrepareToShtdwn)));

    /* Inport: '<Root>/VeRCVR_b_RdyToShtDwn' */
    (void)Rte_Read_VeRCVR_b_RdyToShtDwn_Value((&(VePMTR_b_RCVRRdyToShtDwn)));

    /* Inport: '<Root>/VeHPMR_b_PropSysActv' */
    (void)Rte_Read_VeHPMR_b_PropSysActv_Value((&(VePMTR_b_PropSysActv)));

    /* Inport: '<Root>/VeBPCR_b_BPCM_OVActv' */
    (void)Rte_Read_VeBPCR_b_BPCM_OVActv_Value((&(VePMTR_b_BPCM_OVActv)));

    /* Inport: '<Root>/VePLTR_e_ShippingMode' */
    (void)Rte_Read_VePLTR_e_ShippingMode_Value((&(VePMTR_e_ShippingMode)));

    /* Inport: '<Root>/VePLTR_b_REMDisabled' */
    (void)Rte_Read_VePLTR_b_REMDisabled_Value((&(VePMTR_b_REMDisabled)));

    /* Inport: '<Root>/VePLTR_b_InFieldMode' */
    (void)Rte_Read_VePLTR_b_InFieldMode_Value((&(VePMTR_b_InFieldMode)));

    /* Inport: '<Root>/VeHPMR_b_BattCntctrOpenPndg' */
    (void)Rte_Read_VeHPMR_b_BattCntctrOpenPndg_Value
        ((&(VePMTR_b_BattCntctrOpenPndg)));

    /* Inport: '<Root>/VeBPCR_e_HV_BatCntctrStat' */
    (void)Rte_Read_VeBPCR_e_HV_BatCntctrStat_Value((&(VePMTR_e_HV_BatCntctrStat)));

    /* Inport: '<Root>/VeTHMR_b_AftrRunFanRqst' */
    (void)Rte_Read_VeTHMR_b_AftrRunFanRqst_Value(&rtb_AND_m);

    /* Inport: '<Root>/VePMDR_U_HB_SysVolt' */
    (void)Rte_Read_VePMDR_U_HB_SysVolt_Value((&(VePMTR_U_HB_SysVolt)));

    /* Inport: '<Root>/VeTHMR_b_LatcdImpct' */
    (void)Rte_Read_VeTHMR_b_LatcdImpct_Value((&(VePMTR_b_LatcdImpct)));

    /* Inport: '<Root>/VePMDR_e_KeyInIgn' */
    (void)Rte_Read_VePMDR_e_KeyInIgn_Value((&(VePMTR_e_KeyInIgn)));

    /* Inport: '<Root>/VeSSDR_e_KeySts' */
    (void)Rte_Read_VeSSDR_e_KeySts_Value((&(VePMTR_e_KeySts)));

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/PMTR_MedTEH'
     */
    /* SignalConversion generated from: '<S1>/VeSSDR_b_EnblThrmlSys' incorporates:
     *  Inport: '<Root>/VeSSDR_b_EnblThrmlSys'
     */
    (void)Rte_Read_VeSSDR_b_EnblThrmlSys_Value
        (&rtb_TmpSignalConversionAtVeSSDR_b_EnblTh);

    /* SignalConversion generated from: '<S1>/VeFSCR_b_RadFanEOL_SleepFlg' incorporates:
     *  Inport: '<Root>/VeFSCR_b_RadFanEOL_SleepFlg'
     */
    (void)Rte_Read_VeFSCR_b_RadFanEOL_SleepFlg_Value
        (&rtb_TmpSignalConversionAtVeFSCR_b_RadFan);

    /* SignalConversion generated from: '<S1>/VeTHMR_b_DrvDrAjar' incorporates:
     *  Inport: '<Root>/VeTHMR_b_DrvDrAjar'
     */
    (void)Rte_Read_VeTHMR_b_DrvDrAjar_Value
        (&rtb_TmpSignalConversionAtVeTHMR_b_DrvDrA);

    /* SignalConversion generated from: '<S1>/VeOBCR_e_ChargingLevel' incorporates:
     *  Inport: '<Root>/VeOBCR_e_ChargingLevel'
     */
    (void)Rte_Read_VeOBCR_e_ChargingLevel_Value
        (&rtb_TmpSignalConversionAtVeOBCR_e_Chargi);

    /* SignalConversion generated from: '<S1>/VeBTRR_b_isCharging' incorporates:
     *  Inport: '<Root>/VeBTRR_b_isCharging'
     */
    (void)Rte_Read_VeBTRR_b_isCharging_Value
        (&rtb_TmpSignalConversionAtVeBTRR_b_isChar);

    /* SignalConversion generated from: '<S1>/VeTHMR_b_CabPrecond' incorporates:
     *  Inport: '<Root>/VeTHMR_b_CabPrecond'
     */
    (void)Rte_Read_VeTHMR_b_CabPrecond_Value
        (&rtb_TmpSignalConversionAtVeTHMR_b_CabPre);

    /* SignalConversion generated from: '<S1>/VeTHMR_b_PerWup' incorporates:
     *  Inport: '<Root>/VeTHMR_b_PerWup'
     */
    (void)Rte_Read_VeTHMR_b_PerWup_Value
        (&rtb_TmpSignalConversionAtVeTHMR_b_PerWup);

    /* SignalConversion generated from: '<S1>/VeFSCR_b_HVFuncRejHdAjar' incorporates:
     *  Inport: '<Root>/VeFSCR_b_HVFuncRejHdAjar'
     */
    (void)Rte_Read_VeFSCR_b_HVFuncRejHdAjar_Value
        (&rtb_TmpSignalConversionAtVeFSCR_b_HVFunc);

    /* SignalConversion generated from: '<S1>/VeTHMR_e_HCP_LTP_FanAftRun_Rq' incorporates:
     *  Inport: '<Root>/VeTHMR_e_HCP_LTP_FanAftRun_Rq'
     */
    (void)Rte_Read_VeTHMR_e_HCP_LTP_FanAftRun_Rq_Value
        (&rtb_TmpSignalConversionAtVeTHMR_e_HCP_LT);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Input_Overrd_Blk'
     */
    /* Switch: '<S4>/Switch' incorporates:
     *  Constant: '<S50>/Calib'
     */
    if (KePMTR_b_KeySts_SD)
    {
        /* Switch: '<S4>/Switch' incorporates:
         *  Constant: '<S74>/Calib'
         *  Inport: '<Root>/VeSSDR_e_KeySts'
         */
        VePMTR_e_KeySts = KePMTR_e_KeySts_D;
    }

    /* End of Switch: '<S4>/Switch' */

    /* Switch: '<S4>/Switch7' incorporates:
     *  Constant: '<S49>/Calib'
     */
    if (KePMTR_b_KeyInIgn_SD)
    {
        /* Switch: '<S4>/Switch7' incorporates:
         *  Constant: '<S73>/Calib'
         *  Inport: '<Root>/VePMDR_e_KeyInIgn'
         */
        VePMTR_e_KeyInIgn = KePMTR_e_KeyInIgn_D;
    }

    /* End of Switch: '<S4>/Switch7' */

    /* Switch: '<S4>/Switch8' incorporates:
     *  Constant: '<S52>/Calib'
     */
    if (KePMTR_b_LatcdImpct_SD)
    {
        /* Switch: '<S4>/Switch8' incorporates:
         *  Constant: '<S51>/Calib'
         *  Inport: '<Root>/VeTHMR_b_LatcdImpct'
         */
        VePMTR_b_LatcdImpct = KePMTR_b_LatcdImpct_D;
    }

    /* End of Switch: '<S4>/Switch8' */

    /* Switch: '<S4>/Switch9' incorporates:
     *  Constant: '<S43>/Calib'
     */
    if (KePMTR_b_HB_SysVolt_SD)
    {
        /* Switch: '<S4>/Switch9' incorporates:
         *  Constant: '<S38>/Calib'
         *  Inport: '<Root>/VePMDR_U_HB_SysVolt'
         */
        VePMTR_U_HB_SysVolt = KePMTR_U_HB_SysVolt_D;
    }

    /* End of Switch: '<S4>/Switch9' */

    /* Switch: '<S4>/Switch14' incorporates:
     *  Constant: '<S46>/Calib'
     */
    if (KePMTR_b_HV_BatCntctrStat_SD)
    {
        /* Switch: '<S4>/Switch14' incorporates:
         *  Constant: '<S72>/Calib'
         *  Inport: '<Root>/VeBPCR_e_HV_BatCntctrStat'
         */
        VePMTR_e_HV_BatCntctrStat = KePMTR_e_HV_BatCntctrStat_D;
    }

    /* End of Switch: '<S4>/Switch14' */

    /* Switch: '<S4>/Switch15' incorporates:
     *  Constant: '<S42>/Calib'
     */
    if (KePMTR_b_BattCntctrOpenPndg_SD)
    {
        /* Switch: '<S4>/Switch15' incorporates:
         *  Constant: '<S41>/Calib'
         *  Inport: '<Root>/VeHPMR_b_BattCntctrOpenPndg'
         */
        VePMTR_b_BattCntctrOpenPndg = KePMTR_b_BattCntctrOpenPndg_D;
    }

    /* End of Switch: '<S4>/Switch15' */

    /* Switch: '<S4>/Switch17' incorporates:
     *  Constant: '<S48>/Calib'
     */
    if (KePMTR_b_InFieldMode_SD)
    {
        /* Switch: '<S4>/Switch17' incorporates:
         *  Constant: '<S47>/Calib'
         *  Inport: '<Root>/VePLTR_b_InFieldMode'
         */
        VePMTR_b_InFieldMode = KePMTR_b_InFieldMode_D;
    }

    /* End of Switch: '<S4>/Switch17' */

    /* Switch: '<S4>/Switch18' incorporates:
     *  Constant: '<S62>/Calib'
     */
    if (KePMTR_b_REMDisabled_SD)
    {
        /* Switch: '<S4>/Switch18' incorporates:
         *  Constant: '<S61>/Calib'
         *  Inport: '<Root>/VePLTR_b_REMDisabled'
         */
        VePMTR_b_REMDisabled = KePMTR_b_REMDisabled_D;
    }

    /* End of Switch: '<S4>/Switch18' */

    /* Switch: '<S4>/Switch19' incorporates:
     *  Constant: '<S63>/Calib'
     */
    if (KePMTR_b_ShippingMode_SD)
    {
        /* Switch: '<S4>/Switch19' incorporates:
         *  Constant: '<S75>/Calib'
         *  Inport: '<Root>/VePLTR_e_ShippingMode'
         */
        VePMTR_e_ShippingMode = KePMTR_e_ShippingMode_D;
    }

    /* End of Switch: '<S4>/Switch19' */

    /* Switch: '<S4>/Switch20' incorporates:
     *  Constant: '<S40>/Calib'
     */
    if (KePMTR_b_BPCM_OVActv_SD)
    {
        /* Switch: '<S4>/Switch20' incorporates:
         *  Constant: '<S39>/Calib'
         *  Inport: '<Root>/VeBPCR_b_BPCM_OVActv'
         */
        VePMTR_b_BPCM_OVActv = KePMTR_b_BPCM_OVActv_D;
    }

    /* End of Switch: '<S4>/Switch20' */

    /* Switch: '<S4>/Switch1' incorporates:
     *  Constant: '<S58>/Calib'
     */
    if (KePMTR_b_PropSysActv_SD)
    {
        /* Switch: '<S4>/Switch1' incorporates:
         *  Constant: '<S57>/Calib'
         *  Inport: '<Root>/VeHPMR_b_PropSysActv'
         */
        VePMTR_b_PropSysActv = KePMTR_b_PropSysActv_D;
    }

    /* End of Switch: '<S4>/Switch1' */

    /* Switch: '<S4>/Switch2' incorporates:
     *  Constant: '<S60>/Calib'
     */
    if (KePMTR_b_RCVRRdyToShtDwn_SD)
    {
        /* Switch: '<S4>/Switch2' incorporates:
         *  Constant: '<S59>/Calib'
         *  Inport: '<Root>/VeRCVR_b_RdyToShtDwn'
         */
        VePMTR_b_RCVRRdyToShtDwn = KePMTR_b_RCVRRdyToShtDwn_D;
    }

    /* End of Switch: '<S4>/Switch2' */

    /* Switch: '<S4>/Switch3' incorporates:
     *  Constant: '<S56>/Calib'
     */
    if (KePMTR_b_PrepareToShtdwn_SD)
    {
        /* Switch: '<S4>/Switch3' incorporates:
         *  Constant: '<S55>/Calib'
         *  Inport: '<Root>/VeSSDR_b_PrepareToShtdwn'
         */
        VePMTR_b_PrepareToShtdwn = KePMTR_b_PrepareToShtdwn_D;
    }

    /* End of Switch: '<S4>/Switch3' */

    /* Switch: '<S4>/Switch4' incorporates:
     *  Constant: '<S54>/Calib'
     */
    if (KePMTR_b_PMPRRdyToShtDwn_SD)
    {
        /* Switch: '<S4>/Switch4' incorporates:
         *  Constant: '<S53>/Calib'
         *  Inport: '<Root>/VePMPR_b_RdyToShtDwn'
         */
        VePMTR_b_PMPRRdyToShtDwn = KePMTR_b_PMPRRdyToShtDwn_D;
    }

    /* End of Switch: '<S4>/Switch4' */

    /* Switch: '<S4>/Switch10' incorporates:
     *  Constant: '<S65>/Calib'
     */
    if (KePMTR_b_VehDynaCMPwrRlyCktHi_SD)
    {
        /* Switch: '<S4>/Switch10' incorporates:
         *  Constant: '<S64>/Calib'
         *  Inport: '<Root>/VeBSWR_b_VehDynaCMPwrRlyCktHi'
         */
        VePMTR_b_VehDynaCMPwrRlyCktHi = KePMTR_b_VehDynaCMPwrRlyCktHi_D;
    }

    /* End of Switch: '<S4>/Switch10' */

    /* Switch: '<S4>/Switch11' incorporates:
     *  Constant: '<S67>/Calib'
     */
    if (KePMTR_b_VehDynaCMPwrRlyCktLo_SD)
    {
        /* Switch: '<S4>/Switch11' incorporates:
         *  Constant: '<S66>/Calib'
         *  Inport: '<Root>/VeBSWR_b_VehDynaCMPwrRlyCktLo'
         */
        VePMTR_b_VehDynaCMPwrRlyCktLo = KePMTR_b_VehDynaCMPwrRlyCktLo_D;
    }

    /* End of Switch: '<S4>/Switch11' */

    /* Switch: '<S4>/Switch12' incorporates:
     *  Constant: '<S71>/Calib'
     */
    if (KePMTR_b_VehDynaCMPwrRlyCktShotoGnd_SD)
    {
        /* Switch: '<S4>/Switch12' incorporates:
         *  Constant: '<S70>/Calib'
         *  Inport: '<Root>/VeBSWR_b_VehDynaCMPwrRlyCktShotoGnd'
         */
        VePMTR_b_VehDynaCMPwrRlyCktShotoGnd =
            KePMTR_b_VehDynaCMPwrRlyCktShotoGnd_D;
    }

    /* End of Switch: '<S4>/Switch12' */

    /* Switch: '<S4>/Switch13' incorporates:
     *  Constant: '<S69>/Calib'
     */
    if (KePMTR_b_VehDynaCMPwrRlyCktShotoBatt_SD)
    {
        /* Switch: '<S4>/Switch13' incorporates:
         *  Constant: '<S68>/Calib'
         *  Inport: '<Root>/VeBSWR_b_VehDynaCMPwrRlyCktShotoBatt'
         */
        VePMTR_b_VehDynaCMPwrRlyCktShotoBatt =
            KePMTR_b_VehDynaCMPwrRlyCktShotoBatt_D;
    }

    /* End of Switch: '<S4>/Switch13' */

    /* Switch: '<S4>/Switch5' incorporates:
     *  Constant: '<S45>/Calib'
     */
    if (KePMTR_b_HVDspt_Enbl_SD)
    {
        /* Switch: '<S4>/Switch5' incorporates:
         *  Constant: '<S44>/Calib'
         *  Inport: '<Root>/VeGENR_b_HVDspt_Enbl'
         */
        VePMTR_b_HVDspt_Enbl = KePMTR_b_HVDspt_Enbl_D;
    }

    /* End of Switch: '<S4>/Switch5' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/EnblReas_DvceEnbl'
     */
    /* Logic: '<S17>/Logical33' incorporates:
     *  Constant: '<S26>/Constant'
     *  Constant: '<S27>/Constant'
     *  Constant: '<S28>/Calib'
     *  Constant: '<S29>/Calib'
     *  Logic: '<S17>/Logical1'
     *  Logic: '<S17>/Logical32'
     *  RelationalOperator: '<S17>/Comparison85'
     *  RelationalOperator: '<S17>/Comparison86'
     */
    VePMTR_b_AfterRunReq = ((rtb_AND_m &&
        (KePMTR_b_ThrmlEnblRsnNew_FanAftrrunEnbl)) || (((((uint32)
        rtb_TmpSignalConversionAtVeTHMR_e_HCP_LT) != CeTMIR_e_No_AftRunRequest) &&
        (((uint32)rtb_TmpSignalConversionAtVeTHMR_e_HCP_LT) !=
         CeTMIR_e_SNA_AftRunRequest)) &&
        (KePMTR_b_ThrmlEnblRsnNew_PmpAftrrunEnbl)));

    /* SignalConversion generated from: '<S3>/Variant Source' */
#if !Rte_SysCon_Variant_PMTR_3

    /* No code for variant choice */
#else

    /* Outputs for Enabled SubSystem: '<S3>/Subsystem1' incorporates:
     *  EnablePort: '<S18>/Enable'
     */
    /* Truth Table: '<S18>/Truth_Table' incorporates:
     *  Constant: '<S12>/Constant'
     *  Constant: '<S15>/Calib'
     *  Inport: '<Root>/VeFCPR_e_FCPS_HTCoolReq'
     *  Inport: '<Root>/VeTPCR_b_KeyOffCabCond'
     *  Logic: '<S3>/Logical1'
     *  Logic: '<S3>/Logical2'
     *  RelationalOperator: '<S3>/Comparison4'
     *  Switch: '<S4>/Switch14'
     *  Switch: '<S4>/Switch7'
     */
    /* Truth Table Function 'PMTR_MedTEH/EnblReas_DvceEnbl/Subsystem1/Truth_Table': '<S30>:1' */
    /*  Key in Off */
    /* Condition '#1': '<S30>:1:29' */
    aVarTruthTableCondition_1 = (((uint32)VePMTR_e_KeySts) == CeSSDR_e_KeyOff);

    /*  Key in Accessory or Post Run Accessory */
    if ((((uint32)VePMTR_e_KeySts) == CeSSDR_e_KeyAccy) || (((uint32)
            VePMTR_e_KeySts) == CeSSDR_e_KeyPostRunAccy))
    {
        /* Condition '#2': '<S30>:1:33' */
        rtb_UnitDelay_n = true;
    }
    else
    {
        rtb_UnitDelay_n = false;
    }

    /*  Key in Run Pre Crank */
    /* Condition '#3': '<S30>:1:37' */
    aVarTruthTableCondition_3 = (((uint32)VePMTR_e_KeySts) == CeSSDR_e_KeyRun);

    /*  Key in Crank */
    if ((((uint32)VePMTR_e_KeySts) == CeSSDR_e_KeyCrank) || (((uint32)
            VePMTR_e_KeySts) == CeSSDR_e_KeyPostCrnk))
    {
        /* Condition '#4': '<S30>:1:41' */
        rtb_AND_m = true;
    }
    else
    {
        rtb_AND_m = false;
    }

    /*  Driver Door Open */
    /*  Plugged In */
    if (((((((uint32)rtb_TmpSignalConversionAtVeOBCR_e_Chargi) ==
            CeOBCR_e_ChargingLvlAC1) || (((uint32)
             rtb_TmpSignalConversionAtVeOBCR_e_Chargi) ==
            CeOBCR_e_ChargingLvlAC2)) || (((uint32)
            rtb_TmpSignalConversionAtVeOBCR_e_Chargi) == CeOBCR_e_ChargingLvlAC3))
         || (((uint32)rtb_TmpSignalConversionAtVeOBCR_e_Chargi) ==
             CeOBCR_e_ChargingLvlDC1)) || (((uint32)
            rtb_TmpSignalConversionAtVeOBCR_e_Chargi) == CeOBCR_e_ChargingLvlDC2))
    {
        /* Condition '#6': '<S30>:1:49' */
        d = true;
    }
    else
    {
        d = false;
    }

    /*  Charging */
    /*  Pre-Conditioning (Remote Start) */
    /*  Post Cabin Conditioning */
    /*  Periodic Wake Up */
    /*  Key not in Ignition */
    /* Condition '#11': '<S30>:1:69' */
    aVarTruthTableCondition_11 = (((uint32)VePMTR_e_KeyInIgn) ==
        CePMDR_e_KeyInIgn_Not_In_Ign);

    /*  SSDR Thermal Devices Enabled */
    /*  HV Functionalities Rejected Hood Ajar */
    if (rtb_TmpSignalConversionAtVeFSCR_b_HVFunc &&
            (KePMTR_b_HoodAjarThrmlDisable))
    {
        /* Condition '#13': '<S30>:1:77' */
        e = true;
    }
    else
    {
        e = false;
    }

    /*  Rad Fan EOL Sleep Flag */
    if (rtb_TmpSignalConversionAtVeFSCR_b_RadFan &&
            (KePMTR_b_RadFanEOL_ThrmlEnable))
    {
        /* Condition '#14': '<S30>:1:81' */
        rtb_TmpSignalConversionAtVeFSCR_b_HVFunc = true;
    }
    else
    {
        rtb_TmpSignalConversionAtVeFSCR_b_HVFunc = false;
    }

    /*  After Run */
    /*  Contactors Closed */
    /* Condition '#16': '<S30>:1:89' */
    aVarTruthTableCondition_16 = (((uint32)VePMTR_e_HV_BatCntctrStat) ==
        CeHVTR_e_Closed);

    /*  Contactors Open Pending */
    /*  Calibration Enable Compressor For Periodic Wakeup */
    /*  Request Thermal Shutdown */
    /*  In-Plant Flag */
    /* Condition '#20': '<S30>:1:105' */
    /*  Calibration Enable Thermal in Periodic Wakeup when NOT PlugIn */
    /*  FC AfterRun */
    if (rtb_TmpSignalConversionAtVeSSDR_b_EnblTh && e)
    {
        /* Merge: '<S3>/Merge1' */
        /* Condition '#12': '<S30>:1:73' */
        /*  Disable All */
        /* Action '20': '<S30>:1:320' */
        PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc = CePMTR_e_DisableAll;

        /* Merge: '<S3>/Merge' */
        /* Action '20': '<S30>:1:321' */
        VePMTR_e_ThrmlDevEnbl_B4D = CePMTR_e_DISBL_All_Thrml;
    }
    else if (rtb_TmpSignalConversionAtVeSSDR_b_EnblTh &&
             rtb_TmpSignalConversionAtVeFSCR_b_HVFunc)
    {
        /* Merge: '<S3>/Merge1' */
        /* Condition '#12': '<S30>:1:73' */
        /*  Disable All */
        /* Action '20': '<S30>:1:320' */
        PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc = CePMTR_e_DisableAll;

        /* Merge: '<S3>/Merge' */
        /* Action '20': '<S30>:1:321' */
        VePMTR_e_ThrmlDevEnbl_B4D = CePMTR_e_DISBL_All_Thrml;
    }
    else
    {
        rtb_TmpSignalConversionAtVeFSCR_b_HVFunc =
            (rtb_TmpSignalConversionAtVeSSDR_b_EnblTh &&
             (!aVarTruthTableCondition_16));
        if (rtb_TmpSignalConversionAtVeFSCR_b_HVFunc && (!VePMTR_b_InFieldMode))
        {
            /* Merge: '<S3>/Merge1' */
            /* Condition '#12': '<S30>:1:73' */
            /* Decision 'D3': '<S30>:1:119' */
            /*  Disable All */
            /* Action '20': '<S30>:1:320' */
            PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc = CePMTR_e_DisableAll;

            /* Merge: '<S3>/Merge' */
            /* Action '20': '<S30>:1:321' */
            VePMTR_e_ThrmlDevEnbl_B4D = CePMTR_e_DISBL_All_Thrml;
        }
        else
        {
            (void)Rte_Read_VeTPCR_b_KeyOffCabCond_Value(&tmpRead_3);
            rtb_AND_hf = !tmpRead_3;
            rtb_AND_mv = !VePMTR_b_PrepareToShtdwn;
            if ((((rtb_AND_hf && rtb_TmpSignalConversionAtVeSSDR_b_EnblTh) &&
                    (!e)) && (VePMTR_b_AfterRunReq)) && rtb_AND_mv)
            {
                /* Merge: '<S3>/Merge1' */
                /* Decision 'D4': '<S30>:1:121' */
                /* Condition '#12': '<S30>:1:73' */
                /* Condition '#15': '<S30>:1:85' */
                /*  Enable Only Pump and Fan */
                /* Action '1': '<S30>:1:187' */
                PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc =
                    CePMTR_e_EnblKey_Acc_or_DrvDoorAjr;

                /* Merge: '<S3>/Merge' */
                /* Action '1': '<S30>:1:188' */
                VePMTR_e_ThrmlDevEnbl_B4D = CePMTR_e_Enb_Only_LT_Pmp_N_Fan;
            }
            else
            {
                e = !aVarTruthTableCondition_3;
                tmp_0 = !rtb_AND_m;
                tmp_1 = !d;
                tmp_2 = !rtb_TmpSignalConversionAtVeBTRR_b_isChar;
                tmp_3 = !rtb_TmpSignalConversionAtVeTHMR_b_CabPre;
                tmp_4 = !rtb_TmpSignalConversionAtVeTHMR_b_PerWup;
                tmpRead_5 = (((((uint32)tmpRead_4) == CeFCPR_e_No_Request) ||
                              (!KePMTR_b_HTCoolReq_Enbl)) && (!tmpRead_5));
                tmp_5 = !rtb_UnitDelay_n;
                tmp_6 = (((aVarTruthTableCondition_1 && tmp_5) && e) && tmp_0);
                if (((((((((tmp_6 && rtb_TmpSignalConversionAtVeTHMR_b_DrvDrA) &&
                           tmp_1) && tmp_2) && tmp_3) && rtb_AND_hf) && tmp_4) &&
                      rtb_TmpSignalConversionAtVeSSDR_b_EnblTh) && rtb_AND_mv) &&
                    tmpRead_5)
                {
                    /* Merge: '<S3>/Merge1' */
                    /* Decision 'D5': '<S30>:1:123' */
                    /* Condition '#5': '<S30>:1:45' */
                    /* Condition '#12': '<S30>:1:73' */
                    /*  Enable Only Pump and Fan */
                    /* Action '1': '<S30>:1:187' */
                    PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc =
                        CePMTR_e_EnblKey_Acc_or_DrvDoorAjr;

                    /* Merge: '<S3>/Merge' */
                    /* Action '1': '<S30>:1:188' */
                    VePMTR_e_ThrmlDevEnbl_B4D = CePMTR_e_Enb_Only_LT_Pmp_N_Fan;
                }
                else
                {
                    rtb_TmpSignalConversionAtVeTHMR_b_DrvDrA =
                        !aVarTruthTableCondition_1;
                    rtb_UnitDelay_n =
                        (((rtb_TmpSignalConversionAtVeTHMR_b_DrvDrA &&
                           rtb_UnitDelay_n) && e) && tmp_0);
                    if ((((((((rtb_UnitDelay_n && tmp_1) && tmp_2) && tmp_3) &&
                            rtb_AND_hf) && tmp_4) &&
                            rtb_TmpSignalConversionAtVeSSDR_b_EnblTh) &&
                            rtb_AND_mv) && tmpRead_5)
                    {
                        /* Merge: '<S3>/Merge1' */
                        /* Decision 'D6': '<S30>:1:125' */
                        /* Condition '#12': '<S30>:1:73' */
                        /*  Enable Only Pump and Fan */
                        /* Action '1': '<S30>:1:187' */
                        PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc =
                            CePMTR_e_EnblKey_Acc_or_DrvDoorAjr;

                        /* Merge: '<S3>/Merge' */
                        /* Action '1': '<S30>:1:188' */
                        VePMTR_e_ThrmlDevEnbl_B4D =
                            CePMTR_e_Enb_Only_LT_Pmp_N_Fan;
                    }
                    else
                    {
                        tmpRead_5 = (rtb_TmpSignalConversionAtVeTHMR_b_DrvDrA &&
                                     tmp_5);
                        tmp_0 = ((tmpRead_5 && aVarTruthTableCondition_3) &&
                                 tmp_0);
                        tmp_5 = ((tmp_0 && tmp_1) && tmp_2);
                        if (((((tmp_5 && tmp_3) && rtb_AND_hf) && tmp_4) &&
                                rtb_TmpSignalConversionAtVeSSDR_b_EnblTh) &&
                                rtb_AND_mv)
                        {
                            /* Merge: '<S3>/Merge1' */
                            /* Decision 'D7': '<S30>:1:127' */
                            /* Condition '#12': '<S30>:1:73' */
                            /*  Enable All */
                            /* Action '2': '<S30>:1:194' */
                            PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc =
                                CePMTR_e_EnblKeyOnly_Run;

                            /* Merge: '<S3>/Merge' */
                            /* Action '2': '<S30>:1:195' */
                            VePMTR_e_ThrmlDevEnbl_B4D = CePMTR_e_ENB_All_Thrml;
                        }
                        else
                        {
                            e = ((tmpRead_5 && e) && rtb_AND_m);
                            tmpRead_5 = ((e && tmp_1) && tmp_2);
                            if (((((tmpRead_5 && tmp_3) && rtb_AND_hf) && tmp_4)
                                 && rtb_TmpSignalConversionAtVeSSDR_b_EnblTh) &&
                                rtb_AND_mv)
                            {
                                /* Merge: '<S3>/Merge1' */
                                /* Decision 'D8': '<S30>:1:129' */
                                /* Condition '#12': '<S30>:1:73' */
                                /*  Enable All */
                                /* Action '3': '<S30>:1:201' */
                                PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc =
                                    CePMTR_e_EnblKeyOnly_Cranked;

                                /* Merge: '<S3>/Merge' */
                                /* Action '3': '<S30>:1:202' */
                                VePMTR_e_ThrmlDevEnbl_B4D =
                                    CePMTR_e_ENB_All_Thrml;
                            }
                            else
                            {
                                rtb_TmpSignalConversionAtVeTHMR_b_DrvDrA =
                                    (tmp_6 && d);
                                rtb_AND_m =
                                    (((rtb_TmpSignalConversionAtVeTHMR_b_DrvDrA &&
                                       tmp_2) && tmp_3) && rtb_AND_hf);
                                if (((rtb_AND_m && tmp_4) &&
                                        rtb_TmpSignalConversionAtVeSSDR_b_EnblTh)
                                    && rtb_AND_mv)
                                {
                                    /* Merge: '<S3>/Merge1' */
                                    /* Decision 'D9': '<S30>:1:131' */
                                    /* Condition '#12': '<S30>:1:73' */
                                    /*  Enable All */
                                    /* Action '4': '<S30>:1:208' */
                                    PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc
                                        = CePMTR_e_EnblPlugOnly_NoChrg;

                                    /* Merge: '<S3>/Merge' */
                                    /* Action '4': '<S30>:1:209' */
                                    VePMTR_e_ThrmlDevEnbl_B4D =
                                        CePMTR_e_ENB_All_Thrml;
                                }
                                else
                                {
                                    rtb_TmpSignalConversionAtVeTHMR_b_DrvDrA =
                                        (((rtb_TmpSignalConversionAtVeTHMR_b_DrvDrA
                                           &&
                                           rtb_TmpSignalConversionAtVeBTRR_b_isChar)
                                          && tmp_3) && rtb_AND_hf);
                                    if (((rtb_TmpSignalConversionAtVeTHMR_b_DrvDrA
                                          && tmp_4) &&
                                            rtb_TmpSignalConversionAtVeSSDR_b_EnblTh)
                                        && rtb_AND_mv)
                                    {
                                        /* Merge: '<S3>/Merge1' */
                                        /* Decision 'D10': '<S30>:1:133' */
                                        /* Condition '#7': '<S30>:1:53' */
                                        /* Condition '#12': '<S30>:1:73' */
                                        /*  Enable All */
                                        /* Action '5': '<S30>:1:215' */
                                        PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc
                                            = CePMTR_e_EnblPlugOnly_Chrg;

                                        /* Merge: '<S3>/Merge' */
                                        /* Action '5': '<S30>:1:216' */
                                        VePMTR_e_ThrmlDevEnbl_B4D =
                                            CePMTR_e_ENB_All_Thrml;
                                    }
                                    else if ((((((tmp_5 &&
                                                  rtb_TmpSignalConversionAtVeTHMR_b_CabPre)
                                                 && rtb_AND_hf) && tmp_4) &&
                                               aVarTruthTableCondition_11) &&
                                              rtb_TmpSignalConversionAtVeSSDR_b_EnblTh)
                                             && rtb_AND_mv)
                                    {
                                        /* Merge: '<S3>/Merge1' */
                                        /* Decision 'D11': '<S30>:1:135' */
                                        /* Condition '#8': '<S30>:1:57' */
                                        /* Condition '#12': '<S30>:1:73' */
                                        /*  Enable All */
                                        /* Action '6': '<S30>:1:222' */
                                        PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc
                                            = CePMTR_e_EnblRemStrOnly_Honrd;

                                        /* Merge: '<S3>/Merge' */
                                        /* Action '6': '<S30>:1:223' */
                                        VePMTR_e_ThrmlDevEnbl_B4D =
                                            CePMTR_e_ENB_All_Thrml;
                                    }
                                    else if ((((((tmpRead_5 &&
                                                  rtb_TmpSignalConversionAtVeTHMR_b_CabPre)
                                                 && rtb_AND_hf) && tmp_4) &&
                                               aVarTruthTableCondition_11) &&
                                              rtb_TmpSignalConversionAtVeSSDR_b_EnblTh)
                                             && rtb_AND_mv)
                                    {
                                        /* Merge: '<S3>/Merge1' */
                                        /* Decision 'D12': '<S30>:1:137' */
                                        /* Condition '#8': '<S30>:1:57' */
                                        /* Condition '#12': '<S30>:1:73' */
                                        /*  Enable All */
                                        /* Action '6': '<S30>:1:222' */
                                        PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc
                                            = CePMTR_e_EnblRemStrOnly_Honrd;

                                        /* Merge: '<S3>/Merge' */
                                        /* Action '6': '<S30>:1:223' */
                                        VePMTR_e_ThrmlDevEnbl_B4D =
                                            CePMTR_e_ENB_All_Thrml;
                                    }
                                    else
                                    {
                                        tmpRead_5 = (rtb_UnitDelay_n && d);
                                        if ((((((tmpRead_5 && tmp_2) && tmp_3) &&
                                               rtb_AND_hf) && tmp_4) &&
                                                rtb_TmpSignalConversionAtVeSSDR_b_EnblTh)
                                            && rtb_AND_mv)
                                        {
                                            /* Merge: '<S3>/Merge1' */
                                            /* Decision 'D13': '<S30>:1:139' */
                                            /* Condition '#12': '<S30>:1:73' */
                                            /*  Enable All */
                                            /* Action '7': '<S30>:1:229' */
                                            PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc
                                                = CePMTR_e_EnblKeyAcc_PlugNoChrg;

                                            /* Merge: '<S3>/Merge' */
                                            /* Action '7': '<S30>:1:230' */
                                            VePMTR_e_ThrmlDevEnbl_B4D =
                                                CePMTR_e_ENB_All_Thrml;
                                        }
                                        else if ((((((tmpRead_5 &&
                                                      rtb_TmpSignalConversionAtVeBTRR_b_isChar)
                                                     && tmp_3) && rtb_AND_hf) &&
                                                   tmp_4) &&
                                                  rtb_TmpSignalConversionAtVeSSDR_b_EnblTh)
                                                 && rtb_AND_mv)
                                        {
                                            /* Merge: '<S3>/Merge1' */
                                            /* Decision 'D14': '<S30>:1:141' */
                                            /* Condition '#7': '<S30>:1:53' */
                                            /* Condition '#12': '<S30>:1:73' */
                                            /*  Enable All */
                                            /* Action '8': '<S30>:1:236' */
                                            PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc
                                                = CePMTR_e_EnblKeyAcc_PlugChrg;

                                            /* Merge: '<S3>/Merge' */
                                            /* Action '8': '<S30>:1:237' */
                                            VePMTR_e_ThrmlDevEnbl_B4D =
                                                CePMTR_e_ENB_All_Thrml;
                                        }
                                        else
                                        {
                                            tmp_0 = (tmp_0 && d);
                                            tmpRead_5 = (tmp_0 && tmp_2);
                                            if (((((tmpRead_5 && tmp_3) &&
                                                    rtb_AND_hf) && tmp_4) &&
                                                    rtb_TmpSignalConversionAtVeSSDR_b_EnblTh)
                                                && rtb_AND_mv)
                                            {
                                                /* Merge: '<S3>/Merge1' */
                                                /* Decision 'D15': '<S30>:1:143' */
                                                /* Condition '#12': '<S30>:1:73' */
                                                /*  Enable All */
                                                /* Action '9': '<S30>:1:243' */
                                                PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc
                                                    =
                                                    CePMTR_e_EnblKeyRun_PlugNoChrg;

                                                /* Merge: '<S3>/Merge' */
                                                /* Action '9': '<S30>:1:244' */
                                                VePMTR_e_ThrmlDevEnbl_B4D =
                                                    CePMTR_e_ENB_All_Thrml;
                                            }
                                            else
                                            {
                                                tmp_0 = (tmp_0 &&
                                                         rtb_TmpSignalConversionAtVeBTRR_b_isChar);
                                                if (((((tmp_0 && tmp_3) &&
                                                        rtb_AND_hf) && tmp_4) &&
                                                     rtb_TmpSignalConversionAtVeSSDR_b_EnblTh)
                                                    && rtb_AND_mv)
                                                {
                                                    /* Merge: '<S3>/Merge1' */
                                                    /* Decision 'D16': '<S30>:1:145' */
                                                    /* Condition '#7': '<S30>:1:53' */
                                                    /* Condition '#12': '<S30>:1:73' */
                                                    /*  Enable All */
                                                    /* Action '10': '<S30>:1:250' */
                                                    PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc
                                                        =
                                                        CePMTR_e_EnblKeyRun_PlugChrg;

                                                    /* Merge: '<S3>/Merge' */
                                                    /* Action '10': '<S30>:1:251' */
                                                    VePMTR_e_ThrmlDevEnbl_B4D =
                                                        CePMTR_e_ENB_All_Thrml;
                                                }
                                                else
                                                {
                                                    e = (e && d);
                                                    tmp_2 = (e && tmp_2);
                                                    if (((((tmp_2 && tmp_3) &&
                                                            rtb_AND_hf) && tmp_4)
                                                         && rtb_TmpSignalConversionAtVeSSDR_b_EnblTh)
                                                        && rtb_AND_mv)
                                                    {
                                                        /* Merge: '<S3>/Merge1' */
                                                        /* Decision 'D17': '<S30>:1:147' */
                                                        /* Condition '#12': '<S30>:1:73' */
                                                        /*  Enable All */
                                                        /* Action '11': '<S30>:1:257' */
                                                        PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc
                                                            =
                                                            CePMTR_e_EnblKeyCrankd_PlugNoChrg;

                                                        /* Merge: '<S3>/Merge' */
                                                        /* Action '11': '<S30>:1:258' */
                                                        VePMTR_e_ThrmlDevEnbl_B4D
                                                            =
                                                            CePMTR_e_ENB_All_Thrml;
                                                    }
                                                    else
                                                    {
                                                        e = (e &&
                                                             rtb_TmpSignalConversionAtVeBTRR_b_isChar);
                                                        if (((((e && tmp_3) &&
                                                                rtb_AND_hf) &&
                                                                tmp_4) &&
                                                                rtb_TmpSignalConversionAtVeSSDR_b_EnblTh)
                                                            && rtb_AND_mv)
                                                        {
                                                            /* Merge: '<S3>/Merge1' */
                                                            /* Decision 'D18': '<S30>:1:149' */
                                                            /* Condition '#7': '<S30>:1:53' */
                                                            /* Condition '#12': '<S30>:1:73' */
                                                            /*  Enable All */
                                                            /* Action '12': '<S30>:1:264' */
                                                            PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc
                                                                =
                                                                CePMTR_e_EnblKeyCrankd_PlugChrg;

                                                            /* Merge: '<S3>/Merge' */
                                                            /* Action '12': '<S30>:1:265' */
                                                            VePMTR_e_ThrmlDevEnbl_B4D
                                                                =
                                                                CePMTR_e_ENB_All_Thrml;
                                                        }
                                                        else if ((((((tmpRead_5 &&
                                                                      rtb_TmpSignalConversionAtVeTHMR_b_CabPre)
                                                                     &&
                                                                     rtb_AND_hf)
                                                                    && tmp_4) &&
                                                                   aVarTruthTableCondition_11)
                                                                  &&
                                                                  rtb_TmpSignalConversionAtVeSSDR_b_EnblTh)
                                                                 && rtb_AND_mv)
                                                        {
                                                            /* Merge: '<S3>/Merge1' */
                                                            /* Decision 'D19': '<S30>:1:151' */
                                                            /* Condition '#8': '<S30>:1:57' */
                                                            /* Condition '#12': '<S30>:1:73' */
                                                            /*  Enable All */
                                                            /* Action '13': '<S30>:1:271' */
                                                            PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc
                                                                =
                                                                CePMTR_e_EnblRemStr_PlugNoChrg;

                                                            /* Merge: '<S3>/Merge' */
                                                            /* Action '13': '<S30>:1:272' */
                                                            VePMTR_e_ThrmlDevEnbl_B4D
                                                                =
                                                                CePMTR_e_ENB_All_Thrml;
                                                        }
                                                        else if ((((((tmp_2 &&
                                                                      rtb_TmpSignalConversionAtVeTHMR_b_CabPre)
                                                                     &&
                                                                     rtb_AND_hf)
                                                                    && tmp_4) &&
                                                                   aVarTruthTableCondition_11)
                                                                  &&
                                                                  rtb_TmpSignalConversionAtVeSSDR_b_EnblTh)
                                                                 && rtb_AND_mv)
                                                        {
                                                            /* Merge: '<S3>/Merge1' */
                                                            /* Decision 'D20': '<S30>:1:153' */
                                                            /* Condition '#8': '<S30>:1:57' */
                                                            /* Condition '#12': '<S30>:1:73' */
                                                            /*  Enable All */
                                                            /* Action '13': '<S30>:1:271' */
                                                            PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc
                                                                =
                                                                CePMTR_e_EnblRemStr_PlugNoChrg;

                                                            /* Merge: '<S3>/Merge' */
                                                            /* Action '13': '<S30>:1:272' */
                                                            VePMTR_e_ThrmlDevEnbl_B4D
                                                                =
                                                                CePMTR_e_ENB_All_Thrml;
                                                        }
                                                        else if ((((((tmp_0 &&
                                                                      rtb_TmpSignalConversionAtVeTHMR_b_CabPre)
                                                                     &&
                                                                     rtb_AND_hf)
                                                                    && tmp_4) &&
                                                                   aVarTruthTableCondition_11)
                                                                  &&
                                                                  rtb_TmpSignalConversionAtVeSSDR_b_EnblTh)
                                                                 && rtb_AND_mv)
                                                        {
                                                            /* Merge: '<S3>/Merge1' */
                                                            /* Decision 'D21': '<S30>:1:155' */
                                                            /* Condition '#7': '<S30>:1:53' */
                                                            /* Condition '#8': '<S30>:1:57' */
                                                            /* Condition '#12': '<S30>:1:73' */
                                                            /*  Enable All */
                                                            /* Action '14': '<S30>:1:278' */
                                                            PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc
                                                                =
                                                                CePMTR_e_EnblRemStr_PlugChrg;

                                                            /* Merge: '<S3>/Merge' */
                                                            /* Action '14': '<S30>:1:279' */
                                                            VePMTR_e_ThrmlDevEnbl_B4D
                                                                =
                                                                CePMTR_e_ENB_All_Thrml;
                                                        }
                                                        else if ((((((e &&
                                                                      rtb_TmpSignalConversionAtVeTHMR_b_CabPre)
                                                                     &&
                                                                     rtb_AND_hf)
                                                                    && tmp_4) &&
                                                                   aVarTruthTableCondition_11)
                                                                  &&
                                                                  rtb_TmpSignalConversionAtVeSSDR_b_EnblTh)
                                                                 && rtb_AND_mv)
                                                        {
                                                            /* Merge: '<S3>/Merge1' */
                                                            /* Decision 'D22': '<S30>:1:157' */
                                                            /* Condition '#7': '<S30>:1:53' */
                                                            /* Condition '#8': '<S30>:1:57' */
                                                            /* Condition '#12': '<S30>:1:73' */
                                                            /*  Enable All */
                                                            /* Action '14': '<S30>:1:278' */
                                                            PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc
                                                                =
                                                                CePMTR_e_EnblRemStr_PlugChrg;

                                                            /* Merge: '<S3>/Merge' */
                                                            /* Action '14': '<S30>:1:279' */
                                                            VePMTR_e_ThrmlDevEnbl_B4D
                                                                =
                                                                CePMTR_e_ENB_All_Thrml;
                                                        }
                                                        else if (((tmp_6 &&
                                                                   tmpRead_3) &&
                                                                  rtb_TmpSignalConversionAtVeSSDR_b_EnblTh)
                                                                 && rtb_AND_mv)
                                                        {
                                                            /* Merge: '<S3>/Merge1' */
                                                            /* Decision 'D23': '<S30>:1:159' */
                                                            /* Condition '#9': '<S30>:1:61' */
                                                            /* Condition '#12': '<S30>:1:73' */
                                                            /*  Enable All */
                                                            /* Action '2': '<S30>:1:194' */
                                                            PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc
                                                                =
                                                                CePMTR_e_EnblKeyOnly_Run;

                                                            /* Merge: '<S3>/Merge' */
                                                            /* Action '2': '<S30>:1:195' */
                                                            VePMTR_e_ThrmlDevEnbl_B4D
                                                                =
                                                                CePMTR_e_ENB_All_Thrml;
                                                        }
                                                        else
                                                        {
                                                            e = !KePMTR_b_EnbComp4PerWup;
                                                            tmp_0 = ((rtb_AND_m &&
                                                                      rtb_TmpSignalConversionAtVeTHMR_b_PerWup)
                                                                     &&
                                                                     rtb_TmpSignalConversionAtVeSSDR_b_EnblTh);
                                                            if ((tmp_0 && e) &&
                                                                    rtb_AND_mv)
                                                            {
                                                                /* Merge: '<S3>/Merge1' */
                                                                /* Decision 'D24': '<S30>:1:161' */
                                                                /* Condition '#10': '<S30>:1:65' */
                                                                /* Condition '#12': '<S30>:1:73' */
                                                                /*  Enable All Except Compressor */
                                                                /* Action '15': '<S30>:1:285' */
                                                                PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc
                                                                    =
                                                                    CePMTR_e_EnblPeriodWup_PlugNoChrg;

                                                                /* Merge: '<S3>/Merge' */
                                                                /* Action '15': '<S30>:1:286' */
                                                                VePMTR_e_ThrmlDevEnbl_B4D
                                                                    =
                                                                    CePMTR_e_ENB_All_Excpt_Comp;
                                                            }
                                                            else
                                                            {
                                                                tmp_2 =
                                                                    ((rtb_TmpSignalConversionAtVeTHMR_b_DrvDrA
                                                                      &&
                                                                      rtb_TmpSignalConversionAtVeTHMR_b_PerWup)
                                                                     &&
                                                                     rtb_TmpSignalConversionAtVeSSDR_b_EnblTh);
                                                                if ((tmp_2 && e)
                                                                    &&
                                                                      rtb_AND_mv)
                                                                {
                                                                    /* Merge: '<S3>/Merge1' */
                                                                    /* Decision 'D25': '<S30>:1:163' */
                                                                    /* Condition '#7': '<S30>:1:53' */
                                                                    /* Condition '#10': '<S30>:1:65' */
                                                                    /* Condition '#12': '<S30>:1:73' */
                                                                    /*  Enable All Except Compressor */
                                                                    /* Action '16': '<S30>:1:292' */
                                                                    PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc
                                                                      =
                                                                      CePMTR_e_EnblPeriodWup_PlugChrg;

                                                                    /* Merge: '<S3>/Merge' */
                                                                    /* Action '16': '<S30>:1:293' */
                                                                    VePMTR_e_ThrmlDevEnbl_B4D
                                                                      =
                                                                      CePMTR_e_ENB_All_Excpt_Comp;
                                                                }
                                                                else if ((tmp_0 &&
                                                                    (KePMTR_b_EnbComp4PerWup))
                                                                      &&
                                                                      rtb_AND_mv)
                                                                {
                                                                    /* Merge: '<S3>/Merge1' */
                                                                    /* Decision 'D26': '<S30>:1:165' */
                                                                    /* Condition '#10': '<S30>:1:65' */
                                                                    /* Condition '#12': '<S30>:1:73' */
                                                                    /* Condition '#18': '<S30>:1:97' */
                                                                    /*  Enable All */
                                                                    /* Action '17': '<S30>:1:299' */
                                                                    PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc
                                                                      =
                                                                      CePMTR_e_EnblPeriodWup_PlugNoChrg;

                                                                    /* Merge: '<S3>/Merge' */
                                                                    /* Action '17': '<S30>:1:300' */
                                                                    VePMTR_e_ThrmlDevEnbl_B4D
                                                                      =
                                                                      CePMTR_e_ENB_All_Thrml;
                                                                }
                                                                else if ((tmp_2 &&
                                                                    (KePMTR_b_EnbComp4PerWup))
                                                                      &&
                                                                      rtb_AND_mv)
                                                                {
                                                                    /* Merge: '<S3>/Merge1' */
                                                                    /* Decision 'D27': '<S30>:1:167' */
                                                                    /* Condition '#7': '<S30>:1:53' */
                                                                    /* Condition '#10': '<S30>:1:65' */
                                                                    /* Condition '#12': '<S30>:1:73' */
                                                                    /* Condition '#18': '<S30>:1:97' */
                                                                    /*  Enable All */
                                                                    /* Action '18': '<S30>:1:306' */
                                                                    PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc
                                                                      =
                                                                      CePMTR_e_EnblPeriodWup_PlugChrg;

                                                                    /* Merge: '<S3>/Merge' */
                                                                    /* Action '18': '<S30>:1:307' */
                                                                    VePMTR_e_ThrmlDevEnbl_B4D
                                                                      =
                                                                      CePMTR_e_ENB_All_Thrml;
                                                                }
                                                                else if
                                                                      (((((((tmp_6
                                                                      && tmp_1) &&
                                                                      tmp_3) &&
                                                                      rtb_AND_hf)
                                                                      &&
                                                                      rtb_TmpSignalConversionAtVeTHMR_b_PerWup)
                                                                      &&
                                                                      rtb_TmpSignalConversionAtVeSSDR_b_EnblTh)
                                                                      &&
                                                                      rtb_AND_mv)
                                                                      &&
                                                                      (KePMTR_b_EnbPerWupNotPlugIn))
                                                                {
                                                                    /* Merge: '<S3>/Merge1' */
                                                                    /* Decision 'D28': '<S30>:1:169' */
                                                                    /* Condition '#10': '<S30>:1:65' */
                                                                    /* Condition '#12': '<S30>:1:73' */
                                                                    /* Condition '#21': '<S30>:1:109' */
                                                                    /*  Enable All */
                                                                    /* Action '19': '<S30>:1:313' */
                                                                    PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc
                                                                      =
                                                                      CePMTR_e_EnblPeriodWup_NotPlugIn;

                                                                    /* Merge: '<S3>/Merge' */
                                                                    /* Action '19': '<S30>:1:314' */
                                                                    VePMTR_e_ThrmlDevEnbl_B4D
                                                                      =
                                                                      CePMTR_e_ENB_All_Thrml;
                                                                }
                                                                else
                                                                {
                                                                    rtb_AND_hf =
                                                                      (rtb_TmpSignalConversionAtVeSSDR_b_EnblTh
                                                                      &&
                                                                      aVarTruthTableCondition_16);
                                                                    if
                                                                      ((rtb_AND_hf
                                                                      &&
                                                                      (!VePMTR_b_BattCntctrOpenPndg))
                                                                      &&
                                                                      rtb_AND_mv)
                                                                    {
                                                                      /* Merge: '<S3>/Merge1' */
                                                                      /* Condition '#12': '<S30>:1:73' */
                                                                      /* Decision 'D29': '<S30>:1:171' */
                                                                      /*  Enable All */
                                                                      /* Action '2': '<S30>:1:194' */
                                                                      PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc
                                                                      =
                                                                      CePMTR_e_EnblKeyOnly_Run;

                                                                      /* Merge: '<S3>/Merge' */
                                                                      /* Action '2': '<S30>:1:195' */
                                                                      VePMTR_e_ThrmlDevEnbl_B4D
                                                                      =
                                                                      CePMTR_e_ENB_All_Thrml;
                                                                    }
                                                                    else if
                                                                      ((rtb_AND_hf
                                                                      &&
                                                                      (VePMTR_b_BattCntctrOpenPndg))
                                                                      &&
                                                                      rtb_AND_mv)
                                                                    {
                                                                      /* Merge: '<S3>/Merge1' */
                                                                      /* Condition '#12': '<S30>:1:73' */
                                                                      /* Decision 'D30': '<S30>:1:173' */
                                                                      /* Condition '#17': '<S30>:1:93' */
                                                                      /*  Enable Only Pump and Fan */
                                                                      /* Action '1': '<S30>:1:187' */
                                                                      PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc
                                                                      =
                                                                      CePMTR_e_EnblKey_Acc_or_DrvDoorAjr;

                                                                      /* Merge: '<S3>/Merge' */
                                                                      /* Action '1': '<S30>:1:188' */
                                                                      VePMTR_e_ThrmlDevEnbl_B4D
                                                                      =
                                                                      CePMTR_e_Enb_Only_LT_Pmp_N_Fan;
                                                                    }
                                                                    else if
                                                                      (rtb_TmpSignalConversionAtVeFSCR_b_HVFunc
                                                                      &&
                                                                      rtb_AND_mv)
                                                                    {
                                                                      /* Merge: '<S3>/Merge1' */
                                                                      /* Condition '#12': '<S30>:1:73' */
                                                                      /* Decision 'D31': '<S30>:1:175' */
                                                                      /*  Enable Only Pump and Fan */
                                                                      /* Action '1': '<S30>:1:187' */
                                                                      PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc
                                                                      =
                                                                      CePMTR_e_EnblKey_Acc_or_DrvDoorAjr;

                                                                      /* Merge: '<S3>/Merge' */
                                                                      /* Action '1': '<S30>:1:188' */
                                                                      VePMTR_e_ThrmlDevEnbl_B4D
                                                                      =
                                                                      CePMTR_e_Enb_Only_LT_Pmp_N_Fan;
                                                                    }
                                                                    else if
                                                                      (rtb_TmpSignalConversionAtVeSSDR_b_EnblTh
                                                                      &&
                                                                      (VePMTR_b_PrepareToShtdwn))
                                                                    {
                                                                      /* Merge: '<S3>/Merge1' */
                                                                      /* Condition '#12': '<S30>:1:73' */
                                                                      /* Condition '#19': '<S30>:1:101' */
                                                                      /*  Disable All */
                                                                      /* Action '20': '<S30>:1:320' */
                                                                      PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc
                                                                      =
                                                                      CePMTR_e_DisableAll;

                                                                      /* Merge: '<S3>/Merge' */
                                                                      /* Action '20': '<S30>:1:321' */
                                                                      VePMTR_e_ThrmlDevEnbl_B4D
                                                                      =
                                                                      CePMTR_e_DISBL_All_Thrml;
                                                                    }
                                                                    else
                                                                    {
                                                                      /* Merge: '<S3>/Merge1' */
                                                                      /*  Default */
                                                                      /*  Disable All */
                                                                      /* Action '20': '<S30>:1:320' */
                                                                      PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc
                                                                      =
                                                                      CePMTR_e_DisableAll;

                                                                      /* Merge: '<S3>/Merge' */
                                                                      /* Action '20': '<S30>:1:321' */
                                                                      VePMTR_e_ThrmlDevEnbl_B4D
                                                                      =
                                                                      CePMTR_e_DISBL_All_Thrml;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    /* End of Truth Table: '<S18>/Truth_Table' */
    /* End of Outputs for SubSystem: '<S3>/Subsystem1' */
#endif

    /* End of SignalConversion generated from: '<S3>/Variant Source' */

    /* RelationalOperator: '<S20>/Comparison1' incorporates:
     *  Constant: '<S33>/Constant'
     */
    rtb_TmpSignalConversionAtVeFSCR_b_HVFunc = (((uint32)VePMTR_e_KeySts) ==
        CeSSDR_e_KeyCrank);

    /* Outputs for Atomic SubSystem: '<S20>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S36>/EdgeRising' */
    /* Logic: '<S37>/AND' incorporates:
     *  Logic: '<S37>/OR1'
     *  UnitDelay: '<S37>/Unit Delay'
     */
    rtb_AND_m = (rtb_TmpSignalConversionAtVeFSCR_b_HVFunc &&
                 (!PMTR_ac_DW.UnitDelay_DSTATE_c));

    /* Update for UnitDelay: '<S37>/Unit Delay' */
    PMTR_ac_DW.UnitDelay_DSTATE_c = rtb_TmpSignalConversionAtVeFSCR_b_HVFunc;

    /* End of Outputs for SubSystem: '<S36>/EdgeRising' */

    /* Switch: '<S36>/Switch1' incorporates:
     *  Constant: '<S34>/Calib'
     *  Constant: '<S35>/Calib'
     *  Constant: '<S36>/Constant Value1'
     *  Logic: '<S36>/OR'
     *  Logic: '<S36>/OR1'
     *  MinMax: '<S36>/Minimum'
     *  Sum: '<S36>/Summation'
     *  UnitDelay: '<S36>/Unit Delay'
     */
    if ((!rtb_TmpSignalConversionAtVeFSCR_b_HVFunc) || rtb_AND_m)
    {
        PMTR_ac_DW.UnitDelay_DSTATE = 0.0F;
    }
    else
    {
        PMTR_ac_DW.UnitDelay_DSTATE = fminf(KePMTR_T_HoodAjarKeyCrankTimer,
            KePMTR_dT_KeyCrankSampleTime + PMTR_ac_DW.UnitDelay_DSTATE);
    }

    /* End of Switch: '<S36>/Switch1' */

    /* Logic: '<S36>/AND' incorporates:
     *  Constant: '<S34>/Calib'
     *  RelationalOperator: '<S36>/Greater  Than'
     *  UnitDelay: '<S36>/Unit Delay'
     */
    VePMTR_b_KeyCrankActiveLong = (rtb_TmpSignalConversionAtVeFSCR_b_HVFunc &&
        (PMTR_ac_DW.UnitDelay_DSTATE >= KePMTR_T_HoodAjarKeyCrankTimer));

    /* End of Outputs for SubSystem: '<S20>/Turn On Delay Time' */

    /* Logic: '<S20>/Logical5' incorporates:
     *  Constant: '<S32>/Constant'
     *  RelationalOperator: '<S20>/Comparison4'
     */
    VePMTR_b_KeyCrankLongOrPostCrank = ((((uint32)VePMTR_e_KeySts) ==
        CeSSDR_e_KeyPostCrnk) || (VePMTR_b_KeyCrankActiveLong));

    /* SignalConversion generated from: '<S3>/Variant Source1' */
#if !Rte_SysCon_Variant_PMTR_3

    /* Outputs for Enabled SubSystem: '<S3>/Subsystem2' incorporates:
     *  EnablePort: '<S19>/Enable'
     */
    /* Truth Table: '<S19>/Truth_Table' incorporates:
     *  Switch: '<S4>/Switch14'
     */
    /* Truth Table Function 'PMTR_MedTEH/EnblReas_DvceEnbl/Subsystem2/Truth_Table': '<S31>:1' */
    /*  Key in Off */
    /* Condition '#1': '<S31>:1:24' */
    /*  Key in Accessory or Post Run Accessory */
    if ((((uint32)VePMTR_e_KeySts) == CeSSDR_e_KeyAccy) || (((uint32)
            VePMTR_e_KeySts) == CeSSDR_e_KeyPostRunAccy))
    {
        /* Condition '#2': '<S31>:1:28' */
        rtb_UnitDelay_n = true;
    }
    else
    {
        rtb_UnitDelay_n = false;
    }

    /*  Key in Run Pre Crank */
    /* Condition '#3': '<S31>:1:32' */
    /*  Key in Crank */
    /* Condition '#4': '<S31>:1:36' */
    rtb_TmpSignalConversionAtVeBTRR_b_isChar = (((uint32)VePMTR_e_KeySts) ==
        CeSSDR_e_KeyCrank);

    /*  Key in Post-Crank */
    /* Condition '#5': '<S31>:1:40' */
    /*  Failed Crank [Key in post-crank OR key in crank for a long period of time] */
    /*  Driver Door Open */
    /*  SSDR Thermal Devices Enabled */
    /*  HV Functionalities Rejected Hood Ajar */
    /*  Rad Fan EOL Sleep Flag */
    if (rtb_TmpSignalConversionAtVeFSCR_b_RadFan &&
            (KePMTR_b_RadFanEOL_ThrmlEnable))
    {
        /* Condition '#10': '<S31>:1:60' */
        rtb_AND_m = true;
    }
    else
    {
        rtb_AND_m = false;
    }

    /*  After Run */
    /*  Contactors Closed */
    /* Condition '#12': '<S31>:1:68' */
    rtb_TmpSignalConversionAtVeTHMR_b_CabPre = (((uint32)
        VePMTR_e_HV_BatCntctrStat) == CeHVTR_e_Closed);

    /*  Contactors Open Pending */
    /*  Propulsion System Active */
    /*  Request Thermal Shutdown */
    /*  In-Plant Flag */
    /* Condition '#16': '<S31>:1:84' */
    /*  HTE */
    if (rtb_TmpSignalConversionAtVeSSDR_b_EnblTh && (VePMTR_b_HVDspt_Enbl))
    {
        /* Merge: '<S3>/Merge1' */
        /* Condition '#8': '<S31>:1:52' */
        /* Condition '#17': '<S31>:1:88' */
        /*  Action 1 */
        /* Action '1': '<S31>:1:134' */
        PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc =
            KePMTR_e_mHEV_ThrmlEnblRsn_HTE;

        /* Merge: '<S3>/Merge' */
        /* Action '1': '<S31>:1:135' */
        VePMTR_e_ThrmlDevEnbl_B4D = KePMTR_e_mHEV_ThrmlDevEnbl_HTE;
    }
    else if (rtb_TmpSignalConversionAtVeSSDR_b_EnblTh && rtb_AND_m)
    {
        /* Merge: '<S3>/Merge1' */
        /* Condition '#8': '<S31>:1:52' */
        /*  Action 2 */
        /* Action '2': '<S31>:1:141' */
        PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc =
            KePMTR_e_mHEV_ThrmlEnblRsn_EOL;

        /* Merge: '<S3>/Merge' */
        /* Action '2': '<S31>:1:142' */
        VePMTR_e_ThrmlDevEnbl_B4D = KePMTR_e_mHEV_ThrmlDevEnbl_EOL;
    }
    else
    {
        rtb_TmpSignalConversionAtVeFSCR_b_HVFunc = !VePMTR_b_PrepareToShtdwn;
        if ((((!rtb_TmpSignalConversionAtVeBTRR_b_isChar) &&
                rtb_TmpSignalConversionAtVeSSDR_b_EnblTh) &&
                (VePMTR_b_AfterRunReq)) &&
                rtb_TmpSignalConversionAtVeFSCR_b_HVFunc)
        {
            /* Merge: '<S3>/Merge1' */
            /* Decision 'D3': '<S31>:1:94' */
            /* Condition '#8': '<S31>:1:52' */
            /* Condition '#11': '<S31>:1:64' */
            /*  Action 3 */
            /* Action '3': '<S31>:1:148' */
            PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc =
                KePMTR_e_mHEV_ThrmlEnblRsn_AftRun_ExclCranking;

            /* Merge: '<S3>/Merge' */
            /* Action '3': '<S31>:1:149' */
            VePMTR_e_ThrmlDevEnbl_B4D =
                KePMTR_e_mHEV_ThrmlDevEnbl_AftRun_ExclCranking;
        }
        else
        {
            rtb_AND_hf = !rtb_TmpSignalConversionAtVeTHMR_b_CabPre;
            if ((rtb_TmpSignalConversionAtVeSSDR_b_EnblTh && rtb_AND_hf) &&
                    (!VePMTR_b_InFieldMode))
            {
                /* Merge: '<S3>/Merge1' */
                /* Condition '#8': '<S31>:1:52' */
                /* Decision 'D4': '<S31>:1:96' */
                /*  Action 17 */
                /* Action '17': '<S31>:1:246' */
                PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc =
                    CePMTR_e_DisableAll;

                /* Merge: '<S3>/Merge' */
                /* Action '17': '<S31>:1:247' */
                VePMTR_e_ThrmlDevEnbl_B4D = CePMTR_e_DISBL_All_Thrml;
            }
            else
            {
                rtb_AND_mv = !VePMTR_b_PropSysActv;
                e = ((VePMTR_b_KeyCrankLongOrPostCrank) &&
                     rtb_TmpSignalConversionAtVeSSDR_b_EnblTh);
                if (((e && (VePMTR_b_AfterRunReq)) && rtb_AND_mv) &&
                        rtb_TmpSignalConversionAtVeFSCR_b_HVFunc)
                {
                    /* Merge: '<S3>/Merge1' */
                    /* Condition '#6': '<S31>:1:44' */
                    /* Condition '#8': '<S31>:1:52' */
                    /* Condition '#11': '<S31>:1:64' */
                    /* Decision 'D5': '<S31>:1:98' */
                    /*  Action 4 */
                    /* Action '4': '<S31>:1:155' */
                    PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc =
                        KePMTR_e_mHEV_ThrmlEnblRsn_AftRun_FailedCrank;

                    /* Merge: '<S3>/Merge' */
                    /* Action '4': '<S31>:1:156' */
                    VePMTR_e_ThrmlDevEnbl_B4D =
                        KePMTR_e_mHEV_ThrmlDevEnbl_AftRun_FailedCrank;
                }
                else if (((((uint32)VePMTR_e_KeySts) == CeSSDR_e_KeyOff) &&
                          rtb_TmpSignalConversionAtVeSSDR_b_EnblTh) &&
                         rtb_TmpSignalConversionAtVeFSCR_b_HVFunc)
                {
                    /* Merge: '<S3>/Merge1' */
                    /* Decision 'D6': '<S31>:1:100' */
                    /* Condition '#8': '<S31>:1:52' */
                    /*  Action 5 */
                    /* Action '5': '<S31>:1:162' */
                    PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc =
                        KePMTR_e_mHEV_ThrmlEnblRsn_KeyOff;

                    /* Merge: '<S3>/Merge' */
                    /* Action '5': '<S31>:1:163' */
                    VePMTR_e_ThrmlDevEnbl_B4D =
                        KePMTR_e_mHEV_ThrmlDevEnbl_KeyOff;
                }
                else if ((rtb_UnitDelay_n &&
                          rtb_TmpSignalConversionAtVeSSDR_b_EnblTh) &&
                         rtb_TmpSignalConversionAtVeFSCR_b_HVFunc)
                {
                    /* Merge: '<S3>/Merge1' */
                    /* Condition '#8': '<S31>:1:52' */
                    /* Decision 'D7': '<S31>:1:102' */
                    /*  Action 6 */
                    /* Action '6': '<S31>:1:169' */
                    PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc =
                        KePMTR_e_mHEV_ThrmlEnblRsn_KeyAcc;

                    /* Merge: '<S3>/Merge' */
                    /* Action '6': '<S31>:1:170' */
                    VePMTR_e_ThrmlDevEnbl_B4D =
                        KePMTR_e_mHEV_ThrmlDevEnbl_KeyAcc;
                }
                else if (((((uint32)VePMTR_e_KeySts) == CeSSDR_e_KeyRun) &&
                          rtb_TmpSignalConversionAtVeSSDR_b_EnblTh) &&
                         rtb_TmpSignalConversionAtVeFSCR_b_HVFunc)
                {
                    /* Merge: '<S3>/Merge1' */
                    /* Decision 'D8': '<S31>:1:104' */
                    /* Condition '#8': '<S31>:1:52' */
                    /*  Action 7 */
                    /* Action '7': '<S31>:1:176' */
                    PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc =
                        KePMTR_e_mHEV_ThrmlEnblRsn_KeyPreCrank;

                    /* Merge: '<S3>/Merge' */
                    /* Action '7': '<S31>:1:177' */
                    VePMTR_e_ThrmlDevEnbl_B4D =
                        KePMTR_e_mHEV_ThrmlDevEnbl_KeyPreCrank;
                }
                else if ((((rtb_TmpSignalConversionAtVeBTRR_b_isChar &&
                            (!VePMTR_b_KeyCrankLongOrPostCrank)) &&
                           rtb_TmpSignalConversionAtVeSSDR_b_EnblTh) &&
                          rtb_AND_mv) &&
                         rtb_TmpSignalConversionAtVeFSCR_b_HVFunc)
                {
                    /* Merge: '<S3>/Merge1' */
                    /* Decision 'D9': '<S31>:1:106' */
                    /* Condition '#8': '<S31>:1:52' */
                    /*  Action 8 */
                    /* Action '8': '<S31>:1:183' */
                    PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc =
                        KePMTR_e_mHEV_ThrmlEnblRsn_Cranking_PSAFalse;

                    /* Merge: '<S3>/Merge' */
                    /* Action '8': '<S31>:1:184' */
                    VePMTR_e_ThrmlDevEnbl_B4D =
                        KePMTR_e_mHEV_ThrmlDevEnbl_Cranking_PSAFalse;
                }
                else if (((e && (!VePMTR_b_AfterRunReq)) && rtb_AND_mv) &&
                         rtb_TmpSignalConversionAtVeFSCR_b_HVFunc)
                {
                    /* Merge: '<S3>/Merge1' */
                    /* Condition '#6': '<S31>:1:44' */
                    /* Condition '#8': '<S31>:1:52' */
                    /* Decision 'D10': '<S31>:1:108' */
                    /*  Action 9 */
                    /* Action '9': '<S31>:1:190' */
                    PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc =
                        KePMTR_e_mHEV_ThrmlEnblRsn_Cranking_CrankFailed_PSAFalse;

                    /* Merge: '<S3>/Merge' */
                    /* Action '9': '<S31>:1:191' */
                    VePMTR_e_ThrmlDevEnbl_B4D =
                        KePMTR_e_mHEV_ThrmlDevEnbl_Cranking_CrankFailed_PSAFalse;
                }
                else
                {
                    e = ((((uint32)VePMTR_e_KeySts) == CeSSDR_e_KeyPostCrnk) &&
                         rtb_TmpSignalConversionAtVeSSDR_b_EnblTh);
                    if (((e && (!VePMTR_b_AfterRunReq)) && rtb_AND_mv) &&
                            rtb_TmpSignalConversionAtVeFSCR_b_HVFunc)
                    {
                        /* Merge: '<S3>/Merge1' */
                        /* Decision 'D11': '<S31>:1:110' */
                        /* Condition '#8': '<S31>:1:52' */
                        /*  Action 10 */
                        /* Action '10': '<S31>:1:197' */
                        PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc =
                            KePMTR_e_mHEV_ThrmlEnblRsn_PostCrank_PSAFalse;

                        /* Merge: '<S3>/Merge' */
                        /* Action '10': '<S31>:1:198' */
                        VePMTR_e_ThrmlDevEnbl_B4D =
                            KePMTR_e_mHEV_ThrmlDevEnbl_PostCrank_PSAFalse;
                    }
                    else if (((rtb_TmpSignalConversionAtVeBTRR_b_isChar &&
                               rtb_TmpSignalConversionAtVeSSDR_b_EnblTh) &&
                              (VePMTR_b_PropSysActv)) &&
                             rtb_TmpSignalConversionAtVeFSCR_b_HVFunc)
                    {
                        /* Merge: '<S3>/Merge1' */
                        /* Decision 'D12': '<S31>:1:112' */
                        /* Condition '#8': '<S31>:1:52' */
                        /* Condition '#14': '<S31>:1:76' */
                        /*  Action 11 */
                        /* Action '11': '<S31>:1:204' */
                        PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc =
                            KePMTR_e_mHEV_ThrmlEnblRsn_Cranking_PSATrue;

                        /* Merge: '<S3>/Merge' */
                        /* Action '11': '<S31>:1:205' */
                        VePMTR_e_ThrmlDevEnbl_B4D =
                            KePMTR_e_mHEV_ThrmlDevEnbl_Cranking_PSATrue;
                    }
                    else if ((e && (VePMTR_b_PropSysActv)) &&
                             rtb_TmpSignalConversionAtVeFSCR_b_HVFunc)
                    {
                        /* Merge: '<S3>/Merge1' */
                        /* Decision 'D13': '<S31>:1:114' */
                        /* Condition '#8': '<S31>:1:52' */
                        /* Condition '#14': '<S31>:1:76' */
                        /*  Action 12 */
                        /* Action '12': '<S31>:1:211' */
                        PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc =
                            KePMTR_e_mHEV_ThrmlEnblRsn_PostCrank_PSATrue;

                        /* Merge: '<S3>/Merge' */
                        /* Action '12': '<S31>:1:212' */
                        VePMTR_e_ThrmlDevEnbl_B4D =
                            KePMTR_e_mHEV_ThrmlDevEnbl_PostCrank_PSATrue;
                    }
                    else if ((rtb_TmpSignalConversionAtVeSSDR_b_EnblTh &&
                              (VePMTR_b_PropSysActv)) &&
                             rtb_TmpSignalConversionAtVeFSCR_b_HVFunc)
                    {
                        /* Merge: '<S3>/Merge1' */
                        /* Condition '#8': '<S31>:1:52' */
                        /* Condition '#14': '<S31>:1:76' */
                        /* Decision 'D14': '<S31>:1:116' */
                        /*  Action 13 */
                        /* Action '13': '<S31>:1:218' */
                        PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc =
                            KePMTR_e_mHEV_ThrmlEnblRsn_PSATrue;

                        /* Merge: '<S3>/Merge' */
                        /* Action '13': '<S31>:1:219' */
                        VePMTR_e_ThrmlDevEnbl_B4D =
                            KePMTR_e_mHEV_ThrmlDevEnbl_PSATrue;
                    }
                    else if (((rtb_TmpSignalConversionAtVeSSDR_b_EnblTh &&
                               rtb_TmpSignalConversionAtVeTHMR_b_CabPre) &&
                              (!VePMTR_b_BattCntctrOpenPndg)) &&
                             rtb_TmpSignalConversionAtVeFSCR_b_HVFunc)
                    {
                        /* Merge: '<S3>/Merge1' */
                        /* Condition '#8': '<S31>:1:52' */
                        /* Decision 'D15': '<S31>:1:118' */
                        /*  Action 14 */
                        /* Action '14': '<S31>:1:225' */
                        PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc =
                            KePMTR_e_mHEV_ThrmlEnblRsn_CnctrClose_NoCnctrOpenReq;

                        /* Merge: '<S3>/Merge' */
                        /* Action '14': '<S31>:1:226' */
                        VePMTR_e_ThrmlDevEnbl_B4D =
                            KePMTR_e_mHEV_ThrmlDevEnbl_CnctrClose_NoCnctrOpenReq;
                    }
                    else if ((((rtb_TmpSignalConversionAtVeSSDR_b_EnblTh &&
                                (!VePMTR_b_AfterRunReq)) &&
                               rtb_TmpSignalConversionAtVeTHMR_b_CabPre) &&
                              (VePMTR_b_BattCntctrOpenPndg)) &&
                             rtb_TmpSignalConversionAtVeFSCR_b_HVFunc)
                    {
                        /* Merge: '<S3>/Merge1' */
                        /* Condition '#8': '<S31>:1:52' */
                        /* Decision 'D16': '<S31>:1:120' */
                        /* Condition '#13': '<S31>:1:72' */
                        /*  Action 15 */
                        /* Action '15': '<S31>:1:232' */
                        PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc =
                            KePMTR_e_mHEV_ThrmlEnblRsn_CnctrClose_CnctrOpenReq_NoAftRun;

                        /* Merge: '<S3>/Merge' */
                        /* Action '15': '<S31>:1:233' */
                        VePMTR_e_ThrmlDevEnbl_B4D =
                            KePMTR_e_mHEV_ThrmlDevEnbl_CnctrClose_CnctrOpenReq_NoAftRun;
                    }
                    else if (((rtb_TmpSignalConversionAtVeSSDR_b_EnblTh &&
                               (!VePMTR_b_AfterRunReq)) && rtb_AND_hf) &&
                             rtb_TmpSignalConversionAtVeFSCR_b_HVFunc)
                    {
                        /* Merge: '<S3>/Merge1' */
                        /* Condition '#8': '<S31>:1:52' */
                        /* Decision 'D17': '<S31>:1:122' */
                        /*  Action 16 */
                        /* Action '16': '<S31>:1:239' */
                        PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc =
                            KePMTR_e_mHEV_ThrmlEnblRsn_CnctrOpen_NoAftRun;

                        /* Merge: '<S3>/Merge' */
                        /* Action '16': '<S31>:1:240' */
                        VePMTR_e_ThrmlDevEnbl_B4D =
                            KePMTR_e_mHEV_ThrmlDevEnbl_CnctrOpen_NoAftRun;
                    }
                    else if (rtb_TmpSignalConversionAtVeSSDR_b_EnblTh &&
                             (VePMTR_b_PrepareToShtdwn))
                    {
                        /* Merge: '<S3>/Merge1' */
                        /* Condition '#8': '<S31>:1:52' */
                        /* Condition '#15': '<S31>:1:80' */
                        /*  Action 17 */
                        /* Action '17': '<S31>:1:246' */
                        PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc =
                            CePMTR_e_DisableAll;

                        /* Merge: '<S3>/Merge' */
                        /* Action '17': '<S31>:1:247' */
                        VePMTR_e_ThrmlDevEnbl_B4D = CePMTR_e_DISBL_All_Thrml;
                    }
                    else
                    {
                        /* Merge: '<S3>/Merge1' */
                        /*  Default */
                        /*  Action 17 */
                        /* Action '17': '<S31>:1:246' */
                        PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc =
                            CePMTR_e_DisableAll;

                        /* Merge: '<S3>/Merge' */
                        /* Action '17': '<S31>:1:247' */
                        VePMTR_e_ThrmlDevEnbl_B4D = CePMTR_e_DISBL_All_Thrml;
                    }
                }
            }
        }
    }

    /* End of Truth Table: '<S19>/Truth_Table' */
    /* End of Outputs for SubSystem: '<S3>/Subsystem2' */
#endif

    /* End of SignalConversion generated from: '<S3>/Variant Source1' */

    /* RelationalOperator: '<S11>/Comparison4' incorporates:
     *  Merge: '<S3>/Merge1'
     *  UnitDelay: '<S11>/Unit Delay1'
     */
    rtb_TmpSignalConversionAtVeFSCR_b_HVFunc =
        (PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc ==
         PMTR_ac_DW.UnitDelay1_DSTATE);

    /* Outputs for Atomic SubSystem: '<S11>/EdgeRising1' */
    /* Logic: '<S23>/AND' incorporates:
     *  Logic: '<S23>/OR1'
     *  UnitDelay: '<S23>/Unit Delay'
     */
    rtb_AND_m = (rtb_TmpSignalConversionAtVeFSCR_b_HVFunc &&
                 (!PMTR_ac_DW.UnitDelay_DSTATE_a2o));

    /* Update for UnitDelay: '<S23>/Unit Delay' */
    PMTR_ac_DW.UnitDelay_DSTATE_a2o = rtb_TmpSignalConversionAtVeFSCR_b_HVFunc;

    /* End of Outputs for SubSystem: '<S11>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S11>/Count Down  Reset Enabled' */
    /* Switch: '<S21>/Switch1' incorporates:
     *  Constant: '<S11>/Constant Value3'
     *  Constant: '<S13>/Calib'
     *  Constant: '<S21>/Constant Value'
     *  Logic: '<S11>/Logical2'
     *  Logic: '<S11>/Logical7'
     *  RelationalOperator: '<S21>/Greater  Than'
     *  Sum: '<S11>/Sum1'
     *  Switch: '<S21>/Switch2'
     *  UnitDelay: '<S21>/Unit Delay'
     */
    if (rtb_AND_m || (!rtb_TmpSignalConversionAtVeFSCR_b_HVFunc))
    {
        PMTR_ac_DW.UnitDelay_DSTATE_p = (uint16)((sint32)(((sint32)
            KePMTR_Cnt_DebncThrmlEnblRsnNew) - 1));
    }
    else
    {
        if (((sint32)PMTR_ac_DW.UnitDelay_DSTATE_p) > 0)
        {
            /* UnitDelay: '<S21>/Unit Delay' incorporates:
             *  Constant: '<S21>/Constant Value1'
             *  Sum: '<S21>/Subtraction'
             *  Switch: '<S21>/Switch2'
             */
            PMTR_ac_DW.UnitDelay_DSTATE_p = (uint16)((sint32)(((sint32)
                PMTR_ac_DW.UnitDelay_DSTATE_p) - 1));
        }
    }

    /* End of Switch: '<S21>/Switch1' */

    /* Logic: '<S11>/Logical3' incorporates:
     *  Constant: '<S21>/Constant Value2'
     *  RelationalOperator: '<S21>/Greater  Than1'
     *  UnitDelay: '<S21>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeFSCR_b_HVFunc = (((sint32)
        PMTR_ac_DW.UnitDelay_DSTATE_p) <= 0);

    /* End of Outputs for SubSystem: '<S11>/Count Down  Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S11>/EdgeRising' */
    /* Logic: '<S22>/AND' incorporates:
     *  Logic: '<S22>/OR1'
     *  UnitDelay: '<S22>/Unit Delay'
     */
    rtb_AND_m = (rtb_TmpSignalConversionAtVeFSCR_b_HVFunc &&
                 (!PMTR_ac_DW.UnitDelay_DSTATE_l1));

    /* Update for UnitDelay: '<S22>/Unit Delay' */
    PMTR_ac_DW.UnitDelay_DSTATE_l1 = rtb_TmpSignalConversionAtVeFSCR_b_HVFunc;

    /* End of Outputs for SubSystem: '<S11>/EdgeRising' */

    /* Outputs for Enabled SubSystem: '<S11>/Subsystem2' incorporates:
     *  EnablePort: '<S25>/Enable'
     */
    /* Logic: '<S11>/Logical1' incorporates:
     *  Constant: '<S16>/Calib'
     *  Inport: '<S25>/In1'
     *  Merge: '<S3>/Merge1'
     *  Switch: '<S24>/Switch1'
     *  UnitDelay: '<S11>/Unit Delay2'
     */
    if (rtb_AND_m || ((!KePMTR_b_Key_DisabDebnc_RST) &&
                      (PMTR_ac_DW.UnitDelay2_DSTATE_a)))
    {
        /* SignalConversion generated from: '<S25>/Out1' incorporates:
         *  Constant: '<S25>/Constant Value1'
         */
        PMTR_ac_B.OutportBufferForOut1_b = false;
        PMTR_ac_B.In1 = PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc;
    }

    /* End of Logic: '<S11>/Logical1' */
    /* End of Outputs for SubSystem: '<S11>/Subsystem2' */

    /* Switch: '<S3>/Switch' incorporates:
     *  Constant: '<S14>/Calib'
     */
    if (KePMTR_b_DsblThrmlEnblRsnDbnc)
    {
        /* Switch: '<S3>/Switch' incorporates:
         *  Merge: '<S3>/Merge1'
         */
        VePMTR_e_ThrmlEnblRsn_B4D =
            PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc;
    }
    else
    {
        /* Switch: '<S3>/Switch' incorporates:
         *  Inport: '<S25>/In1'
         */
        VePMTR_e_ThrmlEnblRsn_B4D = PMTR_ac_B.In1;
    }

    /* End of Switch: '<S3>/Switch' */

    /* Update for UnitDelay: '<S11>/Unit Delay1' incorporates:
     *  Merge: '<S3>/Merge1'
     */
    PMTR_ac_DW.UnitDelay1_DSTATE = PMTR_ac_B.VePMTR_e_ThermalEnableReason_B4Dbnc;

    /* Update for UnitDelay: '<S11>/Unit Delay2' */
    PMTR_ac_DW.UnitDelay2_DSTATE_a = PMTR_ac_B.OutportBufferForOut1_b;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Thrml_Rly_Logic'
     */
    /* RelationalOperator: '<S171>/Comparison4' incorporates:
     *  UnitDelay: '<S171>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeFSCR_b_HVFunc = (VePMTR_b_LatcdImpct ==
        PMTR_ac_DW.UnitDelay_DSTATE_m);

    /* Outputs for Atomic SubSystem: '<S171>/EdgeRising1' */
    /* Logic: '<S178>/AND' incorporates:
     *  Logic: '<S178>/OR1'
     *  UnitDelay: '<S178>/Unit Delay'
     */
    rtb_AND_m = (rtb_TmpSignalConversionAtVeFSCR_b_HVFunc &&
                 (!PMTR_ac_DW.UnitDelay_DSTATE_k));

    /* Update for UnitDelay: '<S178>/Unit Delay' */
    PMTR_ac_DW.UnitDelay_DSTATE_k = rtb_TmpSignalConversionAtVeFSCR_b_HVFunc;

    /* End of Outputs for SubSystem: '<S171>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S171>/Count Down  Reset Enabled' */
    /* Switch: '<S176>/Switch1' incorporates:
     *  Constant: '<S171>/Constant Value3'
     *  Constant: '<S172>/Calib'
     *  Constant: '<S176>/Constant Value'
     *  Logic: '<S171>/Logical2'
     *  Logic: '<S171>/Logical7'
     *  RelationalOperator: '<S176>/Greater  Than'
     *  Sum: '<S171>/Sum1'
     *  Switch: '<S176>/Switch2'
     *  UnitDelay: '<S176>/Unit Delay'
     */
    if (rtb_AND_m || (!rtb_TmpSignalConversionAtVeFSCR_b_HVFunc))
    {
        PMTR_ac_DW.UnitDelay_DSTATE_ie = (uint16)((sint32)(((sint32)
            KePMTR_Cnt_DbncLatchdImpct_tim) - 1));
    }
    else
    {
        if (((sint32)PMTR_ac_DW.UnitDelay_DSTATE_ie) > 0)
        {
            /* UnitDelay: '<S176>/Unit Delay' incorporates:
             *  Constant: '<S176>/Constant Value1'
             *  Sum: '<S176>/Subtraction'
             *  Switch: '<S176>/Switch2'
             */
            PMTR_ac_DW.UnitDelay_DSTATE_ie = (uint16)((sint32)(((sint32)
                PMTR_ac_DW.UnitDelay_DSTATE_ie) - 1));
        }
    }

    /* End of Switch: '<S176>/Switch1' */

    /* Logic: '<S171>/Logical3' incorporates:
     *  Constant: '<S176>/Constant Value2'
     *  RelationalOperator: '<S176>/Greater  Than1'
     *  UnitDelay: '<S176>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeFSCR_b_HVFunc = (((sint32)
        PMTR_ac_DW.UnitDelay_DSTATE_ie) <= 0);

    /* End of Outputs for SubSystem: '<S171>/Count Down  Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S171>/EdgeRising' */
    /* Logic: '<S177>/AND' incorporates:
     *  Logic: '<S177>/OR1'
     *  UnitDelay: '<S177>/Unit Delay'
     */
    rtb_AND_m = (rtb_TmpSignalConversionAtVeFSCR_b_HVFunc &&
                 (!PMTR_ac_DW.UnitDelay_DSTATE_a2));

    /* Update for UnitDelay: '<S177>/Unit Delay' */
    PMTR_ac_DW.UnitDelay_DSTATE_a2 = rtb_TmpSignalConversionAtVeFSCR_b_HVFunc;

    /* End of Outputs for SubSystem: '<S171>/EdgeRising' */

    /* Outputs for Enabled SubSystem: '<S171>/Subsystem2' incorporates:
     *  EnablePort: '<S180>/Enable'
     */
    /* Logic: '<S171>/Logical1' incorporates:
     *  Constant: '<S173>/Calib'
     *  Switch: '<S179>/Switch1'
     *  UnitDelay: '<S171>/Unit Delay2'
     */
    if (rtb_AND_m || ((!KePMTR_b_Impct_DisabDebnc_RST) &&
                      (PMTR_ac_DW.UnitDelay2_DSTATE)))
    {
        /* SignalConversion generated from: '<S180>/Out1' incorporates:
         *  Constant: '<S180>/Constant Value1'
         */
        PMTR_ac_B.OutportBufferForOut1 = false;

        /* Gain: '<S181>/Gain' */
        VePMTR_b_LatchdImpct_Delyd_1_B4D = VePMTR_b_LatcdImpct;
    }

    /* End of Logic: '<S171>/Logical1' */
    /* End of Outputs for SubSystem: '<S171>/Subsystem2' */

    /* Switch: '<S174>/Switch' incorporates:
     *  Constant: '<S182>/Calib'
     */
    VePMTR_b_LatchdImpct_Delyd_1 = ((!KePMTR_b_LatchImpctDbncd_SD) &&
        (VePMTR_b_LatchdImpct_Delyd_1_B4D));

    /* Logic: '<S192>/Logical7' incorporates:
     *  Logic: '<S192>/Logical'
     *  Logic: '<S192>/Logical10'
     *  Logic: '<S192>/Logical11'
     *  Logic: '<S192>/Logical8'
     *  Logic: '<S192>/Logical9'
     *  RelationalOperator: '<S193>/Relational Operator'
     *  S-Function (sfix_bitop): '<S193>/Bitwise Operator7'
     */
#if Rte_SysCon_Variant_PMTR_1

    /* VariantMerge generated from: '<S175>/Variant_Source' */
    rtb_VariantMerge_For_Variant_Source_Va_h =
        ((((!VePMTR_b_VehDynaCMPwrRlyCktShotoGnd) &&
           (!VePMTR_b_VehDynaCMPwrRlyCktShotoBatt)) &&
          (!VePMTR_b_VehDynaCMPwrRlyCktHi)) && (!VePMTR_b_VehDynaCMPwrRlyCktLo));

#else

    /* VariantMerge generated from: '<S175>/Variant_Source' incorporates:
     *  Constant: '<S193>/Constant'
     *  DataStoreRead: '<S193>/StatusByte_ThrmlRlyCtrlCkt'
     *  Logic: '<S192>/Logical8'
     *  RelationalOperator: '<S193>/Relational Operator'
     *  S-Function (sfix_bitop): '<S193>/Bitwise Operator7'
     */
    rtb_VariantMerge_For_Variant_Source_Va_h = ((((sint32)
        PMTR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 1) <= 0);

#endif

    /* End of Logic: '<S192>/Logical7' */

    /* Logic: '<S192>/Logical1' incorporates:
     *  Constant: '<S194>/Calib'
     *  Constant: '<S195>/Calib'
     *  Constant: '<S196>/Calib'
     *  Constant: '<S197>/Calib'
     *  Constant: '<S198>/Calib'
     *  Logic: '<S192>/Logical2'
     *  Logic: '<S192>/Logical3'
     *  Logic: '<S192>/Logical4'
     *  Logic: '<S192>/Logical5'
     *  Logic: '<S192>/Logical6'
     *  RelationalOperator: '<S192>/Comparison3'
     *  RelationalOperator: '<S192>/Comparison4'
     *  RelationalOperator: '<S192>/Comparison5'
     *  RelationalOperator: '<S192>/Comparison6'
     */
    VePMTR_b_ThrmlSysEnb_Raw = ((((((KePMTR_U_SysVltLwrLim_BF3 <
        VePMTR_U_HB_SysVolt) && (VePMTR_U_HB_SysVolt < KePMTR_U_SysVltUprLim_BF3))
        || (KePMTR_b_ThrmlRelyCmd_Disb_BF3)) &&
        ((KePMTR_b_ThrmlRelyCmd_Disb_P1A1E) ||
         rtb_VariantMerge_For_Variant_Source_Va_h)) &&
        (!VePMTR_b_LatchdImpct_Delyd_1)) &&
        ((!rtb_TmpSignalConversionAtVeFSCR_b_RadFan) ||
         (!KePMTR_b_RadFanEOL_ThrmlEnable)));

    /* Switch: '<S188>/Switch1' */
    VePMTR_b_ThrmlSystEnbl_RlyCmnd_B4D = ((VePMTR_b_ThrmlSysEnb_Raw) &&
        rtb_TmpSignalConversionAtVeSSDR_b_EnblTh);

    /* Logic: '<S175>/Logical1' incorporates:
     *  Logic: '<S175>/Logical'
     *  Logic: '<S175>/Logical2'
     *  Logic: '<S175>/Logical3'
     *  Logic: '<S175>/Logical5'
     *  Logic: '<S175>/Logical6'
     *  RelationalOperator: '<S187>/Relational Operator'
     *  S-Function (sfix_bitop): '<S187>/Bitwise Operator7'
     */
#if Rte_SysCon_Variant_PMTR_1

    /* VariantMerge generated from: '<S175>/Variant_Source' */
    rtb_VariantMerge_For_Variant_Source_Va_h =
        ((((!VePMTR_b_VehDynaCMPwrRlyCktShotoGnd) &&
           (!VePMTR_b_VehDynaCMPwrRlyCktShotoBatt)) &&
          (!VePMTR_b_VehDynaCMPwrRlyCktHi)) && (!VePMTR_b_VehDynaCMPwrRlyCktLo));

#else

    /* VariantMerge generated from: '<S175>/Variant_Source' incorporates:
     *  Constant: '<S187>/Constant'
     *  DataStoreRead: '<S187>/StatusByte_ThrmlRlyCtrlCkt'
     *  Logic: '<S175>/Logical2'
     *  RelationalOperator: '<S187>/Relational Operator'
     *  S-Function (sfix_bitop): '<S187>/Bitwise Operator7'
     */
    rtb_VariantMerge_For_Variant_Source_Va_h = ((((sint32)
        PMTR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 1) <= 0);

#endif

    /* End of Logic: '<S175>/Logical1' */

    /* Switch: '<S189>/Switch1' incorporates:
     *  Constant: '<S191>/Calib'
     *  Logic: '<S175>/Logical4'
     */
    if ((KePMTR_b_ThrmlRelyCmd_Disb_P1A1E) ||
            rtb_VariantMerge_For_Variant_Source_Va_h)
    {
        /* Switch: '<S190>/Switch1' */
        if (VePMTR_b_ThrmlSystEnbl_RlyCmnd_B4D)
        {
            /* Switch: '<S189>/Switch1' incorporates:
             *  Constant: '<S183>/Constant'
             */
            VePMTR_e_ThrmlRlyState_B4D = CePMTR_e_ThermalRelayClosed;
        }
        else
        {
            /* Switch: '<S189>/Switch1' incorporates:
             *  Constant: '<S184>/Constant'
             */
            VePMTR_e_ThrmlRlyState_B4D = CePMTR_e_ThermalRelayOpen;
        }

        /* End of Switch: '<S190>/Switch1' */
    }
    else
    {
        /* Switch: '<S189>/Switch1' incorporates:
         *  Constant: '<S185>/Constant'
         */
        VePMTR_e_ThrmlRlyState_B4D = CePMTR_e_ThermalRelay_SNA;
    }

    /* End of Switch: '<S189>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

    /* Inport: '<Root>/VeTHMR_P_CabHeatPwrNeed' */
    (void)Rte_Read_VeTHMR_P_CabHeatPwrNeed_Value(&tmpRead_0);

    /* Inport: '<Root>/VeTAIR_b_WinshldDfrst' */
    (void)Rte_Read_VeTAIR_b_WinshldDfrst_Value(&rtb_Logical1);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/PMTR_MedTEH'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/OutOvd_ThrmRlyCmd'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Thrml_Rly_Logic'
     */
    /* RelationalOperator: '<S175>/Comparison3' incorporates:
     *  Switch: '<S189>/Switch1'
     *  Switch: '<S7>/Switch1'
     */
    VePMTR_b_ThrmlSystEnbl_RlySts_B4D_tmp = VePMTR_e_ThrmlRlyState_B4D;

    /* RelationalOperator: '<S175>/Comparison3' incorporates:
     *  Constant: '<S186>/Constant'
     *  Switch: '<S189>/Switch1'
     */
    VePMTR_b_ThrmlSystEnbl_RlySts_B4D = (CePMTR_e_ThermalRelayClosed == ((uint32)
        VePMTR_e_ThrmlRlyState_B4D));

    /* Update for UnitDelay: '<S171>/Unit Delay' */
    PMTR_ac_DW.UnitDelay_DSTATE_m = VePMTR_b_LatcdImpct;

    /* Update for UnitDelay: '<S171>/Unit Delay2' */
    PMTR_ac_DW.UnitDelay2_DSTATE = PMTR_ac_B.OutportBufferForOut1;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Reduc_Enrgy_Mgmt'
     */
    /* RelationalOperator: '<S8>/Comparison1' */
    rtb_TmpSignalConversionAtVeSSDR_b_EnblTh = !VePMTR_b_REMDisabled;

    /* RelationalOperator: '<S8>/Comparison3' incorporates:
     *  Constant: '<S96>/Constant'
     *  Switch: '<S4>/Switch19'
     */
    rtb_TmpSignalConversionAtVeFSCR_b_RadFan = (((uint32)VePMTR_e_ShippingMode)
        != CePLTR_e_ShipingMode_CUST_MD);

    /* Logic: '<S8>/Logical Operator1' */
    rtb_AND_m = (rtb_Logical1 || (VePMTR_b_BPCM_OVActv));

    /* If: '<S8>/If3' */
    if (rtb_TmpSignalConversionAtVeFSCR_b_RadFan && (!rtb_AND_m))
    {
        /* Outputs for IfAction SubSystem: '<S8>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S104>/Action Port'
         */
        /* RelationalOperator: '<S8>/Comparison8' incorporates:
         *  Constant: '<S134>/Constant'
         *  Merge: '<S8>/Merge3'
         *  SignalConversion generated from: '<S104>/Out1'
         */
        VePMTR_e_VehicleMode = CePMTR_e_ShippingMode;

        /* End of Outputs for SubSystem: '<S8>/If Action Subsystem1' */
    }
    else if (rtb_TmpSignalConversionAtVeFSCR_b_RadFan && rtb_AND_m)
    {
        /* Outputs for IfAction SubSystem: '<S8>/If Action Subsystem5' incorporates:
         *  ActionPort: '<S108>/Action Port'
         */
        /* RelationalOperator: '<S8>/Comparison8' incorporates:
         *  Constant: '<S138>/Constant'
         *  Merge: '<S8>/Merge3'
         *  SignalConversion generated from: '<S108>/Out1'
         */
        VePMTR_e_VehicleMode = CePMTR_e_ShippingNDefrost;

        /* End of Outputs for SubSystem: '<S8>/If Action Subsystem5' */
    }
    else
    {
        rtb_TmpSignalConversionAtVeFSCR_b_HVFunc =
            !rtb_TmpSignalConversionAtVeFSCR_b_RadFan;
        if (rtb_TmpSignalConversionAtVeSSDR_b_EnblTh &&
                rtb_TmpSignalConversionAtVeFSCR_b_HVFunc)
        {
            /* Outputs for IfAction SubSystem: '<S8>/If Action Subsystem3' incorporates:
             *  ActionPort: '<S106>/Action Port'
             */
            /* RelationalOperator: '<S8>/Comparison8' incorporates:
             *  Constant: '<S136>/Constant'
             *  Merge: '<S8>/Merge3'
             *  SignalConversion generated from: '<S106>/Out1'
             */
            VePMTR_e_VehicleMode = CePMTR_e_REMMode;

            /* End of Outputs for SubSystem: '<S8>/If Action Subsystem3' */
        }
        else if ((!rtb_TmpSignalConversionAtVeSSDR_b_EnblTh) &&
                 rtb_TmpSignalConversionAtVeFSCR_b_HVFunc)
        {
            /* Outputs for IfAction SubSystem: '<S8>/If Action Subsystem4' incorporates:
             *  ActionPort: '<S107>/Action Port'
             */
            /* RelationalOperator: '<S8>/Comparison8' incorporates:
             *  Constant: '<S137>/Constant'
             *  Merge: '<S8>/Merge3'
             *  SignalConversion generated from: '<S107>/Out1'
             */
            VePMTR_e_VehicleMode = CePMTR_e_NormalOperation;

            /* End of Outputs for SubSystem: '<S8>/If Action Subsystem4' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S8>/If Action Subsystem2' incorporates:
             *  ActionPort: '<S105>/Action Port'
             */
            /* RelationalOperator: '<S8>/Comparison8' incorporates:
             *  Constant: '<S135>/Constant'
             *  Merge: '<S8>/Merge3'
             *  SignalConversion generated from: '<S105>/Out1'
             */
            VePMTR_e_VehicleMode = CePMTR_e_FaultMode;

            /* End of Outputs for SubSystem: '<S8>/If Action Subsystem2' */
        }
    }

    /* End of If: '<S8>/If3' */

    /* RelationalOperator: '<S8>/Comparison5' incorporates:
     *  Constant: '<S102>/Constant'
     *  Merge: '<S8>/Merge3'
     */
    rtb_TmpSignalConversionAtVeSSDR_b_EnblTh = (((uint32)VePMTR_e_VehicleMode) ==
        CePMTR_e_FaultMode);

    /* RelationalOperator: '<S8>/Comparison8' incorporates:
     *  Constant: '<S100>/Constant'
     */
    rtb_VariantMerge_For_Variant_Source_Va_h = (((uint32)VePMTR_e_VehicleMode) ==
        CePMTR_e_REMMode);

    /* Logic: '<S8>/Logical Operator4' incorporates:
     *  Constant: '<S103>/Constant'
     *  Constant: '<S132>/Calib'
     *  RelationalOperator: '<S8>/Comparison9'
     */
    rtb_TmpSignalConversionAtVeFSCR_b_HVFunc = ((((uint32)VePMTR_e_VehicleMode) ==
        CePMTR_e_ShippingNDefrost) && (KePMTR_b_ShipNDefTimer));

    /* UnitDelay: '<S164>/Unit Delay' incorporates:
     *  Logic: '<S8>/Logical4'
     */
    rtb_UnitDelay_n = ((rtb_TmpSignalConversionAtVeSSDR_b_EnblTh ||
                        rtb_VariantMerge_For_Variant_Source_Va_h) ||
                       rtb_TmpSignalConversionAtVeFSCR_b_HVFunc);

    /* Logic: '<S133>/Logical2' incorporates:
     *  Constant: '<S142>/Calib'
     *  RelationalOperator: '<S133>/Comparison2'
     */
    VePMTR_b_RemTimerCabinHeating = (rtb_UnitDelay_n && (tmpRead_0 >=
        KePMTR_P_CabHeatReqMin));

    /* Logic: '<S156>/Logical1' */
    rtb_Logical1 = !VePMTR_b_RemTimerCabinHeating;

    /* RelationalOperator: '<S156>/Comparison4' incorporates:
     *  UnitDelay: '<S156>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeFSCR_b_RadFan = (rtb_Logical1 ==
        PMTR_ac_DW.UnitDelay_DSTATE_is);

    /* Outputs for Atomic SubSystem: '<S156>/EdgeRising1' */
    /* Logic: '<S158>/AND' incorporates:
     *  Logic: '<S158>/OR1'
     *  UnitDelay: '<S158>/Unit Delay'
     */
    rtb_AND_hf = (rtb_TmpSignalConversionAtVeFSCR_b_RadFan &&
                  (!PMTR_ac_DW.UnitDelay_DSTATE_hi));

    /* Update for UnitDelay: '<S158>/Unit Delay' */
    PMTR_ac_DW.UnitDelay_DSTATE_hi = rtb_TmpSignalConversionAtVeFSCR_b_RadFan;

    /* End of Outputs for SubSystem: '<S156>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S156>/Count Down  Reset Enabled' */
    /* Switch: '<S157>/Switch1' incorporates:
     *  Constant: '<S156>/Constant Value3'
     *  Constant: '<S157>/Constant Value'
     *  Logic: '<S156>/Logical2'
     *  Logic: '<S156>/Logical7'
     *  RelationalOperator: '<S157>/Greater  Than'
     *  Sum: '<S156>/Sum1'
     *  Switch: '<S157>/Switch2'
     *  UnitDelay: '<S157>/Unit Delay'
     */
    if (rtb_AND_hf || (!rtb_TmpSignalConversionAtVeFSCR_b_RadFan))
    {
        /* Switch: '<S133>/Switch4' incorporates:
         *  Constant: '<S123>/Calib'
         *  Constant: '<S127>/Calib'
         *  Switch: '<S133>/Switch3'
         */
        if (rtb_TmpSignalConversionAtVeFSCR_b_HVFunc)
        {
            rtb_LogicalOperator4_0 = KePMTR_Cnt_ShipNDefCabHeatTime;
        }
        else if (rtb_AND_m)
        {
            /* Switch: '<S133>/Switch3' incorporates:
             *  Constant: '<S125>/Calib'
             */
            rtb_LogicalOperator4_0 = KePMTR_Cnt_RemEnblDefCabHeatTime;
        }
        else
        {
            rtb_LogicalOperator4_0 = KePMTR_Cnt_RemEnblCabHeatTime;
        }

        /* End of Switch: '<S133>/Switch4' */
        PMTR_ac_DW.UnitDelay_DSTATE_h = (uint16)((sint32)(((sint32)
            rtb_LogicalOperator4_0) - 1));
    }
    else
    {
        if (((sint32)PMTR_ac_DW.UnitDelay_DSTATE_h) > 0)
        {
            /* UnitDelay: '<S157>/Unit Delay' incorporates:
             *  Constant: '<S157>/Constant Value1'
             *  Sum: '<S157>/Subtraction'
             *  Switch: '<S157>/Switch2'
             */
            PMTR_ac_DW.UnitDelay_DSTATE_h = (uint16)((sint32)(((sint32)
                PMTR_ac_DW.UnitDelay_DSTATE_h) - 1));
        }
    }

    /* End of Switch: '<S157>/Switch1' */
    /* End of Outputs for SubSystem: '<S156>/Count Down  Reset Enabled' */

    /* If: '<S144>/If3' incorporates:
     *  Constant: '<S157>/Constant Value2'
     *  RelationalOperator: '<S157>/Greater  Than1'
     *  UnitDelay: '<S157>/Unit Delay'
     */
    if (!VePMTR_b_RemTimerCabinHeating)
    {
        /* Outputs for IfAction SubSystem: '<S144>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S154>/Action Port'
         */
        PMTR_ac_IfActionSubsystem2_b((&(VePMTR_b_REMCabinHeating)));

        /* End of Outputs for SubSystem: '<S144>/If Action Subsystem2' */
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S156>/Count Down  Reset Enabled' */
        if ((VePMTR_b_RemTimerCabinHeating) && (((sint32)
                PMTR_ac_DW.UnitDelay_DSTATE_h) > 0))
        {
            /* Outputs for IfAction SubSystem: '<S144>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S153>/Action Port'
             */
            PMTR_ac_IfActionSubsystem1((&(VePMTR_b_REMCabinHeating)));

            /* End of Outputs for SubSystem: '<S144>/If Action Subsystem1' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S144>/If Action Subsystem3' incorporates:
             *  ActionPort: '<S155>/Action Port'
             */
            PMTR_ac_IfActionSubsystem2_b((&(VePMTR_b_REMCabinHeating)));

            /* End of Outputs for SubSystem: '<S144>/If Action Subsystem3' */
        }

        /* End of Outputs for SubSystem: '<S156>/Count Down  Reset Enabled' */
    }

    /* End of If: '<S144>/If3' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

    /* Inport: '<Root>/VeCTRR_P_CabCoolPwrNeed' */
    (void)Rte_Read_VeCTRR_P_CabCoolPwrNeed_Value(&tmpRead_2);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/PMTR_MedTEH'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Reduc_Enrgy_Mgmt'
     */
    /* Logic: '<S133>/Logical4' incorporates:
     *  Constant: '<S141>/Calib'
     *  RelationalOperator: '<S133>/Comparison4'
     */
    VePMTR_b_RemTimerCabinCooling = (rtb_UnitDelay_n && (tmpRead_2 >=
        KePMTR_P_CabCoolReqMin));

    /* Logic: '<S168>/Logical1' */
    rtb_TmpSignalConversionAtVeFSCR_b_RadFan = !VePMTR_b_RemTimerCabinCooling;

    /* RelationalOperator: '<S168>/Comparison4' incorporates:
     *  UnitDelay: '<S168>/Unit Delay'
     */
    rtb_UnitDelay_n = (rtb_TmpSignalConversionAtVeFSCR_b_RadFan ==
                       PMTR_ac_DW.UnitDelay_DSTATE_e);

    /* Outputs for Atomic SubSystem: '<S168>/EdgeRising1' */
    /* Logic: '<S170>/AND' incorporates:
     *  Logic: '<S170>/OR1'
     *  UnitDelay: '<S170>/Unit Delay'
     */
    rtb_AND_hf = (rtb_UnitDelay_n && (!PMTR_ac_DW.UnitDelay_DSTATE_ei));

    /* Update for UnitDelay: '<S170>/Unit Delay' */
    PMTR_ac_DW.UnitDelay_DSTATE_ei = rtb_UnitDelay_n;

    /* End of Outputs for SubSystem: '<S168>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S168>/Count Down  Reset Enabled' */
    /* Switch: '<S169>/Switch1' incorporates:
     *  Constant: '<S168>/Constant Value3'
     *  Constant: '<S169>/Constant Value'
     *  Logic: '<S168>/Logical2'
     *  Logic: '<S168>/Logical7'
     *  RelationalOperator: '<S169>/Greater  Than'
     *  Sum: '<S168>/Sum1'
     *  Switch: '<S169>/Switch2'
     *  UnitDelay: '<S169>/Unit Delay'
     */
    if (rtb_AND_hf || (!rtb_UnitDelay_n))
    {
        /* Switch: '<S133>/Switch1' incorporates:
         *  Constant: '<S122>/Calib'
         *  Constant: '<S126>/Calib'
         *  Switch: '<S133>/Switch2'
         */
        if (rtb_TmpSignalConversionAtVeFSCR_b_HVFunc)
        {
            rtb_LogicalOperator4_0 = KePMTR_Cnt_ShipNDefCabCoolTime;
        }
        else if (rtb_AND_m)
        {
            /* Switch: '<S133>/Switch2' incorporates:
             *  Constant: '<S124>/Calib'
             */
            rtb_LogicalOperator4_0 = KePMTR_Cnt_RemEnblDefCabCoolTime;
        }
        else
        {
            rtb_LogicalOperator4_0 = KePMTR_Cnt_RemEnblCabCoolTime;
        }

        /* End of Switch: '<S133>/Switch1' */
        PMTR_ac_DW.UnitDelay_DSTATE_a = (uint16)((sint32)(((sint32)
            rtb_LogicalOperator4_0) - 1));
    }
    else
    {
        if (((sint32)PMTR_ac_DW.UnitDelay_DSTATE_a) > 0)
        {
            /* UnitDelay: '<S169>/Unit Delay' incorporates:
             *  Constant: '<S169>/Constant Value1'
             *  Sum: '<S169>/Subtraction'
             *  Switch: '<S169>/Switch2'
             */
            PMTR_ac_DW.UnitDelay_DSTATE_a = (uint16)((sint32)(((sint32)
                PMTR_ac_DW.UnitDelay_DSTATE_a) - 1));
        }
    }

    /* End of Switch: '<S169>/Switch1' */
    /* End of Outputs for SubSystem: '<S168>/Count Down  Reset Enabled' */

    /* If: '<S146>/If3' incorporates:
     *  Constant: '<S169>/Constant Value2'
     *  RelationalOperator: '<S169>/Greater  Than1'
     *  UnitDelay: '<S169>/Unit Delay'
     */
    if (!VePMTR_b_RemTimerCabinCooling)
    {
        /* Outputs for IfAction SubSystem: '<S146>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S166>/Action Port'
         */
        PMTR_ac_IfActionSubsystem2_b((&(VePMTR_b_REMCabinCooling)));

        /* End of Outputs for SubSystem: '<S146>/If Action Subsystem2' */
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S168>/Count Down  Reset Enabled' */
        if ((VePMTR_b_RemTimerCabinCooling) && (((sint32)
                PMTR_ac_DW.UnitDelay_DSTATE_a) > 0))
        {
            /* Outputs for IfAction SubSystem: '<S146>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S165>/Action Port'
             */
            PMTR_ac_IfActionSubsystem1((&(VePMTR_b_REMCabinCooling)));

            /* End of Outputs for SubSystem: '<S146>/If Action Subsystem1' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S146>/If Action Subsystem3' incorporates:
             *  ActionPort: '<S167>/Action Port'
             */
            PMTR_ac_IfActionSubsystem2_b((&(VePMTR_b_REMCabinCooling)));

            /* End of Outputs for SubSystem: '<S146>/If Action Subsystem3' */
        }

        /* End of Outputs for SubSystem: '<S168>/Count Down  Reset Enabled' */
    }

    /* End of If: '<S146>/If3' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

    /* Inport: '<Root>/VeBTRR_P_BatHeatPwr_NeedLimtd' */
    (void)Rte_Read_VeBTRR_P_BatHeatPwr_NeedLimtd_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/PMTR_MedTEH'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Reduc_Enrgy_Mgmt'
     */
    /* UnitDelay: '<S164>/Unit Delay' incorporates:
     *  Constant: '<S128>/Calib'
     *  Constant: '<S129>/Calib'
     *  Logic: '<S8>/Logical1'
     *  Logic: '<S8>/Logical2'
     *  Logic: '<S8>/Logical3'
     *  Logic: '<S8>/Logical5'
     *  Logic: '<S8>/Logical6'
     */
    rtb_UnitDelay_n = ((rtb_TmpSignalConversionAtVeSSDR_b_EnblTh ||
                        (rtb_TmpSignalConversionAtVeFSCR_b_HVFunc &&
                         (!KePMTR_b_LogtxMode_EnblBattAlways))) ||
                       (rtb_VariantMerge_For_Variant_Source_Va_h &&
                        (!KePMTR_b_REMMode_EnblBattAlways)));

    /* Logic: '<S133>/Logical1' incorporates:
     *  Constant: '<S140>/Calib'
     *  RelationalOperator: '<S133>/Comparison3'
     */
    VePMTR_b_RemTimerBatteryHeating = (rtb_UnitDelay_n && (tmpRead >=
        KePMTR_P_BattHeatReqMin));

    /* Logic: '<S150>/Logical1' */
    rtb_AND_m = !VePMTR_b_RemTimerBatteryHeating;

    /* RelationalOperator: '<S150>/Comparison4' incorporates:
     *  UnitDelay: '<S150>/Unit Delay'
     */
    rtb_AND_hf = (rtb_AND_m == PMTR_ac_DW.UnitDelay_DSTATE_lu);

    /* Outputs for Atomic SubSystem: '<S150>/EdgeRising1' */
    /* Logic: '<S152>/AND' incorporates:
     *  Logic: '<S152>/OR1'
     *  UnitDelay: '<S152>/Unit Delay'
     */
    rtb_AND_mv = (rtb_AND_hf && (!PMTR_ac_DW.UnitDelay_DSTATE_o));

    /* Update for UnitDelay: '<S152>/Unit Delay' */
    PMTR_ac_DW.UnitDelay_DSTATE_o = rtb_AND_hf;

    /* End of Outputs for SubSystem: '<S150>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S150>/Count Down  Reset Enabled' */
    /* Switch: '<S151>/Switch1' incorporates:
     *  Constant: '<S121>/Calib'
     *  Constant: '<S150>/Constant Value3'
     *  Constant: '<S151>/Constant Value'
     *  Logic: '<S150>/Logical2'
     *  Logic: '<S150>/Logical7'
     *  RelationalOperator: '<S151>/Greater  Than'
     *  Sum: '<S150>/Sum1'
     *  Switch: '<S151>/Switch2'
     *  UnitDelay: '<S151>/Unit Delay'
     */
    if (rtb_AND_mv || (!rtb_AND_hf))
    {
        PMTR_ac_DW.UnitDelay_DSTATE_l = (uint16)((sint32)(((sint32)
            KePMTR_Cnt_RemEnblBattHeatTime) - 1));
    }
    else
    {
        if (((sint32)PMTR_ac_DW.UnitDelay_DSTATE_l) > 0)
        {
            /* UnitDelay: '<S151>/Unit Delay' incorporates:
             *  Constant: '<S151>/Constant Value1'
             *  Sum: '<S151>/Subtraction'
             *  Switch: '<S151>/Switch2'
             */
            PMTR_ac_DW.UnitDelay_DSTATE_l = (uint16)((sint32)(((sint32)
                PMTR_ac_DW.UnitDelay_DSTATE_l) - 1));
        }
    }

    /* End of Switch: '<S151>/Switch1' */
    /* End of Outputs for SubSystem: '<S150>/Count Down  Reset Enabled' */

    /* If: '<S143>/If3' incorporates:
     *  Constant: '<S151>/Constant Value2'
     *  RelationalOperator: '<S151>/Greater  Than1'
     *  UnitDelay: '<S151>/Unit Delay'
     */
    if (!VePMTR_b_RemTimerBatteryHeating)
    {
        /* Outputs for IfAction SubSystem: '<S143>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S148>/Action Port'
         */
        PMTR_ac_IfActionSubsystem2((&(VePMTR_b_REMBatteryHeating)));

        /* End of Outputs for SubSystem: '<S143>/If Action Subsystem2' */
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S150>/Count Down  Reset Enabled' */
        if ((VePMTR_b_RemTimerBatteryHeating) && (((sint32)
                PMTR_ac_DW.UnitDelay_DSTATE_l) > 0))
        {
            /* Outputs for IfAction SubSystem: '<S143>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S147>/Action Port'
             */
            PMTR_ac_IfActionSubsystem1((&(VePMTR_b_REMBatteryHeating)));

            /* End of Outputs for SubSystem: '<S143>/If Action Subsystem1' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S143>/If Action Subsystem3' incorporates:
             *  ActionPort: '<S149>/Action Port'
             */
            PMTR_ac_IfActionSubsystem2((&(VePMTR_b_REMBatteryHeating)));

            /* End of Outputs for SubSystem: '<S143>/If Action Subsystem3' */
        }

        /* End of Outputs for SubSystem: '<S150>/Count Down  Reset Enabled' */
    }

    /* End of If: '<S143>/If3' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

    /* Inport: '<Root>/VeBTRR_P_BattCoolPwrNeedLim' */
    (void)Rte_Read_VeBTRR_P_BattCoolPwrNeedLim_Value(&tmpRead_1);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/PMTR_MedTEH'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Reduc_Enrgy_Mgmt'
     */
    /* Logic: '<S133>/Logical3' incorporates:
     *  Constant: '<S139>/Calib'
     *  RelationalOperator: '<S133>/Comparison1'
     */
    VePMTR_b_RemTimerBatteryCooling = (rtb_UnitDelay_n && (tmpRead_1 >=
        KePMTR_P_BattCoolReqMin));

    /* Logic: '<S162>/Logical1' */
    rtb_UnitDelay_n = !VePMTR_b_RemTimerBatteryCooling;

    /* RelationalOperator: '<S162>/Comparison4' incorporates:
     *  UnitDelay: '<S162>/Unit Delay'
     */
    rtb_AND_hf = (rtb_UnitDelay_n == PMTR_ac_DW.UnitDelay_DSTATE_ay);

    /* Outputs for Atomic SubSystem: '<S162>/EdgeRising1' */
    /* Logic: '<S164>/AND' incorporates:
     *  Logic: '<S164>/OR1'
     *  UnitDelay: '<S164>/Unit Delay'
     */
    rtb_AND_mv = (rtb_AND_hf && (!PMTR_ac_DW.UnitDelay_DSTATE_g));

    /* Update for UnitDelay: '<S164>/Unit Delay' */
    PMTR_ac_DW.UnitDelay_DSTATE_g = rtb_AND_hf;

    /* End of Outputs for SubSystem: '<S162>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S162>/Count Down  Reset Enabled' */
    /* Switch: '<S163>/Switch1' incorporates:
     *  Constant: '<S120>/Calib'
     *  Constant: '<S162>/Constant Value3'
     *  Constant: '<S163>/Constant Value'
     *  Logic: '<S162>/Logical2'
     *  Logic: '<S162>/Logical7'
     *  RelationalOperator: '<S163>/Greater  Than'
     *  Sum: '<S162>/Sum1'
     *  Switch: '<S163>/Switch2'
     *  UnitDelay: '<S163>/Unit Delay'
     */
    if (rtb_AND_mv || (!rtb_AND_hf))
    {
        PMTR_ac_DW.UnitDelay_DSTATE_i = (uint16)((sint32)(((sint32)
            KePMTR_Cnt_RemEnblBattCoolTime) - 1));
    }
    else
    {
        if (((sint32)PMTR_ac_DW.UnitDelay_DSTATE_i) > 0)
        {
            /* UnitDelay: '<S163>/Unit Delay' incorporates:
             *  Constant: '<S163>/Constant Value1'
             *  Sum: '<S163>/Subtraction'
             *  Switch: '<S163>/Switch2'
             */
            PMTR_ac_DW.UnitDelay_DSTATE_i = (uint16)((sint32)(((sint32)
                PMTR_ac_DW.UnitDelay_DSTATE_i) - 1));
        }
    }

    /* End of Switch: '<S163>/Switch1' */
    /* End of Outputs for SubSystem: '<S162>/Count Down  Reset Enabled' */

    /* If: '<S145>/If3' incorporates:
     *  Constant: '<S163>/Constant Value2'
     *  RelationalOperator: '<S163>/Greater  Than1'
     *  UnitDelay: '<S163>/Unit Delay'
     */
    if (!VePMTR_b_RemTimerBatteryCooling)
    {
        /* Outputs for IfAction SubSystem: '<S145>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S160>/Action Port'
         */
        PMTR_ac_IfActionSubsystem2_b((&(VePMTR_b_REMBatteryCooling)));

        /* End of Outputs for SubSystem: '<S145>/If Action Subsystem2' */
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S162>/Count Down  Reset Enabled' */
        if ((VePMTR_b_RemTimerBatteryCooling) && (((sint32)
                PMTR_ac_DW.UnitDelay_DSTATE_i) > 0))
        {
            /* Outputs for IfAction SubSystem: '<S145>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S159>/Action Port'
             */
            PMTR_ac_IfActionSubsystem1((&(VePMTR_b_REMBatteryCooling)));

            /* End of Outputs for SubSystem: '<S145>/If Action Subsystem1' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S145>/If Action Subsystem3' incorporates:
             *  ActionPort: '<S161>/Action Port'
             */
            PMTR_ac_IfActionSubsystem2_b((&(VePMTR_b_REMBatteryCooling)));

            /* End of Outputs for SubSystem: '<S145>/If Action Subsystem3' */
        }

        /* End of Outputs for SubSystem: '<S162>/Count Down  Reset Enabled' */
    }

    /* End of If: '<S145>/If3' */

    /* Switch: '<S109>/Switch1' incorporates:
     *  Constant: '<S101>/Constant'
     *  Constant: '<S130>/Calib'
     *  Constant: '<S131>/Calib'
     *  Constant: '<S97>/Constant'
     *  Constant: '<S98>/Constant'
     *  Constant: '<S99>/Constant'
     *  Logic: '<S8>/Logical Operator3'
     *  Logic: '<S8>/Logical Operator5'
     *  RelationalOperator: '<S8>/Comparison10'
     *  RelationalOperator: '<S8>/Comparison4'
     *  RelationalOperator: '<S8>/Comparison6'
     *  RelationalOperator: '<S8>/Comparison7'
     *  Switch: '<S112>/Switch1'
     *  Switch: '<S113>/Switch1'
     *  Switch: '<S114>/Switch1'
     *  Switch: '<S117>/Switch1'
     *  Switch: '<S119>/Switch1'
     */
    if (((uint32)VePMTR_e_VehicleMode) == CePMTR_e_ShippingMode)
    {
        /* DataTypeConversion: '<S8>/Data Type Conversion' incorporates:
         *  Constant: '<S128>/Calib'
         *  Switch: '<S109>/Switch1'
         *  Switch: '<S115>/Switch1'
         */
        VePMTR_b_REM_BattHeatAction_B4D = KePMTR_b_LogtxMode_EnblBattAlways;

        /* DataTypeConversion: '<S8>/Data Type Conversion1' incorporates:
         *  Constant: '<S8>/FALSE Constant5'
         *  Switch: '<S109>/Switch1'
         */
        VePMTR_b_REM_CabHeatAction_B4D = false;

        /* DataTypeConversion: '<S8>/Data Type Conversion2' incorporates:
         *  Constant: '<S128>/Calib'
         *  Switch: '<S109>/Switch1'
         *  Switch: '<S115>/Switch1'
         */
        VePMTR_b_REM_BattCoolAction_B4D = KePMTR_b_LogtxMode_EnblBattAlways;

        /* DataTypeConversion: '<S8>/Data Type Conversion3' incorporates:
         *  Constant: '<S8>/FALSE Constant5'
         *  Switch: '<S109>/Switch1'
         */
        VePMTR_b_REM_CabCoolAction_B4D = false;
    }
    else if ((((uint32)VePMTR_e_VehicleMode) == CePMTR_e_ShippingNDefrost) &&
             (KePMTR_b_ShipNDefEnblNoTimer))
    {
        /* DataTypeConversion: '<S8>/Data Type Conversion' incorporates:
         *  Constant: '<S8>/TRUE Constant7'
         *  Switch: '<S109>/Switch1'
         *  Switch: '<S113>/Switch1'
         */
        VePMTR_b_REM_BattHeatAction_B4D = true;

        /* DataTypeConversion: '<S8>/Data Type Conversion1' incorporates:
         *  Constant: '<S8>/TRUE Constant7'
         *  Switch: '<S109>/Switch1'
         *  Switch: '<S113>/Switch1'
         */
        VePMTR_b_REM_CabHeatAction_B4D = true;

        /* DataTypeConversion: '<S8>/Data Type Conversion2' incorporates:
         *  Constant: '<S8>/TRUE Constant7'
         *  Switch: '<S109>/Switch1'
         *  Switch: '<S113>/Switch1'
         */
        VePMTR_b_REM_BattCoolAction_B4D = true;

        /* DataTypeConversion: '<S8>/Data Type Conversion3' incorporates:
         *  Constant: '<S8>/TRUE Constant7'
         *  Switch: '<S109>/Switch1'
         *  Switch: '<S113>/Switch1'
         */
        VePMTR_b_REM_CabCoolAction_B4D = true;
    }
    else if ((((uint32)VePMTR_e_VehicleMode) == CePMTR_e_ShippingNDefrost) &&
             (KePMTR_b_ShipNDefDsblNoTimer))
    {
        /* DataTypeConversion: '<S8>/Data Type Conversion' incorporates:
         *  Constant: '<S128>/Calib'
         *  Switch: '<S109>/Switch1'
         *  Switch: '<S113>/Switch1'
         *  Switch: '<S114>/Switch1'
         *  Switch: '<S116>/Switch1'
         */
        VePMTR_b_REM_BattHeatAction_B4D = KePMTR_b_LogtxMode_EnblBattAlways;

        /* DataTypeConversion: '<S8>/Data Type Conversion1' incorporates:
         *  Constant: '<S8>/FALSE Constant2'
         *  Switch: '<S109>/Switch1'
         *  Switch: '<S113>/Switch1'
         *  Switch: '<S114>/Switch1'
         */
        VePMTR_b_REM_CabHeatAction_B4D = false;

        /* DataTypeConversion: '<S8>/Data Type Conversion2' incorporates:
         *  Constant: '<S128>/Calib'
         *  Switch: '<S109>/Switch1'
         *  Switch: '<S113>/Switch1'
         *  Switch: '<S114>/Switch1'
         *  Switch: '<S116>/Switch1'
         */
        VePMTR_b_REM_BattCoolAction_B4D = KePMTR_b_LogtxMode_EnblBattAlways;

        /* DataTypeConversion: '<S8>/Data Type Conversion3' incorporates:
         *  Constant: '<S8>/FALSE Constant2'
         *  Switch: '<S109>/Switch1'
         *  Switch: '<S113>/Switch1'
         *  Switch: '<S114>/Switch1'
         */
        VePMTR_b_REM_CabCoolAction_B4D = false;
    }
    else if (rtb_TmpSignalConversionAtVeFSCR_b_HVFunc)
    {
        /* DataTypeConversion: '<S8>/Data Type Conversion' incorporates:
         *  Constant: '<S128>/Calib'
         *  Switch: '<S109>/Switch1'
         *  Switch: '<S110>/Switch1'
         *  Switch: '<S113>/Switch1'
         *  Switch: '<S114>/Switch1'
         *  Switch: '<S119>/Switch1'
         */
        VePMTR_b_REM_BattHeatAction_B4D = ((KePMTR_b_LogtxMode_EnblBattAlways) ||
            (VePMTR_b_REMBatteryHeating));

        /* DataTypeConversion: '<S8>/Data Type Conversion1' incorporates:
         *  Switch: '<S109>/Switch1'
         *  Switch: '<S110>/Switch1'
         *  Switch: '<S113>/Switch1'
         *  Switch: '<S114>/Switch1'
         *  Switch: '<S119>/Switch1'
         */
        VePMTR_b_REM_CabHeatAction_B4D = VePMTR_b_REMCabinHeating;

        /* DataTypeConversion: '<S8>/Data Type Conversion2' incorporates:
         *  Constant: '<S128>/Calib'
         *  Switch: '<S109>/Switch1'
         *  Switch: '<S110>/Switch1'
         *  Switch: '<S113>/Switch1'
         *  Switch: '<S114>/Switch1'
         *  Switch: '<S119>/Switch1'
         */
        VePMTR_b_REM_BattCoolAction_B4D = ((KePMTR_b_LogtxMode_EnblBattAlways) ||
            (VePMTR_b_REMBatteryCooling));

        /* DataTypeConversion: '<S8>/Data Type Conversion3' incorporates:
         *  Switch: '<S109>/Switch1'
         *  Switch: '<S110>/Switch1'
         *  Switch: '<S113>/Switch1'
         *  Switch: '<S114>/Switch1'
         *  Switch: '<S119>/Switch1'
         */
        VePMTR_b_REM_CabCoolAction_B4D = VePMTR_b_REMCabinCooling;
    }
    else if (((uint32)VePMTR_e_VehicleMode) == CePMTR_e_NormalOperation)
    {
        /* DataTypeConversion: '<S8>/Data Type Conversion' incorporates:
         *  Constant: '<S8>/TRUE Constant1'
         *  Switch: '<S109>/Switch1'
         *  Switch: '<S112>/Switch1'
         *  Switch: '<S113>/Switch1'
         *  Switch: '<S114>/Switch1'
         *  Switch: '<S119>/Switch1'
         */
        VePMTR_b_REM_BattHeatAction_B4D = true;

        /* DataTypeConversion: '<S8>/Data Type Conversion1' incorporates:
         *  Constant: '<S8>/TRUE Constant1'
         *  Switch: '<S109>/Switch1'
         *  Switch: '<S112>/Switch1'
         *  Switch: '<S113>/Switch1'
         *  Switch: '<S114>/Switch1'
         *  Switch: '<S119>/Switch1'
         */
        VePMTR_b_REM_CabHeatAction_B4D = true;

        /* DataTypeConversion: '<S8>/Data Type Conversion2' incorporates:
         *  Constant: '<S8>/TRUE Constant1'
         *  Switch: '<S109>/Switch1'
         *  Switch: '<S112>/Switch1'
         *  Switch: '<S113>/Switch1'
         *  Switch: '<S114>/Switch1'
         *  Switch: '<S119>/Switch1'
         */
        VePMTR_b_REM_BattCoolAction_B4D = true;

        /* DataTypeConversion: '<S8>/Data Type Conversion3' incorporates:
         *  Constant: '<S8>/TRUE Constant1'
         *  Switch: '<S109>/Switch1'
         *  Switch: '<S112>/Switch1'
         *  Switch: '<S113>/Switch1'
         *  Switch: '<S114>/Switch1'
         *  Switch: '<S119>/Switch1'
         */
        VePMTR_b_REM_CabCoolAction_B4D = true;
    }
    else if (rtb_VariantMerge_For_Variant_Source_Va_h)
    {
        /* DataTypeConversion: '<S8>/Data Type Conversion' incorporates:
         *  Constant: '<S129>/Calib'
         *  Switch: '<S109>/Switch1'
         *  Switch: '<S111>/Switch1'
         *  Switch: '<S112>/Switch1'
         *  Switch: '<S113>/Switch1'
         *  Switch: '<S114>/Switch1'
         *  Switch: '<S117>/Switch1'
         *  Switch: '<S119>/Switch1'
         */
        VePMTR_b_REM_BattHeatAction_B4D = ((KePMTR_b_REMMode_EnblBattAlways) ||
            (VePMTR_b_REMBatteryHeating));

        /* DataTypeConversion: '<S8>/Data Type Conversion1' incorporates:
         *  Switch: '<S109>/Switch1'
         *  Switch: '<S111>/Switch1'
         *  Switch: '<S112>/Switch1'
         *  Switch: '<S113>/Switch1'
         *  Switch: '<S114>/Switch1'
         *  Switch: '<S117>/Switch1'
         *  Switch: '<S119>/Switch1'
         */
        VePMTR_b_REM_CabHeatAction_B4D = VePMTR_b_REMCabinHeating;

        /* DataTypeConversion: '<S8>/Data Type Conversion2' incorporates:
         *  Constant: '<S129>/Calib'
         *  Switch: '<S109>/Switch1'
         *  Switch: '<S111>/Switch1'
         *  Switch: '<S112>/Switch1'
         *  Switch: '<S113>/Switch1'
         *  Switch: '<S114>/Switch1'
         *  Switch: '<S117>/Switch1'
         *  Switch: '<S119>/Switch1'
         */
        VePMTR_b_REM_BattCoolAction_B4D = ((KePMTR_b_REMMode_EnblBattAlways) ||
            (VePMTR_b_REMBatteryCooling));

        /* DataTypeConversion: '<S8>/Data Type Conversion3' incorporates:
         *  Switch: '<S109>/Switch1'
         *  Switch: '<S111>/Switch1'
         *  Switch: '<S112>/Switch1'
         *  Switch: '<S113>/Switch1'
         *  Switch: '<S114>/Switch1'
         *  Switch: '<S117>/Switch1'
         *  Switch: '<S119>/Switch1'
         */
        VePMTR_b_REM_CabCoolAction_B4D = VePMTR_b_REMCabinCooling;
    }
    else
    {
        /* DataTypeConversion: '<S8>/Data Type Conversion' incorporates:
         *  Switch: '<S109>/Switch1'
         *  Switch: '<S112>/Switch1'
         *  Switch: '<S113>/Switch1'
         *  Switch: '<S114>/Switch1'
         *  Switch: '<S117>/Switch1'
         *  Switch: '<S118>/Switch1'
         *  Switch: '<S119>/Switch1'
         */
        VePMTR_b_REM_BattHeatAction_B4D =
            (rtb_TmpSignalConversionAtVeSSDR_b_EnblTh &&
             (VePMTR_b_REMBatteryHeating));

        /* DataTypeConversion: '<S8>/Data Type Conversion1' incorporates:
         *  Switch: '<S109>/Switch1'
         *  Switch: '<S112>/Switch1'
         *  Switch: '<S113>/Switch1'
         *  Switch: '<S114>/Switch1'
         *  Switch: '<S117>/Switch1'
         *  Switch: '<S118>/Switch1'
         *  Switch: '<S119>/Switch1'
         */
        VePMTR_b_REM_CabHeatAction_B4D =
            (rtb_TmpSignalConversionAtVeSSDR_b_EnblTh &&
             (VePMTR_b_REMCabinHeating));

        /* DataTypeConversion: '<S8>/Data Type Conversion2' incorporates:
         *  Switch: '<S109>/Switch1'
         *  Switch: '<S112>/Switch1'
         *  Switch: '<S113>/Switch1'
         *  Switch: '<S114>/Switch1'
         *  Switch: '<S117>/Switch1'
         *  Switch: '<S118>/Switch1'
         *  Switch: '<S119>/Switch1'
         */
        VePMTR_b_REM_BattCoolAction_B4D =
            (rtb_TmpSignalConversionAtVeSSDR_b_EnblTh &&
             (VePMTR_b_REMBatteryCooling));

        /* DataTypeConversion: '<S8>/Data Type Conversion3' incorporates:
         *  Switch: '<S109>/Switch1'
         *  Switch: '<S112>/Switch1'
         *  Switch: '<S113>/Switch1'
         *  Switch: '<S114>/Switch1'
         *  Switch: '<S117>/Switch1'
         *  Switch: '<S118>/Switch1'
         *  Switch: '<S119>/Switch1'
         */
        VePMTR_b_REM_CabCoolAction_B4D =
            (rtb_TmpSignalConversionAtVeSSDR_b_EnblTh &&
             (VePMTR_b_REMCabinCooling));
    }

    /* End of Switch: '<S109>/Switch1' */

    /* Update for UnitDelay: '<S156>/Unit Delay' */
    PMTR_ac_DW.UnitDelay_DSTATE_is = rtb_Logical1;

    /* Update for UnitDelay: '<S168>/Unit Delay' */
    PMTR_ac_DW.UnitDelay_DSTATE_e = rtb_TmpSignalConversionAtVeFSCR_b_RadFan;

    /* Update for UnitDelay: '<S150>/Unit Delay' */
    PMTR_ac_DW.UnitDelay_DSTATE_lu = rtb_AND_m;

    /* Update for UnitDelay: '<S162>/Unit Delay' */
    PMTR_ac_DW.UnitDelay_DSTATE_ay = rtb_UnitDelay_n;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/OutOvd_ThrmDvceEnb'
     */
    /* Switch: '<S6>/Switch2' incorporates:
     *  Constant: '<S87>/Calib'
     */
    if (KePMTR_b_ThrmlShtdwnReqHonrd_SD)
    {
        /* SignalConversion generated from: '<S1>/ThrmlShtdwnReqHonrd' incorporates:
         *  Constant: '<S86>/Calib'
         *  Outport: '<Root>/VePMTR_b_ThrmlShtdwnReqHonrd'
         */
        (void)Rte_Write_VePMTR_b_ThrmlShtdwnReqHonrd_Value
            (KePMTR_b_ThrmlShtdwnReqHonrd_D);
    }
    else
    {
        /* SignalConversion generated from: '<S1>/ThrmlShtdwnReqHonrd' incorporates:
         *  Outport: '<Root>/VePMTR_b_ThrmlShtdwnReqHonrd'
         */
        (void)Rte_Write_VePMTR_b_ThrmlShtdwnReqHonrd_Value
            (VePMTR_b_ThrmlShtdwnReqHonrd_B4D);
    }

    /* End of Switch: '<S6>/Switch2' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Thrml_Shtdwn_Req'
     */
    /* RelationalOperator: '<S10>/Comparison4' incorporates:
     *  Merge: '<S3>/Merge'
     *  Switch: '<S6>/Switch1'
     */
    VePMTR_b_ThrmlShtdwnReqHonrd_B4D_tmp = VePMTR_e_ThrmlDevEnbl_B4D;

    /* Logic: '<S10>/Logical' incorporates:
     *  Constant: '<S199>/Constant'
     *  Merge: '<S3>/Merge'
     *  RelationalOperator: '<S10>/Comparison4'
     */
    VePMTR_b_ThrmlShtdwnReqHonrd_B4D = ((((((uint32)VePMTR_e_ThrmlDevEnbl_B4D) ==
        CePMTR_e_DISBL_All_Thrml) && (VePMTR_b_RCVRRdyToShtDwn)) &&
        (VePMTR_b_PrepareToShtdwn)) && (VePMTR_b_PMPRRdyToShtDwn));

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/OutOvd_ThrmRlyCmd'
     */
    /* Switch: '<S7>/Switch2' incorporates:
     *  Constant: '<S94>/Calib'
     */
    if (KePMTR_b_ThrmlSystEnbl_RlySts_SD)
    {
        /* Outport: '<Root>/VePMTR_b_ThrmlSystRly_EnblCmnd' incorporates:
         *  Constant: '<S93>/Calib'
         *  SignalConversion generated from: '<S1>/Enbl_RlyCmd_AD'
         */
        (void)Rte_Write_VePMTR_b_ThrmlSystRly_EnblCmnd_Value
            (KePMTR_b_ThrmlSystEnbl_RlySts_D);
    }
    else
    {
        /* Outport: '<Root>/VePMTR_b_ThrmlSystRly_EnblCmnd' incorporates:
         *  SignalConversion generated from: '<S1>/Enbl_RlyCmd_AD'
         */
        (void)Rte_Write_VePMTR_b_ThrmlSystRly_EnblCmnd_Value
            (VePMTR_b_ThrmlSystEnbl_RlyCmnd_B4D);
    }

    /* End of Switch: '<S7>/Switch2' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/OutOvd_RedEngyMgt'
     */
    /* Switch: '<S5>/Switch4' incorporates:
     *  Constant: '<S77>/Calib'
     */
    if (KePMTR_b_REMBattCoolAction_SD)
    {
        /* Outport: '<Root>/VePMTR_b_REM_BattCoolAction' incorporates:
         *  Constant: '<S76>/Calib'
         *  SignalConversion generated from: '<S1>/OutOvd_RedEngyMgt__REM_BatteryCooling'
         */
        (void)Rte_Write_VePMTR_b_REM_BattCoolAction_Value
            (KePMTR_b_REMBattCoolAction_D);
    }
    else
    {
        /* Outport: '<Root>/VePMTR_b_REM_BattCoolAction' incorporates:
         *  SignalConversion generated from: '<S1>/OutOvd_RedEngyMgt__REM_BatteryCooling'
         */
        (void)Rte_Write_VePMTR_b_REM_BattCoolAction_Value
            (VePMTR_b_REM_BattCoolAction_B4D);
    }

    /* End of Switch: '<S5>/Switch4' */

    /* Switch: '<S5>/Switch3' incorporates:
     *  Constant: '<S79>/Calib'
     */
    if (KePMTR_b_REMBattHeatAction_SD)
    {
        /* Outport: '<Root>/VePMTR_b_REM_BattHeatAction' incorporates:
         *  Constant: '<S78>/Calib'
         *  SignalConversion generated from: '<S1>/OutOvd_RedEngyMgt__REM_BatteryHeating'
         */
        (void)Rte_Write_VePMTR_b_REM_BattHeatAction_Value
            (KePMTR_b_REMBattHeatAction_D);
    }
    else
    {
        /* Outport: '<Root>/VePMTR_b_REM_BattHeatAction' incorporates:
         *  SignalConversion generated from: '<S1>/OutOvd_RedEngyMgt__REM_BatteryHeating'
         */
        (void)Rte_Write_VePMTR_b_REM_BattHeatAction_Value
            (VePMTR_b_REM_BattHeatAction_B4D);
    }

    /* End of Switch: '<S5>/Switch3' */

    /* Switch: '<S5>/Switch5' incorporates:
     *  Constant: '<S81>/Calib'
     */
    if (KePMTR_b_REMCabCoolAction_SD)
    {
        /* Outport: '<Root>/VePMTR_b_REM_CabCoolAction' incorporates:
         *  Constant: '<S80>/Calib'
         *  SignalConversion generated from: '<S1>/OutOvd_RedEngyMgt__REM_CabinCooling'
         */
        (void)Rte_Write_VePMTR_b_REM_CabCoolAction_Value
            (KePMTR_b_REMCabCoolAction_D);
    }
    else
    {
        /* Outport: '<Root>/VePMTR_b_REM_CabCoolAction' incorporates:
         *  SignalConversion generated from: '<S1>/OutOvd_RedEngyMgt__REM_CabinCooling'
         */
        (void)Rte_Write_VePMTR_b_REM_CabCoolAction_Value
            (VePMTR_b_REM_CabCoolAction_B4D);
    }

    /* End of Switch: '<S5>/Switch5' */

    /* Switch: '<S5>/Switch2' incorporates:
     *  Constant: '<S83>/Calib'
     */
    if (KePMTR_b_REMCabHeatAction_SD)
    {
        /* Outport: '<Root>/VePMTR_b_REM_CabHeatAction' incorporates:
         *  Constant: '<S82>/Calib'
         *  SignalConversion generated from: '<S1>/OutOvd_RedEngyMgt__REM_CabinHeating'
         */
        (void)Rte_Write_VePMTR_b_REM_CabHeatAction_Value
            (KePMTR_b_REMCabHeatAction_D);
    }
    else
    {
        /* Outport: '<Root>/VePMTR_b_REM_CabHeatAction' incorporates:
         *  SignalConversion generated from: '<S1>/OutOvd_RedEngyMgt__REM_CabinHeating'
         */
        (void)Rte_Write_VePMTR_b_REM_CabHeatAction_Value
            (VePMTR_b_REM_CabHeatAction_B4D);
    }

    /* End of Switch: '<S5>/Switch2' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/OutOvd_ThrmDvceEnb'
     */
    /* Switch: '<S6>/Switch1' incorporates:
     *  Constant: '<S84>/Calib'
     *  Constant: '<S88>/Calib'
     */
    if (KePMTR_b_ThrmlDevisEnbl_SD)
    {
        VePMTR_b_ThrmlShtdwnReqHonrd_B4D_tmp = KePMTR_e_ThrmlDevisEnbl_D;
    }

    /* Outport: '<Root>/VePMTR_e_ThrmlDevEnbl' incorporates:
     *  SignalConversion generated from: '<S1>/OutOvd_ThrmDvceEnb__ThrmlDevisEnbl'
     *  Switch: '<S6>/Switch1'
     */
    (void)Rte_Write_VePMTR_e_ThrmlDevEnbl_Value
        (VePMTR_b_ThrmlShtdwnReqHonrd_B4D_tmp);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/OutOvd_ThrmRlyCmd'
     */
    /* Switch: '<S7>/Switch1' incorporates:
     *  Constant: '<S90>/Calib'
     *  Constant: '<S95>/Calib'
     */
    if (KePMTR_b_ThrmlRlyState_SD)
    {
        VePMTR_b_ThrmlSystEnbl_RlySts_B4D_tmp = KePMTR_e_ThrmlRlyState_D;
    }

    /* Outport: '<Root>/VePMTR_e_ThrmlSystEnbl_RlySts' incorporates:
     *  SignalConversion generated from: '<S1>/RlyStsEnum_AD'
     *  Switch: '<S7>/Switch1'
     */
    (void)Rte_Write_VePMTR_e_ThrmlSystEnbl_RlySts_Value
        (VePMTR_b_ThrmlSystEnbl_RlySts_B4D_tmp);

    /* Switch: '<S7>/Switch3' incorporates:
     *  Constant: '<S92>/Calib'
     */
    if (KePMTR_b_ThrmlRlySts_SD)
    {
        /* Outport: '<Root>/VePMTR_b_ThrmlSystEnbl_RlySts' incorporates:
         *  Constant: '<S91>/Calib'
         *  SignalConversion generated from: '<S1>/RlySts_AD'
         */
        (void)Rte_Write_VePMTR_b_ThrmlSystEnbl_RlySts_Value
            (KePMTR_b_ThrmlRlySts_D);
    }
    else
    {
        /* Outport: '<Root>/VePMTR_b_ThrmlSystEnbl_RlySts' incorporates:
         *  SignalConversion generated from: '<S1>/RlySts_AD'
         */
        (void)Rte_Write_VePMTR_b_ThrmlSystEnbl_RlySts_Value
            (VePMTR_b_ThrmlSystEnbl_RlySts_B4D);
    }

    /* End of Switch: '<S7>/Switch3' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/OutOvd_ThrmDvceEnb'
     */
    /* Switch: '<S6>/Switch' incorporates:
     *  Constant: '<S85>/Calib'
     *  Constant: '<S89>/Calib'
     *  Switch: '<S3>/Switch'
     */
    if (KePMTR_b_ThrmlEnbled_Reason_SD)
    {
        tmp = KePMTR_e_ThrmlEnbled_Reason_D;
    }
    else
    {
        tmp = VePMTR_e_ThrmlEnblRsn_B4D;
    }

    /* Outport: '<Root>/VePMTR_e_ThrmlEnblRsn' incorporates:
     *  SignalConversion generated from: '<S1>/ThrmlEnbledReason'
     *  Switch: '<S6>/Switch'
     */
    (void)Rte_Write_VePMTR_e_ThrmlEnblRsn_Value(tmp);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
}

/* Output function */
FUNC(void, PMTR_CODE) PMTR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/PMTR_PwrOn'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S200>/VePMTR_e_ThrmlEnblRsn_Out_Init' incorporates:
     *  Constant: '<S200>/Const1'
     */
    PMTR_ac_B.OutportBufferForVePMTR_e_ThrmlEnblRsn_Ou = PMTR_ac_ConstB.Const1;

    /* SignalConversion generated from: '<S200>/VePMTR_e_ThrmlDevEnbl_Out_Init' incorporates:
     *  Constant: '<S200>/Const2'
     */
    PMTR_ac_B.OutportBufferForVePMTR_e_ThrmlDevEnbl_Ou = PMTR_ac_ConstB.Const2;

    /* SignalConversion generated from: '<S200>/VePMTR_b_ThrmlSystRly_EnblCmnd_Out_Init' */
    PMTR_ac_B.OutportBufferForVePMTR_b_ThrmlSystRly_En = false;

    /* SignalConversion generated from: '<S200>/VePMTR_b_REM_BattHeatAction_Out_Init' */
    PMTR_ac_B.OutportBufferForVePMTR_b_REM_BattHeatAct = false;

    /* SignalConversion generated from: '<S200>/VePMTR_b_REM_CabHeatAction_Out_Init' */
    PMTR_ac_B.OutportBufferForVePMTR_b_REM_CabHeatActi = false;

    /* SignalConversion generated from: '<S200>/VePMTR_b_REM_BattCoolAction_Out_Init' */
    PMTR_ac_B.OutportBufferForVePMTR_b_REM_BattCoolAct = false;

    /* SignalConversion generated from: '<S200>/VePMTR_b_REM_CabCoolAction_Out_Init' */
    PMTR_ac_B.OutportBufferForVePMTR_b_REM_CabCoolActi = false;

    /* SignalConversion generated from: '<S200>/VePMTR_e_ThrmlSystEnbl_RlySts_Out_Init' incorporates:
     *  Constant: '<S200>/Const8'
     */
    PMTR_ac_B.OutportBufferForVePMTR_e_ThrmlSystEnbl_R = PMTR_ac_ConstB.Const8;

    /* SignalConversion generated from: '<S200>/VePMTR_b_ThrmlSystEnbl_RlySts_Out_Init' */
    PMTR_ac_B.OutportBufferForVePMTR_b_ThrmlSystEnbl_R = false;

    /* SignalConversion generated from: '<S200>/VePMTR_b_ThrmlShtdwnReqHonrd_Out_Init' */
    PMTR_ac_B.OutportBufferForVePMTR_b_ThrmlShtdwnReqH = false;

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VePMTR_b_REM_BattCoolAction' incorporates:
     *  SignalConversion generated from: '<S2>/VePMTR_b_REM_BattCoolAction_Out_Init'
     */
    (void)Rte_Write_VePMTR_b_REM_BattCoolAction_Value
        (PMTR_ac_B.OutportBufferForVePMTR_b_REM_BattCoolAct);

    /* Outport: '<Root>/VePMTR_b_REM_BattHeatAction' incorporates:
     *  SignalConversion generated from: '<S2>/VePMTR_b_REM_BattHeatAction_Out_Init'
     */
    (void)Rte_Write_VePMTR_b_REM_BattHeatAction_Value
        (PMTR_ac_B.OutportBufferForVePMTR_b_REM_BattHeatAct);

    /* Outport: '<Root>/VePMTR_b_REM_CabCoolAction' incorporates:
     *  SignalConversion generated from: '<S2>/VePMTR_b_REM_CabCoolAction_Out_Init'
     */
    (void)Rte_Write_VePMTR_b_REM_CabCoolAction_Value
        (PMTR_ac_B.OutportBufferForVePMTR_b_REM_CabCoolActi);

    /* Outport: '<Root>/VePMTR_b_REM_CabHeatAction' incorporates:
     *  SignalConversion generated from: '<S2>/VePMTR_b_REM_CabHeatAction_Out_Init'
     */
    (void)Rte_Write_VePMTR_b_REM_CabHeatAction_Value
        (PMTR_ac_B.OutportBufferForVePMTR_b_REM_CabHeatActi);

    /* Outport: '<Root>/VePMTR_b_ThrmlShtdwnReqHonrd' incorporates:
     *  SignalConversion generated from: '<S2>/VePMTR_b_ThrmlShtdwnReqHonrd_Out_Init'
     */
    (void)Rte_Write_VePMTR_b_ThrmlShtdwnReqHonrd_Value
        (PMTR_ac_B.OutportBufferForVePMTR_b_ThrmlShtdwnReqH);

    /* Outport: '<Root>/VePMTR_b_ThrmlSystEnbl_RlySts' incorporates:
     *  SignalConversion generated from: '<S2>/VePMTR_b_ThrmlSystEnbl_RlySts_Out_Init'
     */
    (void)Rte_Write_VePMTR_b_ThrmlSystEnbl_RlySts_Value
        (PMTR_ac_B.OutportBufferForVePMTR_b_ThrmlSystEnbl_R);

    /* Outport: '<Root>/VePMTR_b_ThrmlSystRly_EnblCmnd' incorporates:
     *  SignalConversion generated from: '<S2>/VePMTR_b_ThrmlSystRly_EnblCmnd_Out_Init'
     */
    (void)Rte_Write_VePMTR_b_ThrmlSystRly_EnblCmnd_Value
        (PMTR_ac_B.OutportBufferForVePMTR_b_ThrmlSystRly_En);

    /* Outport: '<Root>/VePMTR_e_ThrmlDevEnbl' incorporates:
     *  SignalConversion generated from: '<S200>/VePMTR_e_ThrmlDevEnbl_Out_Init'
     *  SignalConversion generated from: '<S2>/VePMTR_e_ThrmlDevEnbl_Out_Init'
     */
    (void)Rte_Write_VePMTR_e_ThrmlDevEnbl_Value
        (PMTR_ac_B.OutportBufferForVePMTR_e_ThrmlDevEnbl_Ou);

    /* Outport: '<Root>/VePMTR_e_ThrmlEnblRsn' incorporates:
     *  SignalConversion generated from: '<S200>/VePMTR_e_ThrmlEnblRsn_Out_Init'
     *  SignalConversion generated from: '<S2>/VePMTR_e_ThrmlEnblRsn_Out_Init'
     */
    (void)Rte_Write_VePMTR_e_ThrmlEnblRsn_Value
        (PMTR_ac_B.OutportBufferForVePMTR_e_ThrmlEnblRsn_Ou);

    /* Outport: '<Root>/VePMTR_e_ThrmlSystEnbl_RlySts' incorporates:
     *  SignalConversion generated from: '<S200>/VePMTR_e_ThrmlSystEnbl_RlySts_Out_Init'
     *  SignalConversion generated from: '<S2>/VePMTR_e_ThrmlSystEnbl_RlySts_Out_Init'
     */
    (void)Rte_Write_VePMTR_e_ThrmlSystEnbl_RlySts_Value
        (PMTR_ac_B.OutportBufferForVePMTR_e_ThrmlSystEnbl_R);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, PMTR_CODE) PMTR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */
    {
        PMTR_ac_B.OutportBufferForVePMTR_e_ThrmlSystEnbl_R =
            CePMTR_e_ThermalRelay_SNA;
    }

    /* custom signals */
    VePMTR_e_ThrmlRlyState_B4D = CePMTR_e_ThermalRelay_SNA;

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/PMTR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S200>/VePMTR_e_ThrmlEnblRsn_Out_Init' incorporates:
     *  Constant: '<S200>/Const1'
     */
    PMTR_ac_B.OutportBufferForVePMTR_e_ThrmlEnblRsn_Ou = PMTR_ac_ConstB.Const1;

    /* SystemInitialize for SignalConversion generated from: '<S200>/VePMTR_e_ThrmlDevEnbl_Out_Init' incorporates:
     *  Constant: '<S200>/Const2'
     */
    PMTR_ac_B.OutportBufferForVePMTR_e_ThrmlDevEnbl_Ou = PMTR_ac_ConstB.Const2;

    /* SystemInitialize for SignalConversion generated from: '<S200>/VePMTR_e_ThrmlSystEnbl_RlySts_Out_Init' incorporates:
     *  Constant: '<S200>/Const8'
     */
    PMTR_ac_B.OutportBufferForVePMTR_e_ThrmlSystEnbl_R = PMTR_ac_ConstB.Const8;

    /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/PMTR_MedTEH'
     */
    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/EnblReas_DvceEnbl'
     */
    /* SystemInitialize for Enabled SubSystem: '<S11>/Subsystem2' */
    /* SystemInitialize for SignalConversion generated from: '<S25>/Out1' incorporates:
     *  Outport: '<S25>/Out1'
     */
    PMTR_ac_B.OutportBufferForOut1_b = true;

    /* End of SystemInitialize for SubSystem: '<S11>/Subsystem2' */

    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Thrml_Rly_Logic'
     */
    /* SystemInitialize for Enabled SubSystem: '<S171>/Subsystem2' */
    /* SystemInitialize for SignalConversion generated from: '<S180>/Out1' incorporates:
     *  Outport: '<S180>/Out1'
     */
    PMTR_ac_B.OutportBufferForOut1 = true;

    /* End of SystemInitialize for SubSystem: '<S171>/Subsystem2' */

    /* SystemInitialize for Switch: '<S189>/Switch1' incorporates:
     *  Outport: '<S9>/ThrmlRlyState_B4D'
     */
    VePMTR_e_ThrmlRlyState_B4D = CePMTR_e_ThermalRelay_SNA;

    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

    /* SystemInitialize for Outport: '<Root>/VePMTR_e_ThrmlEnblRsn' incorporates:
     *  Merge: '<Root>/Merge_Outport_1'
     */
    (void)Rte_Write_VePMTR_e_ThrmlEnblRsn_Value
        (CePMTR_e_EnblKey_Acc_or_DrvDoorAjr);

    /* SystemInitialize for Outport: '<Root>/VePMTR_e_ThrmlDevEnbl' incorporates:
     *  Merge: '<Root>/Merge_Outport_2'
     */
    (void)Rte_Write_VePMTR_e_ThrmlDevEnbl_Value(CePMTR_e_DISBL_All_Thrml);

    /* SystemInitialize for Outport: '<Root>/VePMTR_e_ThrmlSystEnbl_RlySts' incorporates:
     *  Merge: '<Root>/Merge_Outport_8'
     */
    (void)Rte_Write_VePMTR_e_ThrmlSystEnbl_RlySts_Value
        (CePMTR_e_ThermalRelay_SNA);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
