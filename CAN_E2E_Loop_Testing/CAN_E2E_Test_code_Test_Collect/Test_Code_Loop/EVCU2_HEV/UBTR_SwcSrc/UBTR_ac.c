/*
 * File: UBTR_ac.c
 *
 * Code generated for Simulink model 'UBTR_ac'.
 *
 * Model version                  : 9.107
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 19:55:44 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "UBTR_ac.h"
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
#define START_SEC_CALIB_UNSPECIFIED_UBTR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_K_EngineCylNo = 6.0F;/* Referenced by: '<S256>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_K_ExaustToAirRatio = 1.06F;/* Referenced by: '<S257>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_K_FanSpeedAdjTrqHigh =
    300.0F;                            /* Referenced by:
                                        * '<S168>/Calib'
                                        * '<S208>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_K_FanSpeedAdjTrqLow =
    100.0F;                            /* Referenced by:
                                        * '<S169>/Calib'
                                        * '<S209>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_K_FanSpeedAdjTrqMid =
    200.0F;                            /* Referenced by:
                                        * '<S170>/Calib'
                                        * '<S210>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_K_FedmFanSpdAdjThrmCoeff =
    0.1F;                              /* Referenced by: '<S171>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_K_FedmFanStopHUpRespCoef =
    0.0F;                              /* Referenced by: '<S172>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_K_FedmUhoodFanSpdTrh = 1.0F;/* Referenced by: '<S173>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_K_FedmUhoodVehSpdTrh = 1.0F;/* Referenced by: '<S174>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_K_FedmVehStopHUpRespCoef =
    0.0F;                              /* Referenced by: '<S175>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_K_GenFanSpdAdjThrmlCoeff =
    0.1F;                              /* Referenced by: '<S211>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_K_GenUHoodFanStopAlpha =
    0.001F;                            /* Referenced by: '<S212>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_K_GenUHoodVehStopAlpha =
    0.001F;                            /* Referenced by: '<S213>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_K_GenUhoodFanSpdTrh = 1.0F;/* Referenced by: '<S214>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_K_GenUhoodVehSpdTrh = 1.0F;/* Referenced by: '<S215>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_K_RedmFanSpdAdjThrmCoeff =
    0.1F;                              /* Referenced by: '<S258>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_M_MtrA_TorqAchieved_D =
    0.0F;                              /* Referenced by: '<S274>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_Pct_AGS_CurrPos_D = 0.0F;/* Referenced by: '<S275>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_Pct_AadPos_D = 0.0F;/* Referenced by: '<S276>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_T_ECT_ThermostatOpen =
    90.0F;                             /* Referenced by: '<S112>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_T_EngCoolantTemp_D = 0.0F;/* Referenced by: '<S278>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_T_EngineOilTemp_D = 0.0F;/* Referenced by: '<S279>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_T_EngineTorque_D = 0.0F;/* Referenced by: '<S280>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_T_EstUndrhoodTemp_D = 0.0F;/* Referenced by: '<S305>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_4

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_T_EstUndrhoodTemp_NF = 0.0F;/* Referenced by: '<S317>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_T_FEAD_EstBeltTemp_D = 0.0F;/* Referenced by: '<S306>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_4

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_T_FEAD_EstBeltTemp_NF =
    0.0F;                              /* Referenced by: '<S318>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_T_FedmExhSurf_D = 0.0F;/* Referenced by: '<S281>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_T_GenExhSurf_D = 0.0F;/* Referenced by: '<S282>/Calib' */

#endif

#if !Rte_SysCon_Variant_UBTR_5 && !Rte_SysCon_Variant_UBTR_6 && Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_T_MtrAAirTempDflt = 0.0F;/* Referenced by: '<S148>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_4

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_T_MtrAAirTemp_NF = 0.0F;/* Referenced by: '<S319>/Calib' */

#endif

#if (Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5) || (Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_6)

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_T_MtrA_LPF_MaxLim =
    10000.0F;                          /* Referenced by:
                                        * '<S156>/Calib'
                                        * '<S220>/Calib'
                                        * '<S221>/Calib'
                                        * '<S222>/Calib'
                                        * '<S223>/Calib'
                                        */

#endif

#if (Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5) || (Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_6)

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_T_MtrA_LPF_MinLim =
    -10000.0F;                         /* Referenced by:
                                        * '<S157>/Calib'
                                        * '<S224>/Calib'
                                        * '<S225>/Calib'
                                        * '<S226>/Calib'
                                        * '<S227>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_T_MtrA_Temp_D = 0.0F;/* Referenced by: '<S283>/Calib' */

#endif

#if !Rte_SysCon_Variant_UBTR_5 && !Rte_SysCon_Variant_UBTR_6 && Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_T_MtrBAirTempDflt = 0.0F;/* Referenced by: '<S149>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_4

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_T_MtrBAirTemp_NF = 0.0F;/* Referenced by: '<S320>/Calib' */

#endif

#if (Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5) || (Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_6)

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_T_MtrB_LPF_MaxLim =
    10000.0F;                          /* Referenced by:
                                        * '<S246>/Calib'
                                        * '<S261>/Calib'
                                        * '<S262>/Calib'
                                        */

#endif

#if (Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5) || (Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_6)

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_T_MtrB_LPF_MinLim =
    -10000.0F;                         /* Referenced by:
                                        * '<S247>/Calib'
                                        * '<S263>/Calib'
                                        * '<S264>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_6

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_T_MtrCAirTempBev = 0.0F;/* Referenced by: '<S150>/Calib' */

#endif

#if !Rte_SysCon_Variant_UBTR_5 && !Rte_SysCon_Variant_UBTR_6 && Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_T_MtrCAirTempDflt = 0.0F;/* Referenced by: '<S151>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_4

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_T_MtrCAirTemp_NF = 0.0F;/* Referenced by: '<S321>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_T_MtrC_LPF_MaxLim =
    10000.0F;                          /* Referenced by:
                                        * '<S180>/Calib'
                                        * '<S181>/Calib'
                                        * '<S182>/Calib'
                                        * '<S183>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_T_MtrC_LPF_MinLim =
    -10000.0F;                         /* Referenced by:
                                        * '<S184>/Calib'
                                        * '<S185>/Calib'
                                        * '<S186>/Calib'
                                        * '<S187>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(boolean, UBTR_VAR_INIT) KeUBTR_b_AGS_CurrPos_SD = 0;/* Referenced by: '<S284>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(boolean, UBTR_VAR_INIT) KeUBTR_b_AadPos_SD = 0;/* Referenced by: '<S285>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(boolean, UBTR_VAR_INIT) KeUBTR_b_AirIntake_SD = 0;/* Referenced by: '<S286>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(boolean, UBTR_VAR_INIT) KeUBTR_b_EngCoolantTemp_SD = 0;/* Referenced by: '<S287>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(boolean, UBTR_VAR_INIT) KeUBTR_b_EngineOilTemp_SD = 0;/* Referenced by: '<S288>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(boolean, UBTR_VAR_INIT) KeUBTR_b_EngineSpeed_SD = 0;/* Referenced by: '<S289>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(boolean, UBTR_VAR_INIT) KeUBTR_b_EngineTorque_SD = 0;/* Referenced by: '<S290>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(boolean, UBTR_VAR_INIT) KeUBTR_b_EstUndrhoodTemp_SD = 0;/* Referenced by: '<S307>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(boolean, UBTR_VAR_INIT) KeUBTR_b_FEAD_EstBeltTemp_SD = 0;/* Referenced by: '<S308>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(boolean, UBTR_VAR_INIT) KeUBTR_b_FedmExhSurf_SD = 0;/* Referenced by: '<S291>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(boolean, UBTR_VAR_INIT) KeUBTR_b_GenExhSurf_SD = 0;/* Referenced by: '<S292>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(boolean, UBTR_VAR_INIT) KeUBTR_b_LT_PsvPmpCmd_SD = 0;/* Referenced by: '<S293>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(boolean, UBTR_VAR_INIT) KeUBTR_b_MtrA_Spd_SD = 0;/* Referenced by: '<S294>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(boolean, UBTR_VAR_INIT) KeUBTR_b_MtrA_Temp_SD = 0;/* Referenced by: '<S295>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(boolean, UBTR_VAR_INIT) KeUBTR_b_MtrA_TorqAchieved_SD = 0;/* Referenced by: '<S296>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(boolean, UBTR_VAR_INIT) KeUBTR_b_RTC_CurrentTime_SD = 0;/* Referenced by: '<S297>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(boolean, UBTR_VAR_INIT) KeUBTR_b_UseECT4FEADBeltTemp = 0;/* Referenced by: '<S15>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(boolean, UBTR_VAR_INIT) KeUBTR_b_UseRadModel_App1 = 0;/* Referenced by: '<S113>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(boolean, UBTR_VAR_INIT) KeUBTR_b_VehSpd_SD = 0;/* Referenced by: '<S298>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_dT_AmbTempOffset = 0.0F;/* Referenced by: '<S98>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_dt_InitTime_BeltTemp = 0.1F;/* Referenced by: '<S131>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_k_Af_airside = 0.3588F;/* Referenced by: '<S40>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_k_Af_wall = 0.3588F;/* Referenced by: '<S50>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_k_BetaMBD = 0.5F;/* Referenced by: '<S23>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_k_C1 = 0.001F;/* Referenced by: '<S41>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_k_C2_airside = 0.001F;/* Referenced by: '<S42>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_k_C2_wall = 0.001F;/* Referenced by: '<S51>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_k_C_airsidewall = 580.0F;/* Referenced by: '<S43>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_k_C_wall = 1833.0F;/* Referenced by: '<S52>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_k_ConvectnArea_Cond = 3.0F;/* Referenced by:
                                                                      * '<S117>/Calib'
                                                                      * '<S123>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_k_ConvectnArea_EngnBlock =
    2.0F;                              /* Referenced by: '<S107>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_k_ConvectnArea_HTR = 6.0F;/* Referenced by: '<S118>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_k_ConvectnArea_Hood = 2.0F;/* Referenced by: '<S109>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_k_ConvectnArea_LTR = 3.0F;/* Referenced by: '<S119>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_k_ConvectnArea_Radiator =
    10.0F;                             /* Referenced by: '<S124>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_k_ECT_EngOff_TempFact =
    0.0F;                              /* Referenced by: '<S80>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_k_ECT_EngOn_TempFact = 0.0F;/* Referenced by: '<S81>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_k_GammaMBD = 0.5F;/* Referenced by: '<S24>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_k_IntegScale = 0.0001F;/* Referenced by: '<S25>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_k_LPFBeltTemp = 0.01F;/* Referenced by: '<S72>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_k_LPFBeltheat_Temp = 0.001F;/* Referenced by: '<S86>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_k_LPFUnderHoodTemp = 0.01F;/* Referenced by: '<S99>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_k_LTR_RadiatorFactor = 0.5F;/* Referenced by: '<S125>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_k_M_belt_segment =
    2.2201E-8F;                        /* Referenced by: '<S26>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_k_MtrA_MtrOff_TempFact =
    0.0F;                              /* Referenced by: '<S82>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_k_MtrA_MtrOn_TempFact =
    0.0F;                              /* Referenced by: '<S83>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_k_ThermalMass_UnderHood =
    10.0F;                             /* Referenced by: '<S100>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_k_UA_inf_motA_belt =
    6.2073F;                           /* Referenced by: '<S27>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_k_UA_motA_pulley_to_Belt =
    1.8646F;                           /* Referenced by: '<S28>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_k_UnderHood_TempFact = 1.0F;/* Referenced by: '<S84>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_k_alphaClnt = 0.4F;/* Referenced by: '<S47>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_k_betaClnt = 0.6F;/* Referenced by: '<S48>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_k_clnt_to_wall = 500.0F;/* Referenced by: '<S53>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_k_cp_belt = 4647.3F;/* Referenced by: '<S29>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_k_scaling_wall = 1.0F;/* Referenced by: '<S54>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_m_AirIntake_D = 0.0F;/* Referenced by: '<S277>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_n_EngineOn = 750.0F;/* Referenced by: '<S129>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_n_EngineSpeed_D = 0.0F;/* Referenced by: '<S299>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_n_FedmNominalFanSpeed =
    1000.0F;                           /* Referenced by: '<S188>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_n_GenNominalFanSpeed =
    1000.0F;                           /* Referenced by: '<S228>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_n_LT_PsvPmpCmd_D = 0.0F;/* Referenced by: '<S300>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_n_MtrA_Spd_D = 0.0F;/* Referenced by: '<S301>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_n_RedmNominalFanSpeed =
    1000.0F;                           /* Referenced by: '<S265>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_t_InitTime_BeltTemp = 10.0F;/* Referenced by: '<S132>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(uint32, UBTR_VAR_INIT) KeUBTR_t_RTC_CurrentTime_D = 0U;/* Referenced by: '<S302>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(uint32, UBTR_VAR_INIT) KeUBTR_t_SleepTime_Belt = 7200U;/* Referenced by: '<S138>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(uint32, UBTR_VAR_INIT) KeUBTR_t_SleepTime_Underhood =
    7200U;                             /* Referenced by: '<S139>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_t_deltatime = 0.1F;/* Referenced by: '<S30>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KeUBTR_v_VehSpd_D = 0.0F;/* Referenced by: '<S303>/Calib' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KtUBTR_K_GenAirTempAADFactor[10] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, -15.0F, -13.0F, -11.0F, -9.0F, -7.0F
} ;                                    /* Referenced by: '<S229>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KtUBTR_K_GenAirTempAgsFac[10] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, -15.0F, -13.0F, -11.0F, -9.0F, -7.0F
} ;                                    /* Referenced by: '<S230>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KtUBTR_K_GenAirTempFanStopHUp[5] =
{
    0.002F, 0.002F, 0.002F, 0.002F, 0.002F
} ;                                    /* Referenced by: '<S231>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KtUBTR_K_GenAitTempVehStopHUp[5] =
{
    0.002F, 0.002F, 0.002F, 0.002F, 0.002F
} ;                                    /* Referenced by: '<S232>/Vector' */

#endif

#if (Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5) || (Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_6)

static volatile CONST(float32, UBTR_VAR_INIT) KtUBTR_T_FedmAirTempAadFac[10] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, -15.0F, -13.0F, -11.0F, -9.0F, -7.0F
} ;                                    /* Referenced by:
                                        * '<S158>/Vector'
                                        * '<S189>/Vector'
                                        */

#endif

#if (Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5) || (Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_6)

static volatile CONST(float32, UBTR_VAR_INIT) KtUBTR_T_FedmAirTempAgsFac[10] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, -15.0F, -13.0F, -11.0F, -9.0F, -7.0F
} ;                                    /* Referenced by:
                                        * '<S159>/Vector'
                                        * '<S190>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_6

static volatile CONST(float32, UBTR_VAR_INIT) KtUBTR_T_FedmAirTempAmbFanSpdAdj
    [10] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, -15.0F, -13.0F, -11.0F, -9.0F, -7.0F
} ;                                    /* Referenced by: '<S160>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_6

static volatile CONST(float32, UBTR_VAR_INIT) KtUBTR_T_FedmAirTempAmbLTRAdj[25] =
{
    27.75F, 32.88F, 38.01F, 48.27F, 58.53F, 27.75F, 32.88F, 38.01F, 48.27F,
    58.53F, 48.26F, 53.39F, 58.52F, 68.78F, 79.04F, 68.77F, 73.9F, 79.03F,
    89.29F, 99.55F, 89.28F, 94.41F, 99.54F, 109.8F, 120.06F
} ;                                    /* Referenced by: '<S161>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KtUBTR_T_FedmAirTempFanStopHUp[5] =
{
    0.002F, 0.002F, 0.002F, 0.002F, 0.002F
} ;                                    /* Referenced by: '<S191>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KtUBTR_T_FedmAirTempNominal[9] =
{
    73.0F, 61.0F, 45.0F, 76.0F, 64.0F, 60.0F, 86.0F, 75.0F, 75.0F
} ;                                    /* Referenced by: '<S192>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KtUBTR_T_FedmAirTempVehStopsHUp[5]
    =
{
    0.002F, 0.002F, 0.002F, 0.002F, 0.002F
} ;                                    /* Referenced by: '<S193>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT)
    KtUBTR_T_FedmAirTmpFanSpdAdjHighLoad[20] =
{
    1.1F, 1.1F, 0.75F, 0.15F, 1.1F, 1.1F, 1.0F, 0.15F, 1.1F, 1.1F, 1.0F, 0.15F,
    1.3F, 1.1F, 1.0F, 0.15F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S194>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT)
    KtUBTR_T_FedmAirTmpFanSpdAdjLowLoad[20] =
{
    0.5F, 1.1F, 0.5F, 0.46F, 0.5F, 1.1F, 0.5F, 0.46F, 0.5F, 1.1F, 0.5F, 0.46F,
    0.5F, 1.1F, 0.5F, 0.46F, 0.5F, 1.1F, 0.5F, 0.46F
} ;                                    /* Referenced by: '<S195>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT)
    KtUBTR_T_FedmAirTmpFanSpdAdjMidLoad[20] =
{
    1.1F, 1.1F, 0.15F, 0.15F, 1.1F, 1.1F, 0.15F, 0.15F, 1.1F, 1.1F, 0.15F, 0.15F,
    1.1F, 1.1F, 0.15F, 0.15F, 1.1F, 1.1F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S196>/Vector' */

#endif

#if (Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5) || (Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_6)

static volatile CONST(float32, UBTR_VAR_INIT) KtUBTR_T_FedmUhoodAirTempCoef[5] =
{
    0.002F, 0.002F, 0.002F, 0.002F, 0.002F
} ;                                    /* Referenced by:
                                        * '<S162>/Vector'
                                        * '<S197>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT)
    KtUBTR_T_GenAirFanSpeedAdjHighLoad[20] =
{
    1.1F, 1.1F, 0.15F, 0.15F, 1.1F, 1.1F, 0.15F, 0.15F, 1.1F, 1.1F, 0.15F, 0.15F,
    1.3F, 1.1F, 0.15F, 0.15F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S233>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KtUBTR_T_GenAirFanSpeedAdjLowLoad
    [20] =
{
    0.5F, 1.1F, 0.5F, 0.46F, 0.5F, 1.1F, 0.5F, 0.46F, 0.5F, 1.1F, 0.5F, 0.46F,
    0.5F, 1.1F, 0.5F, 0.46F, 0.5F, 1.1F, 0.5F, 0.46F
} ;                                    /* Referenced by: '<S234>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KtUBTR_T_GenAirFanSpeedMidLoad[20]
    =
{
    1.1F, 1.1F, 0.15F, 0.15F, 1.1F, 1.1F, 0.15F, 0.15F, 1.1F, 1.1F, 0.15F, 0.15F,
    1.3F, 1.1F, 0.15F, 0.15F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S235>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KtUBTR_T_GenAirNorminal[9] =
{
    73.0F, 61.0F, 45.0F, 76.0F, 64.0F, 60.0F, 86.0F, 75.0F, 75.0F
} ;                                    /* Referenced by: '<S236>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KtUBTR_T_RedmAirTempAmbAdj[12] =
{
    0.005F, 0.005F, 0.008F, 0.008F, 0.005F, 0.005F, 0.008F, 0.008F, 0.5F, 0.5F,
    0.5F, 0.5F
} ;                                    /* Referenced by: '<S266>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_6

static volatile CONST(float32, UBTR_VAR_INIT) KtUBTR_T_RedmAirTempAmbFanSpdAdj
    [10] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, -15.0F, -13.0F, -11.0F, -9.0F, -7.0F
} ;                                    /* Referenced by: '<S248>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_6

static volatile CONST(float32, UBTR_VAR_INIT) KtUBTR_T_RedmAirTempAmbLTRAdj[25] =
{
    27.75F, 32.88F, 38.01F, 48.27F, 58.53F, 27.75F, 32.88F, 38.01F, 48.27F,
    58.53F, 48.26F, 53.39F, 58.52F, 68.78F, 79.04F, 68.77F, 73.9F, 79.03F,
    89.29F, 99.55F, 89.28F, 94.41F, 99.54F, 109.8F, 120.06F
} ;                                    /* Referenced by: '<S249>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KtUBTR_T_RedmAirTempFanAdj[4] =
{
    0.13F, 0.11F, 0.07F, 0.01F
} ;                                    /* Referenced by: '<S267>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KtUBTR_T_RedmAirTempNominal[16] =
{
    46.0F, 46.0F, 40.0F, 38.0F, 48.0F, 48.0F, 43.0F, 43.0F, 70.0F, 58.0F, 55.0F,
    53.0F, 95.0F, 68.0F, 70.0F, 66.0F
} ;                                    /* Referenced by: '<S268>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KtUBTR_T_RedmAirTempThermalCoeff
    [12] =
{
    0.005F, 0.005F, 0.008F, 0.008F, 0.005F, 0.005F, 0.008F, 0.008F, 0.5F, 0.5F,
    0.5F, 0.5F
} ;                                    /* Referenced by: '<S269>/Vector' */

#endif

#if (Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5) || (Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_6)

static volatile CONST(float32, UBTR_VAR_INIT) KtUBTR_T_RedmAitTmpAadFactor[10] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, -15.0F, -13.0F, -11.0F, -9.0F, -7.0F
} ;                                    /* Referenced by:
                                        * '<S250>/Vector'
                                        * '<S271>/Vector'
                                        */

#endif

#if (Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5) || (Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_6)

static volatile CONST(float32, UBTR_VAR_INIT) KtUBTR_T_RedmAitTmpAgsFactor[10] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, -15.0F, -13.0F, -11.0F, -9.0F, -7.0F
} ;                                    /* Referenced by:
                                        * '<S251>/Vector'
                                        * '<S270>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_6

static volatile CONST(float32, UBTR_VAR_INIT) KtUBTR_T_RedmUhoodAirTempCoef[5] =
{
    0.002F, 0.002F, 0.002F, 0.002F, 0.002F
} ;                                    /* Referenced by: '<S252>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KtUBTR_k_BeltHeatGen_dT[36] =
{
    5.0F, 7.5F, 10.0F, 10.0F, 10.0F, 10.0F, 2.5F, 2.5F, 4.0F, 4.0F, 4.0F, 7.5F,
    -2.0F, -2.0F, -2.0F, -3.0F, -3.0F, -3.0F, 2.5F, 2.5F, 4.0F, 4.0F, 4.0F, 7.5F,
    5.0F, 7.5F, 10.0F, 10.0F, 10.0F, 10.0F, 7.5F, 10.0F, 10.0F, 10.0F, 10.0F,
    10.0F
} ;                                    /* Referenced by: '<S87>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KtUBTR_k_Belt_CoolDwnFrac[6] =
{
    0.0F, 0.1F, 0.5F, 0.7F, 0.9F, 1.0F
} ;                                    /* Referenced by: '<S142>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KtUBTR_k_ConvectnCoeff_Cond[36] =
{
    0.1F, 0.25F, 0.35F, 0.55F, 0.75F, 1.0F, 0.1F, 0.25F, 0.35F, 0.55F, 0.75F,
    1.0F, 0.1F, 0.25F, 0.35F, 0.55F, 0.75F, 1.0F, 0.1F, 0.25F, 0.35F, 0.55F,
    0.75F, 1.0F, 0.1F, 0.25F, 0.35F, 0.55F, 0.75F, 1.0F, 0.1F, 0.25F, 0.35F,
    0.55F, 0.75F, 1.0F
} ;                                    /* Referenced by:
                                        * '<S120>/Vector'
                                        * '<S126>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KtUBTR_k_ConvectnCoeff_Engine[36] =
{
    0.5F, 0.75F, 1.0F, 0.8F, 0.75F, 0.5F, 0.5F, 0.75F, 1.0F, 0.8F, 0.75F, 0.5F,
    0.5F, 0.75F, 1.0F, 0.8F, 0.75F, 0.5F, 0.5F, 0.75F, 1.0F, 0.8F, 0.75F, 0.5F,
    0.5F, 0.75F, 1.0F, 0.8F, 0.75F, 0.5F, 0.5F, 0.75F, 1.0F, 0.8F, 0.75F, 0.5F
} ;                                    /* Referenced by: '<S108>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KtUBTR_k_ConvectnCoeff_HTR[36] =
{
    0.1F, 0.25F, 0.35F, 0.55F, 0.75F, 1.0F, 0.1F, 0.25F, 0.35F, 0.55F, 0.75F,
    1.0F, 0.1F, 0.25F, 0.35F, 0.55F, 0.75F, 1.0F, 0.1F, 0.25F, 0.35F, 0.55F,
    0.75F, 1.0F, 0.1F, 0.25F, 0.35F, 0.55F, 0.75F, 1.0F, 0.1F, 0.25F, 0.35F,
    0.55F, 0.75F, 1.0F
} ;                                    /* Referenced by: '<S121>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KtUBTR_k_ConvectnCoeff_Hood[36] =
{
    0.5F, 0.75F, 0.85F, 1.0F, 1.0F, 1.0F, 0.5F, 0.75F, 0.85F, 1.0F, 1.0F, 1.0F,
    0.5F, 0.75F, 0.85F, 1.0F, 1.0F, 1.0F, 0.5F, 0.75F, 0.85F, 1.0F, 1.0F, 1.0F,
    0.5F, 0.75F, 0.85F, 1.0F, 1.0F, 1.0F, 0.5F, 0.75F, 0.85F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S110>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KtUBTR_k_ConvectnCoeff_LTR[36] =
{
    0.1F, 0.25F, 0.35F, 0.55F, 0.75F, 1.0F, 0.1F, 0.25F, 0.35F, 0.55F, 0.75F,
    1.0F, 0.1F, 0.25F, 0.35F, 0.55F, 0.75F, 1.0F, 0.1F, 0.25F, 0.35F, 0.55F,
    0.75F, 1.0F, 0.1F, 0.25F, 0.35F, 0.55F, 0.75F, 1.0F, 0.1F, 0.25F, 0.35F,
    0.55F, 0.75F, 1.0F
} ;                                    /* Referenced by: '<S122>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KtUBTR_k_ConvectnCoeff_Radiatr[36]
    =
{
    0.1F, 0.25F, 0.55F, 0.75F, 1.0F, 1.0F, 0.1F, 0.25F, 0.55F, 0.75F, 1.0F, 1.0F,
    0.1F, 0.25F, 0.55F, 0.75F, 1.0F, 1.0F, 0.1F, 0.25F, 0.55F, 0.75F, 1.0F, 1.0F,
    0.1F, 0.25F, 0.55F, 0.75F, 1.0F, 1.0F, 0.1F, 0.25F, 0.55F, 0.75F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S127>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KtUBTR_k_Fandc_rpm[6] =
{
    0.0F, 988.0F, 1519.0F, 2026.0F, 2488.0F, 2500.0F
} ;                                    /* Referenced by: '<S56>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KtUBTR_k_GenUHoodAirTempCoef[5] =
{
    0.002F, 0.002F, 0.002F, 0.002F, 0.002F
} ;                                    /* Referenced by: '<S237>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KtUBTR_k_HeatTrnfrCoeff_UnderHood
    [36] =
{
    1003.0F, 1005.0F, 1008.0F, 1013.0F, 1020.0F, 1029.0F, 1005.0F, 1008.0F,
    1013.0F, 1020.0F, 1029.0F, 1040.0F, 1008.0F, 1013.0F, 1020.0F, 1029.0F,
    1040.0F, 1051.0F, 1013.0F, 1020.0F, 1029.0F, 1040.0F, 1051.0F, 1063.0F,
    1020.0F, 1029.0F, 1040.0F, 1051.0F, 1063.0F, 1075.0F, 1029.0F, 1040.0F,
    1051.0F, 1063.0F, 1075.0F, 1087.0F
} ;                                    /* Referenced by: '<S101>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KtUBTR_k_MotorOn[42] =
{
    1.0F, 1.0F, 1.0F, 0.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 0.0F, 1.0F, 1.0F,
    1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 1.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F,
    1.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 1.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S134>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KtUBTR_k_Radairflw_cfm[24] =
{
    0.0F, 470.0F, 1238.0F, 2218.0F, 482.0F, 835.0F, 1523.0F, 2449.0F, 925.0F,
    1236.0F, 1848.0F, 2704.0F, 1301.0F, 1553.0F, 2144.0F, 2956.0F, 2195.0F,
    2317.0F, 2832.0F, 3569.0F, 3116.0F, 3110.0F, 3567.0F, 4228.0F
} ;                                    /* Referenced by: '<S57>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KtUBTR_k_RadiatorConvFactor[36] =
{
    0.0F, 0.0F, 0.4F, 0.75F, 0.75F, 0.75F, 0.3F, 0.6F, 0.75F, 0.85F, 0.85F,
    0.85F, 0.6F, 0.75F, 0.85F, 1.0F, 1.0F, 1.0F, 0.75F, 0.85F, 1.0F, 1.0F, 1.0F,
    1.0F, 0.85F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F
} ;                                    /* Referenced by: '<S16>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KtUBTR_k_Underhood_CoolDwnFrac[6] =
{
    0.0F, 0.1F, 0.5F, 0.7F, 0.9F, 1.0F
} ;                                    /* Referenced by: '<S143>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KxUBTR_K_GenAirTempAADFactor[5] =
{
    10.0F, 15.0F, 20.0F, 30.0F, 40.0F
} ;                                    /* Referenced by: '<S229>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KxUBTR_K_GenAirTempAgsFac[5] =
{
    10.0F, 15.0F, 20.0F, 30.0F, 40.0F
} ;                                    /* Referenced by: '<S230>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KxUBTR_K_GenAirTempFanStopHUp[5] =
{
    10.0F, 20.0F, 40.0F, 60.0F, 80.0F
} ;                                    /* Referenced by: '<S231>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KxUBTR_K_GenAitTempVehStopHUp[5] =
{
    10.0F, 20.0F, 40.0F, 60.0F, 80.0F
} ;                                    /* Referenced by: '<S232>/Vector' */

