/*
 * File: CT2B_FUNC_ac.c
 *
 * Code generated for Simulink model 'CT2B_FUNC_ac'.
 *
 * Model version                  : 1.49
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 09:33:19 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CT2B_FUNC_ac.h"



boolean SendCANR_IMPACTConfirm_FD11_CT2B_FUNC_ac_Test_1;
uint16 SendCANR_HVCMS_RmnTiToBuSOCFD11_CT2B_FUNC_ac_Test_1;
float32 SendCANR_HVCMS_EVMaxPLimit_FD11_CT2B_FUNC_ac_Test_1;
float32 SendCANR_HVCMS_EVRESS_SOC_FD11_CT2B_FUNC_ac_Test_1;
uint8 SendCANR_HybridDriveModeSts_CT2B_FUNC_ac_Test_1;
float32 SendCANR_WU_Timer_Value_FD11_CT2B_FUNC_ac_Test_1;
uint16 SendCANR_HVCMS_SelServId_FD11_CT2B_FUNC_ac_Test_1;
uint8 SendCANR_DischrgngSysStatusFD11_CT2B_FUNC_ac_Test_1;
boolean SendCANR_HVCMS_ChrgnCmpl_FD11_CT2B_FUNC_ac_Test_1;
boolean SendCANR_HVCMS_EVReady_FD11_CT2B_FUNC_ac_Test_1;
boolean SendCANR_IMPACTCommand_FD11_CT2B_FUNC_ac_Test_1;
uint8 SendCANR_HVCMS_SelPmtOptn_FD11_CT2B_FUNC_ac_Test_1;
float32 SendCANR_MCPA_DC_Current_P_FD11_CT2B_FUNC_ac_Test_2;
float32 SendCANR_MCPA_DC_Current_P_FD11_CT2B_FUNC_ac_Test_1;
float32 SendCANR_HVCMS_EVEgyReq_FD11_CT2B_FUNC_ac_Test_1;
float32 SendCANR_HVCMS_RmnTiToFuSOCFD11_CT2B_FUNC_ac_Test_1;
uint16 SendCANR_PerWakeUp_Diag_FD11_CT2B_FUNC_ac_Test_1;
boolean SendCANR_HVCMS_RdyToChrgSt_FD11_CT2B_FUNC_ac_Test_1;
float32 SendCANR_HVCMS_EVTarVolt_FD11_CT2B_FUNC_ac_Test_1;
uint8 SendCANR_GearEngaged_PT_FD11_CT2B_FUNC_ac_Test_1;
float32 SendCANR_HVCMS_EVTarCurr_FD11_CT2B_FUNC_ac_Test_1;
uint8 SendCANR_HVCMS_EVErrorCode_FD11_CT2B_FUNC_ac_Test_1;
boolean SendCANR_DriveReady_PT_FD11_CT2B_FUNC_ac_Test_1;
uint8 SendCANR_HVCMS_ServCtgy_FD11_CT2B_FUNC_ac_Test_1;
float32 SendCANR_HVCMS_EVEgyCap_FD11_CT2B_FUNC_ac_Test_1;
float32 SendCANR_MCPB_Temp_FD11_CT2B_FUNC_ac_Test_1;
float32 SendCANR_MCPA_Temp_FD11_CT2B_FUNC_ac_Test_2;
boolean SendCANR_PrplsnSysActive_10B_CT2B_FUNC_ac_Test_1;
float32 SendCANR_MCPA_Temp_FD11_CT2B_FUNC_ac_Test_1;
float32 SendCANR_HVCMS_EVMaxILimit_FD11_CT2B_FUNC_ac_Test_1;
uint8 SendCANR_GearEngagedForDisplay_CT2B_FUNC_ac_Test_1;
float32 SendCANR_MCPB_DC_Current_P_FD11_CT2B_FUNC_ac_Test_1;
uint8 SendCANR_HVCMS_SelEgyTrfTypFD11_CT2B_FUNC_ac_Test_1;
float32 SendCANR_HVCMSEVMaxVLimit_FD11_CT2B_FUNC_ac_Test_1;
uint8 SendCANR_GearEngdForDispPTFD11_CT2B_FUNC_ac_Test_1;
boolean SendCANR_PtrainPrplsnActvPTFD11_CT2B_FUNC_ac_Test_1;

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Model step function for TID1 */
FUNC(void, CT2B_FUNC_CODE) CT2B_FUNC_FastTEF /* Explicit Task: FastTEF */
{

#if Rte_SysCon_VrntCT2B_BattVoltDeviationErr_CHDRbBattVoltDvatonErr

    boolean tmpRead;

#endif

#if Rte_SysCon_VrntCT2B_CHAdeMOProtocol_CHDReCHAdeMOProtocol

    TeIDCR_e_CHAdeMOPrtcl tmpRead_0;

#endif

    float32 tmpRead_1;

#if Rte_SysCon_VrntCT2B_ChargedReferenceConstant_CHDRPctChrgdRefrncCnstnt

    float32 tmpRead_2;

#endif

#if Rte_SysCon_VrntCT2B_EVCUCP3Cmd_CHDRbEVCUCP3Cmd

    boolean tmpRead_3;

#endif

#if Rte_SysCon_VrntCT2B_EVContactorSts_CHDRbEVContactorSts

    boolean tmpRead_4;

#endif

#if Rte_SysCon_VrntCT2B_StopReqBeforeCharge_CHDRbStopReqBeforeChrg

    boolean tmpRead_5;

#endif

#if Rte_SysCon_VrntCT2B_TotalBatteryCapacity_BPCRqFullAmpHrCap

    float32 tmpRead_6;

#endif

#if Rte_SysCon_VrntCT2B_VehicleDriveSts_CHDRbVehicleDriveSts

    boolean tmpRead_7;

#endif

    TeVTLR_e_DschrgSysSts tmpRead_8;

#if Rte_SysCon_VrntCT2B_MaxAllwdACOutputCurrentL1_VDVRIMaxAlwdACOutCurr

    float32 tmpRead_9;

#endif

#if Rte_SysCon_VrntCT2B_MaxAllwdACOutputVoltageL1_VDVRUMaxAlwdACOutVolt

    float32 tmpRead_a;

#endif

    sint16 tmpRead_b;
    uint16 tmpRead_c;
    uint16 tmpRead_d;
    boolean tmpRead_e;
    boolean tmpRead_f;

#if Rte_SysCon_VrntCT2B_MCPATemp_INVRTMtrATemp

    float32 tmpRead_g;

#endif

#if Rte_SysCon_VrntCT2B_MCPATemp_INVRTMtrCTemp

    float32 tmpRead_h;

#endif

#if Rte_SysCon_VrntCT2B_MCPATemp_INVRTMtrATemp

    boolean tmpRead_i;

#endif

#if Rte_SysCon_VrntCT2B_MCPATemp_INVRTMtrCTemp

    boolean tmpRead_j;

#endif

#if Rte_SysCon_VrntCT2B_MCPADCCurrentP_INVRIMtrADCCrnt

    float32 tmpRead_k;

#endif

#if Rte_SysCon_VrntCT2B_MCPADCCurrentP_INVRIMtrCDCCrnt

    float32 tmpRead_l;

#endif

    float32 tmpRead_10;
    float32 tmpRead_12;
    float32 tmpRead_13;
    float32 tmpRead_m;
    float32 tmpRead_o;
    float32 tmpRead_s;
    float32 tmpRead_t;
    float32 tmpRead_v;
    float32 tmpRead_w;
    float32 tmpRead_x;
    float32 tmpRead_z;
    sint16 tmpRead_14;
    sint16 tmpRead_17;
    sint16 tmpRead_q;
    sint16 tmpRead_u;
    uint16 tmpRead_16;
    TeOBCR_e_HVCM_SelPaymentOptn tmpRead_15;
    boolean tmpRead_11;
    boolean tmpRead_n;
    boolean tmpRead_p;
    boolean tmpRead_r;
    boolean tmpRead_y;

#if Rte_SysCon_VrntCT2B_HVCMSServiceScope_OBCRdServiceScope

    uint16 tmpRead_18;

#endif

#if Rte_SysCon_VrntCT2B_V2XHVCMSSlctdEnergyTransfType_VTHRbV2HSelEnergyTransTy

    boolean tmpRead_19;

#endif

#if Rte_SysCon_VrntCT2B_VDCMBattBulkSOC_IDCRPctBattBulkSOC

    float32 tmpRead_1a;

#endif

    float32 rtb_TmpSignalConversionAtVeHMIR;
    sint16 rtb_TmpSignalConversionAtVeTRGR;
    boolean rtb_TmpSignalConversionAtVeHPMR;

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* DataTypeConversion: '<S14>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeCHDR_b_BattVoltDvatonErr'
     *  Logic: '<S15>/Logical Operator'
     */
#if Rte_SysCon_VrntCT2B_BattVoltDeviationErr_CHDRbBattVoltDvatonErr

    Rte_Read_VeCHDR_b_BattVoltDvatonErr_Value(&tmpRead);

    /* Outport: '<Root>/SendCANR_BattVoltDeviationErr' incorporates:
     *  Inport: '<Root>/VeCHDR_b_BattVoltDvatonErr'
     */
    Rte_Write_SendCANR_BattVoltDeviationErr_SendCANR_BattVoltDeviationErr
        (tmpRead);

    /* Outport: '<Root>/SendCANR_BattVoltDeviationErrVld' */
    
        Rte_Write_SendCANR_BattVoltDeviationErrVld_SendCANR_BattVoltDeviationErrVld
        (false);

#endif

    /* End of DataTypeConversion: '<S14>/Data Type Conversion' */

    /* DataTypeConversion: '<S16>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeCHDR_e_CHAdeMOProtocol'
     *  Logic: '<S17>/Logical Operator'
     */
#if Rte_SysCon_VrntCT2B_CHAdeMOProtocol_CHDReCHAdeMOProtocol

    Rte_Read_VeCHDR_e_CHAdeMOProtocol_Value(&tmpRead_0);

    /* Outport: '<Root>/SendCANR_CHAdeMOProtocol' incorporates:
     *  Inport: '<Root>/VeCHDR_e_CHAdeMOProtocol'
     */
    Rte_Write_SendCANR_CHAdeMOProtocol_SendCANR_CHAdeMOProtocol((uint8)
        tmpRead_0);

    /* Outport: '<Root>/SendCANR_CHAdeMOProtocolVld' */
    Rte_Write_SendCANR_CHAdeMOProtocolVld_SendCANR_CHAdeMOProtocolVld
        (false);

#endif

    /* End of DataTypeConversion: '<S16>/Data Type Conversion' */

    /* DataTypeConversion: '<S18>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeCHDR_I_ChargedCrntMin'
     *  Logic: '<S19>/Logical Operator'
     */
#if Rte_SysCon_VrntCT2B_ChargedCurrentMin_CHDRIChargedCrntMin

    Rte_Read_VeCHDR_I_ChargedCrntMin_Value(&tmpRead_1);

    /* Outport: '<Root>/SendCANR_ChargedCurrentMin' incorporates:
     *  Inport: '<Root>/VeCHDR_I_ChargedCrntMin'
     */
    Rte_Write_SendCANR_ChargedCurrentMin_SendCANR_ChargedCurrentMin
        (tmpRead_1);

    /* Outport: '<Root>/SendCANR_ChargedCurrentMinVld' */
    Rte_Write_SendCANR_ChargedCurrentMinVld_SendCANR_ChargedCurrentMinVld
        (false);

#endif

    /* End of DataTypeConversion: '<S18>/Data Type Conversion' */

    /* DataTypeConversion: '<S20>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeCHDR_Pct_ChrgdRefrncCnstnt'
     *  Logic: '<S21>/Logical Operator'
     */
#if Rte_SysCon_VrntCT2B_ChargedReferenceConstant_CHDRPctChrgdRefrncCnstnt

    Rte_Read_VeCHDR_Pct_ChrgdRefrncCnstnt_Value(&tmpRead_2);

    /* Outport: '<Root>/SendCANR_ChrgdRefrncCnstnt' incorporates:
     *  Inport: '<Root>/VeCHDR_Pct_ChrgdRefrncCnstnt'
     */
    Rte_Write_SendCANR_ChrgdRefrncCnstnt_SendCANR_ChrgdRefrncCnstnt
        (tmpRead_2);

    /* Outport: '<Root>/SendCANR_ChrgdRefrncCnstntVld' */
    Rte_Write_SendCANR_ChrgdRefrncCnstntVld_SendCANR_ChrgdRefrncCnstntVld
        (false);

#endif

    /* End of DataTypeConversion: '<S20>/Data Type Conversion' */

    /* SignalConversion generated from: '<S2>/VeHMIR_Pct_HVBatSOC_HCP' incorporates:
     *  Inport: '<Root>/VeHMIR_Pct_HVBatSOC_HCP'
     */
    Rte_Read_VeHMIR_Pct_HVBatSOC_HCP_Value
        (&rtb_TmpSignalConversionAtVeHMIR);

    /* DataTypeConversion: '<S22>/Data Type Conversion' incorporates:
     *  Logic: '<S23>/Logical Operator'
     */
#if Rte_SysCon_VrntCT2B_DisplaySOC_HMIRPctHVBatSOCHCP

    /* Outport: '<Root>/SendCANR_DisplaySOC' */
    Rte_Write_SendCANR_DisplaySOC_SendCANR_DisplaySOC
        (rtb_TmpSignalConversionAtVeHMIR);

    /* Outport: '<Root>/SendCANR_DisplaySOC_Vld' */
    Rte_Write_SendCANR_DisplaySOC_Vld_SendCANR_DisplaySOC_Vld(false);

#endif

    /* End of DataTypeConversion: '<S22>/Data Type Conversion' */

    /* DataTypeConversion: '<S24>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeCHDR_b_EVCU_CP3Cmd'
     *  Logic: '<S25>/Logical Operator'
     */
#if Rte_SysCon_VrntCT2B_EVCUCP3Cmd_CHDRbEVCUCP3Cmd

    Rte_Read_VeCHDR_b_EVCU_CP3Cmd_Value(&tmpRead_3);

    /* Outport: '<Root>/SendCANR_EVCU_CP3Cmd' incorporates:
     *  Inport: '<Root>/VeCHDR_b_EVCU_CP3Cmd'
     */
    Rte_Write_SendCANR_EVCU_CP3Cmd_SendCANR_EVCU_CP3Cmd(tmpRead_3);

    /* Outport: '<Root>/SendCANR_EVCU_CP3CmdVld' */
    Rte_Write_SendCANR_EVCU_CP3CmdVld_SendCANR_EVCU_CP3CmdVld(false);

#endif

    /* End of DataTypeConversion: '<S24>/Data Type Conversion' */

    /* DataTypeConversion: '<S26>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeCHDR_b_EVContactorSts'
     *  Logic: '<S27>/Logical Operator'
     */
#if Rte_SysCon_VrntCT2B_EVContactorSts_CHDRbEVContactorSts

    Rte_Read_VeCHDR_b_EVContactorSts_Value(&tmpRead_4);

    /* Outport: '<Root>/SendCANR_EVContactorSts' incorporates:
     *  Inport: '<Root>/VeCHDR_b_EVContactorSts'
     */
    Rte_Write_SendCANR_EVContactorSts_SendCANR_EVContactorSts(tmpRead_4);

    /* Outport: '<Root>/SendCANR_EVContactorStsVld' */
    Rte_Write_SendCANR_EVContactorStsVld_SendCANR_EVContactorStsVld(false);

#endif

    /* End of DataTypeConversion: '<S26>/Data Type Conversion' */

    /* DataTypeConversion: '<S28>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeCHDR_b_StopReqBeforeChrg'
     *  Logic: '<S29>/Logical Operator'
     */
#if Rte_SysCon_VrntCT2B_StopReqBeforeCharge_CHDRbStopReqBeforeChrg

    Rte_Read_VeCHDR_b_StopReqBeforeChrg_Value(&tmpRead_5);

    /* Outport: '<Root>/SendCANR_StopReqBeforeCharge' incorporates:
     *  Inport: '<Root>/VeCHDR_b_StopReqBeforeChrg'
     */
    Rte_Write_SendCANR_StopReqBeforeCharge_SendCANR_StopReqBeforeCharge
        (tmpRead_5);

    /* Outport: '<Root>/SendCANR_StopReqBeforeChargeVld' */
    
        Rte_Write_SendCANR_StopReqBeforeChargeVld_SendCANR_StopReqBeforeChargeVld
        (false);

#endif

    /* End of DataTypeConversion: '<S28>/Data Type Conversion' */

    /* DataTypeConversion: '<S30>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeBPCR_q_FullAmpHrCap'
     *  Logic: '<S31>/Logical Operator'
     */
#if Rte_SysCon_VrntCT2B_TotalBatteryCapacity_BPCRqFullAmpHrCap

    Rte_Read_VeBPCR_q_FullAmpHrCap_Value(&tmpRead_6);

    /* Outport: '<Root>/SendCANR_TotalBatteryCapacity' incorporates:
     *  Inport: '<Root>/VeBPCR_q_FullAmpHrCap'
     */
    Rte_Write_SendCANR_TotalBatteryCapacity_SendCANR_TotalBatteryCapacity
        (tmpRead_6);

    /* Outport: '<Root>/SendCANR_TotalBatteryCapacityVld' */
    
        Rte_Write_SendCANR_TotalBatteryCapacityVld_SendCANR_TotalBatteryCapacityVld
        (false);

#endif

    /* End of DataTypeConversion: '<S30>/Data Type Conversion' */

    /* DataTypeConversion: '<S32>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeCHDR_b_VehicleDriveSts'
     *  Logic: '<S33>/Logical Operator'
     */
#if Rte_SysCon_VrntCT2B_VehicleDriveSts_CHDRbVehicleDriveSts

    Rte_Read_VeCHDR_b_VehicleDriveSts_Value(&tmpRead_7);

    /* Outport: '<Root>/SendCANR_VehicleDriveSts' incorporates:
     *  Inport: '<Root>/VeCHDR_b_VehicleDriveSts'
     */
    Rte_Write_SendCANR_VehicleDriveSts_SendCANR_VehicleDriveSts(tmpRead_7);

    /* Outport: '<Root>/SendCANR_VehicleDriveStsVld' */
    Rte_Write_SendCANR_VehicleDriveStsVld_SendCANR_VehicleDriveStsVld
        (false);

#endif

    /* End of DataTypeConversion: '<S32>/Data Type Conversion' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeOBCR_e_Service_Category' */
    Rte_Read_VeOBCR_e_Service_Category_Value(&tmpRead_17);

    /* Inport: '<Root>/VeOBCR_K_SelectedServiceID' */
    Rte_Read_VeOBCR_K_SelectedServiceID_Value(&tmpRead_16);

    /* Inport: '<Root>/VeOBCR_e_SelPayOptn' */
    Rte_Read_VeOBCR_e_SelPayOptn_Value(&tmpRead_15);

    /* Inport: '<Root>/VeOBCR_e_SelEnrgyTxType' */
    Rte_Read_VeOBCR_e_SelEnrgyTxType_Value(&tmpRead_14);

    /* Inport: '<Root>/VeOBCR_t_RemTimeToFullSOC' */
    Rte_Read_VeOBCR_t_RemTimeToFullSOC_Value(&tmpRead_13);

    /* Inport: '<Root>/VeOBCR_t_EstTimeDCFastChrg_80' */
    Rte_Read_VeOBCR_t_EstTimeDCFastChrg_80_Value(&tmpRead_12);

    /* Inport: '<Root>/VeOBCR_b_RdyToChrgSt' */
    Rte_Read_VeOBCR_b_RdyToChrgSt_Value(&tmpRead_11);

    /* Inport: '<Root>/VeOBCR_U_EV_DCTargetVolt' */
    Rte_Read_VeOBCR_U_EV_DCTargetVolt_Value(&tmpRead_10);

    /* Inport: '<Root>/VeOBCR_I_ChrgCrntReqDelta' */
    Rte_Read_VeOBCR_I_ChrgCrntReqDelta_Value(&tmpRead_z);

    /* Inport: '<Root>/VeOBCR_b_EVReady' */
    Rte_Read_VeOBCR_b_EVReady_Value(&tmpRead_y);

    /* Inport: '<Root>/VeOBCR_U_EVMax_V_Limit' */
    Rte_Read_VeOBCR_U_EVMax_V_Limit_Value(&tmpRead_x);

    /* Inport: '<Root>/VeOBCR_P_EVMax_P_Limit' */
    Rte_Read_VeOBCR_P_EVMax_P_Limit_Value(&tmpRead_w);

    /* Inport: '<Root>/VeOBCR_I_EVMax_I_Limit' */
    Rte_Read_VeOBCR_I_EVMax_I_Limit_Value(&tmpRead_v);

    /* Inport: '<Root>/VeOBCR_e_HCP_EVErrorCode' */
    Rte_Read_VeOBCR_e_HCP_EVErrorCode_Value(&tmpRead_u);

    /* Inport: '<Root>/VeOBCR_E_EVEnergyRequest' */
    Rte_Read_VeOBCR_E_EVEnergyRequest_Value(&tmpRead_t);

    /* Inport: '<Root>/VeOBCR_E_EVEnergyCapacity' */
    Rte_Read_VeOBCR_E_EVEnergyCapacity_Value(&tmpRead_s);

    /* Inport: '<Root>/VeOBCR_b_ChargingComplete' */
    Rte_Read_VeOBCR_b_ChargingComplete_Value(&tmpRead_r);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Outport: '<Root>/SendCANR_HVCMS_ChrgnCmpl_FD11' incorporates:
     *  DataTypeConversion: '<S61>/Data Type Conversion'
     */

tmpRead_r = SendCANR_HVCMS_ChrgnCmpl_FD11_CT2B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_HVCMS_ChrgnCmpl_FD11_SendCANR_HVCMS_ChrgnCmpl_FD11        (tmpRead_r);

    /* Outport: '<Root>/SendCANR_HVCMS_ChrgnCmpl_FD11Vld' incorporates:
     *  Logic: '<S61>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HVCMS_ChrgnCmpl_FD11Vld_SendCANR_HVCMS_ChrgnCmpl_FD11Vld
        (true);

    /* Outport: '<Root>/SendCANR_HVCMS_EVEgyCap_FD11' incorporates:
     *  DataTypeConversion: '<S62>/Data Type Conversion'
     */

tmpRead_s = SendCANR_HVCMS_EVEgyCap_FD11_CT2B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_HVCMS_EVEgyCap_FD11_SendCANR_HVCMS_EVEgyCap_FD11        (tmpRead_s);

    /* Outport: '<Root>/SendCANR_HVCMS_EVEgyCap_FD11Vld' incorporates:
     *  Logic: '<S62>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HVCMS_EVEgyCap_FD11Vld_SendCANR_HVCMS_EVEgyCap_FD11Vld
        (true);

    /* Outport: '<Root>/SendCANR_HVCMS_EVEgyReq_FD11' incorporates:
     *  DataTypeConversion: '<S63>/Data Type Conversion'
     */

tmpRead_t = SendCANR_HVCMS_EVEgyReq_FD11_CT2B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_HVCMS_EVEgyReq_FD11_SendCANR_HVCMS_EVEgyReq_FD11        (tmpRead_t);

    /* Outport: '<Root>/SendCANR_HVCMS_EVEgyReq_FD11Vld' incorporates:
     *  Logic: '<S63>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HVCMS_EVEgyReq_FD11Vld_SendCANR_HVCMS_EVEgyReq_FD11Vld
        (true);

    /* Outport: '<Root>/SendCANR_HVCMS_EVErrorCode_FD11' incorporates:
     *  DataTypeConversion: '<S64>/Data Type Conversion'
     */
    

tmpRead_u = SendCANR_HVCMS_EVErrorCode_FD11_CT2B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_HVCMS_EVErrorCode_FD11_SendCANR_HVCMS_EVErrorCode_FD11        ((uint8)tmpRead_u);

    /* Outport: '<Root>/SendCANR_HVCMS_EVErrorCode_FD11Vld' incorporates:
     *  Logic: '<S64>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HVCMS_EVErrorCode_FD11Vld_SendCANR_HVCMS_EVErrorCode_FD11Vld
        (true);

    /* Outport: '<Root>/SendCANR_HVCMS_EVMaxILimit_FD11' incorporates:
     *  DataTypeConversion: '<S65>/Data Type Conversion'
     */
    

tmpRead_v = SendCANR_HVCMS_EVMaxILimit_FD11_CT2B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_HVCMS_EVMaxILimit_FD11_SendCANR_HVCMS_EVMaxILimit_FD11        (tmpRead_v);

    /* Outport: '<Root>/SendCANR_HVCMS_EVMaxILimit_FD11Vld' incorporates:
     *  Logic: '<S65>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HVCMS_EVMaxILimit_FD11Vld_SendCANR_HVCMS_EVMaxILimit_FD11Vld
        (true);

    /* Outport: '<Root>/SendCANR_HVCMS_EVMaxPLimit_FD11' incorporates:
     *  DataTypeConversion: '<S66>/Data Type Conversion'
     */
    

tmpRead_w = SendCANR_HVCMS_EVMaxPLimit_FD11_CT2B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_HVCMS_EVMaxPLimit_FD11_SendCANR_HVCMS_EVMaxPLimit_FD11        (tmpRead_w);

    /* Outport: '<Root>/SendCANR_HVCMS_EVMaxPLimit_FD11Vld' incorporates:
     *  Logic: '<S66>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HVCMS_EVMaxPLimit_FD11Vld_SendCANR_HVCMS_EVMaxPLimit_FD11Vld
        (true);

    /* Outport: '<Root>/SendCANR_HVCMSEVMaxVLimit_FD11' incorporates:
     *  DataTypeConversion: '<S67>/Data Type Conversion'
     */
    

tmpRead_x = SendCANR_HVCMSEVMaxVLimit_FD11_CT2B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_HVCMSEVMaxVLimit_FD11_SendCANR_HVCMSEVMaxVLimit_FD11        (tmpRead_x);

    /* Outport: '<Root>/SendCANR_HVCMSEVMaxVLimit_FD11Vld' incorporates:
     *  Logic: '<S67>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HVCMSEVMaxVLimit_FD11Vld_SendCANR_HVCMSEVMaxVLimit_FD11Vld
        (true);

    /* Outport: '<Root>/SendCANR_HVCMS_EVRESS_SOC_FD11' incorporates:
     *  DataTypeConversion: '<S68>/Data Type Conversion'
     */
    

rtb_TmpSignalConversionAtVeHMIR = SendCANR_HVCMS_EVRESS_SOC_FD11_CT2B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_HVCMS_EVRESS_SOC_FD11_SendCANR_HVCMS_EVRESS_SOC_FD11        (rtb_TmpSignalConversionAtVeHMIR);

    /* Outport: '<Root>/SendCANR_HVCMS_EVRESS_SOC_FD11Vld' incorporates:
     *  Logic: '<S68>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HVCMS_EVRESS_SOC_FD11Vld_SendCANR_HVCMS_EVRESS_SOC_FD11Vld
        (true);

    /* Outport: '<Root>/SendCANR_HVCMS_EVReady_FD11' incorporates:
     *  DataTypeConversion: '<S69>/Data Type Conversion'
     */

tmpRead_y = SendCANR_HVCMS_EVReady_FD11_CT2B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_HVCMS_EVReady_FD11_SendCANR_HVCMS_EVReady_FD11        (tmpRead_y);

    /* Outport: '<Root>/SendCANR_HVCMS_EVReady_FD11Vld' incorporates:
     *  Logic: '<S69>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HVCMS_EVReady_FD11Vld_SendCANR_HVCMS_EVReady_FD11Vld
        (true);

    /* Outport: '<Root>/SendCANR_HVCMS_EVTarCurr_FD11' incorporates:
     *  DataTypeConversion: '<S70>/Data Type Conversion'
     */

tmpRead_z = SendCANR_HVCMS_EVTarCurr_FD11_CT2B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_HVCMS_EVTarCurr_FD11_SendCANR_HVCMS_EVTarCurr_FD11        (tmpRead_z);

    /* Outport: '<Root>/SendCANR_HVCMS_EVTarCurr_FD11Vld' incorporates:
     *  Logic: '<S70>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HVCMS_EVTarCurr_FD11Vld_SendCANR_HVCMS_EVTarCurr_FD11Vld
        (true);

    /* Outport: '<Root>/SendCANR_HVCMS_EVTarVolt_FD11' incorporates:
     *  DataTypeConversion: '<S71>/Data Type Conversion'
     */

tmpRead_10 = SendCANR_HVCMS_EVTarVolt_FD11_CT2B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_HVCMS_EVTarVolt_FD11_SendCANR_HVCMS_EVTarVolt_FD11        (tmpRead_10);

    /* Outport: '<Root>/SendCANR_HVCMS_EVTarVolt_FD11Vld' incorporates:
     *  Logic: '<S71>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HVCMS_EVTarVolt_FD11Vld_SendCANR_HVCMS_EVTarVolt_FD11Vld
        (true);

    /* Outport: '<Root>/SendCANR_HVCMS_RdyToChrgSt_FD11' incorporates:
     *  DataTypeConversion: '<S72>/Data Type Conversion'
     */
    

tmpRead_11 = SendCANR_HVCMS_RdyToChrgSt_FD11_CT2B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_HVCMS_RdyToChrgSt_FD11_SendCANR_HVCMS_RdyToChrgSt_FD11        (tmpRead_11);

    /* Outport: '<Root>/SendCANR_HVCMS_RdyToChrgSt_FD11Vld' incorporates:
     *  Logic: '<S72>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HVCMS_RdyToChrgSt_FD11Vld_SendCANR_HVCMS_RdyToChrgSt_FD11Vld
        (true);

    /* DataTypeConversion: '<S73>/Data Type Conversion' */
    tmpRead_1 = fmodf(floorf(tmpRead_12), 65536.0F);

    /* Outport: '<Root>/SendCANR_HVCMS_RmnTiToBuSOCFD11' incorporates:
     *  DataTypeConversion: '<S73>/Data Type Conversion'
     */
    

((sint32 = SendCANR_HVCMS_RmnTiToBuSOCFD11_CT2B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_HVCMS_RmnTiToBuSOCFD11_SendCANR_HVCMS_RmnTiToBuSOCFD11        ((uint16)((sint32)((tmpRead_1 < 0.0F) ? ((sint32)((uint16)((sint32)
              (-((sint32)((sint16)((uint16)((float32)(-tmpRead_1))))))))) :
                           ((sint32)((uint16)tmpRead_1)))));

    /* Outport: '<Root>/SendCANR_HVCMS_RmnTiToBuSOCFD11Vld' incorporates:
     *  Logic: '<S73>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HVCMS_RmnTiToBuSOCFD11Vld_SendCANR_HVCMS_RmnTiToBuSOCFD11Vld
        (true);

    /* Outport: '<Root>/SendCANR_HVCMS_RmnTiToFuSOCFD11' incorporates:
     *  DataTypeConversion: '<S74>/Data Type Conversion'
     */
    

tmpRead_13 = SendCANR_HVCMS_RmnTiToFuSOCFD11_CT2B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_HVCMS_RmnTiToFuSOCFD11_SendCANR_HVCMS_RmnTiToFuSOCFD11        (tmpRead_13);

    /* Outport: '<Root>/SendCANR_HVCMS_RmnTiToFuSOCFD11Vld' incorporates:
     *  Logic: '<S74>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HVCMS_RmnTiToFuSOCFD11Vld_SendCANR_HVCMS_RmnTiToFuSOCFD11Vld
        (true);

    /* Outport: '<Root>/SendCANR_HVCMS_SelEgyTrfTypFD11' incorporates:
     *  DataTypeConversion: '<S75>/Data Type Conversion'
     */
    

tmpRead_14 = SendCANR_HVCMS_SelEgyTrfTypFD11_CT2B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_HVCMS_SelEgyTrfTypFD11_SendCANR_HVCMS_SelEgyTrfTypFD11        ((uint8)tmpRead_14);

    /* Outport: '<Root>/SendCANR_HVCMS_SelEgyTrfTypFD11Vld' incorporates:
     *  Logic: '<S75>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HVCMS_SelEgyTrfTypFD11Vld_SendCANR_HVCMS_SelEgyTrfTypFD11Vld
        (true);

    /* Outport: '<Root>/SendCANR_HVCMS_SelPmtOptn_FD11' incorporates:
     *  DataTypeConversion: '<S76>/Data Type Conversion'
     *  Inport: '<Root>/VeOBCR_e_SelPayOptn'
     */
    

tmpRead_15 = SendCANR_HVCMS_SelPmtOptn_FD11_CT2B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_HVCMS_SelPmtOptn_FD11_SendCANR_HVCMS_SelPmtOptn_FD11        ((uint8)tmpRead_15);

    /* Outport: '<Root>/SendCANR_HVCMS_SelPmtOptn_FD11Vld' incorporates:
     *  Logic: '<S76>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HVCMS_SelPmtOptn_FD11Vld_SendCANR_HVCMS_SelPmtOptn_FD11Vld
        (true);

    /* Outport: '<Root>/SendCANR_HVCMS_SelServId_FD11' incorporates:
     *  DataTypeConversion: '<S77>/Data Type Conversion'
     */

tmpRead_16 = SendCANR_HVCMS_SelServId_FD11_CT2B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_HVCMS_SelServId_FD11_SendCANR_HVCMS_SelServId_FD11        (tmpRead_16);

    /* Outport: '<Root>/SendCANR_HVCMS_SelServId_FD11Vld' incorporates:
     *  Logic: '<S77>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HVCMS_SelServId_FD11Vld_SendCANR_HVCMS_SelServId_FD11Vld
        (true);

    /* Outport: '<Root>/SendCANR_HVCMS_ServCtgy_FD11' incorporates:
     *  DataTypeConversion: '<S78>/Data Type Conversion'
     */

tmpRead_17 = SendCANR_HVCMS_ServCtgy_FD11_CT2B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_HVCMS_ServCtgy_FD11_SendCANR_HVCMS_ServCtgy_FD11        ((uint8)tmpRead_17);

    /* Outport: '<Root>/SendCANR_HVCMS_ServCtgy_FD11Vld' incorporates:
     *  Logic: '<S78>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HVCMS_ServCtgy_FD11Vld_SendCANR_HVCMS_ServCtgy_FD11Vld
        (true);

    /* DataTypeConversion: '<S59>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeOBCR_d_ServiceScope'
     *  Logic: '<S60>/Logical Operator'
     */
#if Rte_SysCon_VrntCT2B_HVCMSServiceScope_OBCRdServiceScope

    Rte_Read_VeOBCR_d_ServiceScope_Value(&tmpRead_18);

    /* Outport: '<Root>/SendCANR_HVCMS_ServScope_FD11' incorporates:
     *  Inport: '<Root>/VeOBCR_d_ServiceScope'
     */
    Rte_Write_SendCANR_HVCMS_ServScope_FD11_SendCANR_HVCMS_ServScope_FD11
        (tmpRead_18);

    /* Outport: '<Root>/SendCANR_HVCMS_ServScope_FD11Vld' */
    
        Rte_Write_SendCANR_HVCMS_ServScope_FD11Vld_SendCANR_HVCMS_ServScope_FD11Vld
        (false);

#endif

    /* End of DataTypeConversion: '<S59>/Data Type Conversion' */

    /* DataTypeConversion: '<S79>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeVTHR_b_V2H_SelEnergyTransType'
     *  Logic: '<S80>/Logical Operator'
     */
#if Rte_SysCon_VrntCT2B_V2XHVCMSSlctdEnergyTransfType_VTHRbV2HSelEnergyTransTy

    Rte_Read_VeVTHR_b_V2H_SelEnergyTransType_Value(&tmpRead_19);

    /* Outport: '<Root>/SendCANR_V2X_HVCMSSltdEngTrfTyp' incorporates:
     *  Inport: '<Root>/VeVTHR_b_V2H_SelEnergyTransType'
     */
    
        Rte_Write_SendCANR_V2X_HVCMSSltdEngTrfTyp_SendCANR_V2X_HVCMSSltdEngTrfTyp
        (tmpRead_19);

    /* Outport: '<Root>/SendCANR_V2X_HVCMSSltdEngTrfTypVld' */
    
        Rte_Write_SendCANR_V2X_HVCMSSltdEngTrfTypVld_SendCANR_V2X_HVCMSSltdEngTrfTypVld
        (false);

#endif

    /* End of DataTypeConversion: '<S79>/Data Type Conversion' */

    /* DataTypeConversion: '<S81>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeVTHR_Pct_V2H_BattBulkSOC'
     *  Logic: '<S82>/Logical Operator'
     */
#if Rte_SysCon_VrntCT2B_VDCMBattBulkSOC_IDCRPctBattBulkSOC

    Rte_Read_VeVTHR_Pct_V2H_BattBulkSOC_Value(&tmpRead_1a);

    /* Outport: '<Root>/SendCANR_VDCM_BattBulkSOC_FD11' incorporates:
     *  Inport: '<Root>/VeVTHR_Pct_V2H_BattBulkSOC'
     */
    
        Rte_Write_SendCANR_VDCM_BattBulkSOC_FD11_SendCANR_VDCM_BattBulkSOC_FD11
        (tmpRead_1a);

    /* Outport: '<Root>/SendCANR_VDCM_BattBulkSOC_FD11Vld' */
    
        Rte_Write_SendCANR_VDCM_BattBulkSOC_FD11Vld_SendCANR_VDCM_BattBulkSOC_FD11Vld
        (false);

#endif

    /* End of DataTypeConversion: '<S81>/Data Type Conversion' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeVTLR_e_DschrgSysSts' */
    Rte_Read_VeVTLR_e_DschrgSysSts_Value(&tmpRead_8);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Outport: '<Root>/SendCANR_DischrgngSysStatusFD11' incorporates:
     *  DataTypeConversion: '<S34>/Data Type Conversion'
     *  Inport: '<Root>/VeVTLR_e_DschrgSysSts'
     */
    

tmpRead_8 = SendCANR_DischrgngSysStatusFD11_CT2B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_DischrgngSysStatusFD11_SendCANR_DischrgngSysStatusFD11        ((uint8)tmpRead_8);

    /* Outport: '<Root>/SendCANR_DischrgngSysStatusFD11Vld' incorporates:
     *  Logic: '<S34>/Logical Operator'
     */
    
        Rte_Write_SendCANR_DischrgngSysStatusFD11Vld_SendCANR_DischrgngSysStatusFD11Vld
        (true);

    /* DataTypeConversion: '<S35>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeVDVR_I_MaxAlwdACOutCurr'
     *  Logic: '<S36>/Logical Operator'
     */
#if Rte_SysCon_VrntCT2B_MaxAllwdACOutputCurrentL1_VDVRIMaxAlwdACOutCurr

    Rte_Read_VeVDVR_I_MaxAlwdACOutCurr_Value(&tmpRead_9);

    /* Outport: '<Root>/SendCANR_Max_AllwdACOutputCurL1' incorporates:
     *  Inport: '<Root>/VeVDVR_I_MaxAlwdACOutCurr'
     */
    
        Rte_Write_SendCANR_Max_AllwdACOutputCurL1_SendCANR_Max_AllwdACOutputCurL1
        (tmpRead_9);

    /* Outport: '<Root>/SendCANR_Max_AllwdACOutputCurL1Vld' */
    
        Rte_Write_SendCANR_Max_AllwdACOutputCurL1Vld_SendCANR_Max_AllwdACOutputCurL1Vld
        (false);

#endif

    /* End of DataTypeConversion: '<S35>/Data Type Conversion' */

    /* DataTypeConversion: '<S37>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeVDVR_U_MaxAlwdACOutVolt'
     *  Logic: '<S38>/Logical Operator'
     */
#if Rte_SysCon_VrntCT2B_MaxAllwdACOutputVoltageL1_VDVRUMaxAlwdACOutVolt

    Rte_Read_VeVDVR_U_MaxAlwdACOutVolt_Value(&tmpRead_a);

    /* Outport: '<Root>/SendCANR_Max_AllwdACOutputVltL1' incorporates:
     *  Inport: '<Root>/VeVDVR_U_MaxAlwdACOutVolt'
     */
    
        Rte_Write_SendCANR_Max_AllwdACOutputVltL1_SendCANR_Max_AllwdACOutputVltL1
        (tmpRead_a);

    /* Outport: '<Root>/SendCANR_Max_AllwdACOutputVltL1Vld' */
    
        Rte_Write_SendCANR_Max_AllwdACOutputVltL1Vld_SendCANR_Max_AllwdACOutputVltL1Vld
        (false);

#endif

    /* End of DataTypeConversion: '<S37>/Data Type Conversion' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeTRGR_e_CurrentGear' */
    Rte_Read_VeTRGR_e_CurrentGear_Value(&tmpRead_q);

    /* Inport: '<Root>/VeHMIR_b_DriveReady' */
    Rte_Read_VeHMIR_b_DriveReady_Value(&tmpRead_p);

    /* Inport: '<Root>/VeIMPR_b_ImpactToggleCAN' */
    Rte_Read_VeIMPR_b_ImpactToggleCAN_Value(&tmpRead_f);

    /* Inport: '<Root>/VeIMPR_b_ImpactDetectedCAN' */
    Rte_Read_VeIMPR_b_ImpactDetectedCAN_Value(&tmpRead_e);

    /* Inport: '<Root>/VeSSDR_t_WU_TimerValue' */
    Rte_Read_VeSSDR_t_WU_TimerValue_Value(&tmpRead_d);

    /* Inport: '<Root>/VeSSDR_k_DiagPerWakeUp' */
    Rte_Read_VeSSDR_k_DiagPerWakeUp_Value(&tmpRead_c);

    /* Inport: '<Root>/VeHMIR_e_DriveMdstat' */
    Rte_Read_VeHMIR_e_DriveMdstat_Value(&tmpRead_b);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Outport: '<Root>/SendCANR_HybridDriveModeSts' incorporates:
     *  DataTypeConversion: '<S39>/Data Type Conversion'
     */

tmpRead_b = SendCANR_HybridDriveModeSts_CT2B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_HybridDriveModeSts_SendCANR_HybridDriveModeSts        ((uint8)tmpRead_b);

    /* Outport: '<Root>/SendCANR_HybridDriveModeStsVld' incorporates:
     *  Logic: '<S39>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HybridDriveModeStsVld_SendCANR_HybridDriveModeStsVld
        (true);

    /* Outport: '<Root>/SendCANR_PerWakeUp_Diag_FD11' incorporates:
     *  DataTypeConversion: '<S40>/Data Type Conversion'
     */

tmpRead_c = SendCANR_PerWakeUp_Diag_FD11_CT2B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_PerWakeUp_Diag_FD11_SendCANR_PerWakeUp_Diag_FD11        (tmpRead_c);

    /* Outport: '<Root>/SendCANR_PerWakeUp_Diag_FD11Vld' incorporates:
     *  Logic: '<S40>/Logical Operator'
     */
    
        Rte_Write_SendCANR_PerWakeUp_Diag_FD11Vld_SendCANR_PerWakeUp_Diag_FD11Vld
        (true);

    /* SignalConversion generated from: '<S2>/VeHPMR_b_PropSysActv' incorporates:
     *  Inport: '<Root>/VeHPMR_b_PropSysActv'
     */
    Rte_Read_VeHPMR_b_PropSysActv_Value(&rtb_TmpSignalConversionAtVeHPMR);

    /* Outport: '<Root>/SendCANR_PrplsnSysActive_10B' incorporates:
     *  DataTypeConversion: '<S41>/Data Type Conversion'
     */

rtb_TmpSignalConversionAtVeHPMR = SendCANR_PrplsnSysActive_10B_CT2B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_PrplsnSysActive_10B_SendCANR_PrplsnSysActive_10B        (rtb_TmpSignalConversionAtVeHPMR);

    /* Outport: '<Root>/SendCANR_PrplsnSysActive_10B_Vld' incorporates:
     *  Logic: '<S41>/Logical Operator'
     */
    
        Rte_Write_SendCANR_PrplsnSysActive_10B_Vld_SendCANR_PrplsnSysActive_10B_Vld
        (true);

    /* Outport: '<Root>/SendCANR_WU_Timer_Value_FD11' incorporates:
     *  DataTypeConversion: '<S42>/Data Type Conversion'
     */

tmpRead_d = SendCANR_WU_Timer_Value_FD11_CT2B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_WU_Timer_Value_FD11_SendCANR_WU_Timer_Value_FD11        ((float32)tmpRead_d);

    /* Outport: '<Root>/SendCANR_WU_Timer_Value_FD11Vld' incorporates:
     *  Logic: '<S42>/Logical Operator'
     */
    
        Rte_Write_SendCANR_WU_Timer_Value_FD11Vld_SendCANR_WU_Timer_Value_FD11Vld
        (true);

    /* Outport: '<Root>/SendCANR_DriveReady_PT_FD11' incorporates:
     *  DataTypeConversion: '<S54>/Data Type Conversion'
     */

tmpRead_p = SendCANR_DriveReady_PT_FD11_CT2B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_DriveReady_PT_FD11_SendCANR_DriveReady_PT_FD11        (tmpRead_p);

    /* Outport: '<Root>/SendCANR_DriveReady_PT_FD11Vld' incorporates:
     *  Logic: '<S54>/Logical Operator'
     */
    
        Rte_Write_SendCANR_DriveReady_PT_FD11Vld_SendCANR_DriveReady_PT_FD11Vld
        (true);

    /* SignalConversion generated from: '<S2>/VeTRGR_e_CurrentGrForDisp' incorporates:
     *  Inport: '<Root>/VeTRGR_e_CurrentGrForDisp'
     */
    Rte_Read_VeTRGR_e_CurrentGrForDisp_Value
        (&rtb_TmpSignalConversionAtVeTRGR);

    /* Outport: '<Root>/SendCANR_GearEngdForDispPTFD11' incorporates:
     *  DataTypeConversion: '<S55>/Data Type Conversion'
     */
    

rtb_TmpSignalConversionAtVeTRGR = SendCANR_GearEngdForDispPTFD11_CT2B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_GearEngdForDispPTFD11_SendCANR_GearEngdForDispPTFD11        ((uint8)rtb_TmpSignalConversionAtVeTRGR);

    /* Outport: '<Root>/SendCANR_GearEngdForDispPTFD11Vld' incorporates:
     *  Logic: '<S55>/Logical Operator'
     */
    
        Rte_Write_SendCANR_GearEngdForDispPTFD11Vld_SendCANR_GearEngdForDispPTFD11Vld
        (true);

    /* Outport: '<Root>/SendCANR_GearEngaged_PT_FD11' incorporates:
     *  DataTypeConversion: '<S56>/Data Type Conversion'
     */

tmpRead_q = SendCANR_GearEngaged_PT_FD11_CT2B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_GearEngaged_PT_FD11_SendCANR_GearEngaged_PT_FD11        ((uint8)tmpRead_q);

    /* Outport: '<Root>/SendCANR_GearEngaged_PT_FD11Vld' incorporates:
     *  Logic: '<S56>/Logical Operator'
     */
    
        Rte_Write_SendCANR_GearEngaged_PT_FD11Vld_SendCANR_GearEngaged_PT_FD11Vld
        (true);

    /* Outport: '<Root>/SendCANR_PtrainPrplsnActvPTFD11' incorporates:
     *  DataTypeConversion: '<S57>/Data Type Conversion'
     */
    

rtb_TmpSignalConversionAtVeHPMR = SendCANR_PtrainPrplsnActvPTFD11_CT2B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_PtrainPrplsnActvPTFD11_SendCANR_PtrainPrplsnActvPTFD11        (rtb_TmpSignalConversionAtVeHPMR);

    /* Outport: '<Root>/SendCANR_PtrainPrplsnActvPTFD11Vld' incorporates:
     *  Logic: '<S57>/Logical Operator'
     */
    
        Rte_Write_SendCANR_PtrainPrplsnActvPTFD11Vld_SendCANR_PtrainPrplsnActvPTFD11Vld
        (true);

    /* Outport: '<Root>/SendCANR_GearEngagedForDisplay' incorporates:
     *  DataTypeConversion: '<S58>/Data Type Conversion'
     */
    

rtb_TmpSignalConversionAtVeTRGR = SendCANR_GearEngagedForDisplay_CT2B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_GearEngagedForDisplay_SendCANR_GearEngagedForDisplay        ((uint8)rtb_TmpSignalConversionAtVeTRGR);

    /* Outport: '<Root>/SendCANR_GearEngagedForDisplayVld' incorporates:
     *  Logic: '<S58>/Logical Operator'
     */
    
        Rte_Write_SendCANR_GearEngagedForDisplayVld_SendCANR_GearEngagedForDisplayVld
        (true);

    /* Outport: '<Root>/SendCANR_IMPACTCommand_FD11' incorporates:
     *  DataTypeConversion: '<S43>/Data Type Conversion'
     */

tmpRead_e = SendCANR_IMPACTCommand_FD11_CT2B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_IMPACTCommand_FD11_SendCANR_IMPACTCommand_FD11        (tmpRead_e);

    /* Outport: '<Root>/SendCANR_IMPACTCommand_FD11Vld' incorporates:
     *  Logic: '<S43>/Logical Operator'
     */
    
        Rte_Write_SendCANR_IMPACTCommand_FD11Vld_SendCANR_IMPACTCommand_FD11Vld
        (true);

    /* Outport: '<Root>/SendCANR_IMPACTConfirm_FD11' incorporates:
     *  DataTypeConversion: '<S44>/Data Type Conversion'
     */

tmpRead_f = SendCANR_IMPACTConfirm_FD11_CT2B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_IMPACTConfirm_FD11_SendCANR_IMPACTConfirm_FD11        (tmpRead_f);

    /* Outport: '<Root>/SendCANR_IMPACTConfirm_FD11Vld' incorporates:
     *  Logic: '<S44>/Logical Operator'
     */
    
        Rte_Write_SendCANR_IMPACTConfirm_FD11Vld_SendCANR_IMPACTConfirm_FD11Vld
        (true);

    /* DataTypeConversion: '<S45>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeINVR_T_MtrA_Temp'
     */
#if Rte_SysCon_VrntCT2B_MCPATemp_INVRTMtrATemp

    Rte_Read_VeINVR_T_MtrA_Temp_Value(&tmpRead_g);

    /* Outport: '<Root>/SendCANR_MCPA_Temp_FD11' incorporates:
     *  Inport: '<Root>/VeINVR_T_MtrA_Temp'
     */

tmpRead_g = SendCANR_MCPA_Temp_FD11_CT2B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_MCPA_Temp_FD11_SendCANR_MCPA_Temp_FD11(tmpRead_g);

#endif

    /* End of DataTypeConversion: '<S45>/Data Type Conversion' */

    /* DataTypeConversion: '<S47>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeINVR_T_MtrC_Temp'
     */
#if Rte_SysCon_VrntCT2B_MCPATemp_INVRTMtrCTemp

    Rte_Read_VeINVR_T_MtrC_Temp_Value(&tmpRead_h);

    /* Outport: '<Root>/SendCANR_MCPA_Temp_FD11' incorporates:
     *  Inport: '<Root>/VeINVR_T_MtrC_Temp'
     */

tmpRead_h = SendCANR_MCPA_Temp_FD11_CT2B_FUNC_ac_Test_2;
    Rte_Write_SendCANR_MCPA_Temp_FD11_SendCANR_MCPA_Temp_FD11(tmpRead_h);

#endif

    /* End of DataTypeConversion: '<S47>/Data Type Conversion' */

    /* Logic: '<S46>/Logical Operator' incorporates:
     *  Inport: '<Root>/VeINVR_b_MtrA_TempFA'
     */
#if Rte_SysCon_VrntCT2B_MCPATemp_INVRTMtrATemp

    Rte_Read_VeINVR_b_MtrA_TempFA_Value(&tmpRead_i);

    /* Outport: '<Root>/SendCANR_MCPA_Temp_FD11Vld' incorporates:
     *  Inport: '<Root>/VeINVR_b_MtrA_TempFA'
     */
    Rte_Write_SendCANR_MCPA_Temp_FD11Vld_SendCANR_MCPA_Temp_FD11Vld
        (!tmpRead_i);

#endif

    /* End of Logic: '<S46>/Logical Operator' */

    /* Logic: '<S48>/Logical Operator' incorporates:
     *  Inport: '<Root>/VeINVR_b_MtrC_TempFA'
     */
#if Rte_SysCon_VrntCT2B_MCPATemp_INVRTMtrCTemp

    Rte_Read_VeINVR_b_MtrC_TempFA_Value(&tmpRead_j);

    /* Outport: '<Root>/SendCANR_MCPA_Temp_FD11Vld' incorporates:
     *  Inport: '<Root>/VeINVR_b_MtrC_TempFA'
     */
    Rte_Write_SendCANR_MCPA_Temp_FD11Vld_SendCANR_MCPA_Temp_FD11Vld
        (!tmpRead_j);

#endif

    /* End of Logic: '<S48>/Logical Operator' */

    /* DataTypeConversion: '<S49>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeINVR_I_MtrA_DC_Crnt'
     */
#if Rte_SysCon_VrntCT2B_MCPADCCurrentP_INVRIMtrADCCrnt

    Rte_Read_VeINVR_I_MtrA_DC_Crnt_Value(&tmpRead_k);

    /* Outport: '<Root>/SendCANR_MCPA_DC_Current_P_FD11' incorporates:
     *  Inport: '<Root>/VeINVR_I_MtrA_DC_Crnt'
     */
    

tmpRead_k = SendCANR_MCPA_DC_Current_P_FD11_CT2B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_MCPA_DC_Current_P_FD11_SendCANR_MCPA_DC_Current_P_FD11        (tmpRead_k);

#endif

    /* End of DataTypeConversion: '<S49>/Data Type Conversion' */

    /* DataTypeConversion: '<S50>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeINVR_I_MtrC_DC_Crnt'
     *  Logic: '<S51>/Logical Operator'
     */
#if Rte_SysCon_VrntCT2B_MCPADCCurrentP_INVRIMtrCDCCrnt

    Rte_Read_VeINVR_I_MtrC_DC_Crnt_Value(&tmpRead_l);

    /* Outport: '<Root>/SendCANR_MCPA_DC_Current_P_FD11' incorporates:
     *  Inport: '<Root>/VeINVR_I_MtrC_DC_Crnt'
     */
    

tmpRead_l = SendCANR_MCPA_DC_Current_P_FD11_CT2B_FUNC_ac_Test_2;
        Rte_Write_SendCANR_MCPA_DC_Current_P_FD11_SendCANR_MCPA_DC_Current_P_FD11        (tmpRead_l);

    /* Outport: '<Root>/SendCANR_MCPA_DC_Current_P_FD11Vld' */
    
        Rte_Write_SendCANR_MCPA_DC_Current_P_FD11Vld_SendCANR_MCPA_DC_Current_P_FD11Vld
        (false);

#endif

    /* End of DataTypeConversion: '<S50>/Data Type Conversion' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeINVR_I_MtrB_DC_Crnt' */
    Rte_Read_VeINVR_I_MtrB_DC_Crnt_Value(&tmpRead_o);

    /* Inport: '<Root>/VeINVR_b_MtrB_TempFA' */
    Rte_Read_VeINVR_b_MtrB_TempFA_Value(&tmpRead_n);

    /* Inport: '<Root>/VeINVR_T_MtrB_Temp' */
    Rte_Read_VeINVR_T_MtrB_Temp_Value(&tmpRead_m);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Outport: '<Root>/SendCANR_MCPB_Temp_FD11' incorporates:
     *  DataTypeConversion: '<S52>/Data Type Conversion'
     */

tmpRead_m = SendCANR_MCPB_Temp_FD11_CT2B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_MCPB_Temp_FD11_SendCANR_MCPB_Temp_FD11(tmpRead_m);

    /* Outport: '<Root>/SendCANR_MCPB_Temp_FD11Vld' incorporates:
     *  Logic: '<S52>/Logical Operator'
     */
    Rte_Write_SendCANR_MCPB_Temp_FD11Vld_SendCANR_MCPB_Temp_FD11Vld
        (!tmpRead_n);

    /* Outport: '<Root>/SendCANR_MCPB_DC_Current_P_FD11' incorporates:
     *  DataTypeConversion: '<S53>/Data Type Conversion'
     */
    

tmpRead_o = SendCANR_MCPB_DC_Current_P_FD11_CT2B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_MCPB_DC_Current_P_FD11_SendCANR_MCPB_DC_Current_P_FD11        (tmpRead_o);

    /* Outport: '<Root>/SendCANR_MCPB_DC_Current_P_FD11Vld' incorporates:
     *  Logic: '<S53>/Logical Operator'
     */
    
        Rte_Write_SendCANR_MCPB_DC_Current_P_FD11Vld_SendCANR_MCPB_DC_Current_P_FD11Vld
        (true);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
}

/* Model initialize function */
FUNC(void, CT2B_FUNC_CODE) CT2B_FUNC_ac_Init
{
    /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
