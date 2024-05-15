/*
 * File: FCRR_ac.c
 *
 * Code generated for Simulink model 'FCRR_ac'.
 *
 * Model version                  : 9.71
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:41:40 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "FCRR_ac.h"
#include "look1_iflf_binlca_16a.h"
#include "look2_iflf_binlca_16a.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_FCRR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_I_FCCPmpSuppCrnt_D = 0.0F;/* Referenced by: '<S245>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_I_FcCurrent_D = 0.0F;/* Referenced by: '<S237>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_K_DeltaTgtGain = -1.0F;/* Referenced by: '<S131>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(uint16, FCRR_VAR_INIT) KeFCRR_K_FcPreHeatDelay = 200U;/* Referenced by: '<S196>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_K_FlowMultiplier =
    1.42857146F;                       /* Referenced by: '<S127>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_K_ItermPwrLimit = 1.0F;/* Referenced by: '<S170>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(uint16, FCRR_VAR_INIT) KeFCRR_K_PreHeatDebounceTmpCount =
    5U;                                /* Referenced by: '<S90>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_K_PtermPwrLimit = 1.0F;/* Referenced by: '<S171>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_P_AccPwrModPwr_D = 0.0F;/* Referenced by: '<S246>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_P_BattLTMinLim_D = 0.0F;/* Referenced by: '<S247>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_P_FCPS_ReqdMinFCPSPwr_D =
    0.0F;                              /* Referenced by: '<S248>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_P_MaxPmpPowerAllow = 590.0F;/* Referenced by: '<S137>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_P_MaxPmpPowerInit = 0.0F;/* Referenced by: '<S138>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_P_MtrAElecPwrClacTot_D =
    0.0F;                              /* Referenced by: '<S249>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_P_PwrAirComp = 0.0F;/* Referenced by: '<S185>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_P_PwrDispReq_D = 0.0F;/* Referenced by: '<S202>/Calib' */

#endif

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_P_PwrDispReq_NF = 0.0F;/* Referenced by: '<S264>/Calib' */

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_P_PwrPanl_PwrFiltred_D =
    0.0F;                              /* Referenced by: '<S250>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_P_PwrSinkThr = 2500.0F;/* Referenced by: '<S186>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_P_PwrSncNormalOperation =
    4500.0F;                           /* Referenced by: '<S187>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_P_PwrSncWarmUp = 10000.0F;/* Referenced by: '<S188>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_P_TractionPwrDefault = 0.0F;/* Referenced by: '<S189>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_T_FcCoolTempIn_D = 0.0F;/* Referenced by: '<S229>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_T_FcCoolTempTgt_D = 0.0F;/* Referenced by: '<S230>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_T_FcCoolTemp_D = 0.0F;/* Referenced by: '<S231>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_T_FcOutTempSetPoint_D =
    0.0F;                              /* Referenced by: '<S203>/Calib' */

#endif

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_T_FcOutTempSetPoint_NF =
    0.0F;                              /* Referenced by: '<S265>/Calib' */

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_T_FcPreHeatHyst = 1.0F;/* Referenced by: '<S91>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_T_MaxDerateReqEnd = 87.0F;/* Referenced by: '<S40>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_T_MaxDerateReqInit = 85.0F;/* Referenced by: '<S41>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_T_MaxExceTempReqEnd = 85.0F;/* Referenced by: '<S47>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_T_MaxExceTempReqInit =
    82.0F;                             /* Referenced by: '<S48>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_T_MaxHeatCritReqInit =
    -14.0F;                            /* Referenced by: '<S67>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_T_MaxHeatReqEnd = 63.0F;/* Referenced by: '<S83>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_T_MaxHeatReqInit = -15.0F;/* Referenced by: '<S84>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_T_MaxNomReqEnd = 82.0F;/* Referenced by: '<S72>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_T_MaxNomReqInit = 63.0F;/* Referenced by: '<S73>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_T_MaxShutDowntReqInit =
    87.0F;                             /* Referenced by: '<S78>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_T_MinDerateReqEnd = 86.0F;/* Referenced by: '<S42>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_T_MinDerateReqInit = 84.0F;/* Referenced by: '<S43>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_T_MinExceTempReqEnd = 84.0F;/* Referenced by: '<S49>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_T_MinExceTempReqInit =
    81.0F;                             /* Referenced by: '<S50>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_T_MinHeatCritReqInit =
    -15.0F;                            /* Referenced by: '<S68>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_T_MinHeatReqEnd = 62.0F;/* Referenced by: '<S85>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_T_MinHeatReqInit = -14.0F;/* Referenced by: '<S86>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_T_MinNomReqEnd = 81.0F;/* Referenced by: '<S74>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_T_MinNomReqInit = 62.0F;/* Referenced by: '<S75>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_T_MinShutDownReqInit =
    86.0F;                             /* Referenced by: '<S79>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_T_PreHeatSetpoint = 60.0F;/* Referenced by: '<S182>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_T_PreHeatSetpointFCPS =
    10.0F;                             /* Referenced by: '<S183>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_U_FCCPmpActVlt_D = 0.0F;/* Referenced by: '<S251>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_AccPwrModPwr_SD = 0;/* Referenced by: '<S252>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_ActualMode_SD = 0;/* Referenced by: '<S253>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_BattLTMinLim_SD = 0;/* Referenced by: '<S254>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_DerateReqEnbl = 1;/* Referenced by: '<S44>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_DsblTractionPwrCalc = 0;/* Referenced by: '<S190>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_EnbAntiWindUpPwrLim = 0;/* Referenced by: '<S166>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_EnblFcDerrateCoolReq = 1;/* Referenced by: '<S23>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_EnblFcExcessiveTmpCoolReq
    = 0;                               /* Referenced by: '<S24>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_EnblFcShutDownCoolReq = 1;/* Referenced by: '<S25>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_EnblFcpsPreHeatReqLgc = 0;/* Referenced by: '<S92>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_EnblFcpsPreHeatReqLgcHd =
    1;                                 /* Referenced by: '<S93>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_EnblFreezeHeatReq = 0;/* Referenced by: '<S28>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_EnblITermFreeze = 1;/* Referenced by: '<S147>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_EnblOpnModeFlowReq = 0;/* Referenced by: '<S178>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_EnblPreHeatHeatReq = 0;/* Referenced by: '<S29>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_EnblWarmUpHeatReq = 1;/* Referenced by: '<S30>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_ExceTempReqEnbl = 1;/* Referenced by: '<S51>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_FCCPmpActVlt_SD = 0;/* Referenced by: '<S255>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_FCCPmpSuppCrnt_SD = 0;/* Referenced by: '<S256>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_FCPS_HTCoolReq_SD = 0;/* Referenced by: '<S243>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_FCPS_ReqdMinFCPSPwr_SD =
    0;                                 /* Referenced by: '<S257>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_FC_CondAllwd_D = 0;/* Referenced by: '<S258>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_FC_CondAllwd_SD = 0;/* Referenced by: '<S259>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_FcCoolReq_D = 0;/* Referenced by: '<S204>/Calib' */

#endif

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_FcCoolReq_NF = 0;/* Referenced by: '<S266>/Calib' */

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_FcCoolReq_SD = 0;/* Referenced by: '<S205>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_FcCoolTempDeltaTgt_SD = 0;/* Referenced by: '<S232>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_FcCoolTempIn_SD = 0;/* Referenced by: '<S233>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_FcCoolTempTgt_SD = 0;/* Referenced by: '<S234>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_FcCoolTemp_SD = 0;/* Referenced by: '<S235>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_FcCurrent_SD = 0;/* Referenced by: '<S238>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_FcEnblFcpsPreHeatReq = 0;/* Referenced by: '<S94>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT)
    KeFCRR_b_FcEnblFcpsPreHeatReqActual = 1;/* Referenced by: '<S197>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT)
    KeFCRR_b_FcEnblFcpsPreHeatReqHtCool = 1;/* Referenced by: '<S198>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_FcHeatReq_D = 0;/* Referenced by: '<S206>/Calib' */

#endif

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_FcHeatReq_NF = 0;/* Referenced by: '<S267>/Calib' */

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_FcHeatReq_SD = 0;/* Referenced by: '<S207>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_FcMode_SD = 0;/* Referenced by: '<S239>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_FcOutTempSetPoint_SD = 0;/* Referenced by: '<S208>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_FcShutDownReq_SD = 0;/* Referenced by: '<S209>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_FcTempRange_SD = 0;/* Referenced by: '<S210>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_FcThermalMode_SD = 0;/* Referenced by: '<S211>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_FlowReq_SD = 0;/* Referenced by: '<S212>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_HPMR_FuelCellMdCmd_SD = 0;/* Referenced by: '<S241>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_HeatCritReqEnbl = 1;/* Referenced by: '<S69>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_HeatReqEnbl = 1;/* Referenced by: '<S87>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_MtrAElecPwrClacTot_SD = 0;/* Referenced by: '<S260>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_NomReqEnbl = 1;/* Referenced by: '<S76>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_PreHeatReq_D = 0;/* Referenced by: '<S213>/Calib' */

#endif

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_PreHeatReq_NF = 0;/* Referenced by: '<S268>/Calib' */

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_PreHeatReq_SD = 0;/* Referenced by: '<S214>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_PwrDispReq_SD = 0;/* Referenced by: '<S215>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_PwrPanl_PwrFiltred_SD = 0;/* Referenced by: '<S261>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_PwrSinkSelect = 0;/* Referenced by: '<S191>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_PwrSncPwrSel = 0;/* Referenced by: '<S192>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_PwrSnkDispReq_D = 0;/* Referenced by: '<S216>/Calib' */

#endif

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_PwrSnkDispReq_NF = 0;/* Referenced by: '<S269>/Calib' */

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_PwrSnkDispReq_SD = 0;/* Referenced by: '<S217>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_SelFlowTgtErr = 0;/* Referenced by: '<S132>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(boolean, FCRR_VAR_INIT) KeFCRR_b_ShutDownReqEnbl = 1;/* Referenced by: '<S80>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_dT_FcCoolTempDeltaTgt_D =
    0.0F;                              /* Referenced by: '<S236>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_dT_PwrLimitSplTime = 0.1F;/* Referenced by: '<S172>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_dT_StabilizeSplTime = 0.1F;/* Referenced by: '<S152>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_dV_FcDefaultFlow = 0.0F;/* Referenced by: '<S134>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_dV_FcModeOffFlow = 0.0F;/* Referenced by: '<S135>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_dV_FlowReq_D = 0.0F;/* Referenced by: '<S218>/Calib' */

#endif

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_dV_FlowReq_NF = 0.0F;/* Referenced by: '<S270>/Calib' */

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_dV_MaxItermPwrLimit = 0.0F;/* Referenced by: '<S173>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_dV_MinItermPwrLimit = 0.0F;/* Referenced by: '<S174>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_dV_PwrLimMaxFlow = 0.0F;/* Referenced by: '<S161>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_dV_PwrLimMinFlow = -100.0F;/* Referenced by: '<S162>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_dV_PwrLimitReset = 0.0F;/* Referenced by: '<S175>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_dV_StabilizeMaxFlow =
    100.0F;                            /* Referenced by: '<S142>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_dV_StabilizeMaxITerm =
    50.0F;                             /* Referenced by: '<S153>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_dV_StabilizeMinITerm = 0.0F;/* Referenced by: '<S154>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KeFCRR_dV_StabilizeReset = 0.0F;/* Referenced by: '<S155>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(TeFCPR_e_ActualMode, FCRR_VAR_INIT) KeFCRR_e_ActualMode_D =
    CeFCPR_e_ActualMode_Off;           /* Referenced by: '<S262>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(TeFCPR_e_FCPS_HTCoolReq, FCRR_VAR_INIT)
    KeFCRR_e_FCPS_HTCoolReq_D = CeFCPR_e_Operation_FCS;/* Referenced by: '<S244>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(TeFCRR_e_FcFltReq, FCRR_VAR_INIT) KeFCRR_e_FcShutDownReq_D
    = CeFCRR_e_FcNoFlt;                /* Referenced by: '<S219>/Calib' */

#endif

static volatile CONST(TeFCRR_e_FcFltReq, FCRR_VAR_INIT)
    KeFCRR_e_FcShutDownReq_NF = CeFCRR_e_FcNoFlt;/* Referenced by: '<S271>/Calib' */

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(TeFCRR_e_FcTempRange, FCRR_VAR_INIT)
    KeFCRR_e_FcTempRange_D = CeFCRR_e_Freeze;/* Referenced by: '<S220>/Calib' */

#endif

static volatile CONST(TeFCRR_e_FcTempRange, FCRR_VAR_INIT)
    KeFCRR_e_FcTempRange_NF = CeFCRR_e_Freeze;/* Referenced by: '<S272>/Calib' */

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(TeFCRR_e_FcThermalMode, FCRR_VAR_INIT)
    KeFCRR_e_FcThermalMode_D = CeFCRR_e_FC_OFF;/* Referenced by: '<S221>/Calib' */

#endif

