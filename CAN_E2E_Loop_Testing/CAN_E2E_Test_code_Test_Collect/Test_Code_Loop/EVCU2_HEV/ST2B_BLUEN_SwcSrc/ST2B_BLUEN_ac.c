/*
 * File: ST2B_BLUEN_ac.c
 *
 * Code generated for Simulink model 'ST2B_BLUEN_ac'.
 *
 * Model version                  : 1.220
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 18:53:38 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ST2B_BLUEN_ac.h"
#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFFFFFU) ) || ( INT_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( ULONG_MAX != (0xFFFFFFFFU) ) || ( LONG_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized ulong/long. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

/* Skipping ulong_long/long_long check: insufficient preprocessor integer range. */

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ST2B_BLUEN
#include "MemMap.h"

VAR(B_ST2B_BLUEN_ac_T, ST2B_BLUEN_VAR_INIT) ST2B_BLUEN_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ST2B_BLUEN
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, ST2B_BLUEN_CODE) ST2B_BLUEN_FastTEF(void) /* Explicit Task: FastTEF */
{
    float32 rtb_Gain_iu;
    float32 rtb_Gain_iu_0;
    float32 rtb_Gain_m;
    float32 rtb_Sum_ar;
    float32 rtb_Sum_ax;
    float32 rtb_Sum_b2;
    float32 rtb_Sum_by;
    float32 rtb_Sum_fa;
    float32 rtb_Sum_jlz;
    float32 rtb_Sum_m;
    float32 rtb_Sum_n2;
    float32 rtb_Sum_o3;
    float32 rtb_TmpSignalConversionAtVeAPSR;
    float32 rtb_TmpSignalConversionAtVeAP_f;
    float32 rtb_TmpSignalConversionAtVeCCTR;
    float32 rtb_TmpSignalConversionAtVeDTRR;
    float32 rtb_TmpSignalConversionAtVeGENR;
    float32 rtb_TmpSignalConversionAtVeGE_a;
    float32 rtb_TmpSignalConversionAtVeGE_f;
    float32 rtb_TmpSignalConversionAtVeGE_h;
    float32 rtb_TmpSignalConversionAtVeHMIR;
    float32 rtb_TmpSignalConversionAtVeHM_c;
    float32 rtb_TmpSignalConversionAtVeHM_e;
    float32 rtb_TmpSignalConversionAtVeHM_f;
    float32 rtb_TmpSignalConversionAtVeHM_i;
    float32 rtb_TmpSignalConversionAtVeHM_j;
    float32 rtb_TmpSignalConversionAtVeHM_k;
    float32 rtb_TmpSignalConversionAtVeHTDR;
    float32 rtb_TmpSignalConversionAtVeHT_a;
    float32 rtb_TmpSignalConversionAtVeHT_d;
    float32 rtb_TmpSignalConversionAtVeHT_e;
    float32 rtb_TmpSignalConversionAtVeHT_g;
    float32 rtb_TmpSignalConversionAtVeHT_h;
    float32 rtb_TmpSignalConversionAtVeHT_i;
    float32 rtb_TmpSignalConversionAtVeHT_j;
    float32 rtb_TmpSignalConversionAtVeHT_l;
    float32 rtb_TmpSignalConversionAtVeHVTR;
    float32 rtb_TmpSignalConversionAtVeH_ar;
    float32 rtb_TmpSignalConversionAtVeH_ha;
    float32 rtb_TmpSignalConversionAtVeH_hb;
    float32 rtb_TmpSignalConversionAtVeH_hv;
    float32 rtb_TmpSignalConversionAtVeH_k2;
    float32 rtb_TmpSignalConversionAtVeH_ok;
    float32 rtb_TmpSignalConversionAtVePLTR;
    float32 rtb_TmpSignalConversionAtVeRGNR;
    float32 rtb_TmpSignalConversionAtVeRG_m;
    float32 rtb_TmpSignalConversionAtVeSR1B;
    float32 rtb_TmpSignalConversionAtVeSRAR;
    float32 rtb_TmpSignalConversionAtVeSRMR;
    float32 rtb_TmpSignalConversionAtVeSR_c;
    float32 rtb_TmpSignalConversionAtVeSR_h;
    float32 rtb_TmpSignalConversionAtVeSR_i;
    float32 rtb_TmpSignalConversionAtVeSR_j;
    float32 rtb_TmpSignalConversionAtVeSR_l;
    float32 rtb_TmpSignalConversionAtVeSR_n;
    float32 rtb_TmpSignalConversionAtVeSR_o;
    float32 rtb_TmpSignalConversionAtVeS_ae;
    float32 rtb_TmpSignalConversionAtVeS_al;
    float32 rtb_TmpSignalConversionAtVeS_cr;
    float32 rtb_TmpSignalConversionAtVeS_fs;
    float32 rtb_TmpSignalConversionAtVeS_gc;
    float32 rtb_TmpSignalConversionAtVeS_ht;
    float32 rtb_TmpSignalConversionAtVeS_hx;
    float32 rtb_TmpSignalConversionAtVeS_k2;
    float32 rtb_TmpSignalConversionAtVeS_ln;
    float32 rtb_TmpSignalConversionAtVeTAIR;
    float32 rtb_TmpSignalConversionAtVeTISR;
    float32 rtb_TmpSignalConversionAtVeTRAR;
    float32 rtb_TmpSignalConversionAtVeWTAR;
    float32 rtb_TmpSignalConversionAtVeWT_h;
    float32 rtb_TmpSignalConversionAtVeWT_m;
    float32 tmpRead_1;
    float32 tmpRead_3;
    float32 tmpRead_4;
    float32 tmpRead_5;
    float32 tmpRead_e;
    sint16 rtb_TmpSignalConversionAtVeTRGR;
    uint16 rtb_TmpSignalConversionAtVeASLR;
    uint16 rtb_TmpSignalConversionAtVeSR_f;
    uint16 rtb_TmpSignalConversionAtVeS_dp;
    uint16 rtb_TmpSignalConversionAtVeS_io;
    uint16 rtb_TmpSignalConversionAtVeS_oe;
    uint16 tmpRead_a;
    uint16 tmpRead_i;
    uint16 tmpRead_k;
    uint16 tmpRead_l;
    uint16 tmpRead_p;
    uint16 tmpRead_q;
    TeDMDR_e_TurtleMdSts tmpRead_j;
    TeDTRR_e_OPD_Sts tmpRead_6;
    TeESSR_e_EngStrtActuatorTyp rtb_TmpSignalConversionAtVeES_n;
    TeESSR_e_EngStrtType rtb_TmpSignalConversionAtVeES_i;
    TeGENR_e_APM_OperMode rtb_TmpSignalConversionAtVeGE_n;
    TeHMIR_e_HEV_LMP tmpRead_2;
    TeHMIR_e_TerrainHMIRq tmpRead_h;
    TeHMIR_e_TerrainModeDesiredStat tmpRead_f;
    TeHMIR_e_TerrainModeStat tmpRead_g;
    TeHMIR_e_VDCM_PopUp5 tmpRead_o;
    TeHSER_e_PropulsionMode tmpRead_s;
    TeHSER_e_RngSt rtb_TmpSignalConversionAtVeHSER;
    TeHTDR_e_SwitchMd rtb_TmpSignalConversionAtVeSR_a;
    TeHTDR_e_SwitchMd rtb_TmpSignalConversionAtVeS_go;
    TeOBCR_e_ChargingLevel tmpRead_0;
    TeOBCR_e_ChargingSystemSts tmpRead;
    TeOBCR_e_DCCntctrCmd rtb_TmpSignalConversionAtVeOB_g;
    TePPCR_e_PCUCtrl_PP_REQ rtb_TmpSignalConversionAtVeS_or;
    TeTRGR_e_AutoPosCorrMd rtb_TmpSignalConversionAtVeTR_a;
    TeTRGR_e_BrakingModeIndSts tmpRead_c;
    TeTRGR_e_BrakingModeSts tmpRead_d;
    TeTRGR_e_TransRangeState tmpRead_t;
    uint8 rtb_TmpSignalConversionAtVeSR_b;
    uint8 rtb_TmpSignalConversionAtVeSR_p;
    uint8 rtb_TmpSignalConversionAtVeS_gx;
    uint8 rtb_TmpSignalConversionAtVeS_it;
    uint8 rtb_TmpSignalConversionAtVeS_m1;
    uint8 rtb_TmpSignalConversionAtVe_j1n;
    boolean rtb_TmpSignalConversionAtVeAPMR;
    boolean rtb_TmpSignalConversionAtVeAS_b;
    boolean rtb_TmpSignalConversionAtVeDT_g;
    boolean rtb_TmpSignalConversionAtVeDT_k;
    boolean rtb_TmpSignalConversionAtVeDT_p;
    boolean rtb_TmpSignalConversionAtVeESSR;
    boolean rtb_TmpSignalConversionAtVeES_g;
    boolean rtb_TmpSignalConversionAtVeE_py;
    boolean rtb_TmpSignalConversionAtVeGE_c;
    boolean rtb_TmpSignalConversionAtVeHM_n;
    boolean rtb_TmpSignalConversionAtVeHPMR;
    boolean rtb_TmpSignalConversionAtVeHT_f;
    boolean rtb_TmpSignalConversionAtVeHT_k;
    boolean rtb_TmpSignalConversionAtVeHV_b;
    boolean rtb_TmpSignalConversionAtVeH_jy;
    boolean rtb_TmpSignalConversionAtVeOBCR;
    boolean rtb_TmpSignalConversionAtVeOB_d;
    boolean rtb_TmpSignalConversionAtVePWMD;
    boolean rtb_TmpSignalConversionAtVeSTRR;
    boolean rtb_TmpSignalConversionAtVeST_f;
    boolean rtb_TmpSignalConversionAtVeS_dq;
    boolean rtb_TmpSignalConversionAtVeS_ei;
    boolean rtb_TmpSignalConversionAtVeS_gi;
    boolean rtb_TmpSignalConversionAtVeS_gw;
    boolean rtb_TmpSignalConversionAtVeS_iq;
    boolean rtb_TmpSignalConversionAtVeS_n5;
    boolean rtb_TmpSignalConversionAtVeTR_c;
    boolean rtb_TmpSignalConversionAtVeTR_f;
    boolean rtb_TmpSignalConversionAtVeTR_i;
    boolean rtb_TmpSignalConversionAtVeT_gm;
    boolean rtb_TmpSignalConversionAtVe_kwr;
    boolean tmpRead_7;
    boolean tmpRead_8;
    boolean tmpRead_9;
    boolean tmpRead_b;
    boolean tmpRead_m;
    boolean tmpRead_n;
    boolean tmpRead_r;

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/ST2B_FastTEF'
     */
    /* SignalConversion generated from: '<S2>/VeWTAR_M_IntndedAxleTrq_Shpd' incorporates:
     *  Inport: '<Root>/VeWTAR_M_IntndedAxleTrq_Shpd'
     */
    (void)Rte_Read_VeWTAR_M_IntndedAxleTrq_Shpd_Value
        (&rtb_TmpSignalConversionAtVeWTAR);

    /* SignalConversion generated from: '<S2>/VeWTAR_M_IntndedAxleTrq_xShpng' incorporates:
     *  Inport: '<Root>/VeWTAR_M_IntndedAxleTrq_xShpng'
     */
    (void)Rte_Read_VeWTAR_M_IntndedAxleTrq_xShpng_Value
        (&rtb_TmpSignalConversionAtVeWT_h);

    /* SignalConversion generated from: '<S2>/VeDTRR_b_DrvrIntndedAxleTrqRawFA' incorporates:
     *  Inport: '<Root>/VeDTRR_b_DrvrIntndedAxleTrqRawFA'
     */
    (void)Rte_Read_VeDTRR_b_DrvrIntndedAxleTrqRawFA_Value
        (&rtb_TmpSignalConversionAtVeDT_p);

    /* SignalConversion generated from: '<S2>/VeRGNR_M_EstRegenBrkAxTorq' incorporates:
     *  Inport: '<Root>/VeRGNR_M_EstRegenBrkAxTorq'
     */
    (void)Rte_Read_VeRGNR_M_EstRegenBrkAxTorq_Value
        (&rtb_TmpSignalConversionAtVeRGNR);

    /* SignalConversion generated from: '<S2>/VeRGNR_M_RegenBrkOutTorqCap_CAN' incorporates:
     *  Inport: '<Root>/VeRGNR_M_RegenBrkOutTorqCap_CAN'
     */
    (void)Rte_Read_VeRGNR_M_RegenBrkOutTorqCap_CAN_Value
        (&rtb_TmpSignalConversionAtVeRG_m);

    /* SignalConversion generated from: '<S2>/VeSRMR_M_AeCoastTorqDiff' incorporates:
     *  Inport: '<Root>/VeSRMR_M_AeCoastTorqDiff'
     */
    (void)Rte_Read_VeSRMR_M_AeCoastTorqDiff_Value
        (&rtb_TmpSignalConversionAtVeSRMR);

    /* SignalConversion generated from: '<S2>/VeSRMR_M_MaxAxleTrqCruise' incorporates:
     *  Inport: '<Root>/VeSRMR_M_MaxAxleTrqCruise'
     */
    (void)Rte_Read_VeSRMR_M_MaxAxleTrqCruise_Value
        (&rtb_TmpSignalConversionAtVeS_k2);

    /* SignalConversion generated from: '<S2>/VeSRMR_M_MinAxleTrqCruise' incorporates:
     *  Inport: '<Root>/VeSRMR_M_MinAxleTrqCruise'
     */
    (void)Rte_Read_VeSRMR_M_MinAxleTrqCruise_Value
        (&rtb_TmpSignalConversionAtVeS_al);

    /* SignalConversion generated from: '<S2>/VeHMIR_Pct_HVBatSOC_HCP' incorporates:
     *  Inport: '<Root>/VeHMIR_Pct_HVBatSOC_HCP'
     */
    (void)Rte_Read_VeHMIR_Pct_HVBatSOC_HCP_Value
        (&rtb_TmpSignalConversionAtVeHMIR);

    /* SignalConversion generated from: '<S2>/VeHMIR_Pct_CoachDisp' incorporates:
     *  Inport: '<Root>/VeHMIR_Pct_CoachDisp'
     */
    (void)Rte_Read_VeHMIR_Pct_CoachDisp_Value(&rtb_TmpSignalConversionAtVeHM_f);

    /* SignalConversion generated from: '<S2>/VeHMIR_Pct_OutputPwrDisp' incorporates:
     *  Inport: '<Root>/VeHMIR_Pct_OutputPwrDisp'
     */
    (void)Rte_Read_VeHMIR_Pct_OutputPwrDisp_Value
        (&rtb_TmpSignalConversionAtVeHM_e);

    /* SignalConversion generated from: '<S2>/VeTAIR_p_HghRfrgtPres' incorporates:
     *  Inport: '<Root>/VeTAIR_p_HghRfrgtPres'
     */
    (void)Rte_Read_VeTAIR_p_HghRfrgtPres_Value(&rtb_TmpSignalConversionAtVeTAIR);

    /* SignalConversion generated from: '<S2>/VeHMIR_b_DriveReady' incorporates:
     *  Inport: '<Root>/VeHMIR_b_DriveReady'
     */
    (void)Rte_Read_VeHMIR_b_DriveReady_Value(&rtb_TmpSignalConversionAtVeHM_n);

    /* SignalConversion generated from: '<S2>/VeHSER_e_RngStOnCAN' incorporates:
     *  Inport: '<Root>/VeHSER_e_RngStOnCAN'
     */
    (void)Rte_Read_VeHSER_e_RngStOnCAN_Value(&rtb_TmpSignalConversionAtVeHSER);

    /* SignalConversion generated from: '<S2>/VeHPMR_b_PropSysActv' incorporates:
     *  Inport: '<Root>/VeHPMR_b_PropSysActv'
     */
    (void)Rte_Read_VeHPMR_b_PropSysActv_Value(&rtb_TmpSignalConversionAtVeHPMR);

    /* SignalConversion generated from: '<S2>/VeHMIR_P_BatPwrUsageDisp' incorporates:
     *  Inport: '<Root>/VeHMIR_P_BatPwrUsageDisp'
     */
    (void)Rte_Read_VeHMIR_P_BatPwrUsageDisp_Value
        (&rtb_TmpSignalConversionAtVeHM_i);

    /* SignalConversion generated from: '<S2>/VeSRAR_b_HybPwrtrnRdcdPerfCmnd' incorporates:
     *  Inport: '<Root>/VeSRAR_b_HybPwrtrnRdcdPerfCmnd'
     */
    (void)Rte_Read_VeSRAR_b_HybPwrtrnRdcdPerfCmnd_Value
        (&rtb_TmpSignalConversionAtVeS_ei);

    /* SignalConversion generated from: '<S2>/VeHMIR_b_HEV_EVT_MD' incorporates:
     *  Inport: '<Root>/VeHMIR_b_HEV_EVT_MD'
     */
    (void)Rte_Read_VeHMIR_b_HEV_EVT_MD_Value(&rtb_TmpSignalConversionAtVeH_jy);

    /* SignalConversion generated from: '<S2>/VeHMIR_P_MtrAPwrUsageDisp' incorporates:
     *  Inport: '<Root>/VeHMIR_P_MtrAPwrUsageDisp'
     */
    (void)Rte_Read_VeHMIR_P_MtrAPwrUsageDisp_Value
        (&rtb_TmpSignalConversionAtVeHM_k);

    /* SignalConversion generated from: '<S2>/VeHMIR_P_MtrBPwrUsageDisp' incorporates:
     *  Inport: '<Root>/VeHMIR_P_MtrBPwrUsageDisp'
     */
    (void)Rte_Read_VeHMIR_P_MtrBPwrUsageDisp_Value
        (&rtb_TmpSignalConversionAtVeHM_c);

    /* SignalConversion generated from: '<S2>/VeHMIR_P_MtrPwrUsageDisp' incorporates:
     *  Inport: '<Root>/VeHMIR_P_MtrPwrUsageDisp'
     */
    (void)Rte_Read_VeHMIR_P_MtrPwrUsageDisp_Value
        (&rtb_TmpSignalConversionAtVeH_hb);

    /* SignalConversion generated from: '<S2>/VeTRGR_e_AutoPosCorrMdReq' incorporates:
     *  Inport: '<Root>/VeTRGR_e_AutoPosCorrMdReq'
     */
    (void)Rte_Read_VeTRGR_e_AutoPosCorrMdReq_Value
        (&rtb_TmpSignalConversionAtVeTR_a);

    /* SignalConversion generated from: '<S2>/VePLTR_pmbar_AmbientAirPrs' incorporates:
     *  Inport: '<Root>/VePLTR_pmbar_AmbientAirPrs'
     */
    (void)Rte_Read_VePLTR_pmbar_AmbientAirPrs_Value
        (&rtb_TmpSignalConversionAtVePLTR);

    /* SignalConversion generated from: '<S2>/VeCCTR_v_CcCntrlSpd_Cluster_KPH' incorporates:
     *  Inport: '<Root>/VeCCTR_v_CcCntrlSpd_Cluster_KPH'
     */
    (void)Rte_Read_VeCCTR_v_CcCntrlSpd_Cluster_KPH_Value
        (&rtb_TmpSignalConversionAtVeCCTR);

    /* SignalConversion generated from: '<S2>/VeSRMR_b_Lv2AccelPdlPosFlt' incorporates:
     *  Inport: '<Root>/VeSRMR_b_Lv2AccelPdlPosFlt'
     */
    (void)Rte_Read_VeSRMR_b_Lv2AccelPdlPosFlt_Value
        (&rtb_TmpSignalConversionAtVeS_gw);

    /* SignalConversion generated from: '<S2>/VeDTRR_Pct_AccelPdlVirtActPosn' incorporates:
     *  Inport: '<Root>/VeDTRR_Pct_AccelPdlVirtActPosn'
     */
    (void)Rte_Read_VeDTRR_Pct_AccelPdlVirtActPosn_Value
        (&rtb_TmpSignalConversionAtVeDTRR);

    /* SignalConversion generated from: '<S2>/VeTRGR_e_CurrentGrForDisp' incorporates:
     *  Inport: '<Root>/VeTRGR_e_CurrentGrForDisp'
     */
    (void)Rte_Read_VeTRGR_e_CurrentGrForDisp_Value
        (&rtb_TmpSignalConversionAtVeTRGR);

    /* SignalConversion generated from: '<S2>/VeSRMR_e_CurrentGear' incorporates:
     *  Inport: '<Root>/VeSRMR_e_CurrentGear'
     */
    (void)Rte_Read_VeSRMR_e_CurrentGear_Value(&rtb_TmpSignalConversionAtVeS_oe);

    /* SignalConversion generated from: '<S2>/VeTRGR_b_GearIndicationSts' incorporates:
     *  Inport: '<Root>/VeTRGR_b_GearIndicationSts'
     */
    (void)Rte_Read_VeTRGR_b_GearIndicationSts_Value
        (&rtb_TmpSignalConversionAtVeTR_c);

    /* SignalConversion generated from: '<S2>/VeASLR_b_ISASts' incorporates:
     *  Inport: '<Root>/VeASLR_b_ISASts'
     */
    (void)Rte_Read_VeASLR_b_ISASts_Value(&rtb_TmpSignalConversionAtVeAS_b);

    /* SignalConversion generated from: '<S2>/VeSRMR_Pct_Lv2AccelPdlPos' incorporates:
     *  Inport: '<Root>/VeSRMR_Pct_Lv2AccelPdlPos'
     */
    (void)Rte_Read_VeSRMR_Pct_Lv2AccelPdlPos_Value
        (&rtb_TmpSignalConversionAtVeS_fs);

    /* SignalConversion generated from: '<S2>/VeTRGR_b_R_Shift_Block' incorporates:
     *  Inport: '<Root>/VeTRGR_b_R_Shift_Block'
     */
    (void)Rte_Read_VeTRGR_b_R_Shift_Block_Value(&rtb_TmpSignalConversionAtVeTR_i);

    /* SignalConversion generated from: '<S2>/VeAPSR_U_RawPVS1' incorporates:
     *  Inport: '<Root>/VeAPSR_U_RawPVS1'
     */
    (void)Rte_Read_VeAPSR_U_RawPVS1_Value(&rtb_TmpSignalConversionAtVeAPSR);

    /* SignalConversion generated from: '<S2>/VeAPSR_U_RawPVS2' incorporates:
     *  Inport: '<Root>/VeAPSR_U_RawPVS2'
     */
    (void)Rte_Read_VeAPSR_U_RawPVS2_Value(&rtb_TmpSignalConversionAtVeAP_f);

    /* SignalConversion generated from: '<S2>/VeTRGR_b_ShifterLocked' incorporates:
     *  Inport: '<Root>/VeTRGR_b_ShifterLocked'
     */
    (void)Rte_Read_VeTRGR_b_ShifterLocked_Value(&rtb_TmpSignalConversionAtVeT_gm);

    /* SignalConversion generated from: '<S2>/VeSRMR_e_PRNDLReq' incorporates:
     *  Inport: '<Root>/VeSRMR_e_PRNDLReq'
     */
    (void)Rte_Read_VeSRMR_e_PRNDLReq_Value(&rtb_TmpSignalConversionAtVeSR_f);

    /* SignalConversion generated from: '<S2>/VeASLR_e_SpdLmtSts' incorporates:
     *  Inport: '<Root>/VeASLR_e_SpdLmtSts'
     */
    (void)Rte_Read_VeASLR_e_SpdLmtSts_Value(&rtb_TmpSignalConversionAtVeASLR);

    /* SignalConversion generated from: '<S2>/VeSRMR_e_TargetGear' incorporates:
     *  Inport: '<Root>/VeSRMR_e_TargetGear'
     */
    (void)Rte_Read_VeSRMR_e_TargetGear_Value(&rtb_TmpSignalConversionAtVeS_io);

    /* SignalConversion generated from: '<S2>/VeTRGR_b_TransmissionFailSts' incorporates:
     *  Inport: '<Root>/VeTRGR_b_TransmissionFailSts'
     */
    (void)Rte_Read_VeTRGR_b_TransmissionFailSts_Value
        (&rtb_TmpSignalConversionAtVeTR_f);

    /* SignalConversion generated from: '<S2>/VeDTRR_b_EngTrqEnblRqDAS' incorporates:
     *  Inport: '<Root>/VeDTRR_b_EngTrqEnblRqDAS'
     */
    (void)Rte_Read_VeDTRR_b_EngTrqEnblRqDAS_Value
        (&rtb_TmpSignalConversionAtVeDT_g);

    /* SignalConversion generated from: '<S2>/VeDTRR_b_PtcCcDriverOverride' incorporates:
     *  Inport: '<Root>/VeDTRR_b_PtcCcDriverOverride'
     */
    (void)Rte_Read_VeDTRR_b_PtcCcDriverOverride_Value
        (&rtb_TmpSignalConversionAtVeDT_k);

    /* SignalConversion generated from: '<S2>/VeSRMR_M_SplitFrntTrqReq' incorporates:
     *  Inport: '<Root>/VeSRMR_M_SplitFrntTrqReq'
     */
    (void)Rte_Read_VeSRMR_M_SplitFrntTrqReq_Value
        (&rtb_TmpSignalConversionAtVeSR_l);

    /* SignalConversion generated from: '<S2>/VeSRMR_M_SplitRearTrqReq' incorporates:
     *  Inport: '<Root>/VeSRMR_M_SplitRearTrqReq'
     */
    (void)Rte_Read_VeSRMR_M_SplitRearTrqReq_Value
        (&rtb_TmpSignalConversionAtVeSR_i);

    /* SignalConversion generated from: '<S2>/VeSRMR_M_ActualAxleTrq' incorporates:
     *  Inport: '<Root>/VeSRMR_M_ActualAxleTrq'
     */
    (void)Rte_Read_VeSRMR_M_ActualAxleTrq_Value(&rtb_TmpSignalConversionAtVeSR_o);

    /* SignalConversion generated from: '<S2>/VeHMIR_Pct_EstSOCDisplay' incorporates:
     *  Inport: '<Root>/VeHMIR_Pct_EstSOCDisplay'
     */
    (void)Rte_Read_VeHMIR_Pct_EstSOCDisplay_Value
        (&rtb_TmpSignalConversionAtVeHM_j);

    /* SignalConversion generated from: '<S2>/VeTRAR_M_EngReserveTrqCmnd' incorporates:
     *  Inport: '<Root>/VeTRAR_M_EngReserveTrqCmnd'
     */
    (void)Rte_Read_VeTRAR_M_EngReserveTrqCmnd_Value
        (&rtb_TmpSignalConversionAtVeTRAR);

    /* SignalConversion generated from: '<S2>/VeSRMR_M_EngTrqCmndImmed' incorporates:
     *  Inport: '<Root>/VeSRMR_M_EngTrqCmndImmed'
     */
    (void)Rte_Read_VeSRMR_M_EngTrqCmndImmed_Value
        (&rtb_TmpSignalConversionAtVeS_ae);

    /* SignalConversion generated from: '<S2>/VeSRMR_M_EngTrqCmndPrdtd' incorporates:
     *  Inport: '<Root>/VeSRMR_M_EngTrqCmndPrdtd'
     */
    (void)Rte_Read_VeSRMR_M_EngTrqCmndPrdtd_Value
        (&rtb_TmpSignalConversionAtVeSR_n);

    /* SignalConversion generated from: '<S2>/VeSTRR_b_HybCrnkAbrtd' incorporates:
     *  Inport: '<Root>/VeSTRR_b_HybCrnkAbrtd'
     */
    (void)Rte_Read_VeSTRR_b_HybCrnkAbrtd_Value(&rtb_TmpSignalConversionAtVeSTRR);

    /* SignalConversion generated from: '<S2>/VeSRMR_M_SnsdEng_Flt' incorporates:
     *  Inport: '<Root>/VeSRMR_M_SnsdEng_Flt'
     */
    (void)Rte_Read_VeSRMR_M_SnsdEng_Flt_Value(&rtb_TmpSignalConversionAtVeSR_c);

    /* SignalConversion generated from: '<S2>/VeSTRR_b_RemedialStop' incorporates:
     *  Inport: '<Root>/VeSTRR_b_RemedialStop'
     */
    (void)Rte_Read_VeSTRR_b_RemedialStop_Value(&rtb_TmpSignalConversionAtVeST_f);

    /* SignalConversion generated from: '<S2>/VeTISR_n_InputSpeedRaw' incorporates:
     *  Inport: '<Root>/VeTISR_n_InputSpeedRaw'
     */
    (void)Rte_Read_VeTISR_n_InputSpeedRaw_Value(&rtb_TmpSignalConversionAtVeTISR);

    /* SignalConversion generated from: '<S2>/VeSRAR_n_HCPMaxEngRPM' incorporates:
     *  Inport: '<Root>/VeSRAR_n_HCPMaxEngRPM'
     */
    (void)Rte_Read_VeSRAR_n_HCPMaxEngRPM_Value(&rtb_TmpSignalConversionAtVeSRAR);

    /* SignalConversion generated from: '<S2>/VeSRMR_M_EngCLITerm' incorporates:
     *  Inport: '<Root>/VeSRMR_M_EngCLITerm'
     */
    (void)Rte_Read_VeSRMR_M_EngCLITerm_Value(&rtb_TmpSignalConversionAtVeSR_h);

    /* SignalConversion generated from: '<S2>/VeHTDR_f_MtrA_AEMDFc_Hi' incorporates:
     *  Inport: '<Root>/VeHTDR_f_MtrA_AEMDFc_Hi'
     */
    (void)Rte_Read_VeHTDR_f_MtrA_AEMDFc_Hi_Value
        (&rtb_TmpSignalConversionAtVeHTDR);

    /* SignalConversion generated from: '<S2>/VeHTDR_f_MtrB_AEMDFc_Hi' incorporates:
     *  Inport: '<Root>/VeHTDR_f_MtrB_AEMDFc_Hi'
     */
    (void)Rte_Read_VeHTDR_f_MtrB_AEMDFc_Hi_Value
        (&rtb_TmpSignalConversionAtVeHT_g);

    /* SignalConversion generated from: '<S2>/VeHTDR_f_MtrA_AEMDFc_Lo' incorporates:
     *  Inport: '<Root>/VeHTDR_f_MtrA_AEMDFc_Lo'
     */
    (void)Rte_Read_VeHTDR_f_MtrA_AEMDFc_Lo_Value
        (&rtb_TmpSignalConversionAtVeHT_h);

    /* SignalConversion generated from: '<S2>/VeHTDR_f_MtrB_AEMDFc_Lo' incorporates:
     *  Inport: '<Root>/VeHTDR_f_MtrB_AEMDFc_Lo'
     */
    (void)Rte_Read_VeHTDR_f_MtrB_AEMDFc_Lo_Value
        (&rtb_TmpSignalConversionAtVeH_k2);

    /* SignalConversion generated from: '<S2>/VeHTDR_M_MtrB_AEMDPosTrqOffst' incorporates:
     *  Inport: '<Root>/VeHTDR_M_MtrB_AEMDPosTrqOffst'
     */
    (void)Rte_Read_VeHTDR_M_MtrB_AEMDPosTrqOffst_Value
        (&rtb_TmpSignalConversionAtVeHT_d);

    /* SignalConversion generated from: '<S2>/VeHTDR_M_MtrA_AEMDNegTrqOffst' incorporates:
     *  Inport: '<Root>/VeHTDR_M_MtrA_AEMDNegTrqOffst'
     */
    (void)Rte_Read_VeHTDR_M_MtrA_AEMDNegTrqOffst_Value
        (&rtb_TmpSignalConversionAtVeH_ok);

    /* SignalConversion generated from: '<S2>/VeHTDR_M_MtrB_AEMDNegTrqOffst' incorporates:
     *  Inport: '<Root>/VeHTDR_M_MtrB_AEMDNegTrqOffst'
     */
    (void)Rte_Read_VeHTDR_M_MtrB_AEMDNegTrqOffst_Value
        (&rtb_TmpSignalConversionAtVeHT_l);

    /* SignalConversion generated from: '<S2>/VeHTDR_scl_MtrA_AEMDPGainScl' incorporates:
     *  Inport: '<Root>/VeHTDR_scl_MtrA_AEMDPGainScl'
     */
    (void)Rte_Read_VeHTDR_scl_MtrA_AEMDPGainScl_Value
        (&rtb_TmpSignalConversionAtVeHT_a);

    /* SignalConversion generated from: '<S2>/VeHTDR_scl_MtrB_AEMDPGainScl' incorporates:
     *  Inport: '<Root>/VeHTDR_scl_MtrB_AEMDPGainScl'
     */
    (void)Rte_Read_VeHTDR_scl_MtrB_AEMDPGainScl_Value
        (&rtb_TmpSignalConversionAtVeH_ha);

    /* SignalConversion generated from: '<S2>/VeHTDR_M_BoostTorqMargin_AEMD' incorporates:
     *  Inport: '<Root>/VeHTDR_M_BoostTorqMargin_AEMD'
     */
    (void)Rte_Read_VeHTDR_M_BoostTorqMargin_AEMD_Value
        (&rtb_TmpSignalConversionAtVeH_ar);

    /* SignalConversion generated from: '<S2>/VeHTDR_M_BoostTorqMargin_MtrA' incorporates:
     *  Inport: '<Root>/VeHTDR_M_BoostTorqMargin_MtrA'
     */
    (void)Rte_Read_VeHTDR_M_BoostTorqMargin_MtrA_Value
        (&rtb_TmpSignalConversionAtVeHT_e);

    /* SignalConversion generated from: '<S2>/VeHTDR_M_BoostTorqMargin_MtrB' incorporates:
     *  Inport: '<Root>/VeHTDR_M_BoostTorqMargin_MtrB'
     */
    (void)Rte_Read_VeHTDR_M_BoostTorqMargin_MtrB_Value
        (&rtb_TmpSignalConversionAtVeHT_j);

    /* SignalConversion generated from: '<S2>/VeAPMR_b_PCU_EndRequestFlag' incorporates:
     *  Inport: '<Root>/VeAPMR_b_PCU_EndRequestFlag'
     */
    (void)Rte_Read_VeAPMR_b_PCU_EndRequestFlag_Value
        (&rtb_TmpSignalConversionAtVeAPMR);

    /* SignalConversion generated from: '<S2>/VeSRMR_e_MtrA_MdCmnd' incorporates:
     *  Inport: '<Root>/VeSRMR_e_MtrA_MdCmnd'
     */
    (void)Rte_Read_VeSRMR_e_MtrA_MdCmnd_Value(&rtb_TmpSignalConversionAtVeS_go);

    /* SignalConversion generated from: '<S2>/VeSRMR_e_MtrB_MdCmnd' incorporates:
     *  Inport: '<Root>/VeSRMR_e_MtrB_MdCmnd'
     */
    (void)Rte_Read_VeSRMR_e_MtrB_MdCmnd_Value(&rtb_TmpSignalConversionAtVeSR_a);

    /* SignalConversion generated from: '<S2>/VeHTDR_b_MtrA_ZeroTrq_Rqst' incorporates:
     *  Inport: '<Root>/VeHTDR_b_MtrA_ZeroTrq_Rqst'
     */
    (void)Rte_Read_VeHTDR_b_MtrA_ZeroTrq_Rqst_Value
        (&rtb_TmpSignalConversionAtVeHT_k);

    /* SignalConversion generated from: '<S2>/VeHTDR_b_MtrB_ZeroTrq_Rqst' incorporates:
     *  Inport: '<Root>/VeHTDR_b_MtrB_ZeroTrq_Rqst'
     */
    (void)Rte_Read_VeHTDR_b_MtrB_ZeroTrq_Rqst_Value
        (&rtb_TmpSignalConversionAtVeHT_f);

    /* SignalConversion generated from: '<S2>/VeHTDR_n_MtrA_SpdCmnd' incorporates:
     *  Inport: '<Root>/VeHTDR_n_MtrA_SpdCmnd'
     */
    (void)Rte_Read_VeHTDR_n_MtrA_SpdCmnd_Value(&rtb_TmpSignalConversionAtVeHT_i);

    /* SignalConversion generated from: '<S2>/VeHTDR_n_MtrB_SpdCmnd' incorporates:
     *  Inport: '<Root>/VeHTDR_n_MtrB_SpdCmnd'
     */
    (void)Rte_Read_VeHTDR_n_MtrB_SpdCmnd_Value(&rtb_TmpSignalConversionAtVeH_hv);

    /* SignalConversion generated from: '<S2>/VeSRMR_M_MtrA_TorqCmnd' incorporates:
     *  Inport: '<Root>/VeSRMR_M_MtrA_TorqCmnd'
     */
    (void)Rte_Read_VeSRMR_M_MtrA_TorqCmnd_Value(&rtb_TmpSignalConversionAtVeS_hx);

    /* SignalConversion generated from: '<S2>/VeSRMR_M_MtrB_TorqCmnd' incorporates:
     *  Inport: '<Root>/VeSRMR_M_MtrB_TorqCmnd'
     */
    (void)Rte_Read_VeSRMR_M_MtrB_TorqCmnd_Value(&rtb_TmpSignalConversionAtVeSR_j);

    /* SignalConversion generated from: '<S2>/VeGENR_I_APMIdcHvSetP' incorporates:
     *  Inport: '<Root>/VeGENR_I_APMIdcHvSetP'
     */
    (void)Rte_Read_VeGENR_I_APMIdcHvSetP_Value(&rtb_TmpSignalConversionAtVeGENR);

    /* SignalConversion generated from: '<S2>/VeGENR_I_APM_IdcLvSetP' incorporates:
     *  Inport: '<Root>/VeGENR_I_APM_IdcLvSetP'
     */
    (void)Rte_Read_VeGENR_I_APM_IdcLvSetP_Value(&rtb_TmpSignalConversionAtVeGE_f);

    /* SignalConversion generated from: '<S2>/VeGENR_U_IBS_BattVoltOut' incorporates:
     *  Inport: '<Root>/VeGENR_U_IBS_BattVoltOut'
     */
    (void)Rte_Read_VeGENR_U_IBS_BattVoltOut_Value
        (&rtb_TmpSignalConversionAtVeGE_h);

    /* SignalConversion generated from: '<S2>/VeGENR_U_SetPVoltRq' incorporates:
     *  Inport: '<Root>/VeGENR_U_SetPVoltRq'
     */
    (void)Rte_Read_VeGENR_U_SetPVoltRq_Value(&rtb_TmpSignalConversionAtVeGE_a);

    /* SignalConversion generated from: '<S2>/VeGENR_b_SetPVoltRqFA' incorporates:
     *  Inport: '<Root>/VeGENR_b_SetPVoltRqFA'
     */
    (void)Rte_Read_VeGENR_b_SetPVoltRqFA_Value(&rtb_TmpSignalConversionAtVeGE_c);

    /* SignalConversion generated from: '<S2>/VeGENR_e_stModeReq' incorporates:
     *  Inport: '<Root>/VeGENR_e_stModeReq'
     */
    (void)Rte_Read_VeGENR_e_stModeReq_Value(&rtb_TmpSignalConversionAtVeGE_n);

    /* SignalConversion generated from: '<S2>/VeOBCR_e_DC_CntctrCmd' incorporates:
     *  Inport: '<Root>/VeOBCR_e_DC_CntctrCmd'
     */
    (void)Rte_Read_VeOBCR_e_DC_CntctrCmd_Value(&rtb_TmpSignalConversionAtVeOB_g);

    /* SignalConversion generated from: '<S2>/VeOBCR_b_DC_Isolation_Cmd' incorporates:
     *  Inport: '<Root>/VeOBCR_b_DC_Isolation_Cmd'
     */
    (void)Rte_Read_VeOBCR_b_DC_Isolation_Cmd_Value
        (&rtb_TmpSignalConversionAtVeOBCR);

    /* SignalConversion generated from: '<S2>/VeHVTR_U_HV_Volt' incorporates:
     *  Inport: '<Root>/VeHVTR_U_HV_Volt'
     */
    (void)Rte_Read_VeHVTR_U_HV_Volt_Value(&rtb_TmpSignalConversionAtVeHVTR);

    /* SignalConversion generated from: '<S2>/VeHVTR_b_HV_VoltFA' incorporates:
     *  Inport: '<Root>/VeHVTR_b_HV_VoltFA'
     */
    (void)Rte_Read_VeHVTR_b_HV_VoltFA_Value(&rtb_TmpSignalConversionAtVeHV_b);

    /* SignalConversion generated from: '<S2>/VeSRMR_e_MainHighVltCntctrCmd' incorporates:
     *  Inport: '<Root>/VeSRMR_e_MainHighVltCntctrCmd'
     */
    (void)Rte_Read_VeSRMR_e_MainHighVltCntctrCmd_Value
        (&rtb_TmpSignalConversionAtVeS_dp);

    /* SignalConversion generated from: '<S2>/VeOBCR_b_DCChrgInitialization' incorporates:
     *  Inport: '<Root>/VeOBCR_b_DCChrgInitialization'
     */
    (void)Rte_Read_VeOBCR_b_DCChrgInitialization_Value
        (&rtb_TmpSignalConversionAtVeOB_d);

    /* SignalConversion generated from: '<S2>/VePWMD_b_Evcu1EndRequest' incorporates:
     *  Inport: '<Root>/VePWMD_b_Evcu1EndRequest'
     */
    (void)Rte_Read_VePWMD_b_Evcu1EndRequest_VePWMD_b_Evcu1EndRequest
        (&rtb_TmpSignalConversionAtVePWMD);

    /* SignalConversion generated from: '<S2>/VeESSR_b_HCPFuelDisable' incorporates:
     *  Inport: '<Root>/VeESSR_b_HCPFuelDisable'
     */
    (void)Rte_Read_VeESSR_b_HCPFuelDisable_Value
        (&rtb_TmpSignalConversionAtVeESSR);

    /* SignalConversion generated from: '<S2>/VeESSR_b_Hyb_ProducingTorque' incorporates:
     *  Inport: '<Root>/VeESSR_b_Hyb_ProducingTorque'
     */
    (void)Rte_Read_VeESSR_b_Hyb_ProducingTorque_Value
        (&rtb_TmpSignalConversionAtVeES_g);

    /* SignalConversion generated from: '<S2>/VeESSR_b_OptimdEngOnOffCmd' incorporates:
     *  Inport: '<Root>/VeESSR_b_OptimdEngOnOffCmd'
     */
    (void)Rte_Read_VeESSR_b_OptimdEngOnOffCmd_Value
        (&rtb_TmpSignalConversionAtVeE_py);

    /* SignalConversion generated from: '<S2>/VeESSR_e_OptimdEngStrtStpType' incorporates:
     *  Inport: '<Root>/VeESSR_e_OptimdEngStrtStpType'
     */
    (void)Rte_Read_VeESSR_e_OptimdEngStrtStpType_Value
        (&rtb_TmpSignalConversionAtVeES_i);

    /* SignalConversion generated from: '<S2>/VeESSR_e_OptimdStrtReqdActr' incorporates:
     *  Inport: '<Root>/VeESSR_e_OptimdStrtReqdActr'
     */
    (void)Rte_Read_VeESSR_e_OptimdStrtReqdActr_Value
        (&rtb_TmpSignalConversionAtVeES_n);

    /* SignalConversion generated from: '<S2>/VeSRMR_e_PPawl_Request' incorporates:
     *  Inport: '<Root>/VeSRMR_e_PPawl_Request'
     */
    (void)Rte_Read_VeSRMR_e_PPawl_Request_Value(&rtb_TmpSignalConversionAtVeS_or);

    /* SignalConversion generated from: '<S2>/VeSR1B_y_AWDSysStat' incorporates:
     *  Inport: '<Root>/VeSR1B_y_AWDSysStat'
     */
    (void)Rte_Read_VeSR1B_y_AWDSysStat_Value(&rtb_TmpSignalConversionAtVeS_m1);

    /* SignalConversion generated from: '<S2>/VeWTAR_M_IntndedAxleTrq_Shpd_xDMPI' incorporates:
     *  Inport: '<Root>/VeWTAR_M_IntndedAxleTrq_Shpd_xDMPI'
     */
    (void)Rte_Read_VeWTAR_M_IntndedAxleTrq_Shpd_xDMPI_Value
        (&rtb_TmpSignalConversionAtVeWT_m);

    /* SignalConversion generated from: '<S2>/VeSR1B_b_ESCActive_FD3' incorporates:
     *  Inport: '<Root>/VeSR1B_b_ESCActive_FD3'
     */
    (void)Rte_Read_VeSR1B_b_ESCActive_FD3_Value(&rtb_TmpSignalConversionAtVeS_gi);

    /* SignalConversion generated from: '<S2>/VeSR1B_M_Ft_RrCouplTrq_Act_FD3' incorporates:
     *  Inport: '<Root>/VeSR1B_M_Ft_RrCouplTrq_Act_FD3'
     */
    (void)Rte_Read_VeSR1B_M_Ft_RrCouplTrq_Act_FD3_Value
        (&rtb_TmpSignalConversionAtVeSR1B);

    /* SignalConversion generated from: '<S2>/VeSR1B_y_Ft_RrCouplTrq_Act_FD3_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_Ft_RrCouplTrq_Act_FD3_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_Ft_RrCouplTrq_Act_FD3_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_gx);

    /* SignalConversion generated from: '<S2>/VeSR1B_M_Ft_RrCouplTrqDes_FD3' incorporates:
     *  Inport: '<Root>/VeSR1B_M_Ft_RrCouplTrqDes_FD3'
     */
    (void)Rte_Read_VeSR1B_M_Ft_RrCouplTrqDes_FD3_Value
        (&rtb_TmpSignalConversionAtVeS_ln);

    /* SignalConversion generated from: '<S2>/VeSR1B_y_Ft_RrCouplTrqDes_FD3_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_Ft_RrCouplTrqDes_FD3_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_Ft_RrCouplTrqDes_FD3_SigSts_Value
        (&rtb_TmpSignalConversionAtVe_j1n);

    /* SignalConversion generated from: '<S2>/VeSR1B_v_LHFWheelSpeed_FD3' incorporates:
     *  Inport: '<Root>/VeSR1B_v_LHFWheelSpeed_FD3'
     */
    (void)Rte_Read_VeSR1B_v_LHFWheelSpeed_FD3_Value
        (&rtb_TmpSignalConversionAtVeS_ht);

    /* SignalConversion generated from: '<S2>/VeSR1B_y_LHFWheelSpeed_FD3_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_LHFWheelSpeed_FD3_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_LHFWheelSpeed_FD3_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_it);

    /* SignalConversion generated from: '<S2>/VeSR1B_b_LHF_WhlSnsrFailSts_FD3' incorporates:
     *  Inport: '<Root>/VeSR1B_b_LHF_WhlSnsrFailSts_FD3'
     */
    (void)Rte_Read_VeSR1B_b_LHF_WhlSnsrFailSts_FD3_Value
        (&rtb_TmpSignalConversionAtVeS_iq);

    /* SignalConversion generated from: '<S2>/VeSR1B_v_RHFWheelSpeed_FD3' incorporates:
     *  Inport: '<Root>/VeSR1B_v_RHFWheelSpeed_FD3'
     */
    (void)Rte_Read_VeSR1B_v_RHFWheelSpeed_FD3_Value
        (&rtb_TmpSignalConversionAtVeS_gc);

    /* SignalConversion generated from: '<S2>/VeSR1B_y_RHFWheelSpeed_FD3_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_RHFWheelSpeed_FD3_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_RHFWheelSpeed_FD3_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR_b);

    /* SignalConversion generated from: '<S2>/VeSR1B_b_RHF_WhlSnsrFailSts_FD3' incorporates:
     *  Inport: '<Root>/VeSR1B_b_RHF_WhlSnsrFailSts_FD3'
     */
    (void)Rte_Read_VeSR1B_b_RHF_WhlSnsrFailSts_FD3_Value
        (&rtb_TmpSignalConversionAtVe_kwr);

    /* SignalConversion generated from: '<S2>/VeSR1B_b_TotalAxleMaxRq_BSM_FD3' incorporates:
     *  Inport: '<Root>/VeSR1B_b_TotalAxleMaxRq_BSM_FD3'
     */
    (void)Rte_Read_VeSR1B_b_TotalAxleMaxRq_BSM_FD3_Value
        (&rtb_TmpSignalConversionAtVeS_n5);

    /* SignalConversion generated from: '<S2>/VeSR1B_b_TotalAxleMinRq_BSM_FD3' incorporates:
     *  Inport: '<Root>/VeSR1B_b_TotalAxleMinRq_BSM_FD3'
     */
    (void)Rte_Read_VeSR1B_b_TotalAxleMinRq_BSM_FD3_Value
        (&rtb_TmpSignalConversionAtVeS_dq);

    /* SignalConversion generated from: '<S2>/VeSR1B_M_TotalAxle_Rq_BSM_FD3' incorporates:
     *  Inport: '<Root>/VeSR1B_M_TotalAxle_Rq_BSM_FD3'
     */
    (void)Rte_Read_VeSR1B_M_TotalAxle_Rq_BSM_FD3_Value
        (&rtb_TmpSignalConversionAtVeS_cr);

    /* SignalConversion generated from: '<S2>/VeSR1B_y_TotalAxle_Rq_BSM_FD3_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_TotalAxle_Rq_BSM_FD3_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_TotalAxle_Rq_BSM_FD3_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR_p);

    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/ST2B_BLUEN_FastTEF_StartCheckpoint'
     */
    /* FunctionCaller: '<S3>/ST2B_BLUEN_FastTEF_StartCheckpoint' */
    Rte_Call_ST2B_BLUEN_FastTEF_StartCheckpoint_CheckpointReached();

    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/SigMngt'
     */
    /* Outputs for Atomic SubSystem: '<S30>/Limiter1' */
    /* Switch: '<S42>/Switch1' incorporates:
     *  Constant: '<S30>/Constant Value1'
     *  RelationalOperator: '<S42>/Relational Operator'
     */
    if (65535.0F < rtb_TmpSignalConversionAtVeWTAR)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 65535.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeWTAR;
    }

    /* End of Switch: '<S42>/Switch1' */

    /* Switch: '<S42>/Switch' incorporates:
     *  Constant: '<S30>/Constant Value2'
     *  RelationalOperator: '<S42>/Relational Operator1'
     */
    if (rtb_Gain_m <= -65534.0F)
    {
        rtb_Gain_m = -65534.0F;
    }

    /* End of Switch: '<S42>/Switch' */
    /* End of Outputs for SubSystem: '<S30>/Limiter1' */

    /* DataTypeConversion: '<S30>/Data Type Conversion' incorporates:
     *  Constant: '<S30>/Constant Value'
     *  Gain: '<S30>/Gain'
     *  Sum: '<S30>/Sum'
     */
    ST2B_BLUEN_ac_B.BusAXLE_TORQUE_FD_1_FD14.E_Axle_TorqueStatic_D_TTC = (uint16)
        ((sint32)fmodf(floorf((rtb_Gain_m - -65534.0F) * 0.5F), 65536.0F));

    /* Switch: '<S6>/switch' incorporates:
     *  Constant: '<S31>/Constant Value1'
     *  RelationalOperator: '<S43>/Relational Operator'
     *  Switch: '<S43>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDT_p)
    {
        /* BusCreator: '<S5>/BusAXLE_TORQUE_FD_1_FD14' incorporates:
         *  Constant: '<S6>/Constant'
         *  DataTypeConversion: '<S182>/Data Type Conversion'
         */
        ST2B_BLUEN_ac_B.BusAXLE_TORQUE_FD_1_FD14.E_Axle_Torque_DrvReqMod =
            MAX_uint16_T;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S31>/Limiter1' */
        if (65535.0F < rtb_TmpSignalConversionAtVeWT_h)
        {
            /* Switch: '<S43>/Switch1' incorporates:
             *  Constant: '<S31>/Constant Value1'
             *  Gain: '<S31>/Gain'
             */
            rtb_Gain_m = 65535.0F;
        }
        else
        {
            /* Gain: '<S31>/Gain' incorporates:
             *  Switch: '<S43>/Switch1'
             */
            rtb_Gain_m = rtb_TmpSignalConversionAtVeWT_h;
        }

        /* Switch: '<S43>/Switch' incorporates:
         *  Constant: '<S31>/Constant Value2'
         *  RelationalOperator: '<S43>/Relational Operator1'
         */
        if (rtb_Gain_m <= -65534.0F)
        {
            rtb_Gain_m = -65534.0F;
        }

        /* End of Switch: '<S43>/Switch' */
        /* End of Outputs for SubSystem: '<S31>/Limiter1' */

        /* BusCreator: '<S5>/BusAXLE_TORQUE_FD_1_FD14' incorporates:
         *  Constant: '<S31>/Constant Value'
         *  DataTypeConversion: '<S182>/Data Type Conversion'
         *  DataTypeConversion: '<S31>/Data Type Conversion'
         *  Gain: '<S31>/Gain'
         *  Sum: '<S31>/Sum'
         */
        ST2B_BLUEN_ac_B.BusAXLE_TORQUE_FD_1_FD14.E_Axle_Torque_DrvReqMod =
            (uint16)((sint32)fmodf(floorf((rtb_Gain_m - -65534.0F) * 0.5F),
                      65536.0F));
    }

    /* End of Switch: '<S6>/switch' */

    /* Outputs for Atomic SubSystem: '<S36>/Limiter1' */
    /* Switch: '<S48>/Switch1' incorporates:
     *  Constant: '<S36>/Constant Value1'
     *  RelationalOperator: '<S48>/Relational Operator'
     */
    if (32764.0F < rtb_TmpSignalConversionAtVeRGNR)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 32764.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeRGNR;
    }

    /* End of Switch: '<S48>/Switch1' */

    /* Switch: '<S48>/Switch' incorporates:
     *  Constant: '<S36>/Constant Value2'
     *  RelationalOperator: '<S48>/Relational Operator1'
     */
    if (rtb_Gain_m > 0.0F)
    {
        /* Sum: '<S36>/Sum' */
        rtb_Sum_jlz = rtb_Gain_m;
    }
    else
    {
        /* Sum: '<S36>/Sum' */
        rtb_Sum_jlz = 0.0F;
    }

    /* End of Switch: '<S48>/Switch' */
    /* End of Outputs for SubSystem: '<S36>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S37>/Limiter1' */
    /* Switch: '<S49>/Switch1' incorporates:
     *  Constant: '<S37>/Constant Value1'
     *  RelationalOperator: '<S49>/Relational Operator'
     */
    if (32764.0F < rtb_TmpSignalConversionAtVeRG_m)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 32764.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeRG_m;
    }

    /* End of Switch: '<S49>/Switch1' */

    /* Switch: '<S49>/Switch' incorporates:
     *  Constant: '<S37>/Constant Value2'
     *  RelationalOperator: '<S49>/Relational Operator1'
     */
    if (rtb_Gain_m > 0.0F)
    {
        /* Sum: '<S37>/Sum' */
        rtb_Sum_m = rtb_Gain_m;
    }
    else
    {
        /* Sum: '<S37>/Sum' */
        rtb_Sum_m = 0.0F;
    }

    /* End of Switch: '<S49>/Switch' */
    /* End of Outputs for SubSystem: '<S37>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S32>/Limiter1' */
    /* Switch: '<S44>/Switch1' incorporates:
     *  Constant: '<S32>/Constant Value1'
     *  RelationalOperator: '<S44>/Relational Operator'
     */
    if (65535.0F < rtb_TmpSignalConversionAtVeS_k2)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 65535.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeS_k2;
    }

    /* End of Switch: '<S44>/Switch1' */

    /* Switch: '<S44>/Switch' incorporates:
     *  Constant: '<S32>/Constant Value2'
     *  RelationalOperator: '<S44>/Relational Operator1'
     */
    if (rtb_Gain_m > -65534.0F)
    {
        rtb_Gain_iu = rtb_Gain_m;
    }
    else
    {
        rtb_Gain_iu = -65534.0F;
    }

    /* End of Switch: '<S44>/Switch' */
    /* End of Outputs for SubSystem: '<S32>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S33>/Limiter1' */
    /* Switch: '<S45>/Switch1' incorporates:
     *  Constant: '<S33>/Constant Value1'
     *  RelationalOperator: '<S45>/Relational Operator'
     */
    if (65535.0F < rtb_TmpSignalConversionAtVeS_al)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 65535.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeS_al;
    }

    /* End of Switch: '<S45>/Switch1' */

    /* Switch: '<S45>/Switch' incorporates:
     *  Constant: '<S33>/Constant Value2'
     *  RelationalOperator: '<S45>/Relational Operator1'
     */
    if (rtb_Gain_m > -65534.0F)
    {
        rtb_Gain_iu_0 = rtb_Gain_m;
    }
    else
    {
        rtb_Gain_iu_0 = -65534.0F;
    }

    /* End of Switch: '<S45>/Switch' */
    /* End of Outputs for SubSystem: '<S33>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S54>/Limiter1' */
    /* Switch: '<S67>/Switch1' incorporates:
     *  Constant: '<S54>/Constant Value1'
     *  RelationalOperator: '<S67>/Relational Operator'
     */
    if (65535.0F < rtb_TmpSignalConversionAtVeWTAR)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 65535.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeWTAR;
    }

    /* End of Switch: '<S67>/Switch1' */

    /* Switch: '<S67>/Switch' incorporates:
     *  Constant: '<S54>/Constant Value2'
     *  RelationalOperator: '<S67>/Relational Operator1'
     */
    if (rtb_Gain_m > -65534.0F)
    {
        rtb_TmpSignalConversionAtVeWTAR = rtb_Gain_m;
    }
    else
    {
        rtb_TmpSignalConversionAtVeWTAR = -65534.0F;
    }

    /* End of Switch: '<S67>/Switch' */
    /* End of Outputs for SubSystem: '<S54>/Limiter1' */

    /* Switch: '<S7>/switch' incorporates:
     *  Constant: '<S55>/Constant Value1'
     *  RelationalOperator: '<S68>/Relational Operator'
     *  Switch: '<S68>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDT_p)
    {
        /* BusCreator: '<S5>/BusAXLE_TORQUE_FD_1_FD3' incorporates:
         *  Constant: '<S7>/Constant'
         *  DataTypeConversion: '<S195>/Data Type Conversion'
         */
        ST2B_BLUEN_ac_B.BusAXLE_TORQUE_FD_1_FD3.E_Axle_Torque_DrvReqMod =
            MAX_uint16_T;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S55>/Limiter1' */
        if (65535.0F < rtb_TmpSignalConversionAtVeWT_h)
        {
            /* Switch: '<S68>/Switch1' incorporates:
             *  Constant: '<S55>/Constant Value1'
             *  Gain: '<S55>/Gain'
             */
            rtb_Gain_m = 65535.0F;
        }
        else
        {
            /* Gain: '<S55>/Gain' incorporates:
             *  Switch: '<S68>/Switch1'
             */
            rtb_Gain_m = rtb_TmpSignalConversionAtVeWT_h;
        }

        /* Switch: '<S68>/Switch' incorporates:
         *  Constant: '<S55>/Constant Value2'
         *  RelationalOperator: '<S68>/Relational Operator1'
         */
        if (rtb_Gain_m <= -65534.0F)
        {
            rtb_Gain_m = -65534.0F;
        }

        /* End of Switch: '<S68>/Switch' */
        /* End of Outputs for SubSystem: '<S55>/Limiter1' */

        /* BusCreator: '<S5>/BusAXLE_TORQUE_FD_1_FD3' incorporates:
         *  Constant: '<S55>/Constant Value'
         *  DataTypeConversion: '<S195>/Data Type Conversion'
         *  DataTypeConversion: '<S55>/Data Type Conversion'
         *  Gain: '<S55>/Gain'
         *  Sum: '<S55>/Sum'
         */
        ST2B_BLUEN_ac_B.BusAXLE_TORQUE_FD_1_FD3.E_Axle_Torque_DrvReqMod =
            (uint16)((sint32)fmodf(floorf((rtb_Gain_m - -65534.0F) * 0.5F),
                      65536.0F));
    }

    /* End of Switch: '<S7>/switch' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen1' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeDTRR_e_OPD_HMI' */
    (void)Rte_Read_VeDTRR_e_OPD_HMI_Value(&tmpRead_6);

    /* Inport: '<Root>/VeOBCR_t_EstTimeofChrg_Lv2' */
    (void)Rte_Read_VeOBCR_t_EstTimeofChrg_Lv2_Value(&tmpRead_5);

    /* Inport: '<Root>/VeOBCR_t_EstTimeofChrg_Lv1' */
    (void)Rte_Read_VeOBCR_t_EstTimeofChrg_Lv1_Value(&tmpRead_4);

    /* Inport: '<Root>/VeHMIR_P_HVACPwrUsageDisp' */
    (void)Rte_Read_VeHMIR_P_HVACPwrUsageDisp_Value(&tmpRead_3);

    /* Inport: '<Root>/VeHMIR_e_HEV_LMP_RQ' */
    (void)Rte_Read_VeHMIR_e_HEV_LMP_RQ_Value(&tmpRead_2);

    /* Inport: '<Root>/VeHMIR_P_EngPwrUsageDisp' */
    (void)Rte_Read_VeHMIR_P_EngPwrUsageDisp_Value(&tmpRead_1);

    /* Inport: '<Root>/VeOBCR_e_ChargingLevel' */
    (void)Rte_Read_VeOBCR_e_ChargingLevel_Value(&tmpRead_0);

    /* Inport: '<Root>/VeOBCR_e_ChargingSystemSts' */
    (void)Rte_Read_VeOBCR_e_ChargingSystemSts_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/ST2B_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/SigMngt'
     */
    /* BusCreator: '<S5>/BusAXLE_TORQUE_FD_1_FD3' incorporates:
     *  Inport: '<Root>/VeSRMR_b_AeCoastTorqDiffActv'
     */
    (void)Rte_Read_VeSRMR_b_AeCoastTorqDiffActv_Value
        (&ST2B_BLUEN_ac_B.BusAXLE_TORQUE_FD_1_FD3.E_MaxRegen_Diff_Axle_Torq_Active);

    /* Outputs for Atomic SubSystem: '<S61>/Limiter1' */
    /* Switch: '<S74>/Switch1' incorporates:
     *  Constant: '<S61>/Constant Value1'
     *  RelationalOperator: '<S74>/Relational Operator'
     */
    if (32764.0F < rtb_TmpSignalConversionAtVeRGNR)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 32764.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeRGNR;
    }

    /* End of Switch: '<S74>/Switch1' */

    /* Switch: '<S74>/Switch' incorporates:
     *  Constant: '<S61>/Constant Value2'
     *  RelationalOperator: '<S74>/Relational Operator1'
     */
    if (rtb_Gain_m > 0.0F)
    {
        /* Sum: '<S61>/Sum' */
        rtb_TmpSignalConversionAtVeRGNR = rtb_Gain_m;
    }
    else
    {
        /* Sum: '<S61>/Sum' */
        rtb_TmpSignalConversionAtVeRGNR = 0.0F;
    }

    /* End of Switch: '<S74>/Switch' */
    /* End of Outputs for SubSystem: '<S61>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S62>/Limiter1' */
    /* Switch: '<S75>/Switch1' incorporates:
     *  Constant: '<S62>/Constant Value1'
     *  RelationalOperator: '<S75>/Relational Operator'
     */
    if (32764.0F < rtb_TmpSignalConversionAtVeRG_m)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 32764.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeRG_m;
    }

    /* End of Switch: '<S75>/Switch1' */

    /* Switch: '<S75>/Switch' incorporates:
     *  Constant: '<S62>/Constant Value2'
     *  RelationalOperator: '<S75>/Relational Operator1'
     */
    if (rtb_Gain_m > 0.0F)
    {
        /* Sum: '<S62>/Sum' */
        rtb_TmpSignalConversionAtVeRG_m = rtb_Gain_m;
    }
    else
    {
        /* Sum: '<S62>/Sum' */
        rtb_TmpSignalConversionAtVeRG_m = 0.0F;
    }

    /* End of Switch: '<S75>/Switch' */
    /* End of Outputs for SubSystem: '<S62>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S63>/Limiter1' */
    /* Switch: '<S76>/Switch1' incorporates:
     *  Constant: '<S63>/Constant Value1'
     *  RelationalOperator: '<S76>/Relational Operator'
     */
    if (65532.0F < rtb_TmpSignalConversionAtVeSRMR)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 65532.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeSRMR;
    }

    /* End of Switch: '<S76>/Switch1' */

    /* Switch: '<S76>/Switch' incorporates:
     *  Constant: '<S63>/Constant Value2'
     *  RelationalOperator: '<S76>/Relational Operator1'
     */
    if (rtb_Gain_m > 0.0F)
    {
        /* Sum: '<S63>/Sum' */
        rtb_TmpSignalConversionAtVeSRMR = rtb_Gain_m;
    }
    else
    {
        /* Sum: '<S63>/Sum' */
        rtb_TmpSignalConversionAtVeSRMR = 0.0F;
    }

    /* End of Switch: '<S76>/Switch' */
    /* End of Outputs for SubSystem: '<S63>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S57>/Limiter1' */
    /* Switch: '<S70>/Switch1' incorporates:
     *  Constant: '<S57>/Constant Value1'
     *  RelationalOperator: '<S70>/Relational Operator'
     */
    if (65535.0F < rtb_TmpSignalConversionAtVeS_k2)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 65535.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeS_k2;
    }

    /* End of Switch: '<S70>/Switch1' */

    /* Switch: '<S70>/Switch' incorporates:
     *  Constant: '<S57>/Constant Value2'
     *  RelationalOperator: '<S70>/Relational Operator1'
     */
    if (rtb_Gain_m > -65534.0F)
    {
        rtb_TmpSignalConversionAtVeWT_h = rtb_Gain_m;
    }
    else
    {
        rtb_TmpSignalConversionAtVeWT_h = -65534.0F;
    }

    /* End of Switch: '<S70>/Switch' */
    /* End of Outputs for SubSystem: '<S57>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S58>/Limiter1' */
    /* Switch: '<S71>/Switch1' incorporates:
     *  Constant: '<S58>/Constant Value1'
     *  RelationalOperator: '<S71>/Relational Operator'
     */
    if (65535.0F < rtb_TmpSignalConversionAtVeS_al)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 65535.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeS_al;
    }

    /* End of Switch: '<S71>/Switch1' */
    /* End of Outputs for SubSystem: '<S58>/Limiter1' */

    /* BusCreator: '<S5>/BusAXLE_TORQUE_FD_1_FD14' incorporates:
     *  Constant: '<S32>/Constant Value'
     *  Constant: '<S33>/Constant Value'
     *  DataTypeConversion: '<S32>/Data Type Conversion'
     *  DataTypeConversion: '<S33>/Data Type Conversion'
     *  DataTypeConversion: '<S36>/Data Type Conversion'
     *  DataTypeConversion: '<S37>/Data Type Conversion'
     *  Gain: '<S32>/Gain'
     *  Gain: '<S33>/Gain'
     *  Gain: '<S36>/Gain'
     *  Gain: '<S37>/Gain'
     *  Sum: '<S32>/Sum'
     *  Sum: '<S33>/Sum'
     */
    ST2B_BLUEN_ac_B.BusAXLE_TORQUE_FD_1_FD14.E_CRC_AXLE_TORQUE_FD_1 = 0U;
    ST2B_BLUEN_ac_B.BusAXLE_TORQUE_FD_1_FD14.E_Front_AxleTorque_Max = 32767U;
    ST2B_BLUEN_ac_B.BusAXLE_TORQUE_FD_1_FD14.E_Front_AxleTorque_Min = 32767U;
    ST2B_BLUEN_ac_B.BusAXLE_TORQUE_FD_1_FD14.E_Front_Axle_Est_Regen_Torq =
        (uint16)((sint32)fmodf(floorf(0.5F * rtb_Sum_jlz), 65536.0F));
    ST2B_BLUEN_ac_B.BusAXLE_TORQUE_FD_1_FD14.E_Front_Axle_Regen_Capacity =
        (uint16)((sint32)fmodf(floorf(0.5F * rtb_Sum_m), 65536.0F));
    ST2B_BLUEN_ac_B.BusAXLE_TORQUE_FD_1_FD14.E_MessageCounter_AXLE_TORQUE_FD_1 =
        0U;
    ST2B_BLUEN_ac_B.BusAXLE_TORQUE_FD_1_FD14.E_Rear_AxleTorque_Max = 32767U;
    ST2B_BLUEN_ac_B.BusAXLE_TORQUE_FD_1_FD14.E_Rear_AxleTorque_Min = 32767U;
    ST2B_BLUEN_ac_B.BusAXLE_TORQUE_FD_1_FD14.E_Rear_Axle_Est_Regen_Torq = 0U;
    ST2B_BLUEN_ac_B.BusAXLE_TORQUE_FD_1_FD14.E_Rear_Axle_Regen_Capacity = 0U;
    ST2B_BLUEN_ac_B.BusAXLE_TORQUE_FD_1_FD14.E_Total_AxleTorque_Max = (uint16)
        ((sint32)fmodf(floorf(0.5F * (rtb_Gain_iu - -65534.0F)), 65536.0F));
    ST2B_BLUEN_ac_B.BusAXLE_TORQUE_FD_1_FD14.E_Total_AxleTorque_Min = (uint16)
        ((sint32)fmodf(floorf(0.5F * (rtb_Gain_iu_0 - -65534.0F)), 65536.0F));

    /* BusCreator: '<S5>/BusAXLE_TORQUE_FD_1_FD3' incorporates:
     *  Constant: '<S54>/Constant Value'
     *  Constant: '<S57>/Constant Value'
     *  DataTypeConversion: '<S54>/Data Type Conversion'
     *  DataTypeConversion: '<S57>/Data Type Conversion'
     *  DataTypeConversion: '<S61>/Data Type Conversion'
     *  DataTypeConversion: '<S62>/Data Type Conversion'
     *  DataTypeConversion: '<S63>/Data Type Conversion'
     *  Gain: '<S54>/Gain'
     *  Gain: '<S57>/Gain'
     *  Gain: '<S61>/Gain'
     *  Gain: '<S62>/Gain'
     *  Gain: '<S63>/Gain'
     *  Sum: '<S54>/Sum'
     *  Sum: '<S57>/Sum'
     */
    ST2B_BLUEN_ac_B.BusAXLE_TORQUE_FD_1_FD3.E_Axle_TorqueStatic_D_TTC = (uint16)
        ((sint32)fmodf(floorf(0.5F * (rtb_TmpSignalConversionAtVeWTAR -
            -65534.0F)), 65536.0F));
    ST2B_BLUEN_ac_B.BusAXLE_TORQUE_FD_1_FD3.E_CRC_AXLE_TORQUE_FD_1 = 0U;
    ST2B_BLUEN_ac_B.BusAXLE_TORQUE_FD_1_FD3.E_Front_AxleTorque_Max = 32767U;
    ST2B_BLUEN_ac_B.BusAXLE_TORQUE_FD_1_FD3.E_Front_AxleTorque_Min = 32767U;
    ST2B_BLUEN_ac_B.BusAXLE_TORQUE_FD_1_FD3.E_Front_Axle_Est_Regen_Torq =
        (uint16)((sint32)fmodf(floorf(0.5F * rtb_TmpSignalConversionAtVeRGNR),
                  65536.0F));
    ST2B_BLUEN_ac_B.BusAXLE_TORQUE_FD_1_FD3.E_Front_Axle_Regen_Capacity =
        (uint16)((sint32)fmodf(floorf(0.5F * rtb_TmpSignalConversionAtVeRG_m),
                  65536.0F));
    ST2B_BLUEN_ac_B.BusAXLE_TORQUE_FD_1_FD3.E_MaxRegen_Diff_Axle_Torq = (uint16)
        ((sint32)fmodf(floorf(0.5F * rtb_TmpSignalConversionAtVeSRMR), 65536.0F));
    ST2B_BLUEN_ac_B.BusAXLE_TORQUE_FD_1_FD3.E_MessageCounter_AXLE_TORQUE_FD_1 =
        0U;
    ST2B_BLUEN_ac_B.BusAXLE_TORQUE_FD_1_FD3.E_Rear_AxleTorque_Max = 32767U;
    ST2B_BLUEN_ac_B.BusAXLE_TORQUE_FD_1_FD3.E_Rear_AxleTorque_Min = 32767U;
    ST2B_BLUEN_ac_B.BusAXLE_TORQUE_FD_1_FD3.E_Rear_Axle_Est_Regen_Torq = 0U;
    ST2B_BLUEN_ac_B.BusAXLE_TORQUE_FD_1_FD3.E_Rear_Axle_Regen_Capacity = 0U;
    ST2B_BLUEN_ac_B.BusAXLE_TORQUE_FD_1_FD3.E_Total_AxleTorque_Max = (uint16)
        ((sint32)fmodf(floorf(0.5F * (rtb_TmpSignalConversionAtVeWT_h -
            -65534.0F)), 65536.0F));

    /* Outputs for Atomic SubSystem: '<S58>/Limiter1' */
    /* Switch: '<S71>/Switch' incorporates:
     *  Constant: '<S58>/Constant Value2'
     *  RelationalOperator: '<S71>/Relational Operator1'
     */
    if (rtb_Gain_m <= -65534.0F)
    {
        rtb_Gain_m = -65534.0F;
    }

    /* End of Switch: '<S71>/Switch' */
    /* End of Outputs for SubSystem: '<S58>/Limiter1' */

    /* BusCreator: '<S5>/BusAXLE_TORQUE_FD_1_FD3' incorporates:
     *  Constant: '<S58>/Constant Value'
     *  DataTypeConversion: '<S58>/Data Type Conversion'
     *  Gain: '<S58>/Gain'
     *  Sum: '<S58>/Sum'
     */
    ST2B_BLUEN_ac_B.BusAXLE_TORQUE_FD_1_FD3.E_Total_AxleTorque_Min = (uint16)
        ((sint32)fmodf(floorf((rtb_Gain_m - -65534.0F) * 0.5F), 65536.0F));

    /* Outputs for Atomic SubSystem: '<S80>/Limiter1' */
    /* Switch: '<S84>/Switch1' incorporates:
     *  Constant: '<S80>/Constant Value1'
     *  RelationalOperator: '<S84>/Relational Operator'
     */
    if (100.0F < rtb_TmpSignalConversionAtVeHMIR)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 100.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeHMIR;
    }

    /* End of Switch: '<S84>/Switch1' */

    /* Switch: '<S84>/Switch' incorporates:
     *  Constant: '<S80>/Constant Value2'
     *  RelationalOperator: '<S84>/Relational Operator1'
     */
    if (rtb_Gain_m > 0.0F)
    {
        /* Sum: '<S80>/Sum' */
        rtb_TmpSignalConversionAtVeS_al = rtb_Gain_m;
    }
    else
    {
        /* Sum: '<S80>/Sum' */
        rtb_TmpSignalConversionAtVeS_al = 0.0F;
    }

    /* End of Switch: '<S84>/Switch' */
    /* End of Outputs for SubSystem: '<S80>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S81>/Limiter1' */
    /* Switch: '<S85>/Switch1' incorporates:
     *  Constant: '<S81>/Constant Value1'
     *  RelationalOperator: '<S85>/Relational Operator'
     */
    if (100.0F < rtb_TmpSignalConversionAtVeHM_f)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 100.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeHM_f;
    }

    /* End of Switch: '<S85>/Switch1' */

    /* Switch: '<S85>/Switch' incorporates:
     *  Constant: '<S81>/Constant Value2'
     *  RelationalOperator: '<S85>/Relational Operator1'
     */
    if (rtb_Gain_m > -100.0F)
    {
        /* Switch: '<S85>/Switch' */
        rtb_TmpSignalConversionAtVeHM_f = rtb_Gain_m;
    }
    else
    {
        /* Switch: '<S85>/Switch' */
        rtb_TmpSignalConversionAtVeHM_f = -100.0F;
    }

    /* End of Switch: '<S85>/Switch' */
    /* End of Outputs for SubSystem: '<S81>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S82>/Limiter1' */
    /* Switch: '<S86>/Switch1' incorporates:
     *  Constant: '<S82>/Constant Value1'
     *  RelationalOperator: '<S86>/Relational Operator'
     */
    if (100.0F < rtb_TmpSignalConversionAtVeHM_e)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 100.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeHM_e;
    }

    /* End of Switch: '<S86>/Switch1' */

    /* Switch: '<S86>/Switch' incorporates:
     *  Constant: '<S82>/Constant Value2'
     *  RelationalOperator: '<S86>/Relational Operator1'
     */
    if (rtb_Gain_m <= -100.0F)
    {
        rtb_Gain_m = -100.0F;
    }

    /* End of Switch: '<S86>/Switch' */
    /* End of Outputs for SubSystem: '<S82>/Limiter1' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen1' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeTAIR_b_HghRfrgtPres_FA' */
    (void)Rte_Read_VeTAIR_b_HghRfrgtPres_FA_Value(&tmpRead_7);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/ST2B_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/SigMngt'
     */
    /* Switch: '<S8>/switch' incorporates:
     *  Constant: '<S83>/Constant Value1'
     *  RelationalOperator: '<S87>/Relational Operator'
     *  Switch: '<S87>/Switch1'
     */
    if (tmpRead_7)
    {
        /* BusCreator: '<S5>/BusHYBRID_DISPLAY_FD3' incorporates:
         *  Constant: '<S8>/Constant'
         *  DataTypeConversion: '<S20>/Data Type Conversion9'
         */
        ST2B_BLUEN_ac_B.BusHYBRID_DISPLAY_FD3.E_RefrigerantPressure = 511U;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S83>/Limiter1' */
        if (40.0F < rtb_TmpSignalConversionAtVeTAIR)
        {
            /* Switch: '<S87>/Switch1' incorporates:
             *  Constant: '<S83>/Constant Value1'
             *  Gain: '<S83>/Gain'
             */
            rtb_TmpSignalConversionAtVeHM_e = 40.0F;
        }
        else
        {
            /* Gain: '<S83>/Gain' incorporates:
             *  Switch: '<S87>/Switch1'
             */
            rtb_TmpSignalConversionAtVeHM_e = rtb_TmpSignalConversionAtVeTAIR;
        }

        /* Switch: '<S87>/Switch' incorporates:
         *  Constant: '<S83>/Constant Value2'
         *  RelationalOperator: '<S87>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeHM_e <= 0.0F)
        {
            rtb_TmpSignalConversionAtVeHM_e = 0.0F;
        }

        /* End of Switch: '<S87>/Switch' */
        /* End of Outputs for SubSystem: '<S83>/Limiter1' */

        /* BusCreator: '<S5>/BusHYBRID_DISPLAY_FD3' incorporates:
         *  DataTypeConversion: '<S20>/Data Type Conversion9'
         *  DataTypeConversion: '<S83>/Data Type Conversion'
         *  Gain: '<S83>/Gain'
         */
        ST2B_BLUEN_ac_B.BusHYBRID_DISPLAY_FD3.E_RefrigerantPressure = (uint16)
            ((sint32)fmodf(floorf(10.0F * rtb_TmpSignalConversionAtVeHM_e),
                           65536.0F));
    }

    /* End of Switch: '<S8>/switch' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen1' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSRMR_e_HybCmndEngTorqRespTyp' */
    (void)Rte_Read_VeSRMR_e_HybCmndEngTorqRespTyp_Value(&tmpRead_q);

    /* Inport: '<Root>/VeSRMR_e_EngCntrlMode' */
    (void)Rte_Read_VeSRMR_e_EngCntrlMode_Value(&tmpRead_p);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/ST2B_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/SigMngt'
     */
    /* BusCreator: '<S5>/BusHYBRID_DISPLAY_FD3' incorporates:
     *  Constant: '<S8>/CRC_HYBRID_DISPLAY'
     *  DataTypeConversion: '<S8>/Data Type Conversion3'
     *  DataTypeConversion: '<S8>/Data Type Conversion4'
     *  Inport: '<Root>/VeBPCR_b_HV_BatPackSOC_FA_Ovrd'
     *  Inport: '<Root>/VeHMIR_b_CoachDispV'
     *  Inport: '<Root>/VeHMIR_b_EngPwrUsageDispV'
     *  Inport: '<Root>/VeHMIR_b_HVACPwrUsageDispV'
     *  Inport: '<Root>/VeHMIR_b_OutputPwrDispV'
     *  Inport: '<Root>/VeHMIR_b_Popup_Msg1'
     *  Inport: '<Root>/VeHMIR_b_Popup_Msg10'
     *  Inport: '<Root>/VeHMIR_b_Popup_Msg11'
     *  Inport: '<Root>/VeHMIR_b_Popup_Msg2'
     *  Inport: '<Root>/VeHMIR_b_Popup_Msg3'
     *  Inport: '<Root>/VeHMIR_b_Popup_Msg4'
     *  Inport: '<Root>/VeHMIR_b_Popup_Msg5'
     *  Inport: '<Root>/VeHMIR_b_Popup_Msg6'
     *  Inport: '<Root>/VeHMIR_b_Popup_Msg7'
     *  Inport: '<Root>/VeOBCR_b_ChrgSysFault'
     *  Inport: '<Root>/VeOBCR_e_ChargingLevel'
     *  Inport: '<Root>/VeOBCR_e_ChargingSystemSts'
     *  Inport: '<Root>/VeSRMR_b_Popup_Msg9'
     */
    (void)Rte_Read_VeSRMR_b_Popup_Msg9_Value
        (&ST2B_BLUEN_ac_B.BusHYBRID_DISPLAY_FD3.E_PopUpMessage9);
    (void)Rte_Read_VeHMIR_b_Popup_Msg7_Value
        (&ST2B_BLUEN_ac_B.BusHYBRID_DISPLAY_FD3.E_PopUpMessage7);
    (void)Rte_Read_VeHMIR_b_Popup_Msg6_Value
        (&ST2B_BLUEN_ac_B.BusHYBRID_DISPLAY_FD3.E_PopUpMessage6);
    (void)Rte_Read_VeHMIR_b_Popup_Msg5_Value
        (&ST2B_BLUEN_ac_B.BusHYBRID_DISPLAY_FD3.E_PopUpMessage5);
    (void)Rte_Read_VeHMIR_b_Popup_Msg4_Value
        (&ST2B_BLUEN_ac_B.BusHYBRID_DISPLAY_FD3.E_PopUpMessage4);
    (void)Rte_Read_VeHMIR_b_Popup_Msg3_Value
        (&ST2B_BLUEN_ac_B.BusHYBRID_DISPLAY_FD3.E_PopUpMessage3);
    (void)Rte_Read_VeHMIR_b_Popup_Msg2_Value
        (&ST2B_BLUEN_ac_B.BusHYBRID_DISPLAY_FD3.E_PopUpMessage2);
    (void)Rte_Read_VeHMIR_b_Popup_Msg11_Value
        (&ST2B_BLUEN_ac_B.BusHYBRID_DISPLAY_FD3.E_PopUpMessage11);
    (void)Rte_Read_VeHMIR_b_Popup_Msg10_Value
        (&ST2B_BLUEN_ac_B.BusHYBRID_DISPLAY_FD3.E_PopUpMessage10);
    (void)Rte_Read_VeHMIR_b_Popup_Msg1_Value
        (&ST2B_BLUEN_ac_B.BusHYBRID_DISPLAY_FD3.E_PopUpMessage1);
    (void)Rte_Read_VeHMIR_b_OutputPwrDispV_Value
        (&ST2B_BLUEN_ac_B.BusHYBRID_DISPLAY_FD3.E_HybridOutputPowerV);
    (void)Rte_Read_VeHMIR_b_CoachDispV_Value
        (&ST2B_BLUEN_ac_B.BusHYBRID_DISPLAY_FD3.E_HybridEfficiencyCoachV);
    (void)Rte_Read_VeBPCR_b_HV_BatPackSOC_FA_Ovrd_Value
        (&ST2B_BLUEN_ac_B.BusHYBRID_DISPLAY_FD3.E_HVBatterySOC_DisplayV);
    (void)Rte_Read_VeHMIR_b_HVACPwrUsageDispV_Value
        (&ST2B_BLUEN_ac_B.BusHYBRID_DISPLAY_FD3.E_HVACPowerUse_DisplayV);
    (void)Rte_Read_VeHMIR_b_EngPwrUsageDispV_Value
        (&ST2B_BLUEN_ac_B.BusHYBRID_DISPLAY_FD3.E_EnginePowerUse_DisplayV);
    (void)Rte_Read_VeOBCR_b_ChrgSysFault_Value
        (&ST2B_BLUEN_ac_B.BusHYBRID_DISPLAY_FD3.E_ChargeSystemFault_DPT);
    ST2B_BLUEN_ac_B.BusHYBRID_DISPLAY_FD3.E_CRC_HYBRID_DISPLAY = 0U;
    ST2B_BLUEN_ac_B.BusHYBRID_DISPLAY_FD3.E_ChargeSystemSts_DPT = (uint8)tmpRead;
    ST2B_BLUEN_ac_B.BusHYBRID_DISPLAY_FD3.E_ChargingLevelForDisplay = (uint8)
        tmpRead_0;

    /* DataTypeConversion: '<S8>/Data Type Conversion5' */
    rtb_Gain_iu = fmodf(floorf(tmpRead_1), 65536.0F);

    /* BusCreator: '<S5>/BusHYBRID_DISPLAY_FD3' incorporates:
     *  Constant: '<S5>/Const6'
     *  DataTypeConversion: '<S8>/Data Type Conversion5'
     *  DataTypeConversion: '<S8>/Data Type Conversion8'
     *  Inport: '<Root>/VeHMIR_e_HEV_LMP_RQ'
     */
    ST2B_BLUEN_ac_B.BusHYBRID_DISPLAY_FD3.E_EnginePowerUse_Display = (uint16)
        ((sint32)((rtb_Gain_iu < 0.0F) ? ((sint32)((uint16)((sint32)(-((sint32)
               ((sint16)((uint16)((float32)(-rtb_Gain_iu))))))))) : ((sint32)
           ((uint16)rtb_Gain_iu))));
    ST2B_BLUEN_ac_B.BusHYBRID_DISPLAY_FD3.E_FOTA_Schedule_Conflict = false;
    ST2B_BLUEN_ac_B.BusHYBRID_DISPLAY_FD3.E_HCP_EVServiceLampOn = (uint8)
        tmpRead_2;

    /* DataTypeConversion: '<S8>/Data Type Conversion9' */
    rtb_Gain_iu = fmodf(floorf(tmpRead_3), 256.0F);

    /* BusCreator: '<S5>/BusHYBRID_DISPLAY_FD3' incorporates:
     *  Constant: '<S5>/Const7'
     *  Constant: '<S81>/Constant Value'
     *  Constant: '<S82>/Constant Value'
     *  DataTypeConversion: '<S80>/Data Type Conversion'
     *  DataTypeConversion: '<S81>/Data Type Conversion'
     *  DataTypeConversion: '<S82>/Data Type Conversion'
     *  DataTypeConversion: '<S8>/Data Type Conversion9'
     *  Gain: '<S80>/Gain'
     *  Sum: '<S81>/Sum'
     *  Sum: '<S82>/Sum'
     */
    ST2B_BLUEN_ac_B.BusHYBRID_DISPLAY_FD3.E_HVACPowerUse_Display = (uint8)
        ((sint32)((rtb_Gain_iu < 0.0F) ? ((sint32)((uint8)((sint32)(-((sint32)
               ((sint8)((uint8)((float32)(-rtb_Gain_iu))))))))) : ((sint32)
           ((uint8)rtb_Gain_iu))));
    ST2B_BLUEN_ac_B.BusHYBRID_DISPLAY_FD3.E_HVBatterySOC_Display = (uint8)
        ((sint32)fmodf(floorf(2.54971957F * rtb_TmpSignalConversionAtVeS_al),
                       256.0F));
    ST2B_BLUEN_ac_B.BusHYBRID_DISPLAY_FD3.E_HybridEfficiencyCoach = (uint8)
        ((sint32)fmodf(floorf(rtb_TmpSignalConversionAtVeHM_f - -100.0F), 256.0F));
    ST2B_BLUEN_ac_B.BusHYBRID_DISPLAY_FD3.E_HybridMILRequest = false;
    ST2B_BLUEN_ac_B.BusHYBRID_DISPLAY_FD3.E_HybridOutputPower = (uint8)((sint32)
        fmodf(floorf(rtb_Gain_m - -100.0F), 256.0F));

    /* DataTypeConversion: '<S8>/Data Type Conversion18' */
    rtb_Gain_iu = fmodf(floorf(tmpRead_4), 65536.0F);

    /* BusCreator: '<S5>/BusHYBRID_DISPLAY_FD3' incorporates:
     *  DataTypeConversion: '<S8>/Data Type Conversion18'
     */
    ST2B_BLUEN_ac_B.BusHYBRID_DISPLAY_FD3.E_Lv1_EstChargeTime = (uint16)((sint32)
        ((rtb_Gain_iu < 0.0F) ? ((sint32)((uint16)((sint32)(-((sint32)((sint16)
        ((uint16)((float32)(-rtb_Gain_iu))))))))) : ((sint32)((uint16)
        rtb_Gain_iu))));

    /* DataTypeConversion: '<S8>/Data Type Conversion19' */
    rtb_Gain_iu = fmodf(floorf(tmpRead_5), 65536.0F);

    /* BusCreator: '<S5>/BusHYBRID_DISPLAY_FD3' incorporates:
     *  Constant: '<S5>/Const10'
     *  Constant: '<S5>/Const8'
     *  Constant: '<S5>/Const9'
     *  DataTypeConversion: '<S8>/Data Type Conversion19'
     *  DataTypeConversion: '<S8>/Data Type Conversion21'
     *  Inport: '<Root>/VeDTRR_e_OPD_HMI'
     */
    ST2B_BLUEN_ac_B.BusHYBRID_DISPLAY_FD3.E_Lv2_EstChargeTime = (uint16)((sint32)
        ((rtb_Gain_iu < 0.0F) ? ((sint32)((uint16)((sint32)(-((sint32)((sint16)
        ((uint16)((float32)(-rtb_Gain_iu))))))))) : ((sint32)((uint16)
        rtb_Gain_iu))));
    ST2B_BLUEN_ac_B.BusHYBRID_DISPLAY_FD3.E_MessageCounter_HYBRID_DISPLAY = 0U;
    ST2B_BLUEN_ac_B.BusHYBRID_DISPLAY_FD3.E_OnePedal_Drive_Sts = (uint8)
        tmpRead_6;
    ST2B_BLUEN_ac_B.BusHYBRID_DISPLAY_FD3.E_PlugAndChargeSts = false;
    ST2B_BLUEN_ac_B.BusHYBRID_DISPLAY_FD3.E_PopUpMessage18 = false;
    ST2B_BLUEN_ac_B.BusHYBRID_DISPLAY_FD3.E_Regen_Status = 0U;

    /* Outputs for Atomic SubSystem: '<S88>/Limiter1' */
    /* Switch: '<S93>/Switch1' incorporates:
     *  Constant: '<S88>/Constant Value1'
     *  RelationalOperator: '<S93>/Relational Operator'
     */
    if (81.28F < rtb_TmpSignalConversionAtVeTRAR)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 81.28F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeTRAR;
    }

    /* End of Switch: '<S93>/Switch1' */

    /* Switch: '<S93>/Switch' incorporates:
     *  Constant: '<S88>/Constant Value2'
     *  RelationalOperator: '<S93>/Relational Operator1'
     */
    if (rtb_Gain_m > 0.0F)
    {
        /* Sum: '<S88>/Sum' */
        rtb_TmpSignalConversionAtVeTRAR = rtb_Gain_m;
    }
    else
    {
        /* Sum: '<S88>/Sum' */
        rtb_TmpSignalConversionAtVeTRAR = 0.0F;
    }

    /* End of Switch: '<S93>/Switch' */
    /* End of Outputs for SubSystem: '<S88>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S89>/Limiter1' */
    /* Switch: '<S94>/Switch1' incorporates:
     *  Constant: '<S89>/Constant Value1'
     *  RelationalOperator: '<S94>/Relational Operator'
     */
    if (1008.0F < rtb_TmpSignalConversionAtVeS_ae)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 1008.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeS_ae;
    }

    /* End of Switch: '<S94>/Switch1' */

    /* Switch: '<S94>/Switch' incorporates:
     *  Constant: '<S89>/Constant Value2'
     *  RelationalOperator: '<S94>/Relational Operator1'
     */
    if (rtb_Gain_m > -300.16F)
    {
        rtb_Gain_iu = rtb_Gain_m;
    }
    else
    {
        rtb_Gain_iu = -300.16F;
    }

    /* End of Switch: '<S94>/Switch' */
    /* End of Outputs for SubSystem: '<S89>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S90>/Limiter1' */
    /* Switch: '<S95>/Switch1' incorporates:
     *  Constant: '<S90>/Constant Value1'
     *  RelationalOperator: '<S95>/Relational Operator'
     */
    if (1008.0F < rtb_TmpSignalConversionAtVeSR_n)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 1008.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeSR_n;
    }

    /* End of Switch: '<S95>/Switch1' */

    /* Switch: '<S95>/Switch' incorporates:
     *  Constant: '<S90>/Constant Value2'
     *  RelationalOperator: '<S95>/Relational Operator1'
     */
    if (rtb_Gain_m > -300.16F)
    {
        rtb_Gain_iu_0 = rtb_Gain_m;
    }
    else
    {
        rtb_Gain_iu_0 = -300.16F;
    }

    /* End of Switch: '<S95>/Switch' */
    /* End of Outputs for SubSystem: '<S90>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S91>/Limiter1' */
    /* Switch: '<S96>/Switch1' incorporates:
     *  Constant: '<S91>/Constant Value1'
     *  RelationalOperator: '<S96>/Relational Operator'
     */
    if (1008.0F < rtb_TmpSignalConversionAtVeSR_c)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 1008.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeSR_c;
    }

    /* End of Switch: '<S96>/Switch1' */
    /* End of Outputs for SubSystem: '<S91>/Limiter1' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen1' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeTISR_b_InputSpeedFA' */
    (void)Rte_Read_VeTISR_b_InputSpeedFA_Value(&tmpRead_r);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/ST2B_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/SigMngt'
     */
    /* Switch: '<S9>/switch' incorporates:
     *  Constant: '<S92>/Constant Value1'
     *  RelationalOperator: '<S97>/Relational Operator'
     *  Switch: '<S97>/Switch1'
     */
    if (tmpRead_r)
    {
        /* BusCreator: '<S5>/BusHYBRID_POWERTRAIN1_FD11' incorporates:
         *  Constant: '<S9>/Constant'
         *  DataTypeConversion: '<S20>/Data Type Conversion9'
         */
        ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN1_FD11.E_InputSpdRaw = 4095U;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S92>/Limiter1' */
        if (2046.0F < rtb_TmpSignalConversionAtVeTISR)
        {
            /* Switch: '<S97>/Switch1' incorporates:
             *  Constant: '<S92>/Constant Value1'
             *  Sum: '<S92>/Sum'
             */
            rtb_TmpSignalConversionAtVeSR_c = 2046.0F;
        }
        else
        {
            /* Sum: '<S92>/Sum' incorporates:
             *  Switch: '<S97>/Switch1'
             */
            rtb_TmpSignalConversionAtVeSR_c = rtb_TmpSignalConversionAtVeTISR;
        }

        /* Switch: '<S97>/Switch' incorporates:
         *  Constant: '<S92>/Constant Value2'
         *  RelationalOperator: '<S97>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeSR_c <= -2048.0F)
        {
            rtb_TmpSignalConversionAtVeSR_c = -2048.0F;
        }

        /* End of Switch: '<S97>/Switch' */
        /* End of Outputs for SubSystem: '<S92>/Limiter1' */

        /* BusCreator: '<S5>/BusHYBRID_POWERTRAIN1_FD11' incorporates:
         *  Constant: '<S92>/Constant Value'
         *  DataTypeConversion: '<S20>/Data Type Conversion9'
         *  DataTypeConversion: '<S92>/Data Type Conversion'
         *  Sum: '<S92>/Sum'
         */
        ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN1_FD11.E_InputSpdRaw = (uint16)
            ((sint32)fmodf(floorf(rtb_TmpSignalConversionAtVeSR_c - -2048.0F),
                           65536.0F));
    }

    /* End of Switch: '<S9>/switch' */

    /* BusCreator: '<S5>/BusPT_SYSTEM_FD_1_FD14' incorporates:
     *  Inport: '<Root>/VeTRGR_b_ADAS_Allowed'
     */
    (void)Rte_Read_VeTRGR_b_ADAS_Allowed_Value
        (&ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD14.E_Propulsion_ADAS_Inhibit);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen1' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeHSER_n_InputSpeedProfile' */
    (void)Rte_Read_VeHSER_n_InputSpeedProfile_Value(&rtb_Sum_n2);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/ST2B_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/SigMngt'
     */
    /* BusCreator: '<S5>/BusHYBRID_POWERTRAIN1_FD11' incorporates:
     *  Inport: '<Root>/VeICSR_b_AdvancePrepForIdle'
     *  Inport: '<Root>/VeSRMR_b_HybFeedback_ECM'
     *  Inport: '<Root>/VeSRMR_b_SnsdTi_notVld'
     */
    (void)Rte_Read_VeSRMR_b_HybFeedback_ECM_Value
        (&ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN1_FD11.E_HybFeedback_Engine);
    (void)Rte_Read_VeSRMR_b_SnsdTi_notVld_Value
        (&ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN1_FD11.E_HybEstEngTorqV);
    (void)Rte_Read_VeICSR_b_AdvancePrepForIdle_Value
        (&ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN1_FD11.E_ECMPrepIdleRes);

    /* BusCreator: '<S5>/BusPT_SYSTEM_FD_1_FD3' incorporates:
     *  Inport: '<Root>/VeAPSR_b_Lv1PvBrkActive'
     */
    (void)Rte_Read_VeAPSR_b_Lv1PvBrkActive_Value
        (&ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_Warn_BTO_PT);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen1' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSRMR_e_EPB_Hold_Req' */
    (void)Rte_Read_VeSRMR_e_EPB_Hold_Req_Value(&tmpRead_l);

    /* Inport: '<Root>/VeASLR_e_DrvMdOvrrdKickdownSt' */
    (void)Rte_Read_VeASLR_e_DrvMdOvrrdKickdownSt_Value(&tmpRead_k);

    /* Inport: '<Root>/VeDMDR_e_TurtleMdSts' */
    (void)Rte_Read_VeDMDR_e_TurtleMdSts_Value(&tmpRead_j);

    /* Inport: '<Root>/VeSRMR_e_TransWarn2' */
    (void)Rte_Read_VeSRMR_e_TransWarn2_Value(&tmpRead_i);

    /* Inport: '<Root>/VeHMIR_e_TerrainHMIRq' */
    (void)Rte_Read_VeHMIR_e_TerrainHMIRq_Value(&tmpRead_h);

    /* Inport: '<Root>/VeHMIR_e_TerrainModeStat' */
    (void)Rte_Read_VeHMIR_e_TerrainModeStat_Value(&tmpRead_g);

    /* Inport: '<Root>/VeHMIR_e_TerrainModeDesiredStat' */
    (void)Rte_Read_VeHMIR_e_TerrainModeDesiredStat_Value(&tmpRead_f);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/ST2B_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/SigMngt'
     */
    /* BusCreator: '<S5>/BusPT_SYSTEM_FD_1_FD3' incorporates:
     *  Inport: '<Root>/VeCCTR_b_CcEngaged'
     *  Inport: '<Root>/VeCCTR_b_CcLampSts'
     *  Inport: '<Root>/VeFWDR_b_SpeedSyncAvail'
     *  Inport: '<Root>/VeHMIR_b_DrvAwayAlt'
     *  Inport: '<Root>/VeHMIR_b_DrvAwayIn'
     *  Inport: '<Root>/VeTIMR_b_Selector_Sys_Fail_Sts'
     *  Inport: '<Root>/VeTRGR_b_AutoPark_DAI'
     *  Inport: '<Root>/VeTRGR_b_CrankEnabled'
     *  Inport: '<Root>/VeTRGR_b_ParkingFailSts'
     *  Inport: '<Root>/VeTRGR_b_ParkingSts'
     */
    (void)Rte_Read_VeFWDR_b_SpeedSyncAvail_Value
        (&ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_SpeedSyncAvailable);
    (void)Rte_Read_VeTIMR_b_Selector_Sys_Fail_Sts_Value
        (&ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_Selector_SystemFailSts_PT);
    (void)Rte_Read_VeTRGR_b_ParkingSts_Value
        (&ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_ParkingSts_PT);
    (void)Rte_Read_VeTRGR_b_ParkingFailSts_Value
        (&ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_ParkingFailSts_PT);
    (void)Rte_Read_VeTRGR_b_AutoPark_DAI_Value
        (&ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_ESS_RqShftPark_PT);
    (void)Rte_Read_VeHMIR_b_DrvAwayIn_Value
        (&ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_DrvAway_Inhibit_PT);
    (void)Rte_Read_VeHMIR_b_DrvAwayAlt_Value
        (&ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_DrvAway_Alert_PT);
    (void)Rte_Read_VeCCTR_b_CcEngaged_Value
        (&ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_CruiseControlSts_PT);
    (void)Rte_Read_VeCCTR_b_CcLampSts_Value
        (&ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_CruiseControlLampSts_PT);
    (void)Rte_Read_VeTRGR_b_CrankEnabled_Value
        (&ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_CrankEnable_PT);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen1' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCCTR_v_CcCntrlSpd_Cluster_MPH' */
    (void)Rte_Read_VeCCTR_v_CcCntrlSpd_Cluster_MPH_Value(&tmpRead_e);

    /* Inport: '<Root>/VeTRGR_e_Braking_Mode_Sts' */
    (void)Rte_Read_VeTRGR_e_Braking_Mode_Sts_Value(&tmpRead_d);

    /* Inport: '<Root>/VeTRGR_e_Braking_Mode_Indication_Sts' */
    (void)Rte_Read_VeTRGR_e_Braking_Mode_Indication_Sts_Value(&tmpRead_c);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/ST2B_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/SigMngt'
     */
    /* BusCreator: '<S5>/BusPT_SYSTEM_FD_1_FD3' incorporates:
     *  Inport: '<Root>/VeGENR_b_SrvcBattReChrgFlSts'
     */
    (void)Rte_Read_VeGENR_b_SrvcBattReChrgFlSts_Value
        (&ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_AlternatorFail_PT);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen1' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSRMR_b_AHH_ModifyAccel_Req' */
    (void)Rte_Read_VeSRMR_b_AHH_ModifyAccel_Req_Value(&tmpRead_b);

    /* Inport: '<Root>/VeSRMR_e_AHH_ApplyRelease_Req' */
    (void)Rte_Read_VeSRMR_e_AHH_ApplyRelease_Req_Value(&tmpRead_a);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/ST2B_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/SigMngt'
     */
    /* BusCreator: '<S5>/BusHYBRID_POWERTRAIN1_FD3' incorporates:
     *  Inport: '<Root>/VeEOCR_b_Series_NiTi_Allowed'
     *  Inport: '<Root>/VeGENR_b_HybGenSPDtyCycPtOverAct'
     *  Inport: '<Root>/VeGENR_b_LowVoltSysFldToECM'
     *  Inport: '<Root>/VeSRAR_b_HCP_Remedial_Stop'
     *  Inport: '<Root>/VeSRMR_b_EngDFCOReq'
     */
    (void)Rte_Read_VeEOCR_b_Series_NiTi_Allowed_Value
        (&ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN1_FD3.E_NiTi_Disable);
    (void)Rte_Read_VeGENR_b_LowVoltSysFldToECM_Value
        (&ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN1_FD3.E_LV_SystemFailure);
    (void)Rte_Read_VeSRAR_b_HCP_Remedial_Stop_Value
        (&ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN1_FD3.E_Hybrid_Remedial_Stop);
    (void)Rte_Read_VeSRMR_b_EngDFCOReq_Value
        (&ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN1_FD3.E_HybDFCO_Req);
    (void)Rte_Read_VeGENR_b_HybGenSPDtyCycPtOverAct_Value
        (&ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN1_FD3.E_GeneratorSetpointOverride);

    /* BusCreator: '<S5>/BusHYBRID_POWERTRAIN1_FD11' incorporates:
     *  Constant: '<S89>/Constant Value'
     *  Constant: '<S90>/Constant Value'
     *  Constant: '<S9>/CRC_HYBRID_POWERTRAIN1'
     *  DataTypeConversion: '<S88>/Data Type Conversion'
     *  DataTypeConversion: '<S89>/Data Type Conversion'
     *  DataTypeConversion: '<S90>/Data Type Conversion'
     *  DataTypeConversion: '<S9>/Data Type Conversion3'
     *  DataTypeConversion: '<S9>/Data Type Conversion7'
     *  Gain: '<S88>/Gain'
     *  Gain: '<S89>/Gain'
     *  Gain: '<S90>/Gain'
     *  Sum: '<S89>/Sum'
     *  Sum: '<S90>/Sum'
     */
    ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN1_FD11.E_CRC_HYBRID_POWERTRAIN1 = 0U;
    ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN1_FD11.E_EngCntrlMode = (((sint32)
        tmpRead_p) != 0);
    ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN1_FD11.E_EngTrqReserveCmd = (uint8)
        ((sint32)fmodf(floorf(3.125F * rtb_TmpSignalConversionAtVeTRAR), 256.0F));
    ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN1_FD11.E_HybCmndEngTorqImmed = (uint16)
        ((sint32)fmodf(floorf(3.125F * (rtb_Gain_iu - -300.16F)), 65536.0F));
    ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN1_FD11.E_HybCmndEngTorqPrdtd = (uint16)
        ((sint32)fmodf(floorf(3.125F * (rtb_Gain_iu_0 - -300.16F)), 65536.0F));
    ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN1_FD11.E_HybCmndEngTorqRespTyp = (uint8)
        tmpRead_q;
    ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN1_FD11.E_HybCrnkAbrted =
        rtb_TmpSignalConversionAtVeSTRR;

    /* Outputs for Atomic SubSystem: '<S91>/Limiter1' */
    /* Switch: '<S96>/Switch' incorporates:
     *  Constant: '<S91>/Constant Value2'
     *  RelationalOperator: '<S96>/Relational Operator1'
     */
    if (rtb_Gain_m <= -300.16F)
    {
        rtb_Gain_m = -300.16F;
    }

    /* End of Switch: '<S96>/Switch' */
    /* End of Outputs for SubSystem: '<S91>/Limiter1' */

    /* BusCreator: '<S5>/BusHYBRID_POWERTRAIN1_FD11' incorporates:
     *  Constant: '<S5>/Const23'
     *  Constant: '<S91>/Constant Value'
     *  DataTypeConversion: '<S91>/Data Type Conversion'
     *  DataTypeConversion: '<S9>/Data Type Conversion13'
     *  Gain: '<S91>/Gain'
     *  SignalConversion generated from: '<S2>/VeHSER_e_RngStOnCAN'
     *  Sum: '<S91>/Sum'
     */
    ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN1_FD11.E_HybEstEngTorq = (uint16)
        ((sint32)fmodf(floorf((rtb_Gain_m - -300.16F) * 3.125F), 65536.0F));
    ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN1_FD11.E_HybFstTrqRq_Trans = false;
    ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN1_FD11.E_HybTransSt = (uint8)
        rtb_TmpSignalConversionAtVeHSER;
    ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN1_FD11.E_Hybrid_Remedial_Stop =
        rtb_TmpSignalConversionAtVeST_f;
    ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN1_FD11.E_MessageCounter_HYBRID_POWERTRAIN1
        = 0U;
    ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN1_FD11.E_PropulsionSystemActive =
        rtb_TmpSignalConversionAtVeHPMR;

    /* DataTypeConversion: '<S9>/Data Type Conversion18' */
    rtb_Gain_iu = fmodf(floorf(rtb_Sum_n2), 65536.0F);

    /* BusCreator: '<S5>/BusHYBRID_POWERTRAIN1_FD11' incorporates:
     *  DataTypeConversion: '<S9>/Data Type Conversion18'
     */
    ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN1_FD11.E_TransInpSpdPrfl = (uint16)
        ((sint32)((rtb_Gain_iu < 0.0F) ? ((sint32)((uint16)((sint32)(-((sint32)
               ((sint16)((uint16)((float32)(-rtb_Gain_iu))))))))) : ((sint32)
           ((uint16)rtb_Gain_iu))));

    /* BusCreator: '<S5>/BusHYBRID_POWERTRAIN1_FD3' incorporates:
     *  Constant: '<S10>/CRC_HYBRID_POWERTRAIN1'
     *  Constant: '<S5>/Const11'
     *  DataTypeConversion: '<S9>/Data Type Conversion13'
     *  SignalConversion generated from: '<S2>/VeHSER_e_RngStOnCAN'
     */
    ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN1_FD3.E_CRC_HYBRID_POWERTRAIN1 = 0U;
    ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN1_FD3.E_DriveReady =
        rtb_TmpSignalConversionAtVeHM_n;
    ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN1_FD3.E_HVBatteryShutOff = true;
    ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN1_FD3.E_HybTransSt = (uint8)
        rtb_TmpSignalConversionAtVeHSER;
    ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN1_FD3.E_MessageCounter_HYBRID_POWERTRAIN1
        = 0U;
    ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN1_FD3.E_PropulsionSystemActive =
        rtb_TmpSignalConversionAtVeHPMR;

    /* BusCreator: '<S5>/BusHYBRID_POWERTRAIN1_FD5' incorporates:
     *  Constant: '<S11>/CRC_HYBRID_POWERTRAIN1'
     */
    ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN1_FD5.E_CRC_HYBRID_POWERTRAIN1 = 0U;
    ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN1_FD5.E_HybCrnkAbrted =
        rtb_TmpSignalConversionAtVeSTRR;
    ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN1_FD5.E_Hybrid_Remedial_Stop =
        rtb_TmpSignalConversionAtVeST_f;
    ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN1_FD5.E_MessageCounter_HYBRID_POWERTRAIN1
        = 0U;
    ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN1_FD5.E_PropulsionSystemActive =
        rtb_TmpSignalConversionAtVeHPMR;

    /* Outputs for Atomic SubSystem: '<S290>/Limiter1' */
    /* Switch: '<S292>/Switch1' incorporates:
     *  Constant: '<S290>/Constant Value1'
     *  RelationalOperator: '<S292>/Relational Operator'
     */
    if (99.568F < rtb_TmpSignalConversionAtVeDTRR)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 99.568F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeDTRR;
    }

    /* End of Switch: '<S292>/Switch1' */

    /* Switch: '<S292>/Switch' incorporates:
     *  Constant: '<S290>/Constant Value2'
     *  RelationalOperator: '<S292>/Relational Operator1'
     */
    if (rtb_Gain_m > 0.0F)
    {
        /* Sum: '<S290>/Sum' */
        rtb_Sum_n2 = rtb_Gain_m;
    }
    else
    {
        /* Sum: '<S290>/Sum' */
        rtb_Sum_n2 = 0.0F;
    }

    /* End of Switch: '<S292>/Switch' */
    /* End of Outputs for SubSystem: '<S290>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S291>/Limiter1' */
    /* Switch: '<S293>/Switch1' incorporates:
     *  Constant: '<S291>/Constant Value1'
     *  RelationalOperator: '<S293>/Relational Operator'
     */
    if (101.6F < rtb_TmpSignalConversionAtVeS_fs)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 101.6F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeS_fs;
    }

    /* End of Switch: '<S293>/Switch1' */
    /* End of Outputs for SubSystem: '<S291>/Limiter1' */

    /* BusCreator: '<S5>/BusPT_SYSTEM_FD_1_FD11' incorporates:
     *  DataTypeConversion: '<S21>/Data Type Conversion'
     *  DataTypeConversion: '<S21>/Data Type Conversion14'
     *  DataTypeConversion: '<S21>/Data Type Conversion15'
     *  DataTypeConversion: '<S21>/Data Type Conversion16'
     *  DataTypeConversion: '<S21>/Data Type Conversion7'
     *  DataTypeConversion: '<S21>/Data Type Conversion8'
     *  DataTypeConversion: '<S290>/Data Type Conversion'
     *  Gain: '<S290>/Gain'
     *  SignalConversion generated from: '<S2>/VeESSR_e_OptimdEngStrtStpType'
     *  SignalConversion generated from: '<S2>/VeESSR_e_OptimdStrtReqdActr'
     *  SignalConversion generated from: '<S2>/VeSRMR_e_PPawl_Request'
     *  SignalConversion generated from: '<S2>/VeTRGR_e_AutoPosCorrMdReq'
     */
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD11.E_APCM_Rq_PT = (uint8)
        rtb_TmpSignalConversionAtVeTR_a;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD11.E_CRC_PT_SYSTEM_FD_1 = 0U;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD11.E_DriveReady_PT =
        rtb_TmpSignalConversionAtVeHM_n;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD11.E_EVCU_END_Request_Flag_PT =
        rtb_TmpSignalConversionAtVePWMD;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD11.E_GasPedalPositionFailSts_PT =
        rtb_TmpSignalConversionAtVeS_gw;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD11.E_GasPedalPosition_PT = (uint8)
        ((sint32)fmodf(floorf(2.55102038F * rtb_Sum_n2), 256.0F));
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD11.E_GearEngagedForDisplay_PT = (uint8)
        rtb_TmpSignalConversionAtVeTRGR;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD11.E_GearEngaged_PT = (uint8)
        rtb_TmpSignalConversionAtVeS_oe;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD11.E_GearIndicationSts_PT =
        rtb_TmpSignalConversionAtVeTR_c;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD11.E_HCPFuelDisable =
        rtb_TmpSignalConversionAtVeESSR;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD11.E_Hyb_ProducingTorque =
        rtb_TmpSignalConversionAtVeES_g;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD11.E_MessageCounter_PT_SYSTEM_FD_1 = 0U;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD11.E_OptimdEngOnOffCmd =
        rtb_TmpSignalConversionAtVeE_py;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD11.E_OptimdEngStrtStpType = (uint8)
        rtb_TmpSignalConversionAtVeES_i;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD11.E_OptimdStrtReqdActr = (uint8)
        rtb_TmpSignalConversionAtVeES_n;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD11.E_ParkCmd_PT = (uint8)
        rtb_TmpSignalConversionAtVeS_or;

    /* Outputs for Atomic SubSystem: '<S291>/Limiter1' */
    /* Switch: '<S293>/Switch' incorporates:
     *  Constant: '<S291>/Constant Value2'
     *  RelationalOperator: '<S293>/Relational Operator1'
     */
    if (rtb_Gain_m <= 0.0F)
    {
        rtb_Gain_m = 0.0F;
    }

    /* End of Switch: '<S293>/Switch' */
    /* End of Outputs for SubSystem: '<S291>/Limiter1' */

    /* BusCreator: '<S5>/BusPT_SYSTEM_FD_1_FD11' incorporates:
     *  DataTypeConversion: '<S21>/Data Type Conversion21'
     *  DataTypeConversion: '<S291>/Data Type Conversion'
     *  Gain: '<S291>/Gain'
     */
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD11.E_PdlPosActual_PT = (uint8)((sint32)
        fmodf(floorf(2.5F * rtb_Gain_m), 256.0F));
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD11.E_PowertrainPrplsnActv_PT =
        rtb_TmpSignalConversionAtVeHPMR;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD11.E_R_SHFT_LOCK_PT =
        rtb_TmpSignalConversionAtVeTR_i;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD11.E_ShiftLeverLockReq_PT =
        rtb_TmpSignalConversionAtVeT_gm;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD11.E_ShiftLeverPosition_PT = (uint8)
        rtb_TmpSignalConversionAtVeSR_f;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD11.E_TransmissionFailSts_PT =
        rtb_TmpSignalConversionAtVeTR_f;

    /* Outputs for Atomic SubSystem: '<S294>/Limiter1' */
    /* Switch: '<S296>/Switch1' incorporates:
     *  Constant: '<S294>/Constant Value1'
     *  RelationalOperator: '<S296>/Relational Operator'
     */
    if (99.568F < rtb_TmpSignalConversionAtVeDTRR)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 99.568F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeDTRR;
    }

    /* End of Switch: '<S296>/Switch1' */

    /* Switch: '<S296>/Switch' incorporates:
     *  Constant: '<S294>/Constant Value2'
     *  RelationalOperator: '<S296>/Relational Operator1'
     */
    if (rtb_Gain_m > 0.0F)
    {
        /* Sum: '<S294>/Sum' */
        rtb_Sum_n2 = rtb_Gain_m;
    }
    else
    {
        /* Sum: '<S294>/Sum' */
        rtb_Sum_n2 = 0.0F;
    }

    /* End of Switch: '<S296>/Switch' */
    /* End of Outputs for SubSystem: '<S294>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S295>/Limiter1' */
    /* Switch: '<S297>/Switch1' incorporates:
     *  Constant: '<S295>/Constant Value1'
     *  RelationalOperator: '<S297>/Relational Operator'
     */
    if (101.6F < rtb_TmpSignalConversionAtVeS_fs)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 101.6F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeS_fs;
    }

    /* End of Switch: '<S297>/Switch1' */
    /* End of Outputs for SubSystem: '<S295>/Limiter1' */

    /* BusCreator: '<S5>/BusPT_SYSTEM_FD_1_FD14' incorporates:
     *  Constant: '<S22>/CRC_PT_SYSTEM_FD_1'
     *  DataTypeConversion: '<S22>/Data Type Conversion6'
     *  DataTypeConversion: '<S22>/Data Type Conversion7'
     *  DataTypeConversion: '<S294>/Data Type Conversion'
     *  Gain: '<S294>/Gain'
     */
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD14.E_CRC_PT_SYSTEM_FD_1 = 0U;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD14.E_DriveReady_PT =
        rtb_TmpSignalConversionAtVeHM_n;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD14.E_DriverPowerReq_PT = 0U;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD14.E_GasPedalPositionFailSts_PT =
        rtb_TmpSignalConversionAtVeS_gw;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD14.E_GasPedalPosition_PT = (uint8)
        ((sint32)fmodf(floorf(2.55102038F * rtb_Sum_n2), 256.0F));
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD14.E_GearEngagedForDisplay_PT = (uint8)
        rtb_TmpSignalConversionAtVeTRGR;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD14.E_GearEngaged_PT = (uint8)
        rtb_TmpSignalConversionAtVeS_oe;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD14.E_ISASts_PT =
        rtb_TmpSignalConversionAtVeAS_b;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD14.E_MessageCounter_PT_SYSTEM_FD_1 = 0U;

    /* Outputs for Atomic SubSystem: '<S295>/Limiter1' */
    /* Switch: '<S297>/Switch' incorporates:
     *  Constant: '<S295>/Constant Value2'
     *  RelationalOperator: '<S297>/Relational Operator1'
     */
    if (rtb_Gain_m <= 0.0F)
    {
        rtb_Gain_m = 0.0F;
    }

    /* End of Switch: '<S297>/Switch' */
    /* End of Outputs for SubSystem: '<S295>/Limiter1' */

    /* BusCreator: '<S5>/BusPT_SYSTEM_FD_1_FD14' incorporates:
     *  DataTypeConversion: '<S22>/Data Type Conversion13'
     *  DataTypeConversion: '<S22>/Data Type Conversion14'
     *  DataTypeConversion: '<S22>/Data Type Conversion15'
     *  DataTypeConversion: '<S295>/Data Type Conversion'
     *  Gain: '<S295>/Gain'
     */
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD14.E_PdlPosActual_PT = (uint8)((sint32)
        fmodf(floorf(2.5F * rtb_Gain_m), 256.0F));
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD14.E_PowertrainPrplsnActv_PT =
        rtb_TmpSignalConversionAtVeHPMR;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD14.E_ShiftLeverPosition_PT = (uint8)
        rtb_TmpSignalConversionAtVeSR_f;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD14.E_SpeedLimitSts_PT = (uint8)
        rtb_TmpSignalConversionAtVeASLR;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD14.E_TargetGear_PT = (uint8)
        rtb_TmpSignalConversionAtVeS_io;

    /* Outputs for Atomic SubSystem: '<S298>/Limiter1' */
    /* Switch: '<S305>/Switch1' incorporates:
     *  Constant: '<S298>/Constant Value1'
     *  RelationalOperator: '<S305>/Relational Operator'
     */
    if (1217.0F < rtb_TmpSignalConversionAtVePLTR)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 1217.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVePLTR;
    }

    /* End of Switch: '<S305>/Switch1' */

    /* Switch: '<S305>/Switch' incorporates:
     *  Constant: '<S298>/Constant Value2'
     *  RelationalOperator: '<S305>/Relational Operator1'
     */
    if (rtb_Gain_m > 300.0F)
    {
        rtb_Gain_iu = rtb_Gain_m;
    }
    else
    {
        rtb_Gain_iu = 300.0F;
    }

    /* End of Switch: '<S305>/Switch' */
    /* End of Outputs for SubSystem: '<S298>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S300>/Limiter1' */
    /* Switch: '<S307>/Switch1' incorporates:
     *  Constant: '<S300>/Constant Value1'
     *  RelationalOperator: '<S307>/Relational Operator'
     */
    if (511.875F < rtb_TmpSignalConversionAtVeCCTR)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 511.875F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeCCTR;
    }

    /* End of Switch: '<S307>/Switch1' */

    /* Switch: '<S307>/Switch' incorporates:
     *  Constant: '<S300>/Constant Value2'
     *  RelationalOperator: '<S307>/Relational Operator1'
     */
    if (rtb_Gain_m > 0.0F)
    {
        /* Sum: '<S300>/Sum' */
        rtb_TmpSignalConversionAtVeCCTR = rtb_Gain_m;
    }
    else
    {
        /* Sum: '<S300>/Sum' */
        rtb_TmpSignalConversionAtVeCCTR = 0.0F;
    }

    /* End of Switch: '<S307>/Switch' */
    /* End of Outputs for SubSystem: '<S300>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S301>/Limiter1' */
    /* Switch: '<S308>/Switch1' incorporates:
     *  Constant: '<S301>/Constant Value1'
     *  RelationalOperator: '<S308>/Relational Operator'
     */
    if (99.568F < rtb_TmpSignalConversionAtVeDTRR)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 99.568F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeDTRR;
    }

    /* End of Switch: '<S308>/Switch1' */

    /* Switch: '<S308>/Switch' incorporates:
     *  Constant: '<S301>/Constant Value2'
     *  RelationalOperator: '<S308>/Relational Operator1'
     */
    if (rtb_Gain_m > 0.0F)
    {
        /* Sum: '<S301>/Sum' */
        rtb_TmpSignalConversionAtVeDTRR = rtb_Gain_m;
    }
    else
    {
        /* Sum: '<S301>/Sum' */
        rtb_TmpSignalConversionAtVeDTRR = 0.0F;
    }

    /* End of Switch: '<S308>/Switch' */
    /* End of Outputs for SubSystem: '<S301>/Limiter1' */

    /* DataTypeConversion: '<S23>/Data Type Conversion25' */
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_GearEngaged_PT = (uint8)
        rtb_TmpSignalConversionAtVeS_oe;

    /* Outputs for Atomic SubSystem: '<S302>/Limiter1' */
    /* Switch: '<S309>/Switch1' incorporates:
     *  Constant: '<S302>/Constant Value1'
     *  RelationalOperator: '<S309>/Relational Operator'
     */
    if (101.6F < rtb_TmpSignalConversionAtVeS_fs)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 101.6F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeS_fs;
    }

    /* End of Switch: '<S309>/Switch1' */

    /* Switch: '<S309>/Switch' incorporates:
     *  Constant: '<S302>/Constant Value2'
     *  RelationalOperator: '<S309>/Relational Operator1'
     */
    if (rtb_Gain_m <= 0.0F)
    {
        rtb_Gain_m = 0.0F;
    }

    /* End of Switch: '<S309>/Switch' */
    /* End of Outputs for SubSystem: '<S302>/Limiter1' */

    /* DataTypeConversion: '<S302>/Data Type Conversion' incorporates:
     *  Gain: '<S302>/Gain'
     */
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_PdlPosActual_PT = (uint8)((sint32)
        fmodf(floorf(2.5F * rtb_Gain_m), 256.0F));

    /* Outputs for Atomic SubSystem: '<S303>/Limiter1' */
    /* Switch: '<S310>/Switch1' incorporates:
     *  Constant: '<S303>/Constant Value1'
     *  RelationalOperator: '<S310>/Relational Operator'
     */
    if (5.0F < rtb_TmpSignalConversionAtVeAPSR)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 5.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeAPSR;
    }

    /* End of Switch: '<S310>/Switch1' */

    /* Switch: '<S310>/Switch' incorporates:
     *  Constant: '<S303>/Constant Value2'
     *  RelationalOperator: '<S310>/Relational Operator1'
     */
    if (rtb_Gain_m <= 0.0F)
    {
        rtb_Gain_m = 0.0F;
    }

    /* End of Switch: '<S310>/Switch' */
    /* End of Outputs for SubSystem: '<S303>/Limiter1' */

    /* DataTypeConversion: '<S303>/Data Type Conversion' incorporates:
     *  Gain: '<S303>/Gain'
     */
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_RawPVS1_PT = (uint8)((sint32)fmodf
        (floorf(51.0001106F * rtb_Gain_m), 256.0F));

    /* Outputs for Atomic SubSystem: '<S304>/Limiter1' */
    /* Switch: '<S311>/Switch1' incorporates:
     *  Constant: '<S304>/Constant Value1'
     *  RelationalOperator: '<S311>/Relational Operator'
     */
    if (5.0F < rtb_TmpSignalConversionAtVeAP_f)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 5.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeAP_f;
    }

    /* End of Switch: '<S311>/Switch1' */

    /* Switch: '<S311>/Switch' incorporates:
     *  Constant: '<S304>/Constant Value2'
     *  RelationalOperator: '<S311>/Relational Operator1'
     */
    if (rtb_Gain_m <= 0.0F)
    {
        rtb_Gain_m = 0.0F;
    }

    /* End of Switch: '<S311>/Switch' */
    /* End of Outputs for SubSystem: '<S304>/Limiter1' */

    /* DataTypeConversion: '<S304>/Data Type Conversion' incorporates:
     *  Gain: '<S304>/Gain'
     */
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_RawPVS2_PT = (uint8)((sint32)fmodf
        (floorf(51.0001106F * rtb_Gain_m), 256.0F));

    /* DataTypeConversion: '<S23>/Data Type Conversion39' */
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_ShiftLeverPosition_PT = (uint8)
        rtb_TmpSignalConversionAtVeSR_f;

    /* DataTypeConversion: '<S23>/Data Type Conversion40' */
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_SpeedLimitSts_PT = (uint8)
        rtb_TmpSignalConversionAtVeASLR;

    /* DataTypeConversion: '<S23>/Data Type Conversion42' */
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_TargetGear_PT = (uint8)
        rtb_TmpSignalConversionAtVeS_io;

    /* BusCreator: '<S5>/BusPT_SYSTEM_FD_1_FD3' incorporates:
     *  Constant: '<S298>/Constant Value'
     *  Constant: '<S5>/Const12'
     *  Constant: '<S5>/Const13'
     *  DataTypeConversion: '<S21>/Data Type Conversion'
     *  DataTypeConversion: '<S23>/Data Type Conversion'
     *  DataTypeConversion: '<S23>/Data Type Conversion10'
     *  DataTypeConversion: '<S23>/Data Type Conversion2'
     *  DataTypeConversion: '<S23>/Data Type Conversion9'
     *  DataTypeConversion: '<S298>/Data Type Conversion'
     *  DataTypeConversion: '<S300>/Data Type Conversion'
     *  Gain: '<S298>/Gain'
     *  Gain: '<S300>/Gain'
     *  Inport: '<Root>/VeTRGR_e_Braking_Mode_Indication_Sts'
     *  Inport: '<Root>/VeTRGR_e_Braking_Mode_Sts'
     *  SignalConversion generated from: '<S2>/VeTRGR_e_AutoPosCorrMdReq'
     *  Sum: '<S298>/Sum'
     */
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_AHH_Apply_Release_Rqst = (uint8)
        tmpRead_a;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_AHH_Modify_Accel_Rq = tmpRead_b ?
        ((uint8)1) : ((uint8)0);
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_APCM_Rq_PT = (uint8)
        rtb_TmpSignalConversionAtVeTR_a;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_AWD_Status_PT = 0U;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_AWD_SysStat = 0U;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_AtmosphericPressure_PT = (uint8)
        ((sint32)fmodf(floorf(0.277777791F * (rtb_Gain_iu - 300.0F)), 256.0F));
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_BPCM_HV_SOC1 = 0U;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_Braking_Mode_Indication_Sts = (uint8)
        tmpRead_c;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_Braking_Mode_Sts = (uint8)tmpRead_d;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_CC_SetSpdDspl_KPH_PT = (uint16)
        ((sint32)fmodf(floorf(16.0F * rtb_TmpSignalConversionAtVeCCTR), 65536.0F));

    /* DataTypeConversion: '<S23>/Data Type Conversion12' */
    rtb_Gain_iu = fmodf(floorf(tmpRead_e), 256.0F);

    /* BusCreator: '<S5>/BusPT_SYSTEM_FD_1_FD3' incorporates:
     *  Constant: '<S5>/Const16'
     *  Constant: '<S5>/Const17'
     *  DataTypeConversion: '<S23>/Data Type Conversion12'
     *  DataTypeConversion: '<S23>/Data Type Conversion24'
     *  DataTypeConversion: '<S23>/Data Type Conversion43'
     *  DataTypeConversion: '<S23>/Data Type Conversion44'
     *  DataTypeConversion: '<S23>/Data Type Conversion45'
     *  DataTypeConversion: '<S23>/Data Type Conversion47'
     *  DataTypeConversion: '<S23>/Data Type Conversion48'
     *  DataTypeConversion: '<S23>/Data Type Conversion49'
     *  DataTypeConversion: '<S23>/Data Type Conversion50'
     *  DataTypeConversion: '<S301>/Data Type Conversion'
     *  Gain: '<S301>/Gain'
     *  Inport: '<Root>/VeDMDR_e_TurtleMdSts'
     *  Inport: '<Root>/VeHMIR_e_TerrainHMIRq'
     *  Inport: '<Root>/VeHMIR_e_TerrainModeDesiredStat'
     *  Inport: '<Root>/VeHMIR_e_TerrainModeStat'
     */
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_CC_SetSpdDspl_MPH_PT = (uint8)
        ((sint32)((rtb_Gain_iu < 0.0F) ? ((sint32)((uint8)((sint32)(-((sint32)
               ((sint8)((uint8)((float32)(-rtb_Gain_iu))))))))) : ((sint32)
           ((uint8)rtb_Gain_iu))));
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_CRC_PT_SYSTEM_FD_1 = 0U;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_DriveReady_PT =
        rtb_TmpSignalConversionAtVeHM_n;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_DriverPowerReq_PT = 0U;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_GasPedalPositionFailSts_PT =
        rtb_TmpSignalConversionAtVeS_gw;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_GasPedalPosition_PT = (uint8)
        ((sint32)fmodf(floorf(2.55102038F * rtb_TmpSignalConversionAtVeDTRR),
                       256.0F));
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_GearEngagedForDisplay_PT = (uint8)
        rtb_TmpSignalConversionAtVeTRGR;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_GearIndicationSts_PT =
        rtb_TmpSignalConversionAtVeTR_c;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_HAS_SoH_PT = false;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_ISASts_PT =
        rtb_TmpSignalConversionAtVeAS_b;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_MessageCounter_PT_SYSTEM_FD_1 = 0U;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_PowertrainPrplsnActv_PT =
        rtb_TmpSignalConversionAtVeHPMR;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_R_SHFT_LOCK_PT =
        rtb_TmpSignalConversionAtVeTR_i;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_ShiftLeverLockReq_PT =
        rtb_TmpSignalConversionAtVeT_gm;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_TerrainModeDesiredStat_PT = (uint8)
        tmpRead_f;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_TerrainModeStat_PT = (uint8)
        tmpRead_g;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_Terrain_HMI_Rq_PT = (uint8)tmpRead_h;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_TransmissionFailSts_PT =
        rtb_TmpSignalConversionAtVeTR_f;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_TransmissionWarnings_PT = (uint8)
        tmpRead_i;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_TurtleModeSts_PT = (uint8)tmpRead_j;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_VehSpd_Overridden_PT = (uint8)
        tmpRead_k;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_Vehicle_Hold_Rq_PT = (((sint32)
        tmpRead_l) != 0);
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3.E_WED_STATUS = 0U;

    /* BusCreator: '<S5>/BusPT_SYSTEM_FD_1_FD5' incorporates:
     *  Constant: '<S24>/CRC_PT_SYSTEM_FD_1'
     *  DataTypeConversion: '<S21>/Data Type Conversion14'
     *  DataTypeConversion: '<S21>/Data Type Conversion15'
     *  DataTypeConversion: '<S21>/Data Type Conversion16'
     *  DataTypeConversion: '<S24>/Data Type Conversion14'
     *  DataTypeConversion: '<S24>/Data Type Conversion4'
     *  DataTypeConversion: '<S24>/Data Type Conversion5'
     *  SignalConversion generated from: '<S2>/VeESSR_e_OptimdEngStrtStpType'
     *  SignalConversion generated from: '<S2>/VeESSR_e_OptimdStrtReqdActr'
     *  SignalConversion generated from: '<S2>/VeSRMR_e_PPawl_Request'
     */
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD5.E_CRC_PT_SYSTEM_FD_1 = 0U;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD5.E_DriveReady_PT =
        rtb_TmpSignalConversionAtVeHM_n;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD5.E_EVCU_END_Request_Flag_PT =
        rtb_TmpSignalConversionAtVePWMD;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD5.E_GearEngagedForDisplay_PT = (uint8)
        rtb_TmpSignalConversionAtVeTRGR;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD5.E_GearEngaged_PT = (uint8)
        rtb_TmpSignalConversionAtVeS_oe;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD5.E_HCPFuelDisable =
        rtb_TmpSignalConversionAtVeESSR;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD5.E_Hyb_ProducingTorque =
        rtb_TmpSignalConversionAtVeES_g;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD5.E_MessageCounter_PT_SYSTEM_FD_1 = 0U;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD5.E_OptimdEngOnOffCmd =
        rtb_TmpSignalConversionAtVeE_py;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD5.E_OptimdEngStrtStpType = (uint8)
        rtb_TmpSignalConversionAtVeES_i;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD5.E_OptimdStrtReqdActr = (uint8)
        rtb_TmpSignalConversionAtVeES_n;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD5.E_ParkCmd_PT = (uint8)
        rtb_TmpSignalConversionAtVeS_or;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD5.E_PowertrainPrplsnActv_PT =
        rtb_TmpSignalConversionAtVeHPMR;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD5.E_ShiftLeverPosition_PT = (uint8)
        rtb_TmpSignalConversionAtVeSR_f;

    /* Outputs for Atomic SubSystem: '<S312>/Limiter1' */
    /* Switch: '<S321>/Switch1' incorporates:
     *  Constant: '<S312>/Constant Value1'
     *  RelationalOperator: '<S321>/Relational Operator'
     */
    if (1217.0F < rtb_TmpSignalConversionAtVePLTR)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 1217.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVePLTR;
    }

    /* End of Switch: '<S321>/Switch1' */

    /* Switch: '<S321>/Switch' incorporates:
     *  Constant: '<S312>/Constant Value2'
     *  RelationalOperator: '<S321>/Relational Operator1'
     */
    if (rtb_Gain_m > 300.0F)
    {
        rtb_Gain_iu = rtb_Gain_m;
    }
    else
    {
        rtb_Gain_iu = 300.0F;
    }

    /* End of Switch: '<S321>/Switch' */
    /* End of Outputs for SubSystem: '<S312>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S313>/Limiter1' */
    /* Switch: '<S322>/Switch1' incorporates:
     *  Constant: '<S313>/Constant Value1'
     *  RelationalOperator: '<S322>/Relational Operator'
     */
    if (65535.0F < rtb_TmpSignalConversionAtVeWT_m)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 65535.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeWT_m;
    }

    /* End of Switch: '<S322>/Switch1' */

    /* Switch: '<S322>/Switch' incorporates:
     *  Constant: '<S313>/Constant Value2'
     *  RelationalOperator: '<S322>/Relational Operator1'
     */
    if (rtb_Gain_m > -65534.0F)
    {
        rtb_Gain_iu_0 = rtb_Gain_m;
    }
    else
    {
        rtb_Gain_iu_0 = -65534.0F;
    }

    /* End of Switch: '<S322>/Switch' */
    /* End of Outputs for SubSystem: '<S313>/Limiter1' */

    /* Switch: '<S25>/switch' incorporates:
     *  Constant: '<S315>/Constant Value1'
     *  RelationalOperator: '<S324>/Relational Operator'
     *  Switch: '<S324>/Switch1'
     */
    if (((sint32)rtb_TmpSignalConversionAtVeS_gx) != 0)
    {
        /* BusCreator: '<S5>/BusPT_SYSTEM_FD_4_FD11' incorporates:
         *  Constant: '<S25>/Constant'
         *  DataTypeConversion: '<S20>/Data Type Conversion5'
         */
        ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD11.E_Ft_RrCouplingTrq_Actual_PT =
            MAX_uint8_T;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S315>/Limiter1' */
        if (3059.0F < rtb_TmpSignalConversionAtVeSR1B)
        {
            /* Switch: '<S324>/Switch1' incorporates:
             *  Constant: '<S315>/Constant Value1'
             *  Gain: '<S315>/Gain'
             */
            rtb_Gain_m = 3059.0F;
        }
        else
        {
            /* Gain: '<S315>/Gain' incorporates:
             *  Switch: '<S324>/Switch1'
             */
            rtb_Gain_m = rtb_TmpSignalConversionAtVeSR1B;
        }

        /* Switch: '<S324>/Switch' incorporates:
         *  Constant: '<S315>/Constant Value2'
         *  RelationalOperator: '<S324>/Relational Operator1'
         */
        if (rtb_Gain_m <= 0.0F)
        {
            rtb_Gain_m = 0.0F;
        }

        /* End of Switch: '<S324>/Switch' */
        /* End of Outputs for SubSystem: '<S315>/Limiter1' */

        /* BusCreator: '<S5>/BusPT_SYSTEM_FD_4_FD11' incorporates:
         *  DataTypeConversion: '<S20>/Data Type Conversion5'
         *  DataTypeConversion: '<S315>/Data Type Conversion'
         *  Gain: '<S315>/Gain'
         */
        ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD11.E_Ft_RrCouplingTrq_Actual_PT =
            (uint8)((sint32)fmodf(floorf(0.0833333358F * rtb_Gain_m), 256.0F));
    }

    /* End of Switch: '<S25>/switch' */

    /* Switch: '<S25>/switch1' incorporates:
     *  Constant: '<S316>/Constant Value1'
     *  RelationalOperator: '<S325>/Relational Operator'
     *  Switch: '<S325>/Switch1'
     */
    if (((sint32)rtb_TmpSignalConversionAtVe_j1n) != 0)
    {
        /* BusCreator: '<S5>/BusPT_SYSTEM_FD_4_FD11' incorporates:
         *  Constant: '<S25>/Constant1'
         *  DataTypeConversion: '<S20>/Data Type Conversion6'
         */
        ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD11.E_Ft_RrCouplingTrq_Desired_PT =
            MAX_uint8_T;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S316>/Limiter1' */
        if (3059.0F < rtb_TmpSignalConversionAtVeS_ln)
        {
            /* Switch: '<S325>/Switch1' incorporates:
             *  Constant: '<S316>/Constant Value1'
             *  Gain: '<S316>/Gain'
             */
            rtb_Gain_m = 3059.0F;
        }
        else
        {
            /* Gain: '<S316>/Gain' incorporates:
             *  Switch: '<S325>/Switch1'
             */
            rtb_Gain_m = rtb_TmpSignalConversionAtVeS_ln;
        }

        /* Switch: '<S325>/Switch' incorporates:
         *  Constant: '<S316>/Constant Value2'
         *  RelationalOperator: '<S325>/Relational Operator1'
         */
        if (rtb_Gain_m <= 0.0F)
        {
            rtb_Gain_m = 0.0F;
        }

        /* End of Switch: '<S325>/Switch' */
        /* End of Outputs for SubSystem: '<S316>/Limiter1' */

        /* BusCreator: '<S5>/BusPT_SYSTEM_FD_4_FD11' incorporates:
         *  DataTypeConversion: '<S20>/Data Type Conversion6'
         *  DataTypeConversion: '<S316>/Data Type Conversion'
         *  Gain: '<S316>/Gain'
         */
        ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD11.E_Ft_RrCouplingTrq_Desired_PT =
            (uint8)((sint32)fmodf(floorf(0.0833333358F * rtb_Gain_m), 256.0F));
    }

    /* End of Switch: '<S25>/switch1' */

    /* Switch: '<S25>/switch2' incorporates:
     *  Constant: '<S317>/Constant Value1'
     *  RelationalOperator: '<S326>/Relational Operator'
     *  Switch: '<S326>/Switch1'
     */
    if (((sint32)rtb_TmpSignalConversionAtVeS_it) != 0)
    {
        /* BusCreator: '<S5>/BusPT_SYSTEM_FD_4_FD11' incorporates:
         *  Constant: '<S25>/Constant2'
         *  DataTypeConversion: '<S273>/Data Type Conversion'
         */
        ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD11.E_LHFWheelSpeed_PT = 8191U;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S317>/Limiter1' */
        if (511.875F < rtb_TmpSignalConversionAtVeS_ht)
        {
            /* Switch: '<S326>/Switch1' incorporates:
             *  Constant: '<S317>/Constant Value1'
             *  Gain: '<S317>/Gain'
             */
            rtb_Gain_m = 511.875F;
        }
        else
        {
            /* Gain: '<S317>/Gain' incorporates:
             *  Switch: '<S326>/Switch1'
             */
            rtb_Gain_m = rtb_TmpSignalConversionAtVeS_ht;
        }

        /* Switch: '<S326>/Switch' incorporates:
         *  Constant: '<S317>/Constant Value2'
         *  RelationalOperator: '<S326>/Relational Operator1'
         */
        if (rtb_Gain_m <= 0.0F)
        {
            rtb_Gain_m = 0.0F;
        }

        /* End of Switch: '<S326>/Switch' */
        /* End of Outputs for SubSystem: '<S317>/Limiter1' */

        /* BusCreator: '<S5>/BusPT_SYSTEM_FD_4_FD11' incorporates:
         *  DataTypeConversion: '<S273>/Data Type Conversion'
         *  DataTypeConversion: '<S317>/Data Type Conversion'
         *  Gain: '<S317>/Gain'
         */
        ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD11.E_LHFWheelSpeed_PT = (uint16)
            ((sint32)fmodf(floorf(16.0F * rtb_Gain_m), 65536.0F));
    }

    /* End of Switch: '<S25>/switch2' */

    /* Switch: '<S25>/switch3' incorporates:
     *  Constant: '<S318>/Constant Value1'
     *  RelationalOperator: '<S327>/Relational Operator'
     *  Switch: '<S327>/Switch1'
     */
    if (((sint32)rtb_TmpSignalConversionAtVeSR_b) != 0)
    {
        /* BusCreator: '<S5>/BusPT_SYSTEM_FD_4_FD11' incorporates:
         *  Constant: '<S25>/Constant3'
         *  Switch: '<S20>/switch'
         */
        ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD11.E_RHFWheelSpeed_PT = 8191U;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S318>/Limiter1' */
        if (511.875F < rtb_TmpSignalConversionAtVeS_gc)
        {
            /* Switch: '<S327>/Switch1' incorporates:
             *  Constant: '<S318>/Constant Value1'
             *  Gain: '<S318>/Gain'
             */
            rtb_Gain_m = 511.875F;
        }
        else
        {
            /* Gain: '<S318>/Gain' incorporates:
             *  Switch: '<S327>/Switch1'
             */
            rtb_Gain_m = rtb_TmpSignalConversionAtVeS_gc;
        }

        /* Switch: '<S327>/Switch' incorporates:
         *  Constant: '<S318>/Constant Value2'
         *  RelationalOperator: '<S327>/Relational Operator1'
         */
        if (rtb_Gain_m <= 0.0F)
        {
            rtb_Gain_m = 0.0F;
        }

        /* End of Switch: '<S327>/Switch' */
        /* End of Outputs for SubSystem: '<S318>/Limiter1' */

        /* BusCreator: '<S5>/BusPT_SYSTEM_FD_4_FD11' incorporates:
         *  DataTypeConversion: '<S318>/Data Type Conversion'
         *  Gain: '<S318>/Gain'
         *  Switch: '<S20>/switch'
         */
        ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD11.E_RHFWheelSpeed_PT = (uint16)
            ((sint32)fmodf(floorf(16.0F * rtb_Gain_m), 65536.0F));
    }

    /* End of Switch: '<S25>/switch3' */

    /* Switch: '<S25>/switch4' incorporates:
     *  Constant: '<S319>/Constant Value1'
     *  RelationalOperator: '<S328>/Relational Operator'
     *  Switch: '<S328>/Switch1'
     */
    if (((sint32)rtb_TmpSignalConversionAtVeSR_p) != 0)
    {
        /* BusCreator: '<S5>/BusPT_SYSTEM_FD_4_FD11' incorporates:
         *  Constant: '<S25>/Constant4'
         *  DataTypeConversion: '<S20>/Data Type Conversion9'
         */
        ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD11.E_TotalAxle_Rq_BSM_PT =
            MAX_uint16_T;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S319>/Limiter1' */
        if (65535.0F < rtb_TmpSignalConversionAtVeS_cr)
        {
            /* Switch: '<S328>/Switch1' incorporates:
             *  Constant: '<S319>/Constant Value1'
             *  Gain: '<S319>/Gain'
             */
            rtb_Gain_m = 65535.0F;
        }
        else
        {
            /* Gain: '<S319>/Gain' incorporates:
             *  Switch: '<S328>/Switch1'
             */
            rtb_Gain_m = rtb_TmpSignalConversionAtVeS_cr;
        }

        /* Switch: '<S328>/Switch' incorporates:
         *  Constant: '<S319>/Constant Value2'
         *  RelationalOperator: '<S328>/Relational Operator1'
         */
        if (rtb_Gain_m <= -65534.0F)
        {
            rtb_Gain_m = -65534.0F;
        }

        /* End of Switch: '<S328>/Switch' */
        /* End of Outputs for SubSystem: '<S319>/Limiter1' */

        /* BusCreator: '<S5>/BusPT_SYSTEM_FD_4_FD11' incorporates:
         *  Constant: '<S319>/Constant Value'
         *  DataTypeConversion: '<S20>/Data Type Conversion9'
         *  DataTypeConversion: '<S319>/Data Type Conversion'
         *  Gain: '<S319>/Gain'
         *  Sum: '<S319>/Sum'
         */
        ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD11.E_TotalAxle_Rq_BSM_PT = (uint16)
            ((sint32)fmodf(floorf((rtb_Gain_m - -65534.0F) * 0.5F), 65536.0F));
    }

    /* End of Switch: '<S25>/switch4' */

    /* Outputs for Atomic SubSystem: '<S320>/Limiter1' */
    /* Switch: '<S329>/Switch1' incorporates:
     *  Constant: '<S320>/Constant Value1'
     *  RelationalOperator: '<S329>/Relational Operator'
     */
    if (65535.0F < rtb_TmpSignalConversionAtVeSR_o)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 65535.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeSR_o;
    }

    /* End of Switch: '<S329>/Switch1' */
    /* End of Outputs for SubSystem: '<S320>/Limiter1' */

    /* BusCreator: '<S5>/BusPT_SYSTEM_FD_4_FD11' incorporates:
     *  Constant: '<S312>/Constant Value'
     *  Constant: '<S313>/Constant Value'
     *  Constant: '<S5>/Const53'
     *  DataTypeConversion: '<S312>/Data Type Conversion'
     *  DataTypeConversion: '<S313>/Data Type Conversion'
     *  Gain: '<S312>/Gain'
     *  Gain: '<S313>/Gain'
     *  Sum: '<S312>/Sum'
     *  Sum: '<S313>/Sum'
     */
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD11.E_AWDSysStat_PT =
        rtb_TmpSignalConversionAtVeS_m1;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD11.E_AtmosphericPressureFailSts_PT =
        false;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD11.E_AtmosphericPressure_W_PT = (uint8)
        ((sint32)fmodf(floorf(0.277777791F * (rtb_Gain_iu - 300.0F)), 256.0F));
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD11.E_Axle_TorqueStatic_D_TTC_ESC_PT =
        (uint16)((sint32)fmodf(floorf(0.5F * (rtb_Gain_iu_0 - -65534.0F)),
                  65536.0F));
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD11.E_Axle_TorqueStatic_D_TTC_PT = 32767U;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD11.E_CRC_PT_SYSTEM_FD_4 = 0U;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD11.E_ESCActive_PT =
        rtb_TmpSignalConversionAtVeS_gi;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD11.E_LHF_WheelSensorFailSts_PT =
        rtb_TmpSignalConversionAtVeS_iq;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD11.E_MessageCounter_PT_SYSTEM_FD_4 = 0U;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD11.E_RHF_WheelSensorFailSts_PT =
        rtb_TmpSignalConversionAtVe_kwr;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD11.E_TotalAxle_Max_Rq_BSM_PT =
        rtb_TmpSignalConversionAtVeS_n5;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD11.E_TotalAxle_Min_Rq_BSM_PT =
        rtb_TmpSignalConversionAtVeS_dq;

    /* Outputs for Atomic SubSystem: '<S320>/Limiter1' */
    /* Switch: '<S329>/Switch' incorporates:
     *  Constant: '<S320>/Constant Value2'
     *  RelationalOperator: '<S329>/Relational Operator1'
     */
    if (rtb_Gain_m <= -65534.0F)
    {
        rtb_Gain_m = -65534.0F;
    }

    /* End of Switch: '<S329>/Switch' */
    /* End of Outputs for SubSystem: '<S320>/Limiter1' */

    /* BusCreator: '<S5>/BusPT_SYSTEM_FD_4_FD11' incorporates:
     *  Constant: '<S320>/Constant Value'
     *  DataTypeConversion: '<S320>/Data Type Conversion'
     *  Gain: '<S320>/Gain'
     *  Sum: '<S320>/Sum'
     */
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD11.E_Total_AxleTorque_Static_PT =
        (uint16)((sint32)fmodf(floorf((rtb_Gain_m - -65534.0F) * 0.5F), 65536.0F));

    /* Outputs for Atomic SubSystem: '<S330>/Limiter1' */
    /* Switch: '<S339>/Switch1' incorporates:
     *  Constant: '<S330>/Constant Value1'
     *  RelationalOperator: '<S339>/Relational Operator'
     */
    if (1217.0F < rtb_TmpSignalConversionAtVePLTR)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 1217.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVePLTR;
    }

    /* End of Switch: '<S339>/Switch1' */

    /* Switch: '<S339>/Switch' incorporates:
     *  Constant: '<S330>/Constant Value2'
     *  RelationalOperator: '<S339>/Relational Operator1'
     */
    if (rtb_Gain_m > 300.0F)
    {
        rtb_Gain_iu = rtb_Gain_m;
    }
    else
    {
        rtb_Gain_iu = 300.0F;
    }

    /* End of Switch: '<S339>/Switch' */
    /* End of Outputs for SubSystem: '<S330>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S331>/Limiter1' */
    /* Switch: '<S340>/Switch1' incorporates:
     *  Constant: '<S331>/Constant Value1'
     *  RelationalOperator: '<S340>/Relational Operator'
     */
    if (65535.0F < rtb_TmpSignalConversionAtVeWT_m)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 65535.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeWT_m;
    }

    /* End of Switch: '<S340>/Switch1' */

    /* Switch: '<S340>/Switch' incorporates:
     *  Constant: '<S331>/Constant Value2'
     *  RelationalOperator: '<S340>/Relational Operator1'
     */
    if (rtb_Gain_m > -65534.0F)
    {
        rtb_Gain_iu_0 = rtb_Gain_m;
    }
    else
    {
        rtb_Gain_iu_0 = -65534.0F;
    }

    /* End of Switch: '<S340>/Switch' */
    /* End of Outputs for SubSystem: '<S331>/Limiter1' */

    /* Switch: '<S26>/switch' incorporates:
     *  Constant: '<S333>/Constant Value1'
     *  RelationalOperator: '<S342>/Relational Operator'
     *  Switch: '<S342>/Switch1'
     */
    if (((sint32)rtb_TmpSignalConversionAtVeS_gx) != 0)
    {
        /* BusCreator: '<S5>/BusPT_SYSTEM_FD_4_FD5' incorporates:
         *  Constant: '<S26>/Constant'
         *  DataTypeConversion: '<S20>/Data Type Conversion5'
         */
        ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD5.E_Ft_RrCouplingTrq_Actual_PT =
            MAX_uint8_T;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S333>/Limiter1' */
        if (3059.0F < rtb_TmpSignalConversionAtVeSR1B)
        {
            /* Switch: '<S342>/Switch1' incorporates:
             *  Constant: '<S333>/Constant Value1'
             *  Gain: '<S333>/Gain'
             */
            rtb_Gain_m = 3059.0F;
        }
        else
        {
            /* Gain: '<S333>/Gain' incorporates:
             *  Switch: '<S342>/Switch1'
             */
            rtb_Gain_m = rtb_TmpSignalConversionAtVeSR1B;
        }

        /* Switch: '<S342>/Switch' incorporates:
         *  Constant: '<S333>/Constant Value2'
         *  RelationalOperator: '<S342>/Relational Operator1'
         */
        if (rtb_Gain_m <= 0.0F)
        {
            rtb_Gain_m = 0.0F;
        }

        /* End of Switch: '<S342>/Switch' */
        /* End of Outputs for SubSystem: '<S333>/Limiter1' */

        /* BusCreator: '<S5>/BusPT_SYSTEM_FD_4_FD5' incorporates:
         *  DataTypeConversion: '<S20>/Data Type Conversion5'
         *  DataTypeConversion: '<S333>/Data Type Conversion'
         *  Gain: '<S333>/Gain'
         */
        ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD5.E_Ft_RrCouplingTrq_Actual_PT =
            (uint8)((sint32)fmodf(floorf(0.0833333358F * rtb_Gain_m), 256.0F));
    }

    /* End of Switch: '<S26>/switch' */

    /* Switch: '<S26>/switch1' incorporates:
     *  Constant: '<S334>/Constant Value1'
     *  RelationalOperator: '<S343>/Relational Operator'
     *  Switch: '<S343>/Switch1'
     */
    if (((sint32)rtb_TmpSignalConversionAtVe_j1n) != 0)
    {
        /* BusCreator: '<S5>/BusPT_SYSTEM_FD_4_FD5' incorporates:
         *  Constant: '<S26>/Constant1'
         *  DataTypeConversion: '<S20>/Data Type Conversion6'
         */
        ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD5.E_Ft_RrCouplingTrq_Desired_PT =
            MAX_uint8_T;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S334>/Limiter1' */
        if (3059.0F < rtb_TmpSignalConversionAtVeS_ln)
        {
            /* Switch: '<S343>/Switch1' incorporates:
             *  Constant: '<S334>/Constant Value1'
             *  Gain: '<S334>/Gain'
             */
            rtb_Gain_m = 3059.0F;
        }
        else
        {
            /* Gain: '<S334>/Gain' incorporates:
             *  Switch: '<S343>/Switch1'
             */
            rtb_Gain_m = rtb_TmpSignalConversionAtVeS_ln;
        }

        /* Switch: '<S343>/Switch' incorporates:
         *  Constant: '<S334>/Constant Value2'
         *  RelationalOperator: '<S343>/Relational Operator1'
         */
        if (rtb_Gain_m <= 0.0F)
        {
            rtb_Gain_m = 0.0F;
        }

        /* End of Switch: '<S343>/Switch' */
        /* End of Outputs for SubSystem: '<S334>/Limiter1' */

        /* BusCreator: '<S5>/BusPT_SYSTEM_FD_4_FD5' incorporates:
         *  DataTypeConversion: '<S20>/Data Type Conversion6'
         *  DataTypeConversion: '<S334>/Data Type Conversion'
         *  Gain: '<S334>/Gain'
         */
        ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD5.E_Ft_RrCouplingTrq_Desired_PT =
            (uint8)((sint32)fmodf(floorf(0.0833333358F * rtb_Gain_m), 256.0F));
    }

    /* End of Switch: '<S26>/switch1' */

    /* Switch: '<S26>/switch2' incorporates:
     *  Constant: '<S335>/Constant Value1'
     *  RelationalOperator: '<S344>/Relational Operator'
     *  Switch: '<S344>/Switch1'
     */
    if (((sint32)rtb_TmpSignalConversionAtVeS_it) != 0)
    {
        /* BusCreator: '<S5>/BusPT_SYSTEM_FD_4_FD5' incorporates:
         *  Constant: '<S26>/Constant2'
         *  DataTypeConversion: '<S273>/Data Type Conversion'
         */
        ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD5.E_LHFWheelSpeed_PT = 8191U;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S335>/Limiter1' */
        if (511.875F < rtb_TmpSignalConversionAtVeS_ht)
        {
            /* Switch: '<S344>/Switch1' incorporates:
             *  Constant: '<S335>/Constant Value1'
             *  Gain: '<S335>/Gain'
             */
            rtb_Gain_m = 511.875F;
        }
        else
        {
            /* Gain: '<S335>/Gain' incorporates:
             *  Switch: '<S344>/Switch1'
             */
            rtb_Gain_m = rtb_TmpSignalConversionAtVeS_ht;
        }

        /* Switch: '<S344>/Switch' incorporates:
         *  Constant: '<S335>/Constant Value2'
         *  RelationalOperator: '<S344>/Relational Operator1'
         */
        if (rtb_Gain_m <= 0.0F)
        {
            rtb_Gain_m = 0.0F;
        }

        /* End of Switch: '<S344>/Switch' */
        /* End of Outputs for SubSystem: '<S335>/Limiter1' */

        /* BusCreator: '<S5>/BusPT_SYSTEM_FD_4_FD5' incorporates:
         *  DataTypeConversion: '<S273>/Data Type Conversion'
         *  DataTypeConversion: '<S335>/Data Type Conversion'
         *  Gain: '<S335>/Gain'
         */
        ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD5.E_LHFWheelSpeed_PT = (uint16)
            ((sint32)fmodf(floorf(16.0F * rtb_Gain_m), 65536.0F));
    }

    /* End of Switch: '<S26>/switch2' */

    /* Switch: '<S26>/switch3' incorporates:
     *  Constant: '<S336>/Constant Value1'
     *  RelationalOperator: '<S345>/Relational Operator'
     *  Switch: '<S345>/Switch1'
     */
    if (((sint32)rtb_TmpSignalConversionAtVeSR_b) != 0)
    {
        /* BusCreator: '<S5>/BusPT_SYSTEM_FD_4_FD5' incorporates:
         *  Constant: '<S26>/Constant3'
         *  Switch: '<S20>/switch'
         */
        ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD5.E_RHFWheelSpeed_PT = 8191U;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S336>/Limiter1' */
        if (511.875F < rtb_TmpSignalConversionAtVeS_gc)
        {
            /* Switch: '<S345>/Switch1' incorporates:
             *  Constant: '<S336>/Constant Value1'
             *  Gain: '<S336>/Gain'
             */
            rtb_Gain_m = 511.875F;
        }
        else
        {
            /* Gain: '<S336>/Gain' incorporates:
             *  Switch: '<S345>/Switch1'
             */
            rtb_Gain_m = rtb_TmpSignalConversionAtVeS_gc;
        }

        /* Switch: '<S345>/Switch' incorporates:
         *  Constant: '<S336>/Constant Value2'
         *  RelationalOperator: '<S345>/Relational Operator1'
         */
        if (rtb_Gain_m <= 0.0F)
        {
            rtb_Gain_m = 0.0F;
        }

        /* End of Switch: '<S345>/Switch' */
        /* End of Outputs for SubSystem: '<S336>/Limiter1' */

        /* BusCreator: '<S5>/BusPT_SYSTEM_FD_4_FD5' incorporates:
         *  DataTypeConversion: '<S336>/Data Type Conversion'
         *  Gain: '<S336>/Gain'
         *  Switch: '<S20>/switch'
         */
        ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD5.E_RHFWheelSpeed_PT = (uint16)
            ((sint32)fmodf(floorf(16.0F * rtb_Gain_m), 65536.0F));
    }

    /* End of Switch: '<S26>/switch3' */

    /* Switch: '<S26>/switch4' incorporates:
     *  Constant: '<S337>/Constant Value1'
     *  RelationalOperator: '<S346>/Relational Operator'
     *  Switch: '<S346>/Switch1'
     */
    if (((sint32)rtb_TmpSignalConversionAtVeSR_p) != 0)
    {
        /* BusCreator: '<S5>/BusPT_SYSTEM_FD_4_FD5' incorporates:
         *  Constant: '<S26>/Constant4'
         *  DataTypeConversion: '<S20>/Data Type Conversion9'
         */
        ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD5.E_TotalAxle_Rq_BSM_PT =
            MAX_uint16_T;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S337>/Limiter1' */
        if (65535.0F < rtb_TmpSignalConversionAtVeS_cr)
        {
            /* Switch: '<S346>/Switch1' incorporates:
             *  Constant: '<S337>/Constant Value1'
             *  Gain: '<S337>/Gain'
             */
            rtb_Gain_m = 65535.0F;
        }
        else
        {
            /* Gain: '<S337>/Gain' incorporates:
             *  Switch: '<S346>/Switch1'
             */
            rtb_Gain_m = rtb_TmpSignalConversionAtVeS_cr;
        }

        /* Switch: '<S346>/Switch' incorporates:
         *  Constant: '<S337>/Constant Value2'
         *  RelationalOperator: '<S346>/Relational Operator1'
         */
        if (rtb_Gain_m <= -65534.0F)
        {
            rtb_Gain_m = -65534.0F;
        }

        /* End of Switch: '<S346>/Switch' */
        /* End of Outputs for SubSystem: '<S337>/Limiter1' */

        /* BusCreator: '<S5>/BusPT_SYSTEM_FD_4_FD5' incorporates:
         *  Constant: '<S337>/Constant Value'
         *  DataTypeConversion: '<S20>/Data Type Conversion9'
         *  DataTypeConversion: '<S337>/Data Type Conversion'
         *  Gain: '<S337>/Gain'
         *  Sum: '<S337>/Sum'
         */
        ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD5.E_TotalAxle_Rq_BSM_PT = (uint16)
            ((sint32)fmodf(floorf((rtb_Gain_m - -65534.0F) * 0.5F), 65536.0F));
    }

    /* End of Switch: '<S26>/switch4' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen1' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSRMR_b_VehStndStillReq_OPD' */
    (void)Rte_Read_VeSRMR_b_VehStndStillReq_OPD_Value(&tmpRead_m);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/ST2B_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/SigMngt'
     */
    /* BusCreator: '<S5>/BusPT_TORQUE_FD_1_FD3' incorporates:
     *  Inport: '<Root>/VeDTRR_b_PPPATrqEnabled'
     *  Inport: '<Root>/VeDTRR_b_RRCCTrqEnabled'
     *  Inport: '<Root>/VeDTRR_b_SSCTrqEnabled'
     */
    (void)Rte_Read_VeDTRR_b_SSCTrqEnabled_Value
        (&ST2B_BLUEN_ac_B.BusPT_TORQUE_FD_1_FD3.E_SSC_TrqEnblRq_Allowed);
    (void)Rte_Read_VeDTRR_b_RRCCTrqEnabled_Value
        (&ST2B_BLUEN_ac_B.BusPT_TORQUE_FD_1_FD3.E_RRCC_TrqEnblRq_Allowed);
    (void)Rte_Read_VeDTRR_b_PPPATrqEnabled_Value
        (&ST2B_BLUEN_ac_B.BusPT_TORQUE_FD_1_FD3.E_PPPA_TrqEnblRq_Allowed);

    /* Outputs for Atomic SubSystem: '<S338>/Limiter1' */
    /* Switch: '<S347>/Switch1' incorporates:
     *  Constant: '<S338>/Constant Value1'
     *  RelationalOperator: '<S347>/Relational Operator'
     */
    if (65535.0F < rtb_TmpSignalConversionAtVeSR_o)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 65535.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeSR_o;
    }

    /* End of Switch: '<S347>/Switch1' */
    /* End of Outputs for SubSystem: '<S338>/Limiter1' */

    /* BusCreator: '<S5>/BusPT_SYSTEM_FD_4_FD5' incorporates:
     *  Constant: '<S330>/Constant Value'
     *  Constant: '<S331>/Constant Value'
     *  Constant: '<S5>/Const114'
     *  DataTypeConversion: '<S330>/Data Type Conversion'
     *  DataTypeConversion: '<S331>/Data Type Conversion'
     *  Gain: '<S330>/Gain'
     *  Gain: '<S331>/Gain'
     *  Sum: '<S330>/Sum'
     *  Sum: '<S331>/Sum'
     */
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD5.E_AWDSysStat_PT =
        rtb_TmpSignalConversionAtVeS_m1;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD5.E_AtmosphericPressureFailSts_PT =
        false;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD5.E_AtmosphericPressure_W_PT = (uint8)
        ((sint32)fmodf(floorf(0.277777791F * (rtb_Gain_iu - 300.0F)), 256.0F));
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD5.E_Axle_TorqueStatic_D_TTC_ESC_PT =
        (uint16)((sint32)fmodf(floorf(0.5F * (rtb_Gain_iu_0 - -65534.0F)),
                  65536.0F));
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD5.E_Axle_TorqueStatic_D_TTC_PT = 32767U;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD5.E_CRC_PT_SYSTEM_FD_4 = 0U;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD5.E_ESCActive_PT =
        rtb_TmpSignalConversionAtVeS_gi;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD5.E_LHF_WheelSensorFailSts_PT =
        rtb_TmpSignalConversionAtVeS_iq;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD5.E_MessageCounter_PT_SYSTEM_FD_4 = 0U;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD5.E_RHF_WheelSensorFailSts_PT =
        rtb_TmpSignalConversionAtVe_kwr;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD5.E_TotalAxle_Max_Rq_BSM_PT =
        rtb_TmpSignalConversionAtVeS_n5;
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD5.E_TotalAxle_Min_Rq_BSM_PT =
        rtb_TmpSignalConversionAtVeS_dq;

    /* Outputs for Atomic SubSystem: '<S338>/Limiter1' */
    /* Switch: '<S347>/Switch' incorporates:
     *  Constant: '<S338>/Constant Value2'
     *  RelationalOperator: '<S347>/Relational Operator1'
     */
    if (rtb_Gain_m <= -65534.0F)
    {
        rtb_Gain_m = -65534.0F;
    }

    /* End of Switch: '<S347>/Switch' */
    /* End of Outputs for SubSystem: '<S338>/Limiter1' */

    /* BusCreator: '<S5>/BusPT_SYSTEM_FD_4_FD5' incorporates:
     *  Constant: '<S338>/Constant Value'
     *  DataTypeConversion: '<S338>/Data Type Conversion'
     *  Gain: '<S338>/Gain'
     *  Sum: '<S338>/Sum'
     */
    ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD5.E_Total_AxleTorque_Static_PT = (uint16)
        ((sint32)fmodf(floorf((rtb_Gain_m - -65534.0F) * 0.5F), 65536.0F));

    /* Outputs for Atomic SubSystem: '<S348>/Limiter1' */
    /* Switch: '<S351>/Switch1' incorporates:
     *  Constant: '<S348>/Constant Value1'
     *  RelationalOperator: '<S351>/Relational Operator'
     */
    if (65535.0F < rtb_TmpSignalConversionAtVeSR_l)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 65535.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeSR_l;
    }

    /* End of Switch: '<S351>/Switch1' */

    /* Switch: '<S351>/Switch' incorporates:
     *  Constant: '<S348>/Constant Value2'
     *  RelationalOperator: '<S351>/Relational Operator1'
     */
    if (rtb_Gain_m > -65534.0F)
    {
        rtb_Gain_iu = rtb_Gain_m;
    }
    else
    {
        rtb_Gain_iu = -65534.0F;
    }

    /* End of Switch: '<S351>/Switch' */
    /* End of Outputs for SubSystem: '<S348>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S349>/Limiter1' */
    /* Switch: '<S352>/Switch1' incorporates:
     *  Constant: '<S349>/Constant Value1'
     *  RelationalOperator: '<S352>/Relational Operator'
     */
    if (65535.0F < rtb_TmpSignalConversionAtVeSR_i)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 65535.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeSR_i;
    }

    /* End of Switch: '<S352>/Switch1' */

    /* Switch: '<S352>/Switch' incorporates:
     *  Constant: '<S349>/Constant Value2'
     *  RelationalOperator: '<S352>/Relational Operator1'
     */
    if (rtb_Gain_m > -65534.0F)
    {
        rtb_Gain_iu_0 = rtb_Gain_m;
    }
    else
    {
        rtb_Gain_iu_0 = -65534.0F;
    }

    /* End of Switch: '<S352>/Switch' */
    /* End of Outputs for SubSystem: '<S349>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S350>/Limiter1' */
    /* Switch: '<S353>/Switch1' incorporates:
     *  Constant: '<S350>/Constant Value1'
     *  RelationalOperator: '<S353>/Relational Operator'
     */
    if (65535.0F < rtb_TmpSignalConversionAtVeSR_o)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 65535.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeSR_o;
    }

    /* End of Switch: '<S353>/Switch1' */
    /* End of Outputs for SubSystem: '<S350>/Limiter1' */

    /* BusCreator: '<S5>/BusPT_TORQUE_FD_1_FD14' incorporates:
     *  Constant: '<S348>/Constant Value'
     *  Constant: '<S349>/Constant Value'
     *  Constant: '<S5>/Const62'
     *  Constant: '<S5>/Const63'
     *  Constant: '<S5>/Const64'
     *  Constant: '<S5>/Const65'
     *  DataTypeConversion: '<S348>/Data Type Conversion'
     *  DataTypeConversion: '<S349>/Data Type Conversion'
     *  Gain: '<S348>/Gain'
     *  Gain: '<S349>/Gain'
     *  Sum: '<S348>/Sum'
     *  Sum: '<S349>/Sum'
     */
    ST2B_BLUEN_ac_B.BusPT_TORQUE_FD_1_FD14.E_ACC_NCC_TrqEnblRq_Allowed =
        rtb_TmpSignalConversionAtVeDT_g;
    ST2B_BLUEN_ac_B.BusPT_TORQUE_FD_1_FD14.E_Accel_Pedal_Override =
        rtb_TmpSignalConversionAtVeDT_k;
    ST2B_BLUEN_ac_B.BusPT_TORQUE_FD_1_FD14.E_CRC_PT_TORQUE_FD_1 = 0U;
    ST2B_BLUEN_ac_B.BusPT_TORQUE_FD_1_FD14.E_ESC_TrqEnblRq_Allowed = false;
    ST2B_BLUEN_ac_B.BusPT_TORQUE_FD_1_FD14.E_Front_AxleTorque_Static = (uint16)
        ((sint32)fmodf(floorf(0.5F * (rtb_Gain_iu - -65534.0F)), 65536.0F));
    ST2B_BLUEN_ac_B.BusPT_TORQUE_FD_1_FD14.E_MessageCounter_PT_TORQUE_FD_1 = 0U;
    ST2B_BLUEN_ac_B.BusPT_TORQUE_FD_1_FD14.E_PPPA_TrqEnblRq_Allowed = false;
    ST2B_BLUEN_ac_B.BusPT_TORQUE_FD_1_FD14.E_RRCC_TrqEnblRq_Allowed = false;
    ST2B_BLUEN_ac_B.BusPT_TORQUE_FD_1_FD14.E_Rear_AxleTorque_Static = (uint16)
        ((sint32)fmodf(floorf(0.5F * (rtb_Gain_iu_0 - -65534.0F)), 65536.0F));
    ST2B_BLUEN_ac_B.BusPT_TORQUE_FD_1_FD14.E_SSC_TrqEnblRq_Allowed = false;

    /* Outputs for Atomic SubSystem: '<S350>/Limiter1' */
    /* Switch: '<S353>/Switch' incorporates:
     *  Constant: '<S350>/Constant Value2'
     *  RelationalOperator: '<S353>/Relational Operator1'
     */
    if (rtb_Gain_m <= -65534.0F)
    {
        rtb_Gain_m = -65534.0F;
    }

    /* End of Switch: '<S353>/Switch' */
    /* End of Outputs for SubSystem: '<S350>/Limiter1' */

    /* BusCreator: '<S5>/BusPT_TORQUE_FD_1_FD14' incorporates:
     *  Constant: '<S350>/Constant Value'
     *  DataTypeConversion: '<S350>/Data Type Conversion'
     *  Gain: '<S350>/Gain'
     *  Sum: '<S350>/Sum'
     */
    ST2B_BLUEN_ac_B.BusPT_TORQUE_FD_1_FD14.E_Total_AxleTorque_Static = (uint16)
        ((sint32)fmodf(floorf((rtb_Gain_m - -65534.0F) * 0.5F), 65536.0F));

    /* Outputs for Atomic SubSystem: '<S354>/Limiter1' */
    /* Switch: '<S359>/Switch1' incorporates:
     *  Constant: '<S354>/Constant Value1'
     *  RelationalOperator: '<S359>/Relational Operator'
     */
    if (65535.0F < rtb_TmpSignalConversionAtVeSR_l)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 65535.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeSR_l;
    }

    /* End of Switch: '<S359>/Switch1' */

    /* Switch: '<S359>/Switch' incorporates:
     *  Constant: '<S354>/Constant Value2'
     *  RelationalOperator: '<S359>/Relational Operator1'
     */
    if (rtb_Gain_m > -65534.0F)
    {
        rtb_Gain_iu = rtb_Gain_m;
    }
    else
    {
        rtb_Gain_iu = -65534.0F;
    }

    /* End of Switch: '<S359>/Switch' */
    /* End of Outputs for SubSystem: '<S354>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S356>/Limiter1' */
    /* Switch: '<S361>/Switch1' incorporates:
     *  Constant: '<S356>/Constant Value1'
     *  RelationalOperator: '<S361>/Relational Operator'
     */
    if (65535.0F < rtb_TmpSignalConversionAtVeSR_i)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 65535.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeSR_i;
    }

    /* End of Switch: '<S361>/Switch1' */

    /* Switch: '<S361>/Switch' incorporates:
     *  Constant: '<S356>/Constant Value2'
     *  RelationalOperator: '<S361>/Relational Operator1'
     */
    if (rtb_Gain_m > -65534.0F)
    {
        rtb_Gain_iu_0 = rtb_Gain_m;
    }
    else
    {
        rtb_Gain_iu_0 = -65534.0F;
    }

    /* End of Switch: '<S361>/Switch' */
    /* End of Outputs for SubSystem: '<S356>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S358>/Limiter1' */
    /* Switch: '<S363>/Switch1' incorporates:
     *  Constant: '<S358>/Constant Value1'
     *  RelationalOperator: '<S363>/Relational Operator'
     */
    if (65535.0F < rtb_TmpSignalConversionAtVeSR_o)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 65535.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeSR_o;
    }

    /* End of Switch: '<S363>/Switch1' */
    /* End of Outputs for SubSystem: '<S358>/Limiter1' */

    /* BusCreator: '<S5>/BusPT_TORQUE_FD_1_FD3' incorporates:
     *  Constant: '<S354>/Constant Value'
     *  Constant: '<S356>/Constant Value'
     *  Constant: '<S5>/Const18'
     *  DataTypeConversion: '<S354>/Data Type Conversion'
     *  DataTypeConversion: '<S356>/Data Type Conversion'
     *  Gain: '<S354>/Gain'
     *  Gain: '<S356>/Gain'
     *  Sum: '<S354>/Sum'
     *  Sum: '<S356>/Sum'
     */
    ST2B_BLUEN_ac_B.BusPT_TORQUE_FD_1_FD3.E_ACC_NCC_TrqEnblRq_Allowed =
        rtb_TmpSignalConversionAtVeDT_g;
    ST2B_BLUEN_ac_B.BusPT_TORQUE_FD_1_FD3.E_Accel_Pedal_Override =
        rtb_TmpSignalConversionAtVeDT_k;
    ST2B_BLUEN_ac_B.BusPT_TORQUE_FD_1_FD3.E_CRC_PT_TORQUE_FD_1 = 0U;
    ST2B_BLUEN_ac_B.BusPT_TORQUE_FD_1_FD3.E_ESC_TrqEnblRq_Allowed = false;
    ST2B_BLUEN_ac_B.BusPT_TORQUE_FD_1_FD3.E_Front_AxleTorque_Static = (uint16)
        ((sint32)fmodf(floorf(0.5F * (rtb_Gain_iu - -65534.0F)), 65536.0F));
    ST2B_BLUEN_ac_B.BusPT_TORQUE_FD_1_FD3.E_Front_Axle_Target_Torque = 32767U;
    ST2B_BLUEN_ac_B.BusPT_TORQUE_FD_1_FD3.E_MessageCounter_PT_TORQUE_FD_1 = 0U;
    ST2B_BLUEN_ac_B.BusPT_TORQUE_FD_1_FD3.E_Rear_AxleTorque_Static = (uint16)
        ((sint32)fmodf(floorf(0.5F * (rtb_Gain_iu_0 - -65534.0F)), 65536.0F));
    ST2B_BLUEN_ac_B.BusPT_TORQUE_FD_1_FD3.E_Rear_Axle_Target_Torque = 32767U;

    /* Outputs for Atomic SubSystem: '<S358>/Limiter1' */
    /* Switch: '<S363>/Switch' incorporates:
     *  Constant: '<S358>/Constant Value2'
     *  RelationalOperator: '<S363>/Relational Operator1'
     */
    if (rtb_Gain_m <= -65534.0F)
    {
        rtb_Gain_m = -65534.0F;
    }

    /* End of Switch: '<S363>/Switch' */
    /* End of Outputs for SubSystem: '<S358>/Limiter1' */

    /* BusCreator: '<S5>/BusPT_TORQUE_FD_1_FD3' incorporates:
     *  Constant: '<S358>/Constant Value'
     *  DataTypeConversion: '<S28>/Data Type Conversion14'
     *  DataTypeConversion: '<S358>/Data Type Conversion'
     *  Gain: '<S358>/Gain'
     *  Sum: '<S358>/Sum'
     */
    ST2B_BLUEN_ac_B.BusPT_TORQUE_FD_1_FD3.E_Total_AxleTorque_Static = (uint16)
        ((sint32)fmodf(floorf((rtb_Gain_m - -65534.0F) * 0.5F), 65536.0F));
    ST2B_BLUEN_ac_B.BusPT_TORQUE_FD_1_FD3.E_Veh_StandStill_Req_OPD = tmpRead_m ?
        ((uint8)1) : ((uint8)0);

    /* Outputs for Atomic SubSystem: '<S100>/Limiter1' */
    /* Switch: '<S102>/Switch1' incorporates:
     *  Constant: '<S100>/Constant Value1'
     *  RelationalOperator: '<S102>/Relational Operator'
     */
    if (8128.0F < rtb_TmpSignalConversionAtVeSRAR)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 8128.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeSRAR;
    }

    /* End of Switch: '<S102>/Switch1' */

    /* Switch: '<S102>/Switch' incorporates:
     *  Constant: '<S100>/Constant Value2'
     *  RelationalOperator: '<S102>/Relational Operator1'
     */
    if (rtb_Gain_m > 0.0F)
    {
        /* Sum: '<S100>/Sum' */
        rtb_TmpSignalConversionAtVeSR_o = rtb_Gain_m;
    }
    else
    {
        /* Sum: '<S100>/Sum' */
        rtb_TmpSignalConversionAtVeSR_o = 0.0F;
    }

    /* End of Switch: '<S102>/Switch' */
    /* End of Outputs for SubSystem: '<S100>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S101>/Limiter1' */
    /* Switch: '<S103>/Switch1' incorporates:
     *  Constant: '<S101>/Constant Value1'
     *  RelationalOperator: '<S103>/Relational Operator'
     */
    if (163.52F < rtb_TmpSignalConversionAtVeSR_h)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 163.52F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeSR_h;
    }

    /* End of Switch: '<S103>/Switch1' */
    /* End of Outputs for SubSystem: '<S101>/Limiter1' */

    /* BusCreator: '<S5>/BusHYBRID_POWERTRAIN5_FD11' incorporates:
     *  Constant: '<S13>/CRC_HYBRID_POWERTRAIN5'
     *  Constant: '<S5>/Const27'
     *  DataTypeConversion: '<S100>/Data Type Conversion'
     *  Gain: '<S100>/Gain'
     */
    ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN5_FD11.E_CRC_HYBRID_POWERTRAIN5 = 0U;
    ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN5_FD11.E_HCPMaxEngRPM = (uint8)((sint32)
        fmodf(floorf(0.03125F * rtb_TmpSignalConversionAtVeSR_o), 256.0F));
    ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN5_FD11.E_HCP_HoodAjar = 0U;
    ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN5_FD11.E_HEV_HybPwrtrnRdcdPerfCmnd =
        rtb_TmpSignalConversionAtVeS_ei;
    ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN5_FD11.E_Hybrid_EVT_ModeSts =
        rtb_TmpSignalConversionAtVeH_jy;

    /* Outputs for Atomic SubSystem: '<S101>/Limiter1' */
    /* Switch: '<S103>/Switch' incorporates:
     *  Constant: '<S101>/Constant Value2'
     *  RelationalOperator: '<S103>/Relational Operator1'
     */
    if (rtb_Gain_m <= -163.52F)
    {
        rtb_Gain_m = -163.52F;
    }

    /* End of Switch: '<S103>/Switch' */
    /* End of Outputs for SubSystem: '<S101>/Limiter1' */

    /* BusCreator: '<S5>/BusHYBRID_POWERTRAIN5_FD11' incorporates:
     *  Constant: '<S101>/Constant Value'
     *  DataTypeConversion: '<S101>/Data Type Conversion'
     *  Gain: '<S101>/Gain'
     *  Sum: '<S101>/Sum'
     */
    ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN5_FD11.E_IdleCLoopTrq = (uint16)((sint32)
        fmodf(floorf((rtb_Gain_m - -163.52F) * 3.125F), 65536.0F));
    ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN5_FD11.E_MessageCounter_HYBRID_POWERTRAIN5
        = 0U;

    /* Outputs for Atomic SubSystem: '<S104>/Limiter1' */
    /* Switch: '<S108>/Switch1' incorporates:
     *  Constant: '<S104>/Constant Value1'
     *  RelationalOperator: '<S108>/Relational Operator'
     */
    if (1297.0F < rtb_TmpSignalConversionAtVeHM_i)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 1297.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeHM_i;
    }

    /* End of Switch: '<S108>/Switch1' */

    /* Switch: '<S108>/Switch' incorporates:
     *  Constant: '<S104>/Constant Value2'
     *  RelationalOperator: '<S108>/Relational Operator1'
     */
    if (rtb_Gain_m > -750.0F)
    {
        /* Switch: '<S108>/Switch' */
        rtb_TmpSignalConversionAtVeHM_i = rtb_Gain_m;
    }
    else
    {
        /* Switch: '<S108>/Switch' */
        rtb_TmpSignalConversionAtVeHM_i = -750.0F;
    }

    /* End of Switch: '<S108>/Switch' */
    /* End of Outputs for SubSystem: '<S104>/Limiter1' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen1' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeTAIR_b_AGS2_CurrPosFA' */
    (void)Rte_Read_VeTAIR_b_AGS2_CurrPosFA_Value(&tmpRead_8);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/ST2B_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/SigMngt'
     */
    /* Switch: '<S14>/switch' incorporates:
     *  Inport: '<Root>/VeTAIR_Pct_AGS2_CurrPos'
     */
    if (tmpRead_8)
    {
        /* BusCreator: '<S5>/BusHYBRID_POWERTRAIN5_FD3' incorporates:
         *  Constant: '<S14>/Constant'
         *  DataTypeConversion: '<S18>/Data Type Conversion21'
         */
        ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN5_FD3.E_Hybrid_AGS2Position = 127U;
    }
    else
    {
        (void)Rte_Read_VeTAIR_Pct_AGS2_CurrPos_Value(&rtb_Sum_fa);

        /* DataTypeConversion: '<S14>/Data Type Conversion6' incorporates:
         *  Inport: '<Root>/VeTAIR_Pct_AGS2_CurrPos'
         */
        rtb_Gain_iu = fmodf(floorf(rtb_Sum_fa), 256.0F);

        /* BusCreator: '<S5>/BusHYBRID_POWERTRAIN5_FD3' incorporates:
         *  DataTypeConversion: '<S14>/Data Type Conversion6'
         *  DataTypeConversion: '<S18>/Data Type Conversion21'
         */
        ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN5_FD3.E_Hybrid_AGS2Position = (uint8)
            ((sint32)((rtb_Gain_iu < 0.0F) ? ((sint32)((uint8)((sint32)
                 (-((sint32)((sint8)((uint8)((float32)(-rtb_Gain_iu))))))))) :
                      ((sint32)((uint8)rtb_Gain_iu))));
    }

    /* End of Switch: '<S14>/switch' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen1' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeTAIR_b_AGS_CurrPosFA' */
    (void)Rte_Read_VeTAIR_b_AGS_CurrPosFA_Value(&tmpRead_9);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/ST2B_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/SigMngt'
     */
    /* Switch: '<S14>/switch1' incorporates:
     *  Inport: '<Root>/VeTAIR_Pct_AGS_CurrPos'
     */
    if (tmpRead_9)
    {
        /* BusCreator: '<S5>/BusHYBRID_POWERTRAIN5_FD3' incorporates:
         *  Constant: '<S14>/Constant1'
         *  DataTypeConversion: '<S20>/Data Type Conversion5'
         */
        ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN5_FD3.E_Hybrid_AGSPosition = 127U;
    }
    else
    {
        (void)Rte_Read_VeTAIR_Pct_AGS_CurrPos_Value(&rtb_Sum_ar);

        /* DataTypeConversion: '<S14>/Data Type Conversion7' incorporates:
         *  Inport: '<Root>/VeTAIR_Pct_AGS_CurrPos'
         */
        rtb_Gain_iu = fmodf(floorf(rtb_Sum_ar), 256.0F);

        /* BusCreator: '<S5>/BusHYBRID_POWERTRAIN5_FD3' incorporates:
         *  DataTypeConversion: '<S14>/Data Type Conversion7'
         *  DataTypeConversion: '<S20>/Data Type Conversion5'
         */
        ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN5_FD3.E_Hybrid_AGSPosition = (uint8)
            ((sint32)((rtb_Gain_iu < 0.0F) ? ((sint32)((uint8)((sint32)
                 (-((sint32)((sint8)((uint8)((float32)(-rtb_Gain_iu))))))))) :
                      ((sint32)((uint8)rtb_Gain_iu))));
    }

    /* End of Switch: '<S14>/switch1' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen1' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeOBCR_t_EstTimeDCFastChrg_100' */
    (void)Rte_Read_VeOBCR_t_EstTimeDCFastChrg_100_Value(&rtb_Sum_by);

    /* Inport: '<Root>/VeOBCR_t_EstTimeDCFastChrg_80' */
    (void)Rte_Read_VeOBCR_t_EstTimeDCFastChrg_80_Value(&rtb_Sum_ax);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/ST2B_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/SigMngt'
     */
    /* BusCreator: '<S5>/BusHYBRID_POWERTRAIN5_FD3' incorporates:
     *  Inport: '<Root>/VeCOMR_b_Random3'
     *  Inport: '<Root>/VeHMIR_P_MtrAPwrUsageDispV'
     *  Inport: '<Root>/VeHMIR_P_MtrBPwrUsageDispV'
     *  Inport: '<Root>/VeHMIR_b_BatPwrUsageDispV'
     *  Inport: '<Root>/VeHMIR_b_MtrPwrUsageDispV'
     */
    (void)Rte_Read_VeHMIR_b_MtrPwrUsageDispV_Value
        (&ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN5_FD3.E_MotorsPowerUse_DisplayV);
    (void)Rte_Read_VeHMIR_P_MtrBPwrUsageDispV_Value
        (&ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN5_FD3.E_Motor2PowerUse_DisplayV);
    (void)Rte_Read_VeHMIR_P_MtrAPwrUsageDispV_Value
        (&ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN5_FD3.E_Motor1PowerUse_DisplayV);
    (void)Rte_Read_VeCOMR_b_Random3_Value
        (&ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN5_FD3.E_HybridEmissionsMalfunction);
    (void)Rte_Read_VeHMIR_b_BatPwrUsageDispV_Value
        (&ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN5_FD3.E_BattPowerUse_DisplayV);

    /* Outputs for Atomic SubSystem: '<S105>/Limiter1' */
    /* Switch: '<S109>/Switch1' incorporates:
     *  Constant: '<S105>/Constant Value1'
     *  RelationalOperator: '<S109>/Relational Operator'
     */
    if (256.0F < rtb_TmpSignalConversionAtVeHM_k)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 256.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeHM_k;
    }

    /* End of Switch: '<S109>/Switch1' */

    /* Switch: '<S109>/Switch' incorporates:
     *  Constant: '<S105>/Constant Value2'
     *  RelationalOperator: '<S109>/Relational Operator1'
     */
    if (rtb_Gain_m > -255.0F)
    {
        /* Switch: '<S109>/Switch' */
        rtb_TmpSignalConversionAtVeHM_k = rtb_Gain_m;
    }
    else
    {
        /* Switch: '<S109>/Switch' */
        rtb_TmpSignalConversionAtVeHM_k = -255.0F;
    }

    /* End of Switch: '<S109>/Switch' */
    /* End of Outputs for SubSystem: '<S105>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S106>/Limiter1' */
    /* Switch: '<S110>/Switch1' incorporates:
     *  Constant: '<S106>/Constant Value1'
     *  RelationalOperator: '<S110>/Relational Operator'
     */
    if (256.0F < rtb_TmpSignalConversionAtVeHM_c)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 256.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeHM_c;
    }

    /* End of Switch: '<S110>/Switch1' */

    /* Switch: '<S110>/Switch' incorporates:
     *  Constant: '<S106>/Constant Value2'
     *  RelationalOperator: '<S110>/Relational Operator1'
     */
    if (rtb_Gain_m > -255.0F)
    {
        /* Switch: '<S110>/Switch' */
        rtb_TmpSignalConversionAtVeHM_c = rtb_Gain_m;
    }
    else
    {
        /* Switch: '<S110>/Switch' */
        rtb_TmpSignalConversionAtVeHM_c = -255.0F;
    }

    /* End of Switch: '<S110>/Switch' */
    /* End of Outputs for SubSystem: '<S106>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S107>/Limiter1' */
    /* Switch: '<S111>/Switch1' incorporates:
     *  Constant: '<S107>/Constant Value1'
     *  RelationalOperator: '<S111>/Relational Operator'
     */
    if (1024.0F < rtb_TmpSignalConversionAtVeH_hb)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 1024.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeH_hb;
    }

    /* End of Switch: '<S111>/Switch1' */

    /* Switch: '<S111>/Switch' incorporates:
     *  Constant: '<S107>/Constant Value2'
     *  RelationalOperator: '<S111>/Relational Operator1'
     */
    if (rtb_Gain_m <= -1023.0F)
    {
        rtb_Gain_m = -1023.0F;
    }

    /* End of Switch: '<S111>/Switch' */
    /* End of Outputs for SubSystem: '<S107>/Limiter1' */

    /* BusCreator: '<S5>/BusHYBRID_POWERTRAIN5_FD3' incorporates:
     *  Constant: '<S104>/Constant Value'
     *  Constant: '<S105>/Constant Value'
     *  Constant: '<S106>/Constant Value'
     *  Constant: '<S107>/Constant Value'
     *  DataTypeConversion: '<S104>/Data Type Conversion'
     *  DataTypeConversion: '<S105>/Data Type Conversion'
     *  DataTypeConversion: '<S106>/Data Type Conversion'
     *  DataTypeConversion: '<S107>/Data Type Conversion'
     *  Sum: '<S104>/Sum'
     *  Sum: '<S105>/Sum'
     *  Sum: '<S106>/Sum'
     *  Sum: '<S107>/Sum'
     */
    ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN5_FD3.E_BattPowerUse_Display = (uint16)
        ((sint32)fmodf(floorf(rtb_TmpSignalConversionAtVeHM_i - -750.0F),
                       65536.0F));
    ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN5_FD3.E_CRC_HYBRID_POWERTRAIN5 = 0U;
    ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN5_FD3.E_HEV_HybPwrtrnRdcdPerfCmnd =
        rtb_TmpSignalConversionAtVeS_ei;
    ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN5_FD3.E_Hybrid_EVT_ModeSts =
        rtb_TmpSignalConversionAtVeH_jy;
    ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN5_FD3.E_MessageCounter_HYBRID_POWERTRAIN5
        = 0U;
    ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN5_FD3.E_Motor1PowerUse_Display = (uint16)
        ((sint32)fmodf(floorf(rtb_TmpSignalConversionAtVeHM_k - -255.0F),
                       65536.0F));
    ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN5_FD3.E_Motor2PowerUse_Display = (uint16)
        ((sint32)fmodf(floorf(rtb_TmpSignalConversionAtVeHM_c - -255.0F),
                       65536.0F));
    ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN5_FD3.E_MotorsPowerUse_Display = (uint16)
        ((sint32)fmodf(floorf(rtb_Gain_m - -1023.0F), 65536.0F));

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen1' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeERER_b_EstRange_SNA' */
    (void)Rte_Read_VeERER_b_EstRange_SNA_Value(&tmpRead_n);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/ST2B_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/SigMngt'
     */
    /* Switch: '<S29>/switch' incorporates:
     *  Inport: '<Root>/VeERER_l_EstRange'
     */
    if (tmpRead_n)
    {
        /* BusCreator: '<S5>/BusVDCM_HMI_FD3' incorporates:
         *  Constant: '<S29>/Constant'
         *  DataTypeConversion: '<S20>/Data Type Conversion2'
         */
        ST2B_BLUEN_ac_B.BusVDCM_HMI_FD3.E_EstRange = 2047U;
    }
    else
    {
        (void)Rte_Read_VeERER_l_EstRange_Value(&rtb_Sum_b2);

        /* DataTypeConversion: '<S29>/Data Type Conversion5' incorporates:
         *  Inport: '<Root>/VeERER_l_EstRange'
         */
        rtb_Gain_iu = fmodf(floorf(rtb_Sum_b2), 65536.0F);

        /* BusCreator: '<S5>/BusVDCM_HMI_FD3' incorporates:
         *  DataTypeConversion: '<S20>/Data Type Conversion2'
         *  DataTypeConversion: '<S29>/Data Type Conversion5'
         */
        ST2B_BLUEN_ac_B.BusVDCM_HMI_FD3.E_EstRange = (uint16)((sint32)
            ((rtb_Gain_iu < 0.0F) ? ((sint32)((uint16)((sint32)(-((sint32)
            ((sint16)((uint16)((float32)(-rtb_Gain_iu))))))))) : ((sint32)
            ((uint16)rtb_Gain_iu))));
    }

    /* End of Switch: '<S29>/switch' */

    /* BusCreator: '<S5>/BusIMPACT_INFO_FD11' incorporates:
     *  Inport: '<Root>/VeIMPR_b_ImpactDetectedCAN'
     *  Inport: '<Root>/VeIMPR_b_ImpactToggleCAN'
     */
    (void)Rte_Read_VeIMPR_b_ImpactToggleCAN_Value
        (&ST2B_BLUEN_ac_B.BusIMPACT_INFO_FD11.E_IMPACTConfirm);
    (void)Rte_Read_VeIMPR_b_ImpactDetectedCAN_Value
        (&ST2B_BLUEN_ac_B.BusIMPACT_INFO_FD11.E_IMPACTCommand);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen1' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeHSER_e_RngStToPropulsionMode' */
    (void)Rte_Read_VeHSER_e_RngStToPropulsionMode_Value(&tmpRead_s);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/ST2B_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/SigMngt'
     */
    /* BusCreator: '<S5>/BusHYBRID_POWERTRAIN2_FD11' incorporates:
     *  Inport: '<Root>/VeTRNR_b_PwrTrnIdlSpdActvSts'
     */
    (void)Rte_Read_VeTRNR_b_PwrTrnIdlSpdActvSts_Value
        (&ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN2_FD11.E_IdleSpeedActiveSts);

    /* BusCreator: '<S5>/BusVDCM_HMI_FD3' incorporates:
     *  Inport: '<Root>/VeSSDR_b_DrvNotAllwdTPChckKeepPlugIn'
     */
    (void)Rte_Read_VeSSDR_b_DrvNotAllwdTPChckKeepPlugIn_Value
        (&ST2B_BLUEN_ac_B.BusVDCM_HMI_FD3.E_VDCM_PopUpMessage7);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen1' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeHMIR_e_VDCM_PopUpChrgPrtMis' */
    (void)Rte_Read_VeHMIR_e_VDCM_PopUpChrgPrtMis_Value(&tmpRead_o);

    /* Inport: '<Root>/VeERER_l_EstRange_ChrgStpTime' */
    (void)Rte_Read_VeERER_l_EstRange_ChrgStpTime_Value(&rtb_Sum_o3);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/ST2B_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/SigMngt'
     */
    /* BusCreator: '<S5>/BusVDCM_HMI_FD3' incorporates:
     *  Inport: '<Root>/VeHMIR_b_ThrmlRnAway_Lmp'
     */
    (void)Rte_Read_VeHMIR_b_ThrmlRnAway_Lmp_Value
        (&ST2B_BLUEN_ac_B.BusVDCM_HMI_FD3.E_BatteryRunaway_Lamp_PT);

    /* Outputs for Atomic SubSystem: '<S364>/Limiter1' */
    /* Switch: '<S365>/Switch1' incorporates:
     *  Constant: '<S364>/Constant Value1'
     *  RelationalOperator: '<S365>/Relational Operator'
     */
    if (99.6188F < rtb_TmpSignalConversionAtVeHM_j)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 99.6188F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeHM_j;
    }

    /* End of Switch: '<S365>/Switch1' */
    /* End of Outputs for SubSystem: '<S364>/Limiter1' */

    /* BusCreator: '<S5>/BusVDCM_HMI_FD3' */
    ST2B_BLUEN_ac_B.BusVDCM_HMI_FD3.E_CRC_VDCM_HMI = 0U;

    /* DataTypeConversion: '<S29>/Data Type Conversion3' */
    rtb_Gain_iu = fmodf(floorf(rtb_Sum_ax), 256.0F);

    /* BusCreator: '<S5>/BusVDCM_HMI_FD3' incorporates:
     *  DataTypeConversion: '<S29>/Data Type Conversion3'
     */
    ST2B_BLUEN_ac_B.BusVDCM_HMI_FD3.E_DC_EstChargeTime1 = (uint8)((sint32)
        ((rtb_Gain_iu < 0.0F) ? ((sint32)((uint8)((sint32)(-((sint32)((sint8)
        ((uint8)((float32)(-rtb_Gain_iu))))))))) : ((sint32)((uint8)rtb_Gain_iu))));

    /* DataTypeConversion: '<S29>/Data Type Conversion4' */
    rtb_Gain_iu = fmodf(floorf(rtb_Sum_by), 256.0F);

    /* BusCreator: '<S5>/BusVDCM_HMI_FD3' incorporates:
     *  DataTypeConversion: '<S29>/Data Type Conversion4'
     */
    ST2B_BLUEN_ac_B.BusVDCM_HMI_FD3.E_DC_EstChargeTime2 = (uint8)((sint32)
        ((rtb_Gain_iu < 0.0F) ? ((sint32)((uint8)((sint32)(-((sint32)((sint8)
        ((uint8)((float32)(-rtb_Gain_iu))))))))) : ((sint32)((uint8)rtb_Gain_iu))));

    /* Outputs for Atomic SubSystem: '<S364>/Limiter1' */
    /* Switch: '<S365>/Switch' incorporates:
     *  Constant: '<S364>/Constant Value2'
     *  RelationalOperator: '<S365>/Relational Operator1'
     */
    if (rtb_Gain_m <= 0.0F)
    {
        rtb_Gain_m = 0.0F;
    }

    /* End of Switch: '<S365>/Switch' */
    /* End of Outputs for SubSystem: '<S364>/Limiter1' */

    /* BusCreator: '<S5>/BusVDCM_HMI_FD3' incorporates:
     *  DataTypeConversion: '<S364>/Data Type Conversion'
     *  Gain: '<S364>/Gain'
     */
    ST2B_BLUEN_ac_B.BusVDCM_HMI_FD3.E_Est_HVBatSOC_VDCM = (uint8)((sint32)fmodf
        (floorf(2.54971957F * rtb_Gain_m), 256.0F));

    /* DataTypeConversion: '<S29>/Data Type Conversion7' */
    rtb_Gain_iu = fmodf(floorf(rtb_Sum_o3), 65536.0F);

    /* BusCreator: '<S5>/BusVDCM_HMI_FD3' incorporates:
     *  Constant: '<S5>/Const21'
     *  Constant: '<S5>/Const22'
     *  DataTypeConversion: '<S29>/Data Type Conversion11'
     *  DataTypeConversion: '<S29>/Data Type Conversion7'
     *  Inport: '<Root>/VeHMIR_e_VDCM_PopUpChrgPrtMis'
     */
    ST2B_BLUEN_ac_B.BusVDCM_HMI_FD3.E_Est_Range_ChrgStopTime = (uint16)((sint32)
        ((rtb_Gain_iu < 0.0F) ? ((sint32)((uint16)((sint32)(-((sint32)((sint16)
        ((uint16)((float32)(-rtb_Gain_iu))))))))) : ((sint32)((uint16)
        rtb_Gain_iu))));
    ST2B_BLUEN_ac_B.BusVDCM_HMI_FD3.E_MessageCounter_VDCM_HMI = 0U;
    ST2B_BLUEN_ac_B.BusVDCM_HMI_FD3.E_ServiceHVError = false;
    ST2B_BLUEN_ac_B.BusVDCM_HMI_FD3.E_ThermalRunaway_Alert = false;
    ST2B_BLUEN_ac_B.BusVDCM_HMI_FD3.E_VDCM_PopUpMessage5 = (uint8)tmpRead_o;

    /* BusCreator: '<S5>/BusHYBRID_POWERTRAIN2_FD11' incorporates:
     *  Constant: '<S5>/Const24'
     *  Constant: '<S5>/Const26'
     *  DataTypeConversion: '<S12>/Data Type Conversion6'
     *  Inport: '<Root>/VeHSER_e_RngStToPropulsionMode'
     */
    ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN2_FD11.E_CODE_CLR_HCP = false;
    ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN2_FD11.E_CRC_HYBRID_POWERTRAIN2 = 0U;
    ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN2_FD11.E_HybridEngineMaxTorqAllowed =
        938U;
    ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN2_FD11.E_MessageCounter_HYBRID_POWERTRAIN2
        = 0U;
    ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN2_FD11.E_PropulsionMode = (uint8)
        tmpRead_s;
    ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN2_FD11.E_REPRGD_PFC_CLR_HCP = false;

    /* BusCreator: '<S5>/BusIMPACT_INFO_FD11' incorporates:
     *  Constant: '<S15>/CRC_IMPACTINFO'
     */
    ST2B_BLUEN_ac_B.BusIMPACT_INFO_FD11.E_CRC_IMPACTINFO = 0U;
    ST2B_BLUEN_ac_B.BusIMPACT_INFO_FD11.E_MessageCounter_IMPACTINFO = 0U;

    /* Outputs for Atomic SubSystem: '<S112>/Limiter1' */
    /* Switch: '<S140>/Switch1' incorporates:
     *  Constant: '<S112>/Constant Value1'
     *  RelationalOperator: '<S140>/Relational Operator'
     */
    if (25.5F < rtb_TmpSignalConversionAtVeHTDR)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 25.5F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeHTDR;
    }

    /* End of Switch: '<S140>/Switch1' */

    /* Switch: '<S140>/Switch' incorporates:
     *  Constant: '<S112>/Constant Value2'
     *  RelationalOperator: '<S140>/Relational Operator1'
     */
    if (rtb_Gain_m > 0.0F)
    {
        /* Sum: '<S112>/Sum' */
        rtb_TmpSignalConversionAtVeH_hb = rtb_Gain_m;
    }
    else
    {
        /* Sum: '<S112>/Sum' */
        rtb_TmpSignalConversionAtVeH_hb = 0.0F;
    }

    /* End of Switch: '<S140>/Switch' */
    /* End of Outputs for SubSystem: '<S112>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S113>/Limiter1' */
    /* Switch: '<S141>/Switch1' incorporates:
     *  Constant: '<S113>/Constant Value1'
     *  RelationalOperator: '<S141>/Relational Operator'
     */
    if (25.5F < rtb_TmpSignalConversionAtVeHT_g)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 25.5F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeHT_g;
    }

    /* End of Switch: '<S141>/Switch1' */

    /* Switch: '<S141>/Switch' incorporates:
     *  Constant: '<S113>/Constant Value2'
     *  RelationalOperator: '<S141>/Relational Operator1'
     */
    if (rtb_Gain_m > 0.0F)
    {
        /* Sum: '<S113>/Sum' */
        rtb_TmpSignalConversionAtVeHM_j = rtb_Gain_m;
    }
    else
    {
        /* Sum: '<S113>/Sum' */
        rtb_TmpSignalConversionAtVeHM_j = 0.0F;
    }

    /* End of Switch: '<S141>/Switch' */
    /* End of Outputs for SubSystem: '<S113>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S124>/Limiter1' */
    /* Switch: '<S152>/Switch1' incorporates:
     *  Constant: '<S124>/Constant Value1'
     *  RelationalOperator: '<S152>/Relational Operator'
     */
    if (30.0F < rtb_TmpSignalConversionAtVeHT_h)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 30.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeHT_h;
    }

    /* End of Switch: '<S152>/Switch1' */

    /* Switch: '<S152>/Switch' incorporates:
     *  Constant: '<S124>/Constant Value2'
     *  RelationalOperator: '<S152>/Relational Operator1'
     */
    if (rtb_Gain_m > 4.5F)
    {
        rtb_Gain_iu = rtb_Gain_m;
    }
    else
    {
        rtb_Gain_iu = 4.5F;
    }

    /* End of Switch: '<S152>/Switch' */
    /* End of Outputs for SubSystem: '<S124>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S133>/Limiter1' */
    /* Switch: '<S161>/Switch1' incorporates:
     *  Constant: '<S133>/Constant Value1'
     *  RelationalOperator: '<S161>/Relational Operator'
     */
    if (30.0F < rtb_TmpSignalConversionAtVeH_k2)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 30.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeH_k2;
    }

    /* End of Switch: '<S161>/Switch1' */

    /* Switch: '<S161>/Switch' incorporates:
     *  Constant: '<S133>/Constant Value2'
     *  RelationalOperator: '<S161>/Relational Operator1'
     */
    if (rtb_Gain_m > 4.5F)
    {
        rtb_Gain_iu_0 = rtb_Gain_m;
    }
    else
    {
        rtb_Gain_iu_0 = 4.5F;
    }

    /* End of Switch: '<S161>/Switch' */
    /* End of Outputs for SubSystem: '<S133>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S134>/Limiter1' */
    /* Switch: '<S162>/Switch1' incorporates:
     *  Constant: '<S134>/Constant Value1'
     *  RelationalOperator: '<S162>/Relational Operator'
     */
    if (511.875F < rtb_TmpSignalConversionAtVeHT_d)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 511.875F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeHT_d;
    }

    /* End of Switch: '<S162>/Switch1' */

    /* Switch: '<S162>/Switch' incorporates:
     *  Constant: '<S134>/Constant Value2'
     *  RelationalOperator: '<S162>/Relational Operator1'
     */
    if (rtb_Gain_m > 0.0F)
    {
        /* Sum: '<S134>/Sum' */
        rtb_Sum_b2 = rtb_Gain_m;
    }
    else
    {
        /* Sum: '<S134>/Sum' */
        rtb_Sum_b2 = 0.0F;
    }

    /* End of Switch: '<S162>/Switch' */
    /* End of Outputs for SubSystem: '<S134>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S135>/Limiter1' */
    /* Switch: '<S163>/Switch1' incorporates:
     *  Constant: '<S135>/Constant Value1'
     *  RelationalOperator: '<S163>/Relational Operator'
     */
    if (0.0F < rtb_TmpSignalConversionAtVeH_ok)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 0.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeH_ok;
    }

    /* End of Switch: '<S163>/Switch1' */

    /* Switch: '<S163>/Switch' incorporates:
     *  Constant: '<S135>/Constant Value2'
     *  RelationalOperator: '<S163>/Relational Operator1'
     */
    if (rtb_Gain_m > -511.875F)
    {
        rtb_TmpSignalConversionAtVeWTAR = rtb_Gain_m;
    }
    else
    {
        rtb_TmpSignalConversionAtVeWTAR = -511.875F;
    }

    /* End of Switch: '<S163>/Switch' */
    /* End of Outputs for SubSystem: '<S135>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S136>/Limiter1' */
    /* Switch: '<S164>/Switch1' incorporates:
     *  Constant: '<S136>/Constant Value1'
     *  RelationalOperator: '<S164>/Relational Operator'
     */
    if (0.0F < rtb_TmpSignalConversionAtVeHT_l)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 0.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeHT_l;
    }

    /* End of Switch: '<S164>/Switch1' */

    /* Switch: '<S164>/Switch' incorporates:
     *  Constant: '<S136>/Constant Value2'
     *  RelationalOperator: '<S164>/Relational Operator1'
     */
    if (rtb_Gain_m > -511.875F)
    {
        rtb_TmpSignalConversionAtVeWT_h = rtb_Gain_m;
    }
    else
    {
        rtb_TmpSignalConversionAtVeWT_h = -511.875F;
    }

    /* End of Switch: '<S164>/Switch' */
    /* End of Outputs for SubSystem: '<S136>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S137>/Limiter1' */
    /* Switch: '<S165>/Switch1' incorporates:
     *  Constant: '<S137>/Constant Value1'
     *  RelationalOperator: '<S165>/Relational Operator'
     */
    if (20.46F < rtb_TmpSignalConversionAtVeHT_a)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 20.46F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeHT_a;
    }

    /* End of Switch: '<S165>/Switch1' */

    /* Switch: '<S165>/Switch' incorporates:
     *  Constant: '<S137>/Constant Value2'
     *  RelationalOperator: '<S165>/Relational Operator1'
     */
    if (rtb_Gain_m > 0.0F)
    {
        /* Sum: '<S137>/Sum' */
        rtb_TmpSignalConversionAtVeHM_k = rtb_Gain_m;
    }
    else
    {
        /* Sum: '<S137>/Sum' */
        rtb_TmpSignalConversionAtVeHM_k = 0.0F;
    }

    /* End of Switch: '<S165>/Switch' */
    /* End of Outputs for SubSystem: '<S137>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S138>/Limiter1' */
    /* Switch: '<S166>/Switch1' incorporates:
     *  Constant: '<S138>/Constant Value1'
     *  RelationalOperator: '<S166>/Relational Operator'
     */
    if (20.46F < rtb_TmpSignalConversionAtVeH_ha)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 20.46F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeH_ha;
    }

    /* End of Switch: '<S166>/Switch1' */

    /* Switch: '<S166>/Switch' incorporates:
     *  Constant: '<S138>/Constant Value2'
     *  RelationalOperator: '<S166>/Relational Operator1'
     */
    if (rtb_Gain_m > 0.0F)
    {
        /* Sum: '<S138>/Sum' */
        rtb_Sum_fa = rtb_Gain_m;
    }
    else
    {
        /* Sum: '<S138>/Sum' */
        rtb_Sum_fa = 0.0F;
    }

    /* End of Switch: '<S166>/Switch' */
    /* End of Outputs for SubSystem: '<S138>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S139>/Limiter1' */
    /* Switch: '<S167>/Switch1' incorporates:
     *  Constant: '<S139>/Constant Value1'
     *  RelationalOperator: '<S167>/Relational Operator'
     */
    if (511.875F < rtb_TmpSignalConversionAtVeH_ar)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 511.875F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeH_ar;
    }

    /* End of Switch: '<S167>/Switch1' */

    /* Switch: '<S167>/Switch' incorporates:
     *  Constant: '<S139>/Constant Value2'
     *  RelationalOperator: '<S167>/Relational Operator1'
     */
    if (rtb_Gain_m > 0.0F)
    {
        /* Sum: '<S139>/Sum' */
        rtb_Sum_ar = rtb_Gain_m;
    }
    else
    {
        /* Sum: '<S139>/Sum' */
        rtb_Sum_ar = 0.0F;
    }

    /* End of Switch: '<S167>/Switch' */
    /* End of Outputs for SubSystem: '<S139>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S114>/Limiter1' */
    /* Switch: '<S142>/Switch1' incorporates:
     *  Constant: '<S114>/Constant Value1'
     *  RelationalOperator: '<S142>/Relational Operator'
     */
    if (255.0F < rtb_TmpSignalConversionAtVeHT_e)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 255.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeHT_e;
    }

    /* End of Switch: '<S142>/Switch1' */

    /* Switch: '<S142>/Switch' incorporates:
     *  Constant: '<S114>/Constant Value2'
     *  RelationalOperator: '<S142>/Relational Operator1'
     */
    if (rtb_Gain_m > -256.0F)
    {
        rtb_TmpSignalConversionAtVeS_al = rtb_Gain_m;
    }
    else
    {
        rtb_TmpSignalConversionAtVeS_al = -256.0F;
    }

    /* End of Switch: '<S142>/Switch' */
    /* End of Outputs for SubSystem: '<S114>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S115>/Limiter1' */
    /* Switch: '<S143>/Switch1' incorporates:
     *  Constant: '<S115>/Constant Value1'
     *  RelationalOperator: '<S143>/Relational Operator'
     */
    if (255.0F < rtb_TmpSignalConversionAtVeHT_j)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 255.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeHT_j;
    }

    /* End of Switch: '<S143>/Switch1' */

    /* Switch: '<S143>/Switch' incorporates:
     *  Constant: '<S115>/Constant Value2'
     *  RelationalOperator: '<S143>/Relational Operator1'
     */
    if (rtb_Gain_m > -256.0F)
    {
        rtb_TmpSignalConversionAtVeHM_f = rtb_Gain_m;
    }
    else
    {
        rtb_TmpSignalConversionAtVeHM_f = -256.0F;
    }

    /* End of Switch: '<S143>/Switch' */
    /* End of Outputs for SubSystem: '<S115>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S122>/Limiter1' */
    /* Switch: '<S150>/Switch1' incorporates:
     *  Constant: '<S122>/Constant Value1'
     *  RelationalOperator: '<S150>/Relational Operator'
     */
    if (16383.5F < rtb_TmpSignalConversionAtVeHT_i)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 16383.5F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeHT_i;
    }

    /* End of Switch: '<S150>/Switch1' */

    /* Switch: '<S150>/Switch' incorporates:
     *  Constant: '<S122>/Constant Value2'
     *  RelationalOperator: '<S150>/Relational Operator1'
     */
    if (rtb_Gain_m > -16384.0F)
    {
        rtb_TmpSignalConversionAtVeHM_i = rtb_Gain_m;
    }
    else
    {
        rtb_TmpSignalConversionAtVeHM_i = -16384.0F;
    }

    /* End of Switch: '<S150>/Switch' */
    /* End of Outputs for SubSystem: '<S122>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S123>/Limiter1' */
    /* Switch: '<S151>/Switch1' incorporates:
     *  Constant: '<S123>/Constant Value1'
     *  RelationalOperator: '<S151>/Relational Operator'
     */
    if (16383.5F < rtb_TmpSignalConversionAtVeH_hv)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 16383.5F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeH_hv;
    }

    /* End of Switch: '<S151>/Switch1' */

    /* Switch: '<S151>/Switch' incorporates:
     *  Constant: '<S123>/Constant Value2'
     *  RelationalOperator: '<S151>/Relational Operator1'
     */
    if (rtb_Gain_m > -16384.0F)
    {
        rtb_TmpSignalConversionAtVeHM_c = rtb_Gain_m;
    }
    else
    {
        rtb_TmpSignalConversionAtVeHM_c = -16384.0F;
    }

    /* End of Switch: '<S151>/Switch' */
    /* End of Outputs for SubSystem: '<S123>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S125>/Limiter1' */
    /* Switch: '<S153>/Switch1' incorporates:
     *  Constant: '<S125>/Constant Value1'
     *  RelationalOperator: '<S153>/Relational Operator'
     */
    if (511.875F < rtb_TmpSignalConversionAtVeS_hx)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 511.875F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeS_hx;
    }

    /* End of Switch: '<S153>/Switch1' */

    /* Switch: '<S153>/Switch' incorporates:
     *  Constant: '<S125>/Constant Value2'
     *  RelationalOperator: '<S153>/Relational Operator1'
     */
    if (rtb_Gain_m > -512.0F)
    {
        rtb_TmpSignalConversionAtVePLTR = rtb_Gain_m;
    }
    else
    {
        rtb_TmpSignalConversionAtVePLTR = -512.0F;
    }

    /* End of Switch: '<S153>/Switch' */
    /* End of Outputs for SubSystem: '<S125>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S126>/Limiter1' */
    /* Switch: '<S154>/Switch1' incorporates:
     *  Constant: '<S126>/Constant Value1'
     *  RelationalOperator: '<S154>/Relational Operator'
     */
    if (511.875F < rtb_TmpSignalConversionAtVeSR_j)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 511.875F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeSR_j;
    }

    /* End of Switch: '<S154>/Switch1' */
    /* End of Outputs for SubSystem: '<S126>/Limiter1' */

    /* BusCreator: '<S5>/BusINVTARGET1_2_FD11' incorporates:
     *  Constant: '<S114>/Constant Value'
     *  Constant: '<S115>/Constant Value'
     *  Constant: '<S122>/Constant Value'
     *  Constant: '<S123>/Constant Value'
     *  Constant: '<S124>/Constant Value'
     *  Constant: '<S125>/Constant Value'
     *  Constant: '<S133>/Constant Value'
     *  Constant: '<S135>/Constant Value'
     *  Constant: '<S136>/Constant Value'
     *  Constant: '<S5>/Const28'
     *  Constant: '<S5>/Const29'
     *  Constant: '<S5>/Const30'
     *  Constant: '<S5>/Const31'
     *  Constant: '<S5>/Const32'
     *  DataTypeConversion: '<S112>/Data Type Conversion'
     *  DataTypeConversion: '<S113>/Data Type Conversion'
     *  DataTypeConversion: '<S114>/Data Type Conversion'
     *  DataTypeConversion: '<S115>/Data Type Conversion'
     *  DataTypeConversion: '<S122>/Data Type Conversion'
     *  DataTypeConversion: '<S123>/Data Type Conversion'
     *  DataTypeConversion: '<S124>/Data Type Conversion'
     *  DataTypeConversion: '<S125>/Data Type Conversion'
     *  DataTypeConversion: '<S133>/Data Type Conversion'
     *  DataTypeConversion: '<S134>/Data Type Conversion'
     *  DataTypeConversion: '<S135>/Data Type Conversion'
     *  DataTypeConversion: '<S136>/Data Type Conversion'
     *  DataTypeConversion: '<S137>/Data Type Conversion'
     *  DataTypeConversion: '<S138>/Data Type Conversion'
     *  DataTypeConversion: '<S139>/Data Type Conversion'
     *  DataTypeConversion: '<S16>/Data Type Conversion25'
     *  DataTypeConversion: '<S16>/Data Type Conversion26'
     *  Gain: '<S112>/Gain'
     *  Gain: '<S113>/Gain'
     *  Gain: '<S114>/Gain'
     *  Gain: '<S115>/Gain'
     *  Gain: '<S122>/Gain'
     *  Gain: '<S123>/Gain'
     *  Gain: '<S124>/Gain'
     *  Gain: '<S125>/Gain'
     *  Gain: '<S133>/Gain'
     *  Gain: '<S134>/Gain'
     *  Gain: '<S135>/Gain'
     *  Gain: '<S136>/Gain'
     *  Gain: '<S137>/Gain'
     *  Gain: '<S138>/Gain'
     *  Gain: '<S139>/Gain'
     *  SignalConversion generated from: '<S2>/VeSRMR_e_MtrA_MdCmnd'
     *  SignalConversion generated from: '<S2>/VeSRMR_e_MtrB_MdCmnd'
     *  Sum: '<S114>/Sum'
     *  Sum: '<S115>/Sum'
     *  Sum: '<S122>/Sum'
     *  Sum: '<S123>/Sum'
     *  Sum: '<S124>/Sum'
     *  Sum: '<S125>/Sum'
     *  Sum: '<S133>/Sum'
     *  Sum: '<S135>/Sum'
     *  Sum: '<S136>/Sum'
     */
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD11.E_AEMD_Cutoff_FreqHigh_MCPA_2 = (uint8)
        ((sint32)fmodf(floorf(10.0F * rtb_TmpSignalConversionAtVeH_hb), 256.0F));
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD11.E_AEMD_Cutoff_FreqHigh_MCPB_2 = (uint8)
        ((sint32)fmodf(floorf(10.0F * rtb_TmpSignalConversionAtVeHM_j), 256.0F));
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD11.E_AEMD_Cutoff_FreqLow_MCPA_2 = (uint8)
        ((sint32)fmodf(floorf(10.0F * (rtb_Gain_iu - 4.5F)), 256.0F));
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD11.E_AEMD_Cutoff_FreqLow_MCPB_2 = (uint8)
        ((sint32)fmodf(floorf(10.0F * (rtb_Gain_iu_0 - 4.5F)), 256.0F));
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD11.E_AEMD_MaxOffset_MCPB_2 = (uint16)
        ((sint32)fmodf(floorf(8.0F * rtb_Sum_b2), 65536.0F));
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD11.E_AEMD_MinOffset_MCPA_2 = (uint16)
        ((sint32)fmodf(floorf(8.0F * (rtb_TmpSignalConversionAtVeWTAR -
            -511.875F)), 65536.0F));
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD11.E_AEMD_MinOffset_MCPB_2 = (uint16)
        ((sint32)fmodf(floorf(8.0F * (rtb_TmpSignalConversionAtVeWT_h -
            -511.875F)), 65536.0F));
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD11.E_AEMD_Sclr_Gn_MCPA_2 = (uint16)
        ((sint32)fmodf(floorf(100.0F * rtb_TmpSignalConversionAtVeHM_k),
                       65536.0F));
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD11.E_AEMD_Sclr_Gn_MCPB_2 = (uint16)
        ((sint32)fmodf(floorf(100.0F * rtb_Sum_fa), 65536.0F));
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD11.E_AEMD_Torque_BoostVolt_Margin =
        (uint16)((sint32)fmodf(floorf(8.0F * rtb_Sum_ar), 65536.0F));
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD11.E_Boost_Torque_Margin_MCPA = (uint16)
        ((sint32)fmodf(floorf(2.0F * (rtb_TmpSignalConversionAtVeS_al - -256.0F)),
                       65536.0F));
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD11.E_Boost_Torque_Margin_MCPB = (uint16)
        ((sint32)fmodf(floorf(2.0F * (rtb_TmpSignalConversionAtVeHM_f - -256.0F)),
                       65536.0F));
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD11.E_CRC_INVTARGET1_2 = 0U;
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD11.E_Cntr_INVTARGET1_2 = 0U;
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD11.E_EVCU_END_Request_Flag_2 =
        rtb_TmpSignalConversionAtVeAPMR;
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD11.E_HVBatVlt_V_2 = false;
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD11.E_LgsDiagCldStrtCndFltPr_MCPB_2 = false;
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD11.E_LgsDiagCldStrtCndMet_MCPB_2 = false;
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD11.E_MAC_INVTARGET1_2 = 0ULL;
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD11.E_MaxTorque_Limit_MCPA_2 = 16382U;
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD11.E_MaxTorque_Limit_MCPB_2 = 16382U;
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD11.E_MessageCounter_INVTARGET1_2 = 0U;
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD11.E_MinTorque_Limit_MCPA_2 = 0U;
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD11.E_MinTorque_Limit_MCPB_2 = 0U;
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD11.E_ModeCommand_MCPA_2 = (uint8)
        rtb_TmpSignalConversionAtVeS_go;
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD11.E_ModeCommand_MCPB_2 = (uint8)
        rtb_TmpSignalConversionAtVeSR_a;
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD11.E_Mtr_6SO_Request_MCPA_2 =
        rtb_TmpSignalConversionAtVeHT_k;
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD11.E_Mtr_6SO_Request_MCPB_2 =
        rtb_TmpSignalConversionAtVeHT_f;
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD11.E_SpdGrdtLim_MCPA_2 = 0U;
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD11.E_SpdGrdtLim_MCPB_2 = 0U;
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD11.E_TargetMotorRPM_MCPA_2 = (uint16)
        ((sint32)fmodf(floorf(2.0F * (rtb_TmpSignalConversionAtVeHM_i -
            -16384.0F)), 65536.0F));
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD11.E_TargetMotorRPM_MCPB_2 = (uint16)
        ((sint32)fmodf(floorf(2.0F * (rtb_TmpSignalConversionAtVeHM_c -
            -16384.0F)), 65536.0F));
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD11.E_TorqueCommand_MCPA_2 = (uint16)
        ((sint32)fmodf(floorf(8.0F * (rtb_TmpSignalConversionAtVePLTR - -512.0F)),
                       65536.0F));

    /* Outputs for Atomic SubSystem: '<S126>/Limiter1' */
    /* Switch: '<S154>/Switch' incorporates:
     *  Constant: '<S126>/Constant Value2'
     *  RelationalOperator: '<S154>/Relational Operator1'
     */
    if (rtb_Gain_m <= -512.0F)
    {
        rtb_Gain_m = -512.0F;
    }

    /* End of Switch: '<S154>/Switch' */
    /* End of Outputs for SubSystem: '<S126>/Limiter1' */

    /* BusCreator: '<S5>/BusINVTARGET1_2_FD11' incorporates:
     *  Constant: '<S126>/Constant Value'
     *  DataTypeConversion: '<S126>/Data Type Conversion'
     *  Gain: '<S126>/Gain'
     *  Sum: '<S126>/Sum'
     */
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD11.E_TorqueCommand_MCPB_2 = (uint16)
        ((sint32)fmodf(floorf((rtb_Gain_m - -512.0F) * 8.0F), 65536.0F));
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD11.E_TqGrdtLim_MCPA_2 = 0U;
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD11.E_TqGrdtLim_MCPB_2 = 0U;
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD11.E_UDCMax_Unlim_MCPA_2 = 0U;
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD11.E_UDCMax_Unlim_MCPB_2 = 0U;
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD11.E_UDCMin_Unlim_MCPA_2 = 0U;
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD11.E_UDCMin_Unlim_MCPB_2 = 0U;

    /* Outputs for Atomic SubSystem: '<S168>/Limiter1' */
    /* Switch: '<S196>/Switch1' incorporates:
     *  Constant: '<S168>/Constant Value1'
     *  RelationalOperator: '<S196>/Relational Operator'
     */
    if (25.5F < rtb_TmpSignalConversionAtVeHTDR)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 25.5F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeHTDR;
    }

    /* End of Switch: '<S196>/Switch1' */

    /* Switch: '<S196>/Switch' incorporates:
     *  Constant: '<S168>/Constant Value2'
     *  RelationalOperator: '<S196>/Relational Operator1'
     */
    if (rtb_Gain_m > 0.0F)
    {
        /* Sum: '<S168>/Sum' */
        rtb_TmpSignalConversionAtVeHTDR = rtb_Gain_m;
    }
    else
    {
        /* Sum: '<S168>/Sum' */
        rtb_TmpSignalConversionAtVeHTDR = 0.0F;
    }

    /* End of Switch: '<S196>/Switch' */
    /* End of Outputs for SubSystem: '<S168>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S169>/Limiter1' */
    /* Switch: '<S197>/Switch1' incorporates:
     *  Constant: '<S169>/Constant Value1'
     *  RelationalOperator: '<S197>/Relational Operator'
     */
    if (25.5F < rtb_TmpSignalConversionAtVeHT_g)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 25.5F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeHT_g;
    }

    /* End of Switch: '<S197>/Switch1' */

    /* Switch: '<S197>/Switch' incorporates:
     *  Constant: '<S169>/Constant Value2'
     *  RelationalOperator: '<S197>/Relational Operator1'
     */
    if (rtb_Gain_m > 0.0F)
    {
        /* Sum: '<S169>/Sum' */
        rtb_TmpSignalConversionAtVeHT_g = rtb_Gain_m;
    }
    else
    {
        /* Sum: '<S169>/Sum' */
        rtb_TmpSignalConversionAtVeHT_g = 0.0F;
    }

    /* End of Switch: '<S197>/Switch' */
    /* End of Outputs for SubSystem: '<S169>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S180>/Limiter1' */
    /* Switch: '<S208>/Switch1' incorporates:
     *  Constant: '<S180>/Constant Value1'
     *  RelationalOperator: '<S208>/Relational Operator'
     */
    if (30.0F < rtb_TmpSignalConversionAtVeHT_h)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 30.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeHT_h;
    }

    /* End of Switch: '<S208>/Switch1' */

    /* Switch: '<S208>/Switch' incorporates:
     *  Constant: '<S180>/Constant Value2'
     *  RelationalOperator: '<S208>/Relational Operator1'
     */
    if (rtb_Gain_m > 4.5F)
    {
        rtb_Gain_iu = rtb_Gain_m;
    }
    else
    {
        rtb_Gain_iu = 4.5F;
    }

    /* End of Switch: '<S208>/Switch' */
    /* End of Outputs for SubSystem: '<S180>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S189>/Limiter1' */
    /* Switch: '<S217>/Switch1' incorporates:
     *  Constant: '<S189>/Constant Value1'
     *  RelationalOperator: '<S217>/Relational Operator'
     */
    if (30.0F < rtb_TmpSignalConversionAtVeH_k2)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 30.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeH_k2;
    }

    /* End of Switch: '<S217>/Switch1' */

    /* Switch: '<S217>/Switch' incorporates:
     *  Constant: '<S189>/Constant Value2'
     *  RelationalOperator: '<S217>/Relational Operator1'
     */
    if (rtb_Gain_m > 4.5F)
    {
        rtb_Gain_iu_0 = rtb_Gain_m;
    }
    else
    {
        rtb_Gain_iu_0 = 4.5F;
    }

    /* End of Switch: '<S217>/Switch' */
    /* End of Outputs for SubSystem: '<S189>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S190>/Limiter1' */
    /* Switch: '<S218>/Switch1' incorporates:
     *  Constant: '<S190>/Constant Value1'
     *  RelationalOperator: '<S218>/Relational Operator'
     */
    if (511.875F < rtb_TmpSignalConversionAtVeHT_d)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 511.875F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeHT_d;
    }

    /* End of Switch: '<S218>/Switch1' */

    /* Switch: '<S218>/Switch' incorporates:
     *  Constant: '<S190>/Constant Value2'
     *  RelationalOperator: '<S218>/Relational Operator1'
     */
    if (rtb_Gain_m > 0.0F)
    {
        /* Sum: '<S190>/Sum' */
        rtb_TmpSignalConversionAtVeHT_d = rtb_Gain_m;
    }
    else
    {
        /* Sum: '<S190>/Sum' */
        rtb_TmpSignalConversionAtVeHT_d = 0.0F;
    }

    /* End of Switch: '<S218>/Switch' */
    /* End of Outputs for SubSystem: '<S190>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S191>/Limiter1' */
    /* Switch: '<S219>/Switch1' incorporates:
     *  Constant: '<S191>/Constant Value1'
     *  RelationalOperator: '<S219>/Relational Operator'
     */
    if (0.0F < rtb_TmpSignalConversionAtVeH_ok)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 0.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeH_ok;
    }

    /* End of Switch: '<S219>/Switch1' */

    /* Switch: '<S219>/Switch' incorporates:
     *  Constant: '<S191>/Constant Value2'
     *  RelationalOperator: '<S219>/Relational Operator1'
     */
    if (rtb_Gain_m > -511.875F)
    {
        rtb_TmpSignalConversionAtVeWTAR = rtb_Gain_m;
    }
    else
    {
        rtb_TmpSignalConversionAtVeWTAR = -511.875F;
    }

    /* End of Switch: '<S219>/Switch' */
    /* End of Outputs for SubSystem: '<S191>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S192>/Limiter1' */
    /* Switch: '<S220>/Switch1' incorporates:
     *  Constant: '<S192>/Constant Value1'
     *  RelationalOperator: '<S220>/Relational Operator'
     */
    if (0.0F < rtb_TmpSignalConversionAtVeHT_l)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 0.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeHT_l;
    }

    /* End of Switch: '<S220>/Switch1' */

    /* Switch: '<S220>/Switch' incorporates:
     *  Constant: '<S192>/Constant Value2'
     *  RelationalOperator: '<S220>/Relational Operator1'
     */
    if (rtb_Gain_m > -511.875F)
    {
        rtb_TmpSignalConversionAtVeWT_h = rtb_Gain_m;
    }
    else
    {
        rtb_TmpSignalConversionAtVeWT_h = -511.875F;
    }

    /* End of Switch: '<S220>/Switch' */
    /* End of Outputs for SubSystem: '<S192>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S193>/Limiter1' */
    /* Switch: '<S221>/Switch1' incorporates:
     *  Constant: '<S193>/Constant Value1'
     *  RelationalOperator: '<S221>/Relational Operator'
     */
    if (20.46F < rtb_TmpSignalConversionAtVeHT_a)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 20.46F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeHT_a;
    }

    /* End of Switch: '<S221>/Switch1' */

    /* Switch: '<S221>/Switch' incorporates:
     *  Constant: '<S193>/Constant Value2'
     *  RelationalOperator: '<S221>/Relational Operator1'
     */
    if (rtb_Gain_m > 0.0F)
    {
        /* Sum: '<S193>/Sum' */
        rtb_TmpSignalConversionAtVeHT_a = rtb_Gain_m;
    }
    else
    {
        /* Sum: '<S193>/Sum' */
        rtb_TmpSignalConversionAtVeHT_a = 0.0F;
    }

    /* End of Switch: '<S221>/Switch' */
    /* End of Outputs for SubSystem: '<S193>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S194>/Limiter1' */
    /* Switch: '<S222>/Switch1' incorporates:
     *  Constant: '<S194>/Constant Value1'
     *  RelationalOperator: '<S222>/Relational Operator'
     */
    if (20.46F < rtb_TmpSignalConversionAtVeH_ha)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 20.46F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeH_ha;
    }

    /* End of Switch: '<S222>/Switch1' */

    /* Switch: '<S222>/Switch' incorporates:
     *  Constant: '<S194>/Constant Value2'
     *  RelationalOperator: '<S222>/Relational Operator1'
     */
    if (rtb_Gain_m > 0.0F)
    {
        /* Sum: '<S194>/Sum' */
        rtb_TmpSignalConversionAtVeH_ha = rtb_Gain_m;
    }
    else
    {
        /* Sum: '<S194>/Sum' */
        rtb_TmpSignalConversionAtVeH_ha = 0.0F;
    }

    /* End of Switch: '<S222>/Switch' */
    /* End of Outputs for SubSystem: '<S194>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S195>/Limiter1' */
    /* Switch: '<S223>/Switch1' incorporates:
     *  Constant: '<S195>/Constant Value1'
     *  RelationalOperator: '<S223>/Relational Operator'
     */
    if (511.875F < rtb_TmpSignalConversionAtVeH_ar)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 511.875F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeH_ar;
    }

    /* End of Switch: '<S223>/Switch1' */

    /* Switch: '<S223>/Switch' incorporates:
     *  Constant: '<S195>/Constant Value2'
     *  RelationalOperator: '<S223>/Relational Operator1'
     */
    if (rtb_Gain_m > 0.0F)
    {
        /* Sum: '<S195>/Sum' */
        rtb_TmpSignalConversionAtVeH_ar = rtb_Gain_m;
    }
    else
    {
        /* Sum: '<S195>/Sum' */
        rtb_TmpSignalConversionAtVeH_ar = 0.0F;
    }

    /* End of Switch: '<S223>/Switch' */
    /* End of Outputs for SubSystem: '<S195>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S170>/Limiter1' */
    /* Switch: '<S198>/Switch1' incorporates:
     *  Constant: '<S170>/Constant Value1'
     *  RelationalOperator: '<S198>/Relational Operator'
     */
    if (255.0F < rtb_TmpSignalConversionAtVeHT_e)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 255.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeHT_e;
    }

    /* End of Switch: '<S198>/Switch1' */

    /* Switch: '<S198>/Switch' incorporates:
     *  Constant: '<S170>/Constant Value2'
     *  RelationalOperator: '<S198>/Relational Operator1'
     */
    if (rtb_Gain_m > -256.0F)
    {
        rtb_TmpSignalConversionAtVeS_al = rtb_Gain_m;
    }
    else
    {
        rtb_TmpSignalConversionAtVeS_al = -256.0F;
    }

    /* End of Switch: '<S198>/Switch' */
    /* End of Outputs for SubSystem: '<S170>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S171>/Limiter1' */
    /* Switch: '<S199>/Switch1' incorporates:
     *  Constant: '<S171>/Constant Value1'
     *  RelationalOperator: '<S199>/Relational Operator'
     */
    if (255.0F < rtb_TmpSignalConversionAtVeHT_j)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 255.0F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeHT_j;
    }

    /* End of Switch: '<S199>/Switch1' */

    /* Switch: '<S199>/Switch' incorporates:
     *  Constant: '<S171>/Constant Value2'
     *  RelationalOperator: '<S199>/Relational Operator1'
     */
    if (rtb_Gain_m > -256.0F)
    {
        rtb_TmpSignalConversionAtVeHM_f = rtb_Gain_m;
    }
    else
    {
        rtb_TmpSignalConversionAtVeHM_f = -256.0F;
    }

    /* End of Switch: '<S199>/Switch' */
    /* End of Outputs for SubSystem: '<S171>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S178>/Limiter1' */
    /* Switch: '<S206>/Switch1' incorporates:
     *  Constant: '<S178>/Constant Value1'
     *  RelationalOperator: '<S206>/Relational Operator'
     */
    if (16383.5F < rtb_TmpSignalConversionAtVeHT_i)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 16383.5F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeHT_i;
    }

    /* End of Switch: '<S206>/Switch1' */

    /* Switch: '<S206>/Switch' incorporates:
     *  Constant: '<S178>/Constant Value2'
     *  RelationalOperator: '<S206>/Relational Operator1'
     */
    if (rtb_Gain_m > -16384.0F)
    {
        rtb_TmpSignalConversionAtVeHM_i = rtb_Gain_m;
    }
    else
    {
        rtb_TmpSignalConversionAtVeHM_i = -16384.0F;
    }

    /* End of Switch: '<S206>/Switch' */
    /* End of Outputs for SubSystem: '<S178>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S179>/Limiter1' */
    /* Switch: '<S207>/Switch1' incorporates:
     *  Constant: '<S179>/Constant Value1'
     *  RelationalOperator: '<S207>/Relational Operator'
     */
    if (16383.5F < rtb_TmpSignalConversionAtVeH_hv)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 16383.5F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeH_hv;
    }

    /* End of Switch: '<S207>/Switch1' */

    /* Switch: '<S207>/Switch' incorporates:
     *  Constant: '<S179>/Constant Value2'
     *  RelationalOperator: '<S207>/Relational Operator1'
     */
    if (rtb_Gain_m > -16384.0F)
    {
        rtb_TmpSignalConversionAtVeHM_c = rtb_Gain_m;
    }
    else
    {
        rtb_TmpSignalConversionAtVeHM_c = -16384.0F;
    }

    /* End of Switch: '<S207>/Switch' */
    /* End of Outputs for SubSystem: '<S179>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S181>/Limiter1' */
    /* Switch: '<S209>/Switch1' incorporates:
     *  Constant: '<S181>/Constant Value1'
     *  RelationalOperator: '<S209>/Relational Operator'
     */
    if (511.875F < rtb_TmpSignalConversionAtVeS_hx)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 511.875F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeS_hx;
    }

    /* End of Switch: '<S209>/Switch1' */

    /* Switch: '<S209>/Switch' incorporates:
     *  Constant: '<S181>/Constant Value2'
     *  RelationalOperator: '<S209>/Relational Operator1'
     */
    if (rtb_Gain_m > -512.0F)
    {
        rtb_TmpSignalConversionAtVePLTR = rtb_Gain_m;
    }
    else
    {
        rtb_TmpSignalConversionAtVePLTR = -512.0F;
    }

    /* End of Switch: '<S209>/Switch' */
    /* End of Outputs for SubSystem: '<S181>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S182>/Limiter1' */
    /* Switch: '<S210>/Switch1' incorporates:
     *  Constant: '<S182>/Constant Value1'
     *  RelationalOperator: '<S210>/Relational Operator'
     */
    if (511.875F < rtb_TmpSignalConversionAtVeSR_j)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 511.875F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeSR_j;
    }

    /* End of Switch: '<S210>/Switch1' */
    /* End of Outputs for SubSystem: '<S182>/Limiter1' */

    /* BusCreator: '<S5>/BusINVTARGET1_2_FD5' incorporates:
     *  Constant: '<S170>/Constant Value'
     *  Constant: '<S171>/Constant Value'
     *  Constant: '<S178>/Constant Value'
     *  Constant: '<S179>/Constant Value'
     *  Constant: '<S180>/Constant Value'
     *  Constant: '<S181>/Constant Value'
     *  Constant: '<S189>/Constant Value'
     *  Constant: '<S191>/Constant Value'
     *  Constant: '<S192>/Constant Value'
     *  Constant: '<S5>/Const66'
     *  Constant: '<S5>/Const67'
     *  Constant: '<S5>/Const68'
     *  Constant: '<S5>/Const69'
     *  Constant: '<S5>/Const70'
     *  DataTypeConversion: '<S168>/Data Type Conversion'
     *  DataTypeConversion: '<S169>/Data Type Conversion'
     *  DataTypeConversion: '<S16>/Data Type Conversion25'
     *  DataTypeConversion: '<S16>/Data Type Conversion26'
     *  DataTypeConversion: '<S170>/Data Type Conversion'
     *  DataTypeConversion: '<S171>/Data Type Conversion'
     *  DataTypeConversion: '<S178>/Data Type Conversion'
     *  DataTypeConversion: '<S179>/Data Type Conversion'
     *  DataTypeConversion: '<S180>/Data Type Conversion'
     *  DataTypeConversion: '<S181>/Data Type Conversion'
     *  DataTypeConversion: '<S189>/Data Type Conversion'
     *  DataTypeConversion: '<S190>/Data Type Conversion'
     *  DataTypeConversion: '<S191>/Data Type Conversion'
     *  DataTypeConversion: '<S192>/Data Type Conversion'
     *  DataTypeConversion: '<S193>/Data Type Conversion'
     *  DataTypeConversion: '<S194>/Data Type Conversion'
     *  DataTypeConversion: '<S195>/Data Type Conversion'
     *  Gain: '<S168>/Gain'
     *  Gain: '<S169>/Gain'
     *  Gain: '<S170>/Gain'
     *  Gain: '<S171>/Gain'
     *  Gain: '<S178>/Gain'
     *  Gain: '<S179>/Gain'
     *  Gain: '<S180>/Gain'
     *  Gain: '<S181>/Gain'
     *  Gain: '<S189>/Gain'
     *  Gain: '<S190>/Gain'
     *  Gain: '<S191>/Gain'
     *  Gain: '<S192>/Gain'
     *  Gain: '<S193>/Gain'
     *  Gain: '<S194>/Gain'
     *  Gain: '<S195>/Gain'
     *  SignalConversion generated from: '<S2>/VeSRMR_e_MtrA_MdCmnd'
     *  SignalConversion generated from: '<S2>/VeSRMR_e_MtrB_MdCmnd'
     *  Sum: '<S170>/Sum'
     *  Sum: '<S171>/Sum'
     *  Sum: '<S178>/Sum'
     *  Sum: '<S179>/Sum'
     *  Sum: '<S180>/Sum'
     *  Sum: '<S181>/Sum'
     *  Sum: '<S189>/Sum'
     *  Sum: '<S191>/Sum'
     *  Sum: '<S192>/Sum'
     */
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD5.E_AEMD_Cutoff_FreqHigh_MCPA_2 = (uint8)
        ((sint32)fmodf(floorf(10.0F * rtb_TmpSignalConversionAtVeHTDR), 256.0F));
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD5.E_AEMD_Cutoff_FreqHigh_MCPB_2 = (uint8)
        ((sint32)fmodf(floorf(10.0F * rtb_TmpSignalConversionAtVeHT_g), 256.0F));
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD5.E_AEMD_Cutoff_FreqLow_MCPA_2 = (uint8)
        ((sint32)fmodf(floorf(10.0F * (rtb_Gain_iu - 4.5F)), 256.0F));
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD5.E_AEMD_Cutoff_FreqLow_MCPB_2 = (uint8)
        ((sint32)fmodf(floorf(10.0F * (rtb_Gain_iu_0 - 4.5F)), 256.0F));
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD5.E_AEMD_MaxOffset_MCPB_2 = (uint16)
        ((sint32)fmodf(floorf(8.0F * rtb_TmpSignalConversionAtVeHT_d), 65536.0F));
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD5.E_AEMD_MinOffset_MCPA_2 = (uint16)
        ((sint32)fmodf(floorf(8.0F * (rtb_TmpSignalConversionAtVeWTAR -
            -511.875F)), 65536.0F));
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD5.E_AEMD_MinOffset_MCPB_2 = (uint16)
        ((sint32)fmodf(floorf(8.0F * (rtb_TmpSignalConversionAtVeWT_h -
            -511.875F)), 65536.0F));
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD5.E_AEMD_Sclr_Gn_MCPA_2 = (uint16)((sint32)
        fmodf(floorf(100.0F * rtb_TmpSignalConversionAtVeHT_a), 65536.0F));
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD5.E_AEMD_Sclr_Gn_MCPB_2 = (uint16)((sint32)
        fmodf(floorf(100.0F * rtb_TmpSignalConversionAtVeH_ha), 65536.0F));
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD5.E_AEMD_Torque_BoostVolt_Margin = (uint16)
        ((sint32)fmodf(floorf(8.0F * rtb_TmpSignalConversionAtVeH_ar), 65536.0F));
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD5.E_Boost_Torque_Margin_MCPA = (uint16)
        ((sint32)fmodf(floorf(2.0F * (rtb_TmpSignalConversionAtVeS_al - -256.0F)),
                       65536.0F));
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD5.E_Boost_Torque_Margin_MCPB = (uint16)
        ((sint32)fmodf(floorf(2.0F * (rtb_TmpSignalConversionAtVeHM_f - -256.0F)),
                       65536.0F));
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD5.E_CRC_INVTARGET1_2 = 0U;
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD5.E_Cntr_INVTARGET1_2 = 0U;
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD5.E_EVCU_END_Request_Flag_2 =
        rtb_TmpSignalConversionAtVeAPMR;
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD5.E_HVBatVlt_V_2 = false;
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD5.E_LgsDiagCldStrtCndFltPr_MCPB_2 = false;
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD5.E_LgsDiagCldStrtCndMet_MCPB_2 = false;
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD5.E_MAC_INVTARGET1_2 = 0ULL;
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD5.E_MaxTorque_Limit_MCPA_2 = 16382U;
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD5.E_MaxTorque_Limit_MCPB_2 = 16382U;
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD5.E_MessageCounter_INVTARGET1_2 = 0U;
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD5.E_MinTorque_Limit_MCPA_2 = 0U;
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD5.E_MinTorque_Limit_MCPB_2 = 0U;
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD5.E_ModeCommand_MCPA_2 = (uint8)
        rtb_TmpSignalConversionAtVeS_go;
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD5.E_ModeCommand_MCPB_2 = (uint8)
        rtb_TmpSignalConversionAtVeSR_a;
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD5.E_Mtr_6SO_Request_MCPA_2 =
        rtb_TmpSignalConversionAtVeHT_k;
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD5.E_Mtr_6SO_Request_MCPB_2 =
        rtb_TmpSignalConversionAtVeHT_f;
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD5.E_SpdGrdtLim_MCPA_2 = 0U;
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD5.E_SpdGrdtLim_MCPB_2 = 0U;
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD5.E_TargetMotorRPM_MCPA_2 = (uint16)
        ((sint32)fmodf(floorf(2.0F * (rtb_TmpSignalConversionAtVeHM_i -
            -16384.0F)), 65536.0F));
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD5.E_TargetMotorRPM_MCPB_2 = (uint16)
        ((sint32)fmodf(floorf(2.0F * (rtb_TmpSignalConversionAtVeHM_c -
            -16384.0F)), 65536.0F));
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD5.E_TorqueCommand_MCPA_2 = (uint16)
        ((sint32)fmodf(floorf(8.0F * (rtb_TmpSignalConversionAtVePLTR - -512.0F)),
                       65536.0F));

    /* Outputs for Atomic SubSystem: '<S182>/Limiter1' */
    /* Switch: '<S210>/Switch' incorporates:
     *  Constant: '<S182>/Constant Value2'
     *  RelationalOperator: '<S210>/Relational Operator1'
     */
    if (rtb_Gain_m <= -512.0F)
    {
        rtb_Gain_m = -512.0F;
    }

    /* End of Switch: '<S210>/Switch' */
    /* End of Outputs for SubSystem: '<S182>/Limiter1' */

    /* BusCreator: '<S5>/BusINVTARGET1_2_FD5' incorporates:
     *  Constant: '<S182>/Constant Value'
     *  DataTypeConversion: '<S182>/Data Type Conversion'
     *  Gain: '<S182>/Gain'
     *  Sum: '<S182>/Sum'
     */
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD5.E_TorqueCommand_MCPB_2 = (uint16)
        ((sint32)fmodf(floorf((rtb_Gain_m - -512.0F) * 8.0F), 65536.0F));
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD5.E_TqGrdtLim_MCPA_2 = 0U;
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD5.E_TqGrdtLim_MCPB_2 = 0U;
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD5.E_UDCMax_Unlim_MCPA_2 = 0U;
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD5.E_UDCMax_Unlim_MCPB_2 = 0U;
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD5.E_UDCMin_Unlim_MCPA_2 = 0U;
    ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD5.E_UDCMin_Unlim_MCPB_2 = 0U;

    /* Outputs for Atomic SubSystem: '<S254>/Limiter1' */
    /* Switch: '<S263>/Switch1' incorporates:
     *  Constant: '<S254>/Constant Value1'
     *  RelationalOperator: '<S263>/Relational Operator'
     */
    if (24.8F < rtb_TmpSignalConversionAtVeGENR)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 24.8F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeGENR;
    }

    /* End of Switch: '<S263>/Switch1' */

    /* Switch: '<S263>/Switch' incorporates:
     *  Constant: '<S254>/Constant Value2'
     *  RelationalOperator: '<S263>/Relational Operator1'
     */
    if (rtb_Gain_m > 0.0F)
    {
        /* Sum: '<S254>/Sum' */
        rtb_TmpSignalConversionAtVeSR_j = rtb_Gain_m;
    }
    else
    {
        /* Sum: '<S254>/Sum' */
        rtb_TmpSignalConversionAtVeSR_j = 0.0F;
    }

    /* End of Switch: '<S263>/Switch' */
    /* End of Outputs for SubSystem: '<S254>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S255>/Limiter1' */
    /* Switch: '<S264>/Switch1' incorporates:
     *  Constant: '<S255>/Constant Value1'
     *  RelationalOperator: '<S264>/Relational Operator'
     */
    if (20.4F < rtb_TmpSignalConversionAtVeGE_h)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 20.4F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeGE_h;
    }

    /* End of Switch: '<S264>/Switch1' */
    /* End of Outputs for SubSystem: '<S255>/Limiter1' */

    /* Switch: '<S19>/switch' incorporates:
     *  Constant: '<S256>/Constant Value1'
     *  RelationalOperator: '<S265>/Relational Operator'
     *  Switch: '<S265>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeGE_c)
    {
        /* BusCreator: '<S5>/BusPT_ENERGY_FD_1_FD11' incorporates:
         *  Constant: '<S19>/Constant'
         *  Switch: '<S20>/switch'
         */
        ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD11.E_APM_LV_VsetPoint_PT = 2047U;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S256>/Limiter1' */
        if (20.46F < rtb_TmpSignalConversionAtVeGE_a)
        {
            /* Switch: '<S265>/Switch1' incorporates:
             *  Constant: '<S256>/Constant Value1'
             *  Gain: '<S256>/Gain'
             */
            rtb_TmpSignalConversionAtVeS_hx = 20.46F;
        }
        else
        {
            /* Gain: '<S256>/Gain' incorporates:
             *  Switch: '<S265>/Switch1'
             */
            rtb_TmpSignalConversionAtVeS_hx = rtb_TmpSignalConversionAtVeGE_a;
        }

        /* Switch: '<S265>/Switch' incorporates:
         *  Constant: '<S256>/Constant Value2'
         *  RelationalOperator: '<S265>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeS_hx <= 0.0F)
        {
            rtb_TmpSignalConversionAtVeS_hx = 0.0F;
        }

        /* End of Switch: '<S265>/Switch' */
        /* End of Outputs for SubSystem: '<S256>/Limiter1' */

        /* BusCreator: '<S5>/BusPT_ENERGY_FD_1_FD11' incorporates:
         *  DataTypeConversion: '<S256>/Data Type Conversion'
         *  Gain: '<S256>/Gain'
         *  Switch: '<S20>/switch'
         */
        ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD11.E_APM_LV_VsetPoint_PT = (uint16)
            ((sint32)fmodf(floorf(100.0F * rtb_TmpSignalConversionAtVeS_hx),
                           65536.0F));
    }

    /* End of Switch: '<S19>/switch' */

    /* BusCreator: '<S5>/BusPT_ENERGY_FD_1_FD11' incorporates:
     *  DataTypeConversion: '<S254>/Data Type Conversion'
     *  Gain: '<S254>/Gain'
     */
    ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD11.E_APM_HV_IMax_PT = (uint8)((sint32)
        fmodf(floorf(1.25F * rtb_TmpSignalConversionAtVeSR_j), 256.0F));

    /* DataTypeConversion: '<S19>/Data Type Conversion2' incorporates:
     *  DataTypeConversion: '<S20>/Data Type Conversion2'
     */
    rtb_Gain_iu = fmodf(floorf(rtb_TmpSignalConversionAtVeGE_f), 65536.0F);

    /* BusCreator: '<S5>/BusPT_ENERGY_FD_1_FD11' incorporates:
     *  DataTypeConversion: '<S19>/Data Type Conversion2'
     */
    ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD11.E_APM_LV_IMax_PT = (uint16)((sint32)
        ((rtb_Gain_iu < 0.0F) ? ((sint32)((uint16)((sint32)(-((sint32)((sint16)
        ((uint16)((float32)(-rtb_Gain_iu))))))))) : ((sint32)((uint16)
        rtb_Gain_iu))));

    /* Outputs for Atomic SubSystem: '<S255>/Limiter1' */
    /* Switch: '<S264>/Switch' incorporates:
     *  Constant: '<S255>/Constant Value2'
     *  RelationalOperator: '<S264>/Relational Operator1'
     */
    if (rtb_Gain_m <= 0.0F)
    {
        rtb_Gain_m = 0.0F;
    }

    /* End of Switch: '<S264>/Switch' */
    /* End of Outputs for SubSystem: '<S255>/Limiter1' */

    /* BusCreator: '<S5>/BusPT_ENERGY_FD_1_FD11' incorporates:
     *  DataTypeConversion: '<S19>/Data Type Conversion5'
     *  DataTypeConversion: '<S19>/Data Type Conversion6'
     *  DataTypeConversion: '<S255>/Data Type Conversion'
     *  Gain: '<S255>/Gain'
     *  SignalConversion generated from: '<S2>/VeGENR_e_stModeReq'
     *  SignalConversion generated from: '<S2>/VeOBCR_e_DC_CntctrCmd'
     */
    ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD11.E_APM_LV_VActual_PT = (uint16)
        ((sint32)fmodf(floorf(25.0F * rtb_Gain_m), 65536.0F));
    ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD11.E_APM_TypeCtrl_PT = (uint8)
        rtb_TmpSignalConversionAtVeGE_n;
    ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD11.E_BMS_HV_Char_Main_Contac_Cmd_PT =
        (uint8)rtb_TmpSignalConversionAtVeOB_g;
    ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD11.E_BMS_HV_DC_Chrgng_Cntct_K_Cmd_PT =
        (uint8)rtb_TmpSignalConversionAtVeOB_g;
    ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD11.E_BMS_HV_GFD_Inhibition_PT =
        rtb_TmpSignalConversionAtVeOBCR;

    /* DataTypeConversion: '<S19>/Data Type Conversion9' incorporates:
     *  DataTypeConversion: '<S20>/Data Type Conversion9'
     */
    rtb_TmpSignalConversionAtVeHM_k = fmodf(floorf
        (rtb_TmpSignalConversionAtVeHVTR), 65536.0F);

    /* BusCreator: '<S5>/BusPT_ENERGY_FD_1_FD11' incorporates:
     *  Constant: '<S5>/Const45'
     *  Constant: '<S5>/Const47'
     *  DataTypeConversion: '<S19>/Data Type Conversion11'
     *  DataTypeConversion: '<S19>/Data Type Conversion9'
     */
    ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD11.E_BMS_HV_RefTracHVBus_V_PT = (uint16)
        ((sint32)((rtb_TmpSignalConversionAtVeHM_k < 0.0F) ? ((sint32)((uint16)
            ((sint32)(-((sint32)((sint16)((uint16)((float32)
                  (-rtb_TmpSignalConversionAtVeHM_k))))))))) : ((sint32)((uint16)
            rtb_TmpSignalConversionAtVeHM_k))));
    ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD11.E_BMS_HV_RefTracHVBus_V_Vldty_PT =
        rtb_TmpSignalConversionAtVeHV_b;
    ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD11.E_BMS_HV_TracCntctr_Cmd_PT = (uint8)
        rtb_TmpSignalConversionAtVeS_dp;
    ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD11.E_BPCM_OBCM_AC_ContactorCmd_PT = 0U;
    ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD11.E_BatteryVoltage_Raw_PT = 0U;
    ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD11.E_CRC_PT_ENERGY_FD_1 = 0U;
    ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD11.E_DCChargeEnRq_PT = false;
    ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD11.E_DCChargeInitialized_PT =
        rtb_TmpSignalConversionAtVeOB_d;
    ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD11.E_DCChrgCurrentLimit_PT = 815U;
    ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD11.E_DCChrgCurrentRq_PT = 815U;
    ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD11.E_DCChrgPwrLim_PT = 815U;
    ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD11.E_DCChrgVoltMax_PT = 0U;
    ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD11.E_DCChrgVoltMin_PT = 0U;
    ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD11.E_MC_PT_ENERGY_FD_1 = 0U;

    /* Outputs for Atomic SubSystem: '<S272>/Limiter1' */
    /* Switch: '<S281>/Switch1' incorporates:
     *  Constant: '<S272>/Constant Value1'
     *  RelationalOperator: '<S281>/Relational Operator'
     */
    if (24.8F < rtb_TmpSignalConversionAtVeGENR)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 24.8F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeGENR;
    }

    /* End of Switch: '<S281>/Switch1' */

    /* Switch: '<S281>/Switch' incorporates:
     *  Constant: '<S272>/Constant Value2'
     *  RelationalOperator: '<S281>/Relational Operator1'
     */
    if (rtb_Gain_m > 0.0F)
    {
        /* Sum: '<S272>/Sum' */
        rtb_TmpSignalConversionAtVeGENR = rtb_Gain_m;
    }
    else
    {
        /* Sum: '<S272>/Sum' */
        rtb_TmpSignalConversionAtVeGENR = 0.0F;
    }

    /* End of Switch: '<S281>/Switch' */
    /* End of Outputs for SubSystem: '<S272>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S273>/Limiter1' */
    /* Switch: '<S282>/Switch1' incorporates:
     *  Constant: '<S273>/Constant Value1'
     *  RelationalOperator: '<S282>/Relational Operator'
     */
    if (20.4F < rtb_TmpSignalConversionAtVeGE_h)
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = 20.4F;
    }
    else
    {
        /* Gain: '<S273>/Gain' */
        rtb_Gain_m = rtb_TmpSignalConversionAtVeGE_h;
    }

    /* End of Switch: '<S282>/Switch1' */
    /* End of Outputs for SubSystem: '<S273>/Limiter1' */

    /* Switch: '<S20>/switch' incorporates:
     *  Constant: '<S274>/Constant Value1'
     *  RelationalOperator: '<S283>/Relational Operator'
     *  Switch: '<S283>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeGE_c)
    {
        /* BusCreator: '<S5>/BusPT_ENERGY_FD_1_FD5' incorporates:
         *  Constant: '<S20>/Constant'
         *  Switch: '<S20>/switch'
         */
        ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD5.E_APM_LV_VsetPoint_PT = 2047U;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S274>/Limiter1' */
        if (20.46F < rtb_TmpSignalConversionAtVeGE_a)
        {
            /* Switch: '<S283>/Switch1' incorporates:
             *  Constant: '<S274>/Constant Value1'
             *  Gain: '<S274>/Gain'
             */
            rtb_TmpSignalConversionAtVeGE_h = 20.46F;
        }
        else
        {
            /* Gain: '<S274>/Gain' incorporates:
             *  Switch: '<S283>/Switch1'
             */
            rtb_TmpSignalConversionAtVeGE_h = rtb_TmpSignalConversionAtVeGE_a;
        }

        /* Switch: '<S283>/Switch' incorporates:
         *  Constant: '<S274>/Constant Value2'
         *  RelationalOperator: '<S283>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeGE_h <= 0.0F)
        {
            rtb_TmpSignalConversionAtVeGE_h = 0.0F;
        }

        /* End of Switch: '<S283>/Switch' */
        /* End of Outputs for SubSystem: '<S274>/Limiter1' */

        /* BusCreator: '<S5>/BusPT_ENERGY_FD_1_FD5' incorporates:
         *  DataTypeConversion: '<S274>/Data Type Conversion'
         *  Gain: '<S274>/Gain'
         *  Switch: '<S20>/switch'
         */
        ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD5.E_APM_LV_VsetPoint_PT = (uint16)
            ((sint32)fmodf(floorf(100.0F * rtb_TmpSignalConversionAtVeGE_h),
                           65536.0F));
    }

    /* End of Switch: '<S20>/switch' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen1' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSRMR_e_VldtdTransShiftRngSt' */
    (void)Rte_Read_VeSRMR_e_VldtdTransShiftRngSt_Value(&tmpRead_t);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/ST2B_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/SigMngt'
     */
    /* BusCreator: '<S5>/BusPT_ENERGY_FD_1_FD5' incorporates:
     *  DataTypeConversion: '<S20>/Data Type Conversion2'
     *  DataTypeConversion: '<S272>/Data Type Conversion'
     *  Gain: '<S272>/Gain'
     */
    ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD5.E_APM_HV_IMax_PT = (uint8)((sint32)
        fmodf(floorf(1.25F * rtb_TmpSignalConversionAtVeGENR), 256.0F));
    ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD5.E_APM_LV_IMax_PT = (uint16)((sint32)
        ((rtb_Gain_iu < 0.0F) ? ((sint32)((uint16)((sint32)(-((sint32)((sint16)
        ((uint16)((float32)(-rtb_Gain_iu))))))))) : ((sint32)((uint16)
        rtb_Gain_iu))));

    /* Outputs for Atomic SubSystem: '<S273>/Limiter1' */
    /* Switch: '<S282>/Switch' incorporates:
     *  Constant: '<S273>/Constant Value2'
     *  RelationalOperator: '<S282>/Relational Operator1'
     */
    if (rtb_Gain_m <= 0.0F)
    {
        rtb_Gain_m = 0.0F;
    }

    /* End of Switch: '<S282>/Switch' */
    /* End of Outputs for SubSystem: '<S273>/Limiter1' */

    /* BusCreator: '<S5>/BusPT_ENERGY_FD_1_FD5' incorporates:
     *  Constant: '<S5>/Const106'
     *  Constant: '<S5>/Const108'
     *  DataTypeConversion: '<S19>/Data Type Conversion5'
     *  DataTypeConversion: '<S19>/Data Type Conversion6'
     *  DataTypeConversion: '<S20>/Data Type Conversion11'
     *  DataTypeConversion: '<S20>/Data Type Conversion9'
     *  DataTypeConversion: '<S273>/Data Type Conversion'
     *  Gain: '<S273>/Gain'
     *  SignalConversion generated from: '<S2>/VeGENR_e_stModeReq'
     *  SignalConversion generated from: '<S2>/VeOBCR_e_DC_CntctrCmd'
     */
    ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD5.E_APM_LV_VActual_PT = (uint16)((sint32)
        fmodf(floorf(25.0F * rtb_Gain_m), 65536.0F));
    ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD5.E_APM_TypeCtrl_PT = (uint8)
        rtb_TmpSignalConversionAtVeGE_n;
    ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD5.E_BMS_HV_Char_Main_Contac_Cmd_PT =
        (uint8)rtb_TmpSignalConversionAtVeOB_g;
    ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD5.E_BMS_HV_DC_Chrgng_Cntct_K_Cmd_PT =
        (uint8)rtb_TmpSignalConversionAtVeOB_g;
    ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD5.E_BMS_HV_GFD_Inhibition_PT =
        rtb_TmpSignalConversionAtVeOBCR;
    ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD5.E_BMS_HV_RefTracHVBus_V_PT = (uint16)
        ((sint32)((rtb_TmpSignalConversionAtVeHM_k < 0.0F) ? ((sint32)((uint16)
            ((sint32)(-((sint32)((sint16)((uint16)((float32)
                  (-rtb_TmpSignalConversionAtVeHM_k))))))))) : ((sint32)((uint16)
            rtb_TmpSignalConversionAtVeHM_k))));
    ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD5.E_BMS_HV_RefTracHVBus_V_Vldty_PT =
        rtb_TmpSignalConversionAtVeHV_b;
    ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD5.E_BMS_HV_TracCntctr_Cmd_PT = (uint8)
        rtb_TmpSignalConversionAtVeS_dp;
    ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD5.E_BPCM_OBCM_AC_ContactorCmd_PT = 0U;
    ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD5.E_BatteryVoltage_Raw_PT = 0U;
    ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD5.E_CRC_PT_ENERGY_FD_1 = 0U;
    ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD5.E_DCChargeEnRq_PT = false;
    ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD5.E_DCChargeInitialized_PT =
        rtb_TmpSignalConversionAtVeOB_d;
    ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD5.E_DCChrgCurrentLimit_PT = 815U;
    ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD5.E_DCChrgCurrentRq_PT = 815U;
    ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD5.E_DCChrgPwrLim_PT = 815U;
    ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD5.E_DCChrgVoltMax_PT = 0U;
    ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD5.E_DCChrgVoltMin_PT = 0U;
    ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD5.E_MC_PT_ENERGY_FD_1 = 0U;

    /* BusCreator: '<S5>/BusINVTARGET_PROPULSION1_FD5' incorporates:
     *  Constant: '<S5>/Const100'
     *  Constant: '<S5>/Const93'
     *  Constant: '<S5>/Const95'
     *  Constant: '<S5>/Const96'
     *  Constant: '<S5>/Const97'
     *  Constant: '<S5>/Const98'
     *  Constant: '<S5>/Const99'
     *  DataTypeConversion: '<S18>/Data Type Conversion21'
     *  Inport: '<Root>/VeSRMR_e_VldtdTransShiftRngSt'
     */
    ST2B_BLUEN_ac_B.BusINVTARGET_PROPULSION1_FD5.E_AEMD_Cutoff_FreqHigh_MCPA_P =
        0U;
    ST2B_BLUEN_ac_B.BusINVTARGET_PROPULSION1_FD5.E_AEMD_Cutoff_FreqHigh_MCPB_P =
        0U;
    ST2B_BLUEN_ac_B.BusINVTARGET_PROPULSION1_FD5.E_AEMD_Cutoff_FreqLow_MCPA_P =
        0U;
    ST2B_BLUEN_ac_B.BusINVTARGET_PROPULSION1_FD5.E_AEMD_Cutoff_FreqLow_MCPB_P =
        0U;
    ST2B_BLUEN_ac_B.BusINVTARGET_PROPULSION1_FD5.E_AEMD_MaxOffset_MCPA_P = 8184U;
    ST2B_BLUEN_ac_B.BusINVTARGET_PROPULSION1_FD5.E_AEMD_MaxOffset_MCPB_P = 8184U;
    ST2B_BLUEN_ac_B.BusINVTARGET_PROPULSION1_FD5.E_AEMD_MinOffset_MCPA_P = 8184U;
    ST2B_BLUEN_ac_B.BusINVTARGET_PROPULSION1_FD5.E_AEMD_MinOffset_MCPB_P = 8184U;
    ST2B_BLUEN_ac_B.BusINVTARGET_PROPULSION1_FD5.E_AEMD_Sclr_Gn_MCPA_P = 0U;
    ST2B_BLUEN_ac_B.BusINVTARGET_PROPULSION1_FD5.E_AEMD_Sclr_Gn_MCPB_P = 0U;
    ST2B_BLUEN_ac_B.BusINVTARGET_PROPULSION1_FD5.E_BPCM_HV_Trac_Main_Contac_Sts_P
        = 0U;
    ST2B_BLUEN_ac_B.BusINVTARGET_PROPULSION1_FD5.E_BPCM_HV_TractionBusVoltage_P =
        0U;
    ST2B_BLUEN_ac_B.BusINVTARGET_PROPULSION1_FD5.E_CRC_INVTARGET_PROPULSION1 =
        0U;
    ST2B_BLUEN_ac_B.BusINVTARGET_PROPULSION1_FD5.E_CmdIgnSts_P = 0U;
    ST2B_BLUEN_ac_B.BusINVTARGET_PROPULSION1_FD5.E_MC_INVTARGET_PROPULSION1 = 0U;
    ST2B_BLUEN_ac_B.BusINVTARGET_PROPULSION1_FD5.E_ModeCommand_MCPA_P = 0U;
    ST2B_BLUEN_ac_B.BusINVTARGET_PROPULSION1_FD5.E_ModeCommand_MCPB_P = 0U;
    ST2B_BLUEN_ac_B.BusINVTARGET_PROPULSION1_FD5.E_Mtr_6SO_Request_MCPA_P =
        false;
    ST2B_BLUEN_ac_B.BusINVTARGET_PROPULSION1_FD5.E_Mtr_6SO_Request_MCPB_P =
        false;
    ST2B_BLUEN_ac_B.BusINVTARGET_PROPULSION1_FD5.E_ParkCmd_PT_P = 0U;
    ST2B_BLUEN_ac_B.BusINVTARGET_PROPULSION1_FD5.E_ShiftLeverPosition_P = (uint8)
        tmpRead_t;
    ST2B_BLUEN_ac_B.BusINVTARGET_PROPULSION1_FD5.E_TargetMotorRPM_MCPA_P =
        32768U;
    ST2B_BLUEN_ac_B.BusINVTARGET_PROPULSION1_FD5.E_TargetMotorRPM_MCPB_P =
        32768U;
    ST2B_BLUEN_ac_B.BusINVTARGET_PROPULSION1_FD5.E_TorqueCommand_MCPA_P = 8184U;
    ST2B_BLUEN_ac_B.BusINVTARGET_PROPULSION1_FD5.E_TorqueCommand_MCPB_P = 8184U;
    ST2B_BLUEN_ac_B.BusINVTARGET_PROPULSION1_FD5.E_VehicleSpeedVSOSig_P = 0U;

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen1' */

    /* Outputs for Atomic SubSystem: '<S2>/ST2B_BLUEN_FastTEF_StopCheckpoint' */
    /* FunctionCaller: '<S4>/ST2B_BLUEN_FastTEF_StopCheckpoint' */
    Rte_Call_ST2B_BLUEN_FastTEF_StopCheckpoint_CheckpointReached();

    /* End of Outputs for SubSystem: '<S2>/ST2B_BLUEN_FastTEF_StopCheckpoint' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Outport: '<Root>/VeST2B_h_COMTX_AXLE_TORQUE_FD_1_FD3_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_AXLE_TORQUE_FD_1_FD3_Pkt_COMTX_AXLE_TORQUE_FD_1_FD3_Pkt
        (&ST2B_BLUEN_ac_B.BusAXLE_TORQUE_FD_1_FD3);

    /* Outport: '<Root>/VeST2B_h_COMTX_HYBRID_DISPLAY_FD3_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_HYBRID_DISPLAY_FD3_Pkt_COMTX_HYBRID_DISPLAY_FD3_Pkt
        (&ST2B_BLUEN_ac_B.BusHYBRID_DISPLAY_FD3);

    /* Outport: '<Root>/VeST2B_h_COMTX_HYBRID_POWERTRAIN1_FD3_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_HYBRID_POWERTRAIN1_FD3_Pkt_COMTX_HYBRID_POWERTRAIN1_FD3_Pkt
        (&ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN1_FD3);

    /* Outport: '<Root>/VeST2B_h_COMTX_HYBRID_POWERTRAIN5_FD3_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_HYBRID_POWERTRAIN5_FD3_Pkt_COMTX_HYBRID_POWERTRAIN5_FD3_Pkt
        (&ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN5_FD3);

    /* Outport: '<Root>/VeST2B_h_COMTX_PT_SYSTEM_FD_1_FD3_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_PT_SYSTEM_FD_1_FD3_Pkt_COMTX_PT_SYSTEM_FD_1_FD3_Pkt
        (&ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3);

    /* Outport: '<Root>/VeST2B_h_COMTX_PT_TORQUE_FD_1_FD3_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_PT_TORQUE_FD_1_FD3_Pkt_COMTX_PT_TORQUE_FD_1_FD3_Pkt
        (&ST2B_BLUEN_ac_B.BusPT_TORQUE_FD_1_FD3);

    /* Outport: '<Root>/VeST2B_h_COMTX_VDCM_HMI_FD3_Pkt' */
    (void)Rte_Write_VeST2B_h_COMTX_VDCM_HMI_FD3_Pkt_COMTX_VDCM_HMI_FD3_Pkt
        (&ST2B_BLUEN_ac_B.BusVDCM_HMI_FD3);

    /* Outport: '<Root>/VeST2B_h_COMTX_HYBRID_POWERTRAIN1_FD11_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_HYBRID_POWERTRAIN1_FD11_Pkt_COMTX_HYBRID_POWERTRAIN1_FD11_Pkt
        (&ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN1_FD11);

    /* Outport: '<Root>/VeST2B_h_COMTX_HYBRID_POWERTRAIN2_FD11_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_HYBRID_POWERTRAIN2_FD11_Pkt_COMTX_HYBRID_POWERTRAIN2_FD11_Pkt
        (&ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN2_FD11);

    /* Outport: '<Root>/VeST2B_h_COMTX_HYBRID_POWERTRAIN5_FD11_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_HYBRID_POWERTRAIN5_FD11_Pkt_COMTX_HYBRID_POWERTRAIN5_FD11_Pkt
        (&ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN5_FD11);

    /* Outport: '<Root>/VeST2B_h_COMTX_IMPACT_INFO_FD11_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_IMPACT_INFO_FD11_Pkt_COMTX_IMPACT_INFO_FD11_Pkt
        (&ST2B_BLUEN_ac_B.BusIMPACT_INFO_FD11);

    /* Outport: '<Root>/VeST2B_h_COMTX_INVTARGET1_2_FD11_Pkt' incorporates:
     *  BusCreator: '<S5>/BusINVTARGET1_2_FD11'
     */
    (void)
        Rte_Write_VeST2B_h_COMTX_INVTARGET1_2_FD11_Pkt_COMTX_INVTARGET1_2_FD11_Pkt
        (&ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD11);

    /* Outport: '<Root>/VeST2B_h_COMTX_PT_ENERGY_FD_1_FD11_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_PT_ENERGY_FD_1_FD11_Pkt_COMTX_PT_ENERGY_FD_1_FD11_Pkt
        (&ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD11);

    /* Outport: '<Root>/VeST2B_h_COMTX_PT_SYSTEM_FD_1_FD11_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_PT_SYSTEM_FD_1_FD11_Pkt_COMTX_PT_SYSTEM_FD_1_FD11_Pkt
        (&ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD11);

    /* Outport: '<Root>/VeST2B_h_COMTX_PT_SYSTEM_FD_4_FD11_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_PT_SYSTEM_FD_4_FD11_Pkt_COMTX_PT_SYSTEM_FD_4_FD11_Pkt
        (&ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD11);

    /* Outport: '<Root>/VeST2B_h_COMTX_AXLE_TORQUE_FD_1_FD14_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_AXLE_TORQUE_FD_1_FD14_Pkt_COMTX_AXLE_TORQUE_FD_1_FD14_Pkt
        (&ST2B_BLUEN_ac_B.BusAXLE_TORQUE_FD_1_FD14);

    /* Outport: '<Root>/VeST2B_h_COMTX_PT_SYSTEM_FD_1_FD14_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_PT_SYSTEM_FD_1_FD14_Pkt_COMTX_PT_SYSTEM_FD_1_FD14_Pkt
        (&ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD14);

    /* Outport: '<Root>/VeST2B_h_COMTX_PT_TORQUE_FD_1_FD14_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_PT_TORQUE_FD_1_FD14_Pkt_COMTX_PT_TORQUE_FD_1_FD14_Pkt
        (&ST2B_BLUEN_ac_B.BusPT_TORQUE_FD_1_FD14);

    /* Outport: '<Root>/VeST2B_h_COMTX_HYBRID_POWERTRAIN1_FD5_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_HYBRID_POWERTRAIN1_FD5_Pkt_COMTX_HYBRID_POWERTRAIN1_FD5_Pkt
        (&ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN1_FD5);

    /* Outport: '<Root>/VeST2B_h_COMTX_INVTARGET1_2_FD5_Pkt' incorporates:
     *  BusCreator: '<S5>/BusINVTARGET1_2_FD5'
     */
    (void)
        Rte_Write_VeST2B_h_COMTX_INVTARGET1_2_FD5_Pkt_COMTX_INVTARGET1_2_FD5_Pkt
        (&ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD5);

    /* Outport: '<Root>/VeST2B_h_COMTX_INVTARGET_PROPULSION1_FD5_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_INVTARGET_PROPULSION1_FD5_Pkt_COMTX_INVTARGET_PROPULSION1_FD5_Pkt
        (&ST2B_BLUEN_ac_B.BusINVTARGET_PROPULSION1_FD5);

    /* Outport: '<Root>/VeST2B_h_COMTX_PT_ENERGY_FD_1_FD5_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_PT_ENERGY_FD_1_FD5_Pkt_COMTX_PT_ENERGY_FD_1_FD5_Pkt
        (&ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD5);

    /* Outport: '<Root>/VeST2B_h_COMTX_PT_SYSTEM_FD_1_FD5_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_PT_SYSTEM_FD_1_FD5_Pkt_COMTX_PT_SYSTEM_FD_1_FD5_Pkt
        (&ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD5);

    /* Outport: '<Root>/VeST2B_h_COMTX_PT_SYSTEM_FD_4_FD5_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_PT_SYSTEM_FD_4_FD5_Pkt_COMTX_PT_SYSTEM_FD_4_FD5_Pkt
        (&ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD5);
}

/* Model initialize function */
FUNC(void, ST2B_BLUEN_CODE) ST2B_BLUEN_ac_Init(void)
{
    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_AXLE_TORQUE_FD_1_FD3_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_AXLE_TORQUE_FD_1_FD3_Pkt_COMTX_AXLE_TORQUE_FD_1_FD3_Pkt
        (&ST2B_BLUEN_ac_B.BusAXLE_TORQUE_FD_1_FD3);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_HYBRID_DISPLAY_FD3_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_HYBRID_DISPLAY_FD3_Pkt_COMTX_HYBRID_DISPLAY_FD3_Pkt
        (&ST2B_BLUEN_ac_B.BusHYBRID_DISPLAY_FD3);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_HYBRID_POWERTRAIN1_FD3_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_HYBRID_POWERTRAIN1_FD3_Pkt_COMTX_HYBRID_POWERTRAIN1_FD3_Pkt
        (&ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN1_FD3);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_HYBRID_POWERTRAIN5_FD3_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_HYBRID_POWERTRAIN5_FD3_Pkt_COMTX_HYBRID_POWERTRAIN5_FD3_Pkt
        (&ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN5_FD3);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_PT_SYSTEM_FD_1_FD3_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_PT_SYSTEM_FD_1_FD3_Pkt_COMTX_PT_SYSTEM_FD_1_FD3_Pkt
        (&ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD3);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_PT_TORQUE_FD_1_FD3_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_PT_TORQUE_FD_1_FD3_Pkt_COMTX_PT_TORQUE_FD_1_FD3_Pkt
        (&ST2B_BLUEN_ac_B.BusPT_TORQUE_FD_1_FD3);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_VDCM_HMI_FD3_Pkt' */
    (void)Rte_Write_VeST2B_h_COMTX_VDCM_HMI_FD3_Pkt_COMTX_VDCM_HMI_FD3_Pkt
        (&ST2B_BLUEN_ac_B.BusVDCM_HMI_FD3);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_HYBRID_POWERTRAIN1_FD11_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_HYBRID_POWERTRAIN1_FD11_Pkt_COMTX_HYBRID_POWERTRAIN1_FD11_Pkt
        (&ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN1_FD11);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_HYBRID_POWERTRAIN2_FD11_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_HYBRID_POWERTRAIN2_FD11_Pkt_COMTX_HYBRID_POWERTRAIN2_FD11_Pkt
        (&ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN2_FD11);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_HYBRID_POWERTRAIN5_FD11_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_HYBRID_POWERTRAIN5_FD11_Pkt_COMTX_HYBRID_POWERTRAIN5_FD11_Pkt
        (&ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN5_FD11);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_IMPACT_INFO_FD11_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_IMPACT_INFO_FD11_Pkt_COMTX_IMPACT_INFO_FD11_Pkt
        (&ST2B_BLUEN_ac_B.BusIMPACT_INFO_FD11);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_INVTARGET1_2_FD11_Pkt' incorporates:
     *  BusCreator: '<S5>/BusINVTARGET1_2_FD11'
     */
    (void)
        Rte_Write_VeST2B_h_COMTX_INVTARGET1_2_FD11_Pkt_COMTX_INVTARGET1_2_FD11_Pkt
        (&ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD11);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_PT_ENERGY_FD_1_FD11_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_PT_ENERGY_FD_1_FD11_Pkt_COMTX_PT_ENERGY_FD_1_FD11_Pkt
        (&ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD11);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_PT_SYSTEM_FD_1_FD11_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_PT_SYSTEM_FD_1_FD11_Pkt_COMTX_PT_SYSTEM_FD_1_FD11_Pkt
        (&ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD11);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_PT_SYSTEM_FD_4_FD11_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_PT_SYSTEM_FD_4_FD11_Pkt_COMTX_PT_SYSTEM_FD_4_FD11_Pkt
        (&ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD11);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_AXLE_TORQUE_FD_1_FD14_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_AXLE_TORQUE_FD_1_FD14_Pkt_COMTX_AXLE_TORQUE_FD_1_FD14_Pkt
        (&ST2B_BLUEN_ac_B.BusAXLE_TORQUE_FD_1_FD14);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_PT_SYSTEM_FD_1_FD14_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_PT_SYSTEM_FD_1_FD14_Pkt_COMTX_PT_SYSTEM_FD_1_FD14_Pkt
        (&ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD14);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_PT_TORQUE_FD_1_FD14_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_PT_TORQUE_FD_1_FD14_Pkt_COMTX_PT_TORQUE_FD_1_FD14_Pkt
        (&ST2B_BLUEN_ac_B.BusPT_TORQUE_FD_1_FD14);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_HYBRID_POWERTRAIN1_FD5_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_HYBRID_POWERTRAIN1_FD5_Pkt_COMTX_HYBRID_POWERTRAIN1_FD5_Pkt
        (&ST2B_BLUEN_ac_B.BusHYBRID_POWERTRAIN1_FD5);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_INVTARGET1_2_FD5_Pkt' incorporates:
     *  BusCreator: '<S5>/BusINVTARGET1_2_FD5'
     */
    (void)
        Rte_Write_VeST2B_h_COMTX_INVTARGET1_2_FD5_Pkt_COMTX_INVTARGET1_2_FD5_Pkt
        (&ST2B_BLUEN_ac_B.BusINVTARGET1_2_FD5);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_INVTARGET_PROPULSION1_FD5_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_INVTARGET_PROPULSION1_FD5_Pkt_COMTX_INVTARGET_PROPULSION1_FD5_Pkt
        (&ST2B_BLUEN_ac_B.BusINVTARGET_PROPULSION1_FD5);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_PT_ENERGY_FD_1_FD5_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_PT_ENERGY_FD_1_FD5_Pkt_COMTX_PT_ENERGY_FD_1_FD5_Pkt
        (&ST2B_BLUEN_ac_B.BusPT_ENERGY_FD_1_FD5);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_PT_SYSTEM_FD_1_FD5_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_PT_SYSTEM_FD_1_FD5_Pkt_COMTX_PT_SYSTEM_FD_1_FD5_Pkt
        (&ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_1_FD5);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_PT_SYSTEM_FD_4_FD5_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_PT_SYSTEM_FD_4_FD5_Pkt_COMTX_PT_SYSTEM_FD_4_FD5_Pkt
        (&ST2B_BLUEN_ac_B.BusPT_SYSTEM_FD_4_FD5);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
