/*
 * File: CT3B_FUNC_ac.c
 *
 * Code generated for Simulink model 'CT3B_FUNC_ac'.
 *
 * Model version                  : 1.41
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 09:33:59 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CT3B_FUNC_ac.h"



float32 SendCANR_Motor1_RPM_CT3B_FUNC_ac_Test_2;
float32 SendCANR_Motor2_RPM_CT3B_FUNC_ac_Test_1;
float32 SendCANR_Motor1_RPM_CT3B_FUNC_ac_Test_1;

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Model step function for TID1 */
FUNC(void, CT3B_FUNC_CODE) CT3B_FUNC_FastTEF /* Explicit Task: FastTEF */
{

#if Rte_SysCon_VrntCT3B_Motor1RPM_MSPRnMtrASpd

    float32 tmpRead;

#endif

#if Rte_SysCon_VrntCT3B_Motor1RPM_MSPRnMtrCSpd

    float32 tmpRead_0;

#endif

    float32 tmpRead_1;

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* DataTypeConversion: '<S4>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeMSPR_n_MtrA_Spd'
     */
#if Rte_SysCon_VrntCT3B_Motor1RPM_MSPRnMtrASpd

    Rte_Read_VeMSPR_n_MtrA_Spd_Value(&tmpRead);

    /* Outport: '<Root>/SendCANR_Motor1_RPM' incorporates:
     *  Inport: '<Root>/VeMSPR_n_MtrA_Spd'
     */

tmpRead = SendCANR_Motor1_RPM_CT3B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_Motor1_RPM_SendCANR_Motor1_RPM(tmpRead);

#endif

    /* End of DataTypeConversion: '<S4>/Data Type Conversion' */

    /* DataTypeConversion: '<S5>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeMSPR_n_MtrC_Spd'
     *  Logic: '<S6>/Logical Operator'
     */
#if Rte_SysCon_VrntCT3B_Motor1RPM_MSPRnMtrCSpd

    Rte_Read_VeMSPR_n_MtrC_Spd_Value(&tmpRead_0);

    /* Outport: '<Root>/SendCANR_Motor1_RPM' incorporates:
     *  Inport: '<Root>/VeMSPR_n_MtrC_Spd'
     */

tmpRead_0 = SendCANR_Motor1_RPM_CT3B_FUNC_ac_Test_2;
    Rte_Write_SendCANR_Motor1_RPM_SendCANR_Motor1_RPM(tmpRead_0);

    /* Outport: '<Root>/SendCANR_Motor1_RPM_Vld' */
    Rte_Write_SendCANR_Motor1_RPM_Vld_SendCANR_Motor1_RPM_Vld(false);

#endif

    /* End of DataTypeConversion: '<S5>/Data Type Conversion' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeMSPR_n_MtrB_Spd' */
    Rte_Read_VeMSPR_n_MtrB_Spd_Value(&tmpRead_1);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Outport: '<Root>/SendCANR_Motor2_RPM' incorporates:
     *  DataTypeConversion: '<S7>/Data Type Conversion'
     */

tmpRead_1 = SendCANR_Motor2_RPM_CT3B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_Motor2_RPM_SendCANR_Motor2_RPM(tmpRead_1);

    /* Outport: '<Root>/SendCANR_Motor2_RPM_Vld' incorporates:
     *  Logic: '<S7>/Logical Operator'
     */
    Rte_Write_SendCANR_Motor2_RPM_Vld_SendCANR_Motor2_RPM_Vld(true);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
}

/* Model initialize function */
FUNC(void, CT3B_FUNC_CODE) CT3B_FUNC_ac_Init
{
    /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
