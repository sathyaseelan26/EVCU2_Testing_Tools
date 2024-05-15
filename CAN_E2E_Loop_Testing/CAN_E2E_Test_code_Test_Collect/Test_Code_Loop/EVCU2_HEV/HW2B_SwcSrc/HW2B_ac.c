/*
 * File: HW2B_ac.c
 *
 * Code generated for Simulink model 'HW2B_ac'.
 *
 * Model version                  : 1.89
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:58:51 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "HW2B_ac.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2019a.
//
// PROD Model Config Ver#19a.1 2/14/2020
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_HW2B
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(float32, HW2B_VAR_INIT) KeHW2B_U_AccPed2VoltInit = 5.0F;/* Referenced by: '<S8>/Calib' */
static volatile CONST(float32, HW2B_VAR_INIT) KeHW2B_U_AccPedVoltInit = 5.0F;/* Referenced by: '<S7>/Calib' */
static volatile CONST(float32, HW2B_VAR_INIT) KeHW2B_U_BF1_SysVoltInit = 12.0F;/* Referenced by: '<S9>/Calib' */
static volatile CONST(boolean, HW2B_VAR_INIT) KeHW2B_b_Lv2IgnSwitchInit = 0;/* Referenced by: '<S10>/Calib' */

#define STOP_SEC_CALIB_UNSPECIFIED_HW2B
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, HW2B_CODE) HW2B_FastTEF(void) /* Explicit Task: FastTEF */
{
    IDTRAdcInpResData tmpRead;
    IDTRAdcInpResData tmpRead_0;
    IDTRAdcInpResData tmpRead_1;
    boolean tmpRead_2;
    boolean tmpRead_3;

    /* Inport: '<Root>/VeDIOR_b_IgnRunDigInpImdtVal_VeDIOR_b_DigInpImdtVal' */
    (void)Rte_Read_VeDIOR_b_IgnRunDigInpImdtVal_VeDIOR_b_DigInpImdtVal
        (&tmpRead_3);

    /* Inport: '<Root>/VeDIOR_b_IgnRunStratDigInpImdtVal_VeDIOR_b_DigInpImdtVal' */
    (void)Rte_Read_VeDIOR_b_IgnRunStratDigInpImdtVal_VeDIOR_b_DigInpImdtVal
        (&tmpRead_2);

    /* Inport: '<Root>/VeADCR_U_Ubd1Monitor_VsADCR_e_CnvnRes' */
    (void)Rte_Read_VeADCR_U_Ubd1Monitor_VsADCR_e_CnvnRes(&tmpRead_1);

    /* Inport: '<Root>/VeADCR_U_AcceleratorPedalSense2_VsADCR_e_CnvnRes' */
    (void)Rte_Read_VeADCR_U_AcceleratorPedalSense2_VsADCR_e_CnvnRes(&tmpRead_0);

    /* Inport: '<Root>/VeADCR_U_AcceleratorPedalSense1_VsADCR_e_CnvnRes' */
    (void)Rte_Read_VeADCR_U_AcceleratorPedalSense1_VsADCR_e_CnvnRes(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngtAndCnvn'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/HW2B_FastTEF_StartCheckpoint'
     */
    /* FunctionCaller: '<S11>/HW2B_FastTEF_StartCheckpoint ' */
    Rte_Call_HW2B_FastTEF_StartCheckpoint_CheckpointReached();

    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/SigMngt1'
     */
    /* Outport: '<Root>/VeHWIO_U_Lv2RAWPVS2' incorporates:
     *  SignalConversion generated from: '<S19>/Bus Selector2'
     *  SignalConversion generated from: '<S2>/VeHW2B_U_AccPed2SnsrRaw'
     */
    (void)Rte_Write_VeHWIO_U_Lv2RAWPVS2_Value(tmpRead_0.e_CnvnRes);

    /* Outport: '<Root>/VeHWIO_U_Lv2RAWPVS1' incorporates:
     *  SignalConversion generated from: '<S18>/Bus Selector2'
     *  SignalConversion generated from: '<S2>/VeHW2B_U_AccPedSnsrRaw'
     */
    (void)Rte_Write_VeHWIO_U_Lv2RAWPVS1_Value(tmpRead.e_CnvnRes);

    /* Outport: '<Root>/VeHWIO_U_Lv2LVBattVolt' incorporates:
     *  SignalConversion generated from: '<S16>/Bus Selector2'
     *  SignalConversion generated from: '<S2>/VeHW2B_U_BF1SysSnsrRaw'
     */
    (void)Rte_Write_VeHWIO_U_Lv2LVBattVolt_Value(tmpRead_1.e_CnvnRes);

    /* Outport: '<Root>/VeHWIO_b_Lv2IgnSwitch' incorporates:
     *  Logic: '<S17>/Logical Operator'
     *  SignalConversion generated from: '<S2>/VeHW2B_b_Lv2IgnSwitch'
     */
    (void)Rte_Write_VeHWIO_b_Lv2IgnSwitch_Value(tmpRead_2 || tmpRead_3);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen1' */

    /* Outputs for Atomic SubSystem: '<S2>/HW2B_FastTEF_StopCheckpoint' */
    /* FunctionCaller: '<S12>/HW2B_FastTEF_StopCheckpoint ' */
    Rte_Call_HW2B_FastTEF_StopCheckpoint_CheckpointReached();

    /* End of Outputs for SubSystem: '<S2>/HW2B_FastTEF_StopCheckpoint' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
}

/* Model initialize function */
FUNC(void, HW2B_CODE) HW2B_ac_Init(void)
{
    /* Outputs for Atomic SubSystem: '<Root>/Init' */
    /* Outport: '<Root>/VeHWIO_U_Lv2RAWPVS1' incorporates:
     *  Constant: '<S7>/Calib'
     *  SignalConversion: '<S3>/SignalConversion2'
     */
    (void)Rte_Write_VeHWIO_U_Lv2RAWPVS1_Value(KeHW2B_U_AccPedVoltInit);

    /* Outport: '<Root>/VeHWIO_U_Lv2RAWPVS2' incorporates:
     *  Constant: '<S8>/Calib'
     *  SignalConversion: '<S4>/SignalConversion2'
     */
    (void)Rte_Write_VeHWIO_U_Lv2RAWPVS2_Value(KeHW2B_U_AccPed2VoltInit);

    /* Outport: '<Root>/VeHWIO_U_Lv2LVBattVolt' incorporates:
     *  Constant: '<S9>/Calib'
     *  SignalConversion: '<S5>/SignalConversion2'
     */
    (void)Rte_Write_VeHWIO_U_Lv2LVBattVolt_Value(KeHW2B_U_BF1_SysVoltInit);

    /* Outport: '<Root>/VeHWIO_b_Lv2IgnSwitch' incorporates:
     *  Constant: '<S10>/Calib'
     *  SignalConversion: '<S6>/SignalConversion1'
     */
    (void)Rte_Write_VeHWIO_b_Lv2IgnSwitch_Value(KeHW2B_b_Lv2IgnSwitchInit);

    /* End of Outputs for SubSystem: '<Root>/Init' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
