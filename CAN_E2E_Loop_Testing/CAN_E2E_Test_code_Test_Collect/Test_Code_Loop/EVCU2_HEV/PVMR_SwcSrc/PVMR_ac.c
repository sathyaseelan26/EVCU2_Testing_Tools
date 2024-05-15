/*
 * File: PVMR_ac.c
 *
 * Code generated for Simulink model 'PVMR_ac'.
 *
 * Model version                  : 9.18
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 18:43:13 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PVMR_ac.h"
#include "look1_iflf_binlcapw.h"

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_PVMR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(float32, PVMR_VAR_INIT) KaPVMR_k_InitPMatrix[16] =
{
    1000.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1000.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1000.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 1000.0F
} ;                                    /* Referenced by: '<S112>/Calib' */

static volatile CONST(float32, PVMR_VAR_INIT) KaPVMR_k_InitXSlope[2] =
{
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S53>/Calib' */

static volatile CONST(float32, PVMR_VAR_INIT) KaPVMR_k_KfMassEst[8] =
{
    0.0016F, 0.0027F, 0.0044F, 0.0064F, 0.0016F, 0.002F, 0.002F, 0.002F
} ;                                    /* Referenced by: '<S41>/Calib' */

static volatile CONST(float32, PVMR_VAR_INIT) KePVMR_F_A_RLSMax = 500.0F;/* Referenced by: '<S82>/Calib' */
static volatile CONST(float32, PVMR_VAR_INIT) KePVMR_F_A_RLSMin = 0.0F;/* Referenced by: '<S83>/Calib' */
static volatile CONST(float32, PVMR_VAR_INIT) KePVMR_F_B_RLSMax = 50.0F;/* Referenced by: '<S84>/Calib' */
static volatile CONST(float32, PVMR_VAR_INIT) KePVMR_F_B_RLSMin = -50.0F;/* Referenced by: '<S85>/Calib' */
static volatile CONST(float32, PVMR_VAR_INIT) KePVMR_F_C_RLSMax = 10.0F;/* Referenced by: '<S86>/Calib' */
static volatile CONST(float32, PVMR_VAR_INIT) KePVMR_F_C_RLSMin = 0.0F;/* Referenced by: '<S87>/Calib' */
static volatile CONST(float32, PVMR_VAR_INIT) KePVMR_F_MassCalcEnblMaxDriveForce
    = 20000.0F;                        /* Referenced by: '<S126>/Calib' */
static volatile CONST(float32, PVMR_VAR_INIT) KePVMR_F_MassCalcEnblMinDriveForce
    = -5000.0F;                        /* Referenced by:
                                        * '<S71>/Calib'
                                        * '<S127>/Calib'
                                        */
static volatile CONST(float32, PVMR_VAR_INIT) KePVMR_I_WheelsInertia = 2.463F;/* Referenced by: '<S39>/Calib' */
static volatile CONST(float32, PVMR_VAR_INIT) KePVMR_a_MassCalcEnblMaxAccel =
    8.0F;                              /* Referenced by: '<S128>/Calib' */
static volatile CONST(float32, PVMR_VAR_INIT) KePVMR_a_MassCalcEnblMaxAccelKF =
    0.008F;                            /* Referenced by: '<S72>/Calib' */
static volatile CONST(float32, PVMR_VAR_INIT) KePVMR_a_MassCalcEnblMinAccel =
    -2.0F;                             /* Referenced by: '<S129>/Calib' */
static volatile CONST(float32, PVMR_VAR_INIT) KePVMR_a_MassCalcEnblMinAccelKF =
    -0.01F;                            /* Referenced by: '<S73>/Calib' */
static volatile CONST(boolean, PVMR_VAR_INIT) KePVMR_b_MassEstKlmnFltrEnbl = 0;/* Referenced by: '<S11>/Calib' */
static volatile CONST(boolean, PVMR_VAR_INIT) KePVMR_b_ResetOvrrd = 0;/* Referenced by:
                                                                      * '<S52>/Calib'
                                                                      * '<S110>/Calib'
                                                                      */
static volatile CONST(boolean, PVMR_VAR_INIT) KePVMR_b_SelectAccelSrc = 0;/* Referenced by: '<S130>/Calib' */
static volatile CONST(float32, PVMR_VAR_INIT) KePVMR_k_AccelVehFiltCoeff = 0.06F;/* Referenced by: '<S17>/Calib' */
static volatile CONST(float32, PVMR_VAR_INIT) KePVMR_k_AccelWheelScale = 1.0F;/* Referenced by: '<S18>/Calib' */
static volatile CONST(float32, PVMR_VAR_INIT) KePVMR_k_CoastDownCoeffF0 = 250.0F;/* Referenced by: '<S43>/Calib' */
static volatile CONST(float32, PVMR_VAR_INIT) KePVMR_k_CoastDownCoeffF1 = 1.8F;/* Referenced by: '<S44>/Calib' */
static volatile CONST(float32, PVMR_VAR_INIT) KePVMR_k_CoastDownCoeffF2 = 0.09F;/* Referenced by: '<S45>/Calib' */
static volatile CONST(float32, PVMR_VAR_INIT) KePVMR_k_InitEstmA = 32.59F;/* Referenced by: '<S113>/Calib' */
static volatile CONST(float32, PVMR_VAR_INIT) KePVMR_k_InitEstmB = 0.8379F;/* Referenced by: '<S114>/Calib' */
static volatile CONST(float32, PVMR_VAR_INIT) KePVMR_k_InitEstmC = 0.02543F;/* Referenced by: '<S115>/Calib' */
static volatile CONST(float32, PVMR_VAR_INIT) KePVMR_k_InitEstmM = 2722.0F;/* Referenced by:
                                                                      * '<S36>/Calib'
                                                                      * '<S116>/Calib'
                                                                      */
static volatile CONST(float32, PVMR_VAR_INIT) KePVMR_k_KfSlopeAx1P = 0.0907F;/* Referenced by: '<S57>/Calib' */
static volatile CONST(float32, PVMR_VAR_INIT) KePVMR_k_KfSlopeAx2P = -0.1632F;/* Referenced by: '<S58>/Calib' */
static volatile CONST(float32, PVMR_VAR_INIT) KePVMR_k_LongAccelFiltCoeff = 0.1F;/* Referenced by: '<S19>/Calib' */
static volatile CONST(float32, PVMR_VAR_INIT) KePVMR_k_LongAccelScale = 1.0F;/* Referenced by: '<S20>/Calib' */
static volatile CONST(float32, PVMR_VAR_INIT) KePVMR_k_LwStrtnEstSlopeAx =
    -0.25F;                            /* Referenced by: '<S59>/Calib' */
static volatile CONST(float32, PVMR_VAR_INIT) KePVMR_k_UpprStrtnEstSlopeAx =
    0.25F;                             /* Referenced by: '<S60>/Calib' */
static volatile CONST(float32, PVMR_VAR_INIT) KePVMR_k_VehSpdFiltCoeff = 0.3F;/* Referenced by: '<S21>/Calib' */
static volatile CONST(float32, PVMR_VAR_INIT) KePVMR_k_gravconst = 9.81F;/* Referenced by:
                                                                      * '<S23>/Calib'
                                                                      * '<S61>/Calib'
                                                                      */
static volatile CONST(float32, PVMR_VAR_INIT) KePVMR_k_hgrThrshldDerAxleTq =
    2000.0F;                           /* Referenced by: '<S74>/Calib' */
static volatile CONST(float32, PVMR_VAR_INIT) KePVMR_k_highPssFltrCoeffU =
    47.8114F;                          /* Referenced by: '<S75>/Calib' */
static volatile CONST(float32, PVMR_VAR_INIT) KePVMR_k_highPssFltrCoeffY =
    0.5219F;                           /* Referenced by: '<S76>/Calib' */
static volatile CONST(float32, PVMR_VAR_INIT) KePVMR_k_lwrThrshldDerAxleTq =
    -200.0F;                           /* Referenced by: '<S77>/Calib' */
static volatile CONST(float32, PVMR_VAR_INIT) KePVMR_m_MassRLSMax = 10000.0F;/* Referenced by:
                                                                      * '<S24>/Calib'
                                                                      * '<S88>/Calib'
                                                                      */
static volatile CONST(float32, PVMR_VAR_INIT) KePVMR_m_MassRLSMin = 800.0F;/* Referenced by:
                                                                      * '<S25>/Calib'
                                                                      * '<S89>/Calib'
                                                                      */
static volatile CONST(float32, PVMR_VAR_INIT) KePVMR_t_RLSInhbtTm = 1.0F;/* Referenced by: '<S102>/Calib' */
static volatile CONST(float32, PVMR_VAR_INIT) KePVMR_t_RLSdT = 0.025F;/* Referenced by:
                                                                      * '<S48>/Calib'
                                                                      * '<S103>/Calib'
                                                                      * '<S63>/Calib'
                                                                      */
static volatile CONST(float32, PVMR_VAR_INIT) KePVMR_v_MassCalcEnblVehSpdHi =
    100.0F;                            /* Referenced by:
                                        * '<S78>/Calib'
                                        * '<S131>/Calib'
                                        */
static volatile CONST(float32, PVMR_VAR_INIT) KePVMR_v_MassCalcEnblVehSpdLo =
    0.17F;                             /* Referenced by:
                                        * '<S79>/Calib'
                                        * '<S132>/Calib'
                                        */
static volatile CONST(float32, PVMR_VAR_INIT) KePVMR_v_RLS_FrgtFctr = 0.9F;/* Referenced by: '<S117>/Calib' */
static volatile CONST(float32, PVMR_VAR_INIT) KtPVMR_K_arcsintodeg[24] =
{
    0.0F, 1.0F, 3.0F, 5.0F, 7.0F, 9.0F, 11.0F, 13.0F, 15.0F, 17.0F, 19.0F, 21.0F,
    23.0F, 25.0F, 27.0F, 29.0F, 31.0F, 33.0F, 35.0F, 37.0F, 39.0F, 41.0F, 43.0F,
    45.0F
} ;                                    /* Referenced by:
                                        * '<S26>/Vector'
                                        * '<S133>/Vector'
                                        */

static volatile CONST(float32, PVMR_VAR_INIT) KxPVMR_K_arcsintodeg[24] =
{
    0.0F, 0.017F, 0.052F, 0.087F, 0.122F, 0.156F, 0.191F, 0.225F, 0.259F, 0.292F,
    0.326F, 0.358F, 0.391F, 0.423F, 0.454F, 0.485F, 0.515F, 0.545F, 0.574F,
    0.602F, 0.629F, 0.656F, 0.682F, 0.707F
} ;                                    /* Referenced by:
                                        * '<S26>/Vector'
                                        * '<S133>/Vector'
                                        */

#define STOP_SEC_CALIB_UNSPECIFIED_PVMR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PVMR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(float32, PVMR_VAR_INIT) VePVMR_F_CoastDownA;/* '<S91>/Switch' */
static VAR(float32, PVMR_VAR_INIT) VePVMR_F_CoastDownB;/* '<S92>/Switch' */
static VAR(float32, PVMR_VAR_INIT) VePVMR_F_CoastDownC;/* '<S93>/Switch' */
static VAR(float32, PVMR_VAR_INIT) VePVMR_F_Fdrive;/* '<S80>/Switch1' */
static VAR(float32, PVMR_VAR_INIT) VePVMR_a_AccelWheelFilt;/* '<S15>/Switch1' */
static VAR(float32, PVMR_VAR_INIT) VePVMR_a_FiltAccel;/* '<S98>/Switch3' */
static VAR(float32, PVMR_VAR_INIT) VePVMR_a_LongAccelFilt;/* '<S14>/Switch1' */
static VAR(boolean, PVMR_VAR_INIT) VePVMR_b_EnableEstMass;/* '<S34>/Logical2' */
static VAR(boolean, PVMR_VAR_INIT) VePVMR_b_EnableEstSlopeAx;/* '<S34>/Comparison3' */
static VAR(boolean, PVMR_VAR_INIT) VePVMR_b_ShiftInProgress;/* '<S22>/Equal2' */
static VAR(boolean, PVMR_VAR_INIT) VePVMR_b_VehMassHold;/* '<S99>/AND3' */
static VAR(boolean, PVMR_VAR_INIT) VePVMR_b_VehMassRLSValid;/* '<S98>/Logical2' */
static VAR(boolean, PVMR_VAR_INIT) VePVMR_b_VehMassReset;/* '<S94>/Logical1' */
static VAR(float32, PVMR_VAR_INIT) VePVMR_m_VehicleMassRLS;/* '<S90>/Switch' */
static VAR(float32, PVMR_VAR_INIT) VePVMR_phi_EstimSlopeAngle;/* '<S134>/Switch' */
static VAR(float32, PVMR_VAR_INIT) VePVMR_phi_EstimSlopeAngleKF;/* '<S12>/Product' */
static VAR(float32, PVMR_VAR_INIT) VePVMR_v_VehSpdmph;/* '<S98>/kmh2mph' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PVMR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_PVMR
#include "MemMap.h"

CONST(ConstP_PVMR_ac_T, PVMR_VAR_INIT) PVMR_ac_ConstP =
{
    /* Expression: single([1 0 0 0;0 1 0 0; 0 0 1 0; 0 0 0 1])
     * Referenced by: '<S111>/Constant Value1'
     */
    {
        1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F,
        0.0F, 0.0F, 0.0F, 1.0F
    }
};

