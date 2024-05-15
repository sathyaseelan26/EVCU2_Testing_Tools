/*
 * File: LLER_ac.c
 *
 * Code generated for Simulink model 'LLER_ac'.
 *
 * Model version                  : 9.40
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 14:26:02 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LLER_ac.h"

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_LLER
#include "MemMap.h"

VAR(DW_LLER_ac_T, LLER_VAR_INIT) LLER_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_LLER
#include "MemMap.h"

/* Model step function */
#if Rte_SysCon_Variant_LLLER_FuncEnable

FUNC(void, LLER_CODE) LLER_PwrOff(void)
{

#if Rte_SysCon_Variant_LLLER_FuncEnable

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
    /* Outputs for Function Call SubSystem: '<Root>/LLER_PwrOff' */
    /* DataStoreWrite: '<S1>/Data Store Write3' incorporates:
     *  Inport: '<Root>/VeLLDR_r_NvMin_TireTol_Ratio_RL'
     */
    (void)Rte_Read_VeLLDR_r_NvMin_TireTol_Ratio_RL_Value
        (&LLER_ac_DW.NeLLER_r_NvMin_TireTol_Ratio_RR);

    /* DataStoreWrite: '<S1>/Data Store Write2' incorporates:
     *  Inport: '<Root>/VeLLDR_r_NvMin_TireTol_Ratio_RR'
     */
    (void)Rte_Read_VeLLDR_r_NvMin_TireTol_Ratio_RR_Value
        (&LLER_ac_DW.NeLLER_r_NvMin_TireTol_Ratio_RL);

    /* DataStoreWrite: '<S1>/Data Store Write1' incorporates:
     *  Inport: '<Root>/VeLLDR_r_NvMin_TireTol_Ratio_FR'
     */
    (void)Rte_Read_VeLLDR_r_NvMin_TireTol_Ratio_FR_Value
        (&LLER_ac_DW.NeLLER_r_NvMin_TireTol_Ratio_FR);

    /* DataStoreWrite: '<S1>/Data Store Write' incorporates:
     *  Inport: '<Root>/VeLLDR_r_NvMin_TireTol_Ratio_FL'
     */
    (void)Rte_Read_VeLLDR_r_NvMin_TireTol_Ratio_FL_Value
        (&LLER_ac_DW.NeLLER_r_NvMin_TireTol_Ratio_FL);

    /* Outport: '<Root>/NeLLER_r_NvMin_TireTol_Ratio_FL_PM_Out' incorporates:
     *  DataStoreRead: '<S1>/Data Store Read1'
     */
    (void)
        Rte_Write_NeLLER_r_NvMin_TireTol_Ratio_FL_NeLLER_r_NvMin_TireTol_Ratio_FL
        (LLER_ac_DW.NeLLER_r_NvMin_TireTol_Ratio_FR);

    /* Outport: '<Root>/NeLLER_r_NvMin_TireTol_Ratio_FR_PM_Out' incorporates:
     *  DataStoreRead: '<S1>/Data Store Read'
     */
    (void)
        Rte_Write_NeLLER_r_NvMin_TireTol_Ratio_FR_NeLLER_r_NvMin_TireTol_Ratio_FR
        (LLER_ac_DW.NeLLER_r_NvMin_TireTol_Ratio_FL);

    /* Outport: '<Root>/NeLLER_r_NvMin_TireTol_Ratio_RL_PM_Out' incorporates:
     *  DataStoreRead: '<S1>/Data Store Read3'
     */
    (void)
        Rte_Write_NeLLER_r_NvMin_TireTol_Ratio_RL_NeLLER_r_NvMin_TireTol_Ratio_RL
        (LLER_ac_DW.NeLLER_r_NvMin_TireTol_Ratio_RR);

    /* Outport: '<Root>/NeLLER_r_NvMin_TireTol_Ratio_RR_PM_Out' incorporates:
     *  DataStoreRead: '<S1>/Data Store Read2'
     */
    (void)
        Rte_Write_NeLLER_r_NvMin_TireTol_Ratio_RR_NeLLER_r_NvMin_TireTol_Ratio_RR
        (LLER_ac_DW.NeLLER_r_NvMin_TireTol_Ratio_RL);

    /* End of Outputs for SubSystem: '<Root>/LLER_PwrOff' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
#endif

}

#endif

/* Model initialize function */
FUNC(void, LLER_CODE) LLER_ac_Init(void)
{
    {
        float32 tmpRead;
        float32 tmpRead_0;
        float32 tmpRead_1;
        float32 tmpRead_2;

        /* Inport: '<Root>/NeLLER_r_NvMin_TireTol_Ratio_RR_PM_In' */
        (void)
            Rte_Read_NeLLER_r_NvMin_TireTol_Ratio_RR_Rx_NeLLER_r_NvMin_TireTol_Ratio_RR
            (&tmpRead_2);

        /* Inport: '<Root>/NeLLER_r_NvMin_TireTol_Ratio_RL_PM_In' */
        (void)
            Rte_Read_NeLLER_r_NvMin_TireTol_Ratio_RL_Rx_NeLLER_r_NvMin_TireTol_Ratio_RL
            (&tmpRead_1);

        /* Inport: '<Root>/NeLLER_r_NvMin_TireTol_Ratio_FR_PM_In' */
        (void)
            Rte_Read_NeLLER_r_NvMin_TireTol_Ratio_FR_Rx_NeLLER_r_NvMin_TireTol_Ratio_FR
            (&tmpRead_0);

        /* Inport: '<Root>/NeLLER_r_NvMin_TireTol_Ratio_FL_PM_In' */
        (void)
            Rte_Read_NeLLER_r_NvMin_TireTol_Ratio_FL_Rx_NeLLER_r_NvMin_TireTol_Ratio_FL
            (&tmpRead);

        /* Start for DataStoreMemory: '<Root>/NvMin_TireTol_Ratio_FL' */
        LLER_ac_DW.NeLLER_r_NvMin_TireTol_Ratio_FL = 1.0F;

        /* Start for DataStoreMemory: '<Root>/NvMin_TireTol_Ratio_FR' */
        LLER_ac_DW.NeLLER_r_NvMin_TireTol_Ratio_FR = 1.0F;

        /* Start for DataStoreMemory: '<Root>/NvMin_TireTol_Ratio_RL' */
        LLER_ac_DW.NeLLER_r_NvMin_TireTol_Ratio_RL = 1.0F;

        /* Start for DataStoreMemory: '<Root>/NvMin_TireTol_Ratio_RR' */
        LLER_ac_DW.NeLLER_r_NvMin_TireTol_Ratio_RR = 1.0F;

        /* Outputs for Atomic SubSystem: '<Root>/LLER_PwrOn' */
        /* Inport: '<S2>/NeLLER_r_NvMin_TireTol_Ratio_FR_PM_In' incorporates:
         *  DataStoreWrite: '<S2>/Data Store Write1'
         */
        LLER_ac_DW.NeLLER_r_NvMin_TireTol_Ratio_FR = tmpRead_0;

        /* Inport: '<S2>/NeLLER_r_NvMin_TireTol_Ratio_FL_PM_In' incorporates:
         *  DataStoreWrite: '<S2>/Data Store Write'
         */
        LLER_ac_DW.NeLLER_r_NvMin_TireTol_Ratio_FL = tmpRead;

        /* Inport: '<S2>/NeLLER_r_NvMin_TireTol_Ratio_RR_PM_In' incorporates:
         *  DataStoreWrite: '<S2>/Data Store Write3'
         */
        LLER_ac_DW.NeLLER_r_NvMin_TireTol_Ratio_RR = tmpRead_1;

        /* Inport: '<S2>/NeLLER_r_NvMin_TireTol_Ratio_RL_PM_In' incorporates:
         *  DataStoreWrite: '<S2>/Data Store Write2'
         */
        LLER_ac_DW.NeLLER_r_NvMin_TireTol_Ratio_RL = tmpRead_2;

        /* End of Outputs for SubSystem: '<Root>/LLER_PwrOn' */

        /* Outport: '<Root>/VeLLER_r_NvMin_TireTol_Ratio_FR' incorporates:
         *  DataStoreWrite: '<S2>/Data Store Write'
         */
        (void)Rte_Write_VeLLER_r_NvMin_TireTol_Ratio_FR_Value
            (LLER_ac_DW.NeLLER_r_NvMin_TireTol_Ratio_FL);

        /* Outport: '<Root>/VeLLER_r_NvMin_TireTol_Ratio_FL' incorporates:
         *  DataStoreWrite: '<S2>/Data Store Write1'
         */
        (void)Rte_Write_VeLLER_r_NvMin_TireTol_Ratio_FL_Value
            (LLER_ac_DW.NeLLER_r_NvMin_TireTol_Ratio_FR);

        /* Outport: '<Root>/VeLLER_r_NvMin_TireTol_Ratio_RR' incorporates:
         *  DataStoreWrite: '<S2>/Data Store Write2'
         */
        (void)Rte_Write_VeLLER_r_NvMin_TireTol_Ratio_RR_Value
            (LLER_ac_DW.NeLLER_r_NvMin_TireTol_Ratio_RL);

        /* Outport: '<Root>/VeLLER_r_NvMin_TireTol_Ratio_RL' incorporates:
         *  DataStoreWrite: '<S2>/Data Store Write3'
         */
        (void)Rte_Write_VeLLER_r_NvMin_TireTol_Ratio_RL_Value
            (LLER_ac_DW.NeLLER_r_NvMin_TireTol_Ratio_RR);
    }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
