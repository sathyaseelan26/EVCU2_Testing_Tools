/*
 * File: VSMR_ac.c
 *
 * Code generated for Simulink model 'VSMR_ac'.
 *
 * Model version                  : 9.311
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 20:05:18 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "VSMR_ac.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_VSMR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_VSMR_eRuptEnabled

static volatile CONST(float32, VSMR_VAR_INIT) HeVSMR_t_MedTEB_dT = 0.01F;/* Referenced by: '<S35>/Calib' */

#endif

#if Rte_SysCon_Variant_VSMR_eRuptEnabled

static volatile CONST(boolean, VSMR_VAR_INIT) KaVSMR_b_eRuptDsbl_DrvMdBsd[23] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S34>/Calib' */

#endif

static volatile CONST(boolean, VSMR_VAR_INIT) KeVSMR_b_VirtShftMdOvrdEna = 0;/* Referenced by:
                                                                      * '<S13>/Calib'
                                                                      * '<S30>/Calib'
                                                                      */
static volatile CONST(boolean, VSMR_VAR_INIT) KeVSMR_b_VirtShftMdPopUpOvrdEna =
    0;                                 /* Referenced by:
                                        * '<S15>/Calib'
                                        * '<S32>/Calib'
                                        */
static volatile CONST(boolean, VSMR_VAR_INIT) KeVSMR_b_VirtShftTypeGrpOvrdEna =
    0;                                 /* Referenced by:
                                        * '<S11>/Calib'
                                        * '<S28>/Calib'
                                        */
static volatile CONST(TeVSMR_e_VirtShftMd, VSMR_VAR_INIT)
    KeVSMR_e_VirtShftMdOvrdVal = CeVSMR_e_VS_Enabled;/* Referenced by:
                                                      * '<S14>/Calib'
                                                      * '<S31>/Calib'
                                                      */
static volatile CONST(TeVSMR_e_VirtShftMdPopUp, VSMR_VAR_INIT)
    KeVSMR_e_VirtShftMdPopUpOvrdVal = CeVSMR_e_MSG_NoIssue;/* Referenced by:
                                                            * '<S16>/Calib'
                                                            * '<S33>/Calib'
                                                            */
static volatile CONST(TeVSMR_e_VirtShftTypeGrp, VSMR_VAR_INIT)
    KeVSMR_e_VirtShftTypeGrpOvrdVal = CeVSMR_e_VST_NoShift;/* Referenced by:
                                                            * '<S12>/Calib'
                                                            * '<S29>/Calib'
                                                            */

#if Rte_SysCon_Variant_VSMR_eRuptEnabled

static volatile CONST(float32, VSMR_VAR_INIT) KeVSMR_t_PopUpMsgTm = 1.0F;/* Referenced by: '<S36>/Calib' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_VSMR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_VSMR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_VSMR_eRuptEnabled

static VAR(boolean, VSMR_VAR_INIT) VeVSMR_b_eRuptDsbl_DrvMd;/* '<S7>/Selector' */

#endif

#if Rte_SysCon_Variant_VSMR_eRuptEnabled

static VAR(TeVSMR_e_VirtShftMd, VSMR_VAR_INIT) VeVSMR_e_VirtShftMd_Saved;/* '<S7>/Unit Delay1' */

#endif

#if Rte_SysCon_Variant_VSMR_eRuptEnabled

