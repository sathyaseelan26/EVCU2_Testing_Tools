/*
 * File: HSWB_ac.c
 *
 * Code generated for Simulink model 'HSWB_ac'.
 *
 * Model version                  : 1.53
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:49:37 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "HSWB_ac.h"
#include "look1_iflf_binlca_19a.h"

/* Named constants for Chart: '<S9>/AntiSpkFil' */
#if Rte_SysCon_Variant_HSWB_HoodAjarSwitch_Presence
#define HSWB_ac_IN_FILTERING           ((uint8)1U)
#endif

#if Rte_SysCon_Variant_HSWB_HoodAjarSwitch_Presence
#define HSWB_ac_IN_NORMAL              ((uint8)2U)
#endif

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2019a.
//
// PROD Model Config Ver#19a.1 2/14/2020
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_HSWB
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_HSWB_HoodAjarSwitch_Presence

static volatile CONST(uint8, HSWB_VAR_INIT) KeHSWB_Cnt_HoodAjarSnsSpikeThd = 2U;/* Referenced by: '<S19>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWB_HoodAjarSwitch_Presence

static volatile CONST(float32, HSWB_VAR_INIT) KeHSWB_U_HoodAjarSnsByp = 0.0F;/* Referenced by: '<S14>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWB_HoodAjarSwitch_Presence

static volatile CONST(float32, HSWB_VAR_INIT) KeHSWB_U_HoodAjarSnsInit = 0.0F;/* Referenced by: '<S5>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWB_HoodAjarSwitch_Presence

static volatile CONST(float32, HSWB_VAR_INIT) KeHSWB_U_HoodAjarSnsRcvry = 5.0F;
                         /* Referenced by: '<S16>/KeTAIB_T_OEXV_OutTempRcvry' */

#endif

#if Rte_SysCon_Variant_HSWB_HoodAjarSwitch_Presence

static volatile CONST(float32, HSWB_VAR_INIT) KeHSWB_U_HoodAjarSnsSpikeThd =
    1.0F;                              /* Referenced by: '<S20>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWB_HoodAjarSwitch_Presence

static volatile CONST(boolean, HSWB_VAR_INIT) KeHSWB_b_HoodAjarSnsBypEnbl = 0;/* Referenced by: '<S15>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWB_HoodAjarSwitch_Presence

static volatile CONST(boolean, HSWB_VAR_INIT) KeHSWB_b_HoodAjarSnsRcvryEnbl = 0;
                     /* Referenced by: '<S17>/KeTAIB_b_OEXV_OutTempRcvryEnbl' */

#endif

#if Rte_SysCon_Variant_HSWB_HoodAjarSwitch_Presence

static volatile CONST(float32, HSWB_VAR_INIT) KeHSWB_k_HoodAjarSnsFiltGx = 1.0F;/* Referenced by: '<S21>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWB_HoodAjarSwitch_Presence

static volatile CONST(float32, HSWB_VAR_INIT) KtHSWB_U_HoodAjarSnsChartc[24] =
{
    0.0F, 0.22F, 0.279F, 0.347F, 0.445F, 0.552F, 0.723F, 0.929F, 1.193F, 1.52F,
    1.916F, 2.366F, 2.849F, 3.338F, 3.788F, 4.164F, 4.457F, 4.668F, 4.804F,
    4.897F, 4.946F, 4.971F, 4.99F, 5.0F
} ;                                    /* Referenced by: '<S10>/Vector' */

#endif

#if Rte_SysCon_Variant_HSWB_HoodAjarSwitch_Presence

static volatile CONST(float32, HSWB_VAR_INIT) KxHSWB_U_HoodAjarSnsChartc[24] =
{
    0.0F, 0.22F, 0.279F, 0.347F, 0.445F, 0.552F, 0.723F, 0.929F, 1.193F, 1.52F,
    1.916F, 2.366F, 2.849F, 3.338F, 3.788F, 4.164F, 4.457F, 4.668F, 4.804F,
    4.897F, 4.946F, 4.971F, 4.99F, 5.0F
} ;                                    /* Referenced by: '<S10>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_HSWB
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_HSWB
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_HSWB_HoodAjarSwitch_Presence

static VAR(float32, HSWB_VAR_INIT) VeHSWB_U_HoodAjarSnsVolt;/* '<S25>/Assignment_y' */

#endif