static volatile CONST(TeFCRR_e_FcThermalMode, FCRR_VAR_INIT)
    KeFCRR_e_FcThermalMode_NF = CeFCRR_e_FC_OFF;/* Referenced by: '<S273>/Calib' */

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(TeHPMR_e_FC_MdCmd, FCRR_VAR_INIT)
    KeFCRR_e_HPMR_FuelCellMdCmd_D = CeHPMR_e_FC_Disabled;/* Referenced by: '<S242>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(TeTHMR_e_FCThrmlState, FCRR_VAR_INIT)
    KeFCRR_e_THMR_FcMode_D = CeTHMR_e_FCCondOff;/* Referenced by: '<S240>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(uint16, FCRR_VAR_INIT) KeFCRR_t_MInTmpFcPmpOn = 0U;/* Referenced by: '<S139>/Calib' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KtFCRR_K_KiFcDeltaTmp[7] =
{
    0.0F, 0.01F, 0.02F, 0.03F, 0.04F, 0.05F, 0.06F
} ;                                    /* Referenced by: '<S156>/Vector' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KtFCRR_K_KpFcDeltaTmp[7] =
{
    0.0F, 0.01F, 0.02F, 0.03F, 0.04F, 0.05F, 0.06F
} ;                                    /* Referenced by: '<S157>/Vector' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KtFCRR_dV_ActPsvHeatMin[18] =
{
    24.0F, 60.0F, 77.0F, 24.0F, 60.0F, 77.0F, 24.0F, 60.0F, 77.0F, 24.0F, 60.0F,
    77.0F, 24.0F, 60.0F, 77.0F, 24.0F, 60.0F, 77.0F
} ;                                    /* Referenced by: '<S124>/Vector' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KtFCRR_dV_MaxFlow[5] =
{
    0.0F, 142.86F, 142.86F, 142.86F, 142.86F
} ;                                    /* Referenced by: '<S128>/Vector' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KtFCRR_dV_MinFlow[5] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S129>/Vector' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KtFCRR_dV_StabilizeMin[28] =
{
    60.0F, 60.0F, 60.0F, 100.0F, 68.0F, 68.0F, 68.0F, 100.0F, 71.0F, 71.0F,
    71.0F, 100.0F, 77.0F, 77.0F, 77.0F, 100.0F, 85.0F, 85.0F, 85.0F, 100.0F,
    93.0F, 93.0F, 93.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F
} ;                                    /* Referenced by: '<S148>/Vector' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KxFCRR_K_KiFcDeltaTmp[7] =
{
    0.0F, 50.0F, 100.0F, 150.0F, 200.0F, 250.0F, 300.0F
} ;                                    /* Referenced by: '<S156>/Vector' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KxFCRR_K_KpFcDeltaTmp[7] =
{
    0.0F, 50.0F, 100.0F, 150.0F, 200.0F, 250.0F, 300.0F
} ;                                    /* Referenced by: '<S157>/Vector' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KxFCRR_dV_ActPsvHeatMin[3] =
{
    -10.0F, 0.0F, 20.0F
} ;                                    /* Referenced by: '<S124>/Vector' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KxFCRR_dV_MaxFlow[5] =
{
    -15.0F, 63.0F, 82.0F, 85.0F, 87.0F
} ;                                    /* Referenced by: '<S128>/Vector' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KxFCRR_dV_MinFlow[5] =
{
    -15.0F, 63.0F, 82.0F, 85.0F, 87.0F
} ;                                    /* Referenced by: '<S129>/Vector' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KxFCRR_dV_StabilizeMin[4] =
{
    -15.0F, 63.0F, 82.0F, 85.0F
} ;                                    /* Referenced by: '<S148>/Vector' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KyFCRR_dV_ActPsvHeatMin[6] =
{
    50.0F, 100.0F, 150.0F, 200.0F, 250.0F, 300.0F
} ;                                    /* Referenced by: '<S124>/Vector' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static volatile CONST(float32, FCRR_VAR_INIT) KyFCRR_dV_StabilizeMin[7] =
{
    0.0F, 100.0F, 120.0F, 150.0F, 200.0F, 250.0F, 300.0F
} ;                                    /* Referenced by: '<S148>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_FCRR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_FCRR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_FCRR_1

static VAR(float32, FCRR_VAR_INIT) VeFCRR_I_FCCPmpSuppCrnt;/* '<S228>/Switch6' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static VAR(float32, FCRR_VAR_INIT) VeFCRR_I_FcCurrent_AD;/* '<S223>/Switch' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static VAR(float32, FCRR_VAR_INIT) VeFCRR_P_AccPwrModPwr_AD;/* '<S228>/Switch3' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static VAR(float32, FCRR_VAR_INIT) VeFCRR_P_BattLTMinLim_AD;/* '<S228>/Switch' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static VAR(float32, FCRR_VAR_INIT) VeFCRR_P_FCPS_ReqdMinFCPSPwr_AD;/* '<S228>/Switch2' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static VAR(float32, FCRR_VAR_INIT) VeFCRR_P_MtrAElecPwrCalcTot_AD;/* '<S228>/Switch5' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static VAR(float32, FCRR_VAR_INIT) VeFCRR_P_PwrDispReq_B4;/* '<S14>/Switch3' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static VAR(float32, FCRR_VAR_INIT) VeFCRR_P_PwrPanl_PwrFiltred_AD;/* '<S228>/Switch1' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static VAR(float32, FCRR_VAR_INIT) VeFCRR_T_FcCoolTempIn_AD;/* '<S222>/Switch2' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static VAR(float32, FCRR_VAR_INIT) VeFCRR_T_FcCoolTempOut_AD;/* '<S222>/Switch' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static VAR(float32, FCRR_VAR_INIT) VeFCRR_T_FcCoolTempTgtOut_AD;/* '<S222>/Switch1' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static VAR(float32, FCRR_VAR_INIT) VeFCRR_T_FcTempSetpoint_B4;/* '<S12>/Switch1' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static VAR(float32, FCRR_VAR_INIT) VeFCRR_T_PreHeatSetPoint;/* '<S12>/Switch' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static VAR(float32, FCRR_VAR_INIT) VeFCRR_U_FCCPmpActVlt;/* '<S228>/Switch4' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static VAR(boolean, FCRR_VAR_INIT) VeFCRR_b_ActPsvHeatMode;/* '<S108>/Comparison4' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static VAR(boolean, FCRR_VAR_INIT) VeFCRR_b_BoostCoolMode;/* '<S110>/Comparison4' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static VAR(boolean, FCRR_VAR_INIT) VeFCRR_b_DerateState;/* '<S31>/Logical4' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static VAR(boolean, FCRR_VAR_INIT) VeFCRR_b_EnblPwrSinkReq;/* '<S14>/Logical2' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static VAR(boolean, FCRR_VAR_INIT) VeFCRR_b_ExcessiveTempState;/* '<S32>/Logical3' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static VAR(boolean, FCRR_VAR_INIT) VeFCRR_b_FC_CondAllwd_AD;/* '<S228>/Switch8' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static VAR(boolean, FCRR_VAR_INIT) VeFCRR_b_FcCoolReq_B4;/* '<S16>/Logical1' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static VAR(boolean, FCRR_VAR_INIT) VeFCRR_b_FcHeatReq_B4;/* '<S17>/Logical1' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static VAR(boolean, FCRR_VAR_INIT) VeFCRR_b_FreezeState;/* '<S34>/Logical' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static VAR(boolean, FCRR_VAR_INIT) VeFCRR_b_NominalState;/* '<S35>/Logical2' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static VAR(boolean, FCRR_VAR_INIT) VeFCRR_b_OffMode;/* '<S113>/Comparison4' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static VAR(boolean, FCRR_VAR_INIT) VeFCRR_b_PreHeatReq_B4;/* '<S19>/Logical3' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static VAR(boolean, FCRR_VAR_INIT) VeFCRR_b_PsvCoolMode;/* '<S120>/Comparison4' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static VAR(boolean, FCRR_VAR_INIT) VeFCRR_b_PwrSnkDispReq_B4;/* '<S14>/Logical1' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static VAR(boolean, FCRR_VAR_INIT) VeFCRR_b_ShutDownState;/* '<S36>/Logical5' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static VAR(boolean, FCRR_VAR_INIT) VeFCRR_b_StabilizeMode;/* '<S122>/Comparison4' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static VAR(boolean, FCRR_VAR_INIT) VeFCRR_b_WarmUpState;/* '<S37>/Logical1' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static VAR(float32, FCRR_VAR_INIT) VeFCRR_dT_DeltaTgtTempErr;/* '<S112>/Switch' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static VAR(float32, FCRR_VAR_INIT) VeFCRR_dT_DeltaTgtTempErrRaw;/* '<S112>/Sum2' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static VAR(float32, FCRR_VAR_INIT) VeFCRR_dT_FcCoolTempDeltaTgt_AD;/* '<S222>/Switch3' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static VAR(float32, FCRR_VAR_INIT) VeFCRR_dV_FlowReq_raw;/* '<S111>/Product' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static VAR(float32, FCRR_VAR_INIT) VeFCRR_dV_FlowReq_rawLim;/* '<S130>/Switch' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static VAR(float32, FCRR_VAR_INIT) VeFCRR_dV_MinFlow;/* '<S148>/Vector' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static VAR(float32, FCRR_VAR_INIT) VeFCRR_dV_PiCalcFlow;/* '<S144>/Sum' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static VAR(float32, FCRR_VAR_INIT) VeFCRR_dV_PiCalcFlowPwrLim;/* '<S163>/Sum' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static VAR(TeFCPR_e_ActualMode, FCRR_VAR_INIT) VeFCRR_e_ActualMode_AD;/* '<S228>/Switch7' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static VAR(TeTHMR_e_FCThrmlState, FCRR_VAR_INIT) VeFCRR_e_FcMode_AD;/* '<S224>/Switch' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static VAR(TeFCRR_e_FcTempRange, FCRR_VAR_INIT) VeFCRR_e_FcTempRange_B4;/* '<S33>/Merge' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static VAR(TeFCRR_e_FcThermalMode, FCRR_VAR_INIT) VeFCRR_e_FcThermalMode_B4;/* '<S8>/Merge' */

#endif

#if Rte_SysCon_Variant_FCRR_1

static VAR(TeHPMR_e_FC_MdCmd, FCRR_VAR_INIT) VeFCRR_e_FuelCellMdCmd_AD;/* '<S225>/Switch' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_FCRR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_FCRR
#include "MemMap.h"

CONST(ConstB_FCRR_ac_T, FCRR_VAR_INIT) FCRR_ac_ConstB =
{

#if Rte_SysCon_Variant_FCRR_1

    CeFCRR_e_FcNoFlt                   /* '<S107>/Constant' */
#define CONSTB_FCRR_AC_T_VARIANT_EXISTS
#endif
#ifndef CONSTB_FCRR_AC_T_VARIANT_EXISTS
    0
#endif                           /* CONSTB_FCRR_AC_T_VARIANT_EXISTS undefined */
};

#define STOP_SEC_CONST_UNSPECIFIED_FCRR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_FCRR
#include "MemMap.h"

CONST(ConstP_FCRR_ac_T, FCRR_VAR_INIT) FCRR_ac_ConstP =
{

#if Rte_SysCon_Variant_FCRR_1

    /* Computed Parameter: Vector_maxIndex
     * Referenced by: '<S148>/Vector'
     */
    {
        3U, 6U
    },

#endif

#if Rte_SysCon_Variant_FCRR_1

    /* Computed Parameter: Vector_maxIndex_l
     * Referenced by: '<S124>/Vector'
     */
    {
        2U, 5U
    },

#endif

#ifndef CONSTP_FCRR_AC_T_VARIANT_EXISTS

    0
#endif
};

#define STOP_SEC_CONST_UNSPECIFIED_FCRR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_FCRR
#include "MemMap.h"

VAR(B_FCRR_ac_T, FCRR_VAR_INIT) FCRR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_FCRR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_FCRR
#include "MemMap.h"

VAR(DW_FCRR_ac_T, FCRR_VAR_INIT) FCRR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_FCRR
#include "MemMap.h"
#if Rte_SysCon_Variant_FCRR_1

static FUNC(void, FCRR_CODE_LOCAL) FCRR_ac_Nominal_Sts_Set(P2VAR
    (TeFCRR_e_FcTempRange, AUTOMATIC, FCRR_VAR_INIT) rty_FcTempRange);

#endif

/*
 * Output and update for action system:
 *    '<S33>/Nominal_Sts_Set'
 *    '<S33>/Default_Sts_Set'
 */
#if Rte_SysCon_Variant_FCRR_1

static FUNC(void, FCRR_CODE_LOCAL) FCRR_ac_Nominal_Sts_Set(P2VAR
    (TeFCRR_e_FcTempRange, AUTOMATIC, FCRR_VAR_INIT) rty_FcTempRange)
{
    /* SignalConversion generated from: '<S56>/FcTempRange' incorporates:
     *  Constant: '<S63>/Constant'
     */
    *rty_FcTempRange = CeFCRR_e_Nominal;
}

#endif

/* Model step function for TID1 */
#if Rte_SysCon_Variant_FCRR_1

