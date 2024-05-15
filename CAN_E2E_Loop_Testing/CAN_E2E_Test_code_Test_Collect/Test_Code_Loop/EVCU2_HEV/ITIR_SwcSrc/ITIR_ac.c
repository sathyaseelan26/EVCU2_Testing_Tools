/*
 * File: ITIR_ac.c
 *
 * Code generated for Simulink model 'ITIR_ac'.
 *
 * Model version                  : 1.82
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 14:25:35 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ITIR_ac.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_ITIR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(float32, ITIR_VAR_INIT) KeITIR_Cf_ConvertToLitres =
    0.000277777785F;                   /* Referenced by:
                                        * '<S63>/Calib'
                                        * '<S72>/Calib'
                                        */
static volatile CONST(boolean, ITIR_VAR_INIT) KeITIR_b_EnblEnergyTracking = 1;/* Referenced by: '<S16>/Calib' */

#define STOP_SEC_CALIB_UNSPECIFIED_ITIR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ITIR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(uint32, ITIR_VAR_INIT) AeITIR_Cnt_FuelConsChrgDep_Lifetime;/* '<Root>/DSM_20' */
static VAR(uint32, ITIR_VAR_INIT) AeITIR_Cnt_FuelConsChrgDep_Lifetime_Init;/* '<S7>/Data Store Read2' */
static VAR(uint32, ITIR_VAR_INIT) AeITIR_Cnt_FuelConsChrgIncrease_Lifetime;/* '<Root>/DSM_8' */
static VAR(uint32, ITIR_VAR_INIT) AeITIR_Cnt_FuelConsChrgIncrease_Lifetime_Init;/* '<S7>/Data Store Read3' */
static VAR(uint32, ITIR_VAR_INIT) AeITIR_Cnt_FuelEngIgnCycl_Lifetime;/* '<Root>/DSM_28' */
static VAR(uint32, ITIR_VAR_INIT) AeITIR_Cnt_IgnCycl_Lifetime;/* '<Root>/DSM_29' */
static VAR(float32, ITIR_VAR_INIT) AeITIR_E_GrdEnrgyChrgDepEngOff_Lifetime;/* '<Root>/DSM_10' */
static VAR(float32, ITIR_VAR_INIT) AeITIR_E_GrdEnrgyChrgDepEngOn_Lifetime;/* '<Root>/DSM_13' */
static VAR(float32, ITIR_VAR_INIT) AeITIR_E_GrdEnrgyIntoBatt_Lifetime;/* '<Root>/DSM_12' */
static VAR(float32, ITIR_VAR_INIT) AeITIR_l_DistTravelChrgDepEngOff_Lifetime;/* '<Root>/DSM_22' */
static VAR(float32, ITIR_VAR_INIT) AeITIR_l_DistTravelChrgDepEngOn_Lifetime;/* '<Root>/DSM_27' */
static VAR(float32, ITIR_VAR_INIT) AeITIR_l_DistTrvlChrgIncrease_Lifetime;/* '<Root>/DSM_6' */
static VAR(uint32, ITIR_VAR_INIT) VeITIR_Cnt_FuelConsChrgDep_Recent_Init;/* '<S7>/Data Store Read' */
static VAR(uint32, ITIR_VAR_INIT) VeITIR_Cnt_FuelConsChrgIncrease_Recent_Init;/* '<S7>/Data Store Read4' */
static VAR(boolean, ITIR_VAR_INIT) VeITIR_b_ResetRequest_Routine130B;/* '<Root>/DSM_18' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ITIR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_ITIR
#include "MemMap.h"

CONST(ConstB_ITIR_ac_T, ITIR_VAR_INIT) ITIR_ac_ConstB =
{
    CePLTR_e_NoReset                   /* '<S8>/Const14' */
};

#define STOP_SEC_CONST_UNSPECIFIED_ITIR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ITIR
#include "MemMap.h"

VAR(B_ITIR_ac_T, ITIR_VAR_INIT) ITIR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ITIR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ITIR
#include "MemMap.h"