#endif

#if (Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5) || (Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_6)

static volatile CONST(float32, UBTR_VAR_INIT) KxUBTR_T_FedmAirTempAadFac[5] =
{
    10.0F, 15.0F, 20.0F, 30.0F, 40.0F
} ;                                    /* Referenced by:
                                        * '<S158>/Vector'
                                        * '<S189>/Vector'
                                        */

#endif

#if (Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5) || (Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_6)

static volatile CONST(float32, UBTR_VAR_INIT) KxUBTR_T_FedmAirTempAgsFac[5] =
{
    10.0F, 15.0F, 20.0F, 30.0F, 40.0F
} ;                                    /* Referenced by:
                                        * '<S159>/Vector'
                                        * '<S190>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_6

static volatile CONST(float32, UBTR_VAR_INIT) KxUBTR_T_FedmAirTempAmbFanSpdAdj[5]
    =
{
    10.0F, 15.0F, 20.0F, 30.0F, 40.0F
} ;                                    /* Referenced by: '<S160>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_6

static volatile CONST(float32, UBTR_VAR_INIT) KxUBTR_T_FedmAirTempAmbLTRAdj[5] =
{
    10.0F, 15.0F, 20.0F, 30.0F, 40.0F
} ;                                    /* Referenced by: '<S161>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KxUBTR_T_FedmAirTempFanStopHUp[5] =
{
    10.0F, 20.0F, 40.0F, 60.0F, 80.0F
} ;                                    /* Referenced by: '<S191>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KxUBTR_T_FedmAirTempNominal[3] =
{
    40.0F, 60.0F, 75.0F
} ;                                    /* Referenced by: '<S192>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KxUBTR_T_FedmAirTempVehStopsHUp[5]
    =
{
    10.0F, 20.0F, 40.0F, 60.0F, 80.0F
} ;                                    /* Referenced by: '<S193>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT)
    KxUBTR_T_FedmAirTmpFanSpdAdjHighLoad[4] =
{
    20.0F, 40.0F, 60.0F, 75.0F
} ;                                    /* Referenced by: '<S194>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT)
    KxUBTR_T_FedmAirTmpFanSpdAdjLowLoad[4] =
{
    20.0F, 40.0F, 60.0F, 75.0F
} ;                                    /* Referenced by: '<S195>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT)
    KxUBTR_T_FedmAirTmpFanSpdAdjMidLoad[4] =
{
    20.0F, 40.0F, 60.0F, 75.0F
} ;                                    /* Referenced by: '<S196>/Vector' */

#endif

#if (Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5) || (Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_6)

static volatile CONST(float32, UBTR_VAR_INIT) KxUBTR_T_FedmUhoodAirTempCoef[5] =
{
    10.0F, 20.0F, 40.0F, 60.0F, 80.0F
} ;                                    /* Referenced by:
                                        * '<S162>/Vector'
                                        * '<S197>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT)
    KxUBTR_T_GenAirFanSpeedAdjHighLoad[4] =
{
    20.0F, 40.0F, 60.0F, 75.0F
} ;                                    /* Referenced by: '<S233>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KxUBTR_T_GenAirFanSpeedAdjLowLoad
    [4] =
{
    20.0F, 40.0F, 60.0F, 75.0F
} ;                                    /* Referenced by: '<S234>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KxUBTR_T_GenAirFanSpeedMidLoad[4] =
{
    20.0F, 40.0F, 60.0F, 75.0F
} ;                                    /* Referenced by: '<S235>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KxUBTR_T_GenAirNorminal[3] =
{
    40.0F, 60.0F, 75.0F
} ;                                    /* Referenced by: '<S236>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KxUBTR_T_RedmAirTempAmbAdj[4] =
{
    20.0F, 40.0F, 60.0F, 75.0F
} ;                                    /* Referenced by: '<S266>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_6

static volatile CONST(float32, UBTR_VAR_INIT) KxUBTR_T_RedmAirTempAmbFanSpdAdj[5]
    =
{
    10.0F, 15.0F, 20.0F, 30.0F, 40.0F
} ;                                    /* Referenced by: '<S248>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_6

static volatile CONST(float32, UBTR_VAR_INIT) KxUBTR_T_RedmAirTempAmbLTRAdj[5] =
{
    10.0F, 15.0F, 20.0F, 30.0F, 40.0F
} ;                                    /* Referenced by: '<S249>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KxUBTR_T_RedmAirTempFanAdj[4] =
{
    20.0F, 40.0F, 60.0F, 75.0F
} ;                                    /* Referenced by: '<S267>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KxUBTR_T_RedmAirTempNominal[4] =
{
    20.0F, 40.0F, 60.0F, 75.0F
} ;                                    /* Referenced by: '<S268>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KxUBTR_T_RedmAirTempThermalCoeff[4]
    =
{
    20.0F, 40.0F, 60.0F, 75.0F
} ;                                    /* Referenced by: '<S269>/Vector' */

#endif

#if (Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5) || (Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_6)

static volatile CONST(float32, UBTR_VAR_INIT) KxUBTR_T_RedmAitTmpAadFactor[5] =
{
    10.0F, 15.0F, 20.0F, 30.0F, 40.0F
} ;                                    /* Referenced by:
                                        * '<S250>/Vector'
                                        * '<S271>/Vector'
                                        */

#endif

#if (Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5) || (Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_6)

static volatile CONST(float32, UBTR_VAR_INIT) KxUBTR_T_RedmAitTmpAgsFactor[5] =
{
    10.0F, 15.0F, 20.0F, 30.0F, 40.0F
} ;                                    /* Referenced by:
                                        * '<S251>/Vector'
                                        * '<S270>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_6

static volatile CONST(float32, UBTR_VAR_INIT) KxUBTR_T_RedmUhoodAirTempCoef[5] =
{
    10.0F, 20.0F, 40.0F, 60.0F, 80.0F
} ;                                    /* Referenced by: '<S252>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KxUBTR_k_BeltHeatGen_dT[6] =
{
    0.0F, 1500.0F, 3500.0F, 5000.0F, 7500.0F, 10000.0F
} ;                                    /* Referenced by: '<S87>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KxUBTR_k_Belt_CoolDwnFrac[6] =
{
    0.0F, 600.0F, 3000.0F, 7200.0F, 9000.0F, 14400.0F
} ;                                    /* Referenced by: '<S142>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KxUBTR_k_ConvectnCoeff_Cond[6] =
{
    0.0F, 0.21F, 0.43F, 0.61F, 0.801F, 1.0F
} ;                                    /* Referenced by:
                                        * '<S120>/Vector'
                                        * '<S126>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KxUBTR_k_ConvectnCoeff_Engine[6] =
{
    0.0F, 0.1F, 0.3F, 0.6F, 0.8F, 1.0F
} ;                                    /* Referenced by: '<S108>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KxUBTR_k_ConvectnCoeff_HTR[6] =
{
    0.0F, 0.21F, 0.43F, 0.61F, 0.801F, 1.0F
} ;                                    /* Referenced by: '<S121>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KxUBTR_k_ConvectnCoeff_Hood[6] =
{
    0.0F, 10.0F, 25.0F, 35.0F, 55.0F, 75.0F
} ;                                    /* Referenced by: '<S110>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KxUBTR_k_ConvectnCoeff_LTR[6] =
{
    0.0F, 0.21F, 0.43F, 0.61F, 0.801F, 1.0F
} ;                                    /* Referenced by: '<S122>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KxUBTR_k_ConvectnCoeff_Radiatr[6] =
{
    0.0F, 0.21F, 0.43F, 0.61F, 0.801F, 1.0F
} ;                                    /* Referenced by: '<S127>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KxUBTR_k_Fandc_rpm[6] =
{
    0.0F, 20.0F, 40.0F, 60.0F, 80.0F, 100.0F
} ;                                    /* Referenced by: '<S56>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KxUBTR_k_GenUHoodAirTempCoef[5] =
{
    10.0F, 20.0F, 40.0F, 60.0F, 80.0F
} ;                                    /* Referenced by: '<S237>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KxUBTR_k_HeatTrnfrCoeff_UnderHood
    [6] =
{
    0.0F, 0.2F, 0.39F, 0.61F, 0.801F, 1.0F
} ;                                    /* Referenced by: '<S101>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KxUBTR_k_MotorOn[7] =
{
    -5000.0F, -3500.0F, -1500.0F, 0.0F, 1500.0F, 3500.0F, 5000.0F
} ;                                    /* Referenced by: '<S134>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KxUBTR_k_Radairflw_cfm[4] =
{
    0.0F, 900.0F, 1700.0F, 2580.0F
} ;                                    /* Referenced by: '<S57>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KxUBTR_k_RadiatorConvFactor[6] =
{
    0.0F, 7.0F, 15.0F, 35.0F, 55.0F, 85.0F
} ;                                    /* Referenced by: '<S16>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KxUBTR_k_Underhood_CoolDwnFrac[6] =
{
    0.0F, 600.0F, 3000.0F, 7200.0F, 9000.0F, 14400.0F
} ;                                    /* Referenced by: '<S143>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KyUBTR_K_GenAirTempAADFactor[2] =
{
    200.0F, 2000.0F
} ;                                    /* Referenced by: '<S229>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KyUBTR_K_GenAirTempAgsFac[2] =
{
    0.0F, 200.0F
} ;                                    /* Referenced by: '<S230>/Vector' */

#endif

#if (Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5) || (Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_6)

static volatile CONST(float32, UBTR_VAR_INIT) KyUBTR_T_FedmAirTempAadFac[2] =
{
    200.0F, 2000.0F
} ;                                    /* Referenced by:
                                        * '<S158>/Vector'
                                        * '<S189>/Vector'
                                        */

#endif

#if (Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5) || (Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_6)

static volatile CONST(float32, UBTR_VAR_INIT) KyUBTR_T_FedmAirTempAgsFac[2] =
{
    200.0F, 2000.0F
} ;                                    /* Referenced by:
                                        * '<S159>/Vector'
                                        * '<S190>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_6

static volatile CONST(float32, UBTR_VAR_INIT) KyUBTR_T_FedmAirTempAmbFanSpdAdj[2]
    =
{
    200.0F, 2000.0F
} ;                                    /* Referenced by: '<S160>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_6

static volatile CONST(float32, UBTR_VAR_INIT) KyUBTR_T_FedmAirTempAmbLTRAdj[5] =
{
    70.0F, 90.0F, 100.0F, 110.0F, 120.0F
} ;                                    /* Referenced by: '<S161>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KyUBTR_T_FedmAirTempNominal[3] =
{
    88.0F, 90.0F, 100.0F
} ;                                    /* Referenced by: '<S192>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT)
    KyUBTR_T_FedmAirTmpFanSpdAdjHighLoad[5] =
{
    7.0F, 20.0F, 40.0F, 60.0F, 80.0F
} ;                                    /* Referenced by: '<S194>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT)
    KyUBTR_T_FedmAirTmpFanSpdAdjLowLoad[5] =
{
    7.0F, 20.0F, 40.0F, 60.0F, 80.0F
} ;                                    /* Referenced by: '<S195>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT)
    KyUBTR_T_FedmAirTmpFanSpdAdjMidLoad[5] =
{
    7.0F, 20.0F, 40.0F, 60.0F, 80.0F
} ;                                    /* Referenced by: '<S196>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT)
    KyUBTR_T_GenAirFanSpeedAdjHighLoad[5] =
{
    7.0F, 20.0F, 40.0F, 60.0F, 80.0F
} ;                                    /* Referenced by: '<S233>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KyUBTR_T_GenAirFanSpeedAdjLowLoad
    [5] =
{
    7.0F, 20.0F, 40.0F, 60.0F, 80.0F
} ;                                    /* Referenced by: '<S234>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KyUBTR_T_GenAirFanSpeedMidLoad[5] =
{
    7.0F, 20.0F, 40.0F, 60.0F, 80.0F
} ;                                    /* Referenced by: '<S235>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KyUBTR_T_GenAirNorminal[3] =
{
    88.0F, 90.0F, 100.0F
} ;                                    /* Referenced by: '<S236>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KyUBTR_T_RedmAirTempAmbAdj[3] =
{
    19.0F, 36.0F, 100.0F
} ;                                    /* Referenced by: '<S266>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_6

static volatile CONST(float32, UBTR_VAR_INIT) KyUBTR_T_RedmAirTempAmbFanSpdAdj[2]
    =
{
    200.0F, 2000.0F
} ;                                    /* Referenced by: '<S248>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_6

static volatile CONST(float32, UBTR_VAR_INIT) KyUBTR_T_RedmAirTempAmbLTRAdj[5] =
{
    70.0F, 90.0F, 100.0F, 110.0F, 120.0F
} ;                                    /* Referenced by: '<S249>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KyUBTR_T_RedmAirTempNominal[4] =
{
    89.0F, 94.0F, 105.0F, 119.0F
} ;                                    /* Referenced by: '<S268>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static volatile CONST(float32, UBTR_VAR_INIT) KyUBTR_T_RedmAirTempThermalCoeff[3]
    =
{
    19.0F, 36.0F, 100.0F
} ;                                    /* Referenced by: '<S269>/Vector' */

#endif

#if (Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5) || (Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_6)

static volatile CONST(float32, UBTR_VAR_INIT) KyUBTR_T_RedmAitTmpAadFactor[2] =
{
    200.0F, 2000.0F
} ;                                    /* Referenced by:
                                        * '<S250>/Vector'
                                        * '<S271>/Vector'
                                        */

#endif

#if (Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5) || (Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_6)

static volatile CONST(float32, UBTR_VAR_INIT) KyUBTR_T_RedmAitTmpAgsFactor[2] =
{
    0.0F, 200.0F
} ;                                    /* Referenced by:
                                        * '<S251>/Vector'
                                        * '<S270>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KyUBTR_k_BeltHeatGen_dT[6] =
{
    -30.0F, -15.0F, 0.0F, 15.0F, 30.0F, 55.0F
} ;                                    /* Referenced by: '<S87>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KyUBTR_k_ConvectnCoeff_Cond[6] =
{
    0.0F, 5.5F, 10.5F, 20.0F, 24.0F, 29.0F
} ;                                    /* Referenced by:
                                        * '<S120>/Vector'
                                        * '<S126>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KyUBTR_k_ConvectnCoeff_Engine[6] =
{
    0.0F, 5.0F, 15.0F, 35.0F, 55.0F, 75.0F
} ;                                    /* Referenced by: '<S108>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KyUBTR_k_ConvectnCoeff_HTR[6] =
{
    15.0F, 30.0F, 50.0F, 75.0F, 95.0F, 100.0F
} ;                                    /* Referenced by: '<S121>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KyUBTR_k_ConvectnCoeff_Hood[6] =
{
    0.0F, 5.0F, 15.0F, 35.0F, 55.0F, 75.0F
} ;                                    /* Referenced by: '<S110>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KyUBTR_k_ConvectnCoeff_LTR[6] =
{
    15.0F, 30.0F, 50.0F, 75.0F, 95.0F, 100.0F
} ;                                    /* Referenced by: '<S122>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KyUBTR_k_ConvectnCoeff_Radiatr[6] =
{
    15.0F, 30.0F, 50.0F, 75.0F, 95.0F, 100.0F
} ;                                    /* Referenced by: '<S127>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KyUBTR_k_HeatTrnfrCoeff_UnderHood
    [6] =
{
    0.0F, 5.0F, 15.0F, 35.0F, 55.0F, 75.0F
} ;                                    /* Referenced by: '<S101>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KyUBTR_k_MotorOn[6] =
{
    -20.0F, -10.0F, 0.0F, 5.0F, 15.0F, 35.0F
} ;                                    /* Referenced by: '<S134>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KyUBTR_k_Radairflw_cfm[6] =
{
    0.0F, 25.0F, 39.0F, 50.0F, 75.0F, 100.0F
} ;                                    /* Referenced by: '<S57>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static volatile CONST(float32, UBTR_VAR_INIT) KyUBTR_k_RadiatorConvFactor[6] =
{
    0.0F, 10.0F, 30.0F, 55.0F, 75.0F, 95.0F
} ;                                    /* Referenced by: '<S16>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_UBTR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_UBTR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_M_EngineTorque;/* '<S6>/Switch12' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_M_MtrA_TorqAchieved;/* '<S6>/Switch11' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_Pct_AGS_CurrPos;/* '<S6>/Switch5' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_Pct_AadPos;/* '<S6>/Switch6' */

#endif

#if !(!Rte_SysCon_Variant_UBTR_1) && Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_Q_CombRad_HeatRejectn;/* '<S115>/Product15' */

#endif

#if !(!Rte_SysCon_Variant_UBTR_1) && Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_Q_Cond_HeatRejectn_1;/* '<S114>/Product1' */

#endif

#if !(!Rte_SysCon_Variant_UBTR_1) && Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_Q_Cond_HeatRejectn_2;/* '<S115>/Product1' */

#endif

#if !(!Rte_SysCon_Variant_UBTR_1) && Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_Q_Engine_HeatRejectn;/* '<S96>/Switch2' */

#endif

#if !(!Rte_SysCon_Variant_UBTR_1) && Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_Q_HTR_HeatRejectn;/* '<S114>/Product17' */

#endif

#if !(!Rte_SysCon_Variant_UBTR_1) && Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_Q_Hood_HeatRejectn;/* '<S97>/Product18' */

#endif

#if !(!Rte_SysCon_Variant_UBTR_1) && Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_Q_LTR_HeatRejectn;/* '<S114>/Product16' */

#endif

#if !(!Rte_SysCon_Variant_UBTR_1) && Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_Q_NetHeatRejectn_Undrhood;/* '<S67>/Subtract12' */

#endif

#if !(!Rte_SysCon_Variant_UBTR_1) && Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_Q_Rad_HeatRejectn_App1;/* '<S114>/Subtract10' */

#endif

#if !(!Rte_SysCon_Variant_UBTR_1) && Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_Q_Rad_HeatRejectn_App2;/* '<S115>/Subtract3' */

#endif

#if !(!Rte_SysCon_Variant_UBTR_1) && Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_Q_Rad_HeatRejectn_Net;/* '<S111>/Switch1' */

#endif

#if !(!Rte_SysCon_Variant_UBTR_1) && Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_BeltInternalTempGain;/* '<S89>/Switch1' */

#endif

#if !(!Rte_SysCon_Variant_UBTR_1) && Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_BeltInternalTempGain_B4LPF;/* '<S85>/Switch1' */

#endif

#if !(!Rte_SysCon_Variant_UBTR_1) && Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_BeltTempArbitratd;/* '<S76>/Switch1' */

#endif

#if !(!Rte_SysCon_Variant_UBTR_1) && Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_BeltTemp_Cont;/* '<S66>/Add2' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_BeltTemp_FEAD_B4D;/* '<S14>/Switch1' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_BeltTemp_FEAD_Saved;/* '<S313>/DataStoreRead' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_BeltTemp_Init;/* '<S12>/Merge' */

#endif

#if !(!Rte_SysCon_Variant_UBTR_1) && Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_CombRadTemp;/* '<S115>/Subtract1' */

#endif

#if !(!Rte_SysCon_Variant_UBTR_1) && Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_ECT_RadiatrTemp;/* '<S128>/Switch1' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_EngCoolantTemp;/* '<S6>/Switch3' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_EngineOilTemp;/* '<S6>/Switch13' */

#endif

#if !(!Rte_SysCon_Variant_UBTR_1) && Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_EstBeltTempCont_B4LPF;/* '<S74>/Switch' */

#endif

#if !(!Rte_SysCon_Variant_UBTR_1) && Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_EstBeltTempCont_B4Lim;/* '<S66>/Merge' */

#endif

#if !(!Rte_SysCon_Variant_UBTR_1) && Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_EstBeltTempFEAD;/* '<S91>/Switch1' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_EstBeltTemp_FEAD_MBD_B4D;/* '<S8>/Merge' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_EstBeltTemp_UnderHood_MBD_B4D;/* '<S8>/Merge1' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_EstUnderHoodTemp_Saved;/* '<S313>/DataStoreRead3' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_FedmExhSurf;/* '<S6>/Switch7' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_FedmUHoodAirTempBd;/* '<S146>/UnitDelay' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_6

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_FedmUHoodAirTempCoefRun_BEV;/* '<S162>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_FedmUHoodAirTempCoefRun_new;/* '<S197>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_FedmUHoodAirTempFan_new;/* '<S203>/Switch' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_FedmUHoodAirTempFnStop_new;/* '<S202>/Switch' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_FedmUHoodAirTempRun_new;/* '<S201>/Switch' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_6

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_FedmUHoodAirTempSSRun_BEV;/* '<S145>/Product' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_FedmUHoodAirTempSSRun_new;/* '<S146>/Product' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_FedmUHoodAirTempVhStop_new;/* '<S200>/Switch' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_FedmUhoodFanImpact;/* '<S146>/Product3' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_6

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_FedmUnderhoodAirTempAAD_BEV;/* '<S158>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_FedmUnderhoodAirTempAAD_new;/* '<S189>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_6

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_FedmUnderhoodAirTempAGS_BEV;/* '<S159>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_FedmUnderhoodAirTempAGS_new;/* '<S190>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_GenExhSurf;/* '<S6>/Switch10' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_GenUHoodAirTempBd;/* '<S147>/UnitDelay' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_GenUHoodAirTempFnStop_new;/* '<S242>/Switch' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_GenUHoodAirTempRunCoef_new;/* '<S237>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_GenUHoodAirTempRun_new;/* '<S241>/Switch' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_GenUHoodAirTempSSRun_new;/* '<S147>/Product' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_GenUHoodAirTempVhStop_new;/* '<S240>/Switch' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_GenUhoodFanImpact;/* '<S147>/Product3' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_GenUnderhoodAirTempAAD_new;/* '<S229>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_GenUnderhoodAirTempAGS_new;/* '<S230>/Vector' */

#endif

#if !(!Rte_SysCon_Variant_UBTR_1) && Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_HTR_FinGapTemp;/* '<S114>/Subtract5' */

#endif

#if !(!Rte_SysCon_Variant_UBTR_1) && Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_LTR_FinGapTemp;/* '<S114>/Subtract3' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_MtrAAirTempBd;
                                 /* '<S5>/SigConvForSigProp_VariantSource1_0' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_MtrA_Temp;/* '<S6>/Switch4' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_MtrBAirTempBd;
                                 /* '<S5>/SigConvForSigProp_VariantSource3_0' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_MtrCAirTempBd;
                                 /* '<S5>/SigConvForSigProp_VariantSource2_0' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_RedmUHoodAirTempBd;/* '<S153>/Product' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_RedmUhoodEngineImpact;/* '<S273>/Switch' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_RedmUhoodFanImpact;/* '<S272>/Switch' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_RedmUnderhoodAirTempAAD;/* '<S271>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_6

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_RedmUnderhoodAirTempAAD_new;/* '<S250>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_RedmUnderhoodAirTempAGS_New1;/* '<S270>/Vector' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_6

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_RedmUnderhoodAirTempAGS_new;/* '<S251>/Vector' */

#endif

#if !Rte_SysCon_Variant_UBTR_1 && Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_Ta1;/* '<S21>/UHood_MB' */

#endif

#if !Rte_SysCon_Variant_UBTR_1 && Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_Ta2;/* '<S21>/UHood_MB' */

#endif

#if !Rte_SysCon_Variant_UBTR_1 && Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_Thood;/* '<S21>/UHood_MB' */

#endif

#if !(!Rte_SysCon_Variant_UBTR_1) && Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_UnderHoodTemp_B4D;/* '<S93>/Switch1' */

#endif

#if !(!Rte_SysCon_Variant_UBTR_1) && Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_UnderHoodTemp_B4LPF;/* '<S102>/Switch' */

#endif

#if !(!Rte_SysCon_Variant_UBTR_1) && Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_UnderHoodTemp_B4Lim;/* '<S67>/Subtract13' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_UnderHoodTemp_Init;/* '<S12>/Merge1' */

#endif

#if !(!Rte_SysCon_Variant_UBTR_1) && Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_T_UnderHoodTemp_Prev;/* '<S106>/Switch1' */

#endif

#if !(!Rte_SysCon_Variant_UBTR_1) && Rte_SysCon_Variant_UBTR_3

static VAR(boolean, UBTR_VAR_INIT) VeUBTR_b_BeltEngaged;/* '<S71>/LogicalOperator1' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static VAR(boolean, UBTR_VAR_INIT) VeUBTR_b_Eng_On;/* '<S9>/RelationalOperator' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static VAR(boolean, UBTR_VAR_INIT) VeUBTR_b_InitBeltTemp;/* '<S12>/Comparison2' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static VAR(boolean, UBTR_VAR_INIT) VeUBTR_b_InitUndrHoodTemp;/* '<S12>/Comparison1' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static VAR(boolean, UBTR_VAR_INIT) VeUBTR_b_InitlzBeltTempMdl;/* '<S133>/GreaterThan1' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static VAR(boolean, UBTR_VAR_INIT) VeUBTR_b_MotorA_On;/* '<S11>/RelationalOperator' */

#endif

#if !(!Rte_SysCon_Variant_UBTR_1) && Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_dT_UnderHoodTemp;/* '<S103>/Switch1' */

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

static VAR(float32, UBTR_VAR_INIT) VeUBTR_dm_ExhaustMassFlow;/* '<S153>/Product3' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_k_CoeffAirflow;/* '<S16>/Vector' */

#endif

#if !(!Rte_SysCon_Variant_UBTR_1) && Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_k_ECT_TempFactr4BeltTemp;/* '<S78>/Switch1' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_k_MotorA_On;/* '<S134>/Vector' */

#endif

#if !(!Rte_SysCon_Variant_UBTR_1) && Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_k_MtrA_TempFactr4BeltTemp;/* '<S79>/Switch1' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_m_Air_Intake;/* '<S6>/Switch14' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_n_EngineSpeed;/* '<S6>/Switch2' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_n_LT_PsvPmpCmd;/* '<S6>/Switch1' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_n_MtrA_Spd;/* '<S6>/Switch9' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static VAR(uint32, UBTR_VAR_INIT) VeUBTR_t_RTC_CurrentTime;/* '<S6>/Switch' */

#endif

#if Rte_SysCon_Variant_UBTR_3

static VAR(float32, UBTR_VAR_INIT) VeUBTR_v_VehSpd;/* '<S6>/Switch8' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_UBTR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_UBTR
#include "MemMap.h"

CONST(ConstP_UBTR_ac_T, UBTR_VAR_INIT) UBTR_ac_ConstP =
{

#if Rte_SysCon_Variant_UBTR_3

    /* Computed Parameter: Vector_maxIndex
     * Referenced by: '<S57>/Vector'
     */
    {
        3U, 5U
    },

#endif

#if Rte_SysCon_Variant_UBTR_3

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S16>/Vector'
     *   '<S101>/Vector'
     *   '<S87>/Vector'
     *   '<S108>/Vector'
     *   '<S110>/Vector'
     *   '<S120>/Vector'
     *   '<S121>/Vector'
     *   '<S122>/Vector'
     *   '<S126>/Vector'
     *   '<S127>/Vector'
     */
    {
        5U, 5U
    },

#endif

#if Rte_SysCon_Variant_UBTR_3

    /* Computed Parameter: Vector_maxIndex_p
     * Referenced by: '<S134>/Vector'
     */
    {
        6U, 5U
    },

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S194>/Vector'
     *   '<S195>/Vector'
     *   '<S196>/Vector'
     *   '<S233>/Vector'
     *   '<S234>/Vector'
     *   '<S235>/Vector'
     */
    {
        3U, 4U
    },

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_6

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S161>/Vector'
     *   '<S249>/Vector'
     */
    {
        4U, 4U
    },

#endif

#if (Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5) || (Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_6)

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S158>/Vector'
     *   '<S159>/Vector'
     *   '<S160>/Vector'
     *   '<S189>/Vector'
     *   '<S190>/Vector'
     *   '<S229>/Vector'
     *   '<S230>/Vector'
     *   '<S248>/Vector'
     *   '<S250>/Vector'
     *   '<S251>/Vector'
     *   '<S270>/Vector'
     *   '<S271>/Vector'
     */
    {
        4U, 1U
    },

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S192>/Vector'
     *   '<S236>/Vector'
     */
    {
        2U, 2U
    },

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S266>/Vector'
     *   '<S269>/Vector'
     */
    {
        3U, 2U
    },

#endif

#if Rte_SysCon_Variant_UBTR_3 && Rte_SysCon_Variant_UBTR_5

    /* Computed Parameter: Vector_maxIndex_e
     * Referenced by: '<S268>/Vector'
     */
    {
        3U, 3U
    },

#endif

#ifndef CONSTP_UBTR_AC_T_VARIANT_EXISTS

    0
#endif
};

#define STOP_SEC_CONST_UNSPECIFIED_UBTR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_UBTR
#include "MemMap.h"