#define STOP_SEC_CONST_UNSPECIFIED_PVMR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PVMR
#include "MemMap.h"

VAR(B_PVMR_ac_T, PVMR_VAR_INIT) PVMR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PVMR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PVMR
#include "MemMap.h"

VAR(DW_PVMR_ac_T, PVMR_VAR_INIT) PVMR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PVMR
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, PVMR_CODE) PVMR_FastTEF(void) /* Explicit Task: FastTEF */
{
    float32 rtb_TmpSignalConversionAtVeVSDR;

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/PVMR_FastTEF'
     */
    /* SignalConversion generated from: '<S1>/VeVSDR_dn_PrimNodot' incorporates:
     *  Inport: '<Root>/VeVSDR_dn_PrimNodot'
     */
    (void)Rte_Read_VeVSDR_dn_PrimNodot_Value(&rtb_TmpSignalConversionAtVeVSDR);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/PVMC_DtrmnNoDotPredicted'
     */
    /* Outport: '<Root>/VePVMR_dn_NoDotPrdtd' incorporates:
     *  Gain: '<S8>/Gain'
     *  SignalConversion generated from: '<S1>/NoDotPred'
     */
    (void)Rte_Write_VePVMR_dn_NoDotPrdtd_Value(rtb_TmpSignalConversionAtVeVSDR);

    /* Outport: '<Root>/VePVMR_dn_NoDotPrdtdStrategic' incorporates:
     *  Gain: '<S7>/Gain'
     *  SignalConversion generated from: '<S1>/NoDotPredStrat'
     */
    (void)Rte_Write_VePVMR_dn_NoDotPrdtdStrategic_Value
        (rtb_TmpSignalConversionAtVeVSDR);

    /* Outport: '<Root>/VePVMR_dn_NoDotPrdtdTactical' incorporates:
     *  Gain: '<S6>/Gain'
     *  SignalConversion generated from: '<S1>/NoDotPredTact'
     */
    (void)Rte_Write_VePVMR_dn_NoDotPrdtdTactical_Value
        (rtb_TmpSignalConversionAtVeVSDR);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
}

