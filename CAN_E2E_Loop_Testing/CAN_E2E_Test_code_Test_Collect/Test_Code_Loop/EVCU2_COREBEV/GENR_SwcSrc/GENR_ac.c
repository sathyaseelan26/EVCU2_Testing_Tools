/*
 * File: GENR_ac.c
 *
 * Code generated for Simulink model 'GENR_ac'.
 *
 * Model version                  : 9.66
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:44:19 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "GENR_ac.h"
#include "look1_iflf_binlca_16a.h"
#include "look2_iflf_binlca_16a.h"

/* Named constants for Chart: '<S8>/Stateflow Chart' */
#define GENR_ac_IN_AlternatorMode      ((uint8)1U)
#define GENR_ac_IN_Boost               ((uint8)1U)
#define GENR_ac_IN_Buck_Sp             ((uint8)2U)
#define GENR_ac_IN_Idle                ((uint8)3U)
#define GENR_ac_IN_NO_ACTIVE_CHILD     ((uint8)0U)
#define GENR_ac_IN_NormalMode          ((uint8)2U)

/* Named constants for Chart: '<S502>/Stateflow Chart' */
#define GENR_ac_IN_Complete            ((uint8)1U)
#define GENR_ac_IN_Incomplete          ((uint8)2U)

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_GENR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(uint16, GENR_VAR_INIT) KeGENR_Cnt_DbncDeratedSetPt = 800U;/* Referenced by: '<S98>/Calib' */
static volatile CONST(uint16, GENR_VAR_INIT) KeGENR_Cnt_DbncDeratedSetPt_2 = 3U;/* Referenced by: '<S99>/Calib' */
static volatile CONST(uint16, GENR_VAR_INIT) KeGENR_Cnt_DbncIBS1_LowSOC = 200U;/* Referenced by: '<S176>/Calib' */
static volatile CONST(uint16, GENR_VAR_INIT) KeGENR_Cnt_DbncMaxAPMLvCur = 6U;/* Referenced by: '<S118>/Calib' */
static volatile CONST(uint16, GENR_VAR_INIT) KeGENR_Cnt_DbncSafeSetP = 200U;/* Referenced by: '<S177>/Calib' */
static volatile CONST(uint16, GENR_VAR_INIT) KeGENR_Cnt_DbncSwchSetP = 4800U;/* Referenced by: '<S119>/Calib' */
static volatile CONST(uint16, GENR_VAR_INIT)
    KeGENR_Cnt_DbncTurnOffAPM_P1CANError = 100U;/* Referenced by: '<S356>/Calib' */
static volatile CONST(uint16, GENR_VAR_INIT) KeGENR_Cnt_DbncTurnOffAPM_U0469 =
    200U;                              /* Referenced by: '<S357>/Calib' */
static volatile CONST(uint16, GENR_VAR_INIT) KeGENR_Cnt_DbncTurnOffCANC = 24000U;/* Referenced by: '<S120>/Calib' */
static volatile CONST(uint16, GENR_VAR_INIT) KeGENR_Cnt_Dbnc_APMOn = 100U;/* Referenced by: '<S367>/Calib' */
static volatile CONST(uint16, GENR_VAR_INIT) KeGENR_Cnt_Dbnc_P1fVCOn = 100U;/* Referenced by: '<S368>/Calib' */
static volatile CONST(uint16, GENR_VAR_INIT) KeGENR_Cnt_DelaySafeSetP = 2400U;/* Referenced by: '<S178>/Calib' */
static volatile CONST(uint16, GENR_VAR_INIT) KeGENR_Cnt_DerateDbnc = 3U;/* Referenced by: '<S199>/Calib' */
static volatile CONST(uint16, GENR_VAR_INIT) KeGENR_Cnt_DsblAPMDbnc = 800U;/* Referenced by: '<S310>/Calib' */
static volatile CONST(uint16, GENR_VAR_INIT) KeGENR_Cnt_NbrAlwd_InPlantAPMOff =
    0U;                                /* Referenced by: '<S333>/Calib' */
static volatile CONST(uint16, GENR_VAR_INIT) KeGENR_Cnt_PWURdy4ShtDwn_Dbnc = 40U;/* Referenced by: '<S496>/Calib' */
static volatile CONST(uint16, GENR_VAR_INIT) KeGENR_Cnt_PerWuStop_NoBuckCV = 60U;/* Referenced by: '<S497>/Calib' */
static volatile CONST(uint16, GENR_VAR_INIT) KeGENR_Cnt_PwrLimDbnc = 200U;/* Referenced by: '<S343>/Calib' */
static volatile CONST(uint16, GENR_VAR_INIT) KeGENR_Cnt_SOC_DbncAPM_ShtDwn =
    400U;                              /* Referenced by: '<S392>/Calib' */
static volatile CONST(uint16, GENR_VAR_INIT) KeGENR_Cnt_SysVoltHighFAThrshold =
    400U;                              /* Referenced by: '<S415>/Calib' */
static volatile CONST(uint16, GENR_VAR_INIT) KeGENR_Cnt_VoltageDroopDbnc = 200U;/* Referenced by: '<S239>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_I_APM_IdcHvSetP = 7.0F;/* Referenced by: '<S24>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_I_APM_IdcLvSetP = 100.0F;/* Referenced by: '<S25>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_I_DischCurrMin = 2.0F;/* Referenced by: '<S100>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_I_ErrorDeb = 0.1F;/* Referenced by: '<S139>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_I_LowBattLVEnblAPMOvrCurr =
    4.0F;                              /* Referenced by: '<S297>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_I_LvCurTrgt = 19.5F;/* Referenced by: '<S140>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_I_MaxAPMLvCur = 100.0F;/* Referenced by:
                                                                      * '<S121>/Calib'
                                                                      * '<S200>/Calib'
                                                                      */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_I_MaxIBSCur = 80.0F;/* Referenced by: '<S122>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_K_CurCtrlFiltr1 = 1.0F;/* Referenced by: '<S141>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_K_CurCtrlFiltr2 = 0.01F;/* Referenced by: '<S142>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_K_KiTerm = 0.5F;/* Referenced by: '<S201>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_K_KiTermP1fVC = 0.5F;/* Referenced by: '<S202>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_K_Ki_LvCurCtrl = 0.0025F;/* Referenced by: '<S143>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_K_KpTerm = 0.1F;/* Referenced by: '<S203>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_K_KpTermP1fVC = 0.1F;/* Referenced by: '<S204>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_K_Kp_LvCurCtrl = 0.0F;/* Referenced by: '<S144>/Calib' */

#if Rte_SysCon_Variant_GENR_1

static volatile CONST(float32, GENR_VAR_INIT) KeGENR_P_ExitDspt_PwrLmt = 3.5F;/* Referenced by: '<S466>/Calib' */

#endif

static volatile CONST(float32, GENR_VAR_INIT) KeGENR_P_MinBattPwr_APMShutDwn =
    10.0F;                             /* Referenced by: '<S311>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_P_MinBattPwr_ShtDwn = 0.7F;/* Referenced by: '<S344>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_P_VoltDroop_LSP = 600.0F;/* Referenced by: '<S240>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_P_VoltDroop_RSP = 800.0F;/* Referenced by: '<S241>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_Pct_ACBlower_LSP = 53.0F;/* Referenced by: '<S223>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_Pct_ACBlower_RSP = 54.0F;/* Referenced by: '<S224>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_Pct_Dflt_IBS_BattSOC =
    100.0F;                            /* Referenced by: '<S562>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_Pct_DisableAPM_InFieldLSP =
    20.0F;                             /* Referenced by: '<S393>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_Pct_DisableAPM_InFieldRSP =
    30.0F;                             /* Referenced by:
                                        * '<S394>/Calib'
                                        * '<S369>/Calib'
                                        */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_Pct_DisableAPM_InPlant =
    25.0F;                             /* Referenced by: '<S395>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_Pct_DisableAPM_LSP = 22.0F;/* Referenced by: '<S396>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_Pct_DisableAPM_PSA_LSP =
    16.0F;                             /* Referenced by: '<S397>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_Pct_DisableAPM_PSA_RSP =
    19.0F;                             /* Referenced by: '<S398>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT)
    KeGENR_Pct_DisableAPM_PlgInChargingLSP = 10.0F;/* Referenced by: '<S399>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT)
    KeGENR_Pct_DisableAPM_PlgInChargingRSP = 13.0F;/* Referenced by: '<S400>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_Pct_DisableAPM_RSP = 22.8F;/* Referenced by: '<S401>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_Pct_HVBatSOCLowThrsh_PerWU =
    15.0F;                             /* Referenced by: '<S508>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_Pct_HVBattSOCThreshold =
    35.0F;                             /* Referenced by: '<S52>/Calib' */

#if Rte_SysCon_Variant_GENR_1

static volatile CONST(float32, GENR_VAR_INIT) KeGENR_Pct_HVDsptOver = 2.0F;/* Referenced by: '<S467>/Calib' */

#endif

static volatile CONST(float32, GENR_VAR_INIT) KeGENR_Pct_IBS1_LowSOC_LSP = 50.0F;/* Referenced by: '<S179>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_Pct_IBS1_LowSOC_RSP = 55.0F;/* Referenced by: '<S180>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_Pct_LoSOCP1fVC = 25.0F;/* Referenced by: '<S370>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_Pct_MaxVoltDiff = 7.0F;/* Referenced by: '<S74>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_Pct_MinHVSOC = 24.0F;
                                   /* Referenced by: '<S502>/Stateflow Chart' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_Pct_OvrdValHVBatSOC = 50.0F;/* Referenced by: '<S563>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_Pct_PwrMaxUtilPct = 97.0F;/* Referenced by: '<S205>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_Pct_RadFan_LSP = 83.0F;/* Referenced by: '<S225>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_Pct_RadFan_RSP = 84.0F;/* Referenced by: '<S226>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_Pct_Trgt_SOC = 75.0F;
                                   /* Referenced by: '<S502>/Stateflow Chart' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_Pct_UtilMaxUtilPct = 97.0F;/* Referenced by: '<S206>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_Pct_VoltageDroopMinIBS_SOC =
    80.0F;                             /* Referenced by: '<S242>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_T_CalibratedTemp = 0.0F;/* Referenced by: '<S253>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_T_DCDCDeratingTemp = -29.0F;/* Referenced by: '<S416>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_T_IBS1_Temp_Max = 60.0F;/* Referenced by: '<S181>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_T_IBS2_Offset = 5.0F;/* Referenced by: '<S182>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_T_IBS2_Temp_Max = 60.0F;/* Referenced by: '<S183>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_T_IBS2_Temp_Val = 0.0F;/* Referenced by: '<S564>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_T_IBSTempLSPThrshld = 23.0F;/* Referenced by: '<S110>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_T_IBSTempRSPThrshld = 25.0F;/* Referenced by: '<S111>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_T_IBSTmpLatch_HV = 50.0F;/* Referenced by: '<S269>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_T_IBSTmpLatch_PerWu = 50.0F;/* Referenced by: '<S272>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_U_APM_VdcHvSetP = 32.0F;/* Referenced by:
                                                                      * '<S26>/Calib'
                                                                      * '<S36>/Calib'
                                                                      */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_U_BSGLimit_Crank = 7.0F;/* Referenced by: '<S84>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_U_BSGLimit_ESS = 10.0F;/* Referenced by: '<S85>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_U_BSGLimit_ESS_P1fVC = 8.0F;/* Referenced by: '<S86>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_U_BatPackVoltMin = 10.0F;/* Referenced by: '<S298>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_U_CntctrCls12VTH_Hi = 11.5F;/* Referenced by: '<S480>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_U_CntctrCls12VTH_Lo = 10.2F;/* Referenced by: '<S481>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_U_DerateSPFilt_IV = 13.5F;/* Referenced by: '<S53>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_U_EVRDesVSetP_Val = 0.0F;/* Referenced by: '<S565>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_U_ErrorDeb = 0.1F;/* Referenced by: '<S207>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_U_HighSOC_SetPt = 11.99F;/* Referenced by: '<S54>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_U_Integrator_Max = 1.0F;/* Referenced by: '<S208>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_U_Integrator_Min = -1.0F;/* Referenced by: '<S209>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_U_IntgrMax_LvCurCtrl = 5.0F;/* Referenced by: '<S145>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_U_IntgrMin_LvCurCtrl =
    -5.0F;                             /* Referenced by: '<S146>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_U_LD_SetPt = -0.5F;/* Referenced by: '<S160>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_U_LU_SetPt = 0.5F;/* Referenced by: '<S161>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_U_LowSOC_SetPt = 11.01F;/* Referenced by: '<S55>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_U_MXCurCtrl = 15.0F;/* Referenced by: '<S147>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_U_MaxGenRegulatorSetpoint =
    16.0F;                             /* Referenced by: '<S232>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_U_MaxSetPt = 16.0F;/* Referenced by:
                                                                      * '<S75>/Calib'
                                                                      * '<S162>/Calib'
                                                                      */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_U_MaxVoltDiffAPMFlt = 2.5F;/* Referenced by: '<S417>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_U_Min12VThresholdFailure =
    11.0F;                             /* Referenced by: '<S418>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_U_MinBattFeedVolt = 3.0F;/* Referenced by: '<S76>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_U_MinDiffB4OvrRide = 0.75F;/* Referenced by: '<S233>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_U_MinGenRegulatorSetpoint =
    9.0F;                              /* Referenced by: '<S234>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_U_MinSetPt = 9.0F;/* Referenced by: '<S163>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_U_MinSetPt_LvCurCtrl =
    12.0F;                             /* Referenced by: '<S148>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_U_MinSetPt_LvCurCtrl_PSA =
    12.5F;                             /* Referenced by: '<S149>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_U_OverSetPtValue = 13.5F;/* Referenced by: '<S56>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_U_PMDR_Offset = 0.0F;/* Referenced by: '<S210>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_U_ReqOvrdVal = 0.0F;/* Referenced by: '<S164>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_U_SNASetPt = 12.5F;/* Referenced by: '<S132>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_U_SPFilt_IV = 13.5F;/* Referenced by: '<S165>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_U_SafeSetP = 13.0F;/* Referenced by: '<S184>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_U_SetPVoltRqP1fVC_OvrdVal =
    0.0F;                              /* Referenced by: '<S520>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_U_SetPVoltRq_OvrdVal = 0.0F;/* Referenced by: '<S521>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_U_SetP_VoltageDroop = 12.4F;/* Referenced by: '<S243>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_U_VdcHVSpNegDiff = -4.0F;/* Referenced by: '<S37>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_U_VdcHVSpPosDiff = 4.0F;/* Referenced by: '<S38>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_U_VoltDroop_OvrdVal = 12.5F;/* Referenced by: '<S244>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_APMIdcHvSetPFA_OvrdVal =
    0;                                 /* Referenced by: '<S522>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_APM_OperMode_Ovrd = 0;/* Referenced by: '<S566>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_APM_Ovrld_Ovrd = 0;/* Referenced by: '<S523>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_APM_Ovrld_OvrdVal = 0;/* Referenced by: '<S524>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_APM_Volt_NA = 1;/* Referenced by: '<S77>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_AltModeFailureDis = 1;/* Referenced by: '<S31>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_AlternatorMode = 0;/* Referenced by: '<S32>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_Boost_One = 0;/* Referenced by: '<S39>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_Boost_Three = 0;/* Referenced by: '<S40>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_Boost_Two = 0;/* Referenced by: '<S41>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_CurCtrlSetPtSelect = 1;/* Referenced by: '<S123>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_DRMFrezPIEnbl = 0;/* Referenced by: '<S211>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_DerateOvrd = 1;/* Referenced by: '<S101>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_DisAPM_OffFeatureEngCrank
    = 0;                               /* Referenced by: '<S318>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_DisableCmpnstr = 1;/* Referenced by: '<S212>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_Dsable_P1fVC_Rq = 0;/* Referenced by:
                                                                      * '<S347>/Calib'
                                                                      * '<S371>/Calib'
                                                                      */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_Dual_CAN = 1;/* Referenced by: '<S78>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_EVRDesVSetP_Ovrd = 0;/* Referenced by: '<S567>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_Enable_PerWuTimer = 1;/* Referenced by: '<S498>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_EnblAPMFailureMode = 1;/* Referenced by: '<S419>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_EnblAPM_FailureMode = 1;/* Referenced by: '<S420>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_EnblAPM_FailureRsn = 1;/* Referenced by: '<S421>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_EnblEOPBasedSetPT = 0;/* Referenced by: '<S112>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_EnblFltModeMismatch = 1;/* Referenced by: '<S422>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_EnblFltVltMismatch = 1;/* Referenced by: '<S423>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT)
    KeGENR_b_HybGenSPDtyCycPtOverAct_Ovrd = 0;/* Referenced by: '<S525>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT)
    KeGENR_b_HybGenSPDtyCycPtOverAct_OvrdVal = 0;/* Referenced by: '<S526>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_IBS2_Temp_Ovrd = 0;/* Referenced by: '<S568>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_IBS_BattTemp_FA_Ovrd = 0;/* Referenced by: '<S569>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_IBS_BattTemp_FA_Val = 0;/* Referenced by: '<S570>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT)
    KeGENR_b_IBS_BattTemp_FailureSts_Ovrd = 0;/* Referenced by: '<S571>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT)
    KeGENR_b_IBS_BattTemp_Sgnl_Rcvd_Ovrd = 0;/* Referenced by: '<S572>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT)
    KeGENR_b_IBS_BattTemp_Sgnl_Rcvd_Val = 0;/* Referenced by: '<S573>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_IDCM_Prsnt = 0;/* Referenced by: '<S79>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_IgnoreHoodAjar = 1;/* Referenced by: '<S341>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_InFieldMode_Ovrd = 0;/* Referenced by: '<S574>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_InFieldMode_Val = 0;/* Referenced by: '<S575>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_IsBSG = 1;/* Referenced by: '<S402>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_IsEVA = 0;/* Referenced by:
                                                                  * '<S171>/Calib'
                                                                  * '<S235>/Calib'
                                                                  */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_LOC_PPU = 0;/* Referenced by: '<S80>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_LossOfCommLVFail = 1;/* Referenced by: '<S424>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_LowBattLVACC = 0;/* Referenced by: '<S299>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_LowBattLVRUN = 1;/* Referenced by: '<S300>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_LowVoltEnblRq_Ovrd = 0;/* Referenced by: '<S527>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_LowVoltEnblRq_OvrdVal = 0;/* Referenced by: '<S528>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_LowVoltSysFldToECMOvrd =
    0;                                 /* Referenced by: '<S529>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_LowVoltSysFldToECMOvrdVal
    = 0;                               /* Referenced by: '<S530>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_LowVoltSysFld_Ovrd = 0;/* Referenced by: '<S531>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_LowVoltSysFld_OvrdVal = 0;/* Referenced by: '<S532>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_LvCFrezPIEnbl = 0;/* Referenced by: '<S213>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_MinBattVoltFailure = 0;/* Referenced by: '<S425>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_OvrdBatCntcrOprn = 0;/* Referenced by: '<S576>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_OvrdBatCntcrOprnVal = 0;/* Referenced by: '<S577>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_OvrdEngineSetP = 0;/* Referenced by: '<S236>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_OvrdEolTesting = 0;/* Referenced by: '<S336>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_OvrdEolTestingOvrd = 0;/* Referenced by: '<S337>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_OvrdGreenEng = 0;/* Referenced by: '<S319>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_OvrdHVBatSOC = 0;/* Referenced by: '<S578>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_OvrdHV_BatCntctrStat = 0;/* Referenced by: '<S579>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_OvrdMXCurCtrl = 0;/* Referenced by: '<S150>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_OvrdSetPt = 0;/* Referenced by: '<S57>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_P1fVC_ResetEnbl = 1;/* Referenced by: '<S166>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_PlantSetP_Enbl = 1;/* Referenced by: '<S254>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_PwrFrezPIEnbl = 0;/* Referenced by: '<S214>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_ReqOvrd = 0;/* Referenced by: '<S167>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_SetPVoltRqFA_OvrdVal = 0;/* Referenced by: '<S533>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_SetPVoltRqP1fVC_Ovrd = 0;/* Referenced by: '<S534>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_SetPVoltRq_Ovrd = 0;/* Referenced by: '<S535>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_ShippingMode = 0;/* Referenced by: '<S580>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_SysVoltHighFAOvrd = 0;/* Referenced by: '<S581>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_SysVoltHighFAOvrdVal = 0;/* Referenced by: '<S582>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_UseFailureType = 0;/* Referenced by: '<S426>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_UseModeRqMod = 1;/* Referenced by: '<S427>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_UtilFrezPIEnbl = 0;/* Referenced by: '<S215>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_VDeltaAllowMoreTime = 0;/* Referenced by: '<S428>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_VoltDroop_Ovrd = 0;/* Referenced by: '<S245>/Calib' */
static volatile CONST(boolean, GENR_VAR_INIT) KeGENR_b_stModeReq_Ovrd = 0;/* Referenced by: '<S536>/Calib' */
static volatile CONST(TeHPMR_e_APM_OperMode, GENR_VAR_INIT)
    KeGENR_e_APM_OperMode_Val = CeHPMR_e_Idle;/* Referenced by: '<S583>/Calib' */
static volatile CONST(TeODCR_e_IO_CntrlSt, GENR_VAR_INIT) KeGENR_e_DVC_APMStsOut
    = CeODCR_e_ShortTermAdjust;        /* Referenced by: '<S338>/Calib' */
static volatile CONST(TeGENR_e_IBS_BattTempSts, GENR_VAR_INIT)
    KeGENR_e_IBS_BattTemp_FailureSts_Val = CeGENR_e_BattTempSts_Fail_NtPrsnt;/* Referenced by: '<S584>/Calib' */
static volatile CONST(TeHVTR_e_HV_BatCntctrStat, GENR_VAR_INIT)
    KeGENR_e_OvrdHV_BatCntctrStatVal = CeHVTR_e_Open;/* Referenced by: '<S585>/Calib' */
static volatile CONST(TePLTR_e_ShipingMode, GENR_VAR_INIT) KeGENR_e_ShippingMode
    = CePLTR_e_ShipingMode_CUST_MD;    /* Referenced by: '<S586>/Calib' */
static volatile CONST(TeGENR_e_APM_OperMode, GENR_VAR_INIT)
    KeGENR_e_stModeReq_OvrdVal = CeGENR_e_Default;/* Referenced by: '<S537>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_k_APMOvrCurr_Coef = 0.003F;/* Referenced by: '<S301>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_k_APMStsOut = 8.0F;/* Referenced by: '<S339>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_k_HighVoltCoef = 0.003F;/* Referenced by: '<S302>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_k_LPF_Cooef4PctVoltDiff =
    0.015F;                            /* Referenced by: '<S81>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_k_TempFiltCoef = 0.9F;/* Referenced by: '<S255>/Calib' */
static volatile CONST(uint16, GENR_VAR_INIT) KeGENR_k_TempInputSelector = 1U;/* Referenced by: '<S256>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_k_VoltageLowPassFilter =
    0.1F;                              /* Referenced by: '<S58>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_t_APMOff_EngCrank_Inplant =
    6.0F;                              /* Referenced by: '<S334>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_t_DbncIDCMThrmlRunAway =
    0.1F;                              /* Referenced by: '<S429>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_t_DbncTelltale = 30.0F;/* Referenced by: '<S430>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_t_DbncTimeAPMFlt = 2.5F;/* Referenced by: '<S431>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_t_DbncTimeBattDisc = 1.5F;/* Referenced by: '<S59>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_t_DbncTimeCommFlt = 2.5F;/* Referenced by: '<S432>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_t_DbncTimeFailurRsn = 2.5F;/* Referenced by: '<S433>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_t_DbncTimeFailureModeSts =
    2.5F;                              /* Referenced by: '<S434>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_t_DbncTimeFailureType =
    5.0F;                              /* Referenced by: '<S435>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_t_DbncTimeMdMismatch = 2.5F;/* Referenced by: '<S436>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_t_DbncVltFailure = 15.0F;/* Referenced by: '<S437>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_t_DbncVltMismatch = 2.5F;/* Referenced by: '<S438>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_t_DbncVltMismatch_Derating =
    420.0F;                            /* Referenced by: '<S439>/Calib' */

#if Rte_SysCon_Variant_GENR_1

static volatile CONST(float32, GENR_VAR_INIT) KeGENR_t_Dbnc_APMFail_HVDspt =
    1.0F;                              /* Referenced by: '<S468>/Calib' */

#endif

#if Rte_SysCon_Variant_GENR_1

static volatile CONST(float32, GENR_VAR_INIT) KeGENR_t_Dbnc_APMSts_HVDspt =
    10.0F;                             /* Referenced by: '<S469>/Calib' */

#endif

static volatile CONST(float32, GENR_VAR_INIT) KeGENR_t_Dbnc_CntctrCls12VTH_Hi =
    0.1F;                              /* Referenced by: '<S482>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_t_Dbnc_CntctrCls12VTH_Lo =
    0.2F;                              /* Referenced by: '<S483>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_t_Dbnc_IBSOC = 2.0F;/* Referenced by: '<S587>/Calib' */

#if Rte_SysCon_Variant_GENR_1

static volatile CONST(float32, GENR_VAR_INIT) KeGENR_t_Dbnc_SOC_HVDispt = 1.0F;/* Referenced by: '<S470>/Calib' */

#endif

#if Rte_SysCon_Variant_GENR_1

static volatile CONST(float32, GENR_VAR_INIT) KeGENR_t_Dbnc_Short_Weld = 60.0F;/* Referenced by: '<S471>/Calib' */

#endif

static volatile CONST(float32, GENR_VAR_INIT) KeGENR_t_HVBatSOCLow_PerWUTimer =
    840.0F;                            /* Referenced by: '<S509>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_t_HoldCANCOn_PerWu = 10.0F;/* Referenced by: '<S499>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_t_IBSSOCFA_FieldMode =
    48.0F;                             /* Referenced by: '<S510>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_t_IBSSOCFA_ShipMode =
    240.0F;                            /* Referenced by: '<S511>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_t_LatchIBSTmp_HV_TmpHi =
    9000.0F;                           /* Referenced by: '<S270>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_t_LatchIBSTmp_HV_TmpLo =
    14400.0F;                          /* Referenced by: '<S271>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_t_LatchIBSTmp_PerWu_TmpHi =
    9000.0F;                           /* Referenced by: '<S273>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_t_LatchIBSTmp_PerWu_TmpLo =
    14400.0F;                          /* Referenced by: '<S274>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_t_LowBattLVEnblOvrCurrTime =
    10.0F;                             /* Referenced by: '<S303>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_t_MaxTimerB4ShtDwn =
    10800.0F;                      /* Referenced by: '<S502>/Stateflow Chart' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_t_SOC_Factor = 1.0F;
                                   /* Referenced by: '<S502>/Stateflow Chart' */
static volatile CONST(float32, GENR_VAR_INIT)
    KeGENR_t_TimeAPM_OffDuringEngineCrank = 2.0F;/* Referenced by: '<S325>/Calib' */
static volatile CONST(float32, GENR_VAR_INIT) KeGENR_t_WU_Dbnc = 5.0F;
                                   /* Referenced by: '<S502>/Stateflow Chart' */
static volatile CONST(float32, GENR_VAR_INIT) KtGENR_U_ACBlowerBasedSetPt[4] =
{
    13.75F, 13.75F, 13.75F, 13.75F
} ;                                    /* Referenced by: '<S227>/Vector' */

static volatile CONST(float32, GENR_VAR_INIT) KtGENR_U_EOPTmpBasedSetPt[19] =
{
    14.6F, 14.6F, 14.6F, 13.825F, 13.05F, 12.275F, 11.5F, 11.5F, 11.5F, 11.5F,
    11.5F, 11.5F, 11.5F, 11.5F, 11.5F, 11.5F, 11.5F, 11.5F, 11.5F
} ;                                    /* Referenced by: '<S113>/Vector' */

static volatile CONST(float32, GENR_VAR_INIT) KtGENR_U_PlantMode_SetP[45] =
{
    14.7468F, 14.7468F, 14.7468F, 14.7468F, 14.7468F, 14.7468F, 14.7468F,
    14.7468F, 14.7468F, 14.7468F, 14.5928F, 14.5928F, 14.5928F, 14.5928F,
    14.5928F, 14.4142F, 14.4142F, 14.4142F, 14.4142F, 14.4142F, 14.2356F,
    14.2356F, 14.2356F, 14.2356F, 14.2356F, 14.0177F, 14.0177F, 14.0177F,
    14.0177F, 14.0177F, 13.8666F, 13.8666F, 13.8666F, 13.8666F, 13.8666F,
    13.6813F, 13.6813F, 13.6813F, 13.6813F, 13.6813F, 13.496F, 13.496F, 13.496F,
    13.496F, 13.496F
} ;                                    /* Referenced by: '<S257>/Vector' */

static volatile CONST(float32, GENR_VAR_INIT) KtGENR_U_RadFanBasedSetPt[4] =
{
    13.8F, 13.8F, 13.8F, 13.8F
} ;                                    /* Referenced by: '<S228>/Vector' */

static volatile CONST(float32, GENR_VAR_INIT) KtGENR_U_TmpBasedSetP_LowSOC[10] =
{
    14.75F, 14.75F, 14.75F, 14.57F, 14.39F, 14.21F, 14.04F, 13.86F, 13.86F,
    13.5F
} ;                                    /* Referenced by: '<S185>/Vector' */

static volatile CONST(float32, GENR_VAR_INIT) KtGENR_U_TmpSOC_BasedSetP[55] =
{
    14.75F, 14.75F, 14.75F, 14.75F, 14.75F, 14.75F, 14.75F, 14.75F, 14.75F,
    14.75F, 14.75F, 14.75F, 14.75F, 14.75F, 14.75F, 14.57F, 14.57F, 14.53F,
    14.38F, 14.24F, 14.39F, 14.39F, 14.35F, 14.21F, 14.06F, 14.21F, 14.21F,
    14.17F, 14.03F, 13.89F, 14.04F, 14.04F, 13.99F, 13.85F, 13.72F, 13.86F,
    13.86F, 13.82F, 13.68F, 13.54F, 13.68F, 13.68F, 13.64F, 13.5F, 13.37F, 13.5F,
    13.5F, 13.46F, 13.32F, 13.19F, 13.46F, 13.46F, 13.46F, 13.32F, 13.19F
} ;                                    /* Referenced by: '<S186>/Vector' */

static volatile CONST(float32, GENR_VAR_INIT) KtGENR_U_TmpSOC_SetP[55] =
{
    14.75F, 14.75F, 14.75F, 14.75F, 14.75F, 14.75F, 14.75F, 14.75F, 14.75F,
    14.75F, 14.75F, 14.75F, 14.75F, 14.75F, 14.75F, 14.57F, 14.57F, 14.53F,
    14.38F, 14.24F, 14.39F, 14.39F, 14.35F, 14.21F, 14.06F, 14.21F, 14.21F,
    14.17F, 14.03F, 13.89F, 14.04F, 14.04F, 13.99F, 13.85F, 13.72F, 13.86F,
    13.86F, 13.82F, 13.68F, 13.54F, 13.68F, 13.68F, 13.64F, 13.5F, 13.37F, 13.5F,
    13.5F, 13.46F, 13.32F, 13.19F, 13.46F, 13.46F, 13.46F, 13.32F, 13.19F
} ;                                    /* Referenced by: '<S258>/Vector' */

static volatile CONST(float32, GENR_VAR_INIT) KtGENR_U_VltDroopDeltaStPt[5] =
{
    0.5F, 1.0F, 1.2F, 1.5F, 1.5F
} ;                                    /* Referenced by: '<S246>/Vector' */

static volatile CONST(float32, GENR_VAR_INIT) KtGENR_k_SetPointFactor[8] =
{
    0.85F, 0.9F, 0.95F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S102>/Vector' */

static volatile CONST(float32, GENR_VAR_INIT) KtGENR_t_WU_Field_Days[5] =
{
    0.1F, 3.0F, 7.0F, 20.0F, 21.0F
} ;                                    /* Referenced by: '<S512>/Vector' */

static volatile CONST(float32, GENR_VAR_INIT) KtGENR_t_WU_Ship_Days[5] =
{
    0.1F, 5.0F, 15.0F, 25.0F, 35.0F
} ;                                    /* Referenced by: '<S513>/Vector' */

static volatile CONST(float32, GENR_VAR_INIT) KxGENR_U_ACBlowerBasedSetPt[4] =
{
    0.0F, 50.0F, 55.0F, 100.0F
} ;                                    /* Referenced by: '<S227>/Vector' */

static volatile CONST(float32, GENR_VAR_INIT) KxGENR_U_EOPTmpBasedSetPt[19] =
{
    -15.0F, -10.1F, -5.0F, 0.0F, 5.0F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 35.0F,
    40.0F, 45.0F, 50.0F, 55.0F, 60.0F, 65.0F, 70.0F, 75.0F
} ;                                    /* Referenced by: '<S113>/Vector' */

static volatile CONST(float32, GENR_VAR_INIT) KxGENR_U_PlantMode_SetP[5] =
{
    50.0F, 78.0F, 85.0F, 92.0F, 100.0F
} ;                                    /* Referenced by: '<S257>/Vector' */

static volatile CONST(float32, GENR_VAR_INIT) KxGENR_U_RadFanBasedSetPt[4] =
{
    0.0F, 80.0F, 85.0F, 100.0F
} ;                                    /* Referenced by: '<S228>/Vector' */

static volatile CONST(float32, GENR_VAR_INIT) KxGENR_U_TmpBasedSetP_LowSOC[10] =
{
    -40.0F, -21.0F, 0.0F, 10.0F, 21.0F, 30.0F, 41.0F, 50.0F, 61.0F, 70.0F
} ;                                    /* Referenced by: '<S185>/Vector' */

static volatile CONST(float32, GENR_VAR_INIT) KxGENR_U_TmpSOC_BasedSetP[5] =
{
    50.0F, 78.0F, 85.0F, 92.0F, 100.0F
} ;                                    /* Referenced by: '<S186>/Vector' */

static volatile CONST(float32, GENR_VAR_INIT) KxGENR_U_TmpSOC_SetP[5] =
{
    50.0F, 78.0F, 85.0F, 92.0F, 100.0F
} ;                                    /* Referenced by: '<S258>/Vector' */

static volatile CONST(float32, GENR_VAR_INIT) KxGENR_U_VltDroopDeltaStPt[5] =
{
    -40.0F, -20.0F, 0.0F, 30.0F, 80.0F
} ;                                    /* Referenced by: '<S246>/Vector' */

static volatile CONST(float32, GENR_VAR_INIT) KxGENR_k_SetPointFactor[8] =
{
    5.0F, 15.0F, 20.0F, 30.0F, 35.0F, 45.0F, 50.0F, 60.0F
} ;                                    /* Referenced by: '<S102>/Vector' */

static volatile CONST(float32, GENR_VAR_INIT) KxGENR_t_WU_Field_Days[5] =
{
    35.0F, 50.0F, 60.0F, 75.0F, 85.0F
} ;                                    /* Referenced by: '<S512>/Vector' */

static volatile CONST(float32, GENR_VAR_INIT) KxGENR_t_WU_Ship_Days[5] =
{
    35.0F, 50.0F, 60.0F, 75.0F, 85.0F
} ;                                    /* Referenced by: '<S513>/Vector' */

static volatile CONST(float32, GENR_VAR_INIT) KyGENR_U_PlantMode_SetP[9] =
{
    0.0F, 10.0F, 20.0F, 30.0F, 40.0F, 41.0F, 50.0F, 60.0F, 70.0F
} ;                                    /* Referenced by: '<S257>/Vector' */

static volatile CONST(float32, GENR_VAR_INIT) KyGENR_U_TmpSOC_BasedSetP[11] =
{
    -40.0F, -21.0F, 0.0F, 10.0F, 21.0F, 30.0F, 41.0F, 50.0F, 61.0F, 70.0F, 80.0F
} ;                                    /* Referenced by: '<S186>/Vector' */

static volatile CONST(float32, GENR_VAR_INIT) KyGENR_U_TmpSOC_SetP[11] =
{
    -40.0F, -21.0F, 0.0F, 10.0F, 21.0F, 30.0F, 41.0F, 50.0F, 61.0F, 70.0F, 80.0F
} ;                                    /* Referenced by: '<S258>/Vector' */

#define STOP_SEC_CALIB_UNSPECIFIED_GENR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_GENR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(uint8, GENR_VAR_INIT) VeGENR_Cnt_P1fDebug123;/* '<S351>/Merge_P1f_VC2' */
static VAR(uint8, GENR_VAR_INIT) VeGENR_Cnt_SetPtModeDebug;/* '<S89>/Merge1' */
static VAR(float32, GENR_VAR_INIT) VeGENR_I_CurError_Filtered;/* '<S133>/Sum1' */
static VAR(float32, GENR_VAR_INIT) VeGENR_I_CurTarget_Filtered;/* '<S135>/Subtraction1' */
static VAR(float32, GENR_VAR_INIT) VeGENR_I_LvBattCur_Filtered;/* '<S136>/Subtraction1' */
static VAR(float32, GENR_VAR_INIT) VeGENR_Pct_HVBatPackSOC;/* '<S6>/Switch9' */
static VAR(float32, GENR_VAR_INIT) VeGENR_Pct_IBSSOC;/* '<S6>/Switch14' */
static VAR(float32, GENR_VAR_INIT) VeGENR_T_IBS2_Temp;/* '<S6>/Switch8' */
static VAR(float32, GENR_VAR_INIT) VeGENR_U_12VBattVolt;/* '<S72>/Switch1' */
static VAR(float32, GENR_VAR_INIT) VeGENR_U_ACBlowerSetPt;/* '<S227>/Vector' */
static VAR(float32, GENR_VAR_INIT) VeGENR_U_ACBlowerSetPtDtmn;/* '<S93>/Switch1' */
static VAR(float32, GENR_VAR_INIT) VeGENR_U_CurCtrlTest1;/* '<S133>/Product1' */
static VAR(float32, GENR_VAR_INIT) VeGENR_U_CurCtrlTest2;/* '<S153>/Switch' */
static VAR(float32, GENR_VAR_INIT) VeGENR_U_DualIBS_SetP;/* '<S175>/Switch1' */
static VAR(float32, GENR_VAR_INIT) VeGENR_U_PI_FrezTest;/* '<S92>/Switch2' */
static VAR(float32, GENR_VAR_INIT) VeGENR_U_PI_Test3;/* '<S197>/Switch' */
static VAR(float32, GENR_VAR_INIT) VeGENR_U_PI_Test4;/* '<S92>/Product2' */
static VAR(float32, GENR_VAR_INIT) VeGENR_U_PI_Test5;/* '<S219>/Switch' */
static VAR(float32, GENR_VAR_INIT) VeGENR_U_RadFanSetPt;/* '<S228>/Vector' */
static VAR(float32, GENR_VAR_INIT) VeGENR_U_RadFanSetPtDtmn;/* '<S93>/Switch' */
static VAR(float32, GENR_VAR_INIT) VeGENR_U_SetPVoltRqTestSignal1;/* '<S46>/Switch2' */
static VAR(float32, GENR_VAR_INIT) VeGENR_U_SetPtCurCtrl;/* '<S89>/Merge' */
static VAR(float32, GENR_VAR_INIT) VeGENR_U_SetPtCurCtrl_Dtrmn;/* '<S89>/Switch' */
static VAR(float32, GENR_VAR_INIT) VeGENR_U_SetPtDerating;/* '<S42>/Merge1' */
static VAR(float32, GENR_VAR_INIT) VeGENR_U_SetPtSelect;/* '<S231>/Switch1' */
static VAR(float32, GENR_VAR_INIT) VeGENR_U_SetPtVoltRq;/* '<S90>/Switch2' */
static VAR(float32, GENR_VAR_INIT) VeGENR_U_SetPt_Dtrmn;/* '<S109>/Switch1' */
static VAR(float32, GENR_VAR_INIT) VeGENR_U_SetPt_PIOutput;/* '<S133>/Sum' */
static VAR(float32, GENR_VAR_INIT) VeGENR_U_SetPt_Support_Load;/* '<S93>/MinMax1' */
static VAR(float32, GENR_VAR_INIT) VeGENR_U_SetPt_Test3;/* '<S92>/Switch3' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_U_VoltDroop_Test1;/* '<S95>/Logical2' */
static VAR(float32, GENR_VAR_INIT) VeGENR_U_VoltDroop_Test3;/* '<S95>/MinMax' */
static VAR(float32, GENR_VAR_INIT) VeGENR_U_VoltDroop_Test4;/* '<S95>/Switch2' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_APMBuckEnbl_P1CANErrorCheck;/* '<S350>/Logical3' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_APMBuckEnbl_U0074Check;/* '<S350>/Logical6' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_APMBuckEnbl_U0120Check;/* '<S350>/Logical4' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_APMBuckEnbl_U0469Check;/* '<S350>/Logical2' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_APMEnblCheck;/* '<S42>/Merge2' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_APMEnbl_LoCMCPACheck;/* '<S350>/Logical5' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_APMEnbl_LoCMCPA_Mrg;/* '<S287>/Merge3' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_APMEnbl_P1fVC_Mrg;/* '<S287>/Merge2' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_APMLvCurTest;/* '<S89>/Comparison' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_APMOn_VC;/* '<S373>/AND' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_APM_BoostCompleteO;/* '<S22>/Logical2' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_AltModeActive;/* '<S21>/Logical1' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_BattCntctrOpenPndg;/* '<S6>/Switch' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_CANCOnRq_IBS;/* '<S89>/Logical7' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_Check_CANCOff_Rq;/* '<S126>/OR1' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_Check_CANCOn_Rq;/* '<S124>/OR1' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_CurrVoltCheck;/* '<S278>/Logical10' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_DerateSetPt;/* '<S87>/Logical10' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_Dual_CAN_DTC;/* '<S43>/Logical7' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_EOPBasedSetPt_Test1;/* '<S88>/Logical' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_EnableSafeSetP;/* '<S187>/AND' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_Enbl_HVDspt;
                                /* '<S17>/SigConvForSigProp_VariantSource2_0' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_EngCrnk1;/* '<S316>/Logical2' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_EngCrnk2;/* '<S328>/AND' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_EngineCrnkDisAPMCheck;/* '<S281>/Merge1' */

#if Rte_SysCon_Variant_GENR_1

static VAR(boolean, GENR_VAR_INIT) VeGENR_b_Enter_HV_Dispt;/* '<S460>/Logical6' */

#endif

static VAR(boolean, GENR_VAR_INIT) VeGENR_b_Eol_Active;/* '<S282>/Comparison4' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_Eol_ActiveTestSig1;/* '<S282>/Switch' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_Eol_ActiveTestSig2;/* '<S282>/Comparison1' */

#if Rte_SysCon_Variant_GENR_1

static VAR(boolean, GENR_VAR_INIT) VeGENR_b_ExitDispt_SOC;/* '<S472>/AND' */

#endif

#if Rte_SysCon_Variant_GENR_1

static VAR(boolean, GENR_VAR_INIT) VeGENR_b_ExitDspt_APMFail;/* '<S473>/AND' */

#endif

#if Rte_SysCon_Variant_GENR_1

static VAR(boolean, GENR_VAR_INIT) VeGENR_b_ExitDspt_APMNoBuck;/* '<S474>/AND' */

#endif

#if Rte_SysCon_Variant_GENR_1

static VAR(boolean, GENR_VAR_INIT) VeGENR_b_ExitDspt_PwrLmt;/* '<S460>/Comparison1' */

#endif

#if Rte_SysCon_Variant_GENR_1

static VAR(boolean, GENR_VAR_INIT) VeGENR_b_Exit_HV_Dispt;/* '<S460>/Logical4' */

#endif

static VAR(boolean, GENR_VAR_INIT) VeGENR_b_FailureLV;/* '<S12>/Logical3' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_Fault1;/* '<S12>/Logical4' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_Fault2;/* '<S12>/Logical5' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_Fault3;/* '<S12>/Logical6' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_Fault4;/* '<S12>/Logical7' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_Fault5;/* '<S12>/Logical15' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_Fault7;/* '<S12>/Logical8' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_Fault8;/* '<S12>/OR1' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_Fault9;/* '<S12>/OR2' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_GreenEng;/* '<S281>/Merge' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_GreenEngTest1;/* '<S317>/Comparison1' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_HVBattCntctrCheck;/* '<S283>/Logical9' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_HVFdbkMet;/* '<S34>/Logical Operator' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_HVFdbkReceived;/* '<S33>/Logical Operator' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_Hold_CANC_4PICtrl;/* '<S125>/OR1' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_HoodAjarAllwBuck;/* '<S284>/Logical11' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_IBS1_SOC_Low;/* '<S189>/AND' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_IBSCurTest;/* '<S89>/Comparison1' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_IBS_BattTemp_FA;/* '<S6>/Switch10' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_IBS_BattTemp_SgnlRcvd;/* '<S6>/Switch13' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_InFieldMode;/* '<S6>/Switch5' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_IntegratorEnble;/* '<S92>/Logical1' */

#if Rte_SysCon_Variant_GENR_1

static VAR(boolean, GENR_VAR_INIT) VeGENR_b_LoCBPCM;/* '<S460>/Logical1' */

#endif

static VAR(boolean, GENR_VAR_INIT) VeGENR_b_LoCMCPA_Mrg;/* '<S287>/Merge4' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_OVUVPwrLimCheck;/* '<S286>/Logical14' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_P1fVCEnbl;/* '<S351>/Merge_P1f_VC' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_P1f_VoltCntrlOn;/* '<S374>/AND' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_PowerLimitCond;/* '<S345>/AND' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_SOCHi_LowVoltSysGood;/* '<S351>/Logical6' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_SOCHi_LowVoltSysGood_P1fOff;/* '<S351>/Logical' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_SOCHi_LowVoltSysGood_P1fOn;/* '<S351>/Logical1' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_SOC_Hi_VC;/* '<S366>/Switch1' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_SgnValid;/* '<S89>/Logical2' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_SysVoltHighFA;/* '<S6>/Switch2' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_TestSignal1;/* '<S280>/Comparison1' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_TestSignal2;/* '<S280>/Comparison4' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_TestSignal4;/* '<S312>/AND' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_TestSignal5;/* '<S403>/AND' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_TestSignal6;/* '<S280>/Comparison2' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_VCOn_or_DfltAltrMode_Mrg;/* '<S287>/Merge1' */
static VAR(boolean, GENR_VAR_INIT) VeGENR_b_VoltDroop_Test2;/* '<S95>/Logical' */
static VAR(TeHVTR_e_HV_BatCntctrStat, GENR_VAR_INIT) VeGENR_e_HV_BatCntctrStat;/* '<S6>/Switch1' */
static VAR(TeGENR_e_IBS_BattTempSts, GENR_VAR_INIT) VeGENR_e_IBS_BattTempFailSts;/* '<S6>/Switch11' */
static VAR(TeGENR_e_APM_OperMode, GENR_VAR_INIT) VeGENR_e_ModeReq;/* '<S279>/Switch2' */
static VAR(TeGENR_e_APM_OperMode, GENR_VAR_INIT) VeGENR_e_ModeRq_Mod;/* '<S12>/Switch4' */
static VAR(TeHPMR_e_APM_OperMode, GENR_VAR_INIT) VeGENR_e_OperMode_HPMR;/* '<S6>/Switch3' */
static VAR(TePLTR_e_ShipingMode, GENR_VAR_INIT) VeGENR_e_ShippingMode;/* '<S6>/Switch4' */
static VAR(float32, GENR_VAR_INIT) VeGENR_t_IBSTmpLchTimer;/* '<S46>/Merge1' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_GENR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_GENR
#include "MemMap.h"

CONST(ConstB_GENR_ac_T, GENR_VAR_INIT) GENR_ac_ConstB =
{
    CeGENR_e_Default,                  /* '<S593>/Const5' */
    CeGENR_e_Default                   /* '<S593>/Const22' */
};

#define STOP_SEC_CONST_UNSPECIFIED_GENR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_GENR
#include "MemMap.h"

CONST(ConstP_GENR_ac_T, GENR_VAR_INIT) GENR_ac_ConstP =
{
    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S258>/Vector'
     *   '<S186>/Vector'
     */
    {
        4U, 10U
    },

    /* Computed Parameter: Vector_maxIndex
     * Referenced by: '<S257>/Vector'
     */
    {
        4U, 8U
    }
};

#define STOP_SEC_CONST_UNSPECIFIED_GENR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_GENR
#include "MemMap.h"

VAR(B_GENR_ac_T, GENR_VAR_INIT) GENR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_GENR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_GENR
#include "MemMap.h"

VAR(DW_GENR_ac_T, GENR_VAR_INIT) GENR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_GENR
#include "MemMap.h"

static FUNC(void, GENR_CODE_LOCAL) GENR_ac_SwitchCaseActionSubsystem(VAR(float32,
    AUTOMATIC) rtu_In1, P2VAR(float32, AUTOMATIC, GENR_VAR_INIT) rty_Out1);

/*
 * Output and update for action system:
 *    '<S46>/Switch Case Action Subsystem'
 *    '<S46>/Switch Case Action Subsystem1'
 *    '<S46>/Switch Case Action Subsystem2'
 *    '<S46>/Switch Case Action Subsystem3'
 *    '<S46>/Switch Case Action Subsystem4'
 *    '<S46>/Switch Case Action Subsystem5'
 *    '<S46>/Switch Case Action Subsystem6'
 */
static FUNC(void, GENR_CODE_LOCAL) GENR_ac_SwitchCaseActionSubsystem(VAR(float32,
    AUTOMATIC) rtu_In1, P2VAR(float32, AUTOMATIC, GENR_VAR_INIT) rty_Out1)
{
    /* Inport: '<S261>/In1' */
    *rty_Out1 = rtu_In1;
}

/* Model step function for TID1 */
FUNC(void, GENR_CODE) GENR_MedTEF(void) /* Explicit Task: MedTEF */
{
    /* local block i/o variables */
    float32 rtb_TmpSignalConversionAtVeIDCR_T_IBS_Ba;
    sint32 rtb_UnitDelay_gx_tmp;
    sint32 tmp;
    float32 Switch12;
    float32 rtb_Sum2_o;
    float32 rtb_Switch;
    float32 rtb_Switch_he4;
    float32 rtb_TmpSignalConversionAtVeESMR_P_BattLT;
    float32 rtb_TmpSignalConversionAtVeFSCR_Pct_RadF;
    float32 rtb_TmpSignalConversionAtVeHVTR_I_String;
    float32 rtb_TmpSignalConversionAtVeIDCR_I_APM_LV;
    float32 rtb_TmpSignalConversionAtVeIDCR_I_IBS_I_;
    float32 rtb_TmpSignalConversionAtVeIDCR_P_APM_De;
    float32 rtb_TmpSignalConversionAtVeIDCR_P_APM_Ou;
    float32 rtb_TmpSignalConversionAtVeIDCR_U_APM_HV;
    float32 rtb_TmpSignalConversionAtVeIDCR_U_APM_LV;
    float32 rtb_TmpSignalConversionAtVePMDR_U_BF1_Sy;
    float32 rtb_TmpSignalConversionAtVePMDR_U_BF2_Sy;
    float32 rtb_TmpSignalConversionAtVeTAIR_Pct_FrtB;
    float32 tmpRead;
    float32 tmpRead_1;
    float32 tmpRead_2;
    float32 tmpRead_6;
    uint32 rtb_UnitDelay_gx_tmp_0;
    TeESSR_e_EngStartStopSt rtb_TmpSignalConversionAtVeESSR_e_EngSta;
    TeESSR_e_EngStrtStpMd rtb_TmpSignalConversionAtVeESSR_e_EngStr;
    TeGENR_e_APM_FailureModeStatus tmpRead_3;
    TeGENR_e_APM_FailureModeStatus tmpRead_4;
    TeGENR_e_APM_FailureType tmpRead_5;
    TeGENR_e_APM_OperMode rtb_TmpSignalConversionAtVeIDCR_e_stMode;
    TeGENR_e_APM_OperMode rtb_VeGENR_e_ModeReq_New_SF;
    TeGENR_e_DeratingModeStatus tmpRead_a;
    TeINVR_e_MtrInvrtrSt tmpRead_7;
    TeOBCR_e_ChargingSystemSts rtb_TmpSignalConversionAtVeOBCR_e_Chargi;
    TeODCR_e_IO_CntrlSt tmpRead_8;
    TePMDR_e_PowerMode rtb_TmpSignalConversionAtVePMDR_e_PMM_Po;
    TeSTRR_e_HybStrtrSt tmpRead_0;
    sint8 rtPrevAction;
    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Status;
    uint8 tmpRead_9;
    boolean rtb_AND_ag;
    boolean rtb_AND_ba;
    boolean rtb_AND_fp;
    boolean rtb_AND_goz;
    boolean rtb_AND_iv;
    boolean rtb_AND_n;
    boolean rtb_AND_nz;
    boolean rtb_AND_pu;
    boolean rtb_Comparison;
    boolean rtb_Comparison2;
    boolean rtb_Logical1_hj;
    boolean rtb_Logical2_dg;
    boolean rtb_Logical5_lj;
    boolean rtb_LogicalOperator_ml;
    boolean rtb_NotEqual_b;
    boolean rtb_P1fVoltCtrlEnbl;
    boolean rtb_TmpSignalConversionAtVeHPMR_b_PropSy;
    boolean rtb_TmpSignalConversionAtVeIDCR_b_IBS_Ba;
    boolean rtb_TmpSignalConversionAtVeINVR_b_P1_CAN;
    boolean rtb_TmpSignalConversionAtVeSRAR_b_Invrtr;
    boolean rtb_TmpSignalConversionAtVeSSDR_b_HVBatP;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' incorporates:
     *  SubSystem: '<Root>/GENR_MedTEF'
     */
    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommSGCM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommSGCM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommSGCM_Value
        (&GENR_ac_DW.StatusByte_LostCommSGCM);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_InvData_SGCM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_SGCM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_SGCM_Value
        (&GENR_ac_DW.StatusByte_InvData_SGCM);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CommBus_B_Off' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CommBus_B_Off'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CommBus_B_Off_Value
        (&GENR_ac_DW.StatusByte_CommBus_B_Off);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_HiSpdCANCommBus' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HiSpdCANCommBus'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HiSpdCANCommBus_Value
        (&GENR_ac_DW.StatusByte_HiSpdCANCommBus);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostComm_IDCM_CANC11' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostComm_IDCM_CANC11'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostComm_IDCM_CANC11_Value
        (&GENR_ac_DW.StatusByte_LostComm_IDCM_CANC11);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommIDCM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommIDCM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommIDCM_Value
        (&GENR_ac_DW.StatusByte_LostCommIDCM);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommDCDC' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommDCDC'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommDCDC_Value
        (&GENR_ac_DW.StatusByte_LostCommDCDC);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommBCM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommBCM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommBCM_Value
        (&GENR_ac_DW.StatusByte_LostCommBCM);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LosCommBECM_A' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LosCommBECM_A'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LosCommBECM_A_Value
        (&GENR_ac_DW.StatusByte_LosCommBECM_A);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_InvData_IDCM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_IDCM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_IDCM_Value
        (&GENR_ac_DW.StatusByte_InvData_IDCM);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_InvData_IDCM_CANC11' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_IDCM_CANC11'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_IDCM_CANC11_Value
        (&GENR_ac_DW.StatusByte_InvData_IDCM_CANC11);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_InvData_APM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_APM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_APM_Value
        (&GENR_ac_DW.StatusByte_InvData_APM);

    /* SignalConversion generated from: '<S1>/VeIDCR_b_IBS_BattSOC_FA' incorporates:
     *  Inport: '<Root>/VeIDCR_b_IBS_BattSOC_FA'
     */
    (void)Rte_Read_VeIDCR_b_IBS_BattSOC_FA_Value
        (&rtb_TmpSignalConversionAtVeIDCR_b_IBS_Ba);

    /* SignalConversion generated from: '<S1>/VeIDCR_U_APM_HV_Voltage' incorporates:
     *  Inport: '<Root>/VeIDCR_U_APM_HV_Voltage'
     */
    (void)Rte_Read_VeIDCR_U_APM_HV_Voltage_Value
        (&rtb_TmpSignalConversionAtVeIDCR_U_APM_HV);

    /* SignalConversion generated from: '<S1>/VeIDCR_U_APM_LV_Voltage' incorporates:
     *  Inport: '<Root>/VeIDCR_U_APM_LV_Voltage'
     */
    (void)Rte_Read_VeIDCR_U_APM_LV_Voltage_Value
        (&rtb_TmpSignalConversionAtVeIDCR_U_APM_LV);

    /* SignalConversion generated from: '<S1>/VeIDCR_I_APM_LV_Current' incorporates:
     *  Inport: '<Root>/VeIDCR_I_APM_LV_Current'
     */
    (void)Rte_Read_VeIDCR_I_APM_LV_Current_Value
        (&rtb_TmpSignalConversionAtVeIDCR_I_APM_LV);

    /* SignalConversion generated from: '<S1>/VeIDCR_e_stModeRqAPM' incorporates:
     *  Inport: '<Root>/VeIDCR_e_stModeRqAPM'
     */
    (void)Rte_Read_VeIDCR_e_stModeRqAPM_Value
        (&rtb_TmpSignalConversionAtVeIDCR_e_stMode);

    /* SignalConversion generated from: '<S1>/VeHPMR_b_PropSysActv' incorporates:
     *  Inport: '<Root>/VeHPMR_b_PropSysActv'
     */
    (void)Rte_Read_VeHPMR_b_PropSysActv_Value
        (&rtb_TmpSignalConversionAtVeHPMR_b_PropSy);

    /* SignalConversion generated from: '<S1>/VePMDR_e_PMM_PowerMode' incorporates:
     *  Inport: '<Root>/VePMDR_e_PMM_PowerMode'
     */
    (void)Rte_Read_VePMDR_e_PMM_PowerMode_Value
        (&rtb_TmpSignalConversionAtVePMDR_e_PMM_Po);

    /* SignalConversion generated from: '<S1>/VeESMR_P_BattLTMaxLim' incorporates:
     *  Inport: '<Root>/VeESMR_P_BattLTMaxLim'
     */
    (void)Rte_Read_VeESMR_P_BattLTMaxLim_Value
        (&rtb_TmpSignalConversionAtVeESMR_P_BattLT);

    /* SignalConversion generated from: '<S1>/VeSSDR_b_HVBatPerWU12VChrg' incorporates:
     *  Inport: '<Root>/VeSSDR_b_HVBatPerWU12VChrg'
     */
    (void)Rte_Read_VeSSDR_b_HVBatPerWU12VChrg_Value
        (&rtb_TmpSignalConversionAtVeSSDR_b_HVBatP);

    /* SignalConversion generated from: '<S1>/VeOBCR_e_ChargingSystemSts' incorporates:
     *  Inport: '<Root>/VeOBCR_e_ChargingSystemSts'
     */
    (void)Rte_Read_VeOBCR_e_ChargingSystemSts_Value
        (&rtb_TmpSignalConversionAtVeOBCR_e_Chargi);

    /* SignalConversion generated from: '<S1>/VeIDCR_T_IBS_BattTemp' incorporates:
     *  Inport: '<Root>/VeIDCR_T_IBS_BattTemp'
     */
    (void)Rte_Read_VeIDCR_T_IBS_BattTemp_Value
        (&rtb_TmpSignalConversionAtVeIDCR_T_IBS_Ba);

    /* SignalConversion generated from: '<S1>/VeIDCR_U_IBS_BattVolt' incorporates:
     *  Inport: '<Root>/VeIDCR_U_IBS_BattVolt'
     */
    (void)Rte_Read_VeIDCR_U_IBS_BattVolt_Value((&(VeGENR_U_12VBattVolt)));

    /* SignalConversion generated from: '<S1>/VeESSR_e_EngStartStopSt' incorporates:
     *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
     */
    (void)Rte_Read_VeESSR_e_EngStartStopSt_Value
        (&rtb_TmpSignalConversionAtVeESSR_e_EngSta);

    /* SignalConversion generated from: '<S1>/VeESSR_e_EngStrtStpMd' incorporates:
     *  Inport: '<Root>/VeESSR_e_EngStrtStpMd'
     */
    (void)Rte_Read_VeESSR_e_EngStrtStpMd_Value
        (&rtb_TmpSignalConversionAtVeESSR_e_EngStr);

    /* SignalConversion generated from: '<S1>/VePMDR_U_BF1_SysVolt' incorporates:
     *  Inport: '<Root>/VePMDR_U_BF1_SysVolt'
     */
    (void)Rte_Read_VePMDR_U_BF1_SysVolt_Value
        (&rtb_TmpSignalConversionAtVePMDR_U_BF1_Sy);

    /* SignalConversion generated from: '<S1>/VeIDCR_P_APM_OutputPwr' incorporates:
     *  Inport: '<Root>/VeIDCR_P_APM_OutputPwr'
     */
    (void)Rte_Read_VeIDCR_P_APM_OutputPwr_Value
        (&rtb_TmpSignalConversionAtVeIDCR_P_APM_Ou);

    /* SignalConversion generated from: '<S1>/VeIDCR_P_APM_DeratePwr' incorporates:
     *  Inport: '<Root>/VeIDCR_P_APM_DeratePwr'
     */
    (void)Rte_Read_VeIDCR_P_APM_DeratePwr_Value
        (&rtb_TmpSignalConversionAtVeIDCR_P_APM_De);

    /* SignalConversion generated from: '<S1>/VeINVR_b_P1_CAN_COM_Error' incorporates:
     *  Inport: '<Root>/VeINVR_b_P1_CAN_COM_Error'
     */
    (void)Rte_Read_VeINVR_b_P1_CAN_COM_Error_Value
        (&rtb_TmpSignalConversionAtVeINVR_b_P1_CAN);

    /* SignalConversion generated from: '<S1>/VeIDCR_I_IBS_I_Converted' incorporates:
     *  Inport: '<Root>/VeIDCR_I_IBS_I_Converted'
     */
    (void)Rte_Read_VeIDCR_I_IBS_I_Converted_Value
        (&rtb_TmpSignalConversionAtVeIDCR_I_IBS_I_);

    /* SignalConversion generated from: '<S1>/VeFSCR_Pct_RadFanCmd' incorporates:
     *  Inport: '<Root>/VeFSCR_Pct_RadFanCmd'
     */
    (void)Rte_Read_VeFSCR_Pct_RadFanCmd_Value
        (&rtb_TmpSignalConversionAtVeFSCR_Pct_RadF);

    /* SignalConversion generated from: '<S1>/VeTAIR_Pct_FrtBlwrCmd' incorporates:
     *  Inport: '<Root>/VeTAIR_Pct_FrtBlwrCmd'
     */
    (void)Rte_Read_VeTAIR_Pct_FrtBlwrCmd_Value
        (&rtb_TmpSignalConversionAtVeTAIR_Pct_FrtB);

    /* SignalConversion generated from: '<S1>/VePMDR_U_BF2_SysVolt' incorporates:
     *  Inport: '<Root>/VePMDR_U_BF2_SysVolt'
     */
    (void)Rte_Read_VePMDR_U_BF2_SysVolt_Value
        (&rtb_TmpSignalConversionAtVePMDR_U_BF2_Sy);

    /* SignalConversion generated from: '<S1>/VeSRAR_b_InvrtrShortCntcrWeld' */
#if Rte_SysCon_Variant_GENR_1

    /* SignalConversion generated from: '<S1>/VeSRAR_b_InvrtrShortCntcrWeld' incorporates:
     *  Inport: '<Root>/VeSRAR_b_InvrtrShortCntcrWeld'
     */
    (void)Rte_Read_VeSRAR_b_InvrtrShortCntcrWeld_Value
        (&rtb_TmpSignalConversionAtVeSRAR_b_Invrtr);

#endif

    /* End of SignalConversion generated from: '<S1>/VeSRAR_b_InvrtrShortCntcrWeld' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' */

    /* Inport: '<Root>/VeIDCR_U_EVRDesVSetP' */
    (void)Rte_Read_VeIDCR_U_EVRDesVSetP_Value(&Switch12);

    /* Inport: '<Root>/VeIDCR_T_IBS2_Temp' */
    (void)Rte_Read_VeIDCR_T_IBS2_Temp_Value((&(VeGENR_T_IBS2_Temp)));

    /* Inport: '<Root>/VePLTR_b_InFieldMode' */
    (void)Rte_Read_VePLTR_b_InFieldMode_Value((&(VeGENR_b_InFieldMode)));

    /* Inport: '<Root>/VePLTR_e_ShippingMode' */
    (void)Rte_Read_VePLTR_e_ShippingMode_Value((&(VeGENR_e_ShippingMode)));

    /* Inport: '<Root>/VeHPMR_e_APM_OperMode' */
    (void)Rte_Read_VeHPMR_e_APM_OperMode_Value((&(VeGENR_e_OperMode_HPMR)));

    /* Inport: '<Root>/VePMDR_b_SysVoltHighFA' */
    (void)Rte_Read_VePMDR_b_SysVoltHighFA_Value((&(VeGENR_b_SysVoltHighFA)));

    /* Inport: '<Root>/VeBPCR_Pct_HV_BatPackSOC_Arb' */
    (void)Rte_Read_VeBPCR_Pct_HV_BatPackSOC_Arb_Value((&(VeGENR_Pct_HVBatPackSOC)));

    /* Inport: '<Root>/VeBPCR_e_HV_BatCntctrStat' */
    (void)Rte_Read_VeBPCR_e_HV_BatCntctrStat_Value((&(VeGENR_e_HV_BatCntctrStat)));

    /* Inport: '<Root>/VeHPMR_b_BattCntctrOpenPndg' */
    (void)Rte_Read_VeHPMR_b_BattCntctrOpenPndg_Value
        ((&(VeGENR_b_BattCntctrOpenPndg)));

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' incorporates:
     *  SubSystem: '<Root>/GENR_MedTEF'
     */
    /* SignalConversion generated from: '<S1>/VeHVTR_I_StringCurrent_Arb' incorporates:
     *  Inport: '<Root>/VeHVTR_I_StringCurrent_Arb'
     */
    (void)Rte_Read_VeHVTR_I_StringCurrent_Arb_Value
        (&rtb_TmpSignalConversionAtVeHVTR_I_String);

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_LostComm_IDCM_ePT2' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostComm_IDCM_ePT2'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostComm_IDCM_ePT2_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Status);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/InputProcessing'
     */
    /* Switch: '<S6>/Switch' incorporates:
     *  Constant: '<S576>/Calib'
     */
    if (KeGENR_b_OvrdBatCntcrOprn)
    {
        /* Switch: '<S6>/Switch' incorporates:
         *  Constant: '<S577>/Calib'
         *  Inport: '<Root>/VeHPMR_b_BattCntctrOpenPndg'
         */
        VeGENR_b_BattCntctrOpenPndg = KeGENR_b_OvrdBatCntcrOprnVal;
    }

    /* End of Switch: '<S6>/Switch' */

    /* Switch: '<S6>/Switch1' incorporates:
     *  Constant: '<S579>/Calib'
     */
    if (KeGENR_b_OvrdHV_BatCntctrStat)
    {
        /* Switch: '<S6>/Switch1' incorporates:
         *  Constant: '<S585>/Calib'
         *  Inport: '<Root>/VeBPCR_e_HV_BatCntctrStat'
         */
        VeGENR_e_HV_BatCntctrStat = KeGENR_e_OvrdHV_BatCntctrStatVal;
    }

    /* End of Switch: '<S6>/Switch1' */

    /* Switch: '<S6>/Switch9' incorporates:
     *  Constant: '<S578>/Calib'
     */
    if (KeGENR_b_OvrdHVBatSOC)
    {
        /* Switch: '<S6>/Switch9' incorporates:
         *  Constant: '<S563>/Calib'
         *  Inport: '<Root>/VeBPCR_Pct_HV_BatPackSOC_Arb'
         */
        VeGENR_Pct_HVBatPackSOC = KeGENR_Pct_OvrdValHVBatSOC;
    }

    /* End of Switch: '<S6>/Switch9' */

    /* Switch: '<S6>/Switch2' incorporates:
     *  Constant: '<S581>/Calib'
     */
    if (KeGENR_b_SysVoltHighFAOvrd)
    {
        /* Switch: '<S6>/Switch2' incorporates:
         *  Constant: '<S582>/Calib'
         *  Inport: '<Root>/VePMDR_b_SysVoltHighFA'
         */
        VeGENR_b_SysVoltHighFA = KeGENR_b_SysVoltHighFAOvrdVal;
    }

    /* End of Switch: '<S6>/Switch2' */

    /* Switch: '<S6>/Switch3' incorporates:
     *  Constant: '<S566>/Calib'
     */
    if (KeGENR_b_APM_OperMode_Ovrd)
    {
        /* Switch: '<S6>/Switch3' incorporates:
         *  Constant: '<S583>/Calib'
         *  Inport: '<Root>/VeHPMR_e_APM_OperMode'
         */
        VeGENR_e_OperMode_HPMR = KeGENR_e_APM_OperMode_Val;
    }

    /* End of Switch: '<S6>/Switch3' */

    /* Switch: '<S6>/Switch4' incorporates:
     *  Constant: '<S580>/Calib'
     */
    if (KeGENR_b_ShippingMode)
    {
        /* Switch: '<S6>/Switch4' incorporates:
         *  Constant: '<S586>/Calib'
         *  Inport: '<Root>/VePLTR_e_ShippingMode'
         */
        VeGENR_e_ShippingMode = KeGENR_e_ShippingMode;
    }

    /* End of Switch: '<S6>/Switch4' */

    /* Switch: '<S6>/Switch5' incorporates:
     *  Constant: '<S574>/Calib'
     */
    if (KeGENR_b_InFieldMode_Ovrd)
    {
        /* Switch: '<S6>/Switch5' incorporates:
         *  Constant: '<S575>/Calib'
         *  Inport: '<Root>/VePLTR_b_InFieldMode'
         */
        VeGENR_b_InFieldMode = KeGENR_b_InFieldMode_Val;
    }

    /* End of Switch: '<S6>/Switch5' */

    /* Switch: '<S6>/Switch8' incorporates:
     *  Constant: '<S568>/Calib'
     */
    if (KeGENR_b_IBS2_Temp_Ovrd)
    {
        /* Switch: '<S6>/Switch8' incorporates:
         *  Constant: '<S564>/Calib'
         *  Inport: '<Root>/VeIDCR_T_IBS2_Temp'
         */
        VeGENR_T_IBS2_Temp = KeGENR_T_IBS2_Temp_Val;
    }

    /* End of Switch: '<S6>/Switch8' */

    /* Switch: '<S6>/Switch12' incorporates:
     *  Constant: '<S567>/Calib'
     */
    if (KeGENR_b_EVRDesVSetP_Ovrd)
    {
        /* Switch: '<S6>/Switch12' incorporates:
         *  Constant: '<S565>/Calib'
         */
        Switch12 = KeGENR_U_EVRDesVSetP_Val;
    }

    /* End of Switch: '<S6>/Switch12' */

    /* Outputs for Atomic SubSystem: '<S6>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S590>/EdgeRising' */
    /* Logic: '<S591>/AND' incorporates:
     *  Logic: '<S591>/OR1'
     *  UnitDelay: '<S591>/Unit Delay'
     */
    rtb_AND_ag = (rtb_TmpSignalConversionAtVeIDCR_b_IBS_Ba &&
                  (!GENR_ac_DW.UnitDelay_DSTATE_ka));

    /* Update for UnitDelay: '<S591>/Unit Delay' */
    GENR_ac_DW.UnitDelay_DSTATE_ka = rtb_TmpSignalConversionAtVeIDCR_b_IBS_Ba;

    /* End of Outputs for SubSystem: '<S590>/EdgeRising' */

    /* Switch: '<S590>/Switch1' incorporates:
     *  Constant: '<S587>/Calib'
     *  Constant: '<S590>/Constant Value1'
     *  Logic: '<S590>/OR'
     *  Logic: '<S590>/OR1'
     *  MinMax: '<S590>/Minimum'
     *  Sum: '<S590>/Summation'
     *  UnitDelay: '<S590>/Unit Delay'
     */
    if ((!rtb_TmpSignalConversionAtVeIDCR_b_IBS_Ba) || rtb_AND_ag)
    {
        GENR_ac_DW.UnitDelay_DSTATE_at = 0.0F;
    }
    else
    {
        GENR_ac_DW.UnitDelay_DSTATE_at = fminf(KeGENR_t_Dbnc_IBSOC,
            GENR_ac_DW.UnitDelay_DSTATE_at + 0.05F);
    }

    /* End of Switch: '<S590>/Switch1' */
    /* End of Outputs for SubSystem: '<S6>/Turn On Delay Time' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' */

    /* Inport: '<Root>/VeIDCR_y_APMSts' */
    (void)Rte_Read_VeIDCR_y_APMSts_Value(&tmpRead_9);

    /* Inport: '<Root>/VeIDCR_e_DVC_APMSts' */
    (void)Rte_Read_VeIDCR_e_DVC_APMSts_Value(&tmpRead_8);

    /* Inport: '<Root>/VeIDCR_b_IBS_BattTemp_SgnlRcvd' */
    (void)Rte_Read_VeIDCR_b_IBS_BattTemp_SgnlRcvd_Value
        ((&(VeGENR_b_IBS_BattTemp_SgnlRcvd)));

    /* Inport: '<Root>/VeIDCR_e_IBS_BattTempFailSts' */
    (void)Rte_Read_VeIDCR_e_IBS_BattTempFailSts_Value
        ((&(VeGENR_e_IBS_BattTempFailSts)));

    /* Inport: '<Root>/VeIDCR_b_IBS_BattTemp_FA' */
    (void)Rte_Read_VeIDCR_b_IBS_BattTemp_FA_Value((&(VeGENR_b_IBS_BattTemp_FA)));

    /* Inport: '<Root>/VeIDCR_Pct_IBS_BattSOC' */
    (void)Rte_Read_VeIDCR_Pct_IBS_BattSOC_Value((&(VeGENR_Pct_IBSSOC)));

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' incorporates:
     *  SubSystem: '<Root>/GENR_MedTEF'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/InputProcessing'
     */
    /* Outputs for Atomic SubSystem: '<S6>/Turn On Delay Time' */
    /* Switch: '<S6>/Switch14' incorporates:
     *  Constant: '<S587>/Calib'
     *  Logic: '<S590>/AND'
     *  RelationalOperator: '<S590>/Greater  Than'
     *  UnitDelay: '<S590>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeIDCR_b_IBS_Ba &&
            (GENR_ac_DW.UnitDelay_DSTATE_at >= KeGENR_t_Dbnc_IBSOC))
    {
        /* Switch: '<S6>/Switch14' incorporates:
         *  Constant: '<S562>/Calib'
         *  Inport: '<Root>/VeIDCR_Pct_IBS_BattSOC'
         */
        VeGENR_Pct_IBSSOC = KeGENR_Pct_Dflt_IBS_BattSOC;
    }

    /* End of Switch: '<S6>/Switch14' */
    /* End of Outputs for SubSystem: '<S6>/Turn On Delay Time' */

    /* Switch: '<S6>/Switch10' incorporates:
     *  Constant: '<S569>/Calib'
     */
    if (KeGENR_b_IBS_BattTemp_FA_Ovrd)
    {
        /* Switch: '<S6>/Switch10' incorporates:
         *  Constant: '<S570>/Calib'
         *  Inport: '<Root>/VeIDCR_b_IBS_BattTemp_FA'
         */
        VeGENR_b_IBS_BattTemp_FA = KeGENR_b_IBS_BattTemp_FA_Val;
    }

    /* End of Switch: '<S6>/Switch10' */

    /* Switch: '<S6>/Switch11' incorporates:
     *  Constant: '<S571>/Calib'
     */
    if (KeGENR_b_IBS_BattTemp_FailureSts_Ovrd)
    {
        /* Switch: '<S6>/Switch11' incorporates:
         *  Constant: '<S584>/Calib'
         *  Inport: '<Root>/VeIDCR_e_IBS_BattTempFailSts'
         */
        VeGENR_e_IBS_BattTempFailSts = KeGENR_e_IBS_BattTemp_FailureSts_Val;
    }

    /* End of Switch: '<S6>/Switch11' */

    /* Switch: '<S6>/Switch13' incorporates:
     *  Constant: '<S572>/Calib'
     */
    if (KeGENR_b_IBS_BattTemp_Sgnl_Rcvd_Ovrd)
    {
        /* Switch: '<S6>/Switch13' incorporates:
         *  Constant: '<S573>/Calib'
         *  Inport: '<Root>/VeIDCR_b_IBS_BattTemp_SgnlRcvd'
         */
        VeGENR_b_IBS_BattTemp_SgnlRcvd = KeGENR_b_IBS_BattTemp_Sgnl_Rcvd_Val;
    }

    /* End of Switch: '<S6>/Switch13' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/GENC_CntrlAPM'
     */
    /* RelationalOperator: '<S282>/Comparison1' incorporates:
     *  Constant: '<S338>/Calib'
     *  Inport: '<Root>/VeIDCR_e_DVC_APMSts'
     */
    VeGENR_b_Eol_ActiveTestSig2 = (tmpRead_8 == KeGENR_e_DVC_APMStsOut);

    /* RelationalOperator: '<S282>/Comparison4' incorporates:
     *  Constant: '<S339>/Calib'
     */
    VeGENR_b_Eol_Active = (((float32)tmpRead_9) == KeGENR_k_APMStsOut);

    /* Switch: '<S282>/Switch' */
    VeGENR_b_Eol_ActiveTestSig1 = ((VeGENR_b_Eol_Active) &&
        (VeGENR_b_Eol_ActiveTestSig2));

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' */

    /* Inport: '<Root>/VeSRAR_b_OpnBattCntctr' */
    (void)Rte_Read_VeSRAR_b_OpnBattCntctr_Value(&rtb_Comparison2);

    /* Inport: '<Root>/VeBPCR_b_HVBatCntrWeld_ImpdOpn' */
    (void)Rte_Read_VeBPCR_b_HVBatCntrWeld_ImpdOpn_Value(&rtb_NotEqual_b);

    /* Inport: '<Root>/VeIDCR_I_APM_HV_Current' */
    (void)Rte_Read_VeIDCR_I_APM_HV_Current_Value(&tmpRead_1);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' incorporates:
     *  SubSystem: '<Root>/GENR_MedTEF'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/GENC_CntrlAPM'
     */
    /* Logic: '<S283>/Logical9' incorporates:
     *  Constant: '<S340>/Constant'
     *  Logic: '<S283>/Logical1'
     *  Logic: '<S283>/Logical2'
     *  Logic: '<S283>/Logical3'
     *  RelationalOperator: '<S283>/Not Equal'
     */
    VeGENR_b_HVBattCntctrCheck = ((((!VeGENR_b_BattCntctrOpenPndg) && (((uint32)
        VeGENR_e_HV_BatCntctrStat) == CeHVTR_e_Closed)) && (!rtb_NotEqual_b)) &&
        (!rtb_Comparison2));

    /* Outputs for Atomic SubSystem: '<S278>/Digital Lowpass Reset Enabled' */
    /* Switch: '<S290>/Switch1' incorporates:
     *  Constant: '<S301>/Calib'
     *  Product: '<S290>/Multiplication'
     *  Sum: '<S290>/Subtraction'
     *  Sum: '<S290>/Summation'
     *  UnitDelay: '<S290>/Unit Delay'
     */
    GENR_ac_DW.UnitDelay_DSTATE_a4 += (tmpRead_1 -
        GENR_ac_DW.UnitDelay_DSTATE_a4) * KeGENR_k_APMOvrCurr_Coef;

    /* End of Outputs for SubSystem: '<S278>/Digital Lowpass Reset Enabled' */

    /* RelationalOperator: '<S278>/Comparison2' incorporates:
     *  Constant: '<S297>/Calib'
     *  UnitDelay: '<S290>/Unit Delay'
     */
    rtb_Comparison2 = (GENR_ac_DW.UnitDelay_DSTATE_a4 >
                       KeGENR_I_LowBattLVEnblAPMOvrCurr);

    /* Outputs for Atomic SubSystem: '<S278>/EdgeBi2' */
    /* RelationalOperator: '<S292>/Not Equal' incorporates:
     *  UnitDelay: '<S292>/Unit Delay'
     */
    rtb_NotEqual_b = (rtb_Comparison2 != GENR_ac_DW.UnitDelay_DSTATE_bf);

    /* Update for UnitDelay: '<S292>/Unit Delay' */
    GENR_ac_DW.UnitDelay_DSTATE_bf = rtb_Comparison2;

    /* End of Outputs for SubSystem: '<S278>/EdgeBi2' */

    /* Outputs for Atomic SubSystem: '<S278>/Stop Watch Reset Enabled1' */
    /* Switch: '<S305>/Switch1' incorporates:
     *  Constant: '<S305>/Constant Value2'
     *  Switch: '<S305>/Switch2'
     *  UnitDelay: '<S305>/Unit Delay'
     */
    if (rtb_NotEqual_b)
    {
        GENR_ac_DW.UnitDelay_DSTATE_l = 0.0F;
    }
    else
    {
        if (rtb_Comparison2)
        {
            /* UnitDelay: '<S305>/Unit Delay' incorporates:
             *  Sum: '<S305>/Subtraction'
             *  Switch: '<S305>/Switch2'
             */
            GENR_ac_DW.UnitDelay_DSTATE_l += 0.05F;
        }
    }

    /* End of Switch: '<S305>/Switch1' */
    /* End of Outputs for SubSystem: '<S278>/Stop Watch Reset Enabled1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' */

    /* Inport: '<Root>/VeBPCR_b_BPCM_UVActv' */
    (void)Rte_Read_VeBPCR_b_BPCM_UVActv_Value(&rtb_Logical2_dg);

    /* Inport: '<Root>/VeBPCR_U_HV_BatVolt' */
    (void)Rte_Read_VeBPCR_U_HV_BatVolt_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' incorporates:
     *  SubSystem: '<Root>/GENR_MedTEF'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/GENC_CntrlAPM'
     */
    /* Logic: '<S278>/Logical11' incorporates:
     *  Constant: '<S296>/Constant'
     *  Constant: '<S300>/Calib'
     *  RelationalOperator: '<S278>/Comparison4'
     */
    rtb_NotEqual_b = ((KeGENR_b_LowBattLVRUN) && (CePMDR_e_PowerMode_Run ==
                       ((uint32)rtb_TmpSignalConversionAtVePMDR_e_PMM_Po)));

    /* Outputs for Atomic SubSystem: '<S278>/EdgeRising' */
    /* Logic: '<S293>/AND' incorporates:
     *  Logic: '<S293>/OR1'
     *  UnitDelay: '<S293>/Unit Delay'
     */
    rtb_Comparison2 = (rtb_NotEqual_b && (!GENR_ac_DW.UnitDelay_DSTATE_ng));

    /* Update for UnitDelay: '<S293>/Unit Delay' */
    GENR_ac_DW.UnitDelay_DSTATE_ng = rtb_NotEqual_b;

    /* End of Outputs for SubSystem: '<S278>/EdgeRising' */

    /* Logic: '<S278>/Logical12' incorporates:
     *  Constant: '<S295>/Constant'
     *  Constant: '<S299>/Calib'
     *  RelationalOperator: '<S278>/Comparison3'
     */
    rtb_NotEqual_b = ((((uint32)rtb_TmpSignalConversionAtVePMDR_e_PMM_Po) ==
                       CePMDR_e_PowerMode_Acc) && (KeGENR_b_LowBattLVACC));

    /* Outputs for Atomic SubSystem: '<S278>/EdgeRising1' */
    /* Logic: '<S294>/AND' incorporates:
     *  Logic: '<S294>/OR1'
     *  UnitDelay: '<S294>/Unit Delay'
     */
    rtb_AND_ag = (rtb_NotEqual_b && (!GENR_ac_DW.UnitDelay_DSTATE_pmh));

    /* Update for UnitDelay: '<S294>/Unit Delay' */
    GENR_ac_DW.UnitDelay_DSTATE_pmh = rtb_NotEqual_b;

    /* End of Outputs for SubSystem: '<S278>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S278>/Signal Latch On With Reset3' */
    /* Logic: '<S304>/OR1' incorporates:
     *  Constant: '<S303>/Calib'
     *  Logic: '<S278>/Logical6'
     *  Logic: '<S304>/NOT'
     *  Logic: '<S304>/OR'
     *  RelationalOperator: '<S278>/Comparison1'
     *  UnitDelay: '<S304>/Unit Delay'
     *  UnitDelay: '<S305>/Unit Delay'
     */
    GENR_ac_DW.UnitDelay_DSTATE_fi = ((GENR_ac_DW.UnitDelay_DSTATE_l >
        KeGENR_t_LowBattLVEnblOvrCurrTime) || (((!rtb_Comparison2) &&
        (!rtb_AND_ag)) && (GENR_ac_DW.UnitDelay_DSTATE_fi)));

    /* End of Outputs for SubSystem: '<S278>/Signal Latch On With Reset3' */

    /* Outputs for Atomic SubSystem: '<S278>/Digital Lowpass Reset Enabled1' */
    /* Switch: '<S291>/Switch1' incorporates:
     *  Constant: '<S302>/Calib'
     *  Product: '<S291>/Multiplication'
     *  Sum: '<S291>/Subtraction'
     *  Sum: '<S291>/Summation'
     *  UnitDelay: '<S291>/Unit Delay'
     */
    GENR_ac_DW.UnitDelay_DSTATE_pl += (tmpRead - GENR_ac_DW.UnitDelay_DSTATE_pl)
        * KeGENR_k_HighVoltCoef;

    /* End of Outputs for SubSystem: '<S278>/Digital Lowpass Reset Enabled1' */

    /* Logic: '<S278>/Logical10' incorporates:
     *  Constant: '<S298>/Calib'
     *  Logic: '<S278>/Logical5'
     *  Logic: '<S278>/OR1'
     *  RelationalOperator: '<S278>/Less  Than2'
     *  UnitDelay: '<S291>/Unit Delay'
     */
    VeGENR_b_CurrVoltCheck = ((!GENR_ac_DW.UnitDelay_DSTATE_fi) ||
        (rtb_TmpSignalConversionAtVeHPMR_b_PropSy &&
         (GENR_ac_DW.UnitDelay_DSTATE_pl > KeGENR_U_BatPackVoltMin)));

    /* RelationalOperator: '<S286>/Comparison10' incorporates:
     *  Constant: '<S344>/Calib'
     */
    rtb_Comparison2 = (rtb_TmpSignalConversionAtVeESMR_P_BattLT >=
                       KeGENR_P_MinBattPwr_ShtDwn);

    /* Outputs for Atomic SubSystem: '<S286>/Turn Off Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S345>/EdgeFalling1' */
    /* Logic: '<S346>/AND' incorporates:
     *  Logic: '<S346>/OR1'
     *  UnitDelay: '<S346>/Unit Delay'
     */
    rtb_NotEqual_b = ((!rtb_Comparison2) && (GENR_ac_DW.UnitDelay_DSTATE_n0d));

    /* Update for UnitDelay: '<S346>/Unit Delay' */
    GENR_ac_DW.UnitDelay_DSTATE_n0d = rtb_Comparison2;

    /* End of Outputs for SubSystem: '<S345>/EdgeFalling1' */

    /* Switch: '<S345>/Switch' incorporates:
     *  Constant: '<S343>/Calib'
     *  Sum: '<S345>/Summation'
     *  UnitDelay: '<S345>/Unit Delay'
     */
    if (rtb_NotEqual_b)
    {
        GENR_ac_DW.UnitDelay_DSTATE_c0 = KeGENR_Cnt_PwrLimDbnc;
    }
    else
    {
        /* Sum: '<S345>/Summation' incorporates:
         *  Constant: '<S345>/Constant Value'
         *  UnitDelay: '<S345>/Unit Delay'
         */
        rtb_UnitDelay_gx_tmp = ((sint32)GENR_ac_DW.UnitDelay_DSTATE_c0) - 1;
        if ((((sint32)GENR_ac_DW.UnitDelay_DSTATE_c0) - 1) < 0)
        {
            rtb_UnitDelay_gx_tmp = 0;
        }

        GENR_ac_DW.UnitDelay_DSTATE_c0 = (uint16)rtb_UnitDelay_gx_tmp;
    }

    /* End of Switch: '<S345>/Switch' */
    /* End of Outputs for SubSystem: '<S286>/Turn Off Delay Sample' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' */

    /* Inport: '<Root>/VeBPCR_b_BPCM_OVActv' */
    (void)Rte_Read_VeBPCR_b_BPCM_OVActv_Value(&rtb_AND_fp);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' incorporates:
     *  SubSystem: '<Root>/GENR_MedTEF'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/GENC_CntrlAPM'
     */
    /* Outputs for Atomic SubSystem: '<S286>/Turn Off Delay Sample' */
    /* Logic: '<S345>/AND' incorporates:
     *  Constant: '<S345>/Constant Value2'
     *  RelationalOperator: '<S345>/Greater  Than'
     *  UnitDelay: '<S345>/Unit Delay'
     */
    VeGENR_b_PowerLimitCond = (rtb_Comparison2 || (((sint32)
        GENR_ac_DW.UnitDelay_DSTATE_c0) > 0));

    /* End of Outputs for SubSystem: '<S286>/Turn Off Delay Sample' */

    /* Logic: '<S286>/Logical14' incorporates:
     *  Constant: '<S342>/Constant'
     *  Logic: '<S286>/Logical7'
     *  Logic: '<S286>/Logical8'
     *  RelationalOperator: '<S286>/Comparison11'
     */
    VeGENR_b_OVUVPwrLimCheck = ((!rtb_Logical2_dg) && (((VeGENR_b_PowerLimitCond)
        || (CeOBCR_e_ChargingSts_Charging == ((uint32)
        rtb_TmpSignalConversionAtVeOBCR_e_Chargi))) || rtb_AND_fp));

    /* RelationalOperator: '<S280>/Comparison2' incorporates:
     *  Constant: '<S311>/Calib'
     */
    VeGENR_b_TestSignal6 = (rtb_TmpSignalConversionAtVeESMR_P_BattLT <
                            KeGENR_P_MinBattPwr_APMShutDwn);

    /* RelationalOperator: '<S280>/Comparison4' incorporates:
     *  Constant: '<S308>/Constant'
     */
    VeGENR_b_TestSignal2 = (((uint32)rtb_TmpSignalConversionAtVeESSR_e_EngSta)
                            != CeESSR_e_EngRunning);

    /* RelationalOperator: '<S280>/Comparison1' incorporates:
     *  Constant: '<S309>/Constant'
     */
    VeGENR_b_TestSignal1 = (((uint32)rtb_TmpSignalConversionAtVeOBCR_e_Chargi)
                            != CeOBCR_e_ChargingSts_Charging);

    /* Logic: '<S280>/Logical2' */
    rtb_Logical2_dg = (((VeGENR_b_TestSignal6) && (VeGENR_b_TestSignal2)) &&
                       (VeGENR_b_TestSignal1));

    /* Outputs for Atomic SubSystem: '<S280>/Turn On Delay Sample2' */
    /* Outputs for Atomic SubSystem: '<S312>/EdgeRising' */
    /* Logic: '<S313>/AND' incorporates:
     *  Logic: '<S313>/OR1'
     *  UnitDelay: '<S313>/Unit Delay'
     */
    rtb_AND_fp = (rtb_Logical2_dg && (!GENR_ac_DW.UnitDelay_DSTATE_nu));

    /* Update for UnitDelay: '<S313>/Unit Delay' */
    GENR_ac_DW.UnitDelay_DSTATE_nu = rtb_Logical2_dg;

    /* End of Outputs for SubSystem: '<S312>/EdgeRising' */

    /* Switch: '<S312>/Switch1' incorporates:
     *  Constant: '<S310>/Calib'
     *  Constant: '<S312>/Constant Value'
     *  Constant: '<S312>/Constant Value1'
     *  Logic: '<S312>/OR'
     *  Logic: '<S312>/OR1'
     *  MinMax: '<S312>/Minimum'
     *  Sum: '<S312>/Summation'
     *  UnitDelay: '<S312>/Unit Delay'
     */
    if ((!rtb_Logical2_dg) || rtb_AND_fp)
    {
        GENR_ac_DW.UnitDelay_DSTATE_aq = 0U;
    }
    else if (KeGENR_Cnt_DsblAPMDbnc < ((uint16)(((uint32)
                GENR_ac_DW.UnitDelay_DSTATE_aq) + 1U)))
    {
        /* MinMax: '<S312>/Minimum' incorporates:
         *  Constant: '<S310>/Calib'
         */
        GENR_ac_DW.UnitDelay_DSTATE_aq = KeGENR_Cnt_DsblAPMDbnc;
    }
    else
    {
        /* MinMax: '<S312>/Minimum' incorporates:
         *  Constant: '<S312>/Constant Value'
         *  Sum: '<S312>/Summation'
         *  UnitDelay: '<S312>/Unit Delay'
         */
        GENR_ac_DW.UnitDelay_DSTATE_aq = (uint16)(((uint32)
            GENR_ac_DW.UnitDelay_DSTATE_aq) + 1U);
    }

    /* End of Switch: '<S312>/Switch1' */

    /* Logic: '<S312>/AND' incorporates:
     *  Constant: '<S310>/Calib'
     *  RelationalOperator: '<S312>/Greater  Than'
     *  UnitDelay: '<S312>/Unit Delay'
     */
    VeGENR_b_TestSignal4 = (rtb_Logical2_dg && (GENR_ac_DW.UnitDelay_DSTATE_aq >=
        KeGENR_Cnt_DsblAPMDbnc));

    /* End of Outputs for SubSystem: '<S280>/Turn On Delay Sample2' */

    /* Outputs for Atomic SubSystem: '<S289>/Hysteresis5' */
    /* Switch: '<S390>/Switch1' incorporates:
     *  Constant: '<S390>/Constant Value'
     *  Constant: '<S393>/Calib'
     *  Constant: '<S394>/Calib'
     *  RelationalOperator: '<S390>/Greater  Than'
     *  RelationalOperator: '<S390>/Greater  Than1'
     *  UnitDelay: '<S390>/Unit Delay'
     */
    if (VeGENR_Pct_HVBatPackSOC > KeGENR_Pct_DisableAPM_InFieldRSP)
    {
        GENR_ac_DW.UnitDelay_DSTATE_lh = true;
    }
    else
    {
        GENR_ac_DW.UnitDelay_DSTATE_lh = ((VeGENR_Pct_HVBatPackSOC >=
            KeGENR_Pct_DisableAPM_InFieldLSP) && (GENR_ac_DW.UnitDelay_DSTATE_lh));
    }

    /* End of Switch: '<S390>/Switch1' */
    /* End of Outputs for SubSystem: '<S289>/Hysteresis5' */

    /* Outputs for Atomic SubSystem: '<S289>/Hysteresis1' */
    /* Switch: '<S387>/Switch1' incorporates:
     *  Constant: '<S387>/Constant Value'
     *  Constant: '<S399>/Calib'
     *  Constant: '<S400>/Calib'
     *  RelationalOperator: '<S387>/Greater  Than'
     *  RelationalOperator: '<S387>/Greater  Than1'
     *  UnitDelay: '<S387>/Unit Delay'
     */
    if (VeGENR_Pct_HVBatPackSOC > KeGENR_Pct_DisableAPM_PlgInChargingRSP)
    {
        GENR_ac_DW.UnitDelay_DSTATE_aw = true;
    }
    else
    {
        GENR_ac_DW.UnitDelay_DSTATE_aw = ((VeGENR_Pct_HVBatPackSOC >=
            KeGENR_Pct_DisableAPM_PlgInChargingLSP) &&
            (GENR_ac_DW.UnitDelay_DSTATE_aw));
    }

    /* End of Switch: '<S387>/Switch1' */
    /* End of Outputs for SubSystem: '<S289>/Hysteresis1' */

    /* Outputs for Atomic SubSystem: '<S289>/Hysteresis2' */
    /* Switch: '<S388>/Switch1' incorporates:
     *  Constant: '<S388>/Constant Value'
     *  Constant: '<S397>/Calib'
     *  Constant: '<S398>/Calib'
     *  RelationalOperator: '<S388>/Greater  Than'
     *  RelationalOperator: '<S388>/Greater  Than1'
     *  UnitDelay: '<S388>/Unit Delay'
     */
    if (VeGENR_Pct_HVBatPackSOC > KeGENR_Pct_DisableAPM_PSA_RSP)
    {
        GENR_ac_DW.UnitDelay_DSTATE_gp = true;
    }
    else
    {
        GENR_ac_DW.UnitDelay_DSTATE_gp = ((VeGENR_Pct_HVBatPackSOC >=
            KeGENR_Pct_DisableAPM_PSA_LSP) && (GENR_ac_DW.UnitDelay_DSTATE_gp));
    }

    /* End of Switch: '<S388>/Switch1' */
    /* End of Outputs for SubSystem: '<S289>/Hysteresis2' */

    /* Outputs for Atomic SubSystem: '<S289>/Hysteresis3' */
    /* Switch: '<S389>/Switch1' incorporates:
     *  Constant: '<S389>/Constant Value'
     *  Constant: '<S396>/Calib'
     *  Constant: '<S401>/Calib'
     *  RelationalOperator: '<S389>/Greater  Than'
     *  RelationalOperator: '<S389>/Greater  Than1'
     *  UnitDelay: '<S389>/Unit Delay'
     */
    if (VeGENR_Pct_HVBatPackSOC > KeGENR_Pct_DisableAPM_RSP)
    {
        GENR_ac_DW.UnitDelay_DSTATE_dm = true;
    }
    else
    {
        GENR_ac_DW.UnitDelay_DSTATE_dm = ((VeGENR_Pct_HVBatPackSOC >=
            KeGENR_Pct_DisableAPM_LSP) && (GENR_ac_DW.UnitDelay_DSTATE_dm));
    }

    /* End of Switch: '<S389>/Switch1' */
    /* End of Outputs for SubSystem: '<S289>/Hysteresis3' */

    /* Switch: '<S289>/Switch4' incorporates:
     *  Constant: '<S386>/Constant'
     *  Constant: '<S402>/Calib'
     *  RelationalOperator: '<S289>/Comparison9'
     *  Switch: '<S391>/Switch1'
     *  Switch: '<S391>/Switch2'
     */
    if (KeGENR_b_IsBSG)
    {
        /* Switch: '<S289>/Switch3' incorporates:
         *  Logic: '<S289>/Logical15'
         */
        if (!VeGENR_b_InFieldMode)
        {
            /* Switch: '<S289>/Switch4' incorporates:
             *  Constant: '<S395>/Calib'
             *  RelationalOperator: '<S289>/Comparison3'
             *  Switch: '<S289>/Switch3'
             */
            rtb_Logical2_dg = (VeGENR_Pct_HVBatPackSOC <
                               KeGENR_Pct_DisableAPM_InPlant);
        }
        else
        {
            /* Switch: '<S289>/Switch4' incorporates:
             *  Logic: '<S289>/Logical18'
             *  Switch: '<S289>/Switch3'
             *  UnitDelay: '<S390>/Unit Delay'
             */
            rtb_Logical2_dg = !GENR_ac_DW.UnitDelay_DSTATE_lh;
        }

        /* End of Switch: '<S289>/Switch3' */
    }
    else if (((uint32)rtb_TmpSignalConversionAtVeOBCR_e_Chargi) ==
             CeOBCR_e_ChargingSts_Charging)
    {
        /* Switch: '<S391>/Switch1' incorporates:
         *  Logic: '<S289>/Logical13'
         *  Switch: '<S289>/Switch4'
         *  UnitDelay: '<S387>/Unit Delay'
         */
        rtb_Logical2_dg = !GENR_ac_DW.UnitDelay_DSTATE_aw;
    }
    else if (rtb_TmpSignalConversionAtVeHPMR_b_PropSy)
    {
        /* Switch: '<S391>/Switch2' incorporates:
         *  Logic: '<S289>/Logical14'
         *  Switch: '<S289>/Switch4'
         *  Switch: '<S391>/Switch1'
         *  UnitDelay: '<S388>/Unit Delay'
         */
        rtb_Logical2_dg = !GENR_ac_DW.UnitDelay_DSTATE_gp;
    }
    else
    {
        /* Switch: '<S289>/Switch4' incorporates:
         *  Logic: '<S289>/Logical16'
         *  Switch: '<S391>/Switch1'
         *  Switch: '<S391>/Switch2'
         *  UnitDelay: '<S389>/Unit Delay'
         */
        rtb_Logical2_dg = !GENR_ac_DW.UnitDelay_DSTATE_dm;
    }

    /* End of Switch: '<S289>/Switch4' */

    /* Outputs for Atomic SubSystem: '<S289>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S403>/EdgeRising' */
    /* Logic: '<S404>/AND' incorporates:
     *  Logic: '<S404>/OR1'
     *  UnitDelay: '<S404>/Unit Delay'
     */
    rtb_AND_fp = (rtb_Logical2_dg && (!GENR_ac_DW.UnitDelay_DSTATE_hb));

    /* Update for UnitDelay: '<S404>/Unit Delay' */
    GENR_ac_DW.UnitDelay_DSTATE_hb = rtb_Logical2_dg;

    /* End of Outputs for SubSystem: '<S403>/EdgeRising' */

    /* Switch: '<S403>/Switch1' incorporates:
     *  Constant: '<S392>/Calib'
     *  Constant: '<S403>/Constant Value'
     *  Constant: '<S403>/Constant Value1'
     *  Logic: '<S403>/OR'
     *  Logic: '<S403>/OR1'
     *  MinMax: '<S403>/Minimum'
     *  Sum: '<S403>/Summation'
     *  UnitDelay: '<S403>/Unit Delay'
     */
    if ((!rtb_Logical2_dg) || rtb_AND_fp)
    {
        GENR_ac_DW.UnitDelay_DSTATE_pm = 0U;
    }
    else if (KeGENR_Cnt_SOC_DbncAPM_ShtDwn < ((uint16)(((uint32)
                GENR_ac_DW.UnitDelay_DSTATE_pm) + 1U)))
    {
        /* MinMax: '<S403>/Minimum' incorporates:
         *  Constant: '<S392>/Calib'
         */
        GENR_ac_DW.UnitDelay_DSTATE_pm = KeGENR_Cnt_SOC_DbncAPM_ShtDwn;
    }
    else
    {
        /* MinMax: '<S403>/Minimum' incorporates:
         *  Constant: '<S403>/Constant Value'
         *  Sum: '<S403>/Summation'
         *  UnitDelay: '<S403>/Unit Delay'
         */
        GENR_ac_DW.UnitDelay_DSTATE_pm = (uint16)(((uint32)
            GENR_ac_DW.UnitDelay_DSTATE_pm) + 1U);
    }

    /* End of Switch: '<S403>/Switch1' */

    /* Logic: '<S403>/AND' incorporates:
     *  Constant: '<S392>/Calib'
     *  RelationalOperator: '<S403>/Greater  Than'
     *  UnitDelay: '<S403>/Unit Delay'
     */
    VeGENR_b_TestSignal5 = (rtb_Logical2_dg && (GENR_ac_DW.UnitDelay_DSTATE_pm >=
        KeGENR_Cnt_SOC_DbncAPM_ShtDwn));

    /* End of Outputs for SubSystem: '<S289>/Turn On Delay Sample1' */

    /* If: '<S46>/If' incorporates:
     *  Constant: '<S251>/Constant'
     *  RelationalOperator: '<S46>/Comparison1'
     */
    if (rtb_TmpSignalConversionAtVeSSDR_b_HVBatP)
    {
        /* Outputs for IfAction SubSystem: '<S46>/PerWu_Latch_Timer' incorporates:
         *  ActionPort: '<S260>/Action Port'
         */
        /* Switch: '<S260>/Switch' incorporates:
         *  Constant: '<S272>/Calib'
         *  RelationalOperator: '<S260>/Comparison'
         */
        if (rtb_TmpSignalConversionAtVeIDCR_T_IBS_Ba >
                KeGENR_T_IBSTmpLatch_PerWu)
        {
            /* Merge: '<S46>/Merge1' incorporates:
             *  Constant: '<S273>/Calib'
             */
            VeGENR_t_IBSTmpLchTimer = KeGENR_t_LatchIBSTmp_PerWu_TmpHi;
        }
        else
        {
            /* Merge: '<S46>/Merge1' incorporates:
             *  Constant: '<S274>/Calib'
             */
            VeGENR_t_IBSTmpLchTimer = KeGENR_t_LatchIBSTmp_PerWu_TmpLo;
        }

        /* End of Switch: '<S260>/Switch' */
        /* End of Outputs for SubSystem: '<S46>/PerWu_Latch_Timer' */
    }
    else if (((uint32)rtb_TmpSignalConversionAtVeOBCR_e_Chargi) ==
             CeOBCR_e_ChargingSts_Charging)
    {
        /* Outputs for IfAction SubSystem: '<S46>/HV_Charging_Latch_Timer' incorporates:
         *  ActionPort: '<S252>/Action Port'
         */
        /* Switch: '<S252>/Switch' incorporates:
         *  Constant: '<S269>/Calib'
         *  RelationalOperator: '<S252>/Comparison'
         */
        if (rtb_TmpSignalConversionAtVeIDCR_T_IBS_Ba > KeGENR_T_IBSTmpLatch_HV)
        {
            /* Merge: '<S46>/Merge1' incorporates:
             *  Constant: '<S270>/Calib'
             */
            VeGENR_t_IBSTmpLchTimer = KeGENR_t_LatchIBSTmp_HV_TmpHi;
        }
        else
        {
            /* Merge: '<S46>/Merge1' incorporates:
             *  Constant: '<S271>/Calib'
             */
            VeGENR_t_IBSTmpLchTimer = KeGENR_t_LatchIBSTmp_HV_TmpLo;
        }

        /* End of Switch: '<S252>/Switch' */
        /* End of Outputs for SubSystem: '<S46>/HV_Charging_Latch_Timer' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S46>/No_Latch' incorporates:
         *  ActionPort: '<S259>/Action Port'
         */
        /* Merge: '<S46>/Merge1' incorporates:
         *  Constant: '<S259>/Constant Value'
         *  SignalConversion generated from: '<S259>/No_Timer'
         */
        VeGENR_t_IBSTmpLchTimer = 0.0F;

        /* End of Outputs for SubSystem: '<S46>/No_Latch' */
    }

    /* End of If: '<S46>/If' */

    /* Outputs for Atomic SubSystem: '<S46>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S268>/EdgeFalling1' */
    /* UnitDelay: '<S385>/Unit Delay' incorporates:
     *  UnitDelay: '<S275>/Unit Delay'
     */
    rtb_Logical2_dg = GENR_ac_DW.UnitDelay_DSTATE_h0;

    /* Update for UnitDelay: '<S275>/Unit Delay' */
    GENR_ac_DW.UnitDelay_DSTATE_h0 = VeGENR_b_IBS_BattTemp_SgnlRcvd;

    /* Switch: '<S268>/Switch' incorporates:
     *  Constant: '<S268>/Constant Value1'
     *  Logic: '<S275>/AND'
     *  Logic: '<S275>/OR1'
     *  MinMax: '<S268>/Minimum'
     *  Sum: '<S268>/Summation'
     *  UnitDelay: '<S268>/Unit Delay'
     */
    if ((!VeGENR_b_IBS_BattTemp_SgnlRcvd) && rtb_Logical2_dg)
    {
        GENR_ac_DW.UnitDelay_DSTATE_f = VeGENR_t_IBSTmpLchTimer;
    }
    else
    {
        GENR_ac_DW.UnitDelay_DSTATE_f = fmaxf(GENR_ac_DW.UnitDelay_DSTATE_f -
            0.05F, 0.0F);
    }

    /* End of Switch: '<S268>/Switch' */
    /* End of Outputs for SubSystem: '<S268>/EdgeFalling1' */
    /* End of Outputs for SubSystem: '<S46>/Turn Off Delay Time' */

    /* SwitchCase: '<S46>/SwitchCase' incorporates:
     *  Constant: '<S256>/Calib'
     *  Inport: '<Root>/VeAATR_T_EstAmbAirTemp'
     *  Inport: '<Root>/VeIDCR_T_APMTemp1'
     *  Inport: '<Root>/VeIDCR_T_APMTemp2'
     *  Inport: '<Root>/VeIDCR_T_APM_HeatPlateTemp'
     *  Inport: '<Root>/VeIDCR_T_APM_OutletCoolantTemp'
     */
    switch (KeGENR_k_TempInputSelector)
    {
      case 1:
        (void)Rte_Read_VeIDCR_T_APM_OutletCoolantTemp_Value(&rtb_Switch_he4);

        /* Outputs for IfAction SubSystem: '<S46>/Switch Case Action Subsystem' incorporates:
         *  ActionPort: '<S261>/Action Port'
         */
        GENR_ac_SwitchCaseActionSubsystem(rtb_Switch_he4, &GENR_ac_B.Merge);

        /* End of Outputs for SubSystem: '<S46>/Switch Case Action Subsystem' */
        break;

      case 2:
        (void)Rte_Read_VeIDCR_T_APMTemp2_Value(&rtb_Switch_he4);

        /* Outputs for IfAction SubSystem: '<S46>/Switch Case Action Subsystem1' incorporates:
         *  ActionPort: '<S262>/Action Port'
         */
        GENR_ac_SwitchCaseActionSubsystem(rtb_Switch_he4, &GENR_ac_B.Merge);

        /* End of Outputs for SubSystem: '<S46>/Switch Case Action Subsystem1' */
        break;

      case 3:
        (void)Rte_Read_VeIDCR_T_APMTemp1_Value(&rtb_Switch_he4);

        /* Outputs for IfAction SubSystem: '<S46>/Switch Case Action Subsystem2' incorporates:
         *  ActionPort: '<S263>/Action Port'
         */
        GENR_ac_SwitchCaseActionSubsystem(rtb_Switch_he4, &GENR_ac_B.Merge);

        /* End of Outputs for SubSystem: '<S46>/Switch Case Action Subsystem2' */
        break;

      case 4:
        (void)Rte_Read_VeIDCR_T_APM_HeatPlateTemp_Value(&rtb_Switch_he4);

        /* Outputs for IfAction SubSystem: '<S46>/Switch Case Action Subsystem3' incorporates:
         *  ActionPort: '<S264>/Action Port'
         */
        GENR_ac_SwitchCaseActionSubsystem(rtb_Switch_he4, &GENR_ac_B.Merge);

        /* End of Outputs for SubSystem: '<S46>/Switch Case Action Subsystem3' */
        break;

      case 5:
        /* Outputs for IfAction SubSystem: '<S46>/Switch Case Action Subsystem4' incorporates:
         *  ActionPort: '<S265>/Action Port'
         */
        GENR_ac_SwitchCaseActionSubsystem
            (rtb_TmpSignalConversionAtVeIDCR_T_IBS_Ba, &GENR_ac_B.Merge);

        /* End of Outputs for SubSystem: '<S46>/Switch Case Action Subsystem4' */
        break;

      case 6:
        (void)Rte_Read_VeAATR_T_EstAmbAirTemp_Value(&rtb_Switch_he4);

        /* Outputs for IfAction SubSystem: '<S46>/Switch Case Action Subsystem5' incorporates:
         *  ActionPort: '<S266>/Action Port'
         */
        GENR_ac_SwitchCaseActionSubsystem(rtb_Switch_he4, &GENR_ac_B.Merge);

        /* End of Outputs for SubSystem: '<S46>/Switch Case Action Subsystem5' */
        break;

      case 7:
        /* Outputs for Atomic SubSystem: '<S46>/Turn Off Delay Time' */
        /* Switch: '<S46>/Switch1' incorporates:
         *  Constant: '<S250>/Constant'
         *  Constant: '<S253>/Calib'
         *  Constant: '<S268>/Constant Value2'
         *  Logic: '<S268>/AND'
         *  Logic: '<S46>/Logical'
         *  Logic: '<S46>/Logical2'
         *  RelationalOperator: '<S268>/Greater  Than'
         *  RelationalOperator: '<S46>/Comparison5'
         *  Switch: '<S6>/Switch11'
         *  UnitDelay: '<S268>/Unit Delay'
         */
        if (((!VeGENR_b_IBS_BattTemp_FA) && (((uint32)
                VeGENR_e_IBS_BattTempFailSts) != CeGENR_e_BattTempSts_Fail_Prsnt))
            && ((VeGENR_b_IBS_BattTemp_SgnlRcvd) ||
                (GENR_ac_DW.UnitDelay_DSTATE_f > 0.0F)))
        {
            rtb_Switch_he4 = rtb_TmpSignalConversionAtVeIDCR_T_IBS_Ba;
        }
        else
        {
            rtb_Switch_he4 = KeGENR_T_CalibratedTemp;
        }

        /* End of Switch: '<S46>/Switch1' */
        /* End of Outputs for SubSystem: '<S46>/Turn Off Delay Time' */

        /* Outputs for IfAction SubSystem: '<S46>/Switch Case Action Subsystem6' incorporates:
         *  ActionPort: '<S267>/Action Port'
         */
        GENR_ac_SwitchCaseActionSubsystem(rtb_Switch_he4, &GENR_ac_B.Merge);

        /* End of Outputs for SubSystem: '<S46>/Switch Case Action Subsystem6' */
        break;

      default:
        /* no actions */
        break;
    }

    /* End of SwitchCase: '<S46>/SwitchCase' */

    /* Outputs for Atomic SubSystem: '<S46>/Digital Lowpass Reset Enabled' */
    /* Switch: '<S249>/Switch1' incorporates:
     *  Constant: '<S255>/Calib'
     *  Product: '<S249>/Multiplication'
     *  Sum: '<S249>/Subtraction'
     *  Sum: '<S249>/Summation'
     *  UnitDelay: '<S249>/Unit Delay'
     */
    GENR_ac_DW.UnitDelay_DSTATE_b += (GENR_ac_B.Merge -
        GENR_ac_DW.UnitDelay_DSTATE_b) * KeGENR_k_TempFiltCoef;

    /* End of Outputs for SubSystem: '<S46>/Digital Lowpass Reset Enabled' */

    /* Outputs for IfAction SubSystem: '<S281>/GrEng_DisableAPM' incorporates:
     *  ActionPort: '<S317>/Action Port'
     */
    /* If: '<S281>/If_GreenEngine' incorporates:
     *  Logic: '<S317>/Logical2'
     *  Logic: '<S46>/Logical1'
     */
    rtb_Logical2_dg = !VeGENR_b_InFieldMode;

    /* End of Outputs for SubSystem: '<S281>/GrEng_DisableAPM' */

    /* Switch: '<S46>/Switch2' incorporates:
     *  Constant: '<S254>/Calib'
     *  Logic: '<S46>/Logical1'
     *  Logic: '<S46>/Logical3'
     */
    if ((KeGENR_b_PlantSetP_Enbl) && rtb_Logical2_dg)
    {
        /* Switch: '<S46>/Switch2' incorporates:
         *  Lookup_n-D: '<S257>/Vector'
         *  Switch: '<S249>/Switch1'
         *  Switch: '<S6>/Switch14'
         *  UnitDelay: '<S249>/Unit Delay'
         */
        VeGENR_U_SetPVoltRqTestSignal1 = look2_iflf_binlca_16a(VeGENR_Pct_IBSSOC,
            GENR_ac_DW.UnitDelay_DSTATE_b, ((const float32 *)
            &(KxGENR_U_PlantMode_SetP[0])), ((const float32 *)
            &(KyGENR_U_PlantMode_SetP[0])), ((const float32 *)
            &(KtGENR_U_PlantMode_SetP[0])), GENR_ac_ConstP.Vector_maxIndex, 5U);
    }
    else
    {
        /* Switch: '<S46>/Switch2' incorporates:
         *  Lookup_n-D: '<S258>/Vector'
         *  Switch: '<S249>/Switch1'
         *  Switch: '<S6>/Switch14'
         *  UnitDelay: '<S249>/Unit Delay'
         */
        VeGENR_U_SetPVoltRqTestSignal1 = look2_iflf_binlca_16a(VeGENR_Pct_IBSSOC,
            GENR_ac_DW.UnitDelay_DSTATE_b, ((const float32 *)
            &(KxGENR_U_TmpSOC_SetP[0])), ((const float32 *)
            &(KyGENR_U_TmpSOC_SetP[0])), ((const float32 *)
            &(KtGENR_U_TmpSOC_SetP[0])), GENR_ac_ConstP.pooled7, 5U);
    }

    /* End of Switch: '<S46>/Switch2' */

    /* If: '<S42>/If' incorporates:
     *  Constant: '<S48>/Constant'
     *  RelationalOperator: '<S42>/Comparison1'
     */
    if (CeOBCR_e_ChargingSts_Charging != ((uint32)
            rtb_TmpSignalConversionAtVeOBCR_e_Chargi))
    {
        /* Outputs for IfAction SubSystem: '<S42>/Subsystem' incorporates:
         *  ActionPort: '<S49>/Action Port'
         */
        /* Merge: '<S42>/Merge1' incorporates:
         *  Inport: '<S49>/InputParameter'
         */
        VeGENR_U_SetPtDerating = VeGENR_U_SetPVoltRqTestSignal1;

        /* Merge: '<S42>/Merge2' incorporates:
         *  Constant: '<S49>/TRUE Constant'
         *  SignalConversion generated from: '<S49>/EnableAPM'
         */
        VeGENR_b_APMEnblCheck = true;

        /* End of Outputs for SubSystem: '<S42>/Subsystem' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S42>/APMPowerDeratring' incorporates:
         *  ActionPort: '<S47>/Action Port'
         */
        /* RelationalOperator: '<S47>/Comparison2' incorporates:
         *  Constant: '<S47>/Constant Value'
         */
        rtb_AND_fp = (rtb_TmpSignalConversionAtVeHVTR_I_String < 0.0F);

        /* Outputs for Atomic SubSystem: '<S47>/Turn Off Delay Time' */
        /* Outputs for Atomic SubSystem: '<S61>/EdgeFalling1' */
        /* Logic: '<S62>/AND' incorporates:
         *  Logic: '<S62>/OR1'
         *  UnitDelay: '<S62>/Unit Delay'
         */
        rtb_Comparison2 = ((!rtb_AND_fp) && (GENR_ac_DW.UnitDelay_DSTATE_cq));

        /* Update for UnitDelay: '<S62>/Unit Delay' */
        GENR_ac_DW.UnitDelay_DSTATE_cq = rtb_AND_fp;

        /* End of Outputs for SubSystem: '<S61>/EdgeFalling1' */

        /* Switch: '<S61>/Switch' incorporates:
         *  Constant: '<S59>/Calib'
         *  Constant: '<S61>/Constant Value1'
         *  MinMax: '<S61>/Minimum'
         *  Sum: '<S61>/Summation'
         *  UnitDelay: '<S61>/Unit Delay'
         */
        if (rtb_Comparison2)
        {
            GENR_ac_DW.UnitDelay_DSTATE_j0 = KeGENR_t_DbncTimeBattDisc;
        }
        else
        {
            GENR_ac_DW.UnitDelay_DSTATE_j0 = fmaxf
                (GENR_ac_DW.UnitDelay_DSTATE_j0 - 0.05F, 0.0F);
        }

        /* End of Switch: '<S61>/Switch' */

        /* Switch: '<S47>/Switch' incorporates:
         *  Constant: '<S52>/Calib'
         *  Constant: '<S61>/Constant Value2'
         *  Logic: '<S61>/AND'
         *  RelationalOperator: '<S47>/Comparison1'
         *  RelationalOperator: '<S61>/Greater  Than'
         *  Switch: '<S47>/Switch1'
         *  UnitDelay: '<S61>/Unit Delay'
         */
        if (rtb_AND_fp || (GENR_ac_DW.UnitDelay_DSTATE_j0 > 0.0F))
        {
            /* Switch: '<S47>/Switch' */
            rtb_Switch_he4 = VeGENR_U_SetPVoltRqTestSignal1;
        }
        else if (VeGENR_Pct_HVBatPackSOC > KeGENR_Pct_HVBattSOCThreshold)
        {
            /* Switch: '<S47>/Switch1' incorporates:
             *  Constant: '<S54>/Calib'
             *  Switch: '<S47>/Switch'
             */
            rtb_Switch_he4 = KeGENR_U_HighSOC_SetPt;
        }
        else
        {
            /* Switch: '<S47>/Switch' incorporates:
             *  Constant: '<S55>/Calib'
             *  Switch: '<S47>/Switch1'
             */
            rtb_Switch_he4 = KeGENR_U_LowSOC_SetPt;
        }

        /* End of Switch: '<S47>/Switch' */
        /* End of Outputs for SubSystem: '<S47>/Turn Off Delay Time' */

        /* Merge: '<S42>/Merge2' incorporates:
         *  Constant: '<S55>/Calib'
         *  RelationalOperator: '<S47>/Comparison4'
         */
        VeGENR_b_APMEnblCheck = (rtb_Switch_he4 != KeGENR_U_LowSOC_SetPt);

        /* Outputs for Atomic SubSystem: '<S47>/EdgeRising' */
        /* Logic: '<S51>/OR1' incorporates:
         *  UnitDelay: '<S51>/Unit Delay'
         */
        rtb_AND_fp = !GENR_ac_DW.UnitDelay_DSTATE_b4;

        /* Update for UnitDelay: '<S51>/Unit Delay' incorporates:
         *  Constant: '<S47>/TRUE Constant1'
         */
        GENR_ac_DW.UnitDelay_DSTATE_b4 = true;

        /* Outputs for Atomic SubSystem: '<S47>/Digital Lowpass Reset Enabled' */
        /* Switch: '<S50>/Switch1' incorporates:
         *  Constant: '<S53>/Calib'
         *  Constant: '<S58>/Calib'
         *  Logic: '<S51>/AND'
         *  Product: '<S50>/Multiplication'
         *  Sum: '<S50>/Subtraction'
         *  Sum: '<S50>/Summation'
         *  UnitDelay: '<S50>/Unit Delay'
         */
        if (rtb_AND_fp)
        {
            GENR_ac_DW.UnitDelay_DSTATE_pj = KeGENR_U_DerateSPFilt_IV;
        }
        else
        {
            GENR_ac_DW.UnitDelay_DSTATE_pj += (rtb_Switch_he4 -
                GENR_ac_DW.UnitDelay_DSTATE_pj) * KeGENR_k_VoltageLowPassFilter;
        }

        /* End of Switch: '<S50>/Switch1' */
        /* End of Outputs for SubSystem: '<S47>/Digital Lowpass Reset Enabled' */
        /* End of Outputs for SubSystem: '<S47>/EdgeRising' */

        /* Switch: '<S47>/Switch2' incorporates:
         *  Constant: '<S57>/Calib'
         */
        if (KeGENR_b_OvrdSetPt)
        {
            /* Merge: '<S42>/Merge1' incorporates:
             *  Constant: '<S56>/Calib'
             *  Gain: '<S60>/Gain'
             */
            VeGENR_U_SetPtDerating = KeGENR_U_OverSetPtValue;
        }
        else
        {
            /* Merge: '<S42>/Merge1' incorporates:
             *  Gain: '<S60>/Gain'
             *  UnitDelay: '<S50>/Unit Delay'
             */
            VeGENR_U_SetPtDerating = GENR_ac_DW.UnitDelay_DSTATE_pj;
        }

        /* End of Switch: '<S47>/Switch2' */
        /* End of Outputs for SubSystem: '<S42>/APMPowerDeratring' */
    }

    /* End of If: '<S42>/If' */

    /* If: '<S281>/If_EngineCrnk' incorporates:
     *  Constant: '<S318>/Calib'
     */
    if (KeGENR_b_DisAPM_OffFeatureEngCrank)
    {
        /* Outputs for IfAction SubSystem: '<S281>/Enable_APM_CrnkNF' incorporates:
         *  ActionPort: '<S314>/Action Port'
         */
        /* Merge: '<S281>/Merge1' incorporates:
         *  Constant: '<S314>/TRUE Constant'
         *  SignalConversion generated from: '<S314>/Enable_APM_CrnkNF'
         */
        VeGENR_b_EngineCrnkDisAPMCheck = true;

        /* End of Outputs for SubSystem: '<S281>/Enable_APM_CrnkNF' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S281>/EngineCrnk_DisAPM' incorporates:
         *  ActionPort: '<S316>/Action Port'
         */
        /* RelationalOperator: '<S316>/Comparison13' incorporates:
         *  Constant: '<S323>/Constant'
         */
        rtb_AND_fp = (CeESSR_e_EngineTorqueStart == ((uint32)
                       rtb_TmpSignalConversionAtVeESSR_e_EngStr));

        /* Outputs for Atomic SubSystem: '<S316>/EdgeRising1' */
        /* Logic: '<S320>/OR1' incorporates:
         *  UnitDelay: '<S320>/Unit Delay'
         */
        rtb_Comparison2 = !GENR_ac_DW.UnitDelay_DSTATE_m3;

        /* Update for UnitDelay: '<S320>/Unit Delay' */
        GENR_ac_DW.UnitDelay_DSTATE_m3 = rtb_AND_fp;

        /* End of Outputs for SubSystem: '<S316>/EdgeRising1' */

        /* Outputs for Atomic SubSystem: '<S316>/Signal Latch On With Reset6' */
        /* Outputs for Atomic SubSystem: '<S316>/Signal Latch On With Reset5' */
        /* Logic: '<S326>/NOT' incorporates:
         *  Constant: '<S321>/Constant'
         *  Constant: '<S322>/Constant'
         *  Constant: '<S324>/Constant'
         *  Logic: '<S316>/Logical1'
         *  Logic: '<S327>/NOT'
         *  RelationalOperator: '<S316>/Comparison1'
         *  RelationalOperator: '<S316>/Comparison12'
         *  RelationalOperator: '<S316>/Comparison14'
         */
        rtb_NotEqual_b = (((((uint32)rtb_TmpSignalConversionAtVeESSR_e_EngStr)
                            != CeESSR_e_ProducingTorque) && (((uint32)
                             rtb_TmpSignalConversionAtVeESSR_e_EngStr) !=
                            CeESSR_e_Stop)) && (((uint32)
                            rtb_TmpSignalConversionAtVeESSR_e_EngStr) !=
                           CeESSR_e_ImmediateStop));

        /* End of Outputs for SubSystem: '<S316>/Signal Latch On With Reset6' */

        /* Logic: '<S326>/OR1' incorporates:
         *  Logic: '<S326>/NOT'
         *  Logic: '<S326>/OR'
         *  UnitDelay: '<S326>/Unit Delay'
         */
        GENR_ac_DW.UnitDelay_DSTATE_ju = (rtb_AND_fp || (rtb_NotEqual_b &&
            (GENR_ac_DW.UnitDelay_DSTATE_ju)));

        /* End of Outputs for SubSystem: '<S316>/Signal Latch On With Reset5' */

        /* Logic: '<S316>/Logical2' */
        VeGENR_b_EngCrnk1 = !GENR_ac_DW.UnitDelay_DSTATE_ju;

        /* Outputs for Atomic SubSystem: '<S316>/Signal Latch On With Reset6' */
        /* Outputs for Atomic SubSystem: '<S316>/EdgeRising1' */
        /* Logic: '<S327>/OR1' incorporates:
         *  Logic: '<S320>/AND'
         *  Logic: '<S327>/OR'
         *  UnitDelay: '<S327>/Unit Delay'
         */
        GENR_ac_DW.UnitDelay_DSTATE_p0 = ((rtb_AND_fp && rtb_Comparison2) ||
            (rtb_NotEqual_b && (GENR_ac_DW.UnitDelay_DSTATE_p0)));

        /* End of Outputs for SubSystem: '<S316>/EdgeRising1' */
        /* End of Outputs for SubSystem: '<S316>/Signal Latch On With Reset6' */

        /* Outputs for Atomic SubSystem: '<S316>/Turn On Delay Time1' */
        /* Outputs for Atomic SubSystem: '<S328>/EdgeRising' */
        /* Logic: '<S329>/AND' incorporates:
         *  Logic: '<S329>/OR1'
         *  UnitDelay: '<S329>/Unit Delay'
         */
        rtb_AND_fp = ((GENR_ac_DW.UnitDelay_DSTATE_p0) &&
                      (!GENR_ac_DW.UnitDelay_DSTATE_hbu));

        /* Update for UnitDelay: '<S329>/Unit Delay' */
        GENR_ac_DW.UnitDelay_DSTATE_hbu = GENR_ac_DW.UnitDelay_DSTATE_p0;

        /* End of Outputs for SubSystem: '<S328>/EdgeRising' */

        /* Switch: '<S328>/Switch1' incorporates:
         *  Constant: '<S325>/Calib'
         *  Constant: '<S328>/Constant Value1'
         *  Logic: '<S328>/OR'
         *  Logic: '<S328>/OR1'
         *  MinMax: '<S328>/Minimum'
         *  Sum: '<S328>/Summation'
         *  UnitDelay: '<S328>/Unit Delay'
         */
        if ((!GENR_ac_DW.UnitDelay_DSTATE_p0) || rtb_AND_fp)
        {
            GENR_ac_DW.UnitDelay_DSTATE_d = 0.0F;
        }
        else
        {
            GENR_ac_DW.UnitDelay_DSTATE_d = fminf
                (KeGENR_t_TimeAPM_OffDuringEngineCrank,
                 GENR_ac_DW.UnitDelay_DSTATE_d + 0.05F);
        }

        /* End of Switch: '<S328>/Switch1' */

        /* Logic: '<S328>/AND' incorporates:
         *  Constant: '<S325>/Calib'
         *  RelationalOperator: '<S328>/Greater  Than'
         *  UnitDelay: '<S328>/Unit Delay'
         */
        VeGENR_b_EngCrnk2 = ((GENR_ac_DW.UnitDelay_DSTATE_p0) &&
                             (GENR_ac_DW.UnitDelay_DSTATE_d >=
                              KeGENR_t_TimeAPM_OffDuringEngineCrank));

        /* End of Outputs for SubSystem: '<S316>/Turn On Delay Time1' */

        /* Merge: '<S281>/Merge1' incorporates:
         *  Logic: '<S316>/Logical11'
         */
        VeGENR_b_EngineCrnkDisAPMCheck = ((VeGENR_b_EngCrnk1) ||
            (VeGENR_b_EngCrnk2));

        /* End of Outputs for SubSystem: '<S281>/EngineCrnk_DisAPM' */
    }

    /* End of If: '<S281>/If_EngineCrnk' */

    /* If: '<S281>/If_GreenEngine' incorporates:
     *  Constant: '<S319>/Calib'
     *  Logic: '<S317>/Logical'
     *  Logic: '<S317>/Logical4'
     *  Switch: '<S330>/Switch1'
     */
    if (KeGENR_b_OvrdGreenEng)
    {
        /* Outputs for IfAction SubSystem: '<S281>/Enable_APM_GrEngNF' incorporates:
         *  ActionPort: '<S315>/Action Port'
         */
        /* Merge: '<S281>/Merge' incorporates:
         *  Constant: '<S315>/FALSE Constant'
         *  SignalConversion generated from: '<S315>/Enable_APM_GrEngNF'
         */
        VeGENR_b_GreenEng = false;

        /* End of Outputs for SubSystem: '<S281>/Enable_APM_GrEngNF' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S281>/GrEng_DisableAPM' incorporates:
         *  ActionPort: '<S317>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S317>/Accumulator Reset' */
        if ((VeGENR_b_InFieldMode) || (!rtb_TmpSignalConversionAtVeHPMR_b_PropSy))
        {
            /* Switch: '<S330>/Switch1' incorporates:
             *  Constant: '<S317>/Constant Value1'
             *  UnitDelay: '<S330>/Unit Delay'
             */
            GENR_ac_DW.UnitDelay_DSTATE_j = 0.0F;
        }
        else
        {
            /* Switch: '<S330>/Switch1' incorporates:
             *  Sum: '<S330>/Summation'
             *  UnitDelay: '<S330>/Unit Delay'
             */
            GENR_ac_DW.UnitDelay_DSTATE_j += 0.05F;
        }

        /* End of Outputs for SubSystem: '<S317>/Accumulator Reset' */

        /* RelationalOperator: '<S317>/Comparison1' incorporates:
         *  Constant: '<S334>/Calib'
         *  UnitDelay: '<S330>/Unit Delay'
         */
        VeGENR_b_GreenEngTest1 = (GENR_ac_DW.UnitDelay_DSTATE_j >=
            KeGENR_t_APMOff_EngCrank_Inplant);

        /* Logic: '<S317>/Logical1' incorporates:
         *  Constant: '<S333>/Calib'
         *  DataStoreRead: '<S317>/Data Store Read2'
         *  Logic: '<S317>/Logical3'
         *  RelationalOperator: '<S317>/Comparison3'
         */
        VeGENR_b_GreenEng = ((((GENR_ac_DW.NeGENR_Cnt_InPlantAPMOff <
                                KeGENR_Cnt_NbrAlwd_InPlantAPMOff) &&
                               (!VeGENR_b_GreenEngTest1)) && rtb_Logical2_dg) &&
                             rtb_TmpSignalConversionAtVeHPMR_b_PropSy);

        /* Outputs for Atomic SubSystem: '<S317>/EdgeFalling' */
        /* Logic: '<S331>/AND' incorporates:
         *  Logic: '<S331>/OR1'
         *  UnitDelay: '<S331>/Unit Delay'
         */
        rtb_Logical2_dg = ((!VeGENR_b_GreenEng) &&
                           (GENR_ac_DW.UnitDelay_DSTATE_og));

        /* Update for UnitDelay: '<S331>/Unit Delay' */
        GENR_ac_DW.UnitDelay_DSTATE_og = VeGENR_b_GreenEng;

        /* End of Outputs for SubSystem: '<S317>/EdgeFalling' */

        /* Switch: '<S317>/Switch1' incorporates:
         *  Constant: '<S317>/Constant Value3'
         *  DataStoreRead: '<S317>/Data Store Read1'
         *  DataStoreWrite: '<S317>/Data Store Write'
         *  Sum: '<S317>/Sum'
         */
        if (rtb_Logical2_dg)
        {
            GENR_ac_DW.NeGENR_Cnt_InPlantAPMOff = (uint16)(((uint32)
                GENR_ac_DW.NeGENR_Cnt_InPlantAPMOff) + 1U);
        }

        /* End of Switch: '<S317>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S317>/EdgeRising' */
        /* Logic: '<S332>/OR1' incorporates:
         *  UnitDelay: '<S332>/Unit Delay'
         */
        rtb_Logical2_dg = !GENR_ac_DW.UnitDelay_DSTATE_mz;

        /* Update for UnitDelay: '<S332>/Unit Delay' */
        GENR_ac_DW.UnitDelay_DSTATE_mz = VeGENR_b_InFieldMode;

        /* Switch: '<S317>/Switch2' incorporates:
         *  Constant: '<S317>/Constant Value2'
         *  DataStoreWrite: '<S317>/Data Store Write1'
         *  Logic: '<S332>/AND'
         */
        if ((VeGENR_b_InFieldMode) && rtb_Logical2_dg)
        {
            GENR_ac_DW.NeGENR_Cnt_InPlantAPMOff = 0U;
        }

        /* End of Switch: '<S317>/Switch2' */
        /* End of Outputs for SubSystem: '<S317>/EdgeRising' */
        /* End of Outputs for SubSystem: '<S281>/GrEng_DisableAPM' */
    }

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' */

    /* Inport: '<Root>/VeFSCR_b_HVFuncRejHdAjar' */
    (void)Rte_Read_VeFSCR_b_HVFuncRejHdAjar_Value(&rtb_LogicalOperator_ml);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' incorporates:
     *  SubSystem: '<Root>/GENR_MedTEF'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/GENC_CntrlAPM'
     */
    /* Logic: '<S284>/Logical11' incorporates:
     *  Constant: '<S341>/Calib'
     *  Logic: '<S284>/Logical12'
     */
    VeGENR_b_HoodAjarAllwBuck = ((!rtb_LogicalOperator_ml) ||
        (KeGENR_b_IgnoreHoodAjar));

    /* If: '<S287>/If' incorporates:
     *  Constant: '<S347>/Calib'
     *  Inport: '<Root>/VeINVR_e_MtrA_InvrtrSt'
     */
    if (KeGENR_b_Dsable_P1fVC_Rq)
    {
        GENR_ac_DW.If_ActiveSubsystem = 0;

        /* Outputs for IfAction SubSystem: '<S287>/P1f_VC_NF' incorporates:
         *  ActionPort: '<S349>/Action Port'
         */
        /* Merge: '<S287>/Merge' incorporates:
         *  Constant: '<S349>/FALSE Constant'
         *  SignalConversion generated from: '<S349>/P1fVoltCtrlEnbl'
         */
        rtb_LogicalOperator_ml = false;

        /* Merge: '<S287>/Merge1' incorporates:
         *  Constant: '<S349>/FALSE Constant1'
         *  SignalConversion generated from: '<S349>/VCOn_or_DfltAltrMode'
         */
        VeGENR_b_VCOn_or_DfltAltrMode_Mrg = false;

        /* Merge: '<S287>/Merge2' incorporates:
         *  Constant: '<S349>/TRUE Constant'
         *  SignalConversion generated from: '<S349>/APMEnbl_P1fVC'
         */
        VeGENR_b_APMEnbl_P1fVC_Mrg = true;

        /* Merge: '<S287>/Merge3' incorporates:
         *  Constant: '<S349>/TRUE Constant1'
         *  SignalConversion generated from: '<S349>/APMEnbl_LoCMCPACheck'
         */
        VeGENR_b_APMEnbl_LoCMCPA_Mrg = true;

        /* Merge: '<S287>/Merge4' incorporates:
         *  Constant: '<S349>/FALSE Constant2'
         *  SignalConversion generated from: '<S349>/LoCMCPA'
         */
        VeGENR_b_LoCMCPA_Mrg = false;

        /* End of Outputs for SubSystem: '<S287>/P1f_VC_NF' */
    }
    else
    {
        GENR_ac_DW.If_ActiveSubsystem = 1;

        /* Outputs for IfAction SubSystem: '<S287>/P1f_VC_Func' incorporates:
         *  ActionPort: '<S348>/Action Port'
         */
        /* Logic: '<S353>/Logical Operator' incorporates:
         *  Constant: '<S353>/Constant1'
         *  Constant: '<S353>/Constant2'
         *  DataStoreRead: '<S353>/StatusByte_CommBus_B_Off'
         *  RelationalOperator: '<S353>/Relational Operator1'
         *  RelationalOperator: '<S353>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S353>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S353>/Bitwise Operator2'
         */
        rtb_LogicalOperator_ml = (((((sint32)GENR_ac_DW.StatusByte_CommBus_B_Off)
            & 1) > 0) && ((((uint32)GENR_ac_DW.StatusByte_CommBus_B_Off) & 64U) ==
                          0U));

        /* Logic: '<S355>/Logical Operator' incorporates:
         *  Constant: '<S355>/Constant1'
         *  Constant: '<S355>/Constant2'
         *  DataStoreRead: '<S355>/StatusByte_LostCommSGCM'
         *  RelationalOperator: '<S355>/Relational Operator1'
         *  RelationalOperator: '<S355>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S355>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S355>/Bitwise Operator2'
         */
        rtb_AND_fp = (((((sint32)GENR_ac_DW.StatusByte_LostCommSGCM) & 1) > 0) &&
                      ((((uint32)GENR_ac_DW.StatusByte_LostCommSGCM) & 64U) ==
                       0U));

        /* Outputs for Atomic SubSystem: '<S351>/Hysteresis' */
        /* Switch: '<S366>/Switch1' incorporates:
         *  Constant: '<S369>/Calib'
         *  RelationalOperator: '<S366>/Greater  Than'
         */
        if (VeGENR_Pct_HVBatPackSOC > KeGENR_Pct_DisableAPM_InFieldRSP)
        {
            /* Switch: '<S366>/Switch1' incorporates:
             *  Constant: '<S366>/Constant Value'
             */
            VeGENR_b_SOC_Hi_VC = true;
        }
        else
        {
            /* Switch: '<S366>/Switch1' incorporates:
             *  Constant: '<S370>/Calib'
             *  RelationalOperator: '<S366>/Greater  Than1'
             *  UnitDelay: '<S366>/Unit Delay'
             */
            VeGENR_b_SOC_Hi_VC = ((VeGENR_Pct_HVBatPackSOC >=
                                   KeGENR_Pct_LoSOCP1fVC) && (VeGENR_b_SOC_Hi_VC));
        }

        /* End of Switch: '<S366>/Switch1' */
        /* End of Outputs for SubSystem: '<S351>/Hysteresis' */
        /* End of Outputs for SubSystem: '<S287>/P1f_VC_Func' */
        (void)Rte_Read_VeINVR_e_MtrA_InvrtrSt_Value(&tmpRead_7);

        /* Outputs for IfAction SubSystem: '<S287>/P1f_VC_Func' incorporates:
         *  ActionPort: '<S348>/Action Port'
         */
        /* Logic: '<S351>/Logical6' incorporates:
         *  Inport: '<Root>/VeINVR_e_MtrA_InvrtrSt'
         *  Logic: '<S351>/Logical5'
         *  UnitDelay: '<S351>/Unit Delay'
         */
        VeGENR_b_SOCHi_LowVoltSysGood = ((VeGENR_b_SOC_Hi_VC) &&
            (!GENR_ac_DW.UnitDelay_DSTATE_ha));

        /* RelationalOperator: '<S351>/Comparison4' incorporates:
         *  Constant: '<S363>/Constant'
         *  Inport: '<Root>/VeINVR_e_MtrA_InvrtrSt'
         */
        rtb_Logical2_dg = (((uint32)tmpRead_7) == CeINVR_e_NormalVoltCntrlOn);

        /* Outputs for Atomic SubSystem: '<S351>/Turn On Delay Sample1' */
        /* Outputs for Atomic SubSystem: '<S374>/EdgeRising' */
        /* Logic: '<S378>/AND' incorporates:
         *  Logic: '<S378>/OR1'
         *  UnitDelay: '<S378>/Unit Delay'
         */
        rtb_Comparison2 = (rtb_Logical2_dg && (!GENR_ac_DW.UnitDelay_DSTATE_f54));

        /* Update for UnitDelay: '<S378>/Unit Delay' */
        GENR_ac_DW.UnitDelay_DSTATE_f54 = rtb_Logical2_dg;

        /* End of Outputs for SubSystem: '<S374>/EdgeRising' */

        /* Switch: '<S374>/Switch1' incorporates:
         *  Constant: '<S368>/Calib'
         *  Constant: '<S374>/Constant Value'
         *  Constant: '<S374>/Constant Value1'
         *  Logic: '<S374>/OR'
         *  Logic: '<S374>/OR1'
         *  MinMax: '<S374>/Minimum'
         *  Sum: '<S374>/Summation'
         *  UnitDelay: '<S374>/Unit Delay'
         */
        if ((!rtb_Logical2_dg) || rtb_Comparison2)
        {
            GENR_ac_DW.UnitDelay_DSTATE_n5 = 0U;
        }
        else if (KeGENR_Cnt_Dbnc_P1fVCOn < ((uint16)(((uint32)
                    GENR_ac_DW.UnitDelay_DSTATE_n5) + 1U)))
        {
            /* MinMax: '<S374>/Minimum' incorporates:
             *  Constant: '<S368>/Calib'
             */
            GENR_ac_DW.UnitDelay_DSTATE_n5 = KeGENR_Cnt_Dbnc_P1fVCOn;
        }
        else
        {
            /* MinMax: '<S374>/Minimum' incorporates:
             *  Constant: '<S374>/Constant Value'
             *  Sum: '<S374>/Summation'
             *  UnitDelay: '<S374>/Unit Delay'
             */
            GENR_ac_DW.UnitDelay_DSTATE_n5 = (uint16)(((uint32)
                GENR_ac_DW.UnitDelay_DSTATE_n5) + 1U);
        }

        /* End of Switch: '<S374>/Switch1' */

        /* Logic: '<S374>/AND' incorporates:
         *  Constant: '<S368>/Calib'
         *  RelationalOperator: '<S374>/Greater  Than'
         *  UnitDelay: '<S374>/Unit Delay'
         */
        VeGENR_b_P1f_VoltCntrlOn = (rtb_Logical2_dg &&
            (GENR_ac_DW.UnitDelay_DSTATE_n5 >= KeGENR_Cnt_Dbnc_P1fVCOn));

        /* End of Outputs for SubSystem: '<S351>/Turn On Delay Sample1' */

        /* S-Function (sfix_bitop): '<S365>/Bitwise Operator2' incorporates:
         *  DataStoreRead: '<S365>/StatusByte_InvData_SGCM'
         *  S-Function (sfix_bitop): '<S354>/Bitwise Operator2'
         */
        rtb_UnitDelay_gx_tmp = ((sint32)GENR_ac_DW.StatusByte_InvData_SGCM) & 1;

        /* S-Function (sfix_bitop): '<S365>/Bitwise Operator1' incorporates:
         *  DataStoreRead: '<S365>/StatusByte_InvData_SGCM'
         *  S-Function (sfix_bitop): '<S354>/Bitwise Operator1'
         */
        rtb_UnitDelay_gx_tmp_0 = ((uint32)GENR_ac_DW.StatusByte_InvData_SGCM) &
            64U;

        /* UnitDelay: '<S361>/Unit Delay' incorporates:
         *  Constant: '<S365>/Constant1'
         *  Constant: '<S365>/Constant2'
         *  Logic: '<S351>/Logical3'
         *  Logic: '<S351>/Logical4'
         *  Logic: '<S365>/Logical Operator'
         *  RelationalOperator: '<S365>/Relational Operator1'
         *  RelationalOperator: '<S365>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S365>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S365>/Bitwise Operator2'
         */
        rtb_Logical2_dg = ((VeGENR_b_P1f_VoltCntrlOn) && ((rtb_UnitDelay_gx_tmp <=
                             0) || (rtb_UnitDelay_gx_tmp_0 != 0U)));

        /* Logic: '<S351>/Logical' incorporates:
         *  Logic: '<S351>/Logical2'
         */
        VeGENR_b_SOCHi_LowVoltSysGood_P1fOff = ((VeGENR_b_SOCHi_LowVoltSysGood) &&
            (!rtb_Logical2_dg));

        /* Logic: '<S351>/Logical1' */
        VeGENR_b_SOCHi_LowVoltSysGood_P1fOn = ((VeGENR_b_SOCHi_LowVoltSysGood) &&
            rtb_Logical2_dg);

        /* RelationalOperator: '<S351>/Comparison1' incorporates:
         *  Constant: '<S364>/Constant'
         *  SignalConversion generated from: '<S1>/VeIDCR_e_stModeRqAPM'
         */
        rtb_Logical2_dg = (((uint32)rtb_TmpSignalConversionAtVeIDCR_e_stMode) ==
                           CeGENR_e_OperBuckCV);

        /* Outputs for Atomic SubSystem: '<S351>/Turn On Delay Sample' */
        /* Outputs for Atomic SubSystem: '<S373>/EdgeRising' */
        /* Logic: '<S377>/AND' incorporates:
         *  Logic: '<S377>/OR1'
         *  UnitDelay: '<S377>/Unit Delay'
         */
        rtb_Comparison2 = (rtb_Logical2_dg && (!GENR_ac_DW.UnitDelay_DSTATE_a0));

        /* Update for UnitDelay: '<S377>/Unit Delay' */
        GENR_ac_DW.UnitDelay_DSTATE_a0 = rtb_Logical2_dg;

        /* End of Outputs for SubSystem: '<S373>/EdgeRising' */

        /* Switch: '<S373>/Switch1' incorporates:
         *  Constant: '<S367>/Calib'
         *  Constant: '<S373>/Constant Value'
         *  Constant: '<S373>/Constant Value1'
         *  Logic: '<S373>/OR'
         *  Logic: '<S373>/OR1'
         *  MinMax: '<S373>/Minimum'
         *  Sum: '<S373>/Summation'
         *  UnitDelay: '<S373>/Unit Delay'
         */
        if ((!rtb_Logical2_dg) || rtb_Comparison2)
        {
            GENR_ac_DW.UnitDelay_DSTATE_n0 = 0U;
        }
        else if (KeGENR_Cnt_Dbnc_APMOn < ((uint16)(((uint32)
                    GENR_ac_DW.UnitDelay_DSTATE_n0) + 1U)))
        {
            /* MinMax: '<S373>/Minimum' incorporates:
             *  Constant: '<S367>/Calib'
             */
            GENR_ac_DW.UnitDelay_DSTATE_n0 = KeGENR_Cnt_Dbnc_APMOn;
        }
        else
        {
            /* MinMax: '<S373>/Minimum' incorporates:
             *  Constant: '<S373>/Constant Value'
             *  Sum: '<S373>/Summation'
             *  UnitDelay: '<S373>/Unit Delay'
             */
            GENR_ac_DW.UnitDelay_DSTATE_n0 = (uint16)(((uint32)
                GENR_ac_DW.UnitDelay_DSTATE_n0) + 1U);
        }

        /* End of Switch: '<S373>/Switch1' */

        /* Logic: '<S373>/AND' incorporates:
         *  Constant: '<S367>/Calib'
         *  RelationalOperator: '<S373>/Greater  Than'
         *  UnitDelay: '<S373>/Unit Delay'
         */
        VeGENR_b_APMOn_VC = (rtb_Logical2_dg && (GENR_ac_DW.UnitDelay_DSTATE_n0 >=
                              KeGENR_Cnt_Dbnc_APMOn));

        /* End of Outputs for SubSystem: '<S351>/Turn On Delay Sample' */

        /* If: '<S351>/If' incorporates:
         *  Constant: '<S371>/Calib'
         */
        if (KeGENR_b_Dsable_P1fVC_Rq)
        {
            /* Outputs for IfAction SubSystem: '<S351>/Dsable_P1fVC_Rq' incorporates:
             *  ActionPort: '<S362>/Action Port'
             */
            /* Merge: '<S351>/Merge_P1f_VC' incorporates:
             *  Constant: '<S362>/FALSE Constant'
             *  SignalConversion generated from: '<S362>/P1f_Rq'
             */
            VeGENR_b_P1fVCEnbl = false;

            /* Merge: '<S287>/Merge2' incorporates:
             *  Constant: '<S362>/TRUE Constant'
             *  SignalConversion generated from: '<S362>/APM_Enbl'
             */
            VeGENR_b_APMEnbl_P1fVC_Mrg = true;

            /* Merge: '<S351>/Merge_P1f_VC2' incorporates:
             *  Constant: '<S362>/Constant Value'
             *  SignalConversion generated from: '<S362>/Debug_1'
             */
            VeGENR_Cnt_P1fDebug123 = 7U;

            /* End of Outputs for SubSystem: '<S351>/Dsable_P1fVC_Rq' */
        }
        else if (VeGENR_b_SOCHi_LowVoltSysGood_P1fOff)
        {
            /* Outputs for IfAction SubSystem: '<S351>/Keep_APMON_P1fOFF' incorporates:
             *  ActionPort: '<S372>/Action Port'
             */
            /* Merge: '<S351>/Merge_P1f_VC' incorporates:
             *  Constant: '<S372>/FALSE Constant'
             *  SignalConversion generated from: '<S372>/P1f_Rq'
             */
            VeGENR_b_P1fVCEnbl = false;

            /* Merge: '<S287>/Merge2' incorporates:
             *  Constant: '<S372>/TRUE Constant'
             *  SignalConversion generated from: '<S372>/APM_Enbl'
             */
            VeGENR_b_APMEnbl_P1fVC_Mrg = true;

            /* Merge: '<S351>/Merge_P1f_VC2' incorporates:
             *  Constant: '<S372>/Constant Value'
             *  SignalConversion generated from: '<S372>/Debug_1'
             */
            VeGENR_Cnt_P1fDebug123 = 1U;

            /* End of Outputs for SubSystem: '<S351>/Keep_APMON_P1fOFF' */
        }
        else if (VeGENR_b_SOCHi_LowVoltSysGood_P1fOn)
        {
            /* Outputs for IfAction SubSystem: '<S351>/TurnOnAPM_OffP1f' incorporates:
             *  ActionPort: '<S375>/Action Port'
             */
            /* Merge: '<S351>/Merge_P1f_VC' incorporates:
             *  Logic: '<S375>/Logical5'
             */
            VeGENR_b_P1fVCEnbl = !VeGENR_b_APMOn_VC;

            /* Merge: '<S287>/Merge2' incorporates:
             *  Constant: '<S375>/TRUE Constant'
             *  SignalConversion generated from: '<S375>/APM_Enbl'
             */
            VeGENR_b_APMEnbl_P1fVC_Mrg = true;

            /* Merge: '<S351>/Merge_P1f_VC2' incorporates:
             *  Constant: '<S375>/Constant Value'
             *  SignalConversion generated from: '<S375>/Debug_2'
             */
            VeGENR_Cnt_P1fDebug123 = 2U;

            /* End of Outputs for SubSystem: '<S351>/TurnOnAPM_OffP1f' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S351>/TurnOnP1f_OffAPM' incorporates:
             *  ActionPort: '<S376>/Action Port'
             */
            /* Merge: '<S351>/Merge_P1f_VC' incorporates:
             *  Constant: '<S376>/TRUE Constant'
             *  SignalConversion generated from: '<S376>/P1f_Rq'
             */
            VeGENR_b_P1fVCEnbl = true;

            /* Merge: '<S287>/Merge2' incorporates:
             *  Logic: '<S376>/Logical2'
             */
            VeGENR_b_APMEnbl_P1fVC_Mrg = !VeGENR_b_P1f_VoltCntrlOn;

            /* Merge: '<S351>/Merge_P1f_VC2' incorporates:
             *  Constant: '<S376>/Constant Value'
             *  SignalConversion generated from: '<S376>/Debug_3'
             */
            VeGENR_Cnt_P1fDebug123 = 3U;

            /* End of Outputs for SubSystem: '<S351>/TurnOnP1f_OffAPM' */
        }

        /* End of If: '<S351>/If' */

        /* Logic: '<S350>/Logical' incorporates:
         *  Constant: '<S354>/Constant1'
         *  Constant: '<S354>/Constant2'
         *  Logic: '<S354>/Logical Operator'
         *  RelationalOperator: '<S354>/Relational Operator1'
         *  RelationalOperator: '<S354>/Relational Operator2'
         */
        rtb_Logical2_dg = ((VeGENR_b_P1fVCEnbl) && ((rtb_UnitDelay_gx_tmp > 0) &&
                            (rtb_UnitDelay_gx_tmp_0 == 0U)));

        /* Logic: '<S350>/Logical1' */
        rtb_Comparison2 = (rtb_TmpSignalConversionAtVeINVR_b_P1_CAN &&
                           (VeGENR_b_P1f_VoltCntrlOn));

        /* Outputs for Atomic SubSystem: '<S350>/Turn On Delay Sample' */
        /* Outputs for Atomic SubSystem: '<S358>/EdgeRising' */
        /* Logic: '<S360>/AND' incorporates:
         *  Logic: '<S360>/OR1'
         *  UnitDelay: '<S360>/Unit Delay'
         */
        rtb_NotEqual_b = (rtb_Logical2_dg && (!GENR_ac_DW.UnitDelay_DSTATE_lu));

        /* Update for UnitDelay: '<S360>/Unit Delay' */
        GENR_ac_DW.UnitDelay_DSTATE_lu = rtb_Logical2_dg;

        /* End of Outputs for SubSystem: '<S358>/EdgeRising' */

        /* Logic: '<S358>/OR1' incorporates:
         *  Logic: '<S358>/AND'
         */
        rtb_Logical2_dg = !rtb_Logical2_dg;

        /* Switch: '<S358>/Switch1' incorporates:
         *  Constant: '<S357>/Calib'
         *  Constant: '<S358>/Constant Value'
         *  Constant: '<S358>/Constant Value1'
         *  Logic: '<S358>/OR'
         *  Logic: '<S358>/OR1'
         *  MinMax: '<S358>/Minimum'
         *  Sum: '<S358>/Summation'
         *  UnitDelay: '<S358>/Unit Delay'
         */
        if (rtb_Logical2_dg || rtb_NotEqual_b)
        {
            GENR_ac_DW.UnitDelay_DSTATE_o = 0U;
        }
        else if (KeGENR_Cnt_DbncTurnOffAPM_U0469 < ((uint16)(((uint32)
                    GENR_ac_DW.UnitDelay_DSTATE_o) + 1U)))
        {
            /* MinMax: '<S358>/Minimum' incorporates:
             *  Constant: '<S357>/Calib'
             */
            GENR_ac_DW.UnitDelay_DSTATE_o = KeGENR_Cnt_DbncTurnOffAPM_U0469;
        }
        else
        {
            /* MinMax: '<S358>/Minimum' incorporates:
             *  Constant: '<S358>/Constant Value'
             *  Sum: '<S358>/Summation'
             *  UnitDelay: '<S358>/Unit Delay'
             */
            GENR_ac_DW.UnitDelay_DSTATE_o = (uint16)(((uint32)
                GENR_ac_DW.UnitDelay_DSTATE_o) + 1U);
        }

        /* End of Switch: '<S358>/Switch1' */

        /* Logic: '<S350>/Logical2' incorporates:
         *  Constant: '<S357>/Calib'
         *  Logic: '<S358>/AND'
         *  RelationalOperator: '<S358>/Greater  Than'
         *  UnitDelay: '<S358>/Unit Delay'
         */
        VeGENR_b_APMBuckEnbl_U0469Check = (rtb_Logical2_dg ||
            (GENR_ac_DW.UnitDelay_DSTATE_o < KeGENR_Cnt_DbncTurnOffAPM_U0469));

        /* End of Outputs for SubSystem: '<S350>/Turn On Delay Sample' */

        /* Outputs for Atomic SubSystem: '<S350>/Turn On Delay Sample1' */
        /* Outputs for Atomic SubSystem: '<S359>/EdgeRising' */
        /* Logic: '<S361>/AND' incorporates:
         *  Logic: '<S361>/OR1'
         *  UnitDelay: '<S361>/Unit Delay'
         */
        rtb_NotEqual_b = (rtb_Comparison2 && (!GENR_ac_DW.UnitDelay_DSTATE_hpz));

        /* Update for UnitDelay: '<S361>/Unit Delay' */
        GENR_ac_DW.UnitDelay_DSTATE_hpz = rtb_Comparison2;

        /* End of Outputs for SubSystem: '<S359>/EdgeRising' */

        /* Logic: '<S359>/OR1' incorporates:
         *  Logic: '<S359>/AND'
         */
        rtb_Logical2_dg = !rtb_Comparison2;

        /* Switch: '<S359>/Switch1' incorporates:
         *  Constant: '<S356>/Calib'
         *  Constant: '<S359>/Constant Value'
         *  Constant: '<S359>/Constant Value1'
         *  Logic: '<S359>/OR'
         *  Logic: '<S359>/OR1'
         *  MinMax: '<S359>/Minimum'
         *  Sum: '<S359>/Summation'
         *  UnitDelay: '<S359>/Unit Delay'
         */
        if (rtb_Logical2_dg || rtb_NotEqual_b)
        {
            GENR_ac_DW.UnitDelay_DSTATE_d5 = 0U;
        }
        else if (KeGENR_Cnt_DbncTurnOffAPM_P1CANError < ((uint16)(((uint32)
                    GENR_ac_DW.UnitDelay_DSTATE_d5) + 1U)))
        {
            /* MinMax: '<S359>/Minimum' incorporates:
             *  Constant: '<S356>/Calib'
             */
            GENR_ac_DW.UnitDelay_DSTATE_d5 =
                KeGENR_Cnt_DbncTurnOffAPM_P1CANError;
        }
        else
        {
            /* MinMax: '<S359>/Minimum' incorporates:
             *  Constant: '<S359>/Constant Value'
             *  Sum: '<S359>/Summation'
             *  UnitDelay: '<S359>/Unit Delay'
             */
            GENR_ac_DW.UnitDelay_DSTATE_d5 = (uint16)(((uint32)
                GENR_ac_DW.UnitDelay_DSTATE_d5) + 1U);
        }

        /* End of Switch: '<S359>/Switch1' */

        /* Logic: '<S350>/Logical3' incorporates:
         *  Constant: '<S356>/Calib'
         *  Logic: '<S359>/AND'
         *  RelationalOperator: '<S359>/Greater  Than'
         *  UnitDelay: '<S359>/Unit Delay'
         */
        VeGENR_b_APMBuckEnbl_P1CANErrorCheck = (rtb_Logical2_dg ||
            (GENR_ac_DW.UnitDelay_DSTATE_d5 <
             KeGENR_Cnt_DbncTurnOffAPM_P1CANError));

        /* End of Outputs for SubSystem: '<S350>/Turn On Delay Sample1' */

        /* Logic: '<S350>/Logical4' */
        VeGENR_b_APMBuckEnbl_U0120Check = !rtb_AND_fp;

        /* Logic: '<S350>/Logical6' */
        VeGENR_b_APMBuckEnbl_U0074Check = !rtb_LogicalOperator_ml;

        /* Logic: '<S350>/Logical5' */
        VeGENR_b_APMEnbl_LoCMCPACheck = ((((VeGENR_b_APMBuckEnbl_U0469Check) &&
            (VeGENR_b_APMBuckEnbl_P1CANErrorCheck)) &&
            (VeGENR_b_APMBuckEnbl_U0120Check)) &&
            (VeGENR_b_APMBuckEnbl_U0074Check));

        /* Merge: '<S287>/Merge4' incorporates:
         *  Logic: '<S350>/Logical7'
         */
        VeGENR_b_LoCMCPA_Mrg = ((rtb_TmpSignalConversionAtVeINVR_b_P1_CAN ||
            rtb_AND_fp) || rtb_LogicalOperator_ml);

        /* Logic: '<S348>/Logical3' incorporates:
         *  Logic: '<S348>/Logical2'
         */
        rtb_Logical2_dg = !VeGENR_b_APMEnbl_LoCMCPACheck;

        /* Merge: '<S287>/Merge1' incorporates:
         *  Logic: '<S348>/Logical3'
         *  Logic: '<S348>/Logical4'
         */
        VeGENR_b_VCOn_or_DfltAltrMode_Mrg = ((VeGENR_b_P1f_VoltCntrlOn) ||
            rtb_Logical2_dg);

        /* Merge: '<S287>/Merge' incorporates:
         *  Logic: '<S348>/Logical1'
         *  Logic: '<S348>/Logical5'
         *  Logic: '<S348>/Logical6'
         */
        rtb_LogicalOperator_ml = (((VeGENR_b_P1fVCEnbl) || rtb_Logical2_dg) && (
            !VeGENR_b_SysVoltHighFA));

        /* Merge: '<S287>/Merge3' incorporates:
         *  Gain: '<S352>/Gain'
         */
        VeGENR_b_APMEnbl_LoCMCPA_Mrg = VeGENR_b_APMEnbl_LoCMCPACheck;

        /* End of Outputs for SubSystem: '<S287>/P1f_VC_Func' */
    }

    /* End of If: '<S287>/If' */

    /* Switch: '<S282>/Switch1' incorporates:
     *  Constant: '<S336>/Calib'
     *  Constant: '<S337>/Calib'
     *  Logic: '<S282>/Logical2'
     */
    if (KeGENR_b_OvrdEolTesting)
    {
        rtb_Logical2_dg = KeGENR_b_OvrdEolTestingOvrd;
    }
    else
    {
        rtb_Logical2_dg = !VeGENR_b_Eol_ActiveTestSig1;
    }

    /* End of Switch: '<S282>/Switch1' */

    /* Switch: '<S279>/Switch2' incorporates:
     *  Logic: '<S279>/Logical1'
     *  Logic: '<S279>/Logical2'
     *  Logic: '<S279>/Logical3'
     *  Logic: '<S279>/Logical4'
     *  Logic: '<S279>/Logical9'
     */
    if (((((((((((rtb_Logical2_dg && (VeGENR_b_HVBattCntctrCheck)) &&
                 (VeGENR_b_CurrVoltCheck)) && (VeGENR_b_OVUVPwrLimCheck)) &&
               ((!VeGENR_b_TestSignal4) && (!VeGENR_b_TestSignal5))) &&
              (VeGENR_b_APMEnblCheck)) && (VeGENR_b_EngineCrnkDisAPMCheck)) && (
             !VeGENR_b_GreenEng)) && (VeGENR_b_HoodAjarAllwBuck)) &&
            (!VeGENR_b_SysVoltHighFA)) && (VeGENR_b_APMEnbl_P1fVC_Mrg)) &&
            (VeGENR_b_APMEnbl_LoCMCPA_Mrg))
    {
        /* Switch: '<S279>/Switch2' incorporates:
         *  Constant: '<S306>/Constant'
         */
        VeGENR_e_ModeReq = CeGENR_e_OperBuckCV;
    }
    else
    {
        /* Switch: '<S279>/Switch2' incorporates:
         *  Constant: '<S307>/Constant'
         */
        VeGENR_e_ModeReq = CeGENR_e_Default;
    }

    /* End of Switch: '<S279>/Switch2' */

    /* RelationalOperator: '<S12>/Comparison2' incorporates:
     *  Constant: '<S407>/Constant'
     */
    rtb_TmpSignalConversionAtVeINVR_b_P1_CAN = (((uint32)
        rtb_TmpSignalConversionAtVeIDCR_e_stMode) == CeGENR_e_OperMode_Off);

    /* Outputs for Atomic SubSystem: '<S12>/Turn On Delay Time2' */
    /* Outputs for Atomic SubSystem: '<S442>/EdgeRising' */
    /* Logic: '<S452>/AND' incorporates:
     *  Logic: '<S452>/OR1'
     *  UnitDelay: '<S452>/Unit Delay'
     */
    rtb_AND_fp = (rtb_TmpSignalConversionAtVeINVR_b_P1_CAN &&
                  (!GENR_ac_DW.UnitDelay_DSTATE_ny));

    /* Update for UnitDelay: '<S452>/Unit Delay' */
    GENR_ac_DW.UnitDelay_DSTATE_ny = rtb_TmpSignalConversionAtVeINVR_b_P1_CAN;

    /* End of Outputs for SubSystem: '<S442>/EdgeRising' */

    /* Logic: '<S442>/OR1' incorporates:
     *  Logic: '<S12>/Logical1'
     */
    rtb_Logical2_dg = !rtb_TmpSignalConversionAtVeINVR_b_P1_CAN;

    /* Switch: '<S442>/Switch1' incorporates:
     *  Constant: '<S431>/Calib'
     *  Constant: '<S442>/Constant Value1'
     *  Logic: '<S442>/OR'
     *  Logic: '<S442>/OR1'
     *  MinMax: '<S442>/Minimum'
     *  Sum: '<S442>/Summation'
     *  UnitDelay: '<S442>/Unit Delay'
     */
    if (rtb_Logical2_dg || rtb_AND_fp)
    {
        GENR_ac_DW.UnitDelay_DSTATE_h4 = 0.0F;
    }
    else
    {
        GENR_ac_DW.UnitDelay_DSTATE_h4 = fminf(KeGENR_t_DbncTimeAPMFlt,
            GENR_ac_DW.UnitDelay_DSTATE_h4 + 0.05F);
    }

    /* End of Switch: '<S442>/Switch1' */

    /* Logic: '<S12>/Logical4' incorporates:
     *  Constant: '<S419>/Calib'
     *  Constant: '<S431>/Calib'
     *  Logic: '<S442>/AND'
     *  RelationalOperator: '<S442>/Greater  Than'
     *  UnitDelay: '<S442>/Unit Delay'
     */
    VeGENR_b_Fault1 = ((KeGENR_b_EnblAPMFailureMode) &&
                       (rtb_TmpSignalConversionAtVeINVR_b_P1_CAN &&
                        (GENR_ac_DW.UnitDelay_DSTATE_h4 >=
                         KeGENR_t_DbncTimeAPMFlt)));

    /* End of Outputs for SubSystem: '<S12>/Turn On Delay Time2' */

    /* Switch: '<S12>/Switch4' incorporates:
     *  Constant: '<S427>/Calib'
     */
    if (KeGENR_b_UseModeRqMod)
    {
        /* RelationalOperator: '<S12>/Comparison12' incorporates:
         *  Switch: '<S12>/Switch2'
         *  UnitDelay: '<S12>/Unit Delay'
         */
        rtb_VeGENR_e_ModeReq_New_SF = GENR_ac_DW.UnitDelay_DSTATE_fi0;

        /* Switch: '<S12>/Switch2' incorporates:
         *  Constant: '<S412>/Constant'
         *  RelationalOperator: '<S12>/Comparison12'
         */
        if (((uint32)rtb_VeGENR_e_ModeReq_New_SF) == CeGENR_e_OperMode_Off)
        {
            /* Switch: '<S12>/Switch4' incorporates:
             *  Constant: '<S413>/Constant'
             */
            VeGENR_e_ModeRq_Mod = CeGENR_e_Default;
        }
        else
        {
            /* Switch: '<S12>/Switch4' */
            VeGENR_e_ModeRq_Mod = rtb_VeGENR_e_ModeReq_New_SF;
        }
    }
    else
    {
        /* Switch: '<S12>/Switch4' incorporates:
         *  UnitDelay: '<S12>/Unit Delay'
         */
        VeGENR_e_ModeRq_Mod = GENR_ac_DW.UnitDelay_DSTATE_fi0;
    }

    /* End of Switch: '<S12>/Switch4' */

    /* Logic: '<S12>/Logical' incorporates:
     *  RelationalOperator: '<S12>/Comparison5'
     *  Switch: '<S12>/Switch4'
     */
    rtb_Logical2_dg = (rtb_Logical2_dg &&
                       (rtb_TmpSignalConversionAtVeIDCR_e_stMode !=
                        VeGENR_e_ModeRq_Mod));

    /* Outputs for Atomic SubSystem: '<S12>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S440>/EdgeRising' */
    /* Logic: '<S450>/AND' incorporates:
     *  Logic: '<S450>/OR1'
     *  UnitDelay: '<S450>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeINVR_b_P1_CAN = (rtb_Logical2_dg &&
        (!GENR_ac_DW.UnitDelay_DSTATE_an));

    /* Update for UnitDelay: '<S450>/Unit Delay' */
    GENR_ac_DW.UnitDelay_DSTATE_an = rtb_Logical2_dg;

    /* End of Outputs for SubSystem: '<S440>/EdgeRising' */

    /* Switch: '<S440>/Switch1' incorporates:
     *  Constant: '<S436>/Calib'
     *  Constant: '<S440>/Constant Value1'
     *  Logic: '<S440>/OR'
     *  Logic: '<S440>/OR1'
     *  MinMax: '<S440>/Minimum'
     *  Sum: '<S440>/Summation'
     *  UnitDelay: '<S440>/Unit Delay'
     */
    if ((!rtb_Logical2_dg) || rtb_TmpSignalConversionAtVeINVR_b_P1_CAN)
    {
        GENR_ac_DW.UnitDelay_DSTATE_m0 = 0.0F;
    }
    else
    {
        GENR_ac_DW.UnitDelay_DSTATE_m0 = fminf(KeGENR_t_DbncTimeMdMismatch,
            GENR_ac_DW.UnitDelay_DSTATE_m0 + 0.05F);
    }

    /* End of Switch: '<S440>/Switch1' */
    /* End of Outputs for SubSystem: '<S12>/Turn On Delay Time' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' */

    /* Inport: '<Root>/VeIDCR_e_APM_FailureModeStatus' */
    (void)Rte_Read_VeIDCR_e_APM_FailureModeStatus_Value(&tmpRead_4);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' incorporates:
     *  SubSystem: '<Root>/GENR_MedTEF'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/GENC_CntrlAPM'
     */
    /* Outputs for Atomic SubSystem: '<S12>/Turn On Delay Time' */
    /* Logic: '<S12>/Logical5' incorporates:
     *  Constant: '<S422>/Calib'
     *  Constant: '<S436>/Calib'
     *  Logic: '<S440>/AND'
     *  RelationalOperator: '<S440>/Greater  Than'
     *  UnitDelay: '<S440>/Unit Delay'
     */
    VeGENR_b_Fault2 = ((KeGENR_b_EnblFltModeMismatch) && (rtb_Logical2_dg &&
                        (GENR_ac_DW.UnitDelay_DSTATE_m0 >=
                         KeGENR_t_DbncTimeMdMismatch)));

    /* End of Outputs for SubSystem: '<S12>/Turn On Delay Time' */

    /* RelationalOperator: '<S12>/Comparison1' incorporates:
     *  Constant: '<S409>/Constant'
     *  Inport: '<Root>/VeIDCR_e_APM_FailureModeStatus'
     */
    rtb_Logical2_dg = (((uint32)tmpRead_4) == CeGENR_e_FailureMode);

    /* Outputs for Atomic SubSystem: '<S12>/Turn On Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S441>/EdgeRising' */
    /* Logic: '<S451>/AND' incorporates:
     *  Logic: '<S451>/OR1'
     *  UnitDelay: '<S451>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeINVR_b_P1_CAN = (rtb_Logical2_dg &&
        (!GENR_ac_DW.UnitDelay_DSTATE_ib));

    /* Update for UnitDelay: '<S451>/Unit Delay' */
    GENR_ac_DW.UnitDelay_DSTATE_ib = rtb_Logical2_dg;

    /* End of Outputs for SubSystem: '<S441>/EdgeRising' */

    /* Switch: '<S441>/Switch1' incorporates:
     *  Constant: '<S434>/Calib'
     *  Constant: '<S441>/Constant Value1'
     *  Logic: '<S441>/OR'
     *  Logic: '<S441>/OR1'
     *  MinMax: '<S441>/Minimum'
     *  Sum: '<S441>/Summation'
     *  UnitDelay: '<S441>/Unit Delay'
     */
    if ((!rtb_Logical2_dg) || rtb_TmpSignalConversionAtVeINVR_b_P1_CAN)
    {
        GENR_ac_DW.UnitDelay_DSTATE_ek = 0.0F;
    }
    else
    {
        GENR_ac_DW.UnitDelay_DSTATE_ek = fminf(KeGENR_t_DbncTimeFailureModeSts,
            GENR_ac_DW.UnitDelay_DSTATE_ek + 0.05F);
    }

    /* End of Switch: '<S441>/Switch1' */
    /* End of Outputs for SubSystem: '<S12>/Turn On Delay Time1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' */

    /* Inport: '<Root>/VeIDCR_e_APM_FailureReason' */
    (void)Rte_Read_VeIDCR_e_APM_FailureReason_Value(&tmpRead_3);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' incorporates:
     *  SubSystem: '<Root>/GENR_MedTEF'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/GENC_CntrlAPM'
     */
    /* Outputs for Atomic SubSystem: '<S12>/Turn On Delay Time1' */
    /* Logic: '<S12>/Logical6' incorporates:
     *  Constant: '<S420>/Calib'
     *  Constant: '<S434>/Calib'
     *  Logic: '<S441>/AND'
     *  RelationalOperator: '<S441>/Greater  Than'
     *  UnitDelay: '<S441>/Unit Delay'
     */
    VeGENR_b_Fault3 = ((KeGENR_b_EnblAPM_FailureMode) && (rtb_Logical2_dg &&
                        (GENR_ac_DW.UnitDelay_DSTATE_ek >=
                         KeGENR_t_DbncTimeFailureModeSts)));

    /* End of Outputs for SubSystem: '<S12>/Turn On Delay Time1' */

    /* RelationalOperator: '<S12>/Comparison3' incorporates:
     *  Constant: '<S406>/Constant'
     *  Inport: '<Root>/VeIDCR_e_APM_FailureReason'
     */
    rtb_Logical2_dg = (CeGENR_e_NoFailure != ((uint32)tmpRead_3));

    /* Outputs for Atomic SubSystem: '<S12>/Turn On Delay Time3' */
    /* Outputs for Atomic SubSystem: '<S443>/EdgeRising' */
    /* Logic: '<S453>/AND' incorporates:
     *  Logic: '<S453>/OR1'
     *  UnitDelay: '<S453>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeINVR_b_P1_CAN = (rtb_Logical2_dg &&
        (!GENR_ac_DW.UnitDelay_DSTATE_im));

    /* Update for UnitDelay: '<S453>/Unit Delay' */
    GENR_ac_DW.UnitDelay_DSTATE_im = rtb_Logical2_dg;

    /* End of Outputs for SubSystem: '<S443>/EdgeRising' */

    /* Switch: '<S443>/Switch1' incorporates:
     *  Constant: '<S433>/Calib'
     *  Constant: '<S443>/Constant Value1'
     *  Logic: '<S443>/OR'
     *  Logic: '<S443>/OR1'
     *  MinMax: '<S443>/Minimum'
     *  Sum: '<S443>/Summation'
     *  UnitDelay: '<S443>/Unit Delay'
     */
    if ((!rtb_Logical2_dg) || rtb_TmpSignalConversionAtVeINVR_b_P1_CAN)
    {
        GENR_ac_DW.UnitDelay_DSTATE_g5 = 0.0F;
    }
    else
    {
        GENR_ac_DW.UnitDelay_DSTATE_g5 = fminf(KeGENR_t_DbncTimeFailurRsn,
            GENR_ac_DW.UnitDelay_DSTATE_g5 + 0.05F);
    }

    /* End of Switch: '<S443>/Switch1' */
    /* End of Outputs for SubSystem: '<S12>/Turn On Delay Time3' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' */

    /* Inport: '<Root>/VeIDCR_e_APM_FailureType' */
    (void)Rte_Read_VeIDCR_e_APM_FailureType_Value(&tmpRead_5);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' incorporates:
     *  SubSystem: '<Root>/GENR_MedTEF'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/GENC_CntrlAPM'
     */
    /* Outputs for Atomic SubSystem: '<S12>/Turn On Delay Time3' */
    /* Logic: '<S12>/Logical7' incorporates:
     *  Constant: '<S421>/Calib'
     *  Constant: '<S433>/Calib'
     *  Logic: '<S443>/AND'
     *  RelationalOperator: '<S443>/Greater  Than'
     *  UnitDelay: '<S443>/Unit Delay'
     */
    VeGENR_b_Fault4 = ((KeGENR_b_EnblAPM_FailureRsn) && (rtb_Logical2_dg &&
                        (GENR_ac_DW.UnitDelay_DSTATE_g5 >=
                         KeGENR_t_DbncTimeFailurRsn)));

    /* End of Outputs for SubSystem: '<S12>/Turn On Delay Time3' */

    /* Logic: '<S12>/Logical14' incorporates:
     *  Constant: '<S410>/Constant'
     *  Constant: '<S411>/Constant'
     *  RelationalOperator: '<S12>/Comparison10'
     *  RelationalOperator: '<S12>/Comparison9'
     */
    rtb_AND_fp = ((CeGENR_e_FailureType_ChrgngInhibited == ((uint32)tmpRead_5)) ||
                  (((uint32)tmpRead_5) == CeGENR_e_FailureType_SNA));

    /* Outputs for Atomic SubSystem: '<S12>/Turn On Delay Time8' */
    /* Outputs for Atomic SubSystem: '<S448>/EdgeRising' */
    /* Logic: '<S458>/AND' incorporates:
     *  Logic: '<S458>/OR1'
     *  UnitDelay: '<S458>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeINVR_b_P1_CAN = (rtb_AND_fp &&
        (!GENR_ac_DW.UnitDelay_DSTATE_nb));

    /* Update for UnitDelay: '<S458>/Unit Delay' */
    GENR_ac_DW.UnitDelay_DSTATE_nb = rtb_AND_fp;

    /* End of Outputs for SubSystem: '<S448>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S17>/If Action Subsystem' */
    /* Outputs for Atomic SubSystem: '<S460>/Turn On Delay Time2' */
    /* Logic: '<S448>/OR1' incorporates:
     *  Logic: '<S473>/OR1'
     */
    rtb_Logical2_dg = !rtb_AND_fp;

    /* End of Outputs for SubSystem: '<S460>/Turn On Delay Time2' */
    /* End of Outputs for SubSystem: '<S17>/If Action Subsystem' */

    /* Switch: '<S448>/Switch1' incorporates:
     *  Constant: '<S435>/Calib'
     *  Constant: '<S448>/Constant Value1'
     *  Logic: '<S448>/OR'
     *  Logic: '<S448>/OR1'
     *  MinMax: '<S448>/Minimum'
     *  Sum: '<S448>/Summation'
     *  UnitDelay: '<S448>/Unit Delay'
     */
    if (rtb_Logical2_dg || rtb_TmpSignalConversionAtVeINVR_b_P1_CAN)
    {
        GENR_ac_DW.UnitDelay_DSTATE_a = 0.0F;
    }
    else
    {
        GENR_ac_DW.UnitDelay_DSTATE_a = fminf(KeGENR_t_DbncTimeFailureType,
            GENR_ac_DW.UnitDelay_DSTATE_a + 0.05F);
    }

    /* End of Switch: '<S448>/Switch1' */
    /* End of Outputs for SubSystem: '<S12>/Turn On Delay Time8' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' */

    /* Inport: '<Root>/VeIDCR_U_APM_HvVsetPFdbk' */
    (void)Rte_Read_VeIDCR_U_APM_HvVsetPFdbk_Value(&tmpRead_2);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' incorporates:
     *  SubSystem: '<Root>/GENR_MedTEF'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/GENC_CntrlAPM'
     */
    /* Outputs for Atomic SubSystem: '<S12>/Turn On Delay Time8' */
    /* Logic: '<S12>/Logical15' incorporates:
     *  Constant: '<S426>/Calib'
     *  Constant: '<S435>/Calib'
     *  Logic: '<S448>/AND'
     *  RelationalOperator: '<S448>/Greater  Than'
     *  UnitDelay: '<S448>/Unit Delay'
     */
    VeGENR_b_Fault5 = ((KeGENR_b_UseFailureType) && (rtb_AND_fp &&
                        (GENR_ac_DW.UnitDelay_DSTATE_a >=
                         KeGENR_t_DbncTimeFailureType)));

    /* End of Outputs for SubSystem: '<S12>/Turn On Delay Time8' */

    /* Logic: '<S12>/Logical3' */
    VeGENR_b_FailureLV = (((((VeGENR_b_Fault1) || (VeGENR_b_Fault2)) ||
                            (VeGENR_b_Fault3)) || (VeGENR_b_Fault4)) ||
                          (VeGENR_b_Fault5));

    /* Logic: '<S21>/Logical1' incorporates:
     *  Constant: '<S29>/Constant'
     *  Constant: '<S30>/Constant'
     *  Constant: '<S31>/Calib'
     *  Constant: '<S32>/Calib'
     *  Logic: '<S21>/Logical'
     *  Logic: '<S21>/Logical2'
     *  Logic: '<S21>/Logical3'
     *  RelationalOperator: '<S21>/Comparison1'
     *  RelationalOperator: '<S21>/Comparison3'
     *  Switch: '<S279>/Switch2'
     */
    VeGENR_b_AltModeActive = ((((((uint32)VeGENR_e_ModeReq) == CeGENR_e_Default)
        && (((uint32)VeGENR_e_HV_BatCntctrStat) == CeHVTR_e_Open)) &&
        ((!VeGENR_b_FailureLV) || (!KeGENR_b_AltModeFailureDis))) ||
        (KeGENR_b_AlternatorMode));

    /* Outputs for Atomic SubSystem: '<S8>/Boost_Func' */
    /* Sum: '<S22>/Sum1' incorporates:
     *  Constant: '<S36>/Calib'
     */
    rtb_Switch_he4 = tmpRead_2 - KeGENR_U_APM_VdcHvSetP;

    /* Outputs for Atomic SubSystem: '<S22>/ClosedInterval' */
    /* Logic: '<S33>/Logical Operator' incorporates:
     *  Constant: '<S37>/Calib'
     *  Constant: '<S38>/Calib'
     *  RelationalOperator: '<S33>/Relatonal Operator'
     *  RelationalOperator: '<S33>/Relatonal Operator1'
     */
    VeGENR_b_HVFdbkReceived = ((rtb_Switch_he4 >= KeGENR_U_VdcHVSpNegDiff) &&
        (rtb_Switch_he4 <= KeGENR_U_VdcHVSpPosDiff));

    /* End of Outputs for SubSystem: '<S22>/ClosedInterval' */

    /* Sum: '<S22>/Sum4' incorporates:
     *  Constant: '<S36>/Calib'
     */
    rtb_Switch_he4 = rtb_TmpSignalConversionAtVeIDCR_U_APM_HV -
        KeGENR_U_APM_VdcHvSetP;

    /* Outputs for Atomic SubSystem: '<S22>/ClosedInterval3' */
    /* Logic: '<S34>/Logical Operator' incorporates:
     *  Constant: '<S37>/Calib'
     *  Constant: '<S38>/Calib'
     *  RelationalOperator: '<S34>/Relatonal Operator'
     *  RelationalOperator: '<S34>/Relatonal Operator1'
     */
    VeGENR_b_HVFdbkMet = ((rtb_Switch_he4 >= KeGENR_U_VdcHVSpNegDiff) &&
                          (rtb_Switch_he4 <= KeGENR_U_VdcHVSpPosDiff));

    /* End of Outputs for SubSystem: '<S22>/ClosedInterval3' */

    /* Logic: '<S22>/Logical2' incorporates:
     *  Constant: '<S35>/Constant'
     *  Constant: '<S39>/Calib'
     *  Constant: '<S40>/Calib'
     *  Constant: '<S41>/Calib'
     *  Logic: '<S22>/Logical1'
     *  Logic: '<S22>/Logical3'
     *  Logic: '<S22>/Logical4'
     *  RelationalOperator: '<S22>/Comparison4'
     */
    VeGENR_b_APM_BoostCompleteO = ((((((uint32)
        rtb_TmpSignalConversionAtVeIDCR_e_stMode) == CeGENR_e_OperBoost) &&
        ((VeGENR_b_HVFdbkReceived) || (KeGENR_b_Boost_One))) &&
        ((VeGENR_b_HVFdbkMet) || (KeGENR_b_Boost_Two))) || (KeGENR_b_Boost_Three));

    /* End of Outputs for SubSystem: '<S8>/Boost_Func' */

    /* Chart: '<S8>/Stateflow Chart' incorporates:
     *  Gain: '<S27>/Gain'
     *  Switch: '<S279>/Switch2'
     *  Switch: '<S6>/Switch3'
     */
    /* Gateway: GENR_MedTEF/GENC_CntrlAPM/Alternator_Mode/Stateflow
       Chart */
    /* During: GENR_MedTEF/GENC_CntrlAPM/Alternator_Mode/Stateflow
       Chart */
    if (((uint32)GENR_ac_DW.is_active_c111_GENR_ac) == 0U)
    {
        /* Entry: GENR_MedTEF/GENC_CntrlAPM/Alternator_Mode/Stateflow
           Chart */
        GENR_ac_DW.is_active_c111_GENR_ac = 1U;

        /* Entry Internal: GENR_MedTEF/GENC_CntrlAPM/Alternator_Mode/Stateflow
           Chart */
        /* Transition: '<S28>:8' */
        GENR_ac_DW.is_c111_GENR_ac = GENR_ac_IN_NormalMode;

        /* Entry 'NormalMode': '<S28>:1' */
        rtb_VeGENR_e_ModeReq_New_SF = VeGENR_e_ModeReq;
    }
    else if (((sint32)GENR_ac_DW.is_c111_GENR_ac) == 1)
    {
        /* During 'AlternatorMode': '<S28>:7' */
        if (!VeGENR_b_AltModeActive)
        {
            /* Transition: '<S28>:12' */
            /* Exit Internal 'AlternatorMode': '<S28>:7' */
            GENR_ac_DW.is_AlternatorMode = GENR_ac_IN_NO_ACTIVE_CHILD;
            GENR_ac_DW.is_c111_GENR_ac = GENR_ac_IN_NormalMode;

            /* Entry 'NormalMode': '<S28>:1' */
            rtb_VeGENR_e_ModeReq_New_SF = VeGENR_e_ModeReq;
        }
        else
        {
            switch (GENR_ac_DW.is_AlternatorMode)
            {
              case GENR_ac_IN_Boost:
                /* During 'Boost': '<S28>:22' */
                if (((uint32)VeGENR_e_OperMode_HPMR) == CeHPMR_e_Idle)
                {
                    /* Transition: '<S28>:24' */
                    GENR_ac_DW.is_AlternatorMode = GENR_ac_IN_Idle;

                    /* Entry 'Idle': '<S28>:21' */
                    rtb_VeGENR_e_ModeReq_New_SF = CeGENR_e_Default;
                }
                else
                {
                    rtb_VeGENR_e_ModeReq_New_SF = CeGENR_e_OperBoost;
                }
                break;

              case GENR_ac_IN_Buck_Sp:
                /* During 'Buck_Sp': '<S28>:23' */
                if (((uint32)VeGENR_e_OperMode_HPMR) == CeHPMR_e_Idle)
                {
                    /* Transition: '<S28>:27' */
                    GENR_ac_DW.is_AlternatorMode = GENR_ac_IN_Idle;

                    /* Entry 'Idle': '<S28>:21' */
                    rtb_VeGENR_e_ModeReq_New_SF = CeGENR_e_Default;
                }
                else
                {
                    rtb_VeGENR_e_ModeReq_New_SF = CeGENR_e_OperBuckSpecial;
                }
                break;

              default:
                /* During 'Idle': '<S28>:21' */
                if ((((uint32)VeGENR_e_OperMode_HPMR) == CeHPMR_e_Boost) &&
                        (((uint32)rtb_TmpSignalConversionAtVeIDCR_e_stMode) ==
                         CeGENR_e_Default))
                {
                    /* Transition: '<S28>:25' */
                    GENR_ac_DW.is_AlternatorMode = GENR_ac_IN_Boost;

                    /* Entry 'Boost': '<S28>:22' */
                    rtb_VeGENR_e_ModeReq_New_SF = CeGENR_e_OperBoost;
                }
                else if ((((uint32)VeGENR_e_OperMode_HPMR) == CeHPMR_e_Buck_Spcl)
                         && (((uint32)rtb_TmpSignalConversionAtVeIDCR_e_stMode) ==
                             CeGENR_e_Default))
                {
                    /* Transition: '<S28>:26' */
                    GENR_ac_DW.is_AlternatorMode = GENR_ac_IN_Buck_Sp;

                    /* Entry 'Buck_Sp': '<S28>:23' */
                    rtb_VeGENR_e_ModeReq_New_SF = CeGENR_e_OperBuckSpecial;
                }
                else
                {
                    rtb_VeGENR_e_ModeReq_New_SF = CeGENR_e_Default;
                }
                break;
            }
        }
    }
    else
    {
        /* During 'NormalMode': '<S28>:1' */
        if (VeGENR_b_AltModeActive)
        {
            /* Transition: '<S28>:11' */
            GENR_ac_DW.is_c111_GENR_ac = GENR_ac_IN_AlternatorMode;

            /* Entry Internal 'AlternatorMode': '<S28>:7' */
            /* Transition: '<S28>:9' */
            GENR_ac_DW.is_AlternatorMode = GENR_ac_IN_Idle;

            /* Entry 'Idle': '<S28>:21' */
            rtb_VeGENR_e_ModeReq_New_SF = CeGENR_e_Default;
        }
        else
        {
            rtb_VeGENR_e_ModeReq_New_SF = VeGENR_e_ModeReq;
        }
    }

    /* End of Chart: '<S8>/Stateflow Chart' */

    /* Sum: '<S43>/Sum2' */
    rtb_Switch_he4 = VeGENR_U_12VBattVolt -
        rtb_TmpSignalConversionAtVeIDCR_U_APM_LV;

    /* Outputs for Atomic SubSystem: '<S43>/Protected Division' */
    /* Switch: '<S82>/Switch1' incorporates:
     *  Constant: '<S82>/Constant Value'
     *  Constant: '<S82>/Constant Value1'
     *  Constant: '<S82>/Constant Value2'
     *  Constant: '<S82>/Constant Value3'
     *  Logic: '<S82>/AND'
     *  RelationalOperator: '<S82>/Greater Than or Equal '
     *  RelationalOperator: '<S82>/Greater Than or Equal 1'
     *  RelationalOperator: '<S82>/Not Equal'
     *  RelationalOperator: '<S82>/Not Equal1'
     *  Switch: '<S82>/Switch2'
     *  Switch: '<S82>/Switch3'
     */
    if ((rtb_Switch_he4 != 0.0F) && (rtb_TmpSignalConversionAtVeIDCR_U_APM_LV !=
         0.0F))
    {
        /* Switch: '<S82>/Switch1' incorporates:
         *  Product: '<S82>/Division'
         */
        rtb_Switch_he4 /= rtb_TmpSignalConversionAtVeIDCR_U_APM_LV;
    }
    else if (rtb_Switch_he4 > 0.0F)
    {
        /* Switch: '<S82>/Switch2' incorporates:
         *  Constant: '<S82>/MAXFLOAT'
         *  Switch: '<S82>/Switch1'
         */
        rtb_Switch_he4 = 3.402823466E+38F;
    }
    else if (rtb_Switch_he4 < 0.0F)
    {
        /* Switch: '<S82>/Switch3' incorporates:
         *  Constant: '<S82>/MINFLOAT'
         *  Switch: '<S82>/Switch1'
         *  Switch: '<S82>/Switch2'
         */
        rtb_Switch_he4 = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S82>/Switch1' incorporates:
         *  Constant: '<S82>/Constant Value4'
         *  Switch: '<S82>/Switch2'
         *  Switch: '<S82>/Switch3'
         */
        rtb_Switch_he4 = 0.0F;
    }

    /* End of Switch: '<S82>/Switch1' */
    /* End of Outputs for SubSystem: '<S43>/Protected Division' */

    /* Outputs for Atomic SubSystem: '<S43>/Digital Lowpass Reset Enabled2' */
    /* Switch: '<S63>/Switch1' incorporates:
     *  Abs: '<S43>/Abs1'
     *  Constant: '<S43>/Constant Value1'
     *  Constant: '<S81>/Calib'
     *  Product: '<S43>/Product'
     *  Product: '<S63>/Multiplication'
     *  Sum: '<S63>/Subtraction'
     *  Sum: '<S63>/Summation'
     *  UnitDelay: '<S63>/Unit Delay'
     */
    GENR_ac_DW.UnitDelay_DSTATE_ki += (fabsf(rtb_Switch_he4 * 100.0F) -
        GENR_ac_DW.UnitDelay_DSTATE_ki) * KeGENR_k_LPF_Cooef4PctVoltDiff;

    /* End of Outputs for SubSystem: '<S43>/Digital Lowpass Reset Enabled2' */

    /* Logic: '<S66>/Logical Operator' incorporates:
     *  Constant: '<S66>/Constant1'
     *  Constant: '<S66>/Constant2'
     *  DataStoreRead: '<S66>/StatusByte_InvData_IDCM'
     *  RelationalOperator: '<S66>/Relational Operator1'
     *  RelationalOperator: '<S66>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S66>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S66>/Bitwise Operator2'
     */
    rtb_TmpSignalConversionAtVeINVR_b_P1_CAN = (((((sint32)
        GENR_ac_DW.StatusByte_InvData_IDCM) & 1) > 0) && ((((uint32)
        GENR_ac_DW.StatusByte_InvData_IDCM) & 64U) == 0U));

    /* Logic: '<S70>/Logical Operator' incorporates:
     *  Constant: '<S70>/Constant1'
     *  Constant: '<S70>/Constant2'
     *  DataStoreRead: '<S70>/StatusByte_LostCommIDCM'
     *  RelationalOperator: '<S70>/Relational Operator1'
     *  RelationalOperator: '<S70>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S70>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S70>/Bitwise Operator2'
     */
    rtb_Comparison2 = (((((sint32)GENR_ac_DW.StatusByte_LostCommIDCM) & 1) > 0) &&
                       ((((uint32)GENR_ac_DW.StatusByte_LostCommIDCM) & 64U) ==
                        0U));

    /* Logic: '<S43>/Logical7' incorporates:
     *  Constant: '<S65>/Constant1'
     *  Constant: '<S65>/Constant2'
     *  Constant: '<S71>/Constant1'
     *  Constant: '<S71>/Constant2'
     *  Constant: '<S7>/Constant1'
     *  Constant: '<S7>/Constant2'
     *  DataStoreRead: '<S65>/StatusByte_InvData_IDCM_CANC11'
     *  DataStoreRead: '<S71>/StatusByte_LostComm_IDCM_CANC11'
     *  Logic: '<S43>/Logical'
     *  Logic: '<S65>/Logical Operator'
     *  Logic: '<S71>/Logical Operator'
     *  Logic: '<S7>/Logical Operator'
     *  RelationalOperator: '<S65>/Relational Operator1'
     *  RelationalOperator: '<S65>/Relational Operator2'
     *  RelationalOperator: '<S71>/Relational Operator1'
     *  RelationalOperator: '<S71>/Relational Operator2'
     *  RelationalOperator: '<S7>/Relational Operator1'
     *  RelationalOperator: '<S7>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S65>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S65>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S71>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S71>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S7>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S7>/Bitwise Operator2'
     */
    VeGENR_b_Dual_CAN_DTC = ((((rtb_Comparison2 && (((((sint32)
        GENR_ac_DW.StatusByte_LostComm_IDCM_CANC11) & 1) > 0) && ((((uint32)
        GENR_ac_DW.StatusByte_LostComm_IDCM_CANC11) & 64U) == 0U))) ||
        (((((uint32)rtb_TmpSignalConversionAtVeDMAB_y_Status) & 1U) != 0U) &&
         ((((uint32)rtb_TmpSignalConversionAtVeDMAB_y_Status) & 64U) == 0U))) ||
        rtb_TmpSignalConversionAtVeINVR_b_P1_CAN) || (((((sint32)
        GENR_ac_DW.StatusByte_InvData_IDCM_CANC11) & 1) > 0) && ((((uint32)
        GENR_ac_DW.StatusByte_InvData_IDCM_CANC11) & 64U) == 0U)));

    /* Switch: '<S73>/Switch1' incorporates:
     *  Constant: '<S78>/Calib'
     *  Constant: '<S79>/Calib'
     *  Constant: '<S80>/Calib'
     *  Switch: '<S73>/Switch2'
     *  Switch: '<S73>/Switch3'
     */
    if (KeGENR_b_LOC_PPU)
    {
        /* Switch: '<S73>/Switch1' incorporates:
         *  Constant: '<S67>/Constant1'
         *  Constant: '<S67>/Constant2'
         *  DataStoreRead: '<S67>/StatusByte_LosCommBECM_A'
         *  Logic: '<S67>/Logical Operator'
         *  RelationalOperator: '<S67>/Relational Operator1'
         *  RelationalOperator: '<S67>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S67>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S67>/Bitwise Operator2'
         */
        rtb_TmpSignalConversionAtVeINVR_b_P1_CAN = (((((sint32)
            GENR_ac_DW.StatusByte_LosCommBECM_A) & 1) > 0) && ((((uint32)
            GENR_ac_DW.StatusByte_LosCommBECM_A) & 64U) == 0U));
    }
    else if (KeGENR_b_IDCM_Prsnt)
    {
        /* Switch: '<S73>/Switch2' incorporates:
         *  Logic: '<S43>/Logical5'
         *  Switch: '<S73>/Switch1'
         */
        rtb_TmpSignalConversionAtVeINVR_b_P1_CAN = (rtb_Comparison2 ||
            rtb_TmpSignalConversionAtVeINVR_b_P1_CAN);
    }
    else if (KeGENR_b_Dual_CAN)
    {
        /* Switch: '<S73>/Switch3' incorporates:
         *  Switch: '<S73>/Switch1'
         *  Switch: '<S73>/Switch2'
         */
        rtb_TmpSignalConversionAtVeINVR_b_P1_CAN = VeGENR_b_Dual_CAN_DTC;
    }
    else
    {
        /* Switch: '<S73>/Switch1' incorporates:
         *  Constant: '<S64>/Constant1'
         *  Constant: '<S64>/Constant2'
         *  Constant: '<S69>/Constant1'
         *  Constant: '<S69>/Constant2'
         *  DataStoreRead: '<S64>/StatusByte_InvData_APM'
         *  DataStoreRead: '<S69>/StatusByte_LostCommDCDC'
         *  Logic: '<S43>/Logical6'
         *  Logic: '<S64>/Logical Operator'
         *  Logic: '<S69>/Logical Operator'
         *  RelationalOperator: '<S64>/Relational Operator1'
         *  RelationalOperator: '<S64>/Relational Operator2'
         *  RelationalOperator: '<S69>/Relational Operator1'
         *  RelationalOperator: '<S69>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S64>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S64>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S69>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S69>/Bitwise Operator2'
         *  Switch: '<S73>/Switch2'
         *  Switch: '<S73>/Switch3'
         */
        rtb_TmpSignalConversionAtVeINVR_b_P1_CAN = ((((((sint32)
            GENR_ac_DW.StatusByte_LostCommDCDC) & 1) > 0) && ((((uint32)
            GENR_ac_DW.StatusByte_LostCommDCDC) & 64U) == 0U)) || (((((sint32)
            GENR_ac_DW.StatusByte_InvData_APM) & 1) > 0) && ((((uint32)
            GENR_ac_DW.StatusByte_InvData_APM) & 64U) == 0U)));
    }

    /* End of Switch: '<S73>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' */

    /* Inport: '<Root>/VeIDCR_b_IBS_BattVolt_FA' */
    (void)Rte_Read_VeIDCR_b_IBS_BattVolt_FA_Value(&rtb_Comparison);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' incorporates:
     *  SubSystem: '<Root>/GENR_MedTEF'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/GENC_CntrlAPM'
     */
    /* Outputs for IfAction SubSystem: '<S91>/If Action Subsystem' incorporates:
     *  ActionPort: '<S170>/Action Port'
     */
    /* If: '<S91>/If' incorporates:
     *  DataStoreRead: '<S68>/StatusByte_LostCommBCM'
     *  S-Function (sfix_bitop): '<S173>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S173>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S68>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S68>/Bitwise Operator2'
     */
    rtb_UnitDelay_gx_tmp = ((sint32)GENR_ac_DW.StatusByte_LostCommBCM) & 1;
    rtb_UnitDelay_gx_tmp_0 = ((uint32)GENR_ac_DW.StatusByte_LostCommBCM) & 64U;

    /* End of Outputs for SubSystem: '<S91>/If Action Subsystem' */

    /* Switch: '<S72>/Switch1' incorporates:
     *  Constant: '<S68>/Constant1'
     *  Constant: '<S68>/Constant2'
     *  Constant: '<S74>/Calib'
     *  Constant: '<S77>/Calib'
     *  Logic: '<S43>/Logical1'
     *  Logic: '<S43>/Logical2'
     *  Logic: '<S43>/Logical3'
     *  Logic: '<S43>/Logical4'
     *  Logic: '<S68>/Logical Operator'
     *  RelationalOperator: '<S43>/Comparison3'
     *  RelationalOperator: '<S68>/Relational Operator1'
     *  RelationalOperator: '<S68>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S68>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S68>/Bitwise Operator2'
     *  UnitDelay: '<S63>/Unit Delay'
     */
    if ((((((!rtb_TmpSignalConversionAtVeINVR_b_P1_CAN) &&
            (GENR_ac_DW.UnitDelay_DSTATE_ki >= KeGENR_Pct_MaxVoltDiff)) &&
            (!KeGENR_b_APM_Volt_NA)) || ((rtb_UnitDelay_gx_tmp > 0) &&
            (rtb_UnitDelay_gx_tmp_0 == 0U))) || rtb_Comparison) ||
            (!VeGENR_b_IBS_BattTemp_SgnlRcvd))
    {
        /* Switch: '<S72>/Switch2' incorporates:
         *  Constant: '<S76>/Calib'
         *  Logic: '<S43>/Logical10'
         *  Logic: '<S43>/Logical11'
         *  Logic: '<S43>/Logical9'
         *  RelationalOperator: '<S43>/Comparison1'
         *  RelationalOperator: '<S43>/Comparison2'
         *  Switch: '<S72>/Switch3'
         *  Switch: '<S72>/Switch4'
         */
        if (rtb_TmpSignalConversionAtVePMDR_U_BF1_Sy > KeGENR_U_MinBattFeedVolt)
        {
            /* Switch: '<S72>/Switch1' incorporates:
             *  Switch: '<S72>/Switch2'
             */
            VeGENR_U_12VBattVolt = rtb_TmpSignalConversionAtVePMDR_U_BF1_Sy;
        }
        else if (rtb_TmpSignalConversionAtVePMDR_U_BF2_Sy >
                 KeGENR_U_MinBattFeedVolt)
        {
            /* Switch: '<S72>/Switch3' incorporates:
             *  Switch: '<S72>/Switch1'
             */
            VeGENR_U_12VBattVolt = rtb_TmpSignalConversionAtVePMDR_U_BF2_Sy;
        }
        else if ((!rtb_TmpSignalConversionAtVeINVR_b_P1_CAN) &&
                 (!KeGENR_b_APM_Volt_NA))
        {
            /* Switch: '<S72>/Switch4' incorporates:
             *  Switch: '<S72>/Switch1'
             *  Switch: '<S72>/Switch3'
             */
            VeGENR_U_12VBattVolt = rtb_TmpSignalConversionAtVeIDCR_U_APM_LV;
        }
        else
        {
            /* Switch: '<S72>/Switch1' incorporates:
             *  Constant: '<S75>/Calib'
             *  Switch: '<S72>/Switch3'
             *  Switch: '<S72>/Switch4'
             */
            VeGENR_U_12VBattVolt = KeGENR_U_MaxSetPt;
        }

        /* End of Switch: '<S72>/Switch2' */
    }

    /* End of Switch: '<S72>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' */

    /* Inport: '<Root>/VeBPCR_b_HV_BatPackSOC_FA_Ovrd' */
    (void)Rte_Read_VeBPCR_b_HV_BatPackSOC_FA_Ovrd_Value(&rtb_Logical1_hj);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' incorporates:
     *  SubSystem: '<Root>/GENR_MedTEF'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/GENC_CntrlAPM'
     */
    /* RelationalOperator: '<S87>/Comparison' incorporates:
     *  Constant: '<S100>/Calib'
     */
    rtb_Comparison = (rtb_TmpSignalConversionAtVeHVTR_I_String >
                      KeGENR_I_DischCurrMin);

    /* Outputs for Atomic SubSystem: '<S87>/Turn Off Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S103>/EdgeFalling1' */
    /* Logic: '<S105>/AND' incorporates:
     *  Logic: '<S105>/OR1'
     *  UnitDelay: '<S105>/Unit Delay'
     */
    rtb_Comparison2 = ((!rtb_Comparison) && (GENR_ac_DW.UnitDelay_DSTATE_mm));

    /* Update for UnitDelay: '<S105>/Unit Delay' */
    GENR_ac_DW.UnitDelay_DSTATE_mm = rtb_Comparison;

    /* End of Outputs for SubSystem: '<S103>/EdgeFalling1' */

    /* Switch: '<S103>/Switch' incorporates:
     *  Constant: '<S99>/Calib'
     *  Sum: '<S103>/Summation'
     *  UnitDelay: '<S103>/Unit Delay'
     */
    if (rtb_Comparison2)
    {
        GENR_ac_DW.UnitDelay_DSTATE_f5 = KeGENR_Cnt_DbncDeratedSetPt_2;
    }
    else
    {
        /* Sum: '<S103>/Summation' incorporates:
         *  Constant: '<S103>/Constant Value'
         *  UnitDelay: '<S103>/Unit Delay'
         */
        tmp = ((sint32)GENR_ac_DW.UnitDelay_DSTATE_f5) - 1;
        if ((((sint32)GENR_ac_DW.UnitDelay_DSTATE_f5) - 1) < 0)
        {
            tmp = 0;
        }

        GENR_ac_DW.UnitDelay_DSTATE_f5 = (uint16)tmp;
    }

    /* End of Switch: '<S103>/Switch' */

    /* Logic: '<S103>/AND' incorporates:
     *  Constant: '<S103>/Constant Value2'
     *  RelationalOperator: '<S103>/Greater  Than'
     *  UnitDelay: '<S103>/Unit Delay'
     */
    rtb_Comparison = (rtb_Comparison || (((sint32)GENR_ac_DW.UnitDelay_DSTATE_f5)
                       > 0));

    /* End of Outputs for SubSystem: '<S87>/Turn Off Delay Sample' */

    /* Outputs for Atomic SubSystem: '<S87>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S104>/EdgeRising' */
    /* Logic: '<S106>/AND' incorporates:
     *  Logic: '<S106>/OR1'
     *  UnitDelay: '<S106>/Unit Delay'
     */
    rtb_Comparison2 = (rtb_Comparison && (!GENR_ac_DW.UnitDelay_DSTATE_nj));

    /* Update for UnitDelay: '<S106>/Unit Delay' */
    GENR_ac_DW.UnitDelay_DSTATE_nj = rtb_Comparison;

    /* End of Outputs for SubSystem: '<S104>/EdgeRising' */

    /* Switch: '<S104>/Switch1' incorporates:
     *  Constant: '<S104>/Constant Value'
     *  Constant: '<S104>/Constant Value1'
     *  Constant: '<S98>/Calib'
     *  Logic: '<S104>/OR'
     *  Logic: '<S104>/OR1'
     *  MinMax: '<S104>/Minimum'
     *  Sum: '<S104>/Summation'
     *  UnitDelay: '<S104>/Unit Delay'
     */
    if ((!rtb_Comparison) || rtb_Comparison2)
    {
        GENR_ac_DW.UnitDelay_DSTATE_cb = 0U;
    }
    else if (KeGENR_Cnt_DbncDeratedSetPt < ((uint16)(((uint32)
                GENR_ac_DW.UnitDelay_DSTATE_cb) + 1U)))
    {
        /* MinMax: '<S104>/Minimum' incorporates:
         *  Constant: '<S98>/Calib'
         */
        GENR_ac_DW.UnitDelay_DSTATE_cb = KeGENR_Cnt_DbncDeratedSetPt;
    }
    else
    {
        /* MinMax: '<S104>/Minimum' incorporates:
         *  Constant: '<S104>/Constant Value'
         *  Sum: '<S104>/Summation'
         *  UnitDelay: '<S104>/Unit Delay'
         */
        GENR_ac_DW.UnitDelay_DSTATE_cb = (uint16)(((uint32)
            GENR_ac_DW.UnitDelay_DSTATE_cb) + 1U);
    }

    /* End of Switch: '<S104>/Switch1' */

    /* Logic: '<S87>/Logical10' incorporates:
     *  Constant: '<S101>/Calib'
     *  Constant: '<S96>/Constant'
     *  Constant: '<S97>/Constant'
     *  Constant: '<S98>/Calib'
     *  Logic: '<S104>/AND'
     *  Logic: '<S87>/Logical1'
     *  Logic: '<S87>/Logical2'
     *  RelationalOperator: '<S104>/Greater  Than'
     *  RelationalOperator: '<S87>/Comparison1'
     *  RelationalOperator: '<S87>/Comparison5'
     *  UnitDelay: '<S104>/Unit Delay'
     */
    VeGENR_b_DerateSetPt = (((((((uint32)VeGENR_e_HV_BatCntctrStat) ==
        CeHVTR_e_Closed) && (!rtb_Logical1_hj)) && (rtb_Comparison &&
        (GENR_ac_DW.UnitDelay_DSTATE_cb >= KeGENR_Cnt_DbncDeratedSetPt))) &&
        ((((uint32)rtb_TmpSignalConversionAtVeIDCR_e_stMode) ==
          CeGENR_e_OperBuckCV) || (KeGENR_b_DerateOvrd))) &&
                            (VeGENR_b_InFieldMode));

    /* End of Outputs for SubSystem: '<S87>/Turn On Delay Sample' */

    /* If: '<S91>/If' incorporates:
     *  Constant: '<S171>/Calib'
     *  Constant: '<S230>/Constant'
     *  Constant: '<S232>/Calib'
     *  Constant: '<S234>/Calib'
     *  Constant: '<S236>/Calib'
     *  Logic: '<S229>/Logical Operator'
     *  Logic: '<S94>/Logical'
     *  Logic: '<S94>/Logical2'
     *  RelationalOperator: '<S229>/Relatonal Operator'
     *  RelationalOperator: '<S229>/Relatonal Operator1'
     *  RelationalOperator: '<S94>/Comparison4'
     *  Switch: '<S231>/Switch1'
     *  Switch: '<S231>/Switch2'
     */
    if (KeGENR_b_IsEVA)
    {
        /* Outputs for IfAction SubSystem: '<S91>/If Action Subsystem' incorporates:
         *  ActionPort: '<S170>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S170>/Hysteresis' */
        /* Switch: '<S174>/Switch1' incorporates:
         *  Constant: '<S174>/Constant Value'
         *  Constant: '<S179>/Calib'
         *  Constant: '<S180>/Calib'
         *  RelationalOperator: '<S174>/Greater  Than'
         *  RelationalOperator: '<S174>/Greater  Than1'
         *  UnitDelay: '<S174>/Unit Delay'
         */
        if (VeGENR_Pct_IBSSOC > KeGENR_Pct_IBS1_LowSOC_RSP)
        {
            GENR_ac_DW.UnitDelay_DSTATE_hqq = true;
        }
        else
        {
            GENR_ac_DW.UnitDelay_DSTATE_hqq = ((VeGENR_Pct_IBSSOC >=
                KeGENR_Pct_IBS1_LowSOC_LSP) && (GENR_ac_DW.UnitDelay_DSTATE_hqq));
        }

        /* End of Switch: '<S174>/Switch1' */
        /* End of Outputs for SubSystem: '<S170>/Hysteresis' */

        /* Logic: '<S170>/Logical1' incorporates:
         *  Constant: '<S172>/Constant1'
         *  Constant: '<S172>/Constant2'
         *  Constant: '<S173>/Constant1'
         *  Constant: '<S173>/Constant2'
         *  Constant: '<S181>/Calib'
         *  Constant: '<S183>/Calib'
         *  DataStoreRead: '<S172>/StatusByte_HiSpdCANCommBus'
         *  Logic: '<S172>/Logical Operator'
         *  Logic: '<S173>/Logical Operator'
         *  RelationalOperator: '<S170>/Comparison'
         *  RelationalOperator: '<S170>/Comparison1'
         *  RelationalOperator: '<S172>/Relational Operator1'
         *  RelationalOperator: '<S172>/Relational Operator2'
         *  RelationalOperator: '<S173>/Relational Operator1'
         *  RelationalOperator: '<S173>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S172>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S172>/Bitwise Operator2'
         */
        rtb_Logical1_hj = (((((rtb_UnitDelay_gx_tmp > 0) &&
                              (rtb_UnitDelay_gx_tmp_0 == 0U)) || (((((sint32)
            GENR_ac_DW.StatusByte_HiSpdCANCommBus) & 1) > 0) && ((((uint32)
            GENR_ac_DW.StatusByte_HiSpdCANCommBus) & 64U) == 0U))) ||
                            (rtb_TmpSignalConversionAtVeIDCR_T_IBS_Ba >
                             KeGENR_T_IBS1_Temp_Max)) || (VeGENR_T_IBS2_Temp >
                            KeGENR_T_IBS2_Temp_Max));

        /* Outputs for Atomic SubSystem: '<S170>/Turn On Delay Sample' */
        /* Outputs for Atomic SubSystem: '<S188>/EdgeRising' */
        /* Logic: '<S191>/AND' incorporates:
         *  Logic: '<S191>/OR1'
         *  UnitDelay: '<S191>/Unit Delay'
         */
        rtb_Comparison = (rtb_Logical1_hj && (!GENR_ac_DW.UnitDelay_DSTATE_fu));

        /* Update for UnitDelay: '<S191>/Unit Delay' */
        GENR_ac_DW.UnitDelay_DSTATE_fu = rtb_Logical1_hj;

        /* End of Outputs for SubSystem: '<S188>/EdgeRising' */

        /* Switch: '<S188>/Switch1' incorporates:
         *  Constant: '<S177>/Calib'
         *  Constant: '<S188>/Constant Value'
         *  Constant: '<S188>/Constant Value1'
         *  Logic: '<S188>/OR'
         *  Logic: '<S188>/OR1'
         *  MinMax: '<S188>/Minimum'
         *  Sum: '<S188>/Summation'
         *  UnitDelay: '<S188>/Unit Delay'
         */
        if ((!rtb_Logical1_hj) || rtb_Comparison)
        {
            GENR_ac_DW.UnitDelay_DSTATE_kh = 0U;
        }
        else if (KeGENR_Cnt_DbncSafeSetP < ((uint16)(((uint32)
                    GENR_ac_DW.UnitDelay_DSTATE_kh) + 1U)))
        {
            /* MinMax: '<S188>/Minimum' incorporates:
             *  Constant: '<S177>/Calib'
             */
            GENR_ac_DW.UnitDelay_DSTATE_kh = KeGENR_Cnt_DbncSafeSetP;
        }
        else
        {
            /* MinMax: '<S188>/Minimum' incorporates:
             *  Constant: '<S188>/Constant Value'
             *  Sum: '<S188>/Summation'
             *  UnitDelay: '<S188>/Unit Delay'
             */
            GENR_ac_DW.UnitDelay_DSTATE_kh = (uint16)(((uint32)
                GENR_ac_DW.UnitDelay_DSTATE_kh) + 1U);
        }

        /* End of Switch: '<S188>/Switch1' */

        /* Logic: '<S188>/AND' incorporates:
         *  Constant: '<S177>/Calib'
         *  RelationalOperator: '<S188>/Greater  Than'
         *  UnitDelay: '<S188>/Unit Delay'
         */
        rtb_Logical1_hj = (rtb_Logical1_hj && (GENR_ac_DW.UnitDelay_DSTATE_kh >=
                            KeGENR_Cnt_DbncSafeSetP));

        /* End of Outputs for SubSystem: '<S170>/Turn On Delay Sample' */

        /* Outputs for Atomic SubSystem: '<S170>/Turn Off Delay Sample' */
        /* Outputs for Atomic SubSystem: '<S187>/EdgeFalling1' */
        /* Logic: '<S190>/AND' incorporates:
         *  Logic: '<S190>/OR1'
         *  UnitDelay: '<S190>/Unit Delay'
         */
        rtb_Comparison = ((!rtb_Logical1_hj) && (GENR_ac_DW.UnitDelay_DSTATE_jl));

        /* Update for UnitDelay: '<S190>/Unit Delay' */
        GENR_ac_DW.UnitDelay_DSTATE_jl = rtb_Logical1_hj;

        /* End of Outputs for SubSystem: '<S187>/EdgeFalling1' */

        /* Switch: '<S187>/Switch' incorporates:
         *  Constant: '<S178>/Calib'
         *  Sum: '<S187>/Summation'
         *  UnitDelay: '<S187>/Unit Delay'
         */
        if (rtb_Comparison)
        {
            GENR_ac_DW.UnitDelay_DSTATE_br = KeGENR_Cnt_DelaySafeSetP;
        }
        else
        {
            /* Sum: '<S187>/Summation' incorporates:
             *  Constant: '<S187>/Constant Value'
             *  UnitDelay: '<S187>/Unit Delay'
             */
            rtb_UnitDelay_gx_tmp = ((sint32)GENR_ac_DW.UnitDelay_DSTATE_br) - 1;
            if ((((sint32)GENR_ac_DW.UnitDelay_DSTATE_br) - 1) < 0)
            {
                rtb_UnitDelay_gx_tmp = 0;
            }

            GENR_ac_DW.UnitDelay_DSTATE_br = (uint16)rtb_UnitDelay_gx_tmp;
        }

        /* End of Switch: '<S187>/Switch' */

        /* Logic: '<S187>/AND' incorporates:
         *  Constant: '<S187>/Constant Value2'
         *  RelationalOperator: '<S187>/Greater  Than'
         *  UnitDelay: '<S187>/Unit Delay'
         */
        VeGENR_b_EnableSafeSetP = (rtb_Logical1_hj || (((sint32)
            GENR_ac_DW.UnitDelay_DSTATE_br) > 0));

        /* End of Outputs for SubSystem: '<S170>/Turn Off Delay Sample' */

        /* Logic: '<S170>/Logical2' incorporates:
         *  UnitDelay: '<S174>/Unit Delay'
         */
        rtb_Logical1_hj = !GENR_ac_DW.UnitDelay_DSTATE_hqq;

        /* Outputs for Atomic SubSystem: '<S170>/Turn On Delay Sample1' */
        /* Outputs for Atomic SubSystem: '<S189>/EdgeRising' */
        /* Logic: '<S192>/AND' incorporates:
         *  Logic: '<S192>/OR1'
         *  UnitDelay: '<S192>/Unit Delay'
         */
        rtb_Comparison = (rtb_Logical1_hj && (!GENR_ac_DW.UnitDelay_DSTATE_p3));

        /* Update for UnitDelay: '<S192>/Unit Delay' */
        GENR_ac_DW.UnitDelay_DSTATE_p3 = rtb_Logical1_hj;

        /* End of Outputs for SubSystem: '<S189>/EdgeRising' */

        /* Switch: '<S189>/Switch1' incorporates:
         *  Constant: '<S176>/Calib'
         *  Constant: '<S189>/Constant Value'
         *  Constant: '<S189>/Constant Value1'
         *  Logic: '<S189>/OR'
         *  Logic: '<S189>/OR1'
         *  MinMax: '<S189>/Minimum'
         *  Sum: '<S189>/Summation'
         *  UnitDelay: '<S189>/Unit Delay'
         */
        if ((!rtb_Logical1_hj) || rtb_Comparison)
        {
            GENR_ac_DW.UnitDelay_DSTATE_ga = 0U;
        }
        else if (KeGENR_Cnt_DbncIBS1_LowSOC < ((uint16)(((uint32)
                    GENR_ac_DW.UnitDelay_DSTATE_ga) + 1U)))
        {
            /* MinMax: '<S189>/Minimum' incorporates:
             *  Constant: '<S176>/Calib'
             */
            GENR_ac_DW.UnitDelay_DSTATE_ga = KeGENR_Cnt_DbncIBS1_LowSOC;
        }
        else
        {
            /* MinMax: '<S189>/Minimum' incorporates:
             *  Constant: '<S189>/Constant Value'
             *  Sum: '<S189>/Summation'
             *  UnitDelay: '<S189>/Unit Delay'
             */
            GENR_ac_DW.UnitDelay_DSTATE_ga = (uint16)(((uint32)
                GENR_ac_DW.UnitDelay_DSTATE_ga) + 1U);
        }

        /* End of Switch: '<S189>/Switch1' */

        /* Logic: '<S189>/AND' incorporates:
         *  Constant: '<S176>/Calib'
         *  RelationalOperator: '<S189>/Greater  Than'
         *  UnitDelay: '<S189>/Unit Delay'
         */
        VeGENR_b_IBS1_SOC_Low = (rtb_Logical1_hj &&
            (GENR_ac_DW.UnitDelay_DSTATE_ga >= KeGENR_Cnt_DbncIBS1_LowSOC));

        /* End of Outputs for SubSystem: '<S170>/Turn On Delay Sample1' */

        /* Switch: '<S175>/Switch1' incorporates:
         *  Switch: '<S175>/Switch2'
         */
        if (VeGENR_b_EnableSafeSetP)
        {
            /* Switch: '<S175>/Switch1' incorporates:
             *  Constant: '<S184>/Calib'
             */
            VeGENR_U_DualIBS_SetP = KeGENR_U_SafeSetP;
        }
        else if (VeGENR_b_IBS1_SOC_Low)
        {
            /* Switch: '<S175>/Switch2' incorporates:
             *  Lookup_n-D: '<S185>/Vector'
             *  SignalConversion generated from: '<S1>/VeIDCR_T_IBS_BattTemp'
             *  Switch: '<S175>/Switch1'
             */
            VeGENR_U_DualIBS_SetP = look1_iflf_binlca_16a
                (rtb_TmpSignalConversionAtVeIDCR_T_IBS_Ba, ((const float32 *)
                  &(KxGENR_U_TmpBasedSetP_LowSOC[0])), ((const float32 *)
                  &(KtGENR_U_TmpBasedSetP_LowSOC[0])), 9U);
        }
        else
        {
            /* Switch: '<S175>/Switch1' incorporates:
             *  Constant: '<S182>/Calib'
             *  Lookup_n-D: '<S186>/Vector'
             *  MinMax: '<S170>/MinMax1'
             *  Sum: '<S170>/Sum1'
             *  Switch: '<S175>/Switch2'
             *  Switch: '<S6>/Switch14'
             */
            VeGENR_U_DualIBS_SetP = look2_iflf_binlca_16a(VeGENR_Pct_IBSSOC,
                fmaxf(rtb_TmpSignalConversionAtVeIDCR_T_IBS_Ba,
                      VeGENR_T_IBS2_Temp - KeGENR_T_IBS2_Offset), ((const
                float32 *)&(KxGENR_U_TmpSOC_BasedSetP[0])), ((const float32 *)
                &(KyGENR_U_TmpSOC_BasedSetP[0])), ((const float32 *)
                &(KtGENR_U_TmpSOC_BasedSetP[0])), GENR_ac_ConstP.pooled7, 5U);
        }

        /* End of Switch: '<S175>/Switch1' */
        /* End of Outputs for SubSystem: '<S91>/If Action Subsystem' */

        /* Switch: '<S231>/Switch1' */
        VeGENR_U_SetPtSelect = VeGENR_U_DualIBS_SetP;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S94>/ClosedInterval' */
        if (((!KeGENR_b_OvrdEngineSetP) && (((uint32)
                rtb_TmpSignalConversionAtVeOBCR_e_Chargi) !=
                CeOBCR_e_ChargingSts_Charging)) && ((Switch12 >=
                KeGENR_U_MinGenRegulatorSetpoint) && (Switch12 <=
                KeGENR_U_MaxGenRegulatorSetpoint)))
        {
            /* Switch: '<S231>/Switch2' incorporates:
             *  Switch: '<S231>/Switch1'
             */
            VeGENR_U_SetPtSelect = Switch12;
        }
        else
        {
            /* Switch: '<S231>/Switch1' incorporates:
             *  Switch: '<S231>/Switch2'
             */
            VeGENR_U_SetPtSelect = VeGENR_U_SetPtDerating;
        }

        /* End of Outputs for SubSystem: '<S94>/ClosedInterval' */
    }

    /* Switch: '<S87>/Switch2' */
    if (VeGENR_b_DerateSetPt)
    {
        /* Switch: '<S87>/Switch2' incorporates:
         *  Lookup_n-D: '<S102>/Vector'
         *  Product: '<S87>/Product'
         *  Switch: '<S6>/Switch9'
         */
        VeGENR_U_VoltDroop_Test4 = VeGENR_U_SetPtSelect * look1_iflf_binlca_16a
            (VeGENR_Pct_HVBatPackSOC, ((const float32 *)
              &(KxGENR_k_SetPointFactor[0])), ((const float32 *)
              &(KtGENR_k_SetPointFactor[0])), 7U);
    }
    else
    {
        /* Switch: '<S87>/Switch2' */
        VeGENR_U_VoltDroop_Test4 = VeGENR_U_SetPtSelect;
    }

    /* End of Switch: '<S87>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S88>/Hysteresis' */
    /* Switch: '<S108>/Switch1' incorporates:
     *  Constant: '<S108>/Constant Value'
     *  Constant: '<S110>/Calib'
     *  Constant: '<S111>/Calib'
     *  RelationalOperator: '<S108>/Greater  Than'
     *  RelationalOperator: '<S108>/Greater  Than1'
     *  UnitDelay: '<S108>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeIDCR_T_IBS_Ba > KeGENR_T_IBSTempRSPThrshld)
    {
        GENR_ac_DW.UnitDelay_DSTATE_gc = true;
    }
    else
    {
        GENR_ac_DW.UnitDelay_DSTATE_gc =
            ((rtb_TmpSignalConversionAtVeIDCR_T_IBS_Ba >=
              KeGENR_T_IBSTempLSPThrshld) && (GENR_ac_DW.UnitDelay_DSTATE_gc));
    }

    /* End of Switch: '<S108>/Switch1' */
    /* End of Outputs for SubSystem: '<S88>/Hysteresis' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' */

    /* Inport: '<Root>/VeSTRR_e_HybStrtrSt' */
    (void)Rte_Read_VeSTRR_e_HybStrtrSt_Value(&tmpRead_0);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' incorporates:
     *  SubSystem: '<Root>/GENR_MedTEF'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/GENC_CntrlAPM'
     */
    /* MinMax: '<S95>/MinMax' incorporates:
     *  Constant: '<S243>/Calib'
     *  Lookup_n-D: '<S246>/Vector'
     *  SignalConversion generated from: '<S1>/VeIDCR_T_IBS_BattTemp'
     *  Sum: '<S95>/Sum1'
     */
    VeGENR_U_VoltDroop_Test3 = fmaxf(VeGENR_U_VoltDroop_Test4 -
        look1_iflf_binlca_16a(rtb_TmpSignalConversionAtVeIDCR_T_IBS_Ba, ((const
        float32 *)&(KxGENR_U_VltDroopDeltaStPt[0])), ((const float32 *)
        &(KtGENR_U_VltDroopDeltaStPt[0])), 4U), KeGENR_U_SetP_VoltageDroop);

    /* RelationalOperator: '<S95>/Comparison1' incorporates:
     *  Constant: '<S237>/Constant'
     *  Inport: '<Root>/VeSTRR_e_HybStrtrSt'
     */
    rtb_Logical1_hj = (((uint32)tmpRead_0) == CeSTRR_e_EngOffSt);

    /* Outputs for Atomic SubSystem: '<S95>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S247>/EdgeRising' */
    /* Logic: '<S248>/AND' incorporates:
     *  Logic: '<S248>/OR1'
     *  UnitDelay: '<S248>/Unit Delay'
     */
    rtb_Comparison = (rtb_Logical1_hj && (!GENR_ac_DW.UnitDelay_DSTATE_iq));

    /* Update for UnitDelay: '<S248>/Unit Delay' */
    GENR_ac_DW.UnitDelay_DSTATE_iq = rtb_Logical1_hj;

    /* End of Outputs for SubSystem: '<S247>/EdgeRising' */

    /* Switch: '<S247>/Switch1' incorporates:
     *  Constant: '<S239>/Calib'
     *  Constant: '<S247>/Constant Value'
     *  Constant: '<S247>/Constant Value1'
     *  Logic: '<S247>/OR'
     *  Logic: '<S247>/OR1'
     *  MinMax: '<S247>/Minimum'
     *  Sum: '<S247>/Summation'
     *  UnitDelay: '<S247>/Unit Delay'
     */
    if ((!rtb_Logical1_hj) || rtb_Comparison)
    {
        GENR_ac_DW.UnitDelay_DSTATE_oc = 0U;
    }
    else if (KeGENR_Cnt_VoltageDroopDbnc < ((uint16)(((uint32)
                GENR_ac_DW.UnitDelay_DSTATE_oc) + 1U)))
    {
        /* MinMax: '<S247>/Minimum' incorporates:
         *  Constant: '<S239>/Calib'
         */
        GENR_ac_DW.UnitDelay_DSTATE_oc = KeGENR_Cnt_VoltageDroopDbnc;
    }
    else
    {
        /* MinMax: '<S247>/Minimum' incorporates:
         *  Constant: '<S247>/Constant Value'
         *  Sum: '<S247>/Summation'
         *  UnitDelay: '<S247>/Unit Delay'
         */
        GENR_ac_DW.UnitDelay_DSTATE_oc = (uint16)(((uint32)
            GENR_ac_DW.UnitDelay_DSTATE_oc) + 1U);
    }

    /* End of Switch: '<S247>/Switch1' */
    /* End of Outputs for SubSystem: '<S95>/Turn On Delay Sample' */

    /* Product: '<S95>/Product' */
    rtb_Switch_he4 = rtb_TmpSignalConversionAtVeIDCR_U_APM_LV *
        rtb_TmpSignalConversionAtVeIDCR_I_APM_LV;

    /* Outputs for Atomic SubSystem: '<S95>/Hysteresis' */
    /* Switch: '<S238>/Switch1' incorporates:
     *  Constant: '<S238>/Constant Value'
     *  Constant: '<S240>/Calib'
     *  Constant: '<S241>/Calib'
     *  RelationalOperator: '<S238>/Greater  Than'
     *  RelationalOperator: '<S238>/Greater  Than1'
     *  UnitDelay: '<S238>/Unit Delay'
     */
    if (rtb_Switch_he4 > KeGENR_P_VoltDroop_RSP)
    {
        GENR_ac_DW.UnitDelay_DSTATE_hh = true;
    }
    else
    {
        GENR_ac_DW.UnitDelay_DSTATE_hh = ((rtb_Switch_he4 >=
            KeGENR_P_VoltDroop_LSP) && (GENR_ac_DW.UnitDelay_DSTATE_hh));
    }

    /* End of Switch: '<S238>/Switch1' */
    /* End of Outputs for SubSystem: '<S95>/Hysteresis' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' */

    /* Inport: '<Root>/VePMIR_b_TransAuxPumpTemp_FA' */
    (void)Rte_Read_VePMIR_b_TransAuxPumpTemp_FA_Value(&rtb_AND_ba);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' incorporates:
     *  SubSystem: '<Root>/GENR_MedTEF'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/GENC_CntrlAPM'
     */
    /* Logic: '<S95>/Logical2' incorporates:
     *  UnitDelay: '<S238>/Unit Delay'
     */
    VeGENR_U_VoltDroop_Test1 = !GENR_ac_DW.UnitDelay_DSTATE_hh;

    /* Outputs for Atomic SubSystem: '<S95>/Turn On Delay Sample' */
    /* Logic: '<S95>/Logical' incorporates:
     *  Constant: '<S239>/Calib'
     *  Constant: '<S242>/Calib'
     *  Logic: '<S247>/AND'
     *  RelationalOperator: '<S247>/Greater  Than'
     *  RelationalOperator: '<S95>/Comparison2'
     *  UnitDelay: '<S247>/Unit Delay'
     */
    VeGENR_b_VoltDroop_Test2 = (((VeGENR_Pct_IBSSOC >=
        KeGENR_Pct_VoltageDroopMinIBS_SOC) && (rtb_Logical1_hj &&
        (GENR_ac_DW.UnitDelay_DSTATE_oc >= KeGENR_Cnt_VoltageDroopDbnc))) &&
        (VeGENR_U_VoltDroop_Test1));

    /* End of Outputs for SubSystem: '<S95>/Turn On Delay Sample' */

    /* Switch: '<S95>/Switch2' */
    if (VeGENR_b_VoltDroop_Test2)
    {
        /* Switch: '<S95>/Switch2' */
        VeGENR_U_VoltDroop_Test4 = VeGENR_U_VoltDroop_Test3;
    }

    /* End of Switch: '<S95>/Switch2' */

    /* Logic: '<S88>/Logical' incorporates:
     *  Constant: '<S107>/Constant'
     *  Constant: '<S112>/Calib'
     *  Logic: '<S88>/Logical1'
     *  Logic: '<S88>/Logical2'
     *  RelationalOperator: '<S88>/Comparison4'
     *  UnitDelay: '<S108>/Unit Delay'
     */
    VeGENR_b_EOPBasedSetPt_Test1 = (((((!GENR_ac_DW.UnitDelay_DSTATE_gc) &&
        rtb_TmpSignalConversionAtVeHPMR_b_PropSy) && (((uint32)
        rtb_TmpSignalConversionAtVeESSR_e_EngSta) == CeESSR_e_EngOff)) &&
        (KeGENR_b_EnblEOPBasedSetPT)) && (!rtb_AND_ba));

    /* Switch: '<S109>/Switch1' incorporates:
     *  Constant: '<S245>/Calib'
     *  Inport: '<Root>/VePMIR_T_TransAuxPumpTemp'
     *  Switch: '<S95>/Switch1'
     */
    if (VeGENR_b_EOPBasedSetPt_Test1)
    {
        (void)Rte_Read_VePMIR_T_TransAuxPumpTemp_Value(&tmpRead_6);

        /* Switch: '<S95>/Switch1' incorporates:
         *  Constant: '<S244>/Calib'
         *  Constant: '<S245>/Calib'
         *  Inport: '<Root>/VePMIR_T_TransAuxPumpTemp'
         */
        if (KeGENR_b_VoltDroop_Ovrd)
        {
            rtb_Switch_he4 = KeGENR_U_VoltDroop_OvrdVal;
        }
        else
        {
            rtb_Switch_he4 = VeGENR_U_VoltDroop_Test4;
        }

        /* Switch: '<S109>/Switch1' incorporates:
         *  Inport: '<Root>/VePMIR_T_TransAuxPumpTemp'
         *  Lookup_n-D: '<S113>/Vector'
         *  MinMax: '<S88>/MinMax2'
         */
        VeGENR_U_SetPt_Dtrmn = fmaxf(look1_iflf_binlca_16a(tmpRead_6, ((const
            float32 *)&(KxGENR_U_EOPTmpBasedSetPt[0])), ((const float32 *)
            &(KtGENR_U_EOPTmpBasedSetPt[0])), 18U), rtb_Switch_he4);
    }
    else if (KeGENR_b_VoltDroop_Ovrd)
    {
        /* Switch: '<S95>/Switch1' incorporates:
         *  Constant: '<S244>/Calib'
         *  Switch: '<S109>/Switch1'
         */
        VeGENR_U_SetPt_Dtrmn = KeGENR_U_VoltDroop_OvrdVal;
    }
    else
    {
        /* Switch: '<S109>/Switch1' incorporates:
         *  Switch: '<S95>/Switch1'
         */
        VeGENR_U_SetPt_Dtrmn = VeGENR_U_VoltDroop_Test4;
    }

    /* End of Switch: '<S109>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' */

    /* Inport: '<Root>/VeIDCR_b_IBS_I_Converted_FA' */
    (void)Rte_Read_VeIDCR_b_IBS_I_Converted_FA_Value(&rtb_AND_nz);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' incorporates:
     *  SubSystem: '<Root>/GENR_MedTEF'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/GENC_CntrlAPM'
     */
    /* RelationalOperator: '<S89>/Comparison' incorporates:
     *  Constant: '<S121>/Calib'
     */
    VeGENR_b_APMLvCurTest = (rtb_TmpSignalConversionAtVeIDCR_I_APM_LV >
        KeGENR_I_MaxAPMLvCur);

    /* RelationalOperator: '<S89>/Comparison1' incorporates:
     *  Constant: '<S122>/Calib'
     */
    VeGENR_b_IBSCurTest = (rtb_TmpSignalConversionAtVeIDCR_I_IBS_I_ >
                           KeGENR_I_MaxIBSCur);

    /* RelationalOperator: '<S89>/Comparison5' incorporates:
     *  Constant: '<S115>/Constant'
     */
    rtb_Logical1_hj = (((uint32)rtb_TmpSignalConversionAtVeIDCR_e_stMode) ==
                       CeGENR_e_OperBuckCV);

    /* Outputs for Atomic SubSystem: '<S89>/EdgeRising1' */
    /* Logic: '<S114>/AND' incorporates:
     *  Logic: '<S114>/OR1'
     *  UnitDelay: '<S114>/Unit Delay'
     */
    rtb_AND_ba = (rtb_Logical1_hj && (!GENR_ac_DW.UnitDelay_DSTATE_gr));

    /* Update for UnitDelay: '<S114>/Unit Delay' */
    GENR_ac_DW.UnitDelay_DSTATE_gr = rtb_Logical1_hj;

    /* End of Outputs for SubSystem: '<S89>/EdgeRising1' */

    /* Logic: '<S89>/Logical2' */
    VeGENR_b_SgnValid = !rtb_AND_nz;

    /* Logic: '<S89>/Logical4' */
    rtb_Logical1_hj = ((VeGENR_b_IBSCurTest) && (VeGENR_b_SgnValid));

    /* Outputs for Atomic SubSystem: '<S89>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S128>/EdgeRising' */
    /* Logic: '<S155>/AND' incorporates:
     *  Logic: '<S155>/OR1'
     *  UnitDelay: '<S155>/Unit Delay'
     */
    rtb_AND_nz = (rtb_Logical1_hj && (!GENR_ac_DW.UnitDelay_DSTATE_o1));

    /* Update for UnitDelay: '<S155>/Unit Delay' */
    GENR_ac_DW.UnitDelay_DSTATE_o1 = rtb_Logical1_hj;

    /* End of Outputs for SubSystem: '<S128>/EdgeRising' */

    /* Switch: '<S128>/Switch1' incorporates:
     *  Constant: '<S119>/Calib'
     *  Constant: '<S128>/Constant Value'
     *  Constant: '<S128>/Constant Value1'
     *  Logic: '<S128>/OR'
     *  Logic: '<S128>/OR1'
     *  MinMax: '<S128>/Minimum'
     *  Sum: '<S128>/Summation'
     *  UnitDelay: '<S128>/Unit Delay'
     */
    if ((!rtb_Logical1_hj) || rtb_AND_nz)
    {
        GENR_ac_DW.UnitDelay_DSTATE_l2 = 0U;
    }
    else if (KeGENR_Cnt_DbncSwchSetP < ((uint16)(((uint32)
                GENR_ac_DW.UnitDelay_DSTATE_l2) + 1U)))
    {
        /* MinMax: '<S128>/Minimum' incorporates:
         *  Constant: '<S119>/Calib'
         */
        GENR_ac_DW.UnitDelay_DSTATE_l2 = KeGENR_Cnt_DbncSwchSetP;
    }
    else
    {
        /* MinMax: '<S128>/Minimum' incorporates:
         *  Constant: '<S128>/Constant Value'
         *  Sum: '<S128>/Summation'
         *  UnitDelay: '<S128>/Unit Delay'
         */
        GENR_ac_DW.UnitDelay_DSTATE_l2 = (uint16)(((uint32)
            GENR_ac_DW.UnitDelay_DSTATE_l2) + 1U);
    }

    /* End of Switch: '<S128>/Switch1' */
    /* End of Outputs for SubSystem: '<S89>/Turn On Delay Sample1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' */

    /* Inport: '<Root>/VeIDCR_b_IBS_I_Batt_SgnlRcvd' */
    (void)Rte_Read_VeIDCR_b_IBS_I_Batt_SgnlRcvd_Value(&rtb_Logical5_lj);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' incorporates:
     *  SubSystem: '<Root>/GENR_MedTEF'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/GENC_CntrlAPM'
     */
    /* Outputs for Atomic SubSystem: '<S89>/Signal Latch On With Reset2' */
    /* Outputs for Atomic SubSystem: '<S89>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S89>/Signal Latch On With Reset1' */
    /* Logic: '<S125>/NOT' incorporates:
     *  Logic: '<S124>/NOT'
     *  Logic: '<S126>/NOT'
     */
    rtb_AND_nz = !rtb_AND_ba;

    /* End of Outputs for SubSystem: '<S89>/Signal Latch On With Reset' */
    /* End of Outputs for SubSystem: '<S89>/Signal Latch On With Reset2' */

    /* Outputs for Atomic SubSystem: '<S89>/Turn On Delay Sample1' */
    /* Logic: '<S125>/OR1' incorporates:
     *  Constant: '<S119>/Calib'
     *  Logic: '<S125>/NOT'
     *  Logic: '<S125>/OR'
     *  Logic: '<S128>/AND'
     *  RelationalOperator: '<S128>/Greater  Than'
     *  UnitDelay: '<S125>/Unit Delay'
     *  UnitDelay: '<S128>/Unit Delay'
     */
    VeGENR_b_Hold_CANC_4PICtrl = ((rtb_Logical1_hj &&
        (GENR_ac_DW.UnitDelay_DSTATE_l2 >= KeGENR_Cnt_DbncSwchSetP)) ||
        (rtb_AND_nz && (VeGENR_b_Hold_CANC_4PICtrl)));

    /* End of Outputs for SubSystem: '<S89>/Turn On Delay Sample1' */
    /* End of Outputs for SubSystem: '<S89>/Signal Latch On With Reset1' */

    /* Logic: '<S89>/Logical5' incorporates:
     *  Logic: '<S89>/Logical1'
     */
    rtb_Logical5_lj = ((!rtb_Logical5_lj) && (VeGENR_b_APMLvCurTest));

    /* Outputs for Atomic SubSystem: '<S89>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S127>/EdgeRising' */
    /* Logic: '<S154>/AND' incorporates:
     *  Logic: '<S154>/OR1'
     *  UnitDelay: '<S154>/Unit Delay'
     */
    rtb_AND_ba = (rtb_Logical5_lj && (!GENR_ac_DW.UnitDelay_DSTATE_f2));

    /* Update for UnitDelay: '<S154>/Unit Delay' */
    GENR_ac_DW.UnitDelay_DSTATE_f2 = rtb_Logical5_lj;

    /* End of Outputs for SubSystem: '<S127>/EdgeRising' */

    /* Switch: '<S127>/Switch1' incorporates:
     *  Constant: '<S118>/Calib'
     *  Constant: '<S127>/Constant Value'
     *  Constant: '<S127>/Constant Value1'
     *  Logic: '<S127>/OR'
     *  Logic: '<S127>/OR1'
     *  MinMax: '<S127>/Minimum'
     *  Sum: '<S127>/Summation'
     *  UnitDelay: '<S127>/Unit Delay'
     */
    if ((!rtb_Logical5_lj) || rtb_AND_ba)
    {
        GENR_ac_DW.UnitDelay_DSTATE_jb = 0U;
    }
    else if (KeGENR_Cnt_DbncMaxAPMLvCur < ((uint16)(((uint32)
                GENR_ac_DW.UnitDelay_DSTATE_jb) + 1U)))
    {
        /* MinMax: '<S127>/Minimum' incorporates:
         *  Constant: '<S118>/Calib'
         */
        GENR_ac_DW.UnitDelay_DSTATE_jb = KeGENR_Cnt_DbncMaxAPMLvCur;
    }
    else
    {
        /* MinMax: '<S127>/Minimum' incorporates:
         *  Constant: '<S127>/Constant Value'
         *  Sum: '<S127>/Summation'
         *  UnitDelay: '<S127>/Unit Delay'
         */
        GENR_ac_DW.UnitDelay_DSTATE_jb = (uint16)(((uint32)
            GENR_ac_DW.UnitDelay_DSTATE_jb) + 1U);
    }

    /* End of Switch: '<S127>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S89>/Signal Latch On With Reset' */
    /* Logic: '<S124>/OR1' incorporates:
     *  Constant: '<S118>/Calib'
     *  Logic: '<S124>/OR'
     *  Logic: '<S127>/AND'
     *  RelationalOperator: '<S127>/Greater  Than'
     *  UnitDelay: '<S124>/Unit Delay'
     *  UnitDelay: '<S127>/Unit Delay'
     */
    VeGENR_b_Check_CANCOn_Rq = ((rtb_Logical5_lj &&
        (GENR_ac_DW.UnitDelay_DSTATE_jb >= KeGENR_Cnt_DbncMaxAPMLvCur)) ||
        (rtb_AND_nz && (VeGENR_b_Check_CANCOn_Rq)));

    /* End of Outputs for SubSystem: '<S89>/Signal Latch On With Reset' */
    /* End of Outputs for SubSystem: '<S89>/Turn On Delay Sample' */

    /* Logic: '<S89>/Logical10' incorporates:
     *  Constant: '<S122>/Calib'
     *  RelationalOperator: '<S89>/Comparison2'
     */
    rtb_Logical5_lj = (((VeGENR_b_Check_CANCOn_Rq) &&
                        (rtb_TmpSignalConversionAtVeIDCR_I_IBS_I_ <
                         KeGENR_I_MaxIBSCur)) && (VeGENR_b_SgnValid));

    /* Outputs for Atomic SubSystem: '<S89>/Turn On Delay Sample2' */
    /* Outputs for Atomic SubSystem: '<S129>/EdgeRising' */
    /* Logic: '<S156>/AND' incorporates:
     *  Logic: '<S156>/OR1'
     *  UnitDelay: '<S156>/Unit Delay'
     */
    rtb_AND_ba = (rtb_Logical5_lj && (!GENR_ac_DW.UnitDelay_DSTATE_kq));

    /* Update for UnitDelay: '<S156>/Unit Delay' */
    GENR_ac_DW.UnitDelay_DSTATE_kq = rtb_Logical5_lj;

    /* End of Outputs for SubSystem: '<S129>/EdgeRising' */

    /* Switch: '<S129>/Switch1' incorporates:
     *  Constant: '<S120>/Calib'
     *  Constant: '<S129>/Constant Value'
     *  Constant: '<S129>/Constant Value1'
     *  Logic: '<S129>/OR'
     *  Logic: '<S129>/OR1'
     *  MinMax: '<S129>/Minimum'
     *  Sum: '<S129>/Summation'
     *  UnitDelay: '<S129>/Unit Delay'
     */
    if ((!rtb_Logical5_lj) || rtb_AND_ba)
    {
        GENR_ac_DW.UnitDelay_DSTATE_hp = 0U;
    }
    else if (KeGENR_Cnt_DbncTurnOffCANC < ((uint16)(((uint32)
                GENR_ac_DW.UnitDelay_DSTATE_hp) + 1U)))
    {
        /* MinMax: '<S129>/Minimum' incorporates:
         *  Constant: '<S120>/Calib'
         */
        GENR_ac_DW.UnitDelay_DSTATE_hp = KeGENR_Cnt_DbncTurnOffCANC;
    }
    else
    {
        /* MinMax: '<S129>/Minimum' incorporates:
         *  Constant: '<S129>/Constant Value'
         *  Sum: '<S129>/Summation'
         *  UnitDelay: '<S129>/Unit Delay'
         */
        GENR_ac_DW.UnitDelay_DSTATE_hp = (uint16)(((uint32)
            GENR_ac_DW.UnitDelay_DSTATE_hp) + 1U);
    }

    /* End of Switch: '<S129>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S89>/Signal Latch On With Reset2' */
    /* Logic: '<S126>/OR1' incorporates:
     *  Constant: '<S120>/Calib'
     *  Logic: '<S126>/OR'
     *  Logic: '<S129>/AND'
     *  RelationalOperator: '<S129>/Greater  Than'
     *  UnitDelay: '<S126>/Unit Delay'
     *  UnitDelay: '<S129>/Unit Delay'
     */
    VeGENR_b_Check_CANCOff_Rq = ((rtb_Logical5_lj &&
        (GENR_ac_DW.UnitDelay_DSTATE_hp >= KeGENR_Cnt_DbncTurnOffCANC)) ||
        (rtb_AND_nz && (VeGENR_b_Check_CANCOff_Rq)));

    /* End of Outputs for SubSystem: '<S89>/Signal Latch On With Reset2' */
    /* End of Outputs for SubSystem: '<S89>/Turn On Delay Sample2' */

    /* Logic: '<S89>/Logical7' incorporates:
     *  Logic: '<S89>/Logical6'
     *  Logic: '<S89>/Logical8'
     */
    VeGENR_b_CANCOnRq_IBS = (((VeGENR_b_Check_CANCOn_Rq) &&
        (!VeGENR_b_Check_CANCOff_Rq)) || (VeGENR_b_Hold_CANC_4PICtrl));

    /* If: '<S89>/If1' incorporates:
     *  If: '<S116>/If'
     */
    rtPrevAction = GENR_ac_DW.If1_ActiveSubsystem;
    GENR_ac_DW.If1_ActiveSubsystem = (sint8)((!VeGENR_b_SgnValid) ? 1 : 0);
    if ((rtPrevAction != GENR_ac_DW.If1_ActiveSubsystem) && (rtPrevAction == 0))
    {
        /* Disable for If: '<S117>/If' */
        GENR_ac_DW.If_ActiveSubsystem_o = -1;
    }

    if (GENR_ac_DW.If1_ActiveSubsystem == 0)
    {
        /* Outputs for IfAction SubSystem: '<S89>/If_Sgn_Available' incorporates:
         *  ActionPort: '<S117>/Action Port'
         */
        /* If: '<S117>/If' */
        rtPrevAction = GENR_ac_DW.If_ActiveSubsystem_o;
        GENR_ac_DW.If_ActiveSubsystem_o = (sint8)((!VeGENR_b_Hold_CANC_4PICtrl) ?
            1 : 0);
        if (GENR_ac_DW.If_ActiveSubsystem_o == 0)
        {
            if (0 != rtPrevAction)
            {
                /* InitializeConditions for IfAction SubSystem: '<S117>/SetPt_PI_Ctrl' incorporates:
                 *  ActionPort: '<S133>/Action Port'
                 */
                /* InitializeConditions for If: '<S117>/If' incorporates:
                 *  UnitDelay: '<S133>/Unit Delay'
                 *  UnitDelay: '<S133>/Unit Delay1'
                 */
                GENR_ac_DW.UnitDelay_DSTATE_ad = 0.0F;
                GENR_ac_DW.UnitDelay1_DSTATE_h = 0.0F;

                /* End of InitializeConditions for SubSystem: '<S117>/SetPt_PI_Ctrl' */

                /* SystemReset for IfAction SubSystem: '<S117>/SetPt_PI_Ctrl' incorporates:
                 *  ActionPort: '<S133>/Action Port'
                 */
                /* SystemReset for Atomic SubSystem: '<S133>/IntegratorT Reset Enabled Limited' */
                /* SystemReset for If: '<S117>/If' incorporates:
                 *  UnitDelay: '<S138>/Unit Delay'
                 */
                GENR_ac_DW.UnitDelay_DSTATE_ps = 0.0F;

                /* End of SystemReset for SubSystem: '<S133>/IntegratorT Reset Enabled Limited' */
                /* End of SystemReset for SubSystem: '<S117>/SetPt_PI_Ctrl' */
            }

            /* Outputs for IfAction SubSystem: '<S117>/SetPt_PI_Ctrl' incorporates:
             *  ActionPort: '<S133>/Action Port'
             */
            /* Sum: '<S135>/Subtraction1' incorporates:
             *  Constant: '<S140>/Calib'
             *  Constant: '<S141>/Calib'
             *  Product: '<S135>/Multiplication'
             *  Sum: '<S135>/Subtraction'
             *  UnitDelay: '<S133>/Unit Delay'
             */
            VeGENR_I_CurTarget_Filtered = ((KeGENR_I_LvCurTrgt -
                GENR_ac_DW.UnitDelay_DSTATE_ad) * KeGENR_K_CurCtrlFiltr1) +
                GENR_ac_DW.UnitDelay_DSTATE_ad;

            /* Sum: '<S136>/Subtraction1' incorporates:
             *  Constant: '<S142>/Calib'
             *  Product: '<S136>/Multiplication'
             *  Sum: '<S136>/Subtraction'
             *  UnitDelay: '<S133>/Unit Delay1'
             */
            VeGENR_I_LvBattCur_Filtered =
                ((rtb_TmpSignalConversionAtVeIDCR_I_IBS_I_ -
                  GENR_ac_DW.UnitDelay1_DSTATE_h) * KeGENR_K_CurCtrlFiltr2) +
                GENR_ac_DW.UnitDelay1_DSTATE_h;

            /* Sum: '<S133>/Sum1' */
            VeGENR_I_CurError_Filtered = VeGENR_I_CurTarget_Filtered -
                VeGENR_I_LvBattCur_Filtered;

            /* Outputs for Atomic SubSystem: '<S133>/IntegratorT Reset Enabled Limited' */
            /* Sum: '<S138>/Sum//Sub' incorporates:
             *  Constant: '<S143>/Calib'
             *  Product: '<S133>/Product'
             *  Product: '<S138>/Division'
             *  Product: '<S138>/Multiplication'
             *  UnitDelay: '<S138>/Unit Delay'
             */
            VeGENR_U_CurCtrlTest2 = ((VeGENR_I_CurError_Filtered *
                KeGENR_K_Ki_LvCurCtrl) * 0.05F) + GENR_ac_DW.UnitDelay_DSTATE_ps;

            /* Outputs for Atomic SubSystem: '<S138>/Limiter' */
            /* Switch: '<S153>/Switch1' incorporates:
             *  Constant: '<S145>/Calib'
             *  RelationalOperator: '<S153>/Relational Operator'
             *  Switch: '<S138>/Switch1'
             */
            if (KeGENR_U_IntgrMax_LvCurCtrl < VeGENR_U_CurCtrlTest2)
            {
                /* Switch: '<S153>/Switch1' */
                VeGENR_U_CurCtrlTest2 = KeGENR_U_IntgrMax_LvCurCtrl;
            }

            /* End of Switch: '<S153>/Switch1' */

            /* Switch: '<S153>/Switch' incorporates:
             *  Constant: '<S146>/Calib'
             *  RelationalOperator: '<S153>/Relational Operator1'
             */
            if (VeGENR_U_CurCtrlTest2 <= KeGENR_U_IntgrMin_LvCurCtrl)
            {
                /* Switch: '<S153>/Switch' */
                VeGENR_U_CurCtrlTest2 = KeGENR_U_IntgrMin_LvCurCtrl;
            }

            /* End of Switch: '<S153>/Switch' */
            /* End of Outputs for SubSystem: '<S138>/Limiter' */

            /* Update for UnitDelay: '<S138>/Unit Delay' */
            GENR_ac_DW.UnitDelay_DSTATE_ps = VeGENR_U_CurCtrlTest2;

            /* End of Outputs for SubSystem: '<S133>/IntegratorT Reset Enabled Limited' */

            /* Switch: '<S133>/Switch1' incorporates:
             *  Constant: '<S150>/Calib'
             */
            if (KeGENR_b_OvrdMXCurCtrl)
            {
                /* Switch: '<S133>/Switch1' incorporates:
                 *  Constant: '<S147>/Calib'
                 */
                rtb_TmpSignalConversionAtVeIDCR_I_IBS_I_ = KeGENR_U_MXCurCtrl;
            }
            else
            {
                /* Switch: '<S133>/Switch1' */
                rtb_TmpSignalConversionAtVeIDCR_I_IBS_I_ = VeGENR_U_SetPt_Dtrmn;
            }

            /* End of Switch: '<S133>/Switch1' */

            /* Switch: '<S133>/Switch' */
            if (rtb_TmpSignalConversionAtVeHPMR_b_PropSy)
            {
                /* Switch: '<S133>/Switch' incorporates:
                 *  Constant: '<S149>/Calib'
                 */
                VeGENR_U_SetPtCurCtrl = KeGENR_U_MinSetPt_LvCurCtrl_PSA;
            }
            else
            {
                /* Switch: '<S133>/Switch' incorporates:
                 *  Constant: '<S148>/Calib'
                 */
                VeGENR_U_SetPtCurCtrl = KeGENR_U_MinSetPt_LvCurCtrl;
            }

            /* End of Switch: '<S133>/Switch' */

            /* Outputs for Atomic SubSystem: '<S137>/ClosedInterval' */
            /* Switch: '<S137>/Switch' incorporates:
             *  Constant: '<S137>/Constant Value1'
             *  Constant: '<S139>/Calib'
             *  Logic: '<S137>/Logical2'
             *  Logic: '<S152>/Logical Operator'
             *  Product: '<S137>/Product'
             *  RelationalOperator: '<S152>/Relatonal Operator'
             *  RelationalOperator: '<S152>/Relatonal Operator1'
             */
            if ((VeGENR_I_CurError_Filtered < (-KeGENR_I_ErrorDeb)) ||
                    (VeGENR_I_CurError_Filtered > KeGENR_I_ErrorDeb))
            {
                rtb_Switch_he4 = VeGENR_I_CurError_Filtered;
            }
            else
            {
                rtb_Switch_he4 = 0.0F;
            }

            /* End of Switch: '<S137>/Switch' */
            /* End of Outputs for SubSystem: '<S137>/ClosedInterval' */

            /* Product: '<S133>/Product1' incorporates:
             *  Constant: '<S144>/Calib'
             */
            VeGENR_U_CurCtrlTest1 = rtb_Switch_he4 * KeGENR_K_Kp_LvCurCtrl;

            /* Sum: '<S133>/Sum' */
            VeGENR_U_SetPt_PIOutput = (VeGENR_U_SetPt_Dtrmn +
                VeGENR_U_CurCtrlTest1) + VeGENR_U_CurCtrlTest2;

            /* Outputs for Atomic SubSystem: '<S133>/Limiter' */
            /* Switch: '<S151>/Switch1' incorporates:
             *  RelationalOperator: '<S151>/Relational Operator'
             */
            if (rtb_TmpSignalConversionAtVeIDCR_I_IBS_I_ >=
                    VeGENR_U_SetPt_PIOutput)
            {
                /* Switch: '<S151>/Switch1' */
                rtb_TmpSignalConversionAtVeIDCR_I_IBS_I_ =
                    VeGENR_U_SetPt_PIOutput;
            }

            /* End of Switch: '<S151>/Switch1' */

            /* Switch: '<S151>/Switch' incorporates:
             *  RelationalOperator: '<S151>/Relational Operator1'
             */
            if (rtb_TmpSignalConversionAtVeIDCR_I_IBS_I_ > VeGENR_U_SetPtCurCtrl)
            {
                /* Merge: '<S89>/Merge' */
                VeGENR_U_SetPtCurCtrl = rtb_TmpSignalConversionAtVeIDCR_I_IBS_I_;
            }

            /* End of Switch: '<S151>/Switch' */
            /* End of Outputs for SubSystem: '<S133>/Limiter' */

            /* Merge: '<S89>/Merge1' incorporates:
             *  Constant: '<S133>/SetPt_PI_Ctrl_Mode'
             *  SignalConversion generated from: '<S133>/SetPt_Mode_Debug'
             */
            VeGENR_Cnt_SetPtModeDebug = 1U;

            /* Update for UnitDelay: '<S133>/Unit Delay' */
            GENR_ac_DW.UnitDelay_DSTATE_ad = VeGENR_I_CurTarget_Filtered;

            /* Update for UnitDelay: '<S133>/Unit Delay1' */
            GENR_ac_DW.UnitDelay1_DSTATE_h = VeGENR_I_LvBattCur_Filtered;

            /* End of Outputs for SubSystem: '<S117>/SetPt_PI_Ctrl' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S117>/SetPt_Temp' incorporates:
             *  ActionPort: '<S134>/Action Port'
             */
            /* Merge: '<S89>/Merge' incorporates:
             *  Inport: '<S134>/SetPt_Dtmn_In'
             */
            VeGENR_U_SetPtCurCtrl = VeGENR_U_SetPt_Dtrmn;

            /* Merge: '<S89>/Merge1' incorporates:
             *  Constant: '<S134>/SetPt_Temp_Mode'
             *  SignalConversion generated from: '<S134>/SetPt_Mode_Dbg'
             */
            VeGENR_Cnt_SetPtModeDebug = 2U;

            /* End of Outputs for SubSystem: '<S117>/SetPt_Temp' */
        }

        /* End of If: '<S117>/If' */
        /* End of Outputs for SubSystem: '<S89>/If_Sgn_Available' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S89>/If_SNA' incorporates:
         *  ActionPort: '<S116>/Action Port'
         */
        if (VeGENR_b_CANCOnRq_IBS)
        {
            /* Outputs for IfAction SubSystem: '<S116>/SetPt_SNA' incorporates:
             *  ActionPort: '<S130>/Action Port'
             */
            /* If: '<S116>/If' incorporates:
             *  Constant: '<S130>/Setpt_SNA'
             *  Constant: '<S132>/Calib'
             *  Merge: '<S89>/Merge'
             *  Merge: '<S89>/Merge1'
             *  SignalConversion generated from: '<S130>/SetPt_Debug'
             *  SignalConversion generated from: '<S130>/SetPt_SNA'
             */
            VeGENR_U_SetPtCurCtrl = KeGENR_U_SNASetPt;
            VeGENR_Cnt_SetPtModeDebug = 3U;

            /* End of Outputs for SubSystem: '<S116>/SetPt_SNA' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S116>/SetPt_Temp' incorporates:
             *  ActionPort: '<S131>/Action Port'
             */
            /* If: '<S116>/If' incorporates:
             *  Constant: '<S131>/SetPt_Temp'
             *  Inport: '<S131>/In1'
             *  Merge: '<S89>/Merge'
             *  Merge: '<S89>/Merge1'
             *  SignalConversion generated from: '<S131>/SetPt_Debug'
             */
            VeGENR_U_SetPtCurCtrl = VeGENR_U_SetPt_Dtrmn;
            VeGENR_Cnt_SetPtModeDebug = 4U;

            /* End of Outputs for SubSystem: '<S116>/SetPt_Temp' */
        }

        /* End of Outputs for SubSystem: '<S89>/If_SNA' */
    }

    /* End of If: '<S89>/If1' */

    /* Switch: '<S89>/Switch' incorporates:
     *  Constant: '<S123>/Calib'
     */
    if (KeGENR_b_CurCtrlSetPtSelect)
    {
        /* Switch: '<S89>/Switch' */
        VeGENR_U_SetPtCurCtrl_Dtrmn = VeGENR_U_SetPtCurCtrl;
    }
    else
    {
        /* Switch: '<S89>/Switch' */
        VeGENR_U_SetPtCurCtrl_Dtrmn = VeGENR_U_SetPt_Dtrmn;
    }

    /* End of Switch: '<S89>/Switch' */

    /* RelationalOperator: '<S12>/Comparison8' incorporates:
     *  Constant: '<S418>/Calib'
     */
    rtb_Logical5_lj = (VeGENR_U_12VBattVolt < KeGENR_U_Min12VThresholdFailure);

    /* Outputs for Atomic SubSystem: '<S12>/Turn On Delay Time7' */
    /* Outputs for Atomic SubSystem: '<S447>/EdgeRising' */
    /* Logic: '<S457>/AND' incorporates:
     *  Logic: '<S457>/OR1'
     *  UnitDelay: '<S457>/Unit Delay'
     */
    rtb_AND_nz = (rtb_Logical5_lj && (!GENR_ac_DW.UnitDelay_DSTATE_ba));

    /* Update for UnitDelay: '<S457>/Unit Delay' */
    GENR_ac_DW.UnitDelay_DSTATE_ba = rtb_Logical5_lj;

    /* End of Outputs for SubSystem: '<S447>/EdgeRising' */

    /* Switch: '<S447>/Switch1' incorporates:
     *  Constant: '<S437>/Calib'
     *  Constant: '<S447>/Constant Value1'
     *  Logic: '<S447>/OR'
     *  Logic: '<S447>/OR1'
     *  MinMax: '<S447>/Minimum'
     *  Sum: '<S447>/Summation'
     *  UnitDelay: '<S447>/Unit Delay'
     */
    if ((!rtb_Logical5_lj) || rtb_AND_nz)
    {
        GENR_ac_DW.UnitDelay_DSTATE_mb = 0.0F;
    }
    else
    {
        GENR_ac_DW.UnitDelay_DSTATE_mb = fminf(KeGENR_t_DbncVltFailure,
            GENR_ac_DW.UnitDelay_DSTATE_mb + 0.05F);
    }

    /* End of Switch: '<S447>/Switch1' */

    /* Logic: '<S12>/OR2' incorporates:
     *  Constant: '<S425>/Calib'
     *  Constant: '<S437>/Calib'
     *  Logic: '<S447>/AND'
     *  RelationalOperator: '<S447>/Greater  Than'
     *  UnitDelay: '<S447>/Unit Delay'
     */
    VeGENR_b_Fault9 = ((KeGENR_b_MinBattVoltFailure) && (rtb_Logical5_lj &&
                        (GENR_ac_DW.UnitDelay_DSTATE_mb >=
                         KeGENR_t_DbncVltFailure)));

    /* End of Outputs for SubSystem: '<S12>/Turn On Delay Time7' */

    /* SignalConversion generated from: '<S17>/VariantSource' incorporates:
     *  Inport: '<Root>/VeBPCR_b_HV_BatDschrgPwrET_FA_Ovrd'
     *  Inport: '<Root>/VeBPCR_b_HV_BatDschrgPwrLT_FA_Ovrd'
     *  Inport: '<Root>/VeBPCR_b_HV_BatDschrgPwrST_FA_Ovrd'
     *  Inport: '<Root>/VeBPCR_b_HV_BatPackSOC_FA'
     *  Inport: '<S461>/P1fVoltCtrlEnbl'
     */
#if Rte_SysCon_Variant_GENR_1

    /* Outputs for Atomic SubSystem: '<S17>/If Action Subsystem' */
    (void)Rte_Read_VeBPCR_b_HV_BatDschrgPwrST_FA_Ovrd_Value(&rtb_AND_iv);
    (void)Rte_Read_VeBPCR_b_HV_BatDschrgPwrLT_FA_Ovrd_Value(&rtb_AND_goz);
    (void)Rte_Read_VeBPCR_b_HV_BatDschrgPwrET_FA_Ovrd_Value(&rtb_AND_n);
    (void)Rte_Read_VeBPCR_b_HV_BatPackSOC_FA_Value(&rtb_AND_pu);

    /* RelationalOperator: '<S460>/Comparison1' incorporates:
     *  Constant: '<S466>/Calib'
     *  Inport: '<Root>/VeBPCR_b_HV_BatDschrgPwrET_FA_Ovrd'
     *  Inport: '<Root>/VeBPCR_b_HV_BatDschrgPwrLT_FA_Ovrd'
     *  Inport: '<Root>/VeBPCR_b_HV_BatDschrgPwrST_FA_Ovrd'
     *  Inport: '<Root>/VeBPCR_b_HV_BatPackSOC_FA'
     */
    VeGENR_b_ExitDspt_PwrLmt = (rtb_TmpSignalConversionAtVeESMR_P_BattLT <
        KeGENR_P_ExitDspt_PwrLmt);

    /* RelationalOperator: '<S460>/Comparison2' incorporates:
     *  Constant: '<S467>/Calib'
     */
    rtb_Logical5_lj = (VeGENR_Pct_HVBatPackSOC < KeGENR_Pct_HVDsptOver);

    /* Logic: '<S460>/Logical1' */
    VeGENR_b_LoCBPCM = (((rtb_AND_pu || rtb_AND_n) || rtb_AND_goz) || rtb_AND_iv);

    /* Outputs for Atomic SubSystem: '<S460>/Turn On Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S472>/EdgeRising' */
    /* Logic: '<S476>/AND' incorporates:
     *  Logic: '<S476>/OR1'
     *  UnitDelay: '<S476>/Unit Delay'
     */
    rtb_AND_iv = (rtb_Logical5_lj && (!GENR_ac_DW.UnitDelay_DSTATE_j0o));

    /* Update for UnitDelay: '<S476>/Unit Delay' */
    GENR_ac_DW.UnitDelay_DSTATE_j0o = rtb_Logical5_lj;

    /* End of Outputs for SubSystem: '<S472>/EdgeRising' */

    /* Switch: '<S472>/Switch1' incorporates:
     *  Constant: '<S470>/Calib'
     *  Constant: '<S472>/Constant Value1'
     *  Logic: '<S472>/OR'
     *  Logic: '<S472>/OR1'
     *  MinMax: '<S472>/Minimum'
     *  Sum: '<S472>/Summation'
     *  UnitDelay: '<S472>/Unit Delay'
     */
    if ((!rtb_Logical5_lj) || rtb_AND_iv)
    {
        GENR_ac_DW.UnitDelay_DSTATE_p = 0.0F;
    }
    else
    {
        GENR_ac_DW.UnitDelay_DSTATE_p = fminf(KeGENR_t_Dbnc_SOC_HVDispt,
            GENR_ac_DW.UnitDelay_DSTATE_p + 0.05F);
    }

    /* End of Switch: '<S472>/Switch1' */

    /* Logic: '<S472>/AND' incorporates:
     *  Constant: '<S470>/Calib'
     *  RelationalOperator: '<S472>/Greater  Than'
     *  UnitDelay: '<S472>/Unit Delay'
     */
    VeGENR_b_ExitDispt_SOC = (rtb_Logical5_lj && (GENR_ac_DW.UnitDelay_DSTATE_p >=
        KeGENR_t_Dbnc_SOC_HVDispt));

    /* End of Outputs for SubSystem: '<S460>/Turn On Delay Time1' */

    /* Outputs for Atomic SubSystem: '<S460>/Turn On Delay Time2' */
    /* Outputs for Atomic SubSystem: '<S473>/EdgeRising' */
    /* Logic: '<S477>/AND' incorporates:
     *  Logic: '<S477>/OR1'
     *  UnitDelay: '<S477>/Unit Delay'
     */
    rtb_AND_iv = (rtb_AND_fp && (!GENR_ac_DW.UnitDelay_DSTATE_mbr));

    /* Update for UnitDelay: '<S477>/Unit Delay' */
    GENR_ac_DW.UnitDelay_DSTATE_mbr = rtb_AND_fp;

    /* End of Outputs for SubSystem: '<S473>/EdgeRising' */

    /* Switch: '<S473>/Switch1' incorporates:
     *  Constant: '<S468>/Calib'
     *  Constant: '<S473>/Constant Value1'
     *  Logic: '<S473>/OR'
     *  MinMax: '<S473>/Minimum'
     *  Sum: '<S473>/Summation'
     *  UnitDelay: '<S473>/Unit Delay'
     */
    if (rtb_Logical2_dg || rtb_AND_iv)
    {
        GENR_ac_DW.UnitDelay_DSTATE_mc = 0.0F;
    }
    else
    {
        GENR_ac_DW.UnitDelay_DSTATE_mc = fminf(KeGENR_t_Dbnc_APMFail_HVDspt,
            GENR_ac_DW.UnitDelay_DSTATE_mc + 0.05F);
    }

    /* End of Switch: '<S473>/Switch1' */

    /* Logic: '<S473>/AND' incorporates:
     *  Constant: '<S468>/Calib'
     *  RelationalOperator: '<S473>/Greater  Than'
     *  UnitDelay: '<S473>/Unit Delay'
     */
    VeGENR_b_ExitDspt_APMFail = (rtb_AND_fp && (GENR_ac_DW.UnitDelay_DSTATE_mc >=
        KeGENR_t_Dbnc_APMFail_HVDspt));

    /* End of Outputs for SubSystem: '<S460>/Turn On Delay Time2' */

    /* Outputs for Atomic SubSystem: '<S460>/Turn On Delay Time8' */
    /* Outputs for Atomic SubSystem: '<S475>/EdgeRising' */
    /* Logic: '<S479>/AND' incorporates:
     *  Logic: '<S479>/OR1'
     *  UnitDelay: '<S479>/Unit Delay'
     */
    rtb_AND_iv = (rtb_TmpSignalConversionAtVeSRAR_b_Invrtr &&
                  (!GENR_ac_DW.UnitDelay_DSTATE_ea));

    /* Update for UnitDelay: '<S479>/Unit Delay' */
    GENR_ac_DW.UnitDelay_DSTATE_ea = rtb_TmpSignalConversionAtVeSRAR_b_Invrtr;

    /* End of Outputs for SubSystem: '<S475>/EdgeRising' */

    /* Switch: '<S475>/Switch1' incorporates:
     *  Constant: '<S471>/Calib'
     *  Constant: '<S475>/Constant Value1'
     *  Logic: '<S475>/OR'
     *  Logic: '<S475>/OR1'
     *  MinMax: '<S475>/Minimum'
     *  Sum: '<S475>/Summation'
     *  UnitDelay: '<S475>/Unit Delay'
     */
    if ((!rtb_TmpSignalConversionAtVeSRAR_b_Invrtr) || rtb_AND_iv)
    {
        GENR_ac_DW.UnitDelay_DSTATE_m = 0.0F;
    }
    else
    {
        GENR_ac_DW.UnitDelay_DSTATE_m = fminf(KeGENR_t_Dbnc_Short_Weld,
            GENR_ac_DW.UnitDelay_DSTATE_m + 0.05F);
    }

    /* End of Switch: '<S475>/Switch1' */

    /* Logic: '<S460>/Logical6' incorporates:
     *  Constant: '<S471>/Calib'
     *  Logic: '<S460>/Logical'
     *  Logic: '<S460>/Logical2'
     *  Logic: '<S475>/AND'
     *  RelationalOperator: '<S475>/Greater  Than'
     *  UnitDelay: '<S475>/Unit Delay'
     */
    VeGENR_b_Enter_HV_Dispt = ((rtb_TmpSignalConversionAtVeSRAR_b_Invrtr &&
        (!rtb_TmpSignalConversionAtVeHPMR_b_PropSy)) ||
        (rtb_TmpSignalConversionAtVeSRAR_b_Invrtr &&
         (GENR_ac_DW.UnitDelay_DSTATE_m >= KeGENR_t_Dbnc_Short_Weld)));

    /* End of Outputs for SubSystem: '<S460>/Turn On Delay Time8' */

    /* Logic: '<S460>/Logical3' incorporates:
     *  Constant: '<S465>/Constant'
     *  RelationalOperator: '<S460>/Comparison5'
     */
    rtb_AND_iv = ((VeGENR_b_Enter_HV_Dispt) && (((uint32)
                    rtb_TmpSignalConversionAtVeIDCR_e_stMode) !=
                   CeGENR_e_OperBuckCV));

    /* Outputs for Atomic SubSystem: '<S460>/Turn On Delay Time3' */
    /* Outputs for Atomic SubSystem: '<S474>/EdgeRising' */
    /* Logic: '<S478>/AND' incorporates:
     *  Logic: '<S478>/OR1'
     *  UnitDelay: '<S478>/Unit Delay'
     */
    rtb_AND_goz = (rtb_AND_iv && (!GENR_ac_DW.UnitDelay_DSTATE_k3));

    /* Update for UnitDelay: '<S478>/Unit Delay' */
    GENR_ac_DW.UnitDelay_DSTATE_k3 = rtb_AND_iv;

    /* End of Outputs for SubSystem: '<S474>/EdgeRising' */

    /* Switch: '<S474>/Switch1' incorporates:
     *  Constant: '<S469>/Calib'
     *  Constant: '<S474>/Constant Value1'
     *  Logic: '<S474>/OR'
     *  Logic: '<S474>/OR1'
     *  MinMax: '<S474>/Minimum'
     *  Sum: '<S474>/Summation'
     *  UnitDelay: '<S474>/Unit Delay'
     */
    if ((!rtb_AND_iv) || rtb_AND_goz)
    {
        GENR_ac_DW.UnitDelay_DSTATE_i = 0.0F;
    }
    else
    {
        GENR_ac_DW.UnitDelay_DSTATE_i = fminf(KeGENR_t_Dbnc_APMSts_HVDspt,
            GENR_ac_DW.UnitDelay_DSTATE_i + 0.05F);
    }

    /* End of Switch: '<S474>/Switch1' */

    /* Logic: '<S474>/AND' incorporates:
     *  Constant: '<S469>/Calib'
     *  RelationalOperator: '<S474>/Greater  Than'
     *  UnitDelay: '<S474>/Unit Delay'
     */
    VeGENR_b_ExitDspt_APMNoBuck = (rtb_AND_iv && (GENR_ac_DW.UnitDelay_DSTATE_i >=
        KeGENR_t_Dbnc_APMSts_HVDspt));

    /* End of Outputs for SubSystem: '<S460>/Turn On Delay Time3' */

    /* Logic: '<S460>/Logical4' */
    VeGENR_b_Exit_HV_Dispt = (((((((((VeGENR_b_ExitDispt_SOC) ||
        (VeGENR_b_LoCBPCM)) || rtb_TmpSignalConversionAtVeINVR_b_P1_CAN) ||
        (VeGENR_b_LoCMCPA_Mrg)) || (VeGENR_b_ExitDspt_APMFail)) ||
        (VeGENR_b_ExitDspt_APMNoBuck)) || (VeGENR_b_SysVoltHighFA)) ||
        (VeGENR_b_ExitDspt_PwrLmt)) || (VeGENR_b_Fault9));

    /* Logic: '<S460>/Logical5' incorporates:
     *  Constant: '<S462>/Constant'
     *  Logic: '<S460>/Logical18'
     *  RelationalOperator: '<S460>/Not Equal2'
     */
    rtb_AND_iv = (((VeGENR_b_Enter_HV_Dispt) && (!VeGENR_b_Exit_HV_Dispt)) &&
                  (((uint32)rtb_TmpSignalConversionAtVeIDCR_e_stMode) ==
                   CeGENR_e_OperBuckCV));

    /* Switch: '<S460>/Switch2' incorporates:
     *  Switch: '<S460>/Switch4'
     */
    if (VeGENR_b_Enter_HV_Dispt)
    {
        /* Switch: '<S460>/Switch3' */
        if (VeGENR_b_Exit_HV_Dispt)
        {
            /* VariantMerge generated from: '<S17>/VariantSource' incorporates:
             *  Constant: '<S464>/Constant'
             *  Switch: '<S460>/Switch2'
             */
            GENR_ac_B.VariantMerge_For_Variant_Source_Varian_a =
                CeGENR_e_Default;
        }
        else
        {
            /* VariantMerge generated from: '<S17>/VariantSource' incorporates:
             *  Constant: '<S463>/Constant'
             *  Switch: '<S460>/Switch2'
             */
            GENR_ac_B.VariantMerge_For_Variant_Source_Varian_a =
                CeGENR_e_OperBuckCV;
        }

        /* End of Switch: '<S460>/Switch3' */

        /* Switch: '<S460>/Switch4' incorporates:
         *  Switch: '<S460>/Switch5'
         */
        rtb_AND_goz = ((VeGENR_b_Exit_HV_Dispt) && rtb_LogicalOperator_ml);
    }
    else
    {
        /* VariantMerge generated from: '<S17>/VariantSource' incorporates:
         *  Switch: '<S460>/Switch2'
         */
        GENR_ac_B.VariantMerge_For_Variant_Source_Varian_a =
            rtb_VeGENR_e_ModeReq_New_SF;

        /* Switch: '<S460>/Switch4' */
        rtb_AND_goz = rtb_LogicalOperator_ml;
    }

    /* End of Switch: '<S460>/Switch2' */
    /* End of Outputs for SubSystem: '<S17>/If Action Subsystem' */
#else

    /* Outputs for Atomic SubSystem: '<S17>/If Action Subsystem1' */
    rtb_P1fVoltCtrlEnbl = rtb_LogicalOperator_ml;

    /* VariantMerge generated from: '<S17>/VariantSource' incorporates:
     *  Inport: '<S461>/APM_ModeRq'
     *  Inport: '<S461>/P1fVoltCtrlEnbl'
     *  SignalConversion generated from: '<S17>/VariantSource'
     */
    GENR_ac_B.VariantMerge_For_Variant_Source_Varian_a =
        rtb_VeGENR_e_ModeReq_New_SF;

    /* End of Outputs for SubSystem: '<S17>/If Action Subsystem1' */
#endif

    /* End of SignalConversion generated from: '<S17>/VariantSource' */

    /* Outputs for Atomic SubSystem: '<S90>/EdgeRising' */
    /* Logic: '<S157>/AND' incorporates:
     *  Logic: '<S157>/OR1'
     *  UnitDelay: '<S157>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeHPMR_b_PropSy = !GENR_ac_DW.UnitDelay_DSTATE_hp2;

    /* Update for UnitDelay: '<S157>/Unit Delay' incorporates:
     *  Constant: '<S90>/TRUE Constant1'
     */
    GENR_ac_DW.UnitDelay_DSTATE_hp2 = true;

    /* End of Outputs for SubSystem: '<S90>/EdgeRising' */

    /* RelationalOperator: '<S92>/Comparison5' incorporates:
     *  Constant: '<S195>/Constant'
     */
    rtb_TmpSignalConversionAtVeSRAR_b_Invrtr = (((uint32)
        rtb_TmpSignalConversionAtVeIDCR_e_stMode) == CeGENR_e_OperBuckCV);

    /* Outputs for Atomic SubSystem: '<S92>/EdgeRising' */
    /* Logic: '<S193>/AND' incorporates:
     *  Logic: '<S193>/OR1'
     *  UnitDelay: '<S193>/Unit Delay'
     */
    rtb_AND_n = (rtb_TmpSignalConversionAtVeSRAR_b_Invrtr &&
                 (!GENR_ac_DW.UnitDelay_DSTATE_hbt));

    /* Update for UnitDelay: '<S193>/Unit Delay' */
    GENR_ac_DW.UnitDelay_DSTATE_hbt = rtb_TmpSignalConversionAtVeSRAR_b_Invrtr;

    /* End of Outputs for SubSystem: '<S92>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S92>/EdgeRising1' */
    /* Logic: '<S194>/AND' incorporates:
     *  Logic: '<S194>/OR1'
     *  UnitDelay: '<S194>/Unit Delay'
     */
    rtb_AND_pu = ((VeGENR_b_VCOn_or_DfltAltrMode_Mrg) &&
                  (!GENR_ac_DW.UnitDelay_DSTATE_iv));

    /* Update for UnitDelay: '<S194>/Unit Delay' */
    GENR_ac_DW.UnitDelay_DSTATE_iv = VeGENR_b_VCOn_or_DfltAltrMode_Mrg;

    /* End of Outputs for SubSystem: '<S92>/EdgeRising1' */

    /* Logic: '<S92>/Logical5' incorporates:
     *  Logic: '<S92>/Logical'
     *  Logic: '<S92>/Logical2'
     *  Logic: '<S92>/Logical3'
     *  Logic: '<S92>/Logical4'
     */
    rtb_AND_n = ((rtb_AND_n && (!VeGENR_b_VCOn_or_DfltAltrMode_Mrg)) ||
                 (rtb_AND_pu && (!rtb_TmpSignalConversionAtVeSRAR_b_Invrtr)));

    /* Lookup_n-D: '<S228>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeFSCR_Pct_RadFanCmd'
     */
    VeGENR_U_RadFanSetPt = look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeFSCR_Pct_RadF, ((const float32 *)
          &(KxGENR_U_RadFanBasedSetPt[0])), ((const float32 *)
          &(KtGENR_U_RadFanBasedSetPt[0])), 3U);

    /* Outputs for Atomic SubSystem: '<S93>/Hysteresis' */
    /* Switch: '<S221>/Switch1' incorporates:
     *  Constant: '<S221>/Constant Value'
     *  Constant: '<S225>/Calib'
     *  Constant: '<S226>/Calib'
     *  RelationalOperator: '<S221>/Greater  Than'
     *  RelationalOperator: '<S221>/Greater  Than1'
     *  UnitDelay: '<S221>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeFSCR_Pct_RadF > KeGENR_Pct_RadFan_RSP)
    {
        GENR_ac_DW.UnitDelay_DSTATE_iy = true;
    }
    else
    {
        GENR_ac_DW.UnitDelay_DSTATE_iy =
            ((rtb_TmpSignalConversionAtVeFSCR_Pct_RadF >= KeGENR_Pct_RadFan_LSP)
             && (GENR_ac_DW.UnitDelay_DSTATE_iy));
    }

    /* End of Switch: '<S221>/Switch1' */
    /* End of Outputs for SubSystem: '<S93>/Hysteresis' */

    /* Switch: '<S93>/Switch' incorporates:
     *  UnitDelay: '<S221>/Unit Delay'
     */
    if (GENR_ac_DW.UnitDelay_DSTATE_iy)
    {
        /* Switch: '<S93>/Switch' */
        VeGENR_U_RadFanSetPtDtmn = VeGENR_U_RadFanSetPt;
    }
    else
    {
        /* Switch: '<S93>/Switch' */
        VeGENR_U_RadFanSetPtDtmn = VeGENR_U_SetPtCurCtrl_Dtrmn;
    }

    /* End of Switch: '<S93>/Switch' */

    /* Lookup_n-D: '<S227>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeTAIR_Pct_FrtBlwrCmd'
     */
    VeGENR_U_ACBlowerSetPt = look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeTAIR_Pct_FrtB, ((const float32 *)
          &(KxGENR_U_ACBlowerBasedSetPt[0])), ((const float32 *)
          &(KtGENR_U_ACBlowerBasedSetPt[0])), 3U);

    /* Outputs for Atomic SubSystem: '<S93>/Hysteresis1' */
    /* Switch: '<S222>/Switch1' incorporates:
     *  Constant: '<S222>/Constant Value'
     *  Constant: '<S223>/Calib'
     *  Constant: '<S224>/Calib'
     *  RelationalOperator: '<S222>/Greater  Than'
     *  RelationalOperator: '<S222>/Greater  Than1'
     *  UnitDelay: '<S222>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeTAIR_Pct_FrtB > KeGENR_Pct_ACBlower_RSP)
    {
        GENR_ac_DW.UnitDelay_DSTATE_fw = true;
    }
    else
    {
        GENR_ac_DW.UnitDelay_DSTATE_fw =
            ((rtb_TmpSignalConversionAtVeTAIR_Pct_FrtB >=
              KeGENR_Pct_ACBlower_LSP) && (GENR_ac_DW.UnitDelay_DSTATE_fw));
    }

    /* End of Switch: '<S222>/Switch1' */
    /* End of Outputs for SubSystem: '<S93>/Hysteresis1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' */

    /* Inport: '<Root>/VeIDCR_e_APM_DeratingModeStatus' */
    (void)Rte_Read_VeIDCR_e_APM_DeratingModeStatus_Value(&tmpRead_a);

    /* Inport: '<Root>/VeIDCR_Pct_UtilPctOfDCDC' */
    (void)Rte_Read_VeIDCR_Pct_UtilPctOfDCDC_Value(&rtb_Sum2_o);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' incorporates:
     *  SubSystem: '<Root>/GENR_MedTEF'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/GENC_CntrlAPM'
     */
    /* Switch: '<S93>/Switch1' incorporates:
     *  UnitDelay: '<S222>/Unit Delay'
     */
    if (GENR_ac_DW.UnitDelay_DSTATE_fw)
    {
        /* Switch: '<S93>/Switch1' */
        VeGENR_U_ACBlowerSetPtDtmn = VeGENR_U_ACBlowerSetPt;
    }
    else
    {
        /* Switch: '<S93>/Switch1' */
        VeGENR_U_ACBlowerSetPtDtmn = VeGENR_U_SetPtCurCtrl_Dtrmn;
    }

    /* End of Switch: '<S93>/Switch1' */

    /* MinMax: '<S93>/MinMax1' */
    VeGENR_U_SetPt_Support_Load = fmaxf(fmaxf(VeGENR_U_RadFanSetPtDtmn,
        VeGENR_U_ACBlowerSetPtDtmn), VeGENR_U_SetPtCurCtrl_Dtrmn);

    /* Outputs for Atomic SubSystem: '<S92>/Protected Division' */
    /* Switch: '<S216>/Switch1' incorporates:
     *  Constant: '<S216>/Constant Value'
     *  Constant: '<S216>/Constant Value1'
     *  Constant: '<S216>/Constant Value2'
     *  Constant: '<S216>/Constant Value3'
     *  Logic: '<S216>/AND'
     *  RelationalOperator: '<S216>/Greater Than or Equal '
     *  RelationalOperator: '<S216>/Greater Than or Equal 1'
     *  RelationalOperator: '<S216>/Not Equal'
     *  RelationalOperator: '<S216>/Not Equal1'
     *  Switch: '<S216>/Switch2'
     *  Switch: '<S216>/Switch3'
     */
    if ((rtb_TmpSignalConversionAtVeIDCR_P_APM_Ou != 0.0F) &&
            (rtb_TmpSignalConversionAtVeIDCR_P_APM_De != 0.0F))
    {
        /* Switch: '<S216>/Switch1' incorporates:
         *  Product: '<S216>/Division'
         */
        rtb_TmpSignalConversionAtVeIDCR_P_APM_Ou /=
            rtb_TmpSignalConversionAtVeIDCR_P_APM_De;
    }
    else if (rtb_TmpSignalConversionAtVeIDCR_P_APM_Ou > 0.0F)
    {
        /* Switch: '<S216>/Switch2' incorporates:
         *  Constant: '<S216>/MAXFLOAT'
         *  Switch: '<S216>/Switch1'
         */
        rtb_TmpSignalConversionAtVeIDCR_P_APM_Ou = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtVeIDCR_P_APM_Ou < 0.0F)
    {
        /* Switch: '<S216>/Switch3' incorporates:
         *  Constant: '<S216>/MINFLOAT'
         *  Switch: '<S216>/Switch1'
         *  Switch: '<S216>/Switch2'
         */
        rtb_TmpSignalConversionAtVeIDCR_P_APM_Ou = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S216>/Switch1' incorporates:
         *  Constant: '<S216>/Constant Value4'
         *  Switch: '<S216>/Switch2'
         *  Switch: '<S216>/Switch3'
         */
        rtb_TmpSignalConversionAtVeIDCR_P_APM_Ou = 0.0F;
    }

    /* End of Switch: '<S216>/Switch1' */
    /* End of Outputs for SubSystem: '<S92>/Protected Division' */

    /* Logic: '<S92>/Logical6' incorporates:
     *  Constant: '<S196>/Constant'
     *  Constant: '<S200>/Calib'
     *  Constant: '<S205>/Calib'
     *  Constant: '<S206>/Calib'
     *  Constant: '<S211>/Calib'
     *  Constant: '<S213>/Calib'
     *  Constant: '<S214>/Calib'
     *  Constant: '<S215>/Calib'
     *  Constant: '<S92>/Constant Value1'
     *  Inport: '<Root>/VeIDCR_e_APM_DeratingModeStatus'
     *  Logic: '<S92>/Logical10'
     *  Logic: '<S92>/Logical7'
     *  Logic: '<S92>/Logical8'
     *  Logic: '<S92>/Logical9'
     *  Product: '<S92>/Product'
     *  RelationalOperator: '<S92>/Comparison1'
     *  RelationalOperator: '<S92>/Comparison2'
     *  RelationalOperator: '<S92>/Comparison3'
     *  RelationalOperator: '<S92>/Comparison6'
     */
    rtb_AND_pu = (((((rtb_Sum2_o > KeGENR_Pct_UtilMaxUtilPct) &&
                     (KeGENR_b_UtilFrezPIEnbl)) ||
                    ((rtb_TmpSignalConversionAtVeIDCR_I_APM_LV >
                      KeGENR_I_MaxAPMLvCur) && (KeGENR_b_LvCFrezPIEnbl))) ||
                   ((((uint32)tmpRead_a) == CeGENR_e_Derating_Mode) &&
                    (KeGENR_b_DRMFrezPIEnbl))) ||
                  (((rtb_TmpSignalConversionAtVeIDCR_P_APM_Ou * 100.0F) >
                    KeGENR_Pct_PwrMaxUtilPct) && (KeGENR_b_PwrFrezPIEnbl)));

    /* Outputs for Atomic SubSystem: '<S92>/Turn Off Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S217>/EdgeFalling1' */
    /* Logic: '<S220>/AND' incorporates:
     *  Logic: '<S220>/OR1'
     *  UnitDelay: '<S220>/Unit Delay'
     */
    rtb_Logical5_lj = ((!rtb_AND_pu) && (GENR_ac_DW.UnitDelay_DSTATE_g0a));

    /* Update for UnitDelay: '<S220>/Unit Delay' */
    GENR_ac_DW.UnitDelay_DSTATE_g0a = rtb_AND_pu;

    /* End of Outputs for SubSystem: '<S217>/EdgeFalling1' */

    /* Switch: '<S217>/Switch' incorporates:
     *  Constant: '<S199>/Calib'
     *  Sum: '<S217>/Summation'
     *  UnitDelay: '<S217>/Unit Delay'
     */
    if (rtb_Logical5_lj)
    {
        GENR_ac_DW.UnitDelay_DSTATE_e0 = KeGENR_Cnt_DerateDbnc;
    }
    else
    {
        /* Sum: '<S217>/Summation' incorporates:
         *  Constant: '<S217>/Constant Value'
         *  UnitDelay: '<S217>/Unit Delay'
         */
        rtb_UnitDelay_gx_tmp = ((sint32)GENR_ac_DW.UnitDelay_DSTATE_e0) - 1;
        if ((((sint32)GENR_ac_DW.UnitDelay_DSTATE_e0) - 1) < 0)
        {
            rtb_UnitDelay_gx_tmp = 0;
        }

        GENR_ac_DW.UnitDelay_DSTATE_e0 = (uint16)rtb_UnitDelay_gx_tmp;
    }

    /* End of Switch: '<S217>/Switch' */

    /* Switch: '<S92>/Switch2' incorporates:
     *  Constant: '<S217>/Constant Value2'
     *  Logic: '<S217>/AND'
     *  RelationalOperator: '<S217>/Greater  Than'
     *  UnitDelay: '<S217>/Unit Delay'
     */
    if (rtb_AND_pu || (((sint32)GENR_ac_DW.UnitDelay_DSTATE_e0) > 0))
    {
        /* Switch: '<S92>/Switch2' incorporates:
         *  Constant: '<S92>/Constant Value'
         */
        VeGENR_U_PI_FrezTest = 0.0F;
    }
    else
    {
        /* Switch: '<S92>/Switch2' incorporates:
         *  Constant: '<S210>/Calib'
         *  Sum: '<S92>/Sum3'
         */
        VeGENR_U_PI_FrezTest = (VeGENR_U_SetPt_Support_Load +
                                KeGENR_U_PMDR_Offset) - VeGENR_U_12VBattVolt;
    }

    /* End of Switch: '<S92>/Switch2' */
    /* End of Outputs for SubSystem: '<S92>/Turn Off Delay Sample' */

    /* Outputs for Atomic SubSystem: '<S197>/ClosedInterval' */
    /* Switch: '<S197>/Switch' incorporates:
     *  Constant: '<S207>/Calib'
     *  Logic: '<S197>/Logical2'
     *  Logic: '<S218>/Logical Operator'
     *  Product: '<S197>/Product'
     *  RelationalOperator: '<S218>/Relatonal Operator'
     *  RelationalOperator: '<S218>/Relatonal Operator1'
     */
    if ((VeGENR_U_PI_FrezTest < (-KeGENR_U_ErrorDeb)) || (VeGENR_U_PI_FrezTest >
         KeGENR_U_ErrorDeb))
    {
        /* Switch: '<S197>/Switch' */
        VeGENR_U_PI_Test3 = VeGENR_U_PI_FrezTest;
    }
    else
    {
        /* Switch: '<S197>/Switch' incorporates:
         *  Constant: '<S197>/Constant Value1'
         */
        VeGENR_U_PI_Test3 = 0.0F;
    }

    /* End of Switch: '<S197>/Switch' */
    /* End of Outputs for SubSystem: '<S197>/ClosedInterval' */

    /* Switch: '<S92>/Switch' incorporates:
     *  Constant: '<S203>/Calib'
     *  Constant: '<S204>/Calib'
     */
    if (rtb_TmpSignalConversionAtVeSRAR_b_Invrtr)
    {
        rtb_Sum2_o = KeGENR_K_KpTerm;
    }
    else
    {
        rtb_Sum2_o = KeGENR_K_KpTermP1fVC;
    }

    /* End of Switch: '<S92>/Switch' */

    /* Product: '<S92>/Product2' */
    VeGENR_U_PI_Test4 = VeGENR_U_PI_Test3 * rtb_Sum2_o;

    /* Logic: '<S92>/Logical1' */
    VeGENR_b_IntegratorEnble = (rtb_TmpSignalConversionAtVeSRAR_b_Invrtr ||
        (VeGENR_b_VCOn_or_DfltAltrMode_Mrg));

    /* Outputs for Atomic SubSystem: '<S92>/IntegratorT Reset Enabled Limited' */
    /* Switch: '<S198>/Switch' incorporates:
     *  Switch: '<S198>/Switch1'
     */
    if (rtb_AND_n)
    {
        /* Switch: '<S198>/Switch' incorporates:
         *  Constant: '<S92>/Constant Value2'
         */
        VeGENR_U_PI_Test5 = 0.0F;
    }
    else
    {
        if (VeGENR_b_IntegratorEnble)
        {
            /* Switch: '<S92>/Switch1' incorporates:
             *  Constant: '<S201>/Calib'
             *  Constant: '<S202>/Calib'
             *  Switch: '<S198>/Switch1'
             */
            if (rtb_TmpSignalConversionAtVeSRAR_b_Invrtr)
            {
                rtb_Sum2_o = KeGENR_K_KiTerm;
            }
            else
            {
                rtb_Sum2_o = KeGENR_K_KiTermP1fVC;
            }

            /* End of Switch: '<S92>/Switch1' */

            /* Switch: '<S198>/Switch' incorporates:
             *  Product: '<S198>/Division'
             *  Product: '<S198>/Multiplication'
             *  Product: '<S92>/Product3'
             *  Sum: '<S198>/Sum//Sub'
             *  Switch: '<S198>/Switch1'
             *  UnitDelay: '<S198>/Unit Delay'
             */
            VeGENR_U_PI_Test5 = ((VeGENR_U_PI_Test3 * rtb_Sum2_o) * 0.05F) +
                VeGENR_U_PI_Test5;
        }
    }

    /* End of Switch: '<S198>/Switch' */

    /* Outputs for Atomic SubSystem: '<S198>/Limiter' */
    /* Switch: '<S219>/Switch1' incorporates:
     *  Constant: '<S208>/Calib'
     *  RelationalOperator: '<S219>/Relational Operator'
     */
    if (KeGENR_U_Integrator_Max < VeGENR_U_PI_Test5)
    {
        /* Abs: '<S94>/Abs' */
        VeGENR_U_PI_Test5 = KeGENR_U_Integrator_Max;
    }

    /* End of Switch: '<S219>/Switch1' */

    /* Switch: '<S219>/Switch' incorporates:
     *  Constant: '<S209>/Calib'
     *  RelationalOperator: '<S219>/Relational Operator1'
     */
    if (VeGENR_U_PI_Test5 <= KeGENR_U_Integrator_Min)
    {
        /* Switch: '<S219>/Switch' */
        VeGENR_U_PI_Test5 = KeGENR_U_Integrator_Min;
    }

    /* End of Switch: '<S219>/Switch' */
    /* End of Outputs for SubSystem: '<S198>/Limiter' */
    /* End of Outputs for SubSystem: '<S92>/IntegratorT Reset Enabled Limited' */

    /* Switch: '<S92>/Switch3' incorporates:
     *  Constant: '<S212>/Calib'
     *  Logic: '<S92>/Logical11'
     */
    if ((KeGENR_b_DisableCmpnstr) && (VeGENR_b_Hold_CANC_4PICtrl))
    {
        /* Switch: '<S92>/Switch3' */
        VeGENR_U_SetPt_Test3 = VeGENR_U_SetPt_Support_Load;
    }
    else
    {
        /* Switch: '<S92>/Switch3' incorporates:
         *  Sum: '<S92>/Sum1'
         */
        VeGENR_U_SetPt_Test3 = (VeGENR_U_PI_Test4 + VeGENR_U_SetPt_Support_Load)
            + VeGENR_U_PI_Test5;
    }

    /* End of Switch: '<S92>/Switch3' */

    /* Switch: '<S90>/Switch' incorporates:
     *  Constant: '<S158>/Constant'
     *  Constant: '<S166>/Calib'
     *  Logic: '<S90>/Logical1'
     *  RelationalOperator: '<S90>/Comparison2'
     *  RelationalOperator: '<S90>/Comparison5'
     *  UnitDelay: '<S90>/Unit Delay1'
     *  VariantMerge generated from: '<S17>/VariantSource'
     */
    if (!KeGENR_b_P1fVC_ResetEnbl)
    {
        rtb_AND_n = ((((uint32)GENR_ac_DW.UnitDelay1_DSTATE_a) !=
                      CeGENR_e_OperBuckCV) && (CeGENR_e_OperBuckCV == ((uint32)
                       GENR_ac_B.VariantMerge_For_Variant_Source_Varian_a)));
    }

    /* End of Switch: '<S90>/Switch' */

    /* Switch: '<S159>/Switch1' incorporates:
     *  Constant: '<S165>/Calib'
     *  Logic: '<S90>/Logical'
     *  Sum: '<S90>/Sum3'
     *  UnitDelay: '<S90>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeHPMR_b_PropSy || rtb_AND_n)
    {
        GENR_ac_DW.UnitDelay_DSTATE = KeGENR_U_SPFilt_IV;
    }
    else
    {
        /* Sum: '<S90>/Sum2' incorporates:
         *  UnitDelay: '<S90>/Unit Delay'
         */
        rtb_Sum2_o = VeGENR_U_SetPt_Test3 - GENR_ac_DW.UnitDelay_DSTATE;

        /* Outputs for Atomic SubSystem: '<S90>/Limiter' */
        /* Switch: '<S168>/Switch1' incorporates:
         *  Constant: '<S161>/Calib'
         *  RelationalOperator: '<S168>/Relational Operator'
         */
        if (KeGENR_U_LU_SetPt < rtb_Sum2_o)
        {
            /* Switch: '<S168>/Switch1' */
            rtb_Sum2_o = KeGENR_U_LU_SetPt;
        }

        /* End of Switch: '<S168>/Switch1' */

        /* Switch: '<S168>/Switch' incorporates:
         *  Constant: '<S160>/Calib'
         *  RelationalOperator: '<S168>/Relational Operator1'
         */
        if (rtb_Sum2_o <= KeGENR_U_LD_SetPt)
        {
            rtb_Sum2_o = KeGENR_U_LD_SetPt;
        }

        /* End of Switch: '<S168>/Switch' */
        /* End of Outputs for SubSystem: '<S90>/Limiter' */
        GENR_ac_DW.UnitDelay_DSTATE += rtb_Sum2_o;
    }

    /* End of Switch: '<S159>/Switch1' */

    /* Switch: '<S90>/Switch2' incorporates:
     *  Constant: '<S162>/Calib'
     *  Constant: '<S167>/Calib'
     *  RelationalOperator: '<S169>/Relational Operator'
     *  Switch: '<S169>/Switch1'
     *  UnitDelay: '<S90>/Unit Delay'
     */
    if (KeGENR_b_ReqOvrd)
    {
        /* Switch: '<S90>/Switch2' incorporates:
         *  Constant: '<S164>/Calib'
         */
        VeGENR_U_SetPtVoltRq = KeGENR_U_ReqOvrdVal;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S90>/Limiter1' */
        if (KeGENR_U_MaxSetPt < GENR_ac_DW.UnitDelay_DSTATE)
        {
            /* Switch: '<S169>/Switch1' incorporates:
             *  Constant: '<S162>/Calib'
             */
            VeGENR_U_SetPtVoltRq = KeGENR_U_MaxSetPt;
        }
        else
        {
            /* Switch: '<S169>/Switch1' incorporates:
             *  UnitDelay: '<S90>/Unit Delay'
             */
            VeGENR_U_SetPtVoltRq = GENR_ac_DW.UnitDelay_DSTATE;
        }

        /* Switch: '<S169>/Switch' incorporates:
         *  Constant: '<S163>/Calib'
         *  RelationalOperator: '<S169>/Relational Operator1'
         */
        if (VeGENR_U_SetPtVoltRq <= KeGENR_U_MinSetPt)
        {
            /* Switch: '<S90>/Switch2' */
            VeGENR_U_SetPtVoltRq = KeGENR_U_MinSetPt;
        }

        /* End of Switch: '<S169>/Switch' */
        /* End of Outputs for SubSystem: '<S90>/Limiter1' */
    }

    /* End of Switch: '<S90>/Switch2' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' */

    /* Inport: '<Root>/VeBPCR_T_BatModTmp' */
    (void)Rte_Read_VeBPCR_T_BatModTmp_Value(&rtb_Switch);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' incorporates:
     *  SubSystem: '<Root>/GENR_MedTEF'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/GENC_CntrlAPM'
     */
    /* Outputs for Atomic SubSystem: '<S288>/EdgeRising2' */
    /* Logic: '<S379>/OR1' incorporates:
     *  UnitDelay: '<S379>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeHPMR_b_PropSy = !GENR_ac_DW.UnitDelay_DSTATE_hs;

    /* Update for UnitDelay: '<S379>/Unit Delay' */
    GENR_ac_DW.UnitDelay_DSTATE_hs = VeGENR_b_BattCntctrOpenPndg;

    /* Outputs for Atomic SubSystem: '<S288>/Signal Latch On With Reset' */
    /* Logic: '<S385>/OR1' incorporates:
     *  Constant: '<S381>/Constant'
     *  Constant: '<S382>/Constant'
     *  Constant: '<S383>/Constant'
     *  Logic: '<S288>/Logical2'
     *  Logic: '<S288>/Logical3'
     *  Logic: '<S379>/AND'
     *  Logic: '<S385>/NOT'
     *  Logic: '<S385>/OR'
     *  RelationalOperator: '<S288>/Comparison5'
     *  RelationalOperator: '<S288>/Comparison6'
     *  RelationalOperator: '<S288>/Comparison8'
     *  UnitDelay: '<S288>/Unit Delay'
     *  UnitDelay: '<S385>/Unit Delay'
     */
    GENR_ac_DW.UnitDelay_DSTATE_ms = (((VeGENR_b_BattCntctrOpenPndg) &&
        rtb_TmpSignalConversionAtVeHPMR_b_PropSy) || (((((CeGENR_e_OperBuckCP !=
        ((uint32)rtb_TmpSignalConversionAtVeIDCR_e_stMode)) &&
        (CeGENR_e_OperBuckCC != ((uint32)
        rtb_TmpSignalConversionAtVeIDCR_e_stMode))) && (CeGENR_e_OperBuckCV !=
        ((uint32)rtb_TmpSignalConversionAtVeIDCR_e_stMode))) ||
        (!GENR_ac_DW.UnitDelay_DSTATE_io)) && (GENR_ac_DW.UnitDelay_DSTATE_ms)));

    /* End of Outputs for SubSystem: '<S288>/Signal Latch On With Reset' */
    /* End of Outputs for SubSystem: '<S288>/EdgeRising2' */

    /* RelationalOperator: '<S12>/Comparison11' incorporates:
     *  Constant: '<S414>/Constant'
     */
    rtb_TmpSignalConversionAtVeHPMR_b_PropSy = (((uint32)
        rtb_TmpSignalConversionAtVeIDCR_e_stMode) == CeGENR_e_APM_Critical_Fault);

    /* RelationalOperator: '<S12>/Comparison6' incorporates:
     *  Constant: '<S417>/Calib'
     *  UnitDelay: '<S12>/Unit Delay1'
     */
    rtb_TmpSignalConversionAtVeSRAR_b_Invrtr = (GENR_ac_DW.UnitDelay1_DSTATE >
        KeGENR_U_MaxVoltDiffAPMFlt);

    /* Outputs for Atomic SubSystem: '<S12>/Count Down  Reset Enabled' */
    /* Switch: '<S405>/Switch1' incorporates:
     *  Constant: '<S405>/Constant Value'
     *  Constant: '<S415>/Calib'
     *  Logic: '<S12>/Logical13'
     *  Logic: '<S405>/AND'
     *  RelationalOperator: '<S405>/Greater  Than'
     *  Switch: '<S405>/Switch2'
     *  UnitDelay: '<S405>/Unit Delay'
     */
    if (!VeGENR_b_SysVoltHighFA)
    {
        GENR_ac_DW.UnitDelay_DSTATE_ic = KeGENR_Cnt_SysVoltHighFAThrshold;
    }
    else
    {
        if ((VeGENR_b_SysVoltHighFA) && (((sint32)GENR_ac_DW.UnitDelay_DSTATE_ic)
             > 0))
        {
            /* UnitDelay: '<S405>/Unit Delay' incorporates:
             *  Constant: '<S405>/Constant Value1'
             *  Sum: '<S405>/Subtraction'
             *  Switch: '<S405>/Switch2'
             */
            GENR_ac_DW.UnitDelay_DSTATE_ic = (uint16)((sint32)(((sint32)
                GENR_ac_DW.UnitDelay_DSTATE_ic) - 1));
        }
    }

    /* End of Switch: '<S405>/Switch1' */
    /* End of Outputs for SubSystem: '<S12>/Count Down  Reset Enabled' */

    /* Switch: '<S12>/Switch' incorporates:
     *  Constant: '<S408>/Constant'
     *  Constant: '<S416>/Calib'
     *  Constant: '<S428>/Calib'
     *  Logic: '<S12>/Logical16'
     *  Logic: '<S12>/Logical2'
     *  RelationalOperator: '<S12>/Comparison4'
     *  RelationalOperator: '<S12>/Comparison7'
     *  UnitDelay: '<S12>/Unit Delay2'
     */
    if ((((rtb_Switch <= KeGENR_T_DCDCDeratingTemp) && (((uint32)
            rtb_TmpSignalConversionAtVeIDCR_e_stMode) != CeGENR_e_OperBuckCV)) &&
         (KeGENR_b_VDeltaAllowMoreTime)) && (!GENR_ac_DW.UnitDelay2_DSTATE))
    {
        /* Switch: '<S12>/Switch' incorporates:
         *  Constant: '<S439>/Calib'
         */
        rtb_Switch = KeGENR_t_DbncVltMismatch_Derating;
    }
    else
    {
        /* Switch: '<S12>/Switch' incorporates:
         *  Constant: '<S438>/Calib'
         */
        rtb_Switch = KeGENR_t_DbncVltMismatch;
    }

    /* End of Switch: '<S12>/Switch' */

    /* Outputs for Atomic SubSystem: '<S12>/Turn On Delay Time4' */
    /* Outputs for Atomic SubSystem: '<S444>/EdgeRising' */
    /* Logic: '<S454>/AND' incorporates:
     *  Logic: '<S454>/OR1'
     *  UnitDelay: '<S454>/Unit Delay'
     */
    rtb_AND_n = (rtb_TmpSignalConversionAtVeSRAR_b_Invrtr &&
                 (!GENR_ac_DW.UnitDelay_DSTATE_i3));

    /* Update for UnitDelay: '<S454>/Unit Delay' */
    GENR_ac_DW.UnitDelay_DSTATE_i3 = rtb_TmpSignalConversionAtVeSRAR_b_Invrtr;

    /* End of Outputs for SubSystem: '<S444>/EdgeRising' */

    /* Switch: '<S444>/Switch1' incorporates:
     *  Constant: '<S444>/Constant Value1'
     *  Logic: '<S444>/OR'
     *  Logic: '<S444>/OR1'
     *  MinMax: '<S444>/Minimum'
     *  Sum: '<S444>/Summation'
     *  UnitDelay: '<S444>/Unit Delay'
     */
    if ((!rtb_TmpSignalConversionAtVeSRAR_b_Invrtr) || rtb_AND_n)
    {
        GENR_ac_DW.UnitDelay_DSTATE_a3 = 0.0F;
    }
    else
    {
        GENR_ac_DW.UnitDelay_DSTATE_a3 = fminf(rtb_Switch,
            GENR_ac_DW.UnitDelay_DSTATE_a3 + 0.05F);
    }

    /* End of Switch: '<S444>/Switch1' */

    /* Logic: '<S12>/Logical8' incorporates:
     *  Constant: '<S423>/Calib'
     *  Logic: '<S444>/AND'
     *  RelationalOperator: '<S444>/Greater  Than'
     *  UnitDelay: '<S444>/Unit Delay'
     */
    VeGENR_b_Fault7 = ((KeGENR_b_EnblFltVltMismatch) &&
                       (rtb_TmpSignalConversionAtVeSRAR_b_Invrtr &&
                        (GENR_ac_DW.UnitDelay_DSTATE_a3 >= rtb_Switch)));

    /* End of Outputs for SubSystem: '<S12>/Turn On Delay Time4' */

    /* Outputs for Atomic SubSystem: '<S12>/Turn On Delay Time5' */
    /* Outputs for Atomic SubSystem: '<S445>/EdgeRising' */
    /* Logic: '<S455>/AND' incorporates:
     *  Logic: '<S455>/OR1'
     *  UnitDelay: '<S455>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeSRAR_b_Invrtr =
        (rtb_TmpSignalConversionAtVeINVR_b_P1_CAN &&
         (!GENR_ac_DW.UnitDelay_DSTATE_ec));

    /* Update for UnitDelay: '<S455>/Unit Delay' */
    GENR_ac_DW.UnitDelay_DSTATE_ec = rtb_TmpSignalConversionAtVeINVR_b_P1_CAN;

    /* End of Outputs for SubSystem: '<S445>/EdgeRising' */

    /* Switch: '<S445>/Switch1' incorporates:
     *  Constant: '<S432>/Calib'
     *  Constant: '<S445>/Constant Value1'
     *  Logic: '<S445>/OR'
     *  Logic: '<S445>/OR1'
     *  MinMax: '<S445>/Minimum'
     *  Sum: '<S445>/Summation'
     *  UnitDelay: '<S445>/Unit Delay'
     */
    if ((!rtb_TmpSignalConversionAtVeINVR_b_P1_CAN) ||
            rtb_TmpSignalConversionAtVeSRAR_b_Invrtr)
    {
        GENR_ac_DW.UnitDelay_DSTATE_c = 0.0F;
    }
    else
    {
        GENR_ac_DW.UnitDelay_DSTATE_c = fminf(KeGENR_t_DbncTimeCommFlt,
            GENR_ac_DW.UnitDelay_DSTATE_c + 0.05F);
    }

    /* End of Switch: '<S445>/Switch1' */

    /* Logic: '<S12>/OR1' incorporates:
     *  Constant: '<S424>/Calib'
     *  Constant: '<S432>/Calib'
     *  Logic: '<S445>/AND'
     *  RelationalOperator: '<S445>/Greater  Than'
     *  UnitDelay: '<S445>/Unit Delay'
     */
    VeGENR_b_Fault8 = ((KeGENR_b_LossOfCommLVFail) &&
                       (rtb_TmpSignalConversionAtVeINVR_b_P1_CAN &&
                        (GENR_ac_DW.UnitDelay_DSTATE_c >=
                         KeGENR_t_DbncTimeCommFlt)));

    /* End of Outputs for SubSystem: '<S12>/Turn On Delay Time5' */

    /* UnitDelay: '<S517>/Unit Delay' incorporates:
     *  Logic: '<S12>/Logical10'
     */
    rtb_AND_n = ((((VeGENR_b_FailureLV) || (VeGENR_b_Fault7)) ||
                  (VeGENR_b_Fault8)) || (VeGENR_b_Fault9));

    /* Outputs for Atomic SubSystem: '<S12>/Count Down  Reset Enabled' */
    /* Logic: '<S12>/Logical11' incorporates:
     *  Constant: '<S405>/Constant Value2'
     *  Logic: '<S12>/Logical12'
     *  RelationalOperator: '<S405>/Greater  Than1'
     *  UnitDelay: '<S405>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeSRAR_b_Invrtr = ((((sint32)
        GENR_ac_DW.UnitDelay_DSTATE_ic) <= 0) || rtb_AND_n);

    /* End of Outputs for SubSystem: '<S12>/Count Down  Reset Enabled' */

    /* Logic: '<S12>/Logical9' */
    rtb_AND_n = ((VeGENR_b_SysVoltHighFA) || rtb_AND_n);

    /* Sum: '<S12>/Sum2' incorporates:
     *  UnitDelay: '<S12>/Unit Delay1'
     */
    GENR_ac_DW.UnitDelay1_DSTATE = VeGENR_U_SetPtVoltRq - VeGENR_U_12VBattVolt;

    /* Outputs for Atomic SubSystem: '<S12>/Turn On Delay Time6' */
    /* Outputs for Atomic SubSystem: '<S446>/EdgeRising' */
    /* Logic: '<S456>/AND' incorporates:
     *  Logic: '<S456>/OR1'
     *  UnitDelay: '<S456>/Unit Delay'
     */
    rtb_AND_pu = (rtb_AND_n && (!GENR_ac_DW.UnitDelay_DSTATE_er));

    /* Update for UnitDelay: '<S456>/Unit Delay' */
    GENR_ac_DW.UnitDelay_DSTATE_er = rtb_AND_n;

    /* End of Outputs for SubSystem: '<S446>/EdgeRising' */

    /* Switch: '<S446>/Switch1' incorporates:
     *  Constant: '<S430>/Calib'
     *  Constant: '<S446>/Constant Value1'
     *  Logic: '<S446>/OR'
     *  Logic: '<S446>/OR1'
     *  MinMax: '<S446>/Minimum'
     *  Sum: '<S446>/Summation'
     *  UnitDelay: '<S446>/Unit Delay'
     */
    if ((!rtb_AND_n) || rtb_AND_pu)
    {
        GENR_ac_DW.UnitDelay_DSTATE_h = 0.0F;
    }
    else
    {
        GENR_ac_DW.UnitDelay_DSTATE_h = fminf(KeGENR_t_DbncTelltale,
            GENR_ac_DW.UnitDelay_DSTATE_h + 0.05F);
    }

    /* End of Switch: '<S446>/Switch1' */
    /* End of Outputs for SubSystem: '<S12>/Turn On Delay Time6' */

    /* Outputs for Atomic SubSystem: '<S12>/Turn On Delay Time9' */
    /* Outputs for Atomic SubSystem: '<S449>/EdgeRising' */
    /* SignalConversion generated from: '<S17>/VariantSource2' incorporates:
     *  UnitDelay: '<S459>/Unit Delay'
     *  UnitDelay: '<S517>/Unit Delay'
     */
    VeGENR_b_Enbl_HVDspt = GENR_ac_DW.UnitDelay_DSTATE_hv;

    /* Logic: '<S459>/AND' incorporates:
     *  Logic: '<S459>/OR1'
     *  UnitDelay: '<S459>/Unit Delay'
     */
    rtb_AND_pu = (rtb_TmpSignalConversionAtVeHPMR_b_PropSy &&
                  (!GENR_ac_DW.UnitDelay_DSTATE_hv));

    /* Update for UnitDelay: '<S459>/Unit Delay' */
    GENR_ac_DW.UnitDelay_DSTATE_hv = rtb_TmpSignalConversionAtVeHPMR_b_PropSy;

    /* End of Outputs for SubSystem: '<S449>/EdgeRising' */

    /* Switch: '<S449>/Switch1' incorporates:
     *  Constant: '<S429>/Calib'
     *  Constant: '<S449>/Constant Value1'
     *  Logic: '<S449>/OR'
     *  Logic: '<S449>/OR1'
     *  MinMax: '<S449>/Minimum'
     *  Sum: '<S449>/Summation'
     *  UnitDelay: '<S449>/Unit Delay'
     */
    if ((!rtb_TmpSignalConversionAtVeHPMR_b_PropSy) || rtb_AND_pu)
    {
        GENR_ac_DW.UnitDelay_DSTATE_gv = 0.0F;
    }
    else
    {
        GENR_ac_DW.UnitDelay_DSTATE_gv = fminf(KeGENR_t_DbncIDCMThrmlRunAway,
            GENR_ac_DW.UnitDelay_DSTATE_gv + 0.05F);
    }

    /* End of Switch: '<S449>/Switch1' */
    /* End of Outputs for SubSystem: '<S12>/Turn On Delay Time9' */

    /* SignalConversion generated from: '<S17>/VariantSource2' incorporates:
     *  SignalConversion generated from: '<S17>/VariantSource1'
     * */
#if Rte_SysCon_Variant_GENR_1

    /* SignalConversion generated from: '<S17>/VariantSource2' incorporates:
     *  UnitDelay: '<S517>/Unit Delay'
     */
    VeGENR_b_Enbl_HVDspt = rtb_AND_iv;

    /* VariantMerge generated from: '<S17>/VariantSource1' */
    GENR_ac_B.VariantMerge_For_Variant_Source_VariantS = rtb_AND_goz;

#else

    /* SignalConversion generated from: '<S17>/VariantSource2' incorporates:
     *  Constant: '<S461>/FALSE Constant'
     *  UnitDelay: '<S517>/Unit Delay'
     */
    VeGENR_b_Enbl_HVDspt = false;

    /* VariantMerge generated from: '<S17>/VariantSource1' incorporates:
     *  SignalConversion generated from: '<S17>/VariantSource1'
     */
    GENR_ac_B.VariantMerge_For_Variant_Source_VariantS = rtb_P1fVoltCtrlEnbl;

#endif

    /* End of SignalConversion generated from: '<S17>/VariantSource2' */

    /* RelationalOperator: '<S18>/Comparison' incorporates:
     *  Constant: '<S480>/Calib'
     */
    rtb_P1fVoltCtrlEnbl = (rtb_TmpSignalConversionAtVePMDR_U_BF1_Sy >
                           KeGENR_U_CntctrCls12VTH_Hi);

    /* RelationalOperator: '<S18>/Comparison1' incorporates:
     *  Constant: '<S481>/Calib'
     */
    rtb_AND_iv = (rtb_TmpSignalConversionAtVePMDR_U_BF1_Sy >
                  KeGENR_U_CntctrCls12VTH_Lo);

    /* RelationalOperator: '<S18>/Comparison2' incorporates:
     *  Constant: '<S480>/Calib'
     */
    rtb_AND_goz = (rtb_TmpSignalConversionAtVePMDR_U_BF2_Sy >
                   KeGENR_U_CntctrCls12VTH_Hi);

    /* RelationalOperator: '<S18>/Comparison3' incorporates:
     *  Constant: '<S481>/Calib'
     */
    rtb_AND_pu = (rtb_TmpSignalConversionAtVePMDR_U_BF2_Sy >
                  KeGENR_U_CntctrCls12VTH_Lo);

    /* Outputs for Atomic SubSystem: '<S18>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S484>/EdgeRising' */
    /* Logic: '<S488>/AND' incorporates:
     *  Logic: '<S488>/OR1'
     *  UnitDelay: '<S488>/Unit Delay'
     */
    rtb_Logical5_lj = (rtb_P1fVoltCtrlEnbl && (!GENR_ac_DW.UnitDelay_DSTATE_pk));

    /* Update for UnitDelay: '<S488>/Unit Delay' */
    GENR_ac_DW.UnitDelay_DSTATE_pk = rtb_P1fVoltCtrlEnbl;

    /* End of Outputs for SubSystem: '<S484>/EdgeRising' */

    /* Switch: '<S484>/Switch1' incorporates:
     *  Constant: '<S482>/Calib'
     *  Constant: '<S484>/Constant Value1'
     *  Logic: '<S484>/OR'
     *  Logic: '<S484>/OR1'
     *  MinMax: '<S484>/Minimum'
     *  Sum: '<S484>/Summation'
     *  UnitDelay: '<S484>/Unit Delay'
     */
    if ((!rtb_P1fVoltCtrlEnbl) || rtb_Logical5_lj)
    {
        GENR_ac_DW.UnitDelay_DSTATE_gh = 0.0F;
    }
    else
    {
        GENR_ac_DW.UnitDelay_DSTATE_gh = fminf(KeGENR_t_Dbnc_CntctrCls12VTH_Hi,
            GENR_ac_DW.UnitDelay_DSTATE_gh + 0.05F);
    }

    /* End of Switch: '<S484>/Switch1' */
    /* End of Outputs for SubSystem: '<S18>/Turn On Delay Time' */

    /* Outputs for Atomic SubSystem: '<S18>/Turn On Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S485>/EdgeRising' */
    /* Logic: '<S489>/AND' incorporates:
     *  Logic: '<S489>/OR1'
     *  UnitDelay: '<S489>/Unit Delay'
     */
    rtb_Logical5_lj = (rtb_AND_iv && (!GENR_ac_DW.UnitDelay_DSTATE_gg));

    /* Update for UnitDelay: '<S489>/Unit Delay' */
    GENR_ac_DW.UnitDelay_DSTATE_gg = rtb_AND_iv;

    /* End of Outputs for SubSystem: '<S485>/EdgeRising' */

    /* Switch: '<S485>/Switch1' incorporates:
     *  Constant: '<S483>/Calib'
     *  Constant: '<S485>/Constant Value1'
     *  Logic: '<S485>/OR'
     *  Logic: '<S485>/OR1'
     *  MinMax: '<S485>/Minimum'
     *  Sum: '<S485>/Summation'
     *  UnitDelay: '<S485>/Unit Delay'
     */
    if ((!rtb_AND_iv) || rtb_Logical5_lj)
    {
        GENR_ac_DW.UnitDelay_DSTATE_g = 0.0F;
    }
    else
    {
        GENR_ac_DW.UnitDelay_DSTATE_g = fminf(KeGENR_t_Dbnc_CntctrCls12VTH_Lo,
            GENR_ac_DW.UnitDelay_DSTATE_g + 0.05F);
    }

    /* End of Switch: '<S485>/Switch1' */
    /* End of Outputs for SubSystem: '<S18>/Turn On Delay Time1' */

    /* Outputs for Atomic SubSystem: '<S18>/Turn On Delay Time2' */
    /* Outputs for Atomic SubSystem: '<S486>/EdgeRising' */
    /* Logic: '<S490>/AND' incorporates:
     *  Logic: '<S490>/OR1'
     *  UnitDelay: '<S490>/Unit Delay'
     */
    rtb_Logical5_lj = (rtb_AND_goz && (!GENR_ac_DW.UnitDelay_DSTATE_kix));

    /* Update for UnitDelay: '<S490>/Unit Delay' */
    GENR_ac_DW.UnitDelay_DSTATE_kix = rtb_AND_goz;

    /* End of Outputs for SubSystem: '<S486>/EdgeRising' */

    /* Switch: '<S486>/Switch1' incorporates:
     *  Constant: '<S482>/Calib'
     *  Constant: '<S486>/Constant Value1'
     *  Logic: '<S486>/OR'
     *  Logic: '<S486>/OR1'
     *  MinMax: '<S486>/Minimum'
     *  Sum: '<S486>/Summation'
     *  UnitDelay: '<S486>/Unit Delay'
     */
    if ((!rtb_AND_goz) || rtb_Logical5_lj)
    {
        GENR_ac_DW.UnitDelay_DSTATE_e = 0.0F;
    }
    else
    {
        GENR_ac_DW.UnitDelay_DSTATE_e = fminf(KeGENR_t_Dbnc_CntctrCls12VTH_Hi,
            GENR_ac_DW.UnitDelay_DSTATE_e + 0.05F);
    }

    /* End of Switch: '<S486>/Switch1' */
    /* End of Outputs for SubSystem: '<S18>/Turn On Delay Time2' */

    /* Outputs for Atomic SubSystem: '<S18>/Turn On Delay Time3' */
    /* Outputs for Atomic SubSystem: '<S487>/EdgeRising' */
    /* Logic: '<S491>/AND' incorporates:
     *  Logic: '<S491>/OR1'
     *  UnitDelay: '<S491>/Unit Delay'
     */
    rtb_Logical5_lj = (rtb_AND_pu && (!GENR_ac_DW.UnitDelay_DSTATE_jg));

    /* Update for UnitDelay: '<S491>/Unit Delay' */
    GENR_ac_DW.UnitDelay_DSTATE_jg = rtb_AND_pu;

    /* End of Outputs for SubSystem: '<S487>/EdgeRising' */

    /* Switch: '<S487>/Switch1' incorporates:
     *  Constant: '<S483>/Calib'
     *  Constant: '<S487>/Constant Value1'
     *  Logic: '<S487>/OR'
     *  Logic: '<S487>/OR1'
     *  MinMax: '<S487>/Minimum'
     *  Sum: '<S487>/Summation'
     *  UnitDelay: '<S487>/Unit Delay'
     */
    if ((!rtb_AND_pu) || rtb_Logical5_lj)
    {
        GENR_ac_DW.UnitDelay_DSTATE_n = 0.0F;
    }
    else
    {
        GENR_ac_DW.UnitDelay_DSTATE_n = fminf(KeGENR_t_Dbnc_CntctrCls12VTH_Lo,
            GENR_ac_DW.UnitDelay_DSTATE_n + 0.05F);
    }

    /* End of Switch: '<S487>/Switch1' */
    /* End of Outputs for SubSystem: '<S18>/Turn On Delay Time3' */

    /* Outputs for Atomic SubSystem: '<S20>/EdgeRising' */
    /* Logic: '<S493>/AND' incorporates:
     *  Logic: '<S493>/OR1'
     *  UnitDelay: '<S493>/Unit Delay'
     */
    rtb_Logical5_lj = !GENR_ac_DW.UnitDelay_DSTATE_bh;

    /* Update for UnitDelay: '<S493>/Unit Delay' incorporates:
     *  Constant: '<S20>/TRUE Constant'
     */
    GENR_ac_DW.UnitDelay_DSTATE_bh = true;

    /* End of Outputs for SubSystem: '<S20>/EdgeRising' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/GENO'
     */
    /* Outputs for Atomic SubSystem: '<S20>/Count Down  Reset Enabled' */
    /* RelationalOperator: '<S20>/Comparison4' incorporates:
     *  RelationalOperator: '<S20>/Comparison5'
     *  Switch: '<S492>/Switch1'
     *  Switch: '<S5>/Switch14'
     *  VariantMerge generated from: '<S17>/VariantSource'
     */
    rtb_VeGENR_e_ModeReq_New_SF =
        GENR_ac_B.VariantMerge_For_Variant_Source_Varian_a;

    /* Switch: '<S492>/Switch1' incorporates:
     *  Constant: '<S492>/Constant Value'
     *  Constant: '<S494>/Constant'
     *  Constant: '<S495>/Constant'
     *  Constant: '<S497>/Calib'
     *  Logic: '<S20>/Logical1'
     *  Logic: '<S492>/AND'
     *  RelationalOperator: '<S20>/Comparison4'
     *  RelationalOperator: '<S20>/Comparison5'
     *  RelationalOperator: '<S492>/Greater  Than'
     *  Switch: '<S492>/Switch2'
     *  UnitDelay: '<S492>/Unit Delay'
     */
    if (rtb_Logical5_lj || (((uint32)rtb_VeGENR_e_ModeReq_New_SF) ==
                            CeGENR_e_OperBuckCV))
    {
        GENR_ac_DW.UnitDelay_DSTATE_ke = KeGENR_Cnt_PerWuStop_NoBuckCV;
    }
    else
    {
        if ((((uint32)rtb_VeGENR_e_ModeReq_New_SF) != CeGENR_e_OperBuckCV) &&
                (((sint32)GENR_ac_DW.UnitDelay_DSTATE_ke) > 0))
        {
            /* UnitDelay: '<S492>/Unit Delay' incorporates:
             *  Constant: '<S492>/Constant Value1'
             *  Sum: '<S492>/Subtraction'
             *  Switch: '<S492>/Switch2'
             */
            GENR_ac_DW.UnitDelay_DSTATE_ke = (uint16)((sint32)(((sint32)
                GENR_ac_DW.UnitDelay_DSTATE_ke) - 1));
        }
    }

    /* If: '<S20>/If' incorporates:
     *  Constant: '<S492>/Constant Value2'
     *  Logic: '<S20>/Logical'
     *  Logic: '<S20>/Logical13'
     *  RelationalOperator: '<S492>/Greater  Than1'
     *  UnitDelay: '<S492>/Unit Delay'
     */
    if ((rtb_TmpSignalConversionAtVeSSDR_b_HVBatP &&
            (!rtb_TmpSignalConversionAtVeSRAR_b_Invrtr)) && (((sint32)
            GENR_ac_DW.UnitDelay_DSTATE_ke) > 0))
    {
        /* Outputs for IfAction SubSystem: '<S20>/Subsystem' incorporates:
         *  ActionPort: '<S502>/Action Port'
         */
        /* Chart: '<S502>/Stateflow Chart' */
        /* Gateway: GENR_MedTEF/GENC_CntrlAPM/PeriodicWakeup/Subsystem/Stateflow
           Chart */
        /* During: GENR_MedTEF/GENC_CntrlAPM/PeriodicWakeup/Subsystem/Stateflow
           Chart */
        if (((uint32)GENR_ac_DW.is_active_c114_GENR_ac) == 0U)
        {
            /* Entry: GENR_MedTEF/GENC_CntrlAPM/PeriodicWakeup/Subsystem/Stateflow
               Chart */
            GENR_ac_DW.is_active_c114_GENR_ac = 1U;

            /* Entry Internal: GENR_MedTEF/GENC_CntrlAPM/PeriodicWakeup/Subsystem/Stateflow
               Chart */
            /* Transition: '<S515>:11' */
            GENR_ac_B.VeGENR_t_StateTimer1 = 0.0F;
            GENR_ac_DW.is_c114_GENR_ac = GENR_ac_IN_Incomplete;

            /* Merge: '<S20>/Merge1' */
            /* Entry 'Incomplete': '<S515>:5' */
            rtb_TmpSignalConversionAtVeSSDR_b_HVBatP = false;
            GENR_ac_B.VeGENR_t_StateTimer2 = 0.0F;
        }
        else if (((sint32)GENR_ac_DW.is_c114_GENR_ac) == 1)
        {
            /* Merge: '<S20>/Merge1' */
            rtb_TmpSignalConversionAtVeSSDR_b_HVBatP = true;

            /* During 'Complete': '<S515>:4' */
        }
        else
        {
            /* Merge: '<S20>/Merge1' */
            rtb_TmpSignalConversionAtVeSSDR_b_HVBatP = false;

            /* During 'Incomplete': '<S515>:5' */
            if (((((VeGENR_Pct_IBSSOC >= KeGENR_Pct_Trgt_SOC) ||
                    (VeGENR_Pct_HVBatPackSOC < KeGENR_Pct_MinHVSOC)) &&
                    (GENR_ac_B.VeGENR_t_StateTimer1 > KeGENR_t_WU_Dbnc)) &&
                    (GENR_ac_B.VeGENR_t_StateTimer2 > KeGENR_t_WU_Dbnc)) ||
                    (GENR_ac_B.VeGENR_t_StateTimer1 > KeGENR_t_MaxTimerB4ShtDwn))
            {
                /* Transition: '<S515>:10' */
                /* Transition: '<S515>:28' */
                GENR_ac_DW.is_c114_GENR_ac = GENR_ac_IN_Complete;

                /* Merge: '<S20>/Merge1' */
                /* Entry 'Complete': '<S515>:4' */
                rtb_TmpSignalConversionAtVeSSDR_b_HVBatP = true;
                GENR_ac_B.CANC_On = false;
            }
            else if (GENR_ac_B.VeGENR_t_StateTimer2 > ((((fabsf
                         (KeGENR_Pct_Trgt_SOC - VeGENR_Pct_IBSSOC) *
                         KeGENR_t_SOC_Factor) * 60.0F) + KeGENR_t_WU_Dbnc) +
                      1.0F))
            {
                /* Transition: '<S515>:8' */
                GENR_ac_B.CANC_On = true;
                GENR_ac_DW.is_c114_GENR_ac = GENR_ac_IN_Incomplete;

                /* Entry 'Incomplete': '<S515>:5' */
                GENR_ac_B.VeGENR_t_StateTimer2 = 0.0F;
            }
            else
            {
                GENR_ac_B.VeGENR_t_StateTimer1 += 0.05F;
                GENR_ac_B.VeGENR_t_StateTimer2 += 0.05F;
                GENR_ac_B.CANC_On = false;
            }
        }

        /* End of Chart: '<S502>/Stateflow Chart' */

        /* Merge: '<S20>/Merge2' incorporates:
         *  SignalConversion generated from: '<S502>/VeGENR_b_CAN_CWakeUp'
         */
        rtb_Logical5_lj = GENR_ac_B.CANC_On;

        /* End of Outputs for SubSystem: '<S20>/Subsystem' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S20>/Subsystem1' incorporates:
         *  ActionPort: '<S503>/Action Port'
         */
        /* Merge: '<S20>/Merge1' incorporates:
         *  Constant: '<S503>/TRUE Constant'
         *  SignalConversion generated from: '<S503>/OutputParameter'
         */
        rtb_TmpSignalConversionAtVeSSDR_b_HVBatP = true;

        /* Merge: '<S20>/Merge2' incorporates:
         *  Constant: '<S503>/FALSE Constant1'
         *  SignalConversion generated from: '<S503>/OutputParameter1'
         */
        rtb_Logical5_lj = false;

        /* End of Outputs for SubSystem: '<S20>/Subsystem1' */
    }

    /* End of If: '<S20>/If' */
    /* End of Outputs for SubSystem: '<S20>/Count Down  Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S20>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S504>/EdgeFalling1' */
    /* Logic: '<S516>/AND' incorporates:
     *  Logic: '<S516>/OR1'
     *  UnitDelay: '<S516>/Unit Delay'
     */
    rtb_AND_nz = ((!rtb_Logical5_lj) && (GENR_ac_DW.UnitDelay_DSTATE_hq));

    /* Update for UnitDelay: '<S516>/Unit Delay' */
    GENR_ac_DW.UnitDelay_DSTATE_hq = rtb_Logical5_lj;

    /* End of Outputs for SubSystem: '<S504>/EdgeFalling1' */

    /* Switch: '<S504>/Switch' incorporates:
     *  Constant: '<S499>/Calib'
     *  Constant: '<S504>/Constant Value1'
     *  MinMax: '<S504>/Minimum'
     *  Sum: '<S504>/Summation'
     *  UnitDelay: '<S504>/Unit Delay'
     */
    if (rtb_AND_nz)
    {
        GENR_ac_DW.UnitDelay_DSTATE_k = KeGENR_t_HoldCANCOn_PerWu;
    }
    else
    {
        GENR_ac_DW.UnitDelay_DSTATE_k = fmaxf(GENR_ac_DW.UnitDelay_DSTATE_k -
            0.05F, 0.0F);
    }

    /* End of Switch: '<S504>/Switch' */
    /* End of Outputs for SubSystem: '<S20>/Turn Off Delay Time' */

    /* SignalConversion generated from: '<S4>/APMIdcHvSetP' incorporates:
     *  Constant: '<S24>/Calib'
     */
    GENR_ac_B.OutportBufferForAPMIdcHvSetP = KeGENR_I_APM_IdcHvSetP;

    /* SignalConversion generated from: '<S4>/APM_VdcHvSetP' incorporates:
     *  Constant: '<S26>/Calib'
     */
    GENR_ac_B.OutportBufferForAPM_VdcHvSetP = KeGENR_U_APM_VdcHvSetP;

    /* SignalConversion generated from: '<S4>/IdcLvSetP' incorporates:
     *  Constant: '<S25>/Calib'
     */
    GENR_ac_B.OutportBufferForIdcLvSetP = KeGENR_I_APM_IdcLvSetP;

    /* If: '<S20>/If1' incorporates:
     *  Constant: '<S498>/Calib'
     */
    if (KeGENR_b_Enable_PerWuTimer)
    {
        /* Outputs for IfAction SubSystem: '<S20>/PerWu_Timer_Func' incorporates:
         *  ActionPort: '<S500>/Action Port'
         */
        /* Switch: '<S507>/Switch1' incorporates:
         *  Constant: '<S506>/Constant'
         *  Constant: '<S508>/Calib'
         *  Gain: '<S588>/Gain'
         *  Logic: '<S500>/Logical1'
         *  RelationalOperator: '<S500>/Comparison4'
         *  RelationalOperator: '<S500>/Relational Operator'
         *  Switch: '<S500>/Switch'
         *  Switch: '<S507>/Switch2'
         *  Switch: '<S6>/Switch4'
         */
        if ((VeGENR_Pct_HVBatPackSOC < KeGENR_Pct_HVBatSOCLowThrsh_PerWU) ||
                rtb_TmpSignalConversionAtVeSRAR_b_Invrtr)
        {
            /* Merge: '<S20>/Merge' incorporates:
             *  Constant: '<S509>/Calib'
             */
            rtb_TmpSignalConversionAtVePMDR_U_BF1_Sy =
                KeGENR_t_HVBatSOCLow_PerWUTimer;
        }
        else
        {
            /* Outputs for Function Call SubSystem: '<S1>/InputProcessing' */
            if (rtb_TmpSignalConversionAtVeIDCR_b_IBS_Ba)
            {
                /* Switch: '<S500>/Switch2' incorporates:
                 *  Constant: '<S506>/Constant'
                 *  RelationalOperator: '<S500>/Comparison4'
                 *  Switch: '<S507>/Switch2'
                 *  Switch: '<S6>/Switch4'
                 */
                if (((uint32)VeGENR_e_ShippingMode) ==
                        CePLTR_e_ShipingMode_SHIP_MD)
                {
                    /* Merge: '<S20>/Merge' incorporates:
                     *  Constant: '<S511>/Calib'
                     *  Switch: '<S507>/Switch2'
                     */
                    rtb_TmpSignalConversionAtVePMDR_U_BF1_Sy =
                        KeGENR_t_IBSSOCFA_ShipMode;
                }
                else
                {
                    /* Merge: '<S20>/Merge' incorporates:
                     *  Constant: '<S510>/Calib'
                     *  Switch: '<S507>/Switch2'
                     */
                    rtb_TmpSignalConversionAtVePMDR_U_BF1_Sy =
                        KeGENR_t_IBSSOCFA_FieldMode;
                }

                /* End of Switch: '<S500>/Switch2' */
            }
            else
            {
                if (((uint32)VeGENR_e_ShippingMode) ==
                        CePLTR_e_ShipingMode_SHIP_MD)
                {
                    /* Switch: '<S500>/Switch' incorporates:
                     *  Lookup_n-D: '<S513>/Vector'
                     *  Switch: '<S507>/Switch2'
                     *  Switch: '<S6>/Switch14'
                     */
                    rtb_Switch_he4 = look1_iflf_binlca_16a(VeGENR_Pct_IBSSOC, ((
                        const float32 *)&(KxGENR_t_WU_Ship_Days[0])), ((const
                        float32 *)&(KtGENR_t_WU_Ship_Days[0])), 4U);
                }
                else
                {
                    /* Switch: '<S500>/Switch' incorporates:
                     *  Lookup_n-D: '<S512>/Vector'
                     *  Switch: '<S507>/Switch2'
                     *  Switch: '<S6>/Switch14'
                     */
                    rtb_Switch_he4 = look1_iflf_binlca_16a(VeGENR_Pct_IBSSOC, ((
                        const float32 *)&(KxGENR_t_WU_Field_Days[0])), ((const
                        float32 *)&(KtGENR_t_WU_Field_Days[0])), 4U);
                }

                /* Merge: '<S20>/Merge' incorporates:
                 *  Constant: '<S500>/Constant Value'
                 *  Product: '<S500>/Product'
                 *  Switch: '<S507>/Switch2'
                 */
                rtb_TmpSignalConversionAtVePMDR_U_BF1_Sy = 24.0F *
                    rtb_Switch_he4;
            }

            /* End of Outputs for SubSystem: '<S1>/InputProcessing' */
        }

        /* End of Switch: '<S507>/Switch1' */
        /* End of Outputs for SubSystem: '<S20>/PerWu_Timer_Func' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S20>/PerWu_Timer_NotFunc' incorporates:
         *  ActionPort: '<S501>/Action Port'
         */
        /* Merge: '<S20>/Merge' incorporates:
         *  Constant: '<S501>/Constant Value'
         *  SignalConversion generated from: '<S501>/Out1'
         */
        rtb_TmpSignalConversionAtVePMDR_U_BF1_Sy = 0.0F;

        /* End of Outputs for SubSystem: '<S20>/PerWu_Timer_NotFunc' */
    }

    /* End of If: '<S20>/If1' */

    /* Outputs for Atomic SubSystem: '<S20>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S505>/EdgeRising' */
    /* Logic: '<S517>/AND' incorporates:
     *  Logic: '<S517>/OR1'
     *  UnitDelay: '<S517>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeIDCR_b_IBS_Ba =
        (rtb_TmpSignalConversionAtVeSSDR_b_HVBatP &&
         (!GENR_ac_DW.UnitDelay_DSTATE_es));

    /* Update for UnitDelay: '<S517>/Unit Delay' */
    GENR_ac_DW.UnitDelay_DSTATE_es = rtb_TmpSignalConversionAtVeSSDR_b_HVBatP;

    /* End of Outputs for SubSystem: '<S505>/EdgeRising' */

    /* Switch: '<S505>/Switch1' incorporates:
     *  Constant: '<S496>/Calib'
     *  Constant: '<S505>/Constant Value'
     *  Constant: '<S505>/Constant Value1'
     *  Logic: '<S505>/OR'
     *  Logic: '<S505>/OR1'
     *  MinMax: '<S505>/Minimum'
     *  Sum: '<S505>/Summation'
     *  UnitDelay: '<S505>/Unit Delay'
     */
    if ((!rtb_TmpSignalConversionAtVeSSDR_b_HVBatP) ||
            rtb_TmpSignalConversionAtVeIDCR_b_IBS_Ba)
    {
        GENR_ac_DW.UnitDelay_DSTATE_ar = 0U;
    }
    else if (KeGENR_Cnt_PWURdy4ShtDwn_Dbnc < ((uint16)(((uint32)
                GENR_ac_DW.UnitDelay_DSTATE_ar) + 1U)))
    {
        /* MinMax: '<S505>/Minimum' incorporates:
         *  Constant: '<S496>/Calib'
         */
        GENR_ac_DW.UnitDelay_DSTATE_ar = KeGENR_Cnt_PWURdy4ShtDwn_Dbnc;
    }
    else
    {
        /* MinMax: '<S505>/Minimum' incorporates:
         *  Constant: '<S505>/Constant Value'
         *  Sum: '<S505>/Summation'
         *  UnitDelay: '<S505>/Unit Delay'
         */
        GENR_ac_DW.UnitDelay_DSTATE_ar = (uint16)(((uint32)
            GENR_ac_DW.UnitDelay_DSTATE_ar) + 1U);
    }

    /* End of Switch: '<S505>/Switch1' */
    /* End of Outputs for SubSystem: '<S20>/Turn On Delay Sample' */

    /* Update for If: '<S287>/If' */
    if (GENR_ac_DW.If_ActiveSubsystem == 1)
    {
        /* Update for IfAction SubSystem: '<S287>/P1f_VC_Func' incorporates:
         *  ActionPort: '<S348>/Action Port'
         */
        /* Update for UnitDelay: '<S351>/Unit Delay' */
        GENR_ac_DW.UnitDelay_DSTATE_ha =
            rtb_TmpSignalConversionAtVeSRAR_b_Invrtr;

        /* End of Update for SubSystem: '<S287>/P1f_VC_Func' */
    }

    /* End of Update for If: '<S287>/If' */

    /* Update for UnitDelay: '<S12>/Unit Delay' incorporates:
     *  VariantMerge generated from: '<S17>/VariantSource'
     */
    GENR_ac_DW.UnitDelay_DSTATE_fi0 =
        GENR_ac_B.VariantMerge_For_Variant_Source_Varian_a;

    /* Update for UnitDelay: '<S90>/Unit Delay1' incorporates:
     *  VariantMerge generated from: '<S17>/VariantSource'
     */
    GENR_ac_DW.UnitDelay1_DSTATE_a =
        GENR_ac_B.VariantMerge_For_Variant_Source_Varian_a;

    /* Update for UnitDelay: '<S288>/Unit Delay' incorporates:
     *  Constant: '<S384>/Constant'
     *  RelationalOperator: '<S288>/Comparison9'
     */
    GENR_ac_DW.UnitDelay_DSTATE_io = (CeGENR_e_Default == ((uint32)
        rtb_TmpSignalConversionAtVeIDCR_e_stMode));

    /* Update for UnitDelay: '<S12>/Unit Delay2' */
    GENR_ac_DW.UnitDelay2_DSTATE = VeGENR_b_VCOn_or_DfltAltrMode_Mrg;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/GENO'
     */
    /* Switch: '<S5>/Switch18' incorporates:
     *  Constant: '<S529>/Calib'
     */
    if (KeGENR_b_LowVoltSysFldToECMOvrd)
    {
        /* Switch: '<S5>/Switch18' incorporates:
         *  Constant: '<S530>/Calib'
         */
        rtb_TmpSignalConversionAtVeIDCR_b_IBS_Ba =
            KeGENR_b_LowVoltSysFldToECMOvrdVal;
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S1>/GENC_CntrlAPM' */
        /* Outputs for Atomic SubSystem: '<S12>/Turn On Delay Time6' */
        /* Switch: '<S5>/Switch18' incorporates:
         *  Constant: '<S430>/Calib'
         *  Logic: '<S446>/AND'
         *  RelationalOperator: '<S446>/Greater  Than'
         *  UnitDelay: '<S446>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeIDCR_b_IBS_Ba = (rtb_AND_n &&
            (GENR_ac_DW.UnitDelay_DSTATE_h >= KeGENR_t_DbncTelltale));

        /* End of Outputs for SubSystem: '<S12>/Turn On Delay Time6' */
        /* End of Outputs for SubSystem: '<S1>/GENC_CntrlAPM' */
    }

    /* End of Switch: '<S5>/Switch18' */

    /* Outport: '<Root>/VeGENR_I_APMIdcHvSetP' incorporates:
     *  Gain: '<S541>/Gain'
     *  SignalConversion generated from: '<S1>/VeGENR_I_APMIdcHvSetP'
     */
    (void)Rte_Write_VeGENR_I_APMIdcHvSetP_Value
        (GENR_ac_B.OutportBufferForAPMIdcHvSetP);

    /* Outport: '<Root>/VeGENR_I_APM_IdcLvSetP' incorporates:
     *  Gain: '<S558>/Gain'
     *  SignalConversion generated from: '<S1>/VeGENR_I_APM_IdcLvSetP'
     */
    (void)Rte_Write_VeGENR_I_APM_IdcLvSetP_Value
        (GENR_ac_B.OutportBufferForIdcLvSetP);

    /* Outport: '<Root>/VeGENR_I_APM_LV_Current' incorporates:
     *  Gain: '<S538>/Gain'
     *  SignalConversion generated from: '<S1>/VeGENR_I_APM_LV_Current'
     */
    (void)Rte_Write_VeGENR_I_APM_LV_Current_Value
        (rtb_TmpSignalConversionAtVeIDCR_I_APM_LV);

    /* Outport: '<Root>/VeGENR_U_APM_HV_Voltage' incorporates:
     *  Gain: '<S539>/Gain'
     *  SignalConversion generated from: '<S1>/VeGENR_U_APM_HV_Voltage'
     */
    (void)Rte_Write_VeGENR_U_APM_HV_Voltage_Value
        (rtb_TmpSignalConversionAtVeIDCR_U_APM_HV);

    /* Outport: '<Root>/VeGENR_U_APM_LV_Voltage' incorporates:
     *  Gain: '<S550>/Gain'
     *  SignalConversion generated from: '<S1>/VeGENR_U_APM_LV_Voltage'
     */
    (void)Rte_Write_VeGENR_U_APM_LV_Voltage_Value
        (rtb_TmpSignalConversionAtVeIDCR_U_APM_LV);

    /* Outport: '<Root>/VeGENR_U_APM_VdcHvSetP' incorporates:
     *  Gain: '<S540>/Gain'
     *  SignalConversion generated from: '<S1>/VeGENR_U_APM_VdcHvSetP'
     */
    (void)Rte_Write_VeGENR_U_APM_VdcHvSetP_Value
        (GENR_ac_B.OutportBufferForAPM_VdcHvSetP);

    /* Outport: '<Root>/VeGENR_U_IBS_BattVoltOut' incorporates:
     *  Gain: '<S555>/Gain'
     *  SignalConversion generated from: '<S1>/VeGENR_U_IBS_BattVolt'
     */
    (void)Rte_Write_VeGENR_U_IBS_BattVoltOut_Value(VeGENR_U_12VBattVolt);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/GENC_CntrlAPM'
     */
    /* Switch: '<S44>/Switch' incorporates:
     *  Constant: '<S83>/Constant'
     *  RelationalOperator: '<S44>/Comparison4'
     *  Switch: '<S44>/Switch1'
     */
    if (((uint32)rtb_TmpSignalConversionAtVePMDR_e_PMM_Po) ==
            CePMDR_e_PowerMode_Crank)
    {
        /* Outport: '<Root>/VeGENR_U_Low_Voltage_Limit' incorporates:
         *  Constant: '<S84>/Calib'
         *  SignalConversion generated from: '<S1>/VeGENR_U_Low_Voltage_Limit'
         */
        (void)Rte_Write_VeGENR_U_Low_Voltage_Limit_Value(KeGENR_U_BSGLimit_Crank);
    }
    else if (VeGENR_b_VCOn_or_DfltAltrMode_Mrg)
    {
        /* Outport: '<Root>/VeGENR_U_Low_Voltage_Limit' incorporates:
         *  Constant: '<S86>/Calib'
         *  SignalConversion generated from: '<S1>/VeGENR_U_Low_Voltage_Limit'
         *  Switch: '<S44>/Switch1'
         */
        (void)Rte_Write_VeGENR_U_Low_Voltage_Limit_Value
            (KeGENR_U_BSGLimit_ESS_P1fVC);
    }
    else
    {
        /* Outport: '<Root>/VeGENR_U_Low_Voltage_Limit' incorporates:
         *  Constant: '<S85>/Calib'
         *  SignalConversion generated from: '<S1>/VeGENR_U_Low_Voltage_Limit'
         *  Switch: '<S44>/Switch1'
         */
        (void)Rte_Write_VeGENR_U_Low_Voltage_Limit_Value(KeGENR_U_BSGLimit_ESS);
    }

    /* End of Switch: '<S44>/Switch' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/GENO'
     */
    /* Switch: '<S5>/Switch8' incorporates:
     *  Constant: '<S535>/Calib'
     */
    if (KeGENR_b_SetPVoltRq_Ovrd)
    {
        /* Outport: '<Root>/VeGENR_U_SetPVoltRq' incorporates:
         *  Constant: '<S521>/Calib'
         *  SignalConversion generated from: '<S1>/VeGENR_U_SetPVoltRq'
         */
        (void)Rte_Write_VeGENR_U_SetPVoltRq_Value(KeGENR_U_SetPVoltRq_OvrdVal);
    }
    else
    {
        /* Outport: '<Root>/VeGENR_U_SetPVoltRq' incorporates:
         *  SignalConversion generated from: '<S1>/VeGENR_U_SetPVoltRq'
         */
        (void)Rte_Write_VeGENR_U_SetPVoltRq_Value(VeGENR_U_SetPtVoltRq);
    }

    /* End of Switch: '<S5>/Switch8' */

    /* Switch: '<S5>/Switch21' incorporates:
     *  Constant: '<S534>/Calib'
     */
    if (KeGENR_b_SetPVoltRqP1fVC_Ovrd)
    {
        /* Outport: '<Root>/VeGENR_U_SetPVoltRq_P1fVC' incorporates:
         *  Constant: '<S520>/Calib'
         *  SignalConversion generated from: '<S1>/VeGENR_U_SetPVoltRq_P1fVC'
         */
        (void)Rte_Write_VeGENR_U_SetPVoltRq_P1fVC_Value
            (KeGENR_U_SetPVoltRqP1fVC_OvrdVal);
    }
    else
    {
        /* Outport: '<Root>/VeGENR_U_SetPVoltRq_P1fVC' incorporates:
         *  SignalConversion generated from: '<S1>/VeGENR_U_SetPVoltRq_P1fVC'
         */
        (void)Rte_Write_VeGENR_U_SetPVoltRq_P1fVC_Value(VeGENR_U_SetPtVoltRq);
    }

    /* End of Switch: '<S5>/Switch21' */

    /* Outport: '<Root>/VeGENR_b_APMFailure' incorporates:
     *  Gain: '<S545>/Gain'
     *  SignalConversion generated from: '<S1>/VeGENR_b_APMFailure'
     */
    (void)Rte_Write_VeGENR_b_APMFailure_Value(VeGENR_b_FailureLV);

    /* Outport: '<Root>/VeGENR_b_APMIdcHvSetPFA' incorporates:
     *  Constant: '<S522>/Calib'
     *  Gain: '<S557>/Gain'
     *  SignalConversion generated from: '<S1>/VeGENR_b_APMIdcHvSetPFA'
     */
    (void)Rte_Write_VeGENR_b_APMIdcHvSetPFA_Value
        (KeGENR_b_APMIdcHvSetPFA_OvrdVal);

    /* Outport: '<Root>/VeGENR_b_APM_BoostComplete' incorporates:
     *  Gain: '<S553>/Gain'
     *  SignalConversion generated from: '<S1>/VeGENR_b_APM_BoostComplete'
     */
    (void)Rte_Write_VeGENR_b_APM_BoostComplete_Value(VeGENR_b_APM_BoostCompleteO);

    /* Outport: '<Root>/VeGENR_b_APM_Ovrld' incorporates:
     *  Constant: '<S523>/Calib'
     *  Constant: '<S524>/Calib'
     *  SignalConversion generated from: '<S1>/VeGENR_b_APM_Ovrld'
     *  Switch: '<S5>/Switch4'
     */
    (void)Rte_Write_VeGENR_b_APM_Ovrld_Value((KeGENR_b_APM_Ovrld_Ovrd) &&
        (KeGENR_b_APM_Ovrld_OvrdVal));

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/GENC_CntrlAPM'
     */
    /* Outputs for Atomic SubSystem: '<S20>/Turn Off Delay Time' */
    /* Outport: '<Root>/VeGENR_b_CAN_CWakeUp' incorporates:
     *  Constant: '<S504>/Constant Value2'
     *  Logic: '<S4>/Logical1'
     *  Logic: '<S504>/AND'
     *  RelationalOperator: '<S504>/Greater  Than'
     *  SignalConversion generated from: '<S1>/VeGENR_b_CAN_CWakeUp'
     *  UnitDelay: '<S504>/Unit Delay'
     */
    (void)Rte_Write_VeGENR_b_CAN_CWakeUp_Value((rtb_Logical5_lj ||
        (GENR_ac_DW.UnitDelay_DSTATE_k > 0.0F)) || (VeGENR_b_CANCOnRq_IBS));

    /* End of Outputs for SubSystem: '<S20>/Turn Off Delay Time' */

    /* Outputs for Atomic SubSystem: '<S18>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S18>/Turn On Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S18>/Turn On Delay Time2' */
    /* Outputs for Atomic SubSystem: '<S18>/Turn On Delay Time3' */
    /* Outport: '<Root>/VeGENR_b_ClsCntcrCmd_LVCheck' incorporates:
     *  Constant: '<S482>/Calib'
     *  Constant: '<S483>/Calib'
     *  Logic: '<S18>/Logical1'
     *  Logic: '<S18>/Logical2'
     *  Logic: '<S18>/Logical3'
     *  Logic: '<S484>/AND'
     *  Logic: '<S485>/AND'
     *  Logic: '<S486>/AND'
     *  Logic: '<S487>/AND'
     *  RelationalOperator: '<S484>/Greater  Than'
     *  RelationalOperator: '<S485>/Greater  Than'
     *  RelationalOperator: '<S486>/Greater  Than'
     *  RelationalOperator: '<S487>/Greater  Than'
     *  SignalConversion generated from: '<S1>/VeGENR_b_ClsCntcrCmd_LVCheck'
     *  UnitDelay: '<S484>/Unit Delay'
     *  UnitDelay: '<S485>/Unit Delay'
     *  UnitDelay: '<S486>/Unit Delay'
     *  UnitDelay: '<S487>/Unit Delay'
     */
    (void)Rte_Write_VeGENR_b_ClsCntcrCmd_LVCheck_Value(((rtb_P1fVoltCtrlEnbl &&
        (GENR_ac_DW.UnitDelay_DSTATE_gh >= KeGENR_t_Dbnc_CntctrCls12VTH_Hi)) ||
        (rtb_AND_iv && (GENR_ac_DW.UnitDelay_DSTATE_g >=
                        KeGENR_t_Dbnc_CntctrCls12VTH_Lo))) || ((rtb_AND_goz &&
        (GENR_ac_DW.UnitDelay_DSTATE_e >= KeGENR_t_Dbnc_CntctrCls12VTH_Hi)) ||
        (rtb_AND_pu && (GENR_ac_DW.UnitDelay_DSTATE_n >=
                        KeGENR_t_Dbnc_CntctrCls12VTH_Lo))));

    /* End of Outputs for SubSystem: '<S18>/Turn On Delay Time3' */
    /* End of Outputs for SubSystem: '<S18>/Turn On Delay Time2' */
    /* End of Outputs for SubSystem: '<S18>/Turn On Delay Time1' */
    /* End of Outputs for SubSystem: '<S18>/Turn On Delay Time' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/GENO'
     */
    /* Outport: '<Root>/VeGENR_b_HVDspt_Enbl' incorporates:
     *  Gain: '<S548>/Gain'
     *  SignalConversion generated from: '<S1>/VeGENR_b_HVDspt_Enbl'
     */
    (void)Rte_Write_VeGENR_b_HVDspt_Enbl_Value(VeGENR_b_Enbl_HVDspt);

    /* Switch: '<S5>/Switch' incorporates:
     *  Abs: '<S94>/Abs'
     *  Constant: '<S233>/Calib'
     *  Constant: '<S525>/Calib'
     *  Constant: '<S526>/Calib'
     *  RelationalOperator: '<S94>/Comparison'
     *  Sum: '<S94>/Sum1'
     */
    if (KeGENR_b_HybGenSPDtyCycPtOverAct_Ovrd)
    {
        rtb_Logical2_dg = KeGENR_b_HybGenSPDtyCycPtOverAct_OvrdVal;
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S1>/GENC_CntrlAPM' */
        rtb_Logical2_dg = (fabsf(Switch12 - VeGENR_U_SetPtSelect) >
                           KeGENR_U_MinDiffB4OvrRide);

        /* End of Outputs for SubSystem: '<S1>/GENC_CntrlAPM' */
    }

    /* End of Switch: '<S5>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeGENR_b_HybGenSPDtyCycPtOverAct' incorporates:
     *  SignalConversion generated from: '<S1>/VeGENR_b_HybGenSPDtyCycPtOverAct'
     */
    (void)Rte_Write_VeGENR_b_HybGenSPDtyCycPtOverAct_Value(rtb_Logical2_dg);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/GENC_CntrlAPM'
     */
    /* Outputs for Atomic SubSystem: '<S12>/Turn On Delay Time9' */
    /* Outport: '<Root>/VeGENR_b_IDCMThrmlRunAway' incorporates:
     *  Constant: '<S429>/Calib'
     *  Logic: '<S449>/AND'
     *  RelationalOperator: '<S449>/Greater  Than'
     *  SignalConversion generated from: '<S1>/VeGENR_b_IDCMThrmlRunAway'
     *  UnitDelay: '<S449>/Unit Delay'
     */
    (void)Rte_Write_VeGENR_b_IDCMThrmlRunAway_Value
        (rtb_TmpSignalConversionAtVeHPMR_b_PropSy &&
         (GENR_ac_DW.UnitDelay_DSTATE_gv >= KeGENR_t_DbncIDCMThrmlRunAway));

    /* End of Outputs for SubSystem: '<S12>/Turn On Delay Time9' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/GENO'
     */
    /* Outport: '<Root>/VeGENR_b_LV_SysVoltage_Low' incorporates:
     *  Gain: '<S549>/Gain'
     *  SignalConversion generated from: '<S1>/VeGENR_b_LV_SysVoltage_Low'
     */
    (void)Rte_Write_VeGENR_b_LV_SysVoltage_Low_Value(VeGENR_b_Fault9);

    /* Switch: '<S5>/Switch1' incorporates:
     *  Constant: '<S527>/Calib'
     *  Constant: '<S528>/Calib'
     *  Logic: '<S276>/Logical9'
     */
    if (KeGENR_b_LowVoltEnblRq_Ovrd)
    {
        rtb_Logical2_dg = KeGENR_b_LowVoltEnblRq_OvrdVal;
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S1>/GENC_CntrlAPM' */
        rtb_Logical2_dg = (((VeGENR_b_HVBattCntctrCheck) &&
                            (VeGENR_b_CurrVoltCheck)) &&
                           (VeGENR_b_OVUVPwrLimCheck));

        /* End of Outputs for SubSystem: '<S1>/GENC_CntrlAPM' */
    }

    /* End of Switch: '<S5>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeGENR_b_LowVoltEnblRq' incorporates:
     *  SignalConversion generated from: '<S1>/VeGENR_b_LowVoltEnblRq'
     */
    (void)Rte_Write_VeGENR_b_LowVoltEnblRq_Value(rtb_Logical2_dg);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/GENO'
     */
    /* Switch: '<S5>/Switch3' incorporates:
     *  Constant: '<S531>/Calib'
     */
    if (KeGENR_b_LowVoltSysFld_Ovrd)
    {
        /* Outport: '<Root>/VeGENR_b_LowVoltSysFld' incorporates:
         *  Constant: '<S532>/Calib'
         *  SignalConversion generated from: '<S1>/VeGENR_b_LowVoltSysFld'
         */
        (void)Rte_Write_VeGENR_b_LowVoltSysFld_Value
            (KeGENR_b_LowVoltSysFld_OvrdVal);
    }
    else
    {
        /* Outport: '<Root>/VeGENR_b_LowVoltSysFld' incorporates:
         *  SignalConversion generated from: '<S1>/VeGENR_b_LowVoltSysFld'
         */
        (void)Rte_Write_VeGENR_b_LowVoltSysFld_Value
            (rtb_TmpSignalConversionAtVeSRAR_b_Invrtr);
    }

    /* End of Switch: '<S5>/Switch3' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeGENR_b_LowVoltSysFldToECM' incorporates:
     *  SignalConversion generated from: '<S1>/VeGENR_b_LowVoltSysFldToECM'
     */
    (void)Rte_Write_VeGENR_b_LowVoltSysFldToECM_Value
        (rtb_TmpSignalConversionAtVeIDCR_b_IBS_Ba);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/GENO'
     */
    /* Outport: '<Root>/VeGENR_b_P1fVoltCtrlEnbl' incorporates:
     *  Gain: '<S546>/Gain'
     *  SignalConversion generated from: '<S1>/VeGENR_b_P1fVoltCtrlEnbl'
     */
    (void)Rte_Write_VeGENR_b_P1fVoltCtrlEnbl_Value
        (GENR_ac_B.VariantMerge_For_Variant_Source_VariantS);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/GENC_CntrlAPM'
     */
    /* Outputs for Atomic SubSystem: '<S20>/Turn On Delay Sample' */
    /* Outport: '<Root>/VeGENR_b_RdyForShtDwn' incorporates:
     *  Constant: '<S496>/Calib'
     *  Logic: '<S505>/AND'
     *  RelationalOperator: '<S505>/Greater  Than'
     *  SignalConversion generated from: '<S1>/VeGENR_b_RdyForShtDwn'
     *  UnitDelay: '<S505>/Unit Delay'
     */
    (void)Rte_Write_VeGENR_b_RdyForShtDwn_Value
        (rtb_TmpSignalConversionAtVeSSDR_b_HVBatP &&
         (GENR_ac_DW.UnitDelay_DSTATE_ar >= KeGENR_Cnt_PWURdy4ShtDwn_Dbnc));

    /* End of Outputs for SubSystem: '<S20>/Turn On Delay Sample' */

    /* Outport: '<Root>/VeGENR_b_RdyForShtDwnAPMCleared' incorporates:
     *  Constant: '<S380>/Constant'
     *  Logic: '<S288>/Logical'
     *  RelationalOperator: '<S288>/Comparison1'
     *  SignalConversion generated from: '<S1>/VeGENR_b_RdyForShtDwnAPMCleared'
     *  SignalConversion generated from: '<S1>/VeIDCR_e_stModeRqAPM'
     */
    (void)Rte_Write_VeGENR_b_RdyForShtDwnAPMCleared_Value
        ((GENR_ac_DW.UnitDelay_DSTATE_ms) && (((uint32)
           rtb_TmpSignalConversionAtVeIDCR_e_stMode) == CeGENR_e_Default));

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/GENO'
     */
    /* Outport: '<Root>/VeGENR_b_SetPVoltRqFA' incorporates:
     *  Constant: '<S533>/Calib'
     *  Gain: '<S556>/Gain'
     *  SignalConversion generated from: '<S1>/VeGENR_b_SetPVoltRqFA'
     */
    (void)Rte_Write_VeGENR_b_SetPVoltRqFA_Value(KeGENR_b_SetPVoltRqFA_OvrdVal);

    /* Outport: '<Root>/VeGENR_b_SrvcBattReChrgFlSts' incorporates:
     *  Logic: '<S5>/Logical2'
     *  SignalConversion generated from: '<S1>/VeGENR_b_SrvcBattReChrgFlSts'
     */
    (void)Rte_Write_VeGENR_b_SrvcBattReChrgFlSts_Value
        (!rtb_TmpSignalConversionAtVeIDCR_b_IBS_Ba);

    /* Switch: '<S5>/Switch14' incorporates:
     *  Constant: '<S536>/Calib'
     *  Constant: '<S537>/Calib'
     */
    if (KeGENR_b_stModeReq_Ovrd)
    {
        rtb_VeGENR_e_ModeReq_New_SF = KeGENR_e_stModeReq_OvrdVal;
    }

    /* Outport: '<Root>/VeGENR_e_stModeReq' incorporates:
     *  SignalConversion generated from: '<S1>/VeGENR_e_stModeReq'
     *  Switch: '<S5>/Switch14'
     */
    (void)Rte_Write_VeGENR_e_stModeReq_Value(rtb_VeGENR_e_ModeReq_New_SF);

    /* Outport: '<Root>/VeGENR_e_stModeRqAPM' incorporates:
     *  DataTypeConversion: '<S519>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/VeGENR_e_stModeRqAPM'
     *  SignalConversion generated from: '<S1>/VeIDCR_e_stModeRqAPM'
     */
    (void)Rte_Write_VeGENR_e_stModeRqAPM_Value
        (rtb_TmpSignalConversionAtVeIDCR_e_stMode);

    /* Outport: '<Root>/VeGENR_t_BattPerWU_12VChg_Timer' incorporates:
     *  Gain: '<S552>/Gain'
     *  SignalConversion generated from: '<S1>/VeGENR_t_BattPerWU_12VChg_Timer'
     */
    (void)Rte_Write_VeGENR_t_BattPerWU_12VChg_Timer_Value
        (rtb_TmpSignalConversionAtVePMDR_U_BF1_Sy);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' */
}

/* Output function */
FUNC(void, GENR_CODE) GENR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/GENR_PwrOff'
     */
    /* Outport: '<Root>/NeGENR_Cnt_InPlantAPMOff_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeGENR_Cnt_InPlantAPMOff'
     */
    (void)Rte_Write_NeGENR_Cnt_InPlantAPMOff_NeGENR_Cnt_InPlantAPMOff
        (GENR_ac_DW.NeGENR_Cnt_InPlantAPMOff);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, GENR_CODE) GENR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/GENR_PwrOn'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/DSM_Init'
     */
    /* DataStoreWrite: '<S592>/NeGENR_Cnt_InPlantAPMOff' incorporates:
     *  Inport: '<Root>/NeGENR_Cnt_InPlantAPMOff_PM_In'
     */
    (void)Rte_Read_NeGENR_Cnt_InPlantAPMOff_Rx_NeGENR_Cnt_InPlantAPMOff
        (&GENR_ac_DW.NeGENR_Cnt_InPlantAPMOff);

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S593>/VeGENR_b_HybGenSPDtyCycPtOverAct_Out_Init' */
    GENR_ac_B.OutportBufferForVeGENR_b_HybGenSPDtyCycP = false;

    /* SignalConversion generated from: '<S593>/VeGENR_b_LowVoltEnblRq_Out_Init' */
    GENR_ac_B.OutportBufferForVeGENR_b_LowVoltEnblRq_O = false;

    /* SignalConversion generated from: '<S593>/VeGENR_b_LowVoltSysFld_Out_Init' */
    GENR_ac_B.OutportBufferForVeGENR_b_LowVoltSysFld_O = false;

    /* SignalConversion generated from: '<S593>/VeGENR_b_APM_Ovrld_Out_Init' */
    GENR_ac_B.OutportBufferForVeGENR_b_APM_Ovrld_Out_I = false;

    /* SignalConversion generated from: '<S593>/VeGENR_e_stModeReq_Out_Init' incorporates:
     *  Constant: '<S593>/Const5'
     */
    GENR_ac_B.OutportBufferForVeGENR_e_stModeReq_Out_I = GENR_ac_ConstB.Const5;

    /* SignalConversion generated from: '<S593>/VeGENR_I_APM_IdcLvSetP_Out_Init' */
    GENR_ac_B.OutportBufferForVeGENR_I_APM_IdcLvSetP_O = 0.0F;

    /* SignalConversion generated from: '<S593>/VeGENR_U_APM_VdcHvSetP_Out_Init' */
    GENR_ac_B.OutportBufferForVeGENR_U_APM_VdcHvSetP_O = 0.0F;

    /* SignalConversion generated from: '<S593>/VeGENR_U_SetPVoltRq_Out_Init' */
    GENR_ac_B.OutportBufferForVeGENR_U_SetPVoltRq_Out_ = 0.0F;

    /* SignalConversion generated from: '<S593>/VeGENR_I_APMIdcHvSetP_Out_Init' */
    GENR_ac_B.OutportBufferForVeGENR_I_APMIdcHvSetP_Ou = 0.0F;

    /* SignalConversion generated from: '<S593>/VeGENR_b_SetPVoltRqFA_Out_Init' */
    GENR_ac_B.OutportBufferForVeGENR_b_SetPVoltRqFA_Ou = false;

    /* SignalConversion generated from: '<S593>/VeGENR_b_APMIdcHvSetPFA_Out_Init' */
    GENR_ac_B.OutportBufferForVeGENR_b_APMIdcHvSetPFA_ = false;

    /* SignalConversion generated from: '<S593>/VeGENR_U_APM_HV_Voltage_Out_Init' */
    GENR_ac_B.OutportBufferForVeGENR_U_APM_HV_Voltage_ = 0.0F;

    /* SignalConversion generated from: '<S593>/VeGENR_U_APM_LV_Voltage_Out_Init' */
    GENR_ac_B.OutportBufferForVeGENR_U_APM_LV_Voltage_ = 0.0F;

    /* SignalConversion generated from: '<S593>/VeGENR_I_APM_LV_Current_Out_Init' */
    GENR_ac_B.OutportBufferForVeGENR_I_APM_LV_Current_ = 0.0F;

    /* SignalConversion generated from: '<S593>/VeGENR_b_RdyForShtDwn_Out_Init' */
    GENR_ac_B.OutportBufferForVeGENR_b_RdyForShtDwn_Ou = false;

    /* SignalConversion generated from: '<S593>/VeGENR_t_BattPerWU_12VChg_Timer_Out_Init' */
    GENR_ac_B.OutportBufferForVeGENR_t_BattPerWU_12VCh = 0.0F;

    /* SignalConversion generated from: '<S593>/VeGENR_U_IBS_BattVoltOut_Out_Init' */
    GENR_ac_B.OutportBufferForVeGENR_U_IBS_BattVoltOut = 0.0F;

    /* SignalConversion generated from: '<S593>/VeGENR_b_RdyForShtDwnAPMCleared_Out_Init' */
    GENR_ac_B.OutportBufferForVeGENR_b_RdyForShtDwnAPM = false;

    /* SignalConversion generated from: '<S593>/VeGENR_b_CAN_CWakeUp_Out_Init' */
    GENR_ac_B.OutportBufferForVeGENR_b_CAN_CWakeUp_Out = false;

    /* SignalConversion generated from: '<S593>/VeGENR_b_LowVoltSysFldToECM_Out_Init' */
    GENR_ac_B.OutportBufferForVeGENR_b_LowVoltSysFldTo = false;

    /* SignalConversion generated from: '<S593>/VeGENR_b_APM_BoostComplete_Out_Init' */
    GENR_ac_B.OutportBufferForVeGENR_b_APM_BoostComple = false;

    /* SignalConversion generated from: '<S593>/VeGENR_e_stModeRqAPM_Out_Init' incorporates:
     *  Constant: '<S593>/Const22'
     */
    GENR_ac_B.OutportBufferForVeGENR_e_stModeRqAPM_Out = GENR_ac_ConstB.Const22;

    /* SignalConversion generated from: '<S593>/VeGENR_b_SrvcBattReChrgFlSts_Out_Init' */
    GENR_ac_B.OutportBufferForVeGENR_b_SrvcBattReChrgF = false;

    /* SignalConversion generated from: '<S593>/VeGENR_b_APMFailure_Out_Init' */
    GENR_ac_B.OutportBufferForVeGENR_b_APMFailure_Out_ = false;

    /* SignalConversion generated from: '<S593>/VeGENR_U_Low_Voltage_Limit_Out_Init' */
    GENR_ac_B.OutportBufferForVeGENR_U_Low_Voltage_Lim = 0.0F;

    /* SignalConversion generated from: '<S593>/VeGENR_b_P1fVoltCtrlEnbl_Out_Init' */
    GENR_ac_B.OutportBufferForVeGENR_b_P1fVoltCtrlEnbl = false;

    /* SignalConversion generated from: '<S593>/VeGENR_U_SetPVoltRq_P1fVC_Out_Init' */
    GENR_ac_B.OutportBufferForVeGENR_U_SetPVoltRq_P1fV = 0.0F;

    /* SignalConversion generated from: '<S593>/VeGENR_b_ClsCntcrCmd_LVCheck_Out_Init' */
    GENR_ac_B.OutportBufferForVeGENR_b_ClsCntcrCmd_LVC = false;

    /* SignalConversion generated from: '<S593>/VeGENR_b_HVDspt_Enbl_Out_Init' */
    GENR_ac_B.OutportBufferForVeGENR_b_HVDspt_Enbl_Out = false;

    /* SignalConversion generated from: '<S593>/VeGENR_b_LV_SysVoltage_Low_Out_Init' */
    GENR_ac_B.OutportBufferForVeGENR_b_LV_SysVoltage_L = false;

    /* SignalConversion generated from: '<S593>/VeGENR_b_IDCMThrmlRunAway_OutInit' */
    GENR_ac_B.OutportBufferForVeGENR_b_IDCMThrmlRunAwa = false;

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Outport: '<Root>/VeGENR_I_APMIdcHvSetP' incorporates:
     *  SignalConversion generated from: '<S3>/VeGENR_I_APMIdcHvSetP_Out_Init'
     */
    (void)Rte_Write_VeGENR_I_APMIdcHvSetP_Value
        (GENR_ac_B.OutportBufferForVeGENR_I_APMIdcHvSetP_Ou);

    /* Outport: '<Root>/VeGENR_I_APM_IdcLvSetP' incorporates:
     *  SignalConversion generated from: '<S3>/VeGENR_I_APM_IdcLvSetP_Out_Init'
     */
    (void)Rte_Write_VeGENR_I_APM_IdcLvSetP_Value
        (GENR_ac_B.OutportBufferForVeGENR_I_APM_IdcLvSetP_O);

    /* Outport: '<Root>/VeGENR_I_APM_LV_Current' incorporates:
     *  SignalConversion generated from: '<S3>/VeGENR_I_APM_LV_Current_Out_Init'
     */
    (void)Rte_Write_VeGENR_I_APM_LV_Current_Value
        (GENR_ac_B.OutportBufferForVeGENR_I_APM_LV_Current_);

    /* Outport: '<Root>/VeGENR_U_APM_HV_Voltage' incorporates:
     *  SignalConversion generated from: '<S3>/VeGENR_U_APM_HV_Voltage_Out_Init'
     */
    (void)Rte_Write_VeGENR_U_APM_HV_Voltage_Value
        (GENR_ac_B.OutportBufferForVeGENR_U_APM_HV_Voltage_);

    /* Outport: '<Root>/VeGENR_U_APM_LV_Voltage' incorporates:
     *  SignalConversion generated from: '<S3>/VeGENR_U_APM_LV_Voltage_Out_Init'
     */
    (void)Rte_Write_VeGENR_U_APM_LV_Voltage_Value
        (GENR_ac_B.OutportBufferForVeGENR_U_APM_LV_Voltage_);

    /* Outport: '<Root>/VeGENR_U_APM_VdcHvSetP' incorporates:
     *  SignalConversion generated from: '<S3>/VeGENR_U_APM_VdcHvSetP_Out_Init'
     */
    (void)Rte_Write_VeGENR_U_APM_VdcHvSetP_Value
        (GENR_ac_B.OutportBufferForVeGENR_U_APM_VdcHvSetP_O);

    /* Outport: '<Root>/VeGENR_U_IBS_BattVoltOut' incorporates:
     *  SignalConversion generated from: '<S3>/VeGENR_U_IBS_BattVoltOut_Out_Init'
     */
    (void)Rte_Write_VeGENR_U_IBS_BattVoltOut_Value
        (GENR_ac_B.OutportBufferForVeGENR_U_IBS_BattVoltOut);

    /* Outport: '<Root>/VeGENR_U_Low_Voltage_Limit' incorporates:
     *  SignalConversion generated from: '<S3>/VeGENR_U_Low_Voltage_Limit_Out_Init'
     */
    (void)Rte_Write_VeGENR_U_Low_Voltage_Limit_Value
        (GENR_ac_B.OutportBufferForVeGENR_U_Low_Voltage_Lim);

    /* Outport: '<Root>/VeGENR_U_SetPVoltRq' incorporates:
     *  SignalConversion generated from: '<S3>/VeGENR_U_SetPVoltRq_Out_Init'
     */
    (void)Rte_Write_VeGENR_U_SetPVoltRq_Value
        (GENR_ac_B.OutportBufferForVeGENR_U_SetPVoltRq_Out_);

    /* Outport: '<Root>/VeGENR_U_SetPVoltRq_P1fVC' incorporates:
     *  SignalConversion generated from: '<S3>/VeGENR_U_SetPVoltRq_P1fVC_Out_Init'
     */
    (void)Rte_Write_VeGENR_U_SetPVoltRq_P1fVC_Value
        (GENR_ac_B.OutportBufferForVeGENR_U_SetPVoltRq_P1fV);

    /* Outport: '<Root>/VeGENR_b_APMFailure' incorporates:
     *  SignalConversion generated from: '<S3>/VeGENR_b_APMFailure_Out_Init'
     */
    (void)Rte_Write_VeGENR_b_APMFailure_Value
        (GENR_ac_B.OutportBufferForVeGENR_b_APMFailure_Out_);

    /* Outport: '<Root>/VeGENR_b_APMIdcHvSetPFA' incorporates:
     *  SignalConversion generated from: '<S3>/VeGENR_b_APMIdcHvSetPFA_Out_Init'
     */
    (void)Rte_Write_VeGENR_b_APMIdcHvSetPFA_Value
        (GENR_ac_B.OutportBufferForVeGENR_b_APMIdcHvSetPFA_);

    /* Outport: '<Root>/VeGENR_b_APM_BoostComplete' incorporates:
     *  SignalConversion generated from: '<S3>/VeGENR_b_APM_BoostComplete_Out_Init'
     */
    (void)Rte_Write_VeGENR_b_APM_BoostComplete_Value
        (GENR_ac_B.OutportBufferForVeGENR_b_APM_BoostComple);

    /* Outport: '<Root>/VeGENR_b_APM_Ovrld' incorporates:
     *  SignalConversion generated from: '<S3>/VeGENR_b_APM_Ovrld_Out_Init'
     */
    (void)Rte_Write_VeGENR_b_APM_Ovrld_Value
        (GENR_ac_B.OutportBufferForVeGENR_b_APM_Ovrld_Out_I);

    /* Outport: '<Root>/VeGENR_b_CAN_CWakeUp' incorporates:
     *  SignalConversion generated from: '<S3>/VeGENR_b_CAN_CWakeUp_Out_Init'
     */
    (void)Rte_Write_VeGENR_b_CAN_CWakeUp_Value
        (GENR_ac_B.OutportBufferForVeGENR_b_CAN_CWakeUp_Out);

    /* Outport: '<Root>/VeGENR_b_ClsCntcrCmd_LVCheck' incorporates:
     *  SignalConversion generated from: '<S3>/VeGENR_b_ClsCntcrCmd_LVCheck_Out_Init'
     */
    (void)Rte_Write_VeGENR_b_ClsCntcrCmd_LVCheck_Value
        (GENR_ac_B.OutportBufferForVeGENR_b_ClsCntcrCmd_LVC);

    /* Outport: '<Root>/VeGENR_b_HVDspt_Enbl' incorporates:
     *  SignalConversion generated from: '<S3>/VeGENR_b_HVDspt_Enbl_Out_Init'
     */
    (void)Rte_Write_VeGENR_b_HVDspt_Enbl_Value
        (GENR_ac_B.OutportBufferForVeGENR_b_HVDspt_Enbl_Out);

    /* Outport: '<Root>/VeGENR_b_HybGenSPDtyCycPtOverAct' incorporates:
     *  SignalConversion generated from: '<S3>/VeGENR_b_HybGenSPDtyCycPtOverAct_Out_Init'
     */
    (void)Rte_Write_VeGENR_b_HybGenSPDtyCycPtOverAct_Value
        (GENR_ac_B.OutportBufferForVeGENR_b_HybGenSPDtyCycP);

    /* Outport: '<Root>/VeGENR_b_IDCMThrmlRunAway' incorporates:
     *  SignalConversion generated from: '<S3>/VeGENR_b_IDCMThrmlRunAway_OutInit'
     */
    (void)Rte_Write_VeGENR_b_IDCMThrmlRunAway_Value
        (GENR_ac_B.OutportBufferForVeGENR_b_IDCMThrmlRunAwa);

    /* Outport: '<Root>/VeGENR_b_LV_SysVoltage_Low' incorporates:
     *  SignalConversion generated from: '<S3>/VeGENR_b_LV_SysVoltage_Low_Out_Init'
     */
    (void)Rte_Write_VeGENR_b_LV_SysVoltage_Low_Value
        (GENR_ac_B.OutportBufferForVeGENR_b_LV_SysVoltage_L);

    /* Outport: '<Root>/VeGENR_b_LowVoltEnblRq' incorporates:
     *  SignalConversion generated from: '<S3>/VeGENR_b_LowVoltEnblRq_Out_Init'
     */
    (void)Rte_Write_VeGENR_b_LowVoltEnblRq_Value
        (GENR_ac_B.OutportBufferForVeGENR_b_LowVoltEnblRq_O);

    /* Outport: '<Root>/VeGENR_b_LowVoltSysFldToECM' incorporates:
     *  SignalConversion generated from: '<S3>/VeGENR_b_LowVoltSysFldToECM_Out_Init'
     */
    (void)Rte_Write_VeGENR_b_LowVoltSysFldToECM_Value
        (GENR_ac_B.OutportBufferForVeGENR_b_LowVoltSysFldTo);

    /* Outport: '<Root>/VeGENR_b_LowVoltSysFld' incorporates:
     *  SignalConversion generated from: '<S3>/VeGENR_b_LowVoltSysFld_Out_Init'
     */
    (void)Rte_Write_VeGENR_b_LowVoltSysFld_Value
        (GENR_ac_B.OutportBufferForVeGENR_b_LowVoltSysFld_O);

    /* Outport: '<Root>/VeGENR_b_P1fVoltCtrlEnbl' incorporates:
     *  SignalConversion generated from: '<S3>/VeGENR_b_P1fVoltCtrlEnbl_Out_Init'
     */
    (void)Rte_Write_VeGENR_b_P1fVoltCtrlEnbl_Value
        (GENR_ac_B.OutportBufferForVeGENR_b_P1fVoltCtrlEnbl);

    /* Outport: '<Root>/VeGENR_b_RdyForShtDwnAPMCleared' incorporates:
     *  SignalConversion generated from: '<S3>/VeGENR_b_RdyForShtDwnAPMCleared_Out_Init'
     */
    (void)Rte_Write_VeGENR_b_RdyForShtDwnAPMCleared_Value
        (GENR_ac_B.OutportBufferForVeGENR_b_RdyForShtDwnAPM);

    /* Outport: '<Root>/VeGENR_b_RdyForShtDwn' incorporates:
     *  SignalConversion generated from: '<S3>/VeGENR_b_RdyForShtDwn_Out_Init'
     */
    (void)Rte_Write_VeGENR_b_RdyForShtDwn_Value
        (GENR_ac_B.OutportBufferForVeGENR_b_RdyForShtDwn_Ou);

    /* Outport: '<Root>/VeGENR_b_SetPVoltRqFA' incorporates:
     *  SignalConversion generated from: '<S3>/VeGENR_b_SetPVoltRqFA_Out_Init'
     */
    (void)Rte_Write_VeGENR_b_SetPVoltRqFA_Value
        (GENR_ac_B.OutportBufferForVeGENR_b_SetPVoltRqFA_Ou);

    /* Outport: '<Root>/VeGENR_b_SrvcBattReChrgFlSts' incorporates:
     *  SignalConversion generated from: '<S3>/VeGENR_b_SrvcBattReChrgFlSts_Out_Init'
     */
    (void)Rte_Write_VeGENR_b_SrvcBattReChrgFlSts_Value
        (GENR_ac_B.OutportBufferForVeGENR_b_SrvcBattReChrgF);

    /* Outport: '<Root>/VeGENR_e_stModeReq' incorporates:
     *  SignalConversion generated from: '<S3>/VeGENR_e_stModeReq_Out_Init'
     *  SignalConversion generated from: '<S593>/VeGENR_e_stModeReq_Out_Init'
     */
    (void)Rte_Write_VeGENR_e_stModeReq_Value
        (GENR_ac_B.OutportBufferForVeGENR_e_stModeReq_Out_I);

    /* Outport: '<Root>/VeGENR_e_stModeRqAPM' incorporates:
     *  SignalConversion generated from: '<S3>/VeGENR_e_stModeRqAPM_Out_Init'
     *  SignalConversion generated from: '<S593>/VeGENR_e_stModeRqAPM_Out_Init'
     */
    (void)Rte_Write_VeGENR_e_stModeRqAPM_Value
        (GENR_ac_B.OutportBufferForVeGENR_e_stModeRqAPM_Out);

    /* Outport: '<Root>/VeGENR_t_BattPerWU_12VChg_Timer' incorporates:
     *  SignalConversion generated from: '<S3>/VeGENR_t_BattPerWU_12VChg_Timer_Out_Init'
     */
    (void)Rte_Write_VeGENR_t_BattPerWU_12VChg_Timer_Value
        (GENR_ac_B.OutportBufferForVeGENR_t_BattPerWU_12VCh);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, GENR_CODE) GENR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/GENR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S593>/VeGENR_e_stModeReq_Out_Init' incorporates:
     *  Constant: '<S593>/Const5'
     */
    GENR_ac_B.OutportBufferForVeGENR_e_stModeReq_Out_I = GENR_ac_ConstB.Const5;

    /* SystemInitialize for SignalConversion generated from: '<S593>/VeGENR_e_stModeRqAPM_Out_Init' incorporates:
     *  Constant: '<S593>/Const22'
     */
    GENR_ac_B.OutportBufferForVeGENR_e_stModeRqAPM_Out = GENR_ac_ConstB.Const22;

    /* End of SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' incorporates:
     *  SubSystem: '<Root>/GENR_MedTEF'
     */
    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/GENC_CntrlAPM'
     */
    /* Start for If: '<S287>/If' */
    GENR_ac_DW.If_ActiveSubsystem = -1;

    /* Start for If: '<S89>/If1' */
    GENR_ac_DW.If1_ActiveSubsystem = -1;

    /* SystemInitialize for IfAction SubSystem: '<S89>/If_Sgn_Available' */
    /* Start for If: '<S117>/If' */
    GENR_ac_DW.If_ActiveSubsystem_o = -1;

    /* End of SystemInitialize for SubSystem: '<S89>/If_Sgn_Available' */

    /* SystemInitialize for SignalConversion generated from: '<S4>/APMIdcHvSetP' incorporates:
     *  Constant: '<S24>/Calib'
     */
    GENR_ac_B.OutportBufferForAPMIdcHvSetP = KeGENR_I_APM_IdcHvSetP;

    /* SystemInitialize for SignalConversion generated from: '<S4>/APM_VdcHvSetP' incorporates:
     *  Constant: '<S26>/Calib'
     */
    GENR_ac_B.OutportBufferForAPM_VdcHvSetP = KeGENR_U_APM_VdcHvSetP;

    /* SystemInitialize for SignalConversion generated from: '<S4>/IdcLvSetP' incorporates:
     *  Constant: '<S25>/Calib'
     */
    GENR_ac_B.OutportBufferForIdcLvSetP = KeGENR_I_APM_IdcLvSetP;

    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' */

    /* SystemInitialize for Outport: '<Root>/VeGENR_e_stModeReq' incorporates:
     *  Merge: '<Root>/Merge_Outport_5'
     */
    (void)Rte_Write_VeGENR_e_stModeReq_Value(CeGENR_e_Default);

    /* SystemInitialize for Outport: '<Root>/VeGENR_e_stModeRqAPM' incorporates:
     *  Merge: '<Root>/Merge_Outport_22'
     */
    (void)Rte_Write_VeGENR_e_stModeRqAPM_Value(CeGENR_e_Default);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