VAR(B_UBTR_ac_T, UBTR_VAR_INIT) UBTR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_UBTR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_UBTR
#include "MemMap.h"

VAR(DW_UBTR_ac_T, UBTR_VAR_INIT) UBTR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_UBTR
#include "MemMap.h"
#if Rte_SysCon_Variant_UBTR_3

static FUNC(void, UBTR_CODE_LOCAL) UBTR_ac_BeltTemp_InitSaved1(VAR(float32,
    AUTOMATIC) rtu_AmbientTemp, P2VAR(float32, AUTOMATIC, UBTR_VAR_INIT)
    rty_BeltTemp_Saved);

#endif

#if Rte_SysCon_Variant_UBTR_3

static FUNC(void, UBTR_CODE_LOCAL) UBTR_ac_BeltTemp_InitAAT(VAR(float32,
    AUTOMATIC) rtu_LTCL_Temp, P2VAR(float32, AUTOMATIC, UBTR_VAR_INIT)
    rty_LTCL_Temp_out);

#endif

/*
 * Output and update for action system:
 *    '<S66>/BeltTemp_InitSaved1'
 *    '<S66>/BeltTemp_InitSaved2'
 */
#if Rte_SysCon_Variant_UBTR_3

static FUNC(void, UBTR_CODE_LOCAL) UBTR_ac_BeltTemp_InitSaved1(VAR(float32,
    AUTOMATIC) rtu_AmbientTemp, P2VAR(float32, AUTOMATIC, UBTR_VAR_INIT)
    rty_BeltTemp_Saved)
{
    /* Inport: '<S69>/AmbientTemp' */
    *rty_BeltTemp_Saved = rtu_AmbientTemp;
}

#endif

/*
 * Output and update for action system:
 *    '<S12>/BeltTemp_InitAAT'
 *    '<S12>/UndrHoodTemp_InitAAT'
 */
#if Rte_SysCon_Variant_UBTR_3

static FUNC(void, UBTR_CODE_LOCAL) UBTR_ac_BeltTemp_InitAAT(VAR(float32,
    AUTOMATIC) rtu_LTCL_Temp, P2VAR(float32, AUTOMATIC, UBTR_VAR_INIT)
    rty_LTCL_Temp_out)
{
    /* Inport: '<S135>/LTCL_Temp' */
    *rty_LTCL_Temp_out = rtu_LTCL_Temp;
}

#endif

/* Model step function for TID1 */
#if Rte_SysCon_Variant_UBTR_3

FUNC(void, UBTR_CODE) UBTR_MedTEH(void) /* Explicit Task: MedTEH */
{
    /* local block i/o variables */
#if Rte_SysCon_Variant_UBTR_3

    float32 rtb_TmpSignalConversionAtVeAATR_T_EstAmb;

#endif

#if !Rte_SysCon_Variant_UBTR_1 && Rte_SysCon_Variant_UBTR_3

    float32 m_underbody;

#endif

#if !Rte_SysCon_Variant_UBTR_1 && Rte_SysCon_Variant_UBTR_3

    float32 Q_b;

#endif

#if Rte_SysCon_Variant_UBTR_3

    uint32 rtb_TmpSignalConversionAtRealTime_Saved_;

#endif

#if Rte_SysCon_Variant_UBTR_3

    float32 rtb_TmpSignalConversionAtBeltTempSaved_R;

#endif

#if Rte_SysCon_Variant_UBTR_3

    float32 rtb_TmpSignalConversionAtUnderhoodTempSa;

#endif

#if Rte_SysCon_Variant_UBTR_3

    float32 rtb_TmpSignalConversionAtVeTAIR_Pct_RadF;

#endif

#if Rte_SysCon_Variant_UBTR_3

    boolean rtb_OR1;

#endif

#if Rte_SysCon_Variant_UBTR_3

    float32 rtb_TmpSignalConversionAtVeTMIR_T_OnBrdC;

#endif

#if !Rte_SysCon_Variant_UBTR_1 && Rte_SysCon_Variant_UBTR_3

    boolean rtb_AND_ps;

#endif

#if Rte_SysCon_Variant_UBTR_3

    float32 rtb_TmpSignalConversionAtVeTAIR_P_AC_Com;

#endif

#if !Rte_SysCon_Variant_UBTR_1 && Rte_SysCon_Variant_UBTR_3

    float32 rtb_Product_el;

#endif

#if !Rte_SysCon_Variant_UBTR_1 && Rte_SysCon_Variant_UBTR_3

    boolean rtb_AND_es;

#endif

#if (!(!Rte_SysCon_Variant_UBTR_1) && Rte_SysCon_Variant_UBTR_3) || (!Rte_SysCon_Variant_UBTR_1 && Rte_SysCon_Variant_UBTR_3)

    boolean rtb_OR1_c2;

#endif

#if !Rte_SysCon_Variant_UBTR_1 && Rte_SysCon_Variant_UBTR_3

    boolean rtb_AND_e;

#endif

#if !Rte_SysCon_Variant_UBTR_1 && Rte_SysCon_Variant_UBTR_3

    boolean rtb_AND_g;

#endif

#if Rte_SysCon_Variant_UBTR_3

    float32 rtb_TmpSignalConversionAtVeTAIR_p_HghRfr;

#endif

#if Rte_SysCon_Variant_UBTR_3

    uint32 VeUBTR_b_InitBeltTemp_tmp;

#endif

#if Rte_SysCon_Variant_UBTR_3

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
    /* Inport: '<Root>/VeAADR_Pct_AAD_CurrPos' */
    (void)Rte_Read_VeAADR_Pct_AAD_CurrPos_Value((&(VeUBTR_Pct_AadPos)));

    /* Inport: '<Root>/VeENGR_m_CylAirIntake' */
    (void)Rte_Read_VeENGR_m_CylAirIntake_Value((&(VeUBTR_m_Air_Intake)));

    /* Inport: '<Root>/VeENGR_T_EngineOilTemp' */
    (void)Rte_Read_VeENGR_T_EngineOilTemp_Value((&(VeUBTR_T_EngineOilTemp)));

    /* Inport: '<Root>/VeTITR_M_InputTorqAct' */
    (void)Rte_Read_VeTITR_M_InputTorqAct_Value((&(VeUBTR_M_EngineTorque)));

    /* Inport: '<Root>/VeCTMR_T_MtrAExhSurfaceTemp' */
    (void)Rte_Read_VeCTMR_T_MtrAExhSurfaceTemp_Value((&(VeUBTR_T_GenExhSurf)));

    /* Inport: '<Root>/VeCTMR_T_MtrCExhSurfaceTemp' */
    (void)Rte_Read_VeCTMR_T_MtrCExhSurfaceTemp_Value((&(VeUBTR_T_FedmExhSurf)));

    /* Inport: '<Root>/VeTAIR_Pct_AGS_CurrPos' */
    (void)Rte_Read_VeTAIR_Pct_AGS_CurrPos_Value((&(VeUBTR_Pct_AGS_CurrPos)));

    /* Inport: '<Root>/VePMPR_n_LT_PsvPmpCmd' */
    (void)Rte_Read_VePMPR_n_LT_PsvPmpCmd_Value((&(VeUBTR_n_LT_PsvPmpCmd)));

    /* Inport: '<Root>/VeCSVR_v_VehSpd' */
    (void)Rte_Read_VeCSVR_v_VehSpd_Value((&(VeUBTR_v_VehSpd)));

    /* Inport: '<Root>/VeMSPR_n_MtrA_Spd' */
    (void)Rte_Read_VeMSPR_n_MtrA_Spd_Value((&(VeUBTR_n_MtrA_Spd)));

    /* Inport: '<Root>/VeESPR_n_EngineSpeed' */
    (void)Rte_Read_VeESPR_n_EngineSpeed_Value((&(VeUBTR_n_EngineSpeed)));

    /* Inport: '<Root>/VeMTIR_M_MtrA_TorqAchieved' */
    (void)Rte_Read_VeMTIR_M_MtrA_TorqAchieved_Value
        ((&(VeUBTR_M_MtrA_TorqAchieved)));

    /* Inport: '<Root>/VeINVR_T_MtrA_Temp' */
    (void)Rte_Read_VeINVR_T_MtrA_Temp_Value((&(VeUBTR_T_MtrA_Temp)));

    /* Inport: '<Root>/VeENGR_T_EngCoolantTemp' */
    (void)Rte_Read_VeENGR_T_EngCoolantTemp_Value((&(VeUBTR_T_EngCoolantTemp)));

    /* Inport: '<Root>/VePLTR_t_RTC_CurrentTime' */
    (void)Rte_Read_VePLTR_t_RTC_CurrentTime_Value((&(VeUBTR_t_RTC_CurrentTime)));

    /* Outputs for Function Call SubSystem: '<Root>/UBTR_MedTEH' */
    /* SignalConversion generated from: '<S1>/VeAATR_T_EstAmbAirTemp' incorporates:
     *  Inport: '<Root>/VeAATR_T_EstAmbAirTemp'
     */
    (void)Rte_Read_VeAATR_T_EstAmbAirTemp_Value
        (&rtb_TmpSignalConversionAtVeAATR_T_EstAmb);

    /* SignalConversion generated from: '<S1>/VeTMIR_T_OnBrdChrg_ClntTmpIn' incorporates:
     *  Inport: '<Root>/VeTMIR_T_OnBrdChrg_ClntTmpIn'
     */
    (void)Rte_Read_VeTMIR_T_OnBrdChrg_ClntTmpIn_Value
        (&rtb_TmpSignalConversionAtVeTMIR_T_OnBrdC);

    /* SignalConversion generated from: '<S1>/VeTAIR_Pct_RadFanSts' incorporates:
     *  Inport: '<Root>/VeTAIR_Pct_RadFanSts'
     */
    (void)Rte_Read_VeTAIR_Pct_RadFanSts_Value
        (&rtb_TmpSignalConversionAtVeTAIR_Pct_RadF);

    /* SignalConversion generated from: '<S1>/RealTime_Saved_Read' incorporates:
     *  SignalConversion generated from: '<S3>/RealTime_Saved_write'
     */
    rtb_TmpSignalConversionAtRealTime_Saved_ =
        Rte_IrvRead_UBTR_MedTEH_RealTime_Saved_write_IRV();

    /* SignalConversion generated from: '<S1>/BeltTempSaved_Read' incorporates:
     *  SignalConversion generated from: '<S3>/BeltTempSaved_write'
     */
    rtb_TmpSignalConversionAtBeltTempSaved_R =
        Rte_IrvRead_UBTR_MedTEH_BeltTempSaved_write_IRV();

    /* SignalConversion generated from: '<S1>/UnderhoodTempSaved_Read' incorporates:
     *  SignalConversion generated from: '<S3>/UnderhoodTempSaved_write'
     */
    rtb_TmpSignalConversionAtUnderhoodTempSa =
        Rte_IrvRead_UBTR_MedTEH_UnderhoodTempSaved_write_IRV();

    /* SignalConversion generated from: '<S1>/VeTAIR_p_HghRfrgtPres' incorporates:
     *  Inport: '<Root>/VeTAIR_p_HghRfrgtPres'
     */
    (void)Rte_Read_VeTAIR_p_HghRfrgtPres_Value
        (&rtb_TmpSignalConversionAtVeTAIR_p_HghRfr);

    /* SignalConversion generated from: '<S1>/VeTAIR_P_AC_CompElecPwr' incorporates:
     *  Inport: '<Root>/VeTAIR_P_AC_CompElecPwr'
     */
    (void)Rte_Read_VeTAIR_P_AC_CompElecPwr_Value
        (&rtb_TmpSignalConversionAtVeTAIR_P_AC_Com);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/UBTI_Signals'
     */
    /* Switch: '<S6>/Switch' incorporates:
     *  Constant: '<S297>/Calib'
     */
    if (KeUBTR_b_RTC_CurrentTime_SD)
    {
        /* Switch: '<S6>/Switch' incorporates:
         *  Constant: '<S302>/Calib'
         *  Inport: '<Root>/VePLTR_t_RTC_CurrentTime'
         */
        VeUBTR_t_RTC_CurrentTime = KeUBTR_t_RTC_CurrentTime_D;
    }

    /* End of Switch: '<S6>/Switch' */

    /* Switch: '<S6>/Switch3' incorporates:
     *  Constant: '<S287>/Calib'
     */
    if (KeUBTR_b_EngCoolantTemp_SD)
    {
        /* Switch: '<S6>/Switch3' incorporates:
         *  Constant: '<S278>/Calib'
         *  Inport: '<Root>/VeENGR_T_EngCoolantTemp'
         */
        VeUBTR_T_EngCoolantTemp = KeUBTR_T_EngCoolantTemp_D;
    }

    /* End of Switch: '<S6>/Switch3' */

    /* Switch: '<S6>/Switch4' incorporates:
     *  Constant: '<S295>/Calib'
     */
    if (KeUBTR_b_MtrA_Temp_SD)
    {
        /* Switch: '<S6>/Switch4' incorporates:
         *  Constant: '<S283>/Calib'
         *  Inport: '<Root>/VeINVR_T_MtrA_Temp'
         */
        VeUBTR_T_MtrA_Temp = KeUBTR_T_MtrA_Temp_D;
    }

    /* End of Switch: '<S6>/Switch4' */

    /* Switch: '<S6>/Switch11' incorporates:
     *  Constant: '<S296>/Calib'
     */
    if (KeUBTR_b_MtrA_TorqAchieved_SD)
    {
        /* Switch: '<S6>/Switch11' incorporates:
         *  Constant: '<S274>/Calib'
         *  Inport: '<Root>/VeMTIR_M_MtrA_TorqAchieved'
         */
        VeUBTR_M_MtrA_TorqAchieved = KeUBTR_M_MtrA_TorqAchieved_D;
    }

    /* End of Switch: '<S6>/Switch11' */

    /* Switch: '<S6>/Switch2' incorporates:
     *  Constant: '<S289>/Calib'
     */
    if (KeUBTR_b_EngineSpeed_SD)
    {
        /* Switch: '<S6>/Switch2' incorporates:
         *  Constant: '<S299>/Calib'
         *  Inport: '<Root>/VeESPR_n_EngineSpeed'
         */
        VeUBTR_n_EngineSpeed = KeUBTR_n_EngineSpeed_D;
    }

    /* End of Switch: '<S6>/Switch2' */

    /* Switch: '<S6>/Switch9' incorporates:
     *  Constant: '<S294>/Calib'
     */
    if (KeUBTR_b_MtrA_Spd_SD)
    {
        /* Switch: '<S6>/Switch9' incorporates:
         *  Constant: '<S301>/Calib'
         *  Inport: '<Root>/VeMSPR_n_MtrA_Spd'
         */
        VeUBTR_n_MtrA_Spd = KeUBTR_n_MtrA_Spd_D;
    }

    /* End of Switch: '<S6>/Switch9' */

    /* Switch: '<S6>/Switch8' incorporates:
     *  Constant: '<S298>/Calib'
     */
    if (KeUBTR_b_VehSpd_SD)
    {
        /* Switch: '<S6>/Switch8' incorporates:
         *  Constant: '<S303>/Calib'
         *  Inport: '<Root>/VeCSVR_v_VehSpd'
         */
        VeUBTR_v_VehSpd = KeUBTR_v_VehSpd_D;
    }

    /* End of Switch: '<S6>/Switch8' */

    /* Switch: '<S6>/Switch1' incorporates:
     *  Constant: '<S293>/Calib'
     */
    if (KeUBTR_b_LT_PsvPmpCmd_SD)
    {
        /* Switch: '<S6>/Switch1' incorporates:
         *  Constant: '<S300>/Calib'
         *  Inport: '<Root>/VePMPR_n_LT_PsvPmpCmd'
         */
        VeUBTR_n_LT_PsvPmpCmd = KeUBTR_n_LT_PsvPmpCmd_D;
    }

    /* End of Switch: '<S6>/Switch1' */

    /* Switch: '<S6>/Switch5' incorporates:
     *  Constant: '<S284>/Calib'
     */
    if (KeUBTR_b_AGS_CurrPos_SD)
    {
        /* Switch: '<S6>/Switch5' incorporates:
         *  Constant: '<S275>/Calib'
         *  Inport: '<Root>/VeTAIR_Pct_AGS_CurrPos'
         */
        VeUBTR_Pct_AGS_CurrPos = KeUBTR_Pct_AGS_CurrPos_D;
    }

    /* End of Switch: '<S6>/Switch5' */

    /* Switch: '<S6>/Switch6' incorporates:
     *  Constant: '<S285>/Calib'
     */
    if (KeUBTR_b_AadPos_SD)
    {
        /* Switch: '<S6>/Switch6' incorporates:
         *  Constant: '<S276>/Calib'
         *  Inport: '<Root>/VeAADR_Pct_AAD_CurrPos'
         */
        VeUBTR_Pct_AadPos = KeUBTR_Pct_AadPos_D;
    }

    /* End of Switch: '<S6>/Switch6' */

    /* Switch: '<S6>/Switch7' incorporates:
     *  Constant: '<S291>/Calib'
     */
    if (KeUBTR_b_FedmExhSurf_SD)
    {
        /* Switch: '<S6>/Switch7' incorporates:
         *  Constant: '<S281>/Calib'
         *  Inport: '<Root>/VeCTMR_T_MtrCExhSurfaceTemp'
         */
        VeUBTR_T_FedmExhSurf = KeUBTR_T_FedmExhSurf_D;
    }

    /* End of Switch: '<S6>/Switch7' */

    /* Switch: '<S6>/Switch10' incorporates:
     *  Constant: '<S292>/Calib'
     */
    if (KeUBTR_b_GenExhSurf_SD)
    {
        /* Switch: '<S6>/Switch10' incorporates:
         *  Constant: '<S282>/Calib'
         *  Inport: '<Root>/VeCTMR_T_MtrAExhSurfaceTemp'
         */
        VeUBTR_T_GenExhSurf = KeUBTR_T_GenExhSurf_D;
    }

    /* End of Switch: '<S6>/Switch10' */

    /* Switch: '<S6>/Switch12' incorporates:
     *  Constant: '<S290>/Calib'
     */
    if (KeUBTR_b_EngineTorque_SD)
    {
        /* Switch: '<S6>/Switch12' incorporates:
         *  Constant: '<S280>/Calib'
         *  Inport: '<Root>/VeTITR_M_InputTorqAct'
         */
        VeUBTR_M_EngineTorque = KeUBTR_T_EngineTorque_D;
    }

    /* End of Switch: '<S6>/Switch12' */

    /* Switch: '<S6>/Switch13' incorporates:
     *  Constant: '<S288>/Calib'
     */
    if (KeUBTR_b_EngineOilTemp_SD)
    {
        /* Switch: '<S6>/Switch13' incorporates:
         *  Constant: '<S279>/Calib'
         *  Inport: '<Root>/VeENGR_T_EngineOilTemp'
         */
        VeUBTR_T_EngineOilTemp = KeUBTR_T_EngineOilTemp_D;
    }

    /* End of Switch: '<S6>/Switch13' */

    /* Switch: '<S6>/Switch14' incorporates:
     *  Constant: '<S286>/Calib'
     */
    if (KeUBTR_b_AirIntake_SD)
    {
        /* Switch: '<S6>/Switch14' incorporates:
         *  Constant: '<S277>/Calib'
         *  Inport: '<Root>/VeENGR_m_CylAirIntake'
         */
        VeUBTR_m_Air_Intake = KeUBTR_m_AirIntake_D;
    }

    /* End of Switch: '<S6>/Switch14' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Belt_Under_Cont'
     */
    /* DataStoreWrite: '<S13>/DataStoreWrite1' */
    UBTR_ac_DW.NeUBTR_t_RealTime_Prev = VeUBTR_t_RTC_CurrentTime;

    /* Outputs for Atomic SubSystem: '<S10>/EdgeRising1' */
    /* Logic: '<S130>/OR1' incorporates:
     *  UnitDelay: '<S130>/UnitDelay'
     */
    rtb_OR1 = !UBTR_ac_DW.UnitDelay_DSTATE_m0;

    /* Update for UnitDelay: '<S130>/UnitDelay' incorporates:
     *  Constant: '<S10>/TRUEConstant4'
     */
    UBTR_ac_DW.UnitDelay_DSTATE_m0 = true;

    /* Outputs for Atomic SubSystem: '<S10>/TimeSignal_Timer' */
    /* Switch: '<S133>/Switch1' incorporates:
     *  Constant: '<S131>/Calib'
     *  Constant: '<S132>/Calib'
     *  Constant: '<S133>/ConstantValue4'
     *  Logic: '<S130>/AND'
     *  MinMax: '<S133>/Maximum'
     *  Sum: '<S133>/Subtraction'
     *  UnitDelay: '<S133>/UnitDelay'
     */
    if (rtb_OR1)
    {
        UBTR_ac_DW.UnitDelay_DSTATE_cs = KeUBTR_t_InitTime_BeltTemp;
    }
    else
    {
        UBTR_ac_DW.UnitDelay_DSTATE_cs = fmaxf(UBTR_ac_DW.UnitDelay_DSTATE_cs -
            KeUBTR_dt_InitTime_BeltTemp, 0.0F);
    }

    /* End of Switch: '<S133>/Switch1' */
    /* End of Outputs for SubSystem: '<S10>/EdgeRising1' */

    /* RelationalOperator: '<S133>/GreaterThan1' incorporates:
     *  Constant: '<S133>/ConstantValue2'
     *  UnitDelay: '<S133>/UnitDelay'
     */
    VeUBTR_b_InitlzBeltTempMdl = (UBTR_ac_DW.UnitDelay_DSTATE_cs > 0.0F);

    /* End of Outputs for SubSystem: '<S10>/TimeSignal_Timer' */

    /* Outputs for Enabled SubSystem: '<S4>/TempInit' incorporates:
     *  EnablePort: '<S12>/Enable'
     */
    if (VeUBTR_b_InitlzBeltTempMdl)
    {
        /* Sum: '<S12>/Sum2' incorporates:
         *  Sum: '<S12>/Sum1'
         */
        VeUBTR_b_InitBeltTemp_tmp = VeUBTR_t_RTC_CurrentTime -
            rtb_TmpSignalConversionAtRealTime_Saved_;

        /* RelationalOperator: '<S12>/Comparison2' incorporates:
         *  Constant: '<S138>/Calib'
         *  Sum: '<S12>/Sum2'
         */
        VeUBTR_b_InitBeltTemp = (VeUBTR_b_InitBeltTemp_tmp <=
            KeUBTR_t_SleepTime_Belt);

        /* If: '<S12>/If' */
        if (VeUBTR_b_InitBeltTemp)
        {
            /* Outputs for IfAction SubSystem: '<S12>/BeltTemp_InitIntrpolate' incorporates:
             *  ActionPort: '<S136>/ActionPort'
             */
            /* Merge: '<S12>/Merge' incorporates:
             *  DataTypeConversion: '<S136>/FixToFloat'
             *  Lookup_n-D: '<S142>/Vector'
             *  Product: '<S136>/Product1'
             *  Sum: '<S136>/Add'
             *  Sum: '<S136>/Add1'
             *  Sum: '<S136>/Sum3'
             */
            VeUBTR_T_BeltTemp_Init = rtb_TmpSignalConversionAtBeltTempSaved_R -
                ((rtb_TmpSignalConversionAtBeltTempSaved_R -
                  rtb_TmpSignalConversionAtVeAATR_T_EstAmb) *
                 look1_iflf_binlca_16a((float32)((sint32)(((sint32)
                     VeUBTR_t_RTC_CurrentTime) - ((sint32)
                     rtb_TmpSignalConversionAtRealTime_Saved_))), ((const
                    float32 *)&(KxUBTR_k_Belt_CoolDwnFrac[0])), ((const float32 *)
                   &(KtUBTR_k_Belt_CoolDwnFrac[0])), 5U));

            /* End of Outputs for SubSystem: '<S12>/BeltTemp_InitIntrpolate' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S12>/BeltTemp_InitAAT' incorporates:
             *  ActionPort: '<S135>/ActionPort'
             */
            UBTR_ac_BeltTemp_InitAAT(rtb_TmpSignalConversionAtVeAATR_T_EstAmb, (
                &(VeUBTR_T_BeltTemp_Init)));

            /* End of Outputs for SubSystem: '<S12>/BeltTemp_InitAAT' */
        }

        /* End of If: '<S12>/If' */

        /* RelationalOperator: '<S12>/Comparison1' incorporates:
         *  Constant: '<S139>/Calib'
         */
        VeUBTR_b_InitUndrHoodTemp = (VeUBTR_b_InitBeltTemp_tmp <=
            KeUBTR_t_SleepTime_Underhood);

        /* If: '<S12>/If1' */
        if (VeUBTR_b_InitUndrHoodTemp)
        {
            /* Outputs for IfAction SubSystem: '<S12>/UndrHoodTemp_InitIntrpolate' incorporates:
             *  ActionPort: '<S141>/ActionPort'
             */
            /* Merge: '<S12>/Merge1' incorporates:
             *  DataTypeConversion: '<S141>/FixToFloat'
             *  Lookup_n-D: '<S143>/Vector'
             *  Product: '<S141>/Product1'
             *  Sum: '<S141>/Add'
             *  Sum: '<S141>/Add1'
             *  Sum: '<S141>/Sum3'
             */
            VeUBTR_T_UnderHoodTemp_Init =
                rtb_TmpSignalConversionAtUnderhoodTempSa -
                ((rtb_TmpSignalConversionAtUnderhoodTempSa -
                  rtb_TmpSignalConversionAtVeAATR_T_EstAmb) *
                 look1_iflf_binlca_16a((float32)((sint32)(((sint32)
                     VeUBTR_t_RTC_CurrentTime) - ((sint32)
                     rtb_TmpSignalConversionAtRealTime_Saved_))), ((const
                    float32 *)&(KxUBTR_k_Underhood_CoolDwnFrac[0])), ((const
                    float32 *)&(KtUBTR_k_Underhood_CoolDwnFrac[0])), 5U));

            /* End of Outputs for SubSystem: '<S12>/UndrHoodTemp_InitIntrpolate' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S12>/UndrHoodTemp_InitAAT' incorporates:
             *  ActionPort: '<S140>/ActionPort'
             */
            UBTR_ac_BeltTemp_InitAAT(rtb_TmpSignalConversionAtVeAATR_T_EstAmb, (
                &(VeUBTR_T_UnderHoodTemp_Init)));

            /* End of Outputs for SubSystem: '<S12>/UndrHoodTemp_InitAAT' */
        }

        /* End of If: '<S12>/If1' */
    }

    /* End of Outputs for SubSystem: '<S4>/TempInit' */

    /* Lookup_n-D: '<S16>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeTAIR_Pct_RadFanSts'
     *  Switch: '<S6>/Switch8'
     */
    VeUBTR_k_CoeffAirflow = look2_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeTAIR_Pct_RadF, VeUBTR_v_VehSpd, ((const
           float32 *)&(KxUBTR_k_RadiatorConvFactor[0])), ((const float32 *)
          &(KyUBTR_k_RadiatorConvFactor[0])), ((const float32 *)
          &(KtUBTR_k_RadiatorConvFactor[0])), UBTR_ac_ConstP.pooled8, 6U);

    /* RelationalOperator: '<S9>/RelationalOperator' incorporates:
     *  Constant: '<S129>/Calib'
     */
    VeUBTR_b_Eng_On = (VeUBTR_n_EngineSpeed >= KeUBTR_n_EngineOn);

    /* Lookup_n-D: '<S134>/Vector' incorporates:
     *  Switch: '<S6>/Switch11'
     *  Switch: '<S6>/Switch9'
     */
    VeUBTR_k_MotorA_On = look2_iflf_binlca_16a(VeUBTR_n_MtrA_Spd,
        VeUBTR_M_MtrA_TorqAchieved, ((const float32 *)&(KxUBTR_k_MotorOn[0])),
        ((const float32 *)&(KyUBTR_k_MotorOn[0])), ((const float32 *)
        &(KtUBTR_k_MotorOn[0])), UBTR_ac_ConstP.Vector_maxIndex_p, 7U);

    /* RelationalOperator: '<S11>/RelationalOperator' incorporates:
     *  Constant: '<S11>/Constant'
     */
    VeUBTR_b_MotorA_On = (VeUBTR_k_MotorA_On == 1.0F);

    /* SignalConversion generated from: '<S8>/VariantSource2' */
