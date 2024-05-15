/*
 * File: BRKB_ac.c
 *
 * Code generated for Simulink model 'BRKB_ac'.
 *
 * Model version                  : 1.65
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:09:30 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BRKB_ac.h"
#include "look1_iflf_binlca_19a.h"

/* Named constants for Chart: '<S18>/AntiSpkFil' */
#if Rte_SysCon_Variant_BRKB_ONEBRKBOXSW_Presence
#define BRKB_ac_IN_FILTERING           ((uint8)1U)
#endif

#if Rte_SysCon_Variant_BRKB_ONEBRKBOXSW_Presence
#define BRKB_ac_IN_NORMAL              ((uint8)2U)
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
#define START_SEC_CALIB_UNSPECIFIED_BRKB
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_BRKB_ONEBRKBOXSW_Presence

static volatile CONST(uint16, BRKB_VAR_INIT) KeBRKB_Cnt_OneBrkBoxSwSpikeThd = 2U;/* Referenced by: '<S28>/Calib' */

#endif

#if Rte_SysCon_Variant_BRKB_ONEBRKBOXSW_Presence

static volatile CONST(float32, BRKB_VAR_INIT) KeBRKB_Pct_OneBrkBoxSwInit = 0.0F;/* Referenced by: '<S40>/Calib' */

#endif

#if Rte_SysCon_Variant_BRKB_ONEBRKBOXSW_Presence

static volatile CONST(float32, BRKB_VAR_INIT) KeBRKB_Pct_OneBrkBoxSwRcvry =
    80.0F;                 /* Referenced by: '<S25>/KeAPSB_U_AccPedSnsrRcvry' */

#endif

#if Rte_SysCon_Variant_BRKB_ONEBRKBOXSW_Presence

static volatile CONST(float32, BRKB_VAR_INIT) KeBRKB_U_OneBrkBoxSwByp = 0.0F;
                             /* Referenced by: '<S23>/KeAPSB_U_AccPedSnsrByp' */

#endif

#if Rte_SysCon_Variant_BRKB_ONEBRKBOXSW_Presence

static volatile CONST(float32, BRKB_VAR_INIT) KeBRKB_U_OneBrkBoxSwInit = 0.0F;/* Referenced by: '<S41>/Calib' */

#endif

#if Rte_SysCon_Variant_BRKB_ONEBRKBOXSW_Presence

static volatile CONST(float32, BRKB_VAR_INIT) KeBRKB_U_OneBrkBoxSwSpikeThd =
    1.0F;                              /* Referenced by: '<S29>/Calib' */

#endif

#if Rte_SysCon_Variant_BRKB_HBO_Presence

static volatile CONST(boolean, BRKB_VAR_INIT) KeBRKB_b_BrkrSwitchByp = 0;/* Referenced by: '<S11>/Calib' */

#endif

#if Rte_SysCon_Variant_BRKB_HBO_Presence

static volatile CONST(boolean, BRKB_VAR_INIT) KeBRKB_b_BrkrSwitchBypEnbl = 0;/* Referenced by: '<S12>/Calib' */

#endif

#if Rte_SysCon_Variant_BRKB_HBO_Presence

static volatile CONST(boolean, BRKB_VAR_INIT) KeBRKB_b_BrkrSwitchFiltdEnb = 0;/* Referenced by: '<S9>/Calib' */

#endif

#if Rte_SysCon_Variant_BRKB_HBO_Presence

static volatile CONST(boolean, BRKB_VAR_INIT) KeBRKB_b_BrkrSwitchInit = 0;/* Referenced by: '<S38>/Calib' */

#endif

#if Rte_SysCon_Variant_BRKB_HBO_Presence

static volatile CONST(boolean, BRKB_VAR_INIT) KeBRKB_b_BrkrSwitchPolarInvEnb = 0;/* Referenced by: '<S14>/Calib' */

#endif

#if Rte_SysCon_Variant_BRKB_ONEBRKBOXSW_Presence

static volatile CONST(boolean, BRKB_VAR_INIT) KeBRKB_b_OneBrkBoxSwBypEnbl = 0;
                         /* Referenced by: '<S24>/KeAPSB_b_AccPedSnsrBypEnbl' */