VAR(DW_ITIR_ac_T, ITIR_VAR_INIT) ITIR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ITIR
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, ITIR_CODE) ITIR_SlowTEF(void) /* Explicit Task: SlowTEF */
{
    sint32 rtb_Switch2;
    float32 rtb_Switch;
    float32 rtb_Switch2_b;
    float32 rtb_TmpSignalConversionAtFuelConsumption;
    float32 rtb_TmpSignalConversionAtVePLTR_l_Odomet;
    uint32 rtb_OR2_a_0;
    TeBACR_e_HEVCharge_State tmpRead;
    TeESSR_e_EngStartStopSt tmpRead_0;
    TeITIR_e_HCPVtdFreeze rtb_VeITIR_e_HCPVTDFreeze_out;
    TeOBCR_e_ChargingSystemSts tmpRead_2;
    TePLTR_e_ECMVtdFreeze tmpRead_4;
    boolean rtb_AND_bj;
    boolean rtb_Comparison3;
    boolean rtb_Logical2;
    boolean rtb_Logical2_k;
    boolean rtb_Logical3;
    boolean rtb_Logical30;
    boolean rtb_Logical9;
    boolean rtb_OR1_gb;
    boolean rtb_TmpSignalConversionAtVeITII_b_ResetF;
    boolean tmpRead_1;
    boolean tmpRead_3;

    /* Inport: '<Root>/VePLTR_e_ECMVtdFreeze' */
    (void)Rte_Read_VePLTR_e_ECMVtdFreeze_Value(&tmpRead_4);

    /* Inport: '<Root>/VeHVTR_b_HV_BatVoltFA' */
    (void)Rte_Read_VeHVTR_b_HV_BatVoltFA_Value(&rtb_Logical9);

    /* Inport: '<Root>/VeENGR_b_FuelConsFA' */
    (void)Rte_Read_VeENGR_b_FuelConsFA_Value(&tmpRead_3);

    /* Inport: '<Root>/VeHVTR_b_HV_BatCurrFA' */
    (void)Rte_Read_VeHVTR_b_HV_BatCurrFA_Value(&rtb_Logical2_k);

    /* Inport: '<Root>/VeHVTR_b_HV_VoltFA_Arb2' */
    (void)Rte_Read_VeHVTR_b_HV_VoltFA_Arb2_Value(&rtb_Logical30);

    /* Inport: '<Root>/VeHVTR_P_HV_BatPwr_Arb2' */
    (void)Rte_Read_VeHVTR_P_HV_BatPwr_Arb2_Value(&rtb_Switch2_b);

    /* Inport: '<Root>/VeOBCR_e_ChargingSystemSts' */
    (void)Rte_Read_VeOBCR_e_ChargingSystemSts_Value(&tmpRead_2);

    /* Inport: '<Root>/VeHPMR_b_PropSysActv' */
    (void)Rte_Read_VeHPMR_b_PropSysActv_Value(&tmpRead_1);

    /* Inport: '<Root>/VeESSR_e_EngStartStopSt' */
    (void)Rte_Read_VeESSR_e_EngStartStopSt_Value(&tmpRead_0);

    /* Inport: '<Root>/VeBACR_e_ChargeSustn' */
    (void)Rte_Read_VeBACR_e_ChargeSustn_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/SlowTEF' incorporates:
     *  SubSystem: '<Root>/ITIR_SlowTEF'
     */
    /* SignalConversion generated from: '<S3>/VePLTR_l_Odometer_Km_read' incorporates:
     *  Inport: '<Root>/VePLTR_kl_Odometer_Km'
     */
    (void)Rte_Read_VePLTR_kl_Odometer_Km_Value
        (&rtb_TmpSignalConversionAtVePLTR_l_Odomet);

    /* SignalConversion generated from: '<S3>/FuelConsumption_1s_Read' incorporates:
     *  Inport: '<Root>/VePLTR_dVh_FuelConsumption_avrg'
     */
    (void)Rte_Read_VePLTR_dVh_FuelConsumption_avrg_Value
        (&rtb_TmpSignalConversionAtFuelConsumption);

    /* SignalConversion generated from: '<S3>/VeITII_b_ResetFlagLifetime_Read' incorporates:
     *  Inport: '<Root>/VePLTR_b_ResetFlagLifetime_EEerror'
     */
    (void)Rte_Read_VePLTR_b_ResetFlagLifetime_EEerror_Value
        (&rtb_TmpSignalConversionAtVeITII_b_ResetF);

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/ITIC_Control_1000ms'
     */
    /* S-Function (fcgen): '<S11>/FunctionCallGenerator1' incorporates:
     *  SubSystem: '<S11>/TrackingInfo'
     */
    /* If: '<S15>/If1' incorporates:
     *  Constant: '<S16>/Calib'
     *  Inport: '<Root>/VePLTR_b_ClrTrackingInfo'
     *  Inport: '<Root>/VePLTR_b_Odometer_KmFA'
     *  Inport: '<Root>/VePLTR_b_ResetFlagRecent_EEerror'
     */
    if (KeITIR_b_EnblEnergyTracking)
    {
        (void)Rte_Read_VePLTR_b_ResetFlagRecent_EEerror_Value(&rtb_Logical2);
        (void)Rte_Read_VePLTR_b_ClrTrackingInfo_Value(&rtb_Logical3);
        (void)Rte_Read_VePLTR_b_Odometer_KmFA_Value(&rtb_AND_bj);

        /* Outputs for IfAction SubSystem: '<S15>/TrackingInfoSubsystem' incorporates:
         *  ActionPort: '<S17>/Action Port'
         */
        /* RelationalOperator: '<S58>/Comparison3' incorporates:
         *  Constant: '<S58>/Constant'
         *  DataStoreRead: '<S58>/Data Store Read4'
         *  Inport: '<Root>/VePLTR_b_ClrTrackingInfo'
         *  Inport: '<Root>/VePLTR_b_Odometer_KmFA'
         *  Inport: '<Root>/VePLTR_b_ResetFlagRecent_EEerror'
         */
        rtb_Comparison3 = (ITIR_ac_DW.NeITIR_t_TimeToResetRecentVar >= 180000.0F);

        /* Logic: '<S58>/Logical2' */
        rtb_Logical2 = (((rtb_Comparison3 || rtb_Logical3) || rtb_Logical2) ||
                        rtb_TmpSignalConversionAtVeITII_b_ResetF);

        /* Logic: '<S58>/Logical3' incorporates:
         *  Constant: '<S85>/Constant'
         *  Constant: '<S86>/Constant'
         *  DataStoreRead: '<S58>/Data Store Read2'
         *  RelationalOperator: '<S58>/Comparison2'
         *  RelationalOperator: '<S58>/Comparison4'
         */
        rtb_Logical3 = (((rtb_Logical2 || (CePLTR_e_RecentReset == ((uint32)
                            tmpRead_4))) || (((uint32)tmpRead_4) ==
                          CePLTR_e_LifetimeRecentReset)) ||
                        (VeITIR_b_ResetRequest_Routine130B));

        /* Outputs for Atomic SubSystem: '<S54>/EdgeRising2' */
        /* Logic: '<S81>/OR1' incorporates:
         *  UnitDelay: '<S81>/Unit Delay'
         */
        rtb_OR1_gb = !ITIR_ac_DW.UnitDelay_DSTATE_o;

        /* Update for UnitDelay: '<S81>/Unit Delay' incorporates:
         *  Constant: '<S54>/TRUE Constant'
         */
        ITIR_ac_DW.UnitDelay_DSTATE_o = true;

        /* Switch: '<S54>/Switch2' incorporates:
         *  Logic: '<S81>/AND'
         *  UnitDelay: '<S54>/Unit Delay1'
         */
        if (rtb_OR1_gb)
        {
            ITIR_ac_DW.UnitDelay1_DSTATE =
                rtb_TmpSignalConversionAtVePLTR_l_Odomet;
        }

        /* End of Switch: '<S54>/Switch2' */
        /* End of Outputs for SubSystem: '<S54>/EdgeRising2' */

        /* Sum: '<S54>/Sum2' incorporates:
         *  UnitDelay: '<S54>/Unit Delay1'
         */
        ITIR_ac_DW.UnitDelay1_DSTATE = rtb_TmpSignalConversionAtVePLTR_l_Odomet
            - ITIR_ac_DW.UnitDelay1_DSTATE;

        /* Outputs for Function Call SubSystem: '<S3>/ITII_ProcessInputs' */
        /* Logic: '<S17>/Logical9' incorporates:
         *  Inport: '<S12>/VeENGR_b_FuelConsumptionFA'
         *  Inport: '<S12>/VeHVTR_b_HV_BatCurrFA'
         *  Inport: '<S12>/VeHVTR_b_HV_BatVoltFA'
         *  Inport: '<S12>/VeHVTR_b_HV_VoltFA_Arb2'
         *  Logic: '<S17>/Logical18'
         */
        rtb_Logical9 = (((tmpRead_3 || rtb_AND_bj) || (rtb_Logical30 &&
                          rtb_Logical9)) || rtb_Logical2_k);

        /* End of Outputs for SubSystem: '<S3>/ITII_ProcessInputs' */

        /* Logic: '<S17>/Logical5' incorporates:
         *  Constant: '<S35>/Constant'
         *  Logic: '<S17>/Logical1'
         *  Logic: '<S17>/Logical10'
         *  Logic: '<S17>/Logical11'
         *  Logic: '<S17>/Logical12'
         *  Logic: '<S17>/Logical14'
         *  Logic: '<S17>/Logical16'
         *  Logic: '<S17>/Logical17'
         *  Logic: '<S17>/Logical23'
         *  Logic: '<S17>/Logical26'
         *  Logic: '<S17>/Logical27'
         *  Logic: '<S17>/Logical68'
         *  Logic: '<S17>/Logical7'
         *  RelationalOperator: '<S17>/Comparison2'
         */
        tmpRead_3 = ((!rtb_Logical9) && (((uint32)tmpRead_4) != CePLTR_e_Freeze));

        /* Switch: '<S23>/Switch' incorporates:
         *  Constant: '<S27>/Constant'
         *  Constant: '<S38>/Constant'
         *  Logic: '<S17>/Logical'
         *  Logic: '<S17>/Logical5'
         *  RelationalOperator: '<S17>/Comparison1'
         *  RelationalOperator: '<S17>/Comparison4'
         */
        if (((((uint32)tmpRead_0) == CeESSR_e_EngOff) && (((uint32)tmpRead) ==
                CeBACR_e_ChargeDepleting)) && tmpRead_3)
        {
            /* Switch: '<S23>/Switch' incorporates:
             *  UnitDelay: '<S54>/Unit Delay1'
             */
            rtb_Switch = ITIR_ac_DW.UnitDelay1_DSTATE;
        }
        else
        {
            /* Switch: '<S23>/Switch' incorporates:
             *  Constant: '<S23>/Constant Value1'
             */
            rtb_Switch = 0.0F;
        }

        /* End of Switch: '<S23>/Switch' */

        /* Switch: '<S23>/Switch1' incorporates:
         *  Constant: '<S23>/Constant Value'
         *  DataStoreRead: '<S23>/Data Store Read1'
         *  DataStoreWrite: '<S23>/Data Store Write1'
         *  Sum: '<S23>/Sum3'
         */
        if (rtb_Logical3)
        {
            ITIR_ac_DW.NeITIR_l_DistTravelChrgDepEngOff_Recent = 0.0F;
        }
        else
        {
            ITIR_ac_DW.NeITIR_l_DistTravelChrgDepEngOff_Recent += rtb_Switch;
        }

        /* End of Switch: '<S23>/Switch1' */

        /* Logic: '<S57>/Logical2' incorporates:
         *  Constant: '<S82>/Constant'
         *  DataStoreRead: '<S57>/Data Store Read1'
         *  RelationalOperator: '<S57>/Comparison4'
         */
        rtb_Logical2_k = (((((uint32)tmpRead_4) == CePLTR_e_LifetimeRecentReset)
                           || rtb_TmpSignalConversionAtVeITII_b_ResetF) ||
                          (VeITIR_b_ResetRequest_Routine130B));

        /* Switch: '<S23>/Switch2' incorporates:
         *  Constant: '<S23>/Constant Value2'
         *  DataStoreRead: '<S23>/Data Store Read2'
         *  DataStoreWrite: '<S23>/Data Store Write2'
         *  Sum: '<S23>/Sum1'
         */
        if (rtb_Logical2_k)
        {
            AeITIR_l_DistTravelChrgDepEngOff_Lifetime = 0.0F;
        }
        else
        {
            AeITIR_l_DistTravelChrgDepEngOff_Lifetime = rtb_Switch +
                AeITIR_l_DistTravelChrgDepEngOff_Lifetime;
        }

        /* End of Switch: '<S23>/Switch2' */

        /* Switch: '<S24>/Switch2' incorporates:
         *  Constant: '<S30>/Constant'
         *  Constant: '<S31>/Constant'
         *  Logic: '<S17>/Logical6'
         *  RelationalOperator: '<S17>/Comparison10'
         *  RelationalOperator: '<S17>/Comparison12'
         */
        if (((((uint32)tmpRead_0) == CeESSR_e_EngRunning) && (((uint32)tmpRead) ==
              CeBACR_e_ChargeDepleting)) && tmpRead_3)
        {
            /* Switch: '<S24>/Switch2' incorporates:
             *  UnitDelay: '<S54>/Unit Delay1'
             */
            rtb_Switch = ITIR_ac_DW.UnitDelay1_DSTATE;
        }
        else
        {
            /* Switch: '<S24>/Switch2' incorporates:
             *  Constant: '<S24>/Constant Value2'
             */
            rtb_Switch = 0.0F;
        }

        /* End of Switch: '<S24>/Switch2' */

        /* Switch: '<S24>/Switch1' incorporates:
         *  Constant: '<S24>/Constant Value'
         *  DataStoreRead: '<S24>/Data Store Read1'
         *  DataStoreWrite: '<S24>/Data Store Write1'
         *  Sum: '<S24>/Sum1'
         */
        if (rtb_Logical3)
        {
            ITIR_ac_DW.NeITIR_l_DistTravelChrgDepEngOn_Recent = 0.0F;
        }
        else
        {
            ITIR_ac_DW.NeITIR_l_DistTravelChrgDepEngOn_Recent += rtb_Switch;
        }

        /* End of Switch: '<S24>/Switch1' */

        /* Switch: '<S24>/Switch3' incorporates:
         *  Constant: '<S24>/Constant Value1'
         *  DataStoreRead: '<S24>/Data Store Read2'
         *  DataStoreWrite: '<S24>/Data Store Write2'
         *  Sum: '<S24>/Sum2'
         */
        if (rtb_Logical2_k)
        {
            AeITIR_l_DistTravelChrgDepEngOn_Lifetime = 0.0F;
        }
        else
        {
            AeITIR_l_DistTravelChrgDepEngOn_Lifetime = rtb_Switch +
                AeITIR_l_DistTravelChrgDepEngOn_Lifetime;
        }

        /* End of Switch: '<S24>/Switch3' */

        /* Switch: '<S25>/Switch2' incorporates:
         *  Constant: '<S37>/Constant'
         *  Logic: '<S17>/Logical1'
         *  Logic: '<S17>/Logical8'
         *  RelationalOperator: '<S17>/Comparison5'
         */
        if ((((uint32)tmpRead) != CeBACR_e_ChargeIncreasing) || (!tmpRead_3))
        {
            /* Switch: '<S25>/Switch2' incorporates:
             *  Constant: '<S25>/Constant Value2'
             */
            ITIR_ac_DW.UnitDelay1_DSTATE = 0.0F;
        }

        /* End of Switch: '<S25>/Switch2' */

        /* Switch: '<S25>/Switch1' incorporates:
         *  Constant: '<S25>/Constant Value'
         *  DataStoreRead: '<S25>/Data Store Read1'
         *  DataStoreWrite: '<S25>/Data Store Write1'
         *  Sum: '<S25>/Sum1'
         */
        if (rtb_Logical3)
        {
            ITIR_ac_DW.NeITIR_l_DistTravelChrgIncrease_Recent = 0.0F;
        }
        else
        {
            ITIR_ac_DW.NeITIR_l_DistTravelChrgIncrease_Recent +=
                ITIR_ac_DW.UnitDelay1_DSTATE;
        }

        /* End of Switch: '<S25>/Switch1' */

        /* Switch: '<S25>/Switch4' incorporates:
         *  Constant: '<S25>/Constant Value1'
         *  DataStoreRead: '<S25>/Data Store Read2'
         *  DataStoreWrite: '<S25>/Data Store Write2'
         *  Sum: '<S25>/Sum2'
         */
        if (rtb_Logical2_k)
        {
            AeITIR_l_DistTrvlChrgIncrease_Lifetime = 0.0F;
        }
        else
        {
            AeITIR_l_DistTrvlChrgIncrease_Lifetime =
                ITIR_ac_DW.UnitDelay1_DSTATE +
                AeITIR_l_DistTrvlChrgIncrease_Lifetime;
        }

        /* End of Switch: '<S25>/Switch4' */

        /* Switch: '<S45>/Switch2' incorporates:
         *  Constant: '<S39>/Constant'
         *  Constant: '<S45>/Constant Value1'
         *  Constant: '<S63>/Calib'
         *  Logic: '<S17>/Logical13'
         *  Product: '<S45>/Product'
         *  RelationalOperator: '<S17>/Comparison6'
         *  UnitDelay: '<S54>/Unit Delay1'
         */
        if ((((uint32)tmpRead) == CeBACR_e_ChargeDepleting) && tmpRead_3)
        {
            ITIR_ac_DW.UnitDelay1_DSTATE = KeITIR_Cf_ConvertToLitres *
                rtb_TmpSignalConversionAtFuelConsumption;
        }
        else
        {
            ITIR_ac_DW.UnitDelay1_DSTATE = 0.0F;
        }

        /* End of Switch: '<S45>/Switch2' */

        /* Product: '<S45>/Product1' incorporates:
         *  Constant: '<S45>/Constant Value4'
         *  UnitDelay: '<S54>/Unit Delay1'
         */
        rtb_Switch = 10000.0F * ITIR_ac_DW.UnitDelay1_DSTATE;

        /* Switch: '<S64>/Switch4' incorporates:
         *  Constant: '<S64>/Constant Value1'
         *  Sum: '<S64>/Sum7'
         *  UnitDelay: '<S64>/Unit Delay2'
         */
        if (rtb_Logical2_k)
        {
            ITIR_ac_DW.UnitDelay2_DSTATE = 0.0F;
        }
        else
        {
            ITIR_ac_DW.UnitDelay2_DSTATE += rtb_Switch;
        }

        /* End of Switch: '<S64>/Switch4' */

        /* Sum: '<S66>/Sum4' incorporates:
         *  Constant: '<S66>/Constant Value5'
         *  UnitDelay: '<S54>/Unit Delay1'
         *  UnitDelay: '<S64>/Unit Delay2'
         */
        ITIR_ac_DW.UnitDelay1_DSTATE = ITIR_ac_DW.UnitDelay2_DSTATE + 0.5F;

        /* Outputs for Atomic SubSystem: '<S61>/Signal Latch On' */
        /* Logic: '<S68>/OR2' incorporates:
         *  UnitDelay: '<S68>/Unit Delay'
         */
        ITIR_ac_DW.UnitDelay_DSTATE_ij = (rtb_Logical2_k ||
            (ITIR_ac_DW.UnitDelay_DSTATE_ij));

        /* End of Outputs for SubSystem: '<S61>/Signal Latch On' */

        /* Switch: '<S61>/Switch1' incorporates:
         *  Constant: '<S61>/Constant Value6'
         *  SignalConversion generated from: '<S2>/FuelConsChrgDep_Lifetime_Init_write'
         *  SignalConversion generated from: '<S3>/FuelConsChrgDep_Lifetime_Init_Read'
         */
        if (ITIR_ac_DW.UnitDelay_DSTATE_ij)
        {
            rtb_OR2_a_0 = 0U;
        }
        else
        {
            rtb_OR2_a_0 =
                Rte_IrvRead_ITIR_SlowTEF_FuelConsChrgDep_Lifetime_Init_write_IRV
                ();
        }

        /* End of Switch: '<S61>/Switch1' */

        /* Sum: '<S45>/Sum' incorporates:
         *  DataStoreWrite: '<S45>/Data Store Write'
         *  DataTypeConversion: '<S66>/FloatToFix'
         *  UnitDelay: '<S54>/Unit Delay1'
         */
        AeITIR_Cnt_FuelConsChrgDep_Lifetime = ((uint32)
            ITIR_ac_DW.UnitDelay1_DSTATE) + rtb_OR2_a_0;

        /* Switch: '<S65>/Switch4' incorporates:
         *  Constant: '<S65>/Constant Value1'
         *  Sum: '<S65>/Sum7'
         *  UnitDelay: '<S65>/Unit Delay2'
         */
        if (rtb_Logical3)
        {
            ITIR_ac_DW.UnitDelay2_DSTATE_j = 0.0F;
        }
        else
        {
            ITIR_ac_DW.UnitDelay2_DSTATE_j += rtb_Switch;
        }

        /* End of Switch: '<S65>/Switch4' */

        /* Sum: '<S67>/Sum4' incorporates:
         *  Constant: '<S67>/Constant Value5'
         *  UnitDelay: '<S54>/Unit Delay1'
         *  UnitDelay: '<S65>/Unit Delay2'
         */
        ITIR_ac_DW.UnitDelay1_DSTATE = ITIR_ac_DW.UnitDelay2_DSTATE_j + 0.5F;

        /* Outputs for Atomic SubSystem: '<S62>/Signal Latch On' */
        /* Logic: '<S69>/OR2' incorporates:
         *  UnitDelay: '<S69>/Unit Delay'
         */
        ITIR_ac_DW.UnitDelay_DSTATE_l = (rtb_Logical3 ||
            (ITIR_ac_DW.UnitDelay_DSTATE_l));

        /* End of Outputs for SubSystem: '<S62>/Signal Latch On' */

        /* Switch: '<S62>/Switch1' incorporates:
         *  Constant: '<S62>/Constant Value6'
         *  SignalConversion generated from: '<S2>/FuelConsChrgDep_Recent_Init_write'
         *  SignalConversion generated from: '<S3>/FuelConsChrgDep_Recent_Init_Read'
         */
        if (ITIR_ac_DW.UnitDelay_DSTATE_l)
        {
            rtb_OR2_a_0 = 0U;
        }
        else
        {
            rtb_OR2_a_0 =
                Rte_IrvRead_ITIR_SlowTEF_FuelConsChrgDep_Recent_Init_write_IRV();
        }

        /* End of Switch: '<S62>/Switch1' */

        /* Sum: '<S45>/Sum4' incorporates:
         *  DataStoreWrite: '<S45>/Data Store Write1'
         *  DataTypeConversion: '<S67>/FloatToFix'
         *  UnitDelay: '<S54>/Unit Delay1'
         */
        ITIR_ac_DW.NeITIR_Cnt_FuelConsChrgDep_Recent = ((uint32)
            ITIR_ac_DW.UnitDelay1_DSTATE) + rtb_OR2_a_0;

        /* Switch: '<S46>/Switch5' incorporates:
         *  Constant: '<S40>/Constant'
         *  Constant: '<S46>/Constant Value11'
         *  Constant: '<S72>/Calib'
         *  Logic: '<S17>/Logical15'
         *  Product: '<S46>/Product'
         *  RelationalOperator: '<S17>/Comparison7'
         *  UnitDelay: '<S54>/Unit Delay1'
         */
        if ((((uint32)tmpRead) == CeBACR_e_ChargeIncreasing) && tmpRead_3)
        {
            ITIR_ac_DW.UnitDelay1_DSTATE = KeITIR_Cf_ConvertToLitres *
                rtb_TmpSignalConversionAtFuelConsumption;
        }
        else
        {
            ITIR_ac_DW.UnitDelay1_DSTATE = 0.0F;
        }

        /* End of Switch: '<S46>/Switch5' */

        /* Product: '<S46>/Product1' incorporates:
         *  Constant: '<S46>/Constant Value4'
         *  UnitDelay: '<S54>/Unit Delay1'
         */
        rtb_Switch = 10000.0F * ITIR_ac_DW.UnitDelay1_DSTATE;

        /* Switch: '<S73>/Switch4' incorporates:
         *  Constant: '<S73>/Constant Value1'
         *  Sum: '<S73>/Sum7'
         *  UnitDelay: '<S73>/Unit Delay2'
         */
        if (rtb_Logical2_k)
        {
            ITIR_ac_DW.UnitDelay2_DSTATE_c = 0.0F;
        }
        else
        {
            ITIR_ac_DW.UnitDelay2_DSTATE_c += rtb_Switch;
        }

        /* End of Switch: '<S73>/Switch4' */

        /* Sum: '<S75>/Sum4' incorporates:
         *  Constant: '<S75>/Constant Value5'
         *  UnitDelay: '<S54>/Unit Delay1'
         *  UnitDelay: '<S73>/Unit Delay2'
         */
        ITIR_ac_DW.UnitDelay1_DSTATE = ITIR_ac_DW.UnitDelay2_DSTATE_c + 0.5F;

        /* Outputs for Atomic SubSystem: '<S70>/Signal Latch On' */
        /* Logic: '<S77>/OR2' incorporates:
         *  UnitDelay: '<S77>/Unit Delay'
         */
        ITIR_ac_DW.UnitDelay_DSTATE_bg = (rtb_Logical2_k ||
            (ITIR_ac_DW.UnitDelay_DSTATE_bg));

        /* End of Outputs for SubSystem: '<S70>/Signal Latch On' */

        /* Switch: '<S70>/Switch1' incorporates:
         *  Constant: '<S70>/Constant Value6'
         *  SignalConversion generated from: '<S2>/FuelConsChrgIncrease_Lifetime_Init_write'
         *  SignalConversion generated from: '<S3>/FuelConsChrgIncrease_Lifetime_Init_Read'
         */
        if (ITIR_ac_DW.UnitDelay_DSTATE_bg)
        {
            rtb_OR2_a_0 = 0U;
        }
        else
        {
            rtb_OR2_a_0 =
                Rte_IrvRead_ITIR_SlowTEF_FuelConsChrgIncrease_Lifetime_Init_write_IRV
                ();
        }

        /* End of Switch: '<S70>/Switch1' */

        /* Sum: '<S46>/Sum1' incorporates:
         *  DataStoreWrite: '<S46>/Data Store Write'
         *  DataTypeConversion: '<S75>/FloatToFix'
         *  UnitDelay: '<S54>/Unit Delay1'
         */
        AeITIR_Cnt_FuelConsChrgIncrease_Lifetime = ((uint32)
            ITIR_ac_DW.UnitDelay1_DSTATE) + rtb_OR2_a_0;

        /* Switch: '<S74>/Switch4' incorporates:
         *  Constant: '<S74>/Constant Value1'
         *  Sum: '<S74>/Sum7'
         *  UnitDelay: '<S74>/Unit Delay2'
         */
        if (rtb_Logical3)
        {
            ITIR_ac_DW.UnitDelay2_DSTATE_n = 0.0F;
        }
        else
        {
            ITIR_ac_DW.UnitDelay2_DSTATE_n += rtb_Switch;
        }

        /* End of Switch: '<S74>/Switch4' */

        /* Sum: '<S76>/Sum4' incorporates:
         *  Constant: '<S76>/Constant Value5'
         *  UnitDelay: '<S54>/Unit Delay1'
         *  UnitDelay: '<S74>/Unit Delay2'
         */
        ITIR_ac_DW.UnitDelay1_DSTATE = ITIR_ac_DW.UnitDelay2_DSTATE_n + 0.5F;

        /* Outputs for Atomic SubSystem: '<S71>/Signal Latch On' */
        /* Logic: '<S78>/OR2' incorporates:
         *  UnitDelay: '<S78>/Unit Delay'
         */
        ITIR_ac_DW.UnitDelay_DSTATE_o0 = (rtb_Logical3 ||
            (ITIR_ac_DW.UnitDelay_DSTATE_o0));

        /* End of Outputs for SubSystem: '<S71>/Signal Latch On' */

        /* Switch: '<S71>/Switch1' incorporates:
         *  Constant: '<S71>/Constant Value6'
         *  SignalConversion generated from: '<S2>/FuelConsChrgIncrease_Recent_Init_write'
         *  SignalConversion generated from: '<S3>/FuelConsChrgIncrease_Recent_Init_Read'
         */
        if (ITIR_ac_DW.UnitDelay_DSTATE_o0)
        {
            rtb_OR2_a_0 = 0U;
        }
        else
        {
            rtb_OR2_a_0 =
                Rte_IrvRead_ITIR_SlowTEF_FuelConsChrgIncrease_Recent_Init_write_IRV
                ();
        }

        /* End of Switch: '<S71>/Switch1' */

        /* Sum: '<S46>/Sum2' incorporates:
         *  DataStoreWrite: '<S46>/Data Store Write1'
         *  DataTypeConversion: '<S76>/FloatToFix'
         *  UnitDelay: '<S54>/Unit Delay1'
         */
        ITIR_ac_DW.NeITIR_Cnt_FuelConsChrgIncrease_Recent = ((uint32)
            ITIR_ac_DW.UnitDelay1_DSTATE) + rtb_OR2_a_0;

        /* Outputs for Function Call SubSystem: '<S3>/ITII_ProcessInputs' */
        /* Logic: '<S17>/Logical30' incorporates:
         *  Constant: '<S17>/Constant Value5'
         *  Inport: '<S12>/VeHPMR_t_PropSysActv'
         *  RelationalOperator: '<S17>/Comparison15'
         */
        rtb_Logical30 = (tmpRead_1 && (rtb_TmpSignalConversionAtFuelConsumption >
                          0.0F));

        /* End of Outputs for SubSystem: '<S3>/ITII_ProcessInputs' */

        /* Outputs for Atomic SubSystem: '<S17>/Turn On Delay Sample4' */
        /* Outputs for Atomic SubSystem: '<S60>/EdgeRising' */
        /* Logic: '<S88>/AND' incorporates:
         *  Logic: '<S88>/OR1'
         *  UnitDelay: '<S88>/Unit Delay'
         */
        rtb_AND_bj = (rtb_Logical30 && (!ITIR_ac_DW.UnitDelay_DSTATE_hy));

        /* Update for UnitDelay: '<S88>/Unit Delay' */
        ITIR_ac_DW.UnitDelay_DSTATE_hy = rtb_Logical30;

        /* End of Outputs for SubSystem: '<S60>/EdgeRising' */

        /* Switch: '<S60>/Switch1' incorporates:
         *  Constant: '<S60>/Constant Value'
         *  Constant: '<S60>/Constant Value1'
         *  Logic: '<S60>/OR'
         *  Logic: '<S60>/OR1'
         *  MinMax: '<S60>/Minimum'
         *  Sum: '<S60>/Summation'
         *  UnitDelay: '<S60>/Unit Delay'
         */
        if ((!rtb_Logical30) || rtb_AND_bj)
        {
            ITIR_ac_DW.UnitDelay_DSTATE_n = 0U;
        }
        else if (2 < ((sint32)((uint16)(((uint32)ITIR_ac_DW.UnitDelay_DSTATE_n)
                    + 1U))))
        {
            /* MinMax: '<S60>/Minimum' */
            ITIR_ac_DW.UnitDelay_DSTATE_n = 2U;
        }
        else
        {
            /* MinMax: '<S60>/Minimum' incorporates:
             *  Constant: '<S60>/Constant Value'
             *  Sum: '<S60>/Summation'
             *  UnitDelay: '<S60>/Unit Delay'
             */
            ITIR_ac_DW.UnitDelay_DSTATE_n = (uint16)(((uint32)
                ITIR_ac_DW.UnitDelay_DSTATE_n) + 1U);
        }

        /* End of Switch: '<S60>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S17>/Signal Latch On With Reset2' */
        /* Outputs for Function Call SubSystem: '<S3>/ITII_ProcessInputs' */
        /* Logic: '<S55>/OR1' incorporates:
         *  Constant: '<S17>/Constant Value4'
         *  Inport: '<S12>/VeHPMR_t_PropSysActv'
         *  Logic: '<S17>/Logical29'
         *  Logic: '<S55>/OR'
         *  Logic: '<S60>/AND'
         *  RelationalOperator: '<S60>/Greater  Than'
         *  UnitDelay: '<S55>/Unit Delay'
         *  UnitDelay: '<S60>/Unit Delay'
         */
        ITIR_ac_DW.UnitDelay_DSTATE_b0 = (((rtb_Logical30 && (((sint32)
            ITIR_ac_DW.UnitDelay_DSTATE_n) >= 2)) && tmpRead_3) || (tmpRead_1 &&
            (ITIR_ac_DW.UnitDelay_DSTATE_b0)));

        /* End of Outputs for SubSystem: '<S3>/ITII_ProcessInputs' */
        /* End of Outputs for SubSystem: '<S17>/Signal Latch On With Reset2' */
        /* End of Outputs for SubSystem: '<S17>/Turn On Delay Sample4' */

        /* Outputs for Atomic SubSystem: '<S47>/EdgeRising2' */
        /* Logic: '<S79>/OR1' incorporates:
         *  UnitDelay: '<S79>/Unit Delay'
         */
        rtb_Logical30 = !ITIR_ac_DW.UnitDelay_DSTATE_i;

        /* Update for UnitDelay: '<S79>/Unit Delay' */
        ITIR_ac_DW.UnitDelay_DSTATE_i = ITIR_ac_DW.UnitDelay_DSTATE_b0;

        /* Switch: '<S47>/Switch2' incorporates:
         *  Logic: '<S79>/AND'
         */
        rtb_Switch2 = (sint32)(((ITIR_ac_DW.UnitDelay_DSTATE_b0) &&
                                rtb_Logical30) ? 1 : 0);

        /* End of Outputs for SubSystem: '<S47>/EdgeRising2' */

        /* Switch: '<S47>/Switch4' incorporates:
         *  Constant: '<S47>/Constant Value3'
         *  DataStoreRead: '<S47>/Data Store Read'
         *  DataStoreWrite: '<S47>/Data Store Write1'
         *  Sum: '<S47>/Sum'
         */
        if (rtb_Logical2_k)
        {
            AeITIR_Cnt_FuelEngIgnCycl_Lifetime = 0U;
        }
        else
        {
            AeITIR_Cnt_FuelEngIgnCycl_Lifetime = ((uint32)rtb_Switch2) +
                AeITIR_Cnt_FuelEngIgnCycl_Lifetime;
        }

        /* End of Switch: '<S47>/Switch4' */

        /* Switch: '<S47>/Switch3' incorporates:
         *  Constant: '<S47>/Constant Value2'
         *  DataStoreRead: '<S47>/Data Store Read1'
         *  DataStoreWrite: '<S47>/Data Store Write2'
         *  Sum: '<S47>/Sum2'
         */
        if (rtb_Logical3)
        {
            ITIR_ac_DW.NeITIR_Cnt_FuelEngIgnCycl_Recent = 0U;
        }
        else
        {
            ITIR_ac_DW.NeITIR_Cnt_FuelEngIgnCycl_Recent += (uint32)rtb_Switch2;
        }

        /* End of Switch: '<S47>/Switch3' */

        /* Switch: '<S48>/Switch2' incorporates:
         *  Constant: '<S41>/Constant'
         *  Constant: '<S42>/Constant'
         *  Logic: '<S17>/Logical2'
         *  RelationalOperator: '<S17>/Comparison8'
         *  RelationalOperator: '<S17>/Comparison9'
         */
        if ((tmpRead_3 && (((uint32)tmpRead_0) == CeESSR_e_EngOff)) && (((uint32)
                tmpRead_2) == CeOBCR_e_ChargingSts_Charging))
        {
            /* Outputs for Function Call SubSystem: '<S3>/ITII_ProcessInputs' */
            /* Switch: '<S48>/Switch2' incorporates:
             *  Abs: '<S48>/Abs'
             *  Constant: '<S48>/Constant'
             *  Inport: '<S12>/VeHVTR_P_HV_BatPwr_Arb2'
             *  Product: '<S48>/Product'
             */
            rtb_TmpSignalConversionAtFuelConsumption = fabsf(0.000277F *
                rtb_Switch2_b);

            /* End of Outputs for SubSystem: '<S3>/ITII_ProcessInputs' */
        }
        else
        {
            /* Switch: '<S48>/Switch2' incorporates:
             *  Constant: '<S48>/Constant Value1'
             */
            rtb_TmpSignalConversionAtFuelConsumption = 0.0F;
        }

        /* End of Switch: '<S48>/Switch2' */

        /* Switch: '<S48>/Switch1' incorporates:
         *  Constant: '<S48>/Constant Value'
         *  DataStoreRead: '<S48>/Data Store Read1'
         *  DataStoreWrite: '<S48>/Data Store Write1'
         *  Sum: '<S48>/Sum1'
         */
        if (rtb_Logical3)
        {
            ITIR_ac_DW.NeITIR_E_GrdEnrgyIntoBatt_Recent = 0.0F;
        }
        else
        {
            ITIR_ac_DW.NeITIR_E_GrdEnrgyIntoBatt_Recent +=
                rtb_TmpSignalConversionAtFuelConsumption;
        }

        /* End of Switch: '<S48>/Switch1' */

        /* Switch: '<S48>/Switch4' incorporates:
         *  Constant: '<S48>/Constant Value2'
         *  DataStoreRead: '<S48>/Data Store Read2'
         *  DataStoreWrite: '<S48>/Data Store Write2'
         *  Sum: '<S48>/Sum'
         */
        if (rtb_Logical2_k)
        {
            AeITIR_E_GrdEnrgyIntoBatt_Lifetime = 0.0F;
        }
        else
        {
            AeITIR_E_GrdEnrgyIntoBatt_Lifetime =
                rtb_TmpSignalConversionAtFuelConsumption +
                AeITIR_E_GrdEnrgyIntoBatt_Lifetime;
        }

        /* End of Switch: '<S48>/Switch4' */

        /* Outputs for Function Call SubSystem: '<S3>/ITII_ProcessInputs' */
        /* Switch: '<S49>/Switch2' incorporates:
         *  Constant: '<S20>/Constant'
         *  Constant: '<S28>/Constant'
         *  Constant: '<S43>/Constant'
         *  Inport: '<S12>/VeHVTR_P_HV_BatPwr_Arb2'
         *  Logic: '<S17>/Logical3'
         *  RelationalOperator: '<S17>/Comparison11'
         *  RelationalOperator: '<S17>/Comparison3'
         *  RelationalOperator: '<S20>/Compare'
         */
        if ((((((uint32)tmpRead_0) == CeESSR_e_EngOff) && (rtb_Switch2_b > 0.0F))
             && (((uint32)tmpRead) == CeBACR_e_ChargeDepleting)) && tmpRead_3)
        {
            /* Switch: '<S49>/Switch2' incorporates:
             *  Constant: '<S49>/Constant'
             *  Product: '<S49>/Product'
             */
            rtb_TmpSignalConversionAtFuelConsumption = 0.000277F * rtb_Switch2_b;
        }
        else
        {
            /* Switch: '<S49>/Switch2' incorporates:
             *  Constant: '<S49>/Constant Value1'
             */
            rtb_TmpSignalConversionAtFuelConsumption = 0.0F;
        }

        /* End of Switch: '<S49>/Switch2' */
        /* End of Outputs for SubSystem: '<S3>/ITII_ProcessInputs' */

        /* Switch: '<S49>/Switch3' incorporates:
         *  Constant: '<S49>/Constant Value2'
         *  DataStoreRead: '<S49>/Data Store Read1'
         *  Sum: '<S49>/Sum2'
         *  UnitDelay: '<S54>/Unit Delay1'
         */
        if (rtb_Logical3)
        {
            ITIR_ac_DW.UnitDelay1_DSTATE = 0.0F;
        }
        else
        {
            ITIR_ac_DW.UnitDelay1_DSTATE =
                ITIR_ac_DW.NeITIR_E_GrdEnrgyChrgDepEngOff_Recent +
                rtb_TmpSignalConversionAtFuelConsumption;
        }

        /* End of Switch: '<S49>/Switch3' */

        /* MinMax: '<S49>/MinMax1' incorporates:
         *  DataStoreRead: '<S49>/Data Store Read3'
         *  DataStoreWrite: '<S49>/Data Store Write1'
         *  UnitDelay: '<S54>/Unit Delay1'
         */
        ITIR_ac_DW.NeITIR_E_GrdEnrgyChrgDepEngOff_Recent = fminf
            (ITIR_ac_DW.UnitDelay1_DSTATE,
             ITIR_ac_DW.NeITIR_E_GrdEnrgyIntoBatt_Recent);

        /* Switch: '<S49>/Switch4' incorporates:
         *  Constant: '<S49>/Constant Value3'
         *  DataStoreRead: '<S49>/Data Store Read4'
         *  DataStoreRead: '<S49>/Data Store Read5'
         *  DataStoreWrite: '<S49>/Data Store Write2'
         *  MinMax: '<S49>/MinMax'
         *  Sum: '<S49>/Sum'
         */
        if (rtb_Logical2_k)
        {
            AeITIR_E_GrdEnrgyChrgDepEngOff_Lifetime = 0.0F;
        }
        else
        {
            AeITIR_E_GrdEnrgyChrgDepEngOff_Lifetime = fminf
                (AeITIR_E_GrdEnrgyIntoBatt_Lifetime,
                 rtb_TmpSignalConversionAtFuelConsumption +
                 AeITIR_E_GrdEnrgyChrgDepEngOff_Lifetime);
        }

        /* End of Switch: '<S49>/Switch4' */

        /* Sum: '<S50>/Sum3' incorporates:
         *  DataStoreRead: '<S50>/Data Store Read4'
         *  DataStoreRead: '<S50>/Data Store Read5'
         *  UnitDelay: '<S54>/Unit Delay1'
         */
        ITIR_ac_DW.UnitDelay1_DSTATE =
            ITIR_ac_DW.NeITIR_E_GrdEnrgyIntoBatt_Recent -
            ITIR_ac_DW.NeITIR_E_GrdEnrgyChrgDepEngOff_Recent;

        /* Outputs for Function Call SubSystem: '<S3>/ITII_ProcessInputs' */
        /* Switch: '<S50>/Switch2' incorporates:
         *  Constant: '<S19>/Constant'
         *  Constant: '<S29>/Constant'
         *  Constant: '<S44>/Constant'
         *  Inport: '<S12>/VeHVTR_P_HV_BatPwr_Arb2'
         *  Logic: '<S17>/Logical4'
         *  RelationalOperator: '<S17>/Comparison13'
         *  RelationalOperator: '<S17>/Comparison14'
         *  RelationalOperator: '<S19>/Compare'
         */
        if ((((((uint32)tmpRead_0) == CeESSR_e_EngRunning) && (rtb_Switch2_b >
                0.0F)) && (((uint32)tmpRead) == CeBACR_e_ChargeDepleting)) &&
                tmpRead_3)
        {
            /* Switch: '<S50>/Switch2' incorporates:
             *  Constant: '<S50>/Constant'
             *  Product: '<S50>/Product'
             */
            rtb_TmpSignalConversionAtFuelConsumption = 0.000277F * rtb_Switch2_b;
        }
        else
        {
            /* Switch: '<S50>/Switch2' incorporates:
             *  Constant: '<S50>/Constant Value1'
             */
            rtb_TmpSignalConversionAtFuelConsumption = 0.0F;
        }

        /* End of Switch: '<S50>/Switch2' */
        /* End of Outputs for SubSystem: '<S3>/ITII_ProcessInputs' */

        /* Switch: '<S50>/Switch3' incorporates:
         *  Constant: '<S50>/Constant Value2'
         *  DataStoreRead: '<S50>/Data Store Read1'
         *  Sum: '<S50>/Sum1'
         */
        if (rtb_Logical3)
        {
            rtb_Switch = 0.0F;
        }
        else
        {
            rtb_Switch = ITIR_ac_DW.NeITIR_E_GrdEnrgyChrgDepEngOn_Recent +
                rtb_TmpSignalConversionAtFuelConsumption;
        }

        /* End of Switch: '<S50>/Switch3' */

        /* MinMax: '<S50>/MinMax1' incorporates:
         *  DataStoreWrite: '<S50>/Data Store Write1'
         *  UnitDelay: '<S54>/Unit Delay1'
         */
        ITIR_ac_DW.NeITIR_E_GrdEnrgyChrgDepEngOn_Recent = fminf
            (ITIR_ac_DW.UnitDelay1_DSTATE, rtb_Switch);

        /* Switch: '<S50>/Switch4' incorporates:
         *  Constant: '<S50>/Constant Value3'
         *  Constant: '<S50>/Constant Value4'
         *  DataStoreRead: '<S50>/Data Store Read2'
         *  DataStoreRead: '<S50>/Data Store Read6'
         *  DataStoreRead: '<S50>/Data Store Read7'
         *  DataStoreWrite: '<S50>/Data Store Write2'
         *  MinMax: '<S50>/MinMax'
         *  MinMax: '<S50>/MinMax2'
         *  Sum: '<S50>/Sum'
         *  Sum: '<S50>/Sum2'
         */
        if (rtb_Logical2_k)
        {
            AeITIR_E_GrdEnrgyChrgDepEngOn_Lifetime = 0.0F;
        }
        else
        {
            AeITIR_E_GrdEnrgyChrgDepEngOn_Lifetime = fminf(fmaxf
                (AeITIR_E_GrdEnrgyIntoBatt_Lifetime -
                 AeITIR_E_GrdEnrgyChrgDepEngOff_Lifetime, 0.0F),
                rtb_TmpSignalConversionAtFuelConsumption +
                AeITIR_E_GrdEnrgyChrgDepEngOn_Lifetime);
        }

        /* End of Switch: '<S50>/Switch4' */

        /* Outputs for Atomic SubSystem: '<S17>/Turn On Delay Sample3' */
        /* Outputs for Atomic SubSystem: '<S59>/EdgeRising' */
        /* Outputs for Function Call SubSystem: '<S3>/ITII_ProcessInputs' */
        /* Logic: '<S87>/AND' incorporates:
         *  Inport: '<S12>/VeHPMR_t_PropSysActv'
         *  Logic: '<S87>/OR1'
         *  UnitDelay: '<S87>/Unit Delay'
         */
        rtb_Logical30 = (tmpRead_1 && (!ITIR_ac_DW.UnitDelay_DSTATE_h2));

        /* Update for UnitDelay: '<S87>/Unit Delay' incorporates:
         *  Inport: '<S12>/VeHPMR_t_PropSysActv'
         */
        ITIR_ac_DW.UnitDelay_DSTATE_h2 = tmpRead_1;

        /* End of Outputs for SubSystem: '<S59>/EdgeRising' */

        /* Switch: '<S59>/Switch1' incorporates:
         *  Constant: '<S59>/Constant Value'
         *  Constant: '<S59>/Constant Value1'
         *  Inport: '<S12>/VeHPMR_t_PropSysActv'
         *  Logic: '<S59>/OR'
         *  Logic: '<S59>/OR1'
         *  MinMax: '<S59>/Minimum'
         *  Sum: '<S59>/Summation'
         *  UnitDelay: '<S59>/Unit Delay'
         */
        if ((!tmpRead_1) || rtb_Logical30)
        {
            ITIR_ac_DW.UnitDelay_DSTATE_h = 0U;
        }
        else if (2 < ((sint32)((uint16)(((uint32)ITIR_ac_DW.UnitDelay_DSTATE_h)
                    + 1U))))
        {
            /* MinMax: '<S59>/Minimum' */
            ITIR_ac_DW.UnitDelay_DSTATE_h = 2U;
        }
        else
        {
            /* MinMax: '<S59>/Minimum' incorporates:
             *  Constant: '<S59>/Constant Value'
             *  Sum: '<S59>/Summation'
             *  UnitDelay: '<S59>/Unit Delay'
             */
            ITIR_ac_DW.UnitDelay_DSTATE_h = (uint16)(((uint32)
                ITIR_ac_DW.UnitDelay_DSTATE_h) + 1U);
        }

        /* End of Switch: '<S59>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S17>/Signal Latch On With Reset3' */
        /* Logic: '<S56>/OR1' incorporates:
         *  Constant: '<S17>/Constant Value6'
         *  Inport: '<S12>/VeHPMR_t_PropSysActv'
         *  Logic: '<S17>/Logical28'
         *  Logic: '<S56>/OR'
         *  Logic: '<S59>/AND'
         *  RelationalOperator: '<S59>/Greater  Than'
         *  UnitDelay: '<S56>/Unit Delay'
         *  UnitDelay: '<S59>/Unit Delay'
         */
        ITIR_ac_DW.UnitDelay_DSTATE_d = (((tmpRead_1 && (((sint32)
            ITIR_ac_DW.UnitDelay_DSTATE_h) >= 2)) && tmpRead_3) || (tmpRead_1 &&
            (ITIR_ac_DW.UnitDelay_DSTATE_d)));

        /* End of Outputs for SubSystem: '<S17>/Signal Latch On With Reset3' */
        /* End of Outputs for SubSystem: '<S3>/ITII_ProcessInputs' */
        /* End of Outputs for SubSystem: '<S17>/Turn On Delay Sample3' */

        /* Outputs for Atomic SubSystem: '<S51>/EdgeRising2' */
        /* Logic: '<S80>/OR1' incorporates:
         *  UnitDelay: '<S80>/Unit Delay'
         */
        rtb_Logical30 = !ITIR_ac_DW.UnitDelay_DSTATE_hp;

        /* Update for UnitDelay: '<S80>/Unit Delay' */
        ITIR_ac_DW.UnitDelay_DSTATE_hp = ITIR_ac_DW.UnitDelay_DSTATE_d;

        /* Switch: '<S51>/Switch2' incorporates:
         *  Logic: '<S80>/AND'
         */
        rtb_Switch2 = (sint32)(((ITIR_ac_DW.UnitDelay_DSTATE_d) && rtb_Logical30)
                               ? 1 : 0);

        /* End of Outputs for SubSystem: '<S51>/EdgeRising2' */

        /* Switch: '<S51>/Switch4' incorporates:
         *  Constant: '<S51>/Constant Value3'
         *  DataStoreRead: '<S51>/Data Store Read'
         *  DataStoreWrite: '<S51>/Data Store Write1'
         *  Sum: '<S51>/Sum'
         */
        if (rtb_Logical2_k)
        {
            AeITIR_Cnt_IgnCycl_Lifetime = 0U;
        }
        else
        {
            AeITIR_Cnt_IgnCycl_Lifetime = ((uint32)rtb_Switch2) +
                AeITIR_Cnt_IgnCycl_Lifetime;
        }

        /* End of Switch: '<S51>/Switch4' */

        /* Outputs for Function Call SubSystem: '<S3>/ITII_ProcessInputs' */
        /* Switch: '<S52>/Switch2' incorporates:
         *  Constant: '<S22>/Constant'
         *  Constant: '<S32>/Constant'
         *  Constant: '<S33>/Constant'
         *  Inport: '<S12>/VeHVTR_P_HV_BatPwr_Arb2'
         *  Logic: '<S17>/Logical24'
         *  RelationalOperator: '<S17>/Comparison21'
         *  RelationalOperator: '<S17>/Comparison41'
         *  RelationalOperator: '<S22>/Compare'
         */
        if ((((rtb_Switch2_b < 0.0F) && (((uint32)tmpRead_2) !=
                CeOBCR_e_ChargingSts_Charging)) && (((uint32)tmpRead_0) ==
                CeESSR_e_EngOff)) && tmpRead_3)
        {
            /* Switch: '<S52>/Switch2' incorporates:
             *  Abs: '<S52>/Abs1'
             *  Constant: '<S52>/Constant'
             *  Product: '<S52>/Product'
             */
            rtb_TmpSignalConversionAtFuelConsumption = fabsf(0.000277F *
                rtb_Switch2_b);
        }
        else
        {
            /* Switch: '<S52>/Switch2' incorporates:
             *  Constant: '<S52>/Constant Value1'
             */
            rtb_TmpSignalConversionAtFuelConsumption = 0.0F;
        }

        /* End of Switch: '<S52>/Switch2' */
        /* End of Outputs for SubSystem: '<S3>/ITII_ProcessInputs' */

        /* Switch: '<S51>/Switch3' incorporates:
         *  Constant: '<S51>/Constant Value2'
         *  Constant: '<S52>/Constant Value'
         *  DataStoreRead: '<S51>/Data Store Read1'
         *  DataStoreRead: '<S52>/Data Store Read1'
         *  DataStoreWrite: '<S51>/Data Store Write2'
         *  DataStoreWrite: '<S52>/Data Store Write1'
         *  Sum: '<S51>/Sum2'
         *  Sum: '<S52>/Sum1'
         *  Switch: '<S52>/Switch1'
         */
        if (rtb_Logical3)
        {
            ITIR_ac_DW.NeITIR_Cnt_IgnCycl_Recent = 0U;
            ITIR_ac_DW.NeITIR_E_NonGrdEnrgyEngOff_Recent = 0.0F;
        }
        else
        {
            ITIR_ac_DW.NeITIR_Cnt_IgnCycl_Recent += (uint32)rtb_Switch2;
            ITIR_ac_DW.NeITIR_E_NonGrdEnrgyEngOff_Recent +=
                rtb_TmpSignalConversionAtFuelConsumption;
        }

        /* End of Switch: '<S51>/Switch3' */

        /* Switch: '<S52>/Switch3' incorporates:
         *  Constant: '<S52>/Constant Value2'
         *  DataStoreRead: '<S52>/Data Store Read2'
         *  DataStoreWrite: '<S52>/Data Store Write3'
         *  Sum: '<S52>/Sum2'
         */
        if (rtb_Logical2_k)
        {
            ITIR_ac_DW.AeITIR_E_NonGrdEnrgyEngOff_Lifetime = 0.0F;
        }
        else
        {
            ITIR_ac_DW.AeITIR_E_NonGrdEnrgyEngOff_Lifetime +=
                rtb_TmpSignalConversionAtFuelConsumption;
        }

        /* End of Switch: '<S52>/Switch3' */

        /* Outputs for Function Call SubSystem: '<S3>/ITII_ProcessInputs' */
        /* Switch: '<S53>/Switch2' incorporates:
         *  Constant: '<S21>/Constant'
         *  Constant: '<S34>/Constant'
         *  Constant: '<S36>/Constant'
         *  Inport: '<S12>/VeHVTR_P_HV_BatPwr_Arb2'
         *  Logic: '<S17>/Logical21'
         *  RelationalOperator: '<S17>/Comparison18'
         *  RelationalOperator: '<S17>/Comparison19'
         *  RelationalOperator: '<S21>/Compare'
         */
        if ((((rtb_Switch2_b < 0.0F) && (((uint32)tmpRead_2) !=
                CeOBCR_e_ChargingSts_Charging)) && (((uint32)tmpRead_0) ==
                CeESSR_e_EngRunning)) && tmpRead_3)
        {
            /* Switch: '<S53>/Switch2' incorporates:
             *  Abs: '<S53>/Abs1'
             *  Constant: '<S53>/Constant'
             *  Product: '<S53>/Product'
             */
            rtb_Switch2_b = fabsf(0.000277F * rtb_Switch2_b);
        }
        else
        {
            /* Switch: '<S53>/Switch2' incorporates:
             *  Constant: '<S53>/Constant Value1'
             */
            rtb_Switch2_b = 0.0F;
        }

        /* End of Switch: '<S53>/Switch2' */
        /* End of Outputs for SubSystem: '<S3>/ITII_ProcessInputs' */

        /* Switch: '<S53>/Switch1' incorporates:
         *  Constant: '<S53>/Constant Value'
         *  DataStoreRead: '<S53>/Data Store Read1'
         *  DataStoreWrite: '<S53>/Data Store Write1'
         *  Sum: '<S53>/Sum1'
         */
        if (rtb_Logical3)
        {
            ITIR_ac_DW.NeITIR_E_NonGrdEnrgyEngOn_Recent = 0.0F;
        }
        else
        {
            ITIR_ac_DW.NeITIR_E_NonGrdEnrgyEngOn_Recent += rtb_Switch2_b;
        }

        /* End of Switch: '<S53>/Switch1' */

        /* Switch: '<S53>/Switch3' incorporates:
         *  Constant: '<S53>/Constant Value2'
         *  DataStoreRead: '<S53>/Data Store Read2'
         *  DataStoreWrite: '<S53>/Data Store Write2'
         *  Sum: '<S53>/Sum2'
         */
        if (rtb_Logical2_k)
        {
            ITIR_ac_DW.AeITIR_E_NonGrdEnrgyEngOn_Lifetime = 0.0F;
        }
        else
        {
            ITIR_ac_DW.AeITIR_E_NonGrdEnrgyEngOn_Lifetime += rtb_Switch2_b;
        }

        /* End of Switch: '<S53>/Switch3' */

        /* Outputs for Atomic SubSystem: '<S58>/EdgeRising' */
        /* Logic: '<S84>/AND' incorporates:
         *  Logic: '<S84>/OR1'
         *  UnitDelay: '<S84>/Unit Delay'
         */
        rtb_Logical3 = !ITIR_ac_DW.UnitDelay_DSTATE_b;

        /* Update for UnitDelay: '<S84>/Unit Delay' incorporates:
         *  Constant: '<S58>/TRUE Constant'
         */
        ITIR_ac_DW.UnitDelay_DSTATE_b = true;

        /* End of Outputs for SubSystem: '<S58>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S58>/Accumulator Reset' */
        /* Switch: '<S83>/Switch1' incorporates:
         *  Inport: '<S12>/VeHPMR_t_PropSysActv'
         *  Logic: '<S58>/Logical1'
         *  Sum: '<S83>/Summation'
         *  UnitDelay: '<S83>/Unit Delay'
         */
        if (rtb_Logical3 || rtb_Comparison3)
        {
            /* Switch: '<S58>/Switch3' */
            if (rtb_Comparison3)
            {
                /* UnitDelay: '<S83>/Unit Delay' incorporates:
                 *  Constant: '<S58>/Constant Value7'
                 *  Switch: '<S58>/Switch3'
                 */
                ITIR_ac_DW.UnitDelay_DSTATE = 0.0F;
            }
            else
            {
                /* UnitDelay: '<S83>/Unit Delay' incorporates:
                 *  DataStoreRead: '<S58>/Data Store Read3'
                 *  Switch: '<S58>/Switch3'
                 */
                ITIR_ac_DW.UnitDelay_DSTATE =
                    ITIR_ac_DW.NeITIR_t_TimeToResetRecentVar;
            }

            /* End of Switch: '<S58>/Switch3' */
        }
        else
        {
            /* Outputs for Function Call SubSystem: '<S3>/ITII_ProcessInputs' */
            ITIR_ac_DW.UnitDelay_DSTATE += (float32)(tmpRead_1 ? 1.0F : 0.0F);

            /* End of Outputs for SubSystem: '<S3>/ITII_ProcessInputs' */
        }

        /* End of Switch: '<S83>/Switch1' */
        /* End of Outputs for SubSystem: '<S58>/Accumulator Reset' */

        /* DataStoreWrite: '<S58>/Data Store Write3' incorporates:
         *  UnitDelay: '<S83>/Unit Delay'
         */
        ITIR_ac_DW.NeITIR_t_TimeToResetRecentVar = ITIR_ac_DW.UnitDelay_DSTATE;

        /* Chart: '<S17>/Chart' */
        /* Gateway: ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/Chart */
        /* During: ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/Chart */
        /* Entry Internal: ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/Chart */
        /* Transition: '<S18>:12' */
        if (rtb_TmpSignalConversionAtVeITII_b_ResetF)
        {
            /* Transition: '<S18>:13' */
            /* Transition: '<S18>:15' */
            rtb_VeITIR_e_HCPVTDFreeze_out = CeITIR_e_LifetimeRecentReset;

            /* Transition: '<S18>:24' */
            /* Transition: '<S18>:23' */
            /* Transition: '<S18>:22' */
        }
        else
        {
            /* Transition: '<S18>:14' */
            if (rtb_Logical2)
            {
                /* Transition: '<S18>:16' */
                /* Transition: '<S18>:18' */
                rtb_VeITIR_e_HCPVTDFreeze_out = CeITIR_e_RecentReset;

                /* Transition: '<S18>:23' */
                /* Transition: '<S18>:22' */
            }
            else
            {
                /* Transition: '<S18>:17' */
                if (rtb_Logical9)
                {
                    /* Transition: '<S18>:19' */
                    /* Transition: '<S18>:21' */
                    rtb_VeITIR_e_HCPVTDFreeze_out = CeITIR_e_Freeze;

                    /* Transition: '<S18>:22' */
                }
                else
                {
                    /* Transition: '<S18>:20' */
                    rtb_VeITIR_e_HCPVTDFreeze_out = CeITIR_e_NoReset;
                }
            }
        }

        /* End of Chart: '<S17>/Chart' */

        /* DataTypeConversion: '<S26>/DataTypeConversion' */
        /* Transition: '<S18>:25' */
        ITIR_ac_B.DataTypeConversion = (TePLTR_e_ECMVtdFreeze)
            rtb_VeITIR_e_HCPVTDFreeze_out;

        /* Update for UnitDelay: '<S54>/Unit Delay1' */
        ITIR_ac_DW.UnitDelay1_DSTATE = rtb_TmpSignalConversionAtVePLTR_l_Odomet;

        /* End of Outputs for SubSystem: '<S15>/TrackingInfoSubsystem' */
    }

    /* End of If: '<S15>/If1' */

    /* S-Function (fcgen): '<S11>/FunctionCallGenerator1' incorporates:
     *  SubSystem: '<S11>/Routine130B_and_ITIDs'
     */
    /* DataStoreWrite: '<S14>/Data Store Write' incorporates:
     *  Constant: '<S14>/FALSE Constant30'
     */
    VeITIR_b_ResetRequest_Routine130B = false;

    /* Outport: '<Root>/VeITIR_l_DistTravelChrgDepEngOff_Lifetime' incorporates:
     *  DataStoreRead: '<S14>/Data Store Read9'
     *  SignalConversion generated from: '<S3>/DistTravelChrgDepEngOff_Lifetime'
     */
    (void)Rte_Write_VeITIR_l_DistTravelChrgDepEngOff_Lifetime_Value
        (AeITIR_l_DistTravelChrgDepEngOff_Lifetime);

    /* Outport: '<Root>/VeITIR_l_DistTravelChrgDepEngOff_Recent' incorporates:
     *  DataStoreRead: '<S14>/Data Store Read8'
     *  SignalConversion generated from: '<S3>/DistTravelChrgDepEngOff_Recent'
     */
    (void)Rte_Write_VeITIR_l_DistTravelChrgDepEngOff_Recent_Value
        (ITIR_ac_DW.NeITIR_l_DistTravelChrgDepEngOff_Recent);

    /* Outport: '<Root>/VeITIR_l_DistTravelChrgDepEngOn_Lifetime' incorporates:
     *  DataStoreRead: '<S14>/Data Store Read11'
     *  SignalConversion generated from: '<S3>/DistTravelChrgDepEngOn_Lifetime'
     */
    (void)Rte_Write_VeITIR_l_DistTravelChrgDepEngOn_Lifetime_Value
        (AeITIR_l_DistTravelChrgDepEngOn_Lifetime);

    /* Outport: '<Root>/VeITIR_l_DistTravelChrgDepEngOn_Recent' incorporates:
     *  DataStoreRead: '<S14>/Data Store Read10'
     *  SignalConversion generated from: '<S3>/DistTravelChrgDepEngOn_Recent'
     */
    (void)Rte_Write_VeITIR_l_DistTravelChrgDepEngOn_Recent_Value
        (ITIR_ac_DW.NeITIR_l_DistTravelChrgDepEngOn_Recent);

    /* Outport: '<Root>/VeITIR_l_DistTravelChrgIncrease_Recent' incorporates:
     *  DataStoreRead: '<S14>/Data Store Read12'
     *  SignalConversion generated from: '<S3>/DistTravelChrgIncrease_Recent'
     */
    (void)Rte_Write_VeITIR_l_DistTravelChrgIncrease_Recent_Value
        (ITIR_ac_DW.NeITIR_l_DistTravelChrgIncrease_Recent);

    /* Outport: '<Root>/VeITIR_l_DistTrvlChrgIncrease_Lifetime' incorporates:
     *  DataStoreRead: '<S14>/Data Store Read13'
     *  SignalConversion generated from: '<S3>/DistTrvlChrgIncrease_Lifetime'
     */
    (void)Rte_Write_VeITIR_l_DistTrvlChrgIncrease_Lifetime_Value
        (AeITIR_l_DistTrvlChrgIncrease_Lifetime);

    /* Outport: '<Root>/VeITIR_Cnt_FuelConsChrgDep_Lifetime' incorporates:
     *  DataStoreRead: '<S14>/Data Store Read2'
     *  SignalConversion generated from: '<S3>/FuelConsChrgDep_Lifetime'
     */
    (void)Rte_Write_VeITIR_Cnt_FuelConsChrgDep_Lifetime_Value
        (AeITIR_Cnt_FuelConsChrgDep_Lifetime);

    /* Outport: '<Root>/VeITIR_Cnt_FuelConsChrgDep_Recent' incorporates:
     *  DataStoreRead: '<S14>/Data Store Read'
     *  SignalConversion generated from: '<S3>/FuelConsChrgDep_Recent'
     */
    (void)Rte_Write_VeITIR_Cnt_FuelConsChrgDep_Recent_Value
        (ITIR_ac_DW.NeITIR_Cnt_FuelConsChrgDep_Recent);

    /* Outport: '<Root>/VeITIR_Cnt_FuelConsChrgIncrease_Lifetime' incorporates:
     *  DataStoreRead: '<S14>/Data Store Read3'
     *  SignalConversion generated from: '<S3>/FuelConsChrgIncrease_Lifetime'
     */
    (void)Rte_Write_VeITIR_Cnt_FuelConsChrgIncrease_Lifetime_Value
        (AeITIR_Cnt_FuelConsChrgIncrease_Lifetime);

    /* Outport: '<Root>/VeITIR_Cnt_FuelConsChrgIncrease_Recent' incorporates:
     *  DataStoreRead: '<S14>/Data Store Read4'
     *  SignalConversion generated from: '<S3>/FuelConsChrgIncrease_Recent'
     */
    (void)Rte_Write_VeITIR_Cnt_FuelConsChrgIncrease_Recent_Value
        (ITIR_ac_DW.NeITIR_Cnt_FuelConsChrgIncrease_Recent);

    /* Outport: '<Root>/VeITIR_Cnt_FuelEngIgnCycl_Lifetime' incorporates:
     *  DataStoreRead: '<S14>/Data Store Read7'
     *  SignalConversion generated from: '<S3>/FuelEngIgnCycl_Lifetime'
     */
    (void)Rte_Write_VeITIR_Cnt_FuelEngIgnCycl_Lifetime_Value
        (AeITIR_Cnt_FuelEngIgnCycl_Lifetime);

    /* Outport: '<Root>/VeITIR_Cnt_FuelEngIgnCycl_Recent' incorporates:
     *  DataStoreRead: '<S14>/Data Store Read6'
     *  SignalConversion generated from: '<S3>/FuelEngIgnCycl_Recent'
     */
    (void)Rte_Write_VeITIR_Cnt_FuelEngIgnCycl_Recent_Value
        (ITIR_ac_DW.NeITIR_Cnt_FuelEngIgnCycl_Recent);

    /* Outport: '<Root>/VeITIR_E_GrdEnrgyChrgDepEngOff_Lifetime' incorporates:
     *  DataStoreRead: '<S14>/Data Store Read15'
     *  SignalConversion generated from: '<S3>/GrdEnrgyChrgDepEngOff_Lifetime'
     */
    (void)Rte_Write_VeITIR_E_GrdEnrgyChrgDepEngOff_Lifetime_Value
        (AeITIR_E_GrdEnrgyChrgDepEngOff_Lifetime);

    /* Outport: '<Root>/VeITIR_E_GrdEnrgyChrgDepEngOff_Recent' incorporates:
     *  DataStoreRead: '<S14>/Data Store Read14'
     *  SignalConversion generated from: '<S3>/GrdEnrgyChrgDepEngOff_Recent'
     */
    (void)Rte_Write_VeITIR_E_GrdEnrgyChrgDepEngOff_Recent_Value
        (ITIR_ac_DW.NeITIR_E_GrdEnrgyChrgDepEngOff_Recent);

    /* Outport: '<Root>/VeITIR_E_GrdEnrgyChrgDepEngOn_Lifetime' incorporates:
     *  DataStoreRead: '<S14>/Data Store Read17'
     *  SignalConversion generated from: '<S3>/GrdEnrgyChrgDepEngOn_Lifetime'
     */
    (void)Rte_Write_VeITIR_E_GrdEnrgyChrgDepEngOn_Lifetime_Value
        (AeITIR_E_GrdEnrgyChrgDepEngOn_Lifetime);

    /* Outport: '<Root>/VeITIR_E_GrdEnrgyChrgDepEngOn_Recent' incorporates:
     *  DataStoreRead: '<S14>/Data Store Read16'
     *  SignalConversion generated from: '<S3>/GrdEnrgyChrgDepEngOn_Recent'
     */
    (void)Rte_Write_VeITIR_E_GrdEnrgyChrgDepEngOn_Recent_Value
        (ITIR_ac_DW.NeITIR_E_GrdEnrgyChrgDepEngOn_Recent);

    /* Outport: '<Root>/VeITIR_E_GrdEnrgyIntoBatt_Lifetime' incorporates:
     *  DataStoreRead: '<S14>/Data Store Read19'
     *  SignalConversion generated from: '<S3>/GrdEnrgyIntoBatt_Lifetime'
     */
    (void)Rte_Write_VeITIR_E_GrdEnrgyIntoBatt_Lifetime_Value
        (AeITIR_E_GrdEnrgyIntoBatt_Lifetime);

    /* Outport: '<Root>/VeITIR_E_GrdEnrgyIntoBatt_Recent' incorporates:
     *  DataStoreRead: '<S14>/Data Store Read18'
     *  SignalConversion generated from: '<S3>/GrdEnrgyIntoBatt_Recent'
     */
    (void)Rte_Write_VeITIR_E_GrdEnrgyIntoBatt_Recent_Value
        (ITIR_ac_DW.NeITIR_E_GrdEnrgyIntoBatt_Recent);

    /* Outport: '<Root>/VeITIR_Cnt_IgnCycl_Lifetime' incorporates:
     *  DataStoreRead: '<S14>/Data Store Read5'
     *  SignalConversion generated from: '<S3>/IgnCycl_Lifetime'
     */
    (void)Rte_Write_VeITIR_Cnt_IgnCycl_Lifetime_Value
        (AeITIR_Cnt_IgnCycl_Lifetime);

    /* Outport: '<Root>/VeITIR_Cnt_IgnCycl_Recent' incorporates:
     *  DataStoreRead: '<S14>/Data Store Read1'
     *  SignalConversion generated from: '<S3>/IgnCycl_Recent'
     */
    (void)Rte_Write_VeITIR_Cnt_IgnCycl_Recent_Value
        (ITIR_ac_DW.NeITIR_Cnt_IgnCycl_Recent);

    /* End of Outputs for S-Function (fcgen): '<S11>/FunctionCallGenerator1' */
    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Outport: '<Root>/VeITIR_e_HCPVtdFreeze' incorporates:
     *  DataTypeConversion: '<S26>/DataTypeConversion'
     *  SignalConversion generated from: '<S3>/VeITIR_e_HCPVtdFreeze'
     */
    (void)Rte_Write_VeITIR_e_HCPVtdFreeze_Value(ITIR_ac_B.DataTypeConversion);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/SlowTEF' */
}