#if !Rte_SysCon_Variant_UBTR_1

    /* Outputs for Enabled SubSystem: '<S8>/MBD_BeltTemp' incorporates:
     *  EnablePort: '<S17>/Enable'
     */
    /* Outputs for Atomic SubSystem: '<S19>/EdgeRising' */
    /* Logic: '<S22>/AND' incorporates:
     *  Logic: '<S22>/OR1'
     *  UnitDelay: '<S22>/UnitDelay'
     */
    rtb_OR1 = !UBTR_ac_DW.UnitDelay_DSTATE_cu;

    /* Update for UnitDelay: '<S22>/UnitDelay' incorporates:
     *  Constant: '<S19>/TRUEConstant'
     */
    UBTR_ac_DW.UnitDelay_DSTATE_cu = true;

    /* End of Outputs for SubSystem: '<S19>/EdgeRising' */

    /* Product: '<S19>/Product' incorporates:
     *  Constant: '<S26>/Calib'
     *  Constant: '<S29>/Calib'
     */
    rtb_TmpSignalConversionAtVeTAIR_p_HghRfr = KeUBTR_k_M_belt_segment *
        KeUBTR_k_cp_belt;

    /* Outputs for Atomic SubSystem: '<S19>/ProtectedDivision' */
    /* Switch: '<S31>/Switch1' incorporates:
     *  Constant: '<S31>/ConstantValue1'
     *  RelationalOperator: '<S31>/NotEqual1'
     */
    if (rtb_TmpSignalConversionAtVeTAIR_p_HghRfr != 0.0F)
    {
        /* Switch: '<S31>/Switch1' incorporates:
         *  Constant: '<S19>/ConstantValue'
         *  Product: '<S31>/Division'
         */
        rtb_TmpSignalConversionAtVeTAIR_p_HghRfr = 1.0F /
            rtb_TmpSignalConversionAtVeTAIR_p_HghRfr;
    }
    else
    {
        /* Switch: '<S31>/Switch1' */
        rtb_TmpSignalConversionAtVeTAIR_p_HghRfr = 3.402823466E+38F;
    }

    /* End of Switch: '<S31>/Switch1' */
    /* End of Outputs for SubSystem: '<S19>/ProtectedDivision' */

    /* Switch: '<S32>/Switch1' */
    if (rtb_OR1)
    {
        /* Sum: '<S19>/Sum4' */
        VeUBTR_T_EstBeltTemp_FEAD_MBD_B4D = VeUBTR_T_BeltTemp_Init;
    }
    else
    {
        /* Sum: '<S19>/Sum4' incorporates:
         *  UnitDelay: '<S32>/UnitDelay'
         */
        VeUBTR_T_EstBeltTemp_FEAD_MBD_B4D = UBTR_ac_DW.UnitDelay_DSTATE_gp;
    }

    /* End of Switch: '<S32>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S33>/EdgeRising' */
    /* Logic: '<S39>/AND' incorporates:
     *  Logic: '<S39>/OR1'
     *  UnitDelay: '<S39>/UnitDelay'
     */
    rtb_OR1_c2 = !UBTR_ac_DW.UnitDelay_DSTATE_fo;

    /* Update for UnitDelay: '<S39>/UnitDelay' incorporates:
     *  Constant: '<S33>/TRUEConstant'
     */
    UBTR_ac_DW.UnitDelay_DSTATE_fo = true;

    /* End of Outputs for SubSystem: '<S33>/EdgeRising' */

    /* Switch: '<S46>/Switch1' */
    if (rtb_OR1_c2)
    {
        /* Switch: '<S46>/Switch1' incorporates:
         *  Constant: '<S20>/ConstantValue3'
         *  Sum: '<S20>/Sum1'
         */
        UBTR_ac_DW.UnitDelay_DSTATE_eb = VeUBTR_T_UnderHoodTemp_Init + 273.15F;
    }

    /* End of Switch: '<S46>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S35>/EdgeRising' */
    /* Logic: '<S49>/AND' incorporates:
     *  Logic: '<S49>/OR1'
     *  UnitDelay: '<S49>/UnitDelay'
     */
    rtb_AND_ps = !UBTR_ac_DW.UnitDelay_DSTATE_pa;

    /* Update for UnitDelay: '<S49>/UnitDelay' incorporates:
     *  Constant: '<S35>/TRUEConstant'
     */
    UBTR_ac_DW.UnitDelay_DSTATE_pa = true;

    /* End of Outputs for SubSystem: '<S35>/EdgeRising' */

    /* Switch: '<S55>/Switch1' */
    if (rtb_AND_ps)
    {
        /* Switch: '<S55>/Switch1' incorporates:
         *  Constant: '<S20>/ConstantValue5'
         *  Sum: '<S20>/Sum3'
         */
        UBTR_ac_DW.UnitDelay_DSTATE_j = VeUBTR_T_UnderHoodTemp_Init + 273.15F;
    }

    /* End of Switch: '<S55>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S38>/ProtectedDivision' */
    /* Switch: '<S58>/Switch1' incorporates:
     *  Constant: '<S37>/ConstantValue2'
     *  Constant: '<S58>/ConstantValue1'
     *  RelationalOperator: '<S58>/NotEqual1'
     *  Sum: '<S37>/Sum'
     */
    if ((rtb_TmpSignalConversionAtVeAATR_T_EstAmb + 273.15F) != 0.0F)
    {
        /* Switch: '<S58>/Switch1' incorporates:
         *  Constant: '<S38>/ConstantValue8'
         *  Product: '<S58>/Division'
         */
        rtb_TmpSignalConversionAtVeTAIR_P_AC_Com = 353.08F /
            (rtb_TmpSignalConversionAtVeAATR_T_EstAmb + 273.15F);
    }
    else
    {
        /* Switch: '<S58>/Switch1' */
        rtb_TmpSignalConversionAtVeTAIR_P_AC_Com = 3.402823466E+38F;
    }

    /* End of Switch: '<S58>/Switch1' */
    /* End of Outputs for SubSystem: '<S38>/ProtectedDivision' */

    /* Product: '<S36>/Product' incorporates:
     *  Constant: '<S36>/ConstantValue'
     */
    rtb_Product_el = VeUBTR_v_VehSpd * 0.621371F;

    /* Product: '<S36>/Product1' incorporates:
     *  Constant: '<S36>/ConstantValue1'
     *  Lookup_n-D: '<S56>/Vector'
     *  Lookup_n-D: '<S57>/Vector'
     *  Product: '<S36>/Product'
     *  SignalConversion generated from: '<S1>/VeTAIR_Pct_RadFanSts'
     */
    rtb_TmpSignalConversionAtUnderhoodTempSa = 0.000471947453F *
        look2_iflf_binlca_16a(look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeTAIR_Pct_RadF, ((const float32 *)
        &(KxUBTR_k_Fandc_rpm[0])), ((const float32 *)&(KtUBTR_k_Fandc_rpm[0])),
         5U), rtb_Product_el, ((const float32 *)&(KxUBTR_k_Radairflw_cfm[0])),
        ((const float32 *)&(KyUBTR_k_Radairflw_cfm[0])), ((const float32 *)
        &(KtUBTR_k_Radairflw_cfm[0])), UBTR_ac_ConstP.Vector_maxIndex, 4U);

    /* Outputs for Atomic SubSystem: '<S33>/ProtectedDivision' */
    /* Switch: '<S45>/Switch1' incorporates:
     *  Constant: '<S40>/Calib'
     *  Constant: '<S45>/ConstantValue1'
     *  RelationalOperator: '<S45>/NotEqual1'
     */
    if (KeUBTR_k_Af_airside != 0.0F)
    {
        /* Switch: '<S45>/Switch1' incorporates:
         *  Constant: '<S33>/ConstantValue'
         *  Product: '<S45>/Division'
         */
        rtb_TmpSignalConversionAtBeltTempSaved_R = 1.0F / KeUBTR_k_Af_airside;
    }
    else
    {
        /* Switch: '<S45>/Switch1' */
        rtb_TmpSignalConversionAtBeltTempSaved_R = 3.402823466E+38F;
    }

    /* End of Switch: '<S45>/Switch1' */
    /* End of Outputs for SubSystem: '<S33>/ProtectedDivision' */

    /* Product: '<S33>/Product4' incorporates:
     *  Product: '<S33>/Product3'
     */
    rtb_TmpSignalConversionAtVeTAIR_P_AC_Com *=
        rtb_TmpSignalConversionAtUnderhoodTempSa *
        rtb_TmpSignalConversionAtBeltTempSaved_R;

    /* Switch: '<S44>/Switch' incorporates:
     *  Constant: '<S44>/Constant'
     *  RelationalOperator: '<S44>/RelationalOperator'
     */
    if (rtb_TmpSignalConversionAtVeTAIR_P_AC_Com > 0.0F)
    {
        /* Sum: '<S33>/Sum' incorporates:
         *  Math: '<S44>/MathFunction'
         */
        rtb_TmpSignalConversionAtVeTAIR_P_AC_Com = powf
            (rtb_TmpSignalConversionAtVeTAIR_P_AC_Com, 0.6667F);
    }
    else
    {
        /* Sum: '<S33>/Sum' incorporates:
         *  Constant: '<S44>/Constant1'
         */
        rtb_TmpSignalConversionAtVeTAIR_P_AC_Com = 0.0F;
    }

    /* End of Switch: '<S44>/Switch' */

    /* Sum: '<S33>/Sum1' incorporates:
     *  Sum: '<S35>/Sum3'
     *  Switch: '<S55>/Switch3'
     */
    rtb_TmpSignalConversionAtBeltTempSaved_R = UBTR_ac_DW.UnitDelay_DSTATE_j -
        UBTR_ac_DW.UnitDelay_DSTATE_eb;

    /* Sum: '<S33>/Sum' incorporates:
     *  Constant: '<S37>/ConstantValue2'
     *  Constant: '<S40>/Calib'
     *  Constant: '<S41>/Calib'
     *  Constant: '<S42>/Calib'
     *  Constant: '<S43>/Calib'
     *  Product: '<S33>/Product'
     *  Product: '<S33>/Product1'
     *  Product: '<S33>/Product5'
     *  Product: '<S33>/Product6'
     *  Product: '<S33>/Product7'
     *  Sum: '<S33>/Sum1'
     *  Sum: '<S33>/Sum2'
     *  Sum: '<S33>/Sum3'
     *  Sum: '<S37>/Sum'
     */
    rtb_TmpSignalConversionAtVeTAIR_P_AC_Com =
        ((((rtb_TmpSignalConversionAtBeltTempSaved_R * KeUBTR_k_Af_airside) /
           KeUBTR_k_C2_airside) - (((UBTR_ac_DW.UnitDelay_DSTATE_eb -
             (rtb_TmpSignalConversionAtVeAATR_T_EstAmb + 273.15F)) *
            KeUBTR_k_Af_airside) * (rtb_TmpSignalConversionAtVeTAIR_P_AC_Com /
            KeUBTR_k_C1))) / KeUBTR_k_C_airsidewall) +
        UBTR_ac_DW.UnitDelay_DSTATE_eb;

    /* Outputs for Atomic SubSystem: '<S21>/EdgeRising' */
    /* Logic: '<S59>/AND' incorporates:
     *  Logic: '<S59>/OR1'
     *  UnitDelay: '<S59>/UnitDelay'
     */
    rtb_AND_es = !UBTR_ac_DW.UnitDelay_DSTATE_as;

    /* Update for UnitDelay: '<S59>/UnitDelay' incorporates:
     *  Constant: '<S21>/TRUEConstant'
     */
    UBTR_ac_DW.UnitDelay_DSTATE_as = true;

    /* End of Outputs for SubSystem: '<S21>/EdgeRising' */

    /* Switch: '<S63>/Switch1' */
    if (rtb_AND_es)
    {
        /* Switch: '<S63>/Switch1' */
        UBTR_ac_DW.UnitDelay_DSTATE_m = VeUBTR_T_UnderHoodTemp_Init;
    }

    /* End of Switch: '<S63>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S21>/EdgeRising1' */
    /* Logic: '<S60>/AND' incorporates:
     *  Logic: '<S60>/OR1'
     *  UnitDelay: '<S60>/UnitDelay'
     */
    rtb_AND_e = !UBTR_ac_DW.UnitDelay_DSTATE_o2;

    /* Update for UnitDelay: '<S60>/UnitDelay' incorporates:
     *  Constant: '<S21>/TRUEConstant1'
     */
    UBTR_ac_DW.UnitDelay_DSTATE_o2 = true;

    /* End of Outputs for SubSystem: '<S21>/EdgeRising1' */

    /* Switch: '<S64>/Switch1' */
    if (rtb_AND_e)
    {
        /* Switch: '<S64>/Switch1' */
        UBTR_ac_DW.UnitDelay_DSTATE_jk = VeUBTR_T_UnderHoodTemp_Init;
    }

    /* End of Switch: '<S64>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S21>/EdgeRising2' */
    /* Logic: '<S61>/AND' incorporates:
     *  Logic: '<S61>/OR1'
     *  UnitDelay: '<S61>/UnitDelay'
     */
    rtb_AND_g = !UBTR_ac_DW.UnitDelay_DSTATE_p;

    /* Update for UnitDelay: '<S61>/UnitDelay' incorporates:
     *  Constant: '<S21>/TRUEConstant2'
     */
    UBTR_ac_DW.UnitDelay_DSTATE_p = true;

    /* End of Outputs for SubSystem: '<S21>/EdgeRising2' */

    /* Switch: '<S65>/Switch1' */
    if (rtb_AND_g)
    {
        /* Switch: '<S65>/Switch1' */
        UBTR_ac_DW.UnitDelay_DSTATE_gc = VeUBTR_T_UnderHoodTemp_Init;
    }

    /* End of Switch: '<S65>/Switch1' */

    /* MATLAB Function: '<S21>/UHood_MB' incorporates:
     *  Constant: '<S17>/ConstantValue'
     *  Constant: '<S20>/ConstantValue7'
     *  Product: '<S17>/Product'
     *  Sum: '<S17>/Sum'
     *  Sum: '<S20>/Sum5'
     */
    /* MATLAB Function 'UBTR_MedTEH/Belt_Under_Cont/Belt_Underhood_Cont_Subsystem/MBD_BeltTemp/UnderHood_Model_Based/UHood_MB': '<S62>:1' */
    /* '<S62>:1:6' */
    rtb_Product_el = (1.0F / ((1.0F / ((powf(rtb_Product_el, 0.666F) + 1.0F) *
                         19.0F)) + 0.0142857144F)) * 0.2F;

    /* '<S62>:1:31' */
    rtb_TmpSignalConversionAtUnderhoodTempSa *= 101325.0F /
        ((rtb_TmpSignalConversionAtVeAATR_T_EstAmb + 273.15F) * 287.05F);

    /* '<S62>:1:32' */
    m_underbody = 0.1F * rtb_TmpSignalConversionAtUnderhoodTempSa;

    /* '<S62>:1:34' */
    /* '<S62>:1:38' */
    /* '<S62>:1:40' */
    Q_b = (((VeUBTR_T_EngCoolantTemp + rtb_TmpSignalConversionAtVeTMIR_T_OnBrdC)
            * 0.5F) - (((UBTR_ac_DW.UnitDelay_DSTATE_m +
                         UBTR_ac_DW.UnitDelay_DSTATE_jk) +
                        UBTR_ac_DW.UnitDelay_DSTATE_gc) / 3.0F)) *
        rtb_Product_el;

    /* '<S62>:1:44' */
    /* '<S62>:1:50' */
    VeUBTR_T_Ta1 = ((((((rtb_TmpSignalConversionAtVeTAIR_P_AC_Com - 273.15F) -
                        UBTR_ac_DW.UnitDelay_DSTATE_m) *
                       (rtb_TmpSignalConversionAtUnderhoodTempSa * 1000.0F)) +
                      Q_b) + ((((rtb_TmpSignalConversionAtVeTAIR_P_AC_Com -
                         273.15F) * 0.8F) - UBTR_ac_DW.UnitDelay_DSTATE_m) *
                      (m_underbody * 1000.0F))) * 0.0001F) +
        UBTR_ac_DW.UnitDelay_DSTATE_m;

    /* '<S62>:1:51' */
    VeUBTR_T_Ta2 = (((Q_b - ((((rtb_TmpSignalConversionAtUnderhoodTempSa +
                          m_underbody) * 0.1F) * 1000.0F) *
                       (UBTR_ac_DW.UnitDelay_DSTATE_jk -
                        UBTR_ac_DW.UnitDelay_DSTATE_m))) - ((rtb_Product_el *
                       0.1F) * (UBTR_ac_DW.UnitDelay_DSTATE_gc -
                       UBTR_ac_DW.UnitDelay_DSTATE_jk))) * 0.0001F) +
        UBTR_ac_DW.UnitDelay_DSTATE_jk;

    /* '<S62>:1:52' */
    VeUBTR_T_Thood = (((rtb_Product_el * 0.1F) * VeUBTR_T_Ta2) +
                      ((rtb_Product_el * 0.1F) *
                       rtb_TmpSignalConversionAtVeAATR_T_EstAmb)) /
        ((rtb_Product_el * 0.1F) + (rtb_Product_el * 0.1F));

    /* Product: '<S17>/Product1' incorporates:
     *  Constant: '<S17>/ConstantValue1'
     *  Sum: '<S17>/Sum1'
     */
    VeUBTR_T_EstBeltTemp_UnderHood_MBD_B4D = ((VeUBTR_T_Ta1 + VeUBTR_T_Ta2) +
        VeUBTR_T_Thood) * 0.33F;

    /* Sum: '<S19>/Sum4' incorporates:
     *  Constant: '<S20>/ConstantValue7'
     *  Constant: '<S23>/Calib'
     *  Constant: '<S24>/Calib'
     *  Constant: '<S25>/Calib'
     *  Constant: '<S27>/Calib'
     *  Constant: '<S28>/Calib'
     *  Constant: '<S30>/Calib'
     *  Product: '<S19>/Product1'
     *  Product: '<S19>/Product2'
     *  Product: '<S19>/Product3'
     *  Product: '<S19>/Product4'
     *  Product: '<S19>/Product5'
     *  Sum: '<S19>/Sum'
     *  Sum: '<S19>/Sum1'
     *  Sum: '<S19>/Sum2'
     *  Sum: '<S19>/Sum3'
     *  Sum: '<S20>/Sum5'
     */
    VeUBTR_T_EstBeltTemp_FEAD_MBD_B4D = ((((((VeUBTR_T_MtrA_Temp -
        VeUBTR_T_EstBeltTemp_FEAD_MBD_B4D) * KeUBTR_k_UA_motA_pulley_to_Belt) -
        ((VeUBTR_T_EstBeltTemp_FEAD_MBD_B4D -
          (((rtb_TmpSignalConversionAtVeTAIR_P_AC_Com - 273.15F) *
            KeUBTR_k_BetaMBD) + (KeUBTR_k_GammaMBD *
        VeUBTR_T_EstBeltTemp_UnderHood_MBD_B4D))) * KeUBTR_k_UA_inf_motA_belt)) *
        rtb_TmpSignalConversionAtVeTAIR_p_HghRfr) * KeUBTR_k_IntegScale) *
        KeUBTR_t_deltatime) + VeUBTR_T_EstBeltTemp_FEAD_MBD_B4D;

    /* Switch: '<S32>/Switch3' incorporates:
     *  UnitDelay: '<S32>/UnitDelay'
     */
    if (rtb_OR1)
    {
        UBTR_ac_DW.UnitDelay_DSTATE_gp = VeUBTR_T_BeltTemp_Init;
    }
    else
    {
        UBTR_ac_DW.UnitDelay_DSTATE_gp = VeUBTR_T_EstBeltTemp_FEAD_MBD_B4D;
    }

    /* End of Switch: '<S32>/Switch3' */

    /* Switch: '<S46>/Switch3' incorporates:
     *  Constant: '<S20>/ConstantValue3'
     *  Sum: '<S20>/Sum1'
     *  UnitDelay: '<S46>/UnitDelay'
     */
    if (rtb_OR1_c2)
    {
        UBTR_ac_DW.UnitDelay_DSTATE_eb = VeUBTR_T_UnderHoodTemp_Init + 273.15F;
    }
    else
    {
        UBTR_ac_DW.UnitDelay_DSTATE_eb =
            rtb_TmpSignalConversionAtVeTAIR_P_AC_Com;
    }

    /* End of Switch: '<S46>/Switch3' */

    /* Switch: '<S55>/Switch3' incorporates:
     *  Constant: '<S20>/ConstantValue4'
     *  Constant: '<S20>/ConstantValue5'
     *  Constant: '<S47>/Calib'
     *  Constant: '<S48>/Calib'
     *  Constant: '<S50>/Calib'
     *  Constant: '<S51>/Calib'
     *  Constant: '<S52>/Calib'
     *  Constant: '<S53>/Calib'
     *  Constant: '<S54>/Calib'
     *  Product: '<S34>/Product2'
     *  Product: '<S34>/Product3'
     *  Product: '<S35>/Product1'
     *  Product: '<S35>/Product2'
     *  Product: '<S35>/Product3'
     *  Product: '<S35>/Product4'
     *  Sum: '<S20>/Sum2'
     *  Sum: '<S20>/Sum3'
     *  Sum: '<S34>/Sum6'
     *  Sum: '<S35>/Sum'
     *  Sum: '<S35>/Sum1'
     *  Sum: '<S35>/Sum2'
     *  UnitDelay: '<S55>/UnitDelay'
     */
    if (rtb_AND_ps)
    {
        UBTR_ac_DW.UnitDelay_DSTATE_j = VeUBTR_T_UnderHoodTemp_Init + 273.15F;
    }
    else
    {
        UBTR_ac_DW.UnitDelay_DSTATE_j += (((((((VeUBTR_T_EngCoolantTemp *
            KeUBTR_k_alphaClnt) + (rtb_TmpSignalConversionAtVeTMIR_T_OnBrdC *
            KeUBTR_k_betaClnt)) + 273.15F) - UBTR_ac_DW.UnitDelay_DSTATE_j) *
            KeUBTR_k_clnt_to_wall) - ((rtb_TmpSignalConversionAtBeltTempSaved_R *
            KeUBTR_k_Af_wall) / KeUBTR_k_C2_wall)) / KeUBTR_k_C_wall) *
            KeUBTR_k_scaling_wall;
    }

    /* Switch: '<S63>/Switch3' incorporates:
     *  UnitDelay: '<S63>/UnitDelay'
     */
    if (rtb_AND_es)
    {
        UBTR_ac_DW.UnitDelay_DSTATE_m = VeUBTR_T_UnderHoodTemp_Init;
    }
    else
    {
        UBTR_ac_DW.UnitDelay_DSTATE_m = VeUBTR_T_Ta1;
    }

    /* End of Switch: '<S63>/Switch3' */

    /* Switch: '<S64>/Switch3' incorporates:
     *  UnitDelay: '<S64>/UnitDelay'
     */
    if (rtb_AND_e)
    {
        UBTR_ac_DW.UnitDelay_DSTATE_jk = VeUBTR_T_UnderHoodTemp_Init;
    }
    else
    {
        UBTR_ac_DW.UnitDelay_DSTATE_jk = VeUBTR_T_Ta2;
    }

    /* End of Switch: '<S64>/Switch3' */

    /* Switch: '<S65>/Switch3' incorporates:
     *  UnitDelay: '<S65>/UnitDelay'
     */
    if (rtb_AND_g)
    {
        UBTR_ac_DW.UnitDelay_DSTATE_gc = VeUBTR_T_UnderHoodTemp_Init;
    }
    else
    {
        UBTR_ac_DW.UnitDelay_DSTATE_gc = VeUBTR_T_Thood;
    }

    /* End of Switch: '<S65>/Switch3' */
    /* End of Outputs for SubSystem: '<S8>/MBD_BeltTemp' */