#endif

#if Rte_SysCon_Variant_BRKB_ONEBRKBOXSW_Presence

static volatile CONST(boolean, BRKB_VAR_INIT) KeBRKB_b_OneBrkBoxSwRcvryEnbl = 0;
                       /* Referenced by: '<S26>/KeAPSB_b_AccPedSnsrRcvryEnbl' */

#endif

#if Rte_SysCon_Variant_BRKB_ONEBRKBOXSW_Presence

static volatile CONST(float32, BRKB_VAR_INIT) KeBRKB_k_OneBrkBoxSwFiltGx = 0.8F;/* Referenced by: '<S30>/Calib' */

#endif

#if Rte_SysCon_Variant_BRKB_ONEBRKBOXSW_Presence

static volatile CONST(float32, BRKB_VAR_INIT) KtBRKB_U_OneBrkBoxSwChartc[13] =
{
    0.0F, 1.0F, 2.0F, 3.0F, 4.0F, 5.0F, 6.0F, 7.0F, 8.0F, 9.0F, 10.0F, 11.0F,
    12.0F
} ;                                    /* Referenced by: '<S19>/Vector' */

#endif

#if Rte_SysCon_Variant_BRKB_ONEBRKBOXSW_Presence

static volatile CONST(float32, BRKB_VAR_INIT) KxBRKB_Pct_OneBrkBoxSwChartc[13] =
{
    0.0F, 8.3F, 16.6F, 25.0F, 33.3F, 41.6F, 50.0F, 58.3F, 66.6F, 75.0F, 83.3F,
    91.6F, 100.0F
} ;                                    /* Referenced by: '<S19>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_BRKB
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_BRKB
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_BRKB_ONEBRKBOXSW_Presence

static VAR(float32, BRKB_VAR_INIT) VeBRKB_U_OneBrkBoxSwVolt;/* '<S34>/Assignment_y' */

#endif

#if Rte_SysCon_Variant_BRKB_ONEBRKBOXSW_Presence