/* Output function */
FUNC(void, ITIR_CODE) ITIR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/ITIR_PwrOff'
     */
    /* Outport: '<Root>/NeITIR_E_GrdEnrgyIntoBatt_Recent_PM_Out' incorporates:
     *  DataStoreRead: '<S1>/NePLTR_P_GrdEnrgyIntoBatt_Recent'
     */
    (void)
        Rte_Write_NeITIR_E_GrdEnrgyIntoBatt_Recent_NeITIR_E_GrdEnrgyIntoBatt_Recent
        (ITIR_ac_DW.NeITIR_E_GrdEnrgyIntoBatt_Recent);

    /* Outport: '<Root>/NeITIR_t_TimeToResetRecentVar_PM_Out' incorporates:
     *  DataStoreRead: '<S1>/NePLTR_t_TimeToResetRecentVar'
     */
    (void)Rte_Write_NeITIR_t_TimeToResetRecentVar_NeITIR_t_TimeToResetRecentVar
        (ITIR_ac_DW.NeITIR_t_TimeToResetRecentVar);

    /* Outport: '<Root>/NeITIR_Cnt_FuelConsChrgDep_Recent_PM_Out' incorporates:
     *  DataStoreRead: '<S1>/NePLTR_Cnt_FuelConsChrgDep_Recent'
     */
    (void)
        Rte_Write_NeITIR_Cnt_FuelConsChrgDep_Recent_NeITIR_Cnt_FuelConsChrgDep_Recent
        (ITIR_ac_DW.NeITIR_Cnt_FuelConsChrgDep_Recent);

    /* Outport: '<Root>/NeITIR_l_DistTravelChrgDepEngOff_Recent_PM_Out' incorporates:
     *  DataStoreRead: '<S1>/NePLTR_l_DistTravelChrgDepEngOff_Recent'
     */
    (void)
        Rte_Write_NeITIR_l_DistTravelChrgDepEngOff_Recent_NeITIR_l_DistTravelChrgDepEngOff_Recent
        (ITIR_ac_DW.NeITIR_l_DistTravelChrgDepEngOff_Recent);

    /* Outport: '<Root>/NeITIR_Cnt_FuelEngIgnCycl_Recent_PM_Out' incorporates:
     *  DataStoreRead: '<S1>/NePLTR_Cnt_FuelEngIgnCycl_Recent'
     */
    (void)
        Rte_Write_NeITIR_Cnt_FuelEngIgnCycl_Recent_NeITIR_Cnt_FuelEngIgnCycl_Recent
        (ITIR_ac_DW.NeITIR_Cnt_FuelEngIgnCycl_Recent);

    /* Outport: '<Root>/NeITIR_Cnt_IgnCycl_Recent_PM_Out' incorporates:
     *  DataStoreRead: '<S1>/NePLTR_Cnt_IgnCycl_Recent'
     */
    (void)Rte_Write_NeITIR_Cnt_IgnCycl_Recent_NeITIR_Cnt_IgnCycl_Recent
        (ITIR_ac_DW.NeITIR_Cnt_IgnCycl_Recent);

    /* Outport: '<Root>/NeITIR_l_DistTravelChrgDepEngOn_Recent_PM_Out' incorporates:
     *  DataStoreRead: '<S1>/NePLTR_l_DistTravelChrgDepEngOn_Recent'
     */
    (void)
        Rte_Write_NeITIR_l_DistTravelChrgDepEngOn_Recent_NeITIR_l_DistTravelChrgDepEngOn_Recent
        (ITIR_ac_DW.NeITIR_l_DistTravelChrgDepEngOn_Recent);

    /* Outport: '<Root>/NeITIR_l_DistTravelChrgIncrease_Recent_PM_Out' incorporates:
     *  DataStoreRead: '<S1>/NePLTR_l_DistTravelChrgIncrease_Recent'
     */
    (void)
        Rte_Write_NeITIR_l_DistTravelChrgIncrease_Recent_NeITIR_l_DistTravelChrgIncrease_Recent
        (ITIR_ac_DW.NeITIR_l_DistTravelChrgIncrease_Recent);

    /* Outport: '<Root>/NeITIR_Cnt_FuelConsChrgIncrease_Recent_PM_Out' incorporates:
     *  DataStoreRead: '<S1>/NePLTR_Cnt_FuelConsChrgIncrease_Recent'
     */
    (void)
        Rte_Write_NeITIR_Cnt_FuelConsChrgIncrease_Recent_NeITIR_Cnt_FuelConsChrgIncrease_Recent
        (ITIR_ac_DW.NeITIR_Cnt_FuelConsChrgIncrease_Recent);

    /* Outport: '<Root>/NeITIR_E_GrdEnrgyChrgDepEngOn_Recent_PM_Out' incorporates:
     *  DataStoreRead: '<S1>/NePLTR_P_GrdEnrgyChrgDepEngOn_Recent'
     */
    (void)
        Rte_Write_NeITIR_E_GrdEnrgyChrgDepEngOn_Recent_NeITIR_E_GrdEnrgyChrgDepEngOn_Recent
        (ITIR_ac_DW.NeITIR_E_GrdEnrgyChrgDepEngOn_Recent);

    /* Outport: '<Root>/NeITIR_E_GrdEnrgyChrgDepEngOff_Recent_PM_Out' incorporates:
     *  DataStoreRead: '<S1>/NePLTR_P_GrdEnrgyChrgDepEngOff_Recent'
     */
    (void)
        Rte_Write_NeITIR_E_GrdEnrgyChrgDepEngOff_Recent_NeITIR_E_GrdEnrgyChrgDepEngOff_Recent
        (ITIR_ac_DW.NeITIR_E_GrdEnrgyChrgDepEngOff_Recent);

    /* Outport: '<Root>/AeITIR_l_DistTravelChrgDepEngOff_Lifetime_Strimm_Out' incorporates:
     *  DataStoreRead: '<S1>/Data Store Read3'
     */
    (void)
        Rte_Write_AeITIR_l_DistTravelChrgDepEngOff_Lifetime_AeITIR_l_DistTravelChrgDepEngOff_Lifetime
        (AeITIR_l_DistTravelChrgDepEngOff_Lifetime);

    /* Outport: '<Root>/AeITIR_l_DistTravelChrgDepEngOn_Lifetime_Strimm_Out' incorporates:
     *  DataStoreRead: '<S1>/Data Store Read1'
     */
    (void)
        Rte_Write_AeITIR_l_DistTravelChrgDepEngOn_Lifetime_AeITIR_l_DistTravelChrgDepEngOn_Lifetime
        (AeITIR_l_DistTravelChrgDepEngOn_Lifetime);

    /* Outport: '<Root>/AeITIR_l_DistTrvlChrgIncrease_Lifetime_Strimm_Out' incorporates:
     *  DataStoreRead: '<S1>/Data Store Read2'
     */
    (void)
        Rte_Write_AeITIR_l_DistTrvlChrgIncrease_Lifetime_AeITIR_l_DistTrvlChrgIncrease_Lifetime
        (AeITIR_l_DistTrvlChrgIncrease_Lifetime);

    /* Outport: '<Root>/AeITIR_Cnt_FuelConsChrgDep_Lifetime_Strimm_Out' incorporates:
     *  DataStoreRead: '<S1>/Data Store Read4'
     */
    (void)
        Rte_Write_AeITIR_Cnt_FuelConsChrgDep_Lifetime_AeITIR_Cnt_FuelConsChrgDep_Lifetime
        (AeITIR_Cnt_FuelConsChrgDep_Lifetime);

    /* Outport: '<Root>/AeITIR_Cnt_FuelConsChrgIncrease_Lifetime_Strimm_Out' incorporates:
     *  DataStoreRead: '<S1>/Data Store Read5'
     */
    (void)
        Rte_Write_AeITIR_Cnt_FuelConsChrgIncrease_Lifetime_AeITIR_Cnt_FuelConsChrgIncrease_Lifetime
        (AeITIR_Cnt_FuelConsChrgIncrease_Lifetime);

    /* Outport: '<Root>/AeITIR_E_GrdEnrgyIntoBatt_Lifetime_Strimm_Out' incorporates:
     *  DataStoreRead: '<S1>/Data Store Read6'
     */
    (void)
        Rte_Write_AeITIR_E_GrdEnrgyIntoBatt_Lifetime_AeITIR_E_GrdEnrgyIntoBatt_Lifetime
        (AeITIR_E_GrdEnrgyIntoBatt_Lifetime);

    /* Outport: '<Root>/AeITIR_E_GrdEnrgyChrgDepEngOff_Lifetime_Strimm_Out' incorporates:
     *  DataStoreRead: '<S1>/Data Store Read7'
     */
    (void)
        Rte_Write_AeITIR_E_GrdEnrgyChrgDepEngOff_Lifetime_AeITIR_E_GrdEnrgyChrgDepEngOff_Lifetime
        (AeITIR_E_GrdEnrgyChrgDepEngOff_Lifetime);

    /* Outport: '<Root>/AeITIR_E_GrdEnrgyChrgDepEngOn_Lifetime_Strimm_Out' incorporates:
     *  DataStoreRead: '<S1>/Data Store Read8'
     */
    (void)
        Rte_Write_AeITIR_E_GrdEnrgyChrgDepEngOn_Lifetime_AeITIR_E_GrdEnrgyChrgDepEngOn_Lifetime
        (AeITIR_E_GrdEnrgyChrgDepEngOn_Lifetime);

    /* Outport: '<Root>/AeITIR_Cnt_IgnCycl_Lifetime_Strimm_Out' incorporates:
     *  DataStoreRead: '<S1>/Data Store Read9'
     */
    (void)Rte_Write_AeITIR_Cnt_IgnCycl_Lifetime_AeITIR_Cnt_IgnCycl_Lifetime
        (AeITIR_Cnt_IgnCycl_Lifetime);

    /* Outport: '<Root>/AeITIR_Cnt_FuelEngIgnCycl_Lifetime_Strimm_Out' incorporates:
     *  DataStoreRead: '<S1>/Data Store Read10'
     */
    (void)
        Rte_Write_AeITIR_Cnt_FuelEngIgnCycl_Lifetime_AeITIR_Cnt_FuelEngIgnCycl_Lifetime
        (AeITIR_Cnt_FuelEngIgnCycl_Lifetime);

    /* Outport: '<Root>/NeITIR_E_NonGrdEnrgyEngOff_Recent_PM_Out' incorporates:
     *  DataStoreRead: '<S1>/NePLTR_P_GrdEnrgyChrgDepEngOn_Recent1'
     */
    (void)
        Rte_Write_NeITIR_E_NonGrdEnrgyEngOff_Recent_NeITIR_E_NonGrdEnrgyEngOff_Recent
        (ITIR_ac_DW.NeITIR_E_NonGrdEnrgyEngOff_Recent);

    /* Outport: '<Root>/NeITIR_E_NonGrdEnrgyEngOn_Recent_PM_Out' incorporates:
     *  DataStoreRead: '<S1>/NePLTR_P_GrdEnrgyChrgDepEngOff_Recent1'
     */
    (void)
        Rte_Write_NeITIR_E_NonGrdEnrgyEngOn_Recent_NeITIR_E_NonGrdEnrgyEngOn_Recent
        (ITIR_ac_DW.NeITIR_E_NonGrdEnrgyEngOn_Recent);

    /* Outport: '<Root>/AeITIR_E_NonGrdEnrgyEngOff_Lifetime_Strimm_Out' incorporates:
     *  DataStoreRead: '<S1>/Data Store Read12'
     */
    (void)
        Rte_Write_AeITIR_E_NonGrdEnrgyEngOff_Lifetime_AeITIR_E_NonGrdEnrgyEngOff_Lifetime
        (ITIR_ac_DW.AeITIR_E_NonGrdEnrgyEngOff_Lifetime);

    /* Outport: '<Root>/AeITIR_E_NonGrdEnrgyEngOn_Lifetime_Strimm_Out' incorporates:
     *  DataStoreRead: '<S1>/Data Store Read11'
     */
    (void)
        Rte_Write_AeITIR_E_NonGrdEnrgyEngOn_Lifetime_AeITIR_E_NonGrdEnrgyEngOn_Lifetime
        (ITIR_ac_DW.AeITIR_E_NonGrdEnrgyEngOn_Lifetime);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, ITIR_CODE) ITIR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/ITIR_PwrOn'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/InitVal_Lifetime'
     */
    /* DataStoreWrite: '<S6>/Data Store Write11' incorporates:
     *  Inport: '<Root>/AeITIR_E_NonGrdEnrgyEngOn_Lifetime_Strimm_In'
     */
    (void)
        Rte_Read_AeITIR_E_NonGrdEnrgyEngOn_Lifetime_Rx_AeITIR_E_NonGrdEnrgyEngOn_Lifetime
        (&ITIR_ac_DW.AeITIR_E_NonGrdEnrgyEngOn_Lifetime);

    /* DataStoreWrite: '<S6>/Data Store Write10' incorporates:
     *  Inport: '<Root>/AeITIR_E_NonGrdEnrgyEngOff_Lifetime_Strimm_In'
     */
    (void)
        Rte_Read_AeITIR_E_NonGrdEnrgyEngOff_Lifetime_Rx_AeITIR_E_NonGrdEnrgyEngOff_Lifetime
        (&ITIR_ac_DW.AeITIR_E_NonGrdEnrgyEngOff_Lifetime);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/DSM_Init'
     */
    /* DataStoreWrite: '<S5>/NePLTR_P_GrdEnrgyChrgDepEngOff_Recent1' incorporates:
     *  Inport: '<Root>/NeITIR_E_NonGrdEnrgyEngOn_Recent_PM_In'
     */
    (void)
        Rte_Read_NeITIR_E_NonGrdEnrgyEngOn_Recent_Rx_NeITIR_E_NonGrdEnrgyEngOn_Recent
        (&ITIR_ac_DW.NeITIR_E_NonGrdEnrgyEngOn_Recent);

    /* DataStoreWrite: '<S5>/NePLTR_P_GrdEnrgyChrgDepEngOn_Recent1' incorporates:
     *  Inport: '<Root>/NeITIR_E_NonGrdEnrgyEngOff_Recent_PM_In'
     */
    (void)
        Rte_Read_NeITIR_E_NonGrdEnrgyEngOff_Recent_Rx_NeITIR_E_NonGrdEnrgyEngOff_Recent
        (&ITIR_ac_DW.NeITIR_E_NonGrdEnrgyEngOff_Recent);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/InitVal_Lifetime'
     */
    /* DataStoreWrite: '<S6>/Data Store Write9' incorporates:
     *  Inport: '<Root>/AeITIR_Cnt_FuelEngIgnCycl_Lifetime_Strimm_In'
     */
    (void)
        Rte_Read_AeITIR_Cnt_FuelEngIgnCycl_Lifetime_Rx_AeITIR_Cnt_FuelEngIgnCycl_Lifetime
        ((&(AeITIR_Cnt_FuelEngIgnCycl_Lifetime)));

    /* DataStoreWrite: '<S6>/Data Store Write8' incorporates:
     *  Inport: '<Root>/AeITIR_Cnt_IgnCycl_Lifetime_Strimm_In'
     */
    (void)Rte_Read_AeITIR_Cnt_IgnCycl_Lifetime_Rx_AeITIR_Cnt_IgnCycl_Lifetime
        ((&(AeITIR_Cnt_IgnCycl_Lifetime)));

    /* DataStoreWrite: '<S6>/Data Store Write7' incorporates:
     *  Inport: '<Root>/AeITIR_E_GrdEnrgyChrgDepEngOn_Lifetime_Strimm_In'
     */
    (void)
        Rte_Read_AeITIR_E_GrdEnrgyChrgDepEngOn_Lifetime_Rx_AeITIR_E_GrdEnrgyChrgDepEngOn_Lifetime
        ((&(AeITIR_E_GrdEnrgyChrgDepEngOn_Lifetime)));

    /* DataStoreWrite: '<S6>/Data Store Write6' incorporates:
     *  Inport: '<Root>/AeITIR_E_GrdEnrgyChrgDepEngOff_Lifetime_Strimm_In'
     */
    (void)
        Rte_Read_AeITIR_E_GrdEnrgyChrgDepEngOff_Lifetime_Rx_AeITIR_E_GrdEnrgyChrgDepEngOff_Lifetime
        ((&(AeITIR_E_GrdEnrgyChrgDepEngOff_Lifetime)));

    /* DataStoreWrite: '<S6>/Data Store Write5' incorporates:
     *  Inport: '<Root>/AeITIR_E_GrdEnrgyIntoBatt_Lifetime_Strimm_In'
     */
    (void)
        Rte_Read_AeITIR_E_GrdEnrgyIntoBatt_Lifetime_Rx_AeITIR_E_GrdEnrgyIntoBatt_Lifetime
        ((&(AeITIR_E_GrdEnrgyIntoBatt_Lifetime)));

    /* DataStoreWrite: '<S6>/Data Store Write4' incorporates:
     *  Inport: '<Root>/AeITIR_Cnt_FuelConsChrgIncrease_Lifetime_Strimm_In'
     */
    (void)
        Rte_Read_AeITIR_Cnt_FuelConsChrgIncrease_Lifetime_Rx_AeITIR_Cnt_FuelConsChrgIncrease_Lifetime
        ((&(AeITIR_Cnt_FuelConsChrgIncrease_Lifetime)));

    /* DataStoreWrite: '<S6>/Data Store Write' incorporates:
     *  Inport: '<Root>/AeITIR_Cnt_FuelConsChrgDep_Lifetime_Strimm_In'
     */
    (void)
        Rte_Read_AeITIR_Cnt_FuelConsChrgDep_Lifetime_Rx_AeITIR_Cnt_FuelConsChrgDep_Lifetime
        ((&(AeITIR_Cnt_FuelConsChrgDep_Lifetime)));

    /* DataStoreWrite: '<S6>/Data Store Write3' incorporates:
     *  Inport: '<Root>/AeITIR_l_DistTrvlChrgIncrease_Lifetime_Strimm_In'
     */
    (void)
        Rte_Read_AeITIR_l_DistTrvlChrgIncrease_Lifetime_Rx_AeITIR_l_DistTrvlChrgIncrease_Lifetime
        ((&(AeITIR_l_DistTrvlChrgIncrease_Lifetime)));

    /* DataStoreWrite: '<S6>/Data Store Write1' incorporates:
     *  Inport: '<Root>/AeITIR_l_DistTravelChrgDepEngOn_Lifetime_Strimm_In'
     */
    (void)
        Rte_Read_AeITIR_l_DistTravelChrgDepEngOn_Lifetime_Rx_AeITIR_l_DistTravelChrgDepEngOn_Lifetime
        ((&(AeITIR_l_DistTravelChrgDepEngOn_Lifetime)));

    /* DataStoreWrite: '<S6>/Data Store Write2' incorporates:
     *  Inport: '<Root>/AeITIR_l_DistTravelChrgDepEngOff_Lifetime_Strimm_In'
     */
    (void)
        Rte_Read_AeITIR_l_DistTravelChrgDepEngOff_Lifetime_Rx_AeITIR_l_DistTravelChrgDepEngOff_Lifetime
        ((&(AeITIR_l_DistTravelChrgDepEngOff_Lifetime)));

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/DSM_Init'
     */
    /* DataStoreWrite: '<S5>/NePLTR_P_GrdEnrgyChrgDepEngOff_Recent' incorporates:
     *  Inport: '<Root>/NeITIR_E_GrdEnrgyChrgDepEngOff_Recent_PM_In'
     */
    (void)
        Rte_Read_NeITIR_E_GrdEnrgyChrgDepEngOff_Recent_Rx_NeITIR_E_GrdEnrgyChrgDepEngOff_Recent
        (&ITIR_ac_DW.NeITIR_E_GrdEnrgyChrgDepEngOff_Recent);

    /* DataStoreWrite: '<S5>/NePLTR_P_GrdEnrgyChrgDepEngOn_Recent' incorporates:
     *  Inport: '<Root>/NeITIR_E_GrdEnrgyChrgDepEngOn_Recent_PM_In'
     */
    (void)
        Rte_Read_NeITIR_E_GrdEnrgyChrgDepEngOn_Recent_Rx_NeITIR_E_GrdEnrgyChrgDepEngOn_Recent
        (&ITIR_ac_DW.NeITIR_E_GrdEnrgyChrgDepEngOn_Recent);

    /* DataStoreWrite: '<S5>/NePLTR_Cnt_FuelConsChrgIncrease_Recent' incorporates:
     *  Inport: '<Root>/NeITIR_Cnt_FuelConsChrgIncrease_Recent_PM_In'
     */
    (void)
        Rte_Read_NeITIR_Cnt_FuelConsChrgIncrease_Recent_Rx_NeITIR_Cnt_FuelConsChrgIncrease_Recent
        (&ITIR_ac_DW.NeITIR_Cnt_FuelConsChrgIncrease_Recent);

    /* DataStoreWrite: '<S5>/NePLTR_l_DistTravelChrgIncrease_Recent' incorporates:
     *  Inport: '<Root>/NeITIR_l_DistTravelChrgIncrease_Recent_PM_In'
     */
    (void)
        Rte_Read_NeITIR_l_DistTravelChrgIncrease_Recent_Rx_NeITIR_l_DistTravelChrgIncrease_Recent
        (&ITIR_ac_DW.NeITIR_l_DistTravelChrgIncrease_Recent);

    /* DataStoreWrite: '<S5>/NePLTR_l_DistTravelChrgDepEngOn_Recent' incorporates:
     *  Inport: '<Root>/NeITIR_l_DistTravelChrgDepEngOn_Recent_PM_In'
     */
    (void)
        Rte_Read_NeITIR_l_DistTravelChrgDepEngOn_Recent_Rx_NeITIR_l_DistTravelChrgDepEngOn_Recent
        (&ITIR_ac_DW.NeITIR_l_DistTravelChrgDepEngOn_Recent);

    /* DataStoreWrite: '<S5>/NePLTR_Cnt_IgnCycl_Recent' incorporates:
     *  Inport: '<Root>/NeITIR_Cnt_IgnCycl_Recent_PM_In'
     */
    (void)Rte_Read_NeITIR_Cnt_IgnCycl_Recent_Rx_NeITIR_Cnt_IgnCycl_Recent
        (&ITIR_ac_DW.NeITIR_Cnt_IgnCycl_Recent);

    /* DataStoreWrite: '<S5>/NePLTR_Cnt_FuelEngIgnCycl_Recent' incorporates:
     *  Inport: '<Root>/NeITIR_Cnt_FuelEngIgnCycl_Recent_PM_In'
     */
    (void)
        Rte_Read_NeITIR_Cnt_FuelEngIgnCycl_Recent_Rx_NeITIR_Cnt_FuelEngIgnCycl_Recent
        (&ITIR_ac_DW.NeITIR_Cnt_FuelEngIgnCycl_Recent);

    /* DataStoreWrite: '<S5>/NePLTR_l_DistTravelChrgDepEngOff_Recent' incorporates:
     *  Inport: '<Root>/NeITIR_l_DistTravelChrgDepEngOff_Recent_PM_In'
     */
    (void)
        Rte_Read_NeITIR_l_DistTravelChrgDepEngOff_Recent_Rx_NeITIR_l_DistTravelChrgDepEngOff_Recent
        (&ITIR_ac_DW.NeITIR_l_DistTravelChrgDepEngOff_Recent);

    /* DataStoreWrite: '<S5>/NePLTR_Cnt_FuelConsChrgDep_Recent' incorporates:
     *  Inport: '<Root>/NeITIR_Cnt_FuelConsChrgDep_Recent_PM_In'
     */
    (void)
        Rte_Read_NeITIR_Cnt_FuelConsChrgDep_Recent_Rx_NeITIR_Cnt_FuelConsChrgDep_Recent
        (&ITIR_ac_DW.NeITIR_Cnt_FuelConsChrgDep_Recent);

    /* DataStoreWrite: '<S5>/NePLTR_t_TimeToResetRecentVar' incorporates:
     *  Inport: '<Root>/NeITIR_t_TimeToResetRecentVar_PM_In'
     */
    (void)
        Rte_Read_NeITIR_t_TimeToResetRecentVar_Rx_NeITIR_t_TimeToResetRecentVar(
        &ITIR_ac_DW.NeITIR_t_TimeToResetRecentVar);

    /* DataStoreWrite: '<S5>/NePLTR_P_GrdEnrgyIntoBatt_Recent' incorporates:
     *  Inport: '<Root>/NeITIR_E_GrdEnrgyIntoBatt_Recent_PM_In'
     */
    (void)
        Rte_Read_NeITIR_E_GrdEnrgyIntoBatt_Recent_Rx_NeITIR_E_GrdEnrgyIntoBatt_Recent
        (&ITIR_ac_DW.NeITIR_E_GrdEnrgyIntoBatt_Recent);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/ReadInitVal_ITIDs'
     */
    /* DataStoreRead: '<S7>/Data Store Read2' */
    AeITIR_Cnt_FuelConsChrgDep_Lifetime_Init =
        AeITIR_Cnt_FuelConsChrgDep_Lifetime;

    /* DataStoreRead: '<S7>/Data Store Read' */
    VeITIR_Cnt_FuelConsChrgDep_Recent_Init =
        ITIR_ac_DW.NeITIR_Cnt_FuelConsChrgDep_Recent;

    /* DataStoreRead: '<S7>/Data Store Read3' */
    AeITIR_Cnt_FuelConsChrgIncrease_Lifetime_Init =
        AeITIR_Cnt_FuelConsChrgIncrease_Lifetime;

    /* DataStoreRead: '<S7>/Data Store Read4' */
    VeITIR_Cnt_FuelConsChrgIncrease_Recent_Init =
        ITIR_ac_DW.NeITIR_Cnt_FuelConsChrgIncrease_Recent;

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S8>/VeITIR_e_HCPVtdFreeze_Out_Init' incorporates:
     *  Constant: '<S8>/Const14'
     */
    ITIR_ac_B.OutportBufferForVeITIR_e_HCPVtdFreeze_Ou = ITIR_ac_ConstB.Const14;

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/ReadInitVal_ITIDs'
     */
    /* Outport: '<Root>/VeITIR_l_DistTravelChrgDepEngOff_Lifetime' incorporates:
     *  DataStoreRead: '<S7>/Data Store Read9'
     *  SignalConversion generated from: '<S2>/DistTravelChrgDepEngOff_Lifetime_Init'
     */
    (void)Rte_Write_VeITIR_l_DistTravelChrgDepEngOff_Lifetime_Value
        (AeITIR_l_DistTravelChrgDepEngOff_Lifetime);

    /* Outport: '<Root>/VeITIR_l_DistTravelChrgDepEngOff_Recent' incorporates:
     *  DataStoreRead: '<S7>/Data Store Read8'
     *  SignalConversion generated from: '<S2>/DistTravelChrgDepEngOff_Recent_Init'
     */
    (void)Rte_Write_VeITIR_l_DistTravelChrgDepEngOff_Recent_Value
        (ITIR_ac_DW.NeITIR_l_DistTravelChrgDepEngOff_Recent);

    /* Outport: '<Root>/VeITIR_l_DistTravelChrgDepEngOn_Lifetime' incorporates:
     *  DataStoreRead: '<S7>/Data Store Read11'
     *  SignalConversion generated from: '<S2>/DistTravelChrgDepEngOn_Lifetime_Init'
     */
    (void)Rte_Write_VeITIR_l_DistTravelChrgDepEngOn_Lifetime_Value
        (AeITIR_l_DistTravelChrgDepEngOn_Lifetime);

    /* Outport: '<Root>/VeITIR_l_DistTravelChrgDepEngOn_Recent' incorporates:
     *  DataStoreRead: '<S7>/Data Store Read10'
     *  SignalConversion generated from: '<S2>/DistTravelChrgDepEngOn_Recent_Init'
     */
    (void)Rte_Write_VeITIR_l_DistTravelChrgDepEngOn_Recent_Value
        (ITIR_ac_DW.NeITIR_l_DistTravelChrgDepEngOn_Recent);

    /* Outport: '<Root>/VeITIR_l_DistTravelChrgIncrease_Recent' incorporates:
     *  DataStoreRead: '<S7>/Data Store Read12'
     *  SignalConversion generated from: '<S2>/DistTravelChrgIncrease_Recent_Init'
     */
    (void)Rte_Write_VeITIR_l_DistTravelChrgIncrease_Recent_Value
        (ITIR_ac_DW.NeITIR_l_DistTravelChrgIncrease_Recent);

    /* Outport: '<Root>/VeITIR_l_DistTrvlChrgIncrease_Lifetime' incorporates:
     *  DataStoreRead: '<S7>/Data Store Read13'
     *  SignalConversion generated from: '<S2>/DistTrvlChrgIncrease_Lifetime_Init'
     */
    (void)Rte_Write_VeITIR_l_DistTrvlChrgIncrease_Lifetime_Value
        (AeITIR_l_DistTrvlChrgIncrease_Lifetime);

    /* Outport: '<Root>/VeITIR_Cnt_FuelEngIgnCycl_Lifetime' incorporates:
     *  DataStoreRead: '<S7>/Data Store Read7'
     *  SignalConversion generated from: '<S2>/FuelEngIgnCycl_Lifetime_Init'
     */
    (void)Rte_Write_VeITIR_Cnt_FuelEngIgnCycl_Lifetime_Value
        (AeITIR_Cnt_FuelEngIgnCycl_Lifetime);

    /* Outport: '<Root>/VeITIR_Cnt_FuelEngIgnCycl_Recent' incorporates:
     *  DataStoreRead: '<S7>/Data Store Read6'
     *  SignalConversion generated from: '<S2>/FuelEngIgnCycl_Recent_Init'
     */
    (void)Rte_Write_VeITIR_Cnt_FuelEngIgnCycl_Recent_Value
        (ITIR_ac_DW.NeITIR_Cnt_FuelEngIgnCycl_Recent);

    /* Outport: '<Root>/VeITIR_E_GrdEnrgyChrgDepEngOff_Lifetime' incorporates:
     *  DataStoreRead: '<S7>/Data Store Read15'
     *  SignalConversion generated from: '<S2>/GrdEnrgyChrgDepEngOff_Lifetime_Init'
     */
    (void)Rte_Write_VeITIR_E_GrdEnrgyChrgDepEngOff_Lifetime_Value
        (AeITIR_E_GrdEnrgyChrgDepEngOff_Lifetime);

    /* Outport: '<Root>/VeITIR_E_GrdEnrgyChrgDepEngOff_Recent' incorporates:
     *  DataStoreRead: '<S7>/Data Store Read14'
     *  SignalConversion generated from: '<S2>/GrdEnrgyChrgDepEngOff_Recent_Init'
     */
    (void)Rte_Write_VeITIR_E_GrdEnrgyChrgDepEngOff_Recent_Value
        (ITIR_ac_DW.NeITIR_E_GrdEnrgyChrgDepEngOff_Recent);

    /* Outport: '<Root>/VeITIR_E_GrdEnrgyChrgDepEngOn_Lifetime' incorporates:
     *  DataStoreRead: '<S7>/Data Store Read17'
     *  SignalConversion generated from: '<S2>/GrdEnrgyChrgDepEngOn_Lifetime_Init'
     */
    (void)Rte_Write_VeITIR_E_GrdEnrgyChrgDepEngOn_Lifetime_Value
        (AeITIR_E_GrdEnrgyChrgDepEngOn_Lifetime);

    /* Outport: '<Root>/VeITIR_E_GrdEnrgyChrgDepEngOn_Recent' incorporates:
     *  DataStoreRead: '<S7>/Data Store Read16'
     *  SignalConversion generated from: '<S2>/GrdEnrgyChrgDepEngOn_Recent_Init'
     */
    (void)Rte_Write_VeITIR_E_GrdEnrgyChrgDepEngOn_Recent_Value
        (ITIR_ac_DW.NeITIR_E_GrdEnrgyChrgDepEngOn_Recent);

    /* Outport: '<Root>/VeITIR_E_GrdEnrgyIntoBatt_Lifetime' incorporates:
     *  DataStoreRead: '<S7>/Data Store Read19'
     *  SignalConversion generated from: '<S2>/GrdEnrgyIntoBatt_Lifetime_Init'
     */
    (void)Rte_Write_VeITIR_E_GrdEnrgyIntoBatt_Lifetime_Value
        (AeITIR_E_GrdEnrgyIntoBatt_Lifetime);

    /* Outport: '<Root>/VeITIR_E_GrdEnrgyIntoBatt_Recent' incorporates:
     *  DataStoreRead: '<S7>/Data Store Read18'
     *  SignalConversion generated from: '<S2>/GrdEnrgyIntoBatt_Recent_Init'
     */
    (void)Rte_Write_VeITIR_E_GrdEnrgyIntoBatt_Recent_Value
        (ITIR_ac_DW.NeITIR_E_GrdEnrgyIntoBatt_Recent);

    /* Outport: '<Root>/VeITIR_Cnt_IgnCycl_Lifetime' incorporates:
     *  DataStoreRead: '<S7>/Data Store Read5'
     *  SignalConversion generated from: '<S2>/IgnCycl_Lifetime_Init'
     */
    (void)Rte_Write_VeITIR_Cnt_IgnCycl_Lifetime_Value
        (AeITIR_Cnt_IgnCycl_Lifetime);

    /* Outport: '<Root>/VeITIR_Cnt_IgnCycl_Recent' incorporates:
     *  DataStoreRead: '<S7>/Data Store Read1'
     *  SignalConversion generated from: '<S2>/IgnCycl_Recent_Init'
     */
    (void)Rte_Write_VeITIR_Cnt_IgnCycl_Recent_Value
        (ITIR_ac_DW.NeITIR_Cnt_IgnCycl_Recent);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeITIR_e_HCPVtdFreeze' incorporates:
     *  SignalConversion generated from: '<S2>/VeITIR_e_HCPVtdFreeze_Out_Init'
     *  SignalConversion generated from: '<S8>/VeITIR_e_HCPVtdFreeze_Out_Init'
     */
    (void)Rte_Write_VeITIR_e_HCPVtdFreeze_Value
        (ITIR_ac_B.OutportBufferForVeITIR_e_HCPVtdFreeze_Ou);

    /* Outport: '<Root>/VeITIR_Cnt_FuelConsChrgDep_Lifetime' incorporates:
     *  SignalConversion: '<S2>/Signal Conversion'
     */
    (void)Rte_Write_VeITIR_Cnt_FuelConsChrgDep_Lifetime_Value
        (AeITIR_Cnt_FuelConsChrgDep_Lifetime_Init);

    /* Outport: '<Root>/VeITIR_Cnt_FuelConsChrgDep_Recent' incorporates:
     *  SignalConversion: '<S2>/Signal Conversion1'
     */
    (void)Rte_Write_VeITIR_Cnt_FuelConsChrgDep_Recent_Value
        (VeITIR_Cnt_FuelConsChrgDep_Recent_Init);

    /* Outport: '<Root>/VeITIR_Cnt_FuelConsChrgIncrease_Lifetime' incorporates:
     *  SignalConversion: '<S2>/Signal Conversion2'
     */
    (void)Rte_Write_VeITIR_Cnt_FuelConsChrgIncrease_Lifetime_Value
        (AeITIR_Cnt_FuelConsChrgIncrease_Lifetime_Init);

    /* Outport: '<Root>/VeITIR_Cnt_FuelConsChrgIncrease_Recent' incorporates:
     *  SignalConversion: '<S2>/Signal Conversion3'
     */
    (void)Rte_Write_VeITIR_Cnt_FuelConsChrgIncrease_Recent_Value
        (VeITIR_Cnt_FuelConsChrgIncrease_Recent_Init);

    /* SignalConversion generated from: '<S2>/FuelConsChrgDep_Lifetime_Init_write' */
    Rte_IrvWrite_ITIR_PwrOn_FuelConsChrgDep_Lifetime_Init_write_IRV
        (AeITIR_Cnt_FuelConsChrgDep_Lifetime_Init);

    /* SignalConversion generated from: '<S2>/FuelConsChrgDep_Recent_Init_write' */
    Rte_IrvWrite_ITIR_PwrOn_FuelConsChrgDep_Recent_Init_write_IRV
        (VeITIR_Cnt_FuelConsChrgDep_Recent_Init);

    /* SignalConversion generated from: '<S2>/FuelConsChrgIncrease_Lifetime_Init_write' */
    Rte_IrvWrite_ITIR_PwrOn_FuelConsChrgIncrease_Lifetime_Init_write_IRV
        (AeITIR_Cnt_FuelConsChrgIncrease_Lifetime_Init);

    /* SignalConversion generated from: '<S2>/FuelConsChrgIncrease_Recent_Init_write' */
    Rte_IrvWrite_ITIR_PwrOn_FuelConsChrgIncrease_Recent_Init_write_IRV
        (VeITIR_Cnt_FuelConsChrgIncrease_Recent_Init);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Output function */
