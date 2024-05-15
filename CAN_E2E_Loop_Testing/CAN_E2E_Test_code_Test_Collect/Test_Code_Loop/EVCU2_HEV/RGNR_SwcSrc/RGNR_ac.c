/*
 * File: RGNR_ac.c
 *
 * Code generated for Simulink model 'RGNR_ac'.
 *
 * Model version                  : 9.184
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 18:51:18 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "RGNR_ac.h"
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
#define START_SEC_CALIB_UNSPECIFIED_RGNR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(boolean, RGNR_VAR_INIT) HeRGNR_b_ConvOvrd = 0;/* Referenced by: '<S816>/Calib' */
static volatile CONST(boolean, RGNR_VAR_INIT) HeRGNR_b_IdleProtectionDisable_C =
    1;                                 /* Referenced by: '<S548>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) HeRGNR_t_DT = 0.01F;/* Referenced by:
                                                                   * '<S708>/Calib'
                                                                   * '<S42>/Calib'
                                                                   * '<S534>/Calib'
                                                                   * '<S377>/Calib'
                                                                   */

#if Rte_SysCon_Variant_RGNR_4

static volatile CONST(float32, RGNR_VAR_INIT) KaRGNR_K_RegenFactor_TCC[6] =
{
    0.0F, 0.0F, 1.0F, 1.0F, 0.0F, 1.0F
} ;                                    /* Referenced by: '<S647>/Calib' */

#endif

static volatile CONST(boolean, RGNR_VAR_INIT) KaRGNR_b_PRNDLCheckAeCoast[30] =
{
    1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    0, 0, 1, 0
} ;                                    /* Referenced by: '<S245>/Calib' */

#if Rte_SysCon_Variant_RGNR_2

static volatile CONST(boolean, RGNR_VAR_INIT) KaRGNR_b_SelGearSchRegVBrk[13] =
{
    0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S535>/Calib' */

#endif

static volatile CONST(uint16, RGNR_VAR_INIT) KeRGNC_Cnt_OvrRdAvailRgnTrq = 0U;/* Referenced by: '<S512>/Calib' */
static volatile CONST(uint16, RGNR_VAR_INIT) KeRGNC_Cnt_OvrRdRprtdRgnTrq = 0U;/* Referenced by: '<S794>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNC_M_CapInhbRBSLimit = 0.0F;/* Referenced by:
                                                                      * '<S738>/Calib'
                                                                      * '<S767>/Calib'
                                                                      */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNC_M_CapInhbRBSLimit_Front =
    0.0F;                              /* Referenced by: '<S749>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNC_M_CapInhbRBSLimit_Rear =
    0.0F;                              /* Referenced by: '<S750>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNC_M_CapInhbRBSRmp_dwn =
    -10.0F;                            /* Referenced by:
                                        * '<S739>/Calib'
                                        * '<S768>/Calib'
                                        */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNC_M_CapInhbRBSRmp_dwn_Front =
    -10.0F;                            /* Referenced by: '<S751>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNC_M_CapInhbRBSRmp_dwn_Rear =
    -10.0F;                            /* Referenced by: '<S752>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNC_M_CapInhbRBSRmp_up = 10.0F;/* Referenced by:
                                                                      * '<S740>/Calib'
                                                                      * '<S769>/Calib'
                                                                      */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNC_M_CapInhbRBSRmp_up_Front =
    10.0F;                             /* Referenced by: '<S753>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNC_M_CapInhbRBSRmp_up_Rear =
    10.0F;                             /* Referenced by: '<S754>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNC_M_CapThreshShutOffRmp =
    7.0F;                              /* Referenced by:
                                        * '<S741>/Calib'
                                        * '<S770>/Calib'
                                        */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNC_M_CapThreshShutOffRmp_Front
    = 7.0F;                            /* Referenced by: '<S755>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNC_M_CapThreshShutOffRmp_Rear =
    7.0F;                              /* Referenced by: '<S756>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNC_M_CrsToThrshForRgnDeact =
    1.0F;                              /* Referenced by: '<S419>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNC_M_DynHdRmDec = 2.0F;/* Referenced by:
                                                                      * '<S523>/Calib'
                                                                      * '<S527>/Calib'
                                                                      */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNC_M_OvrRdAvailRgnOutTrq =
    -2000.0F;                          /* Referenced by: '<S513>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNC_M_OvrRdAvailRgnOutTrq_Frnt =
    -2000.0F;                          /* Referenced by: '<S514>/Calib' */

#if Rte_SysCon_Variant_RGNR_1

static volatile CONST(float32, RGNR_VAR_INIT) KeRGNC_M_OvrRdAvailRgnOutTrq_Lin =
    -2000.0F;                          /* Referenced by: '<S515>/Calib' */

#endif

static volatile CONST(float32, RGNR_VAR_INIT) KeRGNC_M_OvrRdAvailRgnOutTrq_Rear =
    -2000.0F;                          /* Referenced by: '<S516>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNC_M_OvrRdRprtdRgnOutTrq =
    0.0F;                              /* Referenced by: '<S795>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNC_M_ThrshForRgnTrqRqDtct =
    5.0F;                              /* Referenced by: '<S796>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNC_M_ToCommHdRm = -5.0F;/* Referenced by:
                                                                      * '<S524>/Calib'
                                                                      * '<S528>/Calib'
                                                                      */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNC_M_ToTolForRgnActv_RSP =
    50.0F;                             /* Referenced by: '<S420>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNC_Pct_ThreshForRgnDeact =
    5.0F;                              /* Referenced by: '<S421>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNC_T_HVBatteryHighTemp = 60.0F;/* Referenced by: '<S262>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNC_T_HVBatteryHighTempOff =
    10.0F;                             /* Referenced by: '<S263>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNC_T_HVBatteryLowTemp = -30.0F;/* Referenced by: '<S264>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNC_T_HVBatteryLowTempOff =
    10.0F;                             /* Referenced by: '<S265>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNC_T_ModeRmvlCnts = 20.0F;/* Referenced by:
                                                                      * '<S289>/Calib'
                                                                      * '<S586>/Calib'
                                                                      */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNC_T_MotAHighTemp = 60.0F;/* Referenced by: '<S317>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNC_T_MotAHighTempOff = 10.0F;/* Referenced by: '<S318>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNC_T_MotALowTemp = -30.0F;/* Referenced by: '<S319>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNC_T_MotALowTempOff = 10.0F;/* Referenced by: '<S320>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNC_T_MotBHighTemp = 60.0F;/* Referenced by: '<S321>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNC_T_MotBHighTempOff = 10.0F;/* Referenced by: '<S322>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNC_T_MotBLowTemp = -30.0F;/* Referenced by: '<S323>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNC_T_MotBLowTempOff = 10.0F;/* Referenced by: '<S324>/Calib' */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNC_b_HVTempSlct = 0;/* Referenced by: '<S266>/Calib' */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNC_b_IgnoreLashSt = 0;/* Referenced by:
                                                                      * '<S422>/Calib'
                                                                      * '<S478>/Calib'
                                                                      */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNC_b_ModeRmvlOvrRd = 0;/* Referenced by:
                                                                      * '<S290>/Calib'
                                                                      * '<S587>/Calib'
                                                                      */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNC_b_ModeRmvlOvrRdVal = 0;/* Referenced by:
                                                                      * '<S291>/Calib'
                                                                      * '<S588>/Calib'
                                                                      */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNC_b_RegInhOvr = 1;/* Referenced by: '<S757>/Calib' */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNC_b_RgnEnblEngOff = 1;/* Referenced by:
                                                                      * '<S292>/Calib'
                                                                      * '<S589>/Calib'
                                                                      */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNC_b_RgnEnblG1 = 1;/* Referenced by:
                                                                      * '<S293>/Calib'
                                                                      * '<S590>/Calib'
                                                                      */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNC_b_RgnEnblG2 = 1;/* Referenced by:
                                                                      * '<S294>/Calib'
                                                                      * '<S591>/Calib'
                                                                      */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNC_b_RgnEnblG3 = 1;/* Referenced by:
                                                                      * '<S295>/Calib'
                                                                      * '<S592>/Calib'
                                                                      */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNC_b_RgnEnblG3Hi = 1;/* Referenced by:
                                                                      * '<S296>/Calib'
                                                                      * '<S593>/Calib'
                                                                      */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNC_b_RgnEnblG4 = 1;/* Referenced by:
                                                                      * '<S297>/Calib'
                                                                      * '<S594>/Calib'
                                                                      */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNC_b_RgnEnblM1 = 1;/* Referenced by:
                                                                      * '<S298>/Calib'
                                                                      * '<S595>/Calib'
                                                                      */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNC_b_RgnEnblM2 = 1;/* Referenced by:
                                                                      * '<S299>/Calib'
                                                                      * '<S596>/Calib'
                                                                      */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNC_b_RgnEnblM2Hi = 1;/* Referenced by:
                                                                      * '<S300>/Calib'
                                                                      * '<S597>/Calib'
                                                                      */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNC_b_RgnEnblM3 = 1;/* Referenced by:
                                                                      * '<S301>/Calib'
                                                                      * '<S598>/Calib'
                                                                      */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNC_b_RgnEnblN = 0;/* Referenced by:
                                                                     * '<S302>/Calib'
                                                                     * '<S599>/Calib'
                                                                     */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNC_b_RgnEnblN2 = 0;/* Referenced by: '<S600>/Calib' */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNC_b_RgnEnblNAll = 0;/* Referenced by:
                                                                      * '<S303>/Calib'
                                                                      * '<S601>/Calib'
                                                                      */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNC_b_RgnEnblNC2C = 0;/* Referenced by:
                                                                      * '<S304>/Calib'
                                                                      * '<S602>/Calib'
                                                                      */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNC_b_RgnEnblNHi = 0;/* Referenced by:
                                                                      * '<S305>/Calib'
                                                                      * '<S603>/Calib'
                                                                      */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNC_b_SingleAxle = 0;/* Referenced by: '<S777>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNC_dM_ToAP_RespHdRm = 0.0F;/* Referenced by:
                                                                      * '<S423>/Calib'
                                                                      * '<S479>/Calib'
                                                                      */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNC_n_RgnRmvlSpd_MtrB = 15.0F;/* Referenced by: '<S607>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNC_n_RgnZeroSpd_MtrB = 5.0F;/* Referenced by: '<S608>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNC_r_DynHdRmInc = 0.0F;/* Referenced by:
                                                                      * '<S525>/Calib'
                                                                      * '<S529>/Calib'
                                                                      */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNC_v_RgnRmvlSpd = 15.0F;/* Referenced by: '<S563>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNC_v_RgnTopSpd = 225.0F;/* Referenced by: '<S564>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNC_v_RgnTopSpdOff = 220.0F;/* Referenced by: '<S565>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNC_v_RgnZeroSpd = 5.0F;/* Referenced by: '<S566>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_Cf_RgenBrkTorqLDDeactv =
    -0.125F;                           /* Referenced by: '<S19>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_Cf_RgenBrkTorqLUDeactv =
    1024.0F;                           /* Referenced by: '<S20>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_I_RgnRollsAmpThrshld =
    -5.0F;                             /* Referenced by: '<S105>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_I_RgnRollsAmpThrshld_PIM =
    -0.5F;                             /* Referenced by: '<S106>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_M_AccelToThrld = -20.0F;/* Referenced by: '<S107>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_M_CrsToLD = -1.0F;/* Referenced by: '<S424>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_M_CrsToLU = 1000.0F;/* Referenced by: '<S425>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_M_DrvTotBrkThrshld =
    -9999.0F;                          /* Referenced by: '<S72>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_M_MinRgnTrqDrngSS = -100.0F;/* Referenced by: '<S355>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_M_RampOutAccPdl_LSP = 5.0F;/* Referenced by: '<S58>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_M_RampOutAccPdl_RSP = 10.0F;/* Referenced by: '<S59>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_M_RampOutTotBrkTrq_LSP =
    5.0F;                              /* Referenced by: '<S60>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_M_RampOutTotBrkTrq_RSP =
    15.0F;                             /* Referenced by: '<S61>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_M_RegenCapacity_StpHat =
    120.0F;                            /* Referenced by: '<S363>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_M_RegenCapacity_StrtHat =
    120.0F;                            /* Referenced by: '<S364>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_M_RgnBrkCapThrld_LSP =
    -20.0F;                            /* Referenced by: '<S108>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_M_RgnBrkCapThrld_PIM =
    -5.0F;                             /* Referenced by: '<S109>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_M_RgnBrkCapThrld_RSP =
    -5.0F;                             /* Referenced by: '<S110>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_M_RgnBrkReqThrld_LSP =
    -20.0F;                            /* Referenced by: '<S111>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_M_RgnBrkReqThrld_RSP =
    -5.0F;                             /* Referenced by: '<S112>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT)
    KeRGNR_M_RgnCapLimit_VehSpd_FrontOvrd = -99999.0F;/* Referenced by: '<S517>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT)
    KeRGNR_M_RgnCapLimit_VehSpd_RearOvrd = -99999.0F;/* Referenced by: '<S518>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_M_ToDeltaThrshld = 0.0F;/* Referenced by: '<S73>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_M_VehDecelRgnLimit =
    -595.033386F;                      /* Referenced by:
                                        * '<S96>/Calib'
                                        * '<S36>/Calib'
                                        * '<S37>/Calib'
                                        * '<S45>/Calib'
                                        */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_M_VehDecelRgnLimitILE =
    -7562.45F;                         /* Referenced by: '<S97>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_M_VehDecelRgnLimit_Frnt =
    -99999.0F;                         /* Referenced by: '<S21>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_M_VehDecelRgnLimit_Rear =
    -99999.0F;                         /* Referenced by: '<S22>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_Pct_AccelPedalPosThrld =
    0.0F;                              /* Referenced by: '<S113>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_Pct_AccelPedalPosThrld_PIM =
    0.0F;                              /* Referenced by: '<S114>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_Pct_AccelPosLD = -0.7F;/* Referenced by: '<S426>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_Pct_AccelPosLU = 1000.0F;/* Referenced by: '<S427>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_T_HVTmpthrshld_LSP = 60.0F;/* Referenced by: '<S267>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_T_HVTmpthrshld_RSP = 70.0F;/* Referenced by: '<S268>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_T_InvtrATmpthrshld_LSP =
    60.0F;                             /* Referenced by: '<S325>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_T_InvtrATmpthrshld_RSP =
    70.0F;                             /* Referenced by: '<S326>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_T_InvtrBTmpthrshld_LSP =
    60.0F;                             /* Referenced by: '<S327>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_T_InvtrBTmpthrshld_RSP =
    70.0F;                             /* Referenced by: '<S328>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_V_HVPbattVolt = 48.0F;/* Referenced by: '<S115>/Calib' */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNR_b_ApplyToMinLimForRgn = 0;/* Referenced by:
                                                                      * '<S434>/Calib'
                                                                      * '<S481>/Calib'
                                                                      */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNR_b_DsbRgn1stGear = 0;/* Referenced by: '<S641>/Calib' */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNR_b_DsblRet2IdleCheck = 1;/* Referenced by: '<S234>/Calib' */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNR_b_EnblOptToRmpOutSS = 1;/* Referenced by: '<S374>/Calib' */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNR_b_EnblRegenNonPRNDLDep = 0;/* Referenced by:
                                                                      * '<S98>/Calib'
                                                                      * '<S626>/Calib'
                                                                      */
static volatile CONST(boolean, RGNR_VAR_INIT)
    KeRGNR_b_EnbleCreepPhaseOutTotBrkReq = 1;/* Referenced by: '<S74>/Calib' */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNR_b_EstRegTrqDet = 0;/* Referenced by: '<S779>/Calib' */

#if Rte_SysCon_Variant_RGNR_3

static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNR_b_GradLimEnable = 0;/* Referenced by: '<S38>/Calib' */

#endif

static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNR_b_HVTmpthrshldOvrrd = 1;/* Referenced by: '<S269>/Calib' */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNR_b_HVTmpthrshldOvrrdEnbl = 0;/* Referenced by: '<S270>/Calib' */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNR_b_InvtrATmpthrshldOvrrd = 1;/* Referenced by: '<S329>/Calib' */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNR_b_InvtrATmpthrshldOvrrdEnbl
    = 0;                               /* Referenced by: '<S330>/Calib' */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNR_b_InvtrBTmpthrshldOvrrd = 1;/* Referenced by: '<S331>/Calib' */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNR_b_InvtrBTmpthrshldOvrrdEnbl
    = 0;                               /* Referenced by: '<S332>/Calib' */

#if Rte_SysCon_Variant_RGNR_4

static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNR_b_MinCreepBlendOvrrd = 0;/* Referenced by: '<S658>/Calib' */

#endif

static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNR_b_MotTrqCmd = 1;/* Referenced by: '<S786>/Calib' */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNR_b_MtrATmpthrshldOvrrd = 1;/* Referenced by: '<S333>/Calib' */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNR_b_MtrATmpthrshldOvrrdEnbl =
    0;                                 /* Referenced by: '<S334>/Calib' */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNR_b_MtrBEquipped = 0;/* Referenced by: '<S609>/Calib' */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNR_b_MtrBTmpthrshldOvrrd = 1;/* Referenced by: '<S335>/Calib' */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNR_b_MtrBTmpthrshldOvrrdEnbl =
    0;                                 /* Referenced by: '<S336>/Calib' */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNR_b_OvrAxleTrqRatio = 0;/* Referenced by: '<S10>/Calib' */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNR_b_OvrdTCMTransTrqRatio = 1;/* Referenced by: '<S428>/Calib' */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNR_b_OvrrdAccSys = 0;/* Referenced by: '<S243>/Calib' */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNR_b_OvrrdCcEngage = 0;/* Referenced by: '<S239>/Calib' */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNR_b_OvrrdPropSysActvAvail = 0;/* Referenced by:
                                                                      * '<S248>/Calib'
                                                                      * '<S637>/Calib'
                                                                      */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNR_b_OvrrdTrnsfrCaseAvail = 0;/* Referenced by:
                                                                      * '<S99>/Calib'
                                                                      * '<S252>/Calib'
                                                                      * '<S644>/Calib'
                                                                      */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNR_b_RegBrkAxTrqCapFA = 0;/* Referenced by: '<S817>/Calib' */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNR_b_RegenAvailEnb = 1;/* Referenced by: '<S215>/Calib' */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNR_b_RegenCapacity_StpHat_Dsbl
    = 1;                               /* Referenced by: '<S365>/Calib' */
static volatile CONST(boolean, RGNR_VAR_INIT)
    KeRGNR_b_RegenCapacity_StrtHat_Dsbl = 1;/* Referenced by: '<S366>/Calib' */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNR_b_RegenRampOutReqActvOvrrd =
    0;                                 /* Referenced by: '<S62>/Calib' */
static volatile CONST(boolean, RGNR_VAR_INIT)
    KeRGNR_b_RegenRampOutReqActvOvrrdVal = 0;/* Referenced by: '<S63>/Calib' */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNR_b_RgnRampOutReqPrgm = 0;/* Referenced by: '<S64>/Calib' */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNR_b_RvrsRegenEnabled = 0;/* Referenced by:
                                                                      * '<S100>/Calib'
                                                                      * '<S627>/Calib'
                                                                      */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNR_b_SOCthrshldOvrrd = 1;/* Referenced by: '<S255>/Calib' */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNR_b_SOCthrshldOvrrdEnbl = 0;/* Referenced by: '<S256>/Calib' */
static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNR_b_SingleRegExtTrq = 0;/* Referenced by: '<S780>/Calib' */

#if Rte_SysCon_Variant_RGNR_4

static volatile CONST(boolean, RGNR_VAR_INIT)
    KeRGNR_b_UndershootProtSourceChange = 0;/* Referenced by: '<S693>/Calib' */

#endif

#if Rte_SysCon_Variant_RGNR_4

static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNR_b_UseMtrB_M2_G2 = 0;/* Referenced by: '<S672>/Calib' */

#endif

#if Rte_SysCon_Variant_RGNR_4

static volatile CONST(boolean, RGNR_VAR_INIT) KeRGNR_b_UseMtrB_N_M1 = 1;/* Referenced by: '<S673>/Calib' */

#endif

#if Rte_SysCon_Variant_RGNR_2

static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_dM_MaxRegenLD = -20.0F;/* Referenced by: '<S536>/Calib' */

#endif

#if Rte_SysCon_Variant_RGNR_2

static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_dM_MaxRegenLU = 20.0F;/* Referenced by: '<S537>/Calib' */

#endif

#if Rte_SysCon_Variant_RGNR_3

static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_dM_RegReq_LD = -99999.0F;/* Referenced by: '<S41>/Calib' */

#endif

#if Rte_SysCon_Variant_RGNR_3

static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_dM_RegReq_LU = 99999.0F;/* Referenced by: '<S43>/Calib' */

#endif

static volatile CONST(float32, RGNR_VAR_INIT)
    KeRGNR_dM_RegenCapacity_StrtStp_RampRt = 1000.0F;/* Referenced by: '<S367>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_dM_RegenOutTorqCapLD =
    -100.0F;                           /* Referenced by:
                                        * '<S390>/Calib'
                                        * '<S400>/Calib'
                                        * '<S409>/Calib'
                                        */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_dM_RegenOutTorqCapLU =
    10.0F;                             /* Referenced by:
                                        * '<S391>/Calib'
                                        * '<S401>/Calib'
                                        * '<S410>/Calib'
                                        */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_dM_RgnRmpDnAftrPdlRls =
    -50.0F;                            /* Referenced by:
                                        * '<S456>/Calib'
                                        * '<S467>/Calib'
                                        * '<S500>/Calib'
                                        */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_dM_RgnRmpUpAftrPdlRls =
    100.0F;                            /* Referenced by:
                                        * '<S457>/Calib'
                                        * '<S468>/Calib'
                                        * '<S501>/Calib'
                                        */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_k_MtrBSpdFltForRgnDeact =
    0.2F;                              /* Referenced by: '<S610>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_k_OptToRtLimFltCoef = 0.01F;/* Referenced by:
                                                                      * '<S392>/Calib'
                                                                      * '<S411>/Calib'
                                                                      */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_k_OptToRtLimFltCoefModeOne =
    0.015F;                            /* Referenced by:
                                        * '<S393>/Calib'
                                        * '<S412>/Calib'
                                        */
static volatile CONST(float32, RGNR_VAR_INIT)
    KeRGNR_k_OptToRtLimFltCoef_FrntRear = 0.01F;/* Referenced by: '<S402>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_k_SEMBlndFxTrqReqDec =
    0.000586F;                         /* Referenced by: '<S802>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_k_SEMBlndFxTrqReqInc =
    0.00023F;                          /* Referenced by: '<S803>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_k_SEMBlndFxTrqReqNone =
    0.0001F;                           /* Referenced by: '<S804>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_k_SEMBlndMult1Dflt =
    0.9961F;                           /* Referenced by: '<S805>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_k_SEMBlndMult1LimMax =
    0.9961F;                           /* Referenced by: '<S806>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_k_SEMBlndMult1LimMin = 0.0F;/* Referenced by: '<S807>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_k_SEMBlndMult2Dflt = 0.0F;/* Referenced by: '<S808>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_k_SEMBlndMult2LimMax =
    0.9961F;                           /* Referenced by: '<S809>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_k_SEMBlndMult2LimMin = 0.0F;/* Referenced by: '<S810>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_k_VehSpdFltForRgnDeact =
    0.2F;                              /* Referenced by: '<S567>/Calib' */

#if Rte_SysCon_Variant_RGNR_4

static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_n_DeltaFromVturb_LSP =
    -200.0F;                           /* Referenced by: '<S674>/Calib' */

#endif

#if Rte_SysCon_Variant_RGNR_4

static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_n_DeltaFromVturb_RSP =
    50.0F;                             /* Referenced by: '<S675>/Calib' */

#endif

static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_n_LowSpdLim = 10.0F;/* Referenced by: '<S272>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_n_RampOutIdleSpdOffset_RSP =
    50.0F;                             /* Referenced by: '<S65>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_n_UpSpdLim = 200.0F;/* Referenced by: '<S273>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_r_AxleTrqRatio = 3.1F;/* Referenced by: '<S11>/Calib' */

#if Rte_SysCon_Variant_RGNR_4

static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_r_BlendInThrshld_UL = 0.98F;/* Referenced by: '<S659>/Calib' */

#endif

#if Rte_SysCon_Variant_RGNR_4

static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_r_BlendOutThrshld_LL =
    0.02F;                             /* Referenced by: '<S660>/Calib' */

#endif

#if Rte_SysCon_Variant_RGNR_4

static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_r_MinCreepBlendLD = -1.0F;/* Referenced by: '<S661>/Calib' */

#endif

#if Rte_SysCon_Variant_RGNR_4

static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_r_MinCreepBlendLU = 1.0F;/* Referenced by: '<S662>/Calib' */

#endif

#if Rte_SysCon_Variant_RGNR_4

static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_r_MinCreepBlendOvrrdVal =
    1.0F;                              /* Referenced by: '<S663>/Calib' */

#endif

static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_r_OptAndZroBlndRateSD =
    10.0F;                             /* Referenced by: '<S383>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_r_OptAndZroBlndRateSU =
    8.0F;                              /* Referenced by: '<S385>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_r_RIPEfficiencyRampDwn_LD =
    -0.1F;                             /* Referenced by: '<S781>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_r_RIPEfficiencyRampUp_LU =
    0.1F;                              /* Referenced by: '<S782>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_r_RegFactMin = 0.0F;/* Referenced by: '<S813>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_r_RegenDsblRampFacThrshld =
    0.0F;                              /* Referenced by: '<S75>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT)
    KeRGNR_r_RegenFactorMultiplier_Cal1 = 0.0F;/* Referenced by: '<S76>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT)
    KeRGNR_r_RegenFactorMultiplier_Cal2 = 1.0F;/* Referenced by: '<S77>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_r_SOCthrshld_LSP = 85.0F;/* Referenced by: '<S257>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_r_SOCthrshld_RSP = 90.0F;/* Referenced by: '<S258>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_r_TCMTransTrqRatio = 1.0F;/* Referenced by: '<S429>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_r_TotBrakeFacRamp_LD = 0.0F;/* Referenced by: '<S78>/Calib' */
static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_r_TotBrakeFacRamp_LU = 0.0F;/* Referenced by: '<S79>/Calib' */

#if Rte_SysCon_Variant_RGNR_4

static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_r_UndershootProt = 0.0F;/* Referenced by: '<S694>/Calib' */

#endif

#if Rte_SysCon_Variant_RGNR_2

static volatile CONST(float32, RGNR_VAR_INIT) KeRGNR_t_BrkTrqLowFltrFact =
    0.0125F;                           /* Referenced by: '<S538>/Calib' */

#endif

static volatile CONST(float32, RGNR_VAR_INIT) KtRGNC_M_ToTolForRgnDsbl_LSP[14] =
{
    50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F,
    50.0F, 50.0F, 50.0F
} ;                                    /* Referenced by: '<S430>/Vector' */

#if Rte_SysCon_Variant_RGNR_4

static volatile CONST(float32, RGNR_VAR_INIT)
    KtRGNR_Cf_MaxOvrLayRegnBrkTrqScale[100] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 0.0F, 0.82F, 0.82F, 0.82F, 0.82F,
    0.82F, 0.82F, 0.82F, 0.82F, 0.82F, 0.0F, 0.68F, 0.68F, 0.68F, 0.68F, 0.68F,
    0.68F, 0.68F, 0.68F, 0.68F, 0.0F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F,
    0.6F, 0.6F, 0.0F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.0F,
    0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.0F, 0.25F,
    0.25F, 0.25F, 0.25F, 0.25F, 0.25F, 0.25F, 0.25F, 0.25F, 0.0F, 0.17F, 0.17F,
    0.17F, 0.17F, 0.17F, 0.17F, 0.17F, 0.17F, 0.17F, 0.0F, 0.1F, 0.1F, 0.1F,
    0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F
} ;                                    /* Referenced by: '<S695>/Vector' */

#endif

static volatile CONST(float32, RGNR_VAR_INIT) KtRGNR_M_RgnCapBatTmpLmt[4] =
{
    1.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S561>/Vector' */

#if Rte_SysCon_Variant_RGNR_2

static volatile CONST(float32, RGNR_VAR_INIT) KtRGNR_M_RgnCapLimit_BrkSpd[54] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, -1500.0F, -1500.0F, -1500.0F,
    -1500.0F, -1500.0F, -1500.0F, -1500.0F, -1500.0F, -1500.0F, -1500.0F,
    -1500.0F, -1500.0F, -1500.0F, -1500.0F, -1500.0F, -1500.0F, -1500.0F,
    -1500.0F, -1500.0F, -1500.0F, -1500.0F, -1500.0F, -1500.0F, -1500.0F,
    -1500.0F, -1500.0F, -1500.0F, -1500.0F, -1500.0F, -1500.0F, -1500.0F,
    -1500.0F, -1500.0F
} ;                                    /* Referenced by: '<S544>/Vector' */

#endif

static volatile CONST(float32, RGNR_VAR_INIT) KtRGNR_M_RgnCapLimit_VehSpd[9] =
{
    -600.0F, -600.0F, -600.0F, -600.0F, -600.0F, -600.0F, -600.0F, -600.0F,
    -600.0F
} ;                                    /* Referenced by:
                                        * '<S531>/Vector'
                                        * '<S543>/Vector'
                                        */

static volatile CONST(float32, RGNR_VAR_INIT) KtRGNR_M_RgnCapLimit_VehSpd_Frnt[9]
    =
{
    -9999.0F, -9999.0F, -9999.0F, -9999.0F, -9999.0F, -9999.0F, -9999.0F,
    -9999.0F, -9999.0F
} ;                                    /* Referenced by: '<S519>/Vector' */

static volatile CONST(float32, RGNR_VAR_INIT) KtRGNR_M_RgnCapLimit_VehSpd_Rear[9]
    =
{
    -9999.0F, -9999.0F, -9999.0F, -9999.0F, -9999.0F, -9999.0F, -9999.0F,
    -9999.0F, -9999.0F
} ;                                    /* Referenced by: '<S520>/Vector' */

static volatile CONST(float32, RGNR_VAR_INIT)
    KtRGNR_dM_RgnRmpDnAftrPdlRlsLookUp[10] =
{
    -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F,
    -50.0F
} ;                                    /* Referenced by: '<S709>/Vector' */

static volatile CONST(float32, RGNR_VAR_INIT)
    KtRGNR_dM_RgnRmpUpAftrPdlRlsLookUp[10] =
{
    100.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F,
    100.0F
} ;                                    /* Referenced by: '<S710>/Vector' */

#if Rte_SysCon_Variant_RGNR_4

static volatile CONST(float32, RGNR_VAR_INIT) KtRGNR_r_BlendOutCoast2Creep[3] =
{
    1.0F, 1.0F, 0.0F
} ;                                    /* Referenced by: '<S664>/Vector' */

#endif

#if Rte_SysCon_Variant_RGNR_4

static volatile CONST(float32, RGNR_VAR_INIT) KtRGNR_r_BlendOutCreep2Coast[3] =
{
    1.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S665>/Vector' */

#endif

#if Rte_SysCon_Variant_RGNR_4

static volatile CONST(float32, RGNR_VAR_INIT)
    KtRGNR_r_BlendOutFromVturbDelta_LSP[6] =
{
    0.0F, 0.0F, 0.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S676>/Vector' */

#endif

#if Rte_SysCon_Variant_RGNR_4

static volatile CONST(float32, RGNR_VAR_INIT)
    KtRGNR_r_BlendOutFromVturbDelta_RSP[6] =
{
    0.0F, 0.5F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S677>/Vector' */

#endif

#if Rte_SysCon_Variant_RGNR_4

static volatile CONST(float32, RGNR_VAR_INIT)
    KtRGNR_r_BlendOutRateFromVturbDelta_LD[4] =
{
    -1.0F, -1.0F, -1.0F, -1.0F
} ;                                    /* Referenced by: '<S678>/Vector' */

#endif

#if Rte_SysCon_Variant_RGNR_4

static volatile CONST(float32, RGNR_VAR_INIT)
    KtRGNR_r_BlendOutRateFromVturbDelta_LU[4] =
{
    1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S679>/Vector' */

#endif

#if Rte_SysCon_Variant_RGNR_4

static volatile CONST(float32, RGNR_VAR_INIT) KtRGNR_r_BlendOutRgn[7] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.5F, 1.0F
} ;                                    /* Referenced by: '<S648>/Vector' */

#endif

static volatile CONST(float32, RGNR_VAR_INIT) KtRGNR_r_RgnCapaSOCLmt[6] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S560>/Vector' */

static volatile CONST(float32, RGNR_VAR_INIT) KtRGNR_r_RgnCapaSOCLmtEburn[6] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S559>/Vector' */

static volatile CONST(float32, RGNR_VAR_INIT) KtRGNR_t_RgnToAvail[10] =
{
    0.0125F, 0.0125F, 0.0125F, 0.0125F, 0.0125F, 0.0125F, 0.0125F, 0.0125F,
    0.0125F, 0.0125F
} ;                                    /* Referenced by: '<S711>/Vector' */

static volatile CONST(float32, RGNR_VAR_INIT) KtRGNR_t_ToMin4ECMFltTime[10] =
{
    0.0125F, 0.0125F, 0.0125F, 0.0125F, 0.0125F, 0.0125F, 0.0125F, 0.0125F,
    0.0125F, 0.0125F
} ;                                    /* Referenced by: '<S712>/Vector' */

static volatile CONST(float32, RGNR_VAR_INIT) KxRGNC_M_ToTolForRgnDsbl_LSP[14] =
{
    0.0F, 11.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F,
    111.0F, 120.0F, 130.0F
} ;                                    /* Referenced by: '<S430>/Vector' */

#if Rte_SysCon_Variant_RGNR_4

static volatile CONST(float32, RGNR_VAR_INIT)
    KxRGNR_Cf_MaxOvrLayRegnBrkTrqScale[10] =
{
    0.0F, 50.0F, 750.0F, 1250.0F, 2250.0F, 3250.0F, 3750.0F, 4250.0F, 4750.0F,
    5250.0F
} ;                                    /* Referenced by: '<S695>/Vector' */

#endif

static volatile CONST(float32, RGNR_VAR_INIT) KxRGNR_M_RgnCapBatTmpLmt[4] =
{
    40.0F, 49.0F, 50.0F, 51.0F
} ;                                    /* Referenced by: '<S561>/Vector' */

#if Rte_SysCon_Variant_RGNR_2

static volatile CONST(float32, RGNR_VAR_INIT) KxRGNR_M_RgnCapLimit_BrkSpd[6] =
{
    -8.0F, -6.0F, -4.0F, -2.0F, 0.0F, 1.0F
} ;                                    /* Referenced by: '<S544>/Vector' */

#endif

static volatile CONST(float32, RGNR_VAR_INIT) KxRGNR_M_RgnCapLimit_VehSpd[9] =
{
    0.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 100.0F, 130.0F, 160.0F
} ;                                    /* Referenced by:
                                        * '<S531>/Vector'
                                        * '<S543>/Vector'
                                        */

static volatile CONST(float32, RGNR_VAR_INIT) KxRGNR_M_RgnCapLimit_VehSpd_Frnt[9]
    =
{
    0.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 100.0F, 130.0F, 160.0F
} ;                                    /* Referenced by: '<S519>/Vector' */

static volatile CONST(float32, RGNR_VAR_INIT) KxRGNR_M_RgnCapLimit_VehSpd_Rear[9]
    =
{
    0.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 100.0F, 130.0F, 160.0F
} ;                                    /* Referenced by: '<S520>/Vector' */

static volatile CONST(float32, RGNR_VAR_INIT)
    KxRGNR_dM_RgnRmpDnAftrPdlRlsLookUp[10] =
{
    0.0F, 2.46F, 3.1F, 3.7F, 4.0F, 6.17F, 7.46F, 11.62F, 12.21F, 17.44F
} ;                                    /* Referenced by: '<S709>/Vector' */

static volatile CONST(float32, RGNR_VAR_INIT)
    KxRGNR_dM_RgnRmpUpAftrPdlRlsLookUp[10] =
{
    0.0F, 2.46F, 3.1F, 3.7F, 4.0F, 6.17F, 7.46F, 11.62F, 12.21F, 17.44F
} ;                                    /* Referenced by: '<S710>/Vector' */

#if Rte_SysCon_Variant_RGNR_4

static volatile CONST(float32, RGNR_VAR_INIT) KxRGNR_r_BlendOutCoast2Creep[3] =
{
    0.0F, 0.7F, 1.0F
} ;                                    /* Referenced by: '<S664>/Vector' */

#endif

#if Rte_SysCon_Variant_RGNR_4

static volatile CONST(float32, RGNR_VAR_INIT) KxRGNR_r_BlendOutCreep2Coast[3] =
{
    0.0F, 0.4F, 1.0F
} ;                                    /* Referenced by: '<S665>/Vector' */

#endif

#if Rte_SysCon_Variant_RGNR_4

static volatile CONST(float32, RGNR_VAR_INIT)
    KxRGNR_r_BlendOutFromVturbDelta_LSP[6] =
{
    -200.0F, -100.0F, -50.0F, 0.0F, 50.0F, 100.0F
} ;                                    /* Referenced by: '<S676>/Vector' */

#endif

#if Rte_SysCon_Variant_RGNR_4

static volatile CONST(float32, RGNR_VAR_INIT)
    KxRGNR_r_BlendOutFromVturbDelta_RSP[6] =
{
    -200.0F, -100.0F, -50.0F, 0.0F, 50.0F, 100.0F
} ;                                    /* Referenced by: '<S677>/Vector' */

#endif

#if Rte_SysCon_Variant_RGNR_4

static volatile CONST(float32, RGNR_VAR_INIT)
    KxRGNR_r_BlendOutRateFromVturbDelta_LD[4] =
{
    0.0F, 50.0F, 155.0F, 200.0F
} ;                                    /* Referenced by: '<S678>/Vector' */

#endif

#if Rte_SysCon_Variant_RGNR_4

static volatile CONST(float32, RGNR_VAR_INIT)
    KxRGNR_r_BlendOutRateFromVturbDelta_LU[4] =
{
    0.0F, 50.0F, 155.0F, 200.0F
} ;                                    /* Referenced by: '<S679>/Vector' */

#endif

#if Rte_SysCon_Variant_RGNR_4

static volatile CONST(float32, RGNR_VAR_INIT) KxRGNR_r_BlendOutRgn[7] =
{
    -200.0F, -140.0F, -70.0F, -50.0F, 0.0F, 50.0F, 100.0F
} ;                                    /* Referenced by: '<S648>/Vector' */

#endif

static volatile CONST(float32, RGNR_VAR_INIT) KxRGNR_r_RgnCapaSOCLmt[6] =
{
    70.0F, 78.0F, 79.0F, 80.0F, 81.0F, 82.0F
} ;                                    /* Referenced by:
                                        * '<S559>/Vector'
                                        * '<S560>/Vector'
                                        */

static volatile CONST(float32, RGNR_VAR_INIT) KxRGNR_t_RgnToAvail[10] =
{
    0.0F, 2.46F, 3.1F, 3.7F, 4.0F, 6.17F, 7.46F, 11.62F, 12.21F, 17.44F
} ;                                    /* Referenced by: '<S711>/Vector' */

static volatile CONST(float32, RGNR_VAR_INIT) KxRGNR_t_ToMin4ECMFltTime[10] =
{
    0.0F, 2.46F, 3.1F, 3.7F, 4.0F, 6.17F, 7.46F, 11.62F, 12.21F, 17.44F
} ;                                    /* Referenced by: '<S712>/Vector' */

#if Rte_SysCon_Variant_RGNR_4

static volatile CONST(float32, RGNR_VAR_INIT)
    KyRGNR_Cf_MaxOvrLayRegnBrkTrqScale[10] =
{
    0.0F, 0.48F, 0.58F, 0.7F, 0.85F, 1.0F, 1.38F, 1.91F, 2.84F, 4.7F
} ;                                    /* Referenced by: '<S695>/Vector' */

#endif

#if Rte_SysCon_Variant_RGNR_2

static volatile CONST(float32, RGNR_VAR_INIT) KyRGNR_M_RgnCapLimit_BrkSpd[9] =
{
    0.0F, 9.0F, 12.0F, 18.0F, 40.0F, 50.0F, 100.0F, 130.0F, 160.0F
} ;                                    /* Referenced by: '<S544>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_RGNR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_RGNR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_RGNR_4

static VAR(float32, RGNR_VAR_INIT) VeRGNC_Cf_MinCreepBlendingFactorRampOut;/* '<S656>/Sum3' */

#endif

static VAR(float32, RGNR_VAR_INIT) VeRGNC_M_CapRgnAvaiAfterInhRgn;/* '<S212>/Merge1' */
static VAR(float32, RGNR_VAR_INIT) VeRGNC_M_CapRgnAvaiAfterInhRgn_Lin;/* '<S214>/Merge1' */
static VAR(float32, RGNR_VAR_INIT) VeRGNC_M_CapRgnFrntAvaiAfterInhRgn;/* '<S213>/Merge1' */
static VAR(float32, RGNR_VAR_INIT) VeRGNC_M_CapRgnRearAvaiAfterInhRgn;/* '<S213>/Merge3' */
static VAR(float32, RGNR_VAR_INIT) VeRGNC_M_EstRegenAchvdTrq;/* '<S218>/Switch3' */
static VAR(float32, RGNR_VAR_INIT) VeRGNC_M_EstRegenAchvdTrqFltr;/* '<S789>/Sum1' */
static VAR(float32, RGNR_VAR_INIT) VeRGNC_M_InhRgnBrkRmp;/* '<S745>/Sum3' */
static VAR(float32, RGNR_VAR_INIT) VeRGNC_M_InhRgnBrkRmp_Front;/* '<S760>/Sum3' */
static VAR(float32, RGNR_VAR_INIT) VeRGNC_M_InhRgnBrkRmp_Lin;/* '<S774>/Sum3' */
static VAR(float32, RGNR_VAR_INIT) VeRGNC_M_InhRgnBrkRmp_Rear;/* '<S761>/Sum3' */
static VAR(float32, RGNR_VAR_INIT) VeRGNC_M_RegenCapFrnt_Raw_Avail;/* '<S470>/Gain' */
static VAR(float32, RGNR_VAR_INIT) VeRGNC_M_RegenCapLim;/* '<S346>/MinMax3' */
static VAR(float32, RGNR_VAR_INIT) VeRGNC_M_RegenCapRaw;/* '<S346>/mult.' */
static VAR(float32, RGNR_VAR_INIT) VeRGNC_M_RegenCapRawWithoutLim;/* '<S346>/Subtraction4' */

#if Rte_SysCon_Variant_RGNR_1

static VAR(float32, RGNR_VAR_INIT) VeRGNC_M_RegenCapRawWithoutLim_Lin;/* '<S347>/Subtraction4' */

#endif

static VAR(float32, RGNR_VAR_INIT) VeRGNC_M_RegenCapRear_Raw_Avail;/* '<S471>/Gain' */
static VAR(float32, RGNR_VAR_INIT) VeRGNC_M_RgnAvaiBefInhReg;/* '<S719>/Gain' */

#if Rte_SysCon_Variant_RGNR_1

static VAR(float32, RGNR_VAR_INIT) VeRGNC_M_RgnAvaiBefInhReg_Lin;/* '<S725>/Gain' */

#endif

static VAR(float32, RGNR_VAR_INIT) VeRGNC_M_RgnAvailAfterDecelLimit;/* '<S339>/MinMax1' */
static VAR(float32, RGNR_VAR_INIT) VeRGNC_M_RgnAvailAfterDecelLimit_Frnt;/* '<S339>/MinMax2' */

#if Rte_SysCon_Variant_RGNR_1

static VAR(float32, RGNR_VAR_INIT) VeRGNC_M_RgnAvailAfterDecelLimit_Lin;/* '<S339>/MinMax4' */

#endif

static VAR(float32, RGNR_VAR_INIT) VeRGNC_M_RgnAvailAfterDecelLimit_Rear;/* '<S339>/MinMax3' */
static VAR(float32, RGNR_VAR_INIT) VeRGNC_M_RgnAvailBeforeDeact;/* '<S339>/Summation' */
static VAR(float32, RGNR_VAR_INIT) VeRGNC_M_RgnAvailBeforeDecelLimit;/* '<S508>/Switch1' */
static VAR(float32, RGNR_VAR_INIT) VeRGNC_M_RgnAvailBeforeDecelLimit_Frnt;/* '<S509>/Switch1' */

#if Rte_SysCon_Variant_RGNR_1

static VAR(float32, RGNR_VAR_INIT) VeRGNC_M_RgnAvailBeforeDecelLimit_Lin;/* '<S511>/Switch1' */

#endif

static VAR(float32, RGNR_VAR_INIT) VeRGNC_M_RgnAvailBeforeDecelLimit_Rear;/* '<S510>/Switch1' */
static VAR(boolean, RGNR_VAR_INIT) VeRGNC_b_AccelPedalMet;/* '<S346>/ 1' */
static VAR(boolean, RGNR_VAR_INIT) VeRGNC_b_AccelToMet;/* '<S346>/Logical2' */
static VAR(boolean, RGNR_VAR_INIT) VeRGNC_b_AeCoast_AccSystemSts;/* '<S228>/Logical Operator' */
static VAR(boolean, RGNR_VAR_INIT) VeRGNC_b_AeCoast_CcEngaged;/* '<S209>/Logical Operator17' */
static VAR(boolean, RGNR_VAR_INIT) VeRGNC_b_CondOkTotRegenReq;/* '<S70>/Logical3' */
static VAR(boolean, RGNR_VAR_INIT) VeRGNC_b_CrsCntrlActvMet;/* '<S346>/ 2' */
static VAR(boolean, RGNR_VAR_INIT) VeRGNC_b_DeactvAeCoast_BatModTmp;/* '<S233>/Switch1' */
static VAR(boolean, RGNR_VAR_INIT) VeRGNC_b_DeactvAeCoast_BatPackSOC_Arb;/* '<S232>/Switch' */
static VAR(boolean, RGNR_VAR_INIT) VeRGNC_b_DeactvAeCoast_DsblRet2Idle;/* '<S209>/Logical Operator3' */
static VAR(float32, RGNR_VAR_INIT) VeRGNC_b_DeactvAeCoast_ModeHTDRState;/* '<S307>/Switch1' */
static VAR(boolean, RGNR_VAR_INIT) VeRGNC_b_DeactvAeCoast_RunCrankActive;/* '<S247>/Switch1' */
static VAR(boolean, RGNR_VAR_INIT) VeRGNC_b_DeactvAeCoast_TrnsfrCsRng;/* '<S251>/Switch1' */
static VAR(boolean, RGNR_VAR_INIT) VeRGNC_b_DeactvAeCoast_VehSpdSigned;/* '<S271>/Switch1' */
static VAR(boolean, RGNR_VAR_INIT) VeRGNC_b_DeactvAeCoast_VldtdTransRngSt;/* '<S229>/Selector' */
static VAR(boolean, RGNR_VAR_INIT) VeRGNC_b_MtrFlt;/* '<S237>/Logical Operator' */
static VAR(boolean, RGNR_VAR_INIT) VeRGNC_b_RegenAvailDtrmn;/* '<S346>/AND1' */
static VAR(boolean, RGNR_VAR_INIT) VeRGNC_b_RegenRampOutReset;/* '<S13>/Logical3' */
static VAR(boolean, RGNR_VAR_INIT) VeRGNC_b_RegenRampOutSet;/* '<S13>/Logical' */
static VAR(float32, RGNR_VAR_INIT) VeRGNC_r_Deactv_BatModTmp;/* '<S561>/Vector' */
static VAR(float32, RGNR_VAR_INIT) VeRGNC_r_Deactv_BatPackSOC_Arb;/* '<S560>/Vector' */
static VAR(float32, RGNR_VAR_INIT) VeRGNC_r_Deactv_ModeHTDRState;/* '<S550>/Product1' */
static VAR(float32, RGNR_VAR_INIT) VeRGNC_r_Deactv_MtrBSpd;/* '<S551>/Switch' */
static VAR(float32, RGNR_VAR_INIT) VeRGNC_r_Deactv_RunCrankActive;/* '<S636>/Switch1' */
static VAR(float32, RGNR_VAR_INIT) VeRGNC_r_Deactv_TopVehSpd;/* '<S569>/Switch' */
static VAR(float32, RGNR_VAR_INIT) VeRGNC_r_Deactv_TrnsfrCsRng;/* '<S643>/Switch1' */
static VAR(float32, RGNR_VAR_INIT) VeRGNC_r_Deactv_VehSpdSigned;/* '<S568>/Switch' */
static VAR(float32, RGNR_VAR_INIT) VeRGNC_r_Deactv_VldtdTransRngSt;/* '<S625>/Switch1' */

#if Rte_SysCon_Variant_RGNR_4

static VAR(float32, RGNR_VAR_INIT) VeRGNC_r_DeltVturbRampOut;/* '<S670>/Sum3' */

#endif

static VAR(float32, RGNR_VAR_INIT) VeRGNC_r_RaceModeStsInhibit;/* '<S635>/Switch1' */
static VAR(float32, RGNR_VAR_INIT) VeRGNC_r_RegenCapFact;/* '<S341>/Multiplication3' */
static VAR(float32, RGNR_VAR_INIT) VeRGNC_r_RegenCapFactOvrd;/* '<S545>/Switch1' */
static VAR(float32, RGNR_VAR_INIT) VeRGNC_r_RegenCapacity_BlendRatio;/* '<S381>/Switch' */

#if Rte_SysCon_Variant_RGNR_4

static VAR(float32, RGNR_VAR_INIT) VeRGNR_Cf_BlendOutFac;/* '<S651>/Switch1' */

#endif

#if Rte_SysCon_Variant_RGNR_4

static VAR(float32, RGNR_VAR_INIT) VeRGNR_Cf_MaxOvrLayRegnBrkTrqScale;/* '<S696>/Switch' */

#endif

#if !Rte_SysCon_Variant_RGNR_5

static VAR(float32, RGNR_VAR_INIT) VeRGNR_Cf_RegnBrkTorqActv;/* '<S30>/Data Type Conversion2' */

#endif

#if !Rte_SysCon_Variant_RGNR_5

static VAR(boolean, RGNR_VAR_INIT) VeRGNR_Cf_RegnBrkTorqActvPre;/* '<S30>/Logical3' */

#endif

static VAR(float32, RGNR_VAR_INIT) VeRGNR_M_CmndRegenHTDR_Frnt;/* '<S218>/Subtraction2' */
static VAR(float32, RGNR_VAR_INIT) VeRGNR_M_CmndRegenHTDR_Rear;/* '<S218>/Subtraction3' */
static VAR(float32, RGNR_VAR_INIT) VeRGNR_M_CrsToRtLim;/* '<S416>/Sum3' */
static VAR(float32, RGNR_VAR_INIT) VeRGNR_M_OptToGrdFil;/* '<S459>/Gain' */
static VAR(float32, RGNR_VAR_INIT) VeRGNR_M_OptToGrdFilCnstr;/* '<S415>/Switch' */

#if Rte_SysCon_Variant_RGNR_1

static VAR(float32, RGNR_VAR_INIT) VeRGNR_M_OptToGrdFilCnstr_Lin;/* '<S477>/Switch' */

#endif

#if Rte_SysCon_Variant_RGNR_1

static VAR(float32, RGNR_VAR_INIT) VeRGNR_M_OptToGrdFil_Lin;/* '<S503>/Gain' */

#endif

static VAR(float32, RGNR_VAR_INIT) VeRGNR_M_OptToRtLim;/* '<S389>/Sum3' */
static VAR(float32, RGNR_VAR_INIT) VeRGNR_M_OptToRtLimFlt;/* '<S388>/Switch1' */
static VAR(float32, RGNR_VAR_INIT) VeRGNR_M_OptToRtLimFlt_Frnt;/* '<S396>/Switch1' */
static VAR(float32, RGNR_VAR_INIT) VeRGNR_M_OptToRtLimFlt_Rear;/* '<S397>/Switch1' */
static VAR(float32, RGNR_VAR_INIT) VeRGNR_M_OptToRtLim_Frnt;/* '<S398>/Sum3' */

#if Rte_SysCon_Variant_RGNR_1

static VAR(float32, RGNR_VAR_INIT) VeRGNR_M_OptToRtLim_Lin;/* '<S408>/Sum3' */

#endif

static VAR(float32, RGNR_VAR_INIT) VeRGNR_M_OptToRtLim_Rear;/* '<S399>/Sum3' */
static VAR(float32, RGNR_VAR_INIT) VeRGNR_M_RegenCapacity_StrtStpHat;/* '<S360>/MinMax' */
static VAR(float32, RGNR_VAR_INIT) VeRGNR_M_ToMinCoastRed;/* '<S346>/Subtraction1' */
static VAR(float32, RGNR_VAR_INIT) VeRGNR_M_TotalTrgtTrq_withRegen;/* '<S218>/Subtraction4' */
static VAR(float32, RGNR_VAR_INIT) VeRGNR_Pct_AccActPosRtLim;/* '<S417>/Sum3' */
static VAR(boolean, RGNR_VAR_INIT) VeRGNR_b_AccelPedalPositionMet;/* '<S8>/Comparison1' */
static VAR(boolean, RGNR_VAR_INIT) VeRGNR_b_AccelToReqThrsMet;/* '<S8>/Comparison3' */
static VAR(boolean, RGNR_VAR_INIT) VeRGNR_b_BeltLimitOpen;/* '<S8>/Comparison10' */
static VAR(boolean, RGNR_VAR_INIT) VeRGNR_b_BrkRgnReqThrsMet;/* '<S8>/NOT9' */
static VAR(boolean, RGNR_VAR_INIT) VeRGNR_b_DeactvAeCoast_InhRgnAct;/* '<S209>/Logical Operator2' */
static VAR(boolean, RGNR_VAR_INIT) VeRGNR_b_DeactvAeCoast_MotorTemp;/* '<S316>/Switch1' */
static VAR(boolean, RGNR_VAR_INIT) VeRGNR_b_HTDRPbattLimitOpen;/* '<S8>/Comparison9' */
static VAR(boolean, RGNR_VAR_INIT) VeRGNR_b_HVCrrntThrsMet;/* '<S8>/Comparison4' */
static VAR(boolean, RGNR_VAR_INIT) VeRGNR_b_MHEVRegenRampOutReqActv;/* '<S68>/OR1' */
static VAR(boolean, RGNR_VAR_INIT) VeRGNR_b_MtrTrqLimitOpen;/* '<S8>/Comparison2' */
static VAR(boolean, RGNR_VAR_INIT) VeRGNR_b_PHEVRegenRampOutReqActv;/* '<S57>/Switch1' */
static VAR(boolean, RGNR_VAR_INIT) VeRGNR_b_PbattLimitOpen;/* '<S8>/Comparison5' */

#if Rte_SysCon_Variant_RGNR_4

static VAR(boolean, RGNR_VAR_INIT) VeRGNR_b_RngSt_N_M1;/* '<S651>/Logical1' */

#endif

static VAR(uint8, RGNR_VAR_INIT) VeRGNR_e_RollTestStatus_PID;/* '<Root>/DSM_2' */
static VAR(uint8, RGNR_VAR_INIT) VeRGNR_g_RollTestOBDStatus;/* '<Root>/DSM_1' */

#if Rte_SysCon_Variant_RGNR_4

static VAR(float32, RGNR_VAR_INIT) VeRGNR_n_EngSpDeltaFromIdle;/* '<S697>/Switch' */

#endif

#if Rte_SysCon_Variant_RGNR_4

static VAR(float32, RGNR_VAR_INIT) VeRGNR_n_InputShaftSpeed;/* '<S651>/Switch3' */

#endif

#if Rte_SysCon_Variant_RGNR_4

static VAR(float32, RGNR_VAR_INIT) VeRGNR_r_BlendOutCoast2Creep;/* '<S664>/Vector' */

#endif

#if Rte_SysCon_Variant_RGNR_4

static VAR(float32, RGNR_VAR_INIT) VeRGNR_r_BlendOutCreep2Coast;/* '<S665>/Vector' */

#endif

static VAR(float32, RGNR_VAR_INIT) VeRGNR_r_Deactv_1stGearSel;/* '<S640>/Switch1' */
static VAR(float32, RGNR_VAR_INIT) VeRGNR_r_RIPEfficiencyRaw;/* '<S218>/Switch1' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_RGNR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_RGNR
#include "MemMap.h"

CONST(ConstB_RGNR_ac_T, RGNR_VAR_INIT) RGNR_ac_ConstB =
{
    CeODCR_e_Return_ECU_Cntrl          /* '<S822>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_RGNR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_RGNR
#include "MemMap.h"

CONST(ConstP_RGNR_ac_T, RGNR_VAR_INIT) RGNR_ac_ConstP =
{

#if Rte_SysCon_Variant_RGNR_2

    /* Computed Parameter: Vector_maxIndex
     * Referenced by: '<S544>/Vector'
     */
    {
        5U, 8U
    },

#endif

#if Rte_SysCon_Variant_RGNR_4

    /* Computed Parameter: Vector_maxIndex_p
     * Referenced by: '<S695>/Vector'
     */
    {
        9U, 9U
    },

#endif

#ifndef CONSTP_RGNR_AC_T_VARIANT_EXISTS

    0
#endif
};

#define STOP_SEC_CONST_UNSPECIFIED_RGNR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_RGNR
#include "MemMap.h"

VAR(B_RGNR_ac_T, RGNR_VAR_INIT) RGNR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_RGNR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_RGNR
#include "MemMap.h"

VAR(DW_RGNR_ac_T, RGNR_VAR_INIT) RGNR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_RGNR
#include "MemMap.h"

static FUNC(void, RGNR_CODE_LOCAL) RGNR_ac_Pass(VAR(float32, AUTOMATIC) rtu_In1,
    P2VAR(float32, AUTOMATIC, RGNR_VAR_INIT) rty_Out1);
static FUNC(void, RGNR_CODE_LOCAL) RGNR_ac_NormOp(VAR(float32, AUTOMATIC)
    rtu_In1, P2VAR(float32, AUTOMATIC, RGNR_VAR_INIT) rty_CapRgnAvaiAfterInhRgn);

/*
 * Output and update for action system:
 *    '<S357>/Pass'
 *    '<S357>/Pass1'
 */
static FUNC(void, RGNR_CODE_LOCAL) RGNR_ac_Pass(VAR(float32, AUTOMATIC) rtu_In1,
    P2VAR(float32, AUTOMATIC, RGNR_VAR_INIT) rty_Out1)
{
    /* Gain: '<S371>/Gain' */
    *rty_Out1 = rtu_In1;
}

/*
 * Output and update for action system:
 *    '<S212>/NormOp'
 *    '<S214>/NormOp'
 */
static FUNC(void, RGNR_CODE_LOCAL) RGNR_ac_NormOp(VAR(float32, AUTOMATIC)
    rtu_In1, P2VAR(float32, AUTOMATIC, RGNR_VAR_INIT) rty_CapRgnAvaiAfterInhRgn)
{
    /* Inport: '<S743>/In1' */
    *rty_CapRgnAvaiAfterInhRgn = rtu_In1;
}

/* Model step function for TID1 */
FUNC(void, RGNR_CODE) RGNR_MedTEB2(void) /* Explicit Task: MedTEB2 */
{
    /* local block i/o variables */
    float32 rtb_VeRGNC_M_RgnReqAftrDecelLimit_write_;
    float32 rtb_Merge_a;
    float32 rtb_Sum2_n5;
    float32 rtb_Switch1_d;
    float32 rtb_Switch_pv;
    float32 rtb_TmpSignalConversionAtVeAPSR_Pct_Ac_a;
    float32 rtb_TmpSignalConversionAtVeAPSR_Pct_Acce;
    float32 rtb_TmpSignalConversionAtVeATRR_M_DrvI_e;
    float32 rtb_TmpSignalConversionAtVeATRR_M_OutT_l;
    float32 rtb_TmpSignalConversionAtVeHVTR_I_HV_Bat;
    float32 rtb_TmpSignalConversionAtVeMSPR_n_MtrA_S;
    float32 rtb_TmpSignalConversionAtVeMSPR_n_MtrB_b;
    float32 rtb_TmpSignalConversionAtVeOHSR_n_TransM;
    float32 rtb_TmpSignalConversionAtVeRGNC_M_RegenB;
    float32 rtb_TmpSignalConversionAtVeRGNR_M_Rege_g;
    float32 rtb_TmpSignalConversionAtVeRGNR_M_RegenB;
    float32 rtb_VariantMerge_For_Variant_Source_Va_h;
    float32 tmpRead;
    float32 tmpRead_0;
    float32 tmpRead_1;
    float32 tmpRead_2;
    float32 tmpRead_3;
    float32 tmpRead_4;
    float32 tmpRead_5;
    float32 tmpRead_6;
    float32 tmpRead_7;
    float32 tmpRead_8;
    uint8 rtb_BitwiseLogicalOperator10;
    uint8 rtb_BitwiseLogicalOperator11;
    uint8 rtb_BitwiseLogicalOperator12;
    uint8 rtb_BitwiseLogicalOperator13;
    uint8 rtb_BitwiseLogicalOperator14;
    uint8 rtb_BitwiseLogicalOperator15;
    uint8 rtb_BitwiseLogicalOperator2;
    uint8 rtb_BitwiseLogicalOperator4;
    uint8 rtb_BitwiseLogicalOperator5;
    uint8 rtb_BitwiseLogicalOperator6;
    uint8 rtb_BitwiseLogicalOperator7;
    uint8 rtb_BitwiseLogicalOperator8;
    uint8 rtb_BitwiseLogicalOperator9;
    boolean rtb_NOT8;
    boolean rtb_OR1_c;
    boolean rtb_OR4;
    boolean rtb_OR6;
    boolean rtb_OR9;
    boolean rtb_TmpSignalConversionAtVeAECR_b_AeCo_j;
    boolean rtb_TmpSignalConversionAtVeRGNC_b_InhRgn;

#if !Rte_SysCon_Variant_RGNR_5

    TeDTRR_e_SumFWIDFst rtb_TmpSignalConversionAtVeDTRR_e_SumF_e;

#endif

    float32 Product1_e;
    TeFWDR_e_TrnsfrCaseRange rtb_TmpSignalConversionAtVeFWDR_e_Tcas_d;
    TeHSER_e_RngSt rtb_TmpSignalConversionAtVeHSER_e_RngStO;
    TeOHSR_e_RngSel rtb_TmpSignalConversionAtVeOHSR_e_RngDsr;
    TeTRGR_e_TransRangeState rtb_TmpSignalConversionAtVeTRGR_e_Vldt_g;
    uint8 VeRGNR_b_RollTestStatus_PID_BIT0;
    uint8 VeRGNR_g_RollTestOBDStatus_BIT0;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB2' incorporates:
     *  SubSystem: '<Root>/RGNR_MedTEB2'
     */
    /* SignalConversion generated from: '<S2>/VeRGNC_M_RgnReqAftrDecelLimit_read' incorporates:
     *  Merge: '<Root>/Merge_1_Irv'
     */
    rtb_VeRGNC_M_RgnReqAftrDecelLimit_write_ =
        Rte_IrvRead_RGNR_MedTEB2_VeRGNC_M_RgnReqAftrDecelLimit_write_IRV();

    /* SignalConversion generated from: '<S2>/VeRGNC_b_InhRgnAct_Read' incorporates:
     *  Merge: '<Root>/VeRGNC_b_InhRgnAct_IRV_Merge'
     */
    rtb_TmpSignalConversionAtVeRGNC_b_InhRgn =
        Rte_IrvRead_RGNR_MedTEB2_VeRGNC_b_InhRgnAct_write_IRV();

    /* SignalConversion generated from: '<S2>/VeATRR_M_OutTrqReqImmWithoutSEM' incorporates:
     *  Inport: '<Root>/VeATRR_M_OutTrqReqImmWithoutSEM'
     */
    (void)Rte_Read_VeATRR_M_OutTrqReqImmWithoutSEM_Value
        (&rtb_TmpSignalConversionAtVeATRR_M_OutT_l);

    /* SignalConversion generated from: '<S2>/VeHVTR_I_HV_BattCurrent' incorporates:
     *  Inport: '<Root>/VeHVTR_I_HV_BattCurrent'
     */
    (void)Rte_Read_VeHVTR_I_HV_BattCurrent_Value
        (&rtb_TmpSignalConversionAtVeHVTR_I_HV_Bat);

    /* SignalConversion generated from: '<S2>/VeRGNC_M_RegenBrkOutTorqCap_read' incorporates:
     *  Merge: '<Root>/Merge_2_Irv'
     */
    rtb_TmpSignalConversionAtVeRGNC_M_RegenB =
        Rte_IrvRead_RGNR_MedTEB2_VeRGNC_M_RegenBrkOutTorqCap_write_IRV();

    /* SignalConversion generated from: '<S2>/VeAPSR_Pct_AccelPedalEffPosition' incorporates:
     *  Inport: '<Root>/VeAPSR_Pct_AccelPedalEffPosition'
     */
    (void)Rte_Read_VeAPSR_Pct_AccelPedalEffPosition_Value
        (&rtb_TmpSignalConversionAtVeAPSR_Pct_Acce);

    /* SignalConversion generated from: '<S2>/VeMSPR_n_MtrA_Spd' incorporates:
     *  Inport: '<Root>/VeMSPR_n_MtrA_Spd'
     */
    (void)Rte_Read_VeMSPR_n_MtrA_Spd_Value
        (&rtb_TmpSignalConversionAtVeMSPR_n_MtrA_S);

    /* SignalConversion generated from: '<S2>/VeMSPR_n_MtrB_Spd' incorporates:
     *  Inport: '<Root>/VeMSPR_n_MtrB_Spd'
     */
    (void)Rte_Read_VeMSPR_n_MtrB_Spd_Value
        (&rtb_TmpSignalConversionAtVeMSPR_n_MtrB_b);

    /* SignalConversion generated from: '<S2>/VeATRR_M_DrvIntndTotBrkOutTorq' incorporates:
     *  Inport: '<Root>/VeATRR_M_DrvIntndTotBrkOutTorq'
     */
    (void)Rte_Read_VeATRR_M_DrvIntndTotBrkOutTorq_Value
        (&rtb_TmpSignalConversionAtVeATRR_M_DrvI_e);

    /* SignalConversion generated from: '<S2>/VeTRGR_e_VldtdTransRngSt' incorporates:
     *  Inport: '<Root>/VeTRGR_e_VldtdTransRngSt'
     */
    (void)Rte_Read_VeTRGR_e_VldtdTransRngSt_Value
        (&rtb_TmpSignalConversionAtVeTRGR_e_Vldt_g);

    /* SignalConversion generated from: '<S2>/VeFWDR_e_Tcase_Stat' incorporates:
     *  Inport: '<Root>/VeFWDR_e_Tcase_Stat'
     */
    (void)Rte_Read_VeFWDR_e_Tcase_Stat_Value
        (&rtb_TmpSignalConversionAtVeFWDR_e_Tcas_d);

    /* SignalConversion generated from: '<S2>/VeDTRR_e_SumFWIDFst' */
#if !Rte_SysCon_Variant_RGNR_5

    /* SignalConversion generated from: '<S2>/VeDTRR_e_SumFWIDFst' incorporates:
     *  Inport: '<Root>/VeDTRR_e_SumFWIDFst'
     */
    (void)Rte_Read_VeDTRR_e_SumFWIDFst_Value
        (&rtb_TmpSignalConversionAtVeDTRR_e_SumF_e);

#endif

    /* End of SignalConversion generated from: '<S2>/VeDTRR_e_SumFWIDFst' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB2' */

    /* Inport: '<Root>/VeBTQR_M_RegenBrkRearOffsetReq' */
    (void)Rte_Read_VeBTQR_M_RegenBrkRearOffsetReq_Value(&tmpRead_8);

    /* Inport: '<Root>/VeBTQR_M_RegenBrkFrontOffsetReq' */
    (void)Rte_Read_VeBTQR_M_RegenBrkFrontOffsetReq_Value(&rtb_Merge_a);

    /* Inport: '<Root>/VeATRR_M_OutReqBrakeTorq' */
    (void)Rte_Read_VeATRR_M_OutReqBrakeTorq_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB2' incorporates:
     *  SubSystem: '<Root>/RGNR_MedTEB2'
     */
    /* SignalConversion generated from: '<S2>/VeHSER_e_RngSt' incorporates:
     *  Inport: '<Root>/VeHSER_e_RngSt'
     */
    (void)Rte_Read_VeHSER_e_RngSt_Value
        (&rtb_TmpSignalConversionAtVeHSER_e_RngStO);

    /* SignalConversion generated from: '<S2>/VeOHSR_e_RngDsrd' incorporates:
     *  Inport: '<Root>/VeOHSR_e_RngDsrd'
     */
    (void)Rte_Read_VeOHSR_e_RngDsrd_Value
        (&rtb_TmpSignalConversionAtVeOHSR_e_RngDsr);

    /* SignalConversion generated from: '<S2>/VeOHSR_n_TransMinEngSpd' incorporates:
     *  Inport: '<Root>/VeOHSR_n_TransMinEngSpd'
     */
    (void)Rte_Read_VeOHSR_n_TransMinEngSpd_Value
        (&rtb_TmpSignalConversionAtVeOHSR_n_TransM);

    /* SignalConversion generated from: '<S2>/VeAPSR_Pct_AccelPedalActPosition' incorporates:
     *  Inport: '<Root>/VeAPSR_Pct_AccelPedalActPosition'
     */
    (void)Rte_Read_VeAPSR_Pct_AccelPedalActPosition_Value
        (&rtb_TmpSignalConversionAtVeAPSR_Pct_Ac_a);

    /* SignalConversion generated from: '<S2>/VeAECR_b_AeCoastStat' incorporates:
     *  Inport: '<Root>/VeAECR_b_AeCoastStat'
     */
    (void)Rte_Read_VeAECR_b_AeCoastStat_Value
        (&rtb_TmpSignalConversionAtVeAECR_b_AeCo_j);

    /* SignalConversion generated from: '<S2>/VeRGNR_M_RegenBrkOutTorqCap_Frnt_Sign_read' incorporates:
     *  Merge: '<Root>/Merge_10'
     */
    rtb_TmpSignalConversionAtVeRGNR_M_RegenB =
        Rte_IrvRead_RGNR_MedTEB2_VeRGNR_M_RegenBrkOutTorqCap_Frnt_Sign_write_IRV
        ();

    /* SignalConversion generated from: '<S2>/VeRGNR_M_RegenBrkOutTorqCap_Rear_Sign_read' incorporates:
     *  Merge: '<Root>/Merge_11'
     */
    rtb_TmpSignalConversionAtVeRGNR_M_Rege_g =
        Rte_IrvRead_RGNR_MedTEB2_VeRGNR_M_RegenBrkOutTorqCap_Rear_Sign_write_IRV
        ();

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/MainRgnCntrl'
     */
    /* Outputs for Atomic SubSystem: '<S9>/Variant Subsystem' */
#if Rte_SysCon_Variant_RGNR_3

    /* Outputs for Atomic SubSystem: '<S27>/GradLim_RegTrqReq' */
    /* Inport: '<Root>/VeTTIR_dM_TCM_TrqGradLim_Lo' */
    (void)Rte_Read_VeTTIR_dM_TCM_TrqGradLim_Lo_Value(&rtb_Switch_pv);

    /* Outputs for Atomic SubSystem: '<S33>/Limiter' */
    /* Switch: '<S39>/Switch1' incorporates:
     *  Constant: '<S33>/Constant Value2'
     *  Gain: '<S7>/Control_signal_is_neg'
     *  RelationalOperator: '<S39>/Relational Operator'
     */
    if (0.0F < (-tmpRead))
    {
        /* Switch: '<S40>/Switch1' */
        rtb_Switch1_d = 0.0F;
    }
    else
    {
        /* Switch: '<S40>/Switch1' */
        rtb_Switch1_d = -tmpRead;
    }

    /* End of Switch: '<S39>/Switch1' */

    /* Switch: '<S39>/Switch' incorporates:
     *  RelationalOperator: '<S39>/Relational Operator1'
     */
    if (rtb_Switch1_d <= rtb_TmpSignalConversionAtVeRGNC_M_RegenB)
    {
        rtb_Switch1_d = rtb_TmpSignalConversionAtVeRGNC_M_RegenB;
    }

    /* End of Switch: '<S39>/Switch' */
    /* End of Outputs for SubSystem: '<S33>/Limiter' */

    /* VariantMerge generated from: '<S27>/VeRGNC_M_RegenBrkAxleTrqReq_xSEM_NoGrd' incorporates:
     *  Constant: '<S36>/Calib'
     *  Gain: '<S33>/Control_signal_is_neg2'
     *  MinMax: '<S33>/Maximum'
     */
    RGNR_ac_B.VariantMergeForOutportVeRGNC_M_RegenBrkA = -fmaxf(rtb_Switch1_d,
        KeRGNR_M_VehDecelRgnLimit);

    /* Switch: '<S33>/Switch' incorporates:
     *  Constant: '<S38>/Calib'
     *  Inport: '<Root>/VeTTIR_b_TCM_TrqGradLimActive'
     *  Logic: '<S33>/AND'
     */
    if ((rtb_Switch_pv != 0.0F) && (KeRGNR_b_GradLimEnable))
    {
        (void)Rte_Read_VeTTIR_b_TCM_TrqGradLimActive_Value(&rtb_OR4);

        /* Switch: '<S33>/Switch' incorporates:
         *  Constant: '<S42>/Calib'
         *  Inport: '<Root>/VeTTIR_b_TCM_TrqGradLimActive'
         *  Product: '<S33>/Product'
         */
        rtb_Switch_pv = rtb_OR4 ? HeRGNR_t_DT : 0.0F;
    }
    else
    {
        /* Switch: '<S33>/Switch' incorporates:
         *  Constant: '<S41>/Calib'
         */
        rtb_Switch_pv = KeRGNR_dM_RegReq_LD;
    }

    /* End of Switch: '<S33>/Switch' */

    /* Outputs for Atomic SubSystem: '<S33>/GradientLimiter' */
    /* Sum: '<S35>/Sum2' incorporates:
     *  Gain: '<S7>/Control_signal_is_neg'
     *  UnitDelay: '<S35>/Unit Delay'
     */
    rtb_Switch1_d = (-tmpRead) - RGNR_ac_DW.UnitDelay_DSTATE_n1;

    /* Outputs for Atomic SubSystem: '<S35>/Limiter' */
    /* Switch: '<S44>/Switch1' incorporates:
     *  Constant: '<S43>/Calib'
     *  RelationalOperator: '<S44>/Relational Operator'
     */
    if (KeRGNR_dM_RegReq_LU < rtb_Switch1_d)
    {
        /* Switch: '<S44>/Switch1' */
        rtb_Switch1_d = KeRGNR_dM_RegReq_LU;
    }

    /* End of Switch: '<S44>/Switch1' */

    /* Switch: '<S44>/Switch' incorporates:
     *  RelationalOperator: '<S44>/Relational Operator1'
     */
    if (rtb_Switch1_d > rtb_Switch_pv)
    {
        rtb_Switch_pv = rtb_Switch1_d;
    }

    /* End of Switch: '<S44>/Switch' */
    /* End of Outputs for SubSystem: '<S35>/Limiter' */

    /* Sum: '<S35>/Sum3' incorporates:
     *  UnitDelay: '<S35>/Unit Delay'
     */
    RGNR_ac_DW.UnitDelay_DSTATE_n1 += rtb_Switch_pv;

    /* End of Outputs for SubSystem: '<S33>/GradientLimiter' */

    /* Outputs for Atomic SubSystem: '<S33>/Limiter1' */
    /* Switch: '<S40>/Switch1' incorporates:
     *  Constant: '<S33>/Constant Value1'
     *  RelationalOperator: '<S40>/Relational Operator'
     *  UnitDelay: '<S35>/Unit Delay'
     */
    if (0.0F < RGNR_ac_DW.UnitDelay_DSTATE_n1)
    {
        /* Switch: '<S40>/Switch1' */
        rtb_Switch1_d = 0.0F;
    }
    else
    {
        /* Switch: '<S40>/Switch1' */
        rtb_Switch1_d = RGNR_ac_DW.UnitDelay_DSTATE_n1;
    }

    /* End of Switch: '<S40>/Switch1' */

    /* Switch: '<S40>/Switch' incorporates:
     *  RelationalOperator: '<S40>/Relational Operator1'
     */
    if (rtb_Switch1_d <= rtb_TmpSignalConversionAtVeRGNC_M_RegenB)
    {
        rtb_Switch1_d = rtb_TmpSignalConversionAtVeRGNC_M_RegenB;
    }

    /* End of Switch: '<S40>/Switch' */
    /* End of Outputs for SubSystem: '<S33>/Limiter1' */

    /* VariantMerge generated from: '<S27>/VeRGNC_M_RgnReq_xSEM' incorporates:
     *  Constant: '<S37>/Calib'
     *  MinMax: '<S33>/Maximum1'
     */
    rtb_Switch_pv = fmaxf(rtb_Switch1_d, KeRGNR_M_VehDecelRgnLimit);

    /* End of Outputs for SubSystem: '<S27>/GradLim_RegTrqReq' */
#else

    /* Outputs for Atomic SubSystem: '<S27>/NoGradLim_RegTrqReq' */
    /* Outputs for Atomic SubSystem: '<S34>/Limiter' */
    /* Switch: '<S46>/Switch1' incorporates:
     *  Constant: '<S34>/Constant Value2'
     *  Gain: '<S7>/Control_signal_is_neg'
     *  RelationalOperator: '<S46>/Relational Operator'
     */
    if (0.0F < (-tmpRead))
    {
        /* Switch: '<S46>/Switch1' */
        rtb_Switch_pv = 0.0F;
    }
    else
    {
        /* Switch: '<S46>/Switch1' */
        rtb_Switch_pv = -tmpRead;
    }

    /* End of Switch: '<S46>/Switch1' */

    /* Switch: '<S46>/Switch' incorporates:
     *  RelationalOperator: '<S46>/Relational Operator1'
     */
    if (rtb_Switch_pv <= rtb_TmpSignalConversionAtVeRGNC_M_RegenB)
    {
        rtb_Switch_pv = rtb_TmpSignalConversionAtVeRGNC_M_RegenB;
    }

    /* End of Switch: '<S46>/Switch' */
    /* End of Outputs for SubSystem: '<S34>/Limiter' */

    /* VariantMerge generated from: '<S27>/VeRGNC_M_RgnReq_xSEM' incorporates:
     *  Constant: '<S45>/Calib'
     *  MinMax: '<S34>/Maximum'
     */
    rtb_Switch_pv = fmaxf(rtb_Switch_pv, KeRGNR_M_VehDecelRgnLimit);

    /* VariantMerge generated from: '<S27>/VeRGNC_M_RegenBrkAxleTrqReq_xSEM_NoGrd' incorporates:
     *  Gain: '<S34>/Gain'
     */
    RGNR_ac_B.VariantMergeForOutportVeRGNC_M_RegenBrkA = -rtb_Switch_pv;

    /* End of Outputs for SubSystem: '<S27>/NoGradLim_RegTrqReq' */
#endif

    /* End of Outputs for SubSystem: '<S9>/Variant Subsystem' */

    /* SignalConversion generated from: '<S9>/Variant Source' incorporates:
     *  Inport: '<Root>/VeTTQR_b_TransTrqReqFstEnbl'
     */
#if Rte_SysCon_Variant_RGNR_5

    /* VariantMerge generated from: '<S9>/Variant Source' incorporates:
     *  Constant: '<S17>/Constant Value4'
     */
    rtb_VariantMerge_For_Variant_Source_Va_h = 1.0F;

#else

    /* Outputs for Atomic SubSystem: '<S9>/If Action Subsystem1' */
    (void)Rte_Read_VeTTQR_b_TransTrqReqFstEnbl_Value(&rtb_OR6);

    /* Logic: '<S30>/Logical3' incorporates:
     *  Inport: '<Root>/VeTTQR_b_TransTrqReqFstEnbl'
     */
    VeRGNR_Cf_RegnBrkTorqActvPre = !rtb_OR6;

    /* DataTypeConversion: '<S30>/Data Type Conversion2' */
    VeRGNR_Cf_RegnBrkTorqActv = (float32)(VeRGNR_Cf_RegnBrkTorqActvPre ? 1.0F :
        0.0F);

    /* VariantMerge generated from: '<S9>/Variant Source' incorporates:
     *  Constant: '<S31>/Constant'
     *  Constant: '<S32>/Constant'
     *  Logic: '<S29>/Logical1'
     *  Logic: '<S29>/Logical3'
     *  Product: '<S18>/Product2'
     *  RelationalOperator: '<S29>/Comparison17'
     *  RelationalOperator: '<S29>/Comparison5'
     *  SignalConversion generated from: '<S2>/VeDTRR_e_SumFWIDFst'
     *  SignalConversion generated from: '<S9>/Variant Source'
     */
    rtb_VariantMerge_For_Variant_Source_Va_h = ((((uint32)
        rtb_TmpSignalConversionAtVeDTRR_e_SumF_e) != CeDTRR_e_Trans) &&
        (((uint32)rtb_TmpSignalConversionAtVeDTRR_e_SumF_e) !=
         CeDTRR_e_EMATTorqueReq)) ? VeRGNR_Cf_RegnBrkTorqActv : 0.0F;

    /* End of Outputs for SubSystem: '<S9>/If Action Subsystem1' */
#endif

    /* End of SignalConversion generated from: '<S9>/Variant Source' */

    /* Outputs for Atomic SubSystem: '<S9>/GradientLimiter' */
    /* Sum: '<S16>/Sum2' incorporates:
     *  UnitDelay: '<S16>/Unit Delay'
     */
    rtb_Switch1_d = rtb_VariantMerge_For_Variant_Source_Va_h -
        RGNR_ac_DW.UnitDelay_DSTATE_gg;

    /* Outputs for Atomic SubSystem: '<S16>/Limiter' */
    /* Switch: '<S28>/Switch1' incorporates:
     *  Constant: '<S20>/Calib'
     *  RelationalOperator: '<S28>/Relational Operator'
     */
    if (KeRGNR_Cf_RgenBrkTorqLUDeactv < rtb_Switch1_d)
    {
        /* UnitDelay: '<S69>/Unit Delay' */
        rtb_Switch1_d = KeRGNR_Cf_RgenBrkTorqLUDeactv;
    }

    /* End of Switch: '<S28>/Switch1' */

    /* Switch: '<S28>/Switch' incorporates:
     *  Constant: '<S19>/Calib'
     *  RelationalOperator: '<S28>/Relational Operator1'
     */
    if (rtb_Switch1_d <= KeRGNR_Cf_RgenBrkTorqLDDeactv)
    {
        rtb_Switch1_d = KeRGNR_Cf_RgenBrkTorqLDDeactv;
    }

    /* End of Switch: '<S28>/Switch' */
    /* End of Outputs for SubSystem: '<S16>/Limiter' */

    /* Sum: '<S16>/Sum3' incorporates:
     *  UnitDelay: '<S16>/Unit Delay'
     */
    RGNR_ac_DW.UnitDelay_DSTATE_gg += rtb_Switch1_d;

    /* End of Outputs for SubSystem: '<S9>/GradientLimiter' */

    /* Product: '<S9>/Product1' incorporates:
     *  SignalConversion: '<S9>/Signal Conversion'
     *  UnitDelay: '<S16>/Unit Delay'
     */
    rtb_VariantMerge_For_Variant_Source_Va_h = rtb_Switch_pv *
        RGNR_ac_DW.UnitDelay_DSTATE_gg;

    /* Outputs for Atomic SubSystem: '<S9>/Limiter1' */
    /* Switch: '<S23>/Switch1' incorporates:
     *  Constant: '<S9>/Constant Value1'
     *  Gain: '<S7>/Control_signal_is_neg2'
     *  RelationalOperator: '<S23>/Relational Operator'
     */
    if (0.0F < (-rtb_Merge_a))
    {
        /* Merge: '<S15>/Merge' */
        rtb_Merge_a = 0.0F;
    }
    else
    {
        /* Merge: '<S15>/Merge' */
        rtb_Merge_a = -rtb_Merge_a;
    }

    /* End of Switch: '<S23>/Switch1' */

    /* Switch: '<S23>/Switch' incorporates:
     *  RelationalOperator: '<S23>/Relational Operator1'
     */
    if (rtb_Merge_a > rtb_TmpSignalConversionAtVeRGNR_M_RegenB)
    {
        /* Switch: '<S23>/Switch' */
        rtb_TmpSignalConversionAtVeRGNR_M_RegenB = rtb_Merge_a;
    }

    /* End of Switch: '<S23>/Switch' */
    /* End of Outputs for SubSystem: '<S9>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S9>/Limiter2' */
    /* Switch: '<S24>/Switch1' incorporates:
     *  Constant: '<S9>/Constant Value3'
     *  Gain: '<S7>/Control_signal_is_neg3'
     *  RelationalOperator: '<S24>/Relational Operator'
     */
    if (0.0F < (-tmpRead_8))
    {
        /* Merge: '<S15>/Merge' */
        rtb_Merge_a = 0.0F;
    }
    else
    {
        /* Merge: '<S15>/Merge' */
        rtb_Merge_a = -tmpRead_8;
    }

    /* End of Switch: '<S24>/Switch1' */

    /* Switch: '<S24>/Switch' incorporates:
     *  RelationalOperator: '<S24>/Relational Operator1'
     */
    if (rtb_Merge_a > rtb_TmpSignalConversionAtVeRGNR_M_Rege_g)
    {
        /* Switch: '<S24>/Switch' */
        rtb_TmpSignalConversionAtVeRGNR_M_Rege_g = rtb_Merge_a;
    }

    /* End of Switch: '<S24>/Switch' */
    /* End of Outputs for SubSystem: '<S9>/Limiter2' */

    /* If: '<S15>/If' incorporates:
     *  Constant: '<S15>/Constant Value'
     *  Constant: '<S74>/Calib'
     *  Inport: '<Root>/VeATRR_M_DrvIntndTotBrkOutTorqILE'
     *  RelationalOperator: '<S15>/Comparison'
     */
    if ((rtb_TmpSignalConversionAtVeATRR_M_OutT_l > 0.0F) &&
            (KeRGNR_b_EnbleCreepPhaseOutTotBrkReq))
    {
        /* Outputs for IfAction SubSystem: '<S15>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S71>/Action Port'
         */
        /* Merge: '<S15>/Merge' incorporates:
         *  Constant: '<S71>/Constant Value'
         *  SignalConversion generated from: '<S71>/Out1'
         */
        rtb_Merge_a = 0.0F;

        /* Switch: '<S82>/Switch1' incorporates:
         *  Constant: '<S71>/Constant Value1'
         *  SignalConversion generated from: '<S71>/Out2'
         */
        rtb_Sum2_n5 = 0.0F;

        /* End of Outputs for SubSystem: '<S15>/If Action Subsystem1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S15>/If Action Subsystem' incorporates:
         *  ActionPort: '<S70>/Action Port'
         */
        /* Logic: '<S70>/Logical3' incorporates:
         *  Constant: '<S100>/Calib'
         *  Constant: '<S83>/Constant'
         *  Constant: '<S84>/Constant'
         *  Constant: '<S85>/Constant'
         *  Constant: '<S86>/Constant'
         *  Constant: '<S87>/Constant'
         *  Constant: '<S88>/Constant'
         *  Constant: '<S89>/Constant'
         *  Constant: '<S90>/Constant'
         *  Constant: '<S91>/Constant'
         *  Constant: '<S92>/Constant'
         *  Constant: '<S93>/Constant'
         *  Constant: '<S94>/Constant'
         *  Constant: '<S98>/Calib'
         *  Constant: '<S99>/Calib'
         *  Logic: '<S70>/Logical'
         *  Logic: '<S70>/Logical1'
         *  Logic: '<S70>/Logical2'
         *  RelationalOperator: '<S70>/Comparison1'
         *  RelationalOperator: '<S70>/Comparison2'
         *  RelationalOperator: '<S70>/Comparison3'
         *  RelationalOperator: '<S70>/Comparison4'
         *  RelationalOperator: '<S70>/Comparison5'
         *  RelationalOperator: '<S70>/Comparison6'
         *  RelationalOperator: '<S70>/Comparison7'
         *  RelationalOperator: '<S70>/Comparison8'
         *  RelationalOperator: '<S70>/Equal10'
         *  RelationalOperator: '<S70>/Equal11'
         *  RelationalOperator: '<S70>/Equal8'
         *  RelationalOperator: '<S70>/Equal9'
         *  SignalConversion generated from: '<S2>/VeFWDR_e_Tcase_Stat'
         */
        VeRGNC_b_CondOkTotRegenReq = (((((((((((((((uint32)
            rtb_TmpSignalConversionAtVeTRGR_e_Vldt_g) ==
            CeTRGR_e_TransRangeDrive1) || (((uint32)
            rtb_TmpSignalConversionAtVeTRGR_e_Vldt_g) ==
            CeTRGR_e_TransRangeDrive2)) || (((uint32)
            rtb_TmpSignalConversionAtVeTRGR_e_Vldt_g) ==
            CeTRGR_e_TransRangeDrive3)) || (((uint32)
            rtb_TmpSignalConversionAtVeTRGR_e_Vldt_g) ==
            CeTRGR_e_TransRangeDrive4)) || (((uint32)
            rtb_TmpSignalConversionAtVeTRGR_e_Vldt_g) ==
            CeTRGR_e_TransRangeDrive5)) || (((uint32)
            rtb_TmpSignalConversionAtVeTRGR_e_Vldt_g) ==
            CeTRGR_e_TransRangeDrive)) || (((uint32)
            rtb_TmpSignalConversionAtVeTRGR_e_Vldt_g) ==
            CeTRGR_e_TransRangeDrive)) || (((uint32)
            rtb_TmpSignalConversionAtVeTRGR_e_Vldt_g) ==
            CeTRGR_e_TransRangeDrive)) || (((uint32)
            rtb_TmpSignalConversionAtVeTRGR_e_Vldt_g) ==
            CeTRGR_e_TransRangeDrive)) || (((uint32)
            rtb_TmpSignalConversionAtVeTRGR_e_Vldt_g) ==
            CeTRGR_e_TransRangeDrive)) || (KeRGNR_b_EnblRegenNonPRNDLDep)) ||
            ((KeRGNR_b_RvrsRegenEnabled) && (((uint32)
            rtb_TmpSignalConversionAtVeTRGR_e_Vldt_g) ==
            CeTRGR_e_TransRangeReverse))) && ((((uint32)
            rtb_TmpSignalConversionAtVeFWDR_e_Tcas_d) != CeFWDR_e_TfrCas4Low) ||
            (KeRGNR_b_OvrrdTrnsfrCaseAvail)));

        /* End of Outputs for SubSystem: '<S15>/If Action Subsystem' */
        (void)Rte_Read_VeATRR_M_DrvIntndTotBrkOutTorqILE_Value(&rtb_Sum2_n5);

        /* Outputs for IfAction SubSystem: '<S15>/If Action Subsystem' incorporates:
         *  ActionPort: '<S70>/Action Port'
         */
        /* Switch: '<S95>/Switch1' incorporates:
         *  Constant: '<S70>/Constant Value'
         *  Gain: '<S70>/Gain'
         *  Inport: '<Root>/VeATRR_M_DrvIntndTotBrkOutTorqILE'
         */
        if (VeRGNC_b_CondOkTotRegenReq)
        {
            rtb_Merge_a = -rtb_TmpSignalConversionAtVeATRR_M_DrvI_e;
        }
        else
        {
            rtb_Merge_a = 0.0F;
        }

        /* End of Switch: '<S95>/Switch1' */

        /* Merge: '<S15>/Merge' incorporates:
         *  Constant: '<S96>/Calib'
         *  MinMax: '<S70>/MinMax1'
         */
        rtb_Merge_a = fmaxf(KeRGNR_M_VehDecelRgnLimit, rtb_Merge_a);

        /* Switch: '<S82>/Switch1' incorporates:
         *  Constant: '<S97>/Calib'
         *  Gain: '<S70>/Gain1'
         *  MinMax: '<S70>/MinMax2'
         */
        rtb_Sum2_n5 = fmaxf(-rtb_Sum2_n5, KeRGNR_M_VehDecelRgnLimitILE);

        /* End of Outputs for SubSystem: '<S15>/If Action Subsystem' */
    }

    /* End of If: '<S15>/If' */

    /* Switch: '<S7>/Switch1' incorporates:
     *  Constant: '<S10>/Calib'
     *  Inport: '<Root>/VeFWDR_r_Axle_Ratio'
     *  Inport: '<Root>/VeFWDR_r_TCaseRatio'
     */
    if (KeRGNR_b_OvrAxleTrqRatio)
    {
        /* UnitDelay: '<S69>/Unit Delay' incorporates:
         *  Constant: '<S11>/Calib'
         */
        rtb_Switch1_d = KeRGNR_r_AxleTrqRatio;
    }
    else
    {
        (void)Rte_Read_VeFWDR_r_TCaseRatio_Value(&Product1_e);
        (void)Rte_Read_VeFWDR_r_Axle_Ratio_Value(&tmpRead_7);

        /* UnitDelay: '<S69>/Unit Delay' incorporates:
         *  Inport: '<Root>/VeFWDR_r_Axle_Ratio'
         *  Inport: '<Root>/VeFWDR_r_TCaseRatio'
         *  Product: '<S7>/Divide'
         */
        rtb_Switch1_d = tmpRead_7 * Product1_e;
    }

    /* End of Switch: '<S7>/Switch1' */

    /* Product: '<S7>/Product1' */
    Product1_e = rtb_Sum2_n5 / rtb_Switch1_d;

    /* Outputs for Atomic SubSystem: '<S13>/Hysteresis' */
    /* Switch: '<S54>/Switch1' incorporates:
     *  Constant: '<S54>/Constant Value'
     *  Constant: '<S60>/Calib'
     *  Constant: '<S61>/Calib'
     *  RelationalOperator: '<S54>/Greater  Than'
     *  RelationalOperator: '<S54>/Greater  Than1'
     *  UnitDelay: '<S54>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeATRR_M_DrvI_e > KeRGNR_M_RampOutTotBrkTrq_RSP)
    {
        RGNR_ac_DW.UnitDelay_DSTATE_hc = true;
    }
    else
    {
        RGNR_ac_DW.UnitDelay_DSTATE_hc =
            ((rtb_TmpSignalConversionAtVeATRR_M_DrvI_e >=
              KeRGNR_M_RampOutTotBrkTrq_LSP) && (RGNR_ac_DW.UnitDelay_DSTATE_hc));
    }

    /* End of Switch: '<S54>/Switch1' */
    /* End of Outputs for SubSystem: '<S13>/Hysteresis' */

    /* Outputs for Atomic SubSystem: '<S13>/Hysteresis1' */
    /* Switch: '<S55>/Switch1' incorporates:
     *  Constant: '<S55>/Constant Value'
     *  Constant: '<S65>/Calib'
     *  RelationalOperator: '<S55>/Greater  Than'
     *  RelationalOperator: '<S55>/Greater  Than1'
     *  Sum: '<S13>/Sum1'
     *  UnitDelay: '<S55>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeMSPR_n_MtrB_b >
            (rtb_TmpSignalConversionAtVeOHSR_n_TransM +
             KeRGNR_n_RampOutIdleSpdOffset_RSP))
    {
        RGNR_ac_DW.UnitDelay_DSTATE_be = true;
    }
    else
    {
        RGNR_ac_DW.UnitDelay_DSTATE_be =
            ((rtb_TmpSignalConversionAtVeMSPR_n_MtrB_b >=
              rtb_TmpSignalConversionAtVeOHSR_n_TransM) &&
             (RGNR_ac_DW.UnitDelay_DSTATE_be));
    }

    /* End of Switch: '<S55>/Switch1' */
    /* End of Outputs for SubSystem: '<S13>/Hysteresis1' */

    /* Outputs for Atomic SubSystem: '<S13>/Hysteresis2' */
    /* Switch: '<S56>/Switch1' incorporates:
     *  Constant: '<S56>/Constant Value'
     *  Constant: '<S58>/Calib'
     *  Constant: '<S59>/Calib'
     *  RelationalOperator: '<S56>/Greater  Than'
     *  RelationalOperator: '<S56>/Greater  Than1'
     *  UnitDelay: '<S56>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeAPSR_Pct_Ac_a > KeRGNR_M_RampOutAccPdl_RSP)
    {
        RGNR_ac_DW.UnitDelay_DSTATE_l5 = true;
    }
    else
    {
        RGNR_ac_DW.UnitDelay_DSTATE_l5 =
            ((rtb_TmpSignalConversionAtVeAPSR_Pct_Ac_a >=
              KeRGNR_M_RampOutAccPdl_LSP) && (RGNR_ac_DW.UnitDelay_DSTATE_l5));
    }

    /* End of Switch: '<S56>/Switch1' */
    /* End of Outputs for SubSystem: '<S13>/Hysteresis2' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB2' */

    /* Inport: '<Root>/VeATRR_M_MinPedal_Tact' */
    (void)Rte_Read_VeATRR_M_MinPedal_Tact_Value(&tmpRead_6);

    /* Inport: '<Root>/VeHTDR_M_OutTorqMaxHH' */
    (void)Rte_Read_VeHTDR_M_OutTorqMaxHH_Value(&tmpRead_5);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB2' incorporates:
     *  SubSystem: '<Root>/RGNR_MedTEB2'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/MainRgnCntrl'
     */
    /* Logic: '<S13>/Logical' incorporates:
     *  Constant: '<S47>/Constant'
     *  Constant: '<S48>/Constant'
     *  Constant: '<S49>/Constant'
     *  Logic: '<S13>/Logical1'
     *  Logic: '<S13>/Logical2'
     *  Logic: '<S13>/Logical5'
     *  RelationalOperator: '<S13>/Comparison1'
     *  RelationalOperator: '<S13>/Comparison2'
     *  RelationalOperator: '<S13>/Comparison4'
     *  UnitDelay: '<S55>/Unit Delay'
     *  UnitDelay: '<S56>/Unit Delay'
     */
    VeRGNC_b_RegenRampOutSet = ((((!RGNR_ac_DW.UnitDelay_DSTATE_l5) && (((uint32)
        rtb_TmpSignalConversionAtVeHSER_e_RngStO) == CeHSER_e_M1)) &&
        ((CeOHSR_e_RngSel_M2 == ((uint32)
        rtb_TmpSignalConversionAtVeOHSR_e_RngDsr)) || (((uint32)
        rtb_TmpSignalConversionAtVeOHSR_e_RngDsr) == CeOHSR_e_RngSel_G2))) &&
        (!RGNR_ac_DW.UnitDelay_DSTATE_be));

    /* Logic: '<S13>/Logical3' incorporates:
     *  Constant: '<S50>/Constant'
     *  Logic: '<S13>/Logical4'
     *  RelationalOperator: '<S13>/Comparison3'
     *  UnitDelay: '<S54>/Unit Delay'
     */
    VeRGNC_b_RegenRampOutReset = ((((uint32)
        rtb_TmpSignalConversionAtVeHSER_e_RngStO) != CeHSER_e_M1) ||
        (!RGNR_ac_DW.UnitDelay_DSTATE_hc));

    /* Outputs for Atomic SubSystem: '<S13>/Signal Latch On With Reset' */
    /* Logic: '<S67>/OR1' incorporates:
     *  Logic: '<S67>/NOT'
     *  Logic: '<S67>/OR'
     *  UnitDelay: '<S67>/Unit Delay'
     */
    RGNR_ac_DW.UnitDelay_DSTATE_io = ((VeRGNC_b_RegenRampOutSet) ||
        ((!VeRGNC_b_RegenRampOutReset) && (RGNR_ac_DW.UnitDelay_DSTATE_io)));

    /* End of Outputs for SubSystem: '<S13>/Signal Latch On With Reset' */

    /* Switch: '<S57>/Switch1' incorporates:
     *  Constant: '<S62>/Calib'
     */
    if (KeRGNR_b_RegenRampOutReqActvOvrrd)
    {
        /* Switch: '<S57>/Switch1' incorporates:
         *  Constant: '<S63>/Calib'
         */
        VeRGNR_b_PHEVRegenRampOutReqActv = KeRGNR_b_RegenRampOutReqActvOvrrdVal;
    }
    else
    {
        /* Switch: '<S57>/Switch1' incorporates:
         *  UnitDelay: '<S67>/Unit Delay'
         */
        VeRGNR_b_PHEVRegenRampOutReqActv = RGNR_ac_DW.UnitDelay_DSTATE_io;
    }

    /* End of Switch: '<S57>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S13>/Signal Latch On With Reset1' */
    /* Logic: '<S68>/OR1' incorporates:
     *  Constant: '<S51>/Constant'
     *  Constant: '<S52>/Constant'
     *  Constant: '<S53>/Constant'
     *  Logic: '<S13>/Logical6'
     *  Logic: '<S13>/Logical7'
     *  Logic: '<S13>/Logical8'
     *  Logic: '<S68>/NOT'
     *  Logic: '<S68>/OR'
     *  RelationalOperator: '<S13>/Comparison5'
     *  RelationalOperator: '<S13>/Comparison6'
     *  RelationalOperator: '<S13>/Comparison7'
     *  UnitDelay: '<S68>/Unit Delay'
     */
    VeRGNR_b_MHEVRegenRampOutReqActv = (((CeHSER_e_ShiftToNeutEngOn == ((uint32)
        rtb_TmpSignalConversionAtVeHSER_e_RngStO)) &&
        rtb_TmpSignalConversionAtVeAECR_b_AeCo_j) || ((((CeHSER_e_M1 != ((uint32)
        rtb_TmpSignalConversionAtVeHSER_e_RngStO)) && (((uint32)
        rtb_TmpSignalConversionAtVeHSER_e_RngStO) != CeHSER_e_M2)) &&
        rtb_TmpSignalConversionAtVeAECR_b_AeCo_j) &&
        (VeRGNR_b_MHEVRegenRampOutReqActv)));

    /* End of Outputs for SubSystem: '<S13>/Signal Latch On With Reset1' */

    /* Outputs for Atomic SubSystem: '<S15>/Signal Latch On With Reset' */
    /* Logic: '<S81>/OR1' incorporates:
     *  Constant: '<S72>/Calib'
     *  Constant: '<S73>/Calib'
     *  Constant: '<S75>/Calib'
     *  Logic: '<S15>/Logical Operator'
     *  Logic: '<S81>/NOT'
     *  Logic: '<S81>/OR'
     *  Merge: '<Root>/Merge_3'
     *  RelationalOperator: '<S15>/Comparison1'
     *  RelationalOperator: '<S15>/Comparison2'
     *  RelationalOperator: '<S15>/Comparison4'
     *  SignalConversion generated from: '<S2>/VeRGNC_r_RegenCapFact_read'
     *  Sum: '<S15>/Sum1'
     *  UnitDelay: '<S81>/Unit Delay'
     */
    RGNR_ac_DW.UnitDelay_DSTATE_mp =
        (((Rte_IrvRead_RGNR_MedTEB2_VeRGNC_r_RegenCapFact_write_IRV() <
           KeRGNR_r_RegenDsblRampFacThrshld) || ((tmpRead_5 - tmpRead_6) <
           KeRGNR_M_ToDeltaThrshld)) || ((rtb_Merge_a <
           KeRGNR_M_DrvTotBrkThrshld) && (RGNR_ac_DW.UnitDelay_DSTATE_mp)));

    /* End of Outputs for SubSystem: '<S15>/Signal Latch On With Reset' */

    /* Switch: '<S15>/Switch' incorporates:
     *  Constant: '<S76>/Calib'
     *  Constant: '<S77>/Calib'
     */
    if (RGNR_ac_DW.UnitDelay_DSTATE_mp)
    {
        rtb_TmpSignalConversionAtVeATRR_M_DrvI_e =
            KeRGNR_r_RegenFactorMultiplier_Cal1;
    }
    else
    {
        rtb_TmpSignalConversionAtVeATRR_M_DrvI_e =
            KeRGNR_r_RegenFactorMultiplier_Cal2;
    }

    /* End of Switch: '<S15>/Switch' */

    /* Outputs for Atomic SubSystem: '<S15>/GradientLimiter1' */
    /* Sum: '<S69>/Sum2' incorporates:
     *  UnitDelay: '<S69>/Unit Delay'
     */
    rtb_Sum2_n5 = rtb_TmpSignalConversionAtVeATRR_M_DrvI_e -
        RGNR_ac_DW.UnitDelay_DSTATE_eo5;

    /* Outputs for Atomic SubSystem: '<S69>/Limiter' */
    /* Switch: '<S82>/Switch1' incorporates:
     *  Constant: '<S79>/Calib'
     *  RelationalOperator: '<S82>/Relational Operator'
     */
    if (KeRGNR_r_TotBrakeFacRamp_LU < rtb_Sum2_n5)
    {
        /* Switch: '<S82>/Switch1' */
        rtb_Sum2_n5 = KeRGNR_r_TotBrakeFacRamp_LU;
    }

    /* End of Switch: '<S82>/Switch1' */

    /* Switch: '<S82>/Switch' incorporates:
     *  Constant: '<S78>/Calib'
     *  RelationalOperator: '<S82>/Relational Operator1'
     */
    if (rtb_Sum2_n5 <= KeRGNR_r_TotBrakeFacRamp_LD)
    {
        rtb_Sum2_n5 = KeRGNR_r_TotBrakeFacRamp_LD;
    }

    /* End of Switch: '<S82>/Switch' */
    /* End of Outputs for SubSystem: '<S69>/Limiter' */

    /* Sum: '<S69>/Sum3' incorporates:
     *  UnitDelay: '<S69>/Unit Delay'
     */
    RGNR_ac_DW.UnitDelay_DSTATE_eo5 += rtb_Sum2_n5;

    /* End of Outputs for SubSystem: '<S15>/GradientLimiter1' */

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/RGNC_Roll_Test'
     */
    /* S-Function (sfix_bitop): '<S8>/Bitwise Logical Operator2' incorporates:
     *  DataStoreRead: '<S8>/Data Store Read1'
     */
    rtb_BitwiseLogicalOperator2 = (uint8)(VeRGNR_e_RollTestStatus_PID & ((uint8)
        2));

    /* S-Function (sfix_bitop): '<S8>/Bitwise Logical Operator4' incorporates:
     *  DataStoreRead: '<S8>/Data Store Read1'
     */
    rtb_BitwiseLogicalOperator4 = (uint8)(VeRGNR_e_RollTestStatus_PID & ((uint8)
        4));

    /* S-Function (sfix_bitop): '<S8>/Bitwise Logical Operator5' incorporates:
     *  DataStoreRead: '<S8>/Data Store Read1'
     */
    rtb_BitwiseLogicalOperator5 = (uint8)(VeRGNR_e_RollTestStatus_PID & ((uint8)
        8));

    /* S-Function (sfix_bitop): '<S8>/Bitwise Logical Operator6' incorporates:
     *  DataStoreRead: '<S8>/Data Store Read1'
     */
    rtb_BitwiseLogicalOperator6 = (uint8)(VeRGNR_e_RollTestStatus_PID & ((uint8)
        16));

    /* S-Function (sfix_bitop): '<S8>/Bitwise Logical Operator7' incorporates:
     *  DataStoreRead: '<S8>/Data Store Read1'
     */
    rtb_BitwiseLogicalOperator7 = (uint8)(VeRGNR_e_RollTestStatus_PID & ((uint8)
        32));

    /* S-Function (sfix_bitop): '<S8>/Bitwise Logical Operator8' incorporates:
     *  DataStoreRead: '<S8>/Data Store Read1'
     */
    rtb_BitwiseLogicalOperator8 = (uint8)(VeRGNR_e_RollTestStatus_PID & ((uint8)
        64));

    /* S-Function (sfix_bitop): '<S8>/Bitwise Logical Operator1' incorporates:
     *  DataStoreRead: '<S8>/Data Store Read1'
     */
    VeRGNR_b_RollTestStatus_PID_BIT0 = (uint8)(VeRGNR_e_RollTestStatus_PID &
        ((uint8)1));

    /* SignalConversion generated from: '<S2>/VeRGNR_e_RollTestStatus_Reg' incorporates:
     *  DataStoreRead: '<S8>/Data Store Read1'
     *  Outport: '<Root>/VeRGNR_e_RollTestStatus_Reg'
     */
    (void)Rte_Write_VeRGNR_e_RollTestStatus_Reg_Value
        (VeRGNR_e_RollTestStatus_PID);

    /* S-Function (sfix_bitop): '<S8>/Bitwise Logical Operator12' incorporates:
     *  DataStoreRead: '<S8>/Data Store Read2'
     */
    rtb_BitwiseLogicalOperator12 = (uint8)(VeRGNR_g_RollTestOBDStatus & ((uint8)
        16));

    /* S-Function (sfix_bitop): '<S8>/Bitwise Logical Operator13' incorporates:
     *  DataStoreRead: '<S8>/Data Store Read2'
     */
    rtb_BitwiseLogicalOperator13 = (uint8)(VeRGNR_g_RollTestOBDStatus & ((uint8)
        32));

    /* S-Function (sfix_bitop): '<S8>/Bitwise Logical Operator14' incorporates:
     *  DataStoreRead: '<S8>/Data Store Read2'
     */
    rtb_BitwiseLogicalOperator14 = (uint8)(VeRGNR_g_RollTestOBDStatus & ((uint8)
        64));

    /* S-Function (sfix_bitop): '<S8>/Bitwise Logical Operator15' incorporates:
     *  DataStoreRead: '<S8>/Data Store Read2'
     */
    rtb_BitwiseLogicalOperator15 = (uint8)(((uint16)VeRGNR_g_RollTestOBDStatus)
        & ((uint16)128));

    /* S-Function (sfix_bitop): '<S8>/Bitwise Logical Operator9' incorporates:
     *  DataStoreRead: '<S8>/Data Store Read2'
     */
    rtb_BitwiseLogicalOperator9 = (uint8)(VeRGNR_g_RollTestOBDStatus & ((uint8)2));

    /* S-Function (sfix_bitop): '<S8>/Bitwise Logical Operator10' incorporates:
     *  DataStoreRead: '<S8>/Data Store Read2'
     */
    rtb_BitwiseLogicalOperator10 = (uint8)(VeRGNR_g_RollTestOBDStatus & ((uint8)
        4));

    /* S-Function (sfix_bitop): '<S8>/Bitwise Logical Operator11' incorporates:
     *  DataStoreRead: '<S8>/Data Store Read2'
     */
    rtb_BitwiseLogicalOperator11 = (uint8)(VeRGNR_g_RollTestOBDStatus & ((uint8)
        8));

    /* S-Function (sfix_bitop): '<S8>/Bitwise Logical Operator3' incorporates:
     *  DataStoreRead: '<S8>/Data Store Read2'
     */
    VeRGNR_g_RollTestOBDStatus_BIT0 = (uint8)(VeRGNR_g_RollTestOBDStatus &
        ((uint8)1));

    /* SignalConversion generated from: '<S2>/VeRGNR_g_RollTestOBDStatus_Reg' incorporates:
     *  DataStoreRead: '<S8>/Data Store Read2'
     *  Outport: '<Root>/VeRGNR_g_RollTestOBDStatus_Reg'
     */
    (void)Rte_Write_VeRGNR_g_RollTestOBDStatus_Reg_Value
        (VeRGNR_g_RollTestOBDStatus);

    /* RelationalOperator: '<S8>/Comparison3' incorporates:
     *  Constant: '<S107>/Calib'
     */
    VeRGNR_b_AccelToReqThrsMet = (rtb_TmpSignalConversionAtVeATRR_M_OutT_l <=
        KeRGNR_M_AccelToThrld);

    /* Outputs for Enabled SubSystem: '<S8>/Reset_OBD_0' incorporates:
     *  EnablePort: '<S119>/Enable'
     */
    /* Logic: '<S8>/NOT12' */
    if (!VeRGNR_b_AccelToReqThrsMet)
    {
        /* S-Function (fcgen): '<S119>/FunctionCall_Generator' incorporates:
         *  SubSystem: '<S119>/ReSet'
         */
        /* DataStoreWrite: '<S150>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S150>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S151>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S151>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S151>/FixPt Bitwise Operator5'
         */
        VeRGNR_g_RollTestOBDStatus = (uint8)(~((uint8)(((uint8)
            (~VeRGNR_g_RollTestOBDStatus)) | ((uint8)1))));

        /* End of Outputs for S-Function (fcgen): '<S119>/FunctionCall_Generator' */
    }

    /* End of Logic: '<S8>/NOT12' */
    /* End of Outputs for SubSystem: '<S8>/Reset_OBD_0' */

    /* RelationalOperator: '<S8>/Comparison1' incorporates:
     *  Constant: '<S113>/Calib'
     */
    VeRGNR_b_AccelPedalPositionMet = (rtb_TmpSignalConversionAtVeAPSR_Pct_Acce ==
        KeRGNR_Pct_AccelPedalPosThrld);

    /* Outputs for Enabled SubSystem: '<S8>/Reset_OBD_1' incorporates:
     *  EnablePort: '<S120>/Enable'
     */
    /* Logic: '<S8>/NOT11' */
    if (!VeRGNR_b_AccelPedalPositionMet)
    {
        /* S-Function (fcgen): '<S120>/FunctionCall_Generator' incorporates:
         *  SubSystem: '<S120>/ReSet'
         */
        /* DataStoreWrite: '<S152>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S152>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S153>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S153>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S153>/FixPt Bitwise Operator5'
         */
        VeRGNR_g_RollTestOBDStatus = (uint8)(~((uint8)(((uint8)
            (~VeRGNR_g_RollTestOBDStatus)) | ((uint8)2))));

        /* End of Outputs for S-Function (fcgen): '<S120>/FunctionCall_Generator' */
    }

    /* End of Logic: '<S8>/NOT11' */
    /* End of Outputs for SubSystem: '<S8>/Reset_OBD_1' */

    /* RelationalOperator: '<S8>/Comparison4' incorporates:
     *  Constant: '<S105>/Calib'
     */
    VeRGNR_b_HVCrrntThrsMet = (rtb_TmpSignalConversionAtVeHVTR_I_HV_Bat <=
        KeRGNR_I_RgnRollsAmpThrshld);

    /* Outputs for Enabled SubSystem: '<S8>/Reset_OBD_2' incorporates:
     *  EnablePort: '<S121>/Enable'
     */
    /* Logic: '<S8>/NOT10' */
    if (!VeRGNR_b_HVCrrntThrsMet)
    {
        /* S-Function (fcgen): '<S121>/FunctionCall_Generator' incorporates:
         *  SubSystem: '<S121>/ReSet'
         */
        /* DataStoreWrite: '<S154>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S154>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S155>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S155>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S155>/FixPt Bitwise Operator5'
         */
        VeRGNR_g_RollTestOBDStatus = (uint8)(~((uint8)(((uint8)
            (~VeRGNR_g_RollTestOBDStatus)) | ((uint8)4))));

        /* End of Outputs for S-Function (fcgen): '<S121>/FunctionCall_Generator' */
    }

    /* End of Logic: '<S8>/NOT10' */
    /* End of Outputs for SubSystem: '<S8>/Reset_OBD_2' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB2' */

    /* Inport: '<Root>/VeMTQR_M_MtrB_MinTorq_LT' */
    (void)Rte_Read_VeMTQR_M_MtrB_MinTorq_LT_Value(&tmpRead_1);

    /* Inport: '<Root>/VeMTQR_M_MtrA_MinTorq_LT' */
    (void)Rte_Read_VeMTQR_M_MtrA_MinTorq_LT_Value(&tmpRead_0);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB2' incorporates:
     *  SubSystem: '<Root>/RGNR_MedTEB2'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/RGNC_Roll_Test'
     */
    /* Sum: '<S8>/Subtraction3' incorporates:
     *  Product: '<S8>/Product1'
     *  Product: '<S8>/Product2'
     */
    rtb_TmpSignalConversionAtVeATRR_M_OutT_l = (tmpRead_0 *
        rtb_TmpSignalConversionAtVeMSPR_n_MtrA_S) + (tmpRead_1 *
        rtb_TmpSignalConversionAtVeMSPR_n_MtrB_b);

    /* Outputs for Atomic SubSystem: '<S8>/Protected Division' */
    /* Switch: '<S117>/Switch1' incorporates:
     *  Constant: '<S117>/Constant Value'
     *  RelationalOperator: '<S117>/Not Equal'
     */
    if (rtb_TmpSignalConversionAtVeATRR_M_OutT_l != 0.0F)
    {
        /* Switch: '<S117>/Switch1' incorporates:
         *  Constant: '<S8>/Constant Value6'
         *  Product: '<S117>/Division'
         */
        rtb_TmpSignalConversionAtVeMSPR_n_MtrB_b =
            rtb_TmpSignalConversionAtVeATRR_M_OutT_l / 9548.8F;
    }
    else
    {
        /* Switch: '<S117>/Switch1' incorporates:
         *  Constant: '<S117>/Constant Value4'
         *  Switch: '<S117>/Switch2'
         *  Switch: '<S117>/Switch3'
         */
        rtb_TmpSignalConversionAtVeMSPR_n_MtrB_b = 0.0F;
    }

    /* End of Switch: '<S117>/Switch1' */
    /* End of Outputs for SubSystem: '<S8>/Protected Division' */

    /* Product: '<S8>/Product' incorporates:
     *  Constant: '<S105>/Calib'
     *  Constant: '<S115>/Calib'
     *  Constant: '<S8>/Constant Value11'
     */
    rtb_TmpSignalConversionAtVeATRR_M_OutT_l = (KeRGNR_I_RgnRollsAmpThrshld *
        KeRGNR_V_HVPbattVolt) * 0.001F;

    /* RelationalOperator: '<S8>/Comparison2' */
    VeRGNR_b_MtrTrqLimitOpen = (rtb_TmpSignalConversionAtVeMSPR_n_MtrB_b <=
        rtb_TmpSignalConversionAtVeATRR_M_OutT_l);

    /* Outputs for Enabled SubSystem: '<S8>/Reset_OBD_3' incorporates:
     *  EnablePort: '<S122>/Enable'
     */
    /* Logic: '<S8>/NOT13' */
    if (!VeRGNR_b_MtrTrqLimitOpen)
    {
        /* S-Function (fcgen): '<S122>/FunctionCall_Generator' incorporates:
         *  SubSystem: '<S122>/ReSet'
         */
        /* DataStoreWrite: '<S156>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S156>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S157>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S157>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S157>/FixPt Bitwise Operator5'
         */
        VeRGNR_g_RollTestOBDStatus = (uint8)(~((uint8)(((uint8)
            (~VeRGNR_g_RollTestOBDStatus)) | ((uint8)8))));

        /* End of Outputs for S-Function (fcgen): '<S122>/FunctionCall_Generator' */
    }

    /* End of Logic: '<S8>/NOT13' */
    /* End of Outputs for SubSystem: '<S8>/Reset_OBD_3' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB2' */

    /* Inport: '<Root>/VeESMR_P_BattLTMinLim' */
    (void)Rte_Read_VeESMR_P_BattLTMinLim_Value(&tmpRead_2);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB2' incorporates:
     *  SubSystem: '<Root>/RGNR_MedTEB2'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/RGNC_Roll_Test'
     */
    /* RelationalOperator: '<S8>/Comparison5' */
    VeRGNR_b_PbattLimitOpen = (tmpRead_2 <=
        rtb_TmpSignalConversionAtVeATRR_M_OutT_l);

    /* Outputs for Enabled SubSystem: '<S8>/Reset_OBD_4' incorporates:
     *  EnablePort: '<S123>/Enable'
     */
    /* Logic: '<S8>/NOT14' */
    if (!VeRGNR_b_PbattLimitOpen)
    {
        /* S-Function (fcgen): '<S123>/FunctionCall_Generator' incorporates:
         *  SubSystem: '<S123>/ReSet'
         */
        /* DataStoreWrite: '<S158>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S158>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S159>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S159>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S159>/FixPt Bitwise Operator5'
         */
        VeRGNR_g_RollTestOBDStatus = (uint8)(~((uint8)(((uint8)
            (~VeRGNR_g_RollTestOBDStatus)) | ((uint8)16))));

        /* End of Outputs for S-Function (fcgen): '<S123>/FunctionCall_Generator' */
    }

    /* End of Logic: '<S8>/NOT14' */
    /* End of Outputs for SubSystem: '<S8>/Reset_OBD_4' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB2' */

    /* Inport: '<Root>/VeHTDR_P_BattLTMinLim' */
    (void)Rte_Read_VeHTDR_P_BattLTMinLim_Value(&tmpRead_3);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB2' incorporates:
     *  SubSystem: '<Root>/RGNR_MedTEB2'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/RGNC_Roll_Test'
     */
    /* RelationalOperator: '<S8>/Comparison9' */
    VeRGNR_b_HTDRPbattLimitOpen = (tmpRead_3 <=
        rtb_TmpSignalConversionAtVeATRR_M_OutT_l);

    /* Outputs for Enabled SubSystem: '<S8>/Reset_OBD_5' incorporates:
     *  EnablePort: '<S124>/Enable'
     */
    /* Logic: '<S8>/NOT15' */
    if (!VeRGNR_b_HTDRPbattLimitOpen)
    {
        /* S-Function (fcgen): '<S124>/FunctionCall_Generator' incorporates:
         *  SubSystem: '<S124>/ReSet'
         */
        /* DataStoreWrite: '<S160>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S160>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S161>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S161>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S161>/FixPt Bitwise Operator5'
         */
        VeRGNR_g_RollTestOBDStatus = (uint8)(~((uint8)(((uint8)
            (~VeRGNR_g_RollTestOBDStatus)) | ((uint8)32))));

        /* End of Outputs for S-Function (fcgen): '<S124>/FunctionCall_Generator' */
    }

    /* End of Logic: '<S8>/NOT15' */
    /* End of Outputs for SubSystem: '<S8>/Reset_OBD_5' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB2' */

    /* Inport: '<Root>/VeBCPR_M_BeltTrqMinHTDR' */
    (void)Rte_Read_VeBCPR_M_BeltTrqMinHTDR_Value(&tmpRead_4);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB2' incorporates:
     *  SubSystem: '<Root>/RGNR_MedTEB2'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/RGNC_Roll_Test'
     */
    /* Product: '<S8>/Product5' */
    rtb_TmpSignalConversionAtVeMSPR_n_MtrA_S *= tmpRead_4;

    /* Outputs for Atomic SubSystem: '<S8>/Protected Division1' */
    /* Switch: '<S118>/Switch1' incorporates:
     *  Constant: '<S118>/Constant Value'
     *  RelationalOperator: '<S118>/Not Equal'
     */
    if (rtb_TmpSignalConversionAtVeMSPR_n_MtrA_S != 0.0F)
    {
        /* Switch: '<S118>/Switch1' incorporates:
         *  Constant: '<S8>/Constant Value12'
         *  Product: '<S118>/Division'
         */
        rtb_TmpSignalConversionAtVeMSPR_n_MtrA_S /= 9548.8F;
    }
    else
    {
        /* Switch: '<S118>/Switch1' incorporates:
         *  Constant: '<S118>/Constant Value4'
         *  Switch: '<S118>/Switch2'
         *  Switch: '<S118>/Switch3'
         */
        rtb_TmpSignalConversionAtVeMSPR_n_MtrA_S = 0.0F;
    }

    /* End of Switch: '<S118>/Switch1' */
    /* End of Outputs for SubSystem: '<S8>/Protected Division1' */

    /* RelationalOperator: '<S8>/Comparison10' */
    VeRGNR_b_BeltLimitOpen = (rtb_TmpSignalConversionAtVeMSPR_n_MtrA_S <=
        rtb_TmpSignalConversionAtVeATRR_M_OutT_l);

    /* Outputs for Enabled SubSystem: '<S8>/Reset_OBD_6' incorporates:
     *  EnablePort: '<S125>/Enable'
     */
    /* Logic: '<S8>/NOT16' */
    if (!VeRGNR_b_BeltLimitOpen)
    {
        /* S-Function (fcgen): '<S125>/FunctionCall_Generator' incorporates:
         *  SubSystem: '<S125>/ReSet'
         */
        /* DataStoreWrite: '<S162>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S162>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S163>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S163>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S163>/FixPt Bitwise Operator5'
         */
        VeRGNR_g_RollTestOBDStatus = (uint8)(~((uint8)(((uint8)
            (~VeRGNR_g_RollTestOBDStatus)) | ((uint8)64))));

        /* End of Outputs for S-Function (fcgen): '<S125>/FunctionCall_Generator' */
    }

    /* End of Logic: '<S8>/NOT16' */
    /* End of Outputs for SubSystem: '<S8>/Reset_OBD_6' */

    /* Outputs for Atomic SubSystem: '<S8>/Hysteresis1' */
    /* Switch: '<S103>/Switch1' incorporates:
     *  Constant: '<S103>/Constant Value'
     *  Constant: '<S111>/Calib'
     *  Constant: '<S112>/Calib'
     *  RelationalOperator: '<S103>/Greater  Than'
     *  RelationalOperator: '<S103>/Greater  Than1'
     *  UnitDelay: '<S103>/Unit Delay'
     */
    if (rtb_VeRGNC_M_RgnReqAftrDecelLimit_write_ > KeRGNR_M_RgnBrkReqThrld_RSP)
    {
        RGNR_ac_DW.UnitDelay_DSTATE_oc = true;
    }
    else
    {
        RGNR_ac_DW.UnitDelay_DSTATE_oc =
            ((rtb_VeRGNC_M_RgnReqAftrDecelLimit_write_ >=
              KeRGNR_M_RgnBrkReqThrld_LSP) && (RGNR_ac_DW.UnitDelay_DSTATE_oc));
    }

    /* End of Switch: '<S103>/Switch1' */
    /* End of Outputs for SubSystem: '<S8>/Hysteresis1' */

    /* Logic: '<S8>/NOT9' incorporates:
     *  UnitDelay: '<S103>/Unit Delay'
     */
    VeRGNR_b_BrkRgnReqThrsMet = !RGNR_ac_DW.UnitDelay_DSTATE_oc;

    /* Outputs for Enabled SubSystem: '<S8>/Reset_OBD_7' incorporates:
     *  EnablePort: '<S126>/Enable'
     */
    /* Logic: '<S8>/NOT17' */
    if (!VeRGNR_b_BrkRgnReqThrsMet)
    {
        /* S-Function (fcgen): '<S126>/FunctionCall_Generator' incorporates:
         *  SubSystem: '<S126>/ReSet'
         */
        /* DataStoreWrite: '<S164>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S164>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S165>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S165>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S165>/FixPt Bitwise Operator5'
         */
        VeRGNR_g_RollTestOBDStatus = (uint8)(~((uint8)(((uint16)((uint8)
            (~VeRGNR_g_RollTestOBDStatus))) | ((uint16)128))));

        /* End of Outputs for S-Function (fcgen): '<S126>/FunctionCall_Generator' */
    }

    /* End of Logic: '<S8>/NOT17' */
    /* End of Outputs for SubSystem: '<S8>/Reset_OBD_7' */

    /* Logic: '<S8>/OR1' */
    rtb_TmpSignalConversionAtVeAECR_b_AeCo_j = ((VeRGNR_b_BrkRgnReqThrsMet) &&
        (VeRGNR_b_HVCrrntThrsMet));

    /* Logic: '<S8>/OR4' incorporates:
     *  Logic: '<S8>/OR5'
     */
    rtb_OR4 = ((VeRGNR_b_HVCrrntThrsMet) && ((VeRGNR_b_AccelToReqThrsMet) &&
                (VeRGNR_b_AccelPedalPositionMet)));

    /* Logic: '<S8>/OR6' */
    rtb_OR6 = (rtb_TmpSignalConversionAtVeAECR_b_AeCo_j || rtb_OR4);

    /* Outputs for Enabled SubSystem: '<S8>/Reset_PID_1' incorporates:
     *  EnablePort: '<S127>/Enable'
     */
    /* Logic: '<S8>/NOT4' */
    if (!rtb_OR6)
    {
        /* S-Function (fcgen): '<S127>/FunctionCall_Generator' incorporates:
         *  SubSystem: '<S127>/ReSet'
         */
        /* DataStoreWrite: '<S166>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S166>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S167>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S167>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S167>/FixPt Bitwise Operator5'
         */
        VeRGNR_e_RollTestStatus_PID = (uint8)(~((uint8)(((uint8)
            (~VeRGNR_e_RollTestStatus_PID)) | ((uint8)2))));

        /* End of Outputs for S-Function (fcgen): '<S127>/FunctionCall_Generator' */
    }

    /* End of Logic: '<S8>/NOT4' */
    /* End of Outputs for SubSystem: '<S8>/Reset_PID_1' */

    /* Outputs for Enabled SubSystem: '<S8>/Reset_PID_2' incorporates:
     *  EnablePort: '<S128>/Enable'
     */
    /* Logic: '<S8>/NOT2' */
    if (!rtb_TmpSignalConversionAtVeAECR_b_AeCo_j)
    {
        /* S-Function (fcgen): '<S128>/FunctionCall_Generator' incorporates:
         *  SubSystem: '<S128>/ReSet'
         */
        /* DataStoreWrite: '<S168>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S168>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S169>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S169>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S169>/FixPt Bitwise Operator5'
         */
        VeRGNR_e_RollTestStatus_PID = (uint8)(~((uint8)(((uint8)
            (~VeRGNR_e_RollTestStatus_PID)) | ((uint8)4))));

        /* End of Outputs for S-Function (fcgen): '<S128>/FunctionCall_Generator' */
    }

    /* End of Logic: '<S8>/NOT2' */
    /* End of Outputs for SubSystem: '<S8>/Reset_PID_2' */

    /* Outputs for Atomic SubSystem: '<S8>/Hysteresis2' */
    /* Switch: '<S104>/Switch1' incorporates:
     *  Constant: '<S104>/Constant Value'
     *  Constant: '<S108>/Calib'
     *  Constant: '<S110>/Calib'
     *  RelationalOperator: '<S104>/Greater  Than'
     *  RelationalOperator: '<S104>/Greater  Than1'
     *  UnitDelay: '<S104>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeRGNC_M_RegenB > KeRGNR_M_RgnBrkCapThrld_RSP)
    {
        RGNR_ac_DW.UnitDelay_DSTATE_om = true;
    }
    else
    {
        RGNR_ac_DW.UnitDelay_DSTATE_om =
            ((rtb_TmpSignalConversionAtVeRGNC_M_RegenB >=
              KeRGNR_M_RgnBrkCapThrld_LSP) && (RGNR_ac_DW.UnitDelay_DSTATE_om));
    }

    /* End of Switch: '<S104>/Switch1' */
    /* End of Outputs for SubSystem: '<S8>/Hysteresis2' */

    /* Logic: '<S8>/NOT8' incorporates:
     *  UnitDelay: '<S104>/Unit Delay'
     */
    rtb_NOT8 = !RGNR_ac_DW.UnitDelay_DSTATE_om;

    /* Outputs for Enabled SubSystem: '<S8>/Reset_PID_3' incorporates:
     *  EnablePort: '<S129>/Enable'
     */
    /* Logic: '<S8>/NOT1' */
    if (!rtb_NOT8)
    {
        /* S-Function (fcgen): '<S129>/FunctionCall_Generator' incorporates:
         *  SubSystem: '<S129>/Set_time_out_bit'
         */
        /* DataStoreWrite: '<S170>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S170>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S171>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S171>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S171>/FixPt Bitwise Operator5'
         */
        VeRGNR_e_RollTestStatus_PID = (uint8)(~((uint8)(((uint8)
            (~VeRGNR_e_RollTestStatus_PID)) | ((uint8)8))));

        /* End of Outputs for S-Function (fcgen): '<S129>/FunctionCall_Generator' */
    }

    /* End of Logic: '<S8>/NOT1' */
    /* End of Outputs for SubSystem: '<S8>/Reset_PID_3' */

    /* Outputs for Enabled SubSystem: '<S8>/Reset_PID_4' incorporates:
     *  EnablePort: '<S130>/Enable'
     */
    /* Logic: '<S8>/NOT3' */
    if (!rtb_OR4)
    {
        /* S-Function (fcgen): '<S130>/FunctionCall_Generator' incorporates:
         *  SubSystem: '<S130>/Set_time_out_bit'
         */
        /* DataStoreWrite: '<S172>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S172>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S173>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S173>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S173>/FixPt Bitwise Operator5'
         */
        VeRGNR_e_RollTestStatus_PID = (uint8)(~((uint8)(((uint8)
            (~VeRGNR_e_RollTestStatus_PID)) | ((uint8)16))));

        /* End of Outputs for S-Function (fcgen): '<S130>/FunctionCall_Generator' */
    }

    /* End of Logic: '<S8>/NOT3' */
    /* End of Outputs for SubSystem: '<S8>/Reset_PID_4' */

    /* Outputs for Enabled SubSystem: '<S8>/Reset_PID_5' incorporates:
     *  EnablePort: '<S131>/Enable'
     */
    /* Logic: '<S8>/NOT5' */
    if (!rtb_TmpSignalConversionAtVeRGNC_b_InhRgn)
    {
        /* S-Function (fcgen): '<S131>/FunctionCall_Generator' incorporates:
         *  SubSystem: '<S131>/ReSet'
         */
        /* DataStoreWrite: '<S174>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S174>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S175>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S175>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S175>/FixPt Bitwise Operator5'
         */
        VeRGNR_e_RollTestStatus_PID = (uint8)(~((uint8)(((uint8)
            (~VeRGNR_e_RollTestStatus_PID)) | ((uint8)32))));

        /* End of Outputs for S-Function (fcgen): '<S131>/FunctionCall_Generator' */
    }

    /* End of Logic: '<S8>/NOT5' */
    /* End of Outputs for SubSystem: '<S8>/Reset_PID_5' */

    /* Logic: '<S8>/OR9' incorporates:
     *  Constant: '<S106>/Calib'
     *  Constant: '<S109>/Calib'
     *  Constant: '<S114>/Calib'
     *  Logic: '<S8>/NOT7'
     *  Logic: '<S8>/OR7'
     *  Logic: '<S8>/OR8'
     *  RelationalOperator: '<S8>/Comparison6'
     *  RelationalOperator: '<S8>/Comparison7'
     *  RelationalOperator: '<S8>/Comparison8'
     */
    rtb_OR9 = (((!rtb_TmpSignalConversionAtVeRGNC_b_InhRgn) &&
                (rtb_TmpSignalConversionAtVeRGNC_M_RegenB >=
                 KeRGNR_M_RgnBrkCapThrld_PIM)) ||
               ((rtb_TmpSignalConversionAtVeHVTR_I_HV_Bat >=
                 KeRGNR_I_RgnRollsAmpThrshld_PIM) &&
                (rtb_TmpSignalConversionAtVeAPSR_Pct_Acce ==
                 KeRGNR_Pct_AccelPedalPosThrld_PIM)));

    /* Outputs for Enabled SubSystem: '<S8>/Reset_PID_6' incorporates:
     *  EnablePort: '<S132>/Enable'
     */
    /* Logic: '<S8>/NOT6' */
    if (!rtb_OR9)
    {
        /* S-Function (fcgen): '<S132>/FunctionCall_Generator' incorporates:
         *  SubSystem: '<S132>/ReSet'
         */
        /* DataStoreWrite: '<S176>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S176>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S177>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S177>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S177>/FixPt Bitwise Operator5'
         */
        VeRGNR_e_RollTestStatus_PID = (uint8)(~((uint8)(((uint8)
            (~VeRGNR_e_RollTestStatus_PID)) | ((uint8)64))));

        /* End of Outputs for S-Function (fcgen): '<S132>/FunctionCall_Generator' */
    }

    /* End of Logic: '<S8>/NOT6' */
    /* End of Outputs for SubSystem: '<S8>/Reset_PID_6' */

    /* Outputs for Enabled SubSystem: '<S8>/Set_OBD_0' incorporates:
     *  EnablePort: '<S135>/Enable'
     */
    if (VeRGNR_b_AccelToReqThrsMet)
    {
        /* S-Function (fcgen): '<S135>/FunctionCall_Generator' incorporates:
         *  SubSystem: '<S135>/Set'
         */
        /* DataStoreWrite: '<S178>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S178>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S179>/FixPt Bitwise Operator1'
         */
        VeRGNR_g_RollTestOBDStatus = (uint8)(VeRGNR_g_RollTestOBDStatus |
            ((uint8)1));

        /* End of Outputs for S-Function (fcgen): '<S135>/FunctionCall_Generator' */
    }

    /* End of Outputs for SubSystem: '<S8>/Set_OBD_0' */

    /* Outputs for Enabled SubSystem: '<S8>/Set_OBD_1' incorporates:
     *  EnablePort: '<S136>/Enable'
     */
    if (VeRGNR_b_AccelPedalPositionMet)
    {
        /* S-Function (fcgen): '<S136>/FunctionCall_Generator' incorporates:
         *  SubSystem: '<S136>/Set'
         */
        /* DataStoreWrite: '<S180>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S180>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S181>/FixPt Bitwise Operator1'
         */
        VeRGNR_g_RollTestOBDStatus = (uint8)(VeRGNR_g_RollTestOBDStatus |
            ((uint8)2));

        /* End of Outputs for S-Function (fcgen): '<S136>/FunctionCall_Generator' */
    }

    /* End of Outputs for SubSystem: '<S8>/Set_OBD_1' */

    /* Outputs for Enabled SubSystem: '<S8>/Set_OBD_2' incorporates:
     *  EnablePort: '<S137>/Enable'
     */
    if (VeRGNR_b_HVCrrntThrsMet)
    {
        /* S-Function (fcgen): '<S137>/FunctionCall_Generator' incorporates:
         *  SubSystem: '<S137>/Set'
         */
        /* DataStoreWrite: '<S182>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S182>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S183>/FixPt Bitwise Operator1'
         */
        VeRGNR_g_RollTestOBDStatus = (uint8)(VeRGNR_g_RollTestOBDStatus |
            ((uint8)4));

        /* End of Outputs for S-Function (fcgen): '<S137>/FunctionCall_Generator' */
    }

    /* End of Outputs for SubSystem: '<S8>/Set_OBD_2' */

    /* Outputs for Enabled SubSystem: '<S8>/Set_OBD_3' incorporates:
     *  EnablePort: '<S138>/Enable'
     */
    if (VeRGNR_b_MtrTrqLimitOpen)
    {
        /* S-Function (fcgen): '<S138>/FunctionCall_Generator' incorporates:
         *  SubSystem: '<S138>/Set'
         */
        /* DataStoreWrite: '<S184>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S184>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S185>/FixPt Bitwise Operator1'
         */
        VeRGNR_g_RollTestOBDStatus = (uint8)(VeRGNR_g_RollTestOBDStatus |
            ((uint8)8));

        /* End of Outputs for S-Function (fcgen): '<S138>/FunctionCall_Generator' */
    }

    /* End of Outputs for SubSystem: '<S8>/Set_OBD_3' */

    /* Outputs for Enabled SubSystem: '<S8>/Set_OBD_4' incorporates:
     *  EnablePort: '<S139>/Enable'
     */
    if (VeRGNR_b_PbattLimitOpen)
    {
        /* S-Function (fcgen): '<S139>/FunctionCall_Generator' incorporates:
         *  SubSystem: '<S139>/Set'
         */
        /* DataStoreWrite: '<S186>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S186>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S187>/FixPt Bitwise Operator1'
         */
        VeRGNR_g_RollTestOBDStatus = (uint8)(VeRGNR_g_RollTestOBDStatus |
            ((uint8)16));

        /* End of Outputs for S-Function (fcgen): '<S139>/FunctionCall_Generator' */
    }

    /* End of Outputs for SubSystem: '<S8>/Set_OBD_4' */

    /* Outputs for Enabled SubSystem: '<S8>/Set_OBD_5' incorporates:
     *  EnablePort: '<S140>/Enable'
     */
    if (VeRGNR_b_HTDRPbattLimitOpen)
    {
        /* S-Function (fcgen): '<S140>/FunctionCall_Generator' incorporates:
         *  SubSystem: '<S140>/Set'
         */
        /* DataStoreWrite: '<S188>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S188>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S189>/FixPt Bitwise Operator1'
         */
        VeRGNR_g_RollTestOBDStatus = (uint8)(VeRGNR_g_RollTestOBDStatus |
            ((uint8)32));

        /* End of Outputs for S-Function (fcgen): '<S140>/FunctionCall_Generator' */
    }

    /* End of Outputs for SubSystem: '<S8>/Set_OBD_5' */

    /* Outputs for Enabled SubSystem: '<S8>/Set_OBD_6' incorporates:
     *  EnablePort: '<S141>/Enable'
     */
    if (VeRGNR_b_BeltLimitOpen)
    {
        /* S-Function (fcgen): '<S141>/FunctionCall_Generator' incorporates:
         *  SubSystem: '<S141>/Set'
         */
        /* DataStoreWrite: '<S190>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S190>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S191>/FixPt Bitwise Operator1'
         */
        VeRGNR_g_RollTestOBDStatus = (uint8)(VeRGNR_g_RollTestOBDStatus |
            ((uint8)64));

        /* End of Outputs for S-Function (fcgen): '<S141>/FunctionCall_Generator' */
    }

    /* End of Outputs for SubSystem: '<S8>/Set_OBD_6' */

    /* Outputs for Enabled SubSystem: '<S8>/Set_OBD_7' incorporates:
     *  EnablePort: '<S142>/Enable'
     */
    if (VeRGNR_b_BrkRgnReqThrsMet)
    {
        /* S-Function (fcgen): '<S142>/FunctionCall_Generator' incorporates:
         *  SubSystem: '<S142>/Set'
         */
        /* DataStoreWrite: '<S192>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S192>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S193>/FixPt Bitwise Operator1'
         */
        VeRGNR_g_RollTestOBDStatus = (uint8)(((uint16)VeRGNR_g_RollTestOBDStatus)
            | ((uint16)128));

        /* End of Outputs for S-Function (fcgen): '<S142>/FunctionCall_Generator' */
    }

    /* End of Outputs for SubSystem: '<S8>/Set_OBD_7' */

    /* Outputs for Atomic SubSystem: '<S8>/EdgeRising2' */
    /* Logic: '<S102>/OR1' incorporates:
     *  UnitDelay: '<S102>/Unit Delay'
     */
    rtb_OR1_c = !RGNR_ac_DW.UnitDelay_DSTATE_b1;

    /* Update for UnitDelay: '<S102>/Unit Delay' */
    RGNR_ac_DW.UnitDelay_DSTATE_b1 = rtb_OR6;

    /* Outputs for Enabled SubSystem: '<S8>/Set_PID_0' incorporates:
     *  EnablePort: '<S143>/Enable'
     */
    /* Logic: '<S102>/AND' */
    if (rtb_OR6 && rtb_OR1_c)
    {
        /* S-Function (fcgen): '<S143>/FunctionCall_Generator' incorporates:
         *  SubSystem: '<S143>/Set'
         */
        /* DataStoreWrite: '<S194>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S194>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S195>/FixPt Bitwise Operator1'
         */
        VeRGNR_e_RollTestStatus_PID = (uint8)(VeRGNR_e_RollTestStatus_PID |
            ((uint8)1));

        /* End of Outputs for S-Function (fcgen): '<S143>/FunctionCall_Generator' */
    }

    /* End of Logic: '<S102>/AND' */
    /* End of Outputs for SubSystem: '<S8>/Set_PID_0' */
    /* End of Outputs for SubSystem: '<S8>/EdgeRising2' */

    /* Outputs for Enabled SubSystem: '<S8>/Set_PID_1' incorporates:
     *  EnablePort: '<S144>/Enable'
     */
    if (rtb_OR6)
    {
        /* S-Function (fcgen): '<S144>/FunctionCall_Generator' incorporates:
         *  SubSystem: '<S144>/Set'
         */
        /* DataStoreWrite: '<S196>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S196>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S197>/FixPt Bitwise Operator1'
         */
        VeRGNR_e_RollTestStatus_PID = (uint8)(VeRGNR_e_RollTestStatus_PID |
            ((uint8)2));

        /* End of Outputs for S-Function (fcgen): '<S144>/FunctionCall_Generator' */
    }

    /* End of Outputs for SubSystem: '<S8>/Set_PID_1' */

    /* Outputs for Enabled SubSystem: '<S8>/Set_PID_2' incorporates:
     *  EnablePort: '<S145>/Enable'
     */
    if (rtb_TmpSignalConversionAtVeAECR_b_AeCo_j)
    {
        /* S-Function (fcgen): '<S145>/FunctionCall_Generator' incorporates:
         *  SubSystem: '<S145>/Set'
         */
        /* DataStoreWrite: '<S198>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S198>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S199>/FixPt Bitwise Operator1'
         */
        VeRGNR_e_RollTestStatus_PID = (uint8)(VeRGNR_e_RollTestStatus_PID |
            ((uint8)4));

        /* End of Outputs for S-Function (fcgen): '<S145>/FunctionCall_Generator' */
    }

    /* End of Outputs for SubSystem: '<S8>/Set_PID_2' */

    /* Outputs for Enabled SubSystem: '<S8>/Set_PID_3' incorporates:
     *  EnablePort: '<S146>/Enable'
     */
    if (rtb_NOT8)
    {
        /* S-Function (fcgen): '<S146>/FunctionCall_Generator' incorporates:
         *  SubSystem: '<S146>/Set'
         */
        /* DataStoreWrite: '<S200>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S200>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S201>/FixPt Bitwise Operator1'
         */
        VeRGNR_e_RollTestStatus_PID = (uint8)(VeRGNR_e_RollTestStatus_PID |
            ((uint8)8));

        /* End of Outputs for S-Function (fcgen): '<S146>/FunctionCall_Generator' */
    }

    /* End of Outputs for SubSystem: '<S8>/Set_PID_3' */

    /* Outputs for Enabled SubSystem: '<S8>/Set_PID_4' incorporates:
     *  EnablePort: '<S147>/Enable'
     */
    if (rtb_OR4)
    {
        /* S-Function (fcgen): '<S147>/FunctionCall_Generator' incorporates:
         *  SubSystem: '<S147>/Set'
         */
        /* DataStoreWrite: '<S202>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S202>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S203>/FixPt Bitwise Operator1'
         */
        VeRGNR_e_RollTestStatus_PID = (uint8)(VeRGNR_e_RollTestStatus_PID |
            ((uint8)16));

        /* End of Outputs for S-Function (fcgen): '<S147>/FunctionCall_Generator' */
    }

    /* End of Outputs for SubSystem: '<S8>/Set_PID_4' */

    /* Outputs for Enabled SubSystem: '<S8>/Set_PID_5' incorporates:
     *  EnablePort: '<S148>/Enable'
     */
    if (rtb_TmpSignalConversionAtVeRGNC_b_InhRgn)
    {
        /* S-Function (fcgen): '<S148>/FunctionCall_Generator' incorporates:
         *  SubSystem: '<S148>/Set'
         */
        /* DataStoreWrite: '<S204>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S204>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S205>/FixPt Bitwise Operator1'
         */
        VeRGNR_e_RollTestStatus_PID = (uint8)(VeRGNR_e_RollTestStatus_PID |
            ((uint8)32));

        /* End of Outputs for S-Function (fcgen): '<S148>/FunctionCall_Generator' */
    }

    /* End of Outputs for SubSystem: '<S8>/Set_PID_5' */

    /* Outputs for Enabled SubSystem: '<S8>/Set_PID_6' incorporates:
     *  EnablePort: '<S149>/Enable'
     */
    if (rtb_OR9)
    {
        /* S-Function (fcgen): '<S149>/FunctionCall_Generator' incorporates:
         *  SubSystem: '<S149>/Set_time_out_bit'
         */
        /* DataStoreWrite: '<S206>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S206>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S207>/FixPt Bitwise Operator1'
         */
        VeRGNR_e_RollTestStatus_PID = (uint8)(VeRGNR_e_RollTestStatus_PID |
            ((uint8)64));

        /* End of Outputs for S-Function (fcgen): '<S149>/FunctionCall_Generator' */
    }

    /* End of Outputs for SubSystem: '<S8>/Set_PID_6' */

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/MainRgnCntrl'
     */
    /* Outport: '<Root>/VeRGNR_M_DrvIntndTotBrkOutTrq' incorporates:
     *  Product: '<S15>/Product'
     *  SignalConversion generated from: '<S2>/VeRGNC_M_DrvIntndTotBrkOutTrq'
     *  UnitDelay: '<S69>/Unit Delay'
     */
    (void)Rte_Write_VeRGNR_M_DrvIntndTotBrkOutTrq_Value
        (RGNR_ac_DW.UnitDelay_DSTATE_eo5 * rtb_Merge_a);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeRGNR_M_DrvIntndTotBrk_Stgc' incorporates:
     *  SignalConversion generated from: '<S2>/VeRGNC_M_DrvIntndTotBrk_Stgc'
     */
    (void)Rte_Write_VeRGNR_M_DrvIntndTotBrk_Stgc_Value(Product1_e);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/MainRgnCntrl'
     */
    /* Outport: '<Root>/VeRGNR_M_RegenBrkAxleTrqReq_xSEM' incorporates:
     *  Gain: '<S9>/Control_signal_is_neg1'
     *  SignalConversion generated from: '<S2>/VeRGNC_M_RegenBrkAxleTrqReq_xSEM'
     *  SignalConversion: '<S9>/Signal Conversion'
     */
    (void)Rte_Write_VeRGNR_M_RegenBrkAxleTrqReq_xSEM_Value(-rtb_Switch_pv);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeRGNR_M_RegenBrkAxleTrqReq_xSEM_NoGrd' incorporates:
     *  SignalConversion generated from: '<S2>/VeRGNC_M_RegenBrkAxleTrqReq_xSEM_NoGrd'
     */
    (void)Rte_Write_VeRGNR_M_RegenBrkAxleTrqReq_xSEM_NoGrd_Value
        (RGNR_ac_B.VariantMergeForOutportVeRGNC_M_RegenBrkA);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/MainRgnCntrl'
     */
    /* Outport: '<Root>/VeRGNR_M_RgnBrkOutTrq_Frnt' incorporates:
     *  Constant: '<S21>/Calib'
     *  MinMax: '<S9>/Maximum2'
     *  SignalConversion generated from: '<S2>/VeRGNC_M_RgnBrkOutTrq_Frnt'
     */
    (void)Rte_Write_VeRGNR_M_RgnBrkOutTrq_Frnt_Value(fmaxf
        (rtb_TmpSignalConversionAtVeRGNR_M_RegenB,
         KeRGNR_M_VehDecelRgnLimit_Frnt));

    /* Outport: '<Root>/VeRGNR_M_RgnBrkOutTrq_Rear' incorporates:
     *  Constant: '<S22>/Calib'
     *  MinMax: '<S9>/Maximum3'
     *  SignalConversion generated from: '<S2>/VeRGNC_M_RgnBrkOutTrq_Rear'
     */
    (void)Rte_Write_VeRGNR_M_RgnBrkOutTrq_Rear_Value(fmaxf
        (rtb_TmpSignalConversionAtVeRGNR_M_Rege_g,
         KeRGNR_M_VehDecelRgnLimit_Rear));

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeRGNR_M_RgnBrkOutTrq' incorporates:
     *  SignalConversion generated from: '<S2>/VeRGNC_M_RgnReqAftrDecelLimit'
     */
    (void)Rte_Write_VeRGNR_M_RgnBrkOutTrq_Value
        (rtb_VariantMerge_For_Variant_Source_Va_h);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/MainRgnCntrl'
     */
    /* Switch: '<S13>/Switch1' incorporates:
     *  Constant: '<S64>/Calib'
     */
    if (KeRGNR_b_RgnRampOutReqPrgm)
    {
        /* Outport: '<Root>/VeRGNR_b_RegenRampOutReqActv' incorporates:
         *  SignalConversion generated from: '<S2>/VeRGNC_b_RegenRampOutReqActv'
         */
        (void)Rte_Write_VeRGNR_b_RegenRampOutReqActv_Value
            (VeRGNR_b_PHEVRegenRampOutReqActv);
    }
    else
    {
        /* Outport: '<Root>/VeRGNR_b_RegenRampOutReqActv' incorporates:
         *  SignalConversion generated from: '<S2>/VeRGNC_b_RegenRampOutReqActv'
         */
        (void)Rte_Write_VeRGNR_b_RegenRampOutReqActv_Value
            (VeRGNR_b_MHEVRegenRampOutReqActv);
    }

    /* End of Switch: '<S13>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeRGNR_b_RollTestStatus_PID_BIT0' incorporates:
     *  SignalConversion generated from: '<S2>/VeRGNR_b_RollTestStatus_PID_BIT0'
     */
    (void)Rte_Write_VeRGNR_b_RollTestStatus_PID_BIT0_Value
        (VeRGNR_b_RollTestStatus_PID_BIT0);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/RGNC_Roll_Test'
     */
    /* Outport: '<Root>/VeRGNR_b_RollTestStatus_PID_BIT1' incorporates:
     *  ArithShift: '<S8>/BitShiftFromInput1'
     *  Constant: '<S8>/Shift1'
     *  S-Function (sfix_bitop): '<S8>/Bitwise Logical Operator2'
     *  SignalConversion generated from: '<S2>/VeRGNR_b_RollTestStatus_PID_BIT1'
     */
    (void)Rte_Write_VeRGNR_b_RollTestStatus_PID_BIT1_Value((uint8)(((uint32)
        rtb_BitwiseLogicalOperator2) >> 1U));

    /* Outport: '<Root>/VeRGNR_b_RollTestStatus_PID_BIT2' incorporates:
     *  ArithShift: '<S8>/BitShiftFromInput2'
     *  Constant: '<S8>/Shift2'
     *  S-Function (sfix_bitop): '<S8>/Bitwise Logical Operator4'
     *  SignalConversion generated from: '<S2>/VeRGNR_b_RollTestStatus_PID_BIT2'
     */
    (void)Rte_Write_VeRGNR_b_RollTestStatus_PID_BIT2_Value((uint8)(((uint32)
        rtb_BitwiseLogicalOperator4) >> 2U));

    /* Outport: '<Root>/VeRGNR_b_RollTestStatus_PID_BIT3' incorporates:
     *  ArithShift: '<S8>/BitShiftFromInput3'
     *  Constant: '<S8>/Shift3'
     *  S-Function (sfix_bitop): '<S8>/Bitwise Logical Operator5'
     *  SignalConversion generated from: '<S2>/VeRGNR_b_RollTestStatus_PID_BIT3'
     */
    (void)Rte_Write_VeRGNR_b_RollTestStatus_PID_BIT3_Value((uint8)(((uint32)
        rtb_BitwiseLogicalOperator5) >> 3U));

    /* Outport: '<Root>/VeRGNR_b_RollTestStatus_PID_BIT4' incorporates:
     *  ArithShift: '<S8>/BitShiftFromInput4'
     *  Constant: '<S8>/shift4'
     *  S-Function (sfix_bitop): '<S8>/Bitwise Logical Operator6'
     *  SignalConversion generated from: '<S2>/VeRGNR_b_RollTestStatus_PID_BIT4'
     */
    (void)Rte_Write_VeRGNR_b_RollTestStatus_PID_BIT4_Value((uint8)(((uint32)
        rtb_BitwiseLogicalOperator6) >> 4U));

    /* Outport: '<Root>/VeRGNR_b_RollTestStatus_PID_BIT5' incorporates:
     *  ArithShift: '<S8>/BitShiftFromInput5'
     *  Constant: '<S8>/shift5'
     *  S-Function (sfix_bitop): '<S8>/Bitwise Logical Operator7'
     *  SignalConversion generated from: '<S2>/VeRGNR_b_RollTestStatus_PID_BIT5'
     */
    (void)Rte_Write_VeRGNR_b_RollTestStatus_PID_BIT5_Value((uint8)(((uint32)
        rtb_BitwiseLogicalOperator7) >> 5U));

    /* Outport: '<Root>/VeRGNR_b_RollTestStatus_PID_BIT6' incorporates:
     *  ArithShift: '<S8>/BitShiftFromInput6'
     *  Constant: '<S8>/shift6'
     *  S-Function (sfix_bitop): '<S8>/Bitwise Logical Operator8'
     *  SignalConversion generated from: '<S2>/VeRGNR_b_RollTestStatus_PID_BIT6'
     */
    (void)Rte_Write_VeRGNR_b_RollTestStatus_PID_BIT6_Value((uint8)(((uint32)
        rtb_BitwiseLogicalOperator8) >> 6U));

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeRGNR_g_RollTestOBDStatus_BIT0' incorporates:
     *  SignalConversion generated from: '<S2>/VeRGNR_g_RollTestOBDStatus_BIT0'
     */
    (void)Rte_Write_VeRGNR_g_RollTestOBDStatus_BIT0_Value
        (VeRGNR_g_RollTestOBDStatus_BIT0);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/RGNC_Roll_Test'
     */
    /* Outport: '<Root>/VeRGNR_g_RollTestOBDStatus_BIT1' incorporates:
     *  ArithShift: '<S8>/BitShiftFromInput7'
     *  Constant: '<S8>/Shift4'
     *  S-Function (sfix_bitop): '<S8>/Bitwise Logical Operator9'
     *  SignalConversion generated from: '<S2>/VeRGNR_g_RollTestOBDStatus_BIT1'
     */
    (void)Rte_Write_VeRGNR_g_RollTestOBDStatus_BIT1_Value((uint8)(((uint32)
        rtb_BitwiseLogicalOperator9) >> 1U));

    /* Outport: '<Root>/VeRGNR_g_RollTestOBDStatus_BIT2' incorporates:
     *  ArithShift: '<S8>/BitShiftFromInput8'
     *  Constant: '<S8>/Shift5'
     *  S-Function (sfix_bitop): '<S8>/Bitwise Logical Operator10'
     *  SignalConversion generated from: '<S2>/VeRGNR_g_RollTestOBDStatus_BIT2'
     */
    (void)Rte_Write_VeRGNR_g_RollTestOBDStatus_BIT2_Value((uint8)(((uint32)
        rtb_BitwiseLogicalOperator10) >> 2U));

    /* Outport: '<Root>/VeRGNR_g_RollTestOBDStatus_BIT3' incorporates:
     *  ArithShift: '<S8>/BitShiftFromInput9'
     *  Constant: '<S8>/Shift6'
     *  S-Function (sfix_bitop): '<S8>/Bitwise Logical Operator11'
     *  SignalConversion generated from: '<S2>/VeRGNR_g_RollTestOBDStatus_BIT3'
     */
    (void)Rte_Write_VeRGNR_g_RollTestOBDStatus_BIT3_Value((uint8)(((uint32)
        rtb_BitwiseLogicalOperator11) >> 3U));

    /* Outport: '<Root>/VeRGNR_g_RollTestOBDStatus_BIT4' incorporates:
     *  ArithShift: '<S8>/BitShiftFromInput10'
     *  Constant: '<S8>/shift1'
     *  S-Function (sfix_bitop): '<S8>/Bitwise Logical Operator12'
     *  SignalConversion generated from: '<S2>/VeRGNR_g_RollTestOBDStatus_BIT4'
     */
    (void)Rte_Write_VeRGNR_g_RollTestOBDStatus_BIT4_Value((uint8)(((uint32)
        rtb_BitwiseLogicalOperator12) >> 4U));

    /* Outport: '<Root>/VeRGNR_g_RollTestOBDStatus_BIT5' incorporates:
     *  ArithShift: '<S8>/BitShiftFromInput11'
     *  Constant: '<S8>/shift2'
     *  S-Function (sfix_bitop): '<S8>/Bitwise Logical Operator13'
     *  SignalConversion generated from: '<S2>/VeRGNR_g_RollTestOBDStatus_BIT5'
     */
    (void)Rte_Write_VeRGNR_g_RollTestOBDStatus_BIT5_Value((uint8)(((uint32)
        rtb_BitwiseLogicalOperator13) >> 5U));

    /* Outport: '<Root>/VeRGNR_g_RollTestOBDStatus_BIT6' incorporates:
     *  ArithShift: '<S8>/BitShiftFromInput12'
     *  Constant: '<S8>/shift3'
     *  S-Function (sfix_bitop): '<S8>/Bitwise Logical Operator14'
     *  SignalConversion generated from: '<S2>/VeRGNR_g_RollTestOBDStatus_BIT6'
     */
    (void)Rte_Write_VeRGNR_g_RollTestOBDStatus_BIT6_Value((uint8)(((uint32)
        rtb_BitwiseLogicalOperator14) >> 6U));

    /* Outport: '<Root>/VeRGNR_g_RollTestOBDStatus_BIT7' incorporates:
     *  ArithShift: '<S8>/BitShiftFromInput13'
     *  Constant: '<S8>/shift7'
     *  S-Function (sfix_bitop): '<S8>/Bitwise Logical Operator15'
     *  SignalConversion generated from: '<S2>/VeRGNR_g_RollTestOBDStatus_BIT7'
     */
    (void)Rte_Write_VeRGNR_g_RollTestOBDStatus_BIT7_Value((uint8)(((uint32)
        rtb_BitwiseLogicalOperator15) >> 7U));

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Merge: '<Root>/Merge_1_Irv' incorporates:
     *  SignalConversion generated from: '<S2>/VeRGNC_M_RgnReqAftrDecelLimit_write'
     * */
    Rte_IrvWrite_RGNR_MedTEB2_VeRGNC_M_RgnReqAftrDecelLimit_write_IRV
        (rtb_VariantMerge_For_Variant_Source_Va_h);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/MainRgnCntrl'
     */
    /* Merge: '<Root>/VeRGNC_M_RgnReq_xSEM_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S2>/VeRGNC_M_RgnReq_xSEM_write'
     *  SignalConversion: '<S9>/Signal Conversion'
     */
    Rte_IrvWrite_RGNR_MedTEB2_VeRGNC_M_RgnReq_xSEM_write_IRV(rtb_Switch_pv);

    /* Merge: '<Root>/VeRGNC_M_TrqRegenBrakingBeforeInhibit_IRV_Merge' incorporates:
     *  Gain: '<S7>/Control_signal_is_neg'
     *  SignalConversion generated from: '<S2>/VeRGNC_M_TrqRegenBrakingBeforeInhibit_write'
     */
    Rte_IrvWrite_RGNR_MedTEB2_VeRGNC_M_TrqRegenBrakingBeforeInhibit_write_IRV
        (-tmpRead);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB2' */
}

/* Model step function for TID2 */
FUNC(void, RGNR_CODE) RGNR_MedTEB3(void) /* Explicit Task: MedTEB3 */
{
    /* local block i/o variables */
    float32 rtb_VariantMerge_For_Variant_Source_V_cp;
    float32 tmpRead;
    boolean tmpRead_0;

#if Rte_SysCon_Variant_RGNR_4

    TeESSR_e_EngStartStopSt tmpRead_1;

#endif

    float32 tmpRead_2;

#if Rte_SysCon_Variant_RGNR_4

    float32 tmpRead_3;

#endif

#if Rte_SysCon_Variant_RGNR_4

    float32 tmpRead_4;

#endif

#if Rte_SysCon_Variant_RGNR_4

    TeHCCR_e_ClutchStatus tmpRead_5;

#endif

    float32 tmpRead_6;

#if Rte_SysCon_Variant_RGNR_4

    float32 tmpRead_7;

#endif

#if Rte_SysCon_Variant_RGNR_4

    float32 tmpRead_8;

#endif

    float32 tmpRead_9;
    float32 tmpRead_a;
    float32 tmpRead_c;
    float32 tmpRead_d;
    TeTRNR_e_TCMGearStat tmpRead_b;

#if Rte_SysCon_Variant_RGNR_2

    TeTRNR_e_TCMGearStat tmpRead_e;

#endif

    float32 rtb_MinMax3_a;
    float32 rtb_TmpSignalConversionAtVeATRR_M_OutTrq;
    float32 rtb_TmpSignalConversionAtVeCSVR_v_VehSpd;
    float32 rtb_TmpSignalConversionAtVeHTDR_M_ToFTgt;
    float32 rtb_TmpSignalConversionAtVeHTDR_M_ToRTgt;
    float32 rtb_TmpSignalConversionAtVeRGNC_M_RgnReq;
    float32 rtb_TmpSignalConversionAtVeRGNC_M_TrqReg;
    float32 rtb_VariantMerge_For_Variant_Source_Vari;
    float32 tmpRead_f;
    float32 tmpRead_h;
    float32 tmpRead_i;
    TeINVR_e_MtrInvrtrSt tmpRead_j;
    TeINVR_e_MtrInvrtrSt tmpRead_k;
    boolean rtb_AND_j5;
    boolean rtb_OR1;
    boolean rtb_TmpSignalConversionAtVeHPMR_b_PropSy;
    boolean tmpRead_g;

#if Rte_SysCon_Variant_RGNR_4

    float32 rtb_TmpSignalConversionAtVeVSDR_n_NTurbO;

#endif

    float32 rtb_MinMax1;
    float32 rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B;
    float32 rtb_TmpSignalConversionAtVeBPCR_T_BatMod;
    float32 rtb_TmpSignalConversionAtVeBPCR_T_HV_Bat;
    float32 rtb_TmpSignalConversionAtVeHTDR_M_ToFT_i;
    float32 rtb_TmpSignalConversionAtVeHTDR_M_ToRT_d;
    float32 rtb_TmpSignalConversionAtVeINVR_T_MtrA_I;
    float32 rtb_TmpSignalConversionAtVeINVR_T_MtrA_T;
    float32 rtb_TmpSignalConversionAtVeINVR_T_MtrB_I;
    float32 rtb_TmpSignalConversionAtVeINVR_T_MtrB_T;
    float32 rtb_TmpSignalConversionAtVeMSPR_n_MtrB_S;
    float32 rtb_VariantMerge_For_Variant_Source_Va_n;
    boolean rtb_OR1_ky;
    boolean rtb_TmpSignalConversionAtVePDTR_b_EburnE;
    boolean rtb_TmpSignalConversionAtVeSTRR_b_EngOnR;

#if Rte_SysCon_Variant_RGNR_4

    float32 rtb_TmpSignalConversionAtVeTISR_n_InputS;

#endif

    float32 rtb_MinMax4;
    float32 rtb_MinMax_m;
    float32 rtb_TmpSignalConversionAtVeTINR_r_TCMTra;
    float32 rtb_TmpSignalConversionAtVeWTAR_M_AeCoas;
    boolean rtb_AND_op;
    boolean rtb_OR1_lo;
    boolean rtb_TmpSignalConversionAtVeAECR_b_AeCoas;

#if Rte_SysCon_Variant_RGNR_2

    float32 rtb_TmpSignalConversionAtVeATRR_M_DrvInt;

#endif

    float32 rtb_TmpSignalConversionAtVeATRR_M_MinTra;
    float32 rtb_TmpSignalConversionAtVeATRR_r_Brk2Wh;
    float32 rtb_TmpSignalConversionAtVeBTQR_r_TrqDmn;
    TeFWDR_e_TrnsfrCaseRange rtb_TmpSignalConversionAtVeFWDR_e_Tcase_;
    TeHADR_e_LashSt rtb_TmpSignalConversionAtVeHADR_e_LashSt;
    TeHSER_e_SteadyStates rtb_TmpSignalConversionAtVeHSER_e_HTDR_S;
    TePLTR_e_ACCSystemSts rtb_TmpSignalConversionAtVePLTR_e_ACCSys;
    TeTIMR_e_RaceModeSts rtb_TmpSignalConversionAtVeTIMR_e_RaceMo;
    TeTIMR_e_RaceOptions rtb_TmpSignalConversionAtVeTIMR_e_RaceOp;
    TeTINR_e_TCM_TrqCntrlModeReq rtb_TmpSignalConversionAtVeTTQR_e_TCMTrq;
    TeTRGR_e_TransRangeState rtb_TmpSignalConversionAtVeTRGR_e_VldtdT;

#if Rte_SysCon_Variant_RGNR_4

    TeDTRR_e_SumFWIDFst rtb_TmpSignalConversionAtVeDTRR_e_SumFWI;

#endif

#if Rte_SysCon_Variant_RGNR_4

    TeHSER_e_RngEqnSel rtb_TmpSignalConversionAtVeHSER_e_RngEqn;

#endif

    float32 rtb_Switch6_idx_1;
    boolean Logical1;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB3' incorporates:
     *  SubSystem: '<Root>/RGNR_MedTEB3'
     */
    /* SignalConversion generated from: '<S3>/VeCSVR_v_VehSpdSigned' incorporates:
     *  Inport: '<Root>/VeCSVR_v_VehSpdSigned'
     */
    (void)Rte_Read_VeCSVR_v_VehSpdSigned_Value
        (&rtb_TmpSignalConversionAtVeCSVR_v_VehSpd);

    /* SignalConversion generated from: '<S3>/VeHADR_e_LashSt' incorporates:
     *  Inport: '<Root>/VeHADR_e_LashSt'
     */
    (void)Rte_Read_VeHADR_e_LashSt_Value
        (&rtb_TmpSignalConversionAtVeHADR_e_LashSt);

    /* SignalConversion generated from: '<S3>/VeTRGR_e_VldtdTransRngSt' incorporates:
     *  Inport: '<Root>/VeTRGR_e_VldtdTransRngSt'
     */
    (void)Rte_Read_VeTRGR_e_VldtdTransRngSt_Value
        (&rtb_TmpSignalConversionAtVeTRGR_e_VldtdT);

    /* SignalConversion generated from: '<S3>/VeHPMR_b_PropSysActv' incorporates:
     *  Inport: '<Root>/VeHPMR_b_PropSysActv'
     */
    (void)Rte_Read_VeHPMR_b_PropSysActv_Value
        (&rtb_TmpSignalConversionAtVeHPMR_b_PropSy);

    /* SignalConversion generated from: '<S3>/VeHSER_e_HTDR_State' incorporates:
     *  Inport: '<Root>/VeHSER_e_HTDR_State'
     */
    (void)Rte_Read_VeHSER_e_HTDR_State_Value
        (&rtb_TmpSignalConversionAtVeHSER_e_HTDR_S);

    /* SignalConversion generated from: '<S3>/VeRGNC_M_RgnReq_xSEM_Read' incorporates:
     *  Merge: '<Root>/VeRGNC_M_RgnReq_xSEM_IRV_Merge'
     */
    rtb_TmpSignalConversionAtVeRGNC_M_RgnReq =
        Rte_IrvRead_RGNR_MedTEB3_VeRGNC_M_RgnReq_xSEM_write_IRV();

    /* SignalConversion generated from: '<S3>/VeFWDR_e_Tcase_Stat' incorporates:
     *  Inport: '<Root>/VeFWDR_e_Tcase_Stat'
     */
    (void)Rte_Read_VeFWDR_e_Tcase_Stat_Value
        (&rtb_TmpSignalConversionAtVeFWDR_e_Tcase_);

    /* SignalConversion generated from: '<S3>/VeATRR_M_OutTrqReqImmWithoutSEM' incorporates:
     *  Inport: '<Root>/VeATRR_M_OutTrqReqImmWithoutSEM'
     */
    (void)Rte_Read_VeATRR_M_OutTrqReqImmWithoutSEM_Value
        (&rtb_TmpSignalConversionAtVeATRR_M_OutTrq);

    /* SignalConversion generated from: '<S3>/VeRGNC_M_TrqRegenBrakingBeforeInhibit_Read' incorporates:
     *  Merge: '<Root>/VeRGNC_M_TrqRegenBrakingBeforeInhibit_IRV_Merge'
     */
    rtb_TmpSignalConversionAtVeRGNC_M_TrqReg =
        Rte_IrvRead_RGNR_MedTEB3_VeRGNC_M_TrqRegenBrakingBeforeInhibit_write_IRV
        ();

    /* SignalConversion generated from: '<S3>/VeSTRR_b_EngOnReq' incorporates:
     *  Inport: '<Root>/VeSTRR_b_EngOnReq'
     */
    (void)Rte_Read_VeSTRR_b_EngOnReq_Value
        (&rtb_TmpSignalConversionAtVeSTRR_b_EngOnR);

    /* SignalConversion generated from: '<S3>/VeBPCR_Pct_HV_BatPackSOC_Arb' incorporates:
     *  Inport: '<Root>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     */
    (void)Rte_Read_VeBPCR_Pct_HV_BatPackSOC_Arb_Value
        (&rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B);

    /* SignalConversion generated from: '<S3>/VeBPCR_T_BatModTmp' incorporates:
     *  Inport: '<Root>/VeBPCR_T_BatModTmp'
     */
    (void)Rte_Read_VeBPCR_T_BatModTmp_Value
        (&rtb_TmpSignalConversionAtVeBPCR_T_BatMod);

    /* SignalConversion generated from: '<S3>/VeTISR_n_InputSpeed' incorporates:
     *  SignalConversion generated from: '<S3>/VeDTRR_e_SumFWIDFst'
     */
#if Rte_SysCon_Variant_RGNR_4

    /* SignalConversion generated from: '<S3>/VeTISR_n_InputSpeed' incorporates:
     *  Inport: '<Root>/VeTISR_n_InputSpeed'
     */
    (void)Rte_Read_VeTISR_n_InputSpeed_Value
        (&rtb_TmpSignalConversionAtVeTISR_n_InputS);

    /* SignalConversion generated from: '<S3>/VeDTRR_e_SumFWIDFst' incorporates:
     *  Inport: '<Root>/VeDTRR_e_SumFWIDFst'
     */
    (void)Rte_Read_VeDTRR_e_SumFWIDFst_Value
        (&rtb_TmpSignalConversionAtVeDTRR_e_SumFWI);

#endif

    /* End of SignalConversion generated from: '<S3>/VeTISR_n_InputSpeed' */

    /* SignalConversion generated from: '<S3>/VeTTQR_e_TCMTrqCntrlMdFst' incorporates:
     *  Inport: '<Root>/VeTTQR_e_TCMTrqCntrlMdFst'
     */
    (void)Rte_Read_VeTTQR_e_TCMTrqCntrlMdFst_Value
        (&rtb_TmpSignalConversionAtVeTTQR_e_TCMTrq);

    /* SignalConversion generated from: '<S3>/VeVSDR_n_NTurb' */
#if Rte_SysCon_Variant_RGNR_4

    /* SignalConversion generated from: '<S3>/VeVSDR_n_NTurb' incorporates:
     *  Inport: '<Root>/VeVSDR_n_NTurb'
     */
    (void)Rte_Read_VeVSDR_n_NTurb_Value
        (&rtb_TmpSignalConversionAtVeVSDR_n_NTurbO);

#endif

    /* End of SignalConversion generated from: '<S3>/VeVSDR_n_NTurb' */

    /* SignalConversion generated from: '<S3>/VeMSPR_n_MtrB_Spd' incorporates:
     *  Inport: '<Root>/VeMSPR_n_MtrB_Spd'
     */
    (void)Rte_Read_VeMSPR_n_MtrB_Spd_Value
        (&rtb_TmpSignalConversionAtVeMSPR_n_MtrB_S);

    /* SignalConversion generated from: '<S3>/VeHSER_e_RngEqnSel' */
#if Rte_SysCon_Variant_RGNR_4

    /* SignalConversion generated from: '<S3>/VeHSER_e_RngEqnSel' incorporates:
     *  Inport: '<Root>/VeHSER_e_RngEqnSel'
     */
    (void)Rte_Read_VeHSER_e_RngEqnSel_Value
        (&rtb_TmpSignalConversionAtVeHSER_e_RngEqn);

#endif

    /* End of SignalConversion generated from: '<S3>/VeHSER_e_RngEqnSel' */

    /* SignalConversion generated from: '<S3>/VeINVR_T_MtrA_Temp' incorporates:
     *  Inport: '<Root>/VeINVR_T_MtrA_Temp'
     */
    (void)Rte_Read_VeINVR_T_MtrA_Temp_Value
        (&rtb_TmpSignalConversionAtVeINVR_T_MtrA_T);

    /* SignalConversion generated from: '<S3>/VeINVR_T_MtrB_Temp' incorporates:
     *  Inport: '<Root>/VeINVR_T_MtrB_Temp'
     */
    (void)Rte_Read_VeINVR_T_MtrB_Temp_Value
        (&rtb_TmpSignalConversionAtVeINVR_T_MtrB_T);

    /* SignalConversion generated from: '<S3>/VeINVR_T_MtrA_InvrtrTemp' incorporates:
     *  Inport: '<Root>/VeINVR_T_MtrA_InvrtrTemp'
     */
    (void)Rte_Read_VeINVR_T_MtrA_InvrtrTemp_Value
        (&rtb_TmpSignalConversionAtVeINVR_T_MtrA_I);

    /* SignalConversion generated from: '<S3>/VeINVR_T_MtrB_InvrtrTemp' incorporates:
     *  Inport: '<Root>/VeINVR_T_MtrB_InvrtrTemp'
     */
    (void)Rte_Read_VeINVR_T_MtrB_InvrtrTemp_Value
        (&rtb_TmpSignalConversionAtVeINVR_T_MtrB_I);

    /* SignalConversion generated from: '<S3>/VeAECR_b_AeCoastStat' incorporates:
     *  Inport: '<Root>/VeAECR_b_AeCoastStat'
     */
    (void)Rte_Read_VeAECR_b_AeCoastStat_Value
        (&rtb_TmpSignalConversionAtVeAECR_b_AeCoas);

    /* SignalConversion generated from: '<S3>/VeATRR_M_MinTransTo' incorporates:
     *  Inport: '<Root>/VeATRR_M_MinTransTo'
     */
    (void)Rte_Read_VeATRR_M_MinTransTo_Value
        (&rtb_TmpSignalConversionAtVeATRR_M_MinTra);

    /* SignalConversion generated from: '<S3>/VeHTDR_M_ToFTgt_AWD' incorporates:
     *  Inport: '<Root>/VeHTDR_M_ToFTgt_AWD'
     */
    (void)Rte_Read_VeHTDR_M_ToFTgt_AWD_Value
        (&rtb_TmpSignalConversionAtVeHTDR_M_ToFTgt);

    /* SignalConversion generated from: '<S3>/VeHTDR_M_ToRTgt_AWD' incorporates:
     *  Inport: '<Root>/VeHTDR_M_ToRTgt_AWD'
     */
    (void)Rte_Read_VeHTDR_M_ToRTgt_AWD_Value
        (&rtb_TmpSignalConversionAtVeHTDR_M_ToRTgt);

    /* SignalConversion generated from: '<S3>/VeHTDR_M_ToFTgt_withRegen' incorporates:
     *  Inport: '<Root>/VeHTDR_M_ToFTgt_withRegen'
     */
    (void)Rte_Read_VeHTDR_M_ToFTgt_withRegen_Value
        (&rtb_TmpSignalConversionAtVeHTDR_M_ToFT_i);

    /* SignalConversion generated from: '<S3>/VeHTDR_M_ToRTgt_withRegen' incorporates:
     *  Inport: '<Root>/VeHTDR_M_ToRTgt_withRegen'
     */
    (void)Rte_Read_VeHTDR_M_ToRTgt_withRegen_Value
        (&rtb_TmpSignalConversionAtVeHTDR_M_ToRT_d);

    /* SignalConversion generated from: '<S3>/VeTINR_r_TCMTransTrqRatio' incorporates:
     *  Inport: '<Root>/VeTINR_r_TCMTransTrqRatio'
     */
    (void)Rte_Read_VeTINR_r_TCMTransTrqRatio_Value
        (&rtb_TmpSignalConversionAtVeTINR_r_TCMTra);

    /* SignalConversion generated from: '<S3>/VeATRR_M_DrvIntndTotBrkOutTorq' */
#if Rte_SysCon_Variant_RGNR_2

    /* SignalConversion generated from: '<S3>/VeATRR_M_DrvIntndTotBrkOutTorq' incorporates:
     *  Inport: '<Root>/VeATRR_M_DrvIntndTotBrkOutTorq'
     */
    (void)Rte_Read_VeATRR_M_DrvIntndTotBrkOutTorq_Value
        (&rtb_TmpSignalConversionAtVeATRR_M_DrvInt);

#endif

    /* End of SignalConversion generated from: '<S3>/VeATRR_M_DrvIntndTotBrkOutTorq' */

    /* SignalConversion generated from: '<S3>/VeATRR_r_Brk2Wheel' incorporates:
     *  Inport: '<Root>/VeATRR_r_Brk2Wheel'
     */
    (void)Rte_Read_VeATRR_r_Brk2Wheel_Value
        (&rtb_TmpSignalConversionAtVeATRR_r_Brk2Wh);

    /* SignalConversion generated from: '<S3>/VeBTQR_r_TrqDmnConvSumToAxl' incorporates:
     *  Inport: '<Root>/VeBTQR_r_TrqDmnConvSumToAxl'
     */
    (void)Rte_Read_VeBTQR_r_TrqDmnConvSumToAxl_Value
        (&rtb_TmpSignalConversionAtVeBTQR_r_TrqDmn);

    /* SignalConversion generated from: '<S3>/VeWTAR_M_AeCoastTorqDiff' incorporates:
     *  Inport: '<Root>/VeWTAR_M_AeCoastTorqDiff'
     */
    (void)Rte_Read_VeWTAR_M_AeCoastTorqDiff_Value
        (&rtb_TmpSignalConversionAtVeWTAR_M_AeCoas);

    /* SignalConversion generated from: '<S3>/VePDTR_b_EburnEnbl' incorporates:
     *  Inport: '<Root>/VePDTR_b_EburnEnbl'
     */
    (void)Rte_Read_VePDTR_b_EburnEnbl_Value
        (&rtb_TmpSignalConversionAtVePDTR_b_EburnE);

    /* SignalConversion generated from: '<S3>/VeBPCR_T_HV_BatModTempAvg' incorporates:
     *  Inport: '<Root>/VeBPCR_T_HV_BatModTempAvg'
     */
    (void)Rte_Read_VeBPCR_T_HV_BatModTempAvg_Value
        (&rtb_TmpSignalConversionAtVeBPCR_T_HV_Bat);

    /* SignalConversion generated from: '<S3>/VeTIMR_e_RaceOptions_Sts' incorporates:
     *  Inport: '<Root>/VeTIMR_e_RaceOptions_Sts'
     */
    (void)Rte_Read_VeTIMR_e_RaceOptions_Sts_Value
        (&rtb_TmpSignalConversionAtVeTIMR_e_RaceOp);

    /* SignalConversion generated from: '<S3>/VeTIMR_e_RaceModeSts' incorporates:
     *  Inport: '<Root>/VeTIMR_e_RaceModeSts'
     */
    (void)Rte_Read_VeTIMR_e_RaceModeSts_Value
        (&rtb_TmpSignalConversionAtVeTIMR_e_RaceMo);

    /* SignalConversion generated from: '<S3>/VePLTR_e_ACCSystemSts' incorporates:
     *  Inport: '<Root>/VePLTR_e_ACCSystemSts'
     */
    (void)Rte_Read_VePLTR_e_ACCSystemSts_Value
        (&rtb_TmpSignalConversionAtVePLTR_e_ACCSys);

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/MainRgnCapCntrl'
     */
    /* Logic: '<S228>/Logical Operator' incorporates:
     *  Constant: '<S240>/Constant'
     *  Constant: '<S241>/Constant'
     *  Constant: '<S242>/Constant'
     *  Constant: '<S243>/Calib'
     *  RelationalOperator: '<S228>/Relational Operator'
     *  RelationalOperator: '<S228>/Relational Operator1'
     *  RelationalOperator: '<S228>/Relational Operator2'
     */
    VeRGNC_b_AeCoast_AccSystemSts = ((((CePLTR_e_Off == ((uint32)
        rtb_TmpSignalConversionAtVePLTR_e_ACCSys)) || (((uint32)
        rtb_TmpSignalConversionAtVePLTR_e_ACCSys) == CePLTR_e_Cancel)) ||
        (((uint32)rtb_TmpSignalConversionAtVePLTR_e_ACCSys) == CePLTR_e_Enabled))
        || (KeRGNR_b_OvrrdAccSys));

    /* Selector: '<S229>/Selector' incorporates:
     *  Constant: '<S245>/Calib'
     *  DataTypeConversion: '<S229>/Data Type Conversion'
     */
    VeRGNC_b_DeactvAeCoast_VldtdTransRngSt = KaRGNR_b_PRNDLCheckAeCoast
        [(rtb_TmpSignalConversionAtVeTRGR_e_VldtdT)];

    /* Logic: '<S230>/Logical1' incorporates:
     *  Constant: '<S248>/Calib'
     *  Logic: '<S554>/Logical1'
     */
    VeRGNC_b_DeactvAeCoast_RunCrankActive =
        (rtb_TmpSignalConversionAtVeHPMR_b_PropSy ||
         (KeRGNR_b_OvrrdPropSysActvAvail));

    /* Switch: '<S251>/Switch1' incorporates:
     *  Constant: '<S250>/Constant'
     *  Constant: '<S252>/Calib'
     *  Logic: '<S231>/Logical1'
     *  RelationalOperator: '<S231>/Comparison5'
     */
    VeRGNC_b_DeactvAeCoast_TrnsfrCsRng = ((((uint32)
        rtb_TmpSignalConversionAtVeFWDR_e_Tcase_) != CeFWDR_e_TfrCasNeutral) ||
        (KeRGNR_b_OvrrdTrnsfrCaseAvail));

    /* Outputs for Atomic SubSystem: '<S232>/Hysteresis' */
    /* Switch: '<S254>/Switch1' incorporates:
     *  Constant: '<S254>/Constant Value'
     *  Constant: '<S257>/Calib'
     *  Constant: '<S258>/Calib'
     *  RelationalOperator: '<S254>/Greater  Than'
     *  RelationalOperator: '<S254>/Greater  Than1'
     *  UnitDelay: '<S254>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B > KeRGNR_r_SOCthrshld_RSP)
    {
        RGNR_ac_DW.UnitDelay_DSTATE_hd = true;
    }
    else
    {
        RGNR_ac_DW.UnitDelay_DSTATE_hd =
            ((rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B >=
              KeRGNR_r_SOCthrshld_LSP) && (RGNR_ac_DW.UnitDelay_DSTATE_hd));
    }

    /* End of Switch: '<S254>/Switch1' */
    /* End of Outputs for SubSystem: '<S232>/Hysteresis' */

    /* Switch: '<S232>/Switch' incorporates:
     *  Constant: '<S256>/Calib'
     */
    if (KeRGNR_b_SOCthrshldOvrrdEnbl)
    {
        /* Switch: '<S232>/Switch' incorporates:
         *  Constant: '<S255>/Calib'
         */
        VeRGNC_b_DeactvAeCoast_BatPackSOC_Arb = KeRGNR_b_SOCthrshldOvrrd;
    }
    else
    {
        /* Switch: '<S232>/Switch' incorporates:
         *  Logic: '<S232>/Logical'
         *  UnitDelay: '<S254>/Unit Delay'
         */
        VeRGNC_b_DeactvAeCoast_BatPackSOC_Arb = !RGNR_ac_DW.UnitDelay_DSTATE_hd;
    }

    /* End of Switch: '<S232>/Switch' */

    /* Outputs for Atomic SubSystem: '<S233>/Hysteresis_1' */
    /* Switch: '<S260>/Switch1' incorporates:
     *  Constant: '<S260>/Constant Value'
     *  Constant: '<S262>/Calib'
     *  Constant: '<S263>/Calib'
     *  RelationalOperator: '<S260>/Greater  Than'
     *  RelationalOperator: '<S260>/Greater  Than1'
     *  Sum: '<S233>/Add'
     *  UnitDelay: '<S260>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_T_HV_Bat >= (KeRGNC_T_HVBatteryHighTemp
            + KeRGNC_T_HVBatteryHighTempOff))
    {
        RGNR_ac_DW.UnitDelay_DSTATE_fzc = true;
    }
    else
    {
        RGNR_ac_DW.UnitDelay_DSTATE_fzc =
            ((rtb_TmpSignalConversionAtVeBPCR_T_HV_Bat >
              KeRGNC_T_HVBatteryHighTemp) && (RGNR_ac_DW.UnitDelay_DSTATE_fzc));
    }

    /* End of Switch: '<S260>/Switch1' */
    /* End of Outputs for SubSystem: '<S233>/Hysteresis_1' */

    /* Outputs for Atomic SubSystem: '<S233>/Hysteresis_2' */
    /* Switch: '<S261>/Switch1' incorporates:
     *  Constant: '<S261>/Constant Value'
     *  Constant: '<S264>/Calib'
     *  Constant: '<S265>/Calib'
     *  RelationalOperator: '<S261>/Greater  Than'
     *  RelationalOperator: '<S261>/Greater  Than1'
     *  Sum: '<S233>/Add1'
     *  UnitDelay: '<S261>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_T_HV_Bat >= (KeRGNC_T_HVBatteryLowTemp +
         KeRGNC_T_HVBatteryLowTempOff))
    {
        RGNR_ac_DW.UnitDelay_DSTATE_lr = true;
    }
    else
    {
        RGNR_ac_DW.UnitDelay_DSTATE_lr =
            ((rtb_TmpSignalConversionAtVeBPCR_T_HV_Bat >
              KeRGNC_T_HVBatteryLowTemp) && (RGNR_ac_DW.UnitDelay_DSTATE_lr));
    }

    /* End of Switch: '<S261>/Switch1' */
    /* End of Outputs for SubSystem: '<S233>/Hysteresis_2' */

    /* Outputs for Atomic SubSystem: '<S233>/Hysteresis' */
    /* Switch: '<S259>/Switch1' incorporates:
     *  Constant: '<S259>/Constant Value'
     *  Constant: '<S267>/Calib'
     *  Constant: '<S268>/Calib'
     *  RelationalOperator: '<S259>/Greater  Than'
     *  RelationalOperator: '<S259>/Greater  Than1'
     *  UnitDelay: '<S259>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_T_BatMod > KeRGNR_T_HVTmpthrshld_RSP)
    {
        RGNR_ac_DW.UnitDelay_DSTATE_nrw = true;
    }
    else
    {
        RGNR_ac_DW.UnitDelay_DSTATE_nrw =
            ((rtb_TmpSignalConversionAtVeBPCR_T_BatMod >=
              KeRGNR_T_HVTmpthrshld_LSP) && (RGNR_ac_DW.UnitDelay_DSTATE_nrw));
    }

    /* End of Switch: '<S259>/Switch1' */
    /* End of Outputs for SubSystem: '<S233>/Hysteresis' */

    /* Switch: '<S233>/Switch1' incorporates:
     *  Constant: '<S266>/Calib'
     */
    if (KeRGNC_b_HVTempSlct)
    {
        /* Switch: '<S233>/Switch' incorporates:
         *  Constant: '<S270>/Calib'
         */
        if (KeRGNR_b_HVTmpthrshldOvrrdEnbl)
        {
            /* Switch: '<S233>/Switch1' incorporates:
             *  Constant: '<S269>/Calib'
             *  Switch: '<S233>/Switch'
             */
            VeRGNC_b_DeactvAeCoast_BatModTmp = KeRGNR_b_HVTmpthrshldOvrrd;
        }
        else
        {
            /* Switch: '<S233>/Switch1' incorporates:
             *  Logic: '<S233>/Logical'
             *  Switch: '<S233>/Switch'
             *  UnitDelay: '<S259>/Unit Delay'
             */
            VeRGNC_b_DeactvAeCoast_BatModTmp = !RGNR_ac_DW.UnitDelay_DSTATE_nrw;
        }

        /* End of Switch: '<S233>/Switch' */
    }
    else
    {
        /* Switch: '<S233>/Switch1' incorporates:
         *  Logic: '<S233>/AND1'
         *  Logic: '<S233>/AND3'
         *  UnitDelay: '<S260>/Unit Delay'
         *  UnitDelay: '<S261>/Unit Delay'
         */
        VeRGNC_b_DeactvAeCoast_BatModTmp = ((!RGNR_ac_DW.UnitDelay_DSTATE_fzc) &&
            (RGNR_ac_DW.UnitDelay_DSTATE_lr));
    }

    /* End of Switch: '<S233>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB3' */

    /* Inport: '<Root>/VeSRAR_b_BSMLoCBusOff_CANC_C2' */
    (void)Rte_Read_VeSRAR_b_BSMLoCBusOff_CANC_C2_Value(&Logical1);

    /* Inport: '<Root>/VeCCTR_b_CcEngaged' */
    (void)Rte_Read_VeCCTR_b_CcEngaged_Value(&rtb_AND_j5);

    /* Inport: '<Root>/VeINVR_e_MtrB_InvrtrSt' */
    (void)Rte_Read_VeINVR_e_MtrB_InvrtrSt_Value(&tmpRead_k);

    /* Inport: '<Root>/VeINVR_e_MtrA_InvrtrSt' */
    (void)Rte_Read_VeINVR_e_MtrA_InvrtrSt_Value(&tmpRead_j);

    /* Inport: '<Root>/VeBTQR_b_RegenBrkAxleTrqReqFA' */
    (void)Rte_Read_VeBTQR_b_RegenBrkAxleTrqReqFA_Value(&rtb_OR1_ky);

    /* Inport: '<Root>/VeSRAR_b_RegenBrkInhb' */
    (void)Rte_Read_VeSRAR_b_RegenBrkInhb_Value(&tmpRead_0);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB3' incorporates:
     *  SubSystem: '<Root>/RGNR_MedTEB3'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/MainRgnCapCntrl'
     */
    /* Switch: '<S271>/Switch1' incorporates:
     *  Constant: '<S272>/Calib'
     *  Constant: '<S273>/Calib'
     *  Logic: '<S235>/Logical Operator'
     *  RelationalOperator: '<S235>/Relational Operator'
     *  RelationalOperator: '<S235>/Relational Operator1'
     */
    VeRGNC_b_DeactvAeCoast_VehSpdSigned = ((KeRGNR_n_LowSpdLim <=
        rtb_TmpSignalConversionAtVeCSVR_v_VehSpd) &&
        (rtb_TmpSignalConversionAtVeCSVR_v_VehSpd <= KeRGNR_n_UpSpdLim));

    /* Logic: '<S209>/Logical Operator17' incorporates:
     *  Constant: '<S239>/Calib'
     *  Logic: '<S209>/Logical Operator13'
     */
    VeRGNC_b_AeCoast_CcEngaged = ((!rtb_AND_j5) || (KeRGNR_b_OvrrdCcEngage));

    /* Logic: '<S211>/Logical1' incorporates:
     *  Constant: '<S736>/Constant'
     *  Logic: '<S211>/Logical'
     *  Merge: '<Root>/Merge_17'
     *  Merge: '<Root>/Merge_18'
     *  RelationalOperator: '<S211>/Comparison4'
     *  SignalConversion generated from: '<S3>/VeRGNR_b_RegenBrkCmndSt_read'
     *  SignalConversion generated from: '<S3>/VeRGNR_e_RegenBrkCmndStEnbl_read'
     *  Switch: '<S211>/Switch'
     */
    Logical1 = ((((!Logical1) && tmpRead_0) || ((((uint32)
                    Rte_IrvRead_RGNR_MedTEB3_VeRGNR_e_RegenBrkCmndStEnbl_write_IRV
                    ()) == CeODCR_e_ShortTermAdjust) &&
                  (Rte_IrvRead_RGNR_MedTEB3_VeRGNR_b_RegenBrkCmndSt_write_IRV())))
                || rtb_OR1_ky);

    /* Logic: '<S209>/Logical Operator2' incorporates:
     *  Logic: '<S219>/Logical Operator1'
     *  Switch: '<S208>/Switch1'
     */
    VeRGNR_b_DeactvAeCoast_InhRgnAct = !Logical1;

    /* Logic: '<S237>/Logical Operator' incorporates:
     *  Constant: '<S308>/Constant'
     *  Constant: '<S309>/Constant'
     *  Inport: '<Root>/VeINVR_e_MtrA_InvrtrSt'
     *  Inport: '<Root>/VeINVR_e_MtrB_InvrtrSt'
     *  RelationalOperator: '<S237>/Relational Operator'
     *  RelationalOperator: '<S237>/Relational Operator1'
     */
    VeRGNC_b_MtrFlt = ((((uint32)tmpRead_j) != CeINVR_e_InverterFaulted) &&
                       (((uint32)tmpRead_k) != CeINVR_e_InverterFaulted));

    /* Outputs for Atomic SubSystem: '<S238>/Hysteresis_1' */
    /* Switch: '<S312>/Switch1' incorporates:
     *  Constant: '<S312>/Constant Value'
     *  Constant: '<S317>/Calib'
     *  Constant: '<S318>/Calib'
     *  RelationalOperator: '<S312>/Greater  Than'
     *  RelationalOperator: '<S312>/Greater  Than1'
     *  Sum: '<S238>/Add'
     *  UnitDelay: '<S312>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeINVR_T_MtrA_T >= (KeRGNC_T_MotAHighTemp +
            KeRGNC_T_MotAHighTempOff))
    {
        RGNR_ac_DW.UnitDelay_DSTATE_cy = true;
    }
    else
    {
        RGNR_ac_DW.UnitDelay_DSTATE_cy =
            ((rtb_TmpSignalConversionAtVeINVR_T_MtrA_T > KeRGNC_T_MotAHighTemp) &&
             (RGNR_ac_DW.UnitDelay_DSTATE_cy));
    }

    /* End of Switch: '<S312>/Switch1' */
    /* End of Outputs for SubSystem: '<S238>/Hysteresis_1' */

    /* Outputs for Atomic SubSystem: '<S238>/Hysteresis_2' */
    /* Switch: '<S313>/Switch1' incorporates:
     *  Constant: '<S313>/Constant Value'
     *  Constant: '<S319>/Calib'
     *  Constant: '<S320>/Calib'
     *  RelationalOperator: '<S313>/Greater  Than'
     *  RelationalOperator: '<S313>/Greater  Than1'
     *  Sum: '<S238>/Add1'
     *  UnitDelay: '<S313>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeINVR_T_MtrA_T >= (KeRGNC_T_MotALowTemp +
            KeRGNC_T_MotALowTempOff))
    {
        RGNR_ac_DW.UnitDelay_DSTATE_eh = true;
    }
    else
    {
        RGNR_ac_DW.UnitDelay_DSTATE_eh =
            ((rtb_TmpSignalConversionAtVeINVR_T_MtrA_T > KeRGNC_T_MotALowTemp) &&
             (RGNR_ac_DW.UnitDelay_DSTATE_eh));
    }

    /* End of Switch: '<S313>/Switch1' */
    /* End of Outputs for SubSystem: '<S238>/Hysteresis_2' */

    /* Outputs for Atomic SubSystem: '<S238>/Hysteresis_3' */
    /* Switch: '<S314>/Switch1' incorporates:
     *  Constant: '<S314>/Constant Value'
     *  Constant: '<S321>/Calib'
     *  Constant: '<S322>/Calib'
     *  RelationalOperator: '<S314>/Greater  Than'
     *  RelationalOperator: '<S314>/Greater  Than1'
     *  Sum: '<S238>/Add2'
     *  UnitDelay: '<S314>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeINVR_T_MtrB_T >= (KeRGNC_T_MotBHighTemp +
            KeRGNC_T_MotBHighTempOff))
    {
        RGNR_ac_DW.UnitDelay_DSTATE_cz = true;
    }
    else
    {
        RGNR_ac_DW.UnitDelay_DSTATE_cz =
            ((rtb_TmpSignalConversionAtVeINVR_T_MtrB_T > KeRGNC_T_MotBHighTemp) &&
             (RGNR_ac_DW.UnitDelay_DSTATE_cz));
    }

    /* End of Switch: '<S314>/Switch1' */
    /* End of Outputs for SubSystem: '<S238>/Hysteresis_3' */

    /* Outputs for Atomic SubSystem: '<S238>/Hysteresis_4' */
    /* Switch: '<S315>/Switch1' incorporates:
     *  Constant: '<S315>/Constant Value'
     *  Constant: '<S323>/Calib'
     *  Constant: '<S324>/Calib'
     *  RelationalOperator: '<S315>/Greater  Than'
     *  RelationalOperator: '<S315>/Greater  Than1'
     *  Sum: '<S238>/Add3'
     *  UnitDelay: '<S315>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeINVR_T_MtrB_T >= (KeRGNC_T_MotBLowTemp +
            KeRGNC_T_MotBLowTempOff))
    {
        RGNR_ac_DW.UnitDelay_DSTATE_co = true;
    }
    else
    {
        RGNR_ac_DW.UnitDelay_DSTATE_co =
            ((rtb_TmpSignalConversionAtVeINVR_T_MtrB_T > KeRGNC_T_MotBLowTemp) &&
             (RGNR_ac_DW.UnitDelay_DSTATE_co));
    }

    /* End of Switch: '<S315>/Switch1' */
    /* End of Outputs for SubSystem: '<S238>/Hysteresis_4' */

    /* Outputs for Atomic SubSystem: '<S238>/Hysteresis2' */
    /* Switch: '<S310>/Switch1' incorporates:
     *  Constant: '<S310>/Constant Value'
     *  Constant: '<S325>/Calib'
     *  Constant: '<S326>/Calib'
     *  RelationalOperator: '<S310>/Greater  Than'
     *  RelationalOperator: '<S310>/Greater  Than1'
     *  UnitDelay: '<S310>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeINVR_T_MtrA_I > KeRGNR_T_InvtrATmpthrshld_RSP)
    {
        RGNR_ac_DW.UnitDelay_DSTATE_lm = true;
    }
    else
    {
        RGNR_ac_DW.UnitDelay_DSTATE_lm =
            ((rtb_TmpSignalConversionAtVeINVR_T_MtrA_I >=
              KeRGNR_T_InvtrATmpthrshld_LSP) && (RGNR_ac_DW.UnitDelay_DSTATE_lm));
    }

    /* End of Switch: '<S310>/Switch1' */
    /* End of Outputs for SubSystem: '<S238>/Hysteresis2' */

    /* Outputs for Atomic SubSystem: '<S238>/Hysteresis3' */
    /* Switch: '<S311>/Switch1' incorporates:
     *  Constant: '<S311>/Constant Value'
     *  Constant: '<S327>/Calib'
     *  Constant: '<S328>/Calib'
     *  RelationalOperator: '<S311>/Greater  Than'
     *  RelationalOperator: '<S311>/Greater  Than1'
     *  UnitDelay: '<S311>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeINVR_T_MtrB_I > KeRGNR_T_InvtrBTmpthrshld_RSP)
    {
        RGNR_ac_DW.UnitDelay_DSTATE_lt = true;
    }
    else
    {
        RGNR_ac_DW.UnitDelay_DSTATE_lt =
            ((rtb_TmpSignalConversionAtVeINVR_T_MtrB_I >=
              KeRGNR_T_InvtrBTmpthrshld_LSP) && (RGNR_ac_DW.UnitDelay_DSTATE_lt));
    }

    /* End of Switch: '<S311>/Switch1' */
    /* End of Outputs for SubSystem: '<S238>/Hysteresis3' */

    /* Switch: '<S238>/Switch' incorporates:
     *  Constant: '<S333>/Calib'
     *  Constant: '<S334>/Calib'
     *  Logic: '<S238>/AND1'
     *  Logic: '<S238>/AND3'
     *  UnitDelay: '<S312>/Unit Delay'
     *  UnitDelay: '<S313>/Unit Delay'
     */
    if (KeRGNR_b_MtrATmpthrshldOvrrdEnbl)
    {
        rtb_OR1_ky = KeRGNR_b_MtrATmpthrshldOvrrd;
    }
    else
    {
        rtb_OR1_ky = ((!RGNR_ac_DW.UnitDelay_DSTATE_cy) &&
                      (RGNR_ac_DW.UnitDelay_DSTATE_eh));
    }

    /* End of Switch: '<S238>/Switch' */

    /* Switch: '<S238>/Switch1' incorporates:
     *  Constant: '<S335>/Calib'
     *  Constant: '<S336>/Calib'
     *  Logic: '<S238>/AND2'
     *  Logic: '<S238>/AND5'
     *  UnitDelay: '<S314>/Unit Delay'
     *  UnitDelay: '<S315>/Unit Delay'
     */
    if (KeRGNR_b_MtrBTmpthrshldOvrrdEnbl)
    {
        tmpRead_0 = KeRGNR_b_MtrBTmpthrshldOvrrd;
    }
    else
    {
        tmpRead_0 = ((!RGNR_ac_DW.UnitDelay_DSTATE_cz) &&
                     (RGNR_ac_DW.UnitDelay_DSTATE_co));
    }

    /* End of Switch: '<S238>/Switch1' */

    /* Switch: '<S238>/Switch2' incorporates:
     *  Constant: '<S329>/Calib'
     *  Constant: '<S330>/Calib'
     *  Logic: '<S238>/Logical2'
     *  UnitDelay: '<S310>/Unit Delay'
     */
    if (KeRGNR_b_InvtrATmpthrshldOvrrdEnbl)
    {
        rtb_AND_j5 = KeRGNR_b_InvtrATmpthrshldOvrrd;
    }
    else
    {
        rtb_AND_j5 = !RGNR_ac_DW.UnitDelay_DSTATE_lm;
    }

    /* End of Switch: '<S238>/Switch2' */

    /* Switch: '<S238>/Switch3' incorporates:
     *  Constant: '<S331>/Calib'
     *  Constant: '<S332>/Calib'
     *  Logic: '<S238>/Logical3'
     *  UnitDelay: '<S311>/Unit Delay'
     */
    if (KeRGNR_b_InvtrBTmpthrshldOvrrdEnbl)
    {
        rtb_TmpSignalConversionAtVeHPMR_b_PropSy =
            KeRGNR_b_InvtrBTmpthrshldOvrrd;
    }
    else
    {
        rtb_TmpSignalConversionAtVeHPMR_b_PropSy =
            !RGNR_ac_DW.UnitDelay_DSTATE_lt;
    }

    /* End of Switch: '<S238>/Switch3' */

    /* Switch: '<S316>/Switch1' incorporates:
     *  Logic: '<S238>/LogicalOperator'
     */
    VeRGNR_b_DeactvAeCoast_MotorTemp = (((rtb_OR1_ky && tmpRead_0) && rtb_AND_j5)
        && rtb_TmpSignalConversionAtVeHPMR_b_PropSy);

    /* Switch: '<S236>/Switch2' incorporates:
     *  Constant: '<S275>/Constant'
     *  Constant: '<S276>/Constant'
     *  Constant: '<S277>/Constant'
     *  Constant: '<S278>/Constant'
     *  Constant: '<S279>/Constant'
     *  Constant: '<S280>/Constant'
     *  Constant: '<S281>/Constant'
     *  Constant: '<S282>/Constant'
     *  Constant: '<S283>/Constant'
     *  Constant: '<S284>/Constant'
     *  Constant: '<S285>/Constant'
     *  Constant: '<S286>/Constant'
     *  Constant: '<S287>/Constant'
     *  Constant: '<S288>/Constant'
     *  Constant: '<S290>/Calib'
     *  Constant: '<S291>/Calib'
     *  Constant: '<S292>/Calib'
     *  Constant: '<S293>/Calib'
     *  Constant: '<S294>/Calib'
     *  Constant: '<S295>/Calib'
     *  Constant: '<S296>/Calib'
     *  Constant: '<S297>/Calib'
     *  Constant: '<S298>/Calib'
     *  Constant: '<S299>/Calib'
     *  Constant: '<S300>/Calib'
     *  Constant: '<S301>/Calib'
     *  Constant: '<S302>/Calib'
     *  Constant: '<S303>/Calib'
     *  Constant: '<S304>/Calib'
     *  Constant: '<S305>/Calib'
     *  Logic: '<S236>/AND'
     *  Logic: '<S236>/AND1'
     *  Logic: '<S236>/AND10'
     *  Logic: '<S236>/AND11'
     *  Logic: '<S236>/AND12'
     *  Logic: '<S236>/AND13'
     *  Logic: '<S236>/AND2'
     *  Logic: '<S236>/AND3'
     *  Logic: '<S236>/AND4'
     *  Logic: '<S236>/AND5'
     *  Logic: '<S236>/AND6'
     *  Logic: '<S236>/AND7'
     *  Logic: '<S236>/AND8'
     *  Logic: '<S236>/AND9'
     *  Logic: '<S236>/NOT1'
     *  Logic: '<S236>/OR1'
     *  RelationalOperator: '<S236>/Equal1'
     *  RelationalOperator: '<S236>/Equal10'
     *  RelationalOperator: '<S236>/Equal11'
     *  RelationalOperator: '<S236>/Equal12'
     *  RelationalOperator: '<S236>/Equal13'
     *  RelationalOperator: '<S236>/Equal14'
     *  RelationalOperator: '<S236>/Equal2'
     *  RelationalOperator: '<S236>/Equal3'
     *  RelationalOperator: '<S236>/Equal4'
     *  RelationalOperator: '<S236>/Equal5'
     *  RelationalOperator: '<S236>/Equal6'
     *  RelationalOperator: '<S236>/Equal7'
     *  RelationalOperator: '<S236>/Equal8'
     *  RelationalOperator: '<S236>/Equal9'
     */
    if (KeRGNC_b_ModeRmvlOvrRd)
    {
        rtb_OR1_ky = KeRGNC_b_ModeRmvlOvrRdVal;
    }
    else
    {
        rtb_OR1_ky = (((((((((((((((!KeRGNC_b_RgnEnblN) || (((uint32)
            rtb_TmpSignalConversionAtVeHSER_e_HTDR_S) != CeHSER_e_Neut_State)) &&
            ((!KeRGNC_b_RgnEnblM1) || (((uint32)
            rtb_TmpSignalConversionAtVeHSER_e_HTDR_S) != CeHSER_e_M1_State))) &&
            ((!KeRGNC_b_RgnEnblM2) || (((uint32)
            rtb_TmpSignalConversionAtVeHSER_e_HTDR_S) != CeHSER_e_M2_State))) &&
                                ((!KeRGNC_b_RgnEnblM3) || (((uint32)
            rtb_TmpSignalConversionAtVeHSER_e_HTDR_S) != CeHSER_e_M3_State))) &&
                               ((!KeRGNC_b_RgnEnblG1) || (((uint32)
            rtb_TmpSignalConversionAtVeHSER_e_HTDR_S) != CeHSER_e_G1_State))) &&
                              ((!KeRGNC_b_RgnEnblG2) || (((uint32)
            rtb_TmpSignalConversionAtVeHSER_e_HTDR_S) != CeHSER_e_G2_State))) &&
                             ((!KeRGNC_b_RgnEnblG3) || (((uint32)
                                rtb_TmpSignalConversionAtVeHSER_e_HTDR_S) !=
                               CeHSER_e_G3_State))) && ((!KeRGNC_b_RgnEnblG4) ||
                             (((uint32)rtb_TmpSignalConversionAtVeHSER_e_HTDR_S)
                              != CeHSER_e_G4_State))) && ((!KeRGNC_b_RgnEnblNHi)
                            || (((uint32)
                              rtb_TmpSignalConversionAtVeHSER_e_HTDR_S) !=
                                CeHSER_e_NeutHI_State))) &&
                          ((!KeRGNC_b_RgnEnblM2Hi) || (((uint32)
                             rtb_TmpSignalConversionAtVeHSER_e_HTDR_S) !=
                            CeHSER_e_M2HI_State))) && ((!KeRGNC_b_RgnEnblG3Hi) ||
                          (((uint32)rtb_TmpSignalConversionAtVeHSER_e_HTDR_S) !=
                           CeHSER_e_G3HI_State))) && ((!KeRGNC_b_RgnEnblNAll) ||
                         (((uint32)rtb_TmpSignalConversionAtVeHSER_e_HTDR_S) !=
                          CeHSER_e_NeutALL_State))) && ((!KeRGNC_b_RgnEnblEngOff)
                        || (((uint32)rtb_TmpSignalConversionAtVeHSER_e_HTDR_S)
                            != CeHSER_e_M1_EngOff_State))) &&
                      ((!KeRGNC_b_RgnEnblNC2C) || (((uint32)
                         rtb_TmpSignalConversionAtVeHSER_e_HTDR_S) !=
                        CeHSER_e_NeutC2C_State)));
    }

    /* End of Switch: '<S236>/Switch2' */

    /* Switch: '<S236>/Switch1' */
    if (!rtb_OR1_ky)
    {
        /* Switch: '<S236>/Switch1' incorporates:
         *  Constant: '<S289>/Calib'
         */
        RGNR_ac_DW.UnitDelay_DSTATE = KeRGNC_T_ModeRmvlCnts;
    }

    /* End of Switch: '<S236>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S236>/Protected Division' */
    /* Switch: '<S307>/Switch1' incorporates:
     *  Constant: '<S289>/Calib'
     *  Constant: '<S307>/Constant Value'
     *  Constant: '<S307>/Constant Value1'
     *  Constant: '<S307>/Constant Value2'
     *  Constant: '<S307>/Constant Value3'
     *  Logic: '<S307>/AND'
     *  RelationalOperator: '<S307>/Greater Than or Equal '
     *  RelationalOperator: '<S307>/Greater Than or Equal 1'
     *  RelationalOperator: '<S307>/Not Equal'
     *  RelationalOperator: '<S307>/Not Equal1'
     *  Switch: '<S307>/Switch2'
     *  Switch: '<S307>/Switch3'
     */
    if ((RGNR_ac_DW.UnitDelay_DSTATE != 0.0F) && (KeRGNC_T_ModeRmvlCnts != 0.0F))
    {
        /* Switch: '<S307>/Switch1' incorporates:
         *  Product: '<S307>/Division'
         */
        VeRGNC_b_DeactvAeCoast_ModeHTDRState = RGNR_ac_DW.UnitDelay_DSTATE /
            KeRGNC_T_ModeRmvlCnts;
    }
    else if (RGNR_ac_DW.UnitDelay_DSTATE > 0.0F)
    {
        /* Switch: '<S307>/Switch2' incorporates:
         *  Constant: '<S307>/MAXFLOAT'
         *  Switch: '<S307>/Switch1'
         */
        VeRGNC_b_DeactvAeCoast_ModeHTDRState = 3.402823466E+38F;
    }
    else if (RGNR_ac_DW.UnitDelay_DSTATE < 0.0F)
    {
        /* Switch: '<S307>/Switch3' incorporates:
         *  Constant: '<S307>/MINFLOAT'
         *  Switch: '<S307>/Switch1'
         *  Switch: '<S307>/Switch2'
         */
        VeRGNC_b_DeactvAeCoast_ModeHTDRState = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S307>/Switch1' incorporates:
         *  Constant: '<S307>/Constant Value4'
         *  Switch: '<S307>/Switch2'
         *  Switch: '<S307>/Switch3'
         */
        VeRGNC_b_DeactvAeCoast_ModeHTDRState = 0.0F;
    }

    /* End of Switch: '<S307>/Switch1' */
    /* End of Outputs for SubSystem: '<S236>/Protected Division' */
    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB3' */

    /* Inport: '<Root>/VeCTCR_b_MinCreep_Enable' */
    (void)Rte_Read_VeCTCR_b_MinCreep_Enable_Value(&rtb_OR1);

    /* Inport: '<Root>/VeHTDR_M_MinOptTo' */
    (void)Rte_Read_VeHTDR_M_MinOptTo_Value(&rtb_MinMax1);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB3' incorporates:
     *  SubSystem: '<Root>/RGNR_MedTEB3'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/MainRgnCapCntrl'
     */
    /* Logic: '<S209>/Logical Operator3' incorporates:
     *  Constant: '<S234>/Calib'
     *  Logic: '<S209>/Logical Operator1'
     */
    VeRGNC_b_DeactvAeCoast_DsblRet2Idle = ((KeRGNR_b_DsblRet2IdleCheck) ||
        (!rtb_OR1));

    /* Switch: '<S236>/Switch' incorporates:
     *  Constant: '<S236>/Zero1'
     *  RelationalOperator: '<S236>/Relational Operator'
     */
    if (RGNR_ac_DW.UnitDelay_DSTATE >= 1.0F)
    {
        /* VariantMerge generated from: '<S208>/VariantSource1' */
        rtb_VariantMerge_For_Variant_Source_V_cp = RGNR_ac_DW.UnitDelay_DSTATE;
    }
    else
    {
        /* VariantMerge generated from: '<S208>/VariantSource1' */
        rtb_VariantMerge_For_Variant_Source_V_cp = 1.0F;
    }

    /* End of Switch: '<S236>/Switch' */

    /* Sum: '<S236>/Subtraction2' incorporates:
     *  Constant: '<S236>/Zero1'
     *  UnitDelay: '<S236>/Unit Delay'
     */
    RGNR_ac_DW.UnitDelay_DSTATE = rtb_VariantMerge_For_Variant_Source_V_cp -
        1.0F;

    /* MinMax: '<S350>/MinMax1' incorporates:
     *  Constant: '<S350>/Constant Value3'
     */
    rtb_MinMax1 = fminf(0.0F, rtb_MinMax1);

    /* MinMax: '<S350>/MinMax3' incorporates:
     *  Constant: '<S355>/Calib'
     */
    rtb_TmpSignalConversionAtVeINVR_T_MtrB_T = fmaxf(rtb_MinMax1,
        KeRGNR_M_MinRgnTrqDrngSS);

    /* Outputs for Atomic SubSystem: '<S359>/EdgeRising' */
    /* Logic: '<S376>/OR1' incorporates:
     *  UnitDelay: '<S376>/Unit Delay'
     */
    rtb_OR1_ky = !RGNR_ac_DW.UnitDelay_DSTATE_f5;

    /* Update for UnitDelay: '<S376>/Unit Delay' */
    RGNR_ac_DW.UnitDelay_DSTATE_f5 = rtb_TmpSignalConversionAtVeSTRR_b_EngOnR;

    /* End of Outputs for SubSystem: '<S359>/EdgeRising' */

    /* Outputs for IfAction SubSystem: '<S357>/Blend' incorporates:
     *  ActionPort: '<S360>/Action Port'
     */
    /* Outputs for Atomic SubSystem: '<S359>/EdgeFalling' */
    /* If: '<S357>/If' incorporates:
     *  Logic: '<S360>/Logical4'
     *  Logic: '<S375>/OR1'
     */
    tmpRead_0 = !rtb_TmpSignalConversionAtVeSTRR_b_EngOnR;

    /* End of Outputs for SubSystem: '<S357>/Blend' */

    /* Logic: '<S375>/AND' incorporates:
     *  Logic: '<S375>/OR1'
     *  UnitDelay: '<S375>/Unit Delay'
     */
    rtb_AND_j5 = (tmpRead_0 && (RGNR_ac_DW.UnitDelay_DSTATE_ev));

    /* Update for UnitDelay: '<S375>/Unit Delay' */
    RGNR_ac_DW.UnitDelay_DSTATE_ev = rtb_TmpSignalConversionAtVeSTRR_b_EngOnR;

    /* End of Outputs for SubSystem: '<S359>/EdgeFalling' */

    /* Logic: '<S359>/OR1' incorporates:
     *  Constant: '<S359>/Constant Value10'
     *  Constant: '<S359>/Constant Value11'
     *  RelationalOperator: '<S359>/Comparison7'
     *  RelationalOperator: '<S359>/Comparison8'
     */
    rtb_OR1 = ((0.0F != VeRGNC_r_RegenCapacity_BlendRatio) &&
               (VeRGNC_r_RegenCapacity_BlendRatio != 1.0F));

    /* Outputs for Atomic SubSystem: '<S359>/EdgeRising' */
    /* If: '<S359>/If2' incorporates:
     *  Logic: '<S376>/AND'
     */
    if (rtb_TmpSignalConversionAtVeSTRR_b_EngOnR && rtb_OR1_ky)
    {
        /* Outputs for IfAction SubSystem: '<S359>/InitRampUp' incorporates:
         *  ActionPort: '<S380>/Action Port'
         */
        /* SignalConversion generated from: '<S380>/Out1' incorporates:
         *  Constant: '<S385>/Calib'
         *  UnitDelay: '<S359>/Unit Delay2'
         */
        RGNR_ac_DW.UnitDelay2_DSTATE = KeRGNR_r_OptAndZroBlndRateSU;

        /* End of Outputs for SubSystem: '<S359>/InitRampUp' */
    }
    else if (rtb_AND_j5)
    {
        /* Outputs for IfAction SubSystem: '<S359>/InitRampDown' incorporates:
         *  ActionPort: '<S379>/Action Port'
         */
        /* Gain: '<S379>/Gain' incorporates:
         *  Constant: '<S383>/Calib'
         *  UnitDelay: '<S359>/Unit Delay2'
         */
        RGNR_ac_DW.UnitDelay2_DSTATE = -KeRGNR_r_OptAndZroBlndRateSD;

        /* End of Outputs for SubSystem: '<S359>/InitRampDown' */
    }
    else
    {
        if (!rtb_OR1)
        {
            /* Outputs for IfAction SubSystem: '<S359>/Hold' incorporates:
             *  ActionPort: '<S378>/Action Port'
             */
            /* SignalConversion generated from: '<S378>/Rate' incorporates:
             *  Constant: '<S378>/Constant Value3'
             *  UnitDelay: '<S359>/Unit Delay2'
             */
            RGNR_ac_DW.UnitDelay2_DSTATE = 0.0F;

            /* End of Outputs for SubSystem: '<S359>/Hold' */
        }
    }

    /* End of If: '<S359>/If2' */
    /* End of Outputs for SubSystem: '<S359>/EdgeRising' */

    /* Sum: '<S359>/Sum5' incorporates:
     *  Constant: '<S377>/Calib'
     *  Product: '<S359>/Product5'
     *  UnitDelay: '<S359>/Unit Delay2'
     */
    rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = (HeRGNR_t_DT *
        RGNR_ac_DW.UnitDelay2_DSTATE) + VeRGNC_r_RegenCapacity_BlendRatio;

    /* Outputs for Atomic SubSystem: '<S359>/Limiter1' */
    /* Switch: '<S381>/Switch1' incorporates:
     *  Constant: '<S359>/Constant Value14'
     *  RelationalOperator: '<S381>/Relational Operator'
     */
    if (1.0F < rtb_TmpSignalConversionAtVeINVR_T_MtrA_T)
    {
        /* Switch: '<S790>/Switch1' */
        rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = 1.0F;
    }

    /* End of Switch: '<S381>/Switch1' */

    /* Switch: '<S381>/Switch' incorporates:
     *  Constant: '<S359>/Constant Value15'
     *  RelationalOperator: '<S381>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtVeINVR_T_MtrA_T > 0.0F)
    {
        /* Switch: '<S381>/Switch' */
        VeRGNC_r_RegenCapacity_BlendRatio =
            rtb_TmpSignalConversionAtVeINVR_T_MtrA_T;
    }
    else
    {
        /* Switch: '<S381>/Switch' */
        VeRGNC_r_RegenCapacity_BlendRatio = 0.0F;
    }

    /* End of Switch: '<S381>/Switch' */
    /* End of Outputs for SubSystem: '<S359>/Limiter1' */

    /* If: '<S357>/If' incorporates:
     *  Constant: '<S357>/Constant Value1'
     *  Constant: '<S357>/Constant Value2'
     *  Constant: '<S360>/Constant Value1'
     *  RelationalOperator: '<S357>/Comparison1'
     *  RelationalOperator: '<S357>/Comparison2'
     *  RelationalOperator: '<S360>/Comparison'
     *  Switch: '<S360>/Switch4'
     */
    if (1.0F == VeRGNC_r_RegenCapacity_BlendRatio)
    {
        /* Outputs for IfAction SubSystem: '<S357>/Pass' incorporates:
         *  ActionPort: '<S361>/Action Port'
         */
        RGNR_ac_Pass(rtb_MinMax1, &rtb_VariantMerge_For_Variant_Source_V_cp);

        /* End of Outputs for SubSystem: '<S357>/Pass' */
    }
    else if (VeRGNC_r_RegenCapacity_BlendRatio == 0.0F)
    {
        /* Outputs for IfAction SubSystem: '<S357>/Pass1' incorporates:
         *  ActionPort: '<S362>/Action Port'
         */
        RGNR_ac_Pass(rtb_TmpSignalConversionAtVeINVR_T_MtrB_T,
                     &rtb_VariantMerge_For_Variant_Source_V_cp);

        /* End of Outputs for SubSystem: '<S357>/Pass1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S357>/Blend' incorporates:
         *  ActionPort: '<S360>/Action Port'
         */
        if (VeRGNC_r_RegenCapacity_BlendRatio > 0.5F)
        {
            /* Switch: '<S360>/Switch4' incorporates:
             *  Constant: '<S360>/Constant Value13'
             *  Sum: '<S360>/Sum6'
             */
            rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = 1.0F -
                VeRGNC_r_RegenCapacity_BlendRatio;
        }
        else
        {
            /* Switch: '<S360>/Switch4' */
            rtb_TmpSignalConversionAtVeINVR_T_MtrA_T =
                VeRGNC_r_RegenCapacity_BlendRatio;
        }

        /* Switch: '<S360>/Switch5' incorporates:
         *  Constant: '<S363>/Calib'
         *  Constant: '<S364>/Calib'
         */
        if (rtb_TmpSignalConversionAtVeSTRR_b_EngOnR)
        {
            rtb_TmpSignalConversionAtVeINVR_T_MtrA_I =
                KeRGNR_M_RegenCapacity_StrtHat;
        }
        else
        {
            rtb_TmpSignalConversionAtVeINVR_T_MtrA_I =
                KeRGNR_M_RegenCapacity_StpHat;
        }

        /* End of Switch: '<S360>/Switch5' */

        /* MinMax: '<S360>/MinMax' incorporates:
         *  Constant: '<S367>/Calib'
         *  Product: '<S360>/Product'
         */
        VeRGNR_M_RegenCapacity_StrtStpHat = fminf
            (rtb_TmpSignalConversionAtVeINVR_T_MtrA_T
             * KeRGNR_dM_RegenCapacity_StrtStp_RampRt,
             rtb_TmpSignalConversionAtVeINVR_T_MtrA_I);

        /* Switch: '<S360>/Switch1' incorporates:
         *  RelationalOperator: '<S360>/Comparison5'
         *  UnitDelay: '<S357>/Unit Delay1'
         *  UnitDelay: '<S360>/Unit Delay'
         *  UnitDelay: '<S360>/Unit Delay1'
         */
        if (RGNR_ac_DW.UnitDelay1_DSTATE_a != RGNR_ac_DW.UnitDelay_DSTATE_hl)
        {
            RGNR_ac_DW.UnitDelay1_DSTATE_e = rtb_MinMax1;
        }

        /* End of Switch: '<S360>/Switch1' */

        /* Switch: '<S360>/Switch3' incorporates:
         *  Constant: '<S365>/Calib'
         *  Constant: '<S366>/Calib'
         *  Logic: '<S360>/Logical1'
         *  Logic: '<S360>/Logical2'
         *  Logic: '<S360>/Logical3'
         */
        if (((KeRGNR_b_RegenCapacity_StrtHat_Dsbl) &&
                rtb_TmpSignalConversionAtVeSTRR_b_EngOnR) || (tmpRead_0 &&
                (KeRGNR_b_RegenCapacity_StpHat_Dsbl)))
        {
            /* VariantMerge generated from: '<S208>/VariantSource1' incorporates:
             *  Constant: '<S360>/Constant Value13'
             *  Gain: '<S369>/Gain'
             *  Product: '<S360>/Product6'
             *  Product: '<S360>/Product7'
             *  Sum: '<S360>/Sum6'
             *  Sum: '<S360>/Sum7'
             */
            rtb_VariantMerge_For_Variant_Source_V_cp = ((1.0F -
                VeRGNC_r_RegenCapacity_BlendRatio) *
                rtb_TmpSignalConversionAtVeINVR_T_MtrB_T)
                + (VeRGNC_r_RegenCapacity_BlendRatio * rtb_MinMax1);
        }
        else
        {
            /* VariantMerge generated from: '<S208>/VariantSource1' incorporates:
             *  Constant: '<S360>/Constant Value13'
             *  Gain: '<S369>/Gain'
             *  MinMax: '<S360>/MinMax1'
             *  Product: '<S360>/Product6'
             *  Product: '<S360>/Product7'
             *  Sum: '<S360>/Sum1'
             *  Sum: '<S360>/Sum6'
             *  Sum: '<S360>/Sum7'
             *  UnitDelay: '<S360>/Unit Delay1'
             */
            rtb_VariantMerge_For_Variant_Source_V_cp = fmaxf(((1.0F -
                VeRGNC_r_RegenCapacity_BlendRatio) *
                rtb_TmpSignalConversionAtVeINVR_T_MtrB_T)
                + (VeRGNC_r_RegenCapacity_BlendRatio * rtb_MinMax1),
                RGNR_ac_DW.UnitDelay1_DSTATE_e +
                VeRGNR_M_RegenCapacity_StrtStpHat);
        }

        /* End of Switch: '<S360>/Switch3' */

        /* Update for UnitDelay: '<S360>/Unit Delay' incorporates:
         *  UnitDelay: '<S357>/Unit Delay1'
         */
        RGNR_ac_DW.UnitDelay_DSTATE_hl = RGNR_ac_DW.UnitDelay1_DSTATE_a;

        /* End of Outputs for SubSystem: '<S357>/Blend' */
    }

    /* Switch: '<S358>/Switch1' incorporates:
     *  Constant: '<S374>/Calib'
     */
    if (KeRGNR_b_EnblOptToRmpOutSS)
    {
        rtb_MinMax1 = rtb_VariantMerge_For_Variant_Source_V_cp;
    }

    /* End of Switch: '<S358>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S351>/GradientLimiter1' */
    /* Sum: '<S389>/Sum2' incorporates:
     *  UnitDelay: '<S389>/Unit Delay'
     */
    rtb_MinMax1 -= VeRGNR_M_OptToRtLim;

    /* Outputs for Atomic SubSystem: '<S389>/Limiter' */
    /* Switch: '<S395>/Switch1' incorporates:
     *  Constant: '<S391>/Calib'
     *  RelationalOperator: '<S395>/Relational Operator'
     */
    if (KeRGNR_dM_RegenOutTorqCapLU < rtb_MinMax1)
    {
        /* VariantMerge generated from: '<S342>/VariantSource' */
        rtb_MinMax1 = KeRGNR_dM_RegenOutTorqCapLU;
    }

    /* End of Switch: '<S395>/Switch1' */

    /* Switch: '<S395>/Switch' incorporates:
     *  Constant: '<S390>/Calib'
     *  RelationalOperator: '<S395>/Relational Operator1'
     */
    if (rtb_MinMax1 <= KeRGNR_dM_RegenOutTorqCapLD)
    {
        rtb_MinMax1 = KeRGNR_dM_RegenOutTorqCapLD;
    }

    /* End of Switch: '<S395>/Switch' */
    /* End of Outputs for SubSystem: '<S389>/Limiter' */

    /* Sum: '<S389>/Sum3' incorporates:
     *  UnitDelay: '<S389>/Unit Delay'
     */
    VeRGNR_M_OptToRtLim = rtb_MinMax1 + VeRGNR_M_OptToRtLim;

    /* End of Outputs for SubSystem: '<S351>/GradientLimiter1' */

    /* Switch: '<S351>/Switch' incorporates:
     *  Constant: '<S387>/Constant'
     *  Constant: '<S392>/Calib'
     *  Constant: '<S393>/Calib'
     *  RelationalOperator: '<S351>/Equal'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeHSER_e_HTDR_S) == CeHSER_e_M1_State)
    {
        rtb_MinMax1 = KeRGNR_k_OptToRtLimFltCoefModeOne;
    }
    else
    {
        rtb_MinMax1 = KeRGNR_k_OptToRtLimFltCoef;
    }

    /* End of Switch: '<S351>/Switch' */

    /* Outputs for Atomic SubSystem: '<S351>/Digital Lowpass Reset Enabled' */
    /* Switch: '<S388>/Switch1' incorporates:
     *  Product: '<S388>/Multiplication'
     *  Sum: '<S388>/Subtraction'
     *  Sum: '<S388>/Summation'
     *  UnitDelay: '<S388>/Unit Delay'
     */
    VeRGNR_M_OptToRtLimFlt = ((VeRGNR_M_OptToRtLim - VeRGNR_M_OptToRtLimFlt) *
        rtb_MinMax1) + VeRGNR_M_OptToRtLimFlt;

    /* End of Outputs for SubSystem: '<S351>/Digital Lowpass Reset Enabled' */

    /* RelationalOperator: '<S353>/Equal' incorporates:
     *  Constant: '<S406>/Constant'
     *  Constant: '<S411>/Calib'
     *  Constant: '<S412>/Calib'
     *  Inport: '<Root>/VeHTDR_M_MinOptTo_Lin'
     *  MinMax: '<S353>/MinMax1'
     *  SignalConversion generated from: '<S344>/VariantSource'
     *  Switch: '<S353>/Switch'
     * */
#if Rte_SysCon_Variant_RGNR_1

    /* Outputs for Atomic SubSystem: '<S353>/Digital Lowpass Reset Enabled' */
    /* Outputs for Atomic SubSystem: '<S353>/GradientLimiter1' */
    (void)Rte_Read_VeHTDR_M_MinOptTo_Lin_Value(&tmpRead_f);

    /* Sum: '<S408>/Sum2' incorporates:
     *  Constant: '<S353>/Constant Value3'
     *  Inport: '<Root>/VeHTDR_M_MinOptTo_Lin'
     *  UnitDelay: '<S408>/Unit Delay'
     */
    rtb_MinMax1 = fminf(0.0F, tmpRead_f) - VeRGNR_M_OptToRtLim_Lin;

    /* Outputs for Atomic SubSystem: '<S408>/Limiter' */
    /* Switch: '<S413>/Switch1' incorporates:
     *  Constant: '<S410>/Calib'
     *  RelationalOperator: '<S413>/Relational Operator'
     */
    if (KeRGNR_dM_RegenOutTorqCapLU < rtb_MinMax1)
    {
        /* VariantMerge generated from: '<S342>/VariantSource' */
        rtb_MinMax1 = KeRGNR_dM_RegenOutTorqCapLU;
    }

    /* End of Switch: '<S413>/Switch1' */

    /* Switch: '<S413>/Switch' incorporates:
     *  Constant: '<S409>/Calib'
     *  RelationalOperator: '<S413>/Relational Operator1'
     */
    if (rtb_MinMax1 <= KeRGNR_dM_RegenOutTorqCapLD)
    {
        rtb_MinMax1 = KeRGNR_dM_RegenOutTorqCapLD;
    }

    /* End of Switch: '<S413>/Switch' */
    /* End of Outputs for SubSystem: '<S408>/Limiter' */

    /* Sum: '<S408>/Sum3' incorporates:
     *  UnitDelay: '<S408>/Unit Delay'
     */
    VeRGNR_M_OptToRtLim_Lin = rtb_MinMax1 + VeRGNR_M_OptToRtLim_Lin;
    if (((uint32)rtb_TmpSignalConversionAtVeHSER_e_HTDR_S) == CeHSER_e_M1_State)
    {
        rtb_MinMax1 = KeRGNR_k_OptToRtLimFltCoefModeOne;
    }
    else
    {
        rtb_MinMax1 = KeRGNR_k_OptToRtLimFltCoef;
    }

    /* Switch: '<S407>/Switch1' incorporates:
     *  Constant: '<S406>/Constant'
     *  Constant: '<S411>/Calib'
     *  Constant: '<S412>/Calib'
     *  Product: '<S407>/Multiplication'
     *  Sum: '<S407>/Subtraction'
     *  Sum: '<S407>/Summation'
     *  UnitDelay: '<S407>/Unit Delay'
     */
    RGNR_ac_DW.UnitDelay_DSTATE_ir += (VeRGNR_M_OptToRtLim_Lin -
        RGNR_ac_DW.UnitDelay_DSTATE_ir) * rtb_MinMax1;

    /* VariantMerge generated from: '<S208>/VariantSource1' incorporates:
     *  UnitDelay: '<S407>/Unit Delay'
     */
    rtb_VariantMerge_For_Variant_Source_V_cp = RGNR_ac_DW.UnitDelay_DSTATE_ir;

    /* End of Outputs for SubSystem: '<S353>/GradientLimiter1' */
    /* End of Outputs for SubSystem: '<S353>/Digital Lowpass Reset Enabled' */
#else

    /* VariantMerge generated from: '<S208>/VariantSource1' incorporates:
     *  Constant: '<S354>/Constant Value8'
     *  SignalConversion generated from: '<S344>/VariantSource'
     */
    rtb_VariantMerge_For_Variant_Source_V_cp = 0.0F;

#endif

    /* End of RelationalOperator: '<S353>/Equal' */
    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB3' */

    /* Inport: '<Root>/VeHTDR_M_MinOptToRr' */
    (void)Rte_Read_VeHTDR_M_MinOptToRr_Value(&tmpRead_a);

    /* Inport: '<Root>/VeHTDR_M_MinOptToFrnt' */
    (void)Rte_Read_VeHTDR_M_MinOptToFrnt_Value(&tmpRead_9);

    /* Inport: '<Root>/VeAPSR_Pct_AccelPedalEffPosition' */
    (void)Rte_Read_VeAPSR_Pct_AccelPedalEffPosition_Value(&tmpRead_2);

    /* Inport: '<Root>/VePLTR_b_CrsCntrlActv' */
    (void)Rte_Read_VePLTR_b_CrsCntrlActv_Value(&rtb_OR1_lo);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB3' incorporates:
     *  SubSystem: '<Root>/RGNR_MedTEB3'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/MainRgnCapCntrl'
     */
    /* Outputs for Atomic SubSystem: '<S352>/GradientLimiter1' */
    /* Sum: '<S398>/Sum2' incorporates:
     *  UnitDelay: '<S398>/Unit Delay'
     */
    rtb_MinMax1 = tmpRead_9 - VeRGNR_M_OptToRtLim_Frnt;

    /* Outputs for Atomic SubSystem: '<S398>/Limiter' */
    /* Switch: '<S404>/Switch1' incorporates:
     *  Constant: '<S401>/Calib'
     *  RelationalOperator: '<S404>/Relational Operator'
     */
    if (KeRGNR_dM_RegenOutTorqCapLU < rtb_MinMax1)
    {
        /* VariantMerge generated from: '<S342>/VariantSource' */
        rtb_MinMax1 = KeRGNR_dM_RegenOutTorqCapLU;
    }

    /* End of Switch: '<S404>/Switch1' */

    /* Switch: '<S404>/Switch' incorporates:
     *  Constant: '<S400>/Calib'
     *  RelationalOperator: '<S404>/Relational Operator1'
     */
    if (rtb_MinMax1 <= KeRGNR_dM_RegenOutTorqCapLD)
    {
        rtb_MinMax1 = KeRGNR_dM_RegenOutTorqCapLD;
    }

    /* End of Switch: '<S404>/Switch' */
    /* End of Outputs for SubSystem: '<S398>/Limiter' */

    /* Sum: '<S398>/Sum3' incorporates:
     *  UnitDelay: '<S398>/Unit Delay'
     */
    VeRGNR_M_OptToRtLim_Frnt = rtb_MinMax1 + VeRGNR_M_OptToRtLim_Frnt;

    /* End of Outputs for SubSystem: '<S352>/GradientLimiter1' */

    /* Outputs for Atomic SubSystem: '<S352>/Digital Lowpass Reset Enabled' */
    /* Switch: '<S396>/Switch1' incorporates:
     *  Constant: '<S402>/Calib'
     *  Product: '<S396>/Multiplication'
     *  Sum: '<S396>/Subtraction'
     *  Sum: '<S396>/Summation'
     *  UnitDelay: '<S396>/Unit Delay'
     */
    VeRGNR_M_OptToRtLimFlt_Frnt = ((VeRGNR_M_OptToRtLim_Frnt -
        VeRGNR_M_OptToRtLimFlt_Frnt) * KeRGNR_k_OptToRtLimFltCoef_FrntRear) +
        VeRGNR_M_OptToRtLimFlt_Frnt;

    /* End of Outputs for SubSystem: '<S352>/Digital Lowpass Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S352>/GradientLimiter2' */
    /* Sum: '<S399>/Sum2' incorporates:
     *  UnitDelay: '<S399>/Unit Delay'
     */
    rtb_MinMax1 = tmpRead_a - VeRGNR_M_OptToRtLim_Rear;

    /* Outputs for Atomic SubSystem: '<S399>/Limiter' */
    /* Switch: '<S405>/Switch1' incorporates:
     *  Constant: '<S401>/Calib'
     *  RelationalOperator: '<S405>/Relational Operator'
     */
    if (KeRGNR_dM_RegenOutTorqCapLU < rtb_MinMax1)
    {
        /* VariantMerge generated from: '<S342>/VariantSource' */
        rtb_MinMax1 = KeRGNR_dM_RegenOutTorqCapLU;
    }

    /* End of Switch: '<S405>/Switch1' */

    /* Switch: '<S405>/Switch' incorporates:
     *  Constant: '<S400>/Calib'
     *  RelationalOperator: '<S405>/Relational Operator1'
     */
    if (rtb_MinMax1 <= KeRGNR_dM_RegenOutTorqCapLD)
    {
        rtb_MinMax1 = KeRGNR_dM_RegenOutTorqCapLD;
    }

    /* End of Switch: '<S405>/Switch' */
    /* End of Outputs for SubSystem: '<S399>/Limiter' */

    /* Sum: '<S399>/Sum3' incorporates:
     *  UnitDelay: '<S399>/Unit Delay'
     */
    VeRGNR_M_OptToRtLim_Rear = rtb_MinMax1 + VeRGNR_M_OptToRtLim_Rear;

    /* End of Outputs for SubSystem: '<S352>/GradientLimiter2' */

    /* Outputs for Atomic SubSystem: '<S352>/Digital Lowpass Reset Enabled1' */
    /* Switch: '<S397>/Switch1' incorporates:
     *  Constant: '<S402>/Calib'
     *  Product: '<S397>/Multiplication'
     *  Sum: '<S397>/Subtraction'
     *  Sum: '<S397>/Summation'
     *  UnitDelay: '<S397>/Unit Delay'
     */
    VeRGNR_M_OptToRtLimFlt_Rear = ((VeRGNR_M_OptToRtLim_Rear -
        VeRGNR_M_OptToRtLimFlt_Rear) * KeRGNR_k_OptToRtLimFltCoef_FrntRear) +
        VeRGNR_M_OptToRtLimFlt_Rear;

    /* End of Outputs for SubSystem: '<S352>/Digital Lowpass Reset Enabled1' */

    /* Outputs for Atomic SubSystem: '<S338>/RgnAvailTo' */
    /* Outputs for Atomic SubSystem: '<S346>/GradientLimiter2' */
    /* Sum: '<S417>/Sum2' incorporates:
     *  UnitDelay: '<S417>/Unit Delay'
     */
    rtb_MinMax1 = tmpRead_2 - VeRGNR_Pct_AccActPosRtLim;

    /* Outputs for Atomic SubSystem: '<S417>/Limiter' */
    /* Switch: '<S453>/Switch1' incorporates:
     *  Constant: '<S427>/Calib'
     *  RelationalOperator: '<S453>/Relational Operator'
     */
    if (KeRGNR_Pct_AccelPosLU < rtb_MinMax1)
    {
        /* VariantMerge generated from: '<S342>/VariantSource' */
        rtb_MinMax1 = KeRGNR_Pct_AccelPosLU;
    }

    /* End of Switch: '<S453>/Switch1' */

    /* Switch: '<S453>/Switch' incorporates:
     *  Constant: '<S426>/Calib'
     *  RelationalOperator: '<S453>/Relational Operator1'
     */
    if (rtb_MinMax1 <= KeRGNR_Pct_AccelPosLD)
    {
        rtb_MinMax1 = KeRGNR_Pct_AccelPosLD;
    }

    /* End of Switch: '<S453>/Switch' */
    /* End of Outputs for SubSystem: '<S417>/Limiter' */

    /* Sum: '<S417>/Sum3' incorporates:
     *  UnitDelay: '<S417>/Unit Delay'
     */
    VeRGNR_Pct_AccActPosRtLim = rtb_MinMax1 + VeRGNR_Pct_AccActPosRtLim;

    /* End of Outputs for SubSystem: '<S346>/GradientLimiter2' */

    /* RelationalOperator: '<S346>/ 1' incorporates:
     *  Constant: '<S421>/Calib'
     */
    VeRGNC_b_AccelPedalMet = (VeRGNR_Pct_AccActPosRtLim <
        KeRGNC_Pct_ThreshForRgnDeact);

    /* Switch: '<S346>/Switch3' incorporates:
     *  Constant: '<S346>/Constant Value3'
     *  RelationalOperator: '<S346>/Equal1'
     */
    if (rtb_OR1_lo)
    {
        rtb_MinMax1 = rtb_TmpSignalConversionAtVeATRR_M_OutTrq;
    }
    else
    {
        rtb_MinMax1 = -1.0F;
    }

    /* End of Switch: '<S346>/Switch3' */

    /* Outputs for Atomic SubSystem: '<S346>/GradientLimiter1' */
    /* Sum: '<S416>/Sum2' incorporates:
     *  UnitDelay: '<S416>/Unit Delay'
     */
    rtb_MinMax1 -= VeRGNR_M_CrsToRtLim;

    /* Outputs for Atomic SubSystem: '<S416>/Limiter' */
    /* Switch: '<S452>/Switch1' incorporates:
     *  Constant: '<S425>/Calib'
     *  RelationalOperator: '<S452>/Relational Operator'
     */
    if (KeRGNR_M_CrsToLU < rtb_MinMax1)
    {
        /* VariantMerge generated from: '<S342>/VariantSource' */
        rtb_MinMax1 = KeRGNR_M_CrsToLU;
    }

    /* End of Switch: '<S452>/Switch1' */

    /* Switch: '<S452>/Switch' incorporates:
     *  Constant: '<S424>/Calib'
     *  RelationalOperator: '<S452>/Relational Operator1'
     */
    if (rtb_MinMax1 <= KeRGNR_M_CrsToLD)
    {
        rtb_MinMax1 = KeRGNR_M_CrsToLD;
    }

    /* End of Switch: '<S452>/Switch' */
    /* End of Outputs for SubSystem: '<S416>/Limiter' */

    /* Sum: '<S416>/Sum3' incorporates:
     *  UnitDelay: '<S416>/Unit Delay'
     */
    VeRGNR_M_CrsToRtLim = rtb_MinMax1 + VeRGNR_M_CrsToRtLim;

    /* End of Outputs for SubSystem: '<S346>/GradientLimiter1' */

    /* RelationalOperator: '<S346>/ 2' incorporates:
     *  Constant: '<S419>/Calib'
     */
    VeRGNC_b_CrsCntrlActvMet = (VeRGNR_M_CrsToRtLim <
        KeRGNC_M_CrsToThrshForRgnDeact);

    /* Switch: '<S346>/Switch8' incorporates:
     *  Constant: '<S428>/Calib'
     *  Constant: '<S429>/Calib'
     */
    if (KeRGNR_b_OvrdTCMTransTrqRatio)
    {
        rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = KeRGNR_r_TCMTransTrqRatio;
    }
    else
    {
        rtb_TmpSignalConversionAtVeINVR_T_MtrA_T =
            rtb_TmpSignalConversionAtVeTINR_r_TCMTra;
    }

    /* End of Switch: '<S346>/Switch8' */

    /* Product: '<S346>/mult.1' */
    rtb_MinMax1 = rtb_TmpSignalConversionAtVeINVR_T_MtrA_T
        * rtb_TmpSignalConversionAtVeATRR_M_OutTrq;

    /* Outputs for Atomic SubSystem: '<S346>/Hysteresis' */
    /* Switch: '<S418>/Switch1' incorporates:
     *  Constant: '<S418>/Constant Value'
     *  Constant: '<S420>/Calib'
     *  Inport: '<Root>/VeCSVR_n_TransOutSpdSgndFltrd'
     *  Lookup_n-D: '<S430>/Vector'
     *  RelationalOperator: '<S418>/Greater  Than'
     *  RelationalOperator: '<S418>/Greater  Than1'
     *  UnitDelay: '<S418>/Unit Delay'
     */
    if (rtb_MinMax1 > KeRGNC_M_ToTolForRgnActv_RSP)
    {
        RGNR_ac_DW.UnitDelay_DSTATE_pl = true;
    }
    else
    {
        (void)Rte_Read_VeCSVR_n_TransOutSpdSgndFltrd_Value(&rtb_Switch6_idx_1);
        RGNR_ac_DW.UnitDelay_DSTATE_pl = ((rtb_MinMax1 >= look1_iflf_binlca_16a
            (rtb_Switch6_idx_1, ((const float32 *)
            &(KxRGNC_M_ToTolForRgnDsbl_LSP[0])), ((const float32 *)
            &(KtRGNC_M_ToTolForRgnDsbl_LSP[0])), 13U)) &&
            (RGNR_ac_DW.UnitDelay_DSTATE_pl));
    }

    /* End of Switch: '<S418>/Switch1' */
    /* End of Outputs for SubSystem: '<S346>/Hysteresis' */
    /* End of Outputs for SubSystem: '<S338>/RgnAvailTo' */
    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB3' */

    /* Inport: '<Root>/VeOITR_M_OutTorqReqModTactMin' */
    (void)Rte_Read_VeOITR_M_OutTorqReqModTactMin_Value(&rtb_MinMax_m);

    /* Inport: '<Root>/VeATRR_M_MinPedal_Tact' */
    (void)Rte_Read_VeATRR_M_MinPedal_Tact_Value(&tmpRead_6);

    /* Inport: '<Root>/VeHTDR_M_OutTorqMinHH' */
    (void)Rte_Read_VeHTDR_M_OutTorqMinHH_Value(&rtb_MinMax4);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB3' incorporates:
     *  SubSystem: '<Root>/RGNR_MedTEB3'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/MainRgnCapCntrl'
     */
    /* Outputs for Atomic SubSystem: '<S338>/RgnAvailTo' */
    /* Logic: '<S346>/Logical2' incorporates:
     *  UnitDelay: '<S418>/Unit Delay'
     */
    VeRGNC_b_AccelToMet = !RGNR_ac_DW.UnitDelay_DSTATE_pl;

    /* Logic: '<S346>/AND1' incorporates:
     *  Switch: '<S346>/Switch5'
     */
    VeRGNC_b_RegenAvailDtrmn = (((VeRGNC_b_AccelToMet) &&
        (rtb_TmpSignalConversionAtVeAECR_b_AeCoas || (VeRGNC_b_AccelPedalMet))) &&
        (VeRGNC_b_CrsCntrlActvMet));

    /* Sum: '<S346>/Subtraction3' incorporates:
     *  Constant: '<S423>/Calib'
     *  Sum: '<S347>/Subtraction3'
     */
    tmpRead_f = KeRGNC_dM_ToAP_RespHdRm +
        rtb_TmpSignalConversionAtVeATRR_M_OutTrq;

    /* Sum: '<S346>/Subtraction4' incorporates:
     *  MinMax: '<S346>/MinMax2'
     *  Sum: '<S346>/Subtraction3'
     */
    VeRGNC_M_RegenCapRawWithoutLim = fmaxf(VeRGNR_M_OptToRtLimFlt,
        rtb_TmpSignalConversionAtVeATRR_M_MinTra) - tmpRead_f;

    /* MinMax: '<S346>/MinMax3' incorporates:
     *  Constant: '<S346>/Constant Value8'
     */
    VeRGNC_M_RegenCapLim = fminf(0.0F, VeRGNC_M_RegenCapRawWithoutLim);

    /* Switch: '<S346>/Switch1' incorporates:
     *  Constant: '<S346>/Constant Value4'
     *  Logic: '<S346>/Logical3'
     */
    if ((VeRGNC_b_RegenAvailDtrmn) || rtb_TmpSignalConversionAtVePDTR_b_EburnE)
    {
        rtb_TmpSignalConversionAtVeINVR_T_MtrA_T =
            VeRGNC_M_RegenCapRawWithoutLim;
    }
    else
    {
        rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = 0.0F;
    }

    /* End of Switch: '<S346>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S346>/RgnGrdFilter' */
    /* Outputs for Atomic SubSystem: '<S432>/GradientLimiter' */
    /* Sum: '<S454>/Sum2' incorporates:
     *  UnitDelay: '<S454>/Unit Delay'
     */
    rtb_Switch6_idx_1 = rtb_TmpSignalConversionAtVeINVR_T_MtrA_T
        - RGNR_ac_DW.UnitDelay_DSTATE_od;

    /* Outputs for Atomic SubSystem: '<S454>/Limiter' */
    /* Switch: '<S461>/Switch1' incorporates:
     *  Constant: '<S457>/Calib'
     *  RelationalOperator: '<S461>/Relational Operator'
     */
    if (KeRGNR_dM_RgnRmpUpAftrPdlRls < rtb_Switch6_idx_1)
    {
        /* Switch: '<S217>/Switch3' */
        rtb_Switch6_idx_1 = KeRGNR_dM_RgnRmpUpAftrPdlRls;
    }

    /* End of Switch: '<S461>/Switch1' */

    /* Switch: '<S461>/Switch' incorporates:
     *  Constant: '<S456>/Calib'
     *  RelationalOperator: '<S461>/Relational Operator1'
     */
    if (rtb_Switch6_idx_1 <= KeRGNR_dM_RgnRmpDnAftrPdlRls)
    {
        rtb_Switch6_idx_1 = KeRGNR_dM_RgnRmpDnAftrPdlRls;
    }

    /* End of Switch: '<S461>/Switch' */
    /* End of Outputs for SubSystem: '<S454>/Limiter' */

    /* Sum: '<S454>/Sum3' incorporates:
     *  UnitDelay: '<S454>/Unit Delay'
     */
    rtb_MinMax1 = rtb_Switch6_idx_1 + RGNR_ac_DW.UnitDelay_DSTATE_od;

    /* Outputs for Atomic SubSystem: '<S454>/Limiter1' */
    /* Switch: '<S462>/Switch1' incorporates:
     *  Constant: '<S432>/Constant Value1'
     *  RelationalOperator: '<S462>/Relational Operator'
     */
    if (99999.0F < rtb_MinMax1)
    {
        /* VariantMerge generated from: '<S342>/VariantSource' */
        rtb_MinMax1 = 99999.0F;
    }

    /* End of Switch: '<S462>/Switch1' */

    /* Switch: '<S462>/Switch' incorporates:
     *  RelationalOperator: '<S462>/Relational Operator1'
     *  UnitDelay: '<S454>/Unit Delay'
     */
    if (rtb_MinMax1 > VeRGNC_M_RegenCapLim)
    {
        RGNR_ac_DW.UnitDelay_DSTATE_od = rtb_MinMax1;
    }
    else
    {
        RGNR_ac_DW.UnitDelay_DSTATE_od = VeRGNC_M_RegenCapLim;
    }

    /* End of Switch: '<S462>/Switch' */
    /* End of Outputs for SubSystem: '<S454>/Limiter1' */
    /* End of Outputs for SubSystem: '<S432>/GradientLimiter' */

    /* Outputs for Atomic SubSystem: '<S432>/GradientLimiter1' */
    /* Sum: '<S455>/Sum2' incorporates:
     *  Constant: '<S346>/Constant Value5'
     *  MinMax: '<S346>/MinMax1'
     *  UnitDelay: '<S455>/Unit Delay'
     */
    rtb_Switch6_idx_1 = fminf(fminf(rtb_MinMax_m, tmpRead_6), 0.0F) -
        RGNR_ac_DW.UnitDelay_DSTATE_j;

    /* Outputs for Atomic SubSystem: '<S455>/Limiter' */
    /* Switch: '<S463>/Switch1' incorporates:
     *  Constant: '<S457>/Calib'
     *  RelationalOperator: '<S463>/Relational Operator'
     */
    if (KeRGNR_dM_RgnRmpUpAftrPdlRls < rtb_Switch6_idx_1)
    {
        /* Switch: '<S217>/Switch3' */
        rtb_Switch6_idx_1 = KeRGNR_dM_RgnRmpUpAftrPdlRls;
    }

    /* End of Switch: '<S463>/Switch1' */

    /* Switch: '<S463>/Switch' incorporates:
     *  Constant: '<S456>/Calib'
     *  RelationalOperator: '<S463>/Relational Operator1'
     */
    if (rtb_Switch6_idx_1 <= KeRGNR_dM_RgnRmpDnAftrPdlRls)
    {
        rtb_Switch6_idx_1 = KeRGNR_dM_RgnRmpDnAftrPdlRls;
    }

    /* End of Switch: '<S463>/Switch' */
    /* End of Outputs for SubSystem: '<S455>/Limiter' */

    /* Sum: '<S455>/Sum3' incorporates:
     *  UnitDelay: '<S455>/Unit Delay'
     */
    rtb_MinMax1 = rtb_Switch6_idx_1 + RGNR_ac_DW.UnitDelay_DSTATE_j;

    /* Outputs for Atomic SubSystem: '<S455>/Limiter1' */
    /* Switch: '<S464>/Switch1' incorporates:
     *  Constant: '<S432>/Constant Value2'
     *  RelationalOperator: '<S464>/Relational Operator'
     */
    if (99999.0F < rtb_MinMax1)
    {
        /* VariantMerge generated from: '<S342>/VariantSource' */
        rtb_MinMax1 = 99999.0F;
    }

    /* End of Switch: '<S464>/Switch1' */

    /* Switch: '<S464>/Switch' incorporates:
     *  RelationalOperator: '<S464>/Relational Operator1'
     *  UnitDelay: '<S455>/Unit Delay'
     */
    if (rtb_MinMax1 > rtb_TmpSignalConversionAtVeATRR_M_MinTra)
    {
        RGNR_ac_DW.UnitDelay_DSTATE_j = rtb_MinMax1;
    }
    else
    {
        RGNR_ac_DW.UnitDelay_DSTATE_j = rtb_TmpSignalConversionAtVeATRR_M_MinTra;
    }

    /* End of Switch: '<S464>/Switch' */
    /* End of Outputs for SubSystem: '<S455>/Limiter1' */
    /* End of Outputs for SubSystem: '<S432>/GradientLimiter1' */

    /* Gain: '<S459>/Gain' incorporates:
     *  UnitDelay: '<S454>/Unit Delay'
     */
    VeRGNR_M_OptToGrdFil = RGNR_ac_DW.UnitDelay_DSTATE_od;

    /* End of Outputs for SubSystem: '<S346>/RgnGrdFilter' */

    /* Sum: '<S346>/Subtraction1' incorporates:
     *  Sum: '<S346>/Subtraction3'
     */
    VeRGNR_M_ToMinCoastRed = rtb_MinMax4 - tmpRead_f;

    /* If: '<S437>/If1' incorporates:
     *  Constant: '<S415>/Constant Value2'
     *  Constant: '<S438>/Calib'
     *  RelationalOperator: '<S443>/Relational Operator'
     *  Switch: '<S443>/Switch1'
     */
    if (Rte_Prm_KeHSCR_b_DrvrTrqReqNotLimited_KeHSCR_b_DrvrTrqReqNotLimited())
    {
        /* Outputs for IfAction SubSystem: '<S437>/Pass' incorporates:
         *  ActionPort: '<S440>/Action Port'
         */
        /* Switch: '<S790>/Switch1' incorporates:
         *  Gain: '<S451>/Gain'
         */
        rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = VeRGNR_M_OptToGrdFil;

        /* End of Outputs for SubSystem: '<S437>/Pass' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S437>/Limited' incorporates:
         *  ActionPort: '<S439>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S439>/Limiter1' */
        if (0.0F < VeRGNR_M_OptToGrdFil)
        {
            /* Switch: '<S443>/Switch1' incorporates:
             *  Constant: '<S415>/Constant Value2'
             */
            rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = 0.0F;
        }
        else
        {
            /* Switch: '<S443>/Switch1' */
            rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = VeRGNR_M_OptToGrdFil;
        }

        /* Switch: '<S443>/Switch' incorporates:
         *  RelationalOperator: '<S443>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeINVR_T_MtrA_T <= VeRGNR_M_ToMinCoastRed)
        {
            /* Switch: '<S443>/Switch' */
            rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = VeRGNR_M_ToMinCoastRed;
        }

        /* End of Switch: '<S443>/Switch' */
        /* End of Outputs for SubSystem: '<S439>/Limiter1' */

        /* If: '<S439>/If1' incorporates:
         *  Constant: '<S442>/Calib'
         */
        if (!Rte_Prm_KeHSCR_b_DrvrTrqReqAlwaysWithinLimits_KeHSCR_b_DrvrTrqReqAlwaysWithinLimits
                ())
        {
            /* Outputs for IfAction SubSystem: '<S439>/Check direction' incorporates:
             *  ActionPort: '<S441>/Action Port'
             */
            /* If: '<S441>/If' */
            if (((rtb_TmpSignalConversionAtVeINVR_T_MtrA_T >= 0.0F) &&
                    (VeRGNR_M_OptToGrdFil <= 0.0F)) ||
                    ((rtb_TmpSignalConversionAtVeINVR_T_MtrA_T <= 0.0F) &&
                     (VeRGNR_M_OptToGrdFil >= 0.0F)))
            {
                /* Outputs for IfAction SubSystem: '<S441>/Reverse the sign' incorporates:
                 *  ActionPort: '<S447>/Action Port'
                 */
                /* Switch: '<S790>/Switch1' incorporates:
                 *  Constant: '<S441>/Constant Value'
                 *  Inport: '<S447>/Max'
                 */
                rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = 0.0F;

                /* End of Outputs for SubSystem: '<S441>/Reverse the sign' */
            }

            /* End of If: '<S441>/If' */
            /* End of Outputs for SubSystem: '<S439>/Check direction' */
        }

        /* End of If: '<S439>/If1' */
        /* End of Outputs for SubSystem: '<S437>/Limited' */
    }

    /* End of If: '<S437>/If1' */

    /* Switch: '<S415>/Switch' incorporates:
     *  Constant: '<S434>/Calib'
     */
    if (KeRGNR_b_ApplyToMinLimForRgn)
    {
        /* Switch: '<S415>/Switch' */
        VeRGNR_M_OptToGrdFilCnstr = rtb_TmpSignalConversionAtVeINVR_T_MtrA_T;
    }
    else
    {
        /* Switch: '<S415>/Switch' incorporates:
         *  Constant: '<S415>/Constant Value5'
         *  MinMax: '<S415>/MinMax'
         */
        VeRGNR_M_OptToGrdFilCnstr = fminf(VeRGNR_M_OptToGrdFil, 0.0F);
    }

    /* End of Switch: '<S415>/Switch' */

    /* Switch: '<S790>/Switch1' incorporates:
     *  Sum: '<S346>/Subtraction2'
     */
    rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = VeRGNR_M_OptToRtLimFlt_Frnt -
        rtb_TmpSignalConversionAtVeHTDR_M_ToFTgt;

    /* MinMax: '<S346>/MinMax' incorporates:
     *  Constant: '<S346>/Constant Value'
     */
    rtb_MinMax_m = fminf(0.0F, rtb_TmpSignalConversionAtVeINVR_T_MtrA_T);

    /* VariantMerge generated from: '<S342>/VariantSource' incorporates:
     *  Sum: '<S346>/Subtraction5'
     */
    rtb_MinMax1 = VeRGNR_M_OptToRtLimFlt_Rear -
        rtb_TmpSignalConversionAtVeHTDR_M_ToRTgt;

    /* MinMax: '<S346>/MinMax4' incorporates:
     *  Constant: '<S346>/Constant Value9'
     */
    rtb_MinMax4 = fminf(rtb_MinMax1, 0.0F);

    /* Switch: '<S346>/Switch6' incorporates:
     *  Logic: '<S346>/Logical1'
     */
    if ((VeRGNC_b_RegenAvailDtrmn) || rtb_TmpSignalConversionAtVePDTR_b_EburnE)
    {
        /* Switch: '<S346>/Switch6' */
        rtb_Switch6_idx_1 = rtb_MinMax1;
    }
    else
    {
        /* Switch: '<S346>/Switch6' incorporates:
         *  Constant: '<S346>/Constant Value6'
         *  Constant: '<S346>/Constant Value7'
         */
        rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = 0.0F;
        rtb_Switch6_idx_1 = 0.0F;
    }

    /* End of Switch: '<S346>/Switch6' */

    /* Outputs for Atomic SubSystem: '<S346>/RgnGrdFilter1' */
    /* Outputs for Atomic SubSystem: '<S433>/GradientLimiter' */
    /* Sum: '<S465>/Sum2' incorporates:
     *  UnitDelay: '<S465>/Unit Delay'
     */
    rtb_MinMax1 = rtb_TmpSignalConversionAtVeINVR_T_MtrA_T
        - RGNR_ac_DW.UnitDelay_DSTATE_fq;

    /* Outputs for Atomic SubSystem: '<S465>/Limiter' */
    /* Switch: '<S472>/Switch1' incorporates:
     *  Constant: '<S468>/Calib'
     *  RelationalOperator: '<S472>/Relational Operator'
     */
    if (KeRGNR_dM_RgnRmpUpAftrPdlRls < rtb_MinMax1)
    {
        /* VariantMerge generated from: '<S342>/VariantSource' */
        rtb_MinMax1 = KeRGNR_dM_RgnRmpUpAftrPdlRls;
    }

    /* End of Switch: '<S472>/Switch1' */

    /* Switch: '<S472>/Switch' incorporates:
     *  Constant: '<S467>/Calib'
     *  RelationalOperator: '<S472>/Relational Operator1'
     */
    if (rtb_MinMax1 <= KeRGNR_dM_RgnRmpDnAftrPdlRls)
    {
        rtb_MinMax1 = KeRGNR_dM_RgnRmpDnAftrPdlRls;
    }

    /* End of Switch: '<S472>/Switch' */
    /* End of Outputs for SubSystem: '<S465>/Limiter' */

    /* Sum: '<S465>/Sum3' incorporates:
     *  UnitDelay: '<S465>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = rtb_MinMax1 +
        RGNR_ac_DW.UnitDelay_DSTATE_fq;

    /* Outputs for Atomic SubSystem: '<S465>/Limiter1' */
    /* Switch: '<S473>/Switch1' incorporates:
     *  Constant: '<S433>/Constant Value1'
     *  RelationalOperator: '<S473>/Relational Operator'
     */
    if (99999.0F < rtb_TmpSignalConversionAtVeINVR_T_MtrA_T)
    {
        /* Switch: '<S790>/Switch1' */
        rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = 99999.0F;
    }

    /* End of Switch: '<S473>/Switch1' */

    /* Switch: '<S473>/Switch' incorporates:
     *  RelationalOperator: '<S473>/Relational Operator1'
     *  UnitDelay: '<S465>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeINVR_T_MtrA_T > rtb_MinMax_m)
    {
        RGNR_ac_DW.UnitDelay_DSTATE_fq =
            rtb_TmpSignalConversionAtVeINVR_T_MtrA_T;
    }
    else
    {
        RGNR_ac_DW.UnitDelay_DSTATE_fq = rtb_MinMax_m;
    }

    /* End of Switch: '<S473>/Switch' */
    /* End of Outputs for SubSystem: '<S465>/Limiter1' */
    /* End of Outputs for SubSystem: '<S433>/GradientLimiter' */

    /* Outputs for Atomic SubSystem: '<S433>/GradientLimiter1' */
    /* Sum: '<S466>/Sum2' incorporates:
     *  UnitDelay: '<S466>/Unit Delay'
     */
    rtb_MinMax1 = rtb_Switch6_idx_1 - RGNR_ac_DW.UnitDelay_DSTATE_n0;

    /* Outputs for Atomic SubSystem: '<S466>/Limiter' */
    /* Switch: '<S474>/Switch1' incorporates:
     *  Constant: '<S468>/Calib'
     *  RelationalOperator: '<S474>/Relational Operator'
     */
    if (KeRGNR_dM_RgnRmpUpAftrPdlRls < rtb_MinMax1)
    {
        /* VariantMerge generated from: '<S342>/VariantSource' */
        rtb_MinMax1 = KeRGNR_dM_RgnRmpUpAftrPdlRls;
    }

    /* End of Switch: '<S474>/Switch1' */

    /* Switch: '<S474>/Switch' incorporates:
     *  Constant: '<S467>/Calib'
     *  RelationalOperator: '<S474>/Relational Operator1'
     */
    if (rtb_MinMax1 <= KeRGNR_dM_RgnRmpDnAftrPdlRls)
    {
        rtb_MinMax1 = KeRGNR_dM_RgnRmpDnAftrPdlRls;
    }

    /* End of Switch: '<S474>/Switch' */
    /* End of Outputs for SubSystem: '<S466>/Limiter' */

    /* Sum: '<S466>/Sum3' incorporates:
     *  UnitDelay: '<S466>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = rtb_MinMax1 +
        RGNR_ac_DW.UnitDelay_DSTATE_n0;

    /* Outputs for Atomic SubSystem: '<S466>/Limiter1' */
    /* Switch: '<S475>/Switch1' incorporates:
     *  Constant: '<S433>/Constant Value2'
     *  RelationalOperator: '<S475>/Relational Operator'
     */
    if (99999.0F < rtb_TmpSignalConversionAtVeINVR_T_MtrA_T)
    {
        /* Switch: '<S790>/Switch1' */
        rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = 99999.0F;
    }

    /* End of Switch: '<S475>/Switch1' */

    /* Switch: '<S475>/Switch' incorporates:
     *  RelationalOperator: '<S475>/Relational Operator1'
     *  UnitDelay: '<S466>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeINVR_T_MtrA_T > rtb_MinMax4)
    {
        RGNR_ac_DW.UnitDelay_DSTATE_n0 =
            rtb_TmpSignalConversionAtVeINVR_T_MtrA_T;
    }
    else
    {
        RGNR_ac_DW.UnitDelay_DSTATE_n0 = rtb_MinMax4;
    }

    /* End of Switch: '<S475>/Switch' */
    /* End of Outputs for SubSystem: '<S466>/Limiter1' */
    /* End of Outputs for SubSystem: '<S433>/GradientLimiter1' */

    /* Gain: '<S470>/Gain' incorporates:
     *  UnitDelay: '<S465>/Unit Delay'
     */
    VeRGNC_M_RegenCapFrnt_Raw_Avail = RGNR_ac_DW.UnitDelay_DSTATE_fq;

    /* Gain: '<S471>/Gain' incorporates:
     *  UnitDelay: '<S466>/Unit Delay'
     */
    VeRGNC_M_RegenCapRear_Raw_Avail = RGNR_ac_DW.UnitDelay_DSTATE_n0;

    /* End of Outputs for SubSystem: '<S346>/RgnGrdFilter1' */

    /* Switch: '<S346>/Switch2' incorporates:
     *  Constant: '<S346>/Constant Value1'
     *  Constant: '<S414>/Constant'
     *  Constant: '<S422>/Calib'
     *  RelationalOperator: '<S346>/Relational Operator'
     *  SignalConversion generated from: '<S3>/VeHADR_e_LashSt'
     */
    if (KeRGNC_b_IgnoreLashSt)
    {
        rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = 1.0F;
    }
    else
    {
        rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = (float32)((((uint32)
            rtb_TmpSignalConversionAtVeHADR_e_LashSt) != CeHADR_e_LashStZero) ?
            1 : 0);
    }

    /* End of Switch: '<S346>/Switch2' */

    /* Product: '<S346>/mult.' */
    VeRGNC_M_RegenCapRaw = VeRGNR_M_OptToGrdFilCnstr *
        rtb_TmpSignalConversionAtVeINVR_T_MtrA_T;

    /* End of Outputs for SubSystem: '<S338>/RgnAvailTo' */

    /* If: '<S484>/If1' incorporates:
     *  Constant: '<S347>/Constant Value1'
     *  Constant: '<S347>/Constant Value4'
     *  Constant: '<S476>/Constant'
     *  Constant: '<S477>/Constant Value2'
     *  Constant: '<S478>/Calib'
     *  Constant: '<S481>/Calib'
     *  Constant: '<S485>/Calib'
     *  MinMax: '<S347>/MinMax2'
     *  MinMax: '<S347>/MinMax3'
     *  Product: '<S347>/mult.'
     *  RelationalOperator: '<S347>/Relational Operator'
     *  RelationalOperator: '<S490>/Relational Operator'
     *  SignalConversion generated from: '<S338>/VariantSource1'
     *  SignalConversion generated from: '<S338>/VariantSource'
     *  SignalConversion generated from: '<S3>/VeHADR_e_LashSt'
     *  Sum: '<S347>/Subtraction3'
     *  Sum: '<S347>/Subtraction4'
     *  Switch: '<S347>/Switch1'
     *  Switch: '<S347>/Switch2'
     *  Switch: '<S477>/Switch'
     *  Switch: '<S490>/Switch1'
     * */
#if Rte_SysCon_Variant_RGNR_1

    /* Outputs for Atomic SubSystem: '<S347>/RgnGrdFilter' */
    /* Sum: '<S347>/Subtraction4' */
    VeRGNC_M_RegenCapRawWithoutLim_Lin = fmaxf
        (rtb_VariantMerge_For_Variant_Source_V_cp,
         rtb_TmpSignalConversionAtVeATRR_M_MinTra) - tmpRead_f;

    /* MinMax: '<S347>/MinMax3' incorporates:
     *  Constant: '<S347>/Constant Value8'
     */
    rtb_MinMax3_a = fminf(0.0F, VeRGNC_M_RegenCapRawWithoutLim_Lin);
    if (VeRGNC_b_RegenAvailDtrmn)
    {
        rtb_TmpSignalConversionAtVeINVR_T_MtrA_T =
            VeRGNC_M_RegenCapRawWithoutLim_Lin;
    }
    else
    {
        rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = 0.0F;
    }

    /* Outputs for Atomic SubSystem: '<S480>/GradientLimiter' */
    /* Sum: '<S499>/Sum2' incorporates:
     *  Constant: '<S347>/Constant Value4'
     *  UnitDelay: '<S499>/Unit Delay'
     */
    rtb_MinMax1 = rtb_TmpSignalConversionAtVeINVR_T_MtrA_T
        - RGNR_ac_DW.UnitDelay_DSTATE_ke;

    /* Outputs for Atomic SubSystem: '<S499>/Limiter' */
    /* Switch: '<S504>/Switch1' incorporates:
     *  Constant: '<S501>/Calib'
     *  RelationalOperator: '<S504>/Relational Operator'
     */
    if (KeRGNR_dM_RgnRmpUpAftrPdlRls < rtb_MinMax1)
    {
        /* VariantMerge generated from: '<S342>/VariantSource' */
        rtb_MinMax1 = KeRGNR_dM_RgnRmpUpAftrPdlRls;
    }

    /* End of Switch: '<S504>/Switch1' */

    /* Switch: '<S504>/Switch' incorporates:
     *  Constant: '<S500>/Calib'
     *  RelationalOperator: '<S504>/Relational Operator1'
     */
    if (rtb_MinMax1 <= KeRGNR_dM_RgnRmpDnAftrPdlRls)
    {
        rtb_MinMax1 = KeRGNR_dM_RgnRmpDnAftrPdlRls;
    }

    /* End of Switch: '<S504>/Switch' */
    /* End of Outputs for SubSystem: '<S499>/Limiter' */

    /* Sum: '<S499>/Sum3' incorporates:
     *  UnitDelay: '<S499>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = rtb_MinMax1 +
        RGNR_ac_DW.UnitDelay_DSTATE_ke;

    /* Outputs for Atomic SubSystem: '<S499>/Limiter1' */
    /* Switch: '<S505>/Switch1' incorporates:
     *  Constant: '<S480>/Constant Value1'
     *  RelationalOperator: '<S505>/Relational Operator'
     */
    if (99999.0F < rtb_TmpSignalConversionAtVeINVR_T_MtrA_T)
    {
        /* Switch: '<S790>/Switch1' */
        rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = 99999.0F;
    }

    /* End of Switch: '<S505>/Switch1' */

    /* Switch: '<S505>/Switch' incorporates:
     *  RelationalOperator: '<S505>/Relational Operator1'
     *  UnitDelay: '<S499>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeINVR_T_MtrA_T > rtb_MinMax3_a)
    {
        RGNR_ac_DW.UnitDelay_DSTATE_ke =
            rtb_TmpSignalConversionAtVeINVR_T_MtrA_T;
    }
    else
    {
        RGNR_ac_DW.UnitDelay_DSTATE_ke = rtb_MinMax3_a;
    }

    /* End of Switch: '<S505>/Switch' */
    /* End of Outputs for SubSystem: '<S499>/Limiter1' */
    /* End of Outputs for SubSystem: '<S480>/GradientLimiter' */

    /* Gain: '<S503>/Gain' incorporates:
     *  UnitDelay: '<S499>/Unit Delay'
     */
    VeRGNR_M_OptToGrdFil_Lin = RGNR_ac_DW.UnitDelay_DSTATE_ke;
    if (Rte_Prm_KeHSCR_b_DrvrTrqReqNotLimited_KeHSCR_b_DrvrTrqReqNotLimited())
    {
        /* Outputs for IfAction SubSystem: '<S484>/Pass' incorporates:
         *  ActionPort: '<S487>/Action Port'
         */
        /* Switch: '<S217>/Switch3' incorporates:
         *  Gain: '<S498>/Gain'
         */
        rtb_Switch6_idx_1 = VeRGNR_M_OptToGrdFil_Lin;

        /* End of Outputs for SubSystem: '<S484>/Pass' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S484>/Limited' incorporates:
         *  ActionPort: '<S486>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S486>/Limiter1' */
        if (0.0F < VeRGNR_M_OptToGrdFil_Lin)
        {
            /* Switch: '<S490>/Switch1' incorporates:
             *  Constant: '<S477>/Constant Value2'
             */
            rtb_Switch6_idx_1 = 0.0F;
        }
        else
        {
            /* Switch: '<S490>/Switch1' */
            rtb_Switch6_idx_1 = VeRGNR_M_OptToGrdFil_Lin;
        }

        /* Switch: '<S490>/Switch' incorporates:
         *  RelationalOperator: '<S490>/Relational Operator1'
         */
        if (rtb_Switch6_idx_1 <= VeRGNR_M_ToMinCoastRed)
        {
            /* Switch: '<S490>/Switch' */
            rtb_Switch6_idx_1 = VeRGNR_M_ToMinCoastRed;
        }

        /* End of Switch: '<S490>/Switch' */
        /* End of Outputs for SubSystem: '<S486>/Limiter1' */

        /* If: '<S486>/If1' incorporates:
         *  Constant: '<S489>/Calib'
         */
        if (!Rte_Prm_KeHSCR_b_DrvrTrqReqAlwaysWithinLimits_KeHSCR_b_DrvrTrqReqAlwaysWithinLimits
                ())
        {
            /* Outputs for IfAction SubSystem: '<S486>/Check direction' incorporates:
             *  ActionPort: '<S488>/Action Port'
             */
            /* If: '<S488>/If' */
            if (((rtb_Switch6_idx_1 >= 0.0F) && (VeRGNR_M_OptToGrdFil_Lin <=
                    0.0F)) || ((rtb_Switch6_idx_1 <= 0.0F) &&
                               (VeRGNR_M_OptToGrdFil_Lin >= 0.0F)))
            {
                /* Outputs for IfAction SubSystem: '<S488>/Reverse the sign' incorporates:
                 *  ActionPort: '<S494>/Action Port'
                 */
                /* Switch: '<S217>/Switch3' incorporates:
                 *  Constant: '<S488>/Constant Value'
                 *  Inport: '<S494>/Max'
                 */
                rtb_Switch6_idx_1 = 0.0F;

                /* End of Outputs for SubSystem: '<S488>/Reverse the sign' */
            }

            /* End of If: '<S488>/If' */
            /* End of Outputs for SubSystem: '<S486>/Check direction' */
        }

        /* End of If: '<S486>/If1' */
        /* End of Outputs for SubSystem: '<S484>/Limited' */
    }

    if (KeRGNR_b_ApplyToMinLimForRgn)
    {
        /* Switch: '<S477>/Switch' */
        VeRGNR_M_OptToGrdFilCnstr_Lin = rtb_Switch6_idx_1;
    }
    else
    {
        /* Switch: '<S477>/Switch' incorporates:
         *  Constant: '<S477>/Constant Value5'
         *  MinMax: '<S477>/MinMax'
         */
        VeRGNR_M_OptToGrdFilCnstr_Lin = fminf(VeRGNR_M_OptToGrdFil_Lin, 0.0F);
    }

    if (KeRGNC_b_IgnoreLashSt)
    {
        rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = 1.0F;
    }
    else
    {
        rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = (float32)((((uint32)
            rtb_TmpSignalConversionAtVeHADR_e_LashSt) != CeHADR_e_LashStZero) ?
            1 : 0);
    }

    /* VariantMerge generated from: '<S338>/VariantSource' incorporates:
     *  Constant: '<S347>/Constant Value1'
     *  Constant: '<S476>/Constant'
     *  Constant: '<S477>/Constant Value2'
     *  Constant: '<S478>/Calib'
     *  Constant: '<S481>/Calib'
     *  Constant: '<S485>/Calib'
     *  RelationalOperator: '<S347>/Relational Operator'
     *  RelationalOperator: '<S490>/Relational Operator'
     *  SignalConversion generated from: '<S3>/VeHADR_e_LashSt'
     *  Switch: '<S490>/Switch1'
     */
    rtb_VariantMerge_For_Variant_Source_Vari = VeRGNR_M_OptToGrdFilCnstr_Lin *
        rtb_TmpSignalConversionAtVeINVR_T_MtrA_T;

    /* End of Outputs for SubSystem: '<S347>/RgnGrdFilter' */
#else

    /* VariantMerge generated from: '<S338>/VariantSource1' incorporates:
     *  SignalConversion generated from: '<S338>/VariantSource1'
     */
    rtb_MinMax3_a = rtb_VariantMerge_For_Variant_Source_V_cp;

    /* VariantMerge generated from: '<S338>/VariantSource' incorporates:
     *  Constant: '<S348>/Constant Value8'
     *  SignalConversion generated from: '<S338>/VariantSource'
     */
    rtb_VariantMerge_For_Variant_Source_Vari = 0.0F;

#endif

    /* End of If: '<S484>/If1' */

    /* RelationalOperator: '<S797>/Comparison4' incorporates:
     *  Constant: '<S800>/Constant'
     */
    rtb_TmpSignalConversionAtVeAECR_b_AeCoas = (((uint32)
        rtb_TmpSignalConversionAtVeTTQR_e_TCMTrq) == CeTINR_e_TrqInc);

    /* Switch: '<S797>/Switch' incorporates:
     *  Constant: '<S801>/Constant'
     *  Logic: '<S797>/Logical1'
     *  RelationalOperator: '<S797>/Comparison1'
     */
    if (rtb_TmpSignalConversionAtVeAECR_b_AeCoas || (CeTINR_e_TrqDec == ((uint32)
            rtb_TmpSignalConversionAtVeTTQR_e_TCMTrq)))
    {
        /* Switch: '<S797>/Switch' incorporates:
         *  Constant: '<S805>/Calib'
         */
        rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = KeRGNR_k_SEMBlndMult1Dflt;

        /* Switch: '<S797>/Switch1' incorporates:
         *  Constant: '<S802>/Calib'
         *  Constant: '<S803>/Calib'
         */
        if (rtb_TmpSignalConversionAtVeAECR_b_AeCoas)
        {
            rtb_MinMax1 = KeRGNR_k_SEMBlndFxTrqReqInc;
        }
        else
        {
            rtb_MinMax1 = KeRGNR_k_SEMBlndFxTrqReqDec;
        }

        /* End of Switch: '<S797>/Switch1' */

        /* Switch: '<S797>/Switch' incorporates:
         *  Sum: '<S797>/Sum2'
         *  UnitDelay: '<S797>/Unit Delay1'
         */
        rtb_Switch6_idx_1 = rtb_MinMax1 + RGNR_ac_DW.UnitDelay1_DSTATE;
    }
    else
    {
        /* Switch: '<S797>/Switch' incorporates:
         *  Constant: '<S804>/Calib'
         *  Constant: '<S808>/Calib'
         *  Sum: '<S797>/Sum1'
         *  UnitDelay: '<S797>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = RGNR_ac_DW.UnitDelay_DSTATE_n
            - KeRGNR_k_SEMBlndFxTrqReqNone;
        rtb_Switch6_idx_1 = KeRGNR_k_SEMBlndMult2Dflt;
    }

    /* End of Switch: '<S797>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB3' */

    /* Inport: '<Root>/VeHTDR_M_OutTorqReqModHH' */
    (void)Rte_Read_VeHTDR_M_OutTorqReqModHH_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB3' incorporates:
     *  SubSystem: '<Root>/RGNR_MedTEB3'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/MainRgnCapCntrl'
     */
    /* Outputs for Atomic SubSystem: '<S797>/Limiter2' */
    /* Switch: '<S812>/Switch1' incorporates:
     *  Constant: '<S806>/Calib'
     *  RelationalOperator: '<S812>/Relational Operator'
     */
    if (KeRGNR_k_SEMBlndMult1LimMax < rtb_TmpSignalConversionAtVeINVR_T_MtrA_T)
    {
        /* VariantMerge generated from: '<S342>/VariantSource' */
        rtb_MinMax1 = KeRGNR_k_SEMBlndMult1LimMax;
    }
    else
    {
        /* VariantMerge generated from: '<S342>/VariantSource' */
        rtb_MinMax1 = rtb_TmpSignalConversionAtVeINVR_T_MtrA_T;
    }

    /* End of Switch: '<S812>/Switch1' */

    /* Switch: '<S812>/Switch' incorporates:
     *  Constant: '<S807>/Calib'
     *  RelationalOperator: '<S812>/Relational Operator1'
     *  UnitDelay: '<S797>/Unit Delay'
     */
    if (rtb_MinMax1 > KeRGNR_k_SEMBlndMult1LimMin)
    {
        RGNR_ac_DW.UnitDelay_DSTATE_n = rtb_MinMax1;
    }
    else
    {
        RGNR_ac_DW.UnitDelay_DSTATE_n = KeRGNR_k_SEMBlndMult1LimMin;
    }

    /* End of Switch: '<S812>/Switch' */
    /* End of Outputs for SubSystem: '<S797>/Limiter2' */

    /* Outputs for Atomic SubSystem: '<S797>/Limiter1' */
    /* Switch: '<S811>/Switch1' incorporates:
     *  Constant: '<S809>/Calib'
     *  RelationalOperator: '<S811>/Relational Operator'
     */
    if (KeRGNR_k_SEMBlndMult2LimMax < rtb_Switch6_idx_1)
    {
        /* VariantMerge generated from: '<S342>/VariantSource' */
        rtb_MinMax1 = KeRGNR_k_SEMBlndMult2LimMax;
    }
    else
    {
        /* VariantMerge generated from: '<S342>/VariantSource' */
        rtb_MinMax1 = rtb_Switch6_idx_1;
    }

    /* End of Switch: '<S811>/Switch1' */

    /* Switch: '<S811>/Switch' incorporates:
     *  Constant: '<S810>/Calib'
     *  RelationalOperator: '<S811>/Relational Operator1'
     *  UnitDelay: '<S797>/Unit Delay1'
     */
    if (rtb_MinMax1 > KeRGNR_k_SEMBlndMult2LimMin)
    {
        RGNR_ac_DW.UnitDelay1_DSTATE = rtb_MinMax1;
    }
    else
    {
        RGNR_ac_DW.UnitDelay1_DSTATE = KeRGNR_k_SEMBlndMult2LimMin;
    }

    /* End of Switch: '<S811>/Switch' */
    /* End of Outputs for SubSystem: '<S797>/Limiter1' */

    /* Switch: '<S217>/Switch3' incorporates:
     *  Sum: '<S218>/Subtraction1'
     */
    rtb_Switch6_idx_1 = tmpRead - rtb_TmpSignalConversionAtVeATRR_M_OutTrq;

    /* Sum: '<S789>/Sum1' incorporates:
     *  Product: '<S789>/Product'
     *  Product: '<S789>/Product1'
     *  Sum: '<S789>/Sum'
     *  Sum: '<S789>/Sum2'
     *  Sum: '<S789>/Sum3'
     *  UnitDelay: '<S797>/Unit Delay'
     *  UnitDelay: '<S797>/Unit Delay1'
     */
    VeRGNC_M_EstRegenAchvdTrqFltr =
        (((((rtb_TmpSignalConversionAtVeRGNC_M_RgnReq -
             VeRGNC_M_EstRegenAchvdTrqFltr) * RGNR_ac_DW.UnitDelay1_DSTATE) +
           VeRGNC_M_EstRegenAchvdTrqFltr) - rtb_Switch6_idx_1) *
         RGNR_ac_DW.UnitDelay_DSTATE_n) + rtb_Switch6_idx_1;

    /* Switch: '<S218>/Switch2' incorporates:
     *  Constant: '<S779>/Calib'
     *  Inport: '<Root>/VeHTDR_M_OptToRear_OptTaTb'
     *  Inport: '<Root>/VeHTDR_M_ToRTgt_postRegen'
     */
    if (KeRGNR_b_EstRegTrqDet)
    {
        /* Switch: '<S217>/Switch3' */
        rtb_Switch6_idx_1 = rtb_TmpSignalConversionAtVeHTDR_M_ToRT_d;
    }
    else
    {
        (void)Rte_Read_VeHTDR_M_OptToRear_OptTaTb_Value(&tmpRead_i);
        (void)Rte_Read_VeHTDR_M_ToRTgt_postRegen_Value(&tmpRead_d);

        /* Switch: '<S218>/Switch5' incorporates:
         *  Constant: '<S786>/Calib'
         *  Inport: '<Root>/VeHTDR_M_OptToRear_OptTaTb'
         *  Inport: '<Root>/VeHTDR_M_ToRTgt_postRegen'
         */
        if (KeRGNR_b_MotTrqCmd)
        {
            /* Switch: '<S217>/Switch3' */
            rtb_Switch6_idx_1 = tmpRead_i;
        }
        else
        {
            /* Switch: '<S217>/Switch3' */
            rtb_Switch6_idx_1 = tmpRead_d;
        }

        /* End of Switch: '<S218>/Switch5' */
    }

    /* End of Switch: '<S218>/Switch2' */

    /* Sum: '<S218>/Subtraction3' */
    VeRGNR_M_CmndRegenHTDR_Rear = rtb_Switch6_idx_1 -
        rtb_TmpSignalConversionAtVeHTDR_M_ToRTgt;

    /* Switch: '<S218>/Switch' incorporates:
     *  Constant: '<S779>/Calib'
     *  Inport: '<Root>/VeHTDR_M_OptToFront_OptTaTb'
     *  Inport: '<Root>/VeHTDR_M_ToFTgt_postRegen'
     */
    if (KeRGNR_b_EstRegTrqDet)
    {
        /* Switch: '<S217>/Switch3' */
        rtb_Switch6_idx_1 = rtb_TmpSignalConversionAtVeHTDR_M_ToFT_i;
    }
    else
    {
        (void)Rte_Read_VeHTDR_M_OptToFront_OptTaTb_Value(&tmpRead_h);
        (void)Rte_Read_VeHTDR_M_ToFTgt_postRegen_Value(&tmpRead_c);

        /* Switch: '<S218>/Switch4' incorporates:
         *  Constant: '<S786>/Calib'
         *  Inport: '<Root>/VeHTDR_M_OptToFront_OptTaTb'
         *  Inport: '<Root>/VeHTDR_M_ToFTgt_postRegen'
         */
        if (KeRGNR_b_MotTrqCmd)
        {
            /* Switch: '<S217>/Switch3' */
            rtb_Switch6_idx_1 = tmpRead_h;
        }
        else
        {
            /* Switch: '<S217>/Switch3' */
            rtb_Switch6_idx_1 = tmpRead_c;
        }

        /* End of Switch: '<S218>/Switch4' */
    }

    /* End of Switch: '<S218>/Switch' */

    /* Sum: '<S218>/Subtraction2' */
    VeRGNR_M_CmndRegenHTDR_Frnt = rtb_Switch6_idx_1 -
        rtb_TmpSignalConversionAtVeHTDR_M_ToFTgt;

    /* Switch: '<S218>/Switch3' incorporates:
     *  Constant: '<S780>/Calib'
     */
    if (KeRGNR_b_SingleRegExtTrq)
    {
        /* Switch: '<S793>/Switch1' incorporates:
         *  Abs: '<S784>/Abs'
         *  Constant: '<S784>/Constant Value3'
         *  Constant: '<S794>/Calib'
         *  Constant: '<S796>/Calib'
         *  RelationalOperator: '<S784>/ 1'
         *  RelationalOperator: '<S784>/Equal'
         *  Switch: '<S792>/Switch1'
         */
        if (fabsf(rtb_TmpSignalConversionAtVeRGNC_M_RgnReq) <=
                KeRGNC_M_ThrshForRgnTrqRqDtct)
        {
            rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = 0.0F;
        }
        else if (((sint32)KeRGNC_Cnt_OvrRdRprtdRgnTrq) == 32767)
        {
            /* Switch: '<S792>/Switch1' incorporates:
             *  Constant: '<S795>/Calib'
             */
            rtb_TmpSignalConversionAtVeINVR_T_MtrA_T =
                KeRGNC_M_OvrRdRprtdRgnOutTrq;
        }
        else
        {
            rtb_TmpSignalConversionAtVeINVR_T_MtrA_T =
                VeRGNC_M_EstRegenAchvdTrqFltr;
        }

        /* End of Switch: '<S793>/Switch1' */

        /* Switch: '<S218>/Switch3' incorporates:
         *  Constant: '<S784>/Constant Value1'
         *  MinMax: '<S784>/Minimum1'
         */
        VeRGNC_M_EstRegenAchvdTrq = fminf
            (rtb_TmpSignalConversionAtVeINVR_T_MtrA_T, 0.0F);
    }
    else
    {
        /* Switch: '<S218>/Switch3' incorporates:
         *  Gain: '<S787>/Gain'
         *  Gain: '<S788>/Gain'
         *  Sum: '<S218>/Sum'
         */
        VeRGNC_M_EstRegenAchvdTrq = VeRGNR_M_CmndRegenHTDR_Rear +
            VeRGNR_M_CmndRegenHTDR_Frnt;
    }

    /* End of Switch: '<S218>/Switch3' */

    /* MinMax: '<S506>/Maximum' incorporates:
     *  Constant: '<S523>/Calib'
     *  Constant: '<S524>/Calib'
     *  Constant: '<S525>/Calib'
     *  Product: '<S506>/Multiplication2'
     *  Sum: '<S506>/Subtraction'
     *  Sum: '<S506>/Summation1'
     *  UnitDelay: '<S506>/Unit Delay'
     */
    RGNR_ac_DW.UnitDelay_DSTATE_e = fmaxf((((VeRGNC_M_EstRegenAchvdTrq -
        VeRGNC_M_RegenCapRaw) * KeRGNC_r_DynHdRmInc) +
        RGNR_ac_DW.UnitDelay_DSTATE_e) - KeRGNC_M_DynHdRmDec,
        KeRGNC_M_ToCommHdRm);

    /* Sum: '<S507>/Subtraction' incorporates:
     *  Constant: '<S527>/Calib'
     *  Constant: '<S528>/Calib'
     *  Constant: '<S529>/Calib'
     *  MinMax: '<S507>/Maximum'
     *  Product: '<S507>/Multiplication2'
     *  Sum: '<S507>/Summation1'
     *  UnitDelay: '<S507>/Unit Delay'
     */
#if Rte_SysCon_Variant_RGNR_1

    RGNR_ac_DW.UnitDelay_DSTATE_h = fmaxf((((VeRGNC_M_EstRegenAchvdTrq -
        rtb_VariantMerge_For_Variant_Source_Vari) * KeRGNC_r_DynHdRmInc) +
        RGNR_ac_DW.UnitDelay_DSTATE_h) - KeRGNC_M_DynHdRmDec,
        KeRGNC_M_ToCommHdRm);

#endif

    /* End of Sum: '<S507>/Subtraction' */

    /* UnitDelay: '<S773>/Unit Delay' incorporates:
     *  Constant: '<S339>/Constant Value'
     *  Constant: '<S512>/Calib'
     *  RelationalOperator: '<S339>/Equal'
     */
    rtb_TmpSignalConversionAtVeAECR_b_AeCoas = (((sint32)
        KeRGNC_Cnt_OvrRdAvailRgnTrq) == 43690);

    /* Switch: '<S636>/Switch1' */
    VeRGNC_r_Deactv_RunCrankActive = (float32)
        (VeRGNC_b_DeactvAeCoast_RunCrankActive ? 1.0F : 0.0F);

    /* Switch: '<S643>/Switch1' incorporates:
     *  Constant: '<S642>/Constant'
     *  Constant: '<S644>/Calib'
     *  Logic: '<S556>/Logical1'
     *  RelationalOperator: '<S556>/Comparison5'
     */
    VeRGNC_r_Deactv_TrnsfrCsRng = (float32)(((((uint32)
        rtb_TmpSignalConversionAtVeFWDR_e_Tcase_) != CeFWDR_e_TfrCas4Low) ||
        (KeRGNR_b_OvrrdTrnsfrCaseAvail)) ? 1 : 0);

    /* Switch: '<S625>/Switch1' incorporates:
     *  Constant: '<S614>/Constant'
     *  Constant: '<S615>/Constant'
     *  Constant: '<S616>/Constant'
     *  Constant: '<S617>/Constant'
     *  Constant: '<S618>/Constant'
     *  Constant: '<S619>/Constant'
     *  Constant: '<S620>/Constant'
     *  Constant: '<S621>/Constant'
     *  Constant: '<S622>/Constant'
     *  Constant: '<S623>/Constant'
     *  Constant: '<S624>/Constant'
     *  Constant: '<S626>/Calib'
     *  Constant: '<S627>/Calib'
     *  Logic: '<S552>/Logical'
     *  Logic: '<S552>/Logical1'
     *  RelationalOperator: '<S552>/Comparison1'
     *  RelationalOperator: '<S552>/Comparison2'
     *  RelationalOperator: '<S552>/Comparison3'
     *  RelationalOperator: '<S552>/Comparison4'
     *  RelationalOperator: '<S552>/Comparison5'
     *  RelationalOperator: '<S552>/Comparison6'
     *  RelationalOperator: '<S552>/Comparison7'
     *  RelationalOperator: '<S552>/Equal10'
     *  RelationalOperator: '<S552>/Equal11'
     *  RelationalOperator: '<S552>/Equal8'
     *  RelationalOperator: '<S552>/Equal9'
     */
    VeRGNC_r_Deactv_VldtdTransRngSt = (float32)(((((((((((((((uint32)
        rtb_TmpSignalConversionAtVeTRGR_e_VldtdT) == CeTRGR_e_TransRangeDrive1) ||
        (((uint32)rtb_TmpSignalConversionAtVeTRGR_e_VldtdT) ==
         CeTRGR_e_TransRangeDrive2)) || (((uint32)
        rtb_TmpSignalConversionAtVeTRGR_e_VldtdT) == CeTRGR_e_TransRangeDrive3))
        || (((uint32)rtb_TmpSignalConversionAtVeTRGR_e_VldtdT) ==
            CeTRGR_e_TransRangeDrive4)) || (((uint32)
        rtb_TmpSignalConversionAtVeTRGR_e_VldtdT) == CeTRGR_e_TransRangeDrive5))
        || (((uint32)rtb_TmpSignalConversionAtVeTRGR_e_VldtdT) ==
            CeTRGR_e_TransRangeDrive)) || (((uint32)
        rtb_TmpSignalConversionAtVeTRGR_e_VldtdT) == CeTRGR_e_TransRangeDrive)) ||
        (((uint32)rtb_TmpSignalConversionAtVeTRGR_e_VldtdT) ==
         CeTRGR_e_TransRangeDrive)) || (((uint32)
        rtb_TmpSignalConversionAtVeTRGR_e_VldtdT) == CeTRGR_e_TransRangeDrive)) ||
        (((uint32)rtb_TmpSignalConversionAtVeTRGR_e_VldtdT) ==
         CeTRGR_e_TransRangeDrive)) || ((((uint32)
        rtb_TmpSignalConversionAtVeTRGR_e_VldtdT) == CeTRGR_e_TransRangeReverse)
        && (KeRGNR_b_RvrsRegenEnabled))) || (KeRGNR_b_EnblRegenNonPRNDLDep)) ? 1
        : 0);

    /* Switch: '<S550>/Switch2' incorporates:
     *  Constant: '<S571>/Constant'
     *  Constant: '<S572>/Constant'
     *  Constant: '<S573>/Constant'
     *  Constant: '<S574>/Constant'
     *  Constant: '<S575>/Constant'
     *  Constant: '<S576>/Constant'
     *  Constant: '<S577>/Constant'
     *  Constant: '<S578>/Constant'
     *  Constant: '<S579>/Constant'
     *  Constant: '<S580>/Constant'
     *  Constant: '<S581>/Constant'
     *  Constant: '<S582>/Constant'
     *  Constant: '<S583>/Constant'
     *  Constant: '<S584>/Constant'
     *  Constant: '<S585>/Constant'
     *  Constant: '<S587>/Calib'
     *  Constant: '<S588>/Calib'
     *  Constant: '<S589>/Calib'
     *  Constant: '<S590>/Calib'
     *  Constant: '<S591>/Calib'
     *  Constant: '<S592>/Calib'
     *  Constant: '<S593>/Calib'
     *  Constant: '<S594>/Calib'
     *  Constant: '<S595>/Calib'
     *  Constant: '<S596>/Calib'
     *  Constant: '<S597>/Calib'
     *  Constant: '<S598>/Calib'
     *  Constant: '<S599>/Calib'
     *  Constant: '<S600>/Calib'
     *  Constant: '<S601>/Calib'
     *  Constant: '<S602>/Calib'
     *  Constant: '<S603>/Calib'
     *  Logic: '<S550>/AND'
     *  Logic: '<S550>/AND1'
     *  Logic: '<S550>/AND10'
     *  Logic: '<S550>/AND11'
     *  Logic: '<S550>/AND12'
     *  Logic: '<S550>/AND13'
     *  Logic: '<S550>/AND14'
     *  Logic: '<S550>/AND2'
     *  Logic: '<S550>/AND3'
     *  Logic: '<S550>/AND4'
     *  Logic: '<S550>/AND5'
     *  Logic: '<S550>/AND6'
     *  Logic: '<S550>/AND7'
     *  Logic: '<S550>/AND8'
     *  Logic: '<S550>/AND9'
     *  Logic: '<S550>/NOT1'
     *  Logic: '<S550>/OR1'
     *  RelationalOperator: '<S550>/Equal1'
     *  RelationalOperator: '<S550>/Equal10'
     *  RelationalOperator: '<S550>/Equal11'
     *  RelationalOperator: '<S550>/Equal12'
     *  RelationalOperator: '<S550>/Equal13'
     *  RelationalOperator: '<S550>/Equal14'
     *  RelationalOperator: '<S550>/Equal15'
     *  RelationalOperator: '<S550>/Equal2'
     *  RelationalOperator: '<S550>/Equal3'
     *  RelationalOperator: '<S550>/Equal4'
     *  RelationalOperator: '<S550>/Equal5'
     *  RelationalOperator: '<S550>/Equal6'
     *  RelationalOperator: '<S550>/Equal7'
     *  RelationalOperator: '<S550>/Equal8'
     *  RelationalOperator: '<S550>/Equal9'
     */
    if (KeRGNC_b_ModeRmvlOvrRd)
    {
        rtb_OR1_ky = KeRGNC_b_ModeRmvlOvrRdVal;
    }
    else
    {
        rtb_OR1_ky = ((((((((((((((((!KeRGNC_b_RgnEnblN) || (((uint32)
            rtb_TmpSignalConversionAtVeHSER_e_HTDR_S) != CeHSER_e_Neut_State)) &&
            ((!KeRGNC_b_RgnEnblM1) || (((uint32)
            rtb_TmpSignalConversionAtVeHSER_e_HTDR_S) != CeHSER_e_M1_State))) &&
            ((!KeRGNC_b_RgnEnblM2) || (((uint32)
            rtb_TmpSignalConversionAtVeHSER_e_HTDR_S) != CeHSER_e_M2_State))) &&
            ((!KeRGNC_b_RgnEnblM3) || (((uint32)
            rtb_TmpSignalConversionAtVeHSER_e_HTDR_S) != CeHSER_e_M3_State))) &&
                                ((!KeRGNC_b_RgnEnblG1) || (((uint32)
            rtb_TmpSignalConversionAtVeHSER_e_HTDR_S) != CeHSER_e_G1_State))) &&
                               ((!KeRGNC_b_RgnEnblG2) || (((uint32)
            rtb_TmpSignalConversionAtVeHSER_e_HTDR_S) != CeHSER_e_G2_State))) &&
                              ((!KeRGNC_b_RgnEnblG3) || (((uint32)
            rtb_TmpSignalConversionAtVeHSER_e_HTDR_S) != CeHSER_e_G3_State))) &&
                             ((!KeRGNC_b_RgnEnblG4) || (((uint32)
                                rtb_TmpSignalConversionAtVeHSER_e_HTDR_S) !=
                               CeHSER_e_G4_State))) && ((!KeRGNC_b_RgnEnblNHi) ||
                             (((uint32)rtb_TmpSignalConversionAtVeHSER_e_HTDR_S)
                              != CeHSER_e_NeutHI_State))) &&
                           ((!KeRGNC_b_RgnEnblM2Hi) || (((uint32)
                              rtb_TmpSignalConversionAtVeHSER_e_HTDR_S) !=
                             CeHSER_e_M2HI_State))) && ((!KeRGNC_b_RgnEnblG3Hi) ||
                           (((uint32)rtb_TmpSignalConversionAtVeHSER_e_HTDR_S)
                            != CeHSER_e_G3HI_State))) && ((!KeRGNC_b_RgnEnblNAll)
                          || (((uint32)rtb_TmpSignalConversionAtVeHSER_e_HTDR_S)
                              != CeHSER_e_NeutALL_State))) &&
                        ((!KeRGNC_b_RgnEnblEngOff) || (((uint32)
                           rtb_TmpSignalConversionAtVeHSER_e_HTDR_S) !=
                          CeHSER_e_M1_EngOff_State))) && ((!KeRGNC_b_RgnEnblNC2C)
                        || (((uint32)rtb_TmpSignalConversionAtVeHSER_e_HTDR_S)
                            != CeHSER_e_NeutC2C_State))) &&
                      ((!KeRGNC_b_RgnEnblN2) || (((uint32)
                         rtb_TmpSignalConversionAtVeHSER_e_HTDR_S) !=
                        CeHSER_e_Neut_State_2)));
    }

    /* End of Switch: '<S550>/Switch2' */

    /* Switch: '<S550>/Switch1' */
    if (rtb_OR1_ky)
    {
        /* Switch: '<S217>/Switch3' incorporates:
         *  UnitDelay: '<S550>/Unit Delay'
         */
        rtb_Switch6_idx_1 = RGNR_ac_DW.UnitDelay_DSTATE_e3;
    }
    else
    {
        /* Switch: '<S217>/Switch3' incorporates:
         *  Constant: '<S586>/Calib'
         */
        rtb_Switch6_idx_1 = KeRGNC_T_ModeRmvlCnts;
    }

    /* End of Switch: '<S550>/Switch1' */

    /* Product: '<S550>/Product1' incorporates:
     *  Constant: '<S586>/Calib'
     */
    VeRGNC_r_Deactv_ModeHTDRState = rtb_Switch6_idx_1 / KeRGNC_T_ModeRmvlCnts;

    /* Outputs for Atomic SubSystem: '<S549>/Digital Lowpass Reset Enabled' */
    /* Switch: '<S562>/Switch1' incorporates:
     *  Constant: '<S567>/Calib'
     *  Product: '<S562>/Multiplication'
     *  Sum: '<S562>/Subtraction'
     *  Sum: '<S562>/Summation'
     *  UnitDelay: '<S562>/Unit Delay'
     */
    RGNR_ac_DW.UnitDelay_DSTATE_gw += (rtb_TmpSignalConversionAtVeCSVR_v_VehSpd
        - RGNR_ac_DW.UnitDelay_DSTATE_gw) * KeRGNR_k_VehSpdFltForRgnDeact;

    /* End of Outputs for SubSystem: '<S549>/Digital Lowpass Reset Enabled' */

    /* Product: '<S549>/Divide' incorporates:
     *  Constant: '<S563>/Calib'
     *  Constant: '<S566>/Calib'
     *  Sum: '<S549>/Subtraction1'
     *  Sum: '<S549>/Subtraction2'
     *  UnitDelay: '<S562>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = (RGNR_ac_DW.UnitDelay_DSTATE_gw -
        KeRGNC_v_RgnZeroSpd) / (KeRGNC_v_RgnRmvlSpd - KeRGNC_v_RgnZeroSpd);

    /* Outputs for Atomic SubSystem: '<S549>/Limiter' */
    /* Switch: '<S568>/Switch1' incorporates:
     *  Constant: '<S549>/One'
     *  RelationalOperator: '<S568>/Relational Operator'
     */
    if (1.0F < rtb_TmpSignalConversionAtVeINVR_T_MtrA_T)
    {
        /* Switch: '<S790>/Switch1' */
        rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = 1.0F;
    }

    /* End of Switch: '<S568>/Switch1' */

    /* Switch: '<S568>/Switch' incorporates:
     *  Constant: '<S549>/Zero'
     *  RelationalOperator: '<S568>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtVeINVR_T_MtrA_T > 0.0F)
    {
        /* Switch: '<S568>/Switch' */
        VeRGNC_r_Deactv_VehSpdSigned = rtb_TmpSignalConversionAtVeINVR_T_MtrA_T;
    }
    else
    {
        /* Switch: '<S568>/Switch' */
        VeRGNC_r_Deactv_VehSpdSigned = 0.0F;
    }

    /* End of Switch: '<S568>/Switch' */
    /* End of Outputs for SubSystem: '<S549>/Limiter' */

    /* Product: '<S549>/Divide1' incorporates:
     *  Constant: '<S564>/Calib'
     *  Constant: '<S565>/Calib'
     *  Sum: '<S549>/Subtraction3'
     *  Sum: '<S549>/Subtraction4'
     *  UnitDelay: '<S562>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = (1.0F / (KeRGNC_v_RgnTopSpd -
        KeRGNC_v_RgnTopSpdOff)) * (KeRGNC_v_RgnTopSpd -
        RGNR_ac_DW.UnitDelay_DSTATE_gw);

    /* Outputs for Atomic SubSystem: '<S549>/Limiter1' */
    /* Switch: '<S569>/Switch1' incorporates:
     *  Constant: '<S549>/One1'
     *  RelationalOperator: '<S569>/Relational Operator'
     */
    if (1.0F < rtb_TmpSignalConversionAtVeINVR_T_MtrA_T)
    {
        /* Switch: '<S790>/Switch1' */
        rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = 1.0F;
    }

    /* End of Switch: '<S569>/Switch1' */

    /* Switch: '<S569>/Switch' incorporates:
     *  Constant: '<S549>/Zero1'
     *  RelationalOperator: '<S569>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtVeINVR_T_MtrA_T > 0.0F)
    {
        /* Switch: '<S569>/Switch' */
        VeRGNC_r_Deactv_TopVehSpd = rtb_TmpSignalConversionAtVeINVR_T_MtrA_T;
    }
    else
    {
        /* Switch: '<S569>/Switch' */
        VeRGNC_r_Deactv_TopVehSpd = 0.0F;
    }

    /* End of Switch: '<S569>/Switch' */
    /* End of Outputs for SubSystem: '<S549>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S551>/Digital Lowpass Reset Enabled' */
    /* Switch: '<S606>/Switch1' incorporates:
     *  Constant: '<S610>/Calib'
     *  Product: '<S606>/Multiplication'
     *  Sum: '<S606>/Subtraction'
     *  Sum: '<S606>/Summation'
     *  UnitDelay: '<S606>/Unit Delay'
     */
    RGNR_ac_DW.UnitDelay_DSTATE_a += (rtb_TmpSignalConversionAtVeMSPR_n_MtrB_S -
        RGNR_ac_DW.UnitDelay_DSTATE_a) * KeRGNR_k_MtrBSpdFltForRgnDeact;

    /* End of Outputs for SubSystem: '<S551>/Digital Lowpass Reset Enabled' */

    /* Switch: '<S551>/Switch' incorporates:
     *  Constant: '<S609>/Calib'
     */
    if (KeRGNR_b_MtrBEquipped)
    {
        /* Sum: '<S551>/Subtraction2' incorporates:
         *  Constant: '<S608>/Calib'
         *  UnitDelay: '<S606>/Unit Delay'
         */
        rtb_MinMax1 = RGNR_ac_DW.UnitDelay_DSTATE_a - KeRGNC_n_RgnZeroSpd_MtrB;

        /* Sum: '<S551>/Subtraction1' incorporates:
         *  Constant: '<S607>/Calib'
         *  Constant: '<S608>/Calib'
         */
        rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = KeRGNC_n_RgnRmvlSpd_MtrB -
            KeRGNC_n_RgnZeroSpd_MtrB;

        /* Outputs for Atomic SubSystem: '<S551>/Protected Division' */
        /* Switch: '<S613>/Switch1' incorporates:
         *  Constant: '<S613>/Constant Value'
         *  Constant: '<S613>/Constant Value1'
         *  Constant: '<S613>/Constant Value2'
         *  Constant: '<S613>/Constant Value3'
         *  Logic: '<S613>/AND'
         *  RelationalOperator: '<S613>/Greater Than or Equal '
         *  RelationalOperator: '<S613>/Greater Than or Equal 1'
         *  RelationalOperator: '<S613>/Not Equal'
         *  RelationalOperator: '<S613>/Not Equal1'
         *  Switch: '<S613>/Switch2'
         *  Switch: '<S613>/Switch3'
         */
        if ((rtb_MinMax1 != 0.0F) && (rtb_TmpSignalConversionAtVeINVR_T_MtrA_T
                != 0.0F))
        {
            /* Switch: '<S613>/Switch1' incorporates:
             *  Product: '<S613>/Division'
             */
            VeRGNC_r_Deactv_MtrBSpd = rtb_MinMax1 /
                rtb_TmpSignalConversionAtVeINVR_T_MtrA_T;
        }
        else if (rtb_MinMax1 > 0.0F)
        {
            /* Switch: '<S613>/Switch2' incorporates:
             *  Constant: '<S613>/MAXFLOAT'
             *  Switch: '<S613>/Switch1'
             */
            VeRGNC_r_Deactv_MtrBSpd = 3.402823466E+38F;
        }
        else if (rtb_MinMax1 < 0.0F)
        {
            /* Switch: '<S613>/Switch3' incorporates:
             *  Constant: '<S613>/MINFLOAT'
             *  Switch: '<S613>/Switch1'
             *  Switch: '<S613>/Switch2'
             */
            VeRGNC_r_Deactv_MtrBSpd = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S613>/Switch1' incorporates:
             *  Constant: '<S613>/Constant Value4'
             *  Switch: '<S613>/Switch2'
             *  Switch: '<S613>/Switch3'
             */
            VeRGNC_r_Deactv_MtrBSpd = 0.0F;
        }

        /* End of Switch: '<S613>/Switch1' */
        /* End of Outputs for SubSystem: '<S551>/Protected Division' */

        /* Outputs for Atomic SubSystem: '<S551>/Limiter' */
        /* Switch: '<S611>/Switch1' incorporates:
         *  Constant: '<S551>/One'
         *  RelationalOperator: '<S611>/Relational Operator'
         */
        if (1.0F < VeRGNC_r_Deactv_MtrBSpd)
        {
            /* Switch: '<S611>/Switch1' */
            VeRGNC_r_Deactv_MtrBSpd = 1.0F;
        }

        /* End of Switch: '<S611>/Switch1' */

        /* Switch: '<S611>/Switch' incorporates:
         *  Constant: '<S551>/Zero'
         *  RelationalOperator: '<S611>/Relational Operator1'
         */
        if (VeRGNC_r_Deactv_MtrBSpd <= 0.0F)
        {
            /* Switch: '<S551>/Switch' */
            VeRGNC_r_Deactv_MtrBSpd = 0.0F;
        }

        /* End of Switch: '<S611>/Switch' */
        /* End of Outputs for SubSystem: '<S551>/Limiter' */
    }
    else
    {
        /* Switch: '<S551>/Switch' incorporates:
         *  Constant: '<S551>/One1'
         */
        VeRGNC_r_Deactv_MtrBSpd = 1.0F;
    }

    /* End of Switch: '<S551>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB3' */

    /* Inport: '<Root>/VeTRNR_e_ActualGear' */
    (void)Rte_Read_VeTRNR_e_ActualGear_Value(&tmpRead_b);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB3' incorporates:
     *  SubSystem: '<Root>/RGNR_MedTEB3'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/MainRgnCapCntrl'
     */
    /* Lookup_n-D: '<S560>/Vector' incorporates:
     *  SignalConversion generated from: '<S3>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     */
    VeRGNC_r_Deactv_BatPackSOC_Arb = look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B, ((const float32 *)
          &(KxRGNR_r_RgnCapaSOCLmt[0])), ((const float32 *)
          &(KtRGNR_r_RgnCapaSOCLmt[0])), 5U);

    /* Lookup_n-D: '<S561>/Vector' incorporates:
     *  SignalConversion generated from: '<S3>/VeBPCR_T_BatModTmp'
     */
    VeRGNC_r_Deactv_BatModTmp = look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeBPCR_T_BatMod, ((const float32 *)
          &(KxRGNR_M_RgnCapBatTmpLmt[0])), ((const float32 *)
          &(KtRGNR_M_RgnCapBatTmpLmt[0])), 3U);

    /* Switch: '<S640>/Switch1' incorporates:
     *  Constant: '<S639>/Constant'
     *  Constant: '<S641>/Calib'
     *  Inport: '<Root>/VeTRNR_e_ActualGear'
     *  Logic: '<S555>/Logical'
     *  RelationalOperator: '<S555>/Comparison4'
     */
    VeRGNR_r_Deactv_1stGearSel = (float32)(((((uint32)tmpRead_b) != CeTRNR_e_D1)
        || (!KeRGNR_b_DsbRgn1stGear)) ? 1 : 0);

    /* Switch: '<S635>/Switch1' incorporates:
     *  Constant: '<S629>/Constant'
     *  Constant: '<S630>/Constant'
     *  Constant: '<S631>/Constant'
     *  Constant: '<S632>/Constant'
     *  Constant: '<S633>/Constant'
     *  Constant: '<S634>/Constant'
     *  Logic: '<S553>/Logical Operator'
     *  Logic: '<S553>/Logical Operator1'
     *  Logic: '<S553>/Logical Operator2'
     *  RelationalOperator: '<S553>/Relational Operator'
     *  RelationalOperator: '<S553>/Relational Operator1'
     *  RelationalOperator: '<S553>/Relational Operator2'
     *  RelationalOperator: '<S553>/Relational Operator3'
     *  RelationalOperator: '<S553>/Relational Operator4'
     *  RelationalOperator: '<S553>/Relational Operator5'
     */
    VeRGNC_r_RaceModeStsInhibit = (float32)((((((((uint32)
        rtb_TmpSignalConversionAtVeTIMR_e_RaceOp) != CeTIMR_e_LaunchControl) &&
        (((uint32)rtb_TmpSignalConversionAtVeTIMR_e_RaceOp) != CeTIMR_e_LineLock))
        && (((uint32)rtb_TmpSignalConversionAtVeTIMR_e_RaceOp) != CeTIMR_e_Drift))
        && (((uint32)rtb_TmpSignalConversionAtVeTIMR_e_RaceOp) != CeTIMR_e_Donut))
        || ((CeTIMR_e_RaceMode_On != ((uint32)
        rtb_TmpSignalConversionAtVeTIMR_e_RaceMo)) && (((uint32)
        rtb_TmpSignalConversionAtVeTIMR_e_RaceMo) != CeTIMR_e_RaceMode_Active)))
        ? 1 : 0);

    /* Switch: '<S652>/Switch2' incorporates:
     *  Constant: '<S652>/Constant Value11'
     *  Constant: '<S658>/Calib'
     *  Constant: '<S672>/Calib'
     *  Constant: '<S682>/Constant'
     *  Constant: '<S683>/Constant'
     *  Constant: '<S684>/Constant'
     *  Constant: '<S685>/Constant'
     *  Constant: '<S686>/Constant'
     *  Constant: '<S687>/Constant'
     *  Constant: '<S688>/Constant'
     *  Constant: '<S689>/Constant'
     *  Constant: '<S690>/Constant'
     *  Constant: '<S691>/Constant'
     *  Constant: '<S692>/Constant'
     *  Constant: '<S693>/Calib'
     *  DataTypeConversion: '<S557>/Data Type Conversion'
     *  Inport: '<Root>/VeBTQR_r_NVRatioLmtd'
     *  Inport: '<Root>/VeCTCR_r_MinCreepBlendingFactorBlended'
     *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
     *  Inport: '<Root>/VeOHSR_n_IdleSpdBlended'
     *  Inport: '<Root>/VeTINR_n_DisengageILE'
     *  Inport: '<Root>/VeTRNR_e_ILEStat'
     *  Logic: '<S646>/Logical2'
     *  Logic: '<S646>/Logical4'
     *  Logic: '<S651>/Logical1'
     *  Logic: '<S680>/Logical1'
     *  Logic: '<S680>/Logical2'
     *  Lookup_n-D: '<S648>/Vector'
     *  Lookup_n-D: '<S664>/Vector'
     *  Lookup_n-D: '<S665>/Vector'
     *  Lookup_n-D: '<S678>/Vector'
     *  Lookup_n-D: '<S679>/Vector'
     *  Product: '<S557>/Multiplication1'
     *  RelationalOperator: '<S646>/Comparison19'
     *  RelationalOperator: '<S646>/Comparison20'
     *  RelationalOperator: '<S650>/Relational Operator1'
     *  RelationalOperator: '<S650>/Relational Operator2'
     *  RelationalOperator: '<S651>/Comparison2'
     *  RelationalOperator: '<S651>/Comparison4'
     *  RelationalOperator: '<S652>/Comparison1'
     *  RelationalOperator: '<S680>/Comparison1'
     *  RelationalOperator: '<S680>/Comparison2'
     *  RelationalOperator: '<S680>/Comparison3'
     *  RelationalOperator: '<S680>/Comparison4'
     *  RelationalOperator: '<S680>/Comparison5'
     *  RelationalOperator: '<S680>/Comparison6'
     *  RelationalOperator: '<S680>/Comparison7'
     *  RelationalOperator: '<S680>/Equal10'
     *  RelationalOperator: '<S680>/Equal11'
     *  RelationalOperator: '<S680>/Equal8'
     *  RelationalOperator: '<S680>/Equal9'
     *  Selector: '<S557>/Selector2'
     *  SignalConversion generated from: '<S341>/VariantSource'
     *  Sum: '<S557>/Sum1'
     *  Sum: '<S651>/Subtract'
     *  Sum: '<S652>/Sum1'
     *  Switch: '<S650>/Switch1'
     *  Switch: '<S651>/Switch1'
     *  Switch: '<S651>/Switch2'
     *  Switch: '<S651>/Switch3'
     *  Switch: '<S651>/Switch5'
     *  Switch: '<S652>/Switch1'
     *  Switch: '<S655>/Switch1'
     *  Switch: '<S657>/Switch1'
     *  UnitDelay: '<S671>/Unit Delay'
     */
#if Rte_SysCon_Variant_RGNR_4

    /* Outputs for Atomic SubSystem: '<S650>/GradientLimiter' */
    /* Outputs for Atomic SubSystem: '<S650>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S557>/Limiter' */
    /* Outputs for Atomic SubSystem: '<S651>/GradientLimiter1' */
    /* Outputs for Atomic SubSystem: '<S651>/Hysteresis2' */
    /* Outputs for Atomic SubSystem: '<S652>/Limiter' */
    /* Outputs for Atomic SubSystem: '<S652>/Limiter1' */
    if (KeRGNR_b_UndershootProtSourceChange)
    {
        /* VariantMerge generated from: '<S208>/VariantSource1' */
        rtb_VariantMerge_For_Variant_Source_V_cp =
            rtb_TmpSignalConversionAtVeMSPR_n_MtrB_S;
    }
    else
    {
        /* VariantMerge generated from: '<S208>/VariantSource1' */
        rtb_VariantMerge_For_Variant_Source_V_cp =
            rtb_TmpSignalConversionAtVeTISR_n_InputS;
    }

    (void)Rte_Read_VeOHSR_n_IdleSpdBlended_Value(&tmpRead_3);

    /* Sum: '<S652>/Sum1' incorporates:
     *  Constant: '<S693>/Calib'
     *  Inport: '<Root>/VeOHSR_n_IdleSpdBlended'
     */
    rtb_TmpSignalConversionAtVeINVR_T_MtrA_T =
        rtb_VariantMerge_For_Variant_Source_V_cp - tmpRead_3;

    /* Switch: '<S697>/Switch1' incorporates:
     *  Constant: '<S652>/Constant Value2'
     *  RelationalOperator: '<S697>/Relational Operator'
     */
    if (6000.0F < rtb_TmpSignalConversionAtVeINVR_T_MtrA_T)
    {
        /* Switch: '<S790>/Switch1' */
        rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = 6000.0F;
    }

    /* End of Switch: '<S697>/Switch1' */

    /* Switch: '<S697>/Switch' incorporates:
     *  Constant: '<S652>/Constant Value3'
     *  RelationalOperator: '<S697>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtVeINVR_T_MtrA_T > 0.0F)
    {
        /* Switch: '<S697>/Switch' */
        VeRGNR_n_EngSpDeltaFromIdle = rtb_TmpSignalConversionAtVeINVR_T_MtrA_T;
    }
    else
    {
        /* Switch: '<S697>/Switch' */
        VeRGNR_n_EngSpDeltaFromIdle = 0.0F;
    }

    /* End of Switch: '<S697>/Switch' */
    if (VeRGNR_n_EngSpDeltaFromIdle == 0.0F)
    {
        /* Switch: '<S652>/Switch1' incorporates:
         *  Constant: '<S694>/Calib'
         */
        rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = KeRGNR_r_UndershootProt;
    }
    else
    {
        (void)Rte_Read_VeBTQR_r_NVRatioLmtd_Value(&tmpRead_4);

        /* Switch: '<S652>/Switch1' incorporates:
         *  Inport: '<Root>/VeBTQR_r_NVRatioLmtd'
         *  Lookup_n-D: '<S695>/Vector'
         *  Switch: '<S697>/Switch'
         */
        rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = look2_iflf_binlca_16a
            (VeRGNR_n_EngSpDeltaFromIdle, tmpRead_4, ((const float32 *)
              &(KxRGNR_Cf_MaxOvrLayRegnBrkTrqScale[0])), ((const float32 *)
              &(KyRGNR_Cf_MaxOvrLayRegnBrkTrqScale[0])), ((const float32 *)
              &(KtRGNR_Cf_MaxOvrLayRegnBrkTrqScale[0])),
             RGNR_ac_ConstP.Vector_maxIndex_p, 10U);
    }

    /* Switch: '<S696>/Switch1' incorporates:
     *  Constant: '<S652>/Constant Value'
     *  Constant: '<S652>/Constant Value11'
     *  Inport: '<Root>/VeBTQR_r_NVRatioLmtd'
     *  RelationalOperator: '<S696>/Relational Operator'
     */
    if (1.0F < rtb_TmpSignalConversionAtVeINVR_T_MtrA_T)
    {
        /* Switch: '<S790>/Switch1' */
        rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = 1.0F;
    }

    /* End of Switch: '<S696>/Switch1' */

    /* Switch: '<S696>/Switch' incorporates:
     *  Constant: '<S652>/Constant Value1'
     *  RelationalOperator: '<S696>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtVeINVR_T_MtrA_T > 0.0F)
    {
        /* Switch: '<S696>/Switch' */
        VeRGNR_Cf_MaxOvrLayRegnBrkTrqScale =
            rtb_TmpSignalConversionAtVeINVR_T_MtrA_T;
    }
    else
    {
        /* Switch: '<S696>/Switch' */
        VeRGNR_Cf_MaxOvrLayRegnBrkTrqScale = 0.0F;
    }

    /* End of Switch: '<S696>/Switch' */

    /* VariantMerge generated from: '<S208>/VariantSource1' incorporates:
     *  Constant: '<S653>/Constant'
     *  Constant: '<S654>/Constant'
     */
    rtb_VariantMerge_For_Variant_Source_V_cp = (float32)(((((uint32)
        rtb_TmpSignalConversionAtVeDTRR_e_SumFWI) != CeDTRR_e_ESP) && (((uint32)
        rtb_TmpSignalConversionAtVeDTRR_e_SumFWI) != CeDTRR_e_SNA)) ? 1 : 0);

    /* Lookup_n-D: '<S679>/Vector' incorporates:
     *  Switch: '<S218>/Switch3'
     */
    rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = look1_iflf_binlca_16a
        (VeRGNC_M_EstRegenAchvdTrq, ((const float32 *)
          &(KxRGNR_r_BlendOutRateFromVturbDelta_LU[0])), ((const float32 *)
          &(KtRGNR_r_BlendOutRateFromVturbDelta_LU[0])), 3U);

    /* Lookup_n-D: '<S678>/Vector' incorporates:
     *  Switch: '<S218>/Switch3'
     */
    rtb_TmpSignalConversionAtVeBPCR_T_BatMod = look1_iflf_binlca_16a
        (VeRGNC_M_EstRegenAchvdTrq, ((const float32 *)
          &(KxRGNR_r_BlendOutRateFromVturbDelta_LD[0])), ((const float32 *)
          &(KtRGNR_r_BlendOutRateFromVturbDelta_LD[0])), 3U);

    /* Logic: '<S651>/Logical1' incorporates:
     *  Constant: '<S668>/Constant'
     *  Constant: '<S669>/Constant'
     */
    VeRGNR_b_RngSt_N_M1 = ((((uint32)rtb_TmpSignalConversionAtVeHSER_e_RngEqn) ==
                            CeHSER_e_UseNeutralEqn) || (((uint32)
        rtb_TmpSignalConversionAtVeHSER_e_RngEqn) == CeHSER_e_UseM1Eqn));
    if (VeRGNR_b_RngSt_N_M1)
    {
        /* Switch: '<S651>/Switch4' incorporates:
         *  Constant: '<S673>/Calib'
         */
        if (KeRGNR_b_UseMtrB_N_M1)
        {
            /* Switch: '<S651>/Switch3' */
            VeRGNR_n_InputShaftSpeed = rtb_TmpSignalConversionAtVeMSPR_n_MtrB_S;
        }
        else
        {
            /* Switch: '<S651>/Switch3' */
            VeRGNR_n_InputShaftSpeed = rtb_TmpSignalConversionAtVeTISR_n_InputS;
        }

        /* End of Switch: '<S651>/Switch4' */
    }
    else if (KeRGNR_b_UseMtrB_M2_G2)
    {
        /* Switch: '<S651>/Switch5' incorporates:
         *  Switch: '<S651>/Switch3'
         */
        VeRGNR_n_InputShaftSpeed = rtb_TmpSignalConversionAtVeMSPR_n_MtrB_S;
    }
    else
    {
        /* Switch: '<S651>/Switch3' incorporates:
         *  Switch: '<S651>/Switch5'
         */
        VeRGNR_n_InputShaftSpeed = rtb_TmpSignalConversionAtVeTISR_n_InputS;
    }

    /* Sum: '<S651>/Subtract' incorporates:
     *  Constant: '<S672>/Calib'
     *  Switch: '<S651>/Switch5'
     */
    rtb_MinMax1 = VeRGNR_n_InputShaftSpeed -
        rtb_TmpSignalConversionAtVeVSDR_n_NTurbO;
    (void)Rte_Read_VeESSR_e_EngStartStopSt_Value(&tmpRead_1);
    if (((((((((((((uint32)rtb_TmpSignalConversionAtVeTRGR_e_VldtdT) ==
                  CeTRGR_e_TransRangeDrive1) || (((uint32)
                   rtb_TmpSignalConversionAtVeTRGR_e_VldtdT) ==
                  CeTRGR_e_TransRangeDrive2)) || (((uint32)
                  rtb_TmpSignalConversionAtVeTRGR_e_VldtdT) ==
                 CeTRGR_e_TransRangeDrive3)) || (((uint32)
                 rtb_TmpSignalConversionAtVeTRGR_e_VldtdT) ==
                CeTRGR_e_TransRangeDrive4)) || (((uint32)
                rtb_TmpSignalConversionAtVeTRGR_e_VldtdT) ==
               CeTRGR_e_TransRangeDrive5)) || (((uint32)
               rtb_TmpSignalConversionAtVeTRGR_e_VldtdT) ==
              CeTRGR_e_TransRangeDrive)) || (((uint32)
              rtb_TmpSignalConversionAtVeTRGR_e_VldtdT) ==
             CeTRGR_e_TransRangeDrive)) || (((uint32)
             rtb_TmpSignalConversionAtVeTRGR_e_VldtdT) ==
            CeTRGR_e_TransRangeDrive)) || (((uint32)
            rtb_TmpSignalConversionAtVeTRGR_e_VldtdT) ==
            CeTRGR_e_TransRangeDrive)) || (((uint32)
            rtb_TmpSignalConversionAtVeTRGR_e_VldtdT) ==
            CeTRGR_e_TransRangeDrive)) && (((uint32)tmpRead_1) ==
            CeESSR_e_EngRunning))
    {
        /* Switch: '<S651>/Switch2' */
        rtb_TmpSignalConversionAtVeTISR_n_InputS = rtb_MinMax1;
    }
    else
    {
        /* Switch: '<S651>/Switch2' incorporates:
         *  Constant: '<S651>/Constant Value'
         */
        rtb_TmpSignalConversionAtVeTISR_n_InputS = 250.0F;
    }

    /* Switch: '<S671>/Switch1' incorporates:
     *  Constant: '<S671>/Constant Value'
     *  Constant: '<S674>/Calib'
     *  Constant: '<S675>/Calib'
     *  Constant: '<S682>/Constant'
     *  Constant: '<S683>/Constant'
     *  Constant: '<S684>/Constant'
     *  Constant: '<S685>/Constant'
     *  Constant: '<S686>/Constant'
     *  Constant: '<S687>/Constant'
     *  Constant: '<S688>/Constant'
     *  Constant: '<S689>/Constant'
     *  Constant: '<S690>/Constant'
     *  Constant: '<S691>/Constant'
     *  Constant: '<S692>/Constant'
     *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
     *  RelationalOperator: '<S671>/Greater  Than'
     *  RelationalOperator: '<S671>/Greater  Than1'
     *  UnitDelay: '<S671>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeTISR_n_InputS > KeRGNR_n_DeltaFromVturb_RSP)
    {
        RGNR_ac_DW.UnitDelay_DSTATE_an = true;
    }
    else
    {
        RGNR_ac_DW.UnitDelay_DSTATE_an =
            ((rtb_TmpSignalConversionAtVeTISR_n_InputS >=
              KeRGNR_n_DeltaFromVturb_LSP) && (RGNR_ac_DW.UnitDelay_DSTATE_an));
    }

    /* End of Switch: '<S671>/Switch1' */
    if (RGNR_ac_DW.UnitDelay_DSTATE_an)
    {
        /* Switch: '<S651>/Switch1' incorporates:
         *  Lookup_n-D: '<S677>/Vector'
         *  Sum: '<S651>/Subtract'
         */
        VeRGNR_Cf_BlendOutFac = look1_iflf_binlca_16a(rtb_MinMax1, ((const
            float32 *)&(KxRGNR_r_BlendOutFromVturbDelta_RSP[0])), ((const
            float32 *)&(KtRGNR_r_BlendOutFromVturbDelta_RSP[0])), 5U);
    }
    else
    {
        /* Switch: '<S651>/Switch1' incorporates:
         *  Lookup_n-D: '<S676>/Vector'
         *  Sum: '<S651>/Subtract'
         */
        VeRGNR_Cf_BlendOutFac = look1_iflf_binlca_16a(rtb_MinMax1, ((const
            float32 *)&(KxRGNR_r_BlendOutFromVturbDelta_LSP[0])), ((const
            float32 *)&(KtRGNR_r_BlendOutFromVturbDelta_LSP[0])), 5U);
    }

    /* Sum: '<S670>/Sum2' incorporates:
     *  UnitDelay: '<S670>/Unit Delay'
     *  UnitDelay: '<S671>/Unit Delay'
     */
    rtb_MinMax1 = VeRGNR_Cf_BlendOutFac - VeRGNC_r_DeltVturbRampOut;

    /* Outputs for Atomic SubSystem: '<S670>/Limiter' */
    /* Switch: '<S681>/Switch1' incorporates:
     *  RelationalOperator: '<S681>/Relational Operator'
     */
    if (rtb_TmpSignalConversionAtVeINVR_T_MtrA_T < rtb_MinMax1)
    {
        /* VariantMerge generated from: '<S342>/VariantSource' */
        rtb_MinMax1 = rtb_TmpSignalConversionAtVeINVR_T_MtrA_T;
    }

    /* End of Switch: '<S681>/Switch1' */

    /* Switch: '<S681>/Switch' incorporates:
     *  RelationalOperator: '<S681>/Relational Operator1'
     */
    if (rtb_MinMax1 > rtb_TmpSignalConversionAtVeBPCR_T_BatMod)
    {
        rtb_TmpSignalConversionAtVeBPCR_T_BatMod = rtb_MinMax1;
    }

    /* End of Switch: '<S681>/Switch' */
    /* End of Outputs for SubSystem: '<S670>/Limiter' */

    /* Sum: '<S670>/Sum3' incorporates:
     *  UnitDelay: '<S670>/Unit Delay'
     */
    VeRGNC_r_DeltVturbRampOut = rtb_TmpSignalConversionAtVeBPCR_T_BatMod +
        VeRGNC_r_DeltVturbRampOut;
    (void)Rte_Read_VeTRNR_e_ILEStat_Value(&tmpRead_5);
    (void)Rte_Read_VeTINR_n_DisengageILE_Value(&tmpRead_7);

    /* Lookup_n-D: '<S648>/Vector' incorporates:
     *  Inport: '<Root>/VeTINR_n_DisengageILE'
     *  Inport: '<Root>/VeTRNR_e_ILEStat'
     */
    rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeVSDR_n_NTurbO - tmpRead_7, ((const float32 *)
          &(KxRGNR_r_BlendOutRgn[0])), ((const float32 *)&(KtRGNR_r_BlendOutRgn
           [0])), 6U);

    /* Switch: '<S649>/Switch1' incorporates:
     *  Constant: '<S557>/Constant Value'
     *  RelationalOperator: '<S649>/Relational Operator'
     */
    if (1.0F < rtb_TmpSignalConversionAtVeINVR_T_MtrA_T)
    {
        /* Switch: '<S790>/Switch1' */
        rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = 1.0F;
    }

    /* End of Switch: '<S649>/Switch1' */
    (void)Rte_Read_VeCTCR_r_MinCreepBlendingFactorBlended_Value(&tmpRead_8);
    if (KeRGNR_b_MinCreepBlendOvrrd)
    {
        /* VariantMerge generated from: '<S342>/VariantSource' incorporates:
         *  Constant: '<S663>/Calib'
         */
        rtb_MinMax1 = KeRGNR_r_MinCreepBlendOvrrdVal;
    }
    else
    {
        /* VariantMerge generated from: '<S342>/VariantSource' */
        rtb_MinMax1 = tmpRead_8;
    }

    /* Lookup_n-D: '<S664>/Vector' incorporates:
     *  Constant: '<S658>/Calib'
     *  Inport: '<Root>/VeCTCR_r_MinCreepBlendingFactorBlended'
     *  VariantMerge generated from: '<S342>/VariantSource'
     */
    VeRGNR_r_BlendOutCoast2Creep = look1_iflf_binlca_16a(rtb_MinMax1, ((const
        float32 *)&(KxRGNR_r_BlendOutCoast2Creep[0])), ((const float32 *)
        &(KtRGNR_r_BlendOutCoast2Creep[0])), 2U);

    /* Logic: '<S666>/OR1' incorporates:
     *  Constant: '<S659>/Calib'
     *  Constant: '<S660>/Calib'
     *  Logic: '<S666>/NOT'
     *  Logic: '<S666>/OR'
     *  UnitDelay: '<S666>/Unit Delay'
     */
    RGNR_ac_DW.UnitDelay_DSTATE_c4 = ((KeRGNR_r_BlendOutThrshld_LL >=
        rtb_MinMax1) || ((rtb_MinMax1 < KeRGNR_r_BlendInThrshld_UL) &&
                         (RGNR_ac_DW.UnitDelay_DSTATE_c4)));

    /* Lookup_n-D: '<S665>/Vector' incorporates:
     *  VariantMerge generated from: '<S342>/VariantSource'
     */
    VeRGNR_r_BlendOutCreep2Coast = look1_iflf_binlca_16a(rtb_MinMax1, ((const
        float32 *)&(KxRGNR_r_BlendOutCreep2Coast[0])), ((const float32 *)
        &(KtRGNR_r_BlendOutCreep2Coast[0])), 2U);
    if (RGNR_ac_DW.UnitDelay_DSTATE_c4)
    {
        rtb_MinMax1 = VeRGNR_r_BlendOutCoast2Creep;
    }
    else
    {
        rtb_MinMax1 = VeRGNR_r_BlendOutCreep2Coast;
    }

    /* Sum: '<S656>/Sum2' incorporates:
     *  UnitDelay: '<S656>/Unit Delay'
     */
    rtb_MinMax1 -= VeRGNC_Cf_MinCreepBlendingFactorRampOut;

    /* Outputs for Atomic SubSystem: '<S656>/Limiter' */
    /* Switch: '<S667>/Switch1' incorporates:
     *  Constant: '<S662>/Calib'
     *  RelationalOperator: '<S667>/Relational Operator'
     */
    if (KeRGNR_r_MinCreepBlendLU < rtb_MinMax1)
    {
        /* VariantMerge generated from: '<S342>/VariantSource' */
        rtb_MinMax1 = KeRGNR_r_MinCreepBlendLU;
    }

    /* End of Switch: '<S667>/Switch1' */

    /* Switch: '<S667>/Switch' incorporates:
     *  Constant: '<S661>/Calib'
     *  RelationalOperator: '<S667>/Relational Operator1'
     */
    if (rtb_MinMax1 <= KeRGNR_r_MinCreepBlendLD)
    {
        rtb_MinMax1 = KeRGNR_r_MinCreepBlendLD;
    }

    /* End of Switch: '<S667>/Switch' */
    /* End of Outputs for SubSystem: '<S656>/Limiter' */

    /* Sum: '<S656>/Sum3' incorporates:
     *  UnitDelay: '<S656>/Unit Delay'
     */
    VeRGNC_Cf_MinCreepBlendingFactorRampOut = rtb_MinMax1 +
        VeRGNC_Cf_MinCreepBlendingFactorRampOut;

    /* Switch: '<S649>/Switch' incorporates:
     *  Constant: '<S557>/Constant Value1'
     *  RelationalOperator: '<S649>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtVeINVR_T_MtrA_T <= 0.0F)
    {
        rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = 0.0F;
    }

    /* End of Switch: '<S649>/Switch' */

    /* VariantMerge generated from: '<S341>/VariantSource' incorporates:
     *  Constant: '<S647>/Calib'
     *  Inport: '<Root>/VeTRNR_e_ILEStat'
     */
    RGNR_ac_B.VariantMerge_For_Variant_Source_VariantS =
        ((((VeRGNR_Cf_MaxOvrLayRegnBrkTrqScale *
            rtb_VariantMerge_For_Variant_Source_V_cp) *
           VeRGNC_r_DeltVturbRampOut) * KaRGNR_K_RegenFactor_TCC[(tmpRead_5)]) *
         rtb_TmpSignalConversionAtVeINVR_T_MtrA_T)
        * VeRGNC_Cf_MinCreepBlendingFactorRampOut;

    /* End of Outputs for SubSystem: '<S652>/Limiter1' */
    /* End of Outputs for SubSystem: '<S652>/Limiter' */
    /* End of Outputs for SubSystem: '<S651>/Hysteresis2' */
    /* End of Outputs for SubSystem: '<S651>/GradientLimiter1' */
    /* End of Outputs for SubSystem: '<S557>/Limiter' */
    /* End of Outputs for SubSystem: '<S650>/Signal Latch On With Reset' */
    /* End of Outputs for SubSystem: '<S650>/GradientLimiter' */
#else

    /* VariantMerge generated from: '<S341>/VariantSource' incorporates:
     *  Constant: '<S558>/Constant Value1'
     *  SignalConversion generated from: '<S341>/VariantSource'
     */
    RGNR_ac_B.VariantMerge_For_Variant_Source_VariantS = 1.0F;

#endif

    /* End of Switch: '<S652>/Switch2' */

    /* Switch: '<S341>/Switch' incorporates:
     *  Constant: '<S548>/Calib'
     */
    if (HeRGNR_b_IdleProtectionDisable_C)
    {
        /* VariantMerge generated from: '<S342>/VariantSource' incorporates:
         *  Constant: '<S341>/Constant Value'
         */
        rtb_MinMax1 = 1.0F;
    }
    else
    {
        /* VariantMerge generated from: '<S342>/VariantSource' */
        rtb_MinMax1 = RGNR_ac_B.VariantMerge_For_Variant_Source_VariantS;
    }

    /* End of Switch: '<S341>/Switch' */

    /* Product: '<S341>/Multiplication3' */
    VeRGNC_r_RegenCapFact = ((((((((((VeRGNC_r_Deactv_RunCrankActive *
        VeRGNC_r_Deactv_TrnsfrCsRng) * VeRGNC_r_Deactv_VldtdTransRngSt) *
        VeRGNC_r_Deactv_ModeHTDRState) * VeRGNC_r_Deactv_VehSpdSigned) *
        VeRGNC_r_Deactv_TopVehSpd) * VeRGNC_r_Deactv_MtrBSpd) *
        VeRGNC_r_Deactv_BatPackSOC_Arb) * VeRGNC_r_Deactv_BatModTmp) *
        VeRGNR_r_Deactv_1stGearSel) * VeRGNC_r_RaceModeStsInhibit) * rtb_MinMax1;

    /* Switch: '<S545>/Switch1' */
    if (rtb_TmpSignalConversionAtVePDTR_b_EburnE)
    {
        /* Switch: '<S545>/Switch1' incorporates:
         *  Lookup_n-D: '<S559>/Vector'
         *  SignalConversion generated from: '<S3>/VeBPCR_Pct_HV_BatPackSOC_Arb'
         */
        VeRGNC_r_RegenCapFactOvrd = look1_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B, ((const float32 *)
              &(KxRGNR_r_RgnCapaSOCLmt[0])), ((const float32 *)
              &(KtRGNR_r_RgnCapaSOCLmtEburn[0])), 5U);
    }
    else
    {
        /* Switch: '<S545>/Switch1' */
        VeRGNC_r_RegenCapFactOvrd = VeRGNC_r_RegenCapFact;
    }

    /* End of Switch: '<S545>/Switch1' */

    /* Sum: '<S339>/Summation' incorporates:
     *  UnitDelay: '<S506>/Unit Delay'
     */
    VeRGNC_M_RgnAvailBeforeDeact = VeRGNC_M_RegenCapRaw -
        RGNR_ac_DW.UnitDelay_DSTATE_e;

    /* Switch: '<S508>/Switch1' */
    if (rtb_TmpSignalConversionAtVeAECR_b_AeCoas)
    {
        /* Switch: '<S508>/Switch1' incorporates:
         *  Constant: '<S513>/Calib'
         */
        VeRGNC_M_RgnAvailBeforeDecelLimit = KeRGNC_M_OvrRdAvailRgnOutTrq;
    }
    else
    {
        /* Switch: '<S508>/Switch1' incorporates:
         *  Product: '<S339>/Multiplication3'
         */
        VeRGNC_M_RgnAvailBeforeDecelLimit = VeRGNC_r_RegenCapFactOvrd *
            VeRGNC_M_RgnAvailBeforeDeact;
    }

    /* End of Switch: '<S508>/Switch1' */

    /* Switch: '<S509>/Switch1' incorporates:
     *  Constant: '<S339>/Constant Value6'
     *  Constant: '<S512>/Calib'
     *  RelationalOperator: '<S339>/Equal1'
     */
    if (((sint32)KeRGNC_Cnt_OvrRdAvailRgnTrq) == 43681)
    {
        /* Switch: '<S509>/Switch1' incorporates:
         *  Constant: '<S514>/Calib'
         */
        VeRGNC_M_RgnAvailBeforeDecelLimit_Frnt =
            KeRGNC_M_OvrRdAvailRgnOutTrq_Frnt;
    }
    else
    {
        /* Switch: '<S509>/Switch1' incorporates:
         *  Product: '<S339>/Multiplication1'
         */
        VeRGNC_M_RgnAvailBeforeDecelLimit_Frnt = VeRGNC_r_RegenCapFactOvrd *
            VeRGNC_M_RegenCapFrnt_Raw_Avail;
    }

    /* End of Switch: '<S509>/Switch1' */

    /* Switch: '<S510>/Switch1' incorporates:
     *  Constant: '<S339>/Constant Value1'
     *  Constant: '<S512>/Calib'
     *  RelationalOperator: '<S339>/Equal2'
     */
    if (((sint32)KeRGNC_Cnt_OvrRdAvailRgnTrq) == 43685)
    {
        /* Switch: '<S510>/Switch1' incorporates:
         *  Constant: '<S516>/Calib'
         */
        VeRGNC_M_RgnAvailBeforeDecelLimit_Rear =
            KeRGNC_M_OvrRdAvailRgnOutTrq_Rear;
    }
    else
    {
        /* Switch: '<S510>/Switch1' incorporates:
         *  Product: '<S339>/Multiplication2'
         */
        VeRGNC_M_RgnAvailBeforeDecelLimit_Rear = VeRGNC_r_RegenCapFactOvrd *
            VeRGNC_M_RegenCapRear_Raw_Avail;
    }

    /* End of Switch: '<S510>/Switch1' */

    /* Switch: '<S511>/Switch1' */
#if Rte_SysCon_Variant_RGNR_1

    if (rtb_TmpSignalConversionAtVeAECR_b_AeCoas)
    {
        /* Switch: '<S511>/Switch1' incorporates:
         *  Constant: '<S515>/Calib'
         */
        VeRGNC_M_RgnAvailBeforeDecelLimit_Lin = KeRGNC_M_OvrRdAvailRgnOutTrq_Lin;
    }
    else
    {
        /* Switch: '<S511>/Switch1' incorporates:
         *  Product: '<S339>/Multiplication4'
         *  Sum: '<S339>/Summation1'
         *  UnitDelay: '<S507>/Unit Delay'
         */
        VeRGNC_M_RgnAvailBeforeDecelLimit_Lin =
            (rtb_VariantMerge_For_Variant_Source_Vari -
             RGNR_ac_DW.UnitDelay_DSTATE_h) * VeRGNC_r_RegenCapFactOvrd;
    }

#endif

    /* End of Switch: '<S511>/Switch1' */

    /* DataTypeConversion: '<S522>/Data Type Conversion' incorporates:
     *  Constant: '<S535>/Calib'
     *  Inport: '<Root>/VeTINR_e_TCM_ActiveHybridGear'
     *  Logic: '<S522>/Logical'
     *  Lookup_n-D: '<S531>/Vector'
     *  Selector: '<S522>/Selector'
     *  SignalConversion generated from: '<S339>/Variant Source'
     */
#if Rte_SysCon_Variant_RGNR_2

    /* Outputs for Atomic SubSystem: '<S522>/GradientLimiter' */
    /* Outputs for Enabled SubSystem: '<S522>/Subsystem' */
    /* Outputs for Enabled SubSystem: '<S522>/Subsystem1' */
    /* Outputs for Atomic SubSystem: '<S522>/LowpassT Reset Enabled' */
    /* Outputs for Atomic SubSystem: '<S522>/EdgeRising' */
    /* Logic: '<S532>/AND' incorporates:
     *  Logic: '<S532>/OR1'
     *  UnitDelay: '<S532>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeAECR_b_AeCoas = !RGNR_ac_DW.UnitDelay_DSTATE_cb;

    /* Update for UnitDelay: '<S532>/Unit Delay' incorporates:
     *  Constant: '<S522>/TRUE Constant'
     */
    RGNR_ac_DW.UnitDelay_DSTATE_cb = true;

    /* Switch: '<S539>/Switch' incorporates:
     *  Constant: '<S534>/Calib'
     *  Constant: '<S538>/Calib'
     *  MinMax: '<S539>/Maximum'
     *  Product: '<S539>/Multiplication'
     *  Product: '<S539>/Multiplication1'
     *  Sum: '<S539>/Subtraction'
     *  Sum: '<S539>/Summation'
     *  UnitDelay: '<S539>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeAECR_b_AeCoas)
    {
        RGNR_ac_DW.UnitDelay_DSTATE_c = rtb_TmpSignalConversionAtVeATRR_M_DrvInt;
    }
    else
    {
        RGNR_ac_DW.UnitDelay_DSTATE_c +=
            ((rtb_TmpSignalConversionAtVeATRR_M_DrvInt -
              RGNR_ac_DW.UnitDelay_DSTATE_c) * HeRGNR_t_DT) * (1.0F / fmaxf
            (KeRGNR_t_BrkTrqLowFltrFact, HeRGNR_t_DT));
    }

    /* End of Switch: '<S539>/Switch' */
    (void)Rte_Read_VeTINR_e_TCM_ActiveHybridGear_Value(&tmpRead_e);

    /* Outputs for Enabled SubSystem: '<S522>/Subsystem1' incorporates:
     *  EnablePort: '<S541>/Enable'
     */
    /* Outputs for Enabled SubSystem: '<S522>/Subsystem' incorporates:
     *  EnablePort: '<S540>/Enable'
     */
    if (KaRGNR_b_SelGearSchRegVBrk[(tmpRead_e)])
    {
        /* Merge: '<S522>/Merge' incorporates:
         *  Lookup_n-D: '<S544>/Vector'
         *  SignalConversion generated from: '<S3>/VeCSVR_v_VehSpdSigned'
         *  Switch: '<S539>/Switch'
         *  UnitDelay: '<S539>/Unit Delay'
         */
        rtb_MinMax1 = look2_iflf_binlca_16a(RGNR_ac_DW.UnitDelay_DSTATE_c,
            rtb_TmpSignalConversionAtVeCSVR_v_VehSpd, ((const float32 *)
            &(KxRGNR_M_RgnCapLimit_BrkSpd[0])), ((const float32 *)
            &(KyRGNR_M_RgnCapLimit_BrkSpd[0])), ((const float32 *)
            &(KtRGNR_M_RgnCapLimit_BrkSpd[0])), RGNR_ac_ConstP.Vector_maxIndex,
            6U);
    }
    else
    {
        /* Merge: '<S522>/Merge' incorporates:
         *  Lookup_n-D: '<S543>/Vector'
         *  SignalConversion generated from: '<S3>/VeCSVR_v_VehSpdSigned'
         */
        rtb_MinMax1 = look1_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVeCSVR_v_VehSpd, ((const float32 *)
              &(KxRGNR_M_RgnCapLimit_VehSpd[0])), ((const float32 *)
              &(KtRGNR_M_RgnCapLimit_VehSpd[0])), 8U);
    }

    /* Sum: '<S533>/Sum2' incorporates:
     *  Constant: '<S535>/Calib'
     *  Inport: '<Root>/VeTINR_e_TCM_ActiveHybridGear'
     *  UnitDelay: '<S533>/Unit Delay'
     */
    rtb_MinMax1 -= RGNR_ac_DW.UnitDelay_DSTATE_hp;

    /* Outputs for Atomic SubSystem: '<S533>/Limiter' */
    /* Switch: '<S542>/Switch1' incorporates:
     *  Constant: '<S537>/Calib'
     *  RelationalOperator: '<S542>/Relational Operator'
     */
    if (KeRGNR_dM_MaxRegenLU < rtb_MinMax1)
    {
        /* VariantMerge generated from: '<S342>/VariantSource' */
        rtb_MinMax1 = KeRGNR_dM_MaxRegenLU;
    }

    /* End of Switch: '<S542>/Switch1' */

    /* Switch: '<S542>/Switch' incorporates:
     *  Constant: '<S536>/Calib'
     *  RelationalOperator: '<S542>/Relational Operator1'
     */
    if (rtb_MinMax1 <= KeRGNR_dM_MaxRegenLD)
    {
        rtb_MinMax1 = KeRGNR_dM_MaxRegenLD;
    }

    /* End of Switch: '<S542>/Switch' */
    /* End of Outputs for SubSystem: '<S533>/Limiter' */

    /* Sum: '<S533>/Sum3' incorporates:
     *  UnitDelay: '<S533>/Unit Delay'
     */
    RGNR_ac_DW.UnitDelay_DSTATE_hp += rtb_MinMax1;

    /* VariantMerge generated from: '<S342>/VariantSource' incorporates:
     *  UnitDelay: '<S533>/Unit Delay'
     */
    rtb_MinMax1 = RGNR_ac_DW.UnitDelay_DSTATE_hp;

    /* End of Outputs for SubSystem: '<S522>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S522>/LowpassT Reset Enabled' */
    /* End of Outputs for SubSystem: '<S522>/Subsystem1' */
    /* End of Outputs for SubSystem: '<S522>/Subsystem' */
    /* End of Outputs for SubSystem: '<S522>/GradientLimiter' */
#else

    /* VariantMerge generated from: '<S342>/VariantSource' incorporates:
     *  Lookup_n-D: '<S531>/Vector'
     *  SignalConversion generated from: '<S3>/VeCSVR_v_VehSpdSigned'
     */
    rtb_MinMax1 = look1_iflf_binlca_16a(rtb_TmpSignalConversionAtVeCSVR_v_VehSpd,
        ((const float32 *)&(KxRGNR_M_RgnCapLimit_VehSpd[0])), ((const float32 *)
        &(KtRGNR_M_RgnCapLimit_VehSpd[0])), 8U);

#endif

    /* End of DataTypeConversion: '<S522>/Data Type Conversion' */

    /* Switch: '<S339>/Switch3' */
    if (rtb_TmpSignalConversionAtVePDTR_b_EburnE)
    {
        /* VariantMerge generated from: '<S342>/VariantSource' incorporates:
         *  Constant: '<S517>/Calib'
         */
        rtb_MinMax1 = KeRGNR_M_RgnCapLimit_VehSpd_FrontOvrd;
    }

    /* End of Switch: '<S339>/Switch3' */

    /* MinMax: '<S339>/MinMax1' */
    VeRGNC_M_RgnAvailAfterDecelLimit = fmaxf(rtb_MinMax1,
        VeRGNC_M_RgnAvailBeforeDecelLimit);

    /* Switch: '<S339>/Switch1' */
    if (rtb_TmpSignalConversionAtVePDTR_b_EburnE)
    {
        /* VariantMerge generated from: '<S208>/VariantSource1' incorporates:
         *  Constant: '<S517>/Calib'
         */
        rtb_VariantMerge_For_Variant_Source_V_cp =
            KeRGNR_M_RgnCapLimit_VehSpd_FrontOvrd;
    }
    else
    {
        /* VariantMerge generated from: '<S208>/VariantSource1' incorporates:
         *  Lookup_n-D: '<S519>/Vector'
         *  SignalConversion generated from: '<S3>/VeCSVR_v_VehSpdSigned'
         */
        rtb_VariantMerge_For_Variant_Source_V_cp = look1_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVeCSVR_v_VehSpd, ((const float32 *)
              &(KxRGNR_M_RgnCapLimit_VehSpd_Frnt[0])), ((const float32 *)
              &(KtRGNR_M_RgnCapLimit_VehSpd_Frnt[0])), 8U);
    }

    /* End of Switch: '<S339>/Switch1' */

    /* MinMax: '<S339>/MinMax2' */
    VeRGNC_M_RgnAvailAfterDecelLimit_Frnt = fmaxf
        (rtb_VariantMerge_For_Variant_Source_V_cp,
         VeRGNC_M_RgnAvailBeforeDecelLimit_Frnt);

    /* Switch: '<S339>/Switch2' */
    if (rtb_TmpSignalConversionAtVePDTR_b_EburnE)
    {
        /* VariantMerge generated from: '<S208>/VariantSource1' incorporates:
         *  Constant: '<S518>/Calib'
         */
        rtb_VariantMerge_For_Variant_Source_V_cp =
            KeRGNR_M_RgnCapLimit_VehSpd_RearOvrd;
    }
    else
    {
        /* VariantMerge generated from: '<S208>/VariantSource1' incorporates:
         *  Lookup_n-D: '<S520>/Vector'
         *  SignalConversion generated from: '<S3>/VeCSVR_v_VehSpdSigned'
         */
        rtb_VariantMerge_For_Variant_Source_V_cp = look1_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVeCSVR_v_VehSpd, ((const float32 *)
              &(KxRGNR_M_RgnCapLimit_VehSpd_Rear[0])), ((const float32 *)
              &(KtRGNR_M_RgnCapLimit_VehSpd_Rear[0])), 8U);
    }

    /* End of Switch: '<S339>/Switch2' */

    /* MinMax: '<S339>/MinMax3' */
    VeRGNC_M_RgnAvailAfterDecelLimit_Rear = fmaxf
        (rtb_VariantMerge_For_Variant_Source_V_cp,
         VeRGNC_M_RgnAvailBeforeDecelLimit_Rear);

    /* MinMax: '<S339>/MinMax4' incorporates:
     *  MinMax: '<S339>/Minimum3'
     *  SignalConversion generated from: '<S339>/VariantSource'
     */
#if Rte_SysCon_Variant_RGNR_1

    /* MinMax: '<S339>/MinMax4' */
    VeRGNC_M_RgnAvailAfterDecelLimit_Lin = fmaxf(rtb_MinMax1,
        VeRGNC_M_RgnAvailBeforeDecelLimit_Lin);

    /* VariantMerge generated from: '<S339>/VariantSource' incorporates:
     *  Constant: '<S339>/Constant Value4'
     */
    rtb_VariantMerge_For_Variant_Source_Va_n = fminf
        (VeRGNC_M_RgnAvailAfterDecelLimit_Lin, 0.0F);

#else

    /* VariantMerge generated from: '<S339>/VariantSource' incorporates:
     *  SignalConversion generated from: '<S339>/VariantSource'
     */
    rtb_VariantMerge_For_Variant_Source_Va_n =
        rtb_VariantMerge_For_Variant_Source_Vari;

#endif

    /* End of MinMax: '<S339>/MinMax4' */

    /* Switch: '<S550>/Switch' incorporates:
     *  Constant: '<S550>/Zero1'
     *  RelationalOperator: '<S550>/Relational Operator'
     */
    if (rtb_Switch6_idx_1 < 1.0F)
    {
        /* Switch: '<S217>/Switch3' */
        rtb_Switch6_idx_1 = 1.0F;
    }

    /* End of Switch: '<S550>/Switch' */

    /* Sum: '<S550>/Subtraction2' incorporates:
     *  Constant: '<S550>/Zero1'
     *  UnitDelay: '<S550>/Unit Delay'
     */
    RGNR_ac_DW.UnitDelay_DSTATE_e3 = rtb_Switch6_idx_1 - 1.0F;

    /* Outputs for Atomic SubSystem: '<S342>/EdgeRising' */
    /* Logic: '<S698>/OR1' incorporates:
     *  UnitDelay: '<S698>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVePDTR_b_EburnE = !RGNR_ac_DW.UnitDelay_DSTATE_pk;

    /* Update for UnitDelay: '<S698>/Unit Delay' incorporates:
     *  Constant: '<S342>/TRUE Constant'
     */
    RGNR_ac_DW.UnitDelay_DSTATE_pk = true;

    /* End of Outputs for SubSystem: '<S342>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S342>/EdgeRising1' */
    /* Logic: '<S699>/OR1' incorporates:
     *  UnitDelay: '<S699>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeAECR_b_AeCoas = !RGNR_ac_DW.UnitDelay_DSTATE_c5;

    /* Update for UnitDelay: '<S699>/Unit Delay' incorporates:
     *  Constant: '<S342>/TRUE Constant1'
     */
    RGNR_ac_DW.UnitDelay_DSTATE_c5 = true;

    /* End of Outputs for SubSystem: '<S342>/EdgeRising1' */
#if Rte_SysCon_Variant_RGNR_1

    /* Outputs for Atomic SubSystem: '<S342>/EdgeRising2' */
    /* Logic: '<S700>/AND' incorporates:
     *  Logic: '<S700>/OR1'
     *  UnitDelay: '<S700>/Unit Delay'
     */
    rtb_AND_op = !RGNR_ac_DW.UnitDelay_DSTATE_e4;

    /* Update for UnitDelay: '<S700>/Unit Delay' incorporates:
     *  Constant: '<S342>/TRUE Constant2'
     */
    RGNR_ac_DW.UnitDelay_DSTATE_e4 = true;

    /* End of Outputs for SubSystem: '<S342>/EdgeRising2' */
#endif

    /* Outputs for Atomic SubSystem: '<S342>/EdgeRising3' */
    /* Logic: '<S701>/OR1' incorporates:
     *  UnitDelay: '<S701>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeSTRR_b_EngOnR = !RGNR_ac_DW.UnitDelay_DSTATE_ju;

    /* Update for UnitDelay: '<S701>/Unit Delay' incorporates:
     *  Constant: '<S342>/TRUE Constant3'
     */
    RGNR_ac_DW.UnitDelay_DSTATE_ju = true;

    /* End of Outputs for SubSystem: '<S342>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S342>/EdgeRising4' */
    /* Logic: '<S702>/OR1' incorporates:
     *  UnitDelay: '<S702>/Unit Delay'
     */
    rtb_OR1_lo = !RGNR_ac_DW.UnitDelay_DSTATE_au;

    /* Update for UnitDelay: '<S702>/Unit Delay' incorporates:
     *  Constant: '<S342>/TRUE Constant4'
     */
    RGNR_ac_DW.UnitDelay_DSTATE_au = true;

    /* End of Outputs for SubSystem: '<S342>/EdgeRising4' */

    /* Lookup_n-D: '<S710>/Vector' incorporates:
     *  SignalConversion generated from: '<S3>/VeTINR_r_TCMTransTrqRatio'
     */
    rtb_VariantMerge_For_Variant_Source_Vari = look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeTINR_r_TCMTra, ((const float32 *)
          &(KxRGNR_dM_RgnRmpUpAftrPdlRlsLookUp[0])), ((const float32 *)
          &(KtRGNR_dM_RgnRmpUpAftrPdlRlsLookUp[0])), 9U);

    /* Lookup_n-D: '<S709>/Vector' incorporates:
     *  SignalConversion generated from: '<S3>/VeTINR_r_TCMTransTrqRatio'
     */
    rtb_TmpSignalConversionAtVeCSVR_v_VehSpd = look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeTINR_r_TCMTra, ((const float32 *)
          &(KxRGNR_dM_RgnRmpDnAftrPdlRlsLookUp[0])), ((const float32 *)
          &(KtRGNR_dM_RgnRmpDnAftrPdlRlsLookUp[0])), 9U);

    /* Outputs for Atomic SubSystem: '<S342>/GradientLimiter1' */
    /* Sum: '<S703>/Sum2' incorporates:
     *  UnitDelay: '<S455>/Unit Delay'
     *  UnitDelay: '<S703>/Unit Delay'
     */
    rtb_MinMax1 = RGNR_ac_DW.UnitDelay_DSTATE_j - RGNR_ac_DW.UnitDelay_DSTATE_p;

    /* Outputs for Atomic SubSystem: '<S703>/Limiter' */
    /* Switch: '<S726>/Switch1' incorporates:
     *  RelationalOperator: '<S726>/Relational Operator'
     */
    if (rtb_VariantMerge_For_Variant_Source_Vari < rtb_MinMax1)
    {
        /* VariantMerge generated from: '<S342>/VariantSource' */
        rtb_MinMax1 = rtb_VariantMerge_For_Variant_Source_Vari;
    }

    /* End of Switch: '<S726>/Switch1' */

    /* Switch: '<S726>/Switch' incorporates:
     *  RelationalOperator: '<S726>/Relational Operator1'
     */
    if (rtb_MinMax1 <= rtb_TmpSignalConversionAtVeCSVR_v_VehSpd)
    {
        rtb_MinMax1 = rtb_TmpSignalConversionAtVeCSVR_v_VehSpd;
    }

    /* End of Switch: '<S726>/Switch' */
    /* End of Outputs for SubSystem: '<S703>/Limiter' */

    /* Sum: '<S703>/Sum3' incorporates:
     *  UnitDelay: '<S703>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = rtb_MinMax1 +
        RGNR_ac_DW.UnitDelay_DSTATE_p;

    /* Outputs for Atomic SubSystem: '<S703>/Limiter1' */
    /* Switch: '<S727>/Switch1' incorporates:
     *  Constant: '<S342>/Constant Value1'
     *  RelationalOperator: '<S727>/Relational Operator'
     */
    if (99999.0F < rtb_TmpSignalConversionAtVeINVR_T_MtrA_T)
    {
        /* Switch: '<S790>/Switch1' */
        rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = 99999.0F;
    }

    /* End of Switch: '<S727>/Switch1' */

    /* Switch: '<S727>/Switch' incorporates:
     *  RelationalOperator: '<S727>/Relational Operator1'
     *  UnitDelay: '<S703>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeINVR_T_MtrA_T >
            rtb_TmpSignalConversionAtVeATRR_M_MinTra)
    {
        RGNR_ac_DW.UnitDelay_DSTATE_p = rtb_TmpSignalConversionAtVeINVR_T_MtrA_T;
    }
    else
    {
        RGNR_ac_DW.UnitDelay_DSTATE_p = rtb_TmpSignalConversionAtVeATRR_M_MinTra;
    }

    /* End of Switch: '<S727>/Switch' */
    /* End of Outputs for SubSystem: '<S703>/Limiter1' */
    /* End of Outputs for SubSystem: '<S342>/GradientLimiter1' */

    /* Outputs for Atomic SubSystem: '<S342>/GradientLimiter2' */
    /* Sum: '<S704>/Sum2' incorporates:
     *  Constant: '<S339>/Constant Value2'
     *  MinMax: '<S339>/Minimum'
     *  UnitDelay: '<S704>/Unit Delay'
     */
    rtb_MinMax1 = fminf(VeRGNC_M_RgnAvailAfterDecelLimit, 0.0F) -
        RGNR_ac_DW.UnitDelay_DSTATE_dd;

    /* Outputs for Atomic SubSystem: '<S704>/Limiter' */
    /* Switch: '<S728>/Switch1' incorporates:
     *  RelationalOperator: '<S728>/Relational Operator'
     */
    if (rtb_VariantMerge_For_Variant_Source_Vari < rtb_MinMax1)
    {
        /* VariantMerge generated from: '<S342>/VariantSource' */
        rtb_MinMax1 = rtb_VariantMerge_For_Variant_Source_Vari;
    }

    /* End of Switch: '<S728>/Switch1' */

    /* Switch: '<S728>/Switch' incorporates:
     *  RelationalOperator: '<S728>/Relational Operator1'
     */
    if (rtb_MinMax1 <= rtb_TmpSignalConversionAtVeCSVR_v_VehSpd)
    {
        rtb_MinMax1 = rtb_TmpSignalConversionAtVeCSVR_v_VehSpd;
    }

    /* End of Switch: '<S728>/Switch' */
    /* End of Outputs for SubSystem: '<S704>/Limiter' */

    /* Sum: '<S704>/Sum3' incorporates:
     *  UnitDelay: '<S704>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = rtb_MinMax1 +
        RGNR_ac_DW.UnitDelay_DSTATE_dd;

    /* Outputs for Atomic SubSystem: '<S704>/Limiter1' */
    /* Switch: '<S729>/Switch1' incorporates:
     *  Constant: '<S342>/Constant Value2'
     *  RelationalOperator: '<S729>/Relational Operator'
     */
    if (99999.0F < rtb_TmpSignalConversionAtVeINVR_T_MtrA_T)
    {
        /* Switch: '<S790>/Switch1' */
        rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = 99999.0F;
    }

    /* End of Switch: '<S729>/Switch1' */

    /* Switch: '<S729>/Switch' incorporates:
     *  RelationalOperator: '<S729>/Relational Operator1'
     *  UnitDelay: '<S704>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeINVR_T_MtrA_T > VeRGNC_M_RegenCapLim)
    {
        RGNR_ac_DW.UnitDelay_DSTATE_dd =
            rtb_TmpSignalConversionAtVeINVR_T_MtrA_T;
    }
    else
    {
        RGNR_ac_DW.UnitDelay_DSTATE_dd = VeRGNC_M_RegenCapLim;
    }

    /* End of Switch: '<S729>/Switch' */
    /* End of Outputs for SubSystem: '<S704>/Limiter1' */
    /* End of Outputs for SubSystem: '<S342>/GradientLimiter2' */

    /* Outputs for Atomic SubSystem: '<S342>/GradientLimiter3' */
    /* Sum: '<S705>/Sum2' incorporates:
     *  Constant: '<S339>/Constant Value3'
     *  MinMax: '<S339>/Minimum1'
     *  UnitDelay: '<S705>/Unit Delay'
     */
    rtb_MinMax1 = fminf(VeRGNC_M_RgnAvailAfterDecelLimit_Frnt, 0.0F) -
        RGNR_ac_DW.UnitDelay_DSTATE_df;

    /* Outputs for Atomic SubSystem: '<S705>/Limiter' */
    /* Switch: '<S730>/Switch1' incorporates:
     *  RelationalOperator: '<S730>/Relational Operator'
     */
    if (rtb_VariantMerge_For_Variant_Source_Vari < rtb_MinMax1)
    {
        /* VariantMerge generated from: '<S342>/VariantSource' */
        rtb_MinMax1 = rtb_VariantMerge_For_Variant_Source_Vari;
    }

    /* End of Switch: '<S730>/Switch1' */

    /* Switch: '<S730>/Switch' incorporates:
     *  RelationalOperator: '<S730>/Relational Operator1'
     */
    if (rtb_MinMax1 <= rtb_TmpSignalConversionAtVeCSVR_v_VehSpd)
    {
        rtb_MinMax1 = rtb_TmpSignalConversionAtVeCSVR_v_VehSpd;
    }

    /* End of Switch: '<S730>/Switch' */
    /* End of Outputs for SubSystem: '<S705>/Limiter' */

    /* Sum: '<S705>/Sum3' incorporates:
     *  UnitDelay: '<S705>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = rtb_MinMax1 +
        RGNR_ac_DW.UnitDelay_DSTATE_df;

    /* Outputs for Atomic SubSystem: '<S705>/Limiter1' */
    /* Switch: '<S731>/Switch1' incorporates:
     *  Constant: '<S342>/Constant Value3'
     *  RelationalOperator: '<S731>/Relational Operator'
     */
    if (99999.0F < rtb_TmpSignalConversionAtVeINVR_T_MtrA_T)
    {
        /* Switch: '<S790>/Switch1' */
        rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = 99999.0F;
    }

    /* End of Switch: '<S731>/Switch1' */

    /* Switch: '<S731>/Switch' incorporates:
     *  RelationalOperator: '<S731>/Relational Operator1'
     *  UnitDelay: '<S705>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeINVR_T_MtrA_T > rtb_MinMax_m)
    {
        RGNR_ac_DW.UnitDelay_DSTATE_df =
            rtb_TmpSignalConversionAtVeINVR_T_MtrA_T;
    }
    else
    {
        RGNR_ac_DW.UnitDelay_DSTATE_df = rtb_MinMax_m;
    }

    /* End of Switch: '<S731>/Switch' */
    /* End of Outputs for SubSystem: '<S705>/Limiter1' */
    /* End of Outputs for SubSystem: '<S342>/GradientLimiter3' */

    /* Outputs for Atomic SubSystem: '<S342>/GradientLimiter4' */
    /* Sum: '<S706>/Sum2' incorporates:
     *  Constant: '<S339>/Constant Value5'
     *  MinMax: '<S339>/Minimum2'
     *  UnitDelay: '<S706>/Unit Delay'
     */
    rtb_MinMax1 = fminf(VeRGNC_M_RgnAvailAfterDecelLimit_Rear, 0.0F) -
        RGNR_ac_DW.UnitDelay_DSTATE_b;

    /* Outputs for Atomic SubSystem: '<S706>/Limiter' */
    /* Switch: '<S732>/Switch1' incorporates:
     *  RelationalOperator: '<S732>/Relational Operator'
     */
    if (rtb_VariantMerge_For_Variant_Source_Vari < rtb_MinMax1)
    {
        /* VariantMerge generated from: '<S342>/VariantSource' */
        rtb_MinMax1 = rtb_VariantMerge_For_Variant_Source_Vari;
    }

    /* End of Switch: '<S732>/Switch1' */

    /* Switch: '<S732>/Switch' incorporates:
     *  RelationalOperator: '<S732>/Relational Operator1'
     */
    if (rtb_MinMax1 > rtb_TmpSignalConversionAtVeCSVR_v_VehSpd)
    {
        rtb_TmpSignalConversionAtVeATRR_M_MinTra = rtb_MinMax1;
    }
    else
    {
        rtb_TmpSignalConversionAtVeATRR_M_MinTra =
            rtb_TmpSignalConversionAtVeCSVR_v_VehSpd;
    }

    /* End of Switch: '<S732>/Switch' */
    /* End of Outputs for SubSystem: '<S706>/Limiter' */

    /* Sum: '<S706>/Sum3' incorporates:
     *  UnitDelay: '<S706>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeINVR_T_MtrA_T =
        rtb_TmpSignalConversionAtVeATRR_M_MinTra + RGNR_ac_DW.UnitDelay_DSTATE_b;

    /* Outputs for Atomic SubSystem: '<S706>/Limiter1' */
    /* Switch: '<S733>/Switch1' incorporates:
     *  Constant: '<S342>/Constant Value4'
     *  RelationalOperator: '<S733>/Relational Operator'
     */
    if (99999.0F < rtb_TmpSignalConversionAtVeINVR_T_MtrA_T)
    {
        /* Switch: '<S790>/Switch1' */
        rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = 99999.0F;
    }

    /* End of Switch: '<S733>/Switch1' */

    /* Switch: '<S733>/Switch' incorporates:
     *  RelationalOperator: '<S733>/Relational Operator1'
     *  UnitDelay: '<S706>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeINVR_T_MtrA_T > rtb_MinMax4)
    {
        RGNR_ac_DW.UnitDelay_DSTATE_b = rtb_TmpSignalConversionAtVeINVR_T_MtrA_T;
    }
    else
    {
        RGNR_ac_DW.UnitDelay_DSTATE_b = rtb_MinMax4;
    }

    /* End of Switch: '<S733>/Switch' */
    /* End of Outputs for SubSystem: '<S706>/Limiter1' */
    /* End of Outputs for SubSystem: '<S342>/GradientLimiter4' */
#if Rte_SysCon_Variant_RGNR_1

    /* Outputs for Atomic SubSystem: '<S342>/GradientLimiter5' */
    /* Sum: '<S707>/Sum2' incorporates:
     *  UnitDelay: '<S707>/Unit Delay'
     */
    rtb_MinMax1 = rtb_VariantMerge_For_Variant_Source_Va_n -
        RGNR_ac_DW.UnitDelay_DSTATE_l;

    /* Outputs for Atomic SubSystem: '<S707>/Limiter' */
    /* Switch: '<S734>/Switch1' incorporates:
     *  RelationalOperator: '<S734>/Relational Operator'
     */
    if (rtb_VariantMerge_For_Variant_Source_Vari < rtb_MinMax1)
    {
        /* VariantMerge generated from: '<S342>/VariantSource' */
        rtb_MinMax1 = rtb_VariantMerge_For_Variant_Source_Vari;
    }

    /* End of Switch: '<S734>/Switch1' */

    /* Switch: '<S734>/Switch' incorporates:
     *  RelationalOperator: '<S734>/Relational Operator1'
     */
    if (rtb_MinMax1 > rtb_TmpSignalConversionAtVeCSVR_v_VehSpd)
    {
        rtb_TmpSignalConversionAtVeCSVR_v_VehSpd = rtb_MinMax1;
    }

    /* End of Switch: '<S734>/Switch' */
    /* End of Outputs for SubSystem: '<S707>/Limiter' */

    /* Sum: '<S707>/Sum3' incorporates:
     *  UnitDelay: '<S707>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeINVR_T_MtrA_T =
        rtb_TmpSignalConversionAtVeCSVR_v_VehSpd + RGNR_ac_DW.UnitDelay_DSTATE_l;

    /* Outputs for Atomic SubSystem: '<S707>/Limiter1' */
    /* Switch: '<S735>/Switch1' incorporates:
     *  Constant: '<S342>/Constant Value5'
     *  RelationalOperator: '<S735>/Relational Operator'
     */
    if (99999.0F < rtb_TmpSignalConversionAtVeINVR_T_MtrA_T)
    {
        /* Switch: '<S790>/Switch1' */
        rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = 99999.0F;
    }

    /* End of Switch: '<S735>/Switch1' */

    /* Switch: '<S735>/Switch' incorporates:
     *  RelationalOperator: '<S735>/Relational Operator1'
     *  UnitDelay: '<S707>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeINVR_T_MtrA_T > rtb_MinMax3_a)
    {
        RGNR_ac_DW.UnitDelay_DSTATE_l = rtb_TmpSignalConversionAtVeINVR_T_MtrA_T;
    }
    else
    {
        RGNR_ac_DW.UnitDelay_DSTATE_l = rtb_MinMax3_a;
    }

    /* End of Switch: '<S735>/Switch' */
    /* End of Outputs for SubSystem: '<S707>/Limiter1' */
    /* End of Outputs for SubSystem: '<S342>/GradientLimiter5' */
#endif

    /* Lookup_n-D: '<S711>/Vector' incorporates:
     *  SignalConversion generated from: '<S3>/VeTINR_r_TCMTransTrqRatio'
     */
    rtb_MinMax3_a = look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeTINR_r_TCMTra, ((const float32 *)
          &(KxRGNR_t_RgnToAvail[0])), ((const float32 *)&(KtRGNR_t_RgnToAvail[0])),
         9U);

    /* Outputs for Atomic SubSystem: '<S342>/LowpassT Reset Enabled' */
    /* Outputs for Atomic SubSystem: '<S342>/EdgeRising' */
    /* Switch: '<S713>/Switch' incorporates:
     *  Constant: '<S708>/Calib'
     *  Logic: '<S698>/AND'
     *  Lookup_n-D: '<S712>/Vector'
     *  MinMax: '<S713>/Maximum'
     *  Product: '<S713>/Multiplication'
     *  Product: '<S713>/Multiplication1'
     *  SignalConversion generated from: '<S3>/VeTINR_r_TCMTransTrqRatio'
     *  Sum: '<S713>/Subtraction'
     *  Sum: '<S713>/Summation'
     *  UnitDelay: '<S703>/Unit Delay'
     *  UnitDelay: '<S713>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVePDTR_b_EburnE)
    {
        RGNR_ac_DW.UnitDelay_DSTATE_fz = RGNR_ac_DW.UnitDelay_DSTATE_p;
    }
    else
    {
        RGNR_ac_DW.UnitDelay_DSTATE_fz += ((RGNR_ac_DW.UnitDelay_DSTATE_p -
            RGNR_ac_DW.UnitDelay_DSTATE_fz) * HeRGNR_t_DT) * (1.0F / fmaxf
            (look1_iflf_binlca_16a(rtb_TmpSignalConversionAtVeTINR_r_TCMTra, ((
            const float32 *)&(KxRGNR_t_ToMin4ECMFltTime[0])), ((const float32 *)
            &(KtRGNR_t_ToMin4ECMFltTime[0])), 9U), HeRGNR_t_DT));
    }

    /* End of Switch: '<S713>/Switch' */
    /* End of Outputs for SubSystem: '<S342>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S342>/LowpassT Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S342>/LowpassT Reset Enabled1' */
    /* Outputs for Atomic SubSystem: '<S342>/EdgeRising1' */
    /* Switch: '<S714>/Switch' incorporates:
     *  Constant: '<S708>/Calib'
     *  Logic: '<S699>/AND'
     *  MinMax: '<S714>/Maximum'
     *  Product: '<S714>/Multiplication'
     *  Product: '<S714>/Multiplication1'
     *  Sum: '<S714>/Subtraction'
     *  Sum: '<S714>/Summation'
     *  UnitDelay: '<S704>/Unit Delay'
     *  UnitDelay: '<S714>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeAECR_b_AeCoas)
    {
        RGNR_ac_DW.UnitDelay_DSTATE_e2 = RGNR_ac_DW.UnitDelay_DSTATE_dd;
    }
    else
    {
        RGNR_ac_DW.UnitDelay_DSTATE_e2 += ((RGNR_ac_DW.UnitDelay_DSTATE_dd -
            RGNR_ac_DW.UnitDelay_DSTATE_e2) * HeRGNR_t_DT) * (1.0F / fmaxf
            (rtb_MinMax3_a, HeRGNR_t_DT));
    }

    /* End of Switch: '<S714>/Switch' */
    /* End of Outputs for SubSystem: '<S342>/EdgeRising1' */
    /* End of Outputs for SubSystem: '<S342>/LowpassT Reset Enabled1' */
#if Rte_SysCon_Variant_RGNR_1

    /* Outputs for Atomic SubSystem: '<S342>/LowpassT Reset Enabled2' */
    /* Switch: '<S715>/Switch' incorporates:
     *  Constant: '<S708>/Calib'
     *  MinMax: '<S715>/Maximum'
     *  Product: '<S715>/Multiplication'
     *  Product: '<S715>/Multiplication1'
     *  Sum: '<S715>/Subtraction'
     *  Sum: '<S715>/Summation'
     *  UnitDelay: '<S707>/Unit Delay'
     *  UnitDelay: '<S715>/Unit Delay'
     */
    if (rtb_AND_op)
    {
        RGNR_ac_DW.UnitDelay_DSTATE_o = RGNR_ac_DW.UnitDelay_DSTATE_l;
    }
    else
    {
        RGNR_ac_DW.UnitDelay_DSTATE_o += ((RGNR_ac_DW.UnitDelay_DSTATE_l -
            RGNR_ac_DW.UnitDelay_DSTATE_o) * HeRGNR_t_DT) * (1.0F / fmaxf
            (rtb_MinMax3_a, HeRGNR_t_DT));
    }

    /* End of Switch: '<S715>/Switch' */
    /* End of Outputs for SubSystem: '<S342>/LowpassT Reset Enabled2' */
#endif

    /* Outputs for Atomic SubSystem: '<S342>/LowpassT Reset Enabled3' */
    /* Outputs for Atomic SubSystem: '<S342>/EdgeRising3' */
    /* Switch: '<S716>/Switch' incorporates:
     *  Constant: '<S708>/Calib'
     *  Logic: '<S701>/AND'
     *  MinMax: '<S716>/Maximum'
     *  Product: '<S716>/Multiplication'
     *  Product: '<S716>/Multiplication1'
     *  Sum: '<S716>/Subtraction'
     *  Sum: '<S716>/Summation'
     *  UnitDelay: '<S705>/Unit Delay'
     *  UnitDelay: '<S716>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeSTRR_b_EngOnR)
    {
        RGNR_ac_DW.UnitDelay_DSTATE_f = RGNR_ac_DW.UnitDelay_DSTATE_df;
    }
    else
    {
        RGNR_ac_DW.UnitDelay_DSTATE_f += ((RGNR_ac_DW.UnitDelay_DSTATE_df -
            RGNR_ac_DW.UnitDelay_DSTATE_f) * HeRGNR_t_DT) * (1.0F / fmaxf
            (rtb_MinMax3_a, HeRGNR_t_DT));
    }

    /* End of Switch: '<S716>/Switch' */
    /* End of Outputs for SubSystem: '<S342>/EdgeRising3' */
    /* End of Outputs for SubSystem: '<S342>/LowpassT Reset Enabled3' */

    /* Outputs for Atomic SubSystem: '<S342>/LowpassT Reset Enabled4' */
    /* Outputs for Atomic SubSystem: '<S342>/EdgeRising4' */
    /* Switch: '<S717>/Switch' incorporates:
     *  Constant: '<S708>/Calib'
     *  Logic: '<S702>/AND'
     *  MinMax: '<S717>/Maximum'
     *  Product: '<S717>/Multiplication'
     *  Product: '<S717>/Multiplication1'
     *  Sum: '<S717>/Subtraction'
     *  Sum: '<S717>/Summation'
     *  UnitDelay: '<S706>/Unit Delay'
     *  UnitDelay: '<S717>/Unit Delay'
     */
    if (rtb_OR1_lo)
    {
        RGNR_ac_DW.UnitDelay_DSTATE_k = RGNR_ac_DW.UnitDelay_DSTATE_b;
    }
    else
    {
        RGNR_ac_DW.UnitDelay_DSTATE_k += ((RGNR_ac_DW.UnitDelay_DSTATE_b -
            RGNR_ac_DW.UnitDelay_DSTATE_k) * HeRGNR_t_DT) * (1.0F / fmaxf
            (rtb_MinMax3_a, HeRGNR_t_DT));
    }

    /* End of Switch: '<S717>/Switch' */
    /* End of Outputs for SubSystem: '<S342>/EdgeRising4' */
    /* End of Outputs for SubSystem: '<S342>/LowpassT Reset Enabled4' */

    /* Gain: '<S719>/Gain' incorporates:
     *  UnitDelay: '<S714>/Unit Delay'
     */
    VeRGNC_M_RgnAvaiBefInhReg = RGNR_ac_DW.UnitDelay_DSTATE_e2;

    /* Gain: '<S725>/Gain' incorporates:
     *  SignalConversion generated from: '<S342>/VariantSource'
     * */
#if Rte_SysCon_Variant_RGNR_1

    /* Gain: '<S725>/Gain' incorporates:
     *  UnitDelay: '<S715>/Unit Delay'
     */
    VeRGNC_M_RgnAvaiBefInhReg_Lin = RGNR_ac_DW.UnitDelay_DSTATE_o;

    /* VariantMerge generated from: '<S342>/VariantSource' */
    rtb_MinMax1 = VeRGNC_M_RgnAvaiBefInhReg_Lin;

#else

    /* VariantMerge generated from: '<S342>/VariantSource' incorporates:
     *  SignalConversion generated from: '<S342>/VariantSource'
     */
    rtb_MinMax1 = rtb_VariantMerge_For_Variant_Source_Va_n;

#endif

    /* End of Gain: '<S725>/Gain' */

    /* Outputs for Atomic SubSystem: '<S212>/Signal Latch On With Reset2' */
    /* Logic: '<S744>/OR1' incorporates:
     *  Logic: '<S744>/NOT'
     *  Logic: '<S744>/OR'
     *  UnitDelay: '<S212>/Unit Delay1'
     *  UnitDelay: '<S212>/Unit Delay2'
     *  UnitDelay: '<S744>/Unit Delay'
     */
    RGNR_ac_DW.UnitDelay_DSTATE_ie = ((RGNR_ac_DW.UnitDelay1_DSTATE_h) ||
        ((!RGNR_ac_DW.UnitDelay2_DSTATE_f) && (RGNR_ac_DW.UnitDelay_DSTATE_ie)));

    /* End of Outputs for SubSystem: '<S212>/Signal Latch On With Reset2' */

    /* Switch: '<S208>/Switch' */
    if (Logical1)
    {
        /* Switch: '<S208>/Switch' */
        rtb_VariantMerge_For_Variant_Source_Va_n =
            rtb_TmpSignalConversionAtVeRGNC_M_TrqReg;
    }
    else
    {
        /* Switch: '<S208>/Switch' */
        rtb_VariantMerge_For_Variant_Source_Va_n = VeRGNC_M_RgnAvaiBefInhReg;
    }

    /* End of Switch: '<S208>/Switch' */

    /* If: '<S212>/If1' incorporates:
     *  UnitDelay: '<S744>/Unit Delay'
     */
    if (RGNR_ac_DW.UnitDelay_DSTATE_ie)
    {
        /* Outputs for IfAction SubSystem: '<S212>/InhibitRgnSub' incorporates:
         *  ActionPort: '<S737>/Action Port'
         */
        /* Switch: '<S737>/Switch' incorporates:
         *  Constant: '<S738>/Calib'
         *  UnitDelay: '<S212>/Unit Delay1'
         */
        if (RGNR_ac_DW.UnitDelay1_DSTATE_h)
        {
            rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = KeRGNC_M_CapInhbRBSLimit;
        }
        else
        {
            rtb_TmpSignalConversionAtVeINVR_T_MtrA_T =
                rtb_VariantMerge_For_Variant_Source_Va_n;
        }

        /* End of Switch: '<S737>/Switch' */

        /* Outputs for Atomic SubSystem: '<S737>/GradientLimiter' */
        /* Sum: '<S745>/Sum2' incorporates:
         *  UnitDelay: '<S212>/Unit Delay4'
         */
        rtb_TmpSignalConversionAtVeTINR_r_TCMTra =
            rtb_TmpSignalConversionAtVeINVR_T_MtrA_T
            - RGNR_ac_DW.UnitDelay4_DSTATE;

        /* Outputs for Atomic SubSystem: '<S745>/Limiter' */
        /* Switch: '<S747>/Switch1' incorporates:
         *  Constant: '<S740>/Calib'
         *  RelationalOperator: '<S747>/Relational Operator'
         */
        if (KeRGNC_M_CapInhbRBSRmp_up < rtb_TmpSignalConversionAtVeTINR_r_TCMTra)
        {
            /* Switch: '<S747>/Switch1' */
            rtb_TmpSignalConversionAtVeTINR_r_TCMTra = KeRGNC_M_CapInhbRBSRmp_up;
        }

        /* End of Switch: '<S747>/Switch1' */

        /* Switch: '<S747>/Switch' incorporates:
         *  Constant: '<S739>/Calib'
         *  RelationalOperator: '<S747>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeTINR_r_TCMTra <=
                KeRGNC_M_CapInhbRBSRmp_dwn)
        {
            rtb_TmpSignalConversionAtVeTINR_r_TCMTra =
                KeRGNC_M_CapInhbRBSRmp_dwn;
        }

        /* End of Switch: '<S747>/Switch' */
        /* End of Outputs for SubSystem: '<S745>/Limiter' */

        /* Sum: '<S745>/Sum3' incorporates:
         *  UnitDelay: '<S212>/Unit Delay4'
         */
        VeRGNC_M_InhRgnBrkRmp = rtb_TmpSignalConversionAtVeTINR_r_TCMTra +
            RGNR_ac_DW.UnitDelay4_DSTATE;

        /* End of Outputs for SubSystem: '<S737>/GradientLimiter' */

        /* RelationalOperator: '<S737>/Greater Than or Equal 1' incorporates:
         *  Constant: '<S741>/Calib'
         *  Sum: '<S737>/Sum1'
         *  UnitDelay: '<S212>/Unit Delay2'
         */
        RGNR_ac_DW.UnitDelay2_DSTATE_f = ((VeRGNC_M_InhRgnBrkRmp -
            rtb_VariantMerge_For_Variant_Source_Va_n) <=
            KeRGNC_M_CapThreshShutOffRmp);

        /* Merge: '<S212>/Merge1' incorporates:
         *  Gain: '<S746>/Gain'
         */
        VeRGNC_M_CapRgnAvaiAfterInhRgn = VeRGNC_M_InhRgnBrkRmp;

        /* End of Outputs for SubSystem: '<S212>/InhibitRgnSub' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S212>/NormOp' incorporates:
         *  ActionPort: '<S743>/Action Port'
         */
        RGNR_ac_NormOp(rtb_VariantMerge_For_Variant_Source_Va_n,
                       (&(VeRGNC_M_CapRgnAvaiAfterInhRgn)));

        /* End of Outputs for SubSystem: '<S212>/NormOp' */
    }

    /* End of If: '<S212>/If1' */

    /* MinMax: '<S212>/MinMax2' incorporates:
     *  UnitDelay: '<S212>/Unit Delay4'
     */
    RGNR_ac_DW.UnitDelay4_DSTATE = fmaxf
        (rtb_VariantMerge_For_Variant_Source_Va_n,
         VeRGNC_M_CapRgnAvaiAfterInhRgn);

    /* Logic: '<S213>/Logical Operator1' incorporates:
     *  Constant: '<S757>/Calib'
     */
    rtb_AND_op = (Logical1 && (KeRGNC_b_RegInhOvr));

    /* Outputs for Atomic SubSystem: '<S213>/Signal Latch On With Reset2' */
    /* Logic: '<S759>/OR1' incorporates:
     *  Logic: '<S759>/NOT'
     *  Logic: '<S759>/OR'
     *  UnitDelay: '<S213>/Unit Delay2'
     *  UnitDelay: '<S759>/Unit Delay'
     */
    RGNR_ac_DW.UnitDelay_DSTATE_fh = (rtb_AND_op ||
        ((!RGNR_ac_DW.UnitDelay2_DSTATE_e) && (RGNR_ac_DW.UnitDelay_DSTATE_fh)));

    /* End of Outputs for SubSystem: '<S213>/Signal Latch On With Reset2' */

    /* If: '<S213>/If1' incorporates:
     *  UnitDelay: '<S759>/Unit Delay'
     */
    if (RGNR_ac_DW.UnitDelay_DSTATE_fh)
    {
        /* Outputs for IfAction SubSystem: '<S213>/InhibitRgnFront' incorporates:
         *  ActionPort: '<S748>/Action Port'
         */
        /* Switch: '<S748>/Switch' incorporates:
         *  Constant: '<S749>/Calib'
         *  UnitDelay: '<S716>/Unit Delay'
         */
        if (rtb_AND_op)
        {
            rtb_VariantMerge_For_Variant_Source_Va_n =
                KeRGNC_M_CapInhbRBSLimit_Front;
        }
        else
        {
            rtb_VariantMerge_For_Variant_Source_Va_n =
                RGNR_ac_DW.UnitDelay_DSTATE_f;
        }

        /* End of Switch: '<S748>/Switch' */

        /* Outputs for Atomic SubSystem: '<S748>/GradientLimiter' */
        /* Sum: '<S760>/Sum2' incorporates:
         *  UnitDelay: '<S213>/Unit Delay4'
         */
        rtb_VariantMerge_For_Variant_Source_Va_n -=
            RGNR_ac_DW.UnitDelay4_DSTATE_l;

        /* Outputs for Atomic SubSystem: '<S760>/Limiter' */
        /* Switch: '<S764>/Switch1' incorporates:
         *  Constant: '<S753>/Calib'
         *  RelationalOperator: '<S764>/Relational Operator'
         */
        if (KeRGNC_M_CapInhbRBSRmp_up_Front <
                rtb_VariantMerge_For_Variant_Source_Va_n)
        {
            /* Switch: '<S765>/Switch1' */
            rtb_VariantMerge_For_Variant_Source_Va_n =
                KeRGNC_M_CapInhbRBSRmp_up_Front;
        }

        /* End of Switch: '<S764>/Switch1' */

        /* Switch: '<S764>/Switch' incorporates:
         *  Constant: '<S751>/Calib'
         *  RelationalOperator: '<S764>/Relational Operator1'
         */
        if (rtb_VariantMerge_For_Variant_Source_Va_n <=
                KeRGNC_M_CapInhbRBSRmp_dwn_Front)
        {
            rtb_VariantMerge_For_Variant_Source_Va_n =
                KeRGNC_M_CapInhbRBSRmp_dwn_Front;
        }

        /* End of Switch: '<S764>/Switch' */
        /* End of Outputs for SubSystem: '<S760>/Limiter' */

        /* Sum: '<S760>/Sum3' incorporates:
         *  UnitDelay: '<S213>/Unit Delay4'
         */
        VeRGNC_M_InhRgnBrkRmp_Front = rtb_VariantMerge_For_Variant_Source_Va_n +
            RGNR_ac_DW.UnitDelay4_DSTATE_l;

        /* End of Outputs for SubSystem: '<S748>/GradientLimiter' */

        /* Switch: '<S748>/Switch1' incorporates:
         *  Constant: '<S750>/Calib'
         *  UnitDelay: '<S717>/Unit Delay'
         */
        if (rtb_AND_op)
        {
            rtb_VariantMerge_For_Variant_Source_Va_n =
                KeRGNC_M_CapInhbRBSLimit_Rear;
        }
        else
        {
            rtb_VariantMerge_For_Variant_Source_Va_n =
                RGNR_ac_DW.UnitDelay_DSTATE_k;
        }

        /* End of Switch: '<S748>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S748>/GradientLimiter1' */
        /* Sum: '<S761>/Sum2' incorporates:
         *  UnitDelay: '<S213>/Unit Delay'
         */
        rtb_VariantMerge_For_Variant_Source_Va_n -=
            RGNR_ac_DW.UnitDelay_DSTATE_dr;

        /* Outputs for Atomic SubSystem: '<S761>/Limiter' */
        /* Switch: '<S765>/Switch1' incorporates:
         *  Constant: '<S754>/Calib'
         *  RelationalOperator: '<S765>/Relational Operator'
         */
        if (KeRGNC_M_CapInhbRBSRmp_up_Rear <
                rtb_VariantMerge_For_Variant_Source_Va_n)
        {
            /* Switch: '<S765>/Switch1' */
            rtb_VariantMerge_For_Variant_Source_Va_n =
                KeRGNC_M_CapInhbRBSRmp_up_Rear;
        }

        /* End of Switch: '<S765>/Switch1' */

        /* Switch: '<S765>/Switch' incorporates:
         *  Constant: '<S752>/Calib'
         *  RelationalOperator: '<S765>/Relational Operator1'
         */
        if (rtb_VariantMerge_For_Variant_Source_Va_n <=
                KeRGNC_M_CapInhbRBSRmp_dwn_Rear)
        {
            rtb_VariantMerge_For_Variant_Source_Va_n =
                KeRGNC_M_CapInhbRBSRmp_dwn_Rear;
        }

        /* End of Switch: '<S765>/Switch' */
        /* End of Outputs for SubSystem: '<S761>/Limiter' */

        /* Sum: '<S761>/Sum3' incorporates:
         *  UnitDelay: '<S213>/Unit Delay'
         */
        VeRGNC_M_InhRgnBrkRmp_Rear = rtb_VariantMerge_For_Variant_Source_Va_n +
            RGNR_ac_DW.UnitDelay_DSTATE_dr;

        /* End of Outputs for SubSystem: '<S748>/GradientLimiter1' */

        /* Logic: '<S748>/Logical Operator' incorporates:
         *  Constant: '<S755>/Calib'
         *  Constant: '<S756>/Calib'
         *  RelationalOperator: '<S748>/Greater Than or Equal 1'
         *  RelationalOperator: '<S748>/Greater Than or Equal 2'
         *  Sum: '<S748>/Sum1'
         *  Sum: '<S748>/Sum2'
         *  UnitDelay: '<S213>/Unit Delay2'
         *  UnitDelay: '<S716>/Unit Delay'
         *  UnitDelay: '<S717>/Unit Delay'
         */
        RGNR_ac_DW.UnitDelay2_DSTATE_e = (((VeRGNC_M_InhRgnBrkRmp_Front -
            RGNR_ac_DW.UnitDelay_DSTATE_f) <= KeRGNC_M_CapThreshShutOffRmp_Front)
            && ((VeRGNC_M_InhRgnBrkRmp_Rear - RGNR_ac_DW.UnitDelay_DSTATE_k) <=
                KeRGNC_M_CapThreshShutOffRmp_Rear));

        /* Merge: '<S213>/Merge1' incorporates:
         *  Gain: '<S762>/Gain'
         */
        VeRGNC_M_CapRgnFrntAvaiAfterInhRgn = VeRGNC_M_InhRgnBrkRmp_Front;

        /* Merge: '<S213>/Merge3' incorporates:
         *  Gain: '<S763>/Gain'
         */
        VeRGNC_M_CapRgnRearAvaiAfterInhRgn = VeRGNC_M_InhRgnBrkRmp_Rear;

        /* End of Outputs for SubSystem: '<S213>/InhibitRgnFront' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S213>/NormOpFront' incorporates:
         *  ActionPort: '<S758>/Action Port'
         */
        /* Merge: '<S213>/Merge1' incorporates:
         *  Inport: '<S758>/In1'
         *  UnitDelay: '<S716>/Unit Delay'
         */
        VeRGNC_M_CapRgnFrntAvaiAfterInhRgn = RGNR_ac_DW.UnitDelay_DSTATE_f;

        /* Merge: '<S213>/Merge3' incorporates:
         *  Inport: '<S758>/In2'
         *  UnitDelay: '<S717>/Unit Delay'
         */
        VeRGNC_M_CapRgnRearAvaiAfterInhRgn = RGNR_ac_DW.UnitDelay_DSTATE_k;

        /* End of Outputs for SubSystem: '<S213>/NormOpFront' */
    }

    /* End of If: '<S213>/If1' */

    /* MinMax: '<S213>/MinMax1' incorporates:
     *  UnitDelay: '<S213>/Unit Delay'
     *  UnitDelay: '<S717>/Unit Delay'
     */
    RGNR_ac_DW.UnitDelay_DSTATE_dr = fmaxf(RGNR_ac_DW.UnitDelay_DSTATE_k,
        VeRGNC_M_CapRgnRearAvaiAfterInhRgn);

    /* MinMax: '<S213>/MinMax2' incorporates:
     *  UnitDelay: '<S213>/Unit Delay4'
     *  UnitDelay: '<S716>/Unit Delay'
     */
    RGNR_ac_DW.UnitDelay4_DSTATE_l = fmaxf(RGNR_ac_DW.UnitDelay_DSTATE_f,
        VeRGNC_M_CapRgnFrntAvaiAfterInhRgn);

    /* Outputs for Atomic SubSystem: '<S214>/Signal Latch On With Reset2' */
    /* Logic: '<S773>/OR1' incorporates:
     *  Logic: '<S773>/NOT'
     *  Logic: '<S773>/OR'
     *  UnitDelay: '<S214>/Unit Delay1'
     *  UnitDelay: '<S214>/Unit Delay2'
     *  UnitDelay: '<S773>/Unit Delay'
     */
    RGNR_ac_DW.UnitDelay_DSTATE_m = ((RGNR_ac_DW.UnitDelay1_DSTATE_f) ||
        ((!RGNR_ac_DW.UnitDelay2_DSTATE_i) && (RGNR_ac_DW.UnitDelay_DSTATE_m)));

    /* End of Outputs for SubSystem: '<S214>/Signal Latch On With Reset2' */

    /* Switch: '<S208>/Switch2' */
    if (!Logical1)
    {
        /* Switch: '<S208>/Switch2' */
        rtb_TmpSignalConversionAtVeRGNC_M_TrqReg = rtb_MinMax1;
    }

    /* End of Switch: '<S208>/Switch2' */

    /* If: '<S214>/If1' */
    if (RGNR_ac_DW.UnitDelay_DSTATE_m)
    {
        /* Outputs for IfAction SubSystem: '<S214>/InhibitRgnSub' incorporates:
         *  ActionPort: '<S766>/Action Port'
         */
        /* Switch: '<S766>/Switch' incorporates:
         *  Constant: '<S767>/Calib'
         *  UnitDelay: '<S214>/Unit Delay1'
         */
        if (RGNR_ac_DW.UnitDelay1_DSTATE_f)
        {
            rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = KeRGNC_M_CapInhbRBSLimit;
        }
        else
        {
            rtb_TmpSignalConversionAtVeINVR_T_MtrA_T =
                rtb_TmpSignalConversionAtVeRGNC_M_TrqReg;
        }

        /* End of Switch: '<S766>/Switch' */

        /* Outputs for Atomic SubSystem: '<S766>/GradientLimiter' */
        /* Sum: '<S774>/Sum2' incorporates:
         *  UnitDelay: '<S214>/Unit Delay4'
         */
        rtb_VariantMerge_For_Variant_Source_Va_n =
            rtb_TmpSignalConversionAtVeINVR_T_MtrA_T
            - RGNR_ac_DW.UnitDelay4_DSTATE_j;

        /* Outputs for Atomic SubSystem: '<S774>/Limiter' */
        /* Switch: '<S776>/Switch1' incorporates:
         *  Constant: '<S769>/Calib'
         *  RelationalOperator: '<S776>/Relational Operator'
         */
        if (KeRGNC_M_CapInhbRBSRmp_up < rtb_VariantMerge_For_Variant_Source_Va_n)
        {
            /* Switch: '<S776>/Switch1' */
            rtb_VariantMerge_For_Variant_Source_Va_n = KeRGNC_M_CapInhbRBSRmp_up;
        }

        /* End of Switch: '<S776>/Switch1' */

        /* Switch: '<S776>/Switch' incorporates:
         *  Constant: '<S768>/Calib'
         *  RelationalOperator: '<S776>/Relational Operator1'
         */
        if (rtb_VariantMerge_For_Variant_Source_Va_n <=
                KeRGNC_M_CapInhbRBSRmp_dwn)
        {
            rtb_VariantMerge_For_Variant_Source_Va_n =
                KeRGNC_M_CapInhbRBSRmp_dwn;
        }

        /* End of Switch: '<S776>/Switch' */
        /* End of Outputs for SubSystem: '<S774>/Limiter' */

        /* Sum: '<S774>/Sum3' incorporates:
         *  UnitDelay: '<S214>/Unit Delay4'
         */
        VeRGNC_M_InhRgnBrkRmp_Lin = rtb_VariantMerge_For_Variant_Source_Va_n +
            RGNR_ac_DW.UnitDelay4_DSTATE_j;

        /* End of Outputs for SubSystem: '<S766>/GradientLimiter' */

        /* RelationalOperator: '<S766>/Greater Than or Equal 1' incorporates:
         *  Constant: '<S770>/Calib'
         *  Sum: '<S766>/Sum1'
         *  UnitDelay: '<S214>/Unit Delay2'
         */
        RGNR_ac_DW.UnitDelay2_DSTATE_i = ((VeRGNC_M_InhRgnBrkRmp_Lin -
            rtb_TmpSignalConversionAtVeRGNC_M_TrqReg) <=
            KeRGNC_M_CapThreshShutOffRmp);

        /* Merge: '<S214>/Merge1' incorporates:
         *  Gain: '<S775>/Gain'
         */
        VeRGNC_M_CapRgnAvaiAfterInhRgn_Lin = VeRGNC_M_InhRgnBrkRmp_Lin;

        /* End of Outputs for SubSystem: '<S214>/InhibitRgnSub' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S214>/NormOp' incorporates:
         *  ActionPort: '<S772>/Action Port'
         */
        RGNR_ac_NormOp(rtb_TmpSignalConversionAtVeRGNC_M_TrqReg,
                       (&(VeRGNC_M_CapRgnAvaiAfterInhRgn_Lin)));

        /* End of Outputs for SubSystem: '<S214>/NormOp' */
    }

    /* End of If: '<S214>/If1' */

    /* MinMax: '<S214>/MinMax2' incorporates:
     *  UnitDelay: '<S214>/Unit Delay4'
     */
    RGNR_ac_DW.UnitDelay4_DSTATE_j = fmaxf
        (rtb_TmpSignalConversionAtVeRGNC_M_TrqReg,
         VeRGNC_M_CapRgnAvaiAfterInhRgn_Lin);

    /* Switch: '<S217>/Switch3' incorporates:
     *  Constant: '<S777>/Calib'
     */
    if (KeRGNC_b_SingleAxle)
    {
        /* Switch: '<S217>/Switch3' */
        rtb_Switch6_idx_1 = VeRGNC_M_CapRgnAvaiAfterInhRgn;
    }
    else
    {
        /* Switch: '<S217>/Switch3' incorporates:
         *  Sum: '<S217>/Sum1'
         */
        rtb_Switch6_idx_1 = VeRGNC_M_CapRgnFrntAvaiAfterInhRgn +
            VeRGNC_M_CapRgnRearAvaiAfterInhRgn;
    }

    /* End of Switch: '<S217>/Switch3' */

    /* Sum: '<S218>/Subtraction4' */
    VeRGNR_M_TotalTrgtTrq_withRegen = rtb_TmpSignalConversionAtVeHTDR_M_ToFT_i +
        rtb_TmpSignalConversionAtVeHTDR_M_ToRT_d;

    /* Switch: '<S208>/Switch1' incorporates:
     *  Constant: '<S215>/Calib'
     */
    if (KeRGNR_b_RegenAvailEnb)
    {
        /* Switch: '<S208>/Switch1' incorporates:
         *  Constant: '<S813>/Calib'
         *  Logic: '<S219>/Logical Operator'
         *  RelationalOperator: '<S219>/Relational Operator'
         */
        rtb_AND_op = (((VeRGNR_b_DeactvAeCoast_InhRgnAct) &&
                       (VeRGNC_b_RegenAvailDtrmn)) && (VeRGNC_r_RegenCapFactOvrd
                       > KeRGNR_r_RegFactMin));
    }
    else
    {
        /* Switch: '<S208>/Switch1' */
        rtb_AND_op = VeRGNC_b_RegenAvailDtrmn;
    }

    /* Switch: '<S218>/Switch1' incorporates:
     *  Constant: '<S218>/Constant Value1'
     *  Logic: '<S218>/AND1'
     *  RelationalOperator: '<S218>/Comparison'
     */
    if ((VeRGNR_M_TotalTrgtTrq_withRegen < -1.0F) && rtb_AND_op)
    {
        /* Outputs for Atomic SubSystem: '<S218>/Protected Division' */
        /* Switch: '<S785>/Switch1' incorporates:
         *  Constant: '<S785>/Constant Value'
         *  Constant: '<S785>/Constant Value1'
         *  Constant: '<S785>/Constant Value2'
         *  Constant: '<S785>/Constant Value3'
         *  Logic: '<S785>/AND'
         *  RelationalOperator: '<S785>/Greater Than or Equal '
         *  RelationalOperator: '<S785>/Greater Than or Equal 1'
         *  RelationalOperator: '<S785>/Not Equal'
         *  RelationalOperator: '<S785>/Not Equal1'
         *  Switch: '<S785>/Switch2'
         *  Switch: '<S785>/Switch3'
         */
        if ((rtb_TmpSignalConversionAtVeHTDR_M_ToFT_i != 0.0F) &&
                (VeRGNR_M_TotalTrgtTrq_withRegen != 0.0F))
        {
            /* Switch: '<S218>/Switch1' incorporates:
             *  Product: '<S785>/Division'
             *  Switch: '<S785>/Switch1'
             */
            VeRGNR_r_RIPEfficiencyRaw = rtb_TmpSignalConversionAtVeHTDR_M_ToFT_i
                / VeRGNR_M_TotalTrgtTrq_withRegen;
        }
        else if (rtb_TmpSignalConversionAtVeHTDR_M_ToFT_i > 0.0F)
        {
            /* Switch: '<S785>/Switch2' incorporates:
             *  Constant: '<S785>/MAXFLOAT'
             *  Switch: '<S218>/Switch1'
             */
            VeRGNR_r_RIPEfficiencyRaw = 3.402823466E+38F;
        }
        else if (rtb_TmpSignalConversionAtVeHTDR_M_ToFT_i < 0.0F)
        {
            /* Switch: '<S785>/Switch3' incorporates:
             *  Constant: '<S785>/MINFLOAT'
             *  Switch: '<S218>/Switch1'
             *  Switch: '<S785>/Switch2'
             */
            VeRGNR_r_RIPEfficiencyRaw = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S218>/Switch1' incorporates:
             *  Constant: '<S785>/Constant Value4'
             *  Switch: '<S785>/Switch2'
             *  Switch: '<S785>/Switch3'
             */
            VeRGNR_r_RIPEfficiencyRaw = 0.0F;
        }

        /* End of Switch: '<S785>/Switch1' */
        /* End of Outputs for SubSystem: '<S218>/Protected Division' */
    }
    else
    {
        /* Switch: '<S218>/Switch1' incorporates:
         *  Constant: '<S218>/Constant Value3'
         */
        VeRGNR_r_RIPEfficiencyRaw = 1.0F;
    }

    /* End of Switch: '<S218>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S218>/GradientLimiter1' */
    /* VariantMerge generated from: '<S208>/VariantSource1' incorporates:
     *  UnitDelay: '<S778>/Unit Delay'
     */
    rtb_VariantMerge_For_Variant_Source_V_cp = RGNR_ac_DW.UnitDelay_DSTATE_g;

    /* Sum: '<S778>/Sum2' */
    rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = VeRGNR_r_RIPEfficiencyRaw -
        rtb_VariantMerge_For_Variant_Source_V_cp;

    /* Outputs for Atomic SubSystem: '<S778>/Limiter' */
    /* Switch: '<S790>/Switch1' incorporates:
     *  Constant: '<S782>/Calib'
     *  RelationalOperator: '<S790>/Relational Operator'
     */
    if (KeRGNR_r_RIPEfficiencyRampUp_LU <
            rtb_TmpSignalConversionAtVeINVR_T_MtrA_T)
    {
        /* Switch: '<S790>/Switch1' */
        rtb_TmpSignalConversionAtVeINVR_T_MtrA_T =
            KeRGNR_r_RIPEfficiencyRampUp_LU;
    }

    /* End of Switch: '<S790>/Switch1' */

    /* Switch: '<S790>/Switch' incorporates:
     *  Constant: '<S781>/Calib'
     *  RelationalOperator: '<S790>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtVeINVR_T_MtrA_T <=
            KeRGNR_r_RIPEfficiencyRampDwn_LD)
    {
        rtb_TmpSignalConversionAtVeINVR_T_MtrA_T =
            KeRGNR_r_RIPEfficiencyRampDwn_LD;
    }

    /* End of Switch: '<S790>/Switch' */
    /* End of Outputs for SubSystem: '<S778>/Limiter' */

    /* Sum: '<S778>/Sum3' */
    rtb_VariantMerge_For_Variant_Source_V_cp +=
        rtb_TmpSignalConversionAtVeINVR_T_MtrA_T;

    /* Outputs for Atomic SubSystem: '<S778>/Limiter1' */
    /* Switch: '<S791>/Switch1' incorporates:
     *  Constant: '<S218>/Constant Value2'
     *  RelationalOperator: '<S791>/Relational Operator'
     */
    if (1.0F < rtb_VariantMerge_For_Variant_Source_V_cp)
    {
        /* VariantMerge generated from: '<S208>/VariantSource1' */
        rtb_VariantMerge_For_Variant_Source_V_cp = 1.0F;
    }

    /* End of Switch: '<S791>/Switch1' */

    /* Switch: '<S791>/Switch' incorporates:
     *  Constant: '<S218>/Constant Value4'
     *  RelationalOperator: '<S791>/Relational Operator1'
     *  UnitDelay: '<S778>/Unit Delay'
     */
    if (rtb_VariantMerge_For_Variant_Source_V_cp > 0.0F)
    {
        RGNR_ac_DW.UnitDelay_DSTATE_g = rtb_VariantMerge_For_Variant_Source_V_cp;
    }
    else
    {
        RGNR_ac_DW.UnitDelay_DSTATE_g = 0.0F;
    }

    /* End of Switch: '<S791>/Switch' */
    /* End of Outputs for SubSystem: '<S778>/Limiter1' */
    /* End of Outputs for SubSystem: '<S218>/GradientLimiter1' */

    /* VariantMerge generated from: '<S208>/VariantSource1' incorporates:
     *  Product: '<S227>/Product4'
     */
    rtb_VariantMerge_For_Variant_Source_V_cp =
        -VeRGNC_M_CapRgnAvaiAfterInhRgn_Lin;

    /* SignalConversion generated from: '<S208>/VariantSource1' */
#if !Rte_SysCon_Variant_RGNR_1

    /* VariantMerge generated from: '<S208>/VariantSource1' */
    rtb_VariantMerge_For_Variant_Source_V_cp = rtb_MinMax1;

#endif

    /* End of SignalConversion generated from: '<S208>/VariantSource1' */

    /* Switch: '<S227>/Switch' incorporates:
     *  Constant: '<S816>/Calib'
     *  Switch: '<S227>/Switch1'
     *  Switch: '<S227>/Switch3'
     */
    if (HeRGNR_b_ConvOvrd)
    {
        /* Switch: '<S227>/Switch' incorporates:
         *  Product: '<S227>/Product'
         */
        rtb_TmpSignalConversionAtVeHTDR_M_ToFT_i = -rtb_Switch6_idx_1;

        /* Switch: '<S227>/Switch1' incorporates:
         *  Product: '<S227>/Product3'
         */
        rtb_TmpSignalConversionAtVeATRR_r_Brk2Wh = -VeRGNC_M_EstRegenAchvdTrq;

        /* Switch: '<S227>/Switch2' incorporates:
         *  Constant: '<S227>/Constant Value2'
         *  RelationalOperator: '<S227>/Comparison'
         */
        if (rtb_TmpSignalConversionAtVeBTQR_r_TrqDmn > 0.01F)
        {
            /* Outputs for Atomic SubSystem: '<S227>/Protected Division' */
            /* Switch: '<S818>/Switch1' incorporates:
             *  Constant: '<S818>/Constant Value'
             *  Constant: '<S818>/Constant Value2'
             *  Constant: '<S818>/Constant Value3'
             *  RelationalOperator: '<S818>/Greater Than or Equal '
             *  RelationalOperator: '<S818>/Greater Than or Equal 1'
             *  RelationalOperator: '<S818>/Not Equal'
             *  Switch: '<S818>/Switch2'
             *  Switch: '<S818>/Switch3'
             */
            if (rtb_TmpSignalConversionAtVeWTAR_M_AeCoas != 0.0F)
            {
                /* Switch: '<S227>/Switch3' incorporates:
                 *  Product: '<S818>/Division'
                 *  Switch: '<S818>/Switch1'
                 */
                rtb_TmpSignalConversionAtVeWTAR_M_AeCoas /=
                    rtb_TmpSignalConversionAtVeBTQR_r_TrqDmn;
            }
            else if (rtb_TmpSignalConversionAtVeWTAR_M_AeCoas > 0.0F)
            {
                /* Switch: '<S818>/Switch2' incorporates:
                 *  Constant: '<S818>/MAXFLOAT'
                 *  Switch: '<S227>/Switch3'
                 *  Switch: '<S818>/Switch1'
                 */
                rtb_TmpSignalConversionAtVeWTAR_M_AeCoas = 3.402823466E+38F;
            }
            else if (rtb_TmpSignalConversionAtVeWTAR_M_AeCoas < 0.0F)
            {
                /* Switch: '<S818>/Switch3' incorporates:
                 *  Constant: '<S818>/MINFLOAT'
                 *  Switch: '<S227>/Switch3'
                 *  Switch: '<S818>/Switch1'
                 *  Switch: '<S818>/Switch2'
                 */
                rtb_TmpSignalConversionAtVeWTAR_M_AeCoas = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S227>/Switch3' incorporates:
                 *  Constant: '<S818>/Constant Value4'
                 *  Switch: '<S818>/Switch1'
                 *  Switch: '<S818>/Switch2'
                 *  Switch: '<S818>/Switch3'
                 */
                rtb_TmpSignalConversionAtVeWTAR_M_AeCoas = 0.0F;
            }

            /* End of Switch: '<S818>/Switch1' */
            /* End of Outputs for SubSystem: '<S227>/Protected Division' */
        }
        else
        {
            /* Switch: '<S227>/Switch3' incorporates:
             *  Constant: '<S227>/Constant Value3'
             *  Switch: '<S227>/Switch2'
             */
            rtb_TmpSignalConversionAtVeWTAR_M_AeCoas = 0.0F;
        }

        /* End of Switch: '<S227>/Switch2' */
    }
    else
    {
        /* Switch: '<S227>/Switch' incorporates:
         *  Product: '<S227>/Product'
         *  Product: '<S227>/Product1'
         */
        rtb_TmpSignalConversionAtVeHTDR_M_ToFT_i = (-rtb_Switch6_idx_1) *
            rtb_TmpSignalConversionAtVeATRR_r_Brk2Wh;

        /* Switch: '<S227>/Switch1' incorporates:
         *  Product: '<S227>/Product2'
         *  Product: '<S227>/Product3'
         */
        rtb_TmpSignalConversionAtVeATRR_r_Brk2Wh *= -VeRGNC_M_EstRegenAchvdTrq;
    }

    /* End of Switch: '<S227>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB3' */

    /* Inport: '<Root>/VeWTAR_b_AeCoastTorqDiffActv' */
    (void)Rte_Read_VeWTAR_b_AeCoastTorqDiffActv_Value(&tmpRead_g);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB3' incorporates:
     *  SubSystem: '<Root>/RGNR_MedTEB3'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/MainRgnCapCntrl'
     */
    /* SignalConversion generated from: '<S208>/VeRGNC_b_EstRegenBrkAxleTorqFA' */
    RGNR_ac_B.OutportBufferForVeRGNC_b_EstRegenBrkAxle = false;

    /* Update for UnitDelay: '<S357>/Unit Delay1' */
    RGNR_ac_DW.UnitDelay1_DSTATE_a = rtb_OR1;

    /* Update for UnitDelay: '<S212>/Unit Delay1' */
    RGNR_ac_DW.UnitDelay1_DSTATE_h = Logical1;

    /* Update for UnitDelay: '<S214>/Unit Delay1' */
    RGNR_ac_DW.UnitDelay1_DSTATE_f = Logical1;

    /* Outport: '<Root>/VeRGNR_M_EstRegenAchvdTorq_Frnt' incorporates:
     *  Gain: '<S787>/Gain'
     *  SignalConversion generated from: '<S3>/VeRGNC_M_EstRegenAchvdTorq_Frnt'
     */
    (void)Rte_Write_VeRGNR_M_EstRegenAchvdTorq_Frnt_Value
        (VeRGNR_M_CmndRegenHTDR_Frnt);

    /* Outport: '<Root>/VeRGNR_M_EstRegenAchvdTorq_Rear' incorporates:
     *  Gain: '<S788>/Gain'
     *  SignalConversion generated from: '<S3>/VeRGNC_M_EstRegenAchvdTorq_Rear'
     */
    (void)Rte_Write_VeRGNR_M_EstRegenAchvdTorq_Rear_Value
        (VeRGNR_M_CmndRegenHTDR_Rear);

    /* Outport: '<Root>/VeRGNR_M_EstRegenBrkOutTorq' incorporates:
     *  Gain: '<S222>/Gain'
     *  SignalConversion generated from: '<S3>/VeRGNC_M_EstRegenAchvdTrq'
     */
    (void)Rte_Write_VeRGNR_M_EstRegenBrkOutTorq_Value(VeRGNC_M_EstRegenAchvdTrq);

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Outport: '<Root>/VeRGNR_r_RIPEfficiency' incorporates:
     *  SignalConversion generated from: '<S3>/VeRGNC_M_RIPEfficiency'
     *  UnitDelay: '<S778>/Unit Delay'
     */
    (void)Rte_Write_VeRGNR_r_RIPEfficiency_Value(RGNR_ac_DW.UnitDelay_DSTATE_g);

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/MainRgnCapCntrl'
     */
    /* Outport: '<Root>/VeRGNR_M_RegenBrkOutTorqCap' incorporates:
     *  Gain: '<S221>/Gain'
     *  SignalConversion generated from: '<S3>/VeRGNC_M_RegenBrkOutTorqCap'
     */
    (void)Rte_Write_VeRGNR_M_RegenBrkOutTorqCap_Value(rtb_Switch6_idx_1);

    /* Outport: '<Root>/VeRGNR_M_ToMin4ECM' incorporates:
     *  Gain: '<S721>/Gain'
     *  SignalConversion generated from: '<S3>/VeRGNC_M_ToMin4ECM'
     *  UnitDelay: '<S713>/Unit Delay'
     */
    (void)Rte_Write_VeRGNR_M_ToMin4ECM_Value(RGNR_ac_DW.UnitDelay_DSTATE_fz);

    /* Outport: '<Root>/VeRGNR_b_AeCoast_Act' incorporates:
     *  Logic: '<S209>/Logical Operator4'
     *  SignalConversion generated from: '<S3>/VeRGNC_b_AeCoast_Act'
     */
    (void)Rte_Write_VeRGNR_b_AeCoast_Act_Value
        (((((((((VeRGNC_b_DeactvAeCoast_BatPackSOC_Arb) &&
                (VeRGNR_b_DeactvAeCoast_MotorTemp)) &&
               (VeRGNC_b_DeactvAeCoast_BatModTmp)) &&
              (VeRGNC_b_DeactvAeCoast_ModeHTDRState != 0.0F)) &&
             (VeRGNC_b_DeactvAeCoast_DsblRet2Idle)) &&
            (VeRGNR_b_DeactvAeCoast_InhRgnAct)) &&
           (VeRGNC_b_DeactvAeCoast_TrnsfrCsRng)) &&
          (VeRGNC_b_DeactvAeCoast_VldtdTransRngSt)) && (VeRGNC_b_MtrFlt));

    /* Outport: '<Root>/VeRGNR_b_AeCoast_ActHCP' incorporates:
     *  Logic: '<S209>/Logical Operator'
     *  SignalConversion generated from: '<S3>/VeRGNC_b_AeCoast_ActHCP'
     */
    (void)Rte_Write_VeRGNR_b_AeCoast_ActHCP_Value
        ((((VeRGNC_b_DeactvAeCoast_RunCrankActive) &&
           (VeRGNC_b_DeactvAeCoast_VehSpdSigned)) &&
          (VeRGNC_b_AeCoast_AccSystemSts)) && (VeRGNC_b_AeCoast_CcEngaged));

    /* Outport: '<Root>/VeRGNR_b_AeCoast_Avail' incorporates:
     *  Logic: '<S209>/Logical Operator16'
     *  SignalConversion generated from: '<S3>/VeRGNC_b_AeCoast_Avail'
     */
    (void)Rte_Write_VeRGNR_b_AeCoast_Avail_Value((VeRGNC_b_AeCoast_CcEngaged) &&
        (VeRGNC_b_AeCoast_AccSystemSts));

    /* Outport: '<Root>/VeRGNR_b_AeCoast_Faulted' incorporates:
     *  Logic: '<S209>/Logical Operator11'
     *  Logic: '<S209>/Logical Operator12'
     *  Logic: '<S209>/Logical Operator6'
     *  SignalConversion generated from: '<S3>/VeRGNC_b_AeCoast_Faulted'
     */
    (void)Rte_Write_VeRGNR_b_AeCoast_Faulted_Value
        ((!VeRGNR_b_DeactvAeCoast_InhRgnAct) || (!VeRGNC_b_MtrFlt));

    /* Outport: '<Root>/VeRGNR_b_AeCoast_TempUnv' incorporates:
     *  Logic: '<S209>/Logical Operator10'
     *  Logic: '<S209>/Logical Operator14'
     *  Logic: '<S209>/Logical Operator15'
     *  Logic: '<S209>/Logical Operator5'
     *  Logic: '<S209>/Logical Operator7'
     *  Logic: '<S209>/Logical Operator8'
     *  Logic: '<S209>/Logical Operator9'
     *  SignalConversion generated from: '<S3>/VeRGNC_b_AeCoast_TempUnv'
     */
    (void)Rte_Write_VeRGNR_b_AeCoast_TempUnv_Value
        ((((((!VeRGNC_b_DeactvAeCoast_BatPackSOC_Arb) ||
             (!VeRGNR_b_DeactvAeCoast_MotorTemp)) ||
            (!VeRGNC_b_DeactvAeCoast_BatModTmp)) ||
           (!VeRGNC_b_DeactvAeCoast_VldtdTransRngSt)) ||
          (!VeRGNC_b_AeCoast_CcEngaged)) || (!VeRGNC_b_AeCoast_AccSystemSts));

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Outport: '<Root>/VeRGNR_b_EstRegenBrkAxTorqFA' incorporates:
     *  SignalConversion generated from: '<S3>/VeRGNC_b_EstRegenBrkAxleTorqFA'
     */
    (void)Rte_Write_VeRGNR_b_EstRegenBrkAxTorqFA_Value
        (RGNR_ac_B.OutportBufferForVeRGNC_b_EstRegenBrkAxle);

    /* Outport: '<Root>/VeRGNR_b_InhRgnAct' incorporates:
     *  SignalConversion generated from: '<S3>/VeRGNC_b_InhRgnAct'
     */
    (void)Rte_Write_VeRGNR_b_InhRgnAct_Value(Logical1);

    /* Outport: '<Root>/VeRGNR_b_RegenAvailDtrmn' incorporates:
     *  SignalConversion generated from: '<S3>/VeRGNC_b_RegenAvailDtrmn'
     */
    (void)Rte_Write_VeRGNR_b_RegenAvailDtrmn_Value(rtb_AND_op);

    /* Outport: '<Root>/VeRGNR_r_FrontRgnRampOut' incorporates:
     *  SignalConversion generated from: '<S3>/VeRGNC_r_FrontRgnRampOut'
     */
    (void)Rte_Write_VeRGNR_r_FrontRgnRampOut_Value
        (RGNR_ac_B.VariantMerge_For_Variant_Source_VariantS);

    /* Outport: '<Root>/VeRGNR_M_AeCoastTorqDiff' incorporates:
     *  SignalConversion generated from: '<S3>/VeRGNR_M_AeCoastTorqDiff'
     */
    (void)Rte_Write_VeRGNR_M_AeCoastTorqDiff_Value
        (rtb_TmpSignalConversionAtVeWTAR_M_AeCoas);

    /* Outport: '<Root>/VeRGNR_M_EstRegenBrkAxTorq' incorporates:
     *  SignalConversion generated from: '<S3>/VeRGNR_M_EstRegenAchvdAxleTorq'
     */
    (void)Rte_Write_VeRGNR_M_EstRegenBrkAxTorq_Value
        (rtb_TmpSignalConversionAtVeATRR_r_Brk2Wh);

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/MainRgnCapCntrl'
     */
    /* Outport: '<Root>/VeRGNR_M_EstRegenAchvdAxleTorq_Frnt' incorporates:
     *  Gain: '<S787>/Gain'
     *  Product: '<S227>/Product7'
     *  SignalConversion generated from: '<S3>/VeRGNR_M_EstRegenAchvdAxleTorq_Frnt'
     */
    (void)Rte_Write_VeRGNR_M_EstRegenAchvdAxleTorq_Frnt_Value
        (-VeRGNR_M_CmndRegenHTDR_Frnt);

    /* Outport: '<Root>/VeRGNR_M_EstRegenAchvdAxleTorq_Rear' incorporates:
     *  Gain: '<S788>/Gain'
     *  Product: '<S227>/Product8'
     *  SignalConversion generated from: '<S3>/VeRGNR_M_EstRegenAchvdAxleTorq_Rear'
     */
    (void)Rte_Write_VeRGNR_M_EstRegenAchvdAxleTorq_Rear_Value
        (-VeRGNR_M_CmndRegenHTDR_Rear);

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Outport: '<Root>/VeRGNR_M_RegenBrkOutTorqCap_CAN' incorporates:
     *  SignalConversion generated from: '<S3>/VeRGNR_M_RegenBrkOutTorqCap_CAN'
     */
    (void)Rte_Write_VeRGNR_M_RegenBrkOutTorqCap_CAN_Value
        (rtb_TmpSignalConversionAtVeHTDR_M_ToFT_i);

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/MainRgnCapCntrl'
     */
    /* Outport: '<Root>/VeRGNR_M_RegenBrkOutTorqCap_Frnt' incorporates:
     *  Product: '<S227>/Product5'
     *  SignalConversion generated from: '<S3>/VeRGNR_M_RegenBrkOutTorqCap_Frnt'
     */
    (void)Rte_Write_VeRGNR_M_RegenBrkOutTorqCap_Frnt_Value
        (-VeRGNC_M_CapRgnFrntAvaiAfterInhRgn);

    /* Outport: '<Root>/VeRGNR_M_RegenBrkOutTorqCap_Lin' incorporates:
     *  Gain: '<S226>/Gain'
     *  SignalConversion generated from: '<S3>/VeRGNR_M_RegenBrkOutTorqCap_Lin'
     */
    (void)Rte_Write_VeRGNR_M_RegenBrkOutTorqCap_Lin_Value
        (rtb_VariantMerge_For_Variant_Source_V_cp);

    /* Outport: '<Root>/VeRGNR_M_RegenBrkOutTorqCap_Rear' incorporates:
     *  Product: '<S227>/Product6'
     *  SignalConversion generated from: '<S3>/VeRGNR_M_RegenBrkOutTorqCap_Rear'
     */
    (void)Rte_Write_VeRGNR_M_RegenBrkOutTorqCap_Rear_Value
        (-VeRGNC_M_CapRgnRearAvaiAfterInhRgn);

    /* Outport: '<Root>/VeRGNR_b_AeCoastTorqDiffActv' incorporates:
     *  Logic: '<S814>/AND'
     *  SignalConversion generated from: '<S3>/VeRGNR_b_AeCoastTorqDiffActv'
     */
    (void)Rte_Write_VeRGNR_b_AeCoastTorqDiffActv_Value(tmpRead_g);

    /* Outport: '<Root>/VeRGNR_b_RegenBrkAxTorqCapFA' incorporates:
     *  Constant: '<S817>/Calib'
     *  Logic: '<S815>/AND'
     *  SignalConversion generated from: '<S3>/VeRGNR_b_RegenBrkAxTorqCapFA'
     */
    (void)Rte_Write_VeRGNR_b_RegenBrkAxTorqCapFA_Value(KeRGNR_b_RegBrkAxTrqCapFA);

    /* Merge: '<Root>/Merge_2_Irv' incorporates:
     *  Gain: '<S221>/Gain'
     *  SignalConversion generated from: '<S3>/VeRGNC_M_RegenBrkOutTorqCap_write'
     */
    Rte_IrvWrite_RGNR_MedTEB3_VeRGNC_M_RegenBrkOutTorqCap_write_IRV
        (rtb_Switch6_idx_1);

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Merge: '<Root>/VeRGNC_b_InhRgnAct_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S3>/VeRGNC_b_InhRgnAct_write'
     * */
    Rte_IrvWrite_RGNR_MedTEB3_VeRGNC_b_InhRgnAct_write_IRV(Logical1);

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/MainRgnCapCntrl'
     */
    /* Merge: '<Root>/Merge_3' incorporates:
     *  Gain: '<S224>/Gain'
     *  SignalConversion generated from: '<S3>/VeRGNC_r_RegenCapFact_write'
     */
    Rte_IrvWrite_RGNR_MedTEB3_VeRGNC_r_RegenCapFact_write_IRV
        (VeRGNC_r_RegenCapFactOvrd);

    /* Merge: '<Root>/Merge_10' incorporates:
     *  Gain: '<S220>/Gain'
     *  SignalConversion generated from: '<S3>/VeRGNR_M_RegenBrkOutTorqCap_Frnt_Sign_write'
     */
    Rte_IrvWrite_RGNR_MedTEB3_VeRGNR_M_RegenBrkOutTorqCap_Frnt_Sign_write_IRV
        (VeRGNC_M_CapRgnFrntAvaiAfterInhRgn);

    /* Merge: '<Root>/Merge_11' incorporates:
     *  Gain: '<S223>/Gain'
     *  SignalConversion generated from: '<S3>/VeRGNR_M_RegenBrkOutTorqCap_Rear_Sign_write'
     */
    Rte_IrvWrite_RGNR_MedTEB3_VeRGNR_M_RegenBrkOutTorqCap_Rear_Sign_write_IRV
        (VeRGNC_M_CapRgnRearAvaiAfterInhRgn);

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB3' */
}

/* Output function */
FUNC(void, RGNR_CODE) RGNR_PUP(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PUP' incorporates:
     *  SubSystem: '<Root>/RGNR_PUP'
     */
    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/RGNI_Init'
     */
    /* SignalConversion generated from: '<S820>/LeRGNI_M_RgnBrkOutTrq_Init' */
    RGNR_ac_B.LeRGNI_M_RgnBrkOutTrq_Init = 0.0F;

    /* SignalConversion generated from: '<S820>/LeRGNI_M_DrvIntndTotBrkOutTrq_Init' */
    RGNR_ac_B.LeRGNI_M_DrvIntndTotBrkOutTrq_Init = 0.0F;

    /* SignalConversion generated from: '<S820>/LeRGNI_M_RegenBrkOutTorqCap_Init' */
    RGNR_ac_B.LeRGNI_M_RegenBrkOutTorqCap_Init = 0.0F;

    /* SignalConversion generated from: '<S820>/LeRGNI_M_EstRegenBrkOutTorq_Init' */
    RGNR_ac_B.LeRGNI_M_EstRegenBrkOutTorq_Init = 0.0F;

    /* SignalConversion generated from: '<S820>/LeRGNI_M_EstRegenBrkAxTorq_Init' */
    RGNR_ac_B.LeRGNI_M_EstRegenBrkAxTorq_Init = 0.0F;

    /* SignalConversion generated from: '<S820>/LeRGNI_b_EstRegenBrkAxTorqFA_Init' */
    RGNR_ac_B.LeRGNI_b_EstRegenBrkAxTorqFA_Init = false;

    /* SignalConversion generated from: '<S820>/LeRGNI_M_RegenDsblFact_Init' */
    RGNR_ac_B.LeRGNI_M_RegenDsblFact_Init = 0.0F;

    /* SignalConversion generated from: '<S820>/LeRGNI_M_DrvIntndTotBrkOutTrq_Stgc_Init' */
    RGNR_ac_B.LeRGNI_M_DrvIntndTotBrkOutTrq_Stgc_Init = 0.0F;

    /* SignalConversion generated from: '<S820>/LeRGNI_M_RegenBrkOutTorqCap_Frnt_Init' */
    RGNR_ac_B.LeRGNI_M_RegenBrkOutTorqCap_Frnt_Init = 0.0F;

    /* SignalConversion generated from: '<S820>/LeRGNI_M_RegenBrkOutTorqCap_Rear_Init' */
    RGNR_ac_B.LeRGNI_M_RegenBrkOutTorqCap_Rear_Init = 0.0F;

    /* SignalConversion generated from: '<S820>/LeRGNI_M_RgnBrkOutTrq_Frnt_Init' */
    RGNR_ac_B.LeRGNI_M_RgnBrkOutTrq_Frnt_Init = 0.0F;

    /* SignalConversion generated from: '<S820>/LeRGNI_M_RgnBrkOutTrq_Rear_Init' */
    RGNR_ac_B.LeRGNI_M_RgnBrkOutTrq_Rear_Init = 0.0F;

    /* SignalConversion generated from: '<S820>/LeRGNI_M_RegenBrkOutTorqCap_Init_Lin' */
    RGNR_ac_B.LeRGNI_M_RegenBrkOutTorqCap_Init_Lin = 0.0F;

    /* SignalConversion generated from: '<S820>/LeRGNI_M_RegenBrkOutTorqCap_Sign' */
    RGNR_ac_B.LeRGNR_M_RegenBrkOutTorqCap_Sign = 0.0F;

    /* SignalConversion generated from: '<S820>/LeRGNI_M_RegenBrkOutTorqCap_Frnt_Sign' */
    RGNR_ac_B.LeRGNR_M_RegenBrkOutTorqCap_Frnt_Sign = 0.0F;

    /* SignalConversion generated from: '<S820>/LeRGNR_M_RegenBrkOutTorqCap_Rear_Sign' */
    RGNR_ac_B.LeRGNR_M_RegenBrkOutTorqCap_Rear_Sign = 0.0F;

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/RollsInit'
     */
    /* DataStoreWrite: '<S821>/Data Store Write1' incorporates:
     *  Constant: '<S821>/Constant Value'
     */
    VeRGNR_g_RollTestOBDStatus = 0U;

    /* DataStoreWrite: '<S821>/Data Store Write20' incorporates:
     *  Constant: '<S821>/Constant Value'
     */
    VeRGNR_e_RollTestStatus_PID = 0U;

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/InitController'
     */
    /* SignalConversion generated from: '<S819>/RegenBrkCmndStEnbl_Init' incorporates:
     *  Constant: '<S822>/Constant'
     */
    RGNR_ac_B.OutportBufferForRegenBrkCmndStEnbl_Init = RGNR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S819>/RegenBrkCmndSt_Init' */
    RGNR_ac_B.OutportBufferForRegenBrkCmndSt_Init = false;

    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Outport: '<Root>/VeRGNR_M_DrvIntndTotBrkOutTrq' incorporates:
     *  SignalConversion generated from: '<S4>/LeRGNI_M_DrvIntndTotBrkOutTrq_Init'
     */
    (void)Rte_Write_VeRGNR_M_DrvIntndTotBrkOutTrq_Value
        (RGNR_ac_B.LeRGNI_M_DrvIntndTotBrkOutTrq_Init);

    /* Outport: '<Root>/VeRGNR_M_DrvIntndTotBrk_Stgc' incorporates:
     *  SignalConversion generated from: '<S4>/LeRGNI_M_DrvIntndTotBrkOutTrq_Stgc_Init'
     */
    (void)Rte_Write_VeRGNR_M_DrvIntndTotBrk_Stgc_Value
        (RGNR_ac_B.LeRGNI_M_DrvIntndTotBrkOutTrq_Stgc_Init);

    /* Outport: '<Root>/VeRGNR_M_EstRegenBrkAxTorq' incorporates:
     *  SignalConversion generated from: '<S4>/LeRGNI_M_EstRegenBrkAxTorq_Init'
     */
    (void)Rte_Write_VeRGNR_M_EstRegenBrkAxTorq_Value
        (RGNR_ac_B.LeRGNI_M_EstRegenBrkAxTorq_Init);

    /* Outport: '<Root>/VeRGNR_M_EstRegenBrkOutTorq' incorporates:
     *  SignalConversion generated from: '<S4>/LeRGNI_M_EstRegenBrkOutTorq_Init'
     */
    (void)Rte_Write_VeRGNR_M_EstRegenBrkOutTorq_Value
        (RGNR_ac_B.LeRGNI_M_EstRegenBrkOutTorq_Init);

    /* Outport: '<Root>/VeRGNR_M_RegenBrkOutTorqCap_Frnt' incorporates:
     *  SignalConversion generated from: '<S4>/LeRGNI_M_RegenBrkOutTorqCap_Frnt_Init'
     */
    (void)Rte_Write_VeRGNR_M_RegenBrkOutTorqCap_Frnt_Value
        (RGNR_ac_B.LeRGNI_M_RegenBrkOutTorqCap_Frnt_Init);

    /* Outport: '<Root>/VeRGNR_M_RegenBrkOutTorqCap' incorporates:
     *  SignalConversion generated from: '<S4>/LeRGNI_M_RegenBrkOutTorqCap_Init'
     */
    (void)Rte_Write_VeRGNR_M_RegenBrkOutTorqCap_Value
        (RGNR_ac_B.LeRGNI_M_RegenBrkOutTorqCap_Init);

    /* Outport: '<Root>/VeRGNR_M_RegenBrkOutTorqCap_Lin' incorporates:
     *  SignalConversion generated from: '<S4>/LeRGNI_M_RegenBrkOutTorqCap_Init_Lin'
     */
    (void)Rte_Write_VeRGNR_M_RegenBrkOutTorqCap_Lin_Value
        (RGNR_ac_B.LeRGNI_M_RegenBrkOutTorqCap_Init_Lin);

    /* Outport: '<Root>/VeRGNR_M_RegenBrkOutTorqCap_Rear' incorporates:
     *  SignalConversion generated from: '<S4>/LeRGNI_M_RegenBrkOutTorqCap_Rear_Init'
     */
    (void)Rte_Write_VeRGNR_M_RegenBrkOutTorqCap_Rear_Value
        (RGNR_ac_B.LeRGNI_M_RegenBrkOutTorqCap_Rear_Init);

    /* Outport: '<Root>/VeRGNR_M_RegenBrkOutTorqCap_CAN' incorporates:
     *  SignalConversion generated from: '<S4>/LeRGNI_M_RegenBrkOutTorqCap_Sign'
     */
    (void)Rte_Write_VeRGNR_M_RegenBrkOutTorqCap_CAN_Value
        (RGNR_ac_B.LeRGNR_M_RegenBrkOutTorqCap_Sign);

    /* Outport: '<Root>/VeRGNR_M_RgnBrkOutTrq_Frnt' incorporates:
     *  SignalConversion generated from: '<S4>/LeRGNI_M_RgnBrkOutTrq_Frnt_Init'
     */
    (void)Rte_Write_VeRGNR_M_RgnBrkOutTrq_Frnt_Value
        (RGNR_ac_B.LeRGNI_M_RgnBrkOutTrq_Frnt_Init);

    /* Outport: '<Root>/VeRGNR_M_RgnBrkOutTrq' incorporates:
     *  SignalConversion generated from: '<S4>/LeRGNI_M_RgnBrkOutTrq_Init'
     */
    (void)Rte_Write_VeRGNR_M_RgnBrkOutTrq_Value
        (RGNR_ac_B.LeRGNI_M_RgnBrkOutTrq_Init);

    /* Outport: '<Root>/VeRGNR_M_RgnBrkOutTrq_Rear' incorporates:
     *  SignalConversion generated from: '<S4>/LeRGNI_M_RgnBrkOutTrq_Rear_Init'
     */
    (void)Rte_Write_VeRGNR_M_RgnBrkOutTrq_Rear_Value
        (RGNR_ac_B.LeRGNI_M_RgnBrkOutTrq_Rear_Init);

    /* Outport: '<Root>/VeRGNR_b_EstRegenBrkAxTorqFA' incorporates:
     *  SignalConversion generated from: '<S4>/LeRGNI_b_EstRegenBrkAxTorqFA_Init'
     */
    (void)Rte_Write_VeRGNR_b_EstRegenBrkAxTorqFA_Value
        (RGNR_ac_B.LeRGNI_b_EstRegenBrkAxTorqFA_Init);

    /* Merge: '<Root>/Merge_10' incorporates:
     *  SignalConversion generated from: '<S4>/LeRGNI_M_RegenBrkOutTorqCap_Frnt_Sign_write'
     * */
    Rte_IrvWrite_RGNR_PUP_VeRGNR_M_RegenBrkOutTorqCap_Frnt_Sign_write_IRV
        (RGNR_ac_B.LeRGNR_M_RegenBrkOutTorqCap_Frnt_Sign);

    /* Merge: '<Root>/Merge_2_Irv' incorporates:
     *  SignalConversion generated from: '<S4>/LeRGNI_M_RegenBrkOutTorqCap_Init_write'
     * */
    Rte_IrvWrite_RGNR_PUP_VeRGNC_M_RegenBrkOutTorqCap_write_IRV
        (RGNR_ac_B.LeRGNI_M_RegenBrkOutTorqCap_Init);

    /* Merge: '<Root>/Merge_3' incorporates:
     *  SignalConversion generated from: '<S4>/LeRGNI_M_RegenDsblFact_Init_write'
     * */
    Rte_IrvWrite_RGNR_PUP_VeRGNC_r_RegenCapFact_write_IRV
        (RGNR_ac_B.LeRGNI_M_RegenDsblFact_Init);

    /* Merge: '<Root>/Merge_1_Irv' incorporates:
     *  SignalConversion generated from: '<S4>/LeRGNI_M_RgnBrkOutTrq_Init_write'
     * */
    Rte_IrvWrite_RGNR_PUP_VeRGNC_M_RgnReqAftrDecelLimit_write_IRV
        (RGNR_ac_B.LeRGNI_M_RgnBrkOutTrq_Init);

    /* Merge: '<Root>/Merge_11' incorporates:
     *  SignalConversion generated from: '<S4>/LeRGNR_M_RegenBrkOutTorqCap_Rear_Sign_write'
     * */
    Rte_IrvWrite_RGNR_PUP_VeRGNR_M_RegenBrkOutTorqCap_Rear_Sign_write_IRV
        (RGNR_ac_B.LeRGNR_M_RegenBrkOutTorqCap_Rear_Sign);

    /* Merge: '<Root>/Merge_18' incorporates:
     *  SignalConversion generated from: '<S4>/RegenBrkCmndStEnbl_Init_write'
     *  SignalConversion generated from: '<S819>/RegenBrkCmndStEnbl_Init'
     * */
    Rte_IrvWrite_RGNR_PUP_VeRGNR_e_RegenBrkCmndStEnbl_write_IRV
        (RGNR_ac_B.OutportBufferForRegenBrkCmndStEnbl_Init);

    /* Merge: '<Root>/Merge_17' incorporates:
     *  SignalConversion generated from: '<S4>/RegenBrkCmndSt_Init_write'
     * */
    Rte_IrvWrite_RGNR_PUP_VeRGNR_b_RegenBrkCmndSt_write_IRV
        (RGNR_ac_B.OutportBufferForRegenBrkCmndSt_Init);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PUP' */
}

/* Output function */
FUNC(void, RGNR_CODE) PokeRGNF_DVC_RegenBrkCmndStEnbl(VAR(TeODCR_e_IO_CntrlSt,
    AUTOMATIC) LeRGNR_e_RegenBrkCmndStEnbl, VAR(boolean, AUTOMATIC)
    LeRGNR_b_RegenBrkCmndSt)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeRGNF_DVC_RegenBrkCmndStEnbl' */
    /* Merge: '<Root>/Merge_17' incorporates:
     *  SignalConversion generated from: '<S1>/LeRGNR_b_RegenBrkCmndSt'
     *  SignalConversion generated from: '<S1>/VeRGNR_b_RegenBrkCmndSt_write'
     */
    /* Gateway: PokeRGNF_DVC_RegenBrkCmndStEnbl/PokeRGNF_DVC_RegenBrkCmndStEnblChrt */
    /* During: PokeRGNF_DVC_RegenBrkCmndStEnbl/PokeRGNF_DVC_RegenBrkCmndStEnblChrt */
    /* Entry Internal: PokeRGNF_DVC_RegenBrkCmndStEnbl/PokeRGNF_DVC_RegenBrkCmndStEnblChrt */
    /* Transition: '<S6>:2' */
    Rte_IrvWrite_PokeRGNF_DVC_RegenBrkCmndStEnbl_VeRGNR_b_RegenBrkCmndSt_write_IRV
        (LeRGNR_b_RegenBrkCmndSt);

    /* Merge: '<Root>/Merge_18' incorporates:
     *  SignalConversion generated from: '<S1>/LeRGNR_e_RegenBrkCmndStEnbl'
     *  SignalConversion generated from: '<S1>/VeRGNR_e_RegenBrkCmndStEnbl_write'
     */
    Rte_IrvWrite_PokeRGNF_DVC_RegenBrkCmndStEnbl_VeRGNR_e_RegenBrkCmndStEnbl_write_IRV
        (LeRGNR_e_RegenBrkCmndStEnbl);

    /* End of Outputs for SubSystem: '<Root>/PokeRGNF_DVC_RegenBrkCmndStEnbl' */
}

/* Output function */
FUNC(void, RGNR_CODE) RGNR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/RGNR_PwrOn'
     */
    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S823>/VeRGNR_b_RollTestStatus_PID_BIT0_Out_Init' */
    RGNR_ac_B.OutportBufferForVeRGNR_b_RollTestStatus_ = 0U;

    /* SignalConversion generated from: '<S823>/VeRGNR_b_RollTestStatus_PID_BIT1_Out_Init' */
    RGNR_ac_B.OutportBufferForVeRGNR_b_RollTestStatu_b = 0U;

    /* SignalConversion generated from: '<S823>/VeRGNR_b_RollTestStatus_PID_BIT2_Out_Init' */
    RGNR_ac_B.OutportBufferForVeRGNR_b_RollTestStatu_p = 0U;

    /* SignalConversion generated from: '<S823>/VeRGNR_b_RollTestStatus_PID_BIT3_Out_Init' */
    RGNR_ac_B.OutportBufferForVeRGNR_b_RollTestStatu_j = 0U;

    /* SignalConversion generated from: '<S823>/VeRGNR_b_RollTestStatus_PID_BIT4_Out_Init' */
    RGNR_ac_B.OutportBufferForVeRGNR_b_RollTestStatu_c = 0U;

    /* SignalConversion generated from: '<S823>/VeRGNR_b_RollTestStatus_PID_BIT5_Out_Init' */
    RGNR_ac_B.OutportBufferForVeRGNR_b_RollTestStatu_i = 0U;

    /* SignalConversion generated from: '<S823>/VeRGNR_b_RollTestStatus_PID_BIT6_Out_Init' */
    RGNR_ac_B.OutportBufferForVeRGNR_b_RollTestStatu_d = 0U;

    /* SignalConversion generated from: '<S823>/VeRGNR_e_RollTestStatus_Reg_Out_Init' */
    RGNR_ac_B.OutportBufferForVeRGNR_e_RollTestStatus_ = 0U;

    /* SignalConversion generated from: '<S823>/VeRGNR_r_FrontRgnRampOut_Out_Init' */
    RGNR_ac_B.OutportBufferForVeRGNR_r_FrontRgnRampOut = 0.0F;

    /* SignalConversion generated from: '<S823>/VeRGNR_g_RollTestOBDStatus_Reg_Out_Init' */
    RGNR_ac_B.OutportBufferForVeRGNR_g_RollTestOBDStat = 0U;

    /* SignalConversion generated from: '<S823>/VeRGNR_g_RollTestOBDStatus_BIT0_Out_Init' */
    RGNR_ac_B.OutportBufferForVeRGNR_g_RollTestOBDSt_e = 0U;

    /* SignalConversion generated from: '<S823>/VeRGNR_g_RollTestOBDStatus_BIT1_Out_Init' */
    RGNR_ac_B.OutportBufferForVeRGNR_g_RollTestOBDSt_c = 0U;

    /* SignalConversion generated from: '<S823>/VeRGNR_g_RollTestOBDStatus_BIT2_Out_Init' */
    RGNR_ac_B.OutportBufferForVeRGNR_g_RollTestOBDSt_b = 0U;

    /* SignalConversion generated from: '<S823>/VeRGNR_g_RollTestOBDStatus_BIT3_Out_Init' */
    RGNR_ac_B.OutportBufferForVeRGNR_g_RollTestOBDSt_p = 0U;

    /* SignalConversion generated from: '<S823>/VeRGNR_g_RollTestOBDStatus_BIT4_Out_Init' */
    RGNR_ac_B.OutportBufferForVeRGNR_g_RollTestOBDSt_g = 0U;

    /* SignalConversion generated from: '<S823>/VeRGNR_g_RollTestOBDStatus_BIT5_Out_Init' */
    RGNR_ac_B.OutportBufferForVeRGNR_g_RollTestOBDSt_n = 0U;

    /* SignalConversion generated from: '<S823>/VeRGNR_g_RollTestOBDStatus_BIT6_Out_Init' */
    RGNR_ac_B.OutportBufferForVeRGNR_g_RollTestOBDSt_o = 0U;

    /* SignalConversion generated from: '<S823>/VeRGNR_g_RollTestOBDStatus_BIT7_Out_Init' */
    RGNR_ac_B.OutportBufferForVeRGNR_g_RollTestOBDS_bm = 0U;

    /* SignalConversion generated from: '<S823>/VeRGNR_b_InhRgnAct_Out_Init' */
    RGNR_ac_B.OutportBufferForVeRGNR_b_InhRgnAct_Out_I = false;

    /* SignalConversion generated from: '<S823>/VeRGNR_M_ToMin4ECM_Out_Init' */
    RGNR_ac_B.OutportBufferForVeRGNR_M_ToMin4ECM_Out_I = 0.0F;

    /* SignalConversion generated from: '<S823>/VeRGNR_b_AeCoast_Act_Out_Init' */
    RGNR_ac_B.OutportBufferForVeRGNR_b_AeCoast_Act_Out = false;

    /* SignalConversion generated from: '<S823>/VeRGNR_b_AeCoast_TempUnv_Out_Init' */
    RGNR_ac_B.OutportBufferForVeRGNR_b_AeCoast_TempUnv = true;

    /* SignalConversion generated from: '<S823>/VeRGNR_b_AeCoast_AeCoast_Faulted_Out_Init' */
    RGNR_ac_B.OutportBufferForVeRGNR_b_AeCoast_AeCoast = true;

    /* SignalConversion generated from: '<S823>/VeRGNR_b_AeCoast_AeCoast_Avail_Out_Init' */
    RGNR_ac_B.OutportBufferForVeRGNR_b_AeCoast_AeCoa_o = false;

    /* SignalConversion generated from: '<S823>/VeRGNR_b_AeCoast_ActHCP_Out_Init' */
    RGNR_ac_B.OutportBufferForVeRGNR_b_AeCoast_ActHCP_ = false;

    /* SignalConversion generated from: '<S823>/VeRGNR_b_RegenAvailDtrmn_Out_Init' */
    RGNR_ac_B.OutportBufferForVeRGNR_b_RegenAvailDtrmn = false;

    /* SignalConversion generated from: '<S823>/VeRGNR_b_RegenRampOutReqActv_Out_Init' */
    RGNR_ac_B.OutportBufferForVeRGNR_b_RegenRampOutReq = false;

    /* SignalConversion generated from: '<S823>/VeRGNR_M_RegenBrkAxleTrqReq_xSEM_Out_Init' */
    RGNR_ac_B.OutportBufferForVeRGNR_M_RegenBrkAxleTrq = 0.0F;

    /* SignalConversion generated from: '<S823>/VeRGNR_M_EstRegenAchvdAxleTorq_Frnt_Out_Init' */
    RGNR_ac_B.OutportBufferForVeRGNR_M_EstRegenAchvdAx = 0.0F;

    /* SignalConversion generated from: '<S823>/VeRGNR_M_EstRegenAchvdAxleTorq_Rear_Out_Init' */
    RGNR_ac_B.OutportBufferForVeRGNR_M_EstRegenAchvd_m = 0.0F;

    /* SignalConversion generated from: '<S823>/VeRGNR_M_EstRegenAchvdTorq_Frnt_Out_Init' */
    RGNR_ac_B.OutportBufferForVeRGNR_M_EstRegenAchvdTo = 0.0F;

    /* SignalConversion generated from: '<S823>/VeRGNR_M_EstRegenAchvdTorq_Rear_Out_Init' */
    RGNR_ac_B.OutportBufferForVeRGNR_M_EstRegenAchvd_p = 0.0F;

    /* SignalConversion generated from: '<S823>/VeRGNR_r_RIPEfficiency_Out_Init' */
    RGNR_ac_B.OutportBufferForVeRGNR_r_RIPEfficiency_O = 0.0F;

    /* SignalConversion generated from: '<S823>/VeRGNR_M_AeCoastTorqDiff_Out_Init' */
    RGNR_ac_B.OutportBufferForVeRGNR_M_AeCoastTorqDiff = 0.0F;

    /* SignalConversion generated from: '<S823>/VeRGNR_b_AeCoastTorqDiffActv_Out_Init' */
    RGNR_ac_B.OutportBufferForVeRGNR_b_AeCoastTorqDiff = false;

    /* SignalConversion generated from: '<S823>/VeRGNR_b_RegenBrkAxTorqCapFA_Out_Init' */
    RGNR_ac_B.OutportBufferForVeRGNR_b_RegenBrkAxTorqC = false;

    /* SignalConversion generated from: '<S823>/VeRGNC_M_RgnReq_xSEM_write' */
    RGNR_ac_B.OutportBufferForVeRGNC_M_RgnReq_xSEM_wri = 0.0F;

    /* SignalConversion generated from: '<S823>/VeRGNC_M_TrqRegenBrakingBeforeInhibit_write' */
    RGNR_ac_B.OutportBufferForVeRGNC_M_TrqRegenBraking = 0.0F;

    /* SignalConversion generated from: '<S823>/VeRGNC_b_InhRgnAct_write' */
    RGNR_ac_B.OutportBufferForVeRGNC_b_InhRgnAct_write = false;

    /* SignalConversion generated from: '<S823>/VeRGNC_M_RegenBrkAxleTrqReq_xSEM_NoGrd_Out_Init' */
    RGNR_ac_B.OutportBufferForVeRGNC_M_RegenBrkAxleTrq = 0.0F;

    /* End of Outputs for S-Function (fcgen): '<S5>/FcnCallGen' */

    /* Outport: '<Root>/VeRGNR_M_RegenBrkAxleTrqReq_xSEM_NoGrd' incorporates:
     *  SignalConversion generated from: '<S5>/VeRGNC_M_RegenBrkAxleTrqReq_xSEM_NoGrd_Out_Init'
     */
    (void)Rte_Write_VeRGNR_M_RegenBrkAxleTrqReq_xSEM_NoGrd_Value
        (RGNR_ac_B.OutportBufferForVeRGNC_M_RegenBrkAxleTrq);

    /* Outport: '<Root>/VeRGNR_M_AeCoastTorqDiff' incorporates:
     *  SignalConversion generated from: '<S5>/VeRGNR_M_AeCoastTorqDiff_Out_Init'
     */
    (void)Rte_Write_VeRGNR_M_AeCoastTorqDiff_Value
        (RGNR_ac_B.OutportBufferForVeRGNR_M_AeCoastTorqDiff);

    /* Outport: '<Root>/VeRGNR_M_EstRegenAchvdAxleTorq_Frnt' incorporates:
     *  SignalConversion generated from: '<S5>/VeRGNR_M_EstRegenAchvdAxleTorq_Frnt_Out_Init'
     */
    (void)Rte_Write_VeRGNR_M_EstRegenAchvdAxleTorq_Frnt_Value
        (RGNR_ac_B.OutportBufferForVeRGNR_M_EstRegenAchvdAx);

    /* Outport: '<Root>/VeRGNR_M_EstRegenAchvdAxleTorq_Rear' incorporates:
     *  SignalConversion generated from: '<S5>/VeRGNR_M_EstRegenAchvdAxleTorq_Rear_Out_Init'
     */
    (void)Rte_Write_VeRGNR_M_EstRegenAchvdAxleTorq_Rear_Value
        (RGNR_ac_B.OutportBufferForVeRGNR_M_EstRegenAchvd_m);

    /* Outport: '<Root>/VeRGNR_M_EstRegenAchvdTorq_Frnt' incorporates:
     *  SignalConversion generated from: '<S5>/VeRGNR_M_EstRegenAchvdTorq_Frnt_Out_Init'
     */
    (void)Rte_Write_VeRGNR_M_EstRegenAchvdTorq_Frnt_Value
        (RGNR_ac_B.OutportBufferForVeRGNR_M_EstRegenAchvdTo);

    /* Outport: '<Root>/VeRGNR_M_EstRegenAchvdTorq_Rear' incorporates:
     *  SignalConversion generated from: '<S5>/VeRGNR_M_EstRegenAchvdTorq_Rear_Out_Init'
     */
    (void)Rte_Write_VeRGNR_M_EstRegenAchvdTorq_Rear_Value
        (RGNR_ac_B.OutportBufferForVeRGNR_M_EstRegenAchvd_p);

    /* Outport: '<Root>/VeRGNR_M_RegenBrkAxleTrqReq_xSEM' incorporates:
     *  SignalConversion generated from: '<S5>/VeRGNR_M_RegenBrkAxleTrqReq_xSEM_Out_Init'
     */
    (void)Rte_Write_VeRGNR_M_RegenBrkAxleTrqReq_xSEM_Value
        (RGNR_ac_B.OutportBufferForVeRGNR_M_RegenBrkAxleTrq);

    /* Outport: '<Root>/VeRGNR_M_ToMin4ECM' incorporates:
     *  SignalConversion generated from: '<S5>/VeRGNR_M_ToMin4ECM_Out_Init'
     */
    (void)Rte_Write_VeRGNR_M_ToMin4ECM_Value
        (RGNR_ac_B.OutportBufferForVeRGNR_M_ToMin4ECM_Out_I);

    /* Outport: '<Root>/VeRGNR_b_AeCoastTorqDiffActv' incorporates:
     *  SignalConversion generated from: '<S5>/VeRGNR_b_AeCoastTorqDiffActv_Out_Init'
     */
    (void)Rte_Write_VeRGNR_b_AeCoastTorqDiffActv_Value
        (RGNR_ac_B.OutportBufferForVeRGNR_b_AeCoastTorqDiff);

    /* Outport: '<Root>/VeRGNR_b_AeCoast_ActHCP' incorporates:
     *  SignalConversion generated from: '<S5>/VeRGNR_b_AeCoast_ActHCP_Out_Init'
     */
    (void)Rte_Write_VeRGNR_b_AeCoast_ActHCP_Value
        (RGNR_ac_B.OutportBufferForVeRGNR_b_AeCoast_ActHCP_);

    /* Outport: '<Root>/VeRGNR_b_AeCoast_Act' incorporates:
     *  SignalConversion generated from: '<S5>/VeRGNR_b_AeCoast_Act_Out_Init'
     */
    (void)Rte_Write_VeRGNR_b_AeCoast_Act_Value
        (RGNR_ac_B.OutportBufferForVeRGNR_b_AeCoast_Act_Out);

    /* Outport: '<Root>/VeRGNR_b_AeCoast_Avail' incorporates:
     *  SignalConversion generated from: '<S5>/VeRGNR_b_AeCoast_Avail_Out_Init'
     */
    (void)Rte_Write_VeRGNR_b_AeCoast_Avail_Value
        (RGNR_ac_B.OutportBufferForVeRGNR_b_AeCoast_AeCoa_o);

    /* Outport: '<Root>/VeRGNR_b_AeCoast_Faulted' incorporates:
     *  SignalConversion generated from: '<S5>/VeRGNR_b_AeCoast_Faulted_Out_Init'
     */
    (void)Rte_Write_VeRGNR_b_AeCoast_Faulted_Value
        (RGNR_ac_B.OutportBufferForVeRGNR_b_AeCoast_AeCoast);

    /* Outport: '<Root>/VeRGNR_b_AeCoast_TempUnv' incorporates:
     *  SignalConversion generated from: '<S5>/VeRGNR_b_AeCoast_TempUnv_Out_Init'
     */
    (void)Rte_Write_VeRGNR_b_AeCoast_TempUnv_Value
        (RGNR_ac_B.OutportBufferForVeRGNR_b_AeCoast_TempUnv);

    /* Outport: '<Root>/VeRGNR_b_InhRgnAct' incorporates:
     *  SignalConversion generated from: '<S5>/VeRGNR_b_InhRgnAct_Out_Init'
     */
    (void)Rte_Write_VeRGNR_b_InhRgnAct_Value
        (RGNR_ac_B.OutportBufferForVeRGNR_b_InhRgnAct_Out_I);

    /* Outport: '<Root>/VeRGNR_b_RegenAvailDtrmn' incorporates:
     *  SignalConversion generated from: '<S5>/VeRGNR_b_RegenAvailDtrmn_Out_Init'
     */
    (void)Rte_Write_VeRGNR_b_RegenAvailDtrmn_Value
        (RGNR_ac_B.OutportBufferForVeRGNR_b_RegenAvailDtrmn);

    /* Outport: '<Root>/VeRGNR_b_RegenBrkAxTorqCapFA' incorporates:
     *  SignalConversion generated from: '<S5>/VeRGNR_b_RegenBrkAxTorqCapFA_Out_Init'
     */
    (void)Rte_Write_VeRGNR_b_RegenBrkAxTorqCapFA_Value
        (RGNR_ac_B.OutportBufferForVeRGNR_b_RegenBrkAxTorqC);

    /* Outport: '<Root>/VeRGNR_b_RegenRampOutReqActv' incorporates:
     *  SignalConversion generated from: '<S5>/VeRGNR_b_RegenRampOutReqActv_Out_Init'
     */
    (void)Rte_Write_VeRGNR_b_RegenRampOutReqActv_Value
        (RGNR_ac_B.OutportBufferForVeRGNR_b_RegenRampOutReq);

    /* Outport: '<Root>/VeRGNR_b_RollTestStatus_PID_BIT0' incorporates:
     *  SignalConversion generated from: '<S5>/VeRGNR_b_RollTestStatus_PID_BIT0_Out_Init'
     */
    (void)Rte_Write_VeRGNR_b_RollTestStatus_PID_BIT0_Value
        (RGNR_ac_B.OutportBufferForVeRGNR_b_RollTestStatus_);

    /* Outport: '<Root>/VeRGNR_b_RollTestStatus_PID_BIT1' incorporates:
     *  SignalConversion generated from: '<S5>/VeRGNR_b_RollTestStatus_PID_BIT1_Out_Init'
     */
    (void)Rte_Write_VeRGNR_b_RollTestStatus_PID_BIT1_Value
        (RGNR_ac_B.OutportBufferForVeRGNR_b_RollTestStatu_b);

    /* Outport: '<Root>/VeRGNR_b_RollTestStatus_PID_BIT2' incorporates:
     *  SignalConversion generated from: '<S5>/VeRGNR_b_RollTestStatus_PID_BIT2_Out_Init'
     */
    (void)Rte_Write_VeRGNR_b_RollTestStatus_PID_BIT2_Value
        (RGNR_ac_B.OutportBufferForVeRGNR_b_RollTestStatu_p);

    /* Outport: '<Root>/VeRGNR_b_RollTestStatus_PID_BIT3' incorporates:
     *  SignalConversion generated from: '<S5>/VeRGNR_b_RollTestStatus_PID_BIT3_Out_Init'
     */
    (void)Rte_Write_VeRGNR_b_RollTestStatus_PID_BIT3_Value
        (RGNR_ac_B.OutportBufferForVeRGNR_b_RollTestStatu_j);

    /* Outport: '<Root>/VeRGNR_b_RollTestStatus_PID_BIT4' incorporates:
     *  SignalConversion generated from: '<S5>/VeRGNR_b_RollTestStatus_PID_BIT4_Out_Init'
     */
    (void)Rte_Write_VeRGNR_b_RollTestStatus_PID_BIT4_Value
        (RGNR_ac_B.OutportBufferForVeRGNR_b_RollTestStatu_c);

    /* Outport: '<Root>/VeRGNR_b_RollTestStatus_PID_BIT5' incorporates:
     *  SignalConversion generated from: '<S5>/VeRGNR_b_RollTestStatus_PID_BIT5_Out_Init'
     */
    (void)Rte_Write_VeRGNR_b_RollTestStatus_PID_BIT5_Value
        (RGNR_ac_B.OutportBufferForVeRGNR_b_RollTestStatu_i);

    /* Outport: '<Root>/VeRGNR_b_RollTestStatus_PID_BIT6' incorporates:
     *  SignalConversion generated from: '<S5>/VeRGNR_b_RollTestStatus_PID_BIT6_Out_Init'
     */
    (void)Rte_Write_VeRGNR_b_RollTestStatus_PID_BIT6_Value
        (RGNR_ac_B.OutportBufferForVeRGNR_b_RollTestStatu_d);

    /* Outport: '<Root>/VeRGNR_e_RollTestStatus_Reg' incorporates:
     *  SignalConversion generated from: '<S5>/VeRGNR_e_RollTestStatus_Reg_Out_Init'
     */
    (void)Rte_Write_VeRGNR_e_RollTestStatus_Reg_Value
        (RGNR_ac_B.OutportBufferForVeRGNR_e_RollTestStatus_);

    /* Outport: '<Root>/VeRGNR_g_RollTestOBDStatus_BIT0' incorporates:
     *  SignalConversion generated from: '<S5>/VeRGNR_g_RollTestOBDStatus_BIT0_Out_Init'
     */
    (void)Rte_Write_VeRGNR_g_RollTestOBDStatus_BIT0_Value
        (RGNR_ac_B.OutportBufferForVeRGNR_g_RollTestOBDSt_e);

    /* Outport: '<Root>/VeRGNR_g_RollTestOBDStatus_BIT1' incorporates:
     *  SignalConversion generated from: '<S5>/VeRGNR_g_RollTestOBDStatus_BIT1_Out_Init'
     */
    (void)Rte_Write_VeRGNR_g_RollTestOBDStatus_BIT1_Value
        (RGNR_ac_B.OutportBufferForVeRGNR_g_RollTestOBDSt_c);

    /* Outport: '<Root>/VeRGNR_g_RollTestOBDStatus_BIT2' incorporates:
     *  SignalConversion generated from: '<S5>/VeRGNR_g_RollTestOBDStatus_BIT2_Out_Init'
     */
    (void)Rte_Write_VeRGNR_g_RollTestOBDStatus_BIT2_Value
        (RGNR_ac_B.OutportBufferForVeRGNR_g_RollTestOBDSt_b);

    /* Outport: '<Root>/VeRGNR_g_RollTestOBDStatus_BIT3' incorporates:
     *  SignalConversion generated from: '<S5>/VeRGNR_g_RollTestOBDStatus_BIT3_Out_Init'
     */
    (void)Rte_Write_VeRGNR_g_RollTestOBDStatus_BIT3_Value
        (RGNR_ac_B.OutportBufferForVeRGNR_g_RollTestOBDSt_p);

    /* Outport: '<Root>/VeRGNR_g_RollTestOBDStatus_BIT4' incorporates:
     *  SignalConversion generated from: '<S5>/VeRGNR_g_RollTestOBDStatus_BIT4_Out_Init'
     */
    (void)Rte_Write_VeRGNR_g_RollTestOBDStatus_BIT4_Value
        (RGNR_ac_B.OutportBufferForVeRGNR_g_RollTestOBDSt_g);

    /* Outport: '<Root>/VeRGNR_g_RollTestOBDStatus_BIT5' incorporates:
     *  SignalConversion generated from: '<S5>/VeRGNR_g_RollTestOBDStatus_BIT5_Out_Init'
     */
    (void)Rte_Write_VeRGNR_g_RollTestOBDStatus_BIT5_Value
        (RGNR_ac_B.OutportBufferForVeRGNR_g_RollTestOBDSt_n);

    /* Outport: '<Root>/VeRGNR_g_RollTestOBDStatus_BIT6' incorporates:
     *  SignalConversion generated from: '<S5>/VeRGNR_g_RollTestOBDStatus_BIT6_Out_Init'
     */
    (void)Rte_Write_VeRGNR_g_RollTestOBDStatus_BIT6_Value
        (RGNR_ac_B.OutportBufferForVeRGNR_g_RollTestOBDSt_o);

    /* Outport: '<Root>/VeRGNR_g_RollTestOBDStatus_BIT7' incorporates:
     *  SignalConversion generated from: '<S5>/VeRGNR_g_RollTestOBDStatus_BIT7_Out_Init'
     */
    (void)Rte_Write_VeRGNR_g_RollTestOBDStatus_BIT7_Value
        (RGNR_ac_B.OutportBufferForVeRGNR_g_RollTestOBDS_bm);

    /* Outport: '<Root>/VeRGNR_g_RollTestOBDStatus_Reg' incorporates:
     *  SignalConversion generated from: '<S5>/VeRGNR_g_RollTestOBDStatus_Reg_Out_Init'
     */
    (void)Rte_Write_VeRGNR_g_RollTestOBDStatus_Reg_Value
        (RGNR_ac_B.OutportBufferForVeRGNR_g_RollTestOBDStat);

    /* Outport: '<Root>/VeRGNR_r_FrontRgnRampOut' incorporates:
     *  SignalConversion generated from: '<S5>/VeRGNR_r_FrontRgnRampOut_Out_Init'
     */
    (void)Rte_Write_VeRGNR_r_FrontRgnRampOut_Value
        (RGNR_ac_B.OutportBufferForVeRGNR_r_FrontRgnRampOut);

    /* Outport: '<Root>/VeRGNR_r_RIPEfficiency' incorporates:
     *  SignalConversion generated from: '<S5>/VeRGNR_r_RIPEfficiency_Out_Init'
     */
    (void)Rte_Write_VeRGNR_r_RIPEfficiency_Value
        (RGNR_ac_B.OutportBufferForVeRGNR_r_RIPEfficiency_O);

    /* Merge: '<Root>/VeRGNC_M_RgnReq_xSEM_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S5>/VeRGNC_M_RgnReq_xSEM_write'
     * */
    Rte_IrvWrite_RGNR_PwrOn_VeRGNC_M_RgnReq_xSEM_write_IRV
        (RGNR_ac_B.OutportBufferForVeRGNC_M_RgnReq_xSEM_wri);

    /* Merge: '<Root>/VeRGNC_M_TrqRegenBrakingBeforeInhibit_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S5>/VeRGNC_M_TrqRegenBrakingBeforeInhibit_write'
     * */
    Rte_IrvWrite_RGNR_PwrOn_VeRGNC_M_TrqRegenBrakingBeforeInhibit_write_IRV
        (RGNR_ac_B.OutportBufferForVeRGNC_M_TrqRegenBraking);

    /* Merge: '<Root>/VeRGNC_b_InhRgnAct_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S5>/VeRGNC_b_InhRgnAct_write'
     * */
    Rte_IrvWrite_RGNR_PwrOn_VeRGNC_b_InhRgnAct_write_IRV
        (RGNR_ac_B.OutportBufferForVeRGNC_b_InhRgnAct_write);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, RGNR_CODE) RGNR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PUP' incorporates:
     *  SubSystem: '<Root>/RGNR_PUP'
     */
    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/InitController'
     */
    /* SystemInitialize for SignalConversion generated from: '<S819>/RegenBrkCmndStEnbl_Init' incorporates:
     *  Constant: '<S822>/Constant'
     */
    RGNR_ac_B.OutportBufferForRegenBrkCmndStEnbl_Init = RGNR_ac_ConstB.Constant;

    /* End of SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PUP' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/RGNR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S823>/VeRGNR_b_AeCoast_TempUnv_Out_Init' */
    RGNR_ac_B.OutportBufferForVeRGNR_b_AeCoast_TempUnv = true;

    /* SystemInitialize for SignalConversion generated from: '<S823>/VeRGNR_b_AeCoast_AeCoast_Faulted_Out_Init' */
    RGNR_ac_B.OutportBufferForVeRGNR_b_AeCoast_AeCoast = true;

    /* End of SystemInitialize for S-Function (fcgen): '<S5>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
