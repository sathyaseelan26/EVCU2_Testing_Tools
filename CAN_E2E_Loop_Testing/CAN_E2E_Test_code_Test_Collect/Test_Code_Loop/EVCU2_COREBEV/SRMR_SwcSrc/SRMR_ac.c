/*
 * File: SRMR_ac.c
 *
 * Code generated for Simulink model 'SRMR_ac'.
 *
 * Model version                  : 9.443
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 19:02:36 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SRMR_ac.h"
#include "look1_iflf_binlca_16a.h"
#include "look2_iflf_binlca_16a.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2020b.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_SRMR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMC_b_LimitationMdBypEnbl = 0;/* Referenced by: '<S479>/Constant' */
static volatile CONST(uint8, SRMR_VAR_INIT) KeSRMC_e_LimitationMdByp = 0U;/* Referenced by: '<S479>/Constant1' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_Cf_TransOutSpdCalc = 1.0F;/* Referenced by: '<S428>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_Cnt_CounterActiveDisMtrA =
    2.0F;                              /* Referenced by: '<S529>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_Cnt_CounterActiveDisMtrB =
    2.0F;                              /* Referenced by: '<S530>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_Cnt_CounterDisImmdMtrA =
    2.0F;                              /* Referenced by: '<S531>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_Cnt_CounterDisImmdMtrB =
    2.0F;                              /* Referenced by: '<S532>/Calib' */
static volatile CONST(uint8, SRMR_VAR_INIT) KeSRMR_Cnt_Lv2AHHCheckCntrLim = 15U;/* Referenced by: '<S229>/Calib' */
static volatile CONST(uint8, SRMR_VAR_INIT) KeSRMR_Cnt_Lv2AHHModifyAccelCntrLim =
    15U;                               /* Referenced by: '<S230>/Calib' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_Cnt_MaxCntcrOpnCmndTm = 20U;/* Referenced by: '<S184>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_Cnt_PtcMinWhlCreepMphTLmt =
    100.0F;                            /* Referenced by: '<S451>/Calib' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_Cnt_ThermEveFailgCntrLim =
    165U;                              /* Referenced by: '<S289>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_M_AccelPdlMaxWhlTrqDflt =
    100.0F;                            /* Referenced by: '<S469>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_M_BSGActTrqSNA = 163.84F;/* Referenced by: '<S267>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_M_BSGActTrq_CC_AStrt =
    1023.0F;                           /* Referenced by: '<S106>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_M_BSGActTrq_CC_TiAStp =
    1023.0F;                           /* Referenced by: '<S138>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_M_BSGActTrq_Dsbl_AStrt =
    1023.0F;                           /* Referenced by: '<S120>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_M_BSGActTrq_Dsbl_TiAStp =
    1023.0F;                           /* Referenced by: '<S154>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_M_BSGActTrq_PC_AStrt =
    1023.0F;                           /* Referenced by: '<S113>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_M_BSGActTrq_PC_TiAStp =
    1023.0F;                           /* Referenced by: '<S147>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_M_DrvrIntndedAxleTrq = 0.0F;/* Referenced by: '<S240>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_M_EstRegenBrkAxTrq =
    4095.0F;                           /* Referenced by: '<S375>/RA_Default' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_M_HybCmdEngTrqImm = 0.0F;/* Referenced by: '<S294>/RA_Default' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_M_HybCmdEngTrqPrdtd = 0.0F;/* Referenced by: '<S295>/RA_Default' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_M_IdleCLTrq = 0.0F;/* Referenced by: '<S374>/RA_Default' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_M_MaxAxleVal = 0.0F;/* Referenced by: '<S577>/RA_Default' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_M_MinAxleVal = 0.0F;/* Referenced by: '<S575>/RA_Default' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_M_MinBrkTrq_ToNet = 0.0F;/* Referenced by: '<S433>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_M_MtrATrqCmd = 0.0F;/* Referenced by: '<S393>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_M_MtrA_MaxTorq = 0.0F;/* Referenced by: '<S510>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_M_MtrA_MinTorq = 0.0F;/* Referenced by: '<S511>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_M_MtrBTrqCmd = 0.0F;/* Referenced by: '<S394>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_M_MtrB_MaxTorq = 0.0F;/* Referenced by: '<S512>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_M_MtrB_MinTorq = 0.0F;/* Referenced by: '<S513>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_M_MtrTrqCmdRmpDec = 1000.0F;/* Referenced by: '<S567>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_M_MtrTrqCmdRmpInc = 100.0F;/* Referenced by: '<S568>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_M_MtrTrqCmnd_CC_AStrt =
    0.0F;                              /* Referenced by: '<S107>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_M_MtrTrqCmnd_CC_TiAStp =
    0.0F;                              /* Referenced by: '<S139>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_M_MtrTrqCmnd_Dsbl_AStrt =
    0.0F;                              /* Referenced by: '<S121>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_M_MtrTrqCmnd_Dsbl_TiAStp =
    0.0F;                              /* Referenced by: '<S155>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_M_MtrTrqCmnd_PC_AStrt =
    0.0F;                              /* Referenced by: '<S114>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_M_MtrTrqCmnd_PC_TiAStp =
    0.0F;                              /* Referenced by: '<S148>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_M_PdlMinWhlTrq_D_VehSpdFA =
    0.0F;                              /* Referenced by: '<S452>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_M_PdlMinWhlTrq_R_VehSpdFA =
    0.0F;                              /* Referenced by: '<S453>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_M_PtcMinWhlCreepTrqBase =
    150.0F;                            /* Referenced by: '<S454>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_M_PtcMinWhlCreepTrqLwr =
    25.0F;                             /* Referenced by: '<S455>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_M_PtcMinWhlTrqCreepDecRL =
    1.0F;                              /* Referenced by: '<S456>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_M_PtcMinWhlTrqCreepIncRL =
    5.0F;                              /* Referenced by: '<S457>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_M_RegenBrkAxTorqCapFrnt =
    0.0F;                              /* Referenced by: '<S578>/RA_Default' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_M_RegenBrkAxTorqCapRear =
    0.0F;                              /* Referenced by: '<S579>/RA_Default' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_M_RegenBrkAxTrqCap = 0.0F;/* Referenced by: '<S580>/RA_Default' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_M_STAAxleVal = 8191.0F;/* Referenced by: '<S576>/RA_Default' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_M_SoftLimitationMinTorque =
    3000.0F;                           /* Referenced by: '<S556>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_M_SplitFrntTrqReqVal = 0.0F;/* Referenced by: '<S241>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_M_SplitRearTrqReqVal = 0.0F;/* Referenced by: '<S242>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_M_TORQUE_FIX_MAX = 2000.0F;/* Referenced by: '<S558>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_M_ToMin_BrkTrqRdct = 350.0F;/* Referenced by: '<S434>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_M_Trq_Medium_Limit =
    4000.0F;                           /* Referenced by: '<S557>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_Pct_48VSoc_LTsh = 10.0F;/* Referenced by: '<S137>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_Pct_HVBatSOCLow = 20.0F;/* Referenced by: '<S170>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_Pct_Lv2AccelPdlPosSNA =
    99.96F;                            /* Referenced by: '<S628>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_Pct_PctForWhlTrqCalcDflt =
    0.5F;                              /* Referenced by: '<S448>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_T_HVBatModTempMax = 50.0F;/* Referenced by: '<S171>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_U_48VBusVoltLow = 20.0F;/* Referenced by: '<S172>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_U_HVBusDischVolt = 65.0F;/* Referenced by: '<S99>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_U_VdcSP_CC_AStrt = 12.5F;/* Referenced by: '<S108>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_U_VdcSP_CC_TiAStp = 12.5F;/* Referenced by: '<S140>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_U_VdcSP_Dsbl_AStrt = 0.0F;/* Referenced by: '<S122>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_U_VdcSP_Dsbl_TiAStp = 0.0F;/* Referenced by: '<S156>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_U_VdcSP_PC_AStrt = 0.0F;/* Referenced by: '<S115>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_U_VdcSP_PC_TiAStp = 0.0F;/* Referenced by: '<S149>/Calib' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_APMVdcSPFA_AStrt = 0;/* Referenced by: '<S250>/Calib' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_APMVdcSPFA_TiAStp = 0;/* Referenced by: '<S251>/Calib' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_ASFail_Ovrd = 0;/* Referenced by: '<S602>/Calib' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_ASFail_OvrdVal = 1;/* Referenced by: '<S603>/Calib' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_ActualAxleTrqFA_SNA = 1;/* Referenced by: '<S243>/Calib' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_AstrtFailure_Val = 0;/* Referenced by: '<S604>/Calib' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_BSGActTrqFA = 0;/* Referenced by: '<S268>/Calib' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_BSGChrgIdleSpeedTargetFA =
    1;                                 /* Referenced by: '<S269>/Calib' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_DTRcmdFlt = 1;/* Referenced by: '<S401>/Calib' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_DualPedalPress_Enbl = 1;/* Referenced by: '<S435>/Calib' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_EngDFCOReq = 0;/* Referenced by: '<S297>/RA_Default' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_EngTorqCmndMntrFlt = 0;/* Referenced by: '<S605>/Calib' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_EngTorqCmndMntrFltOvrd =
    0;                                 /* Referenced by: '<S606>/Calib' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_GatedParkSw = 1;/* Referenced by: '<S369>/RA_Default' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_HCPMaxEngRPMFA = 1;/* Referenced by: '<S336>/Calib' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_HybEstEngTorqV = 0;/* Referenced by: '<S298>/RA_Default' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_HybFdbckECM = 0;/* Referenced by: '<S299>/RA_Default' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_Lv2PPMntrFlt_Val = 0;/* Referenced by: '<S607>/Calib' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_Lv2_MntrOPDEnbl = 1;/* Referenced by: '<S164>/Calib' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_MisNeutFlt_Val = 0;/* Referenced by: '<S608>/Calib' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_MisPrkFlt_Val = 0;/* Referenced by: '<S609>/Calib' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_MtrMdCmdOvrdEnbl = 0;/* Referenced by: '<S516>/Calib' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_MtrMdCmnd_Enable = 0;/* Referenced by: '<S395>/Calib' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_MtrMdFlt_Val = 0;/* Referenced by: '<S610>/Calib' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_OvrdAHHModifyAccelReq = 0;/* Referenced by: '<S231>/Calib' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_OvrdAstrtFailure = 0;/* Referenced by: '<S611>/Calib' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_OvrdCntctrCmnd_UVM = 1;/* Referenced by: '<S285>/Calib' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_OvrdLv2PPMntrFlt = 0;/* Referenced by: '<S612>/Calib' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_OvrdMtrMdCmnd_AStrt = 1;/* Referenced by: '<S381>/RA_Mask' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_OvrdMtrTrqCmnd_AStrt = 1;/* Referenced by: '<S380>/RA_Mask' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_OvrdWarn2_SpdFlt = 1;/* Referenced by: '<S573>/RA_Mask' */
static volatile CONST(boolean, SRMR_VAR_INIT)
    KeSRMR_b_Ovrd_Lv1AHH_ApplyRelease_Req = 0;/* Referenced by: '<S613>/Calib' */
static volatile CONST(boolean, SRMR_VAR_INIT)
    KeSRMR_b_Ovrd_Lv1AHH_ModifyAccel_Req = 0;/* Referenced by: '<S614>/Calib' */
static volatile CONST(boolean, SRMR_VAR_INIT)
    KeSRMR_b_Ovrd_Lv1AHH_ModifyAccel_ReqVal = 0;/* Referenced by: '<S615>/Calib' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_Ovrd_MisNeutFlt = 0;/* Referenced by: '<S616>/Calib' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_Ovrd_MisPrkFlt = 0;/* Referenced by: '<S617>/Calib' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_Ovrd_MtrMdFlt = 0;/* Referenced by: '<S618>/Calib' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_Ovrd_P4MtrFlt = 0;/* Referenced by: '<S601>/Constant' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_Ovrd_PPInsrFlt = 0;/* Referenced by: '<S619>/Calib' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_Ovrd_RgnFlt = 0;/* Referenced by: '<S620>/Calib' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_Ovrd_SpdRatFlt = 0;/* Referenced by: '<S621>/Calib' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_Ovrd_ToFault = 0;/* Referenced by: '<S598>/Constant' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_Ovrd_ToFault_MinLim = 0;/* Referenced by: '<S600>/Constant' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_Ovrd_ToFault_P1P4 = 0;/* Referenced by: '<S599>/Constant' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_P4MtrFlt_Val = 0;/* Referenced by: '<S601>/Constant1' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_PPInsrFlt_Val = 0;/* Referenced by: '<S622>/Calib' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_PPawl_EngageReqDlyEnbl =
    1;                                 /* Referenced by: '<S365>/Calib' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_RgnFlt_Val = 0;/* Referenced by: '<S623>/Calib' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_SetAPMMode_AStrtFA = 1;/* Referenced by: '<S252>/RA_Mask' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_SetAPMVdcSPFA_AStrtFA = 1;/* Referenced by: '<S254>/RA_Mask' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_SetAPMVdcSP_AStrtFA = 1;/* Referenced by: '<S253>/RA_Mask' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_SetBSGActTrqFA_AStpFA = 1;/* Referenced by: '<S594>/Calib' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_SetBSGActTrqFA_AStrtFA =
    1;                                 /* Referenced by: '<S595>/Calib' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_SetBSGActTrqFA_TiMntrFA =
    1;                                 /* Referenced by: '<S596>/Calib' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_SetBSGActTrq_AStrtFA = 1;/* Referenced by: '<S271>/RA_Mask' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_SetBSGIdlSpdTrgt_AStrtFA =
    1;                                 /* Referenced by: '<S272>/RA_Mask' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_SetMaxEngRPM_AStrtFA = 1;/* Referenced by: '<S338>/RA_Mask' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_SpdRatFlt_Val = 0;/* Referenced by: '<S624>/Calib' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_ToFalt_Val = 0;/* Referenced by: '<S598>/Constant1' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_ToFlt_Val_MinLim = 0;/* Referenced by: '<S600>/Constant1' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_ToFlt_Val_P1P4 = 0;/* Referenced by: '<S599>/Constant1' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_TrqSplit_OS_US = 1;/* Referenced by: '<S402>/Calib' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_UseAPM_HVBatVlt = 1;/* Referenced by: '<S173>/Calib' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_UseBPCM_HVBatVlt = 1;/* Referenced by: '<S174>/Calib' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_UseCalForPRNDReq = 0;/* Referenced by: '<S85>/Calib' */
static volatile CONST(boolean, SRMR_VAR_INIT) KeSRMR_b_UseLv1EngStpStrtMd = 1;/* Referenced by: '<S625>/Calib' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_e_APMMd_CC_AStrt = 1U;/* Referenced by: '<S109>/Calib' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_e_APMMd_CC_TiAStp = 1U;/* Referenced by: '<S141>/Calib' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_e_APMMd_Dsbl_AStrt = 8U;/* Referenced by: '<S123>/Calib' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_e_APMMd_Dsbl_TiAStp = 8U;/* Referenced by: '<S157>/Calib' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_e_APMMd_PC_AStrt = 8U;/* Referenced by: '<S116>/Calib' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_e_APMMd_PC_TiAStp = 8U;/* Referenced by: '<S150>/Calib' */
static volatile CONST(uint8, SRMR_VAR_INIT) KeSRMR_e_APM_FailRsn_NoFail = 0U;/* Referenced by: '<S185>/Calib' */
static volatile CONST(uint8, SRMR_VAR_INIT) KeSRMR_e_APM_FailRsn_SNA = 63U;/* Referenced by: '<S186>/Calib' */
static volatile CONST(uint8, SRMR_VAR_INIT)
    KeSRMR_e_APM_FailType_Failure_ChargingInhibited = 1U;/* Referenced by: '<S187>/Calib' */
static volatile CONST(uint8, SRMR_VAR_INIT) KeSRMR_e_APM_FailType_SNA = 3U;/* Referenced by: '<S188>/Calib' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_e_BrakeAppld = 1U;/* Referenced by:
                                                                      * '<S458>/Calib'
                                                                      * '<S442>/Calib'
                                                                      */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_e_CntctrClsCmnd = 1U;/* Referenced by: '<S189>/Calib' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_e_CntctrOpnCmnd = 0U;/* Referenced by: '<S190>/Calib' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_e_CrntGear = 0U;/* Referenced by: '<S324>/RA_Default' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_e_EPBHldRq = 1U;/* Referenced by: '<S355>/Calib' */
static volatile CONST(uint8, SRMR_VAR_INIT) KeSRMR_e_ESS_EngSt_Disbl = 7U;/* Referenced by: '<S175>/Calib' */
static volatile CONST(uint8, SRMR_VAR_INIT) KeSRMR_e_ESS_EngSt_KeyStrt = 10U;/* Referenced by: '<S176>/Calib' */
static volatile CONST(uint8, SRMR_VAR_INIT) KeSRMR_e_ESS_EngSt_KeyTqStrt = 12U;/* Referenced by: '<S177>/Calib' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_e_EngCntrlMd = 0U;/* Referenced by: '<S293>/RA_Default' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_e_HEV_ESS_Md = 15U;/* Referenced by: '<S368>/RA_Default' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_e_HybCmdEngTrqRespType = 0U;/* Referenced by: '<S296>/RA_Default' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_e_InvrtrFlt = 4U;/* Referenced by: '<S178>/Calib' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_e_KeySts = 7U;/* Referenced by: '<S24>/Calib' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_e_LVR_D = 4U;/* Referenced by: '<S86>/Calib' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_e_LVR_N = 2U;/* Referenced by: '<S87>/Calib' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_e_LVR_P = 0U;/* Referenced by: '<S88>/Calib' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_e_LVR_R = 1U;/* Referenced by: '<S89>/Calib' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_e_LVR_SNA = 7U;/* Referenced by: '<S90>/Calib' */
static volatile CONST(uint8, SRMR_VAR_INIT) KeSRMR_e_MtrAModeCmd = 0U;/* Referenced by: '<S100>/Calib' */
static volatile CONST(uint8, SRMR_VAR_INIT) KeSRMR_e_MtrBASCCmnd = 9U;/* Referenced by: '<S396>/Calib' */
static volatile CONST(uint8, SRMR_VAR_INIT) KeSRMR_e_MtrBModeCmd = 0U;/* Referenced by: '<S101>/Calib' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_e_MtrMd_CC_AStrt = 0U;/* Referenced by: '<S110>/Calib' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_e_MtrMd_CC_TiAStp = 1U;/* Referenced by: '<S142>/Calib' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_e_MtrMd_CC_TiAStp_Flt = 0U;/* Referenced by: '<S143>/Calib' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_e_MtrMd_Dsbl_AStrt = 0U;/* Referenced by: '<S124>/Calib' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_e_MtrMd_Dsbl_TiAStp = 0U;/* Referenced by: '<S158>/Calib' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_e_MtrMd_PC_AStrt = 0U;/* Referenced by: '<S117>/Calib' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_e_MtrMd_PC_TiAStp = 0U;/* Referenced by: '<S151>/Calib' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_e_OvrdAHHApplyReleaseReq =
    0U;                                /* Referenced by: '<S232>/Calib' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_e_OvrdWarn2Val = 22U;/* Referenced by: '<S572>/Calib' */
static volatile CONST(uint16, SRMR_VAR_INIT)
    KeSRMR_e_Ovrd_Lv1AHH_ApplyRelease_ReqVal = 0U;/* Referenced by: '<S626>/Calib' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_e_PRNDRq = 7U;/* Referenced by: '<S91>/Calib' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_e_ShftPos = 255U;/* Referenced by: '<S322>/RA_Default' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_e_StModeReq_idle = 0U;/* Referenced by: '<S218>/Calib' */
static volatile CONST(uint8, SRMR_VAR_INIT) KeSRMR_e_TargetSts_CHGBUSDischarge =
    12U;                               /* Referenced by: '<S212>/Calib' */
static volatile CONST(uint8, SRMR_VAR_INIT) KeSRMR_e_TargetSts_CRASHDischarge =
    13U;                               /* Referenced by: '<S213>/Calib' */
static volatile CONST(uint8, SRMR_VAR_INIT) KeSRMR_e_TargetSts_CRASHErrDischarge
    = 14U;                             /* Referenced by: '<S214>/Calib' */
static volatile CONST(uint8, SRMR_VAR_INIT) KeSRMR_e_TargetSts_GFDDischarge =
    10U;                               /* Referenced by: '<S215>/Calib' */
static volatile CONST(uint8, SRMR_VAR_INIT) KeSRMR_e_TargetSts_HVILDischarge =
    11U;                               /* Referenced by: '<S216>/Calib' */
static volatile CONST(uint8, SRMR_VAR_INIT) KeSRMR_e_TargetSts_PwrUpInhibit =
    15U;                               /* Referenced by: '<S217>/Calib' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_e_TrgtGear = 0U;/* Referenced by: '<S321>/RA_Default' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_e_VldtdRngSt = 15U;/* Referenced by: '<S323>/RA_Default' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_g_RA_APM_VdcLvSetP = 0U;/* Referenced by: '<S256>/RA_Mask' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_g_RA_APM_VdcLvSet_FA = 0U;/* Referenced by: '<S257>/RA_Mask' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_g_RA_ActualAxleTrq = 0U;/* Referenced by: '<S576>/RA_Mask' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_g_RA_BSG_ActualTrq = 0U;/* Referenced by: '<S275>/RA_Mask' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_g_RA_BSG_ChrgIdlSpdTrgt = 0U;/* Referenced by: '<S276>/RA_Mask' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_g_RA_CurrentGear = 0U;/* Referenced by: '<S324>/RA_Mask' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_g_RA_EPBHldRq = 0U;/* Referenced by: '<S360>/RA_Mask' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_g_RA_EngCLITerm = 0U;/* Referenced by: '<S374>/RA_Mask' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_g_RA_EngCtrlMode = 0U;/* Referenced by: '<S293>/RA_Mask' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_g_RA_EngDFCOReq = 0U;/* Referenced by: '<S297>/RA_Mask' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_g_RA_EngTrqCmndImmed = 0U;/* Referenced by: '<S294>/RA_Mask' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_g_RA_EngTrqCmndPrdtd = 0U;/* Referenced by: '<S295>/RA_Mask' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_g_RA_EstRegenBrkAxTorq = 0U;/* Referenced by: '<S375>/RA_Mask' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_g_RA_GatedParkSw = 0U;/* Referenced by: '<S369>/RA_Mask' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_g_RA_HCPMaxEngRPM = 0U;/* Referenced by: '<S340>/RA_Mask' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_g_RA_HEV_ESS_Mode = 0U;/* Referenced by: '<S368>/RA_Mask' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_g_RA_HybFeedback_ECM = 0U;/* Referenced by: '<S299>/RA_Mask' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_g_RA_HydCmndEngTorqRespTyp =
    0U;                                /* Referenced by: '<S296>/RA_Mask' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_g_RA_MainHighVltCntctrCmd =
    0U;                                /* Referenced by: '<S287>/RA_Mask' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_g_RA_MaxAxleTrqCruise = 0U;/* Referenced by: '<S577>/RA_Mask' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_g_RA_MinAxletrqCruise = 0U;/* Referenced by: '<S575>/RA_Mask' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_g_RA_MtrA_MdCmnd = 0U;/* Referenced by: '<S397>/RA_Mask' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_g_RA_MtrA_MdCmnd_BSG = 0U;/* Referenced by: '<S383>/RA_Mask' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_g_RA_MtrA_TorCmnd = 0U;/* Referenced by: '<S398>/RA_Mask' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_g_RA_MtrA_TorqCmnd_BSG = 0U;/* Referenced by: '<S382>/RA_Mask' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_g_RA_MtrB_MdCmnd = 0U;/* Referenced by: '<S400>/RA_Mask' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_g_RA_MtrB_TorqCmnd = 0U;/* Referenced by: '<S399>/RA_Mask' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_g_RA_OpenModeEnable = 0U;/* Referenced by: '<S255>/RA_Mask' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_g_RA_PRNDLReq = 0U;/* Referenced by: '<S320>/RA_Mask' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_g_RA_Popup_Msg9 = 0U;/* Referenced by: '<S346>/RA_Mask' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_g_RA_RegenBrkAxTorqCap = 0U;/* Referenced by: '<S580>/RA_Mask' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_g_RA_RegenBrkAxTorqCapFrnt =
    0U;                                /* Referenced by: '<S578>/RA_Mask' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_g_RA_RegenBrkAxTorqCapRear =
    0U;                                /* Referenced by: '<S579>/RA_Mask' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_g_RA_ShifterPOS = 0U;/* Referenced by: '<S322>/RA_Mask' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_g_RA_SnsdTi_notVld = 0U;/* Referenced by: '<S298>/RA_Mask' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_g_RA_SplitAxlTrqReq = 0U;/* Referenced by: '<S245>/RA_Mask' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_g_RA_SplitFrntTrqReq = 0U;/* Referenced by: '<S244>/RA_Mask' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_g_RA_TargetGear = 0U;/* Referenced by: '<S321>/RA_Mask' */
static volatile CONST(uint16, SRMR_VAR_INIT) KeSRMR_g_RA_VldtdTransShiftRngSt =
    0U;                                /* Referenced by: '<S323>/RA_Mask' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_k_DTRFiltrCoeffMtrA = 0.01F;/* Referenced by: '<S565>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_k_DTRFiltrCoeffMtrB = 0.01F;/* Referenced by: '<S566>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_n_BSGChrgIdleSpeedTargetSNA
    = 8191.0F;                         /* Referenced by: '<S270>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_n_EngLowRPM = 300.0F;/* Referenced by: '<S179>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_n_HCPMaxEngRPMSNA = 8160.0F;/* Referenced by: '<S337>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_n_IdlSpdTrgt_CC_AStrt =
    8192.0F;                           /* Referenced by: '<S111>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_n_IdlSpdTrgt_CC_TiAStp =
    0.0F;                              /* Referenced by: '<S144>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_n_IdlSpdTrgt_Dsbl_AStrt =
    8192.0F;                           /* Referenced by: '<S125>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_n_IdlSpdTrgt_Dsbl_TiAStp =
    8192.0F;                           /* Referenced by: '<S159>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_n_IdlSpdTrgt_PC_AStrt =
    0.0F;                              /* Referenced by: '<S118>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_n_IdlSpdTrgt_PC_TiAStp =
    0.0F;                              /* Referenced by: '<S152>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_n_MaxEngSpd_CC_AStrt =
    255.0F;                            /* Referenced by: '<S112>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_n_MaxEngSpd_CC_TiAStp =
    0.0F;                              /* Referenced by: '<S145>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_n_MaxEngSpd_Dsbl_AStrt =
    255.0F;                            /* Referenced by: '<S126>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_n_MaxEngSpd_Dsbl_TiAStp =
    255.0F;                            /* Referenced by: '<S160>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_n_MaxEngSpd_PC_AStrt = 0.0F;/* Referenced by: '<S119>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_n_MaxEngSpd_PC_TiAStp =
    0.0F;                              /* Referenced by: '<S153>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_r_BrkFailSftNegGrd = -0.01F;/* Referenced by: '<S424>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_r_BrkFailSftPosGrd = 0.01F;/* Referenced by: '<S425>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_r_GearRatioF_C = 10.1F;/* Referenced by: '<S563>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_r_GearRatioR_C = 10.1F;/* Referenced by: '<S564>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_t_PpawlInsrtFailureOnDelay =
    0.05F;                             /* Referenced by: '<S356>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_t_dT = 0.0125F;/* Referenced by: '<S357>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_v_EPBApplySpdThsh = 4.8F;/* Referenced by: '<S597>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_v_Lv2ZeroSpdThrsh = 5.0F;/* Referenced by: '<S233>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KeSRMR_v_MinWhlCreepCntrKPH = 1.0F;/* Referenced by: '<S459>/Calib' */
static volatile CONST(float32, SRMR_VAR_INIT) KtSRMR_K_PtcBrkOffsetMultTbl[10] =
{
    1.0F, 0.9688F, 0.8984F, 0.8516F, 0.6016F, 0.4492F, 0.25F, 0.1406F, 0.0F,
    0.0F
} ;                                    /* Referenced by: '<S460>/Vector' */

static volatile CONST(float32, SRMR_VAR_INIT) KtSRMR_M_AccelPdlMaxWhlTrq_D[24] =
{
    8281.18F, 8281.18F, 8281.18F, 5872.64502F, 4207.73682F, 3320.7041F,
    2708.80908F, 2100.54492F, 8281.18F, 8281.18F, 8281.18F, 5872.64502F,
    4207.73682F, 3320.7041F, 2708.80908F, 2100.54492F, 8281.18F, 8281.18F,
    8281.18F, 5872.64502F, 4207.73682F, 3320.7041F, 2708.80908F, 2100.54492F
} ;                                    /* Referenced by: '<S470>/Vector' */

static volatile CONST(float32, SRMR_VAR_INIT) KtSRMR_M_AccelPdlMaxWhlTrq_R[24] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 704.0F, 1408.0F, 2112.0F, 2112.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 704.0F, 1408.0F, 2112.0F, 2112.0F, 0.0F, 0.0F, 0.0F, 0.0F, 704.0F,
    1408.0F, 2112.0F, 2112.0F
} ;                                    /* Referenced by: '<S471>/Vector' */

static volatile CONST(float32, SRMR_VAR_INIT) KtSRMR_M_BSGLoad[11] =
{
    10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F
} ;                                    /* Referenced by: '<S146>/Vector' */

static volatile CONST(float32, SRMR_VAR_INIT) KtSRMR_M_InD_PdlMinWhlTrq[13] =
{
    494.0F, 494.0F, 494.08F, 494.08F, 494.84F, 494.08F, 494.0F, -409.5F, -543.6F,
    -547.7F, -495.5F, -393.2F, -240.8F
} ;                                    /* Referenced by: '<S461>/Vector' */

static volatile CONST(float32, SRMR_VAR_INIT) KtSRMR_M_InR_PdlMinWhlTrq[13] =
{
    43.0F, 52.0F, 74.08F, 75.08F, 65.84F, 290.08F, 0.0F, -60.5F, -91.6F, -113.7F,
    -124.5F, -137.2F, -152.8F
} ;                                    /* Referenced by: '<S462>/Vector' */

static volatile CONST(float32, SRMR_VAR_INIT) KtSRMR_Pct_PctForWhlTrq_NormalMd
    [289] =
{
    0.0F, 0.0468F, 0.1132F, 0.1709F, 0.2368F, 0.3021F, 0.3609F, 0.4001F, 0.4388F,
    0.4839F, 0.558F, 0.6402F, 0.7485F, 0.8562F, 0.9118F, 0.9662F, 1.0F, 0.0F,
    0.06F, 0.11F, 0.16F, 0.2299F, 0.2912F, 0.3431F, 0.3903F, 0.4375F, 0.4894F,
    0.5578F, 0.6475F, 0.749F, 0.8532F, 0.9221F, 0.9698F, 1.0F, 0.0F, 0.0625F,
    0.1057F, 0.1502F, 0.1939F, 0.2426F, 0.2844F, 0.3354F, 0.3818F, 0.4468F,
    0.5187F, 0.6232F, 0.7345F, 0.8437F, 0.9248F, 0.9712F, 1.0F, 0.0F, 0.0576F,
    0.0952F, 0.132F, 0.1705F, 0.2118F, 0.2509F, 0.2945F, 0.3495F, 0.4161F,
    0.4896F, 0.6043F, 0.7191F, 0.832F, 0.9247F, 0.9715F, 1.0F, 0.0F, 0.0472F,
    0.0819F, 0.1166F, 0.1513F, 0.1869F, 0.2216F, 0.2618F, 0.3148F, 0.3841F,
    0.4627F, 0.5791F, 0.7046F, 0.8325F, 0.9247F, 0.9712F, 1.0F, 0.0F, 0.0386F,
    0.0688F, 0.1024F, 0.1355F, 0.1691F, 0.2032F, 0.2402F, 0.2944F, 0.3678F,
    0.4504F, 0.5713F, 0.7033F, 0.8329F, 0.9255F, 0.9711F, 0.9999F, 0.0F, 0.036F,
    0.0689F, 0.1018F, 0.1291F, 0.1642F, 0.1959F, 0.2305F, 0.2851F, 0.3542F,
    0.4533F, 0.5787F, 0.7062F, 0.8165F, 0.9118F, 0.9625F, 0.9998F, 0.0F, 0.0369F,
    0.0661F, 0.096F, 0.1259F, 0.1544F, 0.183F, 0.2169F, 0.268F, 0.343F, 0.4426F,
    0.5821F, 0.7082F, 0.8211F, 0.9008F, 0.9672F, 0.9997F, 0.0F, 0.0375F, 0.064F,
    0.0897F, 0.117F, 0.1435F, 0.1692F, 0.2003F, 0.2472F, 0.3177F, 0.4161F,
    0.5562F, 0.7001F, 0.8175F, 0.9008F, 0.969F, 1.0F, 0.0F, 0.0362F, 0.0588F,
    0.0822F, 0.1048F, 0.1283F, 0.1517F, 0.1777F, 0.2212F, 0.2865F, 0.3745F,
    0.521F, 0.6676F, 0.8057F, 0.9104F, 0.99F, 1.0F, 0.0F, 0.0336F, 0.0537F,
    0.0747F, 0.0957F, 0.1167F, 0.1377F, 0.1586F, 0.2034F, 0.2654F, 0.343F,
    0.4935F, 0.6487F, 0.8129F, 0.9407F, 1.0F, 1.0F, 0.0F, 0.0306F, 0.051F,
    0.0694F, 0.0888F, 0.1082F, 0.1276F, 0.146F, 0.1867F, 0.243F, 0.3205F,
    0.4902F, 0.6502F, 0.8151F, 0.9363F, 1.0003F, 1.0003F, 0.0F, 0.0265F, 0.0451F,
    0.0637F, 0.0823F, 0.0999F, 0.1185F, 0.1371F, 0.1701F, 0.229F, 0.3117F,
    0.4873F, 0.6732F, 0.854F, 0.9573F, 0.9997F, 0.9997F, 0.0F, 0.0266F, 0.0445F,
    0.0612F, 0.0791F, 0.097F, 0.1149F, 0.1328F, 0.1663F, 0.2266F, 0.3049F,
    0.4893F, 0.7016F, 0.9028F, 0.9922F, 0.9922F, 0.9922F, 0.0F, 0.0281F, 0.0457F,
    0.0634F, 0.0799F, 0.0976F, 0.1141F, 0.1329F, 0.1648F, 0.2213F, 0.2921F,
    0.4806F, 0.7105F, 0.9521F, 0.9521F, 0.9521F, 0.9521F, 0.0F, 0.0297F, 0.0471F,
    0.0633F, 0.0808F, 0.097F, 0.1144F, 0.1307F, 0.1618F, 0.2217F, 0.3027F,
    0.4897F, 0.7141F, 0.9198F, 0.9198F, 0.9198F, 0.9198F, 0.0F, 0.0328F, 0.0487F,
    0.0646F, 0.0818F, 0.0976F, 0.1148F, 0.1307F, 0.1585F, 0.222F, 0.308F,
    0.5065F, 0.7248F, 0.8849F, 0.8849F, 0.8849F, 0.8849F
} ;                                    /* Referenced by: '<S449>/Vector' */

static volatile CONST(float32, SRMR_VAR_INIT) KtSRMR_r_SpdBsdFctr_ToNet[8] =
{
    1.0F, 1.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S436>/Vector' */

static volatile CONST(float32, SRMR_VAR_INIT) KxSRMR_K_PtcBrkOffsetMultTbl[10] =
{
    0.0F, 200.0F, 500.0F, 600.0F, 700.0F, 800.0F, 1000.0F, 1200.0F, 1800.0F,
    2000.0F
} ;                                    /* Referenced by: '<S460>/Vector' */

static volatile CONST(float32, SRMR_VAR_INIT) KxSRMR_M_AccelPdlMaxWhlTrq_D[8] =
{
    0.0F, 40.0F, 60.0F, 94.0F, 121.0F, 148.0F, 175.0F, 215.0F
} ;                                    /* Referenced by: '<S470>/Vector' */

static volatile CONST(float32, SRMR_VAR_INIT) KxSRMR_M_AccelPdlMaxWhlTrq_R[8] =
{
    -113.0F, -80.0F, -64.0F, -40.0F, -30.0F, -20.0F, -10.0F, 0.0F
} ;                                    /* Referenced by: '<S471>/Vector' */

static volatile CONST(float32, SRMR_VAR_INIT) KxSRMR_M_BSGLoad[11] =
{
    0.0F, 10.0F, 21.0F, 32.0F, 43.0F, 54.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F
} ;                                    /* Referenced by: '<S146>/Vector' */

static volatile CONST(float32, SRMR_VAR_INIT) KxSRMR_M_InD_PdlMinWhlTrq[13] =
{
    -50.0F, -30.0F, -20.0F, -10.0F, -5.0F, 0.0F, 5.0F, 13.0F, 27.0F, 54.0F,
    94.0F, 121.0F, 161.0F
} ;                                    /* Referenced by: '<S461>/Vector' */

static volatile CONST(float32, SRMR_VAR_INIT) KxSRMR_M_InR_PdlMinWhlTrq[13] =
{
    -50.0F, -30.0F, -20.0F, -10.0F, 0.0F, 5.0F, 10.0F, 20.0F, 30.0F, 50.0F,
    70.0F, 90.0F, 110.0F
} ;                                    /* Referenced by: '<S462>/Vector' */

static volatile CONST(float32, SRMR_VAR_INIT) KxSRMR_Pct_PctForWhlTrq_NormalMd
    [17] =
{
    0.0F, 5.0F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 35.0F, 40.0F, 45.0F, 50.0F,
    60.0F, 75.0F, 80.0F, 90.0F, 95.0F, 100.0F
} ;                                    /* Referenced by: '<S449>/Vector' */

static volatile CONST(float32, SRMR_VAR_INIT) KxSRMR_r_SpdBsdFctr_ToNet[8] =
{
    0.0F, 13.2813F, 26.5625F, 199.218796F, 278.906311F, 411.718811F, 677.343811F,
    1208.59375F
} ;                                    /* Referenced by: '<S436>/Vector' */

static volatile CONST(float32, SRMR_VAR_INIT) KySRMR_M_AccelPdlMaxWhlTrq_D[3] =
{
    0.0F, 45.0F, 85.0F
} ;                                    /* Referenced by: '<S470>/Vector' */

static volatile CONST(float32, SRMR_VAR_INIT) KySRMR_M_AccelPdlMaxWhlTrq_R[3] =
{
    0.0F, 20.0F, 35.0F
} ;                                    /* Referenced by: '<S471>/Vector' */

static volatile CONST(float32, SRMR_VAR_INIT) KySRMR_Pct_PctForWhlTrq_NormalMd
    [17] =
{
    0.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F,
    110.0F, 120.0F, 130.0F, 140.0F, 150.0F, 160.0F
} ;                                    /* Referenced by: '<S449>/Vector' */

#define STOP_SEC_CALIB_UNSPECIFIED_SRMR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_SRMR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(float32, SRMR_VAR_INIT) VaSRMC_y_MtrTrqCmd[2];/* '<S416>/Switch' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_Cnt_CreepSpeedCoumt;/* '<S445>/switch5' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_Cnt_CreepSpeedCount;/* '<S466>/LimiterSwitch1' */
static VAR(uint16, SRMR_VAR_INIT) VeSRMC_Cnt_Lv2AHH_ApplyRelease_ReqFlt;/* '<S234>/Merge' */
static VAR(uint16, SRMR_VAR_INIT) VeSRMC_Cnt_Lv2AHH_ModifyAccel_ReqFlt;/* '<S237>/Merge' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_K_PtcBrkOffsetMultTbl;/* '<S460>/Vector' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_AccelPdlMaxWhlTrq_Arb;/* '<S468>/Switch1' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_AccelPdlMaxWhlTrq_D;/* '<S470>/Vector' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_AccelPdlMaxWhlTrq_R;/* '<S471>/Vector' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_AccelPdlMinWhlTrq_ArbBrk;/* '<S445>/Switch' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_AccelPdlMinWhlTrq_D;/* '<S461>/Vector' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_AccelPdlMinWhlTrq_R;/* '<S462>/Vector' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_AccelPdlMinWhlTrq_VehSpdFA;/* '<S445>/Switch5' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_BSGACtTrq_AStrt;/* '<S16>/Signal_Conversion' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_BSGACtTrq_CC_TiAStp;/* '<S134>/Switch' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_BSGACtTrq_PC_AStrt;/* '<S16>/Merge' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_BSGACtTrq_PC_TiAStp;/* '<S135>/Switch' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_BSGACtTrq_TiAStp;/* '<S17>/Merge' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_BSGActTorque;/* '<S271>/Switch1' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_BSGLd_MtrTrqCmnd;/* '<S146>/Vector' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_DrvrIntndedTotBrkTrq;/* '<S420>/Product3' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_Lv2AccelPdlMaxWhlTrq;/* '<S467>/Switch1' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_Lv2AeCoastTrqDiffArb;/* '<S18>/Switch1' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_Lv2AeCoastTrqDiffDec;/* '<S18>/Sum1' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_Lv2AeCoastTrqDiffFinal;/* '<S165>/Switch' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_Lv2BrkTrqRdctn;/* '<S427>/Sum2' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_Lv2BrkTrqRdctn_Arb;/* '<S431>/Switch1' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_Lv2BrkTrqRdctn_Min;/* '<S439>/Switch' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_Lv2BrkTrqRdctn_Raw;/* '<S430>/Switch1' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_Lv2DrvrTrqReq;/* '<S432>/Switch1' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_Lv2DrvrTrqReqFinal;/* '<S429>/Switch1' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_Lv2DrvrTrqReq_NetArb;/* '<S427>/Sum1' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_Lv2MinMaxDiffAdded;/* '<S444>/Product' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_Lv2MinMaxTrqDiff;/* '<S444>/Sum1' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_Lv2TotBrkTrq_Arb;/* '<S441>/Switch1' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_Lv2TotBrkTrq_Final;/* '<S427>/Product' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_Lv2TotBrkTrq_Max;/* '<S438>/Switch' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_Lv2TotBrkTrq_Max_Arb;/* '<S427>/Sum3' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_Lv2_AccelPdlWhlTrq;/* '<S444>/Sum' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_MaxTrqHardLim;/* '<S417>/Switch2' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_MaxTrqMedLim;/* '<S417>/Switch1' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_MaxTrqSoftLim;/* '<S417>/Switch' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_MaxTrqUltraHardLim;/* '<S417>/Switch3' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_MinCreepTrq;/* '<S445>/switch6' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_MinCreepTrq1;/* '<S463>/Switch' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_MinCreepTrq2;/* '<S464>/Switch' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_MtrATorq;/* '<S418>/VeSRMC_M_MtrATorq' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_MtrATorqCmnd_AStrt;/* '<S16>/Merge4' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_MtrATorqCmnd_TiAStp;/* '<S17>/Merge4' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_MtrA_MaxTorq_final;
                                      /* '<S414>/VeSRMC_M_MtrA_MaxTorq_final' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_MtrA_MinTorq_final;
                                      /* '<S414>/VeSRMC_M_MtrA_MinTorq_final' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_MtrA_TorqCmnd_BSG;/* '<S382>/Switch1' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_MtrA_TrqCmdLimd;/* '<S416>/Gain' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_MtrA_TrqCmdLimdRampd;/* '<S419>/Gain' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_MtrA_TrqCmdRngLimd;/* '<S515>/LimiterSwitch1' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_MtrBTorq;/* '<S418>/VeSRMC_M_MtrBTorq' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_MtrB_MaxTorq_final;
                                      /* '<S414>/VeSRMC_M_MtrB_MaxTorq_final' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_MtrB_MinTorq_final;
                                      /* '<S414>/VeSRMC_M_MtrB_MinTorq_final' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_MtrB_TrqCmdLimd;/* '<S416>/Gain1' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_MtrB_TrqCmdLimdRampd;/* '<S419>/Gain1' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_MtrB_TrqCmdRngLimd;/* '<S514>/LimiterSwitch1' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_NorMinTrq;/* '<S445>/switch2' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_NorMinTrq1;/* '<S450>/Switch1' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_NorMinTrq2;/* '<S445>/switch3' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_NorMinTrq3;/* '<S445>/Multiply' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_PtcHevMinWhlCreepTrq;/* '<S465>/Switch' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_PtcHevMinWhlCreepTrqInc;/* '<S445>/Summation' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_TotFnlTrqTar;/* '<S417>/Gain' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_TotTrqTarFrnt;/* '<S559>/Switch1' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_TotTrqTarRe;/* '<S560>/Switch1' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_TrqRarFrnt;/* '<S418>/VeSRMC_M_TtargetFront' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_M_TrqTarRe;/* '<S418>/VeSRMC_M_TtargetRear' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_Pct_Lv2PctForWhlTrqCalc;/* '<S447>/Switch1' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_Pct_PctForWhlTrq_NormalMd;/* '<S449>/Vector' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_U_48VBattVolt;/* '<S168>/Switch1' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_U_48VBattVolt_Arb;/* '<S169>/Switch1' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_U_APM_VdcLvSetP_AStrt;/* '<S16>/Merge6' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_U_APM_VdcLvSetP_TiAStp;/* '<S17>/Merge6' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_48VBusVoltLow;/* '<S21>/Comparison8' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_48VSOC_Ok;/* '<S17>/Comparison7' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_48VSOC_OkForMtrTrqCmnd;/* '<S17>/Logical5' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_AHHCheckEnabled;/* '<S26>/Logical1' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_AHH_Flt;/* '<S26>/Logical2' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_APMFailRsn_NoFail;/* '<S22>/Comparison3' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_APMFailRsn_SNA;/* '<S22>/Comparison5' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_APM_Fail_SNA;/* '<S22>/Comparison2' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_APM_Failure;/* '<S22>/Comparison4' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_APM_HVBatVltFA;/* '<S21>/Logical' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_APM_Malfunction;/* '<S22>/Logical1' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_APM_NoFailRsn;/* '<S22>/Logical3' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_APM_OperModeEnableFA;/* '<S262>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_APM_OperModeEnable_AStrtFA;/* '<S258>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_APM_VdcLvSetPFA;/* '<S264>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_APM_VdcLvSetP_AStrtFA;/* '<S259>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_APM_VdcLvSetP_FAFA;/* '<S266>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_APM_VdcLvSetP_FA_AStrtFA;/* '<S260>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_AWDTrqFixdRepartition;/* '<S412>/LimitationCondMet7' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_ActiveDisMtrA;/* '<S517>/Relational_Operator1' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_ActiveDisMtrB;/* '<S517>/Relational_Operator' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_ActualAxleTrqFA;/* '<S584>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_ApplyEPB_SpdRatFlt;/* '<S45>/Logical139' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_ApplyRelease_Failing;/* '<S225>/Switch1' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_BPCM_HVBatVltFA;/* '<S21>/Logical3' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_BSGActTorqueFA;/* '<S277>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_BSGActualTorqueFA;/* '<S282>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_BSGActualTorqueFAFA;/* '<S279>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_BSGChrgIdleSpeedTargetFA;/* '<S284>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_BSGChrgIdleSpeedTargetFAFA;/* '<S280>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_BSGChrgIdleSpeedTtFA;/* '<S278>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_BSGFltActv;/* '<S45>/Logical254' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_BattCntctrNotOpn;/* '<S22>/Logical8' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_BattCntctrOpnReq;/* '<S22>/Logical4' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_CanLocStatusEnbl;/* '<S12>/EQUAL' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_CmndActvDisch;/* '<S15>/Logical1' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_CmndCntctrOpn;/* '<S15>/Comparison4' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_CmndDisbl;/* '<S15>/Logical' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_CntctrsClosed;/* '<S17>/Logical' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_CurrentGearFA;/* '<S335>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_DTRCmdFlt_TrqSplit_DT;/* '<S390>/OR1' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_DisImmdMtrA;/* '<S517>/Relational_Operator3' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_DisImmdMtrB;/* '<S517>/Relational_Operator2' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_DisableECoast;/* '<S18>/Logical1' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_DisableOPD;/* '<S18>/Logical2' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_DisblBSG;/* '<S17>/Logical1' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_EPBSpdApplyThsh;/* '<S45>/Comparison1' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_EPB_Hold_ReqFA;/* '<S367>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_EngCLITermFA;/* '<S377>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_EngCntrlModeFA;/* '<S301>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_EngDFCOReqFA;/* '<S309>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_EngTrqCmndImmedFA;/* '<S303>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_EngTrqCmndPrdtdFA;/* '<S305>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_EstRegenBrkAxTorqFA;/* '<S379>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_FWDTrqRepartition;/* '<S412>/LimitationCondMet9' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_GatedParkSwFA;/* '<S373>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_HCPMaxEngRPMFA;/* '<S344>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_HCPMaxEngRPMFAFA;/* '<S342>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_HCPMaxEngRPM_AStrtFA;/* '<S341>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_HEV_ESS_ModeFA;/* '<S371>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_HVBatCntctrStat_Clsd;/* '<S17>/Comparison5' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_HVBatCntctrStat_CntctrOpn;/* '<S17>/Comparison3' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_HVBatCntctrStat_PreChrg;/* '<S17>/Comparison6' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_HVBatCntctrStat_PreChrgFld;/* '<S17>/Comparison2' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_HVBatCntctrStat_PreChrgInhb;/* '<S17>/Comparison1' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_HVBatCntctrStat_SNA;/* '<S17>/Comparison4' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_HardLimitationEnable;/* '<S412>/LimitationCondMet2' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_HybCmndEngTorqRespTypFA;/* '<S307>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_HybFeedback_ECMFA;/* '<S313>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_KeyOffLimitationEnable;/* '<S412>/LimitationCondMet5' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_Lv2AHH_ApplyRelease_ReqFlt;/* '<S26>/Comparison2' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_Lv2AHH_ModifyAccel_ReqFlt;/* '<S26>/Comparison3' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_Lv2CntctrCmnd_Cls;/* '<S22>/Comparison10' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_Lv2CntctrCmnd_Opn;/* '<S22>/Comparison7' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_Lv2CntctrCmnd_Opn_Arb;/* '<S22>/Logical11' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_Lv2DrvrTrqReqDflt;/* '<S427>/Comparison4' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_Lv2MntrFlt_BSG;/* '<S45>/Logical147' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_MainHighVltCntctrCmdFA;/* '<S292>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_MaxAxleTrqCruiseFA;/* '<S586>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_MedLimitationEnable;/* '<S412>/LimitationCondMet1' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_MinAxleTrqCruiseFA;/* '<S582>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_MissedInsrFlt;/* '<S45>/ParkPawl_Missed_Insr' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_MissedParkReqFlt;/* '<S45>/ParkPawl_Missed_ParkReq' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_ModifyAccel_Failing;/* '<S226>/Switch1' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_MtrA_MdCmdLimd_tempFA;/* '<S541>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_MtrA_MdCmndFA;/* '<S404>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_MtrA_MdCmnd_AStrtFA;/* '<S385>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_MtrA_MdCmnd_TiAStpFA;/* '<S389>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_MtrA_TorqCmndFA;/* '<S406>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_MtrA_TorqCmnd_AStrtFA;/* '<S384>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_MtrA_TorqCmnd_TiAStpFA;/* '<S387>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_MtrB_MdCmdLimd_tempFA;/* '<S542>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_MtrB_MdCmndFA;/* '<S410>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_MtrB_TorqCmndFA;/* '<S408>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_MtrInvrtrFltd;/* '<S21>/Comparison6' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_MtrMdCmdDsblImmd;/* '<S517>/Comparison' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_NoAlternatorMdRemAction;/* '<S21>/Logical4' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_NoBattCntctrOpnReq;/* '<S22>/Logical5' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_OkToClsBattCntctr;/* '<S22>/Logical7' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_OkToCmndBattOpn;/* '<S22>/Logical10' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_PPawl_RequestFA;/* '<S35>/Comparison' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_PRNDLReqFA;/* '<S327>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_PRND_Rev;/* '<S41>/Comparison5' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_Popup_Msg9FA;/* '<S348>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_PpawlInsrtFailed;/* '<S45>/Logical136' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_PreChrgActv;/* '<S17>/Logical4' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_RWDTrqRepartition;/* '<S412>/LimitationCondMet8' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_RegenBrkAxTorqCapFA;/* '<S592>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_RegenBrkAxTorqCapFrntFA;/* '<S588>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_RegenBrkAxTorqCapRearFA;/* '<S590>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_RstOnKeyOff;/* '<Root>/VeSRMC_b_RstOnKeyOff' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_ShifterPOSFA;/* '<S331>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_SnsdTi_notVldFA;/* '<S311>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_SoftLimitationEnable;/* '<S412>/LimitationCondMet' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_SplitFrntTrqReqFA;/* '<S247>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_SplitRearTrqReqFA;/* '<S249>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_SrvcBattReChrgFiSts_Prev;/* '<S220>/OR1' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_StopLimitationEnable;/* '<S412>/LimitationCondMet4' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_TargetGearFA;/* '<S329>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_ThermEveCntctrOpnRq;/* '<S286>/Lv1Failed' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_ThermEveFaild;/* '<S286>/ThermalEventReceived3' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_ThermEveFailg;/* '<S286>/ThermalEventReceived' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_TragetStsDischarge;/* '<S209>/Logical1' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_TransOutTrqCmdFlt;/* '<S4>/Logical5' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_TransWarn2FA;/* '<S574>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_UltraHardLimitationEnable;/* '<S412>/LimitationCondMet3' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_VehSpdRatFailed_Arb;/* '<S45>/Logical135' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_VehSpd_SOC_FA;/* '<S446>/Logical1' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_VldtdTransShiftRngStFA;/* '<S325>/FA_Latch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMC_b_VldtdTransShiftRngStTmpFA;/* '<S333>/FA_Latch' */
static VAR(uint16, SRMR_VAR_INIT) VeSRMC_cnt_DischargeCntr;/* '<S519>/Switch' */
static VAR(uint16, SRMR_VAR_INIT) VeSRMC_e_APMMode_AStrt;/* '<S16>/Merge5' */
static VAR(uint16, SRMR_VAR_INIT) VeSRMC_e_APMMode_TiAStp;/* '<S17>/Merge5' */
static VAR(uint16, SRMR_VAR_INIT) VeSRMC_e_BattCntctrOpnCmndArb;/* '<S183>/Switch1' */
static VAR(uint16, SRMR_VAR_INIT) VeSRMC_e_ESMBasedPRNDReq;/* '<S14>/Switch' */
static VAR(TeSRMR_e_GRAR_Action, SRMR_VAR_INIT) VeSRMC_e_GRAR_Action;/* '<S48>/VeSRMR_e_GRAR_Action' */
static VAR(uint16, SRMR_VAR_INIT) VeSRMC_e_Lv2CntctrCmnd;/* '<S182>/Switch1' */
static VAR(uint16, SRMR_VAR_INIT) VeSRMC_e_Lv2CntctrCmnd_Intmnt;/* '<S181>/Switch1' */
static VAR(TeLTIR_e_KeySts, SRMR_VAR_INIT) VeSRMC_e_Lv2KeySts;/* '<S8>/Switch9' */
static VAR(TeHTDR_e_SwitchMd, SRMR_VAR_INIT) VeSRMC_e_MtrA_MdCmdLimd;/* '<S415>/Merge' */
static VAR(TeHTDR_e_SwitchMd, SRMR_VAR_INIT) VeSRMC_e_MtrA_MdCmnd_BSG;/* '<S383>/Switch1' */
static VAR(TeHTDR_e_SwitchMd, SRMR_VAR_INIT) VeSRMC_e_MtrB_MdCmdLimd;/* '<S415>/Merge1' */
static VAR(TeHTDR_e_SwitchMd, SRMR_VAR_INIT) VeSRMC_e_MtrB_MdCmndIntrm;/* '<S40>/Switch3' */
static VAR(TeHTDR_e_SwitchMd, SRMR_VAR_INIT) VeSRMC_e_MtrMdCmnd_AStrt;/* '<S102>/DataTypeConversion' */
static VAR(TeHTDR_e_SwitchMd, SRMR_VAR_INIT) VeSRMC_e_MtrMdCmnd_MtrA;/* '<S97>/Switch1' */
static VAR(TeHTDR_e_SwitchMd, SRMR_VAR_INIT) VeSRMC_e_MtrMdCmnd_MtrB;/* '<S98>/Switch1' */
static VAR(TeHTDR_e_SwitchMd, SRMR_VAR_INIT) VeSRMC_e_MtrMdCmnd_TiAStp;/* '<S127>/DataTypeConversion' */
static VAR(TePPCR_e_PCUCtrl_PP_REQ, SRMR_VAR_INIT)
    VeSRMC_e_PPawl_HW_EngageReqDlyd;   /* '<S362>/Switch1' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_n_BSGChrgIdlSpdTrgt_AStrt;/* '<S16>/Merge1' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_n_BSGChrgIdlSpdTrgt_TiAStp;/* '<S17>/Merge1' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_n_HCPMaxEngRPM_AStrt;/* '<S16>/Merge2' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_n_HCPMaxEngRPM_TiAStp;/* '<S17>/Merge2' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_n_Lv2_MtrSpd;/* '<S421>/Product' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_r_DrvrIntndedTotBrkTrqFA;/* '<S423>/Sum3' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_r_Lv2BrkTrq;/* '<S420>/Switch2' */
static VAR(float32, SRMR_VAR_INIT) VeSRMC_r_Lv2SpdBsdFctr;/* '<S436>/Vector' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMI_b_EngTorqCmndMntrFlt;/* '<S4>/VeSRMI_b_EngTorqCmndMntrFlt' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMI_b_Lv2AutoStpFA;/* '<S4>/VeSRMI_b_Lv2AutoStpFA' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMI_b_Lv2AutoStrtFA;/* '<S4>/VeSRMI_b_Lv2AutoStrtFA' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMI_b_Lv2Lv1AHH_ModifyAccel_Req;
                                 /* '<S4>/VeSRMI_b_Lv2Lv1AHH_ModifyAccel_Req' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMI_b_Lv2PpawlInsrtMntrFailed;
                                   /* '<S4>/VeSRMI_b_Lv2PpawlInsrtMntrFailed' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMI_b_MissedNeutralReqFlt;/* '<S4>/VeSRMI_b_MissedNeutralReqFlt' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMI_b_MissedParkReqFlt;/* '<S4>/VeSRMI_b_MissedParkReqFlt' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMI_b_MtrMdVldtnFlt;/* '<S4>/VeSRMI_b_MtrMdVldtnFlt' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMI_b_OutTrq_MaxLimFail;/* '<S599>/Switch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMI_b_OutTrq_MinLimFail;/* '<S600>/Switch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMI_b_P4TrqMntrFlt;/* '<S601>/Switch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMI_b_PpawlInsrtFailed;/* '<S4>/VeSRMI_b_PpawlInsrtFailed' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMI_b_RgnEstMntrFlt;/* '<S4>/VeSRMI_b_RgnEstMntrFlt' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMI_b_SL2outBEV_VDAB_WED_SafActive;/* '<S12>/BooleanChk1' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMI_b_SL2outBEV_VDAB_eAWD_SafActive;/* '<S12>/BooleanChk' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMI_b_SL2outBEV_VDAB_eLOCK_SafActive;/* '<S12>/BooleanChk2' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMI_b_SL2outBEV_VDAB_eLSD_SafActive;/* '<S12>/BooleanChk3' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMI_b_TransOutTrqCmdFlt;/* '<S598>/Switch' */
static VAR(boolean, SRMR_VAR_INIT) VeSRMI_b_VehSpdRatFailed;/* '<S4>/VeSRMI_b_VehSpdRatFailed' */
static VAR(TePWMD_e_CanLocStatus, SRMR_VAR_INIT) VeSRMI_e_CanLocEnblStatus;/* '<S46>/DataTypeConversion' */
static VAR(uint16, SRMR_VAR_INIT) VeSRMI_e_Lv2EngStrtStpMd;/* '<S4>/VeSRMI_e_Lv2EngStrtStpMd' */
static VAR(uint16, SRMR_VAR_INIT) VeSRMI_e_Lv2Lv1AHH_ApplyRelease_Req;
                                /* '<S4>/VeSRMI_e_Lv2Lv1AHH_ApplyRelease_Req' */
static VAR(uint16, SRMR_VAR_INIT) VeSRMR_g_RA_InputSet1;/* '<Root>/VeSRMR_g_RA_InputSet1' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_SRMR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_SRMR
#include "MemMap.h"

CONST(ConstB_SRMR_ac_T, SRMR_VAR_INIT) SRMR_ac_ConstB =
{
    CeTRGR_e_NoSelectionAvailable,     /* '<S637>/Constant' */
    CeSRMR_e_NoLimitation,             /* '<S634>/Constant' */
    CeSRMR_e_TargetSts_DiagOff,        /* '<S635>/Constant' */
    CeSRMR_e_TargetSts_DiagOff,        /* '<S631>/Constant' */
    CeSRMR_e_TargetSts_DiagOff,        /* '<S632>/Constant' */
    CeSRMR_e_TargetSts_DiagOff,        /* '<S633>/Constant' */
    CePPCR_e_Req_No_Req,               /* '<S636>/Constant' */
    CeHTDR_e_DsblNoSwitch              /* '<S630>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_SRMR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_SRMR
#include "MemMap.h"

CONST(ConstP_SRMR_ac_T, SRMR_VAR_INIT) SRMR_ac_ConstP =
{
    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S470>/Vector'
     *   '<S471>/Vector'
     */
    {
        7U, 2U
    },

    /* Computed Parameter: Vector_maxIndex
     * Referenced by: '<S449>/Vector'
     */
    {
        16U, 16U
    }
};

#define STOP_SEC_CONST_UNSPECIFIED_SRMR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_SRMR
#include "MemMap.h"

VAR(B_SRMR_ac_T, SRMR_VAR_INIT) SRMR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_SRMR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_SRMR
#include "MemMap.h"

VAR(DW_SRMR_ac_T, SRMR_VAR_INIT) SRMR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_SRMR
#include "MemMap.h"

static FUNC(void, SRMR_CODE_LOCAL) SRMR_ac_IfAct(VAR(uint16, AUTOMATIC) rtu_In1,
    P2VAR(uint16, AUTOMATIC, SRMR_VAR_INIT) rty_Out1);

/*
 * Output and update for action system:
 *    '<S234>/IfAct'
 *    '<S234>/ElseAct'
 *    '<S237>/IfAct'
 *    '<S237>/ElseAct'
 */
static FUNC(void, SRMR_CODE_LOCAL) SRMR_ac_IfAct(VAR(uint16, AUTOMATIC) rtu_In1,
    P2VAR(uint16, AUTOMATIC, SRMR_VAR_INIT) rty_Out1)
{
    /* Inport: '<S236>/In1' */
    *rty_Out1 = rtu_In1;
}

/* Model step function for TID1 */
FUNC(void, SRMR_CODE) SRMR_MedTEB(void) /* Explicit Task: MedTEB */
{
    sint32 i;
    float32 rtb_Add[2];
    float32 rtb_Add2[2];
    float32 tmp[2];
    float32 tmp_0[2];
    float32 VeSRMR_M_MtrB_TorqCmnd;
    float32 VeSRMR_n_BSGChrgIdleSpeedTarget;
    float32 VeSRMR_n_HCPMaxEngRPM;
    float32 rtb_TmpSignalConversionAtVeGRAR_r_RA_RIP;
    float32 rtb_TmpSignalConversionAtVePSMR_Pct_Lv2A;
    float32 rtb_TmpSignalConversionAtVeRGNR_M_AeCoas;
    float32 rtb_TmpSignalConversionAtVeSCMR_M_Lv2Mtr;
    float32 rtb_TmpSignalConversionAtVeSCMR_Pct_Lv2H;
    float32 rtb_TmpSignalConversionAtVeSCMR_U_HVBusV;
    float32 rtb_TmpSignalConversionAtVeSCMR_U_Lv2EVR;
    float32 rtb_TmpSignalConversionAtVeSSMR_v_VehSpd;
    float32 tmpRead;
    float32 tmpRead_0;
    float32 tmpRead_1;
    float32 tmpRead_1d;
    float32 tmpRead_1f;
    float32 tmpRead_1n;
    float32 tmpRead_1s;
    float32 tmpRead_1t;
    float32 tmpRead_9;
    float32 tmpRead_a;
    float32 tmpRead_d;
    float32 tmpRead_g;
    float32 tmpRead_h;
    float32 tmpRead_i;
    float32 tmpRead_r;
    float32 tmpRead_t;
    float32 tmpRead_u;
    float32 tmpRead_w;
    float32 tmpRead_y;
    float32 tmpRead_z;
    sint16 tmpRead_2;
    sint16 tmpRead_3;
    sint16 tmpRead_6;
    uint16 VeSRMR_e_CurrentGear;
    uint16 VeSRMR_e_PRNDLReq;
    uint16 rtb_DataTypeConversion4;
    uint16 rtb_TmpSignalConversionAtVeLTIR_e_Lv2Brk;
    uint16 rtb_TmpSignalConversionAtVeSTMR;
    uint16 rtb_VeSRMC_e_VldtdTransShiftRngStTmp;
    uint16 tmpRead_1v;
    uint16 tmpRead_1w;
    uint16 tmpRead_1x;
    uint16 tmp_1;
    uint16 tmp_2;
    uint16 tmp_3;
    uint16 tmp_4;
    uint16 tmp_5;
    uint16 tmp_6;
    uint16 tmp_7;
    uint16 tmp_8;
    TeESSR_e_EngStrtStpMd tmpRead_v;
    TeGENR_e_APM_OperMode tmpRead_q;
    TeGRAR_e_MSSBEV_Action rtb_TmpSignalConversionAtVeGRAR_e_MSSBEV;
    TeGRAR_e_PRND_Req rtb_TmpSignalConversionAtVeGRAR_e_PRND_R;
    TeGRAR_e_ParkPawlReq rtb_TmpSignalConversionAtVeGRAR_e_ParkPa;
    TeGRAR_e_TotMtrTrqRmdlActn rtb_TmpSignalConversionAtVeGRAR_e_TotMtr;
    TeGSMR_e_DrvRqShftROT rtb_TmpSignalConversionAtVeGSMR_e_DrvrPR;
    TeHMIR_e_TransWarn2Msgs tmpRead_5;
    TeHMIR_e_VldtdTransRngSt_ShifterPOS tmpRead_7;
    TeHPMR_e_BattCntctrCmd tmpRead_10;
    TeHTDR_e_AHH_ApplyReleaseReq tmpRead_m;
    TeHTDR_e_SwitchMd rtb_TmpSignalConversionAtVeHTDR_e_MtrB_M;
    TePPCR_e_PCUCtrl_PP_REQ rtb_TmpSignalConversionAtVeGRAR;
    TePSMR_e_LV2PVSMode tmpRead_1u;
    TeSRMR_e_GRAR_TargetSts VeSRMR_e_GRAR_WED_TargetSts;
    TeSRMR_e_GRAR_TargetSts VeSRMR_e_GRAR_eAWD_TargetSts;
    TeSRMR_e_GRAR_TargetSts VeSRMR_e_GRAR_eLOCK_TargetSts;
    TeSRMR_e_GRAR_TargetSts VeSRMR_e_GRAR_eLSD_TargetSts;
    TeSRMR_e_HVBatCntctrStat VeSRMC_b_CmndCntctrOpn_tmp;
    TeTRAR_e_EngCntrlMode tmpRead_8;
    TeTRAR_e_HybCmndEngTorqRespTyp tmpRead_b;
    TeTRGR_e_EPBReq tmpRead_4;
    TeTRGR_e_TransRangeState rtb_TmpSignalConversionAtVeTRGR_e_VldtdT;
    uint8 rtb_TmpSignalConversionAtVeSCMR_e_Lv2APM;
    uint8 rtb_TmpSignalConversionAtVeSCMR_e_Lv2A_a;
    uint8 rtb_TmpSignalConversionAtVeSCMR_e_Lv2ESS;
    uint8 rtb_TmpSignalConversionAtVeSCMR_e_MSSBEV;
    uint8 tmpRead_1c;
    uint8 tmpRead_x;
    boolean Switch1_a;
    boolean VeSRMC_b_MissedParkReqFlt_tmp;
    boolean VeSRMR_b_CrashDischarge;
    boolean rtb_AnyTrue1;
    boolean rtb_AnyTrue10;
    boolean rtb_AnyTrue3;
    boolean rtb_AnyTrue4;
    boolean rtb_AnyTrue5;
    boolean rtb_AnyTrue6;
    boolean rtb_AnyTrue7;
    boolean rtb_AnyTrue8;
    boolean rtb_Edge_Failing;
    boolean rtb_Operator2;
    boolean rtb_Relational_Operator_m;
    boolean rtb_TmpSignalConversionAtVeDTMR_b_Lv2_OP;
    boolean rtb_TmpSignalConversionAtVeEMMR_b_Lv2APM;
    boolean rtb_TmpSignalConversionAtVeGRAR_b_Disa_d;
    boolean rtb_TmpSignalConversionAtVeGRAR_b_Disabl;
    boolean rtb_TmpSignalConversionAtVeGSMR_b_Secure;
    boolean rtb_TmpSignalConversionAtVeHPMR_b_MtrSys;
    boolean rtb_TmpSignalConversionAtVeLTIR_b_Lv2Brk;
    boolean rtb_TmpSignalConversionAtVeLTIR_b_Lv2HV_;
    boolean rtb_TmpSignalConversionAtVeLTIR_b_Lv2H_d;
    boolean rtb_TmpSignalConversionAtVeLTIR_b_Lv2Mtr;
    boolean rtb_TmpSignalConversionAtVeSCMR_b_Lv2EVR;
    boolean rtb_TmpSignalConversionAtVeSCMR_b_Lv2HV_;
    boolean rtb_TmpSignalConversionAtVeSSMR_b_VehSpd;
    boolean rtb_TmpSignalConversionAtVeSTMR_b_DrvrIn;
    boolean rtb_TmpSignalConversionAtVeSTMR_b_FrontA;
    boolean tmpRead_11;
    boolean tmpRead_12;
    boolean tmpRead_13;
    boolean tmpRead_14;
    boolean tmpRead_15;
    boolean tmpRead_16;
    boolean tmpRead_17;
    boolean tmpRead_18;
    boolean tmpRead_19;
    boolean tmpRead_1a;
    boolean tmpRead_1b;
    boolean tmpRead_1e;
    boolean tmpRead_1g;
    boolean tmpRead_1h;
    boolean tmpRead_1i;
    boolean tmpRead_1j;
    boolean tmpRead_1k;
    boolean tmpRead_1l;
    boolean tmpRead_1m;
    boolean tmpRead_1o;
    boolean tmpRead_1p;
    boolean tmpRead_1q;
    boolean tmpRead_1r;
    boolean tmpRead_c;
    boolean tmpRead_e;
    boolean tmpRead_f;
    boolean tmpRead_j;
    boolean tmpRead_k;
    boolean tmpRead_l;
    boolean tmpRead_n;
    boolean tmpRead_o;
    boolean tmpRead_p;
    boolean tmpRead_s;

    /* Inport: '<Root>/VeHPMR_e_HighVltCntctrCntrl' */
    (void)Rte_Read_VeHPMR_e_HighVltCntctrCntrl_Value(&tmpRead_10);

    /* Inport: '<Root>/VeSTMR_b_P4TrqMntrFlt' */
    (void)Rte_Read_VeSTMR_b_P4TrqMntrFlt_Value((&(VeSRMI_b_P4TrqMntrFlt)));

    /* Inport: '<Root>/VeSTMR_b_OutTrq_MinLimFail' */
    (void)Rte_Read_VeSTMR_b_OutTrq_MinLimFail_Value
        ((&(VeSRMI_b_OutTrq_MinLimFail)));

    /* Inport: '<Root>/VeSTMR_b_OutTrq_MaxLimFail' */
    (void)Rte_Read_VeSTMR_b_OutTrq_MaxLimFail_Value
        ((&(VeSRMI_b_OutTrq_MaxLimFail)));

    /* Inport: '<Root>/VeGENR_e_stModeReq' */
    (void)Rte_Read_VeGENR_e_stModeReq_Value(&tmpRead_q);

    /* Inport: '<Root>/VeHTDR_b_AHH_ModifyAccel_Req' */
    (void)Rte_Read_VeHTDR_b_AHH_ModifyAccel_Req_Value
        ((&(VeSRMI_b_Lv2Lv1AHH_ModifyAccel_Req)));

    /* Inport: '<Root>/VeHTDR_e_AHH_ApplyRelease_Req' */
    (void)Rte_Read_VeHTDR_e_AHH_ApplyRelease_Req_Value(&tmpRead_m);

    /* Inport: '<Root>/VeMMMR_b_Lv2MtrMd_DBC_Fault' */
    (void)Rte_Read_VeMMMR_b_Lv2MtrMd_DBC_Fault_Value((&(VeSRMI_b_MtrMdVldtnFlt)));

    /* Inport: '<Root>/VeSSMR_b_VehSpdRatFailed' */
    (void)Rte_Read_VeSSMR_b_VehSpdRatFailed_Value((&(VeSRMI_b_VehSpdRatFailed)));

    /* Inport: '<Root>/VeGSMR_b_MissedNeutralReqFlt' */
    (void)Rte_Read_VeGSMR_b_MissedNeutralReqFlt_Value
        ((&(VeSRMI_b_MissedNeutralReqFlt)));

    /* Inport: '<Root>/VeGSMR_b_MissedParkReqFlt' */
    (void)Rte_Read_VeGSMR_b_MissedParkReqFlt_Value((&(VeSRMI_b_MissedParkReqFlt)));

    /* Inport: '<Root>/VeGSMR_b_PpawlInsrtMntrFailed' */
    (void)Rte_Read_VeGSMR_b_PpawlInsrtMntrFailed_Value
        ((&(VeSRMI_b_Lv2PpawlInsrtMntrFailed)));

    /* Inport: '<Root>/VeSTMR_b_RgnEstMntrFlt' */
    (void)Rte_Read_VeSTMR_b_RgnEstMntrFlt_Value((&(VeSRMI_b_RgnEstMntrFlt)));

    /* Inport: '<Root>/VeSTMR_b_TransOutTrqCmdFlt' */
    (void)Rte_Read_VeSTMR_b_TransOutTrqCmdFlt_Value
        ((&(VeSRMI_b_TransOutTrqCmdFlt)));

    /* Inport: '<Root>/VeTRAR_e_HybCmndEngTorqRespTyp' */
    (void)Rte_Read_VeTRAR_e_HybCmndEngTorqRespTyp_Value(&tmpRead_b);

    /* Inport: '<Root>/VeTRAR_e_EngCntrlMode' */
    (void)Rte_Read_VeTRAR_e_EngCntrlMode_Value(&tmpRead_8);

    /* Inport: '<Root>/VeHMIR_e_ShifterPOS' */
    (void)Rte_Read_VeHMIR_e_ShifterPOS_Value(&tmpRead_7);

    /* Inport: '<Root>/VeHMIR_e_TransWarn2' */
    (void)Rte_Read_VeHMIR_e_TransWarn2_Value(&tmpRead_5);

    /* Inport: '<Root>/VeSRAR_e_EPB_Hold_Req' */
    (void)Rte_Read_VeSRAR_e_EPB_Hold_Req_Value(&tmpRead_4);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRMR_MedTEB'
     */
    /* SignalConversion generated from: '<S1>/VePSMR_Pct_Lv2AccelPdlPos' incorporates:
     *  Inport: '<Root>/VePSMR_Pct_Lv2AccelPdlPos'
     */
    (void)Rte_Read_VePSMR_Pct_Lv2AccelPdlPos_Value
        (&rtb_TmpSignalConversionAtVePSMR_Pct_Lv2A);

    /* SignalConversion generated from: '<S1>/VeSSMR_v_VehSpd' incorporates:
     *  Inport: '<Root>/VeSSMR_v_VehSpd'
     */
    (void)Rte_Read_VeSSMR_v_VehSpd_Value
        (&rtb_TmpSignalConversionAtVeSSMR_v_VehSpd);

    /* SignalConversion generated from: '<S1>/VeSSMR_b_VehSpdFA' incorporates:
     *  Inport: '<Root>/VeSSMR_b_VehSpdFA'
     */
    (void)Rte_Read_VeSSMR_b_VehSpdFA_Value
        (&rtb_TmpSignalConversionAtVeSSMR_b_VehSpd);

    /* SignalConversion generated from: '<S1>/VeTRGR_e_VldtdTransShiftRngSt' incorporates:
     *  Inport: '<Root>/VeTRGR_e_VldtdTransShiftRngSt'
     */
    (void)Rte_Read_VeTRGR_e_VldtdTransShiftRngSt_Value
        (&rtb_TmpSignalConversionAtVeTRGR_e_VldtdT);

    /* SignalConversion generated from: '<S1>/VeLTIR_e_Lv2MtrA_MdCmnd' incorporates:
     *  Inport: '<Root>/VeLTIR_e_Lv2MtrA_MdCmnd'
     */
    (void)Rte_Read_VeLTIR_e_Lv2MtrA_MdCmnd_Value((&(VeSRMC_e_MtrA_MdCmdLimd)));

    /* SignalConversion generated from: '<S1>/VeHTDR_e_MtrB_MdCmnd' incorporates:
     *  Inport: '<Root>/VeHTDR_e_MtrB_MdCmnd'
     */
    (void)Rte_Read_VeHTDR_e_MtrB_MdCmnd_Value
        (&rtb_TmpSignalConversionAtVeHTDR_e_MtrB_M);

    /* SignalConversion generated from: '<S1>/VeGSMR_e_DrvrPRNDRq' incorporates:
     *  Inport: '<Root>/VeGSMR_e_DrvrPRNDRq'
     */
    (void)Rte_Read_VeGSMR_e_DrvrPRNDRq_Value
        (&rtb_TmpSignalConversionAtVeGSMR_e_DrvrPR);

    /* SignalConversion generated from: '<S1>/VeGSMR_b_SecureVehicle' incorporates:
     *  Inport: '<Root>/VeGSMR_b_SecureVehicle'
     */
    (void)Rte_Read_VeGSMR_b_SecureVehicle_Value
        (&rtb_TmpSignalConversionAtVeGSMR_b_Secure);

    /* SignalConversion generated from: '<S1>/VeSCMR_U_HVBusVolt' incorporates:
     *  Inport: '<Root>/VeSCMR_U_HVBusVolt'
     */
    (void)Rte_Read_VeSCMR_U_HVBusVolt_Value
        (&rtb_TmpSignalConversionAtVeSCMR_U_HVBusV);

    /* SignalConversion generated from: '<S1>/VeLTIR_b_Lv2HV_BatCntctrStat_FA' incorporates:
     *  Inport: '<Root>/VeLTIR_b_Lv2HV_BatCntctrStat_FA'
     */
    (void)Rte_Read_VeLTIR_b_Lv2HV_BatCntctrStat_FA_Value
        (&rtb_TmpSignalConversionAtVeLTIR_b_Lv2HV_);

    /* SignalConversion generated from: '<S1>/VeSCMR_M_Lv2MtrA_TrqAchieved' incorporates:
     *  Inport: '<Root>/VeSCMR_M_Lv2MtrA_TrqAchieved'
     */
    (void)Rte_Read_VeSCMR_M_Lv2MtrA_TrqAchieved_Value
        (&rtb_TmpSignalConversionAtVeSCMR_M_Lv2Mtr);

    /* SignalConversion generated from: '<S1>/VeLTIR_b_Lv2MtrA_TrqAchieved_FA' incorporates:
     *  Inport: '<Root>/VeLTIR_b_Lv2MtrA_TrqAchieved_FA'
     */
    (void)Rte_Read_VeLTIR_b_Lv2MtrA_TrqAchieved_FA_Value
        (&rtb_TmpSignalConversionAtVeLTIR_b_Lv2Mtr);

    /* SignalConversion generated from: '<S1>/VeSCMR_Pct_Lv2HV_BatSOC' incorporates:
     *  Inport: '<Root>/VeSCMR_Pct_Lv2HV_BatSOC'
     */
    (void)Rte_Read_VeSCMR_Pct_Lv2HV_BatSOC_Value
        (&rtb_TmpSignalConversionAtVeSCMR_Pct_Lv2H);

    /* SignalConversion generated from: '<S1>/VeLTIR_b_Lv2HV_BatSOC_FA' incorporates:
     *  Inport: '<Root>/VeLTIR_b_Lv2HV_BatSOC_FA'
     */
    (void)Rte_Read_VeLTIR_b_Lv2HV_BatSOC_FA_Value
        (&rtb_TmpSignalConversionAtVeLTIR_b_Lv2H_d);

    /* SignalConversion generated from: '<S1>/VeSCMR_U_Lv2EVRDesVSetP' incorporates:
     *  Inport: '<Root>/VeSCMR_U_Lv2EVRDesVSetP'
     */
    (void)Rte_Read_VeSCMR_U_Lv2EVRDesVSetP_Value
        (&rtb_TmpSignalConversionAtVeSCMR_U_Lv2EVR);

    /* SignalConversion generated from: '<S1>/VeSCMR_b_Lv2EVRDesVSetP_FA' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2EVRDesVSetP_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2EVRDesVSetP_FA_Value
        (&rtb_TmpSignalConversionAtVeSCMR_b_Lv2EVR);

    /* SignalConversion generated from: '<S1>/VeSCMR_e_Lv2ESS_EngStateEE' incorporates:
     *  Inport: '<Root>/VeSCMR_e_Lv2ESS_EngStateEE'
     */
    (void)Rte_Read_VeSCMR_e_Lv2ESS_EngStateEE_Value
        (&rtb_TmpSignalConversionAtVeSCMR_e_Lv2ESS);

    /* SignalConversion generated from: '<S1>/VeSCMR_b_Lv2HV_BatCntctrOpn' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2HV_BatCntctrOpn'
     */
    (void)Rte_Read_VeSCMR_b_Lv2HV_BatCntctrOpn_Value
        (&rtb_TmpSignalConversionAtVeSCMR_b_Lv2HV_);

    /* SignalConversion generated from: '<S1>/VeSCMR_e_Lv2APM_FailureType' incorporates:
     *  Inport: '<Root>/VeSCMR_e_Lv2APM_FailureType'
     */
    (void)Rte_Read_VeSCMR_e_Lv2APM_FailureType_Value
        (&rtb_TmpSignalConversionAtVeSCMR_e_Lv2APM);

    /* SignalConversion generated from: '<S1>/VeSCMR_e_Lv2APM_FailureReason' incorporates:
     *  Inport: '<Root>/VeSCMR_e_Lv2APM_FailureReason'
     */
    (void)Rte_Read_VeSCMR_e_Lv2APM_FailureReason_Value
        (&rtb_TmpSignalConversionAtVeSCMR_e_Lv2A_a);

    /* SignalConversion generated from: '<S1>/VeDTMR_b_Lv2_OPD_ON_FA' incorporates:
     *  Inport: '<Root>/VeDTMR_b_Lv2_OPD_ON_FA'
     */
    (void)Rte_Read_VeDTMR_b_Lv2_OPD_ON_FA_Value
        (&rtb_TmpSignalConversionAtVeDTMR_b_Lv2_OP);

    /* SignalConversion generated from: '<S1>/VeRGNR_M_AeCoastTorqDiff' incorporates:
     *  Inport: '<Root>/VeRGNR_M_AeCoastTorqDiff'
     */
    (void)Rte_Read_VeRGNR_M_AeCoastTorqDiff_Value
        (&rtb_TmpSignalConversionAtVeRGNR_M_AeCoas);

    /* SignalConversion generated from: '<S1>/VeSTMR_b_FrontAxleTrqEstMntrFlt' incorporates:
     *  Inport: '<Root>/VeSTMR_b_FrontAxleTrqEstMntrFlt'
     */
    (void)Rte_Read_VeSTMR_b_FrontAxleTrqEstMntrFlt_Value
        (&rtb_TmpSignalConversionAtVeSTMR_b_FrontA);

    /* SignalConversion generated from: '<S1>/VeLTIR_e_Lv2BrkPdlStat' incorporates:
     *  Inport: '<Root>/VeLTIR_e_Lv2BrkPdlStat'
     */
    (void)Rte_Read_VeLTIR_e_Lv2BrkPdlStat_Value
        (&rtb_TmpSignalConversionAtVeLTIR_e_Lv2Brk);

    /* SignalConversion generated from: '<S1>/VeSTMR_b_DrvrIntndedAxleTrqFA' incorporates:
     *  Inport: '<Root>/VeSTMR_b_DrvrIntndedAxleTrqFA'
     */
    (void)Rte_Read_VeSTMR_b_DrvrIntndedAxleTrqFA_Value
        (&rtb_TmpSignalConversionAtVeSTMR_b_DrvrIn);

    /* SignalConversion generated from: '<S1>/VeSCMR_e_MSSBEV_HVEM_TargetSts' incorporates:
     *  Inport: '<Root>/VeSCMR_e_MSSBEV_HVEM_TargetSts'
     */
    (void)Rte_Read_VeSCMR_e_MSSBEV_HVEM_TargetSts_Value
        (&rtb_TmpSignalConversionAtVeSCMR_e_MSSBEV);

    /* SignalConversion generated from: '<S1>/VeEMMR_b_Lv2APMStMode_FA' incorporates:
     *  Inport: '<Root>/VeEMMR_b_Lv2APMStMode_FA'
     */
    (void)Rte_Read_VeEMMR_b_Lv2APMStMode_FA_Value
        (&rtb_TmpSignalConversionAtVeEMMR_b_Lv2APM);

    /* SignalConversion generated from: '<S1>/VeLTIR_b_Lv2BrkTrqFlt' incorporates:
     *  Inport: '<Root>/VeLTIR_b_Lv2BrkTrqFlt'
     */
    (void)Rte_Read_VeLTIR_b_Lv2BrkTrqFlt_Value
        (&rtb_TmpSignalConversionAtVeLTIR_b_Lv2Brk);

    /* SignalConversion generated from: '<S1>/VeCANR_e_CanLocEnblStatus' incorporates:
     *  Inport: '<Root>/VeCANR_e_CanLocEnblStatus'
     */
    (void)Rte_Read_VeCANR_e_CanLocEnblStatus_VeCANR_e_CanLocEnblStatus
        ((&(VeSRMI_e_CanLocEnblStatus)));

    /* SignalConversion generated from: '<S1>/VeSABR_b_SL2outBEV_VDAB_eAWD_SafActive' incorporates:
     *  Inport: '<Root>/VeSABR_b_SL2outBEV_VDAB_eAWD_SafActive'
     */
    (void)Rte_Read_VeSABR_b_SL2outBEV_VDAB_eAWD_SafActive_Value
        ((&(VeSRMI_b_SL2outBEV_VDAB_eAWD_SafActive)));

    /* SignalConversion generated from: '<S1>/VeSABR_b_SL2outBEV_VDAB_WED_SafActive' incorporates:
     *  Inport: '<Root>/VeSABR_b_SL2outBEV_VDAB_WED_SafActive'
     */
    (void)Rte_Read_VeSABR_b_SL2outBEV_VDAB_WED_SafActive_Value
        ((&(VeSRMI_b_SL2outBEV_VDAB_WED_SafActive)));

    /* SignalConversion generated from: '<S1>/VeSABR_b_SL2outBEV_VDAB_eLOCK_SafActive' incorporates:
     *  Inport: '<Root>/VeSABR_b_SL2outBEV_VDAB_eLOCK_SafActive'
     */
    (void)Rte_Read_VeSABR_b_SL2outBEV_VDAB_eLOCK_SafActive_Value
        ((&(VeSRMI_b_SL2outBEV_VDAB_eLOCK_SafActive)));

    /* SignalConversion generated from: '<S1>/VeSABR_b_SL2outBEV_VDAB_eLSD_SafActive' incorporates:
     *  Inport: '<Root>/VeSABR_b_SL2outBEV_VDAB_eLSD_SafActive'
     */
    (void)Rte_Read_VeSABR_b_SL2outBEV_VDAB_eLSD_SafActive_Value
        ((&(VeSRMI_b_SL2outBEV_VDAB_eLSD_SafActive)));

    /* SignalConversion generated from: '<S1>/VeGRAR_e_MSSBEV_Action' incorporates:
     *  Inport: '<Root>/VeGRAR_e_MSSBEV_Action'
     */
    (void)Rte_Read_VeGRAR_e_MSSBEV_Action_Value
        (&rtb_TmpSignalConversionAtVeGRAR_e_MSSBEV);

    /* SignalConversion generated from: '<S1>/VeHPMR_b_MtrSystemActive' incorporates:
     *  Inport: '<Root>/VeHPMR_b_MtrSystemActive'
     */
    (void)Rte_Read_VeHPMR_b_MtrSystemActive_Value
        (&rtb_TmpSignalConversionAtVeHPMR_b_MtrSys);

    /* SignalConversion generated from: '<S1>/VeGRAR_b_DisableOPD' incorporates:
     *  Inport: '<Root>/VeGRAR_b_DisableOPD'
     */
    (void)Rte_Read_VeGRAR_b_DisableOPD_Value
        (&rtb_TmpSignalConversionAtVeGRAR_b_Disabl);

    /* SignalConversion generated from: '<S1>/VePPCR_e_PPawl_HW_Request' incorporates:
     *  Inport: '<Root>/VePPCR_e_PPawl_HW_Request'
     */
    (void)Rte_Read_VePPCR_e_PPawl_HW_Request_Value
        ((&(VeSRMC_e_PPawl_HW_EngageReqDlyd)));

    /* SignalConversion generated from: '<S1>/VeGRAR_e_TotMtrTrqRmdlActn' incorporates:
     *  Inport: '<Root>/VeGRAR_e_TotMtrTrqRmdlActn'
     */
    (void)Rte_Read_VeGRAR_e_TotMtrTrqRmdlActn_Value
        (&rtb_TmpSignalConversionAtVeGRAR_e_TotMtr);

    /* SignalConversion generated from: '<S1>/VeGRAR_r_RA_RIP_Ratio' incorporates:
     *  Inport: '<Root>/VeGRAR_r_RA_RIP_Ratio'
     */
    (void)Rte_Read_VeGRAR_r_RA_RIP_Ratio_Value
        (&rtb_TmpSignalConversionAtVeGRAR_r_RA_RIP);

    /* SignalConversion generated from: '<S1>/VeGRAR_b_DisableRegenBrkTrq' incorporates:
     *  Inport: '<Root>/VeGRAR_b_DisableRegenBrkTrq'
     */
    (void)Rte_Read_VeGRAR_b_DisableRegenBrkTrq_Value
        (&rtb_TmpSignalConversionAtVeGRAR_b_Disa_d);

    /* SignalConversion generated from: '<S1>/VeGRAR_e_ParkPawlReq' incorporates:
     *  Inport: '<Root>/VeGRAR_e_ParkPawlReq'
     */
    (void)Rte_Read_VeGRAR_e_ParkPawlReq_Value
        (&rtb_TmpSignalConversionAtVeGRAR_e_ParkPa);

    /* SignalConversion generated from: '<S1>/VeGRAR_e_PRND_Req' incorporates:
     *  Inport: '<Root>/VeGRAR_e_PRND_Req'
     */
    (void)Rte_Read_VeGRAR_e_PRND_Req_Value
        (&rtb_TmpSignalConversionAtVeGRAR_e_PRND_R);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SRMR_MedTEB_StartCheckpoint'
     */
    /* FunctionCaller: '<S6>/SRMR_MedTEB_StartCheckpoint' */
    Rte_Call_SRMR_MedTEB_StartCheckpoint_CheckpointReached();

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SRMI'
     */
    /* Switch: '<S598>/Switch' incorporates:
     *  Constant: '<S598>/Constant'
     */
    if (KeSRMR_b_Ovrd_ToFault)
    {
        /* Switch: '<S598>/Switch' incorporates:
         *  Constant: '<S598>/Constant1'
         *  Inport: '<Root>/VeSTMR_b_TransOutTrqCmdFlt'
         */
        VeSRMI_b_TransOutTrqCmdFlt = KeSRMR_b_ToFalt_Val;
    }

    /* End of Switch: '<S598>/Switch' */

    /* Switch: '<S599>/Switch' incorporates:
     *  Constant: '<S599>/Constant'
     */
    if (KeSRMR_b_Ovrd_ToFault_P1P4)
    {
        /* Switch: '<S599>/Switch' incorporates:
         *  Constant: '<S599>/Constant1'
         *  Inport: '<Root>/VeSTMR_b_OutTrq_MaxLimFail'
         */
        VeSRMI_b_OutTrq_MaxLimFail = KeSRMR_b_ToFlt_Val_P1P4;
    }

    /* End of Switch: '<S599>/Switch' */

    /* Switch: '<S600>/Switch' incorporates:
     *  Constant: '<S600>/Constant'
     */
    if (KeSRMR_b_Ovrd_ToFault_MinLim)
    {
        /* Switch: '<S600>/Switch' incorporates:
         *  Constant: '<S600>/Constant1'
         *  Inport: '<Root>/VeSTMR_b_OutTrq_MinLimFail'
         */
        VeSRMI_b_OutTrq_MinLimFail = KeSRMR_b_ToFlt_Val_MinLim;
    }

    /* End of Switch: '<S600>/Switch' */

    /* Switch: '<S601>/Switch' incorporates:
     *  Constant: '<S601>/Constant'
     */
    if (KeSRMR_b_Ovrd_P4MtrFlt)
    {
        /* Switch: '<S601>/Switch' incorporates:
         *  Constant: '<S601>/Constant1'
         *  Inport: '<Root>/VeSTMR_b_P4TrqMntrFlt'
         */
        VeSRMI_b_P4TrqMntrFlt = KeSRMR_b_P4MtrFlt_Val;
    }

    /* End of Switch: '<S601>/Switch' */

    /* Logic: '<S4>/Logical5' */
    VeSRMC_b_TransOutTrqCmdFlt = ((((VeSRMI_b_TransOutTrqCmdFlt) ||
        (VeSRMI_b_OutTrq_MaxLimFail)) || (VeSRMI_b_OutTrq_MinLimFail)) ||
        (VeSRMI_b_P4TrqMntrFlt));

    /* Switch: '<S4>/VeSRMI_b_RgnEstMntrFlt' incorporates:
     *  Constant: '<S620>/Calib'
     */
    if (KeSRMR_b_Ovrd_RgnFlt)
    {
        /* Switch: '<S4>/VeSRMI_b_RgnEstMntrFlt' incorporates:
         *  Constant: '<S623>/Calib'
         *  Inport: '<Root>/VeSTMR_b_RgnEstMntrFlt'
         */
        VeSRMI_b_RgnEstMntrFlt = KeSRMR_b_RgnFlt_Val;
    }

    /* End of Switch: '<S4>/VeSRMI_b_RgnEstMntrFlt' */

    /* Switch: '<S4>/VeSRMI_b_Lv2PpawlInsrtMntrFailed' incorporates:
     *  Constant: '<S612>/Calib'
     */
    if (KeSRMR_b_OvrdLv2PPMntrFlt)
    {
        /* Switch: '<S4>/VeSRMI_b_Lv2PpawlInsrtMntrFailed' incorporates:
         *  Constant: '<S607>/Calib'
         *  Inport: '<Root>/VeGSMR_b_PpawlInsrtMntrFailed'
         */
        VeSRMI_b_Lv2PpawlInsrtMntrFailed = KeSRMR_b_Lv2PPMntrFlt_Val;
    }

    /* End of Switch: '<S4>/VeSRMI_b_Lv2PpawlInsrtMntrFailed' */

    /* Switch: '<S4>/VeSRMI_b_MissedParkReqFlt' incorporates:
     *  Constant: '<S617>/Calib'
     */
    if (KeSRMR_b_Ovrd_MisPrkFlt)
    {
        /* Switch: '<S4>/VeSRMI_b_MissedParkReqFlt' incorporates:
         *  Constant: '<S609>/Calib'
         *  Inport: '<Root>/VeGSMR_b_MissedParkReqFlt'
         */
        VeSRMI_b_MissedParkReqFlt = KeSRMR_b_MisPrkFlt_Val;
    }

    /* End of Switch: '<S4>/VeSRMI_b_MissedParkReqFlt' */

    /* Switch: '<S4>/VeSRMI_b_MissedNeutralReqFlt' incorporates:
     *  Constant: '<S616>/Calib'
     */
    if (KeSRMR_b_Ovrd_MisNeutFlt)
    {
        /* Switch: '<S4>/VeSRMI_b_MissedNeutralReqFlt' incorporates:
         *  Constant: '<S608>/Calib'
         *  Inport: '<Root>/VeGSMR_b_MissedNeutralReqFlt'
         */
        VeSRMI_b_MissedNeutralReqFlt = KeSRMR_b_MisNeutFlt_Val;
    }

    /* End of Switch: '<S4>/VeSRMI_b_MissedNeutralReqFlt' */

    /* Switch: '<S4>/VeSRMI_b_VehSpdRatFailed' incorporates:
     *  Constant: '<S621>/Calib'
     */
    if (KeSRMR_b_Ovrd_SpdRatFlt)
    {
        /* Switch: '<S4>/VeSRMI_b_VehSpdRatFailed' incorporates:
         *  Constant: '<S624>/Calib'
         *  Inport: '<Root>/VeSSMR_b_VehSpdRatFailed'
         */
        VeSRMI_b_VehSpdRatFailed = KeSRMR_b_SpdRatFlt_Val;
    }

    /* End of Switch: '<S4>/VeSRMI_b_VehSpdRatFailed' */

    /* Switch: '<S4>/VeSRMI_b_MtrMdVldtnFlt' incorporates:
     *  Constant: '<S618>/Calib'
     */
    if (KeSRMR_b_Ovrd_MtrMdFlt)
    {
        /* Switch: '<S4>/VeSRMI_b_MtrMdVldtnFlt' incorporates:
         *  Constant: '<S610>/Calib'
         *  Inport: '<Root>/VeMMMR_b_Lv2MtrMd_DBC_Fault'
         */
        VeSRMI_b_MtrMdVldtnFlt = KeSRMR_b_MtrMdFlt_Val;
    }

    /* End of Switch: '<S4>/VeSRMI_b_MtrMdVldtnFlt' */

    /* Switch: '<S4>/VeSRMI_e_Lv2Lv1AHH_ApplyRelease_Req' incorporates:
     *  Constant: '<S613>/Calib'
     */
    if (KeSRMR_b_Ovrd_Lv1AHH_ApplyRelease_Req)
    {
        /* Switch: '<S4>/VeSRMI_e_Lv2Lv1AHH_ApplyRelease_Req' incorporates:
         *  Constant: '<S626>/Calib'
         */
        VeSRMI_e_Lv2Lv1AHH_ApplyRelease_Req =
            KeSRMR_e_Ovrd_Lv1AHH_ApplyRelease_ReqVal;
    }
    else
    {
        /* Switch: '<S4>/VeSRMI_e_Lv2Lv1AHH_ApplyRelease_Req' incorporates:
         *  DataTypeConversion: '<S1>/Data Type Conversion1'
         *  Inport: '<Root>/VeHTDR_e_AHH_ApplyRelease_Req'
         */
        VeSRMI_e_Lv2Lv1AHH_ApplyRelease_Req = tmpRead_m;
    }

    /* End of Switch: '<S4>/VeSRMI_e_Lv2Lv1AHH_ApplyRelease_Req' */

    /* Switch: '<S4>/VeSRMI_b_Lv2Lv1AHH_ModifyAccel_Req' incorporates:
     *  Constant: '<S614>/Calib'
     */
    if (KeSRMR_b_Ovrd_Lv1AHH_ModifyAccel_Req)
    {
        /* Switch: '<S4>/VeSRMI_b_Lv2Lv1AHH_ModifyAccel_Req' incorporates:
         *  Constant: '<S615>/Calib'
         *  Inport: '<Root>/VeHTDR_b_AHH_ModifyAccel_Req'
         */
        VeSRMI_b_Lv2Lv1AHH_ModifyAccel_Req =
            KeSRMR_b_Ovrd_Lv1AHH_ModifyAccel_ReqVal;
    }

    /* End of Switch: '<S4>/VeSRMI_b_Lv2Lv1AHH_ModifyAccel_Req' */

    /* Switch: '<S4>/VeSRMI_e_Lv2EngStrtStpMd' incorporates:
     *  Constant: '<S625>/Calib'
     *  Inport: '<Root>/VeESSR_e_EngStrtStpMd'
     */
    if (KeSRMR_b_UseLv1EngStpStrtMd)
    {
        (void)Rte_Read_VeESSR_e_EngStrtStpMd_Value(&tmpRead_v);

        /* Switch: '<S4>/VeSRMI_e_Lv2EngStrtStpMd' incorporates:
         *  DataTypeConversion: '<S4>/ToUint16'
         *  Inport: '<Root>/VeESSR_e_EngStrtStpMd'
         */
        VeSRMI_e_Lv2EngStrtStpMd = tmpRead_v;
    }
    else
    {
        /* Switch: '<S4>/VeSRMI_e_Lv2EngStrtStpMd' incorporates:
         *  Inport: '<Root>/VeASMR_e_Lv2EngStrtStpMd'
         */
        (void)Rte_Read_VeASMR_e_Lv2EngStrtStpMd_Value
            ((&(VeSRMI_e_Lv2EngStrtStpMd)));
    }

    /* End of Switch: '<S4>/VeSRMI_e_Lv2EngStrtStpMd' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSTMR_b_P1fNotGeneratorMode' */
    (void)Rte_Read_VeSTMR_b_P1fNotGeneratorMode_Value(&tmpRead_1a);

    /* Inport: '<Root>/VeSTMR_b_Lv2BattWeldFA' */
    (void)Rte_Read_VeSTMR_b_Lv2BattWeldFA_Value(&tmpRead_19);

    /* Inport: '<Root>/VeSTMR_b_P1fEstMntrFlt' */
    (void)Rte_Read_VeSTMR_b_P1fEstMntrFlt_Value(&tmpRead_15);

    /* Inport: '<Root>/VeGSMR_b_PpawlInsrtFailed' */
    (void)Rte_Read_VeGSMR_b_PpawlInsrtFailed_Value((&(VeSRMI_b_PpawlInsrtFailed)));

    /* Inport: '<Root>/VeSTMR_b_EngTorqCmndMntrFlt' */
    (void)Rte_Read_VeSTMR_b_EngTorqCmndMntrFlt_Value
        ((&(VeSRMI_b_EngTorqCmndMntrFlt)));

    /* Inport: '<Root>/VeASMR_b_Lv2AutoStpFA' */
    (void)Rte_Read_VeASMR_b_Lv2AutoStpFA_Value((&(VeSRMI_b_Lv2AutoStpFA)));

    /* Inport: '<Root>/VeASMR_b_Lv2AutoStrtFA' */
    (void)Rte_Read_VeASMR_b_Lv2AutoStrtFA_Value((&(VeSRMI_b_Lv2AutoStrtFA)));

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SRMI'
     */
    /* Switch: '<S4>/VeSRMI_b_Lv2AutoStrtFA' incorporates:
     *  Constant: '<S611>/Calib'
     */
    if (KeSRMR_b_OvrdAstrtFailure)
    {
        /* Switch: '<S4>/VeSRMI_b_Lv2AutoStrtFA' incorporates:
         *  Constant: '<S604>/Calib'
         *  Inport: '<Root>/VeASMR_b_Lv2AutoStrtFA'
         */
        VeSRMI_b_Lv2AutoStrtFA = KeSRMR_b_AstrtFailure_Val;
    }

    /* End of Switch: '<S4>/VeSRMI_b_Lv2AutoStrtFA' */

    /* Switch: '<S4>/VeSRMI_b_Lv2AutoStpFA' incorporates:
     *  Constant: '<S602>/Calib'
     */
    if (KeSRMR_b_ASFail_Ovrd)
    {
        /* Switch: '<S4>/VeSRMI_b_Lv2AutoStpFA' incorporates:
         *  Constant: '<S603>/Calib'
         *  Inport: '<Root>/VeASMR_b_Lv2AutoStpFA'
         */
        VeSRMI_b_Lv2AutoStpFA = KeSRMR_b_ASFail_OvrdVal;
    }

    /* End of Switch: '<S4>/VeSRMI_b_Lv2AutoStpFA' */

    /* Switch: '<S4>/VeSRMI_b_EngTorqCmndMntrFlt' incorporates:
     *  Constant: '<S606>/Calib'
     */
    if (KeSRMR_b_EngTorqCmndMntrFltOvrd)
    {
        /* Switch: '<S4>/VeSRMI_b_EngTorqCmndMntrFlt' incorporates:
         *  Constant: '<S605>/Calib'
         *  Inport: '<Root>/VeSTMR_b_EngTorqCmndMntrFlt'
         */
        VeSRMI_b_EngTorqCmndMntrFlt = KeSRMR_b_EngTorqCmndMntrFlt;
    }

    /* End of Switch: '<S4>/VeSRMI_b_EngTorqCmndMntrFlt' */

    /* Switch: '<S4>/VeSRMI_b_PpawlInsrtFailed' incorporates:
     *  Constant: '<S619>/Calib'
     */
    if (KeSRMR_b_Ovrd_PPInsrFlt)
    {
        /* Switch: '<S4>/VeSRMI_b_PpawlInsrtFailed' incorporates:
         *  Constant: '<S622>/Calib'
         *  Inport: '<Root>/VeGSMR_b_PpawlInsrtFailed'
         */
        VeSRMI_b_PpawlInsrtFailed = KeSRMR_b_PPInsrFlt_Val;
    }

    /* End of Switch: '<S4>/VeSRMI_b_PpawlInsrtFailed' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SRMC'
     */
    /* Logic: '<S45>/Logical135' */
    VeSRMC_b_VehSpdRatFailed_Arb = ((VeSRMI_b_VehSpdRatFailed) &&
        rtb_TmpSignalConversionAtVeGSMR_b_Secure);

    /* Logic: '<S45>/Logical131' incorporates:
     *  Logic: '<S45>/Logical133'
     *  Logic: '<S45>/Logical137'
     */
    VeSRMC_b_MissedParkReqFlt_tmp = !VeSRMC_b_VehSpdRatFailed_Arb;

    /* Logic: '<S45>/ParkPawl_Missed_ParkReq' incorporates:
     *  Logic: '<S45>/Logical131'
     */
    VeSRMC_b_MissedParkReqFlt = ((VeSRMI_b_MissedParkReqFlt) &&
        VeSRMC_b_MissedParkReqFlt_tmp);

    /* Logic: '<S45>/ParkPawl_Missed_Insr' */
    VeSRMC_b_MissedInsrFlt = ((VeSRMI_b_Lv2PpawlInsrtMntrFailed) &&
        VeSRMC_b_MissedParkReqFlt_tmp);

    /* Logic: '<S45>/Logical136' */
    VeSRMC_b_PpawlInsrtFailed = ((VeSRMI_b_PpawlInsrtFailed) &&
        VeSRMC_b_MissedParkReqFlt_tmp);

    /* RelationalOperator: '<S45>/Comparison1' incorporates:
     *  Constant: '<S597>/Calib'
     */
    VeSRMC_b_EPBSpdApplyThsh = (rtb_TmpSignalConversionAtVeSSMR_v_VehSpd <=
        KeSRMR_v_EPBApplySpdThsh);

    /* Logic: '<S45>/Logical139' */
    VeSRMC_b_ApplyEPB_SpdRatFlt = ((rtb_TmpSignalConversionAtVeGSMR_b_Secure &&
        (VeSRMI_b_VehSpdRatFailed)) && (VeSRMC_b_EPBSpdApplyThsh));

    /* Switch: '<S194>/Switch1' incorporates:
     *  Constant: '<S23>/Constant02'
     *  Constant: '<S23>/Constant2'
     */
    if (VeSRMI_b_MissedNeutralReqFlt)
    {
        VeSRMR_e_CurrentGear = 2U;
    }
    else
    {
        VeSRMR_e_CurrentGear = 0U;
    }

    /* End of Switch: '<S194>/Switch1' */

    /* Switch: '<S201>/Switch1' incorporates:
     *  Constant: '<S23>/Constant03'
     *  Constant: '<S23>/Constant4'
     */
    if (VeSRMC_b_MissedParkReqFlt)
    {
        rtb_VeSRMC_e_VldtdTransShiftRngStTmp = 4U;
    }
    else
    {
        rtb_VeSRMC_e_VldtdTransShiftRngStTmp = 0U;
    }

    /* End of Switch: '<S201>/Switch1' */

    /* Switch: '<S202>/Switch1' incorporates:
     *  Constant: '<S23>/Constant04'
     *  Constant: '<S23>/Constant8'
     */
    if (VeSRMC_b_VehSpdRatFailed_Arb)
    {
        rtb_DataTypeConversion4 = 8U;
    }
    else
    {
        rtb_DataTypeConversion4 = 0U;
    }

    /* End of Switch: '<S202>/Switch1' */

    /* Switch: '<S203>/Switch1' incorporates:
     *  Constant: '<S23>/Constant05'
     *  Constant: '<S23>/Constant16'
     */
    if (VeSRMI_b_MtrMdVldtnFlt)
    {
        tmp_1 = 16U;
    }
    else
    {
        tmp_1 = 0U;
    }

    /* End of Switch: '<S203>/Switch1' */

    /* Switch: '<S204>/Switch1' incorporates:
     *  Constant: '<S23>/Constant06'
     *  Constant: '<S23>/Constant32'
     */
    if (VeSRMI_b_Lv2AutoStrtFA)
    {
        tmp_2 = 32U;
    }
    else
    {
        tmp_2 = 0U;
    }

    /* End of Switch: '<S204>/Switch1' */

    /* Switch: '<S205>/Switch1' incorporates:
     *  Constant: '<S23>/Constant07'
     *  Constant: '<S23>/Constant64'
     */
    if (VeSRMI_b_Lv2AutoStpFA)
    {
        tmp_3 = 64U;
    }
    else
    {
        tmp_3 = 0U;
    }

    /* End of Switch: '<S205>/Switch1' */

    /* Switch: '<S206>/Switch1' incorporates:
     *  Constant: '<S23>/Constant08'
     *  Constant: '<S23>/Constant128'
     */
    if (VeSRMI_b_EngTorqCmndMntrFlt)
    {
        tmp_4 = 128U;
    }
    else
    {
        tmp_4 = 0U;
    }

    /* End of Switch: '<S206>/Switch1' */

    /* Switch: '<S207>/Switch1' incorporates:
     *  Constant: '<S23>/Constant09'
     *  Constant: '<S23>/Constant256'
     */
    if (VeSRMC_b_MissedInsrFlt)
    {
        tmp_5 = 256U;
    }
    else
    {
        tmp_5 = 0U;
    }

    /* End of Switch: '<S207>/Switch1' */

    /* Switch: '<S208>/Switch1' incorporates:
     *  Constant: '<S23>/Constant010'
     *  Constant: '<S23>/Constant512'
     */
    if (VeSRMC_b_PpawlInsrtFailed)
    {
        tmp_6 = 512U;
    }
    else
    {
        tmp_6 = 0U;
    }

    /* End of Switch: '<S208>/Switch1' */

    /* Switch: '<S195>/Switch1' incorporates:
     *  Constant: '<S23>/Constant011'
     *  Constant: '<S23>/Constant1024'
     */
    if (VeSRMI_b_RgnEstMntrFlt)
    {
        tmp_7 = 1024U;
    }
    else
    {
        tmp_7 = 0U;
    }

    /* End of Switch: '<S195>/Switch1' */

    /* Switch: '<S196>/Switch1' incorporates:
     *  Constant: '<S23>/Constant012'
     *  Constant: '<S23>/Constant2048'
     */
    if (tmpRead_15)
    {
        tmpRead_1v = 2048U;
    }
    else
    {
        tmpRead_1v = 0U;
    }

    /* End of Switch: '<S196>/Switch1' */

    /* Switch: '<S197>/Switch1' incorporates:
     *  Constant: '<S23>/Constant013'
     *  Constant: '<S23>/Constant4096'
     */
    if (tmpRead_19)
    {
        tmpRead_1w = 4096U;
    }
    else
    {
        tmpRead_1w = 0U;
    }

    /* End of Switch: '<S197>/Switch1' */

    /* Switch: '<S198>/Switch1' incorporates:
     *  Constant: '<S23>/Constant014'
     *  Constant: '<S23>/Constant8192'
     */
    if (tmpRead_1a)
    {
        tmpRead_1x = 8192U;
    }
    else
    {
        tmpRead_1x = 0U;
    }

    /* End of Switch: '<S198>/Switch1' */

    /* Switch: '<S199>/Switch1' incorporates:
     *  Constant: '<S23>/Constant015'
     *  Constant: '<S23>/Constant16384'
     */
    if (VeSRMC_b_ApplyEPB_SpdRatFlt)
    {
        tmp_8 = 16384U;
    }
    else
    {
        tmp_8 = 0U;
    }

    /* End of Switch: '<S199>/Switch1' */

    /* Switch: '<S200>/Switch1' incorporates:
     *  Constant: '<S23>/Constant016'
     *  Constant: '<S23>/Constant32768'
     */
    if (rtb_TmpSignalConversionAtVeSTMR_b_FrontA)
    {
        rtb_TmpSignalConversionAtVeSTMR = 32768U;
    }
    else
    {
        rtb_TmpSignalConversionAtVeSTMR = 0U;
    }

    /* End of Switch: '<S200>/Switch1' */

    /* S-Function (sfix_bitop): '<S23>/Bitwise_Logical_Operator' incorporates:
     *  DataStoreWrite: '<S8>/Data_Store_Write'
     *  Switch: '<S193>/Switch1'
     */
    VeSRMR_g_RA_InputSet1 = (uint16)((((((((((((((((VeSRMC_b_TransOutTrqCmdFlt ?
        ((uint16)1) : ((uint16)0)) | VeSRMR_e_CurrentGear) |
        rtb_VeSRMC_e_VldtdTransShiftRngStTmp) | rtb_DataTypeConversion4) | tmp_1)
        | tmp_2) | tmp_3) | tmp_4) | tmp_5) | tmp_6) | tmp_7) | tmpRead_1v) |
        tmpRead_1w) | tmpRead_1x) | tmp_8) | rtb_TmpSignalConversionAtVeSTMR);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLTIR_b_Lv2KeySts_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2KeySts_FA_Value(&tmpRead_12);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SRMC'
     */
    /* Switch: '<S8>/Switch9' */
    if (tmpRead_12)
    {
        /* RelationalOperator: '<S45>/Comparison2' incorporates:
         *  Constant: '<S24>/Calib'
         *  DataTypeConversion: '<S20>/DataTypeConversion'
         *  Switch: '<S8>/Switch9'
         */
        VeSRMC_e_Lv2KeySts = (TeLTIR_e_KeySts)KeSRMR_e_KeySts;
    }
    else
    {
        /* Switch: '<S8>/Switch9' incorporates:
         *  Inport: '<Root>/VeLTIR_e_Lv2KeySts'
         */
        (void)Rte_Read_VeLTIR_e_Lv2KeySts_Value((&(VeSRMC_e_Lv2KeySts)));
    }

    /* End of Switch: '<S8>/Switch9' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeRGNR_M_RegenBrkOutTorqCap_Rear' */
    (void)Rte_Read_VeRGNR_M_RegenBrkOutTorqCap_Rear_Value(&tmpRead_1t);

    /* Inport: '<Root>/VeRGNR_M_RegenBrkOutTorqCap_Frnt' */
    (void)Rte_Read_VeRGNR_M_RegenBrkOutTorqCap_Frnt_Value(&tmpRead_1s);

    /* Inport: '<Root>/VeRGNR_b_RegenBrkAxTorqCapFA' */
    (void)Rte_Read_VeRGNR_b_RegenBrkAxTorqCapFA_Value(&tmpRead_l);

    /* Inport: '<Root>/VeRGNR_b_EstRegenBrkAxTorqFA' */
    (void)Rte_Read_VeRGNR_b_EstRegenBrkAxTorqFA_Value(&tmpRead_k);

    /* Inport: '<Root>/VeRGNR_M_RegenBrkOutTorqCap_CAN' */
    (void)Rte_Read_VeRGNR_M_RegenBrkOutTorqCap_CAN_Value(&tmpRead_i);

    /* Inport: '<Root>/VeRGNR_M_EstRegenBrkAxTorq' */
    (void)Rte_Read_VeRGNR_M_EstRegenBrkAxTorq_Value(&tmpRead_h);

    /* Inport: '<Root>/VeICSR_M_EngCLITerm' */
    (void)Rte_Read_VeICSR_M_EngCLITerm_Value(&tmpRead_g);

    /* Inport: '<Root>/VeSRAR_b_HybFeedback_ECM' */
    (void)Rte_Read_VeSRAR_b_HybFeedback_ECM_Value(&tmpRead_f);

    /* Inport: '<Root>/VeTITR_b_SnsdTi_notVld' */
    (void)Rte_Read_VeTITR_b_SnsdTi_notVld_Value(&tmpRead_e);

    /* Inport: '<Root>/VeTRAR_b_EngDFCOReq' */
    (void)Rte_Read_VeTRAR_b_EngDFCOReq_Value(&tmpRead_c);

    /* Inport: '<Root>/VeTRAR_M_HybCmndEngTorqPrdtd' */
    (void)Rte_Read_VeTRAR_M_HybCmndEngTorqPrdtd_Value(&tmpRead_a);

    /* Inport: '<Root>/VeTRAR_M_EngTorqCmndImmed' */
    (void)Rte_Read_VeTRAR_M_EngTorqCmndImmed_Value(&tmpRead_9);

    /* Inport: '<Root>/VeAXLR_M_ActualAxleTrq' */
    (void)Rte_Read_VeAXLR_M_ActualAxleTrq_Value(&tmpRead_1);

    /* Inport: '<Root>/VeAXLR_M_MinAxleTrqCruise' */
    (void)Rte_Read_VeAXLR_M_MinAxleTrqCruise_Value(&tmpRead_0);

    /* Inport: '<Root>/VeAXLR_M_MaxAxleTrqCruise' */
    (void)Rte_Read_VeAXLR_M_MaxAxleTrqCruise_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SRMC'
     */
    /* RelationalOperator: '<S45>/Comparison2' incorporates:
     *  Constant: '<S593>/Constant'
     *  DataStoreWrite: '<S45>/Data_Store_Write'
     */
    VeSRMC_b_RstOnKeyOff = (((uint32)VeSRMC_e_Lv2KeySts) == CeLTIR_e_IGN_LK);

    /* Logic: '<S45>/Logical147' incorporates:
     *  Constant: '<S594>/Calib'
     *  Constant: '<S595>/Calib'
     *  Constant: '<S596>/Calib'
     *  RelationalOperator: '<S45>/Comparison3'
     *  RelationalOperator: '<S45>/Comparison4'
     *  RelationalOperator: '<S45>/Comparison5'
     */
    VeSRMC_b_Lv2MntrFlt_BSG = (((VeSRMI_b_Lv2AutoStrtFA ==
        KeSRMR_b_SetBSGActTrqFA_AStpFA) || (VeSRMI_b_EngTorqCmndMntrFlt ==
        KeSRMR_b_SetBSGActTrqFA_TiMntrFA)) || (VeSRMI_b_Lv2AutoStpFA ==
        KeSRMR_b_SetBSGActTrqFA_AStrtFA));

    /* Logic: '<S45>/Logical254' */
    VeSRMC_b_BSGFltActv = (((VeSRMI_b_Lv2AutoStrtFA) &&
                            (VeSRMI_b_EngTorqCmndMntrFlt)) &&
                           (VeSRMI_b_Lv2AutoStpFA));

    /* Outputs for IfAction SubSystem: '<S415>/Perform_MtrMdCmnd_M182' incorporates:
     *  ActionPort: '<S518>/ActionPort'
     */
    /* Outputs for Atomic SubSystem: '<S48>/Signal_Latch_On_With_Reset' */
    /* Outputs for Atomic SubSystem: '<S52>/Signal_Latch_On_With_Reset' */
    /* Outputs for Atomic SubSystem: '<S51>/Signal_Latch_On_With_Reset' */
    /* Outputs for Atomic SubSystem: '<S49>/Signal_Latch_On_With_Reset' */
    /* Outputs for Atomic SubSystem: '<S50>/Signal_Latch_On_With_Reset' */
    /* If: '<S415>/Determine_MtrMdCmnd_Method' incorporates:
     *  DataStoreRead: '<S374>/RA_Reset'
     *  Logic: '<S220>/NOT'
     *  Logic: '<S22>/Logical6'
     *  Logic: '<S247>/NOT'
     *  Logic: '<S249>/NOT'
     *  Logic: '<S258>/NOT'
     *  Logic: '<S259>/NOT'
     *  Logic: '<S260>/NOT'
     *  Logic: '<S262>/NOT'
     *  Logic: '<S264>/NOT'
     *  Logic: '<S266>/NOT'
     *  Logic: '<S277>/NOT'
     *  Logic: '<S278>/NOT'
     *  Logic: '<S279>/NOT'
     *  Logic: '<S280>/NOT'
     *  Logic: '<S282>/NOT'
     *  Logic: '<S284>/NOT'
     *  Logic: '<S292>/NOT'
     *  Logic: '<S301>/NOT'
     *  Logic: '<S303>/NOT'
     *  Logic: '<S305>/NOT'
     *  Logic: '<S307>/NOT'
     *  Logic: '<S309>/NOT'
     *  Logic: '<S311>/NOT'
     *  Logic: '<S313>/NOT'
     *  Logic: '<S325>/NOT'
     *  Logic: '<S327>/NOT'
     *  Logic: '<S329>/NOT'
     *  Logic: '<S331>/NOT'
     *  Logic: '<S333>/NOT'
     *  Logic: '<S335>/NOT'
     *  Logic: '<S341>/NOT'
     *  Logic: '<S342>/NOT'
     *  Logic: '<S344>/NOT'
     *  Logic: '<S348>/NOT'
     *  Logic: '<S367>/NOT'
     *  Logic: '<S371>/NOT'
     *  Logic: '<S373>/NOT'
     *  Logic: '<S377>/NOT'
     *  Logic: '<S379>/NOT'
     *  Logic: '<S384>/NOT'
     *  Logic: '<S385>/NOT'
     *  Logic: '<S387>/NOT'
     *  Logic: '<S389>/NOT'
     *  Logic: '<S404>/NOT'
     *  Logic: '<S406>/NOT'
     *  Logic: '<S408>/NOT'
     *  Logic: '<S410>/NOT'
     *  Logic: '<S541>/NOT'
     *  Logic: '<S542>/NOT'
     *  Logic: '<S574>/NOT'
     *  Logic: '<S582>/NOT'
     *  Logic: '<S584>/NOT'
     *  Logic: '<S586>/NOT'
     *  Logic: '<S588>/NOT'
     *  Logic: '<S590>/NOT'
     *  Logic: '<S592>/NOT'
     *  Logic: '<S60>/NOT'
     *  Logic: '<S64>/NOT'
     *  Logic: '<S68>/NOT'
     *  Logic: '<S72>/NOT'
     *  Logic: '<S76>/NOT'
     */
    tmpRead_1a = !VeSRMC_b_RstOnKeyOff;

    /* End of Outputs for SubSystem: '<S50>/Signal_Latch_On_With_Reset' */
    /* End of Outputs for SubSystem: '<S49>/Signal_Latch_On_With_Reset' */
    /* End of Outputs for SubSystem: '<S51>/Signal_Latch_On_With_Reset' */
    /* End of Outputs for SubSystem: '<S52>/Signal_Latch_On_With_Reset' */
    /* End of Outputs for SubSystem: '<S48>/Signal_Latch_On_With_Reset' */
    /* End of Outputs for SubSystem: '<S415>/Perform_MtrMdCmnd_M182' */

    /* Logic: '<S377>/FA_Latch' incorporates:
     *  Constant: '<S374>/RA_Mask'
     *  Constant: '<S376>/Constant'
     *  DataStoreRead: '<S374>/RA_Register'
     *  Logic: '<S377>/NOT'
     *  Logic: '<S377>/OR'
     *  RelationalOperator: '<S376>/Compare'
     *  S-Function (sfix_bitop): '<S374>/Bitwise'
     */
    VeSRMC_b_EngCLITermFA = (((((sint32)VeSRMR_g_RA_InputSet1) & ((sint32)
        KeSRMR_g_RA_EngCLITerm)) >= 1) || (tmpRead_1a && (VeSRMC_b_EngCLITermFA)));

    /* Logic: '<S379>/FA_Latch' incorporates:
     *  Constant: '<S375>/RA_Mask'
     *  Constant: '<S378>/Constant'
     *  DataStoreRead: '<S375>/RA_Register'
     *  Logic: '<S379>/OR'
     *  RelationalOperator: '<S378>/Compare'
     *  S-Function (sfix_bitop): '<S375>/Bitwise'
     */
    VeSRMC_b_EstRegenBrkAxTorqFA = (((((sint32)VeSRMR_g_RA_InputSet1) & ((sint32)
        KeSRMR_g_RA_EstRegenBrkAxTorq)) >= 1) || (tmpRead_1a &&
        (VeSRMC_b_EstRegenBrkAxTorqFA)));

    /* Logic: '<S592>/FA_Latch' incorporates:
     *  Constant: '<S580>/RA_Mask'
     *  Constant: '<S591>/Constant'
     *  DataStoreRead: '<S580>/RA_Register'
     *  Logic: '<S580>/AND'
     *  Logic: '<S592>/OR'
     *  RelationalOperator: '<S591>/Compare'
     *  S-Function (sfix_bitop): '<S580>/Bitwise'
     */
    VeSRMC_b_RegenBrkAxTorqCapFA = ((((((sint32)VeSRMR_g_RA_InputSet1) &
        ((sint32)KeSRMR_g_RA_RegenBrkAxTorqCap)) >= 1) ||
        rtb_TmpSignalConversionAtVeGRAR_b_Disa_d) || (tmpRead_1a &&
        (VeSRMC_b_RegenBrkAxTorqCapFA)));

    /* Logic: '<S588>/FA_Latch' incorporates:
     *  Constant: '<S578>/RA_Mask'
     *  Constant: '<S587>/Constant'
     *  DataStoreRead: '<S578>/RA_Register'
     *  Logic: '<S578>/AND'
     *  Logic: '<S588>/OR'
     *  RelationalOperator: '<S587>/Compare'
     *  S-Function (sfix_bitop): '<S578>/Bitwise'
     */
    VeSRMC_b_RegenBrkAxTorqCapFrntFA = ((((((sint32)VeSRMR_g_RA_InputSet1) &
        ((sint32)KeSRMR_g_RA_RegenBrkAxTorqCapFrnt)) >= 1) ||
        rtb_TmpSignalConversionAtVeGRAR_b_Disa_d) || (tmpRead_1a &&
        (VeSRMC_b_RegenBrkAxTorqCapFrntFA)));

    /* Logic: '<S590>/FA_Latch' incorporates:
     *  Constant: '<S579>/RA_Mask'
     *  Constant: '<S589>/Constant'
     *  DataStoreRead: '<S579>/RA_Register'
     *  Logic: '<S579>/AND'
     *  Logic: '<S590>/OR'
     *  RelationalOperator: '<S589>/Compare'
     *  S-Function (sfix_bitop): '<S579>/Bitwise'
     */
    VeSRMC_b_RegenBrkAxTorqCapRearFA = ((((((sint32)VeSRMR_g_RA_InputSet1) &
        ((sint32)KeSRMR_g_RA_RegenBrkAxTorqCapRear)) >= 1) ||
        rtb_TmpSignalConversionAtVeGRAR_b_Disa_d) || (tmpRead_1a &&
        (VeSRMC_b_RegenBrkAxTorqCapRearFA)));

    /* Logic: '<S582>/FA_Latch' incorporates:
     *  Constant: '<S575>/RA_Mask'
     *  Constant: '<S581>/Constant'
     *  DataStoreRead: '<S575>/RA_Register'
     *  Logic: '<S582>/OR'
     *  RelationalOperator: '<S581>/Compare'
     *  S-Function (sfix_bitop): '<S575>/Bitwise'
     */
    VeSRMC_b_MinAxleTrqCruiseFA = (((((sint32)VeSRMR_g_RA_InputSet1) & ((sint32)
        KeSRMR_g_RA_MinAxletrqCruise)) >= 1) || (tmpRead_1a &&
        (VeSRMC_b_MinAxleTrqCruiseFA)));

    /* Logic: '<S584>/FA_Latch' incorporates:
     *  Constant: '<S576>/RA_Mask'
     *  Constant: '<S583>/Constant'
     *  DataStoreRead: '<S576>/RA_Register'
     *  Logic: '<S584>/OR'
     *  RelationalOperator: '<S583>/Compare'
     *  S-Function (sfix_bitop): '<S576>/Bitwise'
     */
    VeSRMC_b_ActualAxleTrqFA = (((((sint32)VeSRMR_g_RA_InputSet1) & ((sint32)
        KeSRMR_g_RA_ActualAxleTrq)) >= 1) || (tmpRead_1a &&
        (VeSRMC_b_ActualAxleTrqFA)));

    /* Logic: '<S586>/FA_Latch' incorporates:
     *  Constant: '<S577>/RA_Mask'
     *  Constant: '<S585>/Constant'
     *  DataStoreRead: '<S577>/RA_Register'
     *  Logic: '<S586>/OR'
     *  RelationalOperator: '<S585>/Compare'
     *  S-Function (sfix_bitop): '<S577>/Bitwise'
     */
    VeSRMC_b_MaxAxleTrqCruiseFA = (((((sint32)VeSRMR_g_RA_InputSet1) & ((sint32)
        KeSRMR_g_RA_MaxAxleTrqCruise)) >= 1) || (tmpRead_1a &&
        (VeSRMC_b_MaxAxleTrqCruiseFA)));

    /* Logic: '<S301>/FA_Latch' incorporates:
     *  Constant: '<S293>/RA_Mask'
     *  Constant: '<S300>/Constant'
     *  DataStoreRead: '<S293>/RA_Register'
     *  Logic: '<S301>/OR'
     *  RelationalOperator: '<S300>/Compare'
     *  S-Function (sfix_bitop): '<S293>/Bitwise'
     */
    VeSRMC_b_EngCntrlModeFA = (((((sint32)VeSRMR_g_RA_InputSet1) & ((sint32)
        KeSRMR_g_RA_EngCtrlMode)) >= 1) || (tmpRead_1a &&
        (VeSRMC_b_EngCntrlModeFA)));

    /* Logic: '<S303>/FA_Latch' incorporates:
     *  Constant: '<S294>/RA_Mask'
     *  Constant: '<S302>/Constant'
     *  DataStoreRead: '<S294>/RA_Register'
     *  Logic: '<S303>/OR'
     *  RelationalOperator: '<S302>/Compare'
     *  S-Function (sfix_bitop): '<S294>/Bitwise'
     */
    VeSRMC_b_EngTrqCmndImmedFA = (((((sint32)VeSRMR_g_RA_InputSet1) & ((sint32)
        KeSRMR_g_RA_EngTrqCmndImmed)) >= 1) || (tmpRead_1a &&
        (VeSRMC_b_EngTrqCmndImmedFA)));

    /* Logic: '<S305>/FA_Latch' incorporates:
     *  Constant: '<S295>/RA_Mask'
     *  Constant: '<S304>/Constant'
     *  DataStoreRead: '<S295>/RA_Register'
     *  Logic: '<S305>/OR'
     *  RelationalOperator: '<S304>/Compare'
     *  S-Function (sfix_bitop): '<S295>/Bitwise'
     */
    VeSRMC_b_EngTrqCmndPrdtdFA = (((((sint32)VeSRMR_g_RA_InputSet1) & ((sint32)
        KeSRMR_g_RA_EngTrqCmndPrdtd)) >= 1) || (tmpRead_1a &&
        (VeSRMC_b_EngTrqCmndPrdtdFA)));

    /* Logic: '<S307>/FA_Latch' incorporates:
     *  Constant: '<S296>/RA_Mask'
     *  Constant: '<S306>/Constant'
     *  DataStoreRead: '<S296>/RA_Register'
     *  Logic: '<S307>/OR'
     *  RelationalOperator: '<S306>/Compare'
     *  S-Function (sfix_bitop): '<S296>/Bitwise'
     */
    VeSRMC_b_HybCmndEngTorqRespTypFA = (((((sint32)VeSRMR_g_RA_InputSet1) &
        ((sint32)KeSRMR_g_RA_HydCmndEngTorqRespTyp)) >= 1) || (tmpRead_1a &&
        (VeSRMC_b_HybCmndEngTorqRespTypFA)));

    /* Logic: '<S309>/FA_Latch' incorporates:
     *  Constant: '<S297>/RA_Mask'
     *  Constant: '<S308>/Constant'
     *  DataStoreRead: '<S297>/RA_Register'
     *  Logic: '<S309>/OR'
     *  RelationalOperator: '<S308>/Compare'
     *  S-Function (sfix_bitop): '<S297>/Bitwise'
     */
    VeSRMC_b_EngDFCOReqFA = (((((sint32)VeSRMR_g_RA_InputSet1) & ((sint32)
        KeSRMR_g_RA_EngDFCOReq)) >= 1) || (tmpRead_1a && (VeSRMC_b_EngDFCOReqFA)));

    /* Logic: '<S311>/FA_Latch' incorporates:
     *  Constant: '<S298>/RA_Mask'
     *  Constant: '<S310>/Constant'
     *  DataStoreRead: '<S298>/RA_Register'
     *  Logic: '<S311>/OR'
     *  RelationalOperator: '<S310>/Compare'
     *  S-Function (sfix_bitop): '<S298>/Bitwise'
     */
    VeSRMC_b_SnsdTi_notVldFA = (((((sint32)VeSRMR_g_RA_InputSet1) & ((sint32)
        KeSRMR_g_RA_SnsdTi_notVld)) >= 1) || (tmpRead_1a &&
        (VeSRMC_b_SnsdTi_notVldFA)));

    /* Logic: '<S313>/FA_Latch' incorporates:
     *  Constant: '<S299>/RA_Mask'
     *  Constant: '<S312>/Constant'
     *  DataStoreRead: '<S299>/RA_Register'
     *  Logic: '<S313>/OR'
     *  RelationalOperator: '<S312>/Compare'
     *  S-Function (sfix_bitop): '<S299>/Bitwise'
     */
    VeSRMC_b_HybFeedback_ECMFA = (((((sint32)VeSRMR_g_RA_InputSet1) & ((sint32)
        KeSRMR_g_RA_HybFeedback_ECM)) >= 1) || (tmpRead_1a &&
        (VeSRMC_b_HybFeedback_ECMFA)));

    /* Logic: '<S26>/Logical1' incorporates:
     *  Constant: '<S233>/Calib'
     *  RelationalOperator: '<S26>/Comparison'
     */
    VeSRMC_b_AHHCheckEnabled = ((rtb_TmpSignalConversionAtVeSSMR_v_VehSpd >
        KeSRMR_v_Lv2ZeroSpdThrsh) || (VeSRMI_b_VehSpdRatFailed));

    /* Switch: '<S225>/Switch1' */
    if (VeSRMC_b_AHHCheckEnabled)
    {
        /* Switch: '<S225>/Switch1' incorporates:
         *  RelationalOperator: '<S26>/Comparison5'
         */
        VeSRMC_b_ApplyRelease_Failing = (((sint32)
            VeSRMI_e_Lv2Lv1AHH_ApplyRelease_Req) != 0);
    }
    else
    {
        /* Switch: '<S225>/Switch1' incorporates:
         *  Constant: '<S26>/FALSE_Constant1'
         */
        VeSRMC_b_ApplyRelease_Failing = false;
    }

    /* End of Switch: '<S225>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S26>/Counter_Reset_Enabled' */
    /* If: '<S234>/If' incorporates:
     *  Constant: '<S221>/Constant Value2'
     *  Switch: '<S221>/Switch2'
     */
    if (VeSRMC_b_Lv2AHH_ApplyRelease_ReqFlt)
    {
        /* Outputs for IfAction SubSystem: '<S234>/IfAct' incorporates:
         *  ActionPort: '<S236>/Action Port'
         */
        SRMR_ac_IfAct(0, (&(VeSRMC_Cnt_Lv2AHH_ApplyRelease_ReqFlt)));

        /* End of Outputs for SubSystem: '<S234>/IfAct' */
    }
    else
    {
        if (VeSRMC_b_ApplyRelease_Failing)
        {
            /* Switch: '<S221>/Switch2' incorporates:
             *  Constant: '<S221>/Constant Value1'
             *  Sum: '<S221>/Subtraction'
             *  UnitDelay: '<S221>/Unit Delay'
             */
            VeSRMR_e_CurrentGear = (uint16)(((uint32)
                VeSRMC_Cnt_Lv2AHH_ApplyRelease_ReqFlt) + 1U);
        }
        else
        {
            /* Switch: '<S221>/Switch2' incorporates:
             *  UnitDelay: '<S221>/Unit Delay'
             */
            VeSRMR_e_CurrentGear = VeSRMC_Cnt_Lv2AHH_ApplyRelease_ReqFlt;
        }

        /* Outputs for IfAction SubSystem: '<S234>/ElseAct' incorporates:
         *  ActionPort: '<S235>/Action Port'
         */
        SRMR_ac_IfAct(VeSRMR_e_CurrentGear,
                      (&(VeSRMC_Cnt_Lv2AHH_ApplyRelease_ReqFlt)));

        /* End of Outputs for SubSystem: '<S234>/ElseAct' */
    }

    /* End of If: '<S234>/If' */
    /* End of Outputs for SubSystem: '<S26>/Counter_Reset_Enabled' */

    /* RelationalOperator: '<S26>/Comparison2' incorporates:
     *  Constant: '<S229>/Calib'
     */
    VeSRMC_b_Lv2AHH_ApplyRelease_ReqFlt = (VeSRMC_Cnt_Lv2AHH_ApplyRelease_ReqFlt
        > ((uint16)KeSRMR_Cnt_Lv2AHHCheckCntrLim));

    /* Switch: '<S226>/Switch1' */
    if (VeSRMC_b_AHHCheckEnabled)
    {
        /* Switch: '<S226>/Switch1' incorporates:
         *  RelationalOperator: '<S26>/Comparison1'
         */
        VeSRMC_b_ModifyAccel_Failing = VeSRMI_b_Lv2Lv1AHH_ModifyAccel_Req;
    }
    else
    {
        /* Switch: '<S226>/Switch1' incorporates:
         *  Constant: '<S26>/FALSE_Constant2'
         */
        VeSRMC_b_ModifyAccel_Failing = false;
    }

    /* End of Switch: '<S226>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S26>/Counter_Reset_Enabled1' */
    /* If: '<S237>/If' incorporates:
     *  Constant: '<S222>/Constant Value2'
     *  Switch: '<S222>/Switch2'
     */
    if (VeSRMC_b_Lv2AHH_ModifyAccel_ReqFlt)
    {
        /* Outputs for IfAction SubSystem: '<S237>/IfAct' incorporates:
         *  ActionPort: '<S239>/Action Port'
         */
        SRMR_ac_IfAct(0, (&(VeSRMC_Cnt_Lv2AHH_ModifyAccel_ReqFlt)));

        /* End of Outputs for SubSystem: '<S237>/IfAct' */
    }
    else
    {
        if (VeSRMC_b_ModifyAccel_Failing)
        {
            /* Switch: '<S222>/Switch2' incorporates:
             *  Constant: '<S222>/Constant Value1'
             *  Sum: '<S222>/Subtraction'
             *  UnitDelay: '<S222>/Unit Delay'
             */
            VeSRMR_e_CurrentGear = (uint16)(((uint32)
                VeSRMC_Cnt_Lv2AHH_ModifyAccel_ReqFlt) + 1U);
        }
        else
        {
            /* Switch: '<S222>/Switch2' incorporates:
             *  UnitDelay: '<S222>/Unit Delay'
             */
            VeSRMR_e_CurrentGear = VeSRMC_Cnt_Lv2AHH_ModifyAccel_ReqFlt;
        }

        /* Outputs for IfAction SubSystem: '<S237>/ElseAct' incorporates:
         *  ActionPort: '<S238>/Action Port'
         */
        SRMR_ac_IfAct(VeSRMR_e_CurrentGear,
                      (&(VeSRMC_Cnt_Lv2AHH_ModifyAccel_ReqFlt)));

        /* End of Outputs for SubSystem: '<S237>/ElseAct' */
    }

    /* End of If: '<S237>/If' */
    /* End of Outputs for SubSystem: '<S26>/Counter_Reset_Enabled1' */

    /* RelationalOperator: '<S26>/Comparison3' incorporates:
     *  Constant: '<S230>/Calib'
     */
    VeSRMC_b_Lv2AHH_ModifyAccel_ReqFlt = (VeSRMC_Cnt_Lv2AHH_ModifyAccel_ReqFlt >
        ((uint16)KeSRMR_Cnt_Lv2AHHModifyAccelCntrLim));

    /* Logic: '<S26>/Logical2' */
    VeSRMC_b_AHH_Flt = ((VeSRMC_b_Lv2AHH_ApplyRelease_ReqFlt) ||
                        (VeSRMC_b_Lv2AHH_ModifyAccel_ReqFlt));

    /* RelationalOperator: '<S12>/EQUAL' incorporates:
     *  Constant: '<S47>/Constant'
     *  SignalConversion generated from: '<S1>/VeCANR_e_CanLocEnblStatus'
     */
    VeSRMC_b_CanLocStatusEnbl = (((uint32)VeSRMI_e_CanLocEnblStatus) ==
        CePWMD_e_LOC_Enable);

    /* Logic: '<S50>/NOT1' incorporates:
     *  Logic: '<S48>/NOT1'
     *  Logic: '<S49>/NOT1'
     *  Logic: '<S51>/NOT1'
     *  Logic: '<S52>/NOT1'
     */
    rtb_TmpSignalConversionAtVeGRAR_b_Disa_d = !VeSRMC_b_CanLocStatusEnbl;

    /* Outputs for Atomic SubSystem: '<S50>/Signal_Latch_On_With_Reset' */
    /* Logic: '<S68>/OR1' incorporates:
     *  Logic: '<S50>/NOT1'
     *  Logic: '<S68>/OR'
     *  UnitDelay: '<S68>/Unit Delay'
     */
    SRMR_ac_DW.UnitDelay_DSTATE_k = (rtb_TmpSignalConversionAtVeGRAR_b_Disa_d ||
        (tmpRead_1a && (SRMR_ac_DW.UnitDelay_DSTATE_k)));

    /* End of Outputs for SubSystem: '<S50>/Signal_Latch_On_With_Reset' */

    /* Switch: '<S50>/Switch' incorporates:
     *  Logic: '<S50>/AND1'
     *  Logic: '<S50>/NOT2'
     *  Switch: '<S50>/Switch1'
     *  UnitDelay: '<S68>/Unit Delay'
     */
    if (SRMR_ac_DW.UnitDelay_DSTATE_k)
    {
        /* Switch: '<S50>/Switch' incorporates:
         *  Constant: '<S67>/Constant'
         */
        VeSRMR_e_GRAR_eAWD_TargetSts = CeSRMR_e_TargetSts_DiagOff;
    }
    else if ((VeSRMC_b_CanLocStatusEnbl) &&
             (!VeSRMI_b_SL2outBEV_VDAB_eAWD_SafActive))
    {
        /* Switch: '<S50>/Switch1' incorporates:
         *  Constant: '<S65>/Constant'
         *  Switch: '<S50>/Switch'
         */
        VeSRMR_e_GRAR_eAWD_TargetSts = CeSRMR_e_TargetSts_Normal;
    }
    else
    {
        /* Switch: '<S50>/Switch' incorporates:
         *  Constant: '<S66>/Constant'
         *  Switch: '<S50>/Switch1'
         */
        VeSRMR_e_GRAR_eAWD_TargetSts = CeSRMR_e_TargetSts_Disable;
    }

    /* End of Switch: '<S50>/Switch' */

    /* Outputs for Atomic SubSystem: '<S49>/Signal_Latch_On_With_Reset' */
    /* Logic: '<S64>/OR1' incorporates:
     *  Logic: '<S64>/OR'
     *  UnitDelay: '<S64>/Unit Delay'
     */
    SRMR_ac_DW.UnitDelay_DSTATE_j = (rtb_TmpSignalConversionAtVeGRAR_b_Disa_d ||
        (tmpRead_1a && (SRMR_ac_DW.UnitDelay_DSTATE_j)));

    /* End of Outputs for SubSystem: '<S49>/Signal_Latch_On_With_Reset' */

    /* Switch: '<S49>/Switch' incorporates:
     *  Logic: '<S49>/AND1'
     *  Logic: '<S49>/NOT2'
     *  Switch: '<S49>/Switch1'
     *  UnitDelay: '<S64>/Unit Delay'
     */
    if (SRMR_ac_DW.UnitDelay_DSTATE_j)
    {
        /* Switch: '<S49>/Switch' incorporates:
         *  Constant: '<S63>/Constant'
         */
        VeSRMR_e_GRAR_WED_TargetSts = CeSRMR_e_TargetSts_DiagOff;
    }
    else if ((VeSRMC_b_CanLocStatusEnbl) &&
             (!VeSRMI_b_SL2outBEV_VDAB_WED_SafActive))
    {
        /* Switch: '<S49>/Switch1' incorporates:
         *  Constant: '<S61>/Constant'
         *  Switch: '<S49>/Switch'
         */
        VeSRMR_e_GRAR_WED_TargetSts = CeSRMR_e_TargetSts_Normal;
    }
    else
    {
        /* Switch: '<S49>/Switch' incorporates:
         *  Constant: '<S62>/Constant'
         *  Switch: '<S49>/Switch1'
         */
        VeSRMR_e_GRAR_WED_TargetSts = CeSRMR_e_TargetSts_Disable;
    }

    /* End of Switch: '<S49>/Switch' */

    /* Outputs for Atomic SubSystem: '<S51>/Signal_Latch_On_With_Reset' */
    /* Logic: '<S72>/OR1' incorporates:
     *  Logic: '<S72>/OR'
     *  UnitDelay: '<S72>/Unit Delay'
     */
    SRMR_ac_DW.UnitDelay_DSTATE_b = (rtb_TmpSignalConversionAtVeGRAR_b_Disa_d ||
        (tmpRead_1a && (SRMR_ac_DW.UnitDelay_DSTATE_b)));

    /* End of Outputs for SubSystem: '<S51>/Signal_Latch_On_With_Reset' */

    /* Switch: '<S51>/Switch' incorporates:
     *  Logic: '<S51>/AND1'
     *  Logic: '<S51>/NOT2'
     *  Switch: '<S51>/Switch1'
     *  UnitDelay: '<S72>/Unit Delay'
     */
    if (SRMR_ac_DW.UnitDelay_DSTATE_b)
    {
        /* Switch: '<S51>/Switch' incorporates:
         *  Constant: '<S71>/Constant'
         */
        VeSRMR_e_GRAR_eLOCK_TargetSts = CeSRMR_e_TargetSts_DiagOff;
    }
    else if ((VeSRMC_b_CanLocStatusEnbl) &&
             (!VeSRMI_b_SL2outBEV_VDAB_eLOCK_SafActive))
    {
        /* Switch: '<S51>/Switch1' incorporates:
         *  Constant: '<S69>/Constant'
         *  Switch: '<S51>/Switch'
         */
        VeSRMR_e_GRAR_eLOCK_TargetSts = CeSRMR_e_TargetSts_Normal;
    }
    else
    {
        /* Switch: '<S51>/Switch' incorporates:
         *  Constant: '<S70>/Constant'
         *  Switch: '<S51>/Switch1'
         */
        VeSRMR_e_GRAR_eLOCK_TargetSts = CeSRMR_e_TargetSts_Disable;
    }

    /* End of Switch: '<S51>/Switch' */

    /* Outputs for Atomic SubSystem: '<S52>/Signal_Latch_On_With_Reset' */
    /* Logic: '<S76>/OR1' incorporates:
     *  Logic: '<S76>/OR'
     *  UnitDelay: '<S76>/Unit Delay'
     */
    SRMR_ac_DW.UnitDelay_DSTATE_oy = (rtb_TmpSignalConversionAtVeGRAR_b_Disa_d ||
        (tmpRead_1a && (SRMR_ac_DW.UnitDelay_DSTATE_oy)));

    /* End of Outputs for SubSystem: '<S52>/Signal_Latch_On_With_Reset' */

    /* Switch: '<S52>/Switch' incorporates:
     *  Logic: '<S52>/AND1'
     *  Logic: '<S52>/NOT2'
     *  Switch: '<S52>/Switch1'
     *  UnitDelay: '<S76>/Unit Delay'
     */
    if (SRMR_ac_DW.UnitDelay_DSTATE_oy)
    {
        /* Switch: '<S52>/Switch' incorporates:
         *  Constant: '<S75>/Constant'
         */
        VeSRMR_e_GRAR_eLSD_TargetSts = CeSRMR_e_TargetSts_DiagOff;
    }
    else if ((VeSRMC_b_CanLocStatusEnbl) &&
             (!VeSRMI_b_SL2outBEV_VDAB_eLSD_SafActive))
    {
        /* Switch: '<S52>/Switch1' incorporates:
         *  Constant: '<S73>/Constant'
         *  Switch: '<S52>/Switch'
         */
        VeSRMR_e_GRAR_eLSD_TargetSts = CeSRMR_e_TargetSts_Normal;
    }
    else
    {
        /* Switch: '<S52>/Switch' incorporates:
         *  Constant: '<S74>/Constant'
         *  Switch: '<S52>/Switch1'
         */
        VeSRMR_e_GRAR_eLSD_TargetSts = CeSRMR_e_TargetSts_Disable;
    }

    /* End of Switch: '<S52>/Switch' */

    /* Outputs for Atomic SubSystem: '<S48>/Signal_Latch_On_With_Reset' */
    /* Logic: '<S60>/OR1' incorporates:
     *  Logic: '<S60>/OR'
     *  UnitDelay: '<S60>/Unit Delay'
     */
    SRMR_ac_DW.UnitDelay_DSTATE_l = (rtb_TmpSignalConversionAtVeGRAR_b_Disa_d ||
        (tmpRead_1a && (SRMR_ac_DW.UnitDelay_DSTATE_l)));

    /* End of Outputs for SubSystem: '<S48>/Signal_Latch_On_With_Reset' */

    /* Switch: '<S48>/VeSRMR_e_GRAR_Action' incorporates:
     *  Constant: '<S53>/Constant'
     *  Constant: '<S54>/Constant'
     *  Constant: '<S58>/Constant'
     *  Constant: '<S59>/Constant'
     *  Logic: '<S48>/AND1'
     *  Logic: '<S48>/OR1'
     *  RelationalOperator: '<S48>/EQUAL'
     *  RelationalOperator: '<S48>/EQUAL1'
     *  RelationalOperator: '<S48>/EQUAL2'
     *  RelationalOperator: '<S48>/EQUAL3'
     *  Switch: '<S48>/VeSRMC_M_UltraHardLimitTrq'
     *  Switch: '<S49>/Switch'
     *  Switch: '<S50>/Switch'
     *  Switch: '<S51>/Switch'
     *  Switch: '<S52>/Switch'
     *  UnitDelay: '<S60>/Unit Delay'
     */
    if (SRMR_ac_DW.UnitDelay_DSTATE_l)
    {
        /* Switch: '<S48>/VeSRMR_e_GRAR_Action' incorporates:
         *  Constant: '<S55>/Constant'
         */
        VeSRMC_e_GRAR_Action = CeSRMR_e_GRAR_DiagOff;
    }
    else if ((VeSRMC_b_CanLocStatusEnbl) && ((((((uint32)
                  VeSRMR_e_GRAR_eAWD_TargetSts) == CeSRMR_e_TargetSts_Disable) ||
                (((uint32)VeSRMR_e_GRAR_WED_TargetSts) ==
                 CeSRMR_e_TargetSts_Disable)) || (((uint32)
                 VeSRMR_e_GRAR_eLOCK_TargetSts) == CeSRMR_e_TargetSts_Disable)) ||
              (((uint32)VeSRMR_e_GRAR_eLSD_TargetSts) ==
               CeSRMR_e_TargetSts_Disable)))
    {
        /* Switch: '<S48>/VeSRMC_M_UltraHardLimitTrq' incorporates:
         *  Constant: '<S57>/Constant'
         *  Switch: '<S48>/VeSRMR_e_GRAR_Action'
         */
        VeSRMC_e_GRAR_Action = CeSRMR_e_GRAR_SoftLimitation;
    }
    else
    {
        /* Switch: '<S48>/VeSRMR_e_GRAR_Action' incorporates:
         *  Constant: '<S56>/Constant'
         *  Switch: '<S48>/VeSRMC_M_UltraHardLimitTrq'
         */
        VeSRMC_e_GRAR_Action = CeSRMR_e_GRAR_NoLimitation;
    }

    /* End of Switch: '<S48>/VeSRMR_e_GRAR_Action' */

    /* Switch: '<S14>/Switch' incorporates:
     *  Constant: '<S77>/Constant'
     *  Constant: '<S78>/Constant'
     *  Constant: '<S79>/Constant'
     *  Constant: '<S80>/Constant'
     *  Constant: '<S85>/Calib'
     *  RelationalOperator: '<S14>/Comparison1'
     *  RelationalOperator: '<S14>/Comparison2'
     *  RelationalOperator: '<S14>/Comparison3'
     *  RelationalOperator: '<S14>/Comparison4'
     *  Switch: '<S81>/Switch1'
     *  Switch: '<S82>/Switch1'
     *  Switch: '<S83>/Switch1'
     *  Switch: '<S84>/Switch1'
     */
    if (KeSRMR_b_UseCalForPRNDReq)
    {
        /* Switch: '<S14>/Switch' incorporates:
         *  Constant: '<S91>/Calib'
         */
        VeSRMC_e_ESMBasedPRNDReq = KeSRMR_e_PRNDRq;
    }
    else if (((uint32)rtb_TmpSignalConversionAtVeGSMR_e_DrvrPR) ==
             CeGSMR_e_PRND_Park)
    {
        /* Switch: '<S81>/Switch1' incorporates:
         *  Constant: '<S88>/Calib'
         *  Switch: '<S14>/Switch'
         */
        VeSRMC_e_ESMBasedPRNDReq = KeSRMR_e_LVR_P;
    }
    else if (((uint32)rtb_TmpSignalConversionAtVeGSMR_e_DrvrPR) ==
             CeGSMR_e_PRND_Reverse)
    {
        /* Switch: '<S82>/Switch1' incorporates:
         *  Constant: '<S89>/Calib'
         *  Switch: '<S14>/Switch'
         *  Switch: '<S81>/Switch1'
         */
        VeSRMC_e_ESMBasedPRNDReq = KeSRMR_e_LVR_R;
    }
    else if (((uint32)rtb_TmpSignalConversionAtVeGSMR_e_DrvrPR) ==
             CeGSMR_e_PRND_Neutral)
    {
        /* Switch: '<S83>/Switch1' incorporates:
         *  Constant: '<S87>/Calib'
         *  Switch: '<S14>/Switch'
         *  Switch: '<S81>/Switch1'
         *  Switch: '<S82>/Switch1'
         */
        VeSRMC_e_ESMBasedPRNDReq = KeSRMR_e_LVR_N;
    }
    else if (((uint32)rtb_TmpSignalConversionAtVeGSMR_e_DrvrPR) ==
             CeGSMR_e_PRND_Drive)
    {
        /* Switch: '<S84>/Switch1' incorporates:
         *  Constant: '<S86>/Calib'
         *  Switch: '<S14>/Switch'
         *  Switch: '<S81>/Switch1'
         *  Switch: '<S82>/Switch1'
         *  Switch: '<S83>/Switch1'
         */
        VeSRMC_e_ESMBasedPRNDReq = KeSRMR_e_LVR_D;
    }
    else
    {
        /* Switch: '<S14>/Switch' incorporates:
         *  Constant: '<S90>/Calib'
         *  Switch: '<S81>/Switch1'
         *  Switch: '<S82>/Switch1'
         *  Switch: '<S83>/Switch1'
         *  Switch: '<S84>/Switch1'
         */
        VeSRMC_e_ESMBasedPRNDReq = KeSRMR_e_LVR_SNA;
    }

    /* End of Switch: '<S14>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSCMR_e_Lv2HV_BatCntctrStat' */
    (void)Rte_Read_VeSCMR_e_Lv2HV_BatCntctrStat_Value(&VeSRMR_e_PRNDLReq);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SRMC'
     */
    /* RelationalOperator: '<S15>/Comparison4' incorporates:
     *  DataTypeConversion: '<S19>/DataTypeConversion'
     *  RelationalOperator: '<S17>/Comparison1'
     *  RelationalOperator: '<S17>/Comparison2'
     *  RelationalOperator: '<S17>/Comparison3'
     *  RelationalOperator: '<S17>/Comparison4'
     *  RelationalOperator: '<S17>/Comparison5'
     *  RelationalOperator: '<S17>/Comparison6'
     *  RelationalOperator: '<S22>/Comparison6'
     */
    VeSRMC_b_CmndCntctrOpn_tmp = (TeSRMR_e_HVBatCntctrStat)VeSRMR_e_PRNDLReq;

    /* RelationalOperator: '<S15>/Comparison4' incorporates:
     *  Constant: '<S94>/Constant'
     */
    VeSRMC_b_CmndCntctrOpn = (((uint32)VeSRMC_b_CmndCntctrOpn_tmp) ==
        CeSRMR_e_Cntctr_Opn);

    /* Logic: '<S15>/Logical2' incorporates:
     *  Logic: '<S17>/Logical3'
     *  Logic: '<S22>/Logical9'
     */
    rtb_TmpSignalConversionAtVeGRAR_b_Disa_d =
        !rtb_TmpSignalConversionAtVeLTIR_b_Lv2HV_;

    /* Logic: '<S15>/Logical1' incorporates:
     *  Constant: '<S99>/Calib'
     *  Logic: '<S15>/Logical2'
     *  RelationalOperator: '<S15>/Comparison1'
     */
    VeSRMC_b_CmndActvDisch = (((VeSRMC_b_CmndCntctrOpn) &&
        (rtb_TmpSignalConversionAtVeSCMR_U_HVBusV > KeSRMR_U_HVBusDischVolt)) &&
        rtb_TmpSignalConversionAtVeGRAR_b_Disa_d);

    /* Logic: '<S15>/Logical' incorporates:
     *  Constant: '<S99>/Calib'
     *  Logic: '<S15>/Logical2'
     *  RelationalOperator: '<S15>/Comparison3'
     */
    VeSRMC_b_CmndDisbl = (((VeSRMC_b_CmndCntctrOpn) &&
                           (rtb_TmpSignalConversionAtVeSCMR_U_HVBusV <=
                            KeSRMR_U_HVBusDischVolt)) &&
                          rtb_TmpSignalConversionAtVeGRAR_b_Disa_d);

    /* Switch: '<S97>/Switch1' incorporates:
     *  Switch: '<S97>/Switch2'
     *  Switch: '<S98>/Switch1'
     *  Switch: '<S98>/Switch2'
     */
    if (VeSRMC_b_CmndActvDisch)
    {
        /* Switch: '<S97>/Switch1' incorporates:
         *  Constant: '<S96>/Constant'
         */
        VeSRMC_e_MtrMdCmnd_MtrA = CeHTDR_e_ActvDischarge;

        /* Switch: '<S98>/Switch1' incorporates:
         *  Constant: '<S96>/Constant'
         */
        VeSRMC_e_MtrMdCmnd_MtrB = CeHTDR_e_ActvDischarge;
    }
    else if (VeSRMC_b_CmndDisbl)
    {
        /* Switch: '<S97>/Switch1' incorporates:
         *  Constant: '<S95>/Constant'
         *  Switch: '<S97>/Switch2'
         */
        VeSRMC_e_MtrMdCmnd_MtrA = CeHTDR_e_DsblNoSwitch;

        /* Switch: '<S98>/Switch1' incorporates:
         *  Constant: '<S95>/Constant'
         *  Switch: '<S98>/Switch2'
         */
        VeSRMC_e_MtrMdCmnd_MtrB = CeHTDR_e_DsblNoSwitch;
    }
    else
    {
        /* Switch: '<S97>/Switch1' incorporates:
         *  Constant: '<S100>/Calib'
         *  DataTypeConversion: '<S93>/DataTypeConversion'
         *  Switch: '<S97>/Switch2'
         */
        VeSRMC_e_MtrMdCmnd_MtrA = KeSRMR_e_MtrAModeCmd;

        /* Switch: '<S98>/Switch1' incorporates:
         *  Constant: '<S101>/Calib'
         *  DataTypeConversion: '<S92>/DataTypeConversion'
         *  Switch: '<S98>/Switch2'
         */
        VeSRMC_e_MtrMdCmnd_MtrB = KeSRMR_e_MtrBModeCmd;
    }

    /* End of Switch: '<S97>/Switch1' */

    /* RelationalOperator: '<S17>/Comparison5' incorporates:
     *  Constant: '<S132>/Constant'
     */
    VeSRMC_b_HVBatCntctrStat_Clsd = (((uint32)VeSRMC_b_CmndCntctrOpn_tmp) ==
        CeSRMR_e_Closed);

    /* RelationalOperator: '<S17>/Comparison7' incorporates:
     *  Constant: '<S137>/Calib'
     */
    VeSRMC_b_48VSOC_Ok = (rtb_TmpSignalConversionAtVeSCMR_Pct_Lv2H >
                          KeSRMR_Pct_48VSoc_LTsh);

    /* Logic: '<S17>/Logical5' incorporates:
     *  Logic: '<S17>/Logical6'
     */
    VeSRMC_b_48VSOC_OkForMtrTrqCmnd = ((VeSRMC_b_48VSOC_Ok) &&
        (!rtb_TmpSignalConversionAtVeLTIR_b_Lv2H_d));

    /* Logic: '<S17>/Logical' */
    VeSRMC_b_CntctrsClosed = (((rtb_TmpSignalConversionAtVeGRAR_b_Disa_d &&
        (VeSRMC_b_HVBatCntctrStat_Clsd)) && (VeSRMC_b_48VSOC_OkForMtrTrqCmnd)) &&
        (VeSRMC_b_Lv2CntctrCmnd_Cls));

    /* RelationalOperator: '<S17>/Comparison6' incorporates:
     *  Constant: '<S133>/Constant'
     */
    VeSRMC_b_HVBatCntctrStat_PreChrg = (((uint32)VeSRMC_b_CmndCntctrOpn_tmp) ==
        CeSRMR_e_PreChrg);

    /* Logic: '<S17>/Logical4' */
    VeSRMC_b_PreChrgActv = ((rtb_TmpSignalConversionAtVeGRAR_b_Disa_d &&
        (VeSRMC_b_HVBatCntctrStat_PreChrg)) && (VeSRMC_b_Lv2CntctrCmnd_Cls));

    /* RelationalOperator: '<S17>/Comparison4' incorporates:
     *  Constant: '<S128>/Constant'
     */
    VeSRMC_b_HVBatCntctrStat_SNA = (((uint32)VeSRMC_b_CmndCntctrOpn_tmp) ==
        CeSRMR_e_Cntctr_SNA);

    /* RelationalOperator: '<S17>/Comparison1' incorporates:
     *  Constant: '<S129>/Constant'
     */
    VeSRMC_b_HVBatCntctrStat_PreChrgInhb = (((uint32)VeSRMC_b_CmndCntctrOpn_tmp)
        == CeSRMR_e_PreChrg_Inhibit);

    /* RelationalOperator: '<S17>/Comparison2' incorporates:
     *  Constant: '<S130>/Constant'
     */
    VeSRMC_b_HVBatCntctrStat_PreChrgFld = (((uint32)VeSRMC_b_CmndCntctrOpn_tmp) ==
        CeSRMR_e_Prechrg_Fld);

    /* RelationalOperator: '<S17>/Comparison3' incorporates:
     *  Constant: '<S131>/Constant'
     */
    VeSRMC_b_HVBatCntctrStat_CntctrOpn = (((uint32)VeSRMC_b_CmndCntctrOpn_tmp) ==
        CeSRMR_e_Cntctr_Opn);

    /* Logic: '<S17>/Logical1' incorporates:
     *  Logic: '<S17>/Logical2'
     */
    VeSRMC_b_DisblBSG = (((((rtb_TmpSignalConversionAtVeLTIR_b_Lv2HV_ ||
        (VeSRMC_b_HVBatCntctrStat_SNA)) || (VeSRMC_b_HVBatCntctrStat_PreChrgInhb))
                           || (VeSRMC_b_HVBatCntctrStat_PreChrgFld)) ||
                          (VeSRMC_b_HVBatCntctrStat_CntctrOpn)) ||
                         (!VeSRMC_b_Lv2CntctrCmnd_Cls));

    /* If: '<S16>/If' */
    if (VeSRMC_b_CntctrsClosed)
    {
        /* Outputs for IfAction SubSystem: '<S16>/If_Action' incorporates:
         *  ActionPort: '<S103>/ActionPort'
         */
        /* Merge: '<S16>/Merge' incorporates:
         *  Constant: '<S106>/Calib'
         *  SignalConversion generated from: '<S103>/VeSRMC_M_BSGACtTrq_CC_AStrt'
         */
        VeSRMC_M_BSGACtTrq_PC_AStrt = KeSRMR_M_BSGActTrq_CC_AStrt;

        /* Merge: '<S16>/Merge1' incorporates:
         *  Constant: '<S111>/Calib'
         *  SignalConversion generated from: '<S103>/VeSRMC_n_BSGChrgIdlSpdTrgt_CC_AStrt'
         */
        VeSRMC_n_BSGChrgIdlSpdTrgt_AStrt = KeSRMR_n_IdlSpdTrgt_CC_AStrt;

        /* Merge: '<S16>/Merge2' incorporates:
         *  Constant: '<S112>/Calib'
         *  SignalConversion generated from: '<S103>/VeSRMC_n_HCPMaxEngRPM_CC_AStrt'
         */
        VeSRMC_n_HCPMaxEngRPM_AStrt = KeSRMR_n_MaxEngSpd_CC_AStrt;

        /* Merge: '<S16>/Merge3' incorporates:
         *  Constant: '<S110>/Calib'
         *  SignalConversion generated from: '<S103>/VeSRMC_e_MtrMdCmnd_CC_AStrt'
         */
        SRMR_ac_B.Merge3 = KeSRMR_e_MtrMd_CC_AStrt;

        /* Merge: '<S16>/Merge4' incorporates:
         *  Constant: '<S107>/Calib'
         *  SignalConversion generated from: '<S103>/VeSRMC_M_MtrATorqCmnd_CC_AStrt'
         */
        VeSRMC_M_MtrATorqCmnd_AStrt = KeSRMR_M_MtrTrqCmnd_CC_AStrt;

        /* Merge: '<S16>/Merge5' incorporates:
         *  Constant: '<S109>/Calib'
         *  SignalConversion generated from: '<S103>/VeSRMC_e_APMMode_CC_AStrt'
         */
        VeSRMC_e_APMMode_AStrt = KeSRMR_e_APMMd_CC_AStrt;

        /* Switch: '<S103>/Switch2' */
        if (rtb_TmpSignalConversionAtVeSCMR_b_Lv2EVR)
        {
            /* Merge: '<S16>/Merge6' incorporates:
             *  Constant: '<S108>/Calib'
             */
            VeSRMC_U_APM_VdcLvSetP_AStrt = KeSRMR_U_VdcSP_CC_AStrt;
        }
        else
        {
            /* Merge: '<S16>/Merge6' */
            VeSRMC_U_APM_VdcLvSetP_AStrt =
                rtb_TmpSignalConversionAtVeSCMR_U_Lv2EVR;
        }

        /* End of Switch: '<S103>/Switch2' */
        /* End of Outputs for SubSystem: '<S16>/If_Action' */
    }
    else if (VeSRMC_b_PreChrgActv)
    {
        /* Outputs for IfAction SubSystem: '<S16>/If_Action1' incorporates:
         *  ActionPort: '<S104>/ActionPort'
         */
        /* Switch: '<S104>/Switch' */
        if (rtb_TmpSignalConversionAtVeLTIR_b_Lv2Mtr)
        {
            /* Merge: '<S16>/Merge' incorporates:
             *  Constant: '<S113>/Calib'
             *  SignalConversion: '<S104>/Signal_Conversion'
             */
            VeSRMC_M_BSGACtTrq_PC_AStrt = KeSRMR_M_BSGActTrq_PC_AStrt;
        }
        else
        {
            /* Merge: '<S16>/Merge' incorporates:
             *  SignalConversion: '<S104>/Signal_Conversion'
             */
            VeSRMC_M_BSGACtTrq_PC_AStrt =
                rtb_TmpSignalConversionAtVeSCMR_M_Lv2Mtr;
        }

        /* End of Switch: '<S104>/Switch' */

        /* Merge: '<S16>/Merge1' incorporates:
         *  Constant: '<S118>/Calib'
         *  SignalConversion generated from: '<S104>/VeSRMC_n_BSGChrgIdlSpdTrgt_PC_AStrt'
         */
        VeSRMC_n_BSGChrgIdlSpdTrgt_AStrt = KeSRMR_n_IdlSpdTrgt_PC_AStrt;

        /* Merge: '<S16>/Merge2' incorporates:
         *  Constant: '<S119>/Calib'
         *  SignalConversion generated from: '<S104>/VeSRMC_n_HCPMaxEngRPM_PC_AStrt'
         */
        VeSRMC_n_HCPMaxEngRPM_AStrt = KeSRMR_n_MaxEngSpd_PC_AStrt;

        /* Merge: '<S16>/Merge3' incorporates:
         *  Constant: '<S117>/Calib'
         *  SignalConversion generated from: '<S104>/VeSRMC_e_MtrMdCmnd_PC_AStrt'
         */
        SRMR_ac_B.Merge3 = KeSRMR_e_MtrMd_PC_AStrt;

        /* Merge: '<S16>/Merge4' incorporates:
         *  Constant: '<S114>/Calib'
         *  SignalConversion generated from: '<S104>/VeSRMC_M_MtrATorqCmnd_PC_AStrt'
         */
        VeSRMC_M_MtrATorqCmnd_AStrt = KeSRMR_M_MtrTrqCmnd_PC_AStrt;

        /* Merge: '<S16>/Merge5' incorporates:
         *  Constant: '<S116>/Calib'
         *  SignalConversion generated from: '<S104>/VeSRMC_e_APMMode_PC_AStrt'
         */
        VeSRMC_e_APMMode_AStrt = KeSRMR_e_APMMd_PC_AStrt;

        /* Merge: '<S16>/Merge6' incorporates:
         *  Constant: '<S115>/Calib'
         *  SignalConversion generated from: '<S104>/VeSRMC_U_APM_VdcLvSetP_PC_AStrt'
         */
        VeSRMC_U_APM_VdcLvSetP_AStrt = KeSRMR_U_VdcSP_PC_AStrt;

        /* End of Outputs for SubSystem: '<S16>/If_Action1' */
    }
    else
    {
        if (VeSRMC_b_DisblBSG)
        {
            /* Outputs for IfAction SubSystem: '<S16>/If_Action2' incorporates:
             *  ActionPort: '<S105>/ActionPort'
             */
            /* Merge: '<S16>/Merge' incorporates:
             *  Constant: '<S120>/Calib'
             *  SignalConversion generated from: '<S105>/VeSRMC_M_BSGACtTrq_Dsbl_AStrt'
             */
            VeSRMC_M_BSGACtTrq_PC_AStrt = KeSRMR_M_BSGActTrq_Dsbl_AStrt;

            /* Merge: '<S16>/Merge1' incorporates:
             *  Constant: '<S125>/Calib'
             *  SignalConversion generated from: '<S105>/VeSRMC_n_BSGChrgIdlSpdTrgt_Dsbl_AStrt'
             */
            VeSRMC_n_BSGChrgIdlSpdTrgt_AStrt = KeSRMR_n_IdlSpdTrgt_Dsbl_AStrt;

            /* Merge: '<S16>/Merge2' incorporates:
             *  Constant: '<S126>/Calib'
             *  SignalConversion generated from: '<S105>/VeSRMC_n_HCPMaxEngRPM_Dsbl_AStrt'
             */
            VeSRMC_n_HCPMaxEngRPM_AStrt = KeSRMR_n_MaxEngSpd_Dsbl_AStrt;

            /* Merge: '<S16>/Merge3' incorporates:
             *  Constant: '<S124>/Calib'
             *  SignalConversion generated from: '<S105>/VeSRMC_e_MtrMdCmnd_Dsbl_AStrt'
             */
            SRMR_ac_B.Merge3 = KeSRMR_e_MtrMd_Dsbl_AStrt;

            /* Merge: '<S16>/Merge4' incorporates:
             *  Constant: '<S121>/Calib'
             *  SignalConversion generated from: '<S105>/VeSRMC_M_MtrATorqCmnd_Dsbl_AStrt'
             */
            VeSRMC_M_MtrATorqCmnd_AStrt = KeSRMR_M_MtrTrqCmnd_Dsbl_AStrt;

            /* Merge: '<S16>/Merge5' incorporates:
             *  Constant: '<S123>/Calib'
             *  SignalConversion generated from: '<S105>/VeSRMC_e_APMMode_Dsbl_AStrt'
             */
            VeSRMC_e_APMMode_AStrt = KeSRMR_e_APMMd_Dsbl_AStrt;

            /* Merge: '<S16>/Merge6' incorporates:
             *  Constant: '<S122>/Calib'
             *  SignalConversion generated from: '<S105>/VeSRMC_U_APM_VdcLvSetP_Dsbl_AStrt'
             */
            VeSRMC_U_APM_VdcLvSetP_AStrt = KeSRMR_U_VdcSP_Dsbl_AStrt;

            /* End of Outputs for SubSystem: '<S16>/If_Action2' */
        }
    }

    /* End of If: '<S16>/If' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSCMR_e_Lv2MtrA_InvrtrSts' */
    (void)Rte_Read_VeSCMR_e_Lv2MtrA_InvrtrSts_Value(&tmpRead_x);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SRMC'
     */
    /* DataTypeConversion: '<S102>/DataTypeConversion' */
    VeSRMC_e_MtrMdCmnd_AStrt = (TeHTDR_e_SwitchMd)SRMR_ac_B.Merge3;

    /* SignalConversion: '<S16>/Signal_Conversion' */
    VeSRMC_M_BSGACtTrq_AStrt = VeSRMC_M_BSGACtTrq_PC_AStrt;

    /* RelationalOperator: '<S21>/Comparison6' incorporates:
     *  Constant: '<S178>/Calib'
     */
    VeSRMC_b_MtrInvrtrFltd = (((uint16)tmpRead_x) == KeSRMR_e_InvrtrFlt);

    /* If: '<S17>/If' */
    if (VeSRMC_b_CntctrsClosed)
    {
        /* Outputs for IfAction SubSystem: '<S17>/If_Action' incorporates:
         *  ActionPort: '<S134>/ActionPort'
         */
        /* Switch: '<S134>/Switch' */
        if (rtb_TmpSignalConversionAtVeLTIR_b_Lv2Mtr)
        {
            /* Switch: '<S134>/Switch' incorporates:
             *  Constant: '<S138>/Calib'
             */
            VeSRMC_M_BSGACtTrq_CC_TiAStp = KeSRMR_M_BSGActTrq_CC_TiAStp;
        }
        else
        {
            /* Switch: '<S134>/Switch' */
            VeSRMC_M_BSGACtTrq_CC_TiAStp =
                rtb_TmpSignalConversionAtVeSCMR_M_Lv2Mtr;
        }

        /* End of Switch: '<S134>/Switch' */

        /* Merge: '<S17>/Merge' incorporates:
         *  Gain: '<S134>/Gain'
         */
        VeSRMC_M_BSGACtTrq_TiAStp = VeSRMC_M_BSGACtTrq_CC_TiAStp;

        /* Merge: '<S17>/Merge1' incorporates:
         *  Constant: '<S144>/Calib'
         *  SignalConversion generated from: '<S134>/VeSRMC_n_BSGChrgIdlSpdTrgt_CC_TiAStp'
         */
        VeSRMC_n_BSGChrgIdlSpdTrgt_TiAStp = KeSRMR_n_IdlSpdTrgt_CC_TiAStp;

        /* Merge: '<S17>/Merge2' incorporates:
         *  Constant: '<S145>/Calib'
         *  SignalConversion generated from: '<S134>/VeSRMC_n_HCPMaxEngRPM_CC_TiAStp'
         */
        VeSRMC_n_HCPMaxEngRPM_TiAStp = KeSRMR_n_MaxEngSpd_CC_TiAStp;

        /* Lookup_n-D: '<S146>/Vector' incorporates:
         *  SignalConversion generated from: '<S1>/VeSCMR_Pct_Lv2HV_BatSOC'
         */
        VeSRMC_M_BSGLd_MtrTrqCmnd = look1_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVeSCMR_Pct_Lv2H, ((const float32 *)
              &(KxSRMR_M_BSGLoad[0])), ((const float32 *)&(KtSRMR_M_BSGLoad[0])),
             10U);

        /* Switch: '<S134>/Switch1' incorporates:
         *  Logic: '<S134>/Logical1'
         */
        if (rtb_TmpSignalConversionAtVeLTIR_b_Lv2H_d || (VeSRMC_b_MtrInvrtrFltd))
        {
            /* Merge: '<S17>/Merge4' incorporates:
             *  Constant: '<S139>/Calib'
             */
            VeSRMC_M_MtrATorqCmnd_TiAStp = KeSRMR_M_MtrTrqCmnd_CC_TiAStp;
        }
        else
        {
            /* Merge: '<S17>/Merge4' */
            VeSRMC_M_MtrATorqCmnd_TiAStp = VeSRMC_M_BSGLd_MtrTrqCmnd;
        }

        /* End of Switch: '<S134>/Switch1' */

        /* Switch: '<S134>/Switch3' */
        if (VeSRMC_b_MtrInvrtrFltd)
        {
            /* Merge: '<S17>/Merge3' incorporates:
             *  Constant: '<S143>/Calib'
             */
            SRMR_ac_B.Merge3_m = KeSRMR_e_MtrMd_CC_TiAStp_Flt;
        }
        else
        {
            /* Merge: '<S17>/Merge3' incorporates:
             *  Constant: '<S142>/Calib'
             */
            SRMR_ac_B.Merge3_m = KeSRMR_e_MtrMd_CC_TiAStp;
        }

        /* End of Switch: '<S134>/Switch3' */

        /* Merge: '<S17>/Merge5' incorporates:
         *  Constant: '<S141>/Calib'
         *  SignalConversion generated from: '<S134>/VeSRMC_e_APMMode_CC_TiAStp'
         */
        VeSRMC_e_APMMode_TiAStp = KeSRMR_e_APMMd_CC_TiAStp;

        /* Switch: '<S134>/Switch2' */
        if (rtb_TmpSignalConversionAtVeSCMR_b_Lv2EVR)
        {
            /* Merge: '<S17>/Merge6' incorporates:
             *  Constant: '<S140>/Calib'
             */
            VeSRMC_U_APM_VdcLvSetP_TiAStp = KeSRMR_U_VdcSP_CC_TiAStp;
        }
        else
        {
            /* Merge: '<S17>/Merge6' */
            VeSRMC_U_APM_VdcLvSetP_TiAStp =
                rtb_TmpSignalConversionAtVeSCMR_U_Lv2EVR;
        }

        /* End of Switch: '<S134>/Switch2' */
        /* End of Outputs for SubSystem: '<S17>/If_Action' */
    }
    else if (VeSRMC_b_PreChrgActv)
    {
        /* Outputs for IfAction SubSystem: '<S17>/If_Action1' incorporates:
         *  ActionPort: '<S135>/ActionPort'
         */
        /* Switch: '<S135>/Switch' */
        if (rtb_TmpSignalConversionAtVeLTIR_b_Lv2Mtr)
        {
            /* Switch: '<S135>/Switch' incorporates:
             *  Constant: '<S147>/Calib'
             */
            VeSRMC_M_BSGACtTrq_PC_TiAStp = KeSRMR_M_BSGActTrq_PC_TiAStp;
        }
        else
        {
            /* Switch: '<S135>/Switch' */
            VeSRMC_M_BSGACtTrq_PC_TiAStp =
                rtb_TmpSignalConversionAtVeSCMR_M_Lv2Mtr;
        }

        /* End of Switch: '<S135>/Switch' */

        /* Merge: '<S17>/Merge' incorporates:
         *  Gain: '<S135>/Gain'
         */
        VeSRMC_M_BSGACtTrq_TiAStp = VeSRMC_M_BSGACtTrq_PC_TiAStp;

        /* Merge: '<S17>/Merge1' incorporates:
         *  Constant: '<S152>/Calib'
         *  SignalConversion generated from: '<S135>/VeSRMC_n_BSGChrgIdlSpdTrgt_PC_TiAStp'
         */
        VeSRMC_n_BSGChrgIdlSpdTrgt_TiAStp = KeSRMR_n_IdlSpdTrgt_PC_TiAStp;

        /* Merge: '<S17>/Merge2' incorporates:
         *  Constant: '<S153>/Calib'
         *  SignalConversion generated from: '<S135>/VeSRMC_n_HCPMaxEngRPM_PC_TiAStp'
         */
        VeSRMC_n_HCPMaxEngRPM_TiAStp = KeSRMR_n_MaxEngSpd_PC_TiAStp;

        /* Merge: '<S17>/Merge3' incorporates:
         *  Constant: '<S151>/Calib'
         *  SignalConversion generated from: '<S135>/VeSRMC_e_MtrMdCmnd_PC_TiAStp'
         */
        SRMR_ac_B.Merge3_m = KeSRMR_e_MtrMd_PC_TiAStp;

        /* Merge: '<S17>/Merge4' incorporates:
         *  Constant: '<S148>/Calib'
         *  SignalConversion generated from: '<S135>/VeSRMC_M_MtrATorqCmnd_PC_TiAStp'
         */
        VeSRMC_M_MtrATorqCmnd_TiAStp = KeSRMR_M_MtrTrqCmnd_PC_TiAStp;

        /* Merge: '<S17>/Merge5' incorporates:
         *  Constant: '<S150>/Calib'
         *  SignalConversion generated from: '<S135>/VeSRMC_e_APMMode_PC_TiAStp'
         */
        VeSRMC_e_APMMode_TiAStp = KeSRMR_e_APMMd_PC_TiAStp;

        /* Merge: '<S17>/Merge6' incorporates:
         *  Constant: '<S149>/Calib'
         *  SignalConversion generated from: '<S135>/VeSRMC_U_APM_VdcLvSetP_PC_TiAStp'
         */
        VeSRMC_U_APM_VdcLvSetP_TiAStp = KeSRMR_U_VdcSP_PC_TiAStp;

        /* End of Outputs for SubSystem: '<S17>/If_Action1' */
    }
    else
    {
        if (VeSRMC_b_DisblBSG)
        {
            /* Outputs for IfAction SubSystem: '<S17>/If_Action2' incorporates:
             *  ActionPort: '<S136>/ActionPort'
             */
            /* Merge: '<S17>/Merge' incorporates:
             *  Constant: '<S154>/Calib'
             *  SignalConversion generated from: '<S136>/VeSRMC_M_BSGACtTrq_Dsbl_TiAStp'
             */
            VeSRMC_M_BSGACtTrq_TiAStp = KeSRMR_M_BSGActTrq_Dsbl_TiAStp;

            /* Merge: '<S17>/Merge1' incorporates:
             *  Constant: '<S159>/Calib'
             *  SignalConversion generated from: '<S136>/VeSRMC_n_BSGChrgIdlSpdTrgt_Dsbl_TiAStp'
             */
            VeSRMC_n_BSGChrgIdlSpdTrgt_TiAStp = KeSRMR_n_IdlSpdTrgt_Dsbl_TiAStp;

            /* Merge: '<S17>/Merge2' incorporates:
             *  Constant: '<S160>/Calib'
             *  SignalConversion generated from: '<S136>/VeSRMC_n_HCPMaxEngRPM_Dsbl_TiAStp'
             */
            VeSRMC_n_HCPMaxEngRPM_TiAStp = KeSRMR_n_MaxEngSpd_Dsbl_TiAStp;

            /* Merge: '<S17>/Merge3' incorporates:
             *  Constant: '<S158>/Calib'
             *  SignalConversion generated from: '<S136>/VeSRMC_e_MtrMdCmnd_Dsbl_TiAStp'
             */
            SRMR_ac_B.Merge3_m = KeSRMR_e_MtrMd_Dsbl_TiAStp;

            /* Merge: '<S17>/Merge4' incorporates:
             *  Constant: '<S155>/Calib'
             *  SignalConversion generated from: '<S136>/VeSRMC_M_MtrATorqCmnd_Dsbl_TiAStp'
             */
            VeSRMC_M_MtrATorqCmnd_TiAStp = KeSRMR_M_MtrTrqCmnd_Dsbl_TiAStp;

            /* Merge: '<S17>/Merge5' incorporates:
             *  Constant: '<S157>/Calib'
             *  SignalConversion generated from: '<S136>/VeSRMC_e_APMMode_Dsbl_TiAStp'
             */
            VeSRMC_e_APMMode_TiAStp = KeSRMR_e_APMMd_Dsbl_TiAStp;

            /* Merge: '<S17>/Merge6' incorporates:
             *  Constant: '<S156>/Calib'
             *  SignalConversion generated from: '<S136>/VeSRMC_U_APM_VdcLvSetP_Dsbl_TiAStp'
             */
            VeSRMC_U_APM_VdcLvSetP_TiAStp = KeSRMR_U_VdcSP_Dsbl_TiAStp;

            /* End of Outputs for SubSystem: '<S17>/If_Action2' */
        }
    }

    /* End of If: '<S17>/If' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSCMR_b_Lv2MtrCFlt_HV_CntctrOpnRq' */
    (void)Rte_Read_VeSCMR_b_Lv2MtrCFlt_HV_CntctrOpnRq_Value(&rtb_AnyTrue1);

    /* Inport: '<Root>/VeSCMR_b_Lv2MtrBFlt_HV_CntctrOpnRq' */
    (void)Rte_Read_VeSCMR_b_Lv2MtrBFlt_HV_CntctrOpnRq_Value(&rtb_AnyTrue4);

    /* Inport: '<Root>/VeSCMR_b_Lv2MtrAFlt_HV_CntctrOpnRq' */
    (void)Rte_Read_VeSCMR_b_Lv2MtrAFlt_HV_CntctrOpnRq_Value(&rtb_AnyTrue7);

    /* Inport: '<Root>/VeSCMR_b_Lv2HV_BatCntctrReq' */
    (void)Rte_Read_VeSCMR_b_Lv2HV_BatCntctrReq_Value(&rtb_AnyTrue10);

    /* Inport: '<Root>/VeSCMR_U_Lv2APM_HVBatVlt' */
    (void)Rte_Read_VeSCMR_U_Lv2APM_HVBatVlt_Value((&(VeSRMC_U_48VBattVolt)));

    /* Inport: '<Root>/VeSCMR_U_BPCM_HVBatVlt' */
    (void)Rte_Read_VeSCMR_U_BPCM_HVBatVlt_Value((&(VeSRMC_U_48VBattVolt_Arb)));

    /* Inport: '<Root>/VeSCMR_U_InvrtrA_HVBatVlt' */
    (void)Rte_Read_VeSCMR_U_InvrtrA_HVBatVlt_Value(&tmpRead_z);

    /* Inport: '<Root>/VeSCMR_b_BPCM_HVBatVltFA' */
    (void)Rte_Read_VeSCMR_b_BPCM_HVBatVltFA_Value(&rtb_AnyTrue6);

    /* Inport: '<Root>/VeLTIR_b_Lv2APM_HVBatVlt_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2APM_HVBatVlt_FA_Value(&rtb_AnyTrue3);

    /* Inport: '<Root>/VeLTIR_b_Lv2HV_BatModTempMax_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2HV_BatModTempMax_FA_Value(&rtb_AnyTrue5);

    /* Inport: '<Root>/VeSCMR_T_Lv2HV_BatModTempMax' */
    (void)Rte_Read_VeSCMR_T_Lv2HV_BatModTempMax_Value(&tmpRead_y);

    /* Inport: '<Root>/VeSCMR_b_SharedMemFlt' */
    (void)Rte_Read_VeSCMR_b_SharedMemFlt_Value(&rtb_AnyTrue8);

    /* Inport: '<Root>/VeASMR_n_Lv2EngSpd' */
    (void)Rte_Read_VeASMR_n_Lv2EngSpd_Value(&tmpRead_w);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SRMC'
     */
    /* DataTypeConversion: '<S127>/DataTypeConversion' */
    VeSRMC_e_MtrMdCmnd_TiAStp = (TeHTDR_e_SwitchMd)SRMR_ac_B.Merge3_m;

    /* Logic: '<S21>/Logical3' incorporates:
     *  Constant: '<S174>/Calib'
     */
    VeSRMC_b_BPCM_HVBatVltFA = (rtb_AnyTrue6 && (KeSRMR_b_UseBPCM_HVBatVlt));

    /* Switch: '<S169>/Switch1' */
    if (VeSRMC_b_BPCM_HVBatVltFA)
    {
        /* Switch: '<S169>/Switch1' incorporates:
         *  Inport: '<Root>/VeSCMR_U_BPCM_HVBatVlt'
         */
        VeSRMC_U_48VBattVolt_Arb = tmpRead_z;
    }

    /* End of Switch: '<S169>/Switch1' */

    /* Logic: '<S21>/Logical' incorporates:
     *  Constant: '<S173>/Calib'
     */
    VeSRMC_b_APM_HVBatVltFA = (rtb_AnyTrue3 && (KeSRMR_b_UseAPM_HVBatVlt));

    /* Switch: '<S168>/Switch1' */
    if (VeSRMC_b_APM_HVBatVltFA)
    {
        /* Switch: '<S168>/Switch1' incorporates:
         *  Inport: '<Root>/VeSCMR_U_Lv2APM_HVBatVlt'
         */
        VeSRMC_U_48VBattVolt = VeSRMC_U_48VBattVolt_Arb;
    }

    /* End of Switch: '<S168>/Switch1' */

    /* RelationalOperator: '<S21>/Comparison8' incorporates:
     *  Constant: '<S172>/Calib'
     */
    VeSRMC_b_48VBusVoltLow = (VeSRMC_U_48VBattVolt <= KeSRMR_U_48VBusVoltLow);

    /* Logic: '<S21>/Logical4' incorporates:
     *  Constant: '<S166>/Constant'
     *  Constant: '<S167>/Constant'
     *  Constant: '<S170>/Calib'
     *  Constant: '<S171>/Calib'
     *  Constant: '<S175>/Calib'
     *  Constant: '<S176>/Calib'
     *  Constant: '<S177>/Calib'
     *  Constant: '<S179>/Calib'
     *  Logic: '<S21>/Logical1'
     *  Logic: '<S21>/Logical2'
     *  RelationalOperator: '<S21>/Comparison1'
     *  RelationalOperator: '<S21>/Comparison10'
     *  RelationalOperator: '<S21>/Comparison2'
     *  RelationalOperator: '<S21>/Comparison3'
     *  RelationalOperator: '<S21>/Comparison4'
     *  RelationalOperator: '<S21>/Comparison5'
     *  RelationalOperator: '<S21>/Comparison7'
     *  RelationalOperator: '<S21>/Comparison9'
     */
    VeSRMC_b_NoAlternatorMdRemAction = ((((((((((((CeLTIR_e_IGN_LK == ((uint32)
        VeSRMC_e_Lv2KeySts)) || (((uint32)VeSRMC_e_Lv2KeySts) ==
        CeLTIR_e_IGN_ACC)) || (tmpRead_w <= KeSRMR_n_EngLowRPM)) ||
        (((rtb_TmpSignalConversionAtVeSCMR_e_Lv2ESS == KeSRMR_e_ESS_EngSt_Disbl)
          || (rtb_TmpSignalConversionAtVeSCMR_e_Lv2ESS ==
              KeSRMR_e_ESS_EngSt_KeyStrt)) ||
         (rtb_TmpSignalConversionAtVeSCMR_e_Lv2ESS ==
          KeSRMR_e_ESS_EngSt_KeyTqStrt))) || rtb_AnyTrue8) ||
        (VeSRMC_b_MtrInvrtrFltd)) || rtb_TmpSignalConversionAtVeSCMR_b_Lv2HV_) ||
        (tmpRead_y >= KeSRMR_T_HVBatModTempMax)) || rtb_AnyTrue5) ||
        rtb_TmpSignalConversionAtVeLTIR_b_Lv2H_d) ||
        (rtb_TmpSignalConversionAtVeSCMR_Pct_Lv2H <= KeSRMR_Pct_HVBatSOCLow)) ||
        (VeSRMC_b_48VBusVoltLow));

    /* RelationalOperator: '<S22>/Comparison4' incorporates:
     *  Constant: '<S187>/Calib'
     */
    VeSRMC_b_APM_Failure = (rtb_TmpSignalConversionAtVeSCMR_e_Lv2APM ==
                            KeSRMR_e_APM_FailType_Failure_ChargingInhibited);

    /* RelationalOperator: '<S22>/Comparison2' incorporates:
     *  Constant: '<S188>/Calib'
     */
    VeSRMC_b_APM_Fail_SNA = (rtb_TmpSignalConversionAtVeSCMR_e_Lv2APM ==
        KeSRMR_e_APM_FailType_SNA);

    /* Logic: '<S22>/Logical1' */
    VeSRMC_b_APM_Malfunction = ((VeSRMC_b_APM_Failure) || (VeSRMC_b_APM_Fail_SNA));

    /* RelationalOperator: '<S22>/Comparison3' incorporates:
     *  Constant: '<S185>/Calib'
     */
    VeSRMC_b_APMFailRsn_NoFail = (rtb_TmpSignalConversionAtVeSCMR_e_Lv2A_a ==
        KeSRMR_e_APM_FailRsn_NoFail);

    /* RelationalOperator: '<S22>/Comparison5' incorporates:
     *  Constant: '<S186>/Calib'
     */
    VeSRMC_b_APMFailRsn_SNA = (rtb_TmpSignalConversionAtVeSCMR_e_Lv2A_a !=
        KeSRMR_e_APM_FailRsn_SNA);

    /* Logic: '<S22>/Logical3' */
    VeSRMC_b_APM_NoFailRsn = ((VeSRMC_b_APMFailRsn_NoFail) &&
        (VeSRMC_b_APMFailRsn_SNA));

    /* Logic: '<S22>/Logical4' */
    VeSRMC_b_BattCntctrOpnReq = (rtb_TmpSignalConversionAtVeSCMR_b_Lv2HV_ ||
        rtb_AnyTrue10);

    /* Logic: '<S286>/ThermalEventReceived' */
    VeSRMC_b_ThermEveFailg = ((rtb_AnyTrue7 || rtb_AnyTrue4) || rtb_AnyTrue1);

    /* Outputs for Atomic SubSystem: '<S286>/Count Down Reset Enabled' */
    /* Switch: '<S288>/Switch1' incorporates:
     *  Constant: '<S288>/Constant Value'
     *  Constant: '<S289>/Calib'
     *  DataStoreRead: '<S286>/RA_Reset'
     *  Logic: '<S286>/ThermalEventReceived1'
     *  Logic: '<S286>/ThermalEventReceived2'
     *  Logic: '<S288>/AND'
     *  RelationalOperator: '<S288>/Greater  Than'
     *  Switch: '<S288>/Switch2'
     *  UnitDelay: '<S288>/Unit Delay'
     */
    if ((!VeSRMC_b_ThermEveFailg) || (VeSRMC_b_RstOnKeyOff))
    {
        SRMR_ac_DW.UnitDelay_DSTATE_mw = KeSRMR_Cnt_ThermEveFailgCntrLim;
    }
    else
    {
        if ((VeSRMC_b_ThermEveFailg) && (((sint32)SRMR_ac_DW.UnitDelay_DSTATE_mw)
             > 0))
        {
            /* UnitDelay: '<S288>/Unit Delay' incorporates:
             *  Constant: '<S288>/Constant Value1'
             *  Sum: '<S288>/Subtraction'
             *  Switch: '<S288>/Switch2'
             */
            SRMR_ac_DW.UnitDelay_DSTATE_mw = (uint16)((sint32)(((sint32)
                SRMR_ac_DW.UnitDelay_DSTATE_mw) - 1));
        }
    }

    /* End of Switch: '<S288>/Switch1' */

    /* Logic: '<S286>/ThermalEventReceived3' incorporates:
     *  Constant: '<S288>/Constant Value2'
     *  RelationalOperator: '<S288>/Greater  Than1'
     *  UnitDelay: '<S288>/Unit Delay'
     */
    VeSRMC_b_ThermEveFaild = (((sint32)SRMR_ac_DW.UnitDelay_DSTATE_mw) <= 0);

    /* End of Outputs for SubSystem: '<S286>/Count Down Reset Enabled' */

    /* Logic: '<S286>/Lv1Failed' incorporates:
     *  Constant: '<S290>/Constant'
     *  DataTypeConversion: '<S1>/Data Type Conversion4'
     *  Inport: '<Root>/VeHPMR_e_HighVltCntctrCntrl'
     *  RelationalOperator: '<S290>/Compare'
     */
    VeSRMC_b_ThermEveCntctrOpnRq = ((VeSRMC_b_ThermEveFaild) && (((sint32)
        tmpRead_10) != 0));

    /* Logic: '<S22>/Logical5' */
    VeSRMC_b_NoBattCntctrOpnReq = ((!VeSRMC_b_BattCntctrOpnReq) &&
        (!VeSRMC_b_ThermEveCntctrOpnRq));

    /* Logic: '<S22>/Logical8' incorporates:
     *  Constant: '<S180>/Constant'
     *  RelationalOperator: '<S22>/Comparison6'
     */
    VeSRMC_b_BattCntctrNotOpn = (rtb_TmpSignalConversionAtVeGRAR_b_Disa_d &&
        (((uint32)VeSRMC_b_CmndCntctrOpn_tmp) != CeSRMR_e_Cntctr_Opn));

    /* Logic: '<S22>/Logical7' incorporates:
     *  Logic: '<S22>/Logical2'
     */
    VeSRMC_b_OkToClsBattCntctr = (((((!VeSRMC_b_APM_Malfunction) &&
        (VeSRMC_b_APM_NoFailRsn)) && (VeSRMC_b_NoBattCntctrOpnReq)) &&
        tmpRead_1a) && (VeSRMC_b_BattCntctrNotOpn));

    /* Switch: '<S181>/Switch1' */
    if (VeSRMC_b_OkToClsBattCntctr)
    {
        /* Switch: '<S181>/Switch1' incorporates:
         *  Constant: '<S189>/Calib'
         */
        VeSRMC_e_Lv2CntctrCmnd_Intmnt = KeSRMR_e_CntctrClsCmnd;
    }
    else
    {
        /* Switch: '<S181>/Switch1' incorporates:
         *  Constant: '<S190>/Calib'
         */
        VeSRMC_e_Lv2CntctrCmnd_Intmnt = KeSRMR_e_CntctrOpnCmnd;
    }

    /* End of Switch: '<S181>/Switch1' */

    /* RelationalOperator: '<S22>/Comparison10' incorporates:
     *  Constant: '<S189>/Calib'
     */
    VeSRMC_b_Lv2CntctrCmnd_Cls = (VeSRMC_e_Lv2CntctrCmnd_Intmnt ==
        KeSRMR_e_CntctrClsCmnd);

    /* RelationalOperator: '<S22>/Comparison7' incorporates:
     *  Constant: '<S190>/Calib'
     */
    VeSRMC_b_Lv2CntctrCmnd_Opn = (VeSRMC_e_Lv2CntctrCmnd_Intmnt ==
        KeSRMR_e_CntctrOpnCmnd);

    /* Logic: '<S22>/Logical11' */
    VeSRMC_b_Lv2CntctrCmnd_Opn_Arb = ((VeSRMC_b_Lv2CntctrCmnd_Opn) &&
        (VeSRMC_b_BSGFltActv));

    /* Outputs for Atomic SubSystem: '<S22>/LV2_Turn_On_Delay_Sample' */
    /* Switch: '<S191>/LV2Switch' incorporates:
     *  Constant: '<S184>/Calib'
     *  Constant: '<S191>/Constant Value'
     *  Constant: '<S191>/Constant Value1'
     *  Logic: '<S191>/OR'
     *  Logic: '<S191>/OR1'
     *  Logic: '<S192>/AND1'
     *  Logic: '<S192>/OR2'
     *  MinMax: '<S191>/Minimum'
     *  Sum: '<S191>/Summation'
     *  UnitDelay: '<S191>/Unit Delay1'
     *  UnitDelay: '<S192>/Unit Delay'
     */
    if ((!VeSRMC_b_Lv2CntctrCmnd_Opn_Arb) || ((VeSRMC_b_Lv2CntctrCmnd_Opn_Arb) &&
         (!SRMR_ac_DW.VeSRMC_b_Lv2CntctrCmnd_Dly_prev)))
    {
        SRMR_ac_DW.VeSRMC_Cnt_Lv2CntctrCmnd_Dly_prev = 0U;
    }
    else if (KeSRMR_Cnt_MaxCntcrOpnCmndTm < ((uint16)(((uint32)
                SRMR_ac_DW.VeSRMC_Cnt_Lv2CntctrCmnd_Dly_prev) + 1U)))
    {
        /* MinMax: '<S191>/Minimum' incorporates:
         *  Constant: '<S184>/Calib'
         */
        SRMR_ac_DW.VeSRMC_Cnt_Lv2CntctrCmnd_Dly_prev =
            KeSRMR_Cnt_MaxCntcrOpnCmndTm;
    }
    else
    {
        /* MinMax: '<S191>/Minimum' incorporates:
         *  Constant: '<S191>/Constant Value'
         *  Sum: '<S191>/Summation'
         *  UnitDelay: '<S191>/Unit Delay1'
         */
        SRMR_ac_DW.VeSRMC_Cnt_Lv2CntctrCmnd_Dly_prev = (uint16)(((uint32)
            SRMR_ac_DW.VeSRMC_Cnt_Lv2CntctrCmnd_Dly_prev) + 1U);
    }

    /* End of Switch: '<S191>/LV2Switch' */
    /* End of Outputs for SubSystem: '<S22>/LV2_Turn_On_Delay_Sample' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSCMR_e_MSSBEV_Action' */
    (void)Rte_Read_VeSCMR_e_MSSBEV_Action_Value(&tmpRead_1c);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SRMC'
     */
    /* Outputs for Atomic SubSystem: '<S22>/LV2_Turn_On_Delay_Sample' */
    /* Update for UnitDelay: '<S192>/Unit Delay' */
    SRMR_ac_DW.VeSRMC_b_Lv2CntctrCmnd_Dly_prev = VeSRMC_b_Lv2CntctrCmnd_Opn_Arb;

    /* Logic: '<S22>/Logical10' incorporates:
     *  Constant: '<S184>/Calib'
     *  Logic: '<S191>/AND'
     *  RelationalOperator: '<S191>/GreaterThan'
     *  UnitDelay: '<S191>/Unit Delay1'
     */
    VeSRMC_b_OkToCmndBattOpn = (((VeSRMC_b_Lv2CntctrCmnd_Opn_Arb) &&
        (SRMR_ac_DW.VeSRMC_Cnt_Lv2CntctrCmnd_Dly_prev >=
         KeSRMR_Cnt_MaxCntcrOpnCmndTm)) || (VeSRMC_b_48VBusVoltLow));

    /* End of Outputs for SubSystem: '<S22>/LV2_Turn_On_Delay_Sample' */

    /* Switch: '<S183>/Switch1' */
    if (VeSRMC_b_OkToCmndBattOpn)
    {
        /* Switch: '<S183>/Switch1' incorporates:
         *  Constant: '<S190>/Calib'
         */
        VeSRMC_e_BattCntctrOpnCmndArb = KeSRMR_e_CntctrOpnCmnd;
    }
    else
    {
        /* Switch: '<S183>/Switch1' incorporates:
         *  UnitDelay: '<S30>/Unit Delay'
         */
        VeSRMC_e_BattCntctrOpnCmndArb = SRMR_ac_DW.VeSRMC_e_Lv2CntctrCmnd_Prev;
    }

    /* End of Switch: '<S183>/Switch1' */

    /* Switch: '<S182>/Switch1' */
    if (VeSRMC_b_OkToClsBattCntctr)
    {
        /* Switch: '<S182>/Switch1' incorporates:
         *  Constant: '<S189>/Calib'
         */
        VeSRMC_e_Lv2CntctrCmnd = KeSRMR_e_CntctrClsCmnd;
    }
    else
    {
        /* Switch: '<S182>/Switch1' */
        VeSRMC_e_Lv2CntctrCmnd = VeSRMC_e_BattCntctrOpnCmndArb;
    }

    /* End of Switch: '<S182>/Switch1' */

    /* Logic: '<S412>/AnyTrue' incorporates:
     *  Constant: '<S482>/Constant'
     *  DataTypeConversion: '<S481>/DataTypeConversion'
     *  RelationalOperator: '<S412>/Comparison'
     *  RelationalOperator: '<S412>/Comparison16'
     */
    rtb_TmpSignalConversionAtVeSCMR_b_Lv2EVR = ((((uint32)tmpRead_1c) ==
        CeGRAR_e_LimSoft_1_1) || (CeGRAR_e_LimSoft_1_1 == ((uint32)
        rtb_TmpSignalConversionAtVeGRAR_e_MSSBEV)));

    /* Logic: '<S412>/AnyTrue1' incorporates:
     *  Constant: '<S493>/Constant'
     *  DataTypeConversion: '<S481>/DataTypeConversion'
     *  RelationalOperator: '<S412>/Comparison17'
     *  RelationalOperator: '<S412>/Comparison18'
     */
    rtb_AnyTrue1 = ((((uint32)tmpRead_1c) == CeGRAR_e_LimSoft_1_2) ||
                    (CeGRAR_e_LimSoft_1_2 == ((uint32)
                      rtb_TmpSignalConversionAtVeGRAR_e_MSSBEV)));

    /* Logic: '<S412>/AnyTrue2' incorporates:
     *  Constant: '<S496>/Constant'
     *  DataTypeConversion: '<S481>/DataTypeConversion'
     *  RelationalOperator: '<S412>/Comparison19'
     *  RelationalOperator: '<S412>/Comparison20'
     */
    rtb_TmpSignalConversionAtVeGRAR_b_Disa_d = ((((uint32)tmpRead_1c) ==
        CeGRAR_e_LimSoft_1_3) || (CeGRAR_e_LimSoft_1_3 == ((uint32)
        rtb_TmpSignalConversionAtVeGRAR_e_MSSBEV)));

    /* Logic: '<S412>/LimitationCondMet' incorporates:
     *  Constant: '<S500>/Constant'
     *  RelationalOperator: '<S412>/Comparison11'
     *  Switch: '<S48>/VeSRMR_e_GRAR_Action'
     */
    VeSRMC_b_SoftLimitationEnable = (((rtb_TmpSignalConversionAtVeSCMR_b_Lv2EVR ||
        rtb_AnyTrue1) || rtb_TmpSignalConversionAtVeGRAR_b_Disa_d) || (((uint32)
        VeSRMC_e_GRAR_Action) == CeSRMR_e_GRAR_SoftLimitation));

    /* Logic: '<S412>/AnyTrue3' incorporates:
     *  Constant: '<S497>/Constant'
     *  DataTypeConversion: '<S481>/DataTypeConversion'
     *  RelationalOperator: '<S412>/Comparison21'
     *  RelationalOperator: '<S412>/Comparison22'
     */
    rtb_AnyTrue3 = ((((uint32)tmpRead_1c) == CeGRAR_e_LimMed_2_1) ||
                    (CeGRAR_e_LimMed_2_1 == ((uint32)
                      rtb_TmpSignalConversionAtVeGRAR_e_MSSBEV)));

    /* Logic: '<S412>/AnyTrue4' incorporates:
     *  Constant: '<S498>/Constant'
     *  DataTypeConversion: '<S481>/DataTypeConversion'
     *  RelationalOperator: '<S412>/Comparison23'
     *  RelationalOperator: '<S412>/Comparison24'
     */
    rtb_AnyTrue4 = ((((uint32)tmpRead_1c) == CeGRAR_e_LimMed_2_2) ||
                    (CeGRAR_e_LimMed_2_2 == ((uint32)
                      rtb_TmpSignalConversionAtVeGRAR_e_MSSBEV)));

    /* Logic: '<S412>/AnyTrue5' incorporates:
     *  Constant: '<S499>/Constant'
     *  DataTypeConversion: '<S481>/DataTypeConversion'
     *  RelationalOperator: '<S412>/Comparison25'
     *  RelationalOperator: '<S412>/Comparison26'
     */
    rtb_AnyTrue5 = ((((uint32)tmpRead_1c) == CeGRAR_e_LimMed_2_3) ||
                    (CeGRAR_e_LimMed_2_3 == ((uint32)
                      rtb_TmpSignalConversionAtVeGRAR_e_MSSBEV)));

    /* Logic: '<S412>/LimitationCondMet1' */
    VeSRMC_b_MedLimitationEnable = ((rtb_AnyTrue3 || rtb_AnyTrue4) ||
        rtb_AnyTrue5);

    /* Logic: '<S412>/AnyTrue6' incorporates:
     *  Constant: '<S501>/Constant'
     *  DataTypeConversion: '<S481>/DataTypeConversion'
     *  RelationalOperator: '<S412>/Comparison3'
     *  RelationalOperator: '<S412>/Comparison4'
     */
    rtb_AnyTrue6 = ((((uint32)tmpRead_1c) == CeGRAR_e_LimHard_3_1) ||
                    (CeGRAR_e_LimHard_3_1 == ((uint32)
                      rtb_TmpSignalConversionAtVeGRAR_e_MSSBEV)));

    /* Logic: '<S412>/AnyTrue7' incorporates:
     *  Constant: '<S502>/Constant'
     *  DataTypeConversion: '<S481>/DataTypeConversion'
     *  RelationalOperator: '<S412>/Comparison7'
     *  RelationalOperator: '<S412>/Comparison8'
     */
    rtb_AnyTrue7 = ((((uint32)tmpRead_1c) == CeGRAR_e_LimHard_3_2) ||
                    (CeGRAR_e_LimHard_3_2 == ((uint32)
                      rtb_TmpSignalConversionAtVeGRAR_e_MSSBEV)));

    /* Logic: '<S412>/AnyTrue8' incorporates:
     *  Constant: '<S483>/Constant'
     *  DataTypeConversion: '<S481>/DataTypeConversion'
     *  RelationalOperator: '<S412>/Comparison14'
     *  RelationalOperator: '<S412>/Comparison9'
     */
    rtb_AnyTrue8 = ((((uint32)tmpRead_1c) == CeGRAR_e_LimHard_3_3) ||
                    (CeGRAR_e_LimHard_3_3 == ((uint32)
                      rtb_TmpSignalConversionAtVeGRAR_e_MSSBEV)));

    /* Logic: '<S412>/LimitationCondMet2' incorporates:
     *  Constant: '<S495>/Constant'
     *  RelationalOperator: '<S412>/Comparison37'
     */
    VeSRMC_b_HardLimitationEnable = (((rtb_AnyTrue6 || rtb_AnyTrue7) ||
        rtb_AnyTrue8) || (((uint32)rtb_TmpSignalConversionAtVeGRAR_e_TotMtr) ==
                          CeGRAR_e_LimMax));

    /* Logic: '<S418>/LogicalOperator' incorporates:
     *  Constant: '<S485>/Constant'
     *  DataTypeConversion: '<S481>/DataTypeConversion'
     *  Logic: '<S412>/AnyTrue9'
     *  RelationalOperator: '<S412>/Comparison12'
     *  RelationalOperator: '<S412>/Comparison15'
     */
    rtb_TmpSignalConversionAtVeSCMR_b_Lv2HV_ = ((((uint32)tmpRead_1c) ==
        CeGRAR_e_LimUltraHard_4_1) || (CeGRAR_e_LimUltraHard_4_1 == ((uint32)
        rtb_TmpSignalConversionAtVeGRAR_e_MSSBEV)));

    /* Logic: '<S412>/AnyTrue10' incorporates:
     *  Constant: '<S486>/Constant'
     *  DataTypeConversion: '<S481>/DataTypeConversion'
     *  RelationalOperator: '<S412>/Comparison27'
     *  RelationalOperator: '<S412>/Comparison28'
     */
    rtb_AnyTrue10 = ((((uint32)tmpRead_1c) == CeGRAR_e_LimUltraHard_4_2) ||
                     (CeGRAR_e_LimUltraHard_4_2 == ((uint32)
                       rtb_TmpSignalConversionAtVeGRAR_e_MSSBEV)));

    /* Logic: '<S412>/AnyTrue11' incorporates:
     *  Constant: '<S484>/Constant'
     *  DataTypeConversion: '<S481>/DataTypeConversion'
     *  RelationalOperator: '<S412>/Comparison10'
     *  RelationalOperator: '<S412>/Comparison29'
     */
    rtb_TmpSignalConversionAtVeLTIR_b_Lv2Mtr = ((((uint32)tmpRead_1c) ==
        CeGRAR_e_LimUltraHard_4_3) || (CeGRAR_e_LimUltraHard_4_3 == ((uint32)
        rtb_TmpSignalConversionAtVeGRAR_e_MSSBEV)));

    /* Logic: '<S412>/LimitationCondMet3' incorporates:
     *  Constant: '<S492>/Constant'
     *  RelationalOperator: '<S412>/Comparison36'
     */
    VeSRMC_b_UltraHardLimitationEnable =
        (((rtb_TmpSignalConversionAtVeSCMR_b_Lv2HV_ || rtb_AnyTrue10) ||
          rtb_TmpSignalConversionAtVeLTIR_b_Lv2Mtr) || (((uint32)
           rtb_TmpSignalConversionAtVeGRAR_e_TotMtr) == CeGRAR_e_Creep));

    /* Logic: '<S412>/LimitationCondMet4' incorporates:
     *  Constant: '<S487>/Constant'
     *  Constant: '<S488>/Constant'
     *  Constant: '<S489>/Constant'
     *  Constant: '<S494>/Constant'
     *  DataTypeConversion: '<S481>/DataTypeConversion'
     *  Logic: '<S412>/AnyTrue12'
     *  Logic: '<S412>/AnyTrue13'
     *  Logic: '<S412>/AnyTrue14'
     *  RelationalOperator: '<S412>/Comparison1'
     *  RelationalOperator: '<S412>/Comparison2'
     *  RelationalOperator: '<S412>/Comparison30'
     *  RelationalOperator: '<S412>/Comparison31'
     *  RelationalOperator: '<S412>/Comparison32'
     *  RelationalOperator: '<S412>/Comparison35'
     *  RelationalOperator: '<S412>/Comparison5'
     */
    VeSRMC_b_StopLimitationEnable = (((((((uint32)tmpRead_1c) ==
        CeGRAR_e_Lim_5_1_VehStop_Fast) || (CeGRAR_e_Lim_5_1_VehStop_Fast ==
        ((uint32)rtb_TmpSignalConversionAtVeGRAR_e_MSSBEV))) || ((((uint32)
        tmpRead_1c) == CeGRAR_e_Lim_5_2_VehStop_Slow) ||
        (CeGRAR_e_Lim_5_2_VehStop_Slow == ((uint32)
        rtb_TmpSignalConversionAtVeGRAR_e_MSSBEV)))) || ((((uint32)tmpRead_1c) ==
        CeGRAR_e_Lim_5_3_VehStop_MTRMD) || (CeGRAR_e_Lim_5_3_VehStop_MTRMD ==
        ((uint32)rtb_TmpSignalConversionAtVeGRAR_e_MSSBEV)))) || (((uint32)
        rtb_TmpSignalConversionAtVeGRAR_e_TotMtr) == CeGRAR_e_Zero));

    /* Logic: '<S412>/LimitationCondMet5' incorporates:
     *  Constant: '<S490>/Constant'
     *  Constant: '<S491>/Constant'
     *  DataTypeConversion: '<S481>/DataTypeConversion'
     *  Logic: '<S412>/AnyTrue15'
     *  Logic: '<S412>/AnyTrue16'
     *  RelationalOperator: '<S412>/Comparison13'
     *  RelationalOperator: '<S412>/Comparison33'
     *  RelationalOperator: '<S412>/Comparison34'
     *  RelationalOperator: '<S412>/Comparison6'
     */
    VeSRMC_b_KeyOffLimitationEnable = (((((uint32)tmpRead_1c) ==
        CeGRAR_e_KeyOff_HV_Limitation) || (CeGRAR_e_KeyOff_HV_Limitation ==
        ((uint32)rtb_TmpSignalConversionAtVeGRAR_e_MSSBEV))) || ((((uint32)
        tmpRead_1c) == CeGRAR_e_KeyOff_TRQ_Limitation) ||
        (CeGRAR_e_KeyOff_TRQ_Limitation == ((uint32)
        rtb_TmpSignalConversionAtVeGRAR_e_MSSBEV))));

    /* If: '<S412>/If' */
    if (VeSRMC_b_KeyOffLimitationEnable)
    {
        /* Outputs for IfAction SubSystem: '<S412>/Action' incorporates:
         *  ActionPort: '<S472>/Action_Port'
         */
        /* RelationalOperator: '<S211>/Relational_Operator' incorporates:
         *  Constant: '<S503>/Constant'
         *  SignalConversion generated from: '<S472>/Out'
         *  Switch: '<S479>/Switch'
         */
        SRMR_ac_B.Switch = CeSRMR_e_KeyOffLimitation;

        /* End of Outputs for SubSystem: '<S412>/Action' */
    }
    else if (VeSRMC_b_StopLimitationEnable)
    {
        /* Outputs for IfAction SubSystem: '<S412>/Action1' incorporates:
         *  ActionPort: '<S473>/Action_Port'
         */
        /* RelationalOperator: '<S211>/Relational_Operator' incorporates:
         *  Constant: '<S504>/Constant'
         *  SignalConversion generated from: '<S473>/Out'
         *  Switch: '<S479>/Switch'
         */
        SRMR_ac_B.Switch = CeSRMR_e_StopLimitation;

        /* End of Outputs for SubSystem: '<S412>/Action1' */
    }
    else if (VeSRMC_b_UltraHardLimitationEnable)
    {
        /* Outputs for IfAction SubSystem: '<S412>/Action2' incorporates:
         *  ActionPort: '<S474>/Action_Port'
         */
        /* RelationalOperator: '<S211>/Relational_Operator' incorporates:
         *  Constant: '<S505>/Constant'
         *  SignalConversion generated from: '<S474>/Out'
         *  Switch: '<S479>/Switch'
         */
        SRMR_ac_B.Switch = CeSRMR_e_UltraHardLimitation;

        /* End of Outputs for SubSystem: '<S412>/Action2' */
    }
    else if (VeSRMC_b_HardLimitationEnable)
    {
        /* Outputs for IfAction SubSystem: '<S412>/Action3' incorporates:
         *  ActionPort: '<S475>/Action_Port'
         */
        /* RelationalOperator: '<S211>/Relational_Operator' incorporates:
         *  Constant: '<S506>/Constant'
         *  SignalConversion generated from: '<S475>/Out'
         *  Switch: '<S479>/Switch'
         */
        SRMR_ac_B.Switch = CeSRMR_e_HardLimitation;

        /* End of Outputs for SubSystem: '<S412>/Action3' */
    }
    else if (VeSRMC_b_MedLimitationEnable)
    {
        /* Outputs for IfAction SubSystem: '<S412>/Action4' incorporates:
         *  ActionPort: '<S476>/Action_Port'
         */
        /* RelationalOperator: '<S211>/Relational_Operator' incorporates:
         *  Constant: '<S507>/Constant'
         *  SignalConversion generated from: '<S476>/Out'
         *  Switch: '<S479>/Switch'
         */
        SRMR_ac_B.Switch = CeSRMR_e_MedLimitation;

        /* End of Outputs for SubSystem: '<S412>/Action4' */
    }
    else if (VeSRMC_b_SoftLimitationEnable)
    {
        /* Outputs for IfAction SubSystem: '<S412>/Action5' incorporates:
         *  ActionPort: '<S477>/Action_Port'
         */
        /* RelationalOperator: '<S211>/Relational_Operator' incorporates:
         *  Constant: '<S508>/Constant'
         *  SignalConversion generated from: '<S477>/Out'
         *  Switch: '<S479>/Switch'
         */
        SRMR_ac_B.Switch = CeSRMR_e_SoftLimitation;

        /* End of Outputs for SubSystem: '<S412>/Action5' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S412>/Action6' incorporates:
         *  ActionPort: '<S478>/Action_Port'
         */
        /* RelationalOperator: '<S211>/Relational_Operator' incorporates:
         *  Constant: '<S509>/Constant'
         *  SignalConversion generated from: '<S478>/Out'
         *  Switch: '<S479>/Switch'
         */
        SRMR_ac_B.Switch = CeSRMR_e_NoLimitation;

        /* End of Outputs for SubSystem: '<S412>/Action6' */
    }

    /* End of If: '<S412>/If' */

    /* Switch: '<S479>/Switch' incorporates:
     *  Constant: '<S479>/Constant'
     */
    if (KeSRMC_b_LimitationMdBypEnbl)
    {
        /* RelationalOperator: '<S211>/Relational_Operator' incorporates:
         *  Constant: '<S479>/Constant1'
         *  DataTypeConversion: '<S479>/Data_Type_Conversion'
         *  Switch: '<S479>/Switch'
         */
        SRMR_ac_B.Switch = (TeSRMR_e_LimitationMd)KeSRMC_e_LimitationMdByp;
    }

    /* End of Switch: '<S479>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeGENR_b_SrvcBattReChrgFlSts' */
    (void)Rte_Read_VeGENR_b_SrvcBattReChrgFlSts_Value(&tmpRead_1l);

    /* Inport: '<Root>/VeSCMR_b_MSSBEV_Vbatt_mV_UV' */
    (void)Rte_Read_VeSCMR_b_MSSBEV_Vbatt_mV_UV_Value(&VeSRMR_b_CrashDischarge);

    /* Inport: '<Root>/VeSTMR_b_RrAxlTrqEstFA' */
    (void)Rte_Read_VeSTMR_b_RrAxlTrqEstFA_Value(&rtb_Operator2);

    /* Inport: '<Root>/VeSTMR_b_FrntAxlTrqEstFA' */
    (void)Rte_Read_VeSTMR_b_FrntAxlTrqEstFA_Value(&tmpRead_1g);

    /* Inport: '<Root>/VeAXLR_M_DrvrIntndedAxleTrq_Arb' */
    (void)Rte_Read_VeAXLR_M_DrvrIntndedAxleTrq_Arb_Value(&tmpRead_1f);

    /* Inport: '<Root>/VeDTRR_b_DrvrIntndedAxleTrqRawFA' */
    (void)Rte_Read_VeDTRR_b_DrvrIntndedAxleTrqRawFA_Value(&tmpRead_1e);

    /* Inport: '<Root>/VeAXLR_b_ActualAxleTrqFA' */
    (void)Rte_Read_VeAXLR_b_ActualAxleTrqFA_Value(&tmpRead_1b);

    /* Inport: '<Root>/VeAXLR_M_RrAxlTrqEst' */
    (void)Rte_Read_VeAXLR_M_RrAxlTrqEst_Value(&tmpRead_u);

    /* Inport: '<Root>/VeAXLR_M_FrntAxlTrqEst' */
    (void)Rte_Read_VeAXLR_M_FrntAxlTrqEst_Value(&tmpRead_t);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SRMC'
     */
    /* Logic: '<S220>/OR1' incorporates:
     *  Constant: '<S219>/Constant'
     *  Logic: '<S211>/Logical2'
     *  Logic: '<S211>/Logical3'
     *  Logic: '<S220>/OR'
     *  RelationalOperator: '<S211>/Relational_Operator'
     */
    VeSRMC_b_SrvcBattReChrgFiSts_Prev = ((((((uint32)SRMR_ac_B.Switch) ==
        CeSRMR_e_MedLimitation) && VeSRMR_b_CrashDischarge) ||
        rtb_TmpSignalConversionAtVeEMMR_b_Lv2APM) || (tmpRead_1a &&
        (VeSRMC_b_SrvcBattReChrgFiSts_Prev)));

    /* RelationalOperator: '<S209>/Comparison6' incorporates:
     *  Constant: '<S213>/Calib'
     */
    VeSRMR_b_CrashDischarge = (rtb_TmpSignalConversionAtVeSCMR_e_MSSBEV ==
        KeSRMR_e_TargetSts_CRASHDischarge);

    /* Logic: '<S209>/Logical1' incorporates:
     *  Constant: '<S212>/Calib'
     *  Constant: '<S214>/Calib'
     *  Constant: '<S215>/Calib'
     *  Constant: '<S216>/Calib'
     *  Constant: '<S217>/Calib'
     *  RelationalOperator: '<S209>/Comparison1'
     *  RelationalOperator: '<S209>/Comparison10'
     *  RelationalOperator: '<S209>/Comparison2'
     *  RelationalOperator: '<S209>/Comparison8'
     *  RelationalOperator: '<S209>/Comparison9'
     */
    VeSRMC_b_TragetStsDischarge = (((((VeSRMR_b_CrashDischarge ||
        (rtb_TmpSignalConversionAtVeSCMR_e_MSSBEV ==
         KeSRMR_e_TargetSts_HVILDischarge)) ||
        (rtb_TmpSignalConversionAtVeSCMR_e_MSSBEV ==
         KeSRMR_e_TargetSts_CHGBUSDischarge)) ||
        (rtb_TmpSignalConversionAtVeSCMR_e_MSSBEV ==
         KeSRMR_e_TargetSts_GFDDischarge)) ||
        (rtb_TmpSignalConversionAtVeSCMR_e_MSSBEV ==
         KeSRMR_e_TargetSts_CRASHErrDischarge)) ||
        (rtb_TmpSignalConversionAtVeSCMR_e_MSSBEV ==
         KeSRMR_e_TargetSts_PwrUpInhibit));

    /* Logic: '<S247>/FA_Latch' incorporates:
     *  Constant: '<S244>/RA_Mask'
     *  Constant: '<S246>/Constant'
     *  DataStoreRead: '<S244>/RA_Register'
     *  Logic: '<S244>/MoreFault'
     *  Logic: '<S247>/OR'
     *  RelationalOperator: '<S246>/Compare'
     *  S-Function (sfix_bitop): '<S244>/Bitwise'
     */
    VeSRMC_b_SplitFrntTrqReqFA = ((((((sint32)VeSRMR_g_RA_InputSet1) & ((sint32)
        KeSRMR_g_RA_SplitFrntTrqReq)) >= 1) || tmpRead_1g) || (tmpRead_1a &&
        (VeSRMC_b_SplitFrntTrqReqFA)));

    /* Logic: '<S249>/FA_Latch' incorporates:
     *  Constant: '<S245>/RA_Mask'
     *  Constant: '<S248>/Constant'
     *  DataStoreRead: '<S245>/RA_Register'
     *  Logic: '<S245>/MoreFault'
     *  Logic: '<S249>/OR'
     *  RelationalOperator: '<S248>/Compare'
     *  S-Function (sfix_bitop): '<S245>/Bitwise'
     */
    VeSRMC_b_SplitRearTrqReqFA = ((((((sint32)VeSRMR_g_RA_InputSet1) & ((sint32)
        KeSRMR_g_RA_SplitAxlTrqReq)) >= 1) || rtb_Operator2) || (tmpRead_1a &&
        (VeSRMC_b_SplitRearTrqReqFA)));

    /* Logic: '<S258>/FA_Latch' incorporates:
     *  Constant: '<S252>/RA_Mask'
     *  Logic: '<S252>/AND'
     *  Logic: '<S258>/OR'
     */
    VeSRMC_b_APM_OperModeEnable_AStrtFA = (((VeSRMI_b_Lv2AutoStrtFA) &&
        (KeSRMR_b_SetAPMMode_AStrtFA)) || (tmpRead_1a &&
        (VeSRMC_b_APM_OperModeEnable_AStrtFA)));

    /* Logic: '<S259>/FA_Latch' incorporates:
     *  Constant: '<S253>/RA_Mask'
     *  Logic: '<S253>/AND'
     *  Logic: '<S259>/OR'
     */
    VeSRMC_b_APM_VdcLvSetP_AStrtFA = (((VeSRMI_b_Lv2AutoStrtFA) &&
        (KeSRMR_b_SetAPMVdcSP_AStrtFA)) || (tmpRead_1a &&
        (VeSRMC_b_APM_VdcLvSetP_AStrtFA)));

    /* Logic: '<S260>/FA_Latch' incorporates:
     *  Constant: '<S254>/RA_Mask'
     *  Logic: '<S254>/AND'
     *  Logic: '<S260>/OR'
     */
    VeSRMC_b_APM_VdcLvSetP_FA_AStrtFA = (((VeSRMI_b_Lv2AutoStrtFA) &&
        (KeSRMR_b_SetAPMVdcSPFA_AStrtFA)) || (tmpRead_1a &&
        (VeSRMC_b_APM_VdcLvSetP_FA_AStrtFA)));

    /* Logic: '<S262>/FA_Latch' incorporates:
     *  Constant: '<S255>/RA_Mask'
     *  Constant: '<S261>/Constant'
     *  DataStoreRead: '<S255>/RA_Register'
     *  Logic: '<S262>/OR'
     *  RelationalOperator: '<S261>/Compare'
     *  S-Function (sfix_bitop): '<S255>/Bitwise'
     */
    VeSRMC_b_APM_OperModeEnableFA = (((((sint32)VeSRMR_g_RA_InputSet1) &
        ((sint32)KeSRMR_g_RA_OpenModeEnable)) >= 1) || (tmpRead_1a &&
        (VeSRMC_b_APM_OperModeEnableFA)));

    /* Logic: '<S264>/FA_Latch' incorporates:
     *  Constant: '<S256>/RA_Mask'
     *  Constant: '<S263>/Constant'
     *  DataStoreRead: '<S256>/RA_Register'
     *  Logic: '<S264>/OR'
     *  RelationalOperator: '<S263>/Compare'
     *  S-Function (sfix_bitop): '<S256>/Bitwise'
     */
    VeSRMC_b_APM_VdcLvSetPFA = (((((sint32)VeSRMR_g_RA_InputSet1) & ((sint32)
        KeSRMR_g_RA_APM_VdcLvSetP)) >= 1) || (tmpRead_1a &&
        (VeSRMC_b_APM_VdcLvSetPFA)));

    /* Switch: '<S256>/Switch1' incorporates:
     *  Inport: '<Root>/VeGENR_U_SetPVoltRq'
     */
    if (VeSRMC_b_APM_VdcLvSetPFA)
    {
        /* SignalConversion generated from: '<S1>/VeSRMC_U_APM_VdcLvSetP' incorporates:
         *  Outport: '<Root>/VeSRMR_U_APM_VdcLvSetP'
         */
        (void)Rte_Write_VeSRMR_U_APM_VdcLvSetP_Value
            (VeSRMC_U_APM_VdcLvSetP_TiAStp);
    }
    else
    {
        (void)Rte_Read_VeGENR_U_SetPVoltRq_Value(&tmpRead_r);

        /* Switch: '<S253>/Switch1' incorporates:
         *  Inport: '<Root>/VeGENR_U_SetPVoltRq'
         */
        if (VeSRMC_b_APM_VdcLvSetP_AStrtFA)
        {
            /* SignalConversion generated from: '<S1>/VeSRMC_U_APM_VdcLvSetP' incorporates:
             *  Outport: '<Root>/VeSRMR_U_APM_VdcLvSetP'
             */
            (void)Rte_Write_VeSRMR_U_APM_VdcLvSetP_Value
                (VeSRMC_U_APM_VdcLvSetP_AStrt);
        }
        else
        {
            /* SignalConversion generated from: '<S1>/VeSRMC_U_APM_VdcLvSetP' incorporates:
             *  Outport: '<Root>/VeSRMR_U_APM_VdcLvSetP'
             */
            (void)Rte_Write_VeSRMR_U_APM_VdcLvSetP_Value(tmpRead_r);
        }

        /* End of Switch: '<S253>/Switch1' */
    }

    /* End of Switch: '<S256>/Switch1' */

    /* Logic: '<S266>/FA_Latch' incorporates:
     *  Constant: '<S257>/RA_Mask'
     *  Constant: '<S265>/Constant'
     *  DataStoreRead: '<S257>/RA_Register'
     *  Logic: '<S266>/OR'
     *  RelationalOperator: '<S265>/Compare'
     *  S-Function (sfix_bitop): '<S257>/Bitwise'
     */
    VeSRMC_b_APM_VdcLvSetP_FAFA = (((((sint32)VeSRMR_g_RA_InputSet1) & ((sint32)
        KeSRMR_g_RA_APM_VdcLvSet_FA)) >= 1) || (tmpRead_1a &&
        (VeSRMC_b_APM_VdcLvSetP_FAFA)));

    /* Switch: '<S257>/Switch1' incorporates:
     *  Inport: '<Root>/VeGENR_b_SetPVoltRqFA'
     */
    if (VeSRMC_b_APM_VdcLvSetP_FAFA)
    {
        /* SignalConversion generated from: '<S1>/VeSRMC_b_APM_VdcLvSetP_FA' incorporates:
         *  Constant: '<S251>/Calib'
         *  Outport: '<Root>/VeSRMR_b_APM_VdcLvSetP_FA'
         */
        (void)Rte_Write_VeSRMR_b_APM_VdcLvSetP_FA_Value
            (KeSRMR_b_APMVdcSPFA_TiAStp);
    }
    else
    {
        (void)Rte_Read_VeGENR_b_SetPVoltRqFA_Value(&tmpRead_s);

        /* Switch: '<S254>/Switch1' incorporates:
         *  Inport: '<Root>/VeGENR_b_SetPVoltRqFA'
         */
        if (VeSRMC_b_APM_VdcLvSetP_FA_AStrtFA)
        {
            /* SignalConversion generated from: '<S1>/VeSRMC_b_APM_VdcLvSetP_FA' incorporates:
             *  Constant: '<S250>/Calib'
             *  Outport: '<Root>/VeSRMR_b_APM_VdcLvSetP_FA'
             */
            (void)Rte_Write_VeSRMR_b_APM_VdcLvSetP_FA_Value
                (KeSRMR_b_APMVdcSPFA_AStrt);
        }
        else
        {
            /* SignalConversion generated from: '<S1>/VeSRMC_b_APM_VdcLvSetP_FA' incorporates:
             *  Outport: '<Root>/VeSRMR_b_APM_VdcLvSetP_FA'
             */
            (void)Rte_Write_VeSRMR_b_APM_VdcLvSetP_FA_Value(tmpRead_s);
        }

        /* End of Switch: '<S254>/Switch1' */
    }

    /* End of Switch: '<S257>/Switch1' */

    /* Logic: '<S284>/FA_Latch' incorporates:
     *  Constant: '<S276>/RA_Mask'
     *  Constant: '<S283>/Constant'
     *  DataStoreRead: '<S276>/RA_Register'
     *  Logic: '<S284>/OR'
     *  RelationalOperator: '<S283>/Compare'
     *  S-Function (sfix_bitop): '<S276>/Bitwise'
     */
    VeSRMC_b_BSGChrgIdleSpeedTargetFA = (((((sint32)VeSRMR_g_RA_InputSet1) &
        ((sint32)KeSRMR_g_RA_BSG_ChrgIdlSpdTrgt)) >= 1) || (tmpRead_1a &&
        (VeSRMC_b_BSGChrgIdleSpeedTargetFA)));

    /* Logic: '<S278>/FA_Latch' incorporates:
     *  Constant: '<S272>/RA_Mask'
     *  Logic: '<S272>/AND'
     *  Logic: '<S278>/OR'
     */
    VeSRMC_b_BSGChrgIdleSpeedTtFA = (((VeSRMI_b_Lv2AutoStrtFA) &&
        (KeSRMR_b_SetBSGIdlSpdTrgt_AStrtFA)) || (tmpRead_1a &&
        (VeSRMC_b_BSGChrgIdleSpeedTtFA)));

    /* Switch: '<S276>/Switch1' incorporates:
     *  Inport: '<Root>/VeOHSR_n_IdleSpeed_Target'
     */
    if (VeSRMC_b_BSGChrgIdleSpeedTargetFA)
    {
        /* Switch: '<S276>/Switch1' */
        VeSRMR_n_BSGChrgIdleSpeedTarget = VeSRMC_n_BSGChrgIdlSpdTrgt_TiAStp;
    }
    else
    {
        (void)Rte_Read_VeOHSR_n_IdleSpeed_Target_Value
            (&VeSRMR_n_BSGChrgIdleSpeedTarget);

        /* Switch: '<S272>/Switch1' incorporates:
         *  Inport: '<Root>/VeOHSR_n_IdleSpeed_Target'
         */
        if (VeSRMC_b_BSGChrgIdleSpeedTtFA)
        {
            /* Switch: '<S276>/Switch1' */
            VeSRMR_n_BSGChrgIdleSpeedTarget = VeSRMC_n_BSGChrgIdlSpdTrgt_AStrt;
        }

        /* End of Switch: '<S272>/Switch1' */
    }

    /* End of Switch: '<S276>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeMTIR_b_MtrA_TorqAchievedFA' */
    (void)Rte_Read_VeMTIR_b_MtrA_TorqAchievedFA_Value(&tmpRead_p);

    /* Inport: '<Root>/VeMTIR_M_MtrA_TorqAchieved' */
    (void)Rte_Read_VeMTIR_M_MtrA_TorqAchieved_Value((&(VeSRMC_M_BSGActTorque)));

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SRMC'
     */
    /* Logic: '<S282>/FA_Latch' incorporates:
     *  Constant: '<S275>/RA_Mask'
     *  Constant: '<S281>/Constant'
     *  DataStoreRead: '<S275>/RA_Register'
     *  Logic: '<S282>/OR'
     *  RelationalOperator: '<S281>/Compare'
     *  S-Function (sfix_bitop): '<S275>/Bitwise'
     */
    VeSRMC_b_BSGActualTorqueFA = (((((sint32)VeSRMR_g_RA_InputSet1) & ((sint32)
        KeSRMR_g_RA_BSG_ActualTrq)) >= 1) || (tmpRead_1a &&
        (VeSRMC_b_BSGActualTorqueFA)));

    /* Logic: '<S277>/FA_Latch' incorporates:
     *  Constant: '<S271>/RA_Mask'
     *  Logic: '<S271>/AND'
     *  Logic: '<S277>/OR'
     */
    VeSRMC_b_BSGActTorqueFA = (((VeSRMI_b_Lv2AutoStrtFA) &&
        (KeSRMR_b_SetBSGActTrq_AStrtFA)) || (tmpRead_1a &&
        (VeSRMC_b_BSGActTorqueFA)));

    /* Switch: '<S271>/Switch1' */
    if (VeSRMC_b_BSGActTorqueFA)
    {
        /* Switch: '<S271>/Switch1' incorporates:
         *  Inport: '<Root>/VeMTIR_M_MtrA_TorqAchieved'
         */
        VeSRMC_M_BSGActTorque = VeSRMC_M_BSGACtTrq_AStrt;
    }

    /* End of Switch: '<S271>/Switch1' */

    /* Switch: '<S275>/Switch1' */
    if (VeSRMC_b_BSGActualTorqueFA)
    {
        /* Switch: '<S275>/Switch1' */
        rtb_TmpSignalConversionAtVeSCMR_M_Lv2Mtr = VeSRMC_M_BSGACtTrq_TiAStp;
    }
    else
    {
        /* Switch: '<S275>/Switch1' */
        rtb_TmpSignalConversionAtVeSCMR_M_Lv2Mtr = VeSRMC_M_BSGActTorque;
    }

    /* End of Switch: '<S275>/Switch1' */

    /* Logic: '<S279>/FA_Latch' incorporates:
     *  Constant: '<S267>/Calib'
     *  Logic: '<S279>/OR'
     *  Logic: '<S29>/Logical231'
     *  RelationalOperator: '<S29>/Comparison3'
     */
    VeSRMC_b_BSGActualTorqueFAFA = (((VeSRMC_b_Lv2MntrFlt_BSG) &&
        (rtb_TmpSignalConversionAtVeSCMR_M_Lv2Mtr >= KeSRMR_M_BSGActTrqSNA)) ||
        (tmpRead_1a && (VeSRMC_b_BSGActualTorqueFAFA)));

    /* Logic: '<S280>/FA_Latch' incorporates:
     *  Constant: '<S270>/Calib'
     *  Logic: '<S280>/OR'
     *  Logic: '<S29>/Logical1'
     *  RelationalOperator: '<S29>/Comparison1'
     */
    VeSRMC_b_BSGChrgIdleSpeedTargetFAFA = (((VeSRMC_b_Lv2MntrFlt_BSG) &&
        (VeSRMR_n_BSGChrgIdleSpeedTarget >= KeSRMR_n_BSGChrgIdleSpeedTargetSNA))
        || (tmpRead_1a && (VeSRMC_b_BSGChrgIdleSpeedTargetFAFA)));

    /* Logic: '<S292>/FA_Latch' incorporates:
     *  Constant: '<S287>/RA_Mask'
     *  Constant: '<S291>/Constant'
     *  DataStoreRead: '<S287>/RA_Register'
     *  Logic: '<S287>/MoreFault'
     *  Logic: '<S292>/OR'
     *  RelationalOperator: '<S291>/Compare'
     *  S-Function (sfix_bitop): '<S287>/Bitwise'
     */
    VeSRMC_b_MainHighVltCntctrCmdFA = ((((((sint32)VeSRMR_g_RA_InputSet1) &
        ((sint32)KeSRMR_g_RA_MainHighVltCntctrCmd)) >= 1) ||
        (VeSRMC_b_ThermEveCntctrOpnRq)) || (tmpRead_1a &&
        (VeSRMC_b_MainHighVltCntctrCmdFA)));

    /* Switch: '<S287>/Switch1' incorporates:
     *  Constant: '<S285>/Calib'
     *  Inport: '<Root>/VeSTMR_b_Allow_OpenBattCntctr'
     *  Switch: '<S30>/Switch51'
     *  UnitDelay: '<S30>/Unit Delay'
     */
    if (VeSRMC_b_MainHighVltCntctrCmdFA)
    {
        SRMR_ac_DW.VeSRMC_e_Lv2CntctrCmnd_Prev = VeSRMC_e_Lv2CntctrCmnd;
    }
    else if (KeSRMR_b_OvrdCntctrCmnd_UVM)
    {
        (void)Rte_Read_VeSTMR_b_Allow_OpenBattCntctr_Value(&tmpRead_14);

        /* Switch: '<S30>/Switch52' incorporates:
         *  Inport: '<Root>/VeSTMR_b_Allow_OpenBattCntctr'
         *  Switch: '<S30>/Switch51'
         */
        if (tmpRead_14)
        {
            /* UnitDelay: '<S30>/Unit Delay' incorporates:
             *  DataTypeConversion: '<S1>/Data Type Conversion4'
             *  Inport: '<Root>/VeHPMR_e_HighVltCntctrCntrl'
             *  Switch: '<S30>/Switch51'
             */
            SRMR_ac_DW.VeSRMC_e_Lv2CntctrCmnd_Prev = (uint16)tmpRead_10;
        }

        /* End of Switch: '<S30>/Switch52' */
    }
    else
    {
        /* UnitDelay: '<S30>/Unit Delay' incorporates:
         *  DataTypeConversion: '<S1>/Data Type Conversion4'
         *  Inport: '<Root>/VeHPMR_e_HighVltCntctrCntrl'
         *  Switch: '<S30>/Switch51'
         */
        SRMR_ac_DW.VeSRMC_e_Lv2CntctrCmnd_Prev = (uint16)tmpRead_10;
    }

    /* End of Switch: '<S287>/Switch1' */

    /* Logic: '<S335>/FA_Latch' incorporates:
     *  Constant: '<S324>/RA_Mask'
     *  Constant: '<S334>/Constant'
     *  DataStoreRead: '<S324>/RA_Register'
     *  Logic: '<S335>/OR'
     *  RelationalOperator: '<S334>/Compare'
     *  S-Function (sfix_bitop): '<S324>/Bitwise'
     */
    VeSRMC_b_CurrentGearFA = (((((sint32)VeSRMR_g_RA_InputSet1) & ((sint32)
        KeSRMR_g_RA_CurrentGear)) >= 1) || (tmpRead_1a &&
        (VeSRMC_b_CurrentGearFA)));

    /* Switch: '<S324>/Switch1' incorporates:
     *  Inport: '<Root>/VeTRGR_e_CurrentGear'
     */
    if (VeSRMC_b_CurrentGearFA)
    {
        /* Switch: '<S324>/Switch1' incorporates:
         *  Constant: '<S324>/RA_Default'
         */
        VeSRMR_e_CurrentGear = KeSRMR_e_CrntGear;
    }
    else
    {
        (void)Rte_Read_VeTRGR_e_CurrentGear_Value(&tmpRead_2);

        /* Saturate: '<S32>/INT16_to_UINT16' incorporates:
         *  Inport: '<Root>/VeTRGR_e_CurrentGear'
         */
        if (tmpRead_2 > 0)
        {
            /* Switch: '<S324>/Switch1' */
            VeSRMR_e_CurrentGear = (uint16)tmpRead_2;
        }
        else
        {
            /* Switch: '<S324>/Switch1' */
            VeSRMR_e_CurrentGear = 0U;
        }

        /* End of Saturate: '<S32>/INT16_to_UINT16' */
    }

    /* End of Switch: '<S324>/Switch1' */

    /* Logic: '<S329>/FA_Latch' incorporates:
     *  Constant: '<S321>/RA_Mask'
     *  Constant: '<S328>/Constant'
     *  DataStoreRead: '<S321>/RA_Register'
     *  Logic: '<S329>/OR'
     *  RelationalOperator: '<S328>/Compare'
     *  S-Function (sfix_bitop): '<S321>/Bitwise'
     */
    VeSRMC_b_TargetGearFA = (((((sint32)VeSRMR_g_RA_InputSet1) & ((sint32)
        KeSRMR_g_RA_TargetGear)) >= 1) || (tmpRead_1a && (VeSRMC_b_TargetGearFA)));

    /* Switch: '<S321>/Switch1' incorporates:
     *  Inport: '<Root>/VeTRGR_e_TargetGear'
     */
    if (VeSRMC_b_TargetGearFA)
    {
        /* Switch: '<S321>/Switch1' incorporates:
         *  Constant: '<S321>/RA_Default'
         */
        rtb_DataTypeConversion4 = KeSRMR_e_TrgtGear;
    }
    else
    {
        (void)Rte_Read_VeTRGR_e_TargetGear_Value(&tmpRead_3);

        /* Saturate: '<S32>/INT16_to_UINT1' incorporates:
         *  Inport: '<Root>/VeTRGR_e_TargetGear'
         */
        if (tmpRead_3 > 0)
        {
            /* Switch: '<S321>/Switch1' */
            rtb_DataTypeConversion4 = (uint16)tmpRead_3;
        }
        else
        {
            /* Switch: '<S321>/Switch1' */
            rtb_DataTypeConversion4 = 0U;
        }

        /* End of Saturate: '<S32>/INT16_to_UINT1' */
    }

    /* End of Switch: '<S321>/Switch1' */

    /* Logic: '<S327>/FA_Latch' incorporates:
     *  Constant: '<S320>/RA_Mask'
     *  Constant: '<S326>/Constant'
     *  DataStoreRead: '<S320>/RA_Register'
     *  Logic: '<S327>/OR'
     *  RelationalOperator: '<S326>/Compare'
     *  S-Function (sfix_bitop): '<S320>/Bitwise'
     */
    VeSRMC_b_PRNDLReqFA = (((((sint32)VeSRMR_g_RA_InputSet1) & ((sint32)
        KeSRMR_g_RA_PRNDLReq)) >= 1) || (tmpRead_1a && (VeSRMC_b_PRNDLReqFA)));

    /* Switch: '<S320>/Switch1' incorporates:
     *  Inport: '<Root>/VeTRGR_e_PRNDLReq'
     */
    if (VeSRMC_b_PRNDLReqFA)
    {
        /* Switch: '<S320>/Switch1' */
        VeSRMR_e_PRNDLReq = VeSRMC_e_ESMBasedPRNDReq;
    }
    else
    {
        (void)Rte_Read_VeTRGR_e_PRNDLReq_Value(&tmpRead_6);

        /* Saturate: '<S32>/INT16_to_UINT2' incorporates:
         *  Inport: '<Root>/VeTRGR_e_PRNDLReq'
         */
        if (tmpRead_6 > 0)
        {
            /* Switch: '<S320>/Switch1' */
            VeSRMR_e_PRNDLReq = (uint16)tmpRead_6;
        }
        else
        {
            /* Switch: '<S320>/Switch1' */
            VeSRMR_e_PRNDLReq = 0U;
        }

        /* End of Saturate: '<S32>/INT16_to_UINT2' */
    }

    /* End of Switch: '<S320>/Switch1' */

    /* Logic: '<S331>/FA_Latch' incorporates:
     *  Constant: '<S322>/RA_Mask'
     *  Constant: '<S330>/Constant'
     *  DataStoreRead: '<S322>/RA_Register'
     *  Logic: '<S331>/OR'
     *  RelationalOperator: '<S330>/Compare'
     *  S-Function (sfix_bitop): '<S322>/Bitwise'
     */
    VeSRMC_b_ShifterPOSFA = (((((sint32)VeSRMR_g_RA_InputSet1) & ((sint32)
        KeSRMR_g_RA_ShifterPOS)) >= 1) || (tmpRead_1a && (VeSRMC_b_ShifterPOSFA)));

    /* Logic: '<S333>/FA_Latch' incorporates:
     *  Constant: '<S323>/RA_Mask'
     *  Constant: '<S332>/Constant'
     *  DataStoreRead: '<S323>/RA_Register'
     *  Logic: '<S333>/OR'
     *  RelationalOperator: '<S332>/Compare'
     *  S-Function (sfix_bitop): '<S323>/Bitwise'
     */
    VeSRMC_b_VldtdTransShiftRngStTmpFA = (((((sint32)VeSRMR_g_RA_InputSet1) &
        ((sint32)KeSRMR_g_RA_VldtdTransShiftRngSt)) >= 1) || (tmpRead_1a &&
        (VeSRMC_b_VldtdTransShiftRngStTmpFA)));

    /* Switch: '<S323>/Switch1' */
    if (VeSRMC_b_VldtdTransShiftRngStTmpFA)
    {
        /* Switch: '<S323>/Switch1' incorporates:
         *  Constant: '<S323>/RA_Default'
         */
        rtb_VeSRMC_e_VldtdTransShiftRngStTmp = KeSRMR_e_VldtdRngSt;
    }
    else
    {
        /* Switch: '<S323>/Switch1' incorporates:
         *  DataTypeConversion: '<S32>/UINT16'
         *  SignalConversion generated from: '<S1>/VeTRGR_e_VldtdTransShiftRngSt'
         */
        rtb_VeSRMC_e_VldtdTransShiftRngStTmp = (uint16)
            rtb_TmpSignalConversionAtVeTRGR_e_VldtdT;
    }

    /* End of Switch: '<S323>/Switch1' */

    /* Logic: '<S325>/FA_Latch' incorporates:
     *  Constant: '<S315>/Constant'
     *  Logic: '<S325>/OR'
     *  RelationalOperator: '<S32>/Comparison'
     */
    VeSRMC_b_VldtdTransShiftRngStFA = ((((uint32)
        rtb_TmpSignalConversionAtVeGRAR_e_PRND_R) != CeGRAR_e_PRND_Normal) ||
        (tmpRead_1a && (VeSRMC_b_VldtdTransShiftRngStFA)));

    /* Logic: '<S344>/FA_Latch' incorporates:
     *  Constant: '<S340>/RA_Mask'
     *  Constant: '<S343>/Constant'
     *  DataStoreRead: '<S340>/RA_Register'
     *  Logic: '<S344>/OR'
     *  RelationalOperator: '<S343>/Compare'
     *  S-Function (sfix_bitop): '<S340>/Bitwise'
     */
    VeSRMC_b_HCPMaxEngRPMFA = (((((sint32)VeSRMR_g_RA_InputSet1) & ((sint32)
        KeSRMR_g_RA_HCPMaxEngRPM)) >= 1) || (tmpRead_1a &&
        (VeSRMC_b_HCPMaxEngRPMFA)));

    /* Logic: '<S341>/FA_Latch' incorporates:
     *  Constant: '<S338>/RA_Mask'
     *  Logic: '<S338>/AND'
     *  Logic: '<S341>/OR'
     */
    VeSRMC_b_HCPMaxEngRPM_AStrtFA = (((VeSRMI_b_Lv2AutoStrtFA) &&
        (KeSRMR_b_SetMaxEngRPM_AStrtFA)) || (tmpRead_1a &&
        (VeSRMC_b_HCPMaxEngRPM_AStrtFA)));

    /* Switch: '<S340>/Switch1' incorporates:
     *  Inport: '<Root>/VeSRAR_n_HCPMaxEngRPM'
     */
    if (VeSRMC_b_HCPMaxEngRPMFA)
    {
        /* Switch: '<S340>/Switch1' */
        VeSRMR_n_HCPMaxEngRPM = VeSRMC_n_HCPMaxEngRPM_TiAStp;
    }
    else
    {
        (void)Rte_Read_VeSRAR_n_HCPMaxEngRPM_Value(&VeSRMR_n_HCPMaxEngRPM);

        /* Switch: '<S338>/Switch1' incorporates:
         *  Inport: '<Root>/VeSRAR_n_HCPMaxEngRPM'
         */
        if (VeSRMC_b_HCPMaxEngRPM_AStrtFA)
        {
            /* Switch: '<S340>/Switch1' */
            VeSRMR_n_HCPMaxEngRPM = VeSRMC_n_HCPMaxEngRPM_AStrt;
        }

        /* End of Switch: '<S338>/Switch1' */
    }

    /* End of Switch: '<S340>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSRAR_b_Popup_Msg9' */
    (void)Rte_Read_VeSRAR_b_Popup_Msg9_Value(&tmpRead_17);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SRMC'
     */
    /* Logic: '<S342>/FA_Latch' incorporates:
     *  Constant: '<S337>/Calib'
     *  Logic: '<S33>/Logical1'
     *  Logic: '<S342>/OR'
     *  RelationalOperator: '<S33>/Comparison1'
     */
    VeSRMC_b_HCPMaxEngRPMFAFA = (((VeSRMC_b_Lv2MntrFlt_BSG) &&
        (VeSRMR_n_HCPMaxEngRPM >= KeSRMR_n_HCPMaxEngRPMSNA)) || (tmpRead_1a &&
        (VeSRMC_b_HCPMaxEngRPMFAFA)));

    /* Logic: '<S416>/Operator2' incorporates:
     *  Constant: '<S345>/Constant'
     *  Constant: '<S346>/RA_Mask'
     *  Constant: '<S347>/Constant'
     *  DataStoreRead: '<S346>/RA_Register'
     *  Logic: '<S346>/MoreFault'
     *  RelationalOperator: '<S347>/Compare'
     *  RelationalOperator: '<S34>/Relational_Operator'
     *  S-Function (sfix_bitop): '<S346>/Bitwise'
     */
    rtb_Operator2 = ((((uint32)SRMR_ac_B.Switch) == CeSRMR_e_StopLimitation) ||
                     ((((sint32)VeSRMR_g_RA_InputSet1) & ((sint32)
                        KeSRMR_g_RA_Popup_Msg9)) >= 1));

    /* Logic: '<S348>/FA_Latch' incorporates:
     *  Logic: '<S348>/OR'
     */
    VeSRMC_b_Popup_Msg9FA = (rtb_Operator2 || (tmpRead_1a &&
        (VeSRMC_b_Popup_Msg9FA)));

    /* Outputs for Atomic SubSystem: '<S35>/LV2_Turn_On_Delay_Time' */
    /* Switch: '<S358>/Switch1' incorporates:
     *  Constant: '<S356>/Calib'
     *  Constant: '<S357>/Calib'
     *  Constant: '<S358>/Constant Value1'
     *  Logic: '<S358>/OR'
     *  Logic: '<S358>/OR1'
     *  Logic: '<S361>/AND1'
     *  Logic: '<S361>/OR2'
     *  MinMax: '<S358>/Minimum'
     *  Sum: '<S358>/Summation'
     *  UnitDelay: '<S358>/Unit Delay1'
     *  UnitDelay: '<S361>/Unit Delay'
     */
    if ((!VeSRMC_b_PpawlInsrtFailed) || ((VeSRMC_b_PpawlInsrtFailed) &&
            (!SRMR_ac_DW.VeSRMC_b_PpawlInsrtFailureDtcd_prev)))
    {
        SRMR_ac_DW.VeSRMC_t_PpawlInsrtFailureDtcd_prev = 0.0F;
    }
    else
    {
        SRMR_ac_DW.VeSRMC_t_PpawlInsrtFailureDtcd_prev = fminf
            (KeSRMR_t_PpawlInsrtFailureOnDelay, KeSRMR_t_dT +
             SRMR_ac_DW.VeSRMC_t_PpawlInsrtFailureDtcd_prev);
    }

    /* End of Switch: '<S358>/Switch1' */
    /* End of Outputs for SubSystem: '<S35>/LV2_Turn_On_Delay_Time' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeGRAR_b_EngageParkBrk' */
    (void)Rte_Read_VeGRAR_b_EngageParkBrk_Value(&tmpRead_1p);

    /* Inport: '<Root>/VeGSMR_b_ApplyEPB' */
    (void)Rte_Read_VeGSMR_b_ApplyEPB_Value(&tmpRead_o);

    /* Inport: '<Root>/VeSTMR_b_UnIntendedVehMovInNeutral' */
    (void)Rte_Read_VeSTMR_b_UnIntendedVehMovInNeutral_Value(&tmpRead_n);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SRMC'
     */
    /* Outputs for Atomic SubSystem: '<S35>/LV2_Turn_On_Delay_Time' */
    /* Update for UnitDelay: '<S361>/Unit Delay' */
    SRMR_ac_DW.VeSRMC_b_PpawlInsrtFailureDtcd_prev = VeSRMC_b_PpawlInsrtFailed;

    /* End of Outputs for SubSystem: '<S35>/LV2_Turn_On_Delay_Time' */

    /* Logic: '<S367>/FA_Latch' incorporates:
     *  Constant: '<S360>/RA_Mask'
     *  Constant: '<S366>/Constant'
     *  DataStoreRead: '<S360>/RA_Register'
     *  Logic: '<S35>/Logical1'
     *  Logic: '<S360>/AND'
     *  Logic: '<S367>/OR'
     *  RelationalOperator: '<S366>/Compare'
     *  S-Function (sfix_bitop): '<S360>/Bitwise'
     */
    VeSRMC_b_EPB_Hold_ReqFA = ((((((sint32)VeSRMR_g_RA_InputSet1) & ((sint32)
        KeSRMR_g_RA_EPBHldRq)) >= 1) || ((tmpRead_n || tmpRead_o) || tmpRead_1p))
        || (tmpRead_1a && (VeSRMC_b_EPB_Hold_ReqFA)));

    /* RelationalOperator: '<S35>/Comparison' incorporates:
     *  Constant: '<S349>/Constant'
     */
    VeSRMC_b_PPawl_RequestFA = (((uint32)
        rtb_TmpSignalConversionAtVeGRAR_e_ParkPa) != CeGRAR_e_PP_Normal);

    /* RelationalOperator: '<S359>/Comparison3' incorporates:
     *  DataTypeConversion: '<S359>/UINT1'
     *  SignalConversion generated from: '<S1>/VePPCR_e_PPawl_HW_Request'
     */
    rtb_TmpSignalConversionAtVeGRAR = VeSRMC_e_PPawl_HW_EngageReqDlyd;

    /* Switch: '<S362>/Switch1' incorporates:
     *  Constant: '<S364>/Constant'
     *  Constant: '<S365>/Calib'
     *  Logic: '<S359>/LogicalOperator'
     *  RelationalOperator: '<S359>/Comparison3'
     *  SignalConversion generated from: '<S1>/VePPCR_e_PPawl_HW_Request'
     */
    if ((KeSRMR_b_PPawl_EngageReqDlyEnbl) && (((uint32)
            VeSRMC_e_PPawl_HW_EngageReqDlyd) == CePPCR_e_Req_Engage))
    {
        /* Switch: '<S362>/Switch1' incorporates:
         *  UnitDelay: '<S359>/DelayLoop3'
         */
        VeSRMC_e_PPawl_HW_EngageReqDlyd = SRMR_ac_DW.DelayLoop3_DSTATE;
    }

    /* End of Switch: '<S362>/Switch1' */

    /* UnitDelay: '<S359>/DelayLoop1' */
    rtb_TmpSignalConversionAtVeSCMR_e_Lv2ESS = SRMR_ac_DW.DelayLoop1_DSTATE;

    /* Logic: '<S384>/FA_Latch' incorporates:
     *  Constant: '<S380>/RA_Mask'
     *  Logic: '<S380>/AND'
     *  Logic: '<S384>/OR'
     */
    VeSRMC_b_MtrA_TorqCmnd_AStrtFA = (((VeSRMI_b_Lv2AutoStrtFA) &&
        (KeSRMR_b_OvrdMtrTrqCmnd_AStrt)) || (tmpRead_1a &&
        (VeSRMC_b_MtrA_TorqCmnd_AStrtFA)));

    /* Logic: '<S385>/FA_Latch' incorporates:
     *  Constant: '<S381>/RA_Mask'
     *  Logic: '<S381>/AND'
     *  Logic: '<S385>/OR'
     */
    VeSRMC_b_MtrA_MdCmnd_AStrtFA = (((VeSRMI_b_Lv2AutoStrtFA) &&
        (KeSRMR_b_OvrdMtrMdCmnd_AStrt)) || (tmpRead_1a &&
        (VeSRMC_b_MtrA_MdCmnd_AStrtFA)));

    /* Logic: '<S387>/FA_Latch' incorporates:
     *  Constant: '<S382>/RA_Mask'
     *  Constant: '<S386>/Constant'
     *  DataStoreRead: '<S382>/RA_Register'
     *  Logic: '<S387>/OR'
     *  RelationalOperator: '<S386>/Compare'
     *  S-Function (sfix_bitop): '<S382>/Bitwise'
     */
    VeSRMC_b_MtrA_TorqCmnd_TiAStpFA = (((((sint32)VeSRMR_g_RA_InputSet1) &
        ((sint32)KeSRMR_g_RA_MtrA_TorqCmnd_BSG)) >= 1) || (tmpRead_1a &&
        (VeSRMC_b_MtrA_TorqCmnd_TiAStpFA)));

    /* Switch: '<S382>/Switch1' incorporates:
     *  Inport: '<Root>/VeLTIR_M_Lv2MtrA_TrqCmnd'
     */
    if (VeSRMC_b_MtrA_TorqCmnd_TiAStpFA)
    {
        /* Switch: '<S382>/Switch1' incorporates:
         *  Inport: '<Root>/VeLTIR_M_Lv2MtrA_TrqCmnd'
         */
        VeSRMC_M_MtrA_TorqCmnd_BSG = VeSRMC_M_MtrATorqCmnd_TiAStp;
    }
    else
    {
        (void)Rte_Read_VeLTIR_M_Lv2MtrA_TrqCmnd_Value
            ((&(VeSRMC_M_MtrA_TorqCmnd_BSG)));

        /* Switch: '<S380>/Switch1' incorporates:
         *  Inport: '<Root>/VeLTIR_M_Lv2MtrA_TrqCmnd'
         */
        if (VeSRMC_b_MtrA_TorqCmnd_AStrtFA)
        {
            /* Switch: '<S382>/Switch1' */
            VeSRMC_M_MtrA_TorqCmnd_BSG = VeSRMC_M_MtrATorqCmnd_AStrt;
        }

        /* End of Switch: '<S380>/Switch1' */
    }

    /* End of Switch: '<S382>/Switch1' */

    /* Logic: '<S389>/FA_Latch' incorporates:
     *  Constant: '<S383>/RA_Mask'
     *  Constant: '<S388>/Constant'
     *  DataStoreRead: '<S383>/RA_Register'
     *  Logic: '<S389>/OR'
     *  RelationalOperator: '<S388>/Compare'
     *  S-Function (sfix_bitop): '<S383>/Bitwise'
     */
    VeSRMC_b_MtrA_MdCmnd_TiAStpFA = (((((sint32)VeSRMR_g_RA_InputSet1) &
        ((sint32)KeSRMR_g_RA_MtrA_MdCmnd_BSG)) >= 1) || (tmpRead_1a &&
        (VeSRMC_b_MtrA_MdCmnd_TiAStpFA)));

    /* Switch: '<S383>/Switch1' incorporates:
     *  Switch: '<S381>/Switch1'
     */
    if (VeSRMC_b_MtrA_MdCmnd_TiAStpFA)
    {
        /* Switch: '<S383>/Switch1' incorporates:
         *  DataTypeConversion: '<S127>/DataTypeConversion'
         */
        VeSRMC_e_MtrA_MdCmnd_BSG = VeSRMC_e_MtrMdCmnd_TiAStp;
    }
    else if (VeSRMC_b_MtrA_MdCmnd_AStrtFA)
    {
        /* Switch: '<S381>/Switch1' incorporates:
         *  DataTypeConversion: '<S102>/DataTypeConversion'
         *  Switch: '<S383>/Switch1'
         */
        VeSRMC_e_MtrA_MdCmnd_BSG = VeSRMC_e_MtrMdCmnd_AStrt;
    }
    else
    {
        /* Switch: '<S383>/Switch1' incorporates:
         *  SignalConversion generated from: '<S1>/VeLTIR_e_Lv2MtrA_MdCmnd'
         *  Switch: '<S381>/Switch1'
         */
        VeSRMC_e_MtrA_MdCmnd_BSG = VeSRMC_e_MtrA_MdCmdLimd;
    }

    /* End of Switch: '<S383>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSTMR_b_TrqSplit_OS_US' */
    (void)Rte_Read_VeSTMR_b_TrqSplit_OS_US_Value(&rtb_Edge_Failing);

    /* Inport: '<Root>/VeDTMR_b_DTRcmdFlt' */
    (void)Rte_Read_VeDTMR_b_DTRcmdFlt_Value(&tmpRead_1o);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SRMC'
     */
    /* Logic: '<S390>/OR1' incorporates:
     *  Constant: '<S401>/Calib'
     *  Constant: '<S402>/Calib'
     *  Logic: '<S390>/Logical2'
     *  Logic: '<S390>/Logical3'
     */
    VeSRMC_b_DTRCmdFlt_TrqSplit_DT = ((tmpRead_1o && (KeSRMR_b_DTRcmdFlt)) ||
        (rtb_Edge_Failing && (KeSRMR_b_TrqSplit_OS_US)));

    /* Logic: '<S404>/FA_Latch' incorporates:
     *  Constant: '<S397>/RA_Mask'
     *  Constant: '<S403>/Constant'
     *  DataStoreRead: '<S397>/RA_Register'
     *  Logic: '<S397>/MoreFault'
     *  Logic: '<S404>/OR'
     *  RelationalOperator: '<S403>/Compare'
     *  S-Function (sfix_bitop): '<S397>/Bitwise'
     */
    VeSRMC_b_MtrA_MdCmndFA = ((((((sint32)VeSRMR_g_RA_InputSet1) & ((sint32)
        KeSRMR_g_RA_MtrA_MdCmnd)) >= 1) || (VeSRMC_b_DTRCmdFlt_TrqSplit_DT)) ||
        (tmpRead_1a && (VeSRMC_b_MtrA_MdCmndFA)));

    /* If: '<S415>/Determine_MtrMdCmnd_Method' incorporates:
     *  Constant: '<S516>/Calib'
     */
    if (KeSRMR_b_MtrMdCmdOvrdEnbl)
    {
        /* Outputs for IfAction SubSystem: '<S415>/Perform_MtrMdCmnd' incorporates:
         *  ActionPort: '<S517>/ActionPort'
         */
        /* RelationalOperator: '<S517>/Comparison' incorporates:
         *  Constant: '<S521>/Constant'
         */
        VeSRMC_b_MtrMdCmdDsblImmd = (((uint32)SRMR_ac_B.Switch) ==
            CeSRMR_e_StopLimitation);

        /* RelationalOperator: '<S517>/Comparison1' incorporates:
         *  Constant: '<S520>/Constant'
         *  SignalConversion generated from: '<S1>/VeLTIR_e_Lv2MtrA_MdCmnd'
         */
        rtb_TmpSignalConversionAtVeHPMR_b_MtrSys = (((uint32)
            VeSRMC_e_MtrA_MdCmdLimd) == CeHTDR_e_ActvDischarge);

        /* RelationalOperator: '<S517>/Comparison2' incorporates:
         *  Constant: '<S520>/Constant'
         *  SignalConversion generated from: '<S1>/VeHTDR_e_MtrB_MdCmnd'
         */
        rtb_Edge_Failing = (CeHTDR_e_ActvDischarge == ((uint32)
                             rtb_TmpSignalConversionAtVeHTDR_e_MtrB_M));

        /* Outputs for Atomic SubSystem: '<S517>/Counter_Reset_Enabled' */
        /* Switch: '<S519>/Switch2' incorporates:
         *  Constant: '<S522>/Constant'
         *  Logic: '<S517>/NOT'
         *  RelationalOperator: '<S517>/Comparison3'
         *  Switch: '<S519>/Switch'
         */
        if (CeSRMR_e_NoLimitation == ((uint32)SRMR_ac_B.Switch))
        {
            /* Switch: '<S519>/Switch' incorporates:
             *  Constant: '<S519>/Constant Value2'
             */
            VeSRMC_cnt_DischargeCntr = 0U;
        }
        else
        {
            /* Switch: '<S519>/Switch' incorporates:
             *  Constant: '<S519>/Constant Value1'
             *  Sum: '<S519>/Subtraction'
             *  Switch: '<S519>/Switch2'
             *  UnitDelay: '<S519>/Unit Delay'
             */
            VeSRMC_cnt_DischargeCntr = (uint16)(((uint32)
                VeSRMC_cnt_DischargeCntr) + 1U);
        }

        /* End of Switch: '<S519>/Switch2' */
        /* End of Outputs for SubSystem: '<S517>/Counter_Reset_Enabled' */

        /* RelationalOperator: '<S517>/Relational_Operator' incorporates:
         *  Constant: '<S530>/Calib'
         */
        VeSRMC_b_ActiveDisMtrB = (((float32)VeSRMC_cnt_DischargeCntr) >=
            KeSRMR_Cnt_CounterActiveDisMtrB);

        /* RelationalOperator: '<S517>/Relational_Operator2' incorporates:
         *  Constant: '<S532>/Calib'
         */
        VeSRMC_b_DisImmdMtrB = (((float32)VeSRMC_cnt_DischargeCntr) >=
                                KeSRMR_Cnt_CounterDisImmdMtrB);

        /* RelationalOperator: '<S517>/Relational_Operator1' incorporates:
         *  Constant: '<S529>/Calib'
         */
        VeSRMC_b_ActiveDisMtrA = (((float32)VeSRMC_cnt_DischargeCntr) >=
            KeSRMR_Cnt_CounterActiveDisMtrA);

        /* RelationalOperator: '<S517>/Relational_Operator3' incorporates:
         *  Constant: '<S531>/Calib'
         */
        VeSRMC_b_DisImmdMtrA = (((float32)VeSRMC_cnt_DischargeCntr) >=
                                KeSRMR_Cnt_CounterDisImmdMtrA);

        /* Switch: '<S517>/Switch2' incorporates:
         *  Logic: '<S517>/Logical_Operator1'
         *  Logic: '<S517>/Logical_Operator2'
         *  Logic: '<S517>/Logical_Operator5'
         *  Logic: '<S517>/Logical_Operator8'
         *  Switch: '<S517>/Switch1'
         */
        if (((VeSRMC_b_DisImmdMtrB) && (!rtb_Edge_Failing)) ||
                (VeSRMC_b_MtrMdCmdDsblImmd))
        {
            /* RelationalOperator: '<S518>/Relational_Operator7' incorporates:
             *  Constant: '<S526>/Constant'
             *  Merge: '<S415>/Merge1'
             */
            VeSRMC_e_MtrB_MdCmdLimd = CeHTDR_e_DsblImmd;
        }
        else if ((VeSRMC_b_ActiveDisMtrB) || rtb_Edge_Failing)
        {
            /* RelationalOperator: '<S518>/Relational_Operator7' incorporates:
             *  Constant: '<S523>/Constant'
             *  Merge: '<S415>/Merge1'
             *  Switch: '<S517>/Switch1'
             */
            VeSRMC_e_MtrB_MdCmdLimd = CeHTDR_e_ActvDischarge;
        }
        else
        {
            /* RelationalOperator: '<S518>/Relational_Operator7' incorporates:
             *  Constant: '<S527>/Constant'
             *  Merge: '<S415>/Merge1'
             *  Switch: '<S517>/Switch1'
             */
            VeSRMC_e_MtrB_MdCmdLimd = CeHTDR_e_TorqCntrl;
        }

        /* End of Switch: '<S517>/Switch2' */

        /* Switch: '<S517>/Switch5' incorporates:
         *  Logic: '<S517>/Logical_Operator3'
         *  Logic: '<S517>/Logical_Operator4'
         *  Logic: '<S517>/Logical_Operator6'
         *  Logic: '<S517>/Logical_Operator7'
         *  Switch: '<S517>/Switch4'
         */
        if (((VeSRMC_b_DisImmdMtrA) &&
                (!rtb_TmpSignalConversionAtVeHPMR_b_MtrSys)) ||
                (VeSRMC_b_MtrMdCmdDsblImmd))
        {
            /* Merge: '<S415>/Merge' incorporates:
             *  Constant: '<S525>/Constant'
             */
            VeSRMC_e_MtrA_MdCmdLimd = CeHTDR_e_DsblImmd;
        }
        else if ((VeSRMC_b_ActiveDisMtrA) ||
                 rtb_TmpSignalConversionAtVeHPMR_b_MtrSys)
        {
            /* Switch: '<S517>/Switch4' incorporates:
             *  Constant: '<S524>/Constant'
             *  Merge: '<S415>/Merge'
             */
            VeSRMC_e_MtrA_MdCmdLimd = CeHTDR_e_ActvDischarge;
        }
        else
        {
            /* Merge: '<S415>/Merge' incorporates:
             *  Constant: '<S528>/Constant'
             *  Switch: '<S517>/Switch4'
             */
            VeSRMC_e_MtrA_MdCmdLimd = CeHTDR_e_TorqCntrl;
        }

        /* End of Switch: '<S517>/Switch5' */

        /* Merge: '<S415>/Merge2' incorporates:
         *  Constant: '<S517>/Ground'
         *  SignalConversion generated from: '<S517>/VeSRMR_b_MtrMdVldtnFltErr_out'
         */
        rtb_Edge_Failing = false;

        /* End of Outputs for SubSystem: '<S415>/Perform_MtrMdCmnd' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S415>/Perform_MtrMdCmnd_M182' incorporates:
         *  ActionPort: '<S518>/ActionPort'
         */
        /* RelationalOperator: '<S518>/Edge_Failing' incorporates:
         *  UnitDelay: '<S518>/Unit_Delay'
         */
        rtb_Edge_Failing = (((sint32)(rtb_TmpSignalConversionAtVeHPMR_b_MtrSys ?
                              1 : 0)) < ((sint32)(SRMR_ac_DW.Unit_Delay_DSTATE_o
                              ? 1 : 0)));

        /* UnitDelay: '<S541>/Unit_Delay' incorporates:
         *  UnitDelay: '<S518>/Unit_Delay'
         */
        SRMR_ac_DW.Unit_Delay_DSTATE_o = VeSRMC_b_MtrA_MdCmdLimd_tempFA;

        /* Logic: '<S541>/FA_Latch' incorporates:
         *  Logic: '<S541>/OR'
         *  UnitDelay: '<S518>/Unit_Delay'
         */
        VeSRMC_b_MtrA_MdCmdLimd_tempFA = ((VeSRMI_b_MtrMdVldtnFlt) ||
            (tmpRead_1a && (SRMR_ac_DW.Unit_Delay_DSTATE_o)));

        /* Switch: '<S539>/Switch1' */
        if (VeSRMC_b_MtrA_MdCmdLimd_tempFA)
        {
            /* Switch: '<S539>/Switch1' incorporates:
             *  Constant: '<S533>/Constant'
             */
            VeSRMC_e_MtrA_MdCmdLimd = CeHTDR_e_DsblNoSwitch;
        }

        /* End of Switch: '<S539>/Switch1' */

        /* UnitDelay: '<S542>/Unit_Delay' incorporates:
         *  UnitDelay: '<S518>/Unit_Delay'
         */
        SRMR_ac_DW.Unit_Delay_DSTATE_o = VeSRMC_b_MtrB_MdCmdLimd_tempFA;

        /* Logic: '<S542>/FA_Latch' incorporates:
         *  Logic: '<S542>/OR'
         *  UnitDelay: '<S518>/Unit_Delay'
         */
        VeSRMC_b_MtrB_MdCmdLimd_tempFA = ((VeSRMI_b_MtrMdVldtnFlt) ||
            (tmpRead_1a && (SRMR_ac_DW.Unit_Delay_DSTATE_o)));

        /* Switch: '<S540>/Switch1' */
        if (VeSRMC_b_MtrB_MdCmdLimd_tempFA)
        {
            /* RelationalOperator: '<S518>/Relational_Operator7' incorporates:
             *  Constant: '<S538>/Constant'
             *  Switch: '<S540>/Switch1'
             */
            VeSRMC_e_MtrB_MdCmdLimd = CeHTDR_e_DsblNoSwitch;
        }
        else
        {
            /* RelationalOperator: '<S518>/Relational_Operator7' incorporates:
             *  SignalConversion generated from: '<S1>/VeHTDR_e_MtrB_MdCmnd'
             *  Switch: '<S540>/Switch1'
             */
            VeSRMC_e_MtrB_MdCmdLimd = rtb_TmpSignalConversionAtVeHTDR_e_MtrB_M;
        }

        /* End of Switch: '<S540>/Switch1' */

        /* Merge: '<S415>/Merge2' incorporates:
         *  Constant: '<S534>/Constant'
         *  Constant: '<S535>/Constant'
         *  Constant: '<S536>/Constant'
         *  Constant: '<S537>/Constant'
         *  Logic: '<S518>/Logical_Operator'
         *  Logic: '<S518>/Logical_Operator5'
         *  Logic: '<S518>/Logical_Operator7'
         *  Logic: '<S518>/Logical_Operator8'
         *  RelationalOperator: '<S518>/Relational_Operator4'
         *  RelationalOperator: '<S518>/Relational_Operator5'
         *  RelationalOperator: '<S518>/Relational_Operator6'
         *  RelationalOperator: '<S518>/Relational_Operator7'
         *  Switch: '<S539>/Switch1'
         */
        rtb_Edge_Failing = ((((CeHTDR_e_DsblNoSwitch == ((uint32)
                                VeSRMC_e_MtrA_MdCmdLimd)) || (((uint32)
                                VeSRMC_e_MtrA_MdCmdLimd) == CeHTDR_e_DsblImmd)) &&
                             ((CeHTDR_e_DsblNoSwitch == ((uint32)
                                VeSRMC_e_MtrB_MdCmdLimd)) || (((uint32)
                                VeSRMC_e_MtrB_MdCmdLimd) == CeHTDR_e_DsblImmd)))
                            && (rtb_Edge_Failing || (VeSRMI_b_MtrMdVldtnFlt)));

        /* Update for UnitDelay: '<S518>/Unit_Delay' */
        SRMR_ac_DW.Unit_Delay_DSTATE_o =
            rtb_TmpSignalConversionAtVeHPMR_b_MtrSys;

        /* End of Outputs for SubSystem: '<S415>/Perform_MtrMdCmnd_M182' */
    }

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLTIR_b_Lv2BrkPdlStatFlt' */
    (void)Rte_Read_VeLTIR_b_Lv2BrkPdlStatFlt_Value(&tmpRead_1m);

    /* Inport: '<Root>/VeLTIR_b_Lv2MtrA_MinTrq_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2MtrA_MinTrq_FA_Value(&tmpRead_1k);

    /* Inport: '<Root>/VeSCMR_M_Lv2MtrA_MinTrq' */
    (void)Rte_Read_VeSCMR_M_Lv2MtrA_MinTrq_Value((&(VeSRMC_M_MtrA_MinTorq_final)));

    /* Inport: '<Root>/VeLTIR_b_Lv2MtrA_MaxTrq_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2MtrA_MaxTrq_FA_Value(&tmpRead_1j);

    /* Inport: '<Root>/VeSCMR_M_Lv2MtrA_MaxTrq' */
    (void)Rte_Read_VeSCMR_M_Lv2MtrA_MaxTrq_Value((&(VeSRMC_M_MtrA_MaxTorq_final)));

    /* Inport: '<Root>/VeLTIR_M_Lv2BrkTrq' */
    (void)Rte_Read_VeLTIR_M_Lv2BrkTrq_Value(&tmpRead_1d);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SRMC'
     */
    /* Logic: '<S406>/FA_Latch' incorporates:
     *  Constant: '<S398>/RA_Mask'
     *  Constant: '<S405>/Constant'
     *  DataStoreRead: '<S398>/RA_Register'
     *  Logic: '<S398>/MoreFault'
     *  Logic: '<S406>/OR'
     *  RelationalOperator: '<S405>/Compare'
     *  S-Function (sfix_bitop): '<S398>/Bitwise'
     */
    VeSRMC_b_MtrA_TorqCmndFA = ((((((sint32)VeSRMR_g_RA_InputSet1) & ((sint32)
        KeSRMR_g_RA_MtrA_TorCmnd)) >= 1) || (VeSRMC_b_DTRCmdFlt_TrqSplit_DT)) ||
        (tmpRead_1a && (VeSRMC_b_MtrA_TorqCmndFA)));
    for (i = 0; i < 2; i++)
    {
        /* Sum: '<S569>/Add' incorporates:
         *  Constant: '<S568>/Calib'
         */
        rtb_Add[i] = SRMR_ac_DW.UnitDelay_DSTATE[i] + KeSRMR_M_MtrTrqCmdRmpInc;
    }

    /* Switch: '<S414>/VeSRMC_M_MtrA_MaxTorq_final' */
    if (tmpRead_1k)
    {
        /* Switch: '<S414>/VeSRMC_M_MtrA_MaxTorq_final' incorporates:
         *  Constant: '<S510>/Calib'
         *  Inport: '<Root>/VeSCMR_M_Lv2MtrA_MaxTrq'
         */
        VeSRMC_M_MtrA_MaxTorq_final = KeSRMR_M_MtrA_MaxTorq;
    }

    /* End of Switch: '<S414>/VeSRMC_M_MtrA_MaxTorq_final' */

    /* Switch: '<S414>/VeSRMC_M_MtrA_MinTorq_final' */
    if (tmpRead_1j)
    {
        /* Switch: '<S414>/VeSRMC_M_MtrA_MinTorq_final' incorporates:
         *  Constant: '<S511>/Calib'
         *  Inport: '<Root>/VeSCMR_M_Lv2MtrA_MinTrq'
         */
        VeSRMC_M_MtrA_MinTorq_final = KeSRMR_M_MtrA_MinTorq;
    }

    /* End of Switch: '<S414>/VeSRMC_M_MtrA_MinTorq_final' */

    /* Switch: '<S420>/Switch2' */
    VeSRMC_r_Lv2BrkTrq = (float32)((!tmpRead_1m) ? 1 : 0);

    /* Outputs for Atomic SubSystem: '<S420>/Gradient_Limiter' */
    /* Sum: '<S423>/Sum2' incorporates:
     *  UnitDelay: '<S423>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeSCMR_U_Lv2EVR = VeSRMC_r_Lv2BrkTrq -
        VeSRMC_r_DrvrIntndedTotBrkTrqFA;

    /* Outputs for Atomic SubSystem: '<S423>/Limiter' */
    /* Switch: '<S426>/Switch1' incorporates:
     *  Constant: '<S425>/Calib'
     *  RelationalOperator: '<S426>/Relational Operator'
     */
    if (KeSRMR_r_BrkFailSftPosGrd < rtb_TmpSignalConversionAtVeSCMR_U_Lv2EVR)
    {
        /* Switch: '<S426>/Switch1' */
        rtb_TmpSignalConversionAtVeSCMR_U_Lv2EVR = KeSRMR_r_BrkFailSftPosGrd;
    }

    /* End of Switch: '<S426>/Switch1' */

    /* Switch: '<S426>/Switch' incorporates:
     *  Constant: '<S424>/Calib'
     *  RelationalOperator: '<S426>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtVeSCMR_U_Lv2EVR <= KeSRMR_r_BrkFailSftNegGrd)
    {
        rtb_TmpSignalConversionAtVeSCMR_U_Lv2EVR = KeSRMR_r_BrkFailSftNegGrd;
    }

    /* End of Switch: '<S426>/Switch' */
    /* End of Outputs for SubSystem: '<S423>/Limiter' */

    /* Sum: '<S423>/Sum3' incorporates:
     *  UnitDelay: '<S423>/Unit Delay'
     */
    VeSRMC_r_DrvrIntndedTotBrkTrqFA = rtb_TmpSignalConversionAtVeSCMR_U_Lv2EVR +
        VeSRMC_r_DrvrIntndedTotBrkTrqFA;

    /* End of Outputs for SubSystem: '<S420>/Gradient_Limiter' */

    /* Product: '<S420>/Product3' */
    VeSRMC_M_DrvrIntndedTotBrkTrq = tmpRead_1d * VeSRMC_r_DrvrIntndedTotBrkTrqFA;

    /* Lookup_n-D: '<S460>/Vector' incorporates:
     *  Product: '<S420>/Product3'
     */
    VeSRMC_K_PtcBrkOffsetMultTbl = look1_iflf_binlca_16a
        (VeSRMC_M_DrvrIntndedTotBrkTrq, ((const float32 *)
          &(KxSRMR_K_PtcBrkOffsetMultTbl[0])), ((const float32 *)
          &(KtSRMR_K_PtcBrkOffsetMultTbl[0])), 9U);

    /* RelationalOperator: '<S41>/Comparison5' incorporates:
     *  Constant: '<S413>/Constant'
     */
    VeSRMC_b_PRND_Rev = (((uint32)rtb_TmpSignalConversionAtVeGSMR_e_DrvrPR) ==
                         CeGSMR_e_PRND_Reverse);

    /* Lookup_n-D: '<S462>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeSSMR_v_VehSpd'
     */
    VeSRMC_M_AccelPdlMinWhlTrq_R = look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeSSMR_v_VehSpd, ((const float32 *)
          &(KxSRMR_M_InR_PdlMinWhlTrq[0])), ((const float32 *)
          &(KtSRMR_M_InR_PdlMinWhlTrq[0])), 12U);

    /* Lookup_n-D: '<S461>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeSSMR_v_VehSpd'
     */
    VeSRMC_M_AccelPdlMinWhlTrq_D = look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeSSMR_v_VehSpd, ((const float32 *)
          &(KxSRMR_M_InD_PdlMinWhlTrq[0])), ((const float32 *)
          &(KtSRMR_M_InD_PdlMinWhlTrq[0])), 12U);

    /* Switch: '<S445>/Switch5' incorporates:
     *  Switch: '<S445>/Switch'
     */
    if (VeSRMC_b_PRND_Rev)
    {
        /* Switch: '<S445>/Switch5' incorporates:
         *  Constant: '<S453>/Calib'
         */
        VeSRMC_M_AccelPdlMinWhlTrq_VehSpdFA = KeSRMR_M_PdlMinWhlTrq_R_VehSpdFA;

        /* Switch: '<S445>/Switch' */
        VeSRMC_M_AccelPdlMinWhlTrq_ArbBrk = VeSRMC_M_AccelPdlMinWhlTrq_R;
    }
    else
    {
        /* Switch: '<S445>/Switch5' incorporates:
         *  Constant: '<S452>/Calib'
         */
        VeSRMC_M_AccelPdlMinWhlTrq_VehSpdFA = KeSRMR_M_PdlMinWhlTrq_D_VehSpdFA;

        /* Switch: '<S445>/Switch' */
        VeSRMC_M_AccelPdlMinWhlTrq_ArbBrk = VeSRMC_M_AccelPdlMinWhlTrq_D;
    }

    /* End of Switch: '<S445>/Switch5' */

    /* Switch: '<S450>/Switch1' */
    if (rtb_TmpSignalConversionAtVeSSMR_b_VehSpd)
    {
        /* Switch: '<S450>/Switch1' */
        VeSRMC_M_NorMinTrq1 = VeSRMC_M_AccelPdlMinWhlTrq_VehSpdFA;
    }
    else
    {
        /* Switch: '<S450>/Switch1' */
        VeSRMC_M_NorMinTrq1 = VeSRMC_M_AccelPdlMinWhlTrq_ArbBrk;
    }

    /* End of Switch: '<S450>/Switch1' */

    /* Product: '<S445>/Multiply' */
    VeSRMC_M_NorMinTrq3 = VeSRMC_K_PtcBrkOffsetMultTbl * VeSRMC_M_NorMinTrq1;

    /* Switch: '<S445>/switch5' incorporates:
     *  Constant: '<S459>/Calib'
     *  RelationalOperator: '<S445>/RelationalOperator3'
     */
    if (rtb_TmpSignalConversionAtVeSSMR_v_VehSpd <= KeSRMR_v_MinWhlCreepCntrKPH)
    {
        /* Switch: '<S445>/switch5' incorporates:
         *  Constant: '<S445>/ConstantOne'
         *  Sum: '<S445>/LV1_BRAKE_SW1_ON_CNTR1'
         *  UnitDelay: '<S445>/Unit Delay1'
         */
        VeSRMC_Cnt_CreepSpeedCoumt = VeSRMC_Cnt_CreepSpeedCount + 1.0F;
    }
    else
    {
        /* Switch: '<S445>/switch5' incorporates:
         *  Constant: '<S445>/ConstantZero'
         */
        VeSRMC_Cnt_CreepSpeedCoumt = 0.0F;
    }

    /* End of Switch: '<S445>/switch5' */

    /* Outputs for Atomic SubSystem: '<S445>/MinMaxLimiter1' */
    /* Switch: '<S466>/LimiterSwitch' incorporates:
     *  Constant: '<S445>/MAX'
     *  RelationalOperator: '<S466>/Relational_Operator'
     */
    if (255.0F < VeSRMC_Cnt_CreepSpeedCoumt)
    {
        /* Switch: '<S514>/LimiterSwitch' */
        VeSRMC_M_MtrB_TrqCmdRngLimd = 255.0F;
    }
    else
    {
        /* Switch: '<S514>/LimiterSwitch' */
        VeSRMC_M_MtrB_TrqCmdRngLimd = VeSRMC_Cnt_CreepSpeedCoumt;
    }

    /* End of Switch: '<S466>/LimiterSwitch' */

    /* Switch: '<S466>/LimiterSwitch1' incorporates:
     *  Constant: '<S445>/MIN'
     *  RelationalOperator: '<S466>/Relational_Operator1'
     */
    if (VeSRMC_M_MtrB_TrqCmdRngLimd > 0.0F)
    {
        /* Switch: '<S466>/LimiterSwitch1' */
        VeSRMC_Cnt_CreepSpeedCount = VeSRMC_M_MtrB_TrqCmdRngLimd;
    }
    else
    {
        /* Switch: '<S466>/LimiterSwitch1' */
        VeSRMC_Cnt_CreepSpeedCount = 0.0F;
    }

    /* End of Switch: '<S466>/LimiterSwitch1' */
    /* End of Outputs for SubSystem: '<S445>/MinMaxLimiter1' */

    /* Switch: '<S445>/switch6' incorporates:
     *  Constant: '<S451>/Calib'
     *  RelationalOperator: '<S445>/RelationalOperator4'
     */
    if (VeSRMC_Cnt_CreepSpeedCount <= KeSRMR_Cnt_PtcMinWhlCreepMphTLmt)
    {
        /* Switch: '<S445>/switch6' incorporates:
         *  Constant: '<S454>/Calib'
         */
        VeSRMC_M_MinCreepTrq = KeSRMR_M_PtcMinWhlCreepTrqBase;
    }
    else
    {
        /* Switch: '<S445>/switch6' incorporates:
         *  Constant: '<S455>/Calib'
         */
        VeSRMC_M_MinCreepTrq = KeSRMR_M_PtcMinWhlCreepTrqLwr;
    }

    /* End of Switch: '<S445>/switch6' */

    /* Switch: '<S514>/LimiterSwitch' incorporates:
     *  Constant: '<S456>/Calib'
     *  Sum: '<S445>/Subtraction'
     */
    VeSRMC_M_MtrB_TrqCmdRngLimd = VeSRMC_M_PtcHevMinWhlCreepTrq -
        KeSRMR_M_PtcMinWhlTrqCreepDecRL;

    /* Switch: '<S463>/Switch' incorporates:
     *  RelationalOperator: '<S463>/Comparison'
     */
    if (VeSRMC_M_MinCreepTrq > VeSRMC_M_MtrB_TrqCmdRngLimd)
    {
        /* Switch: '<S463>/Switch' */
        VeSRMC_M_MinCreepTrq1 = VeSRMC_M_MinCreepTrq;
    }
    else
    {
        /* Switch: '<S463>/Switch' */
        VeSRMC_M_MinCreepTrq1 = VeSRMC_M_MtrB_TrqCmdRngLimd;
    }

    /* End of Switch: '<S463>/Switch' */

    /* Switch: '<S464>/Switch' incorporates:
     *  Constant: '<S454>/Calib'
     *  RelationalOperator: '<S464>/Comparison'
     */
    if (KeSRMR_M_PtcMinWhlCreepTrqBase < VeSRMC_M_MinCreepTrq1)
    {
        /* Switch: '<S464>/Switch' */
        VeSRMC_M_MinCreepTrq2 = KeSRMR_M_PtcMinWhlCreepTrqBase;
    }
    else
    {
        /* Switch: '<S464>/Switch' */
        VeSRMC_M_MinCreepTrq2 = VeSRMC_M_MinCreepTrq1;
    }

    /* End of Switch: '<S464>/Switch' */

    /* Sum: '<S445>/Summation' incorporates:
     *  Constant: '<S457>/Calib'
     */
    VeSRMC_M_PtcHevMinWhlCreepTrqInc = KeSRMR_M_PtcMinWhlTrqCreepIncRL +
        VeSRMC_M_PtcHevMinWhlCreepTrq;

    /* Switch: '<S465>/Switch' incorporates:
     *  RelationalOperator: '<S465>/Comparison'
     */
    if (VeSRMC_M_MinCreepTrq2 < VeSRMC_M_PtcHevMinWhlCreepTrqInc)
    {
        /* Switch: '<S465>/Switch' */
        VeSRMC_M_PtcHevMinWhlCreepTrq = VeSRMC_M_MinCreepTrq2;
    }
    else
    {
        /* Switch: '<S465>/Switch' */
        VeSRMC_M_PtcHevMinWhlCreepTrq = VeSRMC_M_PtcHevMinWhlCreepTrqInc;
    }

    /* End of Switch: '<S465>/Switch' */

    /* Switch: '<S445>/switch3' incorporates:
     *  RelationalOperator: '<S445>/Relational_Operator1'
     */
    if (VeSRMC_M_NorMinTrq3 >= VeSRMC_M_PtcHevMinWhlCreepTrq)
    {
        /* Switch: '<S445>/switch3' */
        VeSRMC_M_NorMinTrq2 = VeSRMC_M_NorMinTrq3;
    }
    else
    {
        /* Switch: '<S445>/switch3' */
        VeSRMC_M_NorMinTrq2 = VeSRMC_M_PtcHevMinWhlCreepTrq;
    }

    /* End of Switch: '<S445>/switch3' */

    /* Logic: '<S445>/Logical2' incorporates:
     *  Logic: '<S440>/Logical2'
     */
    rtb_TmpSignalConversionAtVeLTIR_b_Lv2Brk =
        !rtb_TmpSignalConversionAtVeLTIR_b_Lv2Brk;

    /* Switch: '<S445>/switch2' incorporates:
     *  Constant: '<S458>/Calib'
     *  Logic: '<S445>/Logical1'
     *  Logic: '<S445>/Logical2'
     *  RelationalOperator: '<S445>/Equal'
     */
    if ((rtb_TmpSignalConversionAtVeLTIR_e_Lv2Brk == KeSRMR_e_BrakeAppld) &&
            rtb_TmpSignalConversionAtVeLTIR_b_Lv2Brk)
    {
        /* Switch: '<S445>/switch1' incorporates:
         *  Constant: '<S445>/ConstantZero1'
         *  RelationalOperator: '<S445>/Relational_Operator2'
         */
        if (VeSRMC_M_NorMinTrq3 == 0.0F)
        {
            /* Switch: '<S445>/switch2' incorporates:
             *  Constant: '<S445>/RESET'
             */
            VeSRMC_M_NorMinTrq = 0.0F;
        }
        else
        {
            /* Switch: '<S445>/switch2' */
            VeSRMC_M_NorMinTrq = VeSRMC_M_NorMinTrq2;
        }

        /* End of Switch: '<S445>/switch1' */
    }
    else
    {
        /* Switch: '<S445>/switch2' */
        VeSRMC_M_NorMinTrq = VeSRMC_M_NorMinTrq1;
    }

    /* End of Switch: '<S445>/switch2' */

    /* Logic: '<S446>/Logical1' */
    VeSRMC_b_VehSpd_SOC_FA = (rtb_TmpSignalConversionAtVeSSMR_b_VehSpd ||
        rtb_TmpSignalConversionAtVeLTIR_b_Lv2H_d);

    /* Lookup_n-D: '<S471>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeSCMR_Pct_Lv2HV_BatSOC'
     *  SignalConversion generated from: '<S1>/VeSSMR_v_VehSpd'
     */
    VeSRMC_M_AccelPdlMaxWhlTrq_R = look2_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeSSMR_v_VehSpd,
         rtb_TmpSignalConversionAtVeSCMR_Pct_Lv2H, ((const float32 *)
          &(KxSRMR_M_AccelPdlMaxWhlTrq_R[0])), ((const float32 *)
          &(KySRMR_M_AccelPdlMaxWhlTrq_R[0])), ((const float32 *)
          &(KtSRMR_M_AccelPdlMaxWhlTrq_R[0])), SRMR_ac_ConstP.pooled6, 8U);

    /* Lookup_n-D: '<S470>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeSCMR_Pct_Lv2HV_BatSOC'
     *  SignalConversion generated from: '<S1>/VeSSMR_v_VehSpd'
     */
    VeSRMC_M_AccelPdlMaxWhlTrq_D = look2_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeSSMR_v_VehSpd,
         rtb_TmpSignalConversionAtVeSCMR_Pct_Lv2H, ((const float32 *)
          &(KxSRMR_M_AccelPdlMaxWhlTrq_D[0])), ((const float32 *)
          &(KySRMR_M_AccelPdlMaxWhlTrq_D[0])), ((const float32 *)
          &(KtSRMR_M_AccelPdlMaxWhlTrq_D[0])), SRMR_ac_ConstP.pooled6, 8U);

    /* Switch: '<S468>/Switch1' */
    if (VeSRMC_b_PRND_Rev)
    {
        /* Switch: '<S468>/Switch1' */
        VeSRMC_M_AccelPdlMaxWhlTrq_Arb = VeSRMC_M_AccelPdlMaxWhlTrq_R;
    }
    else
    {
        /* Switch: '<S468>/Switch1' */
        VeSRMC_M_AccelPdlMaxWhlTrq_Arb = VeSRMC_M_AccelPdlMaxWhlTrq_D;
    }

    /* End of Switch: '<S468>/Switch1' */

    /* Switch: '<S467>/Switch1' */
    if (VeSRMC_b_VehSpd_SOC_FA)
    {
        /* Switch: '<S467>/Switch1' incorporates:
         *  Constant: '<S469>/Calib'
         */
        VeSRMC_M_Lv2AccelPdlMaxWhlTrq = KeSRMR_M_AccelPdlMaxWhlTrqDflt;
    }
    else
    {
        /* Switch: '<S467>/Switch1' */
        VeSRMC_M_Lv2AccelPdlMaxWhlTrq = VeSRMC_M_AccelPdlMaxWhlTrq_Arb;
    }

    /* End of Switch: '<S467>/Switch1' */

    /* Sum: '<S444>/Sum1' */
    VeSRMC_M_Lv2MinMaxTrqDiff = VeSRMC_M_Lv2AccelPdlMaxWhlTrq -
        VeSRMC_M_NorMinTrq;

    /* Lookup_n-D: '<S449>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VePSMR_Pct_Lv2AccelPdlPos'
     *  SignalConversion generated from: '<S1>/VeSSMR_v_VehSpd'
     */
    VeSRMC_Pct_PctForWhlTrq_NormalMd = look2_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVePSMR_Pct_Lv2A,
         rtb_TmpSignalConversionAtVeSSMR_v_VehSpd, ((const float32 *)
          &(KxSRMR_Pct_PctForWhlTrq_NormalMd[0])), ((const float32 *)
          &(KySRMR_Pct_PctForWhlTrq_NormalMd[0])), ((const float32 *)
          &(KtSRMR_Pct_PctForWhlTrq_NormalMd[0])),
         SRMR_ac_ConstP.Vector_maxIndex, 17U);

    /* Switch: '<S447>/Switch1' */
    if (rtb_TmpSignalConversionAtVeSSMR_b_VehSpd)
    {
        /* Switch: '<S447>/Switch1' incorporates:
         *  Constant: '<S448>/Calib'
         */
        VeSRMC_Pct_Lv2PctForWhlTrqCalc = KeSRMR_Pct_PctForWhlTrqCalcDflt;
    }
    else
    {
        /* Switch: '<S447>/Switch1' */
        VeSRMC_Pct_Lv2PctForWhlTrqCalc = VeSRMC_Pct_PctForWhlTrq_NormalMd;
    }

    /* End of Switch: '<S447>/Switch1' */

    /* Product: '<S444>/Product' */
    VeSRMC_M_Lv2MinMaxDiffAdded = VeSRMC_M_Lv2MinMaxTrqDiff *
        VeSRMC_Pct_Lv2PctForWhlTrqCalc;

    /* Sum: '<S444>/Sum' */
    VeSRMC_M_Lv2_AccelPdlWhlTrq = VeSRMC_M_Lv2MinMaxDiffAdded +
        VeSRMC_M_NorMinTrq;

    /* Switch: '<S429>/Switch1' */
    if (VeSRMC_b_PRND_Rev)
    {
        /* Switch: '<S429>/Switch1' incorporates:
         *  Gain: '<S427>/Gain1'
         */
        VeSRMC_M_Lv2DrvrTrqReqFinal = -VeSRMC_M_Lv2_AccelPdlWhlTrq;
    }
    else
    {
        /* Switch: '<S429>/Switch1' */
        VeSRMC_M_Lv2DrvrTrqReqFinal = VeSRMC_M_Lv2_AccelPdlWhlTrq;
    }

    /* End of Switch: '<S429>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSSMR_n_MtrBSpd' */
    (void)Rte_Read_VeSSMR_n_MtrBSpd_Value(&tmpRead_1n);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SRMC'
     */
    /* RelationalOperator: '<S427>/Comparison4' incorporates:
     *  Constant: '<S434>/Calib'
     */
    VeSRMC_b_Lv2DrvrTrqReqDflt = (VeSRMC_M_Lv2DrvrTrqReqFinal <
        KeSRMR_M_ToMin_BrkTrqRdct);

    /* Sum: '<S427>/Sum2' */
    VeSRMC_M_Lv2BrkTrqRdctn = VeSRMC_M_Lv2DrvrTrqReqFinal - VeSRMC_M_NorMinTrq;

    /* Switch: '<S441>/Switch1' incorporates:
     *  Constant: '<S442>/Calib'
     *  Logic: '<S440>/Logical1'
     *  RelationalOperator: '<S440>/Equal'
     */
    if ((rtb_TmpSignalConversionAtVeLTIR_e_Lv2Brk == KeSRMR_e_BrakeAppld) &&
            rtb_TmpSignalConversionAtVeLTIR_b_Lv2Brk)
    {
        /* Switch: '<S441>/Switch1' */
        VeSRMC_M_Lv2TotBrkTrq_Arb = VeSRMC_M_DrvrIntndedTotBrkTrq;
    }
    else
    {
        /* Switch: '<S441>/Switch1' incorporates:
         *  Constant: '<S440>/ConstantZero'
         */
        VeSRMC_M_Lv2TotBrkTrq_Arb = 0.0F;
    }

    /* End of Switch: '<S441>/Switch1' */

    /* Sum: '<S427>/Sum3' incorporates:
     *  Constant: '<S433>/Calib'
     */
    VeSRMC_M_Lv2TotBrkTrq_Max_Arb = VeSRMC_M_Lv2TotBrkTrq_Arb -
        KeSRMR_M_MinBrkTrq_ToNet;

    /* Switch: '<S438>/Switch' incorporates:
     *  Constant: '<S427>/ConstantZero'
     *  RelationalOperator: '<S438>/Comparison'
     */
    if (0.0F > VeSRMC_M_Lv2TotBrkTrq_Max_Arb)
    {
        /* Switch: '<S438>/Switch' */
        VeSRMC_M_Lv2TotBrkTrq_Max = 0.0F;
    }
    else
    {
        /* Switch: '<S438>/Switch' */
        VeSRMC_M_Lv2TotBrkTrq_Max = VeSRMC_M_Lv2TotBrkTrq_Max_Arb;
    }

    /* End of Switch: '<S438>/Switch' */

    /* Product: '<S421>/Product' incorporates:
     *  Constant: '<S428>/Calib'
     */
    VeSRMC_n_Lv2_MtrSpd = tmpRead_1n * KeSRMR_Cf_TransOutSpdCalc;

    /* Switch: '<S437>/LV2_Abs_switch' incorporates:
     *  Constant: '<S437>/Constant Value1'
     *  Product: '<S437>/Product'
     *  RelationalOperator: '<S437>/Comparison'
     */
    if (VeSRMC_n_Lv2_MtrSpd < 0.0F)
    {
        tmpRead_1n = -VeSRMC_n_Lv2_MtrSpd;
    }
    else
    {
        tmpRead_1n = VeSRMC_n_Lv2_MtrSpd;
    }

    /* End of Switch: '<S437>/LV2_Abs_switch' */

    /* Lookup_n-D: '<S436>/Vector' */
    VeSRMC_r_Lv2SpdBsdFctr = look1_iflf_binlca_16a(tmpRead_1n, ((const float32 *)
        &(KxSRMR_r_SpdBsdFctr_ToNet[0])), ((const float32 *)
        &(KtSRMR_r_SpdBsdFctr_ToNet[0])), 7U);

    /* Product: '<S427>/Product' */
    VeSRMC_M_Lv2TotBrkTrq_Final = VeSRMC_M_Lv2TotBrkTrq_Max *
        VeSRMC_r_Lv2SpdBsdFctr;

    /* Switch: '<S439>/Switch' incorporates:
     *  RelationalOperator: '<S439>/Comparison'
     */
    if (VeSRMC_M_Lv2BrkTrqRdctn < VeSRMC_M_Lv2TotBrkTrq_Final)
    {
        /* Switch: '<S439>/Switch' */
        VeSRMC_M_Lv2BrkTrqRdctn_Min = VeSRMC_M_Lv2BrkTrqRdctn;
    }
    else
    {
        /* Switch: '<S439>/Switch' */
        VeSRMC_M_Lv2BrkTrqRdctn_Min = VeSRMC_M_Lv2TotBrkTrq_Final;
    }

    /* End of Switch: '<S439>/Switch' */

    /* Switch: '<S430>/Switch1' */
    if (VeSRMC_b_Lv2DrvrTrqReqDflt)
    {
        /* Switch: '<S430>/Switch1' incorporates:
         *  Constant: '<S427>/ConstantZero1'
         */
        VeSRMC_M_Lv2BrkTrqRdctn_Raw = 0.0F;
    }
    else
    {
        /* Switch: '<S430>/Switch1' */
        VeSRMC_M_Lv2BrkTrqRdctn_Raw = VeSRMC_M_Lv2BrkTrqRdctn_Min;
    }

    /* End of Switch: '<S430>/Switch1' */

    /* Switch: '<S431>/Switch1' */
    if (VeSRMC_b_PRND_Rev)
    {
        /* Switch: '<S431>/Switch1' incorporates:
         *  Gain: '<S427>/Gain2'
         */
        VeSRMC_M_Lv2BrkTrqRdctn_Arb = -VeSRMC_M_Lv2BrkTrqRdctn_Raw;
    }
    else
    {
        /* Switch: '<S431>/Switch1' */
        VeSRMC_M_Lv2BrkTrqRdctn_Arb = VeSRMC_M_Lv2BrkTrqRdctn_Raw;
    }

    /* End of Switch: '<S431>/Switch1' */

    /* Sum: '<S427>/Sum1' */
    VeSRMC_M_Lv2DrvrTrqReq_NetArb = VeSRMC_M_Lv2_AccelPdlWhlTrq -
        VeSRMC_M_Lv2BrkTrqRdctn_Arb;

    /* Switch: '<S432>/Switch1' incorporates:
     *  Constant: '<S435>/Calib'
     */
    if (KeSRMR_b_DualPedalPress_Enbl)
    {
        /* Switch: '<S432>/Switch1' */
        VeSRMC_M_Lv2DrvrTrqReq = VeSRMC_M_Lv2DrvrTrqReq_NetArb;
    }
    else
    {
        /* Switch: '<S432>/Switch1' */
        VeSRMC_M_Lv2DrvrTrqReq = VeSRMC_M_Lv2_AccelPdlWhlTrq;
    }

    /* End of Switch: '<S432>/Switch1' */

    /* Switch: '<S417>/Switch' incorporates:
     *  Constant: '<S549>/Constant'
     *  RelationalOperator: '<S417>/Comparison'
     */
    if (((uint32)SRMR_ac_B.Switch) == CeSRMR_e_SoftLimitation)
    {
        /* Switch: '<S553>/Switch' incorporates:
         *  Constant: '<S556>/Calib'
         *  RelationalOperator: '<S553>/Comparison'
         */
        if (VeSRMC_M_Lv2DrvrTrqReq < KeSRMR_M_SoftLimitationMinTorque)
        {
            /* Switch: '<S417>/Switch' */
            VeSRMC_M_MaxTrqSoftLim = VeSRMC_M_Lv2DrvrTrqReq;
        }
        else
        {
            /* Switch: '<S417>/Switch' */
            VeSRMC_M_MaxTrqSoftLim = KeSRMR_M_SoftLimitationMinTorque;
        }

        /* End of Switch: '<S553>/Switch' */
    }
    else
    {
        /* Switch: '<S417>/Switch' */
        VeSRMC_M_MaxTrqSoftLim = VeSRMC_M_Lv2DrvrTrqReq;
    }

    /* End of Switch: '<S417>/Switch' */

    /* Switch: '<S417>/Switch1' incorporates:
     *  Constant: '<S550>/Constant'
     *  RelationalOperator: '<S417>/Comparison1'
     */
    if (((uint32)SRMR_ac_B.Switch) == CeSRMR_e_MedLimitation)
    {
        /* Switch: '<S554>/Switch' incorporates:
         *  Constant: '<S557>/Calib'
         *  RelationalOperator: '<S554>/Comparison'
         */
        if (VeSRMC_M_MaxTrqSoftLim < KeSRMR_M_Trq_Medium_Limit)
        {
            /* Switch: '<S417>/Switch1' */
            VeSRMC_M_MaxTrqMedLim = VeSRMC_M_MaxTrqSoftLim;
        }
        else
        {
            /* Switch: '<S417>/Switch1' */
            VeSRMC_M_MaxTrqMedLim = KeSRMR_M_Trq_Medium_Limit;
        }

        /* End of Switch: '<S554>/Switch' */
    }
    else
    {
        /* Switch: '<S417>/Switch1' */
        VeSRMC_M_MaxTrqMedLim = VeSRMC_M_MaxTrqSoftLim;
    }

    /* End of Switch: '<S417>/Switch1' */

    /* Switch: '<S417>/Switch2' incorporates:
     *  Constant: '<S551>/Constant'
     *  RelationalOperator: '<S417>/Comparison2'
     */
    if (((uint32)SRMR_ac_B.Switch) == CeSRMR_e_HardLimitation)
    {
        /* Switch: '<S555>/Switch' incorporates:
         *  Constant: '<S558>/Calib'
         *  RelationalOperator: '<S555>/Comparison'
         */
        if (VeSRMC_M_MaxTrqMedLim < KeSRMR_M_TORQUE_FIX_MAX)
        {
            /* Switch: '<S417>/Switch2' */
            VeSRMC_M_MaxTrqHardLim = VeSRMC_M_MaxTrqMedLim;
        }
        else
        {
            /* Switch: '<S417>/Switch2' */
            VeSRMC_M_MaxTrqHardLim = KeSRMR_M_TORQUE_FIX_MAX;
        }

        /* End of Switch: '<S555>/Switch' */
    }
    else
    {
        /* Switch: '<S417>/Switch2' */
        VeSRMC_M_MaxTrqHardLim = VeSRMC_M_MaxTrqMedLim;
    }

    /* End of Switch: '<S417>/Switch2' */

    /* Switch: '<S417>/Switch3' incorporates:
     *  Constant: '<S552>/Constant'
     *  RelationalOperator: '<S417>/Comparison3'
     */
    if (((uint32)SRMR_ac_B.Switch) == CeSRMR_e_UltraHardLimitation)
    {
        /* Switch: '<S417>/Switch3' */
        VeSRMC_M_MaxTrqUltraHardLim = VeSRMC_M_NorMinTrq;
    }
    else
    {
        /* Switch: '<S417>/Switch3' */
        VeSRMC_M_MaxTrqUltraHardLim = VeSRMC_M_MaxTrqHardLim;
    }

    /* End of Switch: '<S417>/Switch3' */

    /* Gain: '<S417>/Gain' */
    VeSRMC_M_TotFnlTrqTar = VeSRMC_M_MaxTrqUltraHardLim;

    /* Outputs for Atomic SubSystem: '<S418>/Protected_Division' */
    /* Switch: '<S561>/Switch1' incorporates:
     *  Constant: '<S561>/Constant Value'
     *  Constant: '<S561>/Constant Value1'
     *  Constant: '<S561>/Constant Value2'
     *  Constant: '<S561>/Constant Value3'
     *  Constant: '<S563>/Calib'
     *  Logic: '<S561>/AND'
     *  RelationalOperator: '<S561>/Greater Than or Equal '
     *  RelationalOperator: '<S561>/Greater Than or Equal 1'
     *  RelationalOperator: '<S561>/Not Equal'
     *  RelationalOperator: '<S561>/Not Equal1'
     *  Switch: '<S561>/Switch2'
     *  Switch: '<S561>/Switch3'
     */
    if ((VeSRMC_M_TotFnlTrqTar != 0.0F) && (KeSRMR_r_GearRatioF_C != 0.0F))
    {
        /* Switch: '<S561>/Switch1' incorporates:
         *  Product: '<S561>/Division'
         */
        VeSRMC_M_TrqRarFrnt = VeSRMC_M_TotFnlTrqTar / KeSRMR_r_GearRatioF_C;
    }
    else if (VeSRMC_M_TotFnlTrqTar > 0.0F)
    {
        /* Switch: '<S561>/Switch2' incorporates:
         *  Constant: '<S561>/MAXFLOAT'
         *  Switch: '<S561>/Switch1'
         */
        VeSRMC_M_TrqRarFrnt = 3.402823466E+38F;
    }
    else if (VeSRMC_M_TotFnlTrqTar < 0.0F)
    {
        /* Switch: '<S561>/Switch3' incorporates:
         *  Constant: '<S561>/MINFLOAT'
         *  Switch: '<S561>/Switch1'
         *  Switch: '<S561>/Switch2'
         */
        VeSRMC_M_TrqRarFrnt = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S561>/Switch1' incorporates:
         *  Constant: '<S561>/Constant Value4'
         *  Switch: '<S561>/Switch2'
         *  Switch: '<S561>/Switch3'
         */
        VeSRMC_M_TrqRarFrnt = 0.0F;
    }

    /* End of Switch: '<S561>/Switch1' */
    /* End of Outputs for SubSystem: '<S418>/Protected_Division' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeGRAR_b_Assign_RA_RIP_Ratio' */
    (void)Rte_Read_VeGRAR_b_Assign_RA_RIP_Ratio_Value(&tmpRead_1r);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SRMC'
     */
    /* Logic: '<S412>/LimitationCondMet7' */
    VeSRMC_b_AWDTrqFixdRepartition = (((rtb_TmpSignalConversionAtVeSCMR_b_Lv2EVR
        || rtb_AnyTrue3) || rtb_AnyTrue6) ||
        rtb_TmpSignalConversionAtVeSCMR_b_Lv2HV_);

    /* Logic: '<S418>/LogicalOperator' */
    rtb_TmpSignalConversionAtVeSCMR_b_Lv2HV_ = ((VeSRMC_b_AWDTrqFixdRepartition)
        || tmpRead_1r);

    /* Logic: '<S412>/LimitationCondMet9' */
    VeSRMC_b_FWDTrqRepartition = (((rtb_TmpSignalConversionAtVeGRAR_b_Disa_d ||
        rtb_AnyTrue5) || rtb_AnyTrue8) ||
        rtb_TmpSignalConversionAtVeLTIR_b_Lv2Mtr);

    /* Switch: '<S418>/VeSRMC_M_TtargetFront' incorporates:
     *  Switch: '<S418>/VeSRMC_M_TtargetFront1'
     */
    if (rtb_TmpSignalConversionAtVeSCMR_b_Lv2HV_)
    {
        /* Switch: '<S418>/VeSRMC_M_TtargetFront' incorporates:
         *  Product: '<S418>/Product'
         */
        VeSRMC_M_TrqRarFrnt = rtb_TmpSignalConversionAtVeGRAR_r_RA_RIP *
            VeSRMC_M_TrqRarFrnt;
    }
    else
    {
        if (!VeSRMC_b_FWDTrqRepartition)
        {
            /* Switch: '<S418>/VeSRMC_M_TtargetFront' incorporates:
             *  Constant: '<S418>/Constant'
             *  Switch: '<S418>/VeSRMC_M_TtargetFront1'
             */
            VeSRMC_M_TrqRarFrnt = 0.0F;
        }
    }

    /* End of Switch: '<S418>/VeSRMC_M_TtargetFront' */

    /* Switch: '<S418>/VeSRMC_M_MtrATorq' */
    if (VeSRMC_b_PRND_Rev)
    {
        /* Switch: '<S418>/VeSRMC_M_MtrATorq' incorporates:
         *  Gain: '<S418>/Gain'
         */
        VeSRMC_M_MtrATorq = -VeSRMC_M_TrqRarFrnt;
    }
    else
    {
        /* Switch: '<S418>/VeSRMC_M_MtrATorq' */
        VeSRMC_M_MtrATorq = VeSRMC_M_TrqRarFrnt;
    }

    /* End of Switch: '<S418>/VeSRMC_M_MtrATorq' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLTIR_b_Lv2MtrB_MinTrq_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2MtrB_MinTrq_FA_Value(&tmpRead_1i);

    /* Inport: '<Root>/VeSCMR_M_Lv2MtrB_MinTrq' */
    (void)Rte_Read_VeSCMR_M_Lv2MtrB_MinTrq_Value((&(VeSRMC_M_MtrB_MinTorq_final)));

    /* Inport: '<Root>/VeLTIR_b_Lv2MtrB_MaxTrq_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2MtrB_MaxTrq_FA_Value(&tmpRead_1h);

    /* Inport: '<Root>/VeSCMR_M_Lv2MtrB_MaxTrq' */
    (void)Rte_Read_VeSCMR_M_Lv2MtrB_MaxTrq_Value((&(VeSRMC_M_MtrB_MaxTorq_final)));

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SRMC'
     */
    /* Outputs for Atomic SubSystem: '<S418>/Digital_Lowpass_Reset_Enabled' */
    /* Switch: '<S559>/Switch1' incorporates:
     *  Constant: '<S565>/Calib'
     *  Product: '<S559>/Multiplication'
     *  Sum: '<S559>/Subtraction'
     *  Sum: '<S559>/Summation'
     *  UnitDelay: '<S559>/Unit Delay'
     */
    VeSRMC_M_TotTrqTarFrnt = ((VeSRMC_M_MtrATorq - VeSRMC_M_TotTrqTarFrnt) *
        KeSRMR_k_DTRFiltrCoeffMtrA) + VeSRMC_M_TotTrqTarFrnt;

    /* End of Outputs for SubSystem: '<S418>/Digital_Lowpass_Reset_Enabled' */

    /* Outputs for Atomic SubSystem: '<S414>/MinMaxLimiter1' */
    /* Switch: '<S515>/LimiterSwitch' incorporates:
     *  RelationalOperator: '<S515>/Relational_Operator'
     */
    if (VeSRMC_M_MtrA_MaxTorq_final < VeSRMC_M_TotTrqTarFrnt)
    {
        /* Switch: '<S514>/LimiterSwitch' */
        VeSRMC_M_MtrB_TrqCmdRngLimd = VeSRMC_M_MtrA_MaxTorq_final;
    }
    else
    {
        /* Switch: '<S514>/LimiterSwitch' */
        VeSRMC_M_MtrB_TrqCmdRngLimd = VeSRMC_M_TotTrqTarFrnt;
    }

    /* End of Switch: '<S515>/LimiterSwitch' */

    /* Switch: '<S515>/LimiterSwitch1' incorporates:
     *  RelationalOperator: '<S515>/Relational_Operator1'
     */
    if (VeSRMC_M_MtrB_TrqCmdRngLimd > VeSRMC_M_MtrA_MinTorq_final)
    {
        /* Switch: '<S515>/LimiterSwitch1' */
        VeSRMC_M_MtrA_TrqCmdRngLimd = VeSRMC_M_MtrB_TrqCmdRngLimd;
    }
    else
    {
        /* Switch: '<S515>/LimiterSwitch1' */
        VeSRMC_M_MtrA_TrqCmdRngLimd = VeSRMC_M_MtrA_MinTorq_final;
    }

    /* End of Switch: '<S515>/LimiterSwitch1' */
    /* End of Outputs for SubSystem: '<S414>/MinMaxLimiter1' */

    /* Switch: '<S414>/VeSRMC_M_MtrB_MaxTorq_final' */
    if (tmpRead_1h)
    {
        /* Switch: '<S414>/VeSRMC_M_MtrB_MaxTorq_final' incorporates:
         *  Constant: '<S512>/Calib'
         *  Inport: '<Root>/VeSCMR_M_Lv2MtrB_MaxTrq'
         */
        VeSRMC_M_MtrB_MaxTorq_final = KeSRMR_M_MtrB_MaxTorq;
    }

    /* End of Switch: '<S414>/VeSRMC_M_MtrB_MaxTorq_final' */

    /* Switch: '<S414>/VeSRMC_M_MtrB_MinTorq_final' */
    if (tmpRead_1i)
    {
        /* Switch: '<S414>/VeSRMC_M_MtrB_MinTorq_final' incorporates:
         *  Constant: '<S513>/Calib'
         *  Inport: '<Root>/VeSCMR_M_Lv2MtrB_MinTrq'
         */
        VeSRMC_M_MtrB_MinTorq_final = KeSRMR_M_MtrB_MinTorq;
    }

    /* End of Switch: '<S414>/VeSRMC_M_MtrB_MinTorq_final' */

    /* Outputs for Atomic SubSystem: '<S418>/Protected_Division1' */
    /* Switch: '<S562>/Switch1' incorporates:
     *  Constant: '<S562>/Constant Value'
     *  Constant: '<S562>/Constant Value1'
     *  Constant: '<S562>/Constant Value2'
     *  Constant: '<S562>/Constant Value3'
     *  Constant: '<S564>/Calib'
     *  Logic: '<S562>/AND'
     *  RelationalOperator: '<S562>/Greater Than or Equal '
     *  RelationalOperator: '<S562>/Greater Than or Equal 1'
     *  RelationalOperator: '<S562>/Not Equal'
     *  RelationalOperator: '<S562>/Not Equal1'
     *  Switch: '<S562>/Switch2'
     *  Switch: '<S562>/Switch3'
     */
    if ((VeSRMC_M_TotFnlTrqTar != 0.0F) && (KeSRMR_r_GearRatioR_C != 0.0F))
    {
        /* Switch: '<S562>/Switch1' incorporates:
         *  Product: '<S562>/Division'
         */
        VeSRMC_M_TrqTarRe = VeSRMC_M_TotFnlTrqTar / KeSRMR_r_GearRatioR_C;
    }
    else if (VeSRMC_M_TotFnlTrqTar > 0.0F)
    {
        /* Switch: '<S562>/Switch2' incorporates:
         *  Constant: '<S562>/MAXFLOAT'
         *  Switch: '<S562>/Switch1'
         */
        VeSRMC_M_TrqTarRe = 3.402823466E+38F;
    }
    else if (VeSRMC_M_TotFnlTrqTar < 0.0F)
    {
        /* Switch: '<S562>/Switch3' incorporates:
         *  Constant: '<S562>/MINFLOAT'
         *  Switch: '<S562>/Switch1'
         *  Switch: '<S562>/Switch2'
         */
        VeSRMC_M_TrqTarRe = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S562>/Switch1' incorporates:
         *  Constant: '<S562>/Constant Value4'
         *  Switch: '<S562>/Switch2'
         *  Switch: '<S562>/Switch3'
         */
        VeSRMC_M_TrqTarRe = 0.0F;
    }

    /* End of Switch: '<S562>/Switch1' */
    /* End of Outputs for SubSystem: '<S418>/Protected_Division1' */

    /* Logic: '<S412>/LimitationCondMet8' */
    VeSRMC_b_RWDTrqRepartition = (((rtb_AnyTrue1 || rtb_AnyTrue4) ||
        rtb_AnyTrue7) || rtb_AnyTrue10);

    /* Switch: '<S418>/VeSRMC_M_TtargetRear' incorporates:
     *  Switch: '<S418>/VeSRMC_M_TtargetRear1'
     */
    if (rtb_TmpSignalConversionAtVeSCMR_b_Lv2HV_)
    {
        /* Switch: '<S418>/VeSRMC_M_TtargetRear' incorporates:
         *  Constant: '<S418>/FullRatio'
         *  Product: '<S418>/Product1'
         *  Sum: '<S418>/Subtract'
         */
        VeSRMC_M_TrqTarRe = (1.0F - rtb_TmpSignalConversionAtVeGRAR_r_RA_RIP) *
            VeSRMC_M_TrqTarRe;
    }
    else
    {
        if (!VeSRMC_b_RWDTrqRepartition)
        {
            /* Switch: '<S418>/VeSRMC_M_TtargetRear' incorporates:
             *  Constant: '<S418>/Constant2'
             *  Switch: '<S418>/VeSRMC_M_TtargetRear1'
             */
            VeSRMC_M_TrqTarRe = 0.0F;
        }
    }

    /* End of Switch: '<S418>/VeSRMC_M_TtargetRear' */

    /* Switch: '<S418>/VeSRMC_M_MtrBTorq' */
    if (VeSRMC_b_PRND_Rev)
    {
        /* Switch: '<S418>/VeSRMC_M_MtrBTorq' incorporates:
         *  Gain: '<S418>/Gain1'
         */
        VeSRMC_M_MtrBTorq = -VeSRMC_M_TrqTarRe;
    }
    else
    {
        /* Switch: '<S418>/VeSRMC_M_MtrBTorq' */
        VeSRMC_M_MtrBTorq = VeSRMC_M_TrqTarRe;
    }

    /* End of Switch: '<S418>/VeSRMC_M_MtrBTorq' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeGRAR_b_TotMtrTrqIncRampEnbl' */
    (void)Rte_Read_VeGRAR_b_TotMtrTrqIncRampEnbl_Value
        (&rtb_Relational_Operator_m);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SRMC'
     */
    /* Outputs for Atomic SubSystem: '<S418>/Digital_Lowpass_Reset_Enabled1' */
    /* Switch: '<S560>/Switch1' incorporates:
     *  Constant: '<S566>/Calib'
     *  Product: '<S560>/Multiplication'
     *  Sum: '<S560>/Subtraction'
     *  Sum: '<S560>/Summation'
     *  UnitDelay: '<S560>/Unit Delay'
     */
    VeSRMC_M_TotTrqTarRe = ((VeSRMC_M_MtrBTorq - VeSRMC_M_TotTrqTarRe) *
                            KeSRMR_k_DTRFiltrCoeffMtrB) + VeSRMC_M_TotTrqTarRe;

    /* End of Outputs for SubSystem: '<S418>/Digital_Lowpass_Reset_Enabled1' */

    /* Outputs for Atomic SubSystem: '<S414>/MinMaxLimiter' */
    /* Switch: '<S514>/LimiterSwitch' incorporates:
     *  RelationalOperator: '<S514>/Relational_Operator'
     */
    if (VeSRMC_M_MtrB_MaxTorq_final < VeSRMC_M_TotTrqTarRe)
    {
        /* Switch: '<S514>/LimiterSwitch' */
        VeSRMC_M_MtrB_TrqCmdRngLimd = VeSRMC_M_MtrB_MaxTorq_final;
    }
    else
    {
        /* Switch: '<S514>/LimiterSwitch' */
        VeSRMC_M_MtrB_TrqCmdRngLimd = VeSRMC_M_TotTrqTarRe;
    }

    /* End of Switch: '<S514>/LimiterSwitch' */

    /* Switch: '<S514>/LimiterSwitch1' incorporates:
     *  RelationalOperator: '<S514>/Relational_Operator1'
     */
    if (VeSRMC_M_MtrB_TrqCmdRngLimd <= VeSRMC_M_MtrB_MinTorq_final)
    {
        /* Switch: '<S514>/LimiterSwitch1' */
        VeSRMC_M_MtrB_TrqCmdRngLimd = VeSRMC_M_MtrB_MinTorq_final;
    }

    /* End of Switch: '<S514>/LimiterSwitch1' */
    /* End of Outputs for SubSystem: '<S414>/MinMaxLimiter' */

    /* Switch: '<S416>/Switch' incorporates:
     *  Constant: '<S543>/Constant'
     *  Constant: '<S544>/Constant'
     *  Constant: '<S545>/Constant'
     *  Constant: '<S546>/Constant'
     *  Constant: '<S547>/Constant'
     *  Logic: '<S416>/Operator2'
     *  RelationalOperator: '<S416>/Comparison'
     *  RelationalOperator: '<S416>/Comparison1'
     *  RelationalOperator: '<S416>/Comparison2'
     *  RelationalOperator: '<S416>/Comparison3'
     *  RelationalOperator: '<S416>/Comparison4'
     */
    if (((((CeGSMR_e_PRND_Park == ((uint32)
             rtb_TmpSignalConversionAtVeGSMR_e_DrvrPR)) || (((uint32)
             rtb_TmpSignalConversionAtVeGSMR_e_DrvrPR) == CeGSMR_e_PRND_Neutral))
          || (((uint32)SRMR_ac_B.Switch) == CeSRMR_e_StopLimitation)) ||
            (CeTRGR_e_TransRangePark == ((uint32)
            rtb_TmpSignalConversionAtVeTRGR_e_VldtdT))) || (((uint32)
            rtb_TmpSignalConversionAtVeTRGR_e_VldtdT) ==
            CeTRGR_e_TransRangeNeutral))
    {
        /* Switch: '<S416>/Switch' incorporates:
         *  Constant: '<S416>/Constant'
         *  Constant: '<S416>/Constant1'
         */
        VaSRMC_y_MtrTrqCmd[0] = 0.0F;
        VaSRMC_y_MtrTrqCmd[1] = 0.0F;
    }
    else
    {
        /* Switch: '<S416>/Switch' */
        VaSRMC_y_MtrTrqCmd[0] = VeSRMC_M_MtrA_TrqCmdRngLimd;
        VaSRMC_y_MtrTrqCmd[1] = VeSRMC_M_MtrB_TrqCmdRngLimd;
    }

    /* End of Switch: '<S416>/Switch' */

    /* Gain: '<S416>/Gain' */
    VeSRMC_M_MtrA_TrqCmdLimd = VaSRMC_y_MtrTrqCmd[0];

    /* Gain: '<S416>/Gain1' */
    VeSRMC_M_MtrB_TrqCmdLimd = VaSRMC_y_MtrTrqCmd[1];

    /* Sum: '<S569>/Add2' */
    rtb_Add2[0] = VeSRMC_M_MtrA_TrqCmdLimd - SRMR_ac_DW.UnitDelay_DSTATE[0];
    rtb_Add2[1] = VeSRMC_M_MtrB_TrqCmdLimd - SRMR_ac_DW.UnitDelay_DSTATE[1];

    /* Switch: '<S570>/Switch2' */
    tmp[0] = VeSRMC_M_MtrA_TrqCmdLimd;
    tmp[1] = VeSRMC_M_MtrB_TrqCmdLimd;

    /* Switch: '<S569>/Switch' */
    tmp_0[0] = VeSRMC_M_MtrA_TrqCmdLimd;
    tmp_0[1] = VeSRMC_M_MtrB_TrqCmdLimd;

    /* Outputs for Atomic SubSystem: '<S569>/SignalLatchOnWithReset' */
    for (i = 0; i < 2; i++)
    {
        /* RelationalOperator: '<S569>/RelationalOperator1' */
        rtb_TmpSignalConversionAtVeGRAR_r_RA_RIP = rtb_Add2[i];

        /* RelationalOperator: '<S569>/RelationalOperator1' incorporates:
         *  Constant: '<S568>/Calib'
         */
        tmpRead_1i = (rtb_TmpSignalConversionAtVeGRAR_r_RA_RIP >
                      KeSRMR_M_MtrTrqCmdRmpInc);

        /* Switch: '<S569>/Switch' incorporates:
         *  Constant: '<S567>/Calib'
         *  Sum: '<S569>/Add1'
         */
        SRMR_ac_DW.UnitDelay_DSTATE[i] -= KeSRMR_M_MtrTrqCmdRmpDec;

        /* Logic: '<S569>/LogicalOperator1' incorporates:
         *  Logic: '<S569>/LogicalOperator2'
         */
        tmpRead_1h = !tmpRead_1i;

        /* UnitDelay: '<S571>/Unit Delay' incorporates:
         *  Constant: '<S567>/Calib'
         *  Gain: '<S569>/Gain'
         *  Logic: '<S569>/LogicalOperator'
         *  RelationalOperator: '<S569>/RelationalOperator2'
         */
        tmpRead_1r = (tmpRead_1h && ((-rtb_TmpSignalConversionAtVeGRAR_r_RA_RIP)
                       > KeSRMR_M_MtrTrqCmdRmpDec));

        /* Switch: '<S570>/Switch2' */
        if (!tmpRead_1r)
        {
            /* Switch: '<S569>/Switch' */
            SRMR_ac_DW.UnitDelay_DSTATE[i] = tmp[i];
        }

        /* Switch: '<S570>/Switch1' */
        if (tmpRead_1i)
        {
            /* Switch: '<S569>/Switch' */
            SRMR_ac_DW.UnitDelay_DSTATE[i] = rtb_Add[i];
        }

        /* End of Switch: '<S570>/Switch1' */

        /* Logic: '<S571>/OR1' incorporates:
         *  Logic: '<S569>/LogicalOperator2'
         *  Logic: '<S571>/NOT'
         *  Logic: '<S571>/OR'
         *  UnitDelay: '<S571>/Unit Delay'
         */
        SRMR_ac_DW.UnitDelay_DSTATE_h[i] = (rtb_Relational_Operator_m ||
            (((!tmpRead_1h) || tmpRead_1r) && (SRMR_ac_DW.UnitDelay_DSTATE_h[i])));

        /* Switch: '<S569>/Switch' incorporates:
         *  UnitDelay: '<S571>/Unit Delay'
         */
        if (!SRMR_ac_DW.UnitDelay_DSTATE_h[i])
        {
            /* Switch: '<S569>/Switch' */
            SRMR_ac_DW.UnitDelay_DSTATE[i] = tmp_0[i];
        }
    }

    /* End of Outputs for SubSystem: '<S569>/SignalLatchOnWithReset' */

    /* Gain: '<S419>/Gain' */
    VeSRMC_M_MtrA_TrqCmdLimdRampd = SRMR_ac_DW.UnitDelay_DSTATE[0];

    /* RelationalOperator: '<S40>/Relational_Operator' incorporates:
     *  Constant: '<S392>/Constant'
     */
    rtb_Relational_Operator_m = (((uint32)SRMR_ac_B.Switch) !=
        CeSRMR_e_NoLimitation);

    /* Switch: '<S398>/Switch1' incorporates:
     *  Switch: '<S40>/Switch1'
     */
    if (VeSRMC_b_MtrA_TorqCmndFA)
    {
        /* Switch: '<S398>/Switch1' incorporates:
         *  Constant: '<S393>/Calib'
         */
        rtb_TmpSignalConversionAtVeGRAR_r_RA_RIP = KeSRMR_M_MtrATrqCmd;
    }
    else if (rtb_Relational_Operator_m)
    {
        /* Switch: '<S40>/Switch1' incorporates:
         *  Switch: '<S398>/Switch1'
         */
        rtb_TmpSignalConversionAtVeGRAR_r_RA_RIP = VeSRMC_M_MtrA_TrqCmdLimdRampd;
    }
    else
    {
        /* Switch: '<S398>/Switch1' incorporates:
         *  Switch: '<S40>/Switch1'
         */
        rtb_TmpSignalConversionAtVeGRAR_r_RA_RIP = VeSRMC_M_MtrA_TorqCmnd_BSG;
    }

    /* End of Switch: '<S398>/Switch1' */

    /* Logic: '<S408>/FA_Latch' incorporates:
     *  Constant: '<S399>/RA_Mask'
     *  Constant: '<S407>/Constant'
     *  DataStoreRead: '<S399>/RA_Register'
     *  Logic: '<S399>/MoreFault'
     *  Logic: '<S408>/OR'
     *  RelationalOperator: '<S407>/Compare'
     *  S-Function (sfix_bitop): '<S399>/Bitwise'
     */
    VeSRMC_b_MtrB_TorqCmndFA = ((((((sint32)VeSRMR_g_RA_InputSet1) & ((sint32)
        KeSRMR_g_RA_MtrB_TorqCmnd)) >= 1) || (VeSRMC_b_DTRCmdFlt_TrqSplit_DT)) ||
        (tmpRead_1a && (VeSRMC_b_MtrB_TorqCmndFA)));

    /* Gain: '<S419>/Gain1' */
    VeSRMC_M_MtrB_TrqCmdLimdRampd = SRMR_ac_DW.UnitDelay_DSTATE[1];

    /* Switch: '<S399>/Switch1' incorporates:
     *  Inport: '<Root>/VeHTDR_M_MtrB_TorqCmnd'
     */
    if (VeSRMC_b_MtrB_TorqCmndFA)
    {
        /* Switch: '<S399>/Switch1' incorporates:
         *  Constant: '<S394>/Calib'
         */
        VeSRMR_M_MtrB_TorqCmnd = KeSRMR_M_MtrBTrqCmd;
    }
    else
    {
        (void)Rte_Read_VeHTDR_M_MtrB_TorqCmnd_Value(&VeSRMR_M_MtrB_TorqCmnd);

        /* Switch: '<S40>/Switch2' incorporates:
         *  Inport: '<Root>/VeHTDR_M_MtrB_TorqCmnd'
         */
        if (rtb_Relational_Operator_m)
        {
            /* Switch: '<S399>/Switch1' */
            VeSRMR_M_MtrB_TorqCmnd = VeSRMC_M_MtrB_TrqCmdLimdRampd;
        }

        /* End of Switch: '<S40>/Switch2' */
    }

    /* End of Switch: '<S399>/Switch1' */

    /* Logic: '<S410>/FA_Latch' incorporates:
     *  Constant: '<S400>/RA_Mask'
     *  Constant: '<S409>/Constant'
     *  DataStoreRead: '<S400>/RA_Register'
     *  Logic: '<S400>/MoreFault'
     *  Logic: '<S410>/OR'
     *  RelationalOperator: '<S409>/Compare'
     *  S-Function (sfix_bitop): '<S400>/Bitwise'
     */
    VeSRMC_b_MtrB_MdCmndFA = ((((((sint32)VeSRMR_g_RA_InputSet1) & ((sint32)
        KeSRMR_g_RA_MtrB_MdCmnd)) >= 1) || (VeSRMC_b_DTRCmdFlt_TrqSplit_DT)) ||
        (tmpRead_1a && (VeSRMC_b_MtrB_MdCmndFA)));

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSCMR_b_ASC_Req' */
    (void)Rte_Read_VeSCMR_b_ASC_Req_Value(&tmpRead_13);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SRMC'
     */
    /* Switch: '<S40>/Switch3' incorporates:
     *  Constant: '<S395>/Calib'
     *  Switch: '<S40>/Switch4'
     */
    if (tmpRead_13)
    {
        /* Switch: '<S40>/Switch3' incorporates:
         *  Constant: '<S396>/Calib'
         *  DataTypeConversion: '<S391>/DataTypeConversion'
         */
        VeSRMC_e_MtrB_MdCmndIntrm = KeSRMR_e_MtrBASCCmnd;
    }
    else if (KeSRMR_b_MtrMdCmnd_Enable)
    {
        /* Switch: '<S40>/Switch4' incorporates:
         *  Merge: '<S415>/Merge1'
         *  Switch: '<S40>/Switch3'
         */
        VeSRMC_e_MtrB_MdCmndIntrm = VeSRMC_e_MtrB_MdCmdLimd;
    }
    else
    {
        /* Switch: '<S40>/Switch3' incorporates:
         *  SignalConversion generated from: '<S1>/VeHTDR_e_MtrB_MdCmnd'
         *  Switch: '<S40>/Switch4'
         */
        VeSRMC_e_MtrB_MdCmndIntrm = rtb_TmpSignalConversionAtVeHTDR_e_MtrB_M;
    }

    /* End of Switch: '<S40>/Switch3' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeGRAR_b_DisableECoast' */
    (void)Rte_Read_VeGRAR_b_DisableECoast_Value(&tmpRead_1q);

    /* Inport: '<Root>/VeDTRR_b_VehStndStillReq_OPD' */
    (void)Rte_Read_VeDTRR_b_VehStndStillReq_OPD_Value(&tmpRead_18);

    /* Inport: '<Root>/VeTRGR_b_GatedParkSw' */
    (void)Rte_Read_VeTRGR_b_GatedParkSw_Value(&tmpRead_j);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SRMC'
     */
    /* Logic: '<S574>/FA_Latch' incorporates:
     *  Constant: '<S573>/RA_Mask'
     *  Logic: '<S573>/AND'
     *  Logic: '<S574>/OR'
     */
    VeSRMC_b_TransWarn2FA = (((VeSRMC_b_VehSpdRatFailed_Arb) &&
        (KeSRMR_b_OvrdWarn2_SpdFlt)) || (tmpRead_1a && (VeSRMC_b_TransWarn2FA)));

    /* Logic: '<S373>/FA_Latch' incorporates:
     *  Constant: '<S369>/RA_Mask'
     *  Constant: '<S372>/Constant'
     *  DataStoreRead: '<S369>/RA_Register'
     *  Logic: '<S373>/OR'
     *  RelationalOperator: '<S372>/Compare'
     *  S-Function (sfix_bitop): '<S369>/Bitwise'
     */
    VeSRMC_b_GatedParkSwFA = (((((sint32)VeSRMR_g_RA_InputSet1) & ((sint32)
        KeSRMR_g_RA_GatedParkSw)) >= 1) || (tmpRead_1a &&
        (VeSRMC_b_GatedParkSwFA)));

    /* Logic: '<S371>/FA_Latch' incorporates:
     *  Constant: '<S368>/RA_Mask'
     *  Constant: '<S370>/Constant'
     *  DataStoreRead: '<S368>/RA_Register'
     *  Logic: '<S371>/OR'
     *  RelationalOperator: '<S370>/Compare'
     *  S-Function (sfix_bitop): '<S368>/Bitwise'
     */
    VeSRMC_b_HEV_ESS_ModeFA = (((((sint32)VeSRMR_g_RA_InputSet1) & ((sint32)
        KeSRMR_g_RA_HEV_ESS_Mode)) >= 1) || (tmpRead_1a &&
        (VeSRMC_b_HEV_ESS_ModeFA)));

    /* Sum: '<S18>/Sum1' */
    VeSRMC_M_Lv2AeCoastTrqDiffDec = VeSRMC_M_Lv2AeCoastTrqDiffFinal -
        rtb_TmpSignalConversionAtVeRGNR_M_AeCoas;

    /* Logic: '<S18>/Logical2' incorporates:
     *  Constant: '<S164>/Calib'
     *  Logic: '<S18>/Logical8'
     */
    VeSRMC_b_DisableOPD = (((KeSRMR_b_Lv2_MntrOPDEnbl) &&
                            rtb_TmpSignalConversionAtVeDTMR_b_Lv2_OP) ||
                           rtb_TmpSignalConversionAtVeGRAR_b_Disabl);

    /* Logic: '<S18>/Logical1' */
    VeSRMC_b_DisableECoast = ((VeSRMC_b_DisableOPD) || tmpRead_1q);

    /* Switch: '<S18>/Switch1' */
    if (VeSRMC_b_DisableECoast)
    {
        /* Switch: '<S18>/Switch1' */
        VeSRMC_M_Lv2AeCoastTrqDiffArb = VeSRMC_M_Lv2AeCoastTrqDiffDec;
    }
    else
    {
        /* Switch: '<S18>/Switch1' */
        VeSRMC_M_Lv2AeCoastTrqDiffArb = rtb_TmpSignalConversionAtVeRGNR_M_AeCoas;
    }

    /* End of Switch: '<S18>/Switch1' */

    /* Switch: '<S165>/Switch' incorporates:
     *  Constant: '<S18>/ConstantZero'
     *  RelationalOperator: '<S165>/Comparison'
     */
    if (0.0F > VeSRMC_M_Lv2AeCoastTrqDiffArb)
    {
        /* Switch: '<S165>/Switch' */
        VeSRMC_M_Lv2AeCoastTrqDiffFinal = 0.0F;
    }
    else
    {
        /* Switch: '<S165>/Switch' */
        VeSRMC_M_Lv2AeCoastTrqDiffFinal = VeSRMC_M_Lv2AeCoastTrqDiffArb;
    }

    /* End of Switch: '<S165>/Switch' */

    /* Switch: '<S162>/Switch1' */
    if (VeSRMC_b_DisableECoast)
    {
        /* Switch: '<S162>/Switch1' incorporates:
         *  Constant: '<S18>/ConstantZero1'
         *  RelationalOperator: '<S18>/Comparison1'
         */
        Switch1_a = (VeSRMC_M_Lv2AeCoastTrqDiffFinal != 0.0F);
    }
    else
    {
        /* Switch: '<S162>/Switch1' incorporates:
         *  Inport: '<Root>/VeRGNR_b_AeCoastTorqDiffActv'
         */
        (void)Rte_Read_VeRGNR_b_AeCoastTorqDiffActv_Value(&Switch1_a);
    }

    /* End of Switch: '<S162>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VePSMR_e_Lv2PVSMode' */
    (void)Rte_Read_VePSMR_e_Lv2PVSMode_Value(&tmpRead_1u);

    /* Inport: '<Root>/VeSRAR_b_Popup_Msg15' */
    (void)Rte_Read_VeSRAR_b_Popup_Msg15_Value(&tmpRead_16);

    /* Inport: '<Root>/VePSMR_b_Lv2AccelPdlPosFlt' */
    (void)Rte_Read_VePSMR_b_Lv2AccelPdlPosFlt_Value(&tmpRead_11);

    /* Inport: '<Root>/VeTITR_M_SnsdEng_Flt' */
    (void)Rte_Read_VeTITR_M_SnsdEng_Flt_Value(&tmpRead_d);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SRMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SRMC'
     */
    /* Update for UnitDelay: '<S359>/DelayLoop3' incorporates:
     *  UnitDelay: '<S359>/DelayLoop2'
     */
    SRMR_ac_DW.DelayLoop3_DSTATE = SRMR_ac_DW.DelayLoop2_DSTATE;

    /* Update for UnitDelay: '<S359>/DelayLoop1' */
    SRMR_ac_DW.DelayLoop1_DSTATE = (uint8)rtb_TmpSignalConversionAtVeGRAR;

    /* Update for UnitDelay: '<S359>/DelayLoop2' */
    SRMR_ac_DW.DelayLoop2_DSTATE = rtb_TmpSignalConversionAtVeSCMR_e_Lv2ESS;

    /* Update for UnitDelay: '<S569>/UnitDelay' */
    SRMR_ac_DW.UnitDelay_DSTATE[0] = rtb_TmpSignalConversionAtVeGRAR_r_RA_RIP;
    SRMR_ac_DW.UnitDelay_DSTATE[1] = VeSRMR_M_MtrB_TorqCmnd;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SRMO_for_CAN'
     */
    /* Outport: '<Root>/VeSRMR_b_Lv2AccelPdlPosFlt' incorporates:
     *  Inport: '<S5>/VePSMR_b_Lv2AccelPdlPosFlt'
     *  SignalConversion generated from: '<S1>/VePSMR_b_Lv2AccelPdlPosFlt_out'
     */
    (void)Rte_Write_VeSRMR_b_Lv2AccelPdlPosFlt_Value(tmpRead_11);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SRMC'
     */
    /* Switch: '<S576>/Switch1' */
    if (VeSRMC_b_ActualAxleTrqFA)
    {
        /* Outport: '<Root>/VeSRMR_M_ActualAxleTrq' incorporates:
         *  Constant: '<S576>/RA_Default'
         *  SignalConversion generated from: '<S1>/VeSRMC_M_ActualAxleTrq'
         */
        (void)Rte_Write_VeSRMR_M_ActualAxleTrq_Value(KeSRMR_M_STAAxleVal);
    }
    else
    {
        /* Outport: '<Root>/VeSRMR_M_ActualAxleTrq' incorporates:
         *  SignalConversion generated from: '<S1>/VeSRMC_M_ActualAxleTrq'
         */
        (void)Rte_Write_VeSRMR_M_ActualAxleTrq_Value(tmpRead_1);
    }

    /* End of Switch: '<S576>/Switch1' */

    /* Switch: '<S163>/Switch1' */
    if (VeSRMC_b_DisableECoast)
    {
        /* Outport: '<Root>/VeSRMR_M_AeCoastTorqDiff' incorporates:
         *  SignalConversion generated from: '<S1>/VeSRMC_M_AeCoastTorqDiff'
         */
        (void)Rte_Write_VeSRMR_M_AeCoastTorqDiff_Value
            (VeSRMC_M_Lv2AeCoastTrqDiffFinal);
    }
    else
    {
        /* Outport: '<Root>/VeSRMR_M_AeCoastTorqDiff' incorporates:
         *  SignalConversion generated from: '<S1>/VeSRMC_M_AeCoastTorqDiff'
         */
        (void)Rte_Write_VeSRMR_M_AeCoastTorqDiff_Value
            (rtb_TmpSignalConversionAtVeRGNR_M_AeCoas);
    }

    /* End of Switch: '<S163>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeSRMR_M_BSGActualTorque' incorporates:
     *  SignalConversion generated from: '<S1>/VeSRMC_M_BSGActualTorque'
     */
    (void)Rte_Write_VeSRMR_M_BSGActualTorque_Value
        (rtb_TmpSignalConversionAtVeSCMR_M_Lv2Mtr);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SRMC'
     */
    /* Switch: '<S374>/Switch1' */
    if (VeSRMC_b_EngCLITermFA)
    {
        /* Outport: '<Root>/VeSRMR_M_EngCLITerm' incorporates:
         *  Constant: '<S374>/RA_Default'
         *  SignalConversion generated from: '<S1>/VeSRMC_M_EngCLITerm'
         */
        (void)Rte_Write_VeSRMR_M_EngCLITerm_Value(KeSRMR_M_IdleCLTrq);
    }
    else
    {
        /* Outport: '<Root>/VeSRMR_M_EngCLITerm' incorporates:
         *  SignalConversion generated from: '<S1>/VeSRMC_M_EngCLITerm'
         */
        (void)Rte_Write_VeSRMR_M_EngCLITerm_Value(tmpRead_g);
    }

    /* End of Switch: '<S374>/Switch1' */

    /* Switch: '<S294>/Switch1' */
    if (VeSRMC_b_EngTrqCmndImmedFA)
    {
        /* Outport: '<Root>/VeSRMR_M_EngTrqCmndImmed' incorporates:
         *  Constant: '<S294>/RA_Default'
         *  SignalConversion generated from: '<S1>/VeSRMC_M_EngTrqCmndImmed'
         */
        (void)Rte_Write_VeSRMR_M_EngTrqCmndImmed_Value(KeSRMR_M_HybCmdEngTrqImm);
    }
    else
    {
        /* Outport: '<Root>/VeSRMR_M_EngTrqCmndImmed' incorporates:
         *  SignalConversion generated from: '<S1>/VeSRMC_M_EngTrqCmndImmed'
         */
        (void)Rte_Write_VeSRMR_M_EngTrqCmndImmed_Value(tmpRead_9);
    }

    /* End of Switch: '<S294>/Switch1' */

    /* Switch: '<S295>/Switch1' */
    if (VeSRMC_b_EngTrqCmndPrdtdFA)
    {
        /* Outport: '<Root>/VeSRMR_M_EngTrqCmndPrdtd' incorporates:
         *  Constant: '<S295>/RA_Default'
         *  SignalConversion generated from: '<S1>/VeSRMC_M_EngTrqCmndPrdtd'
         */
        (void)Rte_Write_VeSRMR_M_EngTrqCmndPrdtd_Value
            (KeSRMR_M_HybCmdEngTrqPrdtd);
    }
    else
    {
        /* Outport: '<Root>/VeSRMR_M_EngTrqCmndPrdtd' incorporates:
         *  SignalConversion generated from: '<S1>/VeSRMC_M_EngTrqCmndPrdtd'
         */
        (void)Rte_Write_VeSRMR_M_EngTrqCmndPrdtd_Value(tmpRead_a);
    }

    /* End of Switch: '<S295>/Switch1' */

    /* Switch: '<S375>/Switch1' */
    if (VeSRMC_b_EstRegenBrkAxTorqFA)
    {
        /* Outport: '<Root>/VeSRMR_M_EstRegenBrkAxTorq' incorporates:
         *  Constant: '<S375>/RA_Default'
         *  SignalConversion generated from: '<S1>/VeSRMC_M_EstRegenBrkAxTorq'
         */
        (void)Rte_Write_VeSRMR_M_EstRegenBrkAxTorq_Value
            (KeSRMR_M_EstRegenBrkAxTrq);
    }
    else
    {
        /* Outport: '<Root>/VeSRMR_M_EstRegenBrkAxTorq' incorporates:
         *  SignalConversion generated from: '<S1>/VeSRMC_M_EstRegenBrkAxTorq'
         */
        (void)Rte_Write_VeSRMR_M_EstRegenBrkAxTorq_Value(tmpRead_h);
    }

    /* End of Switch: '<S375>/Switch1' */

    /* Switch: '<S577>/Switch1' */
    if (VeSRMC_b_MaxAxleTrqCruiseFA)
    {
        /* Outport: '<Root>/VeSRMR_M_MaxAxleTrqCruise' incorporates:
         *  Constant: '<S577>/RA_Default'
         *  SignalConversion generated from: '<S1>/VeSRMC_M_MaxAxleTrqCruise'
         */
        (void)Rte_Write_VeSRMR_M_MaxAxleTrqCruise_Value(KeSRMR_M_MaxAxleVal);
    }
    else
    {
        /* Outport: '<Root>/VeSRMR_M_MaxAxleTrqCruise' incorporates:
         *  SignalConversion generated from: '<S1>/VeSRMC_M_MaxAxleTrqCruise'
         */
        (void)Rte_Write_VeSRMR_M_MaxAxleTrqCruise_Value(tmpRead);
    }

    /* End of Switch: '<S577>/Switch1' */

    /* Switch: '<S575>/Switch1' */
    if (VeSRMC_b_MinAxleTrqCruiseFA)
    {
        /* Outport: '<Root>/VeSRMR_M_MinAxleTrqCruise' incorporates:
         *  Constant: '<S575>/RA_Default'
         *  SignalConversion generated from: '<S1>/VeSRMC_M_MinAxleTrqCruise'
         */
        (void)Rte_Write_VeSRMR_M_MinAxleTrqCruise_Value(KeSRMR_M_MinAxleVal);
    }
    else
    {
        /* Outport: '<Root>/VeSRMR_M_MinAxleTrqCruise' incorporates:
         *  SignalConversion generated from: '<S1>/VeSRMC_M_MinAxleTrqCruise'
         */
        (void)Rte_Write_VeSRMR_M_MinAxleTrqCruise_Value(tmpRead_0);
    }

    /* End of Switch: '<S575>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeSRMR_M_MtrA_TorqCmnd' incorporates:
     *  SignalConversion generated from: '<S1>/VeSRMC_M_MtrA_TorqCmnd'
     */
    (void)Rte_Write_VeSRMR_M_MtrA_TorqCmnd_Value
        (rtb_TmpSignalConversionAtVeGRAR_r_RA_RIP);

    /* Outport: '<Root>/VeSRMR_M_MtrB_TorqCmnd' incorporates:
     *  SignalConversion generated from: '<S1>/VeSRMC_M_MtrB_TorqCmnd'
     */
    (void)Rte_Write_VeSRMR_M_MtrB_TorqCmnd_Value(VeSRMR_M_MtrB_TorqCmnd);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SRMC'
     */
    /* Switch: '<S580>/Switch1' */
    if (VeSRMC_b_RegenBrkAxTorqCapFA)
    {
        /* Outport: '<Root>/VeSRMR_M_RegenBrkAxTorqCap' incorporates:
         *  Constant: '<S580>/RA_Default'
         *  SignalConversion generated from: '<S1>/VeSRMC_M_RegenBrkAxTorqCap'
         */
        (void)Rte_Write_VeSRMR_M_RegenBrkAxTorqCap_Value
            (KeSRMR_M_RegenBrkAxTrqCap);
    }
    else
    {
        /* Outport: '<Root>/VeSRMR_M_RegenBrkAxTorqCap' incorporates:
         *  SignalConversion generated from: '<S1>/VeSRMC_M_RegenBrkAxTorqCap'
         */
        (void)Rte_Write_VeSRMR_M_RegenBrkAxTorqCap_Value(tmpRead_i);
    }

    /* End of Switch: '<S580>/Switch1' */

    /* Switch: '<S244>/Switch1' */
    if (VeSRMC_b_SplitFrntTrqReqFA)
    {
        /* Outport: '<Root>/VeSRMR_M_SplitFrntTrqReq' incorporates:
         *  Constant: '<S241>/Calib'
         *  SignalConversion generated from: '<S1>/VeSRMC_M_SplitFrntTrqReq'
         */
        (void)Rte_Write_VeSRMR_M_SplitFrntTrqReq_Value
            (KeSRMR_M_SplitFrntTrqReqVal);
    }
    else
    {
        /* Outport: '<Root>/VeSRMR_M_SplitFrntTrqReq' incorporates:
         *  SignalConversion generated from: '<S1>/VeSRMC_M_SplitFrntTrqReq'
         */
        (void)Rte_Write_VeSRMR_M_SplitFrntTrqReq_Value(tmpRead_t);
    }

    /* End of Switch: '<S244>/Switch1' */

    /* Switch: '<S245>/Switch1' */
    if (VeSRMC_b_SplitRearTrqReqFA)
    {
        /* Outport: '<Root>/VeSRMR_M_SplitRearTrqReq' incorporates:
         *  Constant: '<S242>/Calib'
         *  SignalConversion generated from: '<S1>/VeSRMC_M_SplitRearTrqReq'
         */
        (void)Rte_Write_VeSRMR_M_SplitRearTrqReq_Value
            (KeSRMR_M_SplitRearTrqReqVal);
    }
    else
    {
        /* Outport: '<Root>/VeSRMR_M_SplitRearTrqReq' incorporates:
         *  SignalConversion generated from: '<S1>/VeSRMC_M_SplitRearTrqReq'
         */
        (void)Rte_Write_VeSRMR_M_SplitRearTrqReq_Value(tmpRead_u);
    }

    /* End of Switch: '<S245>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeSRMR_b_AeCoastTorqDiffActv' incorporates:
     *  SignalConversion generated from: '<S1>/VeSRMC_b_AeCoastTorqDiffActv'
     */
    (void)Rte_Write_VeSRMR_b_AeCoastTorqDiffActv_Value(Switch1_a);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SRMC'
     */
    /* Switch: '<S273>/Switch1' */
    if (VeSRMC_b_BSGActualTorqueFAFA)
    {
        /* Outport: '<Root>/VeSRMR_b_BSGActualTorqueFA' incorporates:
         *  Constant: '<S268>/Calib'
         *  SignalConversion generated from: '<S1>/VeSRMC_b_BSGActualTorqueFA'
         */
        (void)Rte_Write_VeSRMR_b_BSGActualTorqueFA_Value(KeSRMR_b_BSGActTrqFA);
    }
    else
    {
        /* Outport: '<Root>/VeSRMR_b_BSGActualTorqueFA' incorporates:
         *  SignalConversion generated from: '<S1>/VeSRMC_b_BSGActualTorqueFA'
         */
        (void)Rte_Write_VeSRMR_b_BSGActualTorqueFA_Value(tmpRead_p);
    }

    /* End of Switch: '<S273>/Switch1' */

    /* Outport: '<Root>/VeSRMR_b_BSGChrgIdleSpeedTargetFA' incorporates:
     *  Constant: '<S269>/Calib'
     *  SignalConversion generated from: '<S1>/VeSRMC_b_BSGChrgIdleSpeedTargetFA'
     *  Switch: '<S274>/Switch1'
     */
    (void)Rte_Write_VeSRMR_b_BSGChrgIdleSpeedTargetFA_Value
        ((VeSRMC_b_BSGChrgIdleSpeedTargetFAFA) &&
         (KeSRMR_b_BSGChrgIdleSpeedTargetFA));

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeSRMR_b_CrashDischarge' incorporates:
     *  SignalConversion generated from: '<S1>/VeSRMC_b_CrashDischarge'
     */
    (void)Rte_Write_VeSRMR_b_CrashDischarge_Value(VeSRMR_b_CrashDischarge);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SRMC'
     */
    /* Switch: '<S297>/Switch1' */
    if (VeSRMC_b_EngDFCOReqFA)
    {
        /* Outport: '<Root>/VeSRMR_b_EngDFCOReq' incorporates:
         *  Constant: '<S297>/RA_Default'
         *  SignalConversion generated from: '<S1>/VeSRMC_b_EngDFCOReq'
         */
        (void)Rte_Write_VeSRMR_b_EngDFCOReq_Value(KeSRMR_b_EngDFCOReq);
    }
    else
    {
        /* Outport: '<Root>/VeSRMR_b_EngDFCOReq' incorporates:
         *  SignalConversion generated from: '<S1>/VeSRMC_b_EngDFCOReq'
         */
        (void)Rte_Write_VeSRMR_b_EngDFCOReq_Value(tmpRead_c);
    }

    /* End of Switch: '<S297>/Switch1' */

    /* Outport: '<Root>/VeSRMR_b_EstRegenBrkAxTorqFA' incorporates:
     *  SignalConversion generated from: '<S1>/VeSRMC_b_EstRegenBrkAxTorqFA'
     *  Switch: '<S38>/Switch25'
     */
    (void)Rte_Write_VeSRMR_b_EstRegenBrkAxTorqFA_Value
        ((!VeSRMC_b_EstRegenBrkAxTorqFA) && tmpRead_k);

    /* Switch: '<S369>/Switch1' */
    if (VeSRMC_b_GatedParkSwFA)
    {
        /* Outport: '<Root>/VeSRMR_b_GatedParkSw' incorporates:
         *  Constant: '<S369>/RA_Default'
         *  SignalConversion generated from: '<S1>/VeSRMC_b_GatedParkSw'
         */
        (void)Rte_Write_VeSRMR_b_GatedParkSw_Value(KeSRMR_b_GatedParkSw);
    }
    else
    {
        /* Outport: '<Root>/VeSRMR_b_GatedParkSw' incorporates:
         *  SignalConversion generated from: '<S1>/VeSRMC_b_GatedParkSw'
         */
        (void)Rte_Write_VeSRMR_b_GatedParkSw_Value(tmpRead_j);
    }

    /* End of Switch: '<S369>/Switch1' */

    /* Outport: '<Root>/VeSRMR_b_HCPMaxEngRPMFA' incorporates:
     *  Constant: '<S336>/Calib'
     *  SignalConversion generated from: '<S1>/VeSRMC_b_HCPMaxEngRPMFA'
     *  Switch: '<S339>/Switch1'
     */
    (void)Rte_Write_VeSRMR_b_HCPMaxEngRPMFA_Value((VeSRMC_b_HCPMaxEngRPMFAFA) &&
        (KeSRMR_b_HCPMaxEngRPMFA));

    /* Switch: '<S299>/Switch1' */
    if (VeSRMC_b_HybFeedback_ECMFA)
    {
        /* Outport: '<Root>/VeSRMR_b_HybFeedback_ECM' incorporates:
         *  Constant: '<S299>/RA_Default'
         *  SignalConversion generated from: '<S1>/VeSRMC_b_HybFeedback_ECM'
         */
        (void)Rte_Write_VeSRMR_b_HybFeedback_ECM_Value(KeSRMR_b_HybFdbckECM);
    }
    else
    {
        /* Outport: '<Root>/VeSRMR_b_HybFeedback_ECM' incorporates:
         *  SignalConversion generated from: '<S1>/VeSRMC_b_HybFeedback_ECM'
         */
        (void)Rte_Write_VeSRMR_b_HybFeedback_ECM_Value(tmpRead_f);
    }

    /* End of Switch: '<S299>/Switch1' */

    /* Switch: '<S227>/Switch1' */
    if (VeSRMC_b_AHH_Flt)
    {
        /* Outport: '<Root>/VeSRMR_b_AHH_ModifyAccel_Req' incorporates:
         *  Constant: '<S231>/Calib'
         *  SignalConversion generated from: '<S1>/VeSRMC_b_Lv2AHH_ModifyAccel_Req'
         */
        (void)Rte_Write_VeSRMR_b_AHH_ModifyAccel_Req_Value
            (KeSRMR_b_OvrdAHHModifyAccelReq);
    }
    else
    {
        /* Outport: '<Root>/VeSRMR_b_AHH_ModifyAccel_Req' incorporates:
         *  SignalConversion generated from: '<S1>/VeSRMC_b_Lv2AHH_ModifyAccel_Req'
         */
        (void)Rte_Write_VeSRMR_b_AHH_ModifyAccel_Req_Value
            (VeSRMI_b_Lv2Lv1AHH_ModifyAccel_Req);
    }

    /* End of Switch: '<S227>/Switch1' */

    /* Outport: '<Root>/VeSRMR_b_Popup_Msg15' incorporates:
     *  Logic: '<S18>/Logical255'
     *  SignalConversion generated from: '<S1>/VeSRMC_b_Popup_Msg15'
     */
    (void)Rte_Write_VeSRMR_b_Popup_Msg15_Value((tmpRead_16 ||
        rtb_TmpSignalConversionAtVeDTMR_b_Lv2_OP) ||
        rtb_TmpSignalConversionAtVeGRAR_b_Disabl);

    /* Switch: '<S346>/Switch1' */
    if (VeSRMC_b_Popup_Msg9FA)
    {
        /* Outport: '<Root>/VeSRMR_b_Popup_Msg9' incorporates:
         *  SignalConversion generated from: '<S1>/VeSRMC_b_Popup_Msg9'
         */
        (void)Rte_Write_VeSRMR_b_Popup_Msg9_Value(rtb_Operator2);
    }
    else
    {
        /* Outport: '<Root>/VeSRMR_b_Popup_Msg9' incorporates:
         *  SignalConversion generated from: '<S1>/VeSRMC_b_Popup_Msg9'
         */
        (void)Rte_Write_VeSRMR_b_Popup_Msg9_Value(tmpRead_17);
    }

    /* End of Switch: '<S346>/Switch1' */

    /* Outport: '<Root>/VeSRMR_b_RegenBrkAxTorqCapFA' incorporates:
     *  Logic: '<S38>/FA_Determ'
     *  SignalConversion generated from: '<S1>/VeSRMC_b_RegenBrkAxTorqCapFA'
     *  Switch: '<S38>/Switch24'
     */
    (void)Rte_Write_VeSRMR_b_RegenBrkAxTorqCapFA_Value
        ((((!VeSRMC_b_RegenBrkAxTorqCapFA) && (!VeSRMC_b_RegenBrkAxTorqCapFrntFA))
          && (!VeSRMC_b_RegenBrkAxTorqCapRearFA)) && tmpRead_l);

    /* Switch: '<S298>/Switch1' */
    if (VeSRMC_b_SnsdTi_notVldFA)
    {
        /* Outport: '<Root>/VeSRMR_b_SnsdTi_notVld' incorporates:
         *  Constant: '<S298>/RA_Default'
         *  SignalConversion generated from: '<S1>/VeSRMC_b_SnsdTi_notVld'
         */
        (void)Rte_Write_VeSRMR_b_SnsdTi_notVld_Value(KeSRMR_b_HybEstEngTorqV);
    }
    else
    {
        /* Outport: '<Root>/VeSRMR_b_SnsdTi_notVld' incorporates:
         *  SignalConversion generated from: '<S1>/VeSRMC_b_SnsdTi_notVld'
         */
        (void)Rte_Write_VeSRMR_b_SnsdTi_notVld_Value(tmpRead_e);
    }

    /* End of Switch: '<S298>/Switch1' */

    /* Outport: '<Root>/VeSRMR_b_SrvcBattReChrgFlSts' incorporates:
     *  Logic: '<S211>/Logical1'
     *  SignalConversion generated from: '<S1>/VeSRMC_b_SrvcBattReChrgFlSts'
     */
    (void)Rte_Write_VeSRMR_b_SrvcBattReChrgFlSts_Value
        ((VeSRMC_b_SrvcBattReChrgFiSts_Prev) || tmpRead_1l);

    /* Outport: '<Root>/VeSRMR_b_VehStndStillReq_OPD' incorporates:
     *  SignalConversion generated from: '<S1>/VeSRMC_b_VehStndStillReq_OPD'
     *  Switch: '<S161>/Switch1'
     */
    (void)Rte_Write_VeSRMR_b_VehStndStillReq_OPD_Value((!VeSRMC_b_DisableOPD) &&
        tmpRead_18);

    /* Switch: '<S255>/Switch1' incorporates:
     *  Switch: '<S252>/Switch1'
     */
    if (VeSRMC_b_APM_OperModeEnableFA)
    {
        /* Outport: '<Root>/VeSRMR_e_APM_OperModeEnable' incorporates:
         *  SignalConversion generated from: '<S1>/VeSRMC_e_APM_OperModeEnable'
         */
        (void)Rte_Write_VeSRMR_e_APM_OperModeEnable_Value
            (VeSRMC_e_APMMode_TiAStp);
    }
    else if (VeSRMC_b_APM_OperModeEnable_AStrtFA)
    {
        /* Outport: '<Root>/VeSRMR_e_APM_OperModeEnable' incorporates:
         *  SignalConversion generated from: '<S1>/VeSRMC_e_APM_OperModeEnable'
         *  Switch: '<S252>/Switch1'
         */
        (void)Rte_Write_VeSRMR_e_APM_OperModeEnable_Value(VeSRMC_e_APMMode_AStrt);
    }
    else
    {
        /* Outport: '<Root>/VeSRMR_e_APM_OperModeEnable' incorporates:
         *  DataTypeConversion: '<S1>/Data Type Conversion3'
         *  Inport: '<Root>/VeGENR_e_stModeReq'
         *  SignalConversion generated from: '<S1>/VeSRMC_e_APM_OperModeEnable'
         */
        (void)Rte_Write_VeSRMR_e_APM_OperModeEnable_Value((uint16)tmpRead_q);
    }

    /* End of Switch: '<S255>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeSRMR_e_CurrentGear' incorporates:
     *  SignalConversion generated from: '<S1>/VeSRMC_e_CurrentGear'
     */
    (void)Rte_Write_VeSRMR_e_CurrentGear_Value(VeSRMR_e_CurrentGear);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SRMC'
     */
    /* Outputs for Atomic SubSystem: '<S35>/LV2_Turn_On_Delay_Time' */
    /* Switch: '<S360>/Switch1' incorporates:
     *  Constant: '<S355>/Calib'
     *  Constant: '<S356>/Calib'
     *  DataTypeConversion: '<S1>/Data Type Conversion2'
     *  Inport: '<Root>/VeSRAR_e_EPB_Hold_Req'
     *  Logic: '<S358>/AND'
     *  Logic: '<S360>/AND1'
     *  RelationalOperator: '<S358>/GreaterThan'
     *  UnitDelay: '<S358>/Unit Delay1'
     */
    if ((VeSRMC_b_EPB_Hold_ReqFA) || ((VeSRMC_b_PpawlInsrtFailed) &&
            (SRMR_ac_DW.VeSRMC_t_PpawlInsrtFailureDtcd_prev >=
             KeSRMR_t_PpawlInsrtFailureOnDelay)))
    {
        VeSRMR_e_CurrentGear = KeSRMR_e_EPBHldRq;
    }
    else
    {
        VeSRMR_e_CurrentGear = (uint16)tmpRead_4;
    }

    /* End of Switch: '<S360>/Switch1' */
    /* End of Outputs for SubSystem: '<S35>/LV2_Turn_On_Delay_Time' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeSRMR_e_EPB_Hold_Req' incorporates:
     *  SignalConversion generated from: '<S1>/VeSRMC_e_EPB_Hold_Req'
     */
    (void)Rte_Write_VeSRMR_e_EPB_Hold_Req_Value(VeSRMR_e_CurrentGear);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SRMC'
     */
    /* Switch: '<S293>/Switch1' incorporates:
     *  Constant: '<S293>/RA_Default'
     *  DataTypeConversion: '<S1>/Data Type Conversion11'
     *  Inport: '<Root>/VeTRAR_e_EngCntrlMode'
     */
    if (VeSRMC_b_EngCntrlModeFA)
    {
        VeSRMR_e_CurrentGear = KeSRMR_e_EngCntrlMd;
    }
    else
    {
        VeSRMR_e_CurrentGear = (uint16)tmpRead_8;
    }

    /* End of Switch: '<S293>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeSRMR_e_EngCntrlMode' incorporates:
     *  SignalConversion generated from: '<S1>/VeSRMC_e_EngCntrlMode'
     */
    (void)Rte_Write_VeSRMR_e_EngCntrlMode_Value(VeSRMR_e_CurrentGear);

    /* Outport: '<Root>/VeSRMR_e_GRAR_WED_TargetSts' incorporates:
     *  SignalConversion generated from: '<S1>/VeSRMC_e_GRAR_WED_TargetSts'
     *  Switch: '<S49>/Switch'
     */
    (void)Rte_Write_VeSRMR_e_GRAR_WED_TargetSts_Value
        (VeSRMR_e_GRAR_WED_TargetSts);

    /* Outport: '<Root>/VeSRMR_e_GRAR_eAWD_TargetSts' incorporates:
     *  SignalConversion generated from: '<S1>/VeSRMC_e_GRAR_eAWD_TargetSts'
     *  Switch: '<S50>/Switch'
     */
    (void)Rte_Write_VeSRMR_e_GRAR_eAWD_TargetSts_Value
        (VeSRMR_e_GRAR_eAWD_TargetSts);

    /* Outport: '<Root>/VeSRMR_e_GRAR_eLOCK_TargetSts' incorporates:
     *  SignalConversion generated from: '<S1>/VeSRMC_e_GRAR_eLOCK_TargetSts'
     *  Switch: '<S51>/Switch'
     */
    (void)Rte_Write_VeSRMR_e_GRAR_eLOCK_TargetSts_Value
        (VeSRMR_e_GRAR_eLOCK_TargetSts);

    /* Outport: '<Root>/VeSRMR_e_GRAR_eLSD_TargetSts' incorporates:
     *  SignalConversion generated from: '<S1>/VeSRMC_e_GRAR_eLSD_TargetSts'
     *  Switch: '<S52>/Switch'
     */
    (void)Rte_Write_VeSRMR_e_GRAR_eLSD_TargetSts_Value
        (VeSRMR_e_GRAR_eLSD_TargetSts);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SRMC'
     */
    /* Switch: '<S368>/Switch1' */
    if (VeSRMC_b_HEV_ESS_ModeFA)
    {
        /* Outport: '<Root>/VeSRMR_e_HEV_ESS_Mode' incorporates:
         *  Constant: '<S368>/RA_Default'
         *  SignalConversion generated from: '<S1>/VeSRMC_e_HEV_ESS_Mode'
         */
        (void)Rte_Write_VeSRMR_e_HEV_ESS_Mode_Value(KeSRMR_e_HEV_ESS_Md);
    }
    else
    {
        /* Outport: '<Root>/VeSRMR_e_HEV_ESS_Mode' incorporates:
         *  SignalConversion generated from: '<S1>/VeSRMC_e_HEV_ESS_Mode'
         */
        (void)Rte_Write_VeSRMR_e_HEV_ESS_Mode_Value(VeSRMI_e_Lv2EngStrtStpMd);
    }

    /* End of Switch: '<S368>/Switch1' */

    /* Switch: '<S296>/Switch1' incorporates:
     *  Constant: '<S296>/RA_Default'
     *  DataTypeConversion: '<S1>/Data Type Conversion12'
     *  Inport: '<Root>/VeTRAR_e_HybCmndEngTorqRespTyp'
     */
    if (VeSRMC_b_HybCmndEngTorqRespTypFA)
    {
        VeSRMR_e_CurrentGear = KeSRMR_e_HybCmdEngTrqRespType;
    }
    else
    {
        VeSRMR_e_CurrentGear = (uint16)tmpRead_b;
    }

    /* End of Switch: '<S296>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeSRMR_e_HybCmndEngTorqRespTyp' incorporates:
     *  SignalConversion generated from: '<S1>/VeSRMC_e_HybCmndEngTorqRespTyp'
     */
    (void)Rte_Write_VeSRMR_e_HybCmndEngTorqRespTyp_Value(VeSRMR_e_CurrentGear);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SRMC'
     */
    /* Switch: '<S228>/Switch1' */
    if (VeSRMC_b_AHH_Flt)
    {
        /* Outport: '<Root>/VeSRMR_e_AHH_ApplyRelease_Req' incorporates:
         *  Constant: '<S232>/Calib'
         *  SignalConversion generated from: '<S1>/VeSRMC_e_Lv2AHH_ApplyRelease_Req'
         */
        (void)Rte_Write_VeSRMR_e_AHH_ApplyRelease_Req_Value
            (KeSRMR_e_OvrdAHHApplyReleaseReq);
    }
    else
    {
        /* Outport: '<Root>/VeSRMR_e_AHH_ApplyRelease_Req' incorporates:
         *  SignalConversion generated from: '<S1>/VeSRMC_e_Lv2AHH_ApplyRelease_Req'
         */
        (void)Rte_Write_VeSRMR_e_AHH_ApplyRelease_Req_Value
            (VeSRMI_e_Lv2Lv1AHH_ApplyRelease_Req);
    }

    /* End of Switch: '<S228>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeSRMR_e_MainHighVltCntctrCmd' incorporates:
     *  SignalConversion generated from: '<S1>/VeSRMC_e_MainHighVltCntctrCmd'
     *  UnitDelay: '<S30>/Unit Delay'
     */
    (void)Rte_Write_VeSRMR_e_MainHighVltCntctrCmd_Value
        (SRMR_ac_DW.VeSRMC_e_Lv2CntctrCmnd_Prev);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SRMC'
     */
    /* Switch: '<S397>/Switch1' incorporates:
     *  Constant: '<S395>/Calib'
     *  Switch: '<S383>/Switch1'
     *  Switch: '<S40>/Switch60'
     *  Switch: '<S97>/Switch1'
     */
    if (VeSRMC_b_MtrA_MdCmndFA)
    {
        rtb_TmpSignalConversionAtVeHTDR_e_MtrB_M = VeSRMC_e_MtrMdCmnd_MtrA;
    }
    else if (KeSRMR_b_MtrMdCmnd_Enable)
    {
        /* Switch: '<S40>/Switch60' incorporates:
         *  Merge: '<S415>/Merge'
         */
        rtb_TmpSignalConversionAtVeHTDR_e_MtrB_M = VeSRMC_e_MtrA_MdCmdLimd;
    }
    else
    {
        rtb_TmpSignalConversionAtVeHTDR_e_MtrB_M = VeSRMC_e_MtrA_MdCmnd_BSG;
    }

    /* End of Switch: '<S397>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeSRMR_e_MtrA_MdCmnd' incorporates:
     *  SignalConversion generated from: '<S1>/VeSRMC_e_MtrA_MdCmnd'
     */
    (void)Rte_Write_VeSRMR_e_MtrA_MdCmnd_Value
        (rtb_TmpSignalConversionAtVeHTDR_e_MtrB_M);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SRMC'
     */
    /* Switch: '<S400>/Switch1' incorporates:
     *  Switch: '<S40>/Switch3'
     *  Switch: '<S98>/Switch1'
     */
    if (VeSRMC_b_MtrB_MdCmndFA)
    {
        rtb_TmpSignalConversionAtVeHTDR_e_MtrB_M = VeSRMC_e_MtrMdCmnd_MtrB;
    }
    else
    {
        rtb_TmpSignalConversionAtVeHTDR_e_MtrB_M = VeSRMC_e_MtrB_MdCmndIntrm;
    }

    /* Outport: '<Root>/VeSRMR_e_MtrB_MdCmnd' incorporates:
     *  SignalConversion generated from: '<S1>/VeSRMC_e_MtrB_MdCmnd'
     *  Switch: '<S400>/Switch1'
     */
    (void)Rte_Write_VeSRMR_e_MtrB_MdCmnd_Value
        (rtb_TmpSignalConversionAtVeHTDR_e_MtrB_M);

    /* Switch: '<S354>/Switch1' incorporates:
     *  Constant: '<S350>/Constant'
     *  Constant: '<S351>/Constant'
     *  Constant: '<S352>/Constant'
     *  RelationalOperator: '<S35>/Comparison1'
     *  RelationalOperator: '<S35>/Comparison2'
     *  Switch: '<S354>/Switch2'
     *  Switch: '<S362>/Switch1'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeGRAR_e_ParkPa) ==
            CeGRAR_e_PP_Disengage)
    {
        rtb_TmpSignalConversionAtVeGRAR = CePPCR_e_Req_Disengage;
    }
    else if (((uint32)rtb_TmpSignalConversionAtVeGRAR_e_ParkPa) ==
             CeGRAR_e_PP_Engage)
    {
        /* Switch: '<S354>/Switch2' incorporates:
         *  Constant: '<S353>/Constant'
         */
        rtb_TmpSignalConversionAtVeGRAR = CePPCR_e_Req_Engage;
    }
    else
    {
        rtb_TmpSignalConversionAtVeGRAR = VeSRMC_e_PPawl_HW_EngageReqDlyd;
    }

    /* End of Switch: '<S354>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeSRMR_e_PPawl_Request' incorporates:
     *  SignalConversion generated from: '<S1>/VeSRMC_e_PPawl_Request'
     */
    (void)Rte_Write_VeSRMR_e_PPawl_Request_Value(rtb_TmpSignalConversionAtVeGRAR);

    /* Outport: '<Root>/VeSRMR_e_PRNDLReq' incorporates:
     *  SignalConversion generated from: '<S1>/VeSRMC_e_PRNDLReq'
     */
    (void)Rte_Write_VeSRMR_e_PRNDLReq_Value(VeSRMR_e_PRNDLReq);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SRMC'
     */
    /* Switch: '<S322>/Switch1' incorporates:
     *  Constant: '<S322>/RA_Default'
     *  DataTypeConversion: '<S1>/Data Type Conversion8'
     *  Inport: '<Root>/VeHMIR_e_ShifterPOS'
     */
    if (VeSRMC_b_ShifterPOSFA)
    {
        VeSRMR_e_CurrentGear = KeSRMR_e_ShftPos;
    }
    else
    {
        VeSRMR_e_CurrentGear = (uint16)tmpRead_7;
    }

    /* End of Switch: '<S322>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeSRMR_e_ShifterPOS' incorporates:
     *  SignalConversion generated from: '<S1>/VeSRMC_e_ShifterPOS'
     */
    (void)Rte_Write_VeSRMR_e_ShifterPOS_Value(VeSRMR_e_CurrentGear);

    /* Outport: '<Root>/VeSRMR_e_TargetGear' incorporates:
     *  SignalConversion generated from: '<S1>/VeSRMC_e_TargetGear'
     */
    (void)Rte_Write_VeSRMR_e_TargetGear_Value(rtb_DataTypeConversion4);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SRMC'
     */
    /* Switch: '<S573>/Switch1' incorporates:
     *  Constant: '<S572>/Calib'
     *  DataTypeConversion: '<S1>/Data Type Conversion10'
     *  Inport: '<Root>/VeHMIR_e_TransWarn2'
     */
    if (VeSRMC_b_TransWarn2FA)
    {
        VeSRMR_e_CurrentGear = KeSRMR_e_OvrdWarn2Val;
    }
    else
    {
        VeSRMR_e_CurrentGear = (uint16)tmpRead_5;
    }

    /* End of Switch: '<S573>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeSRMR_e_TransWarn2' incorporates:
     *  SignalConversion generated from: '<S1>/VeSRMC_e_TransWarn2'
     */
    (void)Rte_Write_VeSRMR_e_TransWarn2_Value(VeSRMR_e_CurrentGear);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SRMC'
     */
    /* Switch: '<S319>/Switch1' incorporates:
     *  DataTypeConversion: '<S314>/DataTypeConversion'
     */
    if (VeSRMC_b_VldtdTransShiftRngStFA)
    {
        /* Switch: '<S318>/Switch1' incorporates:
         *  Constant: '<S316>/Constant'
         *  Constant: '<S317>/Constant'
         *  DataTypeConversion: '<S314>/DataTypeConversion'
         *  RelationalOperator: '<S32>/Comparison1'
         */
        if (((uint32)rtb_TmpSignalConversionAtVeGRAR_e_PRND_R) ==
                CeGRAR_e_PRND_ReqP)
        {
            rtb_TmpSignalConversionAtVeTRGR_e_VldtdT = CeTRGR_e_TransRangePark;
        }
        else
        {
            rtb_TmpSignalConversionAtVeTRGR_e_VldtdT = (TeTRGR_e_TransRangeState)
                rtb_VeSRMC_e_VldtdTransShiftRngStTmp;
        }

        /* End of Switch: '<S318>/Switch1' */
    }
    else
    {
        rtb_TmpSignalConversionAtVeTRGR_e_VldtdT = (TeTRGR_e_TransRangeState)
            rtb_VeSRMC_e_VldtdTransShiftRngStTmp;
    }

    /* End of Switch: '<S319>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeSRMR_e_VldtdTransShiftRngSt' incorporates:
     *  SignalConversion generated from: '<S1>/VeSRMC_e_VldtdTransShiftRngSt'
     */
    (void)Rte_Write_VeSRMR_e_VldtdTransShiftRngSt_Value
        (rtb_TmpSignalConversionAtVeTRGR_e_VldtdT);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SRMC'
     */
    /* Switch: '<S210>/Switch59' */
    if (rtb_TmpSignalConversionAtVeEMMR_b_Lv2APM)
    {
        /* Outport: '<Root>/VeSRMR_e_stModeReq' incorporates:
         *  Constant: '<S218>/Calib'
         *  SignalConversion generated from: '<S1>/VeSRMC_e_stModeReq'
         */
        (void)Rte_Write_VeSRMR_e_stModeReq_Value(KeSRMR_e_StModeReq_idle);
    }
    else
    {
        /* Outport: '<Root>/VeSRMR_e_stModeReq' incorporates:
         *  DataTypeConversion: '<S1>/Data Type Conversion3'
         *  Inport: '<Root>/VeGENR_e_stModeReq'
         *  SignalConversion generated from: '<S1>/VeSRMC_e_stModeReq'
         */
        (void)Rte_Write_VeSRMR_e_stModeReq_Value((uint16)tmpRead_q);
    }

    /* End of Switch: '<S210>/Switch59' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeSRMR_n_BSGChrgIdleSpeedTarget' incorporates:
     *  SignalConversion generated from: '<S1>/VeSRMC_n_BSGChrgIdleSpeedTarget'
     */
    (void)Rte_Write_VeSRMR_n_BSGChrgIdleSpeedTarget_Value
        (VeSRMR_n_BSGChrgIdleSpeedTarget);

    /* Outport: '<Root>/VeSRMR_n_HCPMaxEngRPM' incorporates:
     *  SignalConversion generated from: '<S1>/VeSRMC_n_HCPMaxEngRPM'
     */
    (void)Rte_Write_VeSRMR_n_HCPMaxEngRPM_Value(VeSRMR_n_HCPMaxEngRPM);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SRMC'
     */
    /* Switch: '<S27>/Switch57' */
    if (rtb_TmpSignalConversionAtVeSTMR_b_DrvrIn)
    {
        /* Outport: '<Root>/VeSRMR_M_DrvrIntndedAxleTrq' incorporates:
         *  Constant: '<S240>/Calib'
         *  SignalConversion generated from: '<S1>/VeSRMR_M_DrvrIntndedAxleTrq'
         */
        (void)Rte_Write_VeSRMR_M_DrvrIntndedAxleTrq_Value
            (KeSRMR_M_DrvrIntndedAxleTrq);
    }
    else
    {
        /* Outport: '<Root>/VeSRMR_M_DrvrIntndedAxleTrq' incorporates:
         *  SignalConversion generated from: '<S1>/VeSRMR_M_DrvrIntndedAxleTrq'
         */
        (void)Rte_Write_VeSRMR_M_DrvrIntndedAxleTrq_Value(tmpRead_1f);
    }

    /* End of Switch: '<S27>/Switch57' */

    /* Switch: '<S578>/Switch1' */
    if (VeSRMC_b_RegenBrkAxTorqCapFrntFA)
    {
        /* Outport: '<Root>/VeSRMR_M_RegenBrkAxTorqCapFrnt' incorporates:
         *  Constant: '<S578>/RA_Default'
         *  SignalConversion generated from: '<S1>/VeSRMR_M_RegenBrkAxTorqCapFrnt'
         */
        (void)Rte_Write_VeSRMR_M_RegenBrkAxTorqCapFrnt_Value
            (KeSRMR_M_RegenBrkAxTorqCapFrnt);
    }
    else
    {
        /* Outport: '<Root>/VeSRMR_M_RegenBrkAxTorqCapFrnt' incorporates:
         *  SignalConversion generated from: '<S1>/VeSRMR_M_RegenBrkAxTorqCapFrnt'
         */
        (void)Rte_Write_VeSRMR_M_RegenBrkAxTorqCapFrnt_Value(tmpRead_1s);
    }

    /* End of Switch: '<S578>/Switch1' */

    /* Switch: '<S579>/Switch1' */
    if (VeSRMC_b_RegenBrkAxTorqCapRearFA)
    {
        /* Outport: '<Root>/VeSRMR_M_RegenBrkAxTorqCapRear' incorporates:
         *  Constant: '<S579>/RA_Default'
         *  SignalConversion generated from: '<S1>/VeSRMR_M_RegenBrkAxTorqCapRear'
         */
        (void)Rte_Write_VeSRMR_M_RegenBrkAxTorqCapRear_Value
            (KeSRMR_M_RegenBrkAxTorqCapRear);
    }
    else
    {
        /* Outport: '<Root>/VeSRMR_M_RegenBrkAxTorqCapRear' incorporates:
         *  SignalConversion generated from: '<S1>/VeSRMR_M_RegenBrkAxTorqCapRear'
         */
        (void)Rte_Write_VeSRMR_M_RegenBrkAxTorqCapRear_Value(tmpRead_1t);
    }

    /* End of Switch: '<S579>/Switch1' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SRMO_for_CAN'
     */
    /* Switch: '<S5>/SNA_Check' incorporates:
     *  Constant: '<S627>/Constant'
     *  Inport: '<Root>/VePSMR_e_Lv2PVSMode'
     *  RelationalOperator: '<S5>/Comparison'
     */
    if (((uint32)tmpRead_1u) == CePSMR_e_NotValid)
    {
        /* Outport: '<Root>/VeSRMR_Pct_Lv2AccelPdlPos' incorporates:
         *  Constant: '<S628>/Calib'
         *  SignalConversion generated from: '<S1>/VeSRMR_Pct_Lv2AccelPdlPos'
         */
        (void)Rte_Write_VeSRMR_Pct_Lv2AccelPdlPos_Value
            (KeSRMR_Pct_Lv2AccelPdlPosSNA);
    }
    else
    {
        /* Outport: '<Root>/VeSRMR_Pct_Lv2AccelPdlPos' incorporates:
         *  SignalConversion generated from: '<S1>/VeSRMR_Pct_Lv2AccelPdlPos'
         */
        (void)Rte_Write_VeSRMR_Pct_Lv2AccelPdlPos_Value
            (rtb_TmpSignalConversionAtVePSMR_Pct_Lv2A);
    }

    /* End of Switch: '<S5>/SNA_Check' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SRMC'
     */
    /* Switch: '<S27>/Switch9' */
    if (rtb_TmpSignalConversionAtVeSTMR_b_FrontA)
    {
        /* Outport: '<Root>/VeSRMR_b_ActualAxleTrqFA' incorporates:
         *  Constant: '<S243>/Calib'
         *  SignalConversion generated from: '<S1>/VeSRMR_b_ActualAxleTrqFA'
         */
        (void)Rte_Write_VeSRMR_b_ActualAxleTrqFA_Value
            (KeSRMR_b_ActualAxleTrqFA_SNA);
    }
    else
    {
        /* Outport: '<Root>/VeSRMR_b_ActualAxleTrqFA' incorporates:
         *  SignalConversion generated from: '<S1>/VeSRMR_b_ActualAxleTrqFA'
         */
        (void)Rte_Write_VeSRMR_b_ActualAxleTrqFA_Value(tmpRead_1b);
    }

    /* End of Switch: '<S27>/Switch9' */

    /* Outport: '<Root>/VeSRMR_b_DrvrIntndedAxleTrqFA' incorporates:
     *  SignalConversion generated from: '<S1>/VeSRMR_b_DrvrIntndedAxleTrqFA'
     *  Switch: '<S27>/Switch58'
     */
    (void)Rte_Write_VeSRMR_b_DrvrIntndedAxleTrqFA_Value
        (rtb_TmpSignalConversionAtVeSTMR_b_DrvrIn || tmpRead_1e);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeSRMR_b_MtrMdVldtnFltErr' incorporates:
     *  SignalConversion generated from: '<S1>/VeSRMR_b_MtrMdVldtnFltErr'
     */
    (void)Rte_Write_VeSRMR_b_MtrMdVldtnFltErr_Value(rtb_Edge_Failing);

    /* Outport: '<Root>/VeSRMR_e_LimitationMd' incorporates:
     *  SignalConversion generated from: '<S1>/VeSRMR_e_LimitationMd'
     *  Switch: '<S479>/Switch'
     */
    (void)Rte_Write_VeSRMR_e_LimitationMd_Value(SRMR_ac_B.Switch);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SRMO_for_CAN'
     */
    /* Outport: '<Root>/VeSRMR_b_VehSpdFA' incorporates:
     *  Inport: '<S5>/VeSSMR_b_VehSpdFA'
     *  SignalConversion generated from: '<S1>/VeSSMR_b_VehSpdFA_out'
     */
    (void)Rte_Write_VeSRMR_b_VehSpdFA_Value
        (rtb_TmpSignalConversionAtVeSSMR_b_VehSpd);

    /* Outport: '<Root>/VeSRMR_v_VehSpd' incorporates:
     *  Inport: '<S5>/VeSSMR_v_VehSpd'
     *  SignalConversion generated from: '<S1>/VeSSMR_v_VehSpd_out'
     */
    (void)Rte_Write_VeSRMR_v_VehSpd_Value
        (rtb_TmpSignalConversionAtVeSSMR_v_VehSpd);

    /* Outport: '<Root>/VeSRMR_M_SnsdEng_Flt' incorporates:
     *  Inport: '<S5>/VeTITR_M_SnsdEng_Flt'
     *  SignalConversion generated from: '<S1>/VeTITR_M_SnsdEng_Flt_out'
     */
    (void)Rte_Write_VeSRMR_M_SnsdEng_Flt_Value(tmpRead_d);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outputs for Atomic SubSystem: '<S1>/SRMR_MedTEB_StopCheckpoint' */
    /* FunctionCaller: '<S7>/SRMR_MedTEB_StopCheckpoint' */
    Rte_Call_SRMR_MedTEB_StopCheckpoint_CheckpointReached();

    /* End of Outputs for SubSystem: '<S1>/SRMR_MedTEB_StopCheckpoint' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Output function */
FUNC(void, SRMR_CODE) SRMR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/SRMR_PwrOn'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S629>/VeSRMR_M_ActualAxleTrq_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_M_ActualAxleTrq_O = 0.0F;

    /* SignalConversion generated from: '<S629>/VeSRMR_M_AeCoastTorqDiff_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_M_AeCoastTorqDiff = 0.0F;

    /* SignalConversion generated from: '<S629>/VeSRMR_M_BSGActualTorque_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_M_BSGActualTorque = 0.0F;

    /* SignalConversion generated from: '<S629>/VeSRMR_M_DrvrIntndedAxleTrq_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_M_DrvrIntndedAxle = 0.0F;

    /* SignalConversion generated from: '<S629>/VeSRMR_M_EngCLITerm_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_M_EngCLITerm_Out_ = 0.0F;

    /* SignalConversion generated from: '<S629>/VeSRMR_M_EngTrqCmndImmed_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_M_EngTrqCmndImmed = 0.0F;

    /* SignalConversion generated from: '<S629>/VeSRMR_M_EngTrqCmndPrdtd_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_M_EngTrqCmndPrdtd = 0.0F;

    /* SignalConversion generated from: '<S629>/VeSRMR_M_EstRegenBrkAxTorq_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_M_EstRegenBrkAxTo = 0.0F;

    /* SignalConversion generated from: '<S629>/VeSRMR_M_MaxAxleTrqCruise_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_M_MaxAxleTrqCruis = 0.0F;

    /* SignalConversion generated from: '<S629>/VeSRMR_M_MinAxleTrqCruise_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_M_MinAxleTrqCruis = 0.0F;

    /* SignalConversion generated from: '<S629>/VeSRMR_M_MtrA_TorqCmnd_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_M_MtrA_TorqCmnd_O = 0.0F;

    /* SignalConversion generated from: '<S629>/VeSRMR_M_MtrB_TorqCmnd_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_M_MtrB_TorqCmnd_O = 0.0F;

    /* SignalConversion generated from: '<S629>/VeSRMR_M_RegenBrkAxTorqCapFrnt_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_M_RegenBrkAxTorqC = 0.0F;

    /* SignalConversion generated from: '<S629>/VeSRMR_M_RegenBrkAxTorqCapRear_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_M_RegenBrkAxTor_g = 0.0F;

    /* SignalConversion generated from: '<S629>/VeSRMR_M_RegenBrkAxTorqCap_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_M_RegenBrkAxTor_o = 0.0F;

    /* SignalConversion generated from: '<S629>/VeSRMR_M_SnsdEng_Flt_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_M_SnsdEng_Flt_Out = 0.0F;

    /* SignalConversion generated from: '<S629>/VeSRMR_M_SplitFrntTrqReq_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_M_SplitFrntTrqReq = 0.0F;

    /* SignalConversion generated from: '<S629>/VeSRMR_M_SplitRearTrqReq_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_M_SplitRearTrqReq = 0.0F;

    /* SignalConversion generated from: '<S629>/VeSRMR_Pct_Lv2AccelPdlPos_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_Pct_Lv2AccelPdlPo = 0.0F;

    /* SignalConversion generated from: '<S629>/VeSRMR_U_APM_VdcLvSetP_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_U_APM_VdcLvSetP_O = 0.0F;

    /* SignalConversion generated from: '<S629>/VeSRMR_n_BSGChrgIdleSpeedTarget_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_n_BSGChrgIdleSpee = 0.0F;

    /* SignalConversion generated from: '<S629>/VeSRMR_n_HCPMaxEngRPM_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_n_HCPMaxEngRPM_Ou = 0.0F;

    /* SignalConversion generated from: '<S629>/VeSRMR_v_VehSpd_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_v_VehSpd_Init = 0.0F;

    /* SignalConversion generated from: '<S629>/VeSRMR_e_AHH_ApplyRelease_Req_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_e_AHH_ApplyReleas = 0U;

    /* SignalConversion generated from: '<S629>/VeSRMR_e_APM_OperModeEnable_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_e_APM_OperModeEna = 0U;

    /* SignalConversion generated from: '<S629>/VeSRMR_e_CurrentGear_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_e_CurrentGear_Out = 0U;

    /* SignalConversion generated from: '<S629>/VeSRMR_e_EPB_Hold_Req_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_e_EPB_Hold_Req_Ou = 0U;

    /* SignalConversion generated from: '<S629>/VeSRMR_e_EngCntrlMode_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_e_EngCntrlMode_Ou = 0U;

    /* SignalConversion generated from: '<S629>/VeSRMR_e_HEV_ESS_Mode_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_e_HEV_ESS_Mode_Ou = 0U;

    /* SignalConversion generated from: '<S629>/VeSRMR_e_HybCmndEngTorqRespTyp_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_e_HybCmndEngTorqR = 0U;

    /* SignalConversion generated from: '<S629>/VeSRMR_e_MainHighVltCntctrCmd_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_e_MainHighVltCntc = 0U;

    /* SignalConversion generated from: '<S629>/VeSRMR_e_PRNDLReq_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_e_PRNDLReq_Out_In = 0U;

    /* SignalConversion generated from: '<S629>/VeSRMR_e_ShifterPOS_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_e_ShifterPOS_Out_ = 0U;

    /* SignalConversion generated from: '<S629>/VeSRMR_e_TargetGear_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_e_TargetGear_Out_ = 0U;

    /* SignalConversion generated from: '<S629>/VeSRMR_e_TransWarn2_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_e_TransWarn2_Out_ = 0U;

    /* SignalConversion generated from: '<S629>/VeSRMR_e_stModeReq_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_e_stModeReq_Out_I = 0U;

    /* SignalConversion generated from: '<S629>/VeSRMR_b_AHH_ModifyAccel_Req_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_b_AHH_ModifyAccel = false;

    /* SignalConversion generated from: '<S629>/VeSRMR_b_APM_VdcLvSetP_FA_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_b_APM_VdcLvSetP_F = false;

    /* SignalConversion generated from: '<S629>/VeSRMR_b_ActualAxleTrqFA_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_b_ActualAxleTrqFA = false;

    /* SignalConversion generated from: '<S629>/VeSRMR_b_AeCoastTorqDiffActv_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_b_AeCoastTorqDiff = false;

    /* SignalConversion generated from: '<S629>/VeSRMR_b_BSGActualTorqueFA_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_b_BSGActualTorque = false;

    /* SignalConversion generated from: '<S629>/VeSRMR_b_BSGChrgIdleSpeedTargetFA_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_b_BSGChrgIdleSpee = false;

    /* SignalConversion generated from: '<S629>/VeSRMR_b_CrashDischarge_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_b_CrashDischarge_ = false;

    /* SignalConversion generated from: '<S629>/VeSRMR_b_DrvrIntndedAxleTrqFA_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_b_DrvrIntndedAxle = false;

    /* SignalConversion generated from: '<S629>/VeSRMR_b_EngDFCOReq_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_b_EngDFCOReq_Out_ = false;

    /* SignalConversion generated from: '<S629>/VeSRMR_b_EstRegenBrkAxTorqFA_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_b_EstRegenBrkAxTo = false;

    /* SignalConversion generated from: '<S629>/VeSRMR_b_GatedParkSw_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_b_GatedParkSw_Out = false;

    /* SignalConversion generated from: '<S629>/VeSRMR_b_HCPMaxEngRPMFA_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_b_HCPMaxEngRPMFA_ = false;

    /* SignalConversion generated from: '<S629>/VeSRMR_b_HybFeedback_ECM_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_b_HybFeedback_ECM = false;

    /* SignalConversion generated from: '<S629>/VeSRMR_b_Lv2AccelPdlPosFlt_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_b_Lv2AccelPdlPosF = false;

    /* SignalConversion generated from: '<S629>/VeSRMR_b_MtrMdVldtnFltErr_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_b_MtrMdVldtnFltEr = false;

    /* SignalConversion generated from: '<S629>/VeSRMR_b_Popup_Msg15_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_b_Popup_Msg15_Out = false;

    /* SignalConversion generated from: '<S629>/VeSRMR_b_Popup_Msg9_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_b_Popup_Msg9_Out_ = false;

    /* SignalConversion generated from: '<S629>/VeSRMR_b_RegenBrkAxTorqCapFA_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_b_RegenBrkAxTorqC = false;

    /* SignalConversion generated from: '<S629>/VeSRMR_b_SnsdTi_notVld_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_b_SnsdTi_notVld_O = false;

    /* SignalConversion generated from: '<S629>/VeSRMR_b_SrvcBattReChrgFlSts_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_b_SrvcBattReChrgF = false;

    /* SignalConversion generated from: '<S629>/VeSRMR_b_VehSpdFA_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_b_VehSpdFA_Init = false;

    /* SignalConversion generated from: '<S629>/VeSRMR_b_VehStndStillReq_OPD_Out_Init' */
    SRMR_ac_B.OutportBufferForVeSRMR_b_VehStndStillReq = false;

    /* SignalConversion generated from: '<S629>/VeSRMR_e_MtrA_MdCmnd_Out_Init' incorporates:
     *  Constant: '<S630>/Constant'
     */
    SRMR_ac_B.OutportBufferForVeSRMR_e_MtrA_MdCmnd_Out =
        SRMR_ac_ConstB.Constant_k;

    /* SignalConversion generated from: '<S629>/VeSRMR_e_MtrB_MdCmnd_Out_Init' incorporates:
     *  Constant: '<S630>/Constant'
     */
    SRMR_ac_B.OutportBufferForVeSRMR_e_MtrB_MdCmnd_Out =
        SRMR_ac_ConstB.Constant_k;

    /* SignalConversion generated from: '<S629>/VeSRMR_e_VldtdTransShiftRngSt_Out_Init' incorporates:
     *  Constant: '<S637>/Constant'
     */
    SRMR_ac_B.OutportBufferForVeSRMR_e_VldtdTransShift = SRMR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S629>/VeSRMR_e_GRAR_eAWD_TargetSts_Init' incorporates:
     *  Constant: '<S635>/Constant'
     */
    SRMR_ac_B.OutportBufferForVeSRMR_e_GRAR_eAWD_Targe =
        SRMR_ac_ConstB.Constant_f0;

    /* SignalConversion generated from: '<S629>/VeSRMR_e_GRAR_WED_TargetSts_Init' incorporates:
     *  Constant: '<S631>/Constant'
     */
    SRMR_ac_B.OutportBufferForVeSRMR_e_GRAR_WED_Target =
        SRMR_ac_ConstB.Constant_g;

    /* SignalConversion generated from: '<S629>/VeSRMR_e_GRAR_eLOCK_TargetSts_Init' incorporates:
     *  Constant: '<S632>/Constant'
     */
    SRMR_ac_B.OutportBufferForVeSRMR_e_GRAR_eLOCK_Targ =
        SRMR_ac_ConstB.Constant_m;

    /* SignalConversion generated from: '<S629>/VeSRMR_e_GRAR_eLSD_TargetSts_Init' incorporates:
     *  Constant: '<S633>/Constant'
     */
    SRMR_ac_B.OutportBufferForVeSRMR_e_GRAR_eLSD_Targe =
        SRMR_ac_ConstB.Constant_n;

    /* SignalConversion generated from: '<S629>/VeSRMR_e_LimitationMd_Init' incorporates:
     *  Constant: '<S634>/Constant'
     */
    SRMR_ac_B.OutportBufferForVeSRMR_e_LimitationMd_In =
        SRMR_ac_ConstB.Constant_f;

    /* SignalConversion generated from: '<S629>/VeSRMR_e_PPawl_Request_Init' incorporates:
     *  Constant: '<S636>/Constant'
     */
    SRMR_ac_B.OutportBufferForVeSRMR_e_PPawl_Request_I =
        SRMR_ac_ConstB.Constant_c;

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeSRMR_M_ActualAxleTrq' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_M_ActualAxleTrq_Out_Init'
     */
    (void)Rte_Write_VeSRMR_M_ActualAxleTrq_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_M_ActualAxleTrq_O);

    /* Outport: '<Root>/VeSRMR_M_AeCoastTorqDiff' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_M_AeCoastTorqDiff_Out_Init'
     */
    (void)Rte_Write_VeSRMR_M_AeCoastTorqDiff_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_M_AeCoastTorqDiff);

    /* Outport: '<Root>/VeSRMR_M_BSGActualTorque' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_M_BSGActualTorque_Out_Init'
     */
    (void)Rte_Write_VeSRMR_M_BSGActualTorque_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_M_BSGActualTorque);

    /* Outport: '<Root>/VeSRMR_M_DrvrIntndedAxleTrq' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_M_DrvrIntndedAxleTrq_Out_Init'
     */
    (void)Rte_Write_VeSRMR_M_DrvrIntndedAxleTrq_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_M_DrvrIntndedAxle);

    /* Outport: '<Root>/VeSRMR_M_EngCLITerm' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_M_EngCLITerm_Out_Init'
     */
    (void)Rte_Write_VeSRMR_M_EngCLITerm_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_M_EngCLITerm_Out_);

    /* Outport: '<Root>/VeSRMR_M_EngTrqCmndImmed' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_M_EngTrqCmndImmed_Out_Init'
     */
    (void)Rte_Write_VeSRMR_M_EngTrqCmndImmed_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_M_EngTrqCmndImmed);

    /* Outport: '<Root>/VeSRMR_M_EngTrqCmndPrdtd' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_M_EngTrqCmndPrdtd_Out_Init'
     */
    (void)Rte_Write_VeSRMR_M_EngTrqCmndPrdtd_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_M_EngTrqCmndPrdtd);

    /* Outport: '<Root>/VeSRMR_M_EstRegenBrkAxTorq' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_M_EstRegenBrkAxTorq_Out_Init'
     */
    (void)Rte_Write_VeSRMR_M_EstRegenBrkAxTorq_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_M_EstRegenBrkAxTo);

    /* Outport: '<Root>/VeSRMR_M_MaxAxleTrqCruise' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_M_MaxAxleTrqCruise_Out_Init'
     */
    (void)Rte_Write_VeSRMR_M_MaxAxleTrqCruise_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_M_MaxAxleTrqCruis);

    /* Outport: '<Root>/VeSRMR_M_MinAxleTrqCruise' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_M_MinAxleTrqCruise_Out_Init'
     */
    (void)Rte_Write_VeSRMR_M_MinAxleTrqCruise_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_M_MinAxleTrqCruis);

    /* Outport: '<Root>/VeSRMR_M_MtrA_TorqCmnd' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_M_MtrA_TorqCmnd_Out_Init'
     */
    (void)Rte_Write_VeSRMR_M_MtrA_TorqCmnd_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_M_MtrA_TorqCmnd_O);

    /* Outport: '<Root>/VeSRMR_M_MtrB_TorqCmnd' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_M_MtrB_TorqCmnd_Out_Init'
     */
    (void)Rte_Write_VeSRMR_M_MtrB_TorqCmnd_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_M_MtrB_TorqCmnd_O);

    /* Outport: '<Root>/VeSRMR_M_RegenBrkAxTorqCapFrnt' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_M_RegenBrkAxTorqCapFrnt_Init'
     */
    (void)Rte_Write_VeSRMR_M_RegenBrkAxTorqCapFrnt_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_M_RegenBrkAxTorqC);

    /* Outport: '<Root>/VeSRMR_M_RegenBrkAxTorqCapRear' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_M_RegenBrkAxTorqCapRear_Init'
     */
    (void)Rte_Write_VeSRMR_M_RegenBrkAxTorqCapRear_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_M_RegenBrkAxTor_g);

    /* Outport: '<Root>/VeSRMR_M_RegenBrkAxTorqCap' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_M_RegenBrkAxTorqCap_Out_Init'
     */
    (void)Rte_Write_VeSRMR_M_RegenBrkAxTorqCap_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_M_RegenBrkAxTor_o);

    /* Outport: '<Root>/VeSRMR_M_SnsdEng_Flt' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_M_SnsdEng_Flt_Out_Init'
     */
    (void)Rte_Write_VeSRMR_M_SnsdEng_Flt_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_M_SnsdEng_Flt_Out);

    /* Outport: '<Root>/VeSRMR_M_SplitFrntTrqReq' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_M_SplitFrntTrqReq_Out_Init'
     */
    (void)Rte_Write_VeSRMR_M_SplitFrntTrqReq_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_M_SplitFrntTrqReq);

    /* Outport: '<Root>/VeSRMR_M_SplitRearTrqReq' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_M_SplitRearTrqReq_Out_Init'
     */
    (void)Rte_Write_VeSRMR_M_SplitRearTrqReq_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_M_SplitRearTrqReq);

    /* Outport: '<Root>/VeSRMR_Pct_Lv2AccelPdlPos' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_Pct_Lv2AccelPdlPos_Out_Init'
     */
    (void)Rte_Write_VeSRMR_Pct_Lv2AccelPdlPos_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_Pct_Lv2AccelPdlPo);

    /* Outport: '<Root>/VeSRMR_U_APM_VdcLvSetP' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_U_APM_VdcLvSetP_Out_Init'
     */
    (void)Rte_Write_VeSRMR_U_APM_VdcLvSetP_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_U_APM_VdcLvSetP_O);

    /* Outport: '<Root>/VeSRMR_b_AHH_ModifyAccel_Req' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_b_AHH_ModifyAccel_Req_Out_Init'
     */
    (void)Rte_Write_VeSRMR_b_AHH_ModifyAccel_Req_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_b_AHH_ModifyAccel);

    /* Outport: '<Root>/VeSRMR_b_APM_VdcLvSetP_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_b_APM_VdcLvSetP_FA_Out_Init'
     */
    (void)Rte_Write_VeSRMR_b_APM_VdcLvSetP_FA_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_b_APM_VdcLvSetP_F);

    /* Outport: '<Root>/VeSRMR_b_ActualAxleTrqFA' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_b_ActualAxleTrqFA_Out_Init'
     */
    (void)Rte_Write_VeSRMR_b_ActualAxleTrqFA_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_b_ActualAxleTrqFA);

    /* Outport: '<Root>/VeSRMR_b_AeCoastTorqDiffActv' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_b_AeCoastTorqDiffActv_Out_Init'
     */
    (void)Rte_Write_VeSRMR_b_AeCoastTorqDiffActv_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_b_AeCoastTorqDiff);

    /* Outport: '<Root>/VeSRMR_b_BSGActualTorqueFA' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_b_BSGActualTorqueFA_Out_Init'
     */
    (void)Rte_Write_VeSRMR_b_BSGActualTorqueFA_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_b_BSGActualTorque);

    /* Outport: '<Root>/VeSRMR_b_BSGChrgIdleSpeedTargetFA' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_b_BSGChrgIdleSpeedTargetFA_Out_Init'
     */
    (void)Rte_Write_VeSRMR_b_BSGChrgIdleSpeedTargetFA_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_b_BSGChrgIdleSpee);

    /* Outport: '<Root>/VeSRMR_b_CrashDischarge' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_b_CrashDischarge_Out_Init'
     */
    (void)Rte_Write_VeSRMR_b_CrashDischarge_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_b_CrashDischarge_);

    /* Outport: '<Root>/VeSRMR_b_DrvrIntndedAxleTrqFA' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_b_DrvrIntndedAxleTrqFA_Out_Init'
     */
    (void)Rte_Write_VeSRMR_b_DrvrIntndedAxleTrqFA_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_b_DrvrIntndedAxle);

    /* Outport: '<Root>/VeSRMR_b_EngDFCOReq' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_b_EngDFCOReq_Out_Init'
     */
    (void)Rte_Write_VeSRMR_b_EngDFCOReq_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_b_EngDFCOReq_Out_);

    /* Outport: '<Root>/VeSRMR_b_EstRegenBrkAxTorqFA' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_b_EstRegenBrkAxTorqFA_Out_Init'
     */
    (void)Rte_Write_VeSRMR_b_EstRegenBrkAxTorqFA_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_b_EstRegenBrkAxTo);

    /* Outport: '<Root>/VeSRMR_b_GatedParkSw' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_b_GatedParkSw_Out_Init'
     */
    (void)Rte_Write_VeSRMR_b_GatedParkSw_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_b_GatedParkSw_Out);

    /* Outport: '<Root>/VeSRMR_b_HCPMaxEngRPMFA' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_b_HCPMaxEngRPMFA_Out_Init'
     */
    (void)Rte_Write_VeSRMR_b_HCPMaxEngRPMFA_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_b_HCPMaxEngRPMFA_);

    /* Outport: '<Root>/VeSRMR_b_HybFeedback_ECM' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_b_HybFeedback_ECM_Out_Init'
     */
    (void)Rte_Write_VeSRMR_b_HybFeedback_ECM_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_b_HybFeedback_ECM);

    /* Outport: '<Root>/VeSRMR_b_Lv2AccelPdlPosFlt' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_b_Lv2AccelPdlPosFlt_Out_Init'
     */
    (void)Rte_Write_VeSRMR_b_Lv2AccelPdlPosFlt_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_b_Lv2AccelPdlPosF);

    /* Outport: '<Root>/VeSRMR_b_MtrMdVldtnFltErr' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_b_MtrMdVldtnFltErr_Init'
     */
    (void)Rte_Write_VeSRMR_b_MtrMdVldtnFltErr_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_b_MtrMdVldtnFltEr);

    /* Outport: '<Root>/VeSRMR_b_Popup_Msg15' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_b_Popup_Msg15_Out_Init'
     */
    (void)Rte_Write_VeSRMR_b_Popup_Msg15_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_b_Popup_Msg15_Out);

    /* Outport: '<Root>/VeSRMR_b_Popup_Msg9' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_b_Popup_Msg9_Out_Init'
     */
    (void)Rte_Write_VeSRMR_b_Popup_Msg9_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_b_Popup_Msg9_Out_);

    /* Outport: '<Root>/VeSRMR_b_RegenBrkAxTorqCapFA' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_b_RegenBrkAxTorqCapFA_Out_Init'
     */
    (void)Rte_Write_VeSRMR_b_RegenBrkAxTorqCapFA_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_b_RegenBrkAxTorqC);

    /* Outport: '<Root>/VeSRMR_b_SnsdTi_notVld' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_b_SnsdTi_notVld_Out_Init'
     */
    (void)Rte_Write_VeSRMR_b_SnsdTi_notVld_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_b_SnsdTi_notVld_O);

    /* Outport: '<Root>/VeSRMR_b_SrvcBattReChrgFlSts' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_b_SrvcBattReChrgFlSts_Out_Init'
     */
    (void)Rte_Write_VeSRMR_b_SrvcBattReChrgFlSts_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_b_SrvcBattReChrgF);

    /* Outport: '<Root>/VeSRMR_b_VehSpdFA' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_b_VehSpdFA_Init'
     */
    (void)Rte_Write_VeSRMR_b_VehSpdFA_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_b_VehSpdFA_Init);

    /* Outport: '<Root>/VeSRMR_b_VehStndStillReq_OPD' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_b_VehStndStillReq_OPD_Out_Init'
     */
    (void)Rte_Write_VeSRMR_b_VehStndStillReq_OPD_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_b_VehStndStillReq);

    /* Outport: '<Root>/VeSRMR_e_AHH_ApplyRelease_Req' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_e_AHH_ApplyRelease_Req_Out_Init'
     */
    (void)Rte_Write_VeSRMR_e_AHH_ApplyRelease_Req_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_e_AHH_ApplyReleas);

    /* Outport: '<Root>/VeSRMR_e_APM_OperModeEnable' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_e_APM_OperModeEnable_Out_Init'
     */
    (void)Rte_Write_VeSRMR_e_APM_OperModeEnable_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_e_APM_OperModeEna);

    /* Outport: '<Root>/VeSRMR_e_CurrentGear' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_e_CurrentGear_Out_Init'
     */
    (void)Rte_Write_VeSRMR_e_CurrentGear_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_e_CurrentGear_Out);

    /* Outport: '<Root>/VeSRMR_e_EPB_Hold_Req' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_e_EPB_Hold_Req_Out_Init'
     */
    (void)Rte_Write_VeSRMR_e_EPB_Hold_Req_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_e_EPB_Hold_Req_Ou);

    /* Outport: '<Root>/VeSRMR_e_EngCntrlMode' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_e_EngCntrlMode_Out_Init'
     */
    (void)Rte_Write_VeSRMR_e_EngCntrlMode_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_e_EngCntrlMode_Ou);

    /* Outport: '<Root>/VeSRMR_e_GRAR_WED_TargetSts' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_e_GRAR_WED_TargetSts_Init'
     *  SignalConversion generated from: '<S629>/VeSRMR_e_GRAR_WED_TargetSts_Init'
     */
    (void)Rte_Write_VeSRMR_e_GRAR_WED_TargetSts_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_e_GRAR_WED_Target);

    /* Outport: '<Root>/VeSRMR_e_GRAR_eAWD_TargetSts' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_e_GRAR_eAWD_TargetSts_Init'
     *  SignalConversion generated from: '<S629>/VeSRMR_e_GRAR_eAWD_TargetSts_Init'
     */
    (void)Rte_Write_VeSRMR_e_GRAR_eAWD_TargetSts_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_e_GRAR_eAWD_Targe);

    /* Outport: '<Root>/VeSRMR_e_GRAR_eLOCK_TargetSts' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_e_GRAR_eLOCK_TargetSts_Init'
     *  SignalConversion generated from: '<S629>/VeSRMR_e_GRAR_eLOCK_TargetSts_Init'
     */
    (void)Rte_Write_VeSRMR_e_GRAR_eLOCK_TargetSts_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_e_GRAR_eLOCK_Targ);

    /* Outport: '<Root>/VeSRMR_e_GRAR_eLSD_TargetSts' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_e_GRAR_eLSD_TargetSts_Init'
     *  SignalConversion generated from: '<S629>/VeSRMR_e_GRAR_eLSD_TargetSts_Init'
     */
    (void)Rte_Write_VeSRMR_e_GRAR_eLSD_TargetSts_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_e_GRAR_eLSD_Targe);

    /* Outport: '<Root>/VeSRMR_e_HEV_ESS_Mode' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_e_HEV_ESS_Mode_Out_Init'
     */
    (void)Rte_Write_VeSRMR_e_HEV_ESS_Mode_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_e_HEV_ESS_Mode_Ou);

    /* Outport: '<Root>/VeSRMR_e_HybCmndEngTorqRespTyp' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_e_HybCmndEngTorqRespTyp_Out_Init'
     */
    (void)Rte_Write_VeSRMR_e_HybCmndEngTorqRespTyp_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_e_HybCmndEngTorqR);

    /* Outport: '<Root>/VeSRMR_e_LimitationMd' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_e_LimitationMd_Init'
     *  SignalConversion generated from: '<S629>/VeSRMR_e_LimitationMd_Init'
     */
    (void)Rte_Write_VeSRMR_e_LimitationMd_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_e_LimitationMd_In);

    /* Outport: '<Root>/VeSRMR_e_MainHighVltCntctrCmd' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_e_MainHighVltCntctrCmd_Out_Init'
     */
    (void)Rte_Write_VeSRMR_e_MainHighVltCntctrCmd_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_e_MainHighVltCntc);

    /* Outport: '<Root>/VeSRMR_e_MtrA_MdCmnd' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_e_MtrA_MdCmnd_Out_Init'
     *  SignalConversion generated from: '<S629>/VeSRMR_e_MtrA_MdCmnd_Out_Init'
     */
    (void)Rte_Write_VeSRMR_e_MtrA_MdCmnd_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_e_MtrA_MdCmnd_Out);

    /* Outport: '<Root>/VeSRMR_e_MtrB_MdCmnd' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_e_MtrB_MdCmnd_Out_Init'
     *  SignalConversion generated from: '<S629>/VeSRMR_e_MtrB_MdCmnd_Out_Init'
     */
    (void)Rte_Write_VeSRMR_e_MtrB_MdCmnd_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_e_MtrB_MdCmnd_Out);

    /* Outport: '<Root>/VeSRMR_e_PPawl_Request' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_e_PPawl_Request_Init'
     *  SignalConversion generated from: '<S629>/VeSRMR_e_PPawl_Request_Init'
     */
    (void)Rte_Write_VeSRMR_e_PPawl_Request_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_e_PPawl_Request_I);

    /* Outport: '<Root>/VeSRMR_e_PRNDLReq' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_e_PRNDLReq_Out_Init'
     */
    (void)Rte_Write_VeSRMR_e_PRNDLReq_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_e_PRNDLReq_Out_In);

    /* Outport: '<Root>/VeSRMR_e_ShifterPOS' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_e_ShifterPOS_Out_Init'
     */
    (void)Rte_Write_VeSRMR_e_ShifterPOS_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_e_ShifterPOS_Out_);

    /* Outport: '<Root>/VeSRMR_e_TargetGear' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_e_TargetGear_Out_Init'
     */
    (void)Rte_Write_VeSRMR_e_TargetGear_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_e_TargetGear_Out_);

    /* Outport: '<Root>/VeSRMR_e_TransWarn2' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_e_TransWarn2_Out_Init'
     */
    (void)Rte_Write_VeSRMR_e_TransWarn2_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_e_TransWarn2_Out_);

    /* Outport: '<Root>/VeSRMR_e_VldtdTransShiftRngSt' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_e_VldtdTransShiftRngSt_Out_Init'
     *  SignalConversion generated from: '<S629>/VeSRMR_e_VldtdTransShiftRngSt_Out_Init'
     */
    (void)Rte_Write_VeSRMR_e_VldtdTransShiftRngSt_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_e_VldtdTransShift);

    /* Outport: '<Root>/VeSRMR_e_stModeReq' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_e_stModeReq_Out_Init'
     */
    (void)Rte_Write_VeSRMR_e_stModeReq_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_e_stModeReq_Out_I);

    /* Outport: '<Root>/VeSRMR_n_BSGChrgIdleSpeedTarget' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_n_BSGChrgIdleSpeedTarget_Out_Init'
     */
    (void)Rte_Write_VeSRMR_n_BSGChrgIdleSpeedTarget_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_n_BSGChrgIdleSpee);

    /* Outport: '<Root>/VeSRMR_n_HCPMaxEngRPM' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_n_HCPMaxEngRPM_Out_Init'
     */
    (void)Rte_Write_VeSRMR_n_HCPMaxEngRPM_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_n_HCPMaxEngRPM_Ou);

    /* Outport: '<Root>/VeSRMR_v_VehSpd' incorporates:
     *  SignalConversion generated from: '<S2>/VeSRMR_v_VehSpd_Init'
     */
    (void)Rte_Write_VeSRMR_v_VehSpd_Value
        (SRMR_ac_B.OutportBufferForVeSRMR_v_VehSpd_Init);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, SRMR_CODE) SRMR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */
    {
        SRMR_ac_B.OutportBufferForVeSRMR_e_GRAR_eAWD_Targe =
            CeSRMR_e_TargetSts_DiagOff;
        SRMR_ac_B.OutportBufferForVeSRMR_e_GRAR_WED_Target =
            CeSRMR_e_TargetSts_DiagOff;
        SRMR_ac_B.OutportBufferForVeSRMR_e_GRAR_eLOCK_Targ =
            CeSRMR_e_TargetSts_DiagOff;
        SRMR_ac_B.OutportBufferForVeSRMR_e_GRAR_eLSD_Targe =
            CeSRMR_e_TargetSts_DiagOff;
    }

    /* custom signals */
    VeSRMC_e_GRAR_Action = CeSRMR_e_GRAR_DiagOff;
    VeSRMC_e_Lv2KeySts = CeLTIR_e_IGN_LK;

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/SRMR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S629>/VeSRMR_e_MtrA_MdCmnd_Out_Init' incorporates:
     *  Constant: '<S630>/Constant'
     */
    SRMR_ac_B.OutportBufferForVeSRMR_e_MtrA_MdCmnd_Out =
        SRMR_ac_ConstB.Constant_k;

    /* SystemInitialize for SignalConversion generated from: '<S629>/VeSRMR_e_MtrB_MdCmnd_Out_Init' incorporates:
     *  Constant: '<S630>/Constant'
     */
    SRMR_ac_B.OutportBufferForVeSRMR_e_MtrB_MdCmnd_Out =
        SRMR_ac_ConstB.Constant_k;

    /* SystemInitialize for SignalConversion generated from: '<S629>/VeSRMR_e_VldtdTransShiftRngSt_Out_Init' incorporates:
     *  Constant: '<S637>/Constant'
     */
    SRMR_ac_B.OutportBufferForVeSRMR_e_VldtdTransShift = SRMR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S629>/VeSRMR_e_GRAR_eAWD_TargetSts_Init' incorporates:
     *  Constant: '<S635>/Constant'
     */
    SRMR_ac_B.OutportBufferForVeSRMR_e_GRAR_eAWD_Targe =
        SRMR_ac_ConstB.Constant_f0;

    /* SystemInitialize for SignalConversion generated from: '<S629>/VeSRMR_e_GRAR_WED_TargetSts_Init' incorporates:
     *  Constant: '<S631>/Constant'
     */
    SRMR_ac_B.OutportBufferForVeSRMR_e_GRAR_WED_Target =
        SRMR_ac_ConstB.Constant_g;

    /* SystemInitialize for SignalConversion generated from: '<S629>/VeSRMR_e_GRAR_eLOCK_TargetSts_Init' incorporates:
     *  Constant: '<S632>/Constant'
     */
    SRMR_ac_B.OutportBufferForVeSRMR_e_GRAR_eLOCK_Targ =
        SRMR_ac_ConstB.Constant_m;

    /* SystemInitialize for SignalConversion generated from: '<S629>/VeSRMR_e_GRAR_eLSD_TargetSts_Init' incorporates:
     *  Constant: '<S633>/Constant'
     */
    SRMR_ac_B.OutportBufferForVeSRMR_e_GRAR_eLSD_Targe =
        SRMR_ac_ConstB.Constant_n;

    /* SystemInitialize for SignalConversion generated from: '<S629>/VeSRMR_e_LimitationMd_Init' incorporates:
     *  Constant: '<S634>/Constant'
     */
    SRMR_ac_B.OutportBufferForVeSRMR_e_LimitationMd_In =
        SRMR_ac_ConstB.Constant_f;

    /* SystemInitialize for SignalConversion generated from: '<S629>/VeSRMR_e_PPawl_Request_Init' incorporates:
     *  Constant: '<S636>/Constant'
     */
    SRMR_ac_B.OutportBufferForVeSRMR_e_PPawl_Request_I =
        SRMR_ac_ConstB.Constant_c;

    /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Outport: '<Root>/VeSRMR_e_MtrA_MdCmnd' incorporates:
     *  Merge: '<Root>/Merge_Outport_14'
     */
    (void)Rte_Write_VeSRMR_e_MtrA_MdCmnd_Value(CeHTDR_e_DsblNoSwitch);

    /* SystemInitialize for Outport: '<Root>/VeSRMR_e_MtrB_MdCmnd' incorporates:
     *  Merge: '<Root>/Merge_Outport_17'
     */
    (void)Rte_Write_VeSRMR_e_MtrB_MdCmnd_Value(CeHTDR_e_DsblNoSwitch);

    /* SystemInitialize for Outport: '<Root>/VeSRMR_e_VldtdTransShiftRngSt' incorporates:
     *  Merge: '<Root>/Merge_Outport_24'
     */
    (void)Rte_Write_VeSRMR_e_VldtdTransShiftRngSt_Value
        (CeTRGR_e_NoSelectionAvailable);

    /* SystemInitialize for Outport: '<Root>/VeSRMR_e_GRAR_eAWD_TargetSts' incorporates:
     *  Merge: '<Root>/Merge_Outport_57'
     */
    (void)Rte_Write_VeSRMR_e_GRAR_eAWD_TargetSts_Value
        (CeSRMR_e_TargetSts_DiagOff);

    /* SystemInitialize for Outport: '<Root>/VeSRMR_e_GRAR_WED_TargetSts' incorporates:
     *  Merge: '<Root>/Merge_Outport_58'
     */
    (void)Rte_Write_VeSRMR_e_GRAR_WED_TargetSts_Value(CeSRMR_e_TargetSts_DiagOff);

    /* SystemInitialize for Outport: '<Root>/VeSRMR_e_GRAR_eLOCK_TargetSts' incorporates:
     *  Merge: '<Root>/Merge_Outport_59'
     */
    (void)Rte_Write_VeSRMR_e_GRAR_eLOCK_TargetSts_Value
        (CeSRMR_e_TargetSts_DiagOff);

    /* SystemInitialize for Outport: '<Root>/VeSRMR_e_GRAR_eLSD_TargetSts' incorporates:
     *  Merge: '<Root>/Merge_Outport_60'
     */
    (void)Rte_Write_VeSRMR_e_GRAR_eLSD_TargetSts_Value
        (CeSRMR_e_TargetSts_DiagOff);

    /* SystemInitialize for Outport: '<Root>/VeSRMR_e_LimitationMd' incorporates:
     *  Merge: '<Root>/Merge_Outport_61'
     */
    (void)Rte_Write_VeSRMR_e_LimitationMd_Value(CeSRMR_e_NoLimitation);

    /* SystemInitialize for Outport: '<Root>/VeSRMR_e_PPawl_Request' incorporates:
     *  Merge: '<Root>/Merge_Outport_65'
     */
    (void)Rte_Write_VeSRMR_e_PPawl_Request_Value(CePPCR_e_Req_No_Req);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
