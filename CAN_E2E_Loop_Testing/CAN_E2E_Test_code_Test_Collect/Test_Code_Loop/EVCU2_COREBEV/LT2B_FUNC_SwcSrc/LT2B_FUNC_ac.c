/*
 * File: LT2B_FUNC_ac.c
 *
 * Code generated for Simulink model 'LT2B_FUNC_ac'.
 *
 * Model version                  : 1.49
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 09:38:42 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LT2B_FUNC_ac.h"

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Model step function for TID1 */
FUNC(void, LT2B_FUNC_CODE) LT2B_FUNC_FastTEF(void) /* Explicit Task: FastTEF */
{
    float32 tmpRead_3;
    TePMPR_e_FTSNA tmpRead;
    TeTMIR_e_ECM_LTP_FanAftRunRq tmpRead_1;
    boolean tmpRead_0;
    boolean tmpRead_2;

#if Rte_SysCon_VrntLT2B_BHVCalRq_RCVReHTLVlvCalCmnd

    TeRCVR_e_CPV_Calibration_Req tmpRead_4;

#endif

#if Rte_SysCon_VrntLT2B_BHVPosRq_RCVRPctHTLVlvPstnCmnd

    float32 tmpRead_5;

#endif

#if Rte_SysCon_VrntLT2B_BHVPosSv_RCVRbHTLVlvPstnSv

    boolean tmpRead_6;

#endif

    float32 tmpRead_8;
    TeACCR_e_AC_CompEnb tmpRead_7;

#if Rte_SysCon_VrntLT2B_AGS2BoostRq_FSCRbAGS2BoostReq

    boolean tmpRead_9;

#endif

#if Rte_SysCon_VrntLT2B_AGS2CalRq_FSCRbAGS2CalReq

    boolean tmpRead_a;

#endif

#if Rte_SysCon_VrntLT2B_AGS2PosRq_FSCReAGS2PosReq

    TeFSCR_e_AGS_PosRq tmpRead_b;

#endif

#if Rte_SysCon_VrntLT2B_DriveESaveLmp_DMIReESaveLEDOnLIN

    TeDMDR_e_DrvMdLEDStat tmpRead_c;

#endif

#if Rte_SysCon_VrntLT2B_DriveEcohybridLmp_DMIReEcoLEDOnLIN

    TeDMDR_e_DrvMdLEDStat tmpRead_d;

#endif

#if Rte_SysCon_VrntLT2B_DriveElectricLmp_DMIReElectricPlusLEDOnLIN

    TeDMDR_e_DrvMdLEDStat tmpRead_e;

#endif

#if Rte_SysCon_VrntLT2B_OEXVCalCmd_RCVReOEXVCalRq

    TeRCVR_e_EXV_Calibration_Req tmpRead_f;

#endif

#if Rte_SysCon_VrntLT2B_OEXVPosRq_RCVRPctOEXVCmd

    float32 tmpRead_g;

#endif

    float32 tmpRead_l;
    TePMPR_e_FTSNA tmpRead_h;
    TeTMIR_e_ECM_LTP_FanAftRunRq tmpRead_j;
    boolean tmpRead_i;
    boolean tmpRead_k;
    boolean tmpRead_m;

#if Rte_SysCon_VrntLT2B_PowerPanelLEDAColorCommand_VTLRePPLEDAColorCmd

    TeVTLR_e_LED_Color_Command tmpRead_n;

#endif

#if Rte_SysCon_VrntLT2B_PowerPanelLEDAColorCommand_VTLRePPLEDAColorCmd

    boolean tmpRead_o;

#endif

    TeVTLR_e_Led_Command tmpRead_p;

#if Rte_SysCon_VrntLT2B_PowerPanelLEDBColorCommand_VTLRePPLEDBColorCmd

    TeVTLR_e_LED_Color_Command tmpRead_q;

#endif

#if Rte_SysCon_VrntLT2B_PowerPanelLEDBColorCommand_VTLRePPLEDBColorCmd

    boolean tmpRead_r;

#endif

    TeVTLR_e_Led_Command tmpRead_s;

#if Rte_SysCon_VrntLT2B_PowerPanelLEDCColorCommand_VTLRePPLEDCColorCmd

    TeVTLR_e_LED_Color_Command tmpRead_t;

#endif

#if Rte_SysCon_VrntLT2B_PowerPanelLEDCColorCommand_VTLRePPLEDCColorCmd

    boolean tmpRead_u;

#endif

#if Rte_SysCon_VrntLT2B_PowerPanelLEDCCommand_VTLRePPLEDCCmd

    TeVTLR_e_Led_Command tmpRead_v;

#endif

#if Rte_SysCon_VrntLT2B_PowerPanelLEDCCommand_VTLRePPLEDCCmd

    boolean tmpRead_w;

#endif

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
     *  DataTypeConversion: '<S11>/Data Type Conversion'
     *  Inport: '<Root>/VePMPR_e_HT_AuxPmp_FL_SAFE_ACTVT'
     */
    (void)Rte_Write_SendLINR_AHP_FL_SAFE_ACTVT_SendLINR_AHP_FL_SAFE_ACTVT((uint8)
        tmpRead);

    /* Outport: '<Root>/SendLINR_AHP_FL_SAFE_ACTVT_Vld' incorporates:
     *  Logic: '<S11>/Logical Operator'
     */
    (void)
        Rte_Write_SendLINR_AHP_FL_SAFE_ACTVT_Vld_SendLINR_AHP_FL_SAFE_ACTVT_Vld(
        !tmpRead_0);

    /* Outport: '<Root>/SendLINR_AHP_POST_RUN_REQ' incorporates:
     *  DataTypeConversion: '<S12>/Data Type Conversion'
     *  Inport: '<Root>/VePMPR_e_HT_AuxPmp_PostRunCmd'
     */
    (void)Rte_Write_SendLINR_AHP_POST_RUN_REQ_SendLINR_AHP_POST_RUN_REQ((uint8)
        tmpRead_1);

    /* Outport: '<Root>/SendLINR_AHP_POST_RUN_REQ_Vld' incorporates:
     *  Logic: '<S12>/Logical Operator'
     */
    (void)Rte_Write_SendLINR_AHP_POST_RUN_REQ_Vld_SendLINR_AHP_POST_RUN_REQ_Vld(
        !tmpRead_2);

    /* Outport: '<Root>/SendLINR_AHP_RPM_REQ_PERCT' incorporates:
     *  DataTypeConversion: '<S13>/Data Type Conversion'
     */
    (void)Rte_Write_SendLINR_AHP_RPM_REQ_PERCT_SendLINR_AHP_RPM_REQ_PERCT
        (tmpRead_3);

    /* Outport: '<Root>/SendLINR_AHP_RPM_REQ_PERCT_Vld' incorporates:
     *  Logic: '<S13>/Logical Operator'
     */
    (void)
        Rte_Write_SendLINR_AHP_RPM_REQ_PERCT_Vld_SendLINR_AHP_RPM_REQ_PERCT_Vld
        (true);

    /* DataTypeConversion: '<S14>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeRCVR_e_HTL_Vlv_CalCmnd'
     *  Logic: '<S15>/Logical Operator'
     */
#if Rte_SysCon_VrntLT2B_BHVCalRq_RCVReHTLVlvCalCmnd

    (void)Rte_Read_VeRCVR_e_HTL_Vlv_CalCmnd_Value(&tmpRead_4);

    /* Outport: '<Root>/SendLINR_BHV_CalRq' incorporates:
     *  Inport: '<Root>/VeRCVR_e_HTL_Vlv_CalCmnd'
     */
    (void)Rte_Write_SendLINR_BHV_CalRq_SendLINR_BHV_CalRq((uint8)tmpRead_4);

    /* Outport: '<Root>/SendLINR_BHV_CalRqVld' */
    (void)Rte_Write_SendLINR_BHV_CalRqVld_SendLINR_BHV_CalRqVld(false);

#endif

    /* End of DataTypeConversion: '<S14>/Data Type Conversion' */

    /* DataTypeConversion: '<S16>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeRCVR_Pct_HTL_Vlv_PstnCmnd'
     *  Logic: '<S17>/Logical Operator'
     */
#if Rte_SysCon_VrntLT2B_BHVPosRq_RCVRPctHTLVlvPstnCmnd

    (void)Rte_Read_VeRCVR_Pct_HTL_Vlv_PstnCmnd_Value(&tmpRead_5);

    /* Outport: '<Root>/SendLINR_BHV_PosRq' incorporates:
     *  Inport: '<Root>/VeRCVR_Pct_HTL_Vlv_PstnCmnd'
     */
    (void)Rte_Write_SendLINR_BHV_PosRq_SendLINR_BHV_PosRq(tmpRead_5);

    /* Outport: '<Root>/SendLINR_BHV_PosRqVld' */
    (void)Rte_Write_SendLINR_BHV_PosRqVld_SendLINR_BHV_PosRqVld(false);

#endif

    /* End of DataTypeConversion: '<S16>/Data Type Conversion' */

    /* DataTypeConversion: '<S18>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeRCVR_b_HTL_Vlv_PstnSv'
     *  Logic: '<S19>/Logical Operator'
     */
#if Rte_SysCon_VrntLT2B_BHVPosSv_RCVRbHTLVlvPstnSv

    (void)Rte_Read_VeRCVR_b_HTL_Vlv_PstnSv_Value(&tmpRead_6);

    /* Outport: '<Root>/SendLINR_BHV_PosSv' incorporates:
     *  Inport: '<Root>/VeRCVR_b_HTL_Vlv_PstnSv'
     */
    (void)Rte_Write_SendLINR_BHV_PosSv_SendLINR_BHV_PosSv(tmpRead_6);

    /* Outport: '<Root>/SendLINR_BHV_PosSvVld' */
    (void)Rte_Write_SendLINR_BHV_PosSvVld_SendLINR_BHV_PosSvVld(false);

#endif

    /* End of DataTypeConversion: '<S18>/Data Type Conversion' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeACCR_n_CompSpdTgt' */
    (void)Rte_Read_VeACCR_n_CompSpdTgt_Value(&tmpRead_8);

    /* Inport: '<Root>/VeACCR_e_AC_CompEnb' */
    (void)Rte_Read_VeACCR_e_AC_CompEnb_Value(&tmpRead_7);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Outport: '<Root>/SendLINR_CompEnable' incorporates:
     *  DataTypeConversion: '<S20>/Data Type Conversion'
     *  Inport: '<Root>/VeACCR_e_AC_CompEnb'
     */
    (void)Rte_Write_SendLINR_CompEnable_SendLINR_CompEnable((uint8)tmpRead_7);

    /* Outport: '<Root>/SendLINR_CompEnableVld' incorporates:
     *  Logic: '<S20>/Logical Operator'
     */
    (void)Rte_Write_SendLINR_CompEnableVld_SendLINR_CompEnableVld(true);

    /* Outport: '<Root>/SendLINR_CompressorSpdReq' incorporates:
     *  DataTypeConversion: '<S21>/Data Type Conversion'
     */
    (void)Rte_Write_SendLINR_CompressorSpdReq_SendLINR_CompressorSpdReq
        (tmpRead_8);

    /* Outport: '<Root>/SendLINR_CompressorSpdReqVld' incorporates:
     *  Logic: '<S21>/Logical Operator'
     */
    (void)Rte_Write_SendLINR_CompressorSpdReqVld_SendLINR_CompressorSpdReqVld
        (true);

    /* DataTypeConversion: '<S22>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeFSCR_b_AGS2_BoostReq'
     *  Logic: '<S23>/Logical Operator'
     */
#if Rte_SysCon_VrntLT2B_AGS2BoostRq_FSCRbAGS2BoostReq

    (void)Rte_Read_VeFSCR_b_AGS2_BoostReq_Value(&tmpRead_9);

    /* Outport: '<Root>/SendLINR_AGS2_BoostRq' incorporates:
     *  Inport: '<Root>/VeFSCR_b_AGS2_BoostReq'
     */
    (void)Rte_Write_SendLINR_AGS2_BoostRq_SendLINR_AGS2_BoostRq(tmpRead_9);

    /* Outport: '<Root>/SendLINR_AGS2_BoostRqVld' */
    (void)Rte_Write_SendLINR_AGS2_BoostRqVld_SendLINR_AGS2_BoostRqVld(false);

#endif

    /* End of DataTypeConversion: '<S22>/Data Type Conversion' */

    /* DataTypeConversion: '<S24>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeFSCR_b_AGS2_CalReq'
     *  Logic: '<S25>/Logical Operator'
     */
#if Rte_SysCon_VrntLT2B_AGS2CalRq_FSCRbAGS2CalReq

    (void)Rte_Read_VeFSCR_b_AGS2_CalReq_Value(&tmpRead_a);

    /* Outport: '<Root>/SendLINR_AGS2_CalRq' incorporates:
     *  Inport: '<Root>/VeFSCR_b_AGS2_CalReq'
     */
    (void)Rte_Write_SendLINR_AGS2_CalRq_SendLINR_AGS2_CalRq(tmpRead_a);

    /* Outport: '<Root>/SendLINR_AGS2_CalRqVld' */
    (void)Rte_Write_SendLINR_AGS2_CalRqVld_SendLINR_AGS2_CalRqVld(false);

#endif

    /* End of DataTypeConversion: '<S24>/Data Type Conversion' */

    /* DataTypeConversion: '<S26>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeFSCR_e_AGS2_PosReq'
     *  Logic: '<S27>/Logical Operator'
     */
#if Rte_SysCon_VrntLT2B_AGS2PosRq_FSCReAGS2PosReq

    (void)Rte_Read_VeFSCR_e_AGS2_PosReq_Value(&tmpRead_b);

    /* Outport: '<Root>/SendLINR_AGS2_PosRq' incorporates:
     *  Inport: '<Root>/VeFSCR_e_AGS2_PosReq'
     */
    (void)Rte_Write_SendLINR_AGS2_PosRq_SendLINR_AGS2_PosRq((uint8)tmpRead_b);

    /* Outport: '<Root>/SendLINR_AGS2_PosRqVld' */
    (void)Rte_Write_SendLINR_AGS2_PosRqVld_SendLINR_AGS2_PosRqVld(false);

#endif

    /* End of DataTypeConversion: '<S26>/Data Type Conversion' */

    /* DataTypeConversion: '<S28>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeDMIR_e_ESaveLEDOn_LIN'
     *  Logic: '<S29>/Logical Operator'
     */
#if Rte_SysCon_VrntLT2B_DriveESaveLmp_DMIReESaveLEDOnLIN

    (void)Rte_Read_VeDMIR_e_ESaveLEDOn_LIN_Value(&tmpRead_c);

    /* Outport: '<Root>/SendLINR_DriveESaveLmp' incorporates:
     *  Inport: '<Root>/VeDMIR_e_ESaveLEDOn_LIN'
     */
    (void)Rte_Write_SendLINR_DriveESaveLmp_SendLINR_DriveESaveLmp((uint8)
        tmpRead_c);

    /* Outport: '<Root>/SendLINR_DriveESaveLmpVld' */
    (void)Rte_Write_SendLINR_DriveESaveLmpVld_SendLINR_DriveESaveLmpVld(false);

#endif

    /* End of DataTypeConversion: '<S28>/Data Type Conversion' */

    /* DataTypeConversion: '<S30>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeDMIR_e_EcoLEDOn_LIN'
     *  Logic: '<S31>/Logical Operator'
     */
#if Rte_SysCon_VrntLT2B_DriveEcohybridLmp_DMIReEcoLEDOnLIN

    (void)Rte_Read_VeDMIR_e_EcoLEDOn_LIN_Value(&tmpRead_d);

    /* Outport: '<Root>/SendLINR_DriveEcohybridLmp' incorporates:
     *  Inport: '<Root>/VeDMIR_e_EcoLEDOn_LIN'
     */
    (void)Rte_Write_SendLINR_DriveEcohybridLmp_SendLINR_DriveEcohybridLmp((uint8)
        tmpRead_d);

    /* Outport: '<Root>/SendLINR_DriveEcohybridLmpVld' */
    (void)Rte_Write_SendLINR_DriveEcohybridLmpVld_SendLINR_DriveEcohybridLmpVld
        (false);

#endif

    /* End of DataTypeConversion: '<S30>/Data Type Conversion' */

    /* DataTypeConversion: '<S32>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeDMIR_e_ElectricPlusLEDOn_LIN'
     *  Logic: '<S33>/Logical Operator'
     */
#if Rte_SysCon_VrntLT2B_DriveElectricLmp_DMIReElectricPlusLEDOnLIN

    (void)Rte_Read_VeDMIR_e_ElectricPlusLEDOn_LIN_Value(&tmpRead_e);

    /* Outport: '<Root>/SendLINR_DriveElectricLmp' incorporates:
     *  Inport: '<Root>/VeDMIR_e_ElectricPlusLEDOn_LIN'
     */
    (void)Rte_Write_SendLINR_DriveElectricLmp_SendLINR_DriveElectricLmp((uint8)
        tmpRead_e);

    /* Outport: '<Root>/SendLINR_DriveElectricLmpVld' */
    (void)Rte_Write_SendLINR_DriveElectricLmpVld_SendLINR_DriveElectricLmpVld
        (false);

#endif

    /* End of DataTypeConversion: '<S32>/Data Type Conversion' */

    /* DataTypeConversion: '<S34>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeRCVR_e_OEXV_CalRq'
     *  Logic: '<S35>/Logical Operator'
     */
#if Rte_SysCon_VrntLT2B_OEXVCalCmd_RCVReOEXVCalRq

    (void)Rte_Read_VeRCVR_e_OEXV_CalRq_Value(&tmpRead_f);

    /* Outport: '<Root>/SendLINR_OEXV_CalCmd' incorporates:
     *  Inport: '<Root>/VeRCVR_e_OEXV_CalRq'
     */
    (void)Rte_Write_SendLINR_OEXV_CalCmd_SendLINR_OEXV_CalCmd((uint8)tmpRead_f);

    /* Outport: '<Root>/SendLINR_OEXV_CalCmdVld' */
    (void)Rte_Write_SendLINR_OEXV_CalCmdVld_SendLINR_OEXV_CalCmdVld(false);

#endif

    /* End of DataTypeConversion: '<S34>/Data Type Conversion' */

    /* DataTypeConversion: '<S36>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeRCVR_Pct_OEXV_Cmd'
     *  Logic: '<S37>/Logical Operator'
     */
#if Rte_SysCon_VrntLT2B_OEXVPosRq_RCVRPctOEXVCmd

    (void)Rte_Read_VeRCVR_Pct_OEXV_Cmd_Value(&tmpRead_g);

    /* Outport: '<Root>/SendLINR_OEXV_PosRq' incorporates:
     *  Inport: '<Root>/VeRCVR_Pct_OEXV_Cmd'
     */
    (void)Rte_Write_SendLINR_OEXV_PosRq_SendLINR_OEXV_PosRq(tmpRead_g);

    /* Outport: '<Root>/SendLINR_OEXV_PosRqVld' */
    (void)Rte_Write_SendLINR_OEXV_PosRqVld_SendLINR_OEXV_PosRqVld(false);

#endif

    /* End of DataTypeConversion: '<S36>/Data Type Conversion' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeVTLR_b_PP1_DayLightMd' */
    (void)Rte_Read_VeVTLR_b_PP1_DayLightMd_Value(&tmpRead_m);

    /* Inport: '<Root>/VePMPR_Pct_LT_PsvPmpCmd' */
    (void)Rte_Read_VePMPR_Pct_LT_PsvPmpCmd_Value(&tmpRead_l);

    /* Inport: '<Root>/VePMPR_b_LT_PsvPump_PostRunCmd_FA' */
    (void)Rte_Read_VePMPR_b_LT_PsvPump_PostRunCmd_FA_Value(&tmpRead_k);

    /* Inport: '<Root>/VePMPR_e_LT_PsvPmp_PostRunCmd' */
    (void)Rte_Read_VePMPR_e_LT_PsvPmp_PostRunCmd_Value(&tmpRead_j);

    /* Inport: '<Root>/VePMPR_b_LT_PsvPmp_FL_SAFE_ACTVT_FA' */
    (void)Rte_Read_VePMPR_b_LT_PsvPmp_FL_SAFE_ACTVT_FA_Value(&tmpRead_i);

    /* Inport: '<Root>/VePMPR_e_LT_PsvPmp_FL_SAFE_ACTVT' */
    (void)Rte_Read_VePMPR_e_LT_PsvPmp_FL_SAFE_ACTVT_Value(&tmpRead_h);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Outport: '<Root>/SendLINR_PECP_FL_SAFE_ACTVT' incorporates:
     *  DataTypeConversion: '<S38>/Data Type Conversion'
     *  Inport: '<Root>/VePMPR_e_LT_PsvPmp_FL_SAFE_ACTVT'
     */
    (void)Rte_Write_SendLINR_PECP_FL_SAFE_ACTVT_SendLINR_PECP_FL_SAFE_ACTVT
        ((uint8)tmpRead_h);

    /* Outport: '<Root>/SendLINR_PECP_FL_SAFE_ACTVT_Vld' incorporates:
     *  Logic: '<S38>/Logical Operator'
     */
    (void)
        Rte_Write_SendLINR_PECP_FL_SAFE_ACTVT_Vld_SendLINR_PECP_FL_SAFE_ACTVT_Vld
        (!tmpRead_i);

    /* Outport: '<Root>/SendLINR_PECP_POST_RUN_REQ' incorporates:
     *  DataTypeConversion: '<S39>/Data Type Conversion'
     *  Inport: '<Root>/VePMPR_e_LT_PsvPmp_PostRunCmd'
     */
    (void)Rte_Write_SendLINR_PECP_POST_RUN_REQ_SendLINR_PECP_POST_RUN_REQ((uint8)
        tmpRead_j);

    /* Outport: '<Root>/SendLINR_PECP_POST_RUN_REQ_Vld' incorporates:
     *  Logic: '<S39>/Logical Operator'
     */
    (void)
        Rte_Write_SendLINR_PECP_POST_RUN_REQ_Vld_SendLINR_PECP_POST_RUN_REQ_Vld(
        !tmpRead_k);

    /* Outport: '<Root>/SendLINR_PECP_RPM_REQ_PERCT' incorporates:
     *  DataTypeConversion: '<S40>/Data Type Conversion'
     */
    (void)Rte_Write_SendLINR_PECP_RPM_REQ_PERCT_SendLINR_PECP_RPM_REQ_PERCT
        (tmpRead_l);

    /* Outport: '<Root>/SendLINR_PECP_RPM_REQ_PERCT_Vld' incorporates:
     *  Logic: '<S40>/Logical Operator'
     */
    (void)
        Rte_Write_SendLINR_PECP_RPM_REQ_PERCT_Vld_SendLINR_PECP_RPM_REQ_PERCT_Vld
        (true);

    /* Outport: '<Root>/SendLINR_DAY_LGT_MD_PowerPanel' incorporates:
     *  DataTypeConversion: '<S41>/Data Type Conversion'
     */
    (void)
        Rte_Write_SendLINR_DAY_LGT_MD_PowerPanel_SendLINR_DAY_LGT_MD_PowerPanel
        (tmpRead_m);

    /* Outport: '<Root>/SendLINR_DAY_LGT_MD_PowerPanelVld' incorporates:
     *  Logic: '<S41>/Logical Operator'
     */
    (void)
        Rte_Write_SendLINR_DAY_LGT_MD_PowerPanelVld_SendLINR_DAY_LGT_MD_PowerPanelVld
        (true);

    /* DataTypeConversion: '<S42>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeVTLR_b_PP_LEDA_ColorCmd_FA'
     *  Inport: '<Root>/VeVTLR_e_PP_LEDA_ColorCmd'
     *  Logic: '<S43>/Logical Operator'
     */
#if Rte_SysCon_VrntLT2B_PowerPanelLEDAColorCommand_VTLRePPLEDAColorCmd

    (void)Rte_Read_VeVTLR_e_PP_LEDA_ColorCmd_Value(&tmpRead_n);

    /* Outport: '<Root>/SendLINR_PwrPanel_LEDA_ColorCmd' incorporates:
     *  Inport: '<Root>/VeVTLR_e_PP_LEDA_ColorCmd'
     */
    (void)
        Rte_Write_SendLINR_PwrPanel_LEDA_ColorCmd_SendLINR_PwrPanel_LEDA_ColorCmd
        ((uint8)tmpRead_n);
    (void)Rte_Read_VeVTLR_b_PP_LEDA_ColorCmd_FA_Value(&tmpRead_o);

    /* Outport: '<Root>/SendLINR_PwrPanel_LEDA_ColorCmdVld' incorporates:
     *  Inport: '<Root>/VeVTLR_b_PP_LEDA_ColorCmd_FA'
     */
    (void)
        Rte_Write_SendLINR_PwrPanel_LEDA_ColorCmdVld_SendLINR_PwrPanel_LEDA_ColorCmdVld
        (!tmpRead_o);

#endif

    /* End of DataTypeConversion: '<S42>/Data Type Conversion' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeVTLR_e_PP1_LEDA_Cmd' */
    (void)Rte_Read_VeVTLR_e_PP1_LEDA_Cmd_Value(&tmpRead_p);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Outport: '<Root>/SendLINR_PwrPanel_LED_A_Command' incorporates:
     *  DataTypeConversion: '<S50>/Data Type Conversion'
     *  Inport: '<Root>/VeVTLR_e_PP1_LEDA_Cmd'
     */
    (void)
        Rte_Write_SendLINR_PwrPanel_LED_A_Command_SendLINR_PwrPanel_LED_A_Command
        ((uint8)tmpRead_p);

    /* Outport: '<Root>/SendLINR_PwrPanel_LED_A_CommandVld' incorporates:
     *  Logic: '<S50>/Logical Operator'
     */
    (void)
        Rte_Write_SendLINR_PwrPanel_LED_A_CommandVld_SendLINR_PwrPanel_LED_A_CommandVld
        (true);

    /* DataTypeConversion: '<S44>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeVTLR_b_PP_LEDB_ColorCmd_FA'
     *  Inport: '<Root>/VeVTLR_e_PP_LEDB_ColorCmd'
     *  Logic: '<S45>/Logical Operator'
     */
#if Rte_SysCon_VrntLT2B_PowerPanelLEDBColorCommand_VTLRePPLEDBColorCmd

    (void)Rte_Read_VeVTLR_e_PP_LEDB_ColorCmd_Value(&tmpRead_q);

    /* Outport: '<Root>/SendLINR_PwrPanel_LEDB_ColorCmd' incorporates:
     *  Inport: '<Root>/VeVTLR_e_PP_LEDB_ColorCmd'
     */
    (void)
        Rte_Write_SendLINR_PwrPanel_LEDB_ColorCmd_SendLINR_PwrPanel_LEDB_ColorCmd
        ((uint8)tmpRead_q);
    (void)Rte_Read_VeVTLR_b_PP_LEDB_ColorCmd_FA_Value(&tmpRead_r);

    /* Outport: '<Root>/SendLINR_PwrPanel_LEDB_ColorCmdVld' incorporates:
     *  Inport: '<Root>/VeVTLR_b_PP_LEDB_ColorCmd_FA'
     */
    (void)
        Rte_Write_SendLINR_PwrPanel_LEDB_ColorCmdVld_SendLINR_PwrPanel_LEDB_ColorCmdVld
        (!tmpRead_r);

#endif

    /* End of DataTypeConversion: '<S44>/Data Type Conversion' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeVTLR_e_PP1_LEDB_Cmd' */
    (void)Rte_Read_VeVTLR_e_PP1_LEDB_Cmd_Value(&tmpRead_s);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Outport: '<Root>/SendLINR_PwrPanel_LED_B_Command' incorporates:
     *  DataTypeConversion: '<S51>/Data Type Conversion'
     *  Inport: '<Root>/VeVTLR_e_PP1_LEDB_Cmd'
     */
    (void)
        Rte_Write_SendLINR_PwrPanel_LED_B_Command_SendLINR_PwrPanel_LED_B_Command
        ((uint8)tmpRead_s);

    /* Outport: '<Root>/SendLINR_PwrPanel_LED_B_CommandVld' incorporates:
     *  Logic: '<S51>/Logical Operator'
     */
    (void)
        Rte_Write_SendLINR_PwrPanel_LED_B_CommandVld_SendLINR_PwrPanel_LED_B_CommandVld
        (true);

    /* DataTypeConversion: '<S46>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeVTLR_b_PP_LEDC_ColorCmd_FA'
     *  Inport: '<Root>/VeVTLR_e_PP_LEDC_ColorCmd'
     *  Logic: '<S47>/Logical Operator'
     */
#if Rte_SysCon_VrntLT2B_PowerPanelLEDCColorCommand_VTLRePPLEDCColorCmd

    (void)Rte_Read_VeVTLR_e_PP_LEDC_ColorCmd_Value(&tmpRead_t);

    /* Outport: '<Root>/SendLINR_PwrPanel_LEDC_ColorCmd' incorporates:
     *  Inport: '<Root>/VeVTLR_e_PP_LEDC_ColorCmd'
     */
    (void)
        Rte_Write_SendLINR_PwrPanel_LEDC_ColorCmd_SendLINR_PwrPanel_LEDC_ColorCmd
        ((uint8)tmpRead_t);
    (void)Rte_Read_VeVTLR_b_PP_LEDC_ColorCmd_FA_Value(&tmpRead_u);

    /* Outport: '<Root>/SendLINR_PwrPanel_LEDC_ColorCmdVld' incorporates:
     *  Inport: '<Root>/VeVTLR_b_PP_LEDC_ColorCmd_FA'
     */
    (void)
        Rte_Write_SendLINR_PwrPanel_LEDC_ColorCmdVld_SendLINR_PwrPanel_LEDC_ColorCmdVld
        (!tmpRead_u);

#endif

    /* End of DataTypeConversion: '<S46>/Data Type Conversion' */

    /* DataTypeConversion: '<S48>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeVTLR_b_PP_LEDC_Cmd_FA'
     *  Inport: '<Root>/VeVTLR_e_PP_LEDC_Cmd'
     *  Logic: '<S49>/Logical Operator'
     */
#if Rte_SysCon_VrntLT2B_PowerPanelLEDCCommand_VTLRePPLEDCCmd

    (void)Rte_Read_VeVTLR_e_PP_LEDC_Cmd_Value(&tmpRead_v);

    /* Outport: '<Root>/SendLINR_PwrPanel_LED_C_Command' incorporates:
     *  Inport: '<Root>/VeVTLR_e_PP_LEDC_Cmd'
     */
    (void)
        Rte_Write_SendLINR_PwrPanel_LED_C_Command_SendLINR_PwrPanel_LED_C_Command
        ((uint8)tmpRead_v);
    (void)Rte_Read_VeVTLR_b_PP_LEDC_Cmd_FA_Value(&tmpRead_w);

    /* Outport: '<Root>/SendLINR_PwrPanel_LED_C_CommandVld' incorporates:
     *  Inport: '<Root>/VeVTLR_b_PP_LEDC_Cmd_FA'
     */
    (void)
        Rte_Write_SendLINR_PwrPanel_LED_C_CommandVld_SendLINR_PwrPanel_LED_C_CommandVld
        (!tmpRead_w);

#endif

    /* End of DataTypeConversion: '<S48>/Data Type Conversion' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
}

/* Model initialize function */
FUNC(void, LT2B_FUNC_CODE) LT2B_FUNC_ac_Init(void)
{
    /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