FUNC(void, FCRR_CODE) FCRR_MedTEH(void) /* Explicit Task: MedTEH */
{

#if Rte_SysCon_Variant_FCRR_1

    boolean rtb_LogicalOperator_n;

#endif

#if Rte_SysCon_Variant_FCRR_1

    boolean rtb_AND_f;

#endif

#if Rte_SysCon_Variant_FCRR_1

    boolean rtb_Comparison4_fr;

#endif

#if Rte_SysCon_Variant_FCRR_1

    sint8 rtPrevAction;

#endif

#if Rte_SysCon_Variant_FCRR_1

    float32 rtb_Merge;

#endif

#if Rte_SysCon_Variant_FCRR_1

    boolean rtb_GreaterThan1_pg;

#endif

#if Rte_SysCon_Variant_FCRR_1

    boolean rtb_AND_p;

#endif

#if Rte_SysCon_Variant_FCRR_1

    boolean rtb_NotEqual_b;

#endif

#if Rte_SysCon_Variant_FCRR_1

    float32 rtb_MinMax;

#endif

#if Rte_SysCon_Variant_FCRR_1

    float32 rtb_Sum1_e;

#endif

#if Rte_SysCon_Variant_FCRR_1

    float32 rtb_Switch3;

#endif

#if Rte_SysCon_Variant_FCRR_1

    boolean rtb_NotEqual;

#endif

#if Rte_SysCon_Variant_FCRR_1

    TeFCPR_e_FCPS_HTCoolReq VeFCRR_e_HTCoolReq_AD;

#endif

#if Rte_SysCon_Variant_FCRR_1

    sint32 tmp;

#endif

#if Rte_SysCon_Variant_FCRR_1

    TeFCRR_e_FcFltReq tmp_0;

#endif

#if Rte_SysCon_Variant_FCRR_1

    TeFCRR_e_FcThermalMode tmp_1;

#endif

#if Rte_SysCon_Variant_FCRR_1

    TeFCRR_e_FcTempRange VeFCRR_b_FcCoolReq_B4_tmp;

#endif

#if Rte_SysCon_Variant_FCRR_1

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
    /* Inport: '<Root>/VeFCPR_P_FCPS_ReqdMinFCPSPwr' */
    (void)Rte_Read_VeFCPR_P_FCPS_ReqdMinFCPSPwr_Value
        ((&(VeFCRR_P_FCPS_ReqdMinFCPSPwr_AD)));

    /* Inport: '<Root>/VeTHMR_b_FC_CondAllwd' */
    (void)Rte_Read_VeTHMR_b_FC_CondAllwd_Value((&(VeFCRR_b_FC_CondAllwd_AD)));

    /* Inport: '<Root>/VeFCPR_e_ActualMode' */
    (void)Rte_Read_VeFCPR_e_ActualMode_Value((&(VeFCRR_e_ActualMode_AD)));

    /* Inport: '<Root>/VeFCPR_P_FCPS_ThermPwrCnsReq' */
    (void)Rte_Read_VeFCPR_P_FCPS_ThermPwrCnsReq_Value((&(VeFCRR_P_PwrDispReq_B4)));

    /* Inport: '<Root>/VeHPMR_e_FuelCellMdCmd' */
    (void)Rte_Read_VeHPMR_e_FuelCellMdCmd_Value((&(VeFCRR_e_FuelCellMdCmd_AD)));

    /* Inport: '<Root>/VeFCPR_e_FCPS_HTCoolReq' */
    (void)Rte_Read_VeFCPR_e_FCPS_HTCoolReq_Value(&VeFCRR_e_HTCoolReq_AD);

    /* Inport: '<Root>/VePMIR_U_FCCPmpActVlt' */
    (void)Rte_Read_VePMIR_U_FCCPmpActVlt_Value((&(VeFCRR_U_FCCPmpActVlt)));

    /* Inport: '<Root>/VeHTDR_P_MtrAElecPwrCalcTot' */
    (void)Rte_Read_VeHTDR_P_MtrAElecPwrCalcTot_Value
        ((&(VeFCRR_P_MtrAElecPwrCalcTot_AD)));

    /* Inport: '<Root>/VeHVTR_P_AccPwrModPwr' */
    (void)Rte_Read_VeHVTR_P_AccPwrModPwr_Value((&(VeFCRR_P_AccPwrModPwr_AD)));

    /* Inport: '<Root>/VeHVTR_P_PwrPanl_PwrFiltred' */
    (void)Rte_Read_VeHVTR_P_PwrPanl_PwrFiltred_Value
        ((&(VeFCRR_P_PwrPanl_PwrFiltred_AD)));

    /* Inport: '<Root>/VeESMR_P_BattLTMinLim' */
    (void)Rte_Read_VeESMR_P_BattLTMinLim_Value((&(VeFCRR_P_BattLTMinLim_AD)));

    /* Inport: '<Root>/VePMIR_I_FCCPmpSuppCrnt' */
    (void)Rte_Read_VePMIR_I_FCCPmpSuppCrnt_Value((&(VeFCRR_I_FCCPmpSuppCrnt)));

    /* Inport: '<Root>/VeFCPR_I_FCPS_Curr' */
    (void)Rte_Read_VeFCPR_I_FCPS_Curr_Value((&(VeFCRR_I_FcCurrent_AD)));

    /* Inport: '<Root>/VeFCPR_T_FCPS_HTCoolDeltaSp' */
    (void)Rte_Read_VeFCPR_T_FCPS_HTCoolDeltaSp_Value
        ((&(VeFCRR_dT_FcCoolTempDeltaTgt_AD)));

    /* Inport: '<Root>/VeFCPR_T_FCPS_HTCoolInTemp' */
    (void)Rte_Read_VeFCPR_T_FCPS_HTCoolInTemp_Value((&(VeFCRR_T_FcCoolTempIn_AD)));

    /* Inport: '<Root>/VeFCPR_T_FCPS_HTCoolOutTempSp' */
    (void)Rte_Read_VeFCPR_T_FCPS_HTCoolOutTempSp_Value
        ((&(VeFCRR_T_FcCoolTempTgtOut_AD)));

    /* Inport: '<Root>/VeFCPR_T_FCPS_HTCoolOutTemp' */
    (void)Rte_Read_VeFCPR_T_FCPS_HTCoolOutTemp_Value
        ((&(VeFCRR_T_FcCoolTempOut_AD)));

    /* Inport: '<Root>/VeTHMR_e_FCThrmlState' */
    (void)Rte_Read_VeTHMR_e_FCThrmlState_Value((&(VeFCRR_e_FcMode_AD)));

    /* Outputs for Function Call SubSystem: '<Root>/FCRR_MedTEH' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Overrides'
     */
    /* Switch: '<S222>/Switch' incorporates:
     *  Constant: '<S235>/Calib'
     */
    if (KeFCRR_b_FcCoolTemp_SD)
    {
        /* Switch: '<S222>/Switch' incorporates:
         *  Constant: '<S231>/Calib'
         *  Inport: '<Root>/VeFCPR_T_FCPS_HTCoolOutTemp'
         */
        VeFCRR_T_FcCoolTempOut_AD = KeFCRR_T_FcCoolTemp_D;
    }

    /* End of Switch: '<S222>/Switch' */

    /* Switch: '<S222>/Switch1' incorporates:
     *  Constant: '<S234>/Calib'
     */
    if (KeFCRR_b_FcCoolTempTgt_SD)
    {
        /* Switch: '<S222>/Switch1' incorporates:
         *  Constant: '<S230>/Calib'
         *  Inport: '<Root>/VeFCPR_T_FCPS_HTCoolOutTempSp'
         */
        VeFCRR_T_FcCoolTempTgtOut_AD = KeFCRR_T_FcCoolTempTgt_D;
    }

    /* End of Switch: '<S222>/Switch1' */

    /* Switch: '<S222>/Switch2' incorporates:
     *  Constant: '<S233>/Calib'
     */
    if (KeFCRR_b_FcCoolTempIn_SD)
    {
        /* Switch: '<S222>/Switch2' incorporates:
         *  Constant: '<S229>/Calib'
         *  Inport: '<Root>/VeFCPR_T_FCPS_HTCoolInTemp'
         */
        VeFCRR_T_FcCoolTempIn_AD = KeFCRR_T_FcCoolTempIn_D;
    }

    /* End of Switch: '<S222>/Switch2' */

    /* Switch: '<S222>/Switch3' incorporates:
     *  Constant: '<S232>/Calib'
     */
    if (KeFCRR_b_FcCoolTempDeltaTgt_SD)
    {
        /* Switch: '<S222>/Switch3' incorporates:
         *  Constant: '<S236>/Calib'
         *  Inport: '<Root>/VeFCPR_T_FCPS_HTCoolDeltaSp'
         */
        VeFCRR_dT_FcCoolTempDeltaTgt_AD = KeFCRR_dT_FcCoolTempDeltaTgt_D;
    }

    /* End of Switch: '<S222>/Switch3' */

    /* Switch: '<S224>/Switch' incorporates:
     *  Constant: '<S239>/Calib'
     */
    if (KeFCRR_b_FcMode_SD)
    {
        /* Switch: '<S224>/Switch' incorporates:
         *  Constant: '<S240>/Calib'
         *  Inport: '<Root>/VeTHMR_e_FCThrmlState'
         */
        VeFCRR_e_FcMode_AD = KeFCRR_e_THMR_FcMode_D;
    }

    /* End of Switch: '<S224>/Switch' */

    /* Switch: '<S223>/Switch' incorporates:
     *  Constant: '<S238>/Calib'
     */
    if (KeFCRR_b_FcCurrent_SD)
    {
        /* Switch: '<S223>/Switch' incorporates:
         *  Constant: '<S237>/Calib'
         *  Inport: '<Root>/VeFCPR_I_FCPS_Curr'
         */
        VeFCRR_I_FcCurrent_AD = KeFCRR_I_FcCurrent_D;
    }

    /* End of Switch: '<S223>/Switch' */

    /* Switch: '<S228>/Switch' incorporates:
     *  Constant: '<S254>/Calib'
     */
    if (KeFCRR_b_BattLTMinLim_SD)
    {
        /* Switch: '<S228>/Switch' incorporates:
         *  Constant: '<S247>/Calib'
         *  Inport: '<Root>/VeESMR_P_BattLTMinLim'
         */
        VeFCRR_P_BattLTMinLim_AD = KeFCRR_P_BattLTMinLim_D;
    }

    /* End of Switch: '<S228>/Switch' */

    /* Switch: '<S228>/Switch1' incorporates:
     *  Constant: '<S261>/Calib'
     */
    if (KeFCRR_b_PwrPanl_PwrFiltred_SD)
    {
        /* Switch: '<S228>/Switch1' incorporates:
         *  Constant: '<S250>/Calib'
         *  Inport: '<Root>/VeHVTR_P_PwrPanl_PwrFiltred'
         */
        VeFCRR_P_PwrPanl_PwrFiltred_AD = KeFCRR_P_PwrPanl_PwrFiltred_D;
    }

    /* End of Switch: '<S228>/Switch1' */

    /* Switch: '<S228>/Switch3' incorporates:
     *  Constant: '<S252>/Calib'
     */
    if (KeFCRR_b_AccPwrModPwr_SD)
    {
        /* Switch: '<S228>/Switch3' incorporates:
         *  Constant: '<S246>/Calib'
         *  Inport: '<Root>/VeHVTR_P_AccPwrModPwr'
         */
        VeFCRR_P_AccPwrModPwr_AD = KeFCRR_P_AccPwrModPwr_D;
    }

    /* End of Switch: '<S228>/Switch3' */

    /* Switch: '<S228>/Switch5' incorporates:
     *  Constant: '<S260>/Calib'
     */
    if (KeFCRR_b_MtrAElecPwrClacTot_SD)
    {
        /* Switch: '<S228>/Switch5' incorporates:
         *  Constant: '<S249>/Calib'
         *  Inport: '<Root>/VeHTDR_P_MtrAElecPwrCalcTot'
         */
        VeFCRR_P_MtrAElecPwrCalcTot_AD = KeFCRR_P_MtrAElecPwrClacTot_D;
    }

    /* End of Switch: '<S228>/Switch5' */

    /* Switch: '<S228>/Switch6' incorporates:
     *  Constant: '<S256>/Calib'
     */
    if (KeFCRR_b_FCCPmpSuppCrnt_SD)
    {
        /* Switch: '<S228>/Switch6' incorporates:
         *  Constant: '<S245>/Calib'
         *  Inport: '<Root>/VePMIR_I_FCCPmpSuppCrnt'
         */
        VeFCRR_I_FCCPmpSuppCrnt = KeFCRR_I_FCCPmpSuppCrnt_D;
    }

    /* End of Switch: '<S228>/Switch6' */

    /* Switch: '<S228>/Switch4' incorporates:
     *  Constant: '<S255>/Calib'
     */
    if (KeFCRR_b_FCCPmpActVlt_SD)
    {
        /* Switch: '<S228>/Switch4' incorporates:
         *  Constant: '<S251>/Calib'
         *  Inport: '<Root>/VePMIR_U_FCCPmpActVlt'
         */
        VeFCRR_U_FCCPmpActVlt = KeFCRR_U_FCCPmpActVlt_D;
    }

    /* End of Switch: '<S228>/Switch4' */

    /* Switch: '<S228>/Switch7' incorporates:
     *  Constant: '<S253>/Calib'
     */
    if (KeFCRR_b_ActualMode_SD)
    {
        /* Switch: '<S228>/Switch7' incorporates:
         *  Constant: '<S262>/Calib'
         *  Inport: '<Root>/VeFCPR_e_ActualMode'
         */
        VeFCRR_e_ActualMode_AD = KeFCRR_e_ActualMode_D;
    }

    /* End of Switch: '<S228>/Switch7' */

    /* Switch: '<S228>/Switch8' incorporates:
     *  Constant: '<S259>/Calib'
     */
    if (KeFCRR_b_FC_CondAllwd_SD)
    {
        /* Switch: '<S228>/Switch8' incorporates:
         *  Constant: '<S258>/Calib'
         *  Inport: '<Root>/VeTHMR_b_FC_CondAllwd'
         */
        VeFCRR_b_FC_CondAllwd_AD = KeFCRR_b_FC_CondAllwd_D;
    }

    /* End of Switch: '<S228>/Switch8' */

    /* Switch: '<S228>/Switch2' incorporates:
     *  Constant: '<S257>/Calib'
     */
    if (KeFCRR_b_FCPS_ReqdMinFCPSPwr_SD)
    {
        /* Switch: '<S228>/Switch2' incorporates:
         *  Constant: '<S248>/Calib'
         *  Inport: '<Root>/VeFCPR_P_FCPS_ReqdMinFCPSPwr'
         */
        VeFCRR_P_FCPS_ReqdMinFCPSPwr_AD = KeFCRR_P_FCPS_ReqdMinFCPSPwr_D;
    }

    /* End of Switch: '<S228>/Switch2' */

    /* Switch: '<S226>/Switch' incorporates:
     *  Constant: '<S243>/Calib'
     */
    if (KeFCRR_b_FCPS_HTCoolReq_SD)
    {
        /* Switch: '<S226>/Switch' incorporates:
         *  Constant: '<S244>/Calib'
         */
        VeFCRR_e_HTCoolReq_AD = KeFCRR_e_FCPS_HTCoolReq_D;
    }

    /* End of Switch: '<S226>/Switch' */

    /* Switch: '<S225>/Switch' incorporates:
     *  Constant: '<S241>/Calib'
     */
    if (KeFCRR_b_HPMR_FuelCellMdCmd_SD)
    {
        /* Switch: '<S225>/Switch' incorporates:
         *  Constant: '<S242>/Calib'
         *  Inport: '<Root>/VeHPMR_e_FuelCellMdCmd'
         */
        VeFCRR_e_FuelCellMdCmd_AD = KeFCRR_e_HPMR_FuelCellMdCmd_D;
    }

    /* End of Switch: '<S225>/Switch' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Control_100ms'
     */
    /* Outputs for Atomic SubSystem: '<S34>/Hysteresis' */
    /* Switch: '<S66>/Switch1' incorporates:
     *  Constant: '<S66>/ConstantValue'
     *  Constant: '<S67>/Calib'
     *  Constant: '<S68>/Calib'
     *  RelationalOperator: '<S66>/GreaterThan'
     *  RelationalOperator: '<S66>/GreaterThan1'
     *  UnitDelay: '<S66>/UnitDelay'
     */
    if (VeFCRR_T_FcCoolTempOut_AD > KeFCRR_T_MaxHeatCritReqInit)
    {
        FCRR_ac_DW.UnitDelay_DSTATE_jj = true;
    }
    else
    {
        FCRR_ac_DW.UnitDelay_DSTATE_jj = ((VeFCRR_T_FcCoolTempOut_AD >=
            KeFCRR_T_MinHeatCritReqInit) && (FCRR_ac_DW.UnitDelay_DSTATE_jj));
    }

    /* End of Switch: '<S66>/Switch1' */
    /* End of Outputs for SubSystem: '<S34>/Hysteresis' */

    /* Logic: '<S34>/Logical' incorporates:
     *  Constant: '<S69>/Calib'
     *  Logic: '<S34>/Logical2'
     *  UnitDelay: '<S66>/UnitDelay'
     */
    VeFCRR_b_FreezeState = ((!FCRR_ac_DW.UnitDelay_DSTATE_jj) &&
                            (KeFCRR_b_HeatCritReqEnbl));

    /* Outputs for Atomic SubSystem: '<S37>/Hysteresis1' */
    /* Switch: '<S81>/Switch1' incorporates:
     *  Constant: '<S81>/ConstantValue'
     *  Constant: '<S84>/Calib'
     *  Constant: '<S86>/Calib'
     *  RelationalOperator: '<S81>/GreaterThan'
     *  RelationalOperator: '<S81>/GreaterThan1'
     *  UnitDelay: '<S81>/UnitDelay'
     */
    if (VeFCRR_T_FcCoolTempOut_AD > KeFCRR_T_MaxHeatReqInit)
    {
        FCRR_ac_DW.UnitDelay_DSTATE_o = true;
    }
    else
    {
        FCRR_ac_DW.UnitDelay_DSTATE_o = ((VeFCRR_T_FcCoolTempOut_AD >=
            KeFCRR_T_MinHeatReqInit) && (FCRR_ac_DW.UnitDelay_DSTATE_o));
    }

    /* End of Switch: '<S81>/Switch1' */
    /* End of Outputs for SubSystem: '<S37>/Hysteresis1' */

    /* Outputs for Atomic SubSystem: '<S37>/Hysteresis2' */
    /* Switch: '<S82>/Switch1' incorporates:
     *  Constant: '<S82>/ConstantValue'
     *  Constant: '<S83>/Calib'
     *  Constant: '<S85>/Calib'
     *  RelationalOperator: '<S82>/GreaterThan'
     *  RelationalOperator: '<S82>/GreaterThan1'
     *  UnitDelay: '<S82>/UnitDelay'
     */
    if (VeFCRR_T_FcCoolTempOut_AD > KeFCRR_T_MinHeatReqEnd)
    {
        FCRR_ac_DW.UnitDelay_DSTATE_na = true;
    }
    else
    {
        FCRR_ac_DW.UnitDelay_DSTATE_na = ((VeFCRR_T_FcCoolTempOut_AD >=
            KeFCRR_T_MaxHeatReqEnd) && (FCRR_ac_DW.UnitDelay_DSTATE_na));
    }

    /* End of Switch: '<S82>/Switch1' */
    /* End of Outputs for SubSystem: '<S37>/Hysteresis2' */

    /* Logic: '<S37>/Logical1' incorporates:
     *  Constant: '<S87>/Calib'
     *  Logic: '<S37>/Logical2'
     *  UnitDelay: '<S81>/UnitDelay'
     *  UnitDelay: '<S82>/UnitDelay'
     */
    VeFCRR_b_WarmUpState = (((FCRR_ac_DW.UnitDelay_DSTATE_o) &&
        (!FCRR_ac_DW.UnitDelay_DSTATE_na)) && (KeFCRR_b_HeatReqEnbl));

    /* Outputs for Atomic SubSystem: '<S35>/Hysteresis3' */
    /* Switch: '<S70>/Switch1' incorporates:
     *  Constant: '<S70>/ConstantValue'
     *  Constant: '<S73>/Calib'
     *  Constant: '<S75>/Calib'
     *  RelationalOperator: '<S70>/GreaterThan'
     *  RelationalOperator: '<S70>/GreaterThan1'
     *  UnitDelay: '<S70>/UnitDelay'
     */
    if (VeFCRR_T_FcCoolTempOut_AD > KeFCRR_T_MaxNomReqInit)
    {
        FCRR_ac_DW.UnitDelay_DSTATE_cb = true;
    }
    else
    {
        FCRR_ac_DW.UnitDelay_DSTATE_cb = ((VeFCRR_T_FcCoolTempOut_AD >=
            KeFCRR_T_MinNomReqInit) && (FCRR_ac_DW.UnitDelay_DSTATE_cb));
    }

    /* End of Switch: '<S70>/Switch1' */
    /* End of Outputs for SubSystem: '<S35>/Hysteresis3' */

    /* Outputs for Atomic SubSystem: '<S35>/Hysteresis4' */
    /* Switch: '<S71>/Switch1' incorporates:
     *  Constant: '<S71>/ConstantValue'
     *  Constant: '<S72>/Calib'
     *  Constant: '<S74>/Calib'
     *  RelationalOperator: '<S71>/GreaterThan'
     *  RelationalOperator: '<S71>/GreaterThan1'
     *  UnitDelay: '<S71>/UnitDelay'
     */
    if (VeFCRR_T_FcCoolTempOut_AD > KeFCRR_T_MaxNomReqEnd)
    {
        FCRR_ac_DW.UnitDelay_DSTATE_mk = true;
    }
    else
    {
        FCRR_ac_DW.UnitDelay_DSTATE_mk = ((VeFCRR_T_FcCoolTempOut_AD >=
            KeFCRR_T_MinNomReqEnd) && (FCRR_ac_DW.UnitDelay_DSTATE_mk));
    }

    /* End of Switch: '<S71>/Switch1' */
    /* End of Outputs for SubSystem: '<S35>/Hysteresis4' */

    /* Logic: '<S35>/Logical2' incorporates:
     *  Constant: '<S76>/Calib'
     *  Logic: '<S35>/Logical1'
     *  UnitDelay: '<S70>/UnitDelay'
     *  UnitDelay: '<S71>/UnitDelay'
     */
    VeFCRR_b_NominalState = (((FCRR_ac_DW.UnitDelay_DSTATE_cb) &&
        (!FCRR_ac_DW.UnitDelay_DSTATE_mk)) && (KeFCRR_b_NomReqEnbl));

    /* Outputs for Atomic SubSystem: '<S32>/Hysteresis5' */
    /* Switch: '<S45>/Switch1' incorporates:
     *  Constant: '<S45>/ConstantValue'
     *  Constant: '<S48>/Calib'
     *  Constant: '<S50>/Calib'
     *  RelationalOperator: '<S45>/GreaterThan'
     *  RelationalOperator: '<S45>/GreaterThan1'
     *  UnitDelay: '<S45>/UnitDelay'
     */
    if (VeFCRR_T_FcCoolTempOut_AD > KeFCRR_T_MaxExceTempReqInit)
    {
        FCRR_ac_DW.UnitDelay_DSTATE_cu = true;
    }
    else
    {
        FCRR_ac_DW.UnitDelay_DSTATE_cu = ((VeFCRR_T_FcCoolTempOut_AD >=
            KeFCRR_T_MinExceTempReqInit) && (FCRR_ac_DW.UnitDelay_DSTATE_cu));
    }

    /* End of Switch: '<S45>/Switch1' */
    /* End of Outputs for SubSystem: '<S32>/Hysteresis5' */

    /* Outputs for Atomic SubSystem: '<S32>/Hysteresis6' */
    /* Switch: '<S46>/Switch1' incorporates:
     *  Constant: '<S46>/ConstantValue'
     *  Constant: '<S47>/Calib'
     *  Constant: '<S49>/Calib'
     *  RelationalOperator: '<S46>/GreaterThan'
     *  RelationalOperator: '<S46>/GreaterThan1'
     *  UnitDelay: '<S46>/UnitDelay'
     */
    if (VeFCRR_T_FcCoolTempOut_AD > KeFCRR_T_MaxExceTempReqEnd)
    {
        FCRR_ac_DW.UnitDelay_DSTATE_e = true;
    }
    else
    {
        FCRR_ac_DW.UnitDelay_DSTATE_e = ((VeFCRR_T_FcCoolTempOut_AD >=
            KeFCRR_T_MinExceTempReqEnd) && (FCRR_ac_DW.UnitDelay_DSTATE_e));
    }

    /* End of Switch: '<S46>/Switch1' */
    /* End of Outputs for SubSystem: '<S32>/Hysteresis6' */

    /* Logic: '<S32>/Logical3' incorporates:
     *  Constant: '<S51>/Calib'
     *  Logic: '<S32>/Logical2'
     *  UnitDelay: '<S45>/UnitDelay'
     *  UnitDelay: '<S46>/UnitDelay'
     */
    VeFCRR_b_ExcessiveTempState = (((FCRR_ac_DW.UnitDelay_DSTATE_cu) &&
        (!FCRR_ac_DW.UnitDelay_DSTATE_e)) && (KeFCRR_b_ExceTempReqEnbl));

    /* Outputs for Atomic SubSystem: '<S31>/Hysteresis7' */
    /* Switch: '<S38>/Switch1' incorporates:
     *  Constant: '<S38>/ConstantValue'
     *  Constant: '<S41>/Calib'
     *  Constant: '<S43>/Calib'
     *  RelationalOperator: '<S38>/GreaterThan'
     *  RelationalOperator: '<S38>/GreaterThan1'
     *  UnitDelay: '<S38>/UnitDelay'
     */
    if (VeFCRR_T_FcCoolTempOut_AD > KeFCRR_T_MaxDerateReqInit)
    {
        FCRR_ac_DW.UnitDelay_DSTATE_kq = true;
    }
    else
    {
        FCRR_ac_DW.UnitDelay_DSTATE_kq = ((VeFCRR_T_FcCoolTempOut_AD >=
            KeFCRR_T_MinDerateReqInit) && (FCRR_ac_DW.UnitDelay_DSTATE_kq));
    }

    /* End of Switch: '<S38>/Switch1' */
    /* End of Outputs for SubSystem: '<S31>/Hysteresis7' */

    /* Outputs for Atomic SubSystem: '<S31>/Hysteresis8' */
    /* Switch: '<S39>/Switch1' incorporates:
     *  Constant: '<S39>/ConstantValue'
     *  Constant: '<S40>/Calib'
     *  Constant: '<S42>/Calib'
     *  RelationalOperator: '<S39>/GreaterThan'
     *  RelationalOperator: '<S39>/GreaterThan1'
     *  UnitDelay: '<S39>/UnitDelay'
     */
    if (VeFCRR_T_FcCoolTempOut_AD > KeFCRR_T_MaxDerateReqEnd)
    {
        FCRR_ac_DW.UnitDelay_DSTATE_jz = true;
    }
    else
    {
        FCRR_ac_DW.UnitDelay_DSTATE_jz = ((VeFCRR_T_FcCoolTempOut_AD >=
            KeFCRR_T_MinDerateReqEnd) && (FCRR_ac_DW.UnitDelay_DSTATE_jz));
    }

    /* End of Switch: '<S39>/Switch1' */
    /* End of Outputs for SubSystem: '<S31>/Hysteresis8' */

    /* Logic: '<S31>/Logical4' incorporates:
     *  Constant: '<S44>/Calib'
     *  Logic: '<S31>/Logical2'
     *  UnitDelay: '<S38>/UnitDelay'
     *  UnitDelay: '<S39>/UnitDelay'
     */
    VeFCRR_b_DerateState = (((FCRR_ac_DW.UnitDelay_DSTATE_kq) &&
        (!FCRR_ac_DW.UnitDelay_DSTATE_jz)) && (KeFCRR_b_DerateReqEnbl));

    /* Outputs for Atomic SubSystem: '<S36>/Hysteresis9' */
    /* Switch: '<S77>/Switch1' incorporates:
     *  Constant: '<S77>/ConstantValue'
     *  Constant: '<S78>/Calib'
     *  Constant: '<S79>/Calib'
     *  RelationalOperator: '<S77>/GreaterThan'
     *  RelationalOperator: '<S77>/GreaterThan1'
     *  UnitDelay: '<S77>/UnitDelay'
     */
    if (VeFCRR_T_FcCoolTempOut_AD > KeFCRR_T_MaxShutDowntReqInit)
    {
        FCRR_ac_DW.UnitDelay_DSTATE_mh = true;
    }
    else
    {
        FCRR_ac_DW.UnitDelay_DSTATE_mh = ((VeFCRR_T_FcCoolTempOut_AD >=
            KeFCRR_T_MinShutDownReqInit) && (FCRR_ac_DW.UnitDelay_DSTATE_mh));
    }

    /* End of Switch: '<S77>/Switch1' */
    /* End of Outputs for SubSystem: '<S36>/Hysteresis9' */

    /* Logic: '<S36>/Logical5' incorporates:
     *  Constant: '<S80>/Calib'
     *  UnitDelay: '<S77>/UnitDelay'
     */
    VeFCRR_b_ShutDownState = ((FCRR_ac_DW.UnitDelay_DSTATE_mh) &&
        (KeFCRR_b_ShutDownReqEnbl));

    /* If: '<S33>/If' */
    if (VeFCRR_b_FreezeState)
    {
        /* Outputs for IfAction SubSystem: '<S33>/Freeze_Sts_Set' incorporates:
         *  ActionPort: '<S55>/ActionPort'
         */
        /* Merge: '<S33>/Merge' incorporates:
         *  Constant: '<S62>/Constant'
         *  SignalConversion generated from: '<S55>/FcTempRange'
         */
        VeFCRR_e_FcTempRange_B4 = CeFCRR_e_Freeze;

        /* End of Outputs for SubSystem: '<S33>/Freeze_Sts_Set' */
    }
    else if (VeFCRR_b_WarmUpState)
    {
        /* Outputs for IfAction SubSystem: '<S33>/WarmUp_Sts_Set' incorporates:
         *  ActionPort: '<S58>/ActionPort'
         */
        /* Merge: '<S33>/Merge' incorporates:
         *  Constant: '<S65>/Constant'
         *  SignalConversion generated from: '<S58>/FcTempRange'
         */
        VeFCRR_e_FcTempRange_B4 = CeFCRR_e_WarmUp;

        /* End of Outputs for SubSystem: '<S33>/WarmUp_Sts_Set' */
    }
    else if (VeFCRR_b_NominalState)
    {
        /* Outputs for IfAction SubSystem: '<S33>/Nominal_Sts_Set' incorporates:
         *  ActionPort: '<S56>/ActionPort'
         */
        FCRR_ac_Nominal_Sts_Set((&(VeFCRR_e_FcTempRange_B4)));

        /* End of Outputs for SubSystem: '<S33>/Nominal_Sts_Set' */
    }
    else if (VeFCRR_b_ExcessiveTempState)
    {
        /* Outputs for IfAction SubSystem: '<S33>/ExcessiveTemp_Sts_Set' incorporates:
         *  ActionPort: '<S54>/ActionPort'
         */
        /* Merge: '<S33>/Merge' incorporates:
         *  Constant: '<S61>/Constant'
         *  SignalConversion generated from: '<S54>/FcTempRange'
         */
        VeFCRR_e_FcTempRange_B4 = CeFCRR_e_ExcessiveTemp;

        /* End of Outputs for SubSystem: '<S33>/ExcessiveTemp_Sts_Set' */
    }
    else if (VeFCRR_b_DerateState)
    {
        /* Outputs for IfAction SubSystem: '<S33>/Derating_Sts_Set' incorporates:
         *  ActionPort: '<S53>/ActionPort'
         */
        /* Merge: '<S33>/Merge' incorporates:
         *  Constant: '<S60>/Constant'
         *  SignalConversion generated from: '<S53>/FcTempRange'
         */
        VeFCRR_e_FcTempRange_B4 = CeFCRR_e_Derating;

        /* End of Outputs for SubSystem: '<S33>/Derating_Sts_Set' */
    }
    else if (VeFCRR_b_ShutDownState)
    {
        /* Outputs for IfAction SubSystem: '<S33>/ShutDown_Sts_Set' incorporates:
         *  ActionPort: '<S57>/ActionPort'
         */
        /* Merge: '<S33>/Merge' incorporates:
         *  Constant: '<S64>/Constant'
         *  SignalConversion generated from: '<S57>/FcTempRange'
         */
        VeFCRR_e_FcTempRange_B4 = CeFCRR_e_ShutDown;

        /* End of Outputs for SubSystem: '<S33>/ShutDown_Sts_Set' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S33>/Default_Sts_Set' incorporates:
         *  ActionPort: '<S52>/ActionPort'
         */
        FCRR_ac_Nominal_Sts_Set((&(VeFCRR_e_FcTempRange_B4)));

        /* End of Outputs for SubSystem: '<S33>/Default_Sts_Set' */
    }

    /* End of If: '<S33>/If' */

    /* RelationalOperator: '<S16>/RelationalOperator' incorporates:
     *  Merge: '<S33>/Merge'
     *  RelationalOperator: '<S16>/RelationalOperator1'
     *  RelationalOperator: '<S16>/RelationalOperator3'
     */
    VeFCRR_b_FcCoolReq_B4_tmp = VeFCRR_e_FcTempRange_B4;

    /* Logic: '<S16>/Logical1' incorporates:
     *  Constant: '<S20>/Constant'
     *  Constant: '<S21>/Constant'
     *  Constant: '<S22>/Constant'
     *  Constant: '<S23>/Calib'
     *  Constant: '<S24>/Calib'
     *  Constant: '<S25>/Calib'
     *  Logic: '<S16>/Logical Operator'
     *  Logic: '<S16>/Logical Operator1'
     *  Logic: '<S16>/Logical Operator2'
     *  Merge: '<S33>/Merge'
     *  RelationalOperator: '<S16>/RelationalOperator'
     *  RelationalOperator: '<S16>/RelationalOperator1'
     *  RelationalOperator: '<S16>/RelationalOperator3'
     */
    VeFCRR_b_FcCoolReq_B4 = ((((((uint32)VeFCRR_e_FcTempRange_B4) ==
        CeFCRR_e_ShutDown) && (KeFCRR_b_EnblFcShutDownCoolReq)) || ((((uint32)
        VeFCRR_e_FcTempRange_B4) == CeFCRR_e_Derating) &&
        (KeFCRR_b_EnblFcDerrateCoolReq))) || ((((uint32)VeFCRR_e_FcTempRange_B4)
        == CeFCRR_e_ExcessiveTemp) && (KeFCRR_b_EnblFcExcessiveTmpCoolReq)));

    /* Outputs for Atomic SubSystem: '<S19>/Hysteresis_3' */
    /* Switch: '<S89>/Switch1' incorporates:
     *  Constant: '<S89>/Constant Value'
     *  Constant: '<S91>/Calib'
     *  RelationalOperator: '<S89>/Greater  Than'
     *  RelationalOperator: '<S89>/Greater  Than1'
     *  Sum: '<S19>/Add'
     *  UnitDelay: '<S89>/Unit Delay'
     */
    if (VeFCRR_T_FcCoolTempOut_AD > VeFCRR_T_FcCoolTempTgtOut_AD)
    {
        FCRR_ac_DW.UnitDelay_DSTATE_cx = true;
    }
    else
    {
        FCRR_ac_DW.UnitDelay_DSTATE_cx = ((VeFCRR_T_FcCoolTempOut_AD >
            (VeFCRR_T_FcCoolTempTgtOut_AD - KeFCRR_T_FcPreHeatHyst)) &&
            (FCRR_ac_DW.UnitDelay_DSTATE_cx));
    }

    /* End of Switch: '<S89>/Switch1' */
    /* End of Outputs for SubSystem: '<S19>/Hysteresis_3' */

    /* Logic: '<S19>/Logical Operator' incorporates:
     *  UnitDelay: '<S89>/Unit Delay'
     */
    rtb_LogicalOperator_n = !FCRR_ac_DW.UnitDelay_DSTATE_cx;

    /* Outputs for Atomic SubSystem: '<S88>/CountDownResetEnabled' */
    /* Switch: '<S95>/Switch1' incorporates:
     *  Constant: '<S88>/ConstantValue'
     *  Constant: '<S90>/Calib'
     *  Constant: '<S95>/ConstantValue'
     *  Logic: '<S88>/Logical2'
     *  Product: '<S88>/Product'
     *  RelationalOperator: '<S88>/Comparison4'
     *  RelationalOperator: '<S95>/GreaterThan'
     *  Switch: '<S95>/Switch2'
     *  UnitDelay: '<S88>/UnitDelay'
     *  UnitDelay: '<S95>/UnitDelay'
     */
    if (rtb_LogicalOperator_n != FCRR_ac_DW.UnitDelay_DSTATE_m)
    {
        FCRR_ac_DW.UnitDelay_DSTATE_n = ((float32)
            KeFCRR_K_PreHeatDebounceTmpCount) * 10.0F;
    }
    else
    {
        if (FCRR_ac_DW.UnitDelay_DSTATE_n > 0.0F)
        {
            /* UnitDelay: '<S95>/UnitDelay' incorporates:
             *  Constant: '<S95>/ConstantValue1'
             *  Sum: '<S95>/Subtraction'
             *  Switch: '<S95>/Switch2'
             */
            FCRR_ac_DW.UnitDelay_DSTATE_n--;
        }
    }

    /* End of Switch: '<S95>/Switch1' */

    /* RelationalOperator: '<S95>/GreaterThan1' incorporates:
     *  Constant: '<S95>/ConstantValue2'
     *  UnitDelay: '<S95>/UnitDelay'
     */
    rtb_GreaterThan1_pg = (FCRR_ac_DW.UnitDelay_DSTATE_n > 0.0F);

    /* End of Outputs for SubSystem: '<S88>/CountDownResetEnabled' */

    /* Outputs for Atomic SubSystem: '<S88>/EdgeFalling' */
    /* Logic: '<S96>/AND' incorporates:
     *  Logic: '<S96>/OR1'
     *  UnitDelay: '<S96>/UnitDelay'
     */
    rtb_AND_f = ((!rtb_GreaterThan1_pg) && (FCRR_ac_DW.UnitDelay_DSTATE_f));

    /* Update for UnitDelay: '<S96>/UnitDelay' */
    FCRR_ac_DW.UnitDelay_DSTATE_f = rtb_GreaterThan1_pg;

    /* End of Outputs for SubSystem: '<S88>/EdgeFalling' */

    /* Outputs for Enabled SubSystem: '<S88>/EnabledSubsystem' incorporates:
     *  EnablePort: '<S97>/Enable'
     */
    /* Logic: '<S88>/Logical1' incorporates:
     *  Switch: '<S98>/Switch1'
     *  UnitDelay: '<S88>/UnitDelay2'
     */
    if (rtb_AND_f || (FCRR_ac_DW.UnitDelay2_DSTATE))
    {
        /* SignalConversion generated from: '<S97>/Out1' incorporates:
         *  Constant: '<S97>/ConstantValue1'
         */
        FCRR_ac_B.OutportBufferForOut1 = false;

        /* Gain: '<S99>/Gain' */
        FCRR_ac_B.Gain = rtb_LogicalOperator_n;
    }

    /* End of Logic: '<S88>/Logical1' */
    /* End of Outputs for SubSystem: '<S88>/EnabledSubsystem' */

    /* Logic: '<S15>/Logical Operator' incorporates:
     *  Constant: '<S193>/Constant'
     *  Constant: '<S194>/Constant'
     *  Constant: '<S197>/Calib'
     *  Constant: '<S198>/Calib'
     *  Logic: '<S15>/Logical Operator1'
     *  Logic: '<S15>/Logical Operator2'
     *  RelationalOperator: '<S15>/Comparison1'
     *  RelationalOperator: '<S15>/Comparison4'
     *  Switch: '<S228>/Switch7'
     */
    rtb_GreaterThan1_pg = (((((uint32)VeFCRR_e_HTCoolReq_AD) ==
        CeFCPR_e_Pre_Heating) && (KeFCRR_b_FcEnblFcpsPreHeatReqHtCool)) ||
                           ((((uint32)VeFCRR_e_ActualMode_AD) ==
        CeFCPR_e_ActualMode_PreheatReqd) && (KeFCRR_b_FcEnblFcpsPreHeatReqActual)));

    /* Outputs for Atomic SubSystem: '<S15>/Turn Off Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S199>/EdgeFalling' */
    /* Logic: '<S200>/AND' incorporates:
     *  Logic: '<S200>/OR1'
     *  UnitDelay: '<S200>/Unit Delay'
     */
    rtb_AND_f = ((!rtb_GreaterThan1_pg) && (FCRR_ac_DW.UnitDelay_DSTATE_kf));

    /* Update for UnitDelay: '<S200>/Unit Delay' */
    FCRR_ac_DW.UnitDelay_DSTATE_kf = rtb_GreaterThan1_pg;

    /* End of Outputs for SubSystem: '<S199>/EdgeFalling' */

    /* Switch: '<S199>/Switch' incorporates:
     *  Constant: '<S196>/Calib'
     *  Sum: '<S199>/Summation'
     *  UnitDelay: '<S199>/Unit Delay'
     */
    if (rtb_AND_f)
    {
        FCRR_ac_DW.UnitDelay_DSTATE_k = KeFCRR_K_FcPreHeatDelay;
    }
    else
    {
        /* Sum: '<S199>/Summation' incorporates:
         *  Constant: '<S199>/Constant Value'
         *  UnitDelay: '<S199>/Unit Delay'
         */
        tmp = ((sint32)FCRR_ac_DW.UnitDelay_DSTATE_k) - 1;
        if ((((sint32)FCRR_ac_DW.UnitDelay_DSTATE_k) - 1) < 0)
        {
            tmp = 0;
        }

        FCRR_ac_DW.UnitDelay_DSTATE_k = (uint16)tmp;
    }

    /* End of Switch: '<S199>/Switch' */
    /* End of Outputs for SubSystem: '<S15>/Turn Off Delay Sample' */

    /* Switch: '<S15>/Switch' incorporates:
     *  Constant: '<S195>/Constant'
     *  RelationalOperator: '<S15>/Comparison2'
     */
    if (((uint32)VeFCRR_e_HTCoolReq_AD) != CeFCPR_e_Operation_FCS)
    {
        /* Outputs for Atomic SubSystem: '<S15>/Turn Off Delay Sample' */
        /* Switch: '<S15>/Switch' incorporates:
         *  Constant: '<S199>/Constant Value2'
         *  Logic: '<S199>/AND'
         *  RelationalOperator: '<S199>/Greater  Than'
         *  UnitDelay: '<S199>/Unit Delay'
         */
        rtb_GreaterThan1_pg = (rtb_GreaterThan1_pg || (((sint32)
            FCRR_ac_DW.UnitDelay_DSTATE_k) > 0));

        /* End of Outputs for SubSystem: '<S15>/Turn Off Delay Sample' */
    }

    /* End of Switch: '<S15>/Switch' */

    /* RelationalOperator: '<S7>/Comparison4' incorporates:
     *  Constant: '<S100>/Constant'
     *  Switch: '<S225>/Switch'
     */
    rtb_AND_f = (((uint32)VeFCRR_e_FuelCellMdCmd_AD) == CeHPMR_e_FC_Enabled);

    /* Logic: '<S19>/Logical3' incorporates:
     *  Constant: '<S92>/Calib'
     *  Constant: '<S93>/Calib'
     *  Constant: '<S94>/Calib'
     *  Logic: '<S19>/Logical1'
     *  Logic: '<S19>/Logical4'
     *  Logic: '<S19>/Logical5'
     */
    VeFCRR_b_PreHeatReq_B4 = (((((FCRR_ac_B.Gain) && (VeFCRR_b_FC_CondAllwd_AD))
        && rtb_GreaterThan1_pg) && (KeFCRR_b_EnblFcpsPreHeatReqLgcHd)) ||
        ((rtb_GreaterThan1_pg && (rtb_AND_f || (KeFCRR_b_FcEnblFcpsPreHeatReq)))
         && (KeFCRR_b_EnblFcpsPreHeatReqLgc)));

    /* Logic: '<S17>/Logical1' incorporates:
     *  Constant: '<S26>/Constant'
     *  Constant: '<S27>/Constant'
     *  Constant: '<S28>/Calib'
     *  Constant: '<S29>/Calib'
     *  Constant: '<S30>/Calib'
     *  Logic: '<S17>/Logical'
     *  Logic: '<S17>/Logical2'
     *  Logic: '<S17>/Logical3'
     *  Merge: '<S33>/Merge'
     *  RelationalOperator: '<S16>/RelationalOperator'
     *  RelationalOperator: '<S17>/RelationalOperator'
     *  RelationalOperator: '<S17>/RelationalOperator1'
     */
    VeFCRR_b_FcHeatReq_B4 = ((((((uint32)VeFCRR_e_FcTempRange_B4) ==
        CeFCRR_e_Freeze) && (KeFCRR_b_EnblFreezeHeatReq)) || ((((uint32)
        VeFCRR_e_FcTempRange_B4) == CeFCRR_e_WarmUp) &&
        (KeFCRR_b_EnblWarmUpHeatReq))) || ((VeFCRR_b_PreHeatReq_B4) &&
        (KeFCRR_b_EnblPreHeatHeatReq)));

    /* RelationalOperator: '<S11>/Comparison4' incorporates:
     *  Constant: '<S181>/Constant'
     */
    rtb_Comparison4_fr = (((uint32)VeFCRR_e_HTCoolReq_AD) ==
                          CeFCPR_e_Operation_FCS);

    /* If: '<S8>/If' */
    if (VeFCRR_b_PreHeatReq_B4)
    {
        /* Outputs for IfAction SubSystem: '<S8>/PreHeating_Set' incorporates:
         *  ActionPort: '<S101>/Action Port'
         */
        /* Merge: '<S8>/Merge' incorporates:
         *  Constant: '<S104>/Constant'
         *  SignalConversion generated from: '<S101>/FcTempRange'
         */
        VeFCRR_e_FcThermalMode_B4 = CeFCRR_e_FC_PreHeating;

        /* End of Outputs for SubSystem: '<S8>/PreHeating_Set' */
    }
    else if (rtb_Comparison4_fr)
    {
        /* Outputs for IfAction SubSystem: '<S8>/PreHeating_Set1' incorporates:
         *  ActionPort: '<S102>/Action Port'
         */
        /* Merge: '<S8>/Merge' incorporates:
         *  Constant: '<S105>/Constant'
         *  SignalConversion generated from: '<S102>/FcTempRange'
         */
        VeFCRR_e_FcThermalMode_B4 = CeFCRR_e_FC_Run_Normal;

        /* End of Outputs for SubSystem: '<S8>/PreHeating_Set1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S8>/PreHeating_Set2' incorporates:
         *  ActionPort: '<S103>/Action Port'
         */
        /* Merge: '<S8>/Merge' incorporates:
         *  Constant: '<S106>/Constant'
         *  SignalConversion generated from: '<S103>/FcTempRange'
         */
        VeFCRR_e_FcThermalMode_B4 = CeFCRR_e_FC_OFF;

        /* End of Outputs for SubSystem: '<S8>/PreHeating_Set2' */
    }

    /* End of If: '<S8>/If' */

    /* RelationalOperator: '<S108>/Comparison4' incorporates:
     *  Constant: '<S123>/Constant'
     */
    VeFCRR_b_ActPsvHeatMode = (((uint32)VeFCRR_e_FcMode_AD) ==
        CeTHMR_e_FCActvPsvHeat);

    /* RelationalOperator: '<S113>/Comparison4' incorporates:
     *  Constant: '<S133>/Constant'
     */
    VeFCRR_b_OffMode = (((uint32)VeFCRR_e_FcMode_AD) == CeTHMR_e_FCCondOff);

    /* RelationalOperator: '<S122>/Comparison4' incorporates:
     *  Constant: '<S180>/Constant'
     */
    VeFCRR_b_StabilizeMode = (((uint32)VeFCRR_e_FcMode_AD) ==
        CeTHMR_e_FCStabilize);

    /* RelationalOperator: '<S120>/Comparison4' incorporates:
     *  Constant: '<S179>/Constant'
     */
    VeFCRR_b_PsvCoolMode = (((uint32)VeFCRR_e_FcMode_AD) == CeTHMR_e_FCPsvCool);

    /* RelationalOperator: '<S110>/Comparison4' incorporates:
     *  Constant: '<S126>/Constant'
     */
    VeFCRR_b_BoostCoolMode = (((uint32)VeFCRR_e_FcMode_AD) ==
        CeTHMR_e_FCBoostCool);

    /* Sum: '<S112>/Sum2' */
    VeFCRR_dT_DeltaTgtTempErrRaw = VeFCRR_T_FcCoolTempOut_AD -
        VeFCRR_T_FcCoolTempIn_AD;

    /* Switch: '<S112>/Switch' incorporates:
     *  Constant: '<S132>/Calib'
     */
    if (KeFCRR_b_SelFlowTgtErr)
    {
        /* Switch: '<S112>/Switch' incorporates:
         *  Abs: '<S112>/Abs'
         */
        VeFCRR_dT_DeltaTgtTempErr = fabsf(VeFCRR_dT_DeltaTgtTempErrRaw);
    }
    else
    {
        /* Switch: '<S112>/Switch' incorporates:
         *  Constant: '<S131>/Calib'
         *  Product: '<S112>/Product1'
         */
        VeFCRR_dT_DeltaTgtTempErr = VeFCRR_dT_DeltaTgtTempErrRaw *
            KeFCRR_K_DeltaTgtGain;
    }

    /* End of Switch: '<S112>/Switch' */

    /* If: '<S10>/If' incorporates:
     *  Constant: '<S178>/Calib'
     *  Logic: '<S119>/Logical'
     *  Logic: '<S119>/Logical1'
     */
    rtPrevAction = FCRR_ac_DW.If_ActiveSubsystem;
    if (VeFCRR_b_OffMode)
    {
        FCRR_ac_DW.If_ActiveSubsystem = 0;
    }
    else if ((((VeFCRR_b_StabilizeMode) || (VeFCRR_b_PsvCoolMode)) ||
              (VeFCRR_b_BoostCoolMode)) || (rtb_Comparison4_fr &&
              (KeFCRR_b_EnblOpnModeFlowReq)))
    {
        FCRR_ac_DW.If_ActiveSubsystem = 1;
    }
    else if (VeFCRR_b_ActPsvHeatMode)
    {
        FCRR_ac_DW.If_ActiveSubsystem = 2;
    }
    else
    {
        FCRR_ac_DW.If_ActiveSubsystem = 3;
    }

    switch (FCRR_ac_DW.If_ActiveSubsystem)
    {
      case 0:
        /* Outputs for IfAction SubSystem: '<S10>/FcModeOff_FlowReq' incorporates:
         *  ActionPort: '<S115>/ActionPort'
         */
        /* Merge: '<S10>/Merge' incorporates:
         *  Constant: '<S135>/Calib'
         *  SignalConversion generated from: '<S115>/FcModeOffFlow'
         */
        rtb_Merge = KeFCRR_dV_FcModeOffFlow;

        /* End of Outputs for SubSystem: '<S10>/FcModeOff_FlowReq' */
        break;

      case 1:
        if (FCRR_ac_DW.If_ActiveSubsystem != rtPrevAction)
        {
            /* InitializeConditions for IfAction SubSystem: '<S10>/PI_FlowReq' incorporates:
             *  ActionPort: '<S117>/ActionPort'
             */
            /* InitializeConditions for If: '<S10>/If' incorporates:
             *  Delay: '<S144>/Delay'
             */
            FCRR_ac_DW.Delay_DSTATE_c = false;

            /* End of InitializeConditions for SubSystem: '<S10>/PI_FlowReq' */

            /* SystemReset for IfAction SubSystem: '<S10>/PI_FlowReq' incorporates:
             *  ActionPort: '<S117>/ActionPort'
             */
            /* SystemReset for Atomic SubSystem: '<S144>/EdgeRising1' */
            /* SystemReset for If: '<S10>/If' incorporates:
             *  UnitDelay: '<S149>/UnitDelay'
             *  UnitDelay: '<S150>/UnitDelay'
             *  UnitDelay: '<S151>/UnitDelay'
             */
            FCRR_ac_DW.UnitDelay_DSTATE_ji = false;

            /* End of SystemReset for SubSystem: '<S144>/EdgeRising1' */

            /* SystemReset for Atomic SubSystem: '<S144>/EdgeBi1' */
            FCRR_ac_DW.UnitDelay_DSTATE_h = false;

            /* End of SystemReset for SubSystem: '<S144>/EdgeBi1' */

            /* SystemReset for Atomic SubSystem: '<S144>/IntegratorKResetEnabledLimited' */
            FCRR_ac_DW.UnitDelay_DSTATE_d = 0.0F;

            /* End of SystemReset for SubSystem: '<S144>/IntegratorKResetEnabledLimited' */
            /* End of SystemReset for SubSystem: '<S10>/PI_FlowReq' */
        }

        /* Outputs for IfAction SubSystem: '<S10>/PI_FlowReq' incorporates:
         *  ActionPort: '<S117>/ActionPort'
         */
        /* Sum: '<S140>/Sum1' */
        rtb_Sum1_e = VeFCRR_dT_FcCoolTempDeltaTgt_AD - VeFCRR_dT_DeltaTgtTempErr;

        /* Lookup_n-D: '<S148>/Vector' incorporates:
         *  Switch: '<S222>/Switch'
         *  Switch: '<S223>/Switch'
         */
        VeFCRR_dV_MinFlow = look2_iflf_binlca_16a(VeFCRR_T_FcCoolTempOut_AD,
            VeFCRR_I_FcCurrent_AD, ((const float32 *)&(KxFCRR_dV_StabilizeMin[0])),
            ((const float32 *)&(KyFCRR_dV_StabilizeMin[0])), ((const float32 *)
            &(KtFCRR_dV_StabilizeMin[0])), FCRR_ac_ConstP.Vector_maxIndex, 4U);

        /* Outputs for Atomic SubSystem: '<S144>/EdgeRising1' */
        /* Logic: '<S150>/AND' incorporates:
         *  Logic: '<S150>/OR1'
         *  UnitDelay: '<S150>/UnitDelay'
         */
        rtb_AND_p = !FCRR_ac_DW.UnitDelay_DSTATE_ji;

        /* Update for UnitDelay: '<S150>/UnitDelay' incorporates:
         *  Constant: '<S144>/TRUEConstant'
         */
        FCRR_ac_DW.UnitDelay_DSTATE_ji = true;

        /* End of Outputs for SubSystem: '<S144>/EdgeRising1' */

        /* Outputs for Atomic SubSystem: '<S144>/EdgeBi1' */
        /* RelationalOperator: '<S149>/NotEqual' incorporates:
         *  UnitDelay: '<S149>/UnitDelay'
         */
        rtb_NotEqual_b = (VeFCRR_b_StabilizeMode !=
                          FCRR_ac_DW.UnitDelay_DSTATE_h);

        /* Update for UnitDelay: '<S149>/UnitDelay' */
        FCRR_ac_DW.UnitDelay_DSTATE_h = VeFCRR_b_StabilizeMode;

        /* End of Outputs for SubSystem: '<S144>/EdgeBi1' */

        /* Outputs for Atomic SubSystem: '<S144>/IntegratorKResetEnabledLimited' */
        /* Switch: '<S151>/Switch' incorporates:
         *  Delay: '<S144>/Delay'
         *  Logic: '<S144>/Logical1'
         *  Logic: '<S144>/Logical2'
         *  Switch: '<S151>/Switch1'
         */
        if (rtb_AND_p || rtb_NotEqual_b)
        {
            /* Switch: '<S151>/Switch' incorporates:
             *  Constant: '<S155>/Calib'
             */
            FCRR_ac_DW.UnitDelay_DSTATE_d = KeFCRR_dV_StabilizeReset;
        }
        else
        {
            if ((FCRR_ac_DW.Delay_DSTATE_c) && (VeFCRR_b_StabilizeMode))
            {
                /* Switch: '<S151>/Switch1' incorporates:
                 *  Constant: '<S152>/Calib'
                 *  Lookup_n-D: '<S156>/Vector'
                 *  Product: '<S151>/Multiplication'
                 *  Sum: '<S151>/Sum_Sub'
                 *  Switch: '<S151>/Switch'
                 *  Switch: '<S223>/Switch'
                 *  UnitDelay: '<S151>/UnitDelay'
                 */
                FCRR_ac_DW.UnitDelay_DSTATE_d += (rtb_Sum1_e *
                    KeFCRR_dT_StabilizeSplTime) * look1_iflf_binlca_16a
                    (VeFCRR_I_FcCurrent_AD, ((const float32 *)
                      &(KxFCRR_K_KiFcDeltaTmp[0])), ((const float32 *)
                      &(KtFCRR_K_KiFcDeltaTmp[0])), 6U);
            }
        }

        /* End of Switch: '<S151>/Switch' */

        /* Outputs for Atomic SubSystem: '<S151>/Limiter' */
        /* Switch: '<S159>/Switch1' incorporates:
         *  Constant: '<S153>/Calib'
         *  RelationalOperator: '<S159>/RelationalOperator'
         */
        if (KeFCRR_dV_StabilizeMaxITerm < FCRR_ac_DW.UnitDelay_DSTATE_d)
        {
            /* MinMax: '<S145>/MinMax' */
            rtb_MinMax = KeFCRR_dV_StabilizeMaxITerm;
        }
        else
        {
            /* MinMax: '<S145>/MinMax' */
            rtb_MinMax = FCRR_ac_DW.UnitDelay_DSTATE_d;
        }

        /* End of Switch: '<S159>/Switch1' */

        /* Switch: '<S159>/Switch' incorporates:
         *  Constant: '<S154>/Calib'
         *  RelationalOperator: '<S159>/RelationalOperator1'
         *  UnitDelay: '<S151>/UnitDelay'
         */
        if (rtb_MinMax > KeFCRR_dV_StabilizeMinITerm)
        {
            FCRR_ac_DW.UnitDelay_DSTATE_d = rtb_MinMax;
        }
        else
        {
            FCRR_ac_DW.UnitDelay_DSTATE_d = KeFCRR_dV_StabilizeMinITerm;
        }

        /* End of Switch: '<S159>/Switch' */
        /* End of Outputs for SubSystem: '<S151>/Limiter' */
        /* End of Outputs for SubSystem: '<S144>/IntegratorKResetEnabledLimited' */

        /* Outputs for Atomic SubSystem: '<S144>/Proportional' */
        /* Sum: '<S144>/Sum' incorporates:
         *  Lookup_n-D: '<S157>/Vector'
         *  Product: '<S158>/Multiplication'
         *  Switch: '<S223>/Switch'
         *  UnitDelay: '<S151>/UnitDelay'
         */
        VeFCRR_dV_PiCalcFlow = (rtb_Sum1_e * look1_iflf_binlca_16a
                                (VeFCRR_I_FcCurrent_AD, ((const float32 *)
            &(KxFCRR_K_KpFcDeltaTmp[0])), ((const float32 *)
            &(KtFCRR_K_KpFcDeltaTmp[0])), 6U)) + FCRR_ac_DW.UnitDelay_DSTATE_d;

        /* End of Outputs for SubSystem: '<S144>/Proportional' */

        /* MinMax: '<S145>/MinMax' incorporates:
         *  Sum: '<S117>/Sum2'
         */
        rtb_MinMax = VeFCRR_dV_MinFlow + VeFCRR_dV_PiCalcFlow;

        /* Logic: '<S144>/Logical3' incorporates:
         *  Constant: '<S141>/Constant'
         *  Constant: '<S142>/Calib'
         *  Constant: '<S147>/Calib'
         *  Delay: '<S144>/Delay'
         *  Logic: '<S141>/LogicalOperator'
         *  RelationalOperator: '<S141>/RelationalOperator1'
         *  RelationalOperator: '<S145>/RelationalOperator'
         */
        FCRR_ac_DW.Delay_DSTATE_c = (((rtb_MinMax <= KeFCRR_dV_StabilizeMaxFlow)
            || (rtb_Sum1_e <= 0.0F)) || (!KeFCRR_b_EnblITermFreeze));

        /* MinMax: '<S145>/MinMax' incorporates:
         *  Constant: '<S142>/Calib'
         */
        rtb_MinMax = fminf(rtb_MinMax, KeFCRR_dV_StabilizeMaxFlow);

        /* Merge: '<S10>/Merge' incorporates:
         *  MinMax: '<S145>/MinMax1'
         */
        rtb_Merge = fmaxf(rtb_MinMax, VeFCRR_dV_MinFlow);

        /* End of Outputs for SubSystem: '<S10>/PI_FlowReq' */
        break;

      case 2:
        /* Outputs for IfAction SubSystem: '<S10>/ActPsvHeat_FlowReq' incorporates:
         *  ActionPort: '<S109>/ActionPort'
         */
        /* Merge: '<S10>/Merge' incorporates:
         *  Gain: '<S125>/Gain'
         *  Lookup_n-D: '<S124>/Vector'
         *  Switch: '<S222>/Switch'
         *  Switch: '<S223>/Switch'
         */
        rtb_Merge = look2_iflf_binlca_16a(VeFCRR_T_FcCoolTempOut_AD,
            VeFCRR_I_FcCurrent_AD, ((const float32 *)&(KxFCRR_dV_ActPsvHeatMin[0])),
            ((const float32 *)&(KyFCRR_dV_ActPsvHeatMin[0])), ((const float32 *)
            &(KtFCRR_dV_ActPsvHeatMin[0])), FCRR_ac_ConstP.Vector_maxIndex_l, 3U);

        /* End of Outputs for SubSystem: '<S10>/ActPsvHeat_FlowReq' */
        break;

      default:
        /* Outputs for IfAction SubSystem: '<S10>/FcModeOff_Default' incorporates:
         *  ActionPort: '<S114>/ActionPort'
         */
        /* Merge: '<S10>/Merge' incorporates:
         *  Constant: '<S134>/Calib'
         *  SignalConversion generated from: '<S114>/FcDefaultFlow'
         */
        rtb_Merge = KeFCRR_dV_FcDefaultFlow;

        /* End of Outputs for SubSystem: '<S10>/FcModeOff_Default' */
        break;
    }

    /* End of If: '<S10>/If' */

    /* Lookup_n-D: '<S128>/Vector' incorporates:
     *  Switch: '<S222>/Switch2'
     */
    rtb_Sum1_e = look1_iflf_binlca_16a(VeFCRR_T_FcCoolTempIn_AD, ((const float32
        *)&(KxFCRR_dV_MaxFlow[0])), ((const float32 *)&(KtFCRR_dV_MaxFlow[0])),
        4U);

    /* Lookup_n-D: '<S129>/Vector' incorporates:
     *  Switch: '<S222>/Switch2'
     */
    VeFCRR_dV_FlowReq_rawLim = look1_iflf_binlca_16a(VeFCRR_T_FcCoolTempIn_AD,
        ((const float32 *)&(KxFCRR_dV_MinFlow[0])), ((const float32 *)
        &(KtFCRR_dV_MinFlow[0])), 4U);

    /* Switch: '<S130>/Switch1' incorporates:
     *  Product: '<S13>/Product'
     */
    rtb_MinMax = VeFCRR_I_FCCPmpSuppCrnt * VeFCRR_U_FCCPmpActVlt;

    /* Outputs for Atomic SubSystem: '<S116>/Count Down Reset Enabled' */
    /* Switch: '<S136>/Switch1' incorporates:
     *  Constant: '<S136>/Constant Value'
     *  Constant: '<S138>/Calib'
     *  Constant: '<S139>/Calib'
     *  Logic: '<S116>/Logical2'
     *  RelationalOperator: '<S116>/Comparison'
     *  RelationalOperator: '<S136>/Greater  Than'
     *  Switch: '<S136>/Switch2'
     *  UnitDelay: '<S136>/Unit Delay'
     */
    if (rtb_MinMax <= KeFCRR_P_MaxPmpPowerInit)
    {
        FCRR_ac_DW.UnitDelay_DSTATE_i = KeFCRR_t_MInTmpFcPmpOn;
    }
    else
    {
        if (((sint32)FCRR_ac_DW.UnitDelay_DSTATE_i) > 0)
        {
            /* UnitDelay: '<S136>/Unit Delay' incorporates:
             *  Constant: '<S136>/Constant Value1'
             *  Sum: '<S136>/Subtraction'
             *  Switch: '<S136>/Switch2'
             */
            FCRR_ac_DW.UnitDelay_DSTATE_i = (uint16)((sint32)(((sint32)
                FCRR_ac_DW.UnitDelay_DSTATE_i) - 1));
        }
    }

    /* End of Switch: '<S136>/Switch1' */
    /* End of Outputs for SubSystem: '<S116>/Count Down Reset Enabled' */

    /* Switch: '<S130>/Switch1' incorporates:
     *  Constant: '<S137>/Calib'
     *  Sum: '<S116>/Sum1'
     */
    rtb_MinMax = KeFCRR_P_MaxPmpPowerAllow - rtb_MinMax;

    /* UnitDelay: '<S167>/Unit Delay' incorporates:
     *  Constant: '<S116>/Constant Value'
     *  RelationalOperator: '<S116>/Greater  Than2'
     */
    rtb_NotEqual_b = (rtb_MinMax < 0.0F);

    /* Outputs for Atomic SubSystem: '<S116>/Count Down Reset Enabled' */
    /* Logic: '<S116>/Logical' incorporates:
     *  Constant: '<S136>/Constant Value2'
     *  Logic: '<S116>/Logical1'
     *  RelationalOperator: '<S136>/Greater  Than1'
     *  UnitDelay: '<S136>/Unit Delay'
     */
    rtb_AND_p = ((((sint32)FCRR_ac_DW.UnitDelay_DSTATE_i) <= 0) &&
                 rtb_NotEqual_b);

    /* End of Outputs for SubSystem: '<S116>/Count Down Reset Enabled' */

    /* Switch: '<S116>/Switch3' */
    if (rtb_NotEqual_b)
    {
        /* Switch: '<S116>/Switch3' */
        rtb_Switch3 = rtb_MinMax;
    }
    else
    {
        /* Switch: '<S116>/Switch3' incorporates:
         *  Constant: '<S116>/Constant Value1'
         */
        rtb_Switch3 = 0.0F;
    }

    /* End of Switch: '<S116>/Switch3' */

    /* Outputs for Atomic SubSystem: '<S10>/Pi_FlowReq_PwrLim' */
    /* Outputs for Atomic SubSystem: '<S163>/EdgeRising' */
    /* Logic: '<S168>/AND' incorporates:
     *  Logic: '<S168>/OR1'
     *  UnitDelay: '<S168>/Unit Delay'
     */
    rtb_NotEqual_b = !FCRR_ac_DW.UnitDelay_DSTATE_j;

    /* Update for UnitDelay: '<S168>/Unit Delay' incorporates:
     *  Constant: '<S163>/Constant'
     */
    FCRR_ac_DW.UnitDelay_DSTATE_j = true;

    /* End of Outputs for SubSystem: '<S163>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S163>/EdgeBi' */
    /* RelationalOperator: '<S167>/Not Equal' incorporates:
     *  UnitDelay: '<S167>/Unit Delay'
     */
    rtb_NotEqual = (rtb_AND_p != FCRR_ac_DW.UnitDelay_DSTATE_c);

    /* Update for UnitDelay: '<S167>/Unit Delay' */
    FCRR_ac_DW.UnitDelay_DSTATE_c = rtb_AND_p;

    /* End of Outputs for SubSystem: '<S163>/EdgeBi' */

    /* Outputs for Atomic SubSystem: '<S163>/IntegratorK Reset Enabled Limited1' */
    /* Switch: '<S169>/Switch' incorporates:
     *  Delay: '<S163>/Delay'
     *  Logic: '<S163>/Logical1'
     *  Logic: '<S163>/Logical2'
     *  Switch: '<S169>/Switch1'
     */
    if (rtb_NotEqual_b || rtb_NotEqual)
    {
        /* Switch: '<S169>/Switch' incorporates:
         *  Constant: '<S175>/Calib'
         */
        FCRR_ac_DW.UnitDelay_DSTATE = KeFCRR_dV_PwrLimitReset;
    }
    else
    {
        if ((FCRR_ac_DW.Delay_DSTATE) && rtb_AND_p)
        {
            /* Switch: '<S169>/Switch1' incorporates:
             *  Constant: '<S170>/Calib'
             *  Constant: '<S172>/Calib'
             *  Product: '<S169>/Multiplication'
             *  Sum: '<S169>/Sum//Sub'
             *  Switch: '<S169>/Switch'
             *  UnitDelay: '<S169>/Unit Delay'
             */
            FCRR_ac_DW.UnitDelay_DSTATE += (rtb_Switch3 *
                KeFCRR_dT_PwrLimitSplTime) * KeFCRR_K_ItermPwrLimit;
        }
    }

    /* End of Switch: '<S169>/Switch' */

    /* Outputs for Atomic SubSystem: '<S169>/Limiter' */
    /* Switch: '<S177>/Switch1' incorporates:
     *  Constant: '<S173>/Calib'
     *  RelationalOperator: '<S177>/Relational Operator'
     */
    if (KeFCRR_dV_MaxItermPwrLimit < FCRR_ac_DW.UnitDelay_DSTATE)
    {
        /* Switch: '<S130>/Switch1' */
        rtb_MinMax = KeFCRR_dV_MaxItermPwrLimit;
    }
    else
    {
        /* Switch: '<S130>/Switch1' */
        rtb_MinMax = FCRR_ac_DW.UnitDelay_DSTATE;
    }

    /* End of Switch: '<S177>/Switch1' */

    /* Switch: '<S177>/Switch' incorporates:
     *  Constant: '<S174>/Calib'
     *  RelationalOperator: '<S177>/Relational Operator1'
     *  UnitDelay: '<S169>/Unit Delay'
     */
    if (rtb_MinMax > KeFCRR_dV_MinItermPwrLimit)
    {
        FCRR_ac_DW.UnitDelay_DSTATE = rtb_MinMax;
    }
    else
    {
        FCRR_ac_DW.UnitDelay_DSTATE = KeFCRR_dV_MinItermPwrLimit;
    }

    /* End of Switch: '<S177>/Switch' */
    /* End of Outputs for SubSystem: '<S169>/Limiter' */
    /* End of Outputs for SubSystem: '<S163>/IntegratorK Reset Enabled Limited1' */

    /* Outputs for Atomic SubSystem: '<S163>/Proportional1' */
    /* Sum: '<S163>/Sum' incorporates:
     *  Constant: '<S171>/Calib'
     *  Product: '<S176>/Multiplication'
     *  UnitDelay: '<S169>/Unit Delay'
     */
    VeFCRR_dV_PiCalcFlowPwrLim = (rtb_Switch3 * KeFCRR_K_PtermPwrLimit) +
        FCRR_ac_DW.UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S163>/Proportional1' */

    /* Switch: '<S130>/Switch1' incorporates:
     *  Constant: '<S161>/Calib'
     *  MinMax: '<S164>/MinMax'
     */
    rtb_MinMax = fminf(VeFCRR_dV_PiCalcFlowPwrLim, KeFCRR_dV_PwrLimMaxFlow);

    /* Logic: '<S163>/Logical3' incorporates:
     *  Constant: '<S160>/Constant'
     *  Constant: '<S162>/Calib'
     *  Constant: '<S166>/Calib'
     *  Delay: '<S163>/Delay'
     *  Logic: '<S160>/Logical Operator'
     *  RelationalOperator: '<S160>/Relational Operator1'
     *  RelationalOperator: '<S164>/Relational Operator'
     */
    FCRR_ac_DW.Delay_DSTATE = (((rtb_MinMax <= KeFCRR_dV_PwrLimMinFlow) ||
        (rtb_Switch3 >= 0.0F)) || (!KeFCRR_b_EnbAntiWindUpPwrLim));

    /* Product: '<S111>/Product' incorporates:
     *  Constant: '<S127>/Calib'
     *  Constant: '<S162>/Calib'
     *  MinMax: '<S164>/MinMax1'
     *  Sum: '<S121>/Sum1'
     */
    VeFCRR_dV_FlowReq_raw = (rtb_Merge + fmaxf(rtb_MinMax,
        KeFCRR_dV_PwrLimMinFlow)) * KeFCRR_K_FlowMultiplier;

    /* End of Outputs for SubSystem: '<S10>/Pi_FlowReq_PwrLim' */

    /* Outputs for Atomic SubSystem: '<S111>/Limiter1' */
    /* Switch: '<S130>/Switch1' incorporates:
     *  RelationalOperator: '<S130>/Relational Operator'
     */
    if (rtb_Sum1_e < VeFCRR_dV_FlowReq_raw)
    {
        /* Switch: '<S130>/Switch1' */
        rtb_MinMax = rtb_Sum1_e;
    }
    else
    {
        /* Switch: '<S130>/Switch1' */
        rtb_MinMax = VeFCRR_dV_FlowReq_raw;
    }

    /* End of Switch: '<S130>/Switch1' */

    /* Switch: '<S130>/Switch' incorporates:
     *  RelationalOperator: '<S130>/Relational Operator1'
     */
    if (rtb_MinMax > VeFCRR_dV_FlowReq_rawLim)
    {
        /* Switch: '<S130>/Switch' */
        VeFCRR_dV_FlowReq_rawLim = rtb_MinMax;
    }

    /* End of Switch: '<S130>/Switch' */
    /* End of Outputs for SubSystem: '<S111>/Limiter1' */

    /* Switch: '<S12>/Switch' incorporates:
     *  Logic: '<S12>/Logical Operator'
     */
    if ((VeFCRR_b_PreHeatReq_B4) && (VeFCRR_b_FC_CondAllwd_AD))
    {
        /* Switch: '<S12>/Switch' incorporates:
         *  Constant: '<S183>/Calib'
         */
        VeFCRR_T_PreHeatSetPoint = KeFCRR_T_PreHeatSetpointFCPS;
    }
    else
    {
        /* Switch: '<S12>/Switch' incorporates:
         *  Constant: '<S182>/Calib'
         */
        VeFCRR_T_PreHeatSetPoint = KeFCRR_T_PreHeatSetpoint;
    }

    /* End of Switch: '<S12>/Switch' */

    /* Switch: '<S12>/Switch1' */
    if (rtb_GreaterThan1_pg)
    {
        /* Switch: '<S12>/Switch1' */
        VeFCRR_T_FcTempSetpoint_B4 = VeFCRR_T_PreHeatSetPoint;
    }
    else
    {
        /* Switch: '<S12>/Switch1' */
        VeFCRR_T_FcTempSetpoint_B4 = VeFCRR_T_FcCoolTempTgtOut_AD;
    }

    /* End of Switch: '<S12>/Switch1' */

    /* Switch: '<S14>/Switch3' incorporates:
     *  Constant: '<S191>/Calib'
     */
    if (KeFCRR_b_PwrSinkSelect)
    {
        /* Switch: '<S14>/Switch4' incorporates:
         *  Constant: '<S192>/Calib'
         */
        if (KeFCRR_b_PwrSncPwrSel)
        {
            /* Switch: '<S14>/Switch2' incorporates:
             *  Constant: '<S184>/Constant'
             *  Constant: '<S187>/Calib'
             *  Constant: '<S188>/Calib'
             *  Merge: '<S33>/Merge'
             *  RelationalOperator: '<S14>/Comparison4'
             *  RelationalOperator: '<S16>/RelationalOperator'
             */
            if (((uint32)VeFCRR_e_FcTempRange_B4) == CeFCRR_e_WarmUp)
            {
                rtb_Sum1_e = KeFCRR_P_PwrSncWarmUp;
            }
            else
            {
                rtb_Sum1_e = KeFCRR_P_PwrSncNormalOperation;
            }

            /* End of Switch: '<S14>/Switch2' */
        }
        else
        {
            rtb_Sum1_e = VeFCRR_P_FCPS_ReqdMinFCPSPwr_AD;
        }

        /* End of Switch: '<S14>/Switch4' */

        /* Switch: '<S14>/Switch1' incorporates:
         *  Constant: '<S189>/Calib'
         *  Constant: '<S190>/Calib'
         */
        if (KeFCRR_b_DsblTractionPwrCalc)
        {
            rtb_MinMax = KeFCRR_P_TractionPwrDefault;
        }
        else
        {
            rtb_MinMax = VeFCRR_P_MtrAElecPwrCalcTot_AD;
        }

        /* End of Switch: '<S14>/Switch1' */

        /* Switch: '<S14>/Switch3' incorporates:
         *  Constant: '<S185>/Calib'
         *  Inport: '<Root>/VeFCPR_P_FCPS_ThermPwrCnsReq'
         *  Sum: '<S14>/Sum1'
         */
        VeFCRR_P_PwrDispReq_B4 = ((((rtb_Sum1_e - VeFCRR_P_BattLTMinLim_AD) -
            rtb_MinMax) - VeFCRR_P_PwrPanl_PwrFiltred_AD) -
            VeFCRR_P_AccPwrModPwr_AD) - KeFCRR_P_PwrAirComp;
    }

    /* End of Switch: '<S14>/Switch3' */

    /* Logic: '<S14>/Logical2' */
    VeFCRR_b_EnblPwrSinkReq = (rtb_AND_f && rtb_Comparison4_fr);

    /* Logic: '<S14>/Logical1' incorporates:
     *  Constant: '<S186>/Calib'
     *  RelationalOperator: '<S14>/Comparison'
     */
    VeFCRR_b_PwrSnkDispReq_B4 = ((VeFCRR_P_PwrDispReq_B4 > KeFCRR_P_PwrSinkThr) &&
        (VeFCRR_b_EnblPwrSinkReq));

    /* SignalConversion generated from: '<S3>/FcShutDownReq' incorporates:
     *  Constant: '<S107>/Constant'
     */
    FCRR_ac_B.OutportBufferForFcShutDownReq = FCRR_ac_ConstB.Constant;

    /* Update for UnitDelay: '<S88>/UnitDelay' */
    FCRR_ac_DW.UnitDelay_DSTATE_m = rtb_LogicalOperator_n;

    /* Update for UnitDelay: '<S88>/UnitDelay2' */
    FCRR_ac_DW.UnitDelay2_DSTATE = FCRR_ac_B.OutportBufferForOut1;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/FTRR_FUNC'
     */
    /* Switch: '<S201>/Switch6' incorporates:
     *  Constant: '<S215>/Calib'
     */
    if (KeFCRR_b_PwrDispReq_SD)
    {
        /* Outport: '<Root>/VeFCRR_P_PwrDispReq' incorporates:
         *  Constant: '<S202>/Calib'
         *  SignalConversion generated from: '<S1>/VeFCRR_P_PwrDispReq'
         */
        (void)Rte_Write_VeFCRR_P_PwrDispReq_Value(KeFCRR_P_PwrDispReq_D);
    }
    else
    {
        /* Outport: '<Root>/VeFCRR_P_PwrDispReq' incorporates:
         *  SignalConversion generated from: '<S1>/VeFCRR_P_PwrDispReq'
         */
        (void)Rte_Write_VeFCRR_P_PwrDispReq_Value(VeFCRR_P_PwrDispReq_B4);
    }

    /* End of Switch: '<S201>/Switch6' */

    /* Switch: '<S201>/Switch4' incorporates:
     *  Constant: '<S208>/Calib'
     */
    if (KeFCRR_b_FcOutTempSetPoint_SD)
    {
        /* Outport: '<Root>/VeFCRR_T_FcOutTempSetPoint' incorporates:
         *  Constant: '<S203>/Calib'
         *  SignalConversion generated from: '<S1>/VeFCRR_T_FcOutTempSetPoint'
         */
        (void)Rte_Write_VeFCRR_T_FcOutTempSetPoint_Value
            (KeFCRR_T_FcOutTempSetPoint_D);
    }
    else
    {
        /* Outport: '<Root>/VeFCRR_T_FcOutTempSetPoint' incorporates:
         *  SignalConversion generated from: '<S1>/VeFCRR_T_FcOutTempSetPoint'
         */
        (void)Rte_Write_VeFCRR_T_FcOutTempSetPoint_Value
            (VeFCRR_T_FcTempSetpoint_B4);
    }

    /* End of Switch: '<S201>/Switch4' */

    /* Switch: '<S201>/Switch1' incorporates:
     *  Constant: '<S205>/Calib'
     */
    if (KeFCRR_b_FcCoolReq_SD)
    {
        /* Outport: '<Root>/VeFCRR_b_FcCoolReq' incorporates:
         *  Constant: '<S204>/Calib'
         *  SignalConversion generated from: '<S1>/VeFCRR_b_FcCoolReq'
         */
        (void)Rte_Write_VeFCRR_b_FcCoolReq_Value(KeFCRR_b_FcCoolReq_D);
    }
    else
    {
        /* Outport: '<Root>/VeFCRR_b_FcCoolReq' incorporates:
         *  SignalConversion generated from: '<S1>/VeFCRR_b_FcCoolReq'
         */
        (void)Rte_Write_VeFCRR_b_FcCoolReq_Value(VeFCRR_b_FcCoolReq_B4);
    }

    /* End of Switch: '<S201>/Switch1' */

    /* Switch: '<S201>/Switch2' incorporates:
     *  Constant: '<S207>/Calib'
     */
    if (KeFCRR_b_FcHeatReq_SD)
    {
        /* Outport: '<Root>/VeFCRR_b_FcHeatReq' incorporates:
         *  Constant: '<S206>/Calib'
         *  SignalConversion generated from: '<S1>/VeFCRR_b_FcHeatReq'
         */
        (void)Rte_Write_VeFCRR_b_FcHeatReq_Value(KeFCRR_b_FcHeatReq_D);
    }
    else
    {
        /* Outport: '<Root>/VeFCRR_b_FcHeatReq' incorporates:
         *  SignalConversion generated from: '<S1>/VeFCRR_b_FcHeatReq'
         */
        (void)Rte_Write_VeFCRR_b_FcHeatReq_Value(VeFCRR_b_FcHeatReq_B4);
    }

    /* End of Switch: '<S201>/Switch2' */

    /* Switch: '<S201>/Switch5' incorporates:
     *  Constant: '<S214>/Calib'
     */
    if (KeFCRR_b_PreHeatReq_SD)
    {
        /* Outport: '<Root>/VeFCRR_b_PreHeatReq' incorporates:
         *  Constant: '<S213>/Calib'
         *  SignalConversion generated from: '<S1>/VeFCRR_b_PreHeatReq'
         */
        (void)Rte_Write_VeFCRR_b_PreHeatReq_Value(KeFCRR_b_PreHeatReq_D);
    }
    else
    {
        /* Outport: '<Root>/VeFCRR_b_PreHeatReq' incorporates:
         *  SignalConversion generated from: '<S1>/VeFCRR_b_PreHeatReq'
         */
        (void)Rte_Write_VeFCRR_b_PreHeatReq_Value(VeFCRR_b_PreHeatReq_B4);
    }

    /* End of Switch: '<S201>/Switch5' */

    /* Switch: '<S201>/Switch11' incorporates:
     *  Constant: '<S217>/Calib'
     */
    if (KeFCRR_b_PwrSnkDispReq_SD)
    {
        /* Outport: '<Root>/VeFCRR_b_PwrSnkDispReq' incorporates:
         *  Constant: '<S216>/Calib'
         *  SignalConversion generated from: '<S1>/VeFCRR_b_PwrSnkDispReq'
         */
        (void)Rte_Write_VeFCRR_b_PwrSnkDispReq_Value(KeFCRR_b_PwrSnkDispReq_D);
    }
    else
    {
        /* Outport: '<Root>/VeFCRR_b_PwrSnkDispReq' incorporates:
         *  SignalConversion generated from: '<S1>/VeFCRR_b_PwrSnkDispReq'
         */
        (void)Rte_Write_VeFCRR_b_PwrSnkDispReq_Value(VeFCRR_b_PwrSnkDispReq_B4);
    }

    /* End of Switch: '<S201>/Switch11' */

    /* Switch: '<S201>/Switch7' incorporates:
     *  Constant: '<S212>/Calib'
     */
    if (KeFCRR_b_FlowReq_SD)
    {
        /* Outport: '<Root>/VeFCRR_dV_FlowReq' incorporates:
         *  Constant: '<S218>/Calib'
         *  SignalConversion generated from: '<S1>/VeFCRR_dV_FlowReq'
         */
        (void)Rte_Write_VeFCRR_dV_FlowReq_Value(KeFCRR_dV_FlowReq_D);
    }
    else
    {
        /* Outport: '<Root>/VeFCRR_dV_FlowReq' incorporates:
         *  SignalConversion generated from: '<S1>/VeFCRR_dV_FlowReq'
         */
        (void)Rte_Write_VeFCRR_dV_FlowReq_Value(VeFCRR_dV_FlowReq_rawLim);
    }

    /* End of Switch: '<S201>/Switch7' */

    /* Switch: '<S201>/Switch8' incorporates:
     *  Constant: '<S209>/Calib'
     *  Constant: '<S219>/Calib'
     *  SignalConversion generated from: '<S3>/FcShutDownReq'
     */
    if (KeFCRR_b_FcShutDownReq_SD)
    {
        tmp_0 = KeFCRR_e_FcShutDownReq_D;
    }
    else
    {
        tmp_0 = FCRR_ac_B.OutportBufferForFcShutDownReq;
    }

    /* Outport: '<Root>/VeFCRR_e_FcShutDownReq' incorporates:
     *  SignalConversion generated from: '<S1>/VeFCRR_e_FcShutDownReq'
     *  Switch: '<S201>/Switch8'
     */
    (void)Rte_Write_VeFCRR_e_FcShutDownReq_Value(tmp_0);

    /* Switch: '<S201>/Switch12' incorporates:
     *  Constant: '<S210>/Calib'
     *  Constant: '<S220>/Calib'
     */
    if (KeFCRR_b_FcTempRange_SD)
    {
        VeFCRR_b_FcCoolReq_B4_tmp = KeFCRR_e_FcTempRange_D;
    }

    /* Outport: '<Root>/VeFCRR_e_FcTempRange' incorporates:
     *  SignalConversion generated from: '<S1>/VeFCRR_e_FcTempRange'
     *  Switch: '<S201>/Switch12'
     */
    (void)Rte_Write_VeFCRR_e_FcTempRange_Value(VeFCRR_b_FcCoolReq_B4_tmp);

    /* Switch: '<S201>/Switch3' incorporates:
     *  Constant: '<S211>/Calib'
     *  Constant: '<S221>/Calib'
     *  Merge: '<S8>/Merge'
     */
    if (KeFCRR_b_FcThermalMode_SD)
    {
        tmp_1 = KeFCRR_e_FcThermalMode_D;
    }
    else
    {
        tmp_1 = VeFCRR_e_FcThermalMode_B4;
    }

    /* Outport: '<Root>/VeFCRR_e_FcThermalMode' incorporates:
     *  SignalConversion generated from: '<S1>/VeFCRR_e_FcThermalMode'
     *  Switch: '<S201>/Switch3'
     */
    (void)Rte_Write_VeFCRR_e_FcThermalMode_Value(tmp_1);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/FCRR_MedTEH' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
#endif

}

