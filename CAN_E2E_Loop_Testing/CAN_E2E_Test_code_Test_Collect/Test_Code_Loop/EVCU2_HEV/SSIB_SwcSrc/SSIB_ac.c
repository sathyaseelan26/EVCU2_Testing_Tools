/*
 * File: SSIB_ac.c
 *
 * Code generated for Simulink model 'SSIB_ac'.
 *
 * Model version                  : 1.1030
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 19:04:05 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SSIB_ac.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2019a.
//
// PROD Model Config Ver#19a.1 2/14/2020
//
//////////////////////////////////////////////////////////////////////////////////////

/* Model step function for TID1 */
FUNC(void, SSIB_CODE) SSIB_MedTEH(void) /* Explicit Task: MedTEH */
{

#if Rte_SysCon_Variant_SSIB_PECTOS_PRESENCE

    boolean tmpRead;

#endif

#if Rte_SysCon_Variant_SSIB_PECTOS_PRESENCE

    boolean rtb_TmpSignalConversionAtVeTMIB_b_OnBrdC;

#endif

#if Rte_SysCon_Variant_SSIB_PECTOS_PRESENCE

    uint8 rtb_TmpSignalConversionAtVeTMIB;

#endif

#if Rte_SysCon_Variant_SSIB_PECTOS_PRESENCE

    uint8 tmpRead_0;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/PECTOS'
     */
    /* SignalConversion generated from: '<S4>/VeTMIB_b_OnBrdChrg_ClntTmpIn_FA' incorporates:
     *  Inport: '<Root>/VeTMIB_b_OnBrdChrg_ClntTmpIn_FF'
     *  SignalConversion generated from: '<S4>/VeSSIB_y_OnBrdChrg_ClntTmpIn _FltSts'
     */
#if Rte_SysCon_Variant_SSIB_PECTOS_PRESENCE

    /* Outputs for Atomic SubSystem: '<S4>/PECTOS' */
    /* SignalConversion generated from: '<S4>/VeTMIB_b_OnBrdChrg_ClntTmpIn_FA' incorporates:
     *  Inport: '<Root>/VeTMIB_b_OnBrdChrg_ClntTmpIn_FA'
     */
    (void)Rte_Read_VeTMIB_b_OnBrdChrg_ClntTmpIn_FA_Value
        (&rtb_TmpSignalConversionAtVeTMIB_b_OnBrdC);
    (void)Rte_Read_VeTMIB_b_OnBrdChrg_ClntTmpIn_FF_Value(&tmpRead);

    /* Outputs for Atomic SubSystem: '<S9>/PECTOS' */
    /* Switch: '<S10>/OnBrdChrg_ClntTmpIn_bit1' incorporates:
     *  Constant: '<S10>/Constant2'
     *  Constant: '<S10>/Constant3'
     *  Inport: '<Root>/VeTMIB_b_OnBrdChrg_ClntTmpIn_FF'
     */
    if (rtb_TmpSignalConversionAtVeTMIB_b_OnBrdC)
    {
        rtb_TmpSignalConversionAtVeTMIB = 2U;
    }
    else
    {
        rtb_TmpSignalConversionAtVeTMIB = 0U;
    }

    /* End of Switch: '<S10>/OnBrdChrg_ClntTmpIn_bit1' */

    /* Switch: '<S10>/OnBrdChrg_ClntTmpIn_bit7' incorporates:
     *  Constant: '<S10>/Constant4'
     *  Constant: '<S10>/Constant5'
     */
    if (tmpRead)
    {
        tmpRead_0 = 128U;
    }
    else
    {
        tmpRead_0 = 0U;
    }

    /* End of Switch: '<S10>/OnBrdChrg_ClntTmpIn_bit7' */

    /* Outport: '<Root>/VeSSIB_y_OnBrdChrg_ClntTmpIn_FltSts' incorporates:
     *  S-Function (sfix_bitop): '<S10>/Bitwise OR'
     *  Switch: '<S10>/OnBrdChrg_ClntTmpIn_bit0'
     */
    (void)Rte_Write_VeSSIB_y_OnBrdChrg_ClntTmpIn_FltSts_Value((uint8)
        (((rtb_TmpSignalConversionAtVeTMIB_b_OnBrdC ? ((uint8)1) : ((uint8)0)) |
          rtb_TmpSignalConversionAtVeTMIB) | tmpRead_0));

    /* End of Outputs for SubSystem: '<S9>/PECTOS' */
    /* End of Outputs for SubSystem: '<S4>/PECTOS' */
#endif

    /* End of SignalConversion generated from: '<S4>/VeTMIB_b_OnBrdChrg_ClntTmpIn_FA' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
}

/* Output function */
FUNC(void, SSIB_CODE) SSIB_BATTERY_HV_STATUS1_Received(void)
{

#if Rte_SysCon_Variant_SSIB_BATTERY_HV_STATUS1_PRESENCE

    boolean rtb_OR4;

#endif

#if Rte_SysCon_Variant_SSIB_BATTERY_HV_STATUS1_PRESENCE

    boolean rtb_DataTypeConversion2;

#endif

#if Rte_SysCon_Variant_SSIB_BATTERY_HV_STATUS1_PRESENCE

    boolean rtb_DataTypeConversion3;

#endif

#if Rte_SysCon_Variant_SSIB_BATTERY_HV_STATUS1_PRESENCE

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_BPCM_H;

#endif

#if Rte_SysCon_Variant_SSIB_BATTERY_HV_STATUS1_PRESENCE

    uint8 rtb_DataTypeConversion2_0;

#endif

#if Rte_SysCon_Variant_SSIB_BATTERY_HV_STATUS1_PRESENCE

    uint8 rtb_DataTypeConversion3_0;

#endif

#if Rte_SysCon_Variant_SSIB_BATTERY_HV_STATUS1_PRESENCE

    uint8 rtb_OR4_0;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/SSIBDRE_BATTERY_HV_STATUS1' incorporates:
     *  SubSystem: '<Root>/BATTERY_HV_STATUS1'
     */
    /* SignalConversion generated from: '<S1>/VeSR1B_y_BPCM_HV_Inlet_TempFD11_SigSts' incorporates:
     *  SignalConversion generated from: '<S1>/VeSSIB_y_HV_BatClntTmp_In_FltSts'
     */
#if Rte_SysCon_Variant_SSIB_BATTERY_HV_STATUS1_PRESENCE

    /* Outputs for Atomic SubSystem: '<S1>/BATTERY_HV_STATUS1' */
    /* SignalConversion generated from: '<S1>/VeSR1B_y_BPCM_HV_Inlet_TempFD11_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_BPCM_HV_Inlet_TempFD11_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_BPCM_HV_Inlet_TempFD11_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_BPCM_H);

    /* Outputs for Atomic SubSystem: '<S5>/BATTERY_HV_STATUS1' */
    /* Logic: '<S6>/OR4' incorporates:
     *  DataTypeConversion: '<S6>/Data Type Conversion'
     *  DataTypeConversion: '<S6>/Data Type Conversion1'
     *  S-Function (sfix_bitop): '<S6>/BPCM_HV_Inlet_TempFD11_bit0'
     *  S-Function (sfix_bitop): '<S6>/BPCM_HV_Inlet_TempFD11_bit1'
     */
    rtb_OR4 = (((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_BPCM_H) & 1U) != 0U)
               || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_BPCM_H) & 2U) !=
                   0U));

    /* DataTypeConversion: '<S6>/Data Type Conversion2' incorporates:
     *  S-Function (sfix_bitop): '<S6>/BPCM_HV_Inlet_TempFD11_bit2'
     */
    rtb_DataTypeConversion2 = ((((uint32)
        rtb_TmpSignalConversionAtVeSR1B_y_BPCM_H) & 4U) != 0U);

    /* DataTypeConversion: '<S6>/Data Type Conversion3' incorporates:
     *  S-Function (sfix_bitop): '<S6>/BPCM_HV_Inlet_TempFD11_bit3'
     */
    rtb_DataTypeConversion3 = ((((uint32)
        rtb_TmpSignalConversionAtVeSR1B_y_BPCM_H) & 8U) != 0U);

    /* Switch: '<S6>/HV_BatClntTmp_In_bit5' incorporates:
     *  Constant: '<S6>/Constant10'
     *  Constant: '<S6>/Constant9'
     */
    if (rtb_OR4)
    {
        rtb_TmpSignalConversionAtVeSR1B_y_BPCM_H = 32U;
    }
    else
    {
        rtb_TmpSignalConversionAtVeSR1B_y_BPCM_H = 0U;
    }

    /* End of Switch: '<S6>/HV_BatClntTmp_In_bit5' */

    /* Switch: '<S6>/HV_BatClntTmp_In_bit6' incorporates:
     *  Constant: '<S6>/Constant7'
     *  Constant: '<S6>/Constant8'
     */
    if (rtb_DataTypeConversion2)
    {
        rtb_DataTypeConversion2_0 = 64U;
    }
    else
    {
        rtb_DataTypeConversion2_0 = 0U;
    }

    /* End of Switch: '<S6>/HV_BatClntTmp_In_bit6' */

    /* Switch: '<S6>/HV_BatClntTmp_In_bit2' incorporates:
     *  Constant: '<S6>/Constant3'
     *  Constant: '<S6>/Constant6'
     */
    if (rtb_DataTypeConversion3)
    {
        rtb_DataTypeConversion3_0 = 4U;
    }
    else
    {
        rtb_DataTypeConversion3_0 = 0U;
    }

    /* End of Switch: '<S6>/HV_BatClntTmp_In_bit2' */

    /* Switch: '<S6>/HV_BatClntTmp_In_bit1' incorporates:
     *  Constant: '<S6>/Constant1'
     *  Constant: '<S6>/Constant2'
     *  Logic: '<S6>/OR1'
     */
    if (rtb_OR4 || rtb_DataTypeConversion2)
    {
        rtb_OR4_0 = 2U;
    }
    else
    {
        rtb_OR4_0 = 0U;
    }

    /* End of Switch: '<S6>/HV_BatClntTmp_In_bit1' */

    /* Outport: '<Root>/VeSSIB_y_HV_BatClntTmp_In_FltSts' incorporates:
     *  Logic: '<S6>/OR5'
     *  S-Function (sfix_bitop): '<S6>/Bitwise OR'
     */
    (void)Rte_Write_VeSSIB_y_HV_BatClntTmp_In_FltSts_Value((uint8)
        ((((rtb_TmpSignalConversionAtVeSR1B_y_BPCM_H | rtb_DataTypeConversion2_0)
           | rtb_DataTypeConversion3_0) | rtb_OR4_0) | (((rtb_OR4 ||
        rtb_DataTypeConversion2) || rtb_DataTypeConversion3) ? 1 : 0)));

    /* End of Outputs for SubSystem: '<S5>/BATTERY_HV_STATUS1' */
    /* End of Outputs for SubSystem: '<S1>/BATTERY_HV_STATUS1' */
