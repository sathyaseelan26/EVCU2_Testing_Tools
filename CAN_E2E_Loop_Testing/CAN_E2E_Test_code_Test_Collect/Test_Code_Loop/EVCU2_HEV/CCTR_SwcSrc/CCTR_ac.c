/*
 * File: CCTR_ac.c
 *
 * Code generated for Simulink model 'CCTR_ac'.
 *
 * Model version                  : 9.54
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:14:31 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CCTR_ac.h"
#include "look1_iflf_binlca_16a.h"

/* Named constants for Chart: '<S250>/InvldCcBttnTrans' */
#if Rte_SysCon_Variant_CCTR_3
#define CCTR_ac_IN_InValid_Transition  ((uint8)1U)
#endif

#if Rte_SysCon_Variant_CCTR_3
#define CCTR_ac_IN_Valid_Transition    ((uint8)2U)
#endif

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_CCTR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(boolean, CCTR_VAR_INIT) HeCCTR_b_isM182 = 0;/* Referenced by: '<S255>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(boolean, CCTR_VAR_INIT) HeCCTR_b_isX250 = 0;/* Referenced by: '<S256>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(uint16, CCTR_VAR_INIT) KeCCTR_Cnt_Lv1CrusOnOffSwMinCnts =
    7U;                                /* Referenced by: '<S258>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_Cnt_Lv1CrusSwAccelLimCnts =
    400.0F;                            /* Referenced by: '<S302>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_Cnt_Lv1CrusSwMinCnts = 6.0F;/* Referenced by: '<S299>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_Cnt_Lv1CrusSwNPMissCntrLim =
    9600.0F;                           /* Referenced by: '<S303>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_Cnt_Lv1CrusSwStateCntrMax =
    12500.0F;                          /* Referenced by: '<S300>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(uint16, CCTR_VAR_INIT) KeCCTR_Cnt_Lv1CrusSwStuckCnts =
    9600U;                             /* Referenced by: '<S304>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(uint16, CCTR_VAR_INIT) KeCCTR_Cnt_SetSpdDisp = 50U;/* Referenced by: '<S176>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(uint16, CCTR_VAR_INIT) KeCCTR_Cnt_SpdCntrlSw1_FailCnt =
    50U;           /* Referenced by: '<S279>/KeCCTR_Cnt_HTL_PerfDiag_FailCnt' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(uint16, CCTR_VAR_INIT) KeCCTR_Cnt_SpdCntrlSw1_SmpCnt = 80U;
                    /* Referenced by: '<S280>/KeCCTR_Cnt_HTL_PerfDiag_SmpCnt' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_K_CcAccGainBlndDec = 0.5F;/* Referenced by: '<S45>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_K_CcAccGainBlndInc = 0.5F;/* Referenced by: '<S46>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_K_CcDGainCal = 0.0F;/* Referenced by: '<S50>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_K_CcResumAccDGain = 0.0F;/* Referenced by: '<S51>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_K_CcResumGainBlndDec = 0.5F;/* Referenced by: '<S47>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_K_CcResumGainBlndInc = 0.5F;/* Referenced by: '<S48>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_K_CcSetAccelerationGain =
    0.0F;                              /* Referenced by: '<S74>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_K_CcTapDGain = 0.0F;/* Referenced by: '<S52>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_K_CcTapGainBlndDec = 1.0F;/* Referenced by: '<S69>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_K_CcTapGainBlndInc = 0.5F;/* Referenced by: '<S70>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_K_PtcWhlTrqToPwrFctr =
    0.001201F;                         /* Referenced by: '<S75>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_P_CcDTermLowerLimit = 0.0F;/* Referenced by: '<S53>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_P_CcDTermUpperLimit = 0.0F;/* Referenced by: '<S54>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_P_CcITermLowerLimit =
    -50.0F;                            /* Referenced by: '<S55>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_P_CcITermUpperLimit =
    150.0F;                            /* Referenced by: '<S56>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_P_CcMaxPwrOffset = 10.0F;/* Referenced by: '<S57>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_P_CcMinPwrOffset = -5.0F;/* Referenced by: '<S58>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_P_CcPTermLowerLimit =
    -100.0F;                           /* Referenced by: '<S64>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_P_CcPTermUpperLimit =
    200.0F;                            /* Referenced by: '<S65>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_a_CcSetAccelerationThres =
    2.0F;                              /* Referenced by: '<S76>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(boolean, CCTR_VAR_INIT) KeCCTR_b_BSMTrqEnbld_Selector = 1;/* Referenced by: '<S274>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(boolean, CCTR_VAR_INIT) KeCCTR_b_CCInstantActivationEnable
    = 1;                               /* Referenced by: '<S332>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(boolean, CCTR_VAR_INIT) KeCCTR_b_CCLogicCheck = 0;/* Referenced by: '<S328>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(boolean, CCTR_VAR_INIT) KeCCTR_b_CC_Accel_Active = 1;/* Referenced by: '<S335>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(boolean, CCTR_VAR_INIT) KeCCTR_b_CC_Accel_Ovrrd_Enab = 0;/* Referenced by: '<S336>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(boolean, CCTR_VAR_INIT) KeCCTR_b_CC_Cancel_Active = 1;/* Referenced by: '<S337>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(boolean, CCTR_VAR_INIT) KeCCTR_b_CC_Cancel_Ovrrd_Enab = 0;/* Referenced by: '<S338>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(boolean, CCTR_VAR_INIT) KeCCTR_b_CC_CoastDecel_Active = 1;/* Referenced by: '<S339>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(boolean, CCTR_VAR_INIT) KeCCTR_b_CC_CoastDecel_Ovrrd_Enab =
    0;                                 /* Referenced by: '<S340>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(boolean, CCTR_VAR_INIT) KeCCTR_b_CC_OnOff_Active = 1;/* Referenced by: '<S341>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(boolean, CCTR_VAR_INIT) KeCCTR_b_CC_OnOff_Ovrrd_Enab = 0;/* Referenced by: '<S342>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(boolean, CCTR_VAR_INIT) KeCCTR_b_CC_Resume_Active = 1;/* Referenced by: '<S343>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(boolean, CCTR_VAR_INIT) KeCCTR_b_CC_Resume_Ovrrd_Enab = 0;/* Referenced by: '<S344>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(boolean, CCTR_VAR_INIT) KeCCTR_b_CC_SetSwtch_Active = 1;/* Referenced by: '<S345>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(boolean, CCTR_VAR_INIT) KeCCTR_b_CC_SetSwtch_Ovrrd_Enab =
    0;                                 /* Referenced by: '<S346>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(boolean, CCTR_VAR_INIT) KeCCTR_b_Cc5UnitAccelDecelEnabl =
    1;                                 /* Referenced by: '<S259>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(boolean, CCTR_VAR_INIT) KeCCTR_b_CrusSwStuckRevSts = 1;/* Referenced by: '<S305>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(boolean, CCTR_VAR_INIT) KeCCTR_b_ESCFailSts_OFF = 1;/* Referenced by: '<S260>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(boolean, CCTR_VAR_INIT) KeCCTR_b_EnblSetSpdDisp = 0;/* Referenced by: '<S177>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(boolean, CCTR_VAR_INIT) KeCCTR_b_Enblvehspddisp = 0;/* Referenced by: '<S178>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(boolean, CCTR_VAR_INIT) KeCCTR_b_IResetInhResCoast = 1;/* Referenced by: '<S242>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(boolean, CCTR_VAR_INIT) KeCCTR_b_IResetSetMdDelay = 1;/* Referenced by: '<S231>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(boolean, CCTR_VAR_INIT) KeCCTR_b_LV2CrusOffOvvrd_Enab = 0;/* Referenced by: '<S347>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(boolean, CCTR_VAR_INIT) KeCCTR_b_LV2CrusOffOvvrd_Inactive =
    0;                                 /* Referenced by: '<S348>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(boolean, CCTR_VAR_INIT) KeCCTR_b_ONOFFModDetBCMOvrrd = 1;/* Referenced by: '<S118>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(boolean, CCTR_VAR_INIT) KeCCTR_b_OverrideStoreFlag = 1;/* Referenced by: '<S126>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(boolean, CCTR_VAR_INIT) KeCCTR_b_ResumeSet = 1;/* Referenced by: '<S127>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(boolean, CCTR_VAR_INIT) KeCCTR_b_SpdCntrlSw1_LtchEnbl = 0;/* Referenced by: '<S281>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_k_CcAccFltrConst = 1.0F;/* Referenced by: '<S78>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_k_CcHiSpdFltrConst =
    0.21875F;                          /* Referenced by: '<S244>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_k_CcLowSpdFltrConst =
    0.125F;                            /* Referenced by: '<S245>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_k_CcVehSpdErrHiSpdFltCnst =
    0.1016F;                           /* Referenced by: '<S236>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_k_CcVehSpdErrLoSpdFltCnst =
    0.3008F;                           /* Referenced by: '<S237>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(uint8, CCTR_VAR_INIT) KeCCTR_scl_Lv1CrusStateStuckLim = 1U;/* Referenced by: '<S306>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(uint8, CCTR_VAR_INIT) KeCCTR_scl_Lv1CrusSwNPStateEnabl =
    1U;                                /* Referenced by: '<S307>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_t_12p5dt = 0.0125F;/* Referenced by: '<S261>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_t_CcAccelTime = 0.4F;/* Referenced by: '<S109>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_t_CcCoastTime = 0.4F;/* Referenced by: '<S111>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_t_CcOnOffSwOnTime = 0.4F;/* Referenced by: '<S308>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_t_CcUnitIncDecTmrLmt = 0.8F;/* Referenced by: '<S165>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_t_EcmWarnTmrLmt = 5.0F;/* Referenced by: '<S96>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_t_tExit_Acc = 4800.0F;/* Referenced by: '<S110>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_v_Cc4BSwLatchedDrOvClrErr =
    -999.0F;                           /* Referenced by: '<S128>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_v_Cc4BSwTapDnUSpdErrThresh =
    5.0F;                              /* Referenced by: '<S129>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_v_CcAccelSetSpdInc =
    0.1094F;                           /* Referenced by: '<S189>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_v_CcCoastCntrlSpdDec = 1.0F;/* Referenced by: '<S190>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_v_CcIFrzVehSpdThres =
    255.0F;                            /* Referenced by: '<S59>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_v_CcKphMax = 135.0F;/* Referenced by: '<S349>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_v_CcKphMin = 38.0F;/* Referenced by: '<S350>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_v_CcKphMinRes = 38.0F;/* Referenced by: '<S351>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_v_CcMphMax = 100.0F;/* Referenced by: '<S352>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_v_CcMphMin = 25.0F;/* Referenced by: '<S353>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_v_CcMphMinRes = 25.0F;/* Referenced by: '<S354>/Calib' */

#endif

#if !Rte_SysCon_Variant_CCTR_2 && Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_v_CcResumCntrlSpdDec =
    0.1563F;                           /* Referenced by: '<S195>/Calib' */

#endif

#if !Rte_SysCon_Variant_CCTR_2 && Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_v_CcResumCntrlSpdInc =
    0.1094F;                           /* Referenced by: '<S196>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_v_CcResumEndSpdThres = 1.0F;/* Referenced by: '<S119>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_v_CcSetKphMax = 135.0F;/* Referenced by: '<S355>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_v_CcSetKphMin = 38.0F;/* Referenced by: '<S356>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_v_CcSetMphMax = 100.0F;/* Referenced by: '<S357>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_v_CcSetMphMin = 25.0F;/* Referenced by: '<S358>/Calib' */

#endif

#if !Rte_SysCon_Variant_CCTR_2 && Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_v_CcTapCntrlSpdDec =
    0.2031F;                           /* Referenced by: '<S197>/Calib' */

#endif

#if !Rte_SysCon_Variant_CCTR_2 && Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_v_CcTapCntrlSpdInc =
    0.1719F;                           /* Referenced by: '<S198>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_v_CcTapDwnDec_KPH = 1.0F;/* Referenced by: '<S219>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_v_CcTapDwnDec_MPH = 1.0F;/* Referenced by: '<S220>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_v_CcTapEndSpdThres =
    0.1563F;                           /* Referenced by: '<S136>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_v_CcTapUpInc_KPH = 1.0F;/* Referenced by: '<S221>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_v_CcTapUpInc_MPH = 1.0F;/* Referenced by: '<S222>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_v_CcUnitStepKPH = 5.0F;/* Referenced by: '<S191>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_v_CcUnitStepMPH = 5.0F;/* Referenced by: '<S192>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_v_CcVehSpdErrFltCnstThres =
    35.0F;                             /* Referenced by: '<S238>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_v_CcVehSpdResolutionThres =
    35.0F;                             /* Referenced by: '<S246>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_v_OverrideThrs = 15.0F;/* Referenced by: '<S130>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_v_SetSpdDispMult = 0.1128F;/* Referenced by: '<S179>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_v_SpdHysAccelStrat = 0.0F;/* Referenced by: '<S223>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_v_SpdHysCoastStrat = 0.0F;/* Referenced by: '<S224>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_v_VDiff1 = 255.0F;/* Referenced by: '<S131>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KeCCTR_v_VDiff2 = 255.0F;/* Referenced by: '<S132>/Calib' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KtCCTR_K_CcIGainTbl[10] =
{
    2.5F, 2.5F, 2.75F, 3.5F, 4.53F, 5.5F, 6.75F, 7.38F, 8.25F, 8.63F
} ;                                    /* Referenced by: '<S60>/Vector' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KtCCTR_K_CcPGainTbl[10] =
{
    9.0F, 9.5F, 12.0F, 17.5F, 20.5F, 27.5F, 29.5F, 30.5F, 32.0F, 39.5F
} ;                                    /* Referenced by: '<S66>/Vector' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KtCCTR_K_CcResumAccIGainTbl[10] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S61>/Vector' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KtCCTR_K_CcResumAccPGainTbl[10] =
{
    15.0F, 15.0F, 18.0F, 22.5F, 22.5F, 25.0F, 28.0F, 29.0F, 30.0F, 35.0F
} ;                                    /* Referenced by: '<S67>/Vector' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KtCCTR_K_CcTapIGainTbl[10] =
{
    1.0F, 1.0F, 1.0F, 1.25F, 2.0F, 2.5F, 3.0F, 5.0F, 5.5F, 5.0F
} ;                                    /* Referenced by: '<S62>/Vector' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KtCCTR_K_CcTapPGainTbl[10] =
{
    9.0F, 9.5F, 10.0F, 14.0F, 17.0F, 24.0F, 26.0F, 27.0F, 31.5F, 36.0F
} ;                                    /* Referenced by: '<S68>/Vector' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KtCCTR_P_CcRoadLoadFfPwrTbl[17] =
{
    1.81019F, 2.27693F, 2.75313F, 3.24068F, 3.74148F, 4.25743F, 4.7904F,
    5.34229F, 5.91501F, 6.51043F, 7.13045F, 7.77696F, 8.45186F, 9.15704F,
    9.89439F, 10.6658F, 11.4731598F
} ;                                    /* Referenced by: '<S73>/Vector' */

#endif

#if Rte_SysCon_Variant_CCTR_2 && Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KtCCTR_v_CcResumeCtrlSpdDec[3] =
{
    0.0075F, 0.0125F, 0.025F
} ;                                    /* Referenced by: '<S202>/Vector' */

#endif

#if Rte_SysCon_Variant_CCTR_2 && Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KtCCTR_v_CcResumeCtrlSpdDecSport[3]
    =
{
    0.0075F, 0.0125F, 0.025F
} ;                                    /* Referenced by: '<S203>/Vector' */

#endif

#if Rte_SysCon_Variant_CCTR_2 && Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KtCCTR_v_CcResumeCtrlSpdInc[7] =
{
    0.03125F, 0.01875F, 0.0175F, 0.013125F, 0.01F, 0.008125F, 0.0F
} ;                                    /* Referenced by: '<S204>/Vector' */

#endif

#if Rte_SysCon_Variant_CCTR_2 && Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KtCCTR_v_CcResumeCtrlSpdIncSport[7]
    =
{
    0.03125F, 0.01875F, 0.0175F, 0.013125F, 0.01F, 0.008125F, 0.0F
} ;                                    /* Referenced by: '<S205>/Vector' */

#endif

#if Rte_SysCon_Variant_CCTR_2 && Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KtCCTR_v_CcTapCtrlSpdDec[3] =
{
    0.0075F, 0.0125F, 0.025F
} ;                                    /* Referenced by: '<S206>/Vector' */

#endif

#if Rte_SysCon_Variant_CCTR_2 && Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KtCCTR_v_CcTapCtrlSpdDecSport[3] =
{
    0.0075F, 0.0125F, 0.025F
} ;                                    /* Referenced by: '<S207>/Vector' */

#endif

#if Rte_SysCon_Variant_CCTR_2 && Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KtCCTR_v_CcTapCtrlSpdInc[7] =
{
    0.03125F, 0.01875F, 0.0175F, 0.013125F, 0.01F, 0.008125F, 0.0F
} ;                                    /* Referenced by: '<S208>/Vector' */

#endif

#if Rte_SysCon_Variant_CCTR_2 && Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KtCCTR_v_CcTapCtrlSpdIncSport[7] =
{
    0.03125F, 0.01875F, 0.0175F, 0.013125F, 0.01F, 0.008125F, 0.0F
} ;                                    /* Referenced by: '<S209>/Vector' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KxCCTR_K_CcIGainTbl[10] =
{
    25.0F, 30.0F, 35.0F, 40.0F, 45.0F, 55.0F, 65.0F, 70.0F, 75.0F, 80.0F
} ;                                    /* Referenced by: '<S60>/Vector' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KxCCTR_K_CcPGainTbl[10] =
{
    25.0F, 30.0F, 35.0F, 40.0F, 45.0F, 55.0F, 65.0F, 70.0F, 75.0F, 80.0F
} ;                                    /* Referenced by: '<S66>/Vector' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KxCCTR_K_CcResumAccIGainTbl[10] =
{
    25.0F, 30.0F, 35.0F, 40.0F, 45.0F, 55.0F, 65.0F, 70.0F, 75.0F, 80.0F
} ;                                    /* Referenced by: '<S61>/Vector' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KxCCTR_K_CcResumAccPGainTbl[10] =
{
    25.0F, 30.0F, 35.0F, 40.0F, 45.0F, 55.0F, 65.0F, 70.0F, 75.0F, 80.0F
} ;                                    /* Referenced by: '<S67>/Vector' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KxCCTR_K_CcTapIGainTbl[10] =
{
    25.0F, 30.0F, 35.0F, 40.0F, 45.0F, 55.0F, 65.0F, 70.0F, 75.0F, 80.0F
} ;                                    /* Referenced by: '<S62>/Vector' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KxCCTR_K_CcTapPGainTbl[10] =
{
    25.0F, 30.0F, 35.0F, 40.0F, 45.0F, 55.0F, 65.0F, 70.0F, 75.0F, 80.0F
} ;                                    /* Referenced by: '<S68>/Vector' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KxCCTR_P_CcRoadLoadFfPwrTbl[17] =
{
    5.5556F, 6.9445F, 8.3333F, 9.7222F, 11.1111F, 12.5F, 13.8889F, 15.2778F,
    16.6667F, 18.0556F, 19.4445F, 20.8334F, 22.2222F, 23.6111F, 25.0F, 26.3889F,
    27.7778F
} ;                                    /* Referenced by: '<S73>/Vector' */

#endif

#if Rte_SysCon_Variant_CCTR_2 && Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KxCCTR_v_CcResumeCtrlSpdDec[3] =
{
    0.0F, 10.0F, 20.0F
} ;                                    /* Referenced by: '<S202>/Vector' */

#endif

#if Rte_SysCon_Variant_CCTR_2 && Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KxCCTR_v_CcResumeCtrlSpdDecSport[3]
    =
{
    0.0F, 10.0F, 20.0F
} ;                                    /* Referenced by: '<S203>/Vector' */

#endif

#if Rte_SysCon_Variant_CCTR_2 && Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KxCCTR_v_CcResumeCtrlSpdInc[7] =
{
    0.0F, 25.0F, 40.0F, 72.0F, 120.0F, 180.0F, 210.0F
} ;                                    /* Referenced by: '<S204>/Vector' */

#endif

#if Rte_SysCon_Variant_CCTR_2 && Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KxCCTR_v_CcResumeCtrlSpdIncSport[7]
    =
{
    0.0F, 25.0F, 40.0F, 72.0F, 120.0F, 180.0F, 210.0F
} ;                                    /* Referenced by: '<S205>/Vector' */

#endif

#if Rte_SysCon_Variant_CCTR_2 && Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KxCCTR_v_CcTapCtrlSpdDec[3] =
{
    0.0F, 10.0F, 20.0F
} ;                                    /* Referenced by: '<S206>/Vector' */

#endif

#if Rte_SysCon_Variant_CCTR_2 && Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KxCCTR_v_CcTapCtrlSpdDecSport[3] =
{
    0.0F, 10.0F, 20.0F
} ;                                    /* Referenced by: '<S207>/Vector' */

#endif

#if Rte_SysCon_Variant_CCTR_2 && Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KxCCTR_v_CcTapCtrlSpdInc[7] =
{
    0.0F, 25.0F, 40.0F, 72.0F, 120.0F, 180.0F, 210.0F
} ;                                    /* Referenced by: '<S208>/Vector' */

#endif

#if Rte_SysCon_Variant_CCTR_2 && Rte_SysCon_Variant_CCTR_3

static volatile CONST(float32, CCTR_VAR_INIT) KxCCTR_v_CcTapCtrlSpdIncSport[7] =
{
    0.0F, 25.0F, 40.0F, 72.0F, 120.0F, 180.0F, 210.0F
} ;                                    /* Referenced by: '<S209>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_CCTR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CCTR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTI_b_BrkPdlSts;/* '<S277>/Switch1' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(uint8, CCTR_VAR_INIT) VeCCTR_Cnt_Lv1CrusStatePriority1;/* '<S250>/CcBttnPrityMap' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(float32, CCTR_VAR_INIT) VeCCTR_Cnt_Lv1CrusSwStateCntr;/* '<S301>/Switch' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(uint8, CCTR_VAR_INIT) VeCCTR_Cnt_PrevLv1CrusStatePriority1;/* '<S250>/CcBttnPrityMap' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(uint16, CCTR_VAR_INIT) VeCCTR_Cnt_SpdCntrlSw1_FailCnt;/* '<S290>/Switch1' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(uint16, CCTR_VAR_INIT) VeCCTR_Cnt_SpdCntrlSw1_SmpCnt;/* '<S291>/Switch1' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(float32, CCTR_VAR_INIT) VeCCTR_K_CcDGain;/* '<S40>/sum cruise terms15' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(float32, CCTR_VAR_INIT) VeCCTR_K_CcIGain;/* '<S41>/CC_I_GAIN' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(float32, CCTR_VAR_INIT) VeCCTR_K_CcIGainTbl;/* '<S60>/Vector' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(float32, CCTR_VAR_INIT) VeCCTR_K_CcPGain;/* '<S42>/CC_P_GAIN' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(float32, CCTR_VAR_INIT) VeCCTR_K_CcResAccelGainBlnd;/* '<S49>/Switch' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(float32, CCTR_VAR_INIT) VeCCTR_K_CcResumAccIGainTbl;/* '<S61>/Vector' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(float32, CCTR_VAR_INIT) VeCCTR_K_CcTapGainBlnd;/* '<S71>/Switch' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(float32, CCTR_VAR_INIT) VeCCTR_K_CcTapIGainTbl;/* '<S62>/Vector' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(float32, CCTR_VAR_INIT) VeCCTR_P_CcAccModSetFF;/* '<S72>/CC_ACC_MOD_SET_FF' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(float32, CCTR_VAR_INIT) VeCCTR_P_CcDTerm;/* '<S40>/Clip I4' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(float32, CCTR_VAR_INIT) VeCCTR_P_CcITerm;/* '<S41>/x' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(float32, CCTR_VAR_INIT) VeCCTR_P_CcITermFFPwr;/* '<S72>/CC_I_TERM_FF_PWR' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(float32, CCTR_VAR_INIT) VeCCTR_P_CcPTerm;/* '<S42>/Clip I4' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(float32, CCTR_VAR_INIT) VeCCTR_P_CcRoadLoadFfPwrTbl;/* '<S73>/Vector' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(float32, CCTR_VAR_INIT) VeCCTR_P_PtcFinalDrivePwr;/* '<S72>/Product1' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(float32, CCTR_VAR_INIT) VeCCTR_a_CcVehAccelMS2;/* '<S77>/Switch1' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_AccelFlg;/* '<S100>/Relational Operator5' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_CCInteractions;/* '<S254>/Logical3' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_Cc4ButnLatchedDrOv;/* '<S133>/OR1' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_CcAccelMode;/* '<S97>/CC_ACCEL_MODE' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_CcCancelMode;/* '<S98>/CC_CANCEL_MODE' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_CcCntrlSpdRampEnable;/* '<S227>/OR1' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_CcCntrlSpdReset;/* '<S169>/Logical Operator' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_CcCntrlSpd_Reset;/* '<S170>/or' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_CcCntrlrSat;/* '<S41>/CC_CNTRLR_SAT1' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_CcCoastMode;/* '<S99>/CC_COAST_MODE' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_CcCoastReset;/* '<S183>/AND' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_CcESCEventDetec;/* '<S87>/SigConvForSigProp_VS2_0' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_CcEnabledPrev;/* '<S79>/FixPt Unit Delay1' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_CcEngaged_Prev;/* '<S79>/Unit Delay4' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_CcHasResetCntrlSpd;/* '<S187>/AND' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_CcIHasbeenReset;/* '<S41>/Logical Operator19' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_CcIReset;/* '<S230>/or' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_CcITermFrzDrvOvrrd;/* '<S63>/OR1' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_CcInhEnable;/* '<S86>/CC_INH_ENABLE' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_CcOffMode;/* '<S101>/CC_OFF_MODE' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_CcOnMode;/* '<S101>/CC_ON_MODE' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_CcOnOffSts_Out;/* '<S269>/Switch4' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_CcResAccTmrLockout;/* '<S122>/OR1' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_CcResumGainBlndIncFlg;/* '<S120>/OR1' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_CcResumeMode;/* '<S103>/CC_RESUME_MODE' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_CcResumeModeLatch;/* '<S121>/OR1' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_CcSetEngaged;/* '<S172>/CC_SET_ENGAGED' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_CcSetMode;/* '<S104>/CC_SET_MODE_4BSW' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_CcSetSpdClearEngaged;/* '<S172>/CC_SETSPD_CLEAR_ENGAGED' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_CcSetSw;/* '<S269>/Switch7' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_CcTapDnActive;/* '<S135>/OR1' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_CcTapDnMode;/* '<S106>/CC_TAP_DN_MODE' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_CcTapMode;/* '<S137>/OR1' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_CcTapUpMode;/* '<S107>/CC_TAP_UP_MODE' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_CcUnitIncDecTggr;/* '<S158>/Comparison1' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_CoastFlag;/* '<S100>/Relational Operator1' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_CruiseControlOnOffSts;/* '<S257>/Switch1' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_DrOvSetReq;/* '<S104>/Logical3' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_FaultActive;/* '<S254>/Logical1' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_Lv1CrusInvldTransition_out;/* '<S250>/InvldCcBttnTrans' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_Lv1CrusResAccSwStuckFailed;/* '<S252>/Logical2' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_Lv1CrusSwNPMiss;/* '<S252>/Comparison1' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_Lv1CrusSwStateUnstable;/* '<S251>/Comparison2' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_Lv1OffReq;/* '<S254>/Logical4' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_Lv2CrusOff;/* '<S269>/Switch8' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_RampEnabSet;/* '<S172>/Logical Operator10' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_ResSetReq;/* '<S104>/Logical4' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_ResumeFlg;/* '<S100>/Relational Operator3' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_SpdKiss;/* '<S169>/Comparison4' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(boolean, CCTR_VAR_INIT) VeCCTR_b_VDifSetReq;/* '<S104>/Logical2' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(uint8, CCTR_VAR_INIT) VeCCTR_e_ActualLv1CrusCANState;/* '<S254>/Switch' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(uint8, CCTR_VAR_INIT) VeCCTR_e_Lv1CrusCANStateTemp;/* '<S24>/CcModeDeterm' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(uint8, CCTR_VAR_INIT) VeCCTR_e_PrevLv1CrusCanState;/* '<S251>/Unit Delay' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(float32, CCTR_VAR_INIT) VeCCTR_t_CcCoastTmr;/* '<S162>/Switch' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(float32, CCTR_VAR_INIT) VeCCTR_t_CcSwAccelTmr;/* '<S159>/Switch' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(float32, CCTR_VAR_INIT) VeCCTR_t_CcSwBrakeTmr;/* '<S160>/Switch' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(float32, CCTR_VAR_INIT) VeCCTR_t_CcSwCancelTmr;/* '<S161>/Switch' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(float32, CCTR_VAR_INIT) VeCCTR_t_CcSwCoastTmr;/* '<S162>/Switch1' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(float32, CCTR_VAR_INIT) VeCCTR_t_CcSwOnOffTmr;/* '<S163>/Switch' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(float32, CCTR_VAR_INIT) VeCCTR_t_CcSwPNTmr;/* '<S164>/Switch' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(float32, CCTR_VAR_INIT) VeCCTR_t_CcUnitIncDecTmr;/* '<S158>/FixPt Switch2' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(float32, CCTR_VAR_INIT) VeCCTR_v_CcCntrlSpdCoast;/* '<S171>/MinMax1' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(float32, CCTR_VAR_INIT) VeCCTR_v_CcCntrlSpdPreRamp;/* '<S171>/Switch2' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(float32, CCTR_VAR_INIT) VeCCTR_v_CcCntrlSpdRmpd;/* '<S171>/Switch1' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(float32, CCTR_VAR_INIT) VeCCTR_v_CcDerivVehSpdErr;/* '<S228>/switch1' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(float32, CCTR_VAR_INIT) VeCCTR_v_CcMaxSetSpd;/* '<S270>/Switch7' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(float32, CCTR_VAR_INIT) VeCCTR_v_CcMaxSpd;/* '<S270>/Switch10' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(float32, CCTR_VAR_INIT) VeCCTR_v_CcMinSetSpd;/* '<S270>/Switch1' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(float32, CCTR_VAR_INIT) VeCCTR_v_CcMinSpd;/* '<S270>/Switch9' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(float32, CCTR_VAR_INIT) VeCCTR_v_CcMinSpdRes;/* '<S270>/Switch12' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(float32, CCTR_VAR_INIT) VeCCTR_v_CcPreSetSpdCluster;/* '<S168>/Switch3' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(float32, CCTR_VAR_INIT) VeCCTR_v_CcSetSpdAccelCoast;/* '<S171>/FixPt Switch2' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(float32, CCTR_VAR_INIT) VeCCTR_v_CcSetSpdUnbiased;/* '<S172>/Add' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(float32, CCTR_VAR_INIT) VeCCTR_v_CcVehSpdErr;/* '<S228>/switch' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(float32, CCTR_VAR_INIT) VeCCTR_v_SetSpd5UnitTemp;/* '<S171>/FixPt Switch7' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(float32, CCTR_VAR_INIT) VeCCTR_v_SetSpdBiased;/* '<S172>/Switch3' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(float32, CCTR_VAR_INIT) VeCCTR_v_SetSpdPostTap;/* '<S172>/temp SetSpd 1' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(float32, CCTR_VAR_INIT) VeCCTR_v_SetSpdTemp;/* '<S172>/Switch' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(float32, CCTR_VAR_INIT) VeCCTR_v_SetSpdUnbiasedPID_KPH;/* '<S172>/Switch12' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(float32, CCTR_VAR_INIT) VeCCTR_v_VehSpdBiasRound;/* '<S270>/Rounding1' */

#endif

#if Rte_SysCon_Variant_CCTR_3

static VAR(float32, CCTR_VAR_INIT) VeCCTR_v_VehSpdUnbiasedConv;/* '<S270>/Switch11' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CCTR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_CCTR
#include "MemMap.h"

CONST(ConstB_CCTR_ac_T, CCTR_VAR_INIT) CCTR_ac_ConstB =
{
    CeDFIB_e_Init,                     /* '<S364>/Constant' */
    CeDFIB_e_Init                      /* '<S365>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_CCTR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CCTR
#include "MemMap.h"

VAR(B_CCTR_ac_T, CCTR_VAR_INIT) CCTR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CCTR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CCTR
#include "MemMap.h"

VAR(DW_CCTR_ac_T, CCTR_VAR_INIT) CCTR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CCTR
#include "MemMap.h"

/* Model step function for TID1 */
#if Rte_SysCon_Variant_CCTR_3

FUNC(void, CCTR_CODE) CCTR_MedTEB(void) /* Explicit Task: MedTEB */
{

#if Rte_SysCon_Variant_CCTR_3

    TeAPSR_e_Lv1PvMode tmpRead;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean tmpRead_0;

#endif

#if Rte_SysCon_Variant_CCTR_3

    TeTRGR_e_TransRangeState tmpRead_1;

#endif

#if Rte_SysCon_Variant_CCTR_3

    float32 tmpRead_2;

#endif

#if Rte_SysCon_Variant_CCTR_3

    float32 tmpRead_3;

#endif

#if Rte_SysCon_Variant_CCTR_3

    float32 tmpRead_4;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean tmpRead_5;

#endif

#if Rte_SysCon_Variant_CCTR_3

    TePLTR_e_AdaptiveCruiseCtrl tmpRead_6;

#endif

#if Rte_SysCon_Variant_CCTR_3

    float32 tmpRead_7;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean tmpRead_8;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean tmpRead_9;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean tmpRead_a;

#endif

#if Rte_SysCon_Variant_CCTR_3

    float32 tmpRead_b;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean tmpRead_c;

#endif

#if Rte_SysCon_Variant_CCTR_3

    uint16 tmpRead_d;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean tmpRead_e;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean tmpRead_f;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean tmpRead_g;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean tmpRead_h;

#endif

#if Rte_SysCon_Variant_CCTR_3

    float32 tmpRead_i;

#endif

#if Rte_SysCon_Variant_CCTR_3

    TeBRKR_e_BrakeSrc tmpRead_j;

#endif

#if Rte_SysCon_Variant_CCTR_3

    TePLTR_e_IncreasingSpdConst tmpRead_k;

#endif

#if Rte_SysCon_Variant_CCTR_3

    TePMDR_e_PowerMode tmpRead_l;

#endif

#if Rte_SysCon_Variant_CCTR_3

    TePLTR_e_Cruise_Control_Logic tmpRead_m;

#endif

#if Rte_SysCon_Variant_CCTR_3

    TeBRKR_e_ExtBrkReqOff tmpRead_n;

#endif

#if Rte_SysCon_Variant_CCTR_3

    TeBRKR_e_ExtBrkReqOff tmpRead_o;

#endif

#if Rte_SysCon_Variant_CCTR_3

    TeASLR_e_HDC_Status tmpRead_p;

#endif

#if Rte_SysCon_Variant_CCTR_3

    TePLTR_e_EPBHoldSts tmpRead_q;

#endif

#if Rte_SysCon_Variant_CCTR_3

    TeTMDR_e_TrrnMd tmpRead_r;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean tmpRead_s;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean tmpRead_t;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean tmpRead_u;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean tmpRead_v;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean tmpRead_w;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean tmpRead_x;

#endif

#if Rte_SysCon_Variant_CCTR_3

    uint8 tmpRead_y;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean rtb_RelationalOperator3_l;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean rtb_Logical1_mo;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean rtb_TmpSignalConversionAtVeDFIR_b_DsblDi;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean rtb_TmpSignalConversionAtVeDFIR_b_PostCo;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean rtb_AND_fs;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean rtb_TmpSignalConversionAtVeASLR_b_ASLEna;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean rtb_VariantMerge_For_Variant_Source_VS_i;

#endif

#if Rte_SysCon_Variant_CCTR_3

    float32 rtb_switch;

#endif

#if Rte_SysCon_Variant_CCTR_3

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Status;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean rtb_OR1_lb;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean rtb_Logical_n;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean rtb_Comparison2_fe;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean rtb_Comparison1_d;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean rtb_VariantMerge_For_Variant_Source_VS3;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean rtb_VariantMerge_For_Variant_Source_VS4;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean rtb_RelationalOperator_f;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean rtb_RelationalOperator2_b;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean rtb_Switch_p;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean rtb_UnitDelay5_o;

#endif

#if Rte_SysCon_Variant_CCTR_3

    float32 rtb_selectsetffpower;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean rtb_AND_n2;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean rtb_AND_a;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean rtb_AND_ge;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean rtb_OR1_i2b;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean rtb_OR1_i1s;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean rtb_RelationalOperator4_n;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean rtb_AND_jf;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean rtb_OR1_fz;

#endif

#if Rte_SysCon_Variant_CCTR_3

    float32 rtb_VariantMerge_For_Variant_Source_VS1;

#endif

#if Rte_SysCon_Variant_CCTR_3

    float32 rtb_VariantMerge_For_Variant_Source_VS5;

#endif

#if Rte_SysCon_Variant_CCTR_3

    float32 rtb_TmpSignalConversionAtVeASLR_v_STSpdL;

#endif

#if Rte_SysCon_Variant_CCTR_3

    float32 rtb_TmpSignalConversionAtVePLTR_v_HomSpd;

#endif

#if Rte_SysCon_Variant_CCTR_3

    float32 rtb_sum2;

#endif

#if Rte_SysCon_Variant_CCTR_3

    TeBRKR_e_BrkPdl_Stat rtb_TmpSignalConversionAtVeBRKR_e_BrkPed;

#endif

#if Rte_SysCon_Variant_CCTR_3

    TePLTR_e_BSM_AxleTrq_Enbld rtb_TmpSignalConversionAtVePLTR_e_BSM_Ax;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean Switch1;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean Switch;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean Comparison5;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean Logical9;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean Logical13;

#endif

#if Rte_SysCon_Variant_CCTR_3

    TeDFIB_e_FaultDebounceStatus Merge_c;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean rtb_Logical5_a_tmp;

#endif

#if Rte_SysCon_Variant_CCTR_3

    uint32 rtb_Logical1_kh_tmp;

#endif

#if Rte_SysCon_Variant_CCTR_3

    uint32 rtb_RelationalOperator3_j_tmp;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean guard1 = false;

#endif

#if Rte_SysCon_Variant_CCTR_3

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
    /* Inport: '<Root>/VeDFIR_b_IsDiagGlobalConditionsValid' */
    (void)Rte_Read_VeDFIR_b_IsDiagGlobalConditionsValid_Value(&rtb_Logical1_mo);

    /* Outputs for Function Call SubSystem: '<Root>/CCTR_MedTEB' */
    /* SignalConversion generated from: '<S1>/VeBRKR_e_BrkPedalDscrtInpt' incorporates:
     *  Inport: '<Root>/VeBRKR_e_BrkPedalDscrtInpt'
     */
    (void)Rte_Read_VeBRKR_e_BrkPedalDscrtInpt_Value
        (&rtb_TmpSignalConversionAtVeBRKR_e_BrkPed);

    /* SignalConversion generated from: '<S1>/VeASLR_b_ASLEnabled' incorporates:
     *  Inport: '<Root>/VeASLR_b_ASLEnabled'
     */
    (void)Rte_Read_VeASLR_b_ASLEnabled_Value
        (&rtb_TmpSignalConversionAtVeASLR_b_ASLEna);

    /* SignalConversion generated from: '<S1>/VePLTR_v_HomSpdLim' incorporates:
     *  Inport: '<Root>/VePLTR_v_HomSpdLim'
     */
    (void)Rte_Read_VePLTR_v_HomSpdLim_Value
        (&rtb_TmpSignalConversionAtVePLTR_v_HomSpd);

    /* SignalConversion generated from: '<S1>/VeASLR_v_STSpdLim' incorporates:
     *  Inport: '<Root>/VeASLR_v_STSpdLim'
     */
    (void)Rte_Read_VeASLR_v_STSpdLim_Value
        (&rtb_TmpSignalConversionAtVeASLR_v_STSpdL);

    /* SignalConversion generated from: '<S1>/VeDFIR_b_DsblDiagFailSafe' incorporates:
     *  Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe'
     */
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value
        (&rtb_TmpSignalConversionAtVeDFIR_b_DsblDi);

    /* SignalConversion generated from: '<S1>/VeDFIR_b_PostCodeClrDiagDsbl' incorporates:
     *  Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl'
     */
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value
        (&rtb_TmpSignalConversionAtVeDFIR_b_PostCo);

    /* SignalConversion generated from: '<S1>/VePLTR_e_BSM_AxleTrq_Enbld' incorporates:
     *  Inport: '<Root>/VePLTR_e_BSM_AxleTrq_Enbld'
     */
    (void)Rte_Read_VePLTR_e_BSM_AxleTrq_Enbld_Value
        (&rtb_TmpSignalConversionAtVePLTR_e_BSM_Ax);

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_SpdCntrlSw1' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_SpdCntrlSw1'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_SpdCntrlSw1_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Status);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CruiseCANState'
     */
    /* S-Function (sfix_bitop): '<S282>/Bitwise Operator2' incorporates:
     *  S-Function (sfix_bitop): '<S329>/Bitwise Operator1'
     */
    rtb_RelationalOperator3_j_tmp = ((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Status) & 64U;

    /* RelationalOperator: '<S282>/Relational Operator3' incorporates:
     *  Constant: '<S282>/Constant3'
     *  S-Function (sfix_bitop): '<S282>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_l = (rtb_RelationalOperator3_j_tmp == 0U);

    /* S-Function (sfix_bitop): '<S282>/Bitwise Operator3' incorporates:
     *  S-Function (sfix_bitop): '<S329>/Bitwise Operator2'
     */
    rtb_Logical1_kh_tmp = ((uint32)rtb_TmpSignalConversionAtVeDMAB_y_Status) &
        1U;

    /* Logic: '<S282>/Logical1' incorporates:
     *  Constant: '<S281>/Calib'
     *  Constant: '<S282>/Constant1'
     *  Logic: '<S282>/Logical Operator'
     *  Logic: '<S282>/Logical10'
     *  Logic: '<S282>/Logical12'
     *  RelationalOperator: '<S282>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S282>/Bitwise Operator3'
     */
    rtb_Logical1_mo = (rtb_Logical1_mo && ((!KeCCTR_b_SpdCntrlSw1_LtchEnbl) ||
                        ((rtb_Logical1_kh_tmp == 0U) ||
                         (!rtb_RelationalOperator3_l))));

    /* Outputs for Atomic SubSystem: '<S282>/EdgeFalling1' */
    /* Logic: '<S284>/AND' incorporates:
     *  Logic: '<S284>/OR1'
     *  UnitDelay: '<S284>/Unit Delay'
     */
    rtb_AND_fs = ((!rtb_RelationalOperator3_l) &&
                  (CCTR_ac_DW.UnitDelay_DSTATE_mv));

    /* Update for UnitDelay: '<S284>/Unit Delay' */
    CCTR_ac_DW.UnitDelay_DSTATE_mv = rtb_RelationalOperator3_l;

    /* End of Outputs for SubSystem: '<S282>/EdgeFalling1' */

    /* Logic: '<S278>/NOT4' incorporates:
     *  Logic: '<S310>/NOT4'
     */
    rtb_Logical5_a_tmp = (rtb_TmpSignalConversionAtVeDFIR_b_DsblDi ||
                          rtb_TmpSignalConversionAtVeDFIR_b_PostCo);

    /* Logic: '<S282>/Logical5' incorporates:
     *  Logic: '<S278>/NOT4'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_DsblDi = (rtb_Logical5_a_tmp || rtb_AND_fs);

    /* Outputs for Atomic SubSystem: '<S283>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S283>/Counter Reset  Enabled ' */
    /* Switch: '<S290>/Switch1' incorporates:
     *  Logic: '<S283>/Fail Counter Reset'
     *  Logic: '<S283>/NOT6'
     *  Merge: '<Root>/Merge_16_Irv'
     *  SignalConversion generated from: '<S1>/VeCCTR_b_CcFailSts_read'
     *  Switch: '<S290>/Switch2'
     *  Switch: '<S291>/Switch1'
     *  UnitDelay: '<S283>/Unit Delay'
     *  UnitDelay: '<S283>/Unit Delay1'
     */
    if ((rtb_TmpSignalConversionAtVeDFIR_b_DsblDi ||
            (CCTR_ac_DW.UnitDelay_DSTATE_ie)) || (CCTR_ac_DW.UnitDelay1_DSTATE_d))
    {
        /* Switch: '<S290>/Switch1' incorporates:
         *  Constant: '<S290>/Constant Value2'
         */
        VeCCTR_Cnt_SpdCntrlSw1_FailCnt = 0U;

        /* Switch: '<S291>/Switch1' incorporates:
         *  Constant: '<S291>/Constant Value2'
         */
        VeCCTR_Cnt_SpdCntrlSw1_SmpCnt = 0U;
    }
    else
    {
        if (rtb_Logical1_mo && (Rte_IrvRead_CCTR_MedTEB_CC_FailSts_write_IRV()))
        {
            /* Switch: '<S290>/Switch1' incorporates:
             *  Constant: '<S290>/Constant Value1'
             *  Sum: '<S290>/Subtraction'
             *  Switch: '<S290>/Switch2'
             *  UnitDelay: '<S290>/Unit Delay'
             */
            VeCCTR_Cnt_SpdCntrlSw1_FailCnt = (uint16)(((uint32)
                VeCCTR_Cnt_SpdCntrlSw1_FailCnt) + 1U);
        }

        /* Switch: '<S291>/Switch2' */
        if (rtb_Logical1_mo)
        {
            /* Switch: '<S291>/Switch1' incorporates:
             *  Constant: '<S291>/Constant Value1'
             *  Sum: '<S291>/Subtraction'
             *  Switch: '<S291>/Switch2'
             *  UnitDelay: '<S291>/Unit Delay'
             */
            VeCCTR_Cnt_SpdCntrlSw1_SmpCnt = (uint16)(((uint32)
                VeCCTR_Cnt_SpdCntrlSw1_SmpCnt) + 1U);
        }

        /* End of Switch: '<S291>/Switch2' */
    }

    /* End of Switch: '<S290>/Switch1' */
    /* End of Outputs for SubSystem: '<S283>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S283>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S283>/Greater Than or Equal ' incorporates:
     *  Constant: '<S279>/KeCCTR_Cnt_HTL_PerfDiag_FailCnt'
     */
    CCTR_ac_DW.UnitDelay1_DSTATE_d = (VeCCTR_Cnt_SpdCntrlSw1_FailCnt >=
        KeCCTR_Cnt_SpdCntrlSw1_FailCnt);

    /* Logic: '<S283>/NOT5' incorporates:
     *  Constant: '<S280>/KeCCTR_Cnt_HTL_PerfDiag_SmpCnt'
     *  Logic: '<S283>/NOT3'
     *  RelationalOperator: '<S283>/Less Than  or Equal'
     */
    CCTR_ac_DW.UnitDelay_DSTATE_ie = ((VeCCTR_Cnt_SpdCntrlSw1_SmpCnt >=
        KeCCTR_Cnt_SpdCntrlSw1_SmpCnt) && (!CCTR_ac_DW.UnitDelay1_DSTATE_d));

    /* Switch: '<S296>/Switch1' incorporates:
     *  Constant: '<S289>/Constant Value'
     *  DataStoreWrite: '<S249>/Data Store Write1'
     *  Switch: '<S295>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        CCTR_ac_DW.NeCCTR_Cnt_SpdCntrlSw1_MFOP = 0U;
    }
    else
    {
        if (CCTR_ac_DW.UnitDelay_DSTATE_ie)
        {
            /* MinMax: '<S289>/Minimum2' incorporates:
             *  DataStoreRead: '<S249>/Data Store Read'
             *  Switch: '<S295>/Switch1'
             */
            if (VeCCTR_Cnt_SpdCntrlSw1_FailCnt >
                    CCTR_ac_DW.NeCCTR_Cnt_SpdCntrlSw1_MFOP)
            {
                /* DataStoreWrite: '<S249>/Data Store Write1' incorporates:
                 *  Switch: '<S295>/Switch1'
                 */
                CCTR_ac_DW.NeCCTR_Cnt_SpdCntrlSw1_MFOP =
                    VeCCTR_Cnt_SpdCntrlSw1_FailCnt;
            }

            /* End of MinMax: '<S289>/Minimum2' */
        }
    }

    /* End of Switch: '<S296>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S282>/Fail' incorporates:
     *  EnablePort: '<S286>/Enable'
     */
    if (CCTR_ac_DW.UnitDelay1_DSTATE_d)
    {
        /* Merge: '<S282>/Merge' incorporates:
         *  Constant: '<S292>/Constant'
         *  SignalConversion generated from: '<S286>/FaultSts'
         */
        CCTR_ac_B.Merge_i = CeDFIB_e_Fail;
    }

    /* End of Outputs for SubSystem: '<S282>/Fail' */

    /* Outputs for Enabled SubSystem: '<S282>/Init' incorporates:
     *  EnablePort: '<S287>/Enable'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_DsblDi)
    {
        /* Merge: '<S282>/Merge' incorporates:
         *  Constant: '<S293>/Constant'
         *  SignalConversion generated from: '<S287>/FaultSts'
         */
        CCTR_ac_B.Merge_i = CeDFIB_e_Init;
    }

    /* End of Outputs for SubSystem: '<S282>/Init' */

    /* Outputs for Enabled SubSystem: '<S282>/Pass' incorporates:
     *  EnablePort: '<S288>/Enable'
     */
    if (CCTR_ac_DW.UnitDelay_DSTATE_ie)
    {
        /* Merge: '<S282>/Merge' incorporates:
         *  Constant: '<S294>/Constant'
         *  SignalConversion generated from: '<S288>/FaultSts'
         */
        CCTR_ac_B.Merge_i = CeDFIB_e_Pass;
    }

    /* End of Outputs for SubSystem: '<S282>/Pass' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/CCTR_MedTEB' */

    /* Inport: '<Root>/VeAPSR_e_Lv1PVMode' */
    (void)Rte_Read_VeAPSR_e_Lv1PVMode_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<Root>/CCTR_MedTEB' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CruiseCANState'
     */
    /* Switch: '<S277>/Switch1' incorporates:
     *  Constant: '<S275>/Constant'
     *  RelationalOperator: '<S248>/Comparison2'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeBRKR_e_BrkPed) ==
            CeBRKR_e_BrkApplied)
    {
        /* Switch: '<S277>/Switch1' incorporates:
         *  Constant: '<S248>/TRUE Constant1'
         */
        VeCCTI_b_BrkPdlSts = true;
    }
    else
    {
        /* Switch: '<S277>/Switch1' incorporates:
         *  Constant: '<S276>/Constant'
         *  RelationalOperator: '<S248>/Comparison1'
         */
        VeCCTI_b_BrkPdlSts = (((uint32)rtb_TmpSignalConversionAtVeBRKR_e_BrkPed)
                              != CeBRKR_e_BrkNotApplied);
    }

    /* End of Switch: '<S277>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/CCTR_MedTEB' */

    /* Inport: '<Root>/VeBRKR_e_ExtBrkReqOff' */
    (void)Rte_Read_VeBRKR_e_ExtBrkReqOff_Value(&tmpRead_o);

    /* Inport: '<Root>/VeSRAR_b_InhibitCruise' */
    (void)Rte_Read_VeSRAR_b_InhibitCruise_Value(&rtb_AND_n2);

    /* Inport: '<Root>/VeAXLR_M_ActualOutputTorque' */
    (void)Rte_Read_VeAXLR_M_ActualOutputTorque_Value(&tmpRead_4);

    /* Inport: '<Root>/VeDTRR_P_PtcPdlPwrReq' */
    (void)Rte_Read_VeDTRR_P_PtcPdlPwrReq_Value(&rtb_sum2);

    /* Inport: '<Root>/VeDTRR_P_PtcPdlMaxPwr' */
    (void)Rte_Read_VeDTRR_P_PtcPdlMaxPwr_Value(&tmpRead_3);

    /* Inport: '<Root>/VeDTRR_P_PtcPdlMinPwr' */
    (void)Rte_Read_VeDTRR_P_PtcPdlMinPwr_Value(&tmpRead_2);

    /* Inport: '<Root>/VeTRGR_e_VldtdTransRngSt' */
    (void)Rte_Read_VeTRGR_e_VldtdTransRngSt_Value(&tmpRead_1);

    /* Inport: '<Root>/VeDTRR_b_PtcPdlInChrgVsCC' */
    (void)Rte_Read_VeDTRR_b_PtcPdlInChrgVsCC_Value(&tmpRead_0);

    /* Outputs for Function Call SubSystem: '<Root>/CCTR_MedTEB' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CruiseCANState'
     */
    /* Switch: '<S269>/Switch2' incorporates:
     *  Constant: '<S336>/Calib'
     */
    if (KeCCTR_b_CC_Accel_Ovrrd_Enab)
    {
        /* Switch: '<S269>/Switch2' incorporates:
         *  Constant: '<S335>/Calib'
         */
        rtb_TmpSignalConversionAtVeDFIR_b_PostCo = KeCCTR_b_CC_Accel_Active;
    }
    else
    {
        /* Switch: '<S269>/Switch2' incorporates:
         *  Merge: '<Root>/Merge_2'
         *  SignalConversion generated from: '<S1>/VeCCTR_b_CcAccelSts_read'
         */
        rtb_TmpSignalConversionAtVeDFIR_b_PostCo =
            Rte_IrvRead_CCTR_MedTEB_CC_Accel_Sts_write_IRV();
    }

    /* End of Switch: '<S269>/Switch2' */

    /* Switch: '<S269>/Switch3' incorporates:
     *  Constant: '<S338>/Calib'
     */
    if (KeCCTR_b_CC_Cancel_Ovrrd_Enab)
    {
        /* Switch: '<S269>/Switch3' incorporates:
         *  Constant: '<S337>/Calib'
         */
        rtb_Logical1_mo = KeCCTR_b_CC_Cancel_Active;
    }
    else
    {
        /* Switch: '<S269>/Switch3' incorporates:
         *  Merge: '<Root>/Merge_11'
         *  SignalConversion generated from: '<S1>/VeCCTR_b_CcCancelSw_read'
         */
        rtb_Logical1_mo = Rte_IrvRead_CCTR_MedTEB_CC_Cancel_Swtch_write_IRV();
    }

    /* End of Switch: '<S269>/Switch3' */

    /* Switch: '<S269>/Switch4' incorporates:
     *  Constant: '<S342>/Calib'
     */
    if (KeCCTR_b_CC_OnOff_Ovrrd_Enab)
    {
        /* Switch: '<S269>/Switch4' incorporates:
         *  Constant: '<S341>/Calib'
         */
        VeCCTR_b_CcOnOffSts_Out = KeCCTR_b_CC_OnOff_Active;
    }
    else
    {
        /* Switch: '<S269>/Switch4' incorporates:
         *  Merge: '<Root>/Merge_12_Irv'
         *  SignalConversion generated from: '<S1>/VeCCTR_b_CcOnOffSts_read'
         */
        VeCCTR_b_CcOnOffSts_Out = Rte_IrvRead_CCTR_MedTEB_CC_OnOff_Sts_write_IRV
            ();
    }

    /* End of Switch: '<S269>/Switch4' */

    /* Outputs for Atomic SubSystem: '<S257>/InstActFalse' */
    /* Outputs for Atomic SubSystem: '<S331>/EdgeFalling' */
    /* UnitDelay: '<S330>/Unit Delay' incorporates:
     *  UnitDelay: '<S333>/Unit Delay'
     */
    rtb_AND_fs = CCTR_ac_DW.UnitDelay_DSTATE_dmc;

    /* Update for UnitDelay: '<S333>/Unit Delay' */
    CCTR_ac_DW.UnitDelay_DSTATE_dmc = VeCCTR_b_CcOnOffSts_Out;

    /* Outputs for Atomic SubSystem: '<S331>/Signal Latch On With Reset' */
    /* Logic: '<S334>/OR1' incorporates:
     *  Logic: '<S331>/Logical3'
     *  Logic: '<S333>/AND'
     *  Logic: '<S333>/OR1'
     *  Logic: '<S334>/NOT'
     *  Logic: '<S334>/OR'
     *  UnitDelay: '<S334>/Unit Delay'
     */
    CCTR_ac_DW.UnitDelay_DSTATE_gj = ((rtb_TmpSignalConversionAtVeASLR_b_ASLEna &&
        (VeCCTR_b_CcOnOffSts_Out)) || (((VeCCTR_b_CcOnOffSts_Out) ||
        (!rtb_AND_fs)) && (CCTR_ac_DW.UnitDelay_DSTATE_gj)));

    /* End of Outputs for SubSystem: '<S331>/Signal Latch On With Reset' */
    /* End of Outputs for SubSystem: '<S331>/EdgeFalling' */
    /* End of Outputs for SubSystem: '<S257>/InstActFalse' */

    /* Switch: '<S257>/Switch1' incorporates:
     *  Constant: '<S332>/Calib'
     */
    if (KeCCTR_b_CCInstantActivationEnable)
    {
        /* Switch: '<S257>/Switch1' */
        VeCCTR_b_CruiseControlOnOffSts = VeCCTR_b_CcOnOffSts_Out;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S257>/InstActFalse' */
        /* Switch: '<S257>/Switch1' incorporates:
         *  Switch: '<S331>/Switch1'
         *  UnitDelay: '<S334>/Unit Delay'
         */
        VeCCTR_b_CruiseControlOnOffSts = ((!CCTR_ac_DW.UnitDelay_DSTATE_gj) &&
            (VeCCTR_b_CcOnOffSts_Out));

        /* End of Outputs for SubSystem: '<S257>/InstActFalse' */
    }

    /* End of Switch: '<S257>/Switch1' */

    /* Switch: '<S269>/Switch5' incorporates:
     *  Constant: '<S340>/Calib'
     */
    if (KeCCTR_b_CC_CoastDecel_Ovrrd_Enab)
    {
        /* Switch: '<S269>/Switch5' incorporates:
         *  Constant: '<S339>/Calib'
         */
        rtb_TmpSignalConversionAtVeDFIR_b_DsblDi = KeCCTR_b_CC_CoastDecel_Active;
    }
    else
    {
        /* Switch: '<S269>/Switch5' incorporates:
         *  Merge: '<Root>/Merge_13'
         *  SignalConversion generated from: '<S1>/VeCCTR_b_CcDecelSts_read'
         */
        rtb_TmpSignalConversionAtVeDFIR_b_DsblDi =
            Rte_IrvRead_CCTR_MedTEB_CC_CoastDecelSts_write_IRV();
    }

    /* End of Switch: '<S269>/Switch5' */

    /* Switch: '<S269>/Switch6' incorporates:
     *  Constant: '<S344>/Calib'
     */
    if (KeCCTR_b_CC_Resume_Ovrrd_Enab)
    {
        /* Switch: '<S269>/Switch6' incorporates:
         *  Constant: '<S343>/Calib'
         */
        rtb_RelationalOperator3_l = KeCCTR_b_CC_Resume_Active;
    }
    else
    {
        /* Switch: '<S269>/Switch6' incorporates:
         *  Merge: '<Root>/Merge_14'
         *  SignalConversion generated from: '<S1>/VeCCTR_b_CcResumeSw_read'
         */
        rtb_RelationalOperator3_l =
            Rte_IrvRead_CCTR_MedTEB_CC_ResumeSwtch_write_IRV();
    }

    /* End of Switch: '<S269>/Switch6' */

    /* Switch: '<S269>/Switch7' incorporates:
     *  Constant: '<S346>/Calib'
     */
    if (KeCCTR_b_CC_SetSwtch_Ovrrd_Enab)
    {
        /* Switch: '<S269>/Switch7' incorporates:
         *  Constant: '<S345>/Calib'
         */
        VeCCTR_b_CcSetSw = KeCCTR_b_CC_SetSwtch_Active;
    }
    else
    {
        /* Switch: '<S269>/Switch7' incorporates:
         *  Merge: '<Root>/Merge_15'
         *  SignalConversion generated from: '<S1>/VeCCTR_b_CcSetSw_read'
         */
        VeCCTR_b_CcSetSw = Rte_IrvRead_CCTR_MedTEB_CC_SetSwtch_write_IRV();
    }

    /* End of Switch: '<S269>/Switch7' */

    /* Chart: '<S24>/CcModeDeterm' incorporates:
     *  Constant: '<S258>/Calib'
     *  UnitDelay: '<S24>/Unit Delay1'
     */
    /* Gateway: CCTR_MedTEB/CruiseCANState/CcModeDeterm */
    /* During: CCTR_MedTEB/CruiseCANState/CcModeDeterm */
    /* Entry Internal: CCTR_MedTEB/CruiseCANState/CcModeDeterm */
    /* Transition: '<S253>:2' */
    if ((VeCCTR_b_CruiseControlOnOffSts) && (!CCTR_ac_DW.UnitDelay1_DSTATE_ky))
    {
        /* Transition: '<S253>:3' */
        /* Transition: '<S253>:4' */
        VeCCTR_e_Lv1CrusCANStateTemp = 4U;
        CCTR_ac_B.PrevOnOffSts = VeCCTR_b_CruiseControlOnOffSts;
        CCTR_ac_DW.Temp = 1U;
        CCTR_ac_DW.Count = 0U;
    }
    else
    {
        /* Transition: '<S253>:23' */
        rtb_AND_fs = !VeCCTR_b_CruiseControlOnOffSts;
        guard1 = false;
        if (rtb_AND_fs && (CCTR_ac_DW.UnitDelay1_DSTATE_ky))
        {
            /* Transition: '<S253>:21' */
            /* Transition: '<S253>:5' */
            VeCCTR_e_Lv1CrusCANStateTemp = 6U;
            CCTR_ac_B.PrevOnOffSts = VeCCTR_b_CruiseControlOnOffSts;
            CCTR_ac_DW.Temp1 = 2U;
            CCTR_ac_DW.Count = 0U;
            guard1 = true;
        }
        else
        {
            /* Transition: '<S253>:22' */
            if (((((sint32)CCTR_ac_DW.Temp) == 1) &&
                    (VeCCTR_b_CruiseControlOnOffSts)) || ((((sint32)
                    CCTR_ac_DW.Temp1) == 2) && rtb_AND_fs))
            {
                /* Transition: '<S253>:15' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S253>:24' */
                if (rtb_Logical1_mo)
                {
                    /* Transition: '<S253>:6' */
                    /* Transition: '<S253>:8' */
                    VeCCTR_e_Lv1CrusCANStateTemp = 2U;
                }
                else
                {
                    /* Transition: '<S253>:7' */
                    if ((VeCCTR_b_CcSetSw) ||
                            rtb_TmpSignalConversionAtVeDFIR_b_DsblDi)
                    {
                        /* Transition: '<S253>:9' */
                        /* Transition: '<S253>:10' */
                        VeCCTR_e_Lv1CrusCANStateTemp = 3U;
                    }
                    else
                    {
                        /* Transition: '<S253>:64' */
                        if ((VeCCTR_b_CcSetSw) ||
                                rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
                        {
                            /* Transition: '<S253>:62' */
                            /* Transition: '<S253>:63' */
                            VeCCTR_e_Lv1CrusCANStateTemp = 7U;
                        }
                        else
                        {
                            /* Transition: '<S253>:65' */
                            if (rtb_RelationalOperator3_l)
                            {
                                /* Transition: '<S253>:12' */
                                /* Transition: '<S253>:13' */
                                VeCCTR_e_Lv1CrusCANStateTemp = 5U;
                            }
                            else
                            {
                                /* Transition: '<S253>:14' */
                                VeCCTR_e_Lv1CrusCANStateTemp = 1U;
                                CCTR_ac_B.PrevOnOffSts =
                                    VeCCTR_b_CruiseControlOnOffSts;
                            }
                        }
                    }
                }
            }
        }

        if (guard1)
        {
            /* Transition: '<S253>:16' */
            CCTR_ac_DW.Count = (uint16)((sint32)(((sint32)CCTR_ac_DW.Count) + 1));
            if (CCTR_ac_DW.Count >= KeCCTR_Cnt_Lv1CrusOnOffSwMinCnts)
            {
                /* Transition: '<S253>:17' */
                /* Transition: '<S253>:18' */
                CCTR_ac_DW.Temp = 0U;
                CCTR_ac_DW.Temp1 = 0U;
                CCTR_ac_DW.Count = 0U;
            }
            else
            {
                /* Transition: '<S253>:19' */
                /* Transition: '<S253>:20' */
            }
        }
    }

    /* End of Chart: '<S24>/CcModeDeterm' */

    /* UnitDelay: '<S251>/Unit Delay' */
    VeCCTR_e_PrevLv1CrusCanState = CCTR_ac_DW.UnitDelay_DSTATE_g;

    /* Switch: '<S251>/Switch' incorporates:
     *  RelationalOperator: '<S251>/Comparison4'
     */
    if (VeCCTR_e_Lv1CrusCANStateTemp == VeCCTR_e_PrevLv1CrusCanState)
    {
        /* Switch: '<S251>/Switch' incorporates:
         *  Constant: '<S251>/Constant Value1'
         *  Sum: '<S251>/Sum'
         *  UnitDelay: '<S251>/Unit Delay1'
         */
        VeCCTR_Cnt_Lv1CrusSwStateCntr = VeCCTR_Cnt_Lv1CrusSwStateCntr + 1.0F;
    }
    else
    {
        /* Switch: '<S251>/Switch' incorporates:
         *  Constant: '<S251>/Constant Value'
         */
        VeCCTR_Cnt_Lv1CrusSwStateCntr = 1.0F;
    }

    /* End of Switch: '<S251>/Switch' */

    /* Outputs for Atomic SubSystem: '<S251>/Limiter1' */
    /* Switch: '<S301>/Switch1' incorporates:
     *  Constant: '<S300>/Calib'
     *  RelationalOperator: '<S301>/Relational Operator'
     */
    if (KeCCTR_Cnt_Lv1CrusSwStateCntrMax < VeCCTR_Cnt_Lv1CrusSwStateCntr)
    {
        /* Sum: '<S270>/Sum1' */
        VeCCTR_Cnt_Lv1CrusSwStateCntr = KeCCTR_Cnt_Lv1CrusSwStateCntrMax;
    }

    /* End of Switch: '<S301>/Switch1' */

    /* Switch: '<S301>/Switch' incorporates:
     *  Constant: '<S251>/min limit1'
     *  RelationalOperator: '<S301>/Relational Operator1'
     */
    if (VeCCTR_Cnt_Lv1CrusSwStateCntr <= 0.0F)
    {
        /* Switch: '<S301>/Switch' */
        VeCCTR_Cnt_Lv1CrusSwStateCntr = 0.0F;
    }

    /* End of Switch: '<S301>/Switch' */
    /* End of Outputs for SubSystem: '<S251>/Limiter1' */

    /* RelationalOperator: '<S251>/Comparison2' incorporates:
     *  Constant: '<S299>/Calib'
     */
    VeCCTR_b_Lv1CrusSwStateUnstable = (VeCCTR_Cnt_Lv1CrusSwStateCntr <
        KeCCTR_Cnt_Lv1CrusSwMinCnts);

    /* Chart: '<S250>/CcBttnPrityMap' */
    /* Gateway: CCTR_MedTEB/CruiseCANState/CcBttnInvldTrans/CcBttnPrityMap */
    /* During: CCTR_MedTEB/CruiseCANState/CcBttnInvldTrans/CcBttnPrityMap */
    /* Entry Internal: CCTR_MedTEB/CruiseCANState/CcBttnInvldTrans/CcBttnPrityMap */
    /* Transition: '<S297>:2' */
    VeCCTR_Cnt_PrevLv1CrusStatePriority1 = VeCCTR_Cnt_Lv1CrusStatePriority1;
    if ((VeCCTR_b_Lv1CrusSwStateUnstable) || (((sint32)
            VeCCTR_e_Lv1CrusCANStateTemp) == 4))
    {
        /* Transition: '<S297>:13' */
        /* Transition: '<S297>:4' */
        /* Transition: '<S297>:6' */
        /* Transition: '<S297>:8' */
        /* Transition: '<S297>:65' */
        /* Transition: '<S297>:80' */
        /* Transition: '<S297>:82' */
        /* Transition: '<S297>:10' */
        VeCCTR_Cnt_Lv1CrusStatePriority1 = 1U;
    }
    else
    {
        /* Transition: '<S297>:5' */
        /* Transition: '<S297>:7' */
        if (((sint32)VeCCTR_e_Lv1CrusCANStateTemp) == 2)
        {
            /* Transition: '<S297>:9' */
            /* Transition: '<S297>:65' */
            /* Transition: '<S297>:80' */
            /* Transition: '<S297>:82' */
            /* Transition: '<S297>:10' */
            VeCCTR_Cnt_Lv1CrusStatePriority1 = 1U;
        }
        else
        {
            /* Transition: '<S297>:62' */
            if ((((sint32)VeCCTR_e_Lv1CrusCANStateTemp) == 3) || (((sint32)
                    VeCCTR_e_Lv1CrusCANStateTemp) == 7))
            {
                /* Transition: '<S297>:61' */
                /* Transition: '<S297>:80' */
                /* Transition: '<S297>:82' */
                /* Transition: '<S297>:10' */
                VeCCTR_Cnt_Lv1CrusStatePriority1 = 1U;
            }
            else
            {
                /* Transition: '<S297>:79' */
                if ((((sint32)VeCCTR_e_Lv1CrusCANStateTemp) == 5) || (((sint32)
                        VeCCTR_e_Lv1CrusCANStateTemp) == 7))
                {
                    /* Transition: '<S297>:15' */
                    /* Transition: '<S297>:82' */
                    /* Transition: '<S297>:10' */
                    VeCCTR_Cnt_Lv1CrusStatePriority1 = 1U;
                }
                else
                {
                    /* Transition: '<S297>:81' */
                    if (((sint32)VeCCTR_e_Lv1CrusCANStateTemp) == 1)
                    {
                        /* Transition: '<S297>:18' */
                        /* Transition: '<S297>:10' */
                        VeCCTR_Cnt_Lv1CrusStatePriority1 = 1U;
                    }
                    else
                    {
                        /* Transition: '<S297>:20' */
                        /* Transition: '<S297>:21' */
                    }
                }
            }
        }
    }

    /* End of Chart: '<S250>/CcBttnPrityMap' */

    /* Chart: '<S250>/InvldCcBttnTrans' */
    /* Transition: '<S297>:22' */
    /* Gateway: CCTR_MedTEB/CruiseCANState/CcBttnInvldTrans/InvldCcBttnTrans */
    /* During: CCTR_MedTEB/CruiseCANState/CcBttnInvldTrans/InvldCcBttnTrans */
    if (((uint32)CCTR_ac_DW.is_active_c2_CCTR_ac) == 0U)
    {
        /* Entry: CCTR_MedTEB/CruiseCANState/CcBttnInvldTrans/InvldCcBttnTrans */
        CCTR_ac_DW.is_active_c2_CCTR_ac = 1U;

        /* Entry Internal: CCTR_MedTEB/CruiseCANState/CcBttnInvldTrans/InvldCcBttnTrans */
        /* Transition: '<S298>:5' */
        CCTR_ac_DW.NoPress = 1U;
        CCTR_ac_DW.is_c2_CCTR_ac = CCTR_ac_IN_Valid_Transition;

        /* Entry 'Valid_Transition': '<S298>:2' */
        VeCCTR_b_Lv1CrusInvldTransition_out = false;
    }
    else if (((sint32)CCTR_ac_DW.is_c2_CCTR_ac) == 1)
    {
        /* During 'InValid_Transition': '<S298>:1' */
        if ((VeCCTR_Cnt_Lv1CrusStatePriority1 >
                VeCCTR_Cnt_PrevLv1CrusStatePriority1) ||
                (VeCCTR_Cnt_Lv1CrusStatePriority1 == CCTR_ac_DW.NoPress))
        {
            /* Transition: '<S298>:7' */
            CCTR_ac_DW.is_c2_CCTR_ac = CCTR_ac_IN_Valid_Transition;

            /* Entry 'Valid_Transition': '<S298>:2' */
            VeCCTR_b_Lv1CrusInvldTransition_out = false;
        }
    }
    else
    {
        /* During 'Valid_Transition': '<S298>:2' */
        if (((VeCCTR_Cnt_Lv1CrusStatePriority1 <
                VeCCTR_Cnt_PrevLv1CrusStatePriority1) &&
                (VeCCTR_Cnt_PrevLv1CrusStatePriority1 != CCTR_ac_DW.NoPress)) &&
            (VeCCTR_Cnt_Lv1CrusStatePriority1 != CCTR_ac_DW.NoPress))
        {
            /* Transition: '<S298>:6' */
            CCTR_ac_DW.is_c2_CCTR_ac = CCTR_ac_IN_InValid_Transition;

            /* Entry 'InValid_Transition': '<S298>:1' */
            VeCCTR_b_Lv1CrusInvldTransition_out = true;
        }
    }

    /* End of Chart: '<S250>/InvldCcBttnTrans' */

    /* Switch: '<S252>/Switch1' incorporates:
     *  Constant: '<S252>/Constant Value2'
     *  Constant: '<S252>/Constant Value3'
     *  Constant: '<S307>/Calib'
     *  RelationalOperator: '<S252>/Comparison'
     *  Sum: '<S252>/Sum1'
     *  UnitDelay: '<S252>/Unit Delay2'
     */
    if (VeCCTR_e_Lv1CrusCANStateTemp > KeCCTR_scl_Lv1CrusSwNPStateEnabl)
    {
        CCTR_ac_DW.UnitDelay2_DSTATE_p++;
    }
    else
    {
        CCTR_ac_DW.UnitDelay2_DSTATE_p = 0.0F;
    }

    /* End of Switch: '<S252>/Switch1' */

    /* RelationalOperator: '<S252>/Comparison1' incorporates:
     *  Constant: '<S303>/Calib'
     *  UnitDelay: '<S252>/Unit Delay2'
     */
    VeCCTR_b_Lv1CrusSwNPMiss = (CCTR_ac_DW.UnitDelay2_DSTATE_p >
        KeCCTR_Cnt_Lv1CrusSwNPMissCntrLim);

    /* Logic: '<S252>/FixPt Logical Operator1' */
    rtb_AND_fs = !VeCCTR_b_CcOnOffSts_Out;

    /* Outputs for Atomic SubSystem: '<S252>/Stop Watch Reset Trigger Enabled' */
    /* Outputs for Atomic SubSystem: '<S309>/EdgeRising' */
    /* Logic: '<S311>/OR1' incorporates:
     *  UnitDelay: '<S311>/Unit Delay'
     */
    rtb_OR1_lb = !CCTR_ac_DW.UnitDelay_DSTATE_na;

    /* Update for UnitDelay: '<S311>/Unit Delay' */
    CCTR_ac_DW.UnitDelay_DSTATE_na = rtb_AND_fs;

    /* Switch: '<S309>/Switch1' incorporates:
     *  Constant: '<S309>/Constant Value2'
     *  Logic: '<S311>/AND'
     *  Switch: '<S309>/Switch2'
     *  UnitDelay: '<S309>/Unit Delay'
     */
    if (rtb_AND_fs && rtb_OR1_lb)
    {
        CCTR_ac_DW.UnitDelay_DSTATE_dm = 0.0F;
    }
    else
    {
        if (VeCCTR_b_CcOnOffSts_Out)
        {
            /* UnitDelay: '<S309>/Unit Delay' incorporates:
             *  Constant: '<S261>/Calib'
             *  Sum: '<S309>/Subtraction'
             *  Switch: '<S309>/Switch2'
             */
            CCTR_ac_DW.UnitDelay_DSTATE_dm += KeCCTR_t_12p5dt;
        }
    }

    /* End of Switch: '<S309>/Switch1' */
    /* End of Outputs for SubSystem: '<S309>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S252>/Stop Watch Reset Trigger Enabled' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/CCTR_MedTEB' */

    /* Inport: '<Root>/VeDMAB_y_StatusByte_SpdCntrlSw' */
    (void)Rte_Read_VeDMAB_y_StatusByte_SpdCntrlSw_Value(&tmpRead_y);

    /* Inport: '<Root>/VeASLR_b_ASLorACCorHASSwStuck' */
    (void)Rte_Read_VeASLR_b_ASLorACCorHASSwStuck_Value(&Comparison5);

    /* Outputs for Function Call SubSystem: '<Root>/CCTR_MedTEB' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CruiseCANState'
     */
    /* Logic: '<S252>/Logical2' incorporates:
     *  Constant: '<S252>/Resume'
     *  Constant: '<S302>/Calib'
     *  RelationalOperator: '<S252>/Comparison4'
     *  RelationalOperator: '<S252>/Comparison5'
     */
    VeCCTR_b_Lv1CrusResAccSwStuckFailed = ((VeCCTR_Cnt_Lv1CrusSwStateCntr >=
        KeCCTR_Cnt_Lv1CrusSwAccelLimCnts) && (((sint32)
        VeCCTR_e_PrevLv1CrusCanState) == 5));

    /* RelationalOperator: '<S310>/Relational Operator3' incorporates:
     *  Constant: '<S310>/Constant3'
     *  S-Function (sfix_bitop): '<S310>/Bitwise Operator2'
     */
    rtb_AND_fs = ((((uint32)tmpRead_y) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S310>/EdgeFalling1' */
    /* Logic: '<S312>/AND' incorporates:
     *  Logic: '<S312>/OR1'
     *  UnitDelay: '<S312>/Unit Delay'
     */
    rtb_OR1_lb = ((!rtb_AND_fs) && (CCTR_ac_DW.UnitDelay_DSTATE_fi));

    /* Update for UnitDelay: '<S312>/Unit Delay' */
    CCTR_ac_DW.UnitDelay_DSTATE_fi = rtb_AND_fs;

    /* End of Outputs for SubSystem: '<S310>/EdgeFalling1' */

    /* If: '<S310>/If' incorporates:
     *  Constant: '<S304>/Calib'
     *  Constant: '<S305>/Calib'
     *  Constant: '<S306>/Calib'
     *  Constant: '<S308>/Calib'
     *  Logic: '<S252>/Logical'
     *  Logic: '<S252>/Logical1'
     *  Logic: '<S252>/Logical3'
     *  Logic: '<S310>/Logical5'
     *  RelationalOperator: '<S252>/Comparison2'
     *  RelationalOperator: '<S252>/Comparison3'
     *  RelationalOperator: '<S252>/Comparison6'
     *  UnitDelay: '<S252>/Unit Delay1'
     *  UnitDelay: '<S309>/Unit Delay'
     */
    if (rtb_Logical5_a_tmp || rtb_OR1_lb)
    {
        /* Outputs for IfAction SubSystem: '<S310>/Init' incorporates:
         *  ActionPort: '<S314>/Action Port'
         */
        /* Merge: '<S310>/Merge' incorporates:
         *  Constant: '<S317>/Constant'
         *  SignalConversion generated from: '<S314>/e_FaultStsInit'
         */
        Merge_c = CeDFIB_e_Init;

        /* Merge: '<S310>/Merge1' incorporates:
         *  Constant: '<S314>/Constant'
         *  SignalConversion generated from: '<S314>/b_FltDtcInit'
         */
        CCTR_ac_DW.UnitDelay1_DSTATE_kl = false;

        /* End of Outputs for SubSystem: '<S310>/Init' */
    }
    else if ((((((VeCCTR_Cnt_Lv1CrusSwStateCntr >= ((float32)
                   KeCCTR_Cnt_Lv1CrusSwStuckCnts)) &&
                 (VeCCTR_e_PrevLv1CrusCanState > KeCCTR_scl_Lv1CrusStateStuckLim))
                || (VeCCTR_b_Lv1CrusSwNPMiss)) || Comparison5) ||
              (CCTR_ac_DW.UnitDelay_DSTATE_dm >= KeCCTR_t_CcOnOffSwOnTime)) ||
             ((CCTR_ac_DW.UnitDelay1_DSTATE_kl) && (KeCCTR_b_CrusSwStuckRevSts)))
    {
        /* Outputs for IfAction SubSystem: '<S310>/Fail' incorporates:
         *  ActionPort: '<S313>/Action Port'
         */
        /* Merge: '<S310>/Merge' incorporates:
         *  Constant: '<S316>/Constant'
         *  SignalConversion generated from: '<S313>/e_FaultStsFail'
         */
        Merge_c = CeDFIB_e_Fail;

        /* Merge: '<S310>/Merge1' incorporates:
         *  Constant: '<S313>/Constant'
         *  SignalConversion generated from: '<S313>/b_FltDtcFail'
         */
        CCTR_ac_DW.UnitDelay1_DSTATE_kl = true;

        /* End of Outputs for SubSystem: '<S310>/Fail' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S310>/Pass' incorporates:
         *  ActionPort: '<S315>/Action Port'
         */
        /* Merge: '<S310>/Merge' incorporates:
         *  Constant: '<S318>/Constant'
         *  SignalConversion generated from: '<S315>/e_FaultStsPass'
         */
        Merge_c = CeDFIB_e_Pass;

        /* Merge: '<S310>/Merge1' incorporates:
         *  Constant: '<S315>/Constant'
         *  SignalConversion generated from: '<S315>/b_FltDtcPass'
         */
        CCTR_ac_DW.UnitDelay1_DSTATE_kl = false;

        /* End of Outputs for SubSystem: '<S310>/Pass' */
    }

    /* End of If: '<S310>/If' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/CCTR_MedTEB' */

    /* Inport: '<Root>/VeASLR_e_HDC_Status' */
    (void)Rte_Read_VeASLR_e_HDC_Status_Value(&tmpRead_p);

    /* Inport: '<Root>/VeBRKR_e_ExtTcsReqOff' */
    (void)Rte_Read_VeBRKR_e_ExtTcsReqOff_Value(&tmpRead_n);

    /* Inport: '<Root>/VePMDR_e_PMM_PowerMode' */
    (void)Rte_Read_VePMDR_e_PMM_PowerMode_Value(&tmpRead_l);

    /* Inport: '<Root>/VeBRKR_e_BrakeSrc' */
    (void)Rte_Read_VeBRKR_e_BrakeSrc_Value(&tmpRead_j);

    /* Inport: '<Root>/VeBRKR_b_ESCFailSts' */
    (void)Rte_Read_VeBRKR_b_ESCFailSts_Value(&rtb_OR1_i2b);

    /* Inport: '<Root>/VePLTR_e_ProxiACC' */
    (void)Rte_Read_VePLTR_e_ProxiACC_Value(&tmpRead_6);

    /* Outputs for Function Call SubSystem: '<Root>/CCTR_MedTEB' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CruiseCANState'
     */
    /* RelationalOperator: '<S254>/Comparison5' incorporates:
     *  Constant: '<S319>/Constant'
     *  Inport: '<Root>/VePLTR_e_ProxiACC'
     */
    Comparison5 = (((uint32)tmpRead_6) != CePLTR_e_ACC_Absent);

    /* Switch: '<S254>/Switch2' incorporates:
     *  Constant: '<S328>/Calib'
     *  Inport: '<Root>/VePLTR_e_Proxi_CC_Logic'
     */
    if (KeCCTR_b_CCLogicCheck)
    {
        (void)Rte_Read_VePLTR_e_Proxi_CC_Logic_Value(&tmpRead_m);

        /* UnitDelay: '<S330>/Unit Delay' incorporates:
         *  Constant: '<S322>/Constant'
         *  Inport: '<Root>/VePLTR_e_Proxi_CC_Logic'
         *  RelationalOperator: '<S254>/Comparison2'
         */
        rtb_AND_fs = (((uint32)tmpRead_m) == CePLTR_e_Logic1);
    }
    else
    {
        /* UnitDelay: '<S330>/Unit Delay' incorporates:
         *  Constant: '<S254>/TRUE Constant'
         */
        rtb_AND_fs = true;
    }

    /* End of Switch: '<S254>/Switch2' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/CCTR_MedTEB' */

    /* Inport: '<Root>/VePLTR_b_HDCEnabledCAN_FA' */
    (void)Rte_Read_VePLTR_b_HDCEnabledCAN_FA_Value(&Logical9);

    /* Inport: '<Root>/VePLTR_b_HDCEnabledCAN' */
    (void)Rte_Read_VePLTR_b_HDCEnabledCAN_Value(&Logical13);

    /* Inport: '<Root>/VeAPSR_b_Lv1PvBrkActive' */
    (void)Rte_Read_VeAPSR_b_Lv1PvBrkActive_Value(&tmpRead_x);

    /* Inport: '<Root>/VeBRKR_b_ESCFailStsFA' */
    (void)Rte_Read_VeBRKR_b_ESCFailStsFA_Value(&tmpRead_w);

    /* Inport: '<Root>/VeBRKR_b_BrkPdlFltFA' */
    (void)Rte_Read_VeBRKR_b_BrkPdlFltFA_Value(&tmpRead_v);

    /* Inport: '<Root>/VeBRKR_b_BrkPdlFlt' */
    (void)Rte_Read_VeBRKR_b_BrkPdlFlt_Value(&tmpRead_u);

    /* Inport: '<Root>/VeBRKR_b_ExtBrkReqOffFA' */
    (void)Rte_Read_VeBRKR_b_ExtBrkReqOffFA_Value(&tmpRead_t);

    /* Inport: '<Root>/VePLTR_b_EPBHoldStsFA' */
    (void)Rte_Read_VePLTR_b_EPBHoldStsFA_Value(&tmpRead_s);

    /* Inport: '<Root>/VePLTR_b_Hill_Des_Stat_Prx' */
    (void)Rte_Read_VePLTR_b_Hill_Des_Stat_Prx_Value(&rtb_Logical_n);

    /* Inport: '<Root>/VePLTR_b_ProxiCC' */
    (void)Rte_Read_VePLTR_b_ProxiCC_Value(&tmpRead_h);

    /* Inport: '<Root>/VeASLR_b_SpdLmtrOnOffSts' */
    (void)Rte_Read_VeASLR_b_SpdLmtrOnOffSts_Value(&rtb_UnitDelay5_o);

    /* Inport: '<Root>/VePLTR_b_ProxiSpdLimiter' */
    (void)Rte_Read_VePLTR_b_ProxiSpdLimiter_Value(&rtb_RelationalOperator4_n);

    /* Inport: '<Root>/VeBRKR_b_FunctionSts' */
    (void)Rte_Read_VeBRKR_b_FunctionSts_Value(&rtb_OR1_fz);

    /* Inport: '<Root>/VeBRKR_b_ASRActive_FA' */
    (void)Rte_Read_VeBRKR_b_ASRActive_FA_Value(&tmpRead_f);

    /* Inport: '<Root>/VeBRKR_b_MSRActive_FA' */
    (void)Rte_Read_VeBRKR_b_MSRActive_FA_Value(&tmpRead_e);

    /* Inport: '<Root>/VeBRKR_b_ImpndSkid' */
    (void)Rte_Read_VeBRKR_b_ImpndSkid_Value(&rtb_AND_jf);

    /* Inport: '<Root>/VeCSVR_b_CanSigVehSpd_FA' */
    (void)Rte_Read_VeCSVR_b_CanSigVehSpd_FA_Value(&rtb_Comparison1_d);

    /* Inport: '<Root>/VeBRKR_b_ABSFailSts' */
    (void)Rte_Read_VeBRKR_b_ABSFailSts_Value(&tmpRead_a);

    /* Inport: '<Root>/VeBRKR_b_ESCActiveFA' */
    (void)Rte_Read_VeBRKR_b_ESCActiveFA_Value(&tmpRead_9);

    /* Inport: '<Root>/VeBRKR_b_ABSActiveFA' */
    (void)Rte_Read_VeBRKR_b_ABSActiveFA_Value(&tmpRead_8);

    /* Inport: '<Root>/VeBRKR_b_BrkPedalDscrtInptFA' */
    (void)Rte_Read_VeBRKR_b_BrkPedalDscrtInptFA_Value(&tmpRead_5);

    /* Outputs for Function Call SubSystem: '<Root>/CCTR_MedTEB' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CruiseCANState'
     */
    /* Logic: '<S254>/Logical1' incorporates:
     *  Constant: '<S255>/Calib'
     *  Constant: '<S256>/Calib'
     *  Constant: '<S260>/Calib'
     *  Constant: '<S320>/Constant'
     *  Constant: '<S327>/Constant'
     *  Constant: '<S329>/Constant1'
     *  Constant: '<S329>/Constant2'
     *  Inport: '<Root>/VeBRKR_e_BrakeSrc'
     *  Inport: '<S24>/ESCFailSts'
     *  Inport: '<S24>/VeCSVR_b_CanSigVehSpd_FA'
     *  Inport: '<S24>/proxiHDC_Sts'
     *  Logic: '<S254>/Logical12'
     *  Logic: '<S254>/Logical15'
     *  Logic: '<S254>/Logical16'
     *  Logic: '<S254>/Logical2'
     *  Logic: '<S254>/Logical8'
     *  Logic: '<S329>/Logical Operator'
     *  Merge: '<Root>/Merge_17_Irv'
     *  Merge: '<Root>/Merge_18_Irv'
     *  Merge: '<Root>/Merge_3_Irv'
     *  Merge: '<Root>/Merge_4_Irv'
     *  Merge: '<Root>/Merge_5_Irv'
     *  Merge: '<Root>/Merge_6'
     *  Merge: '<Root>/Merge_7_Irv'
     *  RelationalOperator: '<S254>/Comparison1'
     *  RelationalOperator: '<S254>/Comparison9'
     *  RelationalOperator: '<S329>/Relational Operator1'
     *  RelationalOperator: '<S329>/Relational Operator2'
     *  SignalConversion generated from: '<S1>/VeCCTR_b_CcAccelStsFA_read'
     *  SignalConversion generated from: '<S1>/VeCCTR_b_CcCancelSwFA_read'
     *  SignalConversion generated from: '<S1>/VeCCTR_b_CcDecelStsFA_read'
     *  SignalConversion generated from: '<S1>/VeCCTR_b_CcFailStsFA_read'
     *  SignalConversion generated from: '<S1>/VeCCTR_b_CcOnOffStsFA_read'
     *  SignalConversion generated from: '<S1>/VeCCTR_b_CcResumeSwFA_read'
     *  SignalConversion generated from: '<S1>/VeCCTR_b_CcSetSwFA_read'
     */
    VeCCTR_b_FaultActive = (((((((((((((((((((((((((((tmpRead_s || tmpRead_t) ||
        tmpRead_u) || tmpRead_v) || tmpRead_w) || tmpRead_x) || (((uint32)
        tmpRead_o) == CeBRKR_e_ExtBrkReq_SNA)) && (HeCCTR_b_isM182)) ||
        (Rte_IrvRead_CCTR_MedTEB_CC_CoastDecelStsFA_write_IRV())) ||
        (Rte_IrvRead_CCTR_MedTEB_CC_CancelSwtchFA_write_IRV())) ||
        (Rte_IrvRead_CCTR_MedTEB_CC_ResumeSwtchFA_write_IRV())) ||
        ((rtb_Logical1_kh_tmp != 0U) && (rtb_RelationalOperator3_j_tmp == 0U))) ||
        tmpRead_8) || tmpRead_5) || tmpRead_9) || tmpRead_a) ||
        (Rte_IrvRead_CCTR_MedTEB_CC_OnOffStsFA_write_IRV())) ||
        (Rte_IrvRead_CCTR_MedTEB_CC_SetSwtchFA_write_IRV())) ||
        (Rte_IrvRead_CCTR_MedTEB_CC_FailStsFA_write_IRV())) || tmpRead_e) ||
        tmpRead_f) || (VeCCTR_b_Lv1CrusResAccSwStuckFailed)) ||
        (CCTR_ac_DW.UnitDelay1_DSTATE_kl)) || (((uint32)tmpRead_j) !=
        CeBRKR_e_BrkTravelSts)) || (rtb_OR1_i2b && (KeCCTR_b_ESCFailSts_OFF))) ||
        rtb_Comparison1_d) || (Rte_IrvRead_CCTR_MedTEB_CC_AccelStsFA_write_IRV()))
                            || ((Logical9 && rtb_Logical_n) && (HeCCTR_b_isX250)));

    /* Logic: '<S254>/Logical9' incorporates:
     *  Constant: '<S325>/Constant'
     *  Constant: '<S326>/Constant'
     *  RelationalOperator: '<S254>/Comparison3'
     *  RelationalOperator: '<S254>/Comparison8'
     */
    Logical9 = ((((uint32)tmpRead_n) == CeBRKR_e_ExtSysContinuousOff) ||
                (((uint32)tmpRead_o) == CeBRKR_e_ExtSysContinuousOff));

    /* Logic: '<S254>/Logical13' incorporates:
     *  Constant: '<S256>/Calib'
     *  Inport: '<S24>/proxiHDC_Sts'
     *  Logic: '<S254>/Logical14'
     */
    Logical13 = ((rtb_Logical_n && Logical13) && (HeCCTR_b_isX250));

    /* Logic: '<S254>/Logical3' incorporates:
     *  Constant: '<S255>/Calib'
     *  Constant: '<S321>/Constant'
     *  Constant: '<S323>/Constant'
     *  Constant: '<S324>/Constant'
     *  Inport: '<Root>/VePMDR_e_PMM_PowerMode'
     *  Inport: '<S24>/SpdLimiterOnOffSts'
     *  Inport: '<S24>/VeBRKR_b_FunctionSts'
     *  Inport: '<S24>/proxiHDC_Sts'
     *  Logic: '<S254>/Logical'
     *  Logic: '<S254>/Logical Operator2'
     *  Logic: '<S254>/Logical10'
     *  Logic: '<S254>/Logical11'
     *  Logic: '<S254>/Logical5'
     *  Logic: '<S254>/Logical6'
     *  Logic: '<S254>/Logical7'
     *  RelationalOperator: '<S254>/Comparison4'
     *  RelationalOperator: '<S254>/Comparison6'
     *  RelationalOperator: '<S254>/Comparison7'
     *  UnitDelay: '<S254>/Unit Delay'
     */
    VeCCTR_b_CCInteractions = (((((((((VeCCTR_b_Lv1CrusInvldTransition_out) ||
        Comparison5) || rtb_OR1_fz) || rtb_AND_jf) || ((!rtb_AND_fs) ||
        (!tmpRead_h))) || (((uint32)tmpRead_l) == CePMDR_e_PowerMode_Off)) ||
        (rtb_RelationalOperator4_n && rtb_UnitDelay5_o)) || ((Logical9 ||
        (((((uint32)CCTR_ac_DW.UnitDelay_DSTATE_om) == CeASLR_e_HDC_UNAVL) &&
          (((uint32)tmpRead_p) == CeASLR_e_HDC_AVL)) && rtb_Logical_n)) &&
        (HeCCTR_b_isM182))) || Logical13);

    /* Logic: '<S254>/Logical4' */
    VeCCTR_b_Lv1OffReq = ((VeCCTR_b_FaultActive) || (VeCCTR_b_CCInteractions));

    /* Switch: '<S254>/Switch' incorporates:
     *  Switch: '<S254>/Switch1'
     */
    if (VeCCTR_b_Lv1OffReq)
    {
        /* Switch: '<S254>/Switch' incorporates:
         *  Constant: '<S254>/Cancel'
         */
        VeCCTR_e_ActualLv1CrusCANState = 2U;
    }
    else if (VeCCTR_b_Lv1CrusSwStateUnstable)
    {
        /* Switch: '<S254>/Switch1' incorporates:
         *  Constant: '<S254>/NoBttnPress'
         *  Switch: '<S254>/Switch'
         */
        VeCCTR_e_ActualLv1CrusCANState = 1U;
    }
    else
    {
        /* Switch: '<S254>/Switch' incorporates:
         *  Switch: '<S254>/Switch1'
         */
        VeCCTR_e_ActualLv1CrusCANState = VeCCTR_e_Lv1CrusCANStateTemp;
    }

    /* End of Switch: '<S254>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/CCTR_MedTEB' */

    /* Inport: '<Root>/VeASLR_b_HomSpdLimEnabled' */
    (void)Rte_Read_VeASLR_b_HomSpdLimEnabled_Value(&Switch);

    /* Inport: '<Root>/VeASLR_b_STSpdLimEnabled' */
    (void)Rte_Read_VeASLR_b_STSpdLimEnabled_Value(&Switch1);

    /* Inport: '<Root>/VePLTR_e_ProxiIncreasingSpdCnst' */
    (void)Rte_Read_VePLTR_e_ProxiIncreasingSpdCnst_Value(&tmpRead_k);

    /* Inport: '<Root>/VePLTR_Pct_ProxiSpdomtrTol' */
    (void)Rte_Read_VePLTR_Pct_ProxiSpdomtrTol_Value(&rtb_selectsetffpower);

    /* Inport: '<Root>/VePLTR_b_SpeedUnit' */
    (void)Rte_Read_VePLTR_b_SpeedUnit_Value(&tmpRead_c);

    /* Inport: '<Root>/VeCSVR_v_CanSigVehSpd' */
    (void)Rte_Read_VeCSVR_v_CanSigVehSpd_Value(&tmpRead_b);

    /* Inport: '<Root>/VeASLR_v_SetVehSpdLimKPH' */
    (void)Rte_Read_VeASLR_v_SetVehSpdLimKPH_Value(&tmpRead_7);

    /* Inport: '<Root>/VeBRKR_b_CMMIntervention' */
    (void)Rte_Read_VeBRKR_b_CMMIntervention_Value(&rtb_AND_ge);

    /* Inport: '<Root>/VeBRKR_b_ESCActive' */
    (void)Rte_Read_VeBRKR_b_ESCActive_Value(&rtb_RelationalOperator_f);

    /* Inport: '<Root>/VeBRKR_b_ABSActive' */
    (void)Rte_Read_VeBRKR_b_ABSActive_Value(&rtb_RelationalOperator2_b);

    /* Inport: '<Root>/VeBRKR_b_ASRActive' */
    (void)Rte_Read_VeBRKR_b_ASRActive_Value(&rtb_OR1_i1s);

    /* Inport: '<Root>/VeBRKR_b_MSRActive' */
    (void)Rte_Read_VeBRKR_b_MSRActive_Value(&rtb_AND_a);

    /* Inport: '<Root>/VeGRAR_b_DisableCC' */
    (void)Rte_Read_VeGRAR_b_DisableCC_Value((&(VeCCTR_b_Lv2CrusOff)));

    /* Outputs for Function Call SubSystem: '<Root>/CCTR_MedTEB' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CruiseCANState'
     */
    /* Outputs for Atomic SubSystem: '<S257>/EdgeRising1' */
    /* Logic: '<S330>/OR1' incorporates:
     *  UnitDelay: '<S330>/Unit Delay'
     */
    rtb_AND_fs = !CCTR_ac_DW.UnitDelay_DSTATE_lh;

    /* Update for UnitDelay: '<S330>/Unit Delay' */
    CCTR_ac_DW.UnitDelay_DSTATE_lh = VeCCTR_b_CcOnOffSts_Out;

    /* Logic: '<S257>/Logical3' incorporates:
     *  Constant: '<S332>/Calib'
     *  Logic: '<S257>/Logical1'
     *  Logic: '<S330>/AND'
     */
    rtb_TmpSignalConversionAtVeASLR_b_ASLEna =
        ((((KeCCTR_b_CCInstantActivationEnable) &&
           rtb_TmpSignalConversionAtVeASLR_b_ASLEna) &&
          ((VeCCTR_b_CcOnOffSts_Out) && rtb_AND_fs)) && (!CCTR_ac_B.UnitDelay5));

    /* End of Outputs for SubSystem: '<S257>/EdgeRising1' */

    /* SignalConversion generated from: '<S24>/ESCFailSts_OFF' incorporates:
     *  Constant: '<S260>/Calib'
     */
    CCTR_ac_B.OutportBufferForESCFailSts_OFF = KeCCTR_b_ESCFailSts_OFF;

    /* SignalConversion generated from: '<S24>/VeCCTI_b_isM182' incorporates:
     *  Constant: '<S255>/Calib'
     */
    CCTR_ac_B.OutportBufferForVeCCTI_b_isM182 = HeCCTR_b_isM182;

    /* SignalConversion generated from: '<S24>/VeCCTR_t_CCTR_dT' incorporates:
     *  Constant: '<S261>/Calib'
     */
    CCTR_ac_B.OutportBufferForVeCCTR_t_CCTR_dT = KeCCTR_t_12p5dt;

    /* Switch: '<S269>/Switch8' incorporates:
     *  Constant: '<S347>/Calib'
     */
    if (KeCCTR_b_LV2CrusOffOvvrd_Enab)
    {
        /* Switch: '<S269>/Switch8' incorporates:
         *  Constant: '<S348>/Calib'
         *  Inport: '<Root>/VeGRAR_b_DisableCC'
         */
        VeCCTR_b_Lv2CrusOff = KeCCTR_b_LV2CrusOffOvvrd_Inactive;
    }

    /* End of Switch: '<S269>/Switch8' */

    /* Switch: '<S270>/Switch2' incorporates:
     *  Inport: '<S24>/SpeedUnit'
     */
    if (tmpRead_c)
    {
        /* Switch: '<S270>/Switch2' incorporates:
         *  Constant: '<S357>/Calib'
         */
        VeCCTR_v_CcMaxSetSpd = KeCCTR_v_CcSetMphMax;

        /* Switch: '<S270>/Switch11' incorporates:
         *  Constant: '<S270>/Constant Value'
         *  Inport: '<S24>/CanSigVehSpd'
         *  Product: '<S270>/Product1'
         */
        VeCCTR_v_VehSpdUnbiasedConv = 0.621359229F * tmpRead_b;
    }
    else
    {
        /* Switch: '<S270>/Switch2' incorporates:
         *  Constant: '<S355>/Calib'
         */
        VeCCTR_v_CcMaxSetSpd = KeCCTR_v_CcSetKphMax;

        /* Switch: '<S270>/Switch11' incorporates:
         *  Inport: '<S24>/CanSigVehSpd'
         */
        VeCCTR_v_VehSpdUnbiasedConv = tmpRead_b;
    }

    /* End of Switch: '<S270>/Switch2' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CCTC'
     */
    /* Outputs for Atomic SubSystem: '<S26>/CC_Set_Point' */
    /* Outputs for Atomic SubSystem: '<S80>/Set_Speed' */
    /* Sum: '<S270>/Sum2' incorporates:
     *  Constant: '<S270>/Constant Value2'
     *  Constant: '<S270>/Constant Value5'
     *  Inport: '<S24>/ProxiSpdomtrTol'
     *  Product: '<S270>/Product3'
     *  Sum: '<S172>/Sum2'
     */
    rtb_switch = (0.01F * rtb_selectsetffpower) + 1.0F;

    /* End of Outputs for SubSystem: '<S80>/Set_Speed' */
    /* End of Outputs for SubSystem: '<S26>/CC_Set_Point' */

    /* Rounding: '<S270>/Rounding1' incorporates:
     *  DataTypeConversion: '<S270>/Data Type Conversion'
     *  Inport: '<Root>/VePLTR_e_ProxiIncreasingSpdCnst'
     *  Product: '<S270>/Product2'
     *  Sum: '<S270>/Sum1'
     *  Sum: '<S270>/Sum2'
     */
    VeCCTR_v_VehSpdBiasRound = roundf((rtb_switch * VeCCTR_v_VehSpdUnbiasedConv)
        + ((float32)((uint16)tmpRead_k)));

    /* Switch: '<S270>/Switch1' incorporates:
     *  Inport: '<S24>/SpeedUnit'
     */
    if (tmpRead_c)
    {
        /* Switch: '<S270>/Switch1' incorporates:
         *  Constant: '<S358>/Calib'
         */
        VeCCTR_v_CcMinSetSpd = KeCCTR_v_CcSetMphMin;

        /* Switch: '<S270>/Switch10' incorporates:
         *  Constant: '<S352>/Calib'
         */
        VeCCTR_v_CcMaxSpd = KeCCTR_v_CcMphMax;

        /* Switch: '<S270>/Switch12' incorporates:
         *  Constant: '<S354>/Calib'
         */
        VeCCTR_v_CcMinSpdRes = KeCCTR_v_CcMphMinRes;
    }
    else
    {
        /* Switch: '<S270>/Switch1' incorporates:
         *  Constant: '<S356>/Calib'
         */
        VeCCTR_v_CcMinSetSpd = KeCCTR_v_CcSetKphMin;

        /* Switch: '<S270>/Switch10' incorporates:
         *  Constant: '<S349>/Calib'
         */
        VeCCTR_v_CcMaxSpd = KeCCTR_v_CcKphMax;

        /* Switch: '<S270>/Switch12' incorporates:
         *  Constant: '<S351>/Calib'
         */
        VeCCTR_v_CcMinSpdRes = KeCCTR_v_CcKphMinRes;
    }

    /* End of Switch: '<S270>/Switch1' */

    /* Switch: '<S270>/Switch7' incorporates:
     *  Logic: '<S270>/Logical1'
     */
    if (Switch1 || Switch)
    {
        /* Switch: '<S270>/Switch5' incorporates:
         *  Inport: '<S24>/SpeedUnit'
         */
        if (tmpRead_c)
        {
            /* Switch: '<S270>/Switch5' incorporates:
             *  Constant: '<S270>/Constant Value3'
             *  Product: '<S270>/Product4'
             *  Rounding: '<S270>/Rounding3'
             */
            rtb_TmpSignalConversionAtVeASLR_v_STSpdL = roundf(0.621359229F *
                rtb_TmpSignalConversionAtVeASLR_v_STSpdL);

            /* Switch: '<S270>/Switch6' incorporates:
             *  Constant: '<S270>/Constant Value1'
             *  Product: '<S270>/Product'
             *  Rounding: '<S270>/Rounding2'
             */
            rtb_TmpSignalConversionAtVePLTR_v_HomSpd = roundf(0.621359229F *
                rtb_TmpSignalConversionAtVePLTR_v_HomSpd);
        }

        /* End of Switch: '<S270>/Switch5' */

        /* Switch: '<S270>/Switch7' incorporates:
         *  MinMax: '<S270>/MinMax'
         */
        VeCCTR_v_CcMaxSetSpd = fminf(fminf(VeCCTR_v_CcMaxSetSpd,
            rtb_TmpSignalConversionAtVePLTR_v_HomSpd),
            rtb_TmpSignalConversionAtVeASLR_v_STSpdL);
    }

    /* End of Switch: '<S270>/Switch7' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/CCTR_MedTEB' */

    /* Inport: '<Root>/VeTMDR_e_TrrnMd' */
    (void)Rte_Read_VeTMDR_e_TrrnMd_Value(&tmpRead_r);

    /* Inport: '<Root>/VePLTR_e_EPBHoldSts' */
    (void)Rte_Read_VePLTR_e_EPBHoldSts_Value(&tmpRead_q);

    /* Inport: '<Root>/VeASLR_v_SetVehSpdLimMPH' */
    (void)Rte_Read_VeASLR_v_SetVehSpdLimMPH_Value(&tmpRead_i);

    /* Inport: '<Root>/VeCSVR_b_VehSpdVSOSigFailSts' */
    (void)Rte_Read_VeCSVR_b_VehSpdVSOSigFailSts_Value(&tmpRead_g);

    /* Inport: '<Root>/VeASLR_e_TSRClusterWarnings' */
    (void)Rte_Read_VeASLR_e_TSRClusterWarnings_Value(&tmpRead_d);

    /* Inport: '<Root>/VePLTR_b_ParkBrakeSts' */
    (void)Rte_Read_VePLTR_b_ParkBrakeSts_Value(&rtb_Switch_p);

    /* Outputs for Function Call SubSystem: '<Root>/CCTR_MedTEB' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CruiseCANState'
     */
    /* Switch: '<S270>/Switch9' incorporates:
     *  Inport: '<S24>/SpeedUnit'
     */
    if (tmpRead_c)
    {
        /* Switch: '<S270>/Switch9' incorporates:
         *  Constant: '<S353>/Calib'
         */
        VeCCTR_v_CcMinSpd = KeCCTR_v_CcMphMin;
    }
    else
    {
        /* Switch: '<S270>/Switch9' incorporates:
         *  Constant: '<S350>/Calib'
         */
        VeCCTR_v_CcMinSpd = KeCCTR_v_CcKphMin;
    }

    /* End of Switch: '<S270>/Switch9' */

    /* SignalConversion generated from: '<S24>/CC_5Unit_AccelDecel_Enabl' incorporates:
     *  Constant: '<S259>/Calib'
     */
    CCTR_ac_B.OutportBufferForCC_5Unit_AccelDecel_Enab =
        KeCCTR_b_Cc5UnitAccelDecelEnabl;

    /* Switch: '<S247>/Switch' incorporates:
     *  Constant: '<S274>/Calib'
     *  Switch: '<S247>/Switch1'
     */
    if (KeCCTR_b_BSMTrqEnbld_Selector)
    {
        /* Switch: '<S247>/Switch' incorporates:
         *  Constant: '<S272>/Constant'
         *  Constant: '<S273>/Constant'
         *  Logic: '<S247>/Logical Operator'
         *  RelationalOperator: '<S247>/Relational Operator'
         *  RelationalOperator: '<S247>/Relational Operator2'
         */
        Switch = ((((uint32)rtb_TmpSignalConversionAtVePLTR_e_BSM_Ax) !=
                   CePLTR_e_No_Req) && (((uint32)
                    rtb_TmpSignalConversionAtVePLTR_e_BSM_Ax) !=
                   CePLTR_e_BSM_AxleTrq_Enbld_SNA));

        /* Switch: '<S247>/Switch1' incorporates:
         *  Constant: '<S271>/Constant'
         *  RelationalOperator: '<S247>/Relational Operator1'
         */
        Switch1 = (((uint32)rtb_TmpSignalConversionAtVePLTR_e_BSM_Ax) ==
                   CePLTR_e_BSM_AxleTrq_Enbld_SNA);
    }
    else
    {
        /* Switch: '<S247>/Switch' incorporates:
         *  Merge: '<Root>/Merge_8'
         *  SignalConversion generated from: '<S1>/VeCCTR_b_ACCTrqEnabled_BSM'
         */
        Switch = Rte_IrvRead_CCTR_MedTEB_ACC_TrqEnabled_BSM_IRV();

        /* Switch: '<S247>/Switch1' incorporates:
         *  Merge: '<Root>/Merge_9'
         *  SignalConversion generated from: '<S1>/VeCCTR_b_ACCTrqEnabled_BSMFA'
         */
        Switch1 = Rte_IrvRead_CCTR_MedTEB_ACC_TrqEnabled_BSMFA_IRV();
    }

    /* End of Switch: '<S247>/Switch' */

    /* Update for UnitDelay: '<S24>/Unit Delay1' */
    CCTR_ac_DW.UnitDelay1_DSTATE_ky = CCTR_ac_B.PrevOnOffSts;

    /* Update for UnitDelay: '<S251>/Unit Delay' */
    CCTR_ac_DW.UnitDelay_DSTATE_g = VeCCTR_e_Lv1CrusCANStateTemp;

    /* Update for UnitDelay: '<S254>/Unit Delay' incorporates:
     *  Inport: '<Root>/VeASLR_e_HDC_Status'
     *  Inport: '<S24>/HDC_Sts'
     */
    CCTR_ac_DW.UnitDelay_DSTATE_om = tmpRead_p;

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CCTC'
     */
    /* Outputs for Atomic SubSystem: '<S26>/CC_EnabLogic' */
    /* Outputs for Atomic SubSystem: '<S79>/Inh_Enable' */
    /* Logic: '<S86>/Logical' incorporates:
     *  Constant: '<S139>/Constant'
     *  Constant: '<S140>/Constant'
     *  Inport: '<S24>/proxiHDC_Sts'
     *  Logic: '<S86>/Logical1'
     *  Logic: '<S86>/Logical2'
     *  Logic: '<S86>/Logical3'
     *  RelationalOperator: '<S86>/Comparison1'
     *  RelationalOperator: '<S86>/Comparison4'
     */
    rtb_Logical_n = ((((((uint32)tmpRead_p) != CeASLR_e_HDC_UNAVL) && (((uint32)
                         tmpRead_p) != CeASLR_e_HDC_AVL)) && rtb_Logical_n) &&
                     (CCTR_ac_B.OutportBufferForVeCCTI_b_isM182));

    /* Logic: '<S86>/CC_INH_ENABLE' incorporates:
     *  Constant: '<S138>/Constant'
     *  Inport: '<Root>/VeAPSR_e_Lv1PVMode'
     *  Inport: '<S24>/VeAPSR_e_Lv1PVMode'
     *  Inport: '<S24>/VeCSVR_b_CanSigVehSpd_FA'
     *  Inport: '<S24>/VeCSVR_b_VehSpdVSOSigFailSts'
     *  Inport: '<S24>/VeSRAR_b_InhibitCruise'
     *  RelationalOperator: '<S86>/Pedal not OK'
     */
    VeCCTR_b_CcInhEnable = (((((((VeCCTR_b_Lv1OffReq) || (((uint32)tmpRead) !=
        CeAPSR_e_LV1PVMode_PVOk)) || rtb_Comparison1_d) || tmpRead_g) ||
        rtb_AND_n2) || (VeCCTR_b_Lv2CrusOff)) || rtb_Logical_n);

    /* End of Outputs for SubSystem: '<S79>/Inh_Enable' */

    /* UnitDelay: '<S79>/Unit Delay4' */
    VeCCTR_b_CcEngaged_Prev = CCTR_ac_DW.UnitDelay4_DSTATE_n;

    /* UnitDelay: '<S79>/FixPt Unit Delay1' */
    VeCCTR_b_CcEnabledPrev = CCTR_ac_DW.FixPtUnitDelay1_DSTATE_m;

    /* Outputs for Atomic SubSystem: '<S79>/Inh_Engd' */
    /* RelationalOperator: '<S141>/Comparison1' incorporates:
     *  Gain: '<S146>/Gain'
     *  Gain: '<S147>/Gain'
     *  Gain: '<S148>/Gain'
     *  Gain: '<S155>/Gain'
     *  Gain: '<S156>/Gain'
     *  Gain: '<S157>/Gain'
     *  Logic: '<S141>/CC_INH_ENGAGE'
     *  Logic: '<S141>/Logical Operator1'
     *  Logic: '<S141>/Logical1'
     *  Logic: '<S141>/Logical2'
     *  Logic: '<S141>/Logical3'
     *  Logic: '<S142>/CC_INH_ENGAGE'
     *  Logic: '<S142>/Logical Operator1'
     *  Logic: '<S142>/Logical1'
     *  Logic: '<S142>/Logical2'
     *  Logic: '<S142>/Logical3'
     *  RelationalOperator: '<S141>/Comparison'
     *  RelationalOperator: '<S141>/Comparison2'
     *  RelationalOperator: '<S141>/Comparison3'
     *  RelationalOperator: '<S141>/Comparison4'
     *  RelationalOperator: '<S142>/Comparison'
     *  RelationalOperator: '<S142>/Comparison1'
     *  RelationalOperator: '<S142>/Comparison2'
     *  RelationalOperator: '<S142>/Comparison3'
     *  RelationalOperator: '<S142>/Comparison4'
     *  RelationalOperator: '<S142>/Comparison5'
     *  RelationalOperator: '<S142>/Comparison6'
     *  RelationalOperator: '<S142>/Comparison7'
     */
#if !Rte_SysCon_Variant_CCTR_2

    /* Switch: '<S230>/FixPt Switch6' incorporates:
     *  Constant: '<S143>/Constant'
     *  Constant: '<S144>/Constant'
     *  Constant: '<S145>/Constant'
     */
    rtb_AND_fs = (((((uint32)tmpRead_1) == CeTRGR_e_TransRangePark) || (((uint32)
                     tmpRead_1) == CeTRGR_e_TransRangeNeutral)) || (((uint32)
                    tmpRead_1) == CeTRGR_e_TransRangeReverse));

    /* Outputs for Function Call SubSystem: '<S1>/CruiseCANState' */
    /* RelationalOperator: '<S104>/Comparison2' incorporates:
     *  Inport: '<S24>/VeBRKR_b_ABSActive'
     *  Inport: '<S24>/VeBRKR_b_ASRActive'
     *  Inport: '<S24>/VeBRKR_b_CMMIntervention'
     *  Inport: '<S24>/VeBRKR_b_ESCActive'
     *  Inport: '<S24>/VeBRKR_b_MSRActive'
     */
    rtb_Comparison2_fe = ((((rtb_RelationalOperator2_b ||
        rtb_RelationalOperator_f) || rtb_AND_a) || rtb_OR1_i1s) || rtb_AND_ge);

    /* RelationalOperator: '<S104>/Comparison1' incorporates:
     *  Inport: '<S24>/ESCFailSts'
     */
    rtb_Comparison1_d = (rtb_OR1_i2b &&
                         (!CCTR_ac_B.OutportBufferForESCFailSts_OFF));

    /* VariantMerge generated from: '<S87>/VS1' incorporates:
     *  Inport: '<S24>/VePLTR_b_ParkBrakeSts'
     */
    rtb_VariantMerge_For_Variant_Source_VS_i = ((((((rtb_AND_fs ||
        (VeCCTI_b_BrkPdlSts)) || rtb_Comparison2_fe) || rtb_Switch_p) ||
        (VeCCTR_v_VehSpdBiasRound < VeCCTR_v_CcMinSpd)) ||
        (VeCCTR_v_VehSpdBiasRound > VeCCTR_v_CcMaxSpd)) || rtb_Comparison1_d);

    /* End of Outputs for SubSystem: '<S1>/CruiseCANState' */

    /* VariantMerge generated from: '<S87>/VS3' */
    rtb_VariantMerge_For_Variant_Source_VS3 = rtb_AND_fs;

    /* VariantMerge generated from: '<S87>/VS4' */
    rtb_VariantMerge_For_Variant_Source_VS4 = rtb_Comparison1_d;

#else

    /* RelationalOperator: '<S104>/Comparison1' incorporates:
     *  Constant: '<S149>/Constant'
     *  Constant: '<S150>/Constant'
     *  Constant: '<S151>/Constant'
     *  Logic: '<S142>/Logical Operator1'
     *  RelationalOperator: '<S142>/Comparison1'
     *  RelationalOperator: '<S142>/Comparison2'
     *  RelationalOperator: '<S142>/Comparison3'
     */
    rtb_Comparison1_d = (((((uint32)tmpRead_1) == CeTRGR_e_TransRangePark) ||
                          (((uint32)tmpRead_1) == CeTRGR_e_TransRangeNeutral)) ||
                         (((uint32)tmpRead_1) == CeTRGR_e_TransRangeReverse));

    /* Outputs for Function Call SubSystem: '<S1>/CruiseCANState' */
    /* RelationalOperator: '<S104>/Comparison2' incorporates:
     *  Constant: '<S153>/Constant'
     *  Constant: '<S154>/Constant'
     *  Inport: '<S24>/VeBRKR_b_ABSActive'
     *  Inport: '<S24>/VeBRKR_b_CMMIntervention'
     *  Inport: '<S24>/VeBRKR_b_ESCActive'
     *  Logic: '<S142>/Logical2'
     *  RelationalOperator: '<S142>/Comparison5'
     *  RelationalOperator: '<S142>/Comparison6'
     */
    rtb_Comparison2_fe = ((((rtb_RelationalOperator2_b ||
        rtb_RelationalOperator_f) || (((uint32)tmpRead_n) ==
        CeBRKR_e_ExtSysTemporaryOff)) || (((uint32)tmpRead_o) ==
                            CeBRKR_e_ExtSysTemporaryOff)) || rtb_AND_ge);

    /* Switch: '<S230>/FixPt Switch6' incorporates:
     *  Inport: '<S24>/ESCFailSts'
     *  Logic: '<S142>/Logical1'
     *  Logic: '<S142>/Logical3'
     */
    rtb_AND_fs = (rtb_OR1_i2b && (!CCTR_ac_B.OutportBufferForESCFailSts_OFF));

    /* VariantMerge generated from: '<S87>/VS1' incorporates:
     *  Constant: '<S152>/Constant'
     *  Inport: '<Root>/VePLTR_e_EPBHoldSts'
     *  Inport: '<S24>/EPB_Sts'
     *  Logic: '<S142>/CC_INH_ENGAGE'
     *  RelationalOperator: '<S142>/Comparison'
     *  RelationalOperator: '<S142>/Comparison4'
     *  RelationalOperator: '<S142>/Comparison7'
     */
    rtb_VariantMerge_For_Variant_Source_VS_i = ((((((rtb_Comparison1_d ||
        (VeCCTI_b_BrkPdlSts)) || rtb_Comparison2_fe) || (((uint32)tmpRead_q) !=
        CePLTR_e_EPBHoldSts_REL)) || (VeCCTR_v_VehSpdBiasRound <
        VeCCTR_v_CcMinSpd)) || (VeCCTR_v_VehSpdBiasRound > VeCCTR_v_CcMaxSpd)) ||
        rtb_AND_fs);

    /* End of Outputs for SubSystem: '<S1>/CruiseCANState' */

    /* VariantMerge generated from: '<S87>/VS3' incorporates:
     *  Gain: '<S155>/Gain'
     */
    rtb_VariantMerge_For_Variant_Source_VS3 = rtb_Comparison1_d;

    /* VariantMerge generated from: '<S87>/VS4' incorporates:
     *  Gain: '<S157>/Gain'
     */
    rtb_VariantMerge_For_Variant_Source_VS4 = rtb_AND_fs;

#endif

    /* End of RelationalOperator: '<S141>/Comparison1' */

    /* SignalConversion generated from: '<S87>/VS2' */
    VeCCTR_b_CcESCEventDetec = rtb_Comparison2_fe;

    /* End of Outputs for SubSystem: '<S79>/Inh_Engd' */

    /* Outputs for Atomic SubSystem: '<S79>/CcModeValidDeter' */
    /* RelationalOperator: '<S100>/Relational Operator5' incorporates:
     *  Constant: '<S100>/Accel_State'
     */
    VeCCTR_b_AccelFlg = (((sint32)VeCCTR_e_ActualLv1CrusCANState) == 7);

    /* Outputs for Atomic SubSystem: '<S85>/Accel_ModeDeterm' */
    /* Logic: '<S97>/CC_ACCEL_MODE' incorporates:
     *  Constant: '<S109>/Calib'
     *  Constant: '<S110>/Calib'
     *  RelationalOperator: '<S97>/Comparison3'
     *  RelationalOperator: '<S97>/Relational Operator1'
     *  UnitDelay: '<S79>/Unit Delay3'
     */
    VeCCTR_b_CcAccelMode = (((((VeCCTR_b_AccelFlg) &&
        (CCTR_ac_DW.UnitDelay3_DSTATE_k <= KeCCTR_t_tExit_Acc)) &&
        (CCTR_ac_DW.UnitDelay3_DSTATE_k >= KeCCTR_t_CcAccelTime)) &&
        (VeCCTR_b_CcEngaged_Prev)) && (VeCCTR_b_CcEnabledPrev));

    /* End of Outputs for SubSystem: '<S85>/Accel_ModeDeterm' */

    /* RelationalOperator: '<S100>/Relational Operator' incorporates:
     *  Constant: '<S100>/Cancel_State'
     */
    rtb_RelationalOperator_f = (((sint32)VeCCTR_e_ActualLv1CrusCANState) == 2);

    /* Outputs for Atomic SubSystem: '<S85>/Cancel_ModeDeterm' */
    /* Logic: '<S98>/CC_CANCEL_MODE' */
    VeCCTR_b_CcCancelMode = ((rtb_RelationalOperator_f &&
        (VeCCTR_b_CcEnabledPrev)) && (VeCCTR_b_CcEngaged_Prev));

    /* End of Outputs for SubSystem: '<S85>/Cancel_ModeDeterm' */

    /* RelationalOperator: '<S100>/Relational Operator1' incorporates:
     *  Constant: '<S100>/Coast_State'
     */
    VeCCTR_b_CoastFlag = (((sint32)VeCCTR_e_ActualLv1CrusCANState) == 3);

    /* Outputs for Atomic SubSystem: '<S85>/Coast_ModeDeterm' */
    /* Logic: '<S99>/CC_COAST_MODE' incorporates:
     *  Constant: '<S111>/Calib'
     *  RelationalOperator: '<S99>/Relational Operator18'
     *  UnitDelay: '<S79>/Unit Delay1'
     */
    VeCCTR_b_CcCoastMode = ((((CCTR_ac_DW.UnitDelay1_DSTATE_k >=
        KeCCTR_t_CcCoastTime) && (VeCCTR_b_CcEngaged_Prev)) &&
        (VeCCTR_b_CcEnabledPrev)) && (VeCCTR_b_CoastFlag));

    /* End of Outputs for SubSystem: '<S85>/Coast_ModeDeterm' */

    /* RelationalOperator: '<S100>/Relational Operator3' incorporates:
     *  Constant: '<S100>/Resume_State'
     */
    VeCCTR_b_ResumeFlg = (((sint32)VeCCTR_e_ActualLv1CrusCANState) == 5);

    /* Outputs for Atomic SubSystem: '<S100>/EdgeFalling' */
    /* Logic: '<S112>/AND' incorporates:
     *  Logic: '<S112>/OR1'
     *  UnitDelay: '<S112>/Unit Delay'
     */
    rtb_Comparison2_fe = ((!VeCCTR_b_ResumeFlg) &&
                          (CCTR_ac_DW.UnitDelay_DSTATE_hh));

    /* Update for UnitDelay: '<S112>/Unit Delay' */
    CCTR_ac_DW.UnitDelay_DSTATE_hh = VeCCTR_b_ResumeFlg;

    /* End of Outputs for SubSystem: '<S100>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S100>/EdgeFalling1' */
    /* Logic: '<S113>/AND' incorporates:
     *  Logic: '<S113>/OR1'
     *  UnitDelay: '<S113>/Unit Delay'
     */
    rtb_AND_n2 = ((!VeCCTR_b_AccelFlg) && (CCTR_ac_DW.UnitDelay_DSTATE_m2));

    /* Update for UnitDelay: '<S113>/Unit Delay' */
    CCTR_ac_DW.UnitDelay_DSTATE_m2 = VeCCTR_b_AccelFlg;

    /* End of Outputs for SubSystem: '<S100>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S100>/EdgeFalling2' */
    /* Logic: '<S114>/AND' incorporates:
     *  Logic: '<S114>/OR1'
     *  UnitDelay: '<S114>/Unit Delay'
     */
    rtb_AND_a = ((!VeCCTR_b_CoastFlag) && (CCTR_ac_DW.UnitDelay_DSTATE_gi));

    /* Update for UnitDelay: '<S114>/Unit Delay' */
    CCTR_ac_DW.UnitDelay_DSTATE_gi = VeCCTR_b_CoastFlag;

    /* End of Outputs for SubSystem: '<S100>/EdgeFalling2' */

    /* RelationalOperator: '<S100>/Relational Operator2' incorporates:
     *  Constant: '<S100>/ON_State'
     */
    rtb_RelationalOperator2_b = (((sint32)VeCCTR_e_ActualLv1CrusCANState) == 4);

    /* Outputs for Atomic SubSystem: '<S100>/EdgeRising' */
    /* Logic: '<S115>/AND' incorporates:
     *  Logic: '<S115>/OR1'
     *  UnitDelay: '<S115>/Unit Delay'
     */
    rtb_AND_ge = (rtb_RelationalOperator2_b && (!CCTR_ac_DW.UnitDelay_DSTATE_aa));

    /* Update for UnitDelay: '<S115>/Unit Delay' */
    CCTR_ac_DW.UnitDelay_DSTATE_aa = rtb_RelationalOperator2_b;

    /* End of Outputs for SubSystem: '<S100>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S100>/EdgeRising1' */
    /* Logic: '<S116>/OR1' incorporates:
     *  UnitDelay: '<S116>/Unit Delay'
     */
    rtb_OR1_i2b = !CCTR_ac_DW.UnitDelay_DSTATE_eq;

    /* Update for UnitDelay: '<S116>/Unit Delay' */
    CCTR_ac_DW.UnitDelay_DSTATE_eq = VeCCTR_b_ResumeFlg;

    /* End of Outputs for SubSystem: '<S100>/EdgeRising1' */

    /* RelationalOperator: '<S100>/Relational Operator4' incorporates:
     *  Constant: '<S100>/OFF_State'
     */
    rtb_AND_fs = (((sint32)VeCCTR_e_ActualLv1CrusCANState) == 6);

    /* Outputs for Atomic SubSystem: '<S100>/EdgeRising2' */
    /* Logic: '<S117>/OR1' incorporates:
     *  UnitDelay: '<S117>/Unit Delay'
     */
    rtb_OR1_i1s = !CCTR_ac_DW.UnitDelay_DSTATE_bd;

    /* Update for UnitDelay: '<S117>/Unit Delay' */
    CCTR_ac_DW.UnitDelay_DSTATE_bd = rtb_AND_fs;

    /* End of Outputs for SubSystem: '<S100>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S85>/OnOff_ModeDeterm' */
    /* Switch: '<S101>/Switch' incorporates:
     *  Constant: '<S118>/Calib'
     *  Logic: '<S117>/AND'
     */
    if (KeCCTR_b_ONOFFModDetBCMOvrrd)
    {
        rtb_AND_fs = rtb_AND_ge;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S100>/EdgeRising2' */
        rtb_AND_fs = (rtb_AND_fs && rtb_OR1_i1s);

        /* End of Outputs for SubSystem: '<S100>/EdgeRising2' */
    }

    /* End of Switch: '<S101>/Switch' */

    /* Logic: '<S101>/CC_OFF_MODE' incorporates:
     *  Logic: '<S101>/logic'
     */
    VeCCTR_b_CcOffMode = ((VeCCTR_b_Lv1OffReq) || (rtb_AND_fs &&
                           (VeCCTR_b_CcEnabledPrev)));

    /* Logic: '<S101>/CC_ON_MODE' incorporates:
     *  Logic: '<S101>/Logical Operator12'
     *  Logic: '<S101>/Logical Operator13'
     */
    VeCCTR_b_CcOnMode = ((rtb_AND_ge && (!VeCCTR_b_CcEnabledPrev)) &&
                         (!VeCCTR_b_Lv1OffReq));

    /* End of Outputs for SubSystem: '<S85>/OnOff_ModeDeterm' */

    /* Outputs for Atomic SubSystem: '<S85>/Set_ModeDeterm' */
    /* Outputs for Atomic SubSystem: '<S85>/Resume_ModeDeterm' */
    /* Logic: '<S103>/Logical Operator18' incorporates:
     *  Logic: '<S104>/Logical Operator2'
     */
    tmpRead_h = !VeCCTR_b_CcEngaged_Prev;

    /* End of Outputs for SubSystem: '<S85>/Set_ModeDeterm' */

    /* Outputs for Atomic SubSystem: '<S100>/EdgeRising1' */
    /* Logic: '<S103>/CC_RESUME_MODE' incorporates:
     *  Constant: '<S103>/zero'
     *  Logic: '<S103>/Logical Operator18'
     *  Logic: '<S116>/AND'
     *  RelationalOperator: '<S103>/Relational Operator12'
     *  RelationalOperator: '<S103>/Relational Operator13'
     *  UnitDelay: '<S26>/Unit Delay3'
     */
    VeCCTR_b_CcResumeMode = ((((((VeCCTR_b_ResumeFlg) && rtb_OR1_i2b) &&
        (VeCCTR_b_CcEnabledPrev)) && tmpRead_h) && (CCTR_ac_DW.UnitDelay3_DSTATE
        > 0.0F)) && (VeCCTR_v_VehSpdBiasRound >= VeCCTR_v_CcMinSpdRes));

    /* End of Outputs for SubSystem: '<S100>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S85>/Set_ModeDeterm' */
    /* Outputs for Atomic SubSystem: '<S104>/Signal Latch On With Reset1' */
    /* Outputs for Atomic SubSystem: '<S103>/Signal Latch On With Reset' */
    /* Logic: '<S121>/NOT' incorporates:
     *  Logic: '<S134>/NOT'
     *  UnitDelay: '<S26>/Unit Delay5'
     */
    rtb_AND_fs = !CCTR_ac_DW.UnitDelay5_DSTATE;

    /* End of Outputs for SubSystem: '<S104>/Signal Latch On With Reset1' */
    /* End of Outputs for SubSystem: '<S85>/Set_ModeDeterm' */

    /* Logic: '<S121>/OR1' incorporates:
     *  Logic: '<S121>/NOT'
     *  Logic: '<S121>/OR'
     *  UnitDelay: '<S121>/Unit Delay'
     */
    VeCCTR_b_CcResumeModeLatch = ((VeCCTR_b_CcResumeMode) || (rtb_AND_fs &&
        (VeCCTR_b_CcResumeModeLatch)));

    /* End of Outputs for SubSystem: '<S103>/Signal Latch On With Reset' */

    /* Outputs for Atomic SubSystem: '<S103>/Signal Latch On With Reset1' */
    /* Logic: '<S122>/OR1' incorporates:
     *  Logic: '<S122>/NOT'
     *  Logic: '<S122>/OR'
     *  UnitDelay: '<S122>/Unit Delay'
     */
    VeCCTR_b_CcResAccTmrLockout = ((VeCCTR_b_CcResumeMode) ||
        ((!rtb_Comparison2_fe) && (VeCCTR_b_CcResAccTmrLockout)));

    /* End of Outputs for SubSystem: '<S103>/Signal Latch On With Reset1' */
    /* End of Outputs for SubSystem: '<S85>/Resume_ModeDeterm' */

    /* Outputs for Atomic SubSystem: '<S85>/Tap_ModeDeterm' */
    /* Outputs for Atomic SubSystem: '<S85>/Resume_BlendDeterm' */
    /* Abs: '<S102>/FixPt Abs' incorporates:
     *  Abs: '<S108>/FixPt Abs1'
     *  Sum: '<S102>/Sum1'
     *  UnitDelay: '<S26>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVePLTR_v_HomSpd = fabsf(CCTR_ac_DW.UnitDelay_DSTATE
        - VeCCTR_v_SetSpdUnbiasedPID_KPH);

    /* End of Outputs for SubSystem: '<S85>/Tap_ModeDeterm' */

    /* Outputs for Atomic SubSystem: '<S102>/Signal Latch On With Reset' */
    /* Logic: '<S120>/OR1' incorporates:
     *  Abs: '<S102>/FixPt Abs'
     *  Constant: '<S119>/Calib'
     *  Logic: '<S120>/NOT'
     *  Logic: '<S120>/OR'
     *  RelationalOperator: '<S102>/FixPt Relational Operator'
     *  UnitDelay: '<S120>/Unit Delay'
     */
    VeCCTR_b_CcResumGainBlndIncFlg = ((VeCCTR_b_CcResumeMode) ||
        ((rtb_TmpSignalConversionAtVePLTR_v_HomSpd > KeCCTR_v_CcResumEndSpdThres)
         && (VeCCTR_b_CcResumGainBlndIncFlg)));

    /* End of Outputs for SubSystem: '<S102>/Signal Latch On With Reset' */
    /* End of Outputs for SubSystem: '<S85>/Resume_BlendDeterm' */

    /* Outputs for Atomic SubSystem: '<S85>/Set_ModeDeterm' */
    /* Switch: '<S72>/select set ff power' incorporates:
     *  Abs: '<S104>/Abs'
     *  Sum: '<S104>/Sum1'
     *  UnitDelay: '<S26>/Unit Delay3'
     */
    rtb_selectsetffpower = fabsf(CCTR_ac_DW.UnitDelay3_DSTATE -
        VeCCTR_v_VehSpdBiasRound);

    /* RelationalOperator: '<S104>/Relational Operator4' incorporates:
     *  Constant: '<S129>/Calib'
     */
    rtb_RelationalOperator4_n = (VeCCTR_v_CcVehSpdErr >=
        KeCCTR_v_Cc4BSwTapDnUSpdErrThresh);

    /* Outputs for Atomic SubSystem: '<S26>/CC_VehWhlPwr' */
    /* Outputs for Atomic SubSystem: '<S81>/I_Term_Reset' */
    /* Outputs for Atomic SubSystem: '<S230>/EdgeFalling' */
    /* Outputs for Atomic SubSystem: '<S26>/CC_Set_Point' */
    /* Outputs for Atomic SubSystem: '<S80>/Set_Speed' */
    /* Outputs for Atomic SubSystem: '<S172>/EdgeFalling1' */
    /* Outputs for Atomic SubSystem: '<S85>/Tap_ModeDeterm' */
    /* Outputs for Atomic SubSystem: '<S104>/EdgeFalling2' */
    /* Logic: '<S104>/Logical Operator5' incorporates:
     *  Logic: '<S106>/Logical Operator8'
     *  Logic: '<S108>/FixPt Logical Operator'
     *  Logic: '<S125>/OR1'
     *  Logic: '<S211>/OR1'
     *  Logic: '<S239>/OR1'
     */
    rtb_AND_ge = !VeCCTR_b_CcCoastMode;

    /* End of Outputs for SubSystem: '<S104>/EdgeFalling2' */
    /* End of Outputs for SubSystem: '<S85>/Tap_ModeDeterm' */
    /* End of Outputs for SubSystem: '<S172>/EdgeFalling1' */
    /* End of Outputs for SubSystem: '<S80>/Set_Speed' */
    /* End of Outputs for SubSystem: '<S26>/CC_Set_Point' */
    /* End of Outputs for SubSystem: '<S230>/EdgeFalling' */
    /* End of Outputs for SubSystem: '<S81>/I_Term_Reset' */
    /* End of Outputs for SubSystem: '<S26>/CC_VehWhlPwr' */

    /* Outputs for Atomic SubSystem: '<S85>/TapDwn_ModeDeterm' */
    tmpRead_g = !rtb_RelationalOperator4_n;

    /* End of Outputs for SubSystem: '<S85>/TapDwn_ModeDeterm' */

    /* Outputs for Atomic SubSystem: '<S104>/Signal Latch On With Reset' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CruiseCANState'
     */
    /* Logic: '<S133>/OR1' incorporates:
     *  Constant: '<S128>/Calib'
     *  Inport: '<S24>/VeDTRR_b_PtcPdlInChrgVsCC'
     *  Logic: '<S104>/Logical Operator5'
     *  Logic: '<S133>/NOT'
     *  Logic: '<S133>/OR'
     *  RelationalOperator: '<S104>/Relational Operator3'
     *  UnitDelay: '<S104>/Unit Delay3'
     *  UnitDelay: '<S133>/Unit Delay'
     */
    VeCCTR_b_Cc4ButnLatchedDrOv = (tmpRead_0 || ((((((!tmpRead_h) && rtb_AND_ge)
        && (VeCCTR_v_CcVehSpdErr < KeCCTR_v_Cc4BSwLatchedDrOvClrErr)) &&
        (!VeCCTR_b_CcSetMode)) && tmpRead_g) && (VeCCTR_b_Cc4ButnLatchedDrOv)));

    /* End of Outputs for SubSystem: '<S104>/Signal Latch On With Reset' */

    /* RelationalOperator: '<S104>/Comparison1' incorporates:
     *  Constant: '<S132>/Calib'
     */
    rtb_Comparison1_d = (rtb_selectsetffpower >= KeCCTR_v_VDiff2);

    /* RelationalOperator: '<S104>/Comparison2' incorporates:
     *  Constant: '<S131>/Calib'
     */
    rtb_Comparison2_fe = (rtb_selectsetffpower >= KeCCTR_v_VDiff1);

    /* Logic: '<S104>/Logical2' incorporates:
     *  Logic: '<S104>/Logical'
     *  Logic: '<S104>/Logical1'
     */
    VeCCTR_b_VDifSetReq = ((rtb_AND_n2 && rtb_Comparison1_d) ||
                           (rtb_Comparison2_fe && rtb_AND_a));

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outputs for Atomic SubSystem: '<S26>/CC_VehWhlPwr' */
    /* Outputs for Atomic SubSystem: '<S81>/I_Term_Reset' */
    /* Outputs for Atomic SubSystem: '<S230>/EdgeFalling1' */
    /* Outputs for Atomic SubSystem: '<S81>/CC_Error_Calc' */
    /* Outputs for Atomic SubSystem: '<S228>/Error_Filtering' */
    /* Outputs for Atomic SubSystem: '<S233>/EdgeFalling' */
    /* Outputs for Atomic SubSystem: '<S26>/CC_Set_Point' */
    /* Outputs for Atomic SubSystem: '<S80>/Control_Speed' */
    /* Outputs for Atomic SubSystem: '<S170>/EdgeFalling' */
    /* Outputs for Atomic SubSystem: '<S80>/Set_Speed' */
    /* Outputs for Atomic SubSystem: '<S172>/EdgeFalling3' */
    /* Outputs for Atomic SubSystem: '<S104>/EdgeFalling' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CruiseCANState'
     */
    /* Logic: '<S123>/OR1' incorporates:
     *  Inport: '<S24>/VeDTRR_b_PtcPdlInChrgVsCC'
     *  Logic: '<S181>/OR1'
     *  Logic: '<S213>/OR1'
     *  Logic: '<S235>/OR1'
     *  Logic: '<S240>/OR1'
     */
    rtb_OR1_i2b = !tmpRead_0;

    /* End of Outputs for SubSystem: '<S172>/EdgeFalling3' */
    /* End of Outputs for SubSystem: '<S80>/Set_Speed' */
    /* End of Outputs for SubSystem: '<S170>/EdgeFalling' */
    /* End of Outputs for SubSystem: '<S80>/Control_Speed' */
    /* End of Outputs for SubSystem: '<S26>/CC_Set_Point' */
    /* End of Outputs for SubSystem: '<S233>/EdgeFalling' */
    /* End of Outputs for SubSystem: '<S228>/Error_Filtering' */
    /* End of Outputs for SubSystem: '<S81>/CC_Error_Calc' */
    /* End of Outputs for SubSystem: '<S230>/EdgeFalling1' */
    /* End of Outputs for SubSystem: '<S81>/I_Term_Reset' */
    /* End of Outputs for SubSystem: '<S26>/CC_VehWhlPwr' */

    /* Logic: '<S123>/AND' incorporates:
     *  Logic: '<S123>/OR1'
     *  UnitDelay: '<S123>/Unit Delay'
     */
    rtb_OR1_i1s = (rtb_OR1_i2b && (CCTR_ac_DW.UnitDelay_DSTATE_dr));

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CruiseCANState'
     */
    /* Update for UnitDelay: '<S123>/Unit Delay' incorporates:
     *  Inport: '<S24>/VeDTRR_b_PtcPdlInChrgVsCC'
     */
    CCTR_ac_DW.UnitDelay_DSTATE_dr = tmpRead_0;

    /* End of Outputs for SubSystem: '<S104>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S104>/Signal Latch On With Reset1' */
    /* Logic: '<S134>/OR1' incorporates:
     *  Logic: '<S134>/OR'
     *  UnitDelay: '<S134>/Unit Delay'
     */
    CCTR_ac_DW.UnitDelay_DSTATE_kl = (rtb_OR1_i1s || (rtb_AND_fs &&
        (CCTR_ac_DW.UnitDelay_DSTATE_kl)));

    /* End of Outputs for SubSystem: '<S104>/Signal Latch On With Reset1' */

    /* Outputs for Atomic SubSystem: '<S104>/EdgeFalling2' */
    /* Logic: '<S125>/AND' incorporates:
     *  UnitDelay: '<S125>/Unit Delay'
     */
    rtb_AND_fs = (rtb_AND_ge && (CCTR_ac_DW.UnitDelay_DSTATE_j0));

    /* Update for UnitDelay: '<S125>/Unit Delay' */
    CCTR_ac_DW.UnitDelay_DSTATE_j0 = VeCCTR_b_CcCoastMode;

    /* End of Outputs for SubSystem: '<S104>/EdgeFalling2' */

    /* Outputs for Atomic SubSystem: '<S26>/CC_Set_Point' */
    /* Outputs for Atomic SubSystem: '<S80>/Set_Speed' */
    /* Outputs for Atomic SubSystem: '<S172>/EdgeFalling' */
    /* Outputs for Atomic SubSystem: '<S85>/Tap_ModeDeterm' */
    /* Outputs for Atomic SubSystem: '<S104>/EdgeFalling1' */
    /* Logic: '<S124>/OR1' incorporates:
     *  Logic: '<S108>/FixPt Logical Operator'
     *  Logic: '<S210>/OR1'
     */
    rtb_OR1_i1s = !VeCCTR_b_CcAccelMode;

    /* End of Outputs for SubSystem: '<S85>/Tap_ModeDeterm' */
    /* End of Outputs for SubSystem: '<S172>/EdgeFalling' */
    /* End of Outputs for SubSystem: '<S80>/Set_Speed' */
    /* End of Outputs for SubSystem: '<S26>/CC_Set_Point' */

    /* Logic: '<S124>/AND' incorporates:
     *  Logic: '<S124>/OR1'
     *  UnitDelay: '<S124>/Unit Delay'
     */
    rtb_AND_jf = (rtb_OR1_i1s && (CCTR_ac_DW.UnitDelay_DSTATE_dh));

    /* Update for UnitDelay: '<S124>/Unit Delay' */
    CCTR_ac_DW.UnitDelay_DSTATE_dh = VeCCTR_b_CcAccelMode;

    /* End of Outputs for SubSystem: '<S104>/EdgeFalling1' */

    /* Switch: '<S230>/FixPt Switch6' incorporates:
     *  Logic: '<S104>/Logical Operator3'
     *  Logic: '<S104>/Logical Operator6'
     *  Logic: '<S104>/Logical Operator7'
     */
    rtb_AND_fs = ((!rtb_AND_fs) && (!rtb_AND_jf));

    /* Logic: '<S104>/Logical3' incorporates:
     *  Constant: '<S126>/Calib'
     *  Constant: '<S130>/Calib'
     *  RelationalOperator: '<S104>/Comparison3'
     *  UnitDelay: '<S134>/Unit Delay'
     */
    VeCCTR_b_DrOvSetReq = ((((KeCCTR_b_OverrideStoreFlag) &&
        (CCTR_ac_DW.UnitDelay_DSTATE_kl)) && (rtb_selectsetffpower <=
        KeCCTR_v_OverrideThrs)) && rtb_AND_fs);

    /* Logic: '<S104>/Logical4' incorporates:
     *  Constant: '<S127>/Calib'
     */
    VeCCTR_b_ResSetReq = (((KeCCTR_b_ResumeSet) && (VeCCTR_b_CcResumeModeLatch))
                          && rtb_AND_fs);

    /* Logic: '<S104>/CC_SET_MODE_4BSW' incorporates:
     *  Logic: '<S104>/Logical Operator1'
     *  Logic: '<S104>/Logical Operator16'
     *  Logic: '<S104>/Logical Operator4'
     */
    VeCCTR_b_CcSetMode = ((((rtb_AND_a || rtb_AND_n2) && (VeCCTR_b_CcEnabledPrev))
                           && (!rtb_VariantMerge_For_Variant_Source_VS_i)) &&
                          (((((tmpRead_h || (VeCCTR_b_Cc4ButnLatchedDrOv)) ||
        rtb_RelationalOperator4_n) || (VeCCTR_b_VDifSetReq)) ||
                            (VeCCTR_b_DrOvSetReq)) || (VeCCTR_b_ResSetReq)));

    /* End of Outputs for SubSystem: '<S85>/Set_ModeDeterm' */

    /* Outputs for Atomic SubSystem: '<S85>/TapDwn_ModeDeterm' */
    /* Outputs for Atomic SubSystem: '<S85>/TapUp_ModeDeterm' */
    /* Logic: '<S107>/Logical Operator7' incorporates:
     *  Logic: '<S106>/Logical Operator7'
     */
    rtb_AND_fs = !VeCCTR_b_Cc4ButnLatchedDrOv;

    /* End of Outputs for SubSystem: '<S85>/TapUp_ModeDeterm' */
    /* End of Outputs for SubSystem: '<S85>/TapDwn_ModeDeterm' */

    /* Outputs for Atomic SubSystem: '<S85>/Set_ModeDeterm' */
    /* Logic: '<S104>/Logical5' incorporates:
     *  Logic: '<S104>/Logical6'
     */
    tmpRead_h = !VeCCTR_b_DrOvSetReq;
    rtb_RelationalOperator4_n = !VeCCTR_b_ResSetReq;

    /* Outputs for Atomic SubSystem: '<S85>/TapUp_ModeDeterm' */
    /* Logic: '<S107>/CC_TAP_UP_MODE' incorporates:
     *  Constant: '<S109>/Calib'
     *  Logic: '<S104>/Logical5'
     *  Logic: '<S107>/Logical Operator7'
     *  Logic: '<S107>/Logical2'
     *  RelationalOperator: '<S107>/Comparison2'
     *  RelationalOperator: '<S107>/Relational Operator15'
     *  UnitDelay: '<S26>/Unit Delay3'
     *  UnitDelay: '<S79>/Unit Delay3'
     */
    VeCCTR_b_CcTapUpMode = ((((((rtb_AND_n2 && (CCTR_ac_DW.UnitDelay3_DSTATE_k <
        KeCCTR_t_CcAccelTime)) && (VeCCTR_b_CcEngaged_Prev)) &&
        (VeCCTR_b_CcEnabledPrev)) && (CCTR_ac_DW.UnitDelay3_DSTATE <
        VeCCTR_v_CcMaxSetSpd)) && rtb_AND_fs) && (((!rtb_Comparison1_d) &&
        tmpRead_h) && rtb_RelationalOperator4_n));

    /* End of Outputs for SubSystem: '<S85>/TapUp_ModeDeterm' */

    /* Outputs for Atomic SubSystem: '<S85>/TapDwn_ModeDeterm' */
    /* Logic: '<S106>/CC_TAP_DN_MODE' incorporates:
     *  Constant: '<S111>/Calib'
     *  Logic: '<S104>/Logical6'
     *  Logic: '<S106>/Logical2'
     *  RelationalOperator: '<S106>/Comparison2'
     *  UnitDelay: '<S79>/Unit Delay1'
     */
    VeCCTR_b_CcTapDnMode = ((((((rtb_AND_a && (CCTR_ac_DW.UnitDelay1_DSTATE_k <
        KeCCTR_t_CcCoastTime)) && (VeCCTR_b_CcEngaged_Prev)) &&
        (VeCCTR_b_CcEnabledPrev)) && rtb_AND_fs) && tmpRead_g) &&
                            (((!rtb_Comparison2_fe) && tmpRead_h) &&
        rtb_RelationalOperator4_n));

    /* End of Outputs for SubSystem: '<S85>/TapDwn_ModeDeterm' */
    /* End of Outputs for SubSystem: '<S85>/Set_ModeDeterm' */

    /* Outputs for Atomic SubSystem: '<S85>/Tap_ModeDeterm' */
    /* Outputs for Atomic SubSystem: '<S108>/Signal Latch On With Reset' */
    /* Logic: '<S137>/OR1' incorporates:
     *  Constant: '<S136>/Calib'
     *  Logic: '<S108>/FixPt Logical Operator'
     *  Logic: '<S108>/FixPt Logical Operator1'
     *  Logic: '<S108>/Logical Operator31'
     *  Logic: '<S137>/NOT'
     *  Logic: '<S137>/OR'
     *  RelationalOperator: '<S108>/FixPt Relational Operator1'
     *  UnitDelay: '<S137>/Unit Delay'
     */
    VeCCTR_b_CcTapMode = (((VeCCTR_b_CcTapUpMode) || (VeCCTR_b_CcTapDnMode)) ||
                          (((((rtb_TmpSignalConversionAtVePLTR_v_HomSpd >
        KeCCTR_v_CcTapEndSpdThres) && (VeCCTR_b_CcEngaged_Prev)) && rtb_OR1_i1s)
                            && rtb_AND_ge) && (VeCCTR_b_CcTapMode)));

    /* End of Outputs for SubSystem: '<S108>/Signal Latch On With Reset' */
    /* End of Outputs for SubSystem: '<S85>/Tap_ModeDeterm' */

    /* Outputs for Atomic SubSystem: '<S85>/TapDwn_ActvDeterm' */
    /* Outputs for Atomic SubSystem: '<S105>/Signal Latch On With Reset' */
    /* Logic: '<S135>/OR1' incorporates:
     *  Logic: '<S105>/FixPt Logical Operator2'
     *  Logic: '<S105>/Logical Operator33'
     *  Logic: '<S135>/NOT'
     *  Logic: '<S135>/OR'
     *  UnitDelay: '<S135>/Unit Delay'
     */
    VeCCTR_b_CcTapDnActive = ((VeCCTR_b_CcTapDnMode) || (((!VeCCTR_b_CcTapUpMode)
        && (VeCCTR_b_CcTapMode)) && (VeCCTR_b_CcTapDnActive)));

    /* End of Outputs for SubSystem: '<S105>/Signal Latch On With Reset' */
    /* End of Outputs for SubSystem: '<S85>/TapDwn_ActvDeterm' */
    /* End of Outputs for SubSystem: '<S79>/CcModeValidDeter' */

    /* Outputs for Atomic SubSystem: '<S79>/Calc_CcEnabled' */
    /* Logic: '<S82>/Logical Operator12' incorporates:
     *  Logic: '<S82>/Logical Operator13'
     */
    rtb_AND_fs = !VeCCTR_b_CcInhEnable;

    /* Outputs for Atomic SubSystem: '<S82>/Signal Latch On With Reset' */
    /* Logic: '<S90>/OR1' incorporates:
     *  Logic: '<S82>/Logical Operator11'
     *  Logic: '<S82>/Logical Operator12'
     *  Logic: '<S82>/Logical Operator13'
     *  Logic: '<S90>/NOT'
     *  Logic: '<S90>/OR'
     *  UnitDelay: '<S90>/Unit Delay'
     */
    CCTR_ac_DW.UnitDelay_DSTATE_bz = (((VeCCTR_b_CcOnMode) && rtb_AND_fs) ||
        ((rtb_AND_fs && (!VeCCTR_b_CcOffMode)) &&
         (CCTR_ac_DW.UnitDelay_DSTATE_bz)));

    /* End of Outputs for SubSystem: '<S82>/Signal Latch On With Reset' */
    /* End of Outputs for SubSystem: '<S79>/Calc_CcEnabled' */

    /* Outputs for Atomic SubSystem: '<S79>/Calc_CcEngd' */
    /* Outputs for Atomic SubSystem: '<S83>/EdgeRising' */
    /* Logic: '<S91>/OR1' incorporates:
     *  UnitDelay: '<S91>/Unit Delay'
     */
    rtb_AND_fs = !CCTR_ac_DW.UnitDelay_DSTATE_nx;

    /* Update for UnitDelay: '<S91>/Unit Delay' */
    CCTR_ac_DW.UnitDelay_DSTATE_nx = VeCCTR_b_CcResumeMode;

    /* End of Outputs for SubSystem: '<S83>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S83>/Signal Latch On With Reset' */
    /* Logic: '<S83>/Logical Operator21' incorporates:
     *  Logic: '<S83>/Logical Operator17'
     *  Logic: '<S92>/NOT'
     */
    rtb_Comparison2_fe = ((((!VeCCTR_b_CcCancelMode) && (!VeCCTR_b_CcOffMode)) &&
                           (!VeCCTR_b_CcSetSpdClearEngaged)) &&
                          (!rtb_VariantMerge_For_Variant_Source_VS_i));

    /* Outputs for Atomic SubSystem: '<S83>/EdgeRising' */
    /* Logic: '<S92>/OR1' incorporates:
     *  Logic: '<S83>/Logical Operator18'
     *  Logic: '<S83>/Logical Operator21'
     *  Logic: '<S83>/Logical Operator22'
     *  Logic: '<S91>/AND'
     *  Logic: '<S92>/OR'
     *  UnitDelay: '<S92>/Unit Delay'
     */
    CCTR_ac_DW.UnitDelay_DSTATE_ae = (((((VeCCTR_b_CcResumeMode) && rtb_AND_fs) ||
        (VeCCTR_b_CcSetEngaged)) && rtb_Comparison2_fe) || (rtb_Comparison2_fe &&
        (CCTR_ac_DW.UnitDelay_DSTATE_ae)));

    /* End of Outputs for SubSystem: '<S83>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S83>/Signal Latch On With Reset' */
    /* End of Outputs for SubSystem: '<S79>/Calc_CcEngd' */

    /* Switch: '<S84>/Switch' */
    if (CCTR_ac_B.OutportBufferForVeCCTI_b_isM182)
    {
        /* Outputs for Function Call SubSystem: '<S1>/CruiseCANState' */
        /* Switch: '<S84>/Switch' incorporates:
         *  Constant: '<S94>/Constant'
         *  Inport: '<Root>/VePLTR_e_EPBHoldSts'
         *  Inport: '<S24>/EPB_Sts'
         *  RelationalOperator: '<S84>/Comparison5'
         */
        rtb_Switch_p = (((uint32)tmpRead_q) != CePLTR_e_EPBHoldSts_REL);

        /* End of Outputs for SubSystem: '<S1>/CruiseCANState' */
    }

    /* End of Switch: '<S84>/Switch' */

    /* Logic: '<S84>/Logical1' */
    rtb_Comparison2_fe = (Logical9 && (CCTR_ac_B.OutportBufferForVeCCTI_b_isM182));

    /* Chart: '<S84>/Cruise_Control_HMI' incorporates:
     *  Constant: '<S95>/Calib'
     *  Constant: '<S96>/Calib'
     *  Inport: '<S24>/SpdLimiterOnOffSts'
     *  Inport: '<S24>/VeASLR_e_TSRClusterWarnings'
     *  Inport: '<S24>/VeBRKR_b_FunctionSts'
     *  UnitDelay: '<S84>/Unit Delay2'
     *  UnitDelay: '<S90>/Unit Delay'
     */
    /* Gateway: CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcHMIConditions/Cruise_Control_HMI */
    /* During: CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcHMIConditions/Cruise_Control_HMI */
    /* Entry Internal: CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcHMIConditions/Cruise_Control_HMI */
    /* Transition: '<S93>:3267' */
    guard1 = false;
    if (!Comparison5)
    {
        /* Transition: '<S93>:3240' */
        rtb_AND_fs = !CCTR_ac_DW.UnitDelay_DSTATE_ae;
        Comparison5 = ((!CCTR_ac_DW.UnitDelay_DSTATE_bz) && rtb_AND_fs);
        if (Comparison5 && (VeCCTR_b_CcEngaged_Prev))
        {
            /* Outputs for Function Call SubSystem: '<S1>/CruiseCANState' */
            /* Transition: '<S93>:3271' */
            if ((rtb_UnitDelay5_o || (((sint32)VeCCTR_e_Lv1CrusCANStateTemp) ==
                                      4)) || (((sint32)
                    VeCCTR_e_Lv1CrusCANStateTemp) == 6))
            {
                /* Transition: '<S93>:3272' */
                /* Transition: '<S93>:3253' */
                CCTR_ac_DW.CC_ECM_WARN_Temp = 18.0F;

                /* Transition: '<S93>:3225' */
            }
            else
            {
                /* Transition: '<S93>:3175' */
            }

            /* Transition: '<S93>:3280' */
            if (rtb_UnitDelay5_o &&
                    Rte_Prm_KeASLR_b_ASLInstantActivationEnable_KeASLR_b_ASLInstantActivationEnable
                    ())
            {
                /* Transition: '<S93>:3282' */
                /* Transition: '<S93>:3223' */
                CCTR_ac_DW.CC_ECM_WARN_Temp = 12.0F;

                /* Transition: '<S93>:3213' */
            }
            else
            {
                /* Transition: '<S93>:3279' */
            }

            /* Transition: '<S93>:3209' */
            if (rtb_OR1_fz)
            {
                /* Transition: '<S93>:3286' */
                /* Transition: '<S93>:3317' */
                CCTR_ac_DW.CC_ECM_WARN_Temp = 15.0F;

                /* Transition: '<S93>:3247' */
            }
            else
            {
                /* Transition: '<S93>:3164' */
            }

            /* End of Outputs for SubSystem: '<S1>/CruiseCANState' */
            /* Transition: '<S93>:3159' */
            if ((VeCCTR_b_FaultActive) || rtb_Comparison2_fe)
            {
                /* Transition: '<S93>:3285' */
                /* Transition: '<S93>:3357' */
                CCTR_ac_DW.CC_ECM_WARN_Temp = 11.0F;

                /* Transition: '<S93>:3169' */
            }
            else
            {
                /* Transition: '<S93>:3289' */
            }

            /* Transition: '<S93>:3258' */
            /* Transition: '<S93>:3372' */
        }
        else
        {
            /* Transition: '<S93>:3186' */
            if (((CCTR_ac_DW.UnitDelay_DSTATE_bz) && rtb_AND_fs) &&
                    (rtb_VariantMerge_For_Variant_Source_VS_i ||
                     (VeCCTR_b_CcEngaged_Prev)))
            {
                /* Transition: '<S93>:3235' */
                if (VeCCTR_b_CcEngaged_Prev)
                {
                    /* Transition: '<S93>:3155' */
                    if ((((sint32)VeCCTR_e_Lv1CrusCANStateTemp) == 2) ||
                            (VeCCTI_b_BrkPdlSts))
                    {
                        /* Transition: '<S93>:3278' */
                        /* Transition: '<S93>:3168' */
                        CCTR_ac_DW.CC_ECM_WARN_Temp = 17.0F;

                        /* Transition: '<S93>:3333' */
                    }
                    else
                    {
                        /* Transition: '<S93>:3128' */
                    }

                    /* Transition: '<S93>:3257' */
                    if (rtb_VariantMerge_For_Variant_Source_VS3)
                    {
                        /* Transition: '<S93>:3284' */
                        /* Transition: '<S93>:3205' */
                        CCTR_ac_DW.CC_ECM_WARN_Temp = 7.0F;

                        /* Transition: '<S93>:3416' */
                    }
                    else
                    {
                        /* Transition: '<S93>:3187' */
                    }

                    /* Transition: '<S93>:3261' */
                    if (VeCCTR_b_CcESCEventDetec)
                    {
                        /* Transition: '<S93>:3216' */
                        /* Transition: '<S93>:3153' */
                        CCTR_ac_DW.CC_ECM_WARN_Temp = 9.0F;

                        /* Transition: '<S93>:3413' */
                    }
                    else
                    {
                        /* Transition: '<S93>:3281' */
                    }

                    /* Transition: '<S93>:3319' */
                    if (rtb_Switch_p)
                    {
                        /* Transition: '<S93>:3287' */
                        /* Transition: '<S93>:3316' */
                        CCTR_ac_DW.CC_ECM_WARN_Temp = 8.0F;

                        /* Transition: '<S93>:3309' */
                    }
                    else
                    {
                        /* Transition: '<S93>:3198' */
                    }

                    /* Transition: '<S93>:3124' */
                    if (rtb_VariantMerge_For_Variant_Source_VS4)
                    {
                        /* Transition: '<S93>:3306' */
                        /* Transition: '<S93>:3127' */
                        CCTR_ac_DW.CC_ECM_WARN_Temp = 11.0F;

                        /* Transition: '<S93>:3283' */
                    }
                    else
                    {
                        /* Transition: '<S93>:3393' */
                    }

                    /* Transition: '<S93>:3193' */
                }
                else
                {
                    /* Transition: '<S93>:3218' */
                    /* Transition: '<S93>:3300' */
                }

                if (((VeCCTR_v_VehSpdBiasRound > VeCCTR_v_CcMaxSpd) &&
                        ((((sint32)VeCCTR_e_Lv1CrusCANStateTemp) == 3) ||
                         (((sint32)VeCCTR_e_Lv1CrusCANStateTemp) == 7))) &&
                        (CCTR_ac_B.OutportBufferForVeCCTI_b_isM182))
                {
                    /* Transition: '<S93>:3498' */
                    /* Transition: '<S93>:3499' */
                    CCTR_ac_DW.CC_ECM_WARN_Temp = 28.0F;

                    /* Transition: '<S93>:3500' */
                }
                else
                {
                    /* Transition: '<S93>:3507' */
                }

                /* Transition: '<S93>:3508' */
                if (((VeCCTR_v_VehSpdBiasRound < VeCCTR_v_CcMinSpd) &&
                        ((((sint32)VeCCTR_e_Lv1CrusCANStateTemp) == 3) ||
                         (((sint32)VeCCTR_e_Lv1CrusCANStateTemp) == 7))) ||
                        ((VeCCTR_v_VehSpdBiasRound < VeCCTR_v_CcMinSpdRes) &&
                         (((sint32)VeCCTR_e_Lv1CrusCANStateTemp) == 5)))
                {
                    /* Transition: '<S93>:3297' */
                    /* Transition: '<S93>:3301' */
                    CCTR_ac_DW.CC_ECM_WARN_Temp = 14.0F;

                    /* Transition: '<S93>:3134' */
                }
                else
                {
                    /* Transition: '<S93>:3182' */
                }

                /* Transition: '<S93>:3409' */
                if (rtb_VariantMerge_For_Variant_Source_VS3 && (((((sint32)
                        VeCCTR_e_Lv1CrusCANStateTemp) == 3) || (((sint32)
                        VeCCTR_e_Lv1CrusCANStateTemp) == 7)) || (((sint32)
                        VeCCTR_e_Lv1CrusCANStateTemp) == 5)))
                {
                    /* Transition: '<S93>:3338' */
                    /* Transition: '<S93>:3350' */
                    CCTR_ac_DW.CC_ECM_WARN_Temp = 1.0F;

                    /* Transition: '<S93>:3395' */
                }
                else
                {
                    /* Transition: '<S93>:3328' */
                }

                /* Transition: '<S93>:3148' */
                if ((VeCCTR_b_CcESCEventDetec) && (((((sint32)
                        VeCCTR_e_Lv1CrusCANStateTemp) == 3) || (((sint32)
                        VeCCTR_e_Lv1CrusCANStateTemp) == 7)) || (((sint32)
                        VeCCTR_e_Lv1CrusCANStateTemp) == 5)))
                {
                    /* Transition: '<S93>:3332' */
                    /* Transition: '<S93>:3202' */
                    CCTR_ac_DW.CC_ECM_WARN_Temp = 3.0F;

                    /* Transition: '<S93>:3203' */
                }
                else
                {
                    /* Transition: '<S93>:3340' */
                }

                /* Transition: '<S93>:3331' */
                if (rtb_Switch_p && (((((sint32)VeCCTR_e_Lv1CrusCANStateTemp) ==
                                       3) || (((sint32)
                        VeCCTR_e_Lv1CrusCANStateTemp) == 7)) || (((sint32)
                        VeCCTR_e_Lv1CrusCANStateTemp) == 5)))
                {
                    /* Transition: '<S93>:3136' */
                    /* Transition: '<S93>:3341' */
                    CCTR_ac_DW.CC_ECM_WARN_Temp = 2.0F;

                    /* Transition: '<S93>:3302' */
                }
                else
                {
                    /* Transition: '<S93>:3380' */
                }

                /* Transition: '<S93>:3358' */
                if (rtb_VariantMerge_For_Variant_Source_VS4 && ((((((sint32)
                         VeCCTR_e_Lv1CrusCANStateTemp) == 3) || (((sint32)
                         VeCCTR_e_Lv1CrusCANStateTemp) == 4)) || (((sint32)
                        VeCCTR_e_Lv1CrusCANStateTemp) == 5)) || (((sint32)
                        VeCCTR_e_Lv1CrusCANStateTemp) == 7)))
                {
                    /* Transition: '<S93>:3376' */
                    /* Transition: '<S93>:3365' */
                    CCTR_ac_DW.CC_ECM_WARN_Temp = 5.0F;

                    /* Transition: '<S93>:3192' */
                }
                else
                {
                    /* Transition: '<S93>:3217' */
                }

                /* Transition: '<S93>:3352' */
            }
            else
            {
                /* Transition: '<S93>:3122' */
                if (Comparison5 && (((VeCCTR_b_CcInhEnable) ||
                                     (VeCCTR_b_CcEnabledPrev)) ||
                                    rtb_TmpSignalConversionAtVeASLR_b_ASLEna))
                {
                    /* Transition: '<S93>:3221' */
                    if (VeCCTR_b_CcEnabledPrev)
                    {
                        /* Outputs for Function Call SubSystem: '<S1>/CruiseCANState' */
                        /* Transition: '<S93>:3151' */
                        if ((rtb_UnitDelay5_o || (((sint32)
                                                   VeCCTR_e_Lv1CrusCANStateTemp)
                              == 4)) || (((sint32)VeCCTR_e_Lv1CrusCANStateTemp) ==
                                         6))
                        {
                            /* Transition: '<S93>:3256' */
                            /* Transition: '<S93>:3326' */
                            CCTR_ac_DW.CC_ECM_WARN_Temp = 18.0F;

                            /* Transition: '<S93>:3276' */
                        }
                        else
                        {
                            /* Transition: '<S93>:3394' */
                        }

                        /* Transition: '<S93>:3313' */
                        if (rtb_UnitDelay5_o &&
                                Rte_Prm_KeASLR_b_ASLInstantActivationEnable_KeASLR_b_ASLInstantActivationEnable
                                ())
                        {
                            /* Transition: '<S93>:3206' */
                            /* Transition: '<S93>:3310' */
                            CCTR_ac_DW.CC_ECM_WARN_Temp = 12.0F;

                            /* Transition: '<S93>:3320' */
                        }
                        else
                        {
                            /* Transition: '<S93>:3324' */
                        }

                        /* Transition: '<S93>:3408' */
                        if (rtb_OR1_fz)
                        {
                            /* Transition: '<S93>:3157' */
                            /* Transition: '<S93>:3315' */
                            CCTR_ac_DW.CC_ECM_WARN_Temp = 15.0F;

                            /* Transition: '<S93>:3325' */
                        }
                        else
                        {
                            /* Transition: '<S93>:3146' */
                        }

                        /* End of Outputs for SubSystem: '<S1>/CruiseCANState' */
                        /* Transition: '<S93>:3361' */
                        if ((VeCCTR_b_FaultActive) || rtb_Comparison2_fe)
                        {
                            /* Transition: '<S93>:3480' */
                            /* Transition: '<S93>:3482' */
                            CCTR_ac_DW.CC_ECM_WARN_Temp = 11.0F;

                            /* Transition: '<S93>:3476' */
                        }
                        else
                        {
                            /* Transition: '<S93>:3483' */
                        }

                        /* Transition: '<S93>:3484' */
                    }
                    else
                    {
                        /* Transition: '<S93>:3298' */
                        /* Transition: '<S93>:3188' */
                    }

                    /* Outputs for Function Call SubSystem: '<S1>/CruiseCANState' */
                    if (rtb_OR1_fz && ((((sint32)VeCCTR_e_Lv1CrusCANStateTemp) ==
                                        4) || (((sint32)
                                                VeCCTR_e_Lv1CrusCANStateTemp) ==
                          6)))
                    {
                        /* Transition: '<S93>:3292' */
                        /* Transition: '<S93>:3293' */
                        CCTR_ac_DW.CC_ECM_WARN_Temp = 16.0F;

                        /* Transition: '<S93>:3303' */
                    }
                    else
                    {
                        /* Transition: '<S93>:3296' */
                    }

                    /* End of Outputs for SubSystem: '<S1>/CruiseCANState' */
                    /* Transition: '<S93>:3312' */
                    if ((rtb_Logical_n || Logical13) && ((((sint32)
                            VeCCTR_e_Lv1CrusCANStateTemp) == 4) || (((sint32)
                            VeCCTR_e_Lv1CrusCANStateTemp) == 6)))
                    {
                        /* Transition: '<S93>:3487' */
                        /* Transition: '<S93>:3488' */
                        CCTR_ac_DW.CC_ECM_WARN_Temp = 24.0F;

                        /* Transition: '<S93>:3490' */
                    }
                    else
                    {
                        /* Transition: '<S93>:3496' */
                    }

                    /* Transition: '<S93>:3497' */
                    if (rtb_TmpSignalConversionAtVeASLR_b_ASLEna)
                    {
                        /* Transition: '<S93>:3329' */
                        /* Transition: '<S93>:3288' */
                        CCTR_ac_DW.CC_ECM_WARN_Temp = 13.0F;

                        /* Transition: '<S93>:3327' */
                    }
                    else
                    {
                        /* Transition: '<S93>:3263' */
                    }

                    /* Transition: '<S93>:3335' */
                    if (((VeCCTR_b_FaultActive) || rtb_Comparison2_fe) &&
                            ((((sint32)VeCCTR_e_Lv1CrusCANStateTemp) == 4) ||
                             (((sint32)VeCCTR_e_Lv1CrusCANStateTemp) == 6)))
                    {
                        /* Transition: '<S93>:3336' */
                        /* Transition: '<S93>:3330' */
                        CCTR_ac_DW.CC_ECM_WARN_Temp = 5.0F;

                        /* Transition: '<S93>:3343' */
                    }
                    else
                    {
                        /* Transition: '<S93>:3410' */
                    }

                    /* Transition: '<S93>:3349' */
                }
                else
                {
                    /* Transition: '<S93>:3418' */
                    guard1 = true;
                }
            }
        }
    }
    else
    {
        /* Transition: '<S93>:3277' */
        /* Transition: '<S93>:3407' */
        guard1 = true;
    }

    if (guard1)
    {
        /* Outputs for Function Call SubSystem: '<S1>/CruiseCANState' */
        if (((sint32)tmpRead_d) == 6)
        {
            /* Transition: '<S93>:3462' */
            /* Transition: '<S93>:3458' */
            CCTR_ac_DW.CC_ECM_WARN_Temp = 6.0F;

            /* Transition: '<S93>:3457' */
        }
        else
        {
            /* Transition: '<S93>:3463' */
        }

        /* Transition: '<S93>:3464' */
        if (((sint32)tmpRead_d) == 25)
        {
            /* Transition: '<S93>:3226' */
            /* Transition: '<S93>:3307' */
            CCTR_ac_DW.CC_ECM_WARN_Temp = 25.0F;

            /* Transition: '<S93>:3266' */
        }
        else
        {
            /* Transition: '<S93>:3179' */
        }

        /* Transition: '<S93>:3290' */
        if (((sint32)tmpRead_d) == 26)
        {
            /* Transition: '<S93>:3268' */
            /* Transition: '<S93>:3322' */
            CCTR_ac_DW.CC_ECM_WARN_Temp = 26.0F;

            /* Transition: '<S93>:3172' */
        }
        else
        {
            /* Transition: '<S93>:3321' */
        }

        /* Transition: '<S93>:3304' */
        if (((sint32)tmpRead_d) == 27)
        {
            /* Transition: '<S93>:3130' */
            /* Transition: '<S93>:3318' */
            CCTR_ac_DW.CC_ECM_WARN_Temp = 27.0F;

            /* Transition: '<S93>:3291' */
        }
        else
        {
            /* Transition: '<S93>:3199' */
        }

        /* End of Outputs for SubSystem: '<S1>/CruiseCANState' */
        /* Transition: '<S93>:3311' */
    }

    /* Transition: '<S93>:3345' */
    if ((CCTR_ac_DW.CC_ECM_WARN_Temp == CCTR_ac_DW.UnitDelay2_DSTATE_j) &&
            (CCTR_ac_DW.CC_ECM_WARN_Temp > 0.0F))
    {
        /* Transition: '<S93>:3204' */
        /* Transition: '<S93>:3133' */
        CCTR_ac_DW.CC_ECM_WARN_TMR = (float32)((float64)(((float64)
            CCTR_ac_DW.CC_ECM_WARN_TMR) + 0.0125));

        /* Transition: '<S93>:3344' */
    }
    else
    {
        /* Transition: '<S93>:3414' */
        CCTR_ac_DW.CC_ECM_WARN_TMR = 0.0F;
    }

    /* Transition: '<S93>:3244' */
    if (CCTR_ac_DW.CC_ECM_WARN_TMR >= KeCCTR_t_EcmWarnTmrLmt)
    {
        /* Transition: '<S93>:3346' */
        /* Transition: '<S93>:3364' */
        CCTR_ac_DW.CC_ECM_WARN_Temp = 0.0F;
        CCTR_ac_DW.UnitDelay2_DSTATE_j = 0.0F;

        /* Transition: '<S93>:3129' */
    }
    else
    {
        /* Transition: '<S93>:3154' */
        CCTR_ac_DW.UnitDelay2_DSTATE_j = CCTR_ac_DW.CC_ECM_WARN_Temp;
    }

    /* End of Chart: '<S84>/Cruise_Control_HMI' */

    /* Outputs for Atomic SubSystem: '<S26>/CC_Set_Point' */
    /* Outputs for Atomic SubSystem: '<S80>/Set_Speed' */
    /* Outputs for Atomic SubSystem: '<S79>/Switch_Timers' */
    /* Logic: '<S158>/Logical1' incorporates:
     *  Logic: '<S172>/Logical Operator9'
     */
    /* Transition: '<S93>:3342' */
    rtb_AND_fs = ((VeCCTR_b_CcCoastMode) || (VeCCTR_b_CcAccelMode));

    /* End of Outputs for SubSystem: '<S80>/Set_Speed' */
    /* End of Outputs for SubSystem: '<S26>/CC_Set_Point' */

    /* Switch: '<S158>/FixPt Switch2' incorporates:
     *  Logic: '<S158>/Logical'
     *  Logic: '<S158>/Logical1'
     *  Logic: '<S158>/Logical2'
     *  UnitDelay: '<S158>/Unit Delay2'
     */
    if (rtb_AND_fs && (!VeCCTR_b_CcUnitIncDecTggr))
    {
        /* Switch: '<S158>/FixPt Switch2' incorporates:
         *  Sum: '<S158>/Sum1'
         *  UnitDelay: '<S158>/Unit Delay1'
         */
        VeCCTR_t_CcUnitIncDecTmr = CCTR_ac_B.OutportBufferForVeCCTR_t_CCTR_dT +
            VeCCTR_t_CcUnitIncDecTmr;
    }
    else
    {
        /* Switch: '<S158>/FixPt Switch2' incorporates:
         *  Constant: '<S158>/Constant1'
         */
        VeCCTR_t_CcUnitIncDecTmr = 0.0F;
    }

    /* End of Switch: '<S158>/FixPt Switch2' */

    /* RelationalOperator: '<S158>/Comparison1' incorporates:
     *  Constant: '<S165>/Calib'
     */
    VeCCTR_b_CcUnitIncDecTggr = (VeCCTR_t_CcUnitIncDecTmr >=
        KeCCTR_t_CcUnitIncDecTmrLmt);

    /* Outputs for Atomic SubSystem: '<S88>/AccelSwtchTmr' */
    /* Switch: '<S159>/Switch' incorporates:
     *  Logic: '<S159>/Logical Operator10'
     *  Logic: '<S159>/Logical Operator15'
     *  UnitDelay: '<S159>/Unit Delay3'
     */
    if ((((VeCCTR_b_AccelFlg) && (!CCTR_ac_DW.UnitDelay3_DSTATE_c)) &&
            (VeCCTR_b_CcEnabledPrev)) && (VeCCTR_b_CcEngaged_Prev))
    {
        /* Switch: '<S159>/Switch' incorporates:
         *  Sum: '<S159>/Sum'
         *  UnitDelay: '<S159>/Unit Delay'
         */
        VeCCTR_t_CcSwAccelTmr = VeCCTR_t_CcSwAccelTmr +
            CCTR_ac_B.OutportBufferForVeCCTR_t_CCTR_dT;
    }
    else
    {
        /* Switch: '<S159>/Switch' incorporates:
         *  Constant: '<S159>/Constant3'
         */
        VeCCTR_t_CcSwAccelTmr = 0.0F;
    }

    /* End of Switch: '<S159>/Switch' */

    /* Update for UnitDelay: '<S159>/Unit Delay3' */
    CCTR_ac_DW.UnitDelay3_DSTATE_c = VeCCTR_b_CcResAccTmrLockout;

    /* End of Outputs for SubSystem: '<S88>/AccelSwtchTmr' */

    /* Outputs for Atomic SubSystem: '<S88>/BrakeSwtchTmr' */
    /* Switch: '<S160>/Switch' */
    if (VeCCTI_b_BrkPdlSts)
    {
        /* Switch: '<S160>/Switch' incorporates:
         *  Sum: '<S160>/Sum'
         *  UnitDelay: '<S160>/Unit Delay'
         */
        VeCCTR_t_CcSwBrakeTmr = VeCCTR_t_CcSwBrakeTmr +
            CCTR_ac_B.OutportBufferForVeCCTR_t_CCTR_dT;
    }
    else
    {
        /* Switch: '<S160>/Switch' incorporates:
         *  Constant: '<S160>/Constant2'
         */
        VeCCTR_t_CcSwBrakeTmr = 0.0F;
    }

    /* End of Switch: '<S160>/Switch' */
    /* End of Outputs for SubSystem: '<S88>/BrakeSwtchTmr' */

    /* Outputs for Atomic SubSystem: '<S88>/CancelSwtchTmr' */
    /* Switch: '<S161>/Switch' */
    if (rtb_RelationalOperator_f)
    {
        /* Switch: '<S161>/Switch' incorporates:
         *  Sum: '<S161>/Sum'
         *  UnitDelay: '<S161>/Unit Delay'
         */
        VeCCTR_t_CcSwCancelTmr = VeCCTR_t_CcSwCancelTmr +
            CCTR_ac_B.OutportBufferForVeCCTR_t_CCTR_dT;
    }
    else
    {
        /* Switch: '<S161>/Switch' incorporates:
         *  Constant: '<S161>/Constant2'
         */
        VeCCTR_t_CcSwCancelTmr = 0.0F;
    }

    /* End of Switch: '<S161>/Switch' */
    /* End of Outputs for SubSystem: '<S88>/CancelSwtchTmr' */

    /* Outputs for Atomic SubSystem: '<S88>/CoastTmr' */
    /* Switch: '<S162>/Switch' incorporates:
     *  Logic: '<S162>/Logical Operator6'
     */
    if (((VeCCTR_b_CoastFlag) && (VeCCTR_b_CcEngaged_Prev)) &&
            (VeCCTR_b_CcEnabledPrev))
    {
        /* Switch: '<S162>/Switch' incorporates:
         *  Sum: '<S162>/Sum'
         *  UnitDelay: '<S162>/Unit Delay'
         */
        VeCCTR_t_CcCoastTmr = VeCCTR_t_CcCoastTmr +
            CCTR_ac_B.OutportBufferForVeCCTR_t_CCTR_dT;
    }
    else
    {
        /* Switch: '<S162>/Switch' incorporates:
         *  Constant: '<S162>/Constant3'
         */
        VeCCTR_t_CcCoastTmr = 0.0F;
    }

    /* End of Switch: '<S162>/Switch' */

    /* Switch: '<S162>/Switch1' */
    if (VeCCTR_b_CoastFlag)
    {
        /* Switch: '<S162>/Switch1' incorporates:
         *  Sum: '<S162>/Sum1'
         *  UnitDelay: '<S162>/Unit Delay1'
         */
        VeCCTR_t_CcSwCoastTmr = VeCCTR_t_CcSwCoastTmr +
            CCTR_ac_B.OutportBufferForVeCCTR_t_CCTR_dT;
    }
    else
    {
        /* Switch: '<S162>/Switch1' incorporates:
         *  Constant: '<S162>/Constant1'
         */
        VeCCTR_t_CcSwCoastTmr = 0.0F;
    }

    /* End of Switch: '<S162>/Switch1' */
    /* End of Outputs for SubSystem: '<S88>/CoastTmr' */

    /* Outputs for Atomic SubSystem: '<S88>/OnOffSwtchTmr' */
    /* Switch: '<S163>/Switch' */
    if (rtb_RelationalOperator2_b)
    {
        /* Switch: '<S163>/Switch' incorporates:
         *  Sum: '<S163>/Sum'
         *  UnitDelay: '<S163>/Unit Delay'
         */
        VeCCTR_t_CcSwOnOffTmr = VeCCTR_t_CcSwOnOffTmr +
            CCTR_ac_B.OutportBufferForVeCCTR_t_CCTR_dT;
    }
    else
    {
        /* Switch: '<S163>/Switch' incorporates:
         *  Constant: '<S163>/Constant2'
         */
        VeCCTR_t_CcSwOnOffTmr = 0.0F;
    }

    /* End of Switch: '<S163>/Switch' */
    /* End of Outputs for SubSystem: '<S88>/OnOffSwtchTmr' */

    /* Outputs for Atomic SubSystem: '<S88>/PN_SwtchTmr' */
    /* Switch: '<S164>/Switch' incorporates:
     *  Constant: '<S166>/Constant'
     *  Constant: '<S167>/Constant'
     *  Logic: '<S164>/Logical Operator1'
     *  RelationalOperator: '<S164>/Comparison1'
     *  RelationalOperator: '<S164>/Comparison2'
     */
    if ((CeTRGR_e_TransRangePark == ((uint32)tmpRead_1)) || (((uint32)tmpRead_1)
         == CeTRGR_e_TransRangeNeutral))
    {
        /* Switch: '<S164>/Switch' incorporates:
         *  Sum: '<S164>/Sum'
         *  UnitDelay: '<S164>/Unit Delay'
         */
        VeCCTR_t_CcSwPNTmr = VeCCTR_t_CcSwPNTmr +
            CCTR_ac_B.OutportBufferForVeCCTR_t_CCTR_dT;
    }
    else
    {
        /* Switch: '<S164>/Switch' incorporates:
         *  Constant: '<S164>/Constant2'
         */
        VeCCTR_t_CcSwPNTmr = 0.0F;
    }

    /* End of Switch: '<S164>/Switch' */
    /* End of Outputs for SubSystem: '<S88>/PN_SwtchTmr' */
    /* End of Outputs for SubSystem: '<S79>/Switch_Timers' */

    /* UnitDelay: '<S79>/Unit Delay5' */
    rtb_UnitDelay5_o = CCTR_ac_DW.UnitDelay5_DSTATE_c;

    /* Update for UnitDelay: '<S79>/Unit Delay4' */
    CCTR_ac_DW.UnitDelay4_DSTATE_n = CCTR_ac_DW.UnitDelay_DSTATE_ae;

    /* Update for UnitDelay: '<S79>/Unit Delay1' */
    CCTR_ac_DW.UnitDelay1_DSTATE_k = VeCCTR_t_CcCoastTmr;

    /* Update for UnitDelay: '<S79>/FixPt Unit Delay1' incorporates:
     *  UnitDelay: '<S90>/Unit Delay'
     */
    CCTR_ac_DW.FixPtUnitDelay1_DSTATE_m = CCTR_ac_DW.UnitDelay_DSTATE_bz;

    /* Update for UnitDelay: '<S79>/Unit Delay3' */
    CCTR_ac_DW.UnitDelay3_DSTATE_k = VeCCTR_t_CcSwAccelTmr;

    /* Update for UnitDelay: '<S79>/Unit Delay5' */
    CCTR_ac_DW.UnitDelay5_DSTATE_c = VeCCTR_b_CcUnitIncDecTggr;

    /* End of Outputs for SubSystem: '<S26>/CC_EnabLogic' */

    /* Outputs for Atomic SubSystem: '<S26>/CC_Set_Point' */
    /* Outputs for Atomic SubSystem: '<S80>/Set_Speed' */
    /* Outputs for Atomic SubSystem: '<S172>/EdgeRising2' */
    /* Logic: '<S215>/OR1' incorporates:
     *  UnitDelay: '<S215>/Unit Delay'
     */
    rtb_OR1_fz = !CCTR_ac_DW.UnitDelay_DSTATE_f;

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CruiseCANState'
     */
    /* Update for UnitDelay: '<S215>/Unit Delay' incorporates:
     *  Inport: '<S24>/SpeedUnit'
     */
    CCTR_ac_DW.UnitDelay_DSTATE_f = tmpRead_c;

    /* Switch: '<S172>/Switch14' incorporates:
     *  Inport: '<S24>/SpeedUnit'
     *  Logic: '<S215>/AND'
     */
    if (tmpRead_c && rtb_OR1_fz)
    {
        /* Product: '<S172>/Product2' incorporates:
         *  Constant: '<S172>/Constant Value5'
         *  UnitDelay: '<S172>/Unit Delay4'
         */
        VeCCTR_v_SetSpdBiased = VeCCTR_v_SetSpdBiased * 0.621359229F;

        /* Outputs for Atomic SubSystem: '<S172>/Limiter1' */
        /* Switch: '<S226>/Switch1' incorporates:
         *  RelationalOperator: '<S226>/Relational Operator'
         */
        if (VeCCTR_v_CcMaxSetSpd < VeCCTR_v_SetSpdBiased)
        {
            /* Switch: '<S226>/Switch1' */
            VeCCTR_v_SetSpdBiased = VeCCTR_v_CcMaxSetSpd;
        }

        /* End of Switch: '<S226>/Switch1' */

        /* Switch: '<S226>/Switch' incorporates:
         *  RelationalOperator: '<S226>/Relational Operator1'
         */
        if (VeCCTR_v_SetSpdBiased <= VeCCTR_v_CcMinSetSpd)
        {
            /* Switch: '<S172>/Switch14' */
            VeCCTR_v_SetSpdBiased = VeCCTR_v_CcMinSetSpd;
        }

        /* End of Switch: '<S226>/Switch' */
        /* End of Outputs for SubSystem: '<S172>/Limiter1' */
    }

    /* End of Switch: '<S172>/Switch14' */
    /* End of Outputs for SubSystem: '<S172>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S172>/EdgeFalling2' */
    /* Logic: '<S212>/AND' incorporates:
     *  Inport: '<S24>/SpeedUnit'
     *  Logic: '<S212>/OR1'
     *  UnitDelay: '<S212>/Unit Delay'
     */
    rtb_OR1_fz = ((!tmpRead_c) && (CCTR_ac_DW.UnitDelay_DSTATE_h));

    /* Update for UnitDelay: '<S212>/Unit Delay' incorporates:
     *  Inport: '<S24>/SpeedUnit'
     */
    CCTR_ac_DW.UnitDelay_DSTATE_h = tmpRead_c;

    /* End of Outputs for SubSystem: '<S172>/EdgeFalling2' */

    /* Switch: '<S172>/Switch13' */
    if (rtb_OR1_fz)
    {
        /* Product: '<S172>/Product4' incorporates:
         *  Constant: '<S172>/Constant Value6'
         */
        rtb_TmpSignalConversionAtVePLTR_v_HomSpd = VeCCTR_v_SetSpdBiased *
            1.609375F;

        /* Outputs for Atomic SubSystem: '<S172>/Limiter' */
        /* Switch: '<S225>/Switch1' incorporates:
         *  RelationalOperator: '<S225>/Relational Operator'
         */
        if (VeCCTR_v_CcMaxSetSpd < rtb_TmpSignalConversionAtVePLTR_v_HomSpd)
        {
            /* Switch: '<S225>/Switch1' */
            rtb_TmpSignalConversionAtVePLTR_v_HomSpd = VeCCTR_v_CcMaxSetSpd;
        }

        /* End of Switch: '<S225>/Switch1' */

        /* Switch: '<S225>/Switch' incorporates:
         *  RelationalOperator: '<S225>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVePLTR_v_HomSpd <= VeCCTR_v_CcMinSetSpd)
        {
            /* Switch: '<S243>/Switch2' */
            rtb_TmpSignalConversionAtVePLTR_v_HomSpd = VeCCTR_v_CcMinSetSpd;
        }

        /* End of Switch: '<S225>/Switch' */
        /* End of Outputs for SubSystem: '<S172>/Limiter' */
    }
    else
    {
        /* Switch: '<S243>/Switch2' */
        rtb_TmpSignalConversionAtVePLTR_v_HomSpd = VeCCTR_v_SetSpdBiased;
    }

    /* End of Switch: '<S172>/Switch13' */

    /* Rounding: '<S172>/Rounding2' */
    VeCCTR_v_SetSpdTemp = roundf(rtb_TmpSignalConversionAtVePLTR_v_HomSpd);

    /* Outputs for Atomic SubSystem: '<S172>/EdgeFalling1' */
    /* Logic: '<S211>/AND' incorporates:
     *  UnitDelay: '<S211>/Unit Delay'
     */
    rtb_Switch_p = (rtb_AND_ge && (CCTR_ac_DW.UnitDelay_DSTATE_c));

    /* Update for UnitDelay: '<S211>/Unit Delay' */
    CCTR_ac_DW.UnitDelay_DSTATE_c = VeCCTR_b_CcCoastMode;

    /* End of Outputs for SubSystem: '<S172>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S172>/EdgeFalling' */
    /* Logic: '<S210>/AND' incorporates:
     *  UnitDelay: '<S210>/Unit Delay'
     */
    rtb_VariantMerge_For_Variant_Source_VS3 = (rtb_OR1_i1s &&
        (CCTR_ac_DW.UnitDelay_DSTATE_jn));

    /* Update for UnitDelay: '<S210>/Unit Delay' */
    CCTR_ac_DW.UnitDelay_DSTATE_jn = VeCCTR_b_CcAccelMode;

    /* End of Outputs for SubSystem: '<S172>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S172>/EdgeRising1' */
    /* Logic: '<S214>/AND' incorporates:
     *  Logic: '<S214>/OR1'
     *  UnitDelay: '<S214>/Unit Delay'
     */
    rtb_VariantMerge_For_Variant_Source_VS4 = ((VeCCTR_b_CcAccelMode) &&
        (!CCTR_ac_DW.UnitDelay_DSTATE_ls));

    /* Update for UnitDelay: '<S214>/Unit Delay' */
    CCTR_ac_DW.UnitDelay_DSTATE_ls = VeCCTR_b_CcAccelMode;

    /* End of Outputs for SubSystem: '<S172>/EdgeRising1' */

    /* Logic: '<S172>/CC_SET_ENGAGED' incorporates:
     *  Logic: '<S172>/Logical Operator15'
     *  RelationalOperator: '<S172>/Relational Operator'
     *  RelationalOperator: '<S172>/Relational Operator2'
     */
    VeCCTR_b_CcSetEngaged = (((((rtb_VariantMerge_For_Variant_Source_VS3 ||
        rtb_VariantMerge_For_Variant_Source_VS4) || (VeCCTR_b_CcSetMode)) ||
        rtb_Switch_p) && (VeCCTR_v_VehSpdBiasRound >= VeCCTR_v_CcMinSetSpd)) &&
        (VeCCTR_v_VehSpdBiasRound <= VeCCTR_v_CcMaxSetSpd));

    /* Logic: '<S172>/CC_SETSPD_CLEAR_ENGAGED' incorporates:
     *  Logic: '<S172>/disable engaged inhibit set (from coast)'
     *  RelationalOperator: '<S172>/Relational Operator1'
     */
    VeCCTR_b_CcSetSpdClearEngaged = (((VeCCTR_b_CcInhEnable) ||
        (VeCCTR_b_CcOffMode)) || ((VeCCTR_v_VehSpdBiasRound <
        VeCCTR_v_CcMinSetSpd) && rtb_Switch_p));

    /* Outputs for Atomic SubSystem: '<S172>/EdgeRising3' */
    /* Logic: '<S216>/AND' incorporates:
     *  Logic: '<S216>/OR1'
     *  UnitDelay: '<S216>/Unit Delay'
     */
    rtb_OR1_fz = ((VeCCTR_b_CcCoastMode) && (!CCTR_ac_DW.UnitDelay_DSTATE_kk));

    /* Update for UnitDelay: '<S216>/Unit Delay' */
    CCTR_ac_DW.UnitDelay_DSTATE_kk = VeCCTR_b_CcCoastMode;

    /* End of Outputs for SubSystem: '<S172>/EdgeRising3' */

    /* Switch: '<S172>/Switch' incorporates:
     *  Constant: '<S224>/Calib'
     *  Logic: '<S172>/Logical Operator5'
     *  Logic: '<S172>/Logical3'
     *  Logic: '<S172>/Logical4'
     *  RelationalOperator: '<S172>/Comparison6'
     *  RelationalOperator: '<S172>/Comparison7'
     *  Sum: '<S172>/Sum4'
     *  Switch: '<S172>/Switch20'
     *  Switch: '<S172>/Switch6'
     *  Switch: '<S172>/Switch7'
     */
    if (VeCCTR_b_CcSetEngaged)
    {
        /* Switch: '<S172>/Switch1' incorporates:
         *  Logic: '<S172>/Logical Operator1'
         *  Logic: '<S172>/Logical Operator8'
         *  Switch: '<S172>/Switch11'
         *  Switch: '<S172>/Switch16'
         *  Switch: '<S172>/Switch9'
         */
        if (rtb_Switch_p)
        {
            /* Switch: '<S172>/Switch5' */
            if (CCTR_ac_B.OutportBufferForCC_5Unit_AccelDecel_Enab)
            {
                /* Switch: '<S172>/Switch' incorporates:
                 *  MinMax: '<S172>/MinMax5'
                 *  Switch: '<S172>/Switch1'
                 *  Switch: '<S172>/Switch5'
                 */
                VeCCTR_v_SetSpdTemp = fmaxf(VeCCTR_v_CcMinSetSpd,
                    VeCCTR_v_SetSpdTemp);
            }
            else
            {
                /* Switch: '<S172>/Switch' incorporates:
                 *  MinMax: '<S172>/MinMax6'
                 *  Switch: '<S172>/Switch1'
                 *  Switch: '<S172>/Switch5'
                 */
                VeCCTR_v_SetSpdTemp = fmaxf(VeCCTR_v_CcMinSetSpd,
                    VeCCTR_v_VehSpdBiasRound);
            }

            /* End of Switch: '<S172>/Switch5' */
        }
        else if (!rtb_VariantMerge_For_Variant_Source_VS4)
        {
            /* Switch: '<S172>/Switch10' incorporates:
             *  Logic: '<S172>/Logical Operator4'
             *  Switch: '<S172>/Switch9'
             */
            if ((!rtb_VariantMerge_For_Variant_Source_VS3) ||
                    (!CCTR_ac_B.OutportBufferForCC_5Unit_AccelDecel_Enab))
            {
                /* Switch: '<S172>/Switch' incorporates:
                 *  Switch: '<S172>/Switch1'
                 *  Switch: '<S172>/Switch9'
                 */
                VeCCTR_v_SetSpdTemp = VeCCTR_v_VehSpdBiasRound;
            }

            /* End of Switch: '<S172>/Switch10' */
        }
        else if (!CCTR_ac_B.OutportBufferForCC_5Unit_AccelDecel_Enab)
        {
            /* Switch: '<S172>/Switch17' incorporates:
             *  Constant: '<S223>/Calib'
             *  Logic: '<S172>/Logical1'
             *  RelationalOperator: '<S172>/Comparison3'
             *  RelationalOperator: '<S172>/Comparison4'
             *  Sum: '<S172>/Sum3'
             *  Switch: '<S172>/Switch11'
             *  Switch: '<S172>/Switch9'
             */
            if ((VeCCTR_v_VehSpdBiasRound < (VeCCTR_v_SetSpdTemp -
                    KeCCTR_v_SpdHysAccelStrat)) || (VeCCTR_v_VehSpdBiasRound >
                    VeCCTR_v_SetSpdTemp))
            {
                /* Switch: '<S172>/Switch' incorporates:
                 *  Switch: '<S172>/Switch1'
                 *  Switch: '<S172>/Switch11'
                 */
                VeCCTR_v_SetSpdTemp = VeCCTR_v_VehSpdBiasRound;
            }

            /* End of Switch: '<S172>/Switch17' */
        }
        else if (CCTR_ac_B.OutportBufferForVeCCTI_b_isM182)
        {
            /* Outputs for Function Call SubSystem: '<S1>/CruiseCANState' */
            /* Switch: '<S172>/Switch15' incorporates:
             *  Inport: '<S24>/VeDTRR_b_PtcPdlInChrgVsCC'
             *  Logic: '<S172>/Logical'
             *  RelationalOperator: '<S172>/Comparison'
             *  Switch: '<S172>/Switch11'
             *  Switch: '<S172>/Switch16'
             *  Switch: '<S172>/Switch9'
             */
            if ((VeCCTR_v_VehSpdBiasRound > VeCCTR_v_SetSpdTemp) && tmpRead_0)
            {
                /* Switch: '<S172>/Switch' incorporates:
                 *  Switch: '<S172>/Switch1'
                 *  Switch: '<S172>/Switch11'
                 *  Switch: '<S172>/Switch16'
                 */
                VeCCTR_v_SetSpdTemp = VeCCTR_v_VehSpdBiasRound;
            }

            /* End of Switch: '<S172>/Switch15' */
            /* End of Outputs for SubSystem: '<S1>/CruiseCANState' */
        }
        else
        {
            /* Switch: '<S172>/Switch' incorporates:
             *  MinMax: '<S172>/MinMax1'
             *  Switch: '<S172>/Switch1'
             *  Switch: '<S172>/Switch11'
             *  Switch: '<S172>/Switch16'
             *  Switch: '<S172>/Switch9'
             */
            VeCCTR_v_SetSpdTemp = fmaxf(VeCCTR_v_CcMinSetSpd,
                VeCCTR_v_SetSpdTemp);
        }

        /* End of Switch: '<S172>/Switch1' */
    }
    else if (VeCCTR_b_CcSetSpdClearEngaged)
    {
        /* Switch: '<S172>/Switch6' incorporates:
         *  Constant: '<S172>/SetSpd_ResetValue'
         *  Switch: '<S172>/Switch'
         */
        VeCCTR_v_SetSpdTemp = 0.0F;
    }
    else if (rtb_OR1_fz && (CCTR_ac_B.OutportBufferForCC_5Unit_AccelDecel_Enab))
    {
        /* Switch: '<S172>/Switch19' incorporates:
         *  Switch: '<S172>/Switch6'
         *  Switch: '<S172>/Switch7'
         */
        if (CCTR_ac_B.OutportBufferForVeCCTI_b_isM182)
        {
            /* Outputs for Function Call SubSystem: '<S1>/CruiseCANState' */
            /* Switch: '<S172>/Switch18' incorporates:
             *  Inport: '<S24>/VeDTRR_b_PtcPdlInChrgVsCC'
             *  Logic: '<S172>/Logical2'
             *  RelationalOperator: '<S172>/Comparison5'
             */
            if ((VeCCTR_v_VehSpdBiasRound > VeCCTR_v_SetSpdTemp) && tmpRead_0)
            {
                /* Switch: '<S172>/Switch' incorporates:
                 *  Switch: '<S172>/Switch19'
                 *  Switch: '<S172>/Switch7'
                 */
                VeCCTR_v_SetSpdTemp = VeCCTR_v_VehSpdBiasRound;
            }

            /* End of Switch: '<S172>/Switch18' */
            /* End of Outputs for SubSystem: '<S1>/CruiseCANState' */
        }
        else
        {
            /* Switch: '<S172>/Switch' incorporates:
             *  MinMax: '<S172>/MinMax2'
             *  Switch: '<S172>/Switch19'
             *  Switch: '<S172>/Switch7'
             */
            VeCCTR_v_SetSpdTemp = fmaxf(VeCCTR_v_CcMinSetSpd,
                VeCCTR_v_SetSpdTemp);
        }

        /* End of Switch: '<S172>/Switch19' */
    }
    else
    {
        if (rtb_OR1_fz && ((VeCCTR_v_VehSpdBiasRound > (VeCCTR_v_SetSpdTemp +
                KeCCTR_v_SpdHysCoastStrat)) || (VeCCTR_v_VehSpdBiasRound <
                VeCCTR_v_SetSpdTemp)))
        {
            /* Switch: '<S172>/Switch20' incorporates:
             *  Switch: '<S172>/Switch'
             *  Switch: '<S172>/Switch6'
             *  Switch: '<S172>/Switch7'
             */
            VeCCTR_v_SetSpdTemp = VeCCTR_v_VehSpdBiasRound;
        }
    }

    /* End of Switch: '<S172>/Switch' */

    /* MinMax: '<S172>/MinMax4' */
    rtb_TmpSignalConversionAtVeASLR_v_STSpdL = fminf(VeCCTR_v_CcMaxSetSpd,
        VeCCTR_v_SetSpdTemp);

    /* Outputs for Atomic SubSystem: '<S172>/EdgeRising5' */
    /* Logic: '<S218>/OR1' incorporates:
     *  UnitDelay: '<S218>/Unit Delay'
     */
    rtb_Switch_p = !CCTR_ac_DW.UnitDelay_DSTATE_nu;

    /* Update for UnitDelay: '<S218>/Unit Delay' */
    CCTR_ac_DW.UnitDelay_DSTATE_nu = VeCCTR_b_CcTapUpMode;

    /* End of Outputs for SubSystem: '<S172>/EdgeRising5' */

    /* Outputs for Atomic SubSystem: '<S172>/EdgeRising4' */
    /* Logic: '<S217>/OR1' incorporates:
     *  UnitDelay: '<S217>/Unit Delay'
     */
    rtb_VariantMerge_For_Variant_Source_VS3 = !CCTR_ac_DW.UnitDelay_DSTATE_pu;

    /* Update for UnitDelay: '<S217>/Unit Delay' */
    CCTR_ac_DW.UnitDelay_DSTATE_pu = VeCCTR_b_CcTapDnMode;

    /* Switch: '<S172>/temp SetSpd ' incorporates:
     *  Logic: '<S217>/AND'
     */
    if ((VeCCTR_b_CcTapDnMode) && rtb_VariantMerge_For_Variant_Source_VS3)
    {
        /* Outputs for Function Call SubSystem: '<S1>/CruiseCANState' */
        /* Switch: '<S172>/Switch2' incorporates:
         *  Constant: '<S219>/Calib'
         *  Constant: '<S220>/Calib'
         *  Inport: '<S24>/SpeedUnit'
         */
        if (tmpRead_c)
        {
            rtb_selectsetffpower = KeCCTR_v_CcTapDwnDec_MPH;
        }
        else
        {
            rtb_selectsetffpower = KeCCTR_v_CcTapDwnDec_KPH;
        }

        /* End of Switch: '<S172>/Switch2' */
        /* End of Outputs for SubSystem: '<S1>/CruiseCANState' */

        /* Switch: '<S243>/Switch2' incorporates:
         *  MinMax: '<S172>/MinMax3'
         *  Sum: '<S172>/Sum'
         *  UnitDelay: '<S172>/Unit Delay2'
         */
        rtb_TmpSignalConversionAtVePLTR_v_HomSpd = fmaxf(VeCCTR_v_SetSpdPostTap
            - rtb_selectsetffpower, VeCCTR_v_CcMinSetSpd);
    }
    else
    {
        /* Switch: '<S243>/Switch2' */
        rtb_TmpSignalConversionAtVePLTR_v_HomSpd =
            rtb_TmpSignalConversionAtVeASLR_v_STSpdL;
    }

    /* End of Switch: '<S172>/temp SetSpd ' */
    /* End of Outputs for SubSystem: '<S172>/EdgeRising4' */

    /* Outputs for Atomic SubSystem: '<S172>/EdgeRising5' */
    /* Switch: '<S172>/temp SetSpd 1' incorporates:
     *  Logic: '<S218>/AND'
     */
    if ((VeCCTR_b_CcTapUpMode) && rtb_Switch_p)
    {
        /* Outputs for Function Call SubSystem: '<S1>/CruiseCANState' */
        /* Switch: '<S172>/Switch8' incorporates:
         *  Constant: '<S221>/Calib'
         *  Constant: '<S222>/Calib'
         *  Inport: '<S24>/SpeedUnit'
         */
        if (tmpRead_c)
        {
            rtb_selectsetffpower = KeCCTR_v_CcTapUpInc_MPH;
        }
        else
        {
            rtb_selectsetffpower = KeCCTR_v_CcTapUpInc_KPH;
        }

        /* End of Switch: '<S172>/Switch8' */
        /* End of Outputs for SubSystem: '<S1>/CruiseCANState' */

        /* Switch: '<S172>/temp SetSpd 1' incorporates:
         *  MinMax: '<S172>/MinMax9'
         *  Sum: '<S172>/Sum1'
         *  UnitDelay: '<S172>/Unit Delay2'
         */
        VeCCTR_v_SetSpdPostTap = fminf(VeCCTR_v_SetSpdPostTap +
            rtb_selectsetffpower, VeCCTR_v_CcMaxSetSpd);
    }
    else
    {
        /* Switch: '<S172>/temp SetSpd 1' */
        VeCCTR_v_SetSpdPostTap = rtb_TmpSignalConversionAtVePLTR_v_HomSpd;
    }

    /* End of Switch: '<S172>/temp SetSpd 1' */
    /* End of Outputs for SubSystem: '<S172>/EdgeRising5' */

    /* Switch: '<S172>/Switch3' incorporates:
     *  Logic: '<S172>/Logical Operator2'
     *  Logic: '<S172>/Logical Operator3'
     *  Logic: '<S172>/Logical5'
     *  Logic: '<S172>/Logical6'
     *  RelationalOperator: '<S172>/Comparison1'
     *  RelationalOperator: '<S172>/Comparison2'
     *  Switch: '<S172>/Switch4'
     *  UnitDelay: '<S80>/Unit Delay2'
     */
    if (((VeCCTR_v_CcSetSpdAccelCoast <=
            rtb_TmpSignalConversionAtVeASLR_v_STSpdL) && ((VeCCTR_b_CcCoastMode)
          && (!rtb_OR1_fz))) &&
            (CCTR_ac_B.OutportBufferForCC_5Unit_AccelDecel_Enab))
    {
        /* Switch: '<S172>/Switch3' */
        VeCCTR_v_SetSpdBiased = VeCCTR_v_CcSetSpdAccelCoast;
    }
    else if ((VeCCTR_b_CcAccelMode) && (VeCCTR_v_CcSetSpdAccelCoast >=
              rtb_TmpSignalConversionAtVeASLR_v_STSpdL))
    {
        /* Switch: '<S172>/Switch4' incorporates:
         *  Switch: '<S172>/Switch3'
         */
        VeCCTR_v_SetSpdBiased = VeCCTR_v_CcSetSpdAccelCoast;
    }
    else
    {
        /* Switch: '<S172>/Switch3' incorporates:
         *  Switch: '<S172>/Switch4'
         */
        VeCCTR_v_SetSpdBiased = VeCCTR_v_SetSpdPostTap;
    }

    /* End of Switch: '<S172>/Switch3' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CruiseCANState'
     */
    /* Sum: '<S172>/Add' incorporates:
     *  DataTypeConversion: '<S270>/Data Type Conversion'
     *  Inport: '<Root>/VePLTR_e_ProxiIncreasingSpdCnst'
     *  Product: '<S172>/Product'
     */
    VeCCTR_v_CcSetSpdUnbiased = (VeCCTR_v_SetSpdBiased / rtb_switch) - ((float32)
        ((uint16)tmpRead_k));

    /* Outputs for Atomic SubSystem: '<S172>/EdgeFalling3' */
    /* Logic: '<S213>/AND' incorporates:
     *  UnitDelay: '<S213>/Unit Delay'
     */
    rtb_OR1_fz = (rtb_OR1_i2b && (CCTR_ac_DW.UnitDelay_DSTATE_bb));

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CruiseCANState'
     */
    /* Update for UnitDelay: '<S213>/Unit Delay' incorporates:
     *  Inport: '<S24>/VeDTRR_b_PtcPdlInChrgVsCC'
     */
    CCTR_ac_DW.UnitDelay_DSTATE_bb = tmpRead_0;

    /* End of Outputs for SubSystem: '<S172>/EdgeFalling3' */

    /* Logic: '<S172>/Logical Operator10' incorporates:
     *  Logic: '<S172>/Logical Operator7'
     *  RelationalOperator: '<S172>/FixPt Relational Operator'
     *  RelationalOperator: '<S172>/FixPt Relational Operator2'
     */
    VeCCTR_b_RampEnabSet = (((((VeCCTR_v_SetSpdPostTap >
        rtb_TmpSignalConversionAtVePLTR_v_HomSpd) ||
        (rtb_TmpSignalConversionAtVePLTR_v_HomSpd <
         rtb_TmpSignalConversionAtVeASLR_v_STSpdL)) || (VeCCTR_b_CcResumeMode)) ||
        (rtb_AND_fs && (CCTR_ac_B.OutportBufferForCC_5Unit_AccelDecel_Enab))) ||
                            rtb_OR1_fz);

    /* Outputs for Atomic SubSystem: '<S172>/Signal Latch On With Reset' */
    /* Logic: '<S227>/OR1' incorporates:
     *  Logic: '<S227>/NOT'
     *  Logic: '<S227>/OR'
     *  UnitDelay: '<S172>/FixPt Unit Delay1'
     *  UnitDelay: '<S227>/Unit Delay'
     */
    VeCCTR_b_CcCntrlSpdRampEnable = ((VeCCTR_b_RampEnabSet) ||
        ((!VeCCTR_b_CcCntrlSpdReset) && (VeCCTR_b_CcCntrlSpdRampEnable)));

    /* End of Outputs for SubSystem: '<S172>/Signal Latch On With Reset' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CruiseCANState'
     */
    /* Switch: '<S172>/Switch12' incorporates:
     *  Inport: '<S24>/SpeedUnit'
     */
    if (tmpRead_c)
    {
        /* Switch: '<S172>/Switch12' incorporates:
         *  Constant: '<S172>/Constant Value3'
         *  Product: '<S172>/Product3'
         */
        VeCCTR_v_SetSpdUnbiasedPID_KPH = 1.609375F * VeCCTR_v_CcSetSpdUnbiased;
    }
    else
    {
        /* Switch: '<S172>/Switch12' */
        VeCCTR_v_SetSpdUnbiasedPID_KPH = VeCCTR_v_CcSetSpdUnbiased;
    }

    /* End of Switch: '<S172>/Switch12' */
    /* End of Outputs for SubSystem: '<S80>/Set_Speed' */

    /* Outputs for Atomic SubSystem: '<S80>/Control_Speed' */
    /* Outputs for Atomic SubSystem: '<S170>/EdgeFalling' */
    /* Logic: '<S181>/AND' incorporates:
     *  UnitDelay: '<S181>/Unit Delay'
     */
    rtb_Switch_p = (rtb_OR1_i2b && (CCTR_ac_DW.UnitDelay_DSTATE_la));

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CruiseCANState'
     */
    /* Update for UnitDelay: '<S181>/Unit Delay' incorporates:
     *  Inport: '<S24>/VeDTRR_b_PtcPdlInChrgVsCC'
     */
    CCTR_ac_DW.UnitDelay_DSTATE_la = tmpRead_0;

    /* End of Outputs for SubSystem: '<S170>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S170>/EdgeRising' */
    /* Logic: '<S182>/AND' incorporates:
     *  Logic: '<S182>/OR1'
     *  UnitDelay: '<S182>/Unit Delay'
     */
    rtb_VariantMerge_For_Variant_Source_VS3 = ((VeCCTR_b_CcAccelMode) &&
        (!CCTR_ac_DW.UnitDelay_DSTATE_ot));

    /* Update for UnitDelay: '<S182>/Unit Delay' */
    CCTR_ac_DW.UnitDelay_DSTATE_ot = VeCCTR_b_CcAccelMode;

    /* End of Outputs for SubSystem: '<S170>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S170>/EdgeRising1' */
    /* Logic: '<S183>/AND' incorporates:
     *  Logic: '<S183>/OR1'
     *  UnitDelay: '<S183>/Unit Delay'
     */
    VeCCTR_b_CcCoastReset = ((VeCCTR_b_CcCoastMode) &&
        (!CCTR_ac_DW.UnitDelay_DSTATE_o));

    /* Update for UnitDelay: '<S183>/Unit Delay' */
    CCTR_ac_DW.UnitDelay_DSTATE_o = VeCCTR_b_CcCoastMode;

    /* End of Outputs for SubSystem: '<S170>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S170>/EdgeRising2' */
    /* Logic: '<S184>/OR1' incorporates:
     *  UnitDelay: '<S184>/Unit Delay'
     */
    rtb_VariantMerge_For_Variant_Source_VS4 = !CCTR_ac_DW.UnitDelay_DSTATE_dx;

    /* Update for UnitDelay: '<S184>/Unit Delay' */
    CCTR_ac_DW.UnitDelay_DSTATE_dx = VeCCTR_b_CcResumeMode;

    /* End of Outputs for SubSystem: '<S170>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S26>/CC_VehWhlPwr' */
    /* Outputs for Atomic SubSystem: '<S81>/I_Term_Reset' */
    /* Logic: '<S170>/Logical Operator2' incorporates:
     *  Logic: '<S230>/Logical Operator'
     *  Switch: '<S230>/FixPt Switch6'
     */
    rtb_OR1_fz = !VeCCTR_b_CcResumeModeLatch;

    /* End of Outputs for SubSystem: '<S81>/I_Term_Reset' */
    /* End of Outputs for SubSystem: '<S26>/CC_VehWhlPwr' */

    /* Switch: '<S170>/Switch3' incorporates:
     *  Logic: '<S170>/Logical Operator2'
     *  Logic: '<S170>/and4'
     */
    if (CCTR_ac_B.OutportBufferForCC_5Unit_AccelDecel_Enab)
    {
        rtb_AND_fs = (rtb_OR1_fz && (VeCCTR_b_CcCoastReset));
    }
    else
    {
        rtb_AND_fs = VeCCTR_b_CcCoastReset;
    }

    /* End of Switch: '<S170>/Switch3' */

    /* Outputs for Atomic SubSystem: '<S170>/EdgeRising2' */
    /* Logic: '<S170>/or' incorporates:
     *  Logic: '<S170>/Logical Operator2'
     *  Logic: '<S170>/and3'
     *  Logic: '<S184>/AND'
     */
    VeCCTR_b_CcCntrlSpd_Reset = (((rtb_AND_fs || ((VeCCTR_b_CcResumeMode) &&
        rtb_VariantMerge_For_Variant_Source_VS4)) || (rtb_OR1_fz &&
        rtb_VariantMerge_For_Variant_Source_VS3)) || rtb_Switch_p);

    /* End of Outputs for SubSystem: '<S170>/EdgeRising2' */

    /* Switch: '<S170>/switch' incorporates:
     *  Switch: '<S170>/Switch7'
     *  Switch: '<S170>/Switch8'
     */
    if (VeCCTR_b_CcCoastMode)
    {
        /* Switch: '<S170>/Switch1' */
        if (CCTR_ac_B.OutportBufferForCC_5Unit_AccelDecel_Enab)
        {
            /* Switch: '<S170>/switch' incorporates:
             *  UnitDelay: '<S80>/Unit Delay1'
             */
            rtb_switch = VeCCTR_v_CcCntrlSpdRmpd;
        }
        else
        {
            /* Switch: '<S170>/switch' incorporates:
             *  UnitDelay: '<S80>/Unit Delay4'
             */
            rtb_switch = VeCCTR_v_CcCntrlSpdCoast;
        }

        /* End of Switch: '<S170>/Switch1' */
    }
    else if (VeCCTR_b_CcCntrlSpd_Reset)
    {
        /* Outputs for Function Call SubSystem: '<S1>/CruiseCANState' */
        /* Switch: '<S170>/Switch8' incorporates:
         *  Inport: '<S24>/CanSigVehSpd'
         *  Switch: '<S170>/switch'
         */
        rtb_switch = tmpRead_b;

        /* End of Outputs for SubSystem: '<S1>/CruiseCANState' */
    }
    else if (VeCCTR_b_CcCntrlSpdRampEnable)
    {
        /* Switch: '<S170>/Switch7' incorporates:
         *  Switch: '<S170>/Switch8'
         *  Switch: '<S170>/switch'
         *  UnitDelay: '<S80>/Unit Delay1'
         */
        rtb_switch = VeCCTR_v_CcCntrlSpdRmpd;
    }
    else
    {
        /* Switch: '<S170>/switch' incorporates:
         *  Switch: '<S170>/Switch7'
         *  Switch: '<S170>/Switch8'
         */
        rtb_switch = VeCCTR_v_SetSpdUnbiasedPID_KPH;
    }

    /* End of Switch: '<S170>/switch' */
    /* End of Outputs for SubSystem: '<S80>/Control_Speed' */

    /* Outputs for Atomic SubSystem: '<S80>/CcSetPointCAN_Msg' */
    /* Logic: '<S168>/CC_V_MAX_TM_SELECT3' incorporates:
     *  Logic: '<S168>/CC_V_MAX_TM_SELECT1'
     *  Logic: '<S168>/CC_V_MAX_TM_SELECT2'
     *  RelationalOperator: '<S168>/Relational Operator1'
     *  RelationalOperator: '<S168>/Relational Operator2'
     */
    rtb_Switch_p = (((VeCCTR_v_SetSpdBiased == VeCCTR_v_CcMinSetSpd) &&
                     (VeCCTR_b_CoastFlag)) || ((VeCCTR_v_SetSpdBiased ==
                      VeCCTR_v_CcMaxSetSpd) && (VeCCTR_b_ResumeFlg)));

    /* Outputs for Atomic SubSystem: '<S168>/EdgeRising' */
    /* Logic: '<S174>/OR1' incorporates:
     *  UnitDelay: '<S174>/Unit Delay'
     */
    rtb_VariantMerge_For_Variant_Source_VS3 = !CCTR_ac_DW.UnitDelay_DSTATE_pg;

    /* Update for UnitDelay: '<S174>/Unit Delay' */
    CCTR_ac_DW.UnitDelay_DSTATE_pg = rtb_Switch_p;

    /* Outputs for Atomic SubSystem: '<S168>/Signal Latch On With Reset' */
    /* Logic: '<S180>/OR1' incorporates:
     *  Logic: '<S174>/AND'
     *  Logic: '<S180>/NOT'
     *  Logic: '<S180>/OR'
     *  UnitDelay: '<S168>/Unit Delay'
     *  UnitDelay: '<S180>/Unit Delay'
     */
    CCTR_ac_DW.UnitDelay_DSTATE_ft = ((rtb_Switch_p &&
        rtb_VariantMerge_For_Variant_Source_VS3) ||
        ((!CCTR_ac_DW.UnitDelay_DSTATE_cs) && (CCTR_ac_DW.UnitDelay_DSTATE_ft)));

    /* End of Outputs for SubSystem: '<S168>/Signal Latch On With Reset' */
    /* End of Outputs for SubSystem: '<S168>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S168>/Counter Reset  Enabled ' */
    /* Switch: '<S173>/Switch1' incorporates:
     *  Constant: '<S173>/Constant Value2'
     *  Switch: '<S173>/Switch2'
     *  UnitDelay: '<S168>/Unit Delay'
     *  UnitDelay: '<S173>/Unit Delay'
     *  UnitDelay: '<S180>/Unit Delay'
     */
    if (CCTR_ac_DW.UnitDelay_DSTATE_cs)
    {
        CCTR_ac_DW.UnitDelay_DSTATE_n2 = 0U;
    }
    else
    {
        if (CCTR_ac_DW.UnitDelay_DSTATE_ft)
        {
            /* UnitDelay: '<S173>/Unit Delay' incorporates:
             *  Constant: '<S173>/Constant Value1'
             *  Sum: '<S173>/Subtraction'
             *  Switch: '<S173>/Switch2'
             */
            CCTR_ac_DW.UnitDelay_DSTATE_n2 = (uint16)(((uint32)
                CCTR_ac_DW.UnitDelay_DSTATE_n2) + 1U);
        }
    }

    /* End of Switch: '<S173>/Switch1' */
    /* End of Outputs for SubSystem: '<S168>/Counter Reset  Enabled ' */

    /* Switch: '<S168>/Switch6' incorporates:
     *  Logic: '<S168>/Logical Operator2'
     *  UnitDelay: '<S168>/Unit Delay3'
     */
    if (!VeCCTR_b_CcAccelMode)
    {
        CCTR_ac_DW.UnitDelay3_DSTATE_h = VeCCTR_v_SetSpdBiased;
    }

    /* End of Switch: '<S168>/Switch6' */

    /* Switch: '<S168>/Switch9' incorporates:
     *  Logic: '<S168>/CC_V_MAX_TM_SELECT'
     */
    if ((VeCCTR_b_CcAccelMode) || (VeCCTR_b_CcCoastMode))
    {
        /* Switch: '<S168>/Switch1' incorporates:
         *  Constant: '<S178>/Calib'
         *  Switch: '<S168>/Switch12'
         */
        if (KeCCTR_b_Enblvehspddisp)
        {
            /* Outputs for Function Call SubSystem: '<S1>/CruiseCANState' */
            /* Switch: '<S168>/Switch9' incorporates:
             *  Inport: '<S24>/CanSigVehSpd'
             *  Switch: '<S168>/Switch1'
             */
            VeCCTR_v_CcPreSetSpdCluster = tmpRead_b;

            /* End of Outputs for SubSystem: '<S1>/CruiseCANState' */
        }
        else if (CCTR_ac_B.OutportBufferForCC_5Unit_AccelDecel_Enab)
        {
            /* Switch: '<S168>/Switch12' incorporates:
             *  Switch: '<S168>/Switch1'
             *  Switch: '<S168>/Switch9'
             */
            VeCCTR_v_CcPreSetSpdCluster = VeCCTR_v_SetSpdBiased;
        }
        else
        {
            /* Switch: '<S168>/Switch9' incorporates:
             *  Switch: '<S168>/Switch1'
             *  Switch: '<S168>/Switch12'
             */
            VeCCTR_v_CcPreSetSpdCluster = rtb_switch;
        }

        /* End of Switch: '<S168>/Switch1' */
    }
    else
    {
        /* Switch: '<S168>/Switch9' */
        VeCCTR_v_CcPreSetSpdCluster = VeCCTR_v_SetSpdBiased;
    }

    /* End of Switch: '<S168>/Switch9' */

    /* Switch: '<S168>/Switch4' incorporates:
     *  Logic: '<S168>/Logical Operator1'
     *  UnitDelay: '<S168>/Unit Delay1'
     */
    if (!VeCCTR_b_CcCoastMode)
    {
        CCTR_ac_DW.UnitDelay1_DSTATE_m = VeCCTR_v_SetSpdBiased;
    }

    /* End of Switch: '<S168>/Switch4' */

    /* Switch: '<S168>/Switch3' incorporates:
     *  Constant: '<S177>/Calib'
     *  Switch: '<S168>/Switch5'
     *  UnitDelay: '<S180>/Unit Delay'
     */
    if (CCTR_ac_DW.UnitDelay_DSTATE_ft)
    {
        /* Switch: '<S168>/Switch3' incorporates:
         *  Constant: '<S179>/Calib'
         *  Sum: '<S168>/Sum'
         */
        VeCCTR_v_CcPreSetSpdCluster = VeCCTR_v_SetSpdBiased +
            KeCCTR_v_SetSpdDispMult;
    }
    else
    {
        if (KeCCTR_b_EnblSetSpdDisp)
        {
            /* Switch: '<S175>/Switch1' incorporates:
             *  Switch: '<S168>/Switch5'
             *  Switch: '<S175>/Switch2'
             */
            if (VeCCTR_b_CcAccelMode)
            {
                /* Switch: '<S168>/Switch3' incorporates:
                 *  MinMax: '<S168>/MinMax1'
                 *  Switch: '<S175>/Switch1'
                 *  UnitDelay: '<S168>/Unit Delay3'
                 */
                VeCCTR_v_CcPreSetSpdCluster = fmaxf
                    (CCTR_ac_DW.UnitDelay3_DSTATE_h, VeCCTR_v_CcPreSetSpdCluster);
            }
            else
            {
                if (VeCCTR_b_CcCoastMode)
                {
                    /* Switch: '<S175>/Switch2' incorporates:
                     *  MinMax: '<S168>/MinMax2'
                     *  Switch: '<S168>/Switch3'
                     *  Switch: '<S175>/Switch1'
                     *  UnitDelay: '<S168>/Unit Delay1'
                     */
                    VeCCTR_v_CcPreSetSpdCluster = fminf
                        (CCTR_ac_DW.UnitDelay1_DSTATE_m,
                         VeCCTR_v_CcPreSetSpdCluster);
                }
            }

            /* End of Switch: '<S175>/Switch1' */
        }
    }

    /* End of Switch: '<S168>/Switch3' */

    /* Switch: '<S168>/Switch2' incorporates:
     *  Constant: '<S176>/Calib'
     *  RelationalOperator: '<S168>/Relational Operator3'
     *  UnitDelay: '<S168>/Unit Delay'
     *  UnitDelay: '<S173>/Unit Delay'
     */
    CCTR_ac_DW.UnitDelay_DSTATE_cs = (CCTR_ac_DW.UnitDelay_DSTATE_n2 >=
        KeCCTR_Cnt_SetSpdDisp);

    /* End of Outputs for SubSystem: '<S80>/CcSetPointCAN_Msg' */

    /* Outputs for Atomic SubSystem: '<S80>/CntrlSpd_Reset' */
    /* RelationalOperator: '<S169>/Comparison4' */
    VeCCTR_b_SpdKiss = (VeCCTR_v_SetSpdUnbiasedPID_KPH == rtb_switch);

    /* Switch: '<S230>/FixPt Switch6' incorporates:
     *  Logic: '<S169>/Logical Operator6'
     */
    rtb_AND_fs = !CCTR_ac_B.OutportBufferForCC_5Unit_AccelDecel_Enab;

    /* Logic: '<S169>/Logical Operator' incorporates:
     *  Logic: '<S169>/Logical Operator1'
     *  Logic: '<S169>/Logical Operator3'
     */
    VeCCTR_b_CcCntrlSpdReset = ((((VeCCTR_b_SpdKiss) || ((VeCCTR_b_CcAccelMode) &&
        rtb_AND_fs)) || (rtb_AND_fs && (VeCCTR_b_CcCoastMode))) ||
        (VeCCTR_b_CcSetMode));

    /* End of Outputs for SubSystem: '<S80>/CntrlSpd_Reset' */

    /* Outputs for Atomic SubSystem: '<S80>/SetPoint_Rampng' */
    /* Outputs for Atomic SubSystem: '<S171>/EdgeRising2' */
    /* Logic: '<S187>/AND' incorporates:
     *  Logic: '<S187>/OR1'
     *  UnitDelay: '<S187>/Unit Delay'
     */
    VeCCTR_b_CcHasResetCntrlSpd = ((VeCCTR_b_CcCntrlSpd_Reset) &&
        (!CCTR_ac_DW.UnitDelay_DSTATE_ey));

    /* Update for UnitDelay: '<S187>/Unit Delay' */
    CCTR_ac_DW.UnitDelay_DSTATE_ey = VeCCTR_b_CcCntrlSpd_Reset;

    /* End of Outputs for SubSystem: '<S171>/EdgeRising2' */

    /* Switch: '<S171>/Switch2' */
    if (VeCCTR_b_CcHasResetCntrlSpd)
    {
        /* Switch: '<S171>/FixPt Switch' */
        if (VeCCTR_b_CcCoastReset)
        {
            /* Switch: '<S171>/FixPt Switch1' */
            if (CCTR_ac_B.OutportBufferForCC_5Unit_AccelDecel_Enab)
            {
                /* Outputs for Function Call SubSystem: '<S1>/CruiseCANState' */
                /* Switch: '<S171>/Switch2' incorporates:
                 *  Inport: '<S24>/CanSigVehSpd'
                 *  MinMax: '<S171>/FixPt MinMax1'
                 *  Switch: '<S171>/FixPt Switch1'
                 */
                VeCCTR_v_CcCntrlSpdPreRamp = fminf(rtb_switch, tmpRead_b);

                /* End of Outputs for SubSystem: '<S1>/CruiseCANState' */
            }
            else
            {
                /* Outputs for Function Call SubSystem: '<S1>/CruiseCANState' */
                /* Switch: '<S171>/Switch2' incorporates:
                 *  Inport: '<S24>/CanSigVehSpd'
                 *  MinMax: '<S171>/FixPt MinMax'
                 *  Switch: '<S171>/FixPt Switch1'
                 */
                VeCCTR_v_CcCntrlSpdPreRamp = fminf
                    (VeCCTR_v_SetSpdUnbiasedPID_KPH, tmpRead_b);

                /* End of Outputs for SubSystem: '<S1>/CruiseCANState' */
            }

            /* End of Switch: '<S171>/FixPt Switch1' */
        }
        else
        {
            /* Outputs for Function Call SubSystem: '<S1>/CruiseCANState' */
            /* Switch: '<S171>/Switch2' incorporates:
             *  Inport: '<S24>/CanSigVehSpd'
             *  Switch: '<S171>/FixPt Switch'
             */
            VeCCTR_v_CcCntrlSpdPreRamp = tmpRead_b;

            /* End of Outputs for SubSystem: '<S1>/CruiseCANState' */
        }

        /* End of Switch: '<S171>/FixPt Switch' */
    }
    else
    {
        /* Switch: '<S171>/Switch2' */
        VeCCTR_v_CcCntrlSpdPreRamp = rtb_switch;
    }

    /* End of Switch: '<S171>/Switch2' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CruiseCANState'
     */
    /* Switch: '<S171>/FixPt Switch5' incorporates:
     *  Constant: '<S191>/Calib'
     *  Constant: '<S192>/Calib'
     *  Inport: '<S24>/SpeedUnit'
     */
    if (tmpRead_c)
    {
        rtb_selectsetffpower = KeCCTR_v_CcUnitStepMPH;
    }
    else
    {
        rtb_selectsetffpower = KeCCTR_v_CcUnitStepKPH;
    }

    /* End of Switch: '<S171>/FixPt Switch5' */

    /* MinMax: '<S171>/max2' incorporates:
     *  Constant: '<S171>/Constant Value1'
     */
    rtb_selectsetffpower = fmaxf(rtb_selectsetffpower, 0.1F);

    /* Switch: '<S171>/FixPt Switch6' incorporates:
     *  Product: '<S171>/Product'
     *  Product: '<S171>/Product1'
     *  Rounding: '<S171>/Rounding1'
     *  Sum: '<S171>/Sum4'
     *  Switch: '<S171>/FixPt Switch4'
     *  UnitDelay: '<S171>/Unit Delay1'
     */
    if (VeCCTR_b_CcCoastMode)
    {
        CCTR_ac_DW.UnitDelay1_DSTATE_h = (ceilf(VeCCTR_v_SetSpdPostTap /
            rtb_selectsetffpower) * rtb_selectsetffpower) - rtb_selectsetffpower;
    }
    else
    {
        if (VeCCTR_b_CcAccelMode)
        {
            /* UnitDelay: '<S171>/Unit Delay1' incorporates:
             *  Product: '<S171>/Product2'
             *  Product: '<S171>/Product3'
             *  Rounding: '<S171>/Rounding2'
             *  Sum: '<S171>/Sum3'
             *  Switch: '<S171>/FixPt Switch4'
             */
            CCTR_ac_DW.UnitDelay1_DSTATE_h = (floorf((1.0F /
                rtb_selectsetffpower) * VeCCTR_v_SetSpdPostTap) *
                rtb_selectsetffpower) + rtb_selectsetffpower;
        }
    }

    /* End of Switch: '<S171>/FixPt Switch6' */

    /* Outputs for Atomic SubSystem: '<S171>/EdgeRising' */
    /* Logic: '<S185>/AND' incorporates:
     *  Logic: '<S185>/OR1'
     *  UnitDelay: '<S185>/Unit Delay'
     */
    rtb_Switch_p = ((VeCCTR_b_CcAccelMode) && (!CCTR_ac_DW.UnitDelay_DSTATE_hb));

    /* Update for UnitDelay: '<S185>/Unit Delay' */
    CCTR_ac_DW.UnitDelay_DSTATE_hb = VeCCTR_b_CcAccelMode;

    /* End of Outputs for SubSystem: '<S171>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S171>/EdgeRising1' */
    /* Switch: '<S230>/FixPt Switch6' incorporates:
     *  UnitDelay: '<S186>/Unit Delay'
     */
    rtb_AND_fs = CCTR_ac_DW.UnitDelay_DSTATE_gz;

    /* Update for UnitDelay: '<S186>/Unit Delay' */
    CCTR_ac_DW.UnitDelay_DSTATE_gz = VeCCTR_b_CcCoastMode;

    /* Switch: '<S171>/FixPt Switch7' incorporates:
     *  Logic: '<S171>/Logical3'
     *  Logic: '<S186>/AND'
     *  Logic: '<S186>/OR1'
     */
    if ((rtb_UnitDelay5_o || rtb_Switch_p) || ((VeCCTR_b_CcCoastMode) &&
            (!rtb_AND_fs)))
    {
        /* Switch: '<S171>/FixPt Switch7' incorporates:
         *  UnitDelay: '<S171>/Unit Delay1'
         */
        VeCCTR_v_SetSpd5UnitTemp = CCTR_ac_DW.UnitDelay1_DSTATE_h;
    }
    else
    {
        /* Switch: '<S171>/FixPt Switch7' */
        VeCCTR_v_SetSpd5UnitTemp = VeCCTR_v_SetSpdPostTap;
    }

    /* End of Switch: '<S171>/FixPt Switch7' */
    /* End of Outputs for SubSystem: '<S171>/EdgeRising1' */

    /* Switch: '<S171>/FixPt Switch3' */
    if (CCTR_ac_B.OutportBufferForCC_5Unit_AccelDecel_Enab)
    {
        /* Switch: '<S72>/select set ff power' */
        rtb_selectsetffpower = VeCCTR_v_SetSpd5UnitTemp;
    }
    else
    {
        /* Switch: '<S72>/select set ff power' incorporates:
         *  Constant: '<S189>/Calib'
         *  Sum: '<S171>/Sum'
         */
        rtb_selectsetffpower = KeCCTR_v_CcAccelSetSpdInc +
            VeCCTR_v_SetSpdPostTap;
    }

    /* End of Switch: '<S171>/FixPt Switch3' */

    /* Switch: '<S171>/FixPt Switch2' incorporates:
     *  Logic: '<S171>/Logical1'
     */
    if (!CCTR_ac_B.OutportBufferForCC_5Unit_AccelDecel_Enab)
    {
        /* Switch: '<S171>/FixPt Switch2' incorporates:
         *  MinMax: '<S171>/CC_SET_SPD_ACCEL_80'
         */
        VeCCTR_v_CcSetSpdAccelCoast = fminf(rtb_selectsetffpower,
            VeCCTR_v_CcMaxSetSpd);
    }
    else
    {
        /* Switch: '<S171>/FixPt Switch2' incorporates:
         *  MinMax: '<S171>/CC_SET_SPD_ACCEL_80'
         *  MinMax: '<S171>/MinMax2'
         */
        VeCCTR_v_CcSetSpdAccelCoast = fmaxf(fminf(rtb_selectsetffpower,
            VeCCTR_v_CcMaxSetSpd), VeCCTR_v_CcMinSetSpd);
    }

    /* End of Switch: '<S171>/FixPt Switch2' */

    /* Switch: '<S193>/Switch' incorporates:
     *  Abs: '<S194>/Abs'
     *  RelationalOperator: '<S194>/Comparison4'
     *  Sum: '<S194>/Sum1'
     *  Switch: '<S193>/Switch1'
     *  Switch: '<S200>/Switch1'
     *  Switch: '<S201>/Switch1'
     */
#if !Rte_SysCon_Variant_CCTR_2

    if (VeCCTR_b_CcResumeModeLatch)
    {
        /* VariantMerge generated from: '<S188>/VS1' incorporates:
         *  Constant: '<S195>/Calib'
         */
        rtb_VariantMerge_For_Variant_Source_VS1 = KeCCTR_v_CcResumCntrlSpdDec;

        /* VariantMerge generated from: '<S188>/VS5' incorporates:
         *  Constant: '<S196>/Calib'
         */
        rtb_VariantMerge_For_Variant_Source_VS5 = KeCCTR_v_CcResumCntrlSpdInc;
    }
    else
    {
        /* VariantMerge generated from: '<S188>/VS1' incorporates:
         *  Constant: '<S197>/Calib'
         */
        rtb_VariantMerge_For_Variant_Source_VS1 = KeCCTR_v_CcTapCntrlSpdDec;

        /* VariantMerge generated from: '<S188>/VS5' incorporates:
         *  Constant: '<S198>/Calib'
         */
        rtb_VariantMerge_For_Variant_Source_VS5 = KeCCTR_v_CcTapCntrlSpdInc;
    }

#else

    /* Outputs for Function Call SubSystem: '<S1>/CruiseCANState' */
    /* Abs: '<S194>/Abs' incorporates:
     *  Inport: '<S24>/CanSigVehSpd'
     *  Sum: '<S194>/Sum1'
     */
    rtb_selectsetffpower = fabsf(VeCCTR_v_SetSpdUnbiasedPID_KPH - tmpRead_b);

    /* Switch: '<S200>/Switch1' incorporates:
     *  Constant: '<S199>/Constant'
     *  Inport: '<Root>/VeTMDR_e_TrrnMd'
     *  Inport: '<S24>/Terrain_Mode'
     *  RelationalOperator: '<S194>/Comparison4'
     *  Switch: '<S194>/Switch1'
     *  Switch: '<S194>/Switch2'
     *  Switch: '<S201>/Switch1'
     */
    if (((uint32)tmpRead_r) == CeTMDR_e_Sport)
    {
        /* Switch: '<S194>/Switch' incorporates:
         *  Switch: '<S194>/Switch3'
         */
        if (VeCCTR_b_CcResumeModeLatch)
        {
            /* VariantMerge generated from: '<S188>/VS5' incorporates:
             *  Inport: '<S24>/CanSigVehSpd'
             *  Lookup_n-D: '<S205>/Vector'
             */
            rtb_VariantMerge_For_Variant_Source_VS5 = look1_iflf_binlca_16a
                (tmpRead_b, ((const float32 *)
                             &(KxCCTR_v_CcResumeCtrlSpdIncSport[0])), ((const
                   float32 *)&(KtCCTR_v_CcResumeCtrlSpdIncSport[0])), 6U);

            /* VariantMerge generated from: '<S188>/VS1' incorporates:
             *  Abs: '<S194>/Abs'
             *  Lookup_n-D: '<S203>/Vector'
             */
            rtb_VariantMerge_For_Variant_Source_VS1 = look1_iflf_binlca_16a
                (rtb_selectsetffpower, ((const float32 *)
                  &(KxCCTR_v_CcResumeCtrlSpdDecSport[0])), ((const float32 *)
                  &(KtCCTR_v_CcResumeCtrlSpdDecSport[0])), 2U);
        }
        else
        {
            /* VariantMerge generated from: '<S188>/VS5' incorporates:
             *  Inport: '<S24>/CanSigVehSpd'
             *  Lookup_n-D: '<S209>/Vector'
             */
            rtb_VariantMerge_For_Variant_Source_VS5 = look1_iflf_binlca_16a
                (tmpRead_b, ((const float32 *)&(KxCCTR_v_CcTapCtrlSpdIncSport[0])),
                 ((const float32 *)&(KtCCTR_v_CcTapCtrlSpdIncSport[0])), 6U);

            /* VariantMerge generated from: '<S188>/VS1' incorporates:
             *  Abs: '<S194>/Abs'
             *  Lookup_n-D: '<S207>/Vector'
             */
            rtb_VariantMerge_For_Variant_Source_VS1 = look1_iflf_binlca_16a
                (rtb_selectsetffpower, ((const float32 *)
                  &(KxCCTR_v_CcTapCtrlSpdDecSport[0])), ((const float32 *)
                  &(KtCCTR_v_CcTapCtrlSpdDecSport[0])), 2U);
        }

        /* End of Switch: '<S194>/Switch' */
    }
    else if (VeCCTR_b_CcResumeModeLatch)
    {
        /* Switch: '<S194>/Switch1' incorporates:
         *  Inport: '<S24>/CanSigVehSpd'
         *  Lookup_n-D: '<S204>/Vector'
         *  VariantMerge generated from: '<S188>/VS5'
         */
        rtb_VariantMerge_For_Variant_Source_VS5 = look1_iflf_binlca_16a
            (tmpRead_b, ((const float32 *)&(KxCCTR_v_CcResumeCtrlSpdInc[0])), ((
               const float32 *)&(KtCCTR_v_CcResumeCtrlSpdInc[0])), 6U);

        /* Switch: '<S194>/Switch2' incorporates:
         *  Abs: '<S194>/Abs'
         *  Lookup_n-D: '<S202>/Vector'
         *  VariantMerge generated from: '<S188>/VS1'
         */
        rtb_VariantMerge_For_Variant_Source_VS1 = look1_iflf_binlca_16a
            (rtb_selectsetffpower, ((const float32 *)
              &(KxCCTR_v_CcResumeCtrlSpdDec[0])), ((const float32 *)
              &(KtCCTR_v_CcResumeCtrlSpdDec[0])), 2U);
    }
    else
    {
        /* VariantMerge generated from: '<S188>/VS5' incorporates:
         *  Inport: '<S24>/CanSigVehSpd'
         *  Lookup_n-D: '<S208>/Vector'
         *  Switch: '<S194>/Switch1'
         */
        rtb_VariantMerge_For_Variant_Source_VS5 = look1_iflf_binlca_16a
            (tmpRead_b, ((const float32 *)&(KxCCTR_v_CcTapCtrlSpdInc[0])), ((
               const float32 *)&(KtCCTR_v_CcTapCtrlSpdInc[0])), 6U);

        /* VariantMerge generated from: '<S188>/VS1' incorporates:
         *  Abs: '<S194>/Abs'
         *  Lookup_n-D: '<S206>/Vector'
         *  Switch: '<S194>/Switch2'
         */
        rtb_VariantMerge_For_Variant_Source_VS1 = look1_iflf_binlca_16a
            (rtb_selectsetffpower, ((const float32 *)&(KxCCTR_v_CcTapCtrlSpdDec
               [0])), ((const float32 *)&(KtCCTR_v_CcTapCtrlSpdDec[0])), 2U);
    }

    /* End of Outputs for SubSystem: '<S1>/CruiseCANState' */
#endif

    /* End of Switch: '<S193>/Switch' */

    /* MinMax: '<S171>/MinMax1' incorporates:
     *  Constant: '<S190>/Calib'
     *  Sum: '<S171>/CC_CNTRL_SPD_CST_80'
     */
    VeCCTR_v_CcCntrlSpdCoast = fmaxf(VeCCTR_v_CcMinSetSpd,
        VeCCTR_v_CcCntrlSpdPreRamp - KeCCTR_v_CcCoastCntrlSpdDec);

    /* Switch: '<S171>/Switch1' incorporates:
     *  RelationalOperator: '<S171>/FixPt Relational Operator'
     */
    if (VeCCTR_v_SetSpdUnbiasedPID_KPH > rtb_switch)
    {
        /* Switch: '<S171>/Switch1' incorporates:
         *  MinMax: '<S171>/min '
         *  Sum: '<S171>/Sum1'
         */
        VeCCTR_v_CcCntrlSpdRmpd = fminf(rtb_VariantMerge_For_Variant_Source_VS5
            + VeCCTR_v_CcCntrlSpdPreRamp, VeCCTR_v_SetSpdUnbiasedPID_KPH);
    }
    else
    {
        /* Switch: '<S171>/Switch1' incorporates:
         *  Constant: '<S171>/Constant Value'
         *  MinMax: '<S171>/max'
         *  MinMax: '<S171>/max1'
         *  Sum: '<S171>/Sum2'
         */
        VeCCTR_v_CcCntrlSpdRmpd = fmaxf(VeCCTR_v_SetSpdUnbiasedPID_KPH,
            VeCCTR_v_CcCntrlSpdPreRamp - fmaxf
            (rtb_VariantMerge_For_Variant_Source_VS1, 0.0F));
    }

    /* End of Switch: '<S171>/Switch1' */
    /* End of Outputs for SubSystem: '<S80>/SetPoint_Rampng' */
    /* End of Outputs for SubSystem: '<S26>/CC_Set_Point' */

    /* Outputs for Atomic SubSystem: '<S26>/CC_VehWhlPwr' */
    /* Outputs for Atomic SubSystem: '<S81>/VehSpd_Calc' */
    /* Switch: '<S232>/Switch' incorporates:
     *  Constant: '<S244>/Calib'
     *  Constant: '<S245>/Calib'
     *  Constant: '<S246>/Calib'
     *  RelationalOperator: '<S232>/Relational Operator'
     *  UnitDelay: '<S232>/Unit Delay'
     */
    if (CCTR_ac_DW.UnitDelay_DSTATE_a >= KeCCTR_v_CcVehSpdResolutionThres)
    {
        rtb_selectsetffpower = KeCCTR_k_CcHiSpdFltrConst;
    }
    else
    {
        rtb_selectsetffpower = KeCCTR_k_CcLowSpdFltrConst;
    }

    /* End of Switch: '<S232>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outputs for Atomic SubSystem: '<S232>/Digital Lowpass Reset Enabled' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CruiseCANState'
     */
    /* Switch: '<S243>/Switch1' incorporates:
     *  Inport: '<S24>/CanSigVehSpd'
     *  Product: '<S243>/Multiplication'
     *  Sum: '<S243>/Subtraction'
     *  Sum: '<S243>/Summation'
     *  UnitDelay: '<S243>/Unit Delay'
     *  UnitDelay: '<S26>/Unit Delay'
     */
    CCTR_ac_DW.UnitDelay_DSTATE = ((tmpRead_b - CCTR_ac_DW.UnitDelay_DSTATE_n) *
        rtb_selectsetffpower) + CCTR_ac_DW.UnitDelay_DSTATE_n;

    /* Update for UnitDelay: '<S243>/Unit Delay' incorporates:
     *  UnitDelay: '<S26>/Unit Delay'
     */
    CCTR_ac_DW.UnitDelay_DSTATE_n = CCTR_ac_DW.UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S232>/Digital Lowpass Reset Enabled' */

    /* Update for UnitDelay: '<S232>/Unit Delay' incorporates:
     *  UnitDelay: '<S26>/Unit Delay'
     */
    CCTR_ac_DW.UnitDelay_DSTATE_a = CCTR_ac_DW.UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S81>/VehSpd_Calc' */

    /* Outputs for Atomic SubSystem: '<S81>/EdgeFalling' */
    /* Logic: '<S229>/AND' incorporates:
     *  Logic: '<S229>/OR1'
     *  UnitDelay: '<S229>/Unit Delay'
     */
    rtb_UnitDelay5_o = ((!VeCCTR_b_CcSetMode) &&
                        (CCTR_ac_DW.UnitDelay_DSTATE_mct));

    /* Update for UnitDelay: '<S229>/Unit Delay' */
    CCTR_ac_DW.UnitDelay_DSTATE_mct = VeCCTR_b_CcSetMode;

    /* End of Outputs for SubSystem: '<S81>/EdgeFalling' */

    /* Switch: '<S81>/FixPt Switch6' incorporates:
     *  Constant: '<S231>/Calib'
     */
    if (!KeCCTR_b_IResetSetMdDelay)
    {
        /* Switch: '<S81>/FixPt Switch6' */
        rtb_UnitDelay5_o = VeCCTR_b_CcSetMode;
    }

    /* End of Switch: '<S81>/FixPt Switch6' */

    /* Outputs for Atomic SubSystem: '<S81>/CC_Error_Calc' */
    /* Outputs for Atomic SubSystem: '<S228>/Error_Filtering' */
    /* Outputs for Atomic SubSystem: '<S233>/EdgeFalling' */
    /* Logic: '<S235>/AND' incorporates:
     *  UnitDelay: '<S235>/Unit Delay'
     */
    rtb_Switch_p = (rtb_OR1_i2b && (CCTR_ac_DW.UnitDelay_DSTATE_lm));

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CruiseCANState'
     */
    /* Update for UnitDelay: '<S235>/Unit Delay' incorporates:
     *  Inport: '<S24>/VeDTRR_b_PtcPdlInChrgVsCC'
     */
    CCTR_ac_DW.UnitDelay_DSTATE_lm = tmpRead_0;

    /* End of Outputs for SubSystem: '<S233>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S233>/Digital Lowpass Reset Enabled' */
    /* Switch: '<S234>/Switch1' incorporates:
     *  Constant: '<S233>/ 2'
     *  Constant: '<S238>/Calib'
     *  Inport: '<S24>/CanSigVehSpd'
     *  Logic: '<S233>/Logical Operator10'
     *  Logic: '<S233>/Logical Operator2'
     *  Product: '<S234>/Multiplication'
     *  RelationalOperator: '<S233>/Relational Operator'
     *  Sum: '<S228>/sum'
     *  Sum: '<S234>/Subtraction'
     *  Sum: '<S234>/Summation'
     *  Switch: '<S233>/Switch'
     *  UnitDelay: '<S233>/Unit Delay'
     */
    if (((!CCTR_ac_DW.UnitDelay_DSTATE_ae) || rtb_UnitDelay5_o) || rtb_Switch_p)
    {
        CCTR_ac_DW.UnitDelay_DSTATE_k = 0.0F;
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S1>/CruiseCANState' */
        if (tmpRead_b >= KeCCTR_v_CcVehSpdErrFltCnstThres)
        {
            /* Switch: '<S233>/Switch' incorporates:
             *  Constant: '<S236>/Calib'
             */
            rtb_selectsetffpower = KeCCTR_k_CcVehSpdErrHiSpdFltCnst;
        }
        else
        {
            /* Switch: '<S233>/Switch' incorporates:
             *  Constant: '<S237>/Calib'
             */
            rtb_selectsetffpower = KeCCTR_k_CcVehSpdErrLoSpdFltCnst;
        }

        CCTR_ac_DW.UnitDelay_DSTATE_k += ((rtb_switch - tmpRead_b) -
            CCTR_ac_DW.UnitDelay_DSTATE_k) * rtb_selectsetffpower;

        /* End of Outputs for SubSystem: '<S1>/CruiseCANState' */
    }

    /* End of Switch: '<S234>/Switch1' */
    /* End of Outputs for SubSystem: '<S233>/Digital Lowpass Reset Enabled' */
    /* End of Outputs for SubSystem: '<S228>/Error_Filtering' */

    /* Sum: '<S228>/Sum1' incorporates:
     *  UnitDelay: '<S26>/Unit Delay'
     */
    rtb_selectsetffpower = rtb_switch - CCTR_ac_DW.UnitDelay_DSTATE;

    /* Switch: '<S228>/switch' incorporates:
     *  Switch: '<S228>/switch1'
     */
    if (CCTR_ac_DW.UnitDelay_DSTATE_ae)
    {
        /* Switch: '<S228>/switch' incorporates:
         *  UnitDelay: '<S233>/Unit Delay'
         */
        VeCCTR_v_CcVehSpdErr = CCTR_ac_DW.UnitDelay_DSTATE_k;

        /* Switch: '<S228>/switch1' incorporates:
         *  Constant: '<S228>/Constant Value1'
         *  MinMax: '<S228>/max2'
         *  Product: '<S228>/divide'
         *  Sum: '<S228>/Sum2'
         *  UnitDelay: '<S228>/Unit Delay1'
         */
        VeCCTR_v_CcDerivVehSpdErr = fmaxf((rtb_selectsetffpower -
            CCTR_ac_DW.UnitDelay1_DSTATE_j) /
            CCTR_ac_B.OutportBufferForVeCCTR_t_CCTR_dT, 0.1F);
    }
    else
    {
        /* Switch: '<S228>/switch' incorporates:
         *  Constant: '<S228>/zero'
         */
        VeCCTR_v_CcVehSpdErr = 0.0F;

        /* Switch: '<S228>/switch1' incorporates:
         *  Constant: '<S228>/zero1'
         */
        VeCCTR_v_CcDerivVehSpdErr = 0.0F;
    }

    /* End of Switch: '<S228>/switch' */

    /* Update for UnitDelay: '<S228>/Unit Delay1' */
    CCTR_ac_DW.UnitDelay1_DSTATE_j = rtb_selectsetffpower;

    /* End of Outputs for SubSystem: '<S81>/CC_Error_Calc' */

    /* Outputs for Atomic SubSystem: '<S81>/I_Term_Reset' */
    /* Outputs for Atomic SubSystem: '<S230>/EdgeFalling' */
    /* Logic: '<S239>/AND' incorporates:
     *  UnitDelay: '<S239>/Unit Delay'
     */
    rtb_Switch_p = (rtb_AND_ge && (CCTR_ac_DW.UnitDelay_DSTATE_mc));

    /* Update for UnitDelay: '<S239>/Unit Delay' */
    CCTR_ac_DW.UnitDelay_DSTATE_mc = VeCCTR_b_CcCoastMode;

    /* End of Outputs for SubSystem: '<S230>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S230>/EdgeFalling1' */
    /* Logic: '<S240>/AND' incorporates:
     *  UnitDelay: '<S240>/Unit Delay'
     */
    rtb_VariantMerge_For_Variant_Source_VS3 = (rtb_OR1_i2b &&
        (CCTR_ac_DW.UnitDelay_DSTATE_mn));

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CruiseCANState'
     */
    /* Update for UnitDelay: '<S240>/Unit Delay' incorporates:
     *  Inport: '<S24>/VeDTRR_b_PtcPdlInChrgVsCC'
     */
    CCTR_ac_DW.UnitDelay_DSTATE_mn = tmpRead_0;

    /* End of Outputs for SubSystem: '<S230>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S230>/EdgeRising1' */
    /* Logic: '<S241>/OR1' incorporates:
     *  UnitDelay: '<S241>/Unit Delay'
     */
    rtb_VariantMerge_For_Variant_Source_VS4 = !CCTR_ac_DW.UnitDelay_DSTATE_b;

    /* Update for UnitDelay: '<S241>/Unit Delay' */
    CCTR_ac_DW.UnitDelay_DSTATE_b = VeCCTR_b_CcResumeMode;

    /* End of Outputs for SubSystem: '<S230>/EdgeRising1' */

    /* Switch: '<S230>/FixPt Switch6' incorporates:
     *  Constant: '<S242>/Calib'
     *  Logic: '<S230>/Logical Operator1'
     */
    if (KeCCTR_b_IResetInhResCoast)
    {
        rtb_Switch_p = (rtb_OR1_fz && rtb_Switch_p);
    }

    /* Outputs for Atomic SubSystem: '<S230>/EdgeRising1' */
    /* Logic: '<S230>/or' incorporates:
     *  Logic: '<S241>/AND'
     */
    VeCCTR_b_CcIReset = (((rtb_UnitDelay5_o || ((VeCCTR_b_CcResumeMode) &&
                            rtb_VariantMerge_For_Variant_Source_VS4)) ||
                          rtb_Switch_p) ||
                         rtb_VariantMerge_For_Variant_Source_VS3);

    /* End of Outputs for SubSystem: '<S230>/EdgeRising1' */
    /* End of Outputs for SubSystem: '<S81>/I_Term_Reset' */
    /* End of Outputs for SubSystem: '<S26>/CC_VehWhlPwr' */

    /* Outputs for Atomic SubSystem: '<S23>/Cc_DesiredTrq' */
    /* Outputs for Atomic SubSystem: '<S25>/Vehicle_Accel' */
    /* Outputs for Atomic SubSystem: '<S38>/Digital Lowpass Reset Enabled' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CruiseCANState'
     */
    /* Switch: '<S77>/Switch1' incorporates:
     *  Constant: '<S38>/Constant Value1'
     *  Constant: '<S78>/Calib'
     *  Inport: '<S24>/CanSigVehSpd'
     *  MinMax: '<S38>/max2'
     *  Product: '<S38>/Product1'
     *  Product: '<S77>/Multiplication'
     *  Sum: '<S38>/Sum2'
     *  Sum: '<S77>/Subtraction'
     *  Sum: '<S77>/Summation'
     *  UnitDelay: '<S38>/Unit Delay2'
     *  UnitDelay: '<S77>/Unit Delay'
     */
    VeCCTR_a_CcVehAccelMS2 = ((fmaxf((tmpRead_b - CCTR_ac_DW.UnitDelay2_DSTATE_h)
        / CCTR_ac_B.OutportBufferForVeCCTR_t_CCTR_dT, 0.1F) -
        VeCCTR_a_CcVehAccelMS2) * KeCCTR_k_CcAccFltrConst) +
        VeCCTR_a_CcVehAccelMS2;

    /* End of Outputs for SubSystem: '<S38>/Digital Lowpass Reset Enabled' */

    /* Update for UnitDelay: '<S38>/Unit Delay2' incorporates:
     *  Inport: '<S24>/CanSigVehSpd'
     */
    CCTR_ac_DW.UnitDelay2_DSTATE_h = tmpRead_b;

    /* End of Outputs for SubSystem: '<S25>/Vehicle_Accel' */

    /* Outputs for Atomic SubSystem: '<S25>/Feedforward' */
    /* Lookup_n-D: '<S73>/Vector' incorporates:
     *  Switch: '<S170>/switch'
     */
    VeCCTR_P_CcRoadLoadFfPwrTbl = look1_iflf_binlca_16a(rtb_switch, ((const
        float32 *)&(KxCCTR_P_CcRoadLoadFfPwrTbl[0])), ((const float32 *)
        &(KtCCTR_P_CcRoadLoadFfPwrTbl[0])), 16U);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outputs for Atomic SubSystem: '<S37>/I_Term_Feedforwrd' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CruiseCANState'
     */
    /* Product: '<S72>/Product1' incorporates:
     *  Constant: '<S75>/Calib'
     *  Inport: '<S24>/CanSigVehSpd'
     *  Inport: '<S24>/VeAXLR_M_ActualOutputTorque'
     */
    VeCCTR_P_PtcFinalDrivePwr = (KeCCTR_K_PtcWhlTrqToPwrFctr * tmpRead_b) *
        tmpRead_4;

    /* Switch: '<S72>/select set ff power' incorporates:
     *  Inport: '<S24>/VeDTRR_P_PtcPdlPwrReq'
     *  MinMax: '<S72>/Initial Guess'
     */
    rtb_selectsetffpower = fmaxf(rtb_sum2, VeCCTR_P_PtcFinalDrivePwr);

    /* Sum: '<S72>/CC_ACC_MOD_SET_FF' incorporates:
     *  Constant: '<S74>/Calib'
     *  Product: '<S72>/Product'
     */
    VeCCTR_P_CcAccModSetFF = rtb_selectsetffpower -
        (KeCCTR_K_CcSetAccelerationGain * VeCCTR_a_CcVehAccelMS2);

    /* Switch: '<S72>/select set ff power' incorporates:
     *  Constant: '<S76>/Calib'
     *  RelationalOperator: '<S72>/Relational Operator'
     */
    if (VeCCTR_a_CcVehAccelMS2 >= KeCCTR_a_CcSetAccelerationThres)
    {
        /* Switch: '<S72>/select set ff power' */
        rtb_selectsetffpower = VeCCTR_P_CcAccModSetFF;
    }

    /* End of Switch: '<S72>/select set ff power' */

    /* Sum: '<S72>/CC_I_TERM_FF_PWR' */
    VeCCTR_P_CcITermFFPwr = rtb_selectsetffpower - VeCCTR_P_CcRoadLoadFfPwrTbl;

    /* End of Outputs for SubSystem: '<S37>/I_Term_Feedforwrd' */
    /* End of Outputs for SubSystem: '<S25>/Feedforward' */

    /* Outputs for Enabled SubSystem: '<S25>/CcClosdLoop_PID' incorporates:
     *  EnablePort: '<S36>/CC_ENGAGED'
     */
    if (CCTR_ac_DW.UnitDelay_DSTATE_ae)
    {
        /* Outputs for Atomic SubSystem: '<S36>/AccelRes_Blend' */
        /* Switch: '<S39>/isw' incorporates:
         *  Constant: '<S47>/Calib'
         *  Logic: '<S39>/FixPt Logical Operator3'
         *  Product: '<S39>/negate'
         *  Switch: '<S39>/sw'
         */
        if ((VeCCTR_b_CcAccelMode) || (VeCCTR_b_CcResumGainBlndIncFlg))
        {
            /* Switch: '<S39>/sw' incorporates:
             *  Constant: '<S46>/Calib'
             *  Constant: '<S48>/Calib'
             */
            if (VeCCTR_b_CcAccelMode)
            {
                rtb_selectsetffpower = KeCCTR_K_CcAccGainBlndInc;
            }
            else
            {
                rtb_selectsetffpower = KeCCTR_K_CcResumGainBlndInc;
            }
        }
        else if (VeCCTR_b_CcAccelMode)
        {
            /* Switch: '<S39>/sw' incorporates:
             *  Constant: '<S45>/Calib'
             *  Product: '<S39>/negate'
             */
            rtb_selectsetffpower = -KeCCTR_K_CcAccGainBlndDec;
        }
        else
        {
            rtb_selectsetffpower = -KeCCTR_K_CcResumGainBlndDec;
        }

        /* End of Switch: '<S39>/isw' */

        /* Sum: '<S39>/sum2' incorporates:
         *  UnitDelay: '<S39>/Unit Delay'
         */
        rtb_sum2 = VeCCTR_K_CcResAccelGainBlnd + rtb_selectsetffpower;

        /* Outputs for Atomic SubSystem: '<S39>/Limiter1' */
        /* Switch: '<S49>/Switch1' incorporates:
         *  Constant: '<S39>/2'
         *  RelationalOperator: '<S49>/Relational Operator'
         */
        if (1.0F < rtb_sum2)
        {
            /* MinMax: '<S42>/Clip I3' */
            rtb_sum2 = 1.0F;
        }

        /* End of Switch: '<S49>/Switch1' */

        /* Switch: '<S49>/Switch' incorporates:
         *  Constant: '<S39>/3'
         *  RelationalOperator: '<S49>/Relational Operator1'
         */
        if (rtb_sum2 > 0.0F)
        {
            /* Switch: '<S49>/Switch' */
            VeCCTR_K_CcResAccelGainBlnd = rtb_sum2;
        }
        else
        {
            /* Switch: '<S49>/Switch' */
            VeCCTR_K_CcResAccelGainBlnd = 0.0F;
        }

        /* End of Switch: '<S49>/Switch' */
        /* End of Outputs for SubSystem: '<S39>/Limiter1' */
        /* End of Outputs for SubSystem: '<S36>/AccelRes_Blend' */

        /* Outputs for Atomic SubSystem: '<S36>/Tap_Blend' */
        /* Switch: '<S44>/isw' incorporates:
         *  Constant: '<S69>/Calib'
         *  Constant: '<S70>/Calib'
         *  Product: '<S44>/negate'
         */
        if (VeCCTR_b_CcTapMode)
        {
            rtb_selectsetffpower = KeCCTR_K_CcTapGainBlndInc;
        }
        else
        {
            rtb_selectsetffpower = -KeCCTR_K_CcTapGainBlndDec;
        }

        /* End of Switch: '<S44>/isw' */

        /* Sum: '<S44>/sum2' incorporates:
         *  UnitDelay: '<S44>/Unit Delay'
         */
        rtb_sum2 = VeCCTR_K_CcTapGainBlnd + rtb_selectsetffpower;

        /* Outputs for Atomic SubSystem: '<S44>/Limiter1' */
        /* Switch: '<S71>/Switch1' incorporates:
         *  Constant: '<S44>/2'
         *  RelationalOperator: '<S71>/Relational Operator'
         */
        if (1.0F < rtb_sum2)
        {
            /* MinMax: '<S42>/Clip I3' */
            rtb_sum2 = 1.0F;
        }

        /* End of Switch: '<S71>/Switch1' */

        /* Switch: '<S71>/Switch' incorporates:
         *  Constant: '<S44>/3'
         *  RelationalOperator: '<S71>/Relational Operator1'
         */
        if (rtb_sum2 > 0.0F)
        {
            /* Switch: '<S71>/Switch' */
            VeCCTR_K_CcTapGainBlnd = rtb_sum2;
        }
        else
        {
            /* Switch: '<S71>/Switch' */
            VeCCTR_K_CcTapGainBlnd = 0.0F;
        }

        /* End of Switch: '<S71>/Switch' */
        /* End of Outputs for SubSystem: '<S44>/Limiter1' */
        /* End of Outputs for SubSystem: '<S36>/Tap_Blend' */

        /* Outputs for Atomic SubSystem: '<S36>/CC_D_Gain' */
        /* Sum: '<S40>/sum cruise terms15' incorporates:
         *  Constant: '<S40>/one2'
         *  Constant: '<S40>/one3'
         *  Constant: '<S50>/Calib'
         *  Constant: '<S51>/Calib'
         *  Constant: '<S52>/Calib'
         *  Product: '<S40>/mult12'
         *  Product: '<S40>/mult13'
         *  Product: '<S40>/mult4'
         *  Product: '<S40>/mult5'
         *  Sum: '<S40>/sum cruise terms14'
         *  Sum: '<S40>/sum cruise terms6'
         *  Sum: '<S40>/sum cruise terms7'
         */
        VeCCTR_K_CcDGain = ((((1.0F - VeCCTR_K_CcResAccelGainBlnd) *
                              KeCCTR_K_CcDGainCal) + (KeCCTR_K_CcResumAccDGain *
                              VeCCTR_K_CcResAccelGainBlnd)) * (1.0F -
                             VeCCTR_K_CcTapGainBlnd)) + (KeCCTR_K_CcTapDGain *
            VeCCTR_K_CcTapGainBlnd);

        /* MinMax: '<S40>/Clip I4' incorporates:
         *  Constant: '<S53>/Calib'
         *  Constant: '<S54>/Calib'
         *  MinMax: '<S40>/Clip I3'
         *  Product: '<S40>/d calc'
         */
        VeCCTR_P_CcDTerm = fmaxf(fminf(VeCCTR_v_CcDerivVehSpdErr *
            VeCCTR_K_CcDGain, KeCCTR_P_CcDTermUpperLimit),
            KeCCTR_P_CcDTermLowerLimit);

        /* End of Outputs for SubSystem: '<S36>/CC_D_Gain' */

        /* Outputs for Atomic SubSystem: '<S36>/CC_I_Gain' */
        /* Outputs for Function Call SubSystem: '<S1>/CruiseCANState' */
        /* Logic: '<S41>/CC_CNTRLR_SAT1' incorporates:
         *  Constant: '<S41>/ZERO'
         *  Constant: '<S41>/ZERO1'
         *  Constant: '<S57>/Calib'
         *  Constant: '<S58>/Calib'
         *  Inport: '<S24>/VeDTRR_P_PtcPdlMaxPwr'
         *  Inport: '<S24>/VeDTRR_P_PtcPdlMinPwr'
         *  Logic: '<S41>/COND1'
         *  Logic: '<S41>/COND2'
         *  RelationalOperator: '<S41>/FixPt Relational Operator1'
         *  RelationalOperator: '<S41>/FixPt Relational Operator2'
         *  RelationalOperator: '<S41>/FixPt Relational Operator3'
         *  RelationalOperator: '<S41>/FixPt Relational Operator5'
         *  Sum: '<S41>/CC_MAX_PWR'
         *  Sum: '<S41>/CC_MIN_PWR'
         *  UnitDelay: '<S36>/FixPt Unit Delay'
         */
        VeCCTR_b_CcCntrlrSat = (((CCTR_ac_DW.FixPtUnitDelay_DSTATE >=
            (KeCCTR_P_CcMaxPwrOffset + tmpRead_3)) && (VeCCTR_v_CcVehSpdErr >=
            0.0F)) || ((VeCCTR_v_CcVehSpdErr <= 0.0F) &&
                       (CCTR_ac_DW.FixPtUnitDelay_DSTATE <=
                        (KeCCTR_P_CcMinPwrOffset + tmpRead_2))));

        /* End of Outputs for SubSystem: '<S1>/CruiseCANState' */

        /* Lookup_n-D: '<S62>/Vector' incorporates:
         *  Switch: '<S170>/switch'
         */
        VeCCTR_K_CcTapIGainTbl = look1_iflf_binlca_16a(rtb_switch, ((const
            float32 *)&(KxCCTR_K_CcTapIGainTbl[0])), ((const float32 *)
            &(KtCCTR_K_CcTapIGainTbl[0])), 9U);

        /* Lookup_n-D: '<S61>/Vector' incorporates:
         *  Switch: '<S170>/switch'
         */
        VeCCTR_K_CcResumAccIGainTbl = look1_iflf_binlca_16a(rtb_switch, ((const
            float32 *)&(KxCCTR_K_CcResumAccIGainTbl[0])), ((const float32 *)
            &(KtCCTR_K_CcResumAccIGainTbl[0])), 9U);

        /* Lookup_n-D: '<S60>/Vector' incorporates:
         *  Switch: '<S170>/switch'
         */
        VeCCTR_K_CcIGainTbl = look1_iflf_binlca_16a(rtb_switch, ((const float32 *)
            &(KxCCTR_K_CcIGainTbl[0])), ((const float32 *)&(KtCCTR_K_CcIGainTbl
            [0])), 9U);

        /* Sum: '<S41>/CC_I_GAIN' incorporates:
         *  Constant: '<S41>/one4'
         *  Constant: '<S41>/one5'
         *  Product: '<S41>/mult'
         *  Product: '<S41>/mult1'
         *  Product: '<S41>/mult10'
         *  Product: '<S41>/mult11'
         *  Sum: '<S41>/sum cruise terms12'
         *  Sum: '<S41>/sum cruise terms2'
         *  Sum: '<S41>/sum cruise terms3'
         */
        VeCCTR_K_CcIGain = ((((1.0F - VeCCTR_K_CcResAccelGainBlnd) *
                              VeCCTR_K_CcIGainTbl) +
                             (VeCCTR_K_CcResumAccIGainTbl *
                              VeCCTR_K_CcResAccelGainBlnd)) * (1.0F -
                             VeCCTR_K_CcTapGainBlnd)) + (VeCCTR_K_CcTapIGainTbl *
            VeCCTR_K_CcTapGainBlnd);

        /* Logic: '<S41>/Logical Operator19' incorporates:
         *  Logic: '<S41>/Logical Operator1'
         *  UnitDelay: '<S41>/Unit Delay'
         */
        VeCCTR_b_CcIHasbeenReset = ((VeCCTR_b_CcIReset) &&
            (!CCTR_ac_DW.UnitDelay_DSTATE_oe));

        /* Outputs for Atomic SubSystem: '<S41>/Signal Latch On With Reset' */
        /* Outputs for Function Call SubSystem: '<S1>/CruiseCANState' */
        /* Logic: '<S63>/OR1' incorporates:
         *  Abs: '<S41>/FixPt Abs1'
         *  Constant: '<S59>/Calib'
         *  Inport: '<S24>/VeDTRR_b_PtcPdlInChrgVsCC'
         *  Logic: '<S41>/FixPt Logical Operator2'
         *  Logic: '<S63>/NOT'
         *  Logic: '<S63>/OR'
         *  RelationalOperator: '<S41>/FixPt Relational Operator4'
         *  UnitDelay: '<S63>/Unit Delay'
         */
        VeCCTR_b_CcITermFrzDrvOvrrd = (tmpRead_0 || ((tmpRead_0 || (fabsf
            (VeCCTR_v_CcVehSpdErr) >= KeCCTR_v_CcIFrzVehSpdThres)) &&
            (VeCCTR_b_CcITermFrzDrvOvrrd)));

        /* End of Outputs for SubSystem: '<S1>/CruiseCANState' */
        /* End of Outputs for SubSystem: '<S41>/Signal Latch On With Reset' */

        /* Switch: '<S41>/x' incorporates:
         *  Logic: '<S41>/FixPt Logical Operator'
         *  Switch: '<S41>/x1'
         */
        if ((VeCCTR_b_CcITermFrzDrvOvrrd) || (VeCCTR_b_CcCntrlrSat))
        {
            /* Switch: '<S41>/x1' */
            if (VeCCTR_b_CcIHasbeenReset)
            {
                /* Switch: '<S41>/x' */
                VeCCTR_P_CcITerm = VeCCTR_P_CcITermFFPwr;
            }
        }
        else
        {
            if (VeCCTR_b_CcIHasbeenReset)
            {
                /* Switch: '<S41>/x1' */
                VeCCTR_P_CcITerm = VeCCTR_P_CcITermFFPwr;
            }

            /* Switch: '<S41>/x1' incorporates:
             *  Constant: '<S55>/Calib'
             *  Constant: '<S56>/Calib'
             *  MinMax: '<S41>/Clip I3'
             *  MinMax: '<S41>/Clip I4'
             *  Product: '<S41>/I gain * dlt T * err'
             *  Sum: '<S41>/Sum'
             *  Switch: '<S41>/x'
             */
            VeCCTR_P_CcITerm = fmaxf(fminf(((VeCCTR_v_CcVehSpdErr *
                VeCCTR_K_CcIGain) * CCTR_ac_B.OutportBufferForVeCCTR_t_CCTR_dT)
                + VeCCTR_P_CcITerm, KeCCTR_P_CcITermUpperLimit),
                KeCCTR_P_CcITermLowerLimit);
        }

        /* End of Switch: '<S41>/x' */

        /* Update for UnitDelay: '<S41>/Unit Delay' */
        CCTR_ac_DW.UnitDelay_DSTATE_oe = VeCCTR_b_CcIReset;

        /* End of Outputs for SubSystem: '<S36>/CC_I_Gain' */

        /* Outputs for Atomic SubSystem: '<S36>/CC_P_Gain' */
        /* Sum: '<S42>/CC_P_GAIN' incorporates:
         *  Constant: '<S42>/one1'
         *  Constant: '<S42>/one6'
         *  Lookup_n-D: '<S66>/Vector'
         *  Lookup_n-D: '<S67>/Vector'
         *  Lookup_n-D: '<S68>/Vector'
         *  Product: '<S42>/mult1'
         *  Product: '<S42>/mult2'
         *  Product: '<S42>/mult3'
         *  Product: '<S42>/mult8'
         *  Sum: '<S42>/sum cruise terms10'
         *  Sum: '<S42>/sum cruise terms4'
         *  Sum: '<S42>/sum cruise terms5'
         *  Switch: '<S170>/switch'
         */
        VeCCTR_K_CcPGain = ((((1.0F - VeCCTR_K_CcResAccelGainBlnd) *
                              look1_iflf_binlca_16a(rtb_switch, ((const float32 *)
                                &(KxCCTR_K_CcPGainTbl[0])), ((const float32 *)
                                &(KtCCTR_K_CcPGainTbl[0])), 9U)) +
                             (look1_iflf_binlca_16a(rtb_switch, ((const float32 *)
                                &(KxCCTR_K_CcResumAccPGainTbl[0])), ((const
            float32 *)&(KtCCTR_K_CcResumAccPGainTbl[0])), 9U) *
                              VeCCTR_K_CcResAccelGainBlnd)) * (1.0F -
                             VeCCTR_K_CcTapGainBlnd)) + (look1_iflf_binlca_16a
            (rtb_switch, ((const float32 *)&(KxCCTR_K_CcTapPGainTbl[0])), ((
            const float32 *)&(KtCCTR_K_CcTapPGainTbl[0])), 9U) *
            VeCCTR_K_CcTapGainBlnd);

        /* MinMax: '<S42>/Clip I4' incorporates:
         *  Constant: '<S64>/Calib'
         *  Constant: '<S65>/Calib'
         *  MinMax: '<S42>/Clip I3'
         *  Product: '<S42>/p calc'
         */
        VeCCTR_P_CcPTerm = fmaxf(fminf(VeCCTR_K_CcPGain * VeCCTR_v_CcVehSpdErr,
            KeCCTR_P_CcPTermUpperLimit), KeCCTR_P_CcPTermLowerLimit);

        /* End of Outputs for SubSystem: '<S36>/CC_P_Gain' */

        /* Sum: '<S43>/CC_PID_TERM' */
        CCTR_ac_B.CC_PID_TERM = (VeCCTR_P_CcITerm + VeCCTR_P_CcPTerm) +
            VeCCTR_P_CcDTerm;

        /* Outputs for Function Call SubSystem: '<S1>/CruiseCANState' */
        /* Switch: '<S43>/Switch' incorporates:
         *  Inport: '<S24>/VeDTRR_b_PtcPdlInChrgVsCC'
         *  UnitDelay: '<S43>/Unit Delay'
         */
        if (!tmpRead_0)
        {
            CCTR_ac_DW.UnitDelay_DSTATE_at = CCTR_ac_B.CC_PID_TERM;
        }

        /* End of Switch: '<S43>/Switch' */
        /* End of Outputs for SubSystem: '<S1>/CruiseCANState' */

        /* Sum: '<S43>/CC_DESIRED_PWR' incorporates:
         *  UnitDelay: '<S36>/FixPt Unit Delay'
         *  UnitDelay: '<S43>/Unit Delay'
         */
        CCTR_ac_DW.FixPtUnitDelay_DSTATE = CCTR_ac_DW.UnitDelay_DSTATE_at +
            VeCCTR_P_CcRoadLoadFfPwrTbl;
    }

    /* End of Outputs for SubSystem: '<S25>/CcClosdLoop_PID' */
    /* End of Outputs for SubSystem: '<S23>/Cc_DesiredTrq' */

    /* UnitDelay: '<S23>/Unit Delay5' */
    CCTR_ac_B.UnitDelay5 = CCTR_ac_DW.UnitDelay5_DSTATE_g;

    /* Update for UnitDelay: '<S26>/Unit Delay3' */
    CCTR_ac_DW.UnitDelay3_DSTATE = VeCCTR_v_SetSpdBiased;

    /* Update for UnitDelay: '<S26>/Unit Delay5' */
    CCTR_ac_DW.UnitDelay5_DSTATE = VeCCTR_b_CcCntrlSpdReset;

    /* Update for UnitDelay: '<S23>/Unit Delay5' */
    CCTR_ac_DW.UnitDelay5_DSTATE_g = VeCCTR_b_CcInhEnable;

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeCCTR_b_ACCTrqEnabled_BSMFA' incorporates:
     *  SignalConversion generated from: '<S1>/ACCTrqEnabled_BSMFA_out'
     */
    (void)Rte_Write_VeCCTR_b_ACCTrqEnabled_BSMFA_Value(Switch1);

    /* Outport: '<Root>/VeCCTR_b_ACCTrqEnabled_BSM' incorporates:
     *  SignalConversion generated from: '<S1>/ACCTrqEnabled_BSM_out'
     */
    (void)Rte_Write_VeCCTR_b_ACCTrqEnabled_BSM_Value(Switch);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CCTC'
     */
    /* Outputs for Atomic SubSystem: '<S26>/CC_EnabLogic' */
    /* Outputs for Atomic SubSystem: '<S79>/Calc_CcEnabled' */
    /* Outport: '<Root>/VeCCTR_b_CcLampSts' incorporates:
     *  Gain: '<S89>/Gain'
     *  SignalConversion generated from: '<S1>/CC_Cluster_LampSts'
     *  UnitDelay: '<S90>/Unit Delay'
     */
    (void)Rte_Write_VeCCTR_b_CcLampSts_Value(CCTR_ac_DW.UnitDelay_DSTATE_bz);

    /* End of Outputs for SubSystem: '<S79>/Calc_CcEnabled' */
    /* End of Outputs for SubSystem: '<S26>/CC_EnabLogic' */

    /* Outport: '<Root>/VeCCTR_v_CcCntrlSpd' incorporates:
     *  Gain: '<S33>/Gain'
     *  SignalConversion generated from: '<S1>/CC_Cntrl_Spd'
     */
    (void)Rte_Write_VeCCTR_v_CcCntrlSpd_Value(rtb_switch);

    /* Outputs for Atomic SubSystem: '<S26>/CC_Set_Point' */
    /* Outputs for Atomic SubSystem: '<S80>/CcSetPointCAN_Msg' */
    /* Switch: '<S168>/Switch11' incorporates:
     *  UnitDelay: '<S90>/Unit Delay'
     */
    if (CCTR_ac_DW.UnitDelay_DSTATE_bz)
    {
        /* Outputs for Function Call SubSystem: '<S1>/CruiseCANState' */
        /* Switch: '<S168>/Switch10' incorporates:
         *  Constant: '<S168>/Constant Value1'
         *  Inport: '<S24>/SpeedUnit'
         *  Product: '<S168>/Product1'
         *  Rounding: '<S168>/Rounding1'
         */
        if (tmpRead_c)
        {
            tmpRead_7 = roundf(1.609375F * VeCCTR_v_CcPreSetSpdCluster);
        }
        else
        {
            tmpRead_7 = VeCCTR_v_CcPreSetSpdCluster;
        }

        /* End of Switch: '<S168>/Switch10' */
        /* End of Outputs for SubSystem: '<S1>/CruiseCANState' */
    }

    /* End of Switch: '<S168>/Switch11' */
    /* End of Outputs for SubSystem: '<S80>/CcSetPointCAN_Msg' */
    /* End of Outputs for SubSystem: '<S26>/CC_Set_Point' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeCCTR_v_CcCntrlSpd_Cluster_KPH' incorporates:
     *  SignalConversion generated from: '<S1>/CC_CtrlSpd_Cluster_KPH'
     */
    (void)Rte_Write_VeCCTR_v_CcCntrlSpd_Cluster_KPH_Value(tmpRead_7);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CCTC'
     */
    /* Outputs for Atomic SubSystem: '<S26>/CC_Set_Point' */
    /* Outputs for Atomic SubSystem: '<S80>/CcSetPointCAN_Msg' */
    /* Switch: '<S168>/Switch7' incorporates:
     *  UnitDelay: '<S90>/Unit Delay'
     */
    if (CCTR_ac_DW.UnitDelay_DSTATE_bz)
    {
        /* Outputs for Function Call SubSystem: '<S1>/CruiseCANState' */
        /* Switch: '<S168>/Switch8' incorporates:
         *  Constant: '<S168>/Constant Value'
         *  Inport: '<S24>/SpeedUnit'
         *  Product: '<S168>/Product'
         *  Rounding: '<S168>/Rounding2'
         */
        if (tmpRead_c)
        {
            tmpRead_i = VeCCTR_v_CcPreSetSpdCluster;
        }
        else
        {
            tmpRead_i = roundf(0.621359229F * VeCCTR_v_CcPreSetSpdCluster);
        }

        /* End of Switch: '<S168>/Switch8' */
        /* End of Outputs for SubSystem: '<S1>/CruiseCANState' */
    }

    /* End of Switch: '<S168>/Switch7' */
    /* End of Outputs for SubSystem: '<S80>/CcSetPointCAN_Msg' */
    /* End of Outputs for SubSystem: '<S26>/CC_Set_Point' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeCCTR_v_CcCntrlSpd_Cluster_MPH' incorporates:
     *  SignalConversion generated from: '<S1>/CC_CtrlSpd_Cluster_MPH'
     */
    (void)Rte_Write_VeCCTR_v_CcCntrlSpd_Cluster_MPH_Value(tmpRead_i);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CCTC'
     */
    /* Outport: '<Root>/VeCCTR_P_CcDesiredPwr' incorporates:
     *  Gain: '<S35>/Gain'
     *  SignalConversion generated from: '<S1>/CC_DESIRED_PWR'
     *  UnitDelay: '<S36>/FixPt Unit Delay'
     */
    (void)Rte_Write_VeCCTR_P_CcDesiredPwr_Value(CCTR_ac_DW.FixPtUnitDelay_DSTATE);

    /* Outport: '<Root>/VeCCTR_b_CcEnabled' incorporates:
     *  Gain: '<S29>/Gain'
     *  SignalConversion generated from: '<S1>/CC_ENABLED'
     *  UnitDelay: '<S90>/Unit Delay'
     */
    (void)Rte_Write_VeCCTR_b_CcEnabled_Value(CCTR_ac_DW.UnitDelay_DSTATE_bz);

    /* Outport: '<Root>/VeCCTR_b_CcEngaged' incorporates:
     *  Gain: '<S27>/Gain'
     *  SignalConversion generated from: '<S1>/CC_ENGAGED'
     */
    (void)Rte_Write_VeCCTR_b_CcEngaged_Value(CCTR_ac_DW.UnitDelay_DSTATE_ae);

    /* Outport: '<Root>/VeCCTR_b_CcInhEngage' incorporates:
     *  Gain: '<S32>/Gain'
     *  SignalConversion generated from: '<S1>/CC_Inh_Engage'
     */
    (void)Rte_Write_VeCCTR_b_CcInhEngage_Value
        (rtb_VariantMerge_For_Variant_Source_VS_i);

    /* Outport: '<Root>/VeCCTR_P_CcPIDTerm' incorporates:
     *  Gain: '<S34>/Gain'
     *  SignalConversion generated from: '<S1>/CC_PID_TERM'
     */
    (void)Rte_Write_VeCCTR_P_CcPIDTerm_Value(CCTR_ac_B.CC_PID_TERM);

    /* Outport: '<Root>/VeCCTR_v_CcSetSpd' incorporates:
     *  Gain: '<S28>/Gain'
     *  SignalConversion generated from: '<S1>/CC_Set_Spd'
     */
    (void)Rte_Write_VeCCTR_v_CcSetSpd_Value(VeCCTR_v_SetSpdBiased);

    /* Outport: '<Root>/VeCCTR_v_CcVehSpd' incorporates:
     *  Gain: '<S31>/Gain'
     *  SignalConversion generated from: '<S1>/CC_Veh_Spd'
     *  UnitDelay: '<S26>/Unit Delay'
     */
    (void)Rte_Write_VeCCTR_v_CcVehSpd_Value(CCTR_ac_DW.UnitDelay_DSTATE);

    /* Outport: '<Root>/VeCCTR_e_ECMWARN' incorporates:
     *  Gain: '<S30>/Gain'
     *  SignalConversion generated from: '<S1>/ECM_WARN'
     *  UnitDelay: '<S84>/Unit Delay2'
     */
    (void)Rte_Write_VeCCTR_e_ECMWARN_Value(CCTR_ac_DW.UnitDelay2_DSTATE_j);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CruiseCANState'
     */
    /* Outport: '<Root>/VeCCTR_e_Lv1CrusCanState' incorporates:
     *  Gain: '<S268>/Gain'
     *  SignalConversion generated from: '<S1>/LV1_CRUS_CAN_STATE_out'
     */
    (void)Rte_Write_VeCCTR_e_Lv1CrusCanState_Value
        (VeCCTR_e_ActualLv1CrusCANState);

    /* Outport: '<Root>/VeCCTR_b_Lv1CrusSwStuckFailed' incorporates:
     *  Gain: '<S266>/Gain'
     *  SignalConversion generated from: '<S1>/LV1_CRUS_SW_STUCK_FAILED'
     */
    (void)Rte_Write_VeCCTR_b_Lv1CrusSwStuckFailed_Value
        (CCTR_ac_DW.UnitDelay1_DSTATE_kl);

    /* Outport: '<Root>/VeCCTR_b_Lv1CrusOffReq' incorporates:
     *  Gain: '<S267>/Gain'
     *  SignalConversion generated from: '<S1>/Lv1_Cruise_OFF_REQ_out'
     */
    (void)Rte_Write_VeCCTR_b_Lv1CrusOffReq_Value(VeCCTR_b_Lv1OffReq);

    /* Outport: '<Root>/VeCCTR_b_CcAccelSts' incorporates:
     *  Gain: '<S262>/Gain'
     *  SignalConversion generated from: '<S1>/VeCCTR_b_CcAccelSts'
     */
    (void)Rte_Write_VeCCTR_b_CcAccelSts_Value
        (rtb_TmpSignalConversionAtVeDFIR_b_PostCo);

    /* Outport: '<Root>/VeCCTR_b_CcCancelSw' incorporates:
     *  Gain: '<S264>/Gain'
     *  SignalConversion generated from: '<S1>/VeCCTR_b_CcCancelSw'
     */
    (void)Rte_Write_VeCCTR_b_CcCancelSw_Value(rtb_Logical1_mo);

    /* Outport: '<Root>/VeCCTR_b_CcDecelSts' incorporates:
     *  Gain: '<S263>/Gain'
     *  SignalConversion generated from: '<S1>/VeCCTR_b_CcDecelSts'
     */
    (void)Rte_Write_VeCCTR_b_CcDecelSts_Value
        (rtb_TmpSignalConversionAtVeDFIR_b_DsblDi);

    /* Outport: '<Root>/VeCCTR_b_CcResumeSw' incorporates:
     *  Gain: '<S265>/Gain'
     *  SignalConversion generated from: '<S1>/VeCCTR_b_CcResumeSw'
     */
    (void)Rte_Write_VeCCTR_b_CcResumeSw_Value(rtb_RelationalOperator3_l);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeCCTR_e_FaultSts_SpdCntrlSw' incorporates:
     *  Merge: '<S310>/Merge'
     *  SignalConversion generated from: '<S1>/VeCCTR_e_FaultSts_SpdCntrlSw'
     */
    (void)Rte_Write_VeCCTR_e_FaultSts_SpdCntrlSw_Value(Merge_c);

    /* Outport: '<Root>/VeCCTR_e_FaultSts_SpdCntrlSw1' incorporates:
     *  Merge: '<S282>/Merge'
     *  SignalConversion generated from: '<S1>/VeCCTR_e_FaultSts_SpdCntrlSw1'
     */
    (void)Rte_Write_VeCCTR_e_FaultSts_SpdCntrlSw1_Value(CCTR_ac_B.Merge_i);

    /* End of Outputs for SubSystem: '<Root>/CCTR_MedTEB' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_CCTR_3

FUNC(void, CCTR_CODE) FsftCCTR_M_ACCTrq_BSM(void)
{

#if Rte_SysCon_Variant_CCTR_3

    /* Outputs for Function Call SubSystem: '<Root>/FsftCCTR_M_ACCTrq_BSM' */
    /* Outport: '<Root>/VeCCTR_b_ACCTrq_BSMFA' incorporates:
     *  Chart: '<S4>/FsftCCTR_M_ACCTrq_BSMChrt'
     *  SignalConversion generated from: '<S4>/VeCCTR_b_ACCTrq_BSMFA'
     */
    /* Gateway: FsftCCTR_M_ACCTrq_BSM/FsftCCTR_M_ACCTrq_BSMChrt */
    /* During: FsftCCTR_M_ACCTrq_BSM/FsftCCTR_M_ACCTrq_BSMChrt */
    /* Entry Internal: FsftCCTR_M_ACCTrq_BSM/FsftCCTR_M_ACCTrq_BSMChrt */
    /* Transition: '<S366>:2' */
    (void)Rte_Write_VeCCTR_b_ACCTrq_BSMFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCCTR_M_ACCTrq_BSM' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_CCTR_3

FUNC(void, CCTR_CODE) FsftCCTR_b_ACCTrqEnabled_BSM(void)
{

#if Rte_SysCon_Variant_CCTR_3

    /* Outputs for Function Call SubSystem: '<Root>/FsftCCTR_b_ACCTrqEnabled_BSM' */
    /* Merge: '<Root>/Merge_9' incorporates:
     *  Chart: '<S5>/FsftCCTR_b_ACCTrqEnabled_BSMChrt'
     *  SignalConversion generated from: '<S5>/VeCCTR_b_ACCTrqEnabled_BSMFA'
     */
    /* Gateway: FsftCCTR_b_ACCTrqEnabled_BSM/FsftCCTR_b_ACCTrqEnabled_BSMChrt */
    /* During: FsftCCTR_b_ACCTrqEnabled_BSM/FsftCCTR_b_ACCTrqEnabled_BSMChrt */
    /* Entry Internal: FsftCCTR_b_ACCTrqEnabled_BSM/FsftCCTR_b_ACCTrqEnabled_BSMChrt */
    /* Transition: '<S367>:2' */
    Rte_IrvWrite_FsftCCTR_b_ACCTrqEnabled_BSM_ACC_TrqEnabled_BSMFA_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCCTR_b_ACCTrqEnabled_BSM' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_CCTR_3

FUNC(void, CCTR_CODE) FsftCCTR_b_CcAccelSts(void)
{

#if Rte_SysCon_Variant_CCTR_3

    /* Outputs for Function Call SubSystem: '<Root>/FsftCCTR_b_CcAccelSts' */
    /* Outport: '<Root>/VeCCTR_b_CcAccelStsFA' incorporates:
     *  Chart: '<S6>/FsftCCTR_b_CcAccelStsChrt'
     *  SignalConversion generated from: '<S6>/VeCCTR_b_CcAccelStsFA'
     */
    /* Gateway: FsftCCTR_b_CcAccelSts/FsftCCTR_b_CcAccelStsChrt */
    /* During: FsftCCTR_b_CcAccelSts/FsftCCTR_b_CcAccelStsChrt */
    /* Entry Internal: FsftCCTR_b_CcAccelSts/FsftCCTR_b_CcAccelStsChrt */
    /* Transition: '<S368>:2' */
    (void)Rte_Write_VeCCTR_b_CcAccelStsFA_Value(true);

    /* Merge: '<Root>/Merge_17_Irv' incorporates:
     *  Chart: '<S6>/FsftCCTR_b_CcAccelStsChrt'
     *  SignalConversion generated from: '<S6>/VeCCTR_b_CcAccelStsFA_write'
     */
    Rte_IrvWrite_FsftCCTR_b_CcAccelSts_CC_AccelStsFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCCTR_b_CcAccelSts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_CCTR_3

FUNC(void, CCTR_CODE) FsftCCTR_b_CcCancelSw(void)
{

#if Rte_SysCon_Variant_CCTR_3

    /* Outputs for Function Call SubSystem: '<Root>/FsftCCTR_b_CcCancelSw' */
    /* Outport: '<Root>/VeCCTR_b_CcCancelSwFA' incorporates:
     *  Chart: '<S7>/FsftCCTR_b_CcCancelSwChrt'
     *  SignalConversion generated from: '<S7>/VeCCTR_b_CcCancelSwFA'
     */
    /* Gateway: FsftCCTR_b_CcCancelSw/FsftCCTR_b_CcCancelSwChrt */
    /* During: FsftCCTR_b_CcCancelSw/FsftCCTR_b_CcCancelSwChrt */
    /* Entry Internal: FsftCCTR_b_CcCancelSw/FsftCCTR_b_CcCancelSwChrt */
    /* Transition: '<S369>:2' */
    (void)Rte_Write_VeCCTR_b_CcCancelSwFA_Value(true);

    /* Merge: '<Root>/Merge_18_Irv' incorporates:
     *  Chart: '<S7>/FsftCCTR_b_CcCancelSwChrt'
     *  SignalConversion generated from: '<S7>/VeCCTR_b_CcCancelSwFA_write'
     */
    Rte_IrvWrite_FsftCCTR_b_CcCancelSw_CC_CancelSwtchFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCCTR_b_CcCancelSw' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_CCTR_3

FUNC(void, CCTR_CODE) FsftCCTR_b_CcDecelSts(void)
{

#if Rte_SysCon_Variant_CCTR_3

    /* Outputs for Function Call SubSystem: '<Root>/FsftCCTR_b_CcDecelSts' */
    /* Outport: '<Root>/VeCCTR_b_CcDecelStsFA' incorporates:
     *  Chart: '<S8>/FsftCCTR_b_CcDecelStsChrt'
     *  SignalConversion generated from: '<S8>/VeCCTR_b_CcDecelStsFA'
     */
    /* Gateway: FsftCCTR_b_CcDecelSts/FsftCCTR_b_CcDecelStsChrt */
    /* During: FsftCCTR_b_CcDecelSts/FsftCCTR_b_CcDecelStsChrt */
    /* Entry Internal: FsftCCTR_b_CcDecelSts/FsftCCTR_b_CcDecelStsChrt */
    /* Transition: '<S370>:2' */
    (void)Rte_Write_VeCCTR_b_CcDecelStsFA_Value(true);

    /* Merge: '<Root>/Merge_4_Irv' incorporates:
     *  Chart: '<S8>/FsftCCTR_b_CcDecelStsChrt'
     *  SignalConversion generated from: '<S8>/VeCCTR_b_CcDecelStsFA_write'
     */
    Rte_IrvWrite_FsftCCTR_b_CcDecelSts_CC_CoastDecelStsFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCCTR_b_CcDecelSts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_CCTR_3

FUNC(void, CCTR_CODE) FsftCCTR_b_CcFailSts(void)
{

#if Rte_SysCon_Variant_CCTR_3

    /* Outputs for Function Call SubSystem: '<Root>/FsftCCTR_b_CcFailSts' */
    /* Outport: '<Root>/VeCCTR_b_CcFailStsFA' incorporates:
     *  Chart: '<S9>/FsftCCTR_b_CcFailStsChrt'
     *  SignalConversion generated from: '<S9>/VeCCTR_b_CcFailStsFA'
     */
    /* Gateway: FsftCCTR_b_CcFailSts/FsftCCTR_b_CcFailStsChrt */
    /* During: FsftCCTR_b_CcFailSts/FsftCCTR_b_CcFailStsChrt */
    /* Entry Internal: FsftCCTR_b_CcFailSts/FsftCCTR_b_CcFailStsChrt */
    /* Transition: '<S371>:2' */
    (void)Rte_Write_VeCCTR_b_CcFailStsFA_Value(true);

    /* Merge: '<Root>/Merge_7_Irv' incorporates:
     *  Chart: '<S9>/FsftCCTR_b_CcFailStsChrt'
     *  SignalConversion generated from: '<S9>/VeCCTR_b_CcFailStsFA_write'
     */
    Rte_IrvWrite_FsftCCTR_b_CcFailSts_CC_FailStsFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCCTR_b_CcFailSts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_CCTR_3

FUNC(void, CCTR_CODE) FsftCCTR_b_CcOnOffSts(void)
{

#if Rte_SysCon_Variant_CCTR_3

    /* Outputs for Function Call SubSystem: '<Root>/FsftCCTR_b_CcOnOffSts' */
    /* Outport: '<Root>/VeCCTR_b_CcOnOffStsFA' incorporates:
     *  Chart: '<S10>/FsftCCTR_b_CcOnOffStsChrt'
     *  SignalConversion generated from: '<S10>/VeCCTR_b_CcOnOffStsFA'
     */
    /* Gateway: FsftCCTR_b_CcOnOffSts/FsftCCTR_b_CcOnOffStsChrt */
    /* During: FsftCCTR_b_CcOnOffSts/FsftCCTR_b_CcOnOffStsChrt */
    /* Entry Internal: FsftCCTR_b_CcOnOffSts/FsftCCTR_b_CcOnOffStsChrt */
    /* Transition: '<S372>:2' */
    (void)Rte_Write_VeCCTR_b_CcOnOffStsFA_Value(true);

    /* Merge: '<Root>/Merge_3_Irv' incorporates:
     *  Chart: '<S10>/FsftCCTR_b_CcOnOffStsChrt'
     *  SignalConversion generated from: '<S10>/VeCCTR_b_CcOnOffStsFA_write'
     */
    Rte_IrvWrite_FsftCCTR_b_CcOnOffSts_CC_OnOffStsFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCCTR_b_CcOnOffSts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_CCTR_3

FUNC(void, CCTR_CODE) FsftCCTR_b_CcResumeSw(void)
{

#if Rte_SysCon_Variant_CCTR_3

    /* Outputs for Function Call SubSystem: '<Root>/FsftCCTR_b_CcResumeSw' */
    /* Outport: '<Root>/VeCCTR_b_CcResumeSwFA' incorporates:
     *  Chart: '<S11>/FsftCCTR_b_CcResumeSwChrt'
     *  SignalConversion generated from: '<S11>/VeCCTR_b_CcResumeSwFA'
     */
    /* Gateway: FsftCCTR_b_CcResumeSw/FsftCCTR_b_CcResumeSwChrt */
    /* During: FsftCCTR_b_CcResumeSw/FsftCCTR_b_CcResumeSwChrt */
    /* Entry Internal: FsftCCTR_b_CcResumeSw/FsftCCTR_b_CcResumeSwChrt */
    /* Transition: '<S373>:2' */
    (void)Rte_Write_VeCCTR_b_CcResumeSwFA_Value(true);

    /* Merge: '<Root>/Merge_5_Irv' incorporates:
     *  Chart: '<S11>/FsftCCTR_b_CcResumeSwChrt'
     *  SignalConversion generated from: '<S11>/VeCCTR_b_CcResumeSwFA_write'
     */
    Rte_IrvWrite_FsftCCTR_b_CcResumeSw_CC_ResumeSwtchFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCCTR_b_CcResumeSw' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_CCTR_3

FUNC(void, CCTR_CODE) FsftCCTR_b_CcSetSw(void)
{

#if Rte_SysCon_Variant_CCTR_3

    /* Outputs for Function Call SubSystem: '<Root>/FsftCCTR_b_CcSetSw' */
    /* Merge: '<Root>/Merge_6' incorporates:
     *  Chart: '<S12>/FsftCCTR_b_CcSetSwChrt'
     *  SignalConversion generated from: '<S12>/VeCCTR_b_CcSetSwFA_write'
     */
    /* Gateway: FsftCCTR_b_CcSetSw/FsftCCTR_b_CcSetSwChrt */
    /* During: FsftCCTR_b_CcSetSw/FsftCCTR_b_CcSetSwChrt */
    /* Entry Internal: FsftCCTR_b_CcSetSw/FsftCCTR_b_CcSetSwChrt */
    /* Transition: '<S374>:2' */
    Rte_IrvWrite_FsftCCTR_b_CcSetSw_CC_SetSwtchFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCCTR_b_CcSetSw' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_CCTR_3

FUNC(void, CCTR_CODE) PokeCCTR_M_ACCTrq_BSM(VAR(float32, AUTOMATIC)
    LeCCTR_M_ACCTrq_BSM, VAR(boolean, AUTOMATIC) LeCCTR_b_ACCTrq_BSMFA)
{

#if Rte_SysCon_Variant_CCTR_3

    boolean rtb_LeCCTR_b_ACCTrq_BSMFA_out_c;

#endif

#if !Rte_SysCon_Variant_CCTR_3

    UNUSED_PARAMETER(LeCCTR_M_ACCTrq_BSM);

#endif

#if !Rte_SysCon_Variant_CCTR_3

    UNUSED_PARAMETER(LeCCTR_b_ACCTrq_BSMFA);

#endif

#if Rte_SysCon_Variant_CCTR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeCCTR_M_ACCTrq_BSM' */
    /* Chart: '<S13>/PokeCCTR_M_ACCTrq_BSMChrt' incorporates:
     *  SignalConversion generated from: '<S13>/LeCCTR_M_ACCTrq_BSM'
     *  SignalConversion generated from: '<S13>/LeCCTR_b_ACCTrq_BSMFA'
     */
    /* Gateway: PokeCCTR_M_ACCTrq_BSM/PokeCCTR_M_ACCTrq_BSMChrt */
    /* During: PokeCCTR_M_ACCTrq_BSM/PokeCCTR_M_ACCTrq_BSMChrt */
    /* Entry Internal: PokeCCTR_M_ACCTrq_BSM/PokeCCTR_M_ACCTrq_BSMChrt */
    /* Transition: '<S375>:2' */
    if (!LeCCTR_b_ACCTrq_BSMFA)
    {
        /* Transition: '<S375>:3' */
        /* Transition: '<S375>:15' */
        CCTR_ac_B.LeCCTR_M_ACCTrq_BSM_out = LeCCTR_M_ACCTrq_BSM;
        rtb_LeCCTR_b_ACCTrq_BSMFA_out_c = false;

        /* Transition: '<S375>:18' */
    }
    else
    {
        /* Transition: '<S375>:4' */
        rtb_LeCCTR_b_ACCTrq_BSMFA_out_c = true;
    }

    /* End of Chart: '<S13>/PokeCCTR_M_ACCTrq_BSMChrt' */

    /* Outport: '<Root>/VeCCTR_M_ACCTrq_BSM' incorporates:
     *  SignalConversion generated from: '<S13>/VeCCTR_M_ACCTrq_BSM'
     */
    (void)Rte_Write_VeCCTR_M_ACCTrq_BSM_Value(CCTR_ac_B.LeCCTR_M_ACCTrq_BSM_out);

    /* Outport: '<Root>/VeCCTR_b_ACCTrq_BSMFA' incorporates:
     *  SignalConversion generated from: '<S13>/VeCCTR_b_ACCTrq_BSMFA'
     */
    (void)Rte_Write_VeCCTR_b_ACCTrq_BSMFA_Value(rtb_LeCCTR_b_ACCTrq_BSMFA_out_c);

    /* End of Outputs for SubSystem: '<Root>/PokeCCTR_M_ACCTrq_BSM' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_CCTR_3

FUNC(void, CCTR_CODE) PokeCCTR_b_ACCEngaged(VAR(boolean, AUTOMATIC)
    LeCCTR_b_ACCEngaged)
{
    UNUSED_PARAMETER(LeCCTR_b_ACCEngaged);
}

#endif

/* Output function */
#if Rte_SysCon_Variant_CCTR_3

FUNC(void, CCTR_CODE) PokeCCTR_b_ACCTrqEnabled_BSM(VAR(boolean, AUTOMATIC)
    LeCCTR_b_ACCTrqEnabled_BSM, VAR(boolean, AUTOMATIC)
    LeCCTR_b_ACCTrqEnabled_BSMFA)
{

#if Rte_SysCon_Variant_CCTR_3

    boolean rtb_LeCCTR_b_ACCTrqEnabled_BSMFA_out_p;

#endif

#if !Rte_SysCon_Variant_CCTR_3

    UNUSED_PARAMETER(LeCCTR_b_ACCTrqEnabled_BSM);

#endif

#if !Rte_SysCon_Variant_CCTR_3

    UNUSED_PARAMETER(LeCCTR_b_ACCTrqEnabled_BSMFA);

#endif

#if Rte_SysCon_Variant_CCTR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeCCTR_b_ACCTrqEnabled_BSM' */
    /* Chart: '<S15>/PokeCCTR_b_ACCTrqEnabled_BSMChrt' incorporates:
     *  SignalConversion generated from: '<S15>/LeCCTR_b_ACCTrqEnabled_BSMFA'
     *  SignalConversion generated from: '<S15>/LeCCTR_b_ACCTrqEnabled_BSM'
     */
    /* Gateway: PokeCCTR_b_ACCTrqEnabled_BSM/PokeCCTR_b_ACCTrqEnabled_BSMChrt */
    /* During: PokeCCTR_b_ACCTrqEnabled_BSM/PokeCCTR_b_ACCTrqEnabled_BSMChrt */
    /* Entry Internal: PokeCCTR_b_ACCTrqEnabled_BSM/PokeCCTR_b_ACCTrqEnabled_BSMChrt */
    /* Transition: '<S377>:2' */
    if (!LeCCTR_b_ACCTrqEnabled_BSMFA)
    {
        /* Transition: '<S377>:3' */
        /* Transition: '<S377>:15' */
        CCTR_ac_B.LeCCTR_b_ACCTrqEnabled_BSM_out = LeCCTR_b_ACCTrqEnabled_BSM;
        rtb_LeCCTR_b_ACCTrqEnabled_BSMFA_out_p = false;

        /* Transition: '<S377>:18' */
    }
    else
    {
        /* Transition: '<S377>:4' */
        rtb_LeCCTR_b_ACCTrqEnabled_BSMFA_out_p = true;
    }

    /* End of Chart: '<S15>/PokeCCTR_b_ACCTrqEnabled_BSMChrt' */

    /* Merge: '<Root>/Merge_9' incorporates:
     *  SignalConversion generated from: '<S15>/VeCCTR_b_ACCTrqEnabled_BSMFA'
     * */
    Rte_IrvWrite_PokeCCTR_b_ACCTrqEnabled_BSM_ACC_TrqEnabled_BSMFA_IRV
        (rtb_LeCCTR_b_ACCTrqEnabled_BSMFA_out_p);

    /* Merge: '<Root>/Merge_8' incorporates:
     *  SignalConversion generated from: '<S15>/VeCCTR_b_ACCTrqEnabled_BSM'
     * */
    Rte_IrvWrite_PokeCCTR_b_ACCTrqEnabled_BSM_ACC_TrqEnabled_BSM_IRV
        (CCTR_ac_B.LeCCTR_b_ACCTrqEnabled_BSM_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCCTR_b_ACCTrqEnabled_BSM' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_CCTR_3

FUNC(void, CCTR_CODE) PokeCCTR_b_CcAccelSts(VAR(boolean, AUTOMATIC)
    LeCCTR_b_CcAccelSts)
{

#if !Rte_SysCon_Variant_CCTR_3

    UNUSED_PARAMETER(LeCCTR_b_CcAccelSts);

#endif

#if Rte_SysCon_Variant_CCTR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeCCTR_b_CcAccelSts' */
    /* Outport: '<Root>/VeCCTR_b_CcAccelStsFA' incorporates:
     *  Chart: '<S16>/PokeCCTR_b_CcAccelStsChrt'
     *  SignalConversion generated from: '<S16>/VeCCTR_b_CcAccelSts_FA_Rst'
     */
    /* Gateway: PokeCCTR_b_CcAccelSts/PokeCCTR_b_CcAccelStsChrt */
    /* During: PokeCCTR_b_CcAccelSts/PokeCCTR_b_CcAccelStsChrt */
    /* Entry Internal: PokeCCTR_b_CcAccelSts/PokeCCTR_b_CcAccelStsChrt */
    /* Transition: '<S378>:2' */
    (void)Rte_Write_VeCCTR_b_CcAccelStsFA_Value(false);

    /* Merge: '<Root>/Merge_17_Irv' incorporates:
     *  Chart: '<S16>/PokeCCTR_b_CcAccelStsChrt'
     *  SignalConversion generated from: '<S16>/VeCCTR_b_CcAccelSts_FA_Rst_write'
     */
    Rte_IrvWrite_PokeCCTR_b_CcAccelSts_CC_AccelStsFA_write_IRV(false);

    /* Merge: '<Root>/Merge_2' incorporates:
     *  SignalConversion generated from: '<S16>/LeCCTR_b_CcAccelSts'
     *  SignalConversion generated from: '<S16>/VeCCTR_b_CcAccelSts_write'
     */
    Rte_IrvWrite_PokeCCTR_b_CcAccelSts_CC_Accel_Sts_write_IRV
        (LeCCTR_b_CcAccelSts);

    /* End of Outputs for SubSystem: '<Root>/PokeCCTR_b_CcAccelSts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_CCTR_3

FUNC(void, CCTR_CODE) PokeCCTR_b_CcCancelSw(VAR(boolean, AUTOMATIC)
    LeCCTR_b_CcCancelSw)
{

#if !Rte_SysCon_Variant_CCTR_3

    UNUSED_PARAMETER(LeCCTR_b_CcCancelSw);

#endif

#if Rte_SysCon_Variant_CCTR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeCCTR_b_CcCancelSw' */
    /* Outport: '<Root>/VeCCTR_b_CcCancelSwFA' incorporates:
     *  Chart: '<S17>/PokeCCTR_b_CcCancelSwChrt'
     *  SignalConversion generated from: '<S17>/VeCCTR_b_CcCancelSw_FA_Rst'
     */
    /* Gateway: PokeCCTR_b_CcCancelSw/PokeCCTR_b_CcCancelSwChrt */
    /* During: PokeCCTR_b_CcCancelSw/PokeCCTR_b_CcCancelSwChrt */
    /* Entry Internal: PokeCCTR_b_CcCancelSw/PokeCCTR_b_CcCancelSwChrt */
    /* Transition: '<S379>:2' */
    (void)Rte_Write_VeCCTR_b_CcCancelSwFA_Value(false);

    /* Merge: '<Root>/Merge_18_Irv' incorporates:
     *  Chart: '<S17>/PokeCCTR_b_CcCancelSwChrt'
     *  SignalConversion generated from: '<S17>/VeCCTR_b_CcCancelSw_FA_Rst_write'
     */
    Rte_IrvWrite_PokeCCTR_b_CcCancelSw_CC_CancelSwtchFA_write_IRV(false);

    /* Merge: '<Root>/Merge_11' incorporates:
     *  SignalConversion generated from: '<S17>/LeCCTR_b_CcCancelSw'
     *  SignalConversion generated from: '<S17>/VeCCTR_b_CcCancelSw_write'
     */
    Rte_IrvWrite_PokeCCTR_b_CcCancelSw_CC_Cancel_Swtch_write_IRV
        (LeCCTR_b_CcCancelSw);

    /* End of Outputs for SubSystem: '<Root>/PokeCCTR_b_CcCancelSw' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_CCTR_3

FUNC(void, CCTR_CODE) PokeCCTR_b_CcDecelSts(VAR(boolean, AUTOMATIC)
    LeCCTR_b_CcDecelSts)
{

#if !Rte_SysCon_Variant_CCTR_3

    UNUSED_PARAMETER(LeCCTR_b_CcDecelSts);

#endif

#if Rte_SysCon_Variant_CCTR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeCCTR_b_CcDecelSts' */
    /* Outport: '<Root>/VeCCTR_b_CcDecelStsFA' incorporates:
     *  Chart: '<S18>/PokeCCTR_b_CcDecelStsChrt'
     *  SignalConversion generated from: '<S18>/VeCCTR_b_CcDecelSts_FA_Rst'
     */
    /* Gateway: PokeCCTR_b_CcDecelSts/PokeCCTR_b_CcDecelStsChrt */
    /* During: PokeCCTR_b_CcDecelSts/PokeCCTR_b_CcDecelStsChrt */
    /* Entry Internal: PokeCCTR_b_CcDecelSts/PokeCCTR_b_CcDecelStsChrt */
    /* Transition: '<S380>:2' */
    (void)Rte_Write_VeCCTR_b_CcDecelStsFA_Value(false);

    /* Merge: '<Root>/Merge_4_Irv' incorporates:
     *  Chart: '<S18>/PokeCCTR_b_CcDecelStsChrt'
     *  SignalConversion generated from: '<S18>/VeCCTR_b_CcDecelSts_FA_Rst_write'
     */
    Rte_IrvWrite_PokeCCTR_b_CcDecelSts_CC_CoastDecelStsFA_write_IRV(false);

    /* Merge: '<Root>/Merge_13' incorporates:
     *  SignalConversion generated from: '<S18>/LeCCTR_b_CcDecelSts'
     *  SignalConversion generated from: '<S18>/VeCCTR_b_CcDecelSts_write'
     */
    Rte_IrvWrite_PokeCCTR_b_CcDecelSts_CC_CoastDecelSts_write_IRV
        (LeCCTR_b_CcDecelSts);

    /* End of Outputs for SubSystem: '<Root>/PokeCCTR_b_CcDecelSts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_CCTR_3

FUNC(void, CCTR_CODE) PokeCCTR_b_CcFailSts(VAR(boolean, AUTOMATIC)
    LeCCTR_b_CcFailSts)
{

#if !Rte_SysCon_Variant_CCTR_3

    UNUSED_PARAMETER(LeCCTR_b_CcFailSts);

#endif

#if Rte_SysCon_Variant_CCTR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeCCTR_b_CcFailSts' */
    /* Outport: '<Root>/VeCCTR_b_CcFailSts' incorporates:
     *  SignalConversion generated from: '<S19>/VeCCTR_b_CcFailSts'
     *  SignalConversion generated from: '<S19>/LeCCTR_b_CcFailSts'
     */
    /* Gateway: PokeCCTR_b_CcFailSts/PokeCCTR_b_CcFailStsChrt */
    /* During: PokeCCTR_b_CcFailSts/PokeCCTR_b_CcFailStsChrt */
    /* Entry Internal: PokeCCTR_b_CcFailSts/PokeCCTR_b_CcFailStsChrt */
    /* Transition: '<S381>:2' */
    (void)Rte_Write_VeCCTR_b_CcFailSts_Value(LeCCTR_b_CcFailSts);

    /* Outport: '<Root>/VeCCTR_b_CcFailStsFA' incorporates:
     *  Chart: '<S19>/PokeCCTR_b_CcFailStsChrt'
     *  SignalConversion generated from: '<S19>/VeCCTR_b_CcFailSts_FA_Rst'
     */
    (void)Rte_Write_VeCCTR_b_CcFailStsFA_Value(false);

    /* Merge: '<Root>/Merge_7_Irv' incorporates:
     *  Chart: '<S19>/PokeCCTR_b_CcFailStsChrt'
     *  SignalConversion generated from: '<S19>/VeCCTR_b_CcFailSts_FA_Rst_write'
     */
    Rte_IrvWrite_PokeCCTR_b_CcFailSts_CC_FailStsFA_write_IRV(false);

    /* Merge: '<Root>/Merge_16_Irv' incorporates:
     *  SignalConversion generated from: '<S19>/LeCCTR_b_CcFailSts'
     *  SignalConversion generated from: '<S19>/VeCCTR_b_CcFailSts_write'
     */
    Rte_IrvWrite_PokeCCTR_b_CcFailSts_CC_FailSts_write_IRV(LeCCTR_b_CcFailSts);

    /* End of Outputs for SubSystem: '<Root>/PokeCCTR_b_CcFailSts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_CCTR_3

FUNC(void, CCTR_CODE) PokeCCTR_b_CcOnOffSts(VAR(boolean, AUTOMATIC)
    LeCCTR_b_CcOnOffSts)
{

#if !Rte_SysCon_Variant_CCTR_3

    UNUSED_PARAMETER(LeCCTR_b_CcOnOffSts);

#endif

#if Rte_SysCon_Variant_CCTR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeCCTR_b_CcOnOffSts' */
    /* Outport: '<Root>/VeCCTR_b_CcOnOffSts' incorporates:
     *  SignalConversion generated from: '<S20>/VeCCTR_b_CcOnOffSts'
     *  SignalConversion generated from: '<S20>/LeCCTR_b_CcOnOffSts'
     */
    /* Gateway: PokeCCTR_b_CcOnOffSts/PokeCCTR_b_CcOnOffStsChrt */
    /* During: PokeCCTR_b_CcOnOffSts/PokeCCTR_b_CcOnOffStsChrt */
    /* Entry Internal: PokeCCTR_b_CcOnOffSts/PokeCCTR_b_CcOnOffStsChrt */
    /* Transition: '<S382>:2' */
    (void)Rte_Write_VeCCTR_b_CcOnOffSts_Value(LeCCTR_b_CcOnOffSts);

    /* Outport: '<Root>/VeCCTR_b_CcOnOffStsFA' incorporates:
     *  Chart: '<S20>/PokeCCTR_b_CcOnOffStsChrt'
     *  SignalConversion generated from: '<S20>/VeCCTR_b_CcOnOffSts_FA_Rst'
     */
    (void)Rte_Write_VeCCTR_b_CcOnOffStsFA_Value(false);

    /* Merge: '<Root>/Merge_3_Irv' incorporates:
     *  Chart: '<S20>/PokeCCTR_b_CcOnOffStsChrt'
     *  SignalConversion generated from: '<S20>/VeCCTR_b_CcOnOffSts_FA_Rst_write'
     */
    Rte_IrvWrite_PokeCCTR_b_CcOnOffSts_CC_OnOffStsFA_write_IRV(false);

    /* Merge: '<Root>/Merge_12_Irv' incorporates:
     *  SignalConversion generated from: '<S20>/LeCCTR_b_CcOnOffSts'
     *  SignalConversion generated from: '<S20>/VeCCTR_b_CcOnOffSts_write'
     */
    Rte_IrvWrite_PokeCCTR_b_CcOnOffSts_CC_OnOff_Sts_write_IRV
        (LeCCTR_b_CcOnOffSts);

    /* End of Outputs for SubSystem: '<Root>/PokeCCTR_b_CcOnOffSts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_CCTR_3

FUNC(void, CCTR_CODE) PokeCCTR_b_CcResumeSw(VAR(boolean, AUTOMATIC)
    LeCCTR_b_CcResumeSw)
{

#if !Rte_SysCon_Variant_CCTR_3

    UNUSED_PARAMETER(LeCCTR_b_CcResumeSw);

#endif

#if Rte_SysCon_Variant_CCTR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeCCTR_b_CcResumeSw' */
    /* Outport: '<Root>/VeCCTR_b_CcResumeSwFA' incorporates:
     *  Chart: '<S21>/PokeCCTR_b_CcResumeSwChrt'
     *  SignalConversion generated from: '<S21>/VeCCTR_b_CcResumeSw_FA_Rst'
     */
    /* Gateway: PokeCCTR_b_CcResumeSw/PokeCCTR_b_CcResumeSwChrt */
    /* During: PokeCCTR_b_CcResumeSw/PokeCCTR_b_CcResumeSwChrt */
    /* Entry Internal: PokeCCTR_b_CcResumeSw/PokeCCTR_b_CcResumeSwChrt */
    /* Transition: '<S383>:2' */
    (void)Rte_Write_VeCCTR_b_CcResumeSwFA_Value(false);

    /* Merge: '<Root>/Merge_5_Irv' incorporates:
     *  Chart: '<S21>/PokeCCTR_b_CcResumeSwChrt'
     *  SignalConversion generated from: '<S21>/VeCCTR_b_CcResumeSw_FA_Rst_write'
     */
    Rte_IrvWrite_PokeCCTR_b_CcResumeSw_CC_ResumeSwtchFA_write_IRV(false);

    /* Merge: '<Root>/Merge_14' incorporates:
     *  SignalConversion generated from: '<S21>/LeCCTR_b_CcResumeSw'
     *  SignalConversion generated from: '<S21>/VeCCTR_b_CcResumeSw_write'
     */
    Rte_IrvWrite_PokeCCTR_b_CcResumeSw_CC_ResumeSwtch_write_IRV
        (LeCCTR_b_CcResumeSw);

    /* End of Outputs for SubSystem: '<Root>/PokeCCTR_b_CcResumeSw' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_CCTR_3

FUNC(void, CCTR_CODE) PokeCCTR_b_CcSetSw(VAR(boolean, AUTOMATIC)
    LeCCTR_b_CcSetSw)
{

#if !Rte_SysCon_Variant_CCTR_3

    UNUSED_PARAMETER(LeCCTR_b_CcSetSw);

#endif

#if Rte_SysCon_Variant_CCTR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeCCTR_b_CcSetSw' */
    /* Merge: '<Root>/Merge_15' incorporates:
     *  SignalConversion generated from: '<S22>/LeCCTR_b_CcSetSw'
     *  SignalConversion generated from: '<S22>/VeCCTR_b_CcSetSw_write'
     */
    /* Gateway: PokeCCTR_b_CcSetSw/PokeCCTR_b_CcSetSwChrt */
    /* During: PokeCCTR_b_CcSetSw/PokeCCTR_b_CcSetSwChrt */
    /* Entry Internal: PokeCCTR_b_CcSetSw/PokeCCTR_b_CcSetSwChrt */
    /* Transition: '<S384>:2' */
    Rte_IrvWrite_PokeCCTR_b_CcSetSw_CC_SetSwtch_write_IRV(LeCCTR_b_CcSetSw);

    /* End of Outputs for SubSystem: '<Root>/PokeCCTR_b_CcSetSw' */
#endif

}

#endif

/* Output function */
FUNC(void, CCTR_CODE) CCTR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/CCTR_PwrOff'
     */
    /* Outport: '<Root>/NeCCTR_Cnt_SpdCntrlSw1_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeCCTR_Cnt_CPV_PerfDiag_MFOP'
     */
    (void)Rte_Write_NeCCTR_Cnt_SpdCntrlSw1_MFOP_NeCCTR_Cnt_SpdCntrlSw1_MFOP
        (CCTR_ac_DW.NeCCTR_Cnt_SpdCntrlSw1_MFOP);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, CCTR_CODE) CCTR_PwrOn(void)
{

#if Rte_SysCon_Variant_CCTR_3

    boolean rtb_OutportBufferForCC_Accel_Sts_write;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean rtb_OutportBufferForCC_Cancel_Swtch_writ;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean rtb_OutportBufferForCC_CoastDecelSts_wri;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean rtb_OutportBufferForCC_ResumeSwtch_write;

#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean rtb_OutportBufferForCC_SetSwtch_write;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/CCTR_PwrOn'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/DSM_Init'
     */
    /* DataStoreWrite: '<S360>/NeCCTR_Cnt_CPV_PerfDiag_MFOP' incorporates:
     *  Inport: '<Root>/NeCCTR_Cnt_SpdCntrlSw1_MFOP_PM_In'
     */
    (void)Rte_Read_NeCCTR_Cnt_SpdCntrlSw1_MFOP_Rx_NeCCTR_Cnt_SpdCntrlSw1_MFOP
        (&CCTR_ac_DW.NeCCTR_Cnt_SpdCntrlSw1_MFOP);

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/CCTI_Init'
     */
    /* SignalConversion generated from: '<S359>/CC_Accel_Sts' incorporates:
     *  SignalConversion generated from: '<S359>/CC_Cancel_Swtch'
     */
#if Rte_SysCon_Variant_CCTR_3

    /* SignalConversion generated from: '<S359>/CC_Accel_Sts' */
    CCTR_ac_B.OutportBufferForCC_Accel_Sts = false;

    /* SignalConversion generated from: '<S359>/CC_Cancel_Swtch' */
    CCTR_ac_B.OutportBufferForCC_Cancel_Swtch = false;

#endif

    /* End of SignalConversion generated from: '<S359>/CC_Accel_Sts' */

    /* SignalConversion generated from: '<S359>/CC_AccelStsFA' */
    CCTR_ac_B.OutportBufferForCC_AccelStsFA = false;

    /* SignalConversion generated from: '<S359>/CC_CancelSwtchFA' */
    CCTR_ac_B.OutportBufferForCC_CancelSwtchFA = false;

    /* SignalConversion generated from: '<S359>/CC_OnOff_Sts' */
    CCTR_ac_B.OutportBufferForCC_OnOff_Sts = false;

    /* SignalConversion generated from: '<S359>/CC_OnOffStsFA' */
    CCTR_ac_B.OutportBufferForCC_OnOffStsFA = false;

    /* SignalConversion generated from: '<S359>/CC_CoastDecelSts' incorporates:
     *  SignalConversion generated from: '<S359>/CC_ResumeSwtch'
     */
#if Rte_SysCon_Variant_CCTR_3

    /* SignalConversion generated from: '<S359>/CC_CoastDecelSts' */
    CCTR_ac_B.OutportBufferForCC_CoastDecelSts = false;

    /* SignalConversion generated from: '<S359>/CC_ResumeSwtch' */
    CCTR_ac_B.OutportBufferForCC_ResumeSwtch = false;

#endif

    /* End of SignalConversion generated from: '<S359>/CC_CoastDecelSts' */

    /* SignalConversion generated from: '<S359>/CC_CoastDecelStsFA' */
    CCTR_ac_B.OutportBufferForCC_CoastDecelStsFA = false;

    /* SignalConversion generated from: '<S359>/CC_ResumeSwtchFA' */
    CCTR_ac_B.OutportBufferForCC_ResumeSwtchFA = false;

    /* SignalConversion generated from: '<S359>/CC_SetSwtch' */
#if Rte_SysCon_Variant_CCTR_3

    /* SignalConversion generated from: '<S359>/CC_SetSwtch' */
    CCTR_ac_B.OutportBufferForCC_SetSwtch = false;

#endif

    /* End of SignalConversion generated from: '<S359>/CC_SetSwtch' */

    /* SignalConversion generated from: '<S359>/CC_SetSwtchFA' */
    CCTR_ac_B.OutportBufferForCC_SetSwtchFA = false;

    /* SignalConversion generated from: '<S359>/CC_FailSts' */
    CCTR_ac_B.OutportBufferForCC_FailSts = false;

    /* SignalConversion generated from: '<S359>/CC_FailStsFA' */
    CCTR_ac_B.OutportBufferForCC_FailStsFA = false;

    /* SignalConversion generated from: '<S359>/ACC_Trq_BSM' */
    CCTR_ac_B.OutportBufferForACC_Trq_BSM = 0.0F;

    /* SignalConversion generated from: '<S359>/ACC_Trq_BSM_FA' */
    CCTR_ac_B.OutportBufferForACC_Trq_BSM_FA = false;

    /* SignalConversion generated from: '<S359>/ACC_TrqEnabled_BSM' */
    CCTR_ac_B.OutportBufferForACC_TrqEnabled_BSM = false;

    /* SignalConversion generated from: '<S359>/ACC_TrqEnabled_BSMFA' */
    CCTR_ac_B.OutportBufferForACC_TrqEnabled_BSMFA = false;

#if Rte_SysCon_Variant_CCTR_4

    /* Outputs for Function Call SubSystem: '<S3>/NF_Stubs' */
    /* SignalConversion generated from: '<S361>/VeCCTR_b_CcEngaged' */
    CCTR_ac_B.OutportBufferForVeCCTR_b_CcEngaged = false;

    /* SignalConversion generated from: '<S361>/VeCCTR_b_CcLampSts' */
    CCTR_ac_B.OutportBufferForVeCCTR_b_CcLampSts = false;

    /* SignalConversion generated from: '<S361>/VeCCTR_b_CcEnabled' */
    CCTR_ac_B.OutportBufferForVeCCTR_b_CcEnabled = false;

    /* SignalConversion generated from: '<S361>/VeCCTR_v_CcVehSpd' */
    CCTR_ac_B.OutportBufferForVeCCTR_v_CcVehSpd = 0.0F;

    /* SignalConversion generated from: '<S361>/VeCCTR_v_CcCntrlSpd' */
    CCTR_ac_B.OutportBufferForVeCCTR_v_CcCntrlSpd = 0.0F;

    /* SignalConversion generated from: '<S361>/VeCCTR_P_CcPIDTerm' */
    CCTR_ac_B.OutportBufferForVeCCTR_P_CcPIDTerm = 0.0F;

    /* SignalConversion generated from: '<S361>/VeCCTR_P_CcDesiredPwr' */
    CCTR_ac_B.OutportBufferForVeCCTR_P_CcDesiredPwr = 0.0F;

    /* SignalConversion generated from: '<S361>/VeCCTR_b_Lv1CrusSwStuckFailed' */
    CCTR_ac_B.OutportBufferForVeCCTR_b_Lv1CrusSwStuckF = false;

    /* SignalConversion generated from: '<S361>/VeCCTR_b_Lv1CrusOffReq' */
    CCTR_ac_B.OutportBufferForVeCCTR_b_Lv1CrusOffReq = false;

    /* SignalConversion generated from: '<S361>/VeCCTR_e_Lv1CrusCanState' */
    CCTR_ac_B.OutportBufferForVeCCTR_e_Lv1CrusCanState = 1U;

    /* SignalConversion generated from: '<S361>/VeCCTR_v_CcSetSpd' */
    CCTR_ac_B.OutportBufferForVeCCTR_v_CcSetSpd = 0.0F;

    /* SignalConversion generated from: '<S361>/VeCCTR_v_CcCntrlSpdCluster_KPH' */
    CCTR_ac_B.OutportBufferForVeCCTR_v_CcCntrlSpdClust = 0.0F;

    /* SignalConversion generated from: '<S361>/VeCCTR_v_CcCntrlSpdCluster_MPH' */
    CCTR_ac_B.OutportBufferForVeCCTR_v_CcCntrlSpdClu_m = 0.0F;

    /* SignalConversion generated from: '<S361>/VeCCTR_b_CcAccelSts' */
    CCTR_ac_B.OutportBufferForVeCCTR_b_CcAccelSts = false;

    /* SignalConversion generated from: '<S361>/VeCCTR_b_CcDecelSts' */
    CCTR_ac_B.OutportBufferForVeCCTR_b_CcDecelSts = false;

    /* SignalConversion generated from: '<S361>/VeCCTR_b_CcCancelSw' */
    CCTR_ac_B.OutportBufferForVeCCTR_b_CcCancelSw = false;

    /* SignalConversion generated from: '<S361>/VeCCTR_b_CcResumeSw' */
    CCTR_ac_B.OutportBufferForVeCCTR_b_CcResumeSw = false;

    /* SignalConversion generated from: '<S361>/VeCCTR_e_ECMWARN' */
    CCTR_ac_B.OutportBufferForVeCCTR_e_ECMWARN = 0.0F;

    /* SignalConversion generated from: '<S361>/VeCCTR_b_CcInhEngage' */
    CCTR_ac_B.OutportBufferForVeCCTR_b_CcInhEngage = false;

    /* SignalConversion generated from: '<S361>/VeCCTR_b_ACC_TrqEnabled_BSM' */
    CCTR_ac_B.OutportBufferForVeCCTR_b_ACC_TrqEnabled_ = false;

    /* SignalConversion generated from: '<S361>/VeCCTR_b_ACC_TrqEnabled_BSMFA' */
    CCTR_ac_B.OutportBufferForVeCCTR_b_ACC_TrqEnable_f = false;

    /* End of Outputs for SubSystem: '<S3>/NF_Stubs' */
    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */
#endif

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S362>/VeCCTR_e_FaultSts_SpdCntrlSw' incorporates:
     *  Constant: '<S364>/Constant'
     */
    CCTR_ac_B.OutportBufferForVeCCTR_e_FaultSts_SpdCnt = CCTR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S362>/VeCCTR_e_FaultSts_SpdCntrlSw1' incorporates:
     *  Constant: '<S365>/Constant'
     */
    CCTR_ac_B.OutportBufferForVeCCTR_e_FaultSts_SpdC_b =
        CCTR_ac_ConstB.Constant_b;

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Outport: '<Root>/VeCCTR_M_ACCTrq_BSM' incorporates:
     *  SignalConversion generated from: '<S3>/ACC_Trq_BSM'
     */
    (void)Rte_Write_VeCCTR_M_ACCTrq_BSM_Value
        (CCTR_ac_B.OutportBufferForACC_Trq_BSM);

    /* Outport: '<Root>/VeCCTR_b_ACCTrq_BSMFA' incorporates:
     *  SignalConversion generated from: '<S3>/ACC_Trq_BSM_FA'
     */
    (void)Rte_Write_VeCCTR_b_ACCTrq_BSMFA_Value
        (CCTR_ac_B.OutportBufferForACC_Trq_BSM_FA);

    /* Outport: '<Root>/VeCCTR_b_CcAccelStsFA' incorporates:
     *  SignalConversion generated from: '<S3>/CC_AccelStsFA'
     */
    (void)Rte_Write_VeCCTR_b_CcAccelStsFA_Value
        (CCTR_ac_B.OutportBufferForCC_AccelStsFA);

    /* SignalConversion generated from: '<S3>/CC_Accel_Sts_write' */
#if Rte_SysCon_Variant_CCTR_3

    /* SignalConversion generated from: '<S3>/CC_Accel_Sts_write' */
    rtb_OutportBufferForCC_Accel_Sts_write =
        CCTR_ac_B.OutportBufferForCC_Accel_Sts;

#endif

    /* End of SignalConversion generated from: '<S3>/CC_Accel_Sts_write' */

    /* Outport: '<Root>/VeCCTR_b_CcCancelSwFA' incorporates:
     *  SignalConversion generated from: '<S3>/CC_CancelSwtchFA'
     */
    (void)Rte_Write_VeCCTR_b_CcCancelSwFA_Value
        (CCTR_ac_B.OutportBufferForCC_CancelSwtchFA);

    /* SignalConversion generated from: '<S3>/CC_Cancel_Swtch_write' */
#if Rte_SysCon_Variant_CCTR_3

    /* SignalConversion generated from: '<S3>/CC_Cancel_Swtch_write' */
    rtb_OutportBufferForCC_Cancel_Swtch_writ =
        CCTR_ac_B.OutportBufferForCC_Cancel_Swtch;

#endif

    /* End of SignalConversion generated from: '<S3>/CC_Cancel_Swtch_write' */

    /* Outport: '<Root>/VeCCTR_b_CcDecelStsFA' incorporates:
     *  SignalConversion generated from: '<S3>/CC_CoastDecelStsFA'
     */
    (void)Rte_Write_VeCCTR_b_CcDecelStsFA_Value
        (CCTR_ac_B.OutportBufferForCC_CoastDecelStsFA);

    /* SignalConversion generated from: '<S3>/CC_CoastDecelSts_write' */
#if Rte_SysCon_Variant_CCTR_3

    /* SignalConversion generated from: '<S3>/CC_CoastDecelSts_write' */
    rtb_OutportBufferForCC_CoastDecelSts_wri =
        CCTR_ac_B.OutportBufferForCC_CoastDecelSts;

#endif

    /* End of SignalConversion generated from: '<S3>/CC_CoastDecelSts_write' */

    /* Outport: '<Root>/VeCCTR_b_CcFailSts' incorporates:
     *  SignalConversion generated from: '<S3>/CC_FailSts'
     */
    (void)Rte_Write_VeCCTR_b_CcFailSts_Value
        (CCTR_ac_B.OutportBufferForCC_FailSts);

    /* Outport: '<Root>/VeCCTR_b_CcFailStsFA' incorporates:
     *  SignalConversion generated from: '<S3>/CC_FailStsFA'
     */
    (void)Rte_Write_VeCCTR_b_CcFailStsFA_Value
        (CCTR_ac_B.OutportBufferForCC_FailStsFA);

    /* Outport: '<Root>/VeCCTR_b_CcOnOffStsFA' incorporates:
     *  SignalConversion generated from: '<S3>/CC_OnOffStsFA'
     */
    (void)Rte_Write_VeCCTR_b_CcOnOffStsFA_Value
        (CCTR_ac_B.OutportBufferForCC_OnOffStsFA);

    /* Outport: '<Root>/VeCCTR_b_CcOnOffSts' incorporates:
     *  SignalConversion generated from: '<S3>/CC_OnOff_Sts'
     */
    (void)Rte_Write_VeCCTR_b_CcOnOffSts_Value
        (CCTR_ac_B.OutportBufferForCC_OnOff_Sts);

    /* Outport: '<Root>/VeCCTR_b_CcResumeSwFA' incorporates:
     *  SignalConversion generated from: '<S3>/CC_ResumeSwtchFA'
     */
    (void)Rte_Write_VeCCTR_b_CcResumeSwFA_Value
        (CCTR_ac_B.OutportBufferForCC_ResumeSwtchFA);

    /* SignalConversion generated from: '<S3>/CC_ResumeSwtch_write' incorporates:
     *  SignalConversion generated from: '<S3>/CC_SetSwtch_write'
     */
#if Rte_SysCon_Variant_CCTR_3

    /* SignalConversion generated from: '<S3>/CC_ResumeSwtch_write' */
    rtb_OutportBufferForCC_ResumeSwtch_write =
        CCTR_ac_B.OutportBufferForCC_ResumeSwtch;

    /* SignalConversion generated from: '<S3>/CC_SetSwtch_write' */
    rtb_OutportBufferForCC_SetSwtch_write =
        CCTR_ac_B.OutportBufferForCC_SetSwtch;

#endif

    /* End of SignalConversion generated from: '<S3>/CC_ResumeSwtch_write' */

    /* Outport: '<Root>/VeCCTR_e_FaultSts_SpdCntrlSw' incorporates:
     *  SignalConversion generated from: '<S362>/VeCCTR_e_FaultSts_SpdCntrlSw'
     *  SignalConversion generated from: '<S3>/R_VeCCTR_e_FaultSts_SpdCntrlSw'
     */
    (void)Rte_Write_VeCCTR_e_FaultSts_SpdCntrlSw_Value
        (CCTR_ac_B.OutportBufferForVeCCTR_e_FaultSts_SpdCnt);

    /* Outport: '<Root>/VeCCTR_e_FaultSts_SpdCntrlSw1' incorporates:
     *  SignalConversion generated from: '<S362>/VeCCTR_e_FaultSts_SpdCntrlSw1'
     *  SignalConversion generated from: '<S3>/R_VeCCTR_e_FaultSts_SpdCntrlSw1'
     */
    (void)Rte_Write_VeCCTR_e_FaultSts_SpdCntrlSw1_Value
        (CCTR_ac_B.OutportBufferForVeCCTR_e_FaultSts_SpdC_b);

    /* SignalConversion generated from: '<S3>/VeCCTR_P_CcDesiredPwr' incorporates:
     *  SignalConversion generated from: '<S3>/VeCCTR_P_CcPIDTerm'
     *  SignalConversion generated from: '<S3>/VeCCTR_b_ACC_TrqEnabled_BSM'
     *  SignalConversion generated from: '<S3>/VeCCTR_b_ACC_TrqEnabled_BSMFA'
     *  SignalConversion generated from: '<S3>/VeCCTR_b_CcAccelSts'
     *  SignalConversion generated from: '<S3>/VeCCTR_b_CcCancelSw'
     *  SignalConversion generated from: '<S3>/VeCCTR_b_CcDecelSts'
     *  SignalConversion generated from: '<S3>/VeCCTR_b_CcEnabled'
     *  SignalConversion generated from: '<S3>/VeCCTR_b_CcEngaged'
     *  SignalConversion generated from: '<S3>/VeCCTR_b_CcInhEngage'
     *  SignalConversion generated from: '<S3>/VeCCTR_b_CcLampSts'
     *  SignalConversion generated from: '<S3>/VeCCTR_b_CcResumeSw'
     *  SignalConversion generated from: '<S3>/VeCCTR_b_Lv1CrusOffReq'
     *  SignalConversion generated from: '<S3>/VeCCTR_b_Lv1CrusSwStuckFailed'
     *  SignalConversion generated from: '<S3>/VeCCTR_e_ECMWARN'
     *  SignalConversion generated from: '<S3>/VeCCTR_e_Lv1CrusCanState'
     *  SignalConversion generated from: '<S3>/VeCCTR_v_CcCntrlSpd'
     *  SignalConversion generated from: '<S3>/VeCCTR_v_CcCntrlSpdCluster_KPH'
     *  SignalConversion generated from: '<S3>/VeCCTR_v_CcCntrlSpdCluster_MPH'
     *  SignalConversion generated from: '<S3>/VeCCTR_v_CcSetSpd'
     *  SignalConversion generated from: '<S3>/VeCCTR_v_CcVehSpd'
     */
#if Rte_SysCon_Variant_CCTR_4

    /* Outport: '<Root>/VeCCTR_P_CcDesiredPwr' */
    (void)Rte_Write_VeCCTR_P_CcDesiredPwr_Value
        (CCTR_ac_B.OutportBufferForVeCCTR_P_CcDesiredPwr);

    /* Outport: '<Root>/VeCCTR_P_CcPIDTerm' */
    (void)Rte_Write_VeCCTR_P_CcPIDTerm_Value
        (CCTR_ac_B.OutportBufferForVeCCTR_P_CcPIDTerm);

    /* Outport: '<Root>/VeCCTR_b_ACCTrqEnabled_BSM' */
    (void)Rte_Write_VeCCTR_b_ACCTrqEnabled_BSM_Value
        (CCTR_ac_B.OutportBufferForVeCCTR_b_ACC_TrqEnabled_);

    /* Outport: '<Root>/VeCCTR_b_ACCTrqEnabled_BSMFA' */
    (void)Rte_Write_VeCCTR_b_ACCTrqEnabled_BSMFA_Value
        (CCTR_ac_B.OutportBufferForVeCCTR_b_ACC_TrqEnable_f);

    /* Outport: '<Root>/VeCCTR_b_CcAccelSts' */
    (void)Rte_Write_VeCCTR_b_CcAccelSts_Value
        (CCTR_ac_B.OutportBufferForVeCCTR_b_CcAccelSts);

    /* Outport: '<Root>/VeCCTR_b_CcCancelSw' */
    (void)Rte_Write_VeCCTR_b_CcCancelSw_Value
        (CCTR_ac_B.OutportBufferForVeCCTR_b_CcCancelSw);

    /* Outport: '<Root>/VeCCTR_b_CcDecelSts' */
    (void)Rte_Write_VeCCTR_b_CcDecelSts_Value
        (CCTR_ac_B.OutportBufferForVeCCTR_b_CcDecelSts);

    /* Outport: '<Root>/VeCCTR_b_CcEnabled' */
    (void)Rte_Write_VeCCTR_b_CcEnabled_Value
        (CCTR_ac_B.OutportBufferForVeCCTR_b_CcEnabled);

    /* Outport: '<Root>/VeCCTR_b_CcEngaged' */
    (void)Rte_Write_VeCCTR_b_CcEngaged_Value
        (CCTR_ac_B.OutportBufferForVeCCTR_b_CcEngaged);

    /* Outport: '<Root>/VeCCTR_b_CcInhEngage' */
    (void)Rte_Write_VeCCTR_b_CcInhEngage_Value
        (CCTR_ac_B.OutportBufferForVeCCTR_b_CcInhEngage);

    /* Outport: '<Root>/VeCCTR_b_CcLampSts' */
    (void)Rte_Write_VeCCTR_b_CcLampSts_Value
        (CCTR_ac_B.OutportBufferForVeCCTR_b_CcLampSts);

    /* Outport: '<Root>/VeCCTR_b_CcResumeSw' */
    (void)Rte_Write_VeCCTR_b_CcResumeSw_Value
        (CCTR_ac_B.OutportBufferForVeCCTR_b_CcResumeSw);

    /* Outport: '<Root>/VeCCTR_b_Lv1CrusOffReq' */
    (void)Rte_Write_VeCCTR_b_Lv1CrusOffReq_Value
        (CCTR_ac_B.OutportBufferForVeCCTR_b_Lv1CrusOffReq);

    /* Outport: '<Root>/VeCCTR_b_Lv1CrusSwStuckFailed' */
    (void)Rte_Write_VeCCTR_b_Lv1CrusSwStuckFailed_Value
        (CCTR_ac_B.OutportBufferForVeCCTR_b_Lv1CrusSwStuckF);

    /* Outport: '<Root>/VeCCTR_e_ECMWARN' */
    (void)Rte_Write_VeCCTR_e_ECMWARN_Value
        (CCTR_ac_B.OutportBufferForVeCCTR_e_ECMWARN);

    /* Outport: '<Root>/VeCCTR_e_Lv1CrusCanState' */
    (void)Rte_Write_VeCCTR_e_Lv1CrusCanState_Value
        (CCTR_ac_B.OutportBufferForVeCCTR_e_Lv1CrusCanState);

    /* Outport: '<Root>/VeCCTR_v_CcCntrlSpd' */
    (void)Rte_Write_VeCCTR_v_CcCntrlSpd_Value
        (CCTR_ac_B.OutportBufferForVeCCTR_v_CcCntrlSpd);

    /* Outport: '<Root>/VeCCTR_v_CcCntrlSpd_Cluster_KPH' */
    (void)Rte_Write_VeCCTR_v_CcCntrlSpd_Cluster_KPH_Value
        (CCTR_ac_B.OutportBufferForVeCCTR_v_CcCntrlSpdClust);

    /* Outport: '<Root>/VeCCTR_v_CcCntrlSpd_Cluster_MPH' */
    (void)Rte_Write_VeCCTR_v_CcCntrlSpd_Cluster_MPH_Value
        (CCTR_ac_B.OutportBufferForVeCCTR_v_CcCntrlSpdClu_m);

    /* Outport: '<Root>/VeCCTR_v_CcSetSpd' */
    (void)Rte_Write_VeCCTR_v_CcSetSpd_Value
        (CCTR_ac_B.OutportBufferForVeCCTR_v_CcSetSpd);

    /* Outport: '<Root>/VeCCTR_v_CcVehSpd' */
    (void)Rte_Write_VeCCTR_v_CcVehSpd_Value
        (CCTR_ac_B.OutportBufferForVeCCTR_v_CcVehSpd);

#endif

    /* End of SignalConversion generated from: '<S3>/VeCCTR_P_CcDesiredPwr' */

    /* Merge: '<Root>/Merge_9' incorporates:
     *  SignalConversion generated from: '<S3>/ACC_TrqEnabled_BSMFA'
     * */
    Rte_IrvWrite_CCTR_PwrOn_ACC_TrqEnabled_BSMFA_IRV
        (CCTR_ac_B.OutportBufferForACC_TrqEnabled_BSMFA);

    /* Merge: '<Root>/Merge_8' incorporates:
     *  SignalConversion generated from: '<S3>/ACC_TrqEnabled_BSM'
     * */
    Rte_IrvWrite_CCTR_PwrOn_ACC_TrqEnabled_BSM_IRV
        (CCTR_ac_B.OutportBufferForACC_TrqEnabled_BSM);

    /* Merge: '<Root>/Merge_17_Irv' incorporates:
     *  SignalConversion generated from: '<S3>/CC_AccelStsFA_write'
     * */
    Rte_IrvWrite_CCTR_PwrOn_CC_AccelStsFA_write_IRV
        (CCTR_ac_B.OutportBufferForCC_AccelStsFA);

    /* SignalConversion generated from: '<S3>/CC_Accel_Sts_write' */
#if Rte_SysCon_Variant_CCTR_3

    /* Merge: '<Root>/Merge_2' */
    Rte_IrvWrite_CCTR_PwrOn_CC_Accel_Sts_write_IRV
        (rtb_OutportBufferForCC_Accel_Sts_write);

#endif

    /* End of SignalConversion generated from: '<S3>/CC_Accel_Sts_write' */

    /* Merge: '<Root>/Merge_18_Irv' incorporates:
     *  SignalConversion generated from: '<S3>/CC_CancelSwtchFA_write'
     * */
    Rte_IrvWrite_CCTR_PwrOn_CC_CancelSwtchFA_write_IRV
        (CCTR_ac_B.OutportBufferForCC_CancelSwtchFA);

    /* SignalConversion generated from: '<S3>/CC_Cancel_Swtch_write' */
#if Rte_SysCon_Variant_CCTR_3

    /* Merge: '<Root>/Merge_11' */
    Rte_IrvWrite_CCTR_PwrOn_CC_Cancel_Swtch_write_IRV
        (rtb_OutportBufferForCC_Cancel_Swtch_writ);

#endif

    /* End of SignalConversion generated from: '<S3>/CC_Cancel_Swtch_write' */

    /* Merge: '<Root>/Merge_4_Irv' incorporates:
     *  SignalConversion generated from: '<S3>/CC_CoastDecelStsFA_write'
     * */
    Rte_IrvWrite_CCTR_PwrOn_CC_CoastDecelStsFA_write_IRV
        (CCTR_ac_B.OutportBufferForCC_CoastDecelStsFA);

    /* SignalConversion generated from: '<S3>/CC_CoastDecelSts_write' */
#if Rte_SysCon_Variant_CCTR_3

    /* Merge: '<Root>/Merge_13' */
    Rte_IrvWrite_CCTR_PwrOn_CC_CoastDecelSts_write_IRV
        (rtb_OutportBufferForCC_CoastDecelSts_wri);

#endif

    /* End of SignalConversion generated from: '<S3>/CC_CoastDecelSts_write' */

    /* Merge: '<Root>/Merge_7_Irv' incorporates:
     *  SignalConversion generated from: '<S3>/CC_FailStsFA_write'
     * */
    Rte_IrvWrite_CCTR_PwrOn_CC_FailStsFA_write_IRV
        (CCTR_ac_B.OutportBufferForCC_FailStsFA);

    /* Merge: '<Root>/Merge_16_Irv' incorporates:
     *  SignalConversion generated from: '<S3>/CC_FailSts_write'
     * */
    Rte_IrvWrite_CCTR_PwrOn_CC_FailSts_write_IRV
        (CCTR_ac_B.OutportBufferForCC_FailSts);

    /* Merge: '<Root>/Merge_3_Irv' incorporates:
     *  SignalConversion generated from: '<S3>/CC_OnOffStsFA_write'
     * */
    Rte_IrvWrite_CCTR_PwrOn_CC_OnOffStsFA_write_IRV
        (CCTR_ac_B.OutportBufferForCC_OnOffStsFA);

    /* Merge: '<Root>/Merge_12_Irv' incorporates:
     *  SignalConversion generated from: '<S3>/CC_OnOff_Sts_write'
     * */
    Rte_IrvWrite_CCTR_PwrOn_CC_OnOff_Sts_write_IRV
        (CCTR_ac_B.OutportBufferForCC_OnOff_Sts);

    /* Merge: '<Root>/Merge_5_Irv' incorporates:
     *  SignalConversion generated from: '<S3>/CC_ResumeSwtchFA_write'
     * */
    Rte_IrvWrite_CCTR_PwrOn_CC_ResumeSwtchFA_write_IRV
        (CCTR_ac_B.OutportBufferForCC_ResumeSwtchFA);

    /* SignalConversion generated from: '<S3>/CC_ResumeSwtch_write' */
#if Rte_SysCon_Variant_CCTR_3

    /* Merge: '<Root>/Merge_14' */
    Rte_IrvWrite_CCTR_PwrOn_CC_ResumeSwtch_write_IRV
        (rtb_OutportBufferForCC_ResumeSwtch_write);

#endif

    /* End of SignalConversion generated from: '<S3>/CC_ResumeSwtch_write' */

    /* Merge: '<Root>/Merge_6' incorporates:
     *  SignalConversion generated from: '<S3>/CC_SetSwtchFA_write'
     * */
    Rte_IrvWrite_CCTR_PwrOn_CC_SetSwtchFA_write_IRV
        (CCTR_ac_B.OutportBufferForCC_SetSwtchFA);

    /* SignalConversion generated from: '<S3>/CC_SetSwtch_write' */
#if Rte_SysCon_Variant_CCTR_3

    /* Merge: '<Root>/Merge_15' */
    Rte_IrvWrite_CCTR_PwrOn_CC_SetSwtch_write_IRV
        (rtb_OutportBufferForCC_SetSwtch_write);

#endif

    /* End of SignalConversion generated from: '<S3>/CC_SetSwtch_write' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, CCTR_CODE) CCTR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/CCTR_PwrOn'
     */
#if Rte_SysCon_Variant_CCTR_4

    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* SystemInitialize for Function Call SubSystem: '<S3>/NF_Stubs' */
    /* SystemInitialize for SignalConversion generated from: '<S361>/VeCCTR_e_Lv1CrusCanState' */
    CCTR_ac_B.OutportBufferForVeCCTR_e_Lv1CrusCanState = 1U;

    /* End of SystemInitialize for SubSystem: '<S3>/NF_Stubs' */
    /* End of SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
#endif

    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S362>/VeCCTR_e_FaultSts_SpdCntrlSw' incorporates:
     *  Constant: '<S364>/Constant'
     */
    CCTR_ac_B.OutportBufferForVeCCTR_e_FaultSts_SpdCnt = CCTR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S362>/VeCCTR_e_FaultSts_SpdCntrlSw1' incorporates:
     *  Constant: '<S365>/Constant'
     */
    CCTR_ac_B.OutportBufferForVeCCTR_e_FaultSts_SpdC_b =
        CCTR_ac_ConstB.Constant_b;

    /* End of SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
#if Rte_SysCon_Variant_CCTR_3

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeCCTR_b_ACCTrqEnabled_BSM' */
    /* SystemInitialize for Function Call SubSystem: '<Root>/CCTR_MedTEB' */
    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CruiseCANState'
     */
    /* SystemInitialize for SignalConversion generated from: '<S24>/ESCFailSts_OFF' incorporates:
     *  Constant: '<S260>/Calib'
     */
    CCTR_ac_B.OutportBufferForESCFailSts_OFF = KeCCTR_b_ESCFailSts_OFF;

    /* SystemInitialize for SignalConversion generated from: '<S24>/VeCCTI_b_isM182' incorporates:
     *  Constant: '<S255>/Calib'
     */
    CCTR_ac_B.OutportBufferForVeCCTI_b_isM182 = HeCCTR_b_isM182;

    /* SystemInitialize for SignalConversion generated from: '<S24>/VeCCTR_t_CCTR_dT' incorporates:
     *  Constant: '<S261>/Calib'
     */
    CCTR_ac_B.OutportBufferForVeCCTR_t_CCTR_dT = KeCCTR_t_12p5dt;

    /* SystemInitialize for SignalConversion generated from: '<S24>/CC_5Unit_AccelDecel_Enabl' incorporates:
     *  Constant: '<S259>/Calib'
     */
    CCTR_ac_B.OutportBufferForCC_5Unit_AccelDecel_Enab =
        KeCCTR_b_Cc5UnitAccelDecelEnabl;

    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of SystemInitialize for SubSystem: '<Root>/CCTR_MedTEB' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeCCTR_b_ACCTrqEnabled_BSM' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
#endif

    /* SystemInitialize for Outport: '<Root>/VeCCTR_e_FaultSts_SpdCntrlSw' incorporates:
     *  Merge: '<Root>/M_VeCCTR_e_FaultSts_SpdCntrlSw'
     */
    (void)Rte_Write_VeCCTR_e_FaultSts_SpdCntrlSw_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeCCTR_e_FaultSts_SpdCntrlSw1' incorporates:
     *  Merge: '<Root>/M_VeCCTR_e_FaultSts_SpdCntrlSw1'
     */
    (void)Rte_Write_VeCCTR_e_FaultSts_SpdCntrlSw1_Value(CeDFIB_e_Init);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