FUNC(void, ITIR_CODE) Routine_RC130B_OBD2PIDsReset(void)
{
    TeDCAB_e_RoutineOpType tmpRead;

    /* Inport: '<Root>/VeDCAB_e_Routine_RC130B_OBD2PIDsReset_Op' */
    (void)Rte_Read_VeDCAB_e_Routine_RC130B_OBD2PIDsReset_Op_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/Routine_RC130B_OBD2PIDsReset' incorporates:
     *  SubSystem: '<Root>/RC130B_OBD2PIDsReset'
     */
    /* Outputs for IfAction SubSystem: '<S4>/IfAct' incorporates:
     *  ActionPort: '<S90>/Action Port'
     */
    /* If: '<S4>/If' incorporates:
     *  Constant: '<S89>/Constant'
     *  DataStoreWrite: '<S90>/Data Store Write'
     *  Inport: '<Root>/VeDCAB_e_Routine_RC130B_OBD2PIDsReset_Op'
     *  RelationalOperator: '<S4>/Equal'
     */
    VeITIR_b_ResetRequest_Routine130B = ((((uint32)tmpRead) ==
        CeDCAB_e_Routine_Start) || (VeITIR_b_ResetRequest_Routine130B));

    /* End of Outputs for SubSystem: '<S4>/IfAct' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/Routine_RC130B_OBD2PIDsReset' */
}