#endif

    /* End of SignalConversion generated from: '<S1>/VeSR1B_y_BPCM_HV_Inlet_TempFD11_SigSts' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/SSIBDRE_BATTERY_HV_STATUS1' */
}

/* Output function */
FUNC(void, SSIB_CODE) SSIB_BCP_STAT_Received(void)
{
    /* local block i/o variables */
#if Rte_SysCon_Variant_SSIB_BCP_STAT_PRESENCE

    uint8 rtb_TmpSignalConversionAtVeLINR_e_BCP_RP;

#endif

#if Rte_SysCon_Variant_SSIB_BCP_STAT_PRESENCE

    uint8 rtb_TmpSignalConversionAtVeLINR_e_BCP_TE;

#endif

#if Rte_SysCon_Variant_SSIB_BCP_STAT_PRESENCE

    float32 tmp;

#endif

#if Rte_SysCon_Variant_SSIB_BCP_STAT_PRESENCE

    float32 tmp_0;

#endif

#if Rte_SysCon_Variant_SSIB_BCP_STAT_PRESENCE

    uint8 rtb_BitwiseOR;

#endif

#if Rte_SysCon_Variant_SSIB_BCP_STAT_PRESENCE

    boolean rtb_RelationalOperator2;

#endif

#if Rte_SysCon_Variant_SSIB_BCP_STAT_PRESENCE

    boolean rtb_TmpSignalConversionAtVeLINR_b_BCP_RP;

#endif

#if Rte_SysCon_Variant_SSIB_BCP_STAT_PRESENCE

    boolean rtb_TmpSignalConversionAtVeLINR_b_BCP_TE;

#endif

#if Rte_SysCon_Variant_SSIB_BCP_STAT_PRESENCE

    uint8 rtb_RelationalOperator2_0;

#endif

#if Rte_SysCon_Variant_SSIB_BCP_STAT_PRESENCE

    uint8 rtb_TmpSignalConversionAtVeLINR;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/SSIBDRE_BCP_STAT' incorporates:
     *  SubSystem: '<Root>/BCP_STAT'
     */
    /* SignalConversion generated from: '<S2>/VeLINR_e_BCP_RPM_ACTUAL_ErrSts' incorporates:
     *  SignalConversion generated from: '<S2>/VeSSIB_y_LTActvPumpRPMAct _FltSts'
     *  SignalConversion generated from: '<S2>/VeSSIB_y_LTActvPumpTemp_FltSts'
     *  SignalConversion generated from: '<S2>/VeLINR_b_BCP_RPM_ACTUAL_TO'
     *  SignalConversion generated from: '<S2>/VeLINR_b_BCP_TEMP_TO'
     *  SignalConversion generated from: '<S2>/VeLINR_e_BCP_TEMP_ErrSts'
     */
#if Rte_SysCon_Variant_SSIB_BCP_STAT_PRESENCE

    /* Outputs for Atomic SubSystem: '<S2>/BCP_STAT' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_BCP_RPM_ACTUAL_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_BCP_RPM_ACTUAL_ErrSts'
     */
    rtb_TmpSignalConversionAtVeLINR_e_BCP_RP =
        Rte_Read_VeLINR_Pct_BCP_RPM_ACTUAL_VeLINR_Pct_BCP_RPM_ACTUAL(&tmp);

    /* SignalConversion generated from: '<S2>/VeLINR_b_BCP_RPM_ACTUAL_TO' incorporates:
     *  Inport: '<Root>/VeLINR_b_BCP_RPM_ACTUAL_TO'
     */
    (void)Rte_Read_VeLINR_b_BCP_RPM_ACTUAL_TO_VeLINR_b_BCP_RPM_ACTUAL_TO
        (&rtb_TmpSignalConversionAtVeLINR_b_BCP_RP);

    /* SignalConversion generated from: '<S2>/VeLINR_e_BCP_TEMP_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_BCP_TEMP_ErrSts'
     */
    rtb_TmpSignalConversionAtVeLINR_e_BCP_TE =
        Rte_Read_VeLINR_T_BCP_TEMP_VeLINR_T_BCP_TEMP(&tmp_0);

    /* SignalConversion generated from: '<S2>/VeLINR_b_BCP_TEMP_TO' incorporates:
     *  Inport: '<Root>/VeLINR_b_BCP_TEMP_TO'
     */
    (void)Rte_Read_VeLINR_b_BCP_TEMP_TO_VeLINR_b_BCP_TEMP_TO
        (&rtb_TmpSignalConversionAtVeLINR_b_BCP_TE);

    /* Outputs for Atomic SubSystem: '<S7>/BCP_STAT' */
    /* RelationalOperator: '<S8>/Relational Operator2' incorporates:
     *  Constant: '<S8>/Constant Value'
     *  RelationalOperator: '<S8>/Relational Operator1'
     */
    rtb_RelationalOperator2 = (1 == ((sint32)
        rtb_TmpSignalConversionAtVeLINR_e_BCP_RP));

    /* Switch: '<S8>/LTActvPumpRPMAct_bit6' incorporates:
     *  Constant: '<S8>/Constant'
     *  Constant: '<S8>/Constant1'
     */
    if (rtb_TmpSignalConversionAtVeLINR_b_BCP_RP)
    {
        rtb_BitwiseOR = 64U;
    }
    else
    {
        rtb_BitwiseOR = 0U;
    }

    /* End of Switch: '<S8>/LTActvPumpRPMAct_bit6' */

    /* Switch: '<S8>/LTActvPumpRPMAct_bit2' incorporates:
     *  Constant: '<S8>/Constant2'
     *  Constant: '<S8>/Constant3'
     */
    if (rtb_RelationalOperator2)
    {
        rtb_RelationalOperator2_0 = 4U;
    }
    else
    {
        rtb_RelationalOperator2_0 = 0U;
    }

    /* End of Switch: '<S8>/LTActvPumpRPMAct_bit2' */

    /* Switch: '<S8>/LTActvPumpRPMAct_bit1' incorporates:
     *  Constant: '<S8>/Constant8'
     *  Constant: '<S8>/Constant9'
     */
    if (rtb_TmpSignalConversionAtVeLINR_b_BCP_RP)
    {
        rtb_TmpSignalConversionAtVeLINR = 2U;
    }
    else
    {
        rtb_TmpSignalConversionAtVeLINR = 0U;
    }

    /* End of Switch: '<S8>/LTActvPumpRPMAct_bit1' */

    /* S-Function (sfix_bitop): '<S8>/Bitwise OR' incorporates:
     *  Logic: '<S8>/Logical Operator'
     */
    rtb_BitwiseOR = (uint8)(((rtb_BitwiseOR | rtb_RelationalOperator2_0) |
        rtb_TmpSignalConversionAtVeLINR) |
                            ((rtb_TmpSignalConversionAtVeLINR_b_BCP_RP ||
        rtb_RelationalOperator2) ? 1 : 0));

    /* RelationalOperator: '<S8>/Relational Operator2' incorporates:
     *  Constant: '<S8>/Constant Value1'
     */
    rtb_RelationalOperator2 = (1 == ((sint32)
        rtb_TmpSignalConversionAtVeLINR_e_BCP_TE));

    /* End of Outputs for SubSystem: '<S7>/BCP_STAT' */

    /* Outport: '<Root>/VeSSIB_y_LTActvPumpRPMAct_FltSts' */
    (void)Rte_Write_VeSSIB_y_LTActvPumpRPMAct_FltSts_Value(rtb_BitwiseOR);

    /* Outputs for Atomic SubSystem: '<S7>/BCP_STAT' */
    /* Switch: '<S8>/LTActvPumpTemp_bit6' incorporates:
     *  Constant: '<S8>/Constant10'
     *  Constant: '<S8>/Constant6'
     */
    if (rtb_TmpSignalConversionAtVeLINR_b_BCP_TE)
    {
        rtb_BitwiseOR = 64U;
    }
    else
    {
        rtb_BitwiseOR = 0U;
    }

    /* End of Switch: '<S8>/LTActvPumpTemp_bit6' */

    /* Switch: '<S8>/LTActvPumpTemp_bit2' incorporates:
     *  Constant: '<S8>/Constant11'
     *  Constant: '<S8>/Constant7'
     */
    if (rtb_RelationalOperator2)
    {
        rtb_RelationalOperator2_0 = 4U;
    }
    else
    {
        rtb_RelationalOperator2_0 = 0U;
    }

    /* End of Switch: '<S8>/LTActvPumpTemp_bit2' */

    /* Switch: '<S8>/LTActvPumpTemp_bit1' incorporates:
     *  Constant: '<S8>/Constant14'
     *  Constant: '<S8>/Constant15'
     */
    if (rtb_TmpSignalConversionAtVeLINR_b_BCP_TE)
    {
        rtb_TmpSignalConversionAtVeLINR = 2U;
    }
    else
    {
        rtb_TmpSignalConversionAtVeLINR = 0U;
    }

    /* End of Switch: '<S8>/LTActvPumpTemp_bit1' */

    /* Outport: '<Root>/VeSSIB_y_LTActvPumpTemp_FltSts' incorporates:
     *  Logic: '<S8>/Logical Operator1'
     *  S-Function (sfix_bitop): '<S8>/Bitwise OR1'
     */
    (void)Rte_Write_VeSSIB_y_LTActvPumpTemp_FltSts_Value((uint8)(((rtb_BitwiseOR
        | rtb_RelationalOperator2_0) | rtb_TmpSignalConversionAtVeLINR) |
        ((rtb_TmpSignalConversionAtVeLINR_b_BCP_TE || rtb_RelationalOperator2) ?
         1 : 0)));

    /* End of Outputs for SubSystem: '<S7>/BCP_STAT' */
    /* End of Outputs for SubSystem: '<S2>/BCP_STAT' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_BCP_RPM_ACTUAL_ErrSts' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/SSIBDRE_BCP_STAT' */
}

/* Model initialize function */
FUNC(void, SSIB_CODE) SSIB_ac_Init(void)
{
    /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
