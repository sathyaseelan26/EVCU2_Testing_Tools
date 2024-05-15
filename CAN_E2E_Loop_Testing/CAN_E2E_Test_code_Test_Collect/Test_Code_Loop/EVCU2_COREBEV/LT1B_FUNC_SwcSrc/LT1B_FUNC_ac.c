/*
 * File: LT1B_FUNC_ac.c
 *
 * Code generated for Simulink model 'LT1B_FUNC_ac'.
 *
 * Model version                  : 1.41
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 09:38:01 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LT1B_FUNC_ac.h"

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Model step function for TID1 */
FUNC(void, LT1B_FUNC_CODE) LT1B_FUNC_FastTEF(void) /* Explicit Task: FastTEF */
{
    float32 tmpRead_3;
    float32 tmpRead_5;
    TePMPR_e_FTSNA tmpRead;
    TeRCVR_e_CPV_Calibration_Req tmpRead_4;
    TeTMIR_e_ECM_LTP_FanAftRunRq tmpRead_1;
    boolean tmpRead_0;
    boolean tmpRead_2;
    boolean tmpRead_6;

#if Rte_SysCon_VrntLT1B_AADCalRq_AADRbAADCalReq

    boolean tmpRead_7;

#endif

#if Rte_SysCon_VrntLT1B_AADInitialIPCalRq_AADRbAADInitialIPCalRq

    boolean tmpRead_8;

#endif

#if Rte_SysCon_VrntLT1B_AADPosRq_AADReAADPosReq

    TeAADR_e_AAD_Pos tmpRead_9;

#endif

#if Rte_SysCon_VrntLT1B_EEXVCalCmd_RCVReEEXVCalRq

    TeRCVR_e_EXV_Calibration_Req tmpRead_a;

#endif

#if Rte_SysCon_VrntLT1B_EEXVPosRq_RCVRPctEEXVCmd

    float32 tmpRead_b;

#endif

    float32 tmpRead_d;
    TeTAPR_e_TransAuxPmp_PostRunCmd tmpRead_c;

#if Rte_SysCon_VrntLT1B_EXVMCalCmd_RCVReEXVCalCmd

    TeRCVR_e_EXV_Calibration_Req tmpRead_e;

#endif

#if Rte_SysCon_VrntLT1B_EXVMPosRq_RCVRPctEXVPosRq

    float32 tmpRead_f;

#endif

#if Rte_SysCon_VrntLT1B_AirHeatrEnad_HTRRbHVHtr2Req

    boolean tmpRead_g;

#endif

#if Rte_SysCon_VrntLT1B_AirHeatrPwrTgt_HTRRPctHVHtr2PwrLimit

    float32 tmpRead_h;

#endif

#if Rte_SysCon_VrntLT1B_LTRBVCalRq_RCVReLTRVlvCalCmnd

    TeRCVR_e_CPV_Calibration_Req tmpRead_i;

#endif

#if Rte_SysCon_VrntLT1B_LTRBVPosRq_RCVRPctLTRVlvPstnCmnd

    float32 tmpRead_j;

#endif

#if Rte_SysCon_VrntLT1B_LTRBVPosSv_RCVRbLTRVlvPstnSv

    boolean tmpRead_k;

#endif

    /* Inport: '<Root>/VeRCVR_b_FrWyVlv_PstnSv' */
    (void)Rte_Read_VeRCVR_b_FrWyVlv_PstnSv_Value(&tmpRead_6);

    /* Inport: '<Root>/VeRCVR_Pct_FrWyVlv_PstnCmnd' */
    (void)Rte_Read_VeRCVR_Pct_FrWyVlv_PstnCmnd_Value(&tmpRead_5);

    /* Inport: '<Root>/VeRCVR_e_FrWyVlv_CalCmnd' */
    (void)Rte_Read_VeRCVR_e_FrWyVlv_CalCmnd_Value(&tmpRead_4);

    /* Inport: '<Root>/VePMPR_Pct_LT_ActPmp_Cmd' */
    (void)Rte_Read_VePMPR_Pct_LT_ActPmp_Cmd_Value(&tmpRead_3);

    /* Inport: '<Root>/VePMPR_b_LT_ActvPump_PostRunCmd_FA' */
    (void)Rte_Read_VePMPR_b_LT_ActvPump_PostRunCmd_FA_Value(&tmpRead_2);

    /* Inport: '<Root>/VePMPR_e_LT_ActvPmp_PostRunCmd' */
    (void)Rte_Read_VePMPR_e_LT_ActvPmp_PostRunCmd_Value(&tmpRead_1);

    /* Inport: '<Root>/VePMPR_b_LT_ActPmp_FL_SAFE_ACTVT_FA' */
    (void)Rte_Read_VePMPR_b_LT_ActPmp_FL_SAFE_ACTVT_FA_Value(&tmpRead_0);

    /* Inport: '<Root>/VePMPR_e_LTActPmp_FL_SAFE_ACTVT' */
    (void)Rte_Read_VePMPR_e_LTActPmp_FL_SAFE_ACTVT_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Outport: '<Root>/SendLINR_BCP_FL_SAFE_ACTVT' incorporates:
     *  DataTypeConversion: '<S11>/Data Type Conversion'
     *  Inport: '<Root>/VePMPR_e_LTActPmp_FL_SAFE_ACTVT'
     */
    (void)Rte_Write_SendLINR_BCP_FL_SAFE_ACTVT_SendLINR_BCP_FL_SAFE_ACTVT((uint8)
        tmpRead);

    /* Outport: '<Root>/SendLINR_BCP_FL_SAFE_ACTVT_Vld' incorporates:
     *  Logic: '<S11>/Logical Operator'
     */
    (void)
        Rte_Write_SendLINR_BCP_FL_SAFE_ACTVT_Vld_SendLINR_BCP_FL_SAFE_ACTVT_Vld(
        !tmpRead_0);

    /* Outport: '<Root>/SendLINR_BCP_POST_RUN_REQ' incorporates:
     *  DataTypeConversion: '<S12>/Data Type Conversion'
     *  Inport: '<Root>/VePMPR_e_LT_ActvPmp_PostRunCmd'
     */
    (void)Rte_Write_SendLINR_BCP_POST_RUN_REQ_SendLINR_BCP_POST_RUN_REQ((uint8)
        tmpRead_1);

    /* Outport: '<Root>/SendLINR_BCP_POST_RUN_REQ_Vld' incorporates:
     *  Logic: '<S12>/Logical Operator'
     */
    (void)Rte_Write_SendLINR_BCP_POST_RUN_REQ_Vld_SendLINR_BCP_POST_RUN_REQ_Vld(
        !tmpRead_2);

    /* Outport: '<Root>/SendLINR_BCP_RPM_REQ' incorporates:
     *  DataTypeConversion: '<S13>/Data Type Conversion'
     */
    (void)Rte_Write_SendLINR_BCP_RPM_REQ_SendLINR_BCP_RPM_REQ(tmpRead_3);

    /* Outport: '<Root>/SendLINR_BCP_RPM_REQ_Vld' incorporates:
     *  Logic: '<S13>/Logical Operator'
     */
    (void)Rte_Write_SendLINR_BCP_RPM_REQ_Vld_SendLINR_BCP_RPM_REQ_Vld(true);

    /* Outport: '<Root>/SendLINR_CPV_CalRq' incorporates:
     *  DataTypeConversion: '<S14>/Data Type Conversion'
     *  Inport: '<Root>/VeRCVR_e_FrWyVlv_CalCmnd'
     */
    (void)Rte_Write_SendLINR_CPV_CalRq_SendLINR_CPV_CalRq((uint8)tmpRead_4);

    /* Outport: '<Root>/SendLINR_CPV_CalRqVld' incorporates:
     *  Logic: '<S14>/Logical Operator'
     */
    (void)Rte_Write_SendLINR_CPV_CalRqVld_SendLINR_CPV_CalRqVld(true);

    /* Outport: '<Root>/SendLINR_CPV_PosRq' incorporates:
     *  DataTypeConversion: '<S15>/Data Type Conversion'
     */
    (void)Rte_Write_SendLINR_CPV_PosRq_SendLINR_CPV_PosRq(tmpRead_5);

    /* Outport: '<Root>/SendLINR_CPV_PosRqVld' incorporates:
     *  Logic: '<S15>/Logical Operator'
     */
    (void)Rte_Write_SendLINR_CPV_PosRqVld_SendLINR_CPV_PosRqVld(true);

    /* Outport: '<Root>/SendLINR_CPV_PosSv' incorporates:
     *  DataTypeConversion: '<S16>/Data Type Conversion'
     */
    (void)Rte_Write_SendLINR_CPV_PosSv_SendLINR_CPV_PosSv(tmpRead_6);

    /* Outport: '<Root>/SendLINR_CPV_PosSvVld' incorporates:
     *  Logic: '<S16>/Logical Operator'
     */
    (void)Rte_Write_SendLINR_CPV_PosSvVld_SendLINR_CPV_PosSvVld(true);

    /* DataTypeConversion: '<S17>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeAADR_b_AAD_CalReq'
     *  Logic: '<S18>/Logical Operator'
     */
#if Rte_SysCon_VrntLT1B_AADCalRq_AADRbAADCalReq

    (void)Rte_Read_VeAADR_b_AAD_CalReq_Value(&tmpRead_7);

    /* Outport: '<Root>/SendLINR_AAD_CalRq' incorporates:
     *  Inport: '<Root>/VeAADR_b_AAD_CalReq'
     */
    (void)Rte_Write_SendLINR_AAD_CalRq_SendLINR_AAD_CalRq(tmpRead_7);

    /* Outport: '<Root>/SendLINR_AAD_CalRqVld' */
    (void)Rte_Write_SendLINR_AAD_CalRqVld_SendLINR_AAD_CalRqVld(false);

#endif

    /* End of DataTypeConversion: '<S17>/Data Type Conversion' */

    /* DataTypeConversion: '<S19>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeAADR_b_AAD_InitialIP_CalRq'
     *  Logic: '<S20>/Logical Operator'
     */
#if Rte_SysCon_VrntLT1B_AADInitialIPCalRq_AADRbAADInitialIPCalRq

    (void)Rte_Read_VeAADR_b_AAD_InitialIP_CalRq_Value(&tmpRead_8);

    /* Outport: '<Root>/SendLINR_AAD_InitialIP_CalRq' incorporates:
     *  Inport: '<Root>/VeAADR_b_AAD_InitialIP_CalRq'
     */
    (void)Rte_Write_SendLINR_AAD_InitialIP_CalRq_SendLINR_AAD_InitialIP_CalRq
        (tmpRead_8);

    /* Outport: '<Root>/SendLINR_AAD_InitialIP_CalRqVld' */
    (void)
        Rte_Write_SendLINR_AAD_InitialIP_CalRqVld_SendLINR_AAD_InitialIP_CalRqVld
        (false);

#endif

    /* End of DataTypeConversion: '<S19>/Data Type Conversion' */

    /* DataTypeConversion: '<S21>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeAADR_e_AAD_PosReq'
     *  Logic: '<S22>/Logical Operator'
     */
#if Rte_SysCon_VrntLT1B_AADPosRq_AADReAADPosReq

    (void)Rte_Read_VeAADR_e_AAD_PosReq_Value(&tmpRead_9);

    /* Outport: '<Root>/SendLINR_AAD_PosRq' incorporates:
     *  Inport: '<Root>/VeAADR_e_AAD_PosReq'
     */
    (void)Rte_Write_SendLINR_AAD_PosRq_SendLINR_AAD_PosRq((uint8)tmpRead_9);

    /* Outport: '<Root>/SendLINR_AAD_PosRqVld' */
    (void)Rte_Write_SendLINR_AAD_PosRqVld_SendLINR_AAD_PosRqVld(false);

#endif

    /* End of DataTypeConversion: '<S21>/Data Type Conversion' */

    /* DataTypeConversion: '<S23>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeRCVR_e_EEXV_CalRq'
     *  Logic: '<S24>/Logical Operator'
     */
#if Rte_SysCon_VrntLT1B_EEXVCalCmd_RCVReEEXVCalRq

    (void)Rte_Read_VeRCVR_e_EEXV_CalRq_Value(&tmpRead_a);

    /* Outport: '<Root>/SendLINR_EEXV_CalCmd' incorporates:
     *  Inport: '<Root>/VeRCVR_e_EEXV_CalRq'
     */
    (void)Rte_Write_SendLINR_EEXV_CalCmd_SendLINR_EEXV_CalCmd((uint8)tmpRead_a);

    /* Outport: '<Root>/SendLINR_EEXV_CalCmdVld' */
    (void)Rte_Write_SendLINR_EEXV_CalCmdVld_SendLINR_EEXV_CalCmdVld(false);

#endif

    /* End of DataTypeConversion: '<S23>/Data Type Conversion' */

    /* DataTypeConversion: '<S25>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeRCVR_Pct_EEXV_Cmd'
     *  Logic: '<S26>/Logical Operator'
     */
#if Rte_SysCon_VrntLT1B_EEXVPosRq_RCVRPctEEXVCmd

    (void)Rte_Read_VeRCVR_Pct_EEXV_Cmd_Value(&tmpRead_b);

    /* Outport: '<Root>/SendLINR_EEXV_PosRq' incorporates:
     *  Inport: '<Root>/VeRCVR_Pct_EEXV_Cmd'
     */
    (void)Rte_Write_SendLINR_EEXV_PosRq_SendLINR_EEXV_PosRq(tmpRead_b);

    /* Outport: '<Root>/SendLINR_EEXV_PosRqVld' */
    (void)Rte_Write_SendLINR_EEXV_PosRqVld_SendLINR_EEXV_PosRqVld(false);

#endif

    /* End of DataTypeConversion: '<S25>/Data Type Conversion' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeTAPR_n_TransAuxPmp_Cmd' */
    (void)Rte_Read_VeTAPR_n_TransAuxPmp_Cmd_Value(&tmpRead_d);

    /* Inport: '<Root>/VeTAPR_e_TransAuxPmp_PostRunCmd' */
    (void)Rte_Read_VeTAPR_e_TransAuxPmp_PostRunCmd_Value(&tmpRead_c);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Outport: '<Root>/SendLINR_EOPA_POST_RUN_COM' incorporates:
     *  DataTypeConversion: '<S27>/Data Type Conversion'
     *  Inport: '<Root>/VeTAPR_e_TransAuxPmp_PostRunCmd'
     */
    (void)Rte_Write_SendLINR_EOPA_POST_RUN_COM_SendLINR_EOPA_POST_RUN_COM((uint8)
        tmpRead_c);

    /* Outport: '<Root>/SendLINR_EOPA_POST_RUN_COM_Vld' incorporates:
     *  Logic: '<S27>/Logical Operator'
     */
    (void)
        Rte_Write_SendLINR_EOPA_POST_RUN_COM_Vld_SendLINR_EOPA_POST_RUN_COM_Vld
        (true);

    /* Outport: '<Root>/SendLINR_EOPA_RPM_COM' incorporates:
     *  DataTypeConversion: '<S28>/Data Type Conversion'
     */
    (void)Rte_Write_SendLINR_EOPA_RPM_COM_SendLINR_EOPA_RPM_COM(tmpRead_d);

    /* Outport: '<Root>/SendLINR_EOPA_RPM_COM_Vld' incorporates:
     *  Logic: '<S28>/Logical Operator'
     */
    (void)Rte_Write_SendLINR_EOPA_RPM_COM_Vld_SendLINR_EOPA_RPM_COM_Vld(true);

    /* DataTypeConversion: '<S29>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeRCVR_e_EXV_CalCmd'
     *  Logic: '<S30>/Logical Operator'
     */
#if Rte_SysCon_VrntLT1B_EXVMCalCmd_RCVReEXVCalCmd

    (void)Rte_Read_VeRCVR_e_EXV_CalCmd_Value(&tmpRead_e);

    /* Outport: '<Root>/SendLINR_EXVM_CalCmd' incorporates:
     *  Inport: '<Root>/VeRCVR_e_EXV_CalCmd'
     */
    (void)Rte_Write_SendLINR_EXVM_CalCmd_SendLINR_EXVM_CalCmd((uint8)tmpRead_e);

    /* Outport: '<Root>/SendLINR_EXVM_CalCmdVld' */
    (void)Rte_Write_SendLINR_EXVM_CalCmdVld_SendLINR_EXVM_CalCmdVld(false);

#endif

    /* End of DataTypeConversion: '<S29>/Data Type Conversion' */

    /* DataTypeConversion: '<S31>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeRCVR_Pct_EXV_PosRq'
     *  Logic: '<S32>/Logical Operator'
     */
#if Rte_SysCon_VrntLT1B_EXVMPosRq_RCVRPctEXVPosRq

    (void)Rte_Read_VeRCVR_Pct_EXV_PosRq_Value(&tmpRead_f);

    /* Outport: '<Root>/SendLINR_EXVM_PosRq' incorporates:
     *  Inport: '<Root>/VeRCVR_Pct_EXV_PosRq'
     */
    (void)Rte_Write_SendLINR_EXVM_PosRq_SendLINR_EXVM_PosRq(tmpRead_f);

    /* Outport: '<Root>/SendLINR_EXVM_PosRqVld' */
    (void)Rte_Write_SendLINR_EXVM_PosRqVld_SendLINR_EXVM_PosRqVld(false);

#endif

    /* End of DataTypeConversion: '<S31>/Data Type Conversion' */

    /* DataTypeConversion: '<S33>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeHTRR_b_HV_Htr2Req'
     *  Logic: '<S34>/Logical Operator'
     */
#if Rte_SysCon_VrntLT1B_AirHeatrEnad_HTRRbHVHtr2Req

    (void)Rte_Read_VeHTRR_b_HV_Htr2Req_Value(&tmpRead_g);

    /* Outport: '<Root>/SendLINR_AirHeatrEnad' incorporates:
     *  Inport: '<Root>/VeHTRR_b_HV_Htr2Req'
     */
    (void)Rte_Write_SendLINR_AirHeatrEnad_SendLINR_AirHeatrEnad(tmpRead_g);

    /* Outport: '<Root>/SendLINR_AirHeatrEnadVld' */
    (void)Rte_Write_SendLINR_AirHeatrEnadVld_SendLINR_AirHeatrEnadVld(false);

#endif

    /* End of DataTypeConversion: '<S33>/Data Type Conversion' */

    /* DataTypeConversion: '<S35>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeHTRR_Pct_HV_Htr2PwrLimit'
     *  Logic: '<S36>/Logical Operator'
     */
#if Rte_SysCon_VrntLT1B_AirHeatrPwrTgt_HTRRPctHVHtr2PwrLimit

    (void)Rte_Read_VeHTRR_Pct_HV_Htr2PwrLimit_Value(&tmpRead_h);

    /* Outport: '<Root>/SendLINR_AirHeatrPwrTgt' incorporates:
     *  Inport: '<Root>/VeHTRR_Pct_HV_Htr2PwrLimit'
     */
    (void)Rte_Write_SendLINR_AirHeatrPwrTgt_SendLINR_AirHeatrPwrTgt(tmpRead_h);

    /* Outport: '<Root>/SendLINR_AirHeatrPwrTgtVld' */
    (void)Rte_Write_SendLINR_AirHeatrPwrTgtVld_SendLINR_AirHeatrPwrTgtVld(false);

#endif

    /* End of DataTypeConversion: '<S35>/Data Type Conversion' */

    /* DataTypeConversion: '<S37>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeRCVR_e_LTR_Vlv_CalCmnd'
     *  Logic: '<S38>/Logical Operator'
     */
#if Rte_SysCon_VrntLT1B_LTRBVCalRq_RCVReLTRVlvCalCmnd

    (void)Rte_Read_VeRCVR_e_LTR_Vlv_CalCmnd_Value(&tmpRead_i);

    /* Outport: '<Root>/SendLINR_LTRBV_CalRq' incorporates:
     *  Inport: '<Root>/VeRCVR_e_LTR_Vlv_CalCmnd'
     */
    (void)Rte_Write_SendLINR_LTRBV_CalRq_SendLINR_LTRBV_CalRq((uint8)tmpRead_i);

    /* Outport: '<Root>/SendLINR_LTRBV_CalRqVld' */
    (void)Rte_Write_SendLINR_LTRBV_CalRqVld_SendLINR_LTRBV_CalRqVld(false);

#endif

    /* End of DataTypeConversion: '<S37>/Data Type Conversion' */

    /* DataTypeConversion: '<S39>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeRCVR_Pct_LTR_Vlv_PstnCmnd'
     *  Logic: '<S40>/Logical Operator'
     */
#if Rte_SysCon_VrntLT1B_LTRBVPosRq_RCVRPctLTRVlvPstnCmnd

    (void)Rte_Read_VeRCVR_Pct_LTR_Vlv_PstnCmnd_Value(&tmpRead_j);

    /* Outport: '<Root>/SendLINR_LTRBV_PosRq' incorporates:
     *  Inport: '<Root>/VeRCVR_Pct_LTR_Vlv_PstnCmnd'
     */
    (void)Rte_Write_SendLINR_LTRBV_PosRq_SendLINR_LTRBV_PosRq(tmpRead_j);

    /* Outport: '<Root>/SendLINR_LTRBV_PosRqVld' */
    (void)Rte_Write_SendLINR_LTRBV_PosRqVld_SendLINR_LTRBV_PosRqVld(false);

#endif

    /* End of DataTypeConversion: '<S39>/Data Type Conversion' */

    /* DataTypeConversion: '<S41>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeRCVR_b_LTR_Vlv_PstnSv'
     *  Logic: '<S42>/Logical Operator'
     */
#if Rte_SysCon_VrntLT1B_LTRBVPosSv_RCVRbLTRVlvPstnSv

    (void)Rte_Read_VeRCVR_b_LTR_Vlv_PstnSv_Value(&tmpRead_k);

    /* Outport: '<Root>/SendLINR_LTRBV_PosSv' incorporates:
     *  Inport: '<Root>/VeRCVR_b_LTR_Vlv_PstnSv'
     */
    (void)Rte_Write_SendLINR_LTRBV_PosSv_SendLINR_LTRBV_PosSv(tmpRead_k);

    /* Outport: '<Root>/SendLINR_LTRBV_PosSvVld' */
    (void)Rte_Write_SendLINR_LTRBV_PosSvVld_SendLINR_LTRBV_PosSvVld(false);

#endif

    /* End of DataTypeConversion: '<S41>/Data Type Conversion' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
}

/* Model initialize function */
FUNC(void, LT1B_FUNC_CODE) LT1B_FUNC_ac_Init(void)
{
    /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