#endif

/* Output function */
FUNC(void, FCRR_CODE) FCRR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/FCRR_PwrOn'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/FTRR_NF_DIAL'
     */
    /* SignalConversion generated from: '<S263>/VeFCRR_e_FcTempRange_NF' incorporates:
     *  Constant: '<S272>/Calib'
     */
    FCRR_ac_B.OutportBufferForVeFCRR_e_FcTempRange_NF = KeFCRR_e_FcTempRange_NF;

    /* SignalConversion generated from: '<S263>/VeFCRR_b_FcCoolReq_NF' incorporates:
     *  Constant: '<S266>/Calib'
     */
    FCRR_ac_B.OutportBufferForVeFCRR_b_FcCoolReq_NF = KeFCRR_b_FcCoolReq_NF;

    /* SignalConversion generated from: '<S263>/VeFCRR_b_FcHeatReq_NF' incorporates:
     *  Constant: '<S267>/Calib'
     */
    FCRR_ac_B.OutportBufferForVeFCRR_b_FcHeatReq_NF = KeFCRR_b_FcHeatReq_NF;

    /* SignalConversion generated from: '<S263>/VeFCRR_b_PreHeatReq_NF' incorporates:
     *  Constant: '<S268>/Calib'
     */
    FCRR_ac_B.OutportBufferForVeFCRR_b_PreHeatReq_NF = KeFCRR_b_PreHeatReq_NF;

    /* SignalConversion generated from: '<S263>/VeFCRR_dV_FlowReq_NF' incorporates:
     *  Constant: '<S270>/Calib'
     */
    FCRR_ac_B.OutportBufferForVeFCRR_dV_FlowReq_NF = KeFCRR_dV_FlowReq_NF;

    /* SignalConversion generated from: '<S263>/VeFCRR_T_FcOutTempSetPoint_NF' incorporates:
     *  Constant: '<S265>/Calib'
     */
    FCRR_ac_B.OutportBufferForVeFCRR_T_FcOutTempSetPoi =
        KeFCRR_T_FcOutTempSetPoint_NF;

    /* SignalConversion generated from: '<S263>/VeFCRR_e_FcThermalMode_NF' incorporates:
     *  Constant: '<S273>/Calib'
     */
    FCRR_ac_B.OutportBufferForVeFCRR_e_FcThermalMode_N =
        KeFCRR_e_FcThermalMode_NF;

    /* SignalConversion generated from: '<S263>/VeFCRR_P_PwrDispReq_NF' incorporates:
     *  Constant: '<S264>/Calib'
     */
    FCRR_ac_B.OutportBufferForVeFCRR_P_PwrDispReq_NF = KeFCRR_P_PwrDispReq_NF;

    /* SignalConversion generated from: '<S263>/VeFCRR_b_PwrSnkDispReq_NF' incorporates:
     *  Constant: '<S269>/Calib'
     */
    FCRR_ac_B.OutportBufferForVeFCRR_b_PwrSnkDispReq_N =
        KeFCRR_b_PwrSnkDispReq_NF;

    /* SignalConversion generated from: '<S263>/VeFCRR_e_FcShutDownReq_NF' incorporates:
     *  Constant: '<S271>/Calib'
     */
    FCRR_ac_B.OutportBufferForVeFCRR_e_FcShutDownReq_N =
        KeFCRR_e_FcShutDownReq_NF;

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeFCRR_P_PwrDispReq' incorporates:
     *  SignalConversion generated from: '<S2>/VeFCRR_P_PwrDispReq_NF'
     */
    (void)Rte_Write_VeFCRR_P_PwrDispReq_Value
        (FCRR_ac_B.OutportBufferForVeFCRR_P_PwrDispReq_NF);

    /* Outport: '<Root>/VeFCRR_T_FcOutTempSetPoint' incorporates:
     *  SignalConversion generated from: '<S2>/VeFCRR_T_FcOutTempSetPoint_NF'
     */
    (void)Rte_Write_VeFCRR_T_FcOutTempSetPoint_Value
        (FCRR_ac_B.OutportBufferForVeFCRR_T_FcOutTempSetPoi);

    /* Outport: '<Root>/VeFCRR_b_FcCoolReq' incorporates:
     *  SignalConversion generated from: '<S2>/VeFCRR_b_FcCoolReq_NF'
     */
    (void)Rte_Write_VeFCRR_b_FcCoolReq_Value
        (FCRR_ac_B.OutportBufferForVeFCRR_b_FcCoolReq_NF);

    /* Outport: '<Root>/VeFCRR_b_FcHeatReq' incorporates:
     *  SignalConversion generated from: '<S2>/VeFCRR_b_FcHeatReq_NF'
     */
    (void)Rte_Write_VeFCRR_b_FcHeatReq_Value
        (FCRR_ac_B.OutportBufferForVeFCRR_b_FcHeatReq_NF);

    /* Outport: '<Root>/VeFCRR_b_PreHeatReq' incorporates:
     *  SignalConversion generated from: '<S2>/VeFCRR_b_PreHeatReq_NF'
     */
    (void)Rte_Write_VeFCRR_b_PreHeatReq_Value
        (FCRR_ac_B.OutportBufferForVeFCRR_b_PreHeatReq_NF);

    /* Outport: '<Root>/VeFCRR_b_PwrSnkDispReq' incorporates:
     *  SignalConversion generated from: '<S2>/VeFCRR_b_PwrSnkDispReq_NF'
     */
    (void)Rte_Write_VeFCRR_b_PwrSnkDispReq_Value
        (FCRR_ac_B.OutportBufferForVeFCRR_b_PwrSnkDispReq_N);

    /* Outport: '<Root>/VeFCRR_dV_FlowReq' incorporates:
     *  SignalConversion generated from: '<S2>/VeFCRR_dV_FlowReq_NF'
     */
    (void)Rte_Write_VeFCRR_dV_FlowReq_Value
        (FCRR_ac_B.OutportBufferForVeFCRR_dV_FlowReq_NF);

    /* Outport: '<Root>/VeFCRR_e_FcShutDownReq' incorporates:
     *  SignalConversion generated from: '<S263>/VeFCRR_e_FcShutDownReq_NF'
     *  SignalConversion generated from: '<S2>/VeFCRR_e_FcShutDownReq_NF'
     */
    (void)Rte_Write_VeFCRR_e_FcShutDownReq_Value
        (FCRR_ac_B.OutportBufferForVeFCRR_e_FcShutDownReq_N);

    /* Outport: '<Root>/VeFCRR_e_FcTempRange' incorporates:
     *  SignalConversion generated from: '<S263>/VeFCRR_e_FcTempRange_NF'
     *  SignalConversion generated from: '<S2>/VeFCRR_e_FcTempRange_NF'
     */
    (void)Rte_Write_VeFCRR_e_FcTempRange_Value
        (FCRR_ac_B.OutportBufferForVeFCRR_e_FcTempRange_NF);

    /* Outport: '<Root>/VeFCRR_e_FcThermalMode' incorporates:
     *  SignalConversion generated from: '<S263>/VeFCRR_e_FcThermalMode_NF'
     *  SignalConversion generated from: '<S2>/VeFCRR_e_FcThermalMode_NF'
     */
    (void)Rte_Write_VeFCRR_e_FcThermalMode_Value
        (FCRR_ac_B.OutportBufferForVeFCRR_e_FcThermalMode_N);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, FCRR_CODE) FCRR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */
    {
        FCRR_ac_B.OutportBufferForVeFCRR_e_FcTempRange_NF = CeFCRR_e_Nominal;
    }

    /* custom signals */