/* Model initialize function */
FUNC(void, ITIR_CODE) ITIR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/ITIR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S8>/VeITIR_e_HCPVtdFreeze_Out_Init' incorporates:
     *  Constant: '<S8>/Const14'
     */
    ITIR_ac_B.OutportBufferForVeITIR_e_HCPVtdFreeze_Ou = ITIR_ac_ConstB.Const14;

    /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* SystemInitialize for SignalConversion generated from: '<S2>/FuelConsChrgDep_Lifetime_Init_write' */
    Rte_IrvWrite_ITIR_ac_Init_FuelConsChrgDep_Lifetime_Init_write_IRV
        (AeITIR_Cnt_FuelConsChrgDep_Lifetime_Init);

    /* SystemInitialize for SignalConversion generated from: '<S2>/FuelConsChrgDep_Recent_Init_write' */
    Rte_IrvWrite_ITIR_ac_Init_FuelConsChrgDep_Recent_Init_write_IRV
        (VeITIR_Cnt_FuelConsChrgDep_Recent_Init);

    /* SystemInitialize for SignalConversion generated from: '<S2>/FuelConsChrgIncrease_Lifetime_Init_write' */
    Rte_IrvWrite_ITIR_ac_Init_FuelConsChrgIncrease_Lifetime_Init_write_IRV
        (AeITIR_Cnt_FuelConsChrgIncrease_Lifetime_Init);

    /* SystemInitialize for SignalConversion generated from: '<S2>/FuelConsChrgIncrease_Recent_Init_write' */
    Rte_IrvWrite_ITIR_ac_Init_FuelConsChrgIncrease_Recent_Init_write_IRV
        (VeITIR_Cnt_FuelConsChrgIncrease_Recent_Init);

    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Outport: '<Root>/VeITIR_e_HCPVtdFreeze' incorporates:
     *  Merge: '<Root>/Merge_Outport_55'
     */
    (void)Rte_Write_VeITIR_e_HCPVtdFreeze_Value(CePLTR_e_NoReset);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