/* Model step function for TID2 */
FUNC(void, PVMR_CODE) PVMR_MedTED(void) /* Explicit Task: MedTED */
{
    sint32 i;
    sint32 i_0;
    sint32 i_1;
    sint32 tmp_2;
    sint32 tmp_3;
    float32 tmp[16];
    float32 tmp_0[16];
    float32 rtb_Reshape[4];
    float32 rtb_Switch1_m[4];
    float32 rtb_TmpSignalConversionAtMatrix[4];
    float32 rtb_Merge[2];
    float32 rtb_Merge4[2];
    float32 rtb_Threshold0_i[2];
    float32 rtb_ConvVeAXLR_M_ActualAxleTrq1;
    float32 rtb_Merge2;
    float32 rtb_Merge3;
    float32 rtb_Product_bv;
    float32 rtb_Summation;
    float32 rtb_Switch1_c;
    float32 rtb_Switch1_es;
    float32 rtb_TmpSignalConversionAtVeAXLR;
    float32 rtb_TmpSignalConversionAtVeCSVR;
    float32 rtb_TmpSignalConversionAtVeCS_b;
    float32 rtb_TmpSignalConversionAtVeCS_l;
    TeBRKR_e_BrkPdl_Stat rtb_TmpSignalConversionAtVeBR_d;
    TeHCCR_e_ClutchStatus rtb_TmpSignalConversionAtVeTR_i;
    TeTRGR_e_TransRangeState rtb_TmpSignalConversionAtVeTRGR;
    TeTRNR_e_TCMGearStat rtb_TmpSignalConversionAtVeTRNR;
    TeTRNR_e_TCMGearStat tmpRead;
    boolean rtb_AND_kv;
    boolean rtb_AND_l;
    boolean rtb_Logical10;
    boolean rtb_OR1_b;
    boolean rtb_OR1_cb;
    boolean rtb_TmpSignalConversionAtVeBRKR;
    boolean rtb_TmpSignalConversionAtVeBTQR;
    boolean rtb_TmpSignalConversionAtVeHPMR;
    boolean tmp_1;

    /* Inport: '<Root>/VePLTR_a_LongAccel' */
    (void)Rte_Read_VePLTR_a_LongAccel_Value(&rtb_Summation);

    /* Inport: '<Root>/VeCSVR_v_VehSpdRaw' */
    (void)Rte_Read_VeCSVR_v_VehSpdRaw_Value(&rtb_Product_bv);

    /* Inport: '<Root>/VeCSVR_a_VehAccel' */
    (void)Rte_Read_VeCSVR_a_VehAccel_Value(&rtb_ConvVeAXLR_M_ActualAxleTrq1);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/PVMR_MedTED'
     */
    /* SignalConversion generated from: '<S2>/VeAXLR_M_ActAxleOutputTrq' incorporates:
     *  Inport: '<Root>/VeAXLR_M_ActAxleOutputTrq'
     */
    (void)Rte_Read_VeAXLR_M_ActAxleOutputTrq_Value
        (&rtb_TmpSignalConversionAtVeAXLR);

    /* SignalConversion generated from: '<S2>/VeTRGR_e_VldtdTransRngSt' incorporates:
     *  Inport: '<Root>/VeTRGR_e_VldtdTransRngSt'
     */
    (void)Rte_Read_VeTRGR_e_VldtdTransRngSt_Value
        (&rtb_TmpSignalConversionAtVeTRGR);

    /* SignalConversion generated from: '<S2>/VeHPMR_b_PropSysActv' incorporates:
     *  Inport: '<Root>/VeHPMR_b_PropSysActv'
     */
    (void)Rte_Read_VeHPMR_b_PropSysActv_Value(&rtb_TmpSignalConversionAtVeHPMR);

    /* SignalConversion generated from: '<S2>/VeBRKR_e_BrkPedalDscrtInpt' incorporates:
     *  Inport: '<Root>/VeBRKR_e_BrkPedalDscrtInpt'
     */
    (void)Rte_Read_VeBRKR_e_BrkPedalDscrtInpt_Value
        (&rtb_TmpSignalConversionAtVeBR_d);

    /* SignalConversion generated from: '<S2>/VeCSVR_l_WhlRadius' incorporates:
     *  Inport: '<Root>/VeCSVR_l_WhlRadius'
     */
    (void)Rte_Read_VeCSVR_l_WhlRadius_Value(&rtb_TmpSignalConversionAtVeCSVR);

    /* SignalConversion generated from: '<S2>/VeBRKR_b_ABSActive' incorporates:
     *  Inport: '<Root>/VeBRKR_b_ABSActive'
     */
    (void)Rte_Read_VeBRKR_b_ABSActive_Value(&rtb_TmpSignalConversionAtVeBRKR);

    /* SignalConversion generated from: '<S2>/VeBTQR_b_ESCEvntActv' incorporates:
     *  Inport: '<Root>/VeBTQR_b_ESCEvntActv'
     */
    (void)Rte_Read_VeBTQR_b_ESCEvntActv_Value(&rtb_TmpSignalConversionAtVeBTQR);

    /* SignalConversion generated from: '<S2>/VeCSVR_v_RightFrontWheel' incorporates:
     *  Inport: '<Root>/VeCSVR_v_RightFrontWheel'
     */
    (void)Rte_Read_VeCSVR_v_RightFrontWheel_Value
        (&rtb_TmpSignalConversionAtVeCS_l);

    /* SignalConversion generated from: '<S2>/VeCSVR_v_LeftFrontWheel' incorporates:
     *  Inport: '<Root>/VeCSVR_v_LeftFrontWheel'
     */
    (void)Rte_Read_VeCSVR_v_LeftFrontWheel_Value
        (&rtb_TmpSignalConversionAtVeCS_b);

    /* SignalConversion generated from: '<S2>/VeTRNR_e_ActualGear' incorporates:
     *  Inport: '<Root>/VeTRNR_e_ActualGear'
     */
    (void)Rte_Read_VeTRNR_e_ActualGear_Value(&rtb_TmpSignalConversionAtVeTRNR);

    /* SignalConversion generated from: '<S2>/VeTRNR_e_ILEStat' incorporates:
     *  Inport: '<Root>/VeTRNR_e_ILEStat'
     */
    (void)Rte_Read_VeTRNR_e_ILEStat_Value(&rtb_TmpSignalConversionAtVeTR_i);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/PVMRMassEstimation'
     */
    /* Outputs for Atomic SubSystem: '<S10>/Digital Lowpass Reset Enabled1' */
    /* Switch: '<S27>/Switch1' incorporates:
     *  UnitDelay: '<S14>/Unit Delay'
     */
    rtb_Switch1_c = PVMR_ac_DW.UnitDelay_DSTATE_p;

    /* Switch: '<S14>/Switch1' incorporates:
     *  Constant: '<S19>/Calib'
     *  Constant: '<S20>/Calib'
     *  Product: '<S10>/Product1'
     *  Product: '<S14>/Multiplication'
     *  Sum: '<S14>/Subtraction'
     *  Sum: '<S14>/Summation'
     */
    VePVMR_a_LongAccelFilt = (((rtb_Summation / KePVMR_k_LongAccelScale) -
        rtb_Switch1_c) * KePVMR_k_LongAccelFiltCoeff) + rtb_Switch1_c;

    /* Update for UnitDelay: '<S14>/Unit Delay' */
    PVMR_ac_DW.UnitDelay_DSTATE_p = VePVMR_a_LongAccelFilt;

    /* End of Outputs for SubSystem: '<S10>/Digital Lowpass Reset Enabled1' */

    /* Outputs for Atomic SubSystem: '<S10>/Digital Lowpass Reset Enabled2' */
    /* Switch: '<S27>/Switch1' incorporates:
     *  UnitDelay: '<S15>/Unit Delay'
     */
    rtb_Switch1_c = PVMR_ac_DW.UnitDelay_DSTATE_m;

    /* Switch: '<S15>/Switch1' incorporates:
     *  Constant: '<S17>/Calib'
     *  Constant: '<S18>/Calib'
     *  Product: '<S10>/Product2'
     *  Product: '<S15>/Multiplication'
     *  Sum: '<S15>/Subtraction'
     *  Sum: '<S15>/Summation'
     */
    VePVMR_a_AccelWheelFilt = (((rtb_ConvVeAXLR_M_ActualAxleTrq1 /
        KePVMR_k_AccelWheelScale) - rtb_Switch1_c) * KePVMR_k_AccelVehFiltCoeff)
        + rtb_Switch1_c;

    /* Update for UnitDelay: '<S15>/Unit Delay' */
    PVMR_ac_DW.UnitDelay_DSTATE_m = VePVMR_a_AccelWheelFilt;

    /* End of Outputs for SubSystem: '<S10>/Digital Lowpass Reset Enabled2' */

    /* Outputs for Atomic SubSystem: '<S10>/Digital Lowpass Reset Enabled3' */
    /* Sum: '<S16>/Summation' incorporates:
     *  Constant: '<S21>/Calib'
     *  Product: '<S16>/Multiplication'
     *  Sum: '<S16>/Subtraction'
     *  UnitDelay: '<S16>/Unit Delay'
     */
    rtb_Summation = ((rtb_Product_bv - PVMR_ac_DW.UnitDelay_DSTATE_fj) *
                     KePVMR_k_VehSpdFiltCoeff) + PVMR_ac_DW.UnitDelay_DSTATE_fj;

    /* Update for UnitDelay: '<S16>/Unit Delay' incorporates:
     *  Switch: '<S16>/Switch2'
     */
    PVMR_ac_DW.UnitDelay_DSTATE_fj = rtb_Summation;

    /* End of Outputs for SubSystem: '<S10>/Digital Lowpass Reset Enabled3' */

    /* Abs: '<S34>/Abs' incorporates:
     *  Abs: '<S98>/Abs'
     *  Sum: '<S34>/Summation2'
     */
    rtb_TmpSignalConversionAtVeCS_b = fabsf(rtb_TmpSignalConversionAtVeCS_l -
        rtb_TmpSignalConversionAtVeCS_b);

    /* RelationalOperator: '<S34>/Comparison3' incorporates:
     *  Abs: '<S34>/Abs'
     *  Constant: '<S34>/Constant Value'
     */
    VePVMR_b_EnableEstSlopeAx = (rtb_TmpSignalConversionAtVeCS_b < 2.0F);

    /* Gain: '<S34>/kmh2mps' incorporates:
     *  Gain: '<S98>/kmh2msec'
     *  UnitDelay: '<S10>/Unit Delay14'
     */
    rtb_Merge2 = 0.277777791F * PVMR_ac_DW.UnitDelay14_DSTATE;

    /* Logic: '<S31>/Logical10' incorporates:
     *  Constant: '<S51>/Constant'
     *  Constant: '<S52>/Calib'
     *  RelationalOperator: '<S31>/Comparison11'
     */
    rtb_Logical10 = ((KePVMR_b_ResetOvrrd) || (((uint32)
                       rtb_TmpSignalConversionAtVeTRGR) ==
                      CeTRGR_e_TransRangePark));

    /* Outputs for Atomic SubSystem: '<S30>/EdgeRising' */
    /* Logic: '<S46>/OR1' incorporates:
     *  UnitDelay: '<S46>/Unit Delay'
     */
    rtb_OR1_cb = !PVMR_ac_DW.UnitDelay_DSTATE_pj;

    /* Update for UnitDelay: '<S46>/Unit Delay' */
    PVMR_ac_DW.UnitDelay_DSTATE_pj = rtb_Logical10;

    /* End of Outputs for SubSystem: '<S30>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S30>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S49>/EdgeRising' */
    /* Logic: '<S50>/AND' incorporates:
     *  Logic: '<S50>/OR1'
     *  UnitDelay: '<S50>/Unit Delay'
     */
    rtb_AND_l = (rtb_TmpSignalConversionAtVeHPMR &&
                 (!PVMR_ac_DW.UnitDelay_DSTATE_k0));

    /* Update for UnitDelay: '<S50>/Unit Delay' */
    PVMR_ac_DW.UnitDelay_DSTATE_k0 = rtb_TmpSignalConversionAtVeHPMR;

    /* End of Outputs for SubSystem: '<S49>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S94>/Turn On Delay Time' */
    /* Logic: '<S49>/OR1' incorporates:
     *  Logic: '<S104>/OR1'
     */
    tmp_1 = !rtb_TmpSignalConversionAtVeHPMR;

    /* End of Outputs for SubSystem: '<S94>/Turn On Delay Time' */

    /* Switch: '<S49>/Switch1' incorporates:
     *  Logic: '<S49>/OR'
     *  Logic: '<S49>/OR1'
     */
    if (tmp_1 || rtb_AND_l)
    {
        /* Switch: '<S49>/Switch1' incorporates:
         *  Constant: '<S49>/Constant Value1'
         */
        rtb_TmpSignalConversionAtVeCS_l = 0.0F;
    }
    else
    {
        /* Switch: '<S49>/Switch1' incorporates:
         *  Constant: '<S30>/Constant Value'
         *  Constant: '<S48>/Calib'
         *  MinMax: '<S49>/Minimum'
         *  Sum: '<S49>/Summation'
         *  UnitDelay: '<S49>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeCS_l = fminf(2.0F, KePVMR_t_RLSdT +
            PVMR_ac_DW.UnitDelay_DSTATE_ir);
    }

    /* End of Switch: '<S49>/Switch1' */

    /* Logic: '<S49>/AND' incorporates:
     *  Constant: '<S30>/Constant Value'
     *  RelationalOperator: '<S49>/Greater  Than'
     */
    rtb_AND_l = (rtb_TmpSignalConversionAtVeHPMR &&
                 (rtb_TmpSignalConversionAtVeCS_l >= 2.0F));

    /* Update for UnitDelay: '<S49>/Unit Delay' */
    PVMR_ac_DW.UnitDelay_DSTATE_ir = rtb_TmpSignalConversionAtVeCS_l;

    /* End of Outputs for SubSystem: '<S30>/Turn On Delay Time' */

    /* Outputs for Atomic SubSystem: '<S30>/EdgeRising1' */
    /* Logic: '<S47>/OR1' incorporates:
     *  UnitDelay: '<S47>/Unit Delay'
     */
    rtb_OR1_b = !PVMR_ac_DW.UnitDelay_DSTATE_iq;

    /* Update for UnitDelay: '<S47>/Unit Delay' */
    PVMR_ac_DW.UnitDelay_DSTATE_iq = rtb_AND_l;

    /* Outputs for Atomic SubSystem: '<S30>/EdgeRising' */
    /* Logic: '<S30>/Logical1' incorporates:
     *  Logic: '<S46>/AND'
     *  Logic: '<S47>/AND'
     */
    rtb_Logical10 = ((rtb_Logical10 && rtb_OR1_cb) || (rtb_AND_l && rtb_OR1_b));

    /* End of Outputs for SubSystem: '<S30>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S30>/EdgeRising1' */

    /* If: '<S12>/If' incorporates:
     *  Gain: '<S32>/Gain'
     */
    if (VePVMR_b_EnableEstSlopeAx)
    {
        /* Outputs for IfAction SubSystem: '<S12>/SlopeEstimationFromAx' incorporates:
         *  ActionPort: '<S33>/Action Port'
         */
        /* Switch: '<S33>/Threshold =1' incorporates:
         *  Logic: '<S33>/Not'
         *  Switch: '<S33>/Threshold < 0'
         *  UnitDelay: '<S12>/Unit Delay4'
         */
        if (rtb_Logical10)
        {
            /* Switch: '<S33>/Threshold =1' incorporates:
             *  Constant: '<S53>/Calib'
             */
            for (i = 0; i < 2; i++)
            {
                rtb_Threshold0_i[i] = KaPVMR_k_InitXSlope[(i)];
            }
        }
        else
        {
            if (!PVMR_ac_DW.UnitDelay4_DSTATE_a)
            {
                /* Switch: '<S33>/Threshold < 0' incorporates:
                 *  Constant: '<S33>/Constant Value'
                 *  Gain: '<S34>/kmh2mps'
                 *  Selector: '<S33>/Selector2'
                 *  UnitDelay: '<S12>/Unit Delay5'
                 */
                rtb_Threshold0_i[0] = rtb_Merge2;
                rtb_Threshold0_i[1] = PVMR_ac_DW.UnitDelay5_DSTATE[1];
            }
            else
            {
                for (i = 0; i < 2; i++)
                {
                    /* Switch: '<S33>/Threshold < 0' incorporates:
                     *  UnitDelay: '<S12>/Unit Delay5'
                     */
                    rtb_Threshold0_i[i] = PVMR_ac_DW.UnitDelay5_DSTATE[i];
                }
            }

            /* Product: '<S54>/Product' incorporates:
             *  Constant: '<S33>/Constant Value1'
             *  Gain: '<S34>/kmh2mps'
             *  Selector: '<S33>/Selector3'
             *  Sum: '<S33>/Add'
             */
            rtb_Product_bv = rtb_Merge2 - rtb_Threshold0_i[0];

            /* Switch: '<S62>/Switch1' incorporates:
             *  Constant: '<S58>/Calib'
             *  Product: '<S54>/Product1'
             */
            rtb_TmpSignalConversionAtVeCS_l = rtb_Product_bv *
                KePVMR_k_KfSlopeAx2P;

            /* Product: '<S54>/Product' incorporates:
             *  Constant: '<S57>/Calib'
             */
            rtb_Product_bv *= KePVMR_k_KfSlopeAx1P;

            /* Sum: '<S33>/Add1' */
            rtb_Merge[0] = rtb_Product_bv + rtb_Threshold0_i[0];
            rtb_Merge[1] = rtb_TmpSignalConversionAtVeCS_l + rtb_Threshold0_i[1];

            /* Product: '<S55>/Product' incorporates:
             *  Constant: '<S60>/Calib'
             *  Constant: '<S61>/Calib'
             */
            rtb_TmpSignalConversionAtVeCS_l = KePVMR_k_UpprStrtnEstSlopeAx *
                KePVMR_k_gravconst;

            /* Product: '<S55>/Product1' incorporates:
             *  Constant: '<S59>/Calib'
             *  Constant: '<S61>/Calib'
             */
            rtb_Product_bv = KePVMR_k_gravconst * KePVMR_k_LwStrtnEstSlopeAx;

            /* Outputs for Atomic SubSystem: '<S55>/Limiter' */
            /* Switch: '<S62>/Switch1' incorporates:
             *  RelationalOperator: '<S62>/Relational Operator'
             */
            if (rtb_TmpSignalConversionAtVeCS_l >= rtb_Merge[1])
            {
                /* Switch: '<S62>/Switch1' */
                rtb_TmpSignalConversionAtVeCS_l = rtb_Merge[1];
            }

            /* End of Switch: '<S62>/Switch1' */
            /* End of Outputs for SubSystem: '<S55>/Limiter' */

            /* Switch: '<S33>/Threshold =1' */
            rtb_Threshold0_i[0] = rtb_Merge[0];

            /* Outputs for Atomic SubSystem: '<S55>/Limiter' */
            /* Switch: '<S62>/Switch' incorporates:
             *  RelationalOperator: '<S62>/Relational Operator1'
             */
            if (rtb_TmpSignalConversionAtVeCS_l > rtb_Product_bv)
            {
                /* Switch: '<S33>/Threshold =1' */
                rtb_Threshold0_i[1] = rtb_TmpSignalConversionAtVeCS_l;
            }
            else
            {
                /* Switch: '<S33>/Threshold =1' */
                rtb_Threshold0_i[1] = rtb_Product_bv;
            }

            /* End of Switch: '<S62>/Switch' */
            /* End of Outputs for SubSystem: '<S55>/Limiter' */
        }

        /* End of Switch: '<S33>/Threshold =1' */
        for (i = 0; i < 2; i++)
        {
            /* Merge: '<S12>/Merge4' incorporates:
             *  Gain: '<S33>/Gain'
             */
            rtb_Merge4[i] = rtb_Threshold0_i[i];
        }

        /* Merge: '<S12>/Merge' incorporates:
         *  Constant: '<S56>/Constant Value'
         *  Constant: '<S56>/Constant Value1'
         *  Constant: '<S63>/Calib'
         *  Gain: '<S33>/Gain1'
         *  Product: '<S56>/Product'
         *  Product: '<S56>/Product1'
         *  Selector: '<S56>/Selector'
         *  Selector: '<S56>/Selector1'
         *  Sum: '<S56>/Add2'
         */
        rtb_Merge[0] = ((KePVMR_t_RLSdT * VePVMR_a_LongAccelFilt) +
                        rtb_Threshold0_i[0]) - (KePVMR_t_RLSdT *
            rtb_Threshold0_i[1]);
        rtb_Merge[1] = rtb_Threshold0_i[1];

        /* End of Outputs for SubSystem: '<S12>/SlopeEstimationFromAx' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S12>/SlopeEstDisabled' incorporates:
         *  ActionPort: '<S32>/Action Port'
         */
        for (i = 0; i < 2; i++)
        {
            /* Gain: '<S32>/Gain' incorporates:
             *  Gain: '<S32>/Gain1'
             *  UnitDelay: '<S12>/Unit Delay5'
             */
            rtb_TmpSignalConversionAtVeCS_l = PVMR_ac_DW.UnitDelay5_DSTATE[i];

            /* Merge: '<S12>/Merge4' incorporates:
             *  Gain: '<S32>/Gain1'
             */
            rtb_Merge4[i] = rtb_TmpSignalConversionAtVeCS_l;
            rtb_Merge[i] = rtb_TmpSignalConversionAtVeCS_l;
        }

        /* End of Outputs for SubSystem: '<S12>/SlopeEstDisabled' */
    }

    /* End of If: '<S12>/If' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeTRNR_e_TargetGear' */
    (void)Rte_Read_VeTRNR_e_TargetGear_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/PVMR_MedTED'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/PVMRMassEstimation'
     */
    /* Lookup_n-D: '<S133>/Vector' incorporates:
     *  Constant: '<S12>/Constant Value'
     *  Constant: '<S23>/Calib'
     *  Product: '<S12>/Divide'
     *  Selector: '<S12>/Selector'
     */
    rtb_Product_bv = rtb_Merge4[1] / KePVMR_k_gravconst;

    /* DataTypeConversion: '<S12>/ConvVeAXLR_M_ActualAxleTrq1' */
    rtb_ConvVeAXLR_M_ActualAxleTrq1 = (float32)rtb_TmpSignalConversionAtVeTRNR;

    /* RelationalOperator: '<S22>/Equal2' incorporates:
     *  Inport: '<Root>/VeTRNR_e_TargetGear'
     */
    VePVMR_b_ShiftInProgress = (rtb_TmpSignalConversionAtVeTRNR != tmpRead);

    /* Outputs for Atomic SubSystem: '<S34>/Protected Division' */
    /* Switch: '<S80>/Switch1' incorporates:
     *  Constant: '<S80>/Constant Value'
     *  Constant: '<S80>/Constant Value1'
     *  Constant: '<S80>/Constant Value2'
     *  Constant: '<S80>/Constant Value3'
     *  Logic: '<S80>/AND'
     *  RelationalOperator: '<S80>/Greater Than or Equal '
     *  RelationalOperator: '<S80>/Greater Than or Equal 1'
     *  RelationalOperator: '<S80>/Not Equal'
     *  RelationalOperator: '<S80>/Not Equal1'
     *  Switch: '<S80>/Switch2'
     *  Switch: '<S80>/Switch3'
     */
    if ((rtb_TmpSignalConversionAtVeAXLR != 0.0F) &&
            (rtb_TmpSignalConversionAtVeCSVR != 0.0F))
    {
        /* Switch: '<S80>/Switch1' incorporates:
         *  Product: '<S80>/Division'
         */
        VePVMR_F_Fdrive = rtb_TmpSignalConversionAtVeAXLR /
            rtb_TmpSignalConversionAtVeCSVR;
    }
    else if (rtb_TmpSignalConversionAtVeAXLR > 0.0F)
    {
        /* Switch: '<S80>/Switch2' incorporates:
         *  Constant: '<S80>/MAXFLOAT'
         *  Switch: '<S80>/Switch1'
         */
        VePVMR_F_Fdrive = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtVeAXLR < 0.0F)
    {
        /* Switch: '<S80>/Switch3' incorporates:
         *  Constant: '<S80>/MINFLOAT'
         *  Switch: '<S80>/Switch1'
         *  Switch: '<S80>/Switch2'
         */
        VePVMR_F_Fdrive = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S80>/Switch1' incorporates:
         *  Constant: '<S80>/Constant Value4'
         *  Switch: '<S80>/Switch2'
         *  Switch: '<S80>/Switch3'
         */
        VePVMR_F_Fdrive = 0.0F;
    }

    /* End of Switch: '<S80>/Switch1' */
    /* End of Outputs for SubSystem: '<S34>/Protected Division' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VePLTR_b_LongAccelFA' */
    (void)Rte_Read_VePLTR_b_LongAccelFA_Value(&rtb_AND_kv);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/PVMR_MedTED'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/PVMRMassEstimation'
     */
    /* Sum: '<S34>/Summation3' incorporates:
     *  Constant: '<S75>/Calib'
     *  Constant: '<S76>/Calib'
     *  Product: '<S34>/Product'
     *  Product: '<S34>/Product2'
     *  Sum: '<S34>/Summation1'
     *  UnitDelay: '<S34>/Unit Delay'
     *  UnitDelay: '<S34>/Unit Delay1'
     */
    rtb_TmpSignalConversionAtVeCS_l = ((rtb_TmpSignalConversionAtVeAXLR -
        PVMR_ac_DW.UnitDelay_DSTATE) * KePVMR_k_highPssFltrCoeffU) +
        (PVMR_ac_DW.UnitDelay1_DSTATE * KePVMR_k_highPssFltrCoeffY);

    /* Logic: '<S34>/Logical1' incorporates:
     *  Logic: '<S98>/Logical1'
     */
    rtb_OR1_cb = !VePVMR_b_ShiftInProgress;

    /* Logic: '<S34>/Logical5' incorporates:
     *  Logic: '<S98>/Logical5'
     */
    rtb_TmpSignalConversionAtVeBRKR = !rtb_TmpSignalConversionAtVeBRKR;

    /* Logic: '<S34>/Logical7' incorporates:
     *  Logic: '<S98>/Logical7'
     */
    rtb_TmpSignalConversionAtVeBTQR = !rtb_TmpSignalConversionAtVeBTQR;

    /* Logic: '<S34>/Logical2' incorporates:
     *  Constant: '<S34>/Constant Value1'
     *  Constant: '<S34>/Constant Value2'
     *  Constant: '<S64>/Constant'
     *  Constant: '<S65>/Constant'
     *  Constant: '<S66>/Constant'
     *  Constant: '<S67>/Constant'
     *  Constant: '<S68>/Constant'
     *  Constant: '<S69>/Constant'
     *  Constant: '<S70>/Constant'
     *  Constant: '<S71>/Calib'
     *  Constant: '<S72>/Calib'
     *  Constant: '<S73>/Calib'
     *  Constant: '<S74>/Calib'
     *  Constant: '<S77>/Calib'
     *  Constant: '<S78>/Calib'
     *  Constant: '<S79>/Calib'
     *  Gain: '<S34>/kmh2mps'
     *  Logic: '<S34>/Logical'
     *  Logic: '<S34>/Logical1'
     *  Logic: '<S34>/Logical10'
     *  Logic: '<S34>/Logical3'
     *  Logic: '<S34>/Logical4'
     *  Logic: '<S34>/Logical5'
     *  Logic: '<S34>/Logical6'
     *  Logic: '<S34>/Logical7'
     *  Logic: '<S34>/Logical8'
     *  RelationalOperator: '<S34>/Comparison'
     *  RelationalOperator: '<S34>/Comparison1'
     *  RelationalOperator: '<S34>/Comparison10'
     *  RelationalOperator: '<S34>/Comparison11'
     *  RelationalOperator: '<S34>/Comparison12'
     *  RelationalOperator: '<S34>/Comparison13'
     *  RelationalOperator: '<S34>/Comparison14'
     *  RelationalOperator: '<S34>/Comparison15'
     *  RelationalOperator: '<S34>/Comparison16'
     *  RelationalOperator: '<S34>/Comparison2'
     *  RelationalOperator: '<S34>/Comparison4'
     *  RelationalOperator: '<S34>/Comparison5'
     *  RelationalOperator: '<S34>/Comparison6'
     *  RelationalOperator: '<S34>/Comparison7'
     *  RelationalOperator: '<S34>/Comparison8'
     *  RelationalOperator: '<S34>/Comparison9'
     *  UnitDelay: '<S10>/Unit Delay14'
     */
    VePVMR_b_EnableEstMass = (((((((((((((((KePVMR_a_MassCalcEnblMaxAccelKF <=
        VePVMR_a_LongAccelFilt) || (KePVMR_a_MassCalcEnblMinAccelKF >=
        VePVMR_a_LongAccelFilt)) && ((rtb_Merge2 <=
        KePVMR_v_MassCalcEnblVehSpdHi) && (rtb_Merge2 >=
        KePVMR_v_MassCalcEnblVehSpdLo))) && (VePVMR_F_Fdrive >=
        KePVMR_F_MassCalcEnblMinDriveForce)) && (((uint32)
        rtb_TmpSignalConversionAtVeBR_d) == CeBRKR_e_BrkNotApplied)) &&
        ((((((uint32)rtb_TmpSignalConversionAtVeTRGR) !=
            CeTRGR_e_TransRangeNeutral) && (((uint32)
        rtb_TmpSignalConversionAtVeTRGR) != CeTRGR_e_TransRangeReverse)) &&
          (((uint32)rtb_TmpSignalConversionAtVeTRGR) != CeTRGR_e_TransRangePark))
         && (((uint32)rtb_TmpSignalConversionAtVeTRGR) !=
             CeTRGR_e_TransRangeIllegal))) && rtb_OR1_cb) &&
        rtb_TmpSignalConversionAtVeBRKR) && rtb_TmpSignalConversionAtVeBTQR) &&
        (VePVMR_b_EnableEstSlopeAx)) && ((VePVMR_a_LongAccelFilt == 0.0F) ||
        (PVMR_ac_DW.UnitDelay14_DSTATE != 0.0F))) && ((((uint32)
        rtb_TmpSignalConversionAtVeTR_i) == CeHCCR_e_ClLocked) || (((uint32)
        rtb_TmpSignalConversionAtVeTR_i) == CeHCCR_e_ClActuated))) &&
        (KePVMR_k_hgrThrshldDerAxleTq >= rtb_TmpSignalConversionAtVeCS_l)) &&
        (rtb_TmpSignalConversionAtVeCS_l >= KePVMR_k_lwrThrshldDerAxleTq)) &&
        (!rtb_AND_kv));

    /* If: '<S12>/If2' incorporates:
     *  Logic: '<S12>/Logical1'
     */
    if ((VePVMR_b_EnableEstMass) || rtb_Logical10)
    {
        /* Outputs for IfAction SubSystem: '<S12>/MassEstimation' incorporates:
         *  ActionPort: '<S29>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S37>/Limiter' */
        /* Switch: '<S42>/Switch1' incorporates:
         *  Constant: '<S37>/Constant Value2'
         *  DataTypeConversion: '<S12>/ConvVeAXLR_M_ActualAxleTrq1'
         *  RelationalOperator: '<S42>/Relational Operator'
         */
        if (8.0F < ((float32)rtb_TmpSignalConversionAtVeTRNR))
        {
            /* Switch: '<S42>/Switch1' */
            rtb_ConvVeAXLR_M_ActualAxleTrq1 = 8.0F;
        }

        /* End of Switch: '<S42>/Switch1' */
        /* End of Outputs for SubSystem: '<S37>/Limiter' */

        /* Switch: '<S29>/Threshold =1' incorporates:
         *  Constant: '<S37>/Constant Value'
         *  Constant: '<S37>/Constant Value1'
         *  RelationalOperator: '<S37>/Comparison4'
         *  RelationalOperator: '<S42>/Relational Operator1'
         *  Selector: '<S37>/Selector'
         *  Switch: '<S37>/Threshold > 0'
         *  Switch: '<S42>/Switch'
         */
        if (rtb_Logical10)
        {
            /* Merge: '<S12>/Merge5' incorporates:
             *  Constant: '<S36>/Calib'
             */
            rtb_TmpSignalConversionAtVeCSVR = KePVMR_k_InitEstmM;
        }
        else
        {
            if (VePVMR_a_LongAccelFilt >= 0.0F)
            {
                /* Outputs for Atomic SubSystem: '<S37>/Limiter' */
                /* Selector: '<S37>/Selector' incorporates:
                 *  Constant: '<S37>/Constant Value1'
                 *  RelationalOperator: '<S42>/Relational Operator1'
                 *  Switch: '<S42>/Switch'
                 */
                if (rtb_ConvVeAXLR_M_ActualAxleTrq1 > 1.0F)
                {
                    i = (sint32)rtb_ConvVeAXLR_M_ActualAxleTrq1;
                }
                else
                {
                    i = 1;
                }

                /* End of Outputs for SubSystem: '<S37>/Limiter' */

                /* Switch: '<S37>/Threshold > 0' incorporates:
                 *  Constant: '<S41>/Calib'
                 *  Selector: '<S37>/Selector'
                 */
                rtb_ConvVeAXLR_M_ActualAxleTrq1 = KaPVMR_k_KfMassEst[i - 1];
            }
            else
            {
                /* Outputs for Atomic SubSystem: '<S37>/Limiter' */
                if (rtb_ConvVeAXLR_M_ActualAxleTrq1 > 1.0F)
                {
                    /* Selector: '<S37>/Selector' incorporates:
                     *  Switch: '<S42>/Switch'
                     */
                    i = (sint32)rtb_ConvVeAXLR_M_ActualAxleTrq1;
                }
                else
                {
                    /* Selector: '<S37>/Selector' incorporates:
                     *  Constant: '<S37>/Constant Value1'
                     *  Switch: '<S42>/Switch'
                     */
                    i = 1;
                }

                /* End of Outputs for SubSystem: '<S37>/Limiter' */

                /* Switch: '<S37>/Threshold > 0' incorporates:
                 *  Constant: '<S41>/Calib'
                 *  Gain: '<S37>/Gain'
                 *  Selector: '<S37>/Selector'
                 */
                rtb_ConvVeAXLR_M_ActualAxleTrq1 = -KaPVMR_k_KfMassEst[i - 1];
            }

            /* Outputs for Atomic SubSystem: '<S35>/Protected Division' */
            /* Switch: '<S40>/Switch1' incorporates:
             *  Constant: '<S37>/Constant Value1'
             *  Constant: '<S39>/Calib'
             *  Constant: '<S40>/Constant Value'
             *  Constant: '<S40>/Constant Value1'
             *  Constant: '<S40>/Constant Value2'
             *  Constant: '<S40>/Constant Value3'
             *  Logic: '<S40>/AND'
             *  RelationalOperator: '<S40>/Greater Than or Equal '
             *  RelationalOperator: '<S40>/Greater Than or Equal 1'
             *  RelationalOperator: '<S40>/Not Equal'
             *  RelationalOperator: '<S40>/Not Equal1'
             *  RelationalOperator: '<S42>/Relational Operator1'
             *  Selector: '<S37>/Selector'
             *  Switch: '<S40>/Switch2'
             *  Switch: '<S40>/Switch3'
             *  Switch: '<S42>/Switch'
             */
            if ((KePVMR_I_WheelsInertia != 0.0F) &&
                    (rtb_TmpSignalConversionAtVeCSVR != 0.0F))
            {
                /* Switch: '<S40>/Switch1' incorporates:
                 *  Product: '<S40>/Division'
                 */
                rtb_Switch1_es = KePVMR_I_WheelsInertia /
                    rtb_TmpSignalConversionAtVeCSVR;
            }
            else if (KePVMR_I_WheelsInertia > 0.0F)
            {
                /* Switch: '<S40>/Switch2' incorporates:
                 *  Constant: '<S40>/MAXFLOAT'
                 *  Switch: '<S40>/Switch1'
                 */
                rtb_Switch1_es = 3.402823466E+38F;
            }
            else if (KePVMR_I_WheelsInertia < 0.0F)
            {
                /* Switch: '<S40>/Switch3' incorporates:
                 *  Constant: '<S40>/MINFLOAT'
                 *  Switch: '<S40>/Switch1'
                 *  Switch: '<S40>/Switch2'
                 */
                rtb_Switch1_es = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S40>/Switch1' incorporates:
                 *  Constant: '<S40>/Constant Value4'
                 *  Switch: '<S40>/Switch2'
                 *  Switch: '<S40>/Switch3'
                 */
                rtb_Switch1_es = 0.0F;
            }

            /* End of Switch: '<S40>/Switch1' */
            /* End of Outputs for SubSystem: '<S35>/Protected Division' */

            /* Gain: '<S38>/mps2Kh' incorporates:
             *  Gain: '<S34>/kmh2mps'
             */
            rtb_Switch1_c = 3.6F * rtb_Merge2;

            /* Merge: '<S12>/Merge5' incorporates:
             *  Constant: '<S35>/Constant Value'
             *  Constant: '<S39>/Calib'
             *  Constant: '<S43>/Calib'
             *  Constant: '<S44>/Calib'
             *  Constant: '<S45>/Calib'
             *  Product: '<S35>/Divide1'
             *  Product: '<S35>/Product'
             *  Product: '<S35>/Product1'
             *  Product: '<S35>/Product2'
             *  Product: '<S35>/Product5'
             *  Product: '<S37>/Product'
             *  Product: '<S38>/Product'
             *  Product: '<S38>/Product1'
             *  Product: '<S38>/Product2'
             *  Product: '<S38>/Product3'
             *  Selector: '<S35>/Selector'
             *  Sum: '<S29>/Add'
             *  Sum: '<S29>/Add1'
             *  Sum: '<S35>/Add'
             *  Sum: '<S38>/Add'
             *  Sum: '<S38>/Add1'
             *  UnitDelay: '<S12>/Unit Delay6'
             */
            rtb_TmpSignalConversionAtVeCSVR = (((rtb_TmpSignalConversionAtVeAXLR
                - ((((KePVMR_k_CoastDownCoeffF1 * rtb_Switch1_c) +
                     KePVMR_k_CoastDownCoeffF0) + ((rtb_Switch1_c *
                rtb_Switch1_c) * KePVMR_k_CoastDownCoeffF2)) *
                   rtb_TmpSignalConversionAtVeCSVR)) -
                ((((rtb_TmpSignalConversionAtVeCSVR *
                    PVMR_ac_DW.UnitDelay6_DSTATE) * VePVMR_a_LongAccelFilt) -
                  (rtb_Merge4[1] * rtb_Switch1_es)) + ((KePVMR_I_WheelsInertia /
                rtb_TmpSignalConversionAtVeCSVR) * VePVMR_a_LongAccelFilt))) *
                rtb_ConvVeAXLR_M_ActualAxleTrq1) + PVMR_ac_DW.UnitDelay6_DSTATE;
        }

        /* End of Switch: '<S29>/Threshold =1' */
        /* End of Outputs for SubSystem: '<S12>/MassEstimation' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S12>/MassEstDisable' incorporates:
         *  ActionPort: '<S28>/Action Port'
         */
        /* Merge: '<S12>/Merge5' incorporates:
         *  Inport: '<S28>/XMass_old'
         *  UnitDelay: '<S12>/Unit Delay6'
         */
        rtb_TmpSignalConversionAtVeCSVR = PVMR_ac_DW.UnitDelay6_DSTATE;

        /* End of Outputs for SubSystem: '<S12>/MassEstDisable' */
    }

    /* End of If: '<S12>/If2' */

    /* Outputs for Atomic SubSystem: '<S12>/Limiter4' */
    /* Switch: '<S27>/Switch1' incorporates:
     *  Constant: '<S24>/Calib'
     *  RelationalOperator: '<S27>/Relational Operator'
     */
    if (KePVMR_m_MassRLSMax < rtb_TmpSignalConversionAtVeCSVR)
    {
        /* Switch: '<S27>/Switch1' */
        rtb_Switch1_c = KePVMR_m_MassRLSMax;
    }
    else
    {
        /* Switch: '<S27>/Switch1' */
        rtb_Switch1_c = rtb_TmpSignalConversionAtVeCSVR;
    }

    /* End of Switch: '<S27>/Switch1' */

    /* Switch: '<S27>/Switch' incorporates:
     *  Constant: '<S25>/Calib'
     *  RelationalOperator: '<S27>/Relational Operator1'
     */
    if (rtb_Switch1_c <= KePVMR_m_MassRLSMin)
    {
        /* Switch: '<S27>/Switch' */
        rtb_Switch1_c = KePVMR_m_MassRLSMin;
    }

    /* End of Switch: '<S27>/Switch' */
    /* End of Outputs for SubSystem: '<S12>/Limiter4' */

    /* Signum: '<S12>/Signum' */
    if (rtb_Product_bv < 0.0F)
    {
        rtb_ConvVeAXLR_M_ActualAxleTrq1 = -1.0F;
    }
    else if (rtb_Product_bv > 0.0F)
    {
        rtb_ConvVeAXLR_M_ActualAxleTrq1 = 1.0F;
    }
    else
    {
        rtb_ConvVeAXLR_M_ActualAxleTrq1 = rtb_Product_bv;
    }

    /* End of Signum: '<S12>/Signum' */

    /* Product: '<S12>/Product' incorporates:
     *  Abs: '<S12>/Abs'
     *  Lookup_n-D: '<S26>/Vector'
     */
    VePVMR_phi_EstimSlopeAngleKF = look1_iflf_binlcapw(fabsf(rtb_Product_bv), ((
        const float32 *)&(KxPVMR_K_arcsintodeg[0])), ((const float32 *)
        &(KtPVMR_K_arcsintodeg[0])), 23U) * rtb_ConvVeAXLR_M_ActualAxleTrq1;

    /* Switch: '<S98>/Switch3' incorporates:
     *  Constant: '<S130>/Calib'
     */
    if (KePVMR_b_SelectAccelSrc)
    {
        /* Switch: '<S98>/Switch3' */
        VePVMR_a_FiltAccel = VePVMR_a_AccelWheelFilt;
    }
    else
    {
        /* Switch: '<S98>/Switch3' */
        VePVMR_a_FiltAccel = VePVMR_a_LongAccelFilt;
    }

    /* End of Switch: '<S98>/Switch3' */

    /* Logic: '<S98>/Logical2' incorporates:
     *  Constant: '<S119>/Constant'
     *  Constant: '<S120>/Constant'
     *  Constant: '<S121>/Constant'
     *  Constant: '<S122>/Constant'
     *  Constant: '<S123>/Constant'
     *  Constant: '<S124>/Constant'
     *  Constant: '<S125>/Constant'
     *  Constant: '<S126>/Calib'
     *  Constant: '<S127>/Calib'
     *  Constant: '<S128>/Calib'
     *  Constant: '<S129>/Calib'
     *  Constant: '<S131>/Calib'
     *  Constant: '<S132>/Calib'
     *  Constant: '<S98>/Constant Value'
     *  Constant: '<S98>/Constant Value1'
     *  Constant: '<S98>/Constant Value2'
     *  Logic: '<S98>/Logical'
     *  Logic: '<S98>/Logical10'
     *  Logic: '<S98>/Logical3'
     *  Logic: '<S98>/Logical4'
     *  Logic: '<S98>/Logical6'
     *  Logic: '<S98>/Logical8'
     *  RelationalOperator: '<S98>/Comparison'
     *  RelationalOperator: '<S98>/Comparison1'
     *  RelationalOperator: '<S98>/Comparison10'
     *  RelationalOperator: '<S98>/Comparison11'
     *  RelationalOperator: '<S98>/Comparison12'
     *  RelationalOperator: '<S98>/Comparison13'
     *  RelationalOperator: '<S98>/Comparison14'
     *  RelationalOperator: '<S98>/Comparison15'
     *  RelationalOperator: '<S98>/Comparison2'
     *  RelationalOperator: '<S98>/Comparison3'
     *  RelationalOperator: '<S98>/Comparison4'
     *  RelationalOperator: '<S98>/Comparison5'
     *  RelationalOperator: '<S98>/Comparison6'
     *  RelationalOperator: '<S98>/Comparison7'
     *  RelationalOperator: '<S98>/Comparison8'
     *  RelationalOperator: '<S98>/Comparison9'
     *  UnitDelay: '<S10>/Unit Delay14'
     */
    VePVMR_b_VehMassRLSValid = ((((((((((((VePVMR_a_FiltAccel <
        KePVMR_a_MassCalcEnblMaxAccel) && (VePVMR_a_FiltAccel >
        KePVMR_a_MassCalcEnblMinAccel)) && ((rtb_Merge2 <
        KePVMR_v_MassCalcEnblVehSpdHi) && (rtb_Merge2 >
        KePVMR_v_MassCalcEnblVehSpdLo))) && ((VePVMR_F_Fdrive <
        KePVMR_F_MassCalcEnblMaxDriveForce) && (VePVMR_F_Fdrive >
        KePVMR_F_MassCalcEnblMinDriveForce))) && (((uint32)
        rtb_TmpSignalConversionAtVeBR_d) == CeBRKR_e_BrkNotApplied)) &&
        ((((((uint32)rtb_TmpSignalConversionAtVeTRGR) !=
            CeTRGR_e_TransRangeNeutral) && (((uint32)
        rtb_TmpSignalConversionAtVeTRGR) != CeTRGR_e_TransRangeReverse)) &&
          (((uint32)rtb_TmpSignalConversionAtVeTRGR) != CeTRGR_e_TransRangePark))
         && (((uint32)rtb_TmpSignalConversionAtVeTRGR) !=
             CeTRGR_e_TransRangeIllegal))) && rtb_OR1_cb) &&
        rtb_TmpSignalConversionAtVeBRKR) && rtb_TmpSignalConversionAtVeBTQR) &&
        (rtb_TmpSignalConversionAtVeCS_b < 2.0F)) && ((VePVMR_a_LongAccelFilt ==
        0.0F) || (PVMR_ac_DW.UnitDelay14_DSTATE != 0.0F))) && ((((uint32)
        rtb_TmpSignalConversionAtVeTR_i) == CeHCCR_e_ClLocked) || (((uint32)
        rtb_TmpSignalConversionAtVeTR_i) == CeHCCR_e_ClActuated)));

    /* Logic: '<S95>/Logical10' incorporates:
     *  Constant: '<S109>/Constant'
     *  Constant: '<S110>/Calib'
     *  RelationalOperator: '<S95>/Comparison11'
     */
    rtb_TmpSignalConversionAtVeBRKR = ((KePVMR_b_ResetOvrrd) || (((uint32)
        rtb_TmpSignalConversionAtVeTRGR) == CeTRGR_e_TransRangePark));

    /* Outputs for Atomic SubSystem: '<S94>/EdgeRising' */
    /* Logic: '<S100>/OR1' incorporates:
     *  UnitDelay: '<S100>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeBTQR = !PVMR_ac_DW.UnitDelay_DSTATE_iw;

    /* Update for UnitDelay: '<S100>/Unit Delay' */
    PVMR_ac_DW.UnitDelay_DSTATE_iw = rtb_TmpSignalConversionAtVeBRKR;

    /* End of Outputs for SubSystem: '<S94>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S94>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S104>/EdgeRising' */
    /* Logic: '<S108>/AND' incorporates:
     *  Logic: '<S108>/OR1'
     *  UnitDelay: '<S108>/Unit Delay'
     */
    rtb_AND_kv = (rtb_TmpSignalConversionAtVeHPMR &&
                  (!PVMR_ac_DW.UnitDelay_DSTATE_j));

    /* Update for UnitDelay: '<S108>/Unit Delay' */
    PVMR_ac_DW.UnitDelay_DSTATE_j = rtb_TmpSignalConversionAtVeHPMR;

    /* End of Outputs for SubSystem: '<S104>/EdgeRising' */

    /* Switch: '<S104>/Switch1' incorporates:
     *  Logic: '<S104>/OR'
     */
    if (tmp_1 || rtb_AND_kv)
    {
        /* Switch: '<S104>/Switch1' incorporates:
         *  Constant: '<S104>/Constant Value1'
         */
        rtb_TmpSignalConversionAtVeCS_b = 0.0F;
    }
    else
    {
        /* Switch: '<S104>/Switch1' incorporates:
         *  Constant: '<S103>/Calib'
         *  Constant: '<S94>/Constant Value'
         *  MinMax: '<S104>/Minimum'
         *  Sum: '<S104>/Summation'
         *  UnitDelay: '<S104>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeCS_b = fminf(2.0F, KePVMR_t_RLSdT +
            PVMR_ac_DW.UnitDelay_DSTATE_f);
    }

    /* End of Switch: '<S104>/Switch1' */

    /* Logic: '<S104>/AND' incorporates:
     *  Constant: '<S94>/Constant Value'
     *  RelationalOperator: '<S104>/Greater  Than'
     */
    rtb_AND_kv = (rtb_TmpSignalConversionAtVeHPMR &&
                  (rtb_TmpSignalConversionAtVeCS_b >= 2.0F));

    /* Update for UnitDelay: '<S104>/Unit Delay' */
    PVMR_ac_DW.UnitDelay_DSTATE_f = rtb_TmpSignalConversionAtVeCS_b;

    /* End of Outputs for SubSystem: '<S94>/Turn On Delay Time' */

    /* Outputs for Atomic SubSystem: '<S94>/EdgeRising1' */
    /* Logic: '<S101>/OR1' incorporates:
     *  UnitDelay: '<S101>/Unit Delay'
     */
    rtb_Logical10 = !PVMR_ac_DW.UnitDelay_DSTATE_od;

    /* Update for UnitDelay: '<S101>/Unit Delay' */
    PVMR_ac_DW.UnitDelay_DSTATE_od = rtb_AND_kv;

    /* Outputs for Atomic SubSystem: '<S94>/EdgeRising' */
    /* Logic: '<S94>/Logical1' incorporates:
     *  Logic: '<S100>/AND'
     *  Logic: '<S101>/AND'
     */
    VePVMR_b_VehMassReset = ((rtb_TmpSignalConversionAtVeBRKR &&
        rtb_TmpSignalConversionAtVeBTQR) || (rtb_AND_kv && rtb_Logical10));

    /* End of Outputs for SubSystem: '<S94>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S94>/EdgeRising1' */

    /* Gain: '<S98>/kmh2mph' incorporates:
     *  UnitDelay: '<S10>/Unit Delay14'
     */
    VePVMR_v_VehSpdmph = 0.621504068F * PVMR_ac_DW.UnitDelay14_DSTATE;

    /* Outputs for Atomic SubSystem: '<S99>/EdgeFalling' */
    /* UnitDelay: '<S106>/Unit Delay' incorporates:
     *  UnitDelay: '<S105>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeBRKR = PVMR_ac_DW.UnitDelay_DSTATE_ju;

    /* Update for UnitDelay: '<S105>/Unit Delay' */
    PVMR_ac_DW.UnitDelay_DSTATE_ju = VePVMR_b_VehMassReset;

    /* Switch: '<S99>/Switch' incorporates:
     *  Logic: '<S105>/AND'
     *  Logic: '<S105>/OR1'
     *  Switch: '<S99>/Switch1'
     */
    if ((!VePVMR_b_VehMassReset) && rtb_TmpSignalConversionAtVeBRKR)
    {
        /* Switch: '<S99>/Switch' incorporates:
         *  Constant: '<S102>/Calib'
         */
        rtb_TmpSignalConversionAtVeCS_b = KePVMR_t_RLSInhbtTm;
    }
    else
    {
        if (VePVMR_b_VehMassRLSValid)
        {
            /* Switch: '<S99>/Switch1' incorporates:
             *  Constant: '<S103>/Calib'
             */
            rtb_Product_bv = KePVMR_t_RLSdT;
        }
        else
        {
            /* Switch: '<S99>/Switch1' incorporates:
             *  Constant: '<S99>/Constant Value3'
             */
            rtb_Product_bv = 0.0F;
        }

        /* Switch: '<S99>/Switch' incorporates:
         *  Constant: '<S99>/Constant Value1'
         *  MinMax: '<S99>/minimum'
         *  Sum: '<S99>/Summation'
         *  UnitDelay: '<S99>/Unit Delay1'
         */
        rtb_TmpSignalConversionAtVeCS_b = fmaxf(PVMR_ac_DW.UnitDelay1_DSTATE_b -
            rtb_Product_bv, 0.0F);
    }

    /* End of Switch: '<S99>/Switch' */
    /* End of Outputs for SubSystem: '<S99>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S99>/EdgeRising' */
    /* Logic: '<S107>/AND' incorporates:
     *  Logic: '<S107>/OR1'
     *  UnitDelay: '<S107>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeBRKR = (rtb_TmpSignalConversionAtVeHPMR &&
        (!PVMR_ac_DW.UnitDelay_DSTATE_k));

    /* Update for UnitDelay: '<S107>/Unit Delay' */
    PVMR_ac_DW.UnitDelay_DSTATE_k = rtb_TmpSignalConversionAtVeHPMR;

    /* End of Outputs for SubSystem: '<S99>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S99>/EdgeFalling1' */
    /* Logic: '<S106>/AND' incorporates:
     *  Logic: '<S106>/OR1'
     *  UnitDelay: '<S106>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeHPMR = ((!rtb_TmpSignalConversionAtVeBRKR) &&
        (PVMR_ac_DW.UnitDelay_DSTATE_kh));

    /* Update for UnitDelay: '<S106>/Unit Delay' */
    PVMR_ac_DW.UnitDelay_DSTATE_kh = rtb_TmpSignalConversionAtVeBRKR;

    /* End of Outputs for SubSystem: '<S99>/EdgeFalling1' */

    /* Switch: '<S99>/Switch2' incorporates:
     *  Switch: '<S99>/Switch3'
     */
    if (rtb_TmpSignalConversionAtVeHPMR)
    {
        /* Switch: '<S99>/Switch2' incorporates:
         *  Constant: '<S102>/Calib'
         */
        rtb_Product_bv = KePVMR_t_RLSInhbtTm;
    }
    else
    {
        if (VePVMR_b_VehMassRLSValid)
        {
            /* Switch: '<S99>/Switch3' incorporates:
             *  Constant: '<S103>/Calib'
             */
            rtb_Product_bv = KePVMR_t_RLSdT;
        }
        else
        {
            /* Switch: '<S99>/Switch3' incorporates:
             *  Constant: '<S99>/Constant Value6'
             */
            rtb_Product_bv = 0.0F;
        }

        /* Switch: '<S99>/Switch2' incorporates:
         *  Constant: '<S99>/Constant Value4'
         *  MinMax: '<S99>/minimum1'
         *  Sum: '<S99>/Summation1'
         *  UnitDelay: '<S99>/Unit Delay2'
         */
        rtb_Product_bv = fmaxf(PVMR_ac_DW.UnitDelay2_DSTATE - rtb_Product_bv,
                               0.0F);
    }

    /* End of Switch: '<S99>/Switch2' */

    /* Logic: '<S99>/AND3' incorporates:
     *  Constant: '<S99>/Constant Value2'
     *  Constant: '<S99>/Constant Value5'
     *  Logic: '<S99>/AND1'
     *  Logic: '<S99>/AND2'
     *  RelationalOperator: '<S99>/Greater  Than'
     *  RelationalOperator: '<S99>/Greater  Than1'
     */
    VePVMR_b_VehMassHold = (((VePVMR_b_VehMassReset) ||
        (rtb_TmpSignalConversionAtVeCS_b > 0.0F)) ||
                            (rtb_TmpSignalConversionAtVeBRKR || (rtb_Product_bv >
        0.0F)));

    /* If: '<S13>/If1' incorporates:
     *  Logic: '<S13>/Logical1'
     */
    if ((VePVMR_b_VehMassRLSValid) || (VePVMR_b_VehMassReset))
    {
        /* Outputs for IfAction SubSystem: '<S13>/Valid_data1' incorporates:
         *  ActionPort: '<S97>/Action Port'
         */
        /* Reshape: '<S111>/Reshape' incorporates:
         *  Constant: '<S13>/Constant Value15'
         *  Product: '<S96>/Prod'
         */
        rtb_Reshape[0] = VePVMR_a_FiltAccel;
        rtb_Reshape[1] = 1.0F;
        rtb_Reshape[2] = VePVMR_v_VehSpdmph;
        rtb_Reshape[3] = VePVMR_v_VehSpdmph * VePVMR_v_VehSpdmph;

        /* Delay: '<S111>/Delay' incorporates:
         *  Constant: '<S112>/Calib'
         */
        if (((sint32)PVMR_ac_DW.icLoad) != 0)
        {
            memcpy(&PVMR_ac_DW.Delay_DSTATE[0], ((const float32 *)
                    &(KaPVMR_k_InitPMatrix[0])), (sizeof(float32)) << 4ULL);
        }

        /* Product: '<S111>/Matrix Multiply2' */
        rtb_ConvVeAXLR_M_ActualAxleTrq1 = 0.0F;
        for (i = 0; i < 4; i++)
        {
            /* Product: '<S111>/Matrix Multiply1' incorporates:
             *  Delay: '<S111>/Delay'
             *  Product: '<S111>/Matrix Multiply2'
             *  Reshape: '<S111>/Reshape'
             */
            rtb_Switch1_m[i] = 0.0F;
            for (i_0 = 0; i_0 < 4; i_0++)
            {
                rtb_Switch1_m[i] += PVMR_ac_DW.Delay_DSTATE[(i_0 * 4) + i] *
                    rtb_Reshape[i_0];
            }

            /* Product: '<S111>/Matrix Multiply2' incorporates:
             *  Math: '<S111>/Math Function1'
             *  Reshape: '<S111>/Reshape'
             */
            rtb_ConvVeAXLR_M_ActualAxleTrq1 += rtb_Reshape[i] * rtb_Switch1_m[i];
        }

        /* Sum: '<S111>/Sum1' incorporates:
         *  Constant: '<S117>/Calib'
         *  Product: '<S111>/Matrix Multiply2'
         */
        rtb_ConvVeAXLR_M_ActualAxleTrq1 += KePVMR_v_RLS_FrgtFctr;

        /* Outputs for Atomic SubSystem: '<S111>/Protected Division' */
        /* RelationalOperator: '<S118>/Not Equal1' incorporates:
         *  Constant: '<S118>/Constant Value1'
         */
        rtb_TmpSignalConversionAtVeHPMR = (rtb_ConvVeAXLR_M_ActualAxleTrq1 !=
            0.0F);
        for (i = 0; i < 4; i++)
        {
            rtb_Merge2 = rtb_Switch1_m[i];

            /* Switch: '<S118>/Switch1' incorporates:
             *  Constant: '<S118>/Constant Value'
             *  Constant: '<S118>/Constant Value2'
             *  Constant: '<S118>/Constant Value3'
             *  Logic: '<S118>/AND'
             *  Product: '<S111>/Matrix Multiply1'
             *  RelationalOperator: '<S118>/Greater Than or Equal '
             *  RelationalOperator: '<S118>/Greater Than or Equal 1'
             *  RelationalOperator: '<S118>/Not Equal'
             *  Switch: '<S118>/Switch2'
             *  Switch: '<S118>/Switch3'
             */
            if ((rtb_Merge2 != 0.0F) && rtb_TmpSignalConversionAtVeHPMR)
            {
                /* Switch: '<S118>/Switch1' incorporates:
                 *  Product: '<S118>/Division'
                 */
                rtb_Merge2 /= rtb_ConvVeAXLR_M_ActualAxleTrq1;
            }
            else if (rtb_Merge2 > 0.0F)
            {
                /* Switch: '<S118>/Switch1' incorporates:
                 *  Constant: '<S118>/MAXFLOAT'
                 *  Switch: '<S118>/Switch2'
                 */
                rtb_Merge2 = 3.402823466E+38F;
            }
            else if (rtb_Merge2 < 0.0F)
            {
                /* Switch: '<S118>/Switch1' incorporates:
                 *  Constant: '<S118>/MINFLOAT'
                 *  Switch: '<S118>/Switch3'
                 */
                rtb_Merge2 = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S118>/Switch1' incorporates:
                 *  Constant: '<S118>/Constant Value4'
                 *  Switch: '<S118>/Switch3'
                 */
                rtb_Merge2 = 0.0F;
            }

            /* End of Switch: '<S118>/Switch1' */
            rtb_Switch1_m[i] = rtb_Merge2;
        }

        /* End of Outputs for SubSystem: '<S111>/Protected Division' */

        /* Switch: '<S111>/Switch1' incorporates:
         *  Product: '<S111>/Matrix Multiply1'
         *  Switch: '<S111>/Switch2'
         *  Switch: '<S118>/Switch1'
         */
        if (VePVMR_b_VehMassReset)
        {
            /* Switch: '<S111>/Switch1' incorporates:
             *  Constant: '<S113>/Calib'
             *  Constant: '<S114>/Calib'
             *  Constant: '<S115>/Calib'
             *  Constant: '<S116>/Calib'
             */
            rtb_TmpSignalConversionAtMatrix[0] = KePVMR_k_InitEstmM;
            rtb_TmpSignalConversionAtMatrix[1] = KePVMR_k_InitEstmA;
            rtb_TmpSignalConversionAtMatrix[2] = KePVMR_k_InitEstmB;
            rtb_TmpSignalConversionAtMatrix[3] = KePVMR_k_InitEstmC;

            /* Update for Delay: '<S111>/Delay' incorporates:
             *  Constant: '<S112>/Calib'
             *  Switch: '<S111>/Switch2'
             */
            memcpy(&PVMR_ac_DW.Delay_DSTATE[0], ((const float32 *)
                    &(KaPVMR_k_InitPMatrix[0])), (sizeof(float32)) << 4ULL);
        }
        else
        {
            /* SignalConversion generated from: '<S111>/Matrix Multiply' incorporates:
             *  UnitDelay: '<S111>/Unit Delay'
             *  UnitDelay: '<S111>/Unit Delay2'
             *  UnitDelay: '<S111>/Unit Delay3'
             *  UnitDelay: '<S111>/Unit Delay4'
             */
            rtb_TmpSignalConversionAtMatrix[0] = PVMR_ac_DW.UnitDelay_DSTATE_o;
            rtb_TmpSignalConversionAtMatrix[1] = PVMR_ac_DW.UnitDelay2_DSTATE_g;
            rtb_TmpSignalConversionAtMatrix[2] = PVMR_ac_DW.UnitDelay3_DSTATE_i;
            rtb_TmpSignalConversionAtMatrix[3] = PVMR_ac_DW.UnitDelay4_DSTATE;

            /* Product: '<S111>/Matrix Multiply' incorporates:
             *  Math: '<S111>/Math Function'
             *  Reshape: '<S111>/Reshape'
             *  SignalConversion generated from: '<S111>/Matrix Multiply'
             */
            rtb_ConvVeAXLR_M_ActualAxleTrq1 = 0.0F;
            for (i = 0; i < 4; i++)
            {
                rtb_ConvVeAXLR_M_ActualAxleTrq1 += rtb_Reshape[i] *
                    rtb_TmpSignalConversionAtMatrix[i];
            }

            /* Sum: '<S111>/Sum3' incorporates:
             *  Product: '<S111>/Matrix Multiply'
             */
            rtb_ConvVeAXLR_M_ActualAxleTrq1 = VePVMR_F_Fdrive -
                rtb_ConvVeAXLR_M_ActualAxleTrq1;
            for (i = 0; i < 4; i++)
            {
                /* Sum: '<S111>/Sum2' incorporates:
                 *  Constant: '<S111>/Constant Value1'
                 *  Math: '<S111>/Math Function2'
                 *  Product: '<S111>/Matrix Multiply3'
                 *  Reshape: '<S111>/Reshape'
                 */
                for (i_0 = 0; i_0 < 4; i_0++)
                {
                    tmp_2 = (i * 4) + i_0;
                    tmp[tmp_2] = PVMR_ac_ConstP.ConstantValue1_Value[tmp_2] -
                        (rtb_Switch1_m[i_0] * rtb_Reshape[i]);
                }

                /* End of Sum: '<S111>/Sum2' */
                rtb_TmpSignalConversionAtMatrix[i] +=
                    rtb_ConvVeAXLR_M_ActualAxleTrq1 * rtb_Switch1_m[i];
            }

            /* Product: '<S111>/Matrix Multiply5' incorporates:
             *  Delay: '<S111>/Delay'
             *  Product: '<S111>/Product1'
             *  SignalConversion generated from: '<S111>/Matrix Multiply'
             *  Sum: '<S111>/Sum'
             *  Switch: '<S111>/Switch1'
             */
            for (i = 0; i < 4; i++)
            {
                for (i_0 = 0; i_0 < 4; i_0++)
                {
                    tmp_2 = i * 4;
                    tmp_3 = i_0 + tmp_2;
                    tmp_0[tmp_3] = 0.0F;
                    for (i_1 = 0; i_1 < 4; i_1++)
                    {
                        tmp_0[tmp_3] += tmp[(i_1 * 4) + i_0] *
                            PVMR_ac_DW.Delay_DSTATE[tmp_2 + i_1];
                    }
                }
            }

            /* End of Product: '<S111>/Matrix Multiply5' */
            for (i = 0; i < 16; i++)
            {
                /* Update for Delay: '<S111>/Delay' incorporates:
                 *  Constant: '<S117>/Calib'
                 *  Product: '<S111>/Product6'
                 *  Switch: '<S111>/Switch2'
                 */
                PVMR_ac_DW.Delay_DSTATE[i] = tmp_0[i] * KePVMR_v_RLS_FrgtFctr;
            }
        }

        /* End of Switch: '<S111>/Switch1' */

        /* Switch: '<S97>/Switch1' incorporates:
         *  Switch: '<S97>/Switch2'
         *  Switch: '<S97>/Switch3'
         *  Switch: '<S97>/Switch4'
         */
        if (VePVMR_b_VehMassHold)
        {
            /* Merge: '<S13>/Merge7' incorporates:
             *  UnitDelay: '<S13>/Unit Delay'
             */
            rtb_ConvVeAXLR_M_ActualAxleTrq1 = PVMR_ac_DW.UnitDelay_DSTATE_i;

            /* Merge: '<S13>/Merge1' incorporates:
             *  UnitDelay: '<S13>/Unit Delay1'
             */
            rtb_Switch1_es = PVMR_ac_DW.UnitDelay1_DSTATE_m;

            /* Merge: '<S13>/Merge2' incorporates:
             *  UnitDelay: '<S13>/Unit Delay2'
             */
            rtb_Merge2 = PVMR_ac_DW.UnitDelay2_DSTATE_j;

            /* Merge: '<S13>/Merge3' incorporates:
             *  UnitDelay: '<S13>/Unit Delay3'
             */
            rtb_Merge3 = PVMR_ac_DW.UnitDelay3_DSTATE;
        }
        else
        {
            /* Merge: '<S13>/Merge7' */
            rtb_ConvVeAXLR_M_ActualAxleTrq1 = rtb_TmpSignalConversionAtMatrix[0];

            /* Merge: '<S13>/Merge1' incorporates:
             *  Gain: '<S97>/N2lb2'
             */
            rtb_Switch1_es = 0.22481F * rtb_TmpSignalConversionAtMatrix[1];

            /* Merge: '<S13>/Merge2' incorporates:
             *  Gain: '<S97>/N2lb1'
             */
            rtb_Merge2 = 0.22481F * rtb_TmpSignalConversionAtMatrix[2];

            /* Merge: '<S13>/Merge3' incorporates:
             *  Gain: '<S97>/N2lb'
             */
            rtb_Merge3 = 0.22481F * rtb_TmpSignalConversionAtMatrix[3];
        }

        /* End of Switch: '<S97>/Switch1' */

        /* Update for UnitDelay: '<S111>/Unit Delay' */
        PVMR_ac_DW.UnitDelay_DSTATE_o = rtb_TmpSignalConversionAtMatrix[0];

        /* Update for UnitDelay: '<S111>/Unit Delay2' */
        PVMR_ac_DW.UnitDelay2_DSTATE_g = rtb_TmpSignalConversionAtMatrix[1];

        /* Update for UnitDelay: '<S111>/Unit Delay3' */
        PVMR_ac_DW.UnitDelay3_DSTATE_i = rtb_TmpSignalConversionAtMatrix[2];

        /* Update for UnitDelay: '<S111>/Unit Delay4' */
        PVMR_ac_DW.UnitDelay4_DSTATE = rtb_TmpSignalConversionAtMatrix[3];

        /* Update for Delay: '<S111>/Delay' */
        PVMR_ac_DW.icLoad = 0U;

        /* End of Outputs for SubSystem: '<S13>/Valid_data1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S13>/Invalid_data' incorporates:
         *  ActionPort: '<S81>/Action Port'
         */
        /* Merge: '<S13>/Merge7' incorporates:
         *  Inport: '<S81>/Hold_mass'
         *  UnitDelay: '<S13>/Unit Delay'
         */
        rtb_ConvVeAXLR_M_ActualAxleTrq1 = PVMR_ac_DW.UnitDelay_DSTATE_i;

        /* Merge: '<S13>/Merge1' incorporates:
         *  Inport: '<S81>/Hold_A'
         *  UnitDelay: '<S13>/Unit Delay1'
         */
        rtb_Switch1_es = PVMR_ac_DW.UnitDelay1_DSTATE_m;

        /* Merge: '<S13>/Merge2' incorporates:
         *  Inport: '<S81>/Hold_B'
         *  UnitDelay: '<S13>/Unit Delay2'
         */
        rtb_Merge2 = PVMR_ac_DW.UnitDelay2_DSTATE_j;

        /* Merge: '<S13>/Merge3' incorporates:
         *  Inport: '<S81>/Hold_C'
         *  UnitDelay: '<S13>/Unit Delay3'
         */
        rtb_Merge3 = PVMR_ac_DW.UnitDelay3_DSTATE;

        /* End of Outputs for SubSystem: '<S13>/Invalid_data' */
    }

    /* End of If: '<S13>/If1' */

    /* Outputs for Atomic SubSystem: '<S13>/Limiter' */
    /* Switch: '<S90>/Switch1' incorporates:
     *  Constant: '<S88>/Calib'
     *  RelationalOperator: '<S90>/Relational Operator'
     */
    if (KePVMR_m_MassRLSMax < rtb_ConvVeAXLR_M_ActualAxleTrq1)
    {
        /* Switch: '<S134>/Switch1' */
        rtb_ConvVeAXLR_M_ActualAxleTrq1 = KePVMR_m_MassRLSMax;
    }

    /* End of Switch: '<S90>/Switch1' */

    /* Switch: '<S90>/Switch' incorporates:
     *  Constant: '<S89>/Calib'
     *  RelationalOperator: '<S90>/Relational Operator1'
     */
    if (rtb_ConvVeAXLR_M_ActualAxleTrq1 > KePVMR_m_MassRLSMin)
    {
        /* Switch: '<S90>/Switch' */
        VePVMR_m_VehicleMassRLS = rtb_ConvVeAXLR_M_ActualAxleTrq1;
    }
    else
    {
        /* Switch: '<S90>/Switch' */
        VePVMR_m_VehicleMassRLS = KePVMR_m_MassRLSMin;
    }

    /* End of Switch: '<S90>/Switch' */
    /* End of Outputs for SubSystem: '<S13>/Limiter' */

    /* Outputs for Atomic SubSystem: '<S13>/Limiter1' */
    /* Switch: '<S91>/Switch1' incorporates:
     *  Constant: '<S82>/Calib'
     *  RelationalOperator: '<S91>/Relational Operator'
     */
    if (KePVMR_F_A_RLSMax < rtb_Switch1_es)
    {
        /* Switch: '<S134>/Switch1' */
        rtb_ConvVeAXLR_M_ActualAxleTrq1 = KePVMR_F_A_RLSMax;
    }
    else
    {
        /* Switch: '<S134>/Switch1' */
        rtb_ConvVeAXLR_M_ActualAxleTrq1 = rtb_Switch1_es;
    }

    /* End of Switch: '<S91>/Switch1' */

    /* Switch: '<S91>/Switch' incorporates:
     *  Constant: '<S83>/Calib'
     *  RelationalOperator: '<S91>/Relational Operator1'
     */
    if (rtb_ConvVeAXLR_M_ActualAxleTrq1 > KePVMR_F_A_RLSMin)
    {
        /* Switch: '<S91>/Switch' */
        VePVMR_F_CoastDownA = rtb_ConvVeAXLR_M_ActualAxleTrq1;
    }
    else
    {
        /* Switch: '<S91>/Switch' */
        VePVMR_F_CoastDownA = KePVMR_F_A_RLSMin;
    }

    /* End of Switch: '<S91>/Switch' */
    /* End of Outputs for SubSystem: '<S13>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S13>/Limiter2' */
    /* Switch: '<S92>/Switch1' incorporates:
     *  Constant: '<S84>/Calib'
     *  RelationalOperator: '<S92>/Relational Operator'
     */
    if (KePVMR_F_B_RLSMax < rtb_Merge2)
    {
        /* Switch: '<S134>/Switch1' */
        rtb_ConvVeAXLR_M_ActualAxleTrq1 = KePVMR_F_B_RLSMax;
    }
    else
    {
        /* Switch: '<S134>/Switch1' */
        rtb_ConvVeAXLR_M_ActualAxleTrq1 = rtb_Merge2;
    }

    /* End of Switch: '<S92>/Switch1' */

    /* Switch: '<S92>/Switch' incorporates:
     *  Constant: '<S85>/Calib'
     *  RelationalOperator: '<S92>/Relational Operator1'
     */
    if (rtb_ConvVeAXLR_M_ActualAxleTrq1 > KePVMR_F_B_RLSMin)
    {
        /* Switch: '<S92>/Switch' */
        VePVMR_F_CoastDownB = rtb_ConvVeAXLR_M_ActualAxleTrq1;
    }
    else
    {
        /* Switch: '<S92>/Switch' */
        VePVMR_F_CoastDownB = KePVMR_F_B_RLSMin;
    }

    /* End of Switch: '<S92>/Switch' */
    /* End of Outputs for SubSystem: '<S13>/Limiter2' */

    /* Outputs for Atomic SubSystem: '<S13>/Limiter3' */
    /* Switch: '<S93>/Switch1' incorporates:
     *  Constant: '<S86>/Calib'
     *  RelationalOperator: '<S93>/Relational Operator'
     */
    if (KePVMR_F_C_RLSMax < rtb_Merge3)
    {
        /* Switch: '<S134>/Switch1' */
        rtb_ConvVeAXLR_M_ActualAxleTrq1 = KePVMR_F_C_RLSMax;
    }
    else
    {
        /* Switch: '<S134>/Switch1' */
        rtb_ConvVeAXLR_M_ActualAxleTrq1 = rtb_Merge3;
    }

    /* End of Switch: '<S93>/Switch1' */

    /* Switch: '<S93>/Switch' incorporates:
     *  Constant: '<S87>/Calib'
     *  RelationalOperator: '<S93>/Relational Operator1'
     */
    if (rtb_ConvVeAXLR_M_ActualAxleTrq1 > KePVMR_F_C_RLSMin)
    {
        /* Switch: '<S93>/Switch' */
        VePVMR_F_CoastDownC = rtb_ConvVeAXLR_M_ActualAxleTrq1;
    }
    else
    {
        /* Switch: '<S93>/Switch' */
        VePVMR_F_CoastDownC = KePVMR_F_C_RLSMin;
    }

    /* End of Switch: '<S93>/Switch' */
    /* End of Outputs for SubSystem: '<S13>/Limiter3' */

    /* Switch: '<S134>/Switch1' incorporates:
     *  Constant: '<S98>/Constant Value11'
     *  Product: '<S98>/Product3'
     *  Sum: '<S98>/Subtract'
     */
    rtb_ConvVeAXLR_M_ActualAxleTrq1 = (VePVMR_a_LongAccelFilt -
        VePVMR_a_AccelWheelFilt) / 9.81F;

    /* Signum: '<S98>/Signum' */
    if (rtb_ConvVeAXLR_M_ActualAxleTrq1 < 0.0F)
    {
        rtb_Merge2 = -1.0F;
    }
    else if (rtb_ConvVeAXLR_M_ActualAxleTrq1 > 0.0F)
    {
        rtb_Merge2 = 1.0F;
    }
    else
    {
        rtb_Merge2 = rtb_ConvVeAXLR_M_ActualAxleTrq1;
    }

    /* End of Signum: '<S98>/Signum' */

    /* Product: '<S98>/Product' incorporates:
     *  Abs: '<S98>/Abs1'
     *  Lookup_n-D: '<S133>/Vector'
     */
    rtb_ConvVeAXLR_M_ActualAxleTrq1 = look1_iflf_binlcapw(fabsf
        (rtb_ConvVeAXLR_M_ActualAxleTrq1), ((const float32 *)
        &(KxPVMR_K_arcsintodeg[0])), ((const float32 *)&(KtPVMR_K_arcsintodeg[0])),
        23U) * rtb_Merge2;

    /* Outputs for Atomic SubSystem: '<S98>/Limiter' */
    /* Switch: '<S134>/Switch1' incorporates:
     *  Constant: '<S98>/Constant Value12'
     *  RelationalOperator: '<S134>/Relational Operator'
     */
    if (45.0F < rtb_ConvVeAXLR_M_ActualAxleTrq1)
    {
        /* Switch: '<S134>/Switch1' */
        rtb_ConvVeAXLR_M_ActualAxleTrq1 = 45.0F;
    }

    /* End of Switch: '<S134>/Switch1' */

    /* Switch: '<S134>/Switch' incorporates:
     *  Constant: '<S98>/Constant Value5'
     *  RelationalOperator: '<S134>/Relational Operator1'
     */
    if (rtb_ConvVeAXLR_M_ActualAxleTrq1 > -45.0F)
    {
        /* Switch: '<S134>/Switch' */
        VePVMR_phi_EstimSlopeAngle = rtb_ConvVeAXLR_M_ActualAxleTrq1;
    }
    else
    {
        /* Switch: '<S134>/Switch' */
        VePVMR_phi_EstimSlopeAngle = -45.0F;
    }

    /* End of Switch: '<S134>/Switch' */
    /* End of Outputs for SubSystem: '<S98>/Limiter' */

    /* Outputs for Atomic SubSystem: '<S10>/Digital Lowpass Reset Enabled3' */
    /* Update for UnitDelay: '<S10>/Unit Delay14' incorporates:
     *  Switch: '<S16>/Switch2'
     */
    PVMR_ac_DW.UnitDelay14_DSTATE = rtb_Summation;

    /* End of Outputs for SubSystem: '<S10>/Digital Lowpass Reset Enabled3' */

    /* Update for UnitDelay: '<S12>/Unit Delay4' */
    PVMR_ac_DW.UnitDelay4_DSTATE_a = VePVMR_b_EnableEstSlopeAx;

    /* Update for UnitDelay: '<S12>/Unit Delay5' */
    for (i = 0; i < 2; i++)
    {
        PVMR_ac_DW.UnitDelay5_DSTATE[i] = rtb_Merge[i];
    }

    /* End of Update for UnitDelay: '<S12>/Unit Delay5' */

    /* Update for UnitDelay: '<S34>/Unit Delay1' */
    PVMR_ac_DW.UnitDelay1_DSTATE = rtb_TmpSignalConversionAtVeCS_l;

    /* Update for UnitDelay: '<S34>/Unit Delay' */
    PVMR_ac_DW.UnitDelay_DSTATE = rtb_TmpSignalConversionAtVeAXLR;

    /* Update for UnitDelay: '<S12>/Unit Delay6' */
    PVMR_ac_DW.UnitDelay6_DSTATE = rtb_TmpSignalConversionAtVeCSVR;

    /* Update for UnitDelay: '<S99>/Unit Delay1' */
    PVMR_ac_DW.UnitDelay1_DSTATE_b = rtb_TmpSignalConversionAtVeCS_b;

    /* Update for UnitDelay: '<S99>/Unit Delay2' */
    PVMR_ac_DW.UnitDelay2_DSTATE = rtb_Product_bv;

    /* Update for UnitDelay: '<S13>/Unit Delay' */
    PVMR_ac_DW.UnitDelay_DSTATE_i = VePVMR_m_VehicleMassRLS;

    /* Update for UnitDelay: '<S13>/Unit Delay1' */
    PVMR_ac_DW.UnitDelay1_DSTATE_m = VePVMR_F_CoastDownA;

    /* Update for UnitDelay: '<S13>/Unit Delay2' */
    PVMR_ac_DW.UnitDelay2_DSTATE_j = VePVMR_F_CoastDownB;

    /* Update for UnitDelay: '<S13>/Unit Delay3' */
    PVMR_ac_DW.UnitDelay3_DSTATE = VePVMR_F_CoastDownC;

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VePVMR_m_VehMassKalmanFilter' incorporates:
     *  SignalConversion generated from: '<S2>/VePVMR_m_VehMassKalmanFilter'
     */
    (void)Rte_Write_VePVMR_m_VehMassKalmanFilter_Value(rtb_Switch1_c);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/PVMRMassEstimation'
     */
    /* Switch: '<S9>/Threshold =1' incorporates:
     *  Constant: '<S11>/Calib'
     */
    if (KePVMR_b_MassEstKlmnFltrEnbl)
    {
        /* Outport: '<Root>/VePVMR_m_VehMassRLS' incorporates:
         *  SignalConversion generated from: '<S2>/VePVMR_m_VehMassRLS'
         */
        (void)Rte_Write_VePVMR_m_VehMassRLS_Value(rtb_Switch1_c);
    }
    else
    {
        /* Outport: '<Root>/VePVMR_m_VehMassRLS' incorporates:
         *  SignalConversion generated from: '<S2>/VePVMR_m_VehMassRLS'
         */
        (void)Rte_Write_VePVMR_m_VehMassRLS_Value(VePVMR_m_VehicleMassRLS);
    }

    /* End of Switch: '<S9>/Threshold =1' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
}

/* Output function */
FUNC(void, PVMR_CODE) PVMR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/PVMR_PwrOn'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/PVMC_Init'
     */
    /* SignalConversion generated from: '<S135>/OutputParameter1' */
    PVMR_ac_B.OutportBufferForOutputParameter = 0.0F;

    /* SignalConversion generated from: '<S135>/OutputParameter3' */
    PVMR_ac_B.OutportBufferForOutputParamet_a = 0.0F;

    /* SignalConversion generated from: '<S135>/OutputParameter2' */
    PVMR_ac_B.OutportBufferForOutputParamet_k = 0.0F;

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S136>/VePVMR_m_VehMassRLS_Out_Init' */
    PVMR_ac_B.OutportBufferForVePVMR_m_VehMas = 0.0F;

    /* SignalConversion generated from: '<S136>/VePVMR_m_VehMassKalmanFilter_Out_Init' */
    PVMR_ac_B.OutportBufferForVePVMR_m_VehM_l = 0.0F;

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Outport: '<Root>/VePVMR_dn_NoDotPrdtd' incorporates:
     *  SignalConversion generated from: '<S3>/OutputParameter1'
     */
    (void)Rte_Write_VePVMR_dn_NoDotPrdtd_Value
        (PVMR_ac_B.OutportBufferForOutputParameter);

    /* Outport: '<Root>/VePVMR_dn_NoDotPrdtdStrategic' incorporates:
     *  SignalConversion generated from: '<S3>/OutputParameter2'
     */
    (void)Rte_Write_VePVMR_dn_NoDotPrdtdStrategic_Value
        (PVMR_ac_B.OutportBufferForOutputParamet_k);

    /* Outport: '<Root>/VePVMR_dn_NoDotPrdtdTactical' incorporates:
     *  SignalConversion generated from: '<S3>/OutputParameter3'
     */
    (void)Rte_Write_VePVMR_dn_NoDotPrdtdTactical_Value
        (PVMR_ac_B.OutportBufferForOutputParamet_a);

    /* Outport: '<Root>/VePVMR_m_VehMassKalmanFilter' incorporates:
     *  SignalConversion generated from: '<S3>/VePVMR_m_VehMassKalmanFilter_Out_Init'
     */
    (void)Rte_Write_VePVMR_m_VehMassKalmanFilter_Value
        (PVMR_ac_B.OutportBufferForVePVMR_m_VehM_l);

    /* Outport: '<Root>/VePVMR_m_VehMassRLS' incorporates:
     *  SignalConversion generated from: '<S3>/VePVMR_m_VehMassRLS_Out_Init'
     */
    (void)Rte_Write_VePVMR_m_VehMassRLS_Value
        (PVMR_ac_B.OutportBufferForVePVMR_m_VehMas);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, PVMR_CODE) PVMR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/PVMR_MedTED'
     */
    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/PVMRMassEstimation'
     */
    /* InitializeConditions for UnitDelay: '<S13>/Unit Delay' */
    PVMR_ac_DW.UnitDelay_DSTATE_i = 2722.0F;

    /* InitializeConditions for UnitDelay: '<S13>/Unit Delay1' */
    PVMR_ac_DW.UnitDelay1_DSTATE_m = 53.0F;

    /* InitializeConditions for UnitDelay: '<S13>/Unit Delay2' */
    PVMR_ac_DW.UnitDelay2_DSTATE_j = 0.307F;

    /* InitializeConditions for UnitDelay: '<S13>/Unit Delay3' */
    PVMR_ac_DW.UnitDelay3_DSTATE = 0.0334F;

    /* SystemInitialize for IfAction SubSystem: '<S13>/Valid_data1' */
    /* InitializeConditions for UnitDelay: '<S111>/Unit Delay' */
    PVMR_ac_DW.UnitDelay_DSTATE_o = 2722.0F;

    /* InitializeConditions for UnitDelay: '<S111>/Unit Delay2' */
    PVMR_ac_DW.UnitDelay2_DSTATE_g = 235.744F;

    /* InitializeConditions for UnitDelay: '<S111>/Unit Delay3' */
    PVMR_ac_DW.UnitDelay3_DSTATE_i = 1.3655F;

    /* InitializeConditions for UnitDelay: '<S111>/Unit Delay4' */
    PVMR_ac_DW.UnitDelay4_DSTATE = 0.1486F;

    /* InitializeConditions for Delay: '<S111>/Delay' */
    PVMR_ac_DW.icLoad = 1U;

    /* End of SystemInitialize for SubSystem: '<S13>/Valid_data1' */
    /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
