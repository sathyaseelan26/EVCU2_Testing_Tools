/*
 * File: LT3B_FUNC_ac.c
 *
 * Code generated for Simulink model 'LT3B_FUNC_ac'.
 *
 * Model version                  : 1.50
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 09:38:53 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LT3B_FUNC_ac.h"

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Model step function for TID1 */
FUNC(void, LT3B_FUNC_CODE) LT3B_FUNC_FastTEF(void) /* Explicit Task: FastTEF */
{
    float32 tmpRead_1;
    float32 tmpRead_2;
    boolean tmpRead;
    boolean tmpRead_0;

#if Rte_SysCon_VrntLT3B_CEXVCalCmd_RCVReEXVCalCmd

    TeRCVR_e_EXV_Calibration_Req tmpRead_3;

#endif

#if Rte_SysCon_VrntLT3B_CEXVPosRq_RCVRPctEXVPosRq

    float32 tmpRead_4;

#endif

    float32 tmpRead_9;
    TeCITR_e_CPIM_BlinkRate tmpRead_b;
    TeCITR_e_CPIM_Color tmpRead_c;
    TeCITR_e_CPIM_Icon_Ind tmpRead_k;
    TeCITR_e_CPIM_Icon_Ind tmpRead_l;
    TeCITR_e_CPIM_Indication tmpRead_d;
    TeCITR_e_CPIM_Indication tmpRead_e;
    TeCITR_e_CPIM_Indication tmpRead_f;
    TeCITR_e_CPIM_Indication tmpRead_g;
    TeCITR_e_CPIM_Indication tmpRead_h;
    TeFSCR_e_AGS_PosRq tmpRead_7;
    TeOBCR_e_ChrgPort_Req tmpRead_i;
    TeTAPR_e_TransAuxPmp_PostRunCmd tmpRead_8;
    boolean tmpRead_5;
    boolean tmpRead_6;
    boolean tmpRead_a;
    boolean tmpRead_j;

#if Rte_SysCon_VrntLT3B_HTLBVCalRq_RCVReHTLVlvCalCmnd

    TeRCVR_e_CPV_Calibration_Req tmpRead_m;

#endif

#if Rte_SysCon_VrntLT3B_HTLBVPosRq_RCVRPctHTLVlvPstnCmnd

    float32 tmpRead_n;

#endif

#if Rte_SysCon_VrntLT3B_HTLBVPosSv_RCVRbHTLVlvPstnSv

    boolean tmpRead_o;

#endif

    float32 tmpRead_t;
    TePMPR_e_FTSNA tmpRead_p;
    TeTMIR_e_ECM_LTP_FanAftRunRq tmpRead_r;
    boolean tmpRead_q;
    boolean tmpRead_s;
    boolean tmpRead_u;

#if Rte_SysCon_VrntLT3B_PowerPanel2LEDAColorCommand_VTLRePP2LEDAColorCmd

    TeVTLR_e_LED_Color_Command tmpRead_v;

#endif

#if Rte_SysCon_VrntLT3B_PowerPanel2LEDAColorCommand_VTLRePP2LEDAColorCmd

    boolean tmpRead_w;

#endif

    TeVTLR_e_Led_Command tmpRead_x;

#if Rte_SysCon_VrntLT3B_PowerPanel2LEDBColorCommand_VTLRePP2LEDBColorCmd

    TeVTLR_e_LED_Color_Command tmpRead_y;

#endif

#if Rte_SysCon_VrntLT3B_PowerPanel2LEDBColorCommand_VTLRePP2LEDBColorCmd

    boolean tmpRead_z;

#endif

    TeVTLR_e_Led_Command tmpRead_10;

    /* Inport: '<Root>/VeHTRR_T_HVC_HtrTempTgt' */
    (void)Rte_Read_VeHTRR_T_HVC_HtrTempTgt_Value(&tmpRead_2);

    /* Inport: '<Root>/VeHTRR_P_HVC_HtrPwrLimit' */
    (void)Rte_Read_VeHTRR_P_HVC_HtrPwrLimit_Value(&tmpRead_1);

    /* Inport: '<Root>/VeHTRR_b_HVC_HtrReq' */
    (void)Rte_Read_VeHTRR_b_HVC_HtrReq_Value(&tmpRead_0);

    /* Inport: '<Root>/VeHTRR_b_HVC_Htr_OvrhtUnlck' */
    (void)Rte_Read_VeHTRR_b_HVC_Htr_OvrhtUnlck_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Outport: '<Root>/SendLINR_HVH_OverheatUnlock' incorporates:
     *  DataTypeConversion: '<S11>/Data Type Conversion'
     */
    (void)Rte_Write_SendLINR_HVH_OverheatUnlock_SendLINR_HVH_OverheatUnlock
        (tmpRead);

    /* Outport: '<Root>/SendLINR_HVH_OverheatUnlockVld' incorporates:
     *  Logic: '<S11>/Logical Operator'
     */
    (void)
        Rte_Write_SendLINR_HVH_OverheatUnlockVld_SendLINR_HVH_OverheatUnlockVld
        (true);

    /* Outport: '<Root>/SendLINR_HvCooltHeatrEnad' incorporates:
     *  DataTypeConversion: '<S12>/Data Type Conversion'
     */
    (void)Rte_Write_SendLINR_HvCooltHeatrEnad_SendLINR_HvCooltHeatrEnad
        (tmpRead_0);

    /* Outport: '<Root>/SendLINR_HvCooltHeatrEnadVld' incorporates:
     *  Logic: '<S12>/Logical Operator'
     */
    (void)Rte_Write_SendLINR_HvCooltHeatrEnadVld_SendLINR_HvCooltHeatrEnadVld
        (true);

    /* Outport: '<Root>/SendLINR_HvWtrHeatrPwrCnsAllwd' incorporates:
     *  DataTypeConversion: '<S13>/Data Type Conversion'
     */
    (void)
        Rte_Write_SendLINR_HvWtrHeatrPwrCnsAllwd_SendLINR_HvWtrHeatrPwrCnsAllwd
        (tmpRead_1);

    /* Outport: '<Root>/SendLINR_HvWtrHeatrPwrCnsAllwdVld' incorporates:
     *  Logic: '<S13>/Logical Operator'
     */
    (void)
        Rte_Write_SendLINR_HvWtrHeatrPwrCnsAllwdVld_SendLINR_HvWtrHeatrPwrCnsAllwdVld
        (true);

    /* Outport: '<Root>/SendLINR_HvWtrHeatrWtrTDes' incorporates:
     *  DataTypeConversion: '<S14>/Data Type Conversion'
     */
    (void)Rte_Write_SendLINR_HvWtrHeatrWtrTDes_SendLINR_HvWtrHeatrWtrTDes
        (tmpRead_2);

    /* Outport: '<Root>/SendLINR_HvWtrHeatrWtrTDesVld' incorporates:
     *  Logic: '<S14>/Logical Operator'
     */
    (void)Rte_Write_SendLINR_HvWtrHeatrWtrTDesVld_SendLINR_HvWtrHeatrWtrTDesVld
        (true);

    /* DataTypeConversion: '<S15>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeRCVR_e_EXV_CalCmd'
     *  Logic: '<S16>/Logical Operator'
     */
#if Rte_SysCon_VrntLT3B_CEXVCalCmd_RCVReEXVCalCmd

    (void)Rte_Read_VeRCVR_e_EXV_CalCmd_Value(&tmpRead_3);

    /* Outport: '<Root>/SendLINR_CEXV_CalCmd' incorporates:
     *  Inport: '<Root>/VeRCVR_e_EXV_CalCmd'
     */
    (void)Rte_Write_SendLINR_CEXV_CalCmd_SendLINR_CEXV_CalCmd((uint8)tmpRead_3);

    /* Outport: '<Root>/SendLINR_CEXV_CalCmdVld' */
    (void)Rte_Write_SendLINR_CEXV_CalCmdVld_SendLINR_CEXV_CalCmdVld(false);

#endif

    /* End of DataTypeConversion: '<S15>/Data Type Conversion' */

    /* DataTypeConversion: '<S17>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeRCVR_Pct_EXV_PosRq'
     *  Logic: '<S18>/Logical Operator'
     */
#if Rte_SysCon_VrntLT3B_CEXVPosRq_RCVRPctEXVPosRq

    (void)Rte_Read_VeRCVR_Pct_EXV_PosRq_Value(&tmpRead_4);

    /* Outport: '<Root>/SendLINR_CEXV_PosRq' incorporates:
     *  Inport: '<Root>/VeRCVR_Pct_EXV_PosRq'
     */
    (void)Rte_Write_SendLINR_CEXV_PosRq_SendLINR_CEXV_PosRq(tmpRead_4);

    /* Outport: '<Root>/SendLINR_CEXV_PosRqVld' */
    (void)Rte_Write_SendLINR_CEXV_PosRqVld_SendLINR_CEXV_PosRqVld(false);

#endif

    /* End of DataTypeConversion: '<S17>/Data Type Conversion' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeOFCR_e_CPIM_Icon2_Cmd' */
    (void)Rte_Read_VeOFCR_e_CPIM_Icon2_Cmd_Value(&tmpRead_l);

    /* Inport: '<Root>/VeOFCR_e_CPIM_Icon1_Cmd' */
    (void)Rte_Read_VeOFCR_e_CPIM_Icon1_Cmd_Value(&tmpRead_k);

    /* Inport: '<Root>/VeOFCR_b_InternalLightSts' */
    (void)Rte_Read_VeOFCR_b_InternalLightSts_Value(&tmpRead_j);

    /* Inport: '<Root>/VeOBCR_e_ChrgPort_Req' */
    (void)Rte_Read_VeOBCR_e_ChrgPort_Req_Value(&tmpRead_i);

    /* Inport: '<Root>/VeOFCR_e_CPIM_Ind5_Cmd' */
    (void)Rte_Read_VeOFCR_e_CPIM_Ind5_Cmd_Value(&tmpRead_h);

    /* Inport: '<Root>/VeOFCR_e_CPIM_Ind4_Cmd' */
    (void)Rte_Read_VeOFCR_e_CPIM_Ind4_Cmd_Value(&tmpRead_g);

    /* Inport: '<Root>/VeOFCR_e_CPIM_Ind3_Cmd' */
    (void)Rte_Read_VeOFCR_e_CPIM_Ind3_Cmd_Value(&tmpRead_f);

    /* Inport: '<Root>/VeOFCR_e_CPIM_Ind2_Cmd' */
    (void)Rte_Read_VeOFCR_e_CPIM_Ind2_Cmd_Value(&tmpRead_e);

    /* Inport: '<Root>/VeOFCR_e_CPIM_Ind1_Cmd' */
    (void)Rte_Read_VeOFCR_e_CPIM_Ind1_Cmd_Value(&tmpRead_d);

    /* Inport: '<Root>/VeOFCR_e_CPIM_ColorInd_Cmd' */
    (void)Rte_Read_VeOFCR_e_CPIM_ColorInd_Cmd_Value(&tmpRead_c);

    /* Inport: '<Root>/VeOFCR_e_CPIM_BlinkRate_Cmd' */
    (void)Rte_Read_VeOFCR_e_CPIM_BlinkRate_Cmd_Value(&tmpRead_b);

    /* Inport: '<Root>/VeOFCR_b_BckLghtCmd' */
    (void)Rte_Read_VeOFCR_b_BckLghtCmd_Value(&tmpRead_a);

    /* Inport: '<Root>/VeTAPR_n_TransAuxPmp2_Cmd' */
    (void)Rte_Read_VeTAPR_n_TransAuxPmp2_Cmd_Value(&tmpRead_9);

    /* Inport: '<Root>/VeTAPR_e_TransAuxPmp2_PostRunCmd' */
    (void)Rte_Read_VeTAPR_e_TransAuxPmp2_PostRunCmd_Value(&tmpRead_8);

    /* Inport: '<Root>/VeFSCR_e_AGS_PosReq' */
    (void)Rte_Read_VeFSCR_e_AGS_PosReq_Value(&tmpRead_7);

    /* Inport: '<Root>/VeFSCR_b_AGS_CalReq' */
    (void)Rte_Read_VeFSCR_b_AGS_CalReq_Value(&tmpRead_6);

    /* Inport: '<Root>/VeFSCR_b_AGS_BoostReq' */
    (void)Rte_Read_VeFSCR_b_AGS_BoostReq_Value(&tmpRead_5);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Outport: '<Root>/SendLINR_AGS_BoostRq' incorporates:
     *  DataTypeConversion: '<S19>/Data Type Conversion'
     */
    (void)Rte_Write_SendLINR_AGS_BoostRq_SendLINR_AGS_BoostRq(tmpRead_5);

    /* Outport: '<Root>/SendLINR_AGS_BoostRqVld' incorporates:
     *  Logic: '<S19>/Logical Operator'
     */
    (void)Rte_Write_SendLINR_AGS_BoostRqVld_SendLINR_AGS_BoostRqVld(true);

    /* Outport: '<Root>/SendLINR_AGS_CalRq' incorporates:
     *  DataTypeConversion: '<S20>/Data Type Conversion'
     */
    (void)Rte_Write_SendLINR_AGS_CalRq_SendLINR_AGS_CalRq(tmpRead_6);

    /* Outport: '<Root>/SendLINR_AGS_CalRqVld' incorporates:
     *  Logic: '<S20>/Logical Operator'
     */
    (void)Rte_Write_SendLINR_AGS_CalRqVld_SendLINR_AGS_CalRqVld(true);

    /* Outport: '<Root>/SendLINR_AGS_PosRq' incorporates:
     *  DataTypeConversion: '<S21>/Data Type Conversion'
     *  Inport: '<Root>/VeFSCR_e_AGS_PosReq'
     */
    (void)Rte_Write_SendLINR_AGS_PosRq_SendLINR_AGS_PosRq((uint8)tmpRead_7);

    /* Outport: '<Root>/SendLINR_AGS_PosRqVld' incorporates:
     *  Logic: '<S21>/Logical Operator'
     */
    (void)Rte_Write_SendLINR_AGS_PosRqVld_SendLINR_AGS_PosRqVld(true);

    /* Outport: '<Root>/SendLINR_EOPB_POST_RUN_COM' incorporates:
     *  DataTypeConversion: '<S22>/Data Type Conversion'
     *  Inport: '<Root>/VeTAPR_e_TransAuxPmp2_PostRunCmd'
     */
    (void)Rte_Write_SendLINR_EOPB_POST_RUN_COM_SendLINR_EOPB_POST_RUN_COM((uint8)
        tmpRead_8);

    /* Outport: '<Root>/SendLINR_EOPB_POST_RUN_COM_Vld' incorporates:
     *  Logic: '<S22>/Logical Operator'
     */
    (void)
        Rte_Write_SendLINR_EOPB_POST_RUN_COM_Vld_SendLINR_EOPB_POST_RUN_COM_Vld
        (true);

    /* Outport: '<Root>/SendLINR_EOPB_RPM_COM' incorporates:
     *  DataTypeConversion: '<S23>/Data Type Conversion'
     */
    (void)Rte_Write_SendLINR_EOPB_RPM_COM_SendLINR_EOPB_RPM_COM(tmpRead_9);

    /* Outport: '<Root>/SendLINR_EOPB_RPM_COM_Vld' incorporates:
     *  Logic: '<S23>/Logical Operator'
     */
    (void)Rte_Write_SendLINR_EOPB_RPM_COM_Vld_SendLINR_EOPB_RPM_COM_Vld(true);

    /* Outport: '<Root>/SendLINR_Backlight_Cmd' incorporates:
     *  DataTypeConversion: '<S24>/Data Type Conversion'
     */
    (void)Rte_Write_SendLINR_Backlight_Cmd_SendLINR_Backlight_Cmd(tmpRead_a);

    /* Outport: '<Root>/SendLINR_Backlight_CmdVld' incorporates:
     *  Logic: '<S24>/Logical Operator'
     */
    (void)Rte_Write_SendLINR_Backlight_CmdVld_SendLINR_Backlight_CmdVld(true);

    /* Outport: '<Root>/SendLINR_CPIM_Blink_Rate' incorporates:
     *  DataTypeConversion: '<S25>/Data Type Conversion'
     *  Inport: '<Root>/VeOFCR_e_CPIM_BlinkRate_Cmd'
     */
    (void)Rte_Write_SendLINR_CPIM_Blink_Rate_SendLINR_CPIM_Blink_Rate((uint8)
        tmpRead_b);

    /* Outport: '<Root>/SendLINR_CPIM_Blink_RateVld' incorporates:
     *  Logic: '<S25>/Logical Operator'
     */
    (void)Rte_Write_SendLINR_CPIM_Blink_RateVld_SendLINR_CPIM_Blink_RateVld(true);

    /* Outport: '<Root>/SendLINR_CPIM_IND_Color' incorporates:
     *  DataTypeConversion: '<S26>/Data Type Conversion'
     *  Inport: '<Root>/VeOFCR_e_CPIM_ColorInd_Cmd'
     */
    (void)Rte_Write_SendLINR_CPIM_IND_Color_SendLINR_CPIM_IND_Color((uint8)
        tmpRead_c);

    /* Outport: '<Root>/SendLINR_CPIM_IND_ColorVld' incorporates:
     *  Logic: '<S26>/Logical Operator'
     */
    (void)Rte_Write_SendLINR_CPIM_IND_ColorVld_SendLINR_CPIM_IND_ColorVld(true);

    /* Outport: '<Root>/SendLINR_CPIM_SET_IND1' incorporates:
     *  DataTypeConversion: '<S27>/Data Type Conversion'
     *  Inport: '<Root>/VeOFCR_e_CPIM_Ind1_Cmd'
     */
    (void)Rte_Write_SendLINR_CPIM_SET_IND1_SendLINR_CPIM_SET_IND1((uint8)
        tmpRead_d);

    /* Outport: '<Root>/SendLINR_CPIM_SET_IND1Vld' incorporates:
     *  Logic: '<S27>/Logical Operator'
     */
    (void)Rte_Write_SendLINR_CPIM_SET_IND1Vld_SendLINR_CPIM_SET_IND1Vld(true);

    /* Outport: '<Root>/SendLINR_CPIM_SET_IND2' incorporates:
     *  DataTypeConversion: '<S28>/Data Type Conversion'
     *  Inport: '<Root>/VeOFCR_e_CPIM_Ind2_Cmd'
     */
    (void)Rte_Write_SendLINR_CPIM_SET_IND2_SendLINR_CPIM_SET_IND2((uint8)
        tmpRead_e);

    /* Outport: '<Root>/SendLINR_CPIM_SET_IND2Vld' incorporates:
     *  Logic: '<S28>/Logical Operator'
     */
    (void)Rte_Write_SendLINR_CPIM_SET_IND2Vld_SendLINR_CPIM_SET_IND2Vld(true);

    /* Outport: '<Root>/SendLINR_CPIM_SET_IND3' incorporates:
     *  DataTypeConversion: '<S29>/Data Type Conversion'
     *  Inport: '<Root>/VeOFCR_e_CPIM_Ind3_Cmd'
     */
    (void)Rte_Write_SendLINR_CPIM_SET_IND3_SendLINR_CPIM_SET_IND3((uint8)
        tmpRead_f);

    /* Outport: '<Root>/SendLINR_CPIM_SET_IND3Vld' incorporates:
     *  Logic: '<S29>/Logical Operator'
     */
    (void)Rte_Write_SendLINR_CPIM_SET_IND3Vld_SendLINR_CPIM_SET_IND3Vld(true);

    /* Outport: '<Root>/SendLINR_CPIM_SET_IND4' incorporates:
     *  DataTypeConversion: '<S30>/Data Type Conversion'
     *  Inport: '<Root>/VeOFCR_e_CPIM_Ind4_Cmd'
     */
    (void)Rte_Write_SendLINR_CPIM_SET_IND4_SendLINR_CPIM_SET_IND4((uint8)
        tmpRead_g);

    /* Outport: '<Root>/SendLINR_CPIM_SET_IND4Vld' incorporates:
     *  Logic: '<S30>/Logical Operator'
     */
    (void)Rte_Write_SendLINR_CPIM_SET_IND4Vld_SendLINR_CPIM_SET_IND4Vld(true);

    /* Outport: '<Root>/SendLINR_CPIM_SET_IND5' incorporates:
     *  DataTypeConversion: '<S31>/Data Type Conversion'
     *  Inport: '<Root>/VeOFCR_e_CPIM_Ind5_Cmd'
     */
    (void)Rte_Write_SendLINR_CPIM_SET_IND5_SendLINR_CPIM_SET_IND5((uint8)
        tmpRead_h);

    /* Outport: '<Root>/SendLINR_CPIM_SET_IND5Vld' incorporates:
     *  Logic: '<S31>/Logical Operator'
     */
    (void)Rte_Write_SendLINR_CPIM_SET_IND5Vld_SendLINR_CPIM_SET_IND5Vld(true);

    /* Outport: '<Root>/SendLINR_ChrgPortLock_Cmd' incorporates:
     *  DataTypeConversion: '<S32>/Data Type Conversion'
     *  Inport: '<Root>/VeOBCR_e_ChrgPort_Req'
     */
    (void)Rte_Write_SendLINR_ChrgPortLock_Cmd_SendLINR_ChrgPortLock_Cmd((uint8)
        tmpRead_i);

    /* Outport: '<Root>/SendLINR_ChrgPortLock_CmdVld' incorporates:
     *  Logic: '<S32>/Logical Operator'
     */
    (void)Rte_Write_SendLINR_ChrgPortLock_CmdVld_SendLINR_ChrgPortLock_CmdVld
        (true);

    /* Outport: '<Root>/SendLINR_DAY_LGT_MD_CPIM' incorporates:
     *  DataTypeConversion: '<S33>/Data Type Conversion'
     */
    (void)Rte_Write_SendLINR_DAY_LGT_MD_CPIM_SendLINR_DAY_LGT_MD_CPIM(tmpRead_j);

    /* Outport: '<Root>/SendLINR_DAY_LGT_MD_CPIM_Vld' incorporates:
     *  Logic: '<S33>/Logical Operator'
     */
    (void)Rte_Write_SendLINR_DAY_LGT_MD_CPIM_Vld_SendLINR_DAY_LGT_MD_CPIM_Vld
        (true);

    /* Outport: '<Root>/SendLINR_Set_Icon1_cmd' incorporates:
     *  DataTypeConversion: '<S34>/Data Type Conversion'
     *  Inport: '<Root>/VeOFCR_e_CPIM_Icon1_Cmd'
     */
    (void)Rte_Write_SendLINR_Set_Icon1_cmd_SendLINR_Set_Icon1_cmd((uint8)
        tmpRead_k);

    /* Outport: '<Root>/SendLINR_Set_Icon1_cmdVld' incorporates:
     *  Logic: '<S34>/Logical Operator'
     */
    (void)Rte_Write_SendLINR_Set_Icon1_cmdVld_SendLINR_Set_Icon1_cmdVld(true);

    /* Outport: '<Root>/SendLINR_Set_Icon2_cmd' incorporates:
     *  DataTypeConversion: '<S35>/Data Type Conversion'
     *  Inport: '<Root>/VeOFCR_e_CPIM_Icon2_Cmd'
     */
    (void)Rte_Write_SendLINR_Set_Icon2_cmd_SendLINR_Set_Icon2_cmd((uint8)
        tmpRead_l);

    /* Outport: '<Root>/SendLINR_Set_Icon2_cmdVld' incorporates:
     *  Logic: '<S35>/Logical Operator'
     */
    (void)Rte_Write_SendLINR_Set_Icon2_cmdVld_SendLINR_Set_Icon2_cmdVld(true);

    /* DataTypeConversion: '<S36>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeRCVR_e_HTL_Vlv_CalCmnd'
     *  Logic: '<S37>/Logical Operator'
     */
#if Rte_SysCon_VrntLT3B_HTLBVCalRq_RCVReHTLVlvCalCmnd

    (void)Rte_Read_VeRCVR_e_HTL_Vlv_CalCmnd_Value(&tmpRead_m);

    /* Outport: '<Root>/SendLINR_HTLBV_CalRq' incorporates:
     *  Inport: '<Root>/VeRCVR_e_HTL_Vlv_CalCmnd'
     */
    (void)Rte_Write_SendLINR_HTLBV_CalRq_SendLINR_HTLBV_CalRq((uint8)tmpRead_m);

    /* Outport: '<Root>/SendLINR_HTLBV_CalRqVld' */
    (void)Rte_Write_SendLINR_HTLBV_CalRqVld_SendLINR_HTLBV_CalRqVld(false);

#endif

    /* End of DataTypeConversion: '<S36>/Data Type Conversion' */

    /* DataTypeConversion: '<S38>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeRCVR_Pct_HTL_Vlv_PstnCmnd'
     *  Logic: '<S39>/Logical Operator'
     */
#if Rte_SysCon_VrntLT3B_HTLBVPosRq_RCVRPctHTLVlvPstnCmnd

    (void)Rte_Read_VeRCVR_Pct_HTL_Vlv_PstnCmnd_Value(&tmpRead_n);

    /* Outport: '<Root>/SendLINR_HTLBV_PosRq' incorporates:
     *  Inport: '<Root>/VeRCVR_Pct_HTL_Vlv_PstnCmnd'
     */
    (void)Rte_Write_SendLINR_HTLBV_PosRq_SendLINR_HTLBV_PosRq(tmpRead_n);

    /* Outport: '<Root>/SendLINR_HTLBV_PosRqVld' */
    (void)Rte_Write_SendLINR_HTLBV_PosRqVld_SendLINR_HTLBV_PosRqVld(false);

#endif

    /* End of DataTypeConversion: '<S38>/Data Type Conversion' */

    /* DataTypeConversion: '<S40>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeRCVR_b_HTL_Vlv_PstnSv'
     *  Logic: '<S41>/Logical Operator'
     */
#if Rte_SysCon_VrntLT3B_HTLBVPosSv_RCVRbHTLVlvPstnSv

    (void)Rte_Read_VeRCVR_b_HTL_Vlv_PstnSv_Value(&tmpRead_o);

    /* Outport: '<Root>/SendLINR_HTLBV_PosSv' incorporates:
     *  Inport: '<Root>/VeRCVR_b_HTL_Vlv_PstnSv'
     */
    (void)Rte_Write_SendLINR_HTLBV_PosSv_SendLINR_HTLBV_PosSv(tmpRead_o);

    /* Outport: '<Root>/SendLINR_HTLBV_PosSvVld' */
    (void)Rte_Write_SendLINR_HTLBV_PosSvVld_SendLINR_HTLBV_PosSvVld(false);

#endif

    /* End of DataTypeConversion: '<S40>/Data Type Conversion' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeVTLR_b_PP2_DayLightMd' */
    (void)Rte_Read_VeVTLR_b_PP2_DayLightMd_Value(&tmpRead_u);

    /* Inport: '<Root>/VePMPR_Pct_LT_PsvPmp2Cmd' */
    (void)Rte_Read_VePMPR_Pct_LT_PsvPmp2Cmd_Value(&tmpRead_t);

    /* Inport: '<Root>/VePMPR_b_LT_PsvPump2_PostRunCmd_FA' */
    (void)Rte_Read_VePMPR_b_LT_PsvPump2_PostRunCmd_FA_Value(&tmpRead_s);

    /* Inport: '<Root>/VePMPR_e_LT_PsvPmp2_PostRunCmd' */
    (void)Rte_Read_VePMPR_e_LT_PsvPmp2_PostRunCmd_Value(&tmpRead_r);

    /* Inport: '<Root>/VePMPR_b_LT_PsvPmp2_FL_SAFE_ACTVT_FA' */
    (void)Rte_Read_VePMPR_b_LT_PsvPmp2_FL_SAFE_ACTVT_FA_Value(&tmpRead_q);

    /* Inport: '<Root>/VePMPR_e_LT_PsvPmp2_FL_SAFE_ACTVT' */
    (void)Rte_Read_VePMPR_e_LT_PsvPmp2_FL_SAFE_ACTVT_Value(&tmpRead_p);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Outport: '<Root>/SendLINR_PECP2_FL_SAFE_ACTVT' incorporates:
     *  DataTypeConversion: '<S42>/Data Type Conversion'
     *  Inport: '<Root>/VePMPR_e_LT_PsvPmp2_FL_SAFE_ACTVT'
     */
    (void)Rte_Write_SendLINR_PECP2_FL_SAFE_ACTVT_SendLINR_PECP2_FL_SAFE_ACTVT
        ((uint8)tmpRead_p);

    /* Outport: '<Root>/SendLINR_PECP2_FL_SAFE_ACTVT_Vld' incorporates:
     *  Logic: '<S42>/Logical Operator'
     */
    (void)
        Rte_Write_SendLINR_PECP2_FL_SAFE_ACTVT_Vld_SendLINR_PECP2_FL_SAFE_ACTVT_Vld
        (!tmpRead_q);

    /* Outport: '<Root>/SendLINR_PECP2_POST_RUN_REQ' incorporates:
     *  DataTypeConversion: '<S43>/Data Type Conversion'
     *  Inport: '<Root>/VePMPR_e_LT_PsvPmp2_PostRunCmd'
     */
    (void)Rte_Write_SendLINR_PECP2_POST_RUN_REQ_SendLINR_PECP2_POST_RUN_REQ
        ((uint8)tmpRead_r);

    /* Outport: '<Root>/SendLINR_PECP2_POST_RUN_REQ_Vld' incorporates:
     *  Logic: '<S43>/Logical Operator'
     */
    (void)
        Rte_Write_SendLINR_PECP2_POST_RUN_REQ_Vld_SendLINR_PECP2_POST_RUN_REQ_Vld
        (!tmpRead_s);

    /* Outport: '<Root>/SendLINR_PECP2_RPM_REQ_PERCT' incorporates:
     *  DataTypeConversion: '<S44>/Data Type Conversion'
     */
    (void)Rte_Write_SendLINR_PECP2_RPM_REQ_PERCT_SendLINR_PECP2_RPM_REQ_PERCT
        (tmpRead_t);

    /* Outport: '<Root>/SendLINR_PECP2_RPM_REQ_PERCT_Vld' incorporates:
     *  Logic: '<S44>/Logical Operator'
     */
    (void)
        Rte_Write_SendLINR_PECP2_RPM_REQ_PERCT_Vld_SendLINR_PECP2_RPM_REQ_PERCT_Vld
        (true);

    /* Outport: '<Root>/SendLINR_DAY_LGT_MD_PowerPanel2' incorporates:
     *  DataTypeConversion: '<S45>/Data Type Conversion'
     */
    (void)
        Rte_Write_SendLINR_DAY_LGT_MD_PowerPanel2_SendLINR_DAY_LGT_MD_PowerPanel2
        (tmpRead_u);

    /* Outport: '<Root>/SendLINR_DAY_LGT_MD_PowerPanel2Vld' incorporates:
     *  Logic: '<S45>/Logical Operator'
     */
    (void)
        Rte_Write_SendLINR_DAY_LGT_MD_PowerPanel2Vld_SendLINR_DAY_LGT_MD_PowerPanel2Vld
        (true);

    /* DataTypeConversion: '<S46>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeVTLR_b_PP2_LEDA_ColorCmd_FA'
     *  Inport: '<Root>/VeVTLR_e_PP2_LEDA_ColorCmd'
     *  Logic: '<S47>/Logical Operator'
     */
#if Rte_SysCon_VrntLT3B_PowerPanel2LEDAColorCommand_VTLRePP2LEDAColorCmd

    (void)Rte_Read_VeVTLR_e_PP2_LEDA_ColorCmd_Value(&tmpRead_v);

    /* Outport: '<Root>/SendLINR_PowPan2_LED_A_Col_Comm' incorporates:
     *  Inport: '<Root>/VeVTLR_e_PP2_LEDA_ColorCmd'
     */
    (void)
        Rte_Write_SendLINR_PowPan2_LED_A_Col_Comm_SendLINR_PowPan2_LED_A_Col_Comm
        ((uint8)tmpRead_v);
    (void)Rte_Read_VeVTLR_b_PP2_LEDA_ColorCmd_FA_Value(&tmpRead_w);

    /* Outport: '<Root>/SendLINR_PowPan2_LED_A_Col_CommVld' incorporates:
     *  Inport: '<Root>/VeVTLR_b_PP2_LEDA_ColorCmd_FA'
     */
    (void)
        Rte_Write_SendLINR_PowPan2_LED_A_Col_CommVld_SendLINR_PowPan2_LED_A_Col_CommVld
        (!tmpRead_w);

#endif

    /* End of DataTypeConversion: '<S46>/Data Type Conversion' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeVTLR_e_PP2_LEDA_Cmd' */
    (void)Rte_Read_VeVTLR_e_PP2_LEDA_Cmd_Value(&tmpRead_x);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Outport: '<Root>/SendLINR_PowerPanel2_LED_A_Cmnd' incorporates:
     *  DataTypeConversion: '<S50>/Data Type Conversion'
     *  Inport: '<Root>/VeVTLR_e_PP2_LEDA_Cmd'
     */
    (void)
        Rte_Write_SendLINR_PowerPanel2_LED_A_Cmnd_SendLINR_PowerPanel2_LED_A_Cmnd
        ((uint8)tmpRead_x);

    /* Outport: '<Root>/SendLINR_PowerPanel2_LED_A_CmndVld' incorporates:
     *  Logic: '<S50>/Logical Operator'
     */
    (void)
        Rte_Write_SendLINR_PowerPanel2_LED_A_CmndVld_SendLINR_PowerPanel2_LED_A_CmndVld
        (true);

    /* DataTypeConversion: '<S48>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeVTLR_b_PP2_LEDB_ColorCmd_FA'
     *  Inport: '<Root>/VeVTLR_e_PP2_LEDB_ColorCmd'
     *  Logic: '<S49>/Logical Operator'
     */
#if Rte_SysCon_VrntLT3B_PowerPanel2LEDBColorCommand_VTLRePP2LEDBColorCmd

    (void)Rte_Read_VeVTLR_e_PP2_LEDB_ColorCmd_Value(&tmpRead_y);

    /* Outport: '<Root>/SendLINR_PowPan2_LED_B_Col_Comm' incorporates:
     *  Inport: '<Root>/VeVTLR_e_PP2_LEDB_ColorCmd'
     */
    (void)
        Rte_Write_SendLINR_PowPan2_LED_B_Col_Comm_SendLINR_PowPan2_LED_B_Col_Comm
        ((uint8)tmpRead_y);
    (void)Rte_Read_VeVTLR_b_PP2_LEDB_ColorCmd_FA_Value(&tmpRead_z);

    /* Outport: '<Root>/SendLINR_PowPan2_LED_B_Col_CommVld' incorporates:
     *  Inport: '<Root>/VeVTLR_b_PP2_LEDB_ColorCmd_FA'
     */
    (void)
        Rte_Write_SendLINR_PowPan2_LED_B_Col_CommVld_SendLINR_PowPan2_LED_B_Col_CommVld
        (!tmpRead_z);

#endif

    /* End of DataTypeConversion: '<S48>/Data Type Conversion' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeVTLR_e_PP2_LEDB_Cmd' */
    (void)Rte_Read_VeVTLR_e_PP2_LEDB_Cmd_Value(&tmpRead_10);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Outport: '<Root>/SendLINR_PowerPanel2_LED_B_Cmnd' incorporates:
     *  DataTypeConversion: '<S51>/Data Type Conversion'
     *  Inport: '<Root>/VeVTLR_e_PP2_LEDB_Cmd'
     */
    (void)
        Rte_Write_SendLINR_PowerPanel2_LED_B_Cmnd_SendLINR_PowerPanel2_LED_B_Cmnd
        ((uint8)tmpRead_10);

    /* Outport: '<Root>/SendLINR_PowerPanel2_LED_B_CmndVld' incorporates:
     *  Logic: '<S51>/Logical Operator'
     */
    (void)
        Rte_Write_SendLINR_PowerPanel2_LED_B_CmndVld_SendLINR_PowerPanel2_LED_B_CmndVld
        (true);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
}

/* Model initialize function */
FUNC(void, LT3B_FUNC_CODE) LT3B_FUNC_ac_Init(void)
{
    /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