static VAR(TeVSMR_e_VirtShftMd, VSMR_VAR_INIT) VeVSMR_e_VirtShftMd_Toggle;/* '<S7>/Switch4' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_VSMR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_VSMR
#include "MemMap.h"

VAR(DW_VSMR_ac_T, VSMR_VAR_INIT) VSMR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_VSMR
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, VSMR_CODE) VSMR_MedTEB(void) /* Explicit Task: MedTEB */
{

#if Rte_SysCon_Variant_VSMR_eRuptEnabled

    TeTMDR_e_TrrnMd tmpRead;

#endif

#if Rte_SysCon_Variant_VSMR_eRuptEnabled

    boolean rtb_AND_fc;

#endif

#if Rte_SysCon_Variant_VSMR_eRuptEnabled

    boolean rtb_AND_c;

#endif

#if Rte_SysCon_Variant_VSMR_eRuptEnabled

    boolean rtb_TmpSignalConversionAtVeDMIR_b_eRuptR;

#endif

#if Rte_SysCon_Variant_VSMR_eRuptEnabled

    boolean rtb_AND_o;

#endif

    TeVSMR_e_VirtShftMd tmp_0;
    TeVSMR_e_VirtShftMdPopUp rtb_LogicalOperator3_0;
    TeVSMR_e_VirtShftTypeGrp tmp;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/VSMR_MedTEB'
     */
    /* Outputs for Atomic SubSystem: '<S1>/VSMC_A' */
    /* SignalConversion generated from: '<S1>/VeDMIR_b_eRuptRequest' incorporates:
     *  Inport: '<Root>/VeTMDR_e_TrrnMd'
     */
#if Rte_SysCon_Variant_VSMR_eRuptEnabled

    /* Outputs for Atomic SubSystem: '<S5>/VSMC_Enabled' */
    /* SignalConversion generated from: '<S1>/VeDMIR_b_eRuptRequest' incorporates:
     *  Inport: '<Root>/VeDMIR_b_eRuptRequest'
     */
    (void)Rte_Read_VeDMIR_b_eRuptRequest_Value
        (&rtb_TmpSignalConversionAtVeDMIR_b_eRuptR);
    (void)Rte_Read_VeTMDR_e_TrrnMd_Value(&tmpRead);

    /* Selector: '<S7>/Selector' incorporates:
     *  Constant: '<S34>/Calib'
     *  DataTypeConversion: '<S7>/Data Type Conversion'
     *  Inport: '<Root>/VeTMDR_e_TrrnMd'
     */
    VeVSMR_b_eRuptDsbl_DrvMd = KaVSMR_b_eRuptDsbl_DrvMdBsd[(tmpRead)];

    /* Outputs for Atomic SubSystem: '<S7>/EdgeFalling' */
    /* Logic: '<S17>/AND' incorporates:
     *  Logic: '<S17>/OR1'
     *  Logic: '<S7>/Logical Operator2'
     *  UnitDelay: '<S17>/Unit Delay'
     */
    rtb_AND_c = ((!VeVSMR_b_eRuptDsbl_DrvMd) && (VSMR_ac_DW.UnitDelay_DSTATE_i));

    /* Update for UnitDelay: '<S17>/Unit Delay' incorporates:
     *  Logic: '<S7>/Logical Operator2'
     */
    VSMR_ac_DW.UnitDelay_DSTATE_i = VeVSMR_b_eRuptDsbl_DrvMd;

    /* End of Outputs for SubSystem: '<S7>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S7>/EdgeRising' */
    /* Logic: '<S18>/AND' incorporates:
     *  Logic: '<S18>/OR1'
     *  UnitDelay: '<S18>/Unit Delay'
     */
    rtb_AND_fc = (rtb_TmpSignalConversionAtVeDMIR_b_eRuptR &&
                  (!VSMR_ac_DW.UnitDelay_DSTATE_l));

    /* Update for UnitDelay: '<S18>/Unit Delay' */
    VSMR_ac_DW.UnitDelay_DSTATE_l = rtb_TmpSignalConversionAtVeDMIR_b_eRuptR;

    /* End of Outputs for SubSystem: '<S7>/EdgeRising' */

    /* Logic: '<S7>/Logical Operator3' incorporates:
     *  Logic: '<S7>/Logical Operator2'
     */
    rtb_TmpSignalConversionAtVeDMIR_b_eRuptR = (rtb_AND_fc &&
        (VeVSMR_b_eRuptDsbl_DrvMd));

    /* Outputs for Atomic SubSystem: '<S7>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S37>/EdgeFalling' */
    /* Logic: '<S38>/AND' incorporates:
     *  Logic: '<S38>/OR1'
     *  UnitDelay: '<S38>/Unit Delay'
     */
    rtb_AND_o = ((!rtb_TmpSignalConversionAtVeDMIR_b_eRuptR) &&
                 (VSMR_ac_DW.UnitDelay_DSTATE_k));

    /* Update for UnitDelay: '<S38>/Unit Delay' */
    VSMR_ac_DW.UnitDelay_DSTATE_k = rtb_TmpSignalConversionAtVeDMIR_b_eRuptR;

    /* End of Outputs for SubSystem: '<S37>/EdgeFalling' */

    /* Switch: '<S37>/Switch' incorporates:
     *  Constant: '<S35>/Calib'
     *  Constant: '<S36>/Calib'
     *  Constant: '<S37>/Constant Value1'
     *  MinMax: '<S37>/Minimum'
     *  Sum: '<S37>/Summation'
     *  UnitDelay: '<S37>/Unit Delay'
     */
    if (rtb_AND_o)
    {
        VSMR_ac_DW.UnitDelay_DSTATE = KeVSMR_t_PopUpMsgTm;
    }
    else
    {
        VSMR_ac_DW.UnitDelay_DSTATE = fmaxf(VSMR_ac_DW.UnitDelay_DSTATE -
            HeVSMR_t_MedTEB_dT, 0.0F);
    }

    /* End of Switch: '<S37>/Switch' */
    /* End of Outputs for SubSystem: '<S7>/Turn Off Delay Time' */

    /* UnitDelay: '<S7>/Unit Delay1' */
    VeVSMR_e_VirtShftMd_Saved = VSMR_ac_DW.UnitDelay1_DSTATE;

    /* RelationalOperator: '<S7>/Relational Operator' incorporates:
     *  RelationalOperator: '<S7>/Relational Operator1'
     *  Switch: '<S7>/Switch4'
     *  Switch: '<S7>/Switch5'
     *  UnitDelay: '<S7>/Unit Delay'
     */
    tmp_0 = VSMR_ac_DW.UnitDelay_DSTATE_d;

    /* Switch: '<S7>/Switch4' incorporates:
     *  Constant: '<S21>/Constant'
     *  Constant: '<S22>/Constant'
     *  Logic: '<S7>/Logical Operator'
     *  Logic: '<S7>/Logical Operator1'
     *  RelationalOperator: '<S7>/Relational Operator'
     *  RelationalOperator: '<S7>/Relational Operator1'
     *  Switch: '<S7>/Switch5'
     */
    if (rtb_AND_fc && (CeVSMR_e_VS_Enabled == ((uint32)tmp_0)))
    {
        /* Switch: '<S7>/Switch4' incorporates:
         *  Constant: '<S24>/Constant'
         */
        VeVSMR_e_VirtShftMd_Toggle = CeVSMR_e_VS_Disabled;
    }
    else if (rtb_AND_fc && (CeVSMR_e_VS_Disabled == ((uint32)tmp_0)))
    {
        /* Switch: '<S7>/Switch5' incorporates:
         *  Constant: '<S25>/Constant'
         *  Switch: '<S7>/Switch4'
         */
        VeVSMR_e_VirtShftMd_Toggle = CeVSMR_e_VS_Enabled;
    }
    else
    {
        /* Switch: '<S7>/Switch4' */
        VeVSMR_e_VirtShftMd_Toggle = tmp_0;
    }

    /* Switch: '<S7>/Switch3' incorporates:
     *  Constant: '<S20>/Constant'
     *  Logic: '<S7>/Logical Operator2'
     *  Switch: '<S7>/Switch4'
     *  Switch: '<S7>/Switch8'
     *  UnitDelay: '<S7>/Unit Delay'
     */
    if (VeVSMR_b_eRuptDsbl_DrvMd)
    {
        VSMR_ac_DW.UnitDelay_DSTATE_d = CeVSMR_e_VS_Unavailable;
    }
    else if (rtb_AND_c)
    {
        /* Switch: '<S7>/Switch8' incorporates:
         *  Switch: '<S7>/Switch3'
         *  UnitDelay: '<S7>/Unit Delay'
         *  UnitDelay: '<S7>/Unit Delay1'
         */
        VSMR_ac_DW.UnitDelay_DSTATE_d = VeVSMR_e_VirtShftMd_Saved;
    }
    else
    {
        VSMR_ac_DW.UnitDelay_DSTATE_d = VeVSMR_e_VirtShftMd_Toggle;
    }

    /* End of Switch: '<S7>/Switch3' */

    /* Switch: '<S7>/Switch1' incorporates:
     *  Constant: '<S30>/Calib'
     *  Constant: '<S31>/Calib'
     *  Switch: '<S7>/Switch3'
     *  UnitDelay: '<S7>/Unit Delay'
     */
    if (KeVSMR_b_VirtShftMdOvrdEna)
    {
        tmp_0 = KeVSMR_e_VirtShftMdOvrdVal;
    }
    else
    {
        tmp_0 = VSMR_ac_DW.UnitDelay_DSTATE_d;
    }

    /* Outport: '<Root>/VeVSMR_e_VirtShftMd' incorporates:
     *  Switch: '<S7>/Switch1'
     */
    (void)Rte_Write_VeVSMR_e_VirtShftMd_Value(tmp_0);

    /* Switch: '<S7>/Switch2' incorporates:
     *  Constant: '<S32>/Calib'
     *  Constant: '<S37>/Constant Value2'
     *  Logic: '<S37>/AND'
     *  Logic: '<S7>/Logical Operator4'
     *  RelationalOperator: '<S37>/Greater  Than'
     *  Switch: '<S7>/Switch6'
     *  UnitDelay: '<S37>/Unit Delay'
     */
    if (KeVSMR_b_VirtShftMdPopUpOvrdEna)
    {
        /* Outport: '<Root>/VeVSMR_e_VirtShftMdPopUp' incorporates:
         *  Constant: '<S33>/Calib'
         */
        (void)Rte_Write_VeVSMR_e_VirtShftMdPopUp_Value
            (KeVSMR_e_VirtShftMdPopUpOvrdVal);
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S7>/Turn Off Delay Time' */
        if ((rtb_TmpSignalConversionAtVeDMIR_b_eRuptR ||
                (VSMR_ac_DW.UnitDelay_DSTATE > 0.0F)) &&
                (VeVSMR_b_eRuptDsbl_DrvMd))
        {
            /* Switch: '<S7>/Switch6' incorporates:
             *  Constant: '<S27>/Constant'
             */
            rtb_LogicalOperator3_0 = CeVSMR_e_MSG_DriveMode;
        }
        else
        {
            /* Switch: '<S7>/Switch6' incorporates:
             *  Constant: '<S23>/Constant'
             *  Switch: '<S7>/Switch9'
             */
            rtb_LogicalOperator3_0 = CeVSMR_e_MSG_NoIssue;
        }

        /* End of Outputs for SubSystem: '<S7>/Turn Off Delay Time' */

        /* Outport: '<Root>/VeVSMR_e_VirtShftMdPopUp' */
        (void)Rte_Write_VeVSMR_e_VirtShftMdPopUp_Value(rtb_LogicalOperator3_0);
    }

    /* End of Switch: '<S7>/Switch2' */

    /* Switch: '<S7>/Switch7' incorporates:
     *  Logic: '<S7>/Logical Operator2'
     *  Switch: '<S7>/Switch3'
     *  UnitDelay: '<S7>/Unit Delay'
     *  UnitDelay: '<S7>/Unit Delay1'
     */
    if (VeVSMR_b_eRuptDsbl_DrvMd)
    {
    }
    else
    {
        VSMR_ac_DW.UnitDelay1_DSTATE = VSMR_ac_DW.UnitDelay_DSTATE_d;
    }

    /* End of Switch: '<S7>/Switch7' */

    /* Switch: '<S7>/Switch' incorporates:
     *  Constant: '<S19>/Constant'
     *  Constant: '<S28>/Calib'
     *  Constant: '<S29>/Calib'
     */
    if (KeVSMR_b_VirtShftTypeGrpOvrdEna)
    {
        tmp = KeVSMR_e_VirtShftTypeGrpOvrdVal;
    }
    else
    {
        tmp = CeVSMR_e_VST_NoShift;
    }

    /* Outport: '<Root>/VeVSMR_e_VirtShftTypeGrp' incorporates:
     *  Switch: '<S7>/Switch'
     */
    (void)Rte_Write_VeVSMR_e_VirtShftTypeGrp_Value(tmp);

    /* Outport: '<Root>/VeVSMR_n_VirtEngSpd' incorporates:
     *  Constant: '<S7>/Constant'
     */
    (void)Rte_Write_VeVSMR_n_VirtEngSpd_Value(0.0F);

    /* Outport: '<Root>/VeVSMR_M_VirtEngTorq' incorporates:
     *  Constant: '<S7>/Constant1'
     */
    (void)Rte_Write_VeVSMR_M_VirtEngTorq_Value(0.0F);

    /* Outport: '<Root>/VeVSMR_M_VirtShftDltaToReq' incorporates:
     *  Constant: '<S7>/Constant2'
     */
    (void)Rte_Write_VeVSMR_M_VirtShftDltaToReq_Value(0.0F);

    /* Outport: '<Root>/VeVSMR_M_VirtShftDltaSumReq' incorporates:
     *  Constant: '<S7>/Constant3'
     */
    (void)Rte_Write_VeVSMR_M_VirtShftDltaSumReq_Value(0.0F);

    /* End of Outputs for SubSystem: '<S5>/VSMC_Enabled' */
    /* End of Outputs for SubSystem: '<S1>/VSMC_A' */
#else

    /* Outputs for Atomic SubSystem: '<S5>/VSMC_Disabled' */
    /* Switch: '<S6>/Switch1' incorporates:
     *  Constant: '<S13>/Calib'
     *  Constant: '<S14>/Calib'
     *  Constant: '<S9>/Constant'
     */
    if (KeVSMR_b_VirtShftMdOvrdEna)
    {
        tmp_0 = KeVSMR_e_VirtShftMdOvrdVal;
    }
    else
    {
        tmp_0 = CeVSMR_e_VS_Enabled;
    }

    /* Outport: '<Root>/VeVSMR_e_VirtShftMd' incorporates:
     *  Switch: '<S6>/Switch1'
     */
    (void)Rte_Write_VeVSMR_e_VirtShftMd_Value(tmp_0);

    /* Switch: '<S6>/Switch' incorporates:
     *  Constant: '<S11>/Calib'
     *  Constant: '<S12>/Calib'
     *  Constant: '<S8>/Constant'
     */
    if (KeVSMR_b_VirtShftTypeGrpOvrdEna)
    {
        tmp = KeVSMR_e_VirtShftTypeGrpOvrdVal;
    }
    else
    {
        tmp = CeVSMR_e_VST_NoShift;
    }

    /* Outport: '<Root>/VeVSMR_e_VirtShftTypeGrp' incorporates:
     *  Switch: '<S6>/Switch'
     */
    (void)Rte_Write_VeVSMR_e_VirtShftTypeGrp_Value(tmp);

    /* Switch: '<S6>/Switch2' incorporates:
     *  Constant: '<S10>/Constant'
     *  Constant: '<S15>/Calib'
     *  Constant: '<S16>/Calib'
     */
    if (KeVSMR_b_VirtShftMdPopUpOvrdEna)
    {
        rtb_LogicalOperator3_0 = KeVSMR_e_VirtShftMdPopUpOvrdVal;
    }
    else
    {
        rtb_LogicalOperator3_0 = CeVSMR_e_MSG_NoIssue;
    }

    /* Outport: '<Root>/VeVSMR_e_VirtShftMdPopUp' incorporates:
     *  Switch: '<S6>/Switch2'
     */
    (void)Rte_Write_VeVSMR_e_VirtShftMdPopUp_Value(rtb_LogicalOperator3_0);

    /* Outport: '<Root>/VeVSMR_n_VirtEngSpd' incorporates:
     *  Constant: '<S6>/Constant'
     */
    (void)Rte_Write_VeVSMR_n_VirtEngSpd_Value(0.0F);

    /* Outport: '<Root>/VeVSMR_M_VirtEngTorq' incorporates:
     *  Constant: '<S6>/Constant1'
     */
    (void)Rte_Write_VeVSMR_M_VirtEngTorq_Value(0.0F);

    /* Outport: '<Root>/VeVSMR_M_VirtShftDltaToReq' incorporates:
     *  Constant: '<S6>/Constant2'
     */
    (void)Rte_Write_VeVSMR_M_VirtShftDltaToReq_Value(0.0F);

    /* Outport: '<Root>/VeVSMR_M_VirtShftDltaSumReq' incorporates:
     *  Constant: '<S6>/Constant3'
     */
    (void)Rte_Write_VeVSMR_M_VirtShftDltaSumReq_Value(0.0F);

    /* End of Outputs for SubSystem: '<S5>/VSMC_Disabled' */
#endif

    /* End of SignalConversion generated from: '<S1>/VeDMIR_b_eRuptRequest' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Output function */
FUNC(void, VSMR_CODE) VSMR_PUP(void)
{
    /* (no output/update code required) */
}

/* Output function */
FUNC(void, VSMR_CODE) VSMR_PwrOff(void)
{
    /* (no output/update code required) */
}

/* Output function */
FUNC(void, VSMR_CODE) VSMR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/VSMR_PwrOn'
     */
    /* Outport: '<Root>/VeVSMR_e_VirtShftMd' incorporates:
     *  Constant: '<S41>/Constant'
     *  SignalConversion generated from: '<S4>/VeVSMR_e_VirtShftMd'
     */
    (void)Rte_Write_VeVSMR_e_VirtShftMd_Value(CeVSMR_e_VS_Enabled);

    /* Outport: '<Root>/VeVSMR_e_VirtShftTypeGrp' incorporates:
     *  Constant: '<S39>/Constant'
     *  SignalConversion generated from: '<S4>/VeVSMR_e_VirtShftTypeGrp'
     */
    (void)Rte_Write_VeVSMR_e_VirtShftTypeGrp_Value(CeVSMR_e_VST_NoShift);

    /* Outport: '<Root>/VeVSMR_e_VirtShftMdPopUp' incorporates:
     *  Constant: '<S40>/Constant'
     *  SignalConversion generated from: '<S4>/VeVSMR_e_VirtShftMdPopUp'
     */
    (void)Rte_Write_VeVSMR_e_VirtShftMdPopUp_Value(CeVSMR_e_MSG_NoIssue);

    /* Outport: '<Root>/VeVSMR_n_VirtEngSpd' incorporates:
     *  Constant: '<S4>/Constant'
     *  SignalConversion generated from: '<S4>/VeVSMR_n_VirtEngSpd'
     */
    (void)Rte_Write_VeVSMR_n_VirtEngSpd_Value(0.0F);

    /* Outport: '<Root>/VeVSMR_M_VirtEngTorq' incorporates:
     *  Constant: '<S4>/Constant1'
     *  SignalConversion generated from: '<S4>/VeVSMR_M_VirtEngTorq'
     */
    (void)Rte_Write_VeVSMR_M_VirtEngTorq_Value(0.0F);

    /* Outport: '<Root>/VeVSMR_M_VirtShftDltaToReq' incorporates:
     *  Constant: '<S4>/Constant2'
     *  SignalConversion generated from: '<S4>/VeVSMR_M_VirtShftDltaToReq'
     */
    (void)Rte_Write_VeVSMR_M_VirtShftDltaToReq_Value(0.0F);

    /* Outport: '<Root>/VeVSMR_M_VirtShftDltaSumReq' incorporates:
     *  Constant: '<S4>/Constant3'
     *  SignalConversion generated from: '<S4>/VeVSMR_M_VirtShftDltaSumReq'
     */
    (void)Rte_Write_VeVSMR_M_VirtShftDltaSumReq_Value(0.0F);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, VSMR_CODE) VSMR_ac_Init(void)
{
    /* SystemInitialize for Outport: '<Root>/VeVSMR_e_VirtShftMd' incorporates:
     *  Merge: '<Root>/Merge_1'
     */
    (void)Rte_Write_VeVSMR_e_VirtShftMd_Value(CeVSMR_e_VS_Enabled);

    /* SystemInitialize for Outport: '<Root>/VeVSMR_e_VirtShftTypeGrp' incorporates:
     *  Merge: '<Root>/Merge_2'
     */
    (void)Rte_Write_VeVSMR_e_VirtShftTypeGrp_Value(CeVSMR_e_VST_NoShift);

    /* SystemInitialize for Outport: '<Root>/VeVSMR_e_VirtShftMdPopUp' incorporates:
     *  Merge: '<Root>/Merge_3'
     */
    (void)Rte_Write_VeVSMR_e_VirtShftMdPopUp_Value(CeVSMR_e_MSG_NoIssue);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