#else

    /* Outputs for Enabled SubSystem: '<S8>/Subsystem' incorporates:
     *  EnablePort: '<S18>/Enable'
     */
    /* Sum: '<S67>/Add' incorporates:
     *  Constant: '<S98>/Calib'
     */
    VeUBTR_T_UnderHoodTemp_B4LPF = rtb_TmpSignalConversionAtVeAATR_T_EstAmb +
        KeUBTR_dT_AmbTempOffset;

    /* Product: '<S114>/Product11' incorporates:
     *  Product: '<S114>/Product13'
     */
    rtb_TmpSignalConversionAtBeltTempSaved_R = VeUBTR_k_CoeffAirflow *
        rtb_TmpSignalConversionAtVeAATR_T_EstAmb;

    /* Sum: '<S114>/Subtract3' incorporates:
     *  Constant: '<S114>/Constant2'
     *  Product: '<S114>/Product11'
     *  Product: '<S114>/Product12'
     *  Sum: '<S114>/Subtract2'
     */
    VeUBTR_T_LTR_FinGapTemp = ((1.0F - VeUBTR_k_CoeffAirflow) *
        rtb_TmpSignalConversionAtVeTMIR_T_OnBrdC) +
        rtb_TmpSignalConversionAtBeltTempSaved_R;

    /* Product: '<S114>/Product16' incorporates:
     *  Constant: '<S119>/Calib'
     *  Lookup_n-D: '<S122>/Vector'
     *  Lookup_n-D: '<S16>/Vector'
     *  SignalConversion generated from: '<S1>/VeTMIR_T_OnBrdChrg_ClntTmpIn'
     *  Sum: '<S114>/Subtract7'
     */
    VeUBTR_Q_LTR_HeatRejectn = (look2_iflf_binlca_16a(VeUBTR_k_CoeffAirflow,
        rtb_TmpSignalConversionAtVeTMIR_T_OnBrdC, ((const float32 *)
        &(KxUBTR_k_ConvectnCoeff_LTR[0])), ((const float32 *)
        &(KyUBTR_k_ConvectnCoeff_LTR[0])), ((const float32 *)
        &(KtUBTR_k_ConvectnCoeff_LTR[0])), UBTR_ac_ConstP.pooled8, 6U) *
        KeUBTR_k_ConvectnArea_LTR) * (rtb_TmpSignalConversionAtVeTMIR_T_OnBrdC -
        VeUBTR_T_LTR_FinGapTemp);

    /* Outputs for Atomic SubSystem: '<S67>/EdgeRising4' */
    /* Logic: '<S95>/AND' incorporates:
     *  Logic: '<S95>/OR1'
     *  UnitDelay: '<S95>/UnitDelay'
     */
    rtb_OR1 = !UBTR_ac_DW.UnitDelay_DSTATE_cc;

    /* Update for UnitDelay: '<S95>/UnitDelay' incorporates:
     *  Constant: '<S67>/TRUEConstant3'
     */
    UBTR_ac_DW.UnitDelay_DSTATE_cc = true;

    /* End of Outputs for SubSystem: '<S67>/EdgeRising4' */

    /* Switch: '<S106>/Switch1' */
    if (rtb_OR1)
    {
        /* Switch: '<S106>/Switch1' */
        VeUBTR_T_UnderHoodTemp_Prev = VeUBTR_T_UnderHoodTemp_Init;
    }
    else
    {
        /* Switch: '<S106>/Switch1' incorporates:
         *  UnitDelay: '<S106>/UnitDelay'
         */
        VeUBTR_T_UnderHoodTemp_Prev = UBTR_ac_DW.UnitDelay_DSTATE_d;
    }

    /* End of Switch: '<S106>/Switch1' */

    /* Switch: '<S128>/Switch1' incorporates:
     *  Constant: '<S112>/Calib'
     *  RelationalOperator: '<S116>/RelationalOperator'
     */
    if (VeUBTR_T_EngCoolantTemp <= KeUBTR_T_ECT_ThermostatOpen)
    {
        /* Switch: '<S128>/Switch1' */
        VeUBTR_T_ECT_RadiatrTemp = VeUBTR_T_UnderHoodTemp_Prev;
    }
    else
    {
        /* Switch: '<S128>/Switch1' */
        VeUBTR_T_ECT_RadiatrTemp = VeUBTR_T_EngCoolantTemp;
    }

    /* End of Switch: '<S128>/Switch1' */

    /* Sum: '<S114>/Subtract5' incorporates:
     *  Constant: '<S114>/Constant3'
     *  Product: '<S114>/Product14'
     *  Sum: '<S114>/Subtract4'
     */
    VeUBTR_T_HTR_FinGapTemp = ((1.0F - VeUBTR_k_CoeffAirflow) *
        VeUBTR_T_ECT_RadiatrTemp) + rtb_TmpSignalConversionAtBeltTempSaved_R;

    /* Product: '<S114>/Product17' incorporates:
     *  Constant: '<S118>/Calib'
     *  Lookup_n-D: '<S121>/Vector'
     *  Lookup_n-D: '<S16>/Vector'
     *  Sum: '<S114>/Subtract8'
     *  Switch: '<S128>/Switch1'
     */
    VeUBTR_Q_HTR_HeatRejectn = (look2_iflf_binlca_16a(VeUBTR_k_CoeffAirflow,
        VeUBTR_T_ECT_RadiatrTemp, ((const float32 *)
        &(KxUBTR_k_ConvectnCoeff_HTR[0])), ((const float32 *)
        &(KyUBTR_k_ConvectnCoeff_HTR[0])), ((const float32 *)
        &(KtUBTR_k_ConvectnCoeff_HTR[0])), UBTR_ac_ConstP.pooled8, 6U) *
        KeUBTR_k_ConvectnArea_HTR) * (VeUBTR_T_ECT_RadiatrTemp -
        VeUBTR_T_HTR_FinGapTemp);

    /* Product: '<S114>/Product1' incorporates:
     *  Constant: '<S117>/Calib'
     *  Lookup_n-D: '<S120>/Vector'
     *  Lookup_n-D: '<S16>/Vector'
     *  Product: '<S115>/Product1'
     *  SignalConversion generated from: '<S1>/VeTAIR_p_HghRfrgtPres'
     */
    VeUBTR_Q_Cond_HeatRejectn_1 = (look2_iflf_binlca_16a(VeUBTR_k_CoeffAirflow,
        rtb_TmpSignalConversionAtVeTAIR_p_HghRfr, ((const float32 *)
        &(KxUBTR_k_ConvectnCoeff_Cond[0])), ((const float32 *)
        &(KyUBTR_k_ConvectnCoeff_Cond[0])), ((const float32 *)
        &(KtUBTR_k_ConvectnCoeff_Cond[0])), UBTR_ac_ConstP.pooled8, 6U) *
        KeUBTR_k_ConvectnArea_Cond) * rtb_TmpSignalConversionAtVeTAIR_P_AC_Com;

    /* Sum: '<S114>/Subtract10' */
    VeUBTR_Q_Rad_HeatRejectn_App1 = (VeUBTR_Q_LTR_HeatRejectn +
        VeUBTR_Q_HTR_HeatRejectn) + VeUBTR_Q_Cond_HeatRejectn_1;

    /* Sum: '<S115>/Subtract1' incorporates:
     *  Constant: '<S115>/Constant'
     *  Constant: '<S125>/Calib'
     *  Product: '<S115>/Product2'
     *  Product: '<S115>/Product3'
     *  Sum: '<S115>/Subtract2'
     */
    VeUBTR_T_CombRadTemp = ((1.0F - KeUBTR_k_LTR_RadiatorFactor) *
                            VeUBTR_T_ECT_RadiatrTemp) +
        (rtb_TmpSignalConversionAtVeTMIR_T_OnBrdC * KeUBTR_k_LTR_RadiatorFactor);

    /* Product: '<S115>/Product15' incorporates:
     *  Constant: '<S124>/Calib'
     *  Lookup_n-D: '<S127>/Vector'
     *  Lookup_n-D: '<S16>/Vector'
     *  Sum: '<S115>/Subtract1'
     *  Sum: '<S115>/Subtract6'
     */
    VeUBTR_Q_CombRad_HeatRejectn = (look2_iflf_binlca_16a(VeUBTR_k_CoeffAirflow,
        VeUBTR_T_CombRadTemp, ((const float32 *)
        &(KxUBTR_k_ConvectnCoeff_Radiatr[0])), ((const float32 *)
        &(KyUBTR_k_ConvectnCoeff_Radiatr[0])), ((const float32 *)
        &(KtUBTR_k_ConvectnCoeff_Radiatr[0])), UBTR_ac_ConstP.pooled8, 6U) *
        KeUBTR_k_ConvectnArea_Radiator) * (VeUBTR_T_CombRadTemp -
        VeUBTR_T_UnderHoodTemp_Prev);

    /* Product: '<S115>/Product1' */
    VeUBTR_Q_Cond_HeatRejectn_2 = VeUBTR_Q_Cond_HeatRejectn_1;

    /* Sum: '<S115>/Subtract3' */
    VeUBTR_Q_Rad_HeatRejectn_App2 = VeUBTR_Q_CombRad_HeatRejectn +
        VeUBTR_Q_Cond_HeatRejectn_2;

    /* Switch: '<S111>/Switch1' incorporates:
     *  Constant: '<S113>/Calib'
     */
    if (KeUBTR_b_UseRadModel_App1)
    {
        /* Switch: '<S111>/Switch1' */
        VeUBTR_Q_Rad_HeatRejectn_Net = VeUBTR_Q_Rad_HeatRejectn_App1;
    }
    else
    {
        /* Switch: '<S111>/Switch1' */
        VeUBTR_Q_Rad_HeatRejectn_Net = VeUBTR_Q_Rad_HeatRejectn_App2;
    }

    /* End of Switch: '<S111>/Switch1' */

    /* Switch: '<S96>/Switch2' */
    if (VeUBTR_b_Eng_On)
    {
        /* Switch: '<S96>/Switch2' incorporates:
         *  Constant: '<S107>/Calib'
         *  Lookup_n-D: '<S108>/Vector'
         *  Lookup_n-D: '<S16>/Vector'
         *  Product: '<S96>/Product19'
         *  Sum: '<S96>/Subtract11'
         *  Switch: '<S6>/Switch3'
         */
        VeUBTR_Q_Engine_HeatRejectn = (look2_iflf_binlca_16a
            (VeUBTR_k_CoeffAirflow, VeUBTR_T_EngCoolantTemp, ((const float32 *)
            &(KxUBTR_k_ConvectnCoeff_Engine[0])), ((const float32 *)
            &(KyUBTR_k_ConvectnCoeff_Engine[0])), ((const float32 *)
            &(KtUBTR_k_ConvectnCoeff_Engine[0])), UBTR_ac_ConstP.pooled8, 6U) *
            KeUBTR_k_ConvectnArea_EngnBlock) * (VeUBTR_T_EngCoolantTemp -
            VeUBTR_T_UnderHoodTemp_Prev);
    }
    else
    {
        /* Switch: '<S96>/Switch2' incorporates:
         *  Constant: '<S96>/Constant'
         */
        VeUBTR_Q_Engine_HeatRejectn = 0.0F;
    }

    /* End of Switch: '<S96>/Switch2' */

    /* Product: '<S97>/Product18' incorporates:
     *  Constant: '<S109>/Calib'
     *  Lookup_n-D: '<S110>/Vector'
     *  Sum: '<S97>/Subtract9'
     *  Switch: '<S106>/Switch1'
     *  Switch: '<S6>/Switch8'
     */
    VeUBTR_Q_Hood_HeatRejectn = (look2_iflf_binlca_16a(VeUBTR_v_VehSpd,
        VeUBTR_T_UnderHoodTemp_Prev, ((const float32 *)
        &(KxUBTR_k_ConvectnCoeff_Hood[0])), ((const float32 *)
        &(KyUBTR_k_ConvectnCoeff_Hood[0])), ((const float32 *)
        &(KtUBTR_k_ConvectnCoeff_Hood[0])), UBTR_ac_ConstP.pooled8, 6U) *
        KeUBTR_k_ConvectnArea_Hood) * (VeUBTR_T_UnderHoodTemp_Prev -
        rtb_TmpSignalConversionAtVeAATR_T_EstAmb);

    /* Sum: '<S67>/Subtract12' */
    VeUBTR_Q_NetHeatRejectn_Undrhood = (VeUBTR_Q_Rad_HeatRejectn_Net +
        VeUBTR_Q_Engine_HeatRejectn) - VeUBTR_Q_Hood_HeatRejectn;

    /* Product: '<S67>/Product20' incorporates:
     *  Constant: '<S100>/Calib'
     *  Lookup_n-D: '<S101>/Vector'
     *  Lookup_n-D: '<S16>/Vector'
     *  Switch: '<S106>/Switch1'
     */
    rtb_TmpSignalConversionAtVeTAIR_p_HghRfr = look2_iflf_binlca_16a
        (VeUBTR_k_CoeffAirflow, VeUBTR_T_UnderHoodTemp_Prev, ((const float32 *)
          &(KxUBTR_k_HeatTrnfrCoeff_UnderHood[0])), ((const float32 *)
          &(KyUBTR_k_HeatTrnfrCoeff_UnderHood[0])), ((const float32 *)
          &(KtUBTR_k_HeatTrnfrCoeff_UnderHood[0])), UBTR_ac_ConstP.pooled8, 6U) *
        KeUBTR_k_ThermalMass_UnderHood;

    /* Outputs for Atomic SubSystem: '<S67>/ProtectedDivision' */
    /* Switch: '<S103>/Switch1' incorporates:
     *  Constant: '<S103>/ConstantValue'
     *  Constant: '<S103>/ConstantValue1'
     *  Constant: '<S103>/ConstantValue2'
     *  Constant: '<S103>/ConstantValue3'
     *  Logic: '<S103>/AND'
     *  RelationalOperator: '<S103>/GreaterThanorEqual'
     *  RelationalOperator: '<S103>/GreaterThanorEqual1'
     *  RelationalOperator: '<S103>/NotEqual'
     *  RelationalOperator: '<S103>/NotEqual1'
     *  Switch: '<S103>/Switch2'
     *  Switch: '<S103>/Switch3'
     */
    if ((VeUBTR_Q_NetHeatRejectn_Undrhood != 0.0F) &&
            (rtb_TmpSignalConversionAtVeTAIR_p_HghRfr != 0.0F))
    {
        /* Switch: '<S103>/Switch1' incorporates:
         *  Product: '<S103>/Division'
         */
        VeUBTR_dT_UnderHoodTemp = VeUBTR_Q_NetHeatRejectn_Undrhood /
            rtb_TmpSignalConversionAtVeTAIR_p_HghRfr;
    }
    else if (VeUBTR_Q_NetHeatRejectn_Undrhood > 0.0F)
    {
        /* Switch: '<S103>/Switch2' incorporates:
         *  Constant: '<S103>/MAXFLOAT'
         *  Switch: '<S103>/Switch1'
         */
        VeUBTR_dT_UnderHoodTemp = 3.402823466E+38F;
    }
    else if (VeUBTR_Q_NetHeatRejectn_Undrhood < 0.0F)
    {
        /* Switch: '<S103>/Switch3' incorporates:
         *  Constant: '<S103>/MINFLOAT'
         *  Switch: '<S103>/Switch1'
         *  Switch: '<S103>/Switch2'
         */
        VeUBTR_dT_UnderHoodTemp = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S103>/Switch1' incorporates:
         *  Constant: '<S103>/ConstantValue4'
         *  Switch: '<S103>/Switch2'
         *  Switch: '<S103>/Switch3'
         */
        VeUBTR_dT_UnderHoodTemp = 0.0F;
    }

    /* End of Switch: '<S103>/Switch1' */
    /* End of Outputs for SubSystem: '<S67>/ProtectedDivision' */

    /* Sum: '<S67>/Subtract14' incorporates:
     *  Delay: '<S67>/Delay2'
     */
    UBTR_ac_DW.Delay2_DSTATE += VeUBTR_dT_UnderHoodTemp;

    /* Sum: '<S67>/Subtract13' incorporates:
     *  Delay: '<S67>/Delay2'
     */
    VeUBTR_T_UnderHoodTemp_B4Lim = VeUBTR_T_UnderHoodTemp_Init +
        UBTR_ac_DW.Delay2_DSTATE;

    /* Outputs for Atomic SubSystem: '<S67>/Limiter1' */
    /* Switch: '<S102>/Switch1' incorporates:
     *  RelationalOperator: '<S102>/RelationalOperator'
     */
    if (VeUBTR_T_EngCoolantTemp < VeUBTR_T_UnderHoodTemp_B4Lim)
    {
        /* Switch: '<S74>/Switch1' */
        VeUBTR_T_EstBeltTempCont_B4LPF = VeUBTR_T_EngCoolantTemp;
    }
    else
    {
        /* Switch: '<S74>/Switch1' */
        VeUBTR_T_EstBeltTempCont_B4LPF = VeUBTR_T_UnderHoodTemp_B4Lim;
    }

    /* End of Switch: '<S102>/Switch1' */

    /* Switch: '<S102>/Switch' incorporates:
     *  RelationalOperator: '<S102>/RelationalOperator1'
     */
    if (VeUBTR_T_EstBeltTempCont_B4LPF > VeUBTR_T_UnderHoodTemp_B4LPF)
    {
        /* Switch: '<S102>/Switch' */
        VeUBTR_T_UnderHoodTemp_B4LPF = VeUBTR_T_EstBeltTempCont_B4LPF;
    }

    /* End of Switch: '<S102>/Switch' */
    /* End of Outputs for SubSystem: '<S67>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S67>/EdgeRising3' */
    /* Logic: '<S94>/OR1' incorporates:
     *  UnitDelay: '<S94>/UnitDelay'
     */
    rtb_OR1_c2 = !UBTR_ac_DW.UnitDelay_DSTATE_h;

    /* Update for UnitDelay: '<S94>/UnitDelay' incorporates:
     *  Constant: '<S67>/TRUEConstant2'
     */
    UBTR_ac_DW.UnitDelay_DSTATE_h = true;

    /* Outputs for Atomic SubSystem: '<S67>/DigitalLowpassResetEnabled1' */
    /* Switch: '<S93>/Switch1' incorporates:
     *  Logic: '<S94>/AND'
     */
    if (rtb_OR1_c2)
    {
        /* Switch: '<S93>/Switch1' */
        VeUBTR_T_UnderHoodTemp_B4D = VeUBTR_T_UnderHoodTemp_B4LPF;
    }
    else
    {
        /* Switch: '<S93>/Switch1' incorporates:
         *  Constant: '<S99>/Calib'
         *  Product: '<S93>/Multiplication'
         *  Sum: '<S93>/Subtraction'
         *  Sum: '<S93>/Summation'
         *  UnitDelay: '<S93>/UnitDelay'
         */
        VeUBTR_T_UnderHoodTemp_B4D = ((VeUBTR_T_UnderHoodTemp_B4LPF -
            VeUBTR_T_UnderHoodTemp_B4D) * KeUBTR_k_LPFUnderHoodTemp) +
            VeUBTR_T_UnderHoodTemp_B4D;
    }

    /* End of Switch: '<S93>/Switch1' */
    /* End of Outputs for SubSystem: '<S67>/DigitalLowpassResetEnabled1' */
    /* End of Outputs for SubSystem: '<S67>/EdgeRising3' */

    /* Switch: '<S78>/Switch1' */
    if (VeUBTR_b_Eng_On)
    {
        /* Switch: '<S78>/Switch1' incorporates:
         *  Constant: '<S81>/Calib'
         */
        VeUBTR_k_ECT_TempFactr4BeltTemp = KeUBTR_k_ECT_EngOn_TempFact;
    }
    else
    {
        /* Switch: '<S78>/Switch1' incorporates:
         *  Constant: '<S80>/Calib'
         */
        VeUBTR_k_ECT_TempFactr4BeltTemp = KeUBTR_k_ECT_EngOff_TempFact;
    }

    /* End of Switch: '<S78>/Switch1' */

    /* Switch: '<S79>/Switch1' */
    if (VeUBTR_b_MotorA_On)
    {
        /* Switch: '<S79>/Switch1' incorporates:
         *  Constant: '<S83>/Calib'
         */
        VeUBTR_k_MtrA_TempFactr4BeltTemp = KeUBTR_k_MtrA_MtrOn_TempFact;
    }
    else
    {
        /* Switch: '<S79>/Switch1' incorporates:
         *  Constant: '<S82>/Calib'
         */
        VeUBTR_k_MtrA_TempFactr4BeltTemp = KeUBTR_k_MtrA_MtrOff_TempFact;
    }

    /* End of Switch: '<S79>/Switch1' */

    /* Sum: '<S68>/Add' incorporates:
     *  Constant: '<S84>/Calib'
     *  Product: '<S68>/Product'
     *  Product: '<S68>/Product1'
     *  Product: '<S68>/Product7'
     */
    rtb_TmpSignalConversionAtVeTAIR_p_HghRfr = ((VeUBTR_T_EngCoolantTemp *
        VeUBTR_k_ECT_TempFactr4BeltTemp) + (VeUBTR_T_MtrA_Temp *
        VeUBTR_k_MtrA_TempFactr4BeltTemp)) + (VeUBTR_T_UnderHoodTemp_B4D *
        KeUBTR_k_UnderHood_TempFact);

    /* Sum: '<S68>/Add1' incorporates:
     *  Constant: '<S84>/Calib'
     */
    rtb_TmpSignalConversionAtVeTAIR_P_AC_Com = (VeUBTR_k_ECT_TempFactr4BeltTemp
        + VeUBTR_k_MtrA_TempFactr4BeltTemp) + KeUBTR_k_UnderHood_TempFact;

    /* Outputs for Atomic SubSystem: '<S68>/ProtectedDivision' */
    /* Switch: '<S76>/Switch1' incorporates:
     *  Constant: '<S76>/ConstantValue'
     *  Constant: '<S76>/ConstantValue1'
     *  Constant: '<S76>/ConstantValue2'
     *  Constant: '<S76>/ConstantValue3'
     *  Logic: '<S76>/AND'
     *  RelationalOperator: '<S76>/GreaterThanorEqual'
     *  RelationalOperator: '<S76>/GreaterThanorEqual1'
     *  RelationalOperator: '<S76>/NotEqual'
     *  RelationalOperator: '<S76>/NotEqual1'
     *  Switch: '<S76>/Switch2'
     *  Switch: '<S76>/Switch3'
     */
    if ((rtb_TmpSignalConversionAtVeTAIR_p_HghRfr != 0.0F) &&
            (rtb_TmpSignalConversionAtVeTAIR_P_AC_Com != 0.0F))
    {
        /* Switch: '<S76>/Switch1' incorporates:
         *  Product: '<S76>/Division'
         */
        VeUBTR_T_BeltTempArbitratd = rtb_TmpSignalConversionAtVeTAIR_p_HghRfr /
            rtb_TmpSignalConversionAtVeTAIR_P_AC_Com;
    }
    else if (rtb_TmpSignalConversionAtVeTAIR_p_HghRfr > 0.0F)
    {
        /* Switch: '<S76>/Switch2' incorporates:
         *  Constant: '<S76>/MAXFLOAT'
         *  Switch: '<S76>/Switch1'
         */
        VeUBTR_T_BeltTempArbitratd = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtVeTAIR_p_HghRfr < 0.0F)
    {
        /* Switch: '<S76>/Switch3' incorporates:
         *  Constant: '<S76>/MINFLOAT'
         *  Switch: '<S76>/Switch1'
         *  Switch: '<S76>/Switch2'
         */
        VeUBTR_T_BeltTempArbitratd = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S76>/Switch1' incorporates:
         *  Constant: '<S76>/ConstantValue4'
         *  Switch: '<S76>/Switch2'
         *  Switch: '<S76>/Switch3'
         */
        VeUBTR_T_BeltTempArbitratd = 0.0F;
    }

    /* End of Switch: '<S76>/Switch1' */
    /* End of Outputs for SubSystem: '<S68>/ProtectedDivision' */

    /* Logic: '<S71>/LogicalOperator1' */
    VeUBTR_b_BeltEngaged = ((VeUBTR_b_Eng_On) && (VeUBTR_b_MotorA_On));

    /* Switch: '<S85>/Switch1' */
    if (VeUBTR_b_BeltEngaged)
    {
        /* Switch: '<S85>/Switch1' incorporates:
         *  Lookup_n-D: '<S87>/Vector'
         *  Switch: '<S6>/Switch11'
         *  Switch: '<S6>/Switch9'
         */
        VeUBTR_T_BeltInternalTempGain_B4LPF = look2_iflf_binlca_16a
            (VeUBTR_n_MtrA_Spd, VeUBTR_M_MtrA_TorqAchieved, ((const float32 *)
              &(KxUBTR_k_BeltHeatGen_dT[0])), ((const float32 *)
              &(KyUBTR_k_BeltHeatGen_dT[0])), ((const float32 *)
              &(KtUBTR_k_BeltHeatGen_dT[0])), UBTR_ac_ConstP.pooled8, 6U);
    }
    else
    {
        /* Switch: '<S85>/Switch1' incorporates:
         *  Constant: '<S71>/Constant'
         */
        VeUBTR_T_BeltInternalTempGain_B4LPF = 0.0F;
    }

    /* End of Switch: '<S85>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S88>/EdgeRising3' */
    /* Logic: '<S90>/OR1' incorporates:
     *  UnitDelay: '<S90>/UnitDelay'
     */
    rtb_OR1_c2 = !UBTR_ac_DW.UnitDelay_DSTATE_f5;

    /* Update for UnitDelay: '<S90>/UnitDelay' incorporates:
     *  Constant: '<S88>/TRUEConstant2'
     */
    UBTR_ac_DW.UnitDelay_DSTATE_f5 = true;

    /* Outputs for Atomic SubSystem: '<S88>/DigitalLowpassResetEnabled2' */
    /* Switch: '<S89>/Switch1' incorporates:
     *  Logic: '<S90>/AND'
     */
    if (rtb_OR1_c2)
    {
        /* Switch: '<S89>/Switch1' */
        VeUBTR_T_BeltInternalTempGain = VeUBTR_T_BeltInternalTempGain_B4LPF;
    }
    else
    {
        /* Switch: '<S89>/Switch1' incorporates:
         *  Constant: '<S86>/Calib'
         *  Product: '<S89>/Multiplication'
         *  Sum: '<S89>/Subtraction'
         *  Sum: '<S89>/Summation'
         *  UnitDelay: '<S89>/UnitDelay'
         */
        VeUBTR_T_BeltInternalTempGain = ((VeUBTR_T_BeltInternalTempGain_B4LPF -
            VeUBTR_T_BeltInternalTempGain) * KeUBTR_k_LPFBeltheat_Temp) +
            VeUBTR_T_BeltInternalTempGain;
    }

    /* End of Switch: '<S89>/Switch1' */
    /* End of Outputs for SubSystem: '<S88>/DigitalLowpassResetEnabled2' */
    /* End of Outputs for SubSystem: '<S88>/EdgeRising3' */

    /* Sum: '<S66>/Add2' */
    VeUBTR_T_BeltTemp_Cont = VeUBTR_T_BeltTempArbitratd +
        VeUBTR_T_BeltInternalTempGain;

    /* If: '<S66>/If' */
    if (VeUBTR_b_InitlzBeltTempMdl)
    {
        /* Outputs for IfAction SubSystem: '<S66>/BeltTemp_InitSaved1' incorporates:
         *  ActionPort: '<S69>/ActionPort'
         */
        UBTR_ac_BeltTemp_InitSaved1(VeUBTR_T_BeltTemp_Init,
            (&(VeUBTR_T_EstBeltTempCont_B4Lim)));

        /* End of Outputs for SubSystem: '<S66>/BeltTemp_InitSaved1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S66>/BeltTemp_InitSaved2' incorporates:
         *  ActionPort: '<S70>/ActionPort'
         */
        UBTR_ac_BeltTemp_InitSaved1(VeUBTR_T_BeltTemp_Cont,
            (&(VeUBTR_T_EstBeltTempCont_B4Lim)));

        /* End of Outputs for SubSystem: '<S66>/BeltTemp_InitSaved2' */
    }

    /* End of If: '<S66>/If' */

    /* Outputs for Atomic SubSystem: '<S66>/Limiter' */
    /* Switch: '<S74>/Switch1' incorporates:
     *  RelationalOperator: '<S74>/RelationalOperator'
     */
    if (VeUBTR_T_EngCoolantTemp < VeUBTR_T_EstBeltTempCont_B4Lim)
    {
        /* Switch: '<S74>/Switch1' */
        VeUBTR_T_EstBeltTempCont_B4LPF = VeUBTR_T_EngCoolantTemp;
    }
    else
    {
        /* Switch: '<S74>/Switch1' */
        VeUBTR_T_EstBeltTempCont_B4LPF = VeUBTR_T_EstBeltTempCont_B4Lim;
    }

    /* End of Switch: '<S74>/Switch1' */

    /* Switch: '<S74>/Switch' incorporates:
     *  RelationalOperator: '<S74>/RelationalOperator1'
     */
    if (VeUBTR_T_EstBeltTempCont_B4LPF <= VeUBTR_T_UnderHoodTemp_B4D)
    {
        /* Switch: '<S74>/Switch' */
        VeUBTR_T_EstBeltTempCont_B4LPF = VeUBTR_T_UnderHoodTemp_B4D;
    }

    /* End of Switch: '<S74>/Switch' */
    /* End of Outputs for SubSystem: '<S66>/Limiter' */

    /* Outputs for Atomic SubSystem: '<S73>/EdgeRising2' */
    /* Logic: '<S92>/OR1' incorporates:
     *  UnitDelay: '<S92>/UnitDelay'
     */
    rtb_OR1_c2 = !UBTR_ac_DW.UnitDelay_DSTATE_of;

    /* Update for UnitDelay: '<S92>/UnitDelay' incorporates:
     *  Constant: '<S73>/TRUEConstant1'
     */
    UBTR_ac_DW.UnitDelay_DSTATE_of = true;

    /* Outputs for Atomic SubSystem: '<S73>/DigitalLowpassResetEnabled' */
    /* Switch: '<S91>/Switch1' incorporates:
     *  Logic: '<S92>/AND'
     */
    if (rtb_OR1_c2)
    {
        /* Switch: '<S91>/Switch1' */
        VeUBTR_T_EstBeltTempFEAD = VeUBTR_T_EstBeltTempCont_B4LPF;
    }
    else
    {
        /* Switch: '<S91>/Switch1' incorporates:
         *  Constant: '<S72>/Calib'
         *  Product: '<S91>/Multiplication'
         *  Sum: '<S91>/Subtraction'
         *  Sum: '<S91>/Summation'
         *  UnitDelay: '<S91>/UnitDelay'
         */
        VeUBTR_T_EstBeltTempFEAD = ((VeUBTR_T_EstBeltTempCont_B4LPF -
            VeUBTR_T_EstBeltTempFEAD) * KeUBTR_k_LPFBeltTemp) +
            VeUBTR_T_EstBeltTempFEAD;
    }

    /* End of Switch: '<S91>/Switch1' */
    /* End of Outputs for SubSystem: '<S73>/DigitalLowpassResetEnabled' */
    /* End of Outputs for SubSystem: '<S73>/EdgeRising2' */

    /* DataStoreWrite: '<S66>/DataStoreWrite1' */
    UBTR_ac_DW.NeUBTR_T_BeltTempPred_Prev = VeUBTR_T_EstBeltTempFEAD;

    /* Merge: '<S8>/Merge' incorporates:
     *  Gain: '<S75>/Gain'
     */
    VeUBTR_T_EstBeltTemp_FEAD_MBD_B4D = VeUBTR_T_EstBeltTempFEAD;

    /* DataStoreWrite: '<S67>/DataStoreWrite2' */
    UBTR_ac_DW.NeUBTR_T_UnderhoodTempPred_Prev = VeUBTR_T_UnderHoodTemp_B4D;

    /* Switch: '<S106>/Switch3' incorporates:
     *  UnitDelay: '<S106>/UnitDelay'
     */
    if (rtb_OR1)
    {
        UBTR_ac_DW.UnitDelay_DSTATE_d = VeUBTR_T_UnderHoodTemp_Init;
    }
    else
    {
        UBTR_ac_DW.UnitDelay_DSTATE_d = VeUBTR_T_UnderHoodTemp_B4D;
    }

    /* End of Switch: '<S106>/Switch3' */

    /* Merge: '<S8>/Merge1' incorporates:
     *  SignalConversion generated from: '<S18>/UnderHoodTemp'
     */
    VeUBTR_T_EstBeltTemp_UnderHood_MBD_B4D = VeUBTR_T_UnderHoodTemp_B4D;

    /* End of Outputs for SubSystem: '<S8>/Subsystem' */
#endif

    /* End of SignalConversion generated from: '<S8>/VariantSource2' */

    /* Switch: '<S14>/Switch1' incorporates:
     *  Constant: '<S15>/Calib'
     */
    if (KeUBTR_b_UseECT4FEADBeltTemp)
    {
        /* Switch: '<S14>/Switch1' */
        VeUBTR_T_BeltTemp_FEAD_B4D = VeUBTR_T_EngCoolantTemp;
    }
    else
    {
        /* Switch: '<S14>/Switch1' */
        VeUBTR_T_BeltTemp_FEAD_B4D = VeUBTR_T_EstBeltTemp_FEAD_MBD_B4D;
    }

    /* End of Switch: '<S14>/Switch1' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/UBTO_FUNC'
     */
    /* SignalConversion generated from: '<S1>/Gen_Underhood_Air_Temp_FUNC' incorporates:
     *  Gain: '<S309>/Gain'
     *  Outport: '<Root>/VeUBTR_T_MtrAAirTemp'
     */
    (void)Rte_Write_VeUBTR_T_MtrAAirTemp_Value(VeUBTR_T_MtrAAirTempBd);

    /* SignalConversion generated from: '<S1>/FEDM_Underhood_Air_Temp_FUNC' incorporates:
     *  Gain: '<S310>/Gain'
     *  Outport: '<Root>/VeUBTR_T_MtrCAirTemp'
     */
    (void)Rte_Write_VeUBTR_T_MtrCAirTemp_Value(VeUBTR_T_MtrCAirTempBd);

    /* SignalConversion generated from: '<S1>/REDM_Underhood_Air_Temp_FUNC' incorporates:
     *  Gain: '<S311>/Gain'
     *  Outport: '<Root>/VeUBTR_T_MtrBAirTemp'
     */
    (void)Rte_Write_VeUBTR_T_MtrBAirTemp_Value(VeUBTR_T_MtrBAirTempBd);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CTMR_UHood'
     */
    /* Lookup_n-D: '<S162>/Vector' incorporates:
     *  Lookup_n-D: '<S158>/Vector'
     *  Lookup_n-D: '<S159>/Vector'
     *  Lookup_n-D: '<S160>/Vector'
     *  Lookup_n-D: '<S161>/Vector'
     *  Product: '<S145>/Product'
     *  Sum: '<S145>/Sum13'
     */
