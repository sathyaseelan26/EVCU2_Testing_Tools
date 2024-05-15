/*
 * File: CT5B_FUNC_ac.c
 *
 * Code generated for Simulink model 'CT5B_FUNC_ac'.
 *
 * Model version                  : 1.53
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 09:34:33 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CT5B_FUNC_ac.h"



uint8 SendCANR_HVCMSSlfEnrgTrnfTypFD5_CT5B_FUNC_ac_Test_1;
boolean SendCANR_HVCMSReadyToChgStatFD5_CT5B_FUNC_ac_Test_1;
boolean SendCANR_IMPACTConfirm_FD5_CT5B_FUNC_ac_Test_1;
float32 SendCANR_HVCMS_EVTargetVoltFD5_CT5B_FUNC_ac_Test_1;
uint16 SendCANR_HVCMSRemTimToBlkSOCFD5_CT5B_FUNC_ac_Test_1;
float32 SendCANR_HVCMS_EVRESS_SOC_FD5_CT5B_FUNC_ac_Test_1;
float32 SendCANR_EOPA_OIL_TEMP_FD5_CT5B_FUNC_ac_Test_1;
uint16 SendCANR_PerWakeUp_Diag_FD5_CT5B_FUNC_ac_Test_1;
boolean SendCANR_T7_CoolantTmpVldty_FD5_CT5B_FUNC_ac_Test_1;
float32 SendCANR_HVCMS_EVEnrgCapctFD5_CT5B_FUNC_ac_Test_1;
float32 SendCANR_EVMaxCurrent_FD5_CT5B_FUNC_ac_Test_1;
float32 SendCANR_EVMaxVoltage_FD5_CT5B_FUNC_ac_Test_1;
float32 SendCANR_T7_Sensor_Temp_FD5_CT5B_FUNC_ac_Test_1;
float32 SendCANR_EOPB_OIL_TEMP_FD5_CT5B_FUNC_ac_Test_1;
float32 SendCANR_HVCMS_EVTargetCurntFD5_CT5B_FUNC_ac_Test_1;
uint16 SendCANR_HVCMSSelectedServIdFD5_CT5B_FUNC_ac_Test_1;
float32 SendCANR_WU_Timer_Value_FD5_CT5B_FUNC_ac_Test_1;
boolean SendCANR_IMPACTCommand_FD5_CT5B_FUNC_ac_Test_1;
uint8 SendCANR_HVCMSServiceCatgoryFD5_CT5B_FUNC_ac_Test_1;
boolean SendCANR_HVCMS_ChrgnCompltFD5_CT5B_FUNC_ac_Test_1;
float32 SendCANR_HVCMS_EVEnergRquestFD5_CT5B_FUNC_ac_Test_1;
float32 SendCANR_T4_Sensor_Temp_FD5_CT5B_FUNC_ac_Test_1;
float32 SendCANR_HVCMSRemTimToFulSOCFD5_CT5B_FUNC_ac_Test_1;
boolean SendCANR_HVCMS_EVReady_FD5_CT5B_FUNC_ac_Test_1;
uint8 SendCANR_HVCMS_SeldPymntOptnFD5_CT5B_FUNC_ac_Test_1;
float32 SendCANR_HVCMS_EVMax_V_LimitFD5_CT5B_FUNC_ac_Test_1;
uint8 SendCANR_HVCMS_EVErrorCode_FD5_CT5B_FUNC_ac_Test_1;
float32 SendCANR_EOPB_OIL_FlwRate_FD5_CT5B_FUNC_ac_Test_1;
float32 SendCANR_EOPA_OIL_FlwRate_FD5_CT5B_FUNC_ac_Test_1;
float32 SendCANR_HVCMS_EVMax_P_LimitFD5_CT5B_FUNC_ac_Test_1;
float32 SendCANR_HVCMS_EVMax_I_LimitFD5_CT5B_FUNC_ac_Test_1;

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Model step function for TID1 */
FUNC(void, CT5B_FUNC_CODE) CT5B_FUNC_FastTEF /* Explicit Task: FastTEF */
{
    float32 tmpRead_1;
    float32 tmpRead_3;
    float32 tmpRead_5;
    float32 tmpRead_7;
    float32 tmpRead_c;
    float32 tmpRead_d;
    float32 tmpRead_f;
    float32 tmpRead_g;
    float32 tmpRead_i;
    float32 tmpRead_j;
    float32 tmpRead_l;
    float32 tmpRead_m;
    sint16 tmpRead_e;
    sint16 tmpRead_n;
    sint16 tmpRead_q;
    uint16 tmpRead;
    uint16 tmpRead_0;
    uint16 tmpRead_p;
    TeOBCR_e_HVCM_SelPaymentOptn tmpRead_o;
    boolean tmpRead_2;
    boolean tmpRead_4;
    boolean tmpRead_6;
    boolean tmpRead_8;
    boolean tmpRead_9;
    boolean tmpRead_a;
    boolean tmpRead_b;
    boolean tmpRead_h;
    boolean tmpRead_k;

#if Rte_SysCon_VrntCT5B_HVCMSServiceScope_OBCRdServiceScope

    uint16 tmpRead_r;

#endif

#if Rte_SysCon_VrntCT5B_VDCMBattBulkSOC_IDCRPctBattBulkSOC

    float32 tmpRead_s;

#endif

    float32 rtb_TmpSignalConversionAtVeOBCR;
    float32 rtb_TmpSignalConversionAtVeOB_o;
    float32 tmpRead_t;
    float32 tmpRead_v;
    boolean rtb_TmpSignalConversionAtVeTMIR;
    boolean tmpRead_u;

    /* Inport: '<Root>/VeOBCR_e_Service_Category' */
    Rte_Read_VeOBCR_e_Service_Category_Value(&tmpRead_q);

    /* Inport: '<Root>/VeOBCR_K_SelectedServiceID' */
    Rte_Read_VeOBCR_K_SelectedServiceID_Value(&tmpRead_p);

    /* Inport: '<Root>/VeOBCR_e_SelPayOptn' */
    Rte_Read_VeOBCR_e_SelPayOptn_Value(&tmpRead_o);

    /* Inport: '<Root>/VeOBCR_e_SelEnrgyTxType' */
    Rte_Read_VeOBCR_e_SelEnrgyTxType_Value(&tmpRead_n);

    /* Inport: '<Root>/VeOBCR_t_RemTimeToFullSOC' */
    Rte_Read_VeOBCR_t_RemTimeToFullSOC_Value(&tmpRead_m);

    /* Inport: '<Root>/VeOBCR_t_EstTimeDCFastChrg_80' */
    Rte_Read_VeOBCR_t_EstTimeDCFastChrg_80_Value(&tmpRead_l);

    /* Inport: '<Root>/VeOBCR_b_RdyToChrgSt' */
    Rte_Read_VeOBCR_b_RdyToChrgSt_Value(&tmpRead_k);

    /* Inport: '<Root>/VeOBCR_U_EV_DCTargetVolt' */
    Rte_Read_VeOBCR_U_EV_DCTargetVolt_Value(&tmpRead_j);

    /* Inport: '<Root>/VeOBCR_I_ChrgCrntReqDelta' */
    Rte_Read_VeOBCR_I_ChrgCrntReqDelta_Value(&tmpRead_i);

    /* Inport: '<Root>/VeOBCR_b_EVReady' */
    Rte_Read_VeOBCR_b_EVReady_Value(&tmpRead_h);

    /* Inport: '<Root>/VeHMIR_Pct_HVBatSOC_HCP' */
    Rte_Read_VeHMIR_Pct_HVBatSOC_HCP_Value(&tmpRead_g);

    /* Inport: '<Root>/VeOBCR_P_EVMax_P_Limit' */
    Rte_Read_VeOBCR_P_EVMax_P_Limit_Value(&tmpRead_f);

    /* Inport: '<Root>/VeOBCR_e_HCP_EVErrorCode' */
    Rte_Read_VeOBCR_e_HCP_EVErrorCode_Value(&tmpRead_e);

    /* Inport: '<Root>/VeOBCR_E_EVEnergyRequest' */
    Rte_Read_VeOBCR_E_EVEnergyRequest_Value(&tmpRead_d);

    /* Inport: '<Root>/VeOBCR_E_EVEnergyCapacity' */
    Rte_Read_VeOBCR_E_EVEnergyCapacity_Value(&tmpRead_c);

    /* Inport: '<Root>/VeOBCR_b_ChargingComplete' */
    Rte_Read_VeOBCR_b_ChargingComplete_Value(&tmpRead_b);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* SignalConversion generated from: '<S2>/VeOBCR_I_EVMax_I_Limit' incorporates:
     *  Inport: '<Root>/VeOBCR_I_EVMax_I_Limit'
     */
    Rte_Read_VeOBCR_I_EVMax_I_Limit_Value(&rtb_TmpSignalConversionAtVeOBCR);

    /* Outport: '<Root>/SendCANR_EVMaxCurrent_FD5' incorporates:
     *  DataTypeConversion: '<S9>/Data Type Conversion'
     */

rtb_TmpSignalConversionAtVeOBCR = SendCANR_EVMaxCurrent_FD5_CT5B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_EVMaxCurrent_FD5_SendCANR_EVMaxCurrent_FD5        (rtb_TmpSignalConversionAtVeOBCR);

    /* Outport: '<Root>/SendCANR_EVMaxCurrent_FD5Vld' incorporates:
     *  Logic: '<S9>/Logical Operator'
     */
    Rte_Write_SendCANR_EVMaxCurrent_FD5Vld_SendCANR_EVMaxCurrent_FD5Vld
        (true);

    /* SignalConversion generated from: '<S2>/VeOBCR_U_EVMax_V_Limit' incorporates:
     *  Inport: '<Root>/VeOBCR_U_EVMax_V_Limit'
     */
    Rte_Read_VeOBCR_U_EVMax_V_Limit_Value(&rtb_TmpSignalConversionAtVeOB_o);

    /* Outport: '<Root>/SendCANR_EVMaxVoltage_FD5' incorporates:
     *  DataTypeConversion: '<S10>/Data Type Conversion'
     */

rtb_TmpSignalConversionAtVeOB_o = SendCANR_EVMaxVoltage_FD5_CT5B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_EVMaxVoltage_FD5_SendCANR_EVMaxVoltage_FD5        (rtb_TmpSignalConversionAtVeOB_o);

    /* Outport: '<Root>/SendCANR_EVMaxVoltage_FD5Vld' incorporates:
     *  Logic: '<S10>/Logical Operator'
     */
    Rte_Write_SendCANR_EVMaxVoltage_FD5Vld_SendCANR_EVMaxVoltage_FD5Vld
        (true);

    /* Outport: '<Root>/SendCANR_HVCMS_ChrgnCompltFD5' incorporates:
     *  DataTypeConversion: '<S21>/Data Type Conversion'
     */

tmpRead_b = SendCANR_HVCMS_ChrgnCompltFD5_CT5B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_HVCMS_ChrgnCompltFD5_SendCANR_HVCMS_ChrgnCompltFD5        (tmpRead_b);

    /* Outport: '<Root>/SendCANR_HVCMS_ChrgnCompltFD5Vld' incorporates:
     *  Logic: '<S21>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HVCMS_ChrgnCompltFD5Vld_SendCANR_HVCMS_ChrgnCompltFD5Vld
        (true);

    /* Outport: '<Root>/SendCANR_HVCMS_EVEnrgCapctFD5' incorporates:
     *  DataTypeConversion: '<S22>/Data Type Conversion'
     */

tmpRead_c = SendCANR_HVCMS_EVEnrgCapctFD5_CT5B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_HVCMS_EVEnrgCapctFD5_SendCANR_HVCMS_EVEnrgCapctFD5        (tmpRead_c);

    /* Outport: '<Root>/SendCANR_HVCMS_EVEnrgCapctFD5Vld' incorporates:
     *  Logic: '<S22>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HVCMS_EVEnrgCapctFD5Vld_SendCANR_HVCMS_EVEnrgCapctFD5Vld
        (true);

    /* Outport: '<Root>/SendCANR_HVCMS_EVEnergRquestFD5' incorporates:
     *  DataTypeConversion: '<S23>/Data Type Conversion'
     */
    

tmpRead_d = SendCANR_HVCMS_EVEnergRquestFD5_CT5B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_HVCMS_EVEnergRquestFD5_SendCANR_HVCMS_EVEnergRquestFD5        (tmpRead_d);

    /* Outport: '<Root>/SendCANR_HVCMS_EVEnergRquestFD5Vld' incorporates:
     *  Logic: '<S23>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HVCMS_EVEnergRquestFD5Vld_SendCANR_HVCMS_EVEnergRquestFD5Vld
        (true);

    /* Outport: '<Root>/SendCANR_HVCMS_EVErrorCode_FD5' incorporates:
     *  DataTypeConversion: '<S24>/Data Type Conversion'
     */
    

tmpRead_e = SendCANR_HVCMS_EVErrorCode_FD5_CT5B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_HVCMS_EVErrorCode_FD5_SendCANR_HVCMS_EVErrorCode_FD5        ((uint8)tmpRead_e);

    /* Outport: '<Root>/SendCANR_HVCMS_EVErrorCode_FD5Vld' incorporates:
     *  Logic: '<S24>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HVCMS_EVErrorCode_FD5Vld_SendCANR_HVCMS_EVErrorCode_FD5Vld
        (true);

    /* Outport: '<Root>/SendCANR_HVCMS_EVMax_I_LimitFD5' incorporates:
     *  DataTypeConversion: '<S25>/Data Type Conversion'
     */
    

rtb_TmpSignalConversionAtVeOBCR = SendCANR_HVCMS_EVMax_I_LimitFD5_CT5B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_HVCMS_EVMax_I_LimitFD5_SendCANR_HVCMS_EVMax_I_LimitFD5        (rtb_TmpSignalConversionAtVeOBCR);

    /* Outport: '<Root>/SendCANR_HVCMS_EVMax_I_LimitFD5Vld' incorporates:
     *  Logic: '<S25>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HVCMS_EVMax_I_LimitFD5Vld_SendCANR_HVCMS_EVMax_I_LimitFD5Vld
        (true);

    /* Outport: '<Root>/SendCANR_HVCMS_EVMax_P_LimitFD5' incorporates:
     *  DataTypeConversion: '<S26>/Data Type Conversion'
     */
    

tmpRead_f = SendCANR_HVCMS_EVMax_P_LimitFD5_CT5B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_HVCMS_EVMax_P_LimitFD5_SendCANR_HVCMS_EVMax_P_LimitFD5        (tmpRead_f);

    /* Outport: '<Root>/SendCANR_HVCMS_EVMax_P_LimitFD5Vld' incorporates:
     *  Logic: '<S26>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HVCMS_EVMax_P_LimitFD5Vld_SendCANR_HVCMS_EVMax_P_LimitFD5Vld
        (true);

    /* Outport: '<Root>/SendCANR_HVCMS_EVMax_V_LimitFD5' incorporates:
     *  DataTypeConversion: '<S27>/Data Type Conversion'
     */
    

rtb_TmpSignalConversionAtVeOB_o = SendCANR_HVCMS_EVMax_V_LimitFD5_CT5B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_HVCMS_EVMax_V_LimitFD5_SendCANR_HVCMS_EVMax_V_LimitFD5        (rtb_TmpSignalConversionAtVeOB_o);

    /* Outport: '<Root>/SendCANR_HVCMS_EVMax_V_LimitFD5Vld' incorporates:
     *  Logic: '<S27>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HVCMS_EVMax_V_LimitFD5Vld_SendCANR_HVCMS_EVMax_V_LimitFD5Vld
        (true);

    /* Outport: '<Root>/SendCANR_HVCMS_EVRESS_SOC_FD5' incorporates:
     *  DataTypeConversion: '<S28>/Data Type Conversion'
     */

tmpRead_g = SendCANR_HVCMS_EVRESS_SOC_FD5_CT5B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_HVCMS_EVRESS_SOC_FD5_SendCANR_HVCMS_EVRESS_SOC_FD5        (tmpRead_g);

    /* Outport: '<Root>/SendCANR_HVCMS_EVRESS_SOC_FD5Vld' incorporates:
     *  Logic: '<S28>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HVCMS_EVRESS_SOC_FD5Vld_SendCANR_HVCMS_EVRESS_SOC_FD5Vld
        (true);

    /* Outport: '<Root>/SendCANR_HVCMS_EVReady_FD5' incorporates:
     *  DataTypeConversion: '<S29>/Data Type Conversion'
     */

tmpRead_h = SendCANR_HVCMS_EVReady_FD5_CT5B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_HVCMS_EVReady_FD5_SendCANR_HVCMS_EVReady_FD5        (tmpRead_h);

    /* Outport: '<Root>/SendCANR_HVCMS_EVReady_FD5Vld' incorporates:
     *  Logic: '<S29>/Logical Operator'
     */
    Rte_Write_SendCANR_HVCMS_EVReady_FD5Vld_SendCANR_HVCMS_EVReady_FD5Vld
        (true);

    /* Outport: '<Root>/SendCANR_HVCMS_EVTargetCurntFD5' incorporates:
     *  DataTypeConversion: '<S30>/Data Type Conversion'
     */
    

tmpRead_i = SendCANR_HVCMS_EVTargetCurntFD5_CT5B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_HVCMS_EVTargetCurntFD5_SendCANR_HVCMS_EVTargetCurntFD5        (tmpRead_i);

    /* Outport: '<Root>/SendCANR_HVCMS_EVTargetCurntFD5Vld' incorporates:
     *  Logic: '<S30>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HVCMS_EVTargetCurntFD5Vld_SendCANR_HVCMS_EVTargetCurntFD5Vld
        (true);

    /* Outport: '<Root>/SendCANR_HVCMS_EVTargetVoltFD5' incorporates:
     *  DataTypeConversion: '<S31>/Data Type Conversion'
     */
    

tmpRead_j = SendCANR_HVCMS_EVTargetVoltFD5_CT5B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_HVCMS_EVTargetVoltFD5_SendCANR_HVCMS_EVTargetVoltFD5        (tmpRead_j);

    /* Outport: '<Root>/SendCANR_HVCMS_EVTargetVoltFD5Vld' incorporates:
     *  Logic: '<S31>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HVCMS_EVTargetVoltFD5Vld_SendCANR_HVCMS_EVTargetVoltFD5Vld
        (true);

    /* Outport: '<Root>/SendCANR_HVCMSReadyToChgStatFD5' incorporates:
     *  DataTypeConversion: '<S32>/Data Type Conversion'
     */
    

tmpRead_k = SendCANR_HVCMSReadyToChgStatFD5_CT5B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_HVCMSReadyToChgStatFD5_SendCANR_HVCMSReadyToChgStatFD5        (tmpRead_k);

    /* Outport: '<Root>/SendCANR_HVCMSReadyToChgStatFD5Vld' incorporates:
     *  Logic: '<S32>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HVCMSReadyToChgStatFD5Vld_SendCANR_HVCMSReadyToChgStatFD5Vld
        (true);

    /* DataTypeConversion: '<S33>/Data Type Conversion' */
    tmpRead_l = fmodf(floorf(tmpRead_l), 65536.0F);

    /* Outport: '<Root>/SendCANR_HVCMSRemTimToBlkSOCFD5' incorporates:
     *  DataTypeConversion: '<S33>/Data Type Conversion'
     */
    

tmpRead_l = SendCANR_HVCMSRemTimToBlkSOCFD5_CT5B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_HVCMSRemTimToBlkSOCFD5_SendCANR_HVCMSRemTimToBlkSOCFD5        ((uint16)((sint32)((tmpRead_l < 0.0F) ? ((sint32)((uint16)((sint32)
              (-((sint32)((sint16)((uint16)((float32)(-tmpRead_l))))))))) :
                           ((sint32)((uint16)tmpRead_l)))));

    /* Outport: '<Root>/SendCANR_HVCMSRemTimToBlkSOCFD5Vld' incorporates:
     *  Logic: '<S33>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HVCMSRemTimToBlkSOCFD5Vld_SendCANR_HVCMSRemTimToBlkSOCFD5Vld
        (true);

    /* Outport: '<Root>/SendCANR_HVCMSRemTimToFulSOCFD5' incorporates:
     *  DataTypeConversion: '<S34>/Data Type Conversion'
     */
    

tmpRead_m = SendCANR_HVCMSRemTimToFulSOCFD5_CT5B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_HVCMSRemTimToFulSOCFD5_SendCANR_HVCMSRemTimToFulSOCFD5        (tmpRead_m);

    /* Outport: '<Root>/SendCANR_HVCMSRemTimToFulSOCFD5Vld' incorporates:
     *  Logic: '<S34>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HVCMSRemTimToFulSOCFD5Vld_SendCANR_HVCMSRemTimToFulSOCFD5Vld
        (true);

    /* Outport: '<Root>/SendCANR_HVCMSSlfEnrgTrnfTypFD5' incorporates:
     *  DataTypeConversion: '<S35>/Data Type Conversion'
     */
    

tmpRead_n = SendCANR_HVCMSSlfEnrgTrnfTypFD5_CT5B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_HVCMSSlfEnrgTrnfTypFD5_SendCANR_HVCMSSlfEnrgTrnfTypFD5        ((uint8)tmpRead_n);

    /* Outport: '<Root>/SendCANR_HVCMSSlfEnrgTrnfTypFD5Vld' incorporates:
     *  Logic: '<S35>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HVCMSSlfEnrgTrnfTypFD5Vld_SendCANR_HVCMSSlfEnrgTrnfTypFD5Vld
        (true);

    /* Outport: '<Root>/SendCANR_HVCMS_SeldPymntOptnFD5' incorporates:
     *  DataTypeConversion: '<S36>/Data Type Conversion'
     *  Inport: '<Root>/VeOBCR_e_SelPayOptn'
     */
    

tmpRead_o = SendCANR_HVCMS_SeldPymntOptnFD5_CT5B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_HVCMS_SeldPymntOptnFD5_SendCANR_HVCMS_SeldPymntOptnFD5        ((uint8)tmpRead_o);

    /* Outport: '<Root>/SendCANR_HVCMS_SeldPymntOptnFD5Vld' incorporates:
     *  Logic: '<S36>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HVCMS_SeldPymntOptnFD5Vld_SendCANR_HVCMS_SeldPymntOptnFD5Vld
        (true);

    /* Outport: '<Root>/SendCANR_HVCMSSelectedServIdFD5' incorporates:
     *  DataTypeConversion: '<S37>/Data Type Conversion'
     */
    

tmpRead_p = SendCANR_HVCMSSelectedServIdFD5_CT5B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_HVCMSSelectedServIdFD5_SendCANR_HVCMSSelectedServIdFD5        (tmpRead_p);

    /* Outport: '<Root>/SendCANR_HVCMSSelectedServIdFD5Vld' incorporates:
     *  Logic: '<S37>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HVCMSSelectedServIdFD5Vld_SendCANR_HVCMSSelectedServIdFD5Vld
        (true);

    /* Outport: '<Root>/SendCANR_HVCMSServiceCatgoryFD5' incorporates:
     *  DataTypeConversion: '<S38>/Data Type Conversion'
     */
    

tmpRead_q = SendCANR_HVCMSServiceCatgoryFD5_CT5B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_HVCMSServiceCatgoryFD5_SendCANR_HVCMSServiceCatgoryFD5        ((uint8)tmpRead_q);

    /* Outport: '<Root>/SendCANR_HVCMSServiceCatgoryFD5Vld' incorporates:
     *  Logic: '<S38>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HVCMSServiceCatgoryFD5Vld_SendCANR_HVCMSServiceCatgoryFD5Vld
        (true);

    /* DataTypeConversion: '<S19>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeOBCR_d_ServiceScope'
     *  Logic: '<S20>/Logical Operator'
     */
#if Rte_SysCon_VrntCT5B_HVCMSServiceScope_OBCRdServiceScope

    Rte_Read_VeOBCR_d_ServiceScope_Value(&tmpRead_r);

    /* Outport: '<Root>/SendCANR_HVCMS_ServiceScope_FD5' incorporates:
     *  Inport: '<Root>/VeOBCR_d_ServiceScope'
     */
    
        Rte_Write_SendCANR_HVCMS_ServiceScope_FD5_SendCANR_HVCMS_ServiceScope_FD5
        (tmpRead_r);

    /* Outport: '<Root>/SendCANR_HVCMS_ServiceScope_FD5Vld' */
    
        Rte_Write_SendCANR_HVCMS_ServiceScope_FD5Vld_SendCANR_HVCMS_ServiceScope_FD5Vld
        (false);

#endif

    /* End of DataTypeConversion: '<S19>/Data Type Conversion' */

    /* DataTypeConversion: '<S39>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeVTHR_Pct_V2H_BattBulkSOC'
     *  Logic: '<S40>/Logical Operator'
     */
#if Rte_SysCon_VrntCT5B_VDCMBattBulkSOC_IDCRPctBattBulkSOC

    Rte_Read_VeVTHR_Pct_V2H_BattBulkSOC_Value(&tmpRead_s);

    /* Outport: '<Root>/SendCANR_VDCM_BattBulkSOC_FD5' incorporates:
     *  Inport: '<Root>/VeVTHR_Pct_V2H_BattBulkSOC'
     */
    Rte_Write_SendCANR_VDCM_BattBulkSOC_FD5_SendCANR_VDCM_BattBulkSOC_FD5
        (tmpRead_s);

    /* Outport: '<Root>/SendCANR_VDCM_BattBulkSOC_FD5Vld' */
    
        Rte_Write_SendCANR_VDCM_BattBulkSOC_FD5Vld_SendCANR_VDCM_BattBulkSOC_FD5Vld
        (false);

#endif

    /* End of DataTypeConversion: '<S39>/Data Type Conversion' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeTMIR_T_PsvPmpClnt_TmpIn' */
    Rte_Read_VeTMIR_T_PsvPmpClnt_TmpIn_Value(&tmpRead_v);

    /* Inport: '<Root>/VeTMIR_b_OnBrdChrg_ClntTmpIn_FA' */
    Rte_Read_VeTMIR_b_OnBrdChrg_ClntTmpIn_FA_Value(&tmpRead_u);

    /* Inport: '<Root>/VeTMIR_T_OnBrdChrg_ClntTmpIn' */
    Rte_Read_VeTMIR_T_OnBrdChrg_ClntTmpIn_Value(&tmpRead_t);

    /* Inport: '<Root>/VeIMPR_b_ImpactToggleCAN' */
    Rte_Read_VeIMPR_b_ImpactToggleCAN_Value(&tmpRead_a);

    /* Inport: '<Root>/VeIMPR_b_ImpactDetectedCAN' */
    Rte_Read_VeIMPR_b_ImpactDetectedCAN_Value(&tmpRead_9);

    /* Inport: '<Root>/VePMIR_b_TransAuxPump2OilTemp_FA' */
    Rte_Read_VePMIR_b_TransAuxPump2OilTemp_FA_Value(&tmpRead_8);

    /* Inport: '<Root>/VePMIR_T_TransAuxPump2OilTemp' */
    Rte_Read_VePMIR_T_TransAuxPump2OilTemp_Value(&tmpRead_7);

    /* Inport: '<Root>/VeTAPR_b_MtrB_OilFlwActFA' */
    Rte_Read_VeTAPR_b_MtrB_OilFlwActFA_Value(&tmpRead_6);

    /* Inport: '<Root>/VeTAPR_dV_MtrB_OilFlwAct' */
    Rte_Read_VeTAPR_dV_MtrB_OilFlwAct_Value(&tmpRead_5);

    /* Inport: '<Root>/VePMIR_b_TransAuxPumpOilTemp_FA' */
    Rte_Read_VePMIR_b_TransAuxPumpOilTemp_FA_Value(&tmpRead_4);

    /* Inport: '<Root>/VePMIR_T_TransAuxPumpOilTemp' */
    Rte_Read_VePMIR_T_TransAuxPumpOilTemp_Value(&tmpRead_3);

    /* Inport: '<Root>/VeTAPR_b_MtrA_OilFlwActFA' */
    Rte_Read_VeTAPR_b_MtrA_OilFlwActFA_Value(&tmpRead_2);

    /* Inport: '<Root>/VeTAPR_dV_MtrA_OilFlwAct' */
    Rte_Read_VeTAPR_dV_MtrA_OilFlwAct_Value(&tmpRead_1);

    /* Inport: '<Root>/VeSSDR_t_WU_TimerValue' */
    Rte_Read_VeSSDR_t_WU_TimerValue_Value(&tmpRead_0);

    /* Inport: '<Root>/VeSSDR_k_DiagPerWakeUp' */
    Rte_Read_VeSSDR_k_DiagPerWakeUp_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Outport: '<Root>/SendCANR_PerWakeUp_Diag_FD5' incorporates:
     *  DataTypeConversion: '<S11>/Data Type Conversion'
     */

tmpRead = SendCANR_PerWakeUp_Diag_FD5_CT5B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_PerWakeUp_Diag_FD5_SendCANR_PerWakeUp_Diag_FD5        (tmpRead);

    /* Outport: '<Root>/SendCANR_PerWakeUp_Diag_FD5Vld' incorporates:
     *  Logic: '<S11>/Logical Operator'
     */
    
        Rte_Write_SendCANR_PerWakeUp_Diag_FD5Vld_SendCANR_PerWakeUp_Diag_FD5Vld
        (true);

    /* Outport: '<Root>/SendCANR_WU_Timer_Value_FD5' incorporates:
     *  DataTypeConversion: '<S12>/Data Type Conversion'
     */

tmpRead_0 = SendCANR_WU_Timer_Value_FD5_CT5B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_WU_Timer_Value_FD5_SendCANR_WU_Timer_Value_FD5        ((float32)tmpRead_0);

    /* Outport: '<Root>/SendCANR_WU_Timer_Value_FD5Vld' incorporates:
     *  Logic: '<S12>/Logical Operator'
     */
    
        Rte_Write_SendCANR_WU_Timer_Value_FD5Vld_SendCANR_WU_Timer_Value_FD5Vld
        (true);

    /* Outport: '<Root>/SendCANR_EOPA_OIL_FlwRate_FD5' incorporates:
     *  DataTypeConversion: '<S13>/Data Type Conversion'
     */

tmpRead_1 = SendCANR_EOPA_OIL_FlwRate_FD5_CT5B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_EOPA_OIL_FlwRate_FD5_SendCANR_EOPA_OIL_FlwRate_FD5        (tmpRead_1);

    /* Outport: '<Root>/SendCANR_EOPA_OIL_FlwRate_FD5Vld' incorporates:
     *  Logic: '<S13>/Logical Operator'
     */
    
        Rte_Write_SendCANR_EOPA_OIL_FlwRate_FD5Vld_SendCANR_EOPA_OIL_FlwRate_FD5Vld
        (!tmpRead_2);

    /* Outport: '<Root>/SendCANR_EOPA_OIL_TEMP_FD5' incorporates:
     *  DataTypeConversion: '<S14>/Data Type Conversion'
     */

tmpRead_3 = SendCANR_EOPA_OIL_TEMP_FD5_CT5B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_EOPA_OIL_TEMP_FD5_SendCANR_EOPA_OIL_TEMP_FD5        (tmpRead_3);

    /* Outport: '<Root>/SendCANR_EOPA_OIL_TEMP_FD5Vld' incorporates:
     *  Logic: '<S14>/Logical Operator'
     */
    Rte_Write_SendCANR_EOPA_OIL_TEMP_FD5Vld_SendCANR_EOPA_OIL_TEMP_FD5Vld(
        !tmpRead_4);

    /* Outport: '<Root>/SendCANR_EOPB_OIL_FlwRate_FD5' incorporates:
     *  DataTypeConversion: '<S15>/Data Type Conversion'
     */

tmpRead_5 = SendCANR_EOPB_OIL_FlwRate_FD5_CT5B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_EOPB_OIL_FlwRate_FD5_SendCANR_EOPB_OIL_FlwRate_FD5        (tmpRead_5);

    /* Outport: '<Root>/SendCANR_EOPB_OIL_FlwRate_FD5Vld' incorporates:
     *  Logic: '<S15>/Logical Operator'
     */
    
        Rte_Write_SendCANR_EOPB_OIL_FlwRate_FD5Vld_SendCANR_EOPB_OIL_FlwRate_FD5Vld
        (!tmpRead_6);

    /* Outport: '<Root>/SendCANR_EOPB_OIL_TEMP_FD5' incorporates:
     *  DataTypeConversion: '<S16>/Data Type Conversion'
     */

tmpRead_7 = SendCANR_EOPB_OIL_TEMP_FD5_CT5B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_EOPB_OIL_TEMP_FD5_SendCANR_EOPB_OIL_TEMP_FD5        (tmpRead_7);

    /* Outport: '<Root>/SendCANR_EOPB_OIL_TEMP_FD5Vld' incorporates:
     *  Logic: '<S16>/Logical Operator'
     */
    Rte_Write_SendCANR_EOPB_OIL_TEMP_FD5Vld_SendCANR_EOPB_OIL_TEMP_FD5Vld(
        !tmpRead_8);

    /* Outport: '<Root>/SendCANR_IMPACTCommand_FD5' incorporates:
     *  DataTypeConversion: '<S17>/Data Type Conversion'
     */

tmpRead_9 = SendCANR_IMPACTCommand_FD5_CT5B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_IMPACTCommand_FD5_SendCANR_IMPACTCommand_FD5        (tmpRead_9);

    /* Outport: '<Root>/SendCANR_IMPACTCommand_FD5Vld' incorporates:
     *  Logic: '<S17>/Logical Operator'
     */
    Rte_Write_SendCANR_IMPACTCommand_FD5Vld_SendCANR_IMPACTCommand_FD5Vld
        (true);

    /* Outport: '<Root>/SendCANR_IMPACTConfirm_FD5' incorporates:
     *  DataTypeConversion: '<S18>/Data Type Conversion'
     */

tmpRead_a = SendCANR_IMPACTConfirm_FD5_CT5B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_IMPACTConfirm_FD5_SendCANR_IMPACTConfirm_FD5        (tmpRead_a);

    /* Outport: '<Root>/SendCANR_IMPACTConfirm_FD5Vld' incorporates:
     *  Logic: '<S18>/Logical Operator'
     */
    Rte_Write_SendCANR_IMPACTConfirm_FD5Vld_SendCANR_IMPACTConfirm_FD5Vld
        (true);

    /* SignalConversion generated from: '<S2>/VeTMIR_b_PsvPmpClnt_TmpIn_FA' incorporates:
     *  Inport: '<Root>/VeTMIR_b_PsvPmpClnt_TmpIn_FA'
     */
    Rte_Read_VeTMIR_b_PsvPmpClnt_TmpIn_FA_Value
        (&rtb_TmpSignalConversionAtVeTMIR);

    /* Outport: '<Root>/SendCANR_T4_Sensor_Temp_FD5' incorporates:
     *  DataTypeConversion: '<S41>/Data Type Conversion'
     */

tmpRead_t = SendCANR_T4_Sensor_Temp_FD5_CT5B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_T4_Sensor_Temp_FD5_SendCANR_T4_Sensor_Temp_FD5        (tmpRead_t);

    /* Outport: '<Root>/SendCANR_T4_Sensor_Temp_FD5Vld' incorporates:
     *  Logic: '<S41>/Logical Operator'
     */
    
        Rte_Write_SendCANR_T4_Sensor_Temp_FD5Vld_SendCANR_T4_Sensor_Temp_FD5Vld(
        !tmpRead_u);

    /* Outport: '<Root>/SendCANR_T7_CoolantTmpVldty_FD5' incorporates:
     *  DataTypeConversion: '<S42>/Data Type Conversion'
     */
    

rtb_TmpSignalConversionAtVeTMIR = SendCANR_T7_CoolantTmpVldty_FD5_CT5B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_T7_CoolantTmpVldty_FD5_SendCANR_T7_CoolantTmpVldty_FD5        (rtb_TmpSignalConversionAtVeTMIR);

    /* Outport: '<Root>/SendCANR_T7_CoolantTmpVldty_FD5Vld' incorporates:
     *  Logic: '<S42>/Logical Operator'
     */
    
        Rte_Write_SendCANR_T7_CoolantTmpVldty_FD5Vld_SendCANR_T7_CoolantTmpVldty_FD5Vld
        (true);

    /* Outport: '<Root>/SendCANR_T7_Sensor_Temp_FD5' incorporates:
     *  DataTypeConversion: '<S43>/Data Type Conversion'
     */

tmpRead_v = SendCANR_T7_Sensor_Temp_FD5_CT5B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_T7_Sensor_Temp_FD5_SendCANR_T7_Sensor_Temp_FD5        (tmpRead_v);

    /* Outport: '<Root>/SendCANR_T7_Sensor_Temp_FD5Vld' incorporates:
     *  Logic: '<S43>/Logical Operator'
     */
    
        Rte_Write_SendCANR_T7_Sensor_Temp_FD5Vld_SendCANR_T7_Sensor_Temp_FD5Vld(
        !rtb_TmpSignalConversionAtVeTMIR);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
}

/* Model initialize function */
FUNC(void, CT5B_FUNC_CODE) CT5B_FUNC_ac_Init
{
    /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
