/*
 * File: DCAB_ac.c
 *
 * Code generated for Simulink model 'DCAB_ac'.
 *
 * Model version                  : 1.16
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Mon Apr  8 09:01:39 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "DCAB_ac.h"

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_DCAB
#include "MemMap.h"

CONST(ConstB_DCAB_ac_T, DCAB_VAR_INIT) DCAB_ac_ConstB =
{
    0U,                                /* '<S192>/Mux2' */
    0U,                                /* '<S183>/Mux2' */
    0U,                                /* '<S169>/Mux1' */
    0U,                                /* '<S169>/Mux4' */
    0U,                                /* '<S169>/Mux5' */
    0U,                                /* '<S168>/Mux3' */
    0U,                                /* '<S168>/Mux4' */
    0U,                                /* '<S164>/Mux4' */
    0U,                                /* '<S161>/Bitwise1' */
    0U,                                /* '<S161>/Bitwise2' */
    0U,                                /* '<S161>/Bitwise3' */
    0U,                                /* '<S160>/Bitwise1' */
    0U,                                /* '<S160>/Bitwise2' */
    0U,                                /* '<S160>/Bitwise3' */
    0U,                                /* '<S159>/Mux3' */
    0U,                                /* '<S159>/Mux4' */
    0U,                                /* '<S148>/Mux4' */
    0U,                                /* '<S127>/Mux3' */
    0U,                                /* '<S93>/Bitwise' */
    0U,                                /* '<S93>/Bitwise1' */
    0U,                                /* '<S89>/Bitwise' */
    0U,                                /* '<S89>/Bitwise1' */
    0U,                                /* '<S85>/Bitwise' */
    0U,                                /* '<S85>/Bitwise1' */
    0U,                                /* '<S60>/Bitwise' */
    0U,                                /* '<S60>/Bitwise1' */
    0U,                                /* '<S31>/Bitwise' */
    0U,                                /* '<S31>/Bitwise1' */
    0U,                                /* '<S17>/Bitwise' */
    0U                                 /* '<S17>/Bitwise1' */
};

#define STOP_SEC_CONST_UNSPECIFIED_DCAB
#include "MemMap.h"

/* Forward declaration for local functions */
static uint8 safe_cast_to_TeFSCR_e_AGS_PosRq(uint8 input);
static uint8 D_safe_cast_to_TeAADR_e_AAD_Pos(uint8 input);
static uint8 safe_cast_to_TeOBCR_e_DCChrg_Te(uint8 input);
static uint8 safe_cast_to_TeADIR_e_WEDExtToo(uint8 input);
static uint8 safe_cast_to_TeFSCR_e_AGS_PosRq(uint8 input)
{
    uint8 y;

    /* Initialize output value to default value for TeFSCR_e_AGS_PosRq (CeFSCR_e_Open100) */
    y = 0U;
    if (((sint32)input) <= 15)
    {
        /* Set output value to input value if it is a member of TeFSCR_e_AGS_PosRq */
        y = input;
    }

    return y;
}

static uint8 D_safe_cast_to_TeAADR_e_AAD_Pos(uint8 input)
{
    uint8 y;

    /* Initialize output value to default value for TeAADR_e_AAD_Pos (CeAADR_e_SNA) */
    y = 15U;
    if (((sint32)input) <= 15)
    {
        /* Set output value to input value if it is a member of TeAADR_e_AAD_Pos */
        y = input;
    }

    return y;
}

static uint8 safe_cast_to_TeOBCR_e_DCChrg_Te(uint8 input)
{
    uint8 y;

    /* Initialize output value to default value for TeOBCR_e_DCChrg_TestSts (CeOBCR_e_DCChrg_TestSts_NotInit) */
    y = 0U;
    if (((sint32)input) <= 3)
    {
        /* Set output value to input value if it is a member of TeOBCR_e_DCChrg_TestSts */
        y = input;
    }

    return y;
}

static uint8 safe_cast_to_TeADIR_e_WEDExtToo(uint8 input)
{
    uint8 y;

    /* Initialize output value to default value for TeADIR_e_WEDExtToolCmd (CeADIR_e_ECUNormalControl) */
    y = 0U;
    if (((sint32)input) <= 3)
    {
        /* Set output value to input value if it is a member of TeADIR_e_WEDExtToolCmd */
        y = input;
    }

    return y;
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD001_Data_RC(P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD001_Data_RC' */
    /* Outport: '<Root>/VeDCAB_b_IOCD001_HigTemShuVal' incorporates:
     *  Constant: '<S6>/Op'
     *  SignalConversion generated from: '<S6>/VeDCAB_b_IOCD001_HigTemShuVal'
     */
    (void)Rte_Write_VeDCAB_b_IOCD001_HigTemShuVal_Value(false);

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD001_HigTemShuVal_Op' incorporates:
     *  Constant: '<S6>/Op1'
     *  SignalConversion generated from: '<S6>/VeDCAB_e_IOControl_IOCD001_HigTemShuVal_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD001_HigTemShuVal_Op_Value
        (CeDCAB_e_IO_ReturnControl);

    /* SignalConversion generated from: '<S6>/ErrorCode' incorporates:
     *  Constant: '<S6>/Op2'
     */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S6>/ERR' incorporates:
     *  Constant: '<S6>/Op3'
     */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD001_Data_RC' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD001_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD001_Data_ReadData' */
    /* SignalConversion generated from: '<S7>/Data' */
    *Data = 0U;

    /* SignalConversion generated from: '<S7>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD001_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD001_Data_SA(P2CONST(uint8,
    AUTOMATIC, DCAB_VAR_INIT) ControlStateInfo, VAR(Dcm_OpStatusType, AUTOMATIC)
    OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT)
    ErrorCode)
{
    Std_ReturnType rty_ERR_2;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD001_Data_SA' */
    /* SignalConversion generated from: '<S8>/ERR' incorporates:
     *  Switch: '<S8>/Check8'
     */
    rty_ERR_2 = 0U;

    /* Switch: '<S8>/Check7' incorporates:
     *  Constant: '<S8>/Op2'
     *  SignalConversion generated from: '<S8>/ErrorCode'
     */
    *ErrorCode = DCM_POS_RESP;

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD001_HigTemShuVal_Op' incorporates:
     *  Switch: '<S8>/Check6'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD001_HigTemShuVal_Op_Value
        ((TeDCAB_e_IOControlOpType)3U);

    /* Outport: '<Root>/VeDCAB_b_IOCD001_HigTemShuVal' incorporates:
     *  DataTypeConversion: '<S8>/DTConv1'
     */
    (void)Rte_Write_VeDCAB_b_IOCD001_HigTemShuVal_Value(((sint32)
        (*ControlStateInfo)) != 0);

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD001_Data_SA' */
    return rty_ERR_2;
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD002_Data_RC(P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD002_Data_RC' */
    /* Outport: '<Root>/VeDCAB_b_IOCD002_FtRfgtShtoff_VlvCmd' incorporates:
     *  Constant: '<S9>/Op'
     *  SignalConversion generated from: '<S9>/VeDCAB_b_IOCD002_FtRfgtShtoff_VlvCmd'
     */
    (void)Rte_Write_VeDCAB_b_IOCD002_FtRfgtShtoff_VlvCmd_Value(false);

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD002_FtRfgtShtoff_VlvCmd_Op' incorporates:
     *  Constant: '<S9>/Op1'
     *  SignalConversion generated from: '<S9>/VeDCAB_e_IOControl_IOCD002_FtRfgtShtoff_VlvCmd_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD002_FtRfgtShtoff_VlvCmd_Op_Value
        (CeDCAB_e_IO_ReturnControl);

    /* SignalConversion generated from: '<S9>/ErrorCode' incorporates:
     *  Constant: '<S9>/Op2'
     */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S9>/ERR' incorporates:
     *  Constant: '<S9>/Op3'
     */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD002_Data_RC' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD002_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD002_Data_ReadData' */
    /* SignalConversion generated from: '<S10>/Data' */
    *Data = 0U;

    /* SignalConversion generated from: '<S10>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD002_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD002_Data_SA(P2CONST(uint8,
    AUTOMATIC, DCAB_VAR_INIT) ControlStateInfo, VAR(Dcm_OpStatusType, AUTOMATIC)
    OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT)
    ErrorCode)
{
    Std_ReturnType rty_ERR_5;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD002_Data_SA' */
    /* SignalConversion generated from: '<S11>/ERR' incorporates:
     *  Switch: '<S11>/Check8'
     */
    rty_ERR_5 = 0U;

    /* Switch: '<S11>/Check7' incorporates:
     *  Constant: '<S11>/Op2'
     *  SignalConversion generated from: '<S11>/ErrorCode'
     */
    *ErrorCode = DCM_POS_RESP;

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD002_FtRfgtShtoff_VlvCmd_Op' incorporates:
     *  Switch: '<S11>/Check6'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD002_FtRfgtShtoff_VlvCmd_Op_Value
        ((TeDCAB_e_IOControlOpType)3U);

    /* Outport: '<Root>/VeDCAB_b_IOCD002_FtRfgtShtoff_VlvCmd' incorporates:
     *  DataTypeConversion: '<S11>/DTConv1'
     */
    (void)Rte_Write_VeDCAB_b_IOCD002_FtRfgtShtoff_VlvCmd_Value(((sint32)
        (*ControlStateInfo)) != 0);

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD002_Data_SA' */
    return rty_ERR_5;
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD004_Data_RC(P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD004_Data_RC' */
    /* Outport: '<Root>/VeDCAB_Pct_IOCD004_RadFanDutCycle' incorporates:
     *  Constant: '<S12>/Op'
     *  SignalConversion generated from: '<S12>/VeDCAB_Pct_IOCD004_RadFanDutCycle'
     */
    (void)Rte_Write_VeDCAB_Pct_IOCD004_RadFanDutCycle_Value(0.0F);

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD004_RadFanDutCycle_Op' incorporates:
     *  Constant: '<S12>/Op1'
     *  SignalConversion generated from: '<S12>/VeDCAB_e_IOControl_IOCD004_RadFanDutCycle_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD004_RadFanDutCycle_Op_Value
        (CeDCAB_e_IO_ReturnControl);

    /* SignalConversion generated from: '<S12>/ErrorCode' incorporates:
     *  Constant: '<S12>/Op2'
     */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S12>/ERR' incorporates:
     *  Constant: '<S12>/Op3'
     */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD004_Data_RC' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD004_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD004_Data_ReadData' */
    /* SignalConversion generated from: '<S13>/Data' */
    *Data = 0U;

    /* SignalConversion generated from: '<S13>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD004_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD004_Data_SA(P2CONST(uint8,
    AUTOMATIC, DCAB_VAR_INIT) ControlStateInfo, VAR(Dcm_OpStatusType, AUTOMATIC)
    OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT)
    ErrorCode)
{
    Std_ReturnType rty_ERR_8;
    TeDCAB_e_IOControlOpType rtb_Check2_bn;
    boolean rtb_Check2_ln;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD004_Data_SA' */
    /* Logic: '<S14>/Check2' incorporates:
     *  Constant: '<S14>/MaxVal'
     *  RelationalOperator: '<S14>/Check1'
     */
    rtb_Check2_ln = (((sint32)(*ControlStateInfo)) <= 90);

    /* SignalConversion generated from: '<S14>/ERR' incorporates:
     *  Switch: '<S14>/Check8'
     */
    rty_ERR_8 = (Std_ReturnType)((!rtb_Check2_ln) ? 1 : 0);

    /* Switch: '<S14>/Check7' incorporates:
     *  Constant: '<S14>/Op'
     *  Constant: '<S14>/Op1'
     *  Switch: '<S14>/Check6'
     */
    if (rtb_Check2_ln)
    {
        /* SignalConversion generated from: '<S14>/ErrorCode' incorporates:
         *  Constant: '<S14>/Op2'
         */
        *ErrorCode = DCM_POS_RESP;
        rtb_Check2_bn = CeDCAB_e_IO_ShortTermAdj;
    }
    else
    {
        /* SignalConversion generated from: '<S14>/ErrorCode' incorporates:
         *  Constant: '<S14>/Op3'
         */
        *ErrorCode = DCM_E_REQUESTOUTOFRANGE;
        rtb_Check2_bn = CeDCAB_e_IO_NOP;
    }

    /* End of Switch: '<S14>/Check7' */

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD004_RadFanDutCycle_Op' incorporates:
     *  Switch: '<S14>/Check6'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD004_RadFanDutCycle_Op_Value
        (rtb_Check2_bn);

    /* Outport: '<Root>/VeDCAB_Pct_IOCD004_RadFanDutCycle' incorporates:
     *  DataTypeConversion: '<S14>/DTConv1'
     *  DataTypeConversion: '<S14>/DTConv2'
     */
    (void)Rte_Write_VeDCAB_Pct_IOCD004_RadFanDutCycle_Value((float32)
        (*ControlStateInfo));

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD004_Data_SA' */
    return rty_ERR_8;
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD006_Data_RC(P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD006_Data_RC' */
    /* Outport: '<Root>/VeDCAB_W_IOCD006_HigVolCooHeater' incorporates:
     *  Constant: '<S15>/Op'
     *  SignalConversion generated from: '<S15>/VeDCAB_W_IOCD006_HigVolCooHeater'
     */
    (void)Rte_Write_VeDCAB_W_IOCD006_HigVolCooHeater_Value(0.0F);

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD006_HigVolCooHeater_Op' incorporates:
     *  Constant: '<S15>/Op1'
     *  SignalConversion generated from: '<S15>/VeDCAB_e_IOControl_IOCD006_HigVolCooHeater_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD006_HigVolCooHeater_Op_Value
        (CeDCAB_e_IO_ReturnControl);

    /* SignalConversion generated from: '<S15>/ErrorCode' incorporates:
     *  Constant: '<S15>/Op2'
     */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S15>/ERR' incorporates:
     *  Constant: '<S15>/Op3'
     */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD006_Data_RC' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD006_Data_RD(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(Dcm_NegativeResponseCodeType,
    AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD006_Data_RD' */
    /* Outport: '<Root>/VeDCAB_W_IOCD006_HigVolCooHeater' incorporates:
     *  Constant: '<S16>/Op'
     *  SignalConversion generated from: '<S16>/VeDCAB_W_IOCD006_HigVolCooHeater'
     */
    (void)Rte_Write_VeDCAB_W_IOCD006_HigVolCooHeater_Value(0.0F);

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD006_HigVolCooHeater_Op' incorporates:
     *  Constant: '<S16>/Op1'
     *  SignalConversion generated from: '<S16>/VeDCAB_e_IOControl_IOCD006_HigVolCooHeater_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD006_HigVolCooHeater_Op_Value
        (CeDCAB_e_IO_ResetToDefault);

    /* SignalConversion generated from: '<S16>/ErrorCode' incorporates:
     *  Constant: '<S16>/Op2'
     */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S16>/ERR' incorporates:
     *  Constant: '<S16>/Op3'
     */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD006_Data_RD' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD006_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[2])
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD006_Data_ReadData' */
    /* SignalConversion generated from: '<S17>/Data' */
    Data[0] = DCAB_ac_ConstB.Bitwise_er;
    Data[1] = DCAB_ac_ConstB.Bitwise1_lm;

    /* SignalConversion generated from: '<S17>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD006_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD006_Data_SA(CONST(uint8,
    AUTOMATIC) ControlStateInfo[2], VAR(Dcm_OpStatusType, AUTOMATIC) OpStatus,
    P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    Std_ReturnType rty_ERR_c;
    uint16 rtb_Bitwise;
    TeDCAB_e_IOControlOpType rtb_Check2_0;
    boolean rtb_Check2;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD006_Data_SA' */
    /* S-Function (sfix_bitop): '<S18>/Bitwise' incorporates:
     *  ArithShift: '<S18>/BitShift'
     *  SignalConversion generated from: '<S18>/Data'
     */
    rtb_Bitwise = (uint16)((sint32)(((sint32)((uint32)(((uint32)
        ControlStateInfo[0]) << 8ULL))) | ((sint32)ControlStateInfo[1])));

    /* Logic: '<S18>/Check2' incorporates:
     *  Constant: '<S18>/MaxVal'
     *  RelationalOperator: '<S18>/Check1'
     */
    rtb_Check2 = (((sint32)rtb_Bitwise) <= 1022);

    /* SignalConversion generated from: '<S18>/ERR' incorporates:
     *  Switch: '<S18>/Check8'
     */
    rty_ERR_c = (Std_ReturnType)((!rtb_Check2) ? 1 : 0);

    /* Switch: '<S18>/Check7' incorporates:
     *  Constant: '<S18>/Op'
     *  Constant: '<S18>/Op1'
     *  Switch: '<S18>/Check6'
     */
    if (rtb_Check2)
    {
        /* SignalConversion generated from: '<S18>/ErrorCode' incorporates:
         *  Constant: '<S18>/Op2'
         */
        *ErrorCode = DCM_POS_RESP;
        rtb_Check2_0 = CeDCAB_e_IO_ShortTermAdj;
    }
    else
    {
        /* SignalConversion generated from: '<S18>/ErrorCode' incorporates:
         *  Constant: '<S18>/Op3'
         */
        *ErrorCode = DCM_E_REQUESTOUTOFRANGE;
        rtb_Check2_0 = CeDCAB_e_IO_NOP;
    }

    /* End of Switch: '<S18>/Check7' */

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD006_HigVolCooHeater_Op' incorporates:
     *  Switch: '<S18>/Check6'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD006_HigVolCooHeater_Op_Value
        (rtb_Check2_0);

    /* Outport: '<Root>/VeDCAB_W_IOCD006_HigVolCooHeater' incorporates:
     *  Constant: '<S18>/Factor'
     *  DataTypeConversion: '<S18>/DTConv2'
     *  DataTypeConversion: '<S18>/DTConv3'
     *  Product: '<S18>/Prod'
     */
    (void)Rte_Write_VeDCAB_W_IOCD006_HigVolCooHeater_Value(((float32)rtb_Bitwise)
        * 20.0F);

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD006_Data_SA' */
    return rty_ERR_c;
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD007_Data_RC(P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD007_Data_RC' */
    /* Outport: '<Root>/VeDCAB_b_IOCD007_ChlrRfgtShtoff_VlvCmd' incorporates:
     *  Constant: '<S19>/Op'
     *  SignalConversion generated from: '<S19>/VeDCAB_b_IOCD007_ChlrRfgtShtoff_VlvCmd'
     */
    (void)Rte_Write_VeDCAB_b_IOCD007_ChlrRfgtShtoff_VlvCmd_Value(false);

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD007_ChlrRfgtShtoff_VlvCmd_Op' incorporates:
     *  Constant: '<S19>/Op1'
     *  SignalConversion generated from: '<S19>/VeDCAB_e_IOControl_IOCD007_ChlrRfgtShtoff_VlvCmd_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD007_ChlrRfgtShtoff_VlvCmd_Op_Value
        (CeDCAB_e_IO_ReturnControl);

    /* SignalConversion generated from: '<S19>/ErrorCode' incorporates:
     *  Constant: '<S19>/Op2'
     */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S19>/ERR' incorporates:
     *  Constant: '<S19>/Op3'
     */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD007_Data_RC' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD007_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD007_Data_ReadData' */
    /* SignalConversion generated from: '<S20>/Data' */
    *Data = 0U;

    /* SignalConversion generated from: '<S20>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD007_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD007_Data_SA(P2CONST(uint8,
    AUTOMATIC, DCAB_VAR_INIT) ControlStateInfo, VAR(Dcm_OpStatusType, AUTOMATIC)
    OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT)
    ErrorCode)
{
    Std_ReturnType rty_ERR_f;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD007_Data_SA' */
    /* SignalConversion generated from: '<S21>/ERR' incorporates:
     *  Switch: '<S21>/Check8'
     */
    rty_ERR_f = 0U;

    /* Switch: '<S21>/Check7' incorporates:
     *  Constant: '<S21>/Op2'
     *  SignalConversion generated from: '<S21>/ErrorCode'
     */
    *ErrorCode = DCM_POS_RESP;

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD007_ChlrRfgtShtoff_VlvCmd_Op' incorporates:
     *  Switch: '<S21>/Check6'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD007_ChlrRfgtShtoff_VlvCmd_Op_Value
        ((TeDCAB_e_IOControlOpType)3U);

    /* Outport: '<Root>/VeDCAB_b_IOCD007_ChlrRfgtShtoff_VlvCmd' incorporates:
     *  DataTypeConversion: '<S21>/DTConv1'
     */
    (void)Rte_Write_VeDCAB_b_IOCD007_ChlrRfgtShtoff_VlvCmd_Value(((sint32)
        (*ControlStateInfo)) != 0);

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD007_Data_SA' */
    return rty_ERR_f;
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD00D_Data_RC(P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD00D_Data_RC' */
    /* Outport: '<Root>/VeDCAB_Pct_IOCD00D_HigTemAuxPump' incorporates:
     *  Constant: '<S22>/Op'
     *  SignalConversion generated from: '<S22>/VeDCAB_Pct_IOCD00D_HigTemAuxPump'
     */
    (void)Rte_Write_VeDCAB_Pct_IOCD00D_HigTemAuxPump_Value(0.0F);

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD00D_HigTemAuxPump_Op' incorporates:
     *  Constant: '<S22>/Op1'
     *  SignalConversion generated from: '<S22>/VeDCAB_e_IOControl_IOCD00D_HigTemAuxPump_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD00D_HigTemAuxPump_Op_Value
        (CeDCAB_e_IO_ReturnControl);

    /* SignalConversion generated from: '<S22>/ErrorCode' incorporates:
     *  Constant: '<S22>/Op2'
     */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S22>/ERR' incorporates:
     *  Constant: '<S22>/Op3'
     */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD00D_Data_RC' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD00D_Data_RD(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(Dcm_NegativeResponseCodeType,
    AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD00D_Data_RD' */
    /* Outport: '<Root>/VeDCAB_Pct_IOCD00D_HigTemAuxPump' incorporates:
     *  Constant: '<S23>/Op'
     *  SignalConversion generated from: '<S23>/VeDCAB_Pct_IOCD00D_HigTemAuxPump'
     */
    (void)Rte_Write_VeDCAB_Pct_IOCD00D_HigTemAuxPump_Value(0.0F);

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD00D_HigTemAuxPump_Op' incorporates:
     *  Constant: '<S23>/Op1'
     *  SignalConversion generated from: '<S23>/VeDCAB_e_IOControl_IOCD00D_HigTemAuxPump_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD00D_HigTemAuxPump_Op_Value
        (CeDCAB_e_IO_ResetToDefault);

    /* SignalConversion generated from: '<S23>/ErrorCode' incorporates:
     *  Constant: '<S23>/Op2'
     */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S23>/ERR' incorporates:
     *  Constant: '<S23>/Op3'
     */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD00D_Data_RD' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD00D_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD00D_Data_ReadData' */
    /* SignalConversion generated from: '<S24>/Data' */
    *Data = 0U;

    /* SignalConversion generated from: '<S24>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD00D_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD00D_Data_SA(P2CONST(uint8,
    AUTOMATIC, DCAB_VAR_INIT) ControlStateInfo, VAR(Dcm_OpStatusType, AUTOMATIC)
    OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT)
    ErrorCode)
{
    Std_ReturnType rty_ERR_j;
    TeDCAB_e_IOControlOpType rtb_Check2_l;
    boolean rtb_Check2;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD00D_Data_SA' */
    /* Logic: '<S25>/Check2' incorporates:
     *  Constant: '<S25>/MaxVal'
     *  RelationalOperator: '<S25>/Check1'
     */
    rtb_Check2 = (((sint32)(*ControlStateInfo)) <= 254);

    /* SignalConversion generated from: '<S25>/ERR' incorporates:
     *  Switch: '<S25>/Check8'
     */
    rty_ERR_j = (Std_ReturnType)((!rtb_Check2) ? 1 : 0);

    /* Switch: '<S25>/Check7' incorporates:
     *  Constant: '<S25>/Op'
     *  Constant: '<S25>/Op1'
     *  Switch: '<S25>/Check6'
     */
    if (rtb_Check2)
    {
        /* SignalConversion generated from: '<S25>/ErrorCode' incorporates:
         *  Constant: '<S25>/Op2'
         */
        *ErrorCode = DCM_POS_RESP;
        rtb_Check2_l = CeDCAB_e_IO_ShortTermAdj;
    }
    else
    {
        /* SignalConversion generated from: '<S25>/ErrorCode' incorporates:
         *  Constant: '<S25>/Op3'
         */
        *ErrorCode = DCM_E_REQUESTOUTOFRANGE;
        rtb_Check2_l = CeDCAB_e_IO_NOP;
    }

    /* End of Switch: '<S25>/Check7' */

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD00D_HigTemAuxPump_Op' incorporates:
     *  Switch: '<S25>/Check6'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD00D_HigTemAuxPump_Op_Value
        (rtb_Check2_l);

    /* Outport: '<Root>/VeDCAB_Pct_IOCD00D_HigTemAuxPump' incorporates:
     *  Constant: '<S25>/Factor'
     *  DataTypeConversion: '<S25>/DTConv1'
     *  DataTypeConversion: '<S25>/DTConv2'
     *  Product: '<S25>/Prod'
     */
    (void)Rte_Write_VeDCAB_Pct_IOCD00D_HigTemAuxPump_Value(((float32)
        (*ControlStateInfo)) * 0.39216F);

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD00D_Data_SA' */
    return rty_ERR_j;
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD012_Data_RC(P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD012_Data_RC' */
    /* Outport: '<Root>/VeDCAB_y_IOCtrlD012APMSts' incorporates:
     *  Constant: '<S26>/Op'
     *  SignalConversion generated from: '<S26>/VeDCAB_y_IOCtrlD012APMSts'
     */
    (void)Rte_Write_VeDCAB_y_IOCtrlD012APMSts_Value((uint8)0U);

    /* Outport: '<Root>/VeDCAB_e_IOControl_APM_Status_Op' incorporates:
     *  Constant: '<S26>/Op1'
     *  SignalConversion generated from: '<S26>/VeDCAB_e_IOControl_APM_Status_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_APM_Status_Op_Value
        (CeDCAB_e_IO_ReturnControl);

    /* SignalConversion generated from: '<S26>/ErrorCode' incorporates:
     *  Constant: '<S26>/Op2'
     */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S26>/ERR' incorporates:
     *  Constant: '<S26>/Op3'
     */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD012_Data_RC' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD012_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD012_Data_ReadData' */
    /* SignalConversion generated from: '<S27>/Data' */
    *Data = 0U;

    /* SignalConversion generated from: '<S27>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD012_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD012_Data_SA(P2CONST(uint8,
    AUTOMATIC, DCAB_VAR_INIT) ControlStateInfo, VAR(Dcm_OpStatusType, AUTOMATIC)
    OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT)
    ErrorCode)
{
    Std_ReturnType rty_ERR_m;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD012_Data_SA' */
    /* SignalConversion generated from: '<S28>/ERR' incorporates:
     *  Switch: '<S28>/Check13'
     */
    rty_ERR_m = 0U;

    /* Switch: '<S28>/Check12' incorporates:
     *  Constant: '<S28>/Op2'
     *  SignalConversion generated from: '<S28>/ErrorCode'
     */
    *ErrorCode = DCM_POS_RESP;

    /* Outport: '<Root>/VeDCAB_e_IOControl_APM_Status_Op' incorporates:
     *  Switch: '<S28>/Check11'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_APM_Status_Op_Value
        ((TeDCAB_e_IOControlOpType)3U);

    /* Outport: '<Root>/VeDCAB_y_IOCtrlD012APMSts' incorporates:
     *  DataTypeConversion: '<S28>/DTConv1'
     *  S-Function (sfix_bitop): '<S28>/Bitwise'
     */
    (void)Rte_Write_VeDCAB_y_IOCtrlD012APMSts_Value((uint8)((*ControlStateInfo)
        & ((uint8)15)));

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD012_Data_SA' */
    return rty_ERR_m;
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD013_Data_RC(P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD013_Data_RC' */
    /* Outport: '<Root>/VeDCAB_n_IOCD013_CompSpdTgt' incorporates:
     *  Constant: '<S29>/Op'
     *  SignalConversion generated from: '<S29>/VeDCAB_n_IOCD013_CompSpdTgt'
     */
    (void)Rte_Write_VeDCAB_n_IOCD013_CompSpdTgt_Value(0.0F);

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD013_CompSpdTgt_Op' incorporates:
     *  Constant: '<S29>/Op1'
     *  SignalConversion generated from: '<S29>/VeDCAB_e_IOControl_IOCD013_CompSpdTgt_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD013_CompSpdTgt_Op_Value
        (CeDCAB_e_IO_ReturnControl);

    /* SignalConversion generated from: '<S29>/ErrorCode' incorporates:
     *  Constant: '<S29>/Op2'
     */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S29>/ERR' incorporates:
     *  Constant: '<S29>/Op3'
     */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD013_Data_RC' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD013_Data_RD(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(Dcm_NegativeResponseCodeType,
    AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD013_Data_RD' */
    /* Outport: '<Root>/VeDCAB_n_IOCD013_CompSpdTgt' incorporates:
     *  Constant: '<S30>/Op'
     *  SignalConversion generated from: '<S30>/VeDCAB_n_IOCD013_CompSpdTgt'
     */
    (void)Rte_Write_VeDCAB_n_IOCD013_CompSpdTgt_Value(0.0F);

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD013_CompSpdTgt_Op' incorporates:
     *  Constant: '<S30>/Op1'
     *  SignalConversion generated from: '<S30>/VeDCAB_e_IOControl_IOCD013_CompSpdTgt_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD013_CompSpdTgt_Op_Value
        (CeDCAB_e_IO_ResetToDefault);

    /* SignalConversion generated from: '<S30>/ErrorCode' incorporates:
     *  Constant: '<S30>/Op2'
     */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S30>/ERR' incorporates:
     *  Constant: '<S30>/Op3'
     */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD013_Data_RD' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD013_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[2])
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD013_Data_ReadData' */
    /* SignalConversion generated from: '<S31>/Data' */
    Data[0] = DCAB_ac_ConstB.Bitwise_j;
    Data[1] = DCAB_ac_ConstB.Bitwise1_l;

    /* SignalConversion generated from: '<S31>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD013_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD013_Data_SA(CONST(uint8,
    AUTOMATIC) ControlStateInfo[2], VAR(Dcm_OpStatusType, AUTOMATIC) OpStatus,
    P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    Std_ReturnType rty_ERR_q;
    uint16 rtb_Bitwise;
    TeDCAB_e_IOControlOpType rtb_Check2_f;
    boolean rtb_Check2;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD013_Data_SA' */
    /* S-Function (sfix_bitop): '<S32>/Bitwise' incorporates:
     *  ArithShift: '<S32>/BitShift'
     *  SignalConversion generated from: '<S32>/Data'
     */
    rtb_Bitwise = (uint16)((sint32)(((sint32)((uint32)(((uint32)
        ControlStateInfo[0]) << 8ULL))) | ((sint32)ControlStateInfo[1])));

    /* Logic: '<S32>/Check2' incorporates:
     *  Constant: '<S32>/MaxVal'
     *  RelationalOperator: '<S32>/Check1'
     */
    rtb_Check2 = (((sint32)rtb_Bitwise) <= 8600);

    /* SignalConversion generated from: '<S32>/ERR' incorporates:
     *  Switch: '<S32>/Check8'
     */
    rty_ERR_q = (Std_ReturnType)((!rtb_Check2) ? 1 : 0);

    /* Switch: '<S32>/Check7' incorporates:
     *  Constant: '<S32>/Op'
     *  Constant: '<S32>/Op1'
     *  Switch: '<S32>/Check6'
     */
    if (rtb_Check2)
    {
        /* SignalConversion generated from: '<S32>/ErrorCode' incorporates:
         *  Constant: '<S32>/Op2'
         */
        *ErrorCode = DCM_POS_RESP;
        rtb_Check2_f = CeDCAB_e_IO_ShortTermAdj;
    }
    else
    {
        /* SignalConversion generated from: '<S32>/ErrorCode' incorporates:
         *  Constant: '<S32>/Op3'
         */
        *ErrorCode = DCM_E_REQUESTOUTOFRANGE;
        rtb_Check2_f = CeDCAB_e_IO_NOP;
    }

    /* End of Switch: '<S32>/Check7' */

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD013_CompSpdTgt_Op' incorporates:
     *  Switch: '<S32>/Check6'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD013_CompSpdTgt_Op_Value(rtb_Check2_f);

    /* Outport: '<Root>/VeDCAB_n_IOCD013_CompSpdTgt' incorporates:
     *  DataTypeConversion: '<S32>/DTConv2'
     *  DataTypeConversion: '<S32>/DTConv3'
     */
    (void)Rte_Write_VeDCAB_n_IOCD013_CompSpdTgt_Value((float32)rtb_Bitwise);

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD013_Data_SA' */
    return rty_ERR_q;
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD014_Data_RC(P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD014_Data_RC' */
    /* Outport: '<Root>/VeDCAB_b_IOCtrlD014ChargePortRq' incorporates:
     *  Constant: '<S33>/Op'
     *  SignalConversion generated from: '<S33>/VeDCAB_b_IOCtrlD014ChargePortRq'
     */
    (void)Rte_Write_VeDCAB_b_IOCtrlD014ChargePortRq_Value(false);

    /* Outport: '<Root>/VeDCAB_e_IOControl_Charge_Port_Lock_Op' incorporates:
     *  Constant: '<S33>/Op1'
     *  SignalConversion generated from: '<S33>/VeDCAB_e_IOControl_Charge_Port_Lock_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_Charge_Port_Lock_Op_Value
        (CeDCAB_e_IO_ReturnControl);

    /* SignalConversion generated from: '<S33>/ErrorCode' incorporates:
     *  Constant: '<S33>/Op2'
     */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S33>/ERR' incorporates:
     *  Constant: '<S33>/Op3'
     */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD014_Data_RC' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD014_Data_RD(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(Dcm_NegativeResponseCodeType,
    AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD014_Data_RD' */
    /* Outport: '<Root>/VeDCAB_b_IOCtrlD014ChargePortRq' incorporates:
     *  Constant: '<S34>/Op'
     *  SignalConversion generated from: '<S34>/VeDCAB_b_IOCtrlD014ChargePortRq'
     */
    (void)Rte_Write_VeDCAB_b_IOCtrlD014ChargePortRq_Value(false);

    /* Outport: '<Root>/VeDCAB_e_IOControl_Charge_Port_Lock_Op' incorporates:
     *  Constant: '<S34>/Op1'
     *  SignalConversion generated from: '<S34>/VeDCAB_e_IOControl_Charge_Port_Lock_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_Charge_Port_Lock_Op_Value
        (CeDCAB_e_IO_ResetToDefault);

    /* SignalConversion generated from: '<S34>/ErrorCode' incorporates:
     *  Constant: '<S34>/Op2'
     */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S34>/ERR' incorporates:
     *  Constant: '<S34>/Op3'
     */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD014_Data_RD' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD014_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    boolean tmpRead;
    boolean tmpRead_0;
    boolean tmpRead_1;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeCITR_b_PortLockBCM_Cmd' */
    (void)Rte_Read_VeCITR_b_PortLockBCM_Cmd_Value(&tmpRead_1);

    /* Inport: '<Root>/VeCITR_b_ChrgPortLockSts' */
    (void)Rte_Read_VeCITR_b_ChrgPortLockSts_Value(&tmpRead_0);

    /* Inport: '<Root>/VeCITR_b_DVC_ChrgPortRq' */
    (void)Rte_Read_VeCITR_b_DVC_ChrgPortRq_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD014_Data_ReadData' */
    /* SignalConversion generated from: '<S35>/Data' incorporates:
     *  ArithShift: '<S35>/Shift Arithmetic'
     *  ArithShift: '<S35>/Shift Arithmetic1'
     *  DataTypeConversion: '<S35>/DTConv1'
     *  DataTypeConversion: '<S35>/DTConv2'
     *  DataTypeConversion: '<S35>/DTConv3'
     *  S-Function (sfix_bitop): '<S35>/Bitwise OR'
     *  SignalConversion generated from: '<S35>/VeCITR_b_ChrgPortLockSts'
     *  SignalConversion generated from: '<S35>/VeCITR_b_DVC_ChrgPortRq'
     *  SignalConversion generated from: '<S35>/VeCITR_b_PortLockBCM_Cmd'
     */
    *Data = (uint8)((sint32)((((tmpRead_0 ? 1 : 0) * 2) | (tmpRead ? 1 : 0)) |
                     ((tmpRead_1 ? 1 : 0) * 4)));

    /* SignalConversion generated from: '<S35>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD014_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD014_Data_SA(P2CONST(uint8,
    AUTOMATIC, DCAB_VAR_INIT) ControlStateInfo, VAR(Dcm_OpStatusType, AUTOMATIC)
    OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT)
    ErrorCode)
{
    Std_ReturnType rty_ERR_u;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD014_Data_SA' */
    /* SignalConversion generated from: '<S36>/ERR' incorporates:
     *  Switch: '<S36>/Check23'
     */
    rty_ERR_u = 0U;

    /* Switch: '<S36>/Check22' incorporates:
     *  Constant: '<S36>/Op2'
     *  SignalConversion generated from: '<S36>/ErrorCode'
     */
    *ErrorCode = DCM_POS_RESP;

    /* Outport: '<Root>/VeDCAB_e_IOControl_Charge_Port_Lock_Op' incorporates:
     *  Switch: '<S36>/Check21'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_Charge_Port_Lock_Op_Value
        ((TeDCAB_e_IOControlOpType)3U);

    /* Outport: '<Root>/VeDCAB_b_IOCtrlD014ChargePortRq' incorporates:
     *  DataTypeConversion: '<S36>/DTConv1'
     *  S-Function (sfix_bitop): '<S36>/Bitwise'
     */
    (void)Rte_Write_VeDCAB_b_IOCtrlD014ChargePortRq_Value(((sint32)((uint8)
        ((*ControlStateInfo) & ((uint8)1)))) != 0);

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD014_Data_SA' */
    return rty_ERR_u;
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD016_Data_RC(P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD016_Data_RC' */
    /* Outport: '<Root>/VeDCAB_Pct_IOCD016_MtrElecCoolPmpA' incorporates:
     *  Constant: '<S37>/Op'
     *  SignalConversion generated from: '<S37>/VeDCAB_Pct_IOCD016_MtrElecCoolPmpA'
     */
    (void)Rte_Write_VeDCAB_Pct_IOCD016_MtrElecCoolPmpA_Value(0.0F);

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD016_MtrElecCoolPmpA_Op' incorporates:
     *  Constant: '<S37>/Op1'
     *  SignalConversion generated from: '<S37>/VeDCAB_e_IOControl_IOCD016_MtrElecCoolPmpA_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD016_MtrElecCoolPmpA_Op_Value
        (CeDCAB_e_IO_ReturnControl);

    /* SignalConversion generated from: '<S37>/ErrorCode' incorporates:
     *  Constant: '<S37>/Op2'
     */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S37>/ERR' incorporates:
     *  Constant: '<S37>/Op3'
     */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD016_Data_RC' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD016_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD016_Data_ReadData' */
    /* SignalConversion generated from: '<S38>/Data' */
    *Data = 0U;

    /* SignalConversion generated from: '<S38>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD016_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD016_Data_SA(P2CONST(uint8,
    AUTOMATIC, DCAB_VAR_INIT) ControlStateInfo, VAR(Dcm_OpStatusType, AUTOMATIC)
    OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT)
    ErrorCode)
{
    Std_ReturnType rty_ERR_x;
    TeDCAB_e_IOControlOpType rtb_Check2_cn;
    boolean rtb_Check2;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD016_Data_SA' */
    /* Logic: '<S39>/Check2' incorporates:
     *  Constant: '<S39>/MaxVal'
     *  RelationalOperator: '<S39>/Check1'
     */
    rtb_Check2 = (((sint32)(*ControlStateInfo)) <= 254);

    /* SignalConversion generated from: '<S39>/ERR' incorporates:
     *  Switch: '<S39>/Check8'
     */
    rty_ERR_x = (Std_ReturnType)((!rtb_Check2) ? 1 : 0);

    /* Switch: '<S39>/Check7' incorporates:
     *  Constant: '<S39>/Op'
     *  Constant: '<S39>/Op1'
     *  Switch: '<S39>/Check6'
     */
    if (rtb_Check2)
    {
        /* SignalConversion generated from: '<S39>/ErrorCode' incorporates:
         *  Constant: '<S39>/Op2'
         */
        *ErrorCode = DCM_POS_RESP;
        rtb_Check2_cn = CeDCAB_e_IO_ShortTermAdj;
    }
    else
    {
        /* SignalConversion generated from: '<S39>/ErrorCode' incorporates:
         *  Constant: '<S39>/Op3'
         */
        *ErrorCode = DCM_E_REQUESTOUTOFRANGE;
        rtb_Check2_cn = CeDCAB_e_IO_NOP;
    }

    /* End of Switch: '<S39>/Check7' */

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD016_MtrElecCoolPmpA_Op' incorporates:
     *  Switch: '<S39>/Check6'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD016_MtrElecCoolPmpA_Op_Value
        (rtb_Check2_cn);

    /* Outport: '<Root>/VeDCAB_Pct_IOCD016_MtrElecCoolPmpA' incorporates:
     *  Constant: '<S39>/Factor'
     *  DataTypeConversion: '<S39>/DTConv1'
     *  DataTypeConversion: '<S39>/DTConv2'
     *  Product: '<S39>/Prod'
     */
    (void)Rte_Write_VeDCAB_Pct_IOCD016_MtrElecCoolPmpA_Value(((float32)
        (*ControlStateInfo)) * 0.3937F);

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD016_Data_SA' */
    return rty_ERR_x;
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD017_Data_RC(P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD017_Data_RC' */
    /* Outport: '<Root>/VeDCAB_Pct_IOCD017_MtrElecCoolPmpB' incorporates:
     *  Constant: '<S40>/Op'
     *  SignalConversion generated from: '<S40>/VeDCAB_Pct_IOCD017_MtrElecCoolPmpB'
     */
    (void)Rte_Write_VeDCAB_Pct_IOCD017_MtrElecCoolPmpB_Value(0.0F);

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD017_MtrElecCoolPmpB_Op' incorporates:
     *  Constant: '<S40>/Op1'
     *  SignalConversion generated from: '<S40>/VeDCAB_e_IOControl_IOCD017_MtrElecCoolPmpB_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD017_MtrElecCoolPmpB_Op_Value
        (CeDCAB_e_IO_ReturnControl);

    /* SignalConversion generated from: '<S40>/ErrorCode' incorporates:
     *  Constant: '<S40>/Op2'
     */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S40>/ERR' incorporates:
     *  Constant: '<S40>/Op3'
     */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD017_Data_RC' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD017_Data_RD(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(Dcm_NegativeResponseCodeType,
    AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD017_Data_RD' */
    /* Outport: '<Root>/VeDCAB_Pct_IOCD017_MtrElecCoolPmpB' incorporates:
     *  Constant: '<S41>/Op'
     *  SignalConversion generated from: '<S41>/VeDCAB_Pct_IOCD017_MtrElecCoolPmpB'
     */
    (void)Rte_Write_VeDCAB_Pct_IOCD017_MtrElecCoolPmpB_Value(0.0F);

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD017_MtrElecCoolPmpB_Op' incorporates:
     *  Constant: '<S41>/Op1'
     *  SignalConversion generated from: '<S41>/VeDCAB_e_IOControl_IOCD017_MtrElecCoolPmpB_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD017_MtrElecCoolPmpB_Op_Value
        (CeDCAB_e_IO_ResetToDefault);

    /* SignalConversion generated from: '<S41>/ErrorCode' incorporates:
     *  Constant: '<S41>/Op2'
     */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S41>/ERR' incorporates:
     *  Constant: '<S41>/Op3'
     */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD017_Data_RD' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD017_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD017_Data_ReadData' */
    /* SignalConversion generated from: '<S42>/Data' */
    *Data = 0U;

    /* SignalConversion generated from: '<S42>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD017_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD017_Data_SA(P2CONST(uint8,
    AUTOMATIC, DCAB_VAR_INIT) ControlStateInfo, VAR(Dcm_OpStatusType, AUTOMATIC)
    OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT)
    ErrorCode)
{
    Std_ReturnType rty_ERR_11;
    TeDCAB_e_IOControlOpType rtb_Check2_k;
    boolean rtb_Check2;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD017_Data_SA' */
    /* Logic: '<S43>/Check2' incorporates:
     *  Constant: '<S43>/MaxVal'
     *  RelationalOperator: '<S43>/Check1'
     */
    rtb_Check2 = (((sint32)(*ControlStateInfo)) <= 254);

    /* SignalConversion generated from: '<S43>/ERR' incorporates:
     *  Switch: '<S43>/Check8'
     */
    rty_ERR_11 = (Std_ReturnType)((!rtb_Check2) ? 1 : 0);

    /* Switch: '<S43>/Check7' incorporates:
     *  Constant: '<S43>/Op'
     *  Constant: '<S43>/Op1'
     *  Switch: '<S43>/Check6'
     */
    if (rtb_Check2)
    {
        /* SignalConversion generated from: '<S43>/ErrorCode' incorporates:
         *  Constant: '<S43>/Op2'
         */
        *ErrorCode = DCM_POS_RESP;
        rtb_Check2_k = CeDCAB_e_IO_ShortTermAdj;
    }
    else
    {
        /* SignalConversion generated from: '<S43>/ErrorCode' incorporates:
         *  Constant: '<S43>/Op3'
         */
        *ErrorCode = DCM_E_REQUESTOUTOFRANGE;
        rtb_Check2_k = CeDCAB_e_IO_NOP;
    }

    /* End of Switch: '<S43>/Check7' */

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD017_MtrElecCoolPmpB_Op' incorporates:
     *  Switch: '<S43>/Check6'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD017_MtrElecCoolPmpB_Op_Value
        (rtb_Check2_k);

    /* Outport: '<Root>/VeDCAB_Pct_IOCD017_MtrElecCoolPmpB' incorporates:
     *  Constant: '<S43>/Factor'
     *  DataTypeConversion: '<S43>/DTConv1'
     *  DataTypeConversion: '<S43>/DTConv2'
     *  Product: '<S43>/Prod'
     */
    (void)Rte_Write_VeDCAB_Pct_IOCD017_MtrElecCoolPmpB_Value(((float32)
        (*ControlStateInfo)) * 0.3937F);

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD017_Data_SA' */
    return rty_ERR_11;
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD019_Data_RC(P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD019_Data_RC' */
    /* Outport: '<Root>/VeDCAB_Pct_IOCD019_BatteryCoolPump' incorporates:
     *  Constant: '<S44>/Op'
     *  SignalConversion generated from: '<S44>/VeDCAB_Pct_IOCD019_BatteryCoolPump'
     */
    (void)Rte_Write_VeDCAB_Pct_IOCD019_BatteryCoolPump_Value(0.0F);

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD019_BatteryCoolPump_Op' incorporates:
     *  Constant: '<S44>/Op1'
     *  SignalConversion generated from: '<S44>/VeDCAB_e_IOControl_IOCD019_BatteryCoolPump_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD019_BatteryCoolPump_Op_Value
        (CeDCAB_e_IO_ReturnControl);

    /* SignalConversion generated from: '<S44>/ErrorCode' incorporates:
     *  Constant: '<S44>/Op2'
     */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S44>/ERR' incorporates:
     *  Constant: '<S44>/Op3'
     */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD019_Data_RC' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD019_Data_RD(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(Dcm_NegativeResponseCodeType,
    AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD019_Data_RD' */
    /* Outport: '<Root>/VeDCAB_Pct_IOCD019_BatteryCoolPump' incorporates:
     *  Constant: '<S45>/Op'
     *  SignalConversion generated from: '<S45>/VeDCAB_Pct_IOCD019_BatteryCoolPump'
     */
    (void)Rte_Write_VeDCAB_Pct_IOCD019_BatteryCoolPump_Value(0.0F);

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD019_BatteryCoolPump_Op' incorporates:
     *  Constant: '<S45>/Op1'
     *  SignalConversion generated from: '<S45>/VeDCAB_e_IOControl_IOCD019_BatteryCoolPump_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD019_BatteryCoolPump_Op_Value
        (CeDCAB_e_IO_ResetToDefault);

    /* SignalConversion generated from: '<S45>/ErrorCode' incorporates:
     *  Constant: '<S45>/Op2'
     */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S45>/ERR' incorporates:
     *  Constant: '<S45>/Op3'
     */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD019_Data_RD' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD019_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD019_Data_ReadData' */
    /* SignalConversion generated from: '<S46>/Data' */
    *Data = 0U;

    /* SignalConversion generated from: '<S46>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD019_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD019_Data_SA(P2CONST(uint8,
    AUTOMATIC, DCAB_VAR_INIT) ControlStateInfo, VAR(Dcm_OpStatusType, AUTOMATIC)
    OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT)
    ErrorCode)
{
    Std_ReturnType rty_ERR_15;
    TeDCAB_e_IOControlOpType rtb_Check2_g;
    boolean rtb_Check2;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD019_Data_SA' */
    /* Logic: '<S47>/Check2' incorporates:
     *  Constant: '<S47>/MaxVal'
     *  RelationalOperator: '<S47>/Check1'
     */
    rtb_Check2 = (((sint32)(*ControlStateInfo)) <= 254);

    /* SignalConversion generated from: '<S47>/ERR' incorporates:
     *  Switch: '<S47>/Check8'
     */
    rty_ERR_15 = (Std_ReturnType)((!rtb_Check2) ? 1 : 0);

    /* Switch: '<S47>/Check7' incorporates:
     *  Constant: '<S47>/Op'
     *  Constant: '<S47>/Op1'
     *  Switch: '<S47>/Check6'
     */
    if (rtb_Check2)
    {
        /* SignalConversion generated from: '<S47>/ErrorCode' incorporates:
         *  Constant: '<S47>/Op2'
         */
        *ErrorCode = DCM_POS_RESP;
        rtb_Check2_g = CeDCAB_e_IO_ShortTermAdj;
    }
    else
    {
        /* SignalConversion generated from: '<S47>/ErrorCode' incorporates:
         *  Constant: '<S47>/Op3'
         */
        *ErrorCode = DCM_E_REQUESTOUTOFRANGE;
        rtb_Check2_g = CeDCAB_e_IO_NOP;
    }

    /* End of Switch: '<S47>/Check7' */

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD019_BatteryCoolPump_Op' incorporates:
     *  Switch: '<S47>/Check6'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD019_BatteryCoolPump_Op_Value
        (rtb_Check2_g);

    /* Outport: '<Root>/VeDCAB_Pct_IOCD019_BatteryCoolPump' incorporates:
     *  Constant: '<S47>/Factor'
     *  DataTypeConversion: '<S47>/DTConv1'
     *  DataTypeConversion: '<S47>/DTConv2'
     *  Product: '<S47>/Prod'
     */
    (void)Rte_Write_VeDCAB_Pct_IOCD019_BatteryCoolPump_Value(((float32)
        (*ControlStateInfo)) * 0.3937F);

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD019_Data_SA' */
    return rty_ERR_15;
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD01A_Data_RC(P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD01A_Data_RC' */
    /* Outport: '<Root>/VeDCAB_W_IOCD01A_BatCooHea' incorporates:
     *  Constant: '<S48>/Op'
     *  SignalConversion generated from: '<S48>/VeDCAB_W_IOCD01A_BatCooHea'
     */
    (void)Rte_Write_VeDCAB_W_IOCD01A_BatCooHea_Value(0.0F);

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD01A_BatCooHea_Op' incorporates:
     *  Constant: '<S48>/Op1'
     *  SignalConversion generated from: '<S48>/VeDCAB_e_IOControl_IOCD01A_BatCooHea_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD01A_BatCooHea_Op_Value
        (CeDCAB_e_IO_ReturnControl);

    /* SignalConversion generated from: '<S48>/ErrorCode' incorporates:
     *  Constant: '<S48>/Op2'
     */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S48>/ERR' incorporates:
     *  Constant: '<S48>/Op3'
     */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD01A_Data_RC' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD01A_Data_RD(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(Dcm_NegativeResponseCodeType,
    AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD01A_Data_RD' */
    /* Outport: '<Root>/VeDCAB_W_IOCD01A_BatCooHea' incorporates:
     *  Constant: '<S49>/Op'
     *  SignalConversion generated from: '<S49>/VeDCAB_W_IOCD01A_BatCooHea'
     */
    (void)Rte_Write_VeDCAB_W_IOCD01A_BatCooHea_Value(0.0F);

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD01A_BatCooHea_Op' incorporates:
     *  Constant: '<S49>/Op1'
     *  SignalConversion generated from: '<S49>/VeDCAB_e_IOControl_IOCD01A_BatCooHea_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD01A_BatCooHea_Op_Value
        (CeDCAB_e_IO_ResetToDefault);

    /* SignalConversion generated from: '<S49>/ErrorCode' incorporates:
     *  Constant: '<S49>/Op2'
     */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S49>/ERR' incorporates:
     *  Constant: '<S49>/Op3'
     */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD01A_Data_RD' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD01A_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD01A_Data_ReadData' */
    /* SignalConversion generated from: '<S50>/Data' */
    *Data = 0U;

    /* SignalConversion generated from: '<S50>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD01A_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD01A_Data_SA(P2CONST(uint8,
    AUTOMATIC, DCAB_VAR_INIT) ControlStateInfo, VAR(Dcm_OpStatusType, AUTOMATIC)
    OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT)
    ErrorCode)
{
    Std_ReturnType rty_ERR_19;
    TeDCAB_e_IOControlOpType rtb_Check2_gk;
    boolean rtb_Check2;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD01A_Data_SA' */
    /* Logic: '<S51>/Check2' incorporates:
     *  Constant: '<S51>/MaxVal'
     *  RelationalOperator: '<S51>/Check1'
     */
    rtb_Check2 = (((sint32)(*ControlStateInfo)) <= 254);

    /* SignalConversion generated from: '<S51>/ERR' incorporates:
     *  Switch: '<S51>/Check8'
     */
    rty_ERR_19 = (Std_ReturnType)((!rtb_Check2) ? 1 : 0);

    /* Switch: '<S51>/Check7' incorporates:
     *  Constant: '<S51>/Op'
     *  Constant: '<S51>/Op1'
     *  Switch: '<S51>/Check6'
     */
    if (rtb_Check2)
    {
        /* SignalConversion generated from: '<S51>/ErrorCode' incorporates:
         *  Constant: '<S51>/Op2'
         */
        *ErrorCode = DCM_POS_RESP;
        rtb_Check2_gk = CeDCAB_e_IO_ShortTermAdj;
    }
    else
    {
        /* SignalConversion generated from: '<S51>/ErrorCode' incorporates:
         *  Constant: '<S51>/Op3'
         */
        *ErrorCode = DCM_E_REQUESTOUTOFRANGE;
        rtb_Check2_gk = CeDCAB_e_IO_NOP;
    }

    /* End of Switch: '<S51>/Check7' */

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD01A_BatCooHea_Op' incorporates:
     *  Switch: '<S51>/Check6'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD01A_BatCooHea_Op_Value(rtb_Check2_gk);

    /* Outport: '<Root>/VeDCAB_W_IOCD01A_BatCooHea' incorporates:
     *  Constant: '<S51>/Factor'
     *  DataTypeConversion: '<S51>/DTConv1'
     *  DataTypeConversion: '<S51>/DTConv2'
     *  Product: '<S51>/Prod'
     */
    (void)Rte_Write_VeDCAB_W_IOCD01A_BatCooHea_Value(((float32)
        (*ControlStateInfo)) * 40.0F);

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD01A_Data_SA' */
    return rty_ERR_19;
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD01C_Data_RC(P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD01C_Data_RC' */
    /* Outport: '<Root>/VeDCAB_Pct_IOCDOIC_PropSysCoolCntrlValvA' incorporates:
     *  Constant: '<S52>/Op'
     *  SignalConversion generated from: '<S52>/VeDCAB_Pct_IOCDOIC_PropSysCoolCntrlValvA'
     */
    (void)Rte_Write_VeDCAB_Pct_IOCDOIC_PropSysCoolCntrlValvA_Value(0.0F);

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCDOIC_PropSysCoolCntrlValvA_Op' incorporates:
     *  Constant: '<S52>/Op1'
     *  SignalConversion generated from: '<S52>/VeDCAB_e_IOControl_IOCDOIC_PropSysCoolCntrlValvA_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCDOIC_PropSysCoolCntrlValvA_Op_Value
        (CeDCAB_e_IO_ReturnControl);

    /* SignalConversion generated from: '<S52>/ErrorCode' incorporates:
     *  Constant: '<S52>/Op2'
     */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S52>/ERR' incorporates:
     *  Constant: '<S52>/Op3'
     */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD01C_Data_RC' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD01C_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD01C_Data_ReadData' */
    /* SignalConversion generated from: '<S53>/Data' */
    *Data = 0U;

    /* SignalConversion generated from: '<S53>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD01C_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD01C_Data_SA(P2CONST(uint8,
    AUTOMATIC, DCAB_VAR_INIT) ControlStateInfo, VAR(Dcm_OpStatusType, AUTOMATIC)
    OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT)
    ErrorCode)
{
    Std_ReturnType rty_ERR_1c;
    TeDCAB_e_IOControlOpType rtb_Check2_k5;
    boolean rtb_Check2;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD01C_Data_SA' */
    /* Logic: '<S54>/Check2' incorporates:
     *  Constant: '<S54>/MaxVal'
     *  RelationalOperator: '<S54>/Check1'
     */
    rtb_Check2 = (((sint32)(*ControlStateInfo)) <= 200);

    /* SignalConversion generated from: '<S54>/ERR' incorporates:
     *  Switch: '<S54>/Check8'
     */
    rty_ERR_1c = (Std_ReturnType)((!rtb_Check2) ? 1 : 0);

    /* Switch: '<S54>/Check7' incorporates:
     *  Constant: '<S54>/Op'
     *  Constant: '<S54>/Op1'
     *  Switch: '<S54>/Check6'
     */
    if (rtb_Check2)
    {
        /* SignalConversion generated from: '<S54>/ErrorCode' incorporates:
         *  Constant: '<S54>/Op2'
         */
        *ErrorCode = DCM_POS_RESP;
        rtb_Check2_k5 = CeDCAB_e_IO_ShortTermAdj;
    }
    else
    {
        /* SignalConversion generated from: '<S54>/ErrorCode' incorporates:
         *  Constant: '<S54>/Op3'
         */
        *ErrorCode = DCM_E_REQUESTOUTOFRANGE;
        rtb_Check2_k5 = CeDCAB_e_IO_NOP;
    }

    /* End of Switch: '<S54>/Check7' */

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCDOIC_PropSysCoolCntrlValvA_Op' incorporates:
     *  Switch: '<S54>/Check6'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCDOIC_PropSysCoolCntrlValvA_Op_Value
        (rtb_Check2_k5);

    /* Outport: '<Root>/VeDCAB_Pct_IOCDOIC_PropSysCoolCntrlValvA' incorporates:
     *  Constant: '<S54>/Factor'
     *  DataTypeConversion: '<S54>/DTConv1'
     *  DataTypeConversion: '<S54>/DTConv2'
     *  Product: '<S54>/Prod'
     */
    (void)Rte_Write_VeDCAB_Pct_IOCDOIC_PropSysCoolCntrlValvA_Value(((float32)
        (*ControlStateInfo)) * 0.5F);

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD01C_Data_SA' */
    return rty_ERR_1c;
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD01E_Data_RC(P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD01E_Data_RC' */
    /* Outport: '<Root>/VeDCAB_Pct_IOCD01E_AirHeaCon' incorporates:
     *  Constant: '<S55>/Op'
     *  SignalConversion generated from: '<S55>/VeDCAB_Pct_IOCD01E_AirHeaCon'
     */
    (void)Rte_Write_VeDCAB_Pct_IOCD01E_AirHeaCon_Value(0.0F);

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD01E_AirHeaCon_Op' incorporates:
     *  Constant: '<S55>/Op1'
     *  SignalConversion generated from: '<S55>/VeDCAB_e_IOControl_IOCD01E_AirHeaCon_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD01E_AirHeaCon_Op_Value
        (CeDCAB_e_IO_ReturnControl);

    /* SignalConversion generated from: '<S55>/ErrorCode' incorporates:
     *  Constant: '<S55>/Op2'
     */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S55>/ERR' incorporates:
     *  Constant: '<S55>/Op3'
     */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD01E_Data_RC' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD01E_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD01E_Data_ReadData' */
    /* SignalConversion generated from: '<S56>/Data' */
    *Data = 0U;

    /* SignalConversion generated from: '<S56>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD01E_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD01E_Data_SA(P2CONST(uint8,
    AUTOMATIC, DCAB_VAR_INIT) ControlStateInfo, VAR(Dcm_OpStatusType, AUTOMATIC)
    OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT)
    ErrorCode)
{
    Std_ReturnType rty_ERR_1f;
    TeDCAB_e_IOControlOpType rtb_Check2_b;
    boolean rtb_Check2;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD01E_Data_SA' */
    /* Logic: '<S57>/Check2' incorporates:
     *  Constant: '<S57>/MaxVal'
     *  RelationalOperator: '<S57>/Check1'
     */
    rtb_Check2 = (((sint32)(*ControlStateInfo)) <= 150);

    /* SignalConversion generated from: '<S57>/ERR' incorporates:
     *  Switch: '<S57>/Check8'
     */
    rty_ERR_1f = (Std_ReturnType)((!rtb_Check2) ? 1 : 0);

    /* Switch: '<S57>/Check7' incorporates:
     *  Constant: '<S57>/Op'
     *  Constant: '<S57>/Op1'
     *  Switch: '<S57>/Check6'
     */
    if (rtb_Check2)
    {
        /* SignalConversion generated from: '<S57>/ErrorCode' incorporates:
         *  Constant: '<S57>/Op2'
         */
        *ErrorCode = DCM_POS_RESP;
        rtb_Check2_b = CeDCAB_e_IO_ShortTermAdj;
    }
    else
    {
        /* SignalConversion generated from: '<S57>/ErrorCode' incorporates:
         *  Constant: '<S57>/Op3'
         */
        *ErrorCode = DCM_E_REQUESTOUTOFRANGE;
        rtb_Check2_b = CeDCAB_e_IO_NOP;
    }

    /* End of Switch: '<S57>/Check7' */

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD01E_AirHeaCon_Op' incorporates:
     *  Switch: '<S57>/Check6'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD01E_AirHeaCon_Op_Value(rtb_Check2_b);

    /* Outport: '<Root>/VeDCAB_Pct_IOCD01E_AirHeaCon' incorporates:
     *  DataTypeConversion: '<S57>/DTConv1'
     *  DataTypeConversion: '<S57>/DTConv2'
     */
    (void)Rte_Write_VeDCAB_Pct_IOCD01E_AirHeaCon_Value((float32)
        (*ControlStateInfo));

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD01E_Data_SA' */
    return rty_ERR_1f;
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD01F_Data_RC(P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD01F_Data_RC' */
    /* Outport: '<Root>/VeDCAB_Pct_IOCD01F_ACRefrExpValvActACntrl' incorporates:
     *  Constant: '<S58>/Op'
     *  SignalConversion generated from: '<S58>/VeDCAB_Pct_IOCD01F_ACRefrExpValvActACntrl'
     */
    (void)Rte_Write_VeDCAB_Pct_IOCD01F_ACRefrExpValvActACntrl_Value(0.0F);

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD01F_ACRefrExpValvActACntrl_Op' incorporates:
     *  Constant: '<S58>/Op1'
     *  SignalConversion generated from: '<S58>/VeDCAB_e_IOControl_IOCD01F_ACRefrExpValvActACntrl_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD01F_ACRefrExpValvActACntrl_Op_Value
        (CeDCAB_e_IO_ReturnControl);

    /* SignalConversion generated from: '<S58>/ErrorCode' incorporates:
     *  Constant: '<S58>/Op2'
     */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S58>/ERR' incorporates:
     *  Constant: '<S58>/Op3'
     */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD01F_Data_RC' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD01F_Data_RD(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(Dcm_NegativeResponseCodeType,
    AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD01F_Data_RD' */
    /* Outport: '<Root>/VeDCAB_Pct_IOCD01F_ACRefrExpValvActACntrl' incorporates:
     *  Constant: '<S59>/Op'
     *  SignalConversion generated from: '<S59>/VeDCAB_Pct_IOCD01F_ACRefrExpValvActACntrl'
     */
    (void)Rte_Write_VeDCAB_Pct_IOCD01F_ACRefrExpValvActACntrl_Value(0.0F);

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD01F_ACRefrExpValvActACntrl_Op' incorporates:
     *  Constant: '<S59>/Op1'
     *  SignalConversion generated from: '<S59>/VeDCAB_e_IOControl_IOCD01F_ACRefrExpValvActACntrl_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD01F_ACRefrExpValvActACntrl_Op_Value
        (CeDCAB_e_IO_ResetToDefault);

    /* SignalConversion generated from: '<S59>/ErrorCode' incorporates:
     *  Constant: '<S59>/Op2'
     */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S59>/ERR' incorporates:
     *  Constant: '<S59>/Op3'
     */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD01F_Data_RD' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD01F_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[2])
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD01F_Data_ReadData' */
    /* SignalConversion generated from: '<S60>/Data' */
    Data[0] = DCAB_ac_ConstB.Bitwise_f;
    Data[1] = DCAB_ac_ConstB.Bitwise1_k;

    /* SignalConversion generated from: '<S60>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD01F_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD01F_Data_SA(CONST(uint8,
    AUTOMATIC) ControlStateInfo[2], VAR(Dcm_OpStatusType, AUTOMATIC) OpStatus,
    P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    Std_ReturnType rty_ERR_1j;
    uint16 rtb_Bitwise;
    TeDCAB_e_IOControlOpType rtb_Check2_d;
    boolean rtb_Check2;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD01F_Data_SA' */
    /* S-Function (sfix_bitop): '<S61>/Bitwise' incorporates:
     *  ArithShift: '<S61>/BitShift'
     *  SignalConversion generated from: '<S61>/Data'
     */
    rtb_Bitwise = (uint16)((sint32)(((sint32)((uint32)(((uint32)
        ControlStateInfo[0]) << 8ULL))) | ((sint32)ControlStateInfo[1])));

    /* Logic: '<S61>/Check2' incorporates:
     *  Constant: '<S61>/MaxVal'
     *  RelationalOperator: '<S61>/Check1'
     */
    rtb_Check2 = (((sint32)rtb_Bitwise) <= 1020);

    /* SignalConversion generated from: '<S61>/ERR' incorporates:
     *  Switch: '<S61>/Check8'
     */
    rty_ERR_1j = (Std_ReturnType)((!rtb_Check2) ? 1 : 0);

    /* Switch: '<S61>/Check7' incorporates:
     *  Constant: '<S61>/Op'
     *  Constant: '<S61>/Op1'
     *  Switch: '<S61>/Check6'
     */
    if (rtb_Check2)
    {
        /* SignalConversion generated from: '<S61>/ErrorCode' incorporates:
         *  Constant: '<S61>/Op2'
         */
        *ErrorCode = DCM_POS_RESP;
        rtb_Check2_d = CeDCAB_e_IO_ShortTermAdj;
    }
    else
    {
        /* SignalConversion generated from: '<S61>/ErrorCode' incorporates:
         *  Constant: '<S61>/Op3'
         */
        *ErrorCode = DCM_E_REQUESTOUTOFRANGE;
        rtb_Check2_d = CeDCAB_e_IO_NOP;
    }

    /* End of Switch: '<S61>/Check7' */

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD01F_ACRefrExpValvActACntrl_Op' incorporates:
     *  Switch: '<S61>/Check6'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD01F_ACRefrExpValvActACntrl_Op_Value
        (rtb_Check2_d);

    /* Outport: '<Root>/VeDCAB_Pct_IOCD01F_ACRefrExpValvActACntrl' incorporates:
     *  Constant: '<S61>/Factor'
     *  DataTypeConversion: '<S61>/DTConv2'
     *  DataTypeConversion: '<S61>/DTConv3'
     *  Product: '<S61>/Prod'
     */
    (void)Rte_Write_VeDCAB_Pct_IOCD01F_ACRefrExpValvActACntrl_Value(((float32)
        rtb_Bitwise) * 0.1F);

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD01F_Data_SA' */
    return rty_ERR_1j;
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD022_Data_RC(P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD022_Data_RC' */
    /* Outport: '<Root>/VeDCAB_Pct_IOCD022_PropSysCoolCntrlValvB' incorporates:
     *  Constant: '<S62>/Op'
     *  SignalConversion generated from: '<S62>/VeDCAB_Pct_IOCD022_PropSysCoolCntrlValvB'
     */
    (void)Rte_Write_VeDCAB_Pct_IOCD022_PropSysCoolCntrlValvB_Value(0.0F);

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD022_PropSysCoolCntrlValvB_Op' incorporates:
     *  Constant: '<S62>/Op1'
     *  SignalConversion generated from: '<S62>/VeDCAB_e_IOControl_IOCD022_PropSysCoolCntrlValvB_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD022_PropSysCoolCntrlValvB_Op_Value
        (CeDCAB_e_IO_ReturnControl);

    /* SignalConversion generated from: '<S62>/ErrorCode' incorporates:
     *  Constant: '<S62>/Op2'
     */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S62>/ERR' incorporates:
     *  Constant: '<S62>/Op3'
     */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD022_Data_RC' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD022_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD022_Data_ReadData' */
    /* SignalConversion generated from: '<S63>/Data' */
    *Data = 0U;

    /* SignalConversion generated from: '<S63>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD022_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD022_Data_SA(P2CONST(uint8,
    AUTOMATIC, DCAB_VAR_INIT) ControlStateInfo, VAR(Dcm_OpStatusType, AUTOMATIC)
    OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT)
    ErrorCode)
{
    Std_ReturnType rty_ERR_1m;
    TeDCAB_e_IOControlOpType rtb_Check2_j;
    boolean rtb_Check2;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD022_Data_SA' */
    /* Logic: '<S64>/Check2' incorporates:
     *  Constant: '<S64>/MaxVal'
     *  RelationalOperator: '<S64>/Check1'
     */
    rtb_Check2 = (((sint32)(*ControlStateInfo)) <= 200);

    /* SignalConversion generated from: '<S64>/ERR' incorporates:
     *  Switch: '<S64>/Check8'
     */
    rty_ERR_1m = (Std_ReturnType)((!rtb_Check2) ? 1 : 0);

    /* Switch: '<S64>/Check7' incorporates:
     *  Constant: '<S64>/Op'
     *  Constant: '<S64>/Op1'
     *  Switch: '<S64>/Check6'
     */
    if (rtb_Check2)
    {
        /* SignalConversion generated from: '<S64>/ErrorCode' incorporates:
         *  Constant: '<S64>/Op2'
         */
        *ErrorCode = DCM_POS_RESP;
        rtb_Check2_j = CeDCAB_e_IO_ShortTermAdj;
    }
    else
    {
        /* SignalConversion generated from: '<S64>/ErrorCode' incorporates:
         *  Constant: '<S64>/Op3'
         */
        *ErrorCode = DCM_E_REQUESTOUTOFRANGE;
        rtb_Check2_j = CeDCAB_e_IO_NOP;
    }

    /* End of Switch: '<S64>/Check7' */

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD022_PropSysCoolCntrlValvB_Op' incorporates:
     *  Switch: '<S64>/Check6'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD022_PropSysCoolCntrlValvB_Op_Value
        (rtb_Check2_j);

    /* Outport: '<Root>/VeDCAB_Pct_IOCD022_PropSysCoolCntrlValvB' incorporates:
     *  Constant: '<S64>/Factor'
     *  DataTypeConversion: '<S64>/DTConv1'
     *  DataTypeConversion: '<S64>/DTConv2'
     *  Product: '<S64>/Prod'
     */
    (void)Rte_Write_VeDCAB_Pct_IOCD022_PropSysCoolCntrlValvB_Value(((float32)
        (*ControlStateInfo)) * 0.5F);

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD022_Data_SA' */
    return rty_ERR_1m;
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD023_Data_RC(P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD023_Data_RC' */
    /* Outport: '<Root>/VeDCAB_Pct_IOCD023_PropSysCoolCntrlValvC' incorporates:
     *  Constant: '<S65>/Op'
     *  SignalConversion generated from: '<S65>/VeDCAB_Pct_IOCD023_PropSysCoolCntrlValvC'
     */
    (void)Rte_Write_VeDCAB_Pct_IOCD023_PropSysCoolCntrlValvC_Value(0.0F);

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD023_PropSysCoolCntrlValvC_Op' incorporates:
     *  Constant: '<S65>/Op1'
     *  SignalConversion generated from: '<S65>/VeDCAB_e_IOControl_IOCD023_PropSysCoolCntrlValvC_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD023_PropSysCoolCntrlValvC_Op_Value
        (CeDCAB_e_IO_ReturnControl);

    /* SignalConversion generated from: '<S65>/ErrorCode' incorporates:
     *  Constant: '<S65>/Op2'
     */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S65>/ERR' incorporates:
     *  Constant: '<S65>/Op3'
     */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD023_Data_RC' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD023_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD023_Data_ReadData' */
    /* SignalConversion generated from: '<S66>/Data' */
    *Data = 0U;

    /* SignalConversion generated from: '<S66>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD023_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD023_Data_SA(P2CONST(uint8,
    AUTOMATIC, DCAB_VAR_INIT) ControlStateInfo, VAR(Dcm_OpStatusType, AUTOMATIC)
    OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT)
    ErrorCode)
{
    Std_ReturnType rty_ERR_1p;
    TeDCAB_e_IOControlOpType rtb_Check2_n;
    boolean rtb_Check2;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD023_Data_SA' */
    /* Logic: '<S67>/Check2' incorporates:
     *  Constant: '<S67>/MaxVal'
     *  RelationalOperator: '<S67>/Check1'
     */
    rtb_Check2 = (((sint32)(*ControlStateInfo)) <= 200);

    /* SignalConversion generated from: '<S67>/ERR' incorporates:
     *  Switch: '<S67>/Check8'
     */
    rty_ERR_1p = (Std_ReturnType)((!rtb_Check2) ? 1 : 0);

    /* Switch: '<S67>/Check7' incorporates:
     *  Constant: '<S67>/Op'
     *  Constant: '<S67>/Op1'
     *  Switch: '<S67>/Check6'
     */
    if (rtb_Check2)
    {
        /* SignalConversion generated from: '<S67>/ErrorCode' incorporates:
         *  Constant: '<S67>/Op2'
         */
        *ErrorCode = DCM_POS_RESP;
        rtb_Check2_n = CeDCAB_e_IO_ShortTermAdj;
    }
    else
    {
        /* SignalConversion generated from: '<S67>/ErrorCode' incorporates:
         *  Constant: '<S67>/Op3'
         */
        *ErrorCode = DCM_E_REQUESTOUTOFRANGE;
        rtb_Check2_n = CeDCAB_e_IO_NOP;
    }

    /* End of Switch: '<S67>/Check7' */

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD023_PropSysCoolCntrlValvC_Op' incorporates:
     *  Switch: '<S67>/Check6'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD023_PropSysCoolCntrlValvC_Op_Value
        (rtb_Check2_n);

    /* Outport: '<Root>/VeDCAB_Pct_IOCD023_PropSysCoolCntrlValvC' incorporates:
     *  Constant: '<S67>/Factor'
     *  DataTypeConversion: '<S67>/DTConv1'
     *  DataTypeConversion: '<S67>/DTConv2'
     *  Product: '<S67>/Prod'
     */
    (void)Rte_Write_VeDCAB_Pct_IOCD023_PropSysCoolCntrlValvC_Value(((float32)
        (*ControlStateInfo)) * 0.5F);

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD023_Data_SA' */
    return rty_ERR_1p;
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD025_Data_RC(P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD025_Data_RC' */
    /* Outport: '<Root>/VeDCAB_e_IOCD025_AGS_PstnCmnd' incorporates:
     *  Constant: '<S68>/Op'
     *  SignalConversion generated from: '<S68>/VeDCAB_e_IOCD025_AGS_PstnCmnd'
     */
    (void)Rte_Write_VeDCAB_e_IOCD025_AGS_PstnCmnd_Value(CeFSCR_e_Open100);

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD025_AGS_PstnCmnd_Op' incorporates:
     *  Constant: '<S68>/Op1'
     *  SignalConversion generated from: '<S68>/VeDCAB_e_IOControl_IOCD025_AGS_PstnCmnd_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD025_AGS_PstnCmnd_Op_Value
        (CeDCAB_e_IO_ReturnControl);

    /* SignalConversion generated from: '<S68>/ErrorCode' incorporates:
     *  Constant: '<S68>/Op2'
     */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S68>/ERR' incorporates:
     *  Constant: '<S68>/Op3'
     */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD025_Data_RC' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD025_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD025_Data_ReadData' */
    /* SignalConversion generated from: '<S69>/Data' */
    *Data = 0U;

    /* SignalConversion generated from: '<S69>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD025_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD025_Data_SA(P2CONST(uint8,
    AUTOMATIC, DCAB_VAR_INIT) ControlStateInfo, VAR(Dcm_OpStatusType, AUTOMATIC)
    OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT)
    ErrorCode)
{
    Std_ReturnType rty_ERR_1s;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD025_Data_SA' */
    /* SignalConversion generated from: '<S70>/ERR' incorporates:
     *  Switch: '<S70>/Check13'
     */
    rty_ERR_1s = 0U;

    /* Switch: '<S70>/Check12' incorporates:
     *  Constant: '<S70>/Op2'
     *  SignalConversion generated from: '<S70>/ErrorCode'
     */
    *ErrorCode = DCM_POS_RESP;

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD025_AGS_PstnCmnd_Op' incorporates:
     *  Switch: '<S70>/Check11'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD025_AGS_PstnCmnd_Op_Value
        ((TeDCAB_e_IOControlOpType)3U);

    /* Outport: '<Root>/VeDCAB_e_IOCD025_AGS_PstnCmnd' incorporates:
     *  DataTypeConversion: '<S70>/DTConv1'
     *  S-Function (sfix_bitop): '<S70>/Bitwise'
     */
    (void)Rte_Write_VeDCAB_e_IOCD025_AGS_PstnCmnd_Value((TeFSCR_e_AGS_PosRq)
        safe_cast_to_TeFSCR_e_AGS_PosRq((uint8)((*ControlStateInfo) & ((uint8)15))));

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD025_Data_SA' */
    return rty_ERR_1s;
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD026_Data_RC(P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD026_Data_RC' */
    /* Outport: '<Root>/VeDCAB_e_IOCD026_AGS2_PstnCmnd' incorporates:
     *  Constant: '<S71>/Op'
     *  SignalConversion generated from: '<S71>/VeDCAB_e_IOCD026_AGS2_PstnCmnd'
     */
    (void)Rte_Write_VeDCAB_e_IOCD026_AGS2_PstnCmnd_Value(CeFSCR_e_Open100);

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD026_AGS2_PstnCmnd_Op' incorporates:
     *  Constant: '<S71>/Op1'
     *  SignalConversion generated from: '<S71>/VeDCAB_e_IOControl_IOCD026_AGS2_PstnCmnd_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD026_AGS2_PstnCmnd_Op_Value
        (CeDCAB_e_IO_ReturnControl);

    /* SignalConversion generated from: '<S71>/ErrorCode' incorporates:
     *  Constant: '<S71>/Op2'
     */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S71>/ERR' incorporates:
     *  Constant: '<S71>/Op3'
     */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD026_Data_RC' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD026_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD026_Data_ReadData' */
    /* SignalConversion generated from: '<S72>/Data' */
    *Data = 0U;

    /* SignalConversion generated from: '<S72>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD026_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD026_Data_SA(P2CONST(uint8,
    AUTOMATIC, DCAB_VAR_INIT) ControlStateInfo, VAR(Dcm_OpStatusType, AUTOMATIC)
    OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT)
    ErrorCode)
{
    Std_ReturnType rty_ERR_1v;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD026_Data_SA' */
    /* SignalConversion generated from: '<S73>/ERR' incorporates:
     *  Switch: '<S73>/Check13'
     */
    rty_ERR_1v = 0U;

    /* Switch: '<S73>/Check12' incorporates:
     *  Constant: '<S73>/Op2'
     *  SignalConversion generated from: '<S73>/ErrorCode'
     */
    *ErrorCode = DCM_POS_RESP;

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD026_AGS2_PstnCmnd_Op' incorporates:
     *  Switch: '<S73>/Check11'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD026_AGS2_PstnCmnd_Op_Value
        ((TeDCAB_e_IOControlOpType)3U);

    /* Outport: '<Root>/VeDCAB_e_IOCD026_AGS2_PstnCmnd' incorporates:
     *  DataTypeConversion: '<S73>/DTConv1'
     *  S-Function (sfix_bitop): '<S73>/Bitwise'
     */
    (void)Rte_Write_VeDCAB_e_IOCD026_AGS2_PstnCmnd_Value((TeFSCR_e_AGS_PosRq)
        safe_cast_to_TeFSCR_e_AGS_PosRq((uint8)((*ControlStateInfo) & ((uint8)15))));

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD026_Data_SA' */
    return rty_ERR_1v;
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD027_Data_RC(P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD027_Data_RC' */
    /* Outport: '<Root>/VeDCAB_n_IOCD027_PowOilPumACon_Pump_Speed' incorporates:
     *  Constant: '<S74>/Op'
     *  SignalConversion generated from: '<S74>/VeDCAB_n_IOCD027_PowOilPumACon_Pump_Speed'
     */
    (void)Rte_Write_VeDCAB_n_IOCD027_PowOilPumACon_Pump_Speed_Value(0.0F);

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD027_PowOilPumACon_Pump_Speed_Op' incorporates:
     *  Constant: '<S74>/Op1'
     *  SignalConversion generated from: '<S74>/VeDCAB_e_IOControl_IOCD027_PowOilPumACon_Pump_Speed_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD027_PowOilPumACon_Pump_Speed_Op_Value
        (CeDCAB_e_IO_ReturnControl);

    /* SignalConversion generated from: '<S74>/ErrorCode' incorporates:
     *  Constant: '<S74>/Op2'
     */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S74>/ERR' incorporates:
     *  Constant: '<S74>/Op3'
     */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD027_Data_RC' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD027_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD027_Data_ReadData' */
    /* SignalConversion generated from: '<S75>/Data' */
    *Data = 0U;

    /* SignalConversion generated from: '<S75>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD027_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD027_Data_SA(P2CONST(uint8,
    AUTOMATIC, DCAB_VAR_INIT) ControlStateInfo, VAR(Dcm_OpStatusType, AUTOMATIC)
    OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT)
    ErrorCode)
{
    Std_ReturnType rty_ERR_1y;
    TeDCAB_e_IOControlOpType rtb_Check2_c5;
    boolean rtb_Check2;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD027_Data_SA' */
    /* Logic: '<S76>/Check2' incorporates:
     *  Constant: '<S76>/MaxVal'
     *  RelationalOperator: '<S76>/Check1'
     */
    rtb_Check2 = (((sint32)(*ControlStateInfo)) <= 250);

    /* SignalConversion generated from: '<S76>/ERR' incorporates:
     *  Switch: '<S76>/Check8'
     */
    rty_ERR_1y = (Std_ReturnType)((!rtb_Check2) ? 1 : 0);

    /* Switch: '<S76>/Check7' incorporates:
     *  Constant: '<S76>/Op'
     *  Constant: '<S76>/Op1'
     *  Switch: '<S76>/Check6'
     */
    if (rtb_Check2)
    {
        /* SignalConversion generated from: '<S76>/ErrorCode' incorporates:
         *  Constant: '<S76>/Op2'
         */
        *ErrorCode = DCM_POS_RESP;
        rtb_Check2_c5 = CeDCAB_e_IO_ShortTermAdj;
    }
    else
    {
        /* SignalConversion generated from: '<S76>/ErrorCode' incorporates:
         *  Constant: '<S76>/Op3'
         */
        *ErrorCode = DCM_E_REQUESTOUTOFRANGE;
        rtb_Check2_c5 = CeDCAB_e_IO_NOP;
    }

    /* End of Switch: '<S76>/Check7' */

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD027_PowOilPumACon_Pump_Speed_Op' incorporates:
     *  Switch: '<S76>/Check6'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD027_PowOilPumACon_Pump_Speed_Op_Value
        (rtb_Check2_c5);

    /* Outport: '<Root>/VeDCAB_n_IOCD027_PowOilPumACon_Pump_Speed' incorporates:
     *  Constant: '<S76>/Factor'
     *  DataTypeConversion: '<S76>/DTConv1'
     *  DataTypeConversion: '<S76>/DTConv2'
     *  Product: '<S76>/Prod'
     */
    (void)Rte_Write_VeDCAB_n_IOCD027_PowOilPumACon_Pump_Speed_Value(((float32)
        (*ControlStateInfo)) * 24.0F);

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD027_Data_SA' */
    return rty_ERR_1y;
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD028_Data_Freeze(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(Dcm_NegativeResponseCodeType,
    AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD028_Data_Freeze' */
    /* Outport: '<Root>/VeDCAB_n_IOCD028_PowOilPumBCon_Pump_Speed' incorporates:
     *  Constant: '<S77>/Op'
     *  SignalConversion generated from: '<S77>/VeDCAB_n_IOCD028_PowOilPumBCon_Pump_Speed'
     */
    (void)Rte_Write_VeDCAB_n_IOCD028_PowOilPumBCon_Pump_Speed_Value(0.0F);

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD028_PowOilPumBCon_Pump_Speed_Op' incorporates:
     *  Constant: '<S77>/Op1'
     *  SignalConversion generated from: '<S77>/VeDCAB_e_IOControl_IOCD028_PowOilPumBCon_Pump_Speed_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD028_PowOilPumBCon_Pump_Speed_Op_Value
        (CeDCAB_e_IO_FreezeCurrentSt);

    /* SignalConversion generated from: '<S77>/ErrorCode' incorporates:
     *  Constant: '<S77>/Op2'
     */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S77>/ERR' incorporates:
     *  Constant: '<S77>/Op3'
     */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD028_Data_Freeze' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD028_Data_RC(P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD028_Data_RC' */
    /* Outport: '<Root>/VeDCAB_n_IOCD028_PowOilPumBCon_Pump_Speed' incorporates:
     *  Constant: '<S78>/Op'
     *  SignalConversion generated from: '<S78>/VeDCAB_n_IOCD028_PowOilPumBCon_Pump_Speed'
     */
    (void)Rte_Write_VeDCAB_n_IOCD028_PowOilPumBCon_Pump_Speed_Value(0.0F);

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD028_PowOilPumBCon_Pump_Speed_Op' incorporates:
     *  Constant: '<S78>/Op1'
     *  SignalConversion generated from: '<S78>/VeDCAB_e_IOControl_IOCD028_PowOilPumBCon_Pump_Speed_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD028_PowOilPumBCon_Pump_Speed_Op_Value
        (CeDCAB_e_IO_ReturnControl);

    /* SignalConversion generated from: '<S78>/ErrorCode' incorporates:
     *  Constant: '<S78>/Op2'
     */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S78>/ERR' incorporates:
     *  Constant: '<S78>/Op3'
     */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD028_Data_RC' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD028_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD028_Data_ReadData' */
    /* SignalConversion generated from: '<S79>/Data' */
    *Data = 0U;

    /* SignalConversion generated from: '<S79>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD028_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD028_Data_SA(P2CONST(uint8,
    AUTOMATIC, DCAB_VAR_INIT) ControlStateInfo, VAR(Dcm_OpStatusType, AUTOMATIC)
    OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT)
    ErrorCode)
{
    Std_ReturnType rty_ERR_22;
    TeDCAB_e_IOControlOpType rtb_Check2_fm;
    boolean rtb_Check2;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD028_Data_SA' */
    /* Logic: '<S80>/Check2' incorporates:
     *  Constant: '<S80>/MaxVal'
     *  RelationalOperator: '<S80>/Check1'
     */
    rtb_Check2 = (((sint32)(*ControlStateInfo)) <= 250);

    /* SignalConversion generated from: '<S80>/ERR' incorporates:
     *  Switch: '<S80>/Check8'
     */
    rty_ERR_22 = (Std_ReturnType)((!rtb_Check2) ? 1 : 0);

    /* Switch: '<S80>/Check7' incorporates:
     *  Constant: '<S80>/Op'
     *  Constant: '<S80>/Op1'
     *  Switch: '<S80>/Check6'
     */
    if (rtb_Check2)
    {
        /* SignalConversion generated from: '<S80>/ErrorCode' incorporates:
         *  Constant: '<S80>/Op2'
         */
        *ErrorCode = DCM_POS_RESP;
        rtb_Check2_fm = CeDCAB_e_IO_ShortTermAdj;
    }
    else
    {
        /* SignalConversion generated from: '<S80>/ErrorCode' incorporates:
         *  Constant: '<S80>/Op3'
         */
        *ErrorCode = DCM_E_REQUESTOUTOFRANGE;
        rtb_Check2_fm = CeDCAB_e_IO_NOP;
    }

    /* End of Switch: '<S80>/Check7' */

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD028_PowOilPumBCon_Pump_Speed_Op' incorporates:
     *  Switch: '<S80>/Check6'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD028_PowOilPumBCon_Pump_Speed_Op_Value
        (rtb_Check2_fm);

    /* Outport: '<Root>/VeDCAB_n_IOCD028_PowOilPumBCon_Pump_Speed' incorporates:
     *  Constant: '<S80>/Factor'
     *  DataTypeConversion: '<S80>/DTConv1'
     *  DataTypeConversion: '<S80>/DTConv2'
     *  Product: '<S80>/Prod'
     */
    (void)Rte_Write_VeDCAB_n_IOCD028_PowOilPumBCon_Pump_Speed_Value(((float32)
        (*ControlStateInfo)) * 24.0F);

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD028_Data_SA' */
    return rty_ERR_22;
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD030_Data_RC(P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD030_Data_RC' */
    /* Outport: '<Root>/VeDCAB_e_IOCD030_ActAirDamCon' incorporates:
     *  Constant: '<S81>/Op'
     *  SignalConversion generated from: '<S81>/VeDCAB_e_IOCD030_ActAirDamCon'
     */
    (void)Rte_Write_VeDCAB_e_IOCD030_ActAirDamCon_Value(CeAADR_e_SNA);

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD030_ActAirDamCon_Op' incorporates:
     *  Constant: '<S81>/Op1'
     *  SignalConversion generated from: '<S81>/VeDCAB_e_IOControl_IOCD030_ActAirDamCon_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD030_ActAirDamCon_Op_Value
        (CeDCAB_e_IO_ReturnControl);

    /* SignalConversion generated from: '<S81>/ErrorCode' incorporates:
     *  Constant: '<S81>/Op2'
     */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S81>/ERR' incorporates:
     *  Constant: '<S81>/Op3'
     */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD030_Data_RC' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD030_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD030_Data_ReadData' */
    /* SignalConversion generated from: '<S82>/Data' */
    *Data = 0U;

    /* SignalConversion generated from: '<S82>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD030_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD030_Data_SA(P2CONST(uint8,
    AUTOMATIC, DCAB_VAR_INIT) ControlStateInfo, VAR(Dcm_OpStatusType, AUTOMATIC)
    OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT)
    ErrorCode)
{
    Std_ReturnType rty_ERR_25;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD030_Data_SA' */
    /* SignalConversion generated from: '<S83>/ERR' incorporates:
     *  Switch: '<S83>/Check13'
     */
    rty_ERR_25 = 0U;

    /* Switch: '<S83>/Check12' incorporates:
     *  Constant: '<S83>/Op2'
     *  SignalConversion generated from: '<S83>/ErrorCode'
     */
    *ErrorCode = DCM_POS_RESP;

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD030_ActAirDamCon_Op' incorporates:
     *  Switch: '<S83>/Check11'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD030_ActAirDamCon_Op_Value
        ((TeDCAB_e_IOControlOpType)3U);

    /* Outport: '<Root>/VeDCAB_e_IOCD030_ActAirDamCon' incorporates:
     *  DataTypeConversion: '<S83>/DTConv1'
     *  S-Function (sfix_bitop): '<S83>/Bitwise'
     */
    (void)Rte_Write_VeDCAB_e_IOCD030_ActAirDamCon_Value((TeAADR_e_AAD_Pos)
        D_safe_cast_to_TeAADR_e_AAD_Pos((uint8)((*ControlStateInfo) & ((uint8)15))));

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD030_Data_SA' */
    return rty_ERR_25;
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD031_Data_RC(P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD031_Data_RC' */
    /* Outport: '<Root>/VeDCAB_Pct_IOCD031_ACRefrExpValvActACntrl' incorporates:
     *  Constant: '<S84>/Op'
     *  SignalConversion generated from: '<S84>/VeDCAB_Pct_IOCD031_ACRefrExpValvActACntrl'
     */
    (void)Rte_Write_VeDCAB_Pct_IOCD031_ACRefrExpValvActACntrl_Value(0.0F);

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD031_ACRefrExpValvActACntrl_Op' incorporates:
     *  Constant: '<S84>/Op1'
     *  SignalConversion generated from: '<S84>/VeDCAB_e_IOControl_IOCD031_ACRefrExpValvActACntrl_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD031_ACRefrExpValvActACntrl_Op_Value
        (CeDCAB_e_IO_ReturnControl);

    /* SignalConversion generated from: '<S84>/ErrorCode' incorporates:
     *  Constant: '<S84>/Op2'
     */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S84>/ERR' incorporates:
     *  Constant: '<S84>/Op3'
     */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD031_Data_RC' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD031_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[2])
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD031_Data_ReadData' */
    /* SignalConversion generated from: '<S85>/Data' */
    Data[0] = DCAB_ac_ConstB.Bitwise_e;
    Data[1] = DCAB_ac_ConstB.Bitwise1_oi;

    /* SignalConversion generated from: '<S85>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD031_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD031_Data_SA(CONST(uint8,
    AUTOMATIC) ControlStateInfo[2], VAR(Dcm_OpStatusType, AUTOMATIC) OpStatus,
    P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    Std_ReturnType rty_ERR_28;
    uint16 rtb_Bitwise;
    TeDCAB_e_IOControlOpType rtb_Check2_l0;
    boolean rtb_Check2;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD031_Data_SA' */
    /* S-Function (sfix_bitop): '<S86>/Bitwise' incorporates:
     *  ArithShift: '<S86>/BitShift'
     *  SignalConversion generated from: '<S86>/Data'
     */
    rtb_Bitwise = (uint16)((sint32)(((sint32)((uint32)(((uint32)
        ControlStateInfo[0]) << 8ULL))) | ((sint32)ControlStateInfo[1])));

    /* Logic: '<S86>/Check2' incorporates:
     *  Constant: '<S86>/MaxVal'
     *  RelationalOperator: '<S86>/Check1'
     */
    rtb_Check2 = (((sint32)rtb_Bitwise) <= 1020);

    /* SignalConversion generated from: '<S86>/ERR' incorporates:
     *  Switch: '<S86>/Check8'
     */
    rty_ERR_28 = (Std_ReturnType)((!rtb_Check2) ? 1 : 0);

    /* Switch: '<S86>/Check7' incorporates:
     *  Constant: '<S86>/Op'
     *  Constant: '<S86>/Op1'
     *  Switch: '<S86>/Check6'
     */
    if (rtb_Check2)
    {
        /* SignalConversion generated from: '<S86>/ErrorCode' incorporates:
         *  Constant: '<S86>/Op2'
         */
        *ErrorCode = DCM_POS_RESP;
        rtb_Check2_l0 = CeDCAB_e_IO_ShortTermAdj;
    }
    else
    {
        /* SignalConversion generated from: '<S86>/ErrorCode' incorporates:
         *  Constant: '<S86>/Op3'
         */
        *ErrorCode = DCM_E_REQUESTOUTOFRANGE;
        rtb_Check2_l0 = CeDCAB_e_IO_NOP;
    }

    /* End of Switch: '<S86>/Check7' */

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD031_ACRefrExpValvActACntrl_Op' incorporates:
     *  Switch: '<S86>/Check6'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD031_ACRefrExpValvActACntrl_Op_Value
        (rtb_Check2_l0);

    /* Outport: '<Root>/VeDCAB_Pct_IOCD031_ACRefrExpValvActACntrl' incorporates:
     *  Constant: '<S86>/Factor'
     *  DataTypeConversion: '<S86>/DTConv2'
     *  DataTypeConversion: '<S86>/DTConv3'
     *  Product: '<S86>/Prod'
     */
    (void)Rte_Write_VeDCAB_Pct_IOCD031_ACRefrExpValvActACntrl_Value(((float32)
        rtb_Bitwise) * 0.1F);

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD031_Data_SA' */
    return rty_ERR_28;
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD032_Data_RC(P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD032_Data_RC' */
    /* Outport: '<Root>/VeDCAB_Pct_IOCD032_ACRefrExpValvActCCntrl' incorporates:
     *  Constant: '<S87>/Op'
     *  SignalConversion generated from: '<S87>/VeDCAB_Pct_IOCD032_ACRefrExpValvActCCntrl'
     */
    (void)Rte_Write_VeDCAB_Pct_IOCD032_ACRefrExpValvActCCntrl_Value(0.0F);

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD032_ACRefrExpValvActCCntrl_Op' incorporates:
     *  Constant: '<S87>/Op1'
     *  SignalConversion generated from: '<S87>/VeDCAB_e_IOControl_IOCD032_ACRefrExpValvActCCntrl_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD032_ACRefrExpValvActCCntrl_Op_Value
        (CeDCAB_e_IO_ReturnControl);

    /* SignalConversion generated from: '<S87>/ErrorCode' incorporates:
     *  Constant: '<S87>/Op2'
     */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S87>/ERR' incorporates:
     *  Constant: '<S87>/Op3'
     */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD032_Data_RC' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD032_Data_RD(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(Dcm_NegativeResponseCodeType,
    AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD032_Data_RD' */
    /* Outport: '<Root>/VeDCAB_Pct_IOCD032_ACRefrExpValvActCCntrl' incorporates:
     *  Constant: '<S88>/Op'
     *  SignalConversion generated from: '<S88>/VeDCAB_Pct_IOCD032_ACRefrExpValvActCCntrl'
     */
    (void)Rte_Write_VeDCAB_Pct_IOCD032_ACRefrExpValvActCCntrl_Value(0.0F);

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD032_ACRefrExpValvActCCntrl_Op' incorporates:
     *  Constant: '<S88>/Op1'
     *  SignalConversion generated from: '<S88>/VeDCAB_e_IOControl_IOCD032_ACRefrExpValvActCCntrl_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD032_ACRefrExpValvActCCntrl_Op_Value
        (CeDCAB_e_IO_ResetToDefault);

    /* SignalConversion generated from: '<S88>/ErrorCode' incorporates:
     *  Constant: '<S88>/Op2'
     */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S88>/ERR' incorporates:
     *  Constant: '<S88>/Op3'
     */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD032_Data_RD' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD032_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[2])
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD032_Data_ReadData' */
    /* SignalConversion generated from: '<S89>/Data' */
    Data[0] = DCAB_ac_ConstB.Bitwise_d;
    Data[1] = DCAB_ac_ConstB.Bitwise1_o;

    /* SignalConversion generated from: '<S89>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD032_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD032_Data_SA(CONST(uint8,
    AUTOMATIC) ControlStateInfo[2], VAR(Dcm_OpStatusType, AUTOMATIC) OpStatus,
    P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    Std_ReturnType rty_ERR_2c;
    uint16 rtb_Bitwise;
    TeDCAB_e_IOControlOpType rtb_Check2_o;
    boolean rtb_Check2;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD032_Data_SA' */
    /* S-Function (sfix_bitop): '<S90>/Bitwise' incorporates:
     *  ArithShift: '<S90>/BitShift'
     *  SignalConversion generated from: '<S90>/Data'
     */
    rtb_Bitwise = (uint16)((sint32)(((sint32)((uint32)(((uint32)
        ControlStateInfo[0]) << 8ULL))) | ((sint32)ControlStateInfo[1])));

    /* Logic: '<S90>/Check2' incorporates:
     *  Constant: '<S90>/MaxVal'
     *  RelationalOperator: '<S90>/Check1'
     */
    rtb_Check2 = (((sint32)rtb_Bitwise) <= 1020);

    /* SignalConversion generated from: '<S90>/ERR' incorporates:
     *  Switch: '<S90>/Check8'
     */
    rty_ERR_2c = (Std_ReturnType)((!rtb_Check2) ? 1 : 0);

    /* Switch: '<S90>/Check7' incorporates:
     *  Constant: '<S90>/Op'
     *  Constant: '<S90>/Op1'
     *  Switch: '<S90>/Check6'
     */
    if (rtb_Check2)
    {
        /* SignalConversion generated from: '<S90>/ErrorCode' incorporates:
         *  Constant: '<S90>/Op2'
         */
        *ErrorCode = DCM_POS_RESP;
        rtb_Check2_o = CeDCAB_e_IO_ShortTermAdj;
    }
    else
    {
        /* SignalConversion generated from: '<S90>/ErrorCode' incorporates:
         *  Constant: '<S90>/Op3'
         */
        *ErrorCode = DCM_E_REQUESTOUTOFRANGE;
        rtb_Check2_o = CeDCAB_e_IO_NOP;
    }

    /* End of Switch: '<S90>/Check7' */

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD032_ACRefrExpValvActCCntrl_Op' incorporates:
     *  Switch: '<S90>/Check6'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD032_ACRefrExpValvActCCntrl_Op_Value
        (rtb_Check2_o);

    /* Outport: '<Root>/VeDCAB_Pct_IOCD032_ACRefrExpValvActCCntrl' incorporates:
     *  Constant: '<S90>/Factor'
     *  DataTypeConversion: '<S90>/DTConv2'
     *  DataTypeConversion: '<S90>/DTConv3'
     *  Product: '<S90>/Prod'
     */
    (void)Rte_Write_VeDCAB_Pct_IOCD032_ACRefrExpValvActCCntrl_Value(((float32)
        rtb_Bitwise) * 0.1F);

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD032_Data_SA' */
    return rty_ERR_2c;
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD033_Data_RC(P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD033_Data_RC' */
    /* Outport: '<Root>/VeDCAB_Pct_IOCD033_ACRefrExpValvActDCntrl' incorporates:
     *  Constant: '<S91>/Op'
     *  SignalConversion generated from: '<S91>/VeDCAB_Pct_IOCD033_ACRefrExpValvActDCntrl'
     */
    (void)Rte_Write_VeDCAB_Pct_IOCD033_ACRefrExpValvActDCntrl_Value(0.0F);

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD033_ACRefrExpValvActDCntrl_Op' incorporates:
     *  Constant: '<S91>/Op1'
     *  SignalConversion generated from: '<S91>/VeDCAB_e_IOControl_IOCD033_ACRefrExpValvActDCntrl_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD033_ACRefrExpValvActDCntrl_Op_Value
        (CeDCAB_e_IO_ReturnControl);

    /* SignalConversion generated from: '<S91>/ErrorCode' incorporates:
     *  Constant: '<S91>/Op2'
     */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S91>/ERR' incorporates:
     *  Constant: '<S91>/Op3'
     */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD033_Data_RC' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD033_Data_RD(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(Dcm_NegativeResponseCodeType,
    AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD033_Data_RD' */
    /* Outport: '<Root>/VeDCAB_Pct_IOCD033_ACRefrExpValvActDCntrl' incorporates:
     *  Constant: '<S92>/Op'
     *  SignalConversion generated from: '<S92>/VeDCAB_Pct_IOCD033_ACRefrExpValvActDCntrl'
     */
    (void)Rte_Write_VeDCAB_Pct_IOCD033_ACRefrExpValvActDCntrl_Value(0.0F);

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD033_ACRefrExpValvActDCntrl_Op' incorporates:
     *  Constant: '<S92>/Op1'
     *  SignalConversion generated from: '<S92>/VeDCAB_e_IOControl_IOCD033_ACRefrExpValvActDCntrl_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD033_ACRefrExpValvActDCntrl_Op_Value
        (CeDCAB_e_IO_ResetToDefault);

    /* SignalConversion generated from: '<S92>/ErrorCode' incorporates:
     *  Constant: '<S92>/Op2'
     */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S92>/ERR' incorporates:
     *  Constant: '<S92>/Op3'
     */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD033_Data_RD' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD033_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[2])
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD033_Data_ReadData' */
    /* SignalConversion generated from: '<S93>/Data' */
    Data[0] = DCAB_ac_ConstB.Bitwise;
    Data[1] = DCAB_ac_ConstB.Bitwise1_c;

    /* SignalConversion generated from: '<S93>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD033_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD033_Data_SA(CONST(uint8,
    AUTOMATIC) ControlStateInfo[2], VAR(Dcm_OpStatusType, AUTOMATIC) OpStatus,
    P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    Std_ReturnType rty_ERR_2g;
    uint16 rtb_Bitwise;
    TeDCAB_e_IOControlOpType rtb_Check2_h1;
    boolean rtb_Check2;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD033_Data_SA' */
    /* S-Function (sfix_bitop): '<S94>/Bitwise' incorporates:
     *  ArithShift: '<S94>/BitShift'
     *  SignalConversion generated from: '<S94>/Data'
     */
    rtb_Bitwise = (uint16)((sint32)(((sint32)((uint32)(((uint32)
        ControlStateInfo[0]) << 8ULL))) | ((sint32)ControlStateInfo[1])));

    /* Logic: '<S94>/Check2' incorporates:
     *  Constant: '<S94>/MaxVal'
     *  RelationalOperator: '<S94>/Check1'
     */
    rtb_Check2 = (((sint32)rtb_Bitwise) <= 1020);

    /* SignalConversion generated from: '<S94>/ERR' incorporates:
     *  Switch: '<S94>/Check8'
     */
    rty_ERR_2g = (Std_ReturnType)((!rtb_Check2) ? 1 : 0);

    /* Switch: '<S94>/Check7' incorporates:
     *  Constant: '<S94>/Op'
     *  Constant: '<S94>/Op1'
     *  Switch: '<S94>/Check6'
     */
    if (rtb_Check2)
    {
        /* SignalConversion generated from: '<S94>/ErrorCode' incorporates:
         *  Constant: '<S94>/Op2'
         */
        *ErrorCode = DCM_POS_RESP;
        rtb_Check2_h1 = CeDCAB_e_IO_ShortTermAdj;
    }
    else
    {
        /* SignalConversion generated from: '<S94>/ErrorCode' incorporates:
         *  Constant: '<S94>/Op3'
         */
        *ErrorCode = DCM_E_REQUESTOUTOFRANGE;
        rtb_Check2_h1 = CeDCAB_e_IO_NOP;
    }

    /* End of Switch: '<S94>/Check7' */

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD033_ACRefrExpValvActDCntrl_Op' incorporates:
     *  Switch: '<S94>/Check6'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD033_ACRefrExpValvActDCntrl_Op_Value
        (rtb_Check2_h1);

    /* Outport: '<Root>/VeDCAB_Pct_IOCD033_ACRefrExpValvActDCntrl' incorporates:
     *  Constant: '<S94>/Factor'
     *  DataTypeConversion: '<S94>/DTConv2'
     *  DataTypeConversion: '<S94>/DTConv3'
     *  Product: '<S94>/Prod'
     */
    (void)Rte_Write_VeDCAB_Pct_IOCD033_ACRefrExpValvActDCntrl_Value(((float32)
        rtb_Bitwise) * 0.1F);

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD033_Data_SA' */
    return rty_ERR_2g;
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD043_Data_RC(P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD043_Data_RC' */
    /* Outport: '<Root>/VeDCAB_Pct_IOCD043_PWMElectricOilPump' incorporates:
     *  Constant: '<S95>/Op'
     *  SignalConversion generated from: '<S95>/VeDCAB_Pct_IOCD043_PWMElectricOilPump'
     */
    (void)Rte_Write_VeDCAB_Pct_IOCD043_PWMElectricOilPump_Value(0.0F);

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD043_PWMElectricOilPump_Op' incorporates:
     *  Constant: '<S95>/Op1'
     *  SignalConversion generated from: '<S95>/VeDCAB_e_IOControl_IOCD043_PWMElectricOilPump_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD043_PWMElectricOilPump_Op_Value
        (CeDCAB_e_IO_ReturnControl);

    /* SignalConversion generated from: '<S95>/ErrorCode' incorporates:
     *  Constant: '<S95>/Op2'
     */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S95>/ERR' incorporates:
     *  Constant: '<S95>/Op3'
     */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD043_Data_RC' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD043_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD043_Data_ReadData' */
    /* SignalConversion generated from: '<S96>/Data' */
    *Data = 0U;

    /* SignalConversion generated from: '<S96>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD043_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_IOCD043_Data_SA(P2CONST(uint8,
    AUTOMATIC, DCAB_VAR_INIT) ControlStateInfo, VAR(Dcm_OpStatusType, AUTOMATIC)
    OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT)
    ErrorCode)
{
    Std_ReturnType rty_ERR_2j;
    TeDCAB_e_IOControlOpType rtb_Check2_lc;
    boolean rtb_Check2;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S1>/DataServices_IOCD043_Data_SA' */
    /* Logic: '<S97>/Check2' incorporates:
     *  Constant: '<S97>/MaxVal'
     *  RelationalOperator: '<S97>/Check1'
     */
    rtb_Check2 = (((sint32)(*ControlStateInfo)) <= 100);

    /* SignalConversion generated from: '<S97>/ERR' incorporates:
     *  Switch: '<S97>/Check8'
     */
    rty_ERR_2j = (Std_ReturnType)((!rtb_Check2) ? 1 : 0);

    /* Switch: '<S97>/Check7' incorporates:
     *  Constant: '<S97>/Op'
     *  Constant: '<S97>/Op1'
     *  Switch: '<S97>/Check6'
     */
    if (rtb_Check2)
    {
        /* SignalConversion generated from: '<S97>/ErrorCode' incorporates:
         *  Constant: '<S97>/Op2'
         */
        *ErrorCode = DCM_POS_RESP;
        rtb_Check2_lc = CeDCAB_e_IO_ShortTermAdj;
    }
    else
    {
        /* SignalConversion generated from: '<S97>/ErrorCode' incorporates:
         *  Constant: '<S97>/Op3'
         */
        *ErrorCode = DCM_E_REQUESTOUTOFRANGE;
        rtb_Check2_lc = CeDCAB_e_IO_NOP;
    }

    /* End of Switch: '<S97>/Check7' */

    /* Outport: '<Root>/VeDCAB_e_IOControl_IOCD043_PWMElectricOilPump_Op' incorporates:
     *  Switch: '<S97>/Check6'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD043_PWMElectricOilPump_Op_Value
        (rtb_Check2_lc);

    /* Outport: '<Root>/VeDCAB_Pct_IOCD043_PWMElectricOilPump' incorporates:
     *  DataTypeConversion: '<S97>/DTConv1'
     *  DataTypeConversion: '<S97>/DTConv2'
     */
    (void)Rte_Write_VeDCAB_Pct_IOCD043_PWMElectricOilPump_Value((float32)
        (*ControlStateInfo));

    /* End of Outputs for SubSystem: '<S1>/DataServices_IOCD043_Data_SA' */
    return rty_ERR_2j;
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD0306_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[2])
{
    float32 rtb_Prod_mt;
    uint16 rtb_DTConv_0;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeAPSR_U_RawPVS1' */
    (void)Rte_Read_VeAPSR_U_RawPVS1_Value(&rtb_Prod_mt);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD0306_Data_ReadData' */
    /* Switch: '<S205>/Switch2' incorporates:
     *  Constant: '<S100>/MaxValue'
     *  Constant: '<S100>/MinValue'
     *  RelationalOperator: '<S205>/LowerRelop1'
     *  RelationalOperator: '<S205>/UpperRelop'
     *  SignalConversion generated from: '<S100>/VeAPSR_U_RawPVS1'
     *  Switch: '<S205>/Switch'
     */
    if (rtb_Prod_mt > 4.99F)
    {
        /* Product: '<S100>/Prod' */
        rtb_Prod_mt = 4.99F;
    }
    else
    {
        if (rtb_Prod_mt < 0.0F)
        {
            /* Switch: '<S205>/Switch' incorporates:
             *  Constant: '<S100>/MinValue'
             *  Product: '<S100>/Prod'
             */
            rtb_Prod_mt = 0.0F;
        }
    }

    /* End of Switch: '<S205>/Switch2' */

    /* DataTypeConversion: '<S100>/DTConv' incorporates:
     *  Constant: '<S100>/Factor'
     *  Product: '<S100>/Prod'
     *  Sum: '<S100>/Add'
     */
    rtb_Prod_mt = roundf(rtb_Prod_mt / 0.004878F);
    if (rtb_Prod_mt < 65536.0F)
    {
        rtb_DTConv_0 = (uint16)rtb_Prod_mt;
    }
    else
    {
        rtb_DTConv_0 = MAX_uint16_T;
    }

    /* SignalConversion generated from: '<S100>/Data' incorporates:
     *  ArithShift: '<S100>/Bitshift'
     *  DataTypeConversion: '<S100>/DTConv'
     *  DataTypeConversion: '<S100>/Mux'
     *  DataTypeConversion: '<S100>/Mux2'
     *  S-Function (sfix_bitop): '<S100>/Bitwise1'
     */
    Data[0] = (uint8)(((uint32)rtb_DTConv_0) >> 8ULL);
    Data[1] = (uint8)(rtb_DTConv_0 & ((uint16)255));

    /* SignalConversion generated from: '<S100>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD0306_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD0307_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[2])
{
    float32 rtb_Prod_cl;
    uint16 rtb_DTConv_n_0;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeAPSR_U_RawPVS2' */
    (void)Rte_Read_VeAPSR_U_RawPVS2_Value(&rtb_Prod_cl);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD0307_Data_ReadData' */
    /* Switch: '<S206>/Switch2' incorporates:
     *  Constant: '<S101>/MaxValue'
     *  Constant: '<S101>/MinValue'
     *  RelationalOperator: '<S206>/LowerRelop1'
     *  RelationalOperator: '<S206>/UpperRelop'
     *  SignalConversion generated from: '<S101>/VeAPSR_U_RawPVS2'
     *  Switch: '<S206>/Switch'
     */
    if (rtb_Prod_cl > 4.99F)
    {
        /* Product: '<S101>/Prod' */
        rtb_Prod_cl = 4.99F;
    }
    else
    {
        if (rtb_Prod_cl < 0.0F)
        {
            /* Switch: '<S206>/Switch' incorporates:
             *  Constant: '<S101>/MinValue'
             *  Product: '<S101>/Prod'
             */
            rtb_Prod_cl = 0.0F;
        }
    }

    /* End of Switch: '<S206>/Switch2' */

    /* DataTypeConversion: '<S101>/DTConv' incorporates:
     *  Constant: '<S101>/Factor'
     *  Product: '<S101>/Prod'
     *  Sum: '<S101>/Add'
     */
    rtb_Prod_cl = roundf(rtb_Prod_cl / 0.004878F);
    if (rtb_Prod_cl < 65536.0F)
    {
        rtb_DTConv_n_0 = (uint16)rtb_Prod_cl;
    }
    else
    {
        rtb_DTConv_n_0 = MAX_uint16_T;
    }

    /* SignalConversion generated from: '<S101>/Data' incorporates:
     *  ArithShift: '<S101>/Bitshift'
     *  DataTypeConversion: '<S101>/DTConv'
     *  DataTypeConversion: '<S101>/Mux'
     *  DataTypeConversion: '<S101>/Mux2'
     *  S-Function (sfix_bitop): '<S101>/Bitwise1'
     */
    Data[0] = (uint8)(((uint32)rtb_DTConv_n_0) >> 8ULL);
    Data[1] = (uint8)(rtb_DTConv_n_0 & ((uint16)255));

    /* SignalConversion generated from: '<S101>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD0307_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD0507_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    boolean tmpRead;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeSRAR_b_HybPwrtrnRdcdPerfCmnd' */
    (void)Rte_Read_VeSRAR_b_HybPwrtrnRdcdPerfCmnd_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD0507_Data_ReadData' */
    /* SignalConversion generated from: '<S102>/Data' incorporates:
     *  DataTypeConversion: '<S102>/DTConv'
     *  SignalConversion generated from: '<S102>/VeSRAR_b_HybPwrtrnRdcdPerfCmnd'
     */
    *Data = tmpRead ? ((uint8)1) : ((uint8)0);

    /* SignalConversion generated from: '<S102>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD0507_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD0800_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[4])
{
    uint32 tmpRead;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeSTRR_g_AStpInhbtRsn' */
    (void)Rte_Read_VeSTRR_g_AStpInhbtRsn_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD0800_Data_ReadData' */
    /* SignalConversion generated from: '<S103>/Data' incorporates:
     *  ArithShift: '<S103>/Bitshift'
     *  ArithShift: '<S103>/Bitshift1'
     *  ArithShift: '<S103>/Bitshift2'
     *  S-Function (sfix_bitop): '<S103>/Bitwise1'
     *  S-Function (sfix_bitop): '<S103>/Bitwise2'
     *  S-Function (sfix_bitop): '<S103>/Bitwise3'
     *  SignalConversion generated from: '<S103>/VeSTRR_g_AStpInhbtRsn'
     */
    Data[0] = (uint8)(tmpRead >> 24ULL);
    Data[1] = (uint8)((tmpRead >> 16ULL) & 255U);
    Data[2] = (uint8)((tmpRead >> 8ULL) & 255U);
    Data[3] = (uint8)(tmpRead & 255U);

    /* SignalConversion generated from: '<S103>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD0800_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD0801_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[2])
{
    uint32 tmpRead;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeSTRR_g_StrtDisAllowRsn' */
    (void)Rte_Read_VeSTRR_g_StrtDisAllowRsn_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD0801_Data_ReadData' */
    /* DataTypeConversion: '<S104>/DTConv' incorporates:
     *  SignalConversion generated from: '<S104>/VeSTRR_g_StrtDisAllowRsn'
     */
    if (tmpRead > 65535U)
    {
        tmpRead = 65535U;
    }

    /* SignalConversion generated from: '<S104>/Data' incorporates:
     *  ArithShift: '<S104>/Bitshift'
     *  DataTypeConversion: '<S104>/DTConv'
     *  DataTypeConversion: '<S104>/Mux'
     *  DataTypeConversion: '<S104>/Mux2'
     *  S-Function (sfix_bitop): '<S104>/Bitwise1'
     */
    Data[0] = (uint8)(((uint32)((uint16)tmpRead)) >> 8ULL);
    Data[1] = (uint8)(((uint16)tmpRead) & ((uint16)255));

    /* SignalConversion generated from: '<S104>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD0801_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD0802_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[2])
{
    uint16 tmp;
    uint16 tmpRead;
    uint16 tmp_0;
    uint16 tmp_1;
    uint16 tmp_2;
    uint16 tmp_3;
    uint16 tmp_4;
    uint16 tmp_5;
    uint16 tmp_6;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeSRAR_y_RemedialActionHist' */
    (void)Rte_Read_VeSRAR_y_RemedialActionHist_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD0802_Data_ReadData' */
    /* DataTypeConversion: '<S105>/DTConv' incorporates:
     *  SignalConversion generated from: '<S105>/VeSRAR_y_RemedialActionHist'
     */
    tmp = tmpRead;
    if (((sint32)tmpRead) > 255)
    {
        tmp = 255U;
    }

    /* DataTypeConversion: '<S105>/DTConv2' incorporates:
     *  SignalConversion generated from: '<S105>/VeSRAR_y_RemedialActionHist'
     */
    tmp_0 = tmpRead;
    if (((sint32)tmpRead) > 255)
    {
        tmp_0 = 255U;
    }

    /* DataTypeConversion: '<S105>/DTConv3' incorporates:
     *  SignalConversion generated from: '<S105>/VeSRAR_y_RemedialActionHist'
     */
    tmp_1 = tmpRead;
    if (((sint32)tmpRead) > 255)
    {
        tmp_1 = 255U;
    }

    /* DataTypeConversion: '<S105>/DTConv4' incorporates:
     *  SignalConversion generated from: '<S105>/VeSRAR_y_RemedialActionHist'
     */
    tmp_2 = tmpRead;
    if (((sint32)tmpRead) > 255)
    {
        tmp_2 = 255U;
    }

    /* DataTypeConversion: '<S105>/DTConv5' incorporates:
     *  SignalConversion generated from: '<S105>/VeSRAR_y_RemedialActionHist'
     */
    tmp_3 = tmpRead;
    if (((sint32)tmpRead) > 255)
    {
        tmp_3 = 255U;
    }

    /* DataTypeConversion: '<S105>/DTConv6' incorporates:
     *  SignalConversion generated from: '<S105>/VeSRAR_y_RemedialActionHist'
     */
    tmp_4 = tmpRead;
    if (((sint32)tmpRead) > 255)
    {
        tmp_4 = 255U;
    }

    /* DataTypeConversion: '<S105>/DTConv7' incorporates:
     *  SignalConversion generated from: '<S105>/VeSRAR_y_RemedialActionHist'
     */
    tmp_5 = tmpRead;
    if (((sint32)tmpRead) > 255)
    {
        tmp_5 = 255U;
    }

    /* DataTypeConversion: '<S105>/DTConv8' incorporates:
     *  SignalConversion generated from: '<S105>/VeSRAR_y_RemedialActionHist'
     */
    tmp_6 = tmpRead;
    if (((sint32)tmpRead) > 255)
    {
        tmp_6 = 255U;
    }

    /* SignalConversion generated from: '<S105>/Data' incorporates:
     *  ArithShift: '<S105>/BitShift'
     *  ArithShift: '<S105>/BitShift1'
     *  ArithShift: '<S105>/BitShift2'
     *  ArithShift: '<S105>/BitShift3'
     *  ArithShift: '<S105>/BitShift4'
     *  ArithShift: '<S105>/BitShift5'
     *  ArithShift: '<S105>/BitShift6'
     *  DataTypeConversion: '<S105>/DTConv'
     *  DataTypeConversion: '<S105>/DTConv2'
     *  DataTypeConversion: '<S105>/DTConv3'
     *  DataTypeConversion: '<S105>/DTConv4'
     *  DataTypeConversion: '<S105>/DTConv5'
     *  DataTypeConversion: '<S105>/DTConv6'
     *  DataTypeConversion: '<S105>/DTConv7'
     *  DataTypeConversion: '<S105>/DTConv8'
     *  S-Function (sfix_bitop): '<S105>/Bitwise'
     */
    Data[0] = (uint8)(((((((((uint16)((uint8)(((uint8)tmp_0) << 1ULL))) | tmp) |
                           ((uint16)((uint8)(((uint8)tmp_1) << 2ULL)))) |
                          ((uint16)((uint8)(((uint8)tmp_2) << 3ULL)))) |
                         ((uint16)((uint8)(((uint8)tmp_3) << 4ULL)))) | ((uint16)
                         ((uint8)(((uint8)tmp_4) << 5ULL)))) | ((uint16)((uint8)
                         (((uint8)tmp_5) << 6ULL)))) | ((uint16)((uint8)(((uint8)
                          tmp_6) << 7ULL))));

    /* DataTypeConversion: '<S105>/DTConv9' incorporates:
     *  SignalConversion generated from: '<S105>/VeSRAR_y_RemedialActionHist'
     */
    tmp = tmpRead;
    if (((sint32)tmpRead) > 255)
    {
        tmp = 255U;
    }

    /* DataTypeConversion: '<S105>/DTConv10' incorporates:
     *  SignalConversion generated from: '<S105>/VeSRAR_y_RemedialActionHist'
     */
    tmp_0 = tmpRead;
    if (((sint32)tmpRead) > 255)
    {
        tmp_0 = 255U;
    }

    /* DataTypeConversion: '<S105>/DTConv11' incorporates:
     *  SignalConversion generated from: '<S105>/VeSRAR_y_RemedialActionHist'
     */
    tmp_1 = tmpRead;
    if (((sint32)tmpRead) > 255)
    {
        tmp_1 = 255U;
    }

    /* DataTypeConversion: '<S105>/DTConv12' incorporates:
     *  SignalConversion generated from: '<S105>/VeSRAR_y_RemedialActionHist'
     */
    if (((sint32)tmpRead) > 255)
    {
        tmpRead = 255U;
    }

    /* SignalConversion generated from: '<S105>/Data' incorporates:
     *  ArithShift: '<S105>/BitShift7'
     *  ArithShift: '<S105>/BitShift8'
     *  ArithShift: '<S105>/BitShift9'
     *  DataTypeConversion: '<S105>/DTConv10'
     *  DataTypeConversion: '<S105>/DTConv11'
     *  DataTypeConversion: '<S105>/DTConv12'
     *  DataTypeConversion: '<S105>/DTConv9'
     *  S-Function (sfix_bitop): '<S105>/Bitwise1'
     */
    Data[1] = (uint8)(((((uint16)((uint8)(((uint8)tmp_0) << 1ULL))) | tmp) |
                       ((uint16)((uint8)(((uint8)tmp_1) << 2ULL)))) | ((uint16)
                       ((uint8)(((uint8)tmpRead) << 3ULL))));

    /* SignalConversion generated from: '<S105>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD0802_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD0803_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[4])
{
    uint32 tmpRead;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeESSR_g_StrtStpFailRsn' */
    (void)Rte_Read_VeESSR_g_StrtStpFailRsn_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD0803_Data_ReadData' */
    /* SignalConversion generated from: '<S106>/Data' incorporates:
     *  ArithShift: '<S106>/Bitshift'
     *  ArithShift: '<S106>/Bitshift1'
     *  ArithShift: '<S106>/Bitshift2'
     *  S-Function (sfix_bitop): '<S106>/Bitwise1'
     *  S-Function (sfix_bitop): '<S106>/Bitwise2'
     *  S-Function (sfix_bitop): '<S106>/Bitwise3'
     *  SignalConversion generated from: '<S106>/VeESSR_g_StrtStpFailRsn'
     */
    Data[0] = (uint8)(tmpRead >> 24ULL);
    Data[1] = (uint8)((tmpRead >> 16ULL) & 255U);
    Data[2] = (uint8)((tmpRead >> 8ULL) & 255U);
    Data[3] = (uint8)(tmpRead & 255U);

    /* SignalConversion generated from: '<S106>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD0803_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD0804_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[2])
{
    uint32 tmp;
    uint32 tmpRead;
    uint32 tmp_0;
    uint32 tmp_1;
    uint32 tmp_2;
    uint32 tmp_3;
    uint32 tmp_4;
    uint32 tmp_5;
    uint32 tmp_6;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeSTRR_g_ImmedStopRsn' */
    (void)Rte_Read_VeSTRR_g_ImmedStopRsn_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD0804_Data_ReadData' */
    /* DataTypeConversion: '<S107>/DTConv' incorporates:
     *  SignalConversion generated from: '<S107>/VeSTRR_g_ImmedStopRsn'
     */
    tmp = tmpRead;
    if (tmpRead > 255U)
    {
        tmp = 255U;
    }

    /* DataTypeConversion: '<S107>/DTConv2' incorporates:
     *  SignalConversion generated from: '<S107>/VeSTRR_g_ImmedStopRsn'
     */
    tmp_0 = tmpRead;
    if (tmpRead > 255U)
    {
        tmp_0 = 255U;
    }

    /* DataTypeConversion: '<S107>/DTConv3' incorporates:
     *  SignalConversion generated from: '<S107>/VeSTRR_g_ImmedStopRsn'
     */
    tmp_1 = tmpRead;
    if (tmpRead > 255U)
    {
        tmp_1 = 255U;
    }

    /* DataTypeConversion: '<S107>/DTConv4' incorporates:
     *  SignalConversion generated from: '<S107>/VeSTRR_g_ImmedStopRsn'
     */
    tmp_2 = tmpRead;
    if (tmpRead > 255U)
    {
        tmp_2 = 255U;
    }

    /* DataTypeConversion: '<S107>/DTConv5' incorporates:
     *  SignalConversion generated from: '<S107>/VeSTRR_g_ImmedStopRsn'
     */
    tmp_3 = tmpRead;
    if (tmpRead > 255U)
    {
        tmp_3 = 255U;
    }

    /* DataTypeConversion: '<S107>/DTConv6' incorporates:
     *  SignalConversion generated from: '<S107>/VeSTRR_g_ImmedStopRsn'
     */
    tmp_4 = tmpRead;
    if (tmpRead > 255U)
    {
        tmp_4 = 255U;
    }

    /* DataTypeConversion: '<S107>/DTConv7' incorporates:
     *  SignalConversion generated from: '<S107>/VeSTRR_g_ImmedStopRsn'
     */
    tmp_5 = tmpRead;
    if (tmpRead > 255U)
    {
        tmp_5 = 255U;
    }

    /* DataTypeConversion: '<S107>/DTConv8' incorporates:
     *  SignalConversion generated from: '<S107>/VeSTRR_g_ImmedStopRsn'
     */
    tmp_6 = tmpRead;
    if (tmpRead > 255U)
    {
        tmp_6 = 255U;
    }

    /* SignalConversion generated from: '<S107>/Data' incorporates:
     *  ArithShift: '<S107>/BitShift'
     *  ArithShift: '<S107>/BitShift1'
     *  ArithShift: '<S107>/BitShift2'
     *  ArithShift: '<S107>/BitShift3'
     *  ArithShift: '<S107>/BitShift4'
     *  ArithShift: '<S107>/BitShift5'
     *  ArithShift: '<S107>/BitShift6'
     *  DataTypeConversion: '<S107>/DTConv'
     *  DataTypeConversion: '<S107>/DTConv2'
     *  DataTypeConversion: '<S107>/DTConv3'
     *  DataTypeConversion: '<S107>/DTConv4'
     *  DataTypeConversion: '<S107>/DTConv5'
     *  DataTypeConversion: '<S107>/DTConv6'
     *  DataTypeConversion: '<S107>/DTConv7'
     *  DataTypeConversion: '<S107>/DTConv8'
     *  S-Function (sfix_bitop): '<S107>/Bitwise'
     */
    Data[0] = (uint8)((sint32)(((((((((sint32)((uint8)(((uint8)tmp_0) << 1ULL)))
        | ((sint32)tmp)) | ((sint32)((uint8)(((uint8)tmp_1) << 2ULL)))) |
                           ((sint32)((uint8)(((uint8)tmp_2) << 3ULL)))) |
                          ((sint32)((uint8)(((uint8)tmp_3) << 4ULL)))) |
                         ((sint32)((uint8)(((uint8)tmp_4) << 5ULL)))) | ((sint32)
                         ((uint8)(((uint8)tmp_5) << 6ULL)))) | ((sint32)((uint8)
                         (((uint8)tmp_6) << 7ULL)))));

    /* DataTypeConversion: '<S107>/DTConv9' incorporates:
     *  SignalConversion generated from: '<S107>/VeSTRR_g_ImmedStopRsn'
     */
    tmp = tmpRead;
    if (tmpRead > 255U)
    {
        tmp = 255U;
    }

    /* DataTypeConversion: '<S107>/DTConv10' incorporates:
     *  SignalConversion generated from: '<S107>/VeSTRR_g_ImmedStopRsn'
     */
    tmp_0 = tmpRead;
    if (tmpRead > 255U)
    {
        tmp_0 = 255U;
    }

    /* DataTypeConversion: '<S107>/DTConv11' incorporates:
     *  SignalConversion generated from: '<S107>/VeSTRR_g_ImmedStopRsn'
     */
    tmp_1 = tmpRead;
    if (tmpRead > 255U)
    {
        tmp_1 = 255U;
    }

    /* DataTypeConversion: '<S107>/DTConv12' incorporates:
     *  SignalConversion generated from: '<S107>/VeSTRR_g_ImmedStopRsn'
     */
    tmp_2 = tmpRead;
    if (tmpRead > 255U)
    {
        tmp_2 = 255U;
    }

    /* DataTypeConversion: '<S107>/DTConv13' incorporates:
     *  SignalConversion generated from: '<S107>/VeSTRR_g_ImmedStopRsn'
     */
    tmp_3 = tmpRead;
    if (tmpRead > 255U)
    {
        tmp_3 = 255U;
    }

    /* DataTypeConversion: '<S107>/DTConv14' incorporates:
     *  SignalConversion generated from: '<S107>/VeSTRR_g_ImmedStopRsn'
     */
    if (tmpRead > 255U)
    {
        tmpRead = 255U;
    }

    /* SignalConversion generated from: '<S107>/Data' incorporates:
     *  ArithShift: '<S107>/BitShift10'
     *  ArithShift: '<S107>/BitShift11'
     *  ArithShift: '<S107>/BitShift7'
     *  ArithShift: '<S107>/BitShift8'
     *  ArithShift: '<S107>/BitShift9'
     *  DataTypeConversion: '<S107>/DTConv10'
     *  DataTypeConversion: '<S107>/DTConv11'
     *  DataTypeConversion: '<S107>/DTConv12'
     *  DataTypeConversion: '<S107>/DTConv13'
     *  DataTypeConversion: '<S107>/DTConv14'
     *  DataTypeConversion: '<S107>/DTConv9'
     *  S-Function (sfix_bitop): '<S107>/Bitwise1'
     */
    Data[1] = (uint8)((sint32)(((((((sint32)((uint8)(((uint8)tmp_0) << 1ULL))) |
                           ((sint32)tmp)) | ((sint32)((uint8)(((uint8)tmp_1) <<
        2ULL)))) | ((sint32)((uint8)(((uint8)tmp_2) << 3ULL)))) | ((sint32)
                         ((uint8)(((uint8)tmp_3) << 4ULL)))) | ((sint32)((uint8)
                         (((uint8)tmpRead) << 5ULL)))));

    /* SignalConversion generated from: '<S107>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD0804_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD0805_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[4])
{
    uint32 tmpRead;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeSTRR_g_AStpInhbtRsn2' */
    (void)Rte_Read_VeSTRR_g_AStpInhbtRsn2_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD0805_Data_ReadData' */
    /* SignalConversion generated from: '<S108>/Data' incorporates:
     *  ArithShift: '<S108>/Bitshift'
     *  ArithShift: '<S108>/Bitshift1'
     *  ArithShift: '<S108>/Bitshift2'
     *  S-Function (sfix_bitop): '<S108>/Bitwise1'
     *  S-Function (sfix_bitop): '<S108>/Bitwise2'
     *  S-Function (sfix_bitop): '<S108>/Bitwise3'
     *  SignalConversion generated from: '<S108>/VeSTRR_g_AStpInhbtRsn2'
     */
    Data[0] = (uint8)(tmpRead >> 24ULL);
    Data[1] = (uint8)((tmpRead >> 16ULL) & 255U);
    Data[2] = (uint8)((tmpRead >> 8ULL) & 255U);
    Data[3] = (uint8)(tmpRead & 255U);

    /* SignalConversion generated from: '<S108>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD0805_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD1000_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[2])
{
    float32 rtb_Prod_ly;
    uint16 rtb_DTConv_db_0;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeESPR_n_EngineSpeed_MCP' */
    (void)Rte_Read_VeESPR_n_EngineSpeed_MCP_Value(&rtb_Prod_ly);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD1000_Data_ReadData' */
    /* Switch: '<S207>/Switch2' incorporates:
     *  Constant: '<S109>/MaxValue'
     *  Constant: '<S109>/MinValue'
     *  RelationalOperator: '<S207>/LowerRelop1'
     *  RelationalOperator: '<S207>/UpperRelop'
     *  SignalConversion generated from: '<S109>/VeESPR_n_EngineSpeed_MCP'
     *  Switch: '<S207>/Switch'
     */
    if (rtb_Prod_ly > 16383.75F)
    {
        /* Product: '<S109>/Prod' */
        rtb_Prod_ly = 16383.75F;
    }
    else
    {
        if (rtb_Prod_ly < 0.0F)
        {
            /* Switch: '<S207>/Switch' incorporates:
             *  Constant: '<S109>/MinValue'
             *  Product: '<S109>/Prod'
             */
            rtb_Prod_ly = 0.0F;
        }
    }

    /* End of Switch: '<S207>/Switch2' */

    /* DataTypeConversion: '<S109>/DTConv' incorporates:
     *  Constant: '<S109>/Factor'
     *  Product: '<S109>/Prod'
     *  Sum: '<S109>/Add'
     */
    rtb_Prod_ly = roundf(rtb_Prod_ly / 0.25F);
    if (rtb_Prod_ly < 65536.0F)
    {
        rtb_DTConv_db_0 = (uint16)rtb_Prod_ly;
    }
    else
    {
        rtb_DTConv_db_0 = MAX_uint16_T;
    }

    /* SignalConversion generated from: '<S109>/Data' incorporates:
     *  ArithShift: '<S109>/Bitshift'
     *  DataTypeConversion: '<S109>/DTConv'
     *  DataTypeConversion: '<S109>/Mux'
     *  DataTypeConversion: '<S109>/Mux2'
     *  S-Function (sfix_bitop): '<S109>/Bitwise1'
     */
    Data[0] = (uint8)(((uint32)rtb_DTConv_db_0) >> 8ULL);
    Data[1] = (uint8)(rtb_DTConv_db_0 & ((uint16)255));

    /* SignalConversion generated from: '<S109>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD1000_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD1002_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[2])
{
    float32 rtb_Prod_f4;
    uint16 rtb_DTConv_e_0;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeCSVR_v_VehSpd' */
    (void)Rte_Read_VeCSVR_v_VehSpd_Value(&rtb_Prod_f4);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD1002_Data_ReadData' */
    /* Switch: '<S208>/Switch2' incorporates:
     *  Constant: '<S110>/MaxValue'
     *  Constant: '<S110>/MinValue'
     *  RelationalOperator: '<S208>/LowerRelop1'
     *  RelationalOperator: '<S208>/UpperRelop'
     *  SignalConversion generated from: '<S110>/VeCSVR_v_VehSpd'
     *  Switch: '<S208>/Switch'
     */
    if (rtb_Prod_f4 > 511.984406F)
    {
        /* Product: '<S110>/Prod' */
        rtb_Prod_f4 = 511.984406F;
    }
    else
    {
        if (rtb_Prod_f4 < 0.0F)
        {
            /* Switch: '<S208>/Switch' incorporates:
             *  Constant: '<S110>/MinValue'
             *  Product: '<S110>/Prod'
             */
            rtb_Prod_f4 = 0.0F;
        }
    }

    /* End of Switch: '<S208>/Switch2' */

    /* DataTypeConversion: '<S110>/DTConv' incorporates:
     *  Constant: '<S110>/Factor'
     *  Product: '<S110>/Prod'
     *  Sum: '<S110>/Add'
     */
    rtb_Prod_f4 = roundf(rtb_Prod_f4 / 0.0078125F);
    if (rtb_Prod_f4 < 65536.0F)
    {
        rtb_DTConv_e_0 = (uint16)rtb_Prod_f4;
    }
    else
    {
        rtb_DTConv_e_0 = MAX_uint16_T;
    }

    /* SignalConversion generated from: '<S110>/Data' incorporates:
     *  ArithShift: '<S110>/Bitshift'
     *  DataTypeConversion: '<S110>/DTConv'
     *  DataTypeConversion: '<S110>/Mux'
     *  DataTypeConversion: '<S110>/Mux2'
     *  S-Function (sfix_bitop): '<S110>/Bitwise1'
     */
    Data[0] = (uint8)(((uint32)rtb_DTConv_e_0) >> 8ULL);
    Data[1] = (uint8)(rtb_DTConv_e_0 & ((uint16)255));

    /* SignalConversion generated from: '<S110>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD1002_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD1004_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    float32 rtb_Max;
    float32 tmpRead;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VePMDB_U_BF2_SysVolt' */
    (void)Rte_Read_VePMDB_U_BF2_SysVolt_Value(&rtb_Max);

    /* Inport: '<Root>/VePMDB_U_BF1_SysVolt' */
    (void)Rte_Read_VePMDB_U_BF1_SysVolt_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD1004_Data_ReadData' */
    /* MinMax: '<S111>/Max' incorporates:
     *  SignalConversion generated from: '<S111>/VePMDB_U_BF1_SysVolt'
     *  SignalConversion generated from: '<S111>/VePMDB_U_BF2_SysVolt'
     */
    rtb_Max = fmaxf(tmpRead, rtb_Max);

    /* Switch: '<S209>/Switch2' incorporates:
     *  Constant: '<S111>/MaxValue'
     *  Constant: '<S111>/MinValue'
     *  RelationalOperator: '<S209>/LowerRelop1'
     *  RelationalOperator: '<S209>/UpperRelop'
     *  Switch: '<S209>/Switch'
     */
    if (rtb_Max > 25.5F)
    {
        /* Product: '<S111>/Prod' */
        rtb_Max = 25.5F;
    }
    else
    {
        if (rtb_Max < 0.0F)
        {
            /* Switch: '<S209>/Switch' incorporates:
             *  Constant: '<S111>/MinValue'
             *  Product: '<S111>/Prod'
             */
            rtb_Max = 0.0F;
        }
    }

    /* End of Switch: '<S209>/Switch2' */

    /* Product: '<S111>/Prod' incorporates:
     *  Constant: '<S111>/Factor'
     *  Sum: '<S111>/Add'
     */
    rtb_Max /= 0.1F;

    /* DataTypeConversion: '<S111>/DTConv' */
    rtb_Max = roundf(rtb_Max);
    if (rtb_Max < 256.0F)
    {
        /* SignalConversion generated from: '<S111>/Data' */
        *Data = (uint8)rtb_Max;
    }
    else
    {
        /* SignalConversion generated from: '<S111>/Data' */
        *Data = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S111>/DTConv' */

    /* SignalConversion generated from: '<S111>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD1004_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD1927_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    boolean tmpRead;
    boolean tmpRead_0;
    boolean tmpRead_1;
    boolean tmpRead_2;
    boolean tmpRead_3;
    boolean tmpRead_4;
    boolean tmpRead_5;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VePLTR_b_ACC_On' */
    (void)Rte_Read_VePLTR_b_ACC_On_Value(&tmpRead_5);

    /* Inport: '<Root>/VeASLR_b_SpdLmtrOnOffSts' */
    (void)Rte_Read_VeASLR_b_SpdLmtrOnOffSts_Value(&tmpRead_4);

    /* Inport: '<Root>/VeCCTR_b_CcCancelSw' */
    (void)Rte_Read_VeCCTR_b_CcCancelSw_Value(&tmpRead_3);

    /* Inport: '<Root>/VeCCTR_b_CcAccelSts' */
    (void)Rte_Read_VeCCTR_b_CcAccelSts_Value(&tmpRead_2);

    /* Inport: '<Root>/VeCCTR_b_CcDecelSts' */
    (void)Rte_Read_VeCCTR_b_CcDecelSts_Value(&tmpRead_1);

    /* Inport: '<Root>/VeCCTR_b_CcResumeSw' */
    (void)Rte_Read_VeCCTR_b_CcResumeSw_Value(&tmpRead_0);

    /* Inport: '<Root>/VeCCTR_b_CcOnOffSts' */
    (void)Rte_Read_VeCCTR_b_CcOnOffSts_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD1927_Data_ReadData' */
    /* SignalConversion generated from: '<S112>/Data' incorporates:
     *  ArithShift: '<S112>/BitShift'
     *  ArithShift: '<S112>/BitShift1'
     *  ArithShift: '<S112>/BitShift2'
     *  ArithShift: '<S112>/BitShift3'
     *  ArithShift: '<S112>/BitShift4'
     *  ArithShift: '<S112>/BitShift5'
     *  DataTypeConversion: '<S112>/DTConv'
     *  DataTypeConversion: '<S112>/DTConv2'
     *  DataTypeConversion: '<S112>/DTConv3'
     *  DataTypeConversion: '<S112>/DTConv4'
     *  DataTypeConversion: '<S112>/DTConv5'
     *  DataTypeConversion: '<S112>/DTConv6'
     *  DataTypeConversion: '<S112>/DTConv7'
     *  S-Function (sfix_bitop): '<S112>/Bitwise'
     *  SignalConversion generated from: '<S112>/VeASLR_b_SpdLmtrOnOffSts'
     *  SignalConversion generated from: '<S112>/VeCCTR_b_CcAccelSts'
     *  SignalConversion generated from: '<S112>/VeCCTR_b_CcCancelSw'
     *  SignalConversion generated from: '<S112>/VeCCTR_b_CcDecelSts'
     *  SignalConversion generated from: '<S112>/VeCCTR_b_CcOnOffSts'
     *  SignalConversion generated from: '<S112>/VeCCTR_b_CcResumeSw'
     *  SignalConversion generated from: '<S112>/VePLTR_b_ACC_On'
     */
    *Data = (uint8)((sint32)((((((((tmpRead_0 ? 1 : 0) * 2) | (tmpRead ? 1 : 0))
                         | ((tmpRead_1 ? 1 : 0) * 4)) | ((tmpRead_2 ? 1 : 0) * 8))
                       | ((tmpRead_3 ? 1 : 0) * 16)) | ((tmpRead_4 ? 1 : 0) * 32))
                     | ((tmpRead_5 ? 1 : 0) * 64)));

    /* SignalConversion generated from: '<S112>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD1927_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD19B0_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    float32 rtb_Prod_g2;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeASLR_v_SetVehSpdLimKPH' */
    (void)Rte_Read_VeASLR_v_SetVehSpdLimKPH_Value(&rtb_Prod_g2);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD19B0_Data_ReadData' */
    /* Switch: '<S210>/Switch2' incorporates:
     *  Constant: '<S113>/MaxValue'
     *  Constant: '<S113>/MinValue'
     *  RelationalOperator: '<S210>/LowerRelop1'
     *  RelationalOperator: '<S210>/UpperRelop'
     *  SignalConversion generated from: '<S113>/VeASLR_v_SetVehSpdLimKPH'
     *  Switch: '<S210>/Switch'
     */
    if (rtb_Prod_g2 > 255.0F)
    {
        /* Product: '<S113>/Prod' */
        rtb_Prod_g2 = 255.0F;
    }
    else
    {
        if (rtb_Prod_g2 < 0.0F)
        {
            /* Switch: '<S210>/Switch' incorporates:
             *  Constant: '<S113>/MinValue'
             *  Product: '<S113>/Prod'
             */
            rtb_Prod_g2 = 0.0F;
        }
    }

    /* End of Switch: '<S210>/Switch2' */

    /* DataTypeConversion: '<S113>/DTConv' */
    rtb_Prod_g2 = roundf(rtb_Prod_g2);
    if (rtb_Prod_g2 < 256.0F)
    {
        /* SignalConversion generated from: '<S113>/Data' */
        *Data = (uint8)rtb_Prod_g2;
    }
    else
    {
        /* SignalConversion generated from: '<S113>/Data' */
        *Data = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S113>/DTConv' */

    /* SignalConversion generated from: '<S113>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD19B0_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD19B1_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    uint16 tmpRead;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeASLR_e_SpdLmtSts' */
    (void)Rte_Read_VeASLR_e_SpdLmtSts_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD19B1_Data_ReadData' */
    /* DataTypeConversion: '<S114>/DTConv' incorporates:
     *  SignalConversion generated from: '<S114>/VeASLR_e_SpdLmtSts'
     */
    if (((sint32)tmpRead) > 255)
    {
        tmpRead = 255U;
    }

    /* SignalConversion generated from: '<S114>/Data' incorporates:
     *  DataTypeConversion: '<S114>/DTConv'
     */
    *Data = (uint8)tmpRead;

    /* SignalConversion generated from: '<S114>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD19B1_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD19B2_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    boolean tmpRead;
    boolean tmpRead_0;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeCSVR_b_VehSpdVSOSigFailSts' */
    (void)Rte_Read_VeCSVR_b_VehSpdVSOSigFailSts_Value(&tmpRead_0);

    /* Inport: '<Root>/VeCCTR_b_CcFailSts' */
    (void)Rte_Read_VeCCTR_b_CcFailSts_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD19B2_Data_ReadData' */
    /* SignalConversion generated from: '<S115>/Data' incorporates:
     *  ArithShift: '<S115>/BitShift'
     *  DataTypeConversion: '<S115>/DTConv'
     *  DataTypeConversion: '<S115>/DTConv2'
     *  S-Function (sfix_bitop): '<S115>/Bitwise'
     *  SignalConversion generated from: '<S115>/VeCCTR_b_CcFailSts'
     *  SignalConversion generated from: '<S115>/VeCSVR_b_VehSpdVSOSigFailSts'
     */
    *Data = (uint8)((sint32)(((tmpRead_0 ? 1 : 0) * 2) | (tmpRead ? 1 : 0)));

    /* SignalConversion generated from: '<S115>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD19B2_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD19B3_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    uint8 tmpRead_0;
    uint8 tmpRead_1;
    boolean tmpRead;
    boolean tmpRead_2;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeSRMR_b_Lv2AccelPdlPosFlt' */
    (void)Rte_Read_VeSRMR_b_Lv2AccelPdlPosFlt_Value(&tmpRead_2);

    /* Inport: '<Root>/VeSR1B_y_VehicleSpeedVSOSig_FD3_SigSts' */
    (void)Rte_Read_VeSR1B_y_VehicleSpeedVSOSig_FD3_SigSts_Value(&tmpRead_1);

    /* Inport: '<Root>/VeSR1B_y_CruiseControlFailSts_SigSts' */
    (void)Rte_Read_VeSR1B_y_CruiseControlFailSts_SigSts_Value(&tmpRead_0);

    /* Inport: '<Root>/VeCCTR_b_Lv1CrusSwStuckFailed' */
    (void)Rte_Read_VeCCTR_b_Lv1CrusSwStuckFailed_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD19B3_Data_ReadData' */
    /* SignalConversion generated from: '<S116>/Data' incorporates:
     *  ArithShift: '<S116>/BitShift'
     *  ArithShift: '<S116>/BitShift1'
     *  ArithShift: '<S116>/BitShift2'
     *  Constant: '<S116>/Constant'
     *  Constant: '<S116>/Constant1'
     *  DataTypeConversion: '<S116>/DTConv'
     *  DataTypeConversion: '<S116>/DTConv4'
     *  RelationalOperator: '<S116>/Relational Operator'
     *  RelationalOperator: '<S116>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S116>/Bitwise'
     *  SignalConversion generated from: '<S116>/VeCCTR_b_Lv1CrusSwStuckFailed'
     *  SignalConversion generated from: '<S116>/VeSR1B_y_CruiseControlFailSts_SigSts'
     *  SignalConversion generated from: '<S116>/VeSR1B_y_VehicleSpeedVSOSig_FD3_SigSts'
     *  SignalConversion generated from: '<S116>/VeSRMR_b_Lv2AccelPdlPosFlt'
     */
    *Data = (uint8)((sint32)((((((sint32)((((sint32)tmpRead_0) == 8) ? 1 : 0)) *
                        2) | (tmpRead ? 1 : 0)) | (((sint32)((((sint32)tmpRead_1)
                          == 8) ? 1 : 0)) * 4)) | ((tmpRead_2 ? 1 : 0) * 8)));

    /* SignalConversion generated from: '<S116>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD19B3_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD201E_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[2])
{
    float32 rtb_Prod_c;
    uint16 rtb_DTConv_mj_0;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeAATR_T_CBC_AmbAirTempRaw' */
    (void)Rte_Read_VeAATR_T_CBC_AmbAirTempRaw_Value(&rtb_Prod_c);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD201E_Data_ReadData' */
    /* Switch: '<S211>/Switch2' incorporates:
     *  Constant: '<S117>/MaxValue'
     *  Constant: '<S117>/MinValue'
     *  RelationalOperator: '<S211>/LowerRelop1'
     *  RelationalOperator: '<S211>/UpperRelop'
     *  SignalConversion generated from: '<S117>/VeAATR_T_CBC_AmbAirTempRaw'
     *  Switch: '<S211>/Switch'
     */
    if (rtb_Prod_c > 170.0F)
    {
        /* Product: '<S117>/Prod' */
        rtb_Prod_c = 170.0F;
    }
    else
    {
        if (rtb_Prod_c < -85.0F)
        {
            /* Switch: '<S211>/Switch' incorporates:
             *  Constant: '<S117>/MinValue'
             *  Product: '<S117>/Prod'
             */
            rtb_Prod_c = -85.0F;
        }
    }

    /* End of Switch: '<S211>/Switch2' */

    /* DataTypeConversion: '<S117>/DTConv' incorporates:
     *  Constant: '<S117>/Factor'
     *  Constant: '<S117>/Offset'
     *  Product: '<S117>/Prod'
     *  Sum: '<S117>/Add'
     */
    rtb_Prod_c = roundf((rtb_Prod_c - -85.0F) / 0.5F);
    if (rtb_Prod_c < 65536.0F)
    {
        rtb_DTConv_mj_0 = (uint16)rtb_Prod_c;
    }
    else
    {
        rtb_DTConv_mj_0 = MAX_uint16_T;
    }

    /* SignalConversion generated from: '<S117>/Data' incorporates:
     *  ArithShift: '<S117>/Bitshift'
     *  DataTypeConversion: '<S117>/DTConv'
     *  DataTypeConversion: '<S117>/Mux'
     *  DataTypeConversion: '<S117>/Mux2'
     *  S-Function (sfix_bitop): '<S117>/Bitwise1'
     */
    Data[0] = (uint8)(((uint32)rtb_DTConv_mj_0) >> 8ULL);
    Data[1] = (uint8)(rtb_DTConv_mj_0 & ((uint16)255));

    /* SignalConversion generated from: '<S117>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD201E_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD2500_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[2])
{
    float32 rtb_Prod_di;
    TeBRKR_e_BrkPdl_Stat tmpRead;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeBRKR_Pct_BrkTravelSts' */
    (void)Rte_Read_VeBRKR_Pct_BrkTravelSts_Value(&rtb_Prod_di);

    /* Inport: '<Root>/VeBRKR_e_BrkPedalDscrtInpt' */
    (void)Rte_Read_VeBRKR_e_BrkPedalDscrtInpt_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD2500_Data_ReadData' */
    /* Switch: '<S212>/Switch2' incorporates:
     *  Constant: '<S118>/MaxValue'
     *  Constant: '<S118>/MinValue'
     *  RelationalOperator: '<S212>/LowerRelop1'
     *  RelationalOperator: '<S212>/UpperRelop'
     *  SignalConversion generated from: '<S118>/VeBRKR_Pct_BrkTravelSts'
     *  Switch: '<S212>/Switch'
     */
    if (rtb_Prod_di > 100.0F)
    {
        /* Product: '<S118>/Prod' */
        rtb_Prod_di = 100.0F;
    }
    else
    {
        if (rtb_Prod_di < 0.0F)
        {
            /* Switch: '<S212>/Switch' incorporates:
             *  Constant: '<S118>/MinValue'
             *  Product: '<S118>/Prod'
             */
            rtb_Prod_di = 0.0F;
        }
    }

    /* End of Switch: '<S212>/Switch2' */

    /* Product: '<S118>/Prod' incorporates:
     *  Constant: '<S118>/Factor'
     *  Sum: '<S118>/Add'
     */
    rtb_Prod_di /= 0.3937F;

    /* SignalConversion generated from: '<S118>/Data' incorporates:
     *  Inport: '<Root>/VeBRKR_e_BrkPedalDscrtInpt'
     *  SignalConversion generated from: '<S118>/VeBRKR_e_BrkPedalDscrtInpt'
     */
    Data[0] = (uint8)tmpRead;

    /* DataTypeConversion: '<S118>/DTConv1' */
    rtb_Prod_di = roundf(rtb_Prod_di);
    if (rtb_Prod_di < 256.0F)
    {
        /* SignalConversion generated from: '<S118>/Data' */
        Data[1] = (uint8)rtb_Prod_di;
    }
    else
    {
        /* SignalConversion generated from: '<S118>/Data' */
        Data[1] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S118>/DTConv1' */

    /* SignalConversion generated from: '<S118>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD2500_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD2505_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    TeHMIR_e_VldtdTransRngSt_ShifterPOS tmpRead;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeHMIR_e_ShifterPOS' */
    (void)Rte_Read_VeHMIR_e_ShifterPOS_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD2505_Data_ReadData' */
    /* SignalConversion generated from: '<S119>/Data' incorporates:
     *  Inport: '<Root>/VeHMIR_e_ShifterPOS'
     *  SignalConversion generated from: '<S119>/VeHMIR_e_ShifterPOS'
     */
    *Data = (uint8)tmpRead;

    /* SignalConversion generated from: '<S119>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD2505_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD2518_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    TePPCR_e_PPawl_Fdbck tmpRead;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VePPCR_e_PPawlFdbck' */
    (void)Rte_Read_VePPCR_e_PPawlFdbck_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD2518_Data_ReadData' */
    /* SignalConversion generated from: '<S120>/Data' incorporates:
     *  Inport: '<Root>/VePPCR_e_PPawlFdbck'
     *  SignalConversion generated from: '<S120>/VePPCR_e_PPawlFdbck'
     */
    *Data = (uint8)tmpRead;

    /* SignalConversion generated from: '<S120>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD2518_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD2801_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD2801_Data_ReadData' */
    /* SignalConversion generated from: '<S121>/Data' incorporates:
     *  Inport: '<Root>/VeTRGR_y_PRNDLTestFailStatus'
     */
    (void)Rte_Read_VeTRGR_y_PRNDLTestFailStatus_Value(Data);

    /* SignalConversion generated from: '<S121>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD2801_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD2802_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    TePMDR_e_KeyStatus tmpRead;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VePMDR_e_KeyStatus' */
    (void)Rte_Read_VePMDR_e_KeyStatus_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD2802_Data_ReadData' */
    /* SignalConversion generated from: '<S122>/Data' incorporates:
     *  Inport: '<Root>/VePMDR_e_KeyStatus'
     *  SignalConversion generated from: '<S122>/VePMDR_e_KeyStatus'
     */
    *Data = (uint8)tmpRead;

    /* SignalConversion generated from: '<S122>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD2802_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD2949_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    /* local block i/o variables */
    TePLTR_e_ShipingMode rtb_TmpLatchAtVePLTR_e_Shipping;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD2949_Data_ReadData' */
    /* SignalConversion generated from: '<S123>/VePLTR_e_ShippingMode' incorporates:
     *  Inport: '<Root>/VePLTR_e_ShippingMode'
     */
    (void)Rte_Read_VePLTR_e_ShippingMode_Value(&rtb_TmpLatchAtVePLTR_e_Shipping);

    /* SignalConversion generated from: '<S123>/Data' incorporates:
     *  DataTypeConversion: '<S123>/DTConv'
     *  SignalConversion generated from: '<S123>/VePLTR_e_ShippingMode'
     */
    *Data = (uint8)rtb_TmpLatchAtVePLTR_e_Shipping;

    /* SignalConversion generated from: '<S123>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD2949_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD3004_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[6])
{
    float32 rtb_Prod2;
    uint32 rtb_DTConv3;
    uint8 rtb_DTConv2;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VePWDR_t_DAP_FA_ElapsedTime' */
    (void)Rte_Read_VePWDR_t_DAP_FA_ElapsedTime_Value(&rtb_DTConv3);

    /* Inport: '<Root>/VePWDR_Cnt_DAP_FA_KeyCylCnt' */
    (void)Rte_Read_VePWDR_Cnt_DAP_FA_KeyCylCnt_Value(&rtb_DTConv2);

    /* Inport: '<Root>/VePWDR_l_DAP_FA_DistTravld' */
    (void)Rte_Read_VePWDR_l_DAP_FA_DistTravld_Value(&rtb_Prod2);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD3004_Data_ReadData' */
    /* Switch: '<S213>/Switch2' incorporates:
     *  Constant: '<S124>/MaxValue'
     *  Constant: '<S124>/MinValue'
     *  RelationalOperator: '<S213>/LowerRelop1'
     *  RelationalOperator: '<S213>/UpperRelop'
     *  SignalConversion generated from: '<S124>/VePWDR_l_DAP_FA_DistTravld'
     *  Switch: '<S213>/Switch'
     */
    if (rtb_Prod2 > 255.0F)
    {
        /* Product: '<S124>/Prod2' */
        rtb_Prod2 = 255.0F;
    }
    else
    {
        if (rtb_Prod2 < 0.0F)
        {
            /* Switch: '<S213>/Switch' incorporates:
             *  Constant: '<S124>/MinValue'
             *  Product: '<S124>/Prod2'
             */
            rtb_Prod2 = 0.0F;
        }
    }

    /* End of Switch: '<S213>/Switch2' */

    /* DataTypeConversion: '<S124>/DTConv3' incorporates:
     *  Sum: '<S124>/Add2'
     */
    if (((float32)rtb_DTConv3) < 4.2949673E+9F)
    {
        rtb_DTConv3 = (uint32)((float32)rtb_DTConv3);
    }
    else
    {
        rtb_DTConv3 = MAX_uint32_T;
    }

    /* DataTypeConversion: '<S124>/DTConv' incorporates:
     *  Sum: '<S124>/Add'
     */
    rtb_Prod2 = roundf(rtb_Prod2);
    if (rtb_Prod2 < 256.0F)
    {
        /* SignalConversion generated from: '<S124>/Data' */
        Data[0] = (uint8)rtb_Prod2;
    }
    else
    {
        /* SignalConversion generated from: '<S124>/Data' */
        Data[0] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S124>/DTConv' */

    /* SignalConversion generated from: '<S124>/Data' incorporates:
     *  ArithShift: '<S124>/Bitshift'
     *  ArithShift: '<S124>/Bitshift1'
     *  ArithShift: '<S124>/Bitshift2'
     *  DataTypeConversion: '<S124>/DTConv3'
     *  S-Function (sfix_bitop): '<S124>/Bitwise1'
     *  S-Function (sfix_bitop): '<S124>/Bitwise2'
     *  S-Function (sfix_bitop): '<S124>/Bitwise3'
     *  Sum: '<S124>/Add1'
     */
    Data[1] = rtb_DTConv2;
    Data[2] = (uint8)(rtb_DTConv3 >> 24ULL);
    Data[3] = (uint8)((rtb_DTConv3 >> 16ULL) & 255U);
    Data[4] = (uint8)((rtb_DTConv3 >> 8ULL) & 255U);
    Data[5] = (uint8)(rtb_DTConv3 & 255U);

    /* SignalConversion generated from: '<S124>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD3004_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD3027_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[3])
{
    float32 rtb_Prod_na;
    uint32 rtb_DTConv_el_0;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VePLTR_milel_Odometer_Miles' */
    (void)Rte_Read_VePLTR_milel_Odometer_Miles_Value(&rtb_Prod_na);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD3027_Data_ReadData' */
    /* Switch: '<S216>/Switch2' incorporates:
     *  Constant: '<S125>/MaxValue'
     *  Constant: '<S125>/MinValue'
     *  RelationalOperator: '<S216>/LowerRelop1'
     *  RelationalOperator: '<S216>/UpperRelop'
     *  SignalConversion generated from: '<S125>/VePLTR_milel_Odometer_Miles'
     *  Switch: '<S216>/Switch'
     */
    if (rtb_Prod_na > 1.04248769E+6F)
    {
        /* Product: '<S125>/Prod' */
        rtb_Prod_na = 1.04248769E+6F;
    }
    else
    {
        if (rtb_Prod_na < 0.0F)
        {
            /* Switch: '<S216>/Switch' incorporates:
             *  Constant: '<S125>/MinValue'
             *  Product: '<S125>/Prod'
             */
            rtb_Prod_na = 0.0F;
        }
    }

    /* End of Switch: '<S216>/Switch2' */

    /* DataTypeConversion: '<S125>/DTConv' incorporates:
     *  Constant: '<S125>/Factor'
     *  Product: '<S125>/Prod'
     *  Sum: '<S125>/Add'
     */
    rtb_Prod_na = roundf(rtb_Prod_na / 0.1F);
    if (rtb_Prod_na < 4.2949673E+9F)
    {
        rtb_DTConv_el_0 = (uint32)rtb_Prod_na;
    }
    else
    {
        rtb_DTConv_el_0 = MAX_uint32_T;
    }

    /* SignalConversion generated from: '<S125>/Data' incorporates:
     *  ArithShift: '<S125>/Bitshift'
     *  ArithShift: '<S125>/Bitshift1'
     *  DataTypeConversion: '<S125>/DTConv'
     *  S-Function (sfix_bitop): '<S125>/Bitwise'
     *  S-Function (sfix_bitop): '<S125>/Bitwise1'
     *  S-Function (sfix_bitop): '<S125>/Bitwise2'
     */
    Data[0] = (uint8)((rtb_DTConv_el_0 >> 16ULL) & 255U);
    Data[1] = (uint8)((rtb_DTConv_el_0 >> 8ULL) & 255U);
    Data[2] = (uint8)(rtb_DTConv_el_0 & 255U);

    /* SignalConversion generated from: '<S125>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD3027_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD3028_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[3])
{
    float32 rtb_Prod_ah;
    uint32 rtb_DTConv_is_0;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VePLTR_milel_InPlntMileageLmt_Miles' */
    (void)Rte_Read_VePLTR_milel_InPlntMileageLmt_Miles_Value(&rtb_Prod_ah);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD3028_Data_ReadData' */
    /* Switch: '<S217>/Switch2' incorporates:
     *  Constant: '<S126>/MaxValue'
     *  Constant: '<S126>/MinValue'
     *  RelationalOperator: '<S217>/LowerRelop1'
     *  RelationalOperator: '<S217>/UpperRelop'
     *  SignalConversion generated from: '<S126>/VePLTR_milel_InPlntMileageLmt_Miles'
     *  Switch: '<S217>/Switch'
     */
    if (rtb_Prod_ah > 1.04248769E+6F)
    {
        /* Product: '<S126>/Prod' */
        rtb_Prod_ah = 1.04248769E+6F;
    }
    else
    {
        if (rtb_Prod_ah < 0.0F)
        {
            /* Switch: '<S217>/Switch' incorporates:
             *  Constant: '<S126>/MinValue'
             *  Product: '<S126>/Prod'
             */
            rtb_Prod_ah = 0.0F;
        }
    }

    /* End of Switch: '<S217>/Switch2' */

    /* DataTypeConversion: '<S126>/DTConv' incorporates:
     *  Constant: '<S126>/Factor'
     *  Product: '<S126>/Prod'
     *  Sum: '<S126>/Add'
     */
    rtb_Prod_ah = roundf(rtb_Prod_ah / 0.1F);
    if (rtb_Prod_ah < 4.2949673E+9F)
    {
        rtb_DTConv_is_0 = (uint32)rtb_Prod_ah;
    }
    else
    {
        rtb_DTConv_is_0 = MAX_uint32_T;
    }

    /* SignalConversion generated from: '<S126>/Data' incorporates:
     *  ArithShift: '<S126>/Bitshift'
     *  ArithShift: '<S126>/Bitshift1'
     *  DataTypeConversion: '<S126>/DTConv'
     *  S-Function (sfix_bitop): '<S126>/Bitwise'
     *  S-Function (sfix_bitop): '<S126>/Bitwise1'
     *  S-Function (sfix_bitop): '<S126>/Bitwise2'
     */
    Data[0] = (uint8)((rtb_DTConv_is_0 >> 16ULL) & 255U);
    Data[1] = (uint8)((rtb_DTConv_is_0 >> 8ULL) & 255U);
    Data[2] = (uint8)(rtb_DTConv_is_0 & 255U);

    /* SignalConversion generated from: '<S126>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD3028_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD3035_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[3])
{
    uint8 tmpRead;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeRTMR_y_ElecOnlyTstCndtnCheck2_PID' */
    (void)Rte_Read_VeRTMR_y_ElecOnlyTstCndtnCheck2_PID_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD3035_Data_ReadData' */
    /* SignalConversion generated from: '<S127>/Data' incorporates:
     *  DataTypeConversion: '<S127>/DTConv'
     *  Inport: '<Root>/VeRTMR_y_ElecOnlyTstCndtnCheck1_PID'
     *  SignalConversion generated from: '<S127>/VeRTMR_y_ElecOnlyTstCndtnCheck2_PID'
     */
    (void)Rte_Read_VeRTMR_y_ElecOnlyTstCndtnCheck1_PID_Value(&Data[0]);
    Data[1] = tmpRead;
    Data[2] = DCAB_ac_ConstB.Mux3_d;

    /* SignalConversion generated from: '<S127>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD3035_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD3036_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[3])
{
    uint32 tmpRead;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeRTMR_g_BSGRestartRsn' */
    (void)Rte_Read_VeRTMR_g_BSGRestartRsn_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD3036_Data_ReadData' */
    /* SignalConversion generated from: '<S128>/Data' incorporates:
     *  ArithShift: '<S128>/Bitshift'
     *  ArithShift: '<S128>/Bitshift1'
     *  S-Function (sfix_bitop): '<S128>/Bitwise'
     *  S-Function (sfix_bitop): '<S128>/Bitwise1'
     *  S-Function (sfix_bitop): '<S128>/Bitwise2'
     *  SignalConversion generated from: '<S128>/VeRTMR_g_BSGRestartRsn'
     */
    Data[0] = (uint8)((tmpRead >> 16ULL) & 255U);
    Data[1] = (uint8)((tmpRead >> 8ULL) & 255U);
    Data[2] = (uint8)(tmpRead & 255U);

    /* SignalConversion generated from: '<S128>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD3036_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD3200_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[2])
{
    boolean tmpRead;
    boolean tmpRead_0;
    boolean tmpRead_1;
    boolean tmpRead_2;
    boolean tmpRead_3;
    boolean tmpRead_4;
    boolean tmpRead_5;
    boolean tmpRead_6;
    boolean tmpRead_7;
    boolean tmpRead_8;
    boolean tmpRead_9;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeIMOR_b_BCMMiniKeyNotStoredRec' */
    (void)Rte_Read_VeIMOR_b_BCMMiniKeyNotStoredRec_Value(&tmpRead_9);

    /* Inport: '<Root>/VeIMOR_b_BCMNoPRAorMiniKeyRec' */
    (void)Rte_Read_VeIMOR_b_BCMNoPRAorMiniKeyRec_Value(&tmpRead_8);

    /* Inport: '<Root>/VeIMOR_b_BCMNoSecondRespRec' */
    (void)Rte_Read_VeIMOR_b_BCMNoSecondRespRec_Value(&tmpRead_7);

    /* Inport: '<Root>/VeIMOR_b_BCMRespTENRec' */
    (void)Rte_Read_VeIMOR_b_BCMRespTENRec_Value(&tmpRead_6);

    /* Inport: '<Root>/VeIMOR_b_BCMNoENQpResponse' */
    (void)Rte_Read_VeIMOR_b_BCMNoENQpResponse_Value(&tmpRead_5);

    /* Inport: '<Root>/VeIMOR_b_HCPNotProg' */
    (void)Rte_Read_VeIMOR_b_HCPNotProg_Value(&tmpRead_4);

    /* Inport: '<Root>/VeIMOR_b_BCMRespBadG2Verify' */
    (void)Rte_Read_VeIMOR_b_BCMRespBadG2Verify_Value(&tmpRead_3);

    /* Inport: '<Root>/VeIMOR_b_BCMRespUCVerify' */
    (void)Rte_Read_VeIMOR_b_BCMRespUCVerify_Value(&tmpRead_2);

    /* Inport: '<Root>/VeIMOR_b_BCMRespTENVerify' */
    (void)Rte_Read_VeIMOR_b_BCMRespTENVerify_Value(&tmpRead_1);

    /* Inport: '<Root>/VeIMOR_b_BCMFailedVerif' */
    (void)Rte_Read_VeIMOR_b_BCMFailedVerif_Value(&tmpRead_0);

    /* Inport: '<Root>/VeIMOR_b_BCMNoVerifResp' */
    (void)Rte_Read_VeIMOR_b_BCMNoVerifResp_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD3200_Data_ReadData' */
    /* SignalConversion generated from: '<S129>/Data' incorporates:
     *  ArithShift: '<S129>/BitShift'
     *  ArithShift: '<S129>/BitShift1'
     *  ArithShift: '<S129>/BitShift2'
     *  ArithShift: '<S129>/BitShift3'
     *  ArithShift: '<S129>/BitShift4'
     *  ArithShift: '<S129>/BitShift6'
     *  ArithShift: '<S129>/BitShift7'
     *  ArithShift: '<S129>/BitShift8'
     *  ArithShift: '<S129>/BitShift9'
     *  DataTypeConversion: '<S129>/DTConv'
     *  DataTypeConversion: '<S129>/DTConv10'
     *  DataTypeConversion: '<S129>/DTConv11'
     *  DataTypeConversion: '<S129>/DTConv12'
     *  DataTypeConversion: '<S129>/DTConv2'
     *  DataTypeConversion: '<S129>/DTConv3'
     *  DataTypeConversion: '<S129>/DTConv4'
     *  DataTypeConversion: '<S129>/DTConv5'
     *  DataTypeConversion: '<S129>/DTConv6'
     *  DataTypeConversion: '<S129>/DTConv8'
     *  DataTypeConversion: '<S129>/DTConv9'
     *  S-Function (sfix_bitop): '<S129>/Bitwise'
     *  S-Function (sfix_bitop): '<S129>/Bitwise1'
     *  SignalConversion generated from: '<S129>/VeIMOR_b_BCMFailedVerif'
     *  SignalConversion generated from: '<S129>/VeIMOR_b_BCMMiniKeyNotStoredRec'
     *  SignalConversion generated from: '<S129>/VeIMOR_b_BCMNoENQpResponse'
     *  SignalConversion generated from: '<S129>/VeIMOR_b_BCMNoPRAorMiniKeyRec'
     *  SignalConversion generated from: '<S129>/VeIMOR_b_BCMNoSecondRespRec'
     *  SignalConversion generated from: '<S129>/VeIMOR_b_BCMNoVerifResp'
     *  SignalConversion generated from: '<S129>/VeIMOR_b_BCMRespBadG2Verify'
     *  SignalConversion generated from: '<S129>/VeIMOR_b_BCMRespTENRec'
     *  SignalConversion generated from: '<S129>/VeIMOR_b_BCMRespTENVerify'
     *  SignalConversion generated from: '<S129>/VeIMOR_b_BCMRespUCVerify'
     *  SignalConversion generated from: '<S129>/VeIMOR_b_HCPNotProg'
     */
    Data[0] = (uint8)((sint32)(((((((tmpRead_0 ? 1 : 0) * 2) | (tmpRead ? 1 : 0))
                          | ((tmpRead_1 ? 1 : 0) * 4)) | ((tmpRead_2 ? 1 : 0) *
                          8)) | ((tmpRead_3 ? 1 : 0) * 16)) | ((tmpRead_4 ? 1 :
                         0) * 32)));
    Data[1] = (uint8)((sint32)((((((tmpRead_6 ? 1 : 0) * 2) | (tmpRead_5 ? 1 : 0))
                         | ((tmpRead_7 ? 1 : 0) * 4)) | ((tmpRead_8 ? 1 : 0) * 8))
                       | ((tmpRead_9 ? 1 : 0) * 16)));

    /* SignalConversion generated from: '<S129>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD3200_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD4000_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    float32 rtb_Prod_ew;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeTMIR_T_OnBrdChrg_ClntTmpIn' */
    (void)Rte_Read_VeTMIR_T_OnBrdChrg_ClntTmpIn_Value(&rtb_Prod_ew);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD4000_Data_ReadData' */
    /* Switch: '<S218>/Switch2' incorporates:
     *  Constant: '<S130>/MaxValue'
     *  Constant: '<S130>/MinValue'
     *  RelationalOperator: '<S218>/LowerRelop1'
     *  RelationalOperator: '<S218>/UpperRelop'
     *  SignalConversion generated from: '<S130>/VeTMIR_T_OnBrdChrg_ClntTmpIn'
     *  Switch: '<S218>/Switch'
     */
    if (rtb_Prod_ew > 214.0F)
    {
        /* Product: '<S130>/Prod' */
        rtb_Prod_ew = 214.0F;
    }
    else
    {
        if (rtb_Prod_ew < -40.0F)
        {
            /* Switch: '<S218>/Switch' incorporates:
             *  Constant: '<S130>/MinValue'
             *  Product: '<S130>/Prod'
             */
            rtb_Prod_ew = -40.0F;
        }
    }

    /* End of Switch: '<S218>/Switch2' */

    /* Product: '<S130>/Prod' incorporates:
     *  Constant: '<S130>/Offset'
     *  Sum: '<S130>/Add'
     */
    rtb_Prod_ew -= -40.0F;

    /* DataTypeConversion: '<S130>/DTConv' */
    rtb_Prod_ew = roundf(rtb_Prod_ew);
    if (rtb_Prod_ew < 256.0F)
    {
        /* SignalConversion generated from: '<S130>/Data' */
        *Data = (uint8)rtb_Prod_ew;
    }
    else
    {
        /* SignalConversion generated from: '<S130>/Data' */
        *Data = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S130>/DTConv' */

    /* SignalConversion generated from: '<S130>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD4000_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD4001_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    float32 rtb_Prod_o;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeTAIR_p_HghRfrgtPres' */
    (void)Rte_Read_VeTAIR_p_HghRfrgtPres_Value(&rtb_Prod_o);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD4001_Data_ReadData' */
    /* Switch: '<S219>/Switch2' incorporates:
     *  Constant: '<S131>/MaxValue'
     *  Constant: '<S131>/MinValue'
     *  RelationalOperator: '<S219>/LowerRelop1'
     *  RelationalOperator: '<S219>/UpperRelop'
     *  SignalConversion generated from: '<S131>/VeTAIR_p_HghRfrgtPres'
     *  Switch: '<S219>/Switch'
     */
    if (rtb_Prod_o > 63.0F)
    {
        /* Product: '<S131>/Prod' */
        rtb_Prod_o = 63.0F;
    }
    else
    {
        if (rtb_Prod_o < 0.0F)
        {
            /* Switch: '<S219>/Switch' incorporates:
             *  Constant: '<S131>/MinValue'
             *  Product: '<S131>/Prod'
             */
            rtb_Prod_o = 0.0F;
        }
    }

    /* End of Switch: '<S219>/Switch2' */

    /* Product: '<S131>/Prod' incorporates:
     *  Constant: '<S131>/Factor'
     *  Sum: '<S131>/Add'
     */
    rtb_Prod_o /= 0.5F;

    /* DataTypeConversion: '<S131>/DTConv' */
    rtb_Prod_o = roundf(rtb_Prod_o);
    if (rtb_Prod_o < 256.0F)
    {
        /* SignalConversion generated from: '<S131>/Data' */
        *Data = (uint8)rtb_Prod_o;
    }
    else
    {
        /* SignalConversion generated from: '<S131>/Data' */
        *Data = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S131>/DTConv' */

    /* SignalConversion generated from: '<S131>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD4001_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD4002_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    float32 rtb_Prod_ag;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeTMIR_T_PsvPmpClnt_TmpIn' */
    (void)Rte_Read_VeTMIR_T_PsvPmpClnt_TmpIn_Value(&rtb_Prod_ag);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD4002_Data_ReadData' */
    /* Switch: '<S220>/Switch2' incorporates:
     *  Constant: '<S132>/MaxValue'
     *  Constant: '<S132>/MinValue'
     *  RelationalOperator: '<S220>/LowerRelop1'
     *  RelationalOperator: '<S220>/UpperRelop'
     *  SignalConversion generated from: '<S132>/VeTMIR_T_PsvPmpClnt_TmpIn'
     *  Switch: '<S220>/Switch'
     */
    if (rtb_Prod_ag > 214.0F)
    {
        /* Product: '<S132>/Prod' */
        rtb_Prod_ag = 214.0F;
    }
    else
    {
        if (rtb_Prod_ag < -40.0F)
        {
            /* Switch: '<S220>/Switch' incorporates:
             *  Constant: '<S132>/MinValue'
             *  Product: '<S132>/Prod'
             */
            rtb_Prod_ag = -40.0F;
        }
    }

    /* End of Switch: '<S220>/Switch2' */

    /* Product: '<S132>/Prod' incorporates:
     *  Constant: '<S132>/Offset'
     *  Sum: '<S132>/Add'
     */
    rtb_Prod_ag -= -40.0F;

    /* DataTypeConversion: '<S132>/DTConv' */
    rtb_Prod_ag = roundf(rtb_Prod_ag);
    if (rtb_Prod_ag < 256.0F)
    {
        /* SignalConversion generated from: '<S132>/Data' */
        *Data = (uint8)rtb_Prod_ag;
    }
    else
    {
        /* SignalConversion generated from: '<S132>/Data' */
        *Data = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S132>/DTConv' */

    /* SignalConversion generated from: '<S132>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD4002_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD4004_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    float32 rtb_Prod_pn;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeTRIR_T_HtrCorClnt_TmpIn' */
    (void)Rte_Read_VeTRIR_T_HtrCorClnt_TmpIn_Value(&rtb_Prod_pn);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD4004_Data_ReadData' */
    /* Switch: '<S221>/Switch2' incorporates:
     *  Constant: '<S133>/MaxValue'
     *  Constant: '<S133>/MinValue'
     *  RelationalOperator: '<S221>/LowerRelop1'
     *  RelationalOperator: '<S221>/UpperRelop'
     *  SignalConversion generated from: '<S133>/VeTRIR_T_HtrCorClnt_TmpIn'
     *  Switch: '<S221>/Switch'
     */
    if (rtb_Prod_pn > 214.0F)
    {
        /* Product: '<S133>/Prod' */
        rtb_Prod_pn = 214.0F;
    }
    else
    {
        if (rtb_Prod_pn < -40.0F)
        {
            /* Switch: '<S221>/Switch' incorporates:
             *  Constant: '<S133>/MinValue'
             *  Product: '<S133>/Prod'
             */
            rtb_Prod_pn = -40.0F;
        }
    }

    /* End of Switch: '<S221>/Switch2' */

    /* Product: '<S133>/Prod' incorporates:
     *  Constant: '<S133>/Offset'
     *  Sum: '<S133>/Add'
     */
    rtb_Prod_pn -= -40.0F;

    /* DataTypeConversion: '<S133>/DTConv' */
    rtb_Prod_pn = roundf(rtb_Prod_pn);
    if (rtb_Prod_pn < 256.0F)
    {
        /* SignalConversion generated from: '<S133>/Data' */
        *Data = (uint8)rtb_Prod_pn;
    }
    else
    {
        /* SignalConversion generated from: '<S133>/Data' */
        *Data = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S133>/DTConv' */

    /* SignalConversion generated from: '<S133>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD4004_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD400A_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    float32 rtb_Prod_o;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeTRIR_T_HV_BatClntTmp_In' */
    (void)Rte_Read_VeTRIR_T_HV_BatClntTmp_In_Value(&rtb_Prod_o);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD400A_Data_ReadData' */
    /* Switch: '<S222>/Switch2' incorporates:
     *  Constant: '<S134>/MaxValue'
     *  Constant: '<S134>/MinValue'
     *  RelationalOperator: '<S222>/LowerRelop1'
     *  RelationalOperator: '<S222>/UpperRelop'
     *  SignalConversion generated from: '<S134>/VeTRIR_T_HV_BatClntTmp_In'
     *  Switch: '<S222>/Switch'
     */
    if (rtb_Prod_o > 214.0F)
    {
        /* Product: '<S134>/Prod' */
        rtb_Prod_o = 214.0F;
    }
    else
    {
        if (rtb_Prod_o < -40.0F)
        {
            /* Switch: '<S222>/Switch' incorporates:
             *  Constant: '<S134>/MinValue'
             *  Product: '<S134>/Prod'
             */
            rtb_Prod_o = -40.0F;
        }
    }

    /* End of Switch: '<S222>/Switch2' */

    /* Product: '<S134>/Prod' incorporates:
     *  Constant: '<S134>/Offset'
     *  Sum: '<S134>/Add'
     */
    rtb_Prod_o -= -40.0F;

    /* DataTypeConversion: '<S134>/DTConv' */
    rtb_Prod_o = roundf(rtb_Prod_o);
    if (rtb_Prod_o < 256.0F)
    {
        /* SignalConversion generated from: '<S134>/Data' */
        *Data = (uint8)rtb_Prod_o;
    }
    else
    {
        /* SignalConversion generated from: '<S134>/Data' */
        *Data = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S134>/DTConv' */

    /* SignalConversion generated from: '<S134>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD400A_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD400C_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    float32 rtb_Prod_bd;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeTRIR_T_HV_BatClntTmpOut' */
    (void)Rte_Read_VeTRIR_T_HV_BatClntTmpOut_Value(&rtb_Prod_bd);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD400C_Data_ReadData' */
    /* Switch: '<S223>/Switch2' incorporates:
     *  Constant: '<S135>/MaxValue'
     *  Constant: '<S135>/MinValue'
     *  RelationalOperator: '<S223>/LowerRelop1'
     *  RelationalOperator: '<S223>/UpperRelop'
     *  SignalConversion generated from: '<S135>/VeTRIR_T_HV_BatClntTmpOut'
     *  Switch: '<S223>/Switch'
     */
    if (rtb_Prod_bd > 214.0F)
    {
        /* Product: '<S135>/Prod' */
        rtb_Prod_bd = 214.0F;
    }
    else
    {
        if (rtb_Prod_bd < -40.0F)
        {
            /* Switch: '<S223>/Switch' incorporates:
             *  Constant: '<S135>/MinValue'
             *  Product: '<S135>/Prod'
             */
            rtb_Prod_bd = -40.0F;
        }
    }

    /* End of Switch: '<S223>/Switch2' */

    /* Product: '<S135>/Prod' incorporates:
     *  Constant: '<S135>/Offset'
     *  Sum: '<S135>/Add'
     */
    rtb_Prod_bd -= -40.0F;

    /* DataTypeConversion: '<S135>/DTConv' */
    rtb_Prod_bd = roundf(rtb_Prod_bd);
    if (rtb_Prod_bd < 256.0F)
    {
        /* SignalConversion generated from: '<S135>/Data' */
        *Data = (uint8)rtb_Prod_bd;
    }
    else
    {
        /* SignalConversion generated from: '<S135>/Data' */
        *Data = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S135>/DTConv' */

    /* SignalConversion generated from: '<S135>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD400C_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD4010_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[2])
{
    float32 rtb_Prod_gy;
    uint16 rtb_DTConv_a2_0;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeTAIR_n_CompSpdFdb' */
    (void)Rte_Read_VeTAIR_n_CompSpdFdb_Value(&rtb_Prod_gy);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD4010_Data_ReadData' */
    /* Switch: '<S224>/Switch2' incorporates:
     *  Constant: '<S136>/MaxValue'
     *  Constant: '<S136>/MinValue'
     *  RelationalOperator: '<S224>/LowerRelop1'
     *  RelationalOperator: '<S224>/UpperRelop'
     *  SignalConversion generated from: '<S136>/VeTAIR_n_CompSpdFdb'
     *  Switch: '<S224>/Switch'
     */
    if (rtb_Prod_gy > 16383.0F)
    {
        /* Product: '<S136>/Prod' */
        rtb_Prod_gy = 16383.0F;
    }
    else
    {
        if (rtb_Prod_gy < 0.0F)
        {
            /* Switch: '<S224>/Switch' incorporates:
             *  Constant: '<S136>/MinValue'
             *  Product: '<S136>/Prod'
             */
            rtb_Prod_gy = 0.0F;
        }
    }

    /* End of Switch: '<S224>/Switch2' */

    /* DataTypeConversion: '<S136>/DTConv' incorporates:
     *  Sum: '<S136>/Add'
     */
    rtb_Prod_gy = roundf(rtb_Prod_gy);
    if (rtb_Prod_gy < 65536.0F)
    {
        rtb_DTConv_a2_0 = (uint16)rtb_Prod_gy;
    }
    else
    {
        rtb_DTConv_a2_0 = MAX_uint16_T;
    }

    /* SignalConversion generated from: '<S136>/Data' incorporates:
     *  ArithShift: '<S136>/Bitshift'
     *  DataTypeConversion: '<S136>/DTConv'
     *  DataTypeConversion: '<S136>/Mux'
     *  DataTypeConversion: '<S136>/Mux2'
     *  S-Function (sfix_bitop): '<S136>/Bitwise1'
     */
    Data[0] = (uint8)(((uint32)rtb_DTConv_a2_0) >> 8ULL);
    Data[1] = (uint8)(rtb_DTConv_a2_0 & ((uint16)255));

    /* SignalConversion generated from: '<S136>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD4010_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD4011_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    float32 rtb_Prod_aw;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeTAIR_I_ACCElecCurr' */
    (void)Rte_Read_VeTAIR_I_ACCElecCurr_Value(&rtb_Prod_aw);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD4011_Data_ReadData' */
    /* Switch: '<S225>/Switch2' incorporates:
     *  Constant: '<S137>/MaxValue'
     *  Constant: '<S137>/MinValue'
     *  RelationalOperator: '<S225>/LowerRelop1'
     *  RelationalOperator: '<S225>/UpperRelop'
     *  SignalConversion generated from: '<S137>/VeTAIR_I_ACCElecCurr'
     *  Switch: '<S225>/Switch'
     */
    if (rtb_Prod_aw > 50.8F)
    {
        /* Product: '<S137>/Prod' */
        rtb_Prod_aw = 50.8F;
    }
    else
    {
        if (rtb_Prod_aw < 0.0F)
        {
            /* Switch: '<S225>/Switch' incorporates:
             *  Constant: '<S137>/MinValue'
             *  Product: '<S137>/Prod'
             */
            rtb_Prod_aw = 0.0F;
        }
    }

    /* End of Switch: '<S225>/Switch2' */

    /* Product: '<S137>/Prod' incorporates:
     *  Constant: '<S137>/Factor'
     *  Sum: '<S137>/Add'
     */
    rtb_Prod_aw /= 0.2F;

    /* DataTypeConversion: '<S137>/DTConv' */
    rtb_Prod_aw = roundf(rtb_Prod_aw);
    if (rtb_Prod_aw < 256.0F)
    {
        /* SignalConversion generated from: '<S137>/Data' */
        *Data = (uint8)rtb_Prod_aw;
    }
    else
    {
        /* SignalConversion generated from: '<S137>/Data' */
        *Data = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S137>/DTConv' */

    /* SignalConversion generated from: '<S137>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD4011_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD4012_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    float32 rtb_Prod_ku;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeTAIR_U_CompHVInp' */
    (void)Rte_Read_VeTAIR_U_CompHVInp_Value(&rtb_Prod_ku);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD4012_Data_ReadData' */
    /* Switch: '<S226>/Switch2' incorporates:
     *  Constant: '<S138>/MaxValue'
     *  Constant: '<S138>/MinValue'
     *  RelationalOperator: '<S226>/LowerRelop1'
     *  RelationalOperator: '<S226>/UpperRelop'
     *  SignalConversion generated from: '<S138>/VeTAIR_U_CompHVInp'
     *  Switch: '<S226>/Switch'
     */
    if (rtb_Prod_ku > 1016.0F)
    {
        /* Product: '<S138>/Prod' */
        rtb_Prod_ku = 1016.0F;
    }
    else
    {
        if (rtb_Prod_ku < 0.0F)
        {
            /* Switch: '<S226>/Switch' incorporates:
             *  Constant: '<S138>/MinValue'
             *  Product: '<S138>/Prod'
             */
            rtb_Prod_ku = 0.0F;
        }
    }

    /* End of Switch: '<S226>/Switch2' */

    /* Product: '<S138>/Prod' incorporates:
     *  Constant: '<S138>/Factor'
     *  Sum: '<S138>/Add'
     */
    rtb_Prod_ku /= 4.0F;

    /* DataTypeConversion: '<S138>/DTConv' */
    rtb_Prod_ku = roundf(rtb_Prod_ku);
    if (rtb_Prod_ku < 256.0F)
    {
        /* SignalConversion generated from: '<S138>/Data' */
        *Data = (uint8)rtb_Prod_ku;
    }
    else
    {
        /* SignalConversion generated from: '<S138>/Data' */
        *Data = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S138>/DTConv' */

    /* SignalConversion generated from: '<S138>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD4012_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD4013_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    TeTAIR_e_CompStat tmpRead;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeTAIR_e_CompStat' */
    (void)Rte_Read_VeTAIR_e_CompStat_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD4013_Data_ReadData' */
    /* SignalConversion generated from: '<S139>/Data' incorporates:
     *  Inport: '<Root>/VeTAIR_e_CompStat'
     *  SignalConversion generated from: '<S139>/VeTAIR_e_CompStat'
     */
    *Data = (uint8)tmpRead;

    /* SignalConversion generated from: '<S139>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD4013_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD4014_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    float32 rtb_Prod_pf;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeTAIR_P_AC_CompElecPwr' */
    (void)Rte_Read_VeTAIR_P_AC_CompElecPwr_Value(&rtb_Prod_pf);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD4014_Data_ReadData' */
    /* Switch: '<S227>/Switch2' incorporates:
     *  Constant: '<S140>/MaxValue'
     *  Constant: '<S140>/MinValue'
     *  RelationalOperator: '<S227>/LowerRelop1'
     *  RelationalOperator: '<S227>/UpperRelop'
     *  SignalConversion generated from: '<S140>/VeTAIR_P_AC_CompElecPwr'
     *  Switch: '<S227>/Switch'
     */
    if (rtb_Prod_pf > 10200.0F)
    {
        /* Product: '<S140>/Prod' */
        rtb_Prod_pf = 10200.0F;
    }
    else
    {
        if (rtb_Prod_pf < 0.0F)
        {
            /* Switch: '<S227>/Switch' incorporates:
             *  Constant: '<S140>/MinValue'
             *  Product: '<S140>/Prod'
             */
            rtb_Prod_pf = 0.0F;
        }
    }

    /* End of Switch: '<S227>/Switch2' */

    /* Product: '<S140>/Prod' incorporates:
     *  Constant: '<S140>/Factor'
     *  Sum: '<S140>/Add'
     */
    rtb_Prod_pf /= 40.0F;

    /* DataTypeConversion: '<S140>/DTConv' */
    rtb_Prod_pf = roundf(rtb_Prod_pf);
    if (rtb_Prod_pf < 256.0F)
    {
        /* SignalConversion generated from: '<S140>/Data' */
        *Data = (uint8)rtb_Prod_pf;
    }
    else
    {
        /* SignalConversion generated from: '<S140>/Data' */
        *Data = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S140>/DTConv' */

    /* SignalConversion generated from: '<S140>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD4014_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD4015_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[2])
{
    float32 rtb_Prod1;
    float32 tmpRead;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeTAIR_T_CompIGBTTemp' */
    (void)Rte_Read_VeTAIR_T_CompIGBTTemp_Value(&tmpRead);

    /* Inport: '<Root>/VeTAIR_T_CompBoardTemp' */
    (void)Rte_Read_VeTAIR_T_CompBoardTemp_Value(&rtb_Prod1);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD4015_Data_ReadData' */
    /* Switch: '<S228>/Switch2' incorporates:
     *  Constant: '<S141>/MaxValue'
     *  Constant: '<S141>/MinValue'
     *  RelationalOperator: '<S228>/LowerRelop1'
     *  RelationalOperator: '<S228>/UpperRelop'
     *  SignalConversion generated from: '<S141>/VeTAIR_T_CompBoardTemp'
     *  Switch: '<S228>/Switch'
     */
    if (rtb_Prod1 > 214.0F)
    {
        /* Product: '<S141>/Prod1' */
        rtb_Prod1 = 214.0F;
    }
    else
    {
        if (rtb_Prod1 < -40.0F)
        {
            /* Switch: '<S228>/Switch' incorporates:
             *  Constant: '<S141>/MinValue'
             *  Product: '<S141>/Prod1'
             */
            rtb_Prod1 = -40.0F;
        }
    }

    /* End of Switch: '<S228>/Switch2' */

    /* DataTypeConversion: '<S141>/DTConv' incorporates:
     *  Constant: '<S141>/Offset'
     *  Sum: '<S141>/Add'
     */
    rtb_Prod1 = roundf(rtb_Prod1 - -40.0F);
    if (rtb_Prod1 < 256.0F)
    {
        /* SignalConversion generated from: '<S141>/Data' */
        Data[0] = (uint8)rtb_Prod1;
    }
    else
    {
        /* SignalConversion generated from: '<S141>/Data' */
        Data[0] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S141>/DTConv' */

    /* Switch: '<S229>/Switch2' incorporates:
     *  Constant: '<S141>/MaxValue1'
     *  Constant: '<S141>/MinValue1'
     *  RelationalOperator: '<S229>/LowerRelop1'
     *  RelationalOperator: '<S229>/UpperRelop'
     *  SignalConversion generated from: '<S141>/VeTAIR_T_CompIGBTTemp'
     *  Switch: '<S229>/Switch'
     */
    if (tmpRead > 214.0F)
    {
        tmpRead = 214.0F;
    }
    else
    {
        if (tmpRead < -40.0F)
        {
            /* Switch: '<S229>/Switch' incorporates:
             *  Constant: '<S141>/MinValue1'
             */
            tmpRead = -40.0F;
        }
    }

    /* End of Switch: '<S229>/Switch2' */

    /* DataTypeConversion: '<S141>/DTConv2' incorporates:
     *  Constant: '<S141>/Offset1'
     *  Sum: '<S141>/Add1'
     */
    rtb_Prod1 = roundf(tmpRead - -40.0F);
    if (rtb_Prod1 < 256.0F)
    {
        /* SignalConversion generated from: '<S141>/Data' */
        Data[1] = (uint8)rtb_Prod1;
    }
    else
    {
        /* SignalConversion generated from: '<S141>/Data' */
        Data[1] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S141>/DTConv2' */

    /* SignalConversion generated from: '<S141>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD4015_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD4016_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    TeTAIR_e_CompFltSts tmpRead;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeTAIR_e_CompFltStat' */
    (void)Rte_Read_VeTAIR_e_CompFltStat_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD4016_Data_ReadData' */
    /* SignalConversion generated from: '<S142>/Data' incorporates:
     *  Inport: '<Root>/VeTAIR_e_CompFltStat'
     *  SignalConversion generated from: '<S142>/VeTAIR_e_CompFltStat'
     */
    *Data = (uint8)tmpRead;

    /* SignalConversion generated from: '<S142>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD4016_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD401C_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[4])
{
    float32 rtb_Prod1;
    float32 tmpRead_7;
    TeTAIR_e_CPV_Calibration_Sts tmpRead_a;
    TeTAIR_e_CPV_Status tmpRead_8;
    boolean tmpRead;
    boolean tmpRead_0;
    boolean tmpRead_1;
    boolean tmpRead_2;
    boolean tmpRead_3;
    boolean tmpRead_4;
    boolean tmpRead_5;
    boolean tmpRead_6;
    boolean tmpRead_9;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeTAIR_e_FrWyVlv_CalSts' */
    (void)Rte_Read_VeTAIR_e_FrWyVlv_CalSts_Value(&tmpRead_a);

    /* Inport: '<Root>/VeTAIR_b_FrWyVlv_RsErr' */
    (void)Rte_Read_VeTAIR_b_FrWyVlv_RsErr_Value(&tmpRead_9);

    /* Inport: '<Root>/VeTAIR_e_FrWyVlv_ErrSts' */
    (void)Rte_Read_VeTAIR_e_FrWyVlv_ErrSts_Value(&tmpRead_8);

    /* Inport: '<Root>/VeTAIR_U_FrWyVlv_MtrVltg' */
    (void)Rte_Read_VeTAIR_U_FrWyVlv_MtrVltg_Value(&tmpRead_7);

    /* Inport: '<Root>/VeTAIR_b_FrWyVlv_Err_SNA' */
    (void)Rte_Read_VeTAIR_b_FrWyVlv_Err_SNA_Value(&tmpRead_6);

    /* Inport: '<Root>/VeTAIR_b_FrWyVlv_BlckPnt' */
    (void)Rte_Read_VeTAIR_b_FrWyVlv_BlckPnt_Value(&tmpRead_5);

    /* Inport: '<Root>/VeTAIR_b_FrWyVlv_MechBrk' */
    (void)Rte_Read_VeTAIR_b_FrWyVlv_MechBrk_Value(&tmpRead_4);

    /* Inport: '<Root>/VeTAIR_b_FrWyVlv_OvrCrnt' */
    (void)Rte_Read_VeTAIR_b_FrWyVlv_OvrCrnt_Value(&tmpRead_3);

    /* Inport: '<Root>/VeTAIR_b_FrWyVlv_OpnLd' */
    (void)Rte_Read_VeTAIR_b_FrWyVlv_OpnLd_Value(&tmpRead_2);

    /* Inport: '<Root>/VeTAIR_b_FrWyVlv_ThrmlWrng' */
    (void)Rte_Read_VeTAIR_b_FrWyVlv_ThrmlWrng_Value(&tmpRead_1);

    /* Inport: '<Root>/VeTAIR_b_FrWyVlv_UndrVltg' */
    (void)Rte_Read_VeTAIR_b_FrWyVlv_UndrVltg_Value(&tmpRead_0);

    /* Inport: '<Root>/VeTAIR_b_FrWyVlv_OvrVltg' */
    (void)Rte_Read_VeTAIR_b_FrWyVlv_OvrVltg_Value(&tmpRead);

    /* Inport: '<Root>/VeTAIR_Pct_FrWyVlv_PstnAct' */
    (void)Rte_Read_VeTAIR_Pct_FrWyVlv_PstnAct_Value(&rtb_Prod1);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD401C_Data_ReadData' */
    /* Switch: '<S230>/Switch2' incorporates:
     *  Constant: '<S143>/MaxValue'
     *  Constant: '<S143>/MinValue'
     *  RelationalOperator: '<S230>/LowerRelop1'
     *  RelationalOperator: '<S230>/UpperRelop'
     *  SignalConversion generated from: '<S143>/VeTAIR_Pct_FrWyVlv_PstnAct'
     *  Switch: '<S230>/Switch'
     */
    if (rtb_Prod1 > 100.0F)
    {
        /* Product: '<S143>/Prod1' */
        rtb_Prod1 = 100.0F;
    }
    else
    {
        if (rtb_Prod1 < 0.0F)
        {
            /* Switch: '<S230>/Switch' incorporates:
             *  Constant: '<S143>/MinValue'
             *  Product: '<S143>/Prod1'
             */
            rtb_Prod1 = 0.0F;
        }
    }

    /* End of Switch: '<S230>/Switch2' */

    /* DataTypeConversion: '<S143>/DTConv' incorporates:
     *  Constant: '<S143>/Factor'
     *  Product: '<S143>/Prod'
     *  Sum: '<S143>/Add'
     */
    rtb_Prod1 = roundf(rtb_Prod1 / 0.5F);
    if (rtb_Prod1 < 256.0F)
    {
        /* SignalConversion generated from: '<S143>/Data' */
        Data[0] = (uint8)rtb_Prod1;
    }
    else
    {
        /* SignalConversion generated from: '<S143>/Data' */
        Data[0] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S143>/DTConv' */

    /* SignalConversion generated from: '<S143>/Data' incorporates:
     *  ArithShift: '<S143>/BitShift'
     *  ArithShift: '<S143>/BitShift1'
     *  ArithShift: '<S143>/BitShift2'
     *  ArithShift: '<S143>/BitShift3'
     *  ArithShift: '<S143>/BitShift4'
     *  ArithShift: '<S143>/BitShift5'
     *  ArithShift: '<S143>/BitShift6'
     *  DataTypeConversion: '<S143>/DTConv2'
     *  DataTypeConversion: '<S143>/DTConv3'
     *  DataTypeConversion: '<S143>/DTConv4'
     *  DataTypeConversion: '<S143>/DTConv5'
     *  DataTypeConversion: '<S143>/DTConv6'
     *  DataTypeConversion: '<S143>/DTConv7'
     *  DataTypeConversion: '<S143>/DTConv8'
     *  DataTypeConversion: '<S143>/DTConv9'
     *  S-Function (sfix_bitop): '<S143>/Bitwise'
     *  SignalConversion generated from: '<S143>/VeTAIR_b_FrWyVlv_BlckPnt'
     *  SignalConversion generated from: '<S143>/VeTAIR_b_FrWyVlv_Err_SNA'
     *  SignalConversion generated from: '<S143>/VeTAIR_b_FrWyVlv_MechBrk'
     *  SignalConversion generated from: '<S143>/VeTAIR_b_FrWyVlv_OpnLd'
     *  SignalConversion generated from: '<S143>/VeTAIR_b_FrWyVlv_OvrCrnt'
     *  SignalConversion generated from: '<S143>/VeTAIR_b_FrWyVlv_OvrVltg'
     *  SignalConversion generated from: '<S143>/VeTAIR_b_FrWyVlv_ThrmlWrng'
     *  SignalConversion generated from: '<S143>/VeTAIR_b_FrWyVlv_UndrVltg'
     */
    Data[1] = (uint8)((sint32)(((((((((tmpRead_0 ? 1 : 0) * 2) | (tmpRead ? 1 :
        0)) | ((tmpRead_1 ? 1 : 0) * 4)) | ((tmpRead_2 ? 1 : 0) * 8)) |
                          ((tmpRead_3 ? 1 : 0) * 16)) | ((tmpRead_4 ? 1 : 0) *
                          32)) | ((tmpRead_5 ? 1 : 0) * 64)) | ((tmpRead_6 ? 1 :
                         0) * 128)));

    /* Switch: '<S231>/Switch2' incorporates:
     *  Constant: '<S143>/MaxValue1'
     *  Constant: '<S143>/MinValue1'
     *  RelationalOperator: '<S231>/LowerRelop1'
     *  RelationalOperator: '<S231>/UpperRelop'
     *  SignalConversion generated from: '<S143>/VeTAIR_U_FrWyVlv_MtrVltg'
     *  Switch: '<S231>/Switch'
     */
    if (tmpRead_7 > 25.5F)
    {
        tmpRead_7 = 25.5F;
    }
    else
    {
        if (tmpRead_7 < 0.0F)
        {
            /* Switch: '<S231>/Switch' incorporates:
             *  Constant: '<S143>/MinValue1'
             */
            tmpRead_7 = 0.0F;
        }
    }

    /* End of Switch: '<S231>/Switch2' */

    /* DataTypeConversion: '<S143>/DTConv10' incorporates:
     *  Constant: '<S143>/Factor1'
     *  Product: '<S143>/Prod1'
     */
    rtb_Prod1 = roundf(tmpRead_7 / 0.1F);
    if (rtb_Prod1 < 256.0F)
    {
        /* SignalConversion generated from: '<S143>/Data' */
        Data[2] = (uint8)rtb_Prod1;
    }
    else
    {
        /* SignalConversion generated from: '<S143>/Data' */
        Data[2] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S143>/DTConv10' */

    /* SignalConversion generated from: '<S143>/Data' incorporates:
     *  ArithShift: '<S143>/BitShift7'
     *  ArithShift: '<S143>/BitShift8'
     *  DataTypeConversion: '<S143>/DTConv12'
     *  Inport: '<Root>/VeTAIR_e_FrWyVlv_CalSts'
     *  Inport: '<Root>/VeTAIR_e_FrWyVlv_ErrSts'
     *  S-Function (sfix_bitop): '<S143>/Bitwise1'
     *  SignalConversion generated from: '<S143>/VeTAIR_b_FrWyVlv_RsErr'
     *  SignalConversion generated from: '<S143>/VeTAIR_e_FrWyVlv_CalSts'
     *  SignalConversion generated from: '<S143>/VeTAIR_e_FrWyVlv_ErrSts'
     */
    Data[3] = (uint8)((sint32)((((tmpRead_9 ? 1 : 0) * 4) | ((sint32)tmpRead_8))
                       | ((sint32)((uint8)(tmpRead_a << 3ULL)))));

    /* SignalConversion generated from: '<S143>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD401C_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD401F_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[10])
{
    /* local block i/o variables */
    float32 rtb_TmpLatchAtVeTAIR_Pct_EXV_Po;
    float32 rtb_TmpLatchAtVeTAIR_U_EXV_Supp;
    float32 rtb_TmpLatchAtVeTAIR_p_EXV_RefP;
    float32 rtb_TmpLatchAtVeTAIR_T_EXV_Boar;
    float32 rtb_TmpLatchAtVeTAIR_T_EXV_RefT;
    boolean rtb_TmpLatchAtVeTAIR_b_EXV_CalR;
    boolean rtb_TmpLatchAtVeTAIR_b_EXV_RspE;
    TeTAIR_e_EXV_Status rtb_TmpLatchAtVeTAIR_e_EXV_StsO;
    TeTAIR_e_EXV_ErrorMsg rtb_TmpLatchAtVeTAIR_e_EXV_ErrO;
    TeTAIR_e_EXV_Calibration_Sts rtb_TmpLatchAtVeTAIR_e_EXV_CalS;
    float32 tmp;
    uint16 rtb_Bitwise7_0;
    uint16 rtb_DTConv12_0;
    uint16 rtb_DTConv12_1;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD401F_Data_ReadData' */
    /* SignalConversion generated from: '<S144>/VeTAIR_Pct_EXV_PosAct' incorporates:
     *  Inport: '<Root>/VeTAIR_Pct_EXV_PosAct'
     */
    (void)Rte_Read_VeTAIR_Pct_EXV_PosAct_Value(&rtb_TmpLatchAtVeTAIR_Pct_EXV_Po);

    /* SignalConversion generated from: '<S144>/VeTAIR_e_EXV_CalStat' incorporates:
     *  Inport: '<Root>/VeTAIR_e_EXV_CalStat'
     */
    (void)Rte_Read_VeTAIR_e_EXV_CalStat_Value(&rtb_TmpLatchAtVeTAIR_e_EXV_CalS);

    /* SignalConversion generated from: '<S144>/VeTAIR_b_EXV_CalRq' incorporates:
     *  Inport: '<Root>/VeTAIR_b_EXV_CalRq'
     */
    (void)Rte_Read_VeTAIR_b_EXV_CalRq_Value(&rtb_TmpLatchAtVeTAIR_b_EXV_CalR);

    /* SignalConversion generated from: '<S144>/VeTAIR_b_EXV_RspErr' incorporates:
     *  Inport: '<Root>/VeTAIR_b_EXV_RspErr'
     */
    (void)Rte_Read_VeTAIR_b_EXV_RspErr_Value(&rtb_TmpLatchAtVeTAIR_b_EXV_RspE);

    /* SignalConversion generated from: '<S144>/VeTAIR_e_EXV_Sts' incorporates:
     *  Inport: '<Root>/VeTAIR_e_EXV_Sts'
     */
    (void)Rte_Read_VeTAIR_e_EXV_Sts_Value(&rtb_TmpLatchAtVeTAIR_e_EXV_StsO);

    /* SignalConversion generated from: '<S144>/VeTAIR_e_EXV_Err' incorporates:
     *  Inport: '<Root>/VeTAIR_e_EXV_Err'
     */
    (void)Rte_Read_VeTAIR_e_EXV_Err_Value(&rtb_TmpLatchAtVeTAIR_e_EXV_ErrO);

    /* SignalConversion generated from: '<S144>/VeTAIR_U_EXV_SupplyVolt' incorporates:
     *  Inport: '<Root>/VeTAIR_U_EXV_SupplyVolt'
     */
    (void)Rte_Read_VeTAIR_U_EXV_SupplyVolt_Value
        (&rtb_TmpLatchAtVeTAIR_U_EXV_Supp);

    /* SignalConversion generated from: '<S144>/VeTAIR_p_EXV_RefPress' incorporates:
     *  Inport: '<Root>/VeTAIR_p_EXV_RefPress'
     */
    (void)Rte_Read_VeTAIR_p_EXV_RefPress_Value(&rtb_TmpLatchAtVeTAIR_p_EXV_RefP);

    /* SignalConversion generated from: '<S144>/VeTAIR_T_EXV_BoardTemp' incorporates:
     *  Inport: '<Root>/VeTAIR_T_EXV_BoardTemp'
     */
    (void)Rte_Read_VeTAIR_T_EXV_BoardTemp_Value(&rtb_TmpLatchAtVeTAIR_T_EXV_Boar);

    /* SignalConversion generated from: '<S144>/VeTAIR_T_EXV_RefTemp' incorporates:
     *  Inport: '<Root>/VeTAIR_T_EXV_RefTemp'
     */
    (void)Rte_Read_VeTAIR_T_EXV_RefTemp_Value(&rtb_TmpLatchAtVeTAIR_T_EXV_RefT);

    /* Switch: '<S232>/Switch2' incorporates:
     *  Constant: '<S144>/MaxValue'
     *  Constant: '<S144>/MinValue'
     *  RelationalOperator: '<S232>/LowerRelop1'
     *  RelationalOperator: '<S232>/UpperRelop'
     *  Switch: '<S232>/Switch'
     */
    if (rtb_TmpLatchAtVeTAIR_Pct_EXV_Po > 102.0F)
    {
        tmp = 102.0F;
    }
    else if (rtb_TmpLatchAtVeTAIR_Pct_EXV_Po < 0.0F)
    {
        /* Switch: '<S232>/Switch' incorporates:
         *  Constant: '<S144>/MinValue'
         */
        tmp = 0.0F;
    }
    else
    {
        tmp = rtb_TmpLatchAtVeTAIR_Pct_EXV_Po;
    }

    /* End of Switch: '<S232>/Switch2' */

    /* DataTypeConversion: '<S144>/DTConv' incorporates:
     *  Constant: '<S144>/Factor'
     *  Product: '<S144>/Prod'
     */
    tmp = roundf(tmp / 0.1F);
    if (tmp < 65536.0F)
    {
        if (tmp >= 0.0F)
        {
            rtb_Bitwise7_0 = (uint16)tmp;
        }
        else
        {
            rtb_Bitwise7_0 = 0U;
        }
    }
    else
    {
        rtb_Bitwise7_0 = MAX_uint16_T;
    }

    /* Switch: '<S234>/Switch2' incorporates:
     *  Constant: '<S144>/MaxValue2'
     *  Constant: '<S144>/MinValue2'
     *  RelationalOperator: '<S234>/LowerRelop1'
     *  RelationalOperator: '<S234>/UpperRelop'
     *  Switch: '<S234>/Switch'
     */
    if (rtb_TmpLatchAtVeTAIR_p_EXV_RefP > 1638.0F)
    {
        tmp = 1638.0F;
    }
    else if (rtb_TmpLatchAtVeTAIR_p_EXV_RefP < 0.0F)
    {
        /* Switch: '<S234>/Switch' incorporates:
         *  Constant: '<S144>/MinValue2'
         */
        tmp = 0.0F;
    }
    else
    {
        tmp = rtb_TmpLatchAtVeTAIR_p_EXV_RefP;
    }

    /* End of Switch: '<S234>/Switch2' */

    /* DataTypeConversion: '<S144>/DTConv10' incorporates:
     *  Constant: '<S144>/Factor2'
     *  Product: '<S144>/Prod2'
     */
    tmp = roundf(tmp / 0.1F);
    if (tmp < 65536.0F)
    {
        if (tmp >= 0.0F)
        {
            rtb_DTConv12_1 = (uint16)tmp;
        }
        else
        {
            rtb_DTConv12_1 = 0U;
        }
    }
    else
    {
        rtb_DTConv12_1 = MAX_uint16_T;
    }

    /* Switch: '<S236>/Switch2' incorporates:
     *  Constant: '<S144>/MaxValue4'
     *  Constant: '<S144>/MinValue4'
     *  RelationalOperator: '<S236>/LowerRelop1'
     *  RelationalOperator: '<S236>/UpperRelop'
     *  Switch: '<S236>/Switch'
     */
    if (rtb_TmpLatchAtVeTAIR_T_EXV_RefT > 195.0F)
    {
        tmp = 195.0F;
    }
    else if (rtb_TmpLatchAtVeTAIR_T_EXV_RefT < -10.0F)
    {
        /* Switch: '<S236>/Switch' incorporates:
         *  Constant: '<S144>/MinValue4'
         */
        tmp = -10.0F;
    }
    else
    {
        tmp = rtb_TmpLatchAtVeTAIR_T_EXV_RefT;
    }

    /* End of Switch: '<S236>/Switch2' */

    /* DataTypeConversion: '<S144>/DTConv12' incorporates:
     *  Constant: '<S144>/Factor4'
     *  Constant: '<S144>/Offset4'
     *  Product: '<S144>/Prod4'
     *  Sum: '<S144>/Add4'
     */
    tmp = roundf((tmp - -10.0F) / 0.1F);
    if (tmp < 65536.0F)
    {
        if (tmp >= 0.0F)
        {
            rtb_DTConv12_0 = (uint16)tmp;
        }
        else
        {
            rtb_DTConv12_0 = 0U;
        }
    }
    else
    {
        rtb_DTConv12_0 = MAX_uint16_T;
    }

    /* SignalConversion generated from: '<S144>/Data' incorporates:
     *  ArithShift: '<S144>/BitShift'
     *  ArithShift: '<S144>/BitShift1'
     *  ArithShift: '<S144>/BitShift2'
     *  ArithShift: '<S144>/Bitshift'
     *  DataTypeConversion: '<S144>/DTConv'
     *  DataTypeConversion: '<S144>/DTConv2'
     *  DataTypeConversion: '<S144>/DTConv3'
     *  DataTypeConversion: '<S144>/DTConv4'
     *  DataTypeConversion: '<S144>/DTConv5'
     *  DataTypeConversion: '<S144>/DTConv7'
     *  DataTypeConversion: '<S144>/Mux'
     *  DataTypeConversion: '<S144>/Mux2'
     *  S-Function (sfix_bitop): '<S144>/Bitwise1'
     *  S-Function (sfix_bitop): '<S144>/Bitwise2'
     *  SignalConversion generated from: '<S144>/VeTAIR_e_EXV_CalStat'
     *  SignalConversion generated from: '<S144>/VeTAIR_e_EXV_Err'
     *  SignalConversion generated from: '<S144>/VeTAIR_e_EXV_Sts'
     */
    Data[0] = (uint8)(((uint32)rtb_Bitwise7_0) >> 8ULL);
    Data[1] = (uint8)(rtb_Bitwise7_0 & ((uint16)255));
    Data[2] = (uint8)((sint32)(((((rtb_TmpLatchAtVeTAIR_b_EXV_CalR ? 1 : 0) * 4)
                         | ((sint32)rtb_TmpLatchAtVeTAIR_e_EXV_CalS)) |
                        ((rtb_TmpLatchAtVeTAIR_b_EXV_RspE ? 1 : 0) * 8)) |
                       ((sint32)((uint8)(rtb_TmpLatchAtVeTAIR_e_EXV_StsO << 4ULL)))));
    Data[3] = (uint8)rtb_TmpLatchAtVeTAIR_e_EXV_ErrO;

    /* Switch: '<S233>/Switch2' incorporates:
     *  Constant: '<S144>/MaxValue1'
     *  Constant: '<S144>/MinValue1'
     *  RelationalOperator: '<S233>/LowerRelop1'
     *  RelationalOperator: '<S233>/UpperRelop'
     *  Switch: '<S233>/Switch'
     */
    if (rtb_TmpLatchAtVeTAIR_U_EXV_Supp > 25.5F)
    {
        tmp = 25.5F;
    }
    else if (rtb_TmpLatchAtVeTAIR_U_EXV_Supp < 0.0F)
    {
        /* Switch: '<S233>/Switch' incorporates:
         *  Constant: '<S144>/MinValue1'
         */
        tmp = 0.0F;
    }
    else
    {
        tmp = rtb_TmpLatchAtVeTAIR_U_EXV_Supp;
    }

    /* End of Switch: '<S233>/Switch2' */

    /* DataTypeConversion: '<S144>/DTConv9' incorporates:
     *  Constant: '<S144>/Factor1'
     *  Product: '<S144>/Prod1'
     */
    tmp = roundf(tmp / 0.1F);
    if (tmp < 256.0F)
    {
        if (tmp >= 0.0F)
        {
            /* SignalConversion generated from: '<S144>/Data' */
            Data[4] = (uint8)tmp;
        }
        else
        {
            /* SignalConversion generated from: '<S144>/Data' */
            Data[4] = 0U;
        }
    }
    else
    {
        /* SignalConversion generated from: '<S144>/Data' */
        Data[4] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S144>/DTConv9' */

    /* SignalConversion generated from: '<S144>/Data' incorporates:
     *  ArithShift: '<S144>/Bitshift2'
     *  DataTypeConversion: '<S144>/DTConv10'
     *  DataTypeConversion: '<S144>/Mux5'
     *  DataTypeConversion: '<S144>/Mux6'
     *  S-Function (sfix_bitop): '<S144>/Bitwise5'
     */
    Data[5] = (uint8)(((uint32)rtb_DTConv12_1) >> 8ULL);
    Data[6] = (uint8)(rtb_DTConv12_1 & ((uint16)255));

    /* Switch: '<S235>/Switch2' incorporates:
     *  Constant: '<S144>/MaxValue3'
     *  Constant: '<S144>/MinValue3'
     *  RelationalOperator: '<S235>/LowerRelop1'
     *  RelationalOperator: '<S235>/UpperRelop'
     *  Switch: '<S235>/Switch'
     */
    if (rtb_TmpLatchAtVeTAIR_T_EXV_Boar > 215.0F)
    {
        tmp = 215.0F;
    }
    else if (rtb_TmpLatchAtVeTAIR_T_EXV_Boar < -40.0F)
    {
        /* Switch: '<S235>/Switch' incorporates:
         *  Constant: '<S144>/MinValue3'
         */
        tmp = -40.0F;
    }
    else
    {
        tmp = rtb_TmpLatchAtVeTAIR_T_EXV_Boar;
    }

    /* End of Switch: '<S235>/Switch2' */

    /* DataTypeConversion: '<S144>/DTConv11' incorporates:
     *  Constant: '<S144>/Offset3'
     *  Sum: '<S144>/Add3'
     */
    tmp = roundf(tmp - -40.0F);
    if (tmp < 256.0F)
    {
        if (tmp >= 0.0F)
        {
            /* SignalConversion generated from: '<S144>/Data' */
            Data[7] = (uint8)tmp;
        }
        else
        {
            /* SignalConversion generated from: '<S144>/Data' */
            Data[7] = 0U;
        }
    }
    else
    {
        /* SignalConversion generated from: '<S144>/Data' */
        Data[7] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S144>/DTConv11' */

    /* SignalConversion generated from: '<S144>/Data' incorporates:
     *  ArithShift: '<S144>/Bitshift4'
     *  DataTypeConversion: '<S144>/DTConv12'
     *  DataTypeConversion: '<S144>/Mux7'
     *  DataTypeConversion: '<S144>/Mux8'
     *  S-Function (sfix_bitop): '<S144>/Bitwise7'
     */
    Data[8] = (uint8)(((uint32)rtb_DTConv12_0) >> 8ULL);
    Data[9] = (uint8)(rtb_DTConv12_0 & ((uint16)255));

    /* SignalConversion generated from: '<S144>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD401F_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD4021_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD4021_Data_ReadData' */
    /* SignalConversion generated from: '<S145>/Data' */
    *Data = 0U;

    /* SignalConversion generated from: '<S145>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD4021_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD4036_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[8])
{
    float32 rtb_Add1_a;
    float32 rtb_Add2_a3;
    float32 rtb_Add3_b;
    float32 rtb_Prod4_ec;
    float32 tmpRead;
    TePMPR_e_FTSNA tmpRead_1;
    TePMPR_e_FTSNA tmpRead_2;
    TePMPR_e_FTSNA tmpRead_3;
    TePMPR_e_FTSNA tmpRead_4;
    TePMPR_e_FTSNA tmpRead_5;
    TePMPR_e_FTSNA tmpRead_6;
    TePMPR_e_FTSNA tmpRead_7;
    TePMPR_e_NodeError tmpRead_9;
    TePMPR_e_TFSNA tmpRead_0;
    TePMPR_e_TFSNA tmpRead_8;
    TeTMIR_e_ECM_LTP_FanAftRunRq tmpRead_a;
    boolean tmpRead_b;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VePMIR_b_LTPsvPumpRespErr' */
    (void)Rte_Read_VePMIR_b_LTPsvPumpRespErr_Value(&tmpRead_b);

    /* Inport: '<Root>/VePMPR_e_LTPsvPump_PstRnSt' */
    (void)Rte_Read_VePMPR_e_LTPsvPump_PstRnSt_Value(&tmpRead_a);

    /* Inport: '<Root>/VePMIR_e_LTPsvPumpNodeErr' */
    (void)Rte_Read_VePMIR_e_LTPsvPumpNodeErr_Value(&tmpRead_9);

    /* Inport: '<Root>/VePMIR_e_LTPsvPumpMntrRPM' */
    (void)Rte_Read_VePMIR_e_LTPsvPumpMntrRPM_Value(&tmpRead_8);

    /* Inport: '<Root>/VePMIR_e_LTPsvPumpDeblock' */
    (void)Rte_Read_VePMIR_e_LTPsvPumpDeblock_Value(&tmpRead_7);

    /* Inport: '<Root>/VePMIR_e_LTPsvPumpSuppVltErr' */
    (void)Rte_Read_VePMIR_e_LTPsvPumpSuppVltErr_Value(&tmpRead_6);

    /* Inport: '<Root>/VePMIR_e_LTPsvPumpDryRun' */
    (void)Rte_Read_VePMIR_e_LTPsvPumpDryRun_Value(&tmpRead_5);

    /* Inport: '<Root>/VePMIR_e_LTPsvPumpOverCurrent' */
    (void)Rte_Read_VePMIR_e_LTPsvPumpOverCurrent_Value(&tmpRead_4);

    /* Inport: '<Root>/VePMIR_e_LTPsvPumpOT' */
    (void)Rte_Read_VePMIR_e_LTPsvPumpOT_Value(&tmpRead_3);

    /* Inport: '<Root>/VePMIR_e_LTPsvPumpAirPresntErr' */
    (void)Rte_Read_VePMIR_e_LTPsvPumpAirPresntErr_Value(&tmpRead_2);

    /* Inport: '<Root>/VePMIR_e_LTPsvPumpLmpHM' */
    (void)Rte_Read_VePMIR_e_LTPsvPumpLmpHM_Value(&tmpRead_1);

    /* Inport: '<Root>/VePMIR_e_LTPsvPumpFailsafe' */
    (void)Rte_Read_VePMIR_e_LTPsvPumpFailsafe_Value(&tmpRead_0);

    /* Inport: '<Root>/VePMIR_I_LTPsvPumpCurrent' */
    (void)Rte_Read_VePMIR_I_LTPsvPumpCurrent_Value(&tmpRead);

    /* Inport: '<Root>/VePMIR_T_LTPsvPumpTemp' */
    (void)Rte_Read_VePMIR_T_LTPsvPumpTemp_Value(&rtb_Add3_b);

    /* Inport: '<Root>/VePMIR_U_LTPsvPumpVltg' */
    (void)Rte_Read_VePMIR_U_LTPsvPumpVltg_Value(&rtb_Add2_a3);

    /* Inport: '<Root>/VePMPR_Pct_LTPsvPumpRPMAct' */
    (void)Rte_Read_VePMPR_Pct_LTPsvPumpRPMAct_Value(&rtb_Add1_a);

    /* Inport: '<Root>/VePMIR_Pct_LTPsvPumpTgtSpd' */
    (void)Rte_Read_VePMIR_Pct_LTPsvPumpTgtSpd_Value(&rtb_Prod4_ec);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD4036_Data_ReadData' */
    /* Switch: '<S237>/Switch2' incorporates:
     *  Constant: '<S146>/MaxValue'
     *  Constant: '<S146>/MinValue'
     *  RelationalOperator: '<S237>/LowerRelop1'
     *  RelationalOperator: '<S237>/UpperRelop'
     *  SignalConversion generated from: '<S146>/VePMIR_Pct_LTPsvPumpTgtSpd'
     *  Switch: '<S237>/Switch'
     */
    if (rtb_Prod4_ec > 99.6078F)
    {
        /* Product: '<S146>/Prod4' */
        rtb_Prod4_ec = 99.6078F;
    }
    else
    {
        if (rtb_Prod4_ec < 0.0F)
        {
            /* Switch: '<S237>/Switch' incorporates:
             *  Constant: '<S146>/MinValue'
             *  Product: '<S146>/Prod4'
             */
            rtb_Prod4_ec = 0.0F;
        }
    }

    /* End of Switch: '<S237>/Switch2' */

    /* Switch: '<S238>/Switch2' incorporates:
     *  Constant: '<S146>/MaxValue1'
     *  Constant: '<S146>/MinValue1'
     *  RelationalOperator: '<S238>/LowerRelop1'
     *  RelationalOperator: '<S238>/UpperRelop'
     *  SignalConversion generated from: '<S146>/VePMPR_Pct_LTPsvPumpRPMAct'
     *  Switch: '<S238>/Switch'
     */
    if (rtb_Add1_a > 99.6078F)
    {
        /* Sum: '<S146>/Add1' */
        rtb_Add1_a = 99.6078F;
    }
    else
    {
        if (rtb_Add1_a < 0.0F)
        {
            /* Switch: '<S238>/Switch' incorporates:
             *  Constant: '<S146>/MinValue1'
             *  Sum: '<S146>/Add1'
             */
            rtb_Add1_a = 0.0F;
        }
    }

    /* End of Switch: '<S238>/Switch2' */

    /* Switch: '<S239>/Switch2' incorporates:
     *  Constant: '<S146>/MaxValue2'
     *  Constant: '<S146>/MinValue2'
     *  RelationalOperator: '<S239>/LowerRelop1'
     *  RelationalOperator: '<S239>/UpperRelop'
     *  SignalConversion generated from: '<S146>/VePMIR_U_LTPsvPumpVltg'
     *  Switch: '<S239>/Switch'
     */
    if (rtb_Add2_a3 > 25.4F)
    {
        /* Sum: '<S146>/Add2' */
        rtb_Add2_a3 = 25.4F;
    }
    else
    {
        if (rtb_Add2_a3 < 0.0F)
        {
            /* Switch: '<S239>/Switch' incorporates:
             *  Constant: '<S146>/MinValue2'
             *  Sum: '<S146>/Add2'
             */
            rtb_Add2_a3 = 0.0F;
        }
    }

    /* End of Switch: '<S239>/Switch2' */

    /* Switch: '<S240>/Switch2' incorporates:
     *  Constant: '<S146>/MaxValue3'
     *  Constant: '<S146>/MinValue3'
     *  RelationalOperator: '<S240>/LowerRelop1'
     *  RelationalOperator: '<S240>/UpperRelop'
     *  SignalConversion generated from: '<S146>/VePMIR_T_LTPsvPumpTemp'
     *  Switch: '<S240>/Switch'
     */
    if (rtb_Add3_b > 204.0F)
    {
        rtb_Add3_b = 204.0F;
    }
    else
    {
        if (rtb_Add3_b < -50.0F)
        {
            /* Switch: '<S240>/Switch' incorporates:
             *  Constant: '<S146>/MinValue3'
             */
            rtb_Add3_b = -50.0F;
        }
    }

    /* End of Switch: '<S240>/Switch2' */

    /* DataTypeConversion: '<S146>/DTConv' incorporates:
     *  Constant: '<S146>/Factor'
     *  Product: '<S146>/Prod'
     *  Sum: '<S146>/Add'
     */
    rtb_Prod4_ec = roundf(rtb_Prod4_ec / 0.39216F);
    if (rtb_Prod4_ec < 256.0F)
    {
        /* SignalConversion generated from: '<S146>/Data' */
        Data[0] = (uint8)rtb_Prod4_ec;
    }
    else
    {
        /* SignalConversion generated from: '<S146>/Data' */
        Data[0] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S146>/DTConv' */

    /* DataTypeConversion: '<S146>/DTConv2' incorporates:
     *  Constant: '<S146>/Factor1'
     *  Product: '<S146>/Prod1'
     */
    rtb_Prod4_ec = roundf(rtb_Add1_a / 0.39216F);
    if (rtb_Prod4_ec < 256.0F)
    {
        /* SignalConversion generated from: '<S146>/Data' */
        Data[1] = (uint8)rtb_Prod4_ec;
    }
    else
    {
        /* SignalConversion generated from: '<S146>/Data' */
        Data[1] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S146>/DTConv2' */

    /* DataTypeConversion: '<S146>/DTConv3' incorporates:
     *  Constant: '<S146>/Factor2'
     *  Product: '<S146>/Prod2'
     */
    rtb_Prod4_ec = roundf(rtb_Add2_a3 / 0.1F);
    if (rtb_Prod4_ec < 256.0F)
    {
        /* SignalConversion generated from: '<S146>/Data' */
        Data[2] = (uint8)rtb_Prod4_ec;
    }
    else
    {
        /* SignalConversion generated from: '<S146>/Data' */
        Data[2] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S146>/DTConv3' */

    /* DataTypeConversion: '<S146>/DTConv4' incorporates:
     *  Constant: '<S146>/Offset3'
     *  Sum: '<S146>/Add3'
     */
    rtb_Prod4_ec = roundf(rtb_Add3_b - -50.0F);
    if (rtb_Prod4_ec < 256.0F)
    {
        /* SignalConversion generated from: '<S146>/Data' */
        Data[3] = (uint8)rtb_Prod4_ec;
    }
    else
    {
        /* SignalConversion generated from: '<S146>/Data' */
        Data[3] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S146>/DTConv4' */

    /* Switch: '<S241>/Switch2' incorporates:
     *  Constant: '<S146>/MaxValue4'
     *  Constant: '<S146>/MinValue4'
     *  RelationalOperator: '<S241>/LowerRelop1'
     *  RelationalOperator: '<S241>/UpperRelop'
     *  SignalConversion generated from: '<S146>/VePMIR_I_LTPsvPumpCurrent'
     *  Switch: '<S241>/Switch'
     */
    if (tmpRead > 50.8F)
    {
        tmpRead = 50.8F;
    }
    else
    {
        if (tmpRead < 0.0F)
        {
            /* Switch: '<S241>/Switch' incorporates:
             *  Constant: '<S146>/MinValue4'
             */
            tmpRead = 0.0F;
        }
    }

    /* End of Switch: '<S241>/Switch2' */

    /* DataTypeConversion: '<S146>/DTConv5' incorporates:
     *  Constant: '<S146>/Factor4'
     *  Product: '<S146>/Prod4'
     */
    rtb_Prod4_ec = roundf(tmpRead / 0.2F);
    if (rtb_Prod4_ec < 256.0F)
    {
        /* SignalConversion generated from: '<S146>/Data' */
        Data[4] = (uint8)rtb_Prod4_ec;
    }
    else
    {
        /* SignalConversion generated from: '<S146>/Data' */
        Data[4] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S146>/DTConv5' */

    /* SignalConversion generated from: '<S146>/Data' incorporates:
     *  ArithShift: '<S146>/BitShift'
     *  ArithShift: '<S146>/BitShift1'
     *  ArithShift: '<S146>/BitShift2'
     *  ArithShift: '<S146>/BitShift3'
     *  ArithShift: '<S146>/BitShift4'
     *  ArithShift: '<S146>/BitShift5'
     *  ArithShift: '<S146>/BitShift6'
     *  ArithShift: '<S146>/BitShift7'
     *  ArithShift: '<S146>/BitShift8'
     *  DataTypeConversion: '<S146>/DTConv17'
     *  Inport: '<Root>/VePMIR_e_LTPsvPumpAirPresntErr'
     *  Inport: '<Root>/VePMIR_e_LTPsvPumpDeblock'
     *  Inport: '<Root>/VePMIR_e_LTPsvPumpDryRun'
     *  Inport: '<Root>/VePMIR_e_LTPsvPumpFailsafe'
     *  Inport: '<Root>/VePMIR_e_LTPsvPumpLmpHM'
     *  Inport: '<Root>/VePMIR_e_LTPsvPumpMntrRPM'
     *  Inport: '<Root>/VePMIR_e_LTPsvPumpNodeErr'
     *  Inport: '<Root>/VePMIR_e_LTPsvPumpOT'
     *  Inport: '<Root>/VePMIR_e_LTPsvPumpOverCurrent'
     *  Inport: '<Root>/VePMIR_e_LTPsvPumpSuppVltErr'
     *  Inport: '<Root>/VePMPR_e_LTPsvPump_PstRnSt'
     *  S-Function (sfix_bitop): '<S146>/Bitwise'
     *  S-Function (sfix_bitop): '<S146>/Bitwise1'
     *  S-Function (sfix_bitop): '<S146>/Bitwise2'
     *  SignalConversion generated from: '<S146>/VePMIR_b_LTPsvPumpRespErr'
     *  SignalConversion generated from: '<S146>/VePMIR_e_LTPsvPumpAirPresntErr'
     *  SignalConversion generated from: '<S146>/VePMIR_e_LTPsvPumpDeblock'
     *  SignalConversion generated from: '<S146>/VePMIR_e_LTPsvPumpDryRun'
     *  SignalConversion generated from: '<S146>/VePMIR_e_LTPsvPumpFailsafe'
     *  SignalConversion generated from: '<S146>/VePMIR_e_LTPsvPumpLmpHM'
     *  SignalConversion generated from: '<S146>/VePMIR_e_LTPsvPumpMntrRPM'
     *  SignalConversion generated from: '<S146>/VePMIR_e_LTPsvPumpNodeErr'
     *  SignalConversion generated from: '<S146>/VePMIR_e_LTPsvPumpOT'
     *  SignalConversion generated from: '<S146>/VePMIR_e_LTPsvPumpOverCurrent'
     *  SignalConversion generated from: '<S146>/VePMIR_e_LTPsvPumpSuppVltErr'
     *  SignalConversion generated from: '<S146>/VePMPR_e_LTPsvPump_PstRnSt'
     */
    Data[5] = (uint8)(((((uint8)(tmpRead_1 << 2ULL)) | ((uint8)tmpRead_0)) |
                       ((uint8)(tmpRead_2 << 4ULL))) | ((uint8)(tmpRead_3 <<
                        6ULL)));
    Data[6] = (uint8)(((((uint8)(tmpRead_5 << 2ULL)) | ((uint8)tmpRead_4)) |
                       ((uint8)(tmpRead_6 << 4ULL))) | ((uint8)(tmpRead_7 <<
                        6ULL)));
    Data[7] = (uint8)((sint32)(((((sint32)((uint8)(tmpRead_9 << 2ULL))) |
                         ((sint32)tmpRead_8)) | ((sint32)((uint8)(tmpRead_a <<
                           4ULL)))) | ((tmpRead_b ? 1 : 0) * 128)));

    /* SignalConversion generated from: '<S146>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD4036_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD4037_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[8])
{
    float32 rtb_Add1_p;
    float32 rtb_Add2_hn;
    float32 rtb_Add3_pf;
    float32 rtb_Prod4_k;
    float32 tmpRead;
    TePMPR_e_FTSNA tmpRead_1;
    TePMPR_e_FTSNA tmpRead_2;
    TePMPR_e_FTSNA tmpRead_3;
    TePMPR_e_FTSNA tmpRead_4;
    TePMPR_e_FTSNA tmpRead_5;
    TePMPR_e_FTSNA tmpRead_6;
    TePMPR_e_FTSNA tmpRead_7;
    TePMPR_e_NodeError tmpRead_9;
    TePMPR_e_TFSNA tmpRead_0;
    TePMPR_e_TFSNA tmpRead_8;
    TeTMIR_e_ECM_LTP_FanAftRunRq tmpRead_a;
    boolean tmpRead_b;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VePMIR_b_LTPsvPump2RespErr' */
    (void)Rte_Read_VePMIR_b_LTPsvPump2RespErr_Value(&tmpRead_b);

    /* Inport: '<Root>/VePMPR_e_LTPsvPump2_PstRnSt' */
    (void)Rte_Read_VePMPR_e_LTPsvPump2_PstRnSt_Value(&tmpRead_a);

    /* Inport: '<Root>/VePMIR_e_LTPsvPump2NodeErr' */
    (void)Rte_Read_VePMIR_e_LTPsvPump2NodeErr_Value(&tmpRead_9);

    /* Inport: '<Root>/VePMIR_e_LTPsvPump2MntrRPM' */
    (void)Rte_Read_VePMIR_e_LTPsvPump2MntrRPM_Value(&tmpRead_8);

    /* Inport: '<Root>/VePMIR_e_LTPsvPump2Deblock' */
    (void)Rte_Read_VePMIR_e_LTPsvPump2Deblock_Value(&tmpRead_7);

    /* Inport: '<Root>/VePMIR_e_LTPsvPump2SuppVltErr' */
    (void)Rte_Read_VePMIR_e_LTPsvPump2SuppVltErr_Value(&tmpRead_6);

    /* Inport: '<Root>/VePMIR_e_LTPsvPump2DryRun' */
    (void)Rte_Read_VePMIR_e_LTPsvPump2DryRun_Value(&tmpRead_5);

    /* Inport: '<Root>/VePMIR_e_LTPsvPump2OverCurrent' */
    (void)Rte_Read_VePMIR_e_LTPsvPump2OverCurrent_Value(&tmpRead_4);

    /* Inport: '<Root>/VePMIR_e_LTPsvPump2OT' */
    (void)Rte_Read_VePMIR_e_LTPsvPump2OT_Value(&tmpRead_3);

    /* Inport: '<Root>/VePMIR_e_LTPsvPump2AirPresntErr' */
    (void)Rte_Read_VePMIR_e_LTPsvPump2AirPresntErr_Value(&tmpRead_2);

    /* Inport: '<Root>/VePMIR_e_LTPsvPump2LmpHM' */
    (void)Rte_Read_VePMIR_e_LTPsvPump2LmpHM_Value(&tmpRead_1);

    /* Inport: '<Root>/VePMIR_e_LTPsvPump2Failsafe' */
    (void)Rte_Read_VePMIR_e_LTPsvPump2Failsafe_Value(&tmpRead_0);

    /* Inport: '<Root>/VePMIR_I_LTPsvPump2Current' */
    (void)Rte_Read_VePMIR_I_LTPsvPump2Current_Value(&tmpRead);

    /* Inport: '<Root>/VePMIR_T_LTPsvPump2Temp' */
    (void)Rte_Read_VePMIR_T_LTPsvPump2Temp_Value(&rtb_Add3_pf);

    /* Inport: '<Root>/VePMIR_U_LTPsvPump2Vltg' */
    (void)Rte_Read_VePMIR_U_LTPsvPump2Vltg_Value(&rtb_Add2_hn);

    /* Inport: '<Root>/VePMPR_Pct_LTPsvPump2RPMAct' */
    (void)Rte_Read_VePMPR_Pct_LTPsvPump2RPMAct_Value(&rtb_Add1_p);

    /* Inport: '<Root>/VePMIR_Pct_LTPsvPump2TgtSpd' */
    (void)Rte_Read_VePMIR_Pct_LTPsvPump2TgtSpd_Value(&rtb_Prod4_k);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD4037_Data_ReadData' */
    /* Switch: '<S242>/Switch2' incorporates:
     *  Constant: '<S147>/MaxValue'
     *  Constant: '<S147>/MinValue'
     *  RelationalOperator: '<S242>/LowerRelop1'
     *  RelationalOperator: '<S242>/UpperRelop'
     *  SignalConversion generated from: '<S147>/VePMIR_Pct_LTPsvPump2TgtSpd'
     *  Switch: '<S242>/Switch'
     */
    if (rtb_Prod4_k > 99.6078F)
    {
        /* Product: '<S147>/Prod4' */
        rtb_Prod4_k = 99.6078F;
    }
    else
    {
        if (rtb_Prod4_k < 0.0F)
        {
            /* Switch: '<S242>/Switch' incorporates:
             *  Constant: '<S147>/MinValue'
             *  Product: '<S147>/Prod4'
             */
            rtb_Prod4_k = 0.0F;
        }
    }

    /* End of Switch: '<S242>/Switch2' */

    /* Switch: '<S243>/Switch2' incorporates:
     *  Constant: '<S147>/MaxValue1'
     *  Constant: '<S147>/MinValue1'
     *  RelationalOperator: '<S243>/LowerRelop1'
     *  RelationalOperator: '<S243>/UpperRelop'
     *  SignalConversion generated from: '<S147>/VePMPR_Pct_LTPsvPump2RPMAct'
     *  Switch: '<S243>/Switch'
     */
    if (rtb_Add1_p > 99.6078F)
    {
        /* Sum: '<S147>/Add1' */
        rtb_Add1_p = 99.6078F;
    }
    else
    {
        if (rtb_Add1_p < 0.0F)
        {
            /* Switch: '<S243>/Switch' incorporates:
             *  Constant: '<S147>/MinValue1'
             *  Sum: '<S147>/Add1'
             */
            rtb_Add1_p = 0.0F;
        }
    }

    /* End of Switch: '<S243>/Switch2' */

    /* Switch: '<S244>/Switch2' incorporates:
     *  Constant: '<S147>/MaxValue2'
     *  Constant: '<S147>/MinValue2'
     *  RelationalOperator: '<S244>/LowerRelop1'
     *  RelationalOperator: '<S244>/UpperRelop'
     *  SignalConversion generated from: '<S147>/VePMIR_U_LTPsvPump2Vltg'
     *  Switch: '<S244>/Switch'
     */
    if (rtb_Add2_hn > 25.4F)
    {
        /* Sum: '<S147>/Add2' */
        rtb_Add2_hn = 25.4F;
    }
    else
    {
        if (rtb_Add2_hn < 0.0F)
        {
            /* Switch: '<S244>/Switch' incorporates:
             *  Constant: '<S147>/MinValue2'
             *  Sum: '<S147>/Add2'
             */
            rtb_Add2_hn = 0.0F;
        }
    }

    /* End of Switch: '<S244>/Switch2' */

    /* Switch: '<S245>/Switch2' incorporates:
     *  Constant: '<S147>/MaxValue3'
     *  Constant: '<S147>/MinValue3'
     *  RelationalOperator: '<S245>/LowerRelop1'
     *  RelationalOperator: '<S245>/UpperRelop'
     *  SignalConversion generated from: '<S147>/VePMIR_T_LTPsvPump2Temp'
     *  Switch: '<S245>/Switch'
     */
    if (rtb_Add3_pf > 204.0F)
    {
        rtb_Add3_pf = 204.0F;
    }
    else
    {
        if (rtb_Add3_pf < -50.0F)
        {
            /* Switch: '<S245>/Switch' incorporates:
             *  Constant: '<S147>/MinValue3'
             */
            rtb_Add3_pf = -50.0F;
        }
    }

    /* End of Switch: '<S245>/Switch2' */

    /* DataTypeConversion: '<S147>/DTConv' incorporates:
     *  Constant: '<S147>/Factor'
     *  Product: '<S147>/Prod'
     *  Sum: '<S147>/Add'
     */
    rtb_Prod4_k = roundf(rtb_Prod4_k / 0.39216F);
    if (rtb_Prod4_k < 256.0F)
    {
        /* SignalConversion generated from: '<S147>/Data' */
        Data[0] = (uint8)rtb_Prod4_k;
    }
    else
    {
        /* SignalConversion generated from: '<S147>/Data' */
        Data[0] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S147>/DTConv' */

    /* DataTypeConversion: '<S147>/DTConv2' incorporates:
     *  Constant: '<S147>/Factor1'
     *  Product: '<S147>/Prod1'
     */
    rtb_Prod4_k = roundf(rtb_Add1_p / 0.39216F);
    if (rtb_Prod4_k < 256.0F)
    {
        /* SignalConversion generated from: '<S147>/Data' */
        Data[1] = (uint8)rtb_Prod4_k;
    }
    else
    {
        /* SignalConversion generated from: '<S147>/Data' */
        Data[1] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S147>/DTConv2' */

    /* DataTypeConversion: '<S147>/DTConv3' incorporates:
     *  Constant: '<S147>/Factor2'
     *  Product: '<S147>/Prod2'
     */
    rtb_Prod4_k = roundf(rtb_Add2_hn / 0.1F);
    if (rtb_Prod4_k < 256.0F)
    {
        /* SignalConversion generated from: '<S147>/Data' */
        Data[2] = (uint8)rtb_Prod4_k;
    }
    else
    {
        /* SignalConversion generated from: '<S147>/Data' */
        Data[2] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S147>/DTConv3' */

    /* DataTypeConversion: '<S147>/DTConv4' incorporates:
     *  Constant: '<S147>/Offset3'
     *  Sum: '<S147>/Add3'
     */
    rtb_Prod4_k = roundf(rtb_Add3_pf - -50.0F);
    if (rtb_Prod4_k < 256.0F)
    {
        /* SignalConversion generated from: '<S147>/Data' */
        Data[3] = (uint8)rtb_Prod4_k;
    }
    else
    {
        /* SignalConversion generated from: '<S147>/Data' */
        Data[3] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S147>/DTConv4' */

    /* Switch: '<S246>/Switch2' incorporates:
     *  Constant: '<S147>/MaxValue4'
     *  Constant: '<S147>/MinValue4'
     *  RelationalOperator: '<S246>/LowerRelop1'
     *  RelationalOperator: '<S246>/UpperRelop'
     *  SignalConversion generated from: '<S147>/VePMIR_I_LTPsvPump2Current'
     *  Switch: '<S246>/Switch'
     */
    if (tmpRead > 50.8F)
    {
        tmpRead = 50.8F;
    }
    else
    {
        if (tmpRead < 0.0F)
        {
            /* Switch: '<S246>/Switch' incorporates:
             *  Constant: '<S147>/MinValue4'
             */
            tmpRead = 0.0F;
        }
    }

    /* End of Switch: '<S246>/Switch2' */

    /* DataTypeConversion: '<S147>/DTConv5' incorporates:
     *  Constant: '<S147>/Factor4'
     *  Product: '<S147>/Prod4'
     */
    rtb_Prod4_k = roundf(tmpRead / 0.2F);
    if (rtb_Prod4_k < 256.0F)
    {
        /* SignalConversion generated from: '<S147>/Data' */
        Data[4] = (uint8)rtb_Prod4_k;
    }
    else
    {
        /* SignalConversion generated from: '<S147>/Data' */
        Data[4] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S147>/DTConv5' */

    /* SignalConversion generated from: '<S147>/Data' incorporates:
     *  ArithShift: '<S147>/BitShift'
     *  ArithShift: '<S147>/BitShift1'
     *  ArithShift: '<S147>/BitShift2'
     *  ArithShift: '<S147>/BitShift3'
     *  ArithShift: '<S147>/BitShift4'
     *  ArithShift: '<S147>/BitShift5'
     *  ArithShift: '<S147>/BitShift6'
     *  ArithShift: '<S147>/BitShift7'
     *  ArithShift: '<S147>/BitShift8'
     *  DataTypeConversion: '<S147>/DTConv17'
     *  Inport: '<Root>/VePMIR_e_LTPsvPump2AirPresntErr'
     *  Inport: '<Root>/VePMIR_e_LTPsvPump2Deblock'
     *  Inport: '<Root>/VePMIR_e_LTPsvPump2DryRun'
     *  Inport: '<Root>/VePMIR_e_LTPsvPump2Failsafe'
     *  Inport: '<Root>/VePMIR_e_LTPsvPump2LmpHM'
     *  Inport: '<Root>/VePMIR_e_LTPsvPump2MntrRPM'
     *  Inport: '<Root>/VePMIR_e_LTPsvPump2NodeErr'
     *  Inport: '<Root>/VePMIR_e_LTPsvPump2OT'
     *  Inport: '<Root>/VePMIR_e_LTPsvPump2OverCurrent'
     *  Inport: '<Root>/VePMIR_e_LTPsvPump2SuppVltErr'
     *  Inport: '<Root>/VePMPR_e_LTPsvPump2_PstRnSt'
     *  S-Function (sfix_bitop): '<S147>/Bitwise'
     *  S-Function (sfix_bitop): '<S147>/Bitwise1'
     *  S-Function (sfix_bitop): '<S147>/Bitwise2'
     *  SignalConversion generated from: '<S147>/VePMIR_b_LTPsvPump2RespErr'
     *  SignalConversion generated from: '<S147>/VePMIR_e_LTPsvPump2AirPresntErr'
     *  SignalConversion generated from: '<S147>/VePMIR_e_LTPsvPump2Deblock'
     *  SignalConversion generated from: '<S147>/VePMIR_e_LTPsvPump2DryRun'
     *  SignalConversion generated from: '<S147>/VePMIR_e_LTPsvPump2Failsafe'
     *  SignalConversion generated from: '<S147>/VePMIR_e_LTPsvPump2LmpHM'
     *  SignalConversion generated from: '<S147>/VePMIR_e_LTPsvPump2MntrRPM'
     *  SignalConversion generated from: '<S147>/VePMIR_e_LTPsvPump2NodeErr'
     *  SignalConversion generated from: '<S147>/VePMIR_e_LTPsvPump2OT'
     *  SignalConversion generated from: '<S147>/VePMIR_e_LTPsvPump2OverCurrent'
     *  SignalConversion generated from: '<S147>/VePMIR_e_LTPsvPump2SuppVltErr'
     *  SignalConversion generated from: '<S147>/VePMPR_e_LTPsvPump2_PstRnSt'
     */
    Data[5] = (uint8)(((((uint8)(tmpRead_1 << 2ULL)) | ((uint8)tmpRead_0)) |
                       ((uint8)(tmpRead_2 << 4ULL))) | ((uint8)(tmpRead_3 <<
                        6ULL)));
    Data[6] = (uint8)(((((uint8)(tmpRead_5 << 2ULL)) | ((uint8)tmpRead_4)) |
                       ((uint8)(tmpRead_6 << 4ULL))) | ((uint8)(tmpRead_7 <<
                        6ULL)));
    Data[7] = (uint8)((sint32)(((((sint32)((uint8)(tmpRead_9 << 2ULL))) |
                         ((sint32)tmpRead_8)) | ((sint32)((uint8)(tmpRead_a <<
                           4ULL)))) | ((tmpRead_b ? 1 : 0) * 128)));

    /* SignalConversion generated from: '<S147>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD4037_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD4039_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[9])
{
    float32 rtb_Add1_a;
    float32 rtb_Add2_k;
    float32 rtb_Add3_o;
    float32 rtb_Prod4_m;
    float32 tmpRead;
    TePMPR_e_FTSNA tmpRead_1;
    TePMPR_e_FTSNA tmpRead_2;
    TePMPR_e_FTSNA tmpRead_4;
    TePMPR_e_FTSNA tmpRead_5;
    TePMPR_e_FTSNA tmpRead_6;
    TePMPR_e_FTSNA tmpRead_8;
    TePMPR_e_FTSNA tmpRead_9;
    TePMPR_e_FTSNA tmpRead_b;
    TePMPR_e_NodeError tmpRead_7;
    TePMPR_e_TFSNA tmpRead_a;
    TeTMIR_e_ECM_LTP_FanAftRunRq tmpRead_3;
    boolean tmpRead_0;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VePMIR_e_LTAP_AirPrsntErr' */
    (void)Rte_Read_VePMIR_e_LTAP_AirPrsntErr_Value(&tmpRead_b);

    /* Inport: '<Root>/VePMIR_e_LTActvPumpFailsafe' */
    (void)Rte_Read_VePMIR_e_LTActvPumpFailsafe_Value(&tmpRead_a);

    /* Inport: '<Root>/VePMIR_e_LTActvPumpDryRun' */
    (void)Rte_Read_VePMIR_e_LTActvPumpDryRun_Value(&tmpRead_9);

    /* Inport: '<Root>/VePMIR_e_LTActvPumpDeblock' */
    (void)Rte_Read_VePMIR_e_LTActvPumpDeblock_Value(&tmpRead_8);

    /* Inport: '<Root>/VePMIR_e_LTActvPumpNodeErr' */
    (void)Rte_Read_VePMIR_e_LTActvPumpNodeErr_Value(&tmpRead_7);

    /* Inport: '<Root>/VePMIR_e_LTActvPumpSuppVltErr' */
    (void)Rte_Read_VePMIR_e_LTActvPumpSuppVltErr_Value(&tmpRead_6);

    /* Inport: '<Root>/VePMIR_e_LTActvPumpOT' */
    (void)Rte_Read_VePMIR_e_LTActvPumpOT_Value(&tmpRead_5);

    /* Inport: '<Root>/VePMIR_e_LTActvPumpOverCurrent' */
    (void)Rte_Read_VePMIR_e_LTActvPumpOverCurrent_Value(&tmpRead_4);

    /* Inport: '<Root>/VePMIR_e_LTActvPumpPstRnSt' */
    (void)Rte_Read_VePMIR_e_LTActvPumpPstRnSt_Value(&tmpRead_3);

    /* Inport: '<Root>/VePMIR_e_LTActvPumpLmpHM' */
    (void)Rte_Read_VePMIR_e_LTActvPumpLmpHM_Value(&tmpRead_2);

    /* Inport: '<Root>/VePMIR_e_LTActvPumpMntrRPM' */
    (void)Rte_Read_VePMIR_e_LTActvPumpMntrRPM_Value(&tmpRead_1);

    /* Inport: '<Root>/VePMIR_b_LTActvPumpRespErr' */
    (void)Rte_Read_VePMIR_b_LTActvPumpRespErr_Value(&tmpRead_0);

    /* Inport: '<Root>/VePMIR_U_LTActvPumpVlt' */
    (void)Rte_Read_VePMIR_U_LTActvPumpVlt_Value(&tmpRead);

    /* Inport: '<Root>/VePMIR_I_LTActvPumpCurrent' */
    (void)Rte_Read_VePMIR_I_LTActvPumpCurrent_Value(&rtb_Add3_o);

    /* Inport: '<Root>/VePMIR_Pct_LTActvPumpActSpd' */
    (void)Rte_Read_VePMIR_Pct_LTActvPumpActSpd_Value(&rtb_Add2_k);

    /* Inport: '<Root>/VePMIR_Pct_LTActvPumpTgtSpd' */
    (void)Rte_Read_VePMIR_Pct_LTActvPumpTgtSpd_Value(&rtb_Add1_a);

    /* Inport: '<Root>/VePMIR_T_LTActvPumpTemp' */
    (void)Rte_Read_VePMIR_T_LTActvPumpTemp_Value(&rtb_Prod4_m);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD4039_Data_ReadData' */
    /* Switch: '<S247>/Switch2' incorporates:
     *  Constant: '<S148>/MaxValue'
     *  Constant: '<S148>/MinValue'
     *  RelationalOperator: '<S247>/LowerRelop1'
     *  RelationalOperator: '<S247>/UpperRelop'
     *  SignalConversion generated from: '<S148>/VePMIR_T_LTActvPumpTemp'
     *  Switch: '<S247>/Switch'
     */
    if (rtb_Prod4_m > 204.0F)
    {
        /* Product: '<S148>/Prod4' */
        rtb_Prod4_m = 204.0F;
    }
    else
    {
        if (rtb_Prod4_m < -50.0F)
        {
            /* Switch: '<S247>/Switch' incorporates:
             *  Constant: '<S148>/MinValue'
             *  Product: '<S148>/Prod4'
             */
            rtb_Prod4_m = -50.0F;
        }
    }

    /* End of Switch: '<S247>/Switch2' */

    /* Switch: '<S248>/Switch2' incorporates:
     *  Constant: '<S148>/MaxValue1'
     *  Constant: '<S148>/MinValue1'
     *  RelationalOperator: '<S248>/LowerRelop1'
     *  RelationalOperator: '<S248>/UpperRelop'
     *  SignalConversion generated from: '<S148>/VePMIR_Pct_LTActvPumpTgtSpd'
     *  Switch: '<S248>/Switch'
     */
    if (rtb_Add1_a > 100.0F)
    {
        /* Sum: '<S148>/Add1' */
        rtb_Add1_a = 100.0F;
    }
    else
    {
        if (rtb_Add1_a < 0.0F)
        {
            /* Switch: '<S248>/Switch' incorporates:
             *  Constant: '<S148>/MinValue1'
             *  Sum: '<S148>/Add1'
             */
            rtb_Add1_a = 0.0F;
        }
    }

    /* End of Switch: '<S248>/Switch2' */

    /* Switch: '<S249>/Switch2' incorporates:
     *  Constant: '<S148>/MaxValue2'
     *  Constant: '<S148>/MinValue2'
     *  RelationalOperator: '<S249>/LowerRelop1'
     *  RelationalOperator: '<S249>/UpperRelop'
     *  SignalConversion generated from: '<S148>/VePMIR_Pct_LTActvPumpActSpd'
     *  Switch: '<S249>/Switch'
     */
    if (rtb_Add2_k > 100.0F)
    {
        /* Sum: '<S148>/Add2' */
        rtb_Add2_k = 100.0F;
    }
    else
    {
        if (rtb_Add2_k < 0.0F)
        {
            /* Switch: '<S249>/Switch' incorporates:
             *  Constant: '<S148>/MinValue2'
             *  Sum: '<S148>/Add2'
             */
            rtb_Add2_k = 0.0F;
        }
    }

    /* End of Switch: '<S249>/Switch2' */

    /* Switch: '<S250>/Switch2' incorporates:
     *  Constant: '<S148>/MaxValue3'
     *  Constant: '<S148>/MinValue3'
     *  RelationalOperator: '<S250>/LowerRelop1'
     *  RelationalOperator: '<S250>/UpperRelop'
     *  SignalConversion generated from: '<S148>/VePMIR_I_LTActvPumpCurrent'
     *  Switch: '<S250>/Switch'
     */
    if (rtb_Add3_o > 50.8F)
    {
        /* Sum: '<S148>/Add3' */
        rtb_Add3_o = 50.8F;
    }
    else
    {
        if (rtb_Add3_o < 0.0F)
        {
            /* Switch: '<S250>/Switch' incorporates:
             *  Constant: '<S148>/MinValue3'
             *  Sum: '<S148>/Add3'
             */
            rtb_Add3_o = 0.0F;
        }
    }

    /* End of Switch: '<S250>/Switch2' */

    /* DataTypeConversion: '<S148>/DTConv' incorporates:
     *  Constant: '<S148>/Offset'
     *  Sum: '<S148>/Add'
     */
    rtb_Prod4_m = roundf(rtb_Prod4_m - -50.0F);
    if (rtb_Prod4_m < 256.0F)
    {
        /* SignalConversion generated from: '<S148>/Data' */
        Data[0] = (uint8)rtb_Prod4_m;
    }
    else
    {
        /* SignalConversion generated from: '<S148>/Data' */
        Data[0] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S148>/DTConv' */

    /* DataTypeConversion: '<S148>/DTConv2' incorporates:
     *  Constant: '<S148>/Factor1'
     *  Product: '<S148>/Prod1'
     */
    rtb_Prod4_m = roundf(rtb_Add1_a / 0.3937F);
    if (rtb_Prod4_m < 256.0F)
    {
        /* SignalConversion generated from: '<S148>/Data' */
        Data[1] = (uint8)rtb_Prod4_m;
    }
    else
    {
        /* SignalConversion generated from: '<S148>/Data' */
        Data[1] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S148>/DTConv2' */

    /* DataTypeConversion: '<S148>/DTConv3' incorporates:
     *  Constant: '<S148>/Factor2'
     *  Product: '<S148>/Prod2'
     */
    rtb_Prod4_m = roundf(rtb_Add2_k / 0.3937F);
    if (rtb_Prod4_m < 256.0F)
    {
        /* SignalConversion generated from: '<S148>/Data' */
        Data[2] = (uint8)rtb_Prod4_m;
    }
    else
    {
        /* SignalConversion generated from: '<S148>/Data' */
        Data[2] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S148>/DTConv3' */

    /* DataTypeConversion: '<S148>/DTConv4' incorporates:
     *  Constant: '<S148>/Factor3'
     *  Product: '<S148>/Prod3'
     */
    rtb_Prod4_m = roundf(rtb_Add3_o / 0.2F);
    if (rtb_Prod4_m < 256.0F)
    {
        /* SignalConversion generated from: '<S148>/Data' */
        Data[3] = (uint8)rtb_Prod4_m;
    }
    else
    {
        /* SignalConversion generated from: '<S148>/Data' */
        Data[3] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S148>/DTConv4' */

    /* Switch: '<S251>/Switch2' incorporates:
     *  Constant: '<S148>/MaxValue4'
     *  Constant: '<S148>/MinValue4'
     *  RelationalOperator: '<S251>/LowerRelop1'
     *  RelationalOperator: '<S251>/UpperRelop'
     *  SignalConversion generated from: '<S148>/VePMIR_U_LTActvPumpVlt'
     *  Switch: '<S251>/Switch'
     */
    if (tmpRead > 25.4F)
    {
        tmpRead = 25.4F;
    }
    else
    {
        if (tmpRead < 0.0F)
        {
            /* Switch: '<S251>/Switch' incorporates:
             *  Constant: '<S148>/MinValue4'
             */
            tmpRead = 0.0F;
        }
    }

    /* End of Switch: '<S251>/Switch2' */

    /* DataTypeConversion: '<S148>/DTConv5' incorporates:
     *  Constant: '<S148>/Factor4'
     *  Product: '<S148>/Prod4'
     */
    rtb_Prod4_m = roundf(tmpRead / 0.1F);
    if (rtb_Prod4_m < 256.0F)
    {
        /* SignalConversion generated from: '<S148>/Data' */
        Data[4] = (uint8)rtb_Prod4_m;
    }
    else
    {
        /* SignalConversion generated from: '<S148>/Data' */
        Data[4] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S148>/DTConv5' */

    /* SignalConversion generated from: '<S148>/Data' incorporates:
     *  ArithShift: '<S148>/BitShift'
     *  ArithShift: '<S148>/BitShift1'
     *  ArithShift: '<S148>/BitShift2'
     *  ArithShift: '<S148>/BitShift3'
     *  ArithShift: '<S148>/BitShift4'
     *  ArithShift: '<S148>/BitShift5'
     *  ArithShift: '<S148>/BitShift6'
     *  ArithShift: '<S148>/BitShift7'
     *  ArithShift: '<S148>/BitShift8'
     *  DataTypeConversion: '<S148>/DTConv1'
     *  DataTypeConversion: '<S148>/DTConv6'
     *  Inport: '<Root>/VePMIR_e_LTAP_AirPrsntErr'
     *  Inport: '<Root>/VePMIR_e_LTActvPumpDeblock'
     *  Inport: '<Root>/VePMIR_e_LTActvPumpDryRun'
     *  Inport: '<Root>/VePMIR_e_LTActvPumpFailsafe'
     *  Inport: '<Root>/VePMIR_e_LTActvPumpLmpHM'
     *  Inport: '<Root>/VePMIR_e_LTActvPumpMntrRPM'
     *  Inport: '<Root>/VePMIR_e_LTActvPumpNodeErr'
     *  Inport: '<Root>/VePMIR_e_LTActvPumpOT'
     *  Inport: '<Root>/VePMIR_e_LTActvPumpOverCurrent'
     *  Inport: '<Root>/VePMIR_e_LTActvPumpPstRnSt'
     *  Inport: '<Root>/VePMIR_e_LTActvPumpSuppVltErr'
     *  S-Function (sfix_bitop): '<S148>/Bitwise'
     *  S-Function (sfix_bitop): '<S148>/Bitwise1'
     *  S-Function (sfix_bitop): '<S148>/Bitwise2'
     *  SignalConversion generated from: '<S148>/VePMIR_b_LTActvPumpRespErr'
     *  SignalConversion generated from: '<S148>/VePMIR_e_LTAP_AirPrsntErr'
     *  SignalConversion generated from: '<S148>/VePMIR_e_LTActvPumpDeblock'
     *  SignalConversion generated from: '<S148>/VePMIR_e_LTActvPumpDryRun'
     *  SignalConversion generated from: '<S148>/VePMIR_e_LTActvPumpFailsafe'
     *  SignalConversion generated from: '<S148>/VePMIR_e_LTActvPumpLmpHM'
     *  SignalConversion generated from: '<S148>/VePMIR_e_LTActvPumpMntrRPM'
     *  SignalConversion generated from: '<S148>/VePMIR_e_LTActvPumpNodeErr'
     *  SignalConversion generated from: '<S148>/VePMIR_e_LTActvPumpOT'
     *  SignalConversion generated from: '<S148>/VePMIR_e_LTActvPumpOverCurrent'
     *  SignalConversion generated from: '<S148>/VePMIR_e_LTActvPumpPstRnSt'
     *  SignalConversion generated from: '<S148>/VePMIR_e_LTActvPumpSuppVltErr'
     */
    Data[5] = (uint8)(((((uint8)(tmpRead_1 << 1ULL)) | (tmpRead_0 ? ((uint8)1) :
                         ((uint8)0))) | ((uint8)(tmpRead_2 << 3ULL))) | ((uint8)
                       (tmpRead_3 << 5ULL)));
    Data[6] = (uint8)(((((uint8)(tmpRead_5 << 2ULL)) | ((uint8)tmpRead_4)) |
                       ((uint8)(tmpRead_6 << 4ULL))) | ((uint8)(tmpRead_7 <<
                        6ULL)));
    Data[7] = (uint8)(((((uint8)(tmpRead_9 << 2ULL)) | ((uint8)tmpRead_8)) |
                       ((uint8)(tmpRead_a << 4ULL))) | ((uint8)(tmpRead_b <<
                        6ULL)));
    Data[8] = DCAB_ac_ConstB.Mux4_d;

    /* SignalConversion generated from: '<S148>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD4039_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD403D_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[8])
{
    float32 rtb_Add1_a;
    float32 rtb_Add2_g;
    float32 rtb_Add3_a;
    float32 rtb_Prod4_ao;
    float32 tmpRead;
    TePMPR_e_FTSNA tmpRead_1;
    TePMPR_e_FTSNA tmpRead_2;
    TePMPR_e_FTSNA tmpRead_3;
    TePMPR_e_FTSNA tmpRead_4;
    TePMPR_e_FTSNA tmpRead_5;
    TePMPR_e_FTSNA tmpRead_6;
    TePMPR_e_FTSNA tmpRead_7;
    TePMPR_e_NodeError tmpRead_9;
    TePMPR_e_TFSNA tmpRead_0;
    TePMPR_e_TFSNA tmpRead_8;
    boolean tmpRead_a;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VePMIR_b_HTAuxPumpRespErr' */
    (void)Rte_Read_VePMIR_b_HTAuxPumpRespErr_Value(&tmpRead_a);

    /* Inport: '<Root>/VePMIR_e_HTAuxPumpNodeErr' */
    (void)Rte_Read_VePMIR_e_HTAuxPumpNodeErr_Value(&tmpRead_9);

    /* Inport: '<Root>/VePMIR_e_HTAuxPumpMntrRPM' */
    (void)Rte_Read_VePMIR_e_HTAuxPumpMntrRPM_Value(&tmpRead_8);

    /* Inport: '<Root>/VePMIR_e_HTAuxPumpDeblock' */
    (void)Rte_Read_VePMIR_e_HTAuxPumpDeblock_Value(&tmpRead_7);

    /* Inport: '<Root>/VePMIR_e_HTAuxPumpSuppVltErr' */
    (void)Rte_Read_VePMIR_e_HTAuxPumpSuppVltErr_Value(&tmpRead_6);

    /* Inport: '<Root>/VePMIR_e_HTAuxPumpDryRun' */
    (void)Rte_Read_VePMIR_e_HTAuxPumpDryRun_Value(&tmpRead_5);

    /* Inport: '<Root>/VePMIR_e_HTAuxPumpOverCurrent' */
    (void)Rte_Read_VePMIR_e_HTAuxPumpOverCurrent_Value(&tmpRead_4);

    /* Inport: '<Root>/VePMIR_e_HTAuxPumpOT' */
    (void)Rte_Read_VePMIR_e_HTAuxPumpOT_Value(&tmpRead_3);

    /* Inport: '<Root>/VePMIR_e_HTAuxPumpAirPresntErr' */
    (void)Rte_Read_VePMIR_e_HTAuxPumpAirPresntErr_Value(&tmpRead_2);

    /* Inport: '<Root>/VePMIR_e_HTAuxPumpLmpHM' */
    (void)Rte_Read_VePMIR_e_HTAuxPumpLmpHM_Value(&tmpRead_1);

    /* Inport: '<Root>/VePMIR_e_HTAuxPumpFailsafe' */
    (void)Rte_Read_VePMIR_e_HTAuxPumpFailsafe_Value(&tmpRead_0);

    /* Inport: '<Root>/VePMIR_I_HTAuxPumpCurrent' */
    (void)Rte_Read_VePMIR_I_HTAuxPumpCurrent_Value(&tmpRead);

    /* Inport: '<Root>/VePMIR_T_HTAuxPumpTemp' */
    (void)Rte_Read_VePMIR_T_HTAuxPumpTemp_Value(&rtb_Add3_a);

    /* Inport: '<Root>/VePMIR_U_HTAuxPumpVltg' */
    (void)Rte_Read_VePMIR_U_HTAuxPumpVltg_Value(&rtb_Add2_g);

    /* Inport: '<Root>/VePMIR_Pct_HTAuxPumpActSpd' */
    (void)Rte_Read_VePMIR_Pct_HTAuxPumpActSpd_Value(&rtb_Add1_a);

    /* Inport: '<Root>/VePMIR_Pct_HTAuxPumpTgtSpd' */
    (void)Rte_Read_VePMIR_Pct_HTAuxPumpTgtSpd_Value(&rtb_Prod4_ao);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD403D_Data_ReadData' */
    /* Switch: '<S252>/Switch2' incorporates:
     *  Constant: '<S149>/MaxValue'
     *  Constant: '<S149>/MinValue'
     *  RelationalOperator: '<S252>/LowerRelop1'
     *  RelationalOperator: '<S252>/UpperRelop'
     *  SignalConversion generated from: '<S149>/VePMIR_Pct_HTAuxPumpTgtSpd'
     *  Switch: '<S252>/Switch'
     */
    if (rtb_Prod4_ao > 99.6078F)
    {
        /* Product: '<S149>/Prod4' */
        rtb_Prod4_ao = 99.6078F;
    }
    else
    {
        if (rtb_Prod4_ao < 0.0F)
        {
            /* Switch: '<S252>/Switch' incorporates:
             *  Constant: '<S149>/MinValue'
             *  Product: '<S149>/Prod4'
             */
            rtb_Prod4_ao = 0.0F;
        }
    }

    /* End of Switch: '<S252>/Switch2' */

    /* Switch: '<S253>/Switch2' incorporates:
     *  Constant: '<S149>/MaxValue1'
     *  Constant: '<S149>/MinValue1'
     *  RelationalOperator: '<S253>/LowerRelop1'
     *  RelationalOperator: '<S253>/UpperRelop'
     *  SignalConversion generated from: '<S149>/VePMIR_Pct_HTAuxPumpActSpd'
     *  Switch: '<S253>/Switch'
     */
    if (rtb_Add1_a > 99.6078F)
    {
        /* Sum: '<S149>/Add1' */
        rtb_Add1_a = 99.6078F;
    }
    else
    {
        if (rtb_Add1_a < 0.0F)
        {
            /* Switch: '<S253>/Switch' incorporates:
             *  Constant: '<S149>/MinValue1'
             *  Sum: '<S149>/Add1'
             */
            rtb_Add1_a = 0.0F;
        }
    }

    /* End of Switch: '<S253>/Switch2' */

    /* Switch: '<S254>/Switch2' incorporates:
     *  Constant: '<S149>/MaxValue2'
     *  Constant: '<S149>/MinValue2'
     *  RelationalOperator: '<S254>/LowerRelop1'
     *  RelationalOperator: '<S254>/UpperRelop'
     *  SignalConversion generated from: '<S149>/VePMIR_U_HTAuxPumpVltg'
     *  Switch: '<S254>/Switch'
     */
    if (rtb_Add2_g > 25.4F)
    {
        /* Sum: '<S149>/Add2' */
        rtb_Add2_g = 25.4F;
    }
    else
    {
        if (rtb_Add2_g < 0.0F)
        {
            /* Switch: '<S254>/Switch' incorporates:
             *  Constant: '<S149>/MinValue2'
             *  Sum: '<S149>/Add2'
             */
            rtb_Add2_g = 0.0F;
        }
    }

    /* End of Switch: '<S254>/Switch2' */

    /* Switch: '<S255>/Switch2' incorporates:
     *  Constant: '<S149>/MaxValue3'
     *  Constant: '<S149>/MinValue3'
     *  RelationalOperator: '<S255>/LowerRelop1'
     *  RelationalOperator: '<S255>/UpperRelop'
     *  SignalConversion generated from: '<S149>/VePMIR_T_HTAuxPumpTemp'
     *  Switch: '<S255>/Switch'
     */
    if (rtb_Add3_a > 204.0F)
    {
        rtb_Add3_a = 204.0F;
    }
    else
    {
        if (rtb_Add3_a < -50.0F)
        {
            /* Switch: '<S255>/Switch' incorporates:
             *  Constant: '<S149>/MinValue3'
             */
            rtb_Add3_a = -50.0F;
        }
    }

    /* End of Switch: '<S255>/Switch2' */

    /* DataTypeConversion: '<S149>/DTConv' incorporates:
     *  Constant: '<S149>/Factor'
     *  Product: '<S149>/Prod'
     *  Sum: '<S149>/Add'
     */
    rtb_Prod4_ao = roundf(rtb_Prod4_ao / 0.39216F);
    if (rtb_Prod4_ao < 256.0F)
    {
        /* SignalConversion generated from: '<S149>/Data' */
        Data[0] = (uint8)rtb_Prod4_ao;
    }
    else
    {
        /* SignalConversion generated from: '<S149>/Data' */
        Data[0] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S149>/DTConv' */

    /* DataTypeConversion: '<S149>/DTConv2' incorporates:
     *  Constant: '<S149>/Factor1'
     *  Product: '<S149>/Prod1'
     */
    rtb_Prod4_ao = roundf(rtb_Add1_a / 0.39216F);
    if (rtb_Prod4_ao < 256.0F)
    {
        /* SignalConversion generated from: '<S149>/Data' */
        Data[1] = (uint8)rtb_Prod4_ao;
    }
    else
    {
        /* SignalConversion generated from: '<S149>/Data' */
        Data[1] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S149>/DTConv2' */

    /* DataTypeConversion: '<S149>/DTConv3' incorporates:
     *  Constant: '<S149>/Factor2'
     *  Product: '<S149>/Prod2'
     */
    rtb_Prod4_ao = roundf(rtb_Add2_g / 0.1F);
    if (rtb_Prod4_ao < 256.0F)
    {
        /* SignalConversion generated from: '<S149>/Data' */
        Data[2] = (uint8)rtb_Prod4_ao;
    }
    else
    {
        /* SignalConversion generated from: '<S149>/Data' */
        Data[2] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S149>/DTConv3' */

    /* DataTypeConversion: '<S149>/DTConv4' incorporates:
     *  Constant: '<S149>/Offset3'
     *  Sum: '<S149>/Add3'
     */
    rtb_Prod4_ao = roundf(rtb_Add3_a - -50.0F);
    if (rtb_Prod4_ao < 256.0F)
    {
        /* SignalConversion generated from: '<S149>/Data' */
        Data[3] = (uint8)rtb_Prod4_ao;
    }
    else
    {
        /* SignalConversion generated from: '<S149>/Data' */
        Data[3] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S149>/DTConv4' */

    /* Switch: '<S256>/Switch2' incorporates:
     *  Constant: '<S149>/MaxValue4'
     *  Constant: '<S149>/MinValue4'
     *  RelationalOperator: '<S256>/LowerRelop1'
     *  RelationalOperator: '<S256>/UpperRelop'
     *  SignalConversion generated from: '<S149>/VePMIR_I_HTAuxPumpCurrent'
     *  Switch: '<S256>/Switch'
     */
    if (tmpRead > 50.8F)
    {
        tmpRead = 50.8F;
    }
    else
    {
        if (tmpRead < 0.0F)
        {
            /* Switch: '<S256>/Switch' incorporates:
             *  Constant: '<S149>/MinValue4'
             */
            tmpRead = 0.0F;
        }
    }

    /* End of Switch: '<S256>/Switch2' */

    /* DataTypeConversion: '<S149>/DTConv5' incorporates:
     *  Constant: '<S149>/Factor4'
     *  Product: '<S149>/Prod4'
     */
    rtb_Prod4_ao = roundf(tmpRead / 0.2F);
    if (rtb_Prod4_ao < 256.0F)
    {
        /* SignalConversion generated from: '<S149>/Data' */
        Data[4] = (uint8)rtb_Prod4_ao;
    }
    else
    {
        /* SignalConversion generated from: '<S149>/Data' */
        Data[4] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S149>/DTConv5' */

    /* SignalConversion generated from: '<S149>/Data' incorporates:
     *  ArithShift: '<S149>/BitShift'
     *  ArithShift: '<S149>/BitShift1'
     *  ArithShift: '<S149>/BitShift2'
     *  ArithShift: '<S149>/BitShift3'
     *  ArithShift: '<S149>/BitShift4'
     *  ArithShift: '<S149>/BitShift5'
     *  ArithShift: '<S149>/BitShift6'
     *  ArithShift: '<S149>/BitShift8'
     *  DataTypeConversion: '<S149>/DTConv17'
     *  Inport: '<Root>/VePMIR_e_HTAuxPumpAirPresntErr'
     *  Inport: '<Root>/VePMIR_e_HTAuxPumpDeblock'
     *  Inport: '<Root>/VePMIR_e_HTAuxPumpDryRun'
     *  Inport: '<Root>/VePMIR_e_HTAuxPumpFailsafe'
     *  Inport: '<Root>/VePMIR_e_HTAuxPumpLmpHM'
     *  Inport: '<Root>/VePMIR_e_HTAuxPumpMntrRPM'
     *  Inport: '<Root>/VePMIR_e_HTAuxPumpNodeErr'
     *  Inport: '<Root>/VePMIR_e_HTAuxPumpOT'
     *  Inport: '<Root>/VePMIR_e_HTAuxPumpOverCurrent'
     *  Inport: '<Root>/VePMIR_e_HTAuxPumpSuppVltErr'
     *  S-Function (sfix_bitop): '<S149>/Bitwise'
     *  S-Function (sfix_bitop): '<S149>/Bitwise1'
     *  S-Function (sfix_bitop): '<S149>/Bitwise2'
     *  SignalConversion generated from: '<S149>/VePMIR_b_HTAuxPumpRespErr'
     *  SignalConversion generated from: '<S149>/VePMIR_e_HTAuxPumpAirPresntErr'
     *  SignalConversion generated from: '<S149>/VePMIR_e_HTAuxPumpDeblock'
     *  SignalConversion generated from: '<S149>/VePMIR_e_HTAuxPumpDryRun'
     *  SignalConversion generated from: '<S149>/VePMIR_e_HTAuxPumpFailsafe'
     *  SignalConversion generated from: '<S149>/VePMIR_e_HTAuxPumpLmpHM'
     *  SignalConversion generated from: '<S149>/VePMIR_e_HTAuxPumpMntrRPM'
     *  SignalConversion generated from: '<S149>/VePMIR_e_HTAuxPumpNodeErr'
     *  SignalConversion generated from: '<S149>/VePMIR_e_HTAuxPumpOT'
     *  SignalConversion generated from: '<S149>/VePMIR_e_HTAuxPumpOverCurrent'
     *  SignalConversion generated from: '<S149>/VePMIR_e_HTAuxPumpSuppVltErr'
     */
    Data[5] = (uint8)(((((uint8)(tmpRead_1 << 2ULL)) | ((uint8)tmpRead_0)) |
                       ((uint8)(tmpRead_2 << 4ULL))) | ((uint8)(tmpRead_3 <<
                        6ULL)));
    Data[6] = (uint8)(((((uint8)(tmpRead_5 << 2ULL)) | ((uint8)tmpRead_4)) |
                       ((uint8)(tmpRead_6 << 4ULL))) | ((uint8)(tmpRead_7 <<
                        6ULL)));
    Data[7] = (uint8)((sint32)((((sint32)((uint8)(tmpRead_9 << 2ULL))) |
                        ((sint32)tmpRead_8)) | ((tmpRead_a ? 1 : 0) * 128)));

    /* SignalConversion generated from: '<S149>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD403D_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD4040_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    float32 rtb_Prod_c;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeTAIR_Pct_RadFanSts' */
    (void)Rte_Read_VeTAIR_Pct_RadFanSts_Value(&rtb_Prod_c);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD4040_Data_ReadData' */
    /* Switch: '<S257>/Switch2' incorporates:
     *  Constant: '<S150>/MaxValue'
     *  Constant: '<S150>/MinValue'
     *  RelationalOperator: '<S257>/LowerRelop1'
     *  RelationalOperator: '<S257>/UpperRelop'
     *  SignalConversion generated from: '<S150>/VeTAIR_Pct_RadFanSts'
     *  Switch: '<S257>/Switch'
     */
    if (rtb_Prod_c > 100.0F)
    {
        /* Product: '<S150>/Prod' */
        rtb_Prod_c = 100.0F;
    }
    else
    {
        if (rtb_Prod_c < 0.0F)
        {
            /* Switch: '<S257>/Switch' incorporates:
             *  Constant: '<S150>/MinValue'
             *  Product: '<S150>/Prod'
             */
            rtb_Prod_c = 0.0F;
        }
    }

    /* End of Switch: '<S257>/Switch2' */

    /* DataTypeConversion: '<S150>/DTConv' */
    rtb_Prod_c = roundf(rtb_Prod_c);
    if (rtb_Prod_c < 256.0F)
    {
        /* SignalConversion generated from: '<S150>/Data' */
        *Data = (uint8)rtb_Prod_c;
    }
    else
    {
        /* SignalConversion generated from: '<S150>/Data' */
        *Data = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S150>/DTConv' */

    /* SignalConversion generated from: '<S150>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD4040_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD4050_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[10])
{
    /* local block i/o variables */
    TeHVTR_e_HV_IntrlkStat rtb_TmpLatchAtVeHTIR_e_HVC_Htr_;
    TeHTIR_e_HVC_HtrSts rtb_TmpLatchAtVeHTIR_e_HV_ElecC;
    float32 rtb_Add1_c;
    float32 rtb_Add2_f;
    float32 rtb_Prod5;
    float32 tmpRead_0;
    float32 tmpRead_1;
    float32 tmpRead_2;
    uint16 rtb_Bitwise6_0;
    uint16 rtb_DTConv10_k_0;
    uint16 rtb_DTConv10_k_1;
    TeHTIR_e_HVC_Htr_Warning tmpRead;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeHTIR_P_HVC_HtrPwrExpectd' */
    (void)Rte_Read_VeHTIR_P_HVC_HtrPwrExpectd_Value(&tmpRead_2);

    /* Inport: '<Root>/VeHTIR_P_HVC_HtrPwrAct' */
    (void)Rte_Read_VeHTIR_P_HVC_HtrPwrAct_Value(&tmpRead_1);

    /* Inport: '<Root>/VeHTIR_U_HVC_Htr_HV_VltgAct' */
    (void)Rte_Read_VeHTIR_U_HVC_Htr_HV_VltgAct_Value(&tmpRead_0);

    /* Inport: '<Root>/VeHTIR_I_HVC_Htr_HV_CrntAct' */
    (void)Rte_Read_VeHTIR_I_HVC_Htr_HV_CrntAct_Value(&rtb_Add2_f);

    /* Inport: '<Root>/VeHTIR_T_HVC_HtrClntOut_Temp' */
    (void)Rte_Read_VeHTIR_T_HVC_HtrClntOut_Temp_Value(&rtb_Add1_c);

    /* Inport: '<Root>/VeHTIR_T_HVC_HtrClntIn_Temp' */
    (void)Rte_Read_VeHTIR_T_HVC_HtrClntIn_Temp_Value(&rtb_Prod5);

    /* Inport: '<Root>/VeHTIR_e_HVC_HtrHighVol_Dwn' */
    (void)Rte_Read_VeHTIR_e_HVC_HtrHighVol_Dwn_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD4050_Data_ReadData' */
    /* SignalConversion generated from: '<S151>/VeHTIR_e_HV_ElecClntHtr_Sts' incorporates:
     *  Inport: '<Root>/VeHTIR_e_HV_ElecClntHtr_Sts'
     */
    (void)Rte_Read_VeHTIR_e_HV_ElecClntHtr_Sts_Value
        (&rtb_TmpLatchAtVeHTIR_e_HV_ElecC);

    /* SignalConversion generated from: '<S151>/VeHTIR_e_HVC_Htr_InterlockStat' incorporates:
     *  Inport: '<Root>/VeHTIR_e_HVC_Htr_InterlockStat'
     */
    (void)Rte_Read_VeHTIR_e_HVC_Htr_InterlockStat_Value
        (&rtb_TmpLatchAtVeHTIR_e_HVC_Htr_);

    /* Switch: '<S258>/Switch2' incorporates:
     *  Constant: '<S151>/MaxValue'
     *  Constant: '<S151>/MinValue'
     *  RelationalOperator: '<S258>/LowerRelop1'
     *  RelationalOperator: '<S258>/UpperRelop'
     *  SignalConversion generated from: '<S151>/VeHTIR_T_HVC_HtrClntIn_Temp'
     *  Switch: '<S258>/Switch'
     */
    if (rtb_Prod5 > 214.0F)
    {
        /* Product: '<S151>/Prod5' */
        rtb_Prod5 = 214.0F;
    }
    else
    {
        if (rtb_Prod5 < -40.0F)
        {
            /* Switch: '<S258>/Switch' incorporates:
             *  Constant: '<S151>/MinValue'
             *  Product: '<S151>/Prod5'
             */
            rtb_Prod5 = -40.0F;
        }
    }

    /* End of Switch: '<S258>/Switch2' */

    /* Switch: '<S259>/Switch2' incorporates:
     *  Constant: '<S151>/MaxValue1'
     *  Constant: '<S151>/MinValue1'
     *  RelationalOperator: '<S259>/LowerRelop1'
     *  RelationalOperator: '<S259>/UpperRelop'
     *  SignalConversion generated from: '<S151>/VeHTIR_T_HVC_HtrClntOut_Temp'
     *  Switch: '<S259>/Switch'
     */
    if (rtb_Add1_c > 214.0F)
    {
        rtb_Add1_c = 214.0F;
    }
    else
    {
        if (rtb_Add1_c < -40.0F)
        {
            /* Switch: '<S259>/Switch' incorporates:
             *  Constant: '<S151>/MinValue1'
             */
            rtb_Add1_c = -40.0F;
        }
    }

    /* End of Switch: '<S259>/Switch2' */

    /* Switch: '<S260>/Switch2' incorporates:
     *  Constant: '<S151>/MaxValue2'
     *  Constant: '<S151>/MinValue2'
     *  RelationalOperator: '<S260>/LowerRelop1'
     *  RelationalOperator: '<S260>/UpperRelop'
     *  SignalConversion generated from: '<S151>/VeHTIR_I_HVC_Htr_HV_CrntAct'
     *  Switch: '<S260>/Switch'
     */
    if (rtb_Add2_f > 63.5F)
    {
        /* Sum: '<S151>/Add2' */
        rtb_Add2_f = 63.5F;
    }
    else
    {
        if (rtb_Add2_f < 0.0F)
        {
            /* Switch: '<S260>/Switch' incorporates:
             *  Constant: '<S151>/MinValue2'
             *  Sum: '<S151>/Add2'
             */
            rtb_Add2_f = 0.0F;
        }
    }

    /* End of Switch: '<S260>/Switch2' */

    /* Switch: '<S261>/Switch2' incorporates:
     *  Constant: '<S151>/MaxValue3'
     *  Constant: '<S151>/MinValue3'
     *  RelationalOperator: '<S261>/LowerRelop1'
     *  RelationalOperator: '<S261>/UpperRelop'
     *  SignalConversion generated from: '<S151>/VeHTIR_U_HVC_Htr_HV_VltgAct'
     *  Switch: '<S261>/Switch'
     */
    if (tmpRead_0 > 1022.0F)
    {
        tmpRead_0 = 1022.0F;
    }
    else
    {
        if (tmpRead_0 < 0.0F)
        {
            /* Switch: '<S261>/Switch' incorporates:
             *  Constant: '<S151>/MinValue3'
             */
            tmpRead_0 = 0.0F;
        }
    }

    /* End of Switch: '<S261>/Switch2' */

    /* DataTypeConversion: '<S151>/DTConv8' */
    tmpRead_0 = roundf(tmpRead_0);
    if (tmpRead_0 < 65536.0F)
    {
        rtb_Bitwise6_0 = (uint16)tmpRead_0;
    }
    else
    {
        rtb_Bitwise6_0 = MAX_uint16_T;
    }

    /* Switch: '<S262>/Switch2' incorporates:
     *  Constant: '<S151>/MaxValue4'
     *  Constant: '<S151>/MinValue4'
     *  RelationalOperator: '<S262>/LowerRelop1'
     *  RelationalOperator: '<S262>/UpperRelop'
     *  SignalConversion generated from: '<S151>/VeHTIR_P_HVC_HtrPwrAct'
     *  Switch: '<S262>/Switch'
     */
    if (tmpRead_1 > 20440.0F)
    {
        tmpRead_1 = 20440.0F;
    }
    else
    {
        if (tmpRead_1 < 0.0F)
        {
            /* Switch: '<S262>/Switch' incorporates:
             *  Constant: '<S151>/MinValue4'
             */
            tmpRead_1 = 0.0F;
        }
    }

    /* End of Switch: '<S262>/Switch2' */

    /* DataTypeConversion: '<S151>/DTConv9' incorporates:
     *  Constant: '<S151>/Factor4'
     *  Product: '<S151>/Prod4'
     */
    tmpRead_0 = roundf(tmpRead_1 / 20.0F);
    if (tmpRead_0 < 65536.0F)
    {
        rtb_DTConv10_k_1 = (uint16)tmpRead_0;
    }
    else
    {
        rtb_DTConv10_k_1 = MAX_uint16_T;
    }

    /* Switch: '<S263>/Switch2' incorporates:
     *  Constant: '<S151>/MaxValue5'
     *  Constant: '<S151>/MinValue5'
     *  RelationalOperator: '<S263>/LowerRelop1'
     *  RelationalOperator: '<S263>/UpperRelop'
     *  SignalConversion generated from: '<S151>/VeHTIR_P_HVC_HtrPwrExpectd'
     *  Switch: '<S263>/Switch'
     */
    if (tmpRead_2 > 20440.0F)
    {
        tmpRead_2 = 20440.0F;
    }
    else
    {
        if (tmpRead_2 < 0.0F)
        {
            /* Switch: '<S263>/Switch' incorporates:
             *  Constant: '<S151>/MinValue5'
             */
            tmpRead_2 = 0.0F;
        }
    }

    /* End of Switch: '<S263>/Switch2' */

    /* DataTypeConversion: '<S151>/DTConv10' incorporates:
     *  Constant: '<S151>/Factor5'
     *  Product: '<S151>/Prod5'
     */
    tmpRead_0 = roundf(tmpRead_2 / 20.0F);
    if (tmpRead_0 < 65536.0F)
    {
        rtb_DTConv10_k_0 = (uint16)tmpRead_0;
    }
    else
    {
        rtb_DTConv10_k_0 = MAX_uint16_T;
    }

    /* SignalConversion generated from: '<S151>/Data' incorporates:
     *  ArithShift: '<S151>/BitShift1'
     *  ArithShift: '<S151>/BitShift2'
     *  DataTypeConversion: '<S151>/DTConv'
     *  DataTypeConversion: '<S151>/DTConv3'
     *  Inport: '<Root>/VeHTIR_e_HVC_HtrHighVol_Dwn'
     *  S-Function (sfix_bitop): '<S151>/Bitwise'
     *  SignalConversion generated from: '<S151>/VeHTIR_e_HVC_HtrHighVol_Dwn'
     *  SignalConversion generated from: '<S151>/VeHTIR_e_HVC_Htr_InterlockStat'
     *  SignalConversion generated from: '<S151>/VeHTIR_e_HV_ElecClntHtr_Sts'
     */
    Data[0] = (uint8)((((uint8)(rtb_TmpLatchAtVeHTIR_e_HVC_Htr_ << 4ULL)) |
                       ((uint8)rtb_TmpLatchAtVeHTIR_e_HV_ElecC)) | ((uint8)
                       (tmpRead << 6ULL)));

    /* DataTypeConversion: '<S151>/DTConv5' incorporates:
     *  Constant: '<S151>/Offset'
     *  Sum: '<S151>/Add'
     */
    tmpRead_0 = roundf(rtb_Prod5 - -40.0F);
    if (tmpRead_0 < 256.0F)
    {
        /* SignalConversion generated from: '<S151>/Data' */
        Data[1] = (uint8)tmpRead_0;
    }
    else
    {
        /* SignalConversion generated from: '<S151>/Data' */
        Data[1] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S151>/DTConv5' */

    /* DataTypeConversion: '<S151>/DTConv6' incorporates:
     *  Constant: '<S151>/Offset1'
     *  Sum: '<S151>/Add1'
     */
    tmpRead_0 = roundf(rtb_Add1_c - -40.0F);
    if (tmpRead_0 < 256.0F)
    {
        /* SignalConversion generated from: '<S151>/Data' */
        Data[2] = (uint8)tmpRead_0;
    }
    else
    {
        /* SignalConversion generated from: '<S151>/Data' */
        Data[2] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S151>/DTConv6' */

    /* DataTypeConversion: '<S151>/DTConv7' incorporates:
     *  Constant: '<S151>/Factor2'
     *  Product: '<S151>/Prod2'
     */
    tmpRead_0 = roundf(rtb_Add2_f / 0.25F);
    if (tmpRead_0 < 256.0F)
    {
        /* SignalConversion generated from: '<S151>/Data' */
        Data[3] = (uint8)tmpRead_0;
    }
    else
    {
        /* SignalConversion generated from: '<S151>/Data' */
        Data[3] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S151>/DTConv7' */

    /* SignalConversion generated from: '<S151>/Data' incorporates:
     *  ArithShift: '<S151>/Bitshift'
     *  ArithShift: '<S151>/Bitshift2'
     *  ArithShift: '<S151>/Bitshift4'
     *  DataTypeConversion: '<S151>/DTConv10'
     *  DataTypeConversion: '<S151>/DTConv8'
     *  DataTypeConversion: '<S151>/DTConv9'
     *  DataTypeConversion: '<S151>/Mux2'
     *  DataTypeConversion: '<S151>/Mux3'
     *  DataTypeConversion: '<S151>/Mux4'
     *  DataTypeConversion: '<S151>/Mux5'
     *  DataTypeConversion: '<S151>/Mux6'
     *  DataTypeConversion: '<S151>/Mux7'
     *  S-Function (sfix_bitop): '<S151>/Bitwise2'
     *  S-Function (sfix_bitop): '<S151>/Bitwise4'
     *  S-Function (sfix_bitop): '<S151>/Bitwise6'
     */
    Data[4] = (uint8)(((uint32)rtb_Bitwise6_0) >> 8ULL);
    Data[5] = (uint8)(rtb_Bitwise6_0 & ((uint16)255));
    Data[6] = (uint8)(((uint32)rtb_DTConv10_k_1) >> 8ULL);
    Data[7] = (uint8)(rtb_DTConv10_k_1 & ((uint16)255));
    Data[8] = (uint8)(((uint32)rtb_DTConv10_k_0) >> 8ULL);
    Data[9] = (uint8)(rtb_DTConv10_k_0 & ((uint16)255));

    /* SignalConversion generated from: '<S151>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD4050_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD4051_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[4])
{
    TeHTIR_e_HVC_Htr_Warning tmpRead_0;
    TeHTIR_e_HVC_Htr_Warning tmpRead_1;
    TeHTIR_e_HVC_Htr_Warning tmpRead_2;
    TeHTIR_e_HVC_Htr_Warning tmpRead_3;
    TeHTIR_e_HVC_Htr_Warning tmpRead_4;
    TeHTIR_e_HVC_Htr_Warning tmpRead_5;
    TeHTIR_e_HVC_Htr_Warning tmpRead_6;
    TeHTIR_e_HVC_Htr_Warning tmpRead_7;
    TeHTIR_e_HVC_Htr_Warning tmpRead_8;
    TeHTIR_e_HVC_Htr_Warning tmpRead_9;
    TeHTIR_e_HVC_Htr_Warning tmpRead_a;
    TeHTIR_e_HVC_Htr_Warning tmpRead_b;
    TeHTIR_e_HVC_Htr_Warning tmpRead_c;
    boolean tmpRead;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeHTIR_e_HVC_Htr_DCDC_VltgOutofRng' */
    (void)Rte_Read_VeHTIR_e_HVC_Htr_DCDC_VltgOutofRng_Value(&tmpRead_c);

    /* Inport: '<Root>/VeHTIR_e_HVC_HtrProcesMemory_Flt' */
    (void)Rte_Read_VeHTIR_e_HVC_HtrProcesMemory_Flt_Value(&tmpRead_b);

    /* Inport: '<Root>/VeHTIR_e_HVC_Htr_HV_CrntOutofRng' */
    (void)Rte_Read_VeHTIR_e_HVC_Htr_HV_CrntOutofRng_Value(&tmpRead_a);

    /* Inport: '<Root>/VeHTIR_e_HVC_HtrDrvFlt' */
    (void)Rte_Read_VeHTIR_e_HVC_HtrDrvFlt_Value(&tmpRead_9);

    /* Inport: '<Root>/VeHTIR_e_HVC_HtrCoreTemp_SensFlt' */
    (void)Rte_Read_VeHTIR_e_HVC_HtrCoreTemp_SensFlt_Value(&tmpRead_8);

    /* Inport: '<Root>/VeHTIR_e_HVC_HtrClntOut_TempSensFlt' */
    (void)Rte_Read_VeHTIR_e_HVC_HtrClntOut_TempSensFlt_Value(&tmpRead_7);

    /* Inport: '<Root>/VeHTIR_e_HVC_HtrClntIn_TempSensFlt' */
    (void)Rte_Read_VeHTIR_e_HVC_HtrClntIn_TempSensFlt_Value(&tmpRead_6);

    /* Inport: '<Root>/VeHTIR_e_HVC_HtrResis_PCB_OvrTemp' */
    (void)Rte_Read_VeHTIR_e_HVC_HtrResis_PCB_OvrTemp_Value(&tmpRead_5);

    /* Inport: '<Root>/VeHTIR_e_HVC_HtrSelfProtect_Actv' */
    (void)Rte_Read_VeHTIR_e_HVC_HtrSelfProtect_Actv_Value(&tmpRead_4);

    /* Inport: '<Root>/VeHTIR_e_HVC_HtrClntTemp_OutofRng' */
    (void)Rte_Read_VeHTIR_e_HVC_HtrClntTemp_OutofRng_Value(&tmpRead_3);

    /* Inport: '<Root>/VeHTIR_e_HVC_Htr_LV_OutofRng' */
    (void)Rte_Read_VeHTIR_e_HVC_Htr_LV_OutofRng_Value(&tmpRead_2);

    /* Inport: '<Root>/VeHTIR_e_HVC_Htr_HV_OutofRng' */
    (void)Rte_Read_VeHTIR_e_HVC_Htr_HV_OutofRng_Value(&tmpRead_1);

    /* Inport: '<Root>/VeHTIR_e_HVC_HtrIntCom_Err' */
    (void)Rte_Read_VeHTIR_e_HVC_HtrIntCom_Err_Value(&tmpRead_0);

    /* Inport: '<Root>/VeHTIR_b_HVC_Htr_LIN_ResErr' */
    (void)Rte_Read_VeHTIR_b_HVC_Htr_LIN_ResErr_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD4051_Data_ReadData' */
    /* SignalConversion generated from: '<S152>/Data' incorporates:
     *  ArithShift: '<S152>/BitShift'
     *  ArithShift: '<S152>/BitShift1'
     *  ArithShift: '<S152>/BitShift10'
     *  ArithShift: '<S152>/BitShift11'
     *  ArithShift: '<S152>/BitShift2'
     *  ArithShift: '<S152>/BitShift5'
     *  ArithShift: '<S152>/BitShift6'
     *  ArithShift: '<S152>/BitShift7'
     *  ArithShift: '<S152>/BitShift8'
     *  ArithShift: '<S152>/BitShift9'
     *  DataTypeConversion: '<S152>/DTConv'
     *  Inport: '<Root>/VeHTIR_e_HVC_HtrClntIn_TempSensFlt'
     *  Inport: '<Root>/VeHTIR_e_HVC_HtrClntOut_TempSensFlt'
     *  Inport: '<Root>/VeHTIR_e_HVC_HtrClntTemp_OutofRng'
     *  Inport: '<Root>/VeHTIR_e_HVC_HtrCoreTemp_SensFlt'
     *  Inport: '<Root>/VeHTIR_e_HVC_HtrDrvFlt'
     *  Inport: '<Root>/VeHTIR_e_HVC_HtrIntCom_Err'
     *  Inport: '<Root>/VeHTIR_e_HVC_HtrProcesMemory_Flt'
     *  Inport: '<Root>/VeHTIR_e_HVC_HtrResis_PCB_OvrTemp'
     *  Inport: '<Root>/VeHTIR_e_HVC_HtrSelfProtect_Actv'
     *  Inport: '<Root>/VeHTIR_e_HVC_Htr_DCDC_VltgOutofRng'
     *  Inport: '<Root>/VeHTIR_e_HVC_Htr_HV_CrntOutofRng'
     *  Inport: '<Root>/VeHTIR_e_HVC_Htr_HV_OutofRng'
     *  Inport: '<Root>/VeHTIR_e_HVC_Htr_LV_OutofRng'
     *  S-Function (sfix_bitop): '<S152>/Bitwise'
     *  S-Function (sfix_bitop): '<S152>/Bitwise1'
     *  S-Function (sfix_bitop): '<S152>/Bitwise2'
     *  S-Function (sfix_bitop): '<S152>/Bitwise3'
     *  SignalConversion generated from: '<S152>/VeHTIR_b_HVC_Htr_LIN_ResErr'
     *  SignalConversion generated from: '<S152>/VeHTIR_e_HVC_HtrClntIn_TempSensFlt'
     *  SignalConversion generated from: '<S152>/VeHTIR_e_HVC_HtrClntOut_TempSensFlt'
     *  SignalConversion generated from: '<S152>/VeHTIR_e_HVC_HtrClntTemp_OutofRng'
     *  SignalConversion generated from: '<S152>/VeHTIR_e_HVC_HtrCoreTemp_SensFlt'
     *  SignalConversion generated from: '<S152>/VeHTIR_e_HVC_HtrDrvFlt'
     *  SignalConversion generated from: '<S152>/VeHTIR_e_HVC_HtrIntCom_Err'
     *  SignalConversion generated from: '<S152>/VeHTIR_e_HVC_HtrProcesMemory_Flt'
     *  SignalConversion generated from: '<S152>/VeHTIR_e_HVC_HtrResis_PCB_OvrTemp'
     *  SignalConversion generated from: '<S152>/VeHTIR_e_HVC_HtrSelfProtect_Actv'
     *  SignalConversion generated from: '<S152>/VeHTIR_e_HVC_Htr_DCDC_VltgOutofRng'
     *  SignalConversion generated from: '<S152>/VeHTIR_e_HVC_Htr_HV_CrntOutofRng'
     *  SignalConversion generated from: '<S152>/VeHTIR_e_HVC_Htr_HV_OutofRng'
     *  SignalConversion generated from: '<S152>/VeHTIR_e_HVC_Htr_LV_OutofRng'
     */
    Data[0] = (uint8)(((((uint8)(tmpRead_0 << 1ULL)) | (tmpRead ? ((uint8)1) :
                         ((uint8)0))) | ((uint8)(tmpRead_1 << 3ULL))) | ((uint8)
                       (tmpRead_2 << 5ULL)));
    Data[1] = (uint8)(((uint8)(tmpRead_4 << 6ULL)) | ((uint8)tmpRead_3));
    Data[2] = (uint8)(((((uint8)(tmpRead_6 << 2ULL)) | ((uint8)tmpRead_5)) |
                       ((uint8)(tmpRead_7 << 4ULL))) | ((uint8)(tmpRead_8 <<
                        6ULL)));
    Data[3] = (uint8)(((((uint8)(tmpRead_a << 2ULL)) | ((uint8)tmpRead_9)) |
                       ((uint8)(tmpRead_b << 4ULL))) | ((uint8)(tmpRead_c <<
                        6ULL)));

    /* SignalConversion generated from: '<S152>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD4051_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD4052_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[7])
{
    float32 rtb_Prod3;
    float32 tmpRead;
    float32 tmpRead_0;
    float32 tmpRead_1;
    uint16 rtb_Bitwise5_0;
    uint16 rtb_DTConv3_n_0;
    uint16 rtb_DTConv3_n_1;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeHTIR_I_HVC_Htr4_HV_CrntAct' */
    (void)Rte_Read_VeHTIR_I_HVC_Htr4_HV_CrntAct_Value(&tmpRead_1);

    /* Inport: '<Root>/VeHTIR_U_HVC_Htr4_HV_VltgAct' */
    (void)Rte_Read_VeHTIR_U_HVC_Htr4_HV_VltgAct_Value(&tmpRead_0);

    /* Inport: '<Root>/VeHTIR_P_HVC_Htr4PwrAct' */
    (void)Rte_Read_VeHTIR_P_HVC_Htr4PwrAct_Value(&tmpRead);

    /* Inport: '<Root>/VeHTIR_P_HVC_Htr4PwrExpectd' */
    (void)Rte_Read_VeHTIR_P_HVC_Htr4PwrExpectd_Value(&rtb_Prod3);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD4052_Data_ReadData' */
    /* Switch: '<S264>/Switch2' incorporates:
     *  Constant: '<S153>/MaxValue'
     *  Constant: '<S153>/MinValue'
     *  RelationalOperator: '<S264>/LowerRelop1'
     *  RelationalOperator: '<S264>/UpperRelop'
     *  SignalConversion generated from: '<S153>/VeHTIR_P_HVC_Htr4PwrExpectd'
     *  Switch: '<S264>/Switch'
     */
    if (rtb_Prod3 > 20440.0F)
    {
        /* Product: '<S153>/Prod3' */
        rtb_Prod3 = 20440.0F;
    }
    else
    {
        if (rtb_Prod3 < 0.0F)
        {
            /* Switch: '<S264>/Switch' incorporates:
             *  Constant: '<S153>/MinValue'
             *  Product: '<S153>/Prod3'
             */
            rtb_Prod3 = 0.0F;
        }
    }

    /* End of Switch: '<S264>/Switch2' */

    /* DataTypeConversion: '<S153>/DTConv' incorporates:
     *  Constant: '<S153>/Factor'
     *  Product: '<S153>/Prod'
     *  Sum: '<S153>/Add'
     */
    rtb_Prod3 = roundf(rtb_Prod3 / 20.0F);
    if (rtb_Prod3 < 65536.0F)
    {
        rtb_Bitwise5_0 = (uint16)rtb_Prod3;
    }
    else
    {
        rtb_Bitwise5_0 = MAX_uint16_T;
    }

    /* Switch: '<S265>/Switch2' incorporates:
     *  Constant: '<S153>/MaxValue1'
     *  Constant: '<S153>/MinValue1'
     *  RelationalOperator: '<S265>/LowerRelop1'
     *  RelationalOperator: '<S265>/UpperRelop'
     *  SignalConversion generated from: '<S153>/VeHTIR_P_HVC_Htr4PwrAct'
     *  Switch: '<S265>/Switch'
     */
    if (tmpRead > 20440.0F)
    {
        tmpRead = 20440.0F;
    }
    else
    {
        if (tmpRead < 0.0F)
        {
            /* Switch: '<S265>/Switch' incorporates:
             *  Constant: '<S153>/MinValue1'
             */
            tmpRead = 0.0F;
        }
    }

    /* End of Switch: '<S265>/Switch2' */

    /* DataTypeConversion: '<S153>/DTConv2' incorporates:
     *  Constant: '<S153>/Factor1'
     *  Product: '<S153>/Prod1'
     */
    rtb_Prod3 = roundf(tmpRead / 20.0F);
    if (rtb_Prod3 < 65536.0F)
    {
        rtb_DTConv3_n_1 = (uint16)rtb_Prod3;
    }
    else
    {
        rtb_DTConv3_n_1 = MAX_uint16_T;
    }

    /* Switch: '<S266>/Switch2' incorporates:
     *  Constant: '<S153>/MaxValue2'
     *  Constant: '<S153>/MinValue2'
     *  RelationalOperator: '<S266>/LowerRelop1'
     *  RelationalOperator: '<S266>/UpperRelop'
     *  SignalConversion generated from: '<S153>/VeHTIR_U_HVC_Htr4_HV_VltgAct'
     *  Switch: '<S266>/Switch'
     */
    if (tmpRead_0 > 1022.0F)
    {
        tmpRead_0 = 1022.0F;
    }
    else
    {
        if (tmpRead_0 < 0.0F)
        {
            /* Switch: '<S266>/Switch' incorporates:
             *  Constant: '<S153>/MinValue2'
             */
            tmpRead_0 = 0.0F;
        }
    }

    /* End of Switch: '<S266>/Switch2' */

    /* DataTypeConversion: '<S153>/DTConv3' */
    rtb_Prod3 = roundf(tmpRead_0);
    if (rtb_Prod3 < 65536.0F)
    {
        rtb_DTConv3_n_0 = (uint16)rtb_Prod3;
    }
    else
    {
        rtb_DTConv3_n_0 = MAX_uint16_T;
    }

    /* SignalConversion generated from: '<S153>/Data' incorporates:
     *  ArithShift: '<S153>/Bitshift'
     *  ArithShift: '<S153>/Bitshift2'
     *  ArithShift: '<S153>/Bitshift4'
     *  DataTypeConversion: '<S153>/DTConv'
     *  DataTypeConversion: '<S153>/DTConv2'
     *  DataTypeConversion: '<S153>/DTConv3'
     *  DataTypeConversion: '<S153>/Mux'
     *  DataTypeConversion: '<S153>/Mux2'
     *  DataTypeConversion: '<S153>/Mux3'
     *  DataTypeConversion: '<S153>/Mux4'
     *  DataTypeConversion: '<S153>/Mux5'
     *  DataTypeConversion: '<S153>/Mux6'
     *  S-Function (sfix_bitop): '<S153>/Bitwise1'
     *  S-Function (sfix_bitop): '<S153>/Bitwise3'
     *  S-Function (sfix_bitop): '<S153>/Bitwise5'
     */
    Data[0] = (uint8)(((uint32)rtb_Bitwise5_0) >> 8ULL);
    Data[1] = (uint8)(rtb_Bitwise5_0 & ((uint16)255));
    Data[2] = (uint8)(((uint32)rtb_DTConv3_n_1) >> 8ULL);
    Data[3] = (uint8)(rtb_DTConv3_n_1 & ((uint16)255));
    Data[4] = (uint8)(((uint32)rtb_DTConv3_n_0) >> 8ULL);
    Data[5] = (uint8)(rtb_DTConv3_n_0 & ((uint16)255));

    /* Switch: '<S267>/Switch2' incorporates:
     *  Constant: '<S153>/MaxValue3'
     *  Constant: '<S153>/MinValue3'
     *  RelationalOperator: '<S267>/LowerRelop1'
     *  RelationalOperator: '<S267>/UpperRelop'
     *  SignalConversion generated from: '<S153>/VeHTIR_I_HVC_Htr4_HV_CrntAct'
     *  Switch: '<S267>/Switch'
     */
    if (tmpRead_1 > 63.5F)
    {
        tmpRead_1 = 63.5F;
    }
    else
    {
        if (tmpRead_1 < 0.0F)
        {
            /* Switch: '<S267>/Switch' incorporates:
             *  Constant: '<S153>/MinValue3'
             */
            tmpRead_1 = 0.0F;
        }
    }

    /* End of Switch: '<S267>/Switch2' */

    /* DataTypeConversion: '<S153>/DTConv4' incorporates:
     *  Constant: '<S153>/Factor3'
     *  Product: '<S153>/Prod3'
     */
    rtb_Prod3 = roundf(tmpRead_1 / 0.25F);
    if (rtb_Prod3 < 256.0F)
    {
        /* SignalConversion generated from: '<S153>/Data' */
        Data[6] = (uint8)rtb_Prod3;
    }
    else
    {
        /* SignalConversion generated from: '<S153>/Data' */
        Data[6] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S153>/DTConv4' */

    /* SignalConversion generated from: '<S153>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD4052_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD4053_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[6])
{
    float32 rtb_Prod1;
    float32 tmpRead;
    TeHTIR_e_HVC_HtrSts tmpRead_b;
    TeHTIR_e_HVC_Htr_Warning tmpRead_0;
    TeHTIR_e_HVC_Htr_Warning tmpRead_1;
    TeHTIR_e_HVC_Htr_Warning tmpRead_2;
    TeHTIR_e_HVC_Htr_Warning tmpRead_3;
    TeHTIR_e_HVC_Htr_Warning tmpRead_4;
    TeHTIR_e_HVC_Htr_Warning tmpRead_5;
    TeHTIR_e_HVC_Htr_Warning tmpRead_6;
    TeHTIR_e_HVC_Htr_Warning tmpRead_7;
    TeHTIR_e_HVC_Htr_Warning tmpRead_8;
    TeHTIR_e_HVC_Htr_Warning tmpRead_9;
    TeHTIR_e_HVC_Htr_Warning tmpRead_a;
    TeHTIR_e_HVC_Htr_Warning tmpRead_c;
    TeHTIR_e_HVC_Htr_Warning tmpRead_d;
    boolean tmpRead_e;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeHTIR_b_HVC_Htr4_LIN_ResErr' */
    (void)Rte_Read_VeHTIR_b_HVC_Htr4_LIN_ResErr_Value(&tmpRead_e);

    /* Inport: '<Root>/VeHTIR_e_HVC_Htr4ProcesMemory_Flt' */
    (void)Rte_Read_VeHTIR_e_HVC_Htr4ProcesMemory_Flt_Value(&tmpRead_d);

    /* Inport: '<Root>/VeHTIR_e_HVC_Htr4IntCom_Err' */
    (void)Rte_Read_VeHTIR_e_HVC_Htr4IntCom_Err_Value(&tmpRead_c);

    /* Inport: '<Root>/VeHTIR_e_HV_ElecClntHtr4_Sts' */
    (void)Rte_Read_VeHTIR_e_HV_ElecClntHtr4_Sts_Value(&tmpRead_b);

    /* Inport: '<Root>/VeHTIR_e_HVC_Htr4ClntTemp_OutofRng' */
    (void)Rte_Read_VeHTIR_e_HVC_Htr4ClntTemp_OutofRng_Value(&tmpRead_a);

    /* Inport: '<Root>/VeHTIR_e_HVC_Htr4ClntIn_TempSensFlt' */
    (void)Rte_Read_VeHTIR_e_HVC_Htr4ClntIn_TempSensFlt_Value(&tmpRead_9);

    /* Inport: '<Root>/VeHTIR_e_HVC_Htr4CoreTemp_SensFlt' */
    (void)Rte_Read_VeHTIR_e_HVC_Htr4CoreTemp_SensFlt_Value(&tmpRead_8);

    /* Inport: '<Root>/VeHTIR_e_HVC_Htr4ClntOut_TempSensFlt' */
    (void)Rte_Read_VeHTIR_e_HVC_Htr4ClntOut_TempSensFlt_Value(&tmpRead_7);

    /* Inport: '<Root>/VeHTIR_e_HVC_Htr4Resis_PCB_OvrTemp' */
    (void)Rte_Read_VeHTIR_e_HVC_Htr4Resis_PCB_OvrTemp_Value(&tmpRead_6);

    /* Inport: '<Root>/VeHTIR_e_HVC_Htr4SelfProtect_Actv' */
    (void)Rte_Read_VeHTIR_e_HVC_Htr4SelfProtect_Actv_Value(&tmpRead_5);

    /* Inport: '<Root>/VeHTIR_e_HVC_Htr4_HV_OutofRng' */
    (void)Rte_Read_VeHTIR_e_HVC_Htr4_HV_OutofRng_Value(&tmpRead_4);

    /* Inport: '<Root>/VeHTIR_e_HVC_Htr4_LV_OutofRng' */
    (void)Rte_Read_VeHTIR_e_HVC_Htr4_LV_OutofRng_Value(&tmpRead_3);

    /* Inport: '<Root>/VeHTIR_e_HVC_Htr4DrvFlt' */
    (void)Rte_Read_VeHTIR_e_HVC_Htr4DrvFlt_Value(&tmpRead_2);

    /* Inport: '<Root>/VeHTIR_e_HVC_Htr4_HV_CrntOutofRng' */
    (void)Rte_Read_VeHTIR_e_HVC_Htr4_HV_CrntOutofRng_Value(&tmpRead_1);

    /* Inport: '<Root>/VeHTIR_e_HVC_Htr4_DCDC_VltgOutofRng' */
    (void)Rte_Read_VeHTIR_e_HVC_Htr4_DCDC_VltgOutofRng_Value(&tmpRead_0);

    /* Inport: '<Root>/VeHTIR_T_HVC_Htr4ClntOut_Temp' */
    (void)Rte_Read_VeHTIR_T_HVC_Htr4ClntOut_Temp_Value(&tmpRead);

    /* Inport: '<Root>/VeHTIR_T_HVC_Htr4ClntIn_Temp' */
    (void)Rte_Read_VeHTIR_T_HVC_Htr4ClntIn_Temp_Value(&rtb_Prod1);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD4053_Data_ReadData' */
    /* Switch: '<S268>/Switch2' incorporates:
     *  Constant: '<S154>/MaxValue'
     *  Constant: '<S154>/MinValue'
     *  RelationalOperator: '<S268>/LowerRelop1'
     *  RelationalOperator: '<S268>/UpperRelop'
     *  SignalConversion generated from: '<S154>/VeHTIR_T_HVC_Htr4ClntIn_Temp'
     *  Switch: '<S268>/Switch'
     */
    if (rtb_Prod1 > 214.0F)
    {
        /* Product: '<S154>/Prod1' */
        rtb_Prod1 = 214.0F;
    }
    else
    {
        if (rtb_Prod1 < -40.0F)
        {
            /* Switch: '<S268>/Switch' incorporates:
             *  Constant: '<S154>/MinValue'
             *  Product: '<S154>/Prod1'
             */
            rtb_Prod1 = -40.0F;
        }
    }

    /* End of Switch: '<S268>/Switch2' */

    /* DataTypeConversion: '<S154>/DTConv' incorporates:
     *  Constant: '<S154>/Offset'
     *  Sum: '<S154>/Add'
     */
    rtb_Prod1 = roundf(rtb_Prod1 - -40.0F);
    if (rtb_Prod1 < 256.0F)
    {
        /* SignalConversion generated from: '<S154>/Data' */
        Data[0] = (uint8)rtb_Prod1;
    }
    else
    {
        /* SignalConversion generated from: '<S154>/Data' */
        Data[0] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S154>/DTConv' */

    /* Switch: '<S269>/Switch2' incorporates:
     *  Constant: '<S154>/MaxValue1'
     *  Constant: '<S154>/MinValue1'
     *  RelationalOperator: '<S269>/LowerRelop1'
     *  RelationalOperator: '<S269>/UpperRelop'
     *  SignalConversion generated from: '<S154>/VeHTIR_T_HVC_Htr4ClntOut_Temp'
     *  Switch: '<S269>/Switch'
     */
    if (tmpRead > 214.0F)
    {
        tmpRead = 214.0F;
    }
    else
    {
        if (tmpRead < -40.0F)
        {
            /* Switch: '<S269>/Switch' incorporates:
             *  Constant: '<S154>/MinValue1'
             */
            tmpRead = -40.0F;
        }
    }

    /* End of Switch: '<S269>/Switch2' */

    /* DataTypeConversion: '<S154>/DTConv2' incorporates:
     *  Constant: '<S154>/Offset1'
     *  Sum: '<S154>/Add1'
     */
    rtb_Prod1 = roundf(tmpRead - -40.0F);
    if (rtb_Prod1 < 256.0F)
    {
        /* SignalConversion generated from: '<S154>/Data' */
        Data[1] = (uint8)rtb_Prod1;
    }
    else
    {
        /* SignalConversion generated from: '<S154>/Data' */
        Data[1] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S154>/DTConv2' */

    /* SignalConversion generated from: '<S154>/Data' incorporates:
     *  ArithShift: '<S154>/BitShift'
     *  ArithShift: '<S154>/BitShift1'
     *  ArithShift: '<S154>/BitShift10'
     *  ArithShift: '<S154>/BitShift11'
     *  ArithShift: '<S154>/BitShift3'
     *  ArithShift: '<S154>/BitShift4'
     *  ArithShift: '<S154>/BitShift5'
     *  ArithShift: '<S154>/BitShift6'
     *  ArithShift: '<S154>/BitShift7'
     *  ArithShift: '<S154>/BitShift8'
     *  ArithShift: '<S154>/BitShift9'
     *  DataTypeConversion: '<S154>/DTConv18'
     *  Inport: '<Root>/VeHTIR_e_HVC_Htr4ClntIn_TempSensFlt'
     *  Inport: '<Root>/VeHTIR_e_HVC_Htr4ClntOut_TempSensFlt'
     *  Inport: '<Root>/VeHTIR_e_HVC_Htr4ClntTemp_OutofRng'
     *  Inport: '<Root>/VeHTIR_e_HVC_Htr4CoreTemp_SensFlt'
     *  Inport: '<Root>/VeHTIR_e_HVC_Htr4DrvFlt'
     *  Inport: '<Root>/VeHTIR_e_HVC_Htr4IntCom_Err'
     *  Inport: '<Root>/VeHTIR_e_HVC_Htr4ProcesMemory_Flt'
     *  Inport: '<Root>/VeHTIR_e_HVC_Htr4Resis_PCB_OvrTemp'
     *  Inport: '<Root>/VeHTIR_e_HVC_Htr4SelfProtect_Actv'
     *  Inport: '<Root>/VeHTIR_e_HVC_Htr4_DCDC_VltgOutofRng'
     *  Inport: '<Root>/VeHTIR_e_HVC_Htr4_HV_CrntOutofRng'
     *  Inport: '<Root>/VeHTIR_e_HVC_Htr4_HV_OutofRng'
     *  Inport: '<Root>/VeHTIR_e_HVC_Htr4_LV_OutofRng'
     *  Inport: '<Root>/VeHTIR_e_HV_ElecClntHtr4_Sts'
     *  S-Function (sfix_bitop): '<S154>/Bitwise'
     *  S-Function (sfix_bitop): '<S154>/Bitwise1'
     *  S-Function (sfix_bitop): '<S154>/Bitwise2'
     *  S-Function (sfix_bitop): '<S154>/Bitwise3'
     *  SignalConversion generated from: '<S154>/VeHTIR_b_HVC_Htr4_LIN_ResErr'
     *  SignalConversion generated from: '<S154>/VeHTIR_e_HVC_Htr4ClntIn_TempSensFlt'
     *  SignalConversion generated from: '<S154>/VeHTIR_e_HVC_Htr4ClntOut_TempSensFlt'
     *  SignalConversion generated from: '<S154>/VeHTIR_e_HVC_Htr4ClntTemp_OutofRng'
     *  SignalConversion generated from: '<S154>/VeHTIR_e_HVC_Htr4CoreTemp_SensFlt'
     *  SignalConversion generated from: '<S154>/VeHTIR_e_HVC_Htr4DrvFlt'
     *  SignalConversion generated from: '<S154>/VeHTIR_e_HVC_Htr4IntCom_Err'
     *  SignalConversion generated from: '<S154>/VeHTIR_e_HVC_Htr4ProcesMemory_Flt'
     *  SignalConversion generated from: '<S154>/VeHTIR_e_HVC_Htr4Resis_PCB_OvrTemp'
     *  SignalConversion generated from: '<S154>/VeHTIR_e_HVC_Htr4SelfProtect_Actv'
     *  SignalConversion generated from: '<S154>/VeHTIR_e_HVC_Htr4_DCDC_VltgOutofRng'
     *  SignalConversion generated from: '<S154>/VeHTIR_e_HVC_Htr4_HV_CrntOutofRng'
     *  SignalConversion generated from: '<S154>/VeHTIR_e_HVC_Htr4_HV_OutofRng'
     *  SignalConversion generated from: '<S154>/VeHTIR_e_HVC_Htr4_LV_OutofRng'
     *  SignalConversion generated from: '<S154>/VeHTIR_e_HV_ElecClntHtr4_Sts'
     */
    Data[2] = (uint8)((((uint8)(tmpRead_1 << 2ULL)) | ((uint8)tmpRead_0)) |
                      ((uint8)(tmpRead_2 << 4ULL)));
    Data[3] = (uint8)(((((uint8)(tmpRead_4 << 2ULL)) | ((uint8)tmpRead_3)) |
                       ((uint8)(tmpRead_5 << 4ULL))) | ((uint8)(tmpRead_6 <<
                        6ULL)));
    Data[4] = (uint8)(((((uint8)(tmpRead_8 << 2ULL)) | ((uint8)tmpRead_7)) |
                       ((uint8)(tmpRead_9 << 4ULL))) | ((uint8)(tmpRead_a <<
                        6ULL)));
    Data[5] = (uint8)((sint32)(((((sint32)((uint8)(tmpRead_c << 3ULL))) |
                         ((sint32)tmpRead_b)) | ((sint32)((uint8)(tmpRead_d <<
                           5ULL)))) | ((tmpRead_e ? 1 : 0) * 128)));

    /* SignalConversion generated from: '<S154>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD4053_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD4055_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[7])
{
    float32 rtb_Add2_ie;
    float32 rtb_Add3_h;
    float32 rtb_Prod4_ec;
    float32 tmpRead_0;
    float32 tmpRead_1;
    uint16 rtb_DTConv4_b_0;
    TeHTIR_e_HVC_HtrSts tmpRead;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeHTIR_T_Htr2CoreTemp' */
    (void)Rte_Read_VeHTIR_T_Htr2CoreTemp_Value(&tmpRead_1);

    /* Inport: '<Root>/VeHTIR_T_Htr2_PCBTemp' */
    (void)Rte_Read_VeHTIR_T_Htr2_PCBTemp_Value(&rtb_Add3_h);

    /* Inport: '<Root>/VeHTIR_P_HVC_Htr2PwrAct' */
    (void)Rte_Read_VeHTIR_P_HVC_Htr2PwrAct_Value(&rtb_Add2_ie);

    /* Inport: '<Root>/VeHTIR_U_HVC_Htr2_HV_VltgAct' */
    (void)Rte_Read_VeHTIR_U_HVC_Htr2_HV_VltgAct_Value(&tmpRead_0);

    /* Inport: '<Root>/VeHTIR_I_HVC_Htr2_HV_CrntAct' */
    (void)Rte_Read_VeHTIR_I_HVC_Htr2_HV_CrntAct_Value(&rtb_Prod4_ec);

    /* Inport: '<Root>/VeHTIR_e_HV_ElecClntHtr2_Sts' */
    (void)Rte_Read_VeHTIR_e_HV_ElecClntHtr2_Sts_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD4055_Data_ReadData' */
    /* Switch: '<S270>/Switch2' incorporates:
     *  Constant: '<S155>/MaxValue'
     *  Constant: '<S155>/MinValue'
     *  RelationalOperator: '<S270>/LowerRelop1'
     *  RelationalOperator: '<S270>/UpperRelop'
     *  SignalConversion generated from: '<S155>/VeHTIR_I_HVC_Htr2_HV_CrntAct'
     *  Switch: '<S270>/Switch'
     */
    if (rtb_Prod4_ec > 63.5F)
    {
        /* Product: '<S155>/Prod4' */
        rtb_Prod4_ec = 63.5F;
    }
    else
    {
        if (rtb_Prod4_ec < 0.0F)
        {
            /* Switch: '<S270>/Switch' incorporates:
             *  Constant: '<S155>/MinValue'
             *  Product: '<S155>/Prod4'
             */
            rtb_Prod4_ec = 0.0F;
        }
    }

    /* End of Switch: '<S270>/Switch2' */

    /* Switch: '<S271>/Switch2' incorporates:
     *  Constant: '<S155>/MaxValue1'
     *  Constant: '<S155>/MinValue1'
     *  RelationalOperator: '<S271>/LowerRelop1'
     *  RelationalOperator: '<S271>/UpperRelop'
     *  SignalConversion generated from: '<S155>/VeHTIR_U_HVC_Htr2_HV_VltgAct'
     *  Switch: '<S271>/Switch'
     */
    if (tmpRead_0 > 1022.0F)
    {
        tmpRead_0 = 1022.0F;
    }
    else
    {
        if (tmpRead_0 < 0.0F)
        {
            /* Switch: '<S271>/Switch' incorporates:
             *  Constant: '<S155>/MinValue1'
             */
            tmpRead_0 = 0.0F;
        }
    }

    /* End of Switch: '<S271>/Switch2' */

    /* DataTypeConversion: '<S155>/DTConv4' */
    tmpRead_0 = roundf(tmpRead_0);
    if (tmpRead_0 < 65536.0F)
    {
        rtb_DTConv4_b_0 = (uint16)tmpRead_0;
    }
    else
    {
        rtb_DTConv4_b_0 = MAX_uint16_T;
    }

    /* Switch: '<S272>/Switch2' incorporates:
     *  Constant: '<S155>/MaxValue2'
     *  Constant: '<S155>/MinValue2'
     *  RelationalOperator: '<S272>/LowerRelop1'
     *  RelationalOperator: '<S272>/UpperRelop'
     *  SignalConversion generated from: '<S155>/VeHTIR_P_HVC_Htr2PwrAct'
     *  Switch: '<S272>/Switch'
     */
    if (rtb_Add2_ie > 150.0F)
    {
        /* Sum: '<S155>/Add2' */
        rtb_Add2_ie = 150.0F;
    }
    else
    {
        if (rtb_Add2_ie < 0.0F)
        {
            /* Switch: '<S272>/Switch' incorporates:
             *  Constant: '<S155>/MinValue2'
             *  Sum: '<S155>/Add2'
             */
            rtb_Add2_ie = 0.0F;
        }
    }

    /* End of Switch: '<S272>/Switch2' */

    /* Switch: '<S273>/Switch2' incorporates:
     *  Constant: '<S155>/MaxValue3'
     *  Constant: '<S155>/MinValue3'
     *  RelationalOperator: '<S273>/LowerRelop1'
     *  RelationalOperator: '<S273>/UpperRelop'
     *  SignalConversion generated from: '<S155>/VeHTIR_T_Htr2_PCBTemp'
     *  Switch: '<S273>/Switch'
     */
    if (rtb_Add3_h > 215.0F)
    {
        rtb_Add3_h = 215.0F;
    }
    else
    {
        if (rtb_Add3_h < -40.0F)
        {
            /* Switch: '<S273>/Switch' incorporates:
             *  Constant: '<S155>/MinValue3'
             */
            rtb_Add3_h = -40.0F;
        }
    }

    /* End of Switch: '<S273>/Switch2' */

    /* SignalConversion generated from: '<S155>/Data' incorporates:
     *  Inport: '<Root>/VeHTIR_e_HV_ElecClntHtr2_Sts'
     *  SignalConversion generated from: '<S155>/VeHTIR_e_HV_ElecClntHtr2_Sts'
     */
    Data[0] = (uint8)tmpRead;

    /* DataTypeConversion: '<S155>/DTConv3' incorporates:
     *  Constant: '<S155>/Factor'
     *  Product: '<S155>/Prod'
     *  Sum: '<S155>/Add'
     */
    tmpRead_0 = roundf(rtb_Prod4_ec / 0.25F);
    if (tmpRead_0 < 256.0F)
    {
        /* SignalConversion generated from: '<S155>/Data' */
        Data[1] = (uint8)tmpRead_0;
    }
    else
    {
        /* SignalConversion generated from: '<S155>/Data' */
        Data[1] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S155>/DTConv3' */

    /* SignalConversion generated from: '<S155>/Data' incorporates:
     *  ArithShift: '<S155>/Bitshift'
     *  DataTypeConversion: '<S155>/DTConv4'
     *  DataTypeConversion: '<S155>/Mux2'
     *  DataTypeConversion: '<S155>/Mux3'
     *  S-Function (sfix_bitop): '<S155>/Bitwise2'
     */
    Data[2] = (uint8)(((uint32)rtb_DTConv4_b_0) >> 8ULL);
    Data[3] = (uint8)(rtb_DTConv4_b_0 & ((uint16)255));

    /* DataTypeConversion: '<S155>/DTConv5' incorporates:
     *  Product: '<S155>/Prod2'
     */
    tmpRead_0 = roundf(rtb_Add2_ie);
    if (tmpRead_0 < 256.0F)
    {
        /* SignalConversion generated from: '<S155>/Data' */
        Data[4] = (uint8)tmpRead_0;
    }
    else
    {
        /* SignalConversion generated from: '<S155>/Data' */
        Data[4] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S155>/DTConv5' */

    /* DataTypeConversion: '<S155>/DTConv6' incorporates:
     *  Constant: '<S155>/Offset3'
     *  Sum: '<S155>/Add3'
     */
    tmpRead_0 = roundf(rtb_Add3_h - -40.0F);
    if (tmpRead_0 < 256.0F)
    {
        /* SignalConversion generated from: '<S155>/Data' */
        Data[5] = (uint8)tmpRead_0;
    }
    else
    {
        /* SignalConversion generated from: '<S155>/Data' */
        Data[5] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S155>/DTConv6' */

    /* Switch: '<S274>/Switch2' incorporates:
     *  Constant: '<S155>/MaxValue4'
     *  Constant: '<S155>/MinValue4'
     *  RelationalOperator: '<S274>/LowerRelop1'
     *  RelationalOperator: '<S274>/UpperRelop'
     *  SignalConversion generated from: '<S155>/VeHTIR_T_Htr2CoreTemp'
     *  Switch: '<S274>/Switch'
     */
    if (tmpRead_1 > 215.0F)
    {
        tmpRead_1 = 215.0F;
    }
    else
    {
        if (tmpRead_1 < -40.0F)
        {
            /* Switch: '<S274>/Switch' incorporates:
             *  Constant: '<S155>/MinValue4'
             */
            tmpRead_1 = -40.0F;
        }
    }

    /* End of Switch: '<S274>/Switch2' */

    /* DataTypeConversion: '<S155>/DTConv7' incorporates:
     *  Constant: '<S155>/Offset4'
     *  Sum: '<S155>/Add4'
     */
    tmpRead_0 = roundf(tmpRead_1 - -40.0F);
    if (tmpRead_0 < 256.0F)
    {
        /* SignalConversion generated from: '<S155>/Data' */
        Data[6] = (uint8)tmpRead_0;
    }
    else
    {
        /* SignalConversion generated from: '<S155>/Data' */
        Data[6] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S155>/DTConv7' */

    /* SignalConversion generated from: '<S155>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD4055_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD4056_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[4])
{
    TeHTIR_e_HVC_Htr_Warning tmpRead_0;
    TeHTIR_e_HVC_Htr_Warning tmpRead_1;
    TeHTIR_e_HVC_Htr_Warning tmpRead_2;
    TeHTIR_e_HVC_Htr_Warning tmpRead_3;
    TeHTIR_e_HVC_Htr_Warning tmpRead_4;
    TeHTIR_e_HVC_Htr_Warning tmpRead_5;
    TeHTIR_e_HVC_Htr_Warning tmpRead_6;
    TeHTIR_e_HVC_Htr_Warning tmpRead_7;
    TeHTIR_e_HVC_Htr_Warning tmpRead_8;
    TeHTIR_e_HVC_Htr_Warning tmpRead_9;
    TeHTIR_e_HVC_Htr_Warning tmpRead_a;
    TeHTIR_e_HVC_Htr_Warning tmpRead_b;
    TeHTIR_e_HVC_Htr_Warning tmpRead_c;
    boolean tmpRead;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeHTIR_e_HVC_Htr2Core_OvrTmp' */
    (void)Rte_Read_VeHTIR_e_HVC_Htr2Core_OvrTmp_Value(&tmpRead_c);

    /* Inport: '<Root>/VeHTIR_e_HVC_Htr2Resis_PCB_OvrTemp' */
    (void)Rte_Read_VeHTIR_e_HVC_Htr2Resis_PCB_OvrTemp_Value(&tmpRead_b);

    /* Inport: '<Root>/VeHTIR_e_HVC_Htr2CoreTemp_SensFlt' */
    (void)Rte_Read_VeHTIR_e_HVC_Htr2CoreTemp_SensFlt_Value(&tmpRead_a);

    /* Inport: '<Root>/VeHTIR_e_HVC_Htr2ProcesMemory_Flt' */
    (void)Rte_Read_VeHTIR_e_HVC_Htr2ProcesMemory_Flt_Value(&tmpRead_9);

    /* Inport: '<Root>/VeHTIR_e_HVC_Htr2HVCrnt_SnsrFlt' */
    (void)Rte_Read_VeHTIR_e_HVC_Htr2HVCrnt_SnsrFlt_Value(&tmpRead_8);

    /* Inport: '<Root>/VeHTIR_e_HVC_Htr2DrvFlt' */
    (void)Rte_Read_VeHTIR_e_HVC_Htr2DrvFlt_Value(&tmpRead_7);

    /* Inport: '<Root>/VeHTIR_e_HVC_Htr2PCBTmp_SnsrFlt' */
    (void)Rte_Read_VeHTIR_e_HVC_Htr2PCBTmp_SnsrFlt_Value(&tmpRead_6);

    /* Inport: '<Root>/VeHTIR_e_HVC_Htr2SelfProtect_Actv' */
    (void)Rte_Read_VeHTIR_e_HVC_Htr2SelfProtect_Actv_Value(&tmpRead_5);

    /* Inport: '<Root>/VeHTIR_e_HVC_Htr2_HV_CrntOutofRng' */
    (void)Rte_Read_VeHTIR_e_HVC_Htr2_HV_CrntOutofRng_Value(&tmpRead_4);

    /* Inport: '<Root>/VeHTIR_e_HVC_Htr2TmpOvrheatg' */
    (void)Rte_Read_VeHTIR_e_HVC_Htr2TmpOvrheatg_Value(&tmpRead_3);

    /* Inport: '<Root>/VeHTIR_e_HVC_Htr2_LV_OutofRng' */
    (void)Rte_Read_VeHTIR_e_HVC_Htr2_LV_OutofRng_Value(&tmpRead_2);

    /* Inport: '<Root>/VeHTIR_e_HVC_Htr2_HV_OutofRng' */
    (void)Rte_Read_VeHTIR_e_HVC_Htr2_HV_OutofRng_Value(&tmpRead_1);

    /* Inport: '<Root>/VeHTIR_e_HVC_Htr2IntCom_Err' */
    (void)Rte_Read_VeHTIR_e_HVC_Htr2IntCom_Err_Value(&tmpRead_0);

    /* Inport: '<Root>/VeHTIR_b_HVC_Htr2_LIN_ResErr' */
    (void)Rte_Read_VeHTIR_b_HVC_Htr2_LIN_ResErr_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD4056_Data_ReadData' */
    /* SignalConversion generated from: '<S156>/Data' incorporates:
     *  ArithShift: '<S156>/BitShift'
     *  ArithShift: '<S156>/BitShift1'
     *  ArithShift: '<S156>/BitShift10'
     *  ArithShift: '<S156>/BitShift2'
     *  ArithShift: '<S156>/BitShift4'
     *  ArithShift: '<S156>/BitShift5'
     *  ArithShift: '<S156>/BitShift6'
     *  ArithShift: '<S156>/BitShift7'
     *  ArithShift: '<S156>/BitShift8'
     *  ArithShift: '<S156>/BitShift9'
     *  DataTypeConversion: '<S156>/DTConv'
     *  Inport: '<Root>/VeHTIR_e_HVC_Htr2CoreTemp_SensFlt'
     *  Inport: '<Root>/VeHTIR_e_HVC_Htr2Core_OvrTmp'
     *  Inport: '<Root>/VeHTIR_e_HVC_Htr2DrvFlt'
     *  Inport: '<Root>/VeHTIR_e_HVC_Htr2HVCrnt_SnsrFlt'
     *  Inport: '<Root>/VeHTIR_e_HVC_Htr2IntCom_Err'
     *  Inport: '<Root>/VeHTIR_e_HVC_Htr2PCBTmp_SnsrFlt'
     *  Inport: '<Root>/VeHTIR_e_HVC_Htr2ProcesMemory_Flt'
     *  Inport: '<Root>/VeHTIR_e_HVC_Htr2Resis_PCB_OvrTemp'
     *  Inport: '<Root>/VeHTIR_e_HVC_Htr2SelfProtect_Actv'
     *  Inport: '<Root>/VeHTIR_e_HVC_Htr2TmpOvrheatg'
     *  Inport: '<Root>/VeHTIR_e_HVC_Htr2_HV_CrntOutofRng'
     *  Inport: '<Root>/VeHTIR_e_HVC_Htr2_HV_OutofRng'
     *  Inport: '<Root>/VeHTIR_e_HVC_Htr2_LV_OutofRng'
     *  S-Function (sfix_bitop): '<S156>/Bitwise'
     *  S-Function (sfix_bitop): '<S156>/Bitwise1'
     *  S-Function (sfix_bitop): '<S156>/Bitwise2'
     *  S-Function (sfix_bitop): '<S156>/Bitwise3'
     *  SignalConversion generated from: '<S156>/VeHTIR_b_HVC_Htr2_LIN_ResErr'
     *  SignalConversion generated from: '<S156>/VeHTIR_e_HVC_Htr2CoreTemp_SensFlt'
     *  SignalConversion generated from: '<S156>/VeHTIR_e_HVC_Htr2Core_OvrTmp'
     *  SignalConversion generated from: '<S156>/VeHTIR_e_HVC_Htr2DrvFlt'
     *  SignalConversion generated from: '<S156>/VeHTIR_e_HVC_Htr2HVCrnt_SnsrFlt'
     *  SignalConversion generated from: '<S156>/VeHTIR_e_HVC_Htr2IntCom_Err'
     *  SignalConversion generated from: '<S156>/VeHTIR_e_HVC_Htr2PCBTmp_SnsrFlt'
     *  SignalConversion generated from: '<S156>/VeHTIR_e_HVC_Htr2ProcesMemory_Flt'
     *  SignalConversion generated from: '<S156>/VeHTIR_e_HVC_Htr2Resis_PCB_OvrTemp'
     *  SignalConversion generated from: '<S156>/VeHTIR_e_HVC_Htr2SelfProtect_Actv'
     *  SignalConversion generated from: '<S156>/VeHTIR_e_HVC_Htr2TmpOvrheatg'
     *  SignalConversion generated from: '<S156>/VeHTIR_e_HVC_Htr2_HV_CrntOutofRng'
     *  SignalConversion generated from: '<S156>/VeHTIR_e_HVC_Htr2_HV_OutofRng'
     *  SignalConversion generated from: '<S156>/VeHTIR_e_HVC_Htr2_LV_OutofRng'
     */
    Data[0] = (uint8)(((((uint8)(tmpRead_0 << 1ULL)) | (tmpRead ? ((uint8)1) :
                         ((uint8)0))) | ((uint8)(tmpRead_1 << 3ULL))) | ((uint8)
                       (tmpRead_2 << 5ULL)));
    Data[1] = (uint8)(((((uint8)(tmpRead_4 << 2ULL)) | ((uint8)tmpRead_3)) |
                       ((uint8)(tmpRead_5 << 4ULL))) | ((uint8)(tmpRead_6 <<
                        6ULL)));
    Data[2] = (uint8)(((((uint8)(tmpRead_8 << 2ULL)) | ((uint8)tmpRead_7)) |
                       ((uint8)(tmpRead_9 << 4ULL))) | ((uint8)(tmpRead_a <<
                        6ULL)));
    Data[3] = (uint8)(((uint8)(tmpRead_c << 2ULL)) | ((uint8)tmpRead_b));

    /* SignalConversion generated from: '<S156>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD4056_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD6360_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    TeHMIR_e_HEV_LMP tmpRead;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeHMIR_e_HEV_LMP_RQ' */
    (void)Rte_Read_VeHMIR_e_HEV_LMP_RQ_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD6360_Data_ReadData' */
    /* SignalConversion generated from: '<S157>/Data' incorporates:
     *  Inport: '<Root>/VeHMIR_e_HEV_LMP_RQ'
     *  SignalConversion generated from: '<S157>/VeHMIR_e_HEV_LMP_RQ'
     */
    *Data = (uint8)tmpRead;

    /* SignalConversion generated from: '<S157>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD6360_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RD9EED_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    /* local block i/o variables */
    TePLTR_e_ShipingMode rtb_TmpLatchAtVePLTR_e_Shippi_e;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RD9EED_Data_ReadData' */
    /* SignalConversion generated from: '<S158>/VePLTR_e_ShippingMode' incorporates:
     *  Inport: '<Root>/VePLTR_e_ShippingMode'
     */
    (void)Rte_Read_VePLTR_e_ShippingMode_Value(&rtb_TmpLatchAtVePLTR_e_Shippi_e);

    /* SignalConversion generated from: '<S158>/Data' incorporates:
     *  DataTypeConversion: '<S158>/DTConv'
     *  SignalConversion generated from: '<S158>/VePLTR_e_ShippingMode'
     */
    *Data = (uint8)rtb_TmpLatchAtVePLTR_e_Shippi_e;

    /* SignalConversion generated from: '<S158>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RD9EED_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RDB000_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[4])
{
    uint8 tmpRead;
    uint8 tmpRead_0;
    uint8 tmpRead_1;
    uint8 tmpRead_2;
    uint8 tmpRead_3;
    uint8 tmpRead_4;
    uint8 tmpRead_5;
    uint8 tmpRead_6;
    uint8 tmpRead_7;
    uint8 tmpRead_8;
    uint8 tmpRead_9;
    uint8 tmpRead_a;
    uint8 tmpRead_b;
    uint8 tmpRead_c;
    uint8 tmpRead_d;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeRGNR_g_RollTestOBDStatus_BIT7' */
    (void)Rte_Read_VeRGNR_g_RollTestOBDStatus_BIT7_Value(&tmpRead_d);

    /* Inport: '<Root>/VeRGNR_g_RollTestOBDStatus_BIT6' */
    (void)Rte_Read_VeRGNR_g_RollTestOBDStatus_BIT6_Value(&tmpRead_c);

    /* Inport: '<Root>/VeRGNR_g_RollTestOBDStatus_BIT5' */
    (void)Rte_Read_VeRGNR_g_RollTestOBDStatus_BIT5_Value(&tmpRead_b);

    /* Inport: '<Root>/VeRGNR_g_RollTestOBDStatus_BIT4' */
    (void)Rte_Read_VeRGNR_g_RollTestOBDStatus_BIT4_Value(&tmpRead_a);

    /* Inport: '<Root>/VeRGNR_g_RollTestOBDStatus_BIT3' */
    (void)Rte_Read_VeRGNR_g_RollTestOBDStatus_BIT3_Value(&tmpRead_9);

    /* Inport: '<Root>/VeRGNR_g_RollTestOBDStatus_BIT2' */
    (void)Rte_Read_VeRGNR_g_RollTestOBDStatus_BIT2_Value(&tmpRead_8);

    /* Inport: '<Root>/VeRGNR_g_RollTestOBDStatus_BIT1' */
    (void)Rte_Read_VeRGNR_g_RollTestOBDStatus_BIT1_Value(&tmpRead_7);

    /* Inport: '<Root>/VeRGNR_g_RollTestOBDStatus_BIT0' */
    (void)Rte_Read_VeRGNR_g_RollTestOBDStatus_BIT0_Value(&tmpRead_6);

    /* Inport: '<Root>/VeRGNR_b_RollTestStatus_PID_BIT6' */
    (void)Rte_Read_VeRGNR_b_RollTestStatus_PID_BIT6_Value(&tmpRead_5);

    /* Inport: '<Root>/VeRGNR_b_RollTestStatus_PID_BIT5' */
    (void)Rte_Read_VeRGNR_b_RollTestStatus_PID_BIT5_Value(&tmpRead_4);

    /* Inport: '<Root>/VeRGNR_b_RollTestStatus_PID_BIT4' */
    (void)Rte_Read_VeRGNR_b_RollTestStatus_PID_BIT4_Value(&tmpRead_3);

    /* Inport: '<Root>/VeRGNR_b_RollTestStatus_PID_BIT3' */
    (void)Rte_Read_VeRGNR_b_RollTestStatus_PID_BIT3_Value(&tmpRead_2);

    /* Inport: '<Root>/VeRGNR_b_RollTestStatus_PID_BIT2' */
    (void)Rte_Read_VeRGNR_b_RollTestStatus_PID_BIT2_Value(&tmpRead_1);

    /* Inport: '<Root>/VeRGNR_b_RollTestStatus_PID_BIT1' */
    (void)Rte_Read_VeRGNR_b_RollTestStatus_PID_BIT1_Value(&tmpRead_0);

    /* Inport: '<Root>/VeRGNR_b_RollTestStatus_PID_BIT0' */
    (void)Rte_Read_VeRGNR_b_RollTestStatus_PID_BIT0_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RDB000_Data_ReadData' */
    /* SignalConversion generated from: '<S159>/Data' incorporates:
     *  ArithShift: '<S159>/BitShift'
     *  ArithShift: '<S159>/BitShift1'
     *  ArithShift: '<S159>/BitShift10'
     *  ArithShift: '<S159>/BitShift11'
     *  ArithShift: '<S159>/BitShift12'
     *  ArithShift: '<S159>/BitShift13'
     *  ArithShift: '<S159>/BitShift2'
     *  ArithShift: '<S159>/BitShift3'
     *  ArithShift: '<S159>/BitShift4'
     *  ArithShift: '<S159>/BitShift5'
     *  ArithShift: '<S159>/BitShift7'
     *  ArithShift: '<S159>/BitShift8'
     *  ArithShift: '<S159>/BitShift9'
     *  DataTypeConversion: '<S159>/DTConv1'
     *  S-Function (sfix_bitop): '<S159>/Bitwise'
     *  S-Function (sfix_bitop): '<S159>/Bitwise1'
     *  SignalConversion generated from: '<S159>/VeRGNR_b_RollTestStatus_PID_BIT0'
     *  SignalConversion generated from: '<S159>/VeRGNR_b_RollTestStatus_PID_BIT1'
     *  SignalConversion generated from: '<S159>/VeRGNR_b_RollTestStatus_PID_BIT2'
     *  SignalConversion generated from: '<S159>/VeRGNR_b_RollTestStatus_PID_BIT3'
     *  SignalConversion generated from: '<S159>/VeRGNR_b_RollTestStatus_PID_BIT4'
     *  SignalConversion generated from: '<S159>/VeRGNR_b_RollTestStatus_PID_BIT5'
     *  SignalConversion generated from: '<S159>/VeRGNR_b_RollTestStatus_PID_BIT6'
     *  SignalConversion generated from: '<S159>/VeRGNR_g_RollTestOBDStatus_BIT0'
     *  SignalConversion generated from: '<S159>/VeRGNR_g_RollTestOBDStatus_BIT1'
     *  SignalConversion generated from: '<S159>/VeRGNR_g_RollTestOBDStatus_BIT2'
     *  SignalConversion generated from: '<S159>/VeRGNR_g_RollTestOBDStatus_BIT3'
     *  SignalConversion generated from: '<S159>/VeRGNR_g_RollTestOBDStatus_BIT4'
     *  SignalConversion generated from: '<S159>/VeRGNR_g_RollTestOBDStatus_BIT5'
     *  SignalConversion generated from: '<S159>/VeRGNR_g_RollTestOBDStatus_BIT6'
     *  SignalConversion generated from: '<S159>/VeRGNR_g_RollTestOBDStatus_BIT7'
     */
    Data[0] = (uint8)((((((((uint8)(tmpRead_0 << 1ULL)) | tmpRead) | ((uint8)
                           (tmpRead_1 << 2ULL))) | ((uint8)(tmpRead_2 << 3ULL)))
                        | ((uint8)(tmpRead_3 << 4ULL))) | ((uint8)(tmpRead_4 <<
                         5ULL))) | ((uint8)(tmpRead_5 << 6ULL)));
    Data[1] = (uint8)(((((((((uint8)(tmpRead_7 << 1ULL)) | tmpRead_6) | ((uint8)
                            (tmpRead_8 << 2ULL))) | ((uint8)(tmpRead_9 << 3ULL)))
                         | ((uint8)(tmpRead_a << 4ULL))) | ((uint8)(tmpRead_b <<
                          5ULL))) | ((uint8)(tmpRead_c << 6ULL))) | ((uint8)
                       (tmpRead_d << 7ULL)));
    Data[2] = DCAB_ac_ConstB.Mux3_h;
    Data[3] = DCAB_ac_ConstB.Mux4_h;

    /* SignalConversion generated from: '<S159>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RDB000_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RDB523_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[4])
{
    boolean tmpRead;
    boolean tmpRead_0;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VePMDR_b_IgnRunCrnk' */
    (void)Rte_Read_VePMDR_b_IgnRunCrnk_Value(&tmpRead_0);

    /* Inport: '<Root>/VePWDR_b_HV_VoltTooLow' */
    (void)Rte_Read_VePWDR_b_HV_VoltTooLow_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RDB523_Data_ReadData' */
    /* SignalConversion generated from: '<S160>/Data' incorporates:
     *  ArithShift: '<S160>/BitShift'
     *  DataTypeConversion: '<S160>/DTConv'
     *  DataTypeConversion: '<S160>/DTConv1'
     *  DataTypeConversion: '<S160>/DTConv2'
     *  S-Function (sfix_bitop): '<S160>/Bitwise'
     *  SignalConversion generated from: '<S160>/VePMDR_b_IgnRunCrnk'
     *  SignalConversion generated from: '<S160>/VePWDR_b_HV_VoltTooLow'
     */
    Data[0] = (uint8)((sint32)(((tmpRead_0 ? 1 : 0) * 2) | (tmpRead ? 1 : 0)));
    Data[1] = DCAB_ac_ConstB.Bitwise1_n;
    Data[2] = DCAB_ac_ConstB.Bitwise2_h;
    Data[3] = DCAB_ac_ConstB.Bitwise3_h;

    /* SignalConversion generated from: '<S160>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RDB523_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RDB524_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[4])
{
    uint8 tmpRead;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VePWDR_y_DID_B524' */
    (void)Rte_Read_VePWDR_y_DID_B524_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RDB524_Data_ReadData' */
    /* SignalConversion generated from: '<S161>/Data' incorporates:
     *  ArithShift: '<S161>/BitShift'
     *  ArithShift: '<S161>/BitShift1'
     *  ArithShift: '<S161>/BitShift2'
     *  ArithShift: '<S161>/BitShift3'
     *  DataTypeConversion: '<S161>/DTConv1'
     *  S-Function (sfix_bitop): '<S161>/Bitwise'
     *  SignalConversion generated from: '<S161>/VePWDR_y_DID_B524'
     */
    Data[0] = (uint8)((((((uint8)(tmpRead << 1ULL)) | tmpRead) | ((uint8)
                         (tmpRead << 2ULL))) | ((uint8)(tmpRead << 3ULL))) |
                      ((uint8)(tmpRead << 4ULL)));
    Data[1] = DCAB_ac_ConstB.Bitwise1;
    Data[2] = DCAB_ac_ConstB.Bitwise2;
    Data[3] = DCAB_ac_ConstB.Bitwise3;

    /* SignalConversion generated from: '<S161>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RDB524_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RDB526_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[3])
{
    /* local block i/o variables */
    TeHTIR_e_HVC_HtrSts rtb_TmpLatchAtVeHTIR_e_HV_El_jg;
    boolean tmpRead;
    boolean tmpRead_0;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeHTRR_b_HVC_Htr_CoreTemp_BL' */
    (void)Rte_Read_VeHTRR_b_HVC_Htr_CoreTemp_BL_Value(&tmpRead_0);

    /* Inport: '<Root>/VeHTRR_b_HVC_Htr_HtrClntIn_Temp_BL' */
    (void)Rte_Read_VeHTRR_b_HVC_Htr_HtrClntIn_Temp_BL_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RDB526_Data_ReadData' */
    /* SignalConversion generated from: '<S162>/Data' incorporates:
     *  Inport: '<Root>/VeHTIR_Cnt_HVC_HtrUnlckCntr'
     */
    (void)Rte_Read_VeHTIR_Cnt_HVC_HtrUnlckCntr_Value(&Data[0]);

    /* SignalConversion generated from: '<S162>/VeHTIR_e_HV_ElecClntHtr_Sts' incorporates:
     *  Inport: '<Root>/VeHTIR_e_HV_ElecClntHtr_Sts'
     */
    (void)Rte_Read_VeHTIR_e_HV_ElecClntHtr_Sts_Value
        (&rtb_TmpLatchAtVeHTIR_e_HV_El_jg);

    /* SignalConversion generated from: '<S162>/Data' incorporates:
     *  ArithShift: '<S162>/BitShift'
     *  ArithShift: '<S162>/BitShift1'
     *  DataTypeConversion: '<S162>/DTConv3'
     *  DataTypeConversion: '<S162>/DTConv4'
     *  DataTypeConversion: '<S162>/Mux1'
     *  S-Function (sfix_bitop): '<S162>/Bitwise'
     *  SignalConversion generated from: '<S162>/VeHTIR_e_HV_ElecClntHtr_Sts'
     *  SignalConversion generated from: '<S162>/VeHTRR_b_HVC_Htr_CoreTemp_BL'
     *  SignalConversion generated from: '<S162>/VeHTRR_b_HVC_Htr_HtrClntIn_Temp_BL'
     */
    Data[1] = (uint8)rtb_TmpLatchAtVeHTIR_e_HV_El_jg;
    Data[2] = (uint8)((sint32)(((tmpRead ? 1 : 0) * 2) | ((tmpRead_0 ? 1 : 0) *
                        4)));

    /* SignalConversion generated from: '<S162>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RDB526_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RDB605_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[5])
{
    sint16 tmpRead;
    sint16 tmpRead_0;
    sint16 tmpRead_1;
    sint16 tmpRead_2;
    sint16 tmpRead_3;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeOBCR_K_ChargingFailure5' */
    (void)Rte_Read_VeOBCR_K_ChargingFailure5_Value(&tmpRead_3);

    /* Inport: '<Root>/VeOBCR_K_ChargingFailure4' */
    (void)Rte_Read_VeOBCR_K_ChargingFailure4_Value(&tmpRead_2);

    /* Inport: '<Root>/VeOBCR_K_ChargingFailure3' */
    (void)Rte_Read_VeOBCR_K_ChargingFailure3_Value(&tmpRead_1);

    /* Inport: '<Root>/VeOBCR_K_ChargingFailure2' */
    (void)Rte_Read_VeOBCR_K_ChargingFailure2_Value(&tmpRead_0);

    /* Inport: '<Root>/VeOBCR_K_ChargingFailure1' */
    (void)Rte_Read_VeOBCR_K_ChargingFailure1_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RDB605_Data_ReadData' */
    /* DataTypeConversion: '<S163>/Mux1' incorporates:
     *  SignalConversion generated from: '<S163>/VeOBCR_K_ChargingFailure1'
     */
    if (tmpRead < 0)
    {
        tmpRead = 0;
    }
    else
    {
        if (tmpRead > 255)
        {
            tmpRead = 255;
        }
    }

    /* SignalConversion generated from: '<S163>/Data' incorporates:
     *  DataTypeConversion: '<S163>/Mux1'
     */
    Data[0] = (uint8)tmpRead;

    /* DataTypeConversion: '<S163>/Mux2' incorporates:
     *  SignalConversion generated from: '<S163>/VeOBCR_K_ChargingFailure2'
     */
    if (tmpRead_0 < 0)
    {
        tmpRead_0 = 0;
    }
    else
    {
        if (tmpRead_0 > 255)
        {
            tmpRead_0 = 255;
        }
    }

    /* SignalConversion generated from: '<S163>/Data' incorporates:
     *  DataTypeConversion: '<S163>/Mux2'
     */
    Data[1] = (uint8)tmpRead_0;

    /* DataTypeConversion: '<S163>/Mux3' incorporates:
     *  SignalConversion generated from: '<S163>/VeOBCR_K_ChargingFailure3'
     */
    if (tmpRead_1 < 0)
    {
        tmpRead_1 = 0;
    }
    else
    {
        if (tmpRead_1 > 255)
        {
            tmpRead_1 = 255;
        }
    }

    /* SignalConversion generated from: '<S163>/Data' incorporates:
     *  DataTypeConversion: '<S163>/Mux3'
     */
    Data[2] = (uint8)tmpRead_1;

    /* DataTypeConversion: '<S163>/Mux4' incorporates:
     *  SignalConversion generated from: '<S163>/VeOBCR_K_ChargingFailure4'
     */
    if (tmpRead_2 < 0)
    {
        tmpRead_2 = 0;
    }
    else
    {
        if (tmpRead_2 > 255)
        {
            tmpRead_2 = 255;
        }
    }

    /* SignalConversion generated from: '<S163>/Data' incorporates:
     *  DataTypeConversion: '<S163>/Mux4'
     */
    Data[3] = (uint8)tmpRead_2;

    /* DataTypeConversion: '<S163>/Mux5' incorporates:
     *  SignalConversion generated from: '<S163>/VeOBCR_K_ChargingFailure5'
     */
    if (tmpRead_3 < 0)
    {
        tmpRead_3 = 0;
    }
    else
    {
        if (tmpRead_3 > 255)
        {
            tmpRead_3 = 255;
        }
    }

    /* SignalConversion generated from: '<S163>/Data' incorporates:
     *  DataTypeConversion: '<S163>/Mux5'
     */
    Data[4] = (uint8)tmpRead_3;

    /* SignalConversion generated from: '<S163>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RDB605_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RDB612_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[6])
{
    /* local block i/o variables */
    TeHVTR_e_HV_IntrlkStat rtb_TmpLatchAtVeHTIR_e_HVC_H_nn;
    TeBPCR_e_HVBatIntrlk_InternalStat tmpRead_3;
    TeHVTR_e_HV_IntrlkStat tmpRead;
    TeHVTR_e_HV_IntrlkStat tmpRead_0;
    TeHVTR_e_HV_IntrlkStat tmpRead_1;
    TeHVTR_e_HV_IntrlkStat tmpRead_2;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeBPCR_e_HVBatIntrlkIntrnlStat' */
    (void)Rte_Read_VeBPCR_e_HVBatIntrlkIntrnlStat_Value(&tmpRead_3);

    /* Inport: '<Root>/VeBPCR_e_HV_BatInrlkStat' */
    (void)Rte_Read_VeBPCR_e_HV_BatInrlkStat_Value(&tmpRead_2);

    /* Inport: '<Root>/VeIDCR_e_OBCM_HVILSts' */
    (void)Rte_Read_VeIDCR_e_OBCM_HVILSts_Value(&tmpRead_1);

    /* Inport: '<Root>/VeINVR_e_MCPB_HVILSts' */
    (void)Rte_Read_VeINVR_e_MCPB_HVILSts_Value(&tmpRead_0);

    /* Inport: '<Root>/VeINVR_e_MCPA_HVILSts' */
    (void)Rte_Read_VeINVR_e_MCPA_HVILSts_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RDB612_Data_ReadData' */
    /* SignalConversion generated from: '<S164>/VeHTIR_e_HVC_Htr_InterlockStat' incorporates:
     *  Inport: '<Root>/VeHTIR_e_HVC_Htr_InterlockStat'
     */
    (void)Rte_Read_VeHTIR_e_HVC_Htr_InterlockStat_Value
        (&rtb_TmpLatchAtVeHTIR_e_HVC_H_nn);

    /* SignalConversion generated from: '<S164>/Data' incorporates:
     *  ArithShift: '<S164>/BitShift'
     *  ArithShift: '<S164>/BitShift1'
     *  ArithShift: '<S164>/BitShift2'
     *  ArithShift: '<S164>/BitShift3'
     *  DataTypeConversion: '<S164>/DTConv1'
     *  DataTypeConversion: '<S164>/DTConv9'
     *  Inport: '<Root>/VeBPCR_e_HVBatIntrlkIntrnlStat'
     *  Inport: '<Root>/VeBPCR_e_HV_BatInrlkStat'
     *  Inport: '<Root>/VeIDCR_e_OBCM_HVILSts'
     *  Inport: '<Root>/VeINVR_e_MCPA_HVILSts'
     *  Inport: '<Root>/VeINVR_e_MCPB_HVILSts'
     *  S-Function (sfix_bitop): '<S164>/Bitwise'
     *  S-Function (sfix_bitop): '<S164>/Bitwise2'
     *  SignalConversion generated from: '<S164>/VeBPCR_e_HVBatIntrlkIntrnlStat'
     *  SignalConversion generated from: '<S164>/VeBPCR_e_HV_BatInrlkStat'
     *  SignalConversion generated from: '<S164>/VeHTIR_e_HVC_Htr_InterlockStat'
     *  SignalConversion generated from: '<S164>/VeIDCR_e_OBCM_HVILSts'
     *  SignalConversion generated from: '<S164>/VeINVR_e_MCPA_HVILSts'
     *  SignalConversion generated from: '<S164>/VeINVR_e_MCPB_HVILSts'
     */
    Data[0] = (uint8)(((uint8)(tmpRead_0 << 4ULL)) | ((uint8)tmpRead));
    Data[1] = (uint8)(tmpRead_1 << 4ULL);
    Data[2] = (uint8)(((uint8)(tmpRead_3 << 4ULL)) | ((uint8)tmpRead_2));
    Data[3] = DCAB_ac_ConstB.Mux4_e2;
    Data[4] = (uint8)(tmpRead_2 << 4ULL);
    Data[5] = (uint8)rtb_TmpLatchAtVeHTIR_e_HVC_H_nn;

    /* SignalConversion generated from: '<S164>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RDB612_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RDB613_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[2])
{
    float32 rtb_Prod_m;
    uint16 rtb_DTConv_p4_0;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeIDCR_I_IBS_I_Converted' */
    (void)Rte_Read_VeIDCR_I_IBS_I_Converted_Value(&rtb_Prod_m);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RDB613_Data_ReadData' */
    /* Switch: '<S276>/Switch2' incorporates:
     *  Constant: '<S165>/MaxValue'
     *  Constant: '<S165>/MinValue'
     *  RelationalOperator: '<S276>/LowerRelop1'
     *  RelationalOperator: '<S276>/UpperRelop'
     *  SignalConversion generated from: '<S165>/VeIDCR_I_IBS_I_Converted'
     *  Switch: '<S276>/Switch'
     */
    if (rtb_Prod_m > 1500.0F)
    {
        /* Product: '<S165>/Prod' */
        rtb_Prod_m = 1500.0F;
    }
    else
    {
        if (rtb_Prod_m < -1500.0F)
        {
            /* Switch: '<S276>/Switch' incorporates:
             *  Constant: '<S165>/MinValue'
             *  Product: '<S165>/Prod'
             */
            rtb_Prod_m = -1500.0F;
        }
    }

    /* End of Switch: '<S276>/Switch2' */

    /* DataTypeConversion: '<S165>/DTConv' incorporates:
     *  Constant: '<S165>/Factor'
     *  Constant: '<S165>/Offset'
     *  Product: '<S165>/Prod'
     *  Sum: '<S165>/Add'
     */
    rtb_Prod_m = roundf((rtb_Prod_m - -1500.0F) / 0.045778F);
    if (rtb_Prod_m < 65536.0F)
    {
        rtb_DTConv_p4_0 = (uint16)rtb_Prod_m;
    }
    else
    {
        rtb_DTConv_p4_0 = MAX_uint16_T;
    }

    /* SignalConversion generated from: '<S165>/Data' incorporates:
     *  ArithShift: '<S165>/Bitshift'
     *  DataTypeConversion: '<S165>/DTConv'
     *  DataTypeConversion: '<S165>/Mux'
     *  DataTypeConversion: '<S165>/Mux2'
     *  S-Function (sfix_bitop): '<S165>/Bitwise1'
     */
    Data[0] = (uint8)(((uint32)rtb_DTConv_p4_0) >> 8ULL);
    Data[1] = (uint8)(rtb_DTConv_p4_0 & ((uint16)255));

    /* SignalConversion generated from: '<S165>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RDB613_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RDB614_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[4])
{
    float32 rtb_Prod1;
    float32 tmpRead_7;
    TeTAIR_e_CPV_Calibration_Sts tmpRead_a;
    TeTAIR_e_CPV_Status tmpRead_8;
    boolean tmpRead;
    boolean tmpRead_0;
    boolean tmpRead_1;
    boolean tmpRead_2;
    boolean tmpRead_3;
    boolean tmpRead_4;
    boolean tmpRead_5;
    boolean tmpRead_6;
    boolean tmpRead_9;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeTAIR_e_LTR_BypsVlv_CalSts' */
    (void)Rte_Read_VeTAIR_e_LTR_BypsVlv_CalSts_Value(&tmpRead_a);

    /* Inport: '<Root>/VeTAIR_b_LTR_BypsVlv_RsErr' */
    (void)Rte_Read_VeTAIR_b_LTR_BypsVlv_RsErr_Value(&tmpRead_9);

    /* Inport: '<Root>/VeTAIR_e_LTR_BypsVlv_ErrSts' */
    (void)Rte_Read_VeTAIR_e_LTR_BypsVlv_ErrSts_Value(&tmpRead_8);

    /* Inport: '<Root>/VeTAIR_U_LTR_BypsVlv_MtrVltg' */
    (void)Rte_Read_VeTAIR_U_LTR_BypsVlv_MtrVltg_Value(&tmpRead_7);

    /* Inport: '<Root>/VeTAIR_b_LTR_BypsVlv_Err_SNA' */
    (void)Rte_Read_VeTAIR_b_LTR_BypsVlv_Err_SNA_Value(&tmpRead_6);

    /* Inport: '<Root>/VeTAIR_b_LTR_BypsVlv_BlckPnt' */
    (void)Rte_Read_VeTAIR_b_LTR_BypsVlv_BlckPnt_Value(&tmpRead_5);

    /* Inport: '<Root>/VeTAIR_b_LTR_BypsVlv_MechBrk' */
    (void)Rte_Read_VeTAIR_b_LTR_BypsVlv_MechBrk_Value(&tmpRead_4);

    /* Inport: '<Root>/VeTAIR_b_LTR_BypsVlv_OvrCrnt' */
    (void)Rte_Read_VeTAIR_b_LTR_BypsVlv_OvrCrnt_Value(&tmpRead_3);

    /* Inport: '<Root>/VeTAIR_b_LTR_BypsVlv_OpnLd' */
    (void)Rte_Read_VeTAIR_b_LTR_BypsVlv_OpnLd_Value(&tmpRead_2);

    /* Inport: '<Root>/VeTAIR_b_LTR_BypsVlv_ThrmlWrng' */
    (void)Rte_Read_VeTAIR_b_LTR_BypsVlv_ThrmlWrng_Value(&tmpRead_1);

    /* Inport: '<Root>/VeTAIR_b_LTR_BypsVlv_UndrVltg' */
    (void)Rte_Read_VeTAIR_b_LTR_BypsVlv_UndrVltg_Value(&tmpRead_0);

    /* Inport: '<Root>/VeTAIR_b_LTR_BypsVlv_OvrVltg' */
    (void)Rte_Read_VeTAIR_b_LTR_BypsVlv_OvrVltg_Value(&tmpRead);

    /* Inport: '<Root>/VeTAIR_Pct_LTR_BypsVlv_ActlPstn' */
    (void)Rte_Read_VeTAIR_Pct_LTR_BypsVlv_ActlPstn_Value(&rtb_Prod1);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RDB614_Data_ReadData' */
    /* Switch: '<S277>/Switch2' incorporates:
     *  Constant: '<S166>/MaxValue'
     *  Constant: '<S166>/MinValue'
     *  RelationalOperator: '<S277>/LowerRelop1'
     *  RelationalOperator: '<S277>/UpperRelop'
     *  SignalConversion generated from: '<S166>/VeTAIR_Pct_LTR_BypsVlv_ActlPstn'
     *  Switch: '<S277>/Switch'
     */
    if (rtb_Prod1 > 100.0F)
    {
        /* Product: '<S166>/Prod1' */
        rtb_Prod1 = 100.0F;
    }
    else
    {
        if (rtb_Prod1 < 0.0F)
        {
            /* Switch: '<S277>/Switch' incorporates:
             *  Constant: '<S166>/MinValue'
             *  Product: '<S166>/Prod1'
             */
            rtb_Prod1 = 0.0F;
        }
    }

    /* End of Switch: '<S277>/Switch2' */

    /* DataTypeConversion: '<S166>/DTConv' incorporates:
     *  Constant: '<S166>/Factor'
     *  Product: '<S166>/Prod'
     *  Sum: '<S166>/Add'
     */
    rtb_Prod1 = roundf(rtb_Prod1 / 0.5F);
    if (rtb_Prod1 < 256.0F)
    {
        /* SignalConversion generated from: '<S166>/Data' */
        Data[0] = (uint8)rtb_Prod1;
    }
    else
    {
        /* SignalConversion generated from: '<S166>/Data' */
        Data[0] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S166>/DTConv' */

    /* SignalConversion generated from: '<S166>/Data' incorporates:
     *  ArithShift: '<S166>/BitShift'
     *  ArithShift: '<S166>/BitShift1'
     *  ArithShift: '<S166>/BitShift2'
     *  ArithShift: '<S166>/BitShift3'
     *  ArithShift: '<S166>/BitShift4'
     *  ArithShift: '<S166>/BitShift5'
     *  ArithShift: '<S166>/BitShift6'
     *  DataTypeConversion: '<S166>/DTConv2'
     *  DataTypeConversion: '<S166>/DTConv3'
     *  DataTypeConversion: '<S166>/DTConv4'
     *  DataTypeConversion: '<S166>/DTConv5'
     *  DataTypeConversion: '<S166>/DTConv6'
     *  DataTypeConversion: '<S166>/DTConv7'
     *  DataTypeConversion: '<S166>/DTConv8'
     *  DataTypeConversion: '<S166>/DTConv9'
     *  S-Function (sfix_bitop): '<S166>/Bitwise'
     *  SignalConversion generated from: '<S166>/VeTAIR_b_LTR_BypsVlv_BlckPnt'
     *  SignalConversion generated from: '<S166>/VeTAIR_b_LTR_BypsVlv_Err_SNA'
     *  SignalConversion generated from: '<S166>/VeTAIR_b_LTR_BypsVlv_MechBrk'
     *  SignalConversion generated from: '<S166>/VeTAIR_b_LTR_BypsVlv_OpnLd'
     *  SignalConversion generated from: '<S166>/VeTAIR_b_LTR_BypsVlv_OvrCrnt'
     *  SignalConversion generated from: '<S166>/VeTAIR_b_LTR_BypsVlv_OvrVltg'
     *  SignalConversion generated from: '<S166>/VeTAIR_b_LTR_BypsVlv_ThrmlWrng'
     *  SignalConversion generated from: '<S166>/VeTAIR_b_LTR_BypsVlv_UndrVltg'
     */
    Data[1] = (uint8)((sint32)(((((((((tmpRead_0 ? 1 : 0) * 2) | (tmpRead ? 1 :
        0)) | ((tmpRead_1 ? 1 : 0) * 4)) | ((tmpRead_2 ? 1 : 0) * 8)) |
                          ((tmpRead_3 ? 1 : 0) * 16)) | ((tmpRead_4 ? 1 : 0) *
                          32)) | ((tmpRead_5 ? 1 : 0) * 64)) | ((tmpRead_6 ? 1 :
                         0) * 128)));

    /* Switch: '<S278>/Switch2' incorporates:
     *  Constant: '<S166>/MaxValue1'
     *  Constant: '<S166>/MinValue1'
     *  RelationalOperator: '<S278>/LowerRelop1'
     *  RelationalOperator: '<S278>/UpperRelop'
     *  SignalConversion generated from: '<S166>/VeTAIR_U_LTR_BypsVlv_MtrVltg'
     *  Switch: '<S278>/Switch'
     */
    if (tmpRead_7 > 25.5F)
    {
        tmpRead_7 = 25.5F;
    }
    else
    {
        if (tmpRead_7 < 0.0F)
        {
            /* Switch: '<S278>/Switch' incorporates:
             *  Constant: '<S166>/MinValue1'
             */
            tmpRead_7 = 0.0F;
        }
    }

    /* End of Switch: '<S278>/Switch2' */

    /* DataTypeConversion: '<S166>/DTConv10' incorporates:
     *  Constant: '<S166>/Factor1'
     *  Product: '<S166>/Prod1'
     */
    rtb_Prod1 = roundf(tmpRead_7 / 0.1F);
    if (rtb_Prod1 < 256.0F)
    {
        /* SignalConversion generated from: '<S166>/Data' */
        Data[2] = (uint8)rtb_Prod1;
    }
    else
    {
        /* SignalConversion generated from: '<S166>/Data' */
        Data[2] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S166>/DTConv10' */

    /* SignalConversion generated from: '<S166>/Data' incorporates:
     *  ArithShift: '<S166>/BitShift7'
     *  ArithShift: '<S166>/BitShift8'
     *  DataTypeConversion: '<S166>/DTConv12'
     *  Inport: '<Root>/VeTAIR_e_LTR_BypsVlv_CalSts'
     *  Inport: '<Root>/VeTAIR_e_LTR_BypsVlv_ErrSts'
     *  S-Function (sfix_bitop): '<S166>/Bitwise1'
     *  SignalConversion generated from: '<S166>/VeTAIR_b_LTR_BypsVlv_RsErr'
     *  SignalConversion generated from: '<S166>/VeTAIR_e_LTR_BypsVlv_CalSts'
     *  SignalConversion generated from: '<S166>/VeTAIR_e_LTR_BypsVlv_ErrSts'
     */
    Data[3] = (uint8)((sint32)((((tmpRead_9 ? 1 : 0) * 4) | ((sint32)tmpRead_8))
                       | ((sint32)((uint8)(tmpRead_a << 3ULL)))));

    /* SignalConversion generated from: '<S166>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RDB614_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RDB616_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[4])
{
    float32 rtb_Prod1;
    float32 tmpRead_7;
    TeTAIR_e_CPV_Calibration_Sts tmpRead_a;
    TeTAIR_e_CPV_Status tmpRead_8;
    boolean tmpRead;
    boolean tmpRead_0;
    boolean tmpRead_1;
    boolean tmpRead_2;
    boolean tmpRead_3;
    boolean tmpRead_4;
    boolean tmpRead_5;
    boolean tmpRead_6;
    boolean tmpRead_9;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeTAIR_e_HTL_BypsVlv_CalSts' */
    (void)Rte_Read_VeTAIR_e_HTL_BypsVlv_CalSts_Value(&tmpRead_a);

    /* Inport: '<Root>/VeTAIR_b_HTL_BypsVlv_RsErr' */
    (void)Rte_Read_VeTAIR_b_HTL_BypsVlv_RsErr_Value(&tmpRead_9);

    /* Inport: '<Root>/VeTAIR_e_HTL_BypsVlv_ErrSts' */
    (void)Rte_Read_VeTAIR_e_HTL_BypsVlv_ErrSts_Value(&tmpRead_8);

    /* Inport: '<Root>/VeTAIR_U_HTL_BypsVlv_MtrVltg' */
    (void)Rte_Read_VeTAIR_U_HTL_BypsVlv_MtrVltg_Value(&tmpRead_7);

    /* Inport: '<Root>/VeTAIR_b_HTL_BypsVlv_Err_SNA' */
    (void)Rte_Read_VeTAIR_b_HTL_BypsVlv_Err_SNA_Value(&tmpRead_6);

    /* Inport: '<Root>/VeTAIR_b_HTL_BypsVlv_BlckPnt' */
    (void)Rte_Read_VeTAIR_b_HTL_BypsVlv_BlckPnt_Value(&tmpRead_5);

    /* Inport: '<Root>/VeTAIR_b_HTL_BypsVlv_MechBrk' */
    (void)Rte_Read_VeTAIR_b_HTL_BypsVlv_MechBrk_Value(&tmpRead_4);

    /* Inport: '<Root>/VeTAIR_b_HTL_BypsVlv_OvrCrnt' */
    (void)Rte_Read_VeTAIR_b_HTL_BypsVlv_OvrCrnt_Value(&tmpRead_3);

    /* Inport: '<Root>/VeTAIR_b_HTL_BypsVlv_OpnLd' */
    (void)Rte_Read_VeTAIR_b_HTL_BypsVlv_OpnLd_Value(&tmpRead_2);

    /* Inport: '<Root>/VeTAIR_b_HTL_BypsVlv_ThrmlWrng' */
    (void)Rte_Read_VeTAIR_b_HTL_BypsVlv_ThrmlWrng_Value(&tmpRead_1);

    /* Inport: '<Root>/VeTAIR_b_HTL_BypsVlv_UndrVltg' */
    (void)Rte_Read_VeTAIR_b_HTL_BypsVlv_UndrVltg_Value(&tmpRead_0);

    /* Inport: '<Root>/VeTAIR_b_HTL_BypsVlv_OvrVltg' */
    (void)Rte_Read_VeTAIR_b_HTL_BypsVlv_OvrVltg_Value(&tmpRead);

    /* Inport: '<Root>/VeTAIR_Pct_HTL_BypsVlv_ActlPstn' */
    (void)Rte_Read_VeTAIR_Pct_HTL_BypsVlv_ActlPstn_Value(&rtb_Prod1);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RDB616_Data_ReadData' */
    /* Switch: '<S279>/Switch2' incorporates:
     *  Constant: '<S167>/MaxValue'
     *  Constant: '<S167>/MinValue'
     *  RelationalOperator: '<S279>/LowerRelop1'
     *  RelationalOperator: '<S279>/UpperRelop'
     *  SignalConversion generated from: '<S167>/VeTAIR_Pct_HTL_BypsVlv_ActlPstn'
     *  Switch: '<S279>/Switch'
     */
    if (rtb_Prod1 > 100.0F)
    {
        /* Product: '<S167>/Prod1' */
        rtb_Prod1 = 100.0F;
    }
    else
    {
        if (rtb_Prod1 < 0.0F)
        {
            /* Switch: '<S279>/Switch' incorporates:
             *  Constant: '<S167>/MinValue'
             *  Product: '<S167>/Prod1'
             */
            rtb_Prod1 = 0.0F;
        }
    }

    /* End of Switch: '<S279>/Switch2' */

    /* DataTypeConversion: '<S167>/DTConv' incorporates:
     *  Constant: '<S167>/Factor'
     *  Product: '<S167>/Prod'
     *  Sum: '<S167>/Add'
     */
    rtb_Prod1 = roundf(rtb_Prod1 / 0.5F);
    if (rtb_Prod1 < 256.0F)
    {
        /* SignalConversion generated from: '<S167>/Data' */
        Data[0] = (uint8)rtb_Prod1;
    }
    else
    {
        /* SignalConversion generated from: '<S167>/Data' */
        Data[0] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S167>/DTConv' */

    /* SignalConversion generated from: '<S167>/Data' incorporates:
     *  ArithShift: '<S167>/BitShift'
     *  ArithShift: '<S167>/BitShift1'
     *  ArithShift: '<S167>/BitShift2'
     *  ArithShift: '<S167>/BitShift3'
     *  ArithShift: '<S167>/BitShift4'
     *  ArithShift: '<S167>/BitShift5'
     *  ArithShift: '<S167>/BitShift6'
     *  DataTypeConversion: '<S167>/DTConv2'
     *  DataTypeConversion: '<S167>/DTConv3'
     *  DataTypeConversion: '<S167>/DTConv4'
     *  DataTypeConversion: '<S167>/DTConv5'
     *  DataTypeConversion: '<S167>/DTConv6'
     *  DataTypeConversion: '<S167>/DTConv7'
     *  DataTypeConversion: '<S167>/DTConv8'
     *  DataTypeConversion: '<S167>/DTConv9'
     *  S-Function (sfix_bitop): '<S167>/Bitwise'
     *  SignalConversion generated from: '<S167>/VeTAIR_b_HTL_BypsVlv_BlckPnt'
     *  SignalConversion generated from: '<S167>/VeTAIR_b_HTL_BypsVlv_Err_SNA'
     *  SignalConversion generated from: '<S167>/VeTAIR_b_HTL_BypsVlv_MechBrk'
     *  SignalConversion generated from: '<S167>/VeTAIR_b_HTL_BypsVlv_OpnLd'
     *  SignalConversion generated from: '<S167>/VeTAIR_b_HTL_BypsVlv_OvrCrnt'
     *  SignalConversion generated from: '<S167>/VeTAIR_b_HTL_BypsVlv_OvrVltg'
     *  SignalConversion generated from: '<S167>/VeTAIR_b_HTL_BypsVlv_ThrmlWrng'
     *  SignalConversion generated from: '<S167>/VeTAIR_b_HTL_BypsVlv_UndrVltg'
     */
    Data[1] = (uint8)((sint32)(((((((((tmpRead_0 ? 1 : 0) * 2) | (tmpRead ? 1 :
        0)) | ((tmpRead_1 ? 1 : 0) * 4)) | ((tmpRead_2 ? 1 : 0) * 8)) |
                          ((tmpRead_3 ? 1 : 0) * 16)) | ((tmpRead_4 ? 1 : 0) *
                          32)) | ((tmpRead_5 ? 1 : 0) * 64)) | ((tmpRead_6 ? 1 :
                         0) * 128)));

    /* Switch: '<S280>/Switch2' incorporates:
     *  Constant: '<S167>/MaxValue1'
     *  Constant: '<S167>/MinValue1'
     *  RelationalOperator: '<S280>/LowerRelop1'
     *  RelationalOperator: '<S280>/UpperRelop'
     *  SignalConversion generated from: '<S167>/VeTAIR_U_HTL_BypsVlv_MtrVltg'
     *  Switch: '<S280>/Switch'
     */
    if (tmpRead_7 > 25.5F)
    {
        tmpRead_7 = 25.5F;
    }
    else
    {
        if (tmpRead_7 < 0.0F)
        {
            /* Switch: '<S280>/Switch' incorporates:
             *  Constant: '<S167>/MinValue1'
             */
            tmpRead_7 = 0.0F;
        }
    }

    /* End of Switch: '<S280>/Switch2' */

    /* DataTypeConversion: '<S167>/DTConv10' incorporates:
     *  Constant: '<S167>/Factor1'
     *  Product: '<S167>/Prod1'
     */
    rtb_Prod1 = roundf(tmpRead_7 / 0.1F);
    if (rtb_Prod1 < 256.0F)
    {
        /* SignalConversion generated from: '<S167>/Data' */
        Data[2] = (uint8)rtb_Prod1;
    }
    else
    {
        /* SignalConversion generated from: '<S167>/Data' */
        Data[2] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S167>/DTConv10' */

    /* SignalConversion generated from: '<S167>/Data' incorporates:
     *  ArithShift: '<S167>/BitShift7'
     *  ArithShift: '<S167>/BitShift8'
     *  DataTypeConversion: '<S167>/DTConv12'
     *  Inport: '<Root>/VeTAIR_e_HTL_BypsVlv_CalSts'
     *  Inport: '<Root>/VeTAIR_e_HTL_BypsVlv_ErrSts'
     *  S-Function (sfix_bitop): '<S167>/Bitwise1'
     *  SignalConversion generated from: '<S167>/VeTAIR_b_HTL_BypsVlv_RsErr'
     *  SignalConversion generated from: '<S167>/VeTAIR_e_HTL_BypsVlv_CalSts'
     *  SignalConversion generated from: '<S167>/VeTAIR_e_HTL_BypsVlv_ErrSts'
     */
    Data[3] = (uint8)((sint32)((((tmpRead_9 ? 1 : 0) * 4) | ((sint32)tmpRead_8))
                       | ((sint32)((uint8)(tmpRead_a << 3ULL)))));

    /* SignalConversion generated from: '<S167>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RDB616_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RDB621_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[4])
{
    TeFSCR_e_AGS_PosRq tmpRead;
    TeTAIR_e_AGS_Calibration_Sts tmpRead_0;
    TeTAIR_e_AGS_ErrLIN tmpRead_7;
    boolean tmpRead_1;
    boolean tmpRead_2;
    boolean tmpRead_3;
    boolean tmpRead_4;
    boolean tmpRead_5;
    boolean tmpRead_6;
    boolean tmpRead_8;
    boolean tmpRead_9;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeTAIR_b_AGS_BoostSts' */
    (void)Rte_Read_VeTAIR_b_AGS_BoostSts_Value(&tmpRead_9);

    /* Inport: '<Root>/VeTAIR_b_AGS_ResErr' */
    (void)Rte_Read_VeTAIR_b_AGS_ResErr_Value(&tmpRead_8);

    /* Inport: '<Root>/VeTAIR_e_AGS_ErrFdb' */
    (void)Rte_Read_VeTAIR_e_AGS_ErrFdb_Value(&tmpRead_7);

    /* Inport: '<Root>/VeTAIR_b_AGS_ErrMechBreak' */
    (void)Rte_Read_VeTAIR_b_AGS_ErrMechBreak_Value(&tmpRead_6);

    /* Inport: '<Root>/VeTAIR_b_AGS_ErrMechStuck' */
    (void)Rte_Read_VeTAIR_b_AGS_ErrMechStuck_Value(&tmpRead_5);

    /* Inport: '<Root>/VeTAIR_b_AGS_ErrOverTemp' */
    (void)Rte_Read_VeTAIR_b_AGS_ErrOverTemp_Value(&tmpRead_4);

    /* Inport: '<Root>/VeTAIR_b_AGS_ErrOverVolt' */
    (void)Rte_Read_VeTAIR_b_AGS_ErrOverVolt_Value(&tmpRead_3);

    /* Inport: '<Root>/VeTAIR_b_AGS_ErrUnderVolt' */
    (void)Rte_Read_VeTAIR_b_AGS_ErrUnderVolt_Value(&tmpRead_2);

    /* Inport: '<Root>/VeTAIR_b_AGS_CalibrationActv' */
    (void)Rte_Read_VeTAIR_b_AGS_CalibrationActv_Value(&tmpRead_1);

    /* Inport: '<Root>/VeTAIR_e_AGS_CalibrationSts' */
    (void)Rte_Read_VeTAIR_e_AGS_CalibrationSts_Value(&tmpRead_0);

    /* Inport: '<Root>/VeTAIR_e_AGS_CurrPos' */
    (void)Rte_Read_VeTAIR_e_AGS_CurrPos_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RDB621_Data_ReadData' */
    /* SignalConversion generated from: '<S168>/Data' incorporates:
     *  ArithShift: '<S168>/BitShift'
     *  ArithShift: '<S168>/BitShift1'
     *  ArithShift: '<S168>/BitShift2'
     *  ArithShift: '<S168>/BitShift3'
     *  ArithShift: '<S168>/BitShift4'
     *  ArithShift: '<S168>/BitShift5'
     *  ArithShift: '<S168>/BitShift6'
     *  ArithShift: '<S168>/BitShift7'
     *  ArithShift: '<S168>/BitShift8'
     *  DataTypeConversion: '<S168>/DTConv1'
     *  DataTypeConversion: '<S168>/DTConv10'
     *  DataTypeConversion: '<S168>/DTConv11'
     *  DataTypeConversion: '<S168>/DTConv3'
     *  DataTypeConversion: '<S168>/DTConv4'
     *  DataTypeConversion: '<S168>/DTConv5'
     *  DataTypeConversion: '<S168>/DTConv6'
     *  DataTypeConversion: '<S168>/DTConv7'
     *  DataTypeConversion: '<S168>/DTConv8'
     *  Inport: '<Root>/VeTAIR_e_AGS_CalibrationSts'
     *  Inport: '<Root>/VeTAIR_e_AGS_CurrPos'
     *  Inport: '<Root>/VeTAIR_e_AGS_ErrFdb'
     *  S-Function (sfix_bitop): '<S168>/Bitwise'
     *  S-Function (sfix_bitop): '<S168>/Bitwise1'
     *  SignalConversion generated from: '<S168>/VeTAIR_b_AGS_BoostSts'
     *  SignalConversion generated from: '<S168>/VeTAIR_b_AGS_CalibrationActv'
     *  SignalConversion generated from: '<S168>/VeTAIR_b_AGS_ErrMechBreak'
     *  SignalConversion generated from: '<S168>/VeTAIR_b_AGS_ErrMechStuck'
     *  SignalConversion generated from: '<S168>/VeTAIR_b_AGS_ErrOverTemp'
     *  SignalConversion generated from: '<S168>/VeTAIR_b_AGS_ErrOverVolt'
     *  SignalConversion generated from: '<S168>/VeTAIR_b_AGS_ErrUnderVolt'
     *  SignalConversion generated from: '<S168>/VeTAIR_b_AGS_ResErr'
     *  SignalConversion generated from: '<S168>/VeTAIR_e_AGS_CalibrationSts'
     *  SignalConversion generated from: '<S168>/VeTAIR_e_AGS_CurrPos'
     *  SignalConversion generated from: '<S168>/VeTAIR_e_AGS_ErrFdb'
     */
    Data[0] = (uint8)((sint32)((((((sint32)((uint8)(tmpRead_0 << 4ULL))) |
                          ((sint32)tmpRead)) | ((tmpRead_1 ? 1 : 0) * 32)) |
                        ((tmpRead_2 ? 1 : 0) * 64)) | ((tmpRead_3 ? 1 : 0) * 128)));
    Data[1] = (uint8)((sint32)(((((((tmpRead_5 ? 1 : 0) * 2) | (tmpRead_4 ? 1 :
                            0)) | ((tmpRead_6 ? 1 : 0) * 4)) | ((sint32)((uint8)
                           (tmpRead_7 << 3ULL)))) | ((tmpRead_8 ? 1 : 0) * 32)) |
                       ((tmpRead_9 ? 1 : 0) * 64)));
    Data[2] = DCAB_ac_ConstB.Mux3;
    Data[3] = DCAB_ac_ConstB.Mux4_e;

    /* SignalConversion generated from: '<S168>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RDB621_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RDB622_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[5])
{
    TeFSCR_e_AGS_PosRq tmpRead;
    TeTAIR_e_AGS_Calibration_Sts tmpRead_0;
    TeTAIR_e_AGS_ErrLIN tmpRead_7;
    boolean tmpRead_1;
    boolean tmpRead_2;
    boolean tmpRead_3;
    boolean tmpRead_4;
    boolean tmpRead_5;
    boolean tmpRead_6;
    boolean tmpRead_8;
    boolean tmpRead_9;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeTAIR_b_AGS2_BoostSts' */
    (void)Rte_Read_VeTAIR_b_AGS2_BoostSts_Value(&tmpRead_9);

    /* Inport: '<Root>/VeTAIR_b_AGS2_ResErr' */
    (void)Rte_Read_VeTAIR_b_AGS2_ResErr_Value(&tmpRead_8);

    /* Inport: '<Root>/VeTAIR_e_AGS2_ErrFdb' */
    (void)Rte_Read_VeTAIR_e_AGS2_ErrFdb_Value(&tmpRead_7);

    /* Inport: '<Root>/VeTAIR_b_AGS2_ErrMechBreak' */
    (void)Rte_Read_VeTAIR_b_AGS2_ErrMechBreak_Value(&tmpRead_6);

    /* Inport: '<Root>/VeTAIR_b_AGS2_ErrMechStuck' */
    (void)Rte_Read_VeTAIR_b_AGS2_ErrMechStuck_Value(&tmpRead_5);

    /* Inport: '<Root>/VeTAIR_b_AGS2_ErrOverTemp' */
    (void)Rte_Read_VeTAIR_b_AGS2_ErrOverTemp_Value(&tmpRead_4);

    /* Inport: '<Root>/VeTAIR_b_AGS2_ErrOverVolt' */
    (void)Rte_Read_VeTAIR_b_AGS2_ErrOverVolt_Value(&tmpRead_3);

    /* Inport: '<Root>/VeTAIR_b_AGS2_ErrUnderVolt' */
    (void)Rte_Read_VeTAIR_b_AGS2_ErrUnderVolt_Value(&tmpRead_2);

    /* Inport: '<Root>/VeTAIR_b_AGS2_CalibrationActv' */
    (void)Rte_Read_VeTAIR_b_AGS2_CalibrationActv_Value(&tmpRead_1);

    /* Inport: '<Root>/VeTAIR_e_AGS2_CalibrationSts' */
    (void)Rte_Read_VeTAIR_e_AGS2_CalibrationSts_Value(&tmpRead_0);

    /* Inport: '<Root>/VeTAIR_e_AGS2_CurrPos' */
    (void)Rte_Read_VeTAIR_e_AGS2_CurrPos_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RDB622_Data_ReadData' */
    /* SignalConversion generated from: '<S169>/Data' incorporates:
     *  ArithShift: '<S169>/BitShift'
     *  ArithShift: '<S169>/BitShift1'
     *  ArithShift: '<S169>/BitShift2'
     *  ArithShift: '<S169>/BitShift3'
     *  ArithShift: '<S169>/BitShift4'
     *  ArithShift: '<S169>/BitShift5'
     *  ArithShift: '<S169>/BitShift6'
     *  ArithShift: '<S169>/BitShift7'
     *  ArithShift: '<S169>/BitShift8'
     *  DataTypeConversion: '<S169>/DTConv'
     *  DataTypeConversion: '<S169>/DTConv10'
     *  DataTypeConversion: '<S169>/DTConv11'
     *  DataTypeConversion: '<S169>/DTConv3'
     *  DataTypeConversion: '<S169>/DTConv4'
     *  DataTypeConversion: '<S169>/DTConv5'
     *  DataTypeConversion: '<S169>/DTConv6'
     *  DataTypeConversion: '<S169>/DTConv7'
     *  DataTypeConversion: '<S169>/DTConv8'
     *  Inport: '<Root>/VeTAIR_e_AGS2_CalibrationSts'
     *  Inport: '<Root>/VeTAIR_e_AGS2_CurrPos'
     *  Inport: '<Root>/VeTAIR_e_AGS2_ErrFdb'
     *  S-Function (sfix_bitop): '<S169>/Bitwise'
     *  S-Function (sfix_bitop): '<S169>/Bitwise1'
     *  SignalConversion generated from: '<S169>/VeTAIR_b_AGS2_BoostSts'
     *  SignalConversion generated from: '<S169>/VeTAIR_b_AGS2_CalibrationActv'
     *  SignalConversion generated from: '<S169>/VeTAIR_b_AGS2_ErrMechBreak'
     *  SignalConversion generated from: '<S169>/VeTAIR_b_AGS2_ErrMechStuck'
     *  SignalConversion generated from: '<S169>/VeTAIR_b_AGS2_ErrOverTemp'
     *  SignalConversion generated from: '<S169>/VeTAIR_b_AGS2_ErrOverVolt'
     *  SignalConversion generated from: '<S169>/VeTAIR_b_AGS2_ErrUnderVolt'
     *  SignalConversion generated from: '<S169>/VeTAIR_b_AGS2_ResErr'
     *  SignalConversion generated from: '<S169>/VeTAIR_e_AGS2_CalibrationSts'
     *  SignalConversion generated from: '<S169>/VeTAIR_e_AGS2_CurrPos'
     *  SignalConversion generated from: '<S169>/VeTAIR_e_AGS2_ErrFdb'
     */
    Data[0] = DCAB_ac_ConstB.Mux1;
    Data[1] = (uint8)((sint32)((((((sint32)((uint8)(tmpRead_0 << 4ULL))) |
                          ((sint32)tmpRead)) | ((tmpRead_1 ? 1 : 0) * 32)) |
                        ((tmpRead_2 ? 1 : 0) * 64)) | ((tmpRead_3 ? 1 : 0) * 128)));
    Data[2] = (uint8)((sint32)(((((((tmpRead_5 ? 1 : 0) * 2) | (tmpRead_4 ? 1 :
                            0)) | ((tmpRead_6 ? 1 : 0) * 4)) | ((sint32)((uint8)
                           (tmpRead_7 << 3ULL)))) | ((tmpRead_8 ? 1 : 0) * 32)) |
                       ((tmpRead_9 ? 1 : 0) * 64)));
    Data[3] = DCAB_ac_ConstB.Mux4;
    Data[4] = DCAB_ac_ConstB.Mux5;

    /* SignalConversion generated from: '<S169>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RDB622_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RDB626_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[8])
{
    float32 rtb_Add1_g;
    float32 rtb_Add2_d;
    float32 rtb_Add3_c;
    float32 rtb_Prod4_a;
    float32 tmpRead;
    TeTAPR_e_TransAuxPmp_CrntErr tmpRead_4;
    TeTAPR_e_TransAuxPmp_FalseTrueSNA tmpRead_0;
    TeTAPR_e_TransAuxPmp_FalseTrueSNA tmpRead_2;
    TeTAPR_e_TransAuxPmp_FalseTrueSNA tmpRead_5;
    TeTAPR_e_TransAuxPmp_PostRunCmd tmpRead_8;
    TeTAPR_e_TransAuxPmp_StallEvnt tmpRead_7;
    TeTAPR_e_TransAuxPmp_TmpErr tmpRead_3;
    TeTAPR_e_TransAuxPmp_TrueFalseSNA tmpRead_1;
    TeTAPR_e_TransAuxPmp_VltgtErr tmpRead_6;
    boolean tmpRead_9;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VePMIR_b_TransAuxPumpRespError' */
    (void)Rte_Read_VePMIR_b_TransAuxPumpRespError_Value(&tmpRead_9);

    /* Inport: '<Root>/VePMIR_e_TransAuxPumpPstRnSt' */
    (void)Rte_Read_VePMIR_e_TransAuxPumpPstRnSt_Value(&tmpRead_8);

    /* Inport: '<Root>/VePMIR_e_TransAuxPumpStallEvent' */
    (void)Rte_Read_VePMIR_e_TransAuxPumpStallEvent_Value(&tmpRead_7);

    /* Inport: '<Root>/VePMIR_e_TransAuxPumpVoltageError' */
    (void)Rte_Read_VePMIR_e_TransAuxPumpVoltageError_Value(&tmpRead_6);

    /* Inport: '<Root>/VePMIR_e_TransAuxPumpDryRun' */
    (void)Rte_Read_VePMIR_e_TransAuxPumpDryRun_Value(&tmpRead_5);

    /* Inport: '<Root>/VePMIR_e_TransAuxPumpCurrentError' */
    (void)Rte_Read_VePMIR_e_TransAuxPumpCurrentError_Value(&tmpRead_4);

    /* Inport: '<Root>/VePMIR_e_TransAuxPumpTempError' */
    (void)Rte_Read_VePMIR_e_TransAuxPumpTempError_Value(&tmpRead_3);

    /* Inport: '<Root>/VePMIR_e_TransAuxPumpLmpHM' */
    (void)Rte_Read_VePMIR_e_TransAuxPumpLmpHM_Value(&tmpRead_2);

    /* Inport: '<Root>/VePMIR_e_TransAuxPumpMntrRPM' */
    (void)Rte_Read_VePMIR_e_TransAuxPumpMntrRPM_Value(&tmpRead_1);

    /* Inport: '<Root>/VePMIR_e_TAP_ColdBiasSts' */
    (void)Rte_Read_VePMIR_e_TAP_ColdBiasSts_Value(&tmpRead_0);

    /* Inport: '<Root>/VePMIR_I_TransAuxPumpCurrent' */
    (void)Rte_Read_VePMIR_I_TransAuxPumpCurrent_Value(&tmpRead);

    /* Inport: '<Root>/VePMIR_T_TransAuxPumpTemp' */
    (void)Rte_Read_VePMIR_T_TransAuxPumpTemp_Value(&rtb_Add3_c);

    /* Inport: '<Root>/VePMIR_U_TransAuxPumpVoltage' */
    (void)Rte_Read_VePMIR_U_TransAuxPumpVoltage_Value(&rtb_Add2_d);

    /* Inport: '<Root>/VePMIR_n_AuxPumpSpdAct' */
    (void)Rte_Read_VePMIR_n_AuxPumpSpdAct_Value(&rtb_Add1_g);

    /* Inport: '<Root>/VePMIR_n_TransAuxPump_RPMTgt' */
    (void)Rte_Read_VePMIR_n_TransAuxPump_RPMTgt_Value(&rtb_Prod4_a);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RDB626_Data_ReadData' */
    /* Switch: '<S281>/Switch2' incorporates:
     *  Constant: '<S170>/MaxValue'
     *  Constant: '<S170>/MinValue'
     *  RelationalOperator: '<S281>/LowerRelop1'
     *  RelationalOperator: '<S281>/UpperRelop'
     *  SignalConversion generated from: '<S170>/VePMIR_n_TransAuxPump_RPMTgt'
     *  Switch: '<S281>/Switch'
     */
    if (rtb_Prod4_a > 6096.0F)
    {
        /* Product: '<S170>/Prod4' */
        rtb_Prod4_a = 6096.0F;
    }
    else
    {
        if (rtb_Prod4_a < 0.0F)
        {
            /* Switch: '<S281>/Switch' incorporates:
             *  Constant: '<S170>/MinValue'
             *  Product: '<S170>/Prod4'
             */
            rtb_Prod4_a = 0.0F;
        }
    }

    /* End of Switch: '<S281>/Switch2' */

    /* Switch: '<S282>/Switch2' incorporates:
     *  Constant: '<S170>/MaxValue1'
     *  Constant: '<S170>/MinValue1'
     *  RelationalOperator: '<S282>/LowerRelop1'
     *  RelationalOperator: '<S282>/UpperRelop'
     *  SignalConversion generated from: '<S170>/VePMIR_n_AuxPumpSpdAct'
     *  Switch: '<S282>/Switch'
     */
    if (rtb_Add1_g > 6096.0F)
    {
        /* Sum: '<S170>/Add1' */
        rtb_Add1_g = 6096.0F;
    }
    else
    {
        if (rtb_Add1_g < 0.0F)
        {
            /* Switch: '<S282>/Switch' incorporates:
             *  Constant: '<S170>/MinValue1'
             *  Sum: '<S170>/Add1'
             */
            rtb_Add1_g = 0.0F;
        }
    }

    /* End of Switch: '<S282>/Switch2' */

    /* Switch: '<S283>/Switch2' incorporates:
     *  Constant: '<S170>/MaxValue2'
     *  Constant: '<S170>/MinValue2'
     *  RelationalOperator: '<S283>/LowerRelop1'
     *  RelationalOperator: '<S283>/UpperRelop'
     *  SignalConversion generated from: '<S170>/VePMIR_U_TransAuxPumpVoltage'
     *  Switch: '<S283>/Switch'
     */
    if (rtb_Add2_d > 25.4F)
    {
        /* Sum: '<S170>/Add2' */
        rtb_Add2_d = 25.4F;
    }
    else
    {
        if (rtb_Add2_d < 0.0F)
        {
            /* Switch: '<S283>/Switch' incorporates:
             *  Constant: '<S170>/MinValue2'
             *  Sum: '<S170>/Add2'
             */
            rtb_Add2_d = 0.0F;
        }
    }

    /* End of Switch: '<S283>/Switch2' */

    /* Switch: '<S284>/Switch2' incorporates:
     *  Constant: '<S170>/MaxValue3'
     *  Constant: '<S170>/MinValue3'
     *  RelationalOperator: '<S284>/LowerRelop1'
     *  RelationalOperator: '<S284>/UpperRelop'
     *  SignalConversion generated from: '<S170>/VePMIR_T_TransAuxPumpTemp'
     *  Switch: '<S284>/Switch'
     */
    if (rtb_Add3_c > 205.0F)
    {
        rtb_Add3_c = 205.0F;
    }
    else
    {
        if (rtb_Add3_c < -50.0F)
        {
            /* Switch: '<S284>/Switch' incorporates:
             *  Constant: '<S170>/MinValue3'
             */
            rtb_Add3_c = -50.0F;
        }
    }

    /* End of Switch: '<S284>/Switch2' */

    /* DataTypeConversion: '<S170>/DTConv' incorporates:
     *  Constant: '<S170>/Factor'
     *  Product: '<S170>/Prod'
     *  Sum: '<S170>/Add'
     */
    rtb_Prod4_a = roundf(rtb_Prod4_a / 24.0F);
    if (rtb_Prod4_a < 256.0F)
    {
        /* SignalConversion generated from: '<S170>/Data' */
        Data[0] = (uint8)rtb_Prod4_a;
    }
    else
    {
        /* SignalConversion generated from: '<S170>/Data' */
        Data[0] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S170>/DTConv' */

    /* DataTypeConversion: '<S170>/DTConv2' incorporates:
     *  Constant: '<S170>/Factor1'
     *  Product: '<S170>/Prod1'
     */
    rtb_Prod4_a = roundf(rtb_Add1_g / 24.0F);
    if (rtb_Prod4_a < 256.0F)
    {
        /* SignalConversion generated from: '<S170>/Data' */
        Data[1] = (uint8)rtb_Prod4_a;
    }
    else
    {
        /* SignalConversion generated from: '<S170>/Data' */
        Data[1] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S170>/DTConv2' */

    /* DataTypeConversion: '<S170>/DTConv3' incorporates:
     *  Constant: '<S170>/Factor2'
     *  Product: '<S170>/Prod2'
     */
    rtb_Prod4_a = roundf(rtb_Add2_d / 0.1F);
    if (rtb_Prod4_a < 256.0F)
    {
        /* SignalConversion generated from: '<S170>/Data' */
        Data[2] = (uint8)rtb_Prod4_a;
    }
    else
    {
        /* SignalConversion generated from: '<S170>/Data' */
        Data[2] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S170>/DTConv3' */

    /* DataTypeConversion: '<S170>/DTConv4' incorporates:
     *  Constant: '<S170>/Offset3'
     *  Sum: '<S170>/Add3'
     */
    rtb_Prod4_a = roundf(rtb_Add3_c - -50.0F);
    if (rtb_Prod4_a < 256.0F)
    {
        /* SignalConversion generated from: '<S170>/Data' */
        Data[3] = (uint8)rtb_Prod4_a;
    }
    else
    {
        /* SignalConversion generated from: '<S170>/Data' */
        Data[3] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S170>/DTConv4' */

    /* Switch: '<S285>/Switch2' incorporates:
     *  Constant: '<S170>/MaxValue4'
     *  Constant: '<S170>/MinValue4'
     *  RelationalOperator: '<S285>/LowerRelop1'
     *  RelationalOperator: '<S285>/UpperRelop'
     *  SignalConversion generated from: '<S170>/VePMIR_I_TransAuxPumpCurrent'
     *  Switch: '<S285>/Switch'
     */
    if (tmpRead > 51.0F)
    {
        tmpRead = 51.0F;
    }
    else
    {
        if (tmpRead < 0.0F)
        {
            /* Switch: '<S285>/Switch' incorporates:
             *  Constant: '<S170>/MinValue4'
             */
            tmpRead = 0.0F;
        }
    }

    /* End of Switch: '<S285>/Switch2' */

    /* DataTypeConversion: '<S170>/DTConv5' incorporates:
     *  Constant: '<S170>/Factor4'
     *  Product: '<S170>/Prod4'
     */
    rtb_Prod4_a = roundf(tmpRead / 0.2F);
    if (rtb_Prod4_a < 256.0F)
    {
        /* SignalConversion generated from: '<S170>/Data' */
        Data[4] = (uint8)rtb_Prod4_a;
    }
    else
    {
        /* SignalConversion generated from: '<S170>/Data' */
        Data[4] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S170>/DTConv5' */

    /* SignalConversion generated from: '<S170>/Data' incorporates:
     *  ArithShift: '<S170>/BitShift'
     *  ArithShift: '<S170>/BitShift1'
     *  ArithShift: '<S170>/BitShift2'
     *  ArithShift: '<S170>/BitShift3'
     *  ArithShift: '<S170>/BitShift4'
     *  ArithShift: '<S170>/BitShift5'
     *  ArithShift: '<S170>/BitShift6'
     *  DataTypeConversion: '<S170>/DTConv15'
     *  Inport: '<Root>/VePMIR_e_TAP_ColdBiasSts'
     *  Inport: '<Root>/VePMIR_e_TransAuxPumpCurrentError'
     *  Inport: '<Root>/VePMIR_e_TransAuxPumpDryRun'
     *  Inport: '<Root>/VePMIR_e_TransAuxPumpLmpHM'
     *  Inport: '<Root>/VePMIR_e_TransAuxPumpMntrRPM'
     *  Inport: '<Root>/VePMIR_e_TransAuxPumpPstRnSt'
     *  Inport: '<Root>/VePMIR_e_TransAuxPumpStallEvent'
     *  Inport: '<Root>/VePMIR_e_TransAuxPumpTempError'
     *  Inport: '<Root>/VePMIR_e_TransAuxPumpVoltageError'
     *  S-Function (sfix_bitop): '<S170>/Bitwise'
     *  S-Function (sfix_bitop): '<S170>/Bitwise1'
     *  S-Function (sfix_bitop): '<S170>/Bitwise2'
     *  SignalConversion generated from: '<S170>/VePMIR_b_TransAuxPumpRespError'
     *  SignalConversion generated from: '<S170>/VePMIR_e_TAP_ColdBiasSts'
     *  SignalConversion generated from: '<S170>/VePMIR_e_TransAuxPumpCurrentError'
     *  SignalConversion generated from: '<S170>/VePMIR_e_TransAuxPumpDryRun'
     *  SignalConversion generated from: '<S170>/VePMIR_e_TransAuxPumpLmpHM'
     *  SignalConversion generated from: '<S170>/VePMIR_e_TransAuxPumpMntrRPM'
     *  SignalConversion generated from: '<S170>/VePMIR_e_TransAuxPumpPstRnSt'
     *  SignalConversion generated from: '<S170>/VePMIR_e_TransAuxPumpStallEvent'
     *  SignalConversion generated from: '<S170>/VePMIR_e_TransAuxPumpTempError'
     *  SignalConversion generated from: '<S170>/VePMIR_e_TransAuxPumpVoltageError'
     */
    Data[5] = (uint8)(((((uint8)(tmpRead_1 << 2ULL)) | ((uint8)tmpRead_0)) |
                       ((uint8)(tmpRead_2 << 4ULL))) | ((uint8)(tmpRead_3 <<
                        6ULL)));
    Data[6] = (uint8)(((((uint8)(tmpRead_5 << 2ULL)) | ((uint8)tmpRead_4)) |
                       ((uint8)(tmpRead_6 << 4ULL))) | ((uint8)(tmpRead_7 <<
                        6ULL)));
    Data[7] = (uint8)((sint32)(((tmpRead_9 ? 1 : 0) * 8) | ((sint32)tmpRead_8)));

    /* SignalConversion generated from: '<S170>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RDB626_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RDB627_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    float32 rtb_Prod_m;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VePMIR_T_TransAuxPumpOilTemp' */
    (void)Rte_Read_VePMIR_T_TransAuxPumpOilTemp_Value(&rtb_Prod_m);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RDB627_Data_ReadData' */
    /* Switch: '<S286>/Switch2' incorporates:
     *  Constant: '<S171>/MaxValue'
     *  Constant: '<S171>/MinValue'
     *  RelationalOperator: '<S286>/LowerRelop1'
     *  RelationalOperator: '<S286>/UpperRelop'
     *  SignalConversion generated from: '<S171>/VePMIR_T_TransAuxPumpOilTemp'
     *  Switch: '<S286>/Switch'
     */
    if (rtb_Prod_m > 205.0F)
    {
        /* Product: '<S171>/Prod' */
        rtb_Prod_m = 205.0F;
    }
    else
    {
        if (rtb_Prod_m < -50.0F)
        {
            /* Switch: '<S286>/Switch' incorporates:
             *  Constant: '<S171>/MinValue'
             *  Product: '<S171>/Prod'
             */
            rtb_Prod_m = -50.0F;
        }
    }

    /* End of Switch: '<S286>/Switch2' */

    /* Product: '<S171>/Prod' incorporates:
     *  Constant: '<S171>/Offset'
     *  Sum: '<S171>/Add'
     */
    rtb_Prod_m -= -50.0F;

    /* DataTypeConversion: '<S171>/DTConv' */
    rtb_Prod_m = roundf(rtb_Prod_m);
    if (rtb_Prod_m < 256.0F)
    {
        /* SignalConversion generated from: '<S171>/Data' */
        *Data = (uint8)rtb_Prod_m;
    }
    else
    {
        /* SignalConversion generated from: '<S171>/Data' */
        *Data = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S171>/DTConv' */

    /* SignalConversion generated from: '<S171>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RDB627_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RDB628_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[2])
{
    uint8 rtb_DTConv2;
    uint8 rtb_DTConv_g;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VePMIR_y_TransAuxPmp_TAP_SW_VER' */
    (void)Rte_Read_VePMIR_y_TransAuxPmp_TAP_SW_VER_Value(&rtb_DTConv2);

    /* Inport: '<Root>/VePMIR_y_TransAuxPmp_TAP_HW_VER' */
    (void)Rte_Read_VePMIR_y_TransAuxPmp_TAP_HW_VER_Value(&rtb_DTConv_g);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RDB628_Data_ReadData' */
    /* Switch: '<S287>/Switch2' incorporates:
     *  RelationalOperator: '<S287>/LowerRelop1'
     *  SignalConversion generated from: '<S172>/VePMIR_y_TransAuxPmp_TAP_HW_VER'
     */
    if (((sint32)rtb_DTConv_g) > 254)
    {
        /* DataTypeConversion: '<S172>/DTConv' incorporates:
         *  Constant: '<S172>/MaxValue'
         */
        rtb_DTConv_g = 254U;
    }

    /* End of Switch: '<S287>/Switch2' */

    /* Switch: '<S288>/Switch2' incorporates:
     *  RelationalOperator: '<S288>/LowerRelop1'
     *  SignalConversion generated from: '<S172>/VePMIR_y_TransAuxPmp_TAP_SW_VER'
     */
    if (((sint32)rtb_DTConv2) > 254)
    {
        /* DataTypeConversion: '<S172>/DTConv2' incorporates:
         *  Constant: '<S172>/MaxValue1'
         */
        rtb_DTConv2 = 254U;
    }

    /* End of Switch: '<S288>/Switch2' */

    /* SignalConversion generated from: '<S172>/Data' incorporates:
     *  Sum: '<S172>/Add'
     *  Sum: '<S172>/Add1'
     */
    Data[0] = rtb_DTConv_g;
    Data[1] = rtb_DTConv2;

    /* SignalConversion generated from: '<S172>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RDB628_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RDB629_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[8])
{
    float32 rtb_Add1_j;
    float32 rtb_Add2_i;
    float32 rtb_Add3_g;
    float32 rtb_Prod4_i;
    float32 tmpRead;
    TeTAPR_e_TransAuxPmp_CrntErr tmpRead_4;
    TeTAPR_e_TransAuxPmp_FalseTrueSNA tmpRead_0;
    TeTAPR_e_TransAuxPmp_FalseTrueSNA tmpRead_1;
    TeTAPR_e_TransAuxPmp_FalseTrueSNA tmpRead_2;
    TeTAPR_e_TransAuxPmp_FalseTrueSNA tmpRead_5;
    TeTAPR_e_TransAuxPmp_PostRunCmd tmpRead_8;
    TeTAPR_e_TransAuxPmp_StallEvnt tmpRead_7;
    TeTAPR_e_TransAuxPmp_TmpErr tmpRead_3;
    TeTAPR_e_TransAuxPmp_VltgtErr tmpRead_6;
    boolean tmpRead_9;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VePMIR_b_TransAuxPump2RespError' */
    (void)Rte_Read_VePMIR_b_TransAuxPump2RespError_Value(&tmpRead_9);

    /* Inport: '<Root>/VePMIR_e_TransAuxPump2PstRnSt' */
    (void)Rte_Read_VePMIR_e_TransAuxPump2PstRnSt_Value(&tmpRead_8);

    /* Inport: '<Root>/VePMIR_e_TransAuxPump2StallEvent' */
    (void)Rte_Read_VePMIR_e_TransAuxPump2StallEvent_Value(&tmpRead_7);

    /* Inport: '<Root>/VePMIR_e_TransAuxPump2VoltageError' */
    (void)Rte_Read_VePMIR_e_TransAuxPump2VoltageError_Value(&tmpRead_6);

    /* Inport: '<Root>/VePMIR_e_TransAuxPump2DryRun' */
    (void)Rte_Read_VePMIR_e_TransAuxPump2DryRun_Value(&tmpRead_5);

    /* Inport: '<Root>/VePMIR_e_TransAuxPump2CurrentError' */
    (void)Rte_Read_VePMIR_e_TransAuxPump2CurrentError_Value(&tmpRead_4);

    /* Inport: '<Root>/VePMIR_e_TransAuxPump2TempError' */
    (void)Rte_Read_VePMIR_e_TransAuxPump2TempError_Value(&tmpRead_3);

    /* Inport: '<Root>/VePMIR_e_TransAuxPmp2LmpHM' */
    (void)Rte_Read_VePMIR_e_TransAuxPmp2LmpHM_Value(&tmpRead_2);

    /* Inport: '<Root>/VePMIR_e_TransAuxPump2MntrRPM' */
    (void)Rte_Read_VePMIR_e_TransAuxPump2MntrRPM_Value(&tmpRead_1);

    /* Inport: '<Root>/VePMIR_e_TransAuxPmp2ColdBiasSts' */
    (void)Rte_Read_VePMIR_e_TransAuxPmp2ColdBiasSts_Value(&tmpRead_0);

    /* Inport: '<Root>/VePMIR_I_TransAuxPump2Current' */
    (void)Rte_Read_VePMIR_I_TransAuxPump2Current_Value(&tmpRead);

    /* Inport: '<Root>/VePMIR_T_TransAuxPump2Temp' */
    (void)Rte_Read_VePMIR_T_TransAuxPump2Temp_Value(&rtb_Add3_g);

    /* Inport: '<Root>/VePMIR_U_TransAuxPump2Voltage' */
    (void)Rte_Read_VePMIR_U_TransAuxPump2Voltage_Value(&rtb_Add2_i);

    /* Inport: '<Root>/VePMIR_n_TransAuxPump2SpdAct' */
    (void)Rte_Read_VePMIR_n_TransAuxPump2SpdAct_Value(&rtb_Add1_j);

    /* Inport: '<Root>/VePMIR_n_TransAuxPump2TgtSpd' */
    (void)Rte_Read_VePMIR_n_TransAuxPump2TgtSpd_Value(&rtb_Prod4_i);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RDB629_Data_ReadData' */
    /* Switch: '<S289>/Switch2' incorporates:
     *  Constant: '<S173>/MaxValue'
     *  Constant: '<S173>/MinValue'
     *  RelationalOperator: '<S289>/LowerRelop1'
     *  RelationalOperator: '<S289>/UpperRelop'
     *  SignalConversion generated from: '<S173>/VePMIR_n_TransAuxPump2TgtSpd'
     *  Switch: '<S289>/Switch'
     */
    if (rtb_Prod4_i > 6096.0F)
    {
        /* Product: '<S173>/Prod4' */
        rtb_Prod4_i = 6096.0F;
    }
    else
    {
        if (rtb_Prod4_i < 0.0F)
        {
            /* Switch: '<S289>/Switch' incorporates:
             *  Constant: '<S173>/MinValue'
             *  Product: '<S173>/Prod4'
             */
            rtb_Prod4_i = 0.0F;
        }
    }

    /* End of Switch: '<S289>/Switch2' */

    /* Switch: '<S290>/Switch2' incorporates:
     *  Constant: '<S173>/MaxValue1'
     *  Constant: '<S173>/MinValue1'
     *  RelationalOperator: '<S290>/LowerRelop1'
     *  RelationalOperator: '<S290>/UpperRelop'
     *  SignalConversion generated from: '<S173>/VePMIR_n_TransAuxPump2SpdAct'
     *  Switch: '<S290>/Switch'
     */
    if (rtb_Add1_j > 6096.0F)
    {
        /* Sum: '<S173>/Add1' */
        rtb_Add1_j = 6096.0F;
    }
    else
    {
        if (rtb_Add1_j < 0.0F)
        {
            /* Switch: '<S290>/Switch' incorporates:
             *  Constant: '<S173>/MinValue1'
             *  Sum: '<S173>/Add1'
             */
            rtb_Add1_j = 0.0F;
        }
    }

    /* End of Switch: '<S290>/Switch2' */

    /* Switch: '<S291>/Switch2' incorporates:
     *  Constant: '<S173>/MaxValue2'
     *  Constant: '<S173>/MinValue2'
     *  RelationalOperator: '<S291>/LowerRelop1'
     *  RelationalOperator: '<S291>/UpperRelop'
     *  SignalConversion generated from: '<S173>/VePMIR_U_TransAuxPump2Voltage'
     *  Switch: '<S291>/Switch'
     */
    if (rtb_Add2_i > 25.4F)
    {
        /* Sum: '<S173>/Add2' */
        rtb_Add2_i = 25.4F;
    }
    else
    {
        if (rtb_Add2_i < 0.0F)
        {
            /* Switch: '<S291>/Switch' incorporates:
             *  Constant: '<S173>/MinValue2'
             *  Sum: '<S173>/Add2'
             */
            rtb_Add2_i = 0.0F;
        }
    }

    /* End of Switch: '<S291>/Switch2' */

    /* Switch: '<S292>/Switch2' incorporates:
     *  Constant: '<S173>/MaxValue3'
     *  Constant: '<S173>/MinValue3'
     *  RelationalOperator: '<S292>/LowerRelop1'
     *  RelationalOperator: '<S292>/UpperRelop'
     *  SignalConversion generated from: '<S173>/VePMIR_T_TransAuxPump2Temp'
     *  Switch: '<S292>/Switch'
     */
    if (rtb_Add3_g > 205.0F)
    {
        rtb_Add3_g = 205.0F;
    }
    else
    {
        if (rtb_Add3_g < -50.0F)
        {
            /* Switch: '<S292>/Switch' incorporates:
             *  Constant: '<S173>/MinValue3'
             */
            rtb_Add3_g = -50.0F;
        }
    }

    /* End of Switch: '<S292>/Switch2' */

    /* DataTypeConversion: '<S173>/DTConv' incorporates:
     *  Constant: '<S173>/Factor'
     *  Product: '<S173>/Prod'
     *  Sum: '<S173>/Add'
     */
    rtb_Prod4_i = roundf(rtb_Prod4_i / 24.0F);
    if (rtb_Prod4_i < 256.0F)
    {
        /* SignalConversion generated from: '<S173>/Data' */
        Data[0] = (uint8)rtb_Prod4_i;
    }
    else
    {
        /* SignalConversion generated from: '<S173>/Data' */
        Data[0] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S173>/DTConv' */

    /* DataTypeConversion: '<S173>/DTConv2' incorporates:
     *  Constant: '<S173>/Factor1'
     *  Product: '<S173>/Prod1'
     */
    rtb_Prod4_i = roundf(rtb_Add1_j / 24.0F);
    if (rtb_Prod4_i < 256.0F)
    {
        /* SignalConversion generated from: '<S173>/Data' */
        Data[1] = (uint8)rtb_Prod4_i;
    }
    else
    {
        /* SignalConversion generated from: '<S173>/Data' */
        Data[1] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S173>/DTConv2' */

    /* DataTypeConversion: '<S173>/DTConv3' incorporates:
     *  Constant: '<S173>/Factor2'
     *  Product: '<S173>/Prod2'
     */
    rtb_Prod4_i = roundf(rtb_Add2_i / 0.1F);
    if (rtb_Prod4_i < 256.0F)
    {
        /* SignalConversion generated from: '<S173>/Data' */
        Data[2] = (uint8)rtb_Prod4_i;
    }
    else
    {
        /* SignalConversion generated from: '<S173>/Data' */
        Data[2] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S173>/DTConv3' */

    /* DataTypeConversion: '<S173>/DTConv4' incorporates:
     *  Constant: '<S173>/Offset3'
     *  Sum: '<S173>/Add3'
     */
    rtb_Prod4_i = roundf(rtb_Add3_g - -50.0F);
    if (rtb_Prod4_i < 256.0F)
    {
        /* SignalConversion generated from: '<S173>/Data' */
        Data[3] = (uint8)rtb_Prod4_i;
    }
    else
    {
        /* SignalConversion generated from: '<S173>/Data' */
        Data[3] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S173>/DTConv4' */

    /* Switch: '<S293>/Switch2' incorporates:
     *  Constant: '<S173>/MaxValue4'
     *  Constant: '<S173>/MinValue4'
     *  RelationalOperator: '<S293>/LowerRelop1'
     *  RelationalOperator: '<S293>/UpperRelop'
     *  SignalConversion generated from: '<S173>/VePMIR_I_TransAuxPump2Current'
     *  Switch: '<S293>/Switch'
     */
    if (tmpRead > 51.0F)
    {
        tmpRead = 51.0F;
    }
    else
    {
        if (tmpRead < 0.0F)
        {
            /* Switch: '<S293>/Switch' incorporates:
             *  Constant: '<S173>/MinValue4'
             */
            tmpRead = 0.0F;
        }
    }

    /* End of Switch: '<S293>/Switch2' */

    /* DataTypeConversion: '<S173>/DTConv5' incorporates:
     *  Constant: '<S173>/Factor4'
     *  Product: '<S173>/Prod4'
     */
    rtb_Prod4_i = roundf(tmpRead / 0.2F);
    if (rtb_Prod4_i < 256.0F)
    {
        /* SignalConversion generated from: '<S173>/Data' */
        Data[4] = (uint8)rtb_Prod4_i;
    }
    else
    {
        /* SignalConversion generated from: '<S173>/Data' */
        Data[4] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S173>/DTConv5' */

    /* SignalConversion generated from: '<S173>/Data' incorporates:
     *  ArithShift: '<S173>/BitShift'
     *  ArithShift: '<S173>/BitShift1'
     *  ArithShift: '<S173>/BitShift2'
     *  ArithShift: '<S173>/BitShift3'
     *  ArithShift: '<S173>/BitShift4'
     *  ArithShift: '<S173>/BitShift5'
     *  ArithShift: '<S173>/BitShift6'
     *  DataTypeConversion: '<S173>/DTConv15'
     *  Inport: '<Root>/VePMIR_e_TransAuxPmp2ColdBiasSts'
     *  Inport: '<Root>/VePMIR_e_TransAuxPmp2LmpHM'
     *  Inport: '<Root>/VePMIR_e_TransAuxPump2CurrentError'
     *  Inport: '<Root>/VePMIR_e_TransAuxPump2DryRun'
     *  Inport: '<Root>/VePMIR_e_TransAuxPump2MntrRPM'
     *  Inport: '<Root>/VePMIR_e_TransAuxPump2PstRnSt'
     *  Inport: '<Root>/VePMIR_e_TransAuxPump2StallEvent'
     *  Inport: '<Root>/VePMIR_e_TransAuxPump2TempError'
     *  Inport: '<Root>/VePMIR_e_TransAuxPump2VoltageError'
     *  S-Function (sfix_bitop): '<S173>/Bitwise'
     *  S-Function (sfix_bitop): '<S173>/Bitwise1'
     *  S-Function (sfix_bitop): '<S173>/Bitwise2'
     *  SignalConversion generated from: '<S173>/VePMIR_b_TransAuxPump2RespError'
     *  SignalConversion generated from: '<S173>/VePMIR_e_TransAuxPmp2ColdBiasSts'
     *  SignalConversion generated from: '<S173>/VePMIR_e_TransAuxPmp2LmpHM'
     *  SignalConversion generated from: '<S173>/VePMIR_e_TransAuxPump2CurrentError'
     *  SignalConversion generated from: '<S173>/VePMIR_e_TransAuxPump2DryRun'
     *  SignalConversion generated from: '<S173>/VePMIR_e_TransAuxPump2MntrRPM'
     *  SignalConversion generated from: '<S173>/VePMIR_e_TransAuxPump2PstRnSt'
     *  SignalConversion generated from: '<S173>/VePMIR_e_TransAuxPump2StallEvent'
     *  SignalConversion generated from: '<S173>/VePMIR_e_TransAuxPump2TempError'
     *  SignalConversion generated from: '<S173>/VePMIR_e_TransAuxPump2VoltageError'
     */
    Data[5] = (uint8)(((((uint8)(tmpRead_1 << 2ULL)) | ((uint8)tmpRead_0)) |
                       ((uint8)(tmpRead_2 << 4ULL))) | ((uint8)(tmpRead_3 <<
                        6ULL)));
    Data[6] = (uint8)(((((uint8)(tmpRead_5 << 2ULL)) | ((uint8)tmpRead_4)) |
                       ((uint8)(tmpRead_6 << 4ULL))) | ((uint8)(tmpRead_7 <<
                        6ULL)));
    Data[7] = (uint8)((sint32)(((tmpRead_9 ? 1 : 0) * 8) | ((sint32)tmpRead_8)));

    /* SignalConversion generated from: '<S173>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RDB629_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RDB62A_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    float32 rtb_Prod_kx;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VePMIR_T_TransAuxPump2OilTemp' */
    (void)Rte_Read_VePMIR_T_TransAuxPump2OilTemp_Value(&rtb_Prod_kx);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RDB62A_Data_ReadData' */
    /* Switch: '<S294>/Switch2' incorporates:
     *  Constant: '<S174>/MaxValue'
     *  Constant: '<S174>/MinValue'
     *  RelationalOperator: '<S294>/LowerRelop1'
     *  RelationalOperator: '<S294>/UpperRelop'
     *  SignalConversion generated from: '<S174>/VePMIR_T_TransAuxPump2OilTemp'
     *  Switch: '<S294>/Switch'
     */
    if (rtb_Prod_kx > 205.0F)
    {
        /* Product: '<S174>/Prod' */
        rtb_Prod_kx = 205.0F;
    }
    else
    {
        if (rtb_Prod_kx < -50.0F)
        {
            /* Switch: '<S294>/Switch' incorporates:
             *  Constant: '<S174>/MinValue'
             *  Product: '<S174>/Prod'
             */
            rtb_Prod_kx = -50.0F;
        }
    }

    /* End of Switch: '<S294>/Switch2' */

    /* Product: '<S174>/Prod' incorporates:
     *  Constant: '<S174>/Offset'
     *  Sum: '<S174>/Add'
     */
    rtb_Prod_kx -= -50.0F;

    /* DataTypeConversion: '<S174>/DTConv' */
    rtb_Prod_kx = roundf(rtb_Prod_kx);
    if (rtb_Prod_kx < 256.0F)
    {
        /* SignalConversion generated from: '<S174>/Data' */
        *Data = (uint8)rtb_Prod_kx;
    }
    else
    {
        /* SignalConversion generated from: '<S174>/Data' */
        *Data = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S174>/DTConv' */

    /* SignalConversion generated from: '<S174>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RDB62A_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RDB62B_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[2])
{
    uint8 rtb_DTConv2;
    uint8 rtb_DTConv_g;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VePMIR_y_TransAuxPmp2_TAP_SW_VER' */
    (void)Rte_Read_VePMIR_y_TransAuxPmp2_TAP_SW_VER_Value(&rtb_DTConv2);

    /* Inport: '<Root>/VePMIR_y_TransAuxPmp2_TAP_HW_VER' */
    (void)Rte_Read_VePMIR_y_TransAuxPmp2_TAP_HW_VER_Value(&rtb_DTConv_g);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RDB62B_Data_ReadData' */
    /* Switch: '<S295>/Switch2' incorporates:
     *  RelationalOperator: '<S295>/LowerRelop1'
     *  SignalConversion generated from: '<S175>/VePMIR_y_TransAuxPmp2_TAP_HW_VER'
     */
    if (((sint32)rtb_DTConv_g) > 254)
    {
        /* DataTypeConversion: '<S175>/DTConv' incorporates:
         *  Constant: '<S175>/MaxValue'
         */
        rtb_DTConv_g = 254U;
    }

    /* End of Switch: '<S295>/Switch2' */

    /* Switch: '<S296>/Switch2' incorporates:
     *  RelationalOperator: '<S296>/LowerRelop1'
     *  SignalConversion generated from: '<S175>/VePMIR_y_TransAuxPmp2_TAP_SW_VER'
     */
    if (((sint32)rtb_DTConv2) > 254)
    {
        /* DataTypeConversion: '<S175>/DTConv2' incorporates:
         *  Constant: '<S175>/MaxValue1'
         */
        rtb_DTConv2 = 254U;
    }

    /* End of Switch: '<S296>/Switch2' */

    /* SignalConversion generated from: '<S175>/Data' incorporates:
     *  Sum: '<S175>/Add'
     *  Sum: '<S175>/Add1'
     */
    Data[0] = rtb_DTConv_g;
    Data[1] = rtb_DTConv2;

    /* SignalConversion generated from: '<S175>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RDB62B_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RDB630_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[2])
{
    float32 tmpRead_3;
    TeAADR_e_AAD_Calibration_Sts tmpRead_2;
    uint8 tmpRead_8;
    boolean tmpRead;
    boolean tmpRead_0;
    boolean tmpRead_1;
    boolean tmpRead_4;
    boolean tmpRead_5;
    boolean tmpRead_6;
    boolean tmpRead_7;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeAADR_b_AAD_ErrOverTemp' */
    (void)Rte_Read_VeAADR_b_AAD_ErrOverTemp_Value(&tmpRead_7);

    /* Inport: '<Root>/VeAADR_b_AAD_ErrMechStuck' */
    (void)Rte_Read_VeAADR_b_AAD_ErrMechStuck_Value(&tmpRead_6);

    /* Inport: '<Root>/VeAADR_b_AAD_ErrMechBreak' */
    (void)Rte_Read_VeAADR_b_AAD_ErrMechBreak_Value(&tmpRead_5);

    /* Inport: '<Root>/VeAADR_b_AAD_ResErr' */
    (void)Rte_Read_VeAADR_b_AAD_ResErr_Value(&tmpRead_4);

    /* Inport: '<Root>/VeAADR_Pct_AAD_CurrPos' */
    (void)Rte_Read_VeAADR_Pct_AAD_CurrPos_Value(&tmpRead_3);

    /* Inport: '<Root>/VeAADR_e_AAD_CalibrationSts' */
    (void)Rte_Read_VeAADR_e_AAD_CalibrationSts_Value(&tmpRead_2);

    /* Inport: '<Root>/VeAADR_b_AAD_CalibrationActv' */
    (void)Rte_Read_VeAADR_b_AAD_CalibrationActv_Value(&tmpRead_1);

    /* Inport: '<Root>/VeAADR_b_AAD_ErrUnderVolt' */
    (void)Rte_Read_VeAADR_b_AAD_ErrUnderVolt_Value(&tmpRead_0);

    /* Inport: '<Root>/VeAADR_b_AAD_ErrOverVolt' */
    (void)Rte_Read_VeAADR_b_AAD_ErrOverVolt_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RDB630_Data_ReadData' */
    /* DataTypeConversion: '<S176>/DTConv5' incorporates:
     *  SignalConversion generated from: '<S176>/VeAADR_Pct_AAD_CurrPos'
     */
    if (tmpRead_3 < 256.0F)
    {
        if (tmpRead_3 >= 0.0F)
        {
            tmpRead_8 = (uint8)tmpRead_3;
        }
        else
        {
            tmpRead_8 = 0U;
        }
    }
    else
    {
        tmpRead_8 = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S176>/DTConv5' */

    /* SignalConversion generated from: '<S176>/Data' incorporates:
     *  ArithShift: '<S176>/BitShift'
     *  ArithShift: '<S176>/BitShift1'
     *  ArithShift: '<S176>/BitShift10'
     *  ArithShift: '<S176>/BitShift2'
     *  ArithShift: '<S176>/BitShift3'
     *  ArithShift: '<S176>/BitShift7'
     *  ArithShift: '<S176>/BitShift8'
     *  ArithShift: '<S176>/BitShift9'
     *  DataTypeConversion: '<S176>/DTConv'
     *  DataTypeConversion: '<S176>/DTConv10'
     *  DataTypeConversion: '<S176>/DTConv11'
     *  DataTypeConversion: '<S176>/DTConv12'
     *  DataTypeConversion: '<S176>/DTConv13'
     *  DataTypeConversion: '<S176>/DTConv2'
     *  DataTypeConversion: '<S176>/DTConv3'
     *  Inport: '<Root>/VeAADR_e_AAD_CalibrationSts'
     *  S-Function (sfix_bitop): '<S176>/Bitwise'
     *  S-Function (sfix_bitop): '<S176>/Bitwise1'
     *  SignalConversion generated from: '<S176>/VeAADR_b_AAD_CalibrationActv'
     *  SignalConversion generated from: '<S176>/VeAADR_b_AAD_ErrMechBreak'
     *  SignalConversion generated from: '<S176>/VeAADR_b_AAD_ErrMechStuck'
     *  SignalConversion generated from: '<S176>/VeAADR_b_AAD_ErrOverTemp'
     *  SignalConversion generated from: '<S176>/VeAADR_b_AAD_ErrOverVolt'
     *  SignalConversion generated from: '<S176>/VeAADR_b_AAD_ErrUnderVolt'
     *  SignalConversion generated from: '<S176>/VeAADR_b_AAD_ResErr'
     *  SignalConversion generated from: '<S176>/VeAADR_e_AAD_CalibrationSts'
     */
    Data[0] = (uint8)((sint32)((((((tmpRead_0 ? 1 : 0) * 2) | (tmpRead ? 1 : 0))
                         | ((tmpRead_1 ? 1 : 0) * 4)) | ((sint32)((uint8)
                          (tmpRead_2 << 3ULL)))) | ((sint32)((uint8)(tmpRead_8 <<
                          4ULL)))));
    Data[1] = (uint8)((sint32)(((((tmpRead_4 ? 1 : 0) * 16) | ((tmpRead_5 ? 1 :
                           0) * 32)) | ((tmpRead_6 ? 1 : 0) * 64)) | ((tmpRead_7
                         ? 1 : 0) * 128)));

    /* SignalConversion generated from: '<S176>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RDB630_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RDB631_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[10])
{
    /* local block i/o variables */
    float32 rtb_TmpLatchAtVeTAIR_Pct_EXV__p;
    float32 rtb_TmpLatchAtVeTAIR_U_EXV_Su_p;
    float32 rtb_TmpLatchAtVeTAIR_p_EXV_Re_g;
    float32 rtb_TmpLatchAtVeTAIR_T_EXV_Bo_h;
    float32 rtb_TmpLatchAtVeTAIR_T_EXV_Re_d;
    boolean rtb_TmpLatchAtVeTAIR_b_EXV_Ca_o;
    boolean rtb_TmpLatchAtVeTAIR_b_EXV_Rs_d;
    TeTAIR_e_EXV_Status rtb_TmpLatchAtVeTAIR_e_EXV_St_g;
    TeTAIR_e_EXV_ErrorMsg rtb_TmpLatchAtVeTAIR_e_EXV_Er_k;
    TeTAIR_e_EXV_Calibration_Sts rtb_TmpLatchAtVeTAIR_e_EXV_Ca_d;
    float32 tmp;
    uint16 rtb_Bitwise7_o_0;
    uint16 rtb_DTConv12_o_0;
    uint16 rtb_DTConv12_o_1;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RDB631_Data_ReadData' */
    /* SignalConversion generated from: '<S177>/VeTAIR_Pct_EXV_PosAct' incorporates:
     *  Inport: '<Root>/VeTAIR_Pct_EXV_PosAct'
     */
    (void)Rte_Read_VeTAIR_Pct_EXV_PosAct_Value(&rtb_TmpLatchAtVeTAIR_Pct_EXV__p);

    /* SignalConversion generated from: '<S177>/VeTAIR_e_EXV_CalStat' incorporates:
     *  Inport: '<Root>/VeTAIR_e_EXV_CalStat'
     */
    (void)Rte_Read_VeTAIR_e_EXV_CalStat_Value(&rtb_TmpLatchAtVeTAIR_e_EXV_Ca_d);

    /* SignalConversion generated from: '<S177>/VeTAIR_b_EXV_CalRq' incorporates:
     *  Inport: '<Root>/VeTAIR_b_EXV_CalRq'
     */
    (void)Rte_Read_VeTAIR_b_EXV_CalRq_Value(&rtb_TmpLatchAtVeTAIR_b_EXV_Ca_o);

    /* SignalConversion generated from: '<S177>/VeTAIR_b_EXV_RspErr' incorporates:
     *  Inport: '<Root>/VeTAIR_b_EXV_RspErr'
     */
    (void)Rte_Read_VeTAIR_b_EXV_RspErr_Value(&rtb_TmpLatchAtVeTAIR_b_EXV_Rs_d);

    /* SignalConversion generated from: '<S177>/VeTAIR_e_EXV_Sts' incorporates:
     *  Inport: '<Root>/VeTAIR_e_EXV_Sts'
     */
    (void)Rte_Read_VeTAIR_e_EXV_Sts_Value(&rtb_TmpLatchAtVeTAIR_e_EXV_St_g);

    /* SignalConversion generated from: '<S177>/VeTAIR_e_EXV_Err' incorporates:
     *  Inport: '<Root>/VeTAIR_e_EXV_Err'
     */
    (void)Rte_Read_VeTAIR_e_EXV_Err_Value(&rtb_TmpLatchAtVeTAIR_e_EXV_Er_k);

    /* SignalConversion generated from: '<S177>/VeTAIR_U_EXV_SupplyVolt' incorporates:
     *  Inport: '<Root>/VeTAIR_U_EXV_SupplyVolt'
     */
    (void)Rte_Read_VeTAIR_U_EXV_SupplyVolt_Value
        (&rtb_TmpLatchAtVeTAIR_U_EXV_Su_p);

    /* SignalConversion generated from: '<S177>/VeTAIR_p_EXV_RefPress' incorporates:
     *  Inport: '<Root>/VeTAIR_p_EXV_RefPress'
     */
    (void)Rte_Read_VeTAIR_p_EXV_RefPress_Value(&rtb_TmpLatchAtVeTAIR_p_EXV_Re_g);

    /* SignalConversion generated from: '<S177>/VeTAIR_T_EXV_BoardTemp' incorporates:
     *  Inport: '<Root>/VeTAIR_T_EXV_BoardTemp'
     */
    (void)Rte_Read_VeTAIR_T_EXV_BoardTemp_Value(&rtb_TmpLatchAtVeTAIR_T_EXV_Bo_h);

    /* SignalConversion generated from: '<S177>/VeTAIR_T_EXV_RefTemp' incorporates:
     *  Inport: '<Root>/VeTAIR_T_EXV_RefTemp'
     */
    (void)Rte_Read_VeTAIR_T_EXV_RefTemp_Value(&rtb_TmpLatchAtVeTAIR_T_EXV_Re_d);

    /* Switch: '<S297>/Switch2' incorporates:
     *  Constant: '<S177>/MaxValue'
     *  Constant: '<S177>/MinValue'
     *  RelationalOperator: '<S297>/LowerRelop1'
     *  RelationalOperator: '<S297>/UpperRelop'
     *  Switch: '<S297>/Switch'
     */
    if (rtb_TmpLatchAtVeTAIR_Pct_EXV__p > 102.0F)
    {
        tmp = 102.0F;
    }
    else if (rtb_TmpLatchAtVeTAIR_Pct_EXV__p < 0.0F)
    {
        /* Switch: '<S297>/Switch' incorporates:
         *  Constant: '<S177>/MinValue'
         */
        tmp = 0.0F;
    }
    else
    {
        tmp = rtb_TmpLatchAtVeTAIR_Pct_EXV__p;
    }

    /* End of Switch: '<S297>/Switch2' */

    /* DataTypeConversion: '<S177>/DTConv' incorporates:
     *  Constant: '<S177>/Factor'
     *  Product: '<S177>/Prod'
     */
    tmp = roundf(tmp / 0.1F);
    if (tmp < 65536.0F)
    {
        if (tmp >= 0.0F)
        {
            rtb_Bitwise7_o_0 = (uint16)tmp;
        }
        else
        {
            rtb_Bitwise7_o_0 = 0U;
        }
    }
    else
    {
        rtb_Bitwise7_o_0 = MAX_uint16_T;
    }

    /* Switch: '<S299>/Switch2' incorporates:
     *  Constant: '<S177>/MaxValue2'
     *  Constant: '<S177>/MinValue2'
     *  RelationalOperator: '<S299>/LowerRelop1'
     *  RelationalOperator: '<S299>/UpperRelop'
     *  Switch: '<S299>/Switch'
     */
    if (rtb_TmpLatchAtVeTAIR_p_EXV_Re_g > 8192.0F)
    {
        tmp = 8192.0F;
    }
    else if (rtb_TmpLatchAtVeTAIR_p_EXV_Re_g < 0.0F)
    {
        /* Switch: '<S299>/Switch' incorporates:
         *  Constant: '<S177>/MinValue2'
         */
        tmp = 0.0F;
    }
    else
    {
        tmp = rtb_TmpLatchAtVeTAIR_p_EXV_Re_g;
    }

    /* End of Switch: '<S299>/Switch2' */

    /* DataTypeConversion: '<S177>/DTConv10' incorporates:
     *  Constant: '<S177>/Factor2'
     *  Product: '<S177>/Prod2'
     */
    tmp = roundf(tmp / 0.5F);
    if (tmp < 65536.0F)
    {
        if (tmp >= 0.0F)
        {
            rtb_DTConv12_o_1 = (uint16)tmp;
        }
        else
        {
            rtb_DTConv12_o_1 = 0U;
        }
    }
    else
    {
        rtb_DTConv12_o_1 = MAX_uint16_T;
    }

    /* Switch: '<S301>/Switch2' incorporates:
     *  Constant: '<S177>/MaxValue4'
     *  Constant: '<S177>/MinValue4'
     *  RelationalOperator: '<S301>/LowerRelop1'
     *  RelationalOperator: '<S301>/UpperRelop'
     *  Switch: '<S301>/Switch'
     */
    if (rtb_TmpLatchAtVeTAIR_T_EXV_Re_d > 195.0F)
    {
        tmp = 195.0F;
    }
    else if (rtb_TmpLatchAtVeTAIR_T_EXV_Re_d < -10.0F)
    {
        /* Switch: '<S301>/Switch' incorporates:
         *  Constant: '<S177>/MinValue4'
         */
        tmp = -10.0F;
    }
    else
    {
        tmp = rtb_TmpLatchAtVeTAIR_T_EXV_Re_d;
    }

    /* End of Switch: '<S301>/Switch2' */

    /* DataTypeConversion: '<S177>/DTConv12' incorporates:
     *  Constant: '<S177>/Factor4'
     *  Constant: '<S177>/Offset4'
     *  Product: '<S177>/Prod4'
     *  Sum: '<S177>/Add4'
     */
    tmp = roundf((tmp - -10.0F) / 0.1F);
    if (tmp < 65536.0F)
    {
        if (tmp >= 0.0F)
        {
            rtb_DTConv12_o_0 = (uint16)tmp;
        }
        else
        {
            rtb_DTConv12_o_0 = 0U;
        }
    }
    else
    {
        rtb_DTConv12_o_0 = MAX_uint16_T;
    }

    /* SignalConversion generated from: '<S177>/Data' incorporates:
     *  ArithShift: '<S177>/BitShift'
     *  ArithShift: '<S177>/BitShift1'
     *  ArithShift: '<S177>/BitShift2'
     *  ArithShift: '<S177>/Bitshift'
     *  DataTypeConversion: '<S177>/DTConv'
     *  DataTypeConversion: '<S177>/DTConv2'
     *  DataTypeConversion: '<S177>/DTConv3'
     *  DataTypeConversion: '<S177>/DTConv4'
     *  DataTypeConversion: '<S177>/DTConv5'
     *  DataTypeConversion: '<S177>/DTConv7'
     *  DataTypeConversion: '<S177>/Mux'
     *  DataTypeConversion: '<S177>/Mux2'
     *  S-Function (sfix_bitop): '<S177>/Bitwise1'
     *  S-Function (sfix_bitop): '<S177>/Bitwise2'
     *  SignalConversion generated from: '<S177>/VeTAIR_e_EXV_CalStat'
     *  SignalConversion generated from: '<S177>/VeTAIR_e_EXV_Err'
     *  SignalConversion generated from: '<S177>/VeTAIR_e_EXV_Sts'
     */
    Data[0] = (uint8)(((uint32)rtb_Bitwise7_o_0) >> 8ULL);
    Data[1] = (uint8)(rtb_Bitwise7_o_0 & ((uint16)255));
    Data[2] = (uint8)((sint32)(((((rtb_TmpLatchAtVeTAIR_b_EXV_Ca_o ? 1 : 0) * 4)
                         | ((sint32)rtb_TmpLatchAtVeTAIR_e_EXV_Ca_d)) |
                        ((rtb_TmpLatchAtVeTAIR_b_EXV_Rs_d ? 1 : 0) * 8)) |
                       ((sint32)((uint8)(rtb_TmpLatchAtVeTAIR_e_EXV_St_g << 4ULL)))));
    Data[3] = (uint8)rtb_TmpLatchAtVeTAIR_e_EXV_Er_k;

    /* Switch: '<S298>/Switch2' incorporates:
     *  Constant: '<S177>/MaxValue1'
     *  Constant: '<S177>/MinValue1'
     *  RelationalOperator: '<S298>/LowerRelop1'
     *  RelationalOperator: '<S298>/UpperRelop'
     *  Switch: '<S298>/Switch'
     */
    if (rtb_TmpLatchAtVeTAIR_U_EXV_Su_p > 25.5F)
    {
        tmp = 25.5F;
    }
    else if (rtb_TmpLatchAtVeTAIR_U_EXV_Su_p < 0.0F)
    {
        /* Switch: '<S298>/Switch' incorporates:
         *  Constant: '<S177>/MinValue1'
         */
        tmp = 0.0F;
    }
    else
    {
        tmp = rtb_TmpLatchAtVeTAIR_U_EXV_Su_p;
    }

    /* End of Switch: '<S298>/Switch2' */

    /* DataTypeConversion: '<S177>/DTConv9' incorporates:
     *  Constant: '<S177>/Factor1'
     *  Product: '<S177>/Prod1'
     */
    tmp = roundf(tmp / 0.1F);
    if (tmp < 256.0F)
    {
        if (tmp >= 0.0F)
        {
            /* SignalConversion generated from: '<S177>/Data' */
            Data[4] = (uint8)tmp;
        }
        else
        {
            /* SignalConversion generated from: '<S177>/Data' */
            Data[4] = 0U;
        }
    }
    else
    {
        /* SignalConversion generated from: '<S177>/Data' */
        Data[4] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S177>/DTConv9' */

    /* SignalConversion generated from: '<S177>/Data' incorporates:
     *  ArithShift: '<S177>/Bitshift2'
     *  DataTypeConversion: '<S177>/DTConv10'
     *  DataTypeConversion: '<S177>/Mux5'
     *  DataTypeConversion: '<S177>/Mux6'
     *  S-Function (sfix_bitop): '<S177>/Bitwise5'
     */
    Data[5] = (uint8)(((uint32)rtb_DTConv12_o_1) >> 8ULL);
    Data[6] = (uint8)(rtb_DTConv12_o_1 & ((uint16)255));

    /* Switch: '<S300>/Switch2' incorporates:
     *  Constant: '<S177>/MaxValue3'
     *  Constant: '<S177>/MinValue3'
     *  RelationalOperator: '<S300>/LowerRelop1'
     *  RelationalOperator: '<S300>/UpperRelop'
     *  Switch: '<S300>/Switch'
     */
    if (rtb_TmpLatchAtVeTAIR_T_EXV_Bo_h > 215.0F)
    {
        tmp = 215.0F;
    }
    else if (rtb_TmpLatchAtVeTAIR_T_EXV_Bo_h < -40.0F)
    {
        /* Switch: '<S300>/Switch' incorporates:
         *  Constant: '<S177>/MinValue3'
         */
        tmp = -40.0F;
    }
    else
    {
        tmp = rtb_TmpLatchAtVeTAIR_T_EXV_Bo_h;
    }

    /* End of Switch: '<S300>/Switch2' */

    /* DataTypeConversion: '<S177>/DTConv11' incorporates:
     *  Constant: '<S177>/Offset3'
     *  Sum: '<S177>/Add3'
     */
    tmp = roundf(tmp - -40.0F);
    if (tmp < 256.0F)
    {
        if (tmp >= 0.0F)
        {
            /* SignalConversion generated from: '<S177>/Data' */
            Data[7] = (uint8)tmp;
        }
        else
        {
            /* SignalConversion generated from: '<S177>/Data' */
            Data[7] = 0U;
        }
    }
    else
    {
        /* SignalConversion generated from: '<S177>/Data' */
        Data[7] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S177>/DTConv11' */

    /* SignalConversion generated from: '<S177>/Data' incorporates:
     *  ArithShift: '<S177>/Bitshift4'
     *  DataTypeConversion: '<S177>/DTConv12'
     *  DataTypeConversion: '<S177>/Mux7'
     *  DataTypeConversion: '<S177>/Mux8'
     *  S-Function (sfix_bitop): '<S177>/Bitwise7'
     */
    Data[8] = (uint8)(((uint32)rtb_DTConv12_o_0) >> 8ULL);
    Data[9] = (uint8)(rtb_DTConv12_o_0 & ((uint16)255));

    /* SignalConversion generated from: '<S177>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RDB631_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RDB632_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[10])
{
    float32 rtb_Add1_he;
    float32 rtb_Add3_e;
    float32 rtb_Prod4_fm;
    float32 tmpRead_4;
    float32 tmpRead_5;
    uint16 rtb_Bitwise7_ow_0;
    uint16 rtb_DTConv12_h_0;
    uint16 rtb_DTConv12_h_1;
    TeTAIR_e_EXV_Calibration_Sts tmpRead;
    TeTAIR_e_EXV_ErrorMsg tmpRead_3;
    TeTAIR_e_EXV_Status tmpRead_2;
    boolean tmpRead_0;
    boolean tmpRead_1;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeTAIR_T_EEXV_RefTemp' */
    (void)Rte_Read_VeTAIR_T_EEXV_RefTemp_Value(&tmpRead_5);

    /* Inport: '<Root>/VeTAIR_T_EEXV_BoardTemp' */
    (void)Rte_Read_VeTAIR_T_EEXV_BoardTemp_Value(&rtb_Add3_e);

    /* Inport: '<Root>/VeTAIR_p_EEXV_RefPress' */
    (void)Rte_Read_VeTAIR_p_EEXV_RefPress_Value(&tmpRead_4);

    /* Inport: '<Root>/VeTAIR_U_EEXV_SupplyVolt' */
    (void)Rte_Read_VeTAIR_U_EEXV_SupplyVolt_Value(&rtb_Add1_he);

    /* Inport: '<Root>/VeTAIR_e_EEXV_Err' */
    (void)Rte_Read_VeTAIR_e_EEXV_Err_Value(&tmpRead_3);

    /* Inport: '<Root>/VeTAIR_e_EEXV_Sts' */
    (void)Rte_Read_VeTAIR_e_EEXV_Sts_Value(&tmpRead_2);

    /* Inport: '<Root>/VeTAIR_b_EEXV_RspErr' */
    (void)Rte_Read_VeTAIR_b_EEXV_RspErr_Value(&tmpRead_1);

    /* Inport: '<Root>/VeTAIR_b_EEXV_CalRq' */
    (void)Rte_Read_VeTAIR_b_EEXV_CalRq_Value(&tmpRead_0);

    /* Inport: '<Root>/VeTAIR_e_EEXV_CalStat' */
    (void)Rte_Read_VeTAIR_e_EEXV_CalStat_Value(&tmpRead);

    /* Inport: '<Root>/VeTAIR_Pct_EEXV_PosAct' */
    (void)Rte_Read_VeTAIR_Pct_EEXV_PosAct_Value(&rtb_Prod4_fm);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RDB632_Data_ReadData' */
    /* Switch: '<S302>/Switch2' incorporates:
     *  Constant: '<S178>/MaxValue'
     *  Constant: '<S178>/MinValue'
     *  RelationalOperator: '<S302>/LowerRelop1'
     *  RelationalOperator: '<S302>/UpperRelop'
     *  SignalConversion generated from: '<S178>/VeTAIR_Pct_EEXV_PosAct'
     *  Switch: '<S302>/Switch'
     */
    if (rtb_Prod4_fm > 102.0F)
    {
        /* Product: '<S178>/Prod4' */
        rtb_Prod4_fm = 102.0F;
    }
    else
    {
        if (rtb_Prod4_fm < 0.0F)
        {
            /* Switch: '<S302>/Switch' incorporates:
             *  Constant: '<S178>/MinValue'
             *  Product: '<S178>/Prod4'
             */
            rtb_Prod4_fm = 0.0F;
        }
    }

    /* End of Switch: '<S302>/Switch2' */

    /* DataTypeConversion: '<S178>/DTConv' incorporates:
     *  Constant: '<S178>/Factor'
     *  Product: '<S178>/Prod'
     *  Sum: '<S178>/Add'
     */
    rtb_Prod4_fm = roundf(rtb_Prod4_fm / 0.1F);
    if (rtb_Prod4_fm < 65536.0F)
    {
        rtb_Bitwise7_ow_0 = (uint16)rtb_Prod4_fm;
    }
    else
    {
        rtb_Bitwise7_ow_0 = MAX_uint16_T;
    }

    /* Switch: '<S303>/Switch2' incorporates:
     *  Constant: '<S178>/MaxValue1'
     *  Constant: '<S178>/MinValue1'
     *  RelationalOperator: '<S303>/LowerRelop1'
     *  RelationalOperator: '<S303>/UpperRelop'
     *  SignalConversion generated from: '<S178>/VeTAIR_U_EEXV_SupplyVolt'
     *  Switch: '<S303>/Switch'
     */
    if (rtb_Add1_he > 25.5F)
    {
        /* Sum: '<S178>/Add1' */
        rtb_Add1_he = 25.5F;
    }
    else
    {
        if (rtb_Add1_he < 0.0F)
        {
            /* Switch: '<S303>/Switch' incorporates:
             *  Constant: '<S178>/MinValue1'
             *  Sum: '<S178>/Add1'
             */
            rtb_Add1_he = 0.0F;
        }
    }

    /* End of Switch: '<S303>/Switch2' */

    /* Switch: '<S304>/Switch2' incorporates:
     *  Constant: '<S178>/MaxValue2'
     *  Constant: '<S178>/MinValue2'
     *  RelationalOperator: '<S304>/LowerRelop1'
     *  RelationalOperator: '<S304>/UpperRelop'
     *  SignalConversion generated from: '<S178>/VeTAIR_p_EEXV_RefPress'
     *  Switch: '<S304>/Switch'
     */
    if (tmpRead_4 > 8192.0F)
    {
        tmpRead_4 = 8192.0F;
    }
    else
    {
        if (tmpRead_4 < 0.0F)
        {
            /* Switch: '<S304>/Switch' incorporates:
             *  Constant: '<S178>/MinValue2'
             */
            tmpRead_4 = 0.0F;
        }
    }

    /* End of Switch: '<S304>/Switch2' */

    /* DataTypeConversion: '<S178>/DTConv10' incorporates:
     *  Constant: '<S178>/Factor2'
     *  Product: '<S178>/Prod2'
     */
    rtb_Prod4_fm = roundf(tmpRead_4 / 0.5F);
    if (rtb_Prod4_fm < 65536.0F)
    {
        rtb_DTConv12_h_1 = (uint16)rtb_Prod4_fm;
    }
    else
    {
        rtb_DTConv12_h_1 = MAX_uint16_T;
    }

    /* Switch: '<S305>/Switch2' incorporates:
     *  Constant: '<S178>/MaxValue3'
     *  Constant: '<S178>/MinValue3'
     *  RelationalOperator: '<S305>/LowerRelop1'
     *  RelationalOperator: '<S305>/UpperRelop'
     *  SignalConversion generated from: '<S178>/VeTAIR_T_EEXV_BoardTemp'
     *  Switch: '<S305>/Switch'
     */
    if (rtb_Add3_e > 215.0F)
    {
        rtb_Add3_e = 215.0F;
    }
    else
    {
        if (rtb_Add3_e < -40.0F)
        {
            /* Switch: '<S305>/Switch' incorporates:
             *  Constant: '<S178>/MinValue3'
             */
            rtb_Add3_e = -40.0F;
        }
    }

    /* End of Switch: '<S305>/Switch2' */

    /* Switch: '<S306>/Switch2' incorporates:
     *  Constant: '<S178>/MaxValue4'
     *  Constant: '<S178>/MinValue4'
     *  RelationalOperator: '<S306>/LowerRelop1'
     *  RelationalOperator: '<S306>/UpperRelop'
     *  SignalConversion generated from: '<S178>/VeTAIR_T_EEXV_RefTemp'
     *  Switch: '<S306>/Switch'
     */
    if (tmpRead_5 > 195.0F)
    {
        tmpRead_5 = 195.0F;
    }
    else
    {
        if (tmpRead_5 < -10.0F)
        {
            /* Switch: '<S306>/Switch' incorporates:
             *  Constant: '<S178>/MinValue4'
             */
            tmpRead_5 = -10.0F;
        }
    }

    /* End of Switch: '<S306>/Switch2' */

    /* DataTypeConversion: '<S178>/DTConv12' incorporates:
     *  Constant: '<S178>/Factor4'
     *  Constant: '<S178>/Offset4'
     *  Product: '<S178>/Prod4'
     *  Sum: '<S178>/Add4'
     */
    rtb_Prod4_fm = roundf((tmpRead_5 - -10.0F) / 0.1F);
    if (rtb_Prod4_fm < 65536.0F)
    {
        rtb_DTConv12_h_0 = (uint16)rtb_Prod4_fm;
    }
    else
    {
        rtb_DTConv12_h_0 = MAX_uint16_T;
    }

    /* SignalConversion generated from: '<S178>/Data' incorporates:
     *  ArithShift: '<S178>/BitShift'
     *  ArithShift: '<S178>/BitShift1'
     *  ArithShift: '<S178>/BitShift2'
     *  ArithShift: '<S178>/Bitshift'
     *  DataTypeConversion: '<S178>/DTConv'
     *  DataTypeConversion: '<S178>/DTConv3'
     *  DataTypeConversion: '<S178>/DTConv4'
     *  DataTypeConversion: '<S178>/Mux'
     *  DataTypeConversion: '<S178>/Mux2'
     *  Inport: '<Root>/VeTAIR_e_EEXV_CalStat'
     *  Inport: '<Root>/VeTAIR_e_EEXV_Err'
     *  Inport: '<Root>/VeTAIR_e_EEXV_Sts'
     *  S-Function (sfix_bitop): '<S178>/Bitwise1'
     *  S-Function (sfix_bitop): '<S178>/Bitwise2'
     *  SignalConversion generated from: '<S178>/VeTAIR_b_EEXV_CalRq'
     *  SignalConversion generated from: '<S178>/VeTAIR_b_EEXV_RspErr'
     *  SignalConversion generated from: '<S178>/VeTAIR_e_EEXV_CalStat'
     *  SignalConversion generated from: '<S178>/VeTAIR_e_EEXV_Err'
     *  SignalConversion generated from: '<S178>/VeTAIR_e_EEXV_Sts'
     */
    Data[0] = (uint8)(((uint32)rtb_Bitwise7_ow_0) >> 8ULL);
    Data[1] = (uint8)(rtb_Bitwise7_ow_0 & ((uint16)255));
    Data[2] = (uint8)((sint32)(((((tmpRead_0 ? 1 : 0) * 4) | ((sint32)tmpRead)) |
                        ((tmpRead_1 ? 1 : 0) * 8)) | ((sint32)((uint8)(tmpRead_2
                          << 4ULL)))));
    Data[3] = (uint8)tmpRead_3;

    /* DataTypeConversion: '<S178>/DTConv9' incorporates:
     *  Constant: '<S178>/Factor1'
     *  Product: '<S178>/Prod1'
     */
    rtb_Prod4_fm = roundf(rtb_Add1_he / 0.1F);
    if (rtb_Prod4_fm < 256.0F)
    {
        /* SignalConversion generated from: '<S178>/Data' */
        Data[4] = (uint8)rtb_Prod4_fm;
    }
    else
    {
        /* SignalConversion generated from: '<S178>/Data' */
        Data[4] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S178>/DTConv9' */

    /* SignalConversion generated from: '<S178>/Data' incorporates:
     *  ArithShift: '<S178>/Bitshift2'
     *  DataTypeConversion: '<S178>/DTConv10'
     *  DataTypeConversion: '<S178>/Mux5'
     *  DataTypeConversion: '<S178>/Mux6'
     *  S-Function (sfix_bitop): '<S178>/Bitwise5'
     */
    Data[5] = (uint8)(((uint32)rtb_DTConv12_h_1) >> 8ULL);
    Data[6] = (uint8)(rtb_DTConv12_h_1 & ((uint16)255));

    /* DataTypeConversion: '<S178>/DTConv11' incorporates:
     *  Constant: '<S178>/Offset3'
     *  Sum: '<S178>/Add3'
     */
    rtb_Prod4_fm = roundf(rtb_Add3_e - -40.0F);
    if (rtb_Prod4_fm < 256.0F)
    {
        /* SignalConversion generated from: '<S178>/Data' */
        Data[7] = (uint8)rtb_Prod4_fm;
    }
    else
    {
        /* SignalConversion generated from: '<S178>/Data' */
        Data[7] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S178>/DTConv11' */

    /* SignalConversion generated from: '<S178>/Data' incorporates:
     *  ArithShift: '<S178>/Bitshift4'
     *  DataTypeConversion: '<S178>/DTConv12'
     *  DataTypeConversion: '<S178>/Mux7'
     *  DataTypeConversion: '<S178>/Mux8'
     *  S-Function (sfix_bitop): '<S178>/Bitwise7'
     */
    Data[8] = (uint8)(((uint32)rtb_DTConv12_h_0) >> 8ULL);
    Data[9] = (uint8)(rtb_DTConv12_h_0 & ((uint16)255));

    /* SignalConversion generated from: '<S178>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RDB632_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RDB633_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[10])
{
    float32 rtb_Add1_a;
    float32 rtb_Add3_h;
    float32 rtb_Prod4_e;
    float32 tmpRead_4;
    float32 tmpRead_5;
    uint16 rtb_Bitwise7_j_0;
    uint16 rtb_DTConv12_j_0;
    uint16 rtb_DTConv12_j_1;
    TeTAIR_e_EXV_Calibration_Sts tmpRead;
    TeTAIR_e_EXV_ErrorMsg tmpRead_3;
    TeTAIR_e_EXV_Status tmpRead_2;
    boolean tmpRead_0;
    boolean tmpRead_1;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeTAIR_T_OEXV_RefTemp' */
    (void)Rte_Read_VeTAIR_T_OEXV_RefTemp_Value(&tmpRead_5);

    /* Inport: '<Root>/VeTAIR_T_OEXV_BoardTemp' */
    (void)Rte_Read_VeTAIR_T_OEXV_BoardTemp_Value(&rtb_Add3_h);

    /* Inport: '<Root>/VeTAIR_p_OEXV_RefPress' */
    (void)Rte_Read_VeTAIR_p_OEXV_RefPress_Value(&tmpRead_4);

    /* Inport: '<Root>/VeTAIR_U_OEXV_SupplyVolt' */
    (void)Rte_Read_VeTAIR_U_OEXV_SupplyVolt_Value(&rtb_Add1_a);

    /* Inport: '<Root>/VeTAIR_e_OEXV_Err' */
    (void)Rte_Read_VeTAIR_e_OEXV_Err_Value(&tmpRead_3);

    /* Inport: '<Root>/VeTAIR_e_OEXV_Sts' */
    (void)Rte_Read_VeTAIR_e_OEXV_Sts_Value(&tmpRead_2);

    /* Inport: '<Root>/VeTAIR_b_OEXV_RspErr' */
    (void)Rte_Read_VeTAIR_b_OEXV_RspErr_Value(&tmpRead_1);

    /* Inport: '<Root>/VeTAIR_b_OEXV_CalRq' */
    (void)Rte_Read_VeTAIR_b_OEXV_CalRq_Value(&tmpRead_0);

    /* Inport: '<Root>/VeTAIR_e_OEXV_CalStat' */
    (void)Rte_Read_VeTAIR_e_OEXV_CalStat_Value(&tmpRead);

    /* Inport: '<Root>/VeTAIR_Pct_OEXV_PosAct' */
    (void)Rte_Read_VeTAIR_Pct_OEXV_PosAct_Value(&rtb_Prod4_e);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RDB633_Data_ReadData' */
    /* Switch: '<S307>/Switch2' incorporates:
     *  Constant: '<S179>/MaxValue'
     *  Constant: '<S179>/MinValue'
     *  RelationalOperator: '<S307>/LowerRelop1'
     *  RelationalOperator: '<S307>/UpperRelop'
     *  SignalConversion generated from: '<S179>/VeTAIR_Pct_OEXV_PosAct'
     *  Switch: '<S307>/Switch'
     */
    if (rtb_Prod4_e > 102.0F)
    {
        /* Product: '<S179>/Prod4' */
        rtb_Prod4_e = 102.0F;
    }
    else
    {
        if (rtb_Prod4_e < 0.0F)
        {
            /* Switch: '<S307>/Switch' incorporates:
             *  Constant: '<S179>/MinValue'
             *  Product: '<S179>/Prod4'
             */
            rtb_Prod4_e = 0.0F;
        }
    }

    /* End of Switch: '<S307>/Switch2' */

    /* DataTypeConversion: '<S179>/DTConv' incorporates:
     *  Constant: '<S179>/Factor'
     *  Product: '<S179>/Prod'
     *  Sum: '<S179>/Add'
     */
    rtb_Prod4_e = roundf(rtb_Prod4_e / 0.1F);
    if (rtb_Prod4_e < 65536.0F)
    {
        rtb_Bitwise7_j_0 = (uint16)rtb_Prod4_e;
    }
    else
    {
        rtb_Bitwise7_j_0 = MAX_uint16_T;
    }

    /* Switch: '<S308>/Switch2' incorporates:
     *  Constant: '<S179>/MaxValue1'
     *  Constant: '<S179>/MinValue1'
     *  RelationalOperator: '<S308>/LowerRelop1'
     *  RelationalOperator: '<S308>/UpperRelop'
     *  SignalConversion generated from: '<S179>/VeTAIR_U_OEXV_SupplyVolt'
     *  Switch: '<S308>/Switch'
     */
    if (rtb_Add1_a > 25.5F)
    {
        /* Sum: '<S179>/Add1' */
        rtb_Add1_a = 25.5F;
    }
    else
    {
        if (rtb_Add1_a < 0.0F)
        {
            /* Switch: '<S308>/Switch' incorporates:
             *  Constant: '<S179>/MinValue1'
             *  Sum: '<S179>/Add1'
             */
            rtb_Add1_a = 0.0F;
        }
    }

    /* End of Switch: '<S308>/Switch2' */

    /* Switch: '<S309>/Switch2' incorporates:
     *  Constant: '<S179>/MaxValue2'
     *  Constant: '<S179>/MinValue2'
     *  RelationalOperator: '<S309>/LowerRelop1'
     *  RelationalOperator: '<S309>/UpperRelop'
     *  SignalConversion generated from: '<S179>/VeTAIR_p_OEXV_RefPress'
     *  Switch: '<S309>/Switch'
     */
    if (tmpRead_4 > 8192.0F)
    {
        tmpRead_4 = 8192.0F;
    }
    else
    {
        if (tmpRead_4 < 0.0F)
        {
            /* Switch: '<S309>/Switch' incorporates:
             *  Constant: '<S179>/MinValue2'
             */
            tmpRead_4 = 0.0F;
        }
    }

    /* End of Switch: '<S309>/Switch2' */

    /* DataTypeConversion: '<S179>/DTConv10' incorporates:
     *  Constant: '<S179>/Factor2'
     *  Product: '<S179>/Prod2'
     */
    rtb_Prod4_e = roundf(tmpRead_4 / 0.5F);
    if (rtb_Prod4_e < 65536.0F)
    {
        rtb_DTConv12_j_1 = (uint16)rtb_Prod4_e;
    }
    else
    {
        rtb_DTConv12_j_1 = MAX_uint16_T;
    }

    /* Switch: '<S310>/Switch2' incorporates:
     *  Constant: '<S179>/MaxValue3'
     *  Constant: '<S179>/MinValue3'
     *  RelationalOperator: '<S310>/LowerRelop1'
     *  RelationalOperator: '<S310>/UpperRelop'
     *  SignalConversion generated from: '<S179>/VeTAIR_T_OEXV_BoardTemp'
     *  Switch: '<S310>/Switch'
     */
    if (rtb_Add3_h > 215.0F)
    {
        rtb_Add3_h = 215.0F;
    }
    else
    {
        if (rtb_Add3_h < -40.0F)
        {
            /* Switch: '<S310>/Switch' incorporates:
             *  Constant: '<S179>/MinValue3'
             */
            rtb_Add3_h = -40.0F;
        }
    }

    /* End of Switch: '<S310>/Switch2' */

    /* Switch: '<S311>/Switch2' incorporates:
     *  Constant: '<S179>/MaxValue4'
     *  Constant: '<S179>/MinValue4'
     *  RelationalOperator: '<S311>/LowerRelop1'
     *  RelationalOperator: '<S311>/UpperRelop'
     *  SignalConversion generated from: '<S179>/VeTAIR_T_OEXV_RefTemp'
     *  Switch: '<S311>/Switch'
     */
    if (tmpRead_5 > 195.0F)
    {
        tmpRead_5 = 195.0F;
    }
    else
    {
        if (tmpRead_5 < -10.0F)
        {
            /* Switch: '<S311>/Switch' incorporates:
             *  Constant: '<S179>/MinValue4'
             */
            tmpRead_5 = -10.0F;
        }
    }

    /* End of Switch: '<S311>/Switch2' */

    /* DataTypeConversion: '<S179>/DTConv12' incorporates:
     *  Constant: '<S179>/Factor4'
     *  Constant: '<S179>/Offset4'
     *  Product: '<S179>/Prod4'
     *  Sum: '<S179>/Add4'
     */
    rtb_Prod4_e = roundf((tmpRead_5 - -10.0F) / 0.1F);
    if (rtb_Prod4_e < 65536.0F)
    {
        rtb_DTConv12_j_0 = (uint16)rtb_Prod4_e;
    }
    else
    {
        rtb_DTConv12_j_0 = MAX_uint16_T;
    }

    /* SignalConversion generated from: '<S179>/Data' incorporates:
     *  ArithShift: '<S179>/BitShift'
     *  ArithShift: '<S179>/BitShift1'
     *  ArithShift: '<S179>/BitShift2'
     *  ArithShift: '<S179>/Bitshift'
     *  DataTypeConversion: '<S179>/DTConv'
     *  DataTypeConversion: '<S179>/DTConv3'
     *  DataTypeConversion: '<S179>/DTConv4'
     *  DataTypeConversion: '<S179>/Mux'
     *  DataTypeConversion: '<S179>/Mux2'
     *  Inport: '<Root>/VeTAIR_e_OEXV_CalStat'
     *  Inport: '<Root>/VeTAIR_e_OEXV_Err'
     *  Inport: '<Root>/VeTAIR_e_OEXV_Sts'
     *  S-Function (sfix_bitop): '<S179>/Bitwise1'
     *  S-Function (sfix_bitop): '<S179>/Bitwise2'
     *  SignalConversion generated from: '<S179>/VeTAIR_b_OEXV_CalRq'
     *  SignalConversion generated from: '<S179>/VeTAIR_b_OEXV_RspErr'
     *  SignalConversion generated from: '<S179>/VeTAIR_e_OEXV_CalStat'
     *  SignalConversion generated from: '<S179>/VeTAIR_e_OEXV_Err'
     *  SignalConversion generated from: '<S179>/VeTAIR_e_OEXV_Sts'
     */
    Data[0] = (uint8)(((uint32)rtb_Bitwise7_j_0) >> 8ULL);
    Data[1] = (uint8)(rtb_Bitwise7_j_0 & ((uint16)255));
    Data[2] = (uint8)((sint32)(((((tmpRead_0 ? 1 : 0) * 4) | ((sint32)tmpRead)) |
                        ((tmpRead_1 ? 1 : 0) * 8)) | ((sint32)((uint8)(tmpRead_2
                          << 4ULL)))));
    Data[3] = (uint8)tmpRead_3;

    /* DataTypeConversion: '<S179>/DTConv9' incorporates:
     *  Constant: '<S179>/Factor1'
     *  Product: '<S179>/Prod1'
     */
    rtb_Prod4_e = roundf(rtb_Add1_a / 0.1F);
    if (rtb_Prod4_e < 256.0F)
    {
        /* SignalConversion generated from: '<S179>/Data' */
        Data[4] = (uint8)rtb_Prod4_e;
    }
    else
    {
        /* SignalConversion generated from: '<S179>/Data' */
        Data[4] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S179>/DTConv9' */

    /* SignalConversion generated from: '<S179>/Data' incorporates:
     *  ArithShift: '<S179>/Bitshift2'
     *  DataTypeConversion: '<S179>/DTConv10'
     *  DataTypeConversion: '<S179>/Mux5'
     *  DataTypeConversion: '<S179>/Mux6'
     *  S-Function (sfix_bitop): '<S179>/Bitwise5'
     */
    Data[5] = (uint8)(((uint32)rtb_DTConv12_j_1) >> 8ULL);
    Data[6] = (uint8)(rtb_DTConv12_j_1 & ((uint16)255));

    /* DataTypeConversion: '<S179>/DTConv11' incorporates:
     *  Constant: '<S179>/Offset3'
     *  Sum: '<S179>/Add3'
     */
    rtb_Prod4_e = roundf(rtb_Add3_h - -40.0F);
    if (rtb_Prod4_e < 256.0F)
    {
        /* SignalConversion generated from: '<S179>/Data' */
        Data[7] = (uint8)rtb_Prod4_e;
    }
    else
    {
        /* SignalConversion generated from: '<S179>/Data' */
        Data[7] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S179>/DTConv11' */

    /* SignalConversion generated from: '<S179>/Data' incorporates:
     *  ArithShift: '<S179>/Bitshift4'
     *  DataTypeConversion: '<S179>/DTConv12'
     *  DataTypeConversion: '<S179>/Mux7'
     *  DataTypeConversion: '<S179>/Mux8'
     *  S-Function (sfix_bitop): '<S179>/Bitwise7'
     */
    Data[8] = (uint8)(((uint32)rtb_DTConv12_j_0) >> 8ULL);
    Data[9] = (uint8)(rtb_DTConv12_j_0 & ((uint16)255));

    /* SignalConversion generated from: '<S179>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RDB633_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RDB634_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    float32 rtb_Prod_ok;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeTAIB_T_OEXV_InTempSnsr' */
    (void)Rte_Read_VeTAIB_T_OEXV_InTempSnsr_Value(&rtb_Prod_ok);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RDB634_Data_ReadData' */
    /* Switch: '<S312>/Switch2' incorporates:
     *  Constant: '<S180>/MaxValue'
     *  Constant: '<S180>/MinValue'
     *  RelationalOperator: '<S312>/LowerRelop1'
     *  RelationalOperator: '<S312>/UpperRelop'
     *  SignalConversion generated from: '<S180>/VeTAIB_T_OEXV_InTempSnsr'
     *  Switch: '<S312>/Switch'
     */
    if (rtb_Prod_ok > 215.0F)
    {
        /* Product: '<S180>/Prod' */
        rtb_Prod_ok = 215.0F;
    }
    else
    {
        if (rtb_Prod_ok < -40.0F)
        {
            /* Switch: '<S312>/Switch' incorporates:
             *  Constant: '<S180>/MinValue'
             *  Product: '<S180>/Prod'
             */
            rtb_Prod_ok = -40.0F;
        }
    }

    /* End of Switch: '<S312>/Switch2' */

    /* Product: '<S180>/Prod' incorporates:
     *  Constant: '<S180>/Offset'
     *  Sum: '<S180>/Add'
     */
    rtb_Prod_ok -= -40.0F;

    /* DataTypeConversion: '<S180>/DTConv' */
    rtb_Prod_ok = roundf(rtb_Prod_ok);
    if (rtb_Prod_ok < 256.0F)
    {
        /* SignalConversion generated from: '<S180>/Data' */
        *Data = (uint8)rtb_Prod_ok;
    }
    else
    {
        /* SignalConversion generated from: '<S180>/Data' */
        *Data = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S180>/DTConv' */

    /* SignalConversion generated from: '<S180>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RDB634_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RDB650_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    TeADAR_e_ActuationStatus tmpRead;
    TeADAR_e_ActuationStatus tmpRead_0;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeADAR_e_RightActuationStatus' */
    (void)Rte_Read_VeADAR_e_RightActuationStatus_Value(&tmpRead_0);

    /* Inport: '<Root>/VeADAR_e_LeftActuationStatus' */
    (void)Rte_Read_VeADAR_e_LeftActuationStatus_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RDB650_Data_ReadData' */
    /* SignalConversion generated from: '<S181>/Data' incorporates:
     *  ArithShift: '<S181>/BitShift'
     *  Inport: '<Root>/VeADAR_e_LeftActuationStatus'
     *  Inport: '<Root>/VeADAR_e_RightActuationStatus'
     *  S-Function (sfix_bitop): '<S181>/Bitwise'
     *  SignalConversion generated from: '<S181>/VeADAR_e_LeftActuationStatus'
     *  SignalConversion generated from: '<S181>/VeADAR_e_RightActuationStatus'
     */
    *Data = (uint8)(((uint8)(tmpRead_0 << 3ULL)) | ((uint8)tmpRead));

    /* SignalConversion generated from: '<S181>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RDB650_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RDB651_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[4])
{
    float32 rtb_Prod1;
    float32 tmpRead;
    uint16 rtb_Bitwise3_f_0;
    uint16 rtb_DTConv2_km_0;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeADIB_Pct_WEDPosnSnsRight' */
    (void)Rte_Read_VeADIB_Pct_WEDPosnSnsRight_Value(&tmpRead);

    /* Inport: '<Root>/VeADIB_Pct_WEDPosnSnsLeft' */
    (void)Rte_Read_VeADIB_Pct_WEDPosnSnsLeft_Value(&rtb_Prod1);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RDB651_Data_ReadData' */
    /* Switch: '<S313>/Switch2' incorporates:
     *  Constant: '<S182>/MaxValue'
     *  Constant: '<S182>/MinValue'
     *  RelationalOperator: '<S313>/LowerRelop1'
     *  RelationalOperator: '<S313>/UpperRelop'
     *  SignalConversion generated from: '<S182>/VeADIB_Pct_WEDPosnSnsLeft'
     *  Switch: '<S313>/Switch'
     */
    if (rtb_Prod1 > 100.0F)
    {
        /* Product: '<S182>/Prod1' */
        rtb_Prod1 = 100.0F;
    }
    else
    {
        if (rtb_Prod1 < 0.0F)
        {
            /* Switch: '<S313>/Switch' incorporates:
             *  Constant: '<S182>/MinValue'
             *  Product: '<S182>/Prod1'
             */
            rtb_Prod1 = 0.0F;
        }
    }

    /* End of Switch: '<S313>/Switch2' */

    /* DataTypeConversion: '<S182>/DTConv' incorporates:
     *  Constant: '<S182>/Factor'
     *  Product: '<S182>/Prod'
     *  Sum: '<S182>/Add'
     */
    rtb_Prod1 = roundf(rtb_Prod1 / 0.01F);
    if (rtb_Prod1 < 65536.0F)
    {
        rtb_Bitwise3_f_0 = (uint16)rtb_Prod1;
    }
    else
    {
        rtb_Bitwise3_f_0 = MAX_uint16_T;
    }

    /* Switch: '<S314>/Switch2' incorporates:
     *  Constant: '<S182>/MaxValue1'
     *  Constant: '<S182>/MinValue1'
     *  RelationalOperator: '<S314>/LowerRelop1'
     *  RelationalOperator: '<S314>/UpperRelop'
     *  SignalConversion generated from: '<S182>/VeADIB_Pct_WEDPosnSnsRight'
     *  Switch: '<S314>/Switch'
     */
    if (tmpRead > 100.0F)
    {
        tmpRead = 100.0F;
    }
    else
    {
        if (tmpRead < 0.0F)
        {
            /* Switch: '<S314>/Switch' incorporates:
             *  Constant: '<S182>/MinValue1'
             */
            tmpRead = 0.0F;
        }
    }

    /* End of Switch: '<S314>/Switch2' */

    /* DataTypeConversion: '<S182>/DTConv2' incorporates:
     *  Constant: '<S182>/Factor1'
     *  Product: '<S182>/Prod1'
     */
    rtb_Prod1 = roundf(tmpRead / 0.01F);
    if (rtb_Prod1 < 65536.0F)
    {
        rtb_DTConv2_km_0 = (uint16)rtb_Prod1;
    }
    else
    {
        rtb_DTConv2_km_0 = MAX_uint16_T;
    }

    /* SignalConversion generated from: '<S182>/Data' incorporates:
     *  ArithShift: '<S182>/Bitshift'
     *  ArithShift: '<S182>/Bitshift2'
     *  DataTypeConversion: '<S182>/DTConv'
     *  DataTypeConversion: '<S182>/DTConv2'
     *  DataTypeConversion: '<S182>/Mux'
     *  DataTypeConversion: '<S182>/Mux2'
     *  DataTypeConversion: '<S182>/Mux3'
     *  DataTypeConversion: '<S182>/Mux4'
     *  S-Function (sfix_bitop): '<S182>/Bitwise1'
     *  S-Function (sfix_bitop): '<S182>/Bitwise3'
     */
    Data[0] = (uint8)(((uint32)rtb_Bitwise3_f_0) >> 8ULL);
    Data[1] = (uint8)(rtb_Bitwise3_f_0 & ((uint16)255));
    Data[2] = (uint8)(((uint32)rtb_DTConv2_km_0) >> 8ULL);
    Data[3] = (uint8)(rtb_DTConv2_km_0 & ((uint16)255));

    /* SignalConversion generated from: '<S182>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RDB651_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RDB653_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[2])
{
    uint8 tmpRead;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeRTMR_y_WEDRoutinePreConds' */
    (void)Rte_Read_VeRTMR_y_WEDRoutinePreConds_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RDB653_Data_ReadData' */
    /* SignalConversion generated from: '<S183>/Data' incorporates:
     *  ArithShift: '<S183>/BitShift'
     *  ArithShift: '<S183>/BitShift1'
     *  ArithShift: '<S183>/BitShift2'
     *  ArithShift: '<S183>/BitShift3'
     *  ArithShift: '<S183>/BitShift4'
     *  ArithShift: '<S183>/BitShift5'
     *  DataTypeConversion: '<S183>/DTConv1'
     *  S-Function (sfix_bitop): '<S183>/Bitwise'
     *  SignalConversion generated from: '<S183>/VeRTMR_y_WEDRoutinePreConds'
     */
    Data[0] = (uint8)((((((((uint8)(tmpRead << 1ULL)) | tmpRead) | ((uint8)
                           (tmpRead << 2ULL))) | ((uint8)(tmpRead << 3ULL))) |
                        ((uint8)(tmpRead << 4ULL))) | ((uint8)(tmpRead << 5ULL)))
                      | ((uint8)(tmpRead << 6ULL)));
    Data[1] = DCAB_ac_ConstB.Mux2_g;

    /* SignalConversion generated from: '<S183>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RDB653_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RDB654_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[2])
{
    uint16 tmp;
    uint16 tmpRead;
    uint16 tmp_0;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeRTMR_d_WEDRoutineFailConds' */
    (void)Rte_Read_VeRTMR_d_WEDRoutineFailConds_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RDB654_Data_ReadData' */
    /* DataTypeConversion: '<S184>/Mux1' incorporates:
     *  SignalConversion generated from: '<S184>/VeRTMR_d_WEDRoutineFailConds'
     */
    tmp_0 = tmpRead;
    if (((sint32)tmpRead) > 255)
    {
        tmp_0 = 255U;
    }

    /* SignalConversion generated from: '<S184>/Data' incorporates:
     *  DataTypeConversion: '<S184>/Mux1'
     */
    Data[0] = (uint8)tmp_0;

    /* DataTypeConversion: '<S184>/DTConv1' incorporates:
     *  SignalConversion generated from: '<S184>/VeRTMR_d_WEDRoutineFailConds'
     */
    tmp_0 = tmpRead;
    if (((sint32)tmpRead) > 255)
    {
        tmp_0 = 255U;
    }

    /* DataTypeConversion: '<S184>/DTConv2' incorporates:
     *  SignalConversion generated from: '<S184>/VeRTMR_d_WEDRoutineFailConds'
     */
    tmp = tmpRead;
    if (((sint32)tmpRead) > 255)
    {
        tmp = 255U;
    }

    /* DataTypeConversion: '<S184>/DTConv3' incorporates:
     *  SignalConversion generated from: '<S184>/VeRTMR_d_WEDRoutineFailConds'
     */
    if (((sint32)tmpRead) > 255)
    {
        tmpRead = 255U;
    }

    /* SignalConversion generated from: '<S184>/Data' incorporates:
     *  ArithShift: '<S184>/BitShift'
     *  ArithShift: '<S184>/BitShift1'
     *  DataTypeConversion: '<S184>/DTConv1'
     *  DataTypeConversion: '<S184>/DTConv2'
     *  DataTypeConversion: '<S184>/DTConv3'
     *  S-Function (sfix_bitop): '<S184>/Bitwise'
     */
    Data[1] = (uint8)((((uint16)((uint8)(((uint8)tmp) << 1ULL))) | tmp_0) |
                      ((uint16)((uint8)(((uint8)tmpRead) << 2ULL))));

    /* SignalConversion generated from: '<S184>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RDB654_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RDB655_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[4])
{
    float32 rtb_Prod1;
    float32 tmpRead;
    uint16 rtb_Bitwise3_f3_0;
    uint16 rtb_DTConv2_ja_0;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeADAR_L_RtTAPos' */
    (void)Rte_Read_VeADAR_L_RtTAPos_Value(&tmpRead);

    /* Inport: '<Root>/VeADAR_L_LftTAPos' */
    (void)Rte_Read_VeADAR_L_LftTAPos_Value(&rtb_Prod1);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RDB655_Data_ReadData' */
    /* Switch: '<S315>/Switch2' incorporates:
     *  Constant: '<S185>/MaxValue'
     *  Constant: '<S185>/MinValue'
     *  RelationalOperator: '<S315>/LowerRelop1'
     *  RelationalOperator: '<S315>/UpperRelop'
     *  SignalConversion generated from: '<S185>/VeADAR_L_LftTAPos'
     *  Switch: '<S315>/Switch'
     */
    if (rtb_Prod1 > 655.35F)
    {
        /* Product: '<S185>/Prod1' */
        rtb_Prod1 = 655.35F;
    }
    else
    {
        if (rtb_Prod1 < 0.0F)
        {
            /* Switch: '<S315>/Switch' incorporates:
             *  Constant: '<S185>/MinValue'
             *  Product: '<S185>/Prod1'
             */
            rtb_Prod1 = 0.0F;
        }
    }

    /* End of Switch: '<S315>/Switch2' */

    /* DataTypeConversion: '<S185>/DTConv' incorporates:
     *  Constant: '<S185>/Factor'
     *  Product: '<S185>/Prod'
     *  Sum: '<S185>/Add'
     */
    rtb_Prod1 = roundf(rtb_Prod1 / 0.01F);
    if (rtb_Prod1 < 65536.0F)
    {
        rtb_Bitwise3_f3_0 = (uint16)rtb_Prod1;
    }
    else
    {
        rtb_Bitwise3_f3_0 = MAX_uint16_T;
    }

    /* Switch: '<S316>/Switch2' incorporates:
     *  Constant: '<S185>/MaxValue1'
     *  Constant: '<S185>/MinValue1'
     *  RelationalOperator: '<S316>/LowerRelop1'
     *  RelationalOperator: '<S316>/UpperRelop'
     *  SignalConversion generated from: '<S185>/VeADAR_L_RtTAPos'
     *  Switch: '<S316>/Switch'
     */
    if (tmpRead > 655.35F)
    {
        tmpRead = 655.35F;
    }
    else
    {
        if (tmpRead < 0.0F)
        {
            /* Switch: '<S316>/Switch' incorporates:
             *  Constant: '<S185>/MinValue1'
             */
            tmpRead = 0.0F;
        }
    }

    /* End of Switch: '<S316>/Switch2' */

    /* DataTypeConversion: '<S185>/DTConv2' incorporates:
     *  Constant: '<S185>/Factor1'
     *  Product: '<S185>/Prod1'
     */
    rtb_Prod1 = roundf(tmpRead / 0.01F);
    if (rtb_Prod1 < 65536.0F)
    {
        rtb_DTConv2_ja_0 = (uint16)rtb_Prod1;
    }
    else
    {
        rtb_DTConv2_ja_0 = MAX_uint16_T;
    }

    /* SignalConversion generated from: '<S185>/Data' incorporates:
     *  ArithShift: '<S185>/Bitshift'
     *  ArithShift: '<S185>/Bitshift2'
     *  DataTypeConversion: '<S185>/DTConv'
     *  DataTypeConversion: '<S185>/DTConv2'
     *  DataTypeConversion: '<S185>/Mux'
     *  DataTypeConversion: '<S185>/Mux2'
     *  DataTypeConversion: '<S185>/Mux3'
     *  DataTypeConversion: '<S185>/Mux4'
     *  S-Function (sfix_bitop): '<S185>/Bitwise1'
     *  S-Function (sfix_bitop): '<S185>/Bitwise3'
     */
    Data[0] = (uint8)(((uint32)rtb_Bitwise3_f3_0) >> 8ULL);
    Data[1] = (uint8)(rtb_Bitwise3_f3_0 & ((uint16)255));
    Data[2] = (uint8)(((uint32)rtb_DTConv2_ja_0) >> 8ULL);
    Data[3] = (uint8)(rtb_DTConv2_ja_0 & ((uint16)255));

    /* SignalConversion generated from: '<S185>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RDB655_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RDB779_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[2])
{
    float32 rtb_Prod_cr;
    TeBRDR_e_BatCltLvlLo tmpRead;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeTRIR_U_BatBotlClnt_LoLvlVolt' */
    (void)Rte_Read_VeTRIR_U_BatBotlClnt_LoLvlVolt_Value(&rtb_Prod_cr);

    /* Inport: '<Root>/VeBRDR_e_HV_Bat_CltLvlLo' */
    (void)Rte_Read_VeBRDR_e_HV_Bat_CltLvlLo_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RDB779_Data_ReadData' */
    /* Switch: '<S317>/Switch2' incorporates:
     *  Constant: '<S186>/MaxValue'
     *  Constant: '<S186>/MinValue'
     *  RelationalOperator: '<S317>/LowerRelop1'
     *  RelationalOperator: '<S317>/UpperRelop'
     *  SignalConversion generated from: '<S186>/VeTRIR_U_BatBotlClnt_LoLvlVolt'
     *  Switch: '<S317>/Switch'
     */
    if (rtb_Prod_cr > 4.998F)
    {
        /* Product: '<S186>/Prod' */
        rtb_Prod_cr = 4.998F;
    }
    else
    {
        if (rtb_Prod_cr < 0.0F)
        {
            /* Switch: '<S317>/Switch' incorporates:
             *  Constant: '<S186>/MinValue'
             *  Product: '<S186>/Prod'
             */
            rtb_Prod_cr = 0.0F;
        }
    }

    /* End of Switch: '<S317>/Switch2' */

    /* Product: '<S186>/Prod' incorporates:
     *  Constant: '<S186>/Factor'
     *  Sum: '<S186>/Add'
     */
    rtb_Prod_cr /= 0.0196F;

    /* SignalConversion generated from: '<S186>/Data' incorporates:
     *  Inport: '<Root>/VeBRDR_e_HV_Bat_CltLvlLo'
     *  SignalConversion generated from: '<S186>/VeBRDR_e_HV_Bat_CltLvlLo'
     */
    Data[0] = (uint8)tmpRead;

    /* DataTypeConversion: '<S186>/DTConv3' */
    rtb_Prod_cr = roundf(rtb_Prod_cr);
    if (rtb_Prod_cr < 256.0F)
    {
        /* SignalConversion generated from: '<S186>/Data' */
        Data[1] = (uint8)rtb_Prod_cr;
    }
    else
    {
        /* SignalConversion generated from: '<S186>/Data' */
        Data[1] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S186>/DTConv3' */

    /* SignalConversion generated from: '<S186>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RDB779_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RDB789_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[2])
{
    float32 rtb_Prod_m;
    boolean tmpRead;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeHSWB_U_HoodAjarSns' */
    (void)Rte_Read_VeHSWB_U_HoodAjarSns_Value(&rtb_Prod_m);

    /* Inport: '<Root>/VeHSWR_b_SecHoodSts' */
    (void)Rte_Read_VeHSWR_b_SecHoodSts_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RDB789_Data_ReadData' */
    /* Switch: '<S318>/Switch2' incorporates:
     *  Constant: '<S187>/MaxValue'
     *  Constant: '<S187>/MinValue'
     *  RelationalOperator: '<S318>/LowerRelop1'
     *  RelationalOperator: '<S318>/UpperRelop'
     *  SignalConversion generated from: '<S187>/VeHSWB_U_HoodAjarSns'
     *  Switch: '<S318>/Switch'
     */
    if (rtb_Prod_m > 4.998F)
    {
        /* Product: '<S187>/Prod' */
        rtb_Prod_m = 4.998F;
    }
    else
    {
        if (rtb_Prod_m < 0.0F)
        {
            /* Switch: '<S318>/Switch' incorporates:
             *  Constant: '<S187>/MinValue'
             *  Product: '<S187>/Prod'
             */
            rtb_Prod_m = 0.0F;
        }
    }

    /* End of Switch: '<S318>/Switch2' */

    /* Product: '<S187>/Prod' incorporates:
     *  Constant: '<S187>/Factor'
     *  Sum: '<S187>/Add'
     */
    rtb_Prod_m /= 0.0196F;

    /* SignalConversion generated from: '<S187>/Data' incorporates:
     *  DataTypeConversion: '<S187>/DTConv'
     *  SignalConversion generated from: '<S187>/VeHSWR_b_SecHoodSts'
     */
    Data[0] = tmpRead ? ((uint8)1) : ((uint8)0);

    /* DataTypeConversion: '<S187>/DTConv3' */
    rtb_Prod_m = roundf(rtb_Prod_m);
    if (rtb_Prod_m < 256.0F)
    {
        /* SignalConversion generated from: '<S187>/Data' */
        Data[1] = (uint8)rtb_Prod_m;
    }
    else
    {
        /* SignalConversion generated from: '<S187>/Data' */
        Data[1] = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S187>/DTConv3' */

    /* SignalConversion generated from: '<S187>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RDB789_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RWD2800_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[2])
{
    uint16 tmpRead;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeTRGR_d_IP_PRNDLTestFlags' */
    (void)Rte_Read_VeTRGR_d_IP_PRNDLTestFlags_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RWD2800_Data_ReadData' */
    /* SignalConversion generated from: '<S188>/Data' incorporates:
     *  ArithShift: '<S188>/Bitshift'
     *  DataTypeConversion: '<S188>/Mux'
     *  DataTypeConversion: '<S188>/Mux2'
     *  S-Function (sfix_bitop): '<S188>/Bitwise1'
     *  SignalConversion generated from: '<S188>/VeTRGR_d_IP_PRNDLTestFlags'
     */
    Data[0] = (uint8)(((uint32)tmpRead) >> 8ULL);
    Data[1] = (uint8)(tmpRead & ((uint16)255));

    /* SignalConversion generated from: '<S188>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RWD2800_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RWD3025_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[2])
{
    uint8 tmpRead_3;
    boolean tmpRead;
    boolean tmpRead_0;
    boolean tmpRead_1;
    boolean tmpRead_2;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeRTMR_y_RWD3025_EOMTest' */
    (void)Rte_Read_VeRTMR_y_RWD3025_EOMTest_Value(&tmpRead_3);

    /* Inport: '<Root>/VePLTR_b_REMDisabled' */
    (void)Rte_Read_VePLTR_b_REMDisabled_Value(&tmpRead_2);

    /* Inport: '<Root>/VeRTMR_b_ElectricOnlyTest_Enabled' */
    (void)Rte_Read_VeRTMR_b_ElectricOnlyTest_Enabled_Value(&tmpRead_1);

    /* Inport: '<Root>/VePLTR_b_RadFanHndShk_dsbld' */
    (void)Rte_Read_VePLTR_b_RadFanHndShk_dsbld_Value(&tmpRead_0);

    /* Inport: '<Root>/VePLTR_b_InFieldMode' */
    (void)Rte_Read_VePLTR_b_InFieldMode_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RWD3025_Data_ReadData' */
    /* SignalConversion generated from: '<S189>/Data' incorporates:
     *  ArithShift: '<S189>/BitShift'
     *  ArithShift: '<S189>/BitShift2'
     *  ArithShift: '<S189>/BitShift3'
     *  DataTypeConversion: '<S189>/DTConv'
     *  DataTypeConversion: '<S189>/DTConv2'
     *  DataTypeConversion: '<S189>/DTConv4'
     *  DataTypeConversion: '<S189>/DTConv5'
     *  S-Function (sfix_bitop): '<S189>/Bitwise'
     *  SignalConversion generated from: '<S189>/VePLTR_b_InFieldMode'
     *  SignalConversion generated from: '<S189>/VePLTR_b_REMDisabled'
     *  SignalConversion generated from: '<S189>/VePLTR_b_RadFanHndShk_dsbld'
     *  SignalConversion generated from: '<S189>/VeRTMR_b_ElectricOnlyTest_Enabled'
     *  SignalConversion generated from: '<S189>/VeRTMR_y_RWD3025_EOMTest'
     */
    Data[0] = (uint8)((sint32)(((((tmpRead_0 ? 1 : 0) * 2) | (tmpRead ? 1 : 0)) |
                        ((tmpRead_1 ? 1 : 0) * 8)) | ((tmpRead_2 ? 1 : 0) * 16)));
    Data[1] = tmpRead_3;

    /* SignalConversion generated from: '<S189>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RWD3025_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RWD3029_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    boolean tmpRead;
    boolean tmpRead_0;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeFSCR_b_RadFanTst_Failed' */
    (void)Rte_Read_VeFSCR_b_RadFanTst_Failed_Value(&tmpRead_0);

    /* Inport: '<Root>/VeFSCR_b_RadFanTst_NotCmplte' */
    (void)Rte_Read_VeFSCR_b_RadFanTst_NotCmplte_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RWD3029_Data_ReadData' */
    /* SignalConversion generated from: '<S190>/Data' incorporates:
     *  ArithShift: '<S190>/BitShift'
     *  DataTypeConversion: '<S190>/DTConv'
     *  DataTypeConversion: '<S190>/DTConv2'
     *  S-Function (sfix_bitop): '<S190>/Bitwise'
     *  SignalConversion generated from: '<S190>/VeFSCR_b_RadFanTst_Failed'
     *  SignalConversion generated from: '<S190>/VeFSCR_b_RadFanTst_NotCmplte'
     */
    *Data = (uint8)((sint32)(((tmpRead_0 ? 1 : 0) * 2) | (tmpRead ? 1 : 0)));

    /* SignalConversion generated from: '<S190>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RWD3029_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RWD3202_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    boolean tmpRead;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeIMPR_b_HighVoltageRapidShtdwnCmnd' */
    (void)Rte_Read_VeIMPR_b_HighVoltageRapidShtdwnCmnd_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RWD3202_Data_ReadData' */
    /* SignalConversion generated from: '<S191>/Data' incorporates:
     *  DataTypeConversion: '<S191>/DTConv'
     *  SignalConversion generated from: '<S191>/VeIMPR_b_HighVoltageRapidShtdwnCmnd'
     */
    *Data = tmpRead ? ((uint8)1) : ((uint8)0);

    /* SignalConversion generated from: '<S191>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RWD3202_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RWD9E15_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[2])
{
    boolean tmpRead;
    boolean tmpRead_0;
    boolean tmpRead_1;
    boolean tmpRead_2;
    boolean tmpRead_3;
    boolean tmpRead_4;
    boolean tmpRead_5;
    boolean tmpRead_6;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeAPSR_b_Pv2MinTestFailed' */
    (void)Rte_Read_VeAPSR_b_Pv2MinTestFailed_Value(&tmpRead_6);

    /* Inport: '<Root>/VeAPSR_b_Pv2MinTestNotCmplt' */
    (void)Rte_Read_VeAPSR_b_Pv2MinTestNotCmplt_Value(&tmpRead_5);

    /* Inport: '<Root>/VeAPSR_b_Pv2MaxTestFailed' */
    (void)Rte_Read_VeAPSR_b_Pv2MaxTestFailed_Value(&tmpRead_4);

    /* Inport: '<Root>/VeAPSR_b_Pv2MaxTestNotCmplt' */
    (void)Rte_Read_VeAPSR_b_Pv2MaxTestNotCmplt_Value(&tmpRead_3);

    /* Inport: '<Root>/VeAPSR_b_Pv1MinTestFailed' */
    (void)Rte_Read_VeAPSR_b_Pv1MinTestFailed_Value(&tmpRead_2);

    /* Inport: '<Root>/VeAPSR_b_Pv1MinTestNotCmplt' */
    (void)Rte_Read_VeAPSR_b_Pv1MinTestNotCmplt_Value(&tmpRead_1);

    /* Inport: '<Root>/VeAPSR_b_Pv1MaxTestFailed' */
    (void)Rte_Read_VeAPSR_b_Pv1MaxTestFailed_Value(&tmpRead_0);

    /* Inport: '<Root>/VeAPSR_b_Pv1MaxTestNotCmplt' */
    (void)Rte_Read_VeAPSR_b_Pv1MaxTestNotCmplt_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RWD9E15_Data_ReadData' */
    /* SignalConversion generated from: '<S192>/Data' incorporates:
     *  ArithShift: '<S192>/BitShift'
     *  ArithShift: '<S192>/BitShift1'
     *  ArithShift: '<S192>/BitShift2'
     *  ArithShift: '<S192>/BitShift3'
     *  ArithShift: '<S192>/BitShift4'
     *  ArithShift: '<S192>/BitShift5'
     *  ArithShift: '<S192>/BitShift6'
     *  DataTypeConversion: '<S192>/DTConv'
     *  DataTypeConversion: '<S192>/DTConv1'
     *  DataTypeConversion: '<S192>/DTConv2'
     *  DataTypeConversion: '<S192>/DTConv3'
     *  DataTypeConversion: '<S192>/DTConv4'
     *  DataTypeConversion: '<S192>/DTConv5'
     *  DataTypeConversion: '<S192>/DTConv6'
     *  DataTypeConversion: '<S192>/DTConv7'
     *  DataTypeConversion: '<S192>/DTConv8'
     *  S-Function (sfix_bitop): '<S192>/Bitwise'
     *  SignalConversion generated from: '<S192>/VeAPSR_b_Pv1MaxTestFailed'
     *  SignalConversion generated from: '<S192>/VeAPSR_b_Pv1MaxTestNotCmplt'
     *  SignalConversion generated from: '<S192>/VeAPSR_b_Pv1MinTestFailed'
     *  SignalConversion generated from: '<S192>/VeAPSR_b_Pv1MinTestNotCmplt'
     *  SignalConversion generated from: '<S192>/VeAPSR_b_Pv2MaxTestFailed'
     *  SignalConversion generated from: '<S192>/VeAPSR_b_Pv2MaxTestNotCmplt'
     *  SignalConversion generated from: '<S192>/VeAPSR_b_Pv2MinTestFailed'
     *  SignalConversion generated from: '<S192>/VeAPSR_b_Pv2MinTestNotCmplt'
     */
    Data[0] = (uint8)((sint32)(((((((((tmpRead_0 ? 1 : 0) * 2) | (tmpRead ? 1 :
        0)) | ((tmpRead_1 ? 1 : 0) * 4)) | ((tmpRead_2 ? 1 : 0) * 8)) |
                          ((tmpRead_3 ? 1 : 0) * 16)) | ((tmpRead_4 ? 1 : 0) *
                          32)) | ((tmpRead_5 ? 1 : 0) * 64)) | ((tmpRead_6 ? 1 :
                         0) * 128)));
    Data[1] = DCAB_ac_ConstB.Mux2;

    /* SignalConversion generated from: '<S192>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RWD9E15_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RWD9E20_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[2])
{
    float32 rtb_Prod_ck;
    uint16 rtb_DTConv_cxt_0;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeAPSR_U_Pvs1MinValue' */
    (void)Rte_Read_VeAPSR_U_Pvs1MinValue_Value(&rtb_Prod_ck);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RWD9E20_Data_ReadData' */
    /* Switch: '<S319>/Switch2' incorporates:
     *  Constant: '<S193>/MaxValue'
     *  Constant: '<S193>/MinValue'
     *  RelationalOperator: '<S319>/LowerRelop1'
     *  RelationalOperator: '<S319>/UpperRelop'
     *  SignalConversion generated from: '<S193>/VeAPSR_U_Pvs1MinValue'
     *  Switch: '<S319>/Switch'
     */
    if (rtb_Prod_ck > 4.998F)
    {
        /* Product: '<S193>/Prod' */
        rtb_Prod_ck = 4.998F;
    }
    else
    {
        if (rtb_Prod_ck < 0.0F)
        {
            /* Switch: '<S319>/Switch' incorporates:
             *  Constant: '<S193>/MinValue'
             *  Product: '<S193>/Prod'
             */
            rtb_Prod_ck = 0.0F;
        }
    }

    /* End of Switch: '<S319>/Switch2' */

    /* DataTypeConversion: '<S193>/DTConv' incorporates:
     *  Constant: '<S193>/Factor'
     *  Product: '<S193>/Prod'
     *  Sum: '<S193>/Add'
     */
    rtb_Prod_ck = roundf(rtb_Prod_ck / 0.00489F);
    if (rtb_Prod_ck < 65536.0F)
    {
        rtb_DTConv_cxt_0 = (uint16)rtb_Prod_ck;
    }
    else
    {
        rtb_DTConv_cxt_0 = MAX_uint16_T;
    }

    /* SignalConversion generated from: '<S193>/Data' incorporates:
     *  ArithShift: '<S193>/Bitshift'
     *  DataTypeConversion: '<S193>/DTConv'
     *  DataTypeConversion: '<S193>/Mux'
     *  DataTypeConversion: '<S193>/Mux2'
     *  S-Function (sfix_bitop): '<S193>/Bitwise1'
     */
    Data[0] = (uint8)(((uint32)rtb_DTConv_cxt_0) >> 8ULL);
    Data[1] = (uint8)(rtb_DTConv_cxt_0 & ((uint16)255));

    /* SignalConversion generated from: '<S193>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RWD9E20_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RWD9E21_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[2])
{
    float32 rtb_Prod_ng;
    uint16 rtb_DTConv_lz_0;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeAPSR_U_Pvs1MaxValue' */
    (void)Rte_Read_VeAPSR_U_Pvs1MaxValue_Value(&rtb_Prod_ng);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RWD9E21_Data_ReadData' */
    /* Switch: '<S320>/Switch2' incorporates:
     *  Constant: '<S194>/MaxValue'
     *  Constant: '<S194>/MinValue'
     *  RelationalOperator: '<S320>/LowerRelop1'
     *  RelationalOperator: '<S320>/UpperRelop'
     *  SignalConversion generated from: '<S194>/VeAPSR_U_Pvs1MaxValue'
     *  Switch: '<S320>/Switch'
     */
    if (rtb_Prod_ng > 4.998F)
    {
        /* Product: '<S194>/Prod' */
        rtb_Prod_ng = 4.998F;
    }
    else
    {
        if (rtb_Prod_ng < 0.0F)
        {
            /* Switch: '<S320>/Switch' incorporates:
             *  Constant: '<S194>/MinValue'
             *  Product: '<S194>/Prod'
             */
            rtb_Prod_ng = 0.0F;
        }
    }

    /* End of Switch: '<S320>/Switch2' */

    /* DataTypeConversion: '<S194>/DTConv' incorporates:
     *  Constant: '<S194>/Factor'
     *  Product: '<S194>/Prod'
     *  Sum: '<S194>/Add'
     */
    rtb_Prod_ng = roundf(rtb_Prod_ng / 0.00489F);
    if (rtb_Prod_ng < 65536.0F)
    {
        rtb_DTConv_lz_0 = (uint16)rtb_Prod_ng;
    }
    else
    {
        rtb_DTConv_lz_0 = MAX_uint16_T;
    }

    /* SignalConversion generated from: '<S194>/Data' incorporates:
     *  ArithShift: '<S194>/Bitshift'
     *  DataTypeConversion: '<S194>/DTConv'
     *  DataTypeConversion: '<S194>/Mux'
     *  DataTypeConversion: '<S194>/Mux2'
     *  S-Function (sfix_bitop): '<S194>/Bitwise1'
     */
    Data[0] = (uint8)(((uint32)rtb_DTConv_lz_0) >> 8ULL);
    Data[1] = (uint8)(rtb_DTConv_lz_0 & ((uint16)255));

    /* SignalConversion generated from: '<S194>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RWD9E21_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RWD9E22_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[2])
{
    float32 rtb_Prod_dj;
    uint16 rtb_DTConv_jb_0;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeAPSR_U_Pvs2MinValue' */
    (void)Rte_Read_VeAPSR_U_Pvs2MinValue_Value(&rtb_Prod_dj);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RWD9E22_Data_ReadData' */
    /* Switch: '<S321>/Switch2' incorporates:
     *  Constant: '<S195>/MaxValue'
     *  Constant: '<S195>/MinValue'
     *  RelationalOperator: '<S321>/LowerRelop1'
     *  RelationalOperator: '<S321>/UpperRelop'
     *  SignalConversion generated from: '<S195>/VeAPSR_U_Pvs2MinValue'
     *  Switch: '<S321>/Switch'
     */
    if (rtb_Prod_dj > 4.998F)
    {
        /* Product: '<S195>/Prod' */
        rtb_Prod_dj = 4.998F;
    }
    else
    {
        if (rtb_Prod_dj < 0.0F)
        {
            /* Switch: '<S321>/Switch' incorporates:
             *  Constant: '<S195>/MinValue'
             *  Product: '<S195>/Prod'
             */
            rtb_Prod_dj = 0.0F;
        }
    }

    /* End of Switch: '<S321>/Switch2' */

    /* DataTypeConversion: '<S195>/DTConv' incorporates:
     *  Constant: '<S195>/Factor'
     *  Product: '<S195>/Prod'
     *  Sum: '<S195>/Add'
     */
    rtb_Prod_dj = roundf(rtb_Prod_dj / 0.00489F);
    if (rtb_Prod_dj < 65536.0F)
    {
        rtb_DTConv_jb_0 = (uint16)rtb_Prod_dj;
    }
    else
    {
        rtb_DTConv_jb_0 = MAX_uint16_T;
    }

    /* SignalConversion generated from: '<S195>/Data' incorporates:
     *  ArithShift: '<S195>/Bitshift'
     *  DataTypeConversion: '<S195>/DTConv'
     *  DataTypeConversion: '<S195>/Mux'
     *  DataTypeConversion: '<S195>/Mux2'
     *  S-Function (sfix_bitop): '<S195>/Bitwise1'
     */
    Data[0] = (uint8)(((uint32)rtb_DTConv_jb_0) >> 8ULL);
    Data[1] = (uint8)(rtb_DTConv_jb_0 & ((uint16)255));

    /* SignalConversion generated from: '<S195>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RWD9E22_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RWD9E23_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[2])
{
    float32 rtb_Prod_ef;
    uint16 rtb_DTConv_hbr_0;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeAPSR_U_Pvs2MaxValue' */
    (void)Rte_Read_VeAPSR_U_Pvs2MaxValue_Value(&rtb_Prod_ef);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RWD9E23_Data_ReadData' */
    /* Switch: '<S322>/Switch2' incorporates:
     *  Constant: '<S196>/MaxValue'
     *  Constant: '<S196>/MinValue'
     *  RelationalOperator: '<S322>/LowerRelop1'
     *  RelationalOperator: '<S322>/UpperRelop'
     *  SignalConversion generated from: '<S196>/VeAPSR_U_Pvs2MaxValue'
     *  Switch: '<S322>/Switch'
     */
    if (rtb_Prod_ef > 4.998F)
    {
        /* Product: '<S196>/Prod' */
        rtb_Prod_ef = 4.998F;
    }
    else
    {
        if (rtb_Prod_ef < 0.0F)
        {
            /* Switch: '<S322>/Switch' incorporates:
             *  Constant: '<S196>/MinValue'
             *  Product: '<S196>/Prod'
             */
            rtb_Prod_ef = 0.0F;
        }
    }

    /* End of Switch: '<S322>/Switch2' */

    /* DataTypeConversion: '<S196>/DTConv' incorporates:
     *  Constant: '<S196>/Factor'
     *  Product: '<S196>/Prod'
     *  Sum: '<S196>/Add'
     */
    rtb_Prod_ef = roundf(rtb_Prod_ef / 0.00489F);
    if (rtb_Prod_ef < 65536.0F)
    {
        rtb_DTConv_hbr_0 = (uint16)rtb_Prod_ef;
    }
    else
    {
        rtb_DTConv_hbr_0 = MAX_uint16_T;
    }

    /* SignalConversion generated from: '<S196>/Data' incorporates:
     *  ArithShift: '<S196>/Bitshift'
     *  DataTypeConversion: '<S196>/DTConv'
     *  DataTypeConversion: '<S196>/Mux'
     *  DataTypeConversion: '<S196>/Mux2'
     *  S-Function (sfix_bitop): '<S196>/Bitwise1'
     */
    Data[0] = (uint8)(((uint32)rtb_DTConv_hbr_0) >> 8ULL);
    Data[1] = (uint8)(rtb_DTConv_hbr_0 & ((uint16)255));

    /* SignalConversion generated from: '<S196>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RWD9E23_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RWD9E3B_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, VAR(uint8, AUTOMATIC) Data[2])
{
    float32 rtb_Prod_gm;
    uint16 rtb_DTConv_ap_0;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VePLTR_milel_IPEETestMileageLimit' */
    (void)Rte_Read_VePLTR_milel_IPEETestMileageLimit_Value(&rtb_Prod_gm);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RWD9E3B_Data_ReadData' */
    /* Switch: '<S323>/Switch2' incorporates:
     *  Constant: '<S197>/MaxValue'
     *  Constant: '<S197>/MinValue'
     *  RelationalOperator: '<S323>/LowerRelop1'
     *  RelationalOperator: '<S323>/UpperRelop'
     *  SignalConversion generated from: '<S197>/VePLTR_milel_IPEETestMileageLimit'
     *  Switch: '<S323>/Switch'
     */
    if (rtb_Prod_gm > 6553.5F)
    {
        /* Product: '<S197>/Prod' */
        rtb_Prod_gm = 6553.5F;
    }
    else
    {
        if (rtb_Prod_gm < 0.0F)
        {
            /* Switch: '<S323>/Switch' incorporates:
             *  Constant: '<S197>/MinValue'
             *  Product: '<S197>/Prod'
             */
            rtb_Prod_gm = 0.0F;
        }
    }

    /* End of Switch: '<S323>/Switch2' */

    /* DataTypeConversion: '<S197>/DTConv' incorporates:
     *  Constant: '<S197>/Factor'
     *  Product: '<S197>/Prod'
     *  Sum: '<S197>/Add'
     */
    rtb_Prod_gm = roundf(rtb_Prod_gm / 0.1F);
    if (rtb_Prod_gm < 65536.0F)
    {
        rtb_DTConv_ap_0 = (uint16)rtb_Prod_gm;
    }
    else
    {
        rtb_DTConv_ap_0 = MAX_uint16_T;
    }

    /* SignalConversion generated from: '<S197>/Data' incorporates:
     *  ArithShift: '<S197>/Bitshift'
     *  DataTypeConversion: '<S197>/DTConv'
     *  DataTypeConversion: '<S197>/Mux'
     *  DataTypeConversion: '<S197>/Mux2'
     *  S-Function (sfix_bitop): '<S197>/Bitwise1'
     */
    Data[0] = (uint8)(((uint32)rtb_DTConv_ap_0) >> 8ULL);
    Data[1] = (uint8)(rtb_DTConv_ap_0 & ((uint16)255));

    /* SignalConversion generated from: '<S197>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RWD9E3B_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RWD9EEB_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    float32 rtb_Prod_gf;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VePLTR_Pct_InPlant_SOCSetPt' */
    (void)Rte_Read_VePLTR_Pct_InPlant_SOCSetPt_Value(&rtb_Prod_gf);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RWD9EEB_Data_ReadData' */
    /* Switch: '<S324>/Switch2' incorporates:
     *  Constant: '<S198>/MaxValue'
     *  Constant: '<S198>/MinValue'
     *  RelationalOperator: '<S324>/LowerRelop1'
     *  RelationalOperator: '<S324>/UpperRelop'
     *  SignalConversion generated from: '<S198>/VePLTR_Pct_InPlant_SOCSetPt'
     *  Switch: '<S324>/Switch'
     */
    if (rtb_Prod_gf > 100.0F)
    {
        /* Product: '<S198>/Prod' */
        rtb_Prod_gf = 100.0F;
    }
    else
    {
        if (rtb_Prod_gf < 0.0F)
        {
            /* Switch: '<S324>/Switch' incorporates:
             *  Constant: '<S198>/MinValue'
             *  Product: '<S198>/Prod'
             */
            rtb_Prod_gf = 0.0F;
        }
    }

    /* End of Switch: '<S324>/Switch2' */

    /* Product: '<S198>/Prod' incorporates:
     *  Constant: '<S198>/Factor'
     *  Sum: '<S198>/Add'
     */
    rtb_Prod_gf /= 0.5F;

    /* DataTypeConversion: '<S198>/DTConv' */
    rtb_Prod_gf = roundf(rtb_Prod_gf);
    if (rtb_Prod_gf < 256.0F)
    {
        /* SignalConversion generated from: '<S198>/Data' */
        *Data = (uint8)rtb_Prod_gf;
    }
    else
    {
        /* SignalConversion generated from: '<S198>/Data' */
        *Data = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S198>/DTConv' */

    /* SignalConversion generated from: '<S198>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RWD9EEB_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RWD9EEC_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    float32 rtb_Prod_nm;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VePLTR_Pct_REMLogisticSOCSetPt' */
    (void)Rte_Read_VePLTR_Pct_REMLogisticSOCSetPt_Value(&rtb_Prod_nm);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RWD9EEC_Data_ReadData' */
    /* Switch: '<S325>/Switch2' incorporates:
     *  Constant: '<S199>/MaxValue'
     *  Constant: '<S199>/MinValue'
     *  RelationalOperator: '<S325>/LowerRelop1'
     *  RelationalOperator: '<S325>/UpperRelop'
     *  SignalConversion generated from: '<S199>/VePLTR_Pct_REMLogisticSOCSetPt'
     *  Switch: '<S325>/Switch'
     */
    if (rtb_Prod_nm > 100.0F)
    {
        /* Product: '<S199>/Prod' */
        rtb_Prod_nm = 100.0F;
    }
    else
    {
        if (rtb_Prod_nm < 0.0F)
        {
            /* Switch: '<S325>/Switch' incorporates:
             *  Constant: '<S199>/MinValue'
             *  Product: '<S199>/Prod'
             */
            rtb_Prod_nm = 0.0F;
        }
    }

    /* End of Switch: '<S325>/Switch2' */

    /* Product: '<S199>/Prod' incorporates:
     *  Constant: '<S199>/Factor'
     *  Sum: '<S199>/Add'
     */
    rtb_Prod_nm /= 0.5F;

    /* DataTypeConversion: '<S199>/DTConv' */
    rtb_Prod_nm = roundf(rtb_Prod_nm);
    if (rtb_Prod_nm < 256.0F)
    {
        /* SignalConversion generated from: '<S199>/Data' */
        *Data = (uint8)rtb_Prod_nm;
    }
    else
    {
        /* SignalConversion generated from: '<S199>/Data' */
        *Data = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S199>/DTConv' */

    /* SignalConversion generated from: '<S199>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RWD9EEC_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RWDB604_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    TeOBCR_e_DCChrg_TestSts tmpRead;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeOBCR_e_DCChrg_TestSts' */
    (void)Rte_Read_VeOBCR_e_DCChrg_TestSts_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RWDB604_Data_ReadData' */
    /* SignalConversion generated from: '<S200>/Data' incorporates:
     *  Inport: '<Root>/VeOBCR_e_DCChrg_TestSts'
     *  SignalConversion generated from: '<S200>/VeOBCR_e_DCChrg_TestSts'
     */
    *Data = (uint8)tmpRead;

    /* SignalConversion generated from: '<S200>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RWDB604_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RWDB607_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    boolean tmpRead;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeSRAR_b_CreepTorqMode' */
    (void)Rte_Read_VeSRAR_b_CreepTorqMode_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RWDB607_Data_ReadData' */
    /* SignalConversion generated from: '<S201>/Data' incorporates:
     *  DataTypeConversion: '<S201>/DTConv'
     *  SignalConversion generated from: '<S201>/VeSRAR_b_CreepTorqMode'
     */
    *Data = tmpRead ? ((uint8)1) : ((uint8)0);

    /* SignalConversion generated from: '<S201>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RWDB607_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RWDB61B_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    float32 tmpRead;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeASLR_v_STSLSpdLimMPH' */
    (void)Rte_Read_VeASLR_v_STSLSpdLimMPH_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RWDB61B_Data_ReadData' */
    /* DataTypeConversion: '<S202>/DTConv' incorporates:
     *  SignalConversion generated from: '<S202>/VeASLR_v_STSLSpdLimMPH'
     */
    if (tmpRead < 256.0F)
    {
        if (tmpRead >= 0.0F)
        {
            /* SignalConversion generated from: '<S202>/Data' */
            *Data = (uint8)tmpRead;
        }
        else
        {
            /* SignalConversion generated from: '<S202>/Data' */
            *Data = 0U;
        }
    }
    else
    {
        /* SignalConversion generated from: '<S202>/Data' */
        *Data = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S202>/DTConv' */

    /* SignalConversion generated from: '<S202>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RWDB61B_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RWDB62F_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    boolean tmpRead;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeAADR_b_AAD_OperationModeEnbl' */
    (void)Rte_Read_VeAADR_b_AAD_OperationModeEnbl_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RWDB62F_Data_ReadData' */
    /* SignalConversion generated from: '<S203>/Data' incorporates:
     *  DataTypeConversion: '<S203>/DTConv'
     *  SignalConversion generated from: '<S203>/VeAADR_b_AAD_OperationModeEnbl'
     */
    *Data = tmpRead ? ((uint8)1) : ((uint8)0);

    /* SignalConversion generated from: '<S203>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RWDB62F_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RWDB652_Data_ReadData(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) Data)
{
    TeADIR_e_WEDExtToolCmd tmpRead;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeADIR_e_WEDExtToolCmd' */
    (void)Rte_Read_VeADIR_e_WEDExtToolCmd_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S3>/DataServices_RWDB652_Data_ReadData' */
    /* SignalConversion generated from: '<S204>/Data' incorporates:
     *  Inport: '<Root>/VeADIR_e_WEDExtToolCmd'
     *  SignalConversion generated from: '<S204>/VeADIR_e_WEDExtToolCmd'
     */
    *Data = (uint8)tmpRead;

    /* SignalConversion generated from: '<S204>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S3>/DataServices_RWDB652_Data_ReadData' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) RoutineServices_RC1300_Start(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) DataOut_DcmDspStartRoutineOutSignal_0, P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    boolean tmpRead;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VePWDR_b_RC1300_RoutineResults' */
    (void)Rte_Read_VePWDR_b_RC1300_RoutineResults_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S4>/RoutineServices_RC1300_Start_sys' */
    /* Outport: '<Root>/VeDCAB_e_Routine_RC1300_HVOpnCblReset_Op' incorporates:
     *  Constant: '<S360>/Constant'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC1300_HVOpnCblReset_Op_Value
        (CeDCAB_e_Routine_Start);

    /* SignalConversion generated from: '<S326>/DataOut_DcmDspRequestRoutineResultsOutSignal_0' incorporates:
     *  DataTypeConversion: '<S326>/Data Type Conversion'
     *  SignalConversion generated from: '<S326>/VePWDR_b_RC1300_RoutineResults'
     */
    *DataOut_DcmDspStartRoutineOutSignal_0 = tmpRead ? ((uint8)1) : ((uint8)0);

    /* SignalConversion generated from: '<S326>/ErrorCode' */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S326>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S4>/RoutineServices_RC1300_Start_sys' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) RoutineServices_RC1303_RequestResults(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(Dcm_NegativeResponseCodeType,
    AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S4>/RoutineServices_RC1303_RequestResult_sys' */
    /* Outport: '<Root>/VeDCAB_e_Routine_RC1303_CabOveLoc_Op' incorporates:
     *  Constant: '<S361>/Constant'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC1303_CabOveLoc_Op_Value
        (CeDCAB_e_Routine_ResultRequest);

    /* SignalConversion generated from: '<S327>/ErrorCode' */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S327>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S4>/RoutineServices_RC1303_RequestResult_sys' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) RoutineServices_RC1303_Start(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) DataOut_DcmDspStartRoutineOutSignal_0, P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    sint16 tmpRead;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeHTRR_Cnt_Htr_Unlck_RstSts' */
    (void)Rte_Read_VeHTRR_Cnt_Htr_Unlck_RstSts_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S4>/RoutineServices_RC1303_Start_sys' */
    /* Outport: '<Root>/VeDCAB_e_Routine_RC1303_CabOveLoc_Op' incorporates:
     *  Constant: '<S362>/Constant'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC1303_CabOveLoc_Op_Value
        (CeDCAB_e_Routine_Start);

    /* SignalConversion generated from: '<S328>/DataOut_DcmDspStartRoutineOutSignal_0' incorporates:
     *  DataTypeConversion: '<S328>/Data Type Conversion'
     *  SignalConversion generated from: '<S328>/VeHTRR_Cnt_Htr_Unlck_RstSts'
     */
    *DataOut_DcmDspStartRoutineOutSignal_0 = (uint8)tmpRead;

    /* SignalConversion generated from: '<S328>/ErrorCode' */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S328>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S4>/RoutineServices_RC1303_Start_sys' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) RoutineServices_RC1303_Stop(VAR(Dcm_OpStatusType,
    AUTOMATIC) OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC,
    DCAB_VAR_INIT) ErrorCode)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S4>/RoutineServices_RC1303_Stop_sys' */
    /* Outport: '<Root>/VeDCAB_e_Routine_RC1303_CabOveLoc_Op' incorporates:
     *  Constant: '<S363>/Constant'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC1303_CabOveLoc_Op_Value
        (CeDCAB_e_Routine_Stop);

    /* SignalConversion generated from: '<S329>/ErrorCode' */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S329>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S4>/RoutineServices_RC1303_Stop_sys' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) RoutineServices_RC1309_RequestResults(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) DataOut_DcmDspRequestRoutineResultsOutSignal_0, P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    /* local block i/o variables */
    TeRCVR_e_CPV_Calibration_Routine_Sts rtb_TmpLatchAtVeRCVR_e_CPV_RtnS;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S4>/RoutineServices_RC1309_RequestResult_sys1' */
    /* SignalConversion generated from: '<S330>/VeRCVR_e_CPV_RtnSts' incorporates:
     *  Inport: '<Root>/VeRCVR_e_CPV_RtnSts'
     */
    (void)Rte_Read_VeRCVR_e_CPV_RtnSts_Value(&rtb_TmpLatchAtVeRCVR_e_CPV_RtnS);

    /* Outport: '<Root>/VeDCAB_e_Routine_RC1309_CPV_ClbrtnRtn_Op' incorporates:
     *  Constant: '<S364>/Constant'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC1309_CPV_ClbrtnRtn_Op_Value
        (CeDCAB_e_Routine_ResultRequest);

    /* SignalConversion generated from: '<S330>/DataOut_DcmDspRequestRoutineResultsOutSignal_0' incorporates:
     *  DataTypeConversion: '<S330>/Data Type Conversion'
     *  SignalConversion generated from: '<S330>/VeRCVR_e_CPV_RtnSts'
     */
    *DataOut_DcmDspRequestRoutineResultsOutSignal_0 = (uint8)
        rtb_TmpLatchAtVeRCVR_e_CPV_RtnS;

    /* SignalConversion generated from: '<S330>/ErrorCode' */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S330>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S4>/RoutineServices_RC1309_RequestResult_sys1' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) RoutineServices_RC1309_Start(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) DataOut_DcmDspStartRoutineOutSignal_0, P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    /* local block i/o variables */
    TeRCVR_e_CPV_Calibration_Routine_Sts rtb_TmpLatchAtVeRCVR_e_CPV_Rt_l;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S4>/RoutineServices_RC1309_Start_sys1' */
    /* SignalConversion generated from: '<S331>/VeRCVR_e_CPV_RtnSts' incorporates:
     *  Inport: '<Root>/VeRCVR_e_CPV_RtnSts'
     */
    (void)Rte_Read_VeRCVR_e_CPV_RtnSts_Value(&rtb_TmpLatchAtVeRCVR_e_CPV_Rt_l);

    /* Outport: '<Root>/VeDCAB_e_Routine_RC1309_CPV_ClbrtnRtn_Op' incorporates:
     *  Constant: '<S365>/Constant'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC1309_CPV_ClbrtnRtn_Op_Value
        (CeDCAB_e_Routine_Start);

    /* SignalConversion generated from: '<S331>/DataOut_DcmDspRequestRoutineResultsOutSignal_0' incorporates:
     *  DataTypeConversion: '<S331>/Data Type Conversion'
     *  SignalConversion generated from: '<S331>/VeRCVR_e_CPV_RtnSts'
     */
    *DataOut_DcmDspStartRoutineOutSignal_0 = (uint8)
        rtb_TmpLatchAtVeRCVR_e_CPV_Rt_l;

    /* SignalConversion generated from: '<S331>/ErrorCode' */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S331>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S4>/RoutineServices_RC1309_Start_sys1' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) RoutineServices_RC130B_Start(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(Dcm_NegativeResponseCodeType,
    AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S4>/RoutineServices_RC130B_Start_sys' */
    /* Outport: '<Root>/VeDCAB_e_Routine_RC130B_OBD2PIDsReset_Op' incorporates:
     *  Constant: '<S366>/Constant'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC130B_OBD2PIDsReset_Op_Value
        (CeDCAB_e_Routine_Start);

    /* SignalConversion generated from: '<S332>/ErrorCode' */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S332>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S4>/RoutineServices_RC130B_Start_sys' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) RoutineServices_RC130C_RequestResults(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) DataOut_DcmDspRequestRoutineResultsOutSignal_0, P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    boolean tmpRead;
    boolean tmpRead_0;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeAPSR_b_PVSMinLearnt' */
    (void)Rte_Read_VeAPSR_b_PVSMinLearnt_Value(&tmpRead_0);

    /* Inport: '<Root>/VeAPSR_b_PVSMaxLearnt' */
    (void)Rte_Read_VeAPSR_b_PVSMaxLearnt_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S4>/RoutineServices_RC130C_RequestResults_sys' */
    /* Outport: '<Root>/VeDCAB_e_Routine_RC130C_AccPedLea_Op' incorporates:
     *  Constant: '<S367>/Constant'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC130C_AccPedLea_Op_Value
        (CeDCAB_e_Routine_ResultRequest);

    /* SignalConversion generated from: '<S333>/DataOut_DcmDspRequestRoutineResultsOutSignal_0' incorporates:
     *  ArithShift: '<S333>/Shift Arithmetic'
     *  DataTypeConversion: '<S333>/Data Type Conversion1'
     *  SignalConversion generated from: '<S333>/VeAPSR_b_PVSMaxLearnt'
     *  SignalConversion generated from: '<S333>/VeAPSR_b_PVSMinLearnt'
     *  Sum: '<S333>/Sum'
     */
    *DataOut_DcmDspRequestRoutineResultsOutSignal_0 = (uint8)(((uint32)((sint32)
        ((tmpRead_0 ? 1 : 0) * 2))) + (tmpRead ? 1U : 0U));

    /* SignalConversion generated from: '<S333>/ErrorCode' */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S333>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S4>/RoutineServices_RC130C_RequestResults_sys' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) RoutineServices_RC130C_Stop(VAR(Dcm_OpStatusType,
    AUTOMATIC) OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC,
    DCAB_VAR_INIT) ErrorCode)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S4>/RoutineServices_RC130C_Stop_sys' */
    /* Outport: '<Root>/VeDCAB_e_Routine_RC130C_AccPedLea_Op' incorporates:
     *  Constant: '<S368>/Constant'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC130C_AccPedLea_Op_Value
        (CeDCAB_e_Routine_Stop);

    /* SignalConversion generated from: '<S334>/ErrorCode' */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S334>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S4>/RoutineServices_RC130C_Stop_sys' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) RoutineServices_RC130C_Start(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(Dcm_NegativeResponseCodeType,
    AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S4>/RoutineServices_RC130C_sys' */
    /* Outport: '<Root>/VeDCAB_e_Routine_RC130C_AccPedLea_Op' incorporates:
     *  Constant: '<S369>/Constant'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC130C_AccPedLea_Op_Value
        (CeDCAB_e_Routine_Start);

    /* SignalConversion generated from: '<S335>/ErrorCode' */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S335>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S4>/RoutineServices_RC130C_sys' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) RoutineServices_RC130D_RequestResults(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) DataOut_DcmDspRequestRoutineResultsOutSignal_0, P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    /* local block i/o variables */
    TeRCVR_e_EXV_Routine_Sts rtb_TmpLatchAtVeRCVR_e_EXV_RtnS;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S4>/RoutineServices_RC130D_RequestResult_sys' */
    /* SignalConversion generated from: '<S336>/VeRCVR_e_EXV_RtnSts' incorporates:
     *  Inport: '<Root>/VeRCVR_e_EXV_RtnSts'
     */
    (void)Rte_Read_VeRCVR_e_EXV_RtnSts_Value(&rtb_TmpLatchAtVeRCVR_e_EXV_RtnS);

    /* Outport: '<Root>/VeDCAB_e_Routine_RC130D_EXVValCal_Op' incorporates:
     *  Constant: '<S370>/Constant'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC130D_EXVValCal_Op_Value
        (CeDCAB_e_Routine_ResultRequest);

    /* SignalConversion generated from: '<S336>/DataOut_DcmDspRequestRoutineResultsOutSignal_0' incorporates:
     *  DataTypeConversion: '<S336>/Data Type Conversion'
     *  SignalConversion generated from: '<S336>/VeRCVR_e_EXV_RtnSts'
     */
    *DataOut_DcmDspRequestRoutineResultsOutSignal_0 = (uint8)
        rtb_TmpLatchAtVeRCVR_e_EXV_RtnS;

    /* SignalConversion generated from: '<S336>/ErrorCode' */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S336>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S4>/RoutineServices_RC130D_RequestResult_sys' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) RoutineServices_RC130D_Start(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) DataOut_DcmDspStartRoutineOutSignal_0, P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    /* local block i/o variables */
    TeRCVR_e_EXV_Routine_Sts rtb_TmpLatchAtVeRCVR_e_EXV_Rt_f;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S4>/RoutineServices_RC130D_Start_sys' */
    /* SignalConversion generated from: '<S337>/VeRCVR_e_EXV_RtnSts' incorporates:
     *  Inport: '<Root>/VeRCVR_e_EXV_RtnSts'
     */
    (void)Rte_Read_VeRCVR_e_EXV_RtnSts_Value(&rtb_TmpLatchAtVeRCVR_e_EXV_Rt_f);

    /* Outport: '<Root>/VeDCAB_e_Routine_RC130D_EXVValCal_Op' incorporates:
     *  Constant: '<S371>/Constant'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC130D_EXVValCal_Op_Value
        (CeDCAB_e_Routine_Start);

    /* SignalConversion generated from: '<S337>/DataOut_DcmDspStartRoutineOutSignal_0' incorporates:
     *  DataTypeConversion: '<S337>/Data Type Conversion'
     *  SignalConversion generated from: '<S337>/VeRCVR_e_EXV_RtnSts'
     */
    *DataOut_DcmDspStartRoutineOutSignal_0 = (uint8)
        rtb_TmpLatchAtVeRCVR_e_EXV_Rt_f;

    /* SignalConversion generated from: '<S337>/ErrorCode' */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S337>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S4>/RoutineServices_RC130D_Start_sys' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) RoutineServices_RC130D_Stop(VAR(Dcm_OpStatusType,
    AUTOMATIC) OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC,
    DCAB_VAR_INIT) ErrorCode)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S4>/RoutineServices_RC130D_Stop_sys' */
    /* Outport: '<Root>/VeDCAB_e_Routine_RC130D_EXVValCal_Op' incorporates:
     *  Constant: '<S372>/Constant'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC130D_EXVValCal_Op_Value
        (CeDCAB_e_Routine_Stop);

    /* SignalConversion generated from: '<S338>/ErrorCode' */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S338>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S4>/RoutineServices_RC130D_Stop_sys' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) RoutineServices_RC130E_RequestResults(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) DataOut_DcmDspRequestRoutineResultsOutSignal_0, P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    /* local block i/o variables */
    TeRCVR_e_CPV_Calibration_Routine_Sts rtb_TmpLatchAtVeRCVR_e_LTR_RtnS;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S4>/RoutineServices_RC130E_RequestResult_sys' */
    /* SignalConversion generated from: '<S339>/VeRCVR_e_LTR_RtnSts' incorporates:
     *  Inport: '<Root>/VeRCVR_e_LTR_RtnSts'
     */
    (void)Rte_Read_VeRCVR_e_LTR_RtnSts_Value(&rtb_TmpLatchAtVeRCVR_e_LTR_RtnS);

    /* Outport: '<Root>/VeDCAB_e_Routine_RC130E_LTR_ClbrtnRtn_Op' incorporates:
     *  Constant: '<S373>/Constant'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC130E_LTR_ClbrtnRtn_Op_Value
        (CeDCAB_e_Routine_ResultRequest);

    /* SignalConversion generated from: '<S339>/DataOut_DcmDspRequestRoutineResultsOutSignal_0' incorporates:
     *  DataTypeConversion: '<S339>/Data Type Conversion'
     *  SignalConversion generated from: '<S339>/VeRCVR_e_LTR_RtnSts'
     */
    *DataOut_DcmDspRequestRoutineResultsOutSignal_0 = (uint8)
        rtb_TmpLatchAtVeRCVR_e_LTR_RtnS;

    /* SignalConversion generated from: '<S339>/ErrorCode' */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S339>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S4>/RoutineServices_RC130E_RequestResult_sys' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) RoutineServices_RC130E_Start(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) DataOut_DcmDspStartRoutineOutSignal_0, P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    /* local block i/o variables */
    TeRCVR_e_CPV_Calibration_Routine_Sts rtb_TmpLatchAtVeRCVR_e_LTR_Rt_m;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S4>/RoutineServices_RC130E_Start_sys' */
    /* SignalConversion generated from: '<S340>/VeRCVR_e_LTR_RtnSts' incorporates:
     *  Inport: '<Root>/VeRCVR_e_LTR_RtnSts'
     */
    (void)Rte_Read_VeRCVR_e_LTR_RtnSts_Value(&rtb_TmpLatchAtVeRCVR_e_LTR_Rt_m);

    /* Outport: '<Root>/VeDCAB_e_Routine_RC130E_LTR_ClbrtnRtn_Op' incorporates:
     *  Constant: '<S374>/Constant'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC130E_LTR_ClbrtnRtn_Op_Value
        (CeDCAB_e_Routine_Start);

    /* SignalConversion generated from: '<S340>/DataOut_DcmDspStartRoutineOutSignal_0' incorporates:
     *  DataTypeConversion: '<S340>/Data Type Conversion'
     *  SignalConversion generated from: '<S340>/VeRCVR_e_LTR_RtnSts'
     */
    *DataOut_DcmDspStartRoutineOutSignal_0 = (uint8)
        rtb_TmpLatchAtVeRCVR_e_LTR_Rt_m;

    /* SignalConversion generated from: '<S340>/ErrorCode' */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S340>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S4>/RoutineServices_RC130E_Start_sys' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) RoutineServices_RC130F_RequestResults(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) DataOut_DcmDspRequestRoutineResultsOutSignal_0, P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    /* local block i/o variables */
    TeRCVR_e_CPV_Calibration_Routine_Sts rtb_TmpLatchAtVeRCVR_e_HTL_RtnS;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S4>/RoutineServices_RC130F_RequestResult_sys' */
    /* SignalConversion generated from: '<S341>/VeRCVR_e_HTL_RtnSts' incorporates:
     *  Inport: '<Root>/VeRCVR_e_HTL_RtnSts'
     */
    (void)Rte_Read_VeRCVR_e_HTL_RtnSts_Value(&rtb_TmpLatchAtVeRCVR_e_HTL_RtnS);

    /* Outport: '<Root>/VeDCAB_e_Routine_RC130F_HTL_ClbrtnRtn_Op' incorporates:
     *  Constant: '<S375>/Constant'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC130F_HTL_ClbrtnRtn_Op_Value
        (CeDCAB_e_Routine_ResultRequest);

    /* SignalConversion generated from: '<S341>/DataOut_DcmDspRequestRoutineResultsOutSignal_0' incorporates:
     *  DataTypeConversion: '<S341>/Data Type Conversion'
     *  SignalConversion generated from: '<S341>/VeRCVR_e_HTL_RtnSts'
     */
    *DataOut_DcmDspRequestRoutineResultsOutSignal_0 = (uint8)
        rtb_TmpLatchAtVeRCVR_e_HTL_RtnS;

    /* SignalConversion generated from: '<S341>/ErrorCode' */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S341>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S4>/RoutineServices_RC130F_RequestResult_sys' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) RoutineServices_RC130F_Start(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) DataOut_DcmDspStartRoutineOutSignal_0, P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    /* local block i/o variables */
    TeRCVR_e_CPV_Calibration_Routine_Sts rtb_TmpLatchAtVeRCVR_e_HTL_Rt_h;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S4>/RoutineServices_RC130F_Start_sys' */
    /* SignalConversion generated from: '<S342>/VeRCVR_e_HTL_RtnSts' incorporates:
     *  Inport: '<Root>/VeRCVR_e_HTL_RtnSts'
     */
    (void)Rte_Read_VeRCVR_e_HTL_RtnSts_Value(&rtb_TmpLatchAtVeRCVR_e_HTL_Rt_h);

    /* Outport: '<Root>/VeDCAB_e_Routine_RC130F_HTL_ClbrtnRtn_Op' incorporates:
     *  Constant: '<S376>/Constant'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC130F_HTL_ClbrtnRtn_Op_Value
        (CeDCAB_e_Routine_Start);

    /* SignalConversion generated from: '<S342>/DataOut_DcmDspStartRoutineOutSignal_0' incorporates:
     *  DataTypeConversion: '<S342>/Data Type Conversion'
     *  SignalConversion generated from: '<S342>/VeRCVR_e_HTL_RtnSts'
     */
    *DataOut_DcmDspStartRoutineOutSignal_0 = (uint8)
        rtb_TmpLatchAtVeRCVR_e_HTL_Rt_h;

    /* SignalConversion generated from: '<S342>/ErrorCode' */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S342>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S4>/RoutineServices_RC130F_Start_sys' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) RoutineServices_RC1313_RequestResults(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) DataOut_DcmDspRequestRoutineResultsOutSignal_0, P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    TeFSCR_e_AGS_RoutineControl tmpRead;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeFSCR_e_AGS_RoutineControl' */
    (void)Rte_Read_VeFSCR_e_AGS_RoutineControl_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S4>/RoutineServices_RC1313_RequestResult_sys' */
    /* Outport: '<Root>/VeDCAB_e_Routine_RC1313_ActGriShu1Cal_Op' incorporates:
     *  Constant: '<S377>/Constant'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC1313_ActGriShu1Cal_Op_Value
        (CeDCAB_e_Routine_ResultRequest);

    /* SignalConversion generated from: '<S343>/DataOut_DcmDspRequestRoutineResultsOutSignal_0' incorporates:
     *  Inport: '<Root>/VeFSCR_e_AGS_RoutineControl'
     *  SignalConversion generated from: '<S343>/VeFSCR_e_AGS_RoutineControl'
     */
    *DataOut_DcmDspRequestRoutineResultsOutSignal_0 = (uint8)tmpRead;

    /* SignalConversion generated from: '<S343>/ErrorCode' */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S343>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S4>/RoutineServices_RC1313_RequestResult_sys' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) RoutineServices_RC1313_Start(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(Dcm_NegativeResponseCodeType,
    AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S4>/RoutineServices_RC1313_Start_sys' */
    /* Outport: '<Root>/VeDCAB_e_Routine_RC1313_ActGriShu1Cal_Op' incorporates:
     *  Constant: '<S378>/Constant'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC1313_ActGriShu1Cal_Op_Value
        (CeDCAB_e_Routine_Start);

    /* SignalConversion generated from: '<S344>/ErrorCode' */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S344>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S4>/RoutineServices_RC1313_Start_sys' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) RoutineServices_RC1313_Stop(VAR(Dcm_OpStatusType,
    AUTOMATIC) OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC,
    DCAB_VAR_INIT) ErrorCode)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S4>/RoutineServices_RC1313_Stop_sys' */
    /* Outport: '<Root>/VeDCAB_e_Routine_RC1313_ActGriShu1Cal_Op' incorporates:
     *  Constant: '<S379>/Constant'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC1313_ActGriShu1Cal_Op_Value
        (CeDCAB_e_Routine_Stop);

    /* SignalConversion generated from: '<S345>/ErrorCode' */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S345>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S4>/RoutineServices_RC1313_Stop_sys' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) RoutineServices_RC1314_RequestResults(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) DataOut_DcmDspRequestRoutineResultsOutSignal_0, P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    TeFSCR_e_AGS_RoutineControl tmpRead;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeFSCR_e_AGS2_RoutineControl' */
    (void)Rte_Read_VeFSCR_e_AGS2_RoutineControl_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S4>/RoutineServices_RC1314_RequestResult_sys1' */
    /* Outport: '<Root>/VeDCAB_e_Routine_RC1314_ActGriShu2Cal_Op' incorporates:
     *  Constant: '<S380>/Constant'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC1314_ActGriShu2Cal_Op_Value
        (CeDCAB_e_Routine_ResultRequest);

    /* SignalConversion generated from: '<S346>/DataOut_DcmDspRequestRoutineResultsOutSignal_0' incorporates:
     *  Inport: '<Root>/VeFSCR_e_AGS2_RoutineControl'
     *  SignalConversion generated from: '<S346>/VeFSCR_e_AGS2_RoutineControl'
     */
    *DataOut_DcmDspRequestRoutineResultsOutSignal_0 = (uint8)tmpRead;

    /* SignalConversion generated from: '<S346>/ErrorCode' */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S346>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S4>/RoutineServices_RC1314_RequestResult_sys1' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) RoutineServices_RC1314_Start(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(Dcm_NegativeResponseCodeType,
    AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S4>/RoutineServices_RC1314_Start_sys1' */
    /* Outport: '<Root>/VeDCAB_e_Routine_RC1314_ActGriShu2Cal_Op' incorporates:
     *  Constant: '<S381>/Constant'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC1314_ActGriShu2Cal_Op_Value
        (CeDCAB_e_Routine_Start);

    /* SignalConversion generated from: '<S347>/ErrorCode' */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S347>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S4>/RoutineServices_RC1314_Start_sys1' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) RoutineServices_RC1314_Stop(VAR(Dcm_OpStatusType,
    AUTOMATIC) OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC,
    DCAB_VAR_INIT) ErrorCode)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S4>/RoutineServices_RC1314_Stop_sys1' */
    /* Outport: '<Root>/VeDCAB_e_Routine_RC1314_ActGriShu2Cal_Op' incorporates:
     *  Constant: '<S382>/Constant'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC1314_ActGriShu2Cal_Op_Value
        (CeDCAB_e_Routine_Stop);

    /* SignalConversion generated from: '<S348>/ErrorCode' */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S348>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S4>/RoutineServices_RC1314_Stop_sys1' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) RoutineServices_RC1330_RequestResults(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) DataOut_DcmDspRequestRoutineResultsOutSignal_0, P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    TeAADR_e_AAD_EOLCalibration tmpRead;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeAADR_e_AAD_EOLCalResults' */
    (void)Rte_Read_VeAADR_e_AAD_EOLCalResults_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S4>/RoutineServices_RC1330_RequestResult_sys2' */
    /* Outport: '<Root>/VeDCAB_e_Routine_RC1330_ActAirDamCal_Op' incorporates:
     *  Constant: '<S383>/Constant'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC1330_ActAirDamCal_Op_Value
        (CeDCAB_e_Routine_ResultRequest);

    /* SignalConversion generated from: '<S349>/DataOut_DcmDspRequestRoutineResultsOutSignal_0' incorporates:
     *  Inport: '<Root>/VeAADR_e_AAD_EOLCalResults'
     *  SignalConversion generated from: '<S349>/VeFSCR_e_AGS_RoutineControl'
     */
    *DataOut_DcmDspRequestRoutineResultsOutSignal_0 = (uint8)tmpRead;

    /* SignalConversion generated from: '<S349>/ErrorCode' */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S349>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S4>/RoutineServices_RC1330_RequestResult_sys2' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) RoutineServices_RC1330_Start(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(Dcm_NegativeResponseCodeType,
    AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S4>/RoutineServices_RC1330_Start_sys2' */
    /* Outport: '<Root>/VeDCAB_e_Routine_RC1330_ActAirDamCal_Op' incorporates:
     *  Constant: '<S384>/Constant'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC1330_ActAirDamCal_Op_Value
        (CeDCAB_e_Routine_Start);

    /* SignalConversion generated from: '<S350>/ErrorCode' */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S350>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S4>/RoutineServices_RC1330_Start_sys2' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) RoutineServices_RC1330_Stop(VAR(Dcm_OpStatusType,
    AUTOMATIC) OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC,
    DCAB_VAR_INIT) ErrorCode)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S4>/RoutineServices_RC1330_Stop_sys2' */
    /* Outport: '<Root>/VeDCAB_e_Routine_RC1330_ActAirDamCal_Op' incorporates:
     *  Constant: '<S385>/Constant'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC1330_ActAirDamCal_Op_Value
        (CeDCAB_e_Routine_Stop);

    /* SignalConversion generated from: '<S351>/ErrorCode' */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S351>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S4>/RoutineServices_RC1330_Stop_sys2' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) RoutineServices_RC1332_RequestResults(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) DataOut_DcmDspRequestRoutineResultsOutSignal_0, P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    /* local block i/o variables */
    TeRCVR_e_EXV_Routine_Sts rtb_TmpLatchAtVeRCVR_e_EEXV_Rtn;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S4>/RoutineServices_RC1332_RequestResult_sys' */
    /* SignalConversion generated from: '<S352>/VeRCVR_e_EEXV_RtnSts' incorporates:
     *  Inport: '<Root>/VeRCVR_e_EEXV_RtnSts'
     */
    (void)Rte_Read_VeRCVR_e_EEXV_RtnSts_Value(&rtb_TmpLatchAtVeRCVR_e_EEXV_Rtn);

    /* Outport: '<Root>/VeDCAB_e_Routine_RC1332_ACRefExpValActCCal_Op' incorporates:
     *  Constant: '<S386>/Constant'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC1332_ACRefExpValActCCal_Op_Value
        (CeDCAB_e_Routine_ResultRequest);

    /* SignalConversion generated from: '<S352>/DataOut_DcmDspRequestRoutineResultsOutSignal_0' incorporates:
     *  DataTypeConversion: '<S352>/Data Type Conversion'
     *  SignalConversion generated from: '<S352>/VeRCVR_e_EEXV_RtnSts'
     */
    *DataOut_DcmDspRequestRoutineResultsOutSignal_0 = (uint8)
        rtb_TmpLatchAtVeRCVR_e_EEXV_Rtn;

    /* SignalConversion generated from: '<S352>/ErrorCode' */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S352>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S4>/RoutineServices_RC1332_RequestResult_sys' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) RoutineServices_RC1332_Start(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) DataOut_DcmDspStartRoutineOutSignal_0, P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    /* local block i/o variables */
    TeRCVR_e_EXV_Routine_Sts rtb_TmpLatchAtVeRCVR_e_EEXV_R_l;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S4>/RoutineServices_RC1332_Start_sys' */
    /* SignalConversion generated from: '<S353>/VeRCVR_e_EEXV_RtnSts' incorporates:
     *  Inport: '<Root>/VeRCVR_e_EEXV_RtnSts'
     */
    (void)Rte_Read_VeRCVR_e_EEXV_RtnSts_Value(&rtb_TmpLatchAtVeRCVR_e_EEXV_R_l);

    /* Outport: '<Root>/VeDCAB_e_Routine_RC1332_ACRefExpValActCCal_Op' incorporates:
     *  Constant: '<S387>/Constant'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC1332_ACRefExpValActCCal_Op_Value
        (CeDCAB_e_Routine_Start);

    /* SignalConversion generated from: '<S353>/DataOut_DcmDspStartRoutineOutSignal_0' incorporates:
     *  DataTypeConversion: '<S353>/Data Type Conversion'
     *  SignalConversion generated from: '<S353>/VeRCVR_e_EEXV_RtnSts'
     */
    *DataOut_DcmDspStartRoutineOutSignal_0 = (uint8)
        rtb_TmpLatchAtVeRCVR_e_EEXV_R_l;

    /* SignalConversion generated from: '<S353>/ErrorCode' */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S353>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S4>/RoutineServices_RC1332_Start_sys' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) RoutineServices_RC1332_Stop(VAR(Dcm_OpStatusType,
    AUTOMATIC) OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC,
    DCAB_VAR_INIT) ErrorCode)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S4>/RoutineServices_RC1332_Stop_sys' */
    /* Outport: '<Root>/VeDCAB_e_Routine_RC1332_ACRefExpValActCCal_Op' incorporates:
     *  Constant: '<S388>/Constant'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC1332_ACRefExpValActCCal_Op_Value
        (CeDCAB_e_Routine_Stop);

    /* SignalConversion generated from: '<S354>/ErrorCode' */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S354>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S4>/RoutineServices_RC1332_Stop_sys' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) RoutineServices_RC1333_RequestResults(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) DataOut_DcmDspRequestRoutineResultsOutSignal_0, P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    /* local block i/o variables */
    TeRCVR_e_EXV_Routine_Sts rtb_TmpLatchAtVeRCVR_e_OEXV_Rtn;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S4>/RoutineServices_RC1333_RequestResult_sys' */
    /* SignalConversion generated from: '<S355>/VeRCVR_e_OEXV_RtnSts' incorporates:
     *  Inport: '<Root>/VeRCVR_e_OEXV_RtnSts'
     */
    (void)Rte_Read_VeRCVR_e_OEXV_RtnSts_Value(&rtb_TmpLatchAtVeRCVR_e_OEXV_Rtn);

    /* Outport: '<Root>/VeDCAB_e_Routine_RC1333_ACRefExpValActDCal_Op' incorporates:
     *  Constant: '<S389>/Constant'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC1333_ACRefExpValActDCal_Op_Value
        (CeDCAB_e_Routine_ResultRequest);

    /* SignalConversion generated from: '<S355>/DataOut_DcmDspRequestRoutineResultsOutSignal_0' incorporates:
     *  DataTypeConversion: '<S355>/Data Type Conversion'
     *  SignalConversion generated from: '<S355>/VeRCVR_e_OEXV_RtnSts'
     */
    *DataOut_DcmDspRequestRoutineResultsOutSignal_0 = (uint8)
        rtb_TmpLatchAtVeRCVR_e_OEXV_Rtn;

    /* SignalConversion generated from: '<S355>/ErrorCode' */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S355>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S4>/RoutineServices_RC1333_RequestResult_sys' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) RoutineServices_RC1333_Start(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) DataOut_DcmDspStartRoutineOutSignal_0, P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    /* local block i/o variables */
    TeRCVR_e_EXV_Routine_Sts rtb_TmpLatchAtVeRCVR_e_OEXV_R_m;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S4>/RoutineServices_RC1333_Start_sys' */
    /* SignalConversion generated from: '<S356>/VeRCVR_e_OEXV_RtnSts' incorporates:
     *  Inport: '<Root>/VeRCVR_e_OEXV_RtnSts'
     */
    (void)Rte_Read_VeRCVR_e_OEXV_RtnSts_Value(&rtb_TmpLatchAtVeRCVR_e_OEXV_R_m);

    /* Outport: '<Root>/VeDCAB_e_Routine_RC1333_ACRefExpValActDCal_Op' incorporates:
     *  Constant: '<S390>/Constant'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC1333_ACRefExpValActDCal_Op_Value
        (CeDCAB_e_Routine_Start);

    /* SignalConversion generated from: '<S356>/DataOut_DcmDspStartRoutineOutSignal_0' incorporates:
     *  DataTypeConversion: '<S356>/Data Type Conversion'
     *  SignalConversion generated from: '<S356>/VeRCVR_e_OEXV_RtnSts'
     */
    *DataOut_DcmDspStartRoutineOutSignal_0 = (uint8)
        rtb_TmpLatchAtVeRCVR_e_OEXV_R_m;

    /* SignalConversion generated from: '<S356>/ErrorCode' */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S356>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S4>/RoutineServices_RC1333_Start_sys' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) RoutineServices_RC1333_Stop(VAR(Dcm_OpStatusType,
    AUTOMATIC) OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC,
    DCAB_VAR_INIT) ErrorCode)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S4>/RoutineServices_RC1333_Stop_sys' */
    /* Outport: '<Root>/VeDCAB_e_Routine_RC1333_ACRefExpValActDCal_Op' incorporates:
     *  Constant: '<S391>/Constant'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC1333_ACRefExpValActDCal_Op_Value
        (CeDCAB_e_Routine_Stop);

    /* SignalConversion generated from: '<S357>/ErrorCode' */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S357>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S4>/RoutineServices_RC1333_Stop_sys' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) RoutineServices_RC1336_RequestResults(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(uint8, AUTOMATIC,
    DCAB_VAR_INIT) DataOut_DcmDspRequestRoutineResultsOutSignal_0, P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    TeRTMR_e_WEDToothAbutResults tmpRead;
    UNUSED_PARAMETER(OpStatus);

    /* Inport: '<Root>/VeRTMR_e_WED_ToothAbutResult' */
    (void)Rte_Read_VeRTMR_e_WED_ToothAbutResult_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S4>/RoutineServices_RC1336_RequestResult_sys' */
    /* Outport: '<Root>/VeDCAB_e_Routine_RC1336_ToothAbutmentLearning_Op' incorporates:
     *  Constant: '<S392>/Constant'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC1336_ToothAbutmentLearning_Op_Value
        (CeDCAB_e_Routine_ResultRequest);

    /* SignalConversion generated from: '<S358>/DataOut_DcmDspRequestRoutineResultsOutSignal_0' incorporates:
     *  Inport: '<Root>/VeRTMR_e_WED_ToothAbutResult'
     *  SignalConversion generated from: '<S358>/VeRTMR_e_WED_ToothAbutResult'
     */
    *DataOut_DcmDspRequestRoutineResultsOutSignal_0 = (uint8)tmpRead;

    /* SignalConversion generated from: '<S358>/ErrorCode' */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S358>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S4>/RoutineServices_RC1336_RequestResult_sys' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) RoutineServices_RC1336_Start(VAR
    (Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR(Dcm_NegativeResponseCodeType,
    AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S4>/RoutineServices_RC1336_Start_sys' */
    /* Outport: '<Root>/VeDCAB_e_Routine_RC1336_ToothAbutmentLearning_Op' incorporates:
     *  Constant: '<S393>/Constant'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC1336_ToothAbutmentLearning_Op_Value
        (CeDCAB_e_Routine_Start);

    /* SignalConversion generated from: '<S359>/ErrorCode' */
    *ErrorCode = DCM_POS_RESP;

    /* SignalConversion generated from: '<S359>/ERR' */
    return 0U;

    /* End of Outputs for SubSystem: '<S4>/RoutineServices_RC1336_Start_sys' */
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RWD2800_Data_WriteData(CONST(uint8,
    AUTOMATIC) Data[2], VAR(Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    Std_ReturnType rty_ERR_6f;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S5>/DataServices_RWD2800_Data_WriteData' */
    /* Outport: '<Root>/VeDCAB_d_IP_PRNDLTestFlags_DidWrite' incorporates:
     *  ArithShift: '<S394>/BitShift'
     *  DataTypeConversion: '<S394>/DTConv1'
     *  S-Function (sfix_bitop): '<S394>/Bitwise'
     *  SignalConversion generated from: '<S394>/Data'
     */
    (void)Rte_Write_VeDCAB_d_IP_PRNDLTestFlags_DidWrite_Value((uint16)((sint32)
        (((sint32)((uint32)(((uint32)Data[0]) << 8ULL))) | ((sint32)Data[1]))));

    /* SignalConversion generated from: '<S394>/ERR' */
    rty_ERR_6f = 0U;

    /* SignalConversion generated from: '<S394>/Error' */
    *ErrorCode = DCM_POS_RESP;

    /* End of Outputs for SubSystem: '<S5>/DataServices_RWD2800_Data_WriteData' */
    return rty_ERR_6f;
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RWD3025_Data_WriteData(CONST(uint8,
    AUTOMATIC) Data[2], VAR(Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    Std_ReturnType rty_ERR_6g;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S5>/DataServices_RWD3025_Data_WriteData' */
    /* Outputs for Atomic SubSystem: '<S395>/Subsystem1' */
    /* Outport: '<Root>/VeDCAB_b_RWD3025_RadFanHandshake_disbld' incorporates:
     *  ArithShift: '<S395>/BitShift1'
     *  DataTypeConversion: '<S395>/DTConv3'
     *  Inport: '<S412>/In1'
     *  S-Function (sfix_bitop): '<S395>/Bitwise1'
     *  SignalConversion generated from: '<S395>/Data'
     */
    (void)Rte_Write_VeDCAB_b_RWD3025_RadFanHandshake_disbld_Value(((((uint32)
        Data[0]) >> 1ULL) & 1U) != 0U);

    /* Outport: '<Root>/VeDCAB_b_RWD3025_ElectricOnlyTest_Enabled' incorporates:
     *  ArithShift: '<S395>/BitShift3'
     *  DataTypeConversion: '<S395>/DTConv6'
     *  Inport: '<S412>/In2'
     *  S-Function (sfix_bitop): '<S395>/Bitwise3'
     *  SignalConversion generated from: '<S395>/Data'
     */
    (void)Rte_Write_VeDCAB_b_RWD3025_ElectricOnlyTest_Enabled_Value(((((uint32)
        Data[0]) >> 3ULL) & 1U) != 0U);

    /* Outport: '<Root>/VeDCAB_b_RWD3025_REMDisabled' incorporates:
     *  ArithShift: '<S395>/BitShift4'
     *  DataTypeConversion: '<S395>/DTConv8'
     *  Inport: '<S412>/In3'
     *  S-Function (sfix_bitop): '<S395>/Bitwise4'
     *  SignalConversion generated from: '<S395>/Data'
     */
    (void)Rte_Write_VeDCAB_b_RWD3025_REMDisabled_Value(((((uint32)Data[0]) >>
        4ULL) & 1U) != 0U);

    /* Outport: '<Root>/VeDCAB_y_RWD3025_EOMTest' incorporates:
     *  Inport: '<S412>/In4'
     *  SignalConversion generated from: '<S395>/Data'
     */
    (void)Rte_Write_VeDCAB_y_RWD3025_EOMTest_Value(Data[1]);

    /* End of Outputs for SubSystem: '<S395>/Subsystem1' */

    /* Outputs for Atomic SubSystem: '<S395>/Subsystem' */
    /* Outport: '<Root>/VeDCAB_b_RWD3025_InFieldMode' incorporates:
     *  DataTypeConversion: '<S395>/DTConv1'
     *  Inport: '<S411>/In1'
     *  S-Function (sfix_bitop): '<S395>/Bitwise'
     *  SignalConversion generated from: '<S395>/Data'
     */
    (void)Rte_Write_VeDCAB_b_RWD3025_InFieldMode_Value((((uint32)Data[0]) & 1U)
        != 0U);

    /* End of Outputs for SubSystem: '<S395>/Subsystem' */

    /* SignalConversion generated from: '<S395>/ERR' */
    rty_ERR_6g = 0U;

    /* SignalConversion generated from: '<S395>/Error' */
    *ErrorCode = DCM_POS_RESP;

    /* End of Outputs for SubSystem: '<S5>/DataServices_RWD3025_Data_WriteData' */
    return rty_ERR_6g;
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RWD3029_Data_WriteData(P2CONST
    (uint8, AUTOMATIC, DCAB_VAR_INIT) Data, VAR(Dcm_OpStatusType, AUTOMATIC)
    OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT)
    ErrorCode)
{
    Std_ReturnType rty_ERR_6h;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S5>/DataServices_RWD3029_Data_WriteData' */
    /* Outputs for Atomic SubSystem: '<S396>/Subsystem' */
    /* Outport: '<Root>/VeDCAB_b_RadFanTst_NotCmplte_DidWrite' incorporates:
     *  DataTypeConversion: '<S396>/DTConv1'
     *  Inport: '<S413>/In1'
     *  S-Function (sfix_bitop): '<S396>/Bitwise'
     */
    (void)Rte_Write_VeDCAB_b_RadFanTst_NotCmplte_DidWrite_Value((((uint32)(*Data))
        & 1U) != 0U);

    /* End of Outputs for SubSystem: '<S396>/Subsystem' */

    /* Outputs for Atomic SubSystem: '<S396>/Subsystem1' */
    /* Outport: '<Root>/VeDCAB_b_RadFanTst_Failed_DidWrite' incorporates:
     *  ArithShift: '<S396>/BitShift1'
     *  DataTypeConversion: '<S396>/DTConv3'
     *  Inport: '<S414>/In1'
     *  S-Function (sfix_bitop): '<S396>/Bitwise1'
     */
    (void)Rte_Write_VeDCAB_b_RadFanTst_Failed_DidWrite_Value(((((uint32)(*Data))
        >> 1ULL) & 1U) != 0U);

    /* End of Outputs for SubSystem: '<S396>/Subsystem1' */

    /* SignalConversion generated from: '<S396>/ERR' */
    rty_ERR_6h = 0U;

    /* SignalConversion generated from: '<S396>/Error' */
    *ErrorCode = DCM_POS_RESP;

    /* End of Outputs for SubSystem: '<S5>/DataServices_RWD3029_Data_WriteData' */
    return rty_ERR_6h;
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RWD3202_Data_WriteData(P2CONST
    (uint8, AUTOMATIC, DCAB_VAR_INIT) Data, VAR(Dcm_OpStatusType, AUTOMATIC)
    OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT)
    ErrorCode)
{
    Std_ReturnType rty_ERR_6i;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S5>/DataServices_RWD3202_Data_WriteData' */
    /* Outport: '<Root>/VeDCAB_b_RWD3202_ImpactResponse' incorporates:
     *  DataTypeConversion: '<S397>/DTConv1'
     *  S-Function (sfix_bitop): '<S397>/Bitwise'
     */
    (void)Rte_Write_VeDCAB_b_RWD3202_ImpactResponse_Value((((uint32)(*Data)) &
        1U) != 0U);

    /* SignalConversion generated from: '<S397>/ERR' */
    rty_ERR_6i = 0U;

    /* SignalConversion generated from: '<S397>/Error' */
    *ErrorCode = DCM_POS_RESP;

    /* End of Outputs for SubSystem: '<S5>/DataServices_RWD3202_Data_WriteData' */
    return rty_ERR_6i;
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RWD9E15_Data_WriteData(CONST(uint8,
    AUTOMATIC) Data[2], VAR(Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    Std_ReturnType rty_ERR_6j;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S5>/DataServices_RWD9E15_Data_WriteData' */
    /* Outputs for Atomic SubSystem: '<S398>/Subsystem1' */
    /* Outport: '<Root>/VeDCAB_b_Pv1MaxTestNotCmplt_DidWrite' incorporates:
     *  DataTypeConversion: '<S398>/DTConv1'
     *  Inport: '<S416>/In1'
     *  S-Function (sfix_bitop): '<S398>/Bitwise'
     *  SignalConversion generated from: '<S398>/Data'
     */
    (void)Rte_Write_VeDCAB_b_Pv1MaxTestNotCmplt_DidWrite_Value((((uint32)Data[0])
        & 1U) != 0U);

    /* Outport: '<Root>/VeDCAB_b_Pv1MinTestNotCmplt_DidWrite' incorporates:
     *  ArithShift: '<S398>/BitShift2'
     *  DataTypeConversion: '<S398>/DTConv5'
     *  Inport: '<S416>/In2'
     *  S-Function (sfix_bitop): '<S398>/Bitwise2'
     *  SignalConversion generated from: '<S398>/Data'
     */
    (void)Rte_Write_VeDCAB_b_Pv1MinTestNotCmplt_DidWrite_Value(((((uint32)Data[0])
        >> 2ULL) & 1U) != 0U);

    /* Outport: '<Root>/VeDCAB_b_Pv1MinTestFailed_DidWrite' incorporates:
     *  ArithShift: '<S398>/BitShift3'
     *  DataTypeConversion: '<S398>/DTConv7'
     *  Inport: '<S416>/In3'
     *  S-Function (sfix_bitop): '<S398>/Bitwise3'
     *  SignalConversion generated from: '<S398>/Data'
     */
    (void)Rte_Write_VeDCAB_b_Pv1MinTestFailed_DidWrite_Value(((((uint32)Data[0])
        >> 3ULL) & 1U) != 0U);

    /* Outport: '<Root>/VeDCAB_b_Pv2MaxTestNotCmplt_DidWrite' incorporates:
     *  ArithShift: '<S398>/BitShift4'
     *  DataTypeConversion: '<S398>/DTConv9'
     *  Inport: '<S416>/In4'
     *  S-Function (sfix_bitop): '<S398>/Bitwise4'
     *  SignalConversion generated from: '<S398>/Data'
     */
    (void)Rte_Write_VeDCAB_b_Pv2MaxTestNotCmplt_DidWrite_Value(((((uint32)Data[0])
        >> 4ULL) & 1U) != 0U);

    /* Outport: '<Root>/VeDCAB_b_Pv2MaxTestFailed_DidWrite' incorporates:
     *  ArithShift: '<S398>/BitShift5'
     *  DataTypeConversion: '<S398>/DTConv11'
     *  Inport: '<S416>/In5'
     *  S-Function (sfix_bitop): '<S398>/Bitwise5'
     *  SignalConversion generated from: '<S398>/Data'
     */
    (void)Rte_Write_VeDCAB_b_Pv2MaxTestFailed_DidWrite_Value(((((uint32)Data[0])
        >> 5ULL) & 1U) != 0U);

    /* Outport: '<Root>/VeDCAB_b_Pv2MinTestNotCmplt_DidWrite' incorporates:
     *  ArithShift: '<S398>/BitShift6'
     *  DataTypeConversion: '<S398>/DTConv13'
     *  Inport: '<S416>/In6'
     *  S-Function (sfix_bitop): '<S398>/Bitwise6'
     *  SignalConversion generated from: '<S398>/Data'
     */
    (void)Rte_Write_VeDCAB_b_Pv2MinTestNotCmplt_DidWrite_Value(((((uint32)Data[0])
        >> 6ULL) & 1U) != 0U);

    /* Outport: '<Root>/VeDCAB_b_Pv2MinTestFailed_DidWrite' incorporates:
     *  ArithShift: '<S398>/BitShift7'
     *  DataTypeConversion: '<S398>/DTConv15'
     *  Inport: '<S416>/In7'
     *  SignalConversion generated from: '<S398>/Data'
     */
    (void)Rte_Write_VeDCAB_b_Pv2MinTestFailed_DidWrite_Value(((sint32)((uint32)
        (((uint32)Data[0]) >> 7ULL))) != 0);

    /* End of Outputs for SubSystem: '<S398>/Subsystem1' */

    /* Outputs for Atomic SubSystem: '<S398>/Subsystem' */
    /* Outport: '<Root>/VeDCAB_b_Pv1MaxTestFailed_DidWrite' incorporates:
     *  ArithShift: '<S398>/BitShift1'
     *  DataTypeConversion: '<S398>/DTConv3'
     *  Inport: '<S415>/In1'
     *  S-Function (sfix_bitop): '<S398>/Bitwise1'
     *  SignalConversion generated from: '<S398>/Data'
     */
    (void)Rte_Write_VeDCAB_b_Pv1MaxTestFailed_DidWrite_Value(((((uint32)Data[0])
        >> 1ULL) & 1U) != 0U);

    /* End of Outputs for SubSystem: '<S398>/Subsystem' */

    /* SignalConversion generated from: '<S398>/ERR' */
    rty_ERR_6j = 0U;

    /* SignalConversion generated from: '<S398>/Error' */
    *ErrorCode = DCM_POS_RESP;

    /* End of Outputs for SubSystem: '<S5>/DataServices_RWD9E15_Data_WriteData' */
    return rty_ERR_6j;
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RWD9E20_Data_WriteData(CONST(uint8,
    AUTOMATIC) Data[2], VAR(Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    Std_ReturnType rty_ERR_6k;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S5>/DataServices_RWD9E20_Data_WriteData' */
    /* Outport: '<Root>/VeDCAB_U_Pvs1MinValue_DidWrite' incorporates:
     *  ArithShift: '<S399>/BitShift'
     *  Constant: '<S399>/Factor'
     *  DataTypeConversion: '<S399>/DTConv2'
     *  DataTypeConversion: '<S399>/DTConv3'
     *  Product: '<S399>/Prod'
     *  S-Function (sfix_bitop): '<S399>/Bitwise'
     *  SignalConversion generated from: '<S399>/Data'
     */
    (void)Rte_Write_VeDCAB_U_Pvs1MinValue_DidWrite_Value(((float32)((sint32)
        (((sint32)((uint32)(((uint32)Data[0]) << 8ULL))) | ((sint32)Data[1])))) *
        0.00489F);

    /* SignalConversion generated from: '<S399>/ERR' */
    rty_ERR_6k = 0U;

    /* SignalConversion generated from: '<S399>/Error' */
    *ErrorCode = DCM_POS_RESP;

    /* End of Outputs for SubSystem: '<S5>/DataServices_RWD9E20_Data_WriteData' */
    return rty_ERR_6k;
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RWD9E21_Data_WriteData(CONST(uint8,
    AUTOMATIC) Data[2], VAR(Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    Std_ReturnType rty_ERR_6l;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S5>/DataServices_RWD9E21_Data_WriteData' */
    /* Outport: '<Root>/VeDCAB_U_Pvs1MaxValue_DidWrite' incorporates:
     *  ArithShift: '<S400>/BitShift'
     *  Constant: '<S400>/Factor'
     *  DataTypeConversion: '<S400>/DTConv2'
     *  DataTypeConversion: '<S400>/DTConv3'
     *  Product: '<S400>/Prod'
     *  S-Function (sfix_bitop): '<S400>/Bitwise'
     *  SignalConversion generated from: '<S400>/Data'
     */
    (void)Rte_Write_VeDCAB_U_Pvs1MaxValue_DidWrite_Value(((float32)((sint32)
        (((sint32)((uint32)(((uint32)Data[0]) << 8ULL))) | ((sint32)Data[1])))) *
        0.00489F);

    /* SignalConversion generated from: '<S400>/ERR' */
    rty_ERR_6l = 0U;

    /* SignalConversion generated from: '<S400>/Error' */
    *ErrorCode = DCM_POS_RESP;

    /* End of Outputs for SubSystem: '<S5>/DataServices_RWD9E21_Data_WriteData' */
    return rty_ERR_6l;
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RWD9E22_Data_WriteData(CONST(uint8,
    AUTOMATIC) Data[2], VAR(Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    Std_ReturnType rty_ERR_6m;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S5>/DataServices_RWD9E22_Data_WriteData' */
    /* Outport: '<Root>/VeDCAB_U_Pvs2MinValue_DidWrite' incorporates:
     *  ArithShift: '<S401>/BitShift'
     *  Constant: '<S401>/Factor'
     *  DataTypeConversion: '<S401>/DTConv2'
     *  DataTypeConversion: '<S401>/DTConv3'
     *  Product: '<S401>/Prod'
     *  S-Function (sfix_bitop): '<S401>/Bitwise'
     *  SignalConversion generated from: '<S401>/Data'
     */
    (void)Rte_Write_VeDCAB_U_Pvs2MinValue_DidWrite_Value(((float32)((sint32)
        (((sint32)((uint32)(((uint32)Data[0]) << 8ULL))) | ((sint32)Data[1])))) *
        0.00489F);

    /* SignalConversion generated from: '<S401>/ERR' */
    rty_ERR_6m = 0U;

    /* SignalConversion generated from: '<S401>/Error' */
    *ErrorCode = DCM_POS_RESP;

    /* End of Outputs for SubSystem: '<S5>/DataServices_RWD9E22_Data_WriteData' */
    return rty_ERR_6m;
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RWD9E23_Data_WriteData(CONST(uint8,
    AUTOMATIC) Data[2], VAR(Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    Std_ReturnType rty_ERR_6n;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S5>/DataServices_RWD9E23_Data_WriteData' */
    /* Outport: '<Root>/VeDCAB_U_Pvs2MaxValue_DidWrite' incorporates:
     *  ArithShift: '<S402>/BitShift'
     *  Constant: '<S402>/Factor'
     *  DataTypeConversion: '<S402>/DTConv2'
     *  DataTypeConversion: '<S402>/DTConv3'
     *  Product: '<S402>/Prod'
     *  S-Function (sfix_bitop): '<S402>/Bitwise'
     *  SignalConversion generated from: '<S402>/Data'
     */
    (void)Rte_Write_VeDCAB_U_Pvs2MaxValue_DidWrite_Value(((float32)((sint32)
        (((sint32)((uint32)(((uint32)Data[0]) << 8ULL))) | ((sint32)Data[1])))) *
        0.00489F);

    /* SignalConversion generated from: '<S402>/ERR' */
    rty_ERR_6n = 0U;

    /* SignalConversion generated from: '<S402>/Error' */
    *ErrorCode = DCM_POS_RESP;

    /* End of Outputs for SubSystem: '<S5>/DataServices_RWD9E23_Data_WriteData' */
    return rty_ERR_6n;
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RWD9E3B_Data_WriteData(CONST(uint8,
    AUTOMATIC) Data[2], VAR(Dcm_OpStatusType, AUTOMATIC) OpStatus, P2VAR
    (Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT) ErrorCode)
{
    Std_ReturnType rty_ERR_6o;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S5>/DataServices_RWD9E3B_Data_WriteData' */
    /* Outport: '<Root>/VeDCAB_milel_RWD9E3B_IPEETstMilgeLmt' incorporates:
     *  ArithShift: '<S403>/BitShift'
     *  Constant: '<S403>/Factor'
     *  DataTypeConversion: '<S403>/DTConv2'
     *  DataTypeConversion: '<S403>/DTConv3'
     *  Product: '<S403>/Prod'
     *  S-Function (sfix_bitop): '<S403>/Bitwise'
     *  SignalConversion generated from: '<S403>/Data'
     */
    (void)Rte_Write_VeDCAB_milel_RWD9E3B_IPEETstMilgeLmt_Value(((float32)
        ((sint32)(((sint32)((uint32)(((uint32)Data[0]) << 8ULL))) | ((sint32)
        Data[1])))) * 0.1F);

    /* SignalConversion generated from: '<S403>/ERR' */
    rty_ERR_6o = 0U;

    /* SignalConversion generated from: '<S403>/Error' */
    *ErrorCode = DCM_POS_RESP;

    /* End of Outputs for SubSystem: '<S5>/DataServices_RWD9E3B_Data_WriteData' */
    return rty_ERR_6o;
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RWD9EEB_Data_WriteData(P2CONST
    (uint8, AUTOMATIC, DCAB_VAR_INIT) Data, VAR(Dcm_OpStatusType, AUTOMATIC)
    OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT)
    ErrorCode)
{
    Std_ReturnType rty_ERR_6p;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S5>/DataServices_RWD9EEB_Data_WriteData' */
    /* Outport: '<Root>/VeDCAB_Pct_RWD9EEB_InPlant_SOC_Setpoint' incorporates:
     *  Constant: '<S404>/Factor'
     *  DataTypeConversion: '<S404>/DTConv1'
     *  DataTypeConversion: '<S404>/DTConv2'
     *  Product: '<S404>/Prod'
     */
    (void)Rte_Write_VeDCAB_Pct_RWD9EEB_InPlant_SOC_Setpoint_Value(((float32)
        (*Data)) * 0.5F);

    /* SignalConversion generated from: '<S404>/ERR' */
    rty_ERR_6p = 0U;

    /* SignalConversion generated from: '<S404>/Error' */
    *ErrorCode = DCM_POS_RESP;

    /* End of Outputs for SubSystem: '<S5>/DataServices_RWD9EEB_Data_WriteData' */
    return rty_ERR_6p;
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RWD9EEC_Data_WriteData(P2CONST
    (uint8, AUTOMATIC, DCAB_VAR_INIT) Data, VAR(Dcm_OpStatusType, AUTOMATIC)
    OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT)
    ErrorCode)
{
    Std_ReturnType rty_ERR_6q;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S5>/DataServices_RWD9EEC_Data_WriteData' */
    /* Outport: '<Root>/VeDCAB_Pct_RWD9EEC_REM_Logistics_SOC_Setpoint' incorporates:
     *  Constant: '<S405>/Factor'
     *  DataTypeConversion: '<S405>/DTConv1'
     *  DataTypeConversion: '<S405>/DTConv2'
     *  Product: '<S405>/Prod'
     */
    (void)Rte_Write_VeDCAB_Pct_RWD9EEC_REM_Logistics_SOC_Setpoint_Value
        (((float32)(*Data)) * 0.5F);

    /* SignalConversion generated from: '<S405>/ERR' */
    rty_ERR_6q = 0U;

    /* SignalConversion generated from: '<S405>/Error' */
    *ErrorCode = DCM_POS_RESP;

    /* End of Outputs for SubSystem: '<S5>/DataServices_RWD9EEC_Data_WriteData' */
    return rty_ERR_6q;
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RWDB604_Data_WriteData(P2CONST
    (uint8, AUTOMATIC, DCAB_VAR_INIT) Data, VAR(Dcm_OpStatusType, AUTOMATIC)
    OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT)
    ErrorCode)
{
    Std_ReturnType rty_ERR_6r;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S5>/DataServices_RWDB604_Data_WriteData' */
    /* Outport: '<Root>/VeDCAB_e_RWDB604_DCChrg_TestSts_DidWrite' incorporates:
     *  DataTypeConversion: '<S406>/DTConv1'
     */
    (void)Rte_Write_VeDCAB_e_RWDB604_DCChrg_TestSts_DidWrite_Value
        ((TeOBCR_e_DCChrg_TestSts)safe_cast_to_TeOBCR_e_DCChrg_Te(*Data));

    /* SignalConversion generated from: '<S406>/ERR' */
    rty_ERR_6r = 0U;

    /* SignalConversion generated from: '<S406>/Error' */
    *ErrorCode = DCM_POS_RESP;

    /* End of Outputs for SubSystem: '<S5>/DataServices_RWDB604_Data_WriteData' */
    return rty_ERR_6r;
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RWDB607_Data_WriteData(P2CONST
    (uint8, AUTOMATIC, DCAB_VAR_INIT) Data, VAR(Dcm_OpStatusType, AUTOMATIC)
    OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT)
    ErrorCode)
{
    Std_ReturnType rty_ERR_6s;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S5>/DataServices_RWDB607_Data_WriteData' */
    /* Outport: '<Root>/VeDCAB_b_CreepModeReq_DidWrite' incorporates:
     *  DataTypeConversion: '<S407>/DTConv1'
     *  S-Function (sfix_bitop): '<S407>/Bitwise'
     */
    (void)Rte_Write_VeDCAB_b_CreepModeReq_DidWrite_Value((((uint32)(*Data)) & 1U)
        != 0U);

    /* SignalConversion generated from: '<S407>/ERR' */
    rty_ERR_6s = 0U;

    /* SignalConversion generated from: '<S407>/Error' */
    *ErrorCode = DCM_POS_RESP;

    /* End of Outputs for SubSystem: '<S5>/DataServices_RWDB607_Data_WriteData' */
    return rty_ERR_6s;
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RWDB61B_Data_WriteData(P2CONST
    (uint8, AUTOMATIC, DCAB_VAR_INIT) Data, VAR(Dcm_OpStatusType, AUTOMATIC)
    OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT)
    ErrorCode)
{
    Std_ReturnType rty_ERR_6t;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S5>/DataServices_RWDB61B_Data_WriteData' */
    /* Outport: '<Root>/VeDCAB_v_STSLSpdLimMPH_DidWrite' incorporates:
     *  DataTypeConversion: '<S408>/DTConv1'
     */
    (void)Rte_Write_VeDCAB_v_STSLSpdLimMPH_DidWrite_Value((float32)(*Data));

    /* SignalConversion generated from: '<S408>/ERR' */
    rty_ERR_6t = 0U;

    /* SignalConversion generated from: '<S408>/Error' */
    *ErrorCode = DCM_POS_RESP;

    /* End of Outputs for SubSystem: '<S5>/DataServices_RWDB61B_Data_WriteData' */
    return rty_ERR_6t;
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RWDB62F_Data_WriteData(P2CONST
    (uint8, AUTOMATIC, DCAB_VAR_INIT) Data, VAR(Dcm_OpStatusType, AUTOMATIC)
    OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT)
    ErrorCode)
{
    Std_ReturnType rty_ERR_6u;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S5>/DataServices_RWDB62F_Data_WriteData' */
    /* Outport: '<Root>/VeDCAB_b_RWDB62F_ActAirDamOperMd_Op' incorporates:
     *  DataTypeConversion: '<S409>/DTConv1'
     *  S-Function (sfix_bitop): '<S409>/Bitwise'
     */
    (void)Rte_Write_VeDCAB_b_RWDB62F_ActAirDamOperMd_Op_Value((((uint32)(*Data))
        & 1U) != 0U);

    /* SignalConversion generated from: '<S409>/ERR' */
    rty_ERR_6u = 0U;

    /* SignalConversion generated from: '<S409>/Error' */
    *ErrorCode = DCM_POS_RESP;

    /* End of Outputs for SubSystem: '<S5>/DataServices_RWDB62F_Data_WriteData' */
    return rty_ERR_6u;
}

/* Model step function */
FUNC(Std_ReturnType, DCAB_CODE) DataServices_RWDB652_Data_WriteData(P2CONST
    (uint8, AUTOMATIC, DCAB_VAR_INIT) Data, VAR(Dcm_OpStatusType, AUTOMATIC)
    OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCAB_VAR_INIT)
    ErrorCode)
{
    Std_ReturnType rty_ERR_6v;
    UNUSED_PARAMETER(OpStatus);

    /* Outputs for Function Call SubSystem: '<S5>/DataServices_RWDB652_Data_WriteData' */
    /* Outport: '<Root>/VeDCAB_e_RWDB652_WEDExtToolCmd' incorporates:
     *  DataTypeConversion: '<S410>/DTConv1'
     *  S-Function (sfix_bitop): '<S410>/Bitwise'
     */
    (void)Rte_Write_VeDCAB_e_RWDB652_WEDExtToolCmd_Value((TeADIR_e_WEDExtToolCmd)
        safe_cast_to_TeADIR_e_WEDExtToo((uint8)((*Data) & ((uint8)3))));

    /* SignalConversion generated from: '<S410>/ERR' */
    rty_ERR_6v = 0U;

    /* SignalConversion generated from: '<S410>/Error' */
    *ErrorCode = DCM_POS_RESP;

    /* End of Outputs for SubSystem: '<S5>/DataServices_RWDB652_Data_WriteData' */
    return rty_ERR_6v;
}

/* Model initialize function */
FUNC(void, DCAB_CODE) DCAB_ac_Init(void)
{
    /* SystemInitialize for Outport: '<Root>/VeDCAB_e_IOControl_IOCD001_HigTemShuVal_Op' incorporates:
     *  Merge: '<S1>/M_VeDCAB_e_IOControl_IOCD001_HigTemShuVal_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD001_HigTemShuVal_Op_Value
        (CeDCAB_e_IO_NOP);

    /* SystemInitialize for Outport: '<Root>/VeDCAB_e_IOControl_IOCD002_FtRfgtShtoff_VlvCmd_Op' incorporates:
     *  Merge: '<S1>/M_VeDCAB_e_IOControl_IOCD002_FtRfgtShtoff_VlvCmd_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD002_FtRfgtShtoff_VlvCmd_Op_Value
        (CeDCAB_e_IO_NOP);

    /* SystemInitialize for Outport: '<Root>/VeDCAB_e_IOControl_IOCD004_RadFanDutCycle_Op' incorporates:
     *  Merge: '<S1>/M_VeDCAB_e_IOControl_IOCD004_RadFanDutCycle_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD004_RadFanDutCycle_Op_Value
        (CeDCAB_e_IO_NOP);

    /* SystemInitialize for Outport: '<Root>/VeDCAB_e_IOControl_IOCD006_HigVolCooHeater_Op' incorporates:
     *  Merge: '<S1>/M_VeDCAB_e_IOControl_IOCD006_HigVolCooHeater_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD006_HigVolCooHeater_Op_Value
        (CeDCAB_e_IO_NOP);

    /* SystemInitialize for Outport: '<Root>/VeDCAB_e_IOControl_IOCD007_ChlrRfgtShtoff_VlvCmd_Op' incorporates:
     *  Merge: '<S1>/M_VeDCAB_e_IOControl_IOCD007_ChlrRfgtShtoff_VlvCmd_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD007_ChlrRfgtShtoff_VlvCmd_Op_Value
        (CeDCAB_e_IO_NOP);

    /* SystemInitialize for Outport: '<Root>/VeDCAB_e_IOControl_IOCD00D_HigTemAuxPump_Op' incorporates:
     *  Merge: '<S1>/M_VeDCAB_e_IOControl_IOCD00D_HigTemAuxPump_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD00D_HigTemAuxPump_Op_Value
        (CeDCAB_e_IO_NOP);

    /* SystemInitialize for Outport: '<Root>/VeDCAB_e_IOControl_APM_Status_Op' incorporates:
     *  Merge: '<S1>/M_VeDCAB_e_IOControl_APM_Status_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_APM_Status_Op_Value(CeDCAB_e_IO_NOP);

    /* SystemInitialize for Outport: '<Root>/VeDCAB_e_IOControl_IOCD013_CompSpdTgt_Op' incorporates:
     *  Merge: '<S1>/M_VeDCAB_e_IOControl_IOCD013_CompSpdTgt_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD013_CompSpdTgt_Op_Value
        (CeDCAB_e_IO_NOP);

    /* SystemInitialize for Outport: '<Root>/VeDCAB_e_IOControl_Charge_Port_Lock_Op' incorporates:
     *  Merge: '<S1>/M_VeDCAB_e_IOControl_Charge_Port_Lock_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_Charge_Port_Lock_Op_Value(CeDCAB_e_IO_NOP);

    /* SystemInitialize for Outport: '<Root>/VeDCAB_e_IOControl_IOCD016_MtrElecCoolPmpA_Op' incorporates:
     *  Merge: '<S1>/M_VeDCAB_e_IOControl_IOCD016_MtrElecCoolPmpA_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD016_MtrElecCoolPmpA_Op_Value
        (CeDCAB_e_IO_NOP);

    /* SystemInitialize for Outport: '<Root>/VeDCAB_e_IOControl_IOCD017_MtrElecCoolPmpB_Op' incorporates:
     *  Merge: '<S1>/M_VeDCAB_e_IOControl_IOCD017_MtrElecCoolPmpB_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD017_MtrElecCoolPmpB_Op_Value
        (CeDCAB_e_IO_NOP);

    /* SystemInitialize for Outport: '<Root>/VeDCAB_e_IOControl_IOCD019_BatteryCoolPump_Op' incorporates:
     *  Merge: '<S1>/M_VeDCAB_e_IOControl_IOCD019_BatteryCoolPump_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD019_BatteryCoolPump_Op_Value
        (CeDCAB_e_IO_NOP);

    /* SystemInitialize for Outport: '<Root>/VeDCAB_e_IOControl_IOCDOIC_PropSysCoolCntrlValvA_Op' incorporates:
     *  Merge: '<S1>/M_VeDCAB_e_IOControl_IOCDOIC_PropSysCoolCntrlValvA_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCDOIC_PropSysCoolCntrlValvA_Op_Value
        (CeDCAB_e_IO_NOP);

    /* SystemInitialize for Outport: '<Root>/VeDCAB_e_IOControl_IOCD01F_ACRefrExpValvActACntrl_Op' incorporates:
     *  Merge: '<S1>/M_VeDCAB_e_IOControl_IOCD01F_ACRefrExpValvActACntrl_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD01F_ACRefrExpValvActACntrl_Op_Value
        (CeDCAB_e_IO_NOP);

    /* SystemInitialize for Outport: '<Root>/VeDCAB_e_IOControl_IOCD022_PropSysCoolCntrlValvB_Op' incorporates:
     *  Merge: '<S1>/M_VeDCAB_e_IOControl_IOCD022_PropSysCoolCntrlValvB_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD022_PropSysCoolCntrlValvB_Op_Value
        (CeDCAB_e_IO_NOP);

    /* SystemInitialize for Outport: '<Root>/VeDCAB_e_IOControl_IOCD023_PropSysCoolCntrlValvC_Op' incorporates:
     *  Merge: '<S1>/M_VeDCAB_e_IOControl_IOCD023_PropSysCoolCntrlValvC_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD023_PropSysCoolCntrlValvC_Op_Value
        (CeDCAB_e_IO_NOP);

    /* SystemInitialize for Outport: '<Root>/VeDCAB_e_IOCD025_AGS_PstnCmnd' incorporates:
     *  Merge: '<S1>/M_VeDCAB_e_IOCD025_AGS_PstnCmnd'
     */
    (void)Rte_Write_VeDCAB_e_IOCD025_AGS_PstnCmnd_Value(CeFSCR_e_Open100);

    /* SystemInitialize for Outport: '<Root>/VeDCAB_e_IOControl_IOCD025_AGS_PstnCmnd_Op' incorporates:
     *  Merge: '<S1>/M_VeDCAB_e_IOControl_IOCD025_AGS_PstnCmnd_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD025_AGS_PstnCmnd_Op_Value
        (CeDCAB_e_IO_NOP);

    /* SystemInitialize for Outport: '<Root>/VeDCAB_e_IOCD026_AGS2_PstnCmnd' incorporates:
     *  Merge: '<S1>/M_VeDCAB_e_IOCD026_AGS2_PstnCmnd'
     */
    (void)Rte_Write_VeDCAB_e_IOCD026_AGS2_PstnCmnd_Value(CeFSCR_e_Open100);

    /* SystemInitialize for Outport: '<Root>/VeDCAB_e_IOControl_IOCD026_AGS2_PstnCmnd_Op' incorporates:
     *  Merge: '<S1>/M_VeDCAB_e_IOControl_IOCD026_AGS2_PstnCmnd_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD026_AGS2_PstnCmnd_Op_Value
        (CeDCAB_e_IO_NOP);

    /* SystemInitialize for Outport: '<Root>/VeDCAB_e_IOControl_IOCD027_PowOilPumACon_Pump_Speed_Op' incorporates:
     *  Merge: '<S1>/M_VeDCAB_e_IOControl_IOCD027_PowOilPumACon_Pump_Speed_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD027_PowOilPumACon_Pump_Speed_Op_Value
        (CeDCAB_e_IO_NOP);

    /* SystemInitialize for Outport: '<Root>/VeDCAB_e_IOControl_IOCD028_PowOilPumBCon_Pump_Speed_Op' incorporates:
     *  Merge: '<S1>/M_VeDCAB_e_IOControl_IOCD028_PowOilPumBCon_Pump_Speed_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD028_PowOilPumBCon_Pump_Speed_Op_Value
        (CeDCAB_e_IO_NOP);

    /* SystemInitialize for Outport: '<Root>/VeDCAB_e_IOControl_IOCD031_ACRefrExpValvActACntrl_Op' incorporates:
     *  Merge: '<S1>/M_VeDCAB_e_IOControl_IOCD031_ACRefrExpValvActACntrl_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD031_ACRefrExpValvActACntrl_Op_Value
        (CeDCAB_e_IO_NOP);

    /* SystemInitialize for Outport: '<Root>/VeDCAB_e_IOControl_IOCD032_ACRefrExpValvActCCntrl_Op' incorporates:
     *  Merge: '<S1>/M_VeDCAB_e_IOControl_IOCD032_ACRefrExpValvActCCntrl_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD032_ACRefrExpValvActCCntrl_Op_Value
        (CeDCAB_e_IO_NOP);

    /* SystemInitialize for Outport: '<Root>/VeDCAB_e_IOControl_IOCD033_ACRefrExpValvActDCntrl_Op' incorporates:
     *  Merge: '<S1>/M_VeDCAB_e_IOControl_IOCD033_ACRefrExpValvActDCntrl_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD033_ACRefrExpValvActDCntrl_Op_Value
        (CeDCAB_e_IO_NOP);

    /* SystemInitialize for Outport: '<Root>/VeDCAB_e_IOControl_IOCD01A_BatCooHea_Op' incorporates:
     *  Merge: '<S1>/M_VeDCAB_e_IOControl_IOCD01A_BatCooHea_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD01A_BatCooHea_Op_Value
        (CeDCAB_e_IO_NOP);

    /* SystemInitialize for Outport: '<Root>/VeDCAB_e_IOControl_IOCD01E_AirHeaCon_Op' incorporates:
     *  Merge: '<S1>/M_VeDCAB_e_IOControl_IOCD01E_AirHeaCon_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD01E_AirHeaCon_Op_Value
        (CeDCAB_e_IO_NOP);

    /* SystemInitialize for Outport: '<Root>/VeDCAB_e_IOCD030_ActAirDamCon' incorporates:
     *  Merge: '<S1>/M_VeDCAB_e_IOCD030_ActAirDamCon'
     */
    (void)Rte_Write_VeDCAB_e_IOCD030_ActAirDamCon_Value(CeAADR_e_SNA);

    /* SystemInitialize for Outport: '<Root>/VeDCAB_e_IOControl_IOCD030_ActAirDamCon_Op' incorporates:
     *  Merge: '<S1>/M_VeDCAB_e_IOControl_IOCD030_ActAirDamCon_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD030_ActAirDamCon_Op_Value
        (CeDCAB_e_IO_NOP);

    /* SystemInitialize for Outport: '<Root>/VeDCAB_e_IOControl_IOCD043_PWMElectricOilPump_Op' incorporates:
     *  Merge: '<S1>/M_VeDCAB_e_IOControl_IOCD043_PWMElectricOilPump_Op'
     */
    (void)Rte_Write_VeDCAB_e_IOControl_IOCD043_PWMElectricOilPump_Op_Value
        (CeDCAB_e_IO_NOP);

    /* SystemInitialize for Outport: '<Root>/VeDCAB_e_Routine_RC130C_AccPedLea_Op' incorporates:
     *  Merge: '<S4>/VeDCAB_e_Routine_Accelerator_Pedal_Learn_Op_Value_merge'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC130C_AccPedLea_Op_Value
        (CeDCAB_e_Routine_NOP);

    /* SystemInitialize for Outport: '<Root>/VeDCAB_e_Routine_RC1332_ACRefExpValActCCal_Op' incorporates:
     *  Merge: '<S4>/VeDCAB_e_Routine_EXV_Valve_Calibration_Op_Value_merge'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC1332_ACRefExpValActCCal_Op_Value
        (CeDCAB_e_Routine_NOP);

    /* SystemInitialize for Outport: '<Root>/VeDCAB_e_Routine_RC1333_ACRefExpValActDCal_Op' incorporates:
     *  Merge: '<S4>/VeDCAB_e_Routine_EXV_Valve_Calibration_Op_Value_merge1'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC1333_ACRefExpValActDCal_Op_Value
        (CeDCAB_e_Routine_NOP);

    /* SystemInitialize for Outport: '<Root>/VeDCAB_e_Routine_RC130D_EXVValCal_Op' incorporates:
     *  Merge: '<S4>/VeDCAB_e_Routine_EXV_Valve_Calibration_Op_Value_merge2'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC130D_EXVValCal_Op_Value
        (CeDCAB_e_Routine_NOP);

    /* SystemInitialize for Outport: '<Root>/VeDCAB_e_Routine_RC1313_ActGriShu1Cal_Op' incorporates:
     *  Merge: '<S4>/VeDCAB_e_Routine_EXV_Valve_Calibration_Op_Value_merge3'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC1313_ActGriShu1Cal_Op_Value
        (CeDCAB_e_Routine_NOP);

    /* SystemInitialize for Outport: '<Root>/VeDCAB_e_Routine_RC1314_ActGriShu2Cal_Op' incorporates:
     *  Merge: '<S4>/VeDCAB_e_Routine_EXV_Valve_Calibration_Op_Value_merge4'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC1314_ActGriShu2Cal_Op_Value
        (CeDCAB_e_Routine_NOP);

    /* SystemInitialize for Outport: '<Root>/VeDCAB_e_Routine_RC1330_ActAirDamCal_Op' incorporates:
     *  Merge: '<S4>/VeDCAB_e_Routine_EXV_Valve_Calibration_Op_Value_merge5'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC1330_ActAirDamCal_Op_Value
        (CeDCAB_e_Routine_NOP);

    /* SystemInitialize for Outport: '<Root>/VeDCAB_e_Routine_RC1309_CPV_ClbrtnRtn_Op' incorporates:
     *  Merge: '<S4>/VeDCAB_e_Routine_EXV_Valve_Calibration_Op_Value_merge6'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC1309_CPV_ClbrtnRtn_Op_Value
        (CeDCAB_e_Routine_NOP);

    /* SystemInitialize for Outport: '<Root>/VeDCAB_e_Routine_RC130E_LTR_ClbrtnRtn_Op' incorporates:
     *  Merge: '<S4>/VeDCAB_e_Routine_EXV_Valve_Calibration_Op_Value_merge7'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC130E_LTR_ClbrtnRtn_Op_Value
        (CeDCAB_e_Routine_NOP);

    /* SystemInitialize for Outport: '<Root>/VeDCAB_e_Routine_RC130F_HTL_ClbrtnRtn_Op' incorporates:
     *  Merge: '<S4>/VeDCAB_e_Routine_EXV_Valve_Calibration_Op_Value_merge8'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC130F_HTL_ClbrtnRtn_Op_Value
        (CeDCAB_e_Routine_NOP);

    /* SystemInitialize for Outport: '<Root>/VeDCAB_e_Routine_RC1303_CabOveLoc_Op' incorporates:
     *  Merge: '<S4>/VeDCAB_e_Routine_EXV_Valve_Calibration_Op_Value_merge9'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC1303_CabOveLoc_Op_Value
        (CeDCAB_e_Routine_NOP);

    /* SystemInitialize for Outport: '<Root>/VeDCAB_e_Routine_RC1336_ToothAbutmentLearning_Op' incorporates:
     *  Merge: '<S4>/VeDCAB_e_Routine_EXV_Valve_Calibration_Op_Value_merge10'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC1336_ToothAbutmentLearning_Op_Value
        (CeDCAB_e_Routine_NOP);

    /* Outputs for Atomic SubSystem: '<Root>/Initialize Function' */
    /* Outport: '<Root>/VeDCAB_e_Routine_RC1300_HVOpnCblReset_Op' incorporates:
     *  Constant: '<S98>/Constant'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC1300_HVOpnCblReset_Op_Value
        (CeDCAB_e_Routine_NOP);

    /* Outport: '<Root>/VeDCAB_e_Routine_RC130B_OBD2PIDsReset_Op' incorporates:
     *  Constant: '<S99>/Constant'
     */
    (void)Rte_Write_VeDCAB_e_Routine_RC130B_OBD2PIDsReset_Op_Value
        (CeDCAB_e_Routine_NOP);

    /* End of Outputs for SubSystem: '<Root>/Initialize Function' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