#if Rte_SysCon_Variant_UBTR_6

    /* Outputs for Atomic SubSystem: '<S145>/DigitalLowpassResetEnabled2' */
    /* Lookup_n-D: '<S162>/Vector' incorporates:
     *  Switch: '<S6>/Switch8'
     */
    VeUBTR_T_FedmUHoodAirTempCoefRun_BEV = look1_iflf_binlca_16a(VeUBTR_v_VehSpd,
        ((const float32 *)&(KxUBTR_T_FedmUhoodAirTempCoef[0])), ((const float32 *)
        &(KtUBTR_T_FedmUhoodAirTempCoef[0])), 4U);

    /* Lookup_n-D: '<S159>/Vector' incorporates:
     *  Switch: '<S6>/Switch5'
     *  Switch: '<S6>/Switch8'
     */
    VeUBTR_T_FedmUnderhoodAirTempAGS_BEV = look2_iflf_binlca_16a(VeUBTR_v_VehSpd,
        VeUBTR_Pct_AGS_CurrPos, ((const float32 *)&(KxUBTR_T_FedmAirTempAgsFac[0])),
        ((const float32 *)&(KyUBTR_T_FedmAirTempAgsFac[0])), ((const float32 *)
        &(KtUBTR_T_FedmAirTempAgsFac[0])), UBTR_ac_ConstP.pooled11, 5U);

    /* Lookup_n-D: '<S158>/Vector' incorporates:
     *  Switch: '<S6>/Switch6'
     *  Switch: '<S6>/Switch8'
     */
    VeUBTR_T_FedmUnderhoodAirTempAAD_BEV = look2_iflf_binlca_16a(VeUBTR_v_VehSpd,
        VeUBTR_Pct_AadPos, ((const float32 *)&(KxUBTR_T_FedmAirTempAadFac[0])),
        ((const float32 *)&(KyUBTR_T_FedmAirTempAadFac[0])), ((const float32 *)
        &(KtUBTR_T_FedmAirTempAadFac[0])), UBTR_ac_ConstP.pooled11, 5U);

    /* Product: '<S145>/Product' incorporates:
     *  SignalConversion generated from: '<S1>/VeAATR_T_EstAmbAirTemp'
     *  SignalConversion generated from: '<S1>/VeTAIR_Pct_RadFanSts'
     *  SignalConversion generated from: '<S1>/VeTMIR_T_OnBrdChrg_ClntTmpIn'
     */
    VeUBTR_T_FedmUHoodAirTempSSRun_BEV = ((look2_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeAATR_T_EstAmb,
         rtb_TmpSignalConversionAtVeTMIR_T_OnBrdC, ((const float32 *)
        &(KxUBTR_T_FedmAirTempAmbLTRAdj[0])), ((const float32 *)
        &(KyUBTR_T_FedmAirTempAmbLTRAdj[0])), ((const float32 *)
        &(KtUBTR_T_FedmAirTempAmbLTRAdj[0])), UBTR_ac_ConstP.pooled10, 5U) +
        look2_iflf_binlca_16a(rtb_TmpSignalConversionAtVeAATR_T_EstAmb,
        rtb_TmpSignalConversionAtVeTAIR_Pct_RadF, ((const float32 *)
        &(KxUBTR_T_FedmAirTempAmbFanSpdAdj[0])), ((const float32 *)
        &(KyUBTR_T_FedmAirTempAmbFanSpdAdj[0])), ((const float32 *)
        &(KtUBTR_T_FedmAirTempAmbFanSpdAdj[0])), UBTR_ac_ConstP.pooled11, 5U)) *
        VeUBTR_T_FedmUnderhoodAirTempAGS_BEV) *
        VeUBTR_T_FedmUnderhoodAirTempAAD_BEV;

    /* Sum: '<S154>/Summation' incorporates:
     *  Product: '<S154>/Multiplication'
     *  Sum: '<S154>/Subtraction'
     *  UnitDelay: '<S154>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeTAIR_p_HghRfr =
        ((VeUBTR_T_FedmUHoodAirTempSSRun_BEV - UBTR_ac_DW.UnitDelay_DSTATE_c) *
         VeUBTR_T_FedmUHoodAirTempCoefRun_BEV) + UBTR_ac_DW.UnitDelay_DSTATE_c;

    /* Outputs for Atomic SubSystem: '<S154>/Limiter' */
    /* Switch: '<S163>/Switch1' incorporates:
     *  Constant: '<S156>/Calib'
     *  RelationalOperator: '<S163>/RelationalOperator'
     *  Switch: '<S154>/Switch2'
     */
    if (KeUBTR_T_MtrA_LPF_MaxLim < rtb_TmpSignalConversionAtVeTAIR_p_HghRfr)
    {
        /* Lookup_n-D: '<S266>/Vector' */
        rtb_TmpSignalConversionAtVeTAIR_p_HghRfr = KeUBTR_T_MtrA_LPF_MaxLim;
    }

    /* End of Switch: '<S163>/Switch1' */

    /* Switch: '<S163>/Switch' incorporates:
     *  Constant: '<S157>/Calib'
     *  RelationalOperator: '<S163>/RelationalOperator1'
     *  UnitDelay: '<S154>/UnitDelay'
     */
    if (rtb_TmpSignalConversionAtVeTAIR_p_HghRfr > KeUBTR_T_MtrA_LPF_MinLim)
    {
        UBTR_ac_DW.UnitDelay_DSTATE_c = rtb_TmpSignalConversionAtVeTAIR_p_HghRfr;
    }
    else
    {
        UBTR_ac_DW.UnitDelay_DSTATE_c = KeUBTR_T_MtrA_LPF_MinLim;
    }

    /* End of Switch: '<S163>/Switch' */
    /* End of Outputs for SubSystem: '<S154>/Limiter' */
    /* End of Outputs for SubSystem: '<S145>/DigitalLowpassResetEnabled2' */
#endif

    /* End of Lookup_n-D: '<S162>/Vector' */

    /* Lookup_n-D: '<S193>/Vector' incorporates:
     *  Constant: '<S170>/Calib'
     *  Constant: '<S173>/Calib'
     *  Constant: '<S174>/Calib'
     *  Constant: '<S210>/Calib'
     *  Constant: '<S214>/Calib'
     *  Constant: '<S215>/Calib'
     *  Lookup_n-D: '<S189>/Vector'
     *  Lookup_n-D: '<S190>/Vector'
     *  Lookup_n-D: '<S191>/Vector'
     *  Lookup_n-D: '<S192>/Vector'
     *  Lookup_n-D: '<S196>/Vector'
     *  Lookup_n-D: '<S197>/Vector'
     *  Lookup_n-D: '<S229>/Vector'
     *  Lookup_n-D: '<S230>/Vector'
     *  Lookup_n-D: '<S231>/Vector'
     *  Lookup_n-D: '<S232>/Vector'
     *  Lookup_n-D: '<S235>/Vector'
     *  Lookup_n-D: '<S236>/Vector'
     *  Lookup_n-D: '<S237>/Vector'
     *  Product: '<S146>/Product'
     *  Product: '<S146>/Product3'
     *  Product: '<S147>/Product'
     *  Product: '<S147>/Product3'
     *  RelationalOperator: '<S146>/RelationalOperator1'
     *  RelationalOperator: '<S146>/RelationalOperator2'
     *  RelationalOperator: '<S146>/RelationalOperator3'
     *  RelationalOperator: '<S147>/RelationalOperator1'
     *  RelationalOperator: '<S147>/RelationalOperator2'
     *  RelationalOperator: '<S147>/RelationalOperator3'
     *  Sum: '<S146>/Sum1'
     *  Sum: '<S146>/Sum13'
     *  Sum: '<S146>/Sum2'
     *  Sum: '<S146>/Sum3'
     *  Sum: '<S147>/Sum1'
     *  Sum: '<S147>/Sum2'
     *  Sum: '<S147>/Sum3'
     *  Sum: '<S147>/Sum4'
     *  Switch: '<S146>/Switch2'
     *  Switch: '<S146>/Switch6'
     *  Switch: '<S146>/Switch7'
     *  Switch: '<S147>/Switch1'
     *  Switch: '<S147>/Switch6'
     *  Switch: '<S147>/Switch7'
     *  UnitDelay: '<S146>/UnitDelay'
     *  UnitDelay: '<S147>/UnitDelay'
     */