static VAR(float32, BRKB_VAR_INIT) VeBRKB_U_OneBrkBoxSwVoltRaw;/* '<S18>/AntiSpkFil' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_BRKB
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_BRKB
#include "MemMap.h"

VAR(B_BRKB_ac_T, BRKB_VAR_INIT) BRKB_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_BRKB
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_BRKB
#include "MemMap.h"

VAR(DW_BRKB_ac_T, BRKB_VAR_INIT) BRKB_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_BRKB
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, BRKB_CODE) BRKB_FastTEF(void) /* Explicit Task: FastTEF */
{

#if Rte_SysCon_Variant_BRKB_ONEBRKBOXSW_Presence

    IDTRAdcInpResData tmpRead;

#endif

#if Rte_SysCon_Variant_BRKB_ONEBRKBOXSW_Presence

    boolean tmpRead_0;

#endif

#if Rte_SysCon_Variant_BRKB_ONEBRKBOXSW_Presence

    float32 rtb_Switch_k[2];

#endif

#if Rte_SysCon_Variant_BRKB_HBO_Presence

    boolean rtb_Switch_d[2];

#endif

#if Rte_SysCon_Variant_BRKB_HBO_Presence || Rte_SysCon_Variant_BRKB_ONEBRKBOXSW_Presence

    boolean rtb_TmpSignalConversionAtVeDIOR_b_HboSwD;

#endif

#if Rte_SysCon_Variant_BRKB_HBO_Presence

    boolean rtb_TmpSignalConversionAtVeDIOR_b_HboS_j;

#endif

#if Rte_SysCon_Variant_BRKB_HBO_Presence || Rte_SysCon_Variant_BRKB_ONEBRKBOXSW_Presence

    sint32 i;

#endif

#if Rte_SysCon_Variant_BRKB_ONEBRKBOXSW_Presence

    float32 tmp;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/BRKR_5ms'
     */
    /* SignalConversion generated from: '<S1>/VeDIOR_b_HboSwDigInpImdtVal_VeDIOR_b_DigInpImdtVal' incorporates:
     *  SignalConversion generated from: '<S1>/VeDIOR_b_HboSwDigInpFiltdVal_VeDIOR_b_DigInpFiltdVal'
     */
#if Rte_SysCon_Variant_BRKB_HBO_Presence

    /* Outputs for Atomic SubSystem: '<S1>/Brake Switch' */
    /* SignalConversion generated from: '<S1>/VeDIOR_b_HboSwDigInpImdtVal_VeDIOR_b_DigInpImdtVal' incorporates:
     *  Inport: '<Root>/VeDIOR_b_HboSwDigInpImdtVal_VeDIOR_b_DigInpImdtVal'
     */
    (void)Rte_Read_VeDIOR_b_HboSwDigInpImdtVal_VeDIOR_b_DigInpImdtVal
        (&rtb_TmpSignalConversionAtVeDIOR_b_HboSwD);

    /* SignalConversion generated from: '<S1>/VeDIOR_b_HboSwDigInpFiltdVal_VeDIOR_b_DigInpFiltdVal' incorporates:
     *  Inport: '<Root>/VeDIOR_b_HboSwDigInpFiltdVal_VeDIOR_b_DigInpFiltdVal'
     */
    (void)Rte_Read_VeDIOR_b_HboSwDigInpFiltdVal_VeDIOR_b_DigInpFiltdVal
        (&rtb_TmpSignalConversionAtVeDIOR_b_HboS_j);

    /* Outputs for Atomic SubSystem: '<S3>/Brake Switch' */
    /* Switch: '<S13>/Switch' incorporates:
     *  Constant: '<S12>/Calib'
     *  Constant: '<S14>/Calib'
     *  Switch: '<S15>/Switch'
     */
    if (KeBRKB_b_BrkrSwitchBypEnbl)
    {
        /* Switch: '<S13>/Switch' incorporates:
         *  Constant: '<S11>/Calib'
         */
        for (i = 0; i < 2; i++)
        {
            rtb_Switch_d[i] = KeBRKB_b_BrkrSwitchByp;
        }
    }
    else if (KeBRKB_b_BrkrSwitchPolarInvEnb)
    {
        /* Switch: '<S13>/Switch' incorporates:
         *  Logic: '<S8>/Logical Operator'
         *  Switch: '<S15>/Switch'
         */
        rtb_Switch_d[0] = !rtb_TmpSignalConversionAtVeDIOR_b_HboSwD;
        rtb_Switch_d[1] = !rtb_TmpSignalConversionAtVeDIOR_b_HboS_j;
    }
    else
    {
        /* Switch: '<S13>/Switch' incorporates:
         *  Switch: '<S15>/Switch'
         */
        rtb_Switch_d[0] = rtb_TmpSignalConversionAtVeDIOR_b_HboSwD;
        rtb_Switch_d[1] = rtb_TmpSignalConversionAtVeDIOR_b_HboS_j;
    }

    /* End of Switch: '<S13>/Switch' */

    /* Switch: '<S10>/Switch' incorporates:
     *  Constant: '<S9>/Calib'
     */
    if (KeBRKB_b_BrkrSwitchFiltdEnb)
    {
        /* Outport: '<Root>/VeBRKB_b_BrkrSwitch' */
        (void)Rte_Write_VeBRKB_b_BrkrSwitch_Value(rtb_Switch_d[1]);
    }
    else
    {
        /* Outport: '<Root>/VeBRKB_b_BrkrSwitch' */
        (void)Rte_Write_VeBRKB_b_BrkrSwitch_Value(rtb_Switch_d[0]);
    }

    /* End of Switch: '<S10>/Switch' */
    /* End of Outputs for SubSystem: '<S3>/Brake Switch' */
    /* End of Outputs for SubSystem: '<S1>/Brake Switch' */
#endif

    /* End of SignalConversion generated from: '<S1>/VeDIOR_b_HboSwDigInpImdtVal_VeDIOR_b_DigInpImdtVal' */

    /* SignalConversion generated from: '<S1>/VeBRKB_Pct_OneBrkBoxPdlPosn' incorporates:
     *  Inport: '<Root>/VeADCR_U_Sa3Ppps2_VsADCR_e_CnvnRes'
     *  Inport: '<Root>/VeADFB_b_A2DFault'
     *  SignalConversion generated from: '<S1>/VeBRKB_b_OneBrkBoxPdlPosnFA'
     */
#if Rte_SysCon_Variant_BRKB_ONEBRKBOXSW_Presence

    /* Outputs for Atomic SubSystem: '<S1>/One Brake Box Switch' */
    /* Gateway: BRKR_5ms/One Brake Box Switch/One Brake Switch/SigAcqnAndFilSys/AntiSpkFil */
    /* During: BRKR_5ms/One Brake Box Switch/One Brake Switch/SigAcqnAndFilSys/AntiSpkFil */
    (void)Rte_Read_VeADCR_U_Sa3Ppps2_VsADCR_e_CnvnRes(&tmpRead);

    /* Outputs for Atomic SubSystem: '<S4>/One Brake Switch' */
    /* Chart: '<S18>/AntiSpkFil' incorporates:
     *  Constant: '<S28>/Calib'
     *  Constant: '<S29>/Calib'
     *  Inport: '<Root>/VeADCR_U_Sa3Ppps2_VsADCR_e_CnvnRes'
     */
    if (((uint32)BRKB_ac_DW.is_active_c2_BRKB_ac) == 0U)
    {
        /* Entry: BRKR_5ms/One Brake Box Switch/One Brake Switch/SigAcqnAndFilSys/AntiSpkFil */
        BRKB_ac_DW.is_active_c2_BRKB_ac = 1U;

        /* Entry Internal: BRKR_5ms/One Brake Box Switch/One Brake Switch/SigAcqnAndFilSys/AntiSpkFil */
        /* Transition: '<S27>:8' */
        BRKB_ac_DW.is_c2_BRKB_ac = BRKB_ac_IN_NORMAL;

        /* Entry 'NORMAL': '<S27>:37' */
        BRKB_ac_B.InputRaw0 = tmpRead.e_CnvnRes;
        VeBRKB_U_OneBrkBoxSwVoltRaw = tmpRead.e_CnvnRes;
    }
    else if (((uint32)BRKB_ac_DW.is_c2_BRKB_ac) == BRKB_ac_IN_FILTERING)
    {
        /* During 'FILTERING': '<S27>:38' */
        if (BRKB_ac_B.Cnt >= ((float32)KeBRKB_Cnt_OneBrkBoxSwSpikeThd))
        {
            /* Transition: '<S27>:40' */
            BRKB_ac_DW.is_c2_BRKB_ac = BRKB_ac_IN_NORMAL;

            /* Entry 'NORMAL': '<S27>:37' */
            BRKB_ac_B.InputRaw0 = tmpRead.e_CnvnRes;
            VeBRKB_U_OneBrkBoxSwVoltRaw = tmpRead.e_CnvnRes;
        }
        else
        {
            BRKB_ac_B.Cnt++;
        }
    }
    else
    {
        /* During 'NORMAL': '<S27>:37' */
        tmp = tmpRead.e_CnvnRes - BRKB_ac_B.InputRaw0;
        if ((tmp > KeBRKB_U_OneBrkBoxSwSpikeThd) || (tmp <
                (-KeBRKB_U_OneBrkBoxSwSpikeThd)))
        {
            /* Transition: '<S27>:39' */
            BRKB_ac_DW.is_c2_BRKB_ac = BRKB_ac_IN_FILTERING;

            /* Entry 'FILTERING': '<S27>:38' */
            BRKB_ac_B.Cnt = 0.0F;
        }
        else
        {
            VeBRKB_U_OneBrkBoxSwVoltRaw = tmpRead.e_CnvnRes;
            BRKB_ac_B.InputRaw0 = tmpRead.e_CnvnRes;
        }
    }

    /* End of Chart: '<S18>/AntiSpkFil' */

    /* Switch: '<S33>/Switch' incorporates:
     *  Selector: '<S32>/Selector_R'
     *  UnitDelay: '<S18>/Unit Delay'
     */
    if (BRKB_ac_DW.UnitDelay_DSTATE)
    {
        /* Assignment: '<S34>/Assignment_y' incorporates:
         *  Switch: '<S33>/Switch'
         */
        VeBRKB_U_OneBrkBoxSwVolt = VeBRKB_U_OneBrkBoxSwVoltRaw;
    }
    else
    {
        /* Assignment: '<S34>/Assignment_y' incorporates:
         *  Constant: '<S30>/Calib'
         *  Product: '<S33>/Product'
         *  Selector: '<S32>/Selector_u'
         *  Selector: '<S32>/Selector_x'
         *  Sum: '<S33>/Difference'
         *  Sum: '<S33>/Sum'
         *  Switch: '<S33>/Switch'
         *  Switch: '<S33>/Switch_E'
         */
        VeBRKB_U_OneBrkBoxSwVolt = ((VeBRKB_U_OneBrkBoxSwVoltRaw -
            VeBRKB_U_OneBrkBoxSwVolt) * KeBRKB_k_OneBrkBoxSwFiltGx) +
            VeBRKB_U_OneBrkBoxSwVolt;
    }

    /* End of Switch: '<S33>/Switch' */
    /* End of Outputs for SubSystem: '<S4>/One Brake Switch' */
    (void)Rte_Read_VeADFB_b_A2DFault_Value(&tmpRead_0);

    /* Outputs for Atomic SubSystem: '<S4>/One Brake Switch' */
    /* Switch: '<S22>/Switch' incorporates:
     *  Assignment: '<S34>/Assignment_y'
     *  Inport: '<Root>/VeADFB_b_A2DFault'
     *  Inport: '<S16>/VeADFB_b_A2DFault'
     *  Lookup_n-D: '<S19>/Vector'
     *  UnitDelay: '<S17>/VeBRKB_U_OneBrkBoxSwInit'
     */
    if (!tmpRead_0)
    {
        BRKB_ac_DW.VeBRKB_U_OneBrkBoxSwInit_DSTATE[0] = look1_iflf_binlca_19a
            (VeBRKB_U_OneBrkBoxSwVolt, ((const float32 *)
              &(KxBRKB_Pct_OneBrkBoxSwChartc[0])), ((const float32 *)
              &(KtBRKB_U_OneBrkBoxSwChartc[0])), 12U);
        BRKB_ac_DW.VeBRKB_U_OneBrkBoxSwInit_DSTATE[1] = VeBRKB_U_OneBrkBoxSwVolt;
    }

    /* End of Switch: '<S22>/Switch' */

    /* Switch: '<S20>/Switch' incorporates:
     *  Constant: '<S24>/KeAPSB_b_AccPedSnsrBypEnbl'
     */
    if (KeBRKB_b_OneBrkBoxSwBypEnbl)
    {
        /* Switch: '<S20>/Switch' incorporates:
         *  Constant: '<S23>/KeAPSB_U_AccPedSnsrByp'
         */
        for (i = 0; i < 2; i++)
        {
            rtb_Switch_k[i] = KeBRKB_U_OneBrkBoxSwByp;
        }
    }
    else
    {
        /* Logic: '<S21>/Logical Operator' incorporates:
         *  Constant: '<S26>/KeAPSB_b_AccPedSnsrRcvryEnbl'
         *  Inport: '<S16>/VeADFB_b_A2DFault'
         */
        rtb_TmpSignalConversionAtVeDIOR_b_HboSwD =
            ((KeBRKB_b_OneBrkBoxSwRcvryEnbl) && tmpRead_0);

        /* Switch: '<S20>/Switch' */
        for (i = 0; i < 2; i++)
        {
            /* Switch: '<S21>/Switch' incorporates:
             *  Constant: '<S25>/KeAPSB_U_AccPedSnsrRcvry'
             *  UnitDelay: '<S17>/VeBRKB_U_OneBrkBoxSwInit'
             */
            if (rtb_TmpSignalConversionAtVeDIOR_b_HboSwD)
            {
                rtb_Switch_k[i] = KeBRKB_Pct_OneBrkBoxSwRcvry;
            }
            else
            {
                rtb_Switch_k[i] = BRKB_ac_DW.VeBRKB_U_OneBrkBoxSwInit_DSTATE[i];
            }

            /* End of Switch: '<S21>/Switch' */
        }
    }

    /* End of Switch: '<S20>/Switch' */

    /* Outport: '<Root>/VeBRKB_U_OneBrkBoxPdlPosn' incorporates:
     *  SignalConversion: '<S16>/Signal Conversion'
     */
    (void)Rte_Write_VeBRKB_U_OneBrkBoxPdlPosn_Value(rtb_Switch_k[1]);

    /* Update for UnitDelay: '<S18>/Unit Delay' incorporates:
     *  Constant: '<S18>/Constant3'
     */
    BRKB_ac_DW.UnitDelay_DSTATE = false;

    /* End of Outputs for SubSystem: '<S4>/One Brake Switch' */

    /* Outport: '<Root>/VeBRKB_Pct_OneBrkBoxPdlPosn' */
    (void)Rte_Write_VeBRKB_Pct_OneBrkBoxPdlPosn_Value(rtb_Switch_k[0]);

    /* Outputs for Atomic SubSystem: '<S4>/One Brake Switch' */
    /* Outport: '<Root>/VeBRKB_b_OneBrkBoxPdlPosnFA' incorporates:
     *  Inport: '<S16>/VeADFB_b_A2DFault'
     */
    (void)Rte_Write_VeBRKB_b_OneBrkBoxPdlPosnFA_Value(tmpRead_0);

    /* End of Outputs for SubSystem: '<S4>/One Brake Switch' */
    /* End of Outputs for SubSystem: '<S1>/One Brake Box Switch' */
#endif

    /* End of SignalConversion generated from: '<S1>/VeBRKB_Pct_OneBrkBoxPdlPosn' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
}

/* Model initialize function */
FUNC(void, BRKB_CODE) BRKB_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/BRKR_5ms'
     */
#if Rte_SysCon_Variant_BRKB_ONEBRKBOXSW_Presence

    /* SystemInitialize for Atomic SubSystem: '<S1>/One Brake Box Switch' */
    /* SystemInitialize for Atomic SubSystem: '<S4>/One Brake Switch' */
    /* InitializeConditions for UnitDelay: '<S18>/Unit Delay' */
    BRKB_ac_DW.UnitDelay_DSTATE = true;

    /* End of SystemInitialize for SubSystem: '<S4>/One Brake Switch' */
    /* End of SystemInitialize for SubSystem: '<S1>/One Brake Box Switch' */
#endif

    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Outputs for Atomic SubSystem: '<Root>/Initialize Function' */
#if Rte_SysCon_Variant_BRKB_HBO_Presence

    /* Outputs for Atomic SubSystem: '<S2>/Brake Switch' */
    /* Outputs for Atomic SubSystem: '<S35>/Brake Switch' */
    /* Outport: '<Root>/VeBRKB_b_BrkrSwitch' incorporates:
     *  Constant: '<S38>/Calib'
     *  SignalConversion: '<S37>/Signal Conversion2'
     */
    (void)Rte_Write_VeBRKB_b_BrkrSwitch_Value(KeBRKB_b_BrkrSwitchInit);

    /* End of Outputs for SubSystem: '<S35>/Brake Switch' */
    /* End of Outputs for SubSystem: '<S2>/Brake Switch' */
#endif

#if Rte_SysCon_Variant_BRKB_ONEBRKBOXSW_Presence

    /* Outputs for Atomic SubSystem: '<S2>/One Brake Box Switch' */
    /* Outputs for Atomic SubSystem: '<S36>/Brake Switch' */
    /* Outport: '<Root>/VeBRKB_Pct_OneBrkBoxPdlPosn' incorporates:
     *  Constant: '<S40>/Calib'
     */
    (void)Rte_Write_VeBRKB_Pct_OneBrkBoxPdlPosn_Value(KeBRKB_Pct_OneBrkBoxSwInit);

    /* Outport: '<Root>/VeBRKB_U_OneBrkBoxPdlPosn' incorporates:
     *  Constant: '<S41>/Calib'
     */
    (void)Rte_Write_VeBRKB_U_OneBrkBoxPdlPosn_Value(KeBRKB_U_OneBrkBoxSwInit);

    /* End of Outputs for SubSystem: '<S36>/Brake Switch' */
    /* End of Outputs for SubSystem: '<S2>/One Brake Box Switch' */
    /* End of Outputs for SubSystem: '<Root>/Initialize Function' */
#endif

}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
