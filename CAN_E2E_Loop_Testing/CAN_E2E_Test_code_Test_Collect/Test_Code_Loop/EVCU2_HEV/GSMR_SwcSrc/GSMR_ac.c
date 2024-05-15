/*
 * File: GSMR_ac.c
 *
 * Code generated for Simulink model 'GSMR_ac'.
 *
 * Model version                  : 9.622
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:45:42 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "GSMR_ac.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_GSMR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(uint16, GSMR_VAR_INIT) KeGSMC_Cnt_ChngOfStDbncTmr = 3U;/* Referenced by: '<S252>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_Cf_CnvrtCircumToRadius =
    0.1592F;                           /* Referenced by: '<S331>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_Cnt_CntPerMtrRev = 2048.0F;/* Referenced by: '<S144>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(uint16, GSMR_VAR_INIT) KeGSMR_Cnt_DbncTimePlugInVldCn =
    10U;                               /* Referenced by: '<S456>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(uint16, GSMR_VAR_INIT) KeGSMR_Cnt_DisEngCnfrmCntr = 3U;/* Referenced by: '<S213>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(uint16, GSMR_VAR_INIT) KeGSMR_Cnt_DisEngMovCnfrmCntr = 3U;/* Referenced by: '<S214>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(uint16, GSMR_VAR_INIT) KeGSMR_Cnt_EndStpCrntCnfrmCntr = 1U;/* Referenced by: '<S237>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(uint16, GSMR_VAR_INIT) KeGSMR_Cnt_EngCnfrmCntr = 3U;/* Referenced by: '<S215>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(uint16, GSMR_VAR_INIT) KeGSMR_Cnt_EngMovCnfrmCntr = 3U;/* Referenced by: '<S216>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(uint16, GSMR_VAR_INIT) KeGSMR_Cnt_LVVoltPNOvrdCntr = 3U;/* Referenced by: '<S438>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(uint16, GSMR_VAR_INIT) KeGSMR_Cnt_LVVoltRationalizeCntr =
    3U;                                /* Referenced by: '<S439>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(uint16, GSMR_VAR_INIT) KeGSMR_Cnt_Lv2PPawlCrntSnsrCntr =
    5U;                                /* Referenced by: '<S282>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(uint16, GSMR_VAR_INIT) KeGSMR_Cnt_Lv2PPawlPosSnsrCntr = 5U;/* Referenced by: '<S283>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_Cnt_MaxAllwdDiff = 2048.0F;/* Referenced by: '<S145>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_Cnt_MaxBrkApplyDly = 5.0F;/* Referenced by: '<S505>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_Cnt_MinNumber = 3.0F;/* Referenced by: '<S146>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(uint16, GSMR_VAR_INIT) KeGSMR_Cnt_NeutLockDbnc = 40U;/* Referenced by: '<S468>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(uint8, GSMR_VAR_INIT) KeGSMR_Cnt_P1E18CntrLim = 2U;/* Referenced by: '<S253>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(uint8, GSMR_VAR_INIT) KeGSMR_Cnt_P1E18DecCntrVal = 1U;/* Referenced by: '<S254>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(uint8, GSMR_VAR_INIT) KeGSMR_Cnt_P1E18IncCntrVal = 1U;/* Referenced by: '<S255>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(uint8, GSMR_VAR_INIT) KeGSMR_Cnt_PPMtrSt_Undes_Dec = 1U;/* Referenced by: '<S272>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(uint8, GSMR_VAR_INIT) KeGSMR_Cnt_PPMtrSt_Undes_Inc = 3U;/* Referenced by: '<S273>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(uint8, GSMR_VAR_INIT) KeGSMR_Cnt_PPMtrSt_Undes_Limit = 50U;/* Referenced by: '<S274>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(uint8, GSMR_VAR_INIT) KeGSMR_Cnt_PRNDMntrCntrInc = 3U;/* Referenced by: '<S74>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(uint8, GSMR_VAR_INIT) KeGSMR_Cnt_PRNDMntrCntrLim = 6U;/* Referenced by: '<S75>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(uint16, GSMR_VAR_INIT) KeGSMR_Cnt_RstAfterEPBApply = 12U;/* Referenced by: '<S132>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(uint16, GSMR_VAR_INIT) KeGSMR_Cnt_SetP1E18Dly = 12U;/* Referenced by: '<S133>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(uint16, GSMR_VAR_INIT) KeGSMR_Cnt_VehInPrkCnfrmDly = 0U;/* Referenced by: '<S134>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(uint16, GSMR_VAR_INIT) KeGSMR_Cnt_VehSpdPNOvrdCntr = 3U;/* Referenced by:
                                                                      * '<S377>/Calib'
                                                                      * '<S408>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(uint16, GSMR_VAR_INIT) KeGSMR_Cnt_Vldt_CANR_CANC = 4U;/* Referenced by: '<S332>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(uint16, GSMR_VAR_INIT) KeGSMR_Cnt_Vldt_CANR_ePT = 4U;/* Referenced by: '<S333>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(uint8, GSMR_VAR_INIT) KeGSMR_Cnt_ePRNDFailCntVal = 0U;/* Referenced by: '<S76>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_I_CrntDiffForMov = 0.4F;/* Referenced by: '<S284>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_I_EndStopCrntThsh_Max =
    2.9F;                              /* Referenced by: '<S238>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_I_EndStopCrntThsh_Min =
    2.5F;                              /* Referenced by: '<S239>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_I_PPawlMtrCrntDrawVal =
    0.0F;                              /* Referenced by: '<S334>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_K_RstValue = 0.0F;/* Referenced by: '<S147>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_Pct_BrkTravelStsTh = 10.0F;/* Referenced by: '<S335>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_Pct_BrkTravelSts_LSP = 2.0F;/* Referenced by: '<S336>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_Pct_BrkTravelSts_RSP = 4.0F;/* Referenced by: '<S337>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_Pct_HVBatSOC = 100.0F;/* Referenced by: '<S494>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_Pct_SOCStrtInNeutLo = 10.0F;/* Referenced by: '<S495>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_U_DisEngThsh4EndCrntDet =
    3.5F;                              /* Referenced by: '<S220>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_U_EngThsh4EndCrntDet = 2.0F;/* Referenced by: '<S221>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_U_LVVolt = 12.0F;/* Referenced by: '<S440>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_U_OvrdToNThsh_LV = 7.0F;/* Referenced by: '<S441>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_U_OvrdToPThsh_LV = 5.0F;/* Referenced by: '<S442>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_U_PPMtrDisEngCnfrmThsh =
    0.8F;                              /* Referenced by: '<S222>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_U_PPMtrDisEngMovThsh =
    -1.0F;                             /* Referenced by: '<S223>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_U_PPMtrEngCnfrmThsh = 4.0F;/* Referenced by: '<S224>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_U_PPMtrEngMovThsh = 1.0F;/* Referenced by: '<S225>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_U_PPMtrPosSnsrFBVal = 0.0F;/* Referenced by: '<S385>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_U_VoltDiff = 3.0F;/* Referenced by: '<S443>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_U_VoltDiffForMov = 1.4F;/* Referenced by: '<S285>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_U_VoltDiffToRstFilt = 3.5F;/* Referenced by: '<S386>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_AutoParkDetcdOvrdVal = 0;/* Referenced by: '<S496>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_CountSource = 1;/* Referenced by: '<S339>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_DisblMntrInPlant = 0;/* Referenced by: '<S378>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_DisblMntrVal = 1;/* Referenced by: '<S379>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_DrvRqShftROTSelection = 1;/* Referenced by: '<S529>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_EnbOutOfPrkMntr = 1;/* Referenced by: '<S98>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_EnblADASFeature = 1;/* Referenced by: '<S341>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_EnblDTC4PRNDFail = 0;/* Referenced by: '<S77>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_EnblEPBApplyDet = 1;/* Referenced by: '<S135>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_EnblPPawlCnd_Park = 1;/* Referenced by: '<S116>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_Enbl_OTP_ECMRq = 0;/* Referenced by: '<S497>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_EndStpCrntOvrdVal = 1;/* Referenced by: '<S240>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_IgnorPPawlSts = 1;/* Referenced by: '<S117>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_IgnoreCrntSnsrFltDet = 1;/* Referenced by: '<S286>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_InPlantMdVal = 1;/* Referenced by: '<S342>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_LOC_IDCM = 0;/* Referenced by: '<S457>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_LOC_OBCM = 1;/* Referenced by: '<S458>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_LatchOvrd2Neut = 1;/* Referenced by: '<S469>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_Lv1BrakeStatus = 0;/* Referenced by: '<S343>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_Lv1SpeedThrsh = 1;/* Referenced by:
                                                                      * '<S550>/Calib'
                                                                      * '<S578>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_Lv2IgnoreCrnk = 1;/* Referenced by: '<S435>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_Lv2PRNDInvldForCohFaultEn
    = 0;                               /* Referenced by: '<S66>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_Lv2PRNDInvldForMonFaultEn
    = 0;                               /* Referenced by: '<S67>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_MtrA_6SOEnblOvrd = 0;/* Referenced by: '<S344>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_MtrA_InvrtrStOvrd = 0;/* Referenced by: '<S345>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_MtrB_InvrtrStOvrd = 0;/* Referenced by: '<S346>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_NReqMntrEnbl = 0;/* Referenced by: '<S99>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_NlockWithTmrTh = 1;/* Referenced by: '<S470>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_OvrdAutoParkDetcd = 1;/* Referenced by: '<S498>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_OvrdCANCDrvRqShftROT = 0;/* Referenced by: '<S347>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_OvrdDPTDrvRqShftROT = 0;/* Referenced by: '<S348>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_OvrdDisblMntr = 0;/* Referenced by: '<S380>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_OvrdEndStpCrntDetcd = 1;/* Referenced by: '<S241>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_OvrdHBridgeDiagInfo = 0;/* Referenced by: '<S349>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_OvrdInPlantMd = 1;/* Referenced by: '<S350>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_OvrdPPMtrPosSnsrFB = 0;/* Referenced by: '<S387>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_OvrdPPawlFltInhibitMtr =
    0;                                 /* Referenced by: '<S351>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_OvrdPPawlMtrCrntDraw = 0;/* Referenced by: '<S352>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_OvrdReset_PRND = 0;/* Referenced by: '<S78>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_OvrdReset_ePARK = 0;/* Referenced by: '<S256>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_OvrdSrvcMd = 1;/* Referenced by: '<S353>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_OvrdToNEnbl_MtrA_Flt = 0;/* Referenced by: '<S471>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_OvrdToNEnbl_MtrB_Flt = 0;/* Referenced by: '<S472>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_OvrdToNeutDetcd = 0;/* Referenced by: '<S473>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_OvrdToNeutDetcdVal = 0;/* Referenced by: '<S474>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_OvrdToParkToN = 1;/* Referenced by: '<S399>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_OvrdVldtdTransRngSt_TRGR =
    0;                                 /* Referenced by: '<S354>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_Ovrd_ePRNDFailCntr = 1;/* Referenced by: '<S79>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_PPawlFltInhibitMtrOvrdVal
    = 0;                               /* Referenced by: '<S355>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_ParkNotPossible = 0;/* Referenced by: '<S31>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_PerfLV2CrntSnsrFltDet = 0;/* Referenced by: '<S287>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_SetP1E18OnVehMov = 1;/* Referenced by:
                                                                      * '<S136>/Calib'
                                                                      * '<S257>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_ShftProxi = 0;/* Referenced by:
                                                                      * '<S356>/Calib'
                                                                      * '<S521>/Calib'
                                                                      * '<S100>/Calib'
                                                                      * '<S475>/Calib'
                                                                      * '<S499>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_SnsrStatusDet = 1;/* Referenced by: '<S288>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_SrvcMdOvrdVal = 0;/* Referenced by: '<S357>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_TOSRSpdToGotoPark = 1;/* Referenced by:
                                                                      * '<S551>/Calib'
                                                                      * '<S579>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_ToP_TOSRSpdCntMet = 1;/* Referenced by: '<S36>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_ToParkNotPossibleOvrd = 0;/* Referenced by: '<S181>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_ToParkNotPossibleOvrdVal =
    0;                                 /* Referenced by: '<S182>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_ToParkTOSRSpdMet = 1;/* Referenced by: '<S409>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_UseOutOfPrkBrkApld = 1;/* Referenced by: '<S71>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_VFBEV = 1;/* Referenced by:
                                                                  * '<S101>/Calib'
                                                                  * '<S476>/Calib'
                                                                  * '<S500>/Calib'
                                                                  */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(boolean, GSMR_VAR_INIT) KeGSMR_b_VehPluggedInWithDelay = 1;/* Referenced by: '<S459>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(uint16, GSMR_VAR_INIT) KeGSMR_e_BrkApplied = 1U;/* Referenced by: '<S338>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(sint16, GSMR_VAR_INIT) KeGSMR_e_CANCDrvRqShftROTVal = 7;/* Referenced by: '<S358>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(sint16, GSMR_VAR_INIT) KeGSMR_e_DPTDrvRqShftROTVal = 7;/* Referenced by: '<S359>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(sint16, GSMR_VAR_INIT) KeGSMR_e_HBridgeDiagInfoVal = 0;/* Referenced by: '<S360>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(TeGSMR_e_SixSOStatus, GSMR_VAR_INIT)
    KeGSMR_e_MtrA_6SOEnblOvrdVal = CeGSMR_e_ThreePS;/* Referenced by: '<S361>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(TeGSMR_e_MtrInvrtrSt, GSMR_VAR_INIT)
    KeGSMR_e_MtrA_InvrtrStOvrdVal = CeGSMR_e_NormalPowerStageOff;/* Referenced by: '<S362>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(TeGSMR_e_MtrInvrtrSt, GSMR_VAR_INIT)
    KeGSMR_e_MtrB_InvrtrStOvrdVal = CeGSMR_e_NormalPowerStageOff;/* Referenced by: '<S363>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(sint16, GSMR_VAR_INIT) KeGSMR_e_VldtdTransRngStVal = 0;/* Referenced by: '<S364>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_k_PosSnsrFB_FiltCoeff =
    1.0F;                              /* Referenced by: '<S388>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_l_MaxdistThrshld_LSP =
    0.03F;                             /* Referenced by: '<S148>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_l_MaxdistThrshld_RSP =
    0.15F;                             /* Referenced by: '<S149>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_l_RollingWhlRadius =
    0.3617F;                           /* Referenced by: '<S365>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_l_WhlRadius = 0.3617F;/* Referenced by: '<S150>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_n_PPawlEngageThsd = 10.0F;/* Referenced by: '<S118>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_n_TOSRSpdErrLmt = 70.0F;/* Referenced by: '<S366>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_n_ToP_SpeedThrsh = 5.0F;/* Referenced by:
                                                                      * '<S552>/Calib'
                                                                      * '<S580>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_n_ToP_TOSRSpdForGearTrans =
    1.0F;                              /* Referenced by: '<S37>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_n_ToParkVehSpdThresh = 1.0F;/* Referenced by: '<S410>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_r_All_NoFromNb_NCnDep =
    0.3913F;                           /* Referenced by: '<S151>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_r_Conv2VoltageFactr =
    202.6F;                            /* Referenced by: '<S389>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_r_DeltaCrntAmplifyingFctr =
    25.0F;                             /* Referenced by: '<S228>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_r_FDR = 3.6402F;/* Referenced by: '<S152>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_r_TwoPi = 6.2832F;/* Referenced by: '<S153>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_r_VoltScalingFact = 100.0F;/* Referenced by: '<S289>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_t_BrkAppDly_NLck = 0.13F;/* Referenced by: '<S506>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_t_BrkAppDly_NLckDrvReq =
    0.05F;                             /* Referenced by: '<S507>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_t_CANReqDbnc = 0.2F;/* Referenced by:
                                                                      * '<S596>/Calib'
                                                                      * '<S601>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_t_GSMR_dT = 0.025F;/* Referenced by:
                                                                      * '<S390>/Calib'
                                                                      * '<S508>/Calib'
                                                                      * '<S597>/Calib'
                                                                      * '<S602>/Calib'
                                                                      * '<S290>/Calib'
                                                                      * '<S477>/Calib'
                                                                      * '<S199>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_t_MaxPpawlSnsrMntrTmr =
    3.0F;                              /* Referenced by: '<S291>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_t_NeutLockTmrTh = 0.1F;/* Referenced by: '<S478>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_t_ShftrLockComplete = 0.0F;/* Referenced by: '<S479>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_t_ePARK_NDState_DlyTmr =
    3.0F;                              /* Referenced by: '<S200>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_v_FromD_SpeedThrsh = 5.0F;/* Referenced by: '<S102>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_v_FromR_SpeedThrsh = 5.0F;/* Referenced by: '<S103>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_v_MaxInplantMdSpd = 5.0F;/* Referenced by: '<S381>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_v_NeutLockSpdThsh = 1.61F;/* Referenced by: '<S480>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_v_Ovrd2NeutVehSpd = 45.0F;/* Referenced by: '<S411>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_v_Ovrd2NeutVehSpd_Lo = 5.0F;/* Referenced by: '<S412>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_v_PlgInThrshMPH = 2.0F;/* Referenced by: '<S413>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_v_RmtStrtVerfSpd = 0.0001F;/* Referenced by: '<S414>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_v_SpdThrshToRejectD = 1.0F;/* Referenced by:
                                                                      * '<S553>/Calib'
                                                                      * '<S581>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_v_SpdThrshToRejectR = 1.0F;/* Referenced by:
                                                                      * '<S554>/Calib'
                                                                      * '<S582>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_v_SpdThsh_EPBReq = 1.5F;/* Referenced by: '<S137>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_v_ToD_SpdForGearTrans =
    1.0F;                              /* Referenced by: '<S38>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_v_ToD_SpeedThrsh = -5.0F;/* Referenced by:
                                                                      * '<S555>/Calib'
                                                                      * '<S583>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_v_ToD_SpeedThrshForLv1 =
    1.0F;                              /* Referenced by:
                                        * '<S556>/Calib'
                                        * '<S584>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_v_ToN_VehSpd = 8.1F;/* Referenced by: '<S415>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_v_ToP_SpeedThrsh = 5.0F;/* Referenced by:
                                                                      * '<S557>/Calib'
                                                                      * '<S585>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_v_ToParkSpdForGearTrans =
    1.0F;                              /* Referenced by: '<S39>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_v_ToParkVehSpdThresh = 1.0F;/* Referenced by: '<S416>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_v_ToR_SpdForGearTrans =
    1.0F;                              /* Referenced by: '<S40>/Calib' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_v_ToR_SpeedThrsh = 5.0F;/* Referenced by:
                                                                      * '<S558>/Calib'
                                                                      * '<S586>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static volatile CONST(float32, GSMR_VAR_INIT) KeGSMR_v_ToR_SpeedThrshForLv1 =
    1.0F;                              /* Referenced by:
                                        * '<S559>/Calib'
                                        * '<S587>/Calib'
                                        */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_GSMR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_GSMR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(uint8, GSMR_VAR_INIT) VeGSMC_Cnt_DecCntrInput1;/* '<S266>/Switch' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(uint8, GSMR_VAR_INIT) VeGSMC_Cnt_IncDecCntrVal;/* '<S251>/Switch2' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(uint8, GSMR_VAR_INIT) VeGSMC_Cnt_IncDecCntr_Cmpr;/* '<S251>/dec_if_Ok_else_inc' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(uint8, GSMR_VAR_INIT) VeGSMC_Cnt_IncDec_Inc_Cntr;/* '<S251>/Inc_Cntr' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(uint8, GSMR_VAR_INIT) VeGSMC_Cnt_IncDec_Intermediate;/* '<S251>/Switch1' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(uint8, GSMR_VAR_INIT) VeGSMC_Cnt_IncDec_Intermediate1;/* '<S251>/Switch4' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(uint8, GSMR_VAR_INIT) VeGSMC_Cnt_IncDec_dec_cntr;/* '<S251>/Dec_Cntr' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(uint8, GSMR_VAR_INIT) VeGSMC_Cnt_InvalidPRNDCntr;/* '<S33>/Switch' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(uint8, GSMR_VAR_INIT) VeGSMC_Cnt_InvalidPRNDCntrInt;/* '<S80>/Switch2' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(float32, GSMR_VAR_INIT) VeGSMC_Cnt_MtrCntArb;/* '<S131>/Switch1' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(float32, GSMR_VAR_INIT) VeGSMC_Cnt_MtrCntDiff;/* '<S131>/Sum1' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(float32, GSMR_VAR_INIT) VeGSMC_Cnt_SumOfDiff;/* '<S131>/Sum' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(float32, GSMR_VAR_INIT) VeGSMC_Cnt_SumOfDiffInCnts;/* '<S131>/Switch' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(float32, GSMR_VAR_INIT) VeGSMC_Cnt_SumOfDiffInCntsArb;/* '<S131>/Switch3' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(uint16, GSMR_VAR_INIT) VeGSMC_Cnt_TestPassEnblCntrVal;/* '<S258>/Switch1' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(float32, GSMR_VAR_INIT) VeGSMC_I_PPawlMtrCrntDrawAbs;/* '<S229>/LV2_Abs_switch' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_ApplyEPB_Dist;/* '<S160>/Switch1' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_ApplyEPB_VehMov;/* '<S143>/AND' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_AtleastOneCondActv;/* '<S184>/Logical9' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_BrakeSigValid;/* '<S400>/Logical2' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_BrkAppldArb;/* '<S400>/Switch' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_BrkAppld_NLock;/* '<S400>/Switch1' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_ChngInSt;/* '<S128>/Logical2' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_ChngInSt_Cnfrm;/* '<S259>/OR1' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_ChngInSt_DisEng;/* '<S128>/Logical15' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_ChngInSt_Eng;/* '<S128>/Logical14' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_CmndToEngPPawlMtr;/* '<S128>/Logical1' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_CondOkToSetP1E18;/* '<S125>/Logical3' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_CondsOkToApplyEPB;/* '<S125>/Logical1' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_CrntSnsrMovCnfrmd;/* '<S296>/GreaterThan1' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_CrntSnsrMovDtctd;/* '<S277>/Comparison2' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_Curr_DisEng;/* '<S128>/Logical17' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_Curr_Eng;/* '<S128>/Logical16' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_DRLReq;/* '<S405>/Logical4' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_DrvReqNotNeutral;/* '<S34>/Logical18' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_DrvRqValid;/* '<S34>/Logical14' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_DrvRq_NotN;/* '<S34>/Logical26' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_EPBNotRequested;/* '<S125>/Logical6' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_EnblCnting;/* '<S131>/Logical1' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_EnblVehMovDet;/* '<S125>/Logical5' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_EndStpCrntDet_Arb;/* '<S184>/Switch' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_EndStpCrntMod;/* '<S184>/Switch1' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_FalsePlgInDetcd;/* '<S404>/Logical26' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_FromD_SpeedThrsh;/* '<S34>/Switch2' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_FromR_SpeedThrsh;/* '<S34>/Switch1' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_HBrdgFlt;/* '<S169>/Logical35' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_HBrdgFlt_Rst;/* '<S169>/Comparison14' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_InValidPPawlMtrSt;/* '<S260>/Logical9' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_InVldInNConds;/* '<S34>/Logical30' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_IncDecCntrLimRchd;/* '<S251>/Cntr_fail' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_KeyCrankCnfrmd;/* '<S402>/Switch' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_KeyInCrnk;/* '<S402>/Switch2' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_KeyInCrnkPos;/* '<S402>/Comparison16' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_KyCrnkd;/* '<S436>/OR1' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_LV2SnsrFltDetcd;/* '<S129>/Merge' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_LV2SnsrFltDetcd_Both;/* '<S277>/Logical14' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_LV2_CrntSnsrFltDetcd;/* '<S277>/Logical11' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_LV2_PosSnsrFltDetcd;/* '<S277>/Logical8' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_LVRationalityFld;/* '<S447>/AND' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_LVVoltDiffHigh;/* '<S403>/Comparison10' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_Level1NotInReqdGear;/* '<S34>/Logical16' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_LossOfPSA;/* '<S405>/Logical21' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_Lv1InNeutral;/* '<S34>/Comparison5' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_Lv1InPark;/* '<S125>/Comparison20' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_Lv1InPrk;/* '<S404>/Comparison1' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_Lv1_BothSnsrsFailed;/* '<S166>/Logical4' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_Lv2PRND_DBC_Reset;/* '<S80>/passDBCparam2' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_Lv2PRND_Park;/* '<S129>/Comparison3' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_Lv2PosSnsrMovCnfrmd;/* '<S297>/GreaterThan1' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_Lv2ePARK_DBC_Reset;/* '<S251>/passDBCparam2' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_MtrCntDiff_HiLim;/* '<S131>/Comparison2' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_MtrCntDiff_LoLim;/* '<S131>/Comparison1' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_MtrMov_MtrFlt;/* '<S125>/Logical2' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_NoCondActv;/* '<S184>/Logical10' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_NoCondActvTmrMatured;/* '<S184>/Comparison5' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_NoFalsePlgInThisKey;/* '<S460>/OR1' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_NoFalsePlgInThisKeyCyc;/* '<S404>/Logical34' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_NoKeyCrnk;/* '<S405>/Logical6' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_NoKeyOff;/* '<S405>/Logical7' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_NoLV1FltRpt;/* '<S277>/Logical' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_NoLv1EPBReq;/* '<S125>/Logical4' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_NoNeutralRq;/* '<S34>/Logical25' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_NoOvrdToNeutral;/* '<S34>/Logical7' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_NoPPawlFailure;/* '<S128>/Logical9' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_NoParkReq;/* '<S405>/Logical3' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_NoPrkReq;/* '<S33>/Logical15' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_NoPrkRq;/* '<S405>/Logical8' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_No_ePRNDMntrDisbl;/* '<S33>/Logical3' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_No_ePRND_Fail;/* '<S406>/Logical18' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_OTN_Arb;/* '<S405>/Logical9' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_OTN_DRLReqHiSpd;/* '<S401>/Comparison5' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_OTN_HiSpdDRLReq;/* '<S405>/Logical19' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_OTN_HiSpdDRLReqPrev;/* '<S405>/Logical2' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_OTN_HiSpd_P;/* '<S405>/Logical11' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_OTN_KeyOff;/* '<S405>/Logical17' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_OTN_MtrA_MtrB_InvrtrFlt;/* '<S405>/LogicalOperator3' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_OTN_PwrUp;/* '<S405>/Logical5' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_OTP_Arb;/* '<S406>/Switch5' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_OTP_ECMRq;/* '<S406>/Logical1' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_OTPrkR;/* '<S405>/Switch4' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_OutOfPInValid_Rst;/* '<S34>/Logical22' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_OutOfPInValid_Trg;/* '<S34>/Logical3' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_OutOfPrkBrkNotAppld;/* '<S34>/Logical5' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_Ovrd2Neut;/* '<S405>/Logical13' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_Ovrd2NeutVehSpd;/* '<S422>/AND' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_Ovrd2NeutVehSpdB4Dbnc;/* '<S401>/Logical5' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_Ovrd2NeutVehSpd_Hi;/* '<S401>/Comparison4' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_Ovrd2NeutVehSpd_Lo;/* '<S401>/Comparison3' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_Ovrd2Neut_NoPSA;/* '<S405>/Switch' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_Ovrd2Neut_UV;/* '<S405>/Logical32' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_Ovrd2Park;/* '<S406>/Logical30' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_Ovrd2PrkLVVoltThshActv;/* '<S406>/Logical3' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_PNAllwd;/* '<S405>/Logical1' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_PPMtrEndPosReached;/* '<S184>/Logical7' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_PPMtr_DisEngStValid;/* '<S271>/Switch1' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_PPMtr_EngStValid;/* '<S270>/Switch1' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_PPPA_Allowed;/* '<S407>/LogicalOperator' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_PPPA_NotAllwd;/* '<S34>/Logical_Operator1' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_PPStCanNotbeDtrmnd;/* '<S123>/Logical1' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_PPawlEngwthHghSpd;/* '<S35>/Logical_Operator5' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_PPawlEngwthHghSpd_Rst;/* '<S35>/Logical_Operator6' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_PPawlInsrtPassInP;/* '<S128>/Logical8' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_PPawlMtrWasMoving;/* '<S184>/Logical6' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_PPawlMtr_DisEng;/* '<S260>/Logical10' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_PPawlMtr_Eng;/* '<S260>/Logical2' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_PPawlMtr_OK2DisEng;/* '<S260>/Logical4' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_PPawl_InVldEngCmdLtch;/* '<S121>/OR1' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_PSATrgr;/* '<S402>/Logical4' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_ParkNotPossible;/* '<S26>/Logical1' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_PlgInDetcd;/* '<S404>/Logical2' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_PlgInSpdNotMet;/* '<S404>/Logical20' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_PlgInSpeedCondMet;/* '<S401>/Comparison1' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_PosSnsrMovDtctd;/* '<S277>/Comparison1' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_PrevPRNDLPos_NSA;/* '<S34>/Logical11' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_Prev_DisEng;/* '<S128>/Logical6' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_Prev_Eng;/* '<S128>/Logical10' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_PrkReq;/* '<S405>/Logical36' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_RmtStartSpdCondMet;/* '<S421>/AND' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_RmtStartSpdCondMetintmnt;/* '<S401>/Comparison2' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_RstSnsrMntrDlyd;/* '<S129>/UnitDelay3' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_RstSnsrMntr_VoltFB;/* '<S277>/Comparison5' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_RstUndesPPawlFlt;/* '<S260>/Logical1' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_SetDTC_VehMovDtctd;/* '<S128>/Logical3' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_SetP1E18;/* '<S125>/Logical7' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_SetP1E18_Arb;/* '<S141>/AND' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_SnsrStatusDet;/* '<S277>/Logical5' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_SpdCondMetForPPawlEng;/* '<S35>/Relational_Operator1' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_SpeedOkToEnblEPB;/* '<S125>/Comparison2' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_SpeedThrshForBEV;/* '<S34>/Logical31' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_SpeedThrshForD;/* '<S34>/Comparison9' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_SpeedThrshForR;/* '<S34>/Comparison8' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_SysInGear_Flt;/* '<S34>/Logical19' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_TXFlt_OTP;/* '<S406>/Logical19' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_ToParkVehicleSpdMet;/* '<S401>/Switch2' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_To_D_L_InValidTrg;/* '<S34>/Logical1' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_To_D_L_InValid_Rst;/* '<S34>/Logical29' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_To_R_InvalidTrg;/* '<S34>/Logical8' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_UnintendedGear_D;/* '<S34>/Logical10' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_UnintendedGear_L;/* '<S34>/Logical13' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_UnintendedGear_N;/* '<S34>/Logical17' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMC_b_UnintendedGear_R;/* '<S34>/Logical9' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(TeDFIB_e_FaultDebounceStatus, GSMR_VAR_INIT)
    VeGSMC_e_Lv2PRND_DBCStatus;        /* '<S83>/Switch1' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(TeDFIB_e_FaultDebounceStatus, GSMR_VAR_INIT)
    VeGSMC_e_Lv2ePARK_DBCStatus;       /* '<S261>/Switch1' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMI_b_ADAS_PPPA_Allwd;/* '<S8>/Logical_Operator3' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMI_b_BrkApplied;/* '<S8>/Switch7' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMI_b_BrkPdlStatFA;/* '<S8>/Switch11' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMI_b_BrkTravelDiffArb;/* '<S8>/Logical19' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMI_b_DisblMntrs;/* '<S8>/Logical5' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMI_b_DrvRqShftROTCAN_Drv;/* '<S522>/Logical2' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMI_b_DrvRqShftROTCAN_Neutral;/* '<S522>/Comparison3' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMI_b_DrvRqShftROTCAN_Prk;/* '<S522>/Logical3' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMI_b_DrvRqShftROTCAN_Rev;/* '<S522>/Logical9' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMI_b_DrvRqShftROTDPT_Drv;/* '<S523>/Logical2' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMI_b_DrvRqShftROTDPT_Neutral;/* '<S523>/Comparison3' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMI_b_DrvRqShftROTDPT_Prk;/* '<S523>/Logical3' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMI_b_DrvRqShftROTDPT_Rev;/* '<S523>/Logical9' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMI_b_DrvRqShftROT_CANCValid;/* '<S522>/Logical1' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMI_b_DrvRqShftROT_DPTValid;/* '<S523>/Logical1' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMI_b_Lv1DrvRejectReq;/* '<S522>/Logical7' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMI_b_Lv1DrvRejectReq_ePT;/* '<S523>/Logical7' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMI_b_Lv1DrvWithHighSpd;/* '<S522>/Logical5' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMI_b_Lv1DrvWithHighSpd_ePT;/* '<S523>/Logical5' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMI_b_Lv1EPBReq;/* '<S8>/Comparison4' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMI_b_Lv1RevRejectReq;/* '<S522>/Logical6' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMI_b_Lv1RevRejectReq_ePT;/* '<S523>/Logical6' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMI_b_Lv1RevWithHighSpd;/* '<S522>/Logical4' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMI_b_Lv1RevWithHighSpd_ePT;/* '<S523>/Logical4' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMI_b_Lv1ValidGear_CAN;/* '<S522>/Logical12' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMI_b_Lv1ValidGear_ePT;/* '<S523>/Logical12' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(boolean, GSMR_VAR_INIT) VeGSMI_b_Lv2BrkPdlStat;/* '<S8>/Switch4' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(TeGSMR_e_DrvRqShftROT, GSMR_VAR_INIT) VeGSMI_e_DrvRqShftROT_Prmry;/* '<S8>/Switch1' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(TeGSMR_e_DrvRqShftROT, GSMR_VAR_INIT) VeGSMI_e_DrvRqShftROT_Scndry;/* '<S8>/Switch2' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(TeTRGR_e_TransRangeState, GSMR_VAR_INIT)
    VeGSMI_e_Lv2Lv1VldtdTransRngSt;    /* '<S8>/Switch5' */

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static VAR(TeGSMR_e_ParkingGearShiftReq_BSM, GSMR_VAR_INIT)
    VeGSMI_e_ParkingGearShftRq_BSM;    /* '<S313>/DataTypeConversion' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_GSMR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_GSMR
#include "MemMap.h"

CONST(ConstB_GSMR_ac_T, GSMR_VAR_INIT) GSMR_ac_ConstB =
{
    CeGSMR_e_PPAWL_NotDetermined,      /* '<S604>/Const3' */
    CeGSMR_e_TransRangePark,           /* '<S604>/Const1' */
    CeGSMR_e_TransRangePark,           /* '<S604>/Const12' */
    CeGSMR_e_TransRangePark,           /* '<S604>/Const13' */
    CeGSMR_e_PRNDInit,                 /* '<S604>/Const2' */
    CeDFIB_e_Init,                     /* '<S606>/Constant' */
    CeDFIB_e_Init                      /* '<S605>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_GSMR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_GSMR
#include "MemMap.h"

VAR(B_GSMR_ac_T, GSMR_VAR_INIT) GSMR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_GSMR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_GSMR
#include "MemMap.h"

VAR(DW_GSMR_ac_T, GSMR_VAR_INIT) GSMR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_GSMR
#include "MemMap.h"
#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static FUNC(void, GSMR_CODE_LOCAL) GSMR_ac_Dtmn_Lv2_PRND_Pos(void);

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static FUNC(void, GSMR_CODE_LOCAL) GSMR_ac_Monitor_ePRND_Init(void);

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static FUNC(void, GSMR_CODE_LOCAL) GSMR_ac_Monitor_ePRND_Update(void);

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static FUNC(void, GSMR_CODE_LOCAL) GSMR_ac_Monitor_ePRND(void);

#endif

/* Output and update for atomic system: '<S26>/Dtmn_Lv2_PRND_Pos' */
#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static FUNC(void, GSMR_CODE_LOCAL) GSMR_ac_Dtmn_Lv2_PRND_Pos(void)
{
    /* Switch: '<S30>/Switch1' incorporates:
     *  Constant: '<S47>/Constant'
     *  Constant: '<S49>/Constant'
     *  Constant: '<S50>/Constant'
     *  Constant: '<S59>/Constant'
     *  Constant: '<S61>/Constant'
     *  Constant: '<S63>/Constant'
     *  Constant: '<S65>/Constant'
     *  Constant: '<S66>/Calib'
     *  Constant: '<S67>/Calib'
     *  Logic: '<S30>/Logical2'
     *  Logic: '<S30>/Logical3'
     *  RelationalOperator: '<S30>/Comparison1'
     *  RelationalOperator: '<S30>/Comparison2'
     *  RelationalOperator: '<S30>/Comparison3'
     *  RelationalOperator: '<S30>/Comparison4'
     *  RelationalOperator: '<S30>/Comparison5'
     *  RelationalOperator: '<S30>/Comparison6'
     *  RelationalOperator: '<S30>/Comparison7'
     *  Switch: '<S30>/Switch10'
     *  Switch: '<S30>/Switch2'
     *  Switch: '<S30>/Switch3'
     *  Switch: '<S30>/Switch6'
     *  Switch: '<S30>/Switch7'
     *  Switch: '<S30>/Switch8'
     *  Switch: '<S30>/Switch9'
     */
    if ((KeGSMR_b_Lv2PRNDInvldForCohFaultEn) ||
            ((KeGSMR_b_Lv2PRNDInvldForMonFaultEn) && (GSMR_ac_B.Switch3)))
    {
        /* Switch: '<S30>/Switch1' incorporates:
         *  Constant: '<S46>/Constant'
         */
        GSMR_ac_B.VeGSMR_e_VldtdPRNDPos = CeGSMR_e_TransRangeInvalid;
    }
    else if (((uint32)VeGSMI_e_Lv2Lv1VldtdTransRngSt) == CeTRGR_e_TransRangePark)
    {
        /* Switch: '<S30>/Switch7' incorporates:
         *  Constant: '<S60>/Constant'
         *  Switch: '<S30>/Switch1'
         */
        GSMR_ac_B.VeGSMR_e_VldtdPRNDPos = CeGSMR_e_TransRangePark;
    }
    else if (((uint32)VeGSMI_e_Lv2Lv1VldtdTransRngSt) ==
             CeTRGR_e_TransRangeReverse)
    {
        /* Switch: '<S30>/Switch8' incorporates:
         *  Constant: '<S62>/Constant'
         *  Switch: '<S30>/Switch1'
         *  Switch: '<S30>/Switch7'
         */
        GSMR_ac_B.VeGSMR_e_VldtdPRNDPos = CeGSMR_e_TransRangeReverse;
    }
    else if (((uint32)VeGSMI_e_Lv2Lv1VldtdTransRngSt) ==
             CeTRGR_e_TransRangeNeutral)
    {
        /* Switch: '<S30>/Switch9' incorporates:
         *  Constant: '<S64>/Constant'
         *  Switch: '<S30>/Switch1'
         *  Switch: '<S30>/Switch7'
         *  Switch: '<S30>/Switch8'
         */
        GSMR_ac_B.VeGSMR_e_VldtdPRNDPos = CeGSMR_e_TransRangeNeutral;
    }
    else if (((uint32)VeGSMI_e_Lv2Lv1VldtdTransRngSt) ==
             CeTRGR_e_TransRangeDrive)
    {
        /* Switch: '<S30>/Switch10' incorporates:
         *  Constant: '<S48>/Constant'
         *  Switch: '<S30>/Switch1'
         *  Switch: '<S30>/Switch7'
         *  Switch: '<S30>/Switch8'
         *  Switch: '<S30>/Switch9'
         */
        GSMR_ac_B.VeGSMR_e_VldtdPRNDPos = CeGSMR_e_TransRangeDrive;
    }
    else if (((uint32)VeGSMI_e_Lv2Lv1VldtdTransRngSt) ==
             CeTRGR_e_TransRangeDrive1)
    {
        /* Switch: '<S30>/Switch2' incorporates:
         *  Constant: '<S51>/Constant'
         *  Switch: '<S30>/Switch1'
         *  Switch: '<S30>/Switch10'
         *  Switch: '<S30>/Switch7'
         *  Switch: '<S30>/Switch8'
         *  Switch: '<S30>/Switch9'
         */
        GSMR_ac_B.VeGSMR_e_VldtdPRNDPos = CeGSMR_e_TransRange_L;
    }
    else if (((uint32)VeGSMI_e_Lv2Lv1VldtdTransRngSt) ==
             CeTRGR_e_NoSelectionAvailable)
    {
        /* Switch: '<S30>/Switch6' incorporates:
         *  Constant: '<S57>/Constant'
         *  Switch: '<S30>/Switch1'
         *  Switch: '<S30>/Switch10'
         *  Switch: '<S30>/Switch2'
         *  Switch: '<S30>/Switch7'
         *  Switch: '<S30>/Switch8'
         *  Switch: '<S30>/Switch9'
         */
        GSMR_ac_B.VeGSMR_e_VldtdPRNDPos = CeGSMR_e_NoSlctnAvlbl;
    }
    else if (((uint32)VeGSMI_e_Lv2Lv1VldtdTransRngSt) ==
             CeTRGR_e_TransRangeIllegal)
    {
        /* Switch: '<S30>/Switch3' incorporates:
         *  Constant: '<S52>/Constant'
         *  Switch: '<S30>/Switch1'
         *  Switch: '<S30>/Switch10'
         *  Switch: '<S30>/Switch2'
         *  Switch: '<S30>/Switch6'
         *  Switch: '<S30>/Switch7'
         *  Switch: '<S30>/Switch8'
         *  Switch: '<S30>/Switch9'
         */
        GSMR_ac_B.VeGSMR_e_VldtdPRNDPos = CeGSMR_e_TransRangeInvalid;
    }
    else
    {
        /* Switch: '<S30>/Switch1' incorporates:
         *  Switch: '<S30>/Switch10'
         *  Switch: '<S30>/Switch2'
         *  Switch: '<S30>/Switch6'
         *  Switch: '<S30>/Switch7'
         *  Switch: '<S30>/Switch8'
         *  Switch: '<S30>/Switch9'
         *  UnitDelay: '<S30>/UnitDelay'
         */
        GSMR_ac_B.VeGSMR_e_VldtdPRNDPos =
            GSMR_ac_DW.VeGSMR_e_Lv2VldtdPRNDPosPrev;
    }

    /* End of Switch: '<S30>/Switch1' */

    /* Switch: '<S30>/Switch5' incorporates:
     *  Constant: '<S54>/Constant'
     *  Constant: '<S58>/Constant'
     *  RelationalOperator: '<S30>/Comparison10'
     *  RelationalOperator: '<S30>/Comparison8'
     *  Switch: '<S30>/Switch4'
     */
    if (((uint32)VeGSMI_e_Lv2Lv1VldtdTransRngSt) == CeTRGR_e_TransRangeReverse)
    {
        /* Switch: '<S30>/Switch5' incorporates:
         *  Constant: '<S55>/Constant'
         */
        GSMR_ac_B.VeGSMR_e_VldtdPRNDPosDR = CeGSMR_e_TransRangeReverse;
    }
    else if (((uint32)VeGSMI_e_Lv2Lv1VldtdTransRngSt) ==
             CeTRGR_e_TransRangeDrive)
    {
        /* Switch: '<S30>/Switch4' incorporates:
         *  Constant: '<S53>/Constant'
         *  Switch: '<S30>/Switch5'
         */
        GSMR_ac_B.VeGSMR_e_VldtdPRNDPosDR = CeGSMR_e_TransRangeDrive;
    }
    else
    {
        /* Switch: '<S30>/Switch5' incorporates:
         *  Constant: '<S56>/Constant'
         *  Switch: '<S30>/Switch4'
         */
        GSMR_ac_B.VeGSMR_e_VldtdPRNDPosDR = CeGSMR_e_NoSlctnAvlbl;
    }

    /* End of Switch: '<S30>/Switch5' */

    /* Update for UnitDelay: '<S30>/UnitDelay' incorporates:
     *  Switch: '<S30>/Switch1'
     */
    GSMR_ac_DW.VeGSMR_e_Lv2VldtdPRNDPosPrev = GSMR_ac_B.VeGSMR_e_VldtdPRNDPos;
}

#endif

/* System initialize for atomic system: '<S6>/Monitor_ePRND' */
#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static FUNC(void, GSMR_CODE_LOCAL) GSMR_ac_Monitor_ePRND_Init(void)
{
    /* InitializeConditions for UnitDelay: '<S29>/UnitDelay2' */
    GSMR_ac_DW.VeGSMI_e_CANKeyStatus_Prev = CeLTIR_e_IGN_INIT;
}

#endif

/* Outputs for atomic system: '<S6>/Monitor_ePRND' */
#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static FUNC(void, GSMR_CODE_LOCAL) GSMR_ac_Monitor_ePRND(void)
{
    float32 tmp;
    uint8 rtb_Inc_Cntr;
    boolean Compare;
    boolean rtb_VeGSMR_b_DrvrParkReqCnfrmd_ePRND;
    boolean rtb_VeGSMR_b_ToParkSpdCndMet;
    boolean rtb_VeGSMR_b_To_D_L_SpdCondMet;
    boolean rtb_VeGSMR_b_To_R_SpdCondMet;

    /* RelationalOperator: '<S28>/Comparison2' incorporates:
     *  Constant: '<S40>/Calib'
     */
    rtb_VeGSMR_b_To_R_SpdCondMet = (GSMR_ac_B.Gain <=
        KeGSMR_v_ToR_SpdForGearTrans);

    /* RelationalOperator: '<S28>/Comparison3' incorporates:
     *  Constant: '<S38>/Calib'
     */
    rtb_VeGSMR_b_To_D_L_SpdCondMet = (GSMR_ac_B.Gain >=
        KeGSMR_v_ToD_SpdForGearTrans);

    /* Switch: '<S28>/Switch2' incorporates:
     *  Constant: '<S36>/Calib'
     *  Constant: '<S41>/ConstantValue1'
     *  RelationalOperator: '<S41>/Comparison'
     *  Switch: '<S41>/LV2_Abs_switch'
     */
    if (KeGSMR_b_ToP_TOSRSpdCntMet)
    {
        /* Switch: '<S28>/Switch2' incorporates:
         *  Constant: '<S37>/Calib'
         *  RelationalOperator: '<S28>/Comparison4'
         */
        rtb_VeGSMR_b_ToParkSpdCndMet = (GSMR_ac_B.Switch1 <=
            KeGSMR_n_ToP_TOSRSpdForGearTrans);
    }
    else
    {
        if (GSMR_ac_B.Gain < 0.0F)
        {
            /* Switch: '<S41>/LV2_Abs_switch' incorporates:
             *  Product: '<S41>/Product'
             */
            tmp = -GSMR_ac_B.Gain;
        }
        else
        {
            /* Switch: '<S41>/LV2_Abs_switch' */
            tmp = GSMR_ac_B.Gain;
        }

        /* Switch: '<S28>/Switch2' incorporates:
         *  Constant: '<S39>/Calib'
         *  RelationalOperator: '<S28>/Comparison1'
         */
        rtb_VeGSMR_b_ToParkSpdCndMet = (tmp <= KeGSMR_v_ToParkSpdForGearTrans);
    }

    /* End of Switch: '<S28>/Switch2' */

    /* Logic: '<S45>/OR1' incorporates:
     *  Constant: '<S42>/Constant'
     *  Constant: '<S43>/Constant'
     *  Constant: '<S44>/Constant'
     *  Logic: '<S29>/Logical1'
     *  Logic: '<S45>/NOT'
     *  Logic: '<S45>/OR'
     *  RelationalOperator: '<S29>/Comparison7'
     *  RelationalOperator: '<S29>/Comparison8'
     *  RelationalOperator: '<S29>/Comparison9'
     *  UnitDelay: '<S29>/UnitDelay2'
     *  UnitDelay: '<S45>/UnitDelay1'
     */
    GSMR_ac_DW.VeGSMR_b_KeyOnOff_prev = (((((uint32)
        GSMR_ac_DW.VeGSMI_e_CANKeyStatus_Prev) != CeLTIR_e_IGN_INIT) &&
        (((uint32)GSMR_ac_B.TmpSignalConversionAtVeLTIR_e_Lv2KeyStsO) ==
         CeLTIR_e_IGN_INIT)) || ((((uint32)
        GSMR_ac_B.TmpSignalConversionAtVeLTIR_e_Lv2KeyStsO) == CeLTIR_e_IGN_INIT)
        && (GSMR_ac_DW.VeGSMR_b_KeyOnOff_prev)));

    /* RelationalOperator: '<S88>/Compare' incorporates:
     *  Constant: '<S88>/Constant'
     *  S-Function (sfix_bitop): '<S80>/Bit6'
     */
    Compare = ((((uint32)GSMR_ac_B.Gain_m) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S80>/EdgeFalling' */
    /* Logic: '<S26>/Logical' incorporates:
     *  UnitDelay: '<S84>/Unit Delay'
     */
    rtb_VeGSMR_b_DrvrParkReqCnfrmd_ePRND = GSMR_ac_DW.UnitDelay_DSTATE_b;

    /* Update for UnitDelay: '<S84>/Unit Delay' */
    GSMR_ac_DW.UnitDelay_DSTATE_b = Compare;

    /* Logic: '<S80>/passDBCparam2' incorporates:
     *  Constant: '<S78>/Calib'
     *  Logic: '<S33>/LogicalOperator'
     *  Logic: '<S81>/AND1'
     *  Logic: '<S81>/OR2'
     *  Logic: '<S84>/AND'
     *  Logic: '<S84>/OR1'
     *  UnitDelay: '<S45>/UnitDelay1'
     *  UnitDelay: '<S81>/UnitDelay'
     */
    VeGSMC_b_Lv2PRND_DBC_Reset = ((((GSMR_ac_B.VeGSMI_b_ClrDiagCntrTmrs) ||
        ((GSMR_ac_DW.VeGSMR_b_KeyOnOff_prev) &&
         (!GSMR_ac_DW.VeGSMC_b_PassTest_P1E18_prev))) ||
        (KeGSMR_b_OvrdReset_PRND)) || ((!Compare) &&
        rtb_VeGSMR_b_DrvrParkReqCnfrmd_ePRND));

    /* End of Outputs for SubSystem: '<S80>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S26>/ProcBrkOutOfPark' */
    /* RelationalOperator: '<S32>/Comparison3' incorporates:
     *  Constant: '<S69>/Constant'
     */
    GSMR_ac_B.VeGSMR_b_PPAWL_Disengaging = (((uint32)
        GSMR_ac_B.DataTypeConversion_g) == CeGSMR_e_PPAWL_Disengaging);

    /* Logic: '<S73>/OR1' incorporates:
     *  Constant: '<S68>/Constant'
     *  Constant: '<S70>/Constant'
     *  Logic: '<S32>/Logical1'
     *  Logic: '<S32>/Logical10'
     *  Logic: '<S72>/AND1'
     *  Logic: '<S72>/OR2'
     *  Logic: '<S73>/NOT'
     *  Logic: '<S73>/OR'
     *  RelationalOperator: '<S32>/Comparison1'
     *  RelationalOperator: '<S32>/Comparison4'
     *  UnitDelay: '<S72>/UnitDelay'
     *  UnitDelay: '<S73>/UnitDelay1'
     */
    GSMR_ac_DW.VeGSMR_b_OutofParkBrkApplied_Latch_prev = (((GSMR_ac_B.AND_d) &&
        ((GSMR_ac_B.VeGSMR_b_PPAWL_Disengaging) &&
         (!GSMR_ac_DW.VeGSMR_b_PPAWL_Disengage_prev))) || (((((uint32)
        GSMR_ac_B.DataTypeConversion_g) != CeGSMR_e_PPAWL_Engaging) && (((uint32)
        GSMR_ac_B.DataTypeConversion_g) != CeGSMR_e_PPAWL_Engaged)) &&
        (GSMR_ac_DW.VeGSMR_b_OutofParkBrkApplied_Latch_prev)));

    /* Switch: '<S32>/Switch12' incorporates:
     *  Constant: '<S71>/Calib'
     */
    if (KeGSMR_b_UseOutOfPrkBrkApld)
    {
        /* Switch: '<S32>/Switch12' incorporates:
         *  Logic: '<S32>/Logical11'
         *  UnitDelay: '<S73>/UnitDelay1'
         */
        Compare = ((GSMR_ac_B.AND_d) ||
                   (GSMR_ac_DW.VeGSMR_b_OutofParkBrkApplied_Latch_prev));
    }
    else
    {
        /* Switch: '<S32>/Switch12' */
        Compare = GSMR_ac_B.AND_d;
    }

    /* End of Switch: '<S32>/Switch12' */
    /* End of Outputs for SubSystem: '<S26>/ProcBrkOutOfPark' */

    /* Outputs for Atomic SubSystem: '<S26>/ValidateGear' */
    /* RelationalOperator: '<S34>/Comparison1' incorporates:
     *  Constant: '<S93>/Constant'
     */
    GSMR_ac_B.VeGSMR_b_Lv1InD = (((uint32)VeGSMI_e_Lv2Lv1VldtdTransRngSt) ==
        CeTRGR_e_TransRangeDrive);

    /* RelationalOperator: '<S34>/Comparison2' incorporates:
     *  Constant: '<S91>/Constant'
     */
    GSMR_ac_B.VeGSMR_b_Lv1InR = (((uint32)VeGSMI_e_Lv2Lv1VldtdTransRngSt) ==
        CeTRGR_e_TransRangeReverse);

    /* RelationalOperator: '<S34>/Comparison3' incorporates:
     *  Constant: '<S94>/Constant'
     */
    GSMR_ac_B.VeGSMR_b_Lv1InL = (((uint32)VeGSMI_e_Lv2Lv1VldtdTransRngSt) ==
        CeTRGR_e_TransRangeDrive1);

    /* RelationalOperator: '<S34>/Comparison4' incorporates:
     *  Constant: '<S95>/Constant'
     */
    GSMR_ac_B.VeGSMR_b_LvInP = (((uint32)VeGSMI_e_Lv2Lv1VldtdTransRngSt) ==
        CeTRGR_e_TransRangePark);

    /* RelationalOperator: '<S34>/Comparison5' incorporates:
     *  Constant: '<S96>/Constant'
     */
    VeGSMC_b_Lv1InNeutral = (((uint32)VeGSMI_e_Lv2Lv1VldtdTransRngSt) ==
        CeTRGR_e_TransRangeNeutral);

    /* RelationalOperator: '<S34>/Comparison8' incorporates:
     *  Constant: '<S103>/Calib'
     */
    VeGSMC_b_SpeedThrshForR = (GSMR_ac_B.Gain > KeGSMR_v_FromR_SpeedThrsh);

    /* RelationalOperator: '<S34>/Comparison9' incorporates:
     *  Constant: '<S102>/Calib'
     */
    VeGSMC_b_SpeedThrshForD = (GSMR_ac_B.Gain < KeGSMR_v_FromD_SpeedThrsh);

    /* Logic: '<S34>/Logical11' incorporates:
     *  Constant: '<S92>/Constant'
     *  Constant: '<S97>/Constant'
     *  RelationalOperator: '<S34>/Comparison6'
     *  RelationalOperator: '<S34>/Comparison7'
     */
    VeGSMC_b_PrevPRNDLPos_NSA = ((((uint32)
        GSMR_ac_DW.VeGSMI_e_Lv2Lv1VldtdTransRngStPrev) ==
        CeGSMR_e_TransRangeInvalid) || (((uint32)
        GSMR_ac_DW.VeGSMI_e_Lv2Lv1VldtdTransRngStPrev) == CeGSMR_e_NoSlctnAvlbl));

    /* Logic: '<S34>/Logical8' incorporates:
     *  Logic: '<S105>/AND1'
     *  Logic: '<S105>/OR2'
     *  Logic: '<S34>/Logical2'
     *  UnitDelay: '<S105>/UnitDelay'
     */
    VeGSMC_b_To_R_InvalidTrg = (((GSMR_ac_B.VeGSMR_b_Lv1InR) &&
        (!GSMR_ac_DW.VeGSMR_b_Lv1InR_Prev_prev)) &&
        (!rtb_VeGSMR_b_To_R_SpdCondMet));

    /* Outputs for Atomic SubSystem: '<S26>/ValidatePark' */
    /* Logic: '<S34>/Logical20' incorporates:
     *  Logic: '<S35>/Logical3'
     *  UnitDelay: '<S45>/UnitDelay1'
     */
    rtb_VeGSMR_b_DrvrParkReqCnfrmd_ePRND = !GSMR_ac_DW.VeGSMR_b_KeyOnOff_prev;

    /* End of Outputs for SubSystem: '<S26>/ValidatePark' */

    /* Logic: '<S108>/OR1' incorporates:
     *  Logic: '<S108>/NOT'
     *  Logic: '<S108>/OR'
     *  Logic: '<S34>/Logical20'
     *  UnitDelay: '<S108>/UnitDelay1'
     */
    GSMR_ac_DW.VeGSMR_b_ToGearInValid_Prev_prev = ((VeGSMC_b_To_R_InvalidTrg) ||
        ((((!rtb_VeGSMR_b_To_R_SpdCondMet) &&
           rtb_VeGSMR_b_DrvrParkReqCnfrmd_ePRND) && (!VeGSMC_b_PrevPRNDLPos_NSA))
         && (GSMR_ac_DW.VeGSMR_b_ToGearInValid_Prev_prev)));

    /* Logic: '<S34>/Logical22' incorporates:
     *  UnitDelay: '<S45>/UnitDelay1'
     */
    VeGSMC_b_OutOfPInValid_Rst = ((Compare || (GSMR_ac_DW.VeGSMR_b_KeyOnOff_prev))
        || (VeGSMC_b_PrevPRNDLPos_NSA));

    /* Logic: '<S34>/Logical5' */
    VeGSMC_b_OutOfPrkBrkNotAppld = !Compare;

    /* Logic: '<S34>/Logical_Operator1' */
    VeGSMC_b_PPPA_NotAllwd = !VeGSMC_b_PPPA_Allowed;

    /* Logic: '<S34>/Logical3' incorporates:
     *  Constant: '<S98>/Calib'
     *  Logic: '<S104>/AND'
     *  Logic: '<S104>/OR1'
     *  UnitDelay: '<S104>/UnitDelay'
     */
    VeGSMC_b_OutOfPInValid_Trg = (((((!GSMR_ac_B.VeGSMR_b_LvInP) &&
        (GSMR_ac_DW.VeGSMC_b_Lv1NotP_Prev_prev)) &&
        (VeGSMC_b_OutOfPrkBrkNotAppld)) && (KeGSMR_b_EnbOutOfPrkMntr)) &&
        (VeGSMC_b_PPPA_NotAllwd));

    /* Logic: '<S109>/OR1' incorporates:
     *  Logic: '<S109>/NOT'
     *  Logic: '<S109>/OR'
     *  UnitDelay: '<S109>/UnitDelay1'
     */
    GSMR_ac_DW.VeGSMR_b_OutOfPInValid_Prev_prev = ((VeGSMC_b_OutOfPInValid_Trg) ||
        ((!VeGSMC_b_OutOfPInValid_Rst) &&
         (GSMR_ac_DW.VeGSMR_b_OutOfPInValid_Prev_prev)));

    /* Logic: '<S34>/Logical29' incorporates:
     *  UnitDelay: '<S45>/UnitDelay1'
     */
    VeGSMC_b_To_D_L_InValid_Rst = ((rtb_VeGSMR_b_To_D_L_SpdCondMet ||
        (GSMR_ac_DW.VeGSMR_b_KeyOnOff_prev)) || (VeGSMC_b_PrevPRNDLPos_NSA));

    /* Logic: '<S34>/Logical1' incorporates:
     *  Logic: '<S106>/AND1'
     *  Logic: '<S106>/OR2'
     *  Logic: '<S107>/AND1'
     *  Logic: '<S107>/OR2'
     *  Logic: '<S34>/Logical27'
     *  Logic: '<S34>/Logical28'
     *  UnitDelay: '<S106>/UnitDelay'
     *  UnitDelay: '<S107>/Unit Delay'
     */
    VeGSMC_b_To_D_L_InValidTrg = ((((GSMR_ac_B.VeGSMR_b_Lv1InD) &&
        (!GSMR_ac_DW.VeGSMR_b_Lv1InD_Prev_prev)) || ((GSMR_ac_B.VeGSMR_b_Lv1InL)
        && (!GSMR_ac_DW.VeGSMR_b_Lv1InL_Prev_prev))) &&
        (!rtb_VeGSMR_b_To_D_L_SpdCondMet));

    /* Logic: '<S110>/OR1' incorporates:
     *  Logic: '<S110>/NOT'
     *  Logic: '<S110>/OR'
     *  UnitDelay: '<S110>/UnitDelay1'
     */
    GSMR_ac_DW.VeGSMC_b_To_D_L_InValid_Prev_prev = ((VeGSMC_b_To_D_L_InValidTrg)
        || ((!VeGSMC_b_To_D_L_InValid_Rst) &&
            (GSMR_ac_DW.VeGSMC_b_To_D_L_InValid_Prev_prev)));

    /* Logic: '<S34>/Logical14' */
    VeGSMC_b_DrvRqValid = !GSMR_ac_B.VeGSMR_b_Lv2DrvReq_SNA;

    /* Logic: '<S34>/Logical31' incorporates:
     *  Constant: '<S100>/Calib'
     *  Constant: '<S101>/Calib'
     */
    VeGSMC_b_SpeedThrshForBEV = ((KeGSMR_b_ShftProxi) || (KeGSMR_b_VFBEV));

    /* Switch: '<S34>/Switch2' */
    rtb_VeGSMR_b_To_D_L_SpdCondMet = !VeGSMC_b_SpeedThrshForBEV;

    /* Switch: '<S34>/Switch2' */
    VeGSMC_b_FromD_SpeedThrsh = (rtb_VeGSMR_b_To_D_L_SpdCondMet ||
        (VeGSMC_b_SpeedThrshForD));

    /* Logic: '<S34>/Logical10' incorporates:
     *  Logic: '<S34>/Logical12'
     */
    VeGSMC_b_UnintendedGear_D = ((((GSMR_ac_B.VeGSMR_b_Lv1InD) &&
        (!GSMR_ac_B.VeGSMR_b_Lv2DrvReq_D_Obsrvd)) && (VeGSMC_b_DrvRqValid)) &&
        (VeGSMC_b_FromD_SpeedThrsh));

    /* Logic: '<S34>/Logical13' incorporates:
     *  Logic: '<S34>/Logical15'
     */
    VeGSMC_b_UnintendedGear_L = (((GSMR_ac_B.VeGSMR_b_Lv1InL) &&
        (!GSMR_ac_B.VeGSMR_b_Lv2DrvReq_L_Obsrvd)) && (VeGSMC_b_DrvRqValid));

    /* Switch: '<S34>/Switch1' */
    VeGSMC_b_FromR_SpeedThrsh = (rtb_VeGSMR_b_To_D_L_SpdCondMet ||
        (VeGSMC_b_SpeedThrshForR));

    /* Logic: '<S34>/Logical9' incorporates:
     *  Logic: '<S34>/Logical6'
     */
    VeGSMC_b_UnintendedGear_R = ((((GSMR_ac_B.VeGSMR_b_Lv1InR) &&
        (!GSMR_ac_B.VeGSMR_b_Lv2DrvReq_R_Obsrvd)) && (VeGSMC_b_DrvRqValid)) &&
        (VeGSMC_b_FromR_SpeedThrsh));

    /* Logic: '<S34>/Logical16' */
    VeGSMC_b_Level1NotInReqdGear = (((VeGSMC_b_UnintendedGear_R) ||
        (VeGSMC_b_UnintendedGear_D)) || (VeGSMC_b_UnintendedGear_L));

    /* Logic: '<S34>/Logical7' */
    VeGSMC_b_NoOvrdToNeutral = !GSMR_ac_B.VeGSMR_b_OvrdToNeutral;

    /* Logic: '<S34>/Logical18' */
    VeGSMC_b_DrvReqNotNeutral = !GSMR_ac_B.VeGSMR_b_Lv2DrvReq_N_Obsrvd;

    /* Logic: '<S34>/Logical26' */
    VeGSMC_b_DrvRq_NotN = ((VeGSMC_b_DrvReqNotNeutral) && (VeGSMC_b_DrvRqValid));

    /* Logic: '<S34>/Logical25' */
    VeGSMC_b_NoNeutralRq = ((VeGSMC_b_NoOvrdToNeutral) && (VeGSMC_b_DrvRq_NotN));

    /* Logic: '<S34>/Logical30' */
    VeGSMC_b_InVldInNConds = ((VeGSMC_b_NoNeutralRq) ||
        (GSMR_ac_B.VeGSMR_b_OvrdToPark));

    /* Logic: '<S34>/Logical17' incorporates:
     *  Constant: '<S99>/Calib'
     */
    VeGSMC_b_UnintendedGear_N = (((VeGSMC_b_Lv1InNeutral) &&
        (KeGSMR_b_NReqMntrEnbl)) && (VeGSMC_b_InVldInNConds));

    /* Logic: '<S34>/Logical19' incorporates:
     *  Logic: '<S34>/Logical23'
     *  Logic: '<S34>/Logical24'
     */
    VeGSMC_b_SysInGear_Flt = ((((GSMR_ac_B.VeGSMR_b_Lv1InR) ||
        (GSMR_ac_B.VeGSMR_b_Lv1InD)) || (GSMR_ac_B.VeGSMR_b_Lv1InL)) &&
        ((GSMR_ac_B.VeGSMR_b_OvrdToNeutral) || (GSMR_ac_B.VeGSMR_b_OvrdToPark)));

    /* End of Outputs for SubSystem: '<S26>/ValidateGear' */

    /* Outputs for Atomic SubSystem: '<S26>/ValidatePark' */
    /* RelationalOperator: '<S35>/Comparison20' incorporates:
     *  Constant: '<S111>/Constant'
     */
    GSMR_ac_B.VeGSMR_b_Lv1InP = (((uint32)VeGSMI_e_Lv2Lv1VldtdTransRngSt) ==
        CeTRGR_e_TransRangePark);

    /* Logic: '<S35>/Logical14' incorporates:
     *  Logic: '<S35>/Logical1'
     *  Logic: '<S35>/Logical3'
     */
    rtb_VeGSMR_b_ToParkSpdCndMet = !rtb_VeGSMR_b_ToParkSpdCndMet;

    /* Logic: '<S120>/OR1' incorporates:
     *  Logic: '<S119>/AND1'
     *  Logic: '<S119>/OR2'
     *  Logic: '<S120>/NOT'
     *  Logic: '<S120>/OR'
     *  Logic: '<S35>/Logical14'
     *  Logic: '<S35>/Logical3'
     *  Logic: '<S35>/Logical6'
     *  Logic: '<S35>/Logical7'
     *  UnitDelay: '<S119>/UnitDelay'
     *  UnitDelay: '<S120>/UnitDelay1'
     */
    GSMR_ac_DW.VeGSMR_b_ToPInvalid_prev = ((((GSMR_ac_B.VeGSMR_b_Lv1InP) &&
        (!GSMR_ac_DW.VeGSMR_b_Lv1InP_Prev_prev)) && rtb_VeGSMR_b_ToParkSpdCndMet)
        || (((rtb_VeGSMR_b_ToParkSpdCndMet &&
              rtb_VeGSMR_b_DrvrParkReqCnfrmd_ePRND) &&
             (GSMR_ac_B.VeGSMR_b_Lv1InP)) &&
            (GSMR_ac_DW.VeGSMR_b_ToPInvalid_prev)));

    /* RelationalOperator: '<S35>/Relational_Operator1' incorporates:
     *  Abs: '<S35>/Abs'
     *  Constant: '<S118>/Calib'
     */
    VeGSMC_b_SpdCondMetForPPawlEng = (fabsf(GSMR_ac_B.Switch1) <=
        KeGSMR_n_PPawlEngageThsd);

    /* Logic: '<S26>/Logical' incorporates:
     *  Constant: '<S114>/Constant'
     *  DataTypeConversion: '<S312>/DataTypeConversion'
     *  RelationalOperator: '<S35>/Relational_Operator'
     */
    rtb_VeGSMR_b_DrvrParkReqCnfrmd_ePRND = (((uint32)
        GSMR_ac_B.DataTypeConversion) == CePPCR_e_Req_Engage);

    /* Logic: '<S35>/Logical_Operator6' incorporates:
     *  Logic: '<S35>/Logical_Operator'
     *  UnitDelay: '<S45>/UnitDelay1'
     */
    VeGSMC_b_PPawlEngwthHghSpd_Rst = (((VeGSMC_b_SpdCondMetForPPawlEng) ||
        (GSMR_ac_DW.VeGSMR_b_KeyOnOff_prev)) ||
        (!rtb_VeGSMR_b_DrvrParkReqCnfrmd_ePRND));

    /* Logic: '<S35>/Logical_Operator5' incorporates:
     *  Logic: '<S35>/Logical_Operator2'
     */
    VeGSMC_b_PPawlEngwthHghSpd = (rtb_VeGSMR_b_DrvrParkReqCnfrmd_ePRND &&
        (!VeGSMC_b_SpdCondMetForPPawlEng));

    /* Logic: '<S121>/OR1' incorporates:
     *  Logic: '<S121>/NOT'
     *  Logic: '<S121>/OR'
     *  UnitDelay: '<S121>/UnitDelay1'
     */
    VeGSMC_b_PPawl_InVldEngCmdLtch = ((VeGSMC_b_PPawlEngwthHghSpd) ||
        ((!VeGSMC_b_PPawlEngwthHghSpd_Rst) && (VeGSMC_b_PPawl_InVldEngCmdLtch)));

    /* Logic: '<S35>/Logical_Operator4' incorporates:
     *  Constant: '<S116>/Calib'
     */
    GSMR_ac_B.VeGSMR_b_PPawl_InVldEngCmd = ((VeGSMC_b_PPawl_InVldEngCmdLtch) &&
        (KeGSMR_b_EnblPPawlCnd_Park));

    /* End of Outputs for SubSystem: '<S26>/ValidatePark' */

    /* Logic: '<S26>/Logical1' incorporates:
     *  Constant: '<S31>/Calib'
     */
    VeGSMC_b_ParkNotPossible = ((GSMR_ac_B.AND_j) && (KeGSMR_b_ParkNotPossible));

    /* Logic: '<S33>/Logical3' */
    VeGSMC_b_No_ePRNDMntrDisbl = !VeGSMI_b_DisblMntrs;

    /* Outputs for Atomic SubSystem: '<S26>/ValidateGear' */
    /* Outputs for Atomic SubSystem: '<S26>/ValidatePark' */
    /* Switch: '<S80>/dec_if_Ok_else_inc' incorporates:
     *  Constant: '<S112>/Constant'
     *  Constant: '<S113>/Constant'
     *  Constant: '<S115>/Constant'
     *  Constant: '<S117>/Calib'
     *  Constant: '<S77>/Calib'
     *  Logic: '<S33>/Logical1'
     *  Logic: '<S33>/Logical16'
     *  Logic: '<S33>/Logical2'
     *  Logic: '<S34>/Logical21'
     *  Logic: '<S34>/Logical4'
     *  Logic: '<S35>/Logical1'
     *  Logic: '<S35>/Logical2'
     *  Logic: '<S35>/Logical4'
     *  Logic: '<S35>/Logical5'
     *  Logic: '<S35>/Logical8'
     *  Logic: '<S35>/Logical9'
     *  MinMax: '<S80>/FixPtMinax'
     *  RelationalOperator: '<S35>/Comparison1'
     *  RelationalOperator: '<S35>/Comparison2'
     *  RelationalOperator: '<S35>/Comparison3'
     *  UnitDelay: '<S108>/UnitDelay1'
     *  UnitDelay: '<S109>/UnitDelay1'
     *  UnitDelay: '<S110>/UnitDelay1'
     *  UnitDelay: '<S120>/UnitDelay1'
     *  UnitDelay: '<S80>/UnitDelay'
     */
    if (((((((((VeGSMC_b_SysInGear_Flt) || (VeGSMC_b_Level1NotInReqdGear)) ||
              (VeGSMC_b_UnintendedGear_N)) ||
             (((GSMR_ac_DW.VeGSMR_b_ToGearInValid_Prev_prev) ||
               (GSMR_ac_DW.VeGSMC_b_To_D_L_InValid_Prev_prev)) ||
              (GSMR_ac_DW.VeGSMR_b_OutOfPInValid_Prev_prev))) ||
            (GSMR_ac_DW.VeGSMR_b_ToPInvalid_prev)) ||
            (((rtb_VeGSMR_b_ToParkSpdCndMet || (((((uint32)
                  GSMR_ac_B.DataTypeConversion_g) != CeGSMR_e_PPAWL_Engaged) &&
                (((uint32)GSMR_ac_B.DataTypeConversion_g) !=
                 CeGSMR_e_PPAWL_Engaging)) && (!KeGSMR_b_IgnorPPawlSts))) &&
              (GSMR_ac_B.VeGSMR_b_Lv1InP)) && ((((uint32)
               GSMR_ac_B.DataTypeConversion_g) != CeGSMR_e_PPAWL_NotDetermined) ||
             (KeGSMR_b_IgnorPPawlSts)))) && (!VeGSMC_b_ParkNotPossible)) &&
            (KeGSMR_b_EnblDTC4PRNDFail)) && (VeGSMC_b_No_ePRNDMntrDisbl))
    {
        /* Sum: '<S80>/Inc_Cntr' incorporates:
         *  Constant: '<S74>/Calib'
         *  UnitDelay: '<S80>/UnitDelay'
         */
        rtb_Inc_Cntr = (uint8)(((uint32)VeGSMC_Cnt_InvalidPRNDCntrInt) +
                               ((uint32)KeGSMR_Cnt_PRNDMntrCntrInc));

        /* Switch: '<S80>/Switch1' incorporates:
         *  RelationalOperator: '<S80>/Relational_Operator'
         *  UnitDelay: '<S80>/UnitDelay'
         */
        if (rtb_Inc_Cntr < VeGSMC_Cnt_InvalidPRNDCntrInt)
        {
            /* Switch: '<S80>/dec_if_Ok_else_inc' incorporates:
             *  Constant: '<S80>/CounterMax'
             */
            rtb_Inc_Cntr = MAX_uint8_T;
        }

        /* End of Switch: '<S80>/Switch1' */
    }
    else
    {
        if (((sint32)VeGSMC_Cnt_InvalidPRNDCntrInt) <= 1)
        {
            /* MinMax: '<S80>/FixPtMinax' */
            VeGSMC_Cnt_InvalidPRNDCntrInt = 1U;
        }

        /* Switch: '<S80>/dec_if_Ok_else_inc' incorporates:
         *  Constant: '<S33>/FixedDecrement2'
         *  Sum: '<S80>/Dec_Cntr'
         */
        rtb_Inc_Cntr = (uint8)((sint32)(((sint32)VeGSMC_Cnt_InvalidPRNDCntrInt)
                                - 1));
    }

    /* End of Switch: '<S80>/dec_if_Ok_else_inc' */
    /* End of Outputs for SubSystem: '<S26>/ValidatePark' */
    /* End of Outputs for SubSystem: '<S26>/ValidateGear' */

    /* Switch: '<S80>/Switch3' incorporates:
     *  Constant: '<S75>/Calib'
     *  Constant: '<S80>/ResetZero1'
     *  Logic: '<S80>/Cntr_fail'
     *  RelationalOperator: '<S80>/Enough_counts_to_Fail'
     *  UnitDelay: '<S80>/UnitDelay1'
     */
    if (VeGSMC_b_Lv2PRND_DBC_Reset)
    {
        GSMR_ac_B.Switch3 = false;
    }
    else
    {
        GSMR_ac_B.Switch3 = ((rtb_Inc_Cntr >= KeGSMR_Cnt_PRNDMntrCntrLim) ||
                             (GSMR_ac_DW.UnitDelay1_DSTATE_d));
    }

    /* End of Switch: '<S80>/Switch3' */

    /* Outputs for Atomic SubSystem: '<S26>/Dtmn_Lv2_PRND_Pos' */
    GSMR_ac_Dtmn_Lv2_PRND_Pos();

    /* End of Outputs for SubSystem: '<S26>/Dtmn_Lv2_PRND_Pos' */

    /* Logic: '<S26>/Logical' */
    rtb_VeGSMR_b_DrvrParkReqCnfrmd_ePRND =
        ((GSMR_ac_B.VeGSMR_b_Lv2DrvReq_P_Obsrvd) &&
         (VeGSMC_b_ToParkVehicleSpdMet));

    /* Switch: '<S80>/Switch2' incorporates:
     *  Switch: '<S83>/Switch1'
     */
    if (VeGSMC_b_Lv2PRND_DBC_Reset)
    {
        /* MinMax: '<S80>/FixPtMinax' incorporates:
         *  Constant: '<S80>/ResetZero'
         *  Switch: '<S80>/Switch2'
         */
        VeGSMC_Cnt_InvalidPRNDCntrInt = 0U;

        /* Switch: '<S83>/Switch1' incorporates:
         *  Constant: '<S86>/Constant'
         */
        VeGSMC_e_Lv2PRND_DBCStatus = CeDFIB_e_Init;
    }
    else
    {
        /* MinMax: '<S80>/FixPtMinax' incorporates:
         *  Switch: '<S80>/Switch2'
         */
        VeGSMC_Cnt_InvalidPRNDCntrInt = rtb_Inc_Cntr;

        /* Switch: '<S83>/Switch2' incorporates:
         *  Constant: '<S89>/Constant'
         *  RelationalOperator: '<S89>/Compare'
         *  Switch: '<S83>/Switch3'
         */
        if (GSMR_ac_B.Switch3)
        {
            /* Switch: '<S83>/Switch1' incorporates:
             *  Constant: '<S85>/Constant'
             *  Switch: '<S83>/Switch2'
             */
            VeGSMC_e_Lv2PRND_DBCStatus = CeDFIB_e_Fail;
        }
        else if (((sint32)VeGSMC_Cnt_InvalidPRNDCntrInt) == 0)
        {
            /* Switch: '<S83>/Switch3' incorporates:
             *  Constant: '<S87>/Constant'
             *  Switch: '<S83>/Switch1'
             */
            VeGSMC_e_Lv2PRND_DBCStatus = CeDFIB_e_Pass;
        }
        else
        {
            /* Switch: '<S83>/Switch1' incorporates:
             *  Switch: '<S83>/Switch3'
             *  UnitDelay: '<S83>/UnitDelay'
             */
            VeGSMC_e_Lv2PRND_DBCStatus = GSMR_ac_DW.UnitDelay_DSTATE_n;
        }

        /* End of Switch: '<S83>/Switch2' */
    }

    /* End of Switch: '<S80>/Switch2' */

    /* DataTypeConversion: '<S83>/UNIT8' incorporates:
     *  Switch: '<S83>/Switch1'
     *  UnitDelay: '<S83>/UnitDelay'
     */
    GSMR_ac_DW.UnitDelay_DSTATE_n = (uint8)VeGSMC_e_Lv2PRND_DBCStatus;

    /* Logic: '<S33>/Logical12' */
    GSMR_ac_B.VeGSMR_b_MissedParkReqFlt = (rtb_VeGSMR_b_DrvrParkReqCnfrmd_ePRND &&
        (GSMR_ac_B.Switch3));

    /* Logic: '<S33>/Logical15' */
    VeGSMC_b_NoPrkReq = !rtb_VeGSMR_b_DrvrParkReqCnfrmd_ePRND;

    /* Logic: '<S33>/Logical19' */
    GSMR_ac_B.VeGSMR_b_MissedNeutralReqFlt = ((VeGSMC_b_NoPrkReq) &&
        (GSMR_ac_B.Switch3));

    /* Switch: '<S33>/Switch' incorporates:
     *  Constant: '<S79>/Calib'
     */
    if (KeGSMR_b_Ovrd_ePRNDFailCntr)
    {
        /* Switch: '<S33>/Switch' incorporates:
         *  Constant: '<S76>/Calib'
         */
        VeGSMC_Cnt_InvalidPRNDCntr = KeGSMR_Cnt_ePRNDFailCntVal;
    }
    else
    {
        /* Switch: '<S33>/Switch' */
        VeGSMC_Cnt_InvalidPRNDCntr = VeGSMC_Cnt_InvalidPRNDCntrInt;
    }

    /* End of Switch: '<S33>/Switch' */
}

#endif

/* Update for atomic system: '<S6>/Monitor_ePRND' */
#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

static FUNC(void, GSMR_CODE_LOCAL) GSMR_ac_Monitor_ePRND_Update(void)
{
    /* Update for UnitDelay: '<S29>/UnitDelay2' incorporates:
     *  SignalConversion generated from: '<S1>/VeLTIR_e_Lv2KeySts'
     */
    GSMR_ac_DW.VeGSMI_e_CANKeyStatus_Prev =
        GSMR_ac_B.TmpSignalConversionAtVeLTIR_e_Lv2KeyStsO;

    /* Update for UnitDelay: '<S81>/UnitDelay' incorporates:
     *  UnitDelay: '<S45>/UnitDelay1'
     */
    GSMR_ac_DW.VeGSMC_b_PassTest_P1E18_prev = GSMR_ac_DW.VeGSMR_b_KeyOnOff_prev;

    /* Update for Atomic SubSystem: '<S26>/ProcBrkOutOfPark' */
    /* Update for UnitDelay: '<S72>/UnitDelay' */
    GSMR_ac_DW.VeGSMR_b_PPAWL_Disengage_prev =
        GSMR_ac_B.VeGSMR_b_PPAWL_Disengaging;

    /* End of Update for SubSystem: '<S26>/ProcBrkOutOfPark' */

    /* Update for Atomic SubSystem: '<S26>/ValidateGear' */
    /* Update for RelationalOperator: '<S34>/Comparison6' incorporates:
     *  Switch: '<S30>/Switch1'
     *  UnitDelay: '<S34>/Unit Delay'
     */
    GSMR_ac_DW.VeGSMI_e_Lv2Lv1VldtdTransRngStPrev =
        GSMR_ac_B.VeGSMR_e_VldtdPRNDPos;

    /* Update for UnitDelay: '<S104>/UnitDelay' */
    GSMR_ac_DW.VeGSMC_b_Lv1NotP_Prev_prev = GSMR_ac_B.VeGSMR_b_LvInP;

    /* Update for UnitDelay: '<S105>/UnitDelay' */
    GSMR_ac_DW.VeGSMR_b_Lv1InR_Prev_prev = GSMR_ac_B.VeGSMR_b_Lv1InR;

    /* Update for UnitDelay: '<S106>/UnitDelay' */
    GSMR_ac_DW.VeGSMR_b_Lv1InD_Prev_prev = GSMR_ac_B.VeGSMR_b_Lv1InD;

    /* Update for UnitDelay: '<S107>/Unit Delay' */
    GSMR_ac_DW.VeGSMR_b_Lv1InL_Prev_prev = GSMR_ac_B.VeGSMR_b_Lv1InL;

    /* End of Update for SubSystem: '<S26>/ValidateGear' */

    /* Update for Atomic SubSystem: '<S26>/ValidatePark' */
    /* Update for UnitDelay: '<S119>/UnitDelay' */
    GSMR_ac_DW.VeGSMR_b_Lv1InP_Prev_prev = GSMR_ac_B.VeGSMR_b_Lv1InP;

    /* End of Update for SubSystem: '<S26>/ValidatePark' */

    /* Update for UnitDelay: '<S80>/UnitDelay1' */
    GSMR_ac_DW.UnitDelay1_DSTATE_d = GSMR_ac_B.Switch3;
}

#endif

/* Model step function for TID1 */
#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

FUNC(void, GSMR_CODE) GSMR_MedTED(void) /* Explicit Task: MedTED */
{
    /* local block i/o variables */
#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    boolean rtb_TmpSignalConversionAtVeTRGR_b_Reject;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    boolean rtb_TmpSignalConversionAtVeTRGR_b_Reje_b;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    uint16 tmpRead;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    TeTRGR_e_TXFlt_Map tmpRead_0;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    boolean tmpRead_1;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    float32 tmpRead_2;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    TeSTRR_e_HybStrtrSt tmpRead_3;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    boolean tmpRead_4;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    boolean tmpRead_5;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    TeTRGR_e_EPBReq tmpRead_6;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    boolean tmpRead_7;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    boolean tmpRead_8;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    boolean tmpRead_9;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    uint8 tmpRead_a;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    uint8 tmpRead_b;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    uint8 tmpRead_c;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    boolean tmpRead_d;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    boolean tmpRead_e;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    uint8 tmpRead_f;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    boolean tmpRead_g;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    boolean tmpRead_h;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    boolean tmpRead_i;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    boolean tmpRead_j;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    float32 rtb_VeGSMR_n_Lv2TOSRSignedSpd;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    float32 rtb_VeGSMI_n_Lv1ToLv2VehSpdDiff;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    float32 rtb_VeGSMI_Pct_BrkTravelDiffAbs_Abs;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    boolean rtb_VeGSMI_b_VehSpdThshMet;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    boolean rtb_VeGSMI_b_DisblMntrInvalidData;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    boolean rtb_VeGSMI_b_Disbl_PRND_PPawl_Mntr_Cnfrm;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    boolean rtb_TmpSignalConversionAtVeSSDR_b_DrvAll;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    float32 rtb_TmpSignalConversionAtVeSCMR_Pct_Brak;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    float32 rtb_VeGSMI_Pct_BrkTravelDiff;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    float32 rtb_VeGSMI_U_Lv2PPMtrPosSnsrFB_Scld;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    float32 rtb_VeGSMR_Cnt_Lv2PPMtrPosSnsrFB;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    boolean rtb_VeGSMI_b_Lv1InReverse;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    boolean rtb_VeGSMI_b_Lv1InDrive;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    boolean rtb_TmpSignalConversionAtVeHPMR_b_PropSy;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    boolean rtb_VeGSMI_b_Lv1InReverse_ePT;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    boolean rtb_VeGSMI_b_Lv1InDrive_ePT;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    boolean rtb_VeGSMR_b_DisEngdTrgr;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    boolean rtb_GreaterThan1_b;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    boolean rtb_TmpSignalConversionAtVePPCR_b_PPawl_;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    boolean rtb_TmpSignalConversionAtVePPCR_b_PPaw_m;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    boolean rtb_Compare_k;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    boolean rtb_AND_i;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    float32 rtb_TmpSignalConversionAtVeHWIO_U_Lv2LVB;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    float32 rtb_VeGSMR_U_LV_VoltDiff_Arb;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    boolean rtb_VeGSMR_b_VehPluggedInDelay;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    boolean rtb_VeGSMR_b_OTN_NLckTrgr;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    boolean rtb_VeGSMR_b_OTN_NLckRst;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    boolean rtb_VeGSMR_b_OTN_NLock;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    boolean rtb_TmpSignalConversionAtVePPCR_b_PPUnau;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    boolean rtb_TmpSignalConversionAtVePPCR_b_PPawlS;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    boolean rtb_VeGSMC_b_ToParkVehicleTOSRMetIntmnt;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    boolean rtb_VeGSMC_b_ToParkVehicleSpdMetIntmnt;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    uint8 rtb_VeGSMR_Cnt_UndesPPawlMtrStFlt_Prev_k;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    TeGSMR_e_DrvRqShftROT rtb_TmpSignalConversionAtVeSCMR_e_Lv2Drv;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    TeGSMR_e_DrvRqShftROT rtb_TmpSignalConversionAtVeSCMR_e_SC_Shi;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    TeGSMR_e_DrvRqShftROT rtb_TmpSignalConversionAtVeSCMR_e_Lv2D_c;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    TeGSMR_e_DrvRqShftROT rtb_TmpSignalConversionAtVeSCMR_e_SC_S_k;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    TeSTMR_e_Lv2BrkPdlStat rtb_TmpSignalConversionAtVeSTMR_e_BrkPdl;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    TePPCR_e_PPawl_Request rtb_TmpSignalConversionAtVePPCR_e_PPawlR;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    TePPCR_e_PPawl_Fdbck rtb_TmpSignalConversionAtVePPCR_e_PPawlF;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    TeLTIR_e_KeySts rtb_VeGSMC_e_KeyStsArb;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    TeGSMR_e_ProxStat rtb_VeGSMC_e_ProxStatArb;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    float32 VeGSMI_I_Lv2PPawlMtrCrntDraw;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    TeGSMR_e_HBridgeDiagInfo VeGSMI_e_Lv2HBridgeDiagInfo;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    TeGSMR_e_SixSOStatus VeGSMI_e_Lv2MtrA_6SOEnbl;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    TeGSMR_e_MtrInvrtrSt VeGSMI_e_Lv2MtrA_InvrtrSts;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    TeGSMR_e_MtrInvrtrSt VeGSMI_e_Lv2MtrB_InvrtrSts;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    TeGSMR_e_PPawlSysSt VeGSMC_b_Curr_Eng_tmp;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    TeDFIB_e_FaultDebounceStatus UnitDelay_DSTATE_tmp;

#endif

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
    /* Inport: '<Root>/VeTRGR_e_TXFault' */
    (void)Rte_Read_VeTRGR_e_TXFault_Value(&tmpRead_0);

    /* Outputs for Function Call SubSystem: '<Root>/GSMR_FUNC_MedTEB' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ProcGSMRInputs'
     */
    /* Gain: '<S376>/Gain' incorporates:
     *  Inport: '<Root>/VeSSMR_v_VehSpdSignd'
     */
    (void)Rte_Read_VeSSMR_v_VehSpdSignd_Value(&GSMR_ac_B.Gain);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/GSMR_FUNC_MedTEB' */

    /* Inport: '<Root>/VeLTIR_b_Lv2DrvRqShftROT_Scndry_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2DrvRqShftROT_Scndry_FA_Value
        (&rtb_VeGSMC_b_ToParkVehicleTOSRMetIntmnt);

    /* Inport: '<Root>/VeLTIR_b_Lv2DrvRqShftROT_Prmry_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2DrvRqShftROT_Prmry_FA_Value
        (&rtb_VeGSMC_b_ToParkVehicleSpdMetIntmnt);

    /* Outputs for Function Call SubSystem: '<Root>/GSMR_FUNC_MedTEB' */
    /* SignalConversion generated from: '<S1>/VeHPMR_b_PropSysActv' incorporates:
     *  Inport: '<Root>/VeHPMR_b_PropSysActv'
     */
    (void)Rte_Read_VeHPMR_b_PropSysActv_Value
        (&rtb_TmpSignalConversionAtVeHPMR_b_PropSy);

    /* SignalConversion generated from: '<S1>/VeTRGR_b_Reject_D' incorporates:
     *  Inport: '<Root>/VeTRGR_b_Reject_D'
     */
    (void)Rte_Read_VeTRGR_b_Reject_D_Value
        (&rtb_TmpSignalConversionAtVeTRGR_b_Reject);

    /* SignalConversion generated from: '<S1>/VeTRGR_b_Reject_R' incorporates:
     *  Inport: '<Root>/VeTRGR_b_Reject_R'
     */
    (void)Rte_Read_VeTRGR_b_Reject_R_Value
        (&rtb_TmpSignalConversionAtVeTRGR_b_Reje_b);

    /* SignalConversion generated from: '<S1>/VeLTIR_e_Lv2KeySts' incorporates:
     *  Inport: '<Root>/VeLTIR_e_Lv2KeySts'
     */
    (void)Rte_Read_VeLTIR_e_Lv2KeySts_Value
        (&GSMR_ac_B.TmpSignalConversionAtVeLTIR_e_Lv2KeyStsO);

    /* SignalConversion generated from: '<S1>/VeHWIO_U_Lv2LVBattVolt' incorporates:
     *  Inport: '<Root>/VeHWIO_U_Lv2LVBattVolt'
     */
    (void)Rte_Read_VeHWIO_U_Lv2LVBattVolt_Value
        (&rtb_TmpSignalConversionAtVeHWIO_U_Lv2LVB);

    /* SignalConversion generated from: '<S1>/VeSCMR_e_Lv2DrvRqShftROT_Prmry' incorporates:
     *  Inport: '<Root>/VeSCMR_e_Lv2DrvRqShftROT_Prmry'
     */
    (void)Rte_Read_VeSCMR_e_Lv2DrvRqShftROT_Prmry_Value
        (&rtb_TmpSignalConversionAtVeSCMR_e_Lv2Drv);

    /* SignalConversion generated from: '<S1>/VeSCMR_e_Lv2DrvRqShftROT_Scndry' incorporates:
     *  Inport: '<Root>/VeSCMR_e_Lv2DrvRqShftROT_Scndry'
     */
    (void)Rte_Read_VeSCMR_e_Lv2DrvRqShftROT_Scndry_Value
        (&rtb_TmpSignalConversionAtVeSCMR_e_Lv2D_c);

    /* SignalConversion generated from: '<S1>/VeSTMR_e_BrkPdlStat' incorporates:
     *  Inport: '<Root>/VeSTMR_e_BrkPdlStat'
     */
    (void)Rte_Read_VeSTMR_e_BrkPdlStat_Value
        (&rtb_TmpSignalConversionAtVeSTMR_e_BrkPdl);

    /* SignalConversion generated from: '<S1>/VePPCR_e_PPawlRequest' incorporates:
     *  Inport: '<Root>/VePPCR_e_PPawlRequest'
     */
    (void)Rte_Read_VePPCR_e_PPawlRequest_Value
        (&rtb_TmpSignalConversionAtVePPCR_e_PPawlR);

    /* SignalConversion generated from: '<S1>/VePPCR_e_PPawlFdbck' incorporates:
     *  Inport: '<Root>/VePPCR_e_PPawlFdbck'
     */
    (void)Rte_Read_VePPCR_e_PPawlFdbck_Value
        (&rtb_TmpSignalConversionAtVePPCR_e_PPawlF);

    /* SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd' incorporates:
     *  Inport: '<Root>/VeCSVR_n_TransOutSpdSgndFltrd'
     */
    (void)Rte_Read_VeCSVR_n_TransOutSpdSgndFltrd_Value(&GSMR_ac_B.Switch1);

    /* SignalConversion generated from: '<S1>/VeSSDR_b_DrvAllwd' incorporates:
     *  Inport: '<Root>/VeSSDR_b_DrvAllwd'
     */
    (void)Rte_Read_VeSSDR_b_DrvAllwd_Value
        (&rtb_TmpSignalConversionAtVeSSDR_b_DrvAll);

    /* SignalConversion generated from: '<S1>/VeSCMR_e_SC_ShiftLvrPosReq_CAN_C' incorporates:
     *  Inport: '<Root>/VeSCMR_e_SC_ShiftLvrPosReq_CAN_C'
     */
    (void)Rte_Read_VeSCMR_e_SC_ShiftLvrPosReq_CAN_C_Value
        (&rtb_TmpSignalConversionAtVeSCMR_e_SC_Shi);

    /* SignalConversion generated from: '<S1>/VeSCMR_e_SC_ShiftLvrPosReq_CAN_ePT' incorporates:
     *  Inport: '<Root>/VeSCMR_e_SC_ShiftLvrPosReq_CAN_ePT'
     */
    (void)Rte_Read_VeSCMR_e_SC_ShiftLvrPosReq_CAN_ePT_Value
        (&rtb_TmpSignalConversionAtVeSCMR_e_SC_S_k);

    /* SignalConversion generated from: '<S1>/VeSCMR_Pct_BrakeTravelSts_CAN_C' incorporates:
     *  Inport: '<Root>/VeSCMR_Pct_BrakeTravelSts_CAN_C'
     */
    (void)Rte_Read_VeSCMR_Pct_BrakeTravelSts_CAN_C_Value
        (&rtb_TmpSignalConversionAtVeSCMR_Pct_Brak);

    /* SignalConversion generated from: '<S1>/VePPCR_b_PPawl_CurrSnsrFlt' incorporates:
     *  Inport: '<Root>/VePPCR_b_PPawl_CurrSnsrFlt'
     */
    (void)Rte_Read_VePPCR_b_PPawl_CurrSnsrFlt_Value
        (&rtb_TmpSignalConversionAtVePPCR_b_PPawl_);

    /* SignalConversion generated from: '<S1>/VePPCR_b_PPawl_PosSnsrFlt' incorporates:
     *  Inport: '<Root>/VePPCR_b_PPawl_PosSnsrFlt'
     */
    (void)Rte_Read_VePPCR_b_PPawl_PosSnsrFlt_Value
        (&rtb_TmpSignalConversionAtVePPCR_b_PPaw_m);

    /* SignalConversion generated from: '<S1>/VePPCR_b_PPUnauthorizedMove' incorporates:
     *  Inport: '<Root>/VePPCR_b_PPUnauthorizedMove'
     */
    (void)Rte_Read_VePPCR_b_PPUnauthorizedMove_Value
        (&rtb_TmpSignalConversionAtVePPCR_b_PPUnau);

    /* SignalConversion generated from: '<S1>/VePPCR_b_PPawlStuckFltSet' incorporates:
     *  Inport: '<Root>/VePPCR_b_PPawlStuckFltSet'
     */
    (void)Rte_Read_VePPCR_b_PPawlStuckFltSet_Value
        (&rtb_TmpSignalConversionAtVePPCR_b_PPawlS);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/GSMR_FastTEF_StartCheckpoint'
     */
    /* FunctionCaller: '<S4>/GSMR_FastTEF_StartCheckpoint' */
    Rte_Call_GSMR_FastTEF_StartCheckpoint_CheckpointReached();

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/GSMR_FUNC_MedTEB' */

    /* Inport: '<Root>/VeSCMR_b_Lv2TireSizeFA' */
    (void)Rte_Read_VeSCMR_b_Lv2TireSizeFA_Value(&rtb_VeGSMI_b_VehSpdThshMet);

    /* Outputs for Function Call SubSystem: '<Root>/GSMR_FUNC_MedTEB' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ProcGSMRInputs'
     */
    /* Switch: '<S8>/Switch' incorporates:
     *  Inport: '<Root>/VeSCMR_l_Lv2TireSize'
     */
    if (rtb_VeGSMI_b_VehSpdThshMet)
    {
        /* Switch: '<S369>/LV2_Abs_switch' incorporates:
         *  Constant: '<S365>/Calib'
         */
        rtb_VeGSMI_Pct_BrkTravelDiffAbs_Abs = KeGSMR_l_RollingWhlRadius;
    }
    else
    {
        (void)Rte_Read_VeSCMR_l_Lv2TireSize_Value
            (&rtb_VeGSMI_Pct_BrkTravelDiffAbs_Abs);

        /* Switch: '<S369>/LV2_Abs_switch' incorporates:
         *  Constant: '<S331>/Calib'
         *  Inport: '<Root>/VeSCMR_l_Lv2TireSize'
         *  Product: '<S8>/Product1'
         */
        rtb_VeGSMI_Pct_BrkTravelDiffAbs_Abs *= KeGSMR_Cf_CnvrtCircumToRadius;
    }

    /* End of Switch: '<S8>/Switch' */

    /* Product: '<S8>/Product2' incorporates:
     *  Constant: '<S8>/ConstantValue'
     */
    rtb_VeGSMI_Pct_BrkTravelDiffAbs_Abs *= 0.377F;

    /* Outputs for Atomic SubSystem: '<S8>/LV2_DivideWithProtection' */
    /* Switch: '<S372>/Switch1' incorporates:
     *  Constant: '<S372>/ConstantValue'
     *  Constant: '<S372>/ConstantValue1'
     *  Constant: '<S372>/ConstantValue2'
     *  Constant: '<S372>/ConstantValue3'
     *  Logic: '<S372>/AND'
     *  RelationalOperator: '<S372>/GreaterThanorEqual'
     *  RelationalOperator: '<S372>/GreaterThanorEqual1'
     *  RelationalOperator: '<S372>/NotEqual'
     *  RelationalOperator: '<S372>/NotEqual1'
     *  Switch: '<S372>/Switch2'
     *  Switch: '<S372>/Switch3'
     */
    if ((GSMR_ac_B.Gain != 0.0F) && (rtb_VeGSMI_Pct_BrkTravelDiffAbs_Abs != 0.0F))
    {
        /* Switch: '<S372>/Switch1' incorporates:
         *  Product: '<S372>/Division'
         */
        rtb_VeGSMR_n_Lv2TOSRSignedSpd = GSMR_ac_B.Gain /
            rtb_VeGSMI_Pct_BrkTravelDiffAbs_Abs;
    }
    else if (GSMR_ac_B.Gain > 0.0F)
    {
        /* Switch: '<S372>/Switch2' incorporates:
         *  Constant: '<S372>/MAXFLOAT'
         *  Switch: '<S372>/Switch1'
         */
        rtb_VeGSMR_n_Lv2TOSRSignedSpd = 3.402823466E+38F;
    }
    else if (GSMR_ac_B.Gain < 0.0F)
    {
        /* Switch: '<S372>/Switch3' incorporates:
         *  Constant: '<S372>/MINFLOAT'
         *  Switch: '<S372>/Switch1'
         *  Switch: '<S372>/Switch2'
         */
        rtb_VeGSMR_n_Lv2TOSRSignedSpd = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S372>/Switch1' incorporates:
         *  Constant: '<S372>/ConstantValue4'
         *  Switch: '<S372>/Switch2'
         *  Switch: '<S372>/Switch3'
         */
        rtb_VeGSMR_n_Lv2TOSRSignedSpd = 0.0F;
    }

    /* End of Switch: '<S372>/Switch1' */
    /* End of Outputs for SubSystem: '<S8>/LV2_DivideWithProtection' */

    /* Sum: '<S8>/Sum1' */
    rtb_VeGSMI_n_Lv1ToLv2VehSpdDiff = rtb_VeGSMR_n_Lv2TOSRSignedSpd -
        GSMR_ac_B.Switch1;

    /* Switch: '<S382>/LV2_Abs_switch' incorporates:
     *  Constant: '<S382>/ConstantValue1'
     *  Product: '<S382>/Product'
     *  RelationalOperator: '<S382>/Comparison'
     */
    if (GSMR_ac_B.Gain < 0.0F)
    {
        rtb_VeGSMI_Pct_BrkTravelDiffAbs_Abs = -GSMR_ac_B.Gain;
    }
    else
    {
        rtb_VeGSMI_Pct_BrkTravelDiffAbs_Abs = GSMR_ac_B.Gain;
    }

    /* End of Switch: '<S382>/LV2_Abs_switch' */

    /* RelationalOperator: '<S304>/Comparison3' incorporates:
     *  Constant: '<S381>/Calib'
     */
    rtb_VeGSMI_b_VehSpdThshMet = (rtb_VeGSMI_Pct_BrkTravelDiffAbs_Abs <=
        KeGSMR_v_MaxInplantMdSpd);

    /* Outputs for Atomic SubSystem: '<S304>/LV2_Turn_On_Delay_Sample' */
    /* Switch: '<S383>/LV2Switch' incorporates:
     *  Constant: '<S377>/Calib'
     *  Constant: '<S383>/ConstantValue'
     *  Constant: '<S383>/ConstantValue1'
     *  Logic: '<S383>/OR'
     *  Logic: '<S383>/OR1'
     *  Logic: '<S384>/AND1'
     *  Logic: '<S384>/OR2'
     *  MinMax: '<S383>/Minimum'
     *  Sum: '<S383>/Summation'
     *  UnitDelay: '<S383>/UnitDelay1'
     *  UnitDelay: '<S384>/UnitDelay'
     */
    if ((!rtb_VeGSMI_b_VehSpdThshMet) || (rtb_VeGSMI_b_VehSpdThshMet &&
            (!GSMR_ac_DW.VeGSMI_b_VehSpdThshMet_prev)))
    {
        GSMR_ac_DW.VeGSMI_Cnt_VehSpdThshMet_prev = 0U;
    }
    else if (KeGSMR_Cnt_VehSpdPNOvrdCntr < ((uint16)(((uint32)
                GSMR_ac_DW.VeGSMI_Cnt_VehSpdThshMet_prev) + 1U)))
    {
        /* MinMax: '<S383>/Minimum' incorporates:
         *  Constant: '<S377>/Calib'
         */
        GSMR_ac_DW.VeGSMI_Cnt_VehSpdThshMet_prev = KeGSMR_Cnt_VehSpdPNOvrdCntr;
    }
    else
    {
        /* MinMax: '<S383>/Minimum' incorporates:
         *  Constant: '<S383>/ConstantValue'
         *  Sum: '<S383>/Summation'
         *  UnitDelay: '<S383>/UnitDelay1'
         */
        GSMR_ac_DW.VeGSMI_Cnt_VehSpdThshMet_prev = (uint16)(((uint32)
            GSMR_ac_DW.VeGSMI_Cnt_VehSpdThshMet_prev) + 1U);
    }

    /* End of Switch: '<S383>/LV2Switch' */

    /* Update for UnitDelay: '<S384>/UnitDelay' */
    GSMR_ac_DW.VeGSMI_b_VehSpdThshMet_prev = rtb_VeGSMI_b_VehSpdThshMet;

    /* End of Outputs for SubSystem: '<S304>/LV2_Turn_On_Delay_Sample' */

    /* Switch: '<S304>/Switch7' incorporates:
     *  Constant: '<S380>/Calib'
     *  Inport: '<Root>/VeSCMR_b_VehInInplantMd'
     *  Inport: '<Root>/VeSCMR_b_VehInServiceMd'
     */
    if (KeGSMR_b_OvrdDisblMntr)
    {
        /* Switch: '<S304>/Switch7' incorporates:
         *  Constant: '<S379>/Calib'
         */
        rtb_VeGSMI_b_Disbl_PRND_PPawl_Mntr_Cnfrm = KeGSMR_b_DisblMntrVal;
    }
    else
    {
        (void)Rte_Read_VeSCMR_b_VehInInplantMd_Value
            (&rtb_VeGSMI_b_Disbl_PRND_PPawl_Mntr_Cnfrm);
        (void)Rte_Read_VeSCMR_b_VehInServiceMd_Value(&tmpRead_4);

        /* Switch: '<S8>/Switch16' incorporates:
         *  Constant: '<S353>/Calib'
         *  Constant: '<S357>/Calib'
         *  Inport: '<Root>/VeSCMR_b_VehInInplantMd'
         *  Inport: '<Root>/VeSCMR_b_VehInServiceMd'
         */
        if (KeGSMR_b_OvrdSrvcMd)
        {
            tmpRead_4 = KeGSMR_b_SrvcMdOvrdVal;
        }

        /* End of Switch: '<S8>/Switch16' */

        /* Switch: '<S8>/Switch17' incorporates:
         *  Constant: '<S342>/Calib'
         *  Constant: '<S350>/Calib'
         */
        if (KeGSMR_b_OvrdInPlantMd)
        {
            rtb_VeGSMI_b_Disbl_PRND_PPawl_Mntr_Cnfrm = KeGSMR_b_InPlantMdVal;
        }

        /* End of Switch: '<S8>/Switch17' */

        /* Outputs for Atomic SubSystem: '<S304>/LV2_Turn_On_Delay_Sample' */
        /* Switch: '<S304>/Switch7' incorporates:
         *  Constant: '<S377>/Calib'
         *  Constant: '<S378>/Calib'
         *  Logic: '<S304>/Logical1'
         *  Logic: '<S304>/Logical2'
         *  Logic: '<S304>/Logical8'
         *  Logic: '<S383>/AND'
         *  RelationalOperator: '<S383>/GreaterThan'
         *  UnitDelay: '<S383>/UnitDelay1'
         */
        rtb_VeGSMI_b_Disbl_PRND_PPawl_Mntr_Cnfrm = ((tmpRead_4 ||
            (rtb_VeGSMI_b_Disbl_PRND_PPawl_Mntr_Cnfrm &&
             (KeGSMR_b_DisblMntrInPlant))) && (rtb_VeGSMI_b_VehSpdThshMet &&
            (GSMR_ac_DW.VeGSMI_Cnt_VehSpdThshMet_prev >=
             KeGSMR_Cnt_VehSpdPNOvrdCntr)));

        /* End of Outputs for SubSystem: '<S304>/LV2_Turn_On_Delay_Sample' */
    }

    /* End of Switch: '<S304>/Switch7' */

    /* Outputs for Atomic SubSystem: '<S8>/LV2_Count_Down_Reset_Enabled1' */
    /* Switch: '<S371>/Switch1' incorporates:
     *  Constant: '<S333>/Calib'
     *  Constant: '<S371>/ConstantValue'
     *  Logic: '<S8>/Logical24'
     *  RelationalOperator: '<S371>/GreaterThan'
     *  RelationalOperator: '<S8>/Comparison15'
     *  SignalConversion generated from: '<S1>/VeSCMR_e_Lv2DrvRqShftROT_Scndry'
     *  Switch: '<S371>/Switch2'
     *  UnitDelay: '<S371>/UnitDelay'
     */
    if (rtb_TmpSignalConversionAtVeSCMR_e_Lv2D_c ==
            rtb_TmpSignalConversionAtVeSCMR_e_SC_S_k)
    {
        GSMR_ac_DW.VeGSMR_Cnt_DrvRqShftROT_Scndry_prev =
            KeGSMR_Cnt_Vldt_CANR_ePT;
    }
    else
    {
        if (((sint32)GSMR_ac_DW.VeGSMR_Cnt_DrvRqShftROT_Scndry_prev) > 0)
        {
            /* UnitDelay: '<S371>/UnitDelay' incorporates:
             *  Constant: '<S371>/ConstantValue1'
             *  Sum: '<S371>/Subtraction'
             *  Switch: '<S371>/Switch2'
             */
            GSMR_ac_DW.VeGSMR_Cnt_DrvRqShftROT_Scndry_prev = (uint16)((sint32)
                (((sint32)GSMR_ac_DW.VeGSMR_Cnt_DrvRqShftROT_Scndry_prev) - 1));
        }
    }

    /* End of Switch: '<S371>/Switch1' */
    /* End of Outputs for SubSystem: '<S8>/LV2_Count_Down_Reset_Enabled1' */

    /* Switch: '<S8>/Switch2' incorporates:
     *  Constant: '<S348>/Calib'
     *  Constant: '<S356>/Calib'
     *  Constant: '<S371>/ConstantValue2'
     *  Logic: '<S8>/Logical25'
     *  Logic: '<S8>/Logical26'
     *  RelationalOperator: '<S371>/GreaterThan1'
     *  Switch: '<S8>/Switch15'
     *  UnitDelay: '<S371>/UnitDelay'
     */
    if (KeGSMR_b_OvrdDPTDrvRqShftROT)
    {
        /* Switch: '<S8>/Switch2' incorporates:
         *  Constant: '<S359>/Calib'
         *  DataTypeConversion: '<S306>/DataTypeConversion'
         */
        VeGSMI_e_DrvRqShftROT_Scndry = (TeGSMR_e_DrvRqShftROT)
            KeGSMR_e_DPTDrvRqShftROTVal;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S8>/LV2_Count_Down_Reset_Enabled1' */
        if ((((sint32)GSMR_ac_DW.VeGSMR_Cnt_DrvRqShftROT_Scndry_prev) <= 0) || (
                !KeGSMR_b_ShftProxi))
        {
            /* Switch: '<S8>/Switch15' incorporates:
             *  RelationalOperator: '<S8>/Comparison15'
             *  SignalConversion generated from: '<S1>/VeSCMR_e_Lv2DrvRqShftROT_Scndry'
             *  Switch: '<S8>/Switch2'
             */
            VeGSMI_e_DrvRqShftROT_Scndry =
                rtb_TmpSignalConversionAtVeSCMR_e_Lv2D_c;
        }
        else
        {
            /* Switch: '<S8>/Switch2' */
            VeGSMI_e_DrvRqShftROT_Scndry =
                rtb_TmpSignalConversionAtVeSCMR_e_SC_S_k;
        }

        /* End of Outputs for SubSystem: '<S8>/LV2_Count_Down_Reset_Enabled1' */
    }

    /* End of Switch: '<S8>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S8>/LV2_Count_Down_Reset_Enabled' */
    /* Switch: '<S370>/Switch1' incorporates:
     *  Constant: '<S332>/Calib'
     *  Constant: '<S370>/ConstantValue'
     *  Logic: '<S8>/Logical22'
     *  RelationalOperator: '<S370>/GreaterThan'
     *  RelationalOperator: '<S8>/Comparison14'
     *  SignalConversion generated from: '<S1>/VeSCMR_e_Lv2DrvRqShftROT_Prmry'
     *  SignalConversion generated from: '<S1>/VeSCMR_e_SC_ShiftLvrPosReq_CAN_C'
     *  Switch: '<S370>/Switch2'
     *  UnitDelay: '<S370>/UnitDelay'
     */
    if (rtb_TmpSignalConversionAtVeSCMR_e_Lv2Drv ==
            rtb_TmpSignalConversionAtVeSCMR_e_SC_Shi)
    {
        GSMR_ac_DW.VeGSMR_Cnt_DrvRqShftROT_Prmry_prev =
            KeGSMR_Cnt_Vldt_CANR_CANC;
    }
    else
    {
        if (((sint32)GSMR_ac_DW.VeGSMR_Cnt_DrvRqShftROT_Prmry_prev) > 0)
        {
            /* UnitDelay: '<S370>/UnitDelay' incorporates:
             *  Constant: '<S370>/ConstantValue1'
             *  Sum: '<S370>/Subtraction'
             *  Switch: '<S370>/Switch2'
             */
            GSMR_ac_DW.VeGSMR_Cnt_DrvRqShftROT_Prmry_prev = (uint16)((sint32)
                (((sint32)GSMR_ac_DW.VeGSMR_Cnt_DrvRqShftROT_Prmry_prev) - 1));
        }
    }

    /* End of Switch: '<S370>/Switch1' */
    /* End of Outputs for SubSystem: '<S8>/LV2_Count_Down_Reset_Enabled' */

    /* Switch: '<S8>/Switch1' incorporates:
     *  Constant: '<S347>/Calib'
     *  Constant: '<S356>/Calib'
     *  Constant: '<S370>/ConstantValue2'
     *  Logic: '<S8>/Logical23'
     *  Logic: '<S8>/Logical27'
     *  RelationalOperator: '<S370>/GreaterThan1'
     *  Switch: '<S8>/Switch13'
     *  UnitDelay: '<S370>/UnitDelay'
     */
    if (KeGSMR_b_OvrdCANCDrvRqShftROT)
    {
        /* Switch: '<S8>/Switch1' incorporates:
         *  Constant: '<S358>/Calib'
         *  DataTypeConversion: '<S305>/DataTypeConversion'
         */
        VeGSMI_e_DrvRqShftROT_Prmry = (TeGSMR_e_DrvRqShftROT)
            KeGSMR_e_CANCDrvRqShftROTVal;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S8>/LV2_Count_Down_Reset_Enabled' */
        if ((((sint32)GSMR_ac_DW.VeGSMR_Cnt_DrvRqShftROT_Prmry_prev) <= 0) ||
                (!KeGSMR_b_ShftProxi))
        {
            /* Switch: '<S8>/Switch13' incorporates:
             *  RelationalOperator: '<S8>/Comparison14'
             *  SignalConversion generated from: '<S1>/VeSCMR_e_Lv2DrvRqShftROT_Prmry'
             *  Switch: '<S8>/Switch1'
             */
            VeGSMI_e_DrvRqShftROT_Prmry =
                rtb_TmpSignalConversionAtVeSCMR_e_Lv2Drv;
        }
        else
        {
            /* Switch: '<S8>/Switch1' incorporates:
             *  RelationalOperator: '<S8>/Comparison14'
             *  SignalConversion generated from: '<S1>/VeSCMR_e_SC_ShiftLvrPosReq_CAN_C'
             */
            VeGSMI_e_DrvRqShftROT_Prmry =
                rtb_TmpSignalConversionAtVeSCMR_e_SC_Shi;
        }

        /* End of Outputs for SubSystem: '<S8>/LV2_Count_Down_Reset_Enabled' */
    }

    /* End of Switch: '<S8>/Switch1' */

    /* Switch: '<S329>/Switch1' incorporates:
     *  Logic: '<S299>/AND'
     *  Logic: '<S301>/AND'
     *  Logic: '<S8>/LogicalOperator'
     *  Logic: '<S8>/Logical_Operator'
     *  Switch: '<S328>/Switch1'
     */
    if (!rtb_VeGSMC_b_ToParkVehicleSpdMetIntmnt)
    {
        /* Switch: '<S329>/Switch1' incorporates:
         *  Switch: '<S8>/Switch1'
         */
        rtb_TmpSignalConversionAtVeSCMR_e_Lv2Drv = VeGSMI_e_DrvRqShftROT_Prmry;
    }
    else if (!rtb_VeGSMC_b_ToParkVehicleTOSRMetIntmnt)
    {
        /* Switch: '<S328>/Switch1' incorporates:
         *  Switch: '<S329>/Switch1'
         *  Switch: '<S8>/Switch2'
         */
        rtb_TmpSignalConversionAtVeSCMR_e_Lv2Drv = VeGSMI_e_DrvRqShftROT_Scndry;
    }
    else
    {
        /* Switch: '<S329>/Switch1' incorporates:
         *  Constant: '<S314>/Constant'
         *  Switch: '<S328>/Switch1'
         */
        rtb_TmpSignalConversionAtVeSCMR_e_Lv2Drv = CeGSMR_e_PRND_SNA;
    }

    /* End of Switch: '<S329>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/GSMR_FUNC_MedTEB' */

    /* Inport: '<Root>/VeVSDR_b_PrimNoFA' */
    (void)Rte_Read_VeVSDR_b_PrimNoFA_Value(&rtb_VeGSMI_b_DisblMntrInvalidData);

    /* Outputs for Function Call SubSystem: '<Root>/GSMR_FUNC_MedTEB' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ProcGSMRInputs'
     */
    /* Switch: '<S368>/LV2_Abs_switch' incorporates:
     *  Constant: '<S368>/ConstantValue1'
     *  Product: '<S368>/Product'
     *  RelationalOperator: '<S368>/Comparison'
     */
    if (rtb_VeGSMI_n_Lv1ToLv2VehSpdDiff < 0.0F)
    {
        rtb_VeGSMI_n_Lv1ToLv2VehSpdDiff = -rtb_VeGSMI_n_Lv1ToLv2VehSpdDiff;
    }

    /* End of Switch: '<S368>/LV2_Abs_switch' */

    /* Switch: '<S330>/Switch1' incorporates:
     *  Constant: '<S366>/Calib'
     *  Logic: '<S8>/Logical20'
     *  RelationalOperator: '<S8>/Comparison'
     */
    if ((rtb_VeGSMI_n_Lv1ToLv2VehSpdDiff > KeGSMR_n_TOSRSpdErrLmt) ||
            rtb_VeGSMI_b_DisblMntrInvalidData)
    {
        GSMR_ac_B.Switch1 = rtb_VeGSMR_n_Lv2TOSRSignedSpd;
    }

    /* End of Switch: '<S330>/Switch1' */

    /* Switch: '<S8>/Switch5' incorporates:
     *  Constant: '<S354>/Calib'
     */
    if (KeGSMR_b_OvrdVldtdTransRngSt_TRGR)
    {
        /* RelationalOperator: '<S367>/Comparison2' incorporates:
         *  Constant: '<S364>/Calib'
         *  DataTypeConversion: '<S307>/DataTypeConversion'
         *  Switch: '<S8>/Switch5'
         */
        VeGSMI_e_Lv2Lv1VldtdTransRngSt = (TeTRGR_e_TransRangeState)
            KeGSMR_e_VldtdTransRngStVal;
    }
    else
    {
        /* Switch: '<S8>/Switch5' incorporates:
         *  Inport: '<Root>/VeTRGR_e_VldtdTransRngSt'
         */
        (void)Rte_Read_VeTRGR_e_VldtdTransRngSt_Value
            ((&(VeGSMI_e_Lv2Lv1VldtdTransRngSt)));
    }

    /* End of Switch: '<S8>/Switch5' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/GSMR_FUNC_MedTEB' */

    /* Inport: '<Root>/VeSSDR_b_NeutAllwd' */
    (void)Rte_Read_VeSSDR_b_NeutAllwd_Value(&tmpRead_i);

    /* Inport: '<Root>/VeSRAR_b_NeutAllwd' */
    (void)Rte_Read_VeSRAR_b_NeutAllwd_Value(&tmpRead_h);

    /* Inport: '<Root>/VeSRAR_b_DrvAllwd' */
    (void)Rte_Read_VeSRAR_b_DrvAllwd_Value(&tmpRead_g);

    /* Inport: '<Root>/VeLTIR_b_Lv2PRNDDispFailSts' */
    (void)Rte_Read_VeLTIR_b_Lv2PRNDDispFailSts_Value(&tmpRead_e);

    /* Inport: '<Root>/VeLTIR_b_Lv2PRNDFailSts' */
    (void)Rte_Read_VeLTIR_b_Lv2PRNDFailSts_Value(&tmpRead_d);

    /* Inport: '<Root>/VePPCR_b_BrokenLinkFlt' */
    (void)Rte_Read_VePPCR_b_BrokenLinkFlt_Value(&tmpRead_9);

    /* Inport: '<Root>/VeLTIR_Pct_Lv2BrkTravelSts' */
    (void)Rte_Read_VeLTIR_Pct_Lv2BrkTravelSts_Value
        (&rtb_VeGSMI_Pct_BrkTravelDiff);

    /* Outputs for Function Call SubSystem: '<Root>/GSMR_FUNC_MedTEB' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ProcGSMRInputs'
     */
    /* Logic: '<S8>/Logical4' incorporates:
     *  Logic: '<S299>/AND'
     *  Logic: '<S301>/AND'
     */
    rtb_VeGSMI_b_DisblMntrInvalidData = (rtb_VeGSMC_b_ToParkVehicleSpdMetIntmnt &&
        rtb_VeGSMC_b_ToParkVehicleTOSRMetIntmnt);

    /* Logic: '<S396>/OR1' incorporates:
     *  Constant: '<S393>/Constant'
     *  Constant: '<S394>/Constant'
     *  Constant: '<S395>/Constant'
     *  Logic: '<S299>/AND'
     *  Logic: '<S301>/AND'
     *  Logic: '<S367>/Logical'
     *  Logic: '<S367>/Logical1'
     *  Logic: '<S367>/Logical4'
     *  Logic: '<S367>/Logical5'
     *  Logic: '<S396>/NOT'
     *  Logic: '<S396>/OR'
     *  RelationalOperator: '<S367>/Comparison1'
     *  RelationalOperator: '<S367>/Comparison2'
     *  RelationalOperator: '<S367>/Comparison4'
     *  Switch: '<S8>/Switch1'
     *  Switch: '<S8>/Switch2'
     *  UnitDelay: '<S396>/UnitDelay1'
     */
    GSMR_ac_DW.VeGSMI_b_LOC_DisblMntr_prev = (rtb_VeGSMI_b_DisblMntrInvalidData ||
        ((((rtb_VeGSMC_b_ToParkVehicleSpdMetIntmnt || (((uint32)
        VeGSMI_e_DrvRqShftROT_Prmry) != CeGSMR_e_PRND_Park)) &&
           (rtb_VeGSMC_b_ToParkVehicleTOSRMetIntmnt || (((uint32)
        VeGSMI_e_DrvRqShftROT_Scndry) != CeGSMR_e_PRND_Park))) || (((uint32)
        VeGSMI_e_Lv2Lv1VldtdTransRngSt) != CeTRGR_e_TransRangePark)) &&
         (GSMR_ac_DW.VeGSMI_b_LOC_DisblMntr_prev)));

    /* Logic: '<S8>/Logical5' incorporates:
     *  UnitDelay: '<S396>/UnitDelay1'
     */
    VeGSMI_b_DisblMntrs = ((rtb_VeGSMI_b_Disbl_PRND_PPawl_Mntr_Cnfrm ||
                            (GSMR_ac_DW.VeGSMI_b_LOC_DisblMntr_prev)) ||
                           tmpRead_9);

    /* Logic: '<S8>/Logical_Operator3' incorporates:
     *  Constant: '<S315>/Constant'
     *  Constant: '<S341>/Calib'
     *  Logic: '<S8>/Logical_Operator1'
     *  Logic: '<S8>/Logical_Operator2'
     *  Logic: '<S8>/Logical_Operator4'
     *  Logic: '<S8>/Logical_Operator5'
     *  Logic: '<S8>/Logical_Operator6'
     *  RelationalOperator: '<S8>/RelationalOperator'
     */
    VeGSMI_b_ADAS_PPPA_Allwd = (((((((((uint32)VeGSMI_e_Lv2Lv1VldtdTransRngSt)
        != CeTRGR_e_TransRangeIllegal) && (!tmpRead_d)) && (!tmpRead_e)) &&
        (!rtb_VeGSMI_b_DisblMntrInvalidData)) && (tmpRead_g &&
        rtb_TmpSignalConversionAtVeSSDR_b_DrvAll)) && (tmpRead_i && tmpRead_h)) &&
        (KeGSMR_b_EnblADASFeature));

    /* Sum: '<S8>/Sum2' */
    rtb_VeGSMI_Pct_BrkTravelDiff -= rtb_TmpSignalConversionAtVeSCMR_Pct_Brak;

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/GSMR_FUNC_MedTEB' */

    /* Inport: '<Root>/VeSCMR_Cnt_Lv2PPMtrPosSnsr' */
    (void)Rte_Read_VeSCMR_Cnt_Lv2PPMtrPosSnsr_Value
        (&rtb_VeGSMI_U_Lv2PPMtrPosSnsrFB_Scld);

    /* Inport: '<Root>/VeHWIO_U_Lv2PPMtrPosSnsrFB' */
    (void)Rte_Read_VeHWIO_U_Lv2PPMtrPosSnsrFB_Value
        (&rtb_VeGSMR_Cnt_Lv2PPMtrPosSnsrFB);

    /* Outputs for Function Call SubSystem: '<Root>/GSMR_FUNC_MedTEB' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ProcGSMRInputs'
     */
    /* Switch: '<S8>/Switch10' incorporates:
     *  Constant: '<S339>/Calib'
     */
    if (KeGSMR_b_CountSource)
    {
        /* Switch: '<S8>/Switch10' */
        rtb_VeGSMR_Cnt_Lv2PPMtrPosSnsrFB = rtb_VeGSMI_U_Lv2PPMtrPosSnsrFB_Scld;
    }

    /* End of Switch: '<S8>/Switch10' */

    /* Outputs for Atomic SubSystem: '<S327>/LV2_DivideWithProtection' */
    /* Switch: '<S391>/Switch1' incorporates:
     *  Constant: '<S389>/Calib'
     *  Constant: '<S391>/ConstantValue'
     *  Constant: '<S391>/ConstantValue1'
     *  Constant: '<S391>/ConstantValue2'
     *  Constant: '<S391>/ConstantValue3'
     *  Logic: '<S391>/AND'
     *  RelationalOperator: '<S391>/GreaterThanorEqual'
     *  RelationalOperator: '<S391>/GreaterThanorEqual1'
     *  RelationalOperator: '<S391>/NotEqual'
     *  RelationalOperator: '<S391>/NotEqual1'
     *  Switch: '<S391>/Switch2'
     *  Switch: '<S391>/Switch3'
     */
    if ((rtb_VeGSMR_Cnt_Lv2PPMtrPosSnsrFB != 0.0F) &&
            (KeGSMR_r_Conv2VoltageFactr != 0.0F))
    {
        /* Switch: '<S391>/Switch1' incorporates:
         *  Product: '<S391>/Division'
         */
        rtb_VeGSMI_U_Lv2PPMtrPosSnsrFB_Scld = rtb_VeGSMR_Cnt_Lv2PPMtrPosSnsrFB /
            KeGSMR_r_Conv2VoltageFactr;
    }
    else if (rtb_VeGSMR_Cnt_Lv2PPMtrPosSnsrFB > 0.0F)
    {
        /* Switch: '<S391>/Switch2' incorporates:
         *  Constant: '<S391>/MAXFLOAT'
         *  Switch: '<S391>/Switch1'
         */
        rtb_VeGSMI_U_Lv2PPMtrPosSnsrFB_Scld = 3.402823466E+38F;
    }
    else if (rtb_VeGSMR_Cnt_Lv2PPMtrPosSnsrFB < 0.0F)
    {
        /* Switch: '<S391>/Switch3' incorporates:
         *  Constant: '<S391>/MINFLOAT'
         *  Switch: '<S391>/Switch1'
         *  Switch: '<S391>/Switch2'
         */
        rtb_VeGSMI_U_Lv2PPMtrPosSnsrFB_Scld = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S391>/Switch1' incorporates:
         *  Constant: '<S391>/ConstantValue4'
         *  Switch: '<S391>/Switch2'
         *  Switch: '<S391>/Switch3'
         */
        rtb_VeGSMI_U_Lv2PPMtrPosSnsrFB_Scld = 0.0F;
    }

    /* End of Switch: '<S391>/Switch1' */
    /* End of Outputs for SubSystem: '<S327>/LV2_DivideWithProtection' */

    /* Outputs for Atomic SubSystem: '<S327>/LV2_LowpassT_Reset_Enabled1' */
    /* Switch: '<S392>/Switch2' incorporates:
     *  Constant: '<S386>/Calib'
     *  Constant: '<S387>/Calib'
     *  RelationalOperator: '<S327>/Comparison1'
     *  Sum: '<S327>/Sum1'
     *  Switch: '<S327>/Switch7'
     *  Switch: '<S392>/Switch1'
     *  UnitDelay: '<S327>/UnitDelay'
     */
    if ((rtb_VeGSMI_U_Lv2PPMtrPosSnsrFB_Scld -
            GSMR_ac_DW.VeGSMI_U_Lv2PPMtrPosSnsr_FB_Prev) >=
            KeGSMR_U_VoltDiffToRstFilt)
    {
        /* Switch: '<S327>/Switch7' incorporates:
         *  Constant: '<S385>/Calib'
         *  Constant: '<S387>/Calib'
         *  UnitDelay: '<S392>/UnitDelay'
         */
        if (KeGSMR_b_OvrdPPMtrPosSnsrFB)
        {
            GSMR_ac_DW.VeGSMI_U_Lv2PPMtrPosSnsrFB_Filtd_prev =
                KeGSMR_U_PPMtrPosSnsrFBVal;
        }
        else
        {
            GSMR_ac_DW.VeGSMI_U_Lv2PPMtrPosSnsrFB_Filtd_prev =
                rtb_VeGSMI_U_Lv2PPMtrPosSnsrFB_Scld;
        }
    }
    else
    {
        if (KeGSMR_b_OvrdPPMtrPosSnsrFB)
        {
            /* Switch: '<S327>/Switch7' incorporates:
             *  Constant: '<S385>/Calib'
             */
            rtb_VeGSMI_Pct_BrkTravelDiffAbs_Abs = KeGSMR_U_PPMtrPosSnsrFBVal;
        }
        else
        {
            /* Switch: '<S327>/Switch7' */
            rtb_VeGSMI_Pct_BrkTravelDiffAbs_Abs =
                rtb_VeGSMI_U_Lv2PPMtrPosSnsrFB_Scld;
        }

        /* UnitDelay: '<S392>/UnitDelay' incorporates:
         *  Constant: '<S388>/Calib'
         *  Constant: '<S390>/Calib'
         *  MinMax: '<S392>/Maximum'
         *  Product: '<S392>/Multiplication'
         *  Product: '<S392>/Multiplication1'
         *  Sum: '<S392>/Subtraction'
         *  Sum: '<S392>/Summation'
         *  Switch: '<S392>/Switch2'
         */
        GSMR_ac_DW.VeGSMI_U_Lv2PPMtrPosSnsrFB_Filtd_prev +=
            ((rtb_VeGSMI_Pct_BrkTravelDiffAbs_Abs -
              GSMR_ac_DW.VeGSMI_U_Lv2PPMtrPosSnsrFB_Filtd_prev) *
             KeGSMR_t_GSMR_dT) * (1.0F / fmaxf(KeGSMR_k_PosSnsrFB_FiltCoeff,
            KeGSMR_t_GSMR_dT));
    }

    /* End of Switch: '<S392>/Switch2' */
    /* End of Outputs for SubSystem: '<S327>/LV2_LowpassT_Reset_Enabled1' */

    /* Outputs for Atomic SubSystem: '<S8>/LV2_Hysteresis' */
    /* Switch: '<S373>/Switch1' incorporates:
     *  Constant: '<S336>/Calib'
     *  Constant: '<S337>/Calib'
     *  Constant: '<S373>/ConstantValue'
     *  RelationalOperator: '<S373>/GreaterThan'
     *  RelationalOperator: '<S373>/GreaterThan1'
     *  UnitDelay: '<S373>/UnitDelay'
     */
    if (rtb_TmpSignalConversionAtVeSCMR_Pct_Brak > KeGSMR_Pct_BrkTravelSts_RSP)
    {
        GSMR_ac_DW.VeGSMC_b_Lv2BrkTravelSts_prev = true;
    }
    else
    {
        GSMR_ac_DW.VeGSMC_b_Lv2BrkTravelSts_prev =
            ((rtb_TmpSignalConversionAtVeSCMR_Pct_Brak >=
              KeGSMR_Pct_BrkTravelSts_LSP) &&
             (GSMR_ac_DW.VeGSMC_b_Lv2BrkTravelSts_prev));
    }

    /* End of Switch: '<S373>/Switch1' */
    /* End of Outputs for SubSystem: '<S8>/LV2_Hysteresis' */

    /* Switch: '<S8>/Switch11' incorporates:
     *  Constant: '<S339>/Calib'
     */
    if (KeGSMR_b_CountSource)
    {
        /* Switch: '<S8>/Switch11' incorporates:
         *  Constant: '<S325>/Constant'
         *  Logic: '<S8>/Logical16'
         *  RelationalOperator: '<S8>/Comparison2'
         *  SignalConversion generated from: '<S1>/VeSTMR_e_BrkPdlStat'
         */
        VeGSMI_b_BrkPdlStatFA = (CeSTMR_e_BrkStat_NotDtrmnd == ((uint32)
            rtb_TmpSignalConversionAtVeSTMR_e_BrkPdl));
    }
    else
    {
        /* Switch: '<S8>/Switch11' incorporates:
         *  Inport: '<Root>/VeLTIR_b_Lv2BrkPdlStat_FA'
         */
        (void)Rte_Read_VeLTIR_b_Lv2BrkPdlStat_FA_Value((&(VeGSMI_b_BrkPdlStatFA)));
    }

    /* End of Switch: '<S8>/Switch11' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/GSMR_FUNC_MedTEB' */

    /* Inport: '<Root>/VeLTIR_b_Lv2BrkTravelStsFlt' */
    (void)Rte_Read_VeLTIR_b_Lv2BrkTravelStsFlt_Value
        (&rtb_VeGSMI_b_Lv1InDrive_ePT);

    /* Inport: '<Root>/VeBRKR_b_BrkPedalDscrtInptFA' */
    (void)Rte_Read_VeBRKR_b_BrkPedalDscrtInptFA_Value(&tmpRead_8);

    /* Outputs for Function Call SubSystem: '<Root>/GSMR_FUNC_MedTEB' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ProcGSMRInputs'
     */
    /* Switch: '<S369>/LV2_Abs_switch' incorporates:
     *  Constant: '<S369>/ConstantValue1'
     *  Product: '<S369>/Product'
     *  RelationalOperator: '<S369>/Comparison'
     */
    if (rtb_VeGSMI_Pct_BrkTravelDiff < 0.0F)
    {
        rtb_VeGSMI_Pct_BrkTravelDiff = -rtb_VeGSMI_Pct_BrkTravelDiff;
    }

    /* End of Switch: '<S369>/LV2_Abs_switch' */

    /* Logic: '<S8>/Logical19' incorporates:
     *  Constant: '<S335>/Calib'
     *  Constant: '<S343>/Calib'
     *  RelationalOperator: '<S8>/Comparison12'
     */
    VeGSMI_b_BrkTravelDiffArb = (((((VeGSMI_b_BrkPdlStatFA) ||
        (rtb_VeGSMI_Pct_BrkTravelDiff > KeGSMR_Pct_BrkTravelStsTh)) ||
        (KeGSMR_b_Lv1BrakeStatus)) || tmpRead_8) || rtb_VeGSMI_b_Lv1InDrive_ePT);

    /* Switch: '<S8>/Switch4' */
    if (VeGSMI_b_BrkTravelDiffArb)
    {
        /* Switch: '<S8>/Switch4' incorporates:
         *  Constant: '<S324>/Constant'
         *  RelationalOperator: '<S8>/Comparison1'
         *  SignalConversion generated from: '<S1>/VeSTMR_e_BrkPdlStat'
         */
        VeGSMI_b_Lv2BrkPdlStat = (((uint32)
            rtb_TmpSignalConversionAtVeSTMR_e_BrkPdl) == CeSTMR_e_BrakeAppld);
    }
    else
    {
        /* Switch: '<S8>/Switch4' incorporates:
         *  UnitDelay: '<S373>/UnitDelay'
         */
        VeGSMI_b_Lv2BrkPdlStat = GSMR_ac_DW.VeGSMC_b_Lv2BrkTravelSts_prev;
    }

    /* End of Switch: '<S8>/Switch4' */

    /* Switch: '<S8>/Switch7' incorporates:
     *  Constant: '<S339>/Calib'
     *  Inport: '<Root>/VeSCMR_e_Lv2BrkPdlStat'
     */
    if (KeGSMR_b_CountSource)
    {
        /* Switch: '<S8>/Switch7' */
        VeGSMI_b_BrkApplied = VeGSMI_b_Lv2BrkPdlStat;
    }
    else
    {
        (void)Rte_Read_VeSCMR_e_Lv2BrkPdlStat_Value(&tmpRead);

        /* Switch: '<S8>/Switch7' incorporates:
         *  Constant: '<S338>/Calib'
         *  Inport: '<Root>/VeSCMR_e_Lv2BrkPdlStat'
         *  RelationalOperator: '<S8>/Comparison16'
         */
        VeGSMI_b_BrkApplied = (tmpRead == KeGSMR_e_BrkApplied);
    }

    /* End of Switch: '<S8>/Switch7' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/GSMR_FUNC_MedTEB' */

    /* Inport: '<Root>/VeHWIO_I_Lv2PPawlMtrCrntDraw' */
    (void)Rte_Read_VeHWIO_I_Lv2PPawlMtrCrntDraw_Value
        (&VeGSMI_I_Lv2PPawlMtrCrntDraw);

    /* Outputs for Function Call SubSystem: '<Root>/GSMR_FUNC_MedTEB' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ProcGSMRInputs'
     */
    /* Switch: '<S8>/Switch8' incorporates:
     *  Constant: '<S352>/Calib'
     */
    if (KeGSMR_b_OvrdPPawlMtrCrntDraw)
    {
        /* Switch: '<S8>/Switch8' incorporates:
         *  Constant: '<S334>/Calib'
         */
        VeGSMI_I_Lv2PPawlMtrCrntDraw = KeGSMR_I_PPawlMtrCrntDrawVal;
    }

    /* End of Switch: '<S8>/Switch8' */

    /* Switch: '<S8>/Switch9' incorporates:
     *  Constant: '<S349>/Calib'
     */
    if (KeGSMR_b_OvrdHBridgeDiagInfo)
    {
        /* Switch: '<S8>/Switch9' incorporates:
         *  Constant: '<S360>/Calib'
         *  DataTypeConversion: '<S309>/DataTypeConversion'
         */
        VeGSMI_e_Lv2HBridgeDiagInfo = (TeGSMR_e_HBridgeDiagInfo)
            KeGSMR_e_HBridgeDiagInfoVal;
    }
    else
    {
        /* Switch: '<S8>/Switch9' incorporates:
         *  Inport: '<Root>/VeSCMR_e_Lv2HBridgeDiagInfo'
         */
        (void)Rte_Read_VeSCMR_e_Lv2HBridgeDiagInfo_Value
            (&VeGSMI_e_Lv2HBridgeDiagInfo);
    }

    /* End of Switch: '<S8>/Switch9' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/GSMR_FUNC_MedTEB' */

    /* Inport: '<Root>/VePPCR_b_PPawlFlt_InhibitMtr' */
    (void)Rte_Read_VePPCR_b_PPawlFlt_InhibitMtr_Value(&tmpRead_7);

    /* Inport: '<Root>/VeDFIR_b_DiagSystemDsbl' */
    (void)Rte_Read_VeDFIR_b_DiagSystemDsbl_Value(&rtb_VeGSMI_b_Lv1InReverse);

    /* Inport: '<Root>/VeLTIR_b_Lv2HV_BatSOC_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2HV_BatSOC_FA_Value(&rtb_VeGSMR_b_OTN_NLock);

    /* Inport: '<Root>/VeLTIR_b_Lv2LV_BatVlt_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2LV_BatVlt_FA_Value
        (&rtb_VeGSMR_b_VehPluggedInDelay);

    /* Inport: '<Root>/VeLTIR_b_Lv2KeySts_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2KeySts_FA_Value(&rtb_VeGSMR_b_OTN_NLckTrgr);

    /* Inport: '<Root>/VeSCMR_b_ESS_RqShftPark' */
    (void)Rte_Read_VeSCMR_b_ESS_RqShftPark_Value(&rtb_GreaterThan1_b);

    /* Inport: '<Root>/VeSCMR_b_ESS_RqShftPark_FA' */
    (void)Rte_Read_VeSCMR_b_ESS_RqShftPark_FA_Value(&rtb_VeGSMR_b_DisEngdTrgr);

    /* Inport: '<Root>/VeSRAR_e_EPB_Hold_Req' */
    (void)Rte_Read_VeSRAR_e_EPB_Hold_Req_Value(&tmpRead_6);

    /* Inport: '<Root>/VeSRAR_b_SharedMemFlt' */
    (void)Rte_Read_VeSRAR_b_SharedMemFlt_Value(&rtb_Compare_k);

    /* Inport: '<Root>/VeLTIR_b_Lv2MtrB_Spd_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2MtrB_Spd_FA_Value(&rtb_AND_i);

    /* Inport: '<Root>/VeLTIR_b_Lv2ProxStat_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2ProxStat_FA_Value(&tmpRead_5);

    /* Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe' */
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value(&rtb_VeGSMI_b_Lv1InDrive);

    /* Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl' */
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value
        (&rtb_VeGSMI_b_Lv1InReverse_ePT);

    /* Outputs for Function Call SubSystem: '<Root>/GSMR_FUNC_MedTEB' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ProcGSMRInputs'
     */
    /* Logic: '<S8>/Logical1' */
    GSMR_ac_B.VeGSMI_b_ClrDiagCntrTmrs = ((rtb_VeGSMI_b_Lv1InReverse_ePT ||
        rtb_VeGSMI_b_Lv1InDrive) || rtb_VeGSMI_b_Lv1InReverse);

    /* RelationalOperator: '<S8>/Comparison4' incorporates:
     *  Constant: '<S316>/Constant'
     *  Inport: '<Root>/VeSRAR_e_EPB_Hold_Req'
     */
    VeGSMI_b_Lv1EPBReq = (((uint32)tmpRead_6) == CeTRGR_e_EPBReq_ACTIVE);

    /* Switch: '<S8>/Switch18' incorporates:
     *  Constant: '<S344>/Calib'
     *  Inport: '<Root>/VeSCMR_e_Lv2MtrA_6SOEnbl'
     */
    if (KeGSMR_b_MtrA_6SOEnblOvrd)
    {
        /* Switch: '<S8>/Switch18' incorporates:
         *  Constant: '<S361>/Calib'
         */
        VeGSMI_e_Lv2MtrA_6SOEnbl = KeGSMR_e_MtrA_6SOEnblOvrdVal;
    }
    else
    {
        (void)Rte_Read_VeSCMR_e_Lv2MtrA_6SOEnbl_Value
            (&rtb_VeGSMR_Cnt_UndesPPawlMtrStFlt_Prev_k);

        /* Switch: '<S8>/Switch18' incorporates:
         *  DataTypeConversion: '<S308>/DataTypeConversion'
         *  Inport: '<Root>/VeSCMR_e_Lv2MtrA_6SOEnbl'
         */
        VeGSMI_e_Lv2MtrA_6SOEnbl = (TeGSMR_e_SixSOStatus)
            rtb_VeGSMR_Cnt_UndesPPawlMtrStFlt_Prev_k;
    }

    /* End of Switch: '<S8>/Switch18' */

    /* Switch: '<S8>/Switch19' incorporates:
     *  Constant: '<S345>/Calib'
     *  Inport: '<Root>/VeSCMR_e_Lv2MtrA_InvrtrSts'
     */
    if (KeGSMR_b_MtrA_InvrtrStOvrd)
    {
        /* Switch: '<S8>/Switch19' incorporates:
         *  Constant: '<S362>/Calib'
         */
        VeGSMI_e_Lv2MtrA_InvrtrSts = KeGSMR_e_MtrA_InvrtrStOvrdVal;
    }
    else
    {
        (void)Rte_Read_VeSCMR_e_Lv2MtrA_InvrtrSts_Value(&tmpRead_a);

        /* Switch: '<S8>/Switch19' incorporates:
         *  DataTypeConversion: '<S310>/DataTypeConversion'
         *  Inport: '<Root>/VeSCMR_e_Lv2MtrA_InvrtrSts'
         */
        VeGSMI_e_Lv2MtrA_InvrtrSts = (TeGSMR_e_MtrInvrtrSt)tmpRead_a;
    }

    /* End of Switch: '<S8>/Switch19' */

    /* Switch: '<S8>/Switch20' incorporates:
     *  Constant: '<S346>/Calib'
     *  Inport: '<Root>/VeSCMR_e_Lv2MtrB_InvrtrSts'
     */
    if (KeGSMR_b_MtrB_InvrtrStOvrd)
    {
        /* Switch: '<S8>/Switch20' incorporates:
         *  Constant: '<S363>/Calib'
         */
        VeGSMI_e_Lv2MtrB_InvrtrSts = KeGSMR_e_MtrB_InvrtrStOvrdVal;
    }
    else
    {
        (void)Rte_Read_VeSCMR_e_Lv2MtrB_InvrtrSts_Value(&tmpRead_b);

        /* Switch: '<S8>/Switch20' incorporates:
         *  DataTypeConversion: '<S311>/DataTypeConversion'
         *  Inport: '<Root>/VeSCMR_e_Lv2MtrB_InvrtrSts'
         */
        VeGSMI_e_Lv2MtrB_InvrtrSts = (TeGSMR_e_MtrInvrtrSt)tmpRead_b;
    }

    /* End of Switch: '<S8>/Switch20' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/GSMR_FUNC_MedTEB' */

    /* Inport: '<Root>/VeLTIR_b_Lv2ParkingGearShiftReq_BSM_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2ParkingGearShiftReq_BSM_FA_Value(&tmpRead_j);

    /* Inport: '<Root>/VeSCMR_e_Lv2ParkingGearShiftReq_BSM' */
    (void)Rte_Read_VeSCMR_e_Lv2ParkingGearShiftReq_BSM_Value(&tmpRead_f);

    /* Outputs for Function Call SubSystem: '<Root>/GSMR_FUNC_MedTEB' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ProcGSMRInputs'
     */
    /* DataTypeConversion: '<S312>/DataTypeConversion' incorporates:
     *  Inport: '<Root>/VePPCR_e_PPawl_HW_Request'
     */
    (void)Rte_Read_VePPCR_e_PPawl_HW_Request_Value(&GSMR_ac_B.DataTypeConversion);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/GSMR_FUNC_MedTEB' */

    /* Inport: '<Root>/VeDMAB_y_StatusByte_CM_eParkPerf' */
    (void)Rte_Read_VeDMAB_y_StatusByte_CM_eParkPerf_Value(&tmpRead_c);

    /* Outputs for Function Call SubSystem: '<Root>/GSMR_FUNC_MedTEB' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ProcGSMRInputs'
     */
    /* Gain: '<S374>/Gain' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CM_eShiftPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CM_eShiftPerf_Value(&GSMR_ac_B.Gain_m);

    /* RelationalOperator: '<S407>/RelationalOperator' incorporates:
     *  DataTypeConversion: '<S313>/DataTypeConversion'
     */
    VeGSMI_e_ParkingGearShftRq_BSM = tmpRead_f;

    /* Update for UnitDelay: '<S327>/UnitDelay' */
    GSMR_ac_DW.VeGSMI_U_Lv2PPMtrPosSnsr_FB_Prev =
        rtb_VeGSMI_U_Lv2PPMtrPosSnsrFB_Scld;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ProcessPRNDUserRequest'
     */
    /* Outputs for Atomic SubSystem: '<S10>/ProcessPRNDRequest' */
    /* RelationalOperator: '<S522>/Comparison4' incorporates:
     *  Constant: '<S545>/Constant'
     */
    rtb_VeGSMI_b_Lv1InReverse = (((uint32)VeGSMI_e_Lv2Lv1VldtdTransRngSt) ==
        CeTRGR_e_TransRangeReverse);

    /* Logic: '<S522>/Logical4' incorporates:
     *  Constant: '<S559>/Calib'
     *  Logic: '<S562>/AND1'
     *  Logic: '<S562>/OR2'
     *  RelationalOperator: '<S522>/Comparison10'
     *  UnitDelay: '<S562>/UnitDelay'
     */
    VeGSMI_b_Lv1RevWithHighSpd = ((rtb_VeGSMI_b_Lv1InReverse &&
        (!GSMR_ac_DW.VeGSMR_b_Lv1RevRequest_prev)) && (GSMR_ac_B.Gain <
        KeGSMR_v_ToR_SpeedThrshForLv1));

    /* Logic: '<S522>/Logical6' incorporates:
     *  Constant: '<S554>/Calib'
     *  RelationalOperator: '<S522>/Comparison13'
     */
    VeGSMI_b_Lv1RevRejectReq = (rtb_TmpSignalConversionAtVeTRGR_b_Reje_b &&
        (GSMR_ac_B.Gain >= KeGSMR_v_SpdThrshToRejectR));

    /* RelationalOperator: '<S522>/Comparison11' incorporates:
     *  Constant: '<S546>/Constant'
     */
    rtb_VeGSMI_b_Lv1InDrive = (((uint32)VeGSMI_e_Lv2Lv1VldtdTransRngSt) ==
        CeTRGR_e_TransRangeDrive);

    /* Logic: '<S522>/Logical5' incorporates:
     *  Constant: '<S556>/Calib'
     *  Logic: '<S563>/AND1'
     *  Logic: '<S563>/OR2'
     *  RelationalOperator: '<S522>/Comparison12'
     *  UnitDelay: '<S563>/UnitDelay'
     */
    VeGSMI_b_Lv1DrvWithHighSpd = ((rtb_VeGSMI_b_Lv1InDrive &&
        (!GSMR_ac_DW.VeGSMR_b_Lv1DrvRequest_prev)) && (GSMR_ac_B.Gain >
        KeGSMR_v_ToD_SpeedThrshForLv1));

    /* Logic: '<S522>/Logical7' incorporates:
     *  Constant: '<S553>/Calib'
     *  RelationalOperator: '<S522>/Comparison14'
     */
    VeGSMI_b_Lv1DrvRejectReq = (rtb_TmpSignalConversionAtVeTRGR_b_Reject &&
        (GSMR_ac_B.Gain <= KeGSMR_v_SpdThrshToRejectD));

    /* Logic: '<S522>/Logical14' incorporates:
     *  Logic: '<S523>/Logical14'
     */
    tmpRead_8 = !GSMR_ac_B.VeGSMR_b_OvrrdToParkToN;

    /* Logic: '<S522>/Logical12' incorporates:
     *  Constant: '<S538>/Constant'
     *  Constant: '<S539>/Constant'
     *  Constant: '<S540>/Constant'
     *  Constant: '<S548>/Constant'
     *  RelationalOperator: '<S522>/Comparison17'
     *  RelationalOperator: '<S522>/Comparison18'
     *  RelationalOperator: '<S522>/Comparison19'
     *  RelationalOperator: '<S522>/Comparison20'
     */
    VeGSMI_b_Lv1ValidGear_CAN = ((((((uint32)VeGSMI_e_Lv2Lv1VldtdTransRngSt) ==
        CeTRGR_e_TransRangeReverse) || (((uint32)VeGSMI_e_Lv2Lv1VldtdTransRngSt)
        == CeTRGR_e_TransRangeDrive)) || (((uint32)
        VeGSMI_e_Lv2Lv1VldtdTransRngSt) == CeTRGR_e_TransRangePark)) ||
        (((uint32)VeGSMI_e_Lv2Lv1VldtdTransRngSt) == CeTRGR_e_TransRangeNeutral));

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ProcGSMRInputs'
     */
    /* Switch: '<S520>/Switch1' incorporates:
     *  Logic: '<S301>/AND'
     */
    if (rtb_VeGSMC_b_ToParkVehicleSpdMetIntmnt)
    {
        /* Switch: '<S520>/Switch1' incorporates:
         *  Switch: '<S8>/Switch2'
         */
        rtb_TmpSignalConversionAtVeSCMR_e_SC_Shi = VeGSMI_e_DrvRqShftROT_Scndry;
    }
    else
    {
        /* Switch: '<S520>/Switch1' incorporates:
         *  RelationalOperator: '<S367>/Comparison4'
         *  Switch: '<S8>/Switch1'
         */
        rtb_TmpSignalConversionAtVeSCMR_e_SC_Shi = VeGSMI_e_DrvRqShftROT_Prmry;
    }

    /* End of Switch: '<S520>/Switch1' */

    /* Switch: '<S522>/Switch2' incorporates:
     *  Constant: '<S551>/Calib'
     *  Constant: '<S561>/ConstantValue1'
     *  RelationalOperator: '<S561>/Comparison'
     *  Switch: '<S561>/LV2_Abs_switch'
     */
    if (KeGSMR_b_TOSRSpdToGotoPark)
    {
        /* Switch: '<S560>/LV2_Abs_switch' incorporates:
         *  Constant: '<S560>/ConstantValue1'
         *  Product: '<S560>/Product'
         *  RelationalOperator: '<S560>/Comparison'
         */
        if (GSMR_ac_B.Switch1 < 0.0F)
        {
            rtb_VeGSMI_Pct_BrkTravelDiffAbs_Abs = -GSMR_ac_B.Switch1;
        }
        else
        {
            rtb_VeGSMI_Pct_BrkTravelDiffAbs_Abs = GSMR_ac_B.Switch1;
        }

        /* End of Switch: '<S560>/LV2_Abs_switch' */

        /* Switch: '<S523>/Switch2' incorporates:
         *  Constant: '<S552>/Calib'
         *  RelationalOperator: '<S522>/Comparison6'
         */
        rtb_TmpSignalConversionAtVeSSDR_b_DrvAll =
            (rtb_VeGSMI_Pct_BrkTravelDiffAbs_Abs < KeGSMR_n_ToP_SpeedThrsh);
    }
    else
    {
        if (GSMR_ac_B.Gain < 0.0F)
        {
            /* Switch: '<S561>/LV2_Abs_switch' incorporates:
             *  Product: '<S561>/Product'
             */
            rtb_VeGSMI_Pct_BrkTravelDiffAbs_Abs = -GSMR_ac_B.Gain;
        }
        else
        {
            /* Switch: '<S561>/LV2_Abs_switch' */
            rtb_VeGSMI_Pct_BrkTravelDiffAbs_Abs = GSMR_ac_B.Gain;
        }

        /* Switch: '<S523>/Switch2' incorporates:
         *  Constant: '<S557>/Calib'
         *  RelationalOperator: '<S522>/Comparison7'
         */
        rtb_TmpSignalConversionAtVeSSDR_b_DrvAll =
            (rtb_VeGSMI_Pct_BrkTravelDiffAbs_Abs < KeGSMR_v_ToP_SpeedThrsh);
    }

    /* End of Switch: '<S522>/Switch2' */

    /* Logic: '<S522>/Logical3' incorporates:
     *  Constant: '<S547>/Constant'
     *  RelationalOperator: '<S522>/Comparison1'
     *  Switch: '<S520>/Switch1'
     */
    VeGSMI_b_DrvRqShftROTCAN_Prk = ((((uint32)
        rtb_TmpSignalConversionAtVeSCMR_e_SC_Shi) == CeGSMR_e_PRND_Park) &&
        rtb_TmpSignalConversionAtVeSSDR_b_DrvAll);

    /* Logic: '<S522>/Logical9' incorporates:
     *  Constant: '<S541>/Constant'
     *  Constant: '<S558>/Calib'
     *  Logic: '<S522>/Logical14'
     *  RelationalOperator: '<S522>/Comparison1'
     *  RelationalOperator: '<S522>/Comparison2'
     *  RelationalOperator: '<S522>/Comparison8'
     *  Switch: '<S520>/Switch1'
     */
    VeGSMI_b_DrvRqShftROTCAN_Rev = ((((((uint32)
        rtb_TmpSignalConversionAtVeSCMR_e_SC_Shi) == CeGSMR_e_PRND_Reverse) &&
        rtb_TmpSignalConversionAtVeHPMR_b_PropSy) && tmpRead_8) &&
        (GSMR_ac_B.Gain < KeGSMR_v_ToR_SpeedThrsh));

    /* Logic: '<S522>/Logical2' incorporates:
     *  Constant: '<S543>/Constant'
     *  Constant: '<S555>/Calib'
     *  Logic: '<S522>/Logical14'
     *  RelationalOperator: '<S522>/Comparison1'
     *  RelationalOperator: '<S522>/Comparison5'
     *  RelationalOperator: '<S522>/Comparison9'
     *  Switch: '<S520>/Switch1'
     */
    VeGSMI_b_DrvRqShftROTCAN_Drv = ((((((uint32)
        rtb_TmpSignalConversionAtVeSCMR_e_SC_Shi) == CeGSMR_e_PRND_Drive) &&
        rtb_TmpSignalConversionAtVeHPMR_b_PropSy) && tmpRead_8) &&
        (GSMR_ac_B.Gain > KeGSMR_v_ToD_SpeedThrsh));

    /* RelationalOperator: '<S522>/Comparison3' incorporates:
     *  Constant: '<S542>/Constant'
     *  RelationalOperator: '<S522>/Comparison1'
     *  Switch: '<S520>/Switch1'
     */
    VeGSMI_b_DrvRqShftROTCAN_Neutral = (((uint32)
        rtb_TmpSignalConversionAtVeSCMR_e_SC_Shi) == CeGSMR_e_PRND_Neutral);

    /* Logic: '<S522>/Logical1' */
    VeGSMI_b_DrvRqShftROT_CANCValid = ((((VeGSMI_b_DrvRqShftROTCAN_Prk) ||
        (VeGSMI_b_DrvRqShftROTCAN_Rev)) || (VeGSMI_b_DrvRqShftROTCAN_Drv)) ||
        (VeGSMI_b_DrvRqShftROTCAN_Neutral));

    /* Switch: '<S549>/Switch1' incorporates:
     *  Constant: '<S537>/Constant'
     *  Constant: '<S550>/Calib'
     *  Logic: '<S522>/Logical10'
     *  Logic: '<S522>/Logical14'
     *  Logic: '<S522>/Logical8'
     *  Switch: '<S549>/Switch2'
     *  Switch: '<S549>/Switch3'
     *  Switch: '<S549>/Switch4'
     *  UnitDelay: '<S522>/UnitDelay'
     */
    if (GSMR_ac_B.VeGSMR_b_OvrdToPark)
    {
        GSMR_ac_DW.VeGSMI_e_DrvRqShftROT_CANCPrev = CeGSMR_e_PRND_Park;
    }
    else if (GSMR_ac_B.VeGSMR_b_OvrdToNeutralDrvReq)
    {
        /* Switch: '<S549>/Switch2' incorporates:
         *  Constant: '<S544>/Constant'
         *  Switch: '<S549>/Switch1'
         *  UnitDelay: '<S522>/UnitDelay'
         */
        GSMR_ac_DW.VeGSMI_e_DrvRqShftROT_CANCPrev = CeGSMR_e_PRND_Neutral;
    }
    else if (((((((VeGSMI_b_Lv1RevWithHighSpd) || (VeGSMI_b_Lv1RevRejectReq)) ||
                 (VeGSMI_b_Lv1DrvWithHighSpd)) || (VeGSMI_b_Lv1DrvRejectReq)) &&
               tmpRead_8) && (KeGSMR_b_Lv1SpeedThrsh)) &&
             (VeGSMI_b_Lv1ValidGear_CAN))
    {
        /* Switch: '<S549>/Switch3' incorporates:
         *  Switch: '<S549>/Switch1'
         *  Switch: '<S549>/Switch2'
         *  UnitDelay: '<S522>/UnitDelay'
         */
        GSMR_ac_DW.VeGSMI_e_DrvRqShftROT_CANCPrev = (TeGSMR_e_DrvRqShftROT)
            VeGSMI_e_Lv2Lv1VldtdTransRngSt;
    }
    else
    {
        if (VeGSMI_b_DrvRqShftROT_CANCValid)
        {
            /* Switch: '<S549>/Switch4' incorporates:
             *  RelationalOperator: '<S522>/Comparison1'
             *  Switch: '<S520>/Switch1'
             *  Switch: '<S549>/Switch1'
             *  Switch: '<S549>/Switch2'
             *  Switch: '<S549>/Switch3'
             *  UnitDelay: '<S522>/UnitDelay'
             */
            GSMR_ac_DW.VeGSMI_e_DrvRqShftROT_CANCPrev =
                rtb_TmpSignalConversionAtVeSCMR_e_SC_Shi;
        }
    }

    /* End of Switch: '<S549>/Switch1' */

    /* Switch: '<S518>/Switch1' incorporates:
     *  Constant: '<S521>/Calib'
     */
    if (KeGSMR_b_ShftProxi)
    {
        /* Switch: '<S518>/Switch1' incorporates:
         *  Switch: '<S549>/Switch1'
         *  UnitDelay: '<S522>/UnitDelay'
         */
        rtb_TmpSignalConversionAtVeSCMR_e_SC_Shi =
            GSMR_ac_DW.VeGSMI_e_DrvRqShftROT_CANCPrev;
    }

    /* End of Switch: '<S518>/Switch1' */

    /* RelationalOperator: '<S524>/Comparison5' incorporates:
     *  Switch: '<S518>/Switch1'
     *  Switch: '<S527>/Switch1'
     *  Switch: '<S595>/Switch1'
     */
    rtb_TmpSignalConversionAtVeSCMR_e_SC_S_k =
        rtb_TmpSignalConversionAtVeSCMR_e_SC_Shi;

    /* Outputs for Atomic SubSystem: '<S524>/LV2_Timer_Retrigger_Reset_Enabled' */
    /* Switch: '<S598>/Switch2' incorporates:
     *  Constant: '<S596>/Calib'
     *  Logic: '<S524>/Logical1'
     *  RelationalOperator: '<S524>/Comparison5'
     *  Switch: '<S518>/Switch1'
     *  Switch: '<S598>/Switch1'
     *  UnitDelay: '<S524>/UnitDelay2'
     *  UnitDelay: '<S598>/UnitDelay'
     */
    if (rtb_TmpSignalConversionAtVeSCMR_e_SC_Shi !=
            GSMR_ac_DW.VeGSMR_e_DrvRqShftROT_CANC_Prev)
    {
        GSMR_ac_DW.VeGSMR_t_DrvRqShftROT_CANC_Prev_prev = KeGSMR_t_CANReqDbnc;
    }
    else
    {
        /* UnitDelay: '<S598>/UnitDelay' incorporates:
         *  Constant: '<S597>/Calib'
         *  Constant: '<S598>/ConstantValue4'
         *  MinMax: '<S598>/Maximum'
         *  Sum: '<S598>/Subtraction'
         *  Switch: '<S598>/Switch2'
         */
        GSMR_ac_DW.VeGSMR_t_DrvRqShftROT_CANC_Prev_prev = fmaxf
            (GSMR_ac_DW.VeGSMR_t_DrvRqShftROT_CANC_Prev_prev - KeGSMR_t_GSMR_dT,
             0.0F);
    }

    /* End of Switch: '<S598>/Switch2' */
    /* End of Outputs for SubSystem: '<S524>/LV2_Timer_Retrigger_Reset_Enabled' */

    /* RelationalOperator: '<S523>/Comparison4' incorporates:
     *  Constant: '<S573>/Constant'
     */
    rtb_VeGSMI_b_Lv1InReverse_ePT = (((uint32)VeGSMI_e_Lv2Lv1VldtdTransRngSt) ==
        CeTRGR_e_TransRangeReverse);

    /* Logic: '<S523>/Logical4' incorporates:
     *  Constant: '<S587>/Calib'
     *  Logic: '<S590>/AND1'
     *  Logic: '<S590>/OR2'
     *  RelationalOperator: '<S523>/Comparison10'
     *  UnitDelay: '<S590>/UnitDelay'
     */
    VeGSMI_b_Lv1RevWithHighSpd_ePT = ((rtb_VeGSMI_b_Lv1InReverse_ePT &&
        (!GSMR_ac_DW.VeGSMR_b_Lv1RevRequest_ePT_prev)) && (GSMR_ac_B.Gain <
        KeGSMR_v_ToR_SpeedThrshForLv1));

    /* Logic: '<S523>/Logical6' incorporates:
     *  Constant: '<S582>/Calib'
     *  Logic: '<S591>/AND1'
     *  Logic: '<S591>/OR2'
     *  RelationalOperator: '<S523>/Comparison13'
     *  UnitDelay: '<S591>/UnitDelay'
     */
    VeGSMI_b_Lv1RevRejectReq_ePT = ((rtb_TmpSignalConversionAtVeTRGR_b_Reje_b &&
        (!GSMR_ac_DW.VeGSMR_b_Lv1RejectR_ePT_prev)) && (GSMR_ac_B.Gain >=
        KeGSMR_v_SpdThrshToRejectR));

    /* RelationalOperator: '<S523>/Comparison11' incorporates:
     *  Constant: '<S574>/Constant'
     */
    rtb_VeGSMI_b_Lv1InDrive_ePT = (((uint32)VeGSMI_e_Lv2Lv1VldtdTransRngSt) ==
        CeTRGR_e_TransRangeDrive);

    /* Logic: '<S523>/Logical5' incorporates:
     *  Constant: '<S584>/Calib'
     *  Logic: '<S592>/AND1'
     *  Logic: '<S592>/OR2'
     *  RelationalOperator: '<S523>/Comparison12'
     *  UnitDelay: '<S592>/UnitDelay'
     */
    VeGSMI_b_Lv1DrvWithHighSpd_ePT = ((rtb_VeGSMI_b_Lv1InDrive_ePT &&
        (!GSMR_ac_DW.VeGSMR_b_Lv1DrvRequest_ePT_prev)) && (GSMR_ac_B.Gain >
        KeGSMR_v_ToD_SpeedThrshForLv1));

    /* Logic: '<S523>/Logical7' incorporates:
     *  Constant: '<S581>/Calib'
     *  Logic: '<S593>/AND1'
     *  Logic: '<S593>/OR2'
     *  RelationalOperator: '<S523>/Comparison14'
     *  UnitDelay: '<S593>/UnitDelay'
     */
    VeGSMI_b_Lv1DrvRejectReq_ePT = ((rtb_TmpSignalConversionAtVeTRGR_b_Reject &&
        (!GSMR_ac_DW.VeGSMR_b_Lv1RejectD_ePT_prev)) && (GSMR_ac_B.Gain <=
        KeGSMR_v_SpdThrshToRejectD));

    /* Logic: '<S523>/Logical12' incorporates:
     *  Constant: '<S566>/Constant'
     *  Constant: '<S567>/Constant'
     *  Constant: '<S568>/Constant'
     *  Constant: '<S576>/Constant'
     *  RelationalOperator: '<S523>/Comparison17'
     *  RelationalOperator: '<S523>/Comparison18'
     *  RelationalOperator: '<S523>/Comparison19'
     *  RelationalOperator: '<S523>/Comparison20'
     */
    VeGSMI_b_Lv1ValidGear_ePT = ((((((uint32)VeGSMI_e_Lv2Lv1VldtdTransRngSt) ==
        CeTRGR_e_TransRangeReverse) || (((uint32)VeGSMI_e_Lv2Lv1VldtdTransRngSt)
        == CeTRGR_e_TransRangeDrive)) || (((uint32)
        VeGSMI_e_Lv2Lv1VldtdTransRngSt) == CeTRGR_e_TransRangePark)) ||
        (((uint32)VeGSMI_e_Lv2Lv1VldtdTransRngSt) == CeTRGR_e_TransRangeNeutral));

    /* Switch: '<S523>/Switch2' incorporates:
     *  Constant: '<S579>/Calib'
     *  Constant: '<S589>/ConstantValue1'
     *  RelationalOperator: '<S589>/Comparison'
     *  Switch: '<S589>/LV2_Abs_switch'
     */
    if (KeGSMR_b_TOSRSpdToGotoPark)
    {
        /* Switch: '<S588>/LV2_Abs_switch' incorporates:
         *  Constant: '<S588>/ConstantValue1'
         *  Product: '<S588>/Product'
         *  RelationalOperator: '<S588>/Comparison'
         */
        if (GSMR_ac_B.Switch1 < 0.0F)
        {
            rtb_VeGSMI_Pct_BrkTravelDiffAbs_Abs = -GSMR_ac_B.Switch1;
        }
        else
        {
            rtb_VeGSMI_Pct_BrkTravelDiffAbs_Abs = GSMR_ac_B.Switch1;
        }

        /* End of Switch: '<S588>/LV2_Abs_switch' */

        /* Switch: '<S523>/Switch2' incorporates:
         *  Constant: '<S580>/Calib'
         *  RelationalOperator: '<S523>/Comparison6'
         */
        rtb_TmpSignalConversionAtVeSSDR_b_DrvAll =
            (rtb_VeGSMI_Pct_BrkTravelDiffAbs_Abs < KeGSMR_n_ToP_SpeedThrsh);
    }
    else
    {
        if (GSMR_ac_B.Gain < 0.0F)
        {
            /* Switch: '<S589>/LV2_Abs_switch' incorporates:
             *  Product: '<S589>/Product'
             */
            rtb_VeGSMI_Pct_BrkTravelDiffAbs_Abs = -GSMR_ac_B.Gain;
        }
        else
        {
            /* Switch: '<S589>/LV2_Abs_switch' */
            rtb_VeGSMI_Pct_BrkTravelDiffAbs_Abs = GSMR_ac_B.Gain;
        }

        /* Switch: '<S523>/Switch2' incorporates:
         *  Constant: '<S585>/Calib'
         *  RelationalOperator: '<S523>/Comparison7'
         */
        rtb_TmpSignalConversionAtVeSSDR_b_DrvAll =
            (rtb_VeGSMI_Pct_BrkTravelDiffAbs_Abs < KeGSMR_v_ToP_SpeedThrsh);
    }

    /* End of Switch: '<S523>/Switch2' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ProcGSMRInputs'
     */
    /* Logic: '<S523>/Logical3' incorporates:
     *  Constant: '<S575>/Constant'
     *  RelationalOperator: '<S367>/Comparison1'
     *  RelationalOperator: '<S523>/Comparison1'
     *  Switch: '<S8>/Switch2'
     */
    VeGSMI_b_DrvRqShftROTDPT_Prk = ((((uint32)VeGSMI_e_DrvRqShftROT_Scndry) ==
        CeGSMR_e_PRND_Park) && rtb_TmpSignalConversionAtVeSSDR_b_DrvAll);

    /* Logic: '<S523>/Logical9' incorporates:
     *  Constant: '<S569>/Constant'
     *  Constant: '<S586>/Calib'
     *  RelationalOperator: '<S367>/Comparison1'
     *  RelationalOperator: '<S523>/Comparison2'
     *  RelationalOperator: '<S523>/Comparison8'
     *  Switch: '<S8>/Switch2'
     */
    VeGSMI_b_DrvRqShftROTDPT_Rev = ((((((uint32)VeGSMI_e_DrvRqShftROT_Scndry) ==
        CeGSMR_e_PRND_Reverse) && rtb_TmpSignalConversionAtVeHPMR_b_PropSy) &&
        tmpRead_8) && (GSMR_ac_B.Gain < KeGSMR_v_ToR_SpeedThrsh));

    /* Logic: '<S523>/Logical2' incorporates:
     *  Constant: '<S571>/Constant'
     *  Constant: '<S583>/Calib'
     *  RelationalOperator: '<S367>/Comparison1'
     *  RelationalOperator: '<S523>/Comparison5'
     *  RelationalOperator: '<S523>/Comparison9'
     *  Switch: '<S8>/Switch2'
     */
    VeGSMI_b_DrvRqShftROTDPT_Drv = ((((((uint32)VeGSMI_e_DrvRqShftROT_Scndry) ==
        CeGSMR_e_PRND_Drive) && rtb_TmpSignalConversionAtVeHPMR_b_PropSy) &&
        tmpRead_8) && (GSMR_ac_B.Gain > KeGSMR_v_ToD_SpeedThrsh));

    /* RelationalOperator: '<S523>/Comparison3' incorporates:
     *  Constant: '<S570>/Constant'
     *  RelationalOperator: '<S367>/Comparison1'
     *  Switch: '<S8>/Switch2'
     */
    VeGSMI_b_DrvRqShftROTDPT_Neutral = (((uint32)VeGSMI_e_DrvRqShftROT_Scndry) ==
        CeGSMR_e_PRND_Neutral);

    /* Logic: '<S523>/Logical1' */
    VeGSMI_b_DrvRqShftROT_DPTValid = ((((VeGSMI_b_DrvRqShftROTDPT_Prk) ||
        (VeGSMI_b_DrvRqShftROTDPT_Rev)) || (VeGSMI_b_DrvRqShftROTDPT_Drv)) ||
        (VeGSMI_b_DrvRqShftROTDPT_Neutral));

    /* Switch: '<S577>/Switch1' incorporates:
     *  Constant: '<S565>/Constant'
     *  Constant: '<S578>/Calib'
     *  Logic: '<S523>/Logical10'
     *  Logic: '<S523>/Logical8'
     *  Switch: '<S577>/Switch2'
     *  Switch: '<S577>/Switch3'
     *  Switch: '<S577>/Switch4'
     *  UnitDelay: '<S523>/Unit Delay'
     */
    if (GSMR_ac_B.VeGSMR_b_OvrdToPark)
    {
        GSMR_ac_DW.VeGSMI_e_DrvRqShftROT_CDPT = CeGSMR_e_PRND_Park;
    }
    else if (GSMR_ac_B.VeGSMR_b_OvrdToNeutralDrvReq)
    {
        /* Switch: '<S577>/Switch2' incorporates:
         *  Constant: '<S572>/Constant'
         *  Switch: '<S577>/Switch1'
         *  UnitDelay: '<S523>/Unit Delay'
         */
        GSMR_ac_DW.VeGSMI_e_DrvRqShftROT_CDPT = CeGSMR_e_PRND_Neutral;
    }
    else if (((((((VeGSMI_b_Lv1RevWithHighSpd_ePT) ||
                  (VeGSMI_b_Lv1RevRejectReq_ePT)) ||
                 (VeGSMI_b_Lv1DrvWithHighSpd_ePT)) ||
                (VeGSMI_b_Lv1DrvRejectReq_ePT)) && tmpRead_8) &&
              (KeGSMR_b_Lv1SpeedThrsh)) && (VeGSMI_b_Lv1ValidGear_ePT))
    {
        /* Switch: '<S577>/Switch3' incorporates:
         *  DataTypeConversion: '<S564>/DataTypeConversion'
         *  Switch: '<S577>/Switch1'
         *  Switch: '<S577>/Switch2'
         *  Switch: '<S8>/Switch5'
         *  UnitDelay: '<S523>/Unit Delay'
         */
        GSMR_ac_DW.VeGSMI_e_DrvRqShftROT_CDPT = (TeGSMR_e_DrvRqShftROT)
            VeGSMI_e_Lv2Lv1VldtdTransRngSt;
    }
    else
    {
        if (VeGSMI_b_DrvRqShftROT_DPTValid)
        {
            /* Switch: '<S577>/Switch4' incorporates:
             *  Switch: '<S577>/Switch1'
             *  Switch: '<S577>/Switch2'
             *  Switch: '<S577>/Switch3'
             *  Switch: '<S8>/Switch2'
             *  UnitDelay: '<S523>/Unit Delay'
             */
            GSMR_ac_DW.VeGSMI_e_DrvRqShftROT_CDPT = VeGSMI_e_DrvRqShftROT_Scndry;
        }
    }

    /* End of Switch: '<S577>/Switch1' */

    /* Switch: '<S519>/Switch1' incorporates:
     *  Constant: '<S521>/Calib'
     */
    if (KeGSMR_b_ShftProxi)
    {
        /* Switch: '<S519>/Switch1' incorporates:
         *  Switch: '<S577>/Switch1'
         *  UnitDelay: '<S523>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeSCMR_e_Lv2D_c =
            GSMR_ac_DW.VeGSMI_e_DrvRqShftROT_CDPT;
    }
    else
    {
        /* Switch: '<S519>/Switch1' incorporates:
         *  Switch: '<S8>/Switch2'
         */
        rtb_TmpSignalConversionAtVeSCMR_e_Lv2D_c = VeGSMI_e_DrvRqShftROT_Scndry;
    }

    /* End of Switch: '<S519>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S525>/LV2_Timer_Retrigger_Reset_Enabled' */
    /* Switch: '<S603>/Switch2' incorporates:
     *  Constant: '<S601>/Calib'
     *  Logic: '<S525>/Logical1'
     *  RelationalOperator: '<S525>/Comparison1'
     *  Switch: '<S519>/Switch1'
     *  Switch: '<S603>/Switch1'
     *  UnitDelay: '<S525>/UnitDelay1'
     *  UnitDelay: '<S603>/UnitDelay'
     */
    if (rtb_TmpSignalConversionAtVeSCMR_e_Lv2D_c !=
            GSMR_ac_DW.VeGSMR_e_DrvRqShftROT_DPT_Prev)
    {
        GSMR_ac_DW.VeGSMR_t_DrvRqShftROT_DPT_Prev_prev = KeGSMR_t_CANReqDbnc;
    }
    else
    {
        /* UnitDelay: '<S603>/UnitDelay' incorporates:
         *  Constant: '<S602>/Calib'
         *  Constant: '<S603>/ConstantValue4'
         *  MinMax: '<S603>/Maximum'
         *  Sum: '<S603>/Subtraction'
         *  Switch: '<S603>/Switch2'
         */
        GSMR_ac_DW.VeGSMR_t_DrvRqShftROT_DPT_Prev_prev = fmaxf
            (GSMR_ac_DW.VeGSMR_t_DrvRqShftROT_DPT_Prev_prev - KeGSMR_t_GSMR_dT,
             0.0F);
    }

    /* End of Switch: '<S603>/Switch2' */
    /* End of Outputs for SubSystem: '<S525>/LV2_Timer_Retrigger_Reset_Enabled' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ProcGSMRInputs'
     */
    /* Switch: '<S527>/Switch1' incorporates:
     *  Constant: '<S529>/Calib'
     *  Logic: '<S299>/AND'
     *  Logic: '<S301>/AND'
     *  Logic: '<S516>/Logical14'
     *  Logic: '<S516>/Logical18'
     *  Logic: '<S516>/Logical2'
     *  Switch: '<S528>/Switch1'
     */
    if ((KeGSMR_b_DrvRqShftROTSelection) &&
            (!rtb_VeGSMC_b_ToParkVehicleSpdMetIntmnt))
    {
        /* Outputs for Atomic SubSystem: '<S524>/LV2_Timer_Retrigger_Reset_Enabled' */
        /* Switch: '<S595>/Switch1' incorporates:
         *  Constant: '<S598>/ConstantValue2'
         *  RelationalOperator: '<S598>/GreaterThan1'
         *  UnitDelay: '<S598>/UnitDelay'
         */
        if (GSMR_ac_DW.VeGSMR_t_DrvRqShftROT_CANC_Prev_prev > 0.0F)
        {
            /* Switch: '<S527>/Switch1' incorporates:
             *  Constant: '<S594>/Constant'
             */
            rtb_TmpSignalConversionAtVeSCMR_e_SC_S_k = CeGSMR_e_PRND_SNA;
        }

        /* End of Outputs for SubSystem: '<S524>/LV2_Timer_Retrigger_Reset_Enabled' */
    }
    else if (!rtb_VeGSMC_b_ToParkVehicleTOSRMetIntmnt)
    {
        /* Outputs for Atomic SubSystem: '<S525>/LV2_Timer_Retrigger_Reset_Enabled' */
        /* Switch: '<S600>/Switch1' incorporates:
         *  Constant: '<S603>/ConstantValue2'
         *  RelationalOperator: '<S603>/GreaterThan1'
         *  Switch: '<S528>/Switch1'
         *  UnitDelay: '<S603>/UnitDelay'
         */
        if (GSMR_ac_DW.VeGSMR_t_DrvRqShftROT_DPT_Prev_prev > 0.0F)
        {
            /* Switch: '<S527>/Switch1' incorporates:
             *  Constant: '<S599>/Constant'
             *  Switch: '<S528>/Switch1'
             */
            rtb_TmpSignalConversionAtVeSCMR_e_SC_S_k = CeGSMR_e_PRND_SNA;
        }
        else
        {
            /* Switch: '<S527>/Switch1' incorporates:
             *  RelationalOperator: '<S525>/Comparison1'
             *  Switch: '<S519>/Switch1'
             *  Switch: '<S528>/Switch1'
             */
            rtb_TmpSignalConversionAtVeSCMR_e_SC_S_k =
                rtb_TmpSignalConversionAtVeSCMR_e_Lv2D_c;
        }

        /* End of Switch: '<S600>/Switch1' */
        /* End of Outputs for SubSystem: '<S525>/LV2_Timer_Retrigger_Reset_Enabled' */
    }
    else
    {
        /* Switch: '<S527>/Switch1' incorporates:
         *  Constant: '<S526>/Constant'
         *  Switch: '<S528>/Switch1'
         */
        rtb_TmpSignalConversionAtVeSCMR_e_SC_S_k = CeGSMR_e_PRND_SNA;
    }

    /* RelationalOperator: '<S517>/Comparison1' incorporates:
     *  Constant: '<S534>/Constant'
     *  Switch: '<S527>/Switch1'
     */
    GSMR_ac_B.VeGSMR_b_Lv2DrvReq_SNA = (((uint32)
        rtb_TmpSignalConversionAtVeSCMR_e_SC_S_k) == CeGSMR_e_PRND_SNA);

    /* RelationalOperator: '<S517>/Comparison10' incorporates:
     *  Constant: '<S530>/Constant'
     *  RelationalOperator: '<S517>/Comparison1'
     *  Switch: '<S527>/Switch1'
     */
    GSMR_ac_B.VeGSMR_b_Lv2DrvReq_L_Obsrvd = (((uint32)
        rtb_TmpSignalConversionAtVeSCMR_e_SC_S_k) == CeGSMR_e_PRND_Fifth);

    /* RelationalOperator: '<S517>/Comparison3' incorporates:
     *  Constant: '<S531>/Constant'
     *  RelationalOperator: '<S517>/Comparison1'
     *  Switch: '<S527>/Switch1'
     */
    GSMR_ac_B.VeGSMR_b_Lv2DrvReq_R_Obsrvd = (((uint32)
        rtb_TmpSignalConversionAtVeSCMR_e_SC_S_k) == CeGSMR_e_PRND_Reverse);

    /* RelationalOperator: '<S517>/Comparison4' incorporates:
     *  Constant: '<S535>/Constant'
     *  RelationalOperator: '<S517>/Comparison1'
     *  Switch: '<S527>/Switch1'
     */
    GSMR_ac_B.VeGSMR_b_Lv2DrvReq_P_Obsrvd = (((uint32)
        rtb_TmpSignalConversionAtVeSCMR_e_SC_S_k) == CeGSMR_e_PRND_Park);

    /* RelationalOperator: '<S517>/Comparison6' incorporates:
     *  Constant: '<S532>/Constant'
     *  RelationalOperator: '<S517>/Comparison1'
     *  Switch: '<S527>/Switch1'
     */
    GSMR_ac_B.VeGSMR_b_Lv2DrvReq_N_Obsrvd = (((uint32)
        rtb_TmpSignalConversionAtVeSCMR_e_SC_S_k) == CeGSMR_e_PRND_Neutral);

    /* RelationalOperator: '<S517>/Comparison8' incorporates:
     *  Constant: '<S533>/Constant'
     *  RelationalOperator: '<S517>/Comparison1'
     *  Switch: '<S527>/Switch1'
     */
    GSMR_ac_B.VeGSMR_b_Lv2DrvReq_D_Obsrvd = (((uint32)
        rtb_TmpSignalConversionAtVeSCMR_e_SC_S_k) == CeGSMR_e_PRND_Drive);

    /* End of Outputs for SubSystem: '<S10>/ProcessPRNDRequest' */

    /* Update for Atomic SubSystem: '<S10>/ProcessPRNDRequest' */
    /* Update for UnitDelay: '<S562>/UnitDelay' */
    GSMR_ac_DW.VeGSMR_b_Lv1RevRequest_prev = rtb_VeGSMI_b_Lv1InReverse;

    /* Update for UnitDelay: '<S563>/UnitDelay' */
    GSMR_ac_DW.VeGSMR_b_Lv1DrvRequest_prev = rtb_VeGSMI_b_Lv1InDrive;

    /* Update for UnitDelay: '<S524>/UnitDelay2' incorporates:
     *  Switch: '<S518>/Switch1'
     */
    GSMR_ac_DW.VeGSMR_e_DrvRqShftROT_CANC_Prev =
        rtb_TmpSignalConversionAtVeSCMR_e_SC_Shi;

    /* Update for UnitDelay: '<S590>/UnitDelay' */
    GSMR_ac_DW.VeGSMR_b_Lv1RevRequest_ePT_prev = rtb_VeGSMI_b_Lv1InReverse_ePT;

    /* Update for UnitDelay: '<S591>/UnitDelay' */
    GSMR_ac_DW.VeGSMR_b_Lv1RejectR_ePT_prev =
        rtb_TmpSignalConversionAtVeTRGR_b_Reje_b;

    /* Update for UnitDelay: '<S592>/UnitDelay' */
    GSMR_ac_DW.VeGSMR_b_Lv1DrvRequest_ePT_prev = rtb_VeGSMI_b_Lv1InDrive_ePT;

    /* Update for UnitDelay: '<S593>/UnitDelay' */
    GSMR_ac_DW.VeGSMR_b_Lv1RejectD_ePT_prev =
        rtb_TmpSignalConversionAtVeTRGR_b_Reject;

    /* Update for UnitDelay: '<S525>/UnitDelay1' incorporates:
     *  Switch: '<S519>/Switch1'
     */
    GSMR_ac_DW.VeGSMR_e_DrvRqShftROT_DPT_Prev =
        rtb_TmpSignalConversionAtVeSCMR_e_Lv2D_c;

    /* End of Update for SubSystem: '<S10>/ProcessPRNDRequest' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ProcInputsForMonitor'
     */
    /* Outputs for Atomic SubSystem: '<S9>/ProcForPPawlMntr' */
    /* Outputs for Atomic SubSystem: '<S397>/Dtmn_OTP_OTN' */
    /* Logic: '<S400>/Logical2' incorporates:
     *  Logic: '<S405>/Logical23'
     *  Logic: '<S405>/Logical27'
     *  Switch: '<S405>/Switch2'
     */
    VeGSMC_b_BrakeSigValid = !VeGSMI_b_BrkPdlStatFA;

    /* End of Outputs for SubSystem: '<S397>/Dtmn_OTP_OTN' */

    /* Switch: '<S400>/Switch1' */
    VeGSMC_b_BrkAppld_NLock = ((!VeGSMC_b_BrakeSigValid) || (VeGSMI_b_BrkApplied));

    /* Outputs for Atomic SubSystem: '<S400>/LV2_Turn_On_Delay_Time1' */
    /* Outputs for Atomic SubSystem: '<S400>/LV2_Turn_On_Delay_Time' */
    /* Logic: '<S510>/OR1' incorporates:
     *  Logic: '<S511>/OR1'
     */
    rtb_VeGSMC_b_ToParkVehicleTOSRMetIntmnt = !VeGSMC_b_BrkAppld_NLock;

    /* End of Outputs for SubSystem: '<S400>/LV2_Turn_On_Delay_Time1' */

    /* Switch: '<S510>/Switch1' incorporates:
     *  Constant: '<S506>/Calib'
     *  Constant: '<S508>/Calib'
     *  Constant: '<S510>/ConstantValue1'
     *  Logic: '<S510>/OR'
     *  Logic: '<S510>/OR1'
     *  Logic: '<S513>/AND1'
     *  Logic: '<S513>/OR2'
     *  MinMax: '<S510>/Minimum'
     *  Sum: '<S510>/Summation'
     *  UnitDelay: '<S510>/UnitDelay1'
     *  UnitDelay: '<S513>/UnitDelay'
     */
    if (rtb_VeGSMC_b_ToParkVehicleTOSRMetIntmnt || ((VeGSMC_b_BrkAppld_NLock) &&
         (!GSMR_ac_DW.VeGSMR_b_BrkAppld_NLockRstPrevDelay_prev)))
    {
        GSMR_ac_DW.VeGSMR_t_BrkAppld_NLockRstPrevDelay_prev = 0.0F;
    }
    else
    {
        GSMR_ac_DW.VeGSMR_t_BrkAppld_NLockRstPrevDelay_prev = fminf
            (KeGSMR_t_BrkAppDly_NLck, KeGSMR_t_GSMR_dT +
             GSMR_ac_DW.VeGSMR_t_BrkAppld_NLockRstPrevDelay_prev);
    }

    /* End of Switch: '<S510>/Switch1' */

    /* Update for UnitDelay: '<S513>/UnitDelay' */
    GSMR_ac_DW.VeGSMR_b_BrkAppld_NLockRstPrevDelay_prev =
        VeGSMC_b_BrkAppld_NLock;

    /* End of Outputs for SubSystem: '<S400>/LV2_Turn_On_Delay_Time' */

    /* Outputs for Atomic SubSystem: '<S400>/LV2_Turn_On_Delay_Time1' */
    /* Switch: '<S511>/Switch1' incorporates:
     *  Constant: '<S507>/Calib'
     *  Constant: '<S508>/Calib'
     *  Constant: '<S511>/ConstantValue1'
     *  Logic: '<S511>/OR'
     *  Logic: '<S514>/AND1'
     *  Logic: '<S514>/OR2'
     *  MinMax: '<S511>/Minimum'
     *  Sum: '<S511>/Summation'
     *  UnitDelay: '<S511>/UnitDelay1'
     *  UnitDelay: '<S514>/UnitDelay'
     */
    if (rtb_VeGSMC_b_ToParkVehicleTOSRMetIntmnt || ((VeGSMC_b_BrkAppld_NLock) &&
         (!GSMR_ac_DW.VeGSMR_b_BrkAppld_NLockRstDrvReq_prev)))
    {
        GSMR_ac_DW.VeGSMR_t_BrkAppld_NLockRstDrvReq_prev = 0.0F;
    }
    else
    {
        GSMR_ac_DW.VeGSMR_t_BrkAppld_NLockRstDrvReq_prev = fminf
            (KeGSMR_t_BrkAppDly_NLckDrvReq, KeGSMR_t_GSMR_dT +
             GSMR_ac_DW.VeGSMR_t_BrkAppld_NLockRstDrvReq_prev);
    }

    /* End of Switch: '<S511>/Switch1' */

    /* Update for UnitDelay: '<S514>/UnitDelay' */
    GSMR_ac_DW.VeGSMR_b_BrkAppld_NLockRstDrvReq_prev = VeGSMC_b_BrkAppld_NLock;

    /* End of Outputs for SubSystem: '<S400>/LV2_Turn_On_Delay_Time1' */

    /* Outputs for Atomic SubSystem: '<S397>/Dtmn_OTP_OTN' */
    /* Outputs for Atomic SubSystem: '<S398>/DtmnVehSpd_OTP_OTN' */
    /* Switch: '<S417>/LV2_Abs_switch' incorporates:
     *  Constant: '<S417>/ConstantValue1'
     *  RelationalOperator: '<S417>/Comparison'
     */
    if (GSMR_ac_B.Gain < 0.0F)
    {
        /* Switch: '<S406>/Switch2' incorporates:
         *  Product: '<S417>/Product'
         */
        rtb_TmpSignalConversionAtVeSCMR_Pct_Brak = -GSMR_ac_B.Gain;
    }
    else
    {
        /* Switch: '<S406>/Switch2' */
        rtb_TmpSignalConversionAtVeSCMR_Pct_Brak = GSMR_ac_B.Gain;
    }

    /* End of Switch: '<S417>/LV2_Abs_switch' */

    /* RelationalOperator: '<S401>/Comparison1' incorporates:
     *  Constant: '<S413>/Calib'
     */
    VeGSMC_b_PlgInSpeedCondMet = (rtb_TmpSignalConversionAtVeSCMR_Pct_Brak <=
        KeGSMR_v_PlgInThrshMPH);

    /* RelationalOperator: '<S401>/Comparison2' incorporates:
     *  Constant: '<S414>/Calib'
     */
    VeGSMC_b_RmtStartSpdCondMetintmnt =
        (rtb_TmpSignalConversionAtVeSCMR_Pct_Brak <= KeGSMR_v_RmtStrtVerfSpd);

    /* RelationalOperator: '<S401>/Comparison3' incorporates:
     *  Constant: '<S411>/Calib'
     */
    VeGSMC_b_Ovrd2NeutVehSpd_Lo = (rtb_TmpSignalConversionAtVeSCMR_Pct_Brak <=
        KeGSMR_v_Ovrd2NeutVehSpd);

    /* RelationalOperator: '<S401>/Comparison4' incorporates:
     *  Constant: '<S412>/Calib'
     */
    VeGSMC_b_Ovrd2NeutVehSpd_Hi = (rtb_TmpSignalConversionAtVeSCMR_Pct_Brak >=
        KeGSMR_v_Ovrd2NeutVehSpd_Lo);

    /* RelationalOperator: '<S401>/Comparison5' incorporates:
     *  Constant: '<S415>/Calib'
     */
    VeGSMC_b_OTN_DRLReqHiSpd = (rtb_TmpSignalConversionAtVeSCMR_Pct_Brak >=
        KeGSMR_v_ToN_VehSpd);

    /* Switch: '<S418>/LV2_Abs_switch' incorporates:
     *  Constant: '<S418>/ConstantValue1'
     *  Product: '<S418>/Product'
     *  RelationalOperator: '<S418>/Comparison'
     */
    if (GSMR_ac_B.Switch1 < 0.0F)
    {
        rtb_VeGSMI_Pct_BrkTravelDiffAbs_Abs = -GSMR_ac_B.Switch1;
    }
    else
    {
        rtb_VeGSMI_Pct_BrkTravelDiffAbs_Abs = GSMR_ac_B.Switch1;
    }

    /* End of Switch: '<S418>/LV2_Abs_switch' */

    /* RelationalOperator: '<S401>/Comparison6' incorporates:
     *  Constant: '<S410>/Calib'
     */
    rtb_VeGSMC_b_ToParkVehicleTOSRMetIntmnt =
        (rtb_VeGSMI_Pct_BrkTravelDiffAbs_Abs <= KeGSMR_n_ToParkVehSpdThresh);

    /* RelationalOperator: '<S401>/Comparison8' incorporates:
     *  Constant: '<S416>/Calib'
     */
    rtb_VeGSMC_b_ToParkVehicleSpdMetIntmnt =
        (rtb_TmpSignalConversionAtVeSCMR_Pct_Brak <= KeGSMR_v_ToParkVehSpdThresh);

    /* Outputs for Atomic SubSystem: '<S401>/LV2_Turn_On_Delay_Sample' */
    /* Switch: '<S419>/LV2Switch' incorporates:
     *  Constant: '<S408>/Calib'
     *  Constant: '<S419>/ConstantValue'
     *  Constant: '<S419>/ConstantValue1'
     *  Logic: '<S419>/OR'
     *  Logic: '<S419>/OR1'
     *  Logic: '<S423>/AND1'
     *  Logic: '<S423>/OR2'
     *  MinMax: '<S419>/Minimum'
     *  Sum: '<S419>/Summation'
     *  UnitDelay: '<S419>/UnitDelay1'
     *  UnitDelay: '<S423>/UnitDelay'
     */
    if ((!rtb_VeGSMC_b_ToParkVehicleSpdMetIntmnt) ||
            (rtb_VeGSMC_b_ToParkVehicleSpdMetIntmnt &&
             (!GSMR_ac_DW.VeGSMC_b_ToParkVehSpdMet_LV2_prev)))
    {
        GSMR_ac_DW.VeGSMC_Cnt_ToParkVehSpdMet_LV2_prev = 0U;
    }
    else if (KeGSMR_Cnt_VehSpdPNOvrdCntr < ((uint16)(((uint32)
                GSMR_ac_DW.VeGSMC_Cnt_ToParkVehSpdMet_LV2_prev) + 1U)))
    {
        /* MinMax: '<S419>/Minimum' incorporates:
         *  Constant: '<S408>/Calib'
         */
        GSMR_ac_DW.VeGSMC_Cnt_ToParkVehSpdMet_LV2_prev =
            KeGSMR_Cnt_VehSpdPNOvrdCntr;
    }
    else
    {
        /* MinMax: '<S419>/Minimum' incorporates:
         *  Constant: '<S419>/ConstantValue'
         *  Sum: '<S419>/Summation'
         *  UnitDelay: '<S419>/UnitDelay1'
         */
        GSMR_ac_DW.VeGSMC_Cnt_ToParkVehSpdMet_LV2_prev = (uint16)(((uint32)
            GSMR_ac_DW.VeGSMC_Cnt_ToParkVehSpdMet_LV2_prev) + 1U);
    }

    /* End of Switch: '<S419>/LV2Switch' */

    /* Update for UnitDelay: '<S423>/UnitDelay' */
    GSMR_ac_DW.VeGSMC_b_ToParkVehSpdMet_LV2_prev =
        rtb_VeGSMC_b_ToParkVehicleSpdMetIntmnt;

    /* End of Outputs for SubSystem: '<S401>/LV2_Turn_On_Delay_Sample' */

    /* Outputs for Atomic SubSystem: '<S401>/LV2_Turn_On_Delay_Sample1' */
    /* Switch: '<S420>/LV2Switch' incorporates:
     *  Constant: '<S408>/Calib'
     *  Constant: '<S420>/ConstantValue'
     *  Constant: '<S420>/ConstantValue1'
     *  Logic: '<S420>/OR'
     *  Logic: '<S420>/OR1'
     *  Logic: '<S424>/AND1'
     *  Logic: '<S424>/OR2'
     *  MinMax: '<S420>/Minimum'
     *  Sum: '<S420>/Summation'
     *  UnitDelay: '<S420>/UnitDelay1'
     *  UnitDelay: '<S424>/UnitDelay'
     */
    if ((!rtb_VeGSMC_b_ToParkVehicleTOSRMetIntmnt) ||
            (rtb_VeGSMC_b_ToParkVehicleTOSRMetIntmnt &&
             (!GSMR_ac_DW.VeGSMC_b_ToParkTOSRSpdMet_prev)))
    {
        GSMR_ac_DW.VeGSMC_Cnt_ToParkTOSRSpdMet_prev = 0U;
    }
    else if (KeGSMR_Cnt_VehSpdPNOvrdCntr < ((uint16)(((uint32)
                GSMR_ac_DW.VeGSMC_Cnt_ToParkTOSRSpdMet_prev) + 1U)))
    {
        /* MinMax: '<S420>/Minimum' incorporates:
         *  Constant: '<S408>/Calib'
         */
        GSMR_ac_DW.VeGSMC_Cnt_ToParkTOSRSpdMet_prev =
            KeGSMR_Cnt_VehSpdPNOvrdCntr;
    }
    else
    {
        /* MinMax: '<S420>/Minimum' incorporates:
         *  Constant: '<S420>/ConstantValue'
         *  Sum: '<S420>/Summation'
         *  UnitDelay: '<S420>/UnitDelay1'
         */
        GSMR_ac_DW.VeGSMC_Cnt_ToParkTOSRSpdMet_prev = (uint16)(((uint32)
            GSMR_ac_DW.VeGSMC_Cnt_ToParkTOSRSpdMet_prev) + 1U);
    }

    /* End of Switch: '<S420>/LV2Switch' */

    /* Update for UnitDelay: '<S424>/UnitDelay' */
    GSMR_ac_DW.VeGSMC_b_ToParkTOSRSpdMet_prev =
        rtb_VeGSMC_b_ToParkVehicleTOSRMetIntmnt;

    /* End of Outputs for SubSystem: '<S401>/LV2_Turn_On_Delay_Sample1' */

    /* Outputs for Atomic SubSystem: '<S401>/LV2_Turn_On_Delay_Sample2' */
    /* Switch: '<S421>/LV2Switch' incorporates:
     *  Constant: '<S408>/Calib'
     *  Constant: '<S421>/ConstantValue'
     *  Constant: '<S421>/ConstantValue1'
     *  Logic: '<S421>/OR'
     *  Logic: '<S421>/OR1'
     *  Logic: '<S425>/AND1'
     *  Logic: '<S425>/OR2'
     *  MinMax: '<S421>/Minimum'
     *  Sum: '<S421>/Summation'
     *  UnitDelay: '<S421>/UnitDelay1'
     *  UnitDelay: '<S425>/UnitDelay'
     */
    if ((!VeGSMC_b_RmtStartSpdCondMetintmnt) ||
            ((VeGSMC_b_RmtStartSpdCondMetintmnt) &&
             (!GSMR_ac_DW.VeGSMC_b_RmtStrtSpdCondMet_LV2_prev)))
    {
        GSMR_ac_DW.VeGSMC_Cnt_RmtStrtSpdCondMet_LV2_prev = 0U;
    }
    else if (KeGSMR_Cnt_VehSpdPNOvrdCntr < ((uint16)(((uint32)
                GSMR_ac_DW.VeGSMC_Cnt_RmtStrtSpdCondMet_LV2_prev) + 1U)))
    {
        /* MinMax: '<S421>/Minimum' incorporates:
         *  Constant: '<S408>/Calib'
         */
        GSMR_ac_DW.VeGSMC_Cnt_RmtStrtSpdCondMet_LV2_prev =
            KeGSMR_Cnt_VehSpdPNOvrdCntr;
    }
    else
    {
        /* MinMax: '<S421>/Minimum' incorporates:
         *  Constant: '<S421>/ConstantValue'
         *  Sum: '<S421>/Summation'
         *  UnitDelay: '<S421>/UnitDelay1'
         */
        GSMR_ac_DW.VeGSMC_Cnt_RmtStrtSpdCondMet_LV2_prev = (uint16)(((uint32)
            GSMR_ac_DW.VeGSMC_Cnt_RmtStrtSpdCondMet_LV2_prev) + 1U);
    }

    /* End of Switch: '<S421>/LV2Switch' */

    /* Logic: '<S421>/AND' incorporates:
     *  Constant: '<S408>/Calib'
     *  RelationalOperator: '<S421>/GreaterThan'
     *  UnitDelay: '<S421>/UnitDelay1'
     */
    VeGSMC_b_RmtStartSpdCondMet = ((VeGSMC_b_RmtStartSpdCondMetintmnt) &&
        (GSMR_ac_DW.VeGSMC_Cnt_RmtStrtSpdCondMet_LV2_prev >=
         KeGSMR_Cnt_VehSpdPNOvrdCntr));

    /* Update for UnitDelay: '<S425>/UnitDelay' */
    GSMR_ac_DW.VeGSMC_b_RmtStrtSpdCondMet_LV2_prev =
        VeGSMC_b_RmtStartSpdCondMetintmnt;

    /* End of Outputs for SubSystem: '<S401>/LV2_Turn_On_Delay_Sample2' */

    /* Logic: '<S401>/Logical5' */
    VeGSMC_b_Ovrd2NeutVehSpdB4Dbnc = ((VeGSMC_b_Ovrd2NeutVehSpd_Lo) &&
        (VeGSMC_b_Ovrd2NeutVehSpd_Hi));

    /* Outputs for Atomic SubSystem: '<S401>/LV2_Turn_On_Delay_Sample3' */
    /* Switch: '<S422>/LV2Switch' incorporates:
     *  Constant: '<S408>/Calib'
     *  Constant: '<S422>/ConstantValue'
     *  Constant: '<S422>/ConstantValue1'
     *  Logic: '<S422>/OR'
     *  Logic: '<S422>/OR1'
     *  Logic: '<S426>/AND1'
     *  Logic: '<S426>/OR2'
     *  MinMax: '<S422>/Minimum'
     *  Sum: '<S422>/Summation'
     *  UnitDelay: '<S422>/UnitDelay1'
     *  UnitDelay: '<S426>/UnitDelay'
     */
    if ((!VeGSMC_b_Ovrd2NeutVehSpdB4Dbnc) || ((VeGSMC_b_Ovrd2NeutVehSpdB4Dbnc) &&
         (!GSMR_ac_DW.VeGSMC_b_Ovrd2NeutVehSpd_LV2_prev)))
    {
        GSMR_ac_DW.VeGSMC_Cnt_Ovrd2NeutVehSpd_LV2_prev = 0U;
    }
    else if (KeGSMR_Cnt_VehSpdPNOvrdCntr < ((uint16)(((uint32)
                GSMR_ac_DW.VeGSMC_Cnt_Ovrd2NeutVehSpd_LV2_prev) + 1U)))
    {
        /* MinMax: '<S422>/Minimum' incorporates:
         *  Constant: '<S408>/Calib'
         */
        GSMR_ac_DW.VeGSMC_Cnt_Ovrd2NeutVehSpd_LV2_prev =
            KeGSMR_Cnt_VehSpdPNOvrdCntr;
    }
    else
    {
        /* MinMax: '<S422>/Minimum' incorporates:
         *  Constant: '<S422>/ConstantValue'
         *  Sum: '<S422>/Summation'
         *  UnitDelay: '<S422>/UnitDelay1'
         */
        GSMR_ac_DW.VeGSMC_Cnt_Ovrd2NeutVehSpd_LV2_prev = (uint16)(((uint32)
            GSMR_ac_DW.VeGSMC_Cnt_Ovrd2NeutVehSpd_LV2_prev) + 1U);
    }

    /* End of Switch: '<S422>/LV2Switch' */
    /* End of Outputs for SubSystem: '<S401>/LV2_Turn_On_Delay_Sample3' */
    /* End of Outputs for SubSystem: '<S398>/DtmnVehSpd_OTP_OTN' */
    /* End of Outputs for SubSystem: '<S397>/Dtmn_OTP_OTN' */
    /* End of Outputs for SubSystem: '<S9>/ProcForPPawlMntr' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/GSMR_FUNC_MedTEB' */

    /* Inport: '<Root>/VeSCMR_U_Lv2LV_BatVlt' */
    (void)Rte_Read_VeSCMR_U_Lv2LV_BatVlt_Value(&rtb_VeGSMR_U_LV_VoltDiff_Arb);

    /* Outputs for Function Call SubSystem: '<Root>/GSMR_FUNC_MedTEB' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ProcInputsForMonitor'
     */
    /* Outputs for Atomic SubSystem: '<S9>/ProcForPPawlMntr' */
    /* Outputs for Atomic SubSystem: '<S397>/Dtmn_OTP_OTN' */
    /* Outputs for Atomic SubSystem: '<S398>/DtmnVehSpd_OTP_OTN' */
    /* Outputs for Atomic SubSystem: '<S401>/LV2_Turn_On_Delay_Sample3' */
    /* Logic: '<S422>/AND' incorporates:
     *  Constant: '<S408>/Calib'
     *  RelationalOperator: '<S422>/GreaterThan'
     *  UnitDelay: '<S422>/UnitDelay1'
     */
    VeGSMC_b_Ovrd2NeutVehSpd = ((VeGSMC_b_Ovrd2NeutVehSpdB4Dbnc) &&
        (GSMR_ac_DW.VeGSMC_Cnt_Ovrd2NeutVehSpd_LV2_prev >=
         KeGSMR_Cnt_VehSpdPNOvrdCntr));

    /* Update for UnitDelay: '<S426>/UnitDelay' */
    GSMR_ac_DW.VeGSMC_b_Ovrd2NeutVehSpd_LV2_prev =
        VeGSMC_b_Ovrd2NeutVehSpdB4Dbnc;

    /* End of Outputs for SubSystem: '<S401>/LV2_Turn_On_Delay_Sample3' */

    /* Switch: '<S401>/Switch2' incorporates:
     *  Constant: '<S408>/Calib'
     *  Constant: '<S409>/Calib'
     *  Logic: '<S419>/AND'
     *  Logic: '<S420>/AND'
     *  RelationalOperator: '<S419>/GreaterThan'
     *  RelationalOperator: '<S420>/GreaterThan'
     *  UnitDelay: '<S419>/UnitDelay1'
     *  UnitDelay: '<S420>/UnitDelay1'
     */
    if (KeGSMR_b_ToParkTOSRSpdMet)
    {
        /* Outputs for Atomic SubSystem: '<S401>/LV2_Turn_On_Delay_Sample1' */
        VeGSMC_b_ToParkVehicleSpdMet = (rtb_VeGSMC_b_ToParkVehicleTOSRMetIntmnt &&
            (GSMR_ac_DW.VeGSMC_Cnt_ToParkTOSRSpdMet_prev >=
             KeGSMR_Cnt_VehSpdPNOvrdCntr));

        /* End of Outputs for SubSystem: '<S401>/LV2_Turn_On_Delay_Sample1' */
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S401>/LV2_Turn_On_Delay_Sample' */
        VeGSMC_b_ToParkVehicleSpdMet = (rtb_VeGSMC_b_ToParkVehicleSpdMetIntmnt &&
            (GSMR_ac_DW.VeGSMC_Cnt_ToParkVehSpdMet_LV2_prev >=
             KeGSMR_Cnt_VehSpdPNOvrdCntr));

        /* End of Outputs for SubSystem: '<S401>/LV2_Turn_On_Delay_Sample' */
    }

    /* End of Switch: '<S401>/Switch2' */
    /* End of Outputs for SubSystem: '<S398>/DtmnVehSpd_OTP_OTN' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ProcGSMRInputs'
     */
    /* Switch: '<S402>/Switch1' incorporates:
     *  Logic: '<S303>/AND'
     */
    if (rtb_VeGSMR_b_OTN_NLckTrgr)
    {
        /* Switch: '<S402>/Switch1' incorporates:
         *  Constant: '<S427>/Constant'
         */
        rtb_VeGSMC_e_KeyStsArb = CeLTIR_e_IGN_SNA;
    }
    else
    {
        /* Switch: '<S402>/Switch1' incorporates:
         *  SignalConversion generated from: '<S1>/VeLTIR_e_Lv2KeySts'
         */
        rtb_VeGSMC_e_KeyStsArb =
            GSMR_ac_B.TmpSignalConversionAtVeLTIR_e_Lv2KeyStsO;
    }

    /* End of Switch: '<S402>/Switch1' */

    /* RelationalOperator: '<S402>/Comparison16' incorporates:
     *  Constant: '<S428>/Constant'
     */
    VeGSMC_b_KeyInCrnkPos = (((uint32)rtb_VeGSMC_e_KeyStsArb) ==
        CeLTIR_e_IGN_START);

    /* Logic: '<S436>/NOT' incorporates:
     *  Constant: '<S431>/Constant'
     *  Logic: '<S405>/Logical7'
     *  Logic: '<S460>/NOT'
     *  RelationalOperator: '<S402>/Comparison5'
     */
    VeGSMC_b_NoKeyOff = (((uint32)rtb_VeGSMC_e_KeyStsArb) != CeLTIR_e_IGN_INIT);

    /* Logic: '<S436>/OR1' incorporates:
     *  Constant: '<S429>/Constant'
     *  Constant: '<S430>/Constant'
     *  Logic: '<S402>/Logical24'
     *  Logic: '<S436>/NOT'
     *  Logic: '<S436>/OR'
     *  RelationalOperator: '<S402>/Comparison2'
     *  RelationalOperator: '<S402>/Comparison3'
     */
    VeGSMC_b_KyCrnkd = (((((uint32)GSMR_ac_DW.VeGSMC_e_KeyStsArbPrev) ==
                          CeLTIR_e_IGN_START) && (((uint32)
                           rtb_VeGSMC_e_KeyStsArb) == CeLTIR_e_IGN_RUN)) ||
                        ((VeGSMC_b_NoKeyOff) && (VeGSMC_b_KyCrnkd)));

    /* Logic: '<S437>/OR1' incorporates:
     *  Constant: '<S432>/Constant'
     *  Constant: '<S433>/Constant'
     *  Constant: '<S434>/Constant'
     *  Logic: '<S402>/Logical25'
     *  Logic: '<S437>/NOT'
     *  Logic: '<S437>/OR'
     *  RelationalOperator: '<S402>/Comparison6'
     *  RelationalOperator: '<S402>/Comparison7'
     *  RelationalOperator: '<S402>/Comparison8'
     *  UnitDelay: '<S437>/UnitDelay1'
     */
    GSMR_ac_DW.VeGSMR_b_Keyoff_Ltch_prev = (((((uint32)rtb_VeGSMC_e_KeyStsArb) ==
        CeLTIR_e_IGN_INIT) && (((uint32)GSMR_ac_DW.VeGSMC_e_KeyStsArbPrev) !=
        CeLTIR_e_IGN_INIT)) || ((((uint32)rtb_VeGSMC_e_KeyStsArb) ==
        CeLTIR_e_IGN_INIT) && (GSMR_ac_DW.VeGSMR_b_Keyoff_Ltch_prev)));

    /* Switch: '<S402>/Switch2' incorporates:
     *  Constant: '<S435>/Calib'
     */
    VeGSMC_b_KeyInCrnk = ((!KeGSMR_b_Lv2IgnoreCrnk) && (VeGSMC_b_KeyInCrnkPos));

    /* Logic: '<S402>/Logical4' */
    VeGSMC_b_PSATrgr = ((VeGSMC_b_KeyInCrnk) || (VeGSMC_b_KyCrnkd));

    /* Switch: '<S402>/Switch' */
    VeGSMC_b_KeyCrankCnfrmd = VeGSMC_b_PSATrgr;

    /* Sum: '<S403>/Sum1' */
    rtb_VeGSMR_U_LV_VoltDiff_Arb = rtb_TmpSignalConversionAtVeHWIO_U_Lv2LVB -
        rtb_VeGSMR_U_LV_VoltDiff_Arb;

    /* Switch: '<S444>/LV2_Abs_switch' incorporates:
     *  Constant: '<S444>/ConstantValue1'
     *  Product: '<S444>/Product'
     *  RelationalOperator: '<S444>/Comparison'
     */
    if (rtb_VeGSMR_U_LV_VoltDiff_Arb < 0.0F)
    {
        rtb_VeGSMR_U_LV_VoltDiff_Arb = -rtb_VeGSMR_U_LV_VoltDiff_Arb;
    }

    /* End of Switch: '<S444>/LV2_Abs_switch' */

    /* RelationalOperator: '<S403>/Comparison10' incorporates:
     *  Constant: '<S443>/Calib'
     */
    VeGSMC_b_LVVoltDiffHigh = (rtb_VeGSMR_U_LV_VoltDiff_Arb >= KeGSMR_U_VoltDiff);

    /* Outputs for Atomic SubSystem: '<S403>/LV2_Turn_On_Delay_Sample2' */
    /* Switch: '<S447>/LV2Switch' incorporates:
     *  Constant: '<S439>/Calib'
     *  Constant: '<S447>/ConstantValue'
     *  Constant: '<S447>/ConstantValue1'
     *  Logic: '<S447>/OR'
     *  Logic: '<S447>/OR1'
     *  Logic: '<S450>/AND1'
     *  Logic: '<S450>/OR2'
     *  MinMax: '<S447>/Minimum'
     *  Sum: '<S447>/Summation'
     *  UnitDelay: '<S447>/UnitDelay1'
     *  UnitDelay: '<S450>/UnitDelay'
     */
    if ((!VeGSMC_b_LVVoltDiffHigh) || ((VeGSMC_b_LVVoltDiffHigh) &&
            (!GSMR_ac_DW.VeGSMC_b_LVVoltDiffHigh_LV2_prev)))
    {
        GSMR_ac_DW.VeGSMC_Cnt_LVVoltDiffHigh_LV2_prev = 0U;
    }
    else if (KeGSMR_Cnt_LVVoltRationalizeCntr < ((uint16)(((uint32)
                GSMR_ac_DW.VeGSMC_Cnt_LVVoltDiffHigh_LV2_prev) + 1U)))
    {
        /* MinMax: '<S447>/Minimum' incorporates:
         *  Constant: '<S439>/Calib'
         */
        GSMR_ac_DW.VeGSMC_Cnt_LVVoltDiffHigh_LV2_prev =
            KeGSMR_Cnt_LVVoltRationalizeCntr;
    }
    else
    {
        /* MinMax: '<S447>/Minimum' incorporates:
         *  Constant: '<S447>/ConstantValue'
         *  Sum: '<S447>/Summation'
         *  UnitDelay: '<S447>/UnitDelay1'
         */
        GSMR_ac_DW.VeGSMC_Cnt_LVVoltDiffHigh_LV2_prev = (uint16)(((uint32)
            GSMR_ac_DW.VeGSMC_Cnt_LVVoltDiffHigh_LV2_prev) + 1U);
    }

    /* End of Switch: '<S447>/LV2Switch' */

    /* Logic: '<S447>/AND' incorporates:
     *  Constant: '<S439>/Calib'
     *  RelationalOperator: '<S447>/GreaterThan'
     *  UnitDelay: '<S447>/UnitDelay1'
     */
    VeGSMC_b_LVRationalityFld = ((VeGSMC_b_LVVoltDiffHigh) &&
        (GSMR_ac_DW.VeGSMC_Cnt_LVVoltDiffHigh_LV2_prev >=
         KeGSMR_Cnt_LVVoltRationalizeCntr));

    /* Update for UnitDelay: '<S450>/UnitDelay' */
    GSMR_ac_DW.VeGSMC_b_LVVoltDiffHigh_LV2_prev = VeGSMC_b_LVVoltDiffHigh;

    /* End of Outputs for SubSystem: '<S403>/LV2_Turn_On_Delay_Sample2' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ProcGSMRInputs'
     */
    /* Switch: '<S403>/Switch1' incorporates:
     *  Logic: '<S300>/AND'
     *  Logic: '<S403>/Logical1'
     */
    if ((VeGSMC_b_LVRationalityFld) || rtb_VeGSMR_b_VehPluggedInDelay)
    {
        /* Switch: '<S406>/Switch2' incorporates:
         *  Constant: '<S440>/Calib'
         */
        rtb_TmpSignalConversionAtVeSCMR_Pct_Brak = KeGSMR_U_LVVolt;
    }
    else
    {
        /* Switch: '<S406>/Switch2' */
        rtb_TmpSignalConversionAtVeSCMR_Pct_Brak =
            rtb_TmpSignalConversionAtVeHWIO_U_Lv2LVB;
    }

    /* End of Switch: '<S403>/Switch1' */

    /* RelationalOperator: '<S403>/Comparison11' incorporates:
     *  Constant: '<S442>/Calib'
     */
    rtb_VeGSMI_b_Lv1InReverse = (rtb_TmpSignalConversionAtVeSCMR_Pct_Brak <=
        KeGSMR_U_OvrdToPThsh_LV);

    /* RelationalOperator: '<S403>/Comparison12' incorporates:
     *  Constant: '<S441>/Calib'
     */
    rtb_VeGSMC_b_ToParkVehicleSpdMetIntmnt =
        (rtb_TmpSignalConversionAtVeSCMR_Pct_Brak <= KeGSMR_U_OvrdToNThsh_LV);

    /* Outputs for Atomic SubSystem: '<S403>/LV2_Turn_On_Delay_Sample' */
    /* Switch: '<S445>/LV2Switch' incorporates:
     *  Constant: '<S438>/Calib'
     *  Constant: '<S445>/ConstantValue'
     *  Constant: '<S445>/ConstantValue1'
     *  Logic: '<S445>/OR'
     *  Logic: '<S445>/OR1'
     *  Logic: '<S448>/AND1'
     *  Logic: '<S448>/OR2'
     *  MinMax: '<S445>/Minimum'
     *  Sum: '<S445>/Summation'
     *  UnitDelay: '<S445>/UnitDelay1'
     *  UnitDelay: '<S448>/UnitDelay'
     */
    if ((!rtb_VeGSMI_b_Lv1InReverse) || (rtb_VeGSMI_b_Lv1InReverse &&
            (!GSMR_ac_DW.VeGSMR_b_Ovrd2PrkLVVoltThshActv_LV2_prev)))
    {
        GSMR_ac_DW.VeGSMR_Cnt_Ovrd2PrkLVVoltThshActv_LV2_pr = 0U;
    }
    else if (KeGSMR_Cnt_LVVoltPNOvrdCntr < ((uint16)(((uint32)
                GSMR_ac_DW.VeGSMR_Cnt_Ovrd2PrkLVVoltThshActv_LV2_pr) + 1U)))
    {
        /* MinMax: '<S445>/Minimum' incorporates:
         *  Constant: '<S438>/Calib'
         */
        GSMR_ac_DW.VeGSMR_Cnt_Ovrd2PrkLVVoltThshActv_LV2_pr =
            KeGSMR_Cnt_LVVoltPNOvrdCntr;
    }
    else
    {
        /* MinMax: '<S445>/Minimum' incorporates:
         *  Constant: '<S445>/ConstantValue'
         *  Sum: '<S445>/Summation'
         *  UnitDelay: '<S445>/UnitDelay1'
         */
        GSMR_ac_DW.VeGSMR_Cnt_Ovrd2PrkLVVoltThshActv_LV2_pr = (uint16)(((uint32)
            GSMR_ac_DW.VeGSMR_Cnt_Ovrd2PrkLVVoltThshActv_LV2_pr) + 1U);
    }

    /* End of Switch: '<S445>/LV2Switch' */

    /* Update for UnitDelay: '<S448>/UnitDelay' */
    GSMR_ac_DW.VeGSMR_b_Ovrd2PrkLVVoltThshActv_LV2_prev =
        rtb_VeGSMI_b_Lv1InReverse;

    /* End of Outputs for SubSystem: '<S403>/LV2_Turn_On_Delay_Sample' */

    /* Outputs for Atomic SubSystem: '<S403>/LV2_Turn_On_Delay_Sample1' */
    /* Switch: '<S446>/LV2Switch' incorporates:
     *  Constant: '<S438>/Calib'
     *  Constant: '<S446>/ConstantValue'
     *  Constant: '<S446>/ConstantValue1'
     *  Logic: '<S446>/OR'
     *  Logic: '<S446>/OR1'
     *  Logic: '<S449>/AND1'
     *  Logic: '<S449>/OR2'
     *  MinMax: '<S446>/Minimum'
     *  Sum: '<S446>/Summation'
     *  UnitDelay: '<S446>/UnitDelay1'
     *  UnitDelay: '<S449>/UnitDelay'
     */
    if ((!rtb_VeGSMC_b_ToParkVehicleSpdMetIntmnt) ||
            (rtb_VeGSMC_b_ToParkVehicleSpdMetIntmnt &&
             (!GSMR_ac_DW.VeGSMR_b_Ovrd2NeutLVVoltThshActv_LV2_pre)))
    {
        GSMR_ac_DW.VeGSMR_Cnt_Ovrd2NeutLVVoltThshActv_LV2_p = 0U;
    }
    else if (KeGSMR_Cnt_LVVoltPNOvrdCntr < ((uint16)(((uint32)
                GSMR_ac_DW.VeGSMR_Cnt_Ovrd2NeutLVVoltThshActv_LV2_p) + 1U)))
    {
        /* MinMax: '<S446>/Minimum' incorporates:
         *  Constant: '<S438>/Calib'
         */
        GSMR_ac_DW.VeGSMR_Cnt_Ovrd2NeutLVVoltThshActv_LV2_p =
            KeGSMR_Cnt_LVVoltPNOvrdCntr;
    }
    else
    {
        /* MinMax: '<S446>/Minimum' incorporates:
         *  Constant: '<S446>/ConstantValue'
         *  Sum: '<S446>/Summation'
         *  UnitDelay: '<S446>/UnitDelay1'
         */
        GSMR_ac_DW.VeGSMR_Cnt_Ovrd2NeutLVVoltThshActv_LV2_p = (uint16)(((uint32)
            GSMR_ac_DW.VeGSMR_Cnt_Ovrd2NeutLVVoltThshActv_LV2_p) + 1U);
    }

    /* End of Switch: '<S446>/LV2Switch' */

    /* Update for UnitDelay: '<S449>/UnitDelay' */
    GSMR_ac_DW.VeGSMR_b_Ovrd2NeutLVVoltThshActv_LV2_pre =
        rtb_VeGSMC_b_ToParkVehicleSpdMetIntmnt;

    /* End of Outputs for SubSystem: '<S403>/LV2_Turn_On_Delay_Sample1' */

    /* RelationalOperator: '<S404>/Comparison1' incorporates:
     *  Constant: '<S451>/Constant'
     */
    VeGSMC_b_Lv1InPrk = (((uint32)VeGSMI_e_Lv2Lv1VldtdTransRngSt) ==
                         CeTRGR_e_TransRangePark);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ProcGSMRInputs'
     */
    /* Switch: '<S404>/Switch1' incorporates:
     *  Logic: '<S302>/AND'
     */
    if (tmpRead_5)
    {
        /* Switch: '<S404>/Switch' */
        if (VeGSMC_b_Lv1InPrk)
        {
            /* Switch: '<S404>/Switch1' incorporates:
             *  Constant: '<S452>/Constant'
             */
            rtb_VeGSMC_e_ProxStatArb = CeGSMR_e_Prox_In;
        }
        else
        {
            /* Switch: '<S404>/Switch1' incorporates:
             *  Constant: '<S453>/Constant'
             */
            rtb_VeGSMC_e_ProxStatArb = CeGSMR_e_Prox_Out;
        }

        /* End of Switch: '<S404>/Switch' */
    }
    else
    {
        /* Switch: '<S404>/Switch1' incorporates:
         *  Inport: '<Root>/VeSCMR_e_Lv2ProxStat'
         */
        (void)Rte_Read_VeSCMR_e_Lv2ProxStat_Value(&rtb_VeGSMC_e_ProxStatArb);
    }

    /* End of Switch: '<S404>/Switch1' */

    /* Logic: '<S405>/Logical10' incorporates:
     *  Constant: '<S454>/Constant'
     *  Constant: '<S455>/Constant'
     *  Constant: '<S457>/Calib'
     *  Constant: '<S458>/Calib'
     *  Logic: '<S300>/AND'
     *  Logic: '<S302>/AND'
     *  Logic: '<S404>/Logical1'
     *  Logic: '<S404>/Logical3'
     *  Logic: '<S404>/Logical4'
     *  Logic: '<S404>/Logical5'
     *  Logic: '<S404>/Logical6'
     *  Logic: '<S404>/Logical7'
     *  RelationalOperator: '<S404>/Comparison2'
     *  RelationalOperator: '<S404>/Comparison9'
     */
    VeGSMC_b_Ovrd2Neut_NoPSA = (((((uint32)rtb_VeGSMC_e_ProxStatArb) ==
        CeGSMR_e_Prox_In) || (((uint32)rtb_VeGSMC_e_ProxStatArb) ==
        CeGSMR_e_Prox_Un)) && (((!tmpRead_5) || (!KeGSMR_b_LOC_OBCM)) &&
        ((!rtb_VeGSMR_b_VehPluggedInDelay) || (!KeGSMR_b_LOC_IDCM))));

    /* Logic: '<S404>/Logical20' */
    VeGSMC_b_PlgInSpdNotMet = !VeGSMC_b_PlgInSpeedCondMet;

    /* Logic: '<S404>/Logical26' */
    VeGSMC_b_FalsePlgInDetcd = ((VeGSMC_b_Ovrd2Neut_NoPSA) &&
        (VeGSMC_b_PlgInSpdNotMet));

    /* Logic: '<S460>/OR1' incorporates:
     *  Logic: '<S460>/OR'
     */
    VeGSMC_b_NoFalsePlgInThisKey = ((VeGSMC_b_FalsePlgInDetcd) ||
        ((VeGSMC_b_NoKeyOff) && (VeGSMC_b_NoFalsePlgInThisKey)));

    /* Logic: '<S404>/Logical34' */
    VeGSMC_b_NoFalsePlgInThisKeyCyc = !VeGSMC_b_NoFalsePlgInThisKey;

    /* Logic: '<S404>/Logical2' */
    VeGSMC_b_PlgInDetcd = ((VeGSMC_b_PlgInSpeedCondMet) &&
                           (VeGSMC_b_Ovrd2Neut_NoPSA));

    /* Logic: '<S404>/Logical33' */
    rtb_VeGSMR_b_VehPluggedInDelay = ((VeGSMC_b_NoFalsePlgInThisKeyCyc) &&
        (VeGSMC_b_PlgInDetcd));

    /* Outputs for Atomic SubSystem: '<S404>/LV2_Turn_On_Delay_Sample' */
    /* Switch: '<S461>/LV2Switch' incorporates:
     *  Constant: '<S456>/Calib'
     *  Constant: '<S461>/ConstantValue'
     *  Constant: '<S461>/ConstantValue1'
     *  Logic: '<S461>/OR'
     *  Logic: '<S461>/OR1'
     *  Logic: '<S462>/AND1'
     *  Logic: '<S462>/OR2'
     *  MinMax: '<S461>/Minimum'
     *  Sum: '<S461>/Summation'
     *  UnitDelay: '<S461>/UnitDelay1'
     *  UnitDelay: '<S462>/UnitDelay'
     */
    if ((!rtb_VeGSMR_b_VehPluggedInDelay) || (rtb_VeGSMR_b_VehPluggedInDelay &&
            (!GSMR_ac_DW.VeGSMR_b_VehPluggedInDelay_prev)))
    {
        GSMR_ac_DW.VeGSMR_Cnt_VehPluggedInDelay_prev = 0U;
    }
    else if (KeGSMR_Cnt_DbncTimePlugInVldCn < ((uint16)(((uint32)
                GSMR_ac_DW.VeGSMR_Cnt_VehPluggedInDelay_prev) + 1U)))
    {
        /* MinMax: '<S461>/Minimum' incorporates:
         *  Constant: '<S456>/Calib'
         */
        GSMR_ac_DW.VeGSMR_Cnt_VehPluggedInDelay_prev =
            KeGSMR_Cnt_DbncTimePlugInVldCn;
    }
    else
    {
        /* MinMax: '<S461>/Minimum' incorporates:
         *  Constant: '<S461>/ConstantValue'
         *  Sum: '<S461>/Summation'
         *  UnitDelay: '<S461>/UnitDelay1'
         */
        GSMR_ac_DW.VeGSMR_Cnt_VehPluggedInDelay_prev = (uint16)(((uint32)
            GSMR_ac_DW.VeGSMR_Cnt_VehPluggedInDelay_prev) + 1U);
    }

    /* End of Switch: '<S461>/LV2Switch' */

    /* Update for UnitDelay: '<S462>/UnitDelay' */
    GSMR_ac_DW.VeGSMR_b_VehPluggedInDelay_prev = rtb_VeGSMR_b_VehPluggedInDelay;

    /* End of Outputs for SubSystem: '<S404>/LV2_Turn_On_Delay_Sample' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ProcGSMRInputs'
     */
    /* Switch: '<S404>/Switch2' incorporates:
     *  Inport: '<Root>/VeLTIR_b_Lv2RmtStrtActv_FA'
     *  Inport: '<Root>/VeSCMR_b_Lv2RmtStrtActv'
     *  Logic: '<S303>/AND'
     */
    if (rtb_VeGSMR_b_OTN_NLckTrgr)
    {
        /* Logic: '<S405>/Logical10' incorporates:
         *  Switch: '<S404>/Switch3'
         */
        VeGSMC_b_Ovrd2Neut_NoPSA = VeGSMC_b_Lv1InPrk;
    }
    else
    {
        (void)Rte_Read_VeLTIR_b_Lv2RmtStrtActv_FA_Value
            (&rtb_VeGSMR_b_OTN_NLckRst);
        (void)Rte_Read_VeSCMR_b_Lv2RmtStrtActv_Value(&tmpRead_1);

        /* Logic: '<S405>/Logical10' incorporates:
         *  Inport: '<Root>/VeLTIR_b_Lv2RmtStrtActv_FA'
         *  Inport: '<Root>/VeSCMR_b_Lv2RmtStrtActv'
         *  Logic: '<S404>/Logical27'
         *  Logic: '<S404>/Logical8'
         *  Logic: '<S404>/Logical9'
         */
        VeGSMC_b_Ovrd2Neut_NoPSA = ((tmpRead_1 && (!rtb_VeGSMR_b_OTN_NLckRst)) &&
            (VeGSMC_b_RmtStartSpdCondMet));
    }

    /* End of Switch: '<S404>/Switch2' */

    /* Switch: '<S481>/LV2_Abs_switch' incorporates:
     *  Constant: '<S481>/ConstantValue1'
     *  Product: '<S481>/Product'
     *  RelationalOperator: '<S481>/Comparison'
     */
    if (GSMR_ac_B.Gain < 0.0F)
    {
        rtb_VeGSMI_Pct_BrkTravelDiffAbs_Abs = -GSMR_ac_B.Gain;
    }
    else
    {
        rtb_VeGSMI_Pct_BrkTravelDiffAbs_Abs = GSMR_ac_B.Gain;
    }

    /* End of Switch: '<S481>/LV2_Abs_switch' */

    /* Logic: '<S405>/Logical14' incorporates:
     *  Constant: '<S480>/Calib'
     *  RelationalOperator: '<S405>/Comparison19'
     */
    rtb_VeGSMR_b_OTN_NLckTrgr = ((rtb_VeGSMI_Pct_BrkTravelDiffAbs_Abs <=
        KeGSMR_v_NeutLockSpdThsh) && (GSMR_ac_B.VeGSMR_b_Lv2DrvReq_N_Obsrvd));

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ProcGSMRInputs'
     */
    /* Logic: '<S405>/Logical24' incorporates:
     *  Constant: '<S322>/Constant'
     *  Constant: '<S323>/Constant'
     *  Logic: '<S8>/Logical18'
     *  RelationalOperator: '<S8>/Comparison10'
     *  RelationalOperator: '<S8>/Comparison11'
     */
    rtb_VeGSMC_b_ToParkVehicleTOSRMetIntmnt = (((((uint32)
        rtb_TmpSignalConversionAtVePPCR_e_PPawlF) == CePPCR_e_PPAWL_DISENGAGED) ||
        (((uint32)rtb_TmpSignalConversionAtVePPCR_e_PPawlF) ==
         CePPCR_e_PPAWL_ZeroRefLrnComplete)) && rtb_VeGSMR_b_OTN_NLckTrgr);

    /* Logic: '<S407>/LogicalOperator' incorporates:
     *  Constant: '<S501>/Constant'
     *  Constant: '<S502>/Constant'
     *  Constant: '<S503>/Constant'
     *  Constant: '<S504>/Constant'
     *  Inport: '<S8>/VeLTIR_b_Lv2ParkingGearShiftReq_BSM_FA'
     *  Logic: '<S407>/Logical_Operator'
     *  Logic: '<S407>/Logical_Operator2'
     *  RelationalOperator: '<S407>/RelationalOperator'
     *  RelationalOperator: '<S407>/RelationalOperator1'
     *  RelationalOperator: '<S407>/RelationalOperator2'
     *  RelationalOperator: '<S407>/Relational_Operator3'
     */
    VeGSMC_b_PPPA_Allowed = (((VeGSMI_b_ADAS_PPPA_Allwd) && ((((((uint32)
        VeGSMI_e_ParkingGearShftRq_BSM) == CeGSMR_e_GearShiftReq_R) || (((uint32)
        VeGSMI_e_ParkingGearShftRq_BSM) == CeGSMR_e_GearShiftReq_N)) ||
        (((uint32)VeGSMI_e_ParkingGearShftRq_BSM) == CeGSMR_e_GearShiftReq_D)) ||
        (((uint32)VeGSMI_e_ParkingGearShftRq_BSM) == CeGSMR_e_GearShiftReq_P))) &&
        (!tmpRead_j));

    /* Outputs for Atomic SubSystem: '<S400>/LV2_Turn_On_Delay_Time' */
    /* Logic: '<S405>/Logical15' incorporates:
     *  Constant: '<S506>/Calib'
     *  Logic: '<S510>/AND'
     *  RelationalOperator: '<S510>/GreaterThan'
     *  UnitDelay: '<S510>/UnitDelay1'
     */
    rtb_VeGSMR_b_OTN_NLckRst = ((((GSMR_ac_B.VeGSMR_b_Lv2DrvReq_P_Obsrvd) ||
        ((VeGSMC_b_BrkAppld_NLock) &&
         (GSMR_ac_DW.VeGSMR_t_BrkAppld_NLockRstPrevDelay_prev >=
          KeGSMR_t_BrkAppDly_NLck))) || (VeGSMI_b_BrkPdlStatFA)) ||
        (VeGSMC_b_PPPA_Allowed));

    /* End of Outputs for SubSystem: '<S400>/LV2_Turn_On_Delay_Time' */

    /* Outputs for Atomic SubSystem: '<S405>/LV2_Stop_Watch_Reset_Enabled' */
    /* Switch: '<S486>/Switch1' incorporates:
     *  Constant: '<S486>/ConstantValue2'
     *  Switch: '<S486>/Switch2'
     *  UnitDelay: '<S486>/UnitDelay'
     */
    if (rtb_VeGSMR_b_OTN_NLckRst)
    {
        GSMR_ac_DW.VeGSMR_t_OTN_NLckTrgr_prev = 0.0F;
    }
    else
    {
        if (rtb_VeGSMC_b_ToParkVehicleTOSRMetIntmnt)
        {
            /* UnitDelay: '<S486>/UnitDelay' incorporates:
             *  Constant: '<S477>/Calib'
             *  Sum: '<S486>/Subtraction'
             *  Switch: '<S486>/Switch2'
             */
            GSMR_ac_DW.VeGSMR_t_OTN_NLckTrgr_prev += KeGSMR_t_GSMR_dT;
        }
    }

    /* End of Switch: '<S486>/Switch1' */
    /* End of Outputs for SubSystem: '<S405>/LV2_Stop_Watch_Reset_Enabled' */

    /* Switch: '<S405>/Switch1' incorporates:
     *  Constant: '<S405>/ConstantValue'
     *  RelationalOperator: '<S405>/Comparison1'
     *  UnitDelay: '<S405>/UnitDelay'
     *  UnitDelay: '<S486>/UnitDelay'
     */
    if (GSMR_ac_DW.VeGSMR_t_OTN_NLckTrgr_prev < 5.0F)
    {
        GSMR_ac_DW.VeGSMR_t_NeutLockTmrThArb =
            GSMR_ac_DW.VeGSMR_t_OTN_NLckTrgr_prev;
    }

    /* End of Switch: '<S405>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S405>/LV2_Stop_Watch_Reset_Enabled1' */
    /* Outputs for Atomic SubSystem: '<S400>/LV2_Turn_On_Delay_Time1' */
    /* Switch: '<S487>/Switch1' incorporates:
     *  Constant: '<S487>/ConstantValue2'
     *  Constant: '<S507>/Calib'
     *  Logic: '<S405>/Logical25'
     *  Logic: '<S511>/AND'
     *  RelationalOperator: '<S511>/GreaterThan'
     *  Switch: '<S487>/Switch2'
     *  UnitDelay: '<S487>/UnitDelay'
     *  UnitDelay: '<S511>/UnitDelay1'
     */
    if (((GSMR_ac_B.VeGSMR_b_Lv2DrvReq_P_Obsrvd) || ((VeGSMC_b_BrkAppld_NLock) &&
          (GSMR_ac_DW.VeGSMR_t_BrkAppld_NLockRstDrvReq_prev >=
            KeGSMR_t_BrkAppDly_NLckDrvReq))) || (VeGSMI_b_BrkPdlStatFA))
    {
        GSMR_ac_DW.VeGSMR_t_OTN_NLckDrvReq_prev = 0.0F;
    }
    else
    {
        if (rtb_VeGSMC_b_ToParkVehicleTOSRMetIntmnt)
        {
            /* UnitDelay: '<S487>/UnitDelay' incorporates:
             *  Constant: '<S477>/Calib'
             *  Sum: '<S487>/Subtraction'
             *  Switch: '<S487>/Switch2'
             */
            GSMR_ac_DW.VeGSMR_t_OTN_NLckDrvReq_prev += KeGSMR_t_GSMR_dT;
        }
    }

    /* End of Switch: '<S487>/Switch1' */
    /* End of Outputs for SubSystem: '<S400>/LV2_Turn_On_Delay_Time1' */
    /* End of Outputs for SubSystem: '<S405>/LV2_Stop_Watch_Reset_Enabled1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<S397>/Dtmn_OTP_OTN' */
    /* End of Outputs for SubSystem: '<S9>/ProcForPPawlMntr' */
    /* End of Outputs for SubSystem: '<Root>/GSMR_FUNC_MedTEB' */

    /* Inport: '<Root>/VeSTRR_e_HybStrtrSt' */
    (void)Rte_Read_VeSTRR_e_HybStrtrSt_Value(&tmpRead_3);

    /* Inport: '<Root>/VeSCMR_Pct_Lv2HV_BatSOC' */
    (void)Rte_Read_VeSCMR_Pct_Lv2HV_BatSOC_Value(&tmpRead_2);

    /* Outputs for Function Call SubSystem: '<Root>/GSMR_FUNC_MedTEB' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ProcInputsForMonitor'
     */
    /* Outputs for Atomic SubSystem: '<S9>/ProcForPPawlMntr' */
    /* Outputs for Atomic SubSystem: '<S397>/Dtmn_OTP_OTN' */
    /* Switch: '<S405>/Switch5' incorporates:
     *  Constant: '<S405>/ConstantValue1'
     *  RelationalOperator: '<S405>/Comparison3'
     *  UnitDelay: '<S405>/UnitDelay1'
     *  UnitDelay: '<S487>/UnitDelay'
     */
    if (GSMR_ac_DW.VeGSMR_t_OTN_NLckDrvReq_prev < 5.0F)
    {
        GSMR_ac_DW.VeGSMR_t_NeutLockTmrThDrvReq =
            GSMR_ac_DW.VeGSMR_t_OTN_NLckDrvReq_prev;
    }

    /* End of Switch: '<S405>/Switch5' */

    /* Logic: '<S406>/Logical20' incorporates:
     *  Constant: '<S499>/Calib'
     *  Logic: '<S405>/Logical16'
     *  Logic: '<S405>/Logical18'
     *  Logic: '<S405>/Logical20'
     */
    rtb_VeGSMC_b_ToParkVehicleTOSRMetIntmnt = !KeGSMR_b_ShftProxi;

    /* Logic: '<S406>/Logical4' incorporates:
     *  Constant: '<S500>/Calib'
     *  Logic: '<S405>/Logical29'
     *  Logic: '<S405>/Logical31'
     */
    tmpRead_j = !KeGSMR_b_VFBEV;

    /* Outputs for Atomic SubSystem: '<S403>/LV2_Turn_On_Delay_Sample' */
    /* Logic: '<S406>/Logical3' incorporates:
     *  Constant: '<S438>/Calib'
     *  Logic: '<S406>/Logical20'
     *  Logic: '<S406>/Logical4'
     *  Logic: '<S445>/AND'
     *  RelationalOperator: '<S445>/GreaterThan'
     *  UnitDelay: '<S445>/UnitDelay1'
     */
    VeGSMC_b_Ovrd2PrkLVVoltThshActv = (((rtb_VeGSMI_b_Lv1InReverse &&
        (GSMR_ac_DW.VeGSMR_Cnt_Ovrd2PrkLVVoltThshActv_LV2_pr >=
         KeGSMR_Cnt_LVVoltPNOvrdCntr)) &&
        rtb_VeGSMC_b_ToParkVehicleTOSRMetIntmnt) && tmpRead_j);

    /* End of Outputs for SubSystem: '<S403>/LV2_Turn_On_Delay_Sample' */

    /* Logic: '<S406>/Logical18' incorporates:
     *  UnitDelay: '<S406>/UnitDelay'
     */
    VeGSMC_b_No_ePRND_Fail = !GSMR_ac_DW.VeGSMC_b_ePRNDFail_Prev1;

    /* Logic: '<S406>/Logical19' incorporates:
     *  Constant: '<S491>/Constant'
     *  Constant: '<S492>/Constant'
     *  DataTypeConversion: '<S1>/DataTypeConversion1'
     *  Inport: '<Root>/VeTRGR_e_TXFault'
     *  RelationalOperator: '<S406>/Comparison1'
     *  RelationalOperator: '<S406>/Comparison4'
     */
    VeGSMC_b_TXFlt_OTP = ((((uint32)tmpRead_0) == CeGSMR_e_TX_Fault_TPF) &&
                          (((uint32)rtb_VeGSMC_e_KeyStsArb) == CeLTIR_e_IGN_ACC));

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ProcGSMRInputs'
     */
    /* Logic: '<S406>/Logical1' incorporates:
     *  Constant: '<S497>/Calib'
     *  Switch: '<S8>/Switch6'
     */
    VeGSMC_b_OTP_ECMRq = (((!rtb_VeGSMR_b_DisEngdTrgr) && rtb_GreaterThan1_b) &&
                          (KeGSMR_b_Enbl_OTP_ECMRq));

    /* Switch: '<S404>/Switch5' incorporates:
     *  Constant: '<S456>/Calib'
     *  Constant: '<S459>/Calib'
     *  Logic: '<S461>/AND'
     *  RelationalOperator: '<S461>/GreaterThan'
     *  UnitDelay: '<S461>/UnitDelay1'
     */
    if (KeGSMR_b_VehPluggedInWithDelay)
    {
        /* Outputs for Atomic SubSystem: '<S404>/LV2_Turn_On_Delay_Sample' */
        rtb_VeGSMR_b_VehPluggedInDelay = (rtb_VeGSMR_b_VehPluggedInDelay &&
            (GSMR_ac_DW.VeGSMR_Cnt_VehPluggedInDelay_prev >=
             KeGSMR_Cnt_DbncTimePlugInVldCn));

        /* End of Outputs for SubSystem: '<S404>/LV2_Turn_On_Delay_Sample' */
    }

    /* End of Switch: '<S404>/Switch5' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ProcGSMRInputs'
     */
    /* Switch: '<S406>/Switch2' incorporates:
     *  Constant: '<S494>/Calib'
     *  Logic: '<S8>/Logical15'
     */
    if (rtb_VeGSMR_b_OTN_NLock)
    {
        tmpRead_2 = KeGSMR_Pct_HVBatSOC;
    }

    /* End of Switch: '<S406>/Switch2' */

    /* Switch: '<S405>/Switch2' incorporates:
     *  Constant: '<S490>/Constant'
     *  Constant: '<S493>/Constant'
     *  Constant: '<S495>/Calib'
     *  Inport: '<Root>/VeSTRR_e_HybStrtrSt'
     *  Logic: '<S406>/Logical28'
     *  Logic: '<S406>/Logical29'
     *  RelationalOperator: '<S406>/Comparison13'
     *  RelationalOperator: '<S406>/Comparison14'
     *  RelationalOperator: '<S406>/Comparison15'
     *  UnitDelay: '<S437>/UnitDelay1'
     */
    rtb_VeGSMR_b_OTN_NLock = (((((((GSMR_ac_DW.VeGSMR_b_Keyoff_Ltch_prev) ||
        rtb_VeGSMR_b_VehPluggedInDelay) || (VeGSMC_b_Ovrd2Neut_NoPSA)) ||
        (VeGSMC_b_Ovrd2PrkLVVoltThshActv)) || ((((VeGSMC_b_No_ePRND_Fail) &&
        (tmpRead_2 <= KeGSMR_Pct_SOCStrtInNeutLo)) && (((uint32)tmpRead_3) ==
        CeSTRR_e_KeyOffSt)) && (((uint32)VeGSMI_e_Lv2Lv1VldtdTransRngSt) ==
        CeTRGR_e_TransRangeNeutral))) || (VeGSMC_b_TXFlt_OTP)) ||
        (VeGSMC_b_OTP_ECMRq));

    /* Switch: '<S406>/Switch5' incorporates:
     *  Constant: '<S498>/Calib'
     */
    if (KeGSMR_b_OvrdAutoParkDetcd)
    {
        /* Switch: '<S406>/Switch5' incorporates:
         *  Constant: '<S496>/Calib'
         */
        VeGSMC_b_OTP_Arb = KeGSMR_b_AutoParkDetcdOvrdVal;
    }
    else
    {
        /* Switch: '<S406>/Switch5' */
        VeGSMC_b_OTP_Arb = rtb_VeGSMR_b_OTN_NLock;
    }

    /* End of Switch: '<S406>/Switch5' */

    /* Logic: '<S405>/Logical21' incorporates:
     *  Logic: '<S405>/Logical_Operator'
     */
    VeGSMC_b_LossOfPSA = !rtb_TmpSignalConversionAtVeHPMR_b_PropSy;

    /* Logic: '<S405>/Logical1' */
    VeGSMC_b_PNAllwd = ((VeGSMC_b_LossOfPSA) && (VeGSMC_b_KeyCrankCnfrmd));

    /* Logic: '<S405>/Logical3' */
    VeGSMC_b_NoParkReq = !GSMR_ac_B.VeGSMR_b_Lv2DrvReq_P_Obsrvd;

    /* Logic: '<S405>/Logical10' */
    VeGSMC_b_Ovrd2Neut_NoPSA = ((VeGSMC_b_PNAllwd) && (VeGSMC_b_NoParkReq));

    /* Logic: '<S482>/OR1' incorporates:
     *  Constant: '<S467>/Constant'
     *  Logic: '<S405>/Logical_Operator'
     *  Logic: '<S405>/Logical_Operator1'
     *  Logic: '<S482>/NOT'
     *  Logic: '<S482>/OR'
     *  RelationalOperator: '<S405>/Relational_Operator'
     *  RelationalOperator: '<S405>/Relational_Operator1'
     *  Switch: '<S329>/Switch1'
     *  UnitDelay: '<S405>/UnitDelay3'
     *  UnitDelay: '<S482>/UnitDelay1'
     */
    GSMR_ac_DW.VeGSMR_b_OTN_NLock_Prev_prev = ((VeGSMC_b_Ovrd2Neut_NoPSA) ||
        (((((VeGSMC_b_LossOfPSA) || (rtb_TmpSignalConversionAtVeSCMR_e_Lv2Drv ==
        GSMR_ac_DW.VeGSMI_e_DrvReqRaw_Prev)) && (((uint32)
        rtb_TmpSignalConversionAtVeSCMR_e_Lv2Drv) != CeGSMR_e_PRND_Park)) &&
          (!VeGSMC_b_OTP_Arb)) && (GSMR_ac_DW.VeGSMR_b_OTN_NLock_Prev_prev)));

    /* Outputs for Atomic SubSystem: '<S405>/LV2_Turn_On_Delay_Sample3' */
    /* Switch: '<S488>/LV2Switch' incorporates:
     *  Constant: '<S468>/Calib'
     *  Constant: '<S488>/ConstantValue'
     *  Constant: '<S488>/ConstantValue1'
     *  Logic: '<S488>/OR'
     *  Logic: '<S488>/OR1'
     *  Logic: '<S489>/AND1'
     *  Logic: '<S489>/OR2'
     *  MinMax: '<S488>/Minimum'
     *  Sum: '<S488>/Summation'
     *  UnitDelay: '<S488>/UnitDelay1'
     *  UnitDelay: '<S489>/UnitDelay'
     */
    if ((!rtb_VeGSMR_b_OTN_NLckTrgr) || (rtb_VeGSMR_b_OTN_NLckTrgr &&
            (!GSMR_ac_DW.VeGSMC_b_DrvReq_N_Dlyd_prev)))
    {
        GSMR_ac_DW.VeGSMC_Cnt_DrvReq_N_Dlyd_prev = 0U;
    }
    else if (KeGSMR_Cnt_NeutLockDbnc < ((uint16)(((uint32)
                GSMR_ac_DW.VeGSMC_Cnt_DrvReq_N_Dlyd_prev) + 1U)))
    {
        /* MinMax: '<S488>/Minimum' incorporates:
         *  Constant: '<S468>/Calib'
         */
        GSMR_ac_DW.VeGSMC_Cnt_DrvReq_N_Dlyd_prev = KeGSMR_Cnt_NeutLockDbnc;
    }
    else
    {
        /* MinMax: '<S488>/Minimum' incorporates:
         *  Constant: '<S488>/ConstantValue'
         *  Sum: '<S488>/Summation'
         *  UnitDelay: '<S488>/UnitDelay1'
         */
        GSMR_ac_DW.VeGSMC_Cnt_DrvReq_N_Dlyd_prev = (uint16)(((uint32)
            GSMR_ac_DW.VeGSMC_Cnt_DrvReq_N_Dlyd_prev) + 1U);
    }

    /* End of Switch: '<S488>/LV2Switch' */

    /* Update for UnitDelay: '<S489>/UnitDelay' */
    GSMR_ac_DW.VeGSMC_b_DrvReq_N_Dlyd_prev = rtb_VeGSMR_b_OTN_NLckTrgr;

    /* Logic: '<S483>/OR1' incorporates:
     *  Constant: '<S468>/Calib'
     *  Logic: '<S483>/NOT'
     *  Logic: '<S483>/OR'
     *  Logic: '<S488>/AND'
     *  RelationalOperator: '<S488>/GreaterThan'
     *  UnitDelay: '<S483>/UnitDelay1'
     *  UnitDelay: '<S488>/UnitDelay1'
     */
    GSMR_ac_DW.VeGSMR_b_OTN_NLock_Prev_prev_b = ((rtb_VeGSMR_b_OTN_NLckTrgr &&
        (GSMR_ac_DW.VeGSMC_Cnt_DrvReq_N_Dlyd_prev >= KeGSMR_Cnt_NeutLockDbnc)) ||
        ((!rtb_VeGSMR_b_OTN_NLckRst) &&
         (GSMR_ac_DW.VeGSMR_b_OTN_NLock_Prev_prev_b)));

    /* End of Outputs for SubSystem: '<S405>/LV2_Turn_On_Delay_Sample3' */

    /* Logic: '<S405>/Logical11' incorporates:
     *  Logic: '<S405>/Logical12'
     */
    VeGSMC_b_OTN_HiSpd_P = (((GSMR_ac_B.VeGSMR_b_Lv2DrvReq_P_Obsrvd) &&
        (!VeGSMC_b_ToParkVehicleSpdMet)) &&
                            rtb_VeGSMC_b_ToParkVehicleTOSRMetIntmnt);

    /* Switch: '<S405>/Switch' incorporates:
     *  Constant: '<S469>/Calib'
     */
    if (KeGSMR_b_LatchOvrd2Neut)
    {
        /* Switch: '<S405>/Switch' incorporates:
         *  UnitDelay: '<S482>/UnitDelay1'
         */
        VeGSMC_b_Ovrd2Neut_NoPSA = GSMR_ac_DW.VeGSMR_b_OTN_NLock_Prev_prev;
    }

    /* End of Switch: '<S405>/Switch' */

    /* Outputs for Atomic SubSystem: '<S403>/LV2_Turn_On_Delay_Sample1' */
    /* Logic: '<S405>/Logical32' incorporates:
     *  Constant: '<S438>/Calib'
     *  Logic: '<S446>/AND'
     *  RelationalOperator: '<S446>/GreaterThan'
     *  UnitDelay: '<S446>/UnitDelay1'
     */
    VeGSMC_b_Ovrd2Neut_UV = ((((((rtb_VeGSMC_b_ToParkVehicleSpdMetIntmnt &&
        (GSMR_ac_DW.VeGSMR_Cnt_Ovrd2NeutLVVoltThshActv_LV2_p >=
         KeGSMR_Cnt_LVVoltPNOvrdCntr)) &&
        rtb_TmpSignalConversionAtVeHPMR_b_PropSy) && (VeGSMC_b_Ovrd2NeutVehSpd))
        && (VeGSMC_b_KeyCrankCnfrmd)) && rtb_VeGSMC_b_ToParkVehicleTOSRMetIntmnt)
        && tmpRead_j);

    /* End of Outputs for SubSystem: '<S403>/LV2_Turn_On_Delay_Sample1' */

    /* Logic: '<S405>/Logical6' */
    VeGSMC_b_NoKeyCrnk = !VeGSMC_b_KeyCrankCnfrmd;

    /* Logic: '<S406>/Logical30' */
    VeGSMC_b_Ovrd2Park = ((VeGSMC_b_ToParkVehicleSpdMet) &&
                          rtb_VeGSMR_b_OTN_NLock);

    /* Switch: '<S406>/Switch4' incorporates:
     *  Constant: '<S496>/Calib'
     *  Constant: '<S498>/Calib'
     */
    if (KeGSMR_b_OvrdAutoParkDetcd)
    {
        GSMR_ac_B.VeGSMR_b_OvrdToPark = KeGSMR_b_AutoParkDetcdOvrdVal;
    }
    else
    {
        GSMR_ac_B.VeGSMR_b_OvrdToPark = VeGSMC_b_Ovrd2Park;
    }

    /* End of Switch: '<S406>/Switch4' */

    /* Switch: '<S405>/Switch4' incorporates:
     *  Constant: '<S475>/Calib'
     */
    if (KeGSMR_b_ShftProxi)
    {
        /* Switch: '<S405>/Switch4' */
        VeGSMC_b_OTPrkR = GSMR_ac_B.VeGSMR_b_OvrdToPark;
    }
    else
    {
        /* Switch: '<S405>/Switch4' */
        VeGSMC_b_OTPrkR = VeGSMC_b_OTP_Arb;
    }

    /* End of Switch: '<S405>/Switch4' */

    /* Logic: '<S405>/Logical36' */
    VeGSMC_b_PrkReq = ((GSMR_ac_B.VeGSMR_b_Lv2DrvReq_P_Obsrvd) ||
                       (VeGSMC_b_OTPrkR));

    /* Logic: '<S405>/Logical8' */
    VeGSMC_b_NoPrkRq = !VeGSMC_b_PrkReq;

    /* Logic: '<S405>/Logical5' */
    VeGSMC_b_OTN_PwrUp = (((VeGSMC_b_NoKeyCrnk) && (VeGSMC_b_NoKeyOff)) &&
                          (VeGSMC_b_NoPrkRq));

    /* Logic: '<S405>/Logical17' incorporates:
     *  Constant: '<S475>/Calib'
     *  Constant: '<S476>/Calib'
     *  Logic: '<S405>/Logical30'
     *  UnitDelay: '<S437>/UnitDelay1'
     */
    VeGSMC_b_OTN_KeyOff = (((VeGSMC_b_NoPrkRq) &&
                            (GSMR_ac_DW.VeGSMR_b_Keyoff_Ltch_prev)) &&
                           ((KeGSMR_b_ShftProxi) || (KeGSMR_b_VFBEV)));

    /* Logic: '<S405>/Logical4' */
    VeGSMC_b_DRLReq = (((GSMR_ac_B.VeGSMR_b_Lv2DrvReq_D_Obsrvd) ||
                        (GSMR_ac_B.VeGSMR_b_Lv2DrvReq_R_Obsrvd)) ||
                       (GSMR_ac_B.VeGSMR_b_Lv2DrvReq_L_Obsrvd));

    /* Logic: '<S405>/Logical2' */
    VeGSMC_b_OTN_HiSpdDRLReqPrev = ((VeGSMC_b_DRLReq) &&
        (VeGSMC_b_OTN_DRLReqHiSpd));

    /* Logic: '<S405>/Logical19' */
    VeGSMC_b_OTN_HiSpdDRLReq = ((rtb_VeGSMC_b_ToParkVehicleTOSRMetIntmnt &&
        tmpRead_j) && (VeGSMC_b_OTN_HiSpdDRLReqPrev));

    /* Logic: '<S405>/LogicalOperator3' incorporates:
     *  Constant: '<S463>/Constant'
     *  Constant: '<S464>/Constant'
     *  Constant: '<S465>/Constant'
     *  Constant: '<S466>/Constant'
     *  Constant: '<S471>/Calib'
     *  Constant: '<S472>/Calib'
     *  Logic: '<S405>/LogicalOperator'
     *  Logic: '<S405>/LogicalOperator1'
     *  Logic: '<S405>/LogicalOperator2'
     *  RelationalOperator: '<S405>/RelationalOperator'
     *  RelationalOperator: '<S405>/RelationalOperator1'
     *  RelationalOperator: '<S405>/RelationalOperator2'
     *  RelationalOperator: '<S405>/RelationalOperator3'
     *  Switch: '<S8>/Switch19'
     *  Switch: '<S8>/Switch20'
     */
    VeGSMC_b_OTN_MtrA_MtrB_InvrtrFlt =
        (((((GSMR_ac_B.VeGSMR_b_Lv2DrvReq_R_Obsrvd) &&
            (KeGSMR_b_OvrdToNEnbl_MtrA_Flt)) && (((uint32)
             VeGSMI_e_Lv2MtrA_InvrtrSts) == CeGSMR_e_InverterFaulted)) &&
          ((((uint32)VeGSMI_e_Lv2MtrA_6SOEnbl) == CeGSMR_e_ThreePS) || (((uint32)
             VeGSMI_e_Lv2MtrA_6SOEnbl) == CeGSMR_e_OnePS))) ||
         (((GSMR_ac_B.VeGSMR_b_Lv2DrvReq_R_Obsrvd) && (((uint32)
             VeGSMI_e_Lv2MtrB_InvrtrSts) == CeGSMR_e_InverterFaulted)) &&
          (KeGSMR_b_OvrdToNEnbl_MtrB_Flt)));

    /* Logic: '<S405>/Logical13' */
    VeGSMC_b_Ovrd2Neut = ((((((VeGSMC_b_Ovrd2Neut_NoPSA) ||
        (VeGSMC_b_Ovrd2Neut_UV)) || (VeGSMC_b_OTN_PwrUp)) ||
                            (VeGSMC_b_OTN_KeyOff)) || (VeGSMC_b_OTN_HiSpdDRLReq))
                          || (VeGSMC_b_OTN_MtrA_MtrB_InvrtrFlt));

    /* Switch: '<S485>/Switch' incorporates:
     *  Constant: '<S478>/Calib'
     *  RelationalOperator: '<S485>/Comparison'
     *  UnitDelay: '<S405>/UnitDelay1'
     */
    if (GSMR_ac_DW.VeGSMR_t_NeutLockTmrThDrvReq < KeGSMR_t_NeutLockTmrTh)
    {
        rtb_VeGSMI_Pct_BrkTravelDiffAbs_Abs =
            GSMR_ac_DW.VeGSMR_t_NeutLockTmrThDrvReq;
    }
    else
    {
        rtb_VeGSMI_Pct_BrkTravelDiffAbs_Abs = KeGSMR_t_NeutLockTmrTh;
    }

    /* End of Switch: '<S485>/Switch' */

    /* Sum: '<S405>/Sum2' incorporates:
     *  Constant: '<S478>/Calib'
     *  Constant: '<S479>/Calib'
     *  Sum: '<S405>/Sum1'
     *  Switch: '<S405>/Switch2'
     */
    rtb_TmpSignalConversionAtVeHWIO_U_Lv2LVB = KeGSMR_t_NeutLockTmrTh -
        KeGSMR_t_ShftrLockComplete;

    /* Logic: '<S405>/Logical28' incorporates:
     *  Logic: '<S405>/Logical26'
     *  RelationalOperator: '<S405>/Comparison4'
     *  Sum: '<S405>/Sum2'
     */
    GSMR_ac_B.VeGSMR_b_OvrdToNeutralDrvReq = ((VeGSMC_b_Ovrd2Neut) ||
        ((rtb_VeGSMI_Pct_BrkTravelDiffAbs_Abs >=
          rtb_TmpSignalConversionAtVeHWIO_U_Lv2LVB) && (VeGSMC_b_BrakeSigValid)));

    /* Switch: '<S405>/Switch2' incorporates:
     *  Constant: '<S470>/Calib'
     */
    if (KeGSMR_b_NlockWithTmrTh)
    {
        /* Switch: '<S484>/Switch' incorporates:
         *  Constant: '<S478>/Calib'
         *  RelationalOperator: '<S484>/Comparison'
         *  UnitDelay: '<S405>/UnitDelay'
         */
        if (GSMR_ac_DW.VeGSMR_t_NeutLockTmrThArb < KeGSMR_t_NeutLockTmrTh)
        {
            rtb_VeGSMI_Pct_BrkTravelDiffAbs_Abs =
                GSMR_ac_DW.VeGSMR_t_NeutLockTmrThArb;
        }
        else
        {
            rtb_VeGSMI_Pct_BrkTravelDiffAbs_Abs = KeGSMR_t_NeutLockTmrTh;
        }

        /* End of Switch: '<S484>/Switch' */

        /* Switch: '<S405>/Switch2' incorporates:
         *  Logic: '<S405>/Logical22'
         *  RelationalOperator: '<S405>/Comparison2'
         */
        rtb_VeGSMR_b_OTN_NLock = ((rtb_VeGSMI_Pct_BrkTravelDiffAbs_Abs >=
            rtb_TmpSignalConversionAtVeHWIO_U_Lv2LVB) && (VeGSMC_b_BrakeSigValid));
    }
    else
    {
        /* Switch: '<S405>/Switch2' incorporates:
         *  UnitDelay: '<S483>/UnitDelay1'
         */
        rtb_VeGSMR_b_OTN_NLock = GSMR_ac_DW.VeGSMR_b_OTN_NLock_Prev_prev_b;
    }

    /* Logic: '<S405>/Logical9' */
    VeGSMC_b_OTN_Arb = (((VeGSMC_b_Ovrd2Neut) || (VeGSMC_b_OTN_HiSpd_P)) ||
                        rtb_VeGSMR_b_OTN_NLock);

    /* Switch: '<S405>/Switch3' incorporates:
     *  Constant: '<S473>/Calib'
     *  Constant: '<S474>/Calib'
     */
    if (KeGSMR_b_OvrdToNeutDetcd)
    {
        GSMR_ac_B.VeGSMR_b_OvrdToNeutral = KeGSMR_b_OvrdToNeutDetcdVal;
    }
    else
    {
        GSMR_ac_B.VeGSMR_b_OvrdToNeutral = VeGSMC_b_OTN_Arb;
    }

    /* End of Switch: '<S405>/Switch3' */
    /* End of Outputs for SubSystem: '<S397>/Dtmn_OTP_OTN' */

    /* Logic: '<S397>/Logical1' incorporates:
     *  Constant: '<S399>/Calib'
     *  Logic: '<S397>/Logical22'
     */
    GSMR_ac_B.VeGSMR_b_OvrrdToParkToN = (((GSMR_ac_B.VeGSMR_b_OvrdToPark) ||
        (GSMR_ac_B.VeGSMR_b_OvrdToNeutralDrvReq)) && (KeGSMR_b_OvrdToParkToN));

    /* Switch: '<S400>/Switch' */
    VeGSMC_b_BrkAppldArb = VeGSMC_b_BrkAppld_NLock;

    /* Switch: '<S509>/LV2Switch' incorporates:
     *  Constant: '<S505>/Calib'
     *  Logic: '<S509>/AND1'
     *  Logic: '<S509>/OR1'
     *  UnitDelay: '<S509>/UnitDelay'
     *  UnitDelay: '<S509>/UnitDelay1'
     */
    if ((!VeGSMC_b_BrkAppldArb) && (GSMR_ac_DW.VeGSMR_b_BrkAppldArbDelay_prev))
    {
        GSMR_ac_DW.VeGSMR_t_BrkAppldARBPrevDelay_prev =
            KeGSMR_Cnt_MaxBrkApplyDly;
    }
    else
    {
        /* Switch: '<S509>/Switch1' incorporates:
         *  Constant: '<S508>/Calib'
         *  Sum: '<S509>/Sum_Lv2'
         *  UnitDelay: '<S509>/UnitDelay1'
         */
        GSMR_ac_DW.VeGSMR_t_BrkAppldARBPrevDelay_prev -= KeGSMR_t_GSMR_dT;

        /* Switch: '<S509>/Switch1' incorporates:
         *  Constant: '<S509>/ConstantValue8'
         *  RelationalOperator: '<S509>/GreaterThan1'
         */
        if (GSMR_ac_DW.VeGSMR_t_BrkAppldARBPrevDelay_prev < 0.0F)
        {
            /* Switch: '<S509>/Switch1' incorporates:
             *  Constant: '<S509>/ConstantValue3'
             */
            GSMR_ac_DW.VeGSMR_t_BrkAppldARBPrevDelay_prev = 0.0F;
        }

        /* End of Switch: '<S509>/Switch1' */

        /* Switch: '<S512>/Switch' incorporates:
         *  Constant: '<S509>/ConstantValue1'
         *  RelationalOperator: '<S512>/Comparison'
         *  UnitDelay: '<S509>/UnitDelay1'
         */
        if (GSMR_ac_DW.VeGSMR_t_BrkAppldARBPrevDelay_prev <= 0.0F)
        {
            GSMR_ac_DW.VeGSMR_t_BrkAppldARBPrevDelay_prev = 0.0F;
        }

        /* End of Switch: '<S512>/Switch' */
    }

    /* End of Switch: '<S509>/LV2Switch' */

    /* Logic: '<S509>/AND' incorporates:
     *  Constant: '<S509>/ConstantValue2'
     *  RelationalOperator: '<S509>/GreaterThan'
     *  UnitDelay: '<S509>/UnitDelay1'
     */
    GSMR_ac_B.AND_d = ((VeGSMC_b_BrkAppldArb) ||
                       (GSMR_ac_DW.VeGSMR_t_BrkAppldARBPrevDelay_prev > 0.0F));

    /* End of Outputs for SubSystem: '<S9>/ProcForPPawlMntr' */

    /* Update for Atomic SubSystem: '<S9>/ProcForPPawlMntr' */
    /* Update for Atomic SubSystem: '<S397>/Dtmn_OTP_OTN' */
    /* Update for RelationalOperator: '<S402>/Comparison2' incorporates:
     *  Switch: '<S402>/Switch1'
     *  UnitDelay: '<S402>/UnitDelay1'
     */
    GSMR_ac_DW.VeGSMC_e_KeyStsArbPrev = rtb_VeGSMC_e_KeyStsArb;

    /* Update for UnitDelay: '<S405>/UnitDelay3' incorporates:
     *  Switch: '<S329>/Switch1'
     */
    GSMR_ac_DW.VeGSMI_e_DrvReqRaw_Prev =
        rtb_TmpSignalConversionAtVeSCMR_e_Lv2Drv;

    /* Update for UnitDelay: '<S406>/UnitDelay' */
    GSMR_ac_DW.VeGSMC_b_ePRNDFail_Prev1 = GSMR_ac_B.Switch3;

    /* End of Update for SubSystem: '<S397>/Dtmn_OTP_OTN' */

    /* Update for UnitDelay: '<S509>/UnitDelay' */
    GSMR_ac_DW.VeGSMR_b_BrkAppldArbDelay_prev = VeGSMC_b_BrkAppldArb;

    /* End of Update for SubSystem: '<S9>/ProcForPPawlMntr' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Monitor_ePRND'
     */
    /* Outputs for Atomic SubSystem: '<S6>/Monitor_ePRND' */
    GSMR_ac_Monitor_ePRND();

    /* End of Outputs for SubSystem: '<S6>/Monitor_ePRND' */

    /* Update for Atomic SubSystem: '<S6>/Monitor_ePRND' */
    GSMR_ac_Monitor_ePRND_Update();

    /* End of Update for SubSystem: '<S6>/Monitor_ePRND' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Monitor_ePark'
     */
    /* Outputs for Atomic SubSystem: '<S7>/Monitor_ePark' */
    /* UnitDelay: '<S162>/UnitDelay' incorporates:
     *  Constant: '<S170>/Constant'
     *  Constant: '<S172>/Constant'
     *  Constant: '<S173>/Constant'
     *  Constant: '<S174>/Constant'
     *  Logic: '<S166>/Logical1'
     *  RelationalOperator: '<S166>/Comparison13'
     *  RelationalOperator: '<S166>/Comparison2'
     *  RelationalOperator: '<S166>/Comparison3'
     *  RelationalOperator: '<S166>/Comparison4'
     */
    rtb_VeGSMC_b_ToParkVehicleTOSRMetIntmnt = ((((((uint32)
        GSMR_ac_DW.VeGSMR_e_PPawlSysSts_Prev) == CeGSMR_e_PPAWL_Engaging) ||
        (((uint32)GSMR_ac_DW.VeGSMR_e_PPawlSysSts_Prev) ==
         CeGSMR_e_PPAWL_Disengaging)) || (((uint32)
        GSMR_ac_DW.VeGSMR_e_PPawlSysSts_Prev) == CeGSMR_e_PPAWL_Disengaged)) ||
        (((uint32)GSMR_ac_DW.VeGSMR_e_PPawlSysSts_Prev) ==
         CeGSMR_e_PPAWL_Engaged));

    /* UnitDelay: '<S131>/UnitDelay1' incorporates:
     *  Constant: '<S228>/Calib'
     *  Product: '<S169>/Product'
     *  Sum: '<S169>/Sum1'
     *  UnitDelay: '<S169>/UnitDelay8'
     *  UnitDelay: '<S392>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeHWIO_U_Lv2LVB =
        (GSMR_ac_DW.VeGSMI_U_Lv2PPMtrPosSnsrFB_Filtd_prev -
         GSMR_ac_DW.VeGSMI_U_Lv2PPMtrPosSnsrFB_Prev) *
        KeGSMR_r_DeltaCrntAmplifyingFctr;

    /* Outputs for Atomic SubSystem: '<S169>/LV2_Count_Down_Reset_Enabled1' */
    /* Switch: '<S231>/Switch1' incorporates:
     *  Constant: '<S216>/Calib'
     *  Constant: '<S225>/Calib'
     *  Constant: '<S231>/ConstantValue'
     *  Logic: '<S169>/Logical7'
     *  RelationalOperator: '<S169>/Comparison1'
     *  RelationalOperator: '<S231>/GreaterThan'
     *  Switch: '<S231>/Switch2'
     *  UnitDelay: '<S231>/UnitDelay'
     */
    if (rtb_TmpSignalConversionAtVeHWIO_U_Lv2LVB < KeGSMR_U_PPMtrEngMovThsh)
    {
        GSMR_ac_DW.VeGSMR_Cnt_EngMovCnfrmd_PosSnsr_prev =
            KeGSMR_Cnt_EngMovCnfrmCntr;
    }
    else
    {
        if (((sint32)GSMR_ac_DW.VeGSMR_Cnt_EngMovCnfrmd_PosSnsr_prev) > 0)
        {
            /* UnitDelay: '<S231>/UnitDelay' incorporates:
             *  Constant: '<S231>/ConstantValue1'
             *  Sum: '<S231>/Subtraction'
             *  Switch: '<S231>/Switch2'
             */
            GSMR_ac_DW.VeGSMR_Cnt_EngMovCnfrmd_PosSnsr_prev = (uint16)((sint32)
                (((sint32)GSMR_ac_DW.VeGSMR_Cnt_EngMovCnfrmd_PosSnsr_prev) - 1));
        }
    }

    /* End of Switch: '<S231>/Switch1' */

    /* RelationalOperator: '<S231>/GreaterThan1' incorporates:
     *  Constant: '<S231>/ConstantValue2'
     *  UnitDelay: '<S231>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeHPMR_b_PropSy = (((sint32)
        GSMR_ac_DW.VeGSMR_Cnt_EngMovCnfrmd_PosSnsr_prev) <= 0);

    /* End of Outputs for SubSystem: '<S169>/LV2_Count_Down_Reset_Enabled1' */

    /* Outputs for Atomic SubSystem: '<S169>/LV2_Count_Down_Reset_Enabled3' */
    /* Switch: '<S233>/Switch1' incorporates:
     *  Constant: '<S215>/Calib'
     *  Constant: '<S224>/Calib'
     *  Constant: '<S233>/ConstantValue'
     *  Logic: '<S169>/Logical10'
     *  RelationalOperator: '<S169>/Comparison5'
     *  RelationalOperator: '<S233>/GreaterThan'
     *  Switch: '<S233>/Switch2'
     *  UnitDelay: '<S233>/UnitDelay'
     *  UnitDelay: '<S392>/UnitDelay'
     */
    if (GSMR_ac_DW.VeGSMI_U_Lv2PPMtrPosSnsrFB_Filtd_prev <
            KeGSMR_U_PPMtrEngCnfrmThsh)
    {
        GSMR_ac_DW.VeGSMR_Cnt_PPawlMtrEngd_PosSnsr_prev =
            KeGSMR_Cnt_EngCnfrmCntr;
    }
    else
    {
        if (((sint32)GSMR_ac_DW.VeGSMR_Cnt_PPawlMtrEngd_PosSnsr_prev) > 0)
        {
            /* UnitDelay: '<S233>/UnitDelay' incorporates:
             *  Constant: '<S233>/ConstantValue1'
             *  Sum: '<S233>/Subtraction'
             *  Switch: '<S233>/Switch2'
             */
            GSMR_ac_DW.VeGSMR_Cnt_PPawlMtrEngd_PosSnsr_prev = (uint16)((sint32)
                (((sint32)GSMR_ac_DW.VeGSMR_Cnt_PPawlMtrEngd_PosSnsr_prev) - 1));
        }
    }

    /* End of Switch: '<S233>/Switch1' */
    /* End of Outputs for SubSystem: '<S169>/LV2_Count_Down_Reset_Enabled3' */

    /* RelationalOperator: '<S166>/Comparison4' incorporates:
     *  RelationalOperator: '<S184>/Comparison1'
     *  RelationalOperator: '<S184>/Comparison2'
     *  RelationalOperator: '<S184>/Comparison3'
     *  RelationalOperator: '<S184>/Comparison4'
     *  Switch: '<S194>/Switch1'
     *  Switch: '<S195>/Switch1'
     *  Switch: '<S196>/Switch1'
     *  Switch: '<S197>/Switch1'
     *  Switch: '<S198>/Switch1'
     *  UnitDelay: '<S184>/UnitDelay1'
     */
    GSMR_ac_DW.VeGSMR_e_PPawlSysSts_Prev = GSMR_ac_DW.VeGSMR_e_PPawlSysSt_Prev;

    /* Logic: '<S184>/Logical7' incorporates:
     *  Constant: '<S192>/Constant'
     *  Constant: '<S193>/Constant'
     *  RelationalOperator: '<S184>/Comparison2'
     *  RelationalOperator: '<S184>/Comparison3'
     */
    VeGSMC_b_PPMtrEndPosReached = ((((uint32)
        GSMR_ac_DW.VeGSMR_e_PPawlSysSts_Prev) == CeGSMR_e_PPAWL_Engaged) ||
        (((uint32)GSMR_ac_DW.VeGSMR_e_PPawlSysSts_Prev) ==
         CeGSMR_e_PPAWL_Disengaged));

    /* Switch: '<S229>/LV2_Abs_switch' incorporates:
     *  Constant: '<S229>/ConstantValue1'
     *  RelationalOperator: '<S229>/Comparison'
     */
    if (VeGSMI_I_Lv2PPawlMtrCrntDraw < 0.0F)
    {
        /* Switch: '<S229>/LV2_Abs_switch' incorporates:
         *  Product: '<S229>/Product'
         */
        VeGSMC_I_PPawlMtrCrntDrawAbs = -VeGSMI_I_Lv2PPawlMtrCrntDraw;
    }
    else
    {
        /* Switch: '<S229>/LV2_Abs_switch' */
        VeGSMC_I_PPawlMtrCrntDrawAbs = VeGSMI_I_Lv2PPawlMtrCrntDraw;
    }

    /* End of Switch: '<S229>/LV2_Abs_switch' */

    /* RelationalOperator: '<S169>/Comparison9' incorporates:
     *  RelationalOperator: '<S169>/Comparison10'
     *  RelationalOperator: '<S169>/Comparison11'
     *  RelationalOperator: '<S169>/Comparison12'
     *  UnitDelay: '<S169>/UnitDelay9'
     */
    VeGSMC_b_Curr_Eng_tmp = GSMR_ac_DW.VeGSMR_e_PPawlSysStateDlyd_Prev;

    /* If: '<S169>/If' incorporates:
     *  Constant: '<S204>/Constant'
     *  Constant: '<S207>/Constant'
     *  Constant: '<S220>/Calib'
     *  Constant: '<S221>/Calib'
     *  Logic: '<S169>/Logical1'
     *  Logic: '<S169>/Logical16'
     *  Logic: '<S169>/Logical3'
     *  RelationalOperator: '<S169>/Comparison10'
     *  RelationalOperator: '<S169>/Comparison13'
     *  RelationalOperator: '<S169>/Comparison21'
     *  RelationalOperator: '<S169>/Comparison9'
     *  UnitDelay: '<S392>/UnitDelay'
     */
    if (((((uint32)VeGSMC_b_Curr_Eng_tmp) == CeGSMR_e_PPAWL_Disengaging) &&
            (GSMR_ac_DW.VeGSMI_U_Lv2PPMtrPosSnsrFB_Filtd_prev <
             KeGSMR_U_DisEngThsh4EndCrntDet)) ||
            ((GSMR_ac_DW.VeGSMI_U_Lv2PPMtrPosSnsrFB_Filtd_prev >
              KeGSMR_U_EngThsh4EndCrntDet) && (((uint32)VeGSMC_b_Curr_Eng_tmp) ==
          CeGSMR_e_PPAWL_Engaging)))
    {
        /* Outputs for IfAction SubSystem: '<S169>/IfActionSubsystem' incorporates:
         *  ActionPort: '<S211>/ActionPort'
         */
        /* Outputs for Atomic SubSystem: '<S211>/LV2_Count_Down_Reset_Enabled' */
        /* Switch: '<S242>/Switch1' incorporates:
         *  Constant: '<S237>/Calib'
         *  Constant: '<S238>/Calib'
         *  Constant: '<S239>/Calib'
         *  Constant: '<S242>/ConstantValue'
         *  Logic: '<S211>/Logical2'
         *  Logic: '<S211>/Logical3'
         *  RelationalOperator: '<S211>/Comparison10'
         *  RelationalOperator: '<S211>/Comparison9'
         *  RelationalOperator: '<S242>/GreaterThan'
         *  Switch: '<S242>/Switch2'
         *  UnitDelay: '<S242>/UnitDelay'
         */
        if ((VeGSMC_I_PPawlMtrCrntDrawAbs < KeGSMR_I_EndStopCrntThsh_Min) ||
                (VeGSMC_I_PPawlMtrCrntDrawAbs > KeGSMR_I_EndStopCrntThsh_Max))
        {
            GSMR_ac_DW.VeGSMR_b_EndStpCrnDetcd_If_Int_prev =
                KeGSMR_Cnt_EndStpCrntCnfrmCntr;
        }
        else
        {
            if (((sint32)GSMR_ac_DW.VeGSMR_b_EndStpCrnDetcd_If_Int_prev) > 0)
            {
                /* UnitDelay: '<S242>/UnitDelay' incorporates:
                 *  Constant: '<S242>/ConstantValue1'
                 *  Sum: '<S242>/Subtraction'
                 *  Switch: '<S242>/Switch2'
                 */
                GSMR_ac_DW.VeGSMR_b_EndStpCrnDetcd_If_Int_prev = (uint16)
                    ((sint32)(((sint32)
                               GSMR_ac_DW.VeGSMR_b_EndStpCrnDetcd_If_Int_prev) -
                              1));
            }
        }

        /* End of Switch: '<S242>/Switch1' */
        /* End of Outputs for SubSystem: '<S211>/LV2_Count_Down_Reset_Enabled' */

        /* Switch: '<S211>/Switch' incorporates:
         *  Constant: '<S241>/Calib'
         */
        if (KeGSMR_b_OvrdEndStpCrntDetcd)
        {
            /* UnitDelay: '<S259>/UnitDelay1' incorporates:
             *  Constant: '<S240>/Calib'
             */
            rtb_VeGSMR_b_OTN_NLock = KeGSMR_b_EndStpCrntOvrdVal;
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S211>/LV2_Count_Down_Reset_Enabled' */
            /* UnitDelay: '<S259>/UnitDelay1' incorporates:
             *  Constant: '<S242>/ConstantValue2'
             *  RelationalOperator: '<S242>/GreaterThan1'
             *  UnitDelay: '<S242>/UnitDelay'
             */
            rtb_VeGSMR_b_OTN_NLock = (((sint32)
                GSMR_ac_DW.VeGSMR_b_EndStpCrnDetcd_If_Int_prev) <= 0);

            /* End of Outputs for SubSystem: '<S211>/LV2_Count_Down_Reset_Enabled' */
        }

        /* End of Switch: '<S211>/Switch' */
        /* End of Outputs for SubSystem: '<S169>/IfActionSubsystem' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S169>/IfActionSubsystem1' incorporates:
         *  ActionPort: '<S212>/ActionPort'
         */
        /* UnitDelay: '<S259>/UnitDelay1' incorporates:
         *  Constant: '<S212>/FALSEConstant'
         *  SignalConversion generated from: '<S212>/Out1'
         */
        rtb_VeGSMR_b_OTN_NLock = false;

        /* End of Outputs for SubSystem: '<S169>/IfActionSubsystem1' */
    }

    /* End of If: '<S169>/If' */

    /* Logic: '<S235>/OR1' incorporates:
     *  Constant: '<S208>/Constant'
     *  Constant: '<S209>/Constant'
     *  Logic: '<S169>/Logical4'
     *  Logic: '<S235>/NOT'
     *  Logic: '<S235>/OR'
     *  RelationalOperator: '<S169>/Comparison11'
     *  RelationalOperator: '<S169>/Comparison12'
     *  UnitDelay: '<S235>/Unit Delay1'
     */
    GSMR_ac_DW.VeGSMR_b_EndStpCrntLtch_prev = (rtb_VeGSMR_b_OTN_NLock ||
        (((((uint32)VeGSMC_b_Curr_Eng_tmp) != CeGSMR_e_PPAWL_Engaged) &&
          (((uint32)VeGSMC_b_Curr_Eng_tmp) != CeGSMR_e_PPAWL_Disengaged)) &&
         (GSMR_ac_DW.VeGSMR_b_EndStpCrntLtch_prev)));

    /* Logic: '<S184>/Logical6' incorporates:
     *  Constant: '<S190>/Constant'
     *  Constant: '<S191>/Constant'
     *  RelationalOperator: '<S184>/Comparison1'
     *  RelationalOperator: '<S184>/Comparison4'
     */
    VeGSMC_b_PPawlMtrWasMoving = ((((uint32)GSMR_ac_DW.VeGSMR_e_PPawlSysSts_Prev)
        == CeGSMR_e_PPAWL_Engaging) || (((uint32)
        GSMR_ac_DW.VeGSMR_e_PPawlSysSts_Prev) == CeGSMR_e_PPAWL_Disengaging));

    /* Switch: '<S184>/Switch' incorporates:
     *  UnitDelay: '<S235>/Unit Delay1'
     */
    VeGSMC_b_EndStpCrntDet_Arb = ((!VeGSMC_b_PPawlMtrWasMoving) ||
        (GSMR_ac_DW.VeGSMR_b_EndStpCrntLtch_prev));

    /* Switch: '<S184>/Switch1' */
    VeGSMC_b_EndStpCrntMod = ((VeGSMC_b_PPMtrEndPosReached) ||
        (VeGSMC_b_EndStpCrntDet_Arb));

    /* Outputs for Atomic SubSystem: '<S169>/LV2_Count_Down_Reset_Enabled3' */
    /* Logic: '<S184>/Logical4' incorporates:
     *  Constant: '<S233>/ConstantValue2'
     *  RelationalOperator: '<S233>/GreaterThan1'
     *  UnitDelay: '<S233>/UnitDelay'
     */
    rtb_VeGSMR_b_OTN_NLock = ((((sint32)
        GSMR_ac_DW.VeGSMR_Cnt_PPawlMtrEngd_PosSnsr_prev) <= 0) &&
        (VeGSMC_b_EndStpCrntMod));

    /* End of Outputs for SubSystem: '<S169>/LV2_Count_Down_Reset_Enabled3' */

    /* Outputs for Atomic SubSystem: '<S169>/LV2_Count_Down_Reset_Enabled2' */
    /* Switch: '<S232>/Switch1' incorporates:
     *  Constant: '<S214>/Calib'
     *  Constant: '<S223>/Calib'
     *  Constant: '<S232>/ConstantValue'
     *  Logic: '<S169>/Logical8'
     *  RelationalOperator: '<S169>/Comparison2'
     *  RelationalOperator: '<S232>/GreaterThan'
     *  Switch: '<S232>/Switch2'
     *  UnitDelay: '<S232>/UnitDelay'
     */
    if (rtb_TmpSignalConversionAtVeHWIO_U_Lv2LVB > KeGSMR_U_PPMtrDisEngMovThsh)
    {
        GSMR_ac_DW.VeGSMR_Cnt_DisEngMovCnfrmd_PosSnsr_prev =
            KeGSMR_Cnt_DisEngMovCnfrmCntr;
    }
    else
    {
        if (((sint32)GSMR_ac_DW.VeGSMR_Cnt_DisEngMovCnfrmd_PosSnsr_prev) > 0)
        {
            /* UnitDelay: '<S232>/UnitDelay' incorporates:
             *  Constant: '<S232>/ConstantValue1'
             *  Sum: '<S232>/Subtraction'
             *  Switch: '<S232>/Switch2'
             */
            GSMR_ac_DW.VeGSMR_Cnt_DisEngMovCnfrmd_PosSnsr_prev = (uint16)
                ((sint32)(((sint32)
                           GSMR_ac_DW.VeGSMR_Cnt_DisEngMovCnfrmd_PosSnsr_prev) -
                          1));
        }
    }

    /* End of Switch: '<S232>/Switch1' */

    /* RelationalOperator: '<S232>/GreaterThan1' incorporates:
     *  Constant: '<S232>/ConstantValue2'
     *  UnitDelay: '<S232>/UnitDelay'
     */
    rtb_GreaterThan1_b = (((sint32)
                           GSMR_ac_DW.VeGSMR_Cnt_DisEngMovCnfrmd_PosSnsr_prev) <=
                          0);

    /* End of Outputs for SubSystem: '<S169>/LV2_Count_Down_Reset_Enabled2' */

    /* Outputs for Atomic SubSystem: '<S169>/LV2_Count_Down_Reset_Enabled4' */
    /* Switch: '<S234>/Switch1' incorporates:
     *  Constant: '<S213>/Calib'
     *  Constant: '<S222>/Calib'
     *  Constant: '<S234>/ConstantValue'
     *  Logic: '<S169>/Logical11'
     *  RelationalOperator: '<S169>/Comparison6'
     *  RelationalOperator: '<S234>/GreaterThan'
     *  Switch: '<S234>/Switch2'
     *  UnitDelay: '<S234>/UnitDelay'
     *  UnitDelay: '<S392>/UnitDelay'
     */
    if (GSMR_ac_DW.VeGSMI_U_Lv2PPMtrPosSnsrFB_Filtd_prev >
            KeGSMR_U_PPMtrDisEngCnfrmThsh)
    {
        GSMR_ac_DW.VeGSMR_Cnt_PPawlMtrDisEngd_PosSnsr_prev =
            KeGSMR_Cnt_DisEngCnfrmCntr;
    }
    else
    {
        if (((sint32)GSMR_ac_DW.VeGSMR_Cnt_PPawlMtrDisEngd_PosSnsr_prev) > 0)
        {
            /* UnitDelay: '<S234>/UnitDelay' incorporates:
             *  Constant: '<S234>/ConstantValue1'
             *  Sum: '<S234>/Subtraction'
             *  Switch: '<S234>/Switch2'
             */
            GSMR_ac_DW.VeGSMR_Cnt_PPawlMtrDisEngd_PosSnsr_prev = (uint16)
                ((sint32)(((sint32)
                           GSMR_ac_DW.VeGSMR_Cnt_PPawlMtrDisEngd_PosSnsr_prev) -
                          1));
        }
    }

    /* End of Switch: '<S234>/Switch1' */

    /* Logic: '<S184>/Logical5' incorporates:
     *  Constant: '<S234>/ConstantValue2'
     *  RelationalOperator: '<S234>/GreaterThan1'
     *  UnitDelay: '<S234>/UnitDelay'
     */
    rtb_VeGSMR_b_DisEngdTrgr = ((((sint32)
        GSMR_ac_DW.VeGSMR_Cnt_PPawlMtrDisEngd_PosSnsr_prev) <= 0) &&
        (VeGSMC_b_EndStpCrntMod));

    /* End of Outputs for SubSystem: '<S169>/LV2_Count_Down_Reset_Enabled4' */

    /* Logic: '<S184>/Logical9' */
    VeGSMC_b_AtleastOneCondActv = (((rtb_TmpSignalConversionAtVeHPMR_b_PropSy ||
        rtb_GreaterThan1_b) || rtb_VeGSMR_b_OTN_NLock) ||
        rtb_VeGSMR_b_DisEngdTrgr);

    /* Logic: '<S184>/Logical10' */
    VeGSMC_b_NoCondActv = !VeGSMC_b_AtleastOneCondActv;

    /* Outputs for Atomic SubSystem: '<S184>/LV2_Stop_Watch_Reset_Enabled' */
    /* Switch: '<S201>/Switch1' incorporates:
     *  Constant: '<S201>/ConstantValue2'
     *  Switch: '<S201>/Switch2'
     *  UnitDelay: '<S201>/UnitDelay'
     */
    if (VeGSMC_b_AtleastOneCondActv)
    {
        GSMR_ac_DW.VeGSMC_t_NoCondActvTmr_prev = 0.0F;
    }
    else
    {
        if (VeGSMC_b_NoCondActv)
        {
            /* UnitDelay: '<S201>/UnitDelay' incorporates:
             *  Constant: '<S199>/Calib'
             *  Sum: '<S201>/Subtraction'
             *  Switch: '<S201>/Switch2'
             */
            GSMR_ac_DW.VeGSMC_t_NoCondActvTmr_prev += KeGSMR_t_GSMR_dT;
        }
    }

    /* End of Switch: '<S201>/Switch1' */
    /* End of Outputs for SubSystem: '<S184>/LV2_Stop_Watch_Reset_Enabled' */

    /* RelationalOperator: '<S184>/Comparison5' incorporates:
     *  Constant: '<S200>/Calib'
     *  UnitDelay: '<S201>/UnitDelay'
     */
    VeGSMC_b_NoCondActvTmrMatured = (GSMR_ac_DW.VeGSMC_t_NoCondActvTmr_prev >=
        KeGSMR_t_ePARK_NDState_DlyTmr);

    /* Switch: '<S194>/Switch1' incorporates:
     *  Constant: '<S185>/Constant'
     *  Logic: '<S184>/Logical1'
     *  Logic: '<S184>/Logical2'
     *  Logic: '<S184>/Logical3'
     *  Logic: '<S184>/Logical8'
     *  Switch: '<S195>/Switch1'
     *  Switch: '<S196>/Switch1'
     *  Switch: '<S197>/Switch1'
     *  Switch: '<S198>/Switch1'
     *  UnitDelay: '<S169>/UnitDelay9'
     */
    if (rtb_TmpSignalConversionAtVeHPMR_b_PropSy && (!rtb_VeGSMR_b_OTN_NLock))
    {
        GSMR_ac_DW.VeGSMR_e_PPawlSysStateDlyd_Prev = CeGSMR_e_PPAWL_Engaging;
    }
    else if (rtb_GreaterThan1_b && (!rtb_VeGSMR_b_DisEngdTrgr))
    {
        /* Switch: '<S195>/Switch1' incorporates:
         *  Constant: '<S186>/Constant'
         *  Switch: '<S194>/Switch1'
         *  UnitDelay: '<S169>/UnitDelay9'
         */
        GSMR_ac_DW.VeGSMR_e_PPawlSysStateDlyd_Prev = CeGSMR_e_PPAWL_Disengaging;
    }
    else if (rtb_VeGSMR_b_OTN_NLock)
    {
        /* Switch: '<S196>/Switch1' incorporates:
         *  Constant: '<S187>/Constant'
         *  Switch: '<S194>/Switch1'
         *  Switch: '<S195>/Switch1'
         *  UnitDelay: '<S169>/UnitDelay9'
         */
        GSMR_ac_DW.VeGSMR_e_PPawlSysStateDlyd_Prev = CeGSMR_e_PPAWL_Engaged;
    }
    else if (rtb_VeGSMR_b_DisEngdTrgr)
    {
        /* Switch: '<S197>/Switch1' incorporates:
         *  Constant: '<S188>/Constant'
         *  Switch: '<S194>/Switch1'
         *  Switch: '<S195>/Switch1'
         *  Switch: '<S196>/Switch1'
         *  UnitDelay: '<S169>/UnitDelay9'
         */
        GSMR_ac_DW.VeGSMR_e_PPawlSysStateDlyd_Prev = CeGSMR_e_PPAWL_Disengaged;
    }
    else if (VeGSMC_b_NoCondActvTmrMatured)
    {
        /* Switch: '<S198>/Switch1' incorporates:
         *  Constant: '<S189>/Constant'
         *  Switch: '<S194>/Switch1'
         *  Switch: '<S195>/Switch1'
         *  Switch: '<S196>/Switch1'
         *  Switch: '<S197>/Switch1'
         *  UnitDelay: '<S169>/UnitDelay9'
         */
        GSMR_ac_DW.VeGSMR_e_PPawlSysStateDlyd_Prev =
            CeGSMR_e_PPAWL_NotDetermined;
    }
    else
    {
        /* Switch: '<S194>/Switch1' incorporates:
         *  Switch: '<S195>/Switch1'
         *  Switch: '<S196>/Switch1'
         *  Switch: '<S197>/Switch1'
         *  UnitDelay: '<S169>/UnitDelay9'
         */
        GSMR_ac_DW.VeGSMR_e_PPawlSysStateDlyd_Prev =
            GSMR_ac_DW.VeGSMR_e_PPawlSysSts_Prev;
    }

    /* Logic: '<S183>/OR1' incorporates:
     *  Constant: '<S171>/Constant'
     *  Logic: '<S166>/Logical'
     *  Logic: '<S183>/NOT'
     *  Logic: '<S183>/OR'
     *  RelationalOperator: '<S166>/Comparison1'
     *  Switch: '<S194>/Switch1'
     *  UnitDelay: '<S169>/UnitDelay9'
     *  UnitDelay: '<S183>/Unit Delay1'
     */
    GSMR_ac_DW.VeGSMC_b_ToParkNotPossible_Prev_prev =
        ((rtb_VeGSMC_b_ToParkVehicleTOSRMetIntmnt && (((uint32)
            GSMR_ac_DW.VeGSMR_e_PPawlSysStateDlyd_Prev) ==
           CeGSMR_e_PPAWL_NotDetermined)) ||
         ((!rtb_VeGSMC_b_ToParkVehicleTOSRMetIntmnt) &&
          (GSMR_ac_DW.VeGSMC_b_ToParkNotPossible_Prev_prev)));

    /* UnitDelay: '<S251>/UnitDelay1' incorporates:
     *  UnitDelay: '<S129>/UnitDelay2'
     */
    rtb_TmpSignalConversionAtVeHPMR_b_PropSy = VeGSMC_b_Lv2PRND_Park;

    /* Logic: '<S129>/Logical15' incorporates:
     *  UnitDelay: '<S129>/UnitDelay2'
     */
    rtb_VeGSMR_b_OTN_NLock = !VeGSMC_b_Lv2PRND_Park;

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Monitor_ePRND'
     */
    /* RelationalOperator: '<S129>/Comparison3' incorporates:
     *  Constant: '<S276>/Constant'
     *  DataTypeConversion: '<S25>/DataTypeConversion'
     *  Switch: '<S30>/Switch1'
     */
    VeGSMC_b_Lv2PRND_Park = (((uint32)GSMR_ac_B.VeGSMR_e_VldtdPRNDPos) ==
        CeGSMR_e_TransRangePark);

    /* UnitDelay: '<S129>/UnitDelay1' */
    rtb_VeGSMC_b_ToParkVehicleTOSRMetIntmnt =
        !GSMR_ac_DW.VeGSMC_b_RstSnsrMntrDlySecPrev;

    /* Logic: '<S279>/OR1' incorporates:
     *  Logic: '<S129>/Logical14'
     *  Logic: '<S129>/Logical18'
     *  Logic: '<S129>/Logical19'
     *  Logic: '<S279>/NOT'
     *  Logic: '<S279>/OR'
     *  UnitDelay: '<S129>/UnitDelay1'
     *  UnitDelay: '<S279>/UnitDelay1'
     */
    GSMR_ac_DW.VeGSMC_b_ToPark_prev = ((rtb_VeGSMR_b_OTN_NLock &&
        (VeGSMC_b_Lv2PRND_Park)) || (((VeGSMC_b_Lv2PRND_Park) &&
        rtb_VeGSMC_b_ToParkVehicleTOSRMetIntmnt) &&
        (GSMR_ac_DW.VeGSMC_b_ToPark_prev)));

    /* Logic: '<S129>/Logical17' incorporates:
     *  Logic: '<S129>/Logical20'
     */
    rtb_VeGSMR_b_OTN_NLock = !VeGSMC_b_Lv2PRND_Park;

    /* Logic: '<S280>/OR1' incorporates:
     *  Logic: '<S129>/Logical16'
     *  Logic: '<S129>/Logical17'
     *  Logic: '<S129>/Logical20'
     *  Logic: '<S280>/NOT'
     *  Logic: '<S280>/OR'
     *  UnitDelay: '<S280>/UnitDelay1'
     */
    GSMR_ac_DW.VeGSMR_b_OutOfPark_prev =
        ((rtb_TmpSignalConversionAtVeHPMR_b_PropSy && rtb_VeGSMR_b_OTN_NLock) ||
         ((rtb_VeGSMR_b_OTN_NLock && rtb_VeGSMC_b_ToParkVehicleTOSRMetIntmnt) &&
          (GSMR_ac_DW.VeGSMR_b_OutOfPark_prev)));

    /* If: '<S129>/If' incorporates:
     *  Logic: '<S129>/Logical21'
     *  UnitDelay: '<S279>/UnitDelay1'
     *  UnitDelay: '<S280>/UnitDelay1'
     */
    if ((GSMR_ac_DW.VeGSMC_b_ToPark_prev) || (GSMR_ac_DW.VeGSMR_b_OutOfPark_prev))
    {
        /* Outputs for IfAction SubSystem: '<S129>/IfActionSubsystem' incorporates:
         *  ActionPort: '<S277>/ActionPort'
         */
        /* Product: '<S277>/Product' incorporates:
         *  Constant: '<S289>/Calib'
         *  UnitDelay: '<S392>/UnitDelay'
         */
        rtb_TmpSignalConversionAtVeHWIO_U_Lv2LVB =
            GSMR_ac_DW.VeGSMI_U_Lv2PPMtrPosSnsrFB_Filtd_prev *
            KeGSMR_r_VoltScalingFact;

        /* Switch: '<S294>/LV2_Abs_switch' incorporates:
         *  Constant: '<S294>/ConstantValue1'
         *  RelationalOperator: '<S294>/Comparison'
         */
        if (rtb_TmpSignalConversionAtVeHWIO_U_Lv2LVB < 0.0F)
        {
            /* Switch: '<S294>/LV2_Abs_switch' incorporates:
             *  Product: '<S294>/Product'
             */
            rtb_TmpSignalConversionAtVeHWIO_U_Lv2LVB =
                -rtb_TmpSignalConversionAtVeHWIO_U_Lv2LVB;
        }

        /* End of Switch: '<S294>/LV2_Abs_switch' */

        /* Sum: '<S277>/Sum' incorporates:
         *  UnitDelay: '<S277>/UnitDelay'
         */
        GSMR_ac_DW.VeGSMC_U_PosSnsrVal_Prev =
            rtb_TmpSignalConversionAtVeHWIO_U_Lv2LVB -
            GSMR_ac_DW.VeGSMC_U_PosSnsrVal_Prev;

        /* Switch: '<S295>/LV2_Abs_switch' incorporates:
         *  Constant: '<S295>/ConstantValue1'
         *  Product: '<S295>/Product'
         *  RelationalOperator: '<S295>/Comparison'
         *  UnitDelay: '<S277>/UnitDelay'
         */
        if (GSMR_ac_DW.VeGSMC_U_PosSnsrVal_Prev < 0.0F)
        {
            GSMR_ac_DW.VeGSMC_U_PosSnsrVal_Prev =
                -GSMR_ac_DW.VeGSMC_U_PosSnsrVal_Prev;
        }

        /* End of Switch: '<S295>/LV2_Abs_switch' */

        /* RelationalOperator: '<S277>/Comparison1' incorporates:
         *  Constant: '<S285>/Calib'
         *  UnitDelay: '<S277>/UnitDelay'
         */
        VeGSMC_b_PosSnsrMovDtctd = (GSMR_ac_DW.VeGSMC_U_PosSnsrVal_Prev >=
            KeGSMR_U_VoltDiffForMov);

        /* Switch: '<S292>/LV2_Abs_switch' incorporates:
         *  Constant: '<S292>/ConstantValue1'
         *  RelationalOperator: '<S292>/Comparison'
         */
        if (VeGSMI_I_Lv2PPawlMtrCrntDraw < 0.0F)
        {
            /* Switch: '<S292>/LV2_Abs_switch' incorporates:
             *  Product: '<S292>/Product'
             */
            VeGSMI_I_Lv2PPawlMtrCrntDraw = -VeGSMI_I_Lv2PPawlMtrCrntDraw;
        }

        /* End of Switch: '<S292>/LV2_Abs_switch' */

        /* UnitDelay: '<S277>/UnitDelay2' incorporates:
         *  UnitDelay: '<S277>/UnitDelay'
         */
        GSMR_ac_DW.VeGSMC_U_PosSnsrVal_Prev =
            GSMR_ac_DW.VeGSMC_I_CrntSnsrVal_Prev;

        /* Sum: '<S277>/Sum1' incorporates:
         *  UnitDelay: '<S277>/UnitDelay'
         */
        GSMR_ac_DW.VeGSMC_U_PosSnsrVal_Prev = VeGSMI_I_Lv2PPawlMtrCrntDraw -
            GSMR_ac_DW.VeGSMC_U_PosSnsrVal_Prev;

        /* Switch: '<S293>/LV2_Abs_switch' incorporates:
         *  Constant: '<S293>/ConstantValue1'
         *  Product: '<S293>/Product'
         *  RelationalOperator: '<S293>/Comparison'
         *  UnitDelay: '<S277>/UnitDelay'
         */
        if (GSMR_ac_DW.VeGSMC_U_PosSnsrVal_Prev < 0.0F)
        {
            GSMR_ac_DW.VeGSMC_U_PosSnsrVal_Prev =
                -GSMR_ac_DW.VeGSMC_U_PosSnsrVal_Prev;
        }

        /* End of Switch: '<S293>/LV2_Abs_switch' */

        /* RelationalOperator: '<S277>/Comparison2' incorporates:
         *  Constant: '<S284>/Calib'
         *  UnitDelay: '<S277>/UnitDelay'
         */
        VeGSMC_b_CrntSnsrMovDtctd = (GSMR_ac_DW.VeGSMC_U_PosSnsrVal_Prev >=
            KeGSMR_I_CrntDiffForMov);

        /* Outputs for Atomic SubSystem: '<S277>/LV2_Stop_Watch_Reset_Enabled' */
        /* Switch: '<S298>/Switch2' incorporates:
         *  Constant: '<S288>/Calib'
         *  Constant: '<S290>/Calib'
         *  Sum: '<S298>/Subtraction'
         *  UnitDelay: '<S277>/UnitDelay'
         *  UnitDelay: '<S298>/UnitDelay'
         */
        if (KeGSMR_b_SnsrStatusDet)
        {
            GSMR_ac_DW.VeGSMC_U_PosSnsrVal_Prev = KeGSMR_t_GSMR_dT +
                GSMR_ac_DW.VeGSMR_t_SnsrMntrTmr_prev;
        }
        else
        {
            GSMR_ac_DW.VeGSMC_U_PosSnsrVal_Prev =
                GSMR_ac_DW.VeGSMR_t_SnsrMntrTmr_prev;
        }

        /* End of Switch: '<S298>/Switch2' */

        /* Switch: '<S298>/Switch1' incorporates:
         *  UnitDelay: '<S277>/UnitDelay'
         *  UnitDelay: '<S298>/UnitDelay'
         */
        GSMR_ac_DW.VeGSMR_t_SnsrMntrTmr_prev =
            GSMR_ac_DW.VeGSMC_U_PosSnsrVal_Prev;

        /* End of Outputs for SubSystem: '<S277>/LV2_Stop_Watch_Reset_Enabled' */

        /* RelationalOperator: '<S277>/Comparison5' incorporates:
         *  Constant: '<S291>/Calib'
         *  UnitDelay: '<S298>/UnitDelay'
         */
        VeGSMC_b_RstSnsrMntr_VoltFB = (GSMR_ac_DW.VeGSMR_t_SnsrMntrTmr_prev >=
            KeGSMR_t_MaxPpawlSnsrMntrTmr);

        /* Outputs for Atomic SubSystem: '<S277>/LV2_Count_Down_Reset_Enabled' */
        /* Switch: '<S296>/Switch1' incorporates:
         *  Constant: '<S282>/Calib'
         *  Constant: '<S296>/ConstantValue'
         *  Logic: '<S277>/Logical3'
         *  Logic: '<S296>/AND'
         *  RelationalOperator: '<S296>/GreaterThan'
         *  Switch: '<S296>/Switch2'
         *  UnitDelay: '<S296>/UnitDelay'
         */
        if (!VeGSMC_b_CrntSnsrMovDtctd)
        {
            GSMR_ac_DW.VeGSMC_Cnt_CrntSnsrMovCnfrmd_prev =
                KeGSMR_Cnt_Lv2PPawlCrntSnsrCntr;
        }
        else
        {
            if ((VeGSMC_b_CrntSnsrMovDtctd) && (((sint32)
                    GSMR_ac_DW.VeGSMC_Cnt_CrntSnsrMovCnfrmd_prev) > 0))
            {
                /* UnitDelay: '<S296>/UnitDelay' incorporates:
                 *  Constant: '<S296>/ConstantValue1'
                 *  Sum: '<S296>/Subtraction'
                 *  Switch: '<S296>/Switch2'
                 */
                GSMR_ac_DW.VeGSMC_Cnt_CrntSnsrMovCnfrmd_prev = (uint16)((sint32)
                    (((sint32)GSMR_ac_DW.VeGSMC_Cnt_CrntSnsrMovCnfrmd_prev) - 1));
            }
        }

        /* End of Switch: '<S296>/Switch1' */

        /* RelationalOperator: '<S296>/GreaterThan1' incorporates:
         *  Constant: '<S296>/ConstantValue2'
         *  UnitDelay: '<S296>/UnitDelay'
         */
        VeGSMC_b_CrntSnsrMovCnfrmd = (((sint32)
            GSMR_ac_DW.VeGSMC_Cnt_CrntSnsrMovCnfrmd_prev) <= 0);

        /* End of Outputs for SubSystem: '<S277>/LV2_Count_Down_Reset_Enabled' */

        /* Outputs for Atomic SubSystem: '<S277>/LV2_Count_Down_Reset_Enabled1' */
        /* Switch: '<S297>/Switch1' incorporates:
         *  Constant: '<S283>/Calib'
         *  Constant: '<S297>/ConstantValue'
         *  Logic: '<S277>/Logical2'
         *  Logic: '<S297>/AND'
         *  RelationalOperator: '<S297>/GreaterThan'
         *  Switch: '<S297>/Switch2'
         *  UnitDelay: '<S297>/UnitDelay'
         */
        if (!VeGSMC_b_PosSnsrMovDtctd)
        {
            GSMR_ac_DW.VeGSMC_Cnt_Lv2PosSnsrMovCnfrmd_prev =
                KeGSMR_Cnt_Lv2PPawlPosSnsrCntr;
        }
        else
        {
            if ((VeGSMC_b_PosSnsrMovDtctd) && (((sint32)
                    GSMR_ac_DW.VeGSMC_Cnt_Lv2PosSnsrMovCnfrmd_prev) > 0))
            {
                /* UnitDelay: '<S297>/UnitDelay' incorporates:
                 *  Constant: '<S297>/ConstantValue1'
                 *  Sum: '<S297>/Subtraction'
                 *  Switch: '<S297>/Switch2'
                 */
                GSMR_ac_DW.VeGSMC_Cnt_Lv2PosSnsrMovCnfrmd_prev = (uint16)
                    ((sint32)(((sint32)
                               GSMR_ac_DW.VeGSMC_Cnt_Lv2PosSnsrMovCnfrmd_prev) -
                              1));
            }
        }

        /* End of Switch: '<S297>/Switch1' */

        /* RelationalOperator: '<S297>/GreaterThan1' incorporates:
         *  Constant: '<S297>/ConstantValue2'
         *  UnitDelay: '<S297>/UnitDelay'
         */
        VeGSMC_b_Lv2PosSnsrMovCnfrmd = (((sint32)
            GSMR_ac_DW.VeGSMC_Cnt_Lv2PosSnsrMovCnfrmd_prev) <= 0);

        /* End of Outputs for SubSystem: '<S277>/LV2_Count_Down_Reset_Enabled1' */

        /* Logic: '<S277>/Logical' incorporates:
         *  Constant: '<S281>/Constant'
         *  Logic: '<S277>/Logical6'
         *  Logic: '<S277>/Logical7'
         *  RelationalOperator: '<S277>/Comparison4'
         *  Switch: '<S8>/Switch9'
         */
        VeGSMC_b_NoLV1FltRpt = (((!rtb_TmpSignalConversionAtVePPCR_b_PPUnau) &&
            (!rtb_TmpSignalConversionAtVePPCR_b_PPawlS)) && (((uint32)
            VeGSMI_e_Lv2HBridgeDiagInfo) == CeGSMR_e_NoFault));

        /* Logic: '<S277>/Logical5' incorporates:
         *  Constant: '<S286>/Calib'
         *  Logic: '<S277>/Logical1'
         *  Logic: '<S277>/Logical4'
         */
        VeGSMC_b_SnsrStatusDet = ((((VeGSMC_b_CrntSnsrMovCnfrmd) ||
            (KeGSMR_b_IgnoreCrntSnsrFltDet)) || (VeGSMC_b_RstSnsrMntr_VoltFB)) &&
            ((VeGSMC_b_RstSnsrMntr_VoltFB) || (VeGSMC_b_Lv2PosSnsrMovCnfrmd)));

        /* Logic: '<S277>/Logical11' incorporates:
         *  Constant: '<S287>/Calib'
         *  Logic: '<S277>/Logical12'
         *  Logic: '<S277>/Logical13'
         */
        VeGSMC_b_LV2_CrntSnsrFltDetcd = (((((VeGSMC_b_SnsrStatusDet) &&
            (!rtb_TmpSignalConversionAtVePPCR_b_PPawl_)) &&
            (VeGSMC_b_NoLV1FltRpt)) && (!VeGSMC_b_CrntSnsrMovCnfrmd)) &&
            (KeGSMR_b_PerfLV2CrntSnsrFltDet));

        /* Logic: '<S277>/Logical8' incorporates:
         *  Logic: '<S277>/Logical10'
         *  Logic: '<S277>/Logical9'
         */
        VeGSMC_b_LV2_PosSnsrFltDetcd = ((((VeGSMC_b_SnsrStatusDet) &&
            (!rtb_TmpSignalConversionAtVePPCR_b_PPaw_m)) &&
            (VeGSMC_b_NoLV1FltRpt)) && (!VeGSMC_b_Lv2PosSnsrMovCnfrmd));

        /* Logic: '<S277>/Logical14' */
        VeGSMC_b_LV2SnsrFltDetcd_Both = ((VeGSMC_b_LV2_PosSnsrFltDetcd) &&
            (VeGSMC_b_LV2_CrntSnsrFltDetcd));

        /* Merge: '<S129>/Merge' incorporates:
         *  Logic: '<S277>/Logical15'
         */
        VeGSMC_b_LV2SnsrFltDetcd = ((VeGSMC_b_LV2_PosSnsrFltDetcd) ||
            (VeGSMC_b_LV2SnsrFltDetcd_Both));

        /* Update for UnitDelay: '<S277>/UnitDelay' */
        GSMR_ac_DW.VeGSMC_U_PosSnsrVal_Prev =
            rtb_TmpSignalConversionAtVeHWIO_U_Lv2LVB;

        /* Update for UnitDelay: '<S277>/UnitDelay2' */
        GSMR_ac_DW.VeGSMC_I_CrntSnsrVal_Prev = VeGSMI_I_Lv2PPawlMtrCrntDraw;

        /* End of Outputs for SubSystem: '<S129>/IfActionSubsystem' */
    }

    /* End of If: '<S129>/If' */

    /* Logic: '<S166>/Logical4' */
    VeGSMC_b_Lv1_BothSnsrsFailed = (rtb_TmpSignalConversionAtVePPCR_b_PPawl_ &&
        rtb_TmpSignalConversionAtVePPCR_b_PPaw_m);

    /* Logic: '<S169>/Logical35' incorporates:
     *  Constant: '<S205>/Constant'
     *  Constant: '<S206>/Constant'
     *  RelationalOperator: '<S169>/Comparison19'
     *  RelationalOperator: '<S169>/Comparison20'
     */
    VeGSMC_b_HBrdgFlt = ((((uint32)VeGSMI_e_Lv2HBridgeDiagInfo) !=
                          CeGSMR_e_NoFault) && (((uint32)
                           VeGSMI_e_Lv2HBridgeDiagInfo) != CeGSMR_e_NotTested));

    /* RelationalOperator: '<S169>/Comparison14' incorporates:
     *  Constant: '<S210>/Constant'
     */
    VeGSMC_b_HBrdgFlt_Rst = (((uint32)VeGSMI_e_Lv2HBridgeDiagInfo) ==
        CeGSMR_e_NoFault);

    /* Logic: '<S236>/OR1' incorporates:
     *  Logic: '<S236>/NOT'
     *  Logic: '<S236>/OR'
     *  UnitDelay: '<S236>/Unit Delay1'
     */
    GSMR_ac_DW.VeGSMR_b_HBridgeFltDetcd_Prev_prev = ((VeGSMC_b_HBrdgFlt) ||
        ((!VeGSMC_b_HBrdgFlt_Rst) &&
         (GSMR_ac_DW.VeGSMR_b_HBridgeFltDetcd_Prev_prev)));

    /* Switch: '<S166>/Switch' incorporates:
     *  Constant: '<S181>/Calib'
     *  Constant: '<S351>/Calib'
     *  Switch: '<S8>/Switch3'
     */
    if (KeGSMR_b_ToParkNotPossibleOvrd)
    {
        /* UnitDelay: '<S251>/UnitDelay1' incorporates:
         *  Constant: '<S182>/Calib'
         */
        rtb_TmpSignalConversionAtVeHPMR_b_PropSy =
            KeGSMR_b_ToParkNotPossibleOvrdVal;
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S1>/ProcGSMRInputs' */
        if (KeGSMR_b_OvrdPPawlFltInhibitMtr)
        {
            /* Switch: '<S8>/Switch3' incorporates:
             *  Constant: '<S355>/Calib'
             */
            tmpRead_7 = KeGSMR_b_PPawlFltInhibitMtrOvrdVal;
        }

        /* UnitDelay: '<S251>/UnitDelay1' incorporates:
         *  Constant: '<S317>/Constant'
         *  Constant: '<S318>/Constant'
         *  Constant: '<S319>/Constant'
         *  Constant: '<S320>/Constant'
         *  Logic: '<S166>/Logical2'
         *  Logic: '<S8>/Logical17'
         *  RelationalOperator: '<S8>/Comparison3'
         *  RelationalOperator: '<S8>/Comparison5'
         *  RelationalOperator: '<S8>/Comparison6'
         *  RelationalOperator: '<S8>/Comparison7'
         *  UnitDelay: '<S183>/Unit Delay1'
         *  UnitDelay: '<S236>/Unit Delay1'
         */
        rtb_TmpSignalConversionAtVeHPMR_b_PropSy =
            (((((((((GSMR_ac_DW.VeGSMC_b_ToParkNotPossible_Prev_prev) ||
                    (VeGSMC_b_LV2SnsrFltDetcd)) || (VeGSMC_b_Lv1_BothSnsrsFailed))
                  || rtb_TmpSignalConversionAtVePPCR_b_PPaw_m) ||
                 rtb_TmpSignalConversionAtVePPCR_b_PPUnau) ||
                rtb_TmpSignalConversionAtVePPCR_b_PPawlS) ||
               (GSMR_ac_DW.VeGSMR_b_HBridgeFltDetcd_Prev_prev)) || tmpRead_7) ||
             ((((((uint32)rtb_TmpSignalConversionAtVePPCR_e_PPawlR) ==
                 CePPCR_e_PPAWL_STUCK_ENGAGED) || (((uint32)
                  rtb_TmpSignalConversionAtVePPCR_e_PPawlR) ==
                 CePPCR_e_PPAWL_STUCK_DISENGAGED)) || (((uint32)
                 rtb_TmpSignalConversionAtVePPCR_e_PPawlR) ==
                CePPCR_e_PPAWL_AutoUnlock_Eng)) || (((uint32)
                rtb_TmpSignalConversionAtVePPCR_e_PPawlR) ==
               CePPCR_e_PPAWL_AutoUnlock_DisEng)));

        /* End of Outputs for SubSystem: '<S1>/ProcGSMRInputs' */
    }

    /* End of Switch: '<S166>/Switch' */

    /* Logic: '<S124>/AND' */
    GSMR_ac_B.AND_j = rtb_TmpSignalConversionAtVeHPMR_b_PropSy;

    /* Switch: '<S138>/LV2_Abs_switch' incorporates:
     *  Constant: '<S138>/ConstantValue1'
     *  Product: '<S138>/Product'
     *  RelationalOperator: '<S138>/Comparison'
     */
    if (GSMR_ac_B.Gain < 0.0F)
    {
        rtb_VeGSMI_Pct_BrkTravelDiffAbs_Abs = -GSMR_ac_B.Gain;
    }
    else
    {
        rtb_VeGSMI_Pct_BrkTravelDiffAbs_Abs = GSMR_ac_B.Gain;
    }

    /* End of Switch: '<S138>/LV2_Abs_switch' */

    /* RelationalOperator: '<S125>/Comparison2' incorporates:
     *  Constant: '<S137>/Calib'
     */
    VeGSMC_b_SpeedOkToEnblEPB = (rtb_VeGSMI_Pct_BrkTravelDiffAbs_Abs <=
        KeGSMR_v_SpdThsh_EPBReq);

    /* RelationalOperator: '<S125>/Comparison20' incorporates:
     *  Constant: '<S130>/Constant'
     */
    VeGSMC_b_Lv1InPark = (((uint32)VeGSMI_e_Lv2Lv1VldtdTransRngSt) ==
                          CeTRGR_e_TransRangePark);

    /* RelationalOperator: '<S166>/Comparison4' incorporates:
     *  RelationalOperator: '<S128>/Comparison10'
     *  RelationalOperator: '<S128>/Comparison11'
     *  RelationalOperator: '<S128>/Comparison12'
     *  RelationalOperator: '<S128>/Comparison9'
     *  RelationalOperator: '<S166>/Comparison6'
     *  RelationalOperator: '<S166>/Comparison7'
     *  RelationalOperator: '<S166>/Comparison8'
     *  RelationalOperator: '<S166>/Comparison9'
     *  Switch: '<S165>/Switch1'
     *  Switch: '<S194>/Switch1'
     *  UnitDelay: '<S169>/UnitDelay9'
     */
    GSMR_ac_DW.VeGSMR_e_PPawlSysSts_Prev =
        GSMR_ac_DW.VeGSMR_e_PPawlSysStateDlyd_Prev;

    /* UnitDelay: '<S259>/UnitDelay1' incorporates:
     *  Constant: '<S177>/Constant'
     *  RelationalOperator: '<S166>/Comparison7'
     */
    rtb_VeGSMR_b_OTN_NLock = (((uint32)GSMR_ac_DW.VeGSMR_e_PPawlSysSts_Prev) ==
        CeGSMR_e_PPAWL_Engaged);

    /* Logic: '<S125>/Logical' incorporates:
     *  Constant: '<S135>/Calib'
     */
    rtb_TmpSignalConversionAtVePPCR_b_PPUnau =
        (((((GSMR_ac_B.VeGSMR_b_Lv2DrvReq_P_Obsrvd) && rtb_VeGSMR_b_OTN_NLock) &&
           (VeGSMC_b_Lv1InPark)) && (VeGSMC_b_SpeedOkToEnblEPB)) &&
         (KeGSMR_b_EnblEPBApplyDet));

    /* Outputs for Atomic SubSystem: '<S125>/LV2_Turn_On_Delay_Sample' */
    /* Switch: '<S140>/LV2Switch' incorporates:
     *  Constant: '<S134>/Calib'
     *  Constant: '<S140>/ConstantValue'
     *  Constant: '<S140>/ConstantValue1'
     *  Logic: '<S140>/OR'
     *  Logic: '<S140>/OR1'
     *  Logic: '<S161>/AND1'
     *  Logic: '<S161>/OR2'
     *  MinMax: '<S140>/Minimum'
     *  Sum: '<S140>/Summation'
     *  UnitDelay: '<S140>/UnitDelay1'
     *  UnitDelay: '<S161>/UnitDelay'
     */
    if ((!rtb_TmpSignalConversionAtVePPCR_b_PPUnau) ||
            (rtb_TmpSignalConversionAtVePPCR_b_PPUnau &&
             (!GSMR_ac_DW.VeGSMC_b_VehInParkCnfrmCntr_prev)))
    {
        GSMR_ac_DW.VeGSMC_Cnt_VehInParkCnfrmCntr_prev = 0U;
    }
    else if (KeGSMR_Cnt_VehInPrkCnfrmDly < ((uint16)(((uint32)
                GSMR_ac_DW.VeGSMC_Cnt_VehInParkCnfrmCntr_prev) + 1U)))
    {
        /* MinMax: '<S140>/Minimum' incorporates:
         *  Constant: '<S134>/Calib'
         */
        GSMR_ac_DW.VeGSMC_Cnt_VehInParkCnfrmCntr_prev =
            KeGSMR_Cnt_VehInPrkCnfrmDly;
    }
    else
    {
        /* MinMax: '<S140>/Minimum' incorporates:
         *  Constant: '<S140>/ConstantValue'
         *  Sum: '<S140>/Summation'
         *  UnitDelay: '<S140>/UnitDelay1'
         */
        GSMR_ac_DW.VeGSMC_Cnt_VehInParkCnfrmCntr_prev = (uint16)(((uint32)
            GSMR_ac_DW.VeGSMC_Cnt_VehInParkCnfrmCntr_prev) + 1U);
    }

    /* End of Switch: '<S140>/LV2Switch' */

    /* Logic: '<S140>/AND' incorporates:
     *  Constant: '<S134>/Calib'
     *  RelationalOperator: '<S140>/GreaterThan'
     *  UnitDelay: '<S140>/UnitDelay1'
     */
    rtb_TmpSignalConversionAtVePPCR_b_PPaw_m =
        (rtb_TmpSignalConversionAtVePPCR_b_PPUnau &&
         (GSMR_ac_DW.VeGSMC_Cnt_VehInParkCnfrmCntr_prev >=
          KeGSMR_Cnt_VehInPrkCnfrmDly));

    /* Update for UnitDelay: '<S161>/UnitDelay' */
    GSMR_ac_DW.VeGSMC_b_VehInParkCnfrmCntr_prev =
        rtb_TmpSignalConversionAtVePPCR_b_PPUnau;

    /* End of Outputs for SubSystem: '<S125>/LV2_Turn_On_Delay_Sample' */

    /* Outputs for Atomic SubSystem: '<S125>/LV2_Turn_On_Delay_Sample2' */
    /* Logic: '<S142>/OR1' incorporates:
     *  Logic: '<S142>/AND'
     *  UnitDelay: '<S125>/UnitDelay'
     */
    rtb_VeGSMC_b_ToParkVehicleTOSRMetIntmnt = !GSMR_ac_DW.default_no_name;

    /* Switch: '<S142>/LV2Switch' incorporates:
     *  Constant: '<S132>/Calib'
     *  Constant: '<S142>/ConstantValue'
     *  Constant: '<S142>/ConstantValue1'
     *  Logic: '<S142>/OR'
     *  Logic: '<S142>/OR1'
     *  Logic: '<S163>/AND1'
     *  Logic: '<S163>/OR2'
     *  MinMax: '<S142>/Minimum'
     *  Sum: '<S142>/Summation'
     *  UnitDelay: '<S125>/UnitDelay'
     *  UnitDelay: '<S142>/UnitDelay1'
     *  UnitDelay: '<S163>/UnitDelay'
     */
    if (rtb_VeGSMC_b_ToParkVehicleTOSRMetIntmnt || ((GSMR_ac_DW.default_no_name)
         && (!GSMR_ac_DW.VeGSMC_b_EPBAppliedDly_prev)))
    {
        GSMR_ac_DW.VeGSMC_Cnt_EPBAppliedDly_prev = 0U;
    }
    else if (KeGSMR_Cnt_RstAfterEPBApply < ((uint16)(((uint32)
                GSMR_ac_DW.VeGSMC_Cnt_EPBAppliedDly_prev) + 1U)))
    {
        /* MinMax: '<S142>/Minimum' incorporates:
         *  Constant: '<S132>/Calib'
         */
        GSMR_ac_DW.VeGSMC_Cnt_EPBAppliedDly_prev = KeGSMR_Cnt_RstAfterEPBApply;
    }
    else
    {
        /* MinMax: '<S142>/Minimum' incorporates:
         *  Constant: '<S142>/ConstantValue'
         *  Sum: '<S142>/Summation'
         *  UnitDelay: '<S142>/UnitDelay1'
         */
        GSMR_ac_DW.VeGSMC_Cnt_EPBAppliedDly_prev = (uint16)(((uint32)
            GSMR_ac_DW.VeGSMC_Cnt_EPBAppliedDly_prev) + 1U);
    }

    /* End of Switch: '<S142>/LV2Switch' */
    /* End of Outputs for SubSystem: '<S125>/LV2_Turn_On_Delay_Sample2' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<S7>/Monitor_ePark' */
    /* End of Outputs for SubSystem: '<Root>/GSMR_FUNC_MedTEB' */

    /* Inport: '<Root>/VeSCMR_Cnt_Lv2MtrB_PosCount' */
    (void)Rte_Read_VeSCMR_Cnt_Lv2MtrB_PosCount_Value((&(VeGSMC_Cnt_MtrCntArb)));

    /* Outputs for Function Call SubSystem: '<Root>/GSMR_FUNC_MedTEB' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Monitor_ePark'
     */
    /* Outputs for Atomic SubSystem: '<S7>/Monitor_ePark' */
    /* Outputs for Atomic SubSystem: '<S125>/LV2_Turn_On_Delay_Sample2' */
    /* Update for UnitDelay: '<S163>/UnitDelay' incorporates:
     *  UnitDelay: '<S125>/UnitDelay'
     */
    GSMR_ac_DW.VeGSMC_b_EPBAppliedDly_prev = GSMR_ac_DW.default_no_name;

    /* Logic: '<S125>/Logical6' incorporates:
     *  Constant: '<S132>/Calib'
     *  Logic: '<S142>/AND'
     *  RelationalOperator: '<S142>/GreaterThan'
     *  UnitDelay: '<S142>/UnitDelay1'
     */
    VeGSMC_b_EPBNotRequested = (rtb_VeGSMC_b_ToParkVehicleTOSRMetIntmnt ||
        (GSMR_ac_DW.VeGSMC_Cnt_EPBAppliedDly_prev < KeGSMR_Cnt_RstAfterEPBApply));

    /* End of Outputs for SubSystem: '<S125>/LV2_Turn_On_Delay_Sample2' */

    /* Logic: '<S125>/Logical5' */
    VeGSMC_b_EnblVehMovDet = (rtb_TmpSignalConversionAtVePPCR_b_PPaw_m &&
        (VeGSMC_b_EPBNotRequested));

    /* Switch: '<S131>/Switch1' */
    if (!VeGSMC_b_EnblVehMovDet)
    {
        /* Switch: '<S131>/Switch1' incorporates:
         *  Constant: '<S147>/Calib'
         *  Inport: '<Root>/VeSCMR_Cnt_Lv2MtrB_PosCount'
         */
        VeGSMC_Cnt_MtrCntArb = KeGSMR_K_RstValue;
    }

    /* End of Switch: '<S131>/Switch1' */

    /* Sum: '<S131>/Sum1' incorporates:
     *  UnitDelay: '<S131>/UnitDelay'
     */
    VeGSMC_Cnt_MtrCntDiff = VeGSMC_Cnt_MtrCntArb -
        GSMR_ac_DW.VeGSMC_Cnt_MtrCntArbPrev;

    /* Sum: '<S131>/Sum' incorporates:
     *  UnitDelay: '<S131>/UnitDelay1'
     */
    VeGSMC_Cnt_SumOfDiff = VeGSMC_Cnt_MtrCntDiff + VeGSMC_Cnt_SumOfDiffInCntsArb;

    /* Switch: '<S154>/LV2_Abs_switch' incorporates:
     *  Constant: '<S154>/ConstantValue1'
     *  RelationalOperator: '<S154>/Comparison'
     */
    if (VeGSMC_Cnt_MtrCntDiff < 0.0F)
    {
        /* Switch: '<S154>/LV2_Abs_switch' incorporates:
         *  Product: '<S154>/Product'
         */
        VeGSMI_I_Lv2PPawlMtrCrntDraw = -VeGSMC_Cnt_MtrCntDiff;
    }
    else
    {
        /* Switch: '<S154>/LV2_Abs_switch' */
        VeGSMI_I_Lv2PPawlMtrCrntDraw = VeGSMC_Cnt_MtrCntDiff;
    }

    /* End of Switch: '<S154>/LV2_Abs_switch' */

    /* RelationalOperator: '<S131>/Comparison1' incorporates:
     *  Constant: '<S146>/Calib'
     */
    VeGSMC_b_MtrCntDiff_LoLim = (VeGSMI_I_Lv2PPawlMtrCrntDraw >
        KeGSMR_Cnt_MinNumber);

    /* RelationalOperator: '<S131>/Comparison2' incorporates:
     *  Constant: '<S145>/Calib'
     */
    VeGSMC_b_MtrCntDiff_HiLim = (VeGSMI_I_Lv2PPawlMtrCrntDraw <=
        KeGSMR_Cnt_MaxAllwdDiff);

    /* Logic: '<S131>/Logical1' */
    VeGSMC_b_EnblCnting = (((VeGSMC_b_MtrCntDiff_LoLim) &&
                            (VeGSMC_b_MtrCntDiff_HiLim)) &&
                           (VeGSMC_b_EnblVehMovDet));

    /* Switch: '<S131>/Switch' */
    if (VeGSMC_b_EnblCnting)
    {
        /* Switch: '<S131>/Switch2' incorporates:
         *  Logic: '<S158>/AND1'
         *  Logic: '<S158>/OR2'
         *  UnitDelay: '<S158>/UnitDelay'
         */
        if ((VeGSMC_b_EnblVehMovDet) && (!GSMR_ac_DW.VeGSMC_b_EnblCondPrev_prev))
        {
            /* Switch: '<S131>/Switch' incorporates:
             *  Constant: '<S147>/Calib'
             */
            VeGSMC_Cnt_SumOfDiffInCnts = KeGSMR_K_RstValue;
        }
        else
        {
            /* Switch: '<S131>/Switch' */
            VeGSMC_Cnt_SumOfDiffInCnts = VeGSMC_Cnt_SumOfDiff;
        }

        /* End of Switch: '<S131>/Switch2' */
    }
    else
    {
        /* Switch: '<S131>/Switch' incorporates:
         *  UnitDelay: '<S131>/UnitDelay1'
         */
        VeGSMC_Cnt_SumOfDiffInCnts = VeGSMC_Cnt_SumOfDiffInCntsArb;
    }

    /* End of Switch: '<S131>/Switch' */

    /* Switch: '<S131>/Switch3' incorporates:
     *  Logic: '<S159>/AND1'
     *  Logic: '<S159>/OR2'
     *  UnitDelay: '<S159>/UnitDelay'
     */
    if ((VeGSMC_b_EnblVehMovDet) && (!GSMR_ac_DW.VeGSMC_b_TrigCondPrev_prev))
    {
        /* Switch: '<S131>/Switch3' incorporates:
         *  Constant: '<S147>/Calib'
         */
        VeGSMC_Cnt_SumOfDiffInCntsArb = KeGSMR_K_RstValue;
    }
    else
    {
        /* Switch: '<S131>/Switch3' */
        VeGSMC_Cnt_SumOfDiffInCntsArb = VeGSMC_Cnt_SumOfDiffInCnts;
    }

    /* End of Switch: '<S131>/Switch3' */

    /* Outputs for Atomic SubSystem: '<S131>/LV2_DivideWithProtection' */
    /* Switch: '<S156>/Switch1' incorporates:
     *  Constant: '<S144>/Calib'
     *  Constant: '<S156>/ConstantValue'
     *  Constant: '<S156>/ConstantValue1'
     *  Constant: '<S156>/ConstantValue2'
     *  Constant: '<S156>/ConstantValue3'
     *  Logic: '<S156>/AND'
     *  RelationalOperator: '<S156>/GreaterThanorEqual'
     *  RelationalOperator: '<S156>/GreaterThanorEqual1'
     *  RelationalOperator: '<S156>/NotEqual'
     *  RelationalOperator: '<S156>/NotEqual1'
     *  Switch: '<S156>/Switch2'
     *  Switch: '<S156>/Switch3'
     */
    if ((VeGSMC_Cnt_SumOfDiffInCntsArb != 0.0F) && (KeGSMR_Cnt_CntPerMtrRev !=
            0.0F))
    {
        /* Switch: '<S156>/Switch1' incorporates:
         *  Product: '<S156>/Division'
         */
        VeGSMI_I_Lv2PPawlMtrCrntDraw = VeGSMC_Cnt_SumOfDiffInCntsArb /
            KeGSMR_Cnt_CntPerMtrRev;
    }
    else if (VeGSMC_Cnt_SumOfDiffInCntsArb > 0.0F)
    {
        /* Switch: '<S156>/Switch2' incorporates:
         *  Constant: '<S156>/MAXFLOAT'
         *  Switch: '<S156>/Switch1'
         */
        VeGSMI_I_Lv2PPawlMtrCrntDraw = 3.402823466E+38F;
    }
    else if (VeGSMC_Cnt_SumOfDiffInCntsArb < 0.0F)
    {
        /* Switch: '<S156>/Switch3' incorporates:
         *  Constant: '<S156>/MINFLOAT'
         *  Switch: '<S156>/Switch1'
         *  Switch: '<S156>/Switch2'
         */
        VeGSMI_I_Lv2PPawlMtrCrntDraw = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S156>/Switch1' incorporates:
         *  Constant: '<S156>/ConstantValue4'
         *  Switch: '<S156>/Switch2'
         *  Switch: '<S156>/Switch3'
         */
        VeGSMI_I_Lv2PPawlMtrCrntDraw = 0.0F;
    }

    /* End of Switch: '<S156>/Switch1' */
    /* End of Outputs for SubSystem: '<S131>/LV2_DivideWithProtection' */

    /* Product: '<S131>/Product3' incorporates:
     *  Constant: '<S150>/Calib'
     *  Constant: '<S151>/Calib'
     *  Constant: '<S153>/Calib'
     */
    VeGSMI_I_Lv2PPawlMtrCrntDraw = ((VeGSMI_I_Lv2PPawlMtrCrntDraw *
        KeGSMR_r_All_NoFromNb_NCnDep) * KeGSMR_l_WhlRadius) * KeGSMR_r_TwoPi;

    /* Outputs for Atomic SubSystem: '<S131>/LV2_DivideWithProtection1' */
    /* Switch: '<S157>/Switch1' incorporates:
     *  Constant: '<S152>/Calib'
     *  Constant: '<S157>/ConstantValue'
     *  Constant: '<S157>/ConstantValue1'
     *  Constant: '<S157>/ConstantValue2'
     *  Constant: '<S157>/ConstantValue3'
     *  Logic: '<S157>/AND'
     *  RelationalOperator: '<S157>/GreaterThanorEqual'
     *  RelationalOperator: '<S157>/GreaterThanorEqual1'
     *  RelationalOperator: '<S157>/NotEqual'
     *  RelationalOperator: '<S157>/NotEqual1'
     *  Switch: '<S157>/Switch2'
     *  Switch: '<S157>/Switch3'
     */
    if ((VeGSMI_I_Lv2PPawlMtrCrntDraw != 0.0F) && (KeGSMR_r_FDR != 0.0F))
    {
        /* Switch: '<S157>/Switch1' incorporates:
         *  Product: '<S157>/Division'
         */
        VeGSMI_I_Lv2PPawlMtrCrntDraw /= KeGSMR_r_FDR;
    }
    else if (VeGSMI_I_Lv2PPawlMtrCrntDraw > 0.0F)
    {
        /* Switch: '<S157>/Switch2' incorporates:
         *  Constant: '<S157>/MAXFLOAT'
         *  Switch: '<S157>/Switch1'
         */
        VeGSMI_I_Lv2PPawlMtrCrntDraw = 3.402823466E+38F;
    }
    else if (VeGSMI_I_Lv2PPawlMtrCrntDraw < 0.0F)
    {
        /* Switch: '<S157>/Switch3' incorporates:
         *  Constant: '<S157>/MINFLOAT'
         *  Switch: '<S157>/Switch1'
         *  Switch: '<S157>/Switch2'
         */
        VeGSMI_I_Lv2PPawlMtrCrntDraw = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S157>/Switch1' incorporates:
         *  Constant: '<S157>/ConstantValue4'
         *  Switch: '<S157>/Switch2'
         *  Switch: '<S157>/Switch3'
         */
        VeGSMI_I_Lv2PPawlMtrCrntDraw = 0.0F;
    }

    /* End of Switch: '<S157>/Switch1' */
    /* End of Outputs for SubSystem: '<S131>/LV2_DivideWithProtection1' */

    /* Switch: '<S155>/LV2_Abs_switch' incorporates:
     *  Constant: '<S155>/ConstantValue1'
     *  RelationalOperator: '<S155>/Comparison'
     */
    if (VeGSMI_I_Lv2PPawlMtrCrntDraw < 0.0F)
    {
        /* Switch: '<S155>/LV2_Abs_switch' incorporates:
         *  Product: '<S155>/Product'
         */
        VeGSMI_I_Lv2PPawlMtrCrntDraw = -VeGSMI_I_Lv2PPawlMtrCrntDraw;
    }

    /* End of Switch: '<S155>/LV2_Abs_switch' */

    /* Outputs for Atomic SubSystem: '<S131>/LV2_Hysteresis' */
    /* Switch: '<S160>/Switch1' incorporates:
     *  Constant: '<S149>/Calib'
     *  RelationalOperator: '<S160>/GreaterThan'
     */
    if (VeGSMI_I_Lv2PPawlMtrCrntDraw > KeGSMR_l_MaxdistThrshld_RSP)
    {
        /* Switch: '<S160>/Switch1' incorporates:
         *  Constant: '<S160>/ConstantValue'
         */
        VeGSMC_b_ApplyEPB_Dist = true;
    }
    else
    {
        /* Switch: '<S160>/Switch1' incorporates:
         *  Constant: '<S148>/Calib'
         *  RelationalOperator: '<S160>/GreaterThan1'
         *  UnitDelay: '<S160>/UnitDelay'
         */
        VeGSMC_b_ApplyEPB_Dist = ((VeGSMI_I_Lv2PPawlMtrCrntDraw >=
            KeGSMR_l_MaxdistThrshld_LSP) && (VeGSMC_b_ApplyEPB_Dist));
    }

    /* End of Switch: '<S160>/Switch1' */
    /* End of Outputs for SubSystem: '<S131>/LV2_Hysteresis' */

    /* Logic: '<S143>/AND' */
    VeGSMC_b_ApplyEPB_VehMov = VeGSMC_b_ApplyEPB_Dist;

    /* UnitDelay: '<S162>/UnitDelay' incorporates:
     *  Switch: '<S125>/Switch2'
     */
    rtb_VeGSMC_b_ToParkVehicleTOSRMetIntmnt = ((VeGSMC_b_EnblVehMovDet) &&
        (VeGSMC_b_ApplyEPB_VehMov));

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ProcGSMRInputs'
     */
    /* Logic: '<S125>/Logical1' incorporates:
     *  Logic: '<S8>/Logical14'
     */
    VeGSMC_b_CondsOkToApplyEPB = ((rtb_AND_i || rtb_Compare_k) &&
        rtb_TmpSignalConversionAtVePPCR_b_PPaw_m);

    /* Logic: '<S125>/Logical2' */
    VeGSMC_b_MtrMov_MtrFlt = (rtb_VeGSMC_b_ToParkVehicleTOSRMetIntmnt ||
        (VeGSMC_b_CondsOkToApplyEPB));

    /* Switch: '<S125>/Switch1' incorporates:
     *  UnitDelay: '<S125>/UnitDelay'
     */
    GSMR_ac_DW.default_no_name = ((VeGSMC_b_MtrMov_MtrFlt) &&
        rtb_VeGSMC_b_ToParkVehicleTOSRMetIntmnt);

    /* Outputs for Atomic SubSystem: '<S125>/LV2_Signal_Latch_On' */
    /* Logic: '<S139>/OR2' incorporates:
     *  UnitDelay: '<S139>/Unit Delay1'
     */
    GSMR_ac_DW.VeGSMC_b_Lv1EPBReqDlyd_prev = ((VeGSMI_b_Lv1EPBReq) ||
        (GSMR_ac_DW.VeGSMC_b_Lv1EPBReqDlyd_prev));

    /* End of Outputs for SubSystem: '<S125>/LV2_Signal_Latch_On' */

    /* Logic: '<S125>/Logical4' incorporates:
     *  UnitDelay: '<S139>/Unit Delay1'
     */
    VeGSMC_b_NoLv1EPBReq = !GSMR_ac_DW.VeGSMC_b_Lv1EPBReqDlyd_prev;

    /* Logic: '<S125>/Logical3' incorporates:
     *  UnitDelay: '<S125>/UnitDelay'
     */
    VeGSMC_b_CondOkToSetP1E18 = ((GSMR_ac_DW.default_no_name) &&
        (VeGSMC_b_NoLv1EPBReq));

    /* Outputs for Atomic SubSystem: '<S125>/LV2_Turn_On_Delay_Sample1' */
    /* Switch: '<S141>/LV2Switch' incorporates:
     *  Constant: '<S133>/Calib'
     *  Constant: '<S141>/ConstantValue'
     *  Constant: '<S141>/ConstantValue1'
     *  Logic: '<S141>/OR'
     *  Logic: '<S141>/OR1'
     *  Logic: '<S162>/AND1'
     *  Logic: '<S162>/OR2'
     *  MinMax: '<S141>/Minimum'
     *  Sum: '<S141>/Summation'
     *  UnitDelay: '<S141>/UnitDelay1'
     *  UnitDelay: '<S162>/UnitDelay'
     */
    if ((!VeGSMC_b_CondOkToSetP1E18) || ((VeGSMC_b_CondOkToSetP1E18) &&
            (!GSMR_ac_DW.VeGSMC_b_SetP1E18Dly_prev)))
    {
        GSMR_ac_DW.VeGSMC_Cnt_SetP1E18Dly_prev = 0U;
    }
    else if (KeGSMR_Cnt_SetP1E18Dly < ((uint16)(((uint32)
                GSMR_ac_DW.VeGSMC_Cnt_SetP1E18Dly_prev) + 1U)))
    {
        /* MinMax: '<S141>/Minimum' incorporates:
         *  Constant: '<S133>/Calib'
         */
        GSMR_ac_DW.VeGSMC_Cnt_SetP1E18Dly_prev = KeGSMR_Cnt_SetP1E18Dly;
    }
    else
    {
        /* MinMax: '<S141>/Minimum' incorporates:
         *  Constant: '<S141>/ConstantValue'
         *  Sum: '<S141>/Summation'
         *  UnitDelay: '<S141>/UnitDelay1'
         */
        GSMR_ac_DW.VeGSMC_Cnt_SetP1E18Dly_prev = (uint16)(((uint32)
            GSMR_ac_DW.VeGSMC_Cnt_SetP1E18Dly_prev) + 1U);
    }

    /* End of Switch: '<S141>/LV2Switch' */

    /* Logic: '<S141>/AND' incorporates:
     *  Constant: '<S133>/Calib'
     *  RelationalOperator: '<S141>/GreaterThan'
     *  UnitDelay: '<S141>/UnitDelay1'
     */
    VeGSMC_b_SetP1E18_Arb = ((VeGSMC_b_CondOkToSetP1E18) &&
        (GSMR_ac_DW.VeGSMC_Cnt_SetP1E18Dly_prev >= KeGSMR_Cnt_SetP1E18Dly));

    /* Update for UnitDelay: '<S162>/UnitDelay' */
    GSMR_ac_DW.VeGSMC_b_SetP1E18Dly_prev = VeGSMC_b_CondOkToSetP1E18;

    /* End of Outputs for SubSystem: '<S125>/LV2_Turn_On_Delay_Sample1' */

    /* Logic: '<S125>/Logical7' incorporates:
     *  Constant: '<S136>/Calib'
     */
    VeGSMC_b_SetP1E18 = ((VeGSMC_b_SetP1E18_Arb) && (KeGSMR_b_SetP1E18OnVehMov));

    /* Logic: '<S260>/Logical2' incorporates:
     *  Constant: '<S176>/Constant'
     *  RelationalOperator: '<S166>/Comparison6'
     */
    VeGSMC_b_PPawlMtr_Eng = (rtb_VeGSMR_b_OTN_NLock || (((uint32)
        GSMR_ac_DW.VeGSMR_e_PPawlSysSts_Prev) == CeGSMR_e_PPAWL_Engaging));

    /* Switch: '<S270>/Switch1' */
    VeGSMC_b_PPMtr_EngStValid = ((!VeGSMC_b_PPawlMtr_Eng) ||
        (VeGSMC_b_ToParkVehicleSpdMet));

    /* Logic: '<S128>/Logical1' incorporates:
     *  Logic: '<S128>/Logical5'
     */
    VeGSMC_b_CmndToEngPPawlMtr = (((GSMR_ac_B.VeGSMR_b_Lv2DrvReq_P_Obsrvd) &&
        (VeGSMC_b_ToParkVehicleSpdMet)) || (GSMR_ac_B.VeGSMR_b_OvrdToPark));

    /* Logic: '<S260>/Logical4' */
    VeGSMC_b_PPawlMtr_OK2DisEng = !VeGSMC_b_CmndToEngPPawlMtr;

    /* Logic: '<S260>/Logical10' incorporates:
     *  Constant: '<S178>/Constant'
     *  Constant: '<S179>/Constant'
     *  RelationalOperator: '<S166>/Comparison8'
     *  RelationalOperator: '<S166>/Comparison9'
     */
    VeGSMC_b_PPawlMtr_DisEng = ((((uint32)GSMR_ac_DW.VeGSMR_e_PPawlSysSts_Prev) ==
        CeGSMR_e_PPAWL_Disengaged) || (((uint32)
        GSMR_ac_DW.VeGSMR_e_PPawlSysSts_Prev) == CeGSMR_e_PPAWL_Disengaging));

    /* Switch: '<S271>/Switch1' */
    VeGSMC_b_PPMtr_DisEngStValid = ((!VeGSMC_b_PPawlMtr_DisEng) ||
        (VeGSMC_b_PPawlMtr_OK2DisEng));

    /* UnitDelay: '<S259>/UnitDelay1' incorporates:
     *  Logic: '<S260>/Logical3'
     */
    rtb_VeGSMR_b_OTN_NLock = ((VeGSMC_b_PPMtr_EngStValid) &&
        (VeGSMC_b_PPMtr_DisEngStValid));

    /* Logic: '<S260>/Logical1' */
    VeGSMC_b_RstUndesPPawlFlt = ((((rtb_VeGSMR_b_OTN_NLock ||
        rtb_TmpSignalConversionAtVeHPMR_b_PropSy) ||
        (GSMR_ac_B.VeGSMI_b_ClrDiagCntrTmrs)) || (VeGSMC_b_PPawlMtr_OK2DisEng)) ||
        (VeGSMI_b_DisblMntrs));

    /* Logic: '<S260>/Logical9' */
    VeGSMC_b_InValidPPawlMtrSt = !rtb_VeGSMR_b_OTN_NLock;

    /* Switch: '<S275>/dec_if_Ok_else_inc' incorporates:
     *  Constant: '<S272>/Calib'
     *  MinMax: '<S275>/FixPtMinax'
     *  UnitDelay: '<S275>/UnitDelay2'
     */
    if (VeGSMC_b_InValidPPawlMtrSt)
    {
        /* Sum: '<S275>/Inc_Cntr' incorporates:
         *  Constant: '<S273>/Calib'
         *  UnitDelay: '<S275>/UnitDelay2'
         */
        rtb_VeGSMR_Cnt_UndesPPawlMtrStFlt_Prev_k = (uint8)(((uint32)
            GSMR_ac_DW.VeGSMR_Cnt_UndesPPawlMtrStFlt_Prev_prev) + ((uint32)
            KeGSMR_Cnt_PPMtrSt_Undes_Inc));

        /* Switch: '<S275>/Switch1' incorporates:
         *  RelationalOperator: '<S275>/GreaterThan1'
         *  UnitDelay: '<S275>/UnitDelay2'
         */
        if (rtb_VeGSMR_Cnt_UndesPPawlMtrStFlt_Prev_k <
                GSMR_ac_DW.VeGSMR_Cnt_UndesPPawlMtrStFlt_Prev_prev)
        {
            /* Switch: '<S275>/dec_if_Ok_else_inc' incorporates:
             *  Constant: '<S275>/ConstantValue3'
             */
            rtb_VeGSMR_Cnt_UndesPPawlMtrStFlt_Prev_k = MAX_uint8_T;
        }

        /* End of Switch: '<S275>/Switch1' */
    }
    else
    {
        if (GSMR_ac_DW.VeGSMR_Cnt_UndesPPawlMtrStFlt_Prev_prev <=
                KeGSMR_Cnt_PPMtrSt_Undes_Dec)
        {
            /* MinMax: '<S275>/FixPtMinax' incorporates:
             *  Constant: '<S272>/Calib'
             */
            GSMR_ac_DW.VeGSMR_Cnt_UndesPPawlMtrStFlt_Prev_prev =
                KeGSMR_Cnt_PPMtrSt_Undes_Dec;
        }

        /* Switch: '<S275>/dec_if_Ok_else_inc' incorporates:
         *  Constant: '<S272>/Calib'
         *  Sum: '<S275>/Dec_Cntr'
         */
        rtb_VeGSMR_Cnt_UndesPPawlMtrStFlt_Prev_k = (uint8)
            (GSMR_ac_DW.VeGSMR_Cnt_UndesPPawlMtrStFlt_Prev_prev -
             KeGSMR_Cnt_PPMtrSt_Undes_Dec);
    }

    /* End of Switch: '<S275>/dec_if_Ok_else_inc' */

    /* Switch: '<S275>/Switch3' incorporates:
     *  Constant: '<S274>/Calib'
     *  Constant: '<S275>/ConstantValue2'
     *  Logic: '<S275>/Cntr_fail'
     *  RelationalOperator: '<S275>/Enough_counts_to_Fail'
     *  UnitDelay: '<S275>/UnitDelay1'
     */
    if (VeGSMC_b_RstUndesPPawlFlt)
    {
        GSMR_ac_DW.VeGSMR_b_UndesPPawlMtrStFlt_Prev_prev = false;
    }
    else
    {
        GSMR_ac_DW.VeGSMR_b_UndesPPawlMtrStFlt_Prev_prev =
            ((rtb_VeGSMR_Cnt_UndesPPawlMtrStFlt_Prev_k >=
              KeGSMR_Cnt_PPMtrSt_Undes_Limit) ||
             (GSMR_ac_DW.VeGSMR_b_UndesPPawlMtrStFlt_Prev_prev));
    }

    /* End of Switch: '<S275>/Switch3' */

    /* Logic: '<S128>/Logical3' incorporates:
     *  Constant: '<S257>/Calib'
     */
    VeGSMC_b_SetDTC_VehMovDtctd = ((VeGSMC_b_SetP1E18) &&
        (KeGSMR_b_SetP1E18OnVehMov));

    /* UnitDelay: '<S251>/UnitDelay1' incorporates:
     *  Logic: '<S128>/Logical4'
     *  UnitDelay: '<S275>/UnitDelay1'
     */
    rtb_TmpSignalConversionAtVeHPMR_b_PropSy =
        ((GSMR_ac_DW.VeGSMR_b_UndesPPawlMtrStFlt_Prev_prev) ||
         (VeGSMC_b_SetDTC_VehMovDtctd));

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ProcGSMRInputs'
     */
    /* RelationalOperator: '<S267>/Compare' incorporates:
     *  Constant: '<S267>/Constant'
     *  Gain: '<S375>/Gain'
     *  S-Function (sfix_bitop): '<S251>/Bit6'
     */
    rtb_Compare_k = ((((uint32)tmpRead_c) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S251>/EdgeFalling' */
    /* Logic: '<S262>/AND' incorporates:
     *  Logic: '<S262>/OR1'
     *  UnitDelay: '<S262>/Unit Delay'
     */
    rtb_AND_i = ((!rtb_Compare_k) && (GSMR_ac_DW.UnitDelay_DSTATE_o));

    /* Update for UnitDelay: '<S262>/Unit Delay' */
    GSMR_ac_DW.UnitDelay_DSTATE_o = rtb_Compare_k;

    /* End of Outputs for SubSystem: '<S251>/EdgeFalling' */

    /* Logic: '<S251>/passDBCparam2' incorporates:
     *  Constant: '<S256>/Calib'
     *  Logic: '<S128>/Logical7'
     *  UnitDelay: '<S45>/UnitDelay1'
     */
    VeGSMC_b_Lv2ePARK_DBC_Reset = ((((GSMR_ac_DW.VeGSMR_b_KeyOnOff_prev) ||
        (GSMR_ac_B.VeGSMI_b_ClrDiagCntrTmrs)) || (KeGSMR_b_OvrdReset_ePARK)) ||
        rtb_AND_i);

    /* Sum: '<S251>/Inc_Cntr' incorporates:
     *  Constant: '<S255>/Calib'
     */
    VeGSMC_Cnt_IncDec_Inc_Cntr = (uint8)(((uint32)VeGSMC_Cnt_IncDecCntrVal) +
        ((uint32)KeGSMR_Cnt_P1E18IncCntrVal));

    /* Switch: '<S251>/Switch1' incorporates:
     *  RelationalOperator: '<S251>/GreaterThan1'
     */
    if (VeGSMC_Cnt_IncDec_Inc_Cntr < VeGSMC_Cnt_IncDecCntrVal)
    {
        /* Switch: '<S251>/Switch1' incorporates:
         *  Constant: '<S251>/ConstantValue3'
         */
        VeGSMC_Cnt_IncDec_Intermediate = MAX_uint8_T;
    }
    else
    {
        /* Switch: '<S251>/Switch1' */
        VeGSMC_Cnt_IncDec_Intermediate = VeGSMC_Cnt_IncDec_Inc_Cntr;
    }

    /* End of Switch: '<S251>/Switch1' */

    /* Switch: '<S266>/Switch' incorporates:
     *  Constant: '<S254>/Calib'
     *  RelationalOperator: '<S266>/Comparison'
     */
    if (VeGSMC_Cnt_IncDecCntrVal > KeGSMR_Cnt_P1E18DecCntrVal)
    {
        /* Switch: '<S266>/Switch' */
        VeGSMC_Cnt_DecCntrInput1 = VeGSMC_Cnt_IncDecCntrVal;
    }
    else
    {
        /* Switch: '<S266>/Switch' */
        VeGSMC_Cnt_DecCntrInput1 = KeGSMR_Cnt_P1E18DecCntrVal;
    }

    /* End of Switch: '<S266>/Switch' */

    /* Sum: '<S251>/Dec_Cntr' incorporates:
     *  Constant: '<S254>/Calib'
     */
    VeGSMC_Cnt_IncDec_dec_cntr = (uint8)(VeGSMC_Cnt_DecCntrInput1 -
        KeGSMR_Cnt_P1E18DecCntrVal);

    /* RelationalOperator: '<S128>/Comparison5' incorporates:
     *  RelationalOperator: '<S128>/Comparison6'
     *  RelationalOperator: '<S128>/Comparison7'
     *  RelationalOperator: '<S128>/Comparison8'
     *  UnitDelay: '<S128>/UnitDelay'
     */
    VeGSMC_b_Curr_Eng_tmp = GSMR_ac_DW.VeGSMR_b_ParkPawlSysSt;

    /* Logic: '<S128>/Logical16' incorporates:
     *  Constant: '<S243>/Constant'
     *  Constant: '<S244>/Constant'
     *  RelationalOperator: '<S128>/Comparison5'
     *  RelationalOperator: '<S128>/Comparison7'
     */
    VeGSMC_b_Curr_Eng = ((((uint32)VeGSMC_b_Curr_Eng_tmp) ==
                          CeGSMR_e_PPAWL_Engaging) || (((uint32)
                           VeGSMC_b_Curr_Eng_tmp) == CeGSMR_e_PPAWL_Engaged));

    /* Logic: '<S128>/Logical6' incorporates:
     *  Constant: '<S249>/Constant'
     *  Constant: '<S250>/Constant'
     *  RelationalOperator: '<S128>/Comparison10'
     *  RelationalOperator: '<S128>/Comparison12'
     */
    VeGSMC_b_Prev_DisEng = ((((uint32)GSMR_ac_DW.VeGSMR_e_PPawlSysSts_Prev) ==
        CeGSMR_e_PPAWL_Disengaging) || (((uint32)
        GSMR_ac_DW.VeGSMR_e_PPawlSysSts_Prev) == CeGSMR_e_PPAWL_Disengaged));

    /* Logic: '<S128>/Logical14' */
    VeGSMC_b_ChngInSt_Eng = ((VeGSMC_b_Curr_Eng) && (VeGSMC_b_Prev_DisEng));

    /* Logic: '<S128>/Logical17' incorporates:
     *  Constant: '<S245>/Constant'
     *  Constant: '<S246>/Constant'
     *  RelationalOperator: '<S128>/Comparison6'
     *  RelationalOperator: '<S128>/Comparison8'
     */
    VeGSMC_b_Curr_DisEng = ((((uint32)VeGSMC_b_Curr_Eng_tmp) ==
        CeGSMR_e_PPAWL_Disengaging) || (((uint32)VeGSMC_b_Curr_Eng_tmp) ==
        CeGSMR_e_PPAWL_Disengaged));

    /* Logic: '<S128>/Logical10' incorporates:
     *  Constant: '<S247>/Constant'
     *  Constant: '<S248>/Constant'
     *  RelationalOperator: '<S128>/Comparison11'
     *  RelationalOperator: '<S128>/Comparison9'
     */
    VeGSMC_b_Prev_Eng = ((((uint32)GSMR_ac_DW.VeGSMR_e_PPawlSysSts_Prev) ==
                          CeGSMR_e_PPAWL_Engaging) || (((uint32)
                           GSMR_ac_DW.VeGSMR_e_PPawlSysSts_Prev) ==
                          CeGSMR_e_PPAWL_Engaged));

    /* Logic: '<S128>/Logical15' */
    VeGSMC_b_ChngInSt_DisEng = ((VeGSMC_b_Curr_DisEng) && (VeGSMC_b_Prev_Eng));

    /* Logic: '<S128>/Logical2' */
    VeGSMC_b_ChngInSt = ((VeGSMC_b_ChngInSt_Eng) || (VeGSMC_b_ChngInSt_DisEng));

    /* Logic: '<S259>/OR1' incorporates:
     *  Logic: '<S259>/NOT'
     *  Logic: '<S259>/OR'
     *  UnitDelay: '<S128>/UnitDelay1'
     *  UnitDelay: '<S259>/UnitDelay1'
     */
    VeGSMC_b_ChngInSt_Cnfrm = ((VeGSMC_b_ChngInSt) ||
        ((!GSMR_ac_DW.VeGSMC_b_TestPassEnblCnfrm_Prev) &&
         (VeGSMC_b_ChngInSt_Cnfrm)));

    /* Outputs for Atomic SubSystem: '<S128>/LV2_Counter_Reset_Enabled1' */
    /* Switch: '<S258>/Switch1' incorporates:
     *  Switch: '<S258>/Switch2'
     *  UnitDelay: '<S128>/UnitDelay1'
     */
    if (GSMR_ac_DW.VeGSMC_b_TestPassEnblCnfrm_Prev)
    {
        /* Switch: '<S258>/Switch1' incorporates:
         *  Constant: '<S258>/ConstantValue2'
         */
        VeGSMC_Cnt_TestPassEnblCntrVal = 0U;
    }
    else
    {
        if (VeGSMC_b_ChngInSt_Cnfrm)
        {
            /* Switch: '<S258>/Switch1' incorporates:
             *  Constant: '<S258>/ConstantValue1'
             *  Sum: '<S258>/Subtraction'
             *  Switch: '<S258>/Switch2'
             *  UnitDelay: '<S258>/UnitDelay'
             */
            VeGSMC_Cnt_TestPassEnblCntrVal = (uint16)(((uint32)
                VeGSMC_Cnt_TestPassEnblCntrVal) + 1U);
        }
    }

    /* End of Switch: '<S258>/Switch1' */
    /* End of Outputs for SubSystem: '<S128>/LV2_Counter_Reset_Enabled1' */

    /* RelationalOperator: '<S128>/Comparison2' incorporates:
     *  Constant: '<S252>/Calib'
     *  UnitDelay: '<S128>/UnitDelay1'
     */
    GSMR_ac_DW.VeGSMC_b_TestPassEnblCnfrm_Prev = (VeGSMC_Cnt_TestPassEnblCntrVal
        >= KeGSMC_Cnt_ChngOfStDbncTmr);

    /* Logic: '<S128>/Logical9' */
    VeGSMC_b_NoPPawlFailure = !rtb_TmpSignalConversionAtVeHPMR_b_PropSy;

    /* Logic: '<S128>/Logical8' incorporates:
     *  UnitDelay: '<S128>/UnitDelay1'
     */
    VeGSMC_b_PPawlInsrtPassInP = ((GSMR_ac_DW.VeGSMC_b_TestPassEnblCnfrm_Prev) &&
        (VeGSMC_b_NoPPawlFailure));

    /* Switch: '<S251>/Switch4' */
    if (VeGSMC_b_PPawlInsrtPassInP)
    {
        /* Switch: '<S251>/Switch4' */
        VeGSMC_Cnt_IncDec_Intermediate1 = VeGSMC_Cnt_IncDec_dec_cntr;
    }
    else
    {
        /* Switch: '<S251>/Switch4' */
        VeGSMC_Cnt_IncDec_Intermediate1 = VeGSMC_Cnt_IncDecCntrVal;
    }

    /* End of Switch: '<S251>/Switch4' */

    /* Switch: '<S251>/dec_if_Ok_else_inc' */
    if (rtb_TmpSignalConversionAtVeHPMR_b_PropSy)
    {
        /* Switch: '<S251>/dec_if_Ok_else_inc' */
        VeGSMC_Cnt_IncDecCntr_Cmpr = VeGSMC_Cnt_IncDec_Intermediate;
    }
    else
    {
        /* Switch: '<S251>/dec_if_Ok_else_inc' */
        VeGSMC_Cnt_IncDecCntr_Cmpr = VeGSMC_Cnt_IncDec_Intermediate1;
    }

    /* End of Switch: '<S251>/dec_if_Ok_else_inc' */

    /* Logic: '<S251>/Cntr_fail' incorporates:
     *  Constant: '<S253>/Calib'
     *  RelationalOperator: '<S251>/Enough_counts_to_Fail'
     *  UnitDelay: '<S251>/UnitDelay1'
     */
    VeGSMC_b_IncDecCntrLimRchd = ((VeGSMC_Cnt_IncDecCntr_Cmpr >=
        KeGSMR_Cnt_P1E18CntrLim) || (GSMR_ac_DW.UnitDelay1_DSTATE));

    /* Switch: '<S251>/Switch3' incorporates:
     *  UnitDelay: '<S251>/UnitDelay1'
     */
    GSMR_ac_DW.UnitDelay1_DSTATE = ((!VeGSMC_b_Lv2ePARK_DBC_Reset) &&
        (VeGSMC_b_IncDecCntrLimRchd));

    /* Logic: '<S123>/Logical1' incorporates:
     *  Logic: '<S128>/Logical_Operator'
     *  UnitDelay: '<S251>/UnitDelay1'
     */
    VeGSMC_b_PPStCanNotbeDtrmnd = (rtb_TmpSignalConversionAtVeHPMR_b_PropSy ||
        (GSMR_ac_DW.UnitDelay1_DSTATE));

    /* Switch: '<S165>/Switch1' */
    if (VeGSMC_b_PPStCanNotbeDtrmnd)
    {
        /* Switch: '<S165>/Switch1' incorporates:
         *  Constant: '<S164>/Constant'
         */
        GSMR_ac_B.DataTypeConversion_g = CeGSMR_e_PPAWL_NotDetermined;
    }
    else
    {
        /* Switch: '<S165>/Switch1' */
        GSMR_ac_B.DataTypeConversion_g = GSMR_ac_DW.VeGSMR_e_PPawlSysSts_Prev;
    }

    /* Switch: '<S251>/Switch2' incorporates:
     *  Switch: '<S261>/Switch1'
     */
    if (VeGSMC_b_Lv2ePARK_DBC_Reset)
    {
        /* Switch: '<S251>/Switch2' incorporates:
         *  Constant: '<S251>/ConstantValue1'
         */
        VeGSMC_Cnt_IncDecCntrVal = 0U;

        /* Switch: '<S261>/Switch1' incorporates:
         *  Constant: '<S264>/Constant'
         */
        VeGSMC_e_Lv2ePARK_DBCStatus = CeDFIB_e_Init;
    }
    else
    {
        /* Switch: '<S251>/Switch2' */
        VeGSMC_Cnt_IncDecCntrVal = VeGSMC_Cnt_IncDecCntr_Cmpr;

        /* Switch: '<S261>/Switch2' incorporates:
         *  Constant: '<S268>/Constant'
         *  RelationalOperator: '<S268>/Compare'
         *  Switch: '<S261>/Switch3'
         *  UnitDelay: '<S251>/UnitDelay1'
         */
        if (GSMR_ac_DW.UnitDelay1_DSTATE)
        {
            /* Switch: '<S261>/Switch1' incorporates:
             *  Constant: '<S263>/Constant'
             *  Switch: '<S261>/Switch2'
             */
            VeGSMC_e_Lv2ePARK_DBCStatus = CeDFIB_e_Fail;
        }
        else if (((sint32)VeGSMC_Cnt_IncDecCntrVal) == 0)
        {
            /* Switch: '<S261>/Switch3' incorporates:
             *  Constant: '<S265>/Constant'
             *  Switch: '<S261>/Switch1'
             */
            VeGSMC_e_Lv2ePARK_DBCStatus = CeDFIB_e_Pass;
        }
        else
        {
            /* Switch: '<S261>/Switch1' incorporates:
             *  Switch: '<S261>/Switch3'
             *  UnitDelay: '<S261>/UnitDelay'
             */
            VeGSMC_e_Lv2ePARK_DBCStatus = GSMR_ac_DW.UnitDelay_DSTATE;
        }

        /* End of Switch: '<S261>/Switch2' */
    }

    /* End of Switch: '<S251>/Switch2' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/GSMD'
     */
    /* DataTypeConversion: '<S261>/UNIT8' incorporates:
     *  Switch: '<S261>/Switch1'
     *  Switch: '<S3>/Switch1'
     *  UnitDelay: '<S261>/UnitDelay'
     */
    UnitDelay_DSTATE_tmp = VeGSMC_e_Lv2ePARK_DBCStatus;
    GSMR_ac_DW.UnitDelay_DSTATE = (uint8)VeGSMC_e_Lv2ePARK_DBCStatus;

    /* Switch: '<S275>/Switch2' */
    if (VeGSMC_b_RstUndesPPawlFlt)
    {
        /* MinMax: '<S275>/FixPtMinax' incorporates:
         *  Constant: '<S275>/ConstantValue1'
         *  UnitDelay: '<S275>/UnitDelay2'
         */
        GSMR_ac_DW.VeGSMR_Cnt_UndesPPawlMtrStFlt_Prev_prev = 0U;
    }
    else
    {
        /* MinMax: '<S275>/FixPtMinax' incorporates:
         *  UnitDelay: '<S275>/UnitDelay2'
         */
        GSMR_ac_DW.VeGSMR_Cnt_UndesPPawlMtrStFlt_Prev_prev =
            rtb_VeGSMR_Cnt_UndesPPawlMtrStFlt_Prev_k;
    }

    /* End of Switch: '<S275>/Switch2' */

    /* UnitDelay: '<S129>/UnitDelay3' */
    VeGSMC_b_RstSnsrMntrDlyd = GSMR_ac_DW.VeGSMC_b_RstSnsrMntrPrev;

    /* Update for UnitDelay: '<S169>/UnitDelay8' incorporates:
     *  UnitDelay: '<S392>/UnitDelay'
     */
    GSMR_ac_DW.VeGSMI_U_Lv2PPMtrPosSnsrFB_Prev =
        GSMR_ac_DW.VeGSMI_U_Lv2PPMtrPosSnsrFB_Filtd_prev;

    /* Update for UnitDelay: '<S184>/UnitDelay1' incorporates:
     *  Switch: '<S194>/Switch1'
     *  UnitDelay: '<S169>/UnitDelay9'
     */
    GSMR_ac_DW.VeGSMR_e_PPawlSysSt_Prev =
        GSMR_ac_DW.VeGSMR_e_PPawlSysStateDlyd_Prev;

    /* Update for UnitDelay: '<S129>/UnitDelay1' */
    GSMR_ac_DW.VeGSMC_b_RstSnsrMntrDlySecPrev = VeGSMC_b_RstSnsrMntrDlyd;

    /* Update for UnitDelay: '<S159>/UnitDelay' */
    GSMR_ac_DW.VeGSMC_b_TrigCondPrev_prev = VeGSMC_b_EnblVehMovDet;

    /* Update for UnitDelay: '<S158>/UnitDelay' */
    GSMR_ac_DW.VeGSMC_b_EnblCondPrev_prev = VeGSMC_b_EnblVehMovDet;

    /* Update for UnitDelay: '<S131>/UnitDelay' */
    GSMR_ac_DW.VeGSMC_Cnt_MtrCntArbPrev = VeGSMC_Cnt_MtrCntArb;

    /* Update for UnitDelay: '<S128>/UnitDelay' incorporates:
     *  Switch: '<S194>/Switch1'
     *  UnitDelay: '<S169>/UnitDelay9'
     */
    GSMR_ac_DW.VeGSMR_b_ParkPawlSysSt =
        GSMR_ac_DW.VeGSMR_e_PPawlSysStateDlyd_Prev;

    /* Update for UnitDelay: '<S129>/UnitDelay3' */
    GSMR_ac_DW.VeGSMC_b_RstSnsrMntrPrev = VeGSMC_b_SnsrStatusDet;

    /* End of Outputs for SubSystem: '<S7>/Monitor_ePark' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/GSMD'
     */
    /* Switch: '<S3>/Switch1' incorporates:
     *  Constant: '<S12>/Constant'
     */
    if (GSMR_ac_B.VeGSMI_b_ClrDiagCntrTmrs)
    {
        UnitDelay_DSTATE_tmp = CeDFIB_e_Init;
    }

    /* SwitchCase: '<S3>/SwitchCase1' */
    switch (UnitDelay_DSTATE_tmp)
    {
      case CeDFIB_e_Init:
        /* Outputs for IfAction SubSystem: '<S3>/Event_CM_eParkPerf_ReportTestInit' incorporates:
         *  ActionPort: '<S14>/ActionPort'
         */
        /* DataStoreWrite: '<S14>/FaultSts_CM_eParkPerf' incorporates:
         *  Constant: '<S20>/Constant'
         */
        GSMR_ac_DW.FaultSts_CM_eParkPerf = CeDFIB_e_Init;

        /* End of Outputs for SubSystem: '<S3>/Event_CM_eParkPerf_ReportTestInit' */
        break;

      case CeDFIB_e_Fail:
        /* Outputs for IfAction SubSystem: '<S3>/Event_CM_eParkPerf_ReportTestFailed' incorporates:
         *  ActionPort: '<S13>/ActionPort'
         */
        /* DataStoreWrite: '<S13>/FaultSts_CM_eParkPerf' incorporates:
         *  Constant: '<S19>/Constant'
         */
        GSMR_ac_DW.FaultSts_CM_eParkPerf = CeDFIB_e_Fail;

        /* End of Outputs for SubSystem: '<S3>/Event_CM_eParkPerf_ReportTestFailed' */
        break;

      case CeDFIB_e_Pass:
        /* Outputs for IfAction SubSystem: '<S3>/Event_CM_eParkPerf_ReportTestPassed' incorporates:
         *  ActionPort: '<S15>/ActionPort'
         */
        /* DataStoreWrite: '<S15>/FaultSts_CM_eParkPerf' incorporates:
         *  Constant: '<S21>/Constant'
         */
        GSMR_ac_DW.FaultSts_CM_eParkPerf = CeDFIB_e_Pass;

        /* End of Outputs for SubSystem: '<S3>/Event_CM_eParkPerf_ReportTestPassed' */
        break;

      default:
        /* no actions */
        break;
    }

    /* End of SwitchCase: '<S3>/SwitchCase1' */

    /* Switch: '<S3>/Switch' incorporates:
     *  Constant: '<S11>/Constant'
     *  Switch: '<S83>/Switch1'
     */
    if (GSMR_ac_B.VeGSMI_b_ClrDiagCntrTmrs)
    {
        UnitDelay_DSTATE_tmp = CeDFIB_e_Init;
    }
    else
    {
        UnitDelay_DSTATE_tmp = VeGSMC_e_Lv2PRND_DBCStatus;
    }

    /* End of Switch: '<S3>/Switch' */

    /* SwitchCase: '<S3>/SwitchCase' */
    switch (UnitDelay_DSTATE_tmp)
    {
      case CeDFIB_e_Init:
        /* Outputs for IfAction SubSystem: '<S3>/Event_CM_eShiftPerf_ReportTestInit' incorporates:
         *  ActionPort: '<S17>/ActionPort'
         */
        /* DataStoreWrite: '<S17>/FaultSts_CM_eShiftPerf' incorporates:
         *  Constant: '<S23>/Constant'
         */
        GSMR_ac_DW.FaultSts_CM_eShiftPerf = CeDFIB_e_Init;

        /* End of Outputs for SubSystem: '<S3>/Event_CM_eShiftPerf_ReportTestInit' */
        break;

      case CeDFIB_e_Fail:
        /* Outputs for IfAction SubSystem: '<S3>/Event_CM_eShiftPerf_ReportTestFailed' incorporates:
         *  ActionPort: '<S16>/ActionPort'
         */
        /* DataStoreWrite: '<S16>/FaultSts_CM_eShiftPerf' incorporates:
         *  Constant: '<S22>/Constant'
         */
        GSMR_ac_DW.FaultSts_CM_eShiftPerf = CeDFIB_e_Fail;

        /* End of Outputs for SubSystem: '<S3>/Event_CM_eShiftPerf_ReportTestFailed' */
        break;

      case CeDFIB_e_Pass:
        /* Outputs for IfAction SubSystem: '<S3>/Event_CM_eShiftPerf_ReportTestPassed' incorporates:
         *  ActionPort: '<S18>/ActionPort'
         */
        /* DataStoreWrite: '<S18>/FaultSts_CM_eShiftPerf' incorporates:
         *  Constant: '<S24>/Constant'
         */
        GSMR_ac_DW.FaultSts_CM_eShiftPerf = CeDFIB_e_Pass;

        /* End of Outputs for SubSystem: '<S3>/Event_CM_eShiftPerf_ReportTestPassed' */
        break;

      default:
        /* no actions */
        break;
    }

    /* End of SwitchCase: '<S3>/SwitchCase' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Monitor_ePark'
     */
    /* Outputs for Atomic SubSystem: '<S7>/Monitor_ePark' */
    /* Outport: '<Root>/VeGSMR_b_ApplyEPB' incorporates:
     *  Gain: '<S125>/Gain'
     *  SignalConversion generated from: '<S1>/VeGSMC_b_ApplyEPB'
     *  UnitDelay: '<S125>/UnitDelay'
     */
    (void)Rte_Write_VeGSMR_b_ApplyEPB_Value(GSMR_ac_DW.default_no_name);

    /* End of Outputs for SubSystem: '<S7>/Monitor_ePark' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeGSMR_b_Lv2PPawlSnsrFltCnfrmd' incorporates:
     *  SignalConversion generated from: '<S1>/VeGSMC_b_Lv2PPawlSnsrFltCnfrmd'
     */
    (void)Rte_Write_VeGSMR_b_Lv2PPawlSnsrFltCnfrmd_Value
        (VeGSMC_b_LV2SnsrFltDetcd);

    /* Outport: '<Root>/VeGSMR_b_MissedNeutralReqFlt' incorporates:
     *  SignalConversion generated from: '<S1>/VeGSMC_b_MissedNeutralReqFlt'
     */
    (void)Rte_Write_VeGSMR_b_MissedNeutralReqFlt_Value
        (GSMR_ac_B.VeGSMR_b_MissedNeutralReqFlt);

    /* Outport: '<Root>/VeGSMR_b_MissedParkReqFlt' incorporates:
     *  SignalConversion generated from: '<S1>/VeGSMC_b_MissedParkReqFlt'
     */
    (void)Rte_Write_VeGSMR_b_MissedParkReqFlt_Value
        (GSMR_ac_B.VeGSMR_b_MissedParkReqFlt);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Monitor_ePark'
     */
    /* Outputs for Atomic SubSystem: '<S7>/Monitor_ePark' */
    /* Outport: '<Root>/VeGSMR_b_PpawlInsrtFailed' incorporates:
     *  Logic: '<S128>/Logical_Operator'
     *  SignalConversion generated from: '<S1>/VeGSMC_b_PpawlInsrtFailed'
     */
    (void)Rte_Write_VeGSMR_b_PpawlInsrtFailed_Value
        (rtb_TmpSignalConversionAtVeHPMR_b_PropSy);

    /* End of Outputs for SubSystem: '<S7>/Monitor_ePark' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ProcInputsForMonitor'
     */
    /* Outputs for Atomic SubSystem: '<S9>/ProcForPPawlMntr' */
    /* Outputs for Atomic SubSystem: '<S397>/Dtmn_OTP_OTN' */
    /* Outport: '<Root>/VeGSMR_b_SecureVehicle' incorporates:
     *  Logic: '<S406>/Logical2'
     *  SignalConversion generated from: '<S1>/VeGSMC_b_SecureVehicle'
     */
    (void)Rte_Write_VeGSMR_b_SecureVehicle_Value((VeGSMC_b_OTP_Arb) ||
        (GSMR_ac_B.VeGSMR_b_Lv2DrvReq_P_Obsrvd));

    /* End of Outputs for SubSystem: '<S397>/Dtmn_OTP_OTN' */
    /* End of Outputs for SubSystem: '<S9>/ProcForPPawlMntr' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeGSMR_b_PpawlInsrtMntrFailed' incorporates:
     *  SignalConversion generated from: '<S1>/VeGSMC_b_SetP1E18_FailFlag'
     *  UnitDelay: '<S251>/UnitDelay1'
     */
    (void)Rte_Write_VeGSMR_b_PpawlInsrtMntrFailed_Value
        (GSMR_ac_DW.UnitDelay1_DSTATE);

    /* Outport: '<Root>/VeGSMR_e_VldtdPPawlState' incorporates:
     *  SignalConversion generated from: '<S1>/VeGSMC_e_VldtdPPawlState'
     *  Switch: '<S165>/Switch1'
     */
    (void)Rte_Write_VeGSMR_e_VldtdPPawlState_Value
        (GSMR_ac_B.DataTypeConversion_g);

    /* Outport: '<Root>/VeGSMR_b_OutOfPInValid' incorporates:
     *  SignalConversion generated from: '<S1>/VeGSMR_b_OutOfPInValid'
     *  UnitDelay: '<S109>/UnitDelay1'
     */
    (void)Rte_Write_VeGSMR_b_OutOfPInValid_Value
        (GSMR_ac_DW.VeGSMR_b_OutOfPInValid_Prev_prev);

    /* Outport: '<Root>/VeGSMR_b_PPawl_InVldEngCmd' incorporates:
     *  SignalConversion generated from: '<S1>/VeGSMR_b_PPawl_InVldEngCmd'
     */
    (void)Rte_Write_VeGSMR_b_PPawl_InVldEngCmd_Value
        (GSMR_ac_B.VeGSMR_b_PPawl_InVldEngCmd);

    /* Outport: '<Root>/VeGSMR_b_PRNDMonitorFailed' incorporates:
     *  SignalConversion generated from: '<S1>/VeGSMR_b_SetDTC4ePRNDMntrFail'
     */
    (void)Rte_Write_VeGSMR_b_PRNDMonitorFailed_Value(GSMR_ac_B.Switch3);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Monitor_ePRND'
     */
    /* Outport: '<Root>/VeGSMR_e_Lv2PRND_Position' incorporates:
     *  DataTypeConversion: '<S25>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/VeGSMR_e_Lv2PRNDPosition'
     *  Switch: '<S30>/Switch1'
     */
    (void)Rte_Write_VeGSMR_e_Lv2PRND_Position_Value
        (GSMR_ac_B.VeGSMR_e_VldtdPRNDPos);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeGSMR_e_VldtdPRNDPos' incorporates:
     *  SignalConversion generated from: '<S1>/VeGSMR_e_Lv2VldtdPRNDPos'
     *  Switch: '<S30>/Switch1'
     */
    (void)Rte_Write_VeGSMR_e_VldtdPRNDPos_Value(GSMR_ac_B.VeGSMR_e_VldtdPRNDPos);

    /* Outport: '<Root>/VeGSMR_e_DrvrPRNDRq' incorporates:
     *  SignalConversion generated from: '<S1>/VeGSMR_e_UsrPRNDRq_Obsrvd'
     *  Switch: '<S527>/Switch1'
     */
    (void)Rte_Write_VeGSMR_e_DrvrPRNDRq_Value
        (rtb_TmpSignalConversionAtVeSCMR_e_SC_S_k);

    /* Outport: '<Root>/VeGSMR_e_VldtdPRNDPosDR' incorporates:
     *  SignalConversion generated from: '<S1>/VeGSMR_e_VldtdPRNDPosDR'
     *  Switch: '<S30>/Switch5'
     */
    (void)Rte_Write_VeGSMR_e_VldtdPRNDPosDR_Value
        (GSMR_ac_B.VeGSMR_e_VldtdPRNDPosDR);

    /* Outport: '<Root>/VeGSMR_e_FaultSts_CM_eParkPerf' incorporates:
     *  DataStoreRead: '<S1>/DSR_VeDFIR_FaultSts_DTC_0x1E1800'
     */
    (void)Rte_Write_VeGSMR_e_FaultSts_CM_eParkPerf_Value
        (GSMR_ac_DW.FaultSts_CM_eParkPerf);

    /* Outport: '<Root>/VeGSMR_e_FaultSts_CM_eShiftPerf' incorporates:
     *  DataStoreRead: '<S1>/DSR_VeDFIR_FaultSts_DTC_0x26C300'
     */
    (void)Rte_Write_VeGSMR_e_FaultSts_CM_eShiftPerf_Value
        (GSMR_ac_DW.FaultSts_CM_eShiftPerf);

    /* Outputs for Atomic SubSystem: '<S1>/GSMR_FastTEF_StopCheckpoint' */
    /* FunctionCaller: '<S5>/GSMR_FastTEF_StopCheckpoint' */
    Rte_Call_GSMR_FastTEF_StopCheckpoint_CheckpointReached();

    /* End of Outputs for SubSystem: '<S1>/GSMR_FastTEF_StopCheckpoint' */
    /* End of Outputs for SubSystem: '<Root>/GSMR_FUNC_MedTEB' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
#endif

}

#endif

/* Output function */
FUNC(void, GSMR_CODE) GSMR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/GSMR_FUNC_PwrOn'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S604>/VeGSMR_e_VldtdPRNDPos_Out_Init' incorporates:
     *  Constant: '<S604>/Const1'
     */
    GSMR_ac_B.OutportBufferForVeGSMR_e_VldtdPRNDPos_Ou = GSMR_ac_ConstB.Const1;

    /* SignalConversion generated from: '<S604>/VeGSMR_e_DrvrPRNDRq_Out_Init' incorporates:
     *  Constant: '<S604>/Const2'
     */
    GSMR_ac_B.OutportBufferForVeGSMR_e_DrvrPRNDRq_Out_ = GSMR_ac_ConstB.Const2;

    /* SignalConversion generated from: '<S604>/VeGSMR_e_VldtdPPawlState_Out_Init' incorporates:
     *  Constant: '<S604>/Const3'
     */
    GSMR_ac_B.OutportBufferForVeGSMR_e_VldtdPPawlState = GSMR_ac_ConstB.Const3;

    /* SignalConversion generated from: '<S604>/VeGSMR_b_PRNDMonitorFailed_Out_Init' */
    GSMR_ac_B.OutportBufferForVeGSMR_b_PRNDMonitorFail = false;

    /* SignalConversion generated from: '<S604>/VeGSMR_b_PpawlInsrtMntrFailed_Out_Init' */
    GSMR_ac_B.OutportBufferForVeGSMR_b_PpawlInsrtMntrF = false;

    /* SignalConversion generated from: '<S604>/VeGSMR_b_Lv2PPawlSnsrFltCnfrmd_Out_Init' */
    GSMR_ac_B.OutportBufferForVeGSMR_b_Lv2PPawlSnsrFlt = false;

    /* SignalConversion generated from: '<S604>/VeGSMR_b_MissedParkReqFlt_Out_Init' */
    GSMR_ac_B.OutportBufferForVeGSMR_b_MissedParkReqFl = false;

    /* SignalConversion generated from: '<S604>/VeGSMR_b_MissedNeutralReqFlt_Out_Init' */
    GSMR_ac_B.OutportBufferForVeGSMR_b_MissedNeutralRe = false;

    /* SignalConversion generated from: '<S604>/VeGSMR_b_SecureVehicle_Out_Init' */
    GSMR_ac_B.OutportBufferForVeGSMR_b_SecureVehicle_O = false;

    /* SignalConversion generated from: '<S604>/VeGSMR_b_ApplyEPB_Out_Init' */
    GSMR_ac_B.OutportBufferForVeGSMR_b_ApplyEPB_Out_In = false;

    /* SignalConversion generated from: '<S604>/VeGSMR_b_PpawlInsrtFailed_Out_Init' */
    GSMR_ac_B.OutportBufferForVeGSMR_b_PpawlInsrtFaile = false;

    /* SignalConversion generated from: '<S604>/VeGSMR_e_Lv2PRND_Position_Out_Init' incorporates:
     *  Constant: '<S604>/Const12'
     */
    GSMR_ac_B.OutportBufferForVeGSMR_e_Lv2PRND_Positio = GSMR_ac_ConstB.Const12;

    /* SignalConversion generated from: '<S604>/VeGSMR_e_VldtdPRNDPosDR_Out_Init' incorporates:
     *  Constant: '<S604>/Const13'
     */
    GSMR_ac_B.OutportBufferForVeGSMR_e_VldtdPRNDPosDR_ = GSMR_ac_ConstB.Const13;

    /* SignalConversion generated from: '<S604>/VeDFIR_FaultSts_DTC_0x1E1800' incorporates:
     *  Constant: '<S606>/Constant'
     */
    GSMR_ac_B.OutportBufferForVeDFIR_FaultSts_DTC_0x1E = GSMR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S604>/VeDFIR_FaultSts_DTC_0x26C300' incorporates:
     *  Constant: '<S605>/Constant'
     */
    GSMR_ac_B.OutportBufferForVeDFIR_FaultSts_DTC_0x26 =
        GSMR_ac_ConstB.Constant_n;

    /* SignalConversion generated from: '<S604>/VeGSMR_b_PPawl_InVldEngCmd_Out_Init' */
    GSMR_ac_B.OutportBufferForVeGSMR_b_PPawl_InVldEngC = false;

    /* SignalConversion generated from: '<S604>/VeGSMR_b_OutOfPInValid_Out_Init' */
    GSMR_ac_B.OutportBufferForVeGSMR_b_OutOfPInValid_O = false;

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeGSMR_e_FaultSts_CM_eParkPerf' incorporates:
     *  SignalConversion generated from: '<S2>/R_VeDFIR_FaultSts_DTC_0x1E1800'
     *  SignalConversion generated from: '<S604>/VeDFIR_FaultSts_DTC_0x1E1800'
     */
    (void)Rte_Write_VeGSMR_e_FaultSts_CM_eParkPerf_Value
        (GSMR_ac_B.OutportBufferForVeDFIR_FaultSts_DTC_0x1E);

    /* Outport: '<Root>/VeGSMR_e_FaultSts_CM_eShiftPerf' incorporates:
     *  SignalConversion generated from: '<S2>/R_VeDFIR_FaultSts_DTC_0x26C300'
     *  SignalConversion generated from: '<S604>/VeDFIR_FaultSts_DTC_0x26C300'
     */
    (void)Rte_Write_VeGSMR_e_FaultSts_CM_eShiftPerf_Value
        (GSMR_ac_B.OutportBufferForVeDFIR_FaultSts_DTC_0x26);

    /* Outport: '<Root>/VeGSMR_b_ApplyEPB' incorporates:
     *  SignalConversion generated from: '<S2>/VeGSMR_b_ApplyEPB_Out_Init'
     */
    (void)Rte_Write_VeGSMR_b_ApplyEPB_Value
        (GSMR_ac_B.OutportBufferForVeGSMR_b_ApplyEPB_Out_In);

    /* Outport: '<Root>/VeGSMR_b_Lv2PPawlSnsrFltCnfrmd' incorporates:
     *  SignalConversion generated from: '<S2>/VeGSMR_b_Lv2PPawlSnsrFltCnfrmd_Out_Init'
     */
    (void)Rte_Write_VeGSMR_b_Lv2PPawlSnsrFltCnfrmd_Value
        (GSMR_ac_B.OutportBufferForVeGSMR_b_Lv2PPawlSnsrFlt);

    /* Outport: '<Root>/VeGSMR_b_MissedNeutralReqFlt' incorporates:
     *  SignalConversion generated from: '<S2>/VeGSMR_b_MissedNeutralReqFlt_Out_Init'
     */
    (void)Rte_Write_VeGSMR_b_MissedNeutralReqFlt_Value
        (GSMR_ac_B.OutportBufferForVeGSMR_b_MissedNeutralRe);

    /* Outport: '<Root>/VeGSMR_b_MissedParkReqFlt' incorporates:
     *  SignalConversion generated from: '<S2>/VeGSMR_b_MissedParkReqFlt_Out_Init'
     */
    (void)Rte_Write_VeGSMR_b_MissedParkReqFlt_Value
        (GSMR_ac_B.OutportBufferForVeGSMR_b_MissedParkReqFl);

    /* Outport: '<Root>/VeGSMR_b_OutOfPInValid' incorporates:
     *  SignalConversion generated from: '<S2>/VeGSMR_b_OutOfPInValid_Out_Init'
     */
    (void)Rte_Write_VeGSMR_b_OutOfPInValid_Value
        (GSMR_ac_B.OutportBufferForVeGSMR_b_OutOfPInValid_O);

    /* Outport: '<Root>/VeGSMR_b_PPawl_InVldEngCmd' incorporates:
     *  SignalConversion generated from: '<S2>/VeGSMR_b_PPawl_InVldEngCmd_Out_Init'
     */
    (void)Rte_Write_VeGSMR_b_PPawl_InVldEngCmd_Value
        (GSMR_ac_B.OutportBufferForVeGSMR_b_PPawl_InVldEngC);

    /* Outport: '<Root>/VeGSMR_b_PRNDMonitorFailed' incorporates:
     *  SignalConversion generated from: '<S2>/VeGSMR_b_PRNDMonitorFailed_Out_Init'
     */
    (void)Rte_Write_VeGSMR_b_PRNDMonitorFailed_Value
        (GSMR_ac_B.OutportBufferForVeGSMR_b_PRNDMonitorFail);

    /* Outport: '<Root>/VeGSMR_b_PpawlInsrtFailed' incorporates:
     *  SignalConversion generated from: '<S2>/VeGSMR_b_PpawlInsrtFailed_Out_Init'
     */
    (void)Rte_Write_VeGSMR_b_PpawlInsrtFailed_Value
        (GSMR_ac_B.OutportBufferForVeGSMR_b_PpawlInsrtFaile);

    /* Outport: '<Root>/VeGSMR_b_PpawlInsrtMntrFailed' incorporates:
     *  SignalConversion generated from: '<S2>/VeGSMR_b_PpawlInsrtMntrFailed_Out_Init'
     */
    (void)Rte_Write_VeGSMR_b_PpawlInsrtMntrFailed_Value
        (GSMR_ac_B.OutportBufferForVeGSMR_b_PpawlInsrtMntrF);

    /* Outport: '<Root>/VeGSMR_b_SecureVehicle' incorporates:
     *  SignalConversion generated from: '<S2>/VeGSMR_b_SecureVehicle_Out_Init'
     */
    (void)Rte_Write_VeGSMR_b_SecureVehicle_Value
        (GSMR_ac_B.OutportBufferForVeGSMR_b_SecureVehicle_O);

    /* Outport: '<Root>/VeGSMR_e_DrvrPRNDRq' incorporates:
     *  SignalConversion generated from: '<S2>/VeGSMR_e_DrvrPRNDRq_Out_Init'
     *  SignalConversion generated from: '<S604>/VeGSMR_e_DrvrPRNDRq_Out_Init'
     */
    (void)Rte_Write_VeGSMR_e_DrvrPRNDRq_Value
        (GSMR_ac_B.OutportBufferForVeGSMR_e_DrvrPRNDRq_Out_);

    /* Outport: '<Root>/VeGSMR_e_Lv2PRND_Position' incorporates:
     *  SignalConversion generated from: '<S2>/VeGSMR_e_Lv2PRND_Position_Out_Init'
     *  SignalConversion generated from: '<S604>/VeGSMR_e_Lv2PRND_Position_Out_Init'
     */
    (void)Rte_Write_VeGSMR_e_Lv2PRND_Position_Value
        (GSMR_ac_B.OutportBufferForVeGSMR_e_Lv2PRND_Positio);

    /* Outport: '<Root>/VeGSMR_e_VldtdPPawlState' incorporates:
     *  SignalConversion generated from: '<S2>/VeGSMR_e_VldtdPPawlState_Out_Init'
     *  SignalConversion generated from: '<S604>/VeGSMR_e_VldtdPPawlState_Out_Init'
     */
    (void)Rte_Write_VeGSMR_e_VldtdPPawlState_Value
        (GSMR_ac_B.OutportBufferForVeGSMR_e_VldtdPPawlState);

    /* Outport: '<Root>/VeGSMR_e_VldtdPRNDPosDR' incorporates:
     *  SignalConversion generated from: '<S2>/VeGSMR_e_VldtdPRNDPosDR_Out_Init'
     *  SignalConversion generated from: '<S604>/VeGSMR_e_VldtdPRNDPosDR_Out_Init'
     */
    (void)Rte_Write_VeGSMR_e_VldtdPRNDPosDR_Value
        (GSMR_ac_B.OutportBufferForVeGSMR_e_VldtdPRNDPosDR_);

    /* Outport: '<Root>/VeGSMR_e_VldtdPRNDPos' incorporates:
     *  SignalConversion generated from: '<S2>/VeGSMR_e_VldtdPRNDPos_Out_Init'
     *  SignalConversion generated from: '<S604>/VeGSMR_e_VldtdPRNDPos_Out_Init'
     */
    (void)Rte_Write_VeGSMR_e_VldtdPRNDPos_Value
        (GSMR_ac_B.OutportBufferForVeGSMR_e_VldtdPRNDPos_Ou);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, GSMR_CODE) GSMR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */
    {

#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

        GSMR_ac_B.TmpSignalConversionAtVeLTIR_e_Lv2KeyStsO = CeLTIR_e_IGN_LK;

#endif

    }

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/GSMR_FUNC_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S604>/VeGSMR_e_VldtdPRNDPos_Out_Init' incorporates:
     *  Constant: '<S604>/Const1'
     */
    GSMR_ac_B.OutportBufferForVeGSMR_e_VldtdPRNDPos_Ou = GSMR_ac_ConstB.Const1;

    /* SystemInitialize for SignalConversion generated from: '<S604>/VeGSMR_e_DrvrPRNDRq_Out_Init' incorporates:
     *  Constant: '<S604>/Const2'
     */
    GSMR_ac_B.OutportBufferForVeGSMR_e_DrvrPRNDRq_Out_ = GSMR_ac_ConstB.Const2;

    /* SystemInitialize for SignalConversion generated from: '<S604>/VeGSMR_e_VldtdPPawlState_Out_Init' incorporates:
     *  Constant: '<S604>/Const3'
     */
    GSMR_ac_B.OutportBufferForVeGSMR_e_VldtdPPawlState = GSMR_ac_ConstB.Const3;

    /* SystemInitialize for SignalConversion generated from: '<S604>/VeGSMR_e_Lv2PRND_Position_Out_Init' incorporates:
     *  Constant: '<S604>/Const12'
     */
    GSMR_ac_B.OutportBufferForVeGSMR_e_Lv2PRND_Positio = GSMR_ac_ConstB.Const12;

    /* SystemInitialize for SignalConversion generated from: '<S604>/VeGSMR_e_VldtdPRNDPosDR_Out_Init' incorporates:
     *  Constant: '<S604>/Const13'
     */
    GSMR_ac_B.OutportBufferForVeGSMR_e_VldtdPRNDPosDR_ = GSMR_ac_ConstB.Const13;

    /* SystemInitialize for SignalConversion generated from: '<S604>/VeDFIR_FaultSts_DTC_0x1E1800' incorporates:
     *  Constant: '<S606>/Constant'
     */
    GSMR_ac_B.OutportBufferForVeDFIR_FaultSts_DTC_0x1E = GSMR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S604>/VeDFIR_FaultSts_DTC_0x26C300' incorporates:
     *  Constant: '<S605>/Constant'
     */
    GSMR_ac_B.OutportBufferForVeDFIR_FaultSts_DTC_0x26 =
        GSMR_ac_ConstB.Constant_n;

    /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
#if Rte_SysCon_Variant_GSMR_FUNC_Enbl

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
    /* SystemInitialize for Function Call SubSystem: '<Root>/GSMR_FUNC_MedTEB' */
    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ProcInputsForMonitor'
     */
    /* SystemInitialize for Atomic SubSystem: '<S9>/ProcForPPawlMntr' */
    /* SystemInitialize for Atomic SubSystem: '<S397>/Dtmn_OTP_OTN' */
    /* InitializeConditions for RelationalOperator: '<S402>/Comparison2' incorporates:
     *  UnitDelay: '<S402>/UnitDelay1'
     */
    GSMR_ac_DW.VeGSMC_e_KeyStsArbPrev = CeLTIR_e_IGN_INIT;

    /* End of SystemInitialize for SubSystem: '<S397>/Dtmn_OTP_OTN' */
    /* End of SystemInitialize for SubSystem: '<S9>/ProcForPPawlMntr' */

    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Monitor_ePRND'
     */
    /* SystemInitialize for Atomic SubSystem: '<S6>/Monitor_ePRND' */
    GSMR_ac_Monitor_ePRND_Init();

    /* End of SystemInitialize for SubSystem: '<S6>/Monitor_ePRND' */
    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of SystemInitialize for SubSystem: '<Root>/GSMR_FUNC_MedTEB' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
#endif

    /* SystemInitialize for Outport: '<Root>/VeGSMR_e_VldtdPRNDPos' incorporates:
     *  Merge: '<Root>/Merge_Outport_1'
     */
    (void)Rte_Write_VeGSMR_e_VldtdPRNDPos_Value(CeGSMR_e_TransRangePark);

    /* SystemInitialize for Outport: '<Root>/VeGSMR_e_DrvrPRNDRq' incorporates:
     *  Merge: '<Root>/Merge_Outport_2'
     */
    (void)Rte_Write_VeGSMR_e_DrvrPRNDRq_Value(CeGSMR_e_PRNDInit);

    /* SystemInitialize for Outport: '<Root>/VeGSMR_e_VldtdPPawlState' incorporates:
     *  Merge: '<Root>/Merge_Outport_3'
     */
    (void)Rte_Write_VeGSMR_e_VldtdPPawlState_Value(CeGSMR_e_PPAWL_NotDetermined);

    /* SystemInitialize for Outport: '<Root>/VeGSMR_e_Lv2PRND_Position' incorporates:
     *  Merge: '<Root>/Merge_Outport_12'
     */
    (void)Rte_Write_VeGSMR_e_Lv2PRND_Position_Value(CeGSMR_e_TransRangePark);

    /* SystemInitialize for Outport: '<Root>/VeGSMR_e_VldtdPRNDPosDR' incorporates:
     *  Merge: '<Root>/Merge_Outport_13'
     */
    (void)Rte_Write_VeGSMR_e_VldtdPRNDPosDR_Value(CeGSMR_e_TransRangePark);

    /* SystemInitialize for Outport: '<Root>/VeGSMR_e_FaultSts_CM_eParkPerf' incorporates:
     *  Merge: '<Root>/M_VeDFIR_FaultSts_DTC_0x1E1800'
     */
    (void)Rte_Write_VeGSMR_e_FaultSts_CM_eParkPerf_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeGSMR_e_FaultSts_CM_eShiftPerf' incorporates:
     *  Merge: '<Root>/M_VeDFIR_FaultSts_DTC_0x26C300'
     */
    (void)Rte_Write_VeGSMR_e_FaultSts_CM_eShiftPerf_Value(CeDFIB_e_Init);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
