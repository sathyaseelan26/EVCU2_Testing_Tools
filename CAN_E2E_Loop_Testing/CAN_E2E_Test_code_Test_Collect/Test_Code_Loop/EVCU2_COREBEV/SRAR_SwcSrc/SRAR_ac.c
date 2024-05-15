/*
 * File: SRAR_ac.c
 *
 * Code generated for Simulink model 'SRAR_ac'.
 *
 * Model version                  : 9.201
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 19:02:20 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SRAR_ac.h"
#include "look1_iflf_binlcapw.h"

/* Named constants for Chart: '<S52>/Chart' */
#define SRAR_ac_IN_Clearing            ((uint8)1U)
#define SRAR_ac_IN_FAULTY              ((uint8)1U)
#define SRAR_ac_IN_HEALTHY             ((uint8)2U)
#define SRAR_ac_IN_NO_ACTIVE_CHILD     ((uint8)0U)
#define SRAR_ac_IN_Update              ((uint8)1U)
#define SRAR_ac_IN_Waiting             ((uint8)2U)

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_SRAR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(boolean, SRAR_VAR_INIT) KaSRAR_b_AutoStartStSelect[29] =
{
    0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by:
                                        * '<S1583>/Calib'
                                        * '<S2339>/Calib'
                                        */

static volatile CONST(uint16, SRAR_VAR_INIT) KeSRAR_Cnt_RstSingleCylMisfireCnt =
    5U;                                /* Referenced by: '<S1641>/Calib' */
static volatile CONST(uint16, SRAR_VAR_INIT) KeSRAR_Cnt_StpChargingMaxCnt = 3U;/* Referenced by: '<S359>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_M_CreepTorqThrsh = 10.0F;/* Referenced by: '<S158>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_M_RedInputTrqThresh =
    1000.0F;                           /* Referenced by: '<S179>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_M_RegenBrkAxleTrqReq =
    10.0F;                             /* Referenced by: '<S195>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT)
    KeSRAR_M_SnsdEndTrq_MisfireRstThresh = 20.0F;/* Referenced by: '<S1642>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_Pct_MinSOCFailedAutoStart =
    30.0F;                             /* Referenced by: '<S1633>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_Pct_MinSOCForStrtInNeut =
    25.0F;                             /* Referenced by: '<S1661>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_Pct_MinSOCRunOutofFuel =
    35.0F;                             /* Referenced by: '<S1654>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_Pct_SOCFuelPmpEngOffOvrdLSP
    = 17.0F;                           /* Referenced by: '<S1670>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_Pct_SOCFuelPmpEngOffOvrdRSP
    = 23.0F;                           /* Referenced by: '<S1671>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_Pct_SOC_EngSysDsblSOCThres =
    35.0F;                             /* Referenced by: '<S1474>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT)
    KeSRAR_Pct_SOC_MultiCylinMisfireDetcSOCThres = 35.0F;/* Referenced by: '<S1645>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT)
    KeSRAR_Pct_SOC_SingleCylinMisfireDetcSOCThres = 40.0F;/* Referenced by: '<S1649>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT)
    KeSRAR_Pct_SOC_VehShutOffSoonSOCThres = 35.0F;/* Referenced by: '<S1475>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT)
    KeSRAR_Pct_TCMFlt04_ShutOffSoonSOCThres = 5.0F;/* Referenced by: '<S1476>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_T_BatModTmpHighLSP = 30.0F;/* Referenced by: '<S2205>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_T_BatModTmpHighRSP = 30.0F;/* Referenced by: '<S2206>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_T_BatModTmpLowLSP = 30.0F;/* Referenced by: '<S2207>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_T_BatModTmpLowRSP = 30.0F;/* Referenced by: '<S2208>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT)
    KeSRAR_T_InvrtrTemp_ReducePerf1Threshld = 80.0F;/* Referenced by: '<S2222>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_T_MtrA_Temp_Lim1 = 80.0F;/* Referenced by: '<S2144>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_T_MtrA_Temp_Lim2_wo_delay =
    80.0F;                             /* Referenced by: '<S2145>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_T_MtrB_Temp_Lim1 = 80.0F;/* Referenced by: '<S2146>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_T_MtrB_Temp_Lim2_wo_delay =
    80.0F;                             /* Referenced by: '<S2147>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT)
    KeSRAR_T_MtrTemp_ReducePerf1Threshld = 80.0F;/* Referenced by: '<S2223>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_T_PsvPmpClnt_RSP = 85.0F;/* Referenced by: '<S2224>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_U_APM_VoltageMinHigh =
    10.5F;                             /* Referenced by: '<S1742>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_U_APM_VoltageMinLow = 10.0F;/* Referenced by: '<S1743>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_U_BeltSlipVoltThrshld =
    11.8F;                             /* Referenced by: '<S2128>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_U_IBSBattThrldShtDwn = 9.8F;/* Referenced by: '<S1728>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_U_IDCMFail_Threshold =
    11.8F;                             /* Referenced by: '<S1776>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_U_MtrAInvrtrFailVoltThrshld
    = 11.8F;                           /* Referenced by: '<S2131>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_U_VltThrehold1LSP = 11.5F;/* Referenced by: '<S1738>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_U_VltThrehold1RSP = 12.0F;/* Referenced by: '<S1739>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_V_VlmFldUppSumpHys_LowLmt =
    10.0F;                             /* Referenced by: '<S1597>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_V_VlmFldUppSumpHys_UppLmt =
    20.0F;                             /* Referenced by: '<S1598>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_ABSCM_BusA_SNA_Disable =
    0;                                 /* Referenced by: '<S1433>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_ABSCM_BusB_SNA_Disable =
    0;                                 /* Referenced by: '<S2297>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT)
    KeSRAR_b_APMDsblLowVoltNOKNoPSA_CreepTorqMode = 0;/* Referenced by: '<S1722>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT)
    KeSRAR_b_APMDsblLowVoltNOKNoPSA_ReducedPerfMode = 0;/* Referenced by: '<S1723>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT)
    KeSRAR_b_APMDsblLowVoltNOK_CreepTorqMode = 1;/* Referenced by: '<S1729>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT)
    KeSRAR_b_APMDsblLowVoltNOK_FltShtDwnCmd = 0;/* Referenced by: '<S1730>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT)
    KeSRAR_b_APMDsblLowVoltNOK_ReducedPerfMode = 1;/* Referenced by: '<S1731>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_AeCoastReady = 0;/* Referenced by: '<S2254>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_AllowG2 = 0;/* Referenced by: '<S986>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT)
    KeSRAR_b_AuxPumpFail_TempEngShtDwnEnbl = 0;/* Referenced by: '<S129>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_BCM_SNA_Disable = 0;/* Referenced by: '<S2298>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_BEV_ThermalLdEnbl = 0;/* Referenced by: '<S2209>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_BSGFlt_Latch_DebDisbl = 0;/* Referenced by: '<S560>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_BSGFlt_Recov_DebDisbl = 0;/* Referenced by: '<S581>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT)
    KeSRAR_b_BatCntctrVehShutOffSoonEnbl = 1;/* Referenced by: '<S1477>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT)
    KeSRAR_b_CANA_CADM_ADCAM_SNA_Disable = 0;/* Referenced by: '<S1448>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT)
    KeSRAR_b_CANB_CADM_ADCAM_SNA_Disable = 0;/* Referenced by: '<S1449>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_CAN_HybFeedback_Dsbl = 0;/* Referenced by: '<S538>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_CInvalidDsbl = 0;/* Referenced by: '<S2348>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_ClntTempHigh_Enable = 1;/* Referenced by: '<S2225>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_CreepTorqMode_DebDisbl =
    1;                                 /* Referenced by: '<S266>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_CreepTorqMode_Latch = 0;/* Referenced by: '<S267>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_CreepTorqMode_OvrdEnbl =
    0;                                 /* Referenced by: '<S268>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_CreepTorqMode_OvrdVal = 0;/* Referenced by: '<S269>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_DisableAEMD_Latch = 0;/* Referenced by: '<S311>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_DisableAEMD_OvrdEnbl = 0;/* Referenced by: '<S312>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_DisableAEMD_OvrdVal = 0;/* Referenced by: '<S313>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_DisablePwrPanel_DebDisbl =
    0;                                 /* Referenced by: '<S404>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_DisableRaceStart_DebDisbl
    = 0;                               /* Referenced by: '<S426>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT)
    KeSRAR_b_DisblTCaseSpdSync_DebDisbl = 0;/* Referenced by: '<S448>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_DrvAllwd_DebDisbl = 1;/* Referenced by: '<S471>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_DrvAllwd_OvrdEnbl = 0;/* Referenced by: '<S472>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_DrvAllwd_OvrdVal = 0;/* Referenced by: '<S473>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_DryRunFlt_Enable = 1;/* Referenced by: '<S2226>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_DryRunFlt_PimTemp_Select =
    1;                                 /* Referenced by: '<S2227>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_DsblChrgEnbl_DebDisbl = 1;/* Referenced by: '<S340>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_DsblChrgEnbl_Latch = 1;/* Referenced by: '<S341>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_DsblChrgEnbl_OvrdEnbl = 0;/* Referenced by: '<S342>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_DsblChrgEnbl_OvrdVal = 0;/* Referenced by: '<S343>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_DsblEngStrtTypHVBatErr =
    0;                                 /* Referenced by: '<S48>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_DsblInvA_OvrdEnbl = 0;/* Referenced by: '<S539>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_DsblInvA_OvrdVal = 0;/* Referenced by: '<S540>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_DsblInvA_Recov_DebDisbl =
    0;                                 /* Referenced by: '<S599>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_DsblInvB_Recov_DebDisbl =
    0;                                 /* Referenced by: '<S618>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_DsblLatchSingleCynMisfire
    = 0;                               /* Referenced by: '<S1643>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_DsblNextKeyOvrdON = 0;/* Referenced by: '<S66>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_DsblTCMInvldData_FstPass =
    0;                                 /* Referenced by: '<S2413>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_DsblTCMInvldData_Nturb =
    0;                                 /* Referenced by: '<S2414>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_Dsbl_ST2_C1_ST1DsblAEMD =
    1;                                 /* Referenced by: '<S2385>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT)
    KeSRAR_b_Dsbl_ST2_C1_ST1_DsblDrvAllwd = 1;/* Referenced by: '<S2386>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_ECMFeedback_HybFdkECMEnbl
    = 1;                               /* Referenced by: '<S561>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_EPB_Hold_Req_DebDisbl = 0;/* Referenced by: '<S497>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_EPB_Hold_Req_Latch = 0;/* Referenced by: '<S498>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_EPB_Hold_Req_OvrdEnbl = 0;/* Referenced by: '<S499>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_EPB_Hold_Req_OvrdVal = 0;/* Referenced by: '<S500>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_EnableLoC_M182 = 0;/* Referenced by: '<S2173>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_EnableLoC_VFBEV = 0;/* Referenced by: '<S2174>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_EnblBeltSlipFailure = 0;/* Referenced by: '<S2129>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_EnblClch1FailAction = 1;/* Referenced by: '<S2325>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_EnblClch2FailAction = 1;/* Referenced by: '<S2326>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_EnblCntctrOpnReq_RWD = 1;/* Referenced by: '<S1709>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_EnblCntctrPndng_RWD = 1;/* Referenced by: '<S1710>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_EnblDrvMntr = 0;/* Referenced by: '<S164>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT)
    KeSRAR_b_EngOffKeyStrtinNtrlOnly_EnblTurnOffTurtleLte = 1;/* Referenced by: '<S130>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_EngOffVehShutoffSoonEnbl =
    1;                                 /* Referenced by: '<S1478>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_EngOnOffPSAoffEnbl = 0;/* Referenced by: '<S139>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_EngStrtStpEngRun_DebDisbl
    = 1;                               /* Referenced by: '<S801>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_EngStrtStpEngRun_Latch =
    0;                                 /* Referenced by: '<S802>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_EngStrtStpEngRun_OvrdEnbl
    = 0;                               /* Referenced by: '<S803>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_EngStrtStpEngRun_OvrdVal =
    0;                                 /* Referenced by: '<S804>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT)
    KeSRAR_b_EngStrtStpEngShtDwn_DebDisbl = 1;/* Referenced by: '<S1338>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_EngStrtStpEngShtDwn_Latch
    = 0;                               /* Referenced by: '<S1339>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT)
    KeSRAR_b_EngStrtStpEngShtDwn_OvrdEnbl = 0;/* Referenced by: '<S1340>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT)
    KeSRAR_b_EngStrtStpEngShtDwn_OvrdVal = 0;/* Referenced by: '<S1341>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT)
    KeSRAR_b_EngSysLowFuel_InhibitGear2Enbl = 0;/* Referenced by: '<S987>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT)
    KeSRAR_b_FldAutoStrt_EngStrtStpEngShtDwnEnbl = 1;/* Referenced by: '<S1592>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_FltShtDwnBPClsd_Latch = 0;/* Referenced by: '<S1251>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_FltShtDwnBPClsd_OvrdEnbl =
    0;                                 /* Referenced by: '<S1252>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_FltShtDwnBPClsd_OvrdVal =
    0;                                 /* Referenced by: '<S1253>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_FltShtDwnCmndRet_Latch =
    0;                                 /* Referenced by: '<S1279>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_FltShtDwnCmndRet_OvrdEnbl
    = 0;                               /* Referenced by: '<S1280>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_FltShtDwnCmndRet_OvrdVal =
    0;                                 /* Referenced by: '<S1281>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_FltShtDwnCmnd_Latch = 0;/* Referenced by: '<S1222>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_FltShtDwnCmnd_OvrdEnbl =
    0;                                 /* Referenced by: '<S1223>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_FltShtDwnCmnd_OvrdVal = 0;/* Referenced by: '<S1224>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_FltShtDwnPrecrankEnbl = 0;/* Referenced by: '<S1740>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_G1_InhibtGSI_Enbl = 1;/* Referenced by: '<S1187>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_G2_InhibtGSI_Enbl = 1;/* Referenced by: '<S1188>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_G3_InhibtGSI_Enbl = 1;/* Referenced by: '<S1189>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_G4_InhibtGSI_Enbl = 1;/* Referenced by: '<S1190>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_HybAltrntrMd_Latch = 0;/* Referenced by: '<S694>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT)
    KeSRAR_b_HybAltrntrMd_Latch_DebDisbl = 0;/* Referenced by: '<S695>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_HybFdBkPropSysMdChk_Enbl =
    0;                                 /* Referenced by: '<S541>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_HybFdkBk_ECM_Latch = 1;/* Referenced by: '<S562>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_HybFdkECM_Init = 1;/* Referenced by: '<S2428>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_HybFeedback_ECM_OvrdEnbl =
    0;                                 /* Referenced by: '<S542>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_HybFeedback_ECM_OvrdVal =
    0;                                 /* Referenced by: '<S543>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_HybPwrtrnRdcdPerfCmndEnbl
    = 1;                               /* Referenced by: '<S132>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_IDCMFailChrgInhibitedEnbl
    = 1;                               /* Referenced by: '<S1777>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_IDCMFailChrgngAllwdEnbl =
    1;                                 /* Referenced by: '<S1778>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_ImmedStop_HistoryInfoEnbl
    = 1;                               /* Referenced by: '<S231>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_InhSSCreepTrqActive_Enbl =
    0;                                 /* Referenced by: '<S30>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT)
    KeSRAR_b_Inhibit_AWDTerrainMode_OvrdEnbl = 0;/* Referenced by: '<S924>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT)
    KeSRAR_b_Inhibit_AWDTerrainMode_OvrdVal = 0;/* Referenced by: '<S925>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT)
    KeSRAR_b_Inhibit_DriveMode_OvrdEnbl = 0;/* Referenced by: '<S944>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_Inhibit_DriveMode_OvrdVal
    = 0;                               /* Referenced by: '<S945>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT)
    KeSRAR_b_Inhibit_G2_ActuatorFlt_InhibitGear2Enbl = 1;/* Referenced by: '<S988>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_Inhibit_Gear1_OvrdEnbl =
    1;                                 /* Referenced by: '<S964>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_Inhibit_Gear1_OvrdVal = 0;/* Referenced by: '<S965>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_Inhibit_Gear2_OvrdEnbl =
    0;                                 /* Referenced by: '<S989>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_Inhibit_Gear2_OvrdVal = 0;/* Referenced by: '<S990>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_Inhibit_Gear3_OvrdEnbl =
    1;                                 /* Referenced by: '<S1028>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_Inhibit_Gear3_OvrdVal = 0;/* Referenced by: '<S1029>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_Inhibit_Gear4_OvrdEnbl =
    1;                                 /* Referenced by: '<S1048>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_Inhibit_Gear4_OvrdVal = 0;/* Referenced by: '<S1049>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT)
    KeSRAR_b_Inhibit_M2_ActuatorFlt_InhibitMode2Enbl = 1;/* Referenced by: '<S1069>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_Inhibit_Mode1_OvrdEnbl =
    1;                                 /* Referenced by: '<S1070>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_Inhibit_Mode1_OvrdVal = 0;/* Referenced by: '<S1071>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_Inhibit_Mode2_OvrdEnbl =
    1;                                 /* Referenced by: '<S1072>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_Inhibit_Mode2_OvrdVal = 0;/* Referenced by: '<S1073>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_Inhibit_Neutral_OvrdEnbl =
    0;                                 /* Referenced by: '<S1166>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_Inhibit_Neutral_OvrdVal =
    0;                                 /* Referenced by: '<S1167>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT)
    KeSRAR_b_Inhibit_RWDTerrainMode_OvrdEnbl = 0;/* Referenced by: '<S1109>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT)
    KeSRAR_b_Inhibit_RWDTerrainMode_OvrdVal = 0;/* Referenced by: '<S1110>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_InplantMdDsbl = 1;/* Referenced by: '<S2299>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_InplntCreepMdEnbl = 1;/* Referenced by: '<S22>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_K0AsyncCloseOvrd = 1;/* Referenced by: '<S2136>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_LIN1BusOffEnbl = 0;/* Referenced by: '<S2228>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_LIN2_3BusOffEnbl = 0;/* Referenced by: '<S2229>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_LOCECM_DsblInvAEnbl = 0;/* Referenced by: '<S600>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_LOC_PECP2_Ovrd = 0;/* Referenced by: '<S2230>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_LOC_PECP_Enable = 1;/* Referenced by: '<S2231>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_LOC_PECP_Ovrd = 0;/* Referenced by: '<S2232>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_LTCL_DryRun_FltEnable = 0;/* Referenced by: '<S2233>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_LTCL_FunPer_FltEnable = 1;/* Referenced by: '<S2234>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT)
    KeSRAR_b_LTPP_FunPer_FltDtct_Enable = 1;/* Referenced by: '<S2235>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_LTPsvPumpDryRun_Enable =
    1;                                 /* Referenced by: '<S2236>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_LoCFailStsEnblP4 = 1;/* Referenced by: '<S1526>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_LoCIDCM_Enbl = 0;/* Referenced by: '<S1764>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_LowFuel_TempEngShtDwnEnbl
    = 1;                               /* Referenced by: '<S131>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT)
    KeSRAR_b_Lv1PwrfreeAcrtTrq_TrqEnblRq_TCM = 0;/* Referenced by: '<S1616>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_M1_InhibtGSI_Enbl = 1;/* Referenced by: '<S1191>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_M2_InhibtGSI_Enbl = 1;/* Referenced by: '<S1192>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_MtrCInvrtr_FltEnbl = 0;/* Referenced by: '<S2424>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_MtrCZeroTrq_DebDisbl = 0;/* Referenced by: '<S636>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT)
    KeSRAR_b_MtrSystemActive_HistoryInfoEnbl = 0;/* Referenced by: '<S232>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT)
    KeSRAR_b_MultiCylinMisfireDetc_InhibitGearsEnbl = 0;/* Referenced by: '<S1646>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT)
    KeSRAR_b_MultiCylinMisfireDetc_KeepEngRunEnbl = 0;/* Referenced by: '<S1647>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT)
    KeSRAR_b_MultiCylinMisfireDetc_LimitTrqEnbl = 0;/* Referenced by: '<S1648>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_NeutAllwd_DebDisbl = 1;/* Referenced by: '<S1196>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_NeutAllwd_OvrdEnbl = 0;/* Referenced by: '<S1197>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_NeutAllwd_OvrdVal = 0;/* Referenced by: '<S1198>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_Neutrl_InhibtGSI_Enbl = 1;/* Referenced by: '<S1193>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_NzeroPhsLimpD6Enbl = 0;/* Referenced by: '<S2349>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_OpnBattContc_Latch = 1;/* Referenced by: '<S655>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT)
    KeSRAR_b_OpnBattContc_Latch_DebDisbl = 0;/* Referenced by: '<S656>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_OpnBattContc_OvrdEnbl = 0;/* Referenced by: '<S544>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_OpnBattContc_OvrdVal = 0;/* Referenced by: '<S545>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT)
    KeSRAR_b_OpnBattContc_Recov_DebDisbl = 0;/* Referenced by: '<S675>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_P2EngOffON_LOC_Enable = 0;/* Referenced by:
                                                                      * '<S1584>/Calib'
                                                                      * '<S2132>/Calib'
                                                                      */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_P4_Select = 0;/* Referenced by: '<S1624>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_PPCTIS_Enable = 1;/* Referenced by: '<S2237>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_PSANotActvEnbl = 1;/* Referenced by: '<S2238>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_PostCodeClrDiagDsbEnbl =
    0;                                 /* Referenced by:
                                        * '<S233>/Calib'
                                        * '<S1468>/Calib'
                                        */
static volatile CONST(boolean, SRAR_VAR_INIT)
    KeSRAR_b_RBS_CommFlt_EngStrtStpEngRunEnbl = 1;/* Referenced by: '<S805>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_ReducedPerf2_DebDisbl = 0;/* Referenced by: '<S886>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_ReducedPerf2_Latch = 0;/* Referenced by: '<S887>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_ReducedPerf2_OvrdEnbl = 0;/* Referenced by: '<S888>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_ReducedPerf2_OvrdVal = 0;/* Referenced by: '<S889>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_ReducedPerfModeEnbl = 1;/* Referenced by: '<S133>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_ReducedPerf_DebDisbl = 1;/* Referenced by: '<S858>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_ReducedPerf_Latch = 0;/* Referenced by: '<S859>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_ReducedPerf_OvrdEnbl = 0;/* Referenced by: '<S860>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_ReducedPerf_OvrdVal = 0;/* Referenced by: '<S861>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_RegenBrkInhb_DebDisbl = 1;/* Referenced by: '<S756>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_RegenBrkInhb_Latch = 0;/* Referenced by: '<S757>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_RegenBrkInhb_OvrdEnbl = 1;/* Referenced by: '<S758>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_RegenBrkInhb_OvrdVal = 0;/* Referenced by: '<S759>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT)
    KeSRAR_b_RemedialActionHist_ResetEnbl = 0;/* Referenced by: '<S234>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT)
    KeSRAR_b_ReqNeutralEngine_Stop_Enbl = 0;/* Referenced by: '<S1162>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_RestrtAllwd_Temp = 0;/* Referenced by: '<S1306>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT)
    KeSRAR_b_RestrtAllwd_TempEngShtDwnEnbl = 0;/* Referenced by: '<S1307>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_RngEqnSelMdEnbl = 0;/* Referenced by:
                                                                      * '<S1139>/Calib'
                                                                      * '<S1163>/Calib'
                                                                      */
static volatile CONST(boolean, SRAR_VAR_INIT)
    KeSRAR_b_SignalPreProCessCAN_FltEnbl = 1;/* Referenced by: '<S1472>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT)
    KeSRAR_b_SingleCylinMisfireDetc_HighSOCEnbl = 0;/* Referenced by: '<S1650>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT)
    KeSRAR_b_SingleCylinMisfireDetc_InhibitGearsEnbl = 0;/* Referenced by: '<S1651>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT)
    KeSRAR_b_SingleCylinMisfireDetc_KeepEngRunEnbl = 1;/* Referenced by: '<S1652>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT)
    KeSRAR_b_SingleCylinMisfireDetc_LimitTrqEnbl = 1;/* Referenced by: '<S1653>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT)
    KeSRAR_b_TCMCommFltShtDwn_FltShtDwnCmndEnbl = 1;/* Referenced by: '<S1225>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_TCM_COM_LossSelect = 0;/* Referenced by: '<S1145>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT)
    KeSRAR_b_TempEngShtDwnEnbl_DebDisbl = 1;/* Referenced by: '<S1308>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT)
    KeSRAR_b_TempEngShtDwnEnbl_OvrdEnbl = 0;/* Referenced by: '<S1309>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_TempEngShtDwnEnbl_OvrdVal
    = 0;                               /* Referenced by: '<S1310>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_ThrmlRnawyFlg_OvrdEnbl =
    0;                                 /* Referenced by: '<S1788>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_ThrmlRnawyFlg_OvrdVal = 0;/* Referenced by: '<S1789>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_U0401Enbl = 1;/* Referenced by:
                                                                      * '<S1585>/Calib'
                                                                      * '<S1586>/Calib'
                                                                      */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_U1850Enbl = 1;/* Referenced by: '<S1587>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_UseActualGear = 0;/* Referenced by: '<S2323>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_disableCANC2_BusOff = 1;/* Referenced by: '<S1434>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_disableMechPerf_Slip = 0;/* Referenced by: '<S2130>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_enable_actionBF1_3 = 1;/* Referenced by: '<S1798>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_enbl_BPCM_Loc_BusOff_M182
    = 0;                               /* Referenced by: '<S1765>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT)
    KeSRAR_b_enbl_BPCM_Loc_BusOff_VFBEV = 0;/* Referenced by: '<S1766>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_enbl_CANC2_BusOff_M182 =
    0;                                 /* Referenced by: '<S1435>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_enbl_CANC2_LOCBSM = 0;/* Referenced by: '<S2300>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_enbl_CANC_BusOff_M182 = 0;/* Referenced by: '<S1436>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_enbl_ePT_BusOff_M182 = 0;/* Referenced by: '<S1437>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_limitInputTrq_DebDisbl =
    0;                                 /* Referenced by: '<S830>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_limitInputTrq_Latch = 0;/* Referenced by: '<S831>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_limitInputTrq_OvrdEnbl =
    0;                                 /* Referenced by: '<S832>/Calib' */
static volatile CONST(boolean, SRAR_VAR_INIT) KeSRAR_b_limitInputTrq_OvrdVal = 0;/* Referenced by: '<S833>/Calib' */
static volatile CONST(uint16, SRAR_VAR_INIT) KeSRAR_d_TCMFailures_MaskVal =
    65535U;                            /* Referenced by: '<S2340>/Calib' */
static volatile CONST(TeSRAR_e_EngStrtType, SRAR_VAR_INIT)
    KeSRAR_e_EngStrtStpTypHVBatErr = CeSRAR_e_EngTrqStrt;/* Referenced by: '<S49>/Calib' */
static volatile CONST(sint16, SRAR_VAR_INIT) KeSRAR_e_LTPsvPumpDryRun = 1;/* Referenced by: '<S2239>/Calib' */
static volatile CONST(sint16, SRAR_VAR_INIT) KeSRAR_e_PPCTIS_OT = 1;/* Referenced by: '<S2240>/Calib' */
static volatile CONST(sint16, SRAR_VAR_INIT) KeSRAR_e_PPCTIS_OT_SNA = 1;/* Referenced by: '<S2241>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_AutoStrtFailSelect = 0U;/* Referenced by: '<S1551>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_BumpStrtFailSelect = 0U;/* Referenced by: '<S1552>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_BumpStrtInhibitSelect =
    48U;                               /* Referenced by: '<S1553>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_CKSPhaseSelect = 0U;/* Referenced by: '<S1554>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA1_DerateSumTrqMax = 0U;/* Referenced by: '<S292>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA1_InhibitActvSpdLmtr =
    0U;                                /* Referenced by: '<S720>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA1_InhibitCruise = 0U;/* Referenced by: '<S737>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA1_InhibiteBoost = 0U;/* Referenced by: '<S782>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA1_OnePedalDriveDsbl = 0U;/* Referenced by: '<S387>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA1_SelBSGFltNonRecov = 0U;/* Referenced by: '<S563>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA1_SelBSGFltRecov = 0U;/* Referenced by: '<S582>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA1_SelCreepTorqMode = 0U;/* Referenced by: '<S270>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA1_SelDisableAEMD = 0U;/* Referenced by: '<S314>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA1_SelDisablePwrPanel =
    0U;                                /* Referenced by: '<S405>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA1_SelDisableRaceStart =
    0U;                                /* Referenced by: '<S427>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA1_SelDisblTCaseSpdSync =
    0U;                                /* Referenced by: '<S449>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA1_SelDrvAllwd = 0U;/* Referenced by: '<S474>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA1_SelDsblChrg = 0U;/* Referenced by: '<S344>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA1_SelDsblInvARecov = 0U;/* Referenced by: '<S601>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA1_SelDsblInvBRecov = 0U;/* Referenced by: '<S619>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA1_SelDsblP2IdlSpd = 0U;/* Referenced by: '<S370>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA1_SelEPBHoldReq = 0U;/* Referenced by: '<S501>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA1_SelEngStrtStpEngRun =
    0U;                                /* Referenced by: '<S806>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA1_SelEngStrtStpEngShtDwn
    = 0U;                              /* Referenced by: '<S1342>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA1_SelFltShtDwnBPClsd =
    0U;                                /* Referenced by: '<S1254>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA1_SelFltShtDwnCmnd = 0U;/* Referenced by: '<S1226>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA1_SelFltShtDwnCmndRet =
    0U;                                /* Referenced by: '<S1282>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA1_SelHMIMsg9_15 = 0U;/* Referenced by: '<S92>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA1_SelHybAltrntrMd = 0U;/* Referenced by: '<S696>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT)
    KeSRAR_g_RA1_SelInhibitAWDTerrainMode = 0U;/* Referenced by: '<S926>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA1_SelInhibitDriveMode =
    0U;                                /* Referenced by: '<S946>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA1_SelInhibitGear1Cmnd =
    0U;                                /* Referenced by: '<S966>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA1_SelInhibitGear2Cmnd =
    0U;                                /* Referenced by: '<S991>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA1_SelInhibitGear3Cmnd =
    0U;                                /* Referenced by: '<S1030>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA1_SelInhibitGear4Cmnd =
    0U;                                /* Referenced by: '<S1050>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA1_SelInhibitMode1Cmnd =
    0U;                                /* Referenced by: '<S1074>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA1_SelInhibitMode2Cmnd =
    0U;                                /* Referenced by: '<S1075>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT)
    KeSRAR_g_RA1_SelInhibitRWDTerrainMode = 0U;/* Referenced by: '<S1111>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA1_SelInhibitRegenBraking
    = 0U;                              /* Referenced by: '<S760>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA1_SelLimitTrq = 0U;/* Referenced by: '<S834>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA1_SelMtrCZeroTrqActv =
    0U;                                /* Referenced by: '<S637>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA1_SelNeutAllwd = 0U;/* Referenced by: '<S1199>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA1_SelNeutralCmnd = 0U;/* Referenced by: '<S1168>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA1_SelOpenCntctrNonRecov =
    0U;                                /* Referenced by: '<S657>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA1_SelOpenCntctrRecov =
    0U;                                /* Referenced by: '<S676>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA1_SelReducedPerf = 0U;/* Referenced by: '<S862>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA1_SelReducedPerf2 = 0U;/* Referenced by: '<S890>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA1_SelTempEngShtDwn = 0U;/* Referenced by: '<S1311>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA1_SelVehSpdLmtd = 0U;/* Referenced by: '<S109>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA2_DerateSumTrqMax = 0U;/* Referenced by: '<S293>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA2_InhibitActvSpdLmtr =
    0U;                                /* Referenced by: '<S721>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA2_InhibitCruise = 0U;/* Referenced by: '<S738>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA2_InhibiteBoost = 0U;/* Referenced by: '<S783>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA2_OnePedalDriveDsbl = 0U;/* Referenced by: '<S388>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA2_SelBSGFltNonRecov = 0U;/* Referenced by: '<S564>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA2_SelBSGFltRecov = 0U;/* Referenced by: '<S583>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA2_SelCreepTorqMode = 0U;/* Referenced by: '<S271>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA2_SelDisableAEMD = 0U;/* Referenced by: '<S315>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA2_SelDisablePwrPanel =
    0U;                                /* Referenced by: '<S406>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA2_SelDisableRaceStart =
    0U;                                /* Referenced by: '<S428>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA2_SelDisblTCaseSpdSync =
    0U;                                /* Referenced by: '<S450>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA2_SelDrvAllwd = 0U;/* Referenced by: '<S475>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA2_SelDsblChrg = 0U;/* Referenced by: '<S345>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA2_SelDsblInvARecov = 0U;/* Referenced by: '<S602>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA2_SelDsblInvBRecov = 0U;/* Referenced by: '<S620>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA2_SelDsblP2IdlSpd = 0U;/* Referenced by: '<S371>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA2_SelEPBHoldReq = 0U;/* Referenced by: '<S502>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA2_SelEngStrtStpEngRun =
    0U;                                /* Referenced by: '<S807>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA2_SelEngStrtStpEngShtDwn
    = 0U;                              /* Referenced by: '<S1343>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA2_SelFltShtDwnBPClsd =
    0U;                                /* Referenced by: '<S1255>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA2_SelFltShtDwnCmnd = 0U;/* Referenced by: '<S1227>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA2_SelFltShtDwnCmndRet =
    0U;                                /* Referenced by: '<S1283>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA2_SelHMIMsg9_15 = 0U;/* Referenced by: '<S93>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA2_SelHybAltrntrMd = 0U;/* Referenced by: '<S697>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT)
    KeSRAR_g_RA2_SelInhibitAWDTerrainMode = 0U;/* Referenced by: '<S927>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA2_SelInhibitDriveMode =
    0U;                                /* Referenced by: '<S947>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA2_SelInhibitGear1Cmnd =
    0U;                                /* Referenced by: '<S967>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA2_SelInhibitGear2Cmnd =
    0U;                                /* Referenced by: '<S992>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA2_SelInhibitGear3Cmnd =
    0U;                                /* Referenced by: '<S1031>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA2_SelInhibitGear4Cmnd =
    0U;                                /* Referenced by: '<S1051>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA2_SelInhibitMode1Cmnd =
    0U;                                /* Referenced by: '<S1076>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA2_SelInhibitMode2Cmnd =
    0U;                                /* Referenced by: '<S1077>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT)
    KeSRAR_g_RA2_SelInhibitRWDTerrainMode = 0U;/* Referenced by: '<S1112>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA2_SelInhibitRegenBraking
    = 0U;                              /* Referenced by: '<S761>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA2_SelLimitTrq = 0U;/* Referenced by: '<S835>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA2_SelMtrCZeroTrqActv =
    0U;                                /* Referenced by: '<S638>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA2_SelNeutAllwd = 0U;/* Referenced by: '<S1200>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA2_SelNeutralCmnd = 0U;/* Referenced by: '<S1169>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA2_SelOpenCntctrNonRecov =
    0U;                                /* Referenced by: '<S658>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA2_SelOpenCntctrRecov =
    0U;                                /* Referenced by: '<S677>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA2_SelReducedPerf = 0U;/* Referenced by: '<S863>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA2_SelReducedPerf2 = 0U;/* Referenced by: '<S891>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA2_SelSpinUpPhase = 0U;/* Referenced by: '<S50>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA2_SelTempEngShtDwn = 0U;/* Referenced by: '<S1312>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA2_SelVehSpdLmtd = 0U;/* Referenced by: '<S110>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA3_DerateSumTrqMax = 0U;/* Referenced by: '<S294>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA3_InhibitActvSpdLmtr =
    0U;                                /* Referenced by: '<S722>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA3_InhibitCruise = 0U;/* Referenced by: '<S739>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA3_InhibiteBoost = 0U;/* Referenced by: '<S784>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA3_OnePedalDriveDsbl = 0U;/* Referenced by: '<S389>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA3_SelBSGFltNonRecov = 0U;/* Referenced by: '<S565>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA3_SelBSGFltRecov = 0U;/* Referenced by: '<S584>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA3_SelCreepTorqMode = 0U;/* Referenced by: '<S272>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA3_SelDisableAEMD = 0U;/* Referenced by: '<S316>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA3_SelDisablePwrPanel =
    0U;                                /* Referenced by: '<S407>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA3_SelDisableRaceStart =
    0U;                                /* Referenced by: '<S429>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA3_SelDisblTCaseSpdSync =
    0U;                                /* Referenced by: '<S451>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA3_SelDrvAllwd = 0U;/* Referenced by: '<S476>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA3_SelDsblChrg = 0U;/* Referenced by: '<S346>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA3_SelDsblInvARecov = 0U;/* Referenced by: '<S603>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA3_SelDsblInvBRecov = 0U;/* Referenced by: '<S621>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA3_SelDsblP2IdlSpd = 0U;/* Referenced by: '<S372>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA3_SelEPBHoldReq = 0U;/* Referenced by: '<S503>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA3_SelEngStrtStpEngRun =
    0U;                                /* Referenced by: '<S808>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA3_SelEngStrtStpEngShtDwn
    = 0U;                              /* Referenced by: '<S1344>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA3_SelFltShtDwnBPClsd =
    0U;                                /* Referenced by: '<S1256>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA3_SelFltShtDwnCmnd = 0U;/* Referenced by: '<S1228>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA3_SelFltShtDwnCmndRet =
    0U;                                /* Referenced by: '<S1284>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA3_SelHMIMsg9_15 = 0U;/* Referenced by: '<S94>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA3_SelHybAltrntrMd = 0U;/* Referenced by: '<S698>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT)
    KeSRAR_g_RA3_SelInhibitAWDTerrainMode = 0U;/* Referenced by: '<S928>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA3_SelInhibitDriveMode =
    0U;                                /* Referenced by: '<S948>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA3_SelInhibitGear1Cmnd =
    0U;                                /* Referenced by: '<S968>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA3_SelInhibitGear2Cmnd =
    0U;                                /* Referenced by: '<S993>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA3_SelInhibitGear3Cmnd =
    0U;                                /* Referenced by: '<S1032>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA3_SelInhibitGear4Cmnd =
    0U;                                /* Referenced by: '<S1052>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA3_SelInhibitMode1Cmnd =
    0U;                                /* Referenced by: '<S1078>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA3_SelInhibitMode2Cmnd =
    0U;                                /* Referenced by: '<S1079>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT)
    KeSRAR_g_RA3_SelInhibitRWDTerrainMode = 0U;/* Referenced by: '<S1113>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA3_SelInhibitRegenBraking
    = 0U;                              /* Referenced by: '<S762>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA3_SelLimitTrq = 0U;/* Referenced by: '<S836>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA3_SelMtrCZeroTrqActv =
    0U;                                /* Referenced by: '<S639>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA3_SelNeutAllwd = 0U;/* Referenced by: '<S1201>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA3_SelNeutralCmnd = 0U;/* Referenced by: '<S1170>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA3_SelOpenCntctrNonRecov =
    0U;                                /* Referenced by: '<S659>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA3_SelOpenCntctrRecov =
    0U;                                /* Referenced by: '<S678>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA3_SelReducedPerf = 0U;/* Referenced by: '<S864>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA3_SelReducedPerf2 = 0U;/* Referenced by: '<S892>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA3_SelTempEngShtDwn = 0U;/* Referenced by: '<S1313>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA3_SelVehSpdLmtd = 0U;/* Referenced by: '<S111>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA4_DerateSumTrqMax = 0U;/* Referenced by: '<S295>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA4_InhibitActvSpdLmtr =
    0U;                                /* Referenced by: '<S723>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA4_InhibitCruise = 0U;/* Referenced by: '<S740>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA4_InhibiteBoost = 0U;/* Referenced by: '<S785>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA4_OnePedalDriveDsbl = 0U;/* Referenced by: '<S390>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA4_SelBSGFltNonRecov = 0U;/* Referenced by: '<S566>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA4_SelBSGFltRecov = 0U;/* Referenced by: '<S585>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA4_SelCreepTorqMode = 0U;/* Referenced by: '<S273>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA4_SelDisableAEMD = 0U;/* Referenced by: '<S317>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA4_SelDisablePwrPanel =
    0U;                                /* Referenced by: '<S408>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA4_SelDisableRaceStart =
    0U;                                /* Referenced by: '<S430>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA4_SelDisblTCaseSpdSync =
    0U;                                /* Referenced by: '<S452>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA4_SelDrvAllwd = 0U;/* Referenced by: '<S477>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA4_SelDsblChrg = 0U;/* Referenced by: '<S347>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA4_SelDsblInvARecov = 0U;/* Referenced by: '<S604>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA4_SelDsblInvBRecov = 0U;/* Referenced by: '<S622>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA4_SelDsblP2IdlSpd = 0U;/* Referenced by: '<S373>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA4_SelEPBHoldReq = 0U;/* Referenced by: '<S504>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA4_SelEngStrtStpEngRun =
    0U;                                /* Referenced by: '<S809>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA4_SelEngStrtStpEngShtDwn
    = 0U;                              /* Referenced by: '<S1345>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA4_SelFltShtDwnBPClsd =
    0U;                                /* Referenced by: '<S1257>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA4_SelFltShtDwnCmnd = 0U;/* Referenced by: '<S1229>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA4_SelFltShtDwnCmndRet =
    0U;                                /* Referenced by: '<S1285>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA4_SelHMIMsg9_15 = 0U;/* Referenced by: '<S95>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA4_SelHybAltrntrMd = 0U;/* Referenced by: '<S699>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT)
    KeSRAR_g_RA4_SelInhibitAWDTerrainMode = 0U;/* Referenced by: '<S929>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA4_SelInhibitDriveMode =
    0U;                                /* Referenced by: '<S949>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA4_SelInhibitGear1Cmnd =
    0U;                                /* Referenced by: '<S969>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA4_SelInhibitGear2Cmnd =
    0U;                                /* Referenced by: '<S994>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA4_SelInhibitGear3Cmnd =
    0U;                                /* Referenced by: '<S1033>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA4_SelInhibitGear4Cmnd =
    0U;                                /* Referenced by: '<S1053>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA4_SelInhibitMode1Cmnd =
    0U;                                /* Referenced by: '<S1080>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA4_SelInhibitMode2Cmnd =
    0U;                                /* Referenced by: '<S1081>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT)
    KeSRAR_g_RA4_SelInhibitRWDTerrainMode = 0U;/* Referenced by: '<S1114>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA4_SelInhibitRegenBraking
    = 0U;                              /* Referenced by: '<S763>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA4_SelLimitTrq = 0U;/* Referenced by: '<S837>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA4_SelMtrCZeroTrqActv =
    0U;                                /* Referenced by: '<S640>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA4_SelNeutAllwd = 0U;/* Referenced by: '<S1202>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA4_SelNeutralCmnd = 0U;/* Referenced by: '<S1171>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA4_SelOpenCntctrNonRecov =
    0U;                                /* Referenced by: '<S660>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA4_SelOpenCntctrRecov =
    0U;                                /* Referenced by: '<S679>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA4_SelReducedPerf = 0U;/* Referenced by: '<S865>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA4_SelReducedPerf2 = 0U;/* Referenced by: '<S893>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA4_SelTempEngShtDwn = 0U;/* Referenced by: '<S1314>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA4_SelVehSpdLmtd = 0U;/* Referenced by: '<S112>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA5_DerateSumTrqMax = 0U;/* Referenced by: '<S296>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA5_InhibitActvSpdLmtr =
    0U;                                /* Referenced by: '<S724>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA5_InhibitCruise = 0U;/* Referenced by: '<S741>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA5_InhibiteBoost = 0U;/* Referenced by: '<S786>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA5_OnePedalDriveDsbl = 0U;/* Referenced by: '<S391>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA5_SelBSGFltNonRecov = 0U;/* Referenced by: '<S567>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA5_SelBSGFltRecov = 0U;/* Referenced by: '<S586>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA5_SelCreepTorqMode = 0U;/* Referenced by: '<S274>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA5_SelDisableAEMD = 0U;/* Referenced by: '<S318>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA5_SelDisablePwrPanel =
    0U;                                /* Referenced by: '<S409>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA5_SelDisableRaceStart =
    0U;                                /* Referenced by: '<S431>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA5_SelDisblTCaseSpdSync =
    0U;                                /* Referenced by: '<S453>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA5_SelDrvAllwd = 0U;/* Referenced by: '<S478>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA5_SelDsblChrg = 0U;/* Referenced by: '<S348>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA5_SelDsblInvARecov = 0U;/* Referenced by: '<S605>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA5_SelDsblInvBRecov = 0U;/* Referenced by: '<S623>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA5_SelDsblP2IdlSpd = 0U;/* Referenced by: '<S374>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA5_SelEPBHoldReq = 0U;/* Referenced by: '<S505>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA5_SelEngStrtStpEngRun =
    0U;                                /* Referenced by: '<S810>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA5_SelEngStrtStpEngShtDwn
    = 0U;                              /* Referenced by: '<S1346>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA5_SelFltShtDwnBPClsd =
    0U;                                /* Referenced by: '<S1258>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA5_SelFltShtDwnCmnd = 0U;/* Referenced by: '<S1230>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA5_SelFltShtDwnCmndRet =
    0U;                                /* Referenced by: '<S1286>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA5_SelHMIMsg9_15 = 0U;/* Referenced by: '<S96>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA5_SelHybAltrntrMd = 0U;/* Referenced by: '<S700>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT)
    KeSRAR_g_RA5_SelInhibitAWDTerrainMode = 0U;/* Referenced by: '<S930>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA5_SelInhibitDriveMode =
    0U;                                /* Referenced by: '<S950>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA5_SelInhibitGear1Cmnd =
    0U;                                /* Referenced by: '<S970>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA5_SelInhibitGear2Cmnd =
    0U;                                /* Referenced by: '<S995>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA5_SelInhibitGear3Cmnd =
    0U;                                /* Referenced by: '<S1034>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA5_SelInhibitGear4Cmnd =
    0U;                                /* Referenced by: '<S1054>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA5_SelInhibitMode1Cmnd =
    0U;                                /* Referenced by: '<S1082>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA5_SelInhibitMode2Cmnd =
    0U;                                /* Referenced by: '<S1083>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT)
    KeSRAR_g_RA5_SelInhibitRWDTerrainMode = 0U;/* Referenced by: '<S1115>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA5_SelInhibitRegenBraking
    = 0U;                              /* Referenced by: '<S764>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA5_SelLimitTrq = 0U;/* Referenced by: '<S838>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA5_SelMtrCZeroTrqActv =
    0U;                                /* Referenced by: '<S641>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA5_SelNeutAllwd = 0U;/* Referenced by: '<S1203>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA5_SelNeutralCmnd = 0U;/* Referenced by: '<S1172>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA5_SelOpenCntctrNonRecov =
    0U;                                /* Referenced by: '<S661>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA5_SelOpenCntctrRecov =
    0U;                                /* Referenced by: '<S680>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA5_SelReducedPerf = 0U;/* Referenced by: '<S866>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA5_SelReducedPerf2 = 0U;/* Referenced by: '<S894>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA5_SelTempEngShtDwn = 0U;/* Referenced by: '<S1315>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA5_SelVehSpdLmtd = 0U;/* Referenced by: '<S113>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA6_DerateSumTrqMax = 0U;/* Referenced by: '<S297>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA6_InhibitActvSpdLmtr =
    0U;                                /* Referenced by: '<S725>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA6_InhibitCruise = 0U;/* Referenced by: '<S742>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA6_InhibiteBoost = 0U;/* Referenced by: '<S787>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA6_OnePedalDriveDsbl = 0U;/* Referenced by: '<S392>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA6_SelBSGFltNonRecov = 0U;/* Referenced by: '<S568>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA6_SelBSGFltRecov = 0U;/* Referenced by: '<S587>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA6_SelCreepTorqMode = 0U;/* Referenced by: '<S275>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA6_SelDisableAEMD = 0U;/* Referenced by: '<S319>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA6_SelDisablePwrPanel =
    0U;                                /* Referenced by: '<S410>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA6_SelDisableRaceStart =
    0U;                                /* Referenced by: '<S432>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA6_SelDisblTCaseSpdSync =
    0U;                                /* Referenced by: '<S454>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA6_SelDrvAllwd = 0U;/* Referenced by: '<S479>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA6_SelDsblChrg = 0U;/* Referenced by: '<S349>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA6_SelDsblInvARecov = 0U;/* Referenced by: '<S606>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA6_SelDsblInvBRecov = 0U;/* Referenced by: '<S624>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA6_SelDsblP2IdlSpd = 0U;/* Referenced by: '<S375>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA6_SelEPBHoldReq = 0U;/* Referenced by: '<S506>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA6_SelEngStrtStpEngRun =
    0U;                                /* Referenced by: '<S811>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA6_SelEngStrtStpEngShtDwn
    = 0U;                              /* Referenced by: '<S1347>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA6_SelFltShtDwnBPClsd =
    0U;                                /* Referenced by: '<S1259>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA6_SelFltShtDwnCmnd = 0U;/* Referenced by: '<S1231>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA6_SelFltShtDwnCmndRet =
    0U;                                /* Referenced by: '<S1287>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA6_SelHMIMsg9_15 = 0U;/* Referenced by: '<S97>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA6_SelHybAltrntrMd = 0U;/* Referenced by: '<S701>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT)
    KeSRAR_g_RA6_SelInhibitAWDTerrainMode = 0U;/* Referenced by: '<S931>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA6_SelInhibitDriveMode =
    0U;                                /* Referenced by: '<S951>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA6_SelInhibitGear1Cmnd =
    0U;                                /* Referenced by: '<S971>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA6_SelInhibitGear2Cmnd =
    0U;                                /* Referenced by: '<S996>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA6_SelInhibitGear3Cmnd =
    0U;                                /* Referenced by: '<S1035>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA6_SelInhibitGear4Cmnd =
    0U;                                /* Referenced by: '<S1055>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA6_SelInhibitMode1Cmnd =
    0U;                                /* Referenced by: '<S1084>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA6_SelInhibitMode2Cmnd =
    0U;                                /* Referenced by: '<S1085>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT)
    KeSRAR_g_RA6_SelInhibitRWDTerrainMode = 0U;/* Referenced by: '<S1116>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA6_SelInhibitRegenBraking
    = 0U;                              /* Referenced by: '<S765>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA6_SelLimitTrq = 0U;/* Referenced by: '<S839>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA6_SelMtrCZeroTrqActv =
    0U;                                /* Referenced by: '<S642>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA6_SelNeutAllwd = 0U;/* Referenced by: '<S1204>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA6_SelNeutralCmnd = 0U;/* Referenced by: '<S1173>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA6_SelOpenCntctrNonRecov =
    0U;                                /* Referenced by: '<S662>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA6_SelOpenCntctrRecov =
    0U;                                /* Referenced by: '<S681>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA6_SelReducedPerf = 0U;/* Referenced by: '<S867>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA6_SelReducedPerf2 = 0U;/* Referenced by: '<S895>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA6_SelTempEngShtDwn = 0U;/* Referenced by: '<S1316>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA6_SelVehSpdLmtd = 0U;/* Referenced by: '<S114>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA7_DerateSumTrqMax = 0U;/* Referenced by: '<S298>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA7_InhibitActvSpdLmtr =
    0U;                                /* Referenced by: '<S726>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA7_InhibitCruise = 0U;/* Referenced by: '<S743>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA7_InhibiteBoost = 0U;/* Referenced by: '<S788>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA7_OnePedalDriveDsbl = 0U;/* Referenced by: '<S393>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA7_SelBSGFltNonRecov = 0U;/* Referenced by: '<S569>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA7_SelBSGFltRecov = 0U;/* Referenced by: '<S588>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA7_SelCreepTorqMode = 0U;/* Referenced by: '<S276>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA7_SelDisableAEMD = 0U;/* Referenced by: '<S320>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA7_SelDisablePwrPanel =
    0U;                                /* Referenced by: '<S411>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA7_SelDisableRaceStart =
    0U;                                /* Referenced by: '<S433>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA7_SelDisblTCaseSpdSync =
    0U;                                /* Referenced by: '<S455>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA7_SelDrvAllwd = 0U;/* Referenced by: '<S480>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA7_SelDsblChrg = 0U;/* Referenced by: '<S350>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA7_SelDsblInvARecov = 0U;/* Referenced by: '<S607>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA7_SelDsblInvBRecov = 0U;/* Referenced by: '<S625>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA7_SelDsblP2IdlSpd = 0U;/* Referenced by: '<S376>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA7_SelEPBHoldReq = 0U;/* Referenced by: '<S507>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA7_SelEngStrtStpEngRun =
    0U;                                /* Referenced by: '<S812>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA7_SelEngStrtStpEngShtDwn
    = 0U;                              /* Referenced by: '<S1348>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA7_SelFltShtDwnBPClsd =
    0U;                                /* Referenced by: '<S1260>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA7_SelFltShtDwnCmnd = 0U;/* Referenced by: '<S1232>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA7_SelFltShtDwnCmndRet =
    0U;                                /* Referenced by: '<S1288>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA7_SelHMIMsg9_15 = 0U;/* Referenced by: '<S98>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA7_SelHybAltrntrMd = 0U;/* Referenced by: '<S702>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT)
    KeSRAR_g_RA7_SelInhibitAWDTerrainMode = 0U;/* Referenced by: '<S932>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA7_SelInhibitDriveMode =
    0U;                                /* Referenced by: '<S952>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA7_SelInhibitGear1Cmnd =
    0U;                                /* Referenced by: '<S972>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA7_SelInhibitGear2Cmnd =
    0U;                                /* Referenced by: '<S997>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA7_SelInhibitGear3Cmnd =
    0U;                                /* Referenced by: '<S1036>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA7_SelInhibitGear4Cmnd =
    0U;                                /* Referenced by: '<S1056>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA7_SelInhibitMode1Cmnd =
    0U;                                /* Referenced by: '<S1086>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA7_SelInhibitMode2Cmnd =
    0U;                                /* Referenced by: '<S1087>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT)
    KeSRAR_g_RA7_SelInhibitRWDTerrainMode = 0U;/* Referenced by: '<S1117>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA7_SelInhibitRegenBraking
    = 0U;                              /* Referenced by: '<S766>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA7_SelLimitTrq = 0U;/* Referenced by: '<S840>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA7_SelMtrCZeroTrqActv =
    0U;                                /* Referenced by: '<S643>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA7_SelNeutAllwd = 0U;/* Referenced by: '<S1205>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA7_SelNeutralCmnd = 0U;/* Referenced by: '<S1174>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA7_SelOpenCntctrNonRecov =
    0U;                                /* Referenced by: '<S663>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA7_SelOpenCntctrRecov =
    0U;                                /* Referenced by: '<S682>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA7_SelReducedPerf = 0U;/* Referenced by: '<S868>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA7_SelReducedPerf2 = 0U;/* Referenced by: '<S896>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA7_SelTempEngShtDwn = 0U;/* Referenced by: '<S1317>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA7_SelVehSpdLmtd = 0U;/* Referenced by: '<S115>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA8_DerateSumTrqMax = 0U;/* Referenced by: '<S299>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA8_InhibitActvSpdLmtr =
    0U;                                /* Referenced by: '<S727>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA8_InhibitCruise = 0U;/* Referenced by: '<S744>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA8_InhibiteBoost = 0U;/* Referenced by: '<S789>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA8_OnePedalDriveDsbl = 0U;/* Referenced by: '<S394>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA8_SelBSGFltNonRecov = 0U;/* Referenced by: '<S570>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA8_SelBSGFltRecov = 0U;/* Referenced by: '<S589>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA8_SelCreepTorqMode = 0U;/* Referenced by: '<S277>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA8_SelDisableAEMD = 0U;/* Referenced by: '<S321>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA8_SelDisablePwrPanel =
    0U;                                /* Referenced by: '<S412>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA8_SelDisableRaceStart =
    0U;                                /* Referenced by: '<S434>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA8_SelDisblTCaseSpdSync =
    0U;                                /* Referenced by: '<S456>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA8_SelDrvAllwd = 0U;/* Referenced by: '<S481>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA8_SelDsblChrg = 0U;/* Referenced by: '<S351>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA8_SelDsblInvARecov = 0U;/* Referenced by: '<S608>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA8_SelDsblInvBRecov = 0U;/* Referenced by: '<S626>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA8_SelDsblP2IdlSpd = 0U;/* Referenced by: '<S377>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA8_SelEPBHoldReq = 0U;/* Referenced by: '<S508>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA8_SelEngStrtStpEngRun =
    0U;                                /* Referenced by: '<S813>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA8_SelEngStrtStpEngShtDwn
    = 0U;                              /* Referenced by: '<S1349>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA8_SelFltShtDwnBPClsd =
    0U;                                /* Referenced by: '<S1261>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA8_SelFltShtDwnCmnd = 0U;/* Referenced by: '<S1233>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA8_SelFltShtDwnCmndRet =
    0U;                                /* Referenced by: '<S1289>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA8_SelHMIMsg9_15 = 0U;/* Referenced by: '<S99>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA8_SelHybAltrntrMd = 0U;/* Referenced by: '<S703>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT)
    KeSRAR_g_RA8_SelInhibitAWDTerrainMode = 0U;/* Referenced by: '<S933>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA8_SelInhibitDriveMode =
    0U;                                /* Referenced by: '<S953>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA8_SelInhibitGear1Cmnd =
    0U;                                /* Referenced by: '<S973>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA8_SelInhibitGear2Cmnd =
    0U;                                /* Referenced by: '<S998>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA8_SelInhibitGear3Cmnd =
    0U;                                /* Referenced by: '<S1037>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA8_SelInhibitGear4Cmnd =
    0U;                                /* Referenced by: '<S1057>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA8_SelInhibitMode1Cmnd =
    0U;                                /* Referenced by: '<S1088>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA8_SelInhibitMode2Cmnd =
    0U;                                /* Referenced by: '<S1089>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT)
    KeSRAR_g_RA8_SelInhibitRWDTerrainMode = 0U;/* Referenced by: '<S1118>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA8_SelInhibitRegenBraking
    = 0U;                              /* Referenced by: '<S767>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA8_SelLimitTrq = 0U;/* Referenced by: '<S841>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA8_SelMtrCZeroTrqActv =
    0U;                                /* Referenced by: '<S644>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA8_SelNeutAllwd = 0U;/* Referenced by: '<S1206>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA8_SelNeutralCmnd = 0U;/* Referenced by: '<S1175>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA8_SelOpenCntctrNonRecov =
    0U;                                /* Referenced by: '<S664>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA8_SelOpenCntctrRecov =
    0U;                                /* Referenced by: '<S683>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA8_SelReducedPerf = 0U;/* Referenced by: '<S869>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA8_SelReducedPerf2 = 0U;/* Referenced by: '<S897>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA8_SelTempEngShtDwn = 0U;/* Referenced by: '<S1318>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_RA8_SelVehSpdLmtd = 0U;/* Referenced by: '<S116>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_SelectBitVehShutoffSoon =
    3072U;                             /* Referenced by: '<S1555>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_SpinPhaseSelect = 0U;/* Referenced by: '<S1556>/Calib' */
static volatile CONST(uint32, SRAR_VAR_INIT) KeSRAR_g_StrtStpFailPhaseSelect =
    0U;                                /* Referenced by: '<S1557>/Calib' */
static volatile CONST(uint8, SRAR_VAR_INIT) KeSRAR_i_Lv1PwrfreeAcrtTrqLHOM_Trans
    = 3U;                              /* Referenced by: '<S1617>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_n_AltntrMdMaxEngRPM =
    700.0F;                            /* Referenced by: '<S1541>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_n_AltntrMdMaxEngRPM_LD =
    -100.0F;                           /* Referenced by: '<S1542>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_n_AltntrMdMaxEngRPM_LU =
    100.0F;                            /* Referenced by: '<S1543>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_n_Clch1SlipThrsh = 5.0F;/* Referenced by: '<S1149>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_n_Clch2SlipThrsh = 5.0F;/* Referenced by: '<S1150>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_n_CreepTrqThrsh = 500.0F;/* Referenced by: '<S159>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_n_EngRunDetect = 600.0F;/* Referenced by: '<S1681>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_n_HCPMaxEngRPM = 8160.0F;/* Referenced by: '<S2429>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_n_MechLimpP2SpdThrshld =
    550.0F;                            /* Referenced by: '<S2341>/Calib' */
static volatile CONST(uint16, SRAR_VAR_INIT) KeSRAR_n_PopupMsg14_Dbnc = 0U;/* Referenced by: '<S72>/Calib' */
static volatile CONST(uint16, SRAR_VAR_INIT) KeSRAR_n_PopupMsg15_Dbnc = 0U;/* Referenced by: '<S73>/Calib' */
static volatile CONST(uint16, SRAR_VAR_INIT) KeSRAR_n_PopupMsg1_Dbnc = 0U;/* Referenced by: '<S74>/Calib' */
static volatile CONST(uint16, SRAR_VAR_INIT) KeSRAR_n_PopupMsg9_Dbnc = 0U;/* Referenced by: '<S75>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_n_TossInhGearsShutDownEng =
    5000.0F;                           /* Referenced by: '<S1164>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_BPCMLOC_Dbnc = 10.0F;/* Referenced by: '<S1767>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_CreepTorqMode = 5.0F;/* Referenced by: '<S160>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_CreepTorqModeTurnONDelay =
    0.0F;                              /* Referenced by: '<S278>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_DebounceRA = 1.0F;/* Referenced by: '<S1479>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_DebounceRAHist = 1.0F;/* Referenced by: '<S1480>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_DisableAEMDTurnONDelay =
    0.0F;                              /* Referenced by: '<S322>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT)
    KeSRAR_t_DisablePwrPanelTurnONDelay = 0.0F;/* Referenced by: '<S413>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT)
    KeSRAR_t_DisableRaceStartTurnONDelay = 0.0F;/* Referenced by: '<S435>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT)
    KeSRAR_t_DisblTCaseSpdSyncTurnONDelay = 0.0F;/* Referenced by: '<S457>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_DrvAllwd = 3.0F;/* Referenced by: '<S165>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_DrvAllwdTurnONDelay =
    0.0F;                              /* Referenced by: '<S482>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_DryRunShtDwntTmr = 120.0F;/* Referenced by: '<S2242>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_DsblChrgEnbl_TurnONdelay =
    0.0125F;                           /* Referenced by: '<S352>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_DsblInvATurnONDelay =
    0.0F;                              /* Referenced by: '<S546>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_DsblInvBTurnONDelay =
    0.0125F;                           /* Referenced by: '<S547>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_EOPA_Faliure_Tmr1 = 5.0F;/* Referenced by: '<S2148>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_EOPB_Faliure_Tmr2 = 5.0F;/* Referenced by: '<S2149>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_EPB_Hold_ReqTurnONDelay =
    0.0F;                              /* Referenced by: '<S509>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_EngActualTorqSS_FltDeb =
    5.0F;                              /* Referenced by: '<S1588>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_EngStrtStpEngRun = 5.0F;/* Referenced by: '<S175>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT)
    KeSRAR_t_EngStrtStpEngRunTurnONDelay = 0.0F;/* Referenced by: '<S814>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_EngStrtStpEngShtDwn =
    5.0F;                              /* Referenced by: '<S171>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT)
    KeSRAR_t_EngStrtStpEngShtDwnTurnONDelay = 0.0F;/* Referenced by: '<S1350>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_Feedback_HCPTurnOFFDelay =
    0.2F;                              /* Referenced by: '<S548>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT)
    KeSRAR_t_FltShtDwnBPClsdCmndTurnONDelay = 0.0F;/* Referenced by: '<S1262>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT)
    KeSRAR_t_FltShtDwnCmndRetTurnONDelay = 0.0F;/* Referenced by: '<S1290>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_FltShtDwnCmndTurnONDelay =
    0.0F;                              /* Referenced by: '<S1234>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_FltShtDwnDmndRet = 30.0F;/* Referenced by: '<S140>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_FuelPumpEngOffActvTime =
    30.0F;                             /* Referenced by: '<S1672>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT)
    KeSRAR_t_HybFeedback_ECMTurnOFFDelay = 0.0F;/* Referenced by: '<S549>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_InhSSCreepTrqActv = 3.0F;/* Referenced by: '<S31>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_InhibitRegenTurnONDelay =
    0.0F;                              /* Referenced by: '<S768>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_InitEngRun = 1.0F;/* Referenced by: '<S176>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_InitLimTrans = 5.0F;/* Referenced by: '<S1194>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_InputDebounceCAN = 1.0F;/* Referenced by: '<S1473>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_InputDebounceMtrSys =
    1.0F;                              /* Referenced by: '<S1469>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_LimitInputTrqTurnONDelay =
    0.0F;                              /* Referenced by: '<S842>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_MtrCZeroTrqTurnONDelay =
    0.0F;                              /* Referenced by: '<S550>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_NeutAllwd = 3.0F;/* Referenced by: '<S184>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_NeutAllwdTurnONDelay =
    0.0F;                              /* Referenced by: '<S1207>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT)
    KeSRAR_t_NextKeyOverrideOnResetDelay = 0.0125F;/* Referenced by: '<S67>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_OpnBattCntctrTurnONDelay =
    0.0F;                              /* Referenced by: '<S551>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_PlgInEngRunTmr = 1800.0F;/* Referenced by: '<S1506>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_ReducedPerf = 5.0F;/* Referenced by: '<S187>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_ReducedPerf2 = 8.0F;/* Referenced by: '<S191>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_ReducedPerf2TurnONDelay =
    0.0F;                              /* Referenced by: '<S898>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_ReducedPerfTurnONDelay =
    0.0F;                              /* Referenced by: '<S870>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_RegenBrkInhb = 5.0F;/* Referenced by: '<S196>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_RemedialStop = 3.0F;/* Referenced by: '<S199>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_RestrtAllwd_Dbnc = 3.0F;/* Referenced by: '<S1319>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_ShutDownEngineOffRet =
    1.0F;                              /* Referenced by: '<S32>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_ShutDownEngineOnRet =
    6.0F;                              /* Referenced by: '<S33>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT)
    KeSRAR_t_ShutDownEngineOnRetforCreep = 2.0F;/* Referenced by: '<S34>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_TempEngShtDwnTurnONDelay =
    0.0F;                              /* Referenced by: '<S1320>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT)
    KeSRAR_t_ThermalRnwayShtDwnTurnONDelay = 0.0F;/* Referenced by: '<S1805>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_ThrmlRnawyFlgTurnONDelay =
    0.0F;                              /* Referenced by: '<S1790>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_VehSpdFATurnONdelay =
    0.0F;                              /* Referenced by: '<S2307>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_dT = 0.0125F;/* Referenced by:
                                                                     * '<S151>/Calib'
                                                                     * '<S141>/Calib'
                                                                     * '<S279>/Calib'
                                                                     * '<S323>/Calib'
                                                                     * '<S353>/Calib'
                                                                     * '<S414>/Calib'
                                                                     * '<S436>/Calib'
                                                                     * '<S458>/Calib'
                                                                     * '<S483>/Calib'
                                                                     * '<S510>/Calib'
                                                                     * '<S552>/Calib'
                                                                     * '<S769>/Calib'
                                                                     * '<S815>/Calib'
                                                                     * '<S843>/Calib'
                                                                     * '<S871>/Calib'
                                                                     * '<S899>/Calib'
                                                                     * '<S1208>/Calib'
                                                                     * '<S1235>/Calib'
                                                                     * '<S1263>/Calib'
                                                                     * '<S1291>/Calib'
                                                                     * '<S1321>/Calib'
                                                                     * '<S1351>/Calib'
                                                                     * '<S23>/Calib'
                                                                     * '<S1488>/Calib'
                                                                     * '<S1589>/Calib'
                                                                     * '<S1599>/Calib'
                                                                     * '<S1673>/Calib'
                                                                     * '<S1768>/Calib'
                                                                     * '<S1791>/Calib'
                                                                     * '<S1806>/Calib'
                                                                     * '<S2150>/Calib'
                                                                     * '<S2151>/Calib'
                                                                     * '<S2243>/Calib'
                                                                     * '<S2308>/Calib'
                                                                     * '<S1003>/Calib'
                                                                     * '<S68>/Calib'
                                                                     */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_limitInputTrq = 11.0F;/* Referenced by: '<S180>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_t_unplgVehInParkTmr =
    1800.0F;                           /* Referenced by: '<S1509>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_v_AuxPumpFail_OutSpdHys =
    2.0F;                              /* Referenced by: '<S1600>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT)
    KeSRAR_v_LowVehicleSpeedToForceEngOff = 2.0F;/* Referenced by: '<S1658>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_v_VehSpdImmbHigh = 5.0F;/* Referenced by: '<S1732>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_v_VehSpdImmbLow = 2.0F;/* Referenced by: '<S1733>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_v_VehSpdThrsh_InhibitRWD =
    25.0F;                             /* Referenced by: '<S1470>/Calib' */
static volatile CONST(float32, SRAR_VAR_INIT) KeSRAR_v_VehSpd_ParkThrsh = 5.0F;/* Referenced by:
                                                                      * '<S142>/Calib'
                                                                      * '<S2210>/Calib'
                                                                      */
static volatile CONST(float32, SRAR_VAR_INIT) KtSRAR_M_ReducedPerfThrsh[7] =
{
    20.0F, 20.0F, 100.0F, 120.0F, 100.0F, 20.0F, 20.0F
} ;                                    /* Referenced by: '<S188>/Vector' */

static volatile CONST(float32, SRAR_VAR_INIT) KtSRAR_M_ReducedPerfThrsh2[7] =
{
    20.0F, 20.0F, 100.0F, 120.0F, 100.0F, 20.0F, 20.0F
} ;                                    /* Referenced by: '<S192>/Vector' */

static volatile CONST(float32, SRAR_VAR_INIT)
    KtSRAR_t_AuxPumpFailTime_TransOilTempDep[5] =
{
    0.0F, 10.0F, 20.0F, 30.0F, 40.0F
} ;                                    /* Referenced by: '<S1601>/Vector' */

static volatile CONST(float32, SRAR_VAR_INIT) KtSRAR_t_HoldG2atModetoMode[5] =
{
    10.0F, 10.0F, 10.0F, 10.0F, 10.0F
} ;                                    /* Referenced by: '<S1004>/Vector' */

static volatile CONST(float32, SRAR_VAR_INIT)
    KtSRAR_v_AuxPumpFailSpd_TransOilTempDep[5] =
{
    0.0F, 10.0F, 20.0F, 30.0F, 40.0F
} ;                                    /* Referenced by: '<S1602>/Vector' */

static volatile CONST(float32, SRAR_VAR_INIT) KxSRAR_M_ReducedPerfThrsh[7] =
{
    -250.0F, -200.0F, -100.0F, 0.0F, 250.0F, 500.0F, 700.0F
} ;                                    /* Referenced by: '<S188>/Vector' */

static volatile CONST(float32, SRAR_VAR_INIT) KxSRAR_M_ReducedPerfThrsh2[7] =
{
    -250.0F, -200.0F, -100.0F, 0.0F, 250.0F, 500.0F, 700.0F
} ;                                    /* Referenced by: '<S192>/Vector' */

static volatile CONST(float32, SRAR_VAR_INIT)
    KxSRAR_t_AuxPumpFailTime_TransOilTempDep[5] =
{
    10.0F, 21.0F, 30.0F, 43.0F, 55.0F
} ;                                    /* Referenced by: '<S1601>/Vector' */

static volatile CONST(float32, SRAR_VAR_INIT) KxSRAR_t_HoldG2atModetoMode[5] =
{
    -40.0F, -15.0F, 0.0F, 25.0F, 40.0F
} ;                                    /* Referenced by: '<S1004>/Vector' */

static volatile CONST(float32, SRAR_VAR_INIT)
    KxSRAR_v_AuxPumpFailSpd_TransOilTempDep[5] =
{
    10.0F, 21.0F, 30.0F, 43.0F, 55.0F
} ;                                    /* Referenced by: '<S1602>/Vector' */

#define STOP_SEC_CALIB_UNSPECIFIED_SRAR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_SRAR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_AGSMLoCInGearR;/* '<S2249>/Logical10' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_AHCPLoc_CANC2_BSM;/* '<S2296>/Switch1' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_AeCoastReady;/* '<S1391>/Comparison2' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_AltrntrMdExit;/* '<S1688>/Logical5' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_BPCMLoC_ePT_w_HCP;/* '<S1689>/Comparison9' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_BPCM_DualLOC_MCP_MC_Busoff;/* '<S1756>/LogicalOperator' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_BPCM_ePT_BusFail;/* '<S1689>/Comparison10' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_BSMLoCBusOff_CANC_C2;/* '<S1364>/Logical4' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_BSMLoC_C2CAN_w_AHCP;/* '<S2249>/Comparison12' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_BSMLoC_CCAN_w_HCP;/* '<S2249>/Comparison9' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_BSM_C2CAN_BusFail;/* '<S2249>/Comparison11' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_BSM_CCAN_BusFail;/* '<S2249>/Comparison10' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_BeltSlipCreepMode;/* '<S2110>/Logical1' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_CANC2_BusOff;/* '<S1429>/Switch1' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_CANC2_LoC_BSM;/* '<S1432>/Switch1' */
static VAR(uint16, SRAR_VAR_INIT) VeSRAC_b_CANCOMFail;/* '<S2327>/BitwiseLogicalOperator14' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_CANC_BusOff;/* '<S1427>/Switch1' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_CityCamelMd;/* '<S2250>/Logical1' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_ContctrCirPerfOpenCntctr;/* '<S1688>/Logical4' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_ECMLimp_Inhibit_M2G2;/* '<S1532>/Logical12' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_ECMLimp_LV2PwrFreeKeepEngRun;/* '<S1532>/Logical10' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_ECMLoC_C1CAN_w_ECM;/* '<S1529>/Logical12' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_ECMLoC_C1CAN_w_HCP;/* '<S1529>/Logical13' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_ECMLoC_ePT_w_ECM;/* '<S1529>/Logical11' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_ECMLoC_ePT_w_HCP;/* '<S1529>/Logical8' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_ECM_C1CAN_BusFail;/* '<S1529>/Comparison4' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_ECM_DualLOC_CRC_MC_Busoff;/* '<S1578>/LogicalOperator' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_ECM_ePT_BusFail;/* '<S1529>/Comparison8' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_ElecLimpHom1_3;/* '<S2327>/Comparison7' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_ElecLimpHom4_8;/* '<S2327>/Comparison9' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_ElecLimpHom_3Fix;/* '<S2327>/Comparison11' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_Enpg4_8_ABSActv;/* '<S2327>/Logical8' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_Enpg4_8_ABSImpndActvl;/* '<S2255>/Merge16' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_FuelPmpCavitation_EngOff;/* '<S1535>/Logical' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_GRMActive;/* '<S2257>/Logical' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_GearPRNDL_InhibitM2;/* '<S1781>/Switch1' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_HCPLoc_CANA_CADM_ADCAM;/* '<S1446>/Switch1' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_HCPLoc_CANB_CADM_ADCAM;/* '<S1447>/Switch1' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_HCPLoc_CANC_BCM;/* '<S2294>/Switch1' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_HCPLoc_CANC_BSM;/* '<S2295>/Switch1' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_HCPLoc_CANC_TCM;/* '<S2289>/Switch1' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_HCPLoc_ePT_TCM;/* '<S2290>/Switch1' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_HVBattErr;/* '<S21>/Logical1' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_HapticLoC;/* '<S1430>/Switch1' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_HeatingElementStuckClsd;/* '<S2196>/AND' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_IAENotClose;/* '<S2327>/Comparison18' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_IAENotClose_ABSImpndActvl;/* '<S2255>/Merge15' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_Inhibit_RWD_TerrainMode;/* '<S1708>/Logical1' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_K0ModeReqstInvalid;/* '<S2327>/Comparison16' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_K0ModeReqst_Inhibit_M1_N;/* '<S2327>/Logical4' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_K0ModeReqst_Inhibit_M2_G2;/* '<S2327>/Logical3' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_K0NotClose;/* '<S2327>/Comparison14' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_K0NotOpen;/* '<S2327>/Comparison15' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_LocIPC;/* '<S1425>/LogicalOperator' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_Lv1PwrFreeAccrtTrq;/* '<S1532>/Merge4' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_Lv1PwrFreeInAccrtTrq;/* '<S1532>/Merge6' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_Lv2PwrFreeInAccrtTrq;/* '<S1532>/Merge5' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_M1_Ntrl;/* '<S2327>/Logical1' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_M2_G2;/* '<S2327>/Logical2' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_MCPA_DualLOC_MCP_MC_Busoff;/* '<S2166>/LogicalOperator' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_MCPBOpnContactRec;/* '<S1380>/Logical6' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_MCPB_DualLOC_MCP_MC_Busoff;/* '<S2164>/LogicalOperator' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_MCPC_DualLOC_MCP_MC_Busoff;/* '<S2167>/LogicalOperator' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_MechLimpHom;/* '<S2327>/Logical13' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_MechLimp_DAllwdDsbl;/* '<S2327>/Logical6' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_MtrABC_HV_CntctrOpnRq;/* '<S1380>/Logical3' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_MtrAB_HV_CntctrOpnRq;/* '<S1380>/Logical1' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_MtrAFltHVShtDwnEngOn;/* '<S2111>/Logical8' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_MtrAFltHVShtDwnVehOff;/* '<S2111>/Logical9' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_MtrAInvrtrFaulted;/* '<S1380>/Comparison4' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_MtrAInvrtrFaultedNoHvShtDwn;/* '<S2111>/Logical1' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_MtrAInvrtrFltEngOff;/* '<S2111>/Logical4' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_MtrAInvrtrFltEngOn;/* '<S2111>/Logical5' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_MtrAinvrtFailedCreepMode;/* '<S2111>/Logical16' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_MtrBInvrtrFaulted;/* '<S1380>/Comparison1' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_MtrCInvrtrFaulted;/* '<S1380>/Comparison2' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_MtrCInvrtrFaulted_HVCntctrClsd;/* '<S2125>/Logical4' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_NPhaseElecLimpHom;/* '<S2327>/Comparison10' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_NZeroPhaseLimpActv;/* '<S2328>/Logical7' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_NZeroPhaseLimpMechD6;/* '<S2328>/Logical2' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_NeutNotAllwd;/* '<S1209>/Logical13' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_NormalMd;/* '<S2250>/Comparison4' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_OPDInhibit_HMI;/* '<S2397>/AND' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_OutOfFuelSOCShtDwn;/* '<S1630>/Logical' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_P2SpdLow;/* '<S2327>/Comparison12' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_P2SpdSignlFailur;/* '<S2255>/Merge10' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_PedalFailed;/* '<S2250>/Comparison3' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_PluggedORNotPark;/* '<S1484>/Logical12' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_RPMLimAccrtTrq;/* '<S1532>/Logical14' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_RPMLimInAccrtTrq;/* '<S1532>/Merge3' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_RPMLimWith_PedalFailures;/* '<S1532>/Logical15' */
static VAR(uint16, SRAR_VAR_INIT) VeSRAC_b_Reserved0;/* '<S2327>/BitwiseLogicalOperator15' */
static VAR(uint16, SRAR_VAR_INIT) VeSRAC_b_Reserved1;/* '<S2327>/BitwiseLogicalOperator16' */
static VAR(uint16, SRAR_VAR_INIT) VeSRAC_b_Reserved2;/* '<S2327>/BitwiseLogicalOperator17' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_SysVoltLowFA_BF12;/* '<S1712>/Logical2' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_SysVoltLowFA_BF13;/* '<S1712>/Logical5' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_SysVoltLowFA_BF3;/* '<S1712>/Logical1' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_TCMLimpFlt_DsblAEMD;/* '<S2256>/Switch4' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_TCMLimpFlt_InhibitM1;/* '<S2256>/Switch' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_TCMLimpFlt_InhibitM2;/* '<S2256>/Switch1' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_TCMLimpFlt_OvrrideEngOn;/* '<S2256>/Switch3' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_TCMLoC_C1CAN_w_ECM;/* '<S2249>/Logical12' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_TCMLoC_C1CAN_w_HCP;/* '<S2249>/Logical13' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_TCMLoC_ePT_w_ECM;/* '<S2249>/Logical3' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_TCMLoC_ePT_w_HCP;/* '<S2249>/Logical4' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_TCM_C1CAN_BusFail;/* '<S2249>/Comparison4' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_TCM_ePT_BusFail;/* '<S2249>/Comparison8' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_ThermalHybAltMode_Rq;/* '<S2194>/AND' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_VDCM_LoC_BSM;/* '<S1431>/Switch1' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_VDCM_LoC_CANC2_BSM;/* '<S1364>/Logical9' */
static VAR(boolean, SRAR_VAR_INIT) VeSRAC_b_ePT_BusOff;/* '<S1428>/Switch1' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_SRAR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_SRAR
#include "MemMap.h"

CONST(ConstB_SRAR_ac_T, SRAR_VAR_INIT) SRAR_ac_ConstB =
{
    CeTRGR_e_EPBReq_NA,                /* '<S2427>/Const37' */
    CeSTRR_e_NoOvrrd,                  /* '<S2427>/Const16' */
    CeSRAR_e_NoStrt,                   /* '<S2427>/Const30' */
    CeSRAR_e_NoFaultHCPBSM_C2,         /* '<S2427>/Const61' */
    CeSRAR_e_NoFaultHCPBSM_C1,         /* '<S2427>/Const63' */
    CeSRAR_e_NoFaultHCPBPCM_ePT        /* '<S2427>/Const59' */
};

#define STOP_SEC_CONST_UNSPECIFIED_SRAR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_SRAR
#include "MemMap.h"

VAR(B_SRAR_ac_T, SRAR_VAR_INIT) SRAR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_SRAR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_SRAR
#include "MemMap.h"

VAR(DW_SRAR_ac_T, SRAR_VAR_INIT) SRAR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_SRAR
#include "MemMap.h"

/* Previous zero-crossings (trigger) states */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_SRAR
#include "MemMap.h"

VAR(PrevZCX_SRAR_ac_T, SRAR_VAR_INIT) SRAR_ac_PrevZCX;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_SRAR
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, SRAR_CODE) SRAR_MedTEB(void) /* Explicit Task: MedTEB */
{
    sint32 rtb_AND_cg;
    sint32 rtb_AND_d;
    sint32 rtb_AND_ll;
    sint32 rtb_AND_og;
    sint32 rtb_Comparison6_b;
    sint32 rtb_Logical6_0;
    sint32 rtb_LogicalOperator_cr;
    sint32 rtb_LogicalOperator_mad;
    sint32 rtb_OR1_ot;
    sint32 rtb_Switch1_fw;
    sint32 rtb_Switch1_h0;
    sint32 rtb_Switch1_mu;
    sint32 rtb_TmpSignalConversionAtVeOB_1;
    sint32 rtb_TmpSignalConversionAtVeOB_2;
    sint32 rtb_TmpSignalConversionAtVeOB_3;
    sint32 rtb_VeSRAR_b_HVOverVoltFailur_1;
    sint32 rtb_VeSRAR_b_HVOverVoltFailur_f;
    sint32 tmpRead_13;
    float32 rtb_Switch1_bgv;
    float32 rtb_Switch1_bs;
    float32 rtb_Switch1_dn;
    float32 rtb_Switch1_du;
    float32 rtb_Switch1_eo;
    float32 rtb_Switch1_glj;
    float32 rtb_Switch1_io;
    float32 rtb_Switch1_jp;
    float32 rtb_Switch1_ml;
    float32 rtb_Switch1_n4;
    float32 rtb_Switch1_nb;
    float32 rtb_Switch1_nx;
    float32 rtb_TmpSignalConversionAtVeBPCR;
    float32 rtb_TmpSignalConversionAtVeB_lk;
    float32 rtb_TmpSignalConversionAtVeCSVR;
    float32 rtb_TmpSignalConversionAtVeGENR;
    float32 rtb_TmpSignalConversionAtVeHCCR;
    float32 rtb_TmpSignalConversionAtVeHPMR;
    float32 rtb_TmpSignalConversionAtVeINVR;
    float32 rtb_TmpSignalConversionAtVeIN_k;
    float32 rtb_TmpSignalConversionAtVePMDR;
    float32 rtb_TmpSignalConversionAtVeTFTR;
    float32 rtb_TmpSignalConversionAtVeVSDR;
    float32 rtb_Vector;
    float32 tmpRead_x;
    uint32 BitwiseLogicalOperator_b;
    uint32 rtb_Comparison1_aq;
    uint32 rtb_Comparison1_ij;
    uint32 rtb_Comparison3_ou;
    uint32 rtb_Logical1_l;
    uint32 rtb_Logical5_cn;
    uint32 rtb_Switch1_a3;
    uint32 rtb_Switch1_anw;
    uint32 rtb_Switch1_bk;
    uint32 rtb_Switch1_c;
    uint32 rtb_Switch1_ck;
    uint32 rtb_Switch1_f3;
    uint32 rtb_Switch1_fxq;
    uint32 rtb_Switch1_mr;
    uint32 rtb_Switch1_mu_0;
    uint32 rtb_Switch1_n3;
    uint32 rtb_TmpSignalConversionAtVeBP_p;
    uint32 rtb_TmpSignalConversionAtVeEN_d;
    uint32 rtb_TmpSignalConversionAtVeESSR;
    uint32 rtb_TmpSignalConversionAtVeTI_o;
    uint32 rtb_UnitDelay_k3;
    uint32 rtb_VeSRAR_b_AuxPumpFail_Inhi_0;
    uint32 rtb_VeSRAR_b_CKSFailed_0;
    uint32 rtb_VeSRAR_b_PPCTIS_ReducePer_0;
    uint32 rtb_VeSRAR_b_SpinUpFailed_0;
    uint32 rtb_VeSRAR_b_TCMLmpFlt2_tmp;
    sint16 rtb_TmpSignalConversionAtVeT_hz;
    sint16 tmpRead_s;
    uint16 Switch1;
    uint16 Switch1_g;
    uint16 VeSRAR_y_RemedialActionHist;
    uint16 rtb_Comparison4_h;
    uint16 rtb_Comparison4_h_0;
    uint16 rtb_Comparison4_h_1;
    uint16 rtb_Switch1_b4;
    uint16 rtb_Switch1_iz;
    uint16 rtb_Switch1_np;
    uint16 rtb_Switch1_py;
    uint16 rtb_TmpSignalConversionAtVeTINR;
    uint16 rtb_VeSRAR_d_RABit_Set;
    uint16 tmp;
    uint16 tmp_0;
    TeADIR_e_WEDFailureSts rtb_TmpSignalConversionAtVeAD_l;
    TeAPSR_e_Lv1PvMode tmpRead_t;
    TeBRKR_e_BSMComFail_C1CAN rtb_TmpSignalConversionAtVeBR_k;
    TeBRKR_e_BSMComFail_C2CAN rtb_TmpSignalConversionAtVeBRKR;
    TeDMDR_e_TurtleMdSts rtb_TmpSignalConversionAtVeDMDR;
    TeDMIR_e_DriveStyleSts rtb_TmpSignalConversionAtVeDMIR;
    TeENGR_e_ECMComFail_C1CAN rtb_TmpSignalConversionAtVeEN_h;
    TeENGR_e_ECMComFail_ePTCAN rtb_TmpSignalConversionAtVeEN_k;
    TeENGR_e_ECMReqRemStop rtb_TmpSignalConversionAtVeEN_n;
    TeESPR_e_EngSpdStatus tmpRead_b;
    TeESSR_e_EngStartStopSt rtb_TmpSignalConversionAtVeES_d;
    TeESSR_e_EngStrtStpMd rtb_TmpSignalConversionAtVeES_p;
    TeGENR_e_APM_FailureType rtb_TmpSignalConversionAtVeIDCR;
    TeHCCR_e_ActuatorSt rtb_TmpSignalConversionAtVeHC_f;
    TeHCCR_e_ActuatorSt rtb_TmpSignalConversionAtVeHC_p;
    TeHCCR_e_ClutchStatus rtb_TmpSignalConversionAtVeTI_f;
    TeHCCR_e_ClutchStatus rtb_TmpSignalConversionAtVeTI_k;
    TeHCCR_e_ClutchStatus tmpRead_r;
    TeHCCR_e_ClutchStatus tmpRead_u;
    TeHPMR_e_PropSysMode rtb_TmpSignalConversionAtVeHP_f;
    TeHSER_e_RngEqnSel rtb_TmpSignalConversionAtVeHS_h;
    TeHSER_e_RngSt rtb_TmpSignalConversionAtVeHSER;
    TeHVTR_e_HVOverVoltFailure rtb_TmpSignalConversionAtVePWDR;
    TeINVR_e_BstCnvtrFailSts tmpRead_12;
    TeINVR_e_MtrInvrtrSt rtb_TmpSignalConversionAtVeIN_c;
    TeINVR_e_MtrInvrtrSt tmpRead_p;
    TeINVR_e_MtrInvrtrSt tmpRead_y;
    TeOBCR_e_ChargingLevel rtb_TmpSignalConversionAtVeOB_k;
    TeOBCR_e_ChargingSystemSts tmpRead_o;
    TeOHSR_e_RngSel rtb_TmpSignalConversionAtVeOHSR;
    TePMDR_e_KeyStatus tmpRead_n;
    TePMDR_e_PowerMode rtb_TmpSignalConversionAtVePM_g;
    TePMPR_e_FTSNA tmpRead_l;
    TeSRAR_e_BPCMComFail_ePTCAN Switch1_fc;
    TeSRAR_e_BSMComFail_C1CAN tmp_2;
    TeSRAR_e_BSMComFail_C2CAN tmp_1;
    TeSRAR_e_CommFail rtb_TmpSignalConversionAtVeB_k4;
    TeSRAR_e_CommFail rtb_TmpSignalConversionAtVeIN_g;
    TeSRAR_e_CommFail rtb_TmpSignalConversionAtVeI_ks;
    TeSRAR_e_EngStrtType rtb_DataTypeConversion_l;
    TeSRAR_e_EngStrtType rtb_Switch1_n5;
    TeSRAR_e_SysShtDwnTyp rtb_TmpSignalConversionAtVeOBCR;
    TeSRAR_e_SysShtDwnTyp rtb_TmpSignalConversionAtVeTHMR;
    TeSTRR_e_AutoStopStartOvrrd Switch1_f;
    TeSTRR_e_HybStrtrSt rtb_TmpSignalConversionAtVeSTRR;
    TeTHMR_e_PPCTIS_OT tmpRead_k;
    TeTINR_e_TCMComFail_C1CAN rtb_TmpSignalConversionAtVeTI_j;
    TeTINR_e_TCMComFail_ePTCAN rtb_TmpSignalConversionAtVeTI_a;
    TeTINR_e_TCMNeutPhsZeroTrqReq rtb_TmpSignalConversionAtVeT_nz;
    TeTRGR_e_EPBReq tmpRead_j;
    TeTRGR_e_TransRangeState rtb_TmpSignalConversionAtVeTRGR;
    TeTRNR_e_TCMGearStat rtb_Switch_fy;
    TeTRNR_e_TCMGearStat rtb_TmpSignalConversionAtVeTRNR;
    TeTRNR_e_TCMGearStat tmpRead_q;
    TeVSDR_e_PrimNoSource tmpRead_8;
    boolean AND_o;
    boolean Logical13;
    boolean Logical13_o;
    boolean Switch1_h;
    boolean Switch1_je;
    boolean VeSRAC_b_ContctrCirPerfOpenCntc;
    boolean VeSRAR_b_FltShtDwnCmnd;
    boolean VeSRAR_b_MtrBZeroTrqActv;
    boolean rtb_AND_ct;
    boolean rtb_AND_gv;
    boolean rtb_AND_ik2;
    boolean rtb_AND_iy;
    boolean rtb_AND_ne;
    boolean rtb_AND_of;
    boolean rtb_AND_owg;
    boolean rtb_Comparison1_ij_tmp;
    boolean rtb_Comparison1_l4;
    boolean rtb_Comparison1_n4;
    boolean rtb_Comparison2_b;
    boolean rtb_Comparison2_op;
    boolean rtb_Comparison3_bq;
    boolean rtb_Comparison4_lp;
    boolean rtb_Comparison5_d;
    boolean rtb_Comparison6_m;
    boolean rtb_Comparison7_o5;
    boolean rtb_Comparison8;
    boolean rtb_Logical11;
    boolean rtb_Logical12_i;
    boolean rtb_Logical13_mq;
    boolean rtb_Logical13_ni;
    boolean rtb_Logical18_c;
    boolean rtb_Logical18_i;
    boolean rtb_Logical1_aq;
    boolean rtb_Logical1_cl;
    boolean rtb_Logical1_ll;
    boolean rtb_Logical21;
    boolean rtb_Logical24_a;
    boolean rtb_Logical2_j4;
    boolean rtb_Logical4_b;
    boolean rtb_Logical5_oz;
    boolean rtb_Logical6;
    boolean rtb_Logical7_n4;
    boolean rtb_Logical8_dq;
    boolean rtb_Logical9;
    boolean rtb_LogicalOperator_g3;
    boolean rtb_LogicalOperator_h;
    boolean rtb_LogicalOperator_hj;
    boolean rtb_LogicalOperator_lm;
    boolean rtb_LogicalOperator_ln;
    boolean rtb_LogicalOperator_pu;
    boolean rtb_Merge1_i;
    boolean rtb_Merge2;
    boolean rtb_OR1_kc;
    boolean rtb_OR1_ln;
    boolean rtb_OR1_mq;
    boolean rtb_Relational_Operator3;
    boolean rtb_Switch1_ahj;
    boolean rtb_Switch1_ajp;
    boolean rtb_Switch1_fl;
    boolean rtb_Switch1_fqq;
    boolean rtb_Switch1_lt;
    boolean rtb_Switch1_oz;
    boolean rtb_Switch1_pe;
    boolean rtb_Switch1_pz;
    boolean rtb_Switch5_f;
    boolean rtb_Switch_g_idx_1;
    boolean rtb_TmpSignalConversionAtVeADIR;
    boolean rtb_TmpSignalConversionAtVeAD_o;
    boolean rtb_TmpSignalConversionAtVeAD_p;
    boolean rtb_TmpSignalConversionAtVeA_ce;
    boolean rtb_TmpSignalConversionAtVeBP_b;
    boolean rtb_TmpSignalConversionAtVeBP_e;
    boolean rtb_TmpSignalConversionAtVeB_j2;
    boolean rtb_TmpSignalConversionAtVeB_j4;
    boolean rtb_TmpSignalConversionAtVeDFIR;
    boolean rtb_TmpSignalConversionAtVeDTRR;
    boolean rtb_TmpSignalConversionAtVeENGR;
    boolean rtb_TmpSignalConversionAtVeEN_b;
    boolean rtb_TmpSignalConversionAtVeEN_c;
    boolean rtb_TmpSignalConversionAtVeES_j;
    boolean rtb_TmpSignalConversionAtVeES_o;
    boolean rtb_TmpSignalConversionAtVeETQR;
    boolean rtb_TmpSignalConversionAtVeGE_o;
    boolean rtb_TmpSignalConversionAtVeHP_g;
    boolean rtb_TmpSignalConversionAtVeIMPR;
    boolean rtb_TmpSignalConversionAtVeIN_d;
    boolean rtb_TmpSignalConversionAtVeIN_n;
    boolean rtb_TmpSignalConversionAtVeIN_p;
    boolean rtb_TmpSignalConversionAtVePLTR;
    boolean rtb_TmpSignalConversionAtVePM_m;
    boolean rtb_UnitDelay_b2;
    boolean rtb_UnitDelay_eb;
    boolean rtb_UnitDelay_fh;
    boolean rtb_UnitDelay_lw;
    boolean rtb_VariantMerge_For_Variant_So;
    boolean rtb_VariantMerge_For_Variant__i;
    boolean rtb_VeSRAR_b_AuxPumpFail_Inhibi;
    boolean rtb_VeSRAR_b_CKSFailed;
    boolean rtb_VeSRAR_b_ECMFeedbackAfterOv;
    boolean rtb_VeSRAR_b_EnblPlgInEngRunTmr;
    boolean rtb_VeSRAR_b_EnblUnplgVehInPark;
    boolean rtb_VeSRAR_b_HVOverVoltFailur_2;
    boolean rtb_VeSRAR_b_HVOverVoltFailur_b;
    boolean rtb_VeSRAR_b_HVOverVoltFailure_;
    boolean rtb_VeSRAR_b_MtrA_InvrtrFaultd_;
    boolean rtb_VeSRAR_b_MtrB_InvrtrFault_g;
    boolean rtb_VeSRAR_b_PPCTIS_ReducePerfM;
    boolean rtb_VeSRAR_b_SpinUpFailed;
    boolean rtb_VeSRAR_b_TCMLmpFlt1;
    boolean rtb_VeSRAR_b_TCMLmpFlt2;
    boolean rtb_VeSRAR_b_WEDStuckOpen;
    boolean tmpRead;
    boolean tmpRead_0;
    boolean tmpRead_1;
    boolean tmpRead_10;
    boolean tmpRead_11;
    boolean tmpRead_2;
    boolean tmpRead_3;
    boolean tmpRead_4;
    boolean tmpRead_5;
    boolean tmpRead_6;
    boolean tmpRead_7;
    boolean tmpRead_9;
    boolean tmpRead_a;
    boolean tmpRead_c;
    boolean tmpRead_d;
    boolean tmpRead_e;
    boolean tmpRead_f;
    boolean tmpRead_g;
    boolean tmpRead_h;
    boolean tmpRead_i;
    boolean tmpRead_m;
    boolean tmpRead_v;
    boolean tmpRead_w;
    boolean tmpRead_z;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRAR_MedTEB'
     */
    /* DataStoreWrite: '<S2>/DSW_StatusByte_LostCommPwrtrn_OilPmp2' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommPwrtrn_OilPmp2'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommPwrtrn_OilPmp2_Value
        (&SRAR_ac_DW.StatusByte_LostCommPwrtrn_Oil_g);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_PwrtrnOilPmp2OvrSpd' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_PwrtrnOilPmp2OvrSpd'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_PwrtrnOilPmp2OvrSpd_Value
        (&SRAR_ac_DW.StatusByte_PwrtrnOilPmp2OvrSpd);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LostCommPwrtrn_OilPmp1' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommPwrtrn_OilPmp1'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommPwrtrn_OilPmp1_Value
        (&SRAR_ac_DW.StatusByte_LostCommPwrtrn_OilPm);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_PwrtrnOilPmp1OvrSpd' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_PwrtrnOilPmp1OvrSpd'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_PwrtrnOilPmp1OvrSpd_Value
        (&SRAR_ac_DW.StatusByte_PwrtrnOilPmp1OvrSpd);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_InvData_ABS11' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LF_WHL_HubDisConActCntrl'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LF_WHL_HubDisConActCntrl_Value
        (&SRAR_ac_DW.StatusByte_LF_WHL_HubDisConActC);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_InvData_ABS10' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_RF_WHL_HubDisConActCntrl'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_RF_WHL_HubDisConActCntrl_Value
        (&SRAR_ac_DW.StatusByte_RF_WHL_HubDisConActC);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_InvData_ABS9' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LF_WHL_HubDisConActPosSnsrCktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LF_WHL_HubDisConActPosSnsrCktPerf_Value
        (&SRAR_ac_DW.StatusByte_LF_WHL_HubDisConActP);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_InvData_ABS8' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LF_WHL_HubDisConActPosSnsr'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LF_WHL_HubDisConActPosSnsr_Value
        (&SRAR_ac_DW.StatusByte_LF_WHL_HubDisConAc_e);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_InvData_ABS7' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_RF_WHL_HubDisConActPosSnsrCktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_RF_WHL_HubDisConActPosSnsrCktPerf_Value
        (&SRAR_ac_DW.StatusByte_RF_WHL_HubDisConAc_f);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_InvData_ABS6' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_RF_WHL_HubDisConActPosSnsr'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_RF_WHL_HubDisConActPosSnsr_Value
        (&SRAR_ac_DW.StatusByte_RF_WHL_HubDisConActP);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_InvData_ABS5' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommRHSC2'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommRHSC2_Value
        (&SRAR_ac_DW.StatusByte_LostCommRHSC2);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_InvData_ABS4' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_RHSC2'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_RHSC2_Value
        (&SRAR_ac_DW.StatusByte_InvData_RHSC2);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_InvData_ABS3' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LosComm_CADM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LosComm_CADM_Value
        (&SRAR_ac_DW.StatusByte_LosComm_CADM);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_InvData_ABS2' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_CADM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_CADM_Value
        (&SRAR_ac_DW.StatusByte_InvData_CADM);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_InvData_CANC2_BCM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_CANC2_BCM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_CANC2_BCM_Value
        (&SRAR_ac_DW.StatusByte_InvData_CANC2_BCM);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_InvData_ABS1' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_ABS_BusB'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_ABS_BusB_Value
        (&SRAR_ac_DW.StatusByte_InvData_ABS_BusB);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_VehSpd_OSS_Corr' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_VehSpd_OSS_Corr'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_VehSpd_OSS_Corr_Value
        (&SRAR_ac_DW.StatusByte_VehSpd_OSS_Corr);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LostCommTrans' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommTrans'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommTrans_Value
        (&SRAR_ac_DW.StatusByte_LostCommTrans);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LostCommTrans_EPT' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommTrans_EPT'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommTrans_EPT_Value
        (&SRAR_ac_DW.StatusByte_LostCommTrans_EPT);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LostCommISM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommISM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommISM_Value
        (&SRAR_ac_DW.StatusByte_LostCommISM);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LostCommESM_BusB' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommESM_BusB'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommESM_BusB_Value
        (&SRAR_ac_DW.StatusByte_LostCommESM_BusB);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LostCommBCM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommBCM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommBCM_Value
        (&SRAR_ac_DW.StatusByte_LostCommBCM);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LostCommABS_BusB' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommABS_BusB'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommABS_BusB_Value
        (&SRAR_ac_DW.StatusByte_LostCommABS_BusB);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LostCommABSCM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommABSCM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommABSCM_Value
        (&SRAR_ac_DW.StatusByte_LostCommABSCM);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_InvData_TCM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_TCM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_TCM_Value
        (&SRAR_ac_DW.StatusByte_InvData_TCM);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_InvData_TCM_BusB' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_TCM_BusB'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_TCM_BusB_Value
        (&SRAR_ac_DW.StatusByte_InvData_TCM_BusB);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_InvData_ESM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_ESM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_ESM_Value
        (&SRAR_ac_DW.StatusByte_InvData_ESM);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_InvData_ESM_BusB' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_ESM_BusB'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_ESM_BusB_Value
        (&SRAR_ac_DW.StatusByte_InvData_ESM_BusB);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_InvData_BCM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_BCM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_BCM_Value
        (&SRAR_ac_DW.StatusByte_InvData_BCM);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_InvData_ABS' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_ABS'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_ABS_Value
        (&SRAR_ac_DW.StatusByte_InvData_ABS);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_AHCP_LostCommABS' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AHCP_LostCommABS'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AHCP_LostCommABS_Value
        (&SRAR_ac_DW.StatusByte_AHCP_LostCommABS);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_MtrElect_CoolPumAOvrSpd' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_MtrElect_CoolPumAOvrSpd'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_MtrElect_CoolPumAOvrSpd_Value
        (&SRAR_ac_DW.StatusByte_MtrElect_CoolPumAOvr);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LostCommMtrElectCoolPmpB' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommMtrElectCoolPmpB'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommMtrElectCoolPmpB_Value
        (&SRAR_ac_DW.StatusByte_LostCommMtrElectCo_o);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LostCommMtrElectCoolPmpA' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommMtrElectCoolPmpA'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommMtrElectCoolPmpA_Value
        (&SRAR_ac_DW.StatusByte_LostCommMtrElectCool);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LIN3_BusOff' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LIN3_BusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LIN3_BusOff_Value
        (&SRAR_ac_DW.StatusByte_LIN3_BusOff);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LIN2_BusOff' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LIN2_BusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LIN2_BusOff_Value
        (&SRAR_ac_DW.StatusByte_LIN2_BusOff);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LIN1_BusOff' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LIN1_BusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LIN1_BusOff_Value
        (&SRAR_ac_DW.StatusByte_LIN1_BusOff);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_ClntTempTooHigh' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_ClntTempTooHigh'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_ClntTempTooHigh_Value
        (&SRAR_ac_DW.StatusByte_ClntTempTooHigh);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_BattCoolPmpOveSpd' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattCoolPmpOveSpd'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattCoolPmpOveSpd_Value
        (&SRAR_ac_DW.StatusByte_BattCoolPmpOveSpd);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LostComm_GenrA_CM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostComm_GenrA_CM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostComm_GenrA_CM_Value
        (&SRAR_ac_DW.StatusByte_LostComm_GenrA_CM);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LostComm_DMCM_A' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostComm_DMCM_A'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostComm_DMCM_A_Value
        (&SRAR_ac_DW.StatusByte_LostComm_DMCM_A);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LostComm_DMCM_A_CANC11' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostComm_DMCM_A_CANC11'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostComm_DMCM_A_CANC11_Value
        (&SRAR_ac_DW.StatusByte_LostComm_DMCM_A_CANC);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LostCommDMCM_2' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommDMCM_2'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommDMCM_2_Value
        (&SRAR_ac_DW.StatusByte_LostCommDMCM_2);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LoC_MCPB_CANC11' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LoC_MCPB_CANC11'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LoC_MCPB_CANC11_Value
        (&SRAR_ac_DW.StatusByte_LoC_MCPB_CANC11);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LoC_MCPA_CANC11' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LoC_MCPA_CANC11'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LoC_MCPA_CANC11_Value
        (&SRAR_ac_DW.StatusByte_LoC_MCPA_CANC11);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_InvData_MCPB_CANC11' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_MCPB_CANC11'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_MCPB_CANC11_Value
        (&SRAR_ac_DW.StatusByte_InvData_MCPB_CANC11);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_InvData_MCPA_CANC11' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_MCPA_CANC11'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_MCPA_CANC11_Value
        (&SRAR_ac_DW.StatusByte_InvData_MCPA_CANC11);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_InvData_GenrA_CM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_GenrA_CM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_GenrA_CM_Value
        (&SRAR_ac_DW.StatusByte_InvData_GenrA_CM);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_InvData_DMCM_B' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_DMCM_B'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_DMCM_B_Value
        (&SRAR_ac_DW.StatusByte_InvData_DMCM_B);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_InvData_DMCM_A' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_DMCM_A'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_DMCM_A_Value
        (&SRAR_ac_DW.StatusByte_InvData_DMCM_A);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_InvData_DMCM_A_CANC11' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_DMCM_A_CANC11'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_DMCM_A_CANC11_Value
        (&SRAR_ac_DW.StatusByte_InvData_DMCM_A_CANC1);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LostCommSGCM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommSGCM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommSGCM_Value
        (&SRAR_ac_DW.StatusByte_LostCommSGCM);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_InvData_SGCM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_SGCM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_SGCM_Value
        (&SRAR_ac_DW.StatusByte_InvData_SGCM);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_DM_B_I_PwrSplyCkt' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_DM_B_I_PwrSplyCkt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_DM_B_I_PwrSplyCkt_Value
        (&SRAR_ac_DW.StatusByte_DM_B_I_PwrSplyCkt);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_StarterGenMechPerf_Slip' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_StarterGenMechPerf_Slip'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_StarterGenMechPerf_Slip_Value
        (&SRAR_ac_DW.StatusByte_StarterGenMechPerf_S);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_HybridGenPerf_Slip' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HybridGenPerf_Slip'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HybridGenPerf_Slip_Value
        (&SRAR_ac_DW.StatusByte_HybridGenPerf_Slip);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LostCommIDCM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommIDCM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommIDCM_Value
        (&SRAR_ac_DW.StatusByte_LostCommIDCM);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LostCommDCDC' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommDCDC'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommDCDC_Value
        (&SRAR_ac_DW.StatusByte_LostCommDCDC);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LosCommBECM_A' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LosCommBECM_A'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LosCommBECM_A_Value
        (&SRAR_ac_DW.StatusByte_LosCommBECM_A);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LosCommBECM_A_CANC11' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LosCommBECM_A_CANC11'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LosCommBECM_A_CANC11_Value
        (&SRAR_ac_DW.StatusByte_LosCommBECM_A_CANC11);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_InvData_IDCM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_IDCM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_IDCM_Value
        (&SRAR_ac_DW.StatusByte_InvData_IDCM);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_InvData_BECM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_BECM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_BECM_Value
        (&SRAR_ac_DW.StatusByte_InvData_BECM);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_InvData_BECM_CANC11' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_BECM_CANC11'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_BECM_CANC11_Value
        (&SRAR_ac_DW.StatusByte_InvData_BECM_CANC11);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_InvData_APM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_APM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_APM_Value
        (&SRAR_ac_DW.StatusByte_InvData_APM);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_HybBatPosConConCirPer' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HybBatPosConConCirPer'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HybBatPosConConCirPer_Value
        (&SRAR_ac_DW.StatusByte_HybBatPosConConCirPe);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_FD_CAN5_CommBusPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_FD_CAN5_CommBusPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_FD_CAN5_CommBusPerf_Value
        (&SRAR_ac_DW.StatusByte_HiSpdFD_CAN5CommBusP);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_FD_CAN5_CommBusOff' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_FD_CAN5_CommBusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_FD_CAN5_CommBusOff_Value
        (&SRAR_ac_DW.StatusByte_HiSpdFD_CAN5CommBus);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_FD_CAN11_CommBusPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_FD_CAN11_CommBusPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_FD_CAN11_CommBusPerf_Value
        (&SRAR_ac_DW.StatusByte_HiSpdFD_CAN11CommB_a);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_FD_CAN11_CommBusOff' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_FD_CAN11_CommBusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_FD_CAN11_CommBusOff_Value
        (&SRAR_ac_DW.StatusByte_HiSpdFD_CAN11CommBus);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_CommBus_B_Off' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CommBus_B_Off'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CommBus_B_Off_Value
        (&SRAR_ac_DW.StatusByte_CommBus_B_Off);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LostCommECM_PCM_A' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommECM_PCM_A'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommECM_PCM_A_Value
        (&SRAR_ac_DW.StatusByte_LostCommECM_PCM_A);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LostCommECM_A_BusB' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommECM_A_BusB'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommECM_A_BusB_Value
        (&SRAR_ac_DW.StatusByte_LostCommECM_A_BusB);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_InvData_ECM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_ECM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_ECM_Value
        (&SRAR_ac_DW.StatusByte_InvData_ECM);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_InvData_ECM_BusB' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_ECM_BusB'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_ECM_BusB_Value
        (&SRAR_ac_DW.StatusByte_InvData_ECM_BusB);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_HybSysPerf5' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HybSysPerf5'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HybSysPerf5_Value
        (&SRAR_ac_DW.StatusByte_HybSysPerf5);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_HybSysPerf2' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HybSysPerf2'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HybSysPerf2_Value
        (&SRAR_ac_DW.StatusByte_HybSysPerf2);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_HybSysPerf1' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HybSysPerf1'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HybSysPerf1_Value
        (&SRAR_ac_DW.StatusByte_HybSysPerf1);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_SPI_CommFlt' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_SPI_CommFlt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_SPI_CommFlt_Value
        (&SRAR_ac_DW.StatusByte_SPI_CommFlt);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LostCommIPC' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommIPC'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommIPC_Value
        (&SRAR_ac_DW.StatusByte_LostCommIPC);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LostCommHapticCM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommHapticCM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommHapticCM_Value
        (&SRAR_ac_DW.StatusByte_LostCommHapticCM);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LostCommABSCM_A' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommABSCM_A'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommABSCM_A_Value
        (&SRAR_ac_DW.StatusByte_LostCommABSCM_A);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LosComWitAntBraSysABSConModB' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LosComWitAntBraSysABSConModB'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LosComWitAntBraSysABSConModB_Value
        (&SRAR_ac_DW.StatusByte_LosComWitAntBraSysAB);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_InvData_HapticCM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_HapticCM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_HapticCM_Value
        (&SRAR_ac_DW.StatusByte_InvData_HapticCM);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_InvData_BCS' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_BCS'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_BCS_Value
        (&SRAR_ac_DW.StatusByte_InvData_BCS);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_InvData_ABSCM_A' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_ABSCM_A'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_ABSCM_A_Value
        (&SRAR_ac_DW.StatusByte_InvData_ABSCM_A);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_HiSpdCANCommBus' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HiSpdCANCommBus'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HiSpdCANCommBus_Value
        (&SRAR_ac_DW.StatusByte_HiSpdCANCommBus);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_HiSpdCANCommBusPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HiSpdCANCommBusPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HiSpdCANCommBusPerf_Value
        (&SRAR_ac_DW.StatusByte_HiSpdCANCommBusPerf);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_Fault' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_Fault'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_Fault_Value(&SRAR_ac_DW.StatusByte_Fault);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_FD_CAN3_CommBusPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_FD_CAN3_CommBusPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_FD_CAN3_CommBusPerf_Value
        (&SRAR_ac_DW.StatusByte_HiSpdFD_CAN3CommBusP);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_FD_CAN3_CommBusOff' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_FD_CAN3_CommBusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_FD_CAN3_CommBusOff_Value
        (&SRAR_ac_DW.StatusByte_HiSpdFD_CAN3CommBus);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_FD_CAN14_CommBusPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_FD_CAN14_CommBusPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_FD_CAN14_CommBusPerf_Value
        (&SRAR_ac_DW.StatusByte_HiSpdFD_CAN14CommB_l);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_FD_CAN14_CommBusOff' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_FD_CAN14_CommBusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_FD_CAN14_CommBusOff_Value
        (&SRAR_ac_DW.StatusByte_HiSpdFD_CAN14CommBus);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_CommBusOff' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CommBusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CommBusOff_Value
        (&SRAR_ac_DW.StatusByte_CommBusOff);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_CM_RedundMemPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CM_RedundMemPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CM_RedundMemPerf_Value
        (&SRAR_ac_DW.StatusByte_CM_RedundMemPerf);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_CM_ROM_Err' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CM_ROM_Err'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CM_ROM_Err_Value
        (&SRAR_ac_DW.StatusByte_CM_ROM_Err);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_CM_RAM_Err' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CM_RAM_Err'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CM_RAM_Err_Value
        (&SRAR_ac_DW.StatusByte_CM_RAM_Err);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_CM_ProcessorPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CM_ProcessorPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CM_ProcessorPerf_Value
        (&SRAR_ac_DW.StatusByte_CM_ProcessorPerf);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_CM_PLD' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CM_PLD'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CM_PLD_Value
        (&SRAR_ac_DW.StatusByte_CM_PLD);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_CM_OPDActivePerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CM_OPDActivePerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CM_OPDActivePerf_Value
        (&SRAR_ac_DW.StatusByte_CM_OPDActivePerf);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_CM_MainProc' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CM_MainProc'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CM_MainProc_Value
        (&SRAR_ac_DW.StatusByte_CM_MainProc);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_CM_LongTermMemReset' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CM_LongTermMemReset'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CM_LongTermMemReset_Value
        (&SRAR_ac_DW.StatusByte_CM_LongTermMemReset);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_CM_Chksum_Err' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CM_Chksum_Err'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CM_Chksum_Err_Value
        (&SRAR_ac_DW.StatusByte_CM_Chksum_Err);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_CM_AD_Perf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CM_AD_Perf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CM_AD_Perf_Value
        (&SRAR_ac_DW.StatusByte_CM_AD_Perf);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeBPCR_b_HV_BatCntctrOpenReq' */
    (void)Rte_Read_VeBPCR_b_HV_BatCntctrOpenReq_Value(&VeSRAR_b_MtrBZeroTrqActv);

    /* Inport: '<Root>/VeHSCR_n_Max_MtrA_Spd' */
    (void)Rte_Read_VeHSCR_n_Max_MtrA_Spd_Value(&rtb_Switch1_bgv);

    /* Inport: '<Root>/VeTINR_b_Inhibit_Mode2' */
    (void)Rte_Read_VeTINR_b_Inhibit_Mode2_Value(&Switch1_je);

    /* Inport: '<Root>/VeTINR_b_Inhibit_Mode1' */
    (void)Rte_Read_VeTINR_b_Inhibit_Mode1_Value(&Switch1_h);

    /* Inport: '<Root>/VeENGR_b_EngSysLowFuel' */
    (void)Rte_Read_VeENGR_b_EngSysLowFuel_Value(&tmpRead_a);

    /* Inport: '<Root>/VeBPCR_b_HV_BatVoltModMaxSFA' */
    (void)Rte_Read_VeBPCR_b_HV_BatVoltModMaxSFA_Value(&rtb_LogicalOperator_pu);

    /* Inport: '<Root>/VeBPCR_b_HV_BatCurrSFA' */
    (void)Rte_Read_VeBPCR_b_HV_BatCurrSFA_Value(&rtb_Switch1_pz);

    /* Inport: '<Root>/VeBPCR_b_HV_BatPackSOC_SFA' */
    (void)Rte_Read_VeBPCR_b_HV_BatPackSOC_SFA_Value(&rtb_Switch1_pe);

    /* Inport: '<Root>/VeBPCR_b_HV_BatMaxModTmpSFA' */
    (void)Rte_Read_VeBPCR_b_HV_BatMaxModTmpSFA_Value(&rtb_LogicalOperator_hj);

    /* Inport: '<Root>/VePWDR_b_BattOverTempWarning' */
    (void)Rte_Read_VePWDR_b_BattOverTempWarning_Value(&rtb_Logical6);

    /* Inport: '<Root>/VePMDR_b_SysVoltLowFA' */
    (void)Rte_Read_VePMDR_b_SysVoltLowFA_Value(&rtb_LogicalOperator_ln);

    /* Inport: '<Root>/VePMDR_b_SysVoltHighFA' */
    (void)Rte_Read_VePMDR_b_SysVoltHighFA_Value(&rtb_Switch1_oz);

    /* Inport: '<Root>/VePWDR_b_BattOverTempFltDtct' */
    (void)Rte_Read_VePWDR_b_BattOverTempFltDtct_Value(&rtb_OR1_mq);

    /* Inport: '<Root>/VePWDR_b_SOCLowFltDtct' */
    (void)Rte_Read_VePWDR_b_SOCLowFltDtct_Value(&rtb_AND_of);

    /* Inport: '<Root>/VePWDR_b_SOCHighFltDtct' */
    (void)Rte_Read_VePWDR_b_SOCHighFltDtct_Value(&rtb_Logical7_n4);

    /* Inport: '<Root>/VePWDR_b_HVUnderVoltFltDtct' */
    (void)Rte_Read_VePWDR_b_HVUnderVoltFltDtct_Value(&rtb_AND_owg);

    /* Inport: '<Root>/VePWDR_b_HVOverVoltFltDtct' */
    (void)Rte_Read_VePWDR_b_HVOverVoltFltDtct_Value(&rtb_OR1_kc);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRAR_MedTEB'
     */
    /* SignalConversion generated from: '<S2>/VeETQR_b_EngTrqActual_FA' incorporates:
     *  Inport: '<Root>/VeETQR_b_EngTrqActual_FA'
     */
    (void)Rte_Read_VeETQR_b_EngTrqActual_FA_Value
        (&rtb_TmpSignalConversionAtVeETQR);

    /* SignalConversion generated from: '<S2>/VeHPMR_t_PropSysActvTmr' incorporates:
     *  Inport: '<Root>/VeHPMR_t_PropSysActvTmr'
     */
    (void)Rte_Read_VeHPMR_t_PropSysActvTmr_Value
        (&rtb_TmpSignalConversionAtVeHPMR);

    /* SignalConversion generated from: '<S2>/VeVSDR_n_PrimNoSgndFltrd' incorporates:
     *  Inport: '<Root>/VeVSDR_n_PrimNoSgndFltrd'
     */
    (void)Rte_Read_VeVSDR_n_PrimNoSgndFltrd_Value
        (&rtb_TmpSignalConversionAtVeVSDR);

    /* SignalConversion generated from: '<S2>/VeDTRR_b_AxleTrqReqPrdtFA' incorporates:
     *  Inport: '<Root>/VeDTRR_b_AxleTrqReqPrdtFA'
     */
    (void)Rte_Read_VeDTRR_b_AxleTrqReqPrdtFA_Value
        (&rtb_TmpSignalConversionAtVeDTRR);

    /* SignalConversion generated from: '<S2>/VeHSER_e_RngEqnSel' incorporates:
     *  Inport: '<Root>/VeHSER_e_RngEqnSel'
     */
    (void)Rte_Read_VeHSER_e_RngEqnSel_Value(&rtb_TmpSignalConversionAtVeHS_h);

    /* SignalConversion generated from: '<S2>/VePMDR_t_RunCrankActive' incorporates:
     *  Inport: '<Root>/VePMDR_t_RunCrankActive'
     */
    (void)Rte_Read_VePMDR_t_RunCrankActive_Value
        (&rtb_TmpSignalConversionAtVePMDR);

    /* SignalConversion generated from: '<S2>/VeDFIR_b_PostCodeClrDiagDsbl' incorporates:
     *  Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl'
     */
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value
        (&rtb_TmpSignalConversionAtVeDFIR);

    /* SignalConversion generated from: '<S2>/VePMDR_e_PMM_PowerMode' incorporates:
     *  Inport: '<Root>/VePMDR_e_PMM_PowerMode'
     */
    (void)Rte_Read_VePMDR_e_PMM_PowerMode_Value(&rtb_TmpSignalConversionAtVePM_g);

    /* SignalConversion generated from: '<S2>/VeESSR_e_EngStrtStpMd' incorporates:
     *  Inport: '<Root>/VeESSR_e_EngStrtStpMd'
     */
    (void)Rte_Read_VeESSR_e_EngStrtStpMd_Value(&rtb_TmpSignalConversionAtVeES_p);

    /* SignalConversion generated from: '<S2>/VeBPCR_Pct_HV_BatPackSOC_Arb' incorporates:
     *  Inport: '<Root>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     */
    (void)Rte_Read_VeBPCR_Pct_HV_BatPackSOC_Arb_Value
        (&rtb_TmpSignalConversionAtVeBPCR);

    /* SignalConversion generated from: '<S2>/VeHPMR_b_PropSysActv' incorporates:
     *  Inport: '<Root>/VeHPMR_b_PropSysActv'
     */
    (void)Rte_Read_VeHPMR_b_PropSysActv_Value(&rtb_TmpSignalConversionAtVeHP_g);

    /* SignalConversion generated from: '<S2>/VeOHSR_e_RngDsrd' incorporates:
     *  Inport: '<Root>/VeOHSR_e_RngDsrd'
     */
    (void)Rte_Read_VeOHSR_e_RngDsrd_Value(&rtb_TmpSignalConversionAtVeOHSR);

    /* SignalConversion generated from: '<S2>/VeHSER_e_RngSt' incorporates:
     *  Inport: '<Root>/VeHSER_e_RngSt'
     */
    (void)Rte_Read_VeHSER_e_RngSt_Value(&rtb_TmpSignalConversionAtVeHSER);

    /* SignalConversion generated from: '<S2>/VeTFTR_T_TransOilTemp' incorporates:
     *  Inport: '<Root>/VeTFTR_T_TransOilTemp'
     */
    (void)Rte_Read_VeTFTR_T_TransOilTemp_Value(&rtb_TmpSignalConversionAtVeTFTR);

    /* SignalConversion generated from: '<S2>/VeHCCR_e_SCA1_St' incorporates:
     *  Inport: '<Root>/VeHCCR_e_SCA1_St'
     */
    (void)Rte_Read_VeHCCR_e_SCA1_St_Value(&rtb_TmpSignalConversionAtVeHC_p);

    /* SignalConversion generated from: '<S2>/VeHCCR_e_SCA2_St' incorporates:
     *  Inport: '<Root>/VeHCCR_e_SCA2_St'
     */
    (void)Rte_Read_VeHCCR_e_SCA2_St_Value(&rtb_TmpSignalConversionAtVeHC_f);

    /* SignalConversion generated from: '<S2>/VeTHMR_e_ThrmSysShtDwnFlt' incorporates:
     *  Inport: '<Root>/VeTHMR_e_ThrmSysShtDwnFlt'
     */
    (void)Rte_Read_VeTHMR_e_ThrmSysShtDwnFlt_Value
        (&rtb_TmpSignalConversionAtVeTHMR);

    /* SignalConversion generated from: '<S2>/VeOBCR_e_ChrgSysShtDwnFlt' incorporates:
     *  Inport: '<Root>/VeOBCR_e_ChrgSysShtDwnFlt'
     */
    (void)Rte_Read_VeOBCR_e_ChrgSysShtDwnFlt_Value
        (&rtb_TmpSignalConversionAtVeOBCR);

    /* SignalConversion generated from: '<S2>/VeGENR_b_LowVoltSysFld' incorporates:
     *  Inport: '<Root>/VeGENR_b_LowVoltSysFld'
     */
    (void)Rte_Read_VeGENR_b_LowVoltSysFld_Value(&rtb_TmpSignalConversionAtVeGE_o);

    /* SignalConversion generated from: '<S2>/VeGENR_U_IBS_BattVoltOut' incorporates:
     *  Inport: '<Root>/VeGENR_U_IBS_BattVoltOut'
     */
    (void)Rte_Read_VeGENR_U_IBS_BattVoltOut_Value
        (&rtb_TmpSignalConversionAtVeGENR);

    /* SignalConversion generated from: '<S2>/VeCSVR_v_VehSpd' incorporates:
     *  Inport: '<Root>/VeCSVR_v_VehSpd'
     */
    (void)Rte_Read_VeCSVR_v_VehSpd_Value(&rtb_TmpSignalConversionAtVeCSVR);

    /* SignalConversion generated from: '<S2>/VeSTRR_e_HybStrtrSt' incorporates:
     *  Inport: '<Root>/VeSTRR_e_HybStrtrSt'
     */
    (void)Rte_Read_VeSTRR_e_HybStrtrSt_Value(&rtb_TmpSignalConversionAtVeSTRR);

    /* SignalConversion generated from: '<S2>/VeTRGR_e_VldtdTransRngSt' incorporates:
     *  Inport: '<Root>/VeTRGR_e_VldtdTransRngSt'
     */
    (void)Rte_Read_VeTRGR_e_VldtdTransRngSt_Value
        (&rtb_TmpSignalConversionAtVeTRGR);

    /* SignalConversion generated from: '<S2>/VeESSR_b_AStrtFailed' incorporates:
     *  Inport: '<Root>/VeESSR_b_AStrtFailed'
     */
    (void)Rte_Read_VeESSR_b_AStrtFailed_Value(&rtb_TmpSignalConversionAtVeES_j);

    /* SignalConversion generated from: '<S2>/VeBPCR_b_PwrLimON' incorporates:
     *  Inport: '<Root>/VeBPCR_b_PwrLimON'
     */
    (void)Rte_Read_VeBPCR_b_PwrLimON_Value(&rtb_TmpSignalConversionAtVeB_j4);

    /* SignalConversion generated from: '<S2>/VeESSR_e_EngStartStopSt' incorporates:
     *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
     */
    (void)Rte_Read_VeESSR_e_EngStartStopSt_Value
        (&rtb_TmpSignalConversionAtVeES_d);

    /* SignalConversion generated from: '<S2>/VeOBCR_e_ChargingLevel' incorporates:
     *  Inport: '<Root>/VeOBCR_e_ChargingLevel'
     */
    (void)Rte_Read_VeOBCR_e_ChargingLevel_Value(&rtb_TmpSignalConversionAtVeOB_k);

    /* SignalConversion generated from: '<S2>/VeHCCR_V_UpperSump_Vol' incorporates:
     *  Inport: '<Root>/VeHCCR_V_UpperSump_Vol'
     */
    (void)Rte_Read_VeHCCR_V_UpperSump_Vol_Value(&rtb_TmpSignalConversionAtVeHCCR);

    /* SignalConversion generated from: '<S2>/VePWDR_e_HVOverVoltFailure' incorporates:
     *  Inport: '<Root>/VePWDR_e_HVOverVoltFailure'
     */
    (void)Rte_Read_VePWDR_e_HVOverVoltFailure_Value
        (&rtb_TmpSignalConversionAtVePWDR);

    /* SignalConversion generated from: '<S2>/VeHPMR_e_PropSysMode' incorporates:
     *  Inport: '<Root>/VeHPMR_e_PropSysMode'
     */
    (void)Rte_Read_VeHPMR_e_PropSysMode_Value(&rtb_TmpSignalConversionAtVeHP_f);

    /* SignalConversion generated from: '<S2>/VeTINR_d_TCMFailures' incorporates:
     *  Inport: '<Root>/VeTINR_d_TCMFailures'
     */
    (void)Rte_Read_VeTINR_d_TCMFailures_Value(&rtb_TmpSignalConversionAtVeTINR);

    /* SignalConversion generated from: '<S2>/VeESSR_g_StrtStpFailPhase' incorporates:
     *  Inport: '<Root>/VeESSR_g_StrtStpFailPhase'
     */
    (void)Rte_Read_VeESSR_g_StrtStpFailPhase_Value
        (&rtb_TmpSignalConversionAtVeESSR);

    /* SignalConversion generated from: '<S2>/VeINVR_e_MtrA_InvrtrSt' incorporates:
     *  Inport: '<Root>/VeINVR_e_MtrA_InvrtrSt'
     */
    (void)Rte_Read_VeINVR_e_MtrA_InvrtrSt_Value(&rtb_TmpSignalConversionAtVeIN_c);

    /* SignalConversion generated from: '<S2>/VeESSR_b_AStrtReattmptAllowed' incorporates:
     *  Inport: '<Root>/VeESSR_b_AStrtReattmptAllowed'
     */
    (void)Rte_Read_VeESSR_b_AStrtReattmptAllowed_Value
        (&rtb_TmpSignalConversionAtVeES_o);

    /* SignalConversion generated from: '<S2>/VePLTR_b_InFieldMode' incorporates:
     *  Inport: '<Root>/VePLTR_b_InFieldMode'
     */
    (void)Rte_Read_VePLTR_b_InFieldMode_Value(&rtb_TmpSignalConversionAtVePLTR);

    /* SignalConversion generated from: '<S2>/VeINVR_T_MtrB_Temp' incorporates:
     *  Inport: '<Root>/VeINVR_T_MtrB_Temp'
     */
    (void)Rte_Read_VeINVR_T_MtrB_Temp_Value(&rtb_TmpSignalConversionAtVeINVR);

    /* SignalConversion generated from: '<S2>/VeINVR_T_MtrA_Temp' incorporates:
     *  Inport: '<Root>/VeINVR_T_MtrA_Temp'
     */
    (void)Rte_Read_VeINVR_T_MtrA_Temp_Value(&rtb_TmpSignalConversionAtVeIN_k);

    /* SignalConversion generated from: '<S2>/VeBPCR_b_HV_BatCntctrOpenPending' incorporates:
     *  Inport: '<Root>/VeBPCR_b_HV_BatCntctrOpenPending'
     */
    (void)Rte_Read_VeBPCR_b_HV_BatCntctrOpenPending_Value
        (&rtb_TmpSignalConversionAtVeBP_e);

    /* SignalConversion generated from: '<S2>/VeENGR_e_ECMReqRemStop' incorporates:
     *  Inport: '<Root>/VeENGR_e_ECMReqRemStop'
     */
    (void)Rte_Read_VeENGR_e_ECMReqRemStop_Value(&rtb_TmpSignalConversionAtVeEN_n);

    /* SignalConversion generated from: '<S2>/VeINVR_b_MtrAFlt_HV_CntctrOpnRq' incorporates:
     *  Inport: '<Root>/VeINVR_b_MtrAFlt_HV_CntctrOpnRq'
     */
    (void)Rte_Read_VeINVR_b_MtrAFlt_HV_CntctrOpnRq_Value
        (&rtb_TmpSignalConversionAtVeIN_n);

    /* SignalConversion generated from: '<S2>/VeINVR_b_MtrBFlt_HV_CntctrOpnRq' incorporates:
     *  Inport: '<Root>/VeINVR_b_MtrBFlt_HV_CntctrOpnRq'
     */
    (void)Rte_Read_VeINVR_b_MtrBFlt_HV_CntctrOpnRq_Value
        (&rtb_TmpSignalConversionAtVeIN_p);

    /* SignalConversion generated from: '<S2>/VeENGR_b_LV12PwrFreeRq' incorporates:
     *  Inport: '<Root>/VeENGR_b_LV12PwrFreeRq'
     */
    (void)Rte_Read_VeENGR_b_LV12PwrFreeRq_Value(&rtb_TmpSignalConversionAtVeENGR);

    /* SignalConversion generated from: '<S2>/VeENGR_b_EngTrq_Enbl_Rq_TCM' incorporates:
     *  Inport: '<Root>/VeENGR_b_EngTrq_Enbl_Rq_TCM'
     */
    (void)Rte_Read_VeENGR_b_EngTrq_Enbl_Rq_TCM_Value
        (&rtb_TmpSignalConversionAtVeEN_b);

    /* SignalConversion generated from: '<S2>/VeTINR_d_TCMLimphomeFaults' incorporates:
     *  Inport: '<Root>/VeTINR_d_TCMLimphomeFaults'
     */
    (void)Rte_Read_VeTINR_d_TCMLimphomeFaults_Value
        (&rtb_TmpSignalConversionAtVeT_hz);

    /* SignalConversion generated from: '<S2>/VeENGR_e_ComFailECM_C1CAN' incorporates:
     *  Inport: '<Root>/VeENGR_e_ComFailECM_C1CAN'
     */
    (void)Rte_Read_VeENGR_e_ComFailECM_C1CAN_Value
        (&rtb_TmpSignalConversionAtVeEN_h);

    /* SignalConversion generated from: '<S2>/VeENGR_e_ComFailECM_ePtCAN' incorporates:
     *  Inport: '<Root>/VeENGR_e_ComFailECM_ePtCAN'
     */
    (void)Rte_Read_VeENGR_e_ComFailECM_ePtCAN_Value
        (&rtb_TmpSignalConversionAtVeEN_k);

    /* SignalConversion generated from: '<S2>/VeTINR_e_ComFailTCM_C1CAN' incorporates:
     *  Inport: '<Root>/VeTINR_e_ComFailTCM_C1CAN'
     */
    (void)Rte_Read_VeTINR_e_ComFailTCM_C1CAN_Value
        (&rtb_TmpSignalConversionAtVeTI_j);

    /* SignalConversion generated from: '<S2>/VeTINR_e_ComFailTCM_ePtCAN' incorporates:
     *  Inport: '<Root>/VeTINR_e_ComFailTCM_ePtCAN'
     */
    (void)Rte_Read_VeTINR_e_ComFailTCM_ePtCAN_Value
        (&rtb_TmpSignalConversionAtVeTI_a);

    /* SignalConversion generated from: '<S2>/VeBRKR_e_ComFailBSM_C1CAN' incorporates:
     *  Inport: '<Root>/VeBRKR_e_ComFailBSM_C1CAN'
     */
    (void)Rte_Read_VeBRKR_e_ComFailBSM_C1CAN_Value
        (&rtb_TmpSignalConversionAtVeBR_k);

    /* SignalConversion generated from: '<S2>/VeBRKR_e_ComFailBSM_C2CAN' incorporates:
     *  Inport: '<Root>/VeBRKR_e_ComFailBSM_C2CAN'
     */
    (void)Rte_Read_VeBRKR_e_ComFailBSM_C2CAN_Value
        (&rtb_TmpSignalConversionAtVeBRKR);

    /* SignalConversion generated from: '<S2>/VeIDCR_e_APM_FailureType' incorporates:
     *  Inport: '<Root>/VeIDCR_e_APM_FailureType'
     */
    (void)Rte_Read_VeIDCR_e_APM_FailureType_Value
        (&rtb_TmpSignalConversionAtVeIDCR);

    /* SignalConversion generated from: '<S2>/VePMDR_b_SysVoltLowFA_BF1' incorporates:
     *  Inport: '<Root>/VePMDR_b_SysVoltLowFA_BF1'
     */
    (void)Rte_Read_VePMDR_b_SysVoltLowFA_BF1_Value
        (&rtb_TmpSignalConversionAtVePM_m);

    /* SignalConversion generated from: '<S2>/VeDMIR_e_DriveStyleSts' incorporates:
     *  Inport: '<Root>/VeDMIR_e_DriveStyleSts'
     */
    (void)Rte_Read_VeDMIR_e_DriveStyleSts_Value(&rtb_TmpSignalConversionAtVeDMIR);

    /* SignalConversion generated from: '<S2>/VeTINR_e_TransLimpRequest' incorporates:
     *  Inport: '<Root>/VeTINR_e_TransLimpRequest'
     */
    (void)Rte_Read_VeTINR_e_TransLimpRequest_Value
        (&rtb_TmpSignalConversionAtVeT_nz);

    /* SignalConversion generated from: '<S2>/VeBPCR_b_ThrmlRnawyFlg' incorporates:
     *  Inport: '<Root>/VeBPCR_b_ThrmlRnawyFlg'
     */
    (void)Rte_Read_VeBPCR_b_ThrmlRnawyFlg_Value(&rtb_TmpSignalConversionAtVeBP_b);

    /* SignalConversion generated from: '<S2>/VeENGR_b_EngineStallDetected' incorporates:
     *  Inport: '<Root>/VeENGR_b_EngineStallDetected'
     */
    (void)Rte_Read_VeENGR_b_EngineStallDetected_Value
        (&rtb_TmpSignalConversionAtVeEN_c);

    /* SignalConversion generated from: '<S2>/VeTRNR_e_TCMActualEvenGear' incorporates:
     *  Inport: '<Root>/VeTRNR_e_TCMActualEvenGear'
     */
    (void)Rte_Read_VeTRNR_e_TCMActualEvenGear_Value
        (&rtb_TmpSignalConversionAtVeTRNR);

    /* SignalConversion generated from: '<S2>/VeTINR_e_Synchro2Sts' incorporates:
     *  Inport: '<Root>/VeTINR_e_Synchro2Sts'
     */
    (void)Rte_Read_VeTINR_e_Synchro2Sts_Value(&rtb_TmpSignalConversionAtVeTI_f);

    /* SignalConversion generated from: '<S2>/VeTINR_e_Synchro1Sts' incorporates:
     *  Inport: '<Root>/VeTINR_e_Synchro1Sts'
     */
    (void)Rte_Read_VeTINR_e_Synchro1Sts_Value(&rtb_TmpSignalConversionAtVeTI_k);

    /* SignalConversion generated from: '<S2>/VeIMPR_b_HighVoltageRapidShtdwnCmnd' incorporates:
     *  Inport: '<Root>/VeIMPR_b_HighVoltageRapidShtdwnCmnd'
     */
    (void)Rte_Read_VeIMPR_b_HighVoltageRapidShtdwnCmnd_Value
        (&rtb_TmpSignalConversionAtVeIMPR);

    /* SignalConversion generated from: '<S2>/VeBPCR_b_HVBatCntrWeld_ImpdOpn' incorporates:
     *  Inport: '<Root>/VeBPCR_b_HVBatCntrWeld_ImpdOpn'
     */
    (void)Rte_Read_VeBPCR_b_HVBatCntrWeld_ImpdOpn_Value
        (&rtb_TmpSignalConversionAtVeB_j2);

    /* SignalConversion generated from: '<S2>/VeINVR_b_MtrCFlt_HV_CntctrOpnRq' incorporates:
     *  Inport: '<Root>/VeINVR_b_MtrCFlt_HV_CntctrOpnRq'
     */
    (void)Rte_Read_VeINVR_b_MtrCFlt_HV_CntctrOpnRq_Value
        (&rtb_TmpSignalConversionAtVeIN_d);

    /* SignalConversion generated from: '<S2>/VeINVR_e_MCPA_CommFail' incorporates:
     *  Inport: '<Root>/VeINVR_e_MCPA_CommFail'
     */
    (void)Rte_Read_VeINVR_e_MCPA_CommFail_Value(&rtb_TmpSignalConversionAtVeIN_g);

    /* SignalConversion generated from: '<S2>/VeINVR_e_MCPB_CommFail' incorporates:
     *  Inport: '<Root>/VeINVR_e_MCPB_CommFail'
     */
    (void)Rte_Read_VeINVR_e_MCPB_CommFail_Value(&rtb_TmpSignalConversionAtVeI_ks);

    /* SignalConversion generated from: '<S2>/VeBPCR_e_BPCM_CommFail' incorporates:
     *  Inport: '<Root>/VeBPCR_e_BPCM_CommFail'
     */
    (void)Rte_Read_VeBPCR_e_BPCM_CommFail_Value(&rtb_TmpSignalConversionAtVeB_k4);

    /* SignalConversion generated from: '<S2>/VeADIR_b_LftWEDClosingFail' incorporates:
     *  Inport: '<Root>/VeADIR_b_LftWEDClosingFail'
     */
    (void)Rte_Read_VeADIR_b_LftWEDClosingFail_Value
        (&rtb_TmpSignalConversionAtVeADIR);

    /* SignalConversion generated from: '<S2>/VeADIR_b_LftWEDOpeningFail' incorporates:
     *  Inport: '<Root>/VeADIR_b_LftWEDOpeningFail'
     */
    (void)Rte_Read_VeADIR_b_LftWEDOpeningFail_Value
        (&rtb_TmpSignalConversionAtVeAD_o);

    /* SignalConversion generated from: '<S2>/VeADIR_b_RtWEDClosingFail' incorporates:
     *  Inport: '<Root>/VeADIR_b_RtWEDClosingFail'
     */
    (void)Rte_Read_VeADIR_b_RtWEDClosingFail_Value
        (&rtb_TmpSignalConversionAtVeAD_p);

    /* SignalConversion generated from: '<S2>/VeADIR_b_RtWEDOpeningFail' incorporates:
     *  Inport: '<Root>/VeADIR_b_RtWEDOpeningFail'
     */
    (void)Rte_Read_VeADIR_b_RtWEDOpeningFail_Value
        (&rtb_TmpSignalConversionAtVeA_ce);

    /* SignalConversion generated from: '<S2>/VeBPCR_T_BatModTmp' incorporates:
     *  Inport: '<Root>/VeBPCR_T_BatModTmp'
     */
    (void)Rte_Read_VeBPCR_T_BatModTmp_Value(&rtb_TmpSignalConversionAtVeB_lk);

    /* SignalConversion generated from: '<S2>/VeDMDR_e_TurtleMdSts' incorporates:
     *  Inport: '<Root>/VeDMDR_e_TurtleMdSts'
     */
    (void)Rte_Read_VeDMDR_e_TurtleMdSts_Value(&rtb_TmpSignalConversionAtVeDMDR);

    /* SignalConversion generated from: '<S2>/VeADIR_e_WEDMechFailure_Sts' incorporates:
     *  Inport: '<Root>/VeADIR_e_WEDMechFailure_Sts'
     */
    (void)Rte_Read_VeADIR_e_WEDMechFailure_Sts_Value
        (&rtb_TmpSignalConversionAtVeAD_l);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Switch: '<S2171>/Switch1' incorporates:
     *  Constant: '<S1783>/Constant'
     *  RelationalOperator: '<S1706>/Comparison1'
     */
    rtb_Switch1_ajp = (((uint32)rtb_TmpSignalConversionAtVePWDR) ==
                       CeHVTR_e_HVOverVoltFailureLimVehicleSpd);

    /* Logic: '<S1706>/Logical3' incorporates:
     *  Constant: '<S1782>/Constant'
     *  RelationalOperator: '<S1706>/Comparison4'
     */
    rtb_VeSRAR_b_HVOverVoltFailure_ = ((((uint32)rtb_TmpSignalConversionAtVePWDR)
        == CeHVTR_e_HVOverVoltFailureNoRegenLimp) || rtb_Switch1_ajp);

    /* Switch: '<S1815>/Switch1' */
    if (rtb_Switch1_ajp)
    {
        /* Switch: '<S2042>/Switch1' incorporates:
         *  Constant: '<S1371>/ConstantValue28'
         */
        rtb_Switch1_n3 = 16384U;
    }
    else
    {
        /* Switch: '<S2042>/Switch1' incorporates:
         *  Constant: '<S1371>/ConstantValue29'
         */
        rtb_Switch1_n3 = 0U;
    }

    /* End of Switch: '<S1815>/Switch1' */

    /* RelationalOperator: '<S1706>/Comparison2' incorporates:
     *  Constant: '<S1784>/Constant'
     */
    rtb_VeSRAR_b_HVOverVoltFailur_b = (((uint32)rtb_TmpSignalConversionAtVePWDR)
        == CeHVTR_e_HVOverVoltFailureSysShtdwn);

    /* Logic: '<S1756>/LogicalOperator' incorporates:
     *  Constant: '<S1756>/Constant1'
     *  Constant: '<S1756>/Constant2'
     *  DataStoreRead: '<S1756>/StatusByte_LosCommBECM_A'
     *  RelationalOperator: '<S1756>/RelationalOperator1'
     *  RelationalOperator: '<S1756>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S1756>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S1756>/BitwiseOperator2'
     */
    VeSRAC_b_BPCM_DualLOC_MCP_MC_Busoff = (((((sint32)
        SRAR_ac_DW.StatusByte_LosCommBECM_A) & 1) > 0) && ((((uint32)
        SRAR_ac_DW.StatusByte_LosCommBECM_A) & 64U) == 0U));

    /* Logic: '<S1688>/Logical11' incorporates:
     *  Constant: '<S1753>/Constant1'
     *  Constant: '<S1753>/Constant2'
     *  DataStoreRead: '<S1753>/StatusByte_InvData_BECM'
     *  Logic: '<S1753>/LogicalOperator'
     *  RelationalOperator: '<S1753>/RelationalOperator1'
     *  RelationalOperator: '<S1753>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S1753>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S1753>/BitwiseOperator2'
     */
    rtb_Logical11 = ((VeSRAC_b_BPCM_DualLOC_MCP_MC_Busoff) || (((((sint32)
                         SRAR_ac_DW.StatusByte_InvData_BECM) & 1) > 0) &&
                      ((((uint32)SRAR_ac_DW.StatusByte_InvData_BECM) & 64U) ==
                       0U)));

    /* Switch: '<S2171>/Switch1' incorporates:
     *  Constant: '<S1472>/Calib'
     *  Constant: '<S1473>/Calib'
     *  Logic: '<S1450>/Logical'
     *  RelationalOperator: '<S1450>/Comparison1'
     */
    rtb_Switch1_ajp = ((rtb_TmpSignalConversionAtVePMDR >
                        KeSRAR_t_InputDebounceCAN) &&
                       (KeSRAR_b_SignalPreProCessCAN_FltEnbl));

    /* Switch: '<S1763>/Switch1' */
    rtb_Switch1_lt = (rtb_Switch1_ajp && rtb_Logical11);

    /* Logic: '<S1758>/LogicalOperator' incorporates:
     *  Constant: '<S1758>/Constant1'
     *  Constant: '<S1758>/Constant2'
     *  DataStoreRead: '<S1758>/StatusByte_LostCommIDCM'
     *  RelationalOperator: '<S1758>/RelationalOperator1'
     *  RelationalOperator: '<S1758>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S1758>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S1758>/BitwiseOperator2'
     */
    rtb_LogicalOperator_g3 = (((((sint32)SRAR_ac_DW.StatusByte_LostCommIDCM) & 1)
        > 0) && ((((uint32)SRAR_ac_DW.StatusByte_LostCommIDCM) & 64U) == 0U));

    /* Switch: '<S1761>/Switch1' */
    if (rtb_Switch1_ajp)
    {
        /* Switch: '<S1761>/Switch1' incorporates:
         *  Constant: '<S1751>/Constant1'
         *  Constant: '<S1751>/Constant2'
         *  Constant: '<S1754>/Constant1'
         *  Constant: '<S1754>/Constant2'
         *  Constant: '<S1757>/Constant1'
         *  Constant: '<S1757>/Constant2'
         *  DataStoreRead: '<S1751>/StatusByte_InvData_APM'
         *  DataStoreRead: '<S1754>/StatusByte_InvData_IDCM'
         *  DataStoreRead: '<S1757>/StatusByte_LostCommDCDC'
         *  Logic: '<S1688>/Logical12'
         *  Logic: '<S1751>/LogicalOperator'
         *  Logic: '<S1754>/LogicalOperator'
         *  Logic: '<S1757>/LogicalOperator'
         *  RelationalOperator: '<S1751>/RelationalOperator1'
         *  RelationalOperator: '<S1751>/RelationalOperator2'
         *  RelationalOperator: '<S1754>/RelationalOperator1'
         *  RelationalOperator: '<S1754>/RelationalOperator2'
         *  RelationalOperator: '<S1757>/RelationalOperator1'
         *  RelationalOperator: '<S1757>/RelationalOperator2'
         *  S-Function (sfix_bitop): '<S1751>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S1751>/BitwiseOperator2'
         *  S-Function (sfix_bitop): '<S1754>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S1754>/BitwiseOperator2'
         *  S-Function (sfix_bitop): '<S1757>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S1757>/BitwiseOperator2'
         */
        rtb_Switch1_fl = ((((((((sint32)SRAR_ac_DW.StatusByte_LostCommDCDC) & 1)
                              > 0) && ((((uint32)
                                SRAR_ac_DW.StatusByte_LostCommDCDC) & 64U) == 0U))
                            || (((((sint32)SRAR_ac_DW.StatusByte_InvData_APM) &
                               1) > 0) && ((((uint32)
                                SRAR_ac_DW.StatusByte_InvData_APM) & 64U) == 0U)))
                           || rtb_LogicalOperator_g3) || (((((sint32)
                              SRAR_ac_DW.StatusByte_InvData_IDCM) & 1) > 0) &&
                           ((((uint32)SRAR_ac_DW.StatusByte_InvData_IDCM) & 64U)
                            == 0U)));
    }
    else
    {
        /* Switch: '<S1761>/Switch1' incorporates:
         *  Constant: '<S1688>/Constant1'
         */
        rtb_Switch1_fl = false;
    }

    /* End of Switch: '<S1761>/Switch1' */

    /* If: '<S1687>/If_APM_Disabled' */
    if (rtb_TmpSignalConversionAtVeGE_o)
    {
        /* Outputs for IfAction SubSystem: '<S1687>/APM_is_Disabled' incorporates:
         *  ActionPort: '<S1716>/ActionPort'
         */
        /* Outputs for Atomic SubSystem: '<S1719>/Hysteresis1' */
        /* Switch: '<S1741>/Switch1' incorporates:
         *  Constant: '<S1742>/Calib'
         *  RelationalOperator: '<S1741>/GreaterThan'
         */
        if (rtb_TmpSignalConversionAtVeGENR > KeSRAR_U_APM_VoltageMinHigh)
        {
            /* Switch: '<S1741>/Switch1' incorporates:
             *  Constant: '<S1741>/ConstantValue'
             */
            rtb_VeSRAR_b_SpinUpFailed = true;
        }
        else
        {
            /* Switch: '<S1741>/Switch1' incorporates:
             *  Constant: '<S1743>/Calib'
             *  RelationalOperator: '<S1741>/GreaterThan1'
             *  UnitDelay: '<S1741>/UnitDelay'
             */
            rtb_VeSRAR_b_SpinUpFailed = ((rtb_TmpSignalConversionAtVeGENR >=
                KeSRAR_U_APM_VoltageMinLow) && (SRAR_ac_DW.UnitDelay_DSTATE_et));
        }

        /* End of Switch: '<S1741>/Switch1' */

        /* Update for UnitDelay: '<S1741>/UnitDelay' */
        SRAR_ac_DW.UnitDelay_DSTATE_et = rtb_VeSRAR_b_SpinUpFailed;

        /* End of Outputs for SubSystem: '<S1719>/Hysteresis1' */

        /* If: '<S1716>/If' incorporates:
         *  Constant: '<S1739>/Calib'
         *  Logic: '<S1719>/Logical2'
         *  RelationalOperator: '<S1734>/GreaterThan'
         *  Switch: '<S1734>/Switch1'
         */
        if (!rtb_VeSRAR_b_SpinUpFailed)
        {
            /* Outputs for IfAction SubSystem: '<S1716>/LowVoltageLevel_NOK' incorporates:
             *  ActionPort: '<S1717>/ActionPort'
             */
            /* If: '<S1717>/If' */
            if (rtb_TmpSignalConversionAtVeHP_g)
            {
                /* Outputs for IfAction SubSystem: '<S1717>/PropSyst_IS_Active' incorporates:
                 *  ActionPort: '<S1721>/ActionPort'
                 */
                /* Logic: '<S1532>/Logical5' incorporates:
                 *  Constant: '<S1731>/Calib'
                 *  SignalConversion generated from: '<S1721>/APM_ReducedPerfMode'
                 */
                rtb_Logical5_oz = KeSRAR_b_APMDsblLowVoltNOK_ReducedPerfMode;

                /* Logic: '<S1532>/Logical4' incorporates:
                 *  Constant: '<S1728>/Calib'
                 *  Constant: '<S1730>/Calib'
                 *  RelationalOperator: '<S1721>/Comparison'
                 *  Switch: '<S1727>/Switch1'
                 */
                rtb_Logical4_b = ((rtb_TmpSignalConversionAtVeGENR <=
                                   KeSRAR_U_IBSBattThrldShtDwn) ||
                                  (KeSRAR_b_APMDsblLowVoltNOK_FltShtDwnCmd));

                /* UnitDelay: '<S1626>/UnitDelay' incorporates:
                 *  Constant: '<S1729>/Calib'
                 *  SignalConversion generated from: '<S1721>/APM_CreepTorqMode'
                 */
                rtb_UnitDelay_lw = KeSRAR_b_APMDsblLowVoltNOK_CreepTorqMode;

                /* Outputs for Atomic SubSystem: '<S1721>/Hysteresis' */
                /* Switch: '<S1724>/Switch1' incorporates:
                 *  Constant: '<S1733>/Calib'
                 *  RelationalOperator: '<S1724>/GreaterThan'
                 */
                if (rtb_TmpSignalConversionAtVeCSVR > KeSRAR_v_VehSpdImmbLow)
                {
                    /* Switch: '<S1724>/Switch1' incorporates:
                     *  Constant: '<S1724>/ConstantValue'
                     */
                    rtb_VeSRAR_b_SpinUpFailed = true;
                }
                else
                {
                    /* Switch: '<S1724>/Switch1' incorporates:
                     *  Constant: '<S1732>/Calib'
                     *  RelationalOperator: '<S1724>/GreaterThan1'
                     *  UnitDelay: '<S1724>/UnitDelay'
                     */
                    rtb_VeSRAR_b_SpinUpFailed =
                        ((rtb_TmpSignalConversionAtVeCSVR >=
                          KeSRAR_v_VehSpdImmbHigh) &&
                         (SRAR_ac_DW.UnitDelay_DSTATE_ozo));
                }

                /* End of Switch: '<S1724>/Switch1' */

                /* Update for UnitDelay: '<S1724>/UnitDelay' */
                SRAR_ac_DW.UnitDelay_DSTATE_ozo = rtb_VeSRAR_b_SpinUpFailed;

                /* End of Outputs for SubSystem: '<S1721>/Hysteresis' */

                /* RelationalOperator: '<S1532>/Comparison1' incorporates:
                 *  Switch: '<S1725>/Switch1'
                 */
                rtb_Comparison1_n4 = rtb_VeSRAR_b_SpinUpFailed;

                /* End of Outputs for SubSystem: '<S1717>/PropSyst_IS_Active' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S1717>/PropSys_NOT_Active' incorporates:
                 *  ActionPort: '<S1720>/ActionPort'
                 */
                /* Logic: '<S1532>/Logical5' incorporates:
                 *  Constant: '<S1723>/Calib'
                 *  SignalConversion generated from: '<S1720>/APM_ReducedPerfMode'
                 */
                rtb_Logical5_oz =
                    KeSRAR_b_APMDsblLowVoltNOKNoPSA_ReducedPerfMode;

                /* Logic: '<S1532>/Logical4' incorporates:
                 *  Constant: '<S1720>/FALSEConstant'
                 *  SignalConversion generated from: '<S1720>/APM_FltShtDwnCmd'
                 */
                rtb_Logical4_b = false;

                /* UnitDelay: '<S1626>/UnitDelay' incorporates:
                 *  Constant: '<S1722>/Calib'
                 *  SignalConversion generated from: '<S1720>/APM_CreepTorqMode'
                 */
                rtb_UnitDelay_lw = KeSRAR_b_APMDsblLowVoltNOKNoPSA_CreepTorqMode;

                /* RelationalOperator: '<S1532>/Comparison1' incorporates:
                 *  Constant: '<S1720>/FALSEConstant2'
                 *  SignalConversion generated from: '<S1720>/VeSRAC_NeutAllwd'
                 */
                rtb_Comparison1_n4 = false;

                /* End of Outputs for SubSystem: '<S1717>/PropSys_NOT_Active' */
            }

            /* End of If: '<S1717>/If' */
            /* End of Outputs for SubSystem: '<S1716>/LowVoltageLevel_NOK' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S1716>/LowVoltageLevel_OK' incorporates:
             *  ActionPort: '<S1718>/ActionPort'
             */
            /* Outputs for Atomic SubSystem: '<S1718>/Hysteresis' */
            if (rtb_TmpSignalConversionAtVeGENR <= KeSRAR_U_VltThrehold1RSP)
            {
                /* Switch: '<S1734>/Switch1' incorporates:
                 *  Constant: '<S1738>/Calib'
                 *  RelationalOperator: '<S1734>/GreaterThan1'
                 *  UnitDelay: '<S1734>/UnitDelay'
                 */
                rtb_VeSRAR_b_SpinUpFailed = ((rtb_TmpSignalConversionAtVeGENR >=
                    KeSRAR_U_VltThrehold1LSP) && (SRAR_ac_DW.UnitDelay_DSTATE_a3));
            }

            /* Update for UnitDelay: '<S1734>/UnitDelay' */
            SRAR_ac_DW.UnitDelay_DSTATE_a3 = rtb_VeSRAR_b_SpinUpFailed;

            /* End of Outputs for SubSystem: '<S1718>/Hysteresis' */

            /* Switch: '<S1735>/Switch1' */
            if (rtb_TmpSignalConversionAtVeHP_g)
            {
                /* Logic: '<S1532>/Logical5' incorporates:
                 *  Logic: '<S1718>/Logical'
                 */
                rtb_Logical5_oz = !rtb_VeSRAR_b_SpinUpFailed;
            }
            else
            {
                /* Logic: '<S1532>/Logical5' incorporates:
                 *  Constant: '<S1718>/FALSEConstant1'
                 */
                rtb_Logical5_oz = false;
            }

            /* End of Switch: '<S1735>/Switch1' */

            /* Logic: '<S1532>/Logical4' incorporates:
             *  Constant: '<S1740>/Calib'
             *  Switch: '<S1736>/Switch1'
             */
            rtb_Logical4_b = ((!rtb_TmpSignalConversionAtVeHP_g) &&
                              (KeSRAR_b_FltShtDwnPrecrankEnbl));

            /* Logic: '<S1528>/Logical2' incorporates:
             *  Switch: '<S1737>/Switch1'
             */
            rtb_VeSRAR_b_SpinUpFailed = rtb_TmpSignalConversionAtVeHP_g;

            /* UnitDelay: '<S1626>/UnitDelay' incorporates:
             *  Constant: '<S1718>/FALSEConstant'
             *  SignalConversion generated from: '<S1718>/APM_CreepTorqMode'
             */
            rtb_UnitDelay_lw = false;

            /* RelationalOperator: '<S1532>/Comparison1' incorporates:
             *  Constant: '<S1718>/TRUEConstant'
             *  SignalConversion generated from: '<S1718>/VeSRAC_b_NeutAllwd'
             */
            rtb_Comparison1_n4 = true;

            /* End of Outputs for SubSystem: '<S1716>/LowVoltageLevel_OK' */
        }

        /* End of If: '<S1716>/If' */
        /* End of Outputs for SubSystem: '<S1687>/APM_is_Disabled' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S1687>/APM_isNot_Disabled' incorporates:
         *  ActionPort: '<S1715>/ActionPort'
         */
        /* Logic: '<S1532>/Logical5' incorporates:
         *  Constant: '<S1715>/FALSEConstant'
         *  SignalConversion generated from: '<S1715>/APM_ReducedPerfMode'
         */
        rtb_Logical5_oz = false;

        /* Logic: '<S1532>/Logical4' incorporates:
         *  Constant: '<S1715>/FALSEConstant1'
         *  SignalConversion generated from: '<S1715>/APM_FltShtDwnCmd'
         */
        rtb_Logical4_b = false;

        /* UnitDelay: '<S1626>/UnitDelay' incorporates:
         *  Constant: '<S1715>/FALSEConstant2'
         *  SignalConversion generated from: '<S1715>/APM_CreepTorqMode'
         */
        rtb_UnitDelay_lw = false;

        /* RelationalOperator: '<S1532>/Comparison1' incorporates:
         *  Constant: '<S1715>/TRUEConstant'
         *  SignalConversion generated from: '<S1715>/VeSRAC_b_NeutAllwd'
         */
        rtb_Comparison1_n4 = true;

        /* Logic: '<S1528>/Logical2' incorporates:
         *  Constant: '<S1715>/TRUEConstant1'
         *  SignalConversion generated from: '<S1715>/VeSRAC_b_DrvAllwd'
         */
        rtb_VeSRAR_b_SpinUpFailed = true;

        /* End of Outputs for SubSystem: '<S1687>/APM_isNot_Disabled' */
    }

    /* End of If: '<S1687>/If_APM_Disabled' */

    /* Outputs for Atomic SubSystem: '<S1688>/TurnOnDelayTime' */
    /* Outputs for Atomic SubSystem: '<S1770>/EdgeRising' */
    /* Logic: '<S1771>/AND' incorporates:
     *  Logic: '<S1771>/OR1'
     *  UnitDelay: '<S1771>/UnitDelay'
     */
    rtb_AND_gv = (rtb_Switch1_lt && (!SRAR_ac_DW.UnitDelay_DSTATE_ii));

    /* Update for UnitDelay: '<S1771>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_ii = rtb_Switch1_lt;

    /* End of Outputs for SubSystem: '<S1770>/EdgeRising' */

    /* Switch: '<S1770>/Switch1' incorporates:
     *  Logic: '<S1770>/OR'
     *  Logic: '<S1770>/OR1'
     */
    if ((!rtb_Switch1_lt) || rtb_AND_gv)
    {
        /* Switch: '<S1770>/Switch1' incorporates:
         *  Constant: '<S1770>/ConstantValue1'
         */
        rtb_Switch1_glj = 0.0F;
    }
    else
    {
        /* Switch: '<S1770>/Switch1' incorporates:
         *  Constant: '<S1767>/Calib'
         *  Constant: '<S1768>/Calib'
         *  MinMax: '<S1770>/Minimum'
         *  Sum: '<S1770>/Summation'
         *  UnitDelay: '<S1770>/UnitDelay'
         */
        rtb_Switch1_glj = fminf(KeSRAR_t_BPCMLOC_Dbnc, KeSRAR_t_dT +
                                SRAR_ac_DW.UnitDelay_DSTATE_f);
    }

    /* End of Switch: '<S1770>/Switch1' */

    /* Update for UnitDelay: '<S1770>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_f = rtb_Switch1_glj;

    /* End of Outputs for SubSystem: '<S1688>/TurnOnDelayTime' */

    /* Logic: '<S1708>/Logical1' incorporates:
     *  Constant: '<S1709>/Calib'
     *  Constant: '<S1710>/Calib'
     *  Logic: '<S1708>/Logical2'
     *  Logic: '<S1708>/Logical3'
     */
    VeSRAC_b_Inhibit_RWD_TerrainMode = ((VeSRAR_b_MtrBZeroTrqActv &&
        (KeSRAR_b_EnblCntctrOpnReq_RWD)) || (rtb_TmpSignalConversionAtVeBP_e &&
        (KeSRAR_b_EnblCntctrPndng_RWD)));

    /* SignalConversion generated from: '<S1688>/VariantSource' */
#if Rte_SysCon_Variant_SRAR_1

    /* Logic: '<S1531>/Logical3' incorporates:
     *  Inport: '<Root>/VeDFIR_b_CANERRSTS_CANFD_11'
     */
    (void)Rte_Read_VeDFIR_b_CANERRSTS_CANFD_11_Value
        (&rtb_VeSRAR_b_AuxPumpFail_Inhibi);

#else

    /* Logic: '<S1531>/Logical3' incorporates:
     *  Constant: '<S1688>/FALSEConstant1'
     *  SignalConversion generated from: '<S1688>/VariantSource'
     */
    rtb_VeSRAR_b_AuxPumpFail_Inhibi = false;

#endif

    /* End of SignalConversion generated from: '<S1688>/VariantSource' */

    /* Logic: '<S1688>/Logical20' incorporates:
     *  Constant: '<S1746>/Constant1'
     *  Constant: '<S1746>/Constant2'
     *  Constant: '<S1747>/Constant1'
     *  Constant: '<S1747>/Constant2'
     *  DataStoreRead: '<S1746>/StatusByte_HiSpdFD_CAN11CommBus'
     *  DataStoreRead: '<S1747>/StatusByte_HiSpdFD_CAN11CommBusPerf'
     *  Logic: '<S1746>/LogicalOperator'
     *  Logic: '<S1747>/LogicalOperator'
     *  RelationalOperator: '<S1746>/RelationalOperator1'
     *  RelationalOperator: '<S1746>/RelationalOperator2'
     *  RelationalOperator: '<S1747>/RelationalOperator1'
     *  RelationalOperator: '<S1747>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S1746>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S1746>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S1747>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S1747>/BitwiseOperator2'
     */
    rtb_AND_gv = (((((((sint32)SRAR_ac_DW.StatusByte_HiSpdFD_CAN11CommBus) & 1) >
                     0) && ((((uint32)SRAR_ac_DW.StatusByte_HiSpdFD_CAN11CommBus)
                      & 64U) == 0U)) || (((((sint32)
                       SRAR_ac_DW.StatusByte_HiSpdFD_CAN11CommB_a) & 1) > 0) &&
                    ((((uint32)SRAR_ac_DW.StatusByte_HiSpdFD_CAN11CommB_a) & 64U)
                     == 0U))) || rtb_VeSRAR_b_AuxPumpFail_Inhibi);

    /* SignalConversion generated from: '<S1688>/VariantSource1' */
#if Rte_SysCon_Variant_SRAR_2

    /* Logic: '<S1531>/Logical3' incorporates:
     *  Inport: '<Root>/VeDFIR_b_CANERRSTS_CANFD_5'
     */
    (void)Rte_Read_VeDFIR_b_CANERRSTS_CANFD_5_Value
        (&rtb_VeSRAR_b_AuxPumpFail_Inhibi);

#else

    /* Logic: '<S1531>/Logical3' incorporates:
     *  Constant: '<S1688>/FALSEConstant2'
     *  SignalConversion generated from: '<S1688>/VariantSource1'
     */
    rtb_VeSRAR_b_AuxPumpFail_Inhibi = false;

#endif

    /* End of SignalConversion generated from: '<S1688>/VariantSource1' */

    /* Logic: '<S1688>/Logical21' incorporates:
     *  Constant: '<S1748>/Constant1'
     *  Constant: '<S1748>/Constant2'
     *  Constant: '<S1749>/Constant1'
     *  Constant: '<S1749>/Constant2'
     *  DataStoreRead: '<S1748>/StatusByte_HiSpdFD_CAN5CommBus'
     *  DataStoreRead: '<S1749>/StatusByte_HiSpdFD_CAN5CommBusPerf'
     *  Logic: '<S1748>/LogicalOperator'
     *  Logic: '<S1749>/LogicalOperator'
     *  RelationalOperator: '<S1748>/RelationalOperator1'
     *  RelationalOperator: '<S1748>/RelationalOperator2'
     *  RelationalOperator: '<S1749>/RelationalOperator1'
     *  RelationalOperator: '<S1749>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S1748>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S1748>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S1749>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S1749>/BitwiseOperator2'
     */
    rtb_Logical21 = (((((((sint32)SRAR_ac_DW.StatusByte_HiSpdFD_CAN5CommBus) & 1)
                        > 0) && ((((uint32)
                          SRAR_ac_DW.StatusByte_HiSpdFD_CAN5CommBus) & 64U) ==
                        0U)) || (((((sint32)
                          SRAR_ac_DW.StatusByte_HiSpdFD_CAN5CommBusP) & 1) > 0) &&
                       ((((uint32)SRAR_ac_DW.StatusByte_HiSpdFD_CAN5CommBusP) &
                         64U) == 0U))) || rtb_VeSRAR_b_AuxPumpFail_Inhibi);

    /* Switch: '<S1428>/Switch1' */
    if (rtb_Switch1_ajp)
    {
        /* Switch: '<S1428>/Switch1' incorporates:
         *  Constant: '<S1410>/Constant1'
         *  Constant: '<S1410>/Constant2'
         *  Constant: '<S1437>/Calib'
         *  DataStoreRead: '<S1410>/StatusByte_CommBusOff'
         *  Logic: '<S1364>/Logical16'
         *  Logic: '<S1364>/Logical17'
         *  Logic: '<S1364>/Logical18'
         *  Logic: '<S1410>/LogicalOperator'
         *  RelationalOperator: '<S1410>/RelationalOperator1'
         *  RelationalOperator: '<S1410>/RelationalOperator2'
         *  S-Function (sfix_bitop): '<S1410>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S1410>/BitwiseOperator2'
         */
        VeSRAC_b_ePT_BusOff = ((((((sint32)SRAR_ac_DW.StatusByte_CommBusOff) & 1)
            > 0) && ((((uint32)SRAR_ac_DW.StatusByte_CommBusOff) & 64U) == 0U)) ||
                               ((rtb_AND_gv || rtb_Logical21) &&
                                (KeSRAR_b_enbl_ePT_BusOff_M182)));
    }
    else
    {
        /* Switch: '<S1428>/Switch1' incorporates:
         *  Constant: '<S1364>/Constant1'
         */
        VeSRAC_b_ePT_BusOff = false;
    }

    /* End of Switch: '<S1428>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSTRR_b_BumpStrtInhbt' */
    (void)Rte_Read_VeSTRR_b_BumpStrtInhbt_Value(&rtb_VeSRAR_b_WEDStuckOpen);

    /* Inport: '<Root>/VeESPR_b_EngNegSpdFltDtct' */
    (void)Rte_Read_VeESPR_b_EngNegSpdFltDtct_Value(&rtb_Switch1_ahj);

    /* Inport: '<Root>/VeESPR_b_EngOvrSpdFltDtct' */
    (void)Rte_Read_VeESPR_b_EngOvrSpdFltDtct_Value(&rtb_Logical8_dq);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRAR_MedTEB'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Logic: '<S1688>/Logical8' incorporates:
     *  Logic: '<S1688>/Logical7'
     */
    VeSRAC_b_ContctrCirPerfOpenCntc = (rtb_Switch1_lt || (VeSRAC_b_ePT_BusOff));

    /* Logic: '<S1688>/Logical4' incorporates:
     *  Constant: '<S1750>/Constant1'
     *  Constant: '<S1750>/Constant2'
     *  DataStoreRead: '<S1750>/StatusByte_HybBatPosConConCirPer'
     *  Logic: '<S1688>/Logical8'
     *  Logic: '<S1750>/LogicalOperator'
     *  RelationalOperator: '<S1750>/RelationalOperator1'
     *  RelationalOperator: '<S1750>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S1750>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S1750>/BitwiseOperator2'
     */
    VeSRAC_b_ContctrCirPerfOpenCntctr = (VeSRAC_b_ContctrCirPerfOpenCntc &&
        (((((sint32)SRAR_ac_DW.StatusByte_HybBatPosConConCirPe) & 1) > 0) &&
         ((((uint32)SRAR_ac_DW.StatusByte_HybBatPosConConCirPe) & 64U) == 0U)));

    /* Switch: '<S1810>/Switch1' incorporates:
     *  Constant: '<S1371>/ConstantValue2'
     *  Constant: '<S1371>/ConstantValue3'
     */
    if (rtb_AND_owg)
    {
        rtb_AND_d = 2;
    }
    else
    {
        rtb_AND_d = 0;
    }

    /* End of Switch: '<S1810>/Switch1' */

    /* Switch: '<S1821>/Switch1' incorporates:
     *  Constant: '<S1371>/ConstantValue4'
     *  Constant: '<S1371>/ConstantValue5'
     */
    if (rtb_Logical7_n4)
    {
        rtb_Switch1_fw = 4;
    }
    else
    {
        rtb_Switch1_fw = 0;
    }

    /* End of Switch: '<S1821>/Switch1' */

    /* Switch: '<S1832>/Switch1' incorporates:
     *  Constant: '<S1371>/ConstantValue6'
     *  Constant: '<S1371>/ConstantValue7'
     */
    if (rtb_AND_of)
    {
        rtb_AND_cg = 8;
    }
    else
    {
        rtb_AND_cg = 0;
    }

    /* End of Switch: '<S1832>/Switch1' */

    /* Switch: '<S1835>/Switch1' incorporates:
     *  Constant: '<S1371>/ConstantValue8'
     *  Constant: '<S1371>/ConstantValue9'
     */
    if (rtb_OR1_mq)
    {
        rtb_OR1_ot = 16;
    }
    else
    {
        rtb_OR1_ot = 0;
    }

    /* End of Switch: '<S1835>/Switch1' */

    /* Switch: '<S1836>/Switch1' incorporates:
     *  Constant: '<S1371>/ConstantValue10'
     *  Constant: '<S1371>/ConstantValue11'
     */
    if (rtb_Logical6)
    {
        rtb_Logical6_0 = 32;
    }
    else
    {
        rtb_Logical6_0 = 0;
    }

    /* End of Switch: '<S1836>/Switch1' */

    /* Switch: '<S1837>/Switch1' incorporates:
     *  Constant: '<S1371>/ConstantValue12'
     *  Constant: '<S1371>/ConstantValue13'
     */
    if (rtb_LogicalOperator_hj)
    {
        rtb_LogicalOperator_cr = 64;
    }
    else
    {
        rtb_LogicalOperator_cr = 0;
    }

    /* End of Switch: '<S1837>/Switch1' */

    /* Switch: '<S1838>/Switch1' incorporates:
     *  Constant: '<S1371>/ConstantValue14'
     *  Constant: '<S1371>/ConstantValue15'
     */
    if (rtb_Switch1_pe)
    {
        rtb_Switch1_h0 = 128;
    }
    else
    {
        rtb_Switch1_h0 = 0;
    }

    /* End of Switch: '<S1838>/Switch1' */

    /* Switch: '<S1839>/Switch1' incorporates:
     *  Constant: '<S1371>/ConstantValue16'
     *  Constant: '<S1371>/ConstantValue17'
     */
    if (rtb_Switch1_pz)
    {
        rtb_Switch1_mu = 256;
    }
    else
    {
        rtb_Switch1_mu = 0;
    }

    /* End of Switch: '<S1839>/Switch1' */

    /* Switch: '<S1840>/Switch1' incorporates:
     *  Constant: '<S1371>/ConstantValue18'
     *  Constant: '<S1371>/ConstantValue19'
     */
    if (rtb_LogicalOperator_pu)
    {
        rtb_LogicalOperator_mad = 512;
    }
    else
    {
        rtb_LogicalOperator_mad = 0;
    }

    /* End of Switch: '<S1840>/Switch1' */

    /* Switch: '<S1811>/Switch1' incorporates:
     *  Constant: '<S1371>/ConstantValue20'
     *  Constant: '<S1371>/ConstantValue21'
     *  Constant: '<S1794>/Constant'
     *  RelationalOperator: '<S1711>/Relational_Operator'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeOBCR) == CeSRAR_e_RecSysShtDwn)
    {
        rtb_TmpSignalConversionAtVeOB_1 = 1024;
    }
    else
    {
        rtb_TmpSignalConversionAtVeOB_1 = 0;
    }

    /* End of Switch: '<S1811>/Switch1' */

    /* Switch: '<S1812>/Switch1' incorporates:
     *  Constant: '<S1371>/ConstantValue22'
     *  Constant: '<S1371>/ConstantValue23'
     *  Constant: '<S1795>/Constant'
     *  RelationalOperator: '<S1711>/Relational_Operator1'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeOBCR) == CeSRAR_e_RetSysShtDwn)
    {
        rtb_TmpSignalConversionAtVeOB_2 = 2048;
    }
    else
    {
        rtb_TmpSignalConversionAtVeOB_2 = 0;
    }

    /* End of Switch: '<S1812>/Switch1' */

    /* Switch: '<S1813>/Switch1' incorporates:
     *  Constant: '<S1371>/ConstantValue24'
     *  Constant: '<S1371>/ConstantValue25'
     *  Constant: '<S1796>/Constant'
     *  RelationalOperator: '<S1711>/Relational_Operator2'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeOBCR) == CeSRAR_e_NonRecSysShtDwn)
    {
        rtb_TmpSignalConversionAtVeOB_3 = 4096;
    }
    else
    {
        rtb_TmpSignalConversionAtVeOB_3 = 0;
    }

    /* End of Switch: '<S1813>/Switch1' */

    /* Switch: '<S1814>/Switch1' incorporates:
     *  Constant: '<S1371>/ConstantValue26'
     *  Constant: '<S1371>/ConstantValue27'
     */
    if (rtb_VeSRAR_b_HVOverVoltFailure_)
    {
        rtb_VeSRAR_b_HVOverVoltFailur_1 = 8192;
    }
    else
    {
        rtb_VeSRAR_b_HVOverVoltFailur_1 = 0;
    }

    /* End of Switch: '<S1814>/Switch1' */

    /* Switch: '<S1816>/Switch1' incorporates:
     *  Constant: '<S1371>/ConstantValue30'
     *  Constant: '<S1371>/ConstantValue31'
     */
    if (rtb_VeSRAR_b_HVOverVoltFailur_b)
    {
        rtb_VeSRAR_b_HVOverVoltFailur_f = 32768;
    }
    else
    {
        rtb_VeSRAR_b_HVOverVoltFailur_f = 0;
    }

    /* End of Switch: '<S1816>/Switch1' */

    /* Switch: '<S1817>/Switch1' incorporates:
     *  Constant: '<S1371>/ConstantValue32'
     *  Constant: '<S1371>/ConstantValue33'
     */
    if (rtb_TmpSignalConversionAtVeB_j4)
    {
        rtb_Switch1_ck = 65536U;
    }
    else
    {
        rtb_Switch1_ck = 0U;
    }

    /* End of Switch: '<S1817>/Switch1' */

    /* Switch: '<S1826>/Switch1' incorporates:
     *  Constant: '<S1371>/ConstantValue58'
     *  Constant: '<S1371>/ConstantValue59'
     */
    if (rtb_Switch1_oz)
    {
        rtb_Switch1_a3 = 262144U;
    }
    else
    {
        rtb_Switch1_a3 = 0U;
    }

    /* End of Switch: '<S1826>/Switch1' */

    /* Switch: '<S1827>/Switch1' incorporates:
     *  Constant: '<S1371>/ConstantValue60'
     *  Constant: '<S1371>/ConstantValue61'
     */
    if (rtb_LogicalOperator_ln)
    {
        rtb_Switch1_anw = 524288U;
    }
    else
    {
        rtb_Switch1_anw = 0U;
    }

    /* End of Switch: '<S1827>/Switch1' */

    /* Switch: '<S1828>/Switch1' incorporates:
     *  Constant: '<S1371>/ConstantValue62'
     *  Constant: '<S1371>/ConstantValue63'
     */
    if (rtb_Switch1_lt)
    {
        rtb_Switch1_bk = 1048576U;
    }
    else
    {
        rtb_Switch1_bk = 0U;
    }

    /* End of Switch: '<S1828>/Switch1' */

    /* Switch: '<S1829>/Switch1' incorporates:
     *  Constant: '<S1371>/ConstantValue34'
     *  Constant: '<S1371>/ConstantValue35'
     */
    if (rtb_Switch1_fl)
    {
        rtb_Switch1_c = 2097152U;
    }
    else
    {
        rtb_Switch1_c = 0U;
    }

    /* End of Switch: '<S1829>/Switch1' */

    /* Switch: '<S1830>/Switch1' incorporates:
     *  Constant: '<S1371>/ConstantValue36'
     *  Constant: '<S1371>/ConstantValue37'
     */
    if (rtb_Logical5_oz)
    {
        rtb_Logical5_cn = 4194304U;
    }
    else
    {
        rtb_Logical5_cn = 0U;
    }

    /* End of Switch: '<S1830>/Switch1' */

    /* Switch: '<S1831>/Switch1' incorporates:
     *  Constant: '<S1371>/ConstantValue38'
     *  Constant: '<S1371>/ConstantValue39'
     */
    if (rtb_Logical4_b)
    {
        rtb_Switch1_mr = 8388608U;
    }
    else
    {
        rtb_Switch1_mr = 0U;
    }

    /* End of Switch: '<S1831>/Switch1' */

    /* Switch: '<S1833>/Switch1' incorporates:
     *  Constant: '<S1371>/ConstantValue40'
     *  Constant: '<S1371>/ConstantValue41'
     */
    if (rtb_UnitDelay_lw)
    {
        rtb_UnitDelay_k3 = 16777216U;
    }
    else
    {
        rtb_UnitDelay_k3 = 0U;
    }

    /* End of Switch: '<S1833>/Switch1' */

    /* Switch: '<S1834>/Switch1' incorporates:
     *  Constant: '<S1371>/ConstantValue42'
     *  Constant: '<S1371>/ConstantValue43'
     *  Logic: '<S11>/Logical3'
     */
    if (!rtb_Comparison1_n4)
    {
        rtb_Comparison1_ij = 33554432U;
    }
    else
    {
        rtb_Comparison1_ij = 0U;
    }

    /* End of Switch: '<S1834>/Switch1' */

    /* Switch: '<S1819>/Switch1' incorporates:
     *  Constant: '<S1371>/ConstantValue45'
     *  Constant: '<S1371>/ConstantValue46'
     *  Logic: '<S11>/Logical1'
     */
    if (!rtb_VeSRAR_b_SpinUpFailed)
    {
        rtb_VeSRAR_b_SpinUpFailed_0 = 67108864U;
    }
    else
    {
        rtb_VeSRAR_b_SpinUpFailed_0 = 0U;
    }

    /* End of Switch: '<S1819>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S1688>/TurnOnDelayTime' */
    /* Switch: '<S1820>/Switch1' incorporates:
     *  Constant: '<S1371>/ConstantValue47'
     *  Constant: '<S1371>/ConstantValue48'
     *  Constant: '<S1767>/Calib'
     *  Logic: '<S1770>/AND'
     *  RelationalOperator: '<S1770>/GreaterThan'
     */
    if (rtb_Switch1_lt && (rtb_Switch1_glj >= KeSRAR_t_BPCMLOC_Dbnc))
    {
        rtb_Switch1_f3 = 134217728U;
    }
    else
    {
        rtb_Switch1_f3 = 0U;
    }

    /* End of Switch: '<S1820>/Switch1' */
    /* End of Outputs for SubSystem: '<S1688>/TurnOnDelayTime' */

    /* Switch: '<S1822>/Switch1' incorporates:
     *  Constant: '<S1371>/ConstantValue49'
     *  Constant: '<S1371>/ConstantValue50'
     */
    if (VeSRAR_b_MtrBZeroTrqActv)
    {
        rtb_Switch1_fxq = 268435456U;
    }
    else
    {
        rtb_Switch1_fxq = 0U;
    }

    /* End of Switch: '<S1822>/Switch1' */

    /* Switch: '<S1823>/Switch1' incorporates:
     *  Constant: '<S1371>/ConstantValue51'
     *  Constant: '<S1371>/ConstantValue52'
     */
    if (rtb_TmpSignalConversionAtVeBP_e)
    {
        rtb_TmpSignalConversionAtVeBP_p = 536870912U;
    }
    else
    {
        rtb_TmpSignalConversionAtVeBP_p = 0U;
    }

    /* End of Switch: '<S1823>/Switch1' */

    /* Switch: '<S1824>/Switch1' incorporates:
     *  Constant: '<S1371>/ConstantValue53'
     *  Constant: '<S1371>/ConstantValue54'
     */
    if (VeSRAC_b_Inhibit_RWD_TerrainMode)
    {
        rtb_VeSRAR_b_TCMLmpFlt2_tmp = 1073741824U;
    }
    else
    {
        rtb_VeSRAR_b_TCMLmpFlt2_tmp = 0U;
    }

    /* End of Switch: '<S1824>/Switch1' */

    /* Switch: '<S1825>/Switch1' incorporates:
     *  Constant: '<S1371>/ConstantValue56'
     *  Constant: '<S1371>/ConstantValue57'
     */
    if (VeSRAC_b_ContctrCirPerfOpenCntctr)
    {
        rtb_TmpSignalConversionAtVeEN_d = 2147483648U;
    }
    else
    {
        rtb_TmpSignalConversionAtVeEN_d = 0U;
    }

    /* End of Switch: '<S1825>/Switch1' */

    /* S-Function (sfix_bitop): '<S1371>/BitwiseLogicalOperator' incorporates:
     *  Switch: '<S1809>/Switch1'
     */
    rtb_Switch1_n3 = (((((((((((((((((((((((((((((((uint32)(rtb_OR1_kc ? 1U : 0U))
        | ((uint32)rtb_AND_d)) | ((uint32)rtb_Switch1_fw)) | ((uint32)rtb_AND_cg))
        | ((uint32)rtb_OR1_ot)) | ((uint32)rtb_Logical6_0)) | ((uint32)
        rtb_LogicalOperator_cr)) | ((uint32)rtb_Switch1_h0)) | ((uint32)
        rtb_Switch1_mu)) | ((uint32)rtb_LogicalOperator_mad)) | ((uint32)
        rtb_TmpSignalConversionAtVeOB_1)) | ((uint32)
        rtb_TmpSignalConversionAtVeOB_2)) | ((uint32)
        rtb_TmpSignalConversionAtVeOB_3)) | ((uint32)
        rtb_VeSRAR_b_HVOverVoltFailur_1)) | rtb_Switch1_n3) | ((uint32)
        rtb_VeSRAR_b_HVOverVoltFailur_f)) | rtb_Switch1_ck) | rtb_Switch1_a3) |
        rtb_Switch1_anw) | rtb_Switch1_bk) | rtb_Switch1_c) | rtb_Logical5_cn) |
        rtb_Switch1_mr) | rtb_UnitDelay_k3) | rtb_Comparison1_ij) |
                          rtb_VeSRAR_b_SpinUpFailed_0) | rtb_Switch1_f3) |
                        rtb_Switch1_fxq) | rtb_TmpSignalConversionAtVeBP_p) |
                      rtb_VeSRAR_b_TCMLmpFlt2_tmp) |
        rtb_TmpSignalConversionAtVeEN_d;

    /* Logic: '<S1578>/LogicalOperator' incorporates:
     *  Constant: '<S1578>/Constant1'
     *  Constant: '<S1578>/Constant2'
     *  DataStoreRead: '<S1578>/StatusByte_LostCommECM_PCM_A'
     *  RelationalOperator: '<S1578>/RelationalOperator1'
     *  RelationalOperator: '<S1578>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S1578>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S1578>/BitwiseOperator2'
     */
    VeSRAC_b_ECM_DualLOC_CRC_MC_Busoff = (((((sint32)
        SRAR_ac_DW.StatusByte_LostCommECM_PCM_A) & 1) > 0) && ((((uint32)
        SRAR_ac_DW.StatusByte_LostCommECM_PCM_A) & 64U) == 0U));

    /* Switch: '<S1579>/Switch1' incorporates:
     *  Switch: '<S1581>/Switch1'
     */
    if (rtb_Switch1_ajp)
    {
        /* Switch: '<S1579>/Switch1' incorporates:
         *  Constant: '<S1574>/Constant1'
         *  Constant: '<S1574>/Constant2'
         *  Constant: '<S1575>/Constant1'
         *  Constant: '<S1575>/Constant2'
         *  Constant: '<S1577>/Constant1'
         *  Constant: '<S1577>/Constant2'
         *  Constant: '<S1585>/Calib'
         *  Constant: '<S1587>/Calib'
         *  DataStoreRead: '<S1574>/StatusByte_InvData_ECM'
         *  DataStoreRead: '<S1575>/StatusByte_InvData_ECM_BusB'
         *  DataStoreRead: '<S1577>/StatusByte_LostCommECM_A_BusB'
         *  Logic: '<S1529>/Logical21'
         *  Logic: '<S1529>/Logical5'
         *  Logic: '<S1529>/Logical9'
         *  Logic: '<S1574>/LogicalOperator'
         *  Logic: '<S1575>/LogicalOperator'
         *  Logic: '<S1577>/LogicalOperator'
         *  RelationalOperator: '<S1574>/RelationalOperator1'
         *  RelationalOperator: '<S1574>/RelationalOperator2'
         *  RelationalOperator: '<S1575>/RelationalOperator1'
         *  RelationalOperator: '<S1575>/RelationalOperator2'
         *  RelationalOperator: '<S1577>/RelationalOperator1'
         *  RelationalOperator: '<S1577>/RelationalOperator2'
         *  S-Function (sfix_bitop): '<S1574>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S1574>/BitwiseOperator2'
         *  S-Function (sfix_bitop): '<S1575>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S1575>/BitwiseOperator2'
         *  S-Function (sfix_bitop): '<S1577>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S1577>/BitwiseOperator2'
         */
        rtb_Switch1_pz = (((((((sint32)SRAR_ac_DW.StatusByte_LostCommECM_A_BusB)
                              & 1) > 0) && ((((uint32)
                               SRAR_ac_DW.StatusByte_LostCommECM_A_BusB) & 64U) ==
                             0U)) || ((((((sint32)
                                SRAR_ac_DW.StatusByte_InvData_ECM_BusB) & 1) > 0)
                             && ((((uint32)
                                SRAR_ac_DW.StatusByte_InvData_ECM_BusB) & 64U) ==
                              0U)) && (KeSRAR_b_U1850Enbl))) || ((((((sint32)
                               SRAR_ac_DW.StatusByte_InvData_ECM) & 1) > 0) &&
                            ((((uint32)SRAR_ac_DW.StatusByte_InvData_ECM) & 64U)
                             == 0U)) && (KeSRAR_b_U0401Enbl)));

        /* Switch: '<S1581>/Switch1' incorporates:
         *  Constant: '<S1576>/Constant1'
         *  Constant: '<S1576>/Constant2'
         *  Constant: '<S1586>/Calib'
         *  DataStoreRead: '<S1576>/StatusByte_InvData_ECM'
         *  Logic: '<S1529>/Logical10'
         *  Logic: '<S1529>/Logical22'
         *  Logic: '<S1576>/LogicalOperator'
         *  RelationalOperator: '<S1576>/RelationalOperator1'
         *  RelationalOperator: '<S1576>/RelationalOperator2'
         *  S-Function (sfix_bitop): '<S1576>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S1576>/BitwiseOperator2'
         */
        rtb_Switch1_pe = ((VeSRAC_b_ECM_DualLOC_CRC_MC_Busoff) || ((((((sint32)
                               SRAR_ac_DW.StatusByte_InvData_ECM) & 1) > 0) &&
                            ((((uint32)SRAR_ac_DW.StatusByte_InvData_ECM) & 64U)
                             == 0U)) && (KeSRAR_b_U0401Enbl)));
    }
    else
    {
        /* Switch: '<S1579>/Switch1' incorporates:
         *  Constant: '<S1529>/Constant'
         */
        rtb_Switch1_pz = false;

        /* Switch: '<S1581>/Switch1' incorporates:
         *  Constant: '<S1529>/Constant2'
         */
        rtb_Switch1_pe = false;
    }

    /* End of Switch: '<S1579>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeDTRR_b_DrvrIntndedAxleTrqRawFA' */
    (void)Rte_Read_VeDTRR_b_DrvrIntndedAxleTrqRawFA_Value(&rtb_UnitDelay_eb);

    /* Inport: '<Root>/VeTIDR_b_EngTrqHVBattHiFA' */
    (void)Rte_Read_VeTIDR_b_EngTrqHVBattHiFA_Value(&rtb_Merge1_i);

    /* Inport: '<Root>/VeTIDR_b_EngTrqHVBattLoFA' */
    (void)Rte_Read_VeTIDR_b_EngTrqHVBattLoFA_Value(&rtb_Switch1_fqq);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRAR_MedTEB'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Outputs for Atomic SubSystem: '<S1529>/TurnOnDelayTime1' */
    /* Outputs for Atomic SubSystem: '<S1590>/EdgeRising' */
    /* Logic: '<S1591>/AND' incorporates:
     *  Logic: '<S1591>/OR1'
     *  UnitDelay: '<S1591>/UnitDelay'
     */
    rtb_VeSRAR_b_AuxPumpFail_Inhibi = (rtb_TmpSignalConversionAtVeETQR &&
        (!SRAR_ac_DW.UnitDelay_DSTATE_ec));

    /* Update for UnitDelay: '<S1591>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_ec = rtb_TmpSignalConversionAtVeETQR;

    /* End of Outputs for SubSystem: '<S1590>/EdgeRising' */

    /* Switch: '<S1590>/Switch1' incorporates:
     *  Logic: '<S1590>/OR'
     *  Logic: '<S1590>/OR1'
     */
    if ((!rtb_TmpSignalConversionAtVeETQR) || rtb_VeSRAR_b_AuxPumpFail_Inhibi)
    {
        /* Switch: '<S1590>/Switch1' incorporates:
         *  Constant: '<S1590>/ConstantValue1'
         */
        rtb_Switch1_glj = 0.0F;
    }
    else
    {
        /* Switch: '<S1590>/Switch1' incorporates:
         *  Constant: '<S1588>/Calib'
         *  Constant: '<S1589>/Calib'
         *  MinMax: '<S1590>/Minimum'
         *  Sum: '<S1590>/Summation'
         *  UnitDelay: '<S1590>/UnitDelay'
         */
        rtb_Switch1_glj = fminf(KeSRAR_t_EngActualTorqSS_FltDeb, KeSRAR_t_dT +
                                SRAR_ac_DW.UnitDelay_DSTATE_jd);
    }

    /* End of Switch: '<S1590>/Switch1' */

    /* Update for UnitDelay: '<S1590>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_jd = rtb_Switch1_glj;

    /* End of Outputs for SubSystem: '<S1529>/TurnOnDelayTime1' */

    /* Switch: '<S1582>/Switch1' incorporates:
     *  Inport: '<Root>/VeESPR_e_EngineSpeedStatus'
     */
    if (rtb_Switch1_ajp)
    {
        (void)Rte_Read_VeESPR_e_EngineSpeedStatus_Value(&tmpRead_b);

        /* Logic: '<S1531>/Logical3' incorporates:
         *  Constant: '<S1565>/Constant'
         *  Inport: '<Root>/VeESPR_e_EngineSpeedStatus'
         *  RelationalOperator: '<S1529>/Comparison9'
         */
        rtb_VeSRAR_b_AuxPumpFail_Inhibi = (((uint32)tmpRead_b) ==
            CeESPR_e_EngSpdInvalid);
    }
    else
    {
        /* Logic: '<S1531>/Logical3' incorporates:
         *  Constant: '<S1529>/Constant9'
         */
        rtb_VeSRAR_b_AuxPumpFail_Inhibi = false;
    }

    /* End of Switch: '<S1582>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeENGR_b_ZylAbs' */
    (void)Rte_Read_VeENGR_b_ZylAbs_Value(&rtb_Comparison8);

    /* Inport: '<Root>/VeENGR_b_EngOffRecom' */
    (void)Rte_Read_VeENGR_b_EngOffRecom_Value(&rtb_VeSRAR_b_CKSFailed);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRAR_MedTEB'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Switch: '<S1872>/Switch1' */
    if (rtb_VeSRAR_b_AuxPumpFail_Inhibi)
    {
        /* Switch: '<S2067>/Switch1' incorporates:
         *  Constant: '<S1372>/ConstantValue18'
         */
        rtb_Switch1_anw = 512U;
    }
    else
    {
        /* Switch: '<S2067>/Switch1' incorporates:
         *  Constant: '<S1372>/ConstantValue19'
         */
        rtb_Switch1_anw = 0U;
    }

    /* End of Switch: '<S1872>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S1629>/SignalLatchOnWithReset' */
    /* Logic: '<S1638>/NOT' incorporates:
     *  Constant: '<S1635>/Constant'
     *  Logic: '<S1634>/Logical'
     *  RelationalOperator: '<S1629>/Comparison10'
     */
    rtb_VeSRAR_b_AuxPumpFail_Inhibi = (((uint32)rtb_TmpSignalConversionAtVePM_g)
        != CePMDR_e_PowerMode_Off);

    /* Logic: '<S1638>/OR1' incorporates:
     *  Logic: '<S1638>/NOT'
     *  Logic: '<S1638>/OR'
     *  RelationalOperator: '<S1629>/Comparison7'
     *  UnitDelay: '<S1638>/UnitDelay'
     */
    rtb_VeSRAR_b_SpinUpFailed = (rtb_VeSRAR_b_CKSFailed ||
        (rtb_VeSRAR_b_AuxPumpFail_Inhibi && (SRAR_ac_DW.UnitDelay_DSTATE_nl)));

    /* Update for UnitDelay: '<S1638>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_nl = rtb_VeSRAR_b_SpinUpFailed;

    /* End of Outputs for SubSystem: '<S1629>/SignalLatchOnWithReset' */

    /* Outputs for Atomic SubSystem: '<S1634>/CountDownResetEnabled' */
    /* Switch: '<S1640>/Switch1' incorporates:
     *  Constant: '<S1640>/ConstantValue'
     *  RelationalOperator: '<S1640>/GreaterThan'
     *  Switch: '<S1640>/Switch2'
     *  UnitDelay: '<S1640>/UnitDelay'
     */
    if (rtb_Comparison8)
    {
        /* Switch: '<S1640>/Switch1' incorporates:
         *  Constant: '<S1641>/Calib'
         */
        rtb_Switch1_iz = KeSRAR_Cnt_RstSingleCylMisfireCnt;
    }
    else if (((sint32)SRAR_ac_DW.UnitDelay_DSTATE_mr) > 0)
    {
        /* Switch: '<S1640>/Switch2' incorporates:
         *  Constant: '<S1640>/ConstantValue1'
         *  Sum: '<S1640>/Subtraction'
         *  Switch: '<S1640>/Switch1'
         *  UnitDelay: '<S1640>/UnitDelay'
         */
        rtb_Switch1_iz = (uint16)((sint32)(((sint32)
            SRAR_ac_DW.UnitDelay_DSTATE_mr) - 1));
    }
    else
    {
        /* Switch: '<S1640>/Switch1' incorporates:
         *  Switch: '<S1640>/Switch2'
         *  UnitDelay: '<S1640>/UnitDelay'
         */
        rtb_Switch1_iz = SRAR_ac_DW.UnitDelay_DSTATE_mr;
    }

    /* End of Switch: '<S1640>/Switch1' */
    /* End of Outputs for SubSystem: '<S1634>/CountDownResetEnabled' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeTITR_M_SnsdEng_Flt' */
    (void)Rte_Read_VeTITR_M_SnsdEng_Flt_Value(&rtb_Vector);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRAR_MedTEB'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Outputs for Atomic SubSystem: '<S1634>/CountDownResetEnabled' */
    /* Update for UnitDelay: '<S1640>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_mr = rtb_Switch1_iz;

    /* Outputs for Atomic SubSystem: '<S1634>/SignalLatchOnWithReset1' */
    /* Logic: '<S1644>/OR1' incorporates:
     *  Constant: '<S1640>/ConstantValue2'
     *  Constant: '<S1642>/Calib'
     *  Constant: '<S1643>/Calib'
     *  Logic: '<S1634>/Logical'
     *  Logic: '<S1634>/Logical1'
     *  Logic: '<S1634>/Logical2'
     *  Logic: '<S1644>/NOT'
     *  Logic: '<S1644>/OR'
     *  RelationalOperator: '<S1634>/Comparison1'
     *  RelationalOperator: '<S1640>/GreaterThan1'
     *  UnitDelay: '<S1644>/UnitDelay'
     */
    rtb_VeSRAR_b_AuxPumpFail_Inhibi = (rtb_Comparison8 ||
        (((rtb_VeSRAR_b_AuxPumpFail_Inhibi &&
           (!KeSRAR_b_DsblLatchSingleCynMisfire)) && ((((sint32)rtb_Switch1_iz) >
        0) || (rtb_Vector < KeSRAR_M_SnsdEndTrq_MisfireRstThresh))) &&
         (SRAR_ac_DW.UnitDelay_DSTATE_b1)));

    /* End of Outputs for SubSystem: '<S1634>/CountDownResetEnabled' */

    /* Update for UnitDelay: '<S1644>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_b1 = rtb_VeSRAR_b_AuxPumpFail_Inhibi;

    /* End of Outputs for SubSystem: '<S1634>/SignalLatchOnWithReset1' */

    /* If: '<S1629>/If' */
    if (rtb_VeSRAR_b_SpinUpFailed)
    {
        /* Outputs for IfAction SubSystem: '<S1629>/MultiCylinMisfireDetected' incorporates:
         *  ActionPort: '<S1636>/ActionPort'
         */
        /* Logic: '<S1531>/Logical3' incorporates:
         *  Constant: '<S1647>/Calib'
         *  SignalConversion generated from: '<S1636>/Misfire_KeepEngRun'
         */
        rtb_VeSRAR_b_AuxPumpFail_Inhibi =
            KeSRAR_b_MultiCylinMisfireDetc_KeepEngRunEnbl;

        /* Logic: '<S1528>/Logical2' incorporates:
         *  Constant: '<S1646>/Calib'
         *  SignalConversion generated from: '<S1636>/Misfire_InhibitGears'
         */
        rtb_VeSRAR_b_SpinUpFailed =
            KeSRAR_b_MultiCylinMisfireDetc_InhibitGearsEnbl;

        /* RelationalOperator: '<S1532>/Comparison1' incorporates:
         *  Constant: '<S1645>/Calib'
         *  RelationalOperator: '<S1636>/Comparison1'
         */
        rtb_Comparison1_n4 = (rtb_TmpSignalConversionAtVeBPCR <=
                              KeSRAR_Pct_SOC_MultiCylinMisfireDetcSOCThres);

        /* UnitDelay: '<S1626>/UnitDelay' incorporates:
         *  Constant: '<S1645>/Calib'
         *  RelationalOperator: '<S1636>/Comparison9'
         */
        rtb_UnitDelay_lw = (rtb_TmpSignalConversionAtVeBPCR >=
                            KeSRAR_Pct_SOC_MultiCylinMisfireDetcSOCThres);

        /* Logic: '<S1532>/Logical4' incorporates:
         *  Constant: '<S1648>/Calib'
         *  SignalConversion generated from: '<S1636>/Misfire_LimitTrq'
         */
        rtb_Logical4_b = KeSRAR_b_MultiCylinMisfireDetc_LimitTrqEnbl;

        /* End of Outputs for SubSystem: '<S1629>/MultiCylinMisfireDetected' */
    }
    else if (rtb_VeSRAR_b_AuxPumpFail_Inhibi)
    {
        /* Outputs for IfAction SubSystem: '<S1629>/SingleCylinMisfireDetected' incorporates:
         *  ActionPort: '<S1639>/ActionPort'
         */
        /* Logic: '<S1531>/Logical3' incorporates:
         *  Constant: '<S1652>/Calib'
         *  SignalConversion generated from: '<S1639>/Misfire_KeepEngRun'
         */
        rtb_VeSRAR_b_AuxPumpFail_Inhibi =
            KeSRAR_b_SingleCylinMisfireDetc_KeepEngRunEnbl;

        /* Logic: '<S1528>/Logical2' incorporates:
         *  Constant: '<S1651>/Calib'
         *  SignalConversion generated from: '<S1639>/Misfire_InhibitGears'
         */
        rtb_VeSRAR_b_SpinUpFailed =
            KeSRAR_b_SingleCylinMisfireDetc_InhibitGearsEnbl;

        /* RelationalOperator: '<S1532>/Comparison1' incorporates:
         *  Constant: '<S1649>/Calib'
         *  RelationalOperator: '<S1639>/Comparison1'
         */
        rtb_Comparison1_n4 = (rtb_TmpSignalConversionAtVeBPCR <=
                              KeSRAR_Pct_SOC_SingleCylinMisfireDetcSOCThres);

        /* UnitDelay: '<S1626>/UnitDelay' incorporates:
         *  Constant: '<S1650>/Calib'
         *  SignalConversion generated from: '<S1639>/Misfire_HighSOC'
         */
        rtb_UnitDelay_lw = KeSRAR_b_SingleCylinMisfireDetc_HighSOCEnbl;

        /* Logic: '<S1532>/Logical4' incorporates:
         *  Constant: '<S1653>/Calib'
         *  SignalConversion generated from: '<S1639>/Misfire_LimitTrq'
         */
        rtb_Logical4_b = KeSRAR_b_SingleCylinMisfireDetc_LimitTrqEnbl;

        /* End of Outputs for SubSystem: '<S1629>/SingleCylinMisfireDetected' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S1629>/No_Misfire' incorporates:
         *  ActionPort: '<S1637>/ActionPort'
         */
        /* RelationalOperator: '<S1532>/Comparison1' incorporates:
         *  Constant: '<S1637>/FALSEConstant4'
         *  SignalConversion generated from: '<S1637>/Misfire_ShtDwn'
         */
        rtb_Comparison1_n4 = false;

        /* UnitDelay: '<S1626>/UnitDelay' incorporates:
         *  Constant: '<S1637>/FALSEConstant1'
         *  SignalConversion generated from: '<S1637>/Misfire_HighSOC'
         */
        rtb_UnitDelay_lw = false;

        /* Logic: '<S1532>/Logical4' incorporates:
         *  Constant: '<S1637>/FALSEConstant5'
         *  SignalConversion generated from: '<S1637>/Misfire_LimitTrq'
         */
        rtb_Logical4_b = false;

        /* End of Outputs for SubSystem: '<S1629>/No_Misfire' */
    }

    /* End of If: '<S1629>/If' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VePMDR_e_KeyStatus' */
    (void)Rte_Read_VePMDR_e_KeyStatus_Value(&tmpRead_n);

    /* Inport: '<Root>/VeTAPR_b_TransAuxPump_NotFlty' */
    (void)Rte_Read_VeTAPR_b_TransAuxPump_NotFlty_Value(&rtb_AND_ct);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRAR_MedTEB'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Switch: '<S1843>/Switch1' */
    if (rtb_VeSRAR_b_AuxPumpFail_Inhibi)
    {
        /* Switch: '<S2068>/Switch1' incorporates:
         *  Constant: '<S1372>/ConstantValue20'
         */
        rtb_Switch1_ck = 1024U;
    }
    else
    {
        /* Switch: '<S2068>/Switch1' incorporates:
         *  Constant: '<S1372>/ConstantValue21'
         */
        rtb_Switch1_ck = 0U;
    }

    /* End of Switch: '<S1843>/Switch1' */

    /* Switch: '<S1844>/Switch1' */
    if (rtb_VeSRAR_b_SpinUpFailed)
    {
        /* Switch: '<S2069>/Switch1' incorporates:
         *  Constant: '<S1372>/ConstantValue22'
         */
        rtb_Switch1_mr = 2048U;
    }
    else
    {
        /* Switch: '<S2069>/Switch1' incorporates:
         *  Constant: '<S1372>/ConstantValue23'
         */
        rtb_Switch1_mr = 0U;
    }

    /* End of Switch: '<S1844>/Switch1' */

    /* Switch: '<S1845>/Switch1' */
    if (rtb_Comparison1_n4)
    {
        /* Switch: '<S2070>/Switch1' incorporates:
         *  Constant: '<S1372>/ConstantValue24'
         */
        rtb_Switch1_bk = 4096U;
    }
    else
    {
        /* Switch: '<S2070>/Switch1' incorporates:
         *  Constant: '<S1372>/ConstantValue25'
         */
        rtb_Switch1_bk = 0U;
    }

    /* End of Switch: '<S1845>/Switch1' */

    /* Logic: '<S1630>/Logical' incorporates:
     *  Constant: '<S1654>/Calib'
     *  RelationalOperator: '<S1630>/Comparison2'
     */
    VeSRAC_b_OutOfFuelSOCShtDwn = (tmpRead_a && (rtb_TmpSignalConversionAtVeBPCR
        <= KeSRAR_Pct_MinSOCRunOutofFuel));

    /* Logic: '<S1531>/Logical3' incorporates:
     *  Constant: '<S1658>/Calib'
     *  RelationalOperator: '<S1631>/Comparison7'
     */
    rtb_VeSRAR_b_AuxPumpFail_Inhibi = (rtb_TmpSignalConversionAtVeCSVR <=
        KeSRAR_v_LowVehicleSpeedToForceEngOff);

    /* Logic: '<S1528>/Logical2' incorporates:
     *  Constant: '<S1657>/Constant'
     *  RelationalOperator: '<S1631>/Comparison5'
     */
    rtb_VeSRAR_b_SpinUpFailed = (((uint32)rtb_TmpSignalConversionAtVeSTRR) ==
        CeSTRR_e_KeyOffSt);

    /* RelationalOperator: '<S1532>/Comparison1' incorporates:
     *  Constant: '<S1662>/Constant'
     *  Constant: '<S1663>/Constant'
     *  Constant: '<S1664>/Constant'
     *  Constant: '<S1665>/Constant'
     *  Constant: '<S1666>/Constant'
     *  Logic: '<S1656>/Logical1'
     *  RelationalOperator: '<S1656>/Comparison1'
     *  RelationalOperator: '<S1656>/Comparison2'
     *  RelationalOperator: '<S1656>/Comparison3'
     *  RelationalOperator: '<S1656>/Comparison4'
     *  RelationalOperator: '<S1656>/Comparison6'
     */
    rtb_Comparison1_n4 = (((((((uint32)rtb_TmpSignalConversionAtVeTRGR) ==
        CeTRGR_e_TransRangeNeutral) || (((uint32)rtb_TmpSignalConversionAtVeTRGR)
        == CeTRGR_e_ParkToNeutral)) || (((uint32)rtb_TmpSignalConversionAtVeTRGR)
        == CeTRGR_e_ReverseToNeutral)) || (((uint32)
        rtb_TmpSignalConversionAtVeTRGR) == CeTRGR_e_NeutralToPark)) ||
                          (((uint32)rtb_TmpSignalConversionAtVeTRGR) ==
                           CeTRGR_e_DriveToNeutral));

    /* Outputs for Atomic SubSystem: '<S1631>/SignalLatchOnWithReset' */
    /* Logic: '<S1659>/OR1' incorporates:
     *  Logic: '<S1631>/Logical'
     *  Logic: '<S1631>/Logical3'
     *  Logic: '<S1631>/Logical4'
     *  Logic: '<S1631>/Logical7'
     *  Logic: '<S1659>/NOT'
     *  Logic: '<S1659>/OR'
     *  UnitDelay: '<S1659>/UnitDelay'
     */
    rtb_Comparison8 = (((rtb_VeSRAR_b_AuxPumpFail_Inhibi &&
                         rtb_VeSRAR_b_SpinUpFailed) && rtb_Comparison1_n4) ||
                       ((rtb_VeSRAR_b_AuxPumpFail_Inhibi && rtb_Comparison1_n4) &&
                        (SRAR_ac_DW.UnitDelay_DSTATE_cn)));

    /* Update for UnitDelay: '<S1659>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_cn = rtb_Comparison8;

    /* End of Outputs for SubSystem: '<S1631>/SignalLatchOnWithReset' */

    /* Logic: '<S1655>/Logical6' */
    rtb_Logical6 = !rtb_VeSRAR_b_SpinUpFailed;

    /* Switch: '<S1859>/Switch1' */
    if (rtb_UnitDelay_lw)
    {
        /* Switch: '<S2052>/Switch1' incorporates:
         *  Constant: '<S1372>/ConstantValue60'
         */
        rtb_Switch1_c = 524288U;
    }
    else
    {
        /* Switch: '<S2052>/Switch1' incorporates:
         *  Constant: '<S1372>/ConstantValue61'
         */
        rtb_Switch1_c = 0U;
    }

    /* End of Switch: '<S1859>/Switch1' */

    /* Switch: '<S1860>/Switch1' */
    if (rtb_Logical4_b)
    {
        /* Switch: '<S2053>/Switch1' incorporates:
         *  Constant: '<S1372>/ConstantValue62'
         */
        rtb_Switch1_fxq = 1048576U;
    }
    else
    {
        /* Switch: '<S2053>/Switch1' incorporates:
         *  Constant: '<S1372>/ConstantValue63'
         */
        rtb_Switch1_fxq = 0U;
    }

    /* End of Switch: '<S1860>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S1531>/Hysteresis' */
    /* Switch: '<S1595>/Switch1' incorporates:
     *  Constant: '<S1598>/Calib'
     *  RelationalOperator: '<S1595>/GreaterThan'
     */
    if (rtb_TmpSignalConversionAtVeHCCR > KeSRAR_V_VlmFldUppSumpHys_UppLmt)
    {
        /* Switch: '<S1595>/Switch1' incorporates:
         *  Constant: '<S1595>/ConstantValue'
         */
        rtb_VeSRAR_b_AuxPumpFail_Inhibi = true;
    }
    else
    {
        /* Switch: '<S1595>/Switch1' incorporates:
         *  Constant: '<S1597>/Calib'
         *  RelationalOperator: '<S1595>/GreaterThan1'
         *  UnitDelay: '<S1595>/UnitDelay'
         */
        rtb_VeSRAR_b_AuxPumpFail_Inhibi = ((rtb_TmpSignalConversionAtVeHCCR >=
            KeSRAR_V_VlmFldUppSumpHys_LowLmt) &&
            (SRAR_ac_DW.UnitDelay_DSTATE_cni));
    }

    /* End of Switch: '<S1595>/Switch1' */

    /* Update for UnitDelay: '<S1595>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_cni = rtb_VeSRAR_b_AuxPumpFail_Inhibi;

    /* End of Outputs for SubSystem: '<S1531>/Hysteresis' */

    /* Lookup_n-D: '<S1602>/Vector' incorporates:
     *  SignalConversion generated from: '<S2>/VeTFTR_T_TransOilTemp'
     */
    rtb_Vector = look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeTFTR, ((const
        float32 *)&(KxSRAR_v_AuxPumpFailSpd_TransOilTempDep[0])), ((const
        float32 *)&(KtSRAR_v_AuxPumpFailSpd_TransOilTempDep[0])), 4U);

    /* Outputs for IfAction SubSystem: '<S1147>/Default_Case_1' incorporates:
     *  ActionPort: '<S1151>/ActionPort'
     */
    /* If: '<S1147>/If' incorporates:
     *  Abs: '<S1151>/Abs'
     *  Abs: '<S146>/Abs'
     *  Abs: '<S1531>/Abs'
     */
    rtb_TmpSignalConversionAtVeHCCR = fabsf(rtb_TmpSignalConversionAtVeVSDR);

    /* End of Outputs for SubSystem: '<S1147>/Default_Case_1' */

    /* Outputs for Atomic SubSystem: '<S1531>/Hysteresis1' */
    /* Switch: '<S1596>/Switch1' incorporates:
     *  Abs: '<S1531>/Abs'
     *  Constant: '<S1600>/Calib'
     *  RelationalOperator: '<S1596>/GreaterThan'
     *  Sum: '<S1531>/Sum'
     */
    if (rtb_TmpSignalConversionAtVeHCCR > (rtb_Vector +
            KeSRAR_v_AuxPumpFail_OutSpdHys))
    {
        /* Switch: '<S1596>/Switch1' incorporates:
         *  Constant: '<S1596>/ConstantValue'
         */
        rtb_VeSRAR_b_SpinUpFailed = true;
    }
    else
    {
        /* Switch: '<S1596>/Switch1' incorporates:
         *  RelationalOperator: '<S1596>/GreaterThan1'
         *  UnitDelay: '<S1596>/UnitDelay'
         */
        rtb_VeSRAR_b_SpinUpFailed = ((rtb_TmpSignalConversionAtVeHCCR >=
            rtb_Vector) && (SRAR_ac_DW.UnitDelay_DSTATE_mg));
    }

    /* End of Switch: '<S1596>/Switch1' */

    /* Update for UnitDelay: '<S1596>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_mg = rtb_VeSRAR_b_SpinUpFailed;

    /* End of Outputs for SubSystem: '<S1531>/Hysteresis1' */

    /* Logic: '<S1531>/LogicalOperator' incorporates:
     *  Logic: '<S1531>/Logical5'
     *  Logic: '<S1531>/Logical6'
     *  Logic: '<S1531>/Logical7'
     */
    rtb_VeSRAR_b_AuxPumpFail_Inhibi = (((!rtb_AND_ct) &&
        (!rtb_VeSRAR_b_AuxPumpFail_Inhibi)) && (!rtb_VeSRAR_b_SpinUpFailed));

    /* Logic: '<S1531>/Logical4' */
    rtb_VeSRAR_b_SpinUpFailed = !rtb_VeSRAR_b_AuxPumpFail_Inhibi;

    /* Outputs for Atomic SubSystem: '<S1531>/TimerResetTriggerEnabled' */
    /* Outputs for Atomic SubSystem: '<S1603>/EdgeRising' */
    /* Logic: '<S1604>/AND' incorporates:
     *  Logic: '<S1604>/OR1'
     *  UnitDelay: '<S1604>/UnitDelay'
     */
    rtb_AND_ct = (rtb_VeSRAR_b_SpinUpFailed && (!SRAR_ac_DW.UnitDelay_DSTATE_i5));

    /* Update for UnitDelay: '<S1604>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_i5 = rtb_VeSRAR_b_SpinUpFailed;

    /* End of Outputs for SubSystem: '<S1603>/EdgeRising' */

    /* Switch: '<S1603>/Switch1' incorporates:
     *  Constant: '<S1603>/ConstantValue3'
     *  Logic: '<S1603>/AND1'
     *  RelationalOperator: '<S1603>/GreaterThan2'
     *  Switch: '<S1603>/Switch2'
     *  UnitDelay: '<S1603>/UnitDelay'
     */
    if (rtb_AND_ct && (SRAR_ac_DW.UnitDelay_DSTATE_d <= 0.0F))
    {
        /* Switch: '<S1603>/Switch1' incorporates:
         *  Lookup_n-D: '<S1601>/Vector'
         *  SignalConversion generated from: '<S2>/VeTFTR_T_TransOilTemp'
         */
        rtb_Vector = look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeTFTR, ((
            const float32 *)&(KxSRAR_t_AuxPumpFailTime_TransOilTempDep[0])), ((
            const float32 *)&(KtSRAR_t_AuxPumpFailTime_TransOilTempDep[0])), 4U);
    }
    else if (rtb_VeSRAR_b_AuxPumpFail_Inhibi)
    {
        /* Switch: '<S1603>/Switch2' incorporates:
         *  Constant: '<S1599>/Calib'
         *  Constant: '<S1603>/ConstantValue4'
         *  MinMax: '<S1603>/Maximum'
         *  Sum: '<S1603>/Subtraction'
         *  Switch: '<S1603>/Switch1'
         */
        rtb_Vector = fmaxf(SRAR_ac_DW.UnitDelay_DSTATE_d - KeSRAR_t_dT, 0.0F);
    }
    else
    {
        /* Switch: '<S1603>/Switch1' incorporates:
         *  Switch: '<S1603>/Switch2'
         */
        rtb_Vector = SRAR_ac_DW.UnitDelay_DSTATE_d;
    }

    /* End of Switch: '<S1603>/Switch1' */

    /* Update for UnitDelay: '<S1603>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_d = rtb_Vector;

    /* Logic: '<S1531>/Logical3' incorporates:
     *  Constant: '<S1603>/ConstantValue2'
     *  RelationalOperator: '<S1603>/GreaterThan1'
     */
    rtb_VeSRAR_b_AuxPumpFail_Inhibi = (rtb_Vector <= 0.0F);

    /* End of Outputs for SubSystem: '<S1531>/TimerResetTriggerEnabled' */

    /* Logic: '<S1528>/Logical2' incorporates:
     *  Constant: '<S1549>/Constant1'
     *  Constant: '<S1549>/Constant2'
     *  DataStoreRead: '<S1549>/StatusByte_HybSysPerf2'
     *  Logic: '<S1549>/LogicalOperator'
     *  RelationalOperator: '<S1549>/RelationalOperator1'
     *  RelationalOperator: '<S1549>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S1549>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S1549>/BitwiseOperator2'
     */
    rtb_VeSRAR_b_SpinUpFailed = (((((sint32)SRAR_ac_DW.StatusByte_HybSysPerf2) &
        1) > 0) && ((((uint32)SRAR_ac_DW.StatusByte_HybSysPerf2) & 64U) == 0U));

    /* Logic: '<S1528>/Logical1' incorporates:
     *  Constant: '<S1554>/Calib'
     *  Constant: '<S1560>/ConstantValue3'
     *  RelationalOperator: '<S1560>/Comparison3'
     *  S-Function (sfix_bitop): '<S1560>/BitwiseOperator2'
     */
    rtb_VeSRAR_b_CKSFailed = (((rtb_TmpSignalConversionAtVeESSR &
        KeSRAR_g_CKSPhaseSelect) >= 1U) && rtb_VeSRAR_b_SpinUpFailed);

    /* Logic: '<S1528>/Logical2' incorporates:
     *  Constant: '<S1556>/Calib'
     *  Constant: '<S1559>/ConstantValue3'
     *  RelationalOperator: '<S1559>/Comparison3'
     *  S-Function (sfix_bitop): '<S1559>/BitwiseOperator2'
     */
    rtb_VeSRAR_b_SpinUpFailed = (rtb_VeSRAR_b_SpinUpFailed &&
        ((rtb_TmpSignalConversionAtVeESSR & KeSRAR_g_SpinPhaseSelect) >= 1U));

    /* RelationalOperator: '<S1532>/Comparison1' incorporates:
     *  Constant: '<S1668>/Constant'
     *  RelationalOperator: '<S1535>/Comparison4'
     */
    rtb_Comparison1_n4 = (CeENGR_e_Remedial_StpReq == ((uint32)
                           rtb_TmpSignalConversionAtVeEN_n));

    /* Outputs for Atomic SubSystem: '<S1535>/Hysteresis' */
    /* Switch: '<S1669>/Switch1' incorporates:
     *  Constant: '<S1671>/Calib'
     *  RelationalOperator: '<S1669>/GreaterThan'
     */
    if (rtb_TmpSignalConversionAtVeBPCR > KeSRAR_Pct_SOCFuelPmpEngOffOvrdRSP)
    {
        /* Switch: '<S1669>/Switch1' incorporates:
         *  Constant: '<S1669>/ConstantValue'
         */
        rtb_Switch1_oz = true;
    }
    else
    {
        /* Switch: '<S1669>/Switch1' incorporates:
         *  Constant: '<S1670>/Calib'
         *  RelationalOperator: '<S1669>/GreaterThan1'
         *  UnitDelay: '<S1669>/UnitDelay'
         */
        rtb_Switch1_oz = ((rtb_TmpSignalConversionAtVeBPCR >=
                           KeSRAR_Pct_SOCFuelPmpEngOffOvrdLSP) &&
                          (SRAR_ac_DW.UnitDelay_DSTATE_cc));
    }

    /* End of Switch: '<S1669>/Switch1' */

    /* Update for UnitDelay: '<S1669>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_cc = rtb_Switch1_oz;

    /* End of Outputs for SubSystem: '<S1535>/Hysteresis' */

    /* UnitDelay: '<S1626>/UnitDelay' incorporates:
     *  Constant: '<S1667>/Constant'
     *  RelationalOperator: '<S1535>/Comparison1'
     */
    rtb_UnitDelay_lw = (((uint32)rtb_TmpSignalConversionAtVeEN_n) ==
                        CeENGR_e_Remedial_StpReqWithLimp);

    /* Logic: '<S1535>/Logical3' incorporates:
     *  Logic: '<S1535>/Logical2'
     */
    rtb_AND_ct = (rtb_Switch1_oz && (rtb_Comparison1_n4 || rtb_UnitDelay_lw));

    /* Outputs for Atomic SubSystem: '<S1535>/TurnOnDelayTime' */
    /* Outputs for Atomic SubSystem: '<S1674>/EdgeRising' */
    /* Logic: '<S1675>/AND' incorporates:
     *  Logic: '<S1675>/OR1'
     *  UnitDelay: '<S1675>/UnitDelay'
     */
    rtb_AND_owg = (rtb_AND_ct && (!SRAR_ac_DW.UnitDelay_DSTATE_nx));

    /* Update for UnitDelay: '<S1675>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_nx = rtb_AND_ct;

    /* End of Outputs for SubSystem: '<S1674>/EdgeRising' */

    /* Logic: '<S1674>/OR1' incorporates:
     *  Logic: '<S1674>/AND'
     */
    rtb_Switch_g_idx_1 = !rtb_AND_ct;

    /* Switch: '<S1674>/Switch1' incorporates:
     *  Logic: '<S1674>/OR'
     *  Logic: '<S1674>/OR1'
     */
    if (rtb_Switch_g_idx_1 || rtb_AND_owg)
    {
        /* Switch: '<S1674>/Switch1' incorporates:
         *  Constant: '<S1674>/ConstantValue1'
         */
        rtb_Vector = 0.0F;
    }
    else
    {
        /* Switch: '<S1674>/Switch1' incorporates:
         *  Constant: '<S1672>/Calib'
         *  Constant: '<S1673>/Calib'
         *  MinMax: '<S1674>/Minimum'
         *  Sum: '<S1674>/Summation'
         *  UnitDelay: '<S1674>/UnitDelay'
         */
        rtb_Vector = fminf(KeSRAR_t_FuelPumpEngOffActvTime, KeSRAR_t_dT +
                           SRAR_ac_DW.UnitDelay_DSTATE_e);
    }

    /* End of Switch: '<S1674>/Switch1' */
    /* End of Outputs for SubSystem: '<S1535>/TurnOnDelayTime' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeTRGR_e_EPB_Hold_Req' */
    (void)Rte_Read_VeTRGR_e_EPB_Hold_Req_Value(&tmpRead_j);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRAR_MedTEB'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Outputs for Atomic SubSystem: '<S1535>/TurnOnDelayTime' */
    /* Update for UnitDelay: '<S1674>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_e = rtb_Vector;

    /* Logic: '<S1532>/Logical4' incorporates:
     *  Constant: '<S1672>/Calib'
     *  Logic: '<S1535>/Logical4'
     *  Logic: '<S1674>/AND'
     *  RelationalOperator: '<S1674>/GreaterThan'
     */
    rtb_Logical4_b = (rtb_Switch_g_idx_1 || (rtb_Vector <
                       KeSRAR_t_FuelPumpEngOffActvTime));

    /* End of Outputs for SubSystem: '<S1535>/TurnOnDelayTime' */

    /* Logic: '<S1535>/Logical' */
    VeSRAC_b_FuelPmpCavitation_EngOff = ((rtb_Comparison1_n4 && rtb_Switch1_oz) &&
        rtb_Logical4_b);

    /* RelationalOperator: '<S1537>/Comparison11' incorporates:
     *  Constant: '<S1683>/Constant'
     */
    rtb_AND_owg = (((uint32)rtb_TmpSignalConversionAtVeES_d) ==
                   CeESSR_e_EngRunning);

    /* Outputs for Atomic SubSystem: '<S1533>/SignalLatchOnWithReset1' */
    /* Outputs for Atomic SubSystem: '<S1537>/SignalLatchOnWithReset1' */
    /* Logic: '<S1686>/NOT' incorporates:
     *  Logic: '<S1627>/NOT'
     */
    rtb_Comparison1_ij_tmp = !rtb_AND_owg;

    /* End of Outputs for SubSystem: '<S1533>/SignalLatchOnWithReset1' */

    /* Logic: '<S1686>/OR1' incorporates:
     *  Logic: '<S1537>/Logical1'
     *  Logic: '<S1686>/NOT'
     *  Logic: '<S1686>/OR'
     *  UnitDelay: '<S1686>/UnitDelay'
     */
    rtb_Comparison1_n4 = ((rtb_TmpSignalConversionAtVeES_j &&
                           rtb_TmpSignalConversionAtVeES_o) ||
                          (rtb_Comparison1_ij_tmp &&
                           (SRAR_ac_DW.UnitDelay_DSTATE_fr)));

    /* Update for UnitDelay: '<S1686>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_fr = rtb_Comparison1_n4;

    /* End of Outputs for SubSystem: '<S1537>/SignalLatchOnWithReset1' */

    /* RelationalOperator: '<S1482>/Comparison1' incorporates:
     *  Constant: '<S1493>/Constant'
     */
    rtb_VeSRAR_b_HVOverVoltFailure_ = (((uint32)rtb_TmpSignalConversionAtVePM_g)
        == CePMDR_e_PowerMode_Run);

    /* Outputs for Atomic SubSystem: '<S1482>/EdgeRising1' */
    /* Logic: '<S1491>/AND' incorporates:
     *  Logic: '<S1491>/OR1'
     *  UnitDelay: '<S1491>/UnitDelay'
     */
    rtb_AND_ct = (rtb_VeSRAR_b_HVOverVoltFailure_ &&
                  (!SRAR_ac_DW.UnitDelay_DSTATE_kp));

    /* Update for UnitDelay: '<S1491>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_kp = rtb_VeSRAR_b_HVOverVoltFailure_;

    /* End of Outputs for SubSystem: '<S1482>/EdgeRising1' */

    /* Logic: '<S1537>/AND1' incorporates:
     *  Logic: '<S1530>/AND3'
     */
    rtb_Switch_g_idx_1 = !rtb_TmpSignalConversionAtVeES_o;

    /* Outputs for Atomic SubSystem: '<S530>/SignalLatchOnWithReset2' */
    /* Outputs for Atomic SubSystem: '<S525>/SignalLatchOnWithReset' */
    /* Outputs for Atomic SubSystem: '<S239>/SignalLatchOnWithReset' */
    /* Outputs for Atomic SubSystem: '<S533>/SignalLatchOnWithReset2' */
    /* Outputs for Atomic SubSystem: '<S254>/SignalLatchOnWithReset' */
    /* Outputs for Atomic SubSystem: '<S251>/SignalLatchOnWithReset' */
    /* Outputs for Atomic SubSystem: '<S260>/SignalLatchOnWithReset' */
    /* Outputs for Atomic SubSystem: '<S259>/SignalLatchOnWithReset' */
    /* Outputs for Atomic SubSystem: '<S261>/SignalLatchOnWithReset' */
    /* Outputs for Atomic SubSystem: '<S247>/SignalLatchOnWithReset' */
    /* Outputs for Atomic SubSystem: '<S238>/SignalLatchOnWithReset' */
    /* Outputs for Atomic SubSystem: '<S256>/SignalLatchOnWithReset' */
    /* Outputs for Atomic SubSystem: '<S255>/SignalLatchOnWithReset' */
    /* Outputs for Atomic SubSystem: '<S236>/SignalLatchOnWithReset' */
    /* Outputs for Atomic SubSystem: '<S253>/SignalLatchOnWithReset' */
    /* Outputs for Atomic SubSystem: '<S263>/SignalLatchOnWithReset' */
    /* Outputs for Atomic SubSystem: '<S1530>/SignalLatchOnWithReset1' */
    /* Outputs for Atomic SubSystem: '<S1537>/SignalLatchOnWithReset' */
    /* Logic: '<S1685>/NOT' incorporates:
     *  Logic: '<S1238>/NOT'
     *  Logic: '<S1266>/NOT'
     *  Logic: '<S1293>/NOT'
     *  Logic: '<S1353>/NOT'
     *  Logic: '<S1593>/NOT'
     *  Logic: '<S281>/NOT'
     *  Logic: '<S325>/NOT'
     *  Logic: '<S355>/NOT'
     *  Logic: '<S512>/NOT'
     *  Logic: '<S572>/NOT'
     *  Logic: '<S666>/NOT'
     *  Logic: '<S705>/NOT'
     *  Logic: '<S771>/NOT'
     *  Logic: '<S817>/NOT'
     *  Logic: '<S845>/NOT'
     *  Logic: '<S873>/NOT'
     *  Logic: '<S901>/NOT'
     */
    rtb_VeSRAR_b_HVOverVoltFailur_2 = !rtb_AND_ct;

    /* End of Outputs for SubSystem: '<S1530>/SignalLatchOnWithReset1' */
    /* End of Outputs for SubSystem: '<S263>/SignalLatchOnWithReset' */
    /* End of Outputs for SubSystem: '<S253>/SignalLatchOnWithReset' */
    /* End of Outputs for SubSystem: '<S236>/SignalLatchOnWithReset' */
    /* End of Outputs for SubSystem: '<S255>/SignalLatchOnWithReset' */
    /* End of Outputs for SubSystem: '<S256>/SignalLatchOnWithReset' */
    /* End of Outputs for SubSystem: '<S238>/SignalLatchOnWithReset' */
    /* End of Outputs for SubSystem: '<S247>/SignalLatchOnWithReset' */
    /* End of Outputs for SubSystem: '<S261>/SignalLatchOnWithReset' */
    /* End of Outputs for SubSystem: '<S259>/SignalLatchOnWithReset' */
    /* End of Outputs for SubSystem: '<S260>/SignalLatchOnWithReset' */
    /* End of Outputs for SubSystem: '<S251>/SignalLatchOnWithReset' */
    /* End of Outputs for SubSystem: '<S254>/SignalLatchOnWithReset' */
    /* End of Outputs for SubSystem: '<S533>/SignalLatchOnWithReset2' */
    /* End of Outputs for SubSystem: '<S239>/SignalLatchOnWithReset' */
    /* End of Outputs for SubSystem: '<S525>/SignalLatchOnWithReset' */
    /* End of Outputs for SubSystem: '<S530>/SignalLatchOnWithReset2' */

    /* Logic: '<S1685>/OR1' incorporates:
     *  Logic: '<S1537>/AND1'
     *  Logic: '<S1537>/Logical7'
     *  Logic: '<S1685>/NOT'
     *  Logic: '<S1685>/OR'
     *  UnitDelay: '<S1685>/UnitDelay'
     */
    rtb_VeSRAR_b_HVOverVoltFailure_ = ((rtb_TmpSignalConversionAtVeES_j &&
        rtb_Switch_g_idx_1) || (rtb_VeSRAR_b_HVOverVoltFailur_2 &&
        (SRAR_ac_DW.UnitDelay_DSTATE_aj)));

    /* Update for UnitDelay: '<S1685>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_aj = rtb_VeSRAR_b_HVOverVoltFailure_;

    /* End of Outputs for SubSystem: '<S1537>/SignalLatchOnWithReset' */

    /* Outputs for Atomic SubSystem: '<S1530>/SignalLatchOnWithReset1' */
    /* Logic: '<S1593>/OR1' incorporates:
     *  Constant: '<S1592>/Calib'
     *  Logic: '<S1530>/Logical11'
     *  Logic: '<S1593>/OR'
     *  UnitDelay: '<S1593>/UnitDelay'
     */
    rtb_Logical5_oz = ((((KeSRAR_b_FldAutoStrt_EngStrtStpEngShtDwnEnbl) &&
                         rtb_TmpSignalConversionAtVeES_j) && rtb_Switch_g_idx_1)
                       || (rtb_VeSRAR_b_HVOverVoltFailur_2 &&
                           (SRAR_ac_DW.UnitDelay_DSTATE_l5)));

    /* Update for UnitDelay: '<S1593>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_l5 = rtb_Logical5_oz;

    /* End of Outputs for SubSystem: '<S1530>/SignalLatchOnWithReset1' */

    /* Switch: '<S1842>/Switch1' incorporates:
     *  Constant: '<S1372>/ConstantValue2'
     *  Constant: '<S1372>/ConstantValue3'
     */
    if (rtb_Logical8_dq)
    {
        rtb_AND_cg = 2;
    }
    else
    {
        rtb_AND_cg = 0;
    }

    /* End of Switch: '<S1842>/Switch1' */

    /* Switch: '<S1853>/Switch1' incorporates:
     *  Constant: '<S1372>/ConstantValue4'
     *  Constant: '<S1372>/ConstantValue5'
     */
    if (rtb_Switch1_ahj)
    {
        rtb_OR1_ot = 4;
    }
    else
    {
        rtb_OR1_ot = 0;
    }

    /* End of Switch: '<S1853>/Switch1' */

    /* Switch: '<S1864>/Switch1' incorporates:
     *  Constant: '<S1372>/ConstantValue6'
     *  Constant: '<S1372>/ConstantValue7'
     */
    if (rtb_Switch1_pz)
    {
        rtb_Switch1_mu = 8;
    }
    else
    {
        rtb_Switch1_mu = 0;
    }

    /* End of Switch: '<S1864>/Switch1' */

    /* Switch: '<S1867>/Switch1' incorporates:
     *  Constant: '<S1372>/ConstantValue8'
     *  Constant: '<S1372>/ConstantValue9'
     */
    if (rtb_Switch1_pe)
    {
        rtb_Switch1_h0 = 16;
    }
    else
    {
        rtb_Switch1_h0 = 0;
    }

    /* End of Switch: '<S1867>/Switch1' */

    /* Switch: '<S1868>/Switch1' incorporates:
     *  Constant: '<S1372>/ConstantValue10'
     *  Constant: '<S1372>/ConstantValue11'
     *  Logic: '<S1536>/Logical1'
     */
    if (rtb_TmpSignalConversionAtVeDTRR || rtb_UnitDelay_eb)
    {
        rtb_TmpSignalConversionAtVeOB_3 = 32;
    }
    else
    {
        rtb_TmpSignalConversionAtVeOB_3 = 0;
    }

    /* End of Switch: '<S1868>/Switch1' */

    /* Switch: '<S1869>/Switch1' incorporates:
     *  Constant: '<S1372>/ConstantValue12'
     *  Constant: '<S1372>/ConstantValue13'
     */
    if (rtb_Switch1_fqq)
    {
        rtb_LogicalOperator_mad = 64;
    }
    else
    {
        rtb_LogicalOperator_mad = 0;
    }

    /* End of Switch: '<S1869>/Switch1' */

    /* Switch: '<S1870>/Switch1' incorporates:
     *  Constant: '<S1372>/ConstantValue14'
     *  Constant: '<S1372>/ConstantValue15'
     */
    if (rtb_Merge1_i)
    {
        rtb_TmpSignalConversionAtVeOB_2 = 128;
    }
    else
    {
        rtb_TmpSignalConversionAtVeOB_2 = 0;
    }

    /* End of Switch: '<S1870>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S1529>/TurnOnDelayTime1' */
    /* Switch: '<S1871>/Switch1' incorporates:
     *  Constant: '<S1372>/ConstantValue16'
     *  Constant: '<S1372>/ConstantValue17'
     *  Constant: '<S1588>/Calib'
     *  Logic: '<S1590>/AND'
     *  RelationalOperator: '<S1590>/GreaterThan'
     *  Switch: '<S1580>/Switch1'
     */
    if (rtb_Switch1_ajp && (rtb_TmpSignalConversionAtVeETQR && (rtb_Switch1_glj >=
          KeSRAR_t_EngActualTorqSS_FltDeb)))
    {
        rtb_TmpSignalConversionAtVeOB_1 = 256;
    }
    else
    {
        rtb_TmpSignalConversionAtVeOB_1 = 0;
    }

    /* End of Switch: '<S1871>/Switch1' */
    /* End of Outputs for SubSystem: '<S1529>/TurnOnDelayTime1' */

    /* Switch: '<S1846>/Switch1' incorporates:
     *  Constant: '<S1372>/ConstantValue26'
     *  Constant: '<S1372>/ConstantValue27'
     */
    if (tmpRead_a)
    {
        rtb_LogicalOperator_cr = 8192;
    }
    else
    {
        rtb_LogicalOperator_cr = 0;
    }

    /* End of Switch: '<S1846>/Switch1' */

    /* Switch: '<S1847>/Switch1' incorporates:
     *  Constant: '<S1372>/ConstantValue28'
     *  Constant: '<S1372>/ConstantValue29'
     */
    if (VeSRAC_b_OutOfFuelSOCShtDwn)
    {
        rtb_Switch1_fw = 16384;
    }
    else
    {
        rtb_Switch1_fw = 0;
    }

    /* End of Switch: '<S1847>/Switch1' */

    /* Switch: '<S1848>/Switch1' incorporates:
     *  Constant: '<S1372>/ConstantValue30'
     *  Constant: '<S1372>/ConstantValue31'
     */
    if (rtb_TmpSignalConversionAtVeES_j)
    {
        rtb_Logical6_0 = 32768;
    }
    else
    {
        rtb_Logical6_0 = 0;
    }

    /* End of Switch: '<S1848>/Switch1' */

    /* Switch: '<S1849>/Switch1' incorporates:
     *  Constant: '<S1372>/ConstantValue32'
     *  Constant: '<S1372>/ConstantValue33'
     *  Constant: '<S1633>/Calib'
     *  Logic: '<S1628>/Logical'
     *  RelationalOperator: '<S1628>/Comparison2'
     */
    if (rtb_TmpSignalConversionAtVeES_j && (rtb_TmpSignalConversionAtVeBPCR <=
            KeSRAR_Pct_MinSOCFailedAutoStart))
    {
        rtb_Switch1_a3 = 65536U;
    }
    else
    {
        rtb_Switch1_a3 = 0U;
    }

    /* End of Switch: '<S1849>/Switch1' */

    /* Switch: '<S1850>/Switch1' incorporates:
     *  Constant: '<S1372>/ConstantValue44'
     *  Constant: '<S1372>/ConstantValue55'
     */
    if (rtb_Comparison8)
    {
        rtb_TmpSignalConversionAtVeBP_p = 131072U;
    }
    else
    {
        rtb_TmpSignalConversionAtVeBP_p = 0U;
    }

    /* End of Switch: '<S1850>/Switch1' */

    /* Logic: '<S1655>/Logical8' incorporates:
     *  Logic: '<S20>/Logical4'
     */
    rtb_Switch_g_idx_1 = !rtb_TmpSignalConversionAtVePLTR;

    /* Switch: '<S1858>/Switch1' incorporates:
     *  Constant: '<S1372>/ConstantValue58'
     *  Constant: '<S1372>/ConstantValue59'
     *  Constant: '<S1660>/Constant'
     *  Constant: '<S1661>/Calib'
     *  Inport: '<Root>/VePMDR_e_KeyStatus'
     *  Logic: '<S1655>/Logical1'
     *  Logic: '<S1655>/Logical2'
     *  Logic: '<S1655>/Logical5'
     *  Logic: '<S1655>/Logical8'
     *  RelationalOperator: '<S1655>/Comparison1'
     *  RelationalOperator: '<S1655>/Comparison8'
     */
    if ((((rtb_Logical6 && rtb_Comparison8) && (rtb_TmpSignalConversionAtVeBPCR <=
           KeSRAR_Pct_MinSOCForStrtInNeut)) && rtb_TmpSignalConversionAtVePLTR) ||
        ((rtb_Switch_g_idx_1 && rtb_Comparison8) && (((uint32)tmpRead_n) ==
            CePMDR_e_KeySt_Crank)))
    {
        rtb_Switch1_f3 = 262144U;
    }
    else
    {
        rtb_Switch1_f3 = 0U;
    }

    /* End of Switch: '<S1858>/Switch1' */

    /* Switch: '<S1861>/Switch1' incorporates:
     *  Constant: '<S1372>/ConstantValue34'
     *  Constant: '<S1372>/ConstantValue35'
     */
    if (rtb_VeSRAR_b_AuxPumpFail_Inhibi)
    {
        rtb_VeSRAR_b_AuxPumpFail_Inhi_0 = 2097152U;
    }
    else
    {
        rtb_VeSRAR_b_AuxPumpFail_Inhi_0 = 0U;
    }

    /* End of Switch: '<S1861>/Switch1' */

    /* Switch: '<S1862>/Switch1' incorporates:
     *  Constant: '<S1372>/ConstantValue36'
     *  Constant: '<S1372>/ConstantValue37'
     *  Constant: '<S1550>/Constant1'
     *  Constant: '<S1550>/Constant2'
     *  Constant: '<S1557>/Calib'
     *  Constant: '<S1561>/ConstantValue3'
     *  DataStoreRead: '<S1550>/StatusByte_HybSysPerf5'
     *  Logic: '<S1528>/Logical14'
     *  Logic: '<S1550>/LogicalOperator'
     *  RelationalOperator: '<S1550>/RelationalOperator1'
     *  RelationalOperator: '<S1550>/RelationalOperator2'
     *  RelationalOperator: '<S1561>/Comparison3'
     *  S-Function (sfix_bitop): '<S1550>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S1550>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S1561>/BitwiseOperator2'
     */
    if ((((((sint32)SRAR_ac_DW.StatusByte_HybSysPerf5) & 1) > 0) && ((((uint32)
            SRAR_ac_DW.StatusByte_HybSysPerf5) & 64U) == 0U)) &&
            ((KeSRAR_g_StrtStpFailPhaseSelect & rtb_TmpSignalConversionAtVeESSR)
             >= 1U))
    {
        rtb_VeSRAR_b_TCMLmpFlt2_tmp = 4194304U;
    }
    else
    {
        rtb_VeSRAR_b_TCMLmpFlt2_tmp = 0U;
    }

    /* End of Switch: '<S1862>/Switch1' */

    /* Switch: '<S1863>/Switch1' incorporates:
     *  Constant: '<S1372>/ConstantValue38'
     *  Constant: '<S1372>/ConstantValue39'
     */
    if (rtb_VeSRAR_b_CKSFailed)
    {
        rtb_VeSRAR_b_CKSFailed_0 = 8388608U;
    }
    else
    {
        rtb_VeSRAR_b_CKSFailed_0 = 0U;
    }

    /* End of Switch: '<S1863>/Switch1' */

    /* Switch: '<S1865>/Switch1' incorporates:
     *  Constant: '<S1372>/ConstantValue40'
     *  Constant: '<S1372>/ConstantValue41'
     */
    if (rtb_VeSRAR_b_SpinUpFailed)
    {
        rtb_VeSRAR_b_SpinUpFailed_0 = 16777216U;
    }
    else
    {
        rtb_VeSRAR_b_SpinUpFailed_0 = 0U;
    }

    /* End of Switch: '<S1865>/Switch1' */

    /* Switch: '<S1866>/Switch1' incorporates:
     *  Constant: '<S1372>/ConstantValue42'
     *  Constant: '<S1372>/ConstantValue43'
     */
    if (VeSRAC_b_FuelPmpCavitation_EngOff)
    {
        rtb_TmpSignalConversionAtVeEN_d = 33554432U;
    }
    else
    {
        rtb_TmpSignalConversionAtVeEN_d = 0U;
    }

    /* End of Switch: '<S1866>/Switch1' */

    /* Switch: '<S1851>/Switch1' incorporates:
     *  Constant: '<S1372>/ConstantValue45'
     *  Constant: '<S1372>/ConstantValue46'
     *  Logic: '<S1535>/Logical1'
     */
    if ((rtb_UnitDelay_lw && rtb_Switch1_oz) && rtb_Logical4_b)
    {
        rtb_UnitDelay_k3 = 67108864U;
    }
    else
    {
        rtb_UnitDelay_k3 = 0U;
    }

    /* End of Switch: '<S1851>/Switch1' */

    /* Switch: '<S1852>/Switch1' incorporates:
     *  Constant: '<S1372>/ConstantValue47'
     *  Constant: '<S1372>/ConstantValue48'
     */
    if (rtb_Comparison1_n4)
    {
        rtb_Comparison1_ij = 134217728U;
    }
    else
    {
        rtb_Comparison1_ij = 0U;
    }

    /* End of Switch: '<S1852>/Switch1' */

    /* Switch: '<S1854>/Switch1' incorporates:
     *  Constant: '<S1372>/ConstantValue49'
     *  Constant: '<S1372>/ConstantValue50'
     */
    if (rtb_VeSRAR_b_HVOverVoltFailure_)
    {
        BitwiseLogicalOperator_b = 268435456U;
    }
    else
    {
        BitwiseLogicalOperator_b = 0U;
    }

    /* End of Switch: '<S1854>/Switch1' */

    /* Switch: '<S1855>/Switch1' incorporates:
     *  Constant: '<S1372>/ConstantValue51'
     *  Constant: '<S1372>/ConstantValue52'
     */
    if (rtb_Logical5_oz)
    {
        rtb_Logical5_cn = 536870912U;
    }
    else
    {
        rtb_Logical5_cn = 0U;
    }

    /* End of Switch: '<S1855>/Switch1' */

    /* Switch: '<S1856>/Switch1' incorporates:
     *  Constant: '<S1372>/ConstantValue53'
     *  Constant: '<S1372>/ConstantValue54'
     *  Logic: '<S1529>/Logical20'
     */
    if (rtb_Switch1_pz && rtb_Switch1_pe)
    {
        rtb_Switch1_mu_0 = 1073741824U;
    }
    else
    {
        rtb_Switch1_mu_0 = 0U;
    }

    /* End of Switch: '<S1856>/Switch1' */

    /* S-Function (sfix_bitop): '<S1372>/BitwiseLogicalOperator' incorporates:
     *  Constant: '<S1553>/Calib'
     *  Constant: '<S1564>/ConstantValue3'
     *  Logic: '<S1528>/Logical6'
     *  RelationalOperator: '<S1564>/Comparison3'
     *  S-Function (sfix_bitop): '<S1564>/BitwiseOperator2'
     */
    rtb_Switch1_ck = (((((((((((((((((((((((((((((((uint32)
        ((((rtb_TmpSignalConversionAtVeESSR & KeSRAR_g_BumpStrtInhibitSelect) >=
        1U) && rtb_VeSRAR_b_WEDStuckOpen) ? 1 : 0)) | ((uint32)rtb_AND_cg)) |
        ((uint32)rtb_OR1_ot)) | ((uint32)rtb_Switch1_mu)) | ((uint32)
        rtb_Switch1_h0)) | ((uint32)rtb_TmpSignalConversionAtVeOB_3)) | ((uint32)
        rtb_LogicalOperator_mad)) | ((uint32)rtb_TmpSignalConversionAtVeOB_2)) |
        ((uint32)rtb_TmpSignalConversionAtVeOB_1)) | rtb_Switch1_anw) |
        rtb_Switch1_ck) | rtb_Switch1_mr) | rtb_Switch1_bk) | ((uint32)
        rtb_LogicalOperator_cr)) | ((uint32)rtb_Switch1_fw)) | ((uint32)
        rtb_Logical6_0)) | rtb_Switch1_a3) | rtb_TmpSignalConversionAtVeBP_p) |
        rtb_Switch1_f3) | rtb_Switch1_c) | rtb_Switch1_fxq) |
        rtb_VeSRAR_b_AuxPumpFail_Inhi_0) | rtb_VeSRAR_b_TCMLmpFlt2_tmp) |
                            rtb_VeSRAR_b_CKSFailed_0) |
                           rtb_VeSRAR_b_SpinUpFailed_0) |
                          rtb_TmpSignalConversionAtVeEN_d) | rtb_UnitDelay_k3) |
                        rtb_Comparison1_ij) | BitwiseLogicalOperator_b) |
                      rtb_Logical5_cn) | rtb_Switch1_mu_0;

    /* Logic: '<S2328>/Logical2' incorporates:
     *  Constant: '<S2347>/Constant'
     *  Constant: '<S2349>/Calib'
     *  RelationalOperator: '<S2328>/Comparison3'
     */
    VeSRAC_b_NZeroPhaseLimpMechD6 = ((KeSRAR_b_NzeroPhsLimpD6Enbl) && (((uint32)
        rtb_TmpSignalConversionAtVeT_nz) == CeTINR_e_LimpMechD6));

    /* RelationalOperator: '<S2252>/Relational_Operator2' incorporates:
     *  Constant: '<S2312>/Constant'
     */
    rtb_VeSRAR_b_HVOverVoltFailure_ = (((uint32)rtb_TmpSignalConversionAtVeTRGR)
        == CeTRGR_e_TransRangeReverse);

    /* If: '<S2255>/If' incorporates:
     *  Constant: '<S2255>/ConstantValue1'
     *  Inport: '<Root>/VeBRKR_b_ABSActive'
     *  Inport: '<Root>/VeBRKR_b_ImpndSkid'
     *  Inport: '<Root>/VeMSPR_n_MtrB_Spd'
     *  Inport: '<Root>/VeSTRR_b_BumpStrtEngOn'
     *  RelationalOperator: '<S2255>/Comparison'
     */
    if ((((sint32)rtb_TmpSignalConversionAtVeTINR) > 0) ||
            (VeSRAC_b_NZeroPhaseLimpMechD6))
    {
        (void)Rte_Read_VeMSPR_n_MtrB_Spd_Value(&tmpRead_x);
        (void)Rte_Read_VeSTRR_b_BumpStrtEngOn_Value(&rtb_UnitDelay_b2);
        (void)Rte_Read_VeBRKR_b_ImpndSkid_Value(&rtb_Switch5_f);
        (void)Rte_Read_VeBRKR_b_ABSActive_Value(&rtb_UnitDelay_fh);

        /* Outputs for IfAction SubSystem: '<S2255>/TCM_In_Limp' incorporates:
         *  ActionPort: '<S2327>/ActionPort'
         */
        /* S-Function (sfix_bitop): '<S2327>/BitwiseLogicalOperator11' incorporates:
         *  Constant: '<S2327>/ConstantValue10'
         *  Inport: '<Root>/VeBRKR_b_ABSActive'
         *  Inport: '<Root>/VeBRKR_b_ImpndSkid'
         *  Inport: '<Root>/VeMSPR_n_MtrB_Spd'
         *  Inport: '<Root>/VeSTRR_b_BumpStrtEngOn'
         */
        rtb_Switch1_iz = (uint16)(rtb_TmpSignalConversionAtVeTINR & ((uint16)512));

        /* S-Function (sfix_bitop): '<S2327>/BitwiseLogicalOperator14' incorporates:
         *  Constant: '<S2327>/ConstantValue16'
         */
        VeSRAC_b_CANCOMFail = (uint16)(rtb_TmpSignalConversionAtVeTINR &
            ((uint16)4096));

        /* S-Function (sfix_bitop): '<S2327>/BitwiseLogicalOperator15' incorporates:
         *  Constant: '<S2327>/ConstantValue13'
         */
        VeSRAC_b_Reserved0 = (uint16)(rtb_TmpSignalConversionAtVeTINR & ((uint16)
            8192));

        /* S-Function (sfix_bitop): '<S2327>/BitwiseLogicalOperator16' incorporates:
         *  Constant: '<S2327>/ConstantValue14'
         */
        VeSRAC_b_Reserved1 = (uint16)(rtb_TmpSignalConversionAtVeTINR & ((uint16)
            16384));

        /* S-Function (sfix_bitop): '<S2327>/BitwiseLogicalOperator17' incorporates:
         *  Constant: '<S2327>/ConstantValue15'
         */
        VeSRAC_b_Reserved2 = (uint16)(((uint32)rtb_TmpSignalConversionAtVeTINR)
            & ((uint32)32768));

        /* RelationalOperator: '<S2327>/Comparison12' incorporates:
         *  Constant: '<S2327>/ConstantValue23'
         *  Constant: '<S2327>/ConstantValue6'
         *  S-Function (sfix_bitop): '<S2327>/BitwiseLogicalOperator7'
         */
        VeSRAC_b_P2SpdLow = ((((sint32)rtb_TmpSignalConversionAtVeTINR) & 32) >=
                             1);

        /* SignalConversion generated from: '<S2>/PerfLmtd_StpSfly' incorporates:
         *  Logic: '<S2330>/AND'
         *  Outport: '<Root>/VeSRAR_b_PerfLmtd_StpSfly'
         */
        (void)Rte_Write_VeSRAR_b_PerfLmtd_StpSfly_Value(VeSRAC_b_P2SpdLow);

        /* RelationalOperator: '<S2327>/Comparison14' incorporates:
         *  Constant: '<S2327>/ConstantValue25'
         *  Constant: '<S2327>/ConstantValue8'
         *  S-Function (sfix_bitop): '<S2327>/BitwiseLogicalOperator9'
         */
        VeSRAC_b_K0NotClose = ((((sint32)rtb_TmpSignalConversionAtVeTINR) & 128)
                               >= 1);

        /* Logic: '<S2260>/Logical2' incorporates:
         *  Logic: '<S2334>/AND'
         */
        rtb_Logical6 = VeSRAC_b_K0NotClose;

        /* RelationalOperator: '<S1532>/Comparison1' incorporates:
         *  Constant: '<S2327>/ConstantValue'
         *  Constant: '<S2340>/Calib'
         *  RelationalOperator: '<S2327>/Comparison'
         *  S-Function (sfix_bitop): '<S2327>/BitwiseLogicalOperator6'
         */
        rtb_Comparison1_n4 = ((((sint32)rtb_TmpSignalConversionAtVeTINR) &
                               ((sint32)KeSRAR_d_TCMFailures_MaskVal)) >= 1);

        /* RelationalOperator: '<S2327>/Comparison10' incorporates:
         *  Constant: '<S2327>/ConstantValue21'
         *  Constant: '<S2327>/ConstantValue4'
         *  S-Function (sfix_bitop): '<S2327>/BitwiseLogicalOperator4'
         */
        VeSRAC_b_NPhaseElecLimpHom = ((((sint32)rtb_TmpSignalConversionAtVeTINR)
            & 8) >= 1);

        /* RelationalOperator: '<S2327>/Comparison11' incorporates:
         *  Constant: '<S2327>/ConstantValue22'
         *  Constant: '<S2327>/ConstantValue5'
         *  S-Function (sfix_bitop): '<S2327>/BitwiseLogicalOperator5'
         */
        VeSRAC_b_ElecLimpHom_3Fix = ((((sint32)rtb_TmpSignalConversionAtVeTINR)
            & 16) >= 1);

        /* Merge: '<S2255>/Merge10' incorporates:
         *  Constant: '<S2327>/ConstantValue24'
         *  Constant: '<S2327>/ConstantValue7'
         *  RelationalOperator: '<S2327>/Comparison13'
         *  S-Function (sfix_bitop): '<S2327>/BitwiseLogicalOperator8'
         */
        VeSRAC_b_P2SpdSignlFailur = ((((sint32)rtb_TmpSignalConversionAtVeTINR)
            & 64) >= 1);

        /* RelationalOperator: '<S2327>/Comparison15' incorporates:
         *  Constant: '<S2327>/ConstantValue26'
         *  Constant: '<S2327>/ConstantValue9'
         *  S-Function (sfix_bitop): '<S2327>/BitwiseLogicalOperator10'
         */
        VeSRAC_b_K0NotOpen = ((((sint32)rtb_TmpSignalConversionAtVeTINR) & 256) >=
                              1);

        /* RelationalOperator: '<S2327>/Comparison16' incorporates:
         *  Constant: '<S2327>/ConstantValue27'
         */
        VeSRAC_b_K0ModeReqstInvalid = (((sint32)rtb_Switch1_iz) >= 1);

        /* Merge: '<S1147>/Merge1' incorporates:
         *  Constant: '<S2327>/ConstantValue11'
         *  Constant: '<S2327>/ConstantValue28'
         *  RelationalOperator: '<S2327>/Comparison17'
         *  S-Function (sfix_bitop): '<S2327>/BitwiseLogicalOperator12'
         */
        rtb_Merge1_i = ((((sint32)rtb_TmpSignalConversionAtVeTINR) & 1024) >= 1);

        /* RelationalOperator: '<S2327>/Comparison18' incorporates:
         *  Constant: '<S2327>/ConstantValue12'
         *  Constant: '<S2327>/ConstantValue29'
         *  S-Function (sfix_bitop): '<S2327>/BitwiseLogicalOperator13'
         */
        VeSRAC_b_IAENotClose = ((((sint32)rtb_TmpSignalConversionAtVeTINR) &
            2048) >= 1);

        /* RelationalOperator: '<S2327>/Comparison22' incorporates:
         *  Constant: '<S2327>/ConstantValue33'
         */
        rtb_TmpSignalConversionAtVeETQR = (((sint32)rtb_Switch1_iz) >= 1);

        /* RelationalOperator: '<S2327>/Comparison7' incorporates:
         *  Constant: '<S2327>/ConstantValue18'
         *  Constant: '<S2327>/ConstantValue2'
         *  S-Function (sfix_bitop): '<S2327>/BitwiseLogicalOperator2'
         */
        VeSRAC_b_ElecLimpHom1_3 = ((((sint32)rtb_TmpSignalConversionAtVeTINR) &
            2) >= 1);

        /* RelationalOperator: '<S2327>/Comparison9' incorporates:
         *  Constant: '<S2327>/ConstantValue20'
         *  Constant: '<S2327>/ConstantValue3'
         *  S-Function (sfix_bitop): '<S2327>/BitwiseLogicalOperator3'
         */
        VeSRAC_b_ElecLimpHom4_8 = ((((sint32)rtb_TmpSignalConversionAtVeTINR) &
            4) >= 1);

        /* Logic: '<S2327>/Logical1' incorporates:
         *  Constant: '<S2335>/Constant'
         *  Constant: '<S2336>/Constant'
         *  RelationalOperator: '<S2327>/Comparison1'
         *  RelationalOperator: '<S2327>/Comparison2'
         */
        VeSRAC_b_M1_Ntrl = ((((uint32)rtb_TmpSignalConversionAtVeHSER) ==
                             CeHSER_e_Neutral) || (((uint32)
                              rtb_TmpSignalConversionAtVeHSER) == CeHSER_e_M1));

        /* UnitDelay: '<S201>/UnitDelay' incorporates:
         *  Logic: '<S2327>/Logical10'
         */
        rtb_UnitDelay_eb = ((VeSRAC_b_K0NotClose) && rtb_UnitDelay_b2);

        /* Logic: '<S2327>/Logical13' incorporates:
         *  Constant: '<S2327>/ConstantValue1'
         *  Constant: '<S2327>/ConstantValue17'
         *  RelationalOperator: '<S2327>/Comparison6'
         *  S-Function (sfix_bitop): '<S2327>/BitwiseLogicalOperator1'
         */
        VeSRAC_b_MechLimpHom = (((((sint32)rtb_TmpSignalConversionAtVeTINR) & 1)
            >= 1) || (VeSRAC_b_NZeroPhaseLimpMechD6));

        /* Logic: '<S2327>/Logical2' incorporates:
         *  Constant: '<S2337>/Constant'
         *  Constant: '<S2338>/Constant'
         *  RelationalOperator: '<S2327>/Comparison3'
         *  RelationalOperator: '<S2327>/Comparison5'
         */
        VeSRAC_b_M2_G2 = ((((uint32)rtb_TmpSignalConversionAtVeHSER) ==
                           CeHSER_e_M2) || (((uint32)
                            rtb_TmpSignalConversionAtVeHSER) == CeHSER_e_G2));

        /* Logic: '<S2327>/Logical3' incorporates:
         *  UnitDelay: '<S2327>/UnitDelay'
         */
        VeSRAC_b_K0ModeReqst_Inhibit_M2_G2 = (rtb_TmpSignalConversionAtVeETQR &&
            (SRAR_ac_DW.UnitDelay_DSTATE_bw1));

        /* Logic: '<S2327>/Logical4' incorporates:
         *  UnitDelay: '<S2327>/UnitDelay1'
         */
        VeSRAC_b_K0ModeReqst_Inhibit_M1_N = (rtb_TmpSignalConversionAtVeETQR &&
            (SRAR_ac_DW.UnitDelay1_DSTATE_mm));

        /* UnitDelay: '<S718>/UnitDelay' incorporates:
         *  Constant: '<S2339>/Calib'
         *  Logic: '<S2327>/Logical5'
         *  Selector: '<S2327>/Selector'
         */
        rtb_UnitDelay_b2 = ((VeSRAC_b_P2SpdLow) && (KaSRAR_b_AutoStartStSelect
                             [(rtb_TmpSignalConversionAtVeES_d)]));

        /* Logic: '<S2327>/Logical6' incorporates:
         *  Constant: '<S2341>/Calib'
         *  Logic: '<S2327>/Logical12'
         *  RelationalOperator: '<S2327>/Comparison4'
         */
        VeSRAC_b_MechLimp_DAllwdDsbl = ((VeSRAC_b_MechLimpHom) && ((tmpRead_x <
            KeSRAR_n_MechLimpP2SpdThrshld) || rtb_VeSRAR_b_HVOverVoltFailure_));

        /* Logic: '<S2327>/Logical9' */
        rtb_Switch5_f = (rtb_UnitDelay_fh || rtb_Switch5_f);

        /* Merge: '<S2255>/Merge15' incorporates:
         *  Logic: '<S2327>/Logical7'
         */
        VeSRAC_b_IAENotClose_ABSImpndActvl = ((VeSRAC_b_IAENotClose) &&
            rtb_Switch5_f);

        /* Logic: '<S2327>/Logical8' */
        VeSRAC_b_Enpg4_8_ABSActv = (rtb_Switch5_f && (VeSRAC_b_ElecLimpHom4_8));

        /* Merge: '<S2255>/Merge16' incorporates:
         *  SignalConversion: '<S2327>/SignalConversion'
         */
        VeSRAC_b_Enpg4_8_ABSImpndActvl = VeSRAC_b_Enpg4_8_ABSActv;

        /* Logic: '<S1532>/Logical4' incorporates:
         *  SignalConversion: '<S2327>/SignalConversion1'
         */
        rtb_Logical4_b = VeSRAC_b_MechLimpHom;

        /* Logic: '<S2113>/Logical8' incorporates:
         *  SignalConversion: '<S2327>/SignalConversion10'
         */
        rtb_Logical8_dq = VeSRAC_b_K0ModeReqst_Inhibit_M2_G2;

        /* Switch: '<S2256>/Switch5' incorporates:
         *  SignalConversion: '<S2327>/SignalConversion11'
         */
        rtb_Switch5_f = VeSRAC_b_K0ModeReqst_Inhibit_M1_N;

        /* Logic: '<S1532>/Logical5' incorporates:
         *  SignalConversion: '<S2327>/SignalConversion2'
         */
        rtb_Logical5_oz = VeSRAC_b_ElecLimpHom1_3;

        /* Logic: '<S2260>/Logical3' incorporates:
         *  SignalConversion: '<S2327>/SignalConversion3'
         */
        rtb_VeSRAR_b_WEDStuckOpen = VeSRAC_b_ElecLimpHom4_8;

        /* Switch: '<S2260>/Switch1' incorporates:
         *  SignalConversion: '<S2327>/SignalConversion4'
         */
        rtb_Switch1_oz = VeSRAC_b_NPhaseElecLimpHom;

        /* RelationalOperator: '<S2252>/Relational_Operator3' incorporates:
         *  SignalConversion: '<S2327>/SignalConversion5'
         */
        rtb_Relational_Operator3 = VeSRAC_b_ElecLimpHom_3Fix;

        /* RelationalOperator: '<S2249>/Comparison3' incorporates:
         *  SignalConversion: '<S2327>/SignalConversion6'
         */
        rtb_Comparison3_bq = VeSRAC_b_K0NotOpen;

        /* RelationalOperator: '<S1529>/Comparison7' incorporates:
         *  SignalConversion: '<S2327>/SignalConversion7'
         */
        rtb_Comparison7_o5 = VeSRAC_b_IAENotClose;

        /* Switch: '<S1464>/Switch1' incorporates:
         *  SignalConversion: '<S2327>/SignalConversion8'
         */
        rtb_TmpSignalConversionAtVeETQR = VeSRAC_b_K0ModeReqstInvalid;

        /* UnitDelay: '<S717>/UnitDelay' incorporates:
         *  SignalConversion: '<S2327>/SignalConversion9'
         */
        rtb_UnitDelay_fh = VeSRAC_b_MechLimp_DAllwdDsbl;

        /* Update for UnitDelay: '<S2327>/UnitDelay' */
        SRAR_ac_DW.UnitDelay_DSTATE_bw1 = VeSRAC_b_M1_Ntrl;

        /* Update for UnitDelay: '<S2327>/UnitDelay1' */
        SRAR_ac_DW.UnitDelay1_DSTATE_mm = VeSRAC_b_M2_G2;

        /* End of Outputs for SubSystem: '<S2255>/TCM_In_Limp' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S2255>/TCM_Not_In_Limp' incorporates:
         *  ActionPort: '<S2329>/ActionPort'
         */
        /* RelationalOperator: '<S1532>/Comparison1' incorporates:
         *  Constant: '<S2329>/FALSEConstant'
         *  SignalConversion generated from: '<S2329>/TCMFailuresMasked'
         */
        rtb_Comparison1_n4 = false;

        /* Logic: '<S1532>/Logical4' incorporates:
         *  Constant: '<S2329>/FALSEConstant1'
         *  SignalConversion generated from: '<S2329>/MechLimpHom'
         */
        rtb_Logical4_b = false;

        /* Logic: '<S1532>/Logical5' incorporates:
         *  Constant: '<S2329>/FALSEConstant2'
         *  SignalConversion generated from: '<S2329>/ElecLimpHom1_3'
         */
        rtb_Logical5_oz = false;

        /* Logic: '<S2260>/Logical3' incorporates:
         *  Constant: '<S2329>/FALSEConstant3'
         *  SignalConversion generated from: '<S2329>/ElecLimpHom4_8'
         */
        rtb_VeSRAR_b_WEDStuckOpen = false;

        /* Switch: '<S2260>/Switch1' incorporates:
         *  Constant: '<S2329>/FALSEConstant4'
         *  SignalConversion generated from: '<S2329>/NPhaseElecLimpHom'
         */
        rtb_Switch1_oz = false;

        /* RelationalOperator: '<S2252>/Relational_Operator3' incorporates:
         *  Constant: '<S2329>/FALSEConstant5'
         *  SignalConversion generated from: '<S2329>/ElecLimpHom_3Fix'
         */
        rtb_Relational_Operator3 = false;

        /* Logic: '<S2260>/Logical2' incorporates:
         *  Constant: '<S2329>/FALSEConstant7'
         *  SignalConversion generated from: '<S2329>/K0NotClose'
         */
        rtb_Logical6 = false;

        /* RelationalOperator: '<S2249>/Comparison3' incorporates:
         *  Constant: '<S2329>/FALSEConstant8'
         *  SignalConversion generated from: '<S2329>/K0NotOpen'
         */
        rtb_Comparison3_bq = false;

        /* RelationalOperator: '<S1529>/Comparison7' incorporates:
         *  Constant: '<S2329>/FALSEConstant10'
         *  SignalConversion generated from: '<S2329>/IAENotClose'
         */
        rtb_Comparison7_o5 = false;

        /* Switch: '<S1464>/Switch1' incorporates:
         *  Constant: '<S2329>/FALSEConstant9'
         *  SignalConversion generated from: '<S2329>/K0ModeReqstInvalid'
         */
        rtb_TmpSignalConversionAtVeETQR = false;

        /* Merge: '<S2255>/Merge10' incorporates:
         *  Constant: '<S2329>/FALSEConstant6'
         *  SignalConversion generated from: '<S2329>/P2SpdSignlFailur'
         */
        VeSRAC_b_P2SpdSignlFailur = false;

        /* Logic: '<S2113>/Logical8' incorporates:
         *  Constant: '<S2329>/FALSEConstant11'
         *  SignalConversion generated from: '<S2329>/K0ModeReqst_Inhibit_M2_G2'
         */
        rtb_Logical8_dq = false;

        /* Switch: '<S2256>/Switch5' incorporates:
         *  Constant: '<S2329>/FALSEConstant12'
         *  SignalConversion generated from: '<S2329>/K0ModeReqst_Inhibit_M1_N'
         */
        rtb_Switch5_f = false;

        /* UnitDelay: '<S718>/UnitDelay' incorporates:
         *  Constant: '<S2329>/FALSEConstant13'
         *  SignalConversion generated from: '<S2329>/P2SpdLow_EngOff'
         */
        rtb_UnitDelay_b2 = false;

        /* UnitDelay: '<S717>/UnitDelay' incorporates:
         *  Constant: '<S2329>/FALSEConstant14'
         *  SignalConversion generated from: '<S2329>/MechLimp_DAllwdDsbl'
         */
        rtb_UnitDelay_fh = false;

        /* Merge: '<S2255>/Merge15' incorporates:
         *  Constant: '<S2329>/FALSEConstant15'
         *  SignalConversion generated from: '<S2329>/IAENotClose_ABSImpndActv'
         */
        VeSRAC_b_IAENotClose_ABSImpndActvl = false;

        /* Merge: '<S2255>/Merge16' incorporates:
         *  Constant: '<S2329>/FALSEConstant16'
         *  SignalConversion generated from: '<S2329>/Enpg4_8_ABSImpndActv'
         */
        VeSRAC_b_Enpg4_8_ABSImpndActvl = false;

        /* SignalConversion generated from: '<S2>/PerfLmtd_StpSfly' incorporates:
         *  Constant: '<S2329>/FALSEConstant17'
         *  Outport: '<Root>/VeSRAR_b_PerfLmtd_StpSfly'
         *  SignalConversion generated from: '<S2329>/PerfLmtd_StpSfly'
         */
        (void)Rte_Write_VeSRAR_b_PerfLmtd_StpSfly_Value(false);

        /* UnitDelay: '<S201>/UnitDelay' incorporates:
         *  Constant: '<S2329>/FALSEConstant18'
         *  SignalConversion generated from: '<S2329>/K0NotClsBmpStrt'
         */
        rtb_UnitDelay_eb = false;

        /* Merge: '<S1147>/Merge1' incorporates:
         *  Constant: '<S2329>/FALSEConstant19'
         *  SignalConversion generated from: '<S2329>/ENPG1Fix'
         */
        rtb_Merge1_i = false;

        /* End of Outputs for SubSystem: '<S2255>/TCM_Not_In_Limp' */
    }

    /* End of If: '<S2255>/If' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeTTIR_b_TransTrqReqFst_Pass' */
    (void)Rte_Read_VeTTIR_b_TransTrqReqFst_Pass_Value(&rtb_LogicalOperator_h);

    /* Inport: '<Root>/VeTRGR_b_DisableDrvAllwd' */
    (void)Rte_Read_VeTRGR_b_DisableDrvAllwd_Value
        (&rtb_VeSRAR_b_MtrB_InvrtrFault_g);

    /* Inport: '<Root>/VeTINR_b_Inhibit_Gear4' */
    (void)Rte_Read_VeTINR_b_Inhibit_Gear4_Value(&rtb_VeSRAR_b_MtrA_InvrtrFaultd_);

    /* Inport: '<Root>/VeTINR_b_Inhibit_Gear3' */
    (void)Rte_Read_VeTINR_b_Inhibit_Gear3_Value(&rtb_Logical9);

    /* Inport: '<Root>/VeTINR_b_Inhibit_Gear2' */
    (void)Rte_Read_VeTINR_b_Inhibit_Gear2_Value(&tmpRead_i);

    /* Inport: '<Root>/VeTINR_b_Inhibit_Gear1' */
    (void)Rte_Read_VeTINR_b_Inhibit_Gear1_Value(&tmpRead_h);

    /* Inport: '<Root>/VeCSDR_b_Clch2_Avail' */
    (void)Rte_Read_VeCSDR_b_Clch2_Avail_Value(&tmpRead_g);

    /* Inport: '<Root>/VeCSDR_b_Clch1_Avail' */
    (void)Rte_Read_VeCSDR_b_Clch1_Avail_Value(&tmpRead_f);

    /* Inport: '<Root>/VeGSMR_b_PpawlInsrtMntrFailed' */
    (void)Rte_Read_VeGSMR_b_PpawlInsrtMntrFailed_Value(&tmpRead_e);

    /* Inport: '<Root>/VeTISR_b_InputSpeedFA' */
    (void)Rte_Read_VeTISR_b_InputSpeedFA_Value(&tmpRead_d);

    /* Inport: '<Root>/VeCSVR_b_TOS_DirectionError' */
    (void)Rte_Read_VeCSVR_b_TOS_DirectionError_Value(&tmpRead_9);

    /* Inport: '<Root>/VeVSDR_e_PrimNoSrc' */
    (void)Rte_Read_VeVSDR_e_PrimNoSrc_Value(&tmpRead_8);

    /* Inport: '<Root>/VeCCMR_b_Clch1To4CmdFlt' */
    (void)Rte_Read_VeCCMR_b_Clch1To4CmdFlt_Value(&tmpRead_7);

    /* Inport: '<Root>/VeTISR_b_TransInAng720EstErr' */
    (void)Rte_Read_VeTISR_b_TransInAng720EstErr_Value(&tmpRead_6);

    /* Inport: '<Root>/VeTISR_b_InputSpdRatlFlt_FltDtct' */
    (void)Rte_Read_VeTISR_b_InputSpdRatlFlt_FltDtct_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRAR_MedTEB'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Switch: '<S1885>/Switch1' */
    if (rtb_Comparison1_n4)
    {
        /* Switch: '<S2088>/Switch1' incorporates:
         *  Constant: '<S1373>/ConstantValue4'
         */
        rtb_Switch1_anw = 4U;
    }
    else
    {
        /* Switch: '<S2088>/Switch1' incorporates:
         *  Constant: '<S1373>/ConstantValue5'
         */
        rtb_Switch1_anw = 0U;
    }

    /* End of Switch: '<S1885>/Switch1' */

    /* RelationalOperator: '<S1532>/Comparison1' incorporates:
     *  Constant: '<S2415>/Constant'
     *  Inport: '<Root>/VeVSDR_e_PrimNoSrc'
     *  RelationalOperator: '<S2411>/Comparison4'
     */
    rtb_Comparison1_n4 = (((uint32)tmpRead_8) == CeVSDR_e_PrimNoSrcNotAvail);

    /* S-Function (sfix_bitop): '<S2412>/BitwiseOperator2' incorporates:
     *  DataStoreRead: '<S2412>/StatusByte_InvData_TCM'
     *  S-Function (sfix_bitop): '<S2281>/BitwiseOperator2'
     *  Switch: '<S2289>/Switch1'
     */
    rtb_TmpSignalConversionAtVeOB_1 = ((sint32)SRAR_ac_DW.StatusByte_InvData_TCM)
        & 1;

    /* S-Function (sfix_bitop): '<S2412>/BitwiseOperator1' incorporates:
     *  DataStoreRead: '<S2412>/StatusByte_InvData_TCM'
     *  S-Function (sfix_bitop): '<S2281>/BitwiseOperator1'
     *  Switch: '<S2289>/Switch1'
     */
    rtb_Switch1_fxq = ((uint32)SRAR_ac_DW.StatusByte_InvData_TCM) & 64U;

    /* UnitDelay: '<S1626>/UnitDelay' incorporates:
     *  Constant: '<S2412>/Constant1'
     *  Constant: '<S2412>/Constant2'
     *  Logic: '<S2412>/LogicalOperator'
     *  RelationalOperator: '<S2412>/RelationalOperator1'
     *  RelationalOperator: '<S2412>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S2412>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S2412>/BitwiseOperator2'
     */
    rtb_UnitDelay_lw = ((rtb_TmpSignalConversionAtVeOB_1 > 0) &&
                        (rtb_Switch1_fxq == 0U));

    /* Switch: '<S2291>/Switch1' */
    if (rtb_Switch1_ajp)
    {
        /* Switch: '<S2291>/Switch1' incorporates:
         *  Constant: '<S2283>/Constant1'
         *  Constant: '<S2283>/Constant2'
         *  DataStoreRead: '<S2283>/StatusByte_LostCommABS_BusB'
         *  Logic: '<S2283>/LogicalOperator'
         *  RelationalOperator: '<S2283>/RelationalOperator1'
         *  RelationalOperator: '<S2283>/RelationalOperator2'
         *  S-Function (sfix_bitop): '<S2283>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S2283>/BitwiseOperator2'
         */
        rtb_Switch1_fqq = (((((sint32)SRAR_ac_DW.StatusByte_LostCommABS_BusB) &
                             1) > 0) && ((((uint32)
                              SRAR_ac_DW.StatusByte_LostCommABS_BusB) & 64U) ==
                            0U));
    }
    else
    {
        /* Switch: '<S2291>/Switch1' incorporates:
         *  Constant: '<S2249>/Constant3'
         */
        rtb_Switch1_fqq = false;
    }

    /* End of Switch: '<S2291>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeMTIR_b_MtrA_TorqAchievedFA' */
    (void)Rte_Read_VeMTIR_b_MtrA_TorqAchievedFA_Value(&rtb_AND_iy);

    /* Inport: '<Root>/VeINVR_b_MtrA_TempFA' */
    (void)Rte_Read_VeINVR_b_MtrA_TempFA_Value(&rtb_AND_ne);

    /* Inport: '<Root>/VeMSPR_b_MtrA_SpdFARaw' */
    (void)Rte_Read_VeMSPR_b_MtrA_SpdFARaw_Value(&rtb_Comparison4_lp);

    /* Inport: '<Root>/VeINVR_b_MtrA_InvrtrTempFA' */
    (void)Rte_Read_VeINVR_b_MtrA_InvrtrTempFA_Value(&rtb_Comparison6_m);

    /* Inport: '<Root>/VeINVR_b_MtrA_DC_VoltFA' */
    (void)Rte_Read_VeINVR_b_MtrA_DC_VoltFA_Value(&rtb_Logical12_i);

    /* Inport: '<Root>/VeINVR_b_MtrA_DC_CrntFA' */
    (void)Rte_Read_VeINVR_b_MtrA_DC_CrntFA_Value(&rtb_Logical24_a);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRAR_MedTEB'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Logic: '<S2288>/LogicalOperator' incorporates:
     *  Constant: '<S2288>/Constant1'
     *  Constant: '<S2288>/Constant2'
     *  DataStoreRead: '<S2288>/StatusByte_LostCommTrans'
     *  RelationalOperator: '<S2288>/RelationalOperator1'
     *  RelationalOperator: '<S2288>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S2288>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S2288>/BitwiseOperator2'
     */
    rtb_LogicalOperator_lm = (((((sint32)SRAR_ac_DW.StatusByte_LostCommTrans) &
        1) > 0) && ((((uint32)SRAR_ac_DW.StatusByte_LostCommTrans) & 64U) == 0U));

    /* Switch: '<S2292>/Switch1' */
    rtb_Switch1_ahj = (rtb_Switch1_ajp && rtb_LogicalOperator_lm);

    /* Switch: '<S1874>/Switch1' incorporates:
     *  Constant: '<S1373>/ConstantValue2'
     *  Constant: '<S1373>/ConstantValue3'
     *  Constant: '<S2304>/Constant'
     *  Inport: '<Root>/VeTRGR_e_EPB_Hold_Req'
     *  RelationalOperator: '<S2251>/Relational_Operator'
     */
    if (((uint32)tmpRead_j) == CeTRGR_e_EPBReq_ACTIVE)
    {
        rtb_LogicalOperator_cr = 2;
    }
    else
    {
        rtb_LogicalOperator_cr = 0;
    }

    /* End of Switch: '<S1874>/Switch1' */

    /* Switch: '<S1896>/Switch1' incorporates:
     *  Constant: '<S1373>/ConstantValue6'
     *  Constant: '<S1373>/ConstantValue7'
     */
    if (rtb_Comparison1_n4)
    {
        rtb_Switch1_fw = 8;
    }
    else
    {
        rtb_Switch1_fw = 0;
    }

    /* End of Switch: '<S1896>/Switch1' */

    /* Switch: '<S1899>/Switch1' incorporates:
     *  Constant: '<S1373>/ConstantValue8'
     *  Constant: '<S1373>/ConstantValue9'
     *  Constant: '<S2414>/Calib'
     *  Logic: '<S2259>/Logical16'
     *  Logic: '<S2259>/Logical17'
     */
    if (rtb_Comparison1_n4 && ((KeSRAR_b_DsblTCMInvldData_Nturb) ||
                               rtb_UnitDelay_lw))
    {
        rtb_Switch1_h0 = 16;
    }
    else
    {
        rtb_Switch1_h0 = 0;
    }

    /* End of Switch: '<S1899>/Switch1' */

    /* Switch: '<S1900>/Switch1' incorporates:
     *  Constant: '<S1373>/ConstantValue10'
     *  Constant: '<S1373>/ConstantValue11'
     *  Constant: '<S2413>/Calib'
     *  Logic: '<S2259>/Logical14'
     *  Logic: '<S2259>/Logical15'
     *  Logic: '<S2259>/Logical18'
     */
    if ((!rtb_LogicalOperator_h) && ((KeSRAR_b_DsblTCMInvldData_FstPass) ||
            rtb_UnitDelay_lw))
    {
        rtb_TmpSignalConversionAtVeOB_2 = 32;
    }
    else
    {
        rtb_TmpSignalConversionAtVeOB_2 = 0;
    }

    /* End of Switch: '<S1900>/Switch1' */

    /* Switch: '<S1901>/Switch1' incorporates:
     *  Constant: '<S1373>/ConstantValue12'
     *  Constant: '<S1373>/ConstantValue13'
     */
    if (tmpRead_9)
    {
        rtb_AND_d = 64;
    }
    else
    {
        rtb_AND_d = 0;
    }

    /* End of Switch: '<S1901>/Switch1' */

    /* Switch: '<S1902>/Switch1' incorporates:
     *  Constant: '<S1373>/ConstantValue14'
     *  Constant: '<S1373>/ConstantValue15'
     */
    if (tmpRead)
    {
        rtb_TmpSignalConversionAtVeOB_3 = 128;
    }
    else
    {
        rtb_TmpSignalConversionAtVeOB_3 = 0;
    }

    /* End of Switch: '<S1902>/Switch1' */

    /* Switch: '<S1903>/Switch1' incorporates:
     *  Constant: '<S1373>/ConstantValue16'
     *  Constant: '<S1373>/ConstantValue17'
     */
    if (tmpRead_6)
    {
        rtb_VeSRAR_b_HVOverVoltFailur_1 = 256;
    }
    else
    {
        rtb_VeSRAR_b_HVOverVoltFailur_1 = 0;
    }

    /* End of Switch: '<S1903>/Switch1' */

    /* Switch: '<S1904>/Switch1' incorporates:
     *  Constant: '<S1373>/ConstantValue18'
     *  Constant: '<S1373>/ConstantValue19'
     */
    if (Switch1_h)
    {
        rtb_Switch1_mu = 512;
    }
    else
    {
        rtb_Switch1_mu = 0;
    }

    /* End of Switch: '<S1904>/Switch1' */

    /* Switch: '<S1875>/Switch1' incorporates:
     *  Constant: '<S1373>/ConstantValue20'
     *  Constant: '<S1373>/ConstantValue21'
     */
    if (Switch1_je)
    {
        rtb_AND_cg = 1024;
    }
    else
    {
        rtb_AND_cg = 0;
    }

    /* End of Switch: '<S1875>/Switch1' */

    /* Switch: '<S1876>/Switch1' incorporates:
     *  Constant: '<S1373>/ConstantValue22'
     *  Constant: '<S1373>/ConstantValue23'
     */
    if (tmpRead_h)
    {
        rtb_VeSRAR_b_HVOverVoltFailur_f = 2048;
    }
    else
    {
        rtb_VeSRAR_b_HVOverVoltFailur_f = 0;
    }

    /* End of Switch: '<S1876>/Switch1' */

    /* Switch: '<S1877>/Switch1' incorporates:
     *  Constant: '<S1373>/ConstantValue24'
     *  Constant: '<S1373>/ConstantValue25'
     */
    if (tmpRead_i)
    {
        rtb_OR1_ot = 4096;
    }
    else
    {
        rtb_OR1_ot = 0;
    }

    /* End of Switch: '<S1877>/Switch1' */

    /* Switch: '<S1878>/Switch1' incorporates:
     *  Constant: '<S1373>/ConstantValue26'
     *  Constant: '<S1373>/ConstantValue27'
     */
    if (rtb_Logical9)
    {
        rtb_LogicalOperator_mad = 8192;
    }
    else
    {
        rtb_LogicalOperator_mad = 0;
    }

    /* End of Switch: '<S1878>/Switch1' */

    /* Switch: '<S1879>/Switch1' incorporates:
     *  Constant: '<S1373>/ConstantValue28'
     *  Constant: '<S1373>/ConstantValue29'
     */
    if (rtb_VeSRAR_b_MtrA_InvrtrFaultd_)
    {
        rtb_Logical6_0 = 16384;
    }
    else
    {
        rtb_Logical6_0 = 0;
    }

    /* End of Switch: '<S1879>/Switch1' */

    /* Switch: '<S1880>/Switch1' incorporates:
     *  Constant: '<S1373>/ConstantValue30'
     *  Constant: '<S1373>/ConstantValue31'
     */
    if (tmpRead_d)
    {
        tmpRead_13 = 32768;
    }
    else
    {
        tmpRead_13 = 0;
    }

    /* End of Switch: '<S1880>/Switch1' */

    /* Switch: '<S1881>/Switch1' incorporates:
     *  Constant: '<S1373>/ConstantValue32'
     *  Constant: '<S1373>/ConstantValue33'
     */
    if (tmpRead_e)
    {
        rtb_Switch1_bk = 65536U;
    }
    else
    {
        rtb_Switch1_bk = 0U;
    }

    /* End of Switch: '<S1881>/Switch1' */

    /* Switch: '<S1882>/Switch1' incorporates:
     *  Constant: '<S1373>/ConstantValue44'
     *  Constant: '<S1373>/ConstantValue55'
     */
    if (rtb_VeSRAR_b_MtrB_InvrtrFault_g)
    {
        rtb_Comparison1_ij = 131072U;
    }
    else
    {
        rtb_Comparison1_ij = 0U;
    }

    /* End of Switch: '<S1882>/Switch1' */

    /* Switch: '<S1890>/Switch1' incorporates:
     *  Constant: '<S1373>/ConstantValue58'
     *  Constant: '<S1373>/ConstantValue59'
     *  Constant: '<S2325>/Calib'
     *  Logic: '<S2253>/Logical3'
     *  Logic: '<S2253>/Logical5'
     */
    if ((KeSRAR_b_EnblClch1FailAction) && (!tmpRead_f))
    {
        rtb_VeSRAR_b_TCMLmpFlt2_tmp = 262144U;
    }
    else
    {
        rtb_VeSRAR_b_TCMLmpFlt2_tmp = 0U;
    }

    /* End of Switch: '<S1890>/Switch1' */

    /* Switch: '<S1891>/Switch1' incorporates:
     *  Constant: '<S1373>/ConstantValue60'
     *  Constant: '<S1373>/ConstantValue61'
     *  Constant: '<S2326>/Calib'
     *  Logic: '<S2253>/Logical4'
     *  Logic: '<S2253>/Logical6'
     */
    if ((KeSRAR_b_EnblClch2FailAction) && (!tmpRead_g))
    {
        rtb_TmpSignalConversionAtVeEN_d = 524288U;
    }
    else
    {
        rtb_TmpSignalConversionAtVeEN_d = 0U;
    }

    /* End of Switch: '<S1891>/Switch1' */

    /* Switch: '<S1892>/Switch1' incorporates:
     *  Constant: '<S1373>/ConstantValue62'
     *  Constant: '<S1373>/ConstantValue63'
     */
    if (tmpRead_7)
    {
        rtb_UnitDelay_k3 = 1048576U;
    }
    else
    {
        rtb_UnitDelay_k3 = 0U;
    }

    /* End of Switch: '<S1892>/Switch1' */

    /* Switch: '<S1893>/Switch1' incorporates:
     *  Constant: '<S1373>/ConstantValue34'
     *  Constant: '<S1373>/ConstantValue35'
     */
    if (rtb_Switch1_fqq)
    {
        rtb_VeSRAR_b_CKSFailed_0 = 2097152U;
    }
    else
    {
        rtb_VeSRAR_b_CKSFailed_0 = 0U;
    }

    /* End of Switch: '<S1893>/Switch1' */

    /* Switch: '<S1894>/Switch1' incorporates:
     *  Constant: '<S1373>/ConstantValue36'
     *  Constant: '<S1373>/ConstantValue37'
     */
    if (rtb_Switch1_ahj)
    {
        BitwiseLogicalOperator_b = 4194304U;
    }
    else
    {
        BitwiseLogicalOperator_b = 0U;
    }

    /* End of Switch: '<S1894>/Switch1' */

    /* Switch: '<S1895>/Switch1' incorporates:
     *  Constant: '<S1373>/ConstantValue38'
     *  Constant: '<S1373>/ConstantValue39'
     */
    if (rtb_Logical4_b)
    {
        rtb_Switch1_mr = 8388608U;
    }
    else
    {
        rtb_Switch1_mr = 0U;
    }

    /* End of Switch: '<S1895>/Switch1' */

    /* Switch: '<S1897>/Switch1' incorporates:
     *  Constant: '<S1373>/ConstantValue40'
     *  Constant: '<S1373>/ConstantValue41'
     */
    if (rtb_Logical5_oz)
    {
        rtb_Logical5_cn = 16777216U;
    }
    else
    {
        rtb_Logical5_cn = 0U;
    }

    /* End of Switch: '<S1897>/Switch1' */

    /* Switch: '<S1898>/Switch1' incorporates:
     *  Constant: '<S1373>/ConstantValue42'
     *  Constant: '<S1373>/ConstantValue43'
     */
    if (rtb_VeSRAR_b_WEDStuckOpen)
    {
        rtb_VeSRAR_b_SpinUpFailed_0 = 33554432U;
    }
    else
    {
        rtb_VeSRAR_b_SpinUpFailed_0 = 0U;
    }

    /* End of Switch: '<S1898>/Switch1' */

    /* Switch: '<S1883>/Switch1' incorporates:
     *  Constant: '<S1373>/ConstantValue45'
     *  Constant: '<S1373>/ConstantValue46'
     */
    if (rtb_Switch1_oz)
    {
        rtb_Switch1_a3 = 67108864U;
    }
    else
    {
        rtb_Switch1_a3 = 0U;
    }

    /* End of Switch: '<S1883>/Switch1' */

    /* Switch: '<S1884>/Switch1' incorporates:
     *  Constant: '<S1373>/ConstantValue47'
     *  Constant: '<S1373>/ConstantValue48'
     */
    if (rtb_Relational_Operator3)
    {
        rtb_Switch1_mu_0 = 134217728U;
    }
    else
    {
        rtb_Switch1_mu_0 = 0U;
    }

    /* End of Switch: '<S1884>/Switch1' */

    /* Switch: '<S1886>/Switch1' incorporates:
     *  Constant: '<S1373>/ConstantValue49'
     *  Constant: '<S1373>/ConstantValue50'
     */
    if (rtb_Logical6)
    {
        rtb_Switch1_f3 = 268435456U;
    }
    else
    {
        rtb_Switch1_f3 = 0U;
    }

    /* End of Switch: '<S1886>/Switch1' */

    /* Switch: '<S1887>/Switch1' incorporates:
     *  Constant: '<S1373>/ConstantValue51'
     *  Constant: '<S1373>/ConstantValue52'
     */
    if (rtb_Comparison3_bq)
    {
        rtb_TmpSignalConversionAtVeBP_p = 536870912U;
    }
    else
    {
        rtb_TmpSignalConversionAtVeBP_p = 0U;
    }

    /* End of Switch: '<S1887>/Switch1' */

    /* Switch: '<S1888>/Switch1' incorporates:
     *  Constant: '<S1373>/ConstantValue53'
     *  Constant: '<S1373>/ConstantValue54'
     */
    if (rtb_Comparison7_o5)
    {
        rtb_VeSRAR_b_AuxPumpFail_Inhi_0 = 1073741824U;
    }
    else
    {
        rtb_VeSRAR_b_AuxPumpFail_Inhi_0 = 0U;
    }

    /* End of Switch: '<S1888>/Switch1' */

    /* Switch: '<S1889>/Switch1' incorporates:
     *  Constant: '<S1373>/ConstantValue56'
     *  Constant: '<S1373>/ConstantValue57'
     */
    if (rtb_TmpSignalConversionAtVeETQR)
    {
        rtb_Switch1_c = 2147483648U;
    }
    else
    {
        rtb_Switch1_c = 0U;
    }

    /* End of Switch: '<S1889>/Switch1' */

    /* S-Function (sfix_bitop): '<S1373>/BitwiseLogicalOperator' incorporates:
     *  Constant: '<S2305>/Constant'
     *  Constant: '<S2306>/Constant1'
     *  Constant: '<S2306>/Constant2'
     *  DataStoreRead: '<S2306>/StatusByte_VehSpd_OSS_Corr'
     *  Logic: '<S2251>/Logical13'
     *  Logic: '<S2306>/LogicalOperator'
     *  RelationalOperator: '<S2251>/Relational_Operator1'
     *  RelationalOperator: '<S2306>/RelationalOperator1'
     *  RelationalOperator: '<S2306>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S2306>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S2306>/BitwiseOperator2'
     */
    rtb_Switch1_mr = ((((((((((((((((((((((((((((((((uint32)(((((((sint32)
        SRAR_ac_DW.StatusByte_VehSpd_OSS_Corr) & 1) > 0) && ((((uint32)
        SRAR_ac_DW.StatusByte_VehSpd_OSS_Corr) & 64U) == 0U)) && (((uint32)
        rtb_TmpSignalConversionAtVeTRGR) == CeTRGR_e_TransRangePark)) ? 1 : 0)) |
        ((uint32)rtb_LogicalOperator_cr)) | rtb_Switch1_anw) | ((uint32)
        rtb_Switch1_fw)) | ((uint32)rtb_Switch1_h0)) | ((uint32)
        rtb_TmpSignalConversionAtVeOB_2)) | ((uint32)rtb_AND_d)) | ((uint32)
        rtb_TmpSignalConversionAtVeOB_3)) | ((uint32)
        rtb_VeSRAR_b_HVOverVoltFailur_1)) | ((uint32)rtb_Switch1_mu)) | ((uint32)
        rtb_AND_cg)) | ((uint32)rtb_VeSRAR_b_HVOverVoltFailur_f)) | ((uint32)
        rtb_OR1_ot)) | ((uint32)rtb_LogicalOperator_mad)) | ((uint32)
        rtb_Logical6_0)) | ((uint32)tmpRead_13)) | rtb_Switch1_bk) |
        rtb_Comparison1_ij) | rtb_VeSRAR_b_TCMLmpFlt2_tmp) |
        rtb_TmpSignalConversionAtVeEN_d) | rtb_UnitDelay_k3) |
        rtb_VeSRAR_b_CKSFailed_0) | BitwiseLogicalOperator_b) | rtb_Switch1_mr) |
                            rtb_Logical5_cn) | rtb_VeSRAR_b_SpinUpFailed_0) |
                          rtb_Switch1_a3) | rtb_Switch1_mu_0) | rtb_Switch1_f3) |
                       rtb_TmpSignalConversionAtVeBP_p) |
                      rtb_VeSRAR_b_AuxPumpFail_Inhi_0) | rtb_Switch1_c;

    /* RelationalOperator: '<S1380>/Comparison4' incorporates:
     *  Constant: '<S2114>/Constant'
     */
    VeSRAC_b_MtrAInvrtrFaulted = (((uint32)rtb_TmpSignalConversionAtVeIN_c) ==
        CeINVR_e_InverterFaulted);

    /* Outputs for Atomic SubSystem: '<S2111>/ProtectedDivision' */
    /* Switch: '<S2134>/Switch1' incorporates:
     *  Constant: '<S2133>/Calib'
     *  Constant: '<S2134>/ConstantValue'
     *  Constant: '<S2134>/ConstantValue1'
     *  Constant: '<S2134>/ConstantValue2'
     *  Constant: '<S2134>/ConstantValue3'
     *  Logic: '<S2134>/AND'
     *  RelationalOperator: '<S2134>/GreaterThanorEqual'
     *  RelationalOperator: '<S2134>/GreaterThanorEqual1'
     *  RelationalOperator: '<S2134>/NotEqual'
     *  RelationalOperator: '<S2134>/NotEqual1'
     *  Switch: '<S2134>/Switch2'
     *  Switch: '<S2134>/Switch3'
     */
    if ((rtb_Switch1_bgv != 0.0F) && (((float32)
            Rte_Prm_KeTSXR_r_P1f_KeTSXR_r_P1f()) != 0.0F))
    {
        /* Switch: '<S2134>/Switch1' incorporates:
         *  Product: '<S2134>/Division'
         */
        rtb_Switch1_bgv /= (float32)Rte_Prm_KeTSXR_r_P1f_KeTSXR_r_P1f();
    }
    else if (rtb_Switch1_bgv > 0.0F)
    {
        /* Switch: '<S2134>/Switch2' incorporates:
         *  Constant: '<S2134>/MAXFLOAT'
         *  Switch: '<S2134>/Switch1'
         */
        rtb_Switch1_bgv = 3.402823466E+38F;
    }
    else if (rtb_Switch1_bgv < 0.0F)
    {
        /* Switch: '<S2134>/Switch3' incorporates:
         *  Constant: '<S2134>/MINFLOAT'
         *  Switch: '<S2134>/Switch1'
         *  Switch: '<S2134>/Switch2'
         */
        rtb_Switch1_bgv = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S2134>/Switch1' incorporates:
         *  Constant: '<S2134>/ConstantValue4'
         *  Switch: '<S2134>/Switch2'
         *  Switch: '<S2134>/Switch3'
         */
        rtb_Switch1_bgv = 0.0F;
    }

    /* End of Switch: '<S2134>/Switch1' */
    /* End of Outputs for SubSystem: '<S2111>/ProtectedDivision' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCPDR_b_LTCL_DryRun_FltDtct' */
    (void)Rte_Read_VeCPDR_b_LTCL_DryRun_FltDtct_Value
        (&rtb_VeSRAR_b_PPCTIS_ReducePerfM);

    /* Inport: '<Root>/VeCPDR_b_LTCL_FunPer_FltDtct' */
    (void)Rte_Read_VeCPDR_b_LTCL_FunPer_FltDtct_Value(&tmpRead_v);

    /* Inport: '<Root>/VeOSMR_n_TransMinEngSpd' */
    (void)Rte_Read_VeOSMR_n_TransMinEngSpd_Value(&rtb_Switch1_io);

    /* Inport: '<Root>/VeTRNR_e_C1Stat' */
    (void)Rte_Read_VeTRNR_e_C1Stat_Value(&tmpRead_r);

    /* Inport: '<Root>/VeTRNR_e_TargetGear' */
    (void)Rte_Read_VeTRNR_e_TargetGear_Value(&rtb_Switch_fy);

    /* Inport: '<Root>/VeTRNR_e_ActualGear' */
    (void)Rte_Read_VeTRNR_e_ActualGear_Value(&tmpRead_q);

    /* Inport: '<Root>/VeHSCR_n_Max_MtrB_Spd' */
    (void)Rte_Read_VeHSCR_n_Max_MtrB_Spd_Value(&rtb_Switch1_bs);

    /* Inport: '<Root>/VeINVR_e_MtrB_InvrtrSt' */
    (void)Rte_Read_VeINVR_e_MtrB_InvrtrSt_Value(&tmpRead_p);

    /* Inport: '<Root>/VeCPDR_b_LTPP_FunPer_FltDtct' */
    (void)Rte_Read_VeCPDR_b_LTPP_FunPer_FltDtct_Value(&tmpRead_m);

    /* Inport: '<Root>/VePMIR_e_LTPsvPumpDryRun' */
    (void)Rte_Read_VePMIR_e_LTPsvPumpDryRun_Value(&tmpRead_l);

    /* Inport: '<Root>/VeTHMR_e_PPCTIS_OT' */
    (void)Rte_Read_VeTHMR_e_PPCTIS_OT_Value(&tmpRead_k);

    /* Inport: '<Root>/VeTFTR_b_TransOilTempFA' */
    (void)Rte_Read_VeTFTR_b_TransOilTempFA_Value(&rtb_Logical18_c);

    /* Inport: '<Root>/VeMSPR_b_MtrB_SpdFARaw' */
    (void)Rte_Read_VeMSPR_b_MtrB_SpdFARaw_Value(&tmpRead_5);

    /* Inport: '<Root>/VeMTIR_b_MtrB_TorqAchievedFA' */
    (void)Rte_Read_VeMTIR_b_MtrB_TorqAchievedFA_Value(&tmpRead_4);

    /* Inport: '<Root>/VeINVR_b_MtrB_TempFA' */
    (void)Rte_Read_VeINVR_b_MtrB_TempFA_Value(&tmpRead_3);

    /* Inport: '<Root>/VeINVR_b_MtrB_InvrtrTempFA' */
    (void)Rte_Read_VeINVR_b_MtrB_InvrtrTempFA_Value(&tmpRead_2);

    /* Inport: '<Root>/VeINVR_b_MtrB_DC_VoltFA' */
    (void)Rte_Read_VeINVR_b_MtrB_DC_VoltFA_Value(&tmpRead_1);

    /* Inport: '<Root>/VeINVR_b_MtrB_DC_CrntFA' */
    (void)Rte_Read_VeINVR_b_MtrB_DC_CrntFA_Value(&tmpRead_0);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRAR_MedTEB'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Switch: '<S1464>/Switch1' incorporates:
     *  RelationalOperator: '<S2111>/Comparison2'
     */
    rtb_TmpSignalConversionAtVeETQR = (rtb_Switch1_bgv < rtb_Switch1_io);

    /* Logic: '<S2111>/Logical1' incorporates:
     *  Logic: '<S2111>/Logical3'
     */
    VeSRAC_b_MtrAInvrtrFaultedNoHvShtDwn = ((VeSRAC_b_MtrAInvrtrFaulted) &&
        (!rtb_TmpSignalConversionAtVeIN_n));

    /* Logic: '<S1426>/LogicalOperator' incorporates:
     *  Constant: '<S1426>/Constant1'
     *  Constant: '<S1426>/Constant2'
     *  DataStoreRead: '<S1426>/StatusByte_SPI_CommFlt'
     *  RelationalOperator: '<S1426>/RelationalOperator1'
     *  RelationalOperator: '<S1426>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S1426>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S1426>/BitwiseOperator2'
     */
    rtb_LogicalOperator_h = (((((sint32)SRAR_ac_DW.StatusByte_SPI_CommFlt) & 1) >
        0) && ((((uint32)SRAR_ac_DW.StatusByte_SPI_CommFlt) & 64U) == 0U));

    /* RelationalOperator: '<S1529>/Comparison7' incorporates:
     *  Constant: '<S2132>/Calib'
     *  Logic: '<S1398>/AND'
     *  Logic: '<S2111>/Logical14'
     */
    rtb_Comparison7_o5 = (rtb_LogicalOperator_h &&
                          (KeSRAR_b_P2EngOffON_LOC_Enable));

    /* Logic: '<S2111>/Logical12' incorporates:
     *  Logic: '<S2111>/Logical16'
     *  Logic: '<S2111>/Logical6'
     */
    rtb_UnitDelay_lw = ((!rtb_TmpSignalConversionAtVeETQR) &&
                        (VeSRAC_b_MtrAInvrtrFaultedNoHvShtDwn));

    /* RelationalOperator: '<S2249>/Comparison3' incorporates:
     *  Logic: '<S2111>/Logical12'
     */
    rtb_Comparison3_bq = (rtb_UnitDelay_lw && rtb_Comparison7_o5);

    /* Switch: '<S2252>/Switch' incorporates:
     *  Constant: '<S2323>/Calib'
     */
    if (KeSRAR_b_UseActualGear)
    {
        /* Switch: '<S2252>/Switch' incorporates:
         *  Inport: '<Root>/VeTRNR_e_ActualGear'
         */
        rtb_Switch_fy = tmpRead_q;
    }

    /* End of Switch: '<S2252>/Switch' */

    /* Logic: '<S2260>/Logical2' incorporates:
     *  Constant: '<S2317>/Constant'
     *  Constant: '<S2318>/Constant'
     *  Constant: '<S2319>/Constant'
     *  Constant: '<S2320>/Constant'
     *  Constant: '<S2321>/Constant'
     *  Constant: '<S2322>/Constant'
     *  Logic: '<S2252>/Logical2'
     *  RelationalOperator: '<S2252>/Comparison2'
     *  RelationalOperator: '<S2252>/Comparison3'
     *  RelationalOperator: '<S2252>/Comparison5'
     *  RelationalOperator: '<S2252>/Comparison6'
     *  RelationalOperator: '<S2252>/Comparison7'
     *  RelationalOperator: '<S2252>/Comparison8'
     */
    rtb_Logical6 = ((((((((uint32)rtb_Switch_fy) == CeTRNR_e_D4) || (((uint32)
                          rtb_Switch_fy) == CeTRNR_e_D5)) || (((uint32)
                         rtb_Switch_fy) == CeTRNR_e_D6)) || (((uint32)
                        rtb_Switch_fy) == CeTRNR_e_D7)) || (((uint32)
                       rtb_Switch_fy) == CeTRNR_e_D8)) || (((uint32)
                      rtb_Switch_fy) == CeTRNR_e_D9));

    /* Logic: '<S2111>/Logical5' incorporates:
     *  Constant: '<S2314>/Constant'
     *  Constant: '<S2315>/Constant'
     *  Logic: '<S2111>/Logical11'
     *  Logic: '<S2252>/Logical3'
     *  Logic: '<S2252>/Logical4'
     *  RelationalOperator: '<S2252>/Comparison17'
     *  RelationalOperator: '<S2252>/Comparison18'
     */
    VeSRAC_b_MtrAInvrtrFltEngOn = (rtb_Comparison3_bq && (rtb_AND_owg ||
        (rtb_Logical6 || ((((uint32)rtb_Switch_fy) == CeTRNR_e_Neutral) ||
                          (((uint32)rtb_Switch_fy) == CeTRNR_e_Park)))));

    /* Logic: '<S2111>/Logical4' */
    VeSRAC_b_MtrAInvrtrFltEngOff = (((VeSRAC_b_MtrAInvrtrFaultedNoHvShtDwn) &&
        rtb_TmpSignalConversionAtVeETQR) && rtb_Comparison7_o5);

    /* RelationalOperator: '<S1529>/Comparison7' incorporates:
     *  Logic: '<S2111>/Logical2'
     */
    rtb_Comparison7_o5 = ((VeSRAC_b_MtrAInvrtrFaulted) &&
                          rtb_TmpSignalConversionAtVeIN_n);

    /* Logic: '<S2260>/Logical2' incorporates:
     *  Constant: '<S2316>/Constant'
     *  Constant: '<S2343>/Constant'
     *  Inport: '<Root>/VeTRNR_e_C1Stat'
     *  Logic: '<S2111>/Logical7'
     *  Logic: '<S2252>/Logical1'
     *  RelationalOperator: '<S2252>/Comparison1'
     *  RelationalOperator: '<S2328>/Comparison4'
     */
    rtb_Logical6 = (((((uint32)rtb_Switch_fy) == CeTRNR_e_D3) || rtb_Logical6) &&
                    (((uint32)tmpRead_r) == CeHCCR_e_ClLocked));

    /* Logic: '<S2111>/Logical8' */
    VeSRAC_b_MtrAFltHVShtDwnEngOn = (rtb_Comparison7_o5 && rtb_Logical6);

    /* Logic: '<S2111>/Logical9' incorporates:
     *  Logic: '<S2111>/Logical10'
     */
    VeSRAC_b_MtrAFltHVShtDwnVehOff = ((!rtb_Logical6) && rtb_Comparison7_o5);

    /* RelationalOperator: '<S1380>/Comparison1' incorporates:
     *  Constant: '<S2115>/Constant'
     *  Inport: '<Root>/VeINVR_e_MtrB_InvrtrSt'
     */
    VeSRAC_b_MtrBInvrtrFaulted = (((uint32)tmpRead_p) ==
        CeINVR_e_InverterFaulted);

    /* Logic: '<S2260>/Logical2' incorporates:
     *  Logic: '<S2112>/Logical1'
     *  Logic: '<S2112>/Logical3'
     */
    rtb_Logical6 = ((VeSRAC_b_MtrBInvrtrFaulted) &&
                    (!rtb_TmpSignalConversionAtVeIN_p));

    /* Logic: '<S2112>/Logical4' incorporates:
     *  RelationalOperator: '<S2112>/Comparison2'
     */
    rtb_VeSRAR_b_WEDStuckOpen = ((rtb_Switch1_bs < rtb_Switch1_io) &&
        rtb_Logical6);

    /* Switch: '<S1923>/Switch1' */
    if (rtb_Logical6)
    {
        /* Switch: '<S2051>/Switch1' incorporates:
         *  Constant: '<S1374>/ConstantValue60'
         */
        rtb_Switch1_anw = 524288U;
    }
    else
    {
        /* Switch: '<S2051>/Switch1' incorporates:
         *  Constant: '<S1374>/ConstantValue61'
         */
        rtb_Switch1_anw = 0U;
    }

    /* End of Switch: '<S1923>/Switch1' */

    /* RelationalOperator: '<S2252>/Relational_Operator3' incorporates:
     *  Constant: '<S2313>/Constant'
     */
    rtb_Relational_Operator3 = (((uint32)rtb_TmpSignalConversionAtVeTRGR) ==
        CeTRGR_e_TransRangeDrive);

    /* Switch: '<S2260>/Switch1' incorporates:
     *  Logic: '<S2112>/Logical5'
     */
    rtb_Switch1_oz = (rtb_VeSRAR_b_HVOverVoltFailure_ ||
                      rtb_Relational_Operator3);

    /* Logic: '<S2112>/Logical2' */
    rtb_VeSRAR_b_MtrB_InvrtrFault_g = (rtb_Logical6 && rtb_Switch1_oz);

    /* Logic: '<S2111>/Logical13' */
    rtb_VeSRAR_b_MtrA_InvrtrFaultd_ = (rtb_Switch1_oz && rtb_Comparison3_bq);

    /* RelationalOperator: '<S2249>/Comparison3' incorporates:
     *  Constant: '<S2216>/Constant1'
     *  Constant: '<S2216>/Constant2'
     *  DataStoreRead: '<S2216>/StatusByte_LIN2_BusOff'
     *  Logic: '<S2216>/LogicalOperator'
     *  RelationalOperator: '<S2216>/RelationalOperator1'
     *  RelationalOperator: '<S2216>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S2216>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S2216>/BitwiseOperator2'
     */
    rtb_Comparison3_bq = (((((sint32)SRAR_ac_DW.StatusByte_LIN2_BusOff) & 1) > 0)
                          && ((((uint32)SRAR_ac_DW.StatusByte_LIN2_BusOff) & 64U)
                           == 0U));

    /* S-Function (sfix_bitop): '<S2215>/BitwiseOperator2' incorporates:
     *  DataStoreRead: '<S2215>/StatusByte_LIN1_BusOff'
     *  S-Function (sfix_bitop): '<S2138>/BitwiseOperator2'
     */
    rtb_LogicalOperator_mad = ((sint32)SRAR_ac_DW.StatusByte_LIN1_BusOff) & 1;

    /* S-Function (sfix_bitop): '<S2215>/BitwiseOperator1' incorporates:
     *  DataStoreRead: '<S2215>/StatusByte_LIN1_BusOff'
     *  S-Function (sfix_bitop): '<S2138>/BitwiseOperator1'
     */
    rtb_Logical5_cn = ((uint32)SRAR_ac_DW.StatusByte_LIN1_BusOff) & 64U;

    /* Logic: '<S2211>/Logical6' incorporates:
     *  Constant: '<S2215>/Constant1'
     *  Constant: '<S2215>/Constant2'
     *  Constant: '<S2228>/Calib'
     *  Logic: '<S2211>/Logical2'
     *  Logic: '<S2215>/LogicalOperator'
     *  RelationalOperator: '<S2215>/RelationalOperator1'
     *  RelationalOperator: '<S2215>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S2215>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S2215>/BitwiseOperator2'
     */
    rtb_Logical6 = (((KeSRAR_b_LIN1BusOffEnbl) && ((rtb_LogicalOperator_mad > 0)
                      && (rtb_Logical5_cn == 0U))) || rtb_Comparison3_bq);

    /* S-Function (sfix_bitop): '<S2217>/BitwiseOperator2' incorporates:
     *  DataStoreRead: '<S2217>/StatusByte_LIN3_BusOff'
     *  S-Function (sfix_bitop): '<S2139>/BitwiseOperator2'
     */
    rtb_Logical6_0 = ((sint32)SRAR_ac_DW.StatusByte_LIN3_BusOff) & 1;

    /* S-Function (sfix_bitop): '<S2217>/BitwiseOperator1' incorporates:
     *  DataStoreRead: '<S2217>/StatusByte_LIN3_BusOff'
     *  S-Function (sfix_bitop): '<S2139>/BitwiseOperator1'
     */
    rtb_UnitDelay_k3 = ((uint32)SRAR_ac_DW.StatusByte_LIN3_BusOff) & 64U;

    /* Logic: '<S2211>/Logical9' incorporates:
     *  Constant: '<S2217>/Constant1'
     *  Constant: '<S2217>/Constant2'
     *  Constant: '<S2229>/Calib'
     *  Logic: '<S2217>/LogicalOperator'
     *  RelationalOperator: '<S2217>/RelationalOperator1'
     *  RelationalOperator: '<S2217>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S2217>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S2217>/BitwiseOperator2'
     */
    rtb_Logical9 = ((rtb_Comparison3_bq && ((rtb_Logical6_0 > 0) &&
                      (rtb_UnitDelay_k3 == 0U))) && (KeSRAR_b_LIN2_3BusOffEnbl));

    /* RelationalOperator: '<S2249>/Comparison3' incorporates:
     *  Constant: '<S2220>/Constant1'
     *  Constant: '<S2220>/Constant2'
     *  DataStoreRead: '<S2220>/StatusByte_MtrElect_CoolPumAOvrSpd'
     *  Logic: '<S2220>/LogicalOperator'
     *  RelationalOperator: '<S2220>/RelationalOperator1'
     *  RelationalOperator: '<S2220>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S2220>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S2220>/BitwiseOperator2'
     */
    rtb_Comparison3_bq = (((((sint32)SRAR_ac_DW.StatusByte_MtrElect_CoolPumAOvr)
                            & 1) > 0) && ((((uint32)
        SRAR_ac_DW.StatusByte_MtrElect_CoolPumAOvr) & 64U) == 0U));

    /* Logic: '<S2260>/Logical2' incorporates:
     *  Constant: '<S2214>/Constant1'
     *  Constant: '<S2214>/Constant2'
     *  Constant: '<S2218>/Constant1'
     *  Constant: '<S2218>/Constant2'
     *  Constant: '<S2219>/Constant1'
     *  Constant: '<S2219>/Constant2'
     *  Constant: '<S2225>/Calib'
     *  Constant: '<S2226>/Calib'
     *  Constant: '<S2230>/Calib'
     *  Constant: '<S2231>/Calib'
     *  Constant: '<S2232>/Calib'
     *  Constant: '<S2233>/Calib'
     *  Constant: '<S2234>/Calib'
     *  Constant: '<S2235>/Calib'
     *  Constant: '<S2236>/Calib'
     *  Constant: '<S2237>/Calib'
     *  Constant: '<S2239>/Calib'
     *  Constant: '<S2240>/Calib'
     *  Constant: '<S2241>/Calib'
     *  DataStoreRead: '<S2214>/StatusByte_ClntTempTooHigh'
     *  DataStoreRead: '<S2218>/StatusByte_LostCommMtrElectCoolPmpA'
     *  DataStoreRead: '<S2219>/StatusByte_LostCommMtrElectCoolPmpB'
     *  DataTypeConversion: '<S2211>/DataTypeConversion'
     *  DataTypeConversion: '<S2211>/DataTypeConversion1'
     *  Inport: '<Root>/VePMIR_e_LTPsvPumpDryRun'
     *  Inport: '<Root>/VeTHMR_e_PPCTIS_OT'
     *  Logic: '<S2211>/Logical12'
     *  Logic: '<S2211>/Logical13'
     *  Logic: '<S2211>/Logical14'
     *  Logic: '<S2211>/Logical15'
     *  Logic: '<S2211>/Logical16'
     *  Logic: '<S2211>/Logical17'
     *  Logic: '<S2211>/Logical18'
     *  Logic: '<S2211>/Logical19'
     *  Logic: '<S2211>/Logical20'
     *  Logic: '<S2211>/Logical21'
     *  Logic: '<S2211>/Logical22'
     *  Logic: '<S2211>/Logical24'
     *  Logic: '<S2211>/Logical25'
     *  Logic: '<S2211>/Logical26'
     *  Logic: '<S2211>/Logical5'
     *  Logic: '<S2214>/LogicalOperator'
     *  Logic: '<S2218>/LogicalOperator'
     *  Logic: '<S2219>/LogicalOperator'
     *  RelationalOperator: '<S2211>/Comparison2'
     *  RelationalOperator: '<S2211>/Comparison4'
     *  RelationalOperator: '<S2211>/Comparison5'
     *  RelationalOperator: '<S2214>/RelationalOperator1'
     *  RelationalOperator: '<S2214>/RelationalOperator2'
     *  RelationalOperator: '<S2218>/RelationalOperator1'
     *  RelationalOperator: '<S2218>/RelationalOperator2'
     *  RelationalOperator: '<S2219>/RelationalOperator1'
     *  RelationalOperator: '<S2219>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S2214>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S2214>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S2218>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S2218>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S2219>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S2219>/BitwiseOperator2'
     */
    rtb_Logical6 = ((((KeSRAR_b_PPCTIS_Enable) && ((((sint32)tmpRead_k) ==
                        ((sint32)KeSRAR_e_PPCTIS_OT)) || (((sint32)tmpRead_k) ==
                        ((sint32)KeSRAR_e_PPCTIS_OT_SNA)))) ||
                     ((KeSRAR_b_LTPsvPumpDryRun_Enable) && (((sint32)tmpRead_l) ==
                       ((sint32)KeSRAR_e_LTPsvPumpDryRun)))) ||
                    (((((((KeSRAR_b_LTPP_FunPer_FltDtct_Enable) && tmpRead_m) ||
                         ((KeSRAR_b_LOC_PECP_Enable) && ((rtb_Logical6 ||
                            (((((((sint32)
        SRAR_ac_DW.StatusByte_LostCommMtrElectCo_o) & 1) > 0) && ((((uint32)
        SRAR_ac_DW.StatusByte_LostCommMtrElectCo_o) & 64U) == 0U)) ||
        (KeSRAR_b_LOC_PECP2_Ovrd)) && ((((((sint32)
        SRAR_ac_DW.StatusByte_LostCommMtrElectCool) & 1) > 0) && ((((uint32)
        SRAR_ac_DW.StatusByte_LostCommMtrElectCool) & 64U) == 0U)) ||
        (KeSRAR_b_LOC_PECP_Ovrd)))) || rtb_Logical9))) ||
                        ((KeSRAR_b_DryRunFlt_Enable) && rtb_Comparison3_bq)) ||
                       ((KeSRAR_b_ClntTempHigh_Enable) && (((((sint32)
                            SRAR_ac_DW.StatusByte_ClntTempTooHigh) & 1) > 0) &&
                         ((((uint32)SRAR_ac_DW.StatusByte_ClntTempTooHigh) & 64U)
                          == 0U)))) || ((KeSRAR_b_LTCL_FunPer_FltEnable) &&
                       tmpRead_v)) || ((KeSRAR_b_LTCL_DryRun_FltEnable) &&
                      rtb_VeSRAR_b_PPCTIS_ReducePerfM)));

    /* Switch: '<S2221>/Switch1' incorporates:
     *  Constant: '<S2227>/Calib'
     *  Inport: '<Root>/VeINVR_T_MtrA_InvrtrTemp'
     *  Inport: '<Root>/VeINVR_T_MtrB_InvrtrTemp'
     *  Inport: '<Root>/VeTMIR_T_PsvPmpClnt_TmpIn'
     *  Logic: '<S2211>/Logical11'
     */
    if (rtb_Comparison3_bq && (KeSRAR_b_DryRunFlt_PimTemp_Select))
    {
        (void)Rte_Read_VeINVR_T_MtrA_InvrtrTemp_Value(&rtb_Switch1_nb);
        (void)Rte_Read_VeINVR_T_MtrB_InvrtrTemp_Value(&rtb_Switch1_du);

        /* RelationalOperator: '<S2249>/Comparison3' incorporates:
         *  Constant: '<S2222>/Calib'
         *  Constant: '<S2223>/Calib'
         *  Inport: '<Root>/VeINVR_T_MtrA_InvrtrTemp'
         *  Inport: '<Root>/VeINVR_T_MtrB_InvrtrTemp'
         *  Logic: '<S2211>/Logical23'
         *  MinMax: '<S2211>/MinMax'
         *  MinMax: '<S2211>/MinMax1'
         *  RelationalOperator: '<S2211>/Comparison6'
         *  RelationalOperator: '<S2211>/Comparison7'
         */
        rtb_Comparison3_bq = ((fmaxf(rtb_Switch1_du, rtb_Switch1_nb) >=
                               KeSRAR_T_InvrtrTemp_ReducePerf1Threshld) ||
                              (fmaxf(rtb_TmpSignalConversionAtVeINVR,
                                rtb_TmpSignalConversionAtVeIN_k) >=
                               KeSRAR_T_MtrTemp_ReducePerf1Threshld));
    }
    else
    {
        (void)Rte_Read_VeTMIR_T_PsvPmpClnt_TmpIn_Value(&rtb_Switch1_nb);

        /* RelationalOperator: '<S2249>/Comparison3' incorporates:
         *  Constant: '<S2224>/Calib'
         *  Inport: '<Root>/VeTMIR_T_PsvPmpClnt_TmpIn'
         *  RelationalOperator: '<S2211>/Comparison3'
         */
        rtb_Comparison3_bq = (rtb_Switch1_nb >= KeSRAR_T_PsvPmpClnt_RSP);
    }

    /* End of Switch: '<S2221>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeMMMR_b_MtrMdVldtnFlt' */
    (void)Rte_Read_VeMMMR_b_MtrMdVldtnFlt_Value(&rtb_Comparison5_d);

    /* Inport: '<Root>/VeSTMR_b_RngStValidationFlt' */
    (void)Rte_Read_VeSTMR_b_RngStValidationFlt_Value(&rtb_AND_ik2);

    /* Inport: '<Root>/VeTRMR_b_PRNDL_MontrFlt' */
    (void)Rte_Read_VeTRMR_b_PRNDL_MontrFlt_Value(&rtb_Logical18_i);

    /* Inport: '<Root>/VeSTMR_b_TransOutTrqCmdFlt' */
    (void)Rte_Read_VeSTMR_b_TransOutTrqCmdFlt_Value(&rtb_Logical13_mq);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRAR_MedTEB'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Logic: '<S2211>/Logical7' */
    rtb_VeSRAR_b_PPCTIS_ReducePerfM = (rtb_Logical6 && rtb_Comparison3_bq);

    /* Logic: '<S2211>/Logical8' incorporates:
     *  Logic: '<S2211>/Logical10'
     */
    rtb_Logical6 = ((!rtb_Comparison3_bq) && rtb_Logical6);

    /* RelationalOperator: '<S2249>/Comparison3' incorporates:
     *  Constant: '<S2126>/Constant1'
     *  Constant: '<S2126>/Constant2'
     *  Constant: '<S2127>/Constant1'
     *  Constant: '<S2127>/Constant2'
     *  Constant: '<S2130>/Calib'
     *  DataStoreRead: '<S2126>/StatusByte_HybridGenPerf_Slip'
     *  DataStoreRead: '<S2127>/StatusByte_StarterGenMechPerf_Slip'
     *  Logic: '<S2110>/Logical2'
     *  Logic: '<S2110>/Logical4'
     *  Logic: '<S2126>/LogicalOperator'
     *  Logic: '<S2127>/LogicalOperator'
     *  RelationalOperator: '<S2126>/RelationalOperator1'
     *  RelationalOperator: '<S2126>/RelationalOperator2'
     *  RelationalOperator: '<S2127>/RelationalOperator1'
     *  RelationalOperator: '<S2127>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S2126>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S2126>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S2127>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S2127>/BitwiseOperator2'
     */
    rtb_Comparison3_bq = (((((((sint32)
        SRAR_ac_DW.StatusByte_StarterGenMechPerf_S) & 1) > 0) && ((((uint32)
        SRAR_ac_DW.StatusByte_StarterGenMechPerf_S) & 64U) == 0U)) &&
                           (KeSRAR_b_disableMechPerf_Slip)) || (((((sint32)
        SRAR_ac_DW.StatusByte_HybridGenPerf_Slip) & 1) > 0) && ((((uint32)
        SRAR_ac_DW.StatusByte_HybridGenPerf_Slip) & 64U) == 0U)));

    /* Logic: '<S1380>/Logical1' */
    VeSRAC_b_MtrAB_HV_CntctrOpnRq = (rtb_TmpSignalConversionAtVeIN_n ||
        rtb_TmpSignalConversionAtVeIN_p);

    /* Logic: '<S1380>/Logical3' */
    VeSRAC_b_MtrABC_HV_CntctrOpnRq = ((VeSRAC_b_MtrAB_HV_CntctrOpnRq) ||
        rtb_TmpSignalConversionAtVeIN_d);

    /* Switch: '<S1906>/Switch1' incorporates:
     *  Constant: '<S1374>/ConstantValue2'
     *  Constant: '<S1374>/ConstantValue3'
     */
    if (rtb_Logical12_i)
    {
        tmpRead_13 = 2;
    }
    else
    {
        tmpRead_13 = 0;
    }

    /* End of Switch: '<S1906>/Switch1' */

    /* Switch: '<S1917>/Switch1' incorporates:
     *  Constant: '<S1374>/ConstantValue4'
     *  Constant: '<S1374>/ConstantValue5'
     */
    if (rtb_Comparison6_m)
    {
        rtb_Comparison6_b = 4;
    }
    else
    {
        rtb_Comparison6_b = 0;
    }

    /* End of Switch: '<S1917>/Switch1' */

    /* Switch: '<S1928>/Switch1' incorporates:
     *  Constant: '<S1374>/ConstantValue6'
     *  Constant: '<S1374>/ConstantValue7'
     */
    if (rtb_Comparison4_lp)
    {
        rtb_TmpSignalConversionAtVeOB_2 = 8;
    }
    else
    {
        rtb_TmpSignalConversionAtVeOB_2 = 0;
    }

    /* End of Switch: '<S1928>/Switch1' */

    /* Switch: '<S1931>/Switch1' incorporates:
     *  Constant: '<S1374>/ConstantValue8'
     *  Constant: '<S1374>/ConstantValue9'
     */
    if (rtb_AND_ne)
    {
        rtb_AND_ll = 16;
    }
    else
    {
        rtb_AND_ll = 0;
    }

    /* End of Switch: '<S1931>/Switch1' */

    /* Switch: '<S1932>/Switch1' incorporates:
     *  Constant: '<S1374>/ConstantValue10'
     *  Constant: '<S1374>/ConstantValue11'
     */
    if (rtb_AND_iy)
    {
        rtb_AND_og = 32;
    }
    else
    {
        rtb_AND_og = 0;
    }

    /* End of Switch: '<S1932>/Switch1' */

    /* Switch: '<S1933>/Switch1' incorporates:
     *  Constant: '<S1374>/ConstantValue12'
     *  Constant: '<S1374>/ConstantValue13'
     */
    if (VeSRAC_b_MtrAInvrtrFaulted)
    {
        rtb_Switch1_fw = 64;
    }
    else
    {
        rtb_Switch1_fw = 0;
    }

    /* End of Switch: '<S1933>/Switch1' */

    /* Switch: '<S1934>/Switch1' incorporates:
     *  Constant: '<S1374>/ConstantValue14'
     *  Constant: '<S1374>/ConstantValue15'
     */
    if (VeSRAC_b_MtrAInvrtrFltEngOn)
    {
        rtb_Switch1_h0 = 128;
    }
    else
    {
        rtb_Switch1_h0 = 0;
    }

    /* End of Switch: '<S1934>/Switch1' */

    /* Switch: '<S1935>/Switch1' incorporates:
     *  Constant: '<S1374>/ConstantValue16'
     *  Constant: '<S1374>/ConstantValue17'
     */
    if (VeSRAC_b_MtrAInvrtrFltEngOff)
    {
        rtb_Switch1_mu = 256;
    }
    else
    {
        rtb_Switch1_mu = 0;
    }

    /* End of Switch: '<S1935>/Switch1' */

    /* Switch: '<S1936>/Switch1' incorporates:
     *  Constant: '<S1374>/ConstantValue18'
     *  Constant: '<S1374>/ConstantValue19'
     */
    if (VeSRAC_b_MtrAFltHVShtDwnEngOn)
    {
        rtb_AND_cg = 512;
    }
    else
    {
        rtb_AND_cg = 0;
    }

    /* End of Switch: '<S1936>/Switch1' */

    /* Switch: '<S1907>/Switch1' incorporates:
     *  Constant: '<S1374>/ConstantValue20'
     *  Constant: '<S1374>/ConstantValue21'
     */
    if (VeSRAC_b_MtrAFltHVShtDwnVehOff)
    {
        rtb_OR1_ot = 1024;
    }
    else
    {
        rtb_OR1_ot = 0;
    }

    /* End of Switch: '<S1907>/Switch1' */

    /* Switch: '<S1908>/Switch1' incorporates:
     *  Constant: '<S1374>/ConstantValue22'
     *  Constant: '<S1374>/ConstantValue23'
     */
    if (tmpRead_0)
    {
        rtb_LogicalOperator_cr = 2048;
    }
    else
    {
        rtb_LogicalOperator_cr = 0;
    }

    /* End of Switch: '<S1908>/Switch1' */

    /* Switch: '<S1909>/Switch1' incorporates:
     *  Constant: '<S1374>/ConstantValue24'
     *  Constant: '<S1374>/ConstantValue25'
     */
    if (tmpRead_1)
    {
        rtb_AND_d = 4096;
    }
    else
    {
        rtb_AND_d = 0;
    }

    /* End of Switch: '<S1909>/Switch1' */

    /* Switch: '<S1910>/Switch1' incorporates:
     *  Constant: '<S1374>/ConstantValue26'
     *  Constant: '<S1374>/ConstantValue27'
     */
    if (tmpRead_2)
    {
        rtb_TmpSignalConversionAtVeOB_3 = 8192;
    }
    else
    {
        rtb_TmpSignalConversionAtVeOB_3 = 0;
    }

    /* End of Switch: '<S1910>/Switch1' */

    /* Switch: '<S1911>/Switch1' incorporates:
     *  Constant: '<S1374>/ConstantValue28'
     *  Constant: '<S1374>/ConstantValue29'
     */
    if (tmpRead_3)
    {
        rtb_VeSRAR_b_HVOverVoltFailur_1 = 16384;
    }
    else
    {
        rtb_VeSRAR_b_HVOverVoltFailur_1 = 0;
    }

    /* End of Switch: '<S1911>/Switch1' */

    /* Switch: '<S1912>/Switch1' incorporates:
     *  Constant: '<S1374>/ConstantValue30'
     *  Constant: '<S1374>/ConstantValue31'
     */
    if (tmpRead_4)
    {
        rtb_VeSRAR_b_HVOverVoltFailur_f = 32768;
    }
    else
    {
        rtb_VeSRAR_b_HVOverVoltFailur_f = 0;
    }

    /* End of Switch: '<S1912>/Switch1' */

    /* Switch: '<S1913>/Switch1' incorporates:
     *  Constant: '<S1374>/ConstantValue32'
     *  Constant: '<S1374>/ConstantValue33'
     */
    if (tmpRead_5)
    {
        rtb_Switch1_bk = 65536U;
    }
    else
    {
        rtb_Switch1_bk = 0U;
    }

    /* End of Switch: '<S1913>/Switch1' */

    /* Switch: '<S1914>/Switch1' incorporates:
     *  Constant: '<S1374>/ConstantValue44'
     *  Constant: '<S1374>/ConstantValue55'
     */
    if (VeSRAC_b_MtrBInvrtrFaulted)
    {
        rtb_VeSRAR_b_TCMLmpFlt2_tmp = 131072U;
    }
    else
    {
        rtb_VeSRAR_b_TCMLmpFlt2_tmp = 0U;
    }

    /* End of Switch: '<S1914>/Switch1' */

    /* Switch: '<S1922>/Switch1' incorporates:
     *  Constant: '<S1374>/ConstantValue58'
     *  Constant: '<S1374>/ConstantValue59'
     */
    if (rtb_VeSRAR_b_WEDStuckOpen)
    {
        rtb_VeSRAR_b_SpinUpFailed_0 = 262144U;
    }
    else
    {
        rtb_VeSRAR_b_SpinUpFailed_0 = 0U;
    }

    /* End of Switch: '<S1922>/Switch1' */

    /* Switch: '<S1924>/Switch1' incorporates:
     *  Constant: '<S1374>/ConstantValue62'
     *  Constant: '<S1374>/ConstantValue63'
     */
    if (rtb_VeSRAR_b_MtrB_InvrtrFault_g)
    {
        rtb_Comparison1_ij = 1048576U;
    }
    else
    {
        rtb_Comparison1_ij = 0U;
    }

    /* End of Switch: '<S1924>/Switch1' */

    /* Switch: '<S1925>/Switch1' incorporates:
     *  Constant: '<S1374>/ConstantValue34'
     *  Constant: '<S1374>/ConstantValue35'
     */
    if (rtb_VeSRAR_b_MtrA_InvrtrFaultd_)
    {
        rtb_Switch1_a3 = 2097152U;
    }
    else
    {
        rtb_Switch1_a3 = 0U;
    }

    /* End of Switch: '<S1925>/Switch1' */

    /* Switch: '<S1926>/Switch1' incorporates:
     *  Constant: '<S1374>/ConstantValue36'
     *  Constant: '<S1374>/ConstantValue37'
     */
    if (rtb_Logical18_c)
    {
        rtb_Switch1_c = 4194304U;
    }
    else
    {
        rtb_Switch1_c = 0U;
    }

    /* End of Switch: '<S1926>/Switch1' */

    /* Switch: '<S1927>/Switch1' incorporates:
     *  Constant: '<S1374>/ConstantValue38'
     *  Constant: '<S1374>/ConstantValue39'
     *  Constant: '<S2246>/Constant'
     *  RelationalOperator: '<S2212>/Relational_Operator'
     *  SignalConversion generated from: '<S2>/VeTHMR_e_ThrmSysShtDwnFlt'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeTHMR) == CeSRAR_e_RecSysShtDwn)
    {
        rtb_VeSRAR_b_CKSFailed_0 = 8388608U;
    }
    else
    {
        rtb_VeSRAR_b_CKSFailed_0 = 0U;
    }

    /* End of Switch: '<S1927>/Switch1' */

    /* Switch: '<S1929>/Switch1' incorporates:
     *  Constant: '<S1374>/ConstantValue40'
     *  Constant: '<S1374>/ConstantValue41'
     *  Constant: '<S2247>/Constant'
     *  RelationalOperator: '<S2212>/Relational_Operator'
     *  RelationalOperator: '<S2212>/Relational_Operator1'
     *  SignalConversion generated from: '<S2>/VeTHMR_e_ThrmSysShtDwnFlt'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeTHMR) == CeSRAR_e_RetSysShtDwn)
    {
        BitwiseLogicalOperator_b = 16777216U;
    }
    else
    {
        BitwiseLogicalOperator_b = 0U;
    }

    /* End of Switch: '<S1929>/Switch1' */

    /* Switch: '<S1930>/Switch1' incorporates:
     *  Constant: '<S1374>/ConstantValue42'
     *  Constant: '<S1374>/ConstantValue43'
     *  Constant: '<S2248>/Constant'
     *  RelationalOperator: '<S2212>/Relational_Operator'
     *  RelationalOperator: '<S2212>/Relational_Operator2'
     *  SignalConversion generated from: '<S2>/VeTHMR_e_ThrmSysShtDwnFlt'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeTHMR) == CeSRAR_e_NonRecSysShtDwn)
    {
        rtb_Switch1_mu_0 = 33554432U;
    }
    else
    {
        rtb_Switch1_mu_0 = 0U;
    }

    /* End of Switch: '<S1930>/Switch1' */

    /* Switch: '<S1915>/Switch1' incorporates:
     *  Constant: '<S1374>/ConstantValue45'
     *  Constant: '<S1374>/ConstantValue46'
     */
    if (rtb_VeSRAR_b_PPCTIS_ReducePerfM)
    {
        rtb_VeSRAR_b_PPCTIS_ReducePer_0 = 67108864U;
    }
    else
    {
        rtb_VeSRAR_b_PPCTIS_ReducePer_0 = 0U;
    }

    /* End of Switch: '<S1915>/Switch1' */

    /* Switch: '<S1916>/Switch1' incorporates:
     *  Constant: '<S1374>/ConstantValue47'
     *  Constant: '<S1374>/ConstantValue48'
     */
    if (rtb_Logical6)
    {
        rtb_Switch1_f3 = 134217728U;
    }
    else
    {
        rtb_Switch1_f3 = 0U;
    }

    /* End of Switch: '<S1916>/Switch1' */

    /* Switch: '<S1918>/Switch1' incorporates:
     *  Constant: '<S1374>/ConstantValue49'
     *  Constant: '<S1374>/ConstantValue50'
     */
    if (rtb_Comparison3_bq)
    {
        rtb_TmpSignalConversionAtVeBP_p = 268435456U;
    }
    else
    {
        rtb_TmpSignalConversionAtVeBP_p = 0U;
    }

    /* End of Switch: '<S1918>/Switch1' */

    /* Switch: '<S1919>/Switch1' incorporates:
     *  Constant: '<S1374>/ConstantValue51'
     *  Constant: '<S1374>/ConstantValue52'
     *  Constant: '<S2129>/Calib'
     *  Logic: '<S2110>/Logical3'
     */
    if ((rtb_Comparison3_bq && rtb_Switch1_oz) && (KeSRAR_b_EnblBeltSlipFailure))
    {
        rtb_Comparison3_ou = 536870912U;
    }
    else
    {
        rtb_Comparison3_ou = 0U;
    }

    /* End of Switch: '<S1919>/Switch1' */

    /* Switch: '<S1920>/Switch1' incorporates:
     *  Constant: '<S1374>/ConstantValue53'
     *  Constant: '<S1374>/ConstantValue54'
     */
    if (rtb_Comparison7_o5)
    {
        rtb_VeSRAR_b_AuxPumpFail_Inhi_0 = 1073741824U;
    }
    else
    {
        rtb_VeSRAR_b_AuxPumpFail_Inhi_0 = 0U;
    }

    /* End of Switch: '<S1920>/Switch1' */

    /* Switch: '<S1921>/Switch1' incorporates:
     *  Constant: '<S1374>/ConstantValue56'
     *  Constant: '<S1374>/ConstantValue57'
     */
    if (VeSRAC_b_MtrABC_HV_CntctrOpnRq)
    {
        rtb_TmpSignalConversionAtVeEN_d = 2147483648U;
    }
    else
    {
        rtb_TmpSignalConversionAtVeEN_d = 0U;
    }

    /* End of Switch: '<S1921>/Switch1' */

    /* S-Function (sfix_bitop): '<S1374>/BitwiseLogicalOperator' incorporates:
     *  Switch: '<S1905>/Switch1'
     */
    rtb_Switch1_bk = ((((((((((((((((((((((((((((((((uint32)(rtb_Logical24_a ?
        1U : 0U)) | ((uint32)tmpRead_13)) | ((uint32)rtb_Comparison6_b)) |
        ((uint32)rtb_TmpSignalConversionAtVeOB_2)) | ((uint32)rtb_AND_ll)) |
        ((uint32)rtb_AND_og)) | ((uint32)rtb_Switch1_fw)) | ((uint32)
        rtb_Switch1_h0)) | ((uint32)rtb_Switch1_mu)) | ((uint32)rtb_AND_cg)) |
        ((uint32)rtb_OR1_ot)) | ((uint32)rtb_LogicalOperator_cr)) | ((uint32)
        rtb_AND_d)) | ((uint32)rtb_TmpSignalConversionAtVeOB_3)) | ((uint32)
        rtb_VeSRAR_b_HVOverVoltFailur_1)) | ((uint32)
        rtb_VeSRAR_b_HVOverVoltFailur_f)) | rtb_Switch1_bk) |
        rtb_VeSRAR_b_TCMLmpFlt2_tmp) | rtb_VeSRAR_b_SpinUpFailed_0) |
        rtb_Switch1_anw) | rtb_Comparison1_ij) | rtb_Switch1_a3) | rtb_Switch1_c)
        | rtb_VeSRAR_b_CKSFailed_0) | BitwiseLogicalOperator_b) |
                           rtb_Switch1_mu_0) | rtb_VeSRAR_b_PPCTIS_ReducePer_0) |
                         rtb_Switch1_f3) | rtb_TmpSignalConversionAtVeBP_p) |
                       rtb_Comparison3_ou) | rtb_VeSRAR_b_AuxPumpFail_Inhi_0) |
        rtb_TmpSignalConversionAtVeEN_d;

    /* Logic: '<S1409>/LogicalOperator' incorporates:
     *  Constant: '<S1409>/Constant1'
     *  Constant: '<S1409>/Constant2'
     *  DataStoreRead: '<S1409>/StatusByte_CM_RedundMemPerf'
     *  RelationalOperator: '<S1409>/RelationalOperator1'
     *  RelationalOperator: '<S1409>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S1409>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S1409>/BitwiseOperator2'
     */
    rtb_TmpSignalConversionAtVeIN_n = (((((sint32)
        SRAR_ac_DW.StatusByte_CM_RedundMemPerf) & 1) > 0) && ((((uint32)
        SRAR_ac_DW.StatusByte_CM_RedundMemPerf) & 64U) == 0U));

    /* SignalConversion generated from: '<S1364>/VariantSource' */
#if Rte_SysCon_Variant_SRAR_3

    /* VariantMerge generated from: '<S1364>/VariantSource' incorporates:
     *  Inport: '<Root>/VeDFIR_b_CANERRSTS_CANFD_3'
     */
    (void)Rte_Read_VeDFIR_b_CANERRSTS_CANFD_3_Value
        (&rtb_VariantMerge_For_Variant_So);

#else

    /* VariantMerge generated from: '<S1364>/VariantSource' incorporates:
     *  Constant: '<S1364>/FALSEConstant1'
     *  SignalConversion generated from: '<S1364>/VariantSource'
     */
    rtb_VariantMerge_For_Variant_So = false;

#endif

    /* End of SignalConversion generated from: '<S1364>/VariantSource' */

    /* Switch: '<S1427>/Switch1' */
    if (rtb_Switch1_ajp)
    {
        /* Switch: '<S1427>/Switch1' incorporates:
         *  Constant: '<S1413>/Constant1'
         *  Constant: '<S1413>/Constant2'
         *  Constant: '<S1414>/Constant1'
         *  Constant: '<S1414>/Constant2'
         *  Constant: '<S1417>/Constant1'
         *  Constant: '<S1417>/Constant2'
         *  Constant: '<S1436>/Calib'
         *  DataStoreRead: '<S1413>/StatusByte_HiSpdFD_CAN3CommBus'
         *  DataStoreRead: '<S1414>/StatusByte_HiSpdFD_CAN3CommBusPerf'
         *  DataStoreRead: '<S1417>/StatusByte_HiSpdCANCommBus'
         *  Logic: '<S1364>/Logical1'
         *  Logic: '<S1364>/Logical11'
         *  Logic: '<S1364>/Logical12'
         *  Logic: '<S1413>/LogicalOperator'
         *  Logic: '<S1414>/LogicalOperator'
         *  Logic: '<S1417>/LogicalOperator'
         *  RelationalOperator: '<S1413>/RelationalOperator1'
         *  RelationalOperator: '<S1413>/RelationalOperator2'
         *  RelationalOperator: '<S1414>/RelationalOperator1'
         *  RelationalOperator: '<S1414>/RelationalOperator2'
         *  RelationalOperator: '<S1417>/RelationalOperator1'
         *  RelationalOperator: '<S1417>/RelationalOperator2'
         *  S-Function (sfix_bitop): '<S1413>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S1413>/BitwiseOperator2'
         *  S-Function (sfix_bitop): '<S1414>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S1414>/BitwiseOperator2'
         *  S-Function (sfix_bitop): '<S1417>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S1417>/BitwiseOperator2'
         */
        VeSRAC_b_CANC_BusOff = ((((((sint32)
            SRAR_ac_DW.StatusByte_HiSpdCANCommBus) & 1) > 0) && ((((uint32)
            SRAR_ac_DW.StatusByte_HiSpdCANCommBus) & 64U) == 0U)) ||
                                ((((((((sint32)
            SRAR_ac_DW.StatusByte_HiSpdFD_CAN3CommBus) & 1) > 0) && ((((uint32)
            SRAR_ac_DW.StatusByte_HiSpdFD_CAN3CommBus) & 64U) == 0U)) ||
            (((((sint32)SRAR_ac_DW.StatusByte_HiSpdFD_CAN3CommBusP) & 1) > 0) &&
             ((((uint32)SRAR_ac_DW.StatusByte_HiSpdFD_CAN3CommBusP) & 64U) == 0U)))
            || rtb_VariantMerge_For_Variant_So) &&
            (KeSRAR_b_enbl_CANC_BusOff_M182)));
    }
    else
    {
        /* Switch: '<S1427>/Switch1' incorporates:
         *  Constant: '<S1364>/Constant2'
         */
        VeSRAC_b_CANC_BusOff = false;
    }

    /* End of Switch: '<S1427>/Switch1' */

    /* SignalConversion generated from: '<S1364>/VariantSource1' */
#if Rte_SysCon_Variant_SRAR_4

    /* VariantMerge generated from: '<S1364>/VariantSource1' incorporates:
     *  Inport: '<Root>/VeDFIR_b_CANERRSTS_CANFD_14'
     */
    (void)Rte_Read_VeDFIR_b_CANERRSTS_CANFD_14_Value
        (&rtb_VariantMerge_For_Variant__i);

#else

    /* VariantMerge generated from: '<S1364>/VariantSource1' incorporates:
     *  Constant: '<S1364>/FALSEConstant3'
     *  SignalConversion generated from: '<S1364>/VariantSource1'
     */
    rtb_VariantMerge_For_Variant__i = false;

#endif

    /* End of SignalConversion generated from: '<S1364>/VariantSource1' */

    /* Switch: '<S1429>/Switch1' */
    if (rtb_Switch1_ajp)
    {
        /* Switch: '<S1429>/Switch1' incorporates:
         *  Constant: '<S1411>/Constant1'
         *  Constant: '<S1411>/Constant2'
         *  Constant: '<S1412>/Constant1'
         *  Constant: '<S1412>/Constant2'
         *  Constant: '<S1416>/Constant1'
         *  Constant: '<S1416>/Constant2'
         *  Constant: '<S1435>/Calib'
         *  DataStoreRead: '<S1411>/StatusByte_HiSpdFD_CAN14CommBus'
         *  DataStoreRead: '<S1412>/StatusByte_HiSpdFD_CAN14CommBusPerf'
         *  DataStoreRead: '<S1416>/StatusByte_HiSpdCANCommBusPerf'
         *  Logic: '<S1364>/Logical13'
         *  Logic: '<S1364>/Logical14'
         *  Logic: '<S1364>/Logical15'
         *  Logic: '<S1411>/LogicalOperator'
         *  Logic: '<S1412>/LogicalOperator'
         *  Logic: '<S1416>/LogicalOperator'
         *  RelationalOperator: '<S1411>/RelationalOperator1'
         *  RelationalOperator: '<S1411>/RelationalOperator2'
         *  RelationalOperator: '<S1412>/RelationalOperator1'
         *  RelationalOperator: '<S1412>/RelationalOperator2'
         *  RelationalOperator: '<S1416>/RelationalOperator1'
         *  RelationalOperator: '<S1416>/RelationalOperator2'
         *  S-Function (sfix_bitop): '<S1411>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S1411>/BitwiseOperator2'
         *  S-Function (sfix_bitop): '<S1412>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S1412>/BitwiseOperator2'
         *  S-Function (sfix_bitop): '<S1416>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S1416>/BitwiseOperator2'
         */
        VeSRAC_b_CANC2_BusOff = ((((((sint32)
            SRAR_ac_DW.StatusByte_HiSpdCANCommBusPerf) & 1) > 0) && ((((uint32)
            SRAR_ac_DW.StatusByte_HiSpdCANCommBusPerf) & 64U) == 0U)) ||
            ((((((((sint32)SRAR_ac_DW.StatusByte_HiSpdFD_CAN14CommBus) & 1) > 0)
                && ((((uint32)SRAR_ac_DW.StatusByte_HiSpdFD_CAN14CommBus) & 64U)
                    == 0U)) || (((((sint32)
            SRAR_ac_DW.StatusByte_HiSpdFD_CAN14CommB_l) & 1) > 0) && ((((uint32)
            SRAR_ac_DW.StatusByte_HiSpdFD_CAN14CommB_l) & 64U) == 0U))) ||
              rtb_VariantMerge_For_Variant__i) &&
             (KeSRAR_b_enbl_CANC2_BusOff_M182)));
    }
    else
    {
        /* Switch: '<S1429>/Switch1' incorporates:
         *  Constant: '<S1364>/Constant3'
         */
        VeSRAC_b_CANC2_BusOff = false;
    }

    /* End of Switch: '<S1429>/Switch1' */

    /* Logic: '<S1425>/LogicalOperator' incorporates:
     *  Constant: '<S1425>/Constant1'
     *  Constant: '<S1425>/Constant2'
     *  DataStoreRead: '<S1425>/StatusByte_LostCommIPC'
     *  RelationalOperator: '<S1425>/RelationalOperator1'
     *  RelationalOperator: '<S1425>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S1425>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S1425>/BitwiseOperator2'
     */
    VeSRAC_b_LocIPC = (((((sint32)SRAR_ac_DW.StatusByte_LostCommIPC) & 1) > 0) &&
                       ((((uint32)SRAR_ac_DW.StatusByte_LostCommIPC) & 64U) ==
                        0U));

    /* Logic: '<S2111>/Logical16' incorporates:
     *  Constant: '<S2131>/Calib'
     *  RelationalOperator: '<S2111>/Comparison1'
     */
    VeSRAC_b_MtrAinvrtFailedCreepMode = (rtb_UnitDelay_lw &&
        (rtb_TmpSignalConversionAtVeGENR < KeSRAR_U_MtrAInvrtrFailVoltThrshld));

    /* Logic: '<S2110>/Logical1' incorporates:
     *  Constant: '<S2128>/Calib'
     *  RelationalOperator: '<S2110>/Comparison1'
     */
    VeSRAC_b_BeltSlipCreepMode = ((rtb_TmpSignalConversionAtVeGENR <
        KeSRAR_U_BeltSlipVoltThrshld) && rtb_Comparison3_bq);

    /* Switch: '<S1464>/Switch1' incorporates:
     *  Constant: '<S1469>/Calib'
     *  Inport: '<Root>/VeHPMR_b_MtrSystemActive'
     *  RelationalOperator: '<S1367>/Comparison5'
     */
    if (rtb_TmpSignalConversionAtVePMDR >= KeSRAR_t_InputDebounceMtrSys)
    {
        (void)Rte_Read_VeHPMR_b_MtrSystemActive_Value(&rtb_OR1_ln);

        /* Switch: '<S1464>/Switch1' incorporates:
         *  Inport: '<Root>/VeHPMR_b_MtrSystemActive'
         *  Logic: '<S1367>/AND2'
         */
        rtb_TmpSignalConversionAtVeETQR = !rtb_OR1_ln;
    }
    else
    {
        /* Switch: '<S1464>/Switch1' incorporates:
         *  Constant: '<S1367>/Constant8'
         */
        rtb_TmpSignalConversionAtVeETQR = false;
    }

    /* End of Switch: '<S1464>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VePLTR_b_RmtVehStartReq' */
    (void)Rte_Read_VePLTR_b_RmtVehStartReq_Value
        (&rtb_VeSRAR_b_EnblPlgInEngRunTmr);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRAR_MedTEB'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Outputs for Atomic SubSystem: '<S1482>/SignalLatchOnWithReset' */
    /* Logic: '<S1496>/OR1' incorporates:
     *  Constant: '<S1492>/Constant'
     *  Constant: '<S1494>/Constant'
     *  Constant: '<S1495>/Constant'
     *  Logic: '<S1482>/Logical3'
     *  Logic: '<S1496>/NOT'
     *  Logic: '<S1496>/OR'
     *  RelationalOperator: '<S1482>/Comparison10'
     *  RelationalOperator: '<S1482>/Comparison7'
     *  RelationalOperator: '<S1482>/Comparison8'
     *  UnitDelay: '<S1482>/UnitDelay'
     *  UnitDelay: '<S1496>/UnitDelay'
     */
    rtb_VariantMerge_For_Variant__i = (((((uint32)SRAR_ac_DW.UnitDelay_DSTATE_it)
        == CePMDR_e_PowerMode_Crank) && (((uint32)
        rtb_TmpSignalConversionAtVePM_g) == CePMDR_e_PowerMode_Run)) ||
        ((((uint32)rtb_TmpSignalConversionAtVePM_g) != CePMDR_e_PowerMode_Off) &&
         (SRAR_ac_DW.UnitDelay_DSTATE_mh)));

    /* Update for UnitDelay: '<S1496>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_mh = rtb_VariantMerge_For_Variant__i;

    /* End of Outputs for SubSystem: '<S1482>/SignalLatchOnWithReset' */

    /* Outputs for Atomic SubSystem: '<S1481>/SignalLatchOn' */
    /* Logic: '<S1490>/OR2' incorporates:
     *  Constant: '<S1489>/Constant'
     *  RelationalOperator: '<S1481>/Comparison11'
     *  UnitDelay: '<S1490>/UnitDelay'
     */
    rtb_VeSRAR_b_WEDStuckOpen = ((((uint32)rtb_TmpSignalConversionAtVeES_d) ==
        CeESSR_e_EngRunning) || (SRAR_ac_DW.UnitDelay_DSTATE_ao));

    /* Update for UnitDelay: '<S1490>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_ao = rtb_VeSRAR_b_WEDStuckOpen;

    /* End of Outputs for SubSystem: '<S1481>/SignalLatchOn' */

    /* Logic: '<S1483>/Logical4' incorporates:
     *  Constant: '<S1497>/Constant'
     *  Constant: '<S1498>/Constant'
     *  Constant: '<S1499>/Constant'
     *  Constant: '<S1500>/Constant'
     *  Constant: '<S1501>/Constant'
     *  RelationalOperator: '<S1483>/Comparison12'
     *  RelationalOperator: '<S1483>/Comparison13'
     *  RelationalOperator: '<S1483>/Comparison14'
     *  RelationalOperator: '<S1483>/Comparison15'
     *  RelationalOperator: '<S1483>/Comparison16'
     */
    rtb_VariantMerge_For_Variant_So = (((((((uint32)
        rtb_TmpSignalConversionAtVeOB_k) == CeOBCR_e_ChargingLvlAC1) ||
        (((uint32)rtb_TmpSignalConversionAtVeOB_k) == CeOBCR_e_ChargingLvlAC2)) ||
        (((uint32)rtb_TmpSignalConversionAtVeOB_k) == CeOBCR_e_ChargingLvlAC3)) ||
        (((uint32)rtb_TmpSignalConversionAtVeOB_k) == CeOBCR_e_ChargingLvlDC1)) ||
        (((uint32)rtb_TmpSignalConversionAtVeOB_k) == CeOBCR_e_ChargingLvlDC2));

    /* Logic: '<S1454>/Logical6' incorporates:
     *  Logic: '<S1454>/Logical5'
     */
    rtb_VeSRAR_b_EnblPlgInEngRunTmr = (((rtb_VariantMerge_For_Variant__i &&
        rtb_VeSRAR_b_WEDStuckOpen) && rtb_VariantMerge_For_Variant_So) &&
        (!rtb_VeSRAR_b_EnblPlgInEngRunTmr));

    /* Logic: '<S1486>/Logical8' */
    rtb_VariantMerge_For_Variant__i = !rtb_VeSRAR_b_EnblPlgInEngRunTmr;

    /* Outputs for Atomic SubSystem: '<S1486>/StopWatchResetEnabled2' */
    /* Switch: '<S1508>/Switch1' incorporates:
     *  Logic: '<S1486>/Logical7'
     *  Switch: '<S1508>/Switch2'
     *  UnitDelay: '<S1486>/UnitDelay1'
     */
    if (rtb_VariantMerge_For_Variant__i || (SRAR_ac_DW.UnitDelay1_DSTATE_o))
    {
        /* Switch: '<S1508>/Switch1' incorporates:
         *  Constant: '<S1508>/ConstantValue2'
         */
        rtb_Switch1_io = 0.0F;
    }
    else if (rtb_VeSRAR_b_EnblPlgInEngRunTmr)
    {
        /* Switch: '<S1508>/Switch2' incorporates:
         *  Constant: '<S1488>/Calib'
         *  Sum: '<S1508>/Subtraction'
         *  Switch: '<S1508>/Switch1'
         *  UnitDelay: '<S1508>/UnitDelay'
         */
        rtb_Switch1_io = KeSRAR_t_dT + SRAR_ac_DW.UnitDelay_DSTATE_g;
    }
    else
    {
        /* Switch: '<S1508>/Switch1' incorporates:
         *  Switch: '<S1508>/Switch2'
         *  UnitDelay: '<S1508>/UnitDelay'
         */
        rtb_Switch1_io = SRAR_ac_DW.UnitDelay_DSTATE_g;
    }

    /* End of Switch: '<S1508>/Switch1' */
    /* End of Outputs for SubSystem: '<S1486>/StopWatchResetEnabled2' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSSDR_b_DrvAllwd' */
    (void)Rte_Read_VeSSDR_b_DrvAllwd_Value(&rtb_VeSRAR_b_EnblUnplgVehInPark);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRAR_MedTEB'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Outputs for Atomic SubSystem: '<S1486>/StopWatchResetEnabled2' */
    /* Update for UnitDelay: '<S1508>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_g = rtb_Switch1_io;

    /* End of Outputs for SubSystem: '<S1486>/StopWatchResetEnabled2' */

    /* RelationalOperator: '<S1486>/Comparison5' incorporates:
     *  Constant: '<S1506>/Calib'
     */
    rtb_VeSRAR_b_EnblPlgInEngRunTmr = (rtb_Switch1_io >= KeSRAR_t_PlgInEngRunTmr);

    /* Outputs for Atomic SubSystem: '<S1486>/SignalLatchOnWithReset1' */
    /* Logic: '<S1507>/OR1' incorporates:
     *  Logic: '<S1507>/NOT'
     *  Logic: '<S1507>/OR'
     *  UnitDelay: '<S1507>/UnitDelay'
     */
    rtb_VariantMerge_For_Variant__i = (rtb_VeSRAR_b_EnblPlgInEngRunTmr ||
        ((!rtb_VariantMerge_For_Variant__i) && (SRAR_ac_DW.UnitDelay_DSTATE_i1)));

    /* Update for UnitDelay: '<S1507>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_i1 = rtb_VariantMerge_For_Variant__i;

    /* End of Outputs for SubSystem: '<S1486>/SignalLatchOnWithReset1' */

    /* RelationalOperator: '<S1529>/Comparison7' incorporates:
     *  Constant: '<S1505>/Constant'
     *  RelationalOperator: '<S1485>/Comparison3'
     */
    rtb_Comparison7_o5 = (((uint32)rtb_TmpSignalConversionAtVeTRGR) ==
                          CeTRGR_e_TransRangePark);

    /* Logic: '<S1484>/Logical12' incorporates:
     *  Logic: '<S1484>/Logical13'
     */
    VeSRAC_b_PluggedORNotPark = (rtb_VariantMerge_For_Variant_So ||
        (!rtb_Comparison7_o5));

    /* Outputs for Atomic SubSystem: '<S1484>/SignalLatchOnWithReset3' */
    /* Logic: '<S1504>/OR1' incorporates:
     *  Constant: '<S1502>/Constant'
     *  Constant: '<S1503>/Constant'
     *  Logic: '<S1484>/Logical1'
     *  Logic: '<S1484>/Logical2'
     *  Logic: '<S1504>/NOT'
     *  Logic: '<S1504>/OR'
     *  RelationalOperator: '<S1484>/Comparison1'
     *  RelationalOperator: '<S1484>/Comparison2'
     *  UnitDelay: '<S1484>/UnitDelay2'
     *  UnitDelay: '<S1504>/UnitDelay'
     */
    rtb_VeSRAR_b_WEDStuckOpen = ((((((uint32)rtb_TmpSignalConversionAtVeOB_k) ==
        CeOBCR_e_ChargingLvlDefault) || (((uint32)
        rtb_TmpSignalConversionAtVeOB_k) == CeOBCR_e_PartialPlugDrvAlwd)) &&
        (SRAR_ac_DW.UnitDelay2_DSTATE)) || ((!VeSRAC_b_PluggedORNotPark) &&
        (SRAR_ac_DW.UnitDelay_DSTATE_ld)));

    /* Update for UnitDelay: '<S1504>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_ld = rtb_VeSRAR_b_WEDStuckOpen;

    /* End of Outputs for SubSystem: '<S1484>/SignalLatchOnWithReset3' */

    /* Logic: '<S1454>/Logical9' */
    rtb_VeSRAR_b_EnblUnplgVehInPark = ((rtb_VeSRAR_b_WEDStuckOpen &&
        rtb_Comparison7_o5) && rtb_VeSRAR_b_EnblUnplgVehInPark);

    /* Logic: '<S1487>/Logical10' */
    rtb_VeSRAR_b_WEDStuckOpen = !rtb_VeSRAR_b_EnblUnplgVehInPark;

    /* Outputs for Atomic SubSystem: '<S1487>/StopWatchResetEnabled1' */
    /* Switch: '<S1511>/Switch1' incorporates:
     *  Logic: '<S1487>/Logical11'
     *  Switch: '<S1511>/Switch2'
     *  UnitDelay: '<S1487>/UnitDelay3'
     */
    if (rtb_VeSRAR_b_WEDStuckOpen || (SRAR_ac_DW.UnitDelay3_DSTATE))
    {
        /* Switch: '<S1511>/Switch1' incorporates:
         *  Constant: '<S1511>/ConstantValue2'
         */
        rtb_Switch1_io = 0.0F;
    }
    else if (rtb_VeSRAR_b_EnblUnplgVehInPark)
    {
        /* Switch: '<S1511>/Switch2' incorporates:
         *  Constant: '<S1488>/Calib'
         *  Sum: '<S1511>/Subtraction'
         *  Switch: '<S1511>/Switch1'
         *  UnitDelay: '<S1511>/UnitDelay'
         */
        rtb_Switch1_io = KeSRAR_t_dT + SRAR_ac_DW.UnitDelay_DSTATE_h;
    }
    else
    {
        /* Switch: '<S1511>/Switch1' incorporates:
         *  Switch: '<S1511>/Switch2'
         *  UnitDelay: '<S1511>/UnitDelay'
         */
        rtb_Switch1_io = SRAR_ac_DW.UnitDelay_DSTATE_h;
    }

    /* End of Switch: '<S1511>/Switch1' */

    /* Update for UnitDelay: '<S1511>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_h = rtb_Switch1_io;

    /* End of Outputs for SubSystem: '<S1487>/StopWatchResetEnabled1' */

    /* RelationalOperator: '<S1487>/Comparison4' incorporates:
     *  Constant: '<S1509>/Calib'
     */
    rtb_VeSRAR_b_EnblUnplgVehInPark = (rtb_Switch1_io >=
        KeSRAR_t_unplgVehInParkTmr);

    /* Outputs for Atomic SubSystem: '<S1487>/SignalLatchOnWithReset2' */
    /* Logic: '<S1510>/OR1' incorporates:
     *  Logic: '<S1510>/NOT'
     *  Logic: '<S1510>/OR'
     *  UnitDelay: '<S1510>/UnitDelay'
     */
    rtb_OR1_ln = (rtb_VeSRAR_b_EnblUnplgVehInPark ||
                  ((!rtb_VeSRAR_b_WEDStuckOpen) &&
                   (SRAR_ac_DW.UnitDelay_DSTATE_gs)));

    /* Update for UnitDelay: '<S1510>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_gs = rtb_OR1_ln;

    /* End of Outputs for SubSystem: '<S1487>/SignalLatchOnWithReset2' */

    /* RelationalOperator: '<S2249>/Comparison8' incorporates:
     *  Constant: '<S2270>/Constant'
     */
    VeSRAC_b_TCM_ePT_BusFail = (((uint32)rtb_TmpSignalConversionAtVeTI_a) ==
        CeTINR_e_BusFailTCM_ePTCAN);

    /* RelationalOperator: '<S1529>/Comparison7' incorporates:
     *  Constant: '<S2269>/Constant'
     *  RelationalOperator: '<S2249>/Comparison7'
     */
    rtb_Comparison7_o5 = (((uint32)rtb_TmpSignalConversionAtVeTI_a) ==
                          CeTINR_e_LoC_ECM_HCP_TCM_ePT);

    /* Logic: '<S2249>/Logical4' incorporates:
     *  Constant: '<S2267>/Constant'
     *  RelationalOperator: '<S2249>/Comparison5'
     */
    VeSRAC_b_TCMLoC_ePT_w_HCP = ((((uint32)rtb_TmpSignalConversionAtVeTI_a) ==
        CeTINR_e_LoC_HCP_TCM_ePT) || rtb_Comparison7_o5);

    /* Logic: '<S2249>/Logical3' incorporates:
     *  Constant: '<S2268>/Constant'
     *  RelationalOperator: '<S2249>/Comparison6'
     */
    VeSRAC_b_TCMLoC_ePT_w_ECM = (rtb_Comparison7_o5 || (((uint32)
        rtb_TmpSignalConversionAtVeTI_a) == CeTINR_e_LoC_ECM_TCM_ePT));

    /* Switch: '<S2290>/Switch1' incorporates:
     *  Switch: '<S2289>/Switch1'
     */
    if (rtb_Switch1_ajp)
    {
        /* Switch: '<S2290>/Switch1' incorporates:
         *  Constant: '<S2280>/Constant1'
         *  Constant: '<S2280>/Constant2'
         *  Constant: '<S2287>/Constant1'
         *  Constant: '<S2287>/Constant2'
         *  DataStoreRead: '<S2280>/StatusByte_InvData_TCM_BusB'
         *  DataStoreRead: '<S2287>/StatusByte_LostCommTrans_EPT'
         *  Logic: '<S2249>/Logical2'
         *  Logic: '<S2280>/LogicalOperator'
         *  Logic: '<S2287>/LogicalOperator'
         *  RelationalOperator: '<S2280>/RelationalOperator1'
         *  RelationalOperator: '<S2280>/RelationalOperator2'
         *  RelationalOperator: '<S2287>/RelationalOperator1'
         *  RelationalOperator: '<S2287>/RelationalOperator2'
         *  S-Function (sfix_bitop): '<S2280>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S2280>/BitwiseOperator2'
         *  S-Function (sfix_bitop): '<S2287>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S2287>/BitwiseOperator2'
         */
        VeSRAC_b_HCPLoc_ePT_TCM = ((((((sint32)
            SRAR_ac_DW.StatusByte_LostCommTrans_EPT) & 1) > 0) && ((((uint32)
            SRAR_ac_DW.StatusByte_LostCommTrans_EPT) & 64U) == 0U)) ||
            (((((sint32)SRAR_ac_DW.StatusByte_InvData_TCM_BusB) & 1) > 0) &&
             ((((uint32)SRAR_ac_DW.StatusByte_InvData_TCM_BusB) & 64U) == 0U)));

        /* Switch: '<S2289>/Switch1' incorporates:
         *  Constant: '<S2281>/Constant1'
         *  Constant: '<S2281>/Constant2'
         *  Logic: '<S2249>/Logical1'
         *  Logic: '<S2281>/LogicalOperator'
         *  RelationalOperator: '<S2281>/RelationalOperator1'
         *  RelationalOperator: '<S2281>/RelationalOperator2'
         */
        VeSRAC_b_HCPLoc_CANC_TCM = (rtb_LogicalOperator_lm ||
            ((rtb_TmpSignalConversionAtVeOB_1 > 0) && (rtb_Switch1_fxq == 0U)));
    }
    else
    {
        /* Switch: '<S2290>/Switch1' incorporates:
         *  Constant: '<S2249>/Constant2'
         */
        VeSRAC_b_HCPLoc_ePT_TCM = false;

        /* Switch: '<S2289>/Switch1' incorporates:
         *  Constant: '<S2249>/Constant1'
         */
        VeSRAC_b_HCPLoc_CANC_TCM = false;
    }

    /* End of Switch: '<S2290>/Switch1' */

    /* RelationalOperator: '<S1529>/Comparison8' incorporates:
     *  Constant: '<S1573>/Constant'
     */
    VeSRAC_b_ECM_ePT_BusFail = (((uint32)rtb_TmpSignalConversionAtVeEN_k) ==
        CeENGR_e_BusFailECM_ePTCAN);

    /* RelationalOperator: '<S1529>/Comparison7' incorporates:
     *  Constant: '<S1572>/Constant'
     */
    rtb_Comparison7_o5 = (((uint32)rtb_TmpSignalConversionAtVeEN_k) ==
                          CeENGR_e_LoC_TCM_HCP_ECM_ePT);

    /* Logic: '<S1529>/Logical8' incorporates:
     *  Constant: '<S1570>/Constant'
     *  RelationalOperator: '<S1529>/Comparison5'
     */
    VeSRAC_b_ECMLoC_ePT_w_HCP = ((((uint32)rtb_TmpSignalConversionAtVeEN_k) ==
        CeENGR_e_LoC_HCP_ECM_ePT) || rtb_Comparison7_o5);

    /* RelationalOperator: '<S2249>/Comparison4' incorporates:
     *  Constant: '<S2266>/Constant'
     */
    VeSRAC_b_TCM_C1CAN_BusFail = (((uint32)rtb_TmpSignalConversionAtVeTI_j) ==
        CeTINR_e_BusFailTCM_C1CAN);

    /* RelationalOperator: '<S2249>/Comparison3' incorporates:
     *  Constant: '<S2265>/Constant'
     */
    rtb_Comparison3_bq = (((uint32)rtb_TmpSignalConversionAtVeTI_j) ==
                          CeTINR_e_LoC_ECM_HCP_TCM_C1);

    /* Logic: '<S2249>/Logical12' incorporates:
     *  Constant: '<S2262>/Constant'
     *  RelationalOperator: '<S2249>/Comparison2'
     */
    VeSRAC_b_TCMLoC_C1CAN_w_ECM = (rtb_Comparison3_bq || (((uint32)
        rtb_TmpSignalConversionAtVeTI_j) == CeTINR_e_LoC_ECM_TCM_C1));

    /* RelationalOperator: '<S1529>/Comparison4' incorporates:
     *  Constant: '<S1569>/Constant'
     */
    VeSRAC_b_ECM_C1CAN_BusFail = (((uint32)rtb_TmpSignalConversionAtVeEN_h) ==
        CeENGR_e_BusFailECM_C1CAN);

    /* Logic: '<S2260>/Logical2' incorporates:
     *  Constant: '<S1568>/Constant'
     *  RelationalOperator: '<S1529>/Comparison3'
     */
    rtb_Logical6 = (((uint32)rtb_TmpSignalConversionAtVeEN_h) ==
                    CeENGR_e_LoC_TCM_HCP_ECM_C1);

    /* Logic: '<S1529>/Logical13' incorporates:
     *  Constant: '<S1566>/Constant'
     *  RelationalOperator: '<S1529>/Comparison1'
     */
    VeSRAC_b_ECMLoC_C1CAN_w_HCP = ((((uint32)rtb_TmpSignalConversionAtVeEN_h) ==
        CeENGR_e_LoC_HCP_ECM_C1) || rtb_Logical6);

    /* Logic: '<S1529>/Logical12' incorporates:
     *  Constant: '<S1567>/Constant'
     *  RelationalOperator: '<S1529>/Comparison2'
     */
    VeSRAC_b_ECMLoC_C1CAN_w_ECM = (rtb_Logical6 || (((uint32)
        rtb_TmpSignalConversionAtVeEN_h) == CeENGR_e_LoC_TCM_ECM_C1));

    /* Switch: '<S1432>/Switch1' incorporates:
     *  Switch: '<S1430>/Switch1'
     *  Switch: '<S2295>/Switch1'
     *  Switch: '<S2296>/Switch1'
     */
    if (rtb_Switch1_ajp)
    {
        /* Switch: '<S1432>/Switch1' incorporates:
         *  Constant: '<S1418>/Constant1'
         *  Constant: '<S1418>/Constant2'
         *  Constant: '<S1422>/Constant1'
         *  Constant: '<S1422>/Constant2'
         *  Constant: '<S1423>/Constant1'
         *  Constant: '<S1423>/Constant2'
         *  Constant: '<S1433>/Calib'
         *  DataStoreRead: '<S1418>/StatusByte_InvData_ABSCM_A'
         *  DataStoreRead: '<S1422>/StatusByte_InvData_ABS'
         *  DataStoreRead: '<S1423>/StatusByte_LostCommABSCM_A'
         *  Logic: '<S1364>/Logical19'
         *  Logic: '<S1364>/Logical20'
         *  Logic: '<S1364>/Logical3'
         *  Logic: '<S1418>/LogicalOperator'
         *  Logic: '<S1422>/LogicalOperator'
         *  Logic: '<S1423>/LogicalOperator'
         *  RelationalOperator: '<S1418>/RelationalOperator1'
         *  RelationalOperator: '<S1418>/RelationalOperator2'
         *  RelationalOperator: '<S1422>/RelationalOperator1'
         *  RelationalOperator: '<S1422>/RelationalOperator2'
         *  RelationalOperator: '<S1423>/RelationalOperator1'
         *  RelationalOperator: '<S1423>/RelationalOperator2'
         *  S-Function (sfix_bitop): '<S1418>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S1418>/BitwiseOperator2'
         *  S-Function (sfix_bitop): '<S1422>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S1422>/BitwiseOperator2'
         *  S-Function (sfix_bitop): '<S1423>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S1423>/BitwiseOperator2'
         */
        VeSRAC_b_CANC2_LoC_BSM = (((((((sint32)
            SRAR_ac_DW.StatusByte_LostCommABSCM_A) & 1) > 0) && ((((uint32)
            SRAR_ac_DW.StatusByte_LostCommABSCM_A) & 64U) == 0U)) || (((((sint32)
            SRAR_ac_DW.StatusByte_InvData_ABSCM_A) & 1) > 0) && ((((uint32)
            SRAR_ac_DW.StatusByte_InvData_ABSCM_A) & 64U) == 0U))) ||
            ((((((sint32)SRAR_ac_DW.StatusByte_InvData_ABS) & 1) > 0) &&
              ((((uint32)SRAR_ac_DW.StatusByte_InvData_ABS) & 64U) == 0U)) &&
             (KeSRAR_b_ABSCM_BusA_SNA_Disable)));

        /* Switch: '<S2296>/Switch1' incorporates:
         *  Constant: '<S2273>/Constant1'
         *  Constant: '<S2273>/Constant2'
         *  Constant: '<S2300>/Calib'
         *  DataStoreRead: '<S2273>/StatusByte_AHCP_LostCommABS'
         *  Logic: '<S2249>/Logical11'
         *  Logic: '<S2249>/Logical16'
         *  Logic: '<S2273>/LogicalOperator'
         *  RelationalOperator: '<S2273>/RelationalOperator1'
         *  RelationalOperator: '<S2273>/RelationalOperator2'
         *  S-Function (sfix_bitop): '<S2273>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S2273>/BitwiseOperator2'
         */
        VeSRAC_b_AHCPLoc_CANC2_BSM = ((((((sint32)
            SRAR_ac_DW.StatusByte_AHCP_LostCommABS) & 1) > 0) && ((((uint32)
            SRAR_ac_DW.StatusByte_AHCP_LostCommABS) & 64U) == 0U)) ||
            ((VeSRAC_b_CANC2_LoC_BSM) && (KeSRAR_b_enbl_CANC2_LOCBSM)));

        /* Switch: '<S1430>/Switch1' incorporates:
         *  Constant: '<S1420>/Constant1'
         *  Constant: '<S1420>/Constant2'
         *  Constant: '<S1424>/Constant1'
         *  Constant: '<S1424>/Constant2'
         *  DataStoreRead: '<S1420>/StatusByte_InvData_HapticCM'
         *  DataStoreRead: '<S1424>/StatusByte_LostCommHapticCM'
         *  Logic: '<S1364>/Logical2'
         *  Logic: '<S1420>/LogicalOperator'
         *  Logic: '<S1424>/LogicalOperator'
         *  RelationalOperator: '<S1420>/RelationalOperator1'
         *  RelationalOperator: '<S1420>/RelationalOperator2'
         *  RelationalOperator: '<S1424>/RelationalOperator1'
         *  RelationalOperator: '<S1424>/RelationalOperator2'
         *  S-Function (sfix_bitop): '<S1420>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S1420>/BitwiseOperator2'
         *  S-Function (sfix_bitop): '<S1424>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S1424>/BitwiseOperator2'
         */
        VeSRAC_b_HapticLoC = ((((((sint32)SRAR_ac_DW.StatusByte_LostCommHapticCM)
            & 1) > 0) && ((((uint32)SRAR_ac_DW.StatusByte_LostCommHapticCM) &
                           64U) == 0U)) || (((((sint32)
            SRAR_ac_DW.StatusByte_InvData_HapticCM) & 1) > 0) && ((((uint32)
            SRAR_ac_DW.StatusByte_InvData_HapticCM) & 64U) == 0U)));

        /* Switch: '<S2295>/Switch1' incorporates:
         *  Constant: '<S2274>/Constant1'
         *  Constant: '<S2274>/Constant2'
         *  Constant: '<S2275>/Constant1'
         *  Constant: '<S2275>/Constant2'
         *  Constant: '<S2282>/Constant1'
         *  Constant: '<S2282>/Constant2'
         *  Constant: '<S2297>/Calib'
         *  Constant: '<S2299>/Calib'
         *  DataStoreRead: '<S2274>/StatusByte_InvData_ABS_BusB'
         *  DataStoreRead: '<S2275>/StatusByte_InvData_ABS'
         *  DataStoreRead: '<S2282>/StatusByte_LostCommABSCM'
         *  Logic: '<S2249>/Logical14'
         *  Logic: '<S2249>/Logical15'
         *  Logic: '<S2249>/Logical6'
         *  Logic: '<S2274>/LogicalOperator'
         *  Logic: '<S2275>/LogicalOperator'
         *  Logic: '<S2282>/LogicalOperator'
         *  RelationalOperator: '<S2274>/RelationalOperator1'
         *  RelationalOperator: '<S2274>/RelationalOperator2'
         *  RelationalOperator: '<S2275>/RelationalOperator1'
         *  RelationalOperator: '<S2275>/RelationalOperator2'
         *  RelationalOperator: '<S2282>/RelationalOperator1'
         *  RelationalOperator: '<S2282>/RelationalOperator2'
         *  S-Function (sfix_bitop): '<S2274>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S2274>/BitwiseOperator2'
         *  S-Function (sfix_bitop): '<S2275>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S2275>/BitwiseOperator2'
         *  S-Function (sfix_bitop): '<S2282>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S2282>/BitwiseOperator2'
         */
        VeSRAC_b_HCPLoc_CANC_BSM = (((((((sint32)
            SRAR_ac_DW.StatusByte_LostCommABSCM) & 1) > 0) && ((((uint32)
            SRAR_ac_DW.StatusByte_LostCommABSCM) & 64U) == 0U)) || (((((sint32)
            SRAR_ac_DW.StatusByte_InvData_ABS_BusB) & 1) > 0) && ((((uint32)
            SRAR_ac_DW.StatusByte_InvData_ABS_BusB) & 64U) == 0U))) ||
            (((((((sint32)SRAR_ac_DW.StatusByte_InvData_ABS) & 1) > 0) &&
               ((((uint32)SRAR_ac_DW.StatusByte_InvData_ABS) & 64U) == 0U)) &&
              (rtb_TmpSignalConversionAtVePLTR || (KeSRAR_b_InplantMdDsbl))) &&
             (KeSRAR_b_ABSCM_BusB_SNA_Disable)));
    }
    else
    {
        /* Switch: '<S1432>/Switch1' incorporates:
         *  Constant: '<S1364>/Constant6'
         */
        VeSRAC_b_CANC2_LoC_BSM = false;

        /* Switch: '<S2296>/Switch1' incorporates:
         *  Constant: '<S2249>/Constant8'
         */
        VeSRAC_b_AHCPLoc_CANC2_BSM = false;

        /* Switch: '<S1430>/Switch1' incorporates:
         *  Constant: '<S1364>/Constant4'
         */
        VeSRAC_b_HapticLoC = false;

        /* Switch: '<S2295>/Switch1' incorporates:
         *  Constant: '<S2249>/Constant7'
         */
        VeSRAC_b_HCPLoc_CANC_BSM = false;
    }

    /* End of Switch: '<S1432>/Switch1' */

    /* RelationalOperator: '<S2249>/Comparison12' incorporates:
     *  Constant: '<S2263>/Constant'
     */
    VeSRAC_b_BSMLoC_C2CAN_w_AHCP = (((uint32)rtb_TmpSignalConversionAtVeBRKR) ==
        CeBRKR_e_LoC_BSM_HCP_C2);

    /* RelationalOperator: '<S2249>/Comparison11' incorporates:
     *  Constant: '<S2264>/Constant'
     */
    VeSRAC_b_BSM_C2CAN_BusFail = (((uint32)rtb_TmpSignalConversionAtVeBRKR) ==
        CeBRKR_e_BusFailBSM_C2CAN);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeINVR_e_MtrC_InvrtrSt' */
    (void)Rte_Read_VeINVR_e_MtrC_InvrtrSt_Value(&tmpRead_y);

    /* Inport: '<Root>/VeENGR_i_ECM_LHOM_Trans' */
    (void)Rte_Read_VeENGR_i_ECM_LHOM_Trans_Value(&tmpRead_s);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRAR_MedTEB'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Logic: '<S1364>/Logical4' incorporates:
     *  Logic: '<S1364>/Logical5'
     *  Logic: '<S1364>/Logical6'
     */
    VeSRAC_b_BSMLoCBusOff_CANC_C2 = (((VeSRAC_b_CANC2_LoC_BSM) &&
        (VeSRAC_b_HCPLoc_CANC_BSM)) || ((VeSRAC_b_CANC_BusOff) &&
        (VeSRAC_b_CANC2_BusOff)));

    /* Logic: '<S2260>/Logical2' */
    rtb_Logical6 = (rtb_TmpSignalConversionAtVeA_ce &&
                    rtb_TmpSignalConversionAtVeAD_o);

    /* RelationalOperator: '<S1380>/Comparison2' incorporates:
     *  Constant: '<S2116>/Constant'
     *  Inport: '<Root>/VeINVR_e_MtrC_InvrtrSt'
     */
    VeSRAC_b_MtrCInvrtrFaulted = (((uint32)tmpRead_y) ==
        CeINVR_e_InverterFaulted);

    /* Switch: '<S2260>/Switch1' incorporates:
     *  Constant: '<S2424>/Calib'
     */
    if (KeSRAR_b_MtrCInvrtr_FltEnbl)
    {
        /* Switch: '<S2260>/Switch1' */
        rtb_Switch1_oz = VeSRAC_b_MtrCInvrtrFaulted;
    }
    else
    {
        /* Switch: '<S2260>/Switch1' */
        rtb_Switch1_oz = VeSRAC_b_MtrAInvrtrFaulted;
    }

    /* End of Switch: '<S2260>/Switch1' */

    /* Logic: '<S2260>/Logical3' */
    rtb_VeSRAR_b_WEDStuckOpen = (rtb_TmpSignalConversionAtVeAD_p &&
        rtb_TmpSignalConversionAtVeADIR);

    /* Switch: '<S1938>/Switch1' incorporates:
     *  Constant: '<S1375>/ConstantValue2'
     *  Constant: '<S1375>/ConstantValue3'
     *  Logic: '<S1364>/Logical7'
     *  Logic: '<S1398>/AND'
     *  Logic: '<S1399>/AND'
     */
    if (rtb_LogicalOperator_h || rtb_TmpSignalConversionAtVeIN_n)
    {
        rtb_TmpSignalConversionAtVeOB_2 = 2;
    }
    else
    {
        rtb_TmpSignalConversionAtVeOB_2 = 0;
    }

    /* End of Switch: '<S1938>/Switch1' */

    /* Switch: '<S1949>/Switch1' incorporates:
     *  Constant: '<S1375>/ConstantValue4'
     *  Constant: '<S1375>/ConstantValue5'
     *  Logic: '<S1399>/AND'
     */
    if (rtb_TmpSignalConversionAtVeIN_n)
    {
        rtb_TmpSignalConversionAtVeOB_3 = 4;
    }
    else
    {
        rtb_TmpSignalConversionAtVeOB_3 = 0;
    }

    /* End of Switch: '<S1949>/Switch1' */

    /* Switch: '<S1960>/Switch1' incorporates:
     *  Constant: '<S1375>/ConstantValue6'
     *  Constant: '<S1375>/ConstantValue7'
     *  Constant: '<S1401>/Constant1'
     *  Constant: '<S1401>/Constant2'
     *  Constant: '<S1402>/Constant1'
     *  Constant: '<S1402>/Constant2'
     *  Constant: '<S1407>/Constant1'
     *  Constant: '<S1407>/Constant2'
     *  Constant: '<S1408>/Constant1'
     *  Constant: '<S1408>/Constant2'
     *  DataStoreRead: '<S1401>/StatusByte_CM_Chksum_Err'
     *  DataStoreRead: '<S1402>/StatusByte_CM_LongTermMemReset'
     *  DataStoreRead: '<S1407>/StatusByte_CM_RAM_Err'
     *  DataStoreRead: '<S1408>/StatusByte_CM_ROM_Err'
     *  Logic: '<S1364>/Logical8'
     *  Logic: '<S1401>/LogicalOperator'
     *  Logic: '<S1402>/LogicalOperator'
     *  Logic: '<S1407>/LogicalOperator'
     *  Logic: '<S1408>/LogicalOperator'
     *  RelationalOperator: '<S1401>/RelationalOperator1'
     *  RelationalOperator: '<S1401>/RelationalOperator2'
     *  RelationalOperator: '<S1402>/RelationalOperator1'
     *  RelationalOperator: '<S1402>/RelationalOperator2'
     *  RelationalOperator: '<S1407>/RelationalOperator1'
     *  RelationalOperator: '<S1407>/RelationalOperator2'
     *  RelationalOperator: '<S1408>/RelationalOperator1'
     *  RelationalOperator: '<S1408>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S1401>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S1401>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S1402>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S1402>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S1407>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S1407>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S1408>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S1408>/BitwiseOperator2'
     */
    if ((((((((sint32)SRAR_ac_DW.StatusByte_CM_Chksum_Err) & 1) > 0) &&
            ((((uint32)SRAR_ac_DW.StatusByte_CM_Chksum_Err) & 64U) == 0U)) ||
            (((((sint32)SRAR_ac_DW.StatusByte_CM_LongTermMemReset) & 1) > 0) &&
             ((((uint32)SRAR_ac_DW.StatusByte_CM_LongTermMemReset) & 64U) == 0U)))
         || (((((sint32)SRAR_ac_DW.StatusByte_CM_RAM_Err) & 1) > 0) &&
             ((((uint32)SRAR_ac_DW.StatusByte_CM_RAM_Err) & 64U) == 0U))) ||
            (((((sint32)SRAR_ac_DW.StatusByte_CM_ROM_Err) & 1) > 0) &&
             ((((uint32)SRAR_ac_DW.StatusByte_CM_ROM_Err) & 64U) == 0U)))
    {
        rtb_Switch1_fw = 8;
    }
    else
    {
        rtb_Switch1_fw = 0;
    }

    /* End of Switch: '<S1960>/Switch1' */

    /* Switch: '<S1963>/Switch1' incorporates:
     *  Constant: '<S1375>/ConstantValue8'
     *  Constant: '<S1375>/ConstantValue9'
     */
    if (rtb_Comparison5_d)
    {
        rtb_VeSRAR_b_HVOverVoltFailur_1 = 16;
    }
    else
    {
        rtb_VeSRAR_b_HVOverVoltFailur_1 = 0;
    }

    /* End of Switch: '<S1963>/Switch1' */

    /* Switch: '<S1964>/Switch1' incorporates:
     *  Constant: '<S1375>/ConstantValue10'
     *  Constant: '<S1375>/ConstantValue11'
     */
    if (rtb_Logical13_mq)
    {
        rtb_VeSRAR_b_HVOverVoltFailur_f = 32;
    }
    else
    {
        rtb_VeSRAR_b_HVOverVoltFailur_f = 0;
    }

    /* End of Switch: '<S1964>/Switch1' */

    /* Switch: '<S1965>/Switch1' incorporates:
     *  Constant: '<S1375>/ConstantValue12'
     *  Constant: '<S1375>/ConstantValue13'
     */
    if (rtb_Logical18_i)
    {
        tmpRead_13 = 64;
    }
    else
    {
        tmpRead_13 = 0;
    }

    /* End of Switch: '<S1965>/Switch1' */

    /* Switch: '<S1966>/Switch1' incorporates:
     *  Constant: '<S1375>/ConstantValue14'
     *  Constant: '<S1375>/ConstantValue15'
     *  Constant: '<S1405>/Constant1'
     *  Constant: '<S1405>/Constant2'
     *  DataStoreRead: '<S1405>/StatusByte_CM_PLD'
     *  Logic: '<S1405>/LogicalOperator'
     *  RelationalOperator: '<S1405>/RelationalOperator1'
     *  RelationalOperator: '<S1405>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S1405>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S1405>/BitwiseOperator2'
     */
    if (((((sint32)SRAR_ac_DW.StatusByte_CM_PLD) & 1) > 0) && ((((uint32)
            SRAR_ac_DW.StatusByte_CM_PLD) & 64U) == 0U))
    {
        rtb_Switch1_h0 = 128;
    }
    else
    {
        rtb_Switch1_h0 = 0;
    }

    /* End of Switch: '<S1966>/Switch1' */

    /* Switch: '<S1968>/Switch1' incorporates:
     *  Constant: '<S1375>/ConstantValue18'
     *  Constant: '<S1375>/ConstantValue19'
     */
    if (rtb_AND_ik2)
    {
        rtb_Comparison6_b = 512;
    }
    else
    {
        rtb_Comparison6_b = 0;
    }

    /* End of Switch: '<S1968>/Switch1' */

    /* Switch: '<S1939>/Switch1' incorporates:
     *  Constant: '<S1375>/ConstantValue20'
     *  Constant: '<S1375>/ConstantValue21'
     *  Constant: '<S1415>/Constant1'
     *  Constant: '<S1415>/Constant2'
     *  DataStoreRead: '<S1415>/StatusByte_Fault'
     *  Logic: '<S1415>/LogicalOperator'
     *  RelationalOperator: '<S1415>/RelationalOperator1'
     *  RelationalOperator: '<S1415>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S1415>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S1415>/BitwiseOperator2'
     */
    if (((((sint32)SRAR_ac_DW.StatusByte_Fault) & 1) > 0) && ((((uint32)
            SRAR_ac_DW.StatusByte_Fault) & 64U) == 0U))
    {
        rtb_Switch1_mu = 1024;
    }
    else
    {
        rtb_Switch1_mu = 0;
    }

    /* End of Switch: '<S1939>/Switch1' */

    /* Switch: '<S1940>/Switch1' incorporates:
     *  Constant: '<S1375>/ConstantValue22'
     *  Constant: '<S1375>/ConstantValue23'
     */
    if (VeSRAC_b_CANC_BusOff)
    {
        rtb_AND_cg = 2048;
    }
    else
    {
        rtb_AND_cg = 0;
    }

    /* End of Switch: '<S1940>/Switch1' */

    /* Switch: '<S1941>/Switch1' incorporates:
     *  Constant: '<S1375>/ConstantValue24'
     *  Constant: '<S1375>/ConstantValue25'
     */
    if (VeSRAC_b_ePT_BusOff)
    {
        rtb_OR1_ot = 4096;
    }
    else
    {
        rtb_OR1_ot = 0;
    }

    /* End of Switch: '<S1941>/Switch1' */

    /* Switch: '<S1942>/Switch1' incorporates:
     *  Constant: '<S1375>/ConstantValue26'
     *  Constant: '<S1375>/ConstantValue27'
     */
    if (VeSRAC_b_CANC2_BusOff)
    {
        rtb_LogicalOperator_cr = 8192;
    }
    else
    {
        rtb_LogicalOperator_cr = 0;
    }

    /* End of Switch: '<S1942>/Switch1' */

    /* Switch: '<S1943>/Switch1' incorporates:
     *  Constant: '<S1375>/ConstantValue28'
     *  Constant: '<S1375>/ConstantValue29'
     *  Constant: '<S1400>/Constant1'
     *  Constant: '<S1400>/Constant2'
     *  DataStoreRead: '<S1400>/StatusByte_CM_AD_Perf'
     *  Logic: '<S1400>/LogicalOperator'
     *  RelationalOperator: '<S1400>/RelationalOperator1'
     *  RelationalOperator: '<S1400>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S1400>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S1400>/BitwiseOperator2'
     */
    if (((((sint32)SRAR_ac_DW.StatusByte_CM_AD_Perf) & 1) > 0) && ((((uint32)
            SRAR_ac_DW.StatusByte_CM_AD_Perf) & 64U) == 0U))
    {
        rtb_TmpSignalConversionAtVeOB_1 = 16384;
    }
    else
    {
        rtb_TmpSignalConversionAtVeOB_1 = 0;
    }

    /* End of Switch: '<S1943>/Switch1' */

    /* Switch: '<S1944>/Switch1' incorporates:
     *  Constant: '<S1375>/ConstantValue30'
     *  Constant: '<S1375>/ConstantValue31'
     */
    if (VeSRAC_b_LocIPC)
    {
        rtb_AND_d = 32768;
    }
    else
    {
        rtb_AND_d = 0;
    }

    /* End of Switch: '<S1944>/Switch1' */

    /* Switch: '<S1945>/Switch1' incorporates:
     *  Constant: '<S1375>/ConstantValue32'
     *  Constant: '<S1375>/ConstantValue33'
     *  Constant: '<S1406>/Constant1'
     *  Constant: '<S1406>/Constant2'
     *  DataStoreRead: '<S1406>/StatusByte_CM_ProcessorPerf'
     *  Logic: '<S1406>/LogicalOperator'
     *  RelationalOperator: '<S1406>/RelationalOperator1'
     *  RelationalOperator: '<S1406>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S1406>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S1406>/BitwiseOperator2'
     */
    if (((((sint32)SRAR_ac_DW.StatusByte_CM_ProcessorPerf) & 1) > 0) &&
            ((((uint32)SRAR_ac_DW.StatusByte_CM_ProcessorPerf) & 64U) == 0U))
    {
        rtb_VeSRAR_b_TCMLmpFlt2_tmp = 65536U;
    }
    else
    {
        rtb_VeSRAR_b_TCMLmpFlt2_tmp = 0U;
    }

    /* End of Switch: '<S1945>/Switch1' */

    /* Switch: '<S1946>/Switch1' incorporates:
     *  Constant: '<S1375>/ConstantValue44'
     *  Constant: '<S1375>/ConstantValue55'
     *  Constant: '<S1403>/Constant1'
     *  Constant: '<S1403>/Constant2'
     *  DataStoreRead: '<S1403>/StatusByte_CM_MainProc'
     *  Logic: '<S1403>/LogicalOperator'
     *  RelationalOperator: '<S1403>/RelationalOperator1'
     *  RelationalOperator: '<S1403>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S1403>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S1403>/BitwiseOperator2'
     */
    if (((((sint32)SRAR_ac_DW.StatusByte_CM_MainProc) & 1) > 0) && ((((uint32)
            SRAR_ac_DW.StatusByte_CM_MainProc) & 64U) == 0U))
    {
        rtb_TmpSignalConversionAtVeEN_d = 131072U;
    }
    else
    {
        rtb_TmpSignalConversionAtVeEN_d = 0U;
    }

    /* End of Switch: '<S1946>/Switch1' */

    /* Switch: '<S1954>/Switch1' incorporates:
     *  Constant: '<S1375>/ConstantValue58'
     *  Constant: '<S1375>/ConstantValue59'
     *  Constant: '<S1404>/Constant1'
     *  Constant: '<S1404>/Constant2'
     *  DataStoreRead: '<S1404>/StatusByte_CM_OPDActivePerf'
     *  Logic: '<S1404>/LogicalOperator'
     *  RelationalOperator: '<S1404>/RelationalOperator1'
     *  RelationalOperator: '<S1404>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S1404>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S1404>/BitwiseOperator2'
     */
    if (((((sint32)SRAR_ac_DW.StatusByte_CM_OPDActivePerf) & 1) > 0) &&
            ((((uint32)SRAR_ac_DW.StatusByte_CM_OPDActivePerf) & 64U) == 0U))
    {
        rtb_Comparison1_ij = 262144U;
    }
    else
    {
        rtb_Comparison1_ij = 0U;
    }

    /* End of Switch: '<S1954>/Switch1' */

    /* Switch: '<S1955>/Switch1' incorporates:
     *  Constant: '<S1375>/ConstantValue60'
     *  Constant: '<S1375>/ConstantValue61'
     */
    if (VeSRAC_b_MtrAinvrtFailedCreepMode)
    {
        rtb_VeSRAR_b_SpinUpFailed_0 = 524288U;
    }
    else
    {
        rtb_VeSRAR_b_SpinUpFailed_0 = 0U;
    }

    /* End of Switch: '<S1955>/Switch1' */

    /* Switch: '<S1956>/Switch1' incorporates:
     *  Constant: '<S1375>/ConstantValue62'
     *  Constant: '<S1375>/ConstantValue63'
     */
    if (VeSRAC_b_BeltSlipCreepMode)
    {
        rtb_TmpSignalConversionAtVeBP_p = 1048576U;
    }
    else
    {
        rtb_TmpSignalConversionAtVeBP_p = 0U;
    }

    /* End of Switch: '<S1956>/Switch1' */

    /* Switch: '<S1957>/Switch1' incorporates:
     *  Constant: '<S1375>/ConstantValue34'
     *  Constant: '<S1375>/ConstantValue35'
     */
    if (rtb_TmpSignalConversionAtVeETQR)
    {
        rtb_Switch1_c = 2097152U;
    }
    else
    {
        rtb_Switch1_c = 0U;
    }

    /* End of Switch: '<S1957>/Switch1' */

    /* Switch: '<S1961>/Switch1' incorporates:
     *  Constant: '<S1375>/ConstantValue40'
     *  Constant: '<S1375>/ConstantValue41'
     */
    if (rtb_VariantMerge_For_Variant__i)
    {
        rtb_Switch1_anw = 16777216U;
    }
    else
    {
        rtb_Switch1_anw = 0U;
    }

    /* End of Switch: '<S1961>/Switch1' */

    /* Switch: '<S1962>/Switch1' incorporates:
     *  Constant: '<S1375>/ConstantValue42'
     *  Constant: '<S1375>/ConstantValue43'
     */
    if (rtb_OR1_ln)
    {
        rtb_Switch1_fxq = 33554432U;
    }
    else
    {
        rtb_Switch1_fxq = 0U;
    }

    /* End of Switch: '<S1962>/Switch1' */

    /* Switch: '<S1947>/Switch1' incorporates:
     *  Constant: '<S1375>/ConstantValue45'
     *  Constant: '<S1375>/ConstantValue46'
     *  Constant: '<S1470>/Calib'
     *  Logic: '<S1367>/Logical1'
     *  Logic: '<S1367>/Logical3'
     *  RelationalOperator: '<S1367>/Comparison1'
     */
    if ((rtb_TmpSignalConversionAtVeCSVR >= KeSRAR_v_VehSpdThrsh_InhibitRWD) &&
            (((((((((((((((((((VeSRAC_b_TCM_ePT_BusFail) ||
                              (VeSRAC_b_TCMLoC_ePT_w_HCP)) ||
                             (VeSRAC_b_TCMLoC_ePT_w_ECM)) ||
                            (VeSRAC_b_ePT_BusOff)) || (VeSRAC_b_HCPLoc_ePT_TCM))
                          || rtb_Switch1_pz) || (VeSRAC_b_ECM_ePT_BusFail)) ||
                        (VeSRAC_b_ECMLoC_ePT_w_HCP)) ||
                       (VeSRAC_b_TCM_C1CAN_BusFail)) ||
                      (VeSRAC_b_TCMLoC_C1CAN_w_ECM)) ||
                     (VeSRAC_b_HCPLoc_CANC_TCM)) || rtb_Switch1_pe) ||
                   (VeSRAC_b_ECM_C1CAN_BusFail)) || (VeSRAC_b_ECMLoC_C1CAN_w_HCP))
                 || (VeSRAC_b_ECMLoC_C1CAN_w_ECM)) || (VeSRAC_b_CANC_BusOff)) ||
               (VeSRAC_b_AHCPLoc_CANC2_BSM)) || (VeSRAC_b_BSMLoC_C2CAN_w_AHCP)) ||
             (VeSRAC_b_BSM_C2CAN_BusFail)))
    {
        BitwiseLogicalOperator_b = 67108864U;
    }
    else
    {
        BitwiseLogicalOperator_b = 0U;
    }

    /* End of Switch: '<S1947>/Switch1' */

    /* Switch: '<S1948>/Switch1' incorporates:
     *  Constant: '<S1375>/ConstantValue47'
     *  Constant: '<S1375>/ConstantValue48'
     */
    if (VeSRAC_b_HapticLoC)
    {
        rtb_VeSRAR_b_AuxPumpFail_Inhi_0 = 134217728U;
    }
    else
    {
        rtb_VeSRAR_b_AuxPumpFail_Inhi_0 = 0U;
    }

    /* End of Switch: '<S1948>/Switch1' */

    /* Switch: '<S1950>/Switch1' incorporates:
     *  Constant: '<S1375>/ConstantValue49'
     *  Constant: '<S1375>/ConstantValue50'
     */
    if (VeSRAC_b_BSMLoCBusOff_CANC_C2)
    {
        rtb_VeSRAR_b_CKSFailed_0 = 268435456U;
    }
    else
    {
        rtb_VeSRAR_b_CKSFailed_0 = 0U;
    }

    /* End of Switch: '<S1950>/Switch1' */

    /* Switch: '<S1951>/Switch1' incorporates:
     *  Constant: '<S1375>/ConstantValue51'
     *  Constant: '<S1375>/ConstantValue52'
     *  Constant: '<S2416>/Constant'
     *  Constant: '<S2417>/Constant'
     *  Constant: '<S2418>/Constant1'
     *  Constant: '<S2418>/Constant2'
     *  Constant: '<S2419>/Constant1'
     *  Constant: '<S2419>/Constant2'
     *  Constant: '<S2420>/Constant1'
     *  Constant: '<S2420>/Constant2'
     *  Constant: '<S2421>/Constant1'
     *  Constant: '<S2421>/Constant2'
     *  Constant: '<S2422>/Constant1'
     *  Constant: '<S2422>/Constant2'
     *  Constant: '<S2423>/Constant1'
     *  Constant: '<S2423>/Constant2'
     *  DataStoreRead: '<S2418>/StatusByte_LF_WHL_HubDisConActCntrl'
     *  DataStoreRead: '<S2419>/StatusByte_LF_WHL_HubDisConActPosSnsrCktPerf'
     *  DataStoreRead: '<S2420>/StatusByte_LF_WHL_HubDisConActPosSnsr'
     *  DataStoreRead: '<S2421>/StatusByte_RF_WHL_HubDisConActCntrl'
     *  DataStoreRead: '<S2422>/StatusByte_RF_WHL_HubDisConActPosSnsrCktPerf'
     *  DataStoreRead: '<S2423>/StatusByte_RF_WHL_HubDisConActPosSnsr'
     *  Logic: '<S2260>/Logical1'
     *  Logic: '<S2260>/Logical10'
     *  Logic: '<S2260>/Logical5'
     *  Logic: '<S2418>/LogicalOperator'
     *  Logic: '<S2419>/LogicalOperator'
     *  Logic: '<S2420>/LogicalOperator'
     *  Logic: '<S2421>/LogicalOperator'
     *  Logic: '<S2422>/LogicalOperator'
     *  Logic: '<S2423>/LogicalOperator'
     *  RelationalOperator: '<S2260>/Comparison1'
     *  RelationalOperator: '<S2260>/Comparison2'
     *  RelationalOperator: '<S2418>/RelationalOperator1'
     *  RelationalOperator: '<S2418>/RelationalOperator2'
     *  RelationalOperator: '<S2419>/RelationalOperator1'
     *  RelationalOperator: '<S2419>/RelationalOperator2'
     *  RelationalOperator: '<S2420>/RelationalOperator1'
     *  RelationalOperator: '<S2420>/RelationalOperator2'
     *  RelationalOperator: '<S2421>/RelationalOperator1'
     *  RelationalOperator: '<S2421>/RelationalOperator2'
     *  RelationalOperator: '<S2422>/RelationalOperator1'
     *  RelationalOperator: '<S2422>/RelationalOperator2'
     *  RelationalOperator: '<S2423>/RelationalOperator1'
     *  RelationalOperator: '<S2423>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S2418>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S2418>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S2419>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S2419>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S2420>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S2420>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S2421>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S2421>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S2422>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S2422>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S2423>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S2423>/BitwiseOperator2'
     */
    if (((((rtb_TmpSignalConversionAtVeADIR || rtb_TmpSignalConversionAtVeAD_p) ||
           ((((((((((sint32)SRAR_ac_DW.StatusByte_RF_WHL_HubDisConActP) & 1) > 0)
                 && ((((uint32)SRAR_ac_DW.StatusByte_RF_WHL_HubDisConActP) & 64U)
                     == 0U)) || (((((sint32)
                    SRAR_ac_DW.StatusByte_RF_WHL_HubDisConAc_f) & 1) > 0) &&
                 ((((uint32)SRAR_ac_DW.StatusByte_RF_WHL_HubDisConAc_f) & 64U) ==
                  0U))) || (((((sint32)
                               SRAR_ac_DW.StatusByte_LF_WHL_HubDisConAc_e) & 1) >
                 0) && ((((uint32)SRAR_ac_DW.StatusByte_LF_WHL_HubDisConAc_e) &
                         64U) == 0U))) || (((((sint32)
                  SRAR_ac_DW.StatusByte_LF_WHL_HubDisConActP) & 1) > 0) &&
               ((((uint32)SRAR_ac_DW.StatusByte_LF_WHL_HubDisConActP) & 64U) ==
                0U))) || (((((sint32)SRAR_ac_DW.StatusByte_RF_WHL_HubDisConActC)
                            & 1) > 0) && ((((uint32)
                 SRAR_ac_DW.StatusByte_RF_WHL_HubDisConActC) & 64U) == 0U))) ||
            (((((sint32)SRAR_ac_DW.StatusByte_LF_WHL_HubDisConActC) & 1) > 0) &&
             ((((uint32)SRAR_ac_DW.StatusByte_LF_WHL_HubDisConActC) & 64U) == 0U))))
          || (CeADIR_e_BrokenClosed == ((uint32)rtb_TmpSignalConversionAtVeAD_l)))
         || (((uint32)rtb_TmpSignalConversionAtVeAD_l) == CeADIR_e_BrokenOpen)) ||
        (rtb_TmpSignalConversionAtVeAD_o != rtb_TmpSignalConversionAtVeA_ce))
    {
        rtb_Switch1_mu_0 = 536870912U;
    }
    else
    {
        rtb_Switch1_mu_0 = 0U;
    }

    /* End of Switch: '<S1951>/Switch1' */

    /* Switch: '<S1952>/Switch1' incorporates:
     *  Constant: '<S1375>/ConstantValue53'
     *  Constant: '<S1375>/ConstantValue54'
     */
    if (rtb_Logical6)
    {
        rtb_Switch1_f3 = 1073741824U;
    }
    else
    {
        rtb_Switch1_f3 = 0U;
    }

    /* End of Switch: '<S1952>/Switch1' */

    /* Switch: '<S1953>/Switch1' incorporates:
     *  Constant: '<S1375>/ConstantValue56'
     *  Constant: '<S1375>/ConstantValue57'
     *  Logic: '<S2260>/Logical4'
     */
    if (rtb_Switch1_oz && rtb_VeSRAR_b_WEDStuckOpen)
    {
        rtb_Switch1_a3 = 2147483648U;
    }
    else
    {
        rtb_Switch1_a3 = 0U;
    }

    /* End of Switch: '<S1953>/Switch1' */

    /* S-Function (sfix_bitop): '<S1375>/BitwiseLogicalOperator' incorporates:
     *  Logic: '<S1398>/AND'
     */
    rtb_Switch1_c = (((((((((((((((((((((((((((((uint32)(rtb_LogicalOperator_h ?
        1U : 0U)) | ((uint32)rtb_TmpSignalConversionAtVeOB_2)) | ((uint32)
        rtb_TmpSignalConversionAtVeOB_3)) | ((uint32)rtb_Switch1_fw)) | ((uint32)
        rtb_VeSRAR_b_HVOverVoltFailur_1)) | ((uint32)
        rtb_VeSRAR_b_HVOverVoltFailur_f)) | ((uint32)tmpRead_13)) | ((uint32)
        rtb_Switch1_h0)) | ((uint32)rtb_Comparison6_b)) | ((uint32)
        rtb_Switch1_mu)) | ((uint32)rtb_AND_cg)) | ((uint32)rtb_OR1_ot)) |
        ((uint32)rtb_LogicalOperator_cr)) | ((uint32)
        rtb_TmpSignalConversionAtVeOB_1)) | ((uint32)rtb_AND_d)) |
        rtb_VeSRAR_b_TCMLmpFlt2_tmp) | rtb_TmpSignalConversionAtVeEN_d) |
        rtb_Comparison1_ij) | rtb_VeSRAR_b_SpinUpFailed_0) |
        rtb_TmpSignalConversionAtVeBP_p) | rtb_Switch1_c) | rtb_Switch1_anw) |
                          rtb_Switch1_fxq) | BitwiseLogicalOperator_b) |
                        rtb_VeSRAR_b_AuxPumpFail_Inhi_0) |
                       rtb_VeSRAR_b_CKSFailed_0) | rtb_Switch1_mu_0) |
                     rtb_Switch1_f3) | rtb_Switch1_a3;

    /* Logic: '<S1529>/Logical18' incorporates:
     *  Constant: '<S1584>/Calib'
     *  Logic: '<S1529>/Logical19'
     */
    rtb_TmpSignalConversionAtVeADIR = !KeSRAR_b_P2EngOffON_LOC_Enable;

    /* Logic: '<S1529>/Logical17' incorporates:
     *  Constant: '<S1584>/Calib'
     *  Logic: '<S1529>/Logical6'
     *  Logic: '<S1529>/Logical7'
     */
    rtb_TmpSignalConversionAtVeAD_p = ((KeSRAR_b_P2EngOffON_LOC_Enable) &&
        (((rtb_Switch1_pz || (VeSRAC_b_ePT_BusOff)) ||
          (VeSRAC_b_ECMLoC_ePT_w_HCP)) || (VeSRAC_b_ECM_ePT_BusFail)));

    /* Selector: '<S1529>/Selector' incorporates:
     *  Constant: '<S1583>/Calib'
     *  DataTypeConversion: '<S1529>/DataTypeConversion'
     *  SignalConversion generated from: '<S2>/VeESSR_e_EngStartStopSt'
     */
    rtb_TmpSignalConversionAtVeA_ce = KaSRAR_b_AutoStartStSelect
        [(rtb_TmpSignalConversionAtVeES_d)];

    /* RelationalOperator: '<S1537>/Comparison1' incorporates:
     *  Constant: '<S1684>/Constant'
     */
    rtb_TmpSignalConversionAtVeAD_o = (((uint32)rtb_TmpSignalConversionAtVeES_d)
        == CeESSR_e_EngOff);

    /* RelationalOperator: '<S1532>/Comparison1' incorporates:
     *  Logic: '<S1532>/Logical1'
     */
    rtb_Comparison1_n4 = !VeSRAC_b_HCPLoc_CANC_TCM;

    /* UnitDelay: '<S1626>/UnitDelay' incorporates:
     *  Logic: '<S1532>/Logical3'
     */
    rtb_UnitDelay_lw = !VeSRAC_b_HCPLoc_ePT_TCM;

    /* Logic: '<S1532>/Logical4' incorporates:
     *  Logic: '<S253>/Logical7'
     *  Switch: '<S800>/Switch1'
     */
    rtb_TmpSignalConversionAtVePLTR = !rtb_Switch1_pz;

    /* Logic: '<S1532>/Logical5' */
    rtb_Logical5_oz = !rtb_Switch1_pe;

    /* Outputs for IfAction SubSystem: '<S1532>/IfActionSubsystem2' incorporates:
     *  ActionPort: '<S1608>/ActionPort'
     */
    /* If: '<S1532>/If' incorporates:
     *  DataTypeConversion: '<S1532>/DataTypeConversion'
     *  If: '<S1608>/If'
     *  Logic: '<S1532>/Logical'
     *  Logic: '<S1532>/Logical2'
     *  Logic: '<S1532>/Logical4'
     *  Logic: '<S1532>/Logical6'
     *  Logic: '<S1608>/Logical6'
     *  Logic: '<S1608>/Logical7'
     *  RelationalOperator: '<S1608>/Comparison2'
     */
    rtb_VeSRAR_b_MtrB_InvrtrFault_g = !rtb_TmpSignalConversionAtVeENGR;

    /* End of Outputs for SubSystem: '<S1532>/IfActionSubsystem2' */
    if ((((rtb_VeSRAR_b_MtrB_InvrtrFault_g && rtb_Comparison1_n4) &&
            rtb_UnitDelay_lw) && rtb_TmpSignalConversionAtVePLTR) &&
            rtb_Logical5_oz)
    {
        /* Outputs for IfAction SubSystem: '<S1532>/IfActionSubsystem' incorporates:
         *  ActionPort: '<S1606>/ActionPort'
         */
        /* Merge: '<S1532>/Merge' incorporates:
         *  Logic: '<S1611>/AND'
         */
        SRAR_ac_B.VeSRAR_b_LV12PwrFreeReq_PHEV = false;

        /* Merge: '<S1532>/Merge1' incorporates:
         *  Logic: '<S1610>/AND'
         */
        SRAR_ac_B.VeSRAR_b_TrqEnblReq_TCM_PHEV = rtb_TmpSignalConversionAtVeEN_b;

        /* Merge: '<S1532>/Merge3' incorporates:
         *  Constant: '<S1606>/ConstantValue'
         *  DataTypeConversion: '<S1532>/DataTypeConversion'
         *  Logic: '<S1606>/Logical1'
         *  Logic: '<S1606>/Logical5'
         *  RelationalOperator: '<S1606>/Comparison4'
         */
        VeSRAC_b_RPMLimInAccrtTrq = ((!rtb_TmpSignalConversionAtVeEN_b) &&
            (((sint32)((uint8)tmpRead_s)) == 3));

        /* Merge: '<S1532>/Merge2' incorporates:
         *  DataTypeConversion: '<S1532>/DataTypeConversion'
         *  Gain: '<S1612>/Gain'
         */
        SRAR_ac_B.VeSRAR_i_LHOM_Trans_PHEV = (uint8)tmpRead_s;

        /* Merge: '<S1532>/Merge4' incorporates:
         *  Constant: '<S1606>/FALSEConstant'
         *  SignalConversion generated from: '<S1606>/VeSRAC_b_Lv1PwrFreeAccrtTrq'
         */
        VeSRAC_b_Lv1PwrFreeAccrtTrq = false;

        /* Merge: '<S1532>/Merge5' incorporates:
         *  Constant: '<S1606>/FALSEConstant1'
         *  SignalConversion generated from: '<S1606>/VeSRAC_b_Lv2PwrFreeInAccrtTrq'
         */
        VeSRAC_b_Lv2PwrFreeInAccrtTrq = false;

        /* Merge: '<S1532>/Merge6' incorporates:
         *  Constant: '<S1606>/FALSEConstant2'
         *  SignalConversion generated from: '<S1606>/VeSRAC_b_Lv1PwrFreeInAccrtTrq'
         */
        VeSRAC_b_Lv1PwrFreeInAccrtTrq = false;

        /* End of Outputs for SubSystem: '<S1532>/IfActionSubsystem' */
    }
    else if ((((rtb_TmpSignalConversionAtVeENGR && rtb_Comparison1_n4) &&
               rtb_UnitDelay_lw) && rtb_TmpSignalConversionAtVePLTR) &&
             rtb_Logical5_oz)
    {
        /* Outputs for IfAction SubSystem: '<S1532>/IfActionSubsystem1' incorporates:
         *  ActionPort: '<S1607>/ActionPort'
         */
        /* If: '<S1607>/If' incorporates:
         *  Constant: '<S1607>/ConstantValue'
         *  Constant: '<S1607>/ConstantValue1'
         *  DataTypeConversion: '<S1532>/DataTypeConversion'
         *  Logic: '<S1607>/Logical1'
         *  Logic: '<S1607>/Logical2'
         *  Logic: '<S1607>/Logical5'
         *  RelationalOperator: '<S1607>/Comparison1'
         *  RelationalOperator: '<S1607>/Comparison4'
         */
        if ((((sint32)((uint8)tmpRead_s)) == 2) &&
                rtb_TmpSignalConversionAtVeEN_b)
        {
            /* Outputs for IfAction SubSystem: '<S1607>/IfActionSubsystem1' incorporates:
             *  ActionPort: '<S1613>/ActionPort'
             */
            /* Merge: '<S1532>/Merge' incorporates:
             *  Logic: '<S1615>/AND'
             */
            SRAR_ac_B.VeSRAR_b_LV12PwrFreeReq_PHEV = true;

            /* Merge: '<S1532>/Merge1' incorporates:
             *  Constant: '<S1616>/Calib'
             *  SignalConversion generated from: '<S1613>/TrqEnblRq_TCM_PHEV'
             */
            SRAR_ac_B.VeSRAR_b_TrqEnblReq_TCM_PHEV =
                KeSRAR_b_Lv1PwrfreeAcrtTrq_TrqEnblRq_TCM;

            /* Merge: '<S1532>/Merge2' incorporates:
             *  Constant: '<S1617>/Calib'
             *  SignalConversion generated from: '<S1613>/LHOM_Trans_PHEV'
             */
            SRAR_ac_B.VeSRAR_i_LHOM_Trans_PHEV =
                KeSRAR_i_Lv1PwrfreeAcrtTrqLHOM_Trans;

            /* Merge: '<S1532>/Merge3' incorporates:
             *  Constant: '<S1613>/FALSEConstant3'
             *  SignalConversion generated from: '<S1613>/RPMLimInAccrtTrq'
             */
            VeSRAC_b_RPMLimInAccrtTrq = false;

            /* Merge: '<S1532>/Merge4' incorporates:
             *  Constant: '<S1613>/TRUEConstant1'
             *  SignalConversion generated from: '<S1613>/VeSRAC_b_Lv1PwrFreeAccrtTrq'
             */
            VeSRAC_b_Lv1PwrFreeAccrtTrq = true;

            /* Merge: '<S1532>/Merge5' incorporates:
             *  Constant: '<S1613>/FALSEConstant1'
             *  SignalConversion generated from: '<S1613>/VeSRAC_b_Lv2PwrFreeInAccrtTrq'
             */
            VeSRAC_b_Lv2PwrFreeInAccrtTrq = false;

            /* Merge: '<S1532>/Merge6' incorporates:
             *  Constant: '<S1613>/FALSEConstant2'
             *  SignalConversion generated from: '<S1613>/VeSRAC_b_Lv1PwrFreeInAccrtTrq'
             */
            VeSRAC_b_Lv1PwrFreeInAccrtTrq = false;

            /* End of Outputs for SubSystem: '<S1607>/IfActionSubsystem1' */
        }
        else
        {
            if ((((sint32)((uint8)tmpRead_s)) == 3) &&
                    (!rtb_TmpSignalConversionAtVeEN_b))
            {
                /* Outputs for IfAction SubSystem: '<S1607>/IfActionSubsystem2' incorporates:
                 *  ActionPort: '<S1614>/ActionPort'
                 */
                /* Merge: '<S1532>/Merge' incorporates:
                 *  Logic: '<S1619>/AND'
                 */
                SRAR_ac_B.VeSRAR_b_LV12PwrFreeReq_PHEV = true;

                /* Merge: '<S1532>/Merge1' incorporates:
                 *  Logic: '<S1618>/AND'
                 */
                SRAR_ac_B.VeSRAR_b_TrqEnblReq_TCM_PHEV = false;

                /* Merge: '<S1532>/Merge2' incorporates:
                 *  Gain: '<S1621>/Gain'
                 */
                SRAR_ac_B.VeSRAR_i_LHOM_Trans_PHEV = 3U;

                /* Merge: '<S1532>/Merge3' incorporates:
                 *  Constant: '<S1614>/FALSEConstant3'
                 *  SignalConversion generated from: '<S1614>/RPMLimInAccrtTrq'
                 */
                VeSRAC_b_RPMLimInAccrtTrq = false;

                /* Merge: '<S1532>/Merge4' incorporates:
                 *  Constant: '<S1614>/FALSEConstant'
                 *  SignalConversion generated from: '<S1614>/VeSRAC_b_Lv1PwrFreeAccrtTrq'
                 */
                VeSRAC_b_Lv1PwrFreeAccrtTrq = false;

                /* Merge: '<S1532>/Merge5' incorporates:
                 *  Logic: '<S1620>/AND'
                 */
                VeSRAC_b_Lv2PwrFreeInAccrtTrq = rtb_TmpSignalConversionAtVeDTRR;

                /* Merge: '<S1532>/Merge6' incorporates:
                 *  Logic: '<S1614>/Logical5'
                 */
                VeSRAC_b_Lv1PwrFreeInAccrtTrq = !rtb_TmpSignalConversionAtVeDTRR;

                /* End of Outputs for SubSystem: '<S1607>/IfActionSubsystem2' */
            }
        }

        /* End of If: '<S1607>/If' */
        /* End of Outputs for SubSystem: '<S1532>/IfActionSubsystem1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S1532>/IfActionSubsystem2' incorporates:
         *  ActionPort: '<S1608>/ActionPort'
         */
        if ((rtb_VeSRAR_b_MtrB_InvrtrFault_g && rtb_TmpSignalConversionAtVeEN_b)
            && (((sint32)((uint8)tmpRead_s)) == 0))
        {
            /* Outputs for IfAction SubSystem: '<S1608>/IfActionSubsystem1' incorporates:
             *  ActionPort: '<S1622>/ActionPort'
             */
            /* If: '<S1608>/If' incorporates:
             *  Constant: '<S1622>/ConstantValue2'
             *  Constant: '<S1622>/FALSEConstant5'
             *  Constant: '<S1622>/TRUEConstant2'
             *  Merge: '<S1532>/Merge'
             *  Merge: '<S1532>/Merge1'
             *  Merge: '<S1532>/Merge2'
             *  SignalConversion generated from: '<S1622>/LHOM_Trans_PHEV'
             *  SignalConversion generated from: '<S1622>/LV12PwrFreeReq_PHEV'
             *  SignalConversion generated from: '<S1622>/TrqEnblRq_TCM_PHEV'
             */
            SRAR_ac_B.VeSRAR_b_LV12PwrFreeReq_PHEV = false;
            SRAR_ac_B.VeSRAR_b_TrqEnblReq_TCM_PHEV = true;
            SRAR_ac_B.VeSRAR_i_LHOM_Trans_PHEV = 0U;

            /* End of Outputs for SubSystem: '<S1608>/IfActionSubsystem1' */
        }

        /* Merge: '<S1532>/Merge3' incorporates:
         *  Constant: '<S1608>/FALSEConstant3'
         *  SignalConversion generated from: '<S1608>/RPMLimInAccrtTrq'
         */
        VeSRAC_b_RPMLimInAccrtTrq = false;

        /* Merge: '<S1532>/Merge4' incorporates:
         *  Constant: '<S1608>/FALSEConstant4'
         *  SignalConversion generated from: '<S1608>/VeSRAC_b_Lv1PwrFreeAccrtTrq'
         */
        VeSRAC_b_Lv1PwrFreeAccrtTrq = false;

        /* Merge: '<S1532>/Merge5' incorporates:
         *  Constant: '<S1608>/FALSEConstant1'
         *  SignalConversion generated from: '<S1608>/VeSRAC_b_Lv2PwrFreeInAccrtTrq'
         */
        VeSRAC_b_Lv2PwrFreeInAccrtTrq = false;

        /* Merge: '<S1532>/Merge6' incorporates:
         *  Constant: '<S1608>/FALSEConstant2'
         *  SignalConversion generated from: '<S1608>/VeSRAC_b_Lv1PwrFreeInAccrtTrq'
         */
        VeSRAC_b_Lv1PwrFreeInAccrtTrq = false;

        /* End of Outputs for SubSystem: '<S1532>/IfActionSubsystem2' */
    }

    /* End of If: '<S1532>/If' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeBRKR_b_AeCoastReady' */
    (void)Rte_Read_VeBRKR_b_AeCoastReady_Value(&rtb_Comparison2_b);

    /* Inport: '<Root>/VeTRNR_e_C2Stat' */
    (void)Rte_Read_VeTRNR_e_C2Stat_Value(&tmpRead_u);

    /* Inport: '<Root>/VeHSER_b_GRMActive' */
    (void)Rte_Read_VeHSER_b_GRMActive_Value(&rtb_Logical1_cl);

    /* Inport: '<Root>/VeAPSR_e_Lv1PVMode' */
    (void)Rte_Read_VeAPSR_e_Lv1PVMode_Value(&tmpRead_t);

    /* Logic: '<S2196>/AND' incorporates:
     *  Inport: '<Root>/VeHTRR_b_Htr3Cntctr_StckClsdOvrTmp_Flg'
     */
    (void)Rte_Read_VeHTRR_b_Htr3Cntctr_StckClsdOvrTmp_Flg_Value
        ((&(VeSRAC_b_HeatingElementStuckClsd)));

    /* Logic: '<S2194>/AND' incorporates:
     *  Inport: '<Root>/VeTHMR_b_ThermalHybAltMode_Rq'
     */
    (void)Rte_Read_VeTHMR_b_ThermalHybAltMode_Rq_Value
        ((&(VeSRAC_b_ThermalHybAltMode_Rq)));

    /* Inport: '<Root>/VeCSLR_b_NC1_FA' */
    (void)Rte_Read_VeCSLR_b_NC1_FA_Value(&rtb_Comparison2_op);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRAR_MedTEB'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* RelationalOperator: '<S1532>/Comparison1' incorporates:
     *  Constant: '<S1605>/Constant'
     */
    rtb_Comparison1_n4 = (((uint32)rtb_TmpSignalConversionAtVeHP_f) ==
                          CeHPMR_e_Alternator);

    /* UnitDelay: '<S1626>/UnitDelay' incorporates:
     *  Logic: '<S1532>/Logical11'
     */
    rtb_UnitDelay_lw = !rtb_Comparison1_n4;

    /* Logic: '<S1532>/Logical12' incorporates:
     *  Logic: '<S1532>/Logical7'
     *  Logic: '<S1532>/Logical8'
     *  Logic: '<S1532>/Logical9'
     */
    VeSRAC_b_ECMLimp_Inhibit_M2G2 = ((((VeSRAC_b_Lv1PwrFreeAccrtTrq) &&
        rtb_UnitDelay_lw) || ((VeSRAC_b_Lv2PwrFreeInAccrtTrq) &&
        rtb_UnitDelay_lw)) || ((VeSRAC_b_Lv1PwrFreeInAccrtTrq) &&
        rtb_UnitDelay_lw));

    /* Logic: '<S1532>/Logical10' */
    VeSRAC_b_ECMLimp_LV2PwrFreeKeepEngRun = ((VeSRAC_b_Lv2PwrFreeInAccrtTrq) &&
        rtb_AND_owg);

    /* Outputs for Atomic SubSystem: '<S1533>/SignalLatchOnWithReset1' */
    /* Logic: '<S1627>/OR1' incorporates:
     *  Logic: '<S1627>/OR'
     *  UnitDelay: '<S1627>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeDTRR = (rtb_TmpSignalConversionAtVeEN_c ||
        (rtb_Comparison1_ij_tmp && (SRAR_ac_DW.UnitDelay_DSTATE_fm)));

    /* Update for UnitDelay: '<S1627>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_fm = rtb_TmpSignalConversionAtVeDTRR;

    /* End of Outputs for SubSystem: '<S1533>/SignalLatchOnWithReset1' */

    /* Outputs for Atomic SubSystem: '<S1533>/SignalLatchOnWithReset' */
    /* Logic: '<S1626>/OR1' incorporates:
     *  Logic: '<S1626>/NOT'
     *  Logic: '<S1626>/OR'
     *  UnitDelay: '<S1626>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeEN_c = (rtb_TmpSignalConversionAtVeEN_c ||
        ((!rtb_TmpSignalConversionAtVeAD_o) && (SRAR_ac_DW.UnitDelay_DSTATE_hf)));

    /* Update for UnitDelay: '<S1626>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_hf = rtb_TmpSignalConversionAtVeEN_c;

    /* End of Outputs for SubSystem: '<S1533>/SignalLatchOnWithReset' */

    /* RelationalOperator: '<S1391>/Comparison2' incorporates:
     *  Constant: '<S2254>/Calib'
     */
    VeSRAC_b_AeCoastReady = (rtb_Comparison2_b == KeSRAR_b_AeCoastReady);

    /* Switch: '<S1987>/Switch1' */
    if (rtb_UnitDelay_b2)
    {
        /* Switch: '<S2051>/Switch1' incorporates:
         *  Constant: '<S1376>/ConstantValue60'
         */
        rtb_Switch1_anw = 524288U;
    }
    else
    {
        /* Switch: '<S2051>/Switch1' incorporates:
         *  Constant: '<S1376>/ConstantValue61'
         */
        rtb_Switch1_anw = 0U;
    }

    /* End of Switch: '<S1987>/Switch1' */

    /* UnitDelay: '<S718>/UnitDelay' incorporates:
     *  Constant: '<S2257>/ConstantValue2'
     *  RelationalOperator: '<S2257>/Comparison2'
     */
    rtb_UnitDelay_b2 = (rtb_TmpSignalConversionAtVeT_hz == 4);

    /* Logic: '<S2257>/Logical' incorporates:
     *  Constant: '<S2257>/ConstantValue3'
     *  RelationalOperator: '<S2257>/Comparison3'
     */
    VeSRAC_b_GRMActive = ((rtb_TmpSignalConversionAtVeT_hz == 0) &&
                          rtb_Logical1_cl);

    /* RelationalOperator: '<S2250>/Comparison3' incorporates:
     *  Constant: '<S2250>/ConstantValue'
     *  DataTypeConversion: '<S2250>/DataTypeConversion'
     *  Inport: '<Root>/VeAPSR_e_Lv1PVMode'
     */
    VeSRAC_b_PedalFailed = (((sint32)tmpRead_t) != 1);

    /* Switch: '<S1970>/Switch1' incorporates:
     *  Constant: '<S1376>/ConstantValue2'
     *  Constant: '<S1376>/ConstantValue3'
     *  Logic: '<S1529>/Logical16'
     *  Logic: '<S1529>/Logical3'
     *  Logic: '<S1529>/Logical7'
     */
    if (((rtb_Switch1_pz && rtb_TmpSignalConversionAtVeAD_o) &&
            rtb_TmpSignalConversionAtVeADIR) || (rtb_TmpSignalConversionAtVeAD_p
         && rtb_TmpSignalConversionAtVeA_ce))
    {
        rtb_VeSRAR_b_HVOverVoltFailur_f = 2;
    }
    else
    {
        rtb_VeSRAR_b_HVOverVoltFailur_f = 0;
    }

    /* End of Switch: '<S1970>/Switch1' */

    /* Switch: '<S1981>/Switch1' incorporates:
     *  Constant: '<S1376>/ConstantValue4'
     *  Constant: '<S1376>/ConstantValue5'
     *  Logic: '<S1529>/Logical2'
     */
    if (rtb_AND_owg && rtb_Switch1_pe)
    {
        rtb_AND_d = 4;
    }
    else
    {
        rtb_AND_d = 0;
    }

    /* End of Switch: '<S1981>/Switch1' */

    /* Switch: '<S1992>/Switch1' incorporates:
     *  Constant: '<S1376>/ConstantValue6'
     *  Constant: '<S1376>/ConstantValue7'
     *  Logic: '<S1529>/Logical4'
     */
    if (rtb_TmpSignalConversionAtVeAD_o && rtb_Switch1_pe)
    {
        tmpRead_13 = 8;
    }
    else
    {
        tmpRead_13 = 0;
    }

    /* End of Switch: '<S1992>/Switch1' */

    /* Switch: '<S1995>/Switch1' incorporates:
     *  Constant: '<S1376>/ConstantValue8'
     *  Constant: '<S1376>/ConstantValue9'
     *  Constant: '<S1551>/Calib'
     *  Constant: '<S1552>/Calib'
     *  Constant: '<S1562>/ConstantValue3'
     *  Constant: '<S1563>/ConstantValue3'
     *  Logic: '<S1528>/Logical5'
     *  RelationalOperator: '<S1562>/Comparison3'
     *  RelationalOperator: '<S1563>/Comparison3'
     *  S-Function (sfix_bitop): '<S1562>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S1563>/BitwiseOperator2'
     */
    if (((rtb_TmpSignalConversionAtVeESSR & KeSRAR_g_AutoStrtFailSelect) >= 1U) &&
        ((rtb_TmpSignalConversionAtVeESSR & KeSRAR_g_BumpStrtFailSelect) >= 1U))
    {
        rtb_Comparison6_b = 16;
    }
    else
    {
        rtb_Comparison6_b = 0;
    }

    /* End of Switch: '<S1995>/Switch1' */

    /* Switch: '<S1996>/Switch1' incorporates:
     *  Constant: '<S1376>/ConstantValue10'
     *  Constant: '<S1376>/ConstantValue11'
     */
    if (VeSRAC_b_RPMLimInAccrtTrq)
    {
        rtb_Switch1_fw = 32;
    }
    else
    {
        rtb_Switch1_fw = 0;
    }

    /* End of Switch: '<S1996>/Switch1' */

    /* Switch: '<S1997>/Switch1' incorporates:
     *  Constant: '<S1376>/ConstantValue12'
     *  Constant: '<S1376>/ConstantValue13'
     */
    if (VeSRAC_b_Lv1PwrFreeAccrtTrq)
    {
        rtb_Switch1_h0 = 64;
    }
    else
    {
        rtb_Switch1_h0 = 0;
    }

    /* End of Switch: '<S1997>/Switch1' */

    /* Switch: '<S1998>/Switch1' incorporates:
     *  Constant: '<S1376>/ConstantValue14'
     *  Constant: '<S1376>/ConstantValue15'
     */
    if (VeSRAC_b_Lv2PwrFreeInAccrtTrq)
    {
        rtb_Switch1_mu = 128;
    }
    else
    {
        rtb_Switch1_mu = 0;
    }

    /* End of Switch: '<S1998>/Switch1' */

    /* Switch: '<S1999>/Switch1' incorporates:
     *  Constant: '<S1376>/ConstantValue16'
     *  Constant: '<S1376>/ConstantValue17'
     */
    if (VeSRAC_b_Lv1PwrFreeInAccrtTrq)
    {
        rtb_AND_cg = 256;
    }
    else
    {
        rtb_AND_cg = 0;
    }

    /* End of Switch: '<S1999>/Switch1' */

    /* Switch: '<S2000>/Switch1' incorporates:
     *  Constant: '<S1376>/ConstantValue18'
     *  Constant: '<S1376>/ConstantValue19'
     */
    if (VeSRAC_b_ECMLimp_Inhibit_M2G2)
    {
        rtb_OR1_ot = 512;
    }
    else
    {
        rtb_OR1_ot = 0;
    }

    /* End of Switch: '<S2000>/Switch1' */

    /* Switch: '<S1971>/Switch1' incorporates:
     *  Constant: '<S1376>/ConstantValue20'
     *  Constant: '<S1376>/ConstantValue21'
     */
    if (VeSRAC_b_ECMLimp_LV2PwrFreeKeepEngRun)
    {
        rtb_LogicalOperator_cr = 1024;
    }
    else
    {
        rtb_LogicalOperator_cr = 0;
    }

    /* End of Switch: '<S1971>/Switch1' */

    /* Switch: '<S1972>/Switch1' incorporates:
     *  Constant: '<S1376>/ConstantValue22'
     *  Constant: '<S1376>/ConstantValue23'
     */
    if (rtb_TmpSignalConversionAtVeDTRR)
    {
        rtb_TmpSignalConversionAtVeOB_3 = 2048;
    }
    else
    {
        rtb_TmpSignalConversionAtVeOB_3 = 0;
    }

    /* End of Switch: '<S1972>/Switch1' */

    /* Switch: '<S1973>/Switch1' incorporates:
     *  Constant: '<S1376>/ConstantValue24'
     *  Constant: '<S1376>/ConstantValue25'
     */
    if (rtb_TmpSignalConversionAtVeEN_c)
    {
        rtb_AND_ll = 4096;
    }
    else
    {
        rtb_AND_ll = 0;
    }

    /* End of Switch: '<S1973>/Switch1' */

    /* Switch: '<S1974>/Switch1' incorporates:
     *  Constant: '<S1376>/ConstantValue26'
     *  Constant: '<S1376>/ConstantValue27'
     */
    if (VeSRAC_b_AeCoastReady)
    {
        rtb_TmpSignalConversionAtVeOB_1 = 8192;
    }
    else
    {
        rtb_TmpSignalConversionAtVeOB_1 = 0;
    }

    /* End of Switch: '<S1974>/Switch1' */

    /* Switch: '<S1975>/Switch1' incorporates:
     *  Constant: '<S1376>/ConstantValue28'
     *  Constant: '<S1376>/ConstantValue29'
     */
    if (rtb_Merge1_i)
    {
        rtb_TmpSignalConversionAtVeOB_2 = 16384;
    }
    else
    {
        rtb_TmpSignalConversionAtVeOB_2 = 0;
    }

    /* End of Switch: '<S1975>/Switch1' */

    /* Switch: '<S1976>/Switch1' incorporates:
     *  Constant: '<S1376>/ConstantValue30'
     *  Constant: '<S1376>/ConstantValue31'
     */
    if (rtb_UnitDelay_eb)
    {
        rtb_VeSRAR_b_HVOverVoltFailur_1 = 32768;
    }
    else
    {
        rtb_VeSRAR_b_HVOverVoltFailur_1 = 0;
    }

    /* End of Switch: '<S1976>/Switch1' */

    /* Switch: '<S1977>/Switch1' incorporates:
     *  Constant: '<S1376>/ConstantValue32'
     *  Constant: '<S1376>/ConstantValue33'
     */
    if (VeSRAC_b_P2SpdSignlFailur)
    {
        rtb_VeSRAR_b_TCMLmpFlt2_tmp = 65536U;
    }
    else
    {
        rtb_VeSRAR_b_TCMLmpFlt2_tmp = 0U;
    }

    /* End of Switch: '<S1977>/Switch1' */

    /* Switch: '<S1978>/Switch1' incorporates:
     *  Constant: '<S1376>/ConstantValue44'
     *  Constant: '<S1376>/ConstantValue55'
     */
    if (rtb_Logical8_dq)
    {
        rtb_Switch1_f3 = 131072U;
    }
    else
    {
        rtb_Switch1_f3 = 0U;
    }

    /* End of Switch: '<S1978>/Switch1' */

    /* Switch: '<S1986>/Switch1' incorporates:
     *  Constant: '<S1376>/ConstantValue58'
     *  Constant: '<S1376>/ConstantValue59'
     */
    if (rtb_Switch5_f)
    {
        rtb_Switch1_a3 = 262144U;
    }
    else
    {
        rtb_Switch1_a3 = 0U;
    }

    /* End of Switch: '<S1986>/Switch1' */

    /* Switch: '<S1988>/Switch1' incorporates:
     *  Constant: '<S1376>/ConstantValue62'
     *  Constant: '<S1376>/ConstantValue63'
     */
    if (rtb_Comparison2_op)
    {
        rtb_Switch1_fxq = 1048576U;
    }
    else
    {
        rtb_Switch1_fxq = 0U;
    }

    /* End of Switch: '<S1988>/Switch1' */

    /* Switch: '<S1989>/Switch1' incorporates:
     *  Constant: '<S1376>/ConstantValue34'
     *  Constant: '<S1376>/ConstantValue35'
     *  Constant: '<S2257>/ConstantValue'
     *  RelationalOperator: '<S2257>/Comparison4'
     */
    if (rtb_TmpSignalConversionAtVeT_hz == 2)
    {
        BitwiseLogicalOperator_b = 2097152U;
    }
    else
    {
        BitwiseLogicalOperator_b = 0U;
    }

    /* End of Switch: '<S1989>/Switch1' */

    /* Switch: '<S1990>/Switch1' incorporates:
     *  Constant: '<S1376>/ConstantValue36'
     *  Constant: '<S1376>/ConstantValue37'
     *  Constant: '<S2257>/ConstantValue1'
     *  RelationalOperator: '<S2257>/Comparison1'
     */
    if (rtb_TmpSignalConversionAtVeT_hz == 3)
    {
        rtb_Switch1_mu_0 = 4194304U;
    }
    else
    {
        rtb_Switch1_mu_0 = 0U;
    }

    /* End of Switch: '<S1990>/Switch1' */

    /* Switch: '<S1991>/Switch1' incorporates:
     *  Constant: '<S1376>/ConstantValue38'
     *  Constant: '<S1376>/ConstantValue39'
     */
    if (rtb_UnitDelay_b2)
    {
        rtb_VeSRAR_b_PPCTIS_ReducePer_0 = 8388608U;
    }
    else
    {
        rtb_VeSRAR_b_PPCTIS_ReducePer_0 = 0U;
    }

    /* End of Switch: '<S1991>/Switch1' */

    /* Switch: '<S1993>/Switch1' incorporates:
     *  Constant: '<S1376>/ConstantValue40'
     *  Constant: '<S1376>/ConstantValue41'
     */
    if (rtb_UnitDelay_fh)
    {
        rtb_Comparison3_ou = 16777216U;
    }
    else
    {
        rtb_Comparison3_ou = 0U;
    }

    /* End of Switch: '<S1993>/Switch1' */

    /* Switch: '<S1994>/Switch1' incorporates:
     *  Constant: '<S1376>/ConstantValue42'
     *  Constant: '<S1376>/ConstantValue43'
     */
    if (VeSRAC_b_IAENotClose_ABSImpndActvl)
    {
        rtb_TmpSignalConversionAtVeEN_d = 33554432U;
    }
    else
    {
        rtb_TmpSignalConversionAtVeEN_d = 0U;
    }

    /* End of Switch: '<S1994>/Switch1' */

    /* Switch: '<S1979>/Switch1' incorporates:
     *  Constant: '<S1376>/ConstantValue45'
     *  Constant: '<S1376>/ConstantValue46'
     */
    if (VeSRAC_b_Enpg4_8_ABSImpndActvl)
    {
        rtb_Comparison1_ij = 67108864U;
    }
    else
    {
        rtb_Comparison1_ij = 0U;
    }

    /* End of Switch: '<S1979>/Switch1' */

    /* Switch: '<S1980>/Switch1' incorporates:
     *  Constant: '<S1376>/ConstantValue47'
     *  Constant: '<S1376>/ConstantValue48'
     */
    if (VeSRAC_b_GRMActive)
    {
        rtb_VeSRAR_b_SpinUpFailed_0 = 134217728U;
    }
    else
    {
        rtb_VeSRAR_b_SpinUpFailed_0 = 0U;
    }

    /* End of Switch: '<S1980>/Switch1' */

    /* Switch: '<S1982>/Switch1' incorporates:
     *  Constant: '<S1376>/ConstantValue49'
     *  Constant: '<S1376>/ConstantValue50'
     */
    if (VeSRAC_b_PedalFailed)
    {
        rtb_TmpSignalConversionAtVeBP_p = 268435456U;
    }
    else
    {
        rtb_TmpSignalConversionAtVeBP_p = 0U;
    }

    /* End of Switch: '<S1982>/Switch1' */

    /* Switch: '<S1983>/Switch1' incorporates:
     *  Constant: '<S1376>/ConstantValue51'
     *  Constant: '<S1376>/ConstantValue52'
     */
    if (VeSRAC_b_ThermalHybAltMode_Rq)
    {
        rtb_VeSRAR_b_AuxPumpFail_Inhi_0 = 536870912U;
    }
    else
    {
        rtb_VeSRAR_b_AuxPumpFail_Inhi_0 = 0U;
    }

    /* End of Switch: '<S1983>/Switch1' */

    /* Switch: '<S1984>/Switch1' incorporates:
     *  Constant: '<S1376>/ConstantValue53'
     *  Constant: '<S1376>/ConstantValue54'
     */
    if (VeSRAC_b_HeatingElementStuckClsd)
    {
        rtb_VeSRAR_b_CKSFailed_0 = 1073741824U;
    }
    else
    {
        rtb_VeSRAR_b_CKSFailed_0 = 0U;
    }

    /* End of Switch: '<S1984>/Switch1' */

    /* Switch: '<S1985>/Switch1' incorporates:
     *  Constant: '<S1376>/ConstantValue56'
     *  Constant: '<S1376>/ConstantValue57'
     *  Constant: '<S2344>/Constant'
     *  Constant: '<S2345>/Constant'
     *  Constant: '<S2348>/Calib'
     *  Inport: '<Root>/VeTRNR_e_C2Stat'
     *  Logic: '<S2328>/Logical1'
     *  Logic: '<S2328>/Logical3'
     *  RelationalOperator: '<S2328>/Comparison1'
     *  RelationalOperator: '<S2328>/Comparison2'
     */
    if ((((uint32)rtb_TmpSignalConversionAtVeT_nz) == CeTINR_e_LimpConflctInfo) ||
        ((((uint32)tmpRead_u) == CeHCCR_e_ClInvalid) && (KeSRAR_b_CInvalidDsbl)))
    {
        rtb_TmpSignalConversionAtVeTI_o = 2147483648U;
    }
    else
    {
        rtb_TmpSignalConversionAtVeTI_o = 0U;
    }

    /* End of Switch: '<S1985>/Switch1' */

    /* S-Function (sfix_bitop): '<S1376>/BitwiseLogicalOperator' incorporates:
     *  Constant: '<S1583>/Calib'
     *  Logic: '<S1529>/Logical1'
     *  Logic: '<S1529>/Logical14'
     *  Logic: '<S1529>/Logical15'
     *  Logic: '<S1529>/Logical17'
     *  Logic: '<S1529>/Logical18'
     *  Selector: '<S1529>/Selector'
     */
    rtb_Switch1_fxq = ((((((((((((((((((((((((((((((((uint32)((((rtb_Switch1_pz &&
        rtb_AND_owg) && rtb_TmpSignalConversionAtVeADIR) ||
        (rtb_TmpSignalConversionAtVeAD_p && (!rtb_TmpSignalConversionAtVeA_ce)))
        ? 1 : 0)) | ((uint32)rtb_VeSRAR_b_HVOverVoltFailur_f)) | ((uint32)
        rtb_AND_d)) | ((uint32)tmpRead_13)) | ((uint32)rtb_Comparison6_b)) |
        ((uint32)rtb_Switch1_fw)) | ((uint32)rtb_Switch1_h0)) | ((uint32)
        rtb_Switch1_mu)) | ((uint32)rtb_AND_cg)) | ((uint32)rtb_OR1_ot)) |
        ((uint32)rtb_LogicalOperator_cr)) | ((uint32)
        rtb_TmpSignalConversionAtVeOB_3)) | ((uint32)rtb_AND_ll)) | ((uint32)
        rtb_TmpSignalConversionAtVeOB_1)) | ((uint32)
        rtb_TmpSignalConversionAtVeOB_2)) | ((uint32)
        rtb_VeSRAR_b_HVOverVoltFailur_1)) | rtb_VeSRAR_b_TCMLmpFlt2_tmp) |
        rtb_Switch1_f3) | rtb_Switch1_a3) | rtb_Switch1_anw) | rtb_Switch1_fxq) |
        BitwiseLogicalOperator_b) | rtb_Switch1_mu_0) |
        rtb_VeSRAR_b_PPCTIS_ReducePer_0) | rtb_Comparison3_ou) |
                            rtb_TmpSignalConversionAtVeEN_d) |
                           rtb_Comparison1_ij) | rtb_VeSRAR_b_SpinUpFailed_0) |
                         rtb_TmpSignalConversionAtVeBP_p) |
                        rtb_VeSRAR_b_AuxPumpFail_Inhi_0) |
                       rtb_VeSRAR_b_CKSFailed_0) |
        rtb_TmpSignalConversionAtVeTI_o;

    /* Logic: '<S2249>/Logical13' incorporates:
     *  Constant: '<S2261>/Constant'
     *  RelationalOperator: '<S2249>/Comparison1'
     */
    VeSRAC_b_TCMLoC_C1CAN_w_HCP = ((((uint32)rtb_TmpSignalConversionAtVeTI_j) ==
        CeTINR_e_LoC_HCP_TCM_C1) || rtb_Comparison3_bq);

    /* Logic: '<S1529>/Logical11' incorporates:
     *  Constant: '<S1571>/Constant'
     *  RelationalOperator: '<S1529>/Comparison6'
     */
    VeSRAC_b_ECMLoC_ePT_w_ECM = (rtb_Comparison7_o5 || (((uint32)
        rtb_TmpSignalConversionAtVeEN_k) == CeENGR_e_LoC_TCM_ECM_ePT));

    /* Switch: '<S2294>/Switch1' incorporates:
     *  Constant: '<S2249>/Constant5'
     *  Constant: '<S2278>/Constant1'
     *  Constant: '<S2278>/Constant2'
     *  Constant: '<S2279>/Constant1'
     *  Constant: '<S2279>/Constant2'
     *  Constant: '<S2285>/Constant1'
     *  Constant: '<S2285>/Constant2'
     *  Constant: '<S2286>/Constant1'
     *  Constant: '<S2286>/Constant2'
     *  DataStoreRead: '<S2278>/StatusByte_InvData_ESM_BusB'
     *  DataStoreRead: '<S2279>/StatusByte_InvData_ESM'
     *  DataStoreRead: '<S2285>/StatusByte_LostCommESM_BusB'
     *  DataStoreRead: '<S2286>/StatusByte_LostCommISM'
     *  Logic: '<S2249>/Logical7'
     *  Logic: '<S2249>/Logical8'
     *  Logic: '<S2249>/Logical9'
     *  Logic: '<S2278>/LogicalOperator'
     *  Logic: '<S2279>/LogicalOperator'
     *  Logic: '<S2285>/LogicalOperator'
     *  Logic: '<S2286>/LogicalOperator'
     *  RelationalOperator: '<S2278>/RelationalOperator1'
     *  RelationalOperator: '<S2278>/RelationalOperator2'
     *  RelationalOperator: '<S2279>/RelationalOperator1'
     *  RelationalOperator: '<S2279>/RelationalOperator2'
     *  RelationalOperator: '<S2285>/RelationalOperator1'
     *  RelationalOperator: '<S2285>/RelationalOperator2'
     *  RelationalOperator: '<S2286>/RelationalOperator1'
     *  RelationalOperator: '<S2286>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S2278>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S2278>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S2279>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S2279>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S2285>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S2285>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S2286>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S2286>/BitwiseOperator2'
     *  Switch: '<S2293>/Switch1'
     */
    if (rtb_Switch1_ajp)
    {
        /* Switch: '<S2294>/Switch1' incorporates:
         *  Constant: '<S2276>/Constant1'
         *  Constant: '<S2276>/Constant2'
         *  Constant: '<S2277>/Constant1'
         *  Constant: '<S2277>/Constant2'
         *  Constant: '<S2284>/Constant1'
         *  Constant: '<S2284>/Constant2'
         *  Constant: '<S2298>/Calib'
         *  DataStoreRead: '<S2276>/StatusByte_InvData_BCM'
         *  DataStoreRead: '<S2277>/StatusByte_InvData_CANC2_BCM'
         *  DataStoreRead: '<S2284>/StatusByte_LostCommBCM'
         *  Logic: '<S2249>/Logical18'
         *  Logic: '<S2249>/Logical5'
         *  Logic: '<S2276>/LogicalOperator'
         *  Logic: '<S2277>/LogicalOperator'
         *  Logic: '<S2284>/LogicalOperator'
         *  RelationalOperator: '<S2276>/RelationalOperator1'
         *  RelationalOperator: '<S2276>/RelationalOperator2'
         *  RelationalOperator: '<S2277>/RelationalOperator1'
         *  RelationalOperator: '<S2277>/RelationalOperator2'
         *  RelationalOperator: '<S2284>/RelationalOperator1'
         *  RelationalOperator: '<S2284>/RelationalOperator2'
         *  S-Function (sfix_bitop): '<S2276>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S2276>/BitwiseOperator2'
         *  S-Function (sfix_bitop): '<S2277>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S2277>/BitwiseOperator2'
         *  S-Function (sfix_bitop): '<S2284>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S2284>/BitwiseOperator2'
         */
        VeSRAC_b_HCPLoc_CANC_BCM = (((((((sint32)
            SRAR_ac_DW.StatusByte_LostCommBCM) & 1) > 0) && ((((uint32)
            SRAR_ac_DW.StatusByte_LostCommBCM) & 64U) == 0U)) || (((((sint32)
            SRAR_ac_DW.StatusByte_InvData_CANC2_BCM) & 1) > 0) && ((((uint32)
            SRAR_ac_DW.StatusByte_InvData_CANC2_BCM) & 64U) == 0U))) ||
            ((((((sint32)SRAR_ac_DW.StatusByte_InvData_BCM) & 1) > 0) &&
              ((((uint32)SRAR_ac_DW.StatusByte_InvData_BCM) & 64U) == 0U)) &&
             (KeSRAR_b_BCM_SNA_Disable)));
        rtb_Merge1_i = (((((((sint32)SRAR_ac_DW.StatusByte_LostCommISM) & 1) > 0)
                          && ((((uint32)SRAR_ac_DW.StatusByte_LostCommISM) & 64U)
                              == 0U)) || (((((sint32)
                             SRAR_ac_DW.StatusByte_InvData_ESM) & 1) > 0) &&
                          ((((uint32)SRAR_ac_DW.StatusByte_InvData_ESM) & 64U) ==
                           0U))) && ((((((sint32)
                             SRAR_ac_DW.StatusByte_LostCommESM_BusB) & 1) > 0) &&
                          ((((uint32)SRAR_ac_DW.StatusByte_LostCommESM_BusB) &
                            64U) == 0U)) || (((((sint32)
                             SRAR_ac_DW.StatusByte_InvData_ESM_BusB) & 1) > 0) &&
                          ((((uint32)SRAR_ac_DW.StatusByte_InvData_ESM_BusB) &
                            64U) == 0U))));
    }
    else
    {
        /* Switch: '<S2294>/Switch1' incorporates:
         *  Constant: '<S2249>/Constant6'
         */
        VeSRAC_b_HCPLoc_CANC_BCM = false;
        rtb_Merge1_i = false;
    }

    /* End of Switch: '<S2294>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VePMDR_b_SysVoltLowFA_HB' */
    (void)Rte_Read_VePMDR_b_SysVoltLowFA_HB_Value(&rtb_VeSRAR_b_TCMLmpFlt1);

    /* Inport: '<Root>/VePMDR_b_SysVoltLowFA_BF2' */
    (void)Rte_Read_VePMDR_b_SysVoltLowFA_BF2_Value(&rtb_VeSRAR_b_TCMLmpFlt2);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRAR_MedTEB'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* RelationalOperator: '<S2249>/Comparison10' incorporates:
     *  Constant: '<S2272>/Constant'
     */
    VeSRAC_b_BSM_CCAN_BusFail = (((uint32)rtb_TmpSignalConversionAtVeBR_k) ==
        CeBRKR_e_BusFailBSM_C1CAN);

    /* RelationalOperator: '<S2249>/Comparison9' incorporates:
     *  Constant: '<S2271>/Constant'
     */
    VeSRAC_b_BSMLoC_CCAN_w_HCP = (((uint32)rtb_TmpSignalConversionAtVeBR_k) ==
        CeBRKR_e_LoC_BSM_HCP_C1);

    /* UnitDelay: '<S717>/UnitDelay' incorporates:
     *  Constant: '<S1774>/Constant'
     *  RelationalOperator: '<S1702>/Comparison1'
     */
    rtb_UnitDelay_fh = (((uint32)rtb_TmpSignalConversionAtVeIDCR) ==
                        CeGENR_e_FailureType_ChrgngInhibited);

    /* Logic: '<S1712>/Logical2' incorporates:
     *  Logic: '<S1712>/Logical3'
     */
    VeSRAC_b_SysVoltLowFA_BF12 = (rtb_LogicalOperator_ln &&
        (rtb_TmpSignalConversionAtVePM_m && rtb_VeSRAR_b_TCMLmpFlt2));

    /* Logic: '<S1712>/Logical1' */
    VeSRAC_b_SysVoltLowFA_BF3 = (rtb_LogicalOperator_ln &&
        rtb_VeSRAR_b_TCMLmpFlt1);

    /* Logic: '<S1688>/Logical5' incorporates:
     *  Constant: '<S1764>/Calib'
     *  Logic: '<S1688>/Logical6'
     *  Logic: '<S1688>/Logical7'
     *  Logic: '<S1688>/Logical9'
     *  UnitDelay: '<S1688>/UnitDelay'
     */
    VeSRAC_b_AltrntrMdExit = ((VeSRAC_b_ContctrCirPerfOpenCntc ||
        (rtb_LogicalOperator_g3 && (KeSRAR_b_LoCIDCM_Enbl))) &&
        ((rtb_Comparison1_n4 || VeSRAR_b_MtrBZeroTrqActv) ||
         (SRAR_ac_DW.UnitDelay_DSTATE_gi)));

    /* Logic: '<S2249>/Logical10' */
    VeSRAC_b_AGSMLoCInGearR = (rtb_Merge1_i && rtb_VeSRAR_b_HVOverVoltFailure_);

    /* Outputs for Atomic SubSystem: '<S1714>/TurnOnDelayTime1' */
    /* Outputs for Atomic SubSystem: '<S1807>/EdgeRising' */
    /* Logic: '<S1808>/AND' incorporates:
     *  Logic: '<S1808>/OR1'
     *  UnitDelay: '<S1808>/UnitDelay'
     */
    rtb_Switch5_f = (rtb_TmpSignalConversionAtVeBP_b &&
                     (!SRAR_ac_DW.UnitDelay_DSTATE_bo));

    /* Update for UnitDelay: '<S1808>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_bo = rtb_TmpSignalConversionAtVeBP_b;

    /* End of Outputs for SubSystem: '<S1807>/EdgeRising' */

    /* Switch: '<S1807>/Switch1' incorporates:
     *  Logic: '<S1807>/OR'
     *  Logic: '<S1807>/OR1'
     */
    if ((!rtb_TmpSignalConversionAtVeBP_b) || rtb_Switch5_f)
    {
        /* Switch: '<S1807>/Switch1' incorporates:
         *  Constant: '<S1807>/ConstantValue1'
         */
        rtb_Switch1_io = 0.0F;
    }
    else
    {
        /* Switch: '<S1807>/Switch1' incorporates:
         *  Constant: '<S1805>/Calib'
         *  Constant: '<S1806>/Calib'
         *  MinMax: '<S1807>/Minimum'
         *  Sum: '<S1807>/Summation'
         *  UnitDelay: '<S1807>/UnitDelay'
         */
        rtb_Switch1_io = fminf(KeSRAR_t_ThermalRnwayShtDwnTurnONDelay,
                               KeSRAR_t_dT + SRAR_ac_DW.UnitDelay_DSTATE_i);
    }

    /* End of Switch: '<S1807>/Switch1' */

    /* Update for UnitDelay: '<S1807>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_i = rtb_Switch1_io;

    /* End of Outputs for SubSystem: '<S1714>/TurnOnDelayTime1' */

    /* Logic: '<S2213>/LogicalOperator' incorporates:
     *  Constant: '<S2213>/Constant1'
     *  Constant: '<S2213>/Constant2'
     *  DataStoreRead: '<S2213>/StatusByte_BattCoolPmpOveSpd'
     *  RelationalOperator: '<S2213>/RelationalOperator1'
     *  RelationalOperator: '<S2213>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S2213>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S2213>/BitwiseOperator2'
     */
    rtb_Logical8_dq = (((((sint32)SRAR_ac_DW.StatusByte_BattCoolPmpOveSpd) & 1) >
                        0) && ((((uint32)SRAR_ac_DW.StatusByte_BattCoolPmpOveSpd)
                         & 64U) == 0U));

    /* Switch: '<S2256>/Switch5' incorporates:
     *  Constant: '<S2238>/Calib'
     *  Logic: '<S2211>/Logical3'
     */
    rtb_Switch5_f = (rtb_TmpSignalConversionAtVeHP_g && (KeSRAR_b_PSANotActvEnbl));

    /* Logic: '<S2211>/Logical4' */
    rtb_TmpSignalConversionAtVeHP_g = (rtb_Logical8_dq && rtb_Switch5_f);

    /* Outputs for Atomic SubSystem: '<S2211>/StopWatchResetEnabled2' */
    /* Switch: '<S2245>/Switch2' incorporates:
     *  Logic: '<S2211>/Logical1'
     *  Switch: '<S2245>/Switch1'
     */
    if (!rtb_Logical8_dq)
    {
        /* Switch: '<S2245>/Switch1' incorporates:
         *  Constant: '<S2245>/ConstantValue2'
         */
        rtb_Switch1_bs = 0.0F;
    }
    else
    {
        /* Switch: '<S2245>/Switch1' incorporates:
         *  Constant: '<S2243>/Calib'
         *  Sum: '<S2245>/Subtraction'
         *  Switch: '<S2245>/Switch2'
         *  UnitDelay: '<S2245>/UnitDelay'
         */
        rtb_Switch1_bs = KeSRAR_t_dT + SRAR_ac_DW.UnitDelay_DSTATE_a;
    }

    /* End of Switch: '<S2245>/Switch2' */

    /* Update for UnitDelay: '<S2245>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_a = rtb_Switch1_bs;

    /* End of Outputs for SubSystem: '<S2211>/StopWatchResetEnabled2' */

    /* Switch: '<S2211>/Switch' */
    if (rtb_Switch5_f)
    {
        /* Switch: '<S2256>/Switch5' incorporates:
         *  Constant: '<S2242>/Calib'
         *  RelationalOperator: '<S2211>/Comparison1'
         */
        rtb_Switch5_f = (rtb_Switch1_bs >= KeSRAR_t_DryRunShtDwntTmr);
    }
    else
    {
        /* Switch: '<S2256>/Switch5' */
        rtb_Switch5_f = rtb_Logical8_dq;
    }

    /* End of Switch: '<S2211>/Switch' */

    /* Switch: '<S2002>/Switch1' incorporates:
     *  Constant: '<S1377>/ConstantValue2'
     *  Constant: '<S1377>/ConstantValue3'
     */
    if (VeSRAC_b_TCMLoC_C1CAN_w_ECM)
    {
        rtb_Switch1_fw = 2;
    }
    else
    {
        rtb_Switch1_fw = 0;
    }

    /* End of Switch: '<S2002>/Switch1' */

    /* Switch: '<S2013>/Switch1' incorporates:
     *  Constant: '<S1377>/ConstantValue4'
     *  Constant: '<S1377>/ConstantValue5'
     */
    if (VeSRAC_b_TCM_C1CAN_BusFail)
    {
        rtb_Switch1_h0 = 4;
    }
    else
    {
        rtb_Switch1_h0 = 0;
    }

    /* End of Switch: '<S2013>/Switch1' */

    /* Switch: '<S2024>/Switch1' incorporates:
     *  Constant: '<S1377>/ConstantValue6'
     *  Constant: '<S1377>/ConstantValue7'
     */
    if (VeSRAC_b_TCMLoC_ePT_w_HCP)
    {
        rtb_Switch1_mu = 8;
    }
    else
    {
        rtb_Switch1_mu = 0;
    }

    /* End of Switch: '<S2024>/Switch1' */

    /* Switch: '<S2027>/Switch1' incorporates:
     *  Constant: '<S1377>/ConstantValue8'
     *  Constant: '<S1377>/ConstantValue9'
     */
    if (VeSRAC_b_TCMLoC_ePT_w_ECM)
    {
        rtb_AND_cg = 16;
    }
    else
    {
        rtb_AND_cg = 0;
    }

    /* End of Switch: '<S2027>/Switch1' */

    /* Switch: '<S2028>/Switch1' incorporates:
     *  Constant: '<S1377>/ConstantValue10'
     *  Constant: '<S1377>/ConstantValue11'
     */
    if (VeSRAC_b_TCM_ePT_BusFail)
    {
        rtb_OR1_ot = 32;
    }
    else
    {
        rtb_OR1_ot = 0;
    }

    /* End of Switch: '<S2028>/Switch1' */

    /* Switch: '<S2029>/Switch1' incorporates:
     *  Constant: '<S1377>/ConstantValue12'
     *  Constant: '<S1377>/ConstantValue13'
     */
    if (VeSRAC_b_HCPLoc_ePT_TCM)
    {
        rtb_LogicalOperator_cr = 64;
    }
    else
    {
        rtb_LogicalOperator_cr = 0;
    }

    /* End of Switch: '<S2029>/Switch1' */

    /* Switch: '<S2030>/Switch1' incorporates:
     *  Constant: '<S1377>/ConstantValue14'
     *  Constant: '<S1377>/ConstantValue15'
     */
    if (VeSRAC_b_ECMLoC_C1CAN_w_HCP)
    {
        rtb_TmpSignalConversionAtVeOB_1 = 128;
    }
    else
    {
        rtb_TmpSignalConversionAtVeOB_1 = 0;
    }

    /* End of Switch: '<S2030>/Switch1' */

    /* Switch: '<S2031>/Switch1' incorporates:
     *  Constant: '<S1377>/ConstantValue16'
     *  Constant: '<S1377>/ConstantValue17'
     */
    if (VeSRAC_b_ECMLoC_C1CAN_w_ECM)
    {
        rtb_AND_d = 256;
    }
    else
    {
        rtb_AND_d = 0;
    }

    /* End of Switch: '<S2031>/Switch1' */

    /* Switch: '<S2032>/Switch1' incorporates:
     *  Constant: '<S1377>/ConstantValue18'
     *  Constant: '<S1377>/ConstantValue19'
     */
    if (VeSRAC_b_ECM_C1CAN_BusFail)
    {
        rtb_TmpSignalConversionAtVeOB_2 = 512;
    }
    else
    {
        rtb_TmpSignalConversionAtVeOB_2 = 0;
    }

    /* End of Switch: '<S2032>/Switch1' */

    /* Switch: '<S2003>/Switch1' incorporates:
     *  Constant: '<S1377>/ConstantValue20'
     *  Constant: '<S1377>/ConstantValue21'
     */
    if (VeSRAC_b_ECMLoC_ePT_w_HCP)
    {
        rtb_TmpSignalConversionAtVeOB_3 = 1024;
    }
    else
    {
        rtb_TmpSignalConversionAtVeOB_3 = 0;
    }

    /* End of Switch: '<S2003>/Switch1' */

    /* Switch: '<S2004>/Switch1' incorporates:
     *  Constant: '<S1377>/ConstantValue22'
     *  Constant: '<S1377>/ConstantValue23'
     */
    if (VeSRAC_b_ECMLoC_ePT_w_ECM)
    {
        rtb_VeSRAR_b_HVOverVoltFailur_1 = 2048;
    }
    else
    {
        rtb_VeSRAR_b_HVOverVoltFailur_1 = 0;
    }

    /* End of Switch: '<S2004>/Switch1' */

    /* Switch: '<S2005>/Switch1' incorporates:
     *  Constant: '<S1377>/ConstantValue24'
     *  Constant: '<S1377>/ConstantValue25'
     */
    if (VeSRAC_b_ECM_ePT_BusFail)
    {
        rtb_VeSRAR_b_HVOverVoltFailur_f = 4096;
    }
    else
    {
        rtb_VeSRAR_b_HVOverVoltFailur_f = 0;
    }

    /* End of Switch: '<S2005>/Switch1' */

    /* Switch: '<S2006>/Switch1' incorporates:
     *  Constant: '<S1377>/ConstantValue26'
     *  Constant: '<S1377>/ConstantValue27'
     */
    if (VeSRAC_b_HCPLoc_CANC_TCM)
    {
        tmpRead_13 = 8192;
    }
    else
    {
        tmpRead_13 = 0;
    }

    /* End of Switch: '<S2006>/Switch1' */

    /* Switch: '<S2007>/Switch1' incorporates:
     *  Constant: '<S1377>/ConstantValue28'
     *  Constant: '<S1377>/ConstantValue29'
     */
    if (VeSRAC_b_HCPLoc_CANC_BCM)
    {
        rtb_Comparison6_b = 16384;
    }
    else
    {
        rtb_Comparison6_b = 0;
    }

    /* End of Switch: '<S2007>/Switch1' */

    /* Switch: '<S2008>/Switch1' incorporates:
     *  Constant: '<S1377>/ConstantValue30'
     *  Constant: '<S1377>/ConstantValue31'
     */
    if (VeSRAC_b_HCPLoc_CANC_BSM)
    {
        rtb_AND_ll = 32768;
    }
    else
    {
        rtb_AND_ll = 0;
    }

    /* End of Switch: '<S2008>/Switch1' */

    /* Switch: '<S2009>/Switch1' incorporates:
     *  Constant: '<S1377>/ConstantValue32'
     *  Constant: '<S1377>/ConstantValue33'
     */
    if (VeSRAC_b_AHCPLoc_CANC2_BSM)
    {
        rtb_VeSRAR_b_TCMLmpFlt2_tmp = 65536U;
    }
    else
    {
        rtb_VeSRAR_b_TCMLmpFlt2_tmp = 0U;
    }

    /* End of Switch: '<S2009>/Switch1' */

    /* Switch: '<S2010>/Switch1' incorporates:
     *  Constant: '<S1377>/ConstantValue44'
     *  Constant: '<S1377>/ConstantValue55'
     */
    if (VeSRAC_b_BSM_CCAN_BusFail)
    {
        rtb_TmpSignalConversionAtVeEN_d = 131072U;
    }
    else
    {
        rtb_TmpSignalConversionAtVeEN_d = 0U;
    }

    /* End of Switch: '<S2010>/Switch1' */

    /* Switch: '<S2018>/Switch1' incorporates:
     *  Constant: '<S1377>/ConstantValue58'
     *  Constant: '<S1377>/ConstantValue59'
     */
    if (VeSRAC_b_BSM_C2CAN_BusFail)
    {
        rtb_Comparison1_ij = 262144U;
    }
    else
    {
        rtb_Comparison1_ij = 0U;
    }

    /* End of Switch: '<S2018>/Switch1' */

    /* Switch: '<S2019>/Switch1' incorporates:
     *  Constant: '<S1377>/ConstantValue60'
     *  Constant: '<S1377>/ConstantValue61'
     */
    if (VeSRAC_b_BSMLoC_CCAN_w_HCP)
    {
        rtb_VeSRAR_b_SpinUpFailed_0 = 524288U;
    }
    else
    {
        rtb_VeSRAR_b_SpinUpFailed_0 = 0U;
    }

    /* End of Switch: '<S2019>/Switch1' */

    /* Switch: '<S2020>/Switch1' incorporates:
     *  Constant: '<S1377>/ConstantValue62'
     *  Constant: '<S1377>/ConstantValue63'
     */
    if (VeSRAC_b_BSMLoC_C2CAN_w_AHCP)
    {
        rtb_TmpSignalConversionAtVeBP_p = 1048576U;
    }
    else
    {
        rtb_TmpSignalConversionAtVeBP_p = 0U;
    }

    /* End of Switch: '<S2020>/Switch1' */

    /* Switch: '<S2023>/Switch1' incorporates:
     *  Constant: '<S1377>/ConstantValue38'
     *  Constant: '<S1377>/ConstantValue39'
     *  Constant: '<S1775>/Constant'
     *  Constant: '<S1776>/Calib'
     *  Constant: '<S1777>/Calib'
     *  Constant: '<S1778>/Calib'
     *  Logic: '<S1702>/Logical1'
     *  Logic: '<S1702>/Logical5'
     *  Logic: '<S1702>/Logical6'
     *  Logic: '<S1702>/Logical7'
     *  Logic: '<S1702>/Logical9'
     *  RelationalOperator: '<S1702>/Comparison2'
     *  RelationalOperator: '<S1702>/Comparison3'
     */
    if ((rtb_TmpSignalConversionAtVeGENR > KeSRAR_U_IDCMFail_Threshold) &&
            ((rtb_UnitDelay_fh && (KeSRAR_b_IDCMFailChrgInhibitedEnbl)) ||
             ((((uint32)rtb_TmpSignalConversionAtVeIDCR) ==
               CeGENR_e_FailureType_ChrgngAllwd) &&
              (KeSRAR_b_IDCMFailChrgngAllwdEnbl))))
    {
        rtb_Switch1_anw = 8388608U;
    }
    else
    {
        rtb_Switch1_anw = 0U;
    }

    /* End of Switch: '<S2023>/Switch1' */

    /* Switch: '<S2025>/Switch1' incorporates:
     *  Constant: '<S1377>/ConstantValue40'
     *  Constant: '<S1377>/ConstantValue41'
     */
    if (VeSRAC_b_SysVoltLowFA_BF12)
    {
        rtb_VeSRAR_b_AuxPumpFail_Inhi_0 = 16777216U;
    }
    else
    {
        rtb_VeSRAR_b_AuxPumpFail_Inhi_0 = 0U;
    }

    /* End of Switch: '<S2025>/Switch1' */

    /* Switch: '<S2026>/Switch1' incorporates:
     *  Constant: '<S1377>/ConstantValue42'
     *  Constant: '<S1377>/ConstantValue43'
     */
    if (VeSRAC_b_SysVoltLowFA_BF3)
    {
        rtb_VeSRAR_b_CKSFailed_0 = 33554432U;
    }
    else
    {
        rtb_VeSRAR_b_CKSFailed_0 = 0U;
    }

    /* End of Switch: '<S2026>/Switch1' */

    /* Switch: '<S2011>/Switch1' incorporates:
     *  Constant: '<S1377>/ConstantValue45'
     *  Constant: '<S1377>/ConstantValue46'
     */
    if (VeSRAC_b_AltrntrMdExit)
    {
        rtb_Switch1_f3 = 67108864U;
    }
    else
    {
        rtb_Switch1_f3 = 0U;
    }

    /* End of Switch: '<S2011>/Switch1' */

    /* Switch: '<S2012>/Switch1' incorporates:
     *  Constant: '<S1377>/ConstantValue47'
     *  Constant: '<S1377>/ConstantValue48'
     */
    if (VeSRAC_b_AGSMLoCInGearR)
    {
        BitwiseLogicalOperator_b = 134217728U;
    }
    else
    {
        BitwiseLogicalOperator_b = 0U;
    }

    /* End of Switch: '<S2012>/Switch1' */

    /* Switch: '<S2014>/Switch1' incorporates:
     *  Constant: '<S1377>/ConstantValue49'
     *  Constant: '<S1377>/ConstantValue50'
     */
    if (rtb_TmpSignalConversionAtVeGE_o)
    {
        rtb_Switch1_mu_0 = 268435456U;
    }
    else
    {
        rtb_Switch1_mu_0 = 0U;
    }

    /* End of Switch: '<S2014>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S1714>/TurnOnDelayTime1' */
    /* Switch: '<S2015>/Switch1' incorporates:
     *  Constant: '<S1377>/ConstantValue51'
     *  Constant: '<S1377>/ConstantValue52'
     *  Constant: '<S1805>/Calib'
     *  Logic: '<S1807>/AND'
     *  RelationalOperator: '<S1807>/GreaterThan'
     */
    if (rtb_TmpSignalConversionAtVeBP_b && (rtb_Switch1_io >=
            KeSRAR_t_ThermalRnwayShtDwnTurnONDelay))
    {
        rtb_VeSRAR_b_PPCTIS_ReducePer_0 = 536870912U;
    }
    else
    {
        rtb_VeSRAR_b_PPCTIS_ReducePer_0 = 0U;
    }

    /* End of Switch: '<S2015>/Switch1' */
    /* End of Outputs for SubSystem: '<S1714>/TurnOnDelayTime1' */

    /* Switch: '<S2016>/Switch1' incorporates:
     *  Constant: '<S1377>/ConstantValue53'
     *  Constant: '<S1377>/ConstantValue54'
     */
    if (rtb_TmpSignalConversionAtVeHP_g)
    {
        rtb_Comparison3_ou = 1073741824U;
    }
    else
    {
        rtb_Comparison3_ou = 0U;
    }

    /* End of Switch: '<S2016>/Switch1' */

    /* Switch: '<S2017>/Switch1' incorporates:
     *  Constant: '<S1377>/ConstantValue56'
     *  Constant: '<S1377>/ConstantValue57'
     */
    if (rtb_Switch5_f)
    {
        rtb_Switch1_a3 = 2147483648U;
    }
    else
    {
        rtb_Switch1_a3 = 0U;
    }

    /* End of Switch: '<S2017>/Switch1' */

    /* S-Function (sfix_bitop): '<S1377>/BitwiseLogicalOperator' incorporates:
     *  Switch: '<S2001>/Switch1'
     */
    BitwiseLogicalOperator_b = ((((((((((((((((((((((((((((((uint32)
        (VeSRAC_b_TCMLoC_C1CAN_w_HCP ? 1U : 0U)) | ((uint32)rtb_Switch1_fw)) |
        ((uint32)rtb_Switch1_h0)) | ((uint32)rtb_Switch1_mu)) | ((uint32)
        rtb_AND_cg)) | ((uint32)rtb_OR1_ot)) | ((uint32)rtb_LogicalOperator_cr))
        | ((uint32)rtb_TmpSignalConversionAtVeOB_1)) | ((uint32)rtb_AND_d)) |
        ((uint32)rtb_TmpSignalConversionAtVeOB_2)) | ((uint32)
        rtb_TmpSignalConversionAtVeOB_3)) | ((uint32)
        rtb_VeSRAR_b_HVOverVoltFailur_1)) | ((uint32)
        rtb_VeSRAR_b_HVOverVoltFailur_f)) | ((uint32)tmpRead_13)) | ((uint32)
        rtb_Comparison6_b)) | ((uint32)rtb_AND_ll)) |
        rtb_VeSRAR_b_TCMLmpFlt2_tmp) | rtb_TmpSignalConversionAtVeEN_d) |
        rtb_Comparison1_ij) | rtb_VeSRAR_b_SpinUpFailed_0) |
        rtb_TmpSignalConversionAtVeBP_p) | rtb_Switch1_anw) |
        rtb_VeSRAR_b_AuxPumpFail_Inhi_0) | rtb_VeSRAR_b_CKSFailed_0) |
        rtb_Switch1_f3) | BitwiseLogicalOperator_b) | rtb_Switch1_mu_0) |
        rtb_VeSRAR_b_PPCTIS_ReducePer_0) | rtb_Comparison3_ou) | rtb_Switch1_a3;

    /* Outputs for Enabled SubSystem: '<S1705>/HV_BattDisabled' incorporates:
     *  EnablePort: '<S1779>/Enable'
     */
    /* Logic: '<S1705>/Logical11' */
    if ((VeSRAR_b_MtrBZeroTrqActv || rtb_TmpSignalConversionAtVeIMPR) ||
            rtb_TmpSignalConversionAtVeB_j2)
    {
        /* Switch: '<S1781>/Switch1' incorporates:
         *  Constant: '<S2311>/Constant'
         *  Logic: '<S2252>/Logical5'
         *  RelationalOperator: '<S2252>/Relational_Operator1'
         */
        if (rtb_Relational_Operator3 || (((uint32)
                rtb_TmpSignalConversionAtVeTRGR) == CeTRGR_e_TransRangeNeutral))
        {
            /* Switch: '<S1781>/Switch1' incorporates:
             *  Constant: '<S1779>/TRUEConstant3'
             */
            VeSRAC_b_GearPRNDL_InhibitM2 = true;
        }
        else
        {
            /* Switch: '<S1781>/Switch1' incorporates:
             *  Switch: '<S1780>/Switch1'
             */
            VeSRAC_b_GearPRNDL_InhibitM2 = !rtb_VeSRAR_b_HVOverVoltFailure_;
        }

        /* End of Switch: '<S1781>/Switch1' */
    }

    /* End of Logic: '<S1705>/Logical11' */
    /* End of Outputs for SubSystem: '<S1705>/HV_BattDisabled' */

    /* Switch: '<S2256>/Switch5' incorporates:
     *  Constant: '<S2256>/ConstantValue7'
     *  RelationalOperator: '<S2256>/Comparison8'
     */
    rtb_Switch5_f = (rtb_TmpSignalConversionAtVeT_hz == 0);

    /* RelationalOperator: '<S2256>/Comparison5' incorporates:
     *  Constant: '<S2256>/ConstantValue4'
     */
    rtb_TmpSignalConversionAtVeGE_o = (rtb_TmpSignalConversionAtVeT_hz == 5);

    /* RelationalOperator: '<S2256>/Comparison6' incorporates:
     *  Constant: '<S2256>/ConstantValue5'
     */
    rtb_TmpSignalConversionAtVeBP_b = (rtb_TmpSignalConversionAtVeT_hz == 6);

    /* RelationalOperator: '<S2256>/Comparison4' incorporates:
     *  Constant: '<S2256>/ConstantValue'
     */
    rtb_VeSRAR_b_TCMLmpFlt1 = (rtb_TmpSignalConversionAtVeT_hz == 1);

    /* RelationalOperator: '<S2256>/Comparison1' incorporates:
     *  Constant: '<S2256>/ConstantValue1'
     */
    rtb_VeSRAR_b_TCMLmpFlt2 = (rtb_TmpSignalConversionAtVeT_hz == 2);

    /* RelationalOperator: '<S2256>/Comparison2' incorporates:
     *  Constant: '<S2256>/ConstantValue2'
     */
    rtb_TmpSignalConversionAtVeEN_c = (rtb_TmpSignalConversionAtVeT_hz == 3);

    /* Outputs for Atomic SubSystem: '<S2256>/ST2Disabled' */
    /* Logic: '<S2113>/Logical8' incorporates:
     *  Constant: '<S2388>/Constant'
     *  RelationalOperator: '<S2355>/Comparison1'
     */
    rtb_Logical8_dq = (((uint32)rtb_TmpSignalConversionAtVeTI_f) ==
                       CeHCCR_e_ClLocked);

    /* UnitDelay: '<S201>/UnitDelay' incorporates:
     *  Constant: '<S2389>/Constant'
     *  RelationalOperator: '<S2355>/Comparison2'
     */
    rtb_UnitDelay_eb = (((uint32)rtb_TmpSignalConversionAtVeTI_f) ==
                        CeHCCR_e_ClInvalid);

    /* Merge: '<S1147>/Merge1' incorporates:
     *  Constant: '<S2390>/Constant'
     *  Constant: '<S2391>/Constant'
     *  Constant: '<S2392>/Constant'
     *  Constant: '<S2393>/Constant'
     *  Constant: '<S2394>/Constant'
     *  Constant: '<S2395>/Constant'
     *  Logic: '<S2355>/Logical1'
     *  Logic: '<S2355>/Logical2'
     *  Logic: '<S2355>/Logical3'
     *  Logic: '<S2355>/Logical4'
     *  Logic: '<S2355>/LogicalOperator5'
     *  RelationalOperator: '<S2355>/Comparison3'
     *  RelationalOperator: '<S2355>/Comparison4'
     *  RelationalOperator: '<S2355>/Comparison6'
     *  RelationalOperator: '<S2355>/Comparison7'
     *  RelationalOperator: '<S2355>/Comparison8'
     *  RelationalOperator: '<S2355>/Comparison9'
     *  SignalConversion generated from: '<S2>/VeTRNR_e_TCMActualEvenGear'
     */
    rtb_Merge1_i = (rtb_Logical8_dq && (((((uint32)
                        rtb_TmpSignalConversionAtVeTRGR) ==
                       CeTRGR_e_TransRangeReverse) && (((((uint32)
                          rtb_TmpSignalConversionAtVeTRNR) == CeTRNR_e_D2) ||
                        (((uint32)rtb_TmpSignalConversionAtVeTRNR) ==
                         CeTRNR_e_D4)) || (((uint32)
                         rtb_TmpSignalConversionAtVeTRNR) == CeTRNR_e_D6))) ||
                     ((((uint32)rtb_TmpSignalConversionAtVeTRGR) ==
                       CeTRGR_e_TransRangeDrive) && (((uint32)
                        rtb_TmpSignalConversionAtVeTRNR) == CeTRNR_e_Reverse))));

    /* Logic: '<S2355>/LogicalOperator3' incorporates:
     *  Logic: '<S2355>/LogicalOperator4'
     */
    rtb_TmpSignalConversionAtVeAD_p = (rtb_UnitDelay_eb || rtb_Merge1_i);

    /* Logic: '<S2355>/LogicalOperator8' incorporates:
     *  Logic: '<S2355>/LogicalOperator3'
     */
    rtb_TmpSignalConversionAtVeHP_g = (rtb_TmpSignalConversionAtVeEN_c &&
        rtb_TmpSignalConversionAtVeAD_p);

    /* End of Outputs for SubSystem: '<S2256>/ST2Disabled' */

    /* RelationalOperator: '<S2256>/Comparison3' incorporates:
     *  Constant: '<S2256>/ConstantValue3'
     */
    rtb_LogicalOperator_g3 = (rtb_TmpSignalConversionAtVeT_hz == 4);

    /* RelationalOperator: '<S2351>/Comparison5' incorporates:
     *  Constant: '<S2363>/Constant'
     */
    rtb_TmpSignalConversionAtVeADIR = (((uint32)rtb_TmpSignalConversionAtVeTI_f)
        == CeHCCR_e_ClReleased);

    /* RelationalOperator: '<S2351>/Comparison1' incorporates:
     *  Constant: '<S2364>/Constant'
     */
    rtb_TmpSignalConversionAtVeAD_o = (((uint32)rtb_TmpSignalConversionAtVeTI_f)
        == CeHCCR_e_ClLocked);

    /* RelationalOperator: '<S2351>/Comparison2' incorporates:
     *  Constant: '<S2365>/Constant'
     */
    rtb_Comparison2_b = (((uint32)rtb_TmpSignalConversionAtVeTI_f) ==
                         CeHCCR_e_ClInvalid);

    /* Outputs for Atomic SubSystem: '<S2256>/ST2Disabled' */
    /* Logic: '<S2351>/Logical1' incorporates:
     *  Constant: '<S2366>/Constant'
     *  Constant: '<S2367>/Constant'
     *  Constant: '<S2368>/Constant'
     *  Constant: '<S2369>/Constant'
     *  Constant: '<S2370>/Constant'
     *  Constant: '<S2371>/Constant'
     *  Logic: '<S2351>/Logical2'
     *  Logic: '<S2351>/Logical3'
     *  Logic: '<S2351>/Logical4'
     *  Logic: '<S2351>/LogicalOperator5'
     *  RelationalOperator: '<S2351>/Comparison10'
     *  RelationalOperator: '<S2351>/Comparison3'
     *  RelationalOperator: '<S2351>/Comparison6'
     *  RelationalOperator: '<S2351>/Comparison7'
     *  RelationalOperator: '<S2351>/Comparison8'
     *  RelationalOperator: '<S2351>/Comparison9'
     *  RelationalOperator: '<S2355>/Comparison4'
     *  SignalConversion generated from: '<S2>/VeTRNR_e_TCMActualEvenGear'
     */
    rtb_Logical1_cl = (rtb_TmpSignalConversionAtVeAD_o && (((((uint32)
                           rtb_TmpSignalConversionAtVeTRGR) ==
                          CeTRGR_e_TransRangeReverse) && (((((uint32)
        rtb_TmpSignalConversionAtVeTRNR) == CeTRNR_e_D2) || (((uint32)
        rtb_TmpSignalConversionAtVeTRNR) == CeTRNR_e_D4)) || (((uint32)
                            rtb_TmpSignalConversionAtVeTRNR) == CeTRNR_e_D6))) ||
                        ((((uint32)rtb_TmpSignalConversionAtVeTRGR) ==
                          CeTRGR_e_TransRangeDrive) && (((uint32)
                           rtb_TmpSignalConversionAtVeTRNR) == CeTRNR_e_Reverse))));

    /* End of Outputs for SubSystem: '<S2256>/ST2Disabled' */

    /* RelationalOperator: '<S2354>/Comparison2' incorporates:
     *  Constant: '<S2383>/Constant'
     */
    rtb_Comparison2_op = (((uint32)rtb_TmpSignalConversionAtVeTI_f) ==
                          CeHCCR_e_ClInvalid);

    /* Logic: '<S2354>/Logical1' incorporates:
     *  Constant: '<S2382>/Constant'
     *  RelationalOperator: '<S2354>/Comparison1'
     */
    rtb_TmpSignalConversionAtVeDTRR = ((((uint32)rtb_TmpSignalConversionAtVeTI_f)
        == CeHCCR_e_ClActuated) || rtb_Comparison2_op);

    /* Switch: '<S2256>/Switch' incorporates:
     *  Switch: '<S2256>/Switch1'
     *  Switch: '<S2256>/Switch3'
     *  Switch: '<S2256>/Switch4'
     *  Switch: '<S2351>/Switch'
     */
    if (rtb_Switch5_f)
    {
        /* Switch: '<S2256>/Switch' incorporates:
         *  Constant: '<S2256>/FALSEConstant2'
         */
        VeSRAC_b_TCMLimpFlt_InhibitM1 = false;

        /* Switch: '<S2256>/Switch1' incorporates:
         *  Constant: '<S2256>/FALSEConstant1'
         */
        VeSRAC_b_TCMLimpFlt_InhibitM2 = false;

        /* Switch: '<S2256>/Switch3' incorporates:
         *  Constant: '<S2256>/FALSEConstant3'
         */
        VeSRAC_b_TCMLimpFlt_OvrrideEngOn = false;

        /* Switch: '<S2256>/Switch4' incorporates:
         *  Constant: '<S2256>/FALSEConstant4'
         */
        VeSRAC_b_TCMLimpFlt_DsblAEMD = false;
    }
    else
    {
        if (VeSRAC_b_MtrBInvrtrFaulted)
        {
            /* Switch: '<S2351>/Switch' incorporates:
             *  Constant: '<S2351>/Constant'
             *  Switch: '<S2362>/Switch1'
             */
            rtb_TmpSignalConversionAtVeAD_o = true;
        }
        else
        {
            /* Switch: '<S2362>/Switch1' incorporates:
             *  Logic: '<S2351>/LogicalOperator1'
             *  Switch: '<S2351>/Switch'
             */
            rtb_TmpSignalConversionAtVeAD_o = (((rtb_TmpSignalConversionAtVeADIR
                || rtb_TmpSignalConversionAtVeAD_o) || rtb_Comparison2_b) ||
                rtb_Logical1_cl);
        }

        /* Switch: '<S2362>/Switch1' incorporates:
         *  Constant: '<S2350>/TRUEConstant'
         *  Constant: '<S2356>/Constant'
         *  Constant: '<S2357>/Constant'
         *  Constant: '<S2358>/Constant'
         *  Constant: '<S2359>/Constant'
         *  Constant: '<S2360>/Constant'
         *  Logic: '<S2350>/Logical1'
         *  Logic: '<S2350>/Logical2'
         *  Logic: '<S2350>/Logical5'
         *  RelationalOperator: '<S2350>/Comparison1'
         *  RelationalOperator: '<S2350>/Comparison2'
         *  RelationalOperator: '<S2350>/Comparison3'
         *  RelationalOperator: '<S2350>/Comparison4'
         *  RelationalOperator: '<S2350>/Comparison5'
         */
        if (((((uint32)rtb_TmpSignalConversionAtVeTI_k) == CeHCCR_e_ClReleased) ||
             (((uint32)rtb_TmpSignalConversionAtVeTI_k) == CeHCCR_e_ClInvalid)) &&
            ((((uint32)rtb_TmpSignalConversionAtVeTRGR) ==
                CeTRGR_e_TransRangeDrive) || (((uint32)
                rtb_TmpSignalConversionAtVeTRGR) == CeTRGR_e_TransRangeReverse)))
        {
            rtb_VeSRAR_b_HVOverVoltFailure_ = true;
        }
        else
        {
            rtb_VeSRAR_b_HVOverVoltFailure_ = (((uint32)
                rtb_TmpSignalConversionAtVeTI_k) != CeHCCR_e_ClLocked);
        }

        /* End of Switch: '<S2362>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S2256>/ST2Disabled' */
        /* Switch: '<S2256>/Switch' incorporates:
         *  Constant: '<S2256>/ConstantValue6'
         *  Constant: '<S2372>/Constant'
         *  Constant: '<S2373>/Constant'
         *  Logic: '<S2256>/LogicalOperator'
         *  Logic: '<S2350>/Logical3'
         *  Logic: '<S2351>/Logical5'
         *  Logic: '<S2352>/Logical1'
         *  Logic: '<S2352>/Logical2'
         *  Logic: '<S2354>/Logical6'
         *  Logic: '<S2355>/LogicalOperator1'
         *  Logic: '<S2355>/LogicalOperator6'
         *  RelationalOperator: '<S2256>/Comparison7'
         *  RelationalOperator: '<S2352>/Comparison3'
         *  RelationalOperator: '<S2352>/Comparison4'
         */
        VeSRAC_b_TCMLimpFlt_InhibitM1 = (((((((rtb_VeSRAR_b_TCMLmpFlt1 &&
            rtb_VeSRAR_b_HVOverVoltFailure_) || (rtb_VeSRAR_b_TCMLmpFlt2 &&
            ((((uint32)rtb_TmpSignalConversionAtVeTRGR) ==
              CeTRGR_e_TransRangeDrive) || (((uint32)
            rtb_TmpSignalConversionAtVeTRGR) == CeTRGR_e_TransRangeReverse)))) ||
            (rtb_TmpSignalConversionAtVeEN_c && ((rtb_Logical8_dq ||
            rtb_UnitDelay_eb) || rtb_Merge1_i))) || (rtb_LogicalOperator_g3 &&
            rtb_TmpSignalConversionAtVeAD_o)) || rtb_TmpSignalConversionAtVeBP_b)
            || (rtb_TmpSignalConversionAtVeGE_o &&
                rtb_TmpSignalConversionAtVeDTRR)) ||
            (rtb_TmpSignalConversionAtVeT_hz == 7));

        /* End of Outputs for SubSystem: '<S2256>/ST2Disabled' */

        /* Switch: '<S2351>/Switch1' incorporates:
         *  Constant: '<S2351>/Constant1'
         *  Logic: '<S2351>/LogicalOperator2'
         */
        if (VeSRAC_b_MtrBInvrtrFaulted)
        {
            rtb_VeSRAR_b_MtrB_InvrtrFault_g = true;
        }
        else
        {
            rtb_VeSRAR_b_MtrB_InvrtrFault_g = (rtb_TmpSignalConversionAtVeADIR ||
                rtb_Comparison2_b);
        }

        /* End of Switch: '<S2351>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S2256>/ST2Disabled' */
        /* Switch: '<S2256>/Switch1' incorporates:
         *  Constant: '<S2384>/Constant'
         *  Constant: '<S2387>/Constant'
         *  Logic: '<S2256>/LogicalOperator1'
         *  Logic: '<S2351>/Logical6'
         *  Logic: '<S2354>/Logical2'
         *  Logic: '<S2354>/Logical7'
         *  Logic: '<S2355>/LogicalOperator2'
         *  Logic: '<S2355>/LogicalOperator7'
         *  RelationalOperator: '<S2354>/Comparison5'
         *  RelationalOperator: '<S2355>/Comparison5'
         */
        VeSRAC_b_TCMLimpFlt_InhibitM2 = ((((rtb_TmpSignalConversionAtVeEN_c &&
            ((((uint32)rtb_TmpSignalConversionAtVeTI_f) == CeHCCR_e_ClReleased) ||
             rtb_UnitDelay_eb)) || (rtb_LogicalOperator_g3 &&
            rtb_VeSRAR_b_MtrB_InvrtrFault_g)) || rtb_TmpSignalConversionAtVeBP_b)
            || (rtb_TmpSignalConversionAtVeGE_o &&
                (rtb_TmpSignalConversionAtVeDTRR || (((uint32)
            rtb_TmpSignalConversionAtVeTI_f) == CeHCCR_e_ClReleased))));

        /* End of Outputs for SubSystem: '<S2256>/ST2Disabled' */

        /* Switch: '<S2256>/Switch3' incorporates:
         *  Logic: '<S2256>/LogicalOperator2'
         */
        VeSRAC_b_TCMLimpFlt_OvrrideEngOn = (((((rtb_VeSRAR_b_TCMLmpFlt1 ||
            rtb_VeSRAR_b_TCMLmpFlt2) || rtb_TmpSignalConversionAtVeEN_c) ||
            rtb_LogicalOperator_g3) || rtb_TmpSignalConversionAtVeBP_b) ||
            rtb_TmpSignalConversionAtVeGE_o);

        /* Outputs for Atomic SubSystem: '<S2256>/ST2Disabled' */
        /* Switch: '<S2256>/Switch4' incorporates:
         *  Constant: '<S2385>/Calib'
         *  Logic: '<S2256>/LogicalOperator3'
         *  Logic: '<S2351>/Logical8'
         *  Logic: '<S2351>/LogicalOperator4'
         *  Logic: '<S2354>/Logical4'
         *  Logic: '<S2355>/LogicalOperator9'
         */
        VeSRAC_b_TCMLimpFlt_DsblAEMD = ((((rtb_TmpSignalConversionAtVeEN_c &&
            rtb_TmpSignalConversionAtVeAD_p) || (rtb_LogicalOperator_g3 &&
            (rtb_Comparison2_b || rtb_Logical1_cl))) ||
            rtb_TmpSignalConversionAtVeBP_b) ||
            ((KeSRAR_b_Dsbl_ST2_C1_ST1DsblAEMD) &&
             rtb_TmpSignalConversionAtVeGE_o));

        /* End of Outputs for SubSystem: '<S2256>/ST2Disabled' */
    }

    /* End of Switch: '<S2256>/Switch' */

    /* Logic: '<S1364>/Logical9' incorporates:
     *  Constant: '<S1419>/Constant1'
     *  Constant: '<S1419>/Constant2'
     *  Constant: '<S1421>/Constant1'
     *  Constant: '<S1421>/Constant2'
     *  Constant: '<S1434>/Calib'
     *  DataStoreRead: '<S1419>/StatusByte_InvData_BCS'
     *  DataStoreRead: '<S1421>/StatusByte_LosComWitAntBraSysABSConModB'
     *  Logic: '<S1364>/Logical10'
     *  Logic: '<S1419>/LogicalOperator'
     *  Logic: '<S1421>/LogicalOperator'
     *  RelationalOperator: '<S1419>/RelationalOperator1'
     *  RelationalOperator: '<S1419>/RelationalOperator2'
     *  RelationalOperator: '<S1421>/RelationalOperator1'
     *  RelationalOperator: '<S1421>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S1419>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S1419>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S1421>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S1421>/BitwiseOperator2'
     */
    VeSRAC_b_VDCM_LoC_CANC2_BSM = ((((KeSRAR_b_disableCANC2_BusOff) &&
        (VeSRAC_b_CANC2_BusOff)) || (((((sint32)
        SRAR_ac_DW.StatusByte_InvData_BCS) & 1) > 0) && ((((uint32)
        SRAR_ac_DW.StatusByte_InvData_BCS) & 64U) == 0U))) || (((((sint32)
        SRAR_ac_DW.StatusByte_LosComWitAntBraSysAB) & 1) > 0) && ((((uint32)
        SRAR_ac_DW.StatusByte_LosComWitAntBraSysAB) & 64U) == 0U)));

    /* Switch: '<S1431>/Switch1' */
    VeSRAC_b_VDCM_LoC_BSM = (rtb_Switch1_ajp && (VeSRAC_b_VDCM_LoC_CANC2_BSM));

    /* S-Function (sfix_bitop): '<S2155>/BitwiseOperator2' incorporates:
     *  DataStoreRead: '<S2155>/StatusByte_CommBus_B_Off'
     *  S-Function (sfix_bitop): '<S1745>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S1786>/BitwiseOperator7'
     *  S-Function (sfix_bitop): '<S2118>/BitwiseOperator2'
     *  Switch: '<S1759>/Switch1'
     *  Switch: '<S1787>/Switch1'
     *  Switch: '<S2122>/Switch1'
     */
    rtb_AND_d = ((sint32)SRAR_ac_DW.StatusByte_CommBus_B_Off) & 1;

    /* S-Function (sfix_bitop): '<S2155>/BitwiseOperator1' incorporates:
     *  DataStoreRead: '<S2155>/StatusByte_CommBus_B_Off'
     *  S-Function (sfix_bitop): '<S1745>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S2118>/BitwiseOperator1'
     *  Switch: '<S1759>/Switch1'
     *  Switch: '<S2122>/Switch1'
     */
    rtb_VeSRAR_b_TCMLmpFlt2_tmp = ((uint32)SRAR_ac_DW.StatusByte_CommBus_B_Off)
        & 64U;

    /* Logic: '<S2155>/LogicalOperator' incorporates:
     *  Constant: '<S2155>/Constant1'
     *  Constant: '<S2155>/Constant2'
     *  RelationalOperator: '<S2155>/RelationalOperator1'
     *  RelationalOperator: '<S2155>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S2155>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S2155>/BitwiseOperator2'
     */
    rtb_VeSRAR_b_TCMLmpFlt2 = ((rtb_AND_d > 0) && (rtb_VeSRAR_b_TCMLmpFlt2_tmp ==
        0U));

    /* Logic: '<S2166>/LogicalOperator' incorporates:
     *  Constant: '<S2166>/Constant1'
     *  Constant: '<S2166>/Constant2'
     *  DataStoreRead: '<S2166>/StatusByte_LostComm_DMCM_A'
     *  RelationalOperator: '<S2166>/RelationalOperator1'
     *  RelationalOperator: '<S2166>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S2166>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S2166>/BitwiseOperator2'
     */
    VeSRAC_b_MCPA_DualLOC_MCP_MC_Busoff = (((((sint32)
        SRAR_ac_DW.StatusByte_LostComm_DMCM_A) & 1) > 0) && ((((uint32)
        SRAR_ac_DW.StatusByte_LostComm_DMCM_A) & 64U) == 0U));

    /* S-Function (sfix_bitop): '<S2154>/BitwiseOperator2' incorporates:
     *  DataStoreRead: '<S2154>/StatusByte_CommBusOff'
     *  S-Function (sfix_bitop): '<S1744>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S1785>/BitwiseOperator7'
     *  Switch: '<S1759>/Switch1'
     *  Switch: '<S1787>/Switch1'
     */
    rtb_Switch1_fw = ((sint32)SRAR_ac_DW.StatusByte_CommBusOff) & 1;

    /* S-Function (sfix_bitop): '<S2154>/BitwiseOperator1' incorporates:
     *  DataStoreRead: '<S2154>/StatusByte_CommBusOff'
     *  S-Function (sfix_bitop): '<S1744>/BitwiseOperator1'
     *  Switch: '<S1759>/Switch1'
     */
    rtb_TmpSignalConversionAtVeEN_d = ((uint32)SRAR_ac_DW.StatusByte_CommBusOff)
        & 64U;

    /* Logic: '<S2154>/LogicalOperator' incorporates:
     *  Constant: '<S2154>/Constant1'
     *  Constant: '<S2154>/Constant2'
     *  RelationalOperator: '<S2154>/RelationalOperator1'
     *  RelationalOperator: '<S2154>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S2154>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S2154>/BitwiseOperator2'
     */
    rtb_TmpSignalConversionAtVeEN_c = ((rtb_Switch1_fw > 0) &&
        (rtb_TmpSignalConversionAtVeEN_d == 0U));

    /* Switch: '<S2172>/Switch1' */
    if (rtb_Switch1_ajp)
    {
        /* Logic: '<S2124>/Logical5' incorporates:
         *  Constant: '<S2157>/Constant1'
         *  Constant: '<S2157>/Constant2'
         *  DataStoreRead: '<S2157>/StatusByte_InvData_DMCM_A'
         *  Logic: '<S2157>/LogicalOperator'
         *  RelationalOperator: '<S2157>/RelationalOperator1'
         *  RelationalOperator: '<S2157>/RelationalOperator2'
         *  S-Function (sfix_bitop): '<S2157>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S2157>/BitwiseOperator2'
         */
        rtb_Logical8_dq = (((VeSRAC_b_MCPA_DualLOC_MCP_MC_Busoff) || (((((sint32)
                                SRAR_ac_DW.StatusByte_InvData_DMCM_A) & 1) > 0) &&
                             ((((uint32)SRAR_ac_DW.StatusByte_InvData_DMCM_A) &
                               64U) == 0U))) || rtb_TmpSignalConversionAtVeEN_c);

        /* Logic: '<S2113>/Logical8' incorporates:
         *  Constant: '<S2156>/Constant1'
         *  Constant: '<S2156>/Constant2'
         *  Constant: '<S2160>/Constant1'
         *  Constant: '<S2160>/Constant2'
         *  Constant: '<S2162>/Constant1'
         *  Constant: '<S2162>/Constant2'
         *  Constant: '<S2165>/Constant1'
         *  Constant: '<S2165>/Constant2'
         *  Constant: '<S2173>/Calib'
         *  Constant: '<S2174>/Calib'
         *  DataStoreRead: '<S2156>/StatusByte_InvData_DMCM_A_CANC11'
         *  DataStoreRead: '<S2160>/StatusByte_InvData_MCPA_CANC11'
         *  DataStoreRead: '<S2162>/StatusByte_LoC_MCPA_CANC11'
         *  DataStoreRead: '<S2165>/StatusByte_LostComm_DMCM_A_CANC11'
         *  Logic: '<S2124>/Logical10'
         *  Logic: '<S2124>/Logical13'
         *  Logic: '<S2124>/Logical14'
         *  Logic: '<S2124>/Logical16'
         *  Logic: '<S2124>/Logical4'
         *  Logic: '<S2124>/Logical9'
         *  Logic: '<S2156>/LogicalOperator'
         *  Logic: '<S2160>/LogicalOperator'
         *  Logic: '<S2162>/LogicalOperator'
         *  Logic: '<S2165>/LogicalOperator'
         *  RelationalOperator: '<S2156>/RelationalOperator1'
         *  RelationalOperator: '<S2156>/RelationalOperator2'
         *  RelationalOperator: '<S2160>/RelationalOperator1'
         *  RelationalOperator: '<S2160>/RelationalOperator2'
         *  RelationalOperator: '<S2162>/RelationalOperator1'
         *  RelationalOperator: '<S2162>/RelationalOperator2'
         *  RelationalOperator: '<S2165>/RelationalOperator1'
         *  RelationalOperator: '<S2165>/RelationalOperator2'
         *  S-Function (sfix_bitop): '<S2156>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S2156>/BitwiseOperator2'
         *  S-Function (sfix_bitop): '<S2160>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S2160>/BitwiseOperator2'
         *  S-Function (sfix_bitop): '<S2162>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S2162>/BitwiseOperator2'
         *  S-Function (sfix_bitop): '<S2165>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S2165>/BitwiseOperator2'
         */
        rtb_Logical8_dq = ((((((((((sint32)
            SRAR_ac_DW.StatusByte_LostComm_DMCM_A_CANC) & 1) > 0) && ((((uint32)
            SRAR_ac_DW.StatusByte_LostComm_DMCM_A_CANC) & 64U) == 0U)) ||
                               (((((sint32)
            SRAR_ac_DW.StatusByte_InvData_DMCM_A_CANC1) & 1) > 0) && ((((uint32)
            SRAR_ac_DW.StatusByte_InvData_DMCM_A_CANC1) & 64U) == 0U))) ||
                              rtb_VeSRAR_b_TCMLmpFlt2) && rtb_Logical8_dq) &&
                            (KeSRAR_b_EnableLoC_VFBEV)) || (((rtb_Logical8_dq ||
                              rtb_AND_gv) && (((((((sint32)
            SRAR_ac_DW.StatusByte_LoC_MCPA_CANC11) & 1) > 0) && ((((uint32)
            SRAR_ac_DW.StatusByte_LoC_MCPA_CANC11) & 64U) == 0U)) || (((((sint32)
            SRAR_ac_DW.StatusByte_InvData_MCPA_CANC11) & 1) > 0) && ((((uint32)
            SRAR_ac_DW.StatusByte_InvData_MCPA_CANC11) & 64U) == 0U))) ||
                              rtb_Logical21)) && (KeSRAR_b_EnableLoC_M182)));
    }
    else
    {
        /* Logic: '<S2113>/Logical8' incorporates:
         *  Constant: '<S2124>/Constant7'
         */
        rtb_Logical8_dq = false;
    }

    /* End of Switch: '<S2172>/Switch1' */

    /* Switch: '<S2035>/Switch1' */
    if (rtb_Logical8_dq)
    {
        /* Switch: '<S2067>/Switch1' incorporates:
         *  Constant: '<S1378>/ConstantValue20'
         */
        rtb_Switch1_anw = 1024U;
    }
    else
    {
        /* Switch: '<S2067>/Switch1' incorporates:
         *  Constant: '<S1378>/ConstantValue21'
         */
        rtb_Switch1_anw = 0U;
    }

    /* End of Switch: '<S2035>/Switch1' */

    /* Logic: '<S2164>/LogicalOperator' incorporates:
     *  Constant: '<S2164>/Constant1'
     *  Constant: '<S2164>/Constant2'
     *  DataStoreRead: '<S2164>/StatusByte_LostCommDMCM_2'
     *  RelationalOperator: '<S2164>/RelationalOperator1'
     *  RelationalOperator: '<S2164>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S2164>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S2164>/BitwiseOperator2'
     */
    VeSRAC_b_MCPB_DualLOC_MCP_MC_Busoff = (((((sint32)
        SRAR_ac_DW.StatusByte_LostCommDMCM_2) & 1) > 0) && ((((uint32)
        SRAR_ac_DW.StatusByte_LostCommDMCM_2) & 64U) == 0U));

    /* Logic: '<S2124>/Logical6' incorporates:
     *  Constant: '<S2158>/Constant1'
     *  Constant: '<S2158>/Constant2'
     *  DataStoreRead: '<S2158>/StatusByte_InvData_DMCM_B'
     *  Logic: '<S2158>/LogicalOperator'
     *  RelationalOperator: '<S2158>/RelationalOperator1'
     *  RelationalOperator: '<S2158>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S2158>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S2158>/BitwiseOperator2'
     */
    rtb_VeSRAR_b_TCMLmpFlt1 = ((VeSRAC_b_MCPB_DualLOC_MCP_MC_Busoff) ||
        (((((sint32)SRAR_ac_DW.StatusByte_InvData_DMCM_B) & 1) > 0) &&
         ((((uint32)SRAR_ac_DW.StatusByte_InvData_DMCM_B) & 64U) == 0U)));

    /* Switch: '<S2168>/Switch1' */
    if (rtb_Switch1_ajp)
    {
        /* UnitDelay: '<S201>/UnitDelay' incorporates:
         *  Constant: '<S2161>/Constant1'
         *  Constant: '<S2161>/Constant2'
         *  Constant: '<S2163>/Constant1'
         *  Constant: '<S2163>/Constant2'
         *  DataStoreRead: '<S2161>/StatusByte_InvData_MCPB_CANC11'
         *  DataStoreRead: '<S2163>/StatusByte_LoC_MCPB_CANC11'
         *  Logic: '<S2124>/Logical1'
         *  Logic: '<S2124>/Logical3'
         *  Logic: '<S2124>/Logical7'
         *  Logic: '<S2161>/LogicalOperator'
         *  Logic: '<S2163>/LogicalOperator'
         *  RelationalOperator: '<S2161>/RelationalOperator1'
         *  RelationalOperator: '<S2161>/RelationalOperator2'
         *  RelationalOperator: '<S2163>/RelationalOperator1'
         *  RelationalOperator: '<S2163>/RelationalOperator2'
         *  S-Function (sfix_bitop): '<S2161>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S2161>/BitwiseOperator2'
         *  S-Function (sfix_bitop): '<S2163>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S2163>/BitwiseOperator2'
         */
        rtb_UnitDelay_eb = ((rtb_VeSRAR_b_TCMLmpFlt1 || rtb_AND_gv) &&
                            (((((((sint32)SRAR_ac_DW.StatusByte_LoC_MCPB_CANC11)
            & 1) > 0) && ((((uint32)SRAR_ac_DW.StatusByte_LoC_MCPB_CANC11) & 64U)
                          == 0U)) || (((((sint32)
            SRAR_ac_DW.StatusByte_InvData_MCPB_CANC11) & 1) > 0) && ((((uint32)
            SRAR_ac_DW.StatusByte_InvData_MCPB_CANC11) & 64U) == 0U))) ||
                             rtb_Logical21));
    }
    else
    {
        /* UnitDelay: '<S201>/UnitDelay' incorporates:
         *  Constant: '<S2124>/Constant1'
         */
        rtb_UnitDelay_eb = false;
    }

    /* End of Switch: '<S2168>/Switch1' */

    /* Logic: '<S2124>/Logical8' */
    rtb_Merge1_i = (rtb_Logical8_dq && rtb_UnitDelay_eb);

    /* Logic: '<S2328>/Logical7' incorporates:
     *  Constant: '<S2346>/Constant'
     *  Constant: '<S2349>/Calib'
     *  RelationalOperator: '<S2328>/Comparison5'
     */
    VeSRAC_b_NZeroPhaseLimpActv = ((((uint32)rtb_TmpSignalConversionAtVeT_nz) ==
        CeTINR_e_LimpActive) && (KeSRAR_b_NzeroPhsLimpD6Enbl));

    /* Switch: '<S2170>/Switch1' */
    rtb_VeSRAR_b_TCMLmpFlt1 = (rtb_Switch1_ajp && rtb_VeSRAR_b_TCMLmpFlt1);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeINVR_b_MtrBFlt_HV_CntctrOpnRq_FA' */
    (void)Rte_Read_VeINVR_b_MtrBFlt_HV_CntctrOpnRq_FA_Value(&rtb_Logical2_j4);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRAR_MedTEB'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Logic: '<S1380>/Logical6' incorporates:
     *  Constant: '<S2119>/Constant1'
     *  Constant: '<S2119>/Constant2'
     *  DataStoreRead: '<S2119>/StatusByte_DM_B_I_PwrSplyCkt'
     *  Logic: '<S1380>/Logical7'
     *  Logic: '<S2119>/LogicalOperator'
     *  RelationalOperator: '<S2119>/RelationalOperator1'
     *  RelationalOperator: '<S2119>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S2119>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S2119>/BitwiseOperator2'
     */
    VeSRAC_b_MCPBOpnContactRec = ((((((sint32)
        SRAR_ac_DW.StatusByte_DM_B_I_PwrSplyCkt) & 1) > 0) && ((((uint32)
        SRAR_ac_DW.StatusByte_DM_B_I_PwrSplyCkt) & 64U) == 0U)) ||
        (rtb_Logical2_j4 && rtb_VeSRAR_b_TCMLmpFlt1));

    /* Logic: '<S2167>/LogicalOperator' incorporates:
     *  Constant: '<S2167>/Constant1'
     *  Constant: '<S2167>/Constant2'
     *  DataStoreRead: '<S2167>/StatusByte_LostComm_GenrA_CM'
     *  RelationalOperator: '<S2167>/RelationalOperator1'
     *  RelationalOperator: '<S2167>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S2167>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S2167>/BitwiseOperator2'
     */
    VeSRAC_b_MCPC_DualLOC_MCP_MC_Busoff = (((((sint32)
        SRAR_ac_DW.StatusByte_LostComm_GenrA_CM) & 1) > 0) && ((((uint32)
        SRAR_ac_DW.StatusByte_LostComm_GenrA_CM) & 64U) == 0U));

    /* Switch: '<S1787>/Switch1' incorporates:
     *  Constant: '<S1788>/Calib'
     *  Inport: '<Root>/VeBPCR_b_HVBatCntctrWeld_Qualifier'
     */
    if (KeSRAR_b_ThrmlRnawyFlg_OvrdEnbl)
    {
        /* Switch: '<S1787>/Switch1' incorporates:
         *  Constant: '<S1789>/Calib'
         */
        rtb_TmpSignalConversionAtVeIN_p = KeSRAR_b_ThrmlRnawyFlg_OvrdVal;
    }
    else
    {
        (void)Rte_Read_VeBPCR_b_HVBatCntctrWeld_Qualifier_Value(&Logical13_o);

        /* Switch: '<S1787>/Switch1' incorporates:
         *  Constant: '<S1785>/Constant'
         *  Constant: '<S1786>/Constant'
         *  Inport: '<Root>/VeBPCR_b_HVBatCntctrWeld_Qualifier'
         *  Logic: '<S1707>/Logical10'
         *  Logic: '<S1707>/Logical13'
         *  Logic: '<S1707>/Logical14'
         *  Logic: '<S1707>/Logical16'
         *  Logic: '<S1707>/Logical17'
         *  RelationalOperator: '<S1785>/RelationalOperator'
         *  RelationalOperator: '<S1786>/RelationalOperator'
         */
        rtb_TmpSignalConversionAtVeIN_p = ((rtb_TmpSignalConversionAtVeIN_p ||
            (rtb_VeSRAR_b_TCMLmpFlt1 || (rtb_AND_d > 0))) && (Logical13_o ||
            (rtb_Switch1_lt || (rtb_Switch1_fw > 0))));
    }

    /* Outputs for Atomic SubSystem: '<S1707>/TurnOnDelayTime2' */
    /* Outputs for Atomic SubSystem: '<S1792>/EdgeRising' */
    /* Logic: '<S2113>/Logical8' incorporates:
     *  UnitDelay: '<S1793>/UnitDelay'
     */
    rtb_Logical8_dq = SRAR_ac_DW.UnitDelay_DSTATE_ci;

    /* Update for UnitDelay: '<S1793>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_ci = rtb_TmpSignalConversionAtVeIN_p;

    /* Switch: '<S1792>/Switch1' incorporates:
     *  Logic: '<S1792>/OR'
     *  Logic: '<S1792>/OR1'
     *  Logic: '<S1793>/AND'
     *  Logic: '<S1793>/OR1'
     */
    if ((!rtb_TmpSignalConversionAtVeIN_p) || (rtb_TmpSignalConversionAtVeIN_p &&
         (!rtb_Logical8_dq)))
    {
        /* Switch: '<S1792>/Switch1' incorporates:
         *  Constant: '<S1792>/ConstantValue1'
         */
        rtb_TmpSignalConversionAtVeGENR = 0.0F;
    }
    else
    {
        /* Switch: '<S1792>/Switch1' incorporates:
         *  Constant: '<S1790>/Calib'
         *  Constant: '<S1791>/Calib'
         *  MinMax: '<S1792>/Minimum'
         *  Sum: '<S1792>/Summation'
         *  UnitDelay: '<S1792>/UnitDelay'
         */
        rtb_TmpSignalConversionAtVeGENR = fminf
            (KeSRAR_t_ThrmlRnawyFlgTurnONDelay, KeSRAR_t_dT +
             SRAR_ac_DW.UnitDelay_DSTATE_j);
    }

    /* End of Switch: '<S1792>/Switch1' */
    /* End of Outputs for SubSystem: '<S1792>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S1707>/TurnOnDelayTime2' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCSVR_b_VehSpdVSOSigFailSts' */
    (void)Rte_Read_VeCSVR_b_VehSpdVSOSigFailSts_Value(&rtb_Logical1_aq);

    /* Inport: '<Root>/VeCSVR_b_CanSigVehSpd_FA' */
    (void)Rte_Read_VeCSVR_b_CanSigVehSpd_FA_Value(&Logical13);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRAR_MedTEB'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Outputs for Atomic SubSystem: '<S1707>/TurnOnDelayTime2' */
    /* Update for UnitDelay: '<S1792>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_j = rtb_TmpSignalConversionAtVeGENR;

    /* End of Outputs for SubSystem: '<S1707>/TurnOnDelayTime2' */

    /* Logic: '<S2251>/Logical1' */
    rtb_Logical1_aq = (Logical13 || rtb_Logical1_aq);

    /* Outputs for Atomic SubSystem: '<S2251>/TurnOnDelayTime1' */
    /* Outputs for Atomic SubSystem: '<S2309>/EdgeRising' */
    /* Logic: '<S2310>/AND' incorporates:
     *  Logic: '<S2310>/OR1'
     *  UnitDelay: '<S2310>/UnitDelay'
     */
    rtb_Logical8_dq = (rtb_Logical1_aq && (!SRAR_ac_DW.UnitDelay_DSTATE_krv));

    /* Update for UnitDelay: '<S2310>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_krv = rtb_Logical1_aq;

    /* End of Outputs for SubSystem: '<S2309>/EdgeRising' */

    /* Switch: '<S2309>/Switch1' incorporates:
     *  Logic: '<S2309>/OR'
     *  Logic: '<S2309>/OR1'
     */
    if ((!rtb_Logical1_aq) || rtb_Logical8_dq)
    {
        /* Switch: '<S2309>/Switch1' incorporates:
         *  Constant: '<S2309>/ConstantValue1'
         */
        rtb_Switch1_io = 0.0F;
    }
    else
    {
        /* Switch: '<S2309>/Switch1' incorporates:
         *  Constant: '<S2307>/Calib'
         *  Constant: '<S2308>/Calib'
         *  MinMax: '<S2309>/Minimum'
         *  Sum: '<S2309>/Summation'
         *  UnitDelay: '<S2309>/UnitDelay'
         */
        rtb_Switch1_io = fminf(KeSRAR_t_VehSpdFATurnONdelay, KeSRAR_t_dT +
                               SRAR_ac_DW.UnitDelay_DSTATE);
    }

    /* End of Switch: '<S2309>/Switch1' */
    /* End of Outputs for SubSystem: '<S2251>/TurnOnDelayTime1' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeAPSR_b_AccelPedalEffPositionFA' */
    (void)Rte_Read_VeAPSR_b_AccelPedalEffPositionFA_Value(&AND_o);

    /* Inport: '<Root>/VePMDR_b_SysVoltLowFA_BF3' */
    (void)Rte_Read_VePMDR_b_SysVoltLowFA_BF3_Value(&rtb_Merge2);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRAR_MedTEB'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Outputs for Atomic SubSystem: '<S2251>/TurnOnDelayTime1' */
    /* Update for UnitDelay: '<S2309>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE = rtb_Switch1_io;

    /* End of Outputs for SubSystem: '<S2251>/TurnOnDelayTime1' */

    /* Logic: '<S1712>/Logical5' incorporates:
     *  Constant: '<S1798>/Calib'
     *  Logic: '<S1712>/Logical6'
     */
    VeSRAC_b_SysVoltLowFA_BF13 = ((rtb_LogicalOperator_ln &&
        (rtb_TmpSignalConversionAtVePM_m && rtb_Merge2)) &&
        (KeSRAR_b_enable_actionBF1_3));

    /* Logic: '<S1532>/Logical14' incorporates:
     *  DataTypeConversion: '<S1532>/DataTypeConversion'
     *  Logic: '<S1532>/Logical13'
     *  RelationalOperator: '<S1532>/Comparison4'
     */
    VeSRAC_b_RPMLimAccrtTrq = (((!rtb_TmpSignalConversionAtVeENGR) &&
        rtb_TmpSignalConversionAtVeEN_b) && (((sint32)((uint8)tmpRead_s)) == 2));

    /* Logic: '<S1532>/Logical15' */
    VeSRAC_b_RPMLimWith_PedalFailures = ((VeSRAC_b_RPMLimAccrtTrq) && AND_o);

    /* Switch: '<S1759>/Switch1' */
    if (rtb_Switch1_ajp)
    {
        /* Logic: '<S1688>/Logical10' incorporates:
         *  Constant: '<S1752>/Constant1'
         *  Constant: '<S1752>/Constant2'
         *  Constant: '<S1755>/Constant1'
         *  Constant: '<S1755>/Constant2'
         *  DataStoreRead: '<S1752>/StatusByte_InvData_BECM_CANC11'
         *  DataStoreRead: '<S1755>/StatusByte_LosCommBECM_A_CANC11'
         *  Logic: '<S1688>/Logical16'
         *  Logic: '<S1752>/LogicalOperator'
         *  Logic: '<S1755>/LogicalOperator'
         *  RelationalOperator: '<S1752>/RelationalOperator1'
         *  RelationalOperator: '<S1752>/RelationalOperator2'
         *  RelationalOperator: '<S1755>/RelationalOperator1'
         *  RelationalOperator: '<S1755>/RelationalOperator2'
         *  S-Function (sfix_bitop): '<S1752>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S1752>/BitwiseOperator2'
         *  S-Function (sfix_bitop): '<S1755>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S1755>/BitwiseOperator2'
         */
        rtb_Logical8_dq = ((((((sint32)
                               SRAR_ac_DW.StatusByte_LosCommBECM_A_CANC11) & 1) >
                             0) && ((((uint32)
                               SRAR_ac_DW.StatusByte_LosCommBECM_A_CANC11) & 64U)
                             == 0U)) || (((((sint32)
                               SRAR_ac_DW.StatusByte_InvData_BECM_CANC11) & 1) >
                             0) && ((((uint32)
                               SRAR_ac_DW.StatusByte_InvData_BECM_CANC11) & 64U)
                             == 0U)));

        /* Logic: '<S2113>/Logical8' incorporates:
         *  Constant: '<S1744>/Constant1'
         *  Constant: '<S1744>/Constant2'
         *  Constant: '<S1745>/Constant1'
         *  Constant: '<S1745>/Constant2'
         *  Constant: '<S1765>/Calib'
         *  Constant: '<S1766>/Calib'
         *  Logic: '<S1688>/Logical10'
         *  Logic: '<S1688>/Logical13'
         *  Logic: '<S1688>/Logical14'
         *  Logic: '<S1688>/Logical16'
         *  Logic: '<S1688>/Logical17'
         *  Logic: '<S1688>/Logical18'
         *  Logic: '<S1688>/Logical19'
         *  Logic: '<S1744>/LogicalOperator'
         *  Logic: '<S1745>/LogicalOperator'
         *  RelationalOperator: '<S1744>/RelationalOperator1'
         *  RelationalOperator: '<S1744>/RelationalOperator2'
         *  RelationalOperator: '<S1745>/RelationalOperator1'
         *  RelationalOperator: '<S1745>/RelationalOperator2'
         */
        rtb_Logical8_dq = ((((rtb_Logical11 || rtb_AND_gv) && (rtb_Logical8_dq ||
                              rtb_Logical21)) &&
                            (KeSRAR_b_enbl_BPCM_Loc_BusOff_M182)) ||
                           (((rtb_Logical11 || ((rtb_Switch1_fw > 0) &&
                               (rtb_TmpSignalConversionAtVeEN_d == 0U))) &&
                             (rtb_Logical8_dq || ((rtb_AND_d > 0) &&
                               (rtb_VeSRAR_b_TCMLmpFlt2_tmp == 0U)))) &&
                            (KeSRAR_b_enbl_BPCM_Loc_BusOff_VFBEV)));
    }
    else
    {
        /* Logic: '<S2113>/Logical8' incorporates:
         *  Constant: '<S1688>/Constant2'
         */
        rtb_Logical8_dq = false;
    }

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeINVR_b_DMPI_TempStopFlag' */
    (void)Rte_Read_VeINVR_b_DMPI_TempStopFlag_Value(&rtb_Comparison1_l4);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRAR_MedTEB'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Logic: '<S2125>/Logical4' incorporates:
     *  Logic: '<S2125>/Logical5'
     */
    VeSRAC_b_MtrCInvrtrFaulted_HVCntctrClsd = ((VeSRAC_b_MtrCInvrtrFaulted) && (
        !rtb_TmpSignalConversionAtVeIN_d));

    /* Switch: '<S2256>/Switch2' incorporates:
     *  Constant: '<S2256>/FALSEConstant6'
     *  Constant: '<S2386>/Calib'
     *  Logic: '<S2256>/LogicalOperator5'
     *  Logic: '<S2354>/Logical3'
     */
    if (rtb_Switch5_f)
    {
        rtb_TmpSignalConversionAtVeIN_d = false;
    }
    else
    {
        rtb_TmpSignalConversionAtVeIN_d =
            (((KeSRAR_b_Dsbl_ST2_C1_ST1_DsblDrvAllwd) &&
              rtb_TmpSignalConversionAtVeGE_o) ||
             rtb_TmpSignalConversionAtVeBP_b);
    }

    /* End of Switch: '<S2256>/Switch2' */

    /* Switch: '<S2034>/Switch1' incorporates:
     *  Constant: '<S1378>/ConstantValue2'
     *  Constant: '<S1378>/ConstantValue3'
     */
    if (rtb_TmpSignalConversionAtVeIN_d)
    {
        rtb_TmpSignalConversionAtVeOB_3 = 2;
    }
    else
    {
        rtb_TmpSignalConversionAtVeOB_3 = 0;
    }

    /* End of Switch: '<S2034>/Switch1' */

    /* Switch: '<S2045>/Switch1' incorporates:
     *  Constant: '<S1378>/ConstantValue4'
     *  Constant: '<S1378>/ConstantValue5'
     */
    if (VeSRAC_b_TCMLimpFlt_InhibitM1)
    {
        rtb_Switch1_fw = 4;
    }
    else
    {
        rtb_Switch1_fw = 0;
    }

    /* End of Switch: '<S2045>/Switch1' */

    /* Switch: '<S2056>/Switch1' incorporates:
     *  Constant: '<S1378>/ConstantValue6'
     *  Constant: '<S1378>/ConstantValue7'
     */
    if (VeSRAC_b_TCMLimpFlt_InhibitM2)
    {
        rtb_Switch1_h0 = 8;
    }
    else
    {
        rtb_Switch1_h0 = 0;
    }

    /* End of Switch: '<S2056>/Switch1' */

    /* Switch: '<S2059>/Switch1' incorporates:
     *  Constant: '<S1378>/ConstantValue8'
     *  Constant: '<S1378>/ConstantValue9'
     */
    if (VeSRAC_b_TCMLimpFlt_OvrrideEngOn)
    {
        rtb_Switch1_mu = 16;
    }
    else
    {
        rtb_Switch1_mu = 0;
    }

    /* End of Switch: '<S2059>/Switch1' */

    /* Switch: '<S2060>/Switch1' incorporates:
     *  Constant: '<S1378>/ConstantValue10'
     *  Constant: '<S1378>/ConstantValue11'
     */
    if (VeSRAC_b_TCMLimpFlt_DsblAEMD)
    {
        rtb_AND_cg = 32;
    }
    else
    {
        rtb_AND_cg = 0;
    }

    /* End of Switch: '<S2060>/Switch1' */

    /* Switch: '<S2061>/Switch1' incorporates:
     *  Constant: '<S1378>/ConstantValue12'
     *  Constant: '<S1378>/ConstantValue13'
     */
    if (rtb_TmpSignalConversionAtVeIMPR)
    {
        rtb_VeSRAR_b_HVOverVoltFailur_f = 64;
    }
    else
    {
        rtb_VeSRAR_b_HVOverVoltFailur_f = 0;
    }

    /* End of Switch: '<S2061>/Switch1' */

    /* Switch: '<S2062>/Switch1' incorporates:
     *  Constant: '<S1378>/ConstantValue14'
     *  Constant: '<S1378>/ConstantValue15'
     */
    if (rtb_TmpSignalConversionAtVeB_j2)
    {
        tmpRead_13 = 128;
    }
    else
    {
        tmpRead_13 = 0;
    }

    /* End of Switch: '<S2062>/Switch1' */

    /* Switch: '<S2063>/Switch1' incorporates:
     *  Constant: '<S1378>/ConstantValue16'
     *  Constant: '<S1378>/ConstantValue17'
     */
    if (rtb_TmpSignalConversionAtVeBP_b)
    {
        rtb_Comparison6_b = 256;
    }
    else
    {
        rtb_Comparison6_b = 0;
    }

    /* End of Switch: '<S2063>/Switch1' */

    /* Switch: '<S2064>/Switch1' incorporates:
     *  Constant: '<S1378>/ConstantValue18'
     *  Constant: '<S1378>/ConstantValue19'
     */
    if (VeSRAC_b_VDCM_LoC_BSM)
    {
        rtb_OR1_ot = 512;
    }
    else
    {
        rtb_OR1_ot = 0;
    }

    /* End of Switch: '<S2064>/Switch1' */

    /* Switch: '<S2036>/Switch1' incorporates:
     *  Constant: '<S1378>/ConstantValue22'
     *  Constant: '<S1378>/ConstantValue23'
     */
    if (rtb_UnitDelay_eb)
    {
        rtb_VeSRAR_b_HVOverVoltFailur_1 = 2048;
    }
    else
    {
        rtb_VeSRAR_b_HVOverVoltFailur_1 = 0;
    }

    /* End of Switch: '<S2036>/Switch1' */

    /* Switch: '<S2037>/Switch1' incorporates:
     *  Constant: '<S1378>/ConstantValue24'
     *  Constant: '<S1378>/ConstantValue25'
     */
    if (rtb_Merge1_i)
    {
        rtb_TmpSignalConversionAtVeOB_2 = 4096;
    }
    else
    {
        rtb_TmpSignalConversionAtVeOB_2 = 0;
    }

    /* End of Switch: '<S2037>/Switch1' */

    /* Switch: '<S2038>/Switch1' incorporates:
     *  Constant: '<S1378>/ConstantValue26'
     *  Constant: '<S1378>/ConstantValue27'
     */
    if (VeSRAC_b_NZeroPhaseLimpActv)
    {
        rtb_LogicalOperator_cr = 8192;
    }
    else
    {
        rtb_LogicalOperator_cr = 0;
    }

    /* End of Switch: '<S2038>/Switch1' */

    /* Switch: '<S2123>/Switch1' incorporates:
     *  Constant: '<S1380>/Constant3'
     *  Constant: '<S2120>/Constant1'
     *  Constant: '<S2120>/Constant2'
     *  Constant: '<S2121>/Constant1'
     *  Constant: '<S2121>/Constant2'
     *  DataStoreRead: '<S2120>/StatusByte_InvData_SGCM'
     *  DataStoreRead: '<S2121>/StatusByte_LostCommSGCM'
     *  Logic: '<S1380>/Logical4'
     *  Logic: '<S2120>/LogicalOperator'
     *  Logic: '<S2121>/LogicalOperator'
     *  RelationalOperator: '<S2120>/RelationalOperator1'
     *  RelationalOperator: '<S2120>/RelationalOperator2'
     *  RelationalOperator: '<S2121>/RelationalOperator1'
     *  RelationalOperator: '<S2121>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S2120>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S2120>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S2121>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S2121>/BitwiseOperator2'
     */
    if (rtb_Switch1_ajp)
    {
        rtb_Merge1_i = ((((((sint32)SRAR_ac_DW.StatusByte_InvData_SGCM) & 1) > 0)
                         && ((((uint32)SRAR_ac_DW.StatusByte_InvData_SGCM) & 64U)
                             == 0U)) || (((((sint32)
                            SRAR_ac_DW.StatusByte_LostCommSGCM) & 1) > 0) &&
                         ((((uint32)SRAR_ac_DW.StatusByte_LostCommSGCM) & 64U) ==
                          0U)));
    }
    else
    {
        rtb_Merge1_i = false;
    }

    /* End of Switch: '<S2123>/Switch1' */

    /* Switch: '<S2039>/Switch1' incorporates:
     *  Constant: '<S1378>/ConstantValue28'
     *  Constant: '<S1378>/ConstantValue29'
     */
    if (rtb_Merge1_i)
    {
        rtb_TmpSignalConversionAtVeOB_1 = 16384;
    }
    else
    {
        rtb_TmpSignalConversionAtVeOB_1 = 0;
    }

    /* End of Switch: '<S2039>/Switch1' */

    /* Switch: '<S2040>/Switch1' incorporates:
     *  Constant: '<S1378>/ConstantValue30'
     *  Constant: '<S1378>/ConstantValue31'
     */
    if (rtb_VeSRAR_b_TCMLmpFlt1)
    {
        rtb_AND_ll = 32768;
    }
    else
    {
        rtb_AND_ll = 0;
    }

    /* End of Switch: '<S2040>/Switch1' */

    /* Switch: '<S2122>/Switch1' incorporates:
     *  Constant: '<S1380>/Constant2'
     *  Constant: '<S2118>/Constant1'
     *  Constant: '<S2118>/Constant2'
     *  Logic: '<S2118>/LogicalOperator'
     *  RelationalOperator: '<S2118>/RelationalOperator1'
     *  RelationalOperator: '<S2118>/RelationalOperator2'
     */
    if (rtb_Switch1_ajp)
    {
        rtb_Merge1_i = ((rtb_AND_d > 0) && (rtb_VeSRAR_b_TCMLmpFlt2_tmp == 0U));
    }
    else
    {
        rtb_Merge1_i = false;
    }

    /* Switch: '<S2041>/Switch1' incorporates:
     *  Constant: '<S1378>/ConstantValue32'
     *  Constant: '<S1378>/ConstantValue33'
     */
    if (rtb_Merge1_i)
    {
        rtb_Switch1_mu_0 = 65536U;
    }
    else
    {
        rtb_Switch1_mu_0 = 0U;
    }

    /* End of Switch: '<S2041>/Switch1' */

    /* Switch: '<S2042>/Switch1' incorporates:
     *  Constant: '<S1378>/ConstantValue44'
     *  Constant: '<S1378>/ConstantValue55'
     */
    if (VeSRAC_b_MCPBOpnContactRec)
    {
        rtb_VeSRAR_b_TCMLmpFlt2_tmp = 131072U;
    }
    else
    {
        rtb_VeSRAR_b_TCMLmpFlt2_tmp = 0U;
    }

    /* End of Switch: '<S2042>/Switch1' */

    /* Switch: '<S2169>/Switch1' incorporates:
     *  Constant: '<S2124>/Constant2'
     *  Constant: '<S2159>/Constant1'
     *  Constant: '<S2159>/Constant2'
     *  DataStoreRead: '<S2159>/StatusByte_InvData_GenrA_CM'
     *  Logic: '<S2124>/Logical15'
     *  Logic: '<S2159>/LogicalOperator'
     *  RelationalOperator: '<S2159>/RelationalOperator1'
     *  RelationalOperator: '<S2159>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S2159>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S2159>/BitwiseOperator2'
     */
    if (rtb_Switch1_ajp)
    {
        rtb_Merge1_i = ((((((((sint32)SRAR_ac_DW.StatusByte_InvData_GenrA_CM) &
                             1) > 0) && ((((uint32)
                              SRAR_ac_DW.StatusByte_InvData_GenrA_CM) & 64U) ==
                            0U)) || (VeSRAC_b_MCPC_DualLOC_MCP_MC_Busoff)) ||
                         rtb_VeSRAR_b_TCMLmpFlt2) ||
                        rtb_TmpSignalConversionAtVeEN_c);
    }
    else
    {
        rtb_Merge1_i = false;
    }

    /* End of Switch: '<S2169>/Switch1' */

    /* Switch: '<S2050>/Switch1' incorporates:
     *  Constant: '<S1378>/ConstantValue58'
     *  Constant: '<S1378>/ConstantValue59'
     */
    if (rtb_Merge1_i)
    {
        rtb_VeSRAR_b_PPCTIS_ReducePer_0 = 262144U;
    }
    else
    {
        rtb_VeSRAR_b_PPCTIS_ReducePer_0 = 0U;
    }

    /* End of Switch: '<S2050>/Switch1' */

    /* Switch: '<S2051>/Switch1' incorporates:
     *  Constant: '<S1378>/ConstantValue60'
     *  Constant: '<S1378>/ConstantValue61'
     */
    if (rtb_TmpSignalConversionAtVeIN_p)
    {
        rtb_Comparison3_ou = 524288U;
    }
    else
    {
        rtb_Comparison3_ou = 0U;
    }

    /* End of Switch: '<S2051>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S1707>/TurnOnDelayTime2' */
    /* Switch: '<S2052>/Switch1' incorporates:
     *  Constant: '<S1378>/ConstantValue62'
     *  Constant: '<S1378>/ConstantValue63'
     *  Constant: '<S1790>/Calib'
     *  Logic: '<S1792>/AND'
     *  RelationalOperator: '<S1792>/GreaterThan'
     */
    if (rtb_TmpSignalConversionAtVeIN_p && (rtb_TmpSignalConversionAtVeGENR >=
            KeSRAR_t_ThrmlRnawyFlgTurnONDelay))
    {
        rtb_TmpSignalConversionAtVeTI_o = 1048576U;
    }
    else
    {
        rtb_TmpSignalConversionAtVeTI_o = 0U;
    }

    /* End of Switch: '<S2052>/Switch1' */
    /* End of Outputs for SubSystem: '<S1707>/TurnOnDelayTime2' */

    /* Outputs for Atomic SubSystem: '<S2251>/TurnOnDelayTime1' */
    /* Switch: '<S2053>/Switch1' incorporates:
     *  Constant: '<S1378>/ConstantValue34'
     *  Constant: '<S1378>/ConstantValue35'
     *  Constant: '<S2307>/Calib'
     *  Logic: '<S2309>/AND'
     *  RelationalOperator: '<S2309>/GreaterThan'
     */
    if (rtb_Logical1_aq && (rtb_Switch1_io >= KeSRAR_t_VehSpdFATurnONdelay))
    {
        rtb_Logical1_l = 2097152U;
    }
    else
    {
        rtb_Logical1_l = 0U;
    }

    /* End of Switch: '<S2053>/Switch1' */
    /* End of Outputs for SubSystem: '<S2251>/TurnOnDelayTime1' */

    /* Switch: '<S2054>/Switch1' incorporates:
     *  Constant: '<S1378>/ConstantValue36'
     *  Constant: '<S1378>/ConstantValue37'
     */
    if (VeSRAC_b_SysVoltLowFA_BF13)
    {
        rtb_TmpSignalConversionAtVeEN_d = 4194304U;
    }
    else
    {
        rtb_TmpSignalConversionAtVeEN_d = 0U;
    }

    /* End of Switch: '<S2054>/Switch1' */

    /* Switch: '<S2055>/Switch1' incorporates:
     *  Constant: '<S1378>/ConstantValue38'
     *  Constant: '<S1378>/ConstantValue39'
     */
    if (VeSRAC_b_RPMLimAccrtTrq)
    {
        rtb_Comparison1_ij = 8388608U;
    }
    else
    {
        rtb_Comparison1_ij = 0U;
    }

    /* End of Switch: '<S2055>/Switch1' */

    /* Switch: '<S2057>/Switch1' incorporates:
     *  Constant: '<S1378>/ConstantValue40'
     *  Constant: '<S1378>/ConstantValue41'
     */
    if (VeSRAC_b_RPMLimWith_PedalFailures)
    {
        rtb_VeSRAR_b_SpinUpFailed_0 = 16777216U;
    }
    else
    {
        rtb_VeSRAR_b_SpinUpFailed_0 = 0U;
    }

    /* End of Switch: '<S2057>/Switch1' */

    /* Switch: '<S2058>/Switch1' incorporates:
     *  Constant: '<S1378>/ConstantValue42'
     *  Constant: '<S1378>/ConstantValue43'
     */
    if (rtb_Logical8_dq)
    {
        rtb_Switch1_f3 = 33554432U;
    }
    else
    {
        rtb_Switch1_f3 = 0U;
    }

    /* End of Switch: '<S2058>/Switch1' */

    /* Switch: '<S2044>/Switch1' incorporates:
     *  Constant: '<S1378>/ConstantValue47'
     *  Constant: '<S1378>/ConstantValue48'
     */
    if (rtb_Comparison1_l4)
    {
        rtb_Comparison1_aq = 134217728U;
    }
    else
    {
        rtb_Comparison1_aq = 0U;
    }

    /* End of Switch: '<S2044>/Switch1' */

    /* Switch: '<S2046>/Switch1' incorporates:
     *  Constant: '<S1378>/ConstantValue49'
     *  Constant: '<S1378>/ConstantValue50'
     */
    if (VeSRAC_b_MtrCInvrtrFaulted_HVCntctrClsd)
    {
        rtb_TmpSignalConversionAtVeBP_p = 268435456U;
    }
    else
    {
        rtb_TmpSignalConversionAtVeBP_p = 0U;
    }

    /* End of Switch: '<S2046>/Switch1' */

    /* Switch: '<S2047>/Switch1' incorporates:
     *  Constant: '<S1378>/ConstantValue51'
     *  Constant: '<S1378>/ConstantValue52'
     *  Logic: '<S2260>/Logical6'
     */
    if (rtb_Switch1_oz && rtb_Logical6)
    {
        rtb_Switch1_a3 = 536870912U;
    }
    else
    {
        rtb_Switch1_a3 = 0U;
    }

    /* End of Switch: '<S2047>/Switch1' */

    /* Switch: '<S2048>/Switch1' incorporates:
     *  Constant: '<S1378>/ConstantValue53'
     *  Constant: '<S1378>/ConstantValue54'
     *  Logic: '<S2260>/Logical7'
     */
    if ((VeSRAC_b_MtrBInvrtrFaulted) && rtb_VeSRAR_b_WEDStuckOpen)
    {
        rtb_VeSRAR_b_AuxPumpFail_Inhi_0 = 1073741824U;
    }
    else
    {
        rtb_VeSRAR_b_AuxPumpFail_Inhi_0 = 0U;
    }

    /* End of Switch: '<S2048>/Switch1' */

    /* Switch: '<S2049>/Switch1' incorporates:
     *  Constant: '<S1378>/ConstantValue56'
     *  Constant: '<S1378>/ConstantValue57'
     *  Logic: '<S2260>/Logical8'
     */
    if ((VeSRAC_b_MtrBInvrtrFaulted) && rtb_Logical6)
    {
        rtb_VeSRAR_b_CKSFailed_0 = 2147483648U;
    }
    else
    {
        rtb_VeSRAR_b_CKSFailed_0 = 0U;
    }

    /* End of Switch: '<S2049>/Switch1' */

    /* S-Function (sfix_bitop): '<S1378>/BitwiseLogicalOperator' incorporates:
     *  Switch: '<S2033>/Switch1'
     */
    rtb_Switch1_anw = (((((((((((((((((((((((((((((((uint32)
        (VeSRAC_b_GearPRNDL_InhibitM2 ? 1U : 0U)) | ((uint32)
        rtb_TmpSignalConversionAtVeOB_3)) | ((uint32)rtb_Switch1_fw)) | ((uint32)
        rtb_Switch1_h0)) | ((uint32)rtb_Switch1_mu)) | ((uint32)rtb_AND_cg)) |
        ((uint32)rtb_VeSRAR_b_HVOverVoltFailur_f)) | ((uint32)tmpRead_13)) |
        ((uint32)rtb_Comparison6_b)) | ((uint32)rtb_OR1_ot)) | rtb_Switch1_anw) |
        ((uint32)rtb_VeSRAR_b_HVOverVoltFailur_1)) | ((uint32)
        rtb_TmpSignalConversionAtVeOB_2)) | ((uint32)rtb_LogicalOperator_cr)) |
        ((uint32)rtb_TmpSignalConversionAtVeOB_1)) | ((uint32)rtb_AND_ll)) |
        rtb_Switch1_mu_0) | rtb_VeSRAR_b_TCMLmpFlt2_tmp) |
        rtb_VeSRAR_b_PPCTIS_ReducePer_0) | rtb_Comparison3_ou) |
        rtb_TmpSignalConversionAtVeTI_o) | rtb_Logical1_l) |
        rtb_TmpSignalConversionAtVeEN_d) | rtb_Comparison1_ij) |
                            rtb_VeSRAR_b_SpinUpFailed_0) | rtb_Switch1_f3) |
                          rtb_Comparison1_aq) | rtb_TmpSignalConversionAtVeBP_p)
                        | rtb_Switch1_a3) | rtb_VeSRAR_b_AuxPumpFail_Inhi_0) |
        rtb_VeSRAR_b_CKSFailed_0;

    /* Logic: '<S1453>/AND3' incorporates:
     *  Constant: '<S1479>/Calib'
     *  RelationalOperator: '<S1453>/Comparison3'
     */
    rtb_TmpSignalConversionAtVeB_j2 = (rtb_TmpSignalConversionAtVePMDR <
        KeSRAR_t_DebounceRA);

    /* Switch: '<S1336>/Switch1' incorporates:
     *  Constant: '<S1340>/Calib'
     */
    if (KeSRAR_b_EngStrtStpEngShtDwn_OvrdEnbl)
    {
        /* Switch: '<S1336>/Switch1' incorporates:
         *  Constant: '<S1341>/Calib'
         */
        rtb_Logical8_dq = KeSRAR_b_EngStrtStpEngShtDwn_OvrdVal;
    }
    else
    {
        /* Switch: '<S1336>/Switch1' incorporates:
         *  Constant: '<S1338>/Calib'
         *  Constant: '<S1342>/Calib'
         *  Constant: '<S1343>/Calib'
         *  Constant: '<S1344>/Calib'
         *  Constant: '<S1345>/Calib'
         *  Constant: '<S1346>/Calib'
         *  Constant: '<S1347>/Calib'
         *  Constant: '<S1348>/Calib'
         *  Constant: '<S1349>/Calib'
         *  Constant: '<S1355>/ConstantValue'
         *  Constant: '<S1356>/ConstantValue'
         *  Constant: '<S1357>/ConstantValue'
         *  Constant: '<S1358>/ConstantValue'
         *  Constant: '<S1359>/ConstantValue'
         *  Constant: '<S1360>/ConstantValue'
         *  Constant: '<S1361>/ConstantValue'
         *  Constant: '<S1362>/ConstantValue'
         *  Logic: '<S1352>/Logical13'
         *  Logic: '<S263>/AND1'
         *  Logic: '<S263>/Logical10'
         *  Logic: '<S263>/Logical6'
         *  RelationalOperator: '<S1355>/Comparison'
         *  RelationalOperator: '<S1356>/Comparison'
         *  RelationalOperator: '<S1357>/Comparison'
         *  RelationalOperator: '<S1358>/Comparison'
         *  RelationalOperator: '<S1359>/Comparison'
         *  RelationalOperator: '<S1360>/Comparison'
         *  RelationalOperator: '<S1361>/Comparison'
         *  RelationalOperator: '<S1362>/Comparison'
         *  S-Function (sfix_bitop): '<S1355>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1356>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1357>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1358>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1359>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1360>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1361>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1362>/BitwiseLogicalOperator6'
         */
        rtb_Logical8_dq = ((((((((((rtb_Switch1_n3 &
            KeSRAR_g_RA1_SelEngStrtStpEngShtDwn) >= 1U) || ((rtb_Switch1_ck &
            KeSRAR_g_RA2_SelEngStrtStpEngShtDwn) >= 1U)) || ((rtb_Switch1_mr &
            KeSRAR_g_RA3_SelEngStrtStpEngShtDwn) >= 1U)) || ((rtb_Switch1_bk &
            KeSRAR_g_RA4_SelEngStrtStpEngShtDwn) >= 1U)) || ((rtb_Switch1_c &
            KeSRAR_g_RA5_SelEngStrtStpEngShtDwn) >= 1U)) || ((rtb_Switch1_fxq &
                                KeSRAR_g_RA6_SelEngStrtStpEngShtDwn) >= 1U)) ||
                             ((BitwiseLogicalOperator_b &
                               KeSRAR_g_RA7_SelEngStrtStpEngShtDwn) >= 1U)) ||
                            ((rtb_Switch1_anw &
                              KeSRAR_g_RA8_SelEngStrtStpEngShtDwn) >= 1U)) && ((
                             !rtb_TmpSignalConversionAtVeB_j2) ||
                            (KeSRAR_b_EngStrtStpEngShtDwn_DebDisbl)));
    }

    /* End of Switch: '<S1336>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S263>/SignalLatchOnWithReset' */
    /* Logic: '<S1353>/OR1' incorporates:
     *  Logic: '<S1353>/OR'
     *  UnitDelay: '<S1353>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeIMPR = (rtb_Logical8_dq ||
        (rtb_VeSRAR_b_HVOverVoltFailur_2 && (SRAR_ac_DW.UnitDelay_DSTATE_fy)));

    /* Update for UnitDelay: '<S1353>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_fy = rtb_TmpSignalConversionAtVeIMPR;

    /* End of Outputs for SubSystem: '<S263>/SignalLatchOnWithReset' */

    /* Switch: '<S1337>/Switch1' incorporates:
     *  Constant: '<S1339>/Calib'
     */
    if (KeSRAR_b_EngStrtStpEngShtDwn_Latch)
    {
        /* Switch: '<S1337>/Switch1' */
        rtb_Logical8_dq = rtb_TmpSignalConversionAtVeIMPR;
    }

    /* End of Switch: '<S1337>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S263>/TurnOnDelayTime1' */
    /* Outputs for Atomic SubSystem: '<S1354>/EdgeRising' */
    /* Logic: '<S1363>/AND' incorporates:
     *  Logic: '<S1363>/OR1'
     *  UnitDelay: '<S1363>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeIMPR = (rtb_Logical8_dq &&
        (!SRAR_ac_DW.UnitDelay_DSTATE_oy));

    /* Update for UnitDelay: '<S1363>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_oy = rtb_Logical8_dq;

    /* End of Outputs for SubSystem: '<S1354>/EdgeRising' */

    /* Switch: '<S1354>/Switch1' incorporates:
     *  Logic: '<S1354>/OR'
     *  Logic: '<S1354>/OR1'
     */
    if ((!rtb_Logical8_dq) || rtb_TmpSignalConversionAtVeIMPR)
    {
        /* Switch: '<S1354>/Switch1' incorporates:
         *  Constant: '<S1354>/ConstantValue1'
         */
        rtb_TmpSignalConversionAtVeGENR = 0.0F;
    }
    else
    {
        /* Switch: '<S1354>/Switch1' incorporates:
         *  Constant: '<S1350>/Calib'
         *  Constant: '<S1351>/Calib'
         *  MinMax: '<S1354>/Minimum'
         *  Sum: '<S1354>/Summation'
         *  UnitDelay: '<S1354>/UnitDelay'
         */
        rtb_TmpSignalConversionAtVeGENR = fminf
            (KeSRAR_t_EngStrtStpEngShtDwnTurnONDelay, KeSRAR_t_dT +
             SRAR_ac_DW.UnitDelay_DSTATE_pb);
    }

    /* End of Switch: '<S1354>/Switch1' */

    /* Logic: '<S1354>/AND' incorporates:
     *  Constant: '<S1350>/Calib'
     *  RelationalOperator: '<S1354>/GreaterThan'
     */
    rtb_TmpSignalConversionAtVeIMPR = (rtb_Logical8_dq &&
        (rtb_TmpSignalConversionAtVeGENR >=
         KeSRAR_t_EngStrtStpEngShtDwnTurnONDelay));

    /* Update for UnitDelay: '<S1354>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_pb = rtb_TmpSignalConversionAtVeGENR;

    /* End of Outputs for SubSystem: '<S263>/TurnOnDelayTime1' */

    /* Logic: '<S262>/Logical7' incorporates:
     *  Constant: '<S1304>/Constant'
     *  RelationalOperator: '<S262>/Comparison4'
     *  UnitDelay: '<S262>/UnitDelay'
     */
    rtb_Logical8_dq = ((rtb_TmpSignalConversionAtVeES_o && (((uint32)
                          rtb_TmpSignalConversionAtVeES_d) == CeESSR_e_EngOff)) &&
                       (SRAR_ac_DW.UnitDelay_DSTATE_hq));

    /* Outputs for Atomic SubSystem: '<S262>/TurnOnDelayTime' */
    /* Outputs for Atomic SubSystem: '<S1324>/EdgeRising' */
    /* Logic: '<S1334>/AND' incorporates:
     *  Logic: '<S1334>/OR1'
     *  UnitDelay: '<S1334>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeIN_d = (rtb_Logical8_dq &&
        (!SRAR_ac_DW.UnitDelay_DSTATE_cr));

    /* Update for UnitDelay: '<S1334>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_cr = rtb_Logical8_dq;

    /* End of Outputs for SubSystem: '<S1324>/EdgeRising' */

    /* Logic: '<S1324>/OR1' incorporates:
     *  Logic: '<S1324>/AND'
     */
    rtb_VeSRAR_b_MtrB_InvrtrFault_g = !rtb_Logical8_dq;

    /* Switch: '<S1324>/Switch1' incorporates:
     *  Logic: '<S1324>/OR'
     *  Logic: '<S1324>/OR1'
     */
    if (rtb_VeSRAR_b_MtrB_InvrtrFault_g || rtb_TmpSignalConversionAtVeIN_d)
    {
        /* Switch: '<S1324>/Switch1' incorporates:
         *  Constant: '<S1324>/ConstantValue1'
         */
        rtb_TmpSignalConversionAtVeGENR = 0.0F;
    }
    else
    {
        /* Switch: '<S1324>/Switch1' incorporates:
         *  Constant: '<S1319>/Calib'
         *  Constant: '<S1321>/Calib'
         *  MinMax: '<S1324>/Minimum'
         *  Sum: '<S1324>/Summation'
         *  UnitDelay: '<S1324>/UnitDelay'
         */
        rtb_TmpSignalConversionAtVeGENR = fminf(KeSRAR_t_RestrtAllwd_Dbnc,
            KeSRAR_t_dT + SRAR_ac_DW.UnitDelay_DSTATE_m);
    }

    /* End of Switch: '<S1324>/Switch1' */

    /* Update for UnitDelay: '<S1324>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_m = rtb_TmpSignalConversionAtVeGENR;

    /* Outputs for Atomic SubSystem: '<S262>/SignalLatchOnWithReset' */
    /* Logic: '<S1323>/OR1' incorporates:
     *  Constant: '<S1306>/Calib'
     *  Constant: '<S1307>/Calib'
     *  Constant: '<S1319>/Calib'
     *  Logic: '<S1323>/NOT'
     *  Logic: '<S1323>/OR'
     *  Logic: '<S1324>/AND'
     *  Logic: '<S262>/Logical5'
     *  Logic: '<S262>/Logical6'
     *  RelationalOperator: '<S1324>/GreaterThan'
     *  UnitDelay: '<S1323>/UnitDelay'
     */
    rtb_Logical8_dq = ((((KeSRAR_b_RestrtAllwd_TempEngShtDwnEnbl) &&
                         rtb_TmpSignalConversionAtVeES_j) &&
                        rtb_TmpSignalConversionAtVeES_o) ||
                       (((!KeSRAR_b_RestrtAllwd_Temp) ||
                         (rtb_VeSRAR_b_MtrB_InvrtrFault_g ||
                          (rtb_TmpSignalConversionAtVeGENR <
                           KeSRAR_t_RestrtAllwd_Dbnc))) &&
                        (SRAR_ac_DW.UnitDelay_DSTATE_jq)));

    /* End of Outputs for SubSystem: '<S262>/TurnOnDelayTime' */

    /* Update for UnitDelay: '<S1323>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_jq = rtb_Logical8_dq;

    /* End of Outputs for SubSystem: '<S262>/SignalLatchOnWithReset' */

    /* Switch: '<S1305>/Switch1' incorporates:
     *  Constant: '<S1309>/Calib'
     */
    if (KeSRAR_b_TempEngShtDwnEnbl_OvrdEnbl)
    {
        /* Switch: '<S1305>/Switch1' incorporates:
         *  Constant: '<S1310>/Calib'
         */
        rtb_Logical8_dq = KeSRAR_b_TempEngShtDwnEnbl_OvrdVal;
    }
    else
    {
        /* Switch: '<S1305>/Switch1' incorporates:
         *  Constant: '<S1308>/Calib'
         *  Constant: '<S1311>/Calib'
         *  Constant: '<S1312>/Calib'
         *  Constant: '<S1313>/Calib'
         *  Constant: '<S1314>/Calib'
         *  Constant: '<S1315>/Calib'
         *  Constant: '<S1316>/Calib'
         *  Constant: '<S1317>/Calib'
         *  Constant: '<S1318>/Calib'
         *  Constant: '<S1326>/ConstantValue'
         *  Constant: '<S1327>/ConstantValue'
         *  Constant: '<S1328>/ConstantValue'
         *  Constant: '<S1329>/ConstantValue'
         *  Constant: '<S1330>/ConstantValue'
         *  Constant: '<S1331>/ConstantValue'
         *  Constant: '<S1332>/ConstantValue'
         *  Constant: '<S1333>/ConstantValue'
         *  Logic: '<S1322>/Logical13'
         *  Logic: '<S262>/AND1'
         *  Logic: '<S262>/Logical1'
         *  Logic: '<S262>/Logical19'
         *  Logic: '<S262>/Logical20'
         *  RelationalOperator: '<S1326>/Comparison'
         *  RelationalOperator: '<S1327>/Comparison'
         *  RelationalOperator: '<S1328>/Comparison'
         *  RelationalOperator: '<S1329>/Comparison'
         *  RelationalOperator: '<S1330>/Comparison'
         *  RelationalOperator: '<S1331>/Comparison'
         *  RelationalOperator: '<S1332>/Comparison'
         *  RelationalOperator: '<S1333>/Comparison'
         *  S-Function (sfix_bitop): '<S1326>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1327>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1328>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1329>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1330>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1331>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1332>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1333>/BitwiseLogicalOperator6'
         */
        rtb_Logical8_dq = ((rtb_Logical8_dq || (((((((((rtb_Switch1_n3 &
            KeSRAR_g_RA1_SelTempEngShtDwn) >= 1U) || ((rtb_Switch1_ck &
            KeSRAR_g_RA2_SelTempEngShtDwn) >= 1U)) || ((rtb_Switch1_mr &
            KeSRAR_g_RA3_SelTempEngShtDwn) >= 1U)) || ((rtb_Switch1_bk &
            KeSRAR_g_RA4_SelTempEngShtDwn) >= 1U)) || ((rtb_Switch1_c &
            KeSRAR_g_RA5_SelTempEngShtDwn) >= 1U)) || ((rtb_Switch1_fxq &
            KeSRAR_g_RA6_SelTempEngShtDwn) >= 1U)) || ((BitwiseLogicalOperator_b
                                & KeSRAR_g_RA7_SelTempEngShtDwn) >= 1U)) ||
                             ((rtb_Switch1_anw & KeSRAR_g_RA8_SelTempEngShtDwn) >=
                              1U))) && ((!rtb_TmpSignalConversionAtVeB_j2) ||
                            (KeSRAR_b_TempEngShtDwnEnbl_DebDisbl)));
    }

    /* End of Switch: '<S1305>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S262>/TurnOnDelayTime1' */
    /* Outputs for Atomic SubSystem: '<S1325>/EdgeRising' */
    /* Logic: '<S1335>/AND' incorporates:
     *  Logic: '<S1335>/OR1'
     *  UnitDelay: '<S1335>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeES_j = (rtb_Logical8_dq &&
        (!SRAR_ac_DW.UnitDelay_DSTATE_gq));

    /* Update for UnitDelay: '<S1335>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_gq = rtb_Logical8_dq;

    /* End of Outputs for SubSystem: '<S1325>/EdgeRising' */

    /* Switch: '<S1325>/Switch1' incorporates:
     *  Logic: '<S1325>/OR'
     *  Logic: '<S1325>/OR1'
     */
    if ((!rtb_Logical8_dq) || rtb_TmpSignalConversionAtVeES_j)
    {
        /* Switch: '<S1325>/Switch1' incorporates:
         *  Constant: '<S1325>/ConstantValue1'
         */
        rtb_TmpSignalConversionAtVeGENR = 0.0F;
    }
    else
    {
        /* Switch: '<S1325>/Switch1' incorporates:
         *  Constant: '<S1320>/Calib'
         *  Constant: '<S1321>/Calib'
         *  MinMax: '<S1325>/Minimum'
         *  Sum: '<S1325>/Summation'
         *  UnitDelay: '<S1325>/UnitDelay'
         */
        rtb_TmpSignalConversionAtVeGENR = fminf
            (KeSRAR_t_TempEngShtDwnTurnONDelay, KeSRAR_t_dT +
             SRAR_ac_DW.UnitDelay_DSTATE_pi);
    }

    /* End of Switch: '<S1325>/Switch1' */

    /* Logic: '<S1325>/AND' incorporates:
     *  Constant: '<S1320>/Calib'
     *  RelationalOperator: '<S1325>/GreaterThan'
     */
    rtb_TmpSignalConversionAtVeES_j = (rtb_Logical8_dq &&
        (rtb_TmpSignalConversionAtVeGENR >= KeSRAR_t_TempEngShtDwnTurnONDelay));

    /* Update for UnitDelay: '<S1325>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_pi = rtb_TmpSignalConversionAtVeGENR;

    /* End of Outputs for SubSystem: '<S262>/TurnOnDelayTime1' */

    /* Logic: '<S24>/Logical1' */
    rtb_Logical8_dq = (rtb_TmpSignalConversionAtVeIMPR ||
                       rtb_TmpSignalConversionAtVeES_j);

    /* Outputs for Atomic SubSystem: '<S24>/TurnOnDelayTime2' */
    /* Outputs for Atomic SubSystem: '<S37>/EdgeRising' */
    /* Logic: '<S41>/AND' incorporates:
     *  Logic: '<S41>/OR1'
     *  UnitDelay: '<S41>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeES_o = (rtb_Logical8_dq &&
        (!SRAR_ac_DW.UnitDelay_DSTATE_ff));

    /* Update for UnitDelay: '<S41>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_ff = rtb_Logical8_dq;

    /* End of Outputs for SubSystem: '<S37>/EdgeRising' */

    /* Switch: '<S37>/Switch1' incorporates:
     *  Logic: '<S37>/OR'
     *  Logic: '<S37>/OR1'
     */
    if ((!rtb_Logical8_dq) || rtb_TmpSignalConversionAtVeES_o)
    {
        /* Switch: '<S37>/Switch1' incorporates:
         *  Constant: '<S37>/ConstantValue1'
         */
        rtb_TmpSignalConversionAtVeGENR = 0.0F;
    }
    else
    {
        /* Switch: '<S37>/Switch1' incorporates:
         *  Constant: '<S23>/Calib'
         *  Constant: '<S32>/Calib'
         *  MinMax: '<S37>/Minimum'
         *  Sum: '<S37>/Summation'
         *  UnitDelay: '<S37>/UnitDelay'
         */
        rtb_TmpSignalConversionAtVeGENR = fminf(KeSRAR_t_ShutDownEngineOffRet,
            KeSRAR_t_dT + SRAR_ac_DW.UnitDelay_DSTATE_gk);
    }

    /* End of Switch: '<S37>/Switch1' */

    /* Logic: '<S37>/AND' incorporates:
     *  Constant: '<S32>/Calib'
     *  RelationalOperator: '<S37>/GreaterThan'
     */
    rtb_Logical8_dq = (rtb_Logical8_dq && (rtb_TmpSignalConversionAtVeGENR >=
                        KeSRAR_t_ShutDownEngineOffRet));

    /* Update for UnitDelay: '<S37>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_gk = rtb_TmpSignalConversionAtVeGENR;

    /* End of Outputs for SubSystem: '<S24>/TurnOnDelayTime2' */

    /* RelationalOperator: '<S24>/Comparison1' incorporates:
     *  Constant: '<S28>/Constant'
     */
    rtb_TmpSignalConversionAtVeES_o = (((uint32)rtb_TmpSignalConversionAtVeES_p)
        == CeESSR_e_Stop);

    /* Outputs for Atomic SubSystem: '<S24>/EdgeFalling1' */
    /* Logic: '<S26>/AND' incorporates:
     *  Logic: '<S26>/OR1'
     *  UnitDelay: '<S26>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeIN_d = ((!rtb_TmpSignalConversionAtVeES_o) &&
        (SRAR_ac_DW.UnitDelay_DSTATE_as));

    /* Update for UnitDelay: '<S26>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_as = rtb_TmpSignalConversionAtVeES_o;

    /* End of Outputs for SubSystem: '<S24>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S24>/Turn_Off_Delay_Time' */
    /* Outputs for Atomic SubSystem: '<S38>/EdgeFalling1' */
    /* Logic: '<S42>/AND' incorporates:
     *  Logic: '<S42>/OR1'
     *  UnitDelay: '<S42>/UnitDelay'
     */
    rtb_Logical11 = ((!rtb_Logical8_dq) && (SRAR_ac_DW.UnitDelay_DSTATE_hy));

    /* Update for UnitDelay: '<S42>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_hy = rtb_Logical8_dq;

    /* End of Outputs for SubSystem: '<S38>/EdgeFalling1' */

    /* Switch: '<S38>/Switch' */
    if (rtb_Logical11)
    {
        /* Switch: '<S1544>/Switch' incorporates:
         *  Constant: '<S33>/Calib'
         */
        rtb_Switch1_io = KeSRAR_t_ShutDownEngineOnRet;
    }
    else
    {
        /* Switch: '<S1544>/Switch' incorporates:
         *  Constant: '<S23>/Calib'
         *  Constant: '<S38>/ConstantValue1'
         *  MinMax: '<S38>/Minimum'
         *  Sum: '<S38>/Summation'
         *  UnitDelay: '<S38>/UnitDelay'
         */
        rtb_Switch1_io = fmaxf(SRAR_ac_DW.UnitDelay_DSTATE_kr - KeSRAR_t_dT,
                               0.0F);
    }

    /* End of Switch: '<S38>/Switch' */

    /* Switch: '<S38>/Switch1' */
    if (rtb_TmpSignalConversionAtVeIN_d)
    {
        /* Update for UnitDelay: '<S38>/UnitDelay' incorporates:
         *  Constant: '<S38>/ConstantValue3'
         */
        SRAR_ac_DW.UnitDelay_DSTATE_kr = 0.0F;
    }
    else
    {
        /* Update for UnitDelay: '<S38>/UnitDelay' */
        SRAR_ac_DW.UnitDelay_DSTATE_kr = rtb_Switch1_io;
    }

    /* End of Switch: '<S38>/Switch1' */
    /* End of Outputs for SubSystem: '<S24>/Turn_Off_Delay_Time' */

    /* Switch: '<S29>/Switch1' incorporates:
     *  UnitDelay: '<S24>/UnitDelay'
     */
    if (!SRAR_ac_DW.UnitDelay_DSTATE_eb)
    {
        /* Outputs for Atomic SubSystem: '<S24>/Turn_Off_Delay_Time' */
        /* Switch: '<S29>/Switch1' incorporates:
         *  Constant: '<S38>/ConstantValue2'
         *  Logic: '<S38>/AND'
         *  RelationalOperator: '<S38>/GreaterThan'
         */
        rtb_Logical8_dq = (rtb_Logical8_dq || (rtb_Switch1_io > 0.0F));

        /* End of Outputs for SubSystem: '<S24>/Turn_Off_Delay_Time' */
    }

    /* End of Switch: '<S29>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S24>/EdgeFalling' */
    /* Outputs for Atomic SubSystem: '<S24>/TurnOffDelayTime2' */
    /* Outputs for Atomic SubSystem: '<S36>/EdgeFalling1' */
    /* Logic: '<S40>/OR1' incorporates:
     *  Logic: '<S25>/OR1'
     */
    rtb_TmpSignalConversionAtVeEN_c = !rtb_Logical8_dq;

    /* End of Outputs for SubSystem: '<S24>/EdgeFalling' */

    /* Logic: '<S40>/AND' incorporates:
     *  Logic: '<S40>/OR1'
     *  UnitDelay: '<S40>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeIN_d = (rtb_TmpSignalConversionAtVeEN_c &&
        (SRAR_ac_DW.UnitDelay_DSTATE_dt));

    /* Update for UnitDelay: '<S40>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_dt = rtb_Logical8_dq;

    /* End of Outputs for SubSystem: '<S36>/EdgeFalling1' */

    /* Switch: '<S36>/Switch' */
    if (rtb_TmpSignalConversionAtVeIN_d)
    {
        /* Switch: '<S36>/Switch' incorporates:
         *  Constant: '<S34>/Calib'
         */
        rtb_TmpSignalConversionAtVeGENR = KeSRAR_t_ShutDownEngineOnRetforCreep;
    }
    else
    {
        /* Switch: '<S36>/Switch' incorporates:
         *  Constant: '<S23>/Calib'
         *  Constant: '<S36>/ConstantValue1'
         *  MinMax: '<S36>/Minimum'
         *  Sum: '<S36>/Summation'
         *  UnitDelay: '<S36>/UnitDelay'
         */
        rtb_TmpSignalConversionAtVeGENR = fmaxf(SRAR_ac_DW.UnitDelay_DSTATE_a5 -
            KeSRAR_t_dT, 0.0F);
    }

    /* End of Switch: '<S36>/Switch' */

    /* Logic: '<S36>/AND' incorporates:
     *  Constant: '<S36>/ConstantValue2'
     *  RelationalOperator: '<S36>/GreaterThan'
     */
    rtb_TmpSignalConversionAtVeIN_d = (rtb_Logical8_dq ||
        (rtb_TmpSignalConversionAtVeGENR > 0.0F));

    /* Update for UnitDelay: '<S36>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_a5 = rtb_TmpSignalConversionAtVeGENR;

    /* End of Outputs for SubSystem: '<S24>/TurnOffDelayTime2' */

    /* Logic: '<S52>/Logical1' */
    rtb_Logical11 = (rtb_TmpSignalConversionAtVeIN_d || rtb_VeSRAR_b_CKSFailed);

    /* DataTypeConversion: '<S57>/DataTypeConversion' incorporates:
     *  DataStoreRead: '<S52>/DataStoreRead1'
     */
    rtb_DataTypeConversion_l = (TeSRAR_e_EngStrtType)
        SRAR_ac_DW.NeSRAR_e_EngStrtType_DS;

    /* Switch: '<S62>/Switch1' incorporates:
     *  Constant: '<S50>/Calib'
     *  Constant: '<S53>/ConstantValue'
     *  Logic: '<S52>/Logical2'
     *  RelationalOperator: '<S53>/Comparison'
     *  S-Function (sfix_bitop): '<S53>/BitwiseLogicalOperator6'
     *  Switch: '<S62>/Switch2'
     */
    if (tmpRead_a || ((rtb_Switch1_ck & KeSRAR_g_RA2_SelSpinUpPhase) >= 1U))
    {
        /* Switch: '<S62>/Switch1' incorporates:
         *  Constant: '<S60>/Constant'
         */
        rtb_Switch1_n5 = CeSRAR_e_HybTrqStrt;
    }
    else if (rtb_VeSRAR_b_CKSFailed)
    {
        /* Switch: '<S62>/Switch2' incorporates:
         *  Constant: '<S61>/Constant'
         *  Switch: '<S62>/Switch1'
         */
        rtb_Switch1_n5 = CeSRAR_e_EngTrqStrt;
    }
    else
    {
        /* Switch: '<S62>/Switch1' incorporates:
         *  Constant: '<S59>/Constant'
         *  Switch: '<S62>/Switch2'
         */
        rtb_Switch1_n5 = CeSRAR_e_AnyStrt;
    }

    /* End of Switch: '<S62>/Switch1' */

    /* RelationalOperator: '<S52>/Comparison1' incorporates:
     *  Constant: '<S58>/Constant'
     */
    rtb_Comparison1_l4 = (((uint32)rtb_TmpSignalConversionAtVeSTRR) ==
                          CeSTRR_e_EngStartingSt);

    /* Outputs for Atomic SubSystem: '<S52>/EdgeRising' */
    /* Logic: '<S56>/OR1' incorporates:
     *  UnitDelay: '<S56>/UnitDelay'
     */
    rtb_UnitDelay_eb = !SRAR_ac_DW.UnitDelay_DSTATE_lc;

    /* Update for UnitDelay: '<S56>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_lc = rtb_Comparison1_l4;

    /* End of Outputs for SubSystem: '<S52>/EdgeRising' */

    /* Chart: '<S52>/Chart' incorporates:
     *  DataTypeConversion: '<S57>/DataTypeConversion'
     *  Logic: '<S56>/AND'
     *  Switch: '<S62>/Switch1'
     */
    /* Gateway: SRAR_MedTEB/Proc_SRAC/Logic_Function/Engine_Remedial_Action/Remedial_Stop_EngStrtType/RemedialEngineStop/Chart */
    /* During: SRAR_MedTEB/Proc_SRAC/Logic_Function/Engine_Remedial_Action/Remedial_Stop_EngStrtType/RemedialEngineStop/Chart */
    if (((uint32)SRAR_ac_DW.is_active_c1_SRAR_ac) == 0U)
    {
        /* Entry: SRAR_MedTEB/Proc_SRAC/Logic_Function/Engine_Remedial_Action/Remedial_Stop_EngStrtType/RemedialEngineStop/Chart */
        SRAR_ac_DW.is_active_c1_SRAR_ac = 1U;

        /* Entry Internal: SRAR_MedTEB/Proc_SRAC/Logic_Function/Engine_Remedial_Action/Remedial_Stop_EngStrtType/RemedialEngineStop/Chart */
        /* Transition: '<S54>:35' */
        SRAR_ac_DW.is_c1_SRAR_ac = SRAR_ac_IN_HEALTHY;

        /* Entry Internal 'HEALTHY': '<S54>:3' */
        /* Transition: '<S54>:34' */
        SRAR_ac_DW.is_HEALTHY = SRAR_ac_IN_Waiting;

        /* Entry 'Waiting': '<S54>:17' */
        SRAR_ac_B.EngStrtType = rtb_DataTypeConversion_l;
        SRAR_ac_B.NextStrtType = rtb_DataTypeConversion_l;
    }
    else if (((sint32)SRAR_ac_DW.is_c1_SRAR_ac) == 1)
    {
        /* During 'FAULTY': '<S54>:2' */
        if (!rtb_Logical11)
        {
            /* Transition: '<S54>:10' */
            /* Exit Internal 'FAULTY': '<S54>:2' */
            SRAR_ac_DW.is_FAULTY = SRAR_ac_IN_NO_ACTIVE_CHILD;
            SRAR_ac_DW.is_c1_SRAR_ac = SRAR_ac_IN_HEALTHY;

            /* Entry Internal 'HEALTHY': '<S54>:3' */
            /* Transition: '<S54>:34' */
            SRAR_ac_DW.is_HEALTHY = SRAR_ac_IN_Waiting;

            /* Entry 'Waiting': '<S54>:17' */
            SRAR_ac_B.EngStrtType = rtb_DataTypeConversion_l;
            SRAR_ac_B.NextStrtType = rtb_DataTypeConversion_l;
        }
        else if ((((sint32)SRAR_ac_DW.is_FAULTY) != 1) &&
                 (rtb_DataTypeConversion_l == SRAR_ac_DW.ANYStart))
        {
            /* During 'Waiting': '<S54>:42' */
            /* Transition: '<S54>:45' */
            SRAR_ac_DW.is_FAULTY = SRAR_ac_IN_Update;

            /* Entry 'Update': '<S54>:43' */
            SRAR_ac_B.NextStrtType = rtb_Switch1_n5;
            SRAR_ac_B.EngStrtType = rtb_Switch1_n5;
        }
        else
        {
            /* During 'Update': '<S54>:43' */
        }
    }
    else
    {
        /* During 'HEALTHY': '<S54>:3' */
        if (rtb_Logical11)
        {
            /* Transition: '<S54>:9' */
            /* Exit Internal 'HEALTHY': '<S54>:3' */
            SRAR_ac_DW.is_HEALTHY = SRAR_ac_IN_NO_ACTIVE_CHILD;
            SRAR_ac_DW.is_c1_SRAR_ac = SRAR_ac_IN_FAULTY;

            /* Entry Internal 'FAULTY': '<S54>:2' */
            /* Transition: '<S54>:44' */
            SRAR_ac_DW.is_FAULTY = SRAR_ac_IN_Waiting;

            /* Entry 'Waiting': '<S54>:42' */
            SRAR_ac_B.NextStrtType = rtb_DataTypeConversion_l;
            SRAR_ac_B.EngStrtType = rtb_DataTypeConversion_l;
        }
        else if (((sint32)SRAR_ac_DW.is_HEALTHY) != 1)
        {
            /* Outputs for Atomic SubSystem: '<S52>/EdgeRising' */
            /* During 'Waiting': '<S54>:17' */
            if (rtb_Comparison1_l4 && rtb_UnitDelay_eb)
            {
                /* Transition: '<S54>:19' */
                SRAR_ac_DW.is_HEALTHY = SRAR_ac_IN_Clearing;

                /* Entry 'Clearing': '<S54>:18' */
                SRAR_ac_B.EngStrtType = SRAR_ac_DW.ANYStart;
                SRAR_ac_B.NextStrtType = SRAR_ac_DW.ANYStart;
            }

            /* End of Outputs for SubSystem: '<S52>/EdgeRising' */
        }
        else
        {
            /* During 'Clearing': '<S54>:18' */
        }
    }

    /* End of Chart: '<S52>/Chart' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeTISR_n_InputSpeed' */
    (void)Rte_Read_VeTISR_n_InputSpeed_Value(&rtb_Switch1_jp);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRAR_MedTEB'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* DataTypeConversion: '<S52>/DataTypeConversion' incorporates:
     *  DataStoreWrite: '<S52>/DataStoreWrite'
     */
    SRAR_ac_DW.NeSRAR_e_EngStrtType_DS = (uint16)SRAR_ac_B.NextStrtType;

    /* RelationalOperator: '<S1536>/Comparison2' incorporates:
     *  Constant: '<S1681>/Calib'
     */
    rtb_TmpSignalConversionAtVeADIR = (rtb_Switch1_jp >= KeSRAR_n_EngRunDetect);

    /* Outputs for Atomic SubSystem: '<S55>/TurnOnDelayTime' */
    /* Outputs for Atomic SubSystem: '<S70>/EdgeRising' */
    /* Logic: '<S71>/AND' incorporates:
     *  Logic: '<S71>/OR1'
     *  UnitDelay: '<S71>/UnitDelay'
     */
    rtb_Logical11 = (rtb_TmpSignalConversionAtVeADIR &&
                     (!SRAR_ac_DW.UnitDelay_DSTATE_m2));

    /* Update for UnitDelay: '<S71>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_m2 = rtb_TmpSignalConversionAtVeADIR;

    /* End of Outputs for SubSystem: '<S70>/EdgeRising' */

    /* Logic: '<S70>/OR1' incorporates:
     *  Logic: '<S70>/AND'
     */
    rtb_VeSRAR_b_MtrB_InvrtrFault_g = !rtb_TmpSignalConversionAtVeADIR;

    /* Switch: '<S70>/Switch1' incorporates:
     *  Logic: '<S70>/OR'
     *  Logic: '<S70>/OR1'
     */
    if (rtb_VeSRAR_b_MtrB_InvrtrFault_g || rtb_Logical11)
    {
        /* Switch: '<S70>/Switch1' incorporates:
         *  Constant: '<S70>/ConstantValue1'
         */
        rtb_Switch1_jp = 0.0F;
    }
    else
    {
        /* Switch: '<S70>/Switch1' incorporates:
         *  Constant: '<S67>/Calib'
         *  Constant: '<S68>/Calib'
         *  MinMax: '<S70>/Minimum'
         *  Sum: '<S70>/Summation'
         *  UnitDelay: '<S70>/UnitDelay'
         */
        rtb_Switch1_jp = fminf(KeSRAR_t_NextKeyOverrideOnResetDelay, KeSRAR_t_dT
                               + SRAR_ac_DW.UnitDelay_DSTATE_n5);
    }

    /* End of Switch: '<S70>/Switch1' */

    /* Update for UnitDelay: '<S70>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_n5 = rtb_Switch1_jp;

    /* End of Outputs for SubSystem: '<S55>/TurnOnDelayTime' */

    /* RelationalOperator: '<S55>/Comparison3' incorporates:
     *  Switch: '<S21>/Switch'
     */
    rtb_DataTypeConversion_l = SRAR_ac_B.EngStrtType;

    /* Outputs for Atomic SubSystem: '<S55>/SignalLatchOnWithReset' */
    /* Outputs for Atomic SubSystem: '<S55>/TurnOnDelayTime' */
    /* Logic: '<S69>/OR1' incorporates:
     *  Constant: '<S64>/Constant'
     *  Constant: '<S65>/Constant'
     *  Constant: '<S66>/Calib'
     *  Constant: '<S67>/Calib'
     *  Logic: '<S55>/Logical3'
     *  Logic: '<S55>/Logical4'
     *  Logic: '<S69>/NOT'
     *  Logic: '<S69>/OR'
     *  Logic: '<S70>/AND'
     *  RelationalOperator: '<S55>/Comparison2'
     *  RelationalOperator: '<S55>/Comparison3'
     *  RelationalOperator: '<S70>/GreaterThan'
     *  UnitDelay: '<S69>/UnitDelay'
     */
    rtb_Comparison1_l4 = (((KeSRAR_b_DsblNextKeyOvrdON) && ((((uint32)
        rtb_TmpSignalConversionAtVeSTRR) == CeSTRR_e_KeyOffSt) && (((uint32)
        rtb_DataTypeConversion_l) == CeSRAR_e_HybTrqStrt))) ||
                          ((rtb_VeSRAR_b_MtrB_InvrtrFault_g || (rtb_Switch1_jp <
        KeSRAR_t_NextKeyOverrideOnResetDelay)) &&
                           (SRAR_ac_DW.UnitDelay_DSTATE_kc)));

    /* End of Outputs for SubSystem: '<S55>/TurnOnDelayTime' */

    /* Update for UnitDelay: '<S69>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_kc = rtb_Comparison1_l4;

    /* End of Outputs for SubSystem: '<S55>/SignalLatchOnWithReset' */

    /* Switch: '<S800>/Switch1' incorporates:
     *  Constant: '<S803>/Calib'
     */
    if (KeSRAR_b_EngStrtStpEngRun_OvrdEnbl)
    {
        /* Switch: '<S800>/Switch1' incorporates:
         *  Constant: '<S804>/Calib'
         */
        rtb_Logical11 = KeSRAR_b_EngStrtStpEngRun_OvrdVal;
    }
    else
    {
        /* Switch: '<S800>/Switch1' incorporates:
         *  Constant: '<S801>/Calib'
         *  Constant: '<S805>/Calib'
         *  Constant: '<S806>/Calib'
         *  Constant: '<S807>/Calib'
         *  Constant: '<S808>/Calib'
         *  Constant: '<S809>/Calib'
         *  Constant: '<S810>/Calib'
         *  Constant: '<S811>/Calib'
         *  Constant: '<S812>/Calib'
         *  Constant: '<S813>/Calib'
         *  Constant: '<S819>/ConstantValue'
         *  Constant: '<S820>/ConstantValue'
         *  Constant: '<S821>/ConstantValue'
         *  Constant: '<S822>/ConstantValue'
         *  Constant: '<S823>/ConstantValue'
         *  Constant: '<S824>/ConstantValue'
         *  Constant: '<S825>/ConstantValue'
         *  Constant: '<S826>/ConstantValue'
         *  Logic: '<S253>/AND1'
         *  Logic: '<S253>/Logical1'
         *  Logic: '<S253>/Logical13'
         *  Logic: '<S253>/Logical14'
         *  Logic: '<S253>/Logical19'
         *  Logic: '<S816>/Logical13'
         *  RelationalOperator: '<S819>/Comparison'
         *  RelationalOperator: '<S820>/Comparison'
         *  RelationalOperator: '<S821>/Comparison'
         *  RelationalOperator: '<S822>/Comparison'
         *  RelationalOperator: '<S823>/Comparison'
         *  RelationalOperator: '<S824>/Comparison'
         *  RelationalOperator: '<S825>/Comparison'
         *  RelationalOperator: '<S826>/Comparison'
         *  S-Function (sfix_bitop): '<S819>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S820>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S821>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S822>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S823>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S824>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S825>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S826>/BitwiseLogicalOperator6'
         */
        rtb_Logical11 = (((((KeSRAR_b_RBS_CommFlt_EngStrtStpEngRunEnbl) &&
                            rtb_Switch1_fqq) && rtb_TmpSignalConversionAtVePLTR)
                          || (((((((((rtb_Switch1_n3 &
            KeSRAR_g_RA1_SelEngStrtStpEngRun) >= 1U) || ((rtb_Switch1_ck &
            KeSRAR_g_RA2_SelEngStrtStpEngRun) >= 1U)) || ((rtb_Switch1_mr &
            KeSRAR_g_RA3_SelEngStrtStpEngRun) >= 1U)) || ((rtb_Switch1_bk &
            KeSRAR_g_RA4_SelEngStrtStpEngRun) >= 1U)) || ((rtb_Switch1_c &
                                KeSRAR_g_RA5_SelEngStrtStpEngRun) >= 1U)) ||
                                ((rtb_Switch1_fxq &
                               KeSRAR_g_RA6_SelEngStrtStpEngRun) >= 1U)) ||
                               ((BitwiseLogicalOperator_b &
                              KeSRAR_g_RA7_SelEngStrtStpEngRun) >= 1U)) ||
                              ((rtb_Switch1_anw &
                                KeSRAR_g_RA8_SelEngStrtStpEngRun) >= 1U))) && ((
                           !rtb_TmpSignalConversionAtVeB_j2) ||
                          (KeSRAR_b_EngStrtStpEngRun_DebDisbl)));
    }

    /* Outputs for Atomic SubSystem: '<S253>/SignalLatchOnWithReset' */
    /* Logic: '<S817>/OR1' incorporates:
     *  Logic: '<S817>/OR'
     *  UnitDelay: '<S817>/UnitDelay'
     */
    rtb_UnitDelay_eb = (rtb_Logical11 || (rtb_VeSRAR_b_HVOverVoltFailur_2 &&
                         (SRAR_ac_DW.UnitDelay_DSTATE_b5)));

    /* Update for UnitDelay: '<S817>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_b5 = rtb_UnitDelay_eb;

    /* End of Outputs for SubSystem: '<S253>/SignalLatchOnWithReset' */

    /* Switch: '<S799>/Switch1' incorporates:
     *  Constant: '<S802>/Calib'
     */
    if (KeSRAR_b_EngStrtStpEngRun_Latch)
    {
        /* Switch: '<S799>/Switch1' */
        rtb_Logical11 = rtb_UnitDelay_eb;
    }

    /* End of Switch: '<S799>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S253>/TurnOnDelayTime1' */
    /* Outputs for Atomic SubSystem: '<S818>/EdgeRising' */
    /* Logic: '<S827>/AND' incorporates:
     *  Logic: '<S827>/OR1'
     *  UnitDelay: '<S827>/UnitDelay'
     */
    rtb_UnitDelay_eb = (rtb_Logical11 && (!SRAR_ac_DW.UnitDelay_DSTATE_fpp));

    /* Update for UnitDelay: '<S827>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_fpp = rtb_Logical11;

    /* End of Outputs for SubSystem: '<S818>/EdgeRising' */

    /* Switch: '<S818>/Switch1' incorporates:
     *  Logic: '<S818>/OR'
     *  Logic: '<S818>/OR1'
     */
    if ((!rtb_Logical11) || rtb_UnitDelay_eb)
    {
        /* Switch: '<S818>/Switch1' incorporates:
         *  Constant: '<S818>/ConstantValue1'
         */
        rtb_Switch1_jp = 0.0F;
    }
    else
    {
        /* Switch: '<S818>/Switch1' incorporates:
         *  Constant: '<S814>/Calib'
         *  Constant: '<S815>/Calib'
         *  MinMax: '<S818>/Minimum'
         *  Sum: '<S818>/Summation'
         *  UnitDelay: '<S818>/UnitDelay'
         */
        rtb_Switch1_jp = fminf(KeSRAR_t_EngStrtStpEngRunTurnONDelay, KeSRAR_t_dT
                               + SRAR_ac_DW.UnitDelay_DSTATE_pq);
    }

    /* End of Switch: '<S818>/Switch1' */

    /* Logic: '<S818>/AND' incorporates:
     *  Constant: '<S814>/Calib'
     *  RelationalOperator: '<S818>/GreaterThan'
     */
    rtb_Logical11 = (rtb_Logical11 && (rtb_Switch1_jp >=
                      KeSRAR_t_EngStrtStpEngRunTurnONDelay));

    /* Update for UnitDelay: '<S818>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_pq = rtb_Switch1_jp;

    /* End of Outputs for SubSystem: '<S253>/TurnOnDelayTime1' */

    /* Switch: '<S46>/Switch1' incorporates:
     *  Logic: '<S21>/Logical3'
     *  Switch: '<S47>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeIN_d)
    {
        /* Switch: '<S46>/Switch1' incorporates:
         *  Constant: '<S43>/Constant'
         */
        Switch1_f = CeSTRR_e_OvrrdEngOff;
    }
    else if (rtb_Comparison1_l4 || rtb_Logical11)
    {
        /* Switch: '<S47>/Switch1' incorporates:
         *  Constant: '<S44>/Constant'
         *  Switch: '<S46>/Switch1'
         */
        Switch1_f = CeSTRR_e_OvrrdEngOn;
    }
    else
    {
        /* Switch: '<S46>/Switch1' incorporates:
         *  Constant: '<S45>/Constant'
         *  Switch: '<S47>/Switch1'
         */
        Switch1_f = CeSTRR_e_NoOvrrd;
    }

    /* End of Switch: '<S46>/Switch1' */

    /* Logic: '<S21>/Logical1' */
    VeSRAC_b_HVBattErr = (rtb_TmpSignalConversionAtVeB_j4 ||
                          VeSRAR_b_MtrBZeroTrqActv);

    /* Logic: '<S20>/Logical5' incorporates:
     *  Constant: '<S22>/Calib'
     *  Merge: '<Root>/Merge_1'
     *  SignalConversion generated from: '<S2>/VeSRAR_b_CreepModeRqst_read'
     */
    rtb_Comparison1_l4 = ((KeSRAR_b_InplntCreepMdEnbl) &&
                          (Rte_IrvRead_SRAR_MedTEB_VeDCAB_b_CreepModeReq_DidWrite_out_IRV
                           ()));

    /* Switch: '<S264>/Switch1' incorporates:
     *  Constant: '<S268>/Calib'
     */
    if (KeSRAR_b_CreepTorqMode_OvrdEnbl)
    {
        /* Switch: '<S264>/Switch1' incorporates:
         *  Constant: '<S269>/Calib'
         */
        rtb_UnitDelay_eb = KeSRAR_b_CreepTorqMode_OvrdVal;
    }
    else
    {
        /* Switch: '<S264>/Switch1' incorporates:
         *  Constant: '<S266>/Calib'
         *  Constant: '<S270>/Calib'
         *  Constant: '<S271>/Calib'
         *  Constant: '<S272>/Calib'
         *  Constant: '<S273>/Calib'
         *  Constant: '<S274>/Calib'
         *  Constant: '<S275>/Calib'
         *  Constant: '<S276>/Calib'
         *  Constant: '<S277>/Calib'
         *  Constant: '<S283>/ConstantValue'
         *  Constant: '<S284>/ConstantValue'
         *  Constant: '<S285>/ConstantValue'
         *  Constant: '<S286>/ConstantValue'
         *  Constant: '<S287>/ConstantValue'
         *  Constant: '<S288>/ConstantValue'
         *  Constant: '<S289>/ConstantValue'
         *  Constant: '<S290>/ConstantValue'
         *  Logic: '<S236>/AND1'
         *  Logic: '<S236>/Logical8'
         *  Logic: '<S236>/Logical9'
         *  Logic: '<S280>/Logical13'
         *  RelationalOperator: '<S283>/Comparison'
         *  RelationalOperator: '<S284>/Comparison'
         *  RelationalOperator: '<S285>/Comparison'
         *  RelationalOperator: '<S286>/Comparison'
         *  RelationalOperator: '<S287>/Comparison'
         *  RelationalOperator: '<S288>/Comparison'
         *  RelationalOperator: '<S289>/Comparison'
         *  RelationalOperator: '<S290>/Comparison'
         *  S-Function (sfix_bitop): '<S283>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S284>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S285>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S286>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S287>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S288>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S289>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S290>/BitwiseLogicalOperator6'
         */
        rtb_UnitDelay_eb = ((((((((((rtb_Switch1_n3 &
            KeSRAR_g_RA1_SelCreepTorqMode) >= 1U) || ((rtb_Switch1_ck &
            KeSRAR_g_RA2_SelCreepTorqMode) >= 1U)) || ((rtb_Switch1_mr &
            KeSRAR_g_RA3_SelCreepTorqMode) >= 1U)) || ((rtb_Switch1_bk &
            KeSRAR_g_RA4_SelCreepTorqMode) >= 1U)) || ((rtb_Switch1_c &
            KeSRAR_g_RA5_SelCreepTorqMode) >= 1U)) || ((rtb_Switch1_fxq &
            KeSRAR_g_RA6_SelCreepTorqMode) >= 1U)) || ((BitwiseLogicalOperator_b
                                & KeSRAR_g_RA7_SelCreepTorqMode) >= 1U)) ||
                             ((KeSRAR_g_RA8_SelCreepTorqMode & rtb_Switch1_anw) >=
                              1U)) && ((!rtb_TmpSignalConversionAtVeB_j2) ||
                             (KeSRAR_b_CreepTorqMode_DebDisbl)));
    }

    /* End of Switch: '<S264>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S236>/SignalLatchOnWithReset' */
    /* Logic: '<S281>/OR1' incorporates:
     *  Logic: '<S281>/OR'
     *  UnitDelay: '<S281>/UnitDelay'
     */
    rtb_Merge1_i = (rtb_UnitDelay_eb || (rtb_VeSRAR_b_HVOverVoltFailur_2 &&
                     (SRAR_ac_DW.UnitDelay_DSTATE_ejj)));

    /* Update for UnitDelay: '<S281>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_ejj = rtb_Merge1_i;

    /* End of Outputs for SubSystem: '<S236>/SignalLatchOnWithReset' */

    /* Switch: '<S265>/Switch1' incorporates:
     *  Constant: '<S267>/Calib'
     */
    if (KeSRAR_b_CreepTorqMode_Latch)
    {
        /* Switch: '<S265>/Switch1' */
        rtb_UnitDelay_eb = rtb_Merge1_i;
    }

    /* End of Switch: '<S265>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S236>/TurnOnDelayTime1' */
    /* Outputs for Atomic SubSystem: '<S282>/EdgeRising' */
    /* Logic: '<S291>/AND' incorporates:
     *  Logic: '<S291>/OR1'
     *  UnitDelay: '<S291>/UnitDelay'
     */
    rtb_Merge1_i = (rtb_UnitDelay_eb && (!SRAR_ac_DW.UnitDelay_DSTATE_pv));

    /* Update for UnitDelay: '<S291>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_pv = rtb_UnitDelay_eb;

    /* End of Outputs for SubSystem: '<S282>/EdgeRising' */

    /* Switch: '<S282>/Switch1' incorporates:
     *  Logic: '<S282>/OR'
     *  Logic: '<S282>/OR1'
     */
    if ((!rtb_UnitDelay_eb) || rtb_Merge1_i)
    {
        /* Switch: '<S282>/Switch1' incorporates:
         *  Constant: '<S282>/ConstantValue1'
         */
        rtb_Switch1_jp = 0.0F;
    }
    else
    {
        /* Switch: '<S282>/Switch1' incorporates:
         *  Constant: '<S278>/Calib'
         *  Constant: '<S279>/Calib'
         *  MinMax: '<S282>/Minimum'
         *  Sum: '<S282>/Summation'
         *  UnitDelay: '<S282>/UnitDelay'
         */
        rtb_Switch1_jp = fminf(KeSRAR_t_CreepTorqModeTurnONDelay, KeSRAR_t_dT +
                               SRAR_ac_DW.UnitDelay_DSTATE_k);
    }

    /* End of Switch: '<S282>/Switch1' */

    /* Update for UnitDelay: '<S282>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_k = rtb_Switch1_jp;

    /* End of Outputs for SubSystem: '<S236>/TurnOnDelayTime1' */

    /* Outputs for Atomic SubSystem: '<S24>/EdgeFalling' */
    /* Logic: '<S25>/AND' incorporates:
     *  UnitDelay: '<S25>/UnitDelay'
     */
    rtb_Merge1_i = (rtb_TmpSignalConversionAtVeEN_c &&
                    (SRAR_ac_DW.UnitDelay_DSTATE_m2h));

    /* Update for UnitDelay: '<S25>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_m2h = rtb_Logical8_dq;

    /* End of Outputs for SubSystem: '<S24>/EdgeFalling' */

    /* Logic: '<S24>/Logical' incorporates:
     *  Constant: '<S27>/Constant'
     *  Constant: '<S30>/Calib'
     *  Logic: '<S24>/Logical2'
     *  RelationalOperator: '<S24>/Comparison2'
     */
    rtb_Logical8_dq = (((KeSRAR_b_InhSSCreepTrqActive_Enbl) && (((uint32)
                          rtb_TmpSignalConversionAtVeES_p) !=
                         CeESSR_e_ProducingTorque)) && rtb_Merge1_i);

    /* Outputs for Atomic SubSystem: '<S24>/TurnOffDelayTime1' */
    /* Outputs for Atomic SubSystem: '<S35>/EdgeFalling1' */
    /* Logic: '<S39>/AND' incorporates:
     *  Logic: '<S39>/OR1'
     *  UnitDelay: '<S39>/UnitDelay'
     */
    rtb_Merge1_i = ((!rtb_Logical8_dq) && (SRAR_ac_DW.UnitDelay_DSTATE_ll));

    /* Update for UnitDelay: '<S39>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_ll = rtb_Logical8_dq;

    /* End of Outputs for SubSystem: '<S35>/EdgeFalling1' */

    /* Switch: '<S35>/Switch' */
    if (rtb_Merge1_i)
    {
        /* Switch: '<S35>/Switch' incorporates:
         *  Constant: '<S31>/Calib'
         */
        rtb_TmpSignalConversionAtVeGENR = KeSRAR_t_InhSSCreepTrqActv;
    }
    else
    {
        /* Switch: '<S35>/Switch' incorporates:
         *  Constant: '<S23>/Calib'
         *  Constant: '<S35>/ConstantValue1'
         *  MinMax: '<S35>/Minimum'
         *  Sum: '<S35>/Summation'
         *  UnitDelay: '<S35>/UnitDelay'
         */
        rtb_TmpSignalConversionAtVeGENR = fmaxf(SRAR_ac_DW.UnitDelay_DSTATE_eq5
            - KeSRAR_t_dT, 0.0F);
    }

    /* End of Switch: '<S35>/Switch' */

    /* Update for UnitDelay: '<S35>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_eq5 = rtb_TmpSignalConversionAtVeGENR;

    /* Outputs for Atomic SubSystem: '<S236>/TurnOnDelayTime1' */
    /* Logic: '<S20>/Logical1' incorporates:
     *  Constant: '<S278>/Calib'
     *  Constant: '<S35>/ConstantValue2'
     *  Logic: '<S20>/Logical2'
     *  Logic: '<S20>/Logical3'
     *  Logic: '<S282>/AND'
     *  Logic: '<S35>/AND'
     *  RelationalOperator: '<S282>/GreaterThan'
     *  RelationalOperator: '<S35>/GreaterThan'
     */
    rtb_TmpSignalConversionAtVePLTR = (((rtb_Comparison1_l4 &&
        rtb_Switch_g_idx_1) || (rtb_UnitDelay_eb && (rtb_Switch1_jp >=
        KeSRAR_t_CreepTorqModeTurnONDelay))) || (rtb_Logical8_dq ||
        (rtb_TmpSignalConversionAtVeGENR > 0.0F)));

    /* End of Outputs for SubSystem: '<S236>/TurnOnDelayTime1' */
    /* End of Outputs for SubSystem: '<S24>/TurnOffDelayTime1' */

    /* Switch: '<S856>/Switch1' incorporates:
     *  Constant: '<S860>/Calib'
     */
    if (KeSRAR_b_ReducedPerf_OvrdEnbl)
    {
        /* Switch: '<S856>/Switch1' incorporates:
         *  Constant: '<S861>/Calib'
         */
        rtb_Logical8_dq = KeSRAR_b_ReducedPerf_OvrdVal;
    }
    else
    {
        /* Switch: '<S856>/Switch1' incorporates:
         *  Constant: '<S858>/Calib'
         *  Constant: '<S862>/Calib'
         *  Constant: '<S863>/Calib'
         *  Constant: '<S864>/Calib'
         *  Constant: '<S865>/Calib'
         *  Constant: '<S866>/Calib'
         *  Constant: '<S867>/Calib'
         *  Constant: '<S868>/Calib'
         *  Constant: '<S869>/Calib'
         *  Constant: '<S875>/ConstantValue'
         *  Constant: '<S876>/ConstantValue'
         *  Constant: '<S877>/ConstantValue'
         *  Constant: '<S878>/ConstantValue'
         *  Constant: '<S879>/ConstantValue'
         *  Constant: '<S880>/ConstantValue'
         *  Constant: '<S881>/ConstantValue'
         *  Constant: '<S882>/ConstantValue'
         *  Logic: '<S255>/AND1'
         *  Logic: '<S255>/Logical19'
         *  Logic: '<S255>/Logical20'
         *  Logic: '<S872>/Logical13'
         *  RelationalOperator: '<S875>/Comparison'
         *  RelationalOperator: '<S876>/Comparison'
         *  RelationalOperator: '<S877>/Comparison'
         *  RelationalOperator: '<S878>/Comparison'
         *  RelationalOperator: '<S879>/Comparison'
         *  RelationalOperator: '<S880>/Comparison'
         *  RelationalOperator: '<S881>/Comparison'
         *  RelationalOperator: '<S882>/Comparison'
         *  S-Function (sfix_bitop): '<S875>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S876>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S877>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S878>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S879>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S880>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S881>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S882>/BitwiseLogicalOperator6'
         */
        rtb_Logical8_dq = ((((((((((rtb_Switch1_n3 & KeSRAR_g_RA1_SelReducedPerf)
            >= 1U) || ((rtb_Switch1_ck & KeSRAR_g_RA2_SelReducedPerf) >= 1U)) ||
            ((rtb_Switch1_mr & KeSRAR_g_RA3_SelReducedPerf) >= 1U)) ||
                                ((rtb_Switch1_bk & KeSRAR_g_RA4_SelReducedPerf) >=
            1U)) || ((rtb_Switch1_c & KeSRAR_g_RA5_SelReducedPerf) >= 1U)) ||
                              ((rtb_Switch1_fxq & KeSRAR_g_RA6_SelReducedPerf) >=
                               1U)) || ((BitwiseLogicalOperator_b &
                               KeSRAR_g_RA7_SelReducedPerf) >= 1U)) ||
                            ((rtb_Switch1_anw & KeSRAR_g_RA8_SelReducedPerf) >=
                             1U)) && ((!rtb_TmpSignalConversionAtVeB_j2) ||
                            (KeSRAR_b_ReducedPerf_DebDisbl)));
    }

    /* End of Switch: '<S856>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S255>/SignalLatchOnWithReset' */
    /* Logic: '<S873>/OR1' incorporates:
     *  Logic: '<S873>/OR'
     *  UnitDelay: '<S873>/UnitDelay'
     */
    rtb_UnitDelay_eb = (rtb_Logical8_dq || (rtb_VeSRAR_b_HVOverVoltFailur_2 &&
                         (SRAR_ac_DW.UnitDelay_DSTATE_bee)));

    /* Update for UnitDelay: '<S873>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_bee = rtb_UnitDelay_eb;

    /* End of Outputs for SubSystem: '<S255>/SignalLatchOnWithReset' */

    /* Switch: '<S857>/Switch1' incorporates:
     *  Constant: '<S859>/Calib'
     */
    if (KeSRAR_b_ReducedPerf_Latch)
    {
        /* Switch: '<S857>/Switch1' */
        rtb_Logical8_dq = rtb_UnitDelay_eb;
    }

    /* End of Switch: '<S857>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S255>/TurnOnDelayTime' */
    /* Outputs for Atomic SubSystem: '<S874>/EdgeRising' */
    /* Logic: '<S883>/AND' incorporates:
     *  Logic: '<S883>/OR1'
     *  UnitDelay: '<S883>/UnitDelay'
     */
    rtb_UnitDelay_eb = (rtb_Logical8_dq && (!SRAR_ac_DW.UnitDelay_DSTATE_fp));

    /* Update for UnitDelay: '<S883>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_fp = rtb_Logical8_dq;

    /* End of Outputs for SubSystem: '<S874>/EdgeRising' */

    /* Switch: '<S874>/Switch1' incorporates:
     *  Logic: '<S874>/OR'
     *  Logic: '<S874>/OR1'
     */
    if ((!rtb_Logical8_dq) || rtb_UnitDelay_eb)
    {
        /* Switch: '<S874>/Switch1' incorporates:
         *  Constant: '<S874>/ConstantValue1'
         */
        rtb_Switch1_jp = 0.0F;
    }
    else
    {
        /* Switch: '<S874>/Switch1' incorporates:
         *  Constant: '<S870>/Calib'
         *  Constant: '<S871>/Calib'
         *  MinMax: '<S874>/Minimum'
         *  Sum: '<S874>/Summation'
         *  UnitDelay: '<S874>/UnitDelay'
         */
        rtb_Switch1_jp = fminf(KeSRAR_t_ReducedPerfTurnONDelay, KeSRAR_t_dT +
                               SRAR_ac_DW.UnitDelay_DSTATE_ey);
    }

    /* End of Switch: '<S874>/Switch1' */

    /* Logic: '<S874>/AND' incorporates:
     *  Constant: '<S870>/Calib'
     *  RelationalOperator: '<S874>/GreaterThan'
     */
    rtb_Logical8_dq = (rtb_Logical8_dq && (rtb_Switch1_jp >=
                        KeSRAR_t_ReducedPerfTurnONDelay));

    /* Update for UnitDelay: '<S874>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_ey = rtb_Switch1_jp;

    /* End of Outputs for SubSystem: '<S255>/TurnOnDelayTime' */

    /* Logic: '<S18>/Logical' incorporates:
     *  Constant: '<S132>/Calib'
     */
    rtb_VeSRAR_b_CKSFailed = (rtb_Logical8_dq &&
        (KeSRAR_b_HybPwrtrnRdcdPerfCmndEnbl));

    /* Logic: '<S18>/Logical9' incorporates:
     *  Constant: '<S133>/Calib'
     */
    rtb_LogicalOperator_ln = (rtb_Logical8_dq && (KeSRAR_b_ReducedPerfModeEnbl));

    /* Switch: '<S884>/Switch1' incorporates:
     *  Constant: '<S888>/Calib'
     */
    if (KeSRAR_b_ReducedPerf2_OvrdEnbl)
    {
        /* Switch: '<S884>/Switch1' incorporates:
         *  Constant: '<S889>/Calib'
         */
        rtb_Logical8_dq = KeSRAR_b_ReducedPerf2_OvrdVal;
    }
    else
    {
        /* Switch: '<S884>/Switch1' incorporates:
         *  Constant: '<S886>/Calib'
         *  Constant: '<S890>/Calib'
         *  Constant: '<S891>/Calib'
         *  Constant: '<S892>/Calib'
         *  Constant: '<S893>/Calib'
         *  Constant: '<S894>/Calib'
         *  Constant: '<S895>/Calib'
         *  Constant: '<S896>/Calib'
         *  Constant: '<S897>/Calib'
         *  Constant: '<S903>/ConstantValue'
         *  Constant: '<S904>/ConstantValue'
         *  Constant: '<S905>/ConstantValue'
         *  Constant: '<S906>/ConstantValue'
         *  Constant: '<S907>/ConstantValue'
         *  Constant: '<S908>/ConstantValue'
         *  Constant: '<S909>/ConstantValue'
         *  Constant: '<S910>/ConstantValue'
         *  Logic: '<S256>/AND1'
         *  Logic: '<S256>/Logical19'
         *  Logic: '<S256>/Logical20'
         *  Logic: '<S900>/Logical13'
         *  RelationalOperator: '<S903>/Comparison'
         *  RelationalOperator: '<S904>/Comparison'
         *  RelationalOperator: '<S905>/Comparison'
         *  RelationalOperator: '<S906>/Comparison'
         *  RelationalOperator: '<S907>/Comparison'
         *  RelationalOperator: '<S908>/Comparison'
         *  RelationalOperator: '<S909>/Comparison'
         *  RelationalOperator: '<S910>/Comparison'
         *  S-Function (sfix_bitop): '<S903>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S904>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S905>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S906>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S907>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S908>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S909>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S910>/BitwiseLogicalOperator6'
         */
        rtb_Logical8_dq = ((((((((((rtb_Switch1_n3 &
            KeSRAR_g_RA1_SelReducedPerf2) >= 1U) || ((rtb_Switch1_ck &
            KeSRAR_g_RA2_SelReducedPerf2) >= 1U)) || ((rtb_Switch1_mr &
            KeSRAR_g_RA3_SelReducedPerf2) >= 1U)) || ((rtb_Switch1_bk &
            KeSRAR_g_RA4_SelReducedPerf2) >= 1U)) || ((rtb_Switch1_c &
            KeSRAR_g_RA5_SelReducedPerf2) >= 1U)) || ((rtb_Switch1_fxq &
                                KeSRAR_g_RA6_SelReducedPerf2) >= 1U)) ||
                             ((BitwiseLogicalOperator_b &
                               KeSRAR_g_RA7_SelReducedPerf2) >= 1U)) ||
                            ((rtb_Switch1_anw & KeSRAR_g_RA8_SelReducedPerf2) >=
                             1U)) && ((!rtb_TmpSignalConversionAtVeB_j2) ||
                            (KeSRAR_b_ReducedPerf2_DebDisbl)));
    }

    /* End of Switch: '<S884>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S256>/SignalLatchOnWithReset' */
    /* Logic: '<S901>/OR1' incorporates:
     *  Logic: '<S901>/OR'
     *  UnitDelay: '<S901>/UnitDelay'
     */
    rtb_UnitDelay_eb = (rtb_Logical8_dq || (rtb_VeSRAR_b_HVOverVoltFailur_2 &&
                         (SRAR_ac_DW.UnitDelay_DSTATE_kgl)));

    /* Update for UnitDelay: '<S901>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_kgl = rtb_UnitDelay_eb;

    /* End of Outputs for SubSystem: '<S256>/SignalLatchOnWithReset' */

    /* Switch: '<S885>/Switch1' incorporates:
     *  Constant: '<S887>/Calib'
     */
    if (KeSRAR_b_ReducedPerf2_Latch)
    {
        /* Switch: '<S885>/Switch1' */
        rtb_Logical8_dq = rtb_UnitDelay_eb;
    }

    /* End of Switch: '<S885>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S256>/TurnOnDelayTime' */
    /* Outputs for Atomic SubSystem: '<S902>/EdgeRising' */
    /* Logic: '<S911>/AND' incorporates:
     *  Logic: '<S911>/OR1'
     *  UnitDelay: '<S911>/UnitDelay'
     */
    rtb_UnitDelay_eb = (rtb_Logical8_dq && (!SRAR_ac_DW.UnitDelay_DSTATE_ak));

    /* Update for UnitDelay: '<S911>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_ak = rtb_Logical8_dq;

    /* End of Outputs for SubSystem: '<S902>/EdgeRising' */

    /* Switch: '<S902>/Switch1' incorporates:
     *  Logic: '<S902>/OR'
     *  Logic: '<S902>/OR1'
     */
    if ((!rtb_Logical8_dq) || rtb_UnitDelay_eb)
    {
        /* Switch: '<S902>/Switch1' incorporates:
         *  Constant: '<S902>/ConstantValue1'
         */
        rtb_Switch1_jp = 0.0F;
    }
    else
    {
        /* Switch: '<S902>/Switch1' incorporates:
         *  Constant: '<S898>/Calib'
         *  Constant: '<S899>/Calib'
         *  MinMax: '<S902>/Minimum'
         *  Sum: '<S902>/Summation'
         *  UnitDelay: '<S902>/UnitDelay'
         */
        rtb_Switch1_jp = fminf(KeSRAR_t_ReducedPerf2TurnONDelay, KeSRAR_t_dT +
                               SRAR_ac_DW.UnitDelay_DSTATE_dp);
    }

    /* End of Switch: '<S902>/Switch1' */

    /* Logic: '<S902>/AND' incorporates:
     *  Constant: '<S898>/Calib'
     *  RelationalOperator: '<S902>/GreaterThan'
     */
    rtb_TmpSignalConversionAtVeENGR = (rtb_Logical8_dq && (rtb_Switch1_jp >=
        KeSRAR_t_ReducedPerf2TurnONDelay));

    /* Update for UnitDelay: '<S902>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_dp = rtb_Switch1_jp;

    /* End of Outputs for SubSystem: '<S256>/TurnOnDelayTime' */

    /* Switch: '<S309>/Switch1' incorporates:
     *  Constant: '<S312>/Calib'
     */
    if (KeSRAR_b_DisableAEMD_OvrdEnbl)
    {
        /* Switch: '<S309>/Switch1' incorporates:
         *  Constant: '<S313>/Calib'
         */
        rtb_Logical8_dq = KeSRAR_b_DisableAEMD_OvrdVal;
    }
    else
    {
        /* Switch: '<S309>/Switch1' incorporates:
         *  Constant: '<S314>/Calib'
         *  Constant: '<S315>/Calib'
         *  Constant: '<S316>/Calib'
         *  Constant: '<S317>/Calib'
         *  Constant: '<S318>/Calib'
         *  Constant: '<S319>/Calib'
         *  Constant: '<S320>/Calib'
         *  Constant: '<S321>/Calib'
         *  Constant: '<S327>/ConstantValue'
         *  Constant: '<S328>/ConstantValue'
         *  Constant: '<S329>/ConstantValue'
         *  Constant: '<S330>/ConstantValue'
         *  Constant: '<S331>/ConstantValue'
         *  Constant: '<S332>/ConstantValue'
         *  Constant: '<S333>/ConstantValue'
         *  Constant: '<S334>/ConstantValue'
         *  Logic: '<S324>/Logical13'
         *  RelationalOperator: '<S327>/Comparison'
         *  RelationalOperator: '<S328>/Comparison'
         *  RelationalOperator: '<S329>/Comparison'
         *  RelationalOperator: '<S330>/Comparison'
         *  RelationalOperator: '<S331>/Comparison'
         *  RelationalOperator: '<S332>/Comparison'
         *  RelationalOperator: '<S333>/Comparison'
         *  RelationalOperator: '<S334>/Comparison'
         *  S-Function (sfix_bitop): '<S327>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S328>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S329>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S330>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S331>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S332>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S333>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S334>/BitwiseLogicalOperator6'
         */
        rtb_Logical8_dq = (((((((((rtb_Switch1_n3 & KeSRAR_g_RA1_SelDisableAEMD)
            >= 1U) || ((rtb_Switch1_ck & KeSRAR_g_RA2_SelDisableAEMD) >= 1U)) ||
                                ((rtb_Switch1_mr & KeSRAR_g_RA3_SelDisableAEMD) >=
            1U)) || ((rtb_Switch1_bk & KeSRAR_g_RA4_SelDisableAEMD) >= 1U)) ||
                              ((rtb_Switch1_c & KeSRAR_g_RA5_SelDisableAEMD) >=
                               1U)) || ((rtb_Switch1_fxq &
                               KeSRAR_g_RA6_SelDisableAEMD) >= 1U)) ||
                            ((BitwiseLogicalOperator_b &
                              KeSRAR_g_RA7_SelDisableAEMD) >= 1U)) ||
                           ((rtb_Switch1_anw & KeSRAR_g_RA8_SelDisableAEMD) >=
                            1U));
    }

    /* End of Switch: '<S309>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S238>/SignalLatchOnWithReset' */
    /* Logic: '<S325>/OR1' incorporates:
     *  Logic: '<S325>/OR'
     *  UnitDelay: '<S325>/UnitDelay'
     */
    rtb_UnitDelay_eb = (rtb_Logical8_dq || (rtb_VeSRAR_b_HVOverVoltFailur_2 &&
                         (SRAR_ac_DW.UnitDelay_DSTATE_pf)));

    /* Update for UnitDelay: '<S325>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_pf = rtb_UnitDelay_eb;

    /* End of Outputs for SubSystem: '<S238>/SignalLatchOnWithReset' */

    /* Switch: '<S310>/Switch1' incorporates:
     *  Constant: '<S311>/Calib'
     */
    if (KeSRAR_b_DisableAEMD_Latch)
    {
        /* Switch: '<S310>/Switch1' */
        rtb_TmpSignalConversionAtVeEN_b = rtb_UnitDelay_eb;
    }
    else
    {
        /* Switch: '<S310>/Switch1' */
        rtb_TmpSignalConversionAtVeEN_b = rtb_Logical8_dq;
    }

    /* End of Switch: '<S310>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S238>/TurnOnDelayTime1' */
    /* Outputs for Atomic SubSystem: '<S326>/EdgeRising' */
    /* Logic: '<S335>/AND' incorporates:
     *  Logic: '<S335>/OR1'
     *  UnitDelay: '<S335>/UnitDelay'
     */
    rtb_Logical8_dq = (rtb_TmpSignalConversionAtVeEN_b &&
                       (!SRAR_ac_DW.UnitDelay_DSTATE_ow));

    /* Update for UnitDelay: '<S335>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_ow = rtb_TmpSignalConversionAtVeEN_b;

    /* End of Outputs for SubSystem: '<S326>/EdgeRising' */

    /* Switch: '<S326>/Switch1' incorporates:
     *  Logic: '<S326>/OR'
     *  Logic: '<S326>/OR1'
     */
    if ((!rtb_TmpSignalConversionAtVeEN_b) || rtb_Logical8_dq)
    {
        /* Switch: '<S326>/Switch1' incorporates:
         *  Constant: '<S326>/ConstantValue1'
         */
        rtb_Switch1_jp = 0.0F;
    }
    else
    {
        /* Switch: '<S326>/Switch1' incorporates:
         *  Constant: '<S322>/Calib'
         *  Constant: '<S323>/Calib'
         *  MinMax: '<S326>/Minimum'
         *  Sum: '<S326>/Summation'
         *  UnitDelay: '<S326>/UnitDelay'
         */
        rtb_Switch1_jp = fminf(KeSRAR_t_DisableAEMDTurnONDelay, KeSRAR_t_dT +
                               SRAR_ac_DW.UnitDelay_DSTATE_gv);
    }

    /* End of Switch: '<S326>/Switch1' */

    /* Update for UnitDelay: '<S326>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_gv = rtb_Switch1_jp;

    /* End of Outputs for SubSystem: '<S238>/TurnOnDelayTime1' */

    /* Switch: '<S495>/Switch1' incorporates:
     *  Constant: '<S499>/Calib'
     */
    if (KeSRAR_b_EPB_Hold_Req_OvrdEnbl)
    {
        /* Switch: '<S495>/Switch1' incorporates:
         *  Constant: '<S500>/Calib'
         */
        rtb_Logical8_dq = KeSRAR_b_EPB_Hold_Req_OvrdVal;
    }
    else
    {
        /* Switch: '<S495>/Switch1' incorporates:
         *  Constant: '<S497>/Calib'
         *  Constant: '<S501>/Calib'
         *  Constant: '<S502>/Calib'
         *  Constant: '<S503>/Calib'
         *  Constant: '<S504>/Calib'
         *  Constant: '<S505>/Calib'
         *  Constant: '<S506>/Calib'
         *  Constant: '<S507>/Calib'
         *  Constant: '<S508>/Calib'
         *  Constant: '<S514>/ConstantValue'
         *  Constant: '<S515>/ConstantValue'
         *  Constant: '<S516>/ConstantValue'
         *  Constant: '<S517>/ConstantValue'
         *  Constant: '<S518>/ConstantValue'
         *  Constant: '<S519>/ConstantValue'
         *  Constant: '<S520>/ConstantValue'
         *  Constant: '<S521>/ConstantValue'
         *  Logic: '<S247>/AND1'
         *  Logic: '<S247>/Logical8'
         *  Logic: '<S247>/Logical9'
         *  Logic: '<S511>/Logical13'
         *  RelationalOperator: '<S514>/Comparison'
         *  RelationalOperator: '<S515>/Comparison'
         *  RelationalOperator: '<S516>/Comparison'
         *  RelationalOperator: '<S517>/Comparison'
         *  RelationalOperator: '<S518>/Comparison'
         *  RelationalOperator: '<S519>/Comparison'
         *  RelationalOperator: '<S520>/Comparison'
         *  RelationalOperator: '<S521>/Comparison'
         *  S-Function (sfix_bitop): '<S514>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S515>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S516>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S517>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S518>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S519>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S520>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S521>/BitwiseLogicalOperator6'
         */
        rtb_Logical8_dq = ((((((((((rtb_Switch1_n3 & KeSRAR_g_RA1_SelEPBHoldReq)
            >= 1U) || ((rtb_Switch1_ck & KeSRAR_g_RA2_SelEPBHoldReq) >= 1U)) ||
            ((rtb_Switch1_mr & KeSRAR_g_RA3_SelEPBHoldReq) >= 1U)) ||
                                ((rtb_Switch1_bk & KeSRAR_g_RA4_SelEPBHoldReq) >=
            1U)) || ((rtb_Switch1_c & KeSRAR_g_RA5_SelEPBHoldReq) >= 1U)) ||
                              ((rtb_Switch1_fxq & KeSRAR_g_RA6_SelEPBHoldReq) >=
                               1U)) || ((BitwiseLogicalOperator_b &
                               KeSRAR_g_RA7_SelEPBHoldReq) >= 1U)) ||
                            ((rtb_Switch1_anw & KeSRAR_g_RA8_SelEPBHoldReq) >=
                             1U)) && ((!rtb_TmpSignalConversionAtVeB_j2) ||
                            (KeSRAR_b_EPB_Hold_Req_DebDisbl)));
    }

    /* End of Switch: '<S495>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S247>/SignalLatchOnWithReset' */
    /* Logic: '<S512>/OR1' incorporates:
     *  Logic: '<S512>/OR'
     *  UnitDelay: '<S512>/UnitDelay'
     */
    rtb_UnitDelay_eb = (rtb_Logical8_dq || (rtb_VeSRAR_b_HVOverVoltFailur_2 &&
                         (SRAR_ac_DW.UnitDelay_DSTATE_fw)));

    /* Update for UnitDelay: '<S512>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_fw = rtb_UnitDelay_eb;

    /* End of Outputs for SubSystem: '<S247>/SignalLatchOnWithReset' */

    /* Switch: '<S496>/Switch1' incorporates:
     *  Constant: '<S498>/Calib'
     */
    if (KeSRAR_b_EPB_Hold_Req_Latch)
    {
        /* Switch: '<S496>/Switch1' */
        rtb_TmpSignalConversionAtVePM_m = rtb_UnitDelay_eb;
    }
    else
    {
        /* Switch: '<S496>/Switch1' */
        rtb_TmpSignalConversionAtVePM_m = rtb_Logical8_dq;
    }

    /* End of Switch: '<S496>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S247>/TurnOnDelayTime1' */
    /* Outputs for Atomic SubSystem: '<S513>/EdgeRising' */
    /* Logic: '<S522>/AND' incorporates:
     *  Logic: '<S522>/OR1'
     *  UnitDelay: '<S522>/UnitDelay'
     */
    rtb_Logical8_dq = (rtb_TmpSignalConversionAtVePM_m &&
                       (!SRAR_ac_DW.UnitDelay_DSTATE_nb));

    /* Update for UnitDelay: '<S522>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_nb = rtb_TmpSignalConversionAtVePM_m;

    /* End of Outputs for SubSystem: '<S513>/EdgeRising' */

    /* Switch: '<S513>/Switch1' incorporates:
     *  Logic: '<S513>/OR'
     *  Logic: '<S513>/OR1'
     */
    if ((!rtb_TmpSignalConversionAtVePM_m) || rtb_Logical8_dq)
    {
        /* Switch: '<S513>/Switch1' incorporates:
         *  Constant: '<S513>/ConstantValue1'
         */
        rtb_TmpSignalConversionAtVeGENR = 0.0F;
    }
    else
    {
        /* Switch: '<S513>/Switch1' incorporates:
         *  Constant: '<S509>/Calib'
         *  Constant: '<S510>/Calib'
         *  MinMax: '<S513>/Minimum'
         *  Sum: '<S513>/Summation'
         *  UnitDelay: '<S513>/UnitDelay'
         */
        rtb_TmpSignalConversionAtVeGENR = fminf(KeSRAR_t_EPB_Hold_ReqTurnONDelay,
            KeSRAR_t_dT + SRAR_ac_DW.UnitDelay_DSTATE_il);
    }

    /* End of Switch: '<S513>/Switch1' */

    /* Update for UnitDelay: '<S513>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_il = rtb_TmpSignalConversionAtVeGENR;

    /* End of Outputs for SubSystem: '<S247>/TurnOnDelayTime1' */

    /* Logic: '<S2113>/Logical8' incorporates:
     *  Constant: '<S135>/Constant'
     *  Constant: '<S136>/Constant'
     *  Constant: '<S138>/Constant'
     *  Logic: '<S19>/Logical8'
     *  RelationalOperator: '<S19>/Comparison4'
     *  RelationalOperator: '<S19>/Comparison5'
     *  RelationalOperator: '<S19>/Comparison6'
     */
    rtb_Logical8_dq = (((((uint32)rtb_TmpSignalConversionAtVeTRGR) ==
                         CeTRGR_e_TransRangeDrive) || (((uint32)
                          rtb_TmpSignalConversionAtVeTRGR) ==
                         CeTRGR_e_TransRangeReverse)) || (((uint32)
                         rtb_TmpSignalConversionAtVeTRGR) ==
                        CeTRGR_e_TransRangeNeutral));

    /* Switch: '<S1277>/Switch1' incorporates:
     *  Constant: '<S1280>/Calib'
     */
    if (KeSRAR_b_FltShtDwnCmndRet_OvrdEnbl)
    {
        /* Switch: '<S1277>/Switch1' incorporates:
         *  Constant: '<S1281>/Calib'
         */
        rtb_UnitDelay_eb = KeSRAR_b_FltShtDwnCmndRet_OvrdVal;
    }
    else
    {
        /* Switch: '<S1277>/Switch1' incorporates:
         *  Constant: '<S1282>/Calib'
         *  Constant: '<S1283>/Calib'
         *  Constant: '<S1284>/Calib'
         *  Constant: '<S1285>/Calib'
         *  Constant: '<S1286>/Calib'
         *  Constant: '<S1287>/Calib'
         *  Constant: '<S1288>/Calib'
         *  Constant: '<S1289>/Calib'
         *  Constant: '<S1295>/ConstantValue'
         *  Constant: '<S1296>/ConstantValue'
         *  Constant: '<S1297>/ConstantValue'
         *  Constant: '<S1298>/ConstantValue'
         *  Constant: '<S1299>/ConstantValue'
         *  Constant: '<S1300>/ConstantValue'
         *  Constant: '<S1301>/ConstantValue'
         *  Constant: '<S1302>/ConstantValue'
         *  Logic: '<S1292>/Logical13'
         *  RelationalOperator: '<S1295>/Comparison'
         *  RelationalOperator: '<S1296>/Comparison'
         *  RelationalOperator: '<S1297>/Comparison'
         *  RelationalOperator: '<S1298>/Comparison'
         *  RelationalOperator: '<S1299>/Comparison'
         *  RelationalOperator: '<S1300>/Comparison'
         *  RelationalOperator: '<S1301>/Comparison'
         *  RelationalOperator: '<S1302>/Comparison'
         *  S-Function (sfix_bitop): '<S1295>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1296>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1297>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1298>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1299>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1300>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1301>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1302>/BitwiseLogicalOperator6'
         */
        rtb_UnitDelay_eb = (((((((((rtb_Switch1_n3 &
            KeSRAR_g_RA1_SelFltShtDwnCmndRet) >= 1U) || ((rtb_Switch1_ck &
            KeSRAR_g_RA2_SelFltShtDwnCmndRet) >= 1U)) || ((rtb_Switch1_mr &
            KeSRAR_g_RA3_SelFltShtDwnCmndRet) >= 1U)) || ((rtb_Switch1_bk &
            KeSRAR_g_RA4_SelFltShtDwnCmndRet) >= 1U)) || ((rtb_Switch1_c &
            KeSRAR_g_RA5_SelFltShtDwnCmndRet) >= 1U)) || ((rtb_Switch1_fxq &
                                KeSRAR_g_RA6_SelFltShtDwnCmndRet) >= 1U)) ||
                             ((BitwiseLogicalOperator_b &
                               KeSRAR_g_RA7_SelFltShtDwnCmndRet) >= 1U)) ||
                            ((rtb_Switch1_anw & KeSRAR_g_RA8_SelFltShtDwnCmndRet)
                             >= 1U));
    }

    /* End of Switch: '<S1277>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S261>/SignalLatchOnWithReset' */
    /* Logic: '<S1293>/OR1' incorporates:
     *  Logic: '<S1293>/OR'
     *  UnitDelay: '<S1293>/UnitDelay'
     */
    rtb_Merge1_i = (rtb_UnitDelay_eb || (rtb_VeSRAR_b_HVOverVoltFailur_2 &&
                     (SRAR_ac_DW.UnitDelay_DSTATE_h3)));

    /* Update for UnitDelay: '<S1293>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_h3 = rtb_Merge1_i;

    /* End of Outputs for SubSystem: '<S261>/SignalLatchOnWithReset' */

    /* Switch: '<S1278>/Switch1' incorporates:
     *  Constant: '<S1279>/Calib'
     */
    if (KeSRAR_b_FltShtDwnCmndRet_Latch)
    {
        /* Switch: '<S1278>/Switch1' */
        rtb_UnitDelay_eb = rtb_Merge1_i;
    }

    /* End of Switch: '<S1278>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S261>/TurnOnDelayTime1' */
    /* Outputs for Atomic SubSystem: '<S1294>/EdgeRising' */
    /* Logic: '<S1303>/AND' incorporates:
     *  Logic: '<S1303>/OR1'
     *  UnitDelay: '<S1303>/UnitDelay'
     */
    rtb_Merge1_i = (rtb_UnitDelay_eb && (!SRAR_ac_DW.UnitDelay_DSTATE_cru));

    /* Update for UnitDelay: '<S1303>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_cru = rtb_UnitDelay_eb;

    /* End of Outputs for SubSystem: '<S1294>/EdgeRising' */

    /* Switch: '<S1294>/Switch1' incorporates:
     *  Logic: '<S1294>/OR'
     *  Logic: '<S1294>/OR1'
     */
    if ((!rtb_UnitDelay_eb) || rtb_Merge1_i)
    {
        /* Switch: '<S1294>/Switch1' incorporates:
         *  Constant: '<S1294>/ConstantValue1'
         */
        rtb_Switch1_io = 0.0F;
    }
    else
    {
        /* Switch: '<S1294>/Switch1' incorporates:
         *  Constant: '<S1290>/Calib'
         *  Constant: '<S1291>/Calib'
         *  MinMax: '<S1294>/Minimum'
         *  Sum: '<S1294>/Summation'
         *  UnitDelay: '<S1294>/UnitDelay'
         */
        rtb_Switch1_io = fminf(KeSRAR_t_FltShtDwnCmndRetTurnONDelay, KeSRAR_t_dT
                               + SRAR_ac_DW.UnitDelay_DSTATE_l);
    }

    /* End of Switch: '<S1294>/Switch1' */

    /* Logic: '<S1294>/AND' incorporates:
     *  Constant: '<S1290>/Calib'
     *  RelationalOperator: '<S1294>/GreaterThan'
     */
    AND_o = (rtb_UnitDelay_eb && (rtb_Switch1_io >=
              KeSRAR_t_FltShtDwnCmndRetTurnONDelay));

    /* Update for UnitDelay: '<S1294>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_l = rtb_Switch1_io;

    /* End of Outputs for SubSystem: '<S261>/TurnOnDelayTime1' */

    /* Logic: '<S19>/Logical3' incorporates:
     *  Constant: '<S142>/Calib'
     *  Logic: '<S19>/Logical5'
     *  RelationalOperator: '<S19>/Comparison7'
     */
    rtb_UnitDelay_eb = (AND_o && (rtb_Logical8_dq &&
                         (rtb_TmpSignalConversionAtVeCSVR >
                          KeSRAR_v_VehSpd_ParkThrsh)));

    /* Outputs for Atomic SubSystem: '<S19>/TurnOnDelayTime1' */
    /* Outputs for Atomic SubSystem: '<S143>/EdgeRising' */
    /* Logic: '<S144>/AND' incorporates:
     *  Logic: '<S144>/OR1'
     *  UnitDelay: '<S144>/UnitDelay'
     */
    rtb_Merge1_i = (rtb_UnitDelay_eb && (!SRAR_ac_DW.UnitDelay_DSTATE_jj));

    /* Update for UnitDelay: '<S144>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_jj = rtb_UnitDelay_eb;

    /* End of Outputs for SubSystem: '<S143>/EdgeRising' */

    /* Switch: '<S143>/Switch1' incorporates:
     *  Logic: '<S143>/OR'
     *  Logic: '<S143>/OR1'
     */
    if ((!rtb_UnitDelay_eb) || rtb_Merge1_i)
    {
        /* Switch: '<S143>/Switch1' incorporates:
         *  Constant: '<S143>/ConstantValue1'
         */
        rtb_Switch1_io = 0.0F;
    }
    else
    {
        /* Switch: '<S143>/Switch1' incorporates:
         *  Constant: '<S140>/Calib'
         *  Constant: '<S141>/Calib'
         *  MinMax: '<S143>/Minimum'
         *  Sum: '<S143>/Summation'
         *  UnitDelay: '<S143>/UnitDelay'
         */
        rtb_Switch1_io = fminf(KeSRAR_t_FltShtDwnDmndRet, KeSRAR_t_dT +
                               SRAR_ac_DW.UnitDelay_DSTATE_dl);
    }

    /* End of Switch: '<S143>/Switch1' */

    /* Update for UnitDelay: '<S143>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_dl = rtb_Switch1_io;

    /* End of Outputs for SubSystem: '<S19>/TurnOnDelayTime1' */

    /* RelationalOperator: '<S1147>/Comparison1' incorporates:
     *  Constant: '<S1161>/Constant'
     */
    rtb_TmpSignalConversionAtVeAD_p = (((uint32)rtb_TmpSignalConversionAtVeES_p)
        == CeESSR_e_Stop);

    /* Outputs for Triggered SubSystem: '<S921>/New' incorporates:
     *  TriggerPort: '<S1146>/Trigger'
     */
    if (rtb_Switch1_ahj && (((sint32)SRAR_ac_PrevZCX.New_Trig_ZCE) != 1))
    {
        /* Inport: '<Root>/VeCSLR_n_Clch2_RawSlipSpeed' */
        (void)Rte_Read_VeCSLR_n_Clch2_RawSlipSpeed_Value(&rtb_Switch1_dn);

        /* Inport: '<Root>/VeCSLR_n_Clch1_RawSlipSpeed' */
        (void)Rte_Read_VeCSLR_n_Clch1_RawSlipSpeed_Value(&rtb_Switch1_nx);

        /* RelationalOperator: '<S1146>/Y_valve_low' incorporates:
         *  Abs: '<S1146>/Abs2'
         *  Constant: '<S1149>/Calib'
         */
        SRAR_ac_B.Y_valve_low = (fabsf(rtb_Switch1_nx) <=
            KeSRAR_n_Clch1SlipThrsh);

        /* RelationalOperator: '<S1146>/Y_valve_high' incorporates:
         *  Abs: '<S1146>/Abs1'
         *  Constant: '<S1150>/Calib'
         */
        SRAR_ac_B.Y_valve_high = (fabsf(rtb_Switch1_dn) <=
            KeSRAR_n_Clch2SlipThrsh);

        /* Switch: '<S1148>/Switch1' incorporates:
         *  Constant: '<S1146>/Constant'
         *  Logic: '<S1146>/Logical1'
         *  Logic: '<S1146>/Logical2'
         *  RelationalOperator: '<S1146>/Compare'
         */
        if ((((SRAR_ac_B.Y_valve_low) && (SRAR_ac_B.Y_valve_high)) &&
                (rtb_TmpSignalConversionAtVeVSDR <= 30.0F)) &&
                rtb_TmpSignalConversionAtVeAD_p)
        {
            /* Switch: '<S1148>/Switch1' incorporates:
             *  Constant: '<S1146>/Constant1'
             */
            SRAR_ac_B.Switch1_m = false;
        }
        else
        {
            /* Switch: '<S1148>/Switch1' incorporates:
             *  Logic: '<S1146>/ShtDwn'
             *  Logic: '<S1146>/ShtDwn1'
             */
            SRAR_ac_B.Switch1_m = (SRAR_ac_B.Y_valve_low ==
                                   SRAR_ac_B.Y_valve_high);
        }

        /* End of Switch: '<S1148>/Switch1' */
    }

    SRAR_ac_PrevZCX.New_Trig_ZCE = rtb_Switch1_ahj ? ((ZCSigState)1) :
        ((ZCSigState)0);

    /* End of Outputs for SubSystem: '<S921>/New' */

    /* If: '<S1147>/If' incorporates:
     *  Constant: '<S1154>/Constant'
     *  Constant: '<S1155>/Constant'
     *  Constant: '<S1156>/Constant'
     *  Constant: '<S1157>/Constant'
     *  Constant: '<S1158>/Constant'
     *  Constant: '<S1159>/Constant'
     *  Constant: '<S1160>/Constant'
     *  RelationalOperator: '<S1147>/Comparison2'
     *  RelationalOperator: '<S1147>/Comparison3'
     *  RelationalOperator: '<S1147>/Comparison4'
     *  RelationalOperator: '<S1147>/Comparison5'
     *  RelationalOperator: '<S1147>/Comparison6'
     *  RelationalOperator: '<S1147>/Comparison7'
     *  RelationalOperator: '<S1147>/Comparison8'
     */
    if ((((CeHSER_e_UseNeutralEqn == ((uint32)rtb_TmpSignalConversionAtVeHS_h)) ||
          (CeHSER_e_UseM1Eqn == ((uint32)rtb_TmpSignalConversionAtVeHS_h))) ||
            (CeHSER_e_UseG1Eqn == ((uint32)rtb_TmpSignalConversionAtVeHS_h))) ||
        (CeHSER_e_UseG2Eqn == ((uint32)rtb_TmpSignalConversionAtVeHS_h)))
    {
        /* Outputs for IfAction SubSystem: '<S1147>/Default_Case_1' incorporates:
         *  ActionPort: '<S1151>/ActionPort'
         */
        /* Merge: '<S1147>/Merge2' incorporates:
         *  Constant: '<S1151>/ConstantValue'
         *  SignalConversion generated from: '<S1151>/Mode1'
         */
        rtb_Merge2 = true;

        /* Merge: '<S1147>/Merge3' incorporates:
         *  Constant: '<S1151>/ConstantValue1'
         *  SignalConversion generated from: '<S1151>/Mode2'
         */
        rtb_Logical21 = false;

        /* Merge: '<S1147>/Merge4' incorporates:
         *  Constant: '<S1151>/ConstantValue2'
         *  SignalConversion generated from: '<S1151>/ShtDwn'
         */
        rtb_Logical1_aq = false;

        /* Merge: '<S1147>/Merge1' incorporates:
         *  Constant: '<S1164>/Calib'
         *  RelationalOperator: '<S1151>/Comparison2'
         */
        rtb_Merge1_i = (rtb_TmpSignalConversionAtVeHCCR >=
                        KeSRAR_n_TossInhGearsShutDownEng);

        /* End of Outputs for SubSystem: '<S1147>/Default_Case_1' */
    }
    else if (((CeHSER_e_UseM2Eqn == ((uint32)rtb_TmpSignalConversionAtVeHS_h)) ||
              (CeHSER_e_UseG3Eqn == ((uint32)rtb_TmpSignalConversionAtVeHS_h))) ||
             (CeHSER_e_UseG4Eqn == ((uint32)rtb_TmpSignalConversionAtVeHS_h)))
    {
        /* Outputs for IfAction SubSystem: '<S1147>/Default_Case_2' incorporates:
         *  ActionPort: '<S1152>/ActionPort'
         */
        /* Merge: '<S1147>/Merge2' incorporates:
         *  Constant: '<S1152>/ConstantValue'
         *  SignalConversion generated from: '<S1152>/Mode1'
         */
        rtb_Merge2 = false;

        /* Merge: '<S1147>/Merge3' incorporates:
         *  Constant: '<S1152>/ConstantValue1'
         *  SignalConversion generated from: '<S1152>/Mode2'
         */
        rtb_Logical21 = true;

        /* Merge: '<S1147>/Merge4' incorporates:
         *  Constant: '<S1152>/ConstantValue2'
         *  SignalConversion generated from: '<S1152>/ShtDwn'
         */
        rtb_Logical1_aq = false;

        /* Merge: '<S1147>/Merge1' incorporates:
         *  Constant: '<S1152>/ConstantValue3'
         *  SignalConversion generated from: '<S1152>/Req_Neutral'
         */
        rtb_Merge1_i = true;

        /* End of Outputs for SubSystem: '<S1147>/Default_Case_2' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S1147>/Default_Case_3' incorporates:
         *  ActionPort: '<S1153>/ActionPort'
         */
        /* Merge: '<S1147>/Merge2' incorporates:
         *  Constant: '<S1153>/ConstantValue'
         *  SignalConversion generated from: '<S1153>/Mode1'
         */
        rtb_Merge2 = false;

        /* Merge: '<S1147>/Merge3' incorporates:
         *  Constant: '<S1153>/ConstantValue1'
         *  SignalConversion generated from: '<S1153>/Mode2'
         */
        rtb_Logical21 = false;

        /* Merge: '<S1147>/Merge4' incorporates:
         *  Constant: '<S1153>/ConstantValue2'
         *  SignalConversion generated from: '<S1153>/ShtDwn'
         */
        rtb_Logical1_aq = true;

        /* Merge: '<S1147>/Merge1' incorporates:
         *  Constant: '<S1153>/ConstantValue3'
         *  SignalConversion generated from: '<S1153>/Req_Neutral'
         */
        rtb_Merge1_i = true;

        /* End of Outputs for SubSystem: '<S1147>/Default_Case_3' */
    }

    /* Switch: '<S921>/Switch' incorporates:
     *  Constant: '<S1145>/Calib'
     */
    if (KeSRAR_b_TCM_COM_LossSelect)
    {
        /* Switch: '<S921>/Switch' */
        rtb_Logical6 = SRAR_ac_B.Y_valve_low;
        rtb_Switch_g_idx_1 = SRAR_ac_B.Y_valve_high;
        rtb_Switch1_fqq = SRAR_ac_B.Switch1_m;
    }
    else
    {
        /* Switch: '<S921>/Switch' incorporates:
         *  Constant: '<S1163>/Calib'
         *  Logic: '<S1147>/Logical1'
         */
        rtb_Logical6 = (rtb_Merge2 && (KeSRAR_b_RngEqnSelMdEnbl));
        rtb_Switch_g_idx_1 = (rtb_Logical21 && (KeSRAR_b_RngEqnSelMdEnbl));
        rtb_Switch1_fqq = (rtb_Logical1_aq && (KeSRAR_b_RngEqnSelMdEnbl));
    }

    /* End of Switch: '<S921>/Switch' */

    /* Switch: '<S1220>/Switch1' incorporates:
     *  Constant: '<S1223>/Calib'
     */
    if (KeSRAR_b_FltShtDwnCmnd_OvrdEnbl)
    {
        /* Switch: '<S1220>/Switch1' incorporates:
         *  Constant: '<S1224>/Calib'
         */
        rtb_Merge2 = KeSRAR_b_FltShtDwnCmnd_OvrdVal;
    }
    else
    {
        /* Switch: '<S1220>/Switch1' incorporates:
         *  Constant: '<S1225>/Calib'
         *  Constant: '<S1226>/Calib'
         *  Constant: '<S1227>/Calib'
         *  Constant: '<S1228>/Calib'
         *  Constant: '<S1229>/Calib'
         *  Constant: '<S1230>/Calib'
         *  Constant: '<S1231>/Calib'
         *  Constant: '<S1232>/Calib'
         *  Constant: '<S1233>/Calib'
         *  Constant: '<S1240>/ConstantValue'
         *  Constant: '<S1241>/ConstantValue'
         *  Constant: '<S1242>/ConstantValue'
         *  Constant: '<S1243>/ConstantValue'
         *  Constant: '<S1244>/ConstantValue'
         *  Constant: '<S1245>/ConstantValue'
         *  Constant: '<S1246>/ConstantValue'
         *  Constant: '<S1247>/ConstantValue'
         *  Logic: '<S1236>/Logical13'
         *  Logic: '<S259>/Logical1'
         *  Logic: '<S259>/Logical6'
         *  Logic: '<S921>/Logical2'
         *  RelationalOperator: '<S1240>/Comparison'
         *  RelationalOperator: '<S1241>/Comparison'
         *  RelationalOperator: '<S1242>/Comparison'
         *  RelationalOperator: '<S1243>/Comparison'
         *  RelationalOperator: '<S1244>/Comparison'
         *  RelationalOperator: '<S1245>/Comparison'
         *  RelationalOperator: '<S1246>/Comparison'
         *  RelationalOperator: '<S1247>/Comparison'
         *  S-Function (sfix_bitop): '<S1240>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1241>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1242>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1243>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1244>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1245>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1246>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1247>/BitwiseLogicalOperator6'
         */
        rtb_Merge2 = (((KeSRAR_b_TCMCommFltShtDwn_FltShtDwnCmndEnbl) &&
                       (rtb_Switch1_fqq && rtb_Switch1_ahj)) ||
                      (((((((((rtb_Switch1_n3 & KeSRAR_g_RA1_SelFltShtDwnCmnd) >=
                              1U) || ((rtb_Switch1_ck &
                               KeSRAR_g_RA2_SelFltShtDwnCmnd) >= 1U)) ||
                            ((rtb_Switch1_mr & KeSRAR_g_RA3_SelFltShtDwnCmnd) >=
                             1U)) || ((rtb_Switch1_bk &
                             KeSRAR_g_RA4_SelFltShtDwnCmnd) >= 1U)) ||
                          ((rtb_Switch1_c & KeSRAR_g_RA5_SelFltShtDwnCmnd) >= 1U))
                         || ((rtb_Switch1_fxq & KeSRAR_g_RA6_SelFltShtDwnCmnd) >=
                             1U)) || ((BitwiseLogicalOperator_b &
                          KeSRAR_g_RA7_SelFltShtDwnCmnd) >= 1U)) ||
                       ((rtb_Switch1_anw & KeSRAR_g_RA8_SelFltShtDwnCmnd) >= 1U)));
    }

    /* End of Switch: '<S1220>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S259>/SignalLatchOnWithReset' */
    /* Logic: '<S1238>/OR1' incorporates:
     *  Logic: '<S1238>/OR'
     *  UnitDelay: '<S1238>/UnitDelay'
     */
    rtb_Logical21 = (rtb_Merge2 || (rtb_VeSRAR_b_HVOverVoltFailur_2 &&
                      (SRAR_ac_DW.UnitDelay_DSTATE_of)));

    /* Update for UnitDelay: '<S1238>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_of = rtb_Logical21;

    /* End of Outputs for SubSystem: '<S259>/SignalLatchOnWithReset' */

    /* Switch: '<S1221>/Switch1' incorporates:
     *  Constant: '<S1222>/Calib'
     */
    if (KeSRAR_b_FltShtDwnCmnd_Latch)
    {
        /* Switch: '<S1221>/Switch1' */
        rtb_Merge2 = rtb_Logical21;
    }

    /* End of Switch: '<S1221>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S259>/TurnOnDelayTime1' */
    /* Outputs for Atomic SubSystem: '<S1239>/EdgeRising' */
    /* Logic: '<S1248>/AND' incorporates:
     *  Logic: '<S1248>/OR1'
     *  UnitDelay: '<S1248>/UnitDelay'
     */
    rtb_Logical21 = (rtb_Merge2 && (!SRAR_ac_DW.UnitDelay_DSTATE_l1));

    /* Update for UnitDelay: '<S1248>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_l1 = rtb_Merge2;

    /* End of Outputs for SubSystem: '<S1239>/EdgeRising' */

    /* Switch: '<S1239>/Switch1' incorporates:
     *  Logic: '<S1239>/OR'
     *  Logic: '<S1239>/OR1'
     */
    if ((!rtb_Merge2) || rtb_Logical21)
    {
        /* Switch: '<S1239>/Switch1' incorporates:
         *  Constant: '<S1239>/ConstantValue1'
         */
        rtb_Switch1_dn = 0.0F;
    }
    else
    {
        /* Switch: '<S1239>/Switch1' incorporates:
         *  Constant: '<S1234>/Calib'
         *  Constant: '<S1235>/Calib'
         *  MinMax: '<S1239>/Minimum'
         *  Sum: '<S1239>/Summation'
         *  UnitDelay: '<S1239>/UnitDelay'
         */
        rtb_Switch1_dn = fminf(KeSRAR_t_FltShtDwnCmndTurnONDelay, KeSRAR_t_dT +
                               SRAR_ac_DW.UnitDelay_DSTATE_d0);
    }

    /* End of Switch: '<S1239>/Switch1' */

    /* Update for UnitDelay: '<S1239>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_d0 = rtb_Switch1_dn;

    /* Outputs for Atomic SubSystem: '<S19>/TurnOnDelayTime1' */
    /* Logic: '<S2113>/Logical8' incorporates:
     *  Constant: '<S1234>/Calib'
     *  Constant: '<S137>/Constant'
     *  Constant: '<S140>/Calib'
     *  Constant: '<S142>/Calib'
     *  Logic: '<S1239>/AND'
     *  Logic: '<S143>/AND'
     *  Logic: '<S19>/Logical1'
     *  Logic: '<S19>/Logical11'
     *  Logic: '<S19>/Logical13'
     *  Logic: '<S19>/Logical2'
     *  RelationalOperator: '<S1239>/GreaterThan'
     *  RelationalOperator: '<S143>/GreaterThan'
     *  RelationalOperator: '<S19>/Comparison1'
     *  RelationalOperator: '<S19>/Comparison3'
     */
    rtb_Logical8_dq = (((rtb_UnitDelay_eb && (rtb_Switch1_io >=
                          KeSRAR_t_FltShtDwnDmndRet)) || (AND_o && ((((uint32)
                            rtb_TmpSignalConversionAtVeTRGR) ==
                           CeTRGR_e_TransRangePark) || (rtb_Logical8_dq &&
                           (rtb_TmpSignalConversionAtVeCSVR <=
                            KeSRAR_v_VehSpd_ParkThrsh))))) || (rtb_Merge2 &&
                        (rtb_Switch1_dn >= KeSRAR_t_FltShtDwnCmndTurnONDelay)));

    /* End of Outputs for SubSystem: '<S19>/TurnOnDelayTime1' */
    /* End of Outputs for SubSystem: '<S259>/TurnOnDelayTime1' */

    /* Switch: '<S1249>/Switch1' incorporates:
     *  Constant: '<S1252>/Calib'
     */
    if (KeSRAR_b_FltShtDwnBPClsd_OvrdEnbl)
    {
        /* Switch: '<S1249>/Switch1' incorporates:
         *  Constant: '<S1253>/Calib'
         */
        rtb_UnitDelay_eb = KeSRAR_b_FltShtDwnBPClsd_OvrdVal;
    }
    else
    {
        /* Switch: '<S1249>/Switch1' incorporates:
         *  Constant: '<S1254>/Calib'
         *  Constant: '<S1255>/Calib'
         *  Constant: '<S1256>/Calib'
         *  Constant: '<S1257>/Calib'
         *  Constant: '<S1258>/Calib'
         *  Constant: '<S1259>/Calib'
         *  Constant: '<S1260>/Calib'
         *  Constant: '<S1261>/Calib'
         *  Constant: '<S1268>/ConstantValue'
         *  Constant: '<S1269>/ConstantValue'
         *  Constant: '<S1270>/ConstantValue'
         *  Constant: '<S1271>/ConstantValue'
         *  Constant: '<S1272>/ConstantValue'
         *  Constant: '<S1273>/ConstantValue'
         *  Constant: '<S1274>/ConstantValue'
         *  Constant: '<S1275>/ConstantValue'
         *  Logic: '<S1264>/Logical13'
         *  RelationalOperator: '<S1268>/Comparison'
         *  RelationalOperator: '<S1269>/Comparison'
         *  RelationalOperator: '<S1270>/Comparison'
         *  RelationalOperator: '<S1271>/Comparison'
         *  RelationalOperator: '<S1272>/Comparison'
         *  RelationalOperator: '<S1273>/Comparison'
         *  RelationalOperator: '<S1274>/Comparison'
         *  RelationalOperator: '<S1275>/Comparison'
         *  S-Function (sfix_bitop): '<S1268>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1269>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1270>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1271>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1272>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1273>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1274>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1275>/BitwiseLogicalOperator6'
         */
        rtb_UnitDelay_eb = (((((((((rtb_Switch1_n3 &
            KeSRAR_g_RA1_SelFltShtDwnBPClsd) >= 1U) || ((rtb_Switch1_ck &
            KeSRAR_g_RA2_SelFltShtDwnBPClsd) >= 1U)) || ((rtb_Switch1_mr &
            KeSRAR_g_RA3_SelFltShtDwnBPClsd) >= 1U)) || ((rtb_Switch1_bk &
            KeSRAR_g_RA4_SelFltShtDwnBPClsd) >= 1U)) || ((rtb_Switch1_c &
            KeSRAR_g_RA5_SelFltShtDwnBPClsd) >= 1U)) || ((rtb_Switch1_fxq &
                                KeSRAR_g_RA6_SelFltShtDwnBPClsd) >= 1U)) ||
                             ((BitwiseLogicalOperator_b &
                               KeSRAR_g_RA7_SelFltShtDwnBPClsd) >= 1U)) ||
                            ((rtb_Switch1_anw & KeSRAR_g_RA8_SelFltShtDwnBPClsd)
                             >= 1U));
    }

    /* End of Switch: '<S1249>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S260>/SignalLatchOnWithReset' */
    /* Logic: '<S1266>/OR1' incorporates:
     *  Logic: '<S1266>/OR'
     *  UnitDelay: '<S1266>/UnitDelay'
     */
    rtb_Logical21 = (rtb_UnitDelay_eb || (rtb_VeSRAR_b_HVOverVoltFailur_2 &&
                      (SRAR_ac_DW.UnitDelay_DSTATE_hg)));

    /* Update for UnitDelay: '<S1266>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_hg = rtb_Logical21;

    /* End of Outputs for SubSystem: '<S260>/SignalLatchOnWithReset' */

    /* Switch: '<S1250>/Switch1' incorporates:
     *  Constant: '<S1251>/Calib'
     */
    if (!KeSRAR_b_FltShtDwnBPClsd_Latch)
    {
        /* Switch: '<S1250>/Switch1' */
        rtb_Logical21 = rtb_UnitDelay_eb;
    }

    /* End of Switch: '<S1250>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S260>/TurnOnDelayTime1' */
    /* Outputs for Atomic SubSystem: '<S1267>/EdgeRising' */
    /* Logic: '<S1276>/AND' incorporates:
     *  Logic: '<S1276>/OR1'
     *  UnitDelay: '<S1276>/UnitDelay'
     */
    rtb_UnitDelay_eb = (rtb_Logical21 && (!SRAR_ac_DW.UnitDelay_DSTATE_ez));

    /* Update for UnitDelay: '<S1276>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_ez = rtb_Logical21;

    /* End of Outputs for SubSystem: '<S1267>/EdgeRising' */

    /* Switch: '<S1267>/Switch1' incorporates:
     *  Logic: '<S1267>/OR'
     *  Logic: '<S1267>/OR1'
     */
    if ((!rtb_Logical21) || rtb_UnitDelay_eb)
    {
        /* Switch: '<S1267>/Switch1' incorporates:
         *  Constant: '<S1267>/ConstantValue1'
         */
        rtb_Switch1_dn = 0.0F;
    }
    else
    {
        /* Switch: '<S1267>/Switch1' incorporates:
         *  Constant: '<S1262>/Calib'
         *  Constant: '<S1263>/Calib'
         *  MinMax: '<S1267>/Minimum'
         *  Sum: '<S1267>/Summation'
         *  UnitDelay: '<S1267>/UnitDelay'
         */
        rtb_Switch1_dn = fminf(KeSRAR_t_FltShtDwnBPClsdCmndTurnONDelay,
                               KeSRAR_t_dT + SRAR_ac_DW.UnitDelay_DSTATE_js);
    }

    /* End of Switch: '<S1267>/Switch1' */
    /* End of Outputs for SubSystem: '<S260>/TurnOnDelayTime1' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Logic: '<S2397>/AND' incorporates:
     *  Inport: '<Root>/VeDTRR_b_OPDInhibit_HMI'
     */
    (void)Rte_Read_VeDTRR_b_OPDInhibit_HMI_Value((&(VeSRAC_b_OPDInhibit_HMI)));

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRAR_MedTEB'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Outputs for Atomic SubSystem: '<S260>/TurnOnDelayTime1' */
    /* Update for UnitDelay: '<S1267>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_js = rtb_Switch1_dn;

    /* Logic: '<S19>/Logical14' incorporates:
     *  Constant: '<S1262>/Calib'
     *  Constant: '<S139>/Calib'
     *  Logic: '<S1267>/AND'
     *  Logic: '<S19>/Logical12'
     *  Logic: '<S19>/Logical4'
     *  Logic: '<S19>/Logical6'
     *  Logic: '<S19>/Logical7'
     *  RelationalOperator: '<S1267>/GreaterThan'
     *  UnitDelay: '<S19>/UnitDelay'
     *  UnitDelay: '<S19>/UnitDelay1'
     */
    rtb_Logical1_aq = (((((rtb_Logical11 && (SRAR_ac_DW.UnitDelay_DSTATE_kg)) &&
                          (KeSRAR_b_EngOnOffPSAoffEnbl)) ||
                         (((KeSRAR_b_EngOnOffPSAoffEnbl) &&
                           rtb_TmpSignalConversionAtVeIMPR) &&
                          (SRAR_ac_DW.UnitDelay1_DSTATE_m))) || (rtb_Logical21 &&
                         (rtb_Switch1_dn >=
                          KeSRAR_t_FltShtDwnBPClsdCmndTurnONDelay))) &&
                       (!rtb_Logical8_dq));

    /* End of Outputs for SubSystem: '<S260>/TurnOnDelayTime1' */

    /* RelationalOperator: '<S2250>/Comparison4' incorporates:
     *  Constant: '<S2301>/Constant'
     */
    VeSRAC_b_NormalMd = (((uint32)rtb_TmpSignalConversionAtVeDMIR) ==
                         CeDMIR_e_Normal);

    /* Logic: '<S2250>/Logical1' incorporates:
     *  Constant: '<S2302>/Constant'
     *  Constant: '<S2303>/Constant'
     *  RelationalOperator: '<S2250>/Comparison1'
     *  RelationalOperator: '<S2250>/Comparison2'
     */
    VeSRAC_b_CityCamelMd = ((((uint32)rtb_TmpSignalConversionAtVeDMIR) ==
        CeDMIR_e_City) || (((uint32)rtb_TmpSignalConversionAtVeDMIR) ==
                           CeDMIR_e_Eco));

    /* Logic: '<S117>/Logical13' incorporates:
     *  Constant: '<S109>/Calib'
     *  Constant: '<S110>/Calib'
     *  Constant: '<S111>/Calib'
     *  Constant: '<S112>/Calib'
     *  Constant: '<S113>/Calib'
     *  Constant: '<S114>/Calib'
     *  Constant: '<S115>/Calib'
     *  Constant: '<S116>/Calib'
     *  Constant: '<S118>/ConstantValue'
     *  Constant: '<S119>/ConstantValue'
     *  Constant: '<S120>/ConstantValue'
     *  Constant: '<S121>/ConstantValue'
     *  Constant: '<S122>/ConstantValue'
     *  Constant: '<S123>/ConstantValue'
     *  Constant: '<S124>/ConstantValue'
     *  Constant: '<S125>/ConstantValue'
     *  RelationalOperator: '<S118>/Comparison'
     *  RelationalOperator: '<S119>/Comparison'
     *  RelationalOperator: '<S120>/Comparison'
     *  RelationalOperator: '<S121>/Comparison'
     *  RelationalOperator: '<S122>/Comparison'
     *  RelationalOperator: '<S123>/Comparison'
     *  RelationalOperator: '<S124>/Comparison'
     *  RelationalOperator: '<S125>/Comparison'
     *  S-Function (sfix_bitop): '<S118>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S119>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S120>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S121>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S122>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S123>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S124>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S125>/BitwiseLogicalOperator6'
     */
    Logical13 = (((((((((rtb_Switch1_n3 & KeSRAR_g_RA1_SelVehSpdLmtd) >= 1U) ||
                       ((rtb_Switch1_ck & KeSRAR_g_RA2_SelVehSpdLmtd) >= 1U)) ||
                      ((rtb_Switch1_mr & KeSRAR_g_RA3_SelVehSpdLmtd) >= 1U)) ||
                     ((rtb_Switch1_bk & KeSRAR_g_RA4_SelVehSpdLmtd) >= 1U)) ||
                    ((rtb_Switch1_c & KeSRAR_g_RA5_SelVehSpdLmtd) >= 1U)) ||
                   ((rtb_Switch1_fxq & KeSRAR_g_RA6_SelVehSpdLmtd) >= 1U)) ||
                  ((BitwiseLogicalOperator_b & KeSRAR_g_RA7_SelVehSpdLmtd) >= 1U))
                 || ((rtb_Switch1_anw & KeSRAR_g_RA8_SelVehSpdLmtd) >= 1U));

    /* Logic: '<S13>/Logical2' incorporates:
     *  Logic: '<S13>/Logical1'
     */
    rtb_Logical2_j4 = (((VeSRAC_b_NormalMd) || (VeSRAC_b_CityCamelMd)) &&
                       Logical13);

    /* Logic: '<S395>/Logical13' incorporates:
     *  Constant: '<S387>/Calib'
     *  Constant: '<S388>/Calib'
     *  Constant: '<S389>/Calib'
     *  Constant: '<S390>/Calib'
     *  Constant: '<S391>/Calib'
     *  Constant: '<S392>/Calib'
     *  Constant: '<S393>/Calib'
     *  Constant: '<S394>/Calib'
     *  Constant: '<S396>/ConstantValue'
     *  Constant: '<S397>/ConstantValue'
     *  Constant: '<S398>/ConstantValue'
     *  Constant: '<S399>/ConstantValue'
     *  Constant: '<S400>/ConstantValue'
     *  Constant: '<S401>/ConstantValue'
     *  Constant: '<S402>/ConstantValue'
     *  Constant: '<S403>/ConstantValue'
     *  RelationalOperator: '<S396>/Comparison'
     *  RelationalOperator: '<S397>/Comparison'
     *  RelationalOperator: '<S398>/Comparison'
     *  RelationalOperator: '<S399>/Comparison'
     *  RelationalOperator: '<S400>/Comparison'
     *  RelationalOperator: '<S401>/Comparison'
     *  RelationalOperator: '<S402>/Comparison'
     *  RelationalOperator: '<S403>/Comparison'
     *  S-Function (sfix_bitop): '<S396>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S397>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S398>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S399>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S400>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S401>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S402>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S403>/BitwiseLogicalOperator6'
     */
    Logical13_o = (((((((((rtb_Switch1_n3 & KeSRAR_g_RA1_OnePedalDriveDsbl) >=
                          1U) || ((rtb_Switch1_ck &
                           KeSRAR_g_RA2_OnePedalDriveDsbl) >= 1U)) ||
                        ((rtb_Switch1_mr & KeSRAR_g_RA3_OnePedalDriveDsbl) >= 1U))
                       || ((rtb_Switch1_bk & KeSRAR_g_RA4_OnePedalDriveDsbl) >=
                           1U)) || ((rtb_Switch1_c &
                        KeSRAR_g_RA5_OnePedalDriveDsbl) >= 1U)) ||
                     ((rtb_Switch1_fxq & KeSRAR_g_RA6_OnePedalDriveDsbl) >= 1U))
                    || ((BitwiseLogicalOperator_b &
                         KeSRAR_g_RA7_OnePedalDriveDsbl) >= 1U)) ||
                   ((rtb_Switch1_anw & KeSRAR_g_RA8_OnePedalDriveDsbl) >= 1U));

    /* Logic: '<S13>/Logical3' incorporates:
     *  Logic: '<S241>/Logical1'
     */
    rtb_Switch1_fqq = ((VeSRAC_b_CityCamelMd) && (Logical13_o ||
                        (VeSRAC_b_OPDInhibit_HMI)));

    /* UnitDelay: '<S201>/UnitDelay' incorporates:
     *  Constant: '<S101>/ConstantValue'
     *  Constant: '<S102>/ConstantValue'
     *  Constant: '<S103>/ConstantValue'
     *  Constant: '<S104>/ConstantValue'
     *  Constant: '<S105>/ConstantValue'
     *  Constant: '<S106>/ConstantValue'
     *  Constant: '<S107>/ConstantValue'
     *  Constant: '<S108>/ConstantValue'
     *  Constant: '<S92>/Calib'
     *  Constant: '<S93>/Calib'
     *  Constant: '<S94>/Calib'
     *  Constant: '<S95>/Calib'
     *  Constant: '<S96>/Calib'
     *  Constant: '<S97>/Calib'
     *  Constant: '<S98>/Calib'
     *  Constant: '<S99>/Calib'
     *  Logic: '<S100>/Logical13'
     *  RelationalOperator: '<S101>/Comparison'
     *  RelationalOperator: '<S102>/Comparison'
     *  RelationalOperator: '<S103>/Comparison'
     *  RelationalOperator: '<S104>/Comparison'
     *  RelationalOperator: '<S105>/Comparison'
     *  RelationalOperator: '<S106>/Comparison'
     *  RelationalOperator: '<S107>/Comparison'
     *  RelationalOperator: '<S108>/Comparison'
     *  S-Function (sfix_bitop): '<S101>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S102>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S103>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S104>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S105>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S106>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S107>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S108>/BitwiseLogicalOperator6'
     */
    rtb_UnitDelay_eb = (((((((((rtb_Switch1_n3 & KeSRAR_g_RA1_SelHMIMsg9_15) >=
        1U) || ((rtb_Switch1_ck & KeSRAR_g_RA2_SelHMIMsg9_15) >= 1U)) ||
        ((rtb_Switch1_mr & KeSRAR_g_RA3_SelHMIMsg9_15) >= 1U)) ||
                            ((rtb_Switch1_bk & KeSRAR_g_RA4_SelHMIMsg9_15) >= 1U))
                           || ((rtb_Switch1_c & KeSRAR_g_RA5_SelHMIMsg9_15) >=
                            1U)) || ((rtb_Switch1_fxq &
                            KeSRAR_g_RA6_SelHMIMsg9_15) >= 1U)) ||
                         ((BitwiseLogicalOperator_b & KeSRAR_g_RA7_SelHMIMsg9_15)
                          >= 1U)) || ((rtb_Switch1_anw &
                          KeSRAR_g_RA8_SelHMIMsg9_15) >= 1U));

    /* Logic: '<S13>/Logical4' */
    rtb_TmpSignalConversionAtVeEN_c = ((VeSRAC_b_NormalMd) && rtb_UnitDelay_eb);

    /* Logic: '<S13>/Logical5' */
    rtb_TmpSignalConversionAtVeDTRR = ((VeSRAC_b_CityCamelMd) &&
        rtb_UnitDelay_eb);

    /* Outputs for Atomic SubSystem: '<S13>/TurnOnDelaySample1' */
    /* Outputs for Atomic SubSystem: '<S76>/EdgeRising' */
    /* Logic: '<S80>/AND' incorporates:
     *  Logic: '<S80>/OR1'
     *  UnitDelay: '<S80>/UnitDelay'
     */
    rtb_UnitDelay_eb = (rtb_TmpSignalConversionAtVeEN_c &&
                        (!SRAR_ac_DW.UnitDelay_DSTATE_fb));

    /* Update for UnitDelay: '<S80>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_fb = rtb_TmpSignalConversionAtVeEN_c;

    /* End of Outputs for SubSystem: '<S76>/EdgeRising' */

    /* Switch: '<S76>/Switch1' incorporates:
     *  Constant: '<S75>/Calib'
     *  Constant: '<S76>/ConstantValue'
     *  Logic: '<S76>/OR'
     *  Logic: '<S76>/OR1'
     *  MinMax: '<S76>/Minimum'
     *  Sum: '<S76>/Summation'
     *  UnitDelay: '<S76>/UnitDelay'
     */
    if ((!rtb_TmpSignalConversionAtVeEN_c) || rtb_UnitDelay_eb)
    {
        /* Switch: '<S76>/Switch1' incorporates:
         *  Constant: '<S76>/ConstantValue1'
         */
        rtb_TmpSignalConversionAtVeTINR = 0U;
    }
    else if (KeSRAR_n_PopupMsg9_Dbnc < ((uint16)(((uint32)
                SRAR_ac_DW.UnitDelay_DSTATE_jw) + 1U)))
    {
        /* MinMax: '<S76>/Minimum' incorporates:
         *  Constant: '<S75>/Calib'
         *  Switch: '<S76>/Switch1'
         */
        rtb_TmpSignalConversionAtVeTINR = KeSRAR_n_PopupMsg9_Dbnc;
    }
    else
    {
        /* Switch: '<S76>/Switch1' incorporates:
         *  Constant: '<S76>/ConstantValue'
         *  MinMax: '<S76>/Minimum'
         *  Sum: '<S76>/Summation'
         *  UnitDelay: '<S76>/UnitDelay'
         */
        rtb_TmpSignalConversionAtVeTINR = (uint16)(((uint32)
            SRAR_ac_DW.UnitDelay_DSTATE_jw) + 1U);
    }

    /* End of Switch: '<S76>/Switch1' */

    /* Update for UnitDelay: '<S76>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_jw = rtb_TmpSignalConversionAtVeTINR;

    /* End of Outputs for SubSystem: '<S13>/TurnOnDelaySample1' */

    /* Outputs for Atomic SubSystem: '<S13>/TurnOnDelaySample2' */
    /* Outputs for Atomic SubSystem: '<S77>/EdgeRising' */
    /* Logic: '<S81>/AND' incorporates:
     *  Logic: '<S81>/OR1'
     *  UnitDelay: '<S81>/UnitDelay'
     */
    rtb_UnitDelay_eb = (rtb_Switch1_fqq && (!SRAR_ac_DW.UnitDelay_DSTATE_bej));

    /* Update for UnitDelay: '<S81>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_bej = rtb_Switch1_fqq;

    /* End of Outputs for SubSystem: '<S77>/EdgeRising' */

    /* Switch: '<S77>/Switch1' incorporates:
     *  Constant: '<S72>/Calib'
     *  Constant: '<S77>/ConstantValue'
     *  Logic: '<S77>/OR'
     *  Logic: '<S77>/OR1'
     *  MinMax: '<S77>/Minimum'
     *  Sum: '<S77>/Summation'
     *  UnitDelay: '<S77>/UnitDelay'
     */
    if ((!rtb_Switch1_fqq) || rtb_UnitDelay_eb)
    {
        /* Switch: '<S77>/Switch1' incorporates:
         *  Constant: '<S77>/ConstantValue1'
         */
        rtb_Switch1_iz = 0U;
    }
    else if (KeSRAR_n_PopupMsg14_Dbnc < ((uint16)(((uint32)
                SRAR_ac_DW.UnitDelay_DSTATE_fa) + 1U)))
    {
        /* MinMax: '<S77>/Minimum' incorporates:
         *  Constant: '<S72>/Calib'
         *  Switch: '<S77>/Switch1'
         */
        rtb_Switch1_iz = KeSRAR_n_PopupMsg14_Dbnc;
    }
    else
    {
        /* Switch: '<S77>/Switch1' incorporates:
         *  Constant: '<S77>/ConstantValue'
         *  MinMax: '<S77>/Minimum'
         *  Sum: '<S77>/Summation'
         *  UnitDelay: '<S77>/UnitDelay'
         */
        rtb_Switch1_iz = (uint16)(((uint32)SRAR_ac_DW.UnitDelay_DSTATE_fa) + 1U);
    }

    /* End of Switch: '<S77>/Switch1' */

    /* Update for UnitDelay: '<S77>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_fa = rtb_Switch1_iz;

    /* End of Outputs for SubSystem: '<S13>/TurnOnDelaySample2' */

    /* Outputs for Atomic SubSystem: '<S13>/TurnOnDelaySample3' */
    /* Outputs for Atomic SubSystem: '<S78>/EdgeRising' */
    /* Logic: '<S82>/AND' incorporates:
     *  Logic: '<S82>/OR1'
     *  UnitDelay: '<S82>/UnitDelay'
     */
    rtb_UnitDelay_eb = (rtb_TmpSignalConversionAtVeDTRR &&
                        (!SRAR_ac_DW.UnitDelay_DSTATE_kpe));

    /* Update for UnitDelay: '<S82>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_kpe = rtb_TmpSignalConversionAtVeDTRR;

    /* End of Outputs for SubSystem: '<S78>/EdgeRising' */

    /* Switch: '<S78>/Switch1' incorporates:
     *  Constant: '<S73>/Calib'
     *  Constant: '<S78>/ConstantValue'
     *  Logic: '<S78>/OR'
     *  Logic: '<S78>/OR1'
     *  MinMax: '<S78>/Minimum'
     *  Sum: '<S78>/Summation'
     *  UnitDelay: '<S78>/UnitDelay'
     */
    if ((!rtb_TmpSignalConversionAtVeDTRR) || rtb_UnitDelay_eb)
    {
        /* Switch: '<S78>/Switch1' incorporates:
         *  Constant: '<S78>/ConstantValue1'
         */
        rtb_Switch1_np = 0U;
    }
    else if (KeSRAR_n_PopupMsg15_Dbnc < ((uint16)(((uint32)
                SRAR_ac_DW.UnitDelay_DSTATE_ae) + 1U)))
    {
        /* MinMax: '<S78>/Minimum' incorporates:
         *  Constant: '<S73>/Calib'
         *  Switch: '<S78>/Switch1'
         */
        rtb_Switch1_np = KeSRAR_n_PopupMsg15_Dbnc;
    }
    else
    {
        /* Switch: '<S78>/Switch1' incorporates:
         *  Constant: '<S78>/ConstantValue'
         *  MinMax: '<S78>/Minimum'
         *  Sum: '<S78>/Summation'
         *  UnitDelay: '<S78>/UnitDelay'
         */
        rtb_Switch1_np = (uint16)(((uint32)SRAR_ac_DW.UnitDelay_DSTATE_ae) + 1U);
    }

    /* End of Switch: '<S78>/Switch1' */

    /* Update for UnitDelay: '<S78>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_ae = rtb_Switch1_np;

    /* End of Outputs for SubSystem: '<S13>/TurnOnDelaySample3' */

    /* Outputs for Atomic SubSystem: '<S13>/TurnOnDelaySample6' */
    /* Outputs for Atomic SubSystem: '<S79>/EdgeRising' */
    /* Logic: '<S83>/AND' incorporates:
     *  Logic: '<S83>/OR1'
     *  UnitDelay: '<S83>/UnitDelay'
     */
    rtb_UnitDelay_eb = (rtb_Logical2_j4 && (!SRAR_ac_DW.UnitDelay_DSTATE_gsc));

    /* Update for UnitDelay: '<S83>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_gsc = rtb_Logical2_j4;

    /* End of Outputs for SubSystem: '<S79>/EdgeRising' */

    /* Switch: '<S79>/Switch1' incorporates:
     *  Constant: '<S74>/Calib'
     *  Constant: '<S79>/ConstantValue'
     *  Logic: '<S79>/OR'
     *  Logic: '<S79>/OR1'
     *  MinMax: '<S79>/Minimum'
     *  Sum: '<S79>/Summation'
     *  UnitDelay: '<S79>/UnitDelay'
     */
    if ((!rtb_Logical2_j4) || rtb_UnitDelay_eb)
    {
        /* Switch: '<S79>/Switch1' incorporates:
         *  Constant: '<S79>/ConstantValue1'
         */
        rtb_Switch1_b4 = 0U;
    }
    else if (KeSRAR_n_PopupMsg1_Dbnc < ((uint16)(((uint32)
                SRAR_ac_DW.UnitDelay_DSTATE_g2) + 1U)))
    {
        /* MinMax: '<S79>/Minimum' incorporates:
         *  Constant: '<S74>/Calib'
         *  Switch: '<S79>/Switch1'
         */
        rtb_Switch1_b4 = KeSRAR_n_PopupMsg1_Dbnc;
    }
    else
    {
        /* Switch: '<S79>/Switch1' incorporates:
         *  Constant: '<S79>/ConstantValue'
         *  MinMax: '<S79>/Minimum'
         *  Sum: '<S79>/Summation'
         *  UnitDelay: '<S79>/UnitDelay'
         */
        rtb_Switch1_b4 = (uint16)(((uint32)SRAR_ac_DW.UnitDelay_DSTATE_g2) + 1U);
    }

    /* End of Switch: '<S79>/Switch1' */
    /* End of Outputs for SubSystem: '<S13>/TurnOnDelaySample6' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeBPCR_b_BPCM_CommFailFA' */
    (void)Rte_Read_VeBPCR_b_BPCM_CommFailFA_Value(&tmpRead_11);

    /* Inport: '<Root>/VeINVR_b_MCPB_CommFailFA' */
    (void)Rte_Read_VeINVR_b_MCPB_CommFailFA_Value(&tmpRead_10);

    /* Inport: '<Root>/VeINVR_b_MCPA_CommFailFA' */
    (void)Rte_Read_VeINVR_b_MCPA_CommFailFA_Value(&tmpRead_z);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRAR_MedTEB'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Outputs for Atomic SubSystem: '<S13>/TurnOnDelaySample6' */
    /* Update for UnitDelay: '<S79>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_g2 = rtb_Switch1_b4;

    /* End of Outputs for SubSystem: '<S13>/TurnOnDelaySample6' */

    /* Logic: '<S14>/Logical4' */
    rtb_Switch1_fl = ((rtb_AND_gv || rtb_UnitDelay_fh) || rtb_Switch1_fl);

    /* Switch: '<S754>/Switch1' incorporates:
     *  Constant: '<S758>/Calib'
     */
    if (KeSRAR_b_RegenBrkInhb_OvrdEnbl)
    {
        /* Switch: '<S754>/Switch1' incorporates:
         *  Constant: '<S759>/Calib'
         */
        rtb_UnitDelay_fh = KeSRAR_b_RegenBrkInhb_OvrdVal;
    }
    else
    {
        /* Switch: '<S754>/Switch1' incorporates:
         *  Constant: '<S756>/Calib'
         *  Constant: '<S760>/Calib'
         *  Constant: '<S761>/Calib'
         *  Constant: '<S762>/Calib'
         *  Constant: '<S763>/Calib'
         *  Constant: '<S764>/Calib'
         *  Constant: '<S765>/Calib'
         *  Constant: '<S766>/Calib'
         *  Constant: '<S767>/Calib'
         *  Constant: '<S773>/ConstantValue'
         *  Constant: '<S774>/ConstantValue'
         *  Constant: '<S775>/ConstantValue'
         *  Constant: '<S776>/ConstantValue'
         *  Constant: '<S777>/ConstantValue'
         *  Constant: '<S778>/ConstantValue'
         *  Constant: '<S779>/ConstantValue'
         *  Constant: '<S780>/ConstantValue'
         *  Logic: '<S251>/AND1'
         *  Logic: '<S251>/Logical7'
         *  Logic: '<S251>/Logical8'
         *  Logic: '<S770>/Logical13'
         *  RelationalOperator: '<S773>/Comparison'
         *  RelationalOperator: '<S774>/Comparison'
         *  RelationalOperator: '<S775>/Comparison'
         *  RelationalOperator: '<S776>/Comparison'
         *  RelationalOperator: '<S777>/Comparison'
         *  RelationalOperator: '<S778>/Comparison'
         *  RelationalOperator: '<S779>/Comparison'
         *  RelationalOperator: '<S780>/Comparison'
         *  S-Function (sfix_bitop): '<S773>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S774>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S775>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S776>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S777>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S778>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S779>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S780>/BitwiseLogicalOperator6'
         */
        rtb_UnitDelay_fh = ((((((((((rtb_Switch1_n3 &
            KeSRAR_g_RA1_SelInhibitRegenBraking) >= 1U) || ((rtb_Switch1_ck &
            KeSRAR_g_RA2_SelInhibitRegenBraking) >= 1U)) || ((rtb_Switch1_mr &
            KeSRAR_g_RA3_SelInhibitRegenBraking) >= 1U)) || ((rtb_Switch1_bk &
            KeSRAR_g_RA4_SelInhibitRegenBraking) >= 1U)) || ((rtb_Switch1_c &
            KeSRAR_g_RA5_SelInhibitRegenBraking) >= 1U)) || ((rtb_Switch1_fxq &
            KeSRAR_g_RA6_SelInhibitRegenBraking) >= 1U)) ||
                              ((BitwiseLogicalOperator_b &
                                KeSRAR_g_RA7_SelInhibitRegenBraking) >= 1U)) ||
                             ((rtb_Switch1_anw &
                               KeSRAR_g_RA8_SelInhibitRegenBraking) >= 1U)) &&
                            ((!rtb_TmpSignalConversionAtVeB_j2) ||
                             (KeSRAR_b_RegenBrkInhb_DebDisbl)));
    }

    /* End of Switch: '<S754>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S251>/SignalLatchOnWithReset' */
    /* Logic: '<S771>/OR1' incorporates:
     *  Logic: '<S771>/OR'
     *  UnitDelay: '<S771>/UnitDelay'
     */
    rtb_AND_gv = (rtb_UnitDelay_fh || (rtb_VeSRAR_b_HVOverVoltFailur_2 &&
                   (SRAR_ac_DW.UnitDelay_DSTATE_id)));

    /* Update for UnitDelay: '<S771>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_id = rtb_AND_gv;

    /* End of Outputs for SubSystem: '<S251>/SignalLatchOnWithReset' */

    /* Switch: '<S755>/Switch1' incorporates:
     *  Constant: '<S757>/Calib'
     */
    if (KeSRAR_b_RegenBrkInhb_Latch)
    {
        /* Switch: '<S755>/Switch1' */
        rtb_UnitDelay_fh = rtb_AND_gv;
    }

    /* End of Switch: '<S755>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S251>/TurnOnDelayTime' */
    /* Outputs for Atomic SubSystem: '<S772>/EdgeRising' */
    /* Logic: '<S781>/AND' incorporates:
     *  Logic: '<S781>/OR1'
     *  UnitDelay: '<S781>/UnitDelay'
     */
    rtb_AND_gv = (rtb_UnitDelay_fh && (!SRAR_ac_DW.UnitDelay_DSTATE_ic));

    /* Update for UnitDelay: '<S781>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_ic = rtb_UnitDelay_fh;

    /* End of Outputs for SubSystem: '<S772>/EdgeRising' */

    /* Switch: '<S772>/Switch1' incorporates:
     *  Logic: '<S772>/OR'
     *  Logic: '<S772>/OR1'
     */
    if ((!rtb_UnitDelay_fh) || rtb_AND_gv)
    {
        /* Switch: '<S772>/Switch1' incorporates:
         *  Constant: '<S772>/ConstantValue1'
         */
        rtb_Switch1_dn = 0.0F;
    }
    else
    {
        /* Switch: '<S772>/Switch1' incorporates:
         *  Constant: '<S768>/Calib'
         *  Constant: '<S769>/Calib'
         *  MinMax: '<S772>/Minimum'
         *  Sum: '<S772>/Summation'
         *  UnitDelay: '<S772>/UnitDelay'
         */
        rtb_Switch1_dn = fminf(KeSRAR_t_InhibitRegenTurnONDelay, KeSRAR_t_dT +
                               SRAR_ac_DW.UnitDelay_DSTATE_fg);
    }

    /* End of Switch: '<S772>/Switch1' */

    /* Logic: '<S772>/AND' incorporates:
     *  Constant: '<S768>/Calib'
     *  RelationalOperator: '<S772>/GreaterThan'
     */
    rtb_AND_gv = (rtb_UnitDelay_fh && (rtb_Switch1_dn >=
                   KeSRAR_t_InhibitRegenTurnONDelay));

    /* Update for UnitDelay: '<S772>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_fg = rtb_Switch1_dn;

    /* End of Outputs for SubSystem: '<S251>/TurnOnDelayTime' */

    /* Switch: '<S828>/Switch1' incorporates:
     *  Constant: '<S832>/Calib'
     */
    if (KeSRAR_b_limitInputTrq_OvrdEnbl)
    {
        /* Switch: '<S828>/Switch1' incorporates:
         *  Constant: '<S833>/Calib'
         */
        rtb_UnitDelay_fh = KeSRAR_b_limitInputTrq_OvrdVal;
    }
    else
    {
        /* Switch: '<S828>/Switch1' incorporates:
         *  Constant: '<S830>/Calib'
         *  Constant: '<S834>/Calib'
         *  Constant: '<S835>/Calib'
         *  Constant: '<S836>/Calib'
         *  Constant: '<S837>/Calib'
         *  Constant: '<S838>/Calib'
         *  Constant: '<S839>/Calib'
         *  Constant: '<S840>/Calib'
         *  Constant: '<S841>/Calib'
         *  Constant: '<S847>/ConstantValue'
         *  Constant: '<S848>/ConstantValue'
         *  Constant: '<S849>/ConstantValue'
         *  Constant: '<S850>/ConstantValue'
         *  Constant: '<S851>/ConstantValue'
         *  Constant: '<S852>/ConstantValue'
         *  Constant: '<S853>/ConstantValue'
         *  Constant: '<S854>/ConstantValue'
         *  Logic: '<S254>/AND1'
         *  Logic: '<S254>/Logical8'
         *  Logic: '<S254>/Logical9'
         *  Logic: '<S844>/Logical13'
         *  RelationalOperator: '<S847>/Comparison'
         *  RelationalOperator: '<S848>/Comparison'
         *  RelationalOperator: '<S849>/Comparison'
         *  RelationalOperator: '<S850>/Comparison'
         *  RelationalOperator: '<S851>/Comparison'
         *  RelationalOperator: '<S852>/Comparison'
         *  RelationalOperator: '<S853>/Comparison'
         *  RelationalOperator: '<S854>/Comparison'
         *  S-Function (sfix_bitop): '<S847>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S848>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S849>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S850>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S851>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S852>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S853>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S854>/BitwiseLogicalOperator6'
         */
        rtb_UnitDelay_fh = ((((((((((rtb_Switch1_n3 & KeSRAR_g_RA1_SelLimitTrq) >=
            1U) || ((rtb_Switch1_ck & KeSRAR_g_RA2_SelLimitTrq) >= 1U)) ||
            ((rtb_Switch1_mr & KeSRAR_g_RA3_SelLimitTrq) >= 1U)) ||
            ((rtb_Switch1_bk & KeSRAR_g_RA4_SelLimitTrq) >= 1U)) ||
                                ((rtb_Switch1_c & KeSRAR_g_RA5_SelLimitTrq) >=
            1U)) || ((rtb_Switch1_fxq & KeSRAR_g_RA6_SelLimitTrq) >= 1U)) ||
                              ((BitwiseLogicalOperator_b &
                                KeSRAR_g_RA7_SelLimitTrq) >= 1U)) ||
                             ((rtb_Switch1_anw & KeSRAR_g_RA8_SelLimitTrq) >= 1U))
                            && ((!rtb_TmpSignalConversionAtVeB_j2) ||
                                (KeSRAR_b_limitInputTrq_DebDisbl)));
    }

    /* End of Switch: '<S828>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S254>/SignalLatchOnWithReset' */
    /* Logic: '<S845>/OR1' incorporates:
     *  Logic: '<S845>/OR'
     *  UnitDelay: '<S845>/UnitDelay'
     */
    rtb_UnitDelay_eb = (rtb_UnitDelay_fh || (rtb_VeSRAR_b_HVOverVoltFailur_2 &&
                         (SRAR_ac_DW.UnitDelay_DSTATE_c2)));

    /* Update for UnitDelay: '<S845>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_c2 = rtb_UnitDelay_eb;

    /* End of Outputs for SubSystem: '<S254>/SignalLatchOnWithReset' */

    /* Switch: '<S829>/Switch1' incorporates:
     *  Constant: '<S831>/Calib'
     */
    if (KeSRAR_b_limitInputTrq_Latch)
    {
        /* Switch: '<S829>/Switch1' */
        rtb_UnitDelay_fh = rtb_UnitDelay_eb;
    }

    /* End of Switch: '<S829>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S254>/TurnOnDelayTime1' */
    /* Outputs for Atomic SubSystem: '<S846>/EdgeRising' */
    /* Logic: '<S855>/AND' incorporates:
     *  Logic: '<S855>/OR1'
     *  UnitDelay: '<S855>/UnitDelay'
     */
    rtb_UnitDelay_eb = (rtb_UnitDelay_fh && (!SRAR_ac_DW.UnitDelay_DSTATE_en));

    /* Update for UnitDelay: '<S855>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_en = rtb_UnitDelay_fh;

    /* End of Outputs for SubSystem: '<S846>/EdgeRising' */

    /* Switch: '<S846>/Switch1' incorporates:
     *  Logic: '<S846>/OR'
     *  Logic: '<S846>/OR1'
     */
    if ((!rtb_UnitDelay_fh) || rtb_UnitDelay_eb)
    {
        /* Switch: '<S846>/Switch1' incorporates:
         *  Constant: '<S846>/ConstantValue1'
         */
        rtb_Switch1_dn = 0.0F;
    }
    else
    {
        /* Switch: '<S846>/Switch1' incorporates:
         *  Constant: '<S842>/Calib'
         *  Constant: '<S843>/Calib'
         *  MinMax: '<S846>/Minimum'
         *  Sum: '<S846>/Summation'
         *  UnitDelay: '<S846>/UnitDelay'
         */
        rtb_Switch1_dn = fminf(KeSRAR_t_LimitInputTrqTurnONDelay, KeSRAR_t_dT +
                               SRAR_ac_DW.UnitDelay_DSTATE_np);
    }

    /* End of Switch: '<S846>/Switch1' */

    /* Logic: '<S846>/AND' incorporates:
     *  Constant: '<S842>/Calib'
     *  RelationalOperator: '<S846>/GreaterThan'
     */
    rtb_TmpSignalConversionAtVeAD_o = (rtb_UnitDelay_fh && (rtb_Switch1_dn >=
        KeSRAR_t_LimitInputTrqTurnONDelay));

    /* Update for UnitDelay: '<S846>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_np = rtb_Switch1_dn;

    /* End of Outputs for SubSystem: '<S254>/TurnOnDelayTime1' */

    /* Logic: '<S1147>/Logical3' incorporates:
     *  Constant: '<S1162>/Calib'
     *  Logic: '<S1147>/AND3'
     */
    rtb_TmpSignalConversionAtVeAD_p = (((rtb_Merge1_i &&
        rtb_TmpSignalConversionAtVeIMPR) && (KeSRAR_b_ReqNeutralEngine_Stop_Enbl))
        && (!rtb_TmpSignalConversionAtVeAD_p));

    /* Logic: '<S921>/Logical' */
    rtb_Merge1_i = (rtb_Switch_g_idx_1 && rtb_Switch1_ahj);

    /* RelationalOperator: '<S920>/Comparison6' incorporates:
     *  Constant: '<S1131>/Constant'
     */
    rtb_UnitDelay_eb = (((uint32)rtb_TmpSignalConversionAtVeHC_p) ==
                        CeHCCR_e_SCA_Inactv_Md);

    /* RelationalOperator: '<S920>/Comparison2' incorporates:
     *  Constant: '<S1132>/Constant'
     */
    rtb_TmpSignalConversionAtVeA_ce = (((uint32)rtb_TmpSignalConversionAtVeHC_p)
        == CeHCCR_e_SCA_Hold_Md);

    /* RelationalOperator: '<S920>/Comparison3' incorporates:
     *  Constant: '<S1138>/Constant'
     *  SignalConversion generated from: '<S2>/VeHCCR_e_SCA2_St'
     */
    rtb_UnitDelay_fh = (((uint32)rtb_TmpSignalConversionAtVeHC_f) ==
                        CeHCCR_e_SCA_Inactv_Md);

    /* RelationalOperator: '<S920>/Comparison5' incorporates:
     *  Constant: '<S1130>/Constant'
     *  RelationalOperator: '<S920>/Comparison3'
     *  SignalConversion generated from: '<S2>/VeHCCR_e_SCA2_St'
     */
    rtb_Comparison5_d = (((uint32)rtb_TmpSignalConversionAtVeHC_f) ==
                         CeHCCR_e_SCA_Hold_Md);

    /* If: '<S920>/If' */
    if (((sint32)rtb_TmpSignalConversionAtVeHS_h) == 0)
    {
        /* Outputs for IfAction SubSystem: '<S920>/ModeInhibitDet_N' incorporates:
         *  ActionPort: '<S1144>/ActionPort'
         */
        /* Merge: '<S920>/Merge3' incorporates:
         *  Logic: '<S1144>/Logical3'
         *  Switch: '<S1144>/Switch1'
         */
        rtb_UnitDelay_eb = ((rtb_UnitDelay_eb || rtb_TmpSignalConversionAtVeA_ce)
                            || rtb_Comparison5_d);

        /* Merge: '<S920>/Merge2' incorporates:
         *  Switch: '<S1144>/Switch3'
         */
        rtb_TmpSignalConversionAtVeA_ce = rtb_Comparison5_d;

        /* End of Outputs for SubSystem: '<S920>/ModeInhibitDet_N' */
    }
    else if (((sint32)rtb_TmpSignalConversionAtVeHS_h) == 1)
    {
        /* Outputs for IfAction SubSystem: '<S920>/ModeInhibitDet_M1' incorporates:
         *  ActionPort: '<S1142>/ActionPort'
         */
        /* Merge: '<S920>/Merge3' incorporates:
         *  Logic: '<S1142>/Logical4'
         *  Switch: '<S1142>/Switch1'
         */
        rtb_UnitDelay_eb = (rtb_UnitDelay_eb || rtb_Comparison5_d);

        /* UnitDelay: '<S717>/UnitDelay' incorporates:
         *  Logic: '<S1142>/Logical2'
         *  Switch: '<S1142>/Switch2'
         */
        rtb_UnitDelay_fh = ((rtb_TmpSignalConversionAtVeA_ce || rtb_UnitDelay_fh)
                            || rtb_Comparison5_d);

        /* End of Outputs for SubSystem: '<S920>/ModeInhibitDet_M1' */
    }
    else if (((sint32)rtb_TmpSignalConversionAtVeHS_h) == 5)
    {
        /* Outputs for IfAction SubSystem: '<S920>/ModeInhibitDet_M2' incorporates:
         *  ActionPort: '<S1143>/ActionPort'
         */
        /* Merge: '<S920>/Merge3' incorporates:
         *  Logic: '<S1143>/Logical2'
         *  Switch: '<S1143>/Switch1'
         */
        rtb_UnitDelay_eb = (rtb_UnitDelay_eb || rtb_TmpSignalConversionAtVeA_ce);

        /* UnitDelay: '<S717>/UnitDelay' incorporates:
         *  Logic: '<S1143>/Logical4'
         *  Switch: '<S1143>/Switch2'
         */
        rtb_UnitDelay_fh = (rtb_UnitDelay_fh || rtb_Comparison5_d);

        /* Merge: '<S920>/Merge2' incorporates:
         *  Constant: '<S1143>/FALSEConstant3'
         *  SignalConversion generated from: '<S1143>/Inhibit_M2'
         */
        rtb_TmpSignalConversionAtVeA_ce = false;

        /* End of Outputs for SubSystem: '<S920>/ModeInhibitDet_M2' */
    }
    else if (((sint32)rtb_TmpSignalConversionAtVeHS_h) == 2)
    {
        /* Outputs for IfAction SubSystem: '<S920>/ModeInhibitDet_G2' incorporates:
         *  ActionPort: '<S1140>/ActionPort'
         */
        /* UnitDelay: '<S717>/UnitDelay' incorporates:
         *  Logic: '<S1140>/Logical2'
         *  Switch: '<S1140>/Switch2'
         */
        rtb_UnitDelay_fh = ((rtb_TmpSignalConversionAtVeA_ce || rtb_UnitDelay_fh)
                            || rtb_Comparison5_d);

        /* End of Outputs for SubSystem: '<S920>/ModeInhibitDet_G2' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S920>/ModeInhibitDet_Invalid' incorporates:
         *  ActionPort: '<S1141>/ActionPort'
         */
        /* UnitDelay: '<S717>/UnitDelay' incorporates:
         *  Constant: '<S1141>/TRUEConstant2'
         *  SignalConversion generated from: '<S1141>/Inhibit_N'
         */
        rtb_UnitDelay_fh = true;

        /* Merge: '<S920>/Merge2' incorporates:
         *  Constant: '<S1141>/TRUEConstant3'
         *  SignalConversion generated from: '<S1141>/Inhibit_M2'
         */
        rtb_TmpSignalConversionAtVeA_ce = true;

        /* Merge: '<S920>/Merge3' incorporates:
         *  Constant: '<S1141>/TRUEConstant1'
         *  SignalConversion generated from: '<S1141>/Inhibit_G2'
         */
        rtb_UnitDelay_eb = true;

        /* End of Outputs for SubSystem: '<S920>/ModeInhibitDet_Invalid' */
    }

    /* End of If: '<S920>/If' */

    /* Logic: '<S920>/Logical1' incorporates:
     *  Constant: '<S1139>/Calib'
     */
    rtb_UnitDelay_fh = (rtb_UnitDelay_fh && (KeSRAR_b_RngEqnSelMdEnbl));

    /* Switch: '<S1067>/Switch1' incorporates:
     *  Constant: '<S1070>/Calib'
     */
    if (KeSRAR_b_Inhibit_Mode1_OvrdEnbl)
    {
        /* Switch: '<S1067>/Switch1' incorporates:
         *  Constant: '<S1071>/Calib'
         */
        Switch1_h = KeSRAR_b_Inhibit_Mode1_OvrdVal;
    }
    else
    {
        /* Switch: '<S1067>/Switch1' incorporates:
         *  Constant: '<S1074>/Calib'
         *  Constant: '<S1076>/Calib'
         *  Constant: '<S1078>/Calib'
         *  Constant: '<S1080>/Calib'
         *  Constant: '<S1082>/Calib'
         *  Constant: '<S1084>/Calib'
         *  Constant: '<S1086>/Calib'
         *  Constant: '<S1088>/Calib'
         *  Constant: '<S1092>/ConstantValue'
         *  Constant: '<S1093>/ConstantValue'
         *  Constant: '<S1094>/ConstantValue'
         *  Constant: '<S1095>/ConstantValue'
         *  Constant: '<S1096>/ConstantValue'
         *  Constant: '<S1097>/ConstantValue'
         *  Constant: '<S1098>/ConstantValue'
         *  Constant: '<S1099>/ConstantValue'
         *  Logic: '<S1090>/Logical13'
         *  Logic: '<S918>/Logical7'
         *  RelationalOperator: '<S1092>/Comparison'
         *  RelationalOperator: '<S1093>/Comparison'
         *  RelationalOperator: '<S1094>/Comparison'
         *  RelationalOperator: '<S1095>/Comparison'
         *  RelationalOperator: '<S1096>/Comparison'
         *  RelationalOperator: '<S1097>/Comparison'
         *  RelationalOperator: '<S1098>/Comparison'
         *  RelationalOperator: '<S1099>/Comparison'
         *  S-Function (sfix_bitop): '<S1092>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1093>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1094>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1095>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1096>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1097>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1098>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1099>/BitwiseLogicalOperator6'
         */
        Switch1_h = ((((rtb_TmpSignalConversionAtVeAD_p || rtb_Merge1_i) ||
                       Switch1_h) || rtb_UnitDelay_fh) ||
                     (((((((((rtb_Switch1_n3 & KeSRAR_g_RA1_SelInhibitMode1Cmnd)
                             >= 1U) || ((rtb_Switch1_ck &
                              KeSRAR_g_RA2_SelInhibitMode1Cmnd) >= 1U)) ||
                           ((rtb_Switch1_mr & KeSRAR_g_RA3_SelInhibitMode1Cmnd) >=
                            1U)) || ((rtb_Switch1_bk &
                            KeSRAR_g_RA4_SelInhibitMode1Cmnd) >= 1U)) ||
                         ((rtb_Switch1_c & KeSRAR_g_RA5_SelInhibitMode1Cmnd) >=
                          1U)) || ((rtb_Switch1_fxq &
                          KeSRAR_g_RA6_SelInhibitMode1Cmnd) >= 1U)) ||
                       ((BitwiseLogicalOperator_b &
                         KeSRAR_g_RA7_SelInhibitMode1Cmnd) >= 1U)) ||
                      ((rtb_Switch1_anw & KeSRAR_g_RA8_SelInhibitMode1Cmnd) >=
                       1U)));
    }

    /* End of Switch: '<S1067>/Switch1' */

    /* Logic: '<S921>/Logical1' */
    rtb_Switch1_ahj = (rtb_Logical6 && rtb_Switch1_ahj);

    /* Switch: '<S1068>/Switch1' incorporates:
     *  Constant: '<S1072>/Calib'
     */
    if (KeSRAR_b_Inhibit_Mode2_OvrdEnbl)
    {
        /* Switch: '<S1068>/Switch1' incorporates:
         *  Constant: '<S1073>/Calib'
         */
        Switch1_je = KeSRAR_b_Inhibit_Mode2_OvrdVal;
    }
    else
    {
        /* Switch: '<S1068>/Switch1' incorporates:
         *  Constant: '<S1069>/Calib'
         *  Constant: '<S1075>/Calib'
         *  Constant: '<S1077>/Calib'
         *  Constant: '<S1079>/Calib'
         *  Constant: '<S1081>/Calib'
         *  Constant: '<S1083>/Calib'
         *  Constant: '<S1085>/Calib'
         *  Constant: '<S1087>/Calib'
         *  Constant: '<S1089>/Calib'
         *  Constant: '<S1100>/ConstantValue'
         *  Constant: '<S1101>/ConstantValue'
         *  Constant: '<S1102>/ConstantValue'
         *  Constant: '<S1103>/ConstantValue'
         *  Constant: '<S1104>/ConstantValue'
         *  Constant: '<S1105>/ConstantValue'
         *  Constant: '<S1106>/ConstantValue'
         *  Constant: '<S1107>/ConstantValue'
         *  Constant: '<S1139>/Calib'
         *  Logic: '<S1091>/Logical13'
         *  Logic: '<S918>/Logical25'
         *  Logic: '<S918>/Logical8'
         *  Logic: '<S920>/Logical3'
         *  RelationalOperator: '<S1100>/Comparison'
         *  RelationalOperator: '<S1101>/Comparison'
         *  RelationalOperator: '<S1102>/Comparison'
         *  RelationalOperator: '<S1103>/Comparison'
         *  RelationalOperator: '<S1104>/Comparison'
         *  RelationalOperator: '<S1105>/Comparison'
         *  RelationalOperator: '<S1106>/Comparison'
         *  RelationalOperator: '<S1107>/Comparison'
         *  S-Function (sfix_bitop): '<S1100>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1101>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1102>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1103>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1104>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1105>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1106>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1107>/BitwiseLogicalOperator6'
         */
        Switch1_je = ((((rtb_TmpSignalConversionAtVeAD_p || rtb_Switch1_ahj) ||
                        Switch1_je) || ((rtb_TmpSignalConversionAtVeA_ce &&
                         (KeSRAR_b_RngEqnSelMdEnbl)) &&
                        (KeSRAR_b_Inhibit_M2_ActuatorFlt_InhibitMode2Enbl))) ||
                      (((((((((rtb_Switch1_n3 & KeSRAR_g_RA1_SelInhibitMode2Cmnd)
                              >= 1U) || ((rtb_Switch1_ck &
                               KeSRAR_g_RA2_SelInhibitMode2Cmnd) >= 1U)) ||
                            ((rtb_Switch1_mr & KeSRAR_g_RA3_SelInhibitMode2Cmnd)
                             >= 1U)) || ((rtb_Switch1_bk &
                             KeSRAR_g_RA4_SelInhibitMode2Cmnd) >= 1U)) ||
                          ((rtb_Switch1_c & KeSRAR_g_RA5_SelInhibitMode2Cmnd) >=
                           1U)) || ((rtb_Switch1_fxq &
                           KeSRAR_g_RA6_SelInhibitMode2Cmnd) >= 1U)) ||
                        ((BitwiseLogicalOperator_b &
                          KeSRAR_g_RA7_SelInhibitMode2Cmnd) >= 1U)) ||
                       ((rtb_Switch1_anw & KeSRAR_g_RA8_SelInhibitMode2Cmnd) >=
                        1U)));
    }

    /* End of Switch: '<S1068>/Switch1' */

    /* Logic: '<S257>/Logical13' */
    rtb_Logical13_mq = ((rtb_Switch1_ahj || rtb_Merge1_i) ||
                        rtb_TmpSignalConversionAtVeAD_p);

    /* Switch: '<S963>/Switch1' incorporates:
     *  Constant: '<S964>/Calib'
     */
    if (KeSRAR_b_Inhibit_Gear1_OvrdEnbl)
    {
        /* Switch: '<S963>/Switch1' incorporates:
         *  Constant: '<S965>/Calib'
         */
        rtb_TmpSignalConversionAtVeAD_p = KeSRAR_b_Inhibit_Gear1_OvrdVal;
    }
    else
    {
        /* Switch: '<S963>/Switch1' incorporates:
         *  Constant: '<S966>/Calib'
         *  Constant: '<S967>/Calib'
         *  Constant: '<S968>/Calib'
         *  Constant: '<S969>/Calib'
         *  Constant: '<S970>/Calib'
         *  Constant: '<S971>/Calib'
         *  Constant: '<S972>/Calib'
         *  Constant: '<S973>/Calib'
         *  Constant: '<S975>/ConstantValue'
         *  Constant: '<S976>/ConstantValue'
         *  Constant: '<S977>/ConstantValue'
         *  Constant: '<S978>/ConstantValue'
         *  Constant: '<S979>/ConstantValue'
         *  Constant: '<S980>/ConstantValue'
         *  Constant: '<S981>/ConstantValue'
         *  Constant: '<S982>/ConstantValue'
         *  Logic: '<S914>/Logical9'
         *  Logic: '<S974>/Logical13'
         *  RelationalOperator: '<S975>/Comparison'
         *  RelationalOperator: '<S976>/Comparison'
         *  RelationalOperator: '<S977>/Comparison'
         *  RelationalOperator: '<S978>/Comparison'
         *  RelationalOperator: '<S979>/Comparison'
         *  RelationalOperator: '<S980>/Comparison'
         *  RelationalOperator: '<S981>/Comparison'
         *  RelationalOperator: '<S982>/Comparison'
         *  S-Function (sfix_bitop): '<S975>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S976>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S977>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S978>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S979>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S980>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S981>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S982>/BitwiseLogicalOperator6'
         */
        rtb_TmpSignalConversionAtVeAD_p = (rtb_Logical13_mq ||
            (((((((((rtb_Switch1_n3 & KeSRAR_g_RA1_SelInhibitGear1Cmnd) >= 1U) ||
                   ((rtb_Switch1_ck & KeSRAR_g_RA2_SelInhibitGear1Cmnd) >= 1U)) ||
                  ((rtb_Switch1_mr & KeSRAR_g_RA3_SelInhibitGear1Cmnd) >= 1U)) ||
                 ((rtb_Switch1_bk & KeSRAR_g_RA4_SelInhibitGear1Cmnd) >= 1U)) ||
                ((rtb_Switch1_c & KeSRAR_g_RA5_SelInhibitGear1Cmnd) >= 1U)) ||
               ((rtb_Switch1_fxq & KeSRAR_g_RA6_SelInhibitGear1Cmnd) >= 1U)) ||
              ((BitwiseLogicalOperator_b & KeSRAR_g_RA7_SelInhibitGear1Cmnd) >=
               1U)) || ((rtb_Switch1_anw & KeSRAR_g_RA8_SelInhibitGear1Cmnd) >=
                        1U)));
    }

    /* End of Switch: '<S963>/Switch1' */

    /* Logic: '<S1001>/Logical15' incorporates:
     *  Constant: '<S1012>/Constant'
     *  Constant: '<S1013>/Constant'
     *  Logic: '<S1001>/Logical'
     *  RelationalOperator: '<S1001>/Comparison2'
     *  RelationalOperator: '<S1001>/Comparison4'
     *  UnitDelay: '<S1001>/UnitDelay'
     */
    rtb_Comparison5_d = (((((uint32)SRAR_ac_DW.UnitDelay_DSTATE_pp) ==
                           CeOHSR_e_RngSel_M1) && (((uint32)
                            rtb_TmpSignalConversionAtVeOHSR) ==
                           CeOHSR_e_RngSel_M2)) && tmpRead_a);

    /* Lookup_n-D: '<S1004>/Vector' incorporates:
     *  SignalConversion generated from: '<S2>/VeTFTR_T_TransOilTemp'
     */
    rtb_TmpSignalConversionAtVeTFTR = look1_iflf_binlcapw
        (rtb_TmpSignalConversionAtVeTFTR, ((const float32 *)
          &(KxSRAR_t_HoldG2atModetoMode[0])), ((const float32 *)
          &(KtSRAR_t_HoldG2atModetoMode[0])), 4U);

    /* Outputs for Atomic SubSystem: '<S1001>/SignalLatchOnWithReset1' */
    /* Logic: '<S1016>/OR1' incorporates:
     *  Logic: '<S1016>/NOT'
     *  Logic: '<S1016>/OR'
     *  UnitDelay: '<S1001>/UnitDelay2'
     *  UnitDelay: '<S1016>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeA_ce = (rtb_Comparison5_d ||
        ((!SRAR_ac_DW.UnitDelay2_DSTATE_c) && (SRAR_ac_DW.UnitDelay_DSTATE_nn)));

    /* Update for UnitDelay: '<S1016>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_nn = rtb_TmpSignalConversionAtVeA_ce;

    /* End of Outputs for SubSystem: '<S1001>/SignalLatchOnWithReset1' */

    /* Outputs for Atomic SubSystem: '<S1001>/TurnOnDelayTime' */
    /* Outputs for Atomic SubSystem: '<S1017>/EdgeRising' */
    /* Logic: '<S1018>/AND' incorporates:
     *  Logic: '<S1018>/OR1'
     *  UnitDelay: '<S1018>/UnitDelay'
     */
    rtb_AND_ik2 = (rtb_TmpSignalConversionAtVeA_ce &&
                   (!SRAR_ac_DW.UnitDelay_DSTATE_ann));

    /* Update for UnitDelay: '<S1018>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_ann = rtb_TmpSignalConversionAtVeA_ce;

    /* End of Outputs for SubSystem: '<S1017>/EdgeRising' */

    /* Switch: '<S1017>/Switch1' incorporates:
     *  Logic: '<S1017>/OR'
     *  Logic: '<S1017>/OR1'
     */
    if ((!rtb_TmpSignalConversionAtVeA_ce) || rtb_AND_ik2)
    {
        /* Switch: '<S1017>/Switch1' incorporates:
         *  Constant: '<S1017>/ConstantValue1'
         */
        rtb_Switch1_dn = 0.0F;
    }
    else
    {
        /* Switch: '<S1017>/Switch1' incorporates:
         *  Constant: '<S1003>/Calib'
         *  MinMax: '<S1017>/Minimum'
         *  Sum: '<S1017>/Summation'
         *  UnitDelay: '<S1017>/UnitDelay'
         */
        rtb_Switch1_dn = fminf(rtb_TmpSignalConversionAtVeTFTR, KeSRAR_t_dT +
                               SRAR_ac_DW.UnitDelay_DSTATE_n);
    }

    /* End of Switch: '<S1017>/Switch1' */

    /* Update for UnitDelay: '<S1017>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_n = rtb_Switch1_dn;

    /* Logic: '<S1001>/Logical16' incorporates:
     *  Constant: '<S1014>/Constant'
     *  Logic: '<S1017>/AND'
     *  RelationalOperator: '<S1001>/Comparison3'
     *  RelationalOperator: '<S1017>/GreaterThan'
     */
    rtb_TmpSignalConversionAtVeA_ce = ((rtb_TmpSignalConversionAtVeA_ce &&
        (rtb_Switch1_dn >= rtb_TmpSignalConversionAtVeTFTR)) || (((uint32)
        rtb_TmpSignalConversionAtVeHSER) == CeHSER_e_M2));

    /* End of Outputs for SubSystem: '<S1001>/TurnOnDelayTime' */

    /* Outputs for Atomic SubSystem: '<S1001>/SignalLatchOnWithReset' */
    /* Logic: '<S1015>/OR1' incorporates:
     *  Logic: '<S1015>/NOT'
     *  Logic: '<S1015>/OR'
     *  UnitDelay: '<S1015>/UnitDelay'
     */
    rtb_AND_ik2 = (rtb_Comparison5_d || ((!rtb_TmpSignalConversionAtVeA_ce) &&
                    (SRAR_ac_DW.UnitDelay_DSTATE_bx)));

    /* Update for UnitDelay: '<S1015>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_bx = rtb_AND_ik2;

    /* End of Outputs for SubSystem: '<S1001>/SignalLatchOnWithReset' */

    /* Logic: '<S1000>/Logical18' incorporates:
     *  Constant: '<S1005>/Constant'
     *  Constant: '<S1006>/Constant'
     *  Logic: '<S1000>/Logical17'
     *  RelationalOperator: '<S1000>/Comparison5'
     *  RelationalOperator: '<S1000>/Comparison7'
     *  UnitDelay: '<S1000>/UnitDelay1'
     */
    rtb_Logical18_i = (((((uint32)SRAR_ac_DW.UnitDelay1_DSTATE_d) ==
                         CeOHSR_e_RngSel_M2) && (((uint32)
                          rtb_TmpSignalConversionAtVeOHSR) == CeOHSR_e_RngSel_M1))
                       && tmpRead_a);

    /* Outputs for Atomic SubSystem: '<S1000>/SignalLatchOnWithReset3' */
    /* Logic: '<S1009>/OR1' incorporates:
     *  Logic: '<S1009>/NOT'
     *  Logic: '<S1009>/OR'
     *  UnitDelay: '<S1000>/UnitDelay3'
     *  UnitDelay: '<S1009>/UnitDelay'
     */
    rtb_Comparison5_d = (rtb_Logical18_i || ((!SRAR_ac_DW.UnitDelay3_DSTATE_o) &&
                          (SRAR_ac_DW.UnitDelay_DSTATE_ds)));

    /* Update for UnitDelay: '<S1009>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_ds = rtb_Comparison5_d;

    /* End of Outputs for SubSystem: '<S1000>/SignalLatchOnWithReset3' */

    /* Outputs for Atomic SubSystem: '<S1000>/TurnOnDelayTime1' */
    /* Outputs for Atomic SubSystem: '<S1010>/EdgeRising' */
    /* Logic: '<S1011>/AND' incorporates:
     *  Logic: '<S1011>/OR1'
     *  UnitDelay: '<S1011>/UnitDelay'
     */
    rtb_Logical6 = (rtb_Comparison5_d && (!SRAR_ac_DW.UnitDelay_DSTATE_e0));

    /* Update for UnitDelay: '<S1011>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_e0 = rtb_Comparison5_d;

    /* End of Outputs for SubSystem: '<S1010>/EdgeRising' */

    /* Switch: '<S1010>/Switch1' incorporates:
     *  Logic: '<S1010>/OR'
     *  Logic: '<S1010>/OR1'
     */
    if ((!rtb_Comparison5_d) || rtb_Logical6)
    {
        /* Switch: '<S1010>/Switch1' incorporates:
         *  Constant: '<S1010>/ConstantValue1'
         */
        rtb_Switch1_dn = 0.0F;
    }
    else
    {
        /* Switch: '<S1010>/Switch1' incorporates:
         *  Constant: '<S1003>/Calib'
         *  MinMax: '<S1010>/Minimum'
         *  Sum: '<S1010>/Summation'
         *  UnitDelay: '<S1010>/UnitDelay'
         */
        rtb_Switch1_dn = fminf(rtb_TmpSignalConversionAtVeTFTR, KeSRAR_t_dT +
                               SRAR_ac_DW.UnitDelay_DSTATE_an);
    }

    /* End of Switch: '<S1010>/Switch1' */

    /* Update for UnitDelay: '<S1010>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_an = rtb_Switch1_dn;

    /* Logic: '<S1000>/Logical19' incorporates:
     *  Constant: '<S1007>/Constant'
     *  Logic: '<S1010>/AND'
     *  RelationalOperator: '<S1000>/Comparison6'
     *  RelationalOperator: '<S1010>/GreaterThan'
     */
    rtb_Comparison5_d = ((rtb_Comparison5_d && (rtb_Switch1_dn >=
                           rtb_TmpSignalConversionAtVeTFTR)) || (((uint32)
                           rtb_TmpSignalConversionAtVeHSER) == CeHSER_e_M1));

    /* End of Outputs for SubSystem: '<S1000>/TurnOnDelayTime1' */

    /* Outputs for Atomic SubSystem: '<S1000>/SignalLatchOnWithReset2' */
    /* Logic: '<S1008>/OR1' incorporates:
     *  Logic: '<S1008>/NOT'
     *  Logic: '<S1008>/OR'
     *  UnitDelay: '<S1008>/UnitDelay'
     */
    rtb_Logical18_i = (rtb_Logical18_i || ((!rtb_Comparison5_d) &&
                        (SRAR_ac_DW.UnitDelay_DSTATE_iz)));

    /* Update for UnitDelay: '<S1008>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_iz = rtb_Logical18_i;

    /* End of Outputs for SubSystem: '<S1000>/SignalLatchOnWithReset2' */

    /* Switch: '<S984>/Switch1' incorporates:
     *  Constant: '<S986>/Calib'
     *  Constant: '<S989>/Calib'
     *  Switch: '<S985>/Switch1'
     */
    if (KeSRAR_b_Inhibit_Gear2_OvrdEnbl)
    {
        /* Switch: '<S984>/Switch1' incorporates:
         *  Constant: '<S990>/Calib'
         */
        rtb_AND_ik2 = KeSRAR_b_Inhibit_Gear2_OvrdVal;
    }
    else
    {
        if (KeSRAR_b_AllowG2)
        {
            /* Switch: '<S1002>/Switch1' incorporates:
             *  Switch: '<S985>/Switch1'
             */
            if (rtb_AND_ik2)
            {
                /* Switch: '<S985>/Switch1' incorporates:
                 *  Constant: '<S983>/FALSEConstant'
                 *  Switch: '<S1002>/Switch1'
                 */
                rtb_AND_ik2 = false;
            }
            else
            {
                /* Switch: '<S985>/Switch1' incorporates:
                 *  Switch: '<S1002>/Switch1'
                 *  Switch: '<S1002>/Switch2'
                 */
                rtb_AND_ik2 = ((!rtb_Logical18_i) && tmpRead_a);
            }

            /* End of Switch: '<S1002>/Switch1' */
        }
        else
        {
            /* Switch: '<S985>/Switch1' */
            rtb_AND_ik2 = tmpRead_a;
        }

        /* Switch: '<S984>/Switch1' incorporates:
         *  Constant: '<S1019>/ConstantValue'
         *  Constant: '<S1020>/ConstantValue'
         *  Constant: '<S1021>/ConstantValue'
         *  Constant: '<S1022>/ConstantValue'
         *  Constant: '<S1023>/ConstantValue'
         *  Constant: '<S1024>/ConstantValue'
         *  Constant: '<S1025>/ConstantValue'
         *  Constant: '<S1026>/ConstantValue'
         *  Constant: '<S1139>/Calib'
         *  Constant: '<S987>/Calib'
         *  Constant: '<S988>/Calib'
         *  Constant: '<S991>/Calib'
         *  Constant: '<S992>/Calib'
         *  Constant: '<S993>/Calib'
         *  Constant: '<S994>/Calib'
         *  Constant: '<S995>/Calib'
         *  Constant: '<S996>/Calib'
         *  Constant: '<S997>/Calib'
         *  Constant: '<S998>/Calib'
         *  Logic: '<S915>/Logical10'
         *  Logic: '<S915>/Logical18'
         *  Logic: '<S915>/Logical24'
         *  Logic: '<S915>/Logical3'
         *  Logic: '<S920>/Logical4'
         *  Logic: '<S999>/Logical13'
         *  RelationalOperator: '<S1019>/Comparison'
         *  RelationalOperator: '<S1020>/Comparison'
         *  RelationalOperator: '<S1021>/Comparison'
         *  RelationalOperator: '<S1022>/Comparison'
         *  RelationalOperator: '<S1023>/Comparison'
         *  RelationalOperator: '<S1024>/Comparison'
         *  RelationalOperator: '<S1025>/Comparison'
         *  RelationalOperator: '<S1026>/Comparison'
         *  S-Function (sfix_bitop): '<S1019>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1020>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1021>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1022>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1023>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1024>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1025>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1026>/BitwiseLogicalOperator6'
         */
        rtb_AND_ik2 = (rtb_Logical13_mq || ((((rtb_UnitDelay_eb &&
                           (KeSRAR_b_RngEqnSelMdEnbl)) &&
                          (KeSRAR_b_Inhibit_G2_ActuatorFlt_InhibitGear2Enbl)) ||
                         ((KeSRAR_b_EngSysLowFuel_InhibitGear2Enbl) &&
                          rtb_AND_ik2)) || (((((((((rtb_Switch1_n3 &
            KeSRAR_g_RA1_SelInhibitGear2Cmnd) >= 1U) || ((rtb_Switch1_ck &
            KeSRAR_g_RA2_SelInhibitGear2Cmnd) >= 1U)) || ((rtb_Switch1_mr &
                                KeSRAR_g_RA3_SelInhibitGear2Cmnd) >= 1U)) ||
                             ((rtb_Switch1_bk & KeSRAR_g_RA4_SelInhibitGear2Cmnd)
                              >= 1U)) || ((rtb_Switch1_c &
                              KeSRAR_g_RA5_SelInhibitGear2Cmnd) >= 1U)) ||
                           ((rtb_Switch1_fxq & KeSRAR_g_RA6_SelInhibitGear2Cmnd)
                            >= 1U)) || ((BitwiseLogicalOperator_b &
                            KeSRAR_g_RA7_SelInhibitGear2Cmnd) >= 1U)) ||
                         ((rtb_Switch1_anw & KeSRAR_g_RA8_SelInhibitGear2Cmnd) >=
                          1U))));
    }

    /* End of Switch: '<S984>/Switch1' */

    /* Switch: '<S1027>/Switch1' incorporates:
     *  Constant: '<S1028>/Calib'
     */
    if (KeSRAR_b_Inhibit_Gear3_OvrdEnbl)
    {
        /* Switch: '<S1027>/Switch1' incorporates:
         *  Constant: '<S1029>/Calib'
         */
        rtb_Logical18_i = KeSRAR_b_Inhibit_Gear3_OvrdVal;
    }
    else
    {
        /* Switch: '<S1027>/Switch1' incorporates:
         *  Constant: '<S1030>/Calib'
         *  Constant: '<S1031>/Calib'
         *  Constant: '<S1032>/Calib'
         *  Constant: '<S1033>/Calib'
         *  Constant: '<S1034>/Calib'
         *  Constant: '<S1035>/Calib'
         *  Constant: '<S1036>/Calib'
         *  Constant: '<S1037>/Calib'
         *  Constant: '<S1039>/ConstantValue'
         *  Constant: '<S1040>/ConstantValue'
         *  Constant: '<S1041>/ConstantValue'
         *  Constant: '<S1042>/ConstantValue'
         *  Constant: '<S1043>/ConstantValue'
         *  Constant: '<S1044>/ConstantValue'
         *  Constant: '<S1045>/ConstantValue'
         *  Constant: '<S1046>/ConstantValue'
         *  Logic: '<S1038>/Logical13'
         *  Logic: '<S916>/Logical11'
         *  RelationalOperator: '<S1039>/Comparison'
         *  RelationalOperator: '<S1040>/Comparison'
         *  RelationalOperator: '<S1041>/Comparison'
         *  RelationalOperator: '<S1042>/Comparison'
         *  RelationalOperator: '<S1043>/Comparison'
         *  RelationalOperator: '<S1044>/Comparison'
         *  RelationalOperator: '<S1045>/Comparison'
         *  RelationalOperator: '<S1046>/Comparison'
         *  S-Function (sfix_bitop): '<S1039>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1040>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1041>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1042>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1043>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1044>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1045>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1046>/BitwiseLogicalOperator6'
         */
        rtb_Logical18_i = (rtb_Logical13_mq || (((((((((rtb_Switch1_n3 &
            KeSRAR_g_RA1_SelInhibitGear3Cmnd) >= 1U) || ((rtb_Switch1_ck &
            KeSRAR_g_RA2_SelInhibitGear3Cmnd) >= 1U)) || ((rtb_Switch1_mr &
            KeSRAR_g_RA3_SelInhibitGear3Cmnd) >= 1U)) || ((rtb_Switch1_bk &
            KeSRAR_g_RA4_SelInhibitGear3Cmnd) >= 1U)) || ((rtb_Switch1_c &
            KeSRAR_g_RA5_SelInhibitGear3Cmnd) >= 1U)) || ((rtb_Switch1_fxq &
                                KeSRAR_g_RA6_SelInhibitGear3Cmnd) >= 1U)) ||
                             ((BitwiseLogicalOperator_b &
                               KeSRAR_g_RA7_SelInhibitGear3Cmnd) >= 1U)) ||
                            ((rtb_Switch1_anw & KeSRAR_g_RA8_SelInhibitGear3Cmnd)
                             >= 1U)));
    }

    /* End of Switch: '<S1027>/Switch1' */

    /* Switch: '<S1047>/Switch1' incorporates:
     *  Constant: '<S1048>/Calib'
     */
    if (KeSRAR_b_Inhibit_Gear4_OvrdEnbl)
    {
        /* Switch: '<S1047>/Switch1' incorporates:
         *  Constant: '<S1049>/Calib'
         */
        rtb_Logical13_mq = KeSRAR_b_Inhibit_Gear4_OvrdVal;
    }
    else
    {
        /* Switch: '<S1047>/Switch1' incorporates:
         *  Constant: '<S1050>/Calib'
         *  Constant: '<S1051>/Calib'
         *  Constant: '<S1052>/Calib'
         *  Constant: '<S1053>/Calib'
         *  Constant: '<S1054>/Calib'
         *  Constant: '<S1055>/Calib'
         *  Constant: '<S1056>/Calib'
         *  Constant: '<S1057>/Calib'
         *  Constant: '<S1059>/ConstantValue'
         *  Constant: '<S1060>/ConstantValue'
         *  Constant: '<S1061>/ConstantValue'
         *  Constant: '<S1062>/ConstantValue'
         *  Constant: '<S1063>/ConstantValue'
         *  Constant: '<S1064>/ConstantValue'
         *  Constant: '<S1065>/ConstantValue'
         *  Constant: '<S1066>/ConstantValue'
         *  Logic: '<S1058>/Logical13'
         *  Logic: '<S917>/Logical12'
         *  RelationalOperator: '<S1059>/Comparison'
         *  RelationalOperator: '<S1060>/Comparison'
         *  RelationalOperator: '<S1061>/Comparison'
         *  RelationalOperator: '<S1062>/Comparison'
         *  RelationalOperator: '<S1063>/Comparison'
         *  RelationalOperator: '<S1064>/Comparison'
         *  RelationalOperator: '<S1065>/Comparison'
         *  RelationalOperator: '<S1066>/Comparison'
         *  S-Function (sfix_bitop): '<S1059>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1060>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1061>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1062>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1063>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1064>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1065>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1066>/BitwiseLogicalOperator6'
         */
        rtb_Logical13_mq = (rtb_Logical13_mq || (((((((((rtb_Switch1_n3 &
            KeSRAR_g_RA1_SelInhibitGear4Cmnd) >= 1U) || ((rtb_Switch1_ck &
            KeSRAR_g_RA2_SelInhibitGear4Cmnd) >= 1U)) || ((rtb_Switch1_mr &
            KeSRAR_g_RA3_SelInhibitGear4Cmnd) >= 1U)) || ((rtb_Switch1_bk &
            KeSRAR_g_RA4_SelInhibitGear4Cmnd) >= 1U)) || ((rtb_Switch1_c &
            KeSRAR_g_RA5_SelInhibitGear4Cmnd) >= 1U)) || ((rtb_Switch1_fxq &
            KeSRAR_g_RA6_SelInhibitGear4Cmnd) >= 1U)) ||
                              ((BitwiseLogicalOperator_b &
                                KeSRAR_g_RA7_SelInhibitGear4Cmnd) >= 1U)) ||
                             ((rtb_Switch1_anw &
                               KeSRAR_g_RA8_SelInhibitGear4Cmnd) >= 1U)));
    }

    /* End of Switch: '<S1047>/Switch1' */

    /* Switch: '<S1165>/Switch1' incorporates:
     *  Constant: '<S1166>/Calib'
     */
    if (KeSRAR_b_Inhibit_Neutral_OvrdEnbl)
    {
        /* Switch: '<S1165>/Switch1' incorporates:
         *  Constant: '<S1167>/Calib'
         */
        rtb_Logical6 = KeSRAR_b_Inhibit_Neutral_OvrdVal;
    }
    else
    {
        /* Switch: '<S1165>/Switch1' incorporates:
         *  Constant: '<S1168>/Calib'
         *  Constant: '<S1169>/Calib'
         *  Constant: '<S1170>/Calib'
         *  Constant: '<S1171>/Calib'
         *  Constant: '<S1172>/Calib'
         *  Constant: '<S1173>/Calib'
         *  Constant: '<S1174>/Calib'
         *  Constant: '<S1175>/Calib'
         *  Constant: '<S1179>/ConstantValue'
         *  Constant: '<S1180>/ConstantValue'
         *  Constant: '<S1181>/ConstantValue'
         *  Constant: '<S1182>/ConstantValue'
         *  Constant: '<S1183>/ConstantValue'
         *  Constant: '<S1184>/ConstantValue'
         *  Constant: '<S1185>/ConstantValue'
         *  Constant: '<S1186>/ConstantValue'
         *  Logic: '<S1177>/Logical13'
         *  Logic: '<S922>/Logical2'
         *  RelationalOperator: '<S1179>/Comparison'
         *  RelationalOperator: '<S1180>/Comparison'
         *  RelationalOperator: '<S1181>/Comparison'
         *  RelationalOperator: '<S1182>/Comparison'
         *  RelationalOperator: '<S1183>/Comparison'
         *  RelationalOperator: '<S1184>/Comparison'
         *  RelationalOperator: '<S1185>/Comparison'
         *  RelationalOperator: '<S1186>/Comparison'
         *  S-Function (sfix_bitop): '<S1179>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1180>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1181>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1182>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1183>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1184>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1185>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S1186>/BitwiseLogicalOperator6'
         */
        rtb_Logical6 = (rtb_UnitDelay_fh || (((((((((rtb_Switch1_n3 &
            KeSRAR_g_RA1_SelNeutralCmnd) >= 1U) || ((rtb_Switch1_ck &
            KeSRAR_g_RA2_SelNeutralCmnd) >= 1U)) || ((rtb_Switch1_mr &
                                KeSRAR_g_RA3_SelNeutralCmnd) >= 1U)) ||
                             ((rtb_Switch1_bk & KeSRAR_g_RA4_SelNeutralCmnd) >=
                              1U)) || ((rtb_Switch1_c &
                              KeSRAR_g_RA5_SelNeutralCmnd) >= 1U)) ||
                           ((rtb_Switch1_fxq & KeSRAR_g_RA6_SelNeutralCmnd) >=
                            1U)) || ((BitwiseLogicalOperator_b &
                            KeSRAR_g_RA7_SelNeutralCmnd) >= 1U)) ||
                         ((rtb_Switch1_anw & KeSRAR_g_RA8_SelNeutralCmnd) >= 1U)));
    }

    /* End of Switch: '<S1165>/Switch1' */

    /* Logic: '<S1178>/Logical6' incorporates:
     *  Constant: '<S1194>/Calib'
     *  Logic: '<S1178>/Logical1'
     *  RelationalOperator: '<S1178>/Comparison1'
     */
    rtb_OR1_ln = ((rtb_TmpSignalConversionAtVeHPMR >= KeSRAR_t_InitLimTrans) &&
                  ((((((Switch1_h || Switch1_je) ||
                       rtb_TmpSignalConversionAtVeAD_p) || rtb_AND_ik2) ||
                     rtb_Logical18_i) || rtb_Logical13_mq) || rtb_Logical6));

    /* RelationalOperator: '<S1453>/Comparison4' incorporates:
     *  Constant: '<S1480>/Calib'
     */
    rtb_Comparison4_lp = (rtb_TmpSignalConversionAtVePMDR >=
                          KeSRAR_t_DebounceRAHist);

    /* Outputs for Atomic SubSystem: '<S156>/TurnOnDelayTime' */
    /* Outputs for Atomic SubSystem: '<S197>/EdgeRising' */
    /* UnitDelay: '<S201>/UnitDelay' incorporates:
     *  UnitDelay: '<S198>/UnitDelay'
     */
    rtb_UnitDelay_eb = SRAR_ac_DW.UnitDelay_DSTATE_hou;

    /* Update for UnitDelay: '<S198>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_hou = rtb_AND_gv;

    /* Switch: '<S197>/Switch1' incorporates:
     *  Logic: '<S197>/OR'
     *  Logic: '<S197>/OR1'
     *  Logic: '<S198>/AND'
     *  Logic: '<S198>/OR1'
     */
    if ((!rtb_AND_gv) || (rtb_AND_gv && (!rtb_UnitDelay_eb)))
    {
        /* Switch: '<S197>/Switch1' incorporates:
         *  Constant: '<S197>/ConstantValue1'
         */
        rtb_TmpSignalConversionAtVePMDR = 0.0F;
    }
    else
    {
        /* Switch: '<S197>/Switch1' incorporates:
         *  Constant: '<S151>/Calib'
         *  Constant: '<S196>/Calib'
         *  MinMax: '<S197>/Minimum'
         *  Sum: '<S197>/Summation'
         *  UnitDelay: '<S197>/UnitDelay'
         */
        rtb_TmpSignalConversionAtVePMDR = fminf(KeSRAR_t_RegenBrkInhb,
            KeSRAR_t_dT + SRAR_ac_DW.UnitDelay_DSTATE_i4);
    }

    /* End of Switch: '<S197>/Switch1' */
    /* End of Outputs for SubSystem: '<S197>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S156>/TurnOnDelayTime' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeBTQR_M_RegenBrkAxleTrqReq' */
    (void)Rte_Read_VeBTQR_M_RegenBrkAxleTrqReq_Value(&rtb_Switch1_ml);

    /* Inport: '<Root>/VeBTQR_b_RegenBrkAxleTrqReqFA' */
    (void)Rte_Read_VeBTQR_b_RegenBrkAxleTrqReqFA_Value(&VeSRAR_b_FltShtDwnCmnd);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRAR_MedTEB'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Outputs for Atomic SubSystem: '<S156>/TurnOnDelayTime' */
    /* Update for UnitDelay: '<S197>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_i4 = rtb_TmpSignalConversionAtVePMDR;

    /* End of Outputs for SubSystem: '<S156>/TurnOnDelayTime' */

    /* Logic: '<S8>/Logical7' incorporates:
     *  Logic: '<S9>/Logical1'
     */
    rtb_UnitDelay_fh = (rtb_VeSRAR_b_CKSFailed || rtb_LogicalOperator_ln);

    /* Outputs for Atomic SubSystem: '<S154>/TurnOnDelayTime1' */
    /* Outputs for Atomic SubSystem: '<S189>/EdgeRising' */
    /* Logic: '<S190>/AND' incorporates:
     *  Logic: '<S190>/OR1'
     *  Logic: '<S8>/Logical7'
     *  UnitDelay: '<S190>/UnitDelay'
     */
    rtb_UnitDelay_eb = (rtb_UnitDelay_fh && (!SRAR_ac_DW.UnitDelay_DSTATE_lv));

    /* Update for UnitDelay: '<S190>/UnitDelay' incorporates:
     *  Logic: '<S8>/Logical7'
     */
    SRAR_ac_DW.UnitDelay_DSTATE_lv = rtb_UnitDelay_fh;

    /* End of Outputs for SubSystem: '<S189>/EdgeRising' */

    /* Switch: '<S189>/Switch1' incorporates:
     *  Logic: '<S189>/OR'
     *  Logic: '<S189>/OR1'
     *  Logic: '<S8>/Logical7'
     */
    if ((!rtb_UnitDelay_fh) || rtb_UnitDelay_eb)
    {
        /* Switch: '<S189>/Switch1' incorporates:
         *  Constant: '<S189>/ConstantValue1'
         */
        rtb_TmpSignalConversionAtVeTFTR = 0.0F;
    }
    else
    {
        /* Switch: '<S189>/Switch1' incorporates:
         *  Constant: '<S151>/Calib'
         *  Constant: '<S187>/Calib'
         *  MinMax: '<S189>/Minimum'
         *  Sum: '<S189>/Summation'
         *  UnitDelay: '<S189>/UnitDelay'
         */
        rtb_TmpSignalConversionAtVeTFTR = fminf(KeSRAR_t_ReducedPerf,
            KeSRAR_t_dT + SRAR_ac_DW.UnitDelay_DSTATE_kk);
    }

    /* End of Switch: '<S189>/Switch1' */
    /* End of Outputs for SubSystem: '<S154>/TurnOnDelayTime1' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeATRR_M_OutputTorqReqImmed' */
    (void)Rte_Read_VeATRR_M_OutputTorqReqImmed_Value(&rtb_Switch1_n4);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRAR_MedTEB'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Outputs for Atomic SubSystem: '<S154>/TurnOnDelayTime1' */
    /* Update for UnitDelay: '<S189>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_kk = rtb_TmpSignalConversionAtVeTFTR;

    /* End of Outputs for SubSystem: '<S154>/TurnOnDelayTime1' */

    /* Switch: '<S1547>/Switch1' incorporates:
     *  Abs: '<S8>/Abs4'
     */
    rtb_Switch1_n4 = fabsf(rtb_Switch1_n4);

    /* Outputs for Atomic SubSystem: '<S155>/TurnOnDelayTime5' */
    /* Outputs for Atomic SubSystem: '<S193>/EdgeRising' */
    /* UnitDelay: '<S201>/UnitDelay' incorporates:
     *  UnitDelay: '<S194>/UnitDelay'
     */
    rtb_UnitDelay_eb = SRAR_ac_DW.UnitDelay_DSTATE_mu;

    /* Update for UnitDelay: '<S194>/UnitDelay' incorporates:
     *  Logic: '<S134>/AND'
     */
    SRAR_ac_DW.UnitDelay_DSTATE_mu = rtb_TmpSignalConversionAtVeENGR;

    /* Switch: '<S193>/Switch1' incorporates:
     *  Logic: '<S134>/AND'
     *  Logic: '<S193>/OR'
     *  Logic: '<S193>/OR1'
     *  Logic: '<S194>/AND'
     *  Logic: '<S194>/OR1'
     */
    if ((!rtb_TmpSignalConversionAtVeENGR) || (rtb_TmpSignalConversionAtVeENGR &&
         (!rtb_UnitDelay_eb)))
    {
        /* Switch: '<S193>/Switch1' incorporates:
         *  Constant: '<S193>/ConstantValue1'
         */
        rtb_Switch1_dn = 0.0F;
    }
    else
    {
        /* Switch: '<S193>/Switch1' incorporates:
         *  Constant: '<S151>/Calib'
         *  Constant: '<S191>/Calib'
         *  MinMax: '<S193>/Minimum'
         *  Sum: '<S193>/Summation'
         *  UnitDelay: '<S193>/UnitDelay'
         */
        rtb_Switch1_dn = fminf(KeSRAR_t_ReducedPerf2, KeSRAR_t_dT +
                               SRAR_ac_DW.UnitDelay_DSTATE_gj);
    }

    /* End of Switch: '<S193>/Switch1' */
    /* End of Outputs for SubSystem: '<S193>/EdgeRising' */

    /* Update for UnitDelay: '<S193>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_gj = rtb_Switch1_dn;

    /* End of Outputs for SubSystem: '<S155>/TurnOnDelayTime5' */

    /* Outputs for Atomic SubSystem: '<S152>/TurnOnDelayTime6' */
    /* Outputs for Atomic SubSystem: '<S181>/EdgeRising' */
    /* UnitDelay: '<S201>/UnitDelay' incorporates:
     *  UnitDelay: '<S182>/UnitDelay'
     */
    rtb_UnitDelay_eb = SRAR_ac_DW.UnitDelay_DSTATE_cb;

    /* Update for UnitDelay: '<S182>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_cb = rtb_TmpSignalConversionAtVeAD_o;

    /* Switch: '<S181>/Switch1' incorporates:
     *  Logic: '<S181>/OR'
     *  Logic: '<S181>/OR1'
     *  Logic: '<S182>/AND'
     *  Logic: '<S182>/OR1'
     */
    if ((!rtb_TmpSignalConversionAtVeAD_o) || (rtb_TmpSignalConversionAtVeAD_o &&
         (!rtb_UnitDelay_eb)))
    {
        /* Switch: '<S181>/Switch1' incorporates:
         *  Constant: '<S181>/ConstantValue1'
         */
        rtb_Switch1_nx = 0.0F;
    }
    else
    {
        /* Switch: '<S181>/Switch1' incorporates:
         *  Constant: '<S151>/Calib'
         *  Constant: '<S180>/Calib'
         *  MinMax: '<S181>/Minimum'
         *  Sum: '<S181>/Summation'
         *  UnitDelay: '<S181>/UnitDelay'
         */
        rtb_Switch1_nx = fminf(KeSRAR_t_limitInputTrq, KeSRAR_t_dT +
                               SRAR_ac_DW.UnitDelay_DSTATE_ls);
    }

    /* End of Switch: '<S181>/Switch1' */
    /* End of Outputs for SubSystem: '<S181>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S152>/TurnOnDelayTime6' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeETQR_M_EngTrqActual' */
    (void)Rte_Read_VeETQR_M_EngTrqActual_Value(&rtb_Switch1_eo);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRAR_MedTEB'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Outputs for Atomic SubSystem: '<S152>/TurnOnDelayTime6' */
    /* Update for UnitDelay: '<S181>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_ls = rtb_Switch1_nx;

    /* End of Outputs for SubSystem: '<S152>/TurnOnDelayTime6' */

    /* Outputs for Atomic SubSystem: '<S146>/TurnOnDelayTime2' */
    /* Outputs for Atomic SubSystem: '<S161>/EdgeRising' */
    /* UnitDelay: '<S201>/UnitDelay' incorporates:
     *  UnitDelay: '<S162>/UnitDelay'
     */
    rtb_UnitDelay_eb = SRAR_ac_DW.UnitDelay_DSTATE_e5;

    /* Update for UnitDelay: '<S162>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_e5 = rtb_TmpSignalConversionAtVePLTR;

    /* Switch: '<S161>/Switch1' incorporates:
     *  Logic: '<S161>/OR'
     *  Logic: '<S161>/OR1'
     *  Logic: '<S162>/AND'
     *  Logic: '<S162>/OR1'
     */
    if ((!rtb_TmpSignalConversionAtVePLTR) || (rtb_TmpSignalConversionAtVePLTR &&
         (!rtb_UnitDelay_eb)))
    {
        /* Switch: '<S161>/Switch1' incorporates:
         *  Constant: '<S161>/ConstantValue1'
         */
        rtb_Switch1_io = 0.0F;
    }
    else
    {
        /* Switch: '<S161>/Switch1' incorporates:
         *  Constant: '<S151>/Calib'
         *  Constant: '<S160>/Calib'
         *  MinMax: '<S161>/Minimum'
         *  Sum: '<S161>/Summation'
         *  UnitDelay: '<S161>/UnitDelay'
         */
        rtb_Switch1_io = fminf(KeSRAR_t_CreepTorqMode, KeSRAR_t_dT +
                               SRAR_ac_DW.UnitDelay_DSTATE_ka);
    }

    /* End of Switch: '<S161>/Switch1' */
    /* End of Outputs for SubSystem: '<S161>/EdgeRising' */

    /* Update for UnitDelay: '<S161>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_ka = rtb_Switch1_io;

    /* End of Outputs for SubSystem: '<S146>/TurnOnDelayTime2' */

    /* RelationalOperator: '<S149>/Comparison6' incorporates:
     *  Constant: '<S170>/Constant'
     */
    rtb_Comparison6_m = (((uint32)Switch1_f) == CeSTRR_e_OvrrdEngOff);

    /* Outputs for Atomic SubSystem: '<S149>/TurnOnDelayTime3' */
    /* Outputs for Atomic SubSystem: '<S172>/EdgeRising' */
    /* Logic: '<S173>/AND' incorporates:
     *  Logic: '<S173>/OR1'
     *  UnitDelay: '<S173>/UnitDelay'
     */
    rtb_UnitDelay_eb = (rtb_Comparison6_m && (!SRAR_ac_DW.UnitDelay_DSTATE_kv));

    /* Update for UnitDelay: '<S173>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_kv = rtb_Comparison6_m;

    /* End of Outputs for SubSystem: '<S172>/EdgeRising' */

    /* Switch: '<S172>/Switch1' incorporates:
     *  Logic: '<S172>/OR'
     *  Logic: '<S172>/OR1'
     */
    if ((!rtb_Comparison6_m) || rtb_UnitDelay_eb)
    {
        /* Switch: '<S172>/Switch1' incorporates:
         *  Constant: '<S172>/ConstantValue1'
         */
        rtb_Switch1_bs = 0.0F;
    }
    else
    {
        /* Switch: '<S172>/Switch1' incorporates:
         *  Constant: '<S151>/Calib'
         *  Constant: '<S171>/Calib'
         *  MinMax: '<S172>/Minimum'
         *  Sum: '<S172>/Summation'
         *  UnitDelay: '<S172>/UnitDelay'
         */
        rtb_Switch1_bs = fminf(KeSRAR_t_EngStrtStpEngShtDwn, KeSRAR_t_dT +
                               SRAR_ac_DW.UnitDelay_DSTATE_mb);
    }

    /* End of Switch: '<S172>/Switch1' */

    /* Update for UnitDelay: '<S172>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_mb = rtb_Switch1_bs;

    /* End of Outputs for SubSystem: '<S149>/TurnOnDelayTime3' */

    /* Logic: '<S150>/Logical12' incorporates:
     *  Constant: '<S174>/Constant'
     *  Constant: '<S176>/Calib'
     *  RelationalOperator: '<S150>/Comparison7'
     *  RelationalOperator: '<S150>/Comparison8'
     */
    rtb_Logical12_i = ((rtb_TmpSignalConversionAtVeHPMR >= KeSRAR_t_InitEngRun) &&
                       (((uint32)Switch1_f) == CeSTRR_e_OvrrdEngOn));

    /* Outputs for Atomic SubSystem: '<S150>/TurnOnDelayTime4' */
    /* Outputs for Atomic SubSystem: '<S177>/EdgeRising' */
    /* Logic: '<S178>/AND' incorporates:
     *  Logic: '<S178>/OR1'
     *  UnitDelay: '<S178>/UnitDelay'
     */
    rtb_UnitDelay_eb = (rtb_Logical12_i && (!SRAR_ac_DW.UnitDelay_DSTATE_o0));

    /* Update for UnitDelay: '<S178>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_o0 = rtb_Logical12_i;

    /* End of Outputs for SubSystem: '<S177>/EdgeRising' */

    /* Switch: '<S177>/Switch1' incorporates:
     *  Logic: '<S177>/OR'
     *  Logic: '<S177>/OR1'
     */
    if ((!rtb_Logical12_i) || rtb_UnitDelay_eb)
    {
        /* Switch: '<S177>/Switch1' incorporates:
         *  Constant: '<S177>/ConstantValue1'
         */
        rtb_TmpSignalConversionAtVeHPMR = 0.0F;
    }
    else
    {
        /* Switch: '<S177>/Switch1' incorporates:
         *  Constant: '<S151>/Calib'
         *  Constant: '<S175>/Calib'
         *  MinMax: '<S177>/Minimum'
         *  Sum: '<S177>/Summation'
         *  UnitDelay: '<S177>/UnitDelay'
         */
        rtb_TmpSignalConversionAtVeHPMR = fminf(KeSRAR_t_EngStrtStpEngRun,
            KeSRAR_t_dT + SRAR_ac_DW.UnitDelay_DSTATE_nf);
    }

    /* End of Switch: '<S177>/Switch1' */

    /* Update for UnitDelay: '<S177>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_nf = rtb_TmpSignalConversionAtVeHPMR;

    /* End of Outputs for SubSystem: '<S150>/TurnOnDelayTime4' */

    /* Logic: '<S1209>/Logical13' incorporates:
     *  Constant: '<S1199>/Calib'
     *  Constant: '<S1200>/Calib'
     *  Constant: '<S1201>/Calib'
     *  Constant: '<S1202>/Calib'
     *  Constant: '<S1203>/Calib'
     *  Constant: '<S1204>/Calib'
     *  Constant: '<S1205>/Calib'
     *  Constant: '<S1206>/Calib'
     *  Constant: '<S1211>/ConstantValue'
     *  Constant: '<S1212>/ConstantValue'
     *  Constant: '<S1213>/ConstantValue'
     *  Constant: '<S1214>/ConstantValue'
     *  Constant: '<S1215>/ConstantValue'
     *  Constant: '<S1216>/ConstantValue'
     *  Constant: '<S1217>/ConstantValue'
     *  Constant: '<S1218>/ConstantValue'
     *  RelationalOperator: '<S1211>/Comparison'
     *  RelationalOperator: '<S1212>/Comparison'
     *  RelationalOperator: '<S1213>/Comparison'
     *  RelationalOperator: '<S1214>/Comparison'
     *  RelationalOperator: '<S1215>/Comparison'
     *  RelationalOperator: '<S1216>/Comparison'
     *  RelationalOperator: '<S1217>/Comparison'
     *  RelationalOperator: '<S1218>/Comparison'
     *  S-Function (sfix_bitop): '<S1211>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S1212>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S1213>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S1214>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S1215>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S1216>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S1217>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S1218>/BitwiseLogicalOperator6'
     */
    VeSRAC_b_NeutNotAllwd = (((((((((rtb_Switch1_n3 & KeSRAR_g_RA1_SelNeutAllwd)
        >= 1U) || ((rtb_Switch1_ck & KeSRAR_g_RA2_SelNeutAllwd) >= 1U)) ||
        ((rtb_Switch1_mr & KeSRAR_g_RA3_SelNeutAllwd) >= 1U)) ||
        ((rtb_Switch1_bk & KeSRAR_g_RA4_SelNeutAllwd) >= 1U)) || ((rtb_Switch1_c
        & KeSRAR_g_RA5_SelNeutAllwd) >= 1U)) || ((rtb_Switch1_fxq &
        KeSRAR_g_RA6_SelNeutAllwd) >= 1U)) || ((BitwiseLogicalOperator_b &
        KeSRAR_g_RA7_SelNeutAllwd) >= 1U)) || ((rtb_Switch1_anw &
        KeSRAR_g_RA8_SelNeutAllwd) >= 1U));

    /* Switch: '<S1195>/Switch1' incorporates:
     *  Constant: '<S1197>/Calib'
     */
    if (KeSRAR_b_NeutAllwd_OvrdEnbl)
    {
        /* Switch: '<S1195>/Switch1' incorporates:
         *  Constant: '<S1198>/Calib'
         */
        rtb_UnitDelay_eb = KeSRAR_b_NeutAllwd_OvrdVal;
    }
    else
    {
        /* Switch: '<S1195>/Switch1' incorporates:
         *  Constant: '<S1196>/Calib'
         *  Logic: '<S258>/AND1'
         *  Logic: '<S258>/Logical19'
         *  Logic: '<S258>/Logical20'
         */
        rtb_UnitDelay_eb = ((VeSRAC_b_NeutNotAllwd) &&
                            ((!rtb_TmpSignalConversionAtVeB_j2) ||
                             (KeSRAR_b_NeutAllwd_DebDisbl)));
    }

    /* End of Switch: '<S1195>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S258>/TurnOnDelayTime' */
    /* Outputs for Atomic SubSystem: '<S1210>/EdgeRising' */
    /* Logic: '<S1219>/AND' incorporates:
     *  Logic: '<S1219>/OR1'
     *  UnitDelay: '<S1219>/UnitDelay'
     */
    rtb_AND_iy = (rtb_UnitDelay_eb && (!SRAR_ac_DW.UnitDelay_DSTATE_dpv));

    /* Update for UnitDelay: '<S1219>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_dpv = rtb_UnitDelay_eb;

    /* End of Outputs for SubSystem: '<S1210>/EdgeRising' */

    /* Logic: '<S1210>/OR1' incorporates:
     *  Logic: '<S1210>/AND'
     */
    rtb_Switch_g_idx_1 = !rtb_UnitDelay_eb;

    /* Switch: '<S1210>/Switch1' incorporates:
     *  Logic: '<S1210>/OR'
     *  Logic: '<S1210>/OR1'
     */
    if (rtb_Switch_g_idx_1 || rtb_AND_iy)
    {
        /* Switch: '<S1210>/Switch1' incorporates:
         *  Constant: '<S1210>/ConstantValue1'
         */
        rtb_Switch1_nb = 0.0F;
    }
    else
    {
        /* Switch: '<S1210>/Switch1' incorporates:
         *  Constant: '<S1207>/Calib'
         *  Constant: '<S1208>/Calib'
         *  MinMax: '<S1210>/Minimum'
         *  Sum: '<S1210>/Summation'
         *  UnitDelay: '<S1210>/UnitDelay'
         */
        rtb_Switch1_nb = fminf(KeSRAR_t_NeutAllwdTurnONDelay, KeSRAR_t_dT +
                               SRAR_ac_DW.UnitDelay_DSTATE_dk);
    }

    /* End of Switch: '<S1210>/Switch1' */

    /* Update for UnitDelay: '<S1210>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_dk = rtb_Switch1_nb;

    /* Logic: '<S258>/Logical5' incorporates:
     *  Constant: '<S1207>/Calib'
     *  Logic: '<S1210>/AND'
     *  RelationalOperator: '<S1210>/GreaterThan'
     */
    rtb_AND_iy = (rtb_Switch_g_idx_1 || (rtb_Switch1_nb <
                   KeSRAR_t_NeutAllwdTurnONDelay));

    /* End of Outputs for SubSystem: '<S258>/TurnOnDelayTime' */

    /* Logic: '<S153>/Logical24' */
    rtb_Logical24_a = !rtb_AND_iy;

    /* Outputs for Atomic SubSystem: '<S153>/TurnOnDelayTime7' */
    /* Outputs for Atomic SubSystem: '<S185>/EdgeRising' */
    /* Logic: '<S186>/AND' incorporates:
     *  Logic: '<S186>/OR1'
     *  UnitDelay: '<S186>/UnitDelay'
     */
    rtb_UnitDelay_eb = (rtb_Logical24_a && (!SRAR_ac_DW.UnitDelay_DSTATE_ch));

    /* Update for UnitDelay: '<S186>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_ch = rtb_Logical24_a;

    /* End of Outputs for SubSystem: '<S185>/EdgeRising' */

    /* Switch: '<S185>/Switch1' incorporates:
     *  Logic: '<S185>/OR'
     *  Logic: '<S185>/OR1'
     */
    if ((!rtb_Logical24_a) || rtb_UnitDelay_eb)
    {
        /* Switch: '<S185>/Switch1' incorporates:
         *  Constant: '<S185>/ConstantValue1'
         */
        rtb_Switch1_nb = 0.0F;
    }
    else
    {
        /* Switch: '<S185>/Switch1' incorporates:
         *  Constant: '<S151>/Calib'
         *  Constant: '<S184>/Calib'
         *  MinMax: '<S185>/Minimum'
         *  Sum: '<S185>/Summation'
         *  UnitDelay: '<S185>/UnitDelay'
         */
        rtb_Switch1_nb = fminf(KeSRAR_t_NeutAllwd, KeSRAR_t_dT +
                               SRAR_ac_DW.UnitDelay_DSTATE_eq);
    }

    /* End of Switch: '<S185>/Switch1' */

    /* Update for UnitDelay: '<S185>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_eq = rtb_Switch1_nb;

    /* End of Outputs for SubSystem: '<S153>/TurnOnDelayTime7' */

    /* Switch: '<S470>/Switch1' incorporates:
     *  Constant: '<S472>/Calib'
     */
    if (KeSRAR_b_DrvAllwd_OvrdEnbl)
    {
        /* Switch: '<S470>/Switch1' incorporates:
         *  Constant: '<S473>/Calib'
         */
        rtb_UnitDelay_eb = KeSRAR_b_DrvAllwd_OvrdVal;
    }
    else
    {
        /* Switch: '<S470>/Switch1' incorporates:
         *  Constant: '<S471>/Calib'
         *  Constant: '<S474>/Calib'
         *  Constant: '<S475>/Calib'
         *  Constant: '<S476>/Calib'
         *  Constant: '<S477>/Calib'
         *  Constant: '<S478>/Calib'
         *  Constant: '<S479>/Calib'
         *  Constant: '<S480>/Calib'
         *  Constant: '<S481>/Calib'
         *  Constant: '<S486>/ConstantValue'
         *  Constant: '<S487>/ConstantValue'
         *  Constant: '<S488>/ConstantValue'
         *  Constant: '<S489>/ConstantValue'
         *  Constant: '<S490>/ConstantValue'
         *  Constant: '<S491>/ConstantValue'
         *  Constant: '<S492>/ConstantValue'
         *  Constant: '<S493>/ConstantValue'
         *  Logic: '<S246>/AND1'
         *  Logic: '<S246>/Logical19'
         *  Logic: '<S246>/Logical20'
         *  Logic: '<S484>/Logical13'
         *  RelationalOperator: '<S486>/Comparison'
         *  RelationalOperator: '<S487>/Comparison'
         *  RelationalOperator: '<S488>/Comparison'
         *  RelationalOperator: '<S489>/Comparison'
         *  RelationalOperator: '<S490>/Comparison'
         *  RelationalOperator: '<S491>/Comparison'
         *  RelationalOperator: '<S492>/Comparison'
         *  RelationalOperator: '<S493>/Comparison'
         *  S-Function (sfix_bitop): '<S486>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S487>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S488>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S489>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S490>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S491>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S492>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S493>/BitwiseLogicalOperator6'
         */
        rtb_UnitDelay_eb = ((((((((((rtb_Switch1_n3 & KeSRAR_g_RA1_SelDrvAllwd) >=
            1U) || ((rtb_Switch1_ck & KeSRAR_g_RA2_SelDrvAllwd) >= 1U)) ||
            ((rtb_Switch1_mr & KeSRAR_g_RA3_SelDrvAllwd) >= 1U)) ||
            ((rtb_Switch1_bk & KeSRAR_g_RA4_SelDrvAllwd) >= 1U)) ||
                                ((rtb_Switch1_c & KeSRAR_g_RA5_SelDrvAllwd) >=
            1U)) || ((rtb_Switch1_fxq & KeSRAR_g_RA6_SelDrvAllwd) >= 1U)) ||
                              ((BitwiseLogicalOperator_b &
                                KeSRAR_g_RA7_SelDrvAllwd) >= 1U)) ||
                             ((rtb_Switch1_anw & KeSRAR_g_RA8_SelDrvAllwd) >= 1U))
                            && ((!rtb_TmpSignalConversionAtVeB_j2) ||
                                (KeSRAR_b_DrvAllwd_DebDisbl)));
    }

    /* End of Switch: '<S470>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S246>/TurnOnDelayTime' */
    /* Outputs for Atomic SubSystem: '<S485>/EdgeRising' */
    /* Logic: '<S494>/AND' incorporates:
     *  Logic: '<S494>/OR1'
     *  UnitDelay: '<S494>/UnitDelay'
     */
    rtb_AND_ne = (rtb_UnitDelay_eb && (!SRAR_ac_DW.UnitDelay_DSTATE_p4));

    /* Update for UnitDelay: '<S494>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_p4 = rtb_UnitDelay_eb;

    /* End of Outputs for SubSystem: '<S485>/EdgeRising' */

    /* Logic: '<S485>/OR1' incorporates:
     *  Logic: '<S485>/AND'
     */
    rtb_Switch_g_idx_1 = !rtb_UnitDelay_eb;

    /* Switch: '<S485>/Switch1' incorporates:
     *  Logic: '<S485>/OR'
     *  Logic: '<S485>/OR1'
     */
    if (rtb_Switch_g_idx_1 || rtb_AND_ne)
    {
        /* Switch: '<S485>/Switch1' incorporates:
         *  Constant: '<S485>/ConstantValue1'
         */
        rtb_Switch1_du = 0.0F;
    }
    else
    {
        /* Switch: '<S485>/Switch1' incorporates:
         *  Constant: '<S482>/Calib'
         *  Constant: '<S483>/Calib'
         *  MinMax: '<S485>/Minimum'
         *  Sum: '<S485>/Summation'
         *  UnitDelay: '<S485>/UnitDelay'
         */
        rtb_Switch1_du = fminf(KeSRAR_t_DrvAllwdTurnONDelay, KeSRAR_t_dT +
                               SRAR_ac_DW.UnitDelay_DSTATE_c);
    }

    /* End of Switch: '<S485>/Switch1' */

    /* Update for UnitDelay: '<S485>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_c = rtb_Switch1_du;

    /* Logic: '<S246>/AND2' incorporates:
     *  Constant: '<S482>/Calib'
     *  Logic: '<S485>/AND'
     *  RelationalOperator: '<S485>/GreaterThan'
     */
    rtb_AND_ne = (rtb_Switch_g_idx_1 || (rtb_Switch1_du <
                   KeSRAR_t_DrvAllwdTurnONDelay));

    /* End of Outputs for SubSystem: '<S246>/TurnOnDelayTime' */

    /* Logic: '<S148>/Logical18' */
    rtb_Logical18_c = !rtb_AND_ne;

    /* Outputs for Atomic SubSystem: '<S148>/TurnOnDelayTime8' */
    /* Outputs for Atomic SubSystem: '<S166>/EdgeRising' */
    /* Logic: '<S169>/AND' incorporates:
     *  Logic: '<S169>/OR1'
     *  UnitDelay: '<S169>/UnitDelay'
     */
    rtb_UnitDelay_eb = (rtb_Logical18_c && (!SRAR_ac_DW.UnitDelay_DSTATE_gc));

    /* Update for UnitDelay: '<S169>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_gc = rtb_Logical18_c;

    /* End of Outputs for SubSystem: '<S166>/EdgeRising' */

    /* Switch: '<S166>/Switch1' incorporates:
     *  Logic: '<S166>/OR'
     *  Logic: '<S166>/OR1'
     */
    if ((!rtb_Logical18_c) || rtb_UnitDelay_eb)
    {
        /* Switch: '<S166>/Switch1' incorporates:
         *  Constant: '<S166>/ConstantValue1'
         */
        rtb_Switch1_du = 0.0F;
    }
    else
    {
        /* Switch: '<S166>/Switch1' incorporates:
         *  Constant: '<S151>/Calib'
         *  Constant: '<S165>/Calib'
         *  MinMax: '<S166>/Minimum'
         *  Sum: '<S166>/Summation'
         *  UnitDelay: '<S166>/UnitDelay'
         */
        rtb_Switch1_du = fminf(KeSRAR_t_DrvAllwd, KeSRAR_t_dT +
                               SRAR_ac_DW.UnitDelay_DSTATE_az);
    }

    /* End of Switch: '<S166>/Switch1' */

    /* Update for UnitDelay: '<S166>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_az = rtb_Switch1_du;

    /* End of Outputs for SubSystem: '<S148>/TurnOnDelayTime8' */

    /* Outputs for Atomic SubSystem: '<S157>/TurnOnDelayTime9' */
    /* Outputs for Atomic SubSystem: '<S200>/EdgeRising' */
    /* UnitDelay: '<S201>/UnitDelay' */
    rtb_UnitDelay_eb = SRAR_ac_DW.UnitDelay_DSTATE_b1x;

    /* Update for UnitDelay: '<S201>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_b1x = rtb_TmpSignalConversionAtVeIN_d;

    /* Switch: '<S200>/Switch1' incorporates:
     *  Logic: '<S200>/OR'
     *  Logic: '<S200>/OR1'
     *  Logic: '<S201>/AND'
     *  Logic: '<S201>/OR1'
     */
    if ((!rtb_TmpSignalConversionAtVeIN_d) || (rtb_TmpSignalConversionAtVeIN_d &&
         (!rtb_UnitDelay_eb)))
    {
        /* Switch: '<S200>/Switch1' incorporates:
         *  Constant: '<S200>/ConstantValue1'
         */
        rtb_Switch1_bgv = 0.0F;
    }
    else
    {
        /* Switch: '<S200>/Switch1' incorporates:
         *  Constant: '<S151>/Calib'
         *  Constant: '<S199>/Calib'
         *  MinMax: '<S200>/Minimum'
         *  Sum: '<S200>/Summation'
         *  UnitDelay: '<S200>/UnitDelay'
         */
        rtb_Switch1_bgv = fminf(KeSRAR_t_RemedialStop, KeSRAR_t_dT +
                                SRAR_ac_DW.UnitDelay_DSTATE_ap);
    }

    /* End of Switch: '<S200>/Switch1' */
    /* End of Outputs for SubSystem: '<S200>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S157>/TurnOnDelayTime9' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSTRR_b_ImmedStop' */
    (void)Rte_Read_VeSTRR_b_ImmedStop_Value(&tmpRead_c);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRAR_MedTEB'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Outputs for Atomic SubSystem: '<S157>/TurnOnDelayTime9' */
    /* Update for UnitDelay: '<S200>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_ap = rtb_Switch1_bgv;

    /* Outputs for Atomic SubSystem: '<S156>/TurnOnDelayTime' */
    /* Outputs for Atomic SubSystem: '<S154>/TurnOnDelayTime1' */
    /* Outputs for Atomic SubSystem: '<S155>/TurnOnDelayTime5' */
    /* Outputs for Atomic SubSystem: '<S152>/TurnOnDelayTime6' */
    /* Outputs for Atomic SubSystem: '<S146>/TurnOnDelayTime2' */
    /* Outputs for Atomic SubSystem: '<S149>/TurnOnDelayTime3' */
    /* Outputs for Atomic SubSystem: '<S150>/TurnOnDelayTime4' */
    /* Outputs for Atomic SubSystem: '<S153>/TurnOnDelayTime7' */
    /* Outputs for Atomic SubSystem: '<S148>/TurnOnDelayTime8' */
    /* Logic: '<S8>/Logical1' incorporates:
     *  Constant: '<S158>/Calib'
     *  Constant: '<S159>/Calib'
     *  Constant: '<S160>/Calib'
     *  Constant: '<S164>/Calib'
     *  Constant: '<S165>/Calib'
     *  Constant: '<S167>/Constant'
     *  Constant: '<S168>/Constant'
     *  Constant: '<S171>/Calib'
     *  Constant: '<S175>/Calib'
     *  Constant: '<S179>/Calib'
     *  Constant: '<S180>/Calib'
     *  Constant: '<S183>/Constant'
     *  Constant: '<S184>/Calib'
     *  Constant: '<S187>/Calib'
     *  Constant: '<S191>/Calib'
     *  Constant: '<S195>/Calib'
     *  Constant: '<S196>/Calib'
     *  Constant: '<S199>/Calib'
     *  Logic: '<S134>/AND'
     *  Logic: '<S146>/Logical5'
     *  Logic: '<S146>/Logical6'
     *  Logic: '<S148>/Logical20'
     *  Logic: '<S149>/Logical8'
     *  Logic: '<S150>/Logical10'
     *  Logic: '<S152>/Logical15'
     *  Logic: '<S152>/Logical2'
     *  Logic: '<S153>/Logical17'
     *  Logic: '<S153>/Logical19'
     *  Logic: '<S154>/Logical3'
     *  Logic: '<S154>/Logical4'
     *  Logic: '<S155>/Logical13'
     *  Logic: '<S155>/Logical14'
     *  Logic: '<S156>/Logical'
     *  Logic: '<S156>/Logical16'
     *  Logic: '<S157>/Logical22'
     *  Logic: '<S161>/AND'
     *  Logic: '<S163>/Logical1'
     *  Logic: '<S163>/Logical18'
     *  Logic: '<S163>/Logical22'
     *  Logic: '<S166>/AND'
     *  Logic: '<S172>/AND'
     *  Logic: '<S177>/AND'
     *  Logic: '<S181>/AND'
     *  Logic: '<S185>/AND'
     *  Logic: '<S189>/AND'
     *  Logic: '<S193>/AND'
     *  Logic: '<S197>/AND'
     *  Logic: '<S200>/AND'
     *  Logic: '<S8>/Logical7'
     *  Lookup_n-D: '<S188>/Vector'
     *  Lookup_n-D: '<S192>/Vector'
     *  RelationalOperator: '<S146>/Comparison3'
     *  RelationalOperator: '<S146>/Comparison9'
     *  RelationalOperator: '<S149>/Comparison4'
     *  RelationalOperator: '<S152>/Comparison11'
     *  RelationalOperator: '<S153>/Comparison13'
     *  RelationalOperator: '<S154>/Comparison2'
     *  RelationalOperator: '<S155>/Comparison10'
     *  RelationalOperator: '<S156>/Comparison1'
     *  RelationalOperator: '<S161>/GreaterThan'
     *  RelationalOperator: '<S163>/Comparison1'
     *  RelationalOperator: '<S163>/Comparison15'
     *  RelationalOperator: '<S166>/GreaterThan'
     *  RelationalOperator: '<S172>/GreaterThan'
     *  RelationalOperator: '<S177>/GreaterThan'
     *  RelationalOperator: '<S181>/GreaterThan'
     *  RelationalOperator: '<S185>/GreaterThan'
     *  RelationalOperator: '<S189>/GreaterThan'
     *  RelationalOperator: '<S193>/GreaterThan'
     *  RelationalOperator: '<S197>/GreaterThan'
     *  RelationalOperator: '<S200>/GreaterThan'
     *  SignalConversion generated from: '<S2>/VeVSDR_n_PrimNoSgndFltrd'
     */
    VeSRAR_b_FltShtDwnCmnd = (((((((((((((rtb_AND_gv &&
        (rtb_TmpSignalConversionAtVePMDR >= KeSRAR_t_RegenBrkInhb)) &&
        (!VeSRAR_b_FltShtDwnCmnd)) && (rtb_Switch1_ml >=
        KeSRAR_M_RegenBrkAxleTrqReq)) || ((rtb_UnitDelay_fh &&
        (rtb_TmpSignalConversionAtVeTFTR >= KeSRAR_t_ReducedPerf)) &&
        (rtb_Switch1_n4 > look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeVSDR,
        ((const float32 *)&(KxSRAR_M_ReducedPerfThrsh[0])), ((const float32 *)
        &(KtSRAR_M_ReducedPerfThrsh[0])), 6U)))) ||
        ((rtb_TmpSignalConversionAtVeENGR && (rtb_Switch1_dn >=
        KeSRAR_t_ReducedPerf2)) && (rtb_Switch1_n4 > look1_iflf_binlcapw
        (rtb_TmpSignalConversionAtVeVSDR, ((const float32 *)
        &(KxSRAR_M_ReducedPerfThrsh2[0])), ((const float32 *)
        &(KtSRAR_M_ReducedPerfThrsh2[0])), 6U)))) ||
        ((rtb_TmpSignalConversionAtVeAD_o && (rtb_Switch1_nx >=
        KeSRAR_t_limitInputTrq)) && (rtb_Switch1_eo > KeSRAR_M_RedInputTrqThresh)))
        || (((rtb_TmpSignalConversionAtVePLTR && (rtb_Switch1_io >=
        KeSRAR_t_CreepTorqMode)) && (rtb_Switch1_n4 > KeSRAR_M_CreepTorqThrsh)) &&
            (rtb_TmpSignalConversionAtVeHCCR >= KeSRAR_n_CreepTrqThrsh))) ||
        ((rtb_Comparison6_m && (rtb_Switch1_bs >= KeSRAR_t_EngStrtStpEngShtDwn))
         && rtb_TmpSignalConversionAtVeADIR)) || ((rtb_Logical12_i &&
        (rtb_TmpSignalConversionAtVeHPMR >= KeSRAR_t_EngStrtStpEngRun)) &&
        rtb_VeSRAR_b_MtrB_InvrtrFault_g)) || rtb_Logical8_dq) ||
        ((rtb_Logical24_a && (rtb_Switch1_nb >= KeSRAR_t_NeutAllwd)) &&
         (((uint32)rtb_TmpSignalConversionAtVeTRGR) != CeTRGR_e_TransRangePark)))
        || (((rtb_Logical18_c && (rtb_Switch1_du >= KeSRAR_t_DrvAllwd)) &&
             ((((uint32)rtb_TmpSignalConversionAtVeTRGR) !=
               CeTRGR_e_TransRangeNeutral) && (((uint32)
        rtb_TmpSignalConversionAtVeTRGR) != CeTRGR_e_TransRangePark))) &&
            (KeSRAR_b_EnblDrvMntr))) || ((rtb_TmpSignalConversionAtVeIN_d &&
        (rtb_Switch1_bgv >= KeSRAR_t_RemedialStop)) &&
        rtb_TmpSignalConversionAtVeADIR));

    /* End of Outputs for SubSystem: '<S148>/TurnOnDelayTime8' */
    /* End of Outputs for SubSystem: '<S153>/TurnOnDelayTime7' */
    /* End of Outputs for SubSystem: '<S150>/TurnOnDelayTime4' */
    /* End of Outputs for SubSystem: '<S149>/TurnOnDelayTime3' */
    /* End of Outputs for SubSystem: '<S146>/TurnOnDelayTime2' */
    /* End of Outputs for SubSystem: '<S152>/TurnOnDelayTime6' */
    /* End of Outputs for SubSystem: '<S155>/TurnOnDelayTime5' */
    /* End of Outputs for SubSystem: '<S154>/TurnOnDelayTime1' */
    /* End of Outputs for SubSystem: '<S156>/TurnOnDelayTime' */
    /* End of Outputs for SubSystem: '<S157>/TurnOnDelayTime9' */

    /* Switch: '<S204>/Switch1' incorporates:
     *  Constant: '<S9>/Constant11'
     *  Constant: '<S9>/Constant2'
     *  Logic: '<S134>/AND'
     *  Logic: '<S9>/Logical1'
     */
    if ((rtb_UnitDelay_fh || rtb_TmpSignalConversionAtVeENGR) ||
            rtb_TmpSignalConversionAtVeAD_o)
    {
        rtb_VeSRAR_d_RABit_Set = 2U;
    }
    else
    {
        rtb_VeSRAR_d_RABit_Set = 0U;
    }

    /* End of Switch: '<S204>/Switch1' */

    /* Switch: '<S209>/Switch1' incorporates:
     *  Constant: '<S9>/Constant12'
     *  Constant: '<S9>/Constant3'
     */
    if (rtb_TmpSignalConversionAtVePLTR)
    {
        VeSRAR_y_RemedialActionHist = 4U;
    }
    else
    {
        VeSRAR_y_RemedialActionHist = 0U;
    }

    /* End of Switch: '<S209>/Switch1' */

    /* Switch: '<S220>/Switch1' incorporates:
     *  Constant: '<S9>/Constant13'
     *  Constant: '<S9>/Constant4'
     */
    if (rtb_OR1_ln)
    {
        Switch1 = 8U;
    }
    else
    {
        Switch1 = 0U;
    }

    /* End of Switch: '<S220>/Switch1' */

    /* Switch: '<S224>/Switch1' incorporates:
     *  Constant: '<S9>/Constant14'
     *  Constant: '<S9>/Constant5'
     */
    if (rtb_TmpSignalConversionAtVeIN_d)
    {
        Switch1_g = 16U;
    }
    else
    {
        Switch1_g = 0U;
    }

    /* End of Switch: '<S224>/Switch1' */

    /* Switch: '<S225>/Switch1' incorporates:
     *  Constant: '<S9>/Constant15'
     *  Constant: '<S9>/Constant6'
     */
    if (rtb_Logical11)
    {
        rtb_Switch1_py = 32U;
    }
    else
    {
        rtb_Switch1_py = 0U;
    }

    /* End of Switch: '<S225>/Switch1' */

    /* Switch: '<S226>/Switch1' incorporates:
     *  Constant: '<S9>/Constant16'
     *  Constant: '<S9>/Constant7'
     *  Logic: '<S1453>/AND4'
     *  Logic: '<S9>/Logical7'
     */
    if (rtb_Comparison4_lp && AND_o)
    {
        rtb_Comparison4_h = 256U;
    }
    else
    {
        rtb_Comparison4_h = 0U;
    }

    /* End of Switch: '<S226>/Switch1' */

    /* Switch: '<S227>/Switch1' incorporates:
     *  Constant: '<S9>/Constant17'
     *  Constant: '<S9>/Constant8'
     *  Logic: '<S1453>/AND4'
     *  Logic: '<S9>/Logical8'
     */
    if (rtb_Comparison4_lp && rtb_Logical1_aq)
    {
        rtb_Comparison4_h_0 = 64U;
    }
    else
    {
        rtb_Comparison4_h_0 = 0U;
    }

    /* End of Switch: '<S227>/Switch1' */

    /* Switch: '<S228>/Switch1' incorporates:
     *  Constant: '<S9>/Constant18'
     *  Constant: '<S9>/Constant9'
     *  Logic: '<S1453>/AND4'
     *  Logic: '<S9>/Logical9'
     */
    if (rtb_Comparison4_lp && VeSRAR_b_FltShtDwnCmnd)
    {
        rtb_Comparison4_h_1 = 128U;
    }
    else
    {
        rtb_Comparison4_h_1 = 0U;
    }

    /* End of Switch: '<S228>/Switch1' */

    /* Switch: '<S229>/Switch1' incorporates:
     *  Constant: '<S231>/Calib'
     *  Constant: '<S9>/Constant19'
     *  Constant: '<S9>/Constant20'
     *  Logic: '<S9>/Logical5'
     */
    if ((KeSRAR_b_ImmedStop_HistoryInfoEnbl) && tmpRead_c)
    {
        tmp = 512U;
    }
    else
    {
        tmp = 0U;
    }

    /* End of Switch: '<S229>/Switch1' */

    /* Switch: '<S205>/Switch1' incorporates:
     *  Constant: '<S232>/Calib'
     *  Constant: '<S9>/Constant21'
     *  Constant: '<S9>/Constant22'
     *  Logic: '<S9>/Logical6'
     */
    if ((KeSRAR_b_MtrSystemActive_HistoryInfoEnbl) &&
            rtb_TmpSignalConversionAtVeETQR)
    {
        tmp_0 = 1024U;
    }
    else
    {
        tmp_0 = 0U;
    }

    /* End of Switch: '<S205>/Switch1' */

    /* S-Function (sfix_bitop): '<S9>/BitwiseLogicalOperator' incorporates:
     *  Switch: '<S203>/Switch1'
     */
    rtb_VeSRAR_d_RABit_Set = (uint16)(((((((((((rtb_AND_gv ? ((uint16)1) :
        ((uint16)0)) | rtb_VeSRAR_d_RABit_Set) | VeSRAR_y_RemedialActionHist) |
        Switch1) | Switch1_g) | rtb_Switch1_py) | rtb_Comparison4_h) |
        rtb_Comparison4_h_0) | rtb_Comparison4_h_1) | tmp) | tmp_0);

    /* Switch: '<S9>/Switch1' incorporates:
     *  Constant: '<S233>/Calib'
     *  Logic: '<S9>/Logical4'
     */
    if ((KeSRAR_b_PostCodeClrDiagDsbEnbl) && rtb_TmpSignalConversionAtVeDFIR)
    {
        /* Switch: '<S9>/Switch1' incorporates:
         *  Constant: '<S9>/ConstantValue1'
         */
        VeSRAR_y_RemedialActionHist = 0U;
    }
    else
    {
        /* Switch: '<S9>/Switch1' incorporates:
         *  DataStoreRead: '<S9>/DataStoreRead'
         *  S-Function (sfix_bitop): '<S9>/BitwiseLogicalOperator1'
         */
        VeSRAR_y_RemedialActionHist = (uint16)
            (SRAR_ac_DW.NeSRAR_d_RemedialActionHist_DS | rtb_VeSRAR_d_RABit_Set);
    }

    /* End of Switch: '<S9>/Switch1' */

    /* DataStoreWrite: '<S9>/DataStoreWrite' */
    SRAR_ac_DW.NeSRAR_d_RemedialActionHist_DS = VeSRAR_y_RemedialActionHist;

    /* Switch: '<S207>/Switch1' incorporates:
     *  Constant: '<S9>/Constant37'
     *  Constant: '<S9>/Constant38'
     */
    if (rtb_AND_of)
    {
        Switch1 = 2U;
    }
    else
    {
        Switch1 = 0U;
    }

    /* End of Switch: '<S207>/Switch1' */

    /* Switch: '<S210>/Switch1' incorporates:
     *  Constant: '<S9>/Constant39'
     *  Constant: '<S9>/Constant40'
     */
    if (rtb_OR1_kc)
    {
        Switch1_g = 4U;
    }
    else
    {
        Switch1_g = 0U;
    }

    /* End of Switch: '<S210>/Switch1' */

    /* Switch: '<S211>/Switch1' incorporates:
     *  Constant: '<S9>/Constant41'
     *  Constant: '<S9>/Constant42'
     */
    if (rtb_OR1_mq)
    {
        rtb_Switch1_py = 8U;
    }
    else
    {
        rtb_Switch1_py = 0U;
    }

    /* End of Switch: '<S211>/Switch1' */

    /* Switch: '<S212>/Switch1' incorporates:
     *  Constant: '<S9>/Constant43'
     *  Constant: '<S9>/Constant46'
     */
    if (rtb_LogicalOperator_hj)
    {
        rtb_Comparison4_h = 16U;
    }
    else
    {
        rtb_Comparison4_h = 0U;
    }

    /* End of Switch: '<S212>/Switch1' */

    /* Switch: '<S213>/Switch1' incorporates:
     *  Constant: '<S9>/Constant44'
     *  Constant: '<S9>/Constant47'
     */
    if (rtb_LogicalOperator_pu)
    {
        rtb_Comparison4_h_0 = 32U;
    }
    else
    {
        rtb_Comparison4_h_0 = 0U;
    }

    /* End of Switch: '<S213>/Switch1' */

    /* Switch: '<S214>/Switch1' incorporates:
     *  Constant: '<S9>/Constant49'
     *  Constant: '<S9>/Constant50'
     */
    if (VeSRAR_b_FltShtDwnCmnd)
    {
        rtb_Comparison4_h_1 = 64U;
    }
    else
    {
        rtb_Comparison4_h_1 = 0U;
    }

    /* End of Switch: '<S214>/Switch1' */

    /* S-Function (sfix_bitop): '<S9>/BitwiseLogicalOperator2' incorporates:
     *  DataStoreWrite: '<S9>/DataStoreWrite1'
     *  Switch: '<S206>/Switch1'
     */
    SRAR_ac_DW.NeSRAR_d_ReasonStopCharging_DS = (uint16)(((((((rtb_Logical7_n4 ?
        ((uint16)1) : ((uint16)0)) | Switch1) | Switch1_g) | rtb_Switch1_py) |
        rtb_Comparison4_h) | rtb_Comparison4_h_0) | rtb_Comparison4_h_1);

    /* Switch: '<S230>/Switch1' incorporates:
     *  Switch: '<S230>/Switch2'
     *  Switch: '<S230>/Switch3'
     *  Switch: '<S230>/Switch4'
     *  Switch: '<S230>/Switch5'
     *  Switch: '<S230>/Switch6'
     *  Switch: '<S230>/Switch7'
     *  Switch: '<S230>/Switch8'
     */
    if (rtb_Logical7_n4)
    {
        /* Switch: '<S230>/Switch1' incorporates:
         *  Constant: '<S230>/ConstantValue'
         */
        rtb_TmpSignalConversionAtVeT_hz = 1;
    }
    else if (rtb_AND_of)
    {
        /* Switch: '<S230>/Switch2' incorporates:
         *  Constant: '<S230>/ConstantValue1'
         *  Switch: '<S230>/Switch1'
         */
        rtb_TmpSignalConversionAtVeT_hz = 2;
    }
    else if (rtb_OR1_kc)
    {
        /* Switch: '<S230>/Switch3' incorporates:
         *  Constant: '<S230>/ConstantValue2'
         *  Switch: '<S230>/Switch1'
         *  Switch: '<S230>/Switch2'
         */
        rtb_TmpSignalConversionAtVeT_hz = 3;
    }
    else if (rtb_OR1_mq)
    {
        /* Switch: '<S230>/Switch5' incorporates:
         *  Constant: '<S230>/ConstantValue3'
         *  Switch: '<S230>/Switch1'
         *  Switch: '<S230>/Switch2'
         *  Switch: '<S230>/Switch3'
         */
        rtb_TmpSignalConversionAtVeT_hz = 4;
    }
    else if (rtb_LogicalOperator_hj)
    {
        /* Switch: '<S230>/Switch6' incorporates:
         *  Constant: '<S230>/ConstantValue4'
         *  Switch: '<S230>/Switch1'
         *  Switch: '<S230>/Switch2'
         *  Switch: '<S230>/Switch3'
         *  Switch: '<S230>/Switch5'
         */
        rtb_TmpSignalConversionAtVeT_hz = 5;
    }
    else if (rtb_LogicalOperator_pu)
    {
        /* Switch: '<S230>/Switch4' incorporates:
         *  Constant: '<S230>/ConstantValue5'
         *  Switch: '<S230>/Switch1'
         *  Switch: '<S230>/Switch2'
         *  Switch: '<S230>/Switch3'
         *  Switch: '<S230>/Switch5'
         *  Switch: '<S230>/Switch6'
         */
        rtb_TmpSignalConversionAtVeT_hz = 6;
    }
    else if (VeSRAR_b_FltShtDwnCmnd)
    {
        /* Switch: '<S230>/Switch7' incorporates:
         *  Constant: '<S230>/ConstantValue6'
         *  Switch: '<S230>/Switch1'
         *  Switch: '<S230>/Switch2'
         *  Switch: '<S230>/Switch3'
         *  Switch: '<S230>/Switch4'
         *  Switch: '<S230>/Switch5'
         *  Switch: '<S230>/Switch6'
         */
        rtb_TmpSignalConversionAtVeT_hz = 7;
    }
    else if (rtb_VeSRAR_b_HVOverVoltFailur_b)
    {
        /* Switch: '<S230>/Switch8' incorporates:
         *  Constant: '<S230>/ConstantValue7'
         *  Switch: '<S230>/Switch1'
         *  Switch: '<S230>/Switch2'
         *  Switch: '<S230>/Switch3'
         *  Switch: '<S230>/Switch4'
         *  Switch: '<S230>/Switch5'
         *  Switch: '<S230>/Switch6'
         *  Switch: '<S230>/Switch7'
         */
        rtb_TmpSignalConversionAtVeT_hz = 8;
    }
    else
    {
        /* Switch: '<S230>/Switch1' incorporates:
         *  Switch: '<S230>/Switch2'
         *  Switch: '<S230>/Switch3'
         *  Switch: '<S230>/Switch4'
         *  Switch: '<S230>/Switch5'
         *  Switch: '<S230>/Switch6'
         *  Switch: '<S230>/Switch7'
         *  Switch: '<S230>/Switch8'
         */
        rtb_TmpSignalConversionAtVeT_hz = 0;
    }

    /* End of Switch: '<S230>/Switch1' */

    /* UnitDelay: '<S717>/UnitDelay' incorporates:
     *  Constant: '<S1468>/Calib'
     *  Logic: '<S1367>/Logical2'
     */
    rtb_UnitDelay_fh = ((KeSRAR_b_PostCodeClrDiagDsbEnbl) &&
                        rtb_TmpSignalConversionAtVeDFIR);

    /* Switch: '<S2177>/Switch1' incorporates:
     *  Constant: '<S1381>/ConstantValue6'
     *  Constant: '<S1382>/ConstantValue2'
     *  Constant: '<S1383>/ConstantValue4'
     *  Constant: '<S1384>/ConstantValue8'
     *  Constant: '<S1385>/ConstantValue10'
     *  Constant: '<S1386>/ConstantValue11'
     *  Constant: '<S1387>/ConstantValue11'
     *  Constant: '<S1388>/ConstantValue11'
     *  DataStoreRead: '<S1381>/DataStoreRead'
     *  DataStoreRead: '<S1382>/DataStoreRead1'
     *  DataStoreRead: '<S1383>/DataStoreRead2'
     *  DataStoreRead: '<S1384>/DataStoreRead3'
     *  DataStoreRead: '<S1385>/DataStoreRead4'
     *  DataStoreRead: '<S1386>/DataStoreRead5'
     *  DataStoreRead: '<S1387>/DataStoreRead5'
     *  DataStoreRead: '<S1388>/DataStoreRead'
     *  DataStoreWrite: '<S1381>/DataStoreWrite'
     *  DataStoreWrite: '<S1382>/DataStoreWrite1'
     *  DataStoreWrite: '<S1383>/DataStoreWrite2'
     *  DataStoreWrite: '<S1384>/DataStoreWrite3'
     *  DataStoreWrite: '<S1385>/DataStoreWrite4'
     *  DataStoreWrite: '<S1386>/DataStoreWrite5'
     *  DataStoreWrite: '<S1387>/DataStoreWrite5'
     *  DataStoreWrite: '<S1388>/DataStoreWrite'
     *  S-Function (sfix_bitop): '<S1381>/BitwiseLogicalOperator'
     *  S-Function (sfix_bitop): '<S1382>/BitwiseLogicalOperator1'
     *  S-Function (sfix_bitop): '<S1383>/BitwiseLogicalOperator2'
     *  S-Function (sfix_bitop): '<S1384>/BitwiseLogicalOperator3'
     *  S-Function (sfix_bitop): '<S1385>/BitwiseLogicalOperator1'
     *  S-Function (sfix_bitop): '<S1386>/BitwiseLogicalOperator1'
     *  S-Function (sfix_bitop): '<S1387>/BitwiseLogicalOperator1'
     *  S-Function (sfix_bitop): '<S1388>/BitwiseLogicalOperator1'
     *  Switch: '<S2176>/Switch1'
     *  Switch: '<S2179>/Switch1'
     *  Switch: '<S2181>/Switch1'
     *  Switch: '<S2183>/Switch1'
     *  Switch: '<S2185>/Switch1'
     *  Switch: '<S2187>/Switch1'
     *  Switch: '<S2189>/Switch1'
     *  Switch: '<S2191>/Switch1'
     */
    if (rtb_UnitDelay_fh)
    {
        SRAR_ac_DW.NeSRAR_g_InputHist_1_DS = 0U;
        SRAR_ac_DW.NeSRAR_g_InputHist_2_DS = 0U;
        SRAR_ac_DW.NeSRAR_g_InputHist_3_DS = 0U;
        SRAR_ac_DW.NeSRAR_g_InputHist_4_DS = 0U;
        SRAR_ac_DW.NeSRAR_g_InputHist_5_DS = 0U;
        SRAR_ac_DW.NeSRAR_g_InputHist_6_DS = 0U;
        SRAR_ac_DW.NeSRAR_g_InputHist_7_DS = 0U;
        SRAR_ac_DW.NeSRAR_g_InputHist_8_DS = 0U;
    }
    else
    {
        if (rtb_Comparison4_lp)
        {
            /* Switch: '<S2176>/Switch1' */
            rtb_VeSRAR_b_TCMLmpFlt2_tmp = rtb_Switch1_n3;
        }
        else
        {
            /* Switch: '<S2176>/Switch1' incorporates:
             *  Constant: '<S1381>/ConstantValue5'
             */
            rtb_VeSRAR_b_TCMLmpFlt2_tmp = 0U;
        }

        SRAR_ac_DW.NeSRAR_g_InputHist_1_DS |= rtb_VeSRAR_b_TCMLmpFlt2_tmp;

        /* Switch: '<S2178>/Switch1' incorporates:
         *  Constant: '<S1382>/ConstantValue1'
         *  DataStoreRead: '<S1381>/DataStoreRead'
         *  DataStoreWrite: '<S1381>/DataStoreWrite'
         *  S-Function (sfix_bitop): '<S1381>/BitwiseLogicalOperator'
         */
        if (rtb_Comparison4_lp)
        {
            rtb_VeSRAR_b_TCMLmpFlt2_tmp = rtb_Switch1_ck;
        }
        else
        {
            rtb_VeSRAR_b_TCMLmpFlt2_tmp = 0U;
        }

        /* End of Switch: '<S2178>/Switch1' */
        SRAR_ac_DW.NeSRAR_g_InputHist_2_DS |= rtb_VeSRAR_b_TCMLmpFlt2_tmp;

        /* Switch: '<S2180>/Switch1' incorporates:
         *  Constant: '<S1383>/ConstantValue3'
         *  DataStoreRead: '<S1382>/DataStoreRead1'
         *  DataStoreWrite: '<S1382>/DataStoreWrite1'
         *  S-Function (sfix_bitop): '<S1382>/BitwiseLogicalOperator1'
         */
        if (rtb_Comparison4_lp)
        {
            rtb_VeSRAR_b_TCMLmpFlt2_tmp = rtb_Switch1_mr;
        }
        else
        {
            rtb_VeSRAR_b_TCMLmpFlt2_tmp = 0U;
        }

        /* End of Switch: '<S2180>/Switch1' */
        SRAR_ac_DW.NeSRAR_g_InputHist_3_DS |= rtb_VeSRAR_b_TCMLmpFlt2_tmp;

        /* Switch: '<S2182>/Switch1' incorporates:
         *  Constant: '<S1384>/ConstantValue7'
         *  DataStoreRead: '<S1383>/DataStoreRead2'
         *  DataStoreWrite: '<S1383>/DataStoreWrite2'
         *  S-Function (sfix_bitop): '<S1383>/BitwiseLogicalOperator2'
         */
        if (rtb_Comparison4_lp)
        {
            rtb_VeSRAR_b_TCMLmpFlt2_tmp = rtb_Switch1_bk;
        }
        else
        {
            rtb_VeSRAR_b_TCMLmpFlt2_tmp = 0U;
        }

        /* End of Switch: '<S2182>/Switch1' */
        SRAR_ac_DW.NeSRAR_g_InputHist_4_DS |= rtb_VeSRAR_b_TCMLmpFlt2_tmp;

        /* Switch: '<S2184>/Switch1' incorporates:
         *  Constant: '<S1385>/ConstantValue9'
         *  DataStoreRead: '<S1384>/DataStoreRead3'
         *  DataStoreWrite: '<S1384>/DataStoreWrite3'
         *  S-Function (sfix_bitop): '<S1384>/BitwiseLogicalOperator3'
         */
        if (rtb_Comparison4_lp)
        {
            rtb_VeSRAR_b_TCMLmpFlt2_tmp = rtb_Switch1_c;
        }
        else
        {
            rtb_VeSRAR_b_TCMLmpFlt2_tmp = 0U;
        }

        /* End of Switch: '<S2184>/Switch1' */
        SRAR_ac_DW.NeSRAR_g_InputHist_5_DS |= rtb_VeSRAR_b_TCMLmpFlt2_tmp;

        /* Switch: '<S2186>/Switch1' incorporates:
         *  Constant: '<S1386>/ConstantValue12'
         *  DataStoreRead: '<S1385>/DataStoreRead4'
         *  DataStoreWrite: '<S1385>/DataStoreWrite4'
         *  S-Function (sfix_bitop): '<S1385>/BitwiseLogicalOperator1'
         */
        if (rtb_Comparison4_lp)
        {
            rtb_VeSRAR_b_TCMLmpFlt2_tmp = rtb_Switch1_fxq;
        }
        else
        {
            rtb_VeSRAR_b_TCMLmpFlt2_tmp = 0U;
        }

        /* End of Switch: '<S2186>/Switch1' */
        SRAR_ac_DW.NeSRAR_g_InputHist_6_DS |= rtb_VeSRAR_b_TCMLmpFlt2_tmp;

        /* Switch: '<S2188>/Switch1' incorporates:
         *  Constant: '<S1387>/ConstantValue12'
         *  DataStoreRead: '<S1386>/DataStoreRead5'
         *  DataStoreWrite: '<S1386>/DataStoreWrite5'
         *  S-Function (sfix_bitop): '<S1386>/BitwiseLogicalOperator1'
         */
        if (rtb_Comparison4_lp)
        {
            rtb_VeSRAR_b_TCMLmpFlt2_tmp = BitwiseLogicalOperator_b;
        }
        else
        {
            rtb_VeSRAR_b_TCMLmpFlt2_tmp = 0U;
        }

        /* End of Switch: '<S2188>/Switch1' */
        SRAR_ac_DW.NeSRAR_g_InputHist_7_DS |= rtb_VeSRAR_b_TCMLmpFlt2_tmp;

        /* Switch: '<S2190>/Switch1' incorporates:
         *  Constant: '<S1388>/ConstantValue12'
         *  DataStoreRead: '<S1387>/DataStoreRead5'
         *  DataStoreWrite: '<S1387>/DataStoreWrite5'
         *  S-Function (sfix_bitop): '<S1387>/BitwiseLogicalOperator1'
         */
        if (rtb_Comparison4_lp)
        {
            rtb_VeSRAR_b_TCMLmpFlt2_tmp = rtb_Switch1_anw;
        }
        else
        {
            rtb_VeSRAR_b_TCMLmpFlt2_tmp = 0U;
        }

        /* End of Switch: '<S2190>/Switch1' */
        SRAR_ac_DW.NeSRAR_g_InputHist_8_DS |= rtb_VeSRAR_b_TCMLmpFlt2_tmp;
    }

    /* End of Switch: '<S2177>/Switch1' */

    /* Logic: '<S1443>/LogicalOperator' incorporates:
     *  Constant: '<S1443>/Constant1'
     *  Constant: '<S1443>/Constant2'
     *  DataStoreRead: '<S1443>/StatusByte_InvData_RHSC2'
     *  RelationalOperator: '<S1443>/RelationalOperator1'
     *  RelationalOperator: '<S1443>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S1443>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S1443>/BitwiseOperator2'
     */
    rtb_LogicalOperator_pu = (((((sint32)SRAR_ac_DW.StatusByte_InvData_RHSC2) &
        1) > 0) && ((((uint32)SRAR_ac_DW.StatusByte_InvData_RHSC2) & 64U) == 0U));

    /* Switch: '<S1447>/Switch1' incorporates:
     *  Switch: '<S1446>/Switch1'
     */
    if (rtb_Switch1_ajp)
    {
        /* Switch: '<S1447>/Switch1' incorporates:
         *  Constant: '<S1442>/Constant1'
         *  Constant: '<S1442>/Constant2'
         *  Constant: '<S1444>/Constant1'
         *  Constant: '<S1444>/Constant2'
         *  Constant: '<S1449>/Calib'
         *  DataStoreRead: '<S1442>/StatusByte_InvData_CADM'
         *  DataStoreRead: '<S1444>/StatusByte_LosComm_CADM'
         *  Logic: '<S1366>/Logical18'
         *  Logic: '<S1366>/Logical5'
         *  Logic: '<S1442>/LogicalOperator'
         *  Logic: '<S1444>/LogicalOperator'
         *  RelationalOperator: '<S1442>/RelationalOperator1'
         *  RelationalOperator: '<S1442>/RelationalOperator2'
         *  RelationalOperator: '<S1444>/RelationalOperator1'
         *  RelationalOperator: '<S1444>/RelationalOperator2'
         *  S-Function (sfix_bitop): '<S1442>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S1442>/BitwiseOperator2'
         *  S-Function (sfix_bitop): '<S1444>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S1444>/BitwiseOperator2'
         */
        VeSRAC_b_HCPLoc_CANB_CADM_ADCAM = (((((((sint32)
            SRAR_ac_DW.StatusByte_InvData_CADM) & 1) > 0) && ((((uint32)
            SRAR_ac_DW.StatusByte_InvData_CADM) & 64U) == 0U)) || (((((sint32)
            SRAR_ac_DW.StatusByte_LosComm_CADM) & 1) > 0) && ((((uint32)
            SRAR_ac_DW.StatusByte_LosComm_CADM) & 64U) == 0U))) ||
            (rtb_LogicalOperator_pu && (KeSRAR_b_CANB_CADM_ADCAM_SNA_Disable)));

        /* Logic: '<S1445>/LogicalOperator' incorporates:
         *  Constant: '<S1445>/Constant1'
         *  Constant: '<S1445>/Constant2'
         *  DataStoreRead: '<S1445>/StatusByte_LostCommRHSC2'
         *  RelationalOperator: '<S1445>/RelationalOperator1'
         *  RelationalOperator: '<S1445>/RelationalOperator2'
         *  S-Function (sfix_bitop): '<S1445>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S1445>/BitwiseOperator2'
         */
        rtb_LogicalOperator_hj = (((((sint32)SRAR_ac_DW.StatusByte_LostCommRHSC2)
            & 1) > 0) && ((((uint32)SRAR_ac_DW.StatusByte_LostCommRHSC2) & 64U) ==
                          0U));

        /* Switch: '<S1446>/Switch1' incorporates:
         *  Constant: '<S1448>/Calib'
         *  Logic: '<S1366>/Logical1'
         *  Logic: '<S1366>/Logical2'
         */
        VeSRAC_b_HCPLoc_CANA_CADM_ADCAM =
            ((((KeSRAR_b_CANA_CADM_ADCAM_SNA_Disable) && rtb_LogicalOperator_pu)
              || rtb_LogicalOperator_hj) || rtb_LogicalOperator_hj);
    }
    else
    {
        /* Switch: '<S1447>/Switch1' incorporates:
         *  Constant: '<S1366>/Constant6'
         */
        VeSRAC_b_HCPLoc_CANB_CADM_ADCAM = false;

        /* Switch: '<S1446>/Switch1' incorporates:
         *  Constant: '<S1366>/Constant1'
         */
        VeSRAC_b_HCPLoc_CANA_CADM_ADCAM = false;
    }

    /* End of Switch: '<S1447>/Switch1' */

    /* Logic: '<S2113>/Logical8' incorporates:
     *  Constant: '<S2138>/Constant1'
     *  Constant: '<S2138>/Constant2'
     *  Constant: '<S2140>/Constant1'
     *  Constant: '<S2140>/Constant2'
     *  Constant: '<S2142>/Constant1'
     *  Constant: '<S2142>/Constant2'
     *  DataStoreRead: '<S2140>/StatusByte_LostCommPwrtrn_OilPmp1'
     *  DataStoreRead: '<S2142>/StatusByte_PwrtrnOilPmp1OvrSpd'
     *  Logic: '<S2113>/Logical5'
     *  Logic: '<S2138>/LogicalOperator'
     *  Logic: '<S2140>/LogicalOperator'
     *  Logic: '<S2142>/LogicalOperator'
     *  RelationalOperator: '<S2138>/RelationalOperator1'
     *  RelationalOperator: '<S2138>/RelationalOperator2'
     *  RelationalOperator: '<S2140>/RelationalOperator1'
     *  RelationalOperator: '<S2140>/RelationalOperator2'
     *  RelationalOperator: '<S2142>/RelationalOperator1'
     *  RelationalOperator: '<S2142>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S2140>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S2140>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S2142>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S2142>/BitwiseOperator2'
     */
    rtb_Logical8_dq = (((((((sint32)SRAR_ac_DW.StatusByte_PwrtrnOilPmp1OvrSpd) &
                           1) > 0) && ((((uint32)
                            SRAR_ac_DW.StatusByte_PwrtrnOilPmp1OvrSpd) & 64U) ==
                          0U)) || (((((sint32)
                            SRAR_ac_DW.StatusByte_LostCommPwrtrn_OilPm) & 1) > 0)
                         && ((((uint32)
                            SRAR_ac_DW.StatusByte_LostCommPwrtrn_OilPm) & 64U) ==
                          0U))) || ((rtb_LogicalOperator_mad > 0) &&
                        (rtb_Logical5_cn == 0U)));

    /* Outputs for Atomic SubSystem: '<S2113>/Timer_Retrigger_Reset_Enabled' */
    /* Switch: '<S2152>/Switch2' incorporates:
     *  Constant: '<S2144>/Calib'
     *  Logic: '<S2113>/Logical11'
     *  Logic: '<S2113>/Logical9'
     *  RelationalOperator: '<S2113>/Comparison1'
     *  Switch: '<S2152>/Switch1'
     */
    if ((!rtb_Logical8_dq) || (rtb_TmpSignalConversionAtVeIN_k <
                               KeSRAR_T_MtrA_Temp_Lim1))
    {
        /* Switch: '<S2152>/Switch1' incorporates:
         *  Constant: '<S2148>/Calib'
         */
        rtb_TmpSignalConversionAtVeVSDR = KeSRAR_t_EOPA_Faliure_Tmr1;
    }
    else
    {
        /* Switch: '<S2152>/Switch1' incorporates:
         *  Constant: '<S2150>/Calib'
         *  Constant: '<S2152>/Constant Value4'
         *  MinMax: '<S2152>/Maximum'
         *  Sum: '<S2152>/Subtraction'
         *  Switch: '<S2152>/Switch2'
         *  UnitDelay: '<S2152>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeVSDR = fmaxf(SRAR_ac_DW.UnitDelay_DSTATE_pj -
            KeSRAR_t_dT, 0.0F);
    }

    /* End of Switch: '<S2152>/Switch2' */

    /* Update for UnitDelay: '<S2152>/Unit Delay' */
    SRAR_ac_DW.UnitDelay_DSTATE_pj = rtb_TmpSignalConversionAtVeVSDR;

    /* End of Outputs for SubSystem: '<S2113>/Timer_Retrigger_Reset_Enabled' */

    /* Logic: '<S2113>/Logical2' incorporates:
     *  Constant: '<S2145>/Calib'
     *  RelationalOperator: '<S2113>/Comparison3'
     */
    rtb_LogicalOperator_pu = ((rtb_TmpSignalConversionAtVeIN_k >=
        KeSRAR_T_MtrA_Temp_Lim2_wo_delay) && rtb_Logical8_dq);

    /* Logic: '<S2113>/Logical8' incorporates:
     *  Constant: '<S2139>/Constant1'
     *  Constant: '<S2139>/Constant2'
     *  Constant: '<S2141>/Constant1'
     *  Constant: '<S2141>/Constant2'
     *  Constant: '<S2143>/Constant1'
     *  Constant: '<S2143>/Constant2'
     *  DataStoreRead: '<S2141>/StatusByte_LostCommPwrtrn_OilPmp2'
     *  DataStoreRead: '<S2143>/StatusByte_PwrtrnOilPmp2OvrSpd'
     *  Logic: '<S2139>/LogicalOperator'
     *  Logic: '<S2141>/LogicalOperator'
     *  Logic: '<S2143>/LogicalOperator'
     *  RelationalOperator: '<S2139>/RelationalOperator1'
     *  RelationalOperator: '<S2139>/RelationalOperator2'
     *  RelationalOperator: '<S2141>/RelationalOperator1'
     *  RelationalOperator: '<S2141>/RelationalOperator2'
     *  RelationalOperator: '<S2143>/RelationalOperator1'
     *  RelationalOperator: '<S2143>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S2141>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S2141>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S2143>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S2143>/BitwiseOperator2'
     */
    rtb_Logical8_dq = (((((((sint32)SRAR_ac_DW.StatusByte_PwrtrnOilPmp2OvrSpd) &
                           1) > 0) && ((((uint32)
                            SRAR_ac_DW.StatusByte_PwrtrnOilPmp2OvrSpd) & 64U) ==
                          0U)) || (((((sint32)
                            SRAR_ac_DW.StatusByte_LostCommPwrtrn_Oil_g) & 1) > 0)
                         && ((((uint32)
                            SRAR_ac_DW.StatusByte_LostCommPwrtrn_Oil_g) & 64U) ==
                          0U))) || ((rtb_Logical6_0 > 0) && (rtb_UnitDelay_k3 ==
                         0U)));

    /* Outputs for Atomic SubSystem: '<S2113>/Timer_Retrigger_Reset_Enabled1' */
    /* Switch: '<S2153>/Switch2' incorporates:
     *  Constant: '<S2146>/Calib'
     *  Logic: '<S2113>/Logical10'
     *  Logic: '<S2113>/Logical13'
     *  RelationalOperator: '<S2113>/Comparison2'
     *  Switch: '<S2153>/Switch1'
     */
    if ((!rtb_Logical8_dq) || (rtb_TmpSignalConversionAtVeINVR <
                               KeSRAR_T_MtrB_Temp_Lim1))
    {
        /* Switch: '<S2153>/Switch1' incorporates:
         *  Constant: '<S2149>/Calib'
         */
        rtb_TmpSignalConversionAtVeIN_k = KeSRAR_t_EOPB_Faliure_Tmr2;
    }
    else
    {
        /* Switch: '<S2153>/Switch1' incorporates:
         *  Constant: '<S2151>/Calib'
         *  Constant: '<S2153>/Constant Value4'
         *  MinMax: '<S2153>/Maximum'
         *  Sum: '<S2153>/Subtraction'
         *  Switch: '<S2153>/Switch2'
         *  UnitDelay: '<S2153>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeIN_k = fmaxf(SRAR_ac_DW.UnitDelay_DSTATE_p -
            KeSRAR_t_dT, 0.0F);
    }

    /* End of Switch: '<S2153>/Switch2' */
    /* End of Outputs for SubSystem: '<S2113>/Timer_Retrigger_Reset_Enabled1' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeINVR_b_BstCnvtrFailStsFA' */
    (void)Rte_Read_VeINVR_b_BstCnvtrFailStsFA_Value(&rtb_Logical1_ll);

    /* Inport: '<Root>/VeINVR_e_BstCnvtrFailSts' */
    (void)Rte_Read_VeINVR_e_BstCnvtrFailSts_Value(&tmpRead_12);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRAR_MedTEB'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Outputs for Atomic SubSystem: '<S2113>/Timer_Retrigger_Reset_Enabled1' */
    /* Update for UnitDelay: '<S2153>/Unit Delay' */
    SRAR_ac_DW.UnitDelay_DSTATE_p = rtb_TmpSignalConversionAtVeIN_k;

    /* End of Outputs for SubSystem: '<S2113>/Timer_Retrigger_Reset_Enabled1' */

    /* Switch: '<S2066>/Switch1' incorporates:
     *  Constant: '<S1379>/ConstantValue2'
     *  Constant: '<S1379>/ConstantValue3'
     */
    if (VeSRAC_b_MCPA_DualLOC_MCP_MC_Busoff)
    {
        rtb_Switch1_fw = 2;
    }
    else
    {
        rtb_Switch1_fw = 0;
    }

    /* End of Switch: '<S2066>/Switch1' */

    /* Switch: '<S2077>/Switch1' incorporates:
     *  Constant: '<S1379>/ConstantValue4'
     *  Constant: '<S1379>/ConstantValue5'
     */
    if (VeSRAC_b_BPCM_DualLOC_MCP_MC_Busoff)
    {
        rtb_Switch1_h0 = 4;
    }
    else
    {
        rtb_Switch1_h0 = 0;
    }

    /* End of Switch: '<S2077>/Switch1' */

    /* Switch: '<S2088>/Switch1' incorporates:
     *  Constant: '<S1379>/ConstantValue6'
     *  Constant: '<S1379>/ConstantValue7'
     */
    if (VeSRAC_b_MCPC_DualLOC_MCP_MC_Busoff)
    {
        rtb_Switch1_mu = 8;
    }
    else
    {
        rtb_Switch1_mu = 0;
    }

    /* End of Switch: '<S2088>/Switch1' */

    /* Switch: '<S2091>/Switch1' incorporates:
     *  Constant: '<S1379>/ConstantValue8'
     *  Constant: '<S1379>/ConstantValue9'
     */
    if (VeSRAC_b_MCPB_DualLOC_MCP_MC_Busoff)
    {
        rtb_AND_cg = 16;
    }
    else
    {
        rtb_AND_cg = 0;
    }

    /* End of Switch: '<S2091>/Switch1' */

    /* Switch: '<S2092>/Switch1' incorporates:
     *  Constant: '<S1379>/ConstantValue10'
     *  Constant: '<S1379>/ConstantValue11'
     */
    if (VeSRAC_b_CANC2_LoC_BSM)
    {
        rtb_OR1_ot = 32;
    }
    else
    {
        rtb_OR1_ot = 0;
    }

    /* End of Switch: '<S2092>/Switch1' */

    /* Switch: '<S2093>/Switch1' incorporates:
     *  Constant: '<S1379>/ConstantValue12'
     *  Constant: '<S1379>/ConstantValue13'
     */
    if (VeSRAC_b_HCPLoc_CANB_CADM_ADCAM)
    {
        rtb_LogicalOperator_cr = 64;
    }
    else
    {
        rtb_LogicalOperator_cr = 0;
    }

    /* End of Switch: '<S2093>/Switch1' */

    /* Switch: '<S2094>/Switch1' incorporates:
     *  Constant: '<S1379>/ConstantValue14'
     *  Constant: '<S1379>/ConstantValue15'
     */
    if (VeSRAC_b_HCPLoc_CANA_CADM_ADCAM)
    {
        rtb_TmpSignalConversionAtVeOB_1 = 128;
    }
    else
    {
        rtb_TmpSignalConversionAtVeOB_1 = 0;
    }

    /* End of Switch: '<S2094>/Switch1' */

    /* Switch: '<S2095>/Switch1' incorporates:
     *  Constant: '<S1379>/ConstantValue16'
     *  Constant: '<S1379>/ConstantValue17'
     */
    if (rtb_VeSRAR_b_WEDStuckOpen)
    {
        rtb_Logical6_0 = 256;
    }
    else
    {
        rtb_Logical6_0 = 0;
    }

    /* End of Switch: '<S2095>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S2113>/Timer_Retrigger_Reset_Enabled' */
    /* Switch: '<S2096>/Switch1' incorporates:
     *  Constant: '<S1379>/ConstantValue18'
     *  Constant: '<S1379>/ConstantValue19'
     *  Constant: '<S2152>/Constant Value2'
     *  Logic: '<S2113>/Logical1'
     *  RelationalOperator: '<S2152>/Greater  Than1'
     */
    if (rtb_TmpSignalConversionAtVeVSDR <= 0.0F)
    {
        rtb_TmpSignalConversionAtVeOB_2 = 512;
    }
    else
    {
        rtb_TmpSignalConversionAtVeOB_2 = 0;
    }

    /* End of Switch: '<S2096>/Switch1' */
    /* End of Outputs for SubSystem: '<S2113>/Timer_Retrigger_Reset_Enabled' */

    /* Switch: '<S2067>/Switch1' incorporates:
     *  Constant: '<S1379>/ConstantValue20'
     *  Constant: '<S1379>/ConstantValue21'
     */
    if (rtb_LogicalOperator_pu)
    {
        rtb_LogicalOperator_mad = 1024;
    }
    else
    {
        rtb_LogicalOperator_mad = 0;
    }

    /* End of Switch: '<S2067>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S2113>/Timer_Retrigger_Reset_Enabled1' */
    /* Switch: '<S2068>/Switch1' incorporates:
     *  Constant: '<S1379>/ConstantValue22'
     *  Constant: '<S1379>/ConstantValue23'
     *  Constant: '<S2153>/Constant Value2'
     *  Logic: '<S2113>/Logical3'
     *  RelationalOperator: '<S2153>/Greater  Than1'
     */
    if (rtb_TmpSignalConversionAtVeIN_k <= 0.0F)
    {
        rtb_AND_d = 2048;
    }
    else
    {
        rtb_AND_d = 0;
    }

    /* End of Switch: '<S2068>/Switch1' */
    /* End of Outputs for SubSystem: '<S2113>/Timer_Retrigger_Reset_Enabled1' */

    /* Switch: '<S2069>/Switch1' incorporates:
     *  Constant: '<S1379>/ConstantValue24'
     *  Constant: '<S1379>/ConstantValue25'
     *  Constant: '<S2147>/Calib'
     *  Logic: '<S2113>/Logical4'
     *  RelationalOperator: '<S2113>/Comparison4'
     */
    if ((rtb_TmpSignalConversionAtVeINVR >= KeSRAR_T_MtrB_Temp_Lim2_wo_delay) &&
        rtb_Logical8_dq)
    {
        rtb_TmpSignalConversionAtVeOB_3 = 4096;
    }
    else
    {
        rtb_TmpSignalConversionAtVeOB_3 = 0;
    }

    /* End of Switch: '<S2069>/Switch1' */

    /* Switch: '<S2070>/Switch1' incorporates:
     *  Constant: '<S1379>/ConstantValue26'
     *  Constant: '<S1379>/ConstantValue27'
     *  Constant: '<S2117>/Constant'
     *  Inport: '<Root>/VeINVR_e_BstCnvtrFailSts'
     *  Logic: '<S1380>/Logical10'
     *  RelationalOperator: '<S1380>/Comparison5'
     */
    if (rtb_Logical1_ll || (((uint32)tmpRead_12) ==
                            CeINVR_e_BstCnvFailStsFaulted))
    {
        rtb_VeSRAR_b_HVOverVoltFailur_1 = 8192;
    }
    else
    {
        rtb_VeSRAR_b_HVOverVoltFailur_1 = 0;
    }

    /* End of Switch: '<S2070>/Switch1' */

    /* S-Function (sfix_bitop): '<S1379>/BitwiseLogicalOperator' incorporates:
     *  Switch: '<S2065>/Switch1'
     */
    rtb_Switch1_fw = (sint32)((uint32)(((((((((((((((uint32)
        (VeSRAC_b_ECM_DualLOC_CRC_MC_Busoff ? 1U : 0U)) | ((uint32)
        rtb_Switch1_fw)) | ((uint32)rtb_Switch1_h0)) | ((uint32)rtb_Switch1_mu))
        | ((uint32)rtb_AND_cg)) | ((uint32)rtb_OR1_ot)) | ((uint32)
        rtb_LogicalOperator_cr)) | ((uint32)rtb_TmpSignalConversionAtVeOB_1)) |
        ((uint32)rtb_Logical6_0)) | ((uint32)rtb_TmpSignalConversionAtVeOB_2)) |
        ((uint32)rtb_LogicalOperator_mad)) | ((uint32)rtb_AND_d)) | ((uint32)
        rtb_TmpSignalConversionAtVeOB_3)) | ((uint32)
        rtb_VeSRAR_b_HVOverVoltFailur_1)));

    /* Switch: '<S2193>/Switch1' incorporates:
     *  Constant: '<S1389>/ConstantValue11'
     *  DataStoreRead: '<S1389>/DataStoreRead'
     *  DataStoreWrite: '<S1389>/DataStoreWrite'
     *  S-Function (sfix_bitop): '<S1389>/BitwiseLogicalOperator1'
     *  Switch: '<S2192>/Switch1'
     */
    if (rtb_UnitDelay_fh)
    {
        SRAR_ac_DW.NeSRAR_g_InputHist_9_DS = 0U;
    }
    else
    {
        if (rtb_Comparison4_lp)
        {
            /* Switch: '<S2192>/Switch1' */
            rtb_TmpSignalConversionAtVeOB_2 = rtb_Switch1_fw;
        }
        else
        {
            /* Switch: '<S2192>/Switch1' incorporates:
             *  Constant: '<S1389>/ConstantValue12'
             */
            rtb_TmpSignalConversionAtVeOB_2 = 0;
        }

        SRAR_ac_DW.NeSRAR_g_InputHist_9_DS |= (uint32)
            rtb_TmpSignalConversionAtVeOB_2;
    }

    /* End of Switch: '<S2193>/Switch1' */

    /* Switch: '<S1467>/Switch1' incorporates:
     *  Switch: '<S1467>/Switch2'
     */
    if (VeSRAC_b_ePT_BusOff)
    {
        /* Switch: '<S1467>/Switch1' incorporates:
         *  Constant: '<S1458>/Constant'
         */
        Switch1_fc = CeSRAR_e_BusFailHCPBPCM_ePTCAN;
    }
    else if (rtb_Switch1_lt)
    {
        /* Switch: '<S1467>/Switch2' incorporates:
         *  Constant: '<S1463>/Constant'
         *  Switch: '<S1467>/Switch1'
         */
        Switch1_fc = CeSRAR_e_LoC_BPCM_HCP_ePT;
    }
    else
    {
        /* Switch: '<S1467>/Switch1' incorporates:
         *  Constant: '<S1457>/Constant'
         *  Switch: '<S1467>/Switch2'
         */
        Switch1_fc = CeSRAR_e_NoFaultHCPBPCM_ePT;
    }

    /* End of Switch: '<S1467>/Switch1' */

    /* Logic: '<S1471>/Logical21' */
    rtb_Switch1_lt = ((VeSRAC_b_HCPLoc_CANC_TCM) && rtb_Switch1_pe);

    /* Logic: '<S1471>/Logical1' incorporates:
     *  Logic: '<S1471>/Logical'
     *  Logic: '<S1471>/Logical2'
     */
    rtb_Logical1_ll = ((rtb_Switch1_pe && (VeSRAC_b_HCPLoc_ePT_TCM)) ||
                       ((VeSRAC_b_HCPLoc_CANC_TCM) && rtb_Switch1_pz));

    /* Logic: '<S1471>/Logical8' */
    rtb_LogicalOperator_pu = ((VeSRAC_b_HCPLoc_ePT_TCM) && rtb_Switch1_pz);

    /* Switch: '<S1522>/Switch1' incorporates:
     *  Constant: '<S1526>/Calib'
     *  Logic: '<S1471>/Logical10'
     *  Logic: '<S1471>/Logical3'
     *  Logic: '<S1471>/Logical4'
     *  Logic: '<S1471>/Logical5'
     *  Logic: '<S1471>/Logical6'
     *  Logic: '<S1471>/Logical7'
     *  Logic: '<S1471>/Logical9'
     *  Switch: '<S1522>/Switch2'
     *  Switch: '<S1523>/Switch1'
     */
    if (((KeSRAR_b_LoCFailStsEnblP4) && (VeSRAC_b_CANC_BusOff)) ||
            (VeSRAC_b_ePT_BusOff))
    {
        /* Switch: '<S1522>/Switch1' */
        Switch1 = 7U;
    }
    else if (((KeSRAR_b_LoCFailStsEnblP4) && (rtb_Switch1_lt || rtb_Logical1_ll))
             || rtb_LogicalOperator_pu)
    {
        /* Switch: '<S1522>/Switch2' incorporates:
         *  Switch: '<S1522>/Switch1'
         */
        Switch1 = 3U;
    }
    else if (((KeSRAR_b_LoCFailStsEnblP4) && rtb_Switch1_pe) || rtb_Switch1_pz)
    {
        /* Switch: '<S1523>/Switch1' incorporates:
         *  Switch: '<S1522>/Switch1'
         *  Switch: '<S1522>/Switch2'
         */
        Switch1 = 2U;
    }
    else
    {
        /* Switch: '<S1522>/Switch1' incorporates:
         *  Logic: '<S1471>/Logical11'
         *  Logic: '<S1471>/Logical12'
         *  Switch: '<S1522>/Switch2'
         *  Switch: '<S1523>/Switch1'
         */
        Switch1 = (uint16)((((KeSRAR_b_LoCFailStsEnblP4) &&
                             (VeSRAC_b_HCPLoc_CANC_TCM)) ||
                            (VeSRAC_b_HCPLoc_ePT_TCM)) ? 1 : 0);
    }

    /* End of Switch: '<S1522>/Switch1' */

    /* Switch: '<S1524>/Switch1' incorporates:
     *  Constant: '<S1526>/Calib'
     *  Logic: '<S1471>/Logical13'
     *  Logic: '<S1471>/Logical16'
     *  Logic: '<S1471>/Logical17'
     *  Logic: '<S1471>/Logical18'
     *  Logic: '<S1471>/Logical19'
     *  Logic: '<S1471>/Logical20'
     *  Logic: '<S1471>/Logical22'
     *  Switch: '<S1524>/Switch2'
     *  Switch: '<S1525>/Switch1'
     */
    if (((KeSRAR_b_LoCFailStsEnblP4) && (VeSRAC_b_ePT_BusOff)) ||
            (VeSRAC_b_CANC_BusOff))
    {
        /* Switch: '<S1524>/Switch1' */
        Switch1_g = 7U;
    }
    else if (((KeSRAR_b_LoCFailStsEnblP4) && (rtb_LogicalOperator_pu ||
               rtb_Logical1_ll)) || rtb_Switch1_lt)
    {
        /* Switch: '<S1524>/Switch2' incorporates:
         *  Switch: '<S1524>/Switch1'
         */
        Switch1_g = 3U;
    }
    else if (((KeSRAR_b_LoCFailStsEnblP4) && rtb_Switch1_pz) || rtb_Switch1_pe)
    {
        /* Switch: '<S1525>/Switch1' incorporates:
         *  Switch: '<S1524>/Switch1'
         *  Switch: '<S1524>/Switch2'
         */
        Switch1_g = 2U;
    }
    else
    {
        /* Switch: '<S1524>/Switch1' incorporates:
         *  Logic: '<S1471>/Logical14'
         *  Logic: '<S1471>/Logical15'
         *  Switch: '<S1524>/Switch2'
         *  Switch: '<S1525>/Switch1'
         */
        Switch1_g = (uint16)((((KeSRAR_b_LoCFailStsEnblP4) &&
                               (VeSRAC_b_HCPLoc_ePT_TCM)) ||
                              (VeSRAC_b_HCPLoc_CANC_TCM)) ? 1 : 0);
    }

    /* End of Switch: '<S1524>/Switch1' */

    /* Switch: '<S1540>/Switch1' incorporates:
     *  Constant: '<S1538>/Constant'
     *  Constant: '<S1539>/Constant'
     *  Logic: '<S1527>/Logical14'
     *  RelationalOperator: '<S1527>/Comparison10'
     *  RelationalOperator: '<S1527>/Comparison8'
     */
    if ((CeINVR_e_NormalVoltCntrlOn == ((uint32)rtb_TmpSignalConversionAtVeIN_c))
        || (CeINVR_e_NormalVoltCntrlPriming == ((uint32)
            rtb_TmpSignalConversionAtVeIN_c)))
    {
        /* Switch: '<S1540>/Switch1' incorporates:
         *  Constant: '<S1541>/Calib'
         */
        rtb_TmpSignalConversionAtVeINVR = KeSRAR_n_AltntrMdMaxEngRPM;
    }
    else
    {
        /* Switch: '<S1540>/Switch1' incorporates:
         *  SignalConversion generated from: '<S2>/VeSRAR_n_HCPMaxEngRPM_Read'
         *  SignalConversion generated from: '<S4>/VeSRAR_n_HCPMaxEngRPM_write'
         */
        rtb_TmpSignalConversionAtVeINVR =
            Rte_IrvRead_SRAR_MedTEB_VeSRAR_n_HCPMaxEngRPM_write_IRV();
    }

    /* End of Switch: '<S1540>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S1527>/Modified_GradientLimiterIC' */
    /* Outputs for Atomic SubSystem: '<S1544>/EdgeRising' */
    /* Logic: '<S1546>/OR1' incorporates:
     *  UnitDelay: '<S1546>/UnitDelay'
     */
    rtb_Switch1_lt = !SRAR_ac_DW.UnitDelay_DSTATE_bi;

    /* Update for UnitDelay: '<S1546>/UnitDelay' incorporates:
     *  Constant: '<S1544>/TRUEConstant'
     */
    SRAR_ac_DW.UnitDelay_DSTATE_bi = true;

    /* Switch: '<S1544>/Switch' incorporates:
     *  Logic: '<S1546>/AND'
     */
    if (rtb_Switch1_lt)
    {
        /* Switch: '<S1544>/Switch' */
        rtb_Switch1_io = rtb_TmpSignalConversionAtVeINVR;
    }
    else
    {
        /* Switch: '<S1544>/Switch' incorporates:
         *  UnitDelay: '<S1544>/UnitDelay1'
         */
        rtb_Switch1_io = SRAR_ac_DW.UnitDelay1_DSTATE;
    }

    /* End of Switch: '<S1544>/Switch' */
    /* End of Outputs for SubSystem: '<S1544>/EdgeRising' */

    /* Sum: '<S1544>/Sum2' */
    rtb_TmpSignalConversionAtVeINVR -= rtb_Switch1_io;

    /* Outputs for Atomic SubSystem: '<S1544>/Limiter' */
    /* Switch: '<S1547>/Switch1' incorporates:
     *  Constant: '<S1543>/Calib'
     *  RelationalOperator: '<S1547>/RelationalOperator'
     */
    if (KeSRAR_n_AltntrMdMaxEngRPM_LU < rtb_TmpSignalConversionAtVeINVR)
    {
        /* Switch: '<S1547>/Switch1' */
        rtb_Switch1_n4 = KeSRAR_n_AltntrMdMaxEngRPM_LU;
    }
    else
    {
        /* Switch: '<S1547>/Switch1' */
        rtb_Switch1_n4 = rtb_TmpSignalConversionAtVeINVR;
    }

    /* End of Switch: '<S1547>/Switch1' */

    /* Switch: '<S1547>/Switch' incorporates:
     *  Constant: '<S1542>/Calib'
     *  RelationalOperator: '<S1547>/RelationalOperator1'
     */
    if (rtb_Switch1_n4 <= KeSRAR_n_AltntrMdMaxEngRPM_LD)
    {
        rtb_Switch1_n4 = KeSRAR_n_AltntrMdMaxEngRPM_LD;
    }

    /* End of Switch: '<S1547>/Switch' */
    /* End of Outputs for SubSystem: '<S1544>/Limiter' */

    /* Sum: '<S1544>/Sum3' */
    rtb_TmpSignalConversionAtVeINVR = rtb_Switch1_n4 + rtb_Switch1_io;

    /* Update for UnitDelay: '<S1544>/UnitDelay1' */
    SRAR_ac_DW.UnitDelay1_DSTATE = rtb_TmpSignalConversionAtVeINVR;

    /* End of Outputs for SubSystem: '<S1527>/Modified_GradientLimiterIC' */

    /* UnitDelay: '<S717>/UnitDelay' incorporates:
     *  Logic: '<S2112>/Logical6'
     */
    rtb_UnitDelay_fh = ((VeSRAC_b_MtrBInvrtrFaulted) ||
                        (VeSRAC_b_P2SpdSignlFailur));

    /* Logic: '<S2112>/Logical8' */
    rtb_Switch1_lt = ((rtb_UnitDelay_fh || rtb_TmpSignalConversionAtVeB_j4) ||
                      VeSRAR_b_MtrBZeroTrqActv);

    /* Switch: '<S2256>/Switch5' */
    if (rtb_Switch5_f)
    {
        /* Switch: '<S2256>/Switch5' incorporates:
         *  Constant: '<S2256>/FALSEConstant5'
         */
        rtb_Switch5_f = false;
    }
    else
    {
        /* Switch: '<S2256>/Switch5' incorporates:
         *  Logic: '<S2256>/LogicalOperator4'
         *  Logic: '<S2351>/Logical7'
         *  Logic: '<S2351>/LogicalOperator3'
         *  Logic: '<S2354>/Logical5'
         */
        rtb_Switch5_f = (((rtb_TmpSignalConversionAtVeHP_g ||
                           (rtb_LogicalOperator_g3 && (rtb_Comparison2_b ||
                             rtb_Logical1_cl))) ||
                          rtb_TmpSignalConversionAtVeBP_b) ||
                         (rtb_Comparison2_op && rtb_TmpSignalConversionAtVeGE_o));
    }

    /* End of Switch: '<S2256>/Switch5' */

    /* Switch: '<S2171>/Switch1' */
    rtb_Switch1_ajp = (rtb_Switch1_ajp && rtb_VeSRAR_b_TCMLmpFlt2);

    /* Logic: '<S528>/AND3' incorporates:
     *  Logic: '<S239>/Logical11'
     *  Logic: '<S242>/AND3'
     *  Logic: '<S243>/AND3'
     *  Logic: '<S244>/AND3'
     *  Logic: '<S525>/AND4'
     *  Logic: '<S527>/AND3'
     *  Logic: '<S529>/AND7'
     *  Logic: '<S530>/AND5'
     *  Logic: '<S531>/AND2'
     *  Logic: '<S533>/AND5'
     *  Switch: '<S339>/Switch1'
     *  Switch: '<S535>/Switch1'
     *  Switch: '<S537>/Switch1'
     */
    rtb_Switch1_pe = !rtb_TmpSignalConversionAtVeB_j2;

    /* Logic: '<S528>/Logical34' incorporates:
     *  Constant: '<S618>/Calib'
     *  Constant: '<S619>/Calib'
     *  Constant: '<S620>/Calib'
     *  Constant: '<S621>/Calib'
     *  Constant: '<S622>/Calib'
     *  Constant: '<S623>/Calib'
     *  Constant: '<S624>/Calib'
     *  Constant: '<S625>/Calib'
     *  Constant: '<S626>/Calib'
     *  Constant: '<S628>/ConstantValue'
     *  Constant: '<S629>/ConstantValue'
     *  Constant: '<S630>/ConstantValue'
     *  Constant: '<S631>/ConstantValue'
     *  Constant: '<S632>/ConstantValue'
     *  Constant: '<S633>/ConstantValue'
     *  Constant: '<S634>/ConstantValue'
     *  Constant: '<S635>/ConstantValue'
     *  Logic: '<S528>/AND3'
     *  Logic: '<S528>/Logical35'
     *  Logic: '<S627>/Logical13'
     *  RelationalOperator: '<S628>/Comparison'
     *  RelationalOperator: '<S629>/Comparison'
     *  RelationalOperator: '<S630>/Comparison'
     *  RelationalOperator: '<S631>/Comparison'
     *  RelationalOperator: '<S632>/Comparison'
     *  RelationalOperator: '<S633>/Comparison'
     *  RelationalOperator: '<S634>/Comparison'
     *  RelationalOperator: '<S635>/Comparison'
     *  S-Function (sfix_bitop): '<S628>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S629>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S630>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S631>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S632>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S633>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S634>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S635>/BitwiseLogicalOperator6'
     */
    rtb_Logical1_ll = ((((((((((rtb_Switch1_n3 & KeSRAR_g_RA1_SelDsblInvBRecov) >=
        1U) || ((rtb_Switch1_ck & KeSRAR_g_RA2_SelDsblInvBRecov) >= 1U)) ||
        ((rtb_Switch1_mr & KeSRAR_g_RA3_SelDsblInvBRecov) >= 1U)) ||
                            ((rtb_Switch1_bk & KeSRAR_g_RA4_SelDsblInvBRecov) >=
        1U)) || ((rtb_Switch1_c & KeSRAR_g_RA5_SelDsblInvBRecov) >= 1U)) ||
                          ((rtb_Switch1_fxq & KeSRAR_g_RA6_SelDsblInvBRecov) >=
                           1U)) || ((BitwiseLogicalOperator_b &
                           KeSRAR_g_RA7_SelDsblInvBRecov) >= 1U)) ||
                        ((rtb_Switch1_anw & KeSRAR_g_RA8_SelDsblInvBRecov) >= 1U))
                       && (rtb_Switch1_pe || (KeSRAR_b_DsblInvB_Recov_DebDisbl)));

    /* Outputs for Atomic SubSystem: '<S248>/TurnOnDelayTime3' */
    /* Outputs for Atomic SubSystem: '<S557>/EdgeRising' */
    /* Logic: '<S718>/AND' incorporates:
     *  Logic: '<S718>/OR1'
     *  UnitDelay: '<S718>/UnitDelay'
     */
    rtb_LogicalOperator_pu = (rtb_Logical1_ll &&
        (!SRAR_ac_DW.UnitDelay_DSTATE_ep));

    /* Update for UnitDelay: '<S718>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_ep = rtb_Logical1_ll;

    /* End of Outputs for SubSystem: '<S557>/EdgeRising' */

    /* Switch: '<S557>/Switch1' incorporates:
     *  Logic: '<S557>/OR'
     *  Logic: '<S557>/OR1'
     */
    if ((!rtb_Logical1_ll) || rtb_LogicalOperator_pu)
    {
        /* Switch: '<S557>/Switch1' incorporates:
         *  Constant: '<S557>/ConstantValue1'
         */
        rtb_TmpSignalConversionAtVeIN_k = 0.0F;
    }
    else
    {
        /* Switch: '<S557>/Switch1' incorporates:
         *  Constant: '<S547>/Calib'
         *  Constant: '<S552>/Calib'
         *  MinMax: '<S557>/Minimum'
         *  Sum: '<S557>/Summation'
         *  UnitDelay: '<S557>/UnitDelay'
         */
        rtb_TmpSignalConversionAtVeIN_k = fminf(KeSRAR_t_DsblInvBTurnONDelay,
            KeSRAR_t_dT + SRAR_ac_DW.UnitDelay_DSTATE_ew);
    }

    /* End of Switch: '<S557>/Switch1' */
    /* End of Outputs for SubSystem: '<S248>/TurnOnDelayTime3' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeINVR_b_P1f_Dgrd_AltMd' */
    (void)Rte_Read_VeINVR_b_P1f_Dgrd_AltMd_Value(&tmpRead_w);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRAR_MedTEB'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Outputs for Atomic SubSystem: '<S248>/TurnOnDelayTime3' */
    /* Logic: '<S557>/AND' incorporates:
     *  Constant: '<S547>/Calib'
     *  RelationalOperator: '<S557>/GreaterThan'
     */
    rtb_Logical1_ll = (rtb_Logical1_ll && (rtb_TmpSignalConversionAtVeIN_k >=
                        KeSRAR_t_DsblInvBTurnONDelay));

    /* Update for UnitDelay: '<S557>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_ew = rtb_TmpSignalConversionAtVeIN_k;

    /* End of Outputs for SubSystem: '<S248>/TurnOnDelayTime3' */

    /* Logic: '<S2112>/Logical9' */
    VeSRAR_b_MtrBZeroTrqActv = (((((VeSRAR_b_MtrBZeroTrqActv || rtb_Switch5_f) ||
        rtb_UnitDelay_fh) || rtb_VeSRAR_b_TCMLmpFlt1) || rtb_Switch1_ajp) ||
        rtb_Logical1_ll);

    /* Outputs for Atomic SubSystem: '<S1390>/Hysteresis' */
    /* Switch: '<S2202>/Switch1' incorporates:
     *  Constant: '<S2206>/Calib'
     *  RelationalOperator: '<S2202>/Greater  Than'
     */
    if (rtb_TmpSignalConversionAtVeB_lk > KeSRAR_T_BatModTmpHighRSP)
    {
        /* Switch: '<S2202>/Switch1' incorporates:
         *  Constant: '<S2202>/Constant Value'
         */
        rtb_LogicalOperator_pu = true;
    }
    else
    {
        /* Switch: '<S2202>/Switch1' incorporates:
         *  Constant: '<S2205>/Calib'
         *  RelationalOperator: '<S2202>/Greater  Than1'
         *  UnitDelay: '<S2202>/Unit Delay'
         */
        rtb_LogicalOperator_pu = ((rtb_TmpSignalConversionAtVeB_lk >=
            KeSRAR_T_BatModTmpHighLSP) && (SRAR_ac_DW.UnitDelay_DSTATE_ht));
    }

    /* End of Switch: '<S2202>/Switch1' */

    /* Update for UnitDelay: '<S2202>/Unit Delay' */
    SRAR_ac_DW.UnitDelay_DSTATE_ht = rtb_LogicalOperator_pu;

    /* End of Outputs for SubSystem: '<S1390>/Hysteresis' */

    /* Outputs for Atomic SubSystem: '<S1390>/Hysteresis1' */
    /* Switch: '<S2203>/Switch1' incorporates:
     *  Constant: '<S2208>/Calib'
     *  RelationalOperator: '<S2203>/Greater  Than'
     */
    if (rtb_TmpSignalConversionAtVeB_lk > KeSRAR_T_BatModTmpLowRSP)
    {
        /* Switch: '<S2203>/Switch1' incorporates:
         *  Constant: '<S2203>/Constant Value'
         */
        rtb_LogicalOperator_hj = true;
    }
    else
    {
        /* Switch: '<S2203>/Switch1' incorporates:
         *  Constant: '<S2207>/Calib'
         *  RelationalOperator: '<S2203>/Greater  Than1'
         *  UnitDelay: '<S2203>/Unit Delay'
         */
        rtb_LogicalOperator_hj = ((rtb_TmpSignalConversionAtVeB_lk >=
            KeSRAR_T_BatModTmpLowLSP) && (SRAR_ac_DW.UnitDelay_DSTATE_d0j));
    }

    /* End of Switch: '<S2203>/Switch1' */
    /* End of Outputs for SubSystem: '<S1390>/Hysteresis1' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeHMIR_b_DriveReady' */
    (void)Rte_Read_VeHMIR_b_DriveReady_Value(&rtb_Logical13_ni);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRAR_MedTEB'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Outputs for Atomic SubSystem: '<S1390>/Hysteresis1' */
    /* Update for UnitDelay: '<S2203>/Unit Delay' */
    SRAR_ac_DW.UnitDelay_DSTATE_d0j = rtb_LogicalOperator_hj;

    /* End of Outputs for SubSystem: '<S1390>/Hysteresis1' */

    /* Logic: '<S533>/Logical25' incorporates:
     *  Constant: '<S695>/Calib'
     *  Constant: '<S696>/Calib'
     *  Constant: '<S697>/Calib'
     *  Constant: '<S698>/Calib'
     *  Constant: '<S699>/Calib'
     *  Constant: '<S700>/Calib'
     *  Constant: '<S701>/Calib'
     *  Constant: '<S702>/Calib'
     *  Constant: '<S703>/Calib'
     *  Constant: '<S706>/ConstantValue'
     *  Constant: '<S707>/ConstantValue'
     *  Constant: '<S708>/ConstantValue'
     *  Constant: '<S709>/ConstantValue'
     *  Constant: '<S710>/ConstantValue'
     *  Constant: '<S711>/ConstantValue'
     *  Constant: '<S712>/ConstantValue'
     *  Constant: '<S713>/ConstantValue'
     *  Logic: '<S533>/Logical26'
     *  Logic: '<S704>/Logical13'
     *  RelationalOperator: '<S706>/Comparison'
     *  RelationalOperator: '<S707>/Comparison'
     *  RelationalOperator: '<S708>/Comparison'
     *  RelationalOperator: '<S709>/Comparison'
     *  RelationalOperator: '<S710>/Comparison'
     *  RelationalOperator: '<S711>/Comparison'
     *  RelationalOperator: '<S712>/Comparison'
     *  RelationalOperator: '<S713>/Comparison'
     *  S-Function (sfix_bitop): '<S706>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S707>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S708>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S709>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S710>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S711>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S712>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S713>/BitwiseLogicalOperator6'
     */
    rtb_Switch1_ajp = ((((((((((rtb_Switch1_n3 & KeSRAR_g_RA1_SelHybAltrntrMd) >=
        1U) || ((rtb_Switch1_ck & KeSRAR_g_RA2_SelHybAltrntrMd) >= 1U)) ||
        ((rtb_Switch1_mr & KeSRAR_g_RA3_SelHybAltrntrMd) >= 1U)) ||
                            ((rtb_Switch1_bk & KeSRAR_g_RA4_SelHybAltrntrMd) >=
        1U)) || ((rtb_Switch1_c & KeSRAR_g_RA5_SelHybAltrntrMd) >= 1U)) ||
                          ((rtb_Switch1_fxq & KeSRAR_g_RA6_SelHybAltrntrMd) >=
                           1U)) || ((BitwiseLogicalOperator_b &
                           KeSRAR_g_RA7_SelHybAltrntrMd) >= 1U)) ||
                        ((rtb_Switch1_anw & KeSRAR_g_RA8_SelHybAltrntrMd) >= 1U))
                       && (rtb_Switch1_pe ||
                           (KeSRAR_b_HybAltrntrMd_Latch_DebDisbl)));

    /* Outputs for Atomic SubSystem: '<S533>/SignalLatchOnWithReset2' */
    /* Logic: '<S705>/OR1' incorporates:
     *  Logic: '<S705>/OR'
     *  UnitDelay: '<S705>/UnitDelay'
     */
    rtb_OR1_mq = (rtb_Switch1_ajp || (rtb_VeSRAR_b_HVOverVoltFailur_2 &&
                   (SRAR_ac_DW.UnitDelay_DSTATE_fd)));

    /* Update for UnitDelay: '<S705>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_fd = rtb_OR1_mq;

    /* End of Outputs for SubSystem: '<S533>/SignalLatchOnWithReset2' */

    /* Switch: '<S693>/Switch1' incorporates:
     *  Constant: '<S694>/Calib'
     */
    if (KeSRAR_b_HybAltrntrMd_Latch)
    {
        /* Switch: '<S693>/Switch1' */
        rtb_Switch1_ajp = rtb_OR1_mq;
    }

    /* End of Switch: '<S693>/Switch1' */

    /* Switch: '<S2204>/Switch1' incorporates:
     *  Constant: '<S2197>/Constant'
     *  Constant: '<S2198>/Constant'
     *  Constant: '<S2200>/Constant'
     *  Constant: '<S2210>/Calib'
     *  Logic: '<S1390>/Logical6'
     *  Logic: '<S1390>/Logical8'
     *  RelationalOperator: '<S1390>/Comparison1'
     *  RelationalOperator: '<S1390>/Comparison2'
     *  RelationalOperator: '<S1390>/Comparison3'
     *  RelationalOperator: '<S1390>/Comparison7'
     */
    if (((((((uint32)rtb_TmpSignalConversionAtVeTRGR) ==
            CeTRGR_e_TransRangeDrive4) || (((uint32)
             rtb_TmpSignalConversionAtVeTRGR) == CeTRGR_e_TransRangeReverse)) ||
          (((uint32)rtb_TmpSignalConversionAtVeTRGR) ==
            CeTRGR_e_TransRangeNeutral)) && (rtb_TmpSignalConversionAtVeCSVR >
            KeSRAR_v_VehSpd_ParkThrsh)) && rtb_Logical13_ni)
    {
        /* UnitDelay: '<S717>/UnitDelay' incorporates:
         *  Constant: '<S2199>/Constant'
         *  Constant: '<S2201>/Constant'
         *  Logic: '<S1390>/Logical10'
         *  Logic: '<S1390>/Logical11'
         *  Logic: '<S1390>/Logical12'
         *  Logic: '<S1390>/Logical7'
         *  Logic: '<S1390>/Logical9'
         *  RelationalOperator: '<S1390>/Comparison4'
         *  RelationalOperator: '<S1390>/Comparison5'
         */
        rtb_UnitDelay_fh = (((((((uint32)rtb_TmpSignalConversionAtVeDMDR) ==
                                CeDMDR_e_Turtle_Mode3) || (((uint32)
            rtb_TmpSignalConversionAtVeDMDR) == CeDMDR_e_Turtle_Mode4)) &&
                              ((!rtb_LogicalOperator_pu) &&
                               rtb_LogicalOperator_hj)) ||
                             rtb_TmpSignalConversionAtVeB_j4) || rtb_Switch1_ajp);
    }
    else
    {
        /* UnitDelay: '<S717>/UnitDelay' incorporates:
         *  Constant: '<S1390>/Constant7'
         */
        rtb_UnitDelay_fh = false;
    }

    /* End of Switch: '<S2204>/Switch1' */

    /* Logic: '<S354>/Logical13' incorporates:
     *  Constant: '<S344>/Calib'
     *  Constant: '<S345>/Calib'
     *  Constant: '<S346>/Calib'
     *  Constant: '<S347>/Calib'
     *  Constant: '<S348>/Calib'
     *  Constant: '<S349>/Calib'
     *  Constant: '<S350>/Calib'
     *  Constant: '<S351>/Calib'
     *  Constant: '<S361>/ConstantValue'
     *  Constant: '<S362>/ConstantValue'
     *  Constant: '<S363>/ConstantValue'
     *  Constant: '<S364>/ConstantValue'
     *  Constant: '<S365>/ConstantValue'
     *  Constant: '<S366>/ConstantValue'
     *  Constant: '<S367>/ConstantValue'
     *  Constant: '<S368>/ConstantValue'
     *  RelationalOperator: '<S361>/Comparison'
     *  RelationalOperator: '<S362>/Comparison'
     *  RelationalOperator: '<S363>/Comparison'
     *  RelationalOperator: '<S364>/Comparison'
     *  RelationalOperator: '<S365>/Comparison'
     *  RelationalOperator: '<S366>/Comparison'
     *  RelationalOperator: '<S367>/Comparison'
     *  RelationalOperator: '<S368>/Comparison'
     *  S-Function (sfix_bitop): '<S361>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S362>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S363>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S364>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S365>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S366>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S367>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S368>/BitwiseLogicalOperator6'
     */
    rtb_Logical13_ni = (((((((((rtb_Switch1_n3 & KeSRAR_g_RA1_SelDsblChrg) >= 1U)
        || ((rtb_Switch1_ck & KeSRAR_g_RA2_SelDsblChrg) >= 1U)) ||
        ((rtb_Switch1_mr & KeSRAR_g_RA3_SelDsblChrg) >= 1U)) || ((rtb_Switch1_bk
        & KeSRAR_g_RA4_SelDsblChrg) >= 1U)) || ((rtb_Switch1_c &
        KeSRAR_g_RA5_SelDsblChrg) >= 1U)) || ((rtb_Switch1_fxq &
                            KeSRAR_g_RA6_SelDsblChrg) >= 1U)) ||
                         ((BitwiseLogicalOperator_b & KeSRAR_g_RA7_SelDsblChrg) >=
                          1U)) || ((rtb_Switch1_anw & KeSRAR_g_RA8_SelDsblChrg) >=
                         1U));

    /* Outputs for Atomic SubSystem: '<S336>/EdgeRising' */
    /* Logic: '<S358>/AND' incorporates:
     *  Logic: '<S358>/OR1'
     *  UnitDelay: '<S358>/UnitDelay'
     */
    rtb_LogicalOperator_pu = (rtb_Logical13_ni &&
        (!SRAR_ac_DW.UnitDelay_DSTATE_p1));

    /* Update for UnitDelay: '<S358>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_p1 = rtb_Logical13_ni;

    /* End of Outputs for SubSystem: '<S336>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S336>/CounterResetTriggerEnabled' */
    /* Outputs for Atomic SubSystem: '<S357>/EdgeRising' */
    /* Logic: '<S360>/OR1' incorporates:
     *  UnitDelay: '<S360>/UnitDelay'
     */
    rtb_LogicalOperator_hj = !SRAR_ac_DW.UnitDelay_DSTATE_nu;

    /* Update for UnitDelay: '<S360>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_nu = rtb_AND_ct;

    /* Switch: '<S357>/Switch1' incorporates:
     *  Inport: '<Root>/VeOBCR_e_ChargingSystemSts'
     *  Logic: '<S360>/AND'
     */
    if (rtb_AND_ct && rtb_LogicalOperator_hj)
    {
        /* Switch: '<S357>/Switch1' incorporates:
         *  Constant: '<S357>/ConstantValue2'
         */
        rtb_Switch1_py = 0U;
    }
    else
    {
        (void)Rte_Read_VeOBCR_e_ChargingSystemSts_Value(&tmpRead_o);

        /* Switch: '<S357>/Switch2' incorporates:
         *  Constant: '<S1703>/Constant'
         *  Inport: '<Root>/VeOBCR_e_ChargingSystemSts'
         *  Logic: '<S336>/Logical12'
         *  RelationalOperator: '<S1370>/Relational_Operator2'
         */
        if (rtb_LogicalOperator_pu && (((uint32)tmpRead_o) ==
                CeOBCR_e_ChargingSts_Charging))
        {
            /* Switch: '<S357>/Switch1' incorporates:
             *  Constant: '<S357>/ConstantValue1'
             *  Sum: '<S357>/Subtraction'
             *  Switch: '<S357>/Switch2'
             *  UnitDelay: '<S357>/UnitDelay'
             */
            rtb_Switch1_py = (uint16)(((uint32)SRAR_ac_DW.UnitDelay_DSTATE_ho) +
                1U);
        }
        else
        {
            /* Switch: '<S357>/Switch1' incorporates:
             *  Switch: '<S357>/Switch2'
             *  UnitDelay: '<S357>/UnitDelay'
             */
            rtb_Switch1_py = SRAR_ac_DW.UnitDelay_DSTATE_ho;
        }

        /* End of Switch: '<S357>/Switch2' */
    }

    /* End of Switch: '<S357>/Switch1' */
    /* End of Outputs for SubSystem: '<S357>/EdgeRising' */

    /* Update for UnitDelay: '<S357>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_ho = rtb_Switch1_py;

    /* End of Outputs for SubSystem: '<S336>/CounterResetTriggerEnabled' */

    /* Switch: '<S339>/Switch1' incorporates:
     *  Constant: '<S342>/Calib'
     */
    if (KeSRAR_b_DsblChrgEnbl_OvrdEnbl)
    {
        /* Switch: '<S339>/Switch1' incorporates:
         *  Constant: '<S343>/Calib'
         */
        rtb_Logical13_ni = KeSRAR_b_DsblChrgEnbl_OvrdVal;
    }
    else
    {
        /* Switch: '<S339>/Switch1' incorporates:
         *  Constant: '<S340>/Calib'
         *  Logic: '<S239>/Logical10'
         *  Logic: '<S239>/Logical9'
         */
        rtb_Logical13_ni = (rtb_Logical13_ni && (rtb_Switch1_pe ||
                             (KeSRAR_b_DsblChrgEnbl_DebDisbl)));
    }

    /* Outputs for Atomic SubSystem: '<S239>/SignalLatchOnWithReset' */
    /* Logic: '<S355>/OR1' incorporates:
     *  Logic: '<S355>/OR'
     *  UnitDelay: '<S355>/UnitDelay'
     */
    rtb_LogicalOperator_pu = (rtb_Logical13_ni ||
        (rtb_VeSRAR_b_HVOverVoltFailur_2 && (SRAR_ac_DW.UnitDelay_DSTATE_m5)));

    /* Update for UnitDelay: '<S355>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_m5 = rtb_LogicalOperator_pu;

    /* End of Outputs for SubSystem: '<S239>/SignalLatchOnWithReset' */

    /* Switch: '<S338>/Switch1' incorporates:
     *  Constant: '<S341>/Calib'
     *  Constant: '<S359>/Calib'
     *  Logic: '<S239>/Logical13'
     *  RelationalOperator: '<S336>/Comparison4'
     */
    if ((KeSRAR_b_DsblChrgEnbl_Latch) && (KeSRAR_Cnt_StpChargingMaxCnt <=
            rtb_Switch1_py))
    {
        /* Switch: '<S338>/Switch1' */
        rtb_Logical13_ni = rtb_LogicalOperator_pu;
    }

    /* End of Switch: '<S338>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S239>/TurnOnDelayTime' */
    /* Outputs for Atomic SubSystem: '<S356>/EdgeRising' */
    /* Logic: '<S369>/AND' incorporates:
     *  Logic: '<S369>/OR1'
     *  UnitDelay: '<S369>/UnitDelay'
     */
    rtb_LogicalOperator_pu = (rtb_Logical13_ni &&
        (!SRAR_ac_DW.UnitDelay_DSTATE_ded));

    /* Update for UnitDelay: '<S369>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_ded = rtb_Logical13_ni;

    /* End of Outputs for SubSystem: '<S356>/EdgeRising' */

    /* Switch: '<S356>/Switch1' incorporates:
     *  Logic: '<S356>/OR'
     *  Logic: '<S356>/OR1'
     */
    if ((!rtb_Logical13_ni) || rtb_LogicalOperator_pu)
    {
        /* Switch: '<S356>/Switch1' incorporates:
         *  Constant: '<S356>/ConstantValue1'
         */
        rtb_TmpSignalConversionAtVeCSVR = 0.0F;
    }
    else
    {
        /* Switch: '<S356>/Switch1' incorporates:
         *  Constant: '<S352>/Calib'
         *  Constant: '<S353>/Calib'
         *  MinMax: '<S356>/Minimum'
         *  Sum: '<S356>/Summation'
         *  UnitDelay: '<S356>/UnitDelay'
         */
        rtb_TmpSignalConversionAtVeCSVR = fminf
            (KeSRAR_t_DsblChrgEnbl_TurnONdelay, KeSRAR_t_dT +
             SRAR_ac_DW.UnitDelay_DSTATE_pl);
    }

    /* End of Switch: '<S356>/Switch1' */

    /* Update for UnitDelay: '<S356>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_pl = rtb_TmpSignalConversionAtVeCSVR;

    /* End of Outputs for SubSystem: '<S239>/TurnOnDelayTime' */

    /* Logic: '<S242>/Logical34' incorporates:
     *  Constant: '<S404>/Calib'
     *  Constant: '<S405>/Calib'
     *  Constant: '<S406>/Calib'
     *  Constant: '<S407>/Calib'
     *  Constant: '<S408>/Calib'
     *  Constant: '<S409>/Calib'
     *  Constant: '<S410>/Calib'
     *  Constant: '<S411>/Calib'
     *  Constant: '<S412>/Calib'
     *  Constant: '<S417>/ConstantValue'
     *  Constant: '<S418>/ConstantValue'
     *  Constant: '<S419>/ConstantValue'
     *  Constant: '<S420>/ConstantValue'
     *  Constant: '<S421>/ConstantValue'
     *  Constant: '<S422>/ConstantValue'
     *  Constant: '<S423>/ConstantValue'
     *  Constant: '<S424>/ConstantValue'
     *  Logic: '<S242>/Logical35'
     *  Logic: '<S415>/Logical13'
     *  RelationalOperator: '<S417>/Comparison'
     *  RelationalOperator: '<S418>/Comparison'
     *  RelationalOperator: '<S419>/Comparison'
     *  RelationalOperator: '<S420>/Comparison'
     *  RelationalOperator: '<S421>/Comparison'
     *  RelationalOperator: '<S422>/Comparison'
     *  RelationalOperator: '<S423>/Comparison'
     *  RelationalOperator: '<S424>/Comparison'
     *  S-Function (sfix_bitop): '<S417>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S418>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S419>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S420>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S421>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S422>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S423>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S424>/BitwiseLogicalOperator6'
     */
    rtb_LogicalOperator_pu = ((((((((((rtb_Switch1_n3 &
        KeSRAR_g_RA1_SelDisablePwrPanel) >= 1U) || ((rtb_Switch1_ck &
        KeSRAR_g_RA2_SelDisablePwrPanel) >= 1U)) || ((rtb_Switch1_mr &
        KeSRAR_g_RA3_SelDisablePwrPanel) >= 1U)) || ((rtb_Switch1_bk &
        KeSRAR_g_RA4_SelDisablePwrPanel) >= 1U)) || ((rtb_Switch1_c &
        KeSRAR_g_RA5_SelDisablePwrPanel) >= 1U)) || ((rtb_Switch1_fxq &
        KeSRAR_g_RA6_SelDisablePwrPanel) >= 1U)) || ((BitwiseLogicalOperator_b &
        KeSRAR_g_RA7_SelDisablePwrPanel) >= 1U)) || ((rtb_Switch1_anw &
        KeSRAR_g_RA8_SelDisablePwrPanel) >= 1U)) && (rtb_Switch1_pe ||
        (KeSRAR_b_DisablePwrPanel_DebDisbl)));

    /* Outputs for Atomic SubSystem: '<S242>/TurnOnDelayTime1' */
    /* Outputs for Atomic SubSystem: '<S416>/EdgeRising' */
    /* Logic: '<S425>/AND' incorporates:
     *  Logic: '<S425>/OR1'
     *  UnitDelay: '<S425>/UnitDelay'
     */
    rtb_LogicalOperator_hj = (rtb_LogicalOperator_pu &&
        (!SRAR_ac_DW.UnitDelay_DSTATE_av));

    /* Update for UnitDelay: '<S425>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_av = rtb_LogicalOperator_pu;

    /* End of Outputs for SubSystem: '<S416>/EdgeRising' */

    /* Switch: '<S416>/Switch1' incorporates:
     *  Logic: '<S416>/OR'
     *  Logic: '<S416>/OR1'
     */
    if ((!rtb_LogicalOperator_pu) || rtb_LogicalOperator_hj)
    {
        /* Switch: '<S416>/Switch1' incorporates:
         *  Constant: '<S416>/ConstantValue1'
         */
        rtb_TmpSignalConversionAtVeB_lk = 0.0F;
    }
    else
    {
        /* Switch: '<S416>/Switch1' incorporates:
         *  Constant: '<S413>/Calib'
         *  Constant: '<S414>/Calib'
         *  MinMax: '<S416>/Minimum'
         *  Sum: '<S416>/Summation'
         *  UnitDelay: '<S416>/UnitDelay'
         */
        rtb_TmpSignalConversionAtVeB_lk = fminf
            (KeSRAR_t_DisablePwrPanelTurnONDelay, KeSRAR_t_dT +
             SRAR_ac_DW.UnitDelay_DSTATE_oz);
    }

    /* End of Switch: '<S416>/Switch1' */

    /* Update for UnitDelay: '<S416>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_oz = rtb_TmpSignalConversionAtVeB_lk;

    /* End of Outputs for SubSystem: '<S242>/TurnOnDelayTime1' */

    /* Logic: '<S243>/Logical34' incorporates:
     *  Constant: '<S426>/Calib'
     *  Constant: '<S427>/Calib'
     *  Constant: '<S428>/Calib'
     *  Constant: '<S429>/Calib'
     *  Constant: '<S430>/Calib'
     *  Constant: '<S431>/Calib'
     *  Constant: '<S432>/Calib'
     *  Constant: '<S433>/Calib'
     *  Constant: '<S434>/Calib'
     *  Constant: '<S439>/ConstantValue'
     *  Constant: '<S440>/ConstantValue'
     *  Constant: '<S441>/ConstantValue'
     *  Constant: '<S442>/ConstantValue'
     *  Constant: '<S443>/ConstantValue'
     *  Constant: '<S444>/ConstantValue'
     *  Constant: '<S445>/ConstantValue'
     *  Constant: '<S446>/ConstantValue'
     *  Logic: '<S243>/Logical35'
     *  Logic: '<S437>/Logical13'
     *  RelationalOperator: '<S439>/Comparison'
     *  RelationalOperator: '<S440>/Comparison'
     *  RelationalOperator: '<S441>/Comparison'
     *  RelationalOperator: '<S442>/Comparison'
     *  RelationalOperator: '<S443>/Comparison'
     *  RelationalOperator: '<S444>/Comparison'
     *  RelationalOperator: '<S445>/Comparison'
     *  RelationalOperator: '<S446>/Comparison'
     *  S-Function (sfix_bitop): '<S439>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S440>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S441>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S442>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S443>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S444>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S445>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S446>/BitwiseLogicalOperator6'
     */
    rtb_LogicalOperator_hj = ((((((((((rtb_Switch1_n3 &
        KeSRAR_g_RA1_SelDisableRaceStart) >= 1U) || ((rtb_Switch1_ck &
        KeSRAR_g_RA2_SelDisableRaceStart) >= 1U)) || ((rtb_Switch1_mr &
        KeSRAR_g_RA3_SelDisableRaceStart) >= 1U)) || ((rtb_Switch1_bk &
        KeSRAR_g_RA4_SelDisableRaceStart) >= 1U)) || ((rtb_Switch1_c &
        KeSRAR_g_RA5_SelDisableRaceStart) >= 1U)) || ((rtb_Switch1_fxq &
        KeSRAR_g_RA6_SelDisableRaceStart) >= 1U)) || ((BitwiseLogicalOperator_b
        & KeSRAR_g_RA7_SelDisableRaceStart) >= 1U)) || ((rtb_Switch1_anw &
        KeSRAR_g_RA8_SelDisableRaceStart) >= 1U)) && (rtb_Switch1_pe ||
        (KeSRAR_b_DisableRaceStart_DebDisbl)));

    /* Outputs for Atomic SubSystem: '<S243>/TurnOnDelayTime1' */
    /* Outputs for Atomic SubSystem: '<S438>/EdgeRising' */
    /* Logic: '<S447>/AND' incorporates:
     *  Logic: '<S447>/OR1'
     *  UnitDelay: '<S447>/UnitDelay'
     */
    rtb_OR1_mq = (rtb_LogicalOperator_hj && (!SRAR_ac_DW.UnitDelay_DSTATE_bu));

    /* Update for UnitDelay: '<S447>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_bu = rtb_LogicalOperator_hj;

    /* End of Outputs for SubSystem: '<S438>/EdgeRising' */

    /* Switch: '<S438>/Switch1' incorporates:
     *  Logic: '<S438>/OR'
     *  Logic: '<S438>/OR1'
     */
    if ((!rtb_LogicalOperator_hj) || rtb_OR1_mq)
    {
        /* Switch: '<S438>/Switch1' incorporates:
         *  Constant: '<S438>/ConstantValue1'
         */
        rtb_TmpSignalConversionAtVeIN_k = 0.0F;
    }
    else
    {
        /* Switch: '<S438>/Switch1' incorporates:
         *  Constant: '<S435>/Calib'
         *  Constant: '<S436>/Calib'
         *  MinMax: '<S438>/Minimum'
         *  Sum: '<S438>/Summation'
         *  UnitDelay: '<S438>/UnitDelay'
         */
        rtb_TmpSignalConversionAtVeIN_k = fminf
            (KeSRAR_t_DisableRaceStartTurnONDelay, KeSRAR_t_dT +
             SRAR_ac_DW.UnitDelay_DSTATE_be);
    }

    /* End of Switch: '<S438>/Switch1' */

    /* Update for UnitDelay: '<S438>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_be = rtb_TmpSignalConversionAtVeIN_k;

    /* End of Outputs for SubSystem: '<S243>/TurnOnDelayTime1' */

    /* Logic: '<S244>/Logical34' incorporates:
     *  Constant: '<S448>/Calib'
     *  Constant: '<S449>/Calib'
     *  Constant: '<S450>/Calib'
     *  Constant: '<S451>/Calib'
     *  Constant: '<S452>/Calib'
     *  Constant: '<S453>/Calib'
     *  Constant: '<S454>/Calib'
     *  Constant: '<S455>/Calib'
     *  Constant: '<S456>/Calib'
     *  Constant: '<S461>/ConstantValue'
     *  Constant: '<S462>/ConstantValue'
     *  Constant: '<S463>/ConstantValue'
     *  Constant: '<S464>/ConstantValue'
     *  Constant: '<S465>/ConstantValue'
     *  Constant: '<S466>/ConstantValue'
     *  Constant: '<S467>/ConstantValue'
     *  Constant: '<S468>/ConstantValue'
     *  Logic: '<S244>/Logical35'
     *  Logic: '<S459>/Logical13'
     *  RelationalOperator: '<S461>/Comparison'
     *  RelationalOperator: '<S462>/Comparison'
     *  RelationalOperator: '<S463>/Comparison'
     *  RelationalOperator: '<S464>/Comparison'
     *  RelationalOperator: '<S465>/Comparison'
     *  RelationalOperator: '<S466>/Comparison'
     *  RelationalOperator: '<S467>/Comparison'
     *  RelationalOperator: '<S468>/Comparison'
     *  S-Function (sfix_bitop): '<S461>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S462>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S463>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S464>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S465>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S466>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S467>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S468>/BitwiseLogicalOperator6'
     */
    rtb_OR1_mq = ((((((((((rtb_Switch1_n3 & KeSRAR_g_RA1_SelDisblTCaseSpdSync) >=
                          1U) || ((rtb_Switch1_ck &
                           KeSRAR_g_RA2_SelDisblTCaseSpdSync) >= 1U)) ||
                        ((rtb_Switch1_mr & KeSRAR_g_RA3_SelDisblTCaseSpdSync) >=
                         1U)) || ((rtb_Switch1_bk &
                         KeSRAR_g_RA4_SelDisblTCaseSpdSync) >= 1U)) ||
                      ((rtb_Switch1_c & KeSRAR_g_RA5_SelDisblTCaseSpdSync) >= 1U))
                     || ((rtb_Switch1_fxq & KeSRAR_g_RA6_SelDisblTCaseSpdSync) >=
                         1U)) || ((BitwiseLogicalOperator_b &
                      KeSRAR_g_RA7_SelDisblTCaseSpdSync) >= 1U)) ||
                   ((rtb_Switch1_anw & KeSRAR_g_RA8_SelDisblTCaseSpdSync) >= 1U))
                  && (rtb_Switch1_pe || (KeSRAR_b_DisblTCaseSpdSync_DebDisbl)));

    /* Outputs for Atomic SubSystem: '<S244>/TurnOnDelayTime1' */
    /* Outputs for Atomic SubSystem: '<S460>/EdgeRising' */
    /* Logic: '<S469>/AND' incorporates:
     *  Logic: '<S469>/OR1'
     *  UnitDelay: '<S469>/UnitDelay'
     */
    rtb_AND_of = (rtb_OR1_mq && (!SRAR_ac_DW.UnitDelay_DSTATE_oe));

    /* Update for UnitDelay: '<S469>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_oe = rtb_OR1_mq;

    /* End of Outputs for SubSystem: '<S460>/EdgeRising' */

    /* Switch: '<S460>/Switch1' incorporates:
     *  Logic: '<S460>/OR'
     *  Logic: '<S460>/OR1'
     */
    if ((!rtb_OR1_mq) || rtb_AND_of)
    {
        /* Switch: '<S460>/Switch1' incorporates:
         *  Constant: '<S460>/ConstantValue1'
         */
        rtb_TmpSignalConversionAtVeVSDR = 0.0F;
    }
    else
    {
        /* Switch: '<S460>/Switch1' incorporates:
         *  Constant: '<S457>/Calib'
         *  Constant: '<S458>/Calib'
         *  MinMax: '<S460>/Minimum'
         *  Sum: '<S460>/Summation'
         *  UnitDelay: '<S460>/UnitDelay'
         */
        rtb_TmpSignalConversionAtVeVSDR = fminf
            (KeSRAR_t_DisblTCaseSpdSyncTurnONDelay, KeSRAR_t_dT +
             SRAR_ac_DW.UnitDelay_DSTATE_o);
    }

    /* End of Switch: '<S460>/Switch1' */

    /* Update for UnitDelay: '<S460>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_o = rtb_TmpSignalConversionAtVeVSDR;

    /* End of Outputs for SubSystem: '<S244>/TurnOnDelayTime1' */

    /* Logic: '<S525>/Logical7' incorporates:
     *  Constant: '<S560>/Calib'
     *  Constant: '<S563>/Calib'
     *  Constant: '<S564>/Calib'
     *  Constant: '<S565>/Calib'
     *  Constant: '<S566>/Calib'
     *  Constant: '<S567>/Calib'
     *  Constant: '<S568>/Calib'
     *  Constant: '<S569>/Calib'
     *  Constant: '<S570>/Calib'
     *  Constant: '<S573>/ConstantValue'
     *  Constant: '<S574>/ConstantValue'
     *  Constant: '<S575>/ConstantValue'
     *  Constant: '<S576>/ConstantValue'
     *  Constant: '<S577>/ConstantValue'
     *  Constant: '<S578>/ConstantValue'
     *  Constant: '<S579>/ConstantValue'
     *  Constant: '<S580>/ConstantValue'
     *  Logic: '<S525>/Logical9'
     *  Logic: '<S571>/Logical13'
     *  RelationalOperator: '<S573>/Comparison'
     *  RelationalOperator: '<S574>/Comparison'
     *  RelationalOperator: '<S575>/Comparison'
     *  RelationalOperator: '<S576>/Comparison'
     *  RelationalOperator: '<S577>/Comparison'
     *  RelationalOperator: '<S578>/Comparison'
     *  RelationalOperator: '<S579>/Comparison'
     *  RelationalOperator: '<S580>/Comparison'
     *  S-Function (sfix_bitop): '<S573>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S574>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S575>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S576>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S577>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S578>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S579>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S580>/BitwiseLogicalOperator6'
     */
    rtb_Logical7_n4 = ((((((((((rtb_Switch1_n3 & KeSRAR_g_RA1_SelBSGFltNonRecov)
        >= 1U) || ((rtb_Switch1_ck & KeSRAR_g_RA2_SelBSGFltNonRecov) >= 1U)) ||
        ((rtb_Switch1_mr & KeSRAR_g_RA3_SelBSGFltNonRecov) >= 1U)) ||
                            ((rtb_Switch1_bk & KeSRAR_g_RA4_SelBSGFltNonRecov) >=
        1U)) || ((rtb_Switch1_c & KeSRAR_g_RA5_SelBSGFltNonRecov) >= 1U)) ||
                          ((rtb_Switch1_fxq & KeSRAR_g_RA6_SelBSGFltNonRecov) >=
                           1U)) || ((BitwiseLogicalOperator_b &
                           KeSRAR_g_RA7_SelBSGFltNonRecov) >= 1U)) ||
                        ((rtb_Switch1_anw & KeSRAR_g_RA8_SelBSGFltNonRecov) >=
                         1U)) && (rtb_Switch1_pe ||
                        (KeSRAR_b_BSGFlt_Latch_DebDisbl)));

    /* Outputs for Atomic SubSystem: '<S525>/SignalLatchOnWithReset' */
    /* Logic: '<S572>/OR1' incorporates:
     *  Logic: '<S572>/OR'
     *  UnitDelay: '<S572>/UnitDelay'
     */
    rtb_OR1_kc = (rtb_Logical7_n4 || (rtb_VeSRAR_b_HVOverVoltFailur_2 &&
                   (SRAR_ac_DW.UnitDelay_DSTATE_de)));

    /* Update for UnitDelay: '<S572>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_de = rtb_OR1_kc;

    /* End of Outputs for SubSystem: '<S525>/SignalLatchOnWithReset' */

    /* RelationalOperator: '<S248>/Comparison1' incorporates:
     *  Constant: '<S534>/Constant'
     */
    rtb_TmpSignalConversionAtVeDFIR = (((uint32)rtb_TmpSignalConversionAtVeHP_f)
        == CeHPMR_e_Alternator);

    /* Switch: '<S535>/Switch1' incorporates:
     *  Constant: '<S539>/Calib'
     */
    if (KeSRAR_b_DsblInvA_OvrdEnbl)
    {
        /* Switch: '<S535>/Switch1' incorporates:
         *  Constant: '<S540>/Calib'
         */
        rtb_Switch1_pz = KeSRAR_b_DsblInvA_OvrdVal;
    }
    else
    {
        /* Switch: '<S535>/Switch1' incorporates:
         *  Constant: '<S599>/Calib'
         *  Constant: '<S600>/Calib'
         *  Constant: '<S601>/Calib'
         *  Constant: '<S602>/Calib'
         *  Constant: '<S603>/Calib'
         *  Constant: '<S604>/Calib'
         *  Constant: '<S605>/Calib'
         *  Constant: '<S606>/Calib'
         *  Constant: '<S607>/Calib'
         *  Constant: '<S608>/Calib'
         *  Constant: '<S610>/ConstantValue'
         *  Constant: '<S611>/ConstantValue'
         *  Constant: '<S612>/ConstantValue'
         *  Constant: '<S613>/ConstantValue'
         *  Constant: '<S614>/ConstantValue'
         *  Constant: '<S615>/ConstantValue'
         *  Constant: '<S616>/ConstantValue'
         *  Constant: '<S617>/ConstantValue'
         *  Logic: '<S527>/Logical31'
         *  Logic: '<S527>/Logical34'
         *  Logic: '<S527>/Logical35'
         *  Logic: '<S527>/Logical67'
         *  Logic: '<S609>/Logical13'
         *  RelationalOperator: '<S610>/Comparison'
         *  RelationalOperator: '<S611>/Comparison'
         *  RelationalOperator: '<S612>/Comparison'
         *  RelationalOperator: '<S613>/Comparison'
         *  RelationalOperator: '<S614>/Comparison'
         *  RelationalOperator: '<S615>/Comparison'
         *  RelationalOperator: '<S616>/Comparison'
         *  RelationalOperator: '<S617>/Comparison'
         *  S-Function (sfix_bitop): '<S610>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S611>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S612>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S613>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S614>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S615>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S616>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S617>/BitwiseLogicalOperator6'
         */
        rtb_Switch1_pz = (((((KeSRAR_b_LOCECM_DsblInvAEnbl) && rtb_Switch1_pz) &&
                            rtb_TmpSignalConversionAtVeDFIR) ||
                           (((((((((rtb_Switch1_n3 &
            KeSRAR_g_RA1_SelDsblInvARecov) >= 1U) || ((rtb_Switch1_ck &
            KeSRAR_g_RA2_SelDsblInvARecov) >= 1U)) || ((rtb_Switch1_mr &
            KeSRAR_g_RA3_SelDsblInvARecov) >= 1U)) || ((rtb_Switch1_bk &
            KeSRAR_g_RA4_SelDsblInvARecov) >= 1U)) || ((rtb_Switch1_c &
            KeSRAR_g_RA5_SelDsblInvARecov) >= 1U)) || ((rtb_Switch1_fxq &
                                KeSRAR_g_RA6_SelDsblInvARecov) >= 1U)) ||
                             ((BitwiseLogicalOperator_b &
                               KeSRAR_g_RA7_SelDsblInvARecov) >= 1U)) ||
                            ((rtb_Switch1_anw & KeSRAR_g_RA8_SelDsblInvARecov) >=
                             1U))) && (rtb_Switch1_pe ||
                           (KeSRAR_b_DsblInvA_Recov_DebDisbl)));
    }

    /* Outputs for Atomic SubSystem: '<S248>/TurnOnDelayTime1' */
    /* Outputs for Atomic SubSystem: '<S555>/EdgeRising' */
    /* Logic: '<S716>/AND' incorporates:
     *  Logic: '<S716>/OR1'
     *  UnitDelay: '<S716>/UnitDelay'
     */
    rtb_AND_of = (rtb_Switch1_pz && (!SRAR_ac_DW.UnitDelay_DSTATE_j0));

    /* Update for UnitDelay: '<S716>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_j0 = rtb_Switch1_pz;

    /* End of Outputs for SubSystem: '<S555>/EdgeRising' */

    /* Switch: '<S555>/Switch1' incorporates:
     *  Logic: '<S555>/OR'
     *  Logic: '<S555>/OR1'
     */
    if ((!rtb_Switch1_pz) || rtb_AND_of)
    {
        /* Switch: '<S555>/Switch1' incorporates:
         *  Constant: '<S555>/ConstantValue1'
         */
        rtb_Switch1_ml = 0.0F;
    }
    else
    {
        /* Switch: '<S555>/Switch1' incorporates:
         *  Constant: '<S546>/Calib'
         *  Constant: '<S552>/Calib'
         *  MinMax: '<S555>/Minimum'
         *  Sum: '<S555>/Summation'
         *  UnitDelay: '<S555>/UnitDelay'
         */
        rtb_Switch1_ml = fminf(KeSRAR_t_DsblInvATurnONDelay, KeSRAR_t_dT +
                               SRAR_ac_DW.UnitDelay_DSTATE_ej);
    }

    /* End of Switch: '<S555>/Switch1' */

    /* Logic: '<S555>/AND' incorporates:
     *  Constant: '<S546>/Calib'
     *  RelationalOperator: '<S555>/GreaterThan'
     */
    rtb_Switch1_pz = (rtb_Switch1_pz && (rtb_Switch1_ml >=
                       KeSRAR_t_DsblInvATurnONDelay));

    /* Update for UnitDelay: '<S555>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_ej = rtb_Switch1_ml;

    /* End of Outputs for SubSystem: '<S248>/TurnOnDelayTime1' */

    /* Logic: '<S529>/Logical60' incorporates:
     *  Constant: '<S636>/Calib'
     *  Constant: '<S637>/Calib'
     *  Constant: '<S638>/Calib'
     *  Constant: '<S639>/Calib'
     *  Constant: '<S640>/Calib'
     *  Constant: '<S641>/Calib'
     *  Constant: '<S642>/Calib'
     *  Constant: '<S643>/Calib'
     *  Constant: '<S644>/Calib'
     *  Constant: '<S646>/ConstantValue'
     *  Constant: '<S647>/ConstantValue'
     *  Constant: '<S648>/ConstantValue'
     *  Constant: '<S649>/ConstantValue'
     *  Constant: '<S650>/ConstantValue'
     *  Constant: '<S651>/ConstantValue'
     *  Constant: '<S652>/ConstantValue'
     *  Constant: '<S653>/ConstantValue'
     *  Logic: '<S529>/Logical61'
     *  Logic: '<S645>/Logical13'
     *  RelationalOperator: '<S646>/Comparison'
     *  RelationalOperator: '<S647>/Comparison'
     *  RelationalOperator: '<S648>/Comparison'
     *  RelationalOperator: '<S649>/Comparison'
     *  RelationalOperator: '<S650>/Comparison'
     *  RelationalOperator: '<S651>/Comparison'
     *  RelationalOperator: '<S652>/Comparison'
     *  RelationalOperator: '<S653>/Comparison'
     *  S-Function (sfix_bitop): '<S646>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S647>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S648>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S649>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S650>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S651>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S652>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S653>/BitwiseLogicalOperator6'
     */
    rtb_AND_of = ((((((((((rtb_Switch1_n3 & KeSRAR_g_RA1_SelMtrCZeroTrqActv) >=
                          1U) || ((rtb_Switch1_ck &
                           KeSRAR_g_RA2_SelMtrCZeroTrqActv) >= 1U)) ||
                        ((rtb_Switch1_mr & KeSRAR_g_RA3_SelMtrCZeroTrqActv) >=
                         1U)) || ((rtb_Switch1_bk &
                         KeSRAR_g_RA4_SelMtrCZeroTrqActv) >= 1U)) ||
                      ((rtb_Switch1_c & KeSRAR_g_RA5_SelMtrCZeroTrqActv) >= 1U))
                     || ((rtb_Switch1_fxq & KeSRAR_g_RA6_SelMtrCZeroTrqActv) >=
                         1U)) || ((BitwiseLogicalOperator_b &
                      KeSRAR_g_RA7_SelMtrCZeroTrqActv) >= 1U)) ||
                   ((rtb_Switch1_anw & KeSRAR_g_RA8_SelMtrCZeroTrqActv) >= 1U)) &&
                  (rtb_Switch1_pe || (KeSRAR_b_MtrCZeroTrq_DebDisbl)));

    /* Outputs for Atomic SubSystem: '<S248>/TurnOnDelayTime4' */
    /* Outputs for Atomic SubSystem: '<S558>/EdgeRising' */
    /* Logic: '<S719>/AND' incorporates:
     *  Logic: '<S719>/OR1'
     *  UnitDelay: '<S719>/UnitDelay'
     */
    rtb_VeSRAR_b_HVOverVoltFailur_b = (rtb_AND_of &&
        (!SRAR_ac_DW.UnitDelay_DSTATE_iif));

    /* Update for UnitDelay: '<S719>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_iif = rtb_AND_of;

    /* End of Outputs for SubSystem: '<S558>/EdgeRising' */

    /* Switch: '<S558>/Switch1' incorporates:
     *  Logic: '<S558>/OR'
     *  Logic: '<S558>/OR1'
     */
    if ((!rtb_AND_of) || rtb_VeSRAR_b_HVOverVoltFailur_b)
    {
        /* Switch: '<S558>/Switch1' incorporates:
         *  Constant: '<S558>/ConstantValue1'
         */
        rtb_Switch1_ml = 0.0F;
    }
    else
    {
        /* Switch: '<S558>/Switch1' incorporates:
         *  Constant: '<S550>/Calib'
         *  Constant: '<S552>/Calib'
         *  MinMax: '<S558>/Minimum'
         *  Sum: '<S558>/Summation'
         *  UnitDelay: '<S558>/UnitDelay'
         */
        rtb_Switch1_ml = fminf(KeSRAR_t_MtrCZeroTrqTurnONDelay, KeSRAR_t_dT +
                               SRAR_ac_DW.UnitDelay_DSTATE_jh);
    }

    /* End of Switch: '<S558>/Switch1' */
    /* End of Outputs for SubSystem: '<S248>/TurnOnDelayTime4' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeENGR_b_ECM_Feedback_HCP' */
    (void)Rte_Read_VeENGR_b_ECM_Feedback_HCP_Value
        (&rtb_VeSRAR_b_ECMFeedbackAfterOv);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRAR_MedTEB'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Outputs for Atomic SubSystem: '<S248>/TurnOnDelayTime4' */
    /* Logic: '<S558>/AND' incorporates:
     *  Constant: '<S550>/Calib'
     *  RelationalOperator: '<S558>/GreaterThan'
     */
    rtb_AND_of = (rtb_AND_of && (rtb_Switch1_ml >=
                   KeSRAR_t_MtrCZeroTrqTurnONDelay));

    /* Update for UnitDelay: '<S558>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_jh = rtb_Switch1_ml;

    /* End of Outputs for SubSystem: '<S248>/TurnOnDelayTime4' */

    /* Logic: '<S525>/Logical53' incorporates:
     *  Constant: '<S561>/Calib'
     */
    rtb_VeSRAR_b_ECMFeedbackAfterOv = (rtb_VeSRAR_b_ECMFeedbackAfterOv ||
        (KeSRAR_b_ECMFeedback_HybFdkECMEnbl));

    /* Logic: '<S530>/Logical25' incorporates:
     *  Constant: '<S656>/Calib'
     *  Constant: '<S657>/Calib'
     *  Constant: '<S658>/Calib'
     *  Constant: '<S659>/Calib'
     *  Constant: '<S660>/Calib'
     *  Constant: '<S661>/Calib'
     *  Constant: '<S662>/Calib'
     *  Constant: '<S663>/Calib'
     *  Constant: '<S664>/Calib'
     *  Constant: '<S667>/ConstantValue'
     *  Constant: '<S668>/ConstantValue'
     *  Constant: '<S669>/ConstantValue'
     *  Constant: '<S670>/ConstantValue'
     *  Constant: '<S671>/ConstantValue'
     *  Constant: '<S672>/ConstantValue'
     *  Constant: '<S673>/ConstantValue'
     *  Constant: '<S674>/ConstantValue'
     *  Logic: '<S530>/Logical26'
     *  Logic: '<S665>/Logical13'
     *  RelationalOperator: '<S667>/Comparison'
     *  RelationalOperator: '<S668>/Comparison'
     *  RelationalOperator: '<S669>/Comparison'
     *  RelationalOperator: '<S670>/Comparison'
     *  RelationalOperator: '<S671>/Comparison'
     *  RelationalOperator: '<S672>/Comparison'
     *  RelationalOperator: '<S673>/Comparison'
     *  RelationalOperator: '<S674>/Comparison'
     *  S-Function (sfix_bitop): '<S667>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S668>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S669>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S670>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S671>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S672>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S673>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S674>/BitwiseLogicalOperator6'
     */
    rtb_VeSRAR_b_HVOverVoltFailur_b = ((((((((((rtb_Switch1_n3 &
        KeSRAR_g_RA1_SelOpenCntctrNonRecov) >= 1U) || ((rtb_Switch1_ck &
        KeSRAR_g_RA2_SelOpenCntctrNonRecov) >= 1U)) || ((rtb_Switch1_mr &
        KeSRAR_g_RA3_SelOpenCntctrNonRecov) >= 1U)) || ((rtb_Switch1_bk &
        KeSRAR_g_RA4_SelOpenCntctrNonRecov) >= 1U)) || ((rtb_Switch1_c &
        KeSRAR_g_RA5_SelOpenCntctrNonRecov) >= 1U)) || ((rtb_Switch1_fxq &
        KeSRAR_g_RA6_SelOpenCntctrNonRecov) >= 1U)) ||
        ((BitwiseLogicalOperator_b & KeSRAR_g_RA7_SelOpenCntctrNonRecov) >= 1U))
        || ((rtb_Switch1_anw & KeSRAR_g_RA8_SelOpenCntctrNonRecov) >= 1U)) &&
        (rtb_Switch1_pe || (KeSRAR_b_OpnBattContc_Latch_DebDisbl)));

    /* Outputs for Atomic SubSystem: '<S530>/SignalLatchOnWithReset2' */
    /* Logic: '<S666>/OR1' incorporates:
     *  Logic: '<S666>/OR'
     *  UnitDelay: '<S666>/UnitDelay'
     */
    rtb_AND_ct = (rtb_VeSRAR_b_HVOverVoltFailur_b ||
                  (rtb_VeSRAR_b_HVOverVoltFailur_2 &&
                   (SRAR_ac_DW.UnitDelay_DSTATE_ba)));

    /* Update for UnitDelay: '<S666>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_ba = rtb_AND_ct;

    /* End of Outputs for SubSystem: '<S530>/SignalLatchOnWithReset2' */

    /* Switch: '<S536>/Switch1' incorporates:
     *  Constant: '<S542>/Calib'
     *  Constant: '<S562>/Calib'
     *  Switch: '<S559>/Switch1'
     */
    if (KeSRAR_b_HybFeedback_ECM_OvrdEnbl)
    {
        /* Switch: '<S536>/Switch1' incorporates:
         *  Constant: '<S543>/Calib'
         */
        rtb_Logical7_n4 = KeSRAR_b_HybFeedback_ECM_OvrdVal;
    }
    else
    {
        if (KeSRAR_b_HybFdkBk_ECM_Latch)
        {
            /* Switch: '<S559>/Switch1' */
            rtb_Logical7_n4 = rtb_OR1_kc;
        }

        /* Switch: '<S536>/Switch1' incorporates:
         *  Constant: '<S541>/Calib'
         *  Constant: '<S581>/Calib'
         *  Constant: '<S582>/Calib'
         *  Constant: '<S583>/Calib'
         *  Constant: '<S584>/Calib'
         *  Constant: '<S585>/Calib'
         *  Constant: '<S586>/Calib'
         *  Constant: '<S587>/Calib'
         *  Constant: '<S588>/Calib'
         *  Constant: '<S589>/Calib'
         *  Constant: '<S591>/ConstantValue'
         *  Constant: '<S592>/ConstantValue'
         *  Constant: '<S593>/ConstantValue'
         *  Constant: '<S594>/ConstantValue'
         *  Constant: '<S595>/ConstantValue'
         *  Constant: '<S596>/ConstantValue'
         *  Constant: '<S597>/ConstantValue'
         *  Constant: '<S598>/ConstantValue'
         *  Logic: '<S248>/AND6'
         *  Logic: '<S248>/Logical1'
         *  Logic: '<S248>/Logical10'
         *  Logic: '<S526>/AND1'
         *  Logic: '<S526>/Logical19'
         *  Logic: '<S526>/Logical20'
         *  Logic: '<S590>/Logical13'
         *  RelationalOperator: '<S591>/Comparison'
         *  RelationalOperator: '<S592>/Comparison'
         *  RelationalOperator: '<S593>/Comparison'
         *  RelationalOperator: '<S594>/Comparison'
         *  RelationalOperator: '<S595>/Comparison'
         *  RelationalOperator: '<S596>/Comparison'
         *  RelationalOperator: '<S597>/Comparison'
         *  RelationalOperator: '<S598>/Comparison'
         *  S-Function (sfix_bitop): '<S591>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S592>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S593>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S594>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S595>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S596>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S597>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S598>/BitwiseLogicalOperator6'
         *  Switch: '<S559>/Switch1'
         */
        rtb_Logical7_n4 = ((((((((((((rtb_Switch1_n3 &
            KeSRAR_g_RA1_SelBSGFltRecov) < 1U) && ((rtb_Switch1_ck &
            KeSRAR_g_RA2_SelBSGFltRecov) < 1U)) && ((rtb_Switch1_mr &
            KeSRAR_g_RA3_SelBSGFltRecov) < 1U)) && ((rtb_Switch1_bk &
            KeSRAR_g_RA4_SelBSGFltRecov) < 1U)) && ((rtb_Switch1_c &
            KeSRAR_g_RA5_SelBSGFltRecov) < 1U)) && ((rtb_Switch1_fxq &
            KeSRAR_g_RA6_SelBSGFltRecov) < 1U)) && ((BitwiseLogicalOperator_b &
            KeSRAR_g_RA7_SelBSGFltRecov) < 1U)) && ((rtb_Switch1_anw &
                                KeSRAR_g_RA8_SelBSGFltRecov) < 1U)) ||
                             (rtb_TmpSignalConversionAtVeB_j2 &&
                              (!KeSRAR_b_BSGFlt_Recov_DebDisbl))) &&
                            (!rtb_Logical7_n4)) &&
                           ((!rtb_TmpSignalConversionAtVeDFIR) ||
                            (!KeSRAR_b_HybFdBkPropSysMdChk_Enbl)));
    }

    /* End of Switch: '<S536>/Switch1' */

    /* Switch: '<S537>/Switch1' incorporates:
     *  Constant: '<S544>/Calib'
     *  Constant: '<S655>/Calib'
     *  Switch: '<S654>/Switch1'
     */
    if (KeSRAR_b_OpnBattContc_OvrdEnbl)
    {
        /* Switch: '<S537>/Switch1' incorporates:
         *  Constant: '<S545>/Calib'
         */
        rtb_OR1_kc = KeSRAR_b_OpnBattContc_OvrdVal;
    }
    else
    {
        if (KeSRAR_b_OpnBattContc_Latch)
        {
            /* Switch: '<S654>/Switch1' */
            rtb_VeSRAR_b_HVOverVoltFailur_b = rtb_AND_ct;
        }

        /* Switch: '<S537>/Switch1' incorporates:
         *  Constant: '<S675>/Calib'
         *  Constant: '<S676>/Calib'
         *  Constant: '<S677>/Calib'
         *  Constant: '<S678>/Calib'
         *  Constant: '<S679>/Calib'
         *  Constant: '<S680>/Calib'
         *  Constant: '<S681>/Calib'
         *  Constant: '<S682>/Calib'
         *  Constant: '<S683>/Calib'
         *  Constant: '<S685>/ConstantValue'
         *  Constant: '<S686>/ConstantValue'
         *  Constant: '<S687>/ConstantValue'
         *  Constant: '<S688>/ConstantValue'
         *  Constant: '<S689>/ConstantValue'
         *  Constant: '<S690>/ConstantValue'
         *  Constant: '<S691>/ConstantValue'
         *  Constant: '<S692>/ConstantValue'
         *  Logic: '<S248>/Logical24'
         *  Logic: '<S531>/Logical18'
         *  Logic: '<S531>/Logical21'
         *  Logic: '<S684>/Logical13'
         *  RelationalOperator: '<S685>/Comparison'
         *  RelationalOperator: '<S686>/Comparison'
         *  RelationalOperator: '<S687>/Comparison'
         *  RelationalOperator: '<S688>/Comparison'
         *  RelationalOperator: '<S689>/Comparison'
         *  RelationalOperator: '<S690>/Comparison'
         *  RelationalOperator: '<S691>/Comparison'
         *  RelationalOperator: '<S692>/Comparison'
         *  S-Function (sfix_bitop): '<S685>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S686>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S687>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S688>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S689>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S690>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S691>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S692>/BitwiseLogicalOperator6'
         */
        rtb_OR1_kc = (((((((((((rtb_Switch1_n3 & KeSRAR_g_RA1_SelOpenCntctrRecov)
                               >= 1U) || ((rtb_Switch1_ck &
                                KeSRAR_g_RA2_SelOpenCntctrRecov) >= 1U)) ||
                             ((rtb_Switch1_mr & KeSRAR_g_RA3_SelOpenCntctrRecov)
                              >= 1U)) || ((rtb_Switch1_bk &
                              KeSRAR_g_RA4_SelOpenCntctrRecov) >= 1U)) ||
                           ((rtb_Switch1_c & KeSRAR_g_RA5_SelOpenCntctrRecov) >=
                            1U)) || ((rtb_Switch1_fxq &
                            KeSRAR_g_RA6_SelOpenCntctrRecov) >= 1U)) ||
                         ((BitwiseLogicalOperator_b &
                           KeSRAR_g_RA7_SelOpenCntctrRecov) >= 1U)) ||
                        ((rtb_Switch1_anw & KeSRAR_g_RA8_SelOpenCntctrRecov) >=
                         1U)) && (rtb_Switch1_pe ||
                        (KeSRAR_b_OpnBattContc_Recov_DebDisbl))) ||
                      rtb_VeSRAR_b_HVOverVoltFailur_b);
    }

    /* Outputs for Atomic SubSystem: '<S248>/TurnOffDelayTime' */
    /* Outputs for Atomic SubSystem: '<S553>/EdgeFalling1' */
    /* Logic: '<S714>/AND' incorporates:
     *  Logic: '<S714>/OR1'
     *  UnitDelay: '<S714>/UnitDelay'
     */
    rtb_AND_ct = ((!rtb_Logical7_n4) && (SRAR_ac_DW.UnitDelay_DSTATE_cg));

    /* Update for UnitDelay: '<S714>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_cg = rtb_Logical7_n4;

    /* End of Outputs for SubSystem: '<S553>/EdgeFalling1' */

    /* Switch: '<S553>/Switch' */
    if (rtb_AND_ct)
    {
        /* Switch: '<S553>/Switch' incorporates:
         *  Constant: '<S549>/Calib'
         */
        rtb_Switch1_ml = KeSRAR_t_HybFeedback_ECMTurnOFFDelay;
    }
    else
    {
        /* Switch: '<S553>/Switch' incorporates:
         *  Constant: '<S552>/Calib'
         *  Constant: '<S553>/ConstantValue1'
         *  MinMax: '<S553>/Minimum'
         *  Sum: '<S553>/Summation'
         *  UnitDelay: '<S553>/UnitDelay'
         */
        rtb_Switch1_ml = fmaxf(SRAR_ac_DW.UnitDelay_DSTATE_px - KeSRAR_t_dT,
                               0.0F);
    }

    /* End of Switch: '<S553>/Switch' */

    /* Logic: '<S553>/AND' incorporates:
     *  Constant: '<S553>/ConstantValue2'
     *  RelationalOperator: '<S553>/GreaterThan'
     */
    rtb_AND_ct = (rtb_Logical7_n4 || (rtb_Switch1_ml > 0.0F));

    /* Update for UnitDelay: '<S553>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_px = rtb_Switch1_ml;

    /* End of Outputs for SubSystem: '<S248>/TurnOffDelayTime' */

    /* Outputs for Atomic SubSystem: '<S248>/TurnOffDelayTime1' */
    /* Outputs for Atomic SubSystem: '<S554>/EdgeFalling1' */
    /* Logic: '<S715>/AND' incorporates:
     *  Logic: '<S715>/OR1'
     *  UnitDelay: '<S715>/UnitDelay'
     */
    rtb_Logical7_n4 = ((!rtb_VeSRAR_b_ECMFeedbackAfterOv) &&
                       (SRAR_ac_DW.UnitDelay_DSTATE_oa));

    /* Update for UnitDelay: '<S715>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_oa = rtb_VeSRAR_b_ECMFeedbackAfterOv;

    /* End of Outputs for SubSystem: '<S554>/EdgeFalling1' */

    /* Switch: '<S554>/Switch' */
    if (rtb_Logical7_n4)
    {
        /* Switch: '<S554>/Switch' incorporates:
         *  Constant: '<S548>/Calib'
         */
        rtb_Switch1_ml = KeSRAR_t_Feedback_HCPTurnOFFDelay;
    }
    else
    {
        /* Switch: '<S554>/Switch' incorporates:
         *  Constant: '<S552>/Calib'
         *  Constant: '<S554>/ConstantValue1'
         *  MinMax: '<S554>/Minimum'
         *  Sum: '<S554>/Summation'
         *  UnitDelay: '<S554>/UnitDelay'
         */
        rtb_Switch1_ml = fmaxf(SRAR_ac_DW.UnitDelay_DSTATE_bw - KeSRAR_t_dT,
                               0.0F);
    }

    /* End of Switch: '<S554>/Switch' */

    /* Update for UnitDelay: '<S554>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_bw = rtb_Switch1_ml;

    /* End of Outputs for SubSystem: '<S248>/TurnOffDelayTime1' */

    /* Outputs for Atomic SubSystem: '<S248>/TurnOnDelayTime2' */
    /* Outputs for Atomic SubSystem: '<S556>/EdgeRising' */
    /* Logic: '<S717>/AND' incorporates:
     *  Logic: '<S717>/OR1'
     *  UnitDelay: '<S717>/UnitDelay'
     */
    rtb_Logical7_n4 = (rtb_OR1_kc && (!SRAR_ac_DW.UnitDelay_DSTATE_hg4));

    /* Update for UnitDelay: '<S717>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_hg4 = rtb_OR1_kc;

    /* End of Outputs for SubSystem: '<S556>/EdgeRising' */

    /* Switch: '<S556>/Switch1' incorporates:
     *  Logic: '<S556>/OR'
     *  Logic: '<S556>/OR1'
     */
    if ((!rtb_OR1_kc) || rtb_Logical7_n4)
    {
        /* Switch: '<S556>/Switch1' incorporates:
         *  Constant: '<S556>/ConstantValue1'
         */
        rtb_Switch1_eo = 0.0F;
    }
    else
    {
        /* Switch: '<S556>/Switch1' incorporates:
         *  Constant: '<S551>/Calib'
         *  Constant: '<S552>/Calib'
         *  MinMax: '<S556>/Minimum'
         *  Sum: '<S556>/Summation'
         *  UnitDelay: '<S556>/UnitDelay'
         */
        rtb_Switch1_eo = fminf(KeSRAR_t_OpnBattCntctrTurnONDelay, KeSRAR_t_dT +
                               SRAR_ac_DW.UnitDelay_DSTATE_b);
    }

    /* End of Switch: '<S556>/Switch1' */

    /* Logic: '<S556>/AND' incorporates:
     *  Constant: '<S551>/Calib'
     *  RelationalOperator: '<S556>/GreaterThan'
     */
    rtb_Logical7_n4 = (rtb_OR1_kc && (rtb_Switch1_eo >=
                        KeSRAR_t_OpnBattCntctrTurnONDelay));

    /* Update for UnitDelay: '<S556>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_b = rtb_Switch1_eo;

    /* End of Outputs for SubSystem: '<S248>/TurnOnDelayTime2' */

    /* Update for UnitDelay: '<S1482>/UnitDelay' incorporates:
     *  SignalConversion generated from: '<S2>/VePMDR_e_PMM_PowerMode'
     */
    SRAR_ac_DW.UnitDelay_DSTATE_it = rtb_TmpSignalConversionAtVePM_g;

    /* Update for UnitDelay: '<S1486>/UnitDelay1' */
    SRAR_ac_DW.UnitDelay1_DSTATE_o = rtb_VeSRAR_b_EnblPlgInEngRunTmr;

    /* Update for UnitDelay: '<S1484>/UnitDelay2' */
    SRAR_ac_DW.UnitDelay2_DSTATE = rtb_VariantMerge_For_Variant_So;

    /* Update for UnitDelay: '<S1487>/UnitDelay3' */
    SRAR_ac_DW.UnitDelay3_DSTATE = rtb_VeSRAR_b_EnblUnplgVehInPark;

    /* Update for UnitDelay: '<S1688>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_gi = rtb_Logical7_n4;

    /* Update for UnitDelay: '<S262>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_hq = rtb_TmpSignalConversionAtVeES_j;

    /* Update for UnitDelay: '<S24>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_eb = rtb_TmpSignalConversionAtVeES_o;

    /* Update for UnitDelay: '<S19>/UnitDelay' */
    SRAR_ac_DW.UnitDelay_DSTATE_kg = rtb_TmpSignalConversionAtVeIMPR;

    /* Update for UnitDelay: '<S19>/UnitDelay1' */
    SRAR_ac_DW.UnitDelay1_DSTATE_m = rtb_Logical11;

    /* Update for UnitDelay: '<S1001>/UnitDelay' incorporates:
     *  SignalConversion generated from: '<S2>/VeOHSR_e_RngDsrd'
     */
    SRAR_ac_DW.UnitDelay_DSTATE_pp = rtb_TmpSignalConversionAtVeOHSR;

    /* Update for UnitDelay: '<S1001>/UnitDelay2' */
    SRAR_ac_DW.UnitDelay2_DSTATE_c = rtb_TmpSignalConversionAtVeA_ce;

    /* Update for UnitDelay: '<S1000>/UnitDelay1' incorporates:
     *  SignalConversion generated from: '<S2>/VeOHSR_e_RngDsrd'
     */
    SRAR_ac_DW.UnitDelay1_DSTATE_d = rtb_TmpSignalConversionAtVeOHSR;

    /* Update for UnitDelay: '<S1000>/UnitDelay3' */
    SRAR_ac_DW.UnitDelay3_DSTATE_o = rtb_Comparison5_d;

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeSRAR_e_LoCHCP_TCMECM_ePT' incorporates:
     *  DataTypeConversion: '<S2>/DataTypeConversion'
     */
    (void)Rte_Write_VeSRAR_e_LoCHCP_TCMECM_ePT_Value
        ((TeSRAR_e_TCMECMComFail_ePTCAN)Switch1);

    /* Outport: '<Root>/VeSRAR_b_HybAlternatorMd' incorporates:
     *  SignalConversion generated from: '<S2>/HybAlternatorMd'
     */
    (void)Rte_Write_VeSRAR_b_HybAlternatorMd_Value(rtb_Switch1_ajp);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Switch: '<S923>/Switch1' incorporates:
     *  Constant: '<S924>/Calib'
     *  Constant: '<S925>/Calib'
     *  Constant: '<S926>/Calib'
     *  Constant: '<S927>/Calib'
     *  Constant: '<S928>/Calib'
     *  Constant: '<S929>/Calib'
     *  Constant: '<S930>/Calib'
     *  Constant: '<S931>/Calib'
     *  Constant: '<S932>/Calib'
     *  Constant: '<S933>/Calib'
     *  Constant: '<S935>/ConstantValue'
     *  Constant: '<S936>/ConstantValue'
     *  Constant: '<S937>/ConstantValue'
     *  Constant: '<S938>/ConstantValue'
     *  Constant: '<S939>/ConstantValue'
     *  Constant: '<S940>/ConstantValue'
     *  Constant: '<S941>/ConstantValue'
     *  Constant: '<S942>/ConstantValue'
     *  Logic: '<S934>/Logical13'
     *  RelationalOperator: '<S935>/Comparison'
     *  RelationalOperator: '<S936>/Comparison'
     *  RelationalOperator: '<S937>/Comparison'
     *  RelationalOperator: '<S938>/Comparison'
     *  RelationalOperator: '<S939>/Comparison'
     *  RelationalOperator: '<S940>/Comparison'
     *  RelationalOperator: '<S941>/Comparison'
     *  RelationalOperator: '<S942>/Comparison'
     *  S-Function (sfix_bitop): '<S935>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S936>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S937>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S938>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S939>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S940>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S941>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S942>/BitwiseLogicalOperator6'
     */
    if (KeSRAR_b_Inhibit_AWDTerrainMode_OvrdEnbl)
    {
        rtb_Switch_g_idx_1 = KeSRAR_b_Inhibit_AWDTerrainMode_OvrdVal;
    }
    else
    {
        rtb_Switch_g_idx_1 = (((((((((rtb_Switch1_n3 &
            KeSRAR_g_RA1_SelInhibitAWDTerrainMode) >= 1U) || ((rtb_Switch1_ck &
            KeSRAR_g_RA2_SelInhibitAWDTerrainMode) >= 1U)) || ((rtb_Switch1_mr &
            KeSRAR_g_RA3_SelInhibitAWDTerrainMode) >= 1U)) || ((rtb_Switch1_bk &
            KeSRAR_g_RA4_SelInhibitAWDTerrainMode) >= 1U)) || ((rtb_Switch1_c &
            KeSRAR_g_RA5_SelInhibitAWDTerrainMode) >= 1U)) || ((rtb_Switch1_fxq
            & KeSRAR_g_RA6_SelInhibitAWDTerrainMode) >= 1U)) ||
                               ((BitwiseLogicalOperator_b &
            KeSRAR_g_RA7_SelInhibitAWDTerrainMode) >= 1U)) || ((rtb_Switch1_anw
                                & KeSRAR_g_RA8_SelInhibitAWDTerrainMode) >= 1U));
    }

    /* End of Switch: '<S923>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeSRAR_b_Inhibit_AWD_TerrainMode' incorporates:
     *  SignalConversion generated from: '<S2>/Inhibit_AWD_TerrainMode'
     */
    (void)Rte_Write_VeSRAR_b_Inhibit_AWD_TerrainMode_Value(rtb_Switch_g_idx_1);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Switch: '<S1108>/Switch1' incorporates:
     *  Constant: '<S1109>/Calib'
     *  Constant: '<S1110>/Calib'
     *  Constant: '<S1111>/Calib'
     *  Constant: '<S1112>/Calib'
     *  Constant: '<S1113>/Calib'
     *  Constant: '<S1114>/Calib'
     *  Constant: '<S1115>/Calib'
     *  Constant: '<S1116>/Calib'
     *  Constant: '<S1117>/Calib'
     *  Constant: '<S1118>/Calib'
     *  Constant: '<S1120>/ConstantValue'
     *  Constant: '<S1121>/ConstantValue'
     *  Constant: '<S1122>/ConstantValue'
     *  Constant: '<S1123>/ConstantValue'
     *  Constant: '<S1124>/ConstantValue'
     *  Constant: '<S1125>/ConstantValue'
     *  Constant: '<S1126>/ConstantValue'
     *  Constant: '<S1127>/ConstantValue'
     *  Logic: '<S1119>/Logical13'
     *  RelationalOperator: '<S1120>/Comparison'
     *  RelationalOperator: '<S1121>/Comparison'
     *  RelationalOperator: '<S1122>/Comparison'
     *  RelationalOperator: '<S1123>/Comparison'
     *  RelationalOperator: '<S1124>/Comparison'
     *  RelationalOperator: '<S1125>/Comparison'
     *  RelationalOperator: '<S1126>/Comparison'
     *  RelationalOperator: '<S1127>/Comparison'
     *  S-Function (sfix_bitop): '<S1120>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S1121>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S1122>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S1123>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S1124>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S1125>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S1126>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S1127>/BitwiseLogicalOperator6'
     */
    if (KeSRAR_b_Inhibit_RWDTerrainMode_OvrdEnbl)
    {
        rtb_Switch_g_idx_1 = KeSRAR_b_Inhibit_RWDTerrainMode_OvrdVal;
    }
    else
    {
        rtb_Switch_g_idx_1 = (((((((((rtb_Switch1_n3 &
            KeSRAR_g_RA1_SelInhibitRWDTerrainMode) >= 1U) || ((rtb_Switch1_ck &
            KeSRAR_g_RA2_SelInhibitRWDTerrainMode) >= 1U)) || ((rtb_Switch1_mr &
            KeSRAR_g_RA3_SelInhibitRWDTerrainMode) >= 1U)) || ((rtb_Switch1_bk &
            KeSRAR_g_RA4_SelInhibitRWDTerrainMode) >= 1U)) || ((rtb_Switch1_c &
            KeSRAR_g_RA5_SelInhibitRWDTerrainMode) >= 1U)) || ((rtb_Switch1_fxq
            & KeSRAR_g_RA6_SelInhibitRWDTerrainMode) >= 1U)) ||
                               ((BitwiseLogicalOperator_b &
            KeSRAR_g_RA7_SelInhibitRWDTerrainMode) >= 1U)) || ((rtb_Switch1_anw
                                & KeSRAR_g_RA8_SelInhibitRWDTerrainMode) >= 1U));
    }

    /* End of Switch: '<S1108>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeSRAR_b_Inhibit_RWD_TerrainMode' incorporates:
     *  SignalConversion generated from: '<S2>/Inhibit_RWD_TerrainMode'
     */
    (void)Rte_Write_VeSRAR_b_Inhibit_RWD_TerrainMode_Value(rtb_Switch_g_idx_1);

    /* Outport: '<Root>/VeSRAR_i_LHOM_Trans_PHEV' incorporates:
     *  SignalConversion generated from: '<S2>/LHOM_Trans_PHEV'
     */
    (void)Rte_Write_VeSRAR_i_LHOM_Trans_PHEV_Value
        (SRAR_ac_B.VeSRAR_i_LHOM_Trans_PHEV);

    /* Outport: '<Root>/VeSRAR_b_LV12PwrFreeReq_PHEV' incorporates:
     *  SignalConversion generated from: '<S2>/LV12PwrFreeReq_PHEV'
     */
    (void)Rte_Write_VeSRAR_b_LV12PwrFreeReq_PHEV_Value
        (SRAR_ac_B.VeSRAR_b_LV12PwrFreeReq_PHEV);

    /* Outport: '<Root>/VeSRAR_b_TrqEnblReq_TCM_PHEV' incorporates:
     *  SignalConversion generated from: '<S2>/TrqEnblRq_TCM_PHEV'
     */
    (void)Rte_Write_VeSRAR_b_TrqEnblReq_TCM_PHEV_Value
        (SRAR_ac_B.VeSRAR_b_TrqEnblReq_TCM_PHEV);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Outputs for Atomic SubSystem: '<S238>/TurnOnDelayTime1' */
    /* Outport: '<Root>/VeSRAR_scl_DisableAEMD' incorporates:
     *  Constant: '<S322>/Calib'
     *  Logic: '<S326>/AND'
     *  RelationalOperator: '<S326>/GreaterThan'
     *  SignalConversion generated from: '<S2>/VeSRAC_scl_DisableAEMD'
     */
    (void)Rte_Write_VeSRAR_scl_DisableAEMD_Value((float32)
        (((!rtb_TmpSignalConversionAtVeEN_b) || (rtb_Switch1_jp <
        KeSRAR_t_DisableAEMDTurnONDelay)) ? 1 : 0));

    /* End of Outputs for SubSystem: '<S238>/TurnOnDelayTime1' */

    /* Outport: '<Root>/VeSRAR_b_BSMLoCBusOff_CANC_C2' incorporates:
     *  Logic: '<S1393>/AND'
     *  SignalConversion generated from: '<S2>/VeSRAR_b_BSMLoCBusOff_CANC_C2'
     */
    (void)Rte_Write_VeSRAR_b_BSMLoCBusOff_CANC_C2_Value
        (VeSRAC_b_BSMLoCBusOff_CANC_C2);

    /* Outport: '<Root>/VeSRAR_b_CAN_HybFeedback_ECM' incorporates:
     *  Constant: '<S538>/Calib'
     *  Logic: '<S248>/Logical2'
     *  SignalConversion generated from: '<S2>/VeSRAR_b_CAN_HybFeedback_ECM'
     */
    (void)Rte_Write_VeSRAR_b_CAN_HybFeedback_ECM_Value(rtb_AND_ct ||
        (KeSRAR_b_CAN_HybFeedback_Dsbl));

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeSRAR_b_CreepTorqMode' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_b_CreepTorqMode_In'
     */
    (void)Rte_Write_VeSRAR_b_CreepTorqMode_Value(rtb_TmpSignalConversionAtVePLTR);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Outport: '<Root>/VeSRAR_b_DerateSumTrqMax' incorporates:
     *  Constant: '<S292>/Calib'
     *  Constant: '<S293>/Calib'
     *  Constant: '<S294>/Calib'
     *  Constant: '<S295>/Calib'
     *  Constant: '<S296>/Calib'
     *  Constant: '<S297>/Calib'
     *  Constant: '<S298>/Calib'
     *  Constant: '<S299>/Calib'
     *  Constant: '<S301>/ConstantValue'
     *  Constant: '<S302>/ConstantValue'
     *  Constant: '<S303>/ConstantValue'
     *  Constant: '<S304>/ConstantValue'
     *  Constant: '<S305>/ConstantValue'
     *  Constant: '<S306>/ConstantValue'
     *  Constant: '<S307>/ConstantValue'
     *  Constant: '<S308>/ConstantValue'
     *  Logic: '<S300>/Logical13'
     *  RelationalOperator: '<S301>/Comparison'
     *  RelationalOperator: '<S302>/Comparison'
     *  RelationalOperator: '<S303>/Comparison'
     *  RelationalOperator: '<S304>/Comparison'
     *  RelationalOperator: '<S305>/Comparison'
     *  RelationalOperator: '<S306>/Comparison'
     *  RelationalOperator: '<S307>/Comparison'
     *  RelationalOperator: '<S308>/Comparison'
     *  S-Function (sfix_bitop): '<S301>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S302>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S303>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S304>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S305>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S306>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S307>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S308>/BitwiseLogicalOperator6'
     *  SignalConversion generated from: '<S2>/VeSRAR_b_DerateSumTrqMax'
     */
    (void)Rte_Write_VeSRAR_b_DerateSumTrqMax_Value(((((((((rtb_Switch1_n3 &
        KeSRAR_g_RA1_DerateSumTrqMax) >= 1U) || ((rtb_Switch1_ck &
        KeSRAR_g_RA2_DerateSumTrqMax) >= 1U)) || ((rtb_Switch1_mr &
        KeSRAR_g_RA3_DerateSumTrqMax) >= 1U)) || ((rtb_Switch1_bk &
        KeSRAR_g_RA4_DerateSumTrqMax) >= 1U)) || ((rtb_Switch1_c &
        KeSRAR_g_RA5_DerateSumTrqMax) >= 1U)) || ((rtb_Switch1_fxq &
        KeSRAR_g_RA6_DerateSumTrqMax) >= 1U)) || ((BitwiseLogicalOperator_b &
        KeSRAR_g_RA7_DerateSumTrqMax) >= 1U)) || ((rtb_Switch1_anw &
        KeSRAR_g_RA8_DerateSumTrqMax) >= 1U));

    /* Outputs for Atomic SubSystem: '<S242>/TurnOnDelayTime1' */
    /* Outport: '<Root>/VeSRAR_b_Disable_PwrPanel' incorporates:
     *  Constant: '<S413>/Calib'
     *  Logic: '<S416>/AND'
     *  RelationalOperator: '<S416>/GreaterThan'
     *  SignalConversion generated from: '<S2>/VeSRAR_b_Disable_PwrPanel'
     */
    (void)Rte_Write_VeSRAR_b_Disable_PwrPanel_Value(rtb_LogicalOperator_pu &&
        (rtb_TmpSignalConversionAtVeB_lk >= KeSRAR_t_DisablePwrPanelTurnONDelay));

    /* End of Outputs for SubSystem: '<S242>/TurnOnDelayTime1' */

    /* Outputs for Atomic SubSystem: '<S243>/TurnOnDelayTime1' */
    /* Outport: '<Root>/VeSRAR_b_Disable_RaceStart' incorporates:
     *  Constant: '<S435>/Calib'
     *  Logic: '<S438>/AND'
     *  RelationalOperator: '<S438>/GreaterThan'
     *  SignalConversion generated from: '<S2>/VeSRAR_b_Disable_RaceStart'
     */
    (void)Rte_Write_VeSRAR_b_Disable_RaceStart_Value(rtb_LogicalOperator_hj &&
        (rtb_TmpSignalConversionAtVeIN_k >= KeSRAR_t_DisableRaceStartTurnONDelay));

    /* End of Outputs for SubSystem: '<S243>/TurnOnDelayTime1' */

    /* Outputs for Atomic SubSystem: '<S244>/TurnOnDelayTime1' */
    /* Outport: '<Root>/VeSRAR_b_Disable_TCaseSpeedSync' incorporates:
     *  Constant: '<S457>/Calib'
     *  Logic: '<S460>/AND'
     *  RelationalOperator: '<S460>/GreaterThan'
     *  SignalConversion generated from: '<S2>/VeSRAR_b_Disable_TCaseSpeedSync'
     */
    (void)Rte_Write_VeSRAR_b_Disable_TCaseSpeedSync_Value(rtb_OR1_mq &&
        (rtb_TmpSignalConversionAtVeVSDR >=
         KeSRAR_t_DisblTCaseSpdSyncTurnONDelay));

    /* End of Outputs for SubSystem: '<S244>/TurnOnDelayTime1' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeSRAR_b_DrvAllwd' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_b_DrvAllwd_in'
     */
    (void)Rte_Write_VeSRAR_b_DrvAllwd_Value(rtb_AND_ne);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Outport: '<Root>/VeSRAR_b_DsblAECoasting' incorporates:
     *  Logic: '<S1802>/AND'
     *  SignalConversion generated from: '<S2>/VeSRAR_b_DsblAECoasting'
     */
    (void)Rte_Write_VeSRAR_b_DsblAECoasting_Value
        (rtb_TmpSignalConversionAtVeB_j4);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeSRAR_b_DsblInvA' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_b_DsblInvA'
     */
    (void)Rte_Write_VeSRAR_b_DsblInvA_Value(rtb_Switch1_pz);

    /* Outport: '<Root>/VeSRAR_b_DsblInvB' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_b_DsblInvB'
     */
    (void)Rte_Write_VeSRAR_b_DsblInvB_Value(rtb_Logical1_ll);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Outport: '<Root>/VeSRAR_b_DsblInvC' incorporates:
     *  Logic: '<S524>/AND'
     *  SignalConversion generated from: '<S2>/VeSRAR_b_DsblInvC'
     */
    (void)Rte_Write_VeSRAR_b_DsblInvC_Value(rtb_AND_of);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeSRAR_b_DsblPSA_PlgIn_EngOn' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_b_DsblPSA_PlgIn_EngOn'
     */
    (void)Rte_Write_VeSRAR_b_DsblPSA_PlgIn_EngOn_Value
        (rtb_VariantMerge_For_Variant__i);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Outport: '<Root>/VeSRAR_b_Dsbl_MtrB_IdlSpd' incorporates:
     *  Constant: '<S370>/Calib'
     *  Constant: '<S371>/Calib'
     *  Constant: '<S372>/Calib'
     *  Constant: '<S373>/Calib'
     *  Constant: '<S374>/Calib'
     *  Constant: '<S375>/Calib'
     *  Constant: '<S376>/Calib'
     *  Constant: '<S377>/Calib'
     *  Constant: '<S379>/ConstantValue'
     *  Constant: '<S380>/ConstantValue'
     *  Constant: '<S381>/ConstantValue'
     *  Constant: '<S382>/ConstantValue'
     *  Constant: '<S383>/ConstantValue'
     *  Constant: '<S384>/ConstantValue'
     *  Constant: '<S385>/ConstantValue'
     *  Constant: '<S386>/ConstantValue'
     *  Logic: '<S378>/Logical13'
     *  RelationalOperator: '<S379>/Comparison'
     *  RelationalOperator: '<S380>/Comparison'
     *  RelationalOperator: '<S381>/Comparison'
     *  RelationalOperator: '<S382>/Comparison'
     *  RelationalOperator: '<S383>/Comparison'
     *  RelationalOperator: '<S384>/Comparison'
     *  RelationalOperator: '<S385>/Comparison'
     *  RelationalOperator: '<S386>/Comparison'
     *  S-Function (sfix_bitop): '<S379>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S380>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S381>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S382>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S383>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S384>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S385>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S386>/BitwiseLogicalOperator6'
     *  SignalConversion generated from: '<S2>/VeSRAR_b_Dsbl_MtrB_IdlSpd'
     */
    (void)Rte_Write_VeSRAR_b_Dsbl_MtrB_IdlSpd_Value(((((((((rtb_Switch1_n3 &
        KeSRAR_g_RA1_SelDsblP2IdlSpd) >= 1U) || ((rtb_Switch1_ck &
        KeSRAR_g_RA2_SelDsblP2IdlSpd) >= 1U)) || ((rtb_Switch1_mr &
        KeSRAR_g_RA3_SelDsblP2IdlSpd) >= 1U)) || ((rtb_Switch1_bk &
        KeSRAR_g_RA4_SelDsblP2IdlSpd) >= 1U)) || ((rtb_Switch1_c &
        KeSRAR_g_RA5_SelDsblP2IdlSpd) >= 1U)) || ((rtb_Switch1_fxq &
        KeSRAR_g_RA6_SelDsblP2IdlSpd) >= 1U)) || ((BitwiseLogicalOperator_b &
        KeSRAR_g_RA7_SelDsblP2IdlSpd) >= 1U)) || ((rtb_Switch1_anw &
        KeSRAR_g_RA8_SelDsblP2IdlSpd) >= 1U));

    /* Outport: '<Root>/VeSRAR_b_Dsbl_SL_PID' incorporates:
     *  Logic: '<S1392>/AND'
     *  SignalConversion generated from: '<S2>/VeSRAR_b_Dsbl_SL_PID'
     */
    (void)Rte_Write_VeSRAR_b_Dsbl_SL_PID_Value(VeSRAC_b_BSMLoCBusOff_CANC_C2);

    /* Outport: '<Root>/VeSRAR_b_EngShutDwn_EngOffKeyStrtinNeutralOnly' incorporates:
     *  Constant: '<S129>/Calib'
     *  Constant: '<S130>/Calib'
     *  Constant: '<S131>/Calib'
     *  Logic: '<S17>/Logical10'
     *  Logic: '<S17>/Logical15'
     *  Logic: '<S17>/Logical16'
     *  Logic: '<S17>/Logical17'
     *  Logic: '<S17>/Logical3'
     *  Logic: '<S17>/Logical5'
     *  Logic: '<S17>/Logical8'
     *  SignalConversion generated from: '<S2>/VeSRAR_b_EngShutDwn_EngOffKeyStrtinNeutralOnly'
     */
    (void)Rte_Write_VeSRAR_b_EngShutDwn_EngOffKeyStrtinNeutralOnly_Value
        ((KeSRAR_b_EngOffKeyStrtinNtrlOnly_EnblTurnOffTurtleLte) &&
         (((((!KeSRAR_b_LowFuel_TempEngShtDwnEnbl) || (!tmpRead_a)) &&
            ((!KeSRAR_b_AuxPumpFail_TempEngShtDwnEnbl) ||
             (!rtb_VeSRAR_b_AuxPumpFail_Inhibi))) && rtb_Comparison8) &&
          (!rtb_TmpSignalConversionAtVeIMPR)));

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeSRAR_b_EngStrtStpEngRun' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_b_EngStrtStpEngRun_In'
     */
    (void)Rte_Write_VeSRAR_b_EngStrtStpEngRun_Value(rtb_Logical11);

    /* Outport: '<Root>/VeSRAR_b_EngStrtStpEngShtDwnIntm' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_b_EngStrtStpEngShtDwnIntm'
     */
    (void)Rte_Write_VeSRAR_b_EngStrtStpEngShtDwnIntm_Value
        (rtb_TmpSignalConversionAtVeIMPR);

    /* Outport: '<Root>/VeSRAR_b_EngStrtStpEngShtDwn' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_b_EngStrtStpEngShtDwn_In'
     */
    (void)Rte_Write_VeSRAR_b_EngStrtStpEngShtDwn_Value
        (rtb_TmpSignalConversionAtVeIN_d);

    /* Outport: '<Root>/VeSRAR_b_FltShtDwnBPClsdCmnd' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_b_FltShtDwnBPClsdCmnd_In'
     */
    (void)Rte_Write_VeSRAR_b_FltShtDwnBPClsdCmnd_Value(rtb_Logical1_aq);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Outport: '<Root>/VeSRAR_b_FltShtDwnBPClsdCmnd_bfDly' incorporates:
     *  Logic: '<S1265>/LogicalOperator'
     *  SignalConversion generated from: '<S2>/VeSRAR_b_FltShtDwnBPClsdCmnd_bfDly'
     */
    (void)Rte_Write_VeSRAR_b_FltShtDwnBPClsdCmnd_bfDly_Value(rtb_Logical21);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeSRAR_b_FltShtDwnCmndRet' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_b_FltShtDwnCmndRet_In'
     */
    (void)Rte_Write_VeSRAR_b_FltShtDwnCmndRet_Value(AND_o);

    /* Outport: '<Root>/VeSRAR_b_FltShtDwnCmnd' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_b_FltShtDwnCmnd_In'
     */
    (void)Rte_Write_VeSRAR_b_FltShtDwnCmnd_Value(VeSRAR_b_FltShtDwnCmnd);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Outport: '<Root>/VeSRAR_b_FltShtDwnCmnd_bfDly' incorporates:
     *  Logic: '<S1237>/AND'
     *  SignalConversion generated from: '<S2>/VeSRAR_b_FltShtDwnCmnd_bfDly'
     */
    (void)Rte_Write_VeSRAR_b_FltShtDwnCmnd_bfDly_Value(rtb_Merge2);

    /* Outport: '<Root>/VeSRAR_b_HCP_Remedial_Stop' incorporates:
     *  Logic: '<S145>/AND'
     *  SignalConversion generated from: '<S2>/VeSRAR_b_HCP_Remedial_Stop_In'
     */
    (void)Rte_Write_VeSRAR_b_HCP_Remedial_Stop_Value
        (rtb_TmpSignalConversionAtVeIN_d);

    /* Outport: '<Root>/VeSRAR_b_HMI_LeaveIgnition_ON' incorporates:
     *  Constant: '<S86>/Constant'
     *  Constant: '<S87>/Constant'
     *  Constant: '<S88>/Constant'
     *  Constant: '<S89>/Constant'
     *  Constant: '<S90>/Constant'
     *  Constant: '<S91>/Constant'
     *  Logic: '<S14>/Logical2'
     *  Logic: '<S84>/Logical3'
     *  Logic: '<S85>/Logical1'
     *  RelationalOperator: '<S84>/Comparison5'
     *  RelationalOperator: '<S84>/Comparison6'
     *  RelationalOperator: '<S85>/Comparison1'
     *  RelationalOperator: '<S85>/Comparison2'
     *  RelationalOperator: '<S85>/Comparison3'
     *  RelationalOperator: '<S85>/Comparison4'
     *  SignalConversion generated from: '<S2>/VeSRAR_b_HMI_LeaveIgnition_ON'
     *  SignalConversion generated from: '<S2>/VeBPCR_e_BPCM_CommFail'
     *  SignalConversion generated from: '<S2>/VeINVR_e_MCPA_CommFail'
     *  SignalConversion generated from: '<S2>/VeINVR_e_MCPB_CommFail'
     */
    (void)Rte_Write_VeSRAR_b_HMI_LeaveIgnition_ON_Value((rtb_Switch1_fl ||
        ((((((((uint32)rtb_TmpSignalConversionAtVeIN_g) == CeSRAR_e_LOC_VDCM) ||
             (((uint32)rtb_TmpSignalConversionAtVeIN_g) ==
              CeSRAR_e_Bus_Failure_CAN)) || (((uint32)
        rtb_TmpSignalConversionAtVeI_ks) == CeSRAR_e_LOC_VDCM)) || (((uint32)
        rtb_TmpSignalConversionAtVeI_ks) == CeSRAR_e_Bus_Failure_CAN)) ||
          tmpRead_z) || tmpRead_10)) || (((((uint32)
        rtb_TmpSignalConversionAtVeB_k4) == CeSRAR_e_LOC_VDCM) || (((uint32)
        rtb_TmpSignalConversionAtVeB_k4) == CeSRAR_e_Bus_Failure_CAN)) ||
        tmpRead_11));

    /* Outputs for Atomic SubSystem: '<S248>/TurnOffDelayTime1' */
    /* Outport: '<Root>/VeSRAR_b_HybFeedback_ECM' incorporates:
     *  Constant: '<S554>/ConstantValue2'
     *  Logic: '<S248>/Logical52'
     *  Logic: '<S554>/AND'
     *  RelationalOperator: '<S554>/GreaterThan'
     *  SignalConversion generated from: '<S2>/VeSRAR_b_HybFeedback_ECM'
     */
    (void)Rte_Write_VeSRAR_b_HybFeedback_ECM_Value
        ((rtb_VeSRAR_b_ECMFeedbackAfterOv || (rtb_Switch1_ml > 0.0F)) &&
         rtb_AND_ct);

    /* End of Outputs for SubSystem: '<S248>/TurnOffDelayTime1' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeSRAR_b_HybPwrtrnRdcdPerfCmnd' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_b_HybPwrtrnRdcdPerfCmnd_In'
     */
    (void)Rte_Write_VeSRAR_b_HybPwrtrnRdcdPerfCmnd_Value(rtb_VeSRAR_b_CKSFailed);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Outport: '<Root>/VeSRAR_b_InhibitActvSpdLmtr' incorporates:
     *  Constant: '<S720>/Calib'
     *  Constant: '<S721>/Calib'
     *  Constant: '<S722>/Calib'
     *  Constant: '<S723>/Calib'
     *  Constant: '<S724>/Calib'
     *  Constant: '<S725>/Calib'
     *  Constant: '<S726>/Calib'
     *  Constant: '<S727>/Calib'
     *  Constant: '<S729>/ConstantValue'
     *  Constant: '<S730>/ConstantValue'
     *  Constant: '<S731>/ConstantValue'
     *  Constant: '<S732>/ConstantValue'
     *  Constant: '<S733>/ConstantValue'
     *  Constant: '<S734>/ConstantValue'
     *  Constant: '<S735>/ConstantValue'
     *  Constant: '<S736>/ConstantValue'
     *  Logic: '<S728>/Logical13'
     *  RelationalOperator: '<S729>/Comparison'
     *  RelationalOperator: '<S730>/Comparison'
     *  RelationalOperator: '<S731>/Comparison'
     *  RelationalOperator: '<S732>/Comparison'
     *  RelationalOperator: '<S733>/Comparison'
     *  RelationalOperator: '<S734>/Comparison'
     *  RelationalOperator: '<S735>/Comparison'
     *  RelationalOperator: '<S736>/Comparison'
     *  S-Function (sfix_bitop): '<S729>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S730>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S731>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S732>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S733>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S734>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S735>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S736>/BitwiseLogicalOperator6'
     *  SignalConversion generated from: '<S2>/VeSRAR_b_InhibitActvSpdLmtr'
     */
    (void)Rte_Write_VeSRAR_b_InhibitActvSpdLmtr_Value(((((((((rtb_Switch1_n3 &
        KeSRAR_g_RA1_InhibitActvSpdLmtr) >= 1U) || ((rtb_Switch1_ck &
        KeSRAR_g_RA2_InhibitActvSpdLmtr) >= 1U)) || ((rtb_Switch1_mr &
        KeSRAR_g_RA3_InhibitActvSpdLmtr) >= 1U)) || ((rtb_Switch1_bk &
        KeSRAR_g_RA4_InhibitActvSpdLmtr) >= 1U)) || ((rtb_Switch1_c &
        KeSRAR_g_RA5_InhibitActvSpdLmtr) >= 1U)) || ((rtb_Switch1_fxq &
        KeSRAR_g_RA6_InhibitActvSpdLmtr) >= 1U)) || ((BitwiseLogicalOperator_b &
        KeSRAR_g_RA7_InhibitActvSpdLmtr) >= 1U)) || ((rtb_Switch1_anw &
        KeSRAR_g_RA8_InhibitActvSpdLmtr) >= 1U));

    /* Outport: '<Root>/VeSRAR_b_InhibitCruise' incorporates:
     *  Constant: '<S737>/Calib'
     *  Constant: '<S738>/Calib'
     *  Constant: '<S739>/Calib'
     *  Constant: '<S740>/Calib'
     *  Constant: '<S741>/Calib'
     *  Constant: '<S742>/Calib'
     *  Constant: '<S743>/Calib'
     *  Constant: '<S744>/Calib'
     *  Constant: '<S746>/ConstantValue'
     *  Constant: '<S747>/ConstantValue'
     *  Constant: '<S748>/ConstantValue'
     *  Constant: '<S749>/ConstantValue'
     *  Constant: '<S750>/ConstantValue'
     *  Constant: '<S751>/ConstantValue'
     *  Constant: '<S752>/ConstantValue'
     *  Constant: '<S753>/ConstantValue'
     *  Logic: '<S745>/Logical13'
     *  RelationalOperator: '<S746>/Comparison'
     *  RelationalOperator: '<S747>/Comparison'
     *  RelationalOperator: '<S748>/Comparison'
     *  RelationalOperator: '<S749>/Comparison'
     *  RelationalOperator: '<S750>/Comparison'
     *  RelationalOperator: '<S751>/Comparison'
     *  RelationalOperator: '<S752>/Comparison'
     *  RelationalOperator: '<S753>/Comparison'
     *  S-Function (sfix_bitop): '<S746>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S747>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S748>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S749>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S750>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S751>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S752>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S753>/BitwiseLogicalOperator6'
     *  SignalConversion generated from: '<S2>/VeSRAR_b_InhibitCruise'
     */
    (void)Rte_Write_VeSRAR_b_InhibitCruise_Value(((((((((rtb_Switch1_n3 &
        KeSRAR_g_RA1_InhibitCruise) >= 1U) || ((rtb_Switch1_ck &
        KeSRAR_g_RA2_InhibitCruise) >= 1U)) || ((rtb_Switch1_mr &
        KeSRAR_g_RA3_InhibitCruise) >= 1U)) || ((rtb_Switch1_bk &
        KeSRAR_g_RA4_InhibitCruise) >= 1U)) || ((rtb_Switch1_c &
        KeSRAR_g_RA5_InhibitCruise) >= 1U)) || ((rtb_Switch1_fxq &
        KeSRAR_g_RA6_InhibitCruise) >= 1U)) || ((BitwiseLogicalOperator_b &
        KeSRAR_g_RA7_InhibitCruise) >= 1U)) || ((rtb_Switch1_anw &
        KeSRAR_g_RA8_InhibitCruise) >= 1U));

    /* Outport: '<Root>/VeSRAR_b_InhibitGSI' incorporates:
     *  Constant: '<S1187>/Calib'
     *  Constant: '<S1188>/Calib'
     *  Constant: '<S1189>/Calib'
     *  Constant: '<S1190>/Calib'
     *  Constant: '<S1191>/Calib'
     *  Constant: '<S1192>/Calib'
     *  Constant: '<S1193>/Calib'
     *  Logic: '<S1178>/Logical10'
     *  Logic: '<S1178>/Logical11'
     *  Logic: '<S1178>/Logical3'
     *  Logic: '<S1178>/Logical4'
     *  Logic: '<S1178>/Logical5'
     *  Logic: '<S1178>/Logical7'
     *  Logic: '<S1178>/Logical8'
     *  Logic: '<S1178>/Logical9'
     *  SignalConversion generated from: '<S2>/VeSRAR_b_InhibitGSI'
     */
    (void)Rte_Write_VeSRAR_b_InhibitGSI_Value((((((((KeSRAR_b_G1_InhibtGSI_Enbl)
        && rtb_TmpSignalConversionAtVeAD_p) || ((KeSRAR_b_G2_InhibtGSI_Enbl) &&
        rtb_AND_ik2)) || ((KeSRAR_b_G3_InhibtGSI_Enbl) && rtb_Logical18_i)) ||
        ((KeSRAR_b_G4_InhibtGSI_Enbl) && rtb_Logical13_mq)) ||
        ((KeSRAR_b_M1_InhibtGSI_Enbl) && Switch1_h)) ||
        ((KeSRAR_b_M2_InhibtGSI_Enbl) && Switch1_je)) ||
        ((KeSRAR_b_Neutrl_InhibtGSI_Enbl) && rtb_Logical6));

    /* Switch: '<S943>/Switch1' incorporates:
     *  Constant: '<S944>/Calib'
     *  Constant: '<S945>/Calib'
     *  Constant: '<S946>/Calib'
     *  Constant: '<S947>/Calib'
     *  Constant: '<S948>/Calib'
     *  Constant: '<S949>/Calib'
     *  Constant: '<S950>/Calib'
     *  Constant: '<S951>/Calib'
     *  Constant: '<S952>/Calib'
     *  Constant: '<S953>/Calib'
     *  Constant: '<S955>/ConstantValue'
     *  Constant: '<S956>/ConstantValue'
     *  Constant: '<S957>/ConstantValue'
     *  Constant: '<S958>/ConstantValue'
     *  Constant: '<S959>/ConstantValue'
     *  Constant: '<S960>/ConstantValue'
     *  Constant: '<S961>/ConstantValue'
     *  Constant: '<S962>/ConstantValue'
     *  Logic: '<S954>/Logical13'
     *  RelationalOperator: '<S955>/Comparison'
     *  RelationalOperator: '<S956>/Comparison'
     *  RelationalOperator: '<S957>/Comparison'
     *  RelationalOperator: '<S958>/Comparison'
     *  RelationalOperator: '<S959>/Comparison'
     *  RelationalOperator: '<S960>/Comparison'
     *  RelationalOperator: '<S961>/Comparison'
     *  RelationalOperator: '<S962>/Comparison'
     *  S-Function (sfix_bitop): '<S955>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S956>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S957>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S958>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S959>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S960>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S961>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S962>/BitwiseLogicalOperator6'
     */
    if (KeSRAR_b_Inhibit_DriveMode_OvrdEnbl)
    {
        rtb_Switch_g_idx_1 = KeSRAR_b_Inhibit_DriveMode_OvrdVal;
    }
    else
    {
        rtb_Switch_g_idx_1 = (((((((((rtb_Switch1_n3 &
            KeSRAR_g_RA1_SelInhibitDriveMode) >= 1U) || ((rtb_Switch1_ck &
            KeSRAR_g_RA2_SelInhibitDriveMode) >= 1U)) || ((rtb_Switch1_mr &
            KeSRAR_g_RA3_SelInhibitDriveMode) >= 1U)) || ((rtb_Switch1_bk &
            KeSRAR_g_RA4_SelInhibitDriveMode) >= 1U)) || ((rtb_Switch1_c &
            KeSRAR_g_RA5_SelInhibitDriveMode) >= 1U)) || ((rtb_Switch1_fxq &
            KeSRAR_g_RA6_SelInhibitDriveMode) >= 1U)) ||
                               ((BitwiseLogicalOperator_b &
            KeSRAR_g_RA7_SelInhibitDriveMode) >= 1U)) || ((rtb_Switch1_anw &
                                KeSRAR_g_RA8_SelInhibitDriveMode) >= 1U));
    }

    /* End of Switch: '<S943>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeSRAR_b_Inhibit_DriveMode' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_b_Inhibit_DriveMode'
     */
    (void)Rte_Write_VeSRAR_b_Inhibit_DriveMode_Value(rtb_Switch_g_idx_1);

    /* Outport: '<Root>/VeSRAR_b_Inhibit_Gear1Cmnd' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_b_Inhibit_Gear1Cmnd_In'
     */
    (void)Rte_Write_VeSRAR_b_Inhibit_Gear1Cmnd_Value
        (rtb_TmpSignalConversionAtVeAD_p);

    /* Outport: '<Root>/VeSRAR_b_Inhibit_Gear2Cmnd' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_b_Inhibit_Gear2Cmnd_In'
     */
    (void)Rte_Write_VeSRAR_b_Inhibit_Gear2Cmnd_Value(rtb_AND_ik2);

    /* Outport: '<Root>/VeSRAR_b_Inhibit_Gear3Cmnd' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_b_Inhibit_Gear3Cmnd_In'
     */
    (void)Rte_Write_VeSRAR_b_Inhibit_Gear3Cmnd_Value(rtb_Logical18_i);

    /* Outport: '<Root>/VeSRAR_b_Inhibit_Gear4Cmnd' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_b_Inhibit_Gear4Cmnd_In'
     */
    (void)Rte_Write_VeSRAR_b_Inhibit_Gear4Cmnd_Value(rtb_Logical13_mq);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Outport: '<Root>/VeSRAR_b_Inhibit_GearsCmnd' incorporates:
     *  Logic: '<S1178>/Logical14'
     *  SignalConversion generated from: '<S2>/VeSRAR_b_Inhibit_GearsCmnd_In'
     */
    (void)Rte_Write_VeSRAR_b_Inhibit_GearsCmnd_Value
        (((rtb_TmpSignalConversionAtVeAD_p && rtb_AND_ik2) && rtb_Logical18_i) &&
         rtb_Logical13_mq);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeSRAR_b_Inhibit_Mode1Cmnd' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_b_Inhibit_Mode1Cmnd_In'
     */
    (void)Rte_Write_VeSRAR_b_Inhibit_Mode1Cmnd_Value(Switch1_h);

    /* Outport: '<Root>/VeSRAR_b_Inhibit_Mode2Cmnd' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_b_Inhibit_Mode2Cmnd_In'
     */
    (void)Rte_Write_VeSRAR_b_Inhibit_Mode2Cmnd_Value(Switch1_je);

    /* Outport: '<Root>/VeSRAR_b_Inhibit_NeutralCmnd' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_b_Inhibit_NeutralCmnd'
     */
    (void)Rte_Write_VeSRAR_b_Inhibit_NeutralCmnd_Value(rtb_Logical6);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Outport: '<Root>/VeSRAR_b_Inhibit_eBoost' incorporates:
     *  Constant: '<S782>/Calib'
     *  Constant: '<S783>/Calib'
     *  Constant: '<S784>/Calib'
     *  Constant: '<S785>/Calib'
     *  Constant: '<S786>/Calib'
     *  Constant: '<S787>/Calib'
     *  Constant: '<S788>/Calib'
     *  Constant: '<S789>/Calib'
     *  Constant: '<S791>/ConstantValue'
     *  Constant: '<S792>/ConstantValue'
     *  Constant: '<S793>/ConstantValue'
     *  Constant: '<S794>/ConstantValue'
     *  Constant: '<S795>/ConstantValue'
     *  Constant: '<S796>/ConstantValue'
     *  Constant: '<S797>/ConstantValue'
     *  Constant: '<S798>/ConstantValue'
     *  Logic: '<S790>/Logical13'
     *  RelationalOperator: '<S791>/Comparison'
     *  RelationalOperator: '<S792>/Comparison'
     *  RelationalOperator: '<S793>/Comparison'
     *  RelationalOperator: '<S794>/Comparison'
     *  RelationalOperator: '<S795>/Comparison'
     *  RelationalOperator: '<S796>/Comparison'
     *  RelationalOperator: '<S797>/Comparison'
     *  RelationalOperator: '<S798>/Comparison'
     *  S-Function (sfix_bitop): '<S791>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S792>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S793>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S794>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S795>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S796>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S797>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S798>/BitwiseLogicalOperator6'
     *  SignalConversion generated from: '<S2>/VeSRAR_b_Inhibit_eBoost'
     */
    (void)Rte_Write_VeSRAR_b_Inhibit_eBoost_Value(((((((((rtb_Switch1_n3 &
        KeSRAR_g_RA1_InhibiteBoost) >= 1U) || ((rtb_Switch1_ck &
        KeSRAR_g_RA2_InhibiteBoost) >= 1U)) || ((rtb_Switch1_mr &
        KeSRAR_g_RA3_InhibiteBoost) >= 1U)) || ((rtb_Switch1_bk &
        KeSRAR_g_RA4_InhibiteBoost) >= 1U)) || ((rtb_Switch1_c &
        KeSRAR_g_RA5_InhibiteBoost) >= 1U)) || ((rtb_Switch1_fxq &
        KeSRAR_g_RA6_InhibiteBoost) >= 1U)) || ((BitwiseLogicalOperator_b &
        KeSRAR_g_RA7_InhibiteBoost) >= 1U)) || ((rtb_Switch1_anw &
        KeSRAR_g_RA8_InhibiteBoost) >= 1U));

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeSRAR_b_InplantCreepModeRqst' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_b_InplantCreepModeRqst'
     */
    (void)Rte_Write_VeSRAR_b_InplantCreepModeRqst_Value(rtb_Comparison1_l4);

    /* Outport: '<Root>/VeSRAR_b_InvrtrShortCntcrWeld' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_b_InvrtrShortCntcrWeld'
     */
    (void)Rte_Write_VeSRAR_b_InvrtrShortCntcrWeld_Value
        (rtb_TmpSignalConversionAtVeIN_p);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Outport: '<Root>/VeSRAR_b_K0AsyncCloseActv' incorporates:
     *  Constant: '<S2136>/Calib'
     *  Logic: '<S2112>/Logical7'
     *  SignalConversion generated from: '<S2>/VeSRAR_b_K0AsyncCloseActv'
     */
    (void)Rte_Write_VeSRAR_b_K0AsyncCloseActv_Value(rtb_Switch1_lt &&
        (KeSRAR_b_K0AsyncCloseOvrd));

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeSRAR_b_LimTrans' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_b_LimTrans_In'
     */
    (void)Rte_Write_VeSRAR_b_LimTrans_Value(rtb_OR1_ln);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Outport: '<Root>/VeSRAR_b_MtrAZeroTrqActv' incorporates:
     *  Logic: '<S523>/AND'
     *  SignalConversion generated from: '<S2>/VeSRAR_b_MtrAZeroTrqActv'
     */
    (void)Rte_Write_VeSRAR_b_MtrAZeroTrqActv_Value(rtb_Switch1_pz);

    /* Outport: '<Root>/VeSRAR_b_MtrA_AlternatorMdAvbl' incorporates:
     *  Logic: '<S1380>/Logical2'
     *  SignalConversion generated from: '<S2>/VeSRAR_b_MtrA_AlternatorMdAvbl'
     */
    (void)Rte_Write_VeSRAR_b_MtrA_AlternatorMdAvbl_Value
        ((VeSRAC_b_MtrAInvrtrFaulted) && tmpRead_w);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeSRAR_b_MtrBZeroTrqActv' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_b_MtrBZeroTrqActv'
     */
    (void)Rte_Write_VeSRAR_b_MtrBZeroTrqActv_Value(VeSRAR_b_MtrBZeroTrqActv);

    /* Outport: '<Root>/VeSRAR_b_MtrCZeroTrqActv' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_b_MtrCZeroTrqActv'
     */
    (void)Rte_Write_VeSRAR_b_MtrCZeroTrqActv_Value(rtb_AND_of);

    /* Outport: '<Root>/VeSRAR_b_NeutAllwd' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_b_NeutAllwd_in'
     */
    (void)Rte_Write_VeSRAR_b_NeutAllwd_Value(rtb_AND_iy);

    /* Outport: '<Root>/VeSRAR_b_OnePedalDriveDsbl' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_b_OnePedalDriveDsbl'
     */
    (void)Rte_Write_VeSRAR_b_OnePedalDriveDsbl_Value(Logical13_o);

    /* Outport: '<Root>/VeSRAR_b_OpnBattCntctr' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_b_OpnBattCntctr'
     */
    (void)Rte_Write_VeSRAR_b_OpnBattCntctr_Value(rtb_Logical7_n4);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Outport: '<Root>/VeSRAR_b_OutOfFuelSOCShtDwn' incorporates:
     *  Logic: '<S126>/AND'
     *  SignalConversion generated from: '<S2>/VeSRAR_b_OutOfFuelSOCShtDwn'
     */
    (void)Rte_Write_VeSRAR_b_OutOfFuelSOCShtDwn_Value
        (VeSRAC_b_OutOfFuelSOCShtDwn);

    /* Outputs for Atomic SubSystem: '<S13>/TurnOnDelaySample6' */
    /* Outport: '<Root>/VeSRAR_b_Popup_Msg1' incorporates:
     *  Constant: '<S74>/Calib'
     *  Logic: '<S79>/AND'
     *  RelationalOperator: '<S79>/GreaterThan'
     *  SignalConversion generated from: '<S2>/VeSRAR_b_Popup_Msg1'
     */
    (void)Rte_Write_VeSRAR_b_Popup_Msg1_Value(rtb_Logical2_j4 && (rtb_Switch1_b4
        >= KeSRAR_n_PopupMsg1_Dbnc));

    /* End of Outputs for SubSystem: '<S13>/TurnOnDelaySample6' */

    /* Outputs for Atomic SubSystem: '<S13>/TurnOnDelaySample2' */
    /* Outport: '<Root>/VeSRAR_b_Popup_Msg14' incorporates:
     *  Constant: '<S72>/Calib'
     *  Logic: '<S77>/AND'
     *  RelationalOperator: '<S77>/GreaterThan'
     *  SignalConversion generated from: '<S2>/VeSRAR_b_Popup_Msg14'
     */
    (void)Rte_Write_VeSRAR_b_Popup_Msg14_Value(rtb_Switch1_fqq &&
        (rtb_Switch1_iz >= KeSRAR_n_PopupMsg14_Dbnc));

    /* End of Outputs for SubSystem: '<S13>/TurnOnDelaySample2' */

    /* Outputs for Atomic SubSystem: '<S13>/TurnOnDelaySample3' */
    /* Outport: '<Root>/VeSRAR_b_Popup_Msg15' incorporates:
     *  Constant: '<S73>/Calib'
     *  Logic: '<S78>/AND'
     *  RelationalOperator: '<S78>/GreaterThan'
     *  SignalConversion generated from: '<S2>/VeSRAR_b_Popup_Msg15'
     */
    (void)Rte_Write_VeSRAR_b_Popup_Msg15_Value(rtb_TmpSignalConversionAtVeDTRR &&
        (rtb_Switch1_np >= KeSRAR_n_PopupMsg15_Dbnc));

    /* End of Outputs for SubSystem: '<S13>/TurnOnDelaySample3' */

    /* Outputs for Atomic SubSystem: '<S13>/TurnOnDelaySample1' */
    /* Outport: '<Root>/VeSRAR_b_Popup_Msg9' incorporates:
     *  Constant: '<S75>/Calib'
     *  Logic: '<S76>/AND'
     *  RelationalOperator: '<S76>/GreaterThan'
     *  SignalConversion generated from: '<S2>/VeSRAR_b_Popup_Msg9'
     */
    (void)Rte_Write_VeSRAR_b_Popup_Msg9_Value(rtb_TmpSignalConversionAtVeEN_c &&
        (rtb_TmpSignalConversionAtVeTINR >= KeSRAR_n_PopupMsg9_Dbnc));

    /* End of Outputs for SubSystem: '<S13>/TurnOnDelaySample1' */

    /* Outport: '<Root>/VeSRAR_b_RA_Actv' incorporates:
     *  Constant: '<S9>/Constant1'
     *  RelationalOperator: '<S9>/Comparison'
     *  SignalConversion generated from: '<S2>/VeSRAR_b_RA_Actv_In'
     */
    (void)Rte_Write_VeSRAR_b_RA_Actv_Value(((sint32)rtb_VeSRAR_d_RABit_Set) >= 1);

    /* Outport: '<Root>/VeSRAR_b_ReducedPerfMode2' incorporates:
     *  Logic: '<S134>/AND'
     *  SignalConversion generated from: '<S2>/VeSRAR_b_ReducedPerfMode2_In'
     */
    (void)Rte_Write_VeSRAR_b_ReducedPerfMode2_Value
        (rtb_TmpSignalConversionAtVeENGR);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeSRAR_b_ReducedPerfMode' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_b_ReducedPerfMode_In'
     */
    (void)Rte_Write_VeSRAR_b_ReducedPerfMode_Value(rtb_LogicalOperator_ln);

    /* Outport: '<Root>/VeSRAR_b_RegenBrkInhb' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_b_RegenBrkInhb_In'
     */
    (void)Rte_Write_VeSRAR_b_RegenBrkInhb_Value(rtb_AND_gv);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Outport: '<Root>/VeSRAR_b_SPIFlt' incorporates:
     *  Logic: '<S1398>/AND'
     *  SignalConversion generated from: '<S2>/VeSRAR_b_SPIFlt'
     */
    (void)Rte_Write_VeSRAR_b_SPIFlt_Value(rtb_LogicalOperator_h);

    /* Outport: '<Root>/VeSRAR_b_SharedMemFlt' incorporates:
     *  Logic: '<S1399>/AND'
     *  SignalConversion generated from: '<S2>/VeSRAR_b_SharedMemFlt'
     */
    (void)Rte_Write_VeSRAR_b_SharedMemFlt_Value(rtb_TmpSignalConversionAtVeIN_n);

    /* Outputs for Atomic SubSystem: '<S239>/TurnOnDelayTime' */
    /* Outport: '<Root>/VeSRAR_b_StpCharging' incorporates:
     *  Constant: '<S352>/Calib'
     *  Logic: '<S356>/AND'
     *  RelationalOperator: '<S356>/GreaterThan'
     *  SignalConversion generated from: '<S2>/VeSRAR_b_StpCharging'
     */
    (void)Rte_Write_VeSRAR_b_StpCharging_Value(rtb_Logical13_ni &&
        (rtb_TmpSignalConversionAtVeCSVR >= KeSRAR_t_DsblChrgEnbl_TurnONdelay));

    /* End of Outputs for SubSystem: '<S239>/TurnOnDelayTime' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeSRAR_b_TCMCommFltM1Only' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_b_TCMCommFltM1Only_In'
     */
    (void)Rte_Write_VeSRAR_b_TCMCommFltM1Only_Value(rtb_Switch1_ahj);

    /* Outport: '<Root>/VeSRAR_b_TCMCommFltM2Only' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_b_TCMCommFltM2Only_In'
     */
    (void)Rte_Write_VeSRAR_b_TCMCommFltM2Only_Value(rtb_Merge1_i);

    /* Outport: '<Root>/VeSRAR_b_TempEngShtDwnEnbl' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_b_TempEngShtDwnEnbl'
     */
    (void)Rte_Write_VeSRAR_b_TempEngShtDwnEnbl_Value
        (rtb_TmpSignalConversionAtVeES_j);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Outport: '<Root>/VeSRAR_b_ThmlLoadShdActv' incorporates:
     *  Constant: '<S2209>/Calib'
     *  Logic: '<S1390>/Logical4'
     *  SignalConversion generated from: '<S2>/VeSRAR_b_ThmlLoadShdActv'
     */
    (void)Rte_Write_VeSRAR_b_ThmlLoadShdActv_Value(rtb_UnitDelay_fh &&
        (KeSRAR_b_BEV_ThermalLdEnbl));

    /* Outport: '<Root>/VeSRAR_b_VehShutoffSoon' incorporates:
     *  Constant: '<S1475>/Calib'
     *  Constant: '<S1476>/Calib'
     *  Constant: '<S1477>/Calib'
     *  Constant: '<S1478>/Calib'
     *  Constant: '<S1548>/Constant1'
     *  Constant: '<S1548>/Constant2'
     *  Constant: '<S1555>/Calib'
     *  Constant: '<S1558>/ConstantValue3'
     *  DataStoreRead: '<S1548>/StatusByte_HybSysPerf1'
     *  Logic: '<S1452>/Logical1'
     *  Logic: '<S1452>/Logical2'
     *  Logic: '<S1452>/Logical3'
     *  Logic: '<S1452>/Logical4'
     *  Logic: '<S1452>/Logical5'
     *  Logic: '<S1452>/Logical6'
     *  Logic: '<S1528>/Logical3'
     *  Logic: '<S1528>/Logical4'
     *  Logic: '<S1548>/LogicalOperator'
     *  RelationalOperator: '<S1452>/Comparison1'
     *  RelationalOperator: '<S1452>/Comparison2'
     *  RelationalOperator: '<S1548>/RelationalOperator1'
     *  RelationalOperator: '<S1548>/RelationalOperator2'
     *  RelationalOperator: '<S1558>/Comparison3'
     *  S-Function (sfix_bitop): '<S1548>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S1548>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S1558>/BitwiseOperator2'
     *  SignalConversion generated from: '<S2>/VeSRAR_b_VehShutoffSoon'
     */
    (void)Rte_Write_VeSRAR_b_VehShutoffSoon_Value
        ((((rtb_TmpSignalConversionAtVeBPCR <=
            KeSRAR_Pct_SOC_VehShutOffSoonSOCThres) &&
           ((rtb_VeSRAR_b_SpinUpFailed || ((((((sint32)
                  SRAR_ac_DW.StatusByte_HybSysPerf1) & 1) > 0) && ((((uint32)
                  SRAR_ac_DW.StatusByte_HybSysPerf1) & 64U) == 0U)) &&
              ((rtb_TmpSignalConversionAtVeESSR &
                KeSRAR_g_SelectBitVehShutoffSoon) >= 1U))) ||
            (rtb_TmpSignalConversionAtVeIMPR &&
             (KeSRAR_b_EngOffVehShutoffSoonEnbl)))) ||
          (rtb_TmpSignalConversionAtVeBP_e &&
           (KeSRAR_b_BatCntctrVehShutOffSoonEnbl))) || (rtb_UnitDelay_b2 &&
          (rtb_TmpSignalConversionAtVeBPCR <=
           KeSRAR_Pct_TCMFlt04_ShutOffSoonSOCThres)));

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeSRAR_b_limitInputTrq' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_b_limitInputTrq_In'
     */
    (void)Rte_Write_VeSRAR_b_limitInputTrq_Value(rtb_TmpSignalConversionAtVeAD_o);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Outputs for Atomic SubSystem: '<S247>/TurnOnDelayTime1' */
    /* Switch: '<S17>/Switch1' incorporates:
     *  Constant: '<S127>/Constant'
     *  Constant: '<S128>/Constant'
     *  Constant: '<S509>/Calib'
     *  Logic: '<S513>/AND'
     *  RelationalOperator: '<S513>/GreaterThan'
     */
    if (rtb_TmpSignalConversionAtVePM_m && (rtb_TmpSignalConversionAtVeGENR >=
            KeSRAR_t_EPB_Hold_ReqTurnONDelay))
    {
        tmpRead_j = CeTRGR_e_EPBReq_ACTIVE;
    }
    else
    {
        tmpRead_j = CeTRGR_e_EPBReq_NA;
    }

    /* End of Outputs for SubSystem: '<S247>/TurnOnDelayTime1' */

    /* Outport: '<Root>/VeSRAR_e_EPB_Hold_Req' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_e_EPB_Hold_Req'
     *  Switch: '<S17>/Switch1'
     */
    (void)Rte_Write_VeSRAR_e_EPB_Hold_Req_Value(tmpRead_j);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeSRAR_e_EngStrtStpOvrrd' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_e_EngStrtStpOvrrd_In'
     *  Switch: '<S46>/Switch1'
     */
    (void)Rte_Write_VeSRAR_e_EngStrtStpOvrrd_Value(Switch1_f);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Switch: '<S21>/Switch' incorporates:
     *  Constant: '<S48>/Calib'
     *  Constant: '<S49>/Calib'
     *  Logic: '<S21>/Logical2'
     *  Logic: '<S21>/Logical4'
     */
    if ((VeSRAC_b_HVBattErr) && (!KeSRAR_b_DsblEngStrtTypHVBatErr))
    {
        rtb_DataTypeConversion_l = KeSRAR_e_EngStrtStpTypHVBatErr;
    }

    /* Outport: '<Root>/VeSRAR_e_EngStrtType' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_e_EngStrtType'
     *  Switch: '<S21>/Switch'
     */
    (void)Rte_Write_VeSRAR_e_EngStrtType_Value(rtb_DataTypeConversion_l);

    /* Switch: '<S1465>/Switch1' incorporates:
     *  Constant: '<S1455>/Constant'
     *  Constant: '<S1462>/Constant'
     *  Switch: '<S1465>/Switch2'
     */
    if (VeSRAC_b_CANC2_BusOff)
    {
        tmp_1 = CeSRAR_e_BusFailHCP_C2CAN;
    }
    else if (VeSRAC_b_AHCPLoc_CANC2_BSM)
    {
        /* Switch: '<S1465>/Switch2' incorporates:
         *  Constant: '<S1461>/Constant'
         */
        tmp_1 = CeSRAR_e_LoC_BSM_HCP_C2;
    }
    else
    {
        tmp_1 = CeSRAR_e_NoFaultHCPBSM_C2;
    }

    /* End of Switch: '<S1465>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeSRAR_e_LoCAHCP_BSM_CANC2' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_e_LoCAHCP_BSM_CANC2'
     */
    (void)Rte_Write_VeSRAR_e_LoCAHCP_BSM_CANC2_Value(tmp_1);

    /* Outport: '<Root>/VeSRAR_e_LoCHCP_BPCM_ePT' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_e_LoCHCP_BPCM_ePT'
     *  Switch: '<S1467>/Switch1'
     */
    (void)Rte_Write_VeSRAR_e_LoCHCP_BPCM_ePT_Value(Switch1_fc);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Switch: '<S1466>/Switch1' incorporates:
     *  Constant: '<S1456>/Constant'
     *  Constant: '<S1460>/Constant'
     *  Switch: '<S1466>/Switch2'
     */
    if (VeSRAC_b_CANC_BusOff)
    {
        tmp_2 = CeSRAR_e_BusFailHCPBSM_C1CAN;
    }
    else if (VeSRAC_b_HCPLoc_CANC_BSM)
    {
        /* Switch: '<S1466>/Switch2' incorporates:
         *  Constant: '<S1459>/Constant'
         */
        tmp_2 = CeSRAR_e_LoC_BSM_HCP_C1;
    }
    else
    {
        tmp_2 = CeSRAR_e_NoFaultHCPBSM_C1;
    }

    /* End of Switch: '<S1466>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeSRAR_e_LoCHCP_BSM_CANC' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_e_LoCHCP_BSM_CANC'
     */
    (void)Rte_Write_VeSRAR_e_LoCHCP_BSM_CANC_Value(tmp_2);

    /* Outport: '<Root>/VeSRAR_e_LoCHCP_TCMECM_CANC' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_e_LoCHCP_TCMECM_CANC'
     */
    (void)Rte_Write_VeSRAR_e_LoCHCP_TCMECM_CANC_Value(Switch1_g);

    /* Outport: '<Root>/VeSRAR_g_RA_InputSet1' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_g_RA_InputSet1'
     */
    (void)Rte_Write_VeSRAR_g_RA_InputSet1_Value(rtb_Switch1_n3);

    /* Outport: '<Root>/VeSRAR_g_RA_InputSet2' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_g_RA_InputSet2'
     */
    (void)Rte_Write_VeSRAR_g_RA_InputSet2_Value(rtb_Switch1_ck);

    /* Outport: '<Root>/VeSRAR_g_RA_InputSet3' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_g_RA_InputSet3'
     */
    (void)Rte_Write_VeSRAR_g_RA_InputSet3_Value(rtb_Switch1_mr);

    /* Outport: '<Root>/VeSRAR_g_RA_InputSet4' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_g_RA_InputSet4'
     */
    (void)Rte_Write_VeSRAR_g_RA_InputSet4_Value(rtb_Switch1_bk);

    /* Outport: '<Root>/VeSRAR_g_RA_InputSet5' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_g_RA_InputSet5'
     */
    (void)Rte_Write_VeSRAR_g_RA_InputSet5_Value(rtb_Switch1_c);

    /* Outport: '<Root>/VeSRAR_g_RA_InputSet6' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_g_RA_InputSet6'
     */
    (void)Rte_Write_VeSRAR_g_RA_InputSet6_Value(rtb_Switch1_fxq);

    /* Outport: '<Root>/VeSRAR_g_RA_InputSet7' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_g_RA_InputSet7'
     */
    (void)Rte_Write_VeSRAR_g_RA_InputSet7_Value(BitwiseLogicalOperator_b);

    /* Outport: '<Root>/VeSRAR_g_RA_InputSet8' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_g_RA_InputSet8'
     */
    (void)Rte_Write_VeSRAR_g_RA_InputSet8_Value(rtb_Switch1_anw);

    /* Outport: '<Root>/VeSRAR_g_RA_InputSet9' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_g_RA_InputSet9'
     */
    (void)Rte_Write_VeSRAR_g_RA_InputSet9_Value((uint32)rtb_Switch1_fw);

    /* Outport: '<Root>/VeSRAR_k_ReasonStopCharging' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_k_ReasonStopCharging'
     */
    (void)Rte_Write_VeSRAR_k_ReasonStopCharging_Value
        (rtb_TmpSignalConversionAtVeT_hz);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* Outport: '<Root>/VeSRAR_n_HCPMaxEngRPM' incorporates:
     *  Gain: '<S1545>/Gain'
     *  SignalConversion generated from: '<S2>/VeSRAR_n_HCPMaxEngRPM_Out'
     */
    (void)Rte_Write_VeSRAR_n_HCPMaxEngRPM_Value(rtb_TmpSignalConversionAtVeINVR);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeSRAR_y_RemedialActionHist' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRAR_y_RemedialActionsHist_In'
     */
    (void)Rte_Write_VeSRAR_y_RemedialActionHist_Value
        (VeSRAR_y_RemedialActionHist);

    /* Outport: '<Root>/VeSRAR_b_Veh_Spd_Lmtd' incorporates:
     *  SignalConversion generated from: '<S2>/Veh_Spd_Lmtd'
     */
    (void)Rte_Write_VeSRAR_b_Veh_Spd_Lmtd_Value(Logical13);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Output function */
FUNC(void, SRAR_CODE) DIDWrite_CreepModeReq(void)
{
    boolean tmpRead;

    /* Inport: '<Root>/VeDCAB_b_CreepModeReq_DidWrite' */
    (void)Rte_Read_VeDCAB_b_CreepModeReq_DidWrite_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/DIDWrite_CreepModeReq' incorporates:
     *  SubSystem: '<Root>/DIDWrite_CreepMode'
     */
    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion generated from: '<S1>/VeDCAB_b_CreepModeReq_DidWrite'
     *  SignalConversion generated from: '<S1>/VeDCAB_b_CreepModeReq_DidWrite_out'
     */
    Rte_IrvWrite_DIDWrite_CreepModeReq_VeDCAB_b_CreepModeReq_DidWrite_out_IRV
        (tmpRead);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/DIDWrite_CreepModeReq' */
}

/* Output function */
FUNC(void, SRAR_CODE) SRAR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/SRAR_PwrOff'
     */
    /* Outport: '<Root>/NeSRAR_e_EngStrtType_DS_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeSRAR_e_EngStrtType_DS'
     */
    (void)Rte_Write_NeSRAR_e_EngStrtType_DS_NeSRAR_e_EngStrtType_DS
        (SRAR_ac_DW.NeSRAR_e_EngStrtType_DS);

    /* Outport: '<Root>/NeSRAR_g_InputHist_1_DS_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeSRAR_g_InputHist_1_DS'
     */
    (void)Rte_Write_NeSRAR_g_InputHist_1_DS_NeSRAR_g_InputHist_1_DS
        (SRAR_ac_DW.NeSRAR_g_InputHist_1_DS);

    /* Outport: '<Root>/NeSRAR_g_InputHist_2_DS_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeSRAR_g_InputHist_2_DS'
     */
    (void)Rte_Write_NeSRAR_g_InputHist_2_DS_NeSRAR_g_InputHist_2_DS
        (SRAR_ac_DW.NeSRAR_g_InputHist_2_DS);

    /* Outport: '<Root>/NeSRAR_g_InputHist_3_DS_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeSRAR_g_InputHist_3_DS'
     */
    (void)Rte_Write_NeSRAR_g_InputHist_3_DS_NeSRAR_g_InputHist_3_DS
        (SRAR_ac_DW.NeSRAR_g_InputHist_3_DS);

    /* Outport: '<Root>/NeSRAR_g_InputHist_4_DS_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeSRAR_g_InputHist_4_DS'
     */
    (void)Rte_Write_NeSRAR_g_InputHist_4_DS_NeSRAR_g_InputHist_4_DS
        (SRAR_ac_DW.NeSRAR_g_InputHist_4_DS);

    /* Outport: '<Root>/NeSRAR_g_InputHist_5_DS_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeSRAR_g_InputHist_5_DS'
     */
    (void)Rte_Write_NeSRAR_g_InputHist_5_DS_NeSRAR_g_InputHist_5_DS
        (SRAR_ac_DW.NeSRAR_g_InputHist_5_DS);

    /* Outport: '<Root>/NeSRAR_g_InputHist_6_DS_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeSRAR_g_InputHist_6_DS'
     */
    (void)Rte_Write_NeSRAR_g_InputHist_6_DS_NeSRAR_g_InputHist_6_DS
        (SRAR_ac_DW.NeSRAR_g_InputHist_6_DS);

    /* Outport: '<Root>/NeSRAR_g_InputHist_7_DS_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeSRAR_g_InputHist_7_DS'
     */
    (void)Rte_Write_NeSRAR_g_InputHist_7_DS_NeSRAR_g_InputHist_7_DS
        (SRAR_ac_DW.NeSRAR_g_InputHist_7_DS);

    /* Outport: '<Root>/NeSRAR_g_InputHist_8_DS_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeSRAR_g_InputHist_8_DS'
     */
    (void)Rte_Write_NeSRAR_g_InputHist_8_DS_NeSRAR_g_InputHist_8_DS
        (SRAR_ac_DW.NeSRAR_g_InputHist_8_DS);

    /* Outport: '<Root>/NeSRAR_d_ReasonStopCharging_DS_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeSRAR_d_ReasonStopCharging_DS'
     */
    (void)
        Rte_Write_NeSRAR_d_ReasonStopCharging_DS_NeSRAR_d_ReasonStopCharging_DS
        (SRAR_ac_DW.NeSRAR_d_ReasonStopCharging_DS);

    /* Outport: '<Root>/NeSRAR_d_RemedialActionHist_DS_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeSRAR_d_RemedialActionHist_DS'
     */
    (void)
        Rte_Write_NeSRAR_d_RemedialActionHist_DS_NeSRAR_d_RemedialActionHist_DS
        (SRAR_ac_DW.NeSRAR_d_RemedialActionHist_DS);

    /* Outport: '<Root>/NeSRAR_g_InputHist_9_DS_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeSRAR_g_InputHist_8_DS1'
     */
    (void)Rte_Write_NeSRAR_g_InputHist_9_DS_NeSRAR_g_InputHist_9_DS
        (SRAR_ac_DW.NeSRAR_g_InputHist_9_DS);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, SRAR_CODE) SRAR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/SRAR_PwrOn'
     */
    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/DSM_Init'
     */
    /* DataStoreWrite: '<S2425>/NeSRAR_g_InputHist_8_DS1' incorporates:
     *  Inport: '<Root>/NeSRAR_g_InputHist_9_DS_PM_In'
     */
    (void)Rte_Read_NeSRAR_g_InputHist_9_DS_Rx_NeSRAR_g_InputHist_9_DS
        (&SRAR_ac_DW.NeSRAR_g_InputHist_9_DS);

    /* DataStoreWrite: '<S2425>/NeSRAR_d_RemedialActionHist_DS' incorporates:
     *  Inport: '<Root>/NeSRAR_d_RemedialActionHist_DS_PM_In'
     */
    (void)
        Rte_Read_NeSRAR_d_RemedialActionHist_DS_Rx_NeSRAR_d_RemedialActionHist_DS
        (&SRAR_ac_DW.NeSRAR_d_RemedialActionHist_DS);

    /* DataStoreWrite: '<S2425>/NeSRAR_d_ReasonStopCharging_DS' incorporates:
     *  Inport: '<Root>/NeSRAR_d_ReasonStopCharging_DS_PM_In'
     */
    (void)
        Rte_Read_NeSRAR_d_ReasonStopCharging_DS_Rx_NeSRAR_d_ReasonStopCharging_DS
        (&SRAR_ac_DW.NeSRAR_d_ReasonStopCharging_DS);

    /* DataStoreWrite: '<S2425>/NeSRAR_g_InputHist_8_DS' incorporates:
     *  Inport: '<Root>/NeSRAR_g_InputHist_8_DS_PM_In'
     */
    (void)Rte_Read_NeSRAR_g_InputHist_8_DS_Rx_NeSRAR_g_InputHist_8_DS
        (&SRAR_ac_DW.NeSRAR_g_InputHist_8_DS);

    /* DataStoreWrite: '<S2425>/NeSRAR_g_InputHist_7_DS' incorporates:
     *  Inport: '<Root>/NeSRAR_g_InputHist_7_DS_PM_In'
     */
    (void)Rte_Read_NeSRAR_g_InputHist_7_DS_Rx_NeSRAR_g_InputHist_7_DS
        (&SRAR_ac_DW.NeSRAR_g_InputHist_7_DS);

    /* DataStoreWrite: '<S2425>/NeSRAR_g_InputHist_6_DS' incorporates:
     *  Inport: '<Root>/NeSRAR_g_InputHist_6_DS_PM_In'
     */
    (void)Rte_Read_NeSRAR_g_InputHist_6_DS_Rx_NeSRAR_g_InputHist_6_DS
        (&SRAR_ac_DW.NeSRAR_g_InputHist_6_DS);

    /* DataStoreWrite: '<S2425>/NeSRAR_g_InputHist_5_DS' incorporates:
     *  Inport: '<Root>/NeSRAR_g_InputHist_5_DS_PM_In'
     */
    (void)Rte_Read_NeSRAR_g_InputHist_5_DS_Rx_NeSRAR_g_InputHist_5_DS
        (&SRAR_ac_DW.NeSRAR_g_InputHist_5_DS);

    /* DataStoreWrite: '<S2425>/NeSRAR_g_InputHist_4_DS' incorporates:
     *  Inport: '<Root>/NeSRAR_g_InputHist_4_DS_PM_In'
     */
    (void)Rte_Read_NeSRAR_g_InputHist_4_DS_Rx_NeSRAR_g_InputHist_4_DS
        (&SRAR_ac_DW.NeSRAR_g_InputHist_4_DS);

    /* DataStoreWrite: '<S2425>/NeSRAR_g_InputHist_3_DS' incorporates:
     *  Inport: '<Root>/NeSRAR_g_InputHist_3_DS_PM_In'
     */
    (void)Rte_Read_NeSRAR_g_InputHist_3_DS_Rx_NeSRAR_g_InputHist_3_DS
        (&SRAR_ac_DW.NeSRAR_g_InputHist_3_DS);

    /* DataStoreWrite: '<S2425>/NeSRAR_g_InputHist_2_DS' incorporates:
     *  Inport: '<Root>/NeSRAR_g_InputHist_2_DS_PM_In'
     */
    (void)Rte_Read_NeSRAR_g_InputHist_2_DS_Rx_NeSRAR_g_InputHist_2_DS
        (&SRAR_ac_DW.NeSRAR_g_InputHist_2_DS);

    /* DataStoreWrite: '<S2425>/NeSRAR_g_InputHist_1_DS' incorporates:
     *  Inport: '<Root>/NeSRAR_g_InputHist_1_DS_PM_In'
     */
    (void)Rte_Read_NeSRAR_g_InputHist_1_DS_Rx_NeSRAR_g_InputHist_1_DS
        (&SRAR_ac_DW.NeSRAR_g_InputHist_1_DS);

    /* DataStoreWrite: '<S2425>/NeSRAR_e_EngStrtType_DS' incorporates:
     *  Inport: '<Root>/NeSRAR_e_EngStrtType_DS_PM_In'
     */
    (void)Rte_Read_NeSRAR_e_EngStrtType_DS_Rx_NeSRAR_e_EngStrtType_DS
        (&SRAR_ac_DW.NeSRAR_e_EngStrtType_DS);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/InitSRAIOutput'
     */
    /* Gain: '<S2430>/Gain' incorporates:
     *  Constant: '<S2429>/Calib'
     */
    SRAR_ac_B.Gain = KeSRAR_n_HCPMaxEngRPM;

    /* SignalConversion generated from: '<S2426>/VeSRAR_b_HybFeedback_ECM' incorporates:
     *  Constant: '<S2428>/Calib'
     */
    SRAR_ac_B.OutportBufferForVeSRAR_b_HybF_k = KeSRAR_b_HybFdkECM_Init;

    /* SignalConversion generated from: '<S2426>/CreepModeRqst' */
    SRAR_ac_B.OutportBufferForCreepModeRqst = false;

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S2427>/VeSRAR_b_Inhibit_NeutralCmnd_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_Inhibi = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_Inhibit_Mode1Cmnd_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_Inhi_e = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_Inhibit_Mode2Cmnd_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_Inhi_c = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_Inhibit_Gear1Cmnd_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_Inhi_d = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_Inhibit_Gear2Cmnd_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_Inhi_h = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_Inhibit_Gear3Cmnd_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_Inh_dl = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_Inhibit_Gear4Cmnd_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_Inhi_j = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_RegenBrkInhb_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_RegenB = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_HybPwrtrnRdcdPerfCmnd_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_HybPwr = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_ReducedPerfMode_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_Reduce = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_ReducedPerfMode2_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_Redu_f = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_CreepTorqMode_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_CreepT = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_limitInputTrq_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_limitI = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_FltShtDwnBPClsdCmnd_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_FltSht = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_FltShtDwnCmnd_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_FltS_i = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_e_EngStrtStpOvrrd_Out_Init' incorporates:
     *  Constant: '<S2427>/Const16'
     */
    SRAR_ac_B.OutportBufferForVeSRAR_e_EngStr = SRAR_ac_ConstB.Const16;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_LimTrans_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_LimTra = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_EngStrtStpEngShtDwn_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_EngStr = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_EngStrtStpEngRun_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_EngS_l = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_FltShtDwnCmndRet_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_FltS_o = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_RA_Actv_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_RA_Act = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_TCMCommFltM1Only_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_TCMCom = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_TCMCommFltM2Only_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_TCMC_l = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_Inhibit_GearsCmnd_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_Inhi_i = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_y_RemedialActionHist_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_y_Remedi = 0U;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_HCP_Remedial_Stop_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_HCP_Re = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_DrvAllwd_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_DrvAll = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_NeutAllwd_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_NeutAl = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_k_ReasonStopCharging_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_k_Reason = 0;

    /* SignalConversion generated from: '<S2427>/VeSRAR_e_EngStrtType_Out_Init' incorporates:
     *  Constant: '<S2427>/Const30'
     */
    SRAR_ac_B.OutportBufferForVeSRAR_e_EngS_d = SRAR_ac_ConstB.Const30;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_OutOfFuelSOCShtDwn_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_OutOfF = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_HybFeedback_ECM_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_HybFee = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_scl_DisableAEMD_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_scl_Disa = 0.0F;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_DsblInvA_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_DsblIn = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_DsblInvB_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_Dsbl_h = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_OpnBattCntctr_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_OpnBat = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_e_EPB_Hold_Req_Out_Init' incorporates:
     *  Constant: '<S2427>/Const37'
     */
    SRAR_ac_B.OutportBufferForVeSRAR_e_EPB_Ho = SRAR_ac_ConstB.Const37;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_EngShutDwn_EngOffKeyStrtinNeutralOnly_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_EngShu = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_FltShtDwnBPClsdCmnd_bfDly_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_Flt_ov = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_FltShtDwnCmnd_bfDly_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_FltS_f = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_DsblPSA_PlgIn_EngOn_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_DsblPS = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_EngStrtStpEngShtDwnIntm_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_EngS_o = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_TempEngShtDwnEnbl_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_TempEn = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_SPIFlt_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_SPIFlt = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_SharedMemFlt_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_Shared = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_StpCharging_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_StpCha = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_VehShutoffSoon_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_VehShu = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_Dsbl_MtrB_IdlSpd_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_Dsbl_M = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_Inhibit_DriveMode_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_Inhi_l = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_Inhibit_AWD_TerrainMode_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_Inhi_g = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_DsblAECoasting_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_DsblAE = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_LV12PwrFreeReq_PHEV_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_LV12Pw = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_TrqEnblReq_TCM_PHEV_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_TrqEnb = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_i_LHOM_Trans_PHEV_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_i_LHOM_T = 0U;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_DerateSumTrqMax_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_Derate = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_Inhibit_RWD_TerrainMode_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_Inh_ix = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_HybAlternatorMd_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_HybAlt = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_InhibitGSI_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_Inhi_p = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_e_LoCHCP_BPCM_ePT_Out_Init' incorporates:
     *  Constant: '<S2427>/Const59'
     */
    SRAR_ac_B.OutportBufferForVeSRAR_e_LoCH_f = SRAR_ac_ConstB.Const59;

    /* SignalConversion generated from: '<S2427>/VeSRAR_e_LoCHCP_TCMECM_CANC_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_e_LoCHCP = 0U;

    /* SignalConversion generated from: '<S2427>/VeSRAR_e_LoCAHCP_BSM_CANC2_Out_Init' incorporates:
     *  Constant: '<S2427>/Const61'
     */
    SRAR_ac_B.OutportBufferForVeSRAR_e_LoCAHC = SRAR_ac_ConstB.Const61;

    /* SignalConversion generated from: '<S2427>/VeSRAR_e_LoCHCP_TCMECM_ePT_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_e_LoCH_d = 0U;

    /* SignalConversion generated from: '<S2427>/VeSRAR_e_LoCHCP_BSM_CANC_Out_Init' incorporates:
     *  Constant: '<S2427>/Const63'
     */
    SRAR_ac_B.OutportBufferForVeSRAR_e_LoCH_p = SRAR_ac_ConstB.Const63;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_InhibitCruise_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_Inhi_m = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_ThmlLoadShdActv_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_ThmlLo = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_OnePedalDriveDsbl_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_OnePed = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_Veh_Spd_Lmtd_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_Veh_Sp = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_PerfLmtd_StpSfly_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_PerfLm = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_InhibitActvSpdLmtr_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_Inh_jb = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_Popup_Msg1_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_Popup_ = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_Popup_Msg9_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_Popu_j = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_Popup_Msg14_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_Popu_g = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_Popup_Msg15_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_Popu_n = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_MtrBZeroTrqActv_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_MtrBZe = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_K0AsyncCloseActv_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_K0Asyn = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_InplantCreepModeRqst_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_Inplan = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_Dsbl_SL_PID_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_Dsbl_S = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_MtrA_AlternatorMdAvbl_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_MtrA_A = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_g_RA_InputSet1_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_g_RA_Inp = 0U;

    /* SignalConversion generated from: '<S2427>/VeSRAR_g_RA_InputSet2_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_g_RA_I_f = 0U;

    /* SignalConversion generated from: '<S2427>/VeSRAR_g_RA_InputSet3_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_g_RA_I_o = 0U;

    /* SignalConversion generated from: '<S2427>/VeSRAR_g_RA_InputSet4_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_g_RA__oo = 0U;

    /* SignalConversion generated from: '<S2427>/VeSRAR_g_RA_InputSet5_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_g_RA__om = 0U;

    /* SignalConversion generated from: '<S2427>/VeSRAR_g_RA_InputSet6_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_g_RA_I_a = 0U;

    /* SignalConversion generated from: '<S2427>/VeSRAR_g_RA_InputSet7_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_g_RA_I_d = 0U;

    /* SignalConversion generated from: '<S2427>/VeSRAR_g_RA_InputSet8_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_g_RA_I_n = 0U;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_Inhibit_eBoost_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_Inh_ly = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_MtrAZeroTrqActv_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_MtrAZe = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_MtrCZeroTrqActv_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_MtrCZe = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_DsblInvC_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_Dsbl_c = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_HMI_LeaveIgnition_ON_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_HMI_Le = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_Disable_RaceStart_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_Disabl = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_Disable_PwrPanel_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_Disa_f = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_InvrtrShortCntcrWeld_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_Invrtr = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_Disable_TCaseSpeedSync_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_Disa_a = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_b_BSMLoCBusOff_CANC_C2_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_b_BSMLoC = false;

    /* SignalConversion generated from: '<S2427>/VeSRAR_g_RA_InputSet9_Out_Init' */
    SRAR_ac_B.OutportBufferForVeSRAR_g_RA_I_i = 0U;

    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Outport: '<Root>/VeSRAR_e_LoCHCP_TCMECM_ePT' incorporates:
     *  DataTypeConversion: '<S4>/DataTypeConversion'
     */
    (void)Rte_Write_VeSRAR_e_LoCHCP_TCMECM_ePT_Value
        ((TeSRAR_e_TCMECMComFail_ePTCAN)
         SRAR_ac_B.OutportBufferForVeSRAR_e_LoCH_d);

    /* Outport: '<Root>/VeSRAR_b_BSMLoCBusOff_CANC_C2' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_BSMLoCBusOff_CANC_C2_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_BSMLoCBusOff_CANC_C2_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_BSMLoC);

    /* Outport: '<Root>/VeSRAR_b_CreepTorqMode' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_CreepTorqMode_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_CreepTorqMode_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_CreepT);

    /* Outport: '<Root>/VeSRAR_b_DerateSumTrqMax' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_DerateSumTrqMax_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_DerateSumTrqMax_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_Derate);

    /* Outport: '<Root>/VeSRAR_b_Disable_PwrPanel' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_Disable_PwrPanel_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_Disable_PwrPanel_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_Disa_f);

    /* Outport: '<Root>/VeSRAR_b_Disable_RaceStart' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_Disable_RaceStart_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_Disable_RaceStart_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_Disabl);

    /* Outport: '<Root>/VeSRAR_b_Disable_TCaseSpeedSync' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_Disable_TCaseSpeedSync_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_Disable_TCaseSpeedSync_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_Disa_a);

    /* Outport: '<Root>/VeSRAR_b_DrvAllwd' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_DrvAllwd_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_DrvAllwd_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_DrvAll);

    /* Outport: '<Root>/VeSRAR_b_DsblAECoasting' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_DsblAECoasting_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_DsblAECoasting_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_DsblAE);

    /* Outport: '<Root>/VeSRAR_b_DsblInvA' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_DsblInvA_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_DsblInvA_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_DsblIn);

    /* Outport: '<Root>/VeSRAR_b_DsblInvB' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_DsblInvB_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_DsblInvB_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_Dsbl_h);

    /* Outport: '<Root>/VeSRAR_b_DsblInvC' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_DsblInvC_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_DsblInvC_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_Dsbl_c);

    /* Outport: '<Root>/VeSRAR_b_DsblPSA_PlgIn_EngOn' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_DsblPSA_PlgIn_EngOn_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_DsblPSA_PlgIn_EngOn_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_DsblPS);

    /* Outport: '<Root>/VeSRAR_b_Dsbl_MtrB_IdlSpd' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_Dsbl_MtrB_IdlSpd_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_Dsbl_MtrB_IdlSpd_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_Dsbl_M);

    /* Outport: '<Root>/VeSRAR_b_Dsbl_SL_PID' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_Dsbl_SL_PID_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_Dsbl_SL_PID_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_Dsbl_S);

    /* Outport: '<Root>/VeSRAR_b_EngShutDwn_EngOffKeyStrtinNeutralOnly' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_EngShutDwn_EngOffKeyStrtinNeutralOnly_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_EngShutDwn_EngOffKeyStrtinNeutralOnly_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_EngShu);

    /* Outport: '<Root>/VeSRAR_b_EngStrtStpEngRun' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_EngStrtStpEngRun_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_EngStrtStpEngRun_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_EngS_l);

    /* Outport: '<Root>/VeSRAR_b_EngStrtStpEngShtDwnIntm' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_EngStrtStpEngShtDwnIntm_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_EngStrtStpEngShtDwnIntm_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_EngS_o);

    /* Outport: '<Root>/VeSRAR_b_EngStrtStpEngShtDwn' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_EngStrtStpEngShtDwn_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_EngStrtStpEngShtDwn_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_EngStr);

    /* Outport: '<Root>/VeSRAR_b_FltShtDwnBPClsdCmnd' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_FltShtDwnBPClsdCmnd_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_FltShtDwnBPClsdCmnd_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_FltSht);

    /* Outport: '<Root>/VeSRAR_b_FltShtDwnBPClsdCmnd_bfDly' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_FltShtDwnBPClsdCmnd_bfDly_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_FltShtDwnBPClsdCmnd_bfDly_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_Flt_ov);

    /* Outport: '<Root>/VeSRAR_b_FltShtDwnCmndRet' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_FltShtDwnCmndRet_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_FltShtDwnCmndRet_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_FltS_o);

    /* Outport: '<Root>/VeSRAR_b_FltShtDwnCmnd' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_FltShtDwnCmnd_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_FltShtDwnCmnd_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_FltS_i);

    /* Outport: '<Root>/VeSRAR_b_FltShtDwnCmnd_bfDly' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_FltShtDwnCmnd_bfDly_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_FltShtDwnCmnd_bfDly_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_FltS_f);

    /* Outport: '<Root>/VeSRAR_b_HCP_Remedial_Stop' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_HCP_Remedial_Stop_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_HCP_Remedial_Stop_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_HCP_Re);

    /* Outport: '<Root>/VeSRAR_b_HMI_LeaveIgnition_ON' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_HMI_LeaveIgnition_ON_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_HMI_LeaveIgnition_ON_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_HMI_Le);

    /* Outport: '<Root>/VeSRAR_b_HybAlternatorMd' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_HybAlternatorMd_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_HybAlternatorMd_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_HybAlt);

    /* Outport: '<Root>/VeSRAR_b_CAN_HybFeedback_ECM' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_HybFeedback_ECM'
     */
    (void)Rte_Write_VeSRAR_b_CAN_HybFeedback_ECM_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_HybF_k);

    /* Outport: '<Root>/VeSRAR_b_HybFeedback_ECM' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_HybFeedback_ECM_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_HybFeedback_ECM_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_HybFee);

    /* Outport: '<Root>/VeSRAR_b_HybPwrtrnRdcdPerfCmnd' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_HybPwrtrnRdcdPerfCmnd_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_HybPwrtrnRdcdPerfCmnd_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_HybPwr);

    /* Outport: '<Root>/VeSRAR_b_InhibitActvSpdLmtr' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_InhibitActvSpdLmtr_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_InhibitActvSpdLmtr_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_Inh_jb);

    /* Outport: '<Root>/VeSRAR_b_InhibitCruise' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_InhibitCruise_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_InhibitCruise_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_Inhi_m);

    /* Outport: '<Root>/VeSRAR_b_InhibitGSI' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_InhibitGSI_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_InhibitGSI_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_Inhi_p);

    /* Outport: '<Root>/VeSRAR_b_Inhibit_AWD_TerrainMode' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_Inhibit_AWD_TerrainMode_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_Inhibit_AWD_TerrainMode_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_Inhi_g);

    /* Outport: '<Root>/VeSRAR_b_Inhibit_DriveMode' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_Inhibit_DriveMode_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_Inhibit_DriveMode_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_Inhi_l);

    /* Outport: '<Root>/VeSRAR_b_Inhibit_Gear1Cmnd' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_Inhibit_Gear1Cmnd_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_Inhibit_Gear1Cmnd_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_Inhi_d);

    /* Outport: '<Root>/VeSRAR_b_Inhibit_Gear2Cmnd' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_Inhibit_Gear2Cmnd_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_Inhibit_Gear2Cmnd_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_Inhi_h);

    /* Outport: '<Root>/VeSRAR_b_Inhibit_Gear3Cmnd' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_Inhibit_Gear3Cmnd_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_Inhibit_Gear3Cmnd_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_Inh_dl);

    /* Outport: '<Root>/VeSRAR_b_Inhibit_Gear4Cmnd' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_Inhibit_Gear4Cmnd_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_Inhibit_Gear4Cmnd_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_Inhi_j);

    /* Outport: '<Root>/VeSRAR_b_Inhibit_GearsCmnd' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_Inhibit_GearsCmnd_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_Inhibit_GearsCmnd_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_Inhi_i);

    /* Outport: '<Root>/VeSRAR_b_Inhibit_Mode1Cmnd' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_Inhibit_Mode1Cmnd_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_Inhibit_Mode1Cmnd_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_Inhi_e);

    /* Outport: '<Root>/VeSRAR_b_Inhibit_Mode2Cmnd' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_Inhibit_Mode2Cmnd_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_Inhibit_Mode2Cmnd_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_Inhi_c);

    /* Outport: '<Root>/VeSRAR_b_Inhibit_NeutralCmnd' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_Inhibit_NeutralCmnd_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_Inhibit_NeutralCmnd_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_Inhibi);

    /* Outport: '<Root>/VeSRAR_b_Inhibit_RWD_TerrainMode' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_Inhibit_RWD_TerrainMode_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_Inhibit_RWD_TerrainMode_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_Inh_ix);

    /* Outport: '<Root>/VeSRAR_b_Inhibit_eBoost' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_Inhibit_eBoost_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_Inhibit_eBoost_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_Inh_ly);

    /* Outport: '<Root>/VeSRAR_b_InplantCreepModeRqst' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_InplantCreepModeRqst_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_InplantCreepModeRqst_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_Inplan);

    /* Outport: '<Root>/VeSRAR_b_InvrtrShortCntcrWeld' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_InvrtrShortCntcrWeld_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_InvrtrShortCntcrWeld_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_Invrtr);

    /* Outport: '<Root>/VeSRAR_b_K0AsyncCloseActv' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_K0AsyncCloseActv_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_K0AsyncCloseActv_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_K0Asyn);

    /* Outport: '<Root>/VeSRAR_b_LV12PwrFreeReq_PHEV' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_LV12PwrFreeReq_PHEV_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_LV12PwrFreeReq_PHEV_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_LV12Pw);

    /* Outport: '<Root>/VeSRAR_b_LimTrans' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_LimTrans_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_LimTrans_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_LimTra);

    /* Outport: '<Root>/VeSRAR_b_MtrAZeroTrqActv' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_MtrAZeroTrqActv_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_MtrAZeroTrqActv_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_MtrAZe);

    /* Outport: '<Root>/VeSRAR_b_MtrA_AlternatorMdAvbl' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_MtrA_AlternatorMdAvbl_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_MtrA_AlternatorMdAvbl_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_MtrA_A);

    /* Outport: '<Root>/VeSRAR_b_MtrBZeroTrqActv' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_MtrBZeroTrqActv_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_MtrBZeroTrqActv_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_MtrBZe);

    /* Outport: '<Root>/VeSRAR_b_MtrCZeroTrqActv' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_MtrCZeroTrqActv_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_MtrCZeroTrqActv_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_MtrCZe);

    /* Outport: '<Root>/VeSRAR_b_NeutAllwd' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_NeutAllwd_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_NeutAllwd_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_NeutAl);

    /* Outport: '<Root>/VeSRAR_b_OnePedalDriveDsbl' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_OnePedalDriveDsbl_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_OnePedalDriveDsbl_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_OnePed);

    /* Outport: '<Root>/VeSRAR_b_OpnBattCntctr' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_OpnBattCntctr_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_OpnBattCntctr_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_OpnBat);

    /* Outport: '<Root>/VeSRAR_b_OutOfFuelSOCShtDwn' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_OutOfFuelSOCShtDwn_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_OutOfFuelSOCShtDwn_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_OutOfF);

    /* Outport: '<Root>/VeSRAR_b_PerfLmtd_StpSfly' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_PerfLmtd_StpSfly_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_PerfLmtd_StpSfly_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_PerfLm);

    /* Outport: '<Root>/VeSRAR_b_Popup_Msg14' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_Popup_Msg14_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_Popup_Msg14_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_Popu_g);

    /* Outport: '<Root>/VeSRAR_b_Popup_Msg15' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_Popup_Msg15_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_Popup_Msg15_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_Popu_n);

    /* Outport: '<Root>/VeSRAR_b_Popup_Msg1' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_Popup_Msg1_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_Popup_Msg1_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_Popup_);

    /* Outport: '<Root>/VeSRAR_b_Popup_Msg9' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_Popup_Msg9_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_Popup_Msg9_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_Popu_j);

    /* Outport: '<Root>/VeSRAR_b_RA_Actv' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_RA_Actv_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_RA_Actv_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_RA_Act);

    /* Outport: '<Root>/VeSRAR_b_ReducedPerfMode2' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_ReducedPerfMode2_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_ReducedPerfMode2_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_Redu_f);

    /* Outport: '<Root>/VeSRAR_b_ReducedPerfMode' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_ReducedPerfMode_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_ReducedPerfMode_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_Reduce);

    /* Outport: '<Root>/VeSRAR_b_RegenBrkInhb' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_RegenBrkInhb_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_RegenBrkInhb_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_RegenB);

    /* Outport: '<Root>/VeSRAR_b_SPIFlt' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_SPIFlt_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_SPIFlt_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_SPIFlt);

    /* Outport: '<Root>/VeSRAR_b_SharedMemFlt' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_SharedMemFlt_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_SharedMemFlt_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_Shared);

    /* Outport: '<Root>/VeSRAR_b_StpCharging' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_StpCharging_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_StpCharging_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_StpCha);

    /* Outport: '<Root>/VeSRAR_b_TCMCommFltM1Only' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_TCMCommFltM1Only_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_TCMCommFltM1Only_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_TCMCom);

    /* Outport: '<Root>/VeSRAR_b_TCMCommFltM2Only' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_TCMCommFltM2Only_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_TCMCommFltM2Only_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_TCMC_l);

    /* Outport: '<Root>/VeSRAR_b_TempEngShtDwnEnbl' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_TempEngShtDwnEnbl_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_TempEngShtDwnEnbl_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_TempEn);

    /* Outport: '<Root>/VeSRAR_b_ThmlLoadShdActv' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_ThmlLoadShdActv_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_ThmlLoadShdActv_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_ThmlLo);

    /* Outport: '<Root>/VeSRAR_b_TrqEnblReq_TCM_PHEV' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_TrqEnblReq_TCM_PHEV_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_TrqEnblReq_TCM_PHEV_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_TrqEnb);

    /* Outport: '<Root>/VeSRAR_b_VehShutoffSoon' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_VehShutoffSoon_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_VehShutoffSoon_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_VehShu);

    /* Outport: '<Root>/VeSRAR_b_Veh_Spd_Lmtd' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_Veh_Spd_Lmtd_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_Veh_Spd_Lmtd_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_Veh_Sp);

    /* Outport: '<Root>/VeSRAR_b_limitInputTrq' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_b_limitInputTrq_Out_Init'
     */
    (void)Rte_Write_VeSRAR_b_limitInputTrq_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_b_limitI);

    /* Outport: '<Root>/VeSRAR_e_EPB_Hold_Req' incorporates:
     *  SignalConversion generated from: '<S2427>/VeSRAR_e_EPB_Hold_Req_Out_Init'
     *  SignalConversion generated from: '<S4>/VeSRAR_e_EPB_Hold_Req_Out_Init'
     */
    (void)Rte_Write_VeSRAR_e_EPB_Hold_Req_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_e_EPB_Ho);

    /* Outport: '<Root>/VeSRAR_e_EngStrtStpOvrrd' incorporates:
     *  SignalConversion generated from: '<S2427>/VeSRAR_e_EngStrtStpOvrrd_Out_Init'
     *  SignalConversion generated from: '<S4>/VeSRAR_e_EngStrtStpOvrrd_Out_Init'
     */
    (void)Rte_Write_VeSRAR_e_EngStrtStpOvrrd_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_e_EngStr);

    /* Outport: '<Root>/VeSRAR_e_EngStrtType' incorporates:
     *  SignalConversion generated from: '<S2427>/VeSRAR_e_EngStrtType_Out_Init'
     *  SignalConversion generated from: '<S4>/VeSRAR_e_EngStrtType_Out_Init'
     */
    (void)Rte_Write_VeSRAR_e_EngStrtType_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_e_EngS_d);

    /* Outport: '<Root>/VeSRAR_e_LoCAHCP_BSM_CANC2' incorporates:
     *  SignalConversion generated from: '<S2427>/VeSRAR_e_LoCAHCP_BSM_CANC2_Out_Init'
     *  SignalConversion generated from: '<S4>/VeSRAR_e_LoCAHCP_BSM_CANC2_Out_Init'
     */
    (void)Rte_Write_VeSRAR_e_LoCAHCP_BSM_CANC2_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_e_LoCAHC);

    /* Outport: '<Root>/VeSRAR_e_LoCHCP_BPCM_ePT' incorporates:
     *  SignalConversion generated from: '<S2427>/VeSRAR_e_LoCHCP_BPCM_ePT_Out_Init'
     *  SignalConversion generated from: '<S4>/VeSRAR_e_LoCHCP_BPCM_ePT_Out_Init'
     */
    (void)Rte_Write_VeSRAR_e_LoCHCP_BPCM_ePT_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_e_LoCH_f);

    /* Outport: '<Root>/VeSRAR_e_LoCHCP_BSM_CANC' incorporates:
     *  SignalConversion generated from: '<S2427>/VeSRAR_e_LoCHCP_BSM_CANC_Out_Init'
     *  SignalConversion generated from: '<S4>/VeSRAR_e_LoCHCP_BSM_CANC_Out_Init'
     */
    (void)Rte_Write_VeSRAR_e_LoCHCP_BSM_CANC_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_e_LoCH_p);

    /* Outport: '<Root>/VeSRAR_e_LoCHCP_TCMECM_CANC' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_e_LoCHCP_TCMECM_CANC_Out_Init'
     */
    (void)Rte_Write_VeSRAR_e_LoCHCP_TCMECM_CANC_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_e_LoCHCP);

    /* Outport: '<Root>/VeSRAR_g_RA_InputSet1' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_g_RA_InputSet1_Out_Init'
     */
    (void)Rte_Write_VeSRAR_g_RA_InputSet1_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_g_RA_Inp);

    /* Outport: '<Root>/VeSRAR_g_RA_InputSet2' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_g_RA_InputSet2_Out_Init'
     */
    (void)Rte_Write_VeSRAR_g_RA_InputSet2_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_g_RA_I_f);

    /* Outport: '<Root>/VeSRAR_g_RA_InputSet3' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_g_RA_InputSet3_Out_Init'
     */
    (void)Rte_Write_VeSRAR_g_RA_InputSet3_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_g_RA_I_o);

    /* Outport: '<Root>/VeSRAR_g_RA_InputSet4' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_g_RA_InputSet4_Out_Init'
     */
    (void)Rte_Write_VeSRAR_g_RA_InputSet4_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_g_RA__oo);

    /* Outport: '<Root>/VeSRAR_g_RA_InputSet5' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_g_RA_InputSet5_Out_Init'
     */
    (void)Rte_Write_VeSRAR_g_RA_InputSet5_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_g_RA__om);

    /* Outport: '<Root>/VeSRAR_g_RA_InputSet6' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_g_RA_InputSet6_Out_Init'
     */
    (void)Rte_Write_VeSRAR_g_RA_InputSet6_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_g_RA_I_a);

    /* Outport: '<Root>/VeSRAR_g_RA_InputSet7' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_g_RA_InputSet7_Out_Init'
     */
    (void)Rte_Write_VeSRAR_g_RA_InputSet7_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_g_RA_I_d);

    /* Outport: '<Root>/VeSRAR_g_RA_InputSet8' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_g_RA_InputSet8_Out_Init'
     */
    (void)Rte_Write_VeSRAR_g_RA_InputSet8_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_g_RA_I_n);

    /* Outport: '<Root>/VeSRAR_g_RA_InputSet9' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_g_RA_InputSet9_Out_Init'
     */
    (void)Rte_Write_VeSRAR_g_RA_InputSet9_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_g_RA_I_i);

    /* Outport: '<Root>/VeSRAR_i_LHOM_Trans_PHEV' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_i_LHOM_Trans_PHEV_Out_Init'
     */
    (void)Rte_Write_VeSRAR_i_LHOM_Trans_PHEV_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_i_LHOM_T);

    /* Outport: '<Root>/VeSRAR_k_ReasonStopCharging' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_k_ReasonStopCharging_Out_Init'
     */
    (void)Rte_Write_VeSRAR_k_ReasonStopCharging_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_k_Reason);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/InitSRAIOutput'
     */
    /* Outport: '<Root>/VeSRAR_n_HCPMaxEngRPM' incorporates:
     *  Constant: '<S2429>/Calib'
     *  Gain: '<S2431>/Gain'
     *  SignalConversion generated from: '<S4>/VeSRAR_n_HCPMaxEngRP_Init'
     */
    (void)Rte_Write_VeSRAR_n_HCPMaxEngRPM_Value(KeSRAR_n_HCPMaxEngRPM);

    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Outport: '<Root>/VeSRAR_scl_DisableAEMD' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_scl_DisableAEMD_Out_Init'
     */
    (void)Rte_Write_VeSRAR_scl_DisableAEMD_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_scl_Disa);

    /* Outport: '<Root>/VeSRAR_y_RemedialActionHist' incorporates:
     *  SignalConversion generated from: '<S4>/VeSRAR_y_RemedialActionHist_Out_Init'
     */
    (void)Rte_Write_VeSRAR_y_RemedialActionHist_Value
        (SRAR_ac_B.OutportBufferForVeSRAR_y_Remedi);

    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion generated from: '<S4>/CreepModeRqst_write'
     * */
    Rte_IrvWrite_SRAR_PwrOn_VeDCAB_b_CreepModeReq_DidWrite_out_IRV
        (SRAR_ac_B.OutportBufferForCreepModeRqst);

    /* SignalConversion generated from: '<S4>/VeSRAR_n_HCPMaxEngRPM_write' */
    Rte_IrvWrite_SRAR_PwrOn_VeSRAR_n_HCPMaxEngRPM_write_IRV(SRAR_ac_B.Gain);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, SRAR_CODE) SRAR_ac_Init(void)
{
    SRAR_ac_PrevZCX.New_Trig_ZCE = POS_ZCSIG;

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/SRAR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/InitSRAIOutput'
     */
    /* SystemInitialize for SignalConversion generated from: '<S2426>/VeSRAR_b_HybFeedback_ECM' incorporates:
     *  Constant: '<S2428>/Calib'
     */
    SRAR_ac_B.OutportBufferForVeSRAR_b_HybF_k = KeSRAR_b_HybFdkECM_Init;

    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S2427>/VeSRAR_e_EngStrtStpOvrrd_Out_Init' incorporates:
     *  Constant: '<S2427>/Const16'
     */
    SRAR_ac_B.OutportBufferForVeSRAR_e_EngStr = SRAR_ac_ConstB.Const16;

    /* SystemInitialize for SignalConversion generated from: '<S2427>/VeSRAR_e_EngStrtType_Out_Init' incorporates:
     *  Constant: '<S2427>/Const30'
     */
    SRAR_ac_B.OutportBufferForVeSRAR_e_EngS_d = SRAR_ac_ConstB.Const30;

    /* SystemInitialize for SignalConversion generated from: '<S2427>/VeSRAR_e_EPB_Hold_Req_Out_Init' incorporates:
     *  Constant: '<S2427>/Const37'
     */
    SRAR_ac_B.OutportBufferForVeSRAR_e_EPB_Ho = SRAR_ac_ConstB.Const37;

    /* SystemInitialize for SignalConversion generated from: '<S2427>/VeSRAR_e_LoCHCP_BPCM_ePT_Out_Init' incorporates:
     *  Constant: '<S2427>/Const59'
     */
    SRAR_ac_B.OutportBufferForVeSRAR_e_LoCH_f = SRAR_ac_ConstB.Const59;

    /* SystemInitialize for SignalConversion generated from: '<S2427>/VeSRAR_e_LoCAHCP_BSM_CANC2_Out_Init' incorporates:
     *  Constant: '<S2427>/Const61'
     */
    SRAR_ac_B.OutportBufferForVeSRAR_e_LoCAHC = SRAR_ac_ConstB.Const61;

    /* SystemInitialize for SignalConversion generated from: '<S2427>/VeSRAR_e_LoCHCP_BSM_CANC_Out_Init' incorporates:
     *  Constant: '<S2427>/Const63'
     */
    SRAR_ac_B.OutportBufferForVeSRAR_e_LoCH_p = SRAR_ac_ConstB.Const63;

    /* End of SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* SystemInitialize for SignalConversion generated from: '<S4>/VeSRAR_n_HCPMaxEngRPM_write' */
    Rte_IrvWrite_SRAR_ac_Init_VeSRAR_n_HCPMaxEngRPM_write_IRV(SRAR_ac_B.Gain);

    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRAR_MedTEB'
     */
    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_SRAC'
     */
    /* SystemInitialize for Chart: '<S52>/Chart' */
    SRAR_ac_DW.ANYStart = CeSRAR_e_AnyStrt;
    SRAR_ac_B.EngStrtType = CeSRAR_e_AnyStrt;
    SRAR_ac_B.NextStrtType = CeSRAR_e_AnyStrt;

    /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* SystemInitialize for Outport: '<Root>/VeSRAR_e_EngStrtStpOvrrd' incorporates:
     *  Merge: '<Root>/Merge_Outport_16'
     */
    (void)Rte_Write_VeSRAR_e_EngStrtStpOvrrd_Value(CeSTRR_e_NoOvrrd);

    /* SystemInitialize for Outport: '<Root>/VeSRAR_e_EngStrtType' incorporates:
     *  Merge: '<Root>/Merge_Outport_30'
     */
    (void)Rte_Write_VeSRAR_e_EngStrtType_Value(CeSRAR_e_NoStrt);

    /* SystemInitialize for Outport: '<Root>/VeSRAR_e_EPB_Hold_Req' incorporates:
     *  Merge: '<Root>/Merge_Outport_38'
     */
    (void)Rte_Write_VeSRAR_e_EPB_Hold_Req_Value(CeTRGR_e_EPBReq_NA);

    /* SystemInitialize for Outport: '<Root>/VeSRAR_e_LoCHCP_BPCM_ePT' incorporates:
     *  Merge: '<Root>/Merge_Outport_61'
     */
    (void)Rte_Write_VeSRAR_e_LoCHCP_BPCM_ePT_Value(CeSRAR_e_NoFaultHCPBPCM_ePT);

    /* SystemInitialize for Outport: '<Root>/VeSRAR_e_LoCAHCP_BSM_CANC2' incorporates:
     *  Merge: '<Root>/Merge_Outport_63'
     */
    (void)Rte_Write_VeSRAR_e_LoCAHCP_BSM_CANC2_Value(CeSRAR_e_NoFaultHCPBSM_C2);

    /* SystemInitialize for Outport: '<Root>/VeSRAR_e_LoCHCP_TCMECM_ePT' incorporates:
     *  Merge: '<Root>/Merge_Outport_64'
     */
    (void)Rte_Write_VeSRAR_e_LoCHCP_TCMECM_ePT_Value
        (CeSRAR_e_NoFaultHCPTCMECM_ePT);

    /* SystemInitialize for Outport: '<Root>/VeSRAR_e_LoCHCP_BSM_CANC' incorporates:
     *  Merge: '<Root>/Merge_Outport_65'
     */
    (void)Rte_Write_VeSRAR_e_LoCHCP_BSM_CANC_Value(CeSRAR_e_NoFaultHCPBSM_C1);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