#if Rte_SysCon_Variant_FCRR_1

    VeFCRR_e_FcTempRange_B4 = CeFCRR_e_Nominal;

#endif

#if Rte_SysCon_Variant_FCRR_1

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
    /* SystemInitialize for Function Call SubSystem: '<Root>/FCRR_MedTEH' */
    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Control_100ms'
     */
    /* Start for If: '<S10>/If' */
    FCRR_ac_DW.If_ActiveSubsystem = -1;

    /* SystemInitialize for Merge: '<S33>/Merge' */
    VeFCRR_e_FcTempRange_B4 = CeFCRR_e_Nominal;

    /* SystemInitialize for Enabled SubSystem: '<S88>/EnabledSubsystem' */
    /* SystemInitialize for SignalConversion generated from: '<S97>/Out1' incorporates:
     *  Outport: '<S97>/Out1'
     */
    FCRR_ac_B.OutportBufferForOut1 = true;

    /* SystemInitialize for Gain: '<S99>/Gain' incorporates:
     *  Outport: '<S97>/Out2'
     */
    FCRR_ac_B.Gain = true;

    /* End of SystemInitialize for SubSystem: '<S88>/EnabledSubsystem' */

    /* SystemInitialize for SignalConversion generated from: '<S3>/FcShutDownReq' incorporates:
     *  Constant: '<S107>/Constant'
     */
    FCRR_ac_B.OutportBufferForFcShutDownReq = FCRR_ac_ConstB.Constant;

    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of SystemInitialize for SubSystem: '<Root>/FCRR_MedTEH' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