#if Rte_SysCon_Variant_UBTR_5

    /* Outputs for Atomic SubSystem: '<S147>/DigitalLowpassResetEnabled3' */
    /* Outputs for Atomic SubSystem: '<S147>/DigitalLowpassResetEnabled2' */
    /* Outputs for Atomic SubSystem: '<S147>/DigitalLowpassResetEnabled4' */
    /* Outputs for Atomic SubSystem: '<S147>/DigitalLowpassResetEnabled1' */
    /* Outputs for Atomic SubSystem: '<S146>/DigitalLowpassResetEnabled3' */
    /* Outputs for Atomic SubSystem: '<S146>/DigitalLowpassResetEnabled2' */
    /* Outputs for Atomic SubSystem: '<S146>/DigitalLowpassResetEnabled4' */
    /* Outputs for Atomic SubSystem: '<S146>/DigitalLowpassResetEnabled1' */
    /* UnitDelay: '<S146>/UnitDelay' */
    VeUBTR_T_FedmUHoodAirTempBd = UBTR_ac_DW.UnitDelay_DSTATE;

    /* Sum: '<S164>/Summation' incorporates:
     *  Constant: '<S175>/Calib'
     *  Product: '<S164>/Multiplication'
     *  Sum: '<S164>/Subtraction'
     *  Switch: '<S6>/Switch3'
     *  UnitDelay: '<S164>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeTAIR_p_HghRfr = (((look1_iflf_binlca_16a
        (VeUBTR_T_EngCoolantTemp, ((const float32 *)
        &(KxUBTR_T_FedmAirTempVehStopsHUp[0])), ((const float32 *)
        &(KtUBTR_T_FedmAirTempVehStopsHUp[0])), 4U) +
        VeUBTR_T_FedmUHoodAirTempBd) - VeUBTR_T_FedmUHoodAirTempVhStop_new) *
        KeUBTR_K_FedmVehStopHUpRespCoef) + VeUBTR_T_FedmUHoodAirTempVhStop_new;

    /* Outputs for Atomic SubSystem: '<S164>/Limiter' */
    /* Switch: '<S200>/Switch1' incorporates:
     *  Constant: '<S182>/Calib'
     *  RelationalOperator: '<S200>/RelationalOperator'
     *  Switch: '<S164>/Switch2'
     */
    if (KeUBTR_T_MtrC_LPF_MaxLim < rtb_TmpSignalConversionAtVeTAIR_p_HghRfr)
    {
        /* Lookup_n-D: '<S266>/Vector' */
        rtb_TmpSignalConversionAtVeTAIR_p_HghRfr = KeUBTR_T_MtrC_LPF_MaxLim;
    }

    /* End of Switch: '<S200>/Switch1' */

    /* Switch: '<S200>/Switch' incorporates:
     *  Constant: '<S186>/Calib'
     *  RelationalOperator: '<S200>/RelationalOperator1'
     */
    if (rtb_TmpSignalConversionAtVeTAIR_p_HghRfr > KeUBTR_T_MtrC_LPF_MinLim)
    {
        /* Switch: '<S200>/Switch' */
        VeUBTR_T_FedmUHoodAirTempVhStop_new =
            rtb_TmpSignalConversionAtVeTAIR_p_HghRfr;
    }
    else
    {
        /* Switch: '<S200>/Switch' */
        VeUBTR_T_FedmUHoodAirTempVhStop_new = KeUBTR_T_MtrC_LPF_MinLim;
    }

    /* End of Switch: '<S200>/Switch' */
    /* End of Outputs for SubSystem: '<S164>/Limiter' */

    /* Lookup_n-D: '<S197>/Vector' incorporates:
     *  Switch: '<S6>/Switch8'
     */
    VeUBTR_T_FedmUHoodAirTempCoefRun_new = look1_iflf_binlca_16a(VeUBTR_v_VehSpd,
        ((const float32 *)&(KxUBTR_T_FedmUhoodAirTempCoef[0])), ((const float32 *)
        &(KtUBTR_T_FedmUhoodAirTempCoef[0])), 4U);

    /* Lookup_n-D: '<S196>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeTAIR_Pct_RadFanSts'
     *  Switch: '<S6>/Switch8'
     */
    rtb_TmpSignalConversionAtVeTAIR_p_HghRfr = look2_iflf_binlca_16a
        (VeUBTR_v_VehSpd, rtb_TmpSignalConversionAtVeTAIR_Pct_RadF, ((const
           float32 *)&(KxUBTR_T_FedmAirTmpFanSpdAdjMidLoad[0])), ((const float32
           *)&(KyUBTR_T_FedmAirTmpFanSpdAdjMidLoad[0])), ((const float32 *)
          &(KtUBTR_T_FedmAirTmpFanSpdAdjMidLoad[0])), UBTR_ac_ConstP.pooled9, 4U);
    if (VeUBTR_M_EngineTorque >= KeUBTR_K_FanSpeedAdjTrqMid)
    {
        /* Sum: '<S146>/Sum5' incorporates:
         *  Lookup_n-D: '<S194>/Vector'
         *  SignalConversion generated from: '<S1>/VeTAIR_Pct_RadFanSts'
         *  Switch: '<S6>/Switch8'
         */
        rtb_TmpSignalConversionAtVeTAIR_P_AC_Com = look2_iflf_binlca_16a
            (VeUBTR_v_VehSpd, rtb_TmpSignalConversionAtVeTAIR_Pct_RadF, ((const
               float32 *)&(KxUBTR_T_FedmAirTmpFanSpdAdjHighLoad[0])), ((const
               float32 *)&(KyUBTR_T_FedmAirTmpFanSpdAdjHighLoad[0])), ((const
               float32 *)&(KtUBTR_T_FedmAirTmpFanSpdAdjHighLoad[0])),
             UBTR_ac_ConstP.pooled9, 4U) -
            rtb_TmpSignalConversionAtVeTAIR_p_HghRfr;

        /* Sum: '<S146>/Sum7' incorporates:
         *  Constant: '<S168>/Calib'
         */
        rtb_TmpSignalConversionAtBeltTempSaved_R = KeUBTR_K_FanSpeedAdjTrqHigh -
            KeUBTR_K_FanSpeedAdjTrqMid;

        /* Outputs for Atomic SubSystem: '<S146>/ProtectedDivision' */
        /* Switch: '<S198>/Switch1' incorporates:
         *  Constant: '<S198>/ConstantValue'
         *  Constant: '<S198>/ConstantValue1'
         *  Constant: '<S198>/ConstantValue2'
         *  Constant: '<S198>/ConstantValue3'
         *  Logic: '<S198>/AND'
         *  RelationalOperator: '<S198>/GreaterThanorEqual'
         *  RelationalOperator: '<S198>/GreaterThanorEqual1'
         *  RelationalOperator: '<S198>/NotEqual'
         *  RelationalOperator: '<S198>/NotEqual1'
         *  Switch: '<S198>/Switch2'
         *  Switch: '<S198>/Switch3'
         */
        if ((rtb_TmpSignalConversionAtVeTAIR_P_AC_Com != 0.0F) &&
                (rtb_TmpSignalConversionAtBeltTempSaved_R != 0.0F))
        {
            /* Switch: '<S198>/Switch1' incorporates:
             *  Product: '<S198>/Division'
             */
            rtb_TmpSignalConversionAtVeTAIR_P_AC_Com /=
                rtb_TmpSignalConversionAtBeltTempSaved_R;
        }
        else if (rtb_TmpSignalConversionAtVeTAIR_P_AC_Com > 0.0F)
        {
            /* Switch: '<S198>/Switch2' incorporates:
             *  Constant: '<S198>/MAXFLOAT'
             *  Switch: '<S198>/Switch1'
             */
            rtb_TmpSignalConversionAtVeTAIR_P_AC_Com = 3.402823466E+38F;
        }
        else if (rtb_TmpSignalConversionAtVeTAIR_P_AC_Com < 0.0F)
        {
            /* Switch: '<S198>/Switch3' incorporates:
             *  Constant: '<S198>/MINFLOAT'
             *  Switch: '<S198>/Switch1'
             *  Switch: '<S198>/Switch2'
             */
            rtb_TmpSignalConversionAtVeTAIR_P_AC_Com = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S198>/Switch1' incorporates:
             *  Constant: '<S198>/ConstantValue4'
             *  Switch: '<S198>/Switch2'
             *  Switch: '<S198>/Switch3'
             */
            rtb_TmpSignalConversionAtVeTAIR_P_AC_Com = 0.0F;
        }

        /* End of Switch: '<S198>/Switch1' */
        /* End of Outputs for SubSystem: '<S146>/ProtectedDivision' */

        /* Lookup_n-D: '<S248>/Vector' incorporates:
         *  Product: '<S146>/Product1'
         *  Sum: '<S146>/Sum11'
         *  Sum: '<S146>/Sum6'
         */
        rtb_TmpSignalConversionAtVeTAIR_p_HghRfr += (VeUBTR_M_EngineTorque -
            rtb_TmpSignalConversionAtVeTAIR_p_HghRfr) *
            rtb_TmpSignalConversionAtVeTAIR_P_AC_Com;
    }
    else
    {
        /* Sum: '<S146>/Sum8' incorporates:
         *  Lookup_n-D: '<S195>/Vector'
         *  SignalConversion generated from: '<S1>/VeTAIR_Pct_RadFanSts'
         *  Switch: '<S6>/Switch8'
         */
        rtb_TmpSignalConversionAtVeTAIR_P_AC_Com = look2_iflf_binlca_16a
            (VeUBTR_v_VehSpd, rtb_TmpSignalConversionAtVeTAIR_Pct_RadF, ((const
               float32 *)&(KxUBTR_T_FedmAirTmpFanSpdAdjLowLoad[0])), ((const
               float32 *)&(KyUBTR_T_FedmAirTmpFanSpdAdjLowLoad[0])), ((const
               float32 *)&(KtUBTR_T_FedmAirTmpFanSpdAdjLowLoad[0])),
             UBTR_ac_ConstP.pooled9, 4U) -
            rtb_TmpSignalConversionAtVeTAIR_p_HghRfr;

        /* Sum: '<S146>/Sum9' incorporates:
         *  Constant: '<S169>/Calib'
         */
        rtb_TmpSignalConversionAtBeltTempSaved_R = KeUBTR_K_FanSpeedAdjTrqLow -
            KeUBTR_K_FanSpeedAdjTrqMid;

        /* Outputs for Atomic SubSystem: '<S146>/ProtectedDivision1' */
        /* Switch: '<S199>/Switch1' incorporates:
         *  Constant: '<S199>/ConstantValue'
         *  Constant: '<S199>/ConstantValue1'
         *  Constant: '<S199>/ConstantValue2'
         *  Constant: '<S199>/ConstantValue3'
         *  Logic: '<S199>/AND'
         *  RelationalOperator: '<S199>/GreaterThanorEqual'
         *  RelationalOperator: '<S199>/GreaterThanorEqual1'
         *  RelationalOperator: '<S199>/NotEqual'
         *  RelationalOperator: '<S199>/NotEqual1'
         *  Switch: '<S199>/Switch2'
         *  Switch: '<S199>/Switch3'
         */
        if ((rtb_TmpSignalConversionAtVeTAIR_P_AC_Com != 0.0F) &&
                (rtb_TmpSignalConversionAtBeltTempSaved_R != 0.0F))
        {
            /* Switch: '<S199>/Switch1' incorporates:
             *  Product: '<S199>/Division'
             */
            rtb_TmpSignalConversionAtVeTAIR_P_AC_Com /=
                rtb_TmpSignalConversionAtBeltTempSaved_R;
        }
        else if (rtb_TmpSignalConversionAtVeTAIR_P_AC_Com > 0.0F)
        {
            /* Switch: '<S199>/Switch2' incorporates:
             *  Constant: '<S199>/MAXFLOAT'
             *  Switch: '<S199>/Switch1'
             */
            rtb_TmpSignalConversionAtVeTAIR_P_AC_Com = 3.402823466E+38F;
        }
        else if (rtb_TmpSignalConversionAtVeTAIR_P_AC_Com < 0.0F)
        {
            /* Switch: '<S199>/Switch3' incorporates:
             *  Constant: '<S199>/MINFLOAT'
             *  Switch: '<S199>/Switch1'
             *  Switch: '<S199>/Switch2'
             */
            rtb_TmpSignalConversionAtVeTAIR_P_AC_Com = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S199>/Switch1' incorporates:
             *  Constant: '<S199>/ConstantValue4'
             *  Switch: '<S199>/Switch2'
             *  Switch: '<S199>/Switch3'
             */
            rtb_TmpSignalConversionAtVeTAIR_P_AC_Com = 0.0F;
        }

        /* End of Switch: '<S199>/Switch1' */
        /* End of Outputs for SubSystem: '<S146>/ProtectedDivision1' */

        /* Lookup_n-D: '<S248>/Vector' incorporates:
         *  Product: '<S146>/Product5'
         *  Sum: '<S146>/Sum10'
         *  Sum: '<S146>/Sum12'
         */
        rtb_TmpSignalConversionAtVeTAIR_p_HghRfr += (VeUBTR_M_EngineTorque -
            rtb_TmpSignalConversionAtVeTAIR_p_HghRfr) *
            rtb_TmpSignalConversionAtVeTAIR_P_AC_Com;
    }

    /* Product: '<S146>/Product3' incorporates:
     *  Constant: '<S170>/Calib'
     *  Constant: '<S188>/Calib'
     */
    VeUBTR_T_FedmUhoodFanImpact = (rtb_TmpSignalConversionAtVeTAIR_Pct_RadF -
        KeUBTR_n_FedmNominalFanSpeed) * rtb_TmpSignalConversionAtVeTAIR_p_HghRfr;

    /* Sum: '<S167>/Summation' incorporates:
     *  Constant: '<S171>/Calib'
     *  Product: '<S167>/Multiplication'
     *  Sum: '<S167>/Subtraction'
     *  UnitDelay: '<S167>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeTAIR_p_HghRfr = ((VeUBTR_T_FedmUhoodFanImpact -
        VeUBTR_T_FedmUHoodAirTempFan_new) * KeUBTR_K_FedmFanSpdAdjThrmCoeff) +
        VeUBTR_T_FedmUHoodAirTempFan_new;

    /* Outputs for Atomic SubSystem: '<S167>/Limiter' */
    /* Switch: '<S203>/Switch1' incorporates:
     *  Constant: '<S180>/Calib'
     *  RelationalOperator: '<S203>/RelationalOperator'
     *  Switch: '<S167>/Switch2'
     */
    if (KeUBTR_T_MtrC_LPF_MaxLim < rtb_TmpSignalConversionAtVeTAIR_p_HghRfr)
    {
        /* Lookup_n-D: '<S248>/Vector' */
        rtb_TmpSignalConversionAtVeTAIR_p_HghRfr = KeUBTR_T_MtrC_LPF_MaxLim;
    }

    /* End of Switch: '<S203>/Switch1' */

    /* Switch: '<S203>/Switch' incorporates:
     *  Constant: '<S184>/Calib'
     *  RelationalOperator: '<S203>/RelationalOperator1'
     */
    if (rtb_TmpSignalConversionAtVeTAIR_p_HghRfr > KeUBTR_T_MtrC_LPF_MinLim)
    {
        /* Switch: '<S203>/Switch' */
        VeUBTR_T_FedmUHoodAirTempFan_new =
            rtb_TmpSignalConversionAtVeTAIR_p_HghRfr;
    }
    else
    {
        /* Switch: '<S203>/Switch' */
        VeUBTR_T_FedmUHoodAirTempFan_new = KeUBTR_T_MtrC_LPF_MinLim;
    }

    /* End of Switch: '<S203>/Switch' */
    /* End of Outputs for SubSystem: '<S167>/Limiter' */

    /* Lookup_n-D: '<S190>/Vector' incorporates:
     *  Switch: '<S6>/Switch5'
     *  Switch: '<S6>/Switch8'
     */
    VeUBTR_T_FedmUnderhoodAirTempAGS_new = look2_iflf_binlca_16a(VeUBTR_v_VehSpd,
        VeUBTR_Pct_AGS_CurrPos, ((const float32 *)&(KxUBTR_T_FedmAirTempAgsFac[0])),
        ((const float32 *)&(KyUBTR_T_FedmAirTempAgsFac[0])), ((const float32 *)
        &(KtUBTR_T_FedmAirTempAgsFac[0])), UBTR_ac_ConstP.pooled11, 5U);

    /* Lookup_n-D: '<S189>/Vector' incorporates:
     *  Switch: '<S6>/Switch6'
     *  Switch: '<S6>/Switch8'
     */
    VeUBTR_T_FedmUnderhoodAirTempAAD_new = look2_iflf_binlca_16a(VeUBTR_v_VehSpd,
        VeUBTR_Pct_AadPos, ((const float32 *)&(KxUBTR_T_FedmAirTempAadFac[0])),
        ((const float32 *)&(KyUBTR_T_FedmAirTempAadFac[0])), ((const float32 *)
        &(KtUBTR_T_FedmAirTempAadFac[0])), UBTR_ac_ConstP.pooled11, 5U);

    /* Product: '<S146>/Product' incorporates:
     *  Switch: '<S6>/Switch13'
     *  Switch: '<S6>/Switch8'
     */
    VeUBTR_T_FedmUHoodAirTempSSRun_new = ((look2_iflf_binlca_16a(VeUBTR_v_VehSpd,
        VeUBTR_T_EngineOilTemp, ((const float32 *)&(KxUBTR_T_FedmAirTempNominal
        [0])), ((const float32 *)&(KyUBTR_T_FedmAirTempNominal[0])), ((const
        float32 *)&(KtUBTR_T_FedmAirTempNominal[0])), UBTR_ac_ConstP.pooled12,
        3U) + VeUBTR_T_FedmUHoodAirTempFan_new) *
        VeUBTR_T_FedmUnderhoodAirTempAGS_new) *
        VeUBTR_T_FedmUnderhoodAirTempAAD_new;

    /* Lookup_n-D: '<S266>/Vector' incorporates:
     *  UnitDelay: '<S165>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeTAIR_p_HghRfr = UBTR_ac_DW.UnitDelay_DSTATE_ah;

    /* Sum: '<S165>/Summation' incorporates:
     *  Product: '<S165>/Multiplication'
     *  Sum: '<S165>/Subtraction'
     */
    rtb_TmpSignalConversionAtVeTAIR_p_HghRfr +=
        (VeUBTR_T_FedmUHoodAirTempSSRun_new -
         rtb_TmpSignalConversionAtVeTAIR_p_HghRfr) *
        VeUBTR_T_FedmUHoodAirTempCoefRun_new;

    /* Outputs for Atomic SubSystem: '<S165>/Limiter' */
    /* Switch: '<S201>/Switch1' incorporates:
     *  Constant: '<S181>/Calib'
     *  RelationalOperator: '<S201>/RelationalOperator'
     *  Switch: '<S165>/Switch2'
     */
    if (KeUBTR_T_MtrC_LPF_MaxLim < rtb_TmpSignalConversionAtVeTAIR_p_HghRfr)
    {
        /* Lookup_n-D: '<S266>/Vector' */
        rtb_TmpSignalConversionAtVeTAIR_p_HghRfr = KeUBTR_T_MtrC_LPF_MaxLim;
    }

    /* End of Switch: '<S201>/Switch1' */

    /* Switch: '<S201>/Switch' incorporates:
     *  Constant: '<S185>/Calib'
     *  RelationalOperator: '<S201>/RelationalOperator1'
     */
    if (rtb_TmpSignalConversionAtVeTAIR_p_HghRfr > KeUBTR_T_MtrC_LPF_MinLim)
    {
        /* Switch: '<S201>/Switch' */
        VeUBTR_T_FedmUHoodAirTempRun_new =
            rtb_TmpSignalConversionAtVeTAIR_p_HghRfr;
    }
    else
    {
        /* Switch: '<S201>/Switch' */
        VeUBTR_T_FedmUHoodAirTempRun_new = KeUBTR_T_MtrC_LPF_MinLim;
    }

    /* End of Switch: '<S201>/Switch' */
    /* End of Outputs for SubSystem: '<S165>/Limiter' */

    /* Update for UnitDelay: '<S165>/UnitDelay' */
    UBTR_ac_DW.UnitDelay_DSTATE_ah = VeUBTR_T_FedmUHoodAirTempRun_new;

    /* Sum: '<S166>/Summation' incorporates:
     *  Constant: '<S172>/Calib'
     *  Product: '<S166>/Multiplication'
     *  Sum: '<S166>/Subtraction'
     *  Switch: '<S6>/Switch7'
     *  UnitDelay: '<S166>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeTAIR_p_HghRfr = (((look1_iflf_binlca_16a
        (VeUBTR_T_FedmExhSurf, ((const float32 *)
        &(KxUBTR_T_FedmAirTempFanStopHUp[0])), ((const float32 *)
        &(KtUBTR_T_FedmAirTempFanStopHUp[0])), 4U) + VeUBTR_T_FedmUHoodAirTempBd)
        - VeUBTR_T_FedmUHoodAirTempFnStop_new) * KeUBTR_K_FedmFanStopHUpRespCoef)
        + VeUBTR_T_FedmUHoodAirTempFnStop_new;

    /* Outputs for Atomic SubSystem: '<S166>/Limiter' */
    /* Switch: '<S202>/Switch1' incorporates:
     *  Constant: '<S183>/Calib'
     *  RelationalOperator: '<S202>/RelationalOperator'
     *  Switch: '<S166>/Switch2'
     */
    if (KeUBTR_T_MtrC_LPF_MaxLim < rtb_TmpSignalConversionAtVeTAIR_p_HghRfr)
    {
        /* Lookup_n-D: '<S266>/Vector' */
        rtb_TmpSignalConversionAtVeTAIR_p_HghRfr = KeUBTR_T_MtrC_LPF_MaxLim;
    }

    /* End of Switch: '<S202>/Switch1' */

    /* Switch: '<S202>/Switch' incorporates:
     *  Constant: '<S187>/Calib'
     *  RelationalOperator: '<S202>/RelationalOperator1'
     */
    if (rtb_TmpSignalConversionAtVeTAIR_p_HghRfr > KeUBTR_T_MtrC_LPF_MinLim)
    {
        /* Switch: '<S202>/Switch' */
        VeUBTR_T_FedmUHoodAirTempFnStop_new =
            rtb_TmpSignalConversionAtVeTAIR_p_HghRfr;
    }
    else
    {
        /* Switch: '<S202>/Switch' */
        VeUBTR_T_FedmUHoodAirTempFnStop_new = KeUBTR_T_MtrC_LPF_MinLim;
    }

    /* End of Switch: '<S202>/Switch' */
    /* End of Outputs for SubSystem: '<S166>/Limiter' */
    if (VeUBTR_v_VehSpd >= KeUBTR_K_FedmUhoodVehSpdTrh)
    {
        UBTR_ac_DW.UnitDelay_DSTATE = VeUBTR_T_FedmUHoodAirTempRun_new;
    }
    else if (rtb_TmpSignalConversionAtVeTAIR_Pct_RadF >
             KeUBTR_K_FedmUhoodFanSpdTrh)
    {
        /* Switch: '<S146>/Switch7' */
        UBTR_ac_DW.UnitDelay_DSTATE = VeUBTR_T_FedmUHoodAirTempVhStop_new;
    }
    else
    {
        UBTR_ac_DW.UnitDelay_DSTATE = VeUBTR_T_FedmUHoodAirTempFnStop_new;
    }

    /* UnitDelay: '<S147>/UnitDelay' incorporates:
     *  Constant: '<S173>/Calib'
     *  Constant: '<S174>/Calib'
     *  RelationalOperator: '<S146>/RelationalOperator3'
     *  Switch: '<S146>/Switch7'
     */
    VeUBTR_T_GenUHoodAirTempBd = UBTR_ac_DW.UnitDelay_DSTATE_o;

    /* Sum: '<S204>/Summation' incorporates:
     *  Constant: '<S213>/Calib'
     *  Product: '<S204>/Multiplication'
     *  Sum: '<S204>/Subtraction'
     *  Switch: '<S6>/Switch3'
     *  UnitDelay: '<S204>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeTAIR_p_HghRfr = (((look1_iflf_binlca_16a
        (VeUBTR_T_EngCoolantTemp, ((const float32 *)
        &(KxUBTR_K_GenAitTempVehStopHUp[0])), ((const float32 *)
        &(KtUBTR_K_GenAitTempVehStopHUp[0])), 4U) + VeUBTR_T_GenUHoodAirTempBd)
        - VeUBTR_T_GenUHoodAirTempVhStop_new) * KeUBTR_K_GenUHoodVehStopAlpha) +
        VeUBTR_T_GenUHoodAirTempVhStop_new;

    /* Outputs for Atomic SubSystem: '<S204>/Limiter' */
    /* Switch: '<S240>/Switch1' incorporates:
     *  Constant: '<S221>/Calib'
     *  RelationalOperator: '<S240>/RelationalOperator'
     *  Switch: '<S204>/Switch2'
     */
    if (KeUBTR_T_MtrA_LPF_MaxLim < rtb_TmpSignalConversionAtVeTAIR_p_HghRfr)
    {
        /* Lookup_n-D: '<S266>/Vector' */
        rtb_TmpSignalConversionAtVeTAIR_p_HghRfr = KeUBTR_T_MtrA_LPF_MaxLim;
    }

    /* End of Switch: '<S240>/Switch1' */

    /* Switch: '<S240>/Switch' incorporates:
     *  Constant: '<S225>/Calib'
     *  RelationalOperator: '<S240>/RelationalOperator1'
     */
    if (rtb_TmpSignalConversionAtVeTAIR_p_HghRfr > KeUBTR_T_MtrA_LPF_MinLim)
    {
        /* Switch: '<S240>/Switch' */
        VeUBTR_T_GenUHoodAirTempVhStop_new =
            rtb_TmpSignalConversionAtVeTAIR_p_HghRfr;
    }
    else
    {
        /* Switch: '<S240>/Switch' */
        VeUBTR_T_GenUHoodAirTempVhStop_new = KeUBTR_T_MtrA_LPF_MinLim;
    }

    /* End of Switch: '<S240>/Switch' */
    /* End of Outputs for SubSystem: '<S204>/Limiter' */

    /* Lookup_n-D: '<S237>/Vector' incorporates:
     *  Switch: '<S6>/Switch8'
     */
    VeUBTR_T_GenUHoodAirTempRunCoef_new = look1_iflf_binlca_16a(VeUBTR_v_VehSpd,
        ((const float32 *)&(KxUBTR_k_GenUHoodAirTempCoef[0])), ((const float32 *)
        &(KtUBTR_k_GenUHoodAirTempCoef[0])), 4U);

    /* Lookup_n-D: '<S235>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeTAIR_Pct_RadFanSts'
     *  Switch: '<S6>/Switch8'
     */
    rtb_TmpSignalConversionAtVeTAIR_p_HghRfr = look2_iflf_binlca_16a
        (VeUBTR_v_VehSpd, rtb_TmpSignalConversionAtVeTAIR_Pct_RadF, ((const
           float32 *)&(KxUBTR_T_GenAirFanSpeedMidLoad[0])), ((const float32 *)
          &(KyUBTR_T_GenAirFanSpeedMidLoad[0])), ((const float32 *)
          &(KtUBTR_T_GenAirFanSpeedMidLoad[0])), UBTR_ac_ConstP.pooled9, 4U);
    if (VeUBTR_M_EngineTorque >= KeUBTR_K_FanSpeedAdjTrqMid)
    {
        /* Sum: '<S147>/Sum5' incorporates:
         *  Lookup_n-D: '<S233>/Vector'
         *  SignalConversion generated from: '<S1>/VeTAIR_Pct_RadFanSts'
         *  Switch: '<S6>/Switch8'
         */
        rtb_TmpSignalConversionAtVeTAIR_P_AC_Com = look2_iflf_binlca_16a
            (VeUBTR_v_VehSpd, rtb_TmpSignalConversionAtVeTAIR_Pct_RadF, ((const
               float32 *)&(KxUBTR_T_GenAirFanSpeedAdjHighLoad[0])), ((const
               float32 *)&(KyUBTR_T_GenAirFanSpeedAdjHighLoad[0])), ((const
               float32 *)&(KtUBTR_T_GenAirFanSpeedAdjHighLoad[0])),
             UBTR_ac_ConstP.pooled9, 4U) -
            rtb_TmpSignalConversionAtVeTAIR_p_HghRfr;

        /* Sum: '<S147>/Sum7' incorporates:
         *  Constant: '<S208>/Calib'
         */
        rtb_TmpSignalConversionAtBeltTempSaved_R = KeUBTR_K_FanSpeedAdjTrqHigh -
            KeUBTR_K_FanSpeedAdjTrqMid;

        /* Outputs for Atomic SubSystem: '<S147>/ProtectedDivision' */
        /* Switch: '<S238>/Switch1' incorporates:
         *  Constant: '<S238>/ConstantValue'
         *  Constant: '<S238>/ConstantValue1'
         *  Constant: '<S238>/ConstantValue2'
         *  Constant: '<S238>/ConstantValue3'
         *  Logic: '<S238>/AND'
         *  RelationalOperator: '<S238>/GreaterThanorEqual'
         *  RelationalOperator: '<S238>/GreaterThanorEqual1'
         *  RelationalOperator: '<S238>/NotEqual'
         *  RelationalOperator: '<S238>/NotEqual1'
         *  Switch: '<S238>/Switch2'
         *  Switch: '<S238>/Switch3'
         */
        if ((rtb_TmpSignalConversionAtVeTAIR_P_AC_Com != 0.0F) &&
                (rtb_TmpSignalConversionAtBeltTempSaved_R != 0.0F))
        {
            /* Switch: '<S238>/Switch1' incorporates:
             *  Product: '<S238>/Division'
             */
            rtb_TmpSignalConversionAtVeTAIR_P_AC_Com /=
                rtb_TmpSignalConversionAtBeltTempSaved_R;
        }
        else if (rtb_TmpSignalConversionAtVeTAIR_P_AC_Com > 0.0F)
        {
            /* Switch: '<S238>/Switch2' incorporates:
             *  Constant: '<S238>/MAXFLOAT'
             *  Switch: '<S238>/Switch1'
             */
            rtb_TmpSignalConversionAtVeTAIR_P_AC_Com = 3.402823466E+38F;
        }
        else if (rtb_TmpSignalConversionAtVeTAIR_P_AC_Com < 0.0F)
        {
            /* Switch: '<S238>/Switch3' incorporates:
             *  Constant: '<S238>/MINFLOAT'
             *  Switch: '<S238>/Switch1'
             *  Switch: '<S238>/Switch2'
             */
            rtb_TmpSignalConversionAtVeTAIR_P_AC_Com = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S238>/Switch1' incorporates:
             *  Constant: '<S238>/ConstantValue4'
             *  Switch: '<S238>/Switch2'
             *  Switch: '<S238>/Switch3'
             */
            rtb_TmpSignalConversionAtVeTAIR_P_AC_Com = 0.0F;
        }

        /* End of Switch: '<S238>/Switch1' */
        /* End of Outputs for SubSystem: '<S147>/ProtectedDivision' */

        /* Lookup_n-D: '<S248>/Vector' incorporates:
         *  Product: '<S147>/Product1'
         *  Sum: '<S147>/Sum11'
         *  Sum: '<S147>/Sum6'
         */
        rtb_TmpSignalConversionAtVeTAIR_p_HghRfr += (VeUBTR_M_EngineTorque -
            rtb_TmpSignalConversionAtVeTAIR_p_HghRfr) *
            rtb_TmpSignalConversionAtVeTAIR_P_AC_Com;
    }
    else
    {
        /* Sum: '<S147>/Sum8' incorporates:
         *  Lookup_n-D: '<S234>/Vector'
         *  SignalConversion generated from: '<S1>/VeTAIR_Pct_RadFanSts'
         *  Switch: '<S6>/Switch8'
         */
        rtb_TmpSignalConversionAtVeTAIR_P_AC_Com = look2_iflf_binlca_16a
            (VeUBTR_v_VehSpd, rtb_TmpSignalConversionAtVeTAIR_Pct_RadF, ((const
               float32 *)&(KxUBTR_T_GenAirFanSpeedAdjLowLoad[0])), ((const
               float32 *)&(KyUBTR_T_GenAirFanSpeedAdjLowLoad[0])), ((const
               float32 *)&(KtUBTR_T_GenAirFanSpeedAdjLowLoad[0])),
             UBTR_ac_ConstP.pooled9, 4U) -
            rtb_TmpSignalConversionAtVeTAIR_p_HghRfr;

        /* Sum: '<S147>/Sum9' incorporates:
         *  Constant: '<S209>/Calib'
         */
        rtb_TmpSignalConversionAtBeltTempSaved_R = KeUBTR_K_FanSpeedAdjTrqLow -
            KeUBTR_K_FanSpeedAdjTrqMid;

        /* Outputs for Atomic SubSystem: '<S147>/ProtectedDivision1' */
        /* Switch: '<S239>/Switch1' incorporates:
         *  Constant: '<S239>/ConstantValue'
         *  Constant: '<S239>/ConstantValue1'
         *  Constant: '<S239>/ConstantValue2'
         *  Constant: '<S239>/ConstantValue3'
         *  Logic: '<S239>/AND'
         *  RelationalOperator: '<S239>/GreaterThanorEqual'
         *  RelationalOperator: '<S239>/GreaterThanorEqual1'
         *  RelationalOperator: '<S239>/NotEqual'
         *  RelationalOperator: '<S239>/NotEqual1'
         *  Switch: '<S239>/Switch2'
         *  Switch: '<S239>/Switch3'
         */
        if ((rtb_TmpSignalConversionAtVeTAIR_P_AC_Com != 0.0F) &&
                (rtb_TmpSignalConversionAtBeltTempSaved_R != 0.0F))
        {
            /* Switch: '<S239>/Switch1' incorporates:
             *  Product: '<S239>/Division'
             */
            rtb_TmpSignalConversionAtVeTAIR_P_AC_Com /=
                rtb_TmpSignalConversionAtBeltTempSaved_R;
        }
        else if (rtb_TmpSignalConversionAtVeTAIR_P_AC_Com > 0.0F)
        {
            /* Switch: '<S239>/Switch2' incorporates:
             *  Constant: '<S239>/MAXFLOAT'
             *  Switch: '<S239>/Switch1'
             */
            rtb_TmpSignalConversionAtVeTAIR_P_AC_Com = 3.402823466E+38F;
        }
        else if (rtb_TmpSignalConversionAtVeTAIR_P_AC_Com < 0.0F)
        {
            /* Switch: '<S239>/Switch3' incorporates:
             *  Constant: '<S239>/MINFLOAT'
             *  Switch: '<S239>/Switch1'
             *  Switch: '<S239>/Switch2'
             */
            rtb_TmpSignalConversionAtVeTAIR_P_AC_Com = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S239>/Switch1' incorporates:
             *  Constant: '<S239>/ConstantValue4'
             *  Switch: '<S239>/Switch2'
             *  Switch: '<S239>/Switch3'
             */
            rtb_TmpSignalConversionAtVeTAIR_P_AC_Com = 0.0F;
        }

        /* End of Switch: '<S239>/Switch1' */
        /* End of Outputs for SubSystem: '<S147>/ProtectedDivision1' */

        /* Lookup_n-D: '<S248>/Vector' incorporates:
         *  Product: '<S147>/Product2'
         *  Sum: '<S147>/Sum10'
         *  Sum: '<S147>/Sum12'
         */
        rtb_TmpSignalConversionAtVeTAIR_p_HghRfr += (VeUBTR_M_EngineTorque -
            rtb_TmpSignalConversionAtVeTAIR_p_HghRfr) *
            rtb_TmpSignalConversionAtVeTAIR_P_AC_Com;
    }

    /* Product: '<S147>/Product3' incorporates:
     *  Constant: '<S210>/Calib'
     *  Constant: '<S228>/Calib'
     */
    VeUBTR_T_GenUhoodFanImpact = (rtb_TmpSignalConversionAtVeTAIR_Pct_RadF -
        KeUBTR_n_GenNominalFanSpeed) * rtb_TmpSignalConversionAtVeTAIR_p_HghRfr;

    /* Sum: '<S207>/Summation' incorporates:
     *  Constant: '<S211>/Calib'
     *  Product: '<S207>/Multiplication'
     *  Sum: '<S207>/Subtraction'
     *  UnitDelay: '<S207>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeTAIR_p_HghRfr = ((VeUBTR_T_GenUhoodFanImpact -
        UBTR_ac_DW.UnitDelay_DSTATE_g) * KeUBTR_K_GenFanSpdAdjThrmlCoeff) +
        UBTR_ac_DW.UnitDelay_DSTATE_g;

    /* Outputs for Atomic SubSystem: '<S207>/Limiter' */
    /* Switch: '<S243>/Switch1' incorporates:
     *  Constant: '<S223>/Calib'
     *  RelationalOperator: '<S243>/RelationalOperator'
     *  Switch: '<S207>/Switch2'
     */
    if (KeUBTR_T_MtrA_LPF_MaxLim < rtb_TmpSignalConversionAtVeTAIR_p_HghRfr)
    {
        /* Lookup_n-D: '<S248>/Vector' */
        rtb_TmpSignalConversionAtVeTAIR_p_HghRfr = KeUBTR_T_MtrA_LPF_MaxLim;
    }

    /* End of Switch: '<S243>/Switch1' */

    /* Switch: '<S243>/Switch' incorporates:
     *  Constant: '<S227>/Calib'
     *  RelationalOperator: '<S243>/RelationalOperator1'
     *  UnitDelay: '<S207>/UnitDelay'
     */
    if (rtb_TmpSignalConversionAtVeTAIR_p_HghRfr > KeUBTR_T_MtrA_LPF_MinLim)
    {
        UBTR_ac_DW.UnitDelay_DSTATE_g = rtb_TmpSignalConversionAtVeTAIR_p_HghRfr;
    }
    else
    {
        UBTR_ac_DW.UnitDelay_DSTATE_g = KeUBTR_T_MtrA_LPF_MinLim;
    }

    /* End of Switch: '<S243>/Switch' */
    /* End of Outputs for SubSystem: '<S207>/Limiter' */

    /* Lookup_n-D: '<S230>/Vector' incorporates:
     *  Switch: '<S6>/Switch5'
     *  Switch: '<S6>/Switch8'
     */
    VeUBTR_T_GenUnderhoodAirTempAGS_new = look2_iflf_binlca_16a(VeUBTR_v_VehSpd,
        VeUBTR_Pct_AGS_CurrPos, ((const float32 *)&(KxUBTR_K_GenAirTempAgsFac[0])),
        ((const float32 *)&(KyUBTR_K_GenAirTempAgsFac[0])), ((const float32 *)
        &(KtUBTR_K_GenAirTempAgsFac[0])), UBTR_ac_ConstP.pooled11, 5U);

    /* Lookup_n-D: '<S229>/Vector' incorporates:
     *  Switch: '<S6>/Switch6'
     *  Switch: '<S6>/Switch8'
     */
    VeUBTR_T_GenUnderhoodAirTempAAD_new = look2_iflf_binlca_16a(VeUBTR_v_VehSpd,
        VeUBTR_Pct_AadPos, ((const float32 *)&(KxUBTR_K_GenAirTempAADFactor[0])),
        ((const float32 *)&(KyUBTR_K_GenAirTempAADFactor[0])), ((const float32 *)
        &(KtUBTR_K_GenAirTempAADFactor[0])), UBTR_ac_ConstP.pooled11, 5U);

    /* Product: '<S147>/Product' incorporates:
     *  Switch: '<S6>/Switch13'
     *  Switch: '<S6>/Switch8'
     *  UnitDelay: '<S207>/UnitDelay'
     */
    VeUBTR_T_GenUHoodAirTempSSRun_new = ((look2_iflf_binlca_16a(VeUBTR_v_VehSpd,
        VeUBTR_T_EngineOilTemp, ((const float32 *)&(KxUBTR_T_GenAirNorminal[0])),
        ((const float32 *)&(KyUBTR_T_GenAirNorminal[0])), ((const float32 *)
        &(KtUBTR_T_GenAirNorminal[0])), UBTR_ac_ConstP.pooled12, 3U) +
        UBTR_ac_DW.UnitDelay_DSTATE_g) * VeUBTR_T_GenUnderhoodAirTempAGS_new) *
        VeUBTR_T_GenUnderhoodAirTempAAD_new;

    /* Lookup_n-D: '<S266>/Vector' incorporates:
     *  UnitDelay: '<S205>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeTAIR_p_HghRfr = UBTR_ac_DW.UnitDelay_DSTATE_b;

    /* Sum: '<S205>/Summation' incorporates:
     *  Product: '<S205>/Multiplication'
     *  Sum: '<S205>/Subtraction'
     */
    rtb_TmpSignalConversionAtVeTAIR_p_HghRfr +=
        (VeUBTR_T_GenUHoodAirTempSSRun_new -
         rtb_TmpSignalConversionAtVeTAIR_p_HghRfr) *
        VeUBTR_T_GenUHoodAirTempRunCoef_new;

    /* Outputs for Atomic SubSystem: '<S205>/Limiter' */
    /* Switch: '<S241>/Switch1' incorporates:
     *  Constant: '<S220>/Calib'
     *  RelationalOperator: '<S241>/RelationalOperator'
     *  Switch: '<S205>/Switch2'
     */
    if (KeUBTR_T_MtrA_LPF_MaxLim < rtb_TmpSignalConversionAtVeTAIR_p_HghRfr)
    {
        /* Lookup_n-D: '<S266>/Vector' */
        rtb_TmpSignalConversionAtVeTAIR_p_HghRfr = KeUBTR_T_MtrA_LPF_MaxLim;
    }

    /* End of Switch: '<S241>/Switch1' */

    /* Switch: '<S241>/Switch' incorporates:
     *  Constant: '<S224>/Calib'
     *  RelationalOperator: '<S241>/RelationalOperator1'
     */
    if (rtb_TmpSignalConversionAtVeTAIR_p_HghRfr > KeUBTR_T_MtrA_LPF_MinLim)
    {
        /* Switch: '<S241>/Switch' */
        VeUBTR_T_GenUHoodAirTempRun_new =
            rtb_TmpSignalConversionAtVeTAIR_p_HghRfr;
    }
    else
    {
        /* Switch: '<S241>/Switch' */
        VeUBTR_T_GenUHoodAirTempRun_new = KeUBTR_T_MtrA_LPF_MinLim;
    }

    /* End of Switch: '<S241>/Switch' */
    /* End of Outputs for SubSystem: '<S205>/Limiter' */

    /* Update for UnitDelay: '<S205>/UnitDelay' */
    UBTR_ac_DW.UnitDelay_DSTATE_b = VeUBTR_T_GenUHoodAirTempRun_new;

    /* Sum: '<S206>/Summation' incorporates:
     *  Constant: '<S212>/Calib'
     *  Product: '<S206>/Multiplication'
     *  Sum: '<S206>/Subtraction'
     *  Switch: '<S6>/Switch10'
     *  UnitDelay: '<S206>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeTAIR_p_HghRfr = (((look1_iflf_binlca_16a
        (VeUBTR_T_GenExhSurf, ((const float32 *)&(KxUBTR_K_GenAirTempFanStopHUp
        [0])), ((const float32 *)&(KtUBTR_K_GenAirTempFanStopHUp[0])), 4U) +
        VeUBTR_T_GenUHoodAirTempBd) - VeUBTR_T_GenUHoodAirTempFnStop_new) *
        KeUBTR_K_GenUHoodFanStopAlpha) + VeUBTR_T_GenUHoodAirTempFnStop_new;

    /* Outputs for Atomic SubSystem: '<S206>/Limiter' */
    /* Switch: '<S242>/Switch1' incorporates:
     *  Constant: '<S222>/Calib'
     *  RelationalOperator: '<S242>/RelationalOperator'
     *  Switch: '<S206>/Switch2'
     */
    if (KeUBTR_T_MtrA_LPF_MaxLim < rtb_TmpSignalConversionAtVeTAIR_p_HghRfr)
    {
        /* Lookup_n-D: '<S266>/Vector' */
        rtb_TmpSignalConversionAtVeTAIR_p_HghRfr = KeUBTR_T_MtrA_LPF_MaxLim;
    }

    /* End of Switch: '<S242>/Switch1' */

    /* Switch: '<S242>/Switch' incorporates:
     *  Constant: '<S226>/Calib'
     *  RelationalOperator: '<S242>/RelationalOperator1'
     */
    if (rtb_TmpSignalConversionAtVeTAIR_p_HghRfr > KeUBTR_T_MtrA_LPF_MinLim)
    {
        /* Switch: '<S242>/Switch' */
        VeUBTR_T_GenUHoodAirTempFnStop_new =
            rtb_TmpSignalConversionAtVeTAIR_p_HghRfr;
    }
    else
    {
        /* Switch: '<S242>/Switch' */
        VeUBTR_T_GenUHoodAirTempFnStop_new = KeUBTR_T_MtrA_LPF_MinLim;
    }

    /* End of Switch: '<S242>/Switch' */
    /* End of Outputs for SubSystem: '<S206>/Limiter' */
    if (VeUBTR_v_VehSpd >= KeUBTR_K_GenUhoodVehSpdTrh)
    {
        UBTR_ac_DW.UnitDelay_DSTATE_o = VeUBTR_T_GenUHoodAirTempRun_new;
    }
    else if (rtb_TmpSignalConversionAtVeTAIR_Pct_RadF >
             KeUBTR_K_GenUhoodFanSpdTrh)
    {
        /* Switch: '<S147>/Switch7' */
        UBTR_ac_DW.UnitDelay_DSTATE_o = VeUBTR_T_GenUHoodAirTempVhStop_new;
    }
    else
    {
        UBTR_ac_DW.UnitDelay_DSTATE_o = VeUBTR_T_GenUHoodAirTempFnStop_new;
    }

    /* End of Outputs for SubSystem: '<S146>/DigitalLowpassResetEnabled1' */
    /* End of Outputs for SubSystem: '<S146>/DigitalLowpassResetEnabled4' */
    /* End of Outputs for SubSystem: '<S146>/DigitalLowpassResetEnabled2' */
    /* End of Outputs for SubSystem: '<S146>/DigitalLowpassResetEnabled3' */
    /* End of Outputs for SubSystem: '<S147>/DigitalLowpassResetEnabled1' */
    /* End of Outputs for SubSystem: '<S147>/DigitalLowpassResetEnabled4' */
    /* End of Outputs for SubSystem: '<S147>/DigitalLowpassResetEnabled2' */
    /* End of Outputs for SubSystem: '<S147>/DigitalLowpassResetEnabled3' */
#endif

    /* End of Lookup_n-D: '<S193>/Vector' */

    /* Lookup_n-D: '<S252>/Vector' incorporates:
     *  Lookup_n-D: '<S248>/Vector'
     *  Lookup_n-D: '<S249>/Vector'
     *  Lookup_n-D: '<S250>/Vector'
     *  Lookup_n-D: '<S251>/Vector'
     *  Product: '<S152>/Product'
     *  Sum: '<S152>/Sum3'
     */
#if Rte_SysCon_Variant_UBTR_6

    /* Outputs for Atomic SubSystem: '<S152>/DigitalLowpassResetEnabled1' */
    /* Lookup_n-D: '<S251>/Vector' incorporates:
     *  Switch: '<S6>/Switch5'
     *  Switch: '<S6>/Switch8'
     */
    VeUBTR_T_RedmUnderhoodAirTempAGS_new = look2_iflf_binlca_16a(VeUBTR_v_VehSpd,
        VeUBTR_Pct_AGS_CurrPos, ((const float32 *)
        &(KxUBTR_T_RedmAitTmpAgsFactor[0])), ((const float32 *)
        &(KyUBTR_T_RedmAitTmpAgsFactor[0])), ((const float32 *)
        &(KtUBTR_T_RedmAitTmpAgsFactor[0])), UBTR_ac_ConstP.pooled11, 5U);

    /* Lookup_n-D: '<S250>/Vector' incorporates:
     *  Switch: '<S6>/Switch6'
     *  Switch: '<S6>/Switch8'
     */
    VeUBTR_T_RedmUnderhoodAirTempAAD_new = look2_iflf_binlca_16a(VeUBTR_v_VehSpd,
        VeUBTR_Pct_AadPos, ((const float32 *)&(KxUBTR_T_RedmAitTmpAadFactor[0])),
        ((const float32 *)&(KyUBTR_T_RedmAitTmpAadFactor[0])), ((const float32 *)
        &(KtUBTR_T_RedmAitTmpAadFactor[0])), UBTR_ac_ConstP.pooled11, 5U);

    /* Sum: '<S244>/Summation' incorporates:
     *  Product: '<S244>/Multiplication'
     *  SignalConversion generated from: '<S1>/VeAATR_T_EstAmbAirTemp'
     *  SignalConversion generated from: '<S1>/VeTAIR_Pct_RadFanSts'
     *  SignalConversion generated from: '<S1>/VeTMIR_T_OnBrdChrg_ClntTmpIn'
     *  Sum: '<S244>/Subtraction'
     *  Switch: '<S6>/Switch8'
     *  UnitDelay: '<S244>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeTAIR_p_HghRfr = (((((look2_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeAATR_T_EstAmb,
         rtb_TmpSignalConversionAtVeTMIR_T_OnBrdC, ((const float32 *)
        &(KxUBTR_T_RedmAirTempAmbLTRAdj[0])), ((const float32 *)
        &(KyUBTR_T_RedmAirTempAmbLTRAdj[0])), ((const float32 *)
        &(KtUBTR_T_RedmAirTempAmbLTRAdj[0])), UBTR_ac_ConstP.pooled10, 5U) +
        look2_iflf_binlca_16a(rtb_TmpSignalConversionAtVeAATR_T_EstAmb,
        rtb_TmpSignalConversionAtVeTAIR_Pct_RadF, ((const float32 *)
        &(KxUBTR_T_RedmAirTempAmbFanSpdAdj[0])), ((const float32 *)
        &(KyUBTR_T_RedmAirTempAmbFanSpdAdj[0])), ((const float32 *)
        &(KtUBTR_T_RedmAirTempAmbFanSpdAdj[0])), UBTR_ac_ConstP.pooled11, 5U)) *
        VeUBTR_T_RedmUnderhoodAirTempAGS_new) *
        VeUBTR_T_RedmUnderhoodAirTempAAD_new) - UBTR_ac_DW.UnitDelay_DSTATE_n) *
        look1_iflf_binlca_16a(VeUBTR_v_VehSpd, ((const float32 *)
        &(KxUBTR_T_RedmUhoodAirTempCoef[0])), ((const float32 *)
        &(KtUBTR_T_RedmUhoodAirTempCoef[0])), 4U)) +
        UBTR_ac_DW.UnitDelay_DSTATE_n;

    /* Outputs for Atomic SubSystem: '<S244>/Limiter' */
    /* Switch: '<S253>/Switch1' incorporates:
     *  Constant: '<S246>/Calib'
     *  RelationalOperator: '<S253>/RelationalOperator'
     *  Switch: '<S244>/Switch2'
     */
    if (KeUBTR_T_MtrB_LPF_MaxLim < rtb_TmpSignalConversionAtVeTAIR_p_HghRfr)
    {
        /* Lookup_n-D: '<S266>/Vector' */
        rtb_TmpSignalConversionAtVeTAIR_p_HghRfr = KeUBTR_T_MtrB_LPF_MaxLim;
    }

    /* End of Switch: '<S253>/Switch1' */

    /* Switch: '<S253>/Switch' incorporates:
     *  Constant: '<S247>/Calib'
     *  RelationalOperator: '<S253>/RelationalOperator1'
     *  UnitDelay: '<S244>/UnitDelay'
     */
    if (rtb_TmpSignalConversionAtVeTAIR_p_HghRfr > KeUBTR_T_MtrB_LPF_MinLim)
    {
        UBTR_ac_DW.UnitDelay_DSTATE_n = rtb_TmpSignalConversionAtVeTAIR_p_HghRfr;
    }
    else
    {
        UBTR_ac_DW.UnitDelay_DSTATE_n = KeUBTR_T_MtrB_LPF_MinLim;
    }

    /* End of Switch: '<S253>/Switch' */
    /* End of Outputs for SubSystem: '<S244>/Limiter' */
    /* End of Outputs for SubSystem: '<S152>/DigitalLowpassResetEnabled1' */
