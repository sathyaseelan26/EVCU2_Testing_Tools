/*
 * File: LT2B_BLUEN_ac.c
 *
 * Code generated for Simulink model 'LT2B_BLUEN_ac'.
 *
 * Model version                  : 1.43
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 18:49:48 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LT2B_BLUEN_ac.h"

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Model step function for TID1 */
FUNC(void, LT2B_BLUEN_CODE) LT2B_BLUEN_FastTEF(void) /* Explicit Task: FastTEF */
{
    float32 tmpRead_3;
    float32 tmpRead_5;
    float32 tmpRead_d;
    TeACCR_e_AC_CompEnb tmpRead_4;
    TeFSCR_e_AGS_PosRq tmpRead_8;
    TePMPR_e_FTSNA tmpRead;
    TePMPR_e_FTSNA tmpRead_9;
    TeTMIR_e_ECM_LTP_FanAftRunRq tmpRead_1;
    TeTMIR_e_ECM_LTP_FanAftRunRq tmpRead_b;
    boolean tmpRead_0;
    boolean tmpRead_2;
    boolean tmpRead_6;
    boolean tmpRead_7;
    boolean tmpRead_a;
    boolean tmpRead_c;

    /* Inport: '<Root>/VePMPR_Pct_LT_PsvPmpCmd' */
    (void)Rte_Read_VePMPR_Pct_LT_PsvPmpCmd_Value(&tmpRead_d);

    /* Inport: '<Root>/VePMPR_b_LT_PsvPump_PostRunCmd_FA' */
    (void)Rte_Read_VePMPR_b_LT_PsvPump_PostRunCmd_FA_Value(&tmpRead_c);

    /* Inport: '<Root>/VePMPR_e_LT_PsvPmp_PostRunCmd' */
    (void)Rte_Read_VePMPR_e_LT_PsvPmp_PostRunCmd_Value(&tmpRead_b);

    /* Inport: '<Root>/VePMPR_b_LT_PsvPmp_FL_SAFE_ACTVT_FA' */
    (void)Rte_Read_VePMPR_b_LT_PsvPmp_FL_SAFE_ACTVT_FA_Value(&tmpRead_a);

    /* Inport: '<Root>/VePMPR_e_LT_PsvPmp_FL_SAFE_ACTVT' */
    (void)Rte_Read_VePMPR_e_LT_PsvPmp_FL_SAFE_ACTVT_Value(&tmpRead_9);

    /* Inport: '<Root>/VeFSCR_e_AGS2_PosReq' */
    (void)Rte_Read_VeFSCR_e_AGS2_PosReq_Value(&tmpRead_8);

    /* Inport: '<Root>/VeFSCR_b_AGS2_CalReq' */
    (void)Rte_Read_VeFSCR_b_AGS2_CalReq_Value(&tmpRead_7);

    /* Inport: '<Root>/VeFSCR_b_AGS2_BoostReq' */
    (void)Rte_Read_VeFSCR_b_AGS2_BoostReq_Value(&tmpRead_6);

    /* Inport: '<Root>/VeACCR_n_CompSpdTgt' */
    (void)Rte_Read_VeACCR_n_CompSpdTgt_Value(&tmpRead_5);

    /* Inport: '<Root>/VeACCR_e_AC_CompEnb' */
    (void)Rte_Read_VeACCR_e_AC_CompEnb_Value(&tmpRead_4);

    /* Inport: '<Root>/VePMPR_Pct_HT_AuxPmpCmd' */
    (void)Rte_Read_VePMPR_Pct_HT_AuxPmpCmd_Value(&tmpRead_3);

    /* Inport: '<Root>/VePMPR_b_HT_AuxPump_PostRunCmd_FA' */
    (void)Rte_Read_VePMPR_b_HT_AuxPump_PostRunCmd_FA_Value(&tmpRead_2);

    /* Inport: '<Root>/VePMPR_e_HT_AuxPmp_PostRunCmd' */
    (void)Rte_Read_VePMPR_e_HT_AuxPmp_PostRunCmd_Value(&tmpRead_1);

    /* Inport: '<Root>/VePMPR_b_HT_AuxPmp_FL_SAFE_ACTVT_FA' */
    (void)Rte_Read_VePMPR_b_HT_AuxPmp_FL_SAFE_ACTVT_FA_Value(&tmpRead_0);

    /* Inport: '<Root>/VePMPR_e_HT_AuxPmp_FL_SAFE_ACTVT' */
    (void)Rte_Read_VePMPR_e_HT_AuxPmp_FL_SAFE_ACTVT_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Outport: '<Root>/SendLINR_AHP_FL_SAFE_ACTVT' incorporates:
     *  DataTypeConversion: '<S7>/Data Type Conversion'
     *  Inport: '<Root>/VePMPR_e_HT_AuxPmp_FL_SAFE_ACTVT'
     */
    (void)Rte_Write_SendLINR_AHP_FL_SAFE_ACTVT_SendLINR_AHP_FL_SAFE_ACTVT((uint8)
        tmpRead);

    /* Outport: '<Root>/SendLINR_AHP_FL_SAFE_ACTVT_Vld' incorporates:
     *  Logic: '<S7>/Logical Operator'
     */
    (void)
        Rte_Write_SendLINR_AHP_FL_SAFE_ACTVT_Vld_SendLINR_AHP_FL_SAFE_ACTVT_Vld(
        !tmpRead_0);

    /* Outport: '<Root>/SendLINR_AHP_POST_RUN_REQ' incorporates:
     *  DataTypeConversion: '<S8>/Data Type Conversion'
     *  Inport: '<Root>/VePMPR_e_HT_AuxPmp_PostRunCmd'
     */
    (void)Rte_Write_SendLINR_AHP_POST_RUN_REQ_SendLINR_AHP_POST_RUN_REQ((uint8)
        tmpRead_1);

    /* Outport: '<Root>/SendLINR_AHP_POST_RUN_REQ_Vld' incorporates:
     *  Logic: '<S8>/Logical Operator'
     */
    (void)Rte_Write_SendLINR_AHP_POST_RUN_REQ_Vld_SendLINR_AHP_POST_RUN_REQ_Vld(
        !tmpRead_2);

    /* Outport: '<Root>/SendLINR_AHP_RPM_REQ_PERCT' incorporates:
     *  DataTypeConversion: '<S9>/Data Type Conversion'
     */
    (void)Rte_Write_SendLINR_AHP_RPM_REQ_PERCT_SendLINR_AHP_RPM_REQ_PERCT
        (tmpRead_3);

    /* Outport: '<Root>/SendLINR_AHP_RPM_REQ_PERCT_Vld' incorporates:
     *  Logic: '<S9>/Logical Operator'
     */
    (void)
        Rte_Write_SendLINR_AHP_RPM_REQ_PERCT_Vld_SendLINR_AHP_RPM_REQ_PERCT_Vld
        (true);

    /* Outport: '<Root>/SendLINR_CompEnable' incorporates:
     *  DataTypeConversion: '<S10>/Data Type Conversion'
     *  Inport: '<Root>/VeACCR_e_AC_CompEnb'
     */
    (void)Rte_Write_SendLINR_CompEnable_SendLINR_CompEnable((uint8)tmpRead_4);

    /* Outport: '<Root>/SendLINR_CompEnableVld' incorporates:
     *  Logic: '<S10>/Logical Operator'
     */
    (void)Rte_Write_SendLINR_CompEnableVld_SendLINR_CompEnableVld(true);

    /* Outport: '<Root>/SendLINR_CompressorSpdReq' incorporates:
     *  DataTypeConversion: '<S11>/Data Type Conversion'
     */
    (void)Rte_Write_SendLINR_CompressorSpdReq_SendLINR_CompressorSpdReq
        (tmpRead_5);

    /* Outport: '<Root>/SendLINR_CompressorSpdReqVld' incorporates:
     *  Logic: '<S11>/Logical Operator'
     */
    (void)Rte_Write_SendLINR_CompressorSpdReqVld_SendLINR_CompressorSpdReqVld
        (true);

    /* Outport: '<Root>/SendLINR_AGS2_BoostRq' incorporates:
     *  DataTypeConversion: '<S12>/Data Type Conversion'
     */
    (void)Rte_Write_SendLINR_AGS2_BoostRq_SendLINR_AGS2_BoostRq(tmpRead_6);

    /* Outport: '<Root>/SendLINR_AGS2_BoostRqVld' incorporates:
     *  Logic: '<S12>/Logical Operator'
     */
    (void)Rte_Write_SendLINR_AGS2_BoostRqVld_SendLINR_AGS2_BoostRqVld(true);

    /* Outport: '<Root>/SendLINR_AGS2_CalRq' incorporates:
     *  DataTypeConversion: '<S13>/Data Type Conversion'
     */
    (void)Rte_Write_SendLINR_AGS2_CalRq_SendLINR_AGS2_CalRq(tmpRead_7);

    /* Outport: '<Root>/SendLINR_AGS2_CalRqVld' incorporates:
     *  Logic: '<S13>/Logical Operator'
     */
    (void)Rte_Write_SendLINR_AGS2_CalRqVld_SendLINR_AGS2_CalRqVld(true);

    /* Outport: '<Root>/SendLINR_AGS2_PosRq' incorporates:
     *  DataTypeConversion: '<S14>/Data Type Conversion'
     *  Inport: '<Root>/VeFSCR_e_AGS2_PosReq'
     */
    (void)Rte_Write_SendLINR_AGS2_PosRq_SendLINR_AGS2_PosRq((uint8)tmpRead_8);

    /* Outport: '<Root>/SendLINR_AGS2_PosRqVld' incorporates:
     *  Logic: '<S14>/Logical Operator'
     */
    (void)Rte_Write_SendLINR_AGS2_PosRqVld_SendLINR_AGS2_PosRqVld(true);

    /* Outport: '<Root>/SendLINR_PECP_FL_SAFE_ACTVT' incorporates:
     *  DataTypeConversion: '<S15>/Data Type Conversion'
     *  Inport: '<Root>/VePMPR_e_LT_PsvPmp_FL_SAFE_ACTVT'
     */
    (void)Rte_Write_SendLINR_PECP_FL_SAFE_ACTVT_SendLINR_PECP_FL_SAFE_ACTVT
        ((uint8)tmpRead_9);

    /* Outport: '<Root>/SendLINR_PECP_FL_SAFE_ACTVT_Vld' incorporates:
     *  Logic: '<S15>/Logical Operator'
     */
    (void)
        Rte_Write_SendLINR_PECP_FL_SAFE_ACTVT_Vld_SendLINR_PECP_FL_SAFE_ACTVT_Vld
        (!tmpRead_a);

    /* Outport: '<Root>/SendLINR_PECP_POST_RUN_REQ' incorporates:
     *  DataTypeConversion: '<S16>/Data Type Conversion'
     *  Inport: '<Root>/VePMPR_e_LT_PsvPmp_PostRunCmd'
     */
    (void)Rte_Write_SendLINR_PECP_POST_RUN_REQ_SendLINR_PECP_POST_RUN_REQ((uint8)
        tmpRead_b);

    /* Outport: '<Root>/SendLINR_PECP_POST_RUN_REQ_Vld' incorporates:
     *  Logic: '<S16>/Logical Operator'
     */
    (void)
        Rte_Write_SendLINR_PECP_POST_RUN_REQ_Vld_SendLINR_PECP_POST_RUN_REQ_Vld(
        !tmpRead_c);

    /* Outport: '<Root>/SendLINR_PECP_RPM_REQ_PERCT' incorporates:
     *  DataTypeConversion: '<S17>/Data Type Conversion'
     */
    (void)Rte_Write_SendLINR_PECP_RPM_REQ_PERCT_SendLINR_PECP_RPM_REQ_PERCT
        (tmpRead_d);

    /* Outport: '<Root>/SendLINR_PECP_RPM_REQ_PERCT_Vld' incorporates:
     *  Logic: '<S17>/Logical Operator'
     */
    (void)
        Rte_Write_SendLINR_PECP_RPM_REQ_PERCT_Vld_SendLINR_PECP_RPM_REQ_PERCT_Vld
        (true);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
}

/* Model initialize function */
FUNC(void, LT2B_BLUEN_CODE) LT2B_BLUEN_ac_Init(void)
{
    /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