#if Rte_SysCon_Variant_HSWB_HoodAjarSwitch_Presence

static VAR(float32, HSWB_VAR_INIT) VeHSWB_U_HoodAjarSnsVoltRaw;/* '<S9>/AntiSpkFil' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_HSWB
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_HSWB
#include "MemMap.h"

VAR(B_HSWB_ac_T, HSWB_VAR_INIT) HSWB_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_HSWB
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_HSWB
#include "MemMap.h"

VAR(DW_HSWB_ac_T, HSWB_VAR_INIT) HSWB_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_HSWB
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, HSWB_CODE) HSWB_FastTEF(void) /* Explicit Task: FastTEF */
{

#if Rte_SysCon_Variant_HSWB_HoodAjarSwitch_Presence

    sint32 iU;

#endif

#if Rte_SysCon_Variant_HSWB_HoodAjarSwitch_Presence

    IDTRAdcInpResData tmpRead;

#endif

#if Rte_SysCon_Variant_HSWB_HoodAjarSwitch_Presence

    float32 rtb_Vector[2];

#endif

#if Rte_SysCon_Variant_HSWB_HoodAjarSwitch_Presence

    float32 rtb_TmpSignalConversionAtVectorInport1[2];

#endif

#if Rte_SysCon_Variant_HSWB_HoodAjarSwitch_Presence

    boolean rtb_TmpSignalConversionAtVeADFB_b_A2DFau;

#endif

#if Rte_SysCon_Variant_HSWB_HoodAjarSwitch_Presence

    float32 tmp;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngtAndCnvn'
     */
    /* UnitDelay: '<S2>/Unit Delay' incorporates:
     *  Constant: '<S2>/Constant3'
     *  Inport: '<Root>/VeADCR_U_HoodAjar_VsADCR_e_CnvnRes'
     *  SignalConversion generated from: '<S2>/VeHSWB_U_HoodAjarSnsRaw'
     *  SignalConversion generated from: '<S2>/VeADFB_b_A2DFault1'
     */
#if Rte_SysCon_Variant_HSWB_HoodAjarSwitch_Presence

    /* Outputs for Atomic SubSystem: '<S2>/HoodAjarSns' */
    /* SignalConversion generated from: '<S2>/VeADFB_b_A2DFault1' incorporates:
     *  Inport: '<Root>/VeADFB_b_A2DFault'
     */
    (void)Rte_Read_VeADFB_b_A2DFault_Value
        (&rtb_TmpSignalConversionAtVeADFB_b_A2DFau);

    /* Gateway: SigMngtAndCnvn/HoodAjarSns/HoodAjarSns/SigAcqnAndFilSys/AntiSpkFil */
    /* During: SigMngtAndCnvn/HoodAjarSns/HoodAjarSns/SigAcqnAndFilSys/AntiSpkFil */
    (void)Rte_Read_VeADCR_U_HoodAjar_VsADCR_e_CnvnRes(&tmpRead);

    /* Outputs for Atomic SubSystem: '<S6>/HoodAjarSns' */
    /* Chart: '<S9>/AntiSpkFil' incorporates:
     *  Constant: '<S19>/Calib'
     *  Constant: '<S20>/Calib'
     *  Inport: '<Root>/VeADCR_U_HoodAjar_VsADCR_e_CnvnRes'
     */
    if (((uint32)HSWB_ac_DW.is_active_c2_HSWB_ac) == 0U)
    {
        /* Entry: SigMngtAndCnvn/HoodAjarSns/HoodAjarSns/SigAcqnAndFilSys/AntiSpkFil */
        HSWB_ac_DW.is_active_c2_HSWB_ac = 1U;

        /* Entry Internal: SigMngtAndCnvn/HoodAjarSns/HoodAjarSns/SigAcqnAndFilSys/AntiSpkFil */
        /* Transition: '<S18>:8' */
        HSWB_ac_DW.is_c2_HSWB_ac = HSWB_ac_IN_NORMAL;

        /* Entry 'NORMAL': '<S18>:37' */
        HSWB_ac_B.InputRaw0 = tmpRead.e_CnvnRes;
        VeHSWB_U_HoodAjarSnsVoltRaw = tmpRead.e_CnvnRes;
    }
    else if (((uint32)HSWB_ac_DW.is_c2_HSWB_ac) == HSWB_ac_IN_FILTERING)
    {
        /* During 'FILTERING': '<S18>:38' */
        if (HSWB_ac_B.Cnt >= ((float32)KeHSWB_Cnt_HoodAjarSnsSpikeThd))
        {
            /* Transition: '<S18>:40' */
            HSWB_ac_DW.is_c2_HSWB_ac = HSWB_ac_IN_NORMAL;

            /* Entry 'NORMAL': '<S18>:37' */
            HSWB_ac_B.InputRaw0 = tmpRead.e_CnvnRes;
            VeHSWB_U_HoodAjarSnsVoltRaw = tmpRead.e_CnvnRes;
        }
        else
        {
            HSWB_ac_B.Cnt++;
        }
    }
    else
    {
        /* During 'NORMAL': '<S18>:37' */
        tmp = tmpRead.e_CnvnRes - HSWB_ac_B.InputRaw0;
        if ((tmp > KeHSWB_U_HoodAjarSnsSpikeThd) || (tmp <
                (-KeHSWB_U_HoodAjarSnsSpikeThd)))
        {
            /* Transition: '<S18>:39' */
            HSWB_ac_DW.is_c2_HSWB_ac = HSWB_ac_IN_FILTERING;

            /* Entry 'FILTERING': '<S18>:38' */
            HSWB_ac_B.Cnt = 0.0F;
        }
        else
        {
            VeHSWB_U_HoodAjarSnsVoltRaw = tmpRead.e_CnvnRes;
            HSWB_ac_B.InputRaw0 = tmpRead.e_CnvnRes;
        }
    }

    /* End of Chart: '<S9>/AntiSpkFil' */

    /* Switch: '<S24>/Switch' */
    if (HSWB_ac_DW.UnitDelay_DSTATE)
    {
        /* Assignment: '<S25>/Assignment_y' incorporates:
         *  Switch: '<S11>/Switch'
         */
        VeHSWB_U_HoodAjarSnsVolt = VeHSWB_U_HoodAjarSnsVoltRaw;
    }
    else
    {
        /* Assignment: '<S25>/Assignment_y' incorporates:
         *  Constant: '<S21>/Calib'
         *  Product: '<S24>/Product'
         *  Selector: '<S23>/Selector_u'
         *  Selector: '<S23>/Selector_x'
         *  Sum: '<S24>/Difference'
         *  Sum: '<S24>/Sum'
         *  Switch: '<S11>/Switch'
         *  Switch: '<S24>/Switch_E'
         */
        VeHSWB_U_HoodAjarSnsVolt = ((VeHSWB_U_HoodAjarSnsVoltRaw -
            VeHSWB_U_HoodAjarSnsVolt) * KeHSWB_k_HoodAjarSnsFiltGx) +
            VeHSWB_U_HoodAjarSnsVolt;
    }

    /* End of Switch: '<S24>/Switch' */

    /* SignalConversion generated from: '<S10>/Vector' */
    rtb_TmpSignalConversionAtVectorInport1[0] = VeHSWB_U_HoodAjarSnsVoltRaw;
    rtb_TmpSignalConversionAtVectorInport1[1] = VeHSWB_U_HoodAjarSnsVolt;

    /* Lookup_n-D: '<S10>/Vector' */
    for (iU = 0; iU < 2; iU++)
    {
        rtb_Vector[iU] = look1_iflf_binlca_19a
            (rtb_TmpSignalConversionAtVectorInport1[iU], ((const float32 *)
              &(KxHSWB_U_HoodAjarSnsChartc[0])), ((const float32 *)
              &(KtHSWB_U_HoodAjarSnsChartc[0])), 23U);
    }

    /* End of Lookup_n-D: '<S10>/Vector' */

    /* Switch: '<S13>/Switch' incorporates:
     *  UnitDelay: '<S8>/VeHSWB_U_HoodAjarSnsInit'
     */
    if (!rtb_TmpSignalConversionAtVeADFB_b_A2DFau)
    {
        HSWB_ac_DW.VeHSWB_U_HoodAjarSnsInit_DSTATE = rtb_Vector[1];
    }

    /* End of Switch: '<S13>/Switch' */

    /* Switch: '<S11>/Switch' incorporates:
     *  Constant: '<S15>/Calib'
     *  Constant: '<S17>/KeTAIB_b_OEXV_OutTempRcvryEnbl'
     *  Logic: '<S12>/Logical Operator'
     *  Switch: '<S12>/Switch'
     */
    if (KeHSWB_b_HoodAjarSnsBypEnbl)
    {
        /* Outport: '<Root>/VeHSWB_U_HoodAjarSns' incorporates:
         *  Constant: '<S14>/Calib'
         *  SignalConversion: '<S7>/Signal Conversion'
         */
        (void)Rte_Write_VeHSWB_U_HoodAjarSns_Value(KeHSWB_U_HoodAjarSnsByp);
    }
    else if ((KeHSWB_b_HoodAjarSnsRcvryEnbl) &&
             rtb_TmpSignalConversionAtVeADFB_b_A2DFau)
    {
        /* Outport: '<Root>/VeHSWB_U_HoodAjarSns' incorporates:
         *  Constant: '<S16>/KeTAIB_T_OEXV_OutTempRcvry'
         *  SignalConversion: '<S7>/Signal Conversion'
         *  Switch: '<S12>/Switch'
         */
        (void)Rte_Write_VeHSWB_U_HoodAjarSns_Value(KeHSWB_U_HoodAjarSnsRcvry);
    }
    else
    {
        /* Outport: '<Root>/VeHSWB_U_HoodAjarSns' incorporates:
         *  SignalConversion: '<S7>/Signal Conversion'
         *  Switch: '<S12>/Switch'
         *  UnitDelay: '<S8>/VeHSWB_U_HoodAjarSnsInit'
         */
        (void)Rte_Write_VeHSWB_U_HoodAjarSns_Value
            (HSWB_ac_DW.VeHSWB_U_HoodAjarSnsInit_DSTATE);
    }

    /* End of Switch: '<S11>/Switch' */

    /* Outport: '<Root>/VeHSWB_b_HoodAjarSns_FA' incorporates:
     *  SignalConversion: '<S7>/Signal Conversion1'
     */
    (void)Rte_Write_VeHSWB_b_HoodAjarSns_FA_Value
        (rtb_TmpSignalConversionAtVeADFB_b_A2DFau);

    /* End of Outputs for SubSystem: '<S6>/HoodAjarSns' */

    /* Outport: '<Root>/VeHSWB_U_HoodAjarSnsRaw' */
    (void)Rte_Write_VeHSWB_U_HoodAjarSnsRaw_Value(rtb_Vector[0]);
    HSWB_ac_DW.UnitDelay_DSTATE = false;

    /* End of Outputs for SubSystem: '<S2>/HoodAjarSns' */
#endif

    /* End of UnitDelay: '<S2>/Unit Delay' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
}

/* Model initialize function */
FUNC(void, HSWB_CODE) HSWB_ac_Init(void)
{
    /* Outputs for Atomic SubSystem: '<Root>/Init' */
    /* InitializeConditions for UnitDelay: '<S2>/Unit Delay' */
#if Rte_SysCon_Variant_HSWB_HoodAjarSwitch_Presence

    /* Outputs for Atomic SubSystem: '<S1>/HoodAjarSns' */
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngtAndCnvn'
     */
    /* SystemInitialize for Atomic SubSystem: '<S2>/HoodAjarSns' */
    HSWB_ac_DW.UnitDelay_DSTATE = true;

    /* Outputs for Atomic SubSystem: '<S3>/HoodAjarSns' */
    /* Outport: '<Root>/VeHSWB_U_HoodAjarSnsRaw' incorporates:
     *  Constant: '<S5>/Calib'
     *  SignalConversion: '<S4>/Signal Conversion'
     */
    (void)Rte_Write_VeHSWB_U_HoodAjarSnsRaw_Value(KeHSWB_U_HoodAjarSnsInit);

    /* Outport: '<Root>/VeHSWB_U_HoodAjarSns' incorporates:
     *  Constant: '<S5>/Calib'
     *  SignalConversion: '<S4>/Signal Conversion1'
     */
    (void)Rte_Write_VeHSWB_U_HoodAjarSns_Value(KeHSWB_U_HoodAjarSnsInit);

    /* End of Outputs for SubSystem: '<S3>/HoodAjarSns' */
    /* End of Outputs for SubSystem: '<S1>/HoodAjarSns' */
#endif

    /* End of InitializeConditions for UnitDelay: '<S2>/Unit Delay' */
    /* End of SystemInitialize for SubSystem: '<S2>/HoodAjarSns' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
    /* End of Outputs for SubSystem: '<Root>/Init' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