#endif

    /* End of Lookup_n-D: '<S252>/Vector' */

    /* Lookup_n-D: '<S267>/Vector' incorporates:
     *  Lookup_n-D: '<S266>/Vector'
     *  Lookup_n-D: '<S268>/Vector'
     *  Lookup_n-D: '<S269>/Vector'
     *  Lookup_n-D: '<S270>/Vector'
     *  Lookup_n-D: '<S271>/Vector'
     *  Product: '<S153>/Divide'
     *  Product: '<S153>/Product'
     *  Product: '<S153>/Product1'
     *  Product: '<S153>/Product2'
     *  Product: '<S153>/Product3'
     *  SignalConversion generated from: '<S5>/VariantSource1'
     *  Sum: '<S153>/Sum1'
     *  Sum: '<S153>/Sum3'
     */
#if Rte_SysCon_Variant_UBTR_5

    /* Outputs for Atomic SubSystem: '<S153>/DigitalLowpassResetEnabled3' */
    /* Outputs for Atomic SubSystem: '<S153>/DigitalLowpassResetEnabled1' */
    /* Sum: '<S254>/Summation' incorporates:
     *  Constant: '<S258>/Calib'
     *  Constant: '<S265>/Calib'
     *  Product: '<S254>/Multiplication'
     *  Sum: '<S254>/Subtraction'
     *  Switch: '<S6>/Switch8'
     *  UnitDelay: '<S254>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeTAIR_p_HghRfr =
        ((((rtb_TmpSignalConversionAtVeTAIR_Pct_RadF -
            KeUBTR_n_RedmNominalFanSpeed) * look1_iflf_binlca_16a
           (VeUBTR_v_VehSpd, ((const float32 *)&(KxUBTR_T_RedmAirTempFanAdj[0])),
            ((const float32 *)&(KtUBTR_T_RedmAirTempFanAdj[0])), 3U)) -
          VeUBTR_T_RedmUhoodFanImpact) * KeUBTR_K_RedmFanSpdAdjThrmCoeff) +
        VeUBTR_T_RedmUhoodFanImpact;

    /* Outputs for Atomic SubSystem: '<S254>/Limiter' */
    /* Switch: '<S272>/Switch1' incorporates:
     *  Constant: '<S261>/Calib'
     *  RelationalOperator: '<S272>/RelationalOperator'
     *  Switch: '<S254>/Switch2'
     */
    if (KeUBTR_T_MtrB_LPF_MaxLim < rtb_TmpSignalConversionAtVeTAIR_p_HghRfr)
    {
        /* Lookup_n-D: '<S266>/Vector' */
        rtb_TmpSignalConversionAtVeTAIR_p_HghRfr = KeUBTR_T_MtrB_LPF_MaxLim;
    }

    /* End of Switch: '<S272>/Switch1' */

    /* Switch: '<S272>/Switch' incorporates:
     *  Constant: '<S263>/Calib'
     *  RelationalOperator: '<S272>/RelationalOperator1'
     */
    if (rtb_TmpSignalConversionAtVeTAIR_p_HghRfr > KeUBTR_T_MtrB_LPF_MinLim)
    {
        /* Switch: '<S272>/Switch' */
        VeUBTR_T_RedmUhoodFanImpact = rtb_TmpSignalConversionAtVeTAIR_p_HghRfr;
    }
    else
    {
        /* Switch: '<S272>/Switch' */
        VeUBTR_T_RedmUhoodFanImpact = KeUBTR_T_MtrB_LPF_MinLim;
    }

    /* End of Switch: '<S272>/Switch' */
    /* End of Outputs for SubSystem: '<S254>/Limiter' */

    /* Product: '<S153>/Product3' incorporates:
     *  Constant: '<S153>/Constant'
     *  Constant: '<S256>/Calib'
     *  Constant: '<S257>/Calib'
     */
    VeUBTR_dm_ExhaustMassFlow = (((VeUBTR_n_EngineSpeed / 60.0F) *
        VeUBTR_m_Air_Intake) * KeUBTR_K_EngineCylNo) * KeUBTR_K_ExaustToAirRatio;

    /* Lookup_n-D: '<S266>/Vector' incorporates:
     *  UnitDelay: '<S255>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeTAIR_p_HghRfr = UBTR_ac_DW.UnitDelay_DSTATE_op;

    /* Sum: '<S255>/Summation' incorporates:
     *  Product: '<S153>/Product3'
     *  Product: '<S255>/Multiplication'
     *  Sum: '<S255>/Subtraction'
     *  Switch: '<S6>/Switch13'
     *  Switch: '<S6>/Switch8'
     */
    rtb_TmpSignalConversionAtVeTAIR_p_HghRfr += (look2_iflf_binlca_16a
        (VeUBTR_v_VehSpd, VeUBTR_T_EngineOilTemp, ((const float32 *)
        &(KxUBTR_T_RedmAirTempNominal[0])), ((const float32 *)
        &(KyUBTR_T_RedmAirTempNominal[0])), ((const float32 *)
        &(KtUBTR_T_RedmAirTempNominal[0])), UBTR_ac_ConstP.Vector_maxIndex_e, 4U)
        - rtb_TmpSignalConversionAtVeTAIR_p_HghRfr) * look2_iflf_binlca_16a
        (VeUBTR_v_VehSpd, VeUBTR_dm_ExhaustMassFlow, ((const float32 *)
          &(KxUBTR_T_RedmAirTempThermalCoeff[0])), ((const float32 *)
          &(KyUBTR_T_RedmAirTempThermalCoeff[0])), ((const float32 *)
          &(KtUBTR_T_RedmAirTempThermalCoeff[0])), UBTR_ac_ConstP.pooled13, 4U);

    /* Outputs for Atomic SubSystem: '<S255>/Limiter' */
    /* Switch: '<S273>/Switch1' incorporates:
     *  Constant: '<S262>/Calib'
     *  RelationalOperator: '<S273>/RelationalOperator'
     *  Switch: '<S255>/Switch2'
     */
    if (KeUBTR_T_MtrB_LPF_MaxLim < rtb_TmpSignalConversionAtVeTAIR_p_HghRfr)
    {
        /* Lookup_n-D: '<S266>/Vector' */
        rtb_TmpSignalConversionAtVeTAIR_p_HghRfr = KeUBTR_T_MtrB_LPF_MaxLim;
    }

    /* End of Switch: '<S273>/Switch1' */

    /* Switch: '<S273>/Switch' incorporates:
     *  Constant: '<S264>/Calib'
     *  RelationalOperator: '<S273>/RelationalOperator1'
     */
    if (rtb_TmpSignalConversionAtVeTAIR_p_HghRfr > KeUBTR_T_MtrB_LPF_MinLim)
    {
        /* Switch: '<S273>/Switch' */
        VeUBTR_T_RedmUhoodEngineImpact =
            rtb_TmpSignalConversionAtVeTAIR_p_HghRfr;
    }
    else
    {
        /* Switch: '<S273>/Switch' */
        VeUBTR_T_RedmUhoodEngineImpact = KeUBTR_T_MtrB_LPF_MinLim;
    }

    /* End of Switch: '<S273>/Switch' */
    /* End of Outputs for SubSystem: '<S255>/Limiter' */

    /* Update for UnitDelay: '<S255>/UnitDelay' */
    UBTR_ac_DW.UnitDelay_DSTATE_op = VeUBTR_T_RedmUhoodEngineImpact;

    /* Lookup_n-D: '<S270>/Vector' incorporates:
     *  Switch: '<S6>/Switch5'
     *  Switch: '<S6>/Switch8'
     */
    VeUBTR_T_RedmUnderhoodAirTempAGS_New1 = look2_iflf_binlca_16a
        (VeUBTR_v_VehSpd, VeUBTR_Pct_AGS_CurrPos, ((const float32 *)
          &(KxUBTR_T_RedmAitTmpAgsFactor[0])), ((const float32 *)
          &(KyUBTR_T_RedmAitTmpAgsFactor[0])), ((const float32 *)
          &(KtUBTR_T_RedmAitTmpAgsFactor[0])), UBTR_ac_ConstP.pooled11, 5U);

    /* Lookup_n-D: '<S271>/Vector' incorporates:
     *  Switch: '<S6>/Switch6'
     *  Switch: '<S6>/Switch8'
     */
    VeUBTR_T_RedmUnderhoodAirTempAAD = look2_iflf_binlca_16a(VeUBTR_v_VehSpd,
        VeUBTR_Pct_AadPos, ((const float32 *)&(KxUBTR_T_RedmAitTmpAadFactor[0])),
        ((const float32 *)&(KyUBTR_T_RedmAitTmpAadFactor[0])), ((const float32 *)
        &(KtUBTR_T_RedmAitTmpAadFactor[0])), UBTR_ac_ConstP.pooled11, 5U);

    /* Product: '<S153>/Product' incorporates:
     *  SignalConversion generated from: '<S1>/VeAATR_T_EstAmbAirTemp'
     *  Switch: '<S6>/Switch8'
     */
    VeUBTR_T_RedmUHoodAirTempBd = (((VeUBTR_T_RedmUhoodFanImpact +
        VeUBTR_T_RedmUhoodEngineImpact) + look2_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeAATR_T_EstAmb, VeUBTR_v_VehSpd, ((const
        float32 *)&(KxUBTR_T_RedmAirTempAmbAdj[0])), ((const float32 *)
        &(KyUBTR_T_RedmAirTempAmbAdj[0])), ((const float32 *)
        &(KtUBTR_T_RedmAirTempAmbAdj[0])), UBTR_ac_ConstP.pooled13, 4U)) *
        VeUBTR_T_RedmUnderhoodAirTempAGS_New1) *
        VeUBTR_T_RedmUnderhoodAirTempAAD;

    /* VariantMerge generated from: '<S5>/VariantSource3' */
    VeUBTR_T_MtrBAirTempBd = VeUBTR_T_GenUHoodAirTempBd;

    /* End of Outputs for SubSystem: '<S153>/DigitalLowpassResetEnabled1' */
    /* End of Outputs for SubSystem: '<S153>/DigitalLowpassResetEnabled3' */
#endif

    /* End of Lookup_n-D: '<S267>/Vector' */

    /* SignalConversion generated from: '<S5>/VariantSource1' */
#if Rte_SysCon_Variant_UBTR_6

    /* VariantMerge generated from: '<S5>/VariantSource3' incorporates:
     *  UnitDelay: '<S154>/UnitDelay'
     */
    VeUBTR_T_MtrBAirTempBd = UBTR_ac_DW.UnitDelay_DSTATE_c;

#elif !Rte_SysCon_Variant_UBTR_5 && !Rte_SysCon_Variant_UBTR_6

    /* VariantMerge generated from: '<S5>/VariantSource3' incorporates:
     *  Constant: '<S148>/Calib'
     *  SignalConversion generated from: '<S5>/VariantSource1'
     */
    VeUBTR_T_MtrBAirTempBd = KeUBTR_T_MtrAAirTempDflt;

#endif

    /* End of SignalConversion generated from: '<S5>/VariantSource1' */

    /* SignalConversion generated from: '<S5>/VariantSource1' */
    VeUBTR_T_MtrAAirTempBd = VeUBTR_T_MtrBAirTempBd;

    /* SignalConversion generated from: '<S5>/VariantSource2' */
#if Rte_SysCon_Variant_UBTR_5

    /* VariantMerge generated from: '<S5>/VariantSource3' */
    VeUBTR_T_MtrBAirTempBd = VeUBTR_T_FedmUHoodAirTempBd;

#endif

    /* End of SignalConversion generated from: '<S5>/VariantSource2' */

    /* SignalConversion generated from: '<S5>/VariantSource2' */
#if Rte_SysCon_Variant_UBTR_6

    /* VariantMerge generated from: '<S5>/VariantSource3' incorporates:
     *  Constant: '<S150>/Calib'
     */
    VeUBTR_T_MtrBAirTempBd = KeUBTR_T_MtrCAirTempBev;

#elif !Rte_SysCon_Variant_UBTR_5 && !Rte_SysCon_Variant_UBTR_6

    /* VariantMerge generated from: '<S5>/VariantSource3' incorporates:
     *  Constant: '<S151>/Calib'
     *  SignalConversion generated from: '<S5>/VariantSource2'
     */
    VeUBTR_T_MtrBAirTempBd = KeUBTR_T_MtrCAirTempDflt;

#endif

    /* End of SignalConversion generated from: '<S5>/VariantSource2' */

    /* SignalConversion generated from: '<S5>/VariantSource2' */
    VeUBTR_T_MtrCAirTempBd = VeUBTR_T_MtrBAirTempBd;

    /* SignalConversion generated from: '<S5>/VariantSource3' */
#if Rte_SysCon_Variant_UBTR_5

    /* VariantMerge generated from: '<S5>/VariantSource3' */
    VeUBTR_T_MtrBAirTempBd = VeUBTR_T_RedmUHoodAirTempBd;

#endif

    /* End of SignalConversion generated from: '<S5>/VariantSource3' */

    /* SignalConversion generated from: '<S5>/VariantSource3' */
#if Rte_SysCon_Variant_UBTR_6

    /* VariantMerge generated from: '<S5>/VariantSource3' incorporates:
     *  UnitDelay: '<S244>/UnitDelay'
     */
    VeUBTR_T_MtrBAirTempBd = UBTR_ac_DW.UnitDelay_DSTATE_n;

#elif !Rte_SysCon_Variant_UBTR_5 && !Rte_SysCon_Variant_UBTR_6

    /* VariantMerge generated from: '<S5>/VariantSource3' incorporates:
     *  Constant: '<S149>/Calib'
     *  SignalConversion generated from: '<S5>/VariantSource3'
     */
    VeUBTR_T_MtrBAirTempBd = KeUBTR_T_MtrBAirTempDflt;

#endif

    /* End of SignalConversion generated from: '<S5>/VariantSource3' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/UBTO_FUNC'
     */
    /* Switch: '<S304>/Switch9' incorporates:
     *  Constant: '<S307>/Calib'
     */
    if (KeUBTR_b_EstUndrhoodTemp_SD)
    {
        /* Outport: '<Root>/VeUBTR_T_EstUndrhoodTemp' incorporates:
         *  Constant: '<S305>/Calib'
         *  SignalConversion generated from: '<S1>/EstUndrhoodTemp_FUNC'
         */
        (void)Rte_Write_VeUBTR_T_EstUndrhoodTemp_Value
            (KeUBTR_T_EstUndrhoodTemp_D);
    }
    else
    {
        /* Outport: '<Root>/VeUBTR_T_EstUndrhoodTemp' incorporates:
         *  SignalConversion generated from: '<S1>/EstUndrhoodTemp_FUNC'
         */
        (void)Rte_Write_VeUBTR_T_EstUndrhoodTemp_Value
            (VeUBTR_T_EstBeltTemp_UnderHood_MBD_B4D);
    }

    /* End of Switch: '<S304>/Switch9' */

    /* Switch: '<S304>/Switch1' incorporates:
     *  Constant: '<S308>/Calib'
     */
    if (KeUBTR_b_FEAD_EstBeltTemp_SD)
    {
        /* Outport: '<Root>/VeUBTR_T_FEAD_EstBeltTemp' incorporates:
         *  Constant: '<S306>/Calib'
         *  SignalConversion generated from: '<S1>/FEAD_EstBeltTemp_FUNC'
         */
        (void)Rte_Write_VeUBTR_T_FEAD_EstBeltTemp_Value
            (KeUBTR_T_FEAD_EstBeltTemp_D);
    }
    else
    {
        /* Outport: '<Root>/VeUBTR_T_FEAD_EstBeltTemp' incorporates:
         *  SignalConversion generated from: '<S1>/FEAD_EstBeltTemp_FUNC'
         */
        (void)Rte_Write_VeUBTR_T_FEAD_EstBeltTemp_Value
            (VeUBTR_T_BeltTemp_FEAD_B4D);
    }

    /* End of Switch: '<S304>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/UBTR_MedTEH' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
#endif

}

#endif

/* Output function */
FUNC(void, UBTR_CODE) UBTR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/UBTR_PwrOff'
     */
    /* Outport: '<Root>/NeUBTR_T_BeltTempPred_Prev_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeUBTR_T_BeltTempPred_Prev'
     */
    (void)Rte_Write_NeUBTR_T_BeltTempPred_Prev_NeUBTR_T_BeltTempPred_Prev
        (UBTR_ac_DW.NeUBTR_T_BeltTempPred_Prev);

    /* Outport: '<Root>/NeUBTR_t_RealTime_Prev_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeUBTR_t_RealTime_Prev'
     */
    (void)Rte_Write_NeUBTR_t_RealTime_Prev_NeUBTR_t_RealTime_Prev
        (UBTR_ac_DW.NeUBTR_t_RealTime_Prev);

    /* Outport: '<Root>/NeUBTR_T_UnderhoodTempPred_Prev_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeUBTR_T_UnderhoodTempPred_Prev'
     */
    (void)
        Rte_Write_NeUBTR_T_UnderhoodTempPred_Prev_NeUBTR_T_UnderhoodTempPred_Prev
        (UBTR_ac_DW.NeUBTR_T_UnderhoodTempPred_Prev);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, UBTR_CODE) UBTR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/UBTR_PwrOn'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/DSM_Init'
     */
    /* DataStoreWrite: '<S312>/NeUBTR_T_UnderhoodTempPred_Prev' incorporates:
     *  Inport: '<Root>/NeUBTR_T_UnderhoodTempPred_Prev_PM_In'
     */
    (void)
        Rte_Read_NeUBTR_T_UnderhoodTempPred_Prev_Rx_NeUBTR_T_UnderhoodTempPred_Prev
        (&UBTR_ac_DW.NeUBTR_T_UnderhoodTempPred_Prev);

    /* DataStoreWrite: '<S312>/NeUBTR_t_RealTime_Prev' incorporates:
     *  Inport: '<Root>/NeUBTR_t_RealTime_Prev_PM_In'
     */
    (void)Rte_Read_NeUBTR_t_RealTime_Prev_Rx_NeUBTR_t_RealTime_Prev
        (&UBTR_ac_DW.NeUBTR_t_RealTime_Prev);

    /* DataStoreWrite: '<S312>/NeUBTR_T_BeltTempPred_Prev' incorporates:
     *  Inport: '<Root>/NeUBTR_T_BeltTempPred_Prev_PM_In'
     */
    (void)Rte_Read_NeUBTR_T_BeltTempPred_Prev_Rx_NeUBTR_T_BeltTempPred_Prev
        (&UBTR_ac_DW.NeUBTR_T_BeltTempPred_Prev);

#if Rte_SysCon_Variant_UBTR_3

    /* Outputs for Function Call SubSystem: '<S3>/Init_BeltTemp_Data' */
    /* DataStoreRead: '<S313>/DataStoreRead' */
    VeUBTR_T_BeltTemp_FEAD_Saved = UBTR_ac_DW.NeUBTR_T_BeltTempPred_Prev;

    /* DataStoreRead: '<S313>/DataStoreRead1' */
    UBTR_ac_B.VeUBTR_t_RealTime_Saved = UBTR_ac_DW.NeUBTR_t_RealTime_Prev;

    /* DataStoreRead: '<S313>/DataStoreRead3' */
    VeUBTR_T_EstUnderHoodTemp_Saved = UBTR_ac_DW.NeUBTR_T_UnderhoodTempPred_Prev;

    /* End of Outputs for SubSystem: '<S3>/Init_BeltTemp_Data' */
#endif

    /* SignalConversion generated from: '<S3>/EstUndrhoodTemp_NF' incorporates:
     *  SignalConversion generated from: '<S3>/FEAD_EstBeltTemp_NF'
     *  SignalConversion generated from: '<S3>/FEDM_Underhood_Air_Temp_NF'
     *  SignalConversion generated from: '<S3>/Gen_Underhood_Air_Temp_NF'
     *  SignalConversion generated from: '<S3>/REDM_Underhood_Air_Temp_NF'
     */
#if Rte_SysCon_Variant_UBTR_4

    /* Outputs for Function Call SubSystem: '<S3>/UBTO_NF' */
    /* SignalConversion generated from: '<S315>/EstUndrhoodTemp_NF' incorporates:
     *  Constant: '<S317>/Calib'
     */
    UBTR_ac_B.OutportBufferForEstUndrhoodTemp_NF = KeUBTR_T_EstUndrhoodTemp_NF;

    /* SignalConversion generated from: '<S315>/FEAD_EstBeltTemp_NF' incorporates:
     *  Constant: '<S318>/Calib'
     */
    UBTR_ac_B.OutportBufferForFEAD_EstBeltTemp_NF = KeUBTR_T_FEAD_EstBeltTemp_NF;

    /* SignalConversion generated from: '<S315>/Gen_Underhood_Air_Temp_NF' incorporates:
     *  Constant: '<S319>/Calib'
     */
    UBTR_ac_B.OutportBufferForGen_Underhood_Air_Temp_N = KeUBTR_T_MtrAAirTemp_NF;

    /* SignalConversion generated from: '<S315>/FEDM_Underhood_Air_Temp_NF' incorporates:
     *  Constant: '<S321>/Calib'
     */
    UBTR_ac_B.OutportBufferForFEDM_Underhood_Air_Temp_ = KeUBTR_T_MtrCAirTemp_NF;

    /* SignalConversion generated from: '<S315>/REDM_Underhood_Air_Temp_NF' incorporates:
     *  Constant: '<S320>/Calib'
     */
    UBTR_ac_B.OutportBufferForREDM_Underhood_Air_Temp_ = KeUBTR_T_MtrBAirTemp_NF;

    /* End of Outputs for SubSystem: '<S3>/UBTO_NF' */

    /* Outport: '<Root>/VeUBTR_T_EstUndrhoodTemp' */
    (void)Rte_Write_VeUBTR_T_EstUndrhoodTemp_Value
        (UBTR_ac_B.OutportBufferForEstUndrhoodTemp_NF);

    /* Outport: '<Root>/VeUBTR_T_FEAD_EstBeltTemp' */
    (void)Rte_Write_VeUBTR_T_FEAD_EstBeltTemp_Value
        (UBTR_ac_B.OutportBufferForFEAD_EstBeltTemp_NF);

    /* Outport: '<Root>/VeUBTR_T_MtrCAirTemp' */
    (void)Rte_Write_VeUBTR_T_MtrCAirTemp_Value
        (UBTR_ac_B.OutportBufferForFEDM_Underhood_Air_Temp_);

    /* Outport: '<Root>/VeUBTR_T_MtrAAirTemp' */
    (void)Rte_Write_VeUBTR_T_MtrAAirTemp_Value
        (UBTR_ac_B.OutportBufferForGen_Underhood_Air_Temp_N);

    /* Outport: '<Root>/VeUBTR_T_MtrBAirTemp' */
    (void)Rte_Write_VeUBTR_T_MtrBAirTemp_Value
        (UBTR_ac_B.OutportBufferForREDM_Underhood_Air_Temp_);

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */
#endif

    /* End of SignalConversion generated from: '<S3>/EstUndrhoodTemp_NF' */

    /* SignalConversion generated from: '<S3>/BeltTempSaved_write' incorporates:
     *  SignalConversion generated from: '<S3>/RealTime_Saved_write'
     *  SignalConversion generated from: '<S3>/UnderhoodTempSaved_write'
     */
#if Rte_SysCon_Variant_UBTR_3

    /* SignalConversion generated from: '<S3>/BeltTempSaved_write' */
    Rte_IrvWrite_UBTR_PwrOn_BeltTempSaved_write_IRV(VeUBTR_T_BeltTemp_FEAD_Saved);

    /* SignalConversion generated from: '<S3>/RealTime_Saved_write' */
    Rte_IrvWrite_UBTR_PwrOn_RealTime_Saved_write_IRV
        (UBTR_ac_B.VeUBTR_t_RealTime_Saved);

    /* SignalConversion generated from: '<S3>/UnderhoodTempSaved_write' */
    Rte_IrvWrite_UBTR_PwrOn_UnderhoodTempSaved_write_IRV
        (VeUBTR_T_EstUnderHoodTemp_Saved);

#endif

    /* End of SignalConversion generated from: '<S3>/BeltTempSaved_write' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, UBTR_CODE) UBTR_ac_Init(void)
{
    /* Start for DataStoreMemory: '<Root>/DSM_1' */
    UBTR_ac_DW.NeUBTR_T_BeltTempPred_Prev = -10.0F;

    /* Start for DataStoreMemory: '<Root>/DSM_3' */
    UBTR_ac_DW.NeUBTR_T_UnderhoodTempPred_Prev = -10.0F;

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/UBTR_PwrOn'
     */
#if Rte_SysCon_Variant_UBTR_4

    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* SystemInitialize for Function Call SubSystem: '<S3>/UBTO_NF' */
    /* SystemInitialize for SignalConversion generated from: '<S315>/EstUndrhoodTemp_NF' incorporates:
     *  Constant: '<S317>/Calib'
     */
    UBTR_ac_B.OutportBufferForEstUndrhoodTemp_NF = KeUBTR_T_EstUndrhoodTemp_NF;

    /* SystemInitialize for SignalConversion generated from: '<S315>/FEAD_EstBeltTemp_NF' incorporates:
     *  Constant: '<S318>/Calib'
     */
    UBTR_ac_B.OutportBufferForFEAD_EstBeltTemp_NF = KeUBTR_T_FEAD_EstBeltTemp_NF;

    /* SystemInitialize for SignalConversion generated from: '<S315>/Gen_Underhood_Air_Temp_NF' incorporates:
     *  Constant: '<S319>/Calib'
     */
    UBTR_ac_B.OutportBufferForGen_Underhood_Air_Temp_N = KeUBTR_T_MtrAAirTemp_NF;

    /* SystemInitialize for SignalConversion generated from: '<S315>/FEDM_Underhood_Air_Temp_NF' incorporates:
     *  Constant: '<S321>/Calib'
     */
    UBTR_ac_B.OutportBufferForFEDM_Underhood_Air_Temp_ = KeUBTR_T_MtrCAirTemp_NF;

    /* SystemInitialize for SignalConversion generated from: '<S315>/REDM_Underhood_Air_Temp_NF' incorporates:
     *  Constant: '<S320>/Calib'
     */
    UBTR_ac_B.OutportBufferForREDM_Underhood_Air_Temp_ = KeUBTR_T_MtrBAirTemp_NF;

    /* End of SystemInitialize for SubSystem: '<S3>/UBTO_NF' */
    /* End of SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
#endif

    /* SystemInitialize for SignalConversion generated from: '<S3>/BeltTempSaved_write' incorporates:
     *  SignalConversion generated from: '<S3>/RealTime_Saved_write'
     *  SignalConversion generated from: '<S3>/UnderhoodTempSaved_write'
     */
#if Rte_SysCon_Variant_UBTR_3

    /* SystemInitialize for SignalConversion generated from: '<S3>/BeltTempSaved_write' */
    Rte_IrvWrite_UBTR_ac_Init_BeltTempSaved_write_IRV
        (VeUBTR_T_BeltTemp_FEAD_Saved);

    /* SystemInitialize for SignalConversion generated from: '<S3>/RealTime_Saved_write' */
    Rte_IrvWrite_UBTR_ac_Init_RealTime_Saved_write_IRV
        (UBTR_ac_B.VeUBTR_t_RealTime_Saved);

    /* SystemInitialize for SignalConversion generated from: '<S3>/UnderhoodTempSaved_write' */
    Rte_IrvWrite_UBTR_ac_Init_UnderhoodTempSaved_write_IRV
        (VeUBTR_T_EstUnderHoodTemp_Saved);

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S3>/BeltTempSaved_write' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