#endif

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/FCRR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/FTRR_NF_DIAL'
     */
    /* SystemInitialize for SignalConversion generated from: '<S263>/VeFCRR_e_FcTempRange_NF' incorporates:
     *  Constant: '<S272>/Calib'
     */
    FCRR_ac_B.OutportBufferForVeFCRR_e_FcTempRange_NF = KeFCRR_e_FcTempRange_NF;

    /* SystemInitialize for SignalConversion generated from: '<S263>/VeFCRR_b_FcCoolReq_NF' incorporates:
     *  Constant: '<S266>/Calib'
     */
    FCRR_ac_B.OutportBufferForVeFCRR_b_FcCoolReq_NF = KeFCRR_b_FcCoolReq_NF;

    /* SystemInitialize for SignalConversion generated from: '<S263>/VeFCRR_b_FcHeatReq_NF' incorporates:
     *  Constant: '<S267>/Calib'
     */
    FCRR_ac_B.OutportBufferForVeFCRR_b_FcHeatReq_NF = KeFCRR_b_FcHeatReq_NF;

    /* SystemInitialize for SignalConversion generated from: '<S263>/VeFCRR_b_PreHeatReq_NF' incorporates:
     *  Constant: '<S268>/Calib'
     */
    FCRR_ac_B.OutportBufferForVeFCRR_b_PreHeatReq_NF = KeFCRR_b_PreHeatReq_NF;

    /* SystemInitialize for SignalConversion generated from: '<S263>/VeFCRR_dV_FlowReq_NF' incorporates:
     *  Constant: '<S270>/Calib'
     */
    FCRR_ac_B.OutportBufferForVeFCRR_dV_FlowReq_NF = KeFCRR_dV_FlowReq_NF;

    /* SystemInitialize for SignalConversion generated from: '<S263>/VeFCRR_T_FcOutTempSetPoint_NF' incorporates:
     *  Constant: '<S265>/Calib'
     */
    FCRR_ac_B.OutportBufferForVeFCRR_T_FcOutTempSetPoi =
        KeFCRR_T_FcOutTempSetPoint_NF;

    /* SystemInitialize for SignalConversion generated from: '<S263>/VeFCRR_e_FcThermalMode_NF' incorporates:
     *  Constant: '<S273>/Calib'
     */
    FCRR_ac_B.OutportBufferForVeFCRR_e_FcThermalMode_N =
        KeFCRR_e_FcThermalMode_NF;

    /* SystemInitialize for SignalConversion generated from: '<S263>/VeFCRR_P_PwrDispReq_NF' incorporates:
     *  Constant: '<S264>/Calib'
     */
    FCRR_ac_B.OutportBufferForVeFCRR_P_PwrDispReq_NF = KeFCRR_P_PwrDispReq_NF;

    /* SystemInitialize for SignalConversion generated from: '<S263>/VeFCRR_b_PwrSnkDispReq_NF' incorporates:
     *  Constant: '<S269>/Calib'
     */
    FCRR_ac_B.OutportBufferForVeFCRR_b_PwrSnkDispReq_N =
        KeFCRR_b_PwrSnkDispReq_NF;

    /* SystemInitialize for SignalConversion generated from: '<S263>/VeFCRR_e_FcShutDownReq_NF' incorporates:
     *  Constant: '<S271>/Calib'
     */
    FCRR_ac_B.OutportBufferForVeFCRR_e_FcShutDownReq_N =
        KeFCRR_e_FcShutDownReq_NF;

    /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Outport: '<Root>/VeFCRR_e_FcTempRange' incorporates:
     *  Merge: '<Root>/Merge_1'
     */
    (void)Rte_Write_VeFCRR_e_FcTempRange_Value(CeFCRR_e_Nominal);

    /* SystemInitialize for Outport: '<Root>/VeFCRR_e_FcThermalMode' incorporates:
     *  Merge: '<Root>/Merge_5'
     */
    (void)Rte_Write_VeFCRR_e_FcThermalMode_Value(CeFCRR_e_FC_OFF);

    /* SystemInitialize for Outport: '<Root>/VeFCRR_e_FcShutDownReq' incorporates:
     *  Merge: '<Root>/Merge_10'
     */
    (void)Rte_Write_VeFCRR_e_FcShutDownReq_Value(CeFCRR_e_FcNoFlt);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
