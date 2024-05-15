/*
 * File: TIDR_ac.c
 *
 * Code generated for Simulink model 'TIDR_ac'.
 *
 * Model version                  : 9.21
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 19:33:00 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TIDR_ac.h"
#include "look1_iflf_binlca_16a.h"
#include "look2_iflf_binlca_16a.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_TIDR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_TIDR_1

static volatile CONST(uint16, TIDR_VAR_INIT) KeTIDR_Cnt_EngTrqHVBattFailLmt =
    40U;                               /* Referenced by: '<S21>/Calib' */

#endif

#if Rte_SysCon_Variant_TIDR_1

static volatile CONST(uint16, TIDR_VAR_INIT) KeTIDR_Cnt_EngTrqHVBattPassLmt =
    80U;                               /* Referenced by: '<S22>/Calib' */

#endif

#if Rte_SysCon_Variant_TIDR_1

static volatile CONST(uint16, TIDR_VAR_INIT) KeTIDR_Cnt_EngTrqHVBattSmplLmt =
    100U;                              /* Referenced by: '<S23>/Calib' */

#endif

#if Rte_SysCon_Variant_TIDR_1

static volatile CONST(float32, TIDR_VAR_INIT) KeTIDR_Pct_BatSOC_LSP = 40.0F;/* Referenced by: '<S83>/Calib' */

#endif

#if Rte_SysCon_Variant_TIDR_1

static volatile CONST(float32, TIDR_VAR_INIT) KeTIDR_Pct_BatSOC_RSP = 79.0F;/* Referenced by: '<S84>/Calib' */

#endif

#if Rte_SysCon_Variant_TIDR_1

static volatile CONST(float32, TIDR_VAR_INIT) KeTIDR_T_EngCoolMin = 75.0F;/* Referenced by: '<S40>/Calib' */

#endif

#if Rte_SysCon_Variant_TIDR_1

static volatile CONST(boolean, TIDR_VAR_INIT) KeTIDR_b_EnblP1B11 = 0;/* Referenced by: '<S24>/Calib' */

#endif

#if Rte_SysCon_Variant_TIDR_1

static volatile CONST(boolean, TIDR_VAR_INIT) KeTIDR_b_EnblP1B12 = 0;/* Referenced by: '<S25>/Calib' */

#endif

#if Rte_SysCon_Variant_TIDR_1

static volatile CONST(boolean, TIDR_VAR_INIT) KeTIDR_b_EngSysDsbldEnbl = 1;/* Referenced by: '<S41>/Calib' */

#endif

#if Rte_SysCon_Variant_TIDR_1

static volatile CONST(boolean, TIDR_VAR_INIT) KeTIDR_b_EngTrqHVBattEnbl = 0;/* Referenced by: '<S42>/Calib' */

#endif

#if Rte_SysCon_Variant_TIDR_1

static volatile CONST(float32, TIDR_VAR_INIT) KeTIDR_n_EngIdleMax = 1300.0F;/* Referenced by: '<S43>/Calib' */

#endif

#if Rte_SysCon_Variant_TIDR_1

static volatile CONST(float32, TIDR_VAR_INIT) KeTIDR_n_EngIdleMin = 400.0F;/* Referenced by: '<S44>/Calib' */

#endif

#if Rte_SysCon_Variant_TIDR_1

static volatile CONST(float32, TIDR_VAR_INIT) KeTIDR_t_EngIdleDly = 1.0F;/* Referenced by: '<S45>/Calib' */

#endif

#if Rte_SysCon_Variant_TIDR_1

static volatile CONST(float32, TIDR_VAR_INIT) KeTIDR_t_dT = 0.0125F;/* Referenced by: '<S46>/Calib' */

#endif

#if Rte_SysCon_Variant_TIDR_1

static volatile CONST(float32, TIDR_VAR_INIT) KeTIDR_v_VehicleSpdMin = 0.0F;/* Referenced by: '<S47>/Calib' */

#endif

#if Rte_SysCon_Variant_TIDR_1

static volatile CONST(float32, TIDR_VAR_INIT) KtTIDR_I_BatCurrHiFailThrsh[10] =
{
    -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F,
    -50.0F
} ;                                    /* Referenced by: '<S51>/Vector' */

#endif

#if Rte_SysCon_Variant_TIDR_1

static volatile CONST(float32, TIDR_VAR_INIT) KtTIDR_I_BatCurrLoFailThrsh[10] =
{
    50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F
} ;                                    /* Referenced by: '<S66>/Vector' */

#endif

#if Rte_SysCon_Variant_TIDR_1

static volatile CONST(float32, TIDR_VAR_INIT) KtTIDR_M_EngTrqDeltaPassThrsh[10] =
{
    50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F
} ;                                    /* Referenced by: '<S81>/Vector' */

#endif

#if Rte_SysCon_Variant_TIDR_1

static volatile CONST(float32, TIDR_VAR_INIT) KtTIDR_M_EngTrqHiFailThrsh[63] =
{
    -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F,
    -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F,
    -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F,
    -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F,
    -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F,
    -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F,
    -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F
} ;                                    /* Referenced by: '<S52>/Vector' */

#endif

#if Rte_SysCon_Variant_TIDR_1

static volatile CONST(float32, TIDR_VAR_INIT) KtTIDR_M_EngTrqLoFailThrsh[63] =
{
    -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F,
    -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F,
    -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F,
    -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F,
    -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F,
    -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F,
    -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -50.0F
} ;                                    /* Referenced by: '<S67>/Vector' */

#endif

#if Rte_SysCon_Variant_TIDR_1

static volatile CONST(float32, TIDR_VAR_INIT) KxTIDR_I_BatCurrHiFailThrsh[10] =
{
    0.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 99.0F
} ;                                    /* Referenced by: '<S51>/Vector' */

#endif

#if Rte_SysCon_Variant_TIDR_1

static volatile CONST(float32, TIDR_VAR_INIT) KxTIDR_I_BatCurrLoFailThrsh[10] =
{
    0.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 99.0F
} ;                                    /* Referenced by: '<S66>/Vector' */

#endif

#if Rte_SysCon_Variant_TIDR_1

static volatile CONST(float32, TIDR_VAR_INIT) KxTIDR_M_EngTrqDeltaPassThrsh[10] =
{
    0.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 99.0F
} ;                                    /* Referenced by: '<S81>/Vector' */

#endif

#if Rte_SysCon_Variant_TIDR_1

static volatile CONST(float32, TIDR_VAR_INIT) KxTIDR_M_EngTrqHiFailThrsh[9] =
{
    10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 99.0F
} ;                                    /* Referenced by: '<S52>/Vector' */

#endif

#if Rte_SysCon_Variant_TIDR_1

static volatile CONST(float32, TIDR_VAR_INIT) KxTIDR_M_EngTrqLoFailThrsh[9] =
{
    10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 99.0F
} ;                                    /* Referenced by: '<S67>/Vector' */

#endif

#if Rte_SysCon_Variant_TIDR_1

static volatile CONST(float32, TIDR_VAR_INIT) KyTIDR_M_EngTrqHiFailThrsh[7] =
{
    -700.0F, -500.0F, -100.0F, 0.0F, 100.0F, 500.0F, 700.0F
} ;                                    /* Referenced by: '<S52>/Vector' */

#endif

#if Rte_SysCon_Variant_TIDR_1

static volatile CONST(float32, TIDR_VAR_INIT) KyTIDR_M_EngTrqLoFailThrsh[7] =
{
    -700.0F, -500.0F, -100.0F, 0.0F, 100.0F, 500.0F, 700.0F
} ;                                    /* Referenced by: '<S67>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_TIDR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TIDR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_TIDR_1

static VAR(boolean, TIDR_VAR_INIT) VeTIDR_b_EngTrqHVBattEnbl;/* '<S18>/Logical' */

#endif

#if Rte_SysCon_Variant_TIDR_1

static VAR(boolean, TIDR_VAR_INIT) VeTIDR_b_EngTrqHVBattHiFail;/* '<S55>/OR1' */

#endif

#if Rte_SysCon_Variant_TIDR_1

static VAR(boolean, TIDR_VAR_INIT) VeTIDR_b_EngTrqHVBattHiFailCritMet;/* '<S19>/Comparison1' */

#endif

#if Rte_SysCon_Variant_TIDR_1

static VAR(boolean, TIDR_VAR_INIT) VeTIDR_b_EngTrqHVBattHiFailEnbl;/* '<S19>/Comparison2' */

#endif

#if Rte_SysCon_Variant_TIDR_1

static VAR(boolean, TIDR_VAR_INIT) VeTIDR_b_EngTrqHVBattLoFailCritMet;/* '<S26>/X' */

#endif

#if Rte_SysCon_Variant_TIDR_1

static VAR(boolean, TIDR_VAR_INIT) VeTIDR_b_EngTrqHVBattLoFailEnbl;/* '<S26>/Y' */

#endif

#if Rte_SysCon_Variant_TIDR_1

static VAR(boolean, TIDR_VAR_INIT) VeTIDR_b_EngTrqHVBattPassCritMet;/* '<S28>/Comparison1' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TIDR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_TIDR
#include "MemMap.h"

CONST(ConstB_TIDR_ac_T, TIDR_VAR_INIT) TIDR_ac_ConstB =
{
    0,                                 /* '<S98>/Const1' */
    0,                                 /* '<S98>/Const2' */
    0,                                 /* '<S98>/Const3' */
    0,                                 /* '<S98>/Const4' */
    CeDFIB_e_Init,                     /* '<S99>/Constant' */
    CeDFIB_e_Init,                     /* '<S100>/Constant' */
    CeDFIB_e_Init,                     /* '<S101>/Constant' */
    CeDFIB_e_Init,                     /* '<S102>/Constant' */
    CeDFIB_e_Init                      /* '<S103>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_TIDR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_TIDR
#include "MemMap.h"

CONST(ConstP_TIDR_ac_T, TIDR_VAR_INIT) TIDR_ac_ConstP =
{

#if Rte_SysCon_Variant_TIDR_1

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S52>/Vector'
     *   '<S67>/Vector'
     */
    {
        8U, 6U
    },

#endif

#ifndef CONSTP_TIDR_AC_T_VARIANT_EXISTS

    0
#endif
};

#define STOP_SEC_CONST_UNSPECIFIED_TIDR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TIDR
#include "MemMap.h"

VAR(B_TIDR_ac_T, TIDR_VAR_INIT) TIDR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TIDR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TIDR
#include "MemMap.h"

VAR(DW_TIDR_ac_T, TIDR_VAR_INIT) TIDR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TIDR
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, TIDR_CODE) TIDR_MedTEB(void) /* Explicit Task: MedTEB */
{
    /* local block i/o variables */
#if Rte_SysCon_Variant_TIDR_1

    boolean rtb_NOT4;

#endif

#if Rte_SysCon_Variant_TIDR_1

    boolean rtb_NOT4_g;

#endif

#if Rte_SysCon_Variant_TIDR_1

    boolean rtb_NOT4_i;

#endif

#if Rte_SysCon_Variant_TIDR_1

    boolean rtb_NOT4_l;

#endif

#if Rte_SysCon_Variant_TIDR_1

    boolean tmpRead;

#endif

#if Rte_SysCon_Variant_TIDR_1

    float32 tmpRead_0;

#endif

#if Rte_SysCon_Variant_TIDR_1

    TeESPR_e_EngSpdStatus tmpRead_1;

#endif

#if Rte_SysCon_Variant_TIDR_1

    TeSTRR_e_HybStrtrSt tmpRead_2;

#endif

#if Rte_SysCon_Variant_TIDR_1

    float32 tmpRead_3;

#endif

#if Rte_SysCon_Variant_TIDR_2

    boolean tmpRead_4;

#endif

#if Rte_SysCon_Variant_TIDR_2

    boolean tmpRead_5;

#endif

#if Rte_SysCon_Variant_TIDR_2

    boolean tmpRead_6;

#endif

#if Rte_SysCon_Variant_TIDR_2

    boolean tmpRead_7;

#endif

#if Rte_SysCon_Variant_TIDR_2

    boolean tmpRead_8;

#endif

#if Rte_SysCon_Variant_TIDR_2

    boolean tmpRead_9;

#endif

#if Rte_SysCon_Variant_TIDR_1

    float32 rtb_TmpSignalConversionAtVeTITR_M_SnsdEn;

#endif

#if Rte_SysCon_Variant_TIDR_1

    float32 rtb_TmpSignalConversionAtVeETQR_M_EngTrq;

#endif

#if Rte_SysCon_Variant_TIDR_1

    float32 rtb_TmpSignalConversionAtVeBPCR_I_HV_Bat;

#endif

#if Rte_SysCon_Variant_TIDR_1

    boolean rtb_Logical3;

#endif

#if Rte_SysCon_Variant_TIDR_1

    boolean rtb_OR6;

#endif

    boolean rtb_TmpSignalConversionAtVeDFIR_b_PostCo;

#if Rte_SysCon_Variant_TIDR_1

    boolean rtb_FailCounterReset;

#endif

#if Rte_SysCon_Variant_TIDR_1

    boolean rtb_OR6_g;

#endif

#if Rte_SysCon_Variant_TIDR_1

    boolean rtb_UnitDelay1_c;

#endif

#if Rte_SysCon_Variant_TIDR_1

    boolean rtb_FailCounterReset_c;

#endif

#if Rte_SysCon_Variant_TIDR_1

    boolean rtb_FailCounterReset_m;

#endif

#if Rte_SysCon_Variant_TIDR_1

    float32 rtb_TmpSignalConversionAtVeESPR_n_Engine;

#endif

#if Rte_SysCon_Variant_TIDR_1

    boolean rtb_AND_a;

#endif

#if Rte_SysCon_Variant_TIDR_1

    float32 rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B;

#endif

#if Rte_SysCon_Variant_TIDR_1

    float32 rtb_TmpSignalConversionAtVeTITR_dn_NiDot;

#endif

    boolean rtb_VariantMerge_For_Variant_Source_Va_0;

#if Rte_SysCon_Variant_TIDR_1

    float32 VeTIDR_b_EngTrqHVBattLoFailCritMet_tmp;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/TIDR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/TITD'
     */
    /* SignalConversion generated from: '<S1>/VeBPCR_I_HV_BatCurr' incorporates:
     *  Constant: '<S24>/Calib'
     *  Constant: '<S25>/Calib'
     *  Inport: '<Root>/VeBPCR_b_HV_BatCurrFA'
     *  Inport: '<Root>/VeCSVR_v_VehSpdSigned'
     *  Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe'
     *  Inport: '<Root>/VeENGR_T_EngCoolantTemp'
     *  Inport: '<Root>/VeENGR_b_ECT_SnsrFA'
     *  Inport: '<Root>/VeESPR_e_EngineSpeedStatus'
     *  Inport: '<Root>/VeETQR_b_EngTrqActual_FA'
     *  Inport: '<Root>/VeSRAR_b_EngSysDsbld'
     *  Inport: '<Root>/VeSTRR_e_HybStrtrSt'
     *  Inport: '<Root>/VeTITR_b_SnsdTi_notVld'
     *  Logic: '<S30>/Logical3'
     *  Logic: '<S31>/Logical3'
     *  Logic: '<S32>/Logical3'
     *  Logic: '<S33>/Logical3'
     *  SignalConversion generated from: '<S1>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     *  SignalConversion generated from: '<S1>/VeDFIR_b_PostCodeClrDiagDsbl'
     *  SignalConversion generated from: '<S1>/VeESPR_n_EngineSpeed'
     *  SignalConversion generated from: '<S1>/VeETQR_M_EngTrqActual'
     *  SignalConversion generated from: '<S1>/VeTITR_M_SnsdEng_Flt'
     *  SignalConversion generated from: '<S1>/VeTITR_dn_NiDot'
     *  SignalConversion generated from: '<S5>/Variant Source'
     *  UnitDelay: '<S20>/Unit Delay1'
     *  UnitDelay: '<S27>/Unit Delay1'
     *  UnitDelay: '<S54>/Unit Delay1'
     *  UnitDelay: '<S69>/Unit Delay1'
     * */
#if Rte_SysCon_Variant_TIDR_1

    /* Outputs for Atomic SubSystem: '<S5>/EngTorqPerfDiag' */
    /* SignalConversion generated from: '<S1>/VeBPCR_I_HV_BatCurr' incorporates:
     *  Inport: '<Root>/VeBPCR_I_HV_BatCurr'
     */
    (void)Rte_Read_VeBPCR_I_HV_BatCurr_Value
        (&rtb_TmpSignalConversionAtVeBPCR_I_HV_Bat);

    /* SignalConversion generated from: '<S1>/VeDFIR_b_PostCodeClrDiagDsbl' incorporates:
     *  Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl'
     */
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value
        (&rtb_TmpSignalConversionAtVeDFIR_b_PostCo);

    /* SignalConversion generated from: '<S1>/VeBPCR_Pct_HV_BatPackSOC_Arb' incorporates:
     *  Inport: '<Root>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     */
    (void)Rte_Read_VeBPCR_Pct_HV_BatPackSOC_Arb_Value
        (&rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B);

    /* SignalConversion generated from: '<S1>/VeESPR_n_EngineSpeed' incorporates:
     *  Inport: '<Root>/VeESPR_n_EngineSpeed'
     */
    (void)Rte_Read_VeESPR_n_EngineSpeed_Value
        (&rtb_TmpSignalConversionAtVeESPR_n_Engine);

    /* SignalConversion generated from: '<S1>/VeETQR_M_EngTrqActual' incorporates:
     *  Inport: '<Root>/VeETQR_M_EngTrqActual'
     */
    (void)Rte_Read_VeETQR_M_EngTrqActual_Value
        (&rtb_TmpSignalConversionAtVeETQR_M_EngTrq);

    /* SignalConversion generated from: '<S1>/VeTITR_M_SnsdEng_Flt' incorporates:
     *  Inport: '<Root>/VeTITR_M_SnsdEng_Flt'
     */
    (void)Rte_Read_VeTITR_M_SnsdEng_Flt_Value
        (&rtb_TmpSignalConversionAtVeTITR_M_SnsdEn);

    /* SignalConversion generated from: '<S1>/VeTITR_dn_NiDot' incorporates:
     *  Inport: '<Root>/VeTITR_dn_NiDot'
     */
    (void)Rte_Read_VeTITR_dn_NiDot_Value
        (&rtb_TmpSignalConversionAtVeTITR_dn_NiDot);
    (void)Rte_Read_VeESPR_e_EngineSpeedStatus_Value(&tmpRead_1);
    (void)Rte_Read_VeENGR_T_EngCoolantTemp_Value(&tmpRead_0);
    (void)Rte_Read_VeENGR_b_ECT_SnsrFA_Value(&rtb_OR6);
    (void)Rte_Read_VeBPCR_b_HV_BatCurrFA_Value(&tmpRead);

    /* Sum: '<S26>/Sum1' incorporates:
     *  Inport: '<Root>/VeBPCR_b_HV_BatCurrFA'
     *  Inport: '<Root>/VeENGR_T_EngCoolantTemp'
     *  Inport: '<Root>/VeENGR_b_ECT_SnsrFA'
     *  Inport: '<Root>/VeESPR_e_EngineSpeedStatus'
     *  Sum: '<S19>/Sum1'
     */
    VeTIDR_b_EngTrqHVBattLoFailCritMet_tmp =
        rtb_TmpSignalConversionAtVeTITR_M_SnsdEn -
        rtb_TmpSignalConversionAtVeETQR_M_EngTrq;

    /* RelationalOperator: '<S26>/X' incorporates:
     *  Lookup_n-D: '<S67>/Vector'
     *  SignalConversion generated from: '<S1>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     *  SignalConversion generated from: '<S1>/VeTITR_dn_NiDot'
     *  Sum: '<S26>/Sum1'
     */
    VeTIDR_b_EngTrqHVBattLoFailCritMet = (VeTIDR_b_EngTrqHVBattLoFailCritMet_tmp
        <= look2_iflf_binlca_16a(rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B,
        rtb_TmpSignalConversionAtVeTITR_dn_NiDot, ((const float32 *)
        &(KxTIDR_M_EngTrqLoFailThrsh[0])), ((const float32 *)
        &(KyTIDR_M_EngTrqLoFailThrsh[0])), ((const float32 *)
        &(KtTIDR_M_EngTrqLoFailThrsh[0])), (const uint32*)TIDR_ac_ConstP.pooled2,
        9U));

    /* RelationalOperator: '<S26>/Y' incorporates:
     *  Lookup_n-D: '<S66>/Vector'
     *  SignalConversion generated from: '<S1>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     */
    VeTIDR_b_EngTrqHVBattLoFailEnbl = (rtb_TmpSignalConversionAtVeBPCR_I_HV_Bat >=
        look1_iflf_binlca_16a(rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B, ((const
        float32 *)&(KxTIDR_I_BatCurrLoFailThrsh[0])), ((const float32 *)
        &(KtTIDR_I_BatCurrLoFailThrsh[0])), 9U));

    /* Outputs for Atomic SubSystem: '<S18>/OpenInterval' */
    /* Logic: '<S18>/Logical3' incorporates:
     *  Constant: '<S39>/Constant'
     *  Constant: '<S43>/Calib'
     *  Constant: '<S44>/Calib'
     *  Inport: '<Root>/VeESPR_e_EngineSpeedStatus'
     *  Logic: '<S48>/Logical Operator'
     *  RelationalOperator: '<S18>/Comparison5'
     *  RelationalOperator: '<S48>/Relatonal Operator'
     *  RelationalOperator: '<S48>/Relatonal Operator1'
     */
    rtb_Logical3 = ((tmpRead_1 != CeESPR_e_EngSpdInvalid) &&
                    ((rtb_TmpSignalConversionAtVeESPR_n_Engine >
                      KeTIDR_n_EngIdleMin) &&
                     (rtb_TmpSignalConversionAtVeESPR_n_Engine <
                      KeTIDR_n_EngIdleMax)));

    /* End of Outputs for SubSystem: '<S18>/OpenInterval' */

    /* Outputs for Atomic SubSystem: '<S18>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S49>/EdgeRising' */
    /* Logic: '<S50>/AND' incorporates:
     *  Logic: '<S50>/OR1'
     *  UnitDelay: '<S50>/Unit Delay'
     */
    rtb_AND_a = (rtb_Logical3 && (!TIDR_ac_DW.UnitDelay_DSTATE_g1));

    /* Update for UnitDelay: '<S50>/Unit Delay' */
    TIDR_ac_DW.UnitDelay_DSTATE_g1 = rtb_Logical3;

    /* End of Outputs for SubSystem: '<S49>/EdgeRising' */

    /* Switch: '<S49>/Switch1' incorporates:
     *  Constant: '<S45>/Calib'
     *  Constant: '<S46>/Calib'
     *  Constant: '<S49>/Constant Value1'
     *  Logic: '<S49>/OR'
     *  Logic: '<S49>/OR1'
     *  MinMax: '<S49>/Minimum'
     *  Sum: '<S49>/Summation'
     *  UnitDelay: '<S49>/Unit Delay'
     */
    if ((!rtb_Logical3) || rtb_AND_a)
    {
        TIDR_ac_DW.UnitDelay_DSTATE = 0.0F;
    }
    else
    {
        TIDR_ac_DW.UnitDelay_DSTATE = fminf(KeTIDR_t_EngIdleDly, KeTIDR_t_dT +
            TIDR_ac_DW.UnitDelay_DSTATE);
    }

    /* End of Switch: '<S49>/Switch1' */
    /* End of Outputs for SubSystem: '<S18>/Turn On Delay Time' */
    (void)Rte_Read_VeTITR_b_SnsdTi_notVld_Value(&rtb_FailCounterReset);
    (void)Rte_Read_VeCSVR_v_VehSpdSigned_Value(&tmpRead_3);
    (void)Rte_Read_VeSTRR_e_HybStrtrSt_Value(&tmpRead_2);
    (void)Rte_Read_VeSRAR_b_EngSysDsbld_Value(&rtb_OR6_g);
    (void)Rte_Read_VeETQR_b_EngTrqActual_FA_Value(&rtb_UnitDelay1_c);
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value
        (&rtb_VariantMerge_For_Variant_Source_Va_0);

    /* Outputs for Atomic SubSystem: '<S18>/Turn On Delay Time' */
    /* Logic: '<S18>/Logical' incorporates:
     *  Abs: '<S18>/Abs'
     *  Constant: '<S38>/Constant'
     *  Constant: '<S40>/Calib'
     *  Constant: '<S41>/Calib'
     *  Constant: '<S42>/Calib'
     *  Constant: '<S45>/Calib'
     *  Constant: '<S47>/Calib'
     *  Inport: '<Root>/VeCSVR_v_VehSpdSigned'
     *  Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe'
     *  Inport: '<Root>/VeETQR_b_EngTrqActual_FA'
     *  Inport: '<Root>/VeSRAR_b_EngSysDsbld'
     *  Inport: '<Root>/VeSTRR_e_HybStrtrSt'
     *  Inport: '<Root>/VeTITR_b_SnsdTi_notVld'
     *  Logic: '<S18>/Logical1'
     *  Logic: '<S18>/Logical2'
     *  Logic: '<S18>/Logical4'
     *  Logic: '<S18>/Logical5'
     *  Logic: '<S18>/Logical6'
     *  Logic: '<S18>/Logical7'
     *  Logic: '<S49>/AND'
     *  RelationalOperator: '<S18>/Comparison1'
     *  RelationalOperator: '<S18>/Comparison4'
     *  RelationalOperator: '<S18>/Relational Operator'
     *  RelationalOperator: '<S49>/Greater  Than'
     *  UnitDelay: '<S49>/Unit Delay'
     */
    VeTIDR_b_EngTrqHVBattEnbl = ((((((((((!tmpRead) && (!rtb_OR6)) && (tmpRead_0
        >= KeTIDR_T_EngCoolMin)) && (rtb_Logical3 &&
        (TIDR_ac_DW.UnitDelay_DSTATE >= KeTIDR_t_EngIdleDly))) &&
        (!rtb_UnitDelay1_c)) && ((!rtb_OR6_g) || (!KeTIDR_b_EngSysDsbldEnbl))) &&
        (tmpRead_2 == CeSTRR_e_EngRunningSt)) && (!rtb_FailCounterReset)) &&
        (fabsf(tmpRead_3) <= KeTIDR_v_VehicleSpdMin)) &&
        (KeTIDR_b_EngTrqHVBattEnbl));

    /* End of Outputs for SubSystem: '<S18>/Turn On Delay Time' */

    /* Logic: '<S27>/OR6' */
    rtb_OR6 = ((VeTIDR_b_EngTrqHVBattLoFailEnbl) && (VeTIDR_b_EngTrqHVBattEnbl));

    /* Logic: '<S27>/OR2' incorporates:
     *  Logic: '<S13>/Logical1'
     *  Logic: '<S20>/OR2'
     *  Logic: '<S27>/OR3'
     */
    rtb_VariantMerge_For_Variant_Source_Va_0 = ((!VeTIDR_b_EngTrqHVBattEnbl) ||
        (rtb_VariantMerge_For_Variant_Source_Va_0 ||
         rtb_TmpSignalConversionAtVeDFIR_b_PostCo));

    /* Logic: '<S68>/Fail Counter Reset' incorporates:
     *  Logic: '<S27>/OR2'
     *  Logic: '<S27>/OR4'
     *  UnitDelay: '<S27>/Unit Delay'
     *  UnitDelay: '<S68>/Unit Delay'
     *  UnitDelay: '<S68>/Unit Delay1'
     */
    rtb_FailCounterReset = (((TIDR_ac_DW.UnitDelay1_DSTATE) ||
        (rtb_VariantMerge_For_Variant_Source_Va_0 ||
         (TIDR_ac_DW.UnitDelay_DSTATE_c))) || (TIDR_ac_DW.UnitDelay_DSTATE_n));

    /* Outputs for Atomic SubSystem: '<S68>/Counter Reset  Enabled ' */
    /* Switch: '<S73>/Switch1' incorporates:
     *  Constant: '<S73>/Constant Value2'
     *  Logic: '<S68>/NOT6'
     *  Switch: '<S73>/Switch2'
     *  UnitDelay: '<S73>/Unit Delay'
     */
    if (rtb_FailCounterReset)
    {
        TIDR_ac_DW.UnitDelay_DSTATE_l = ((uint16)0U);
    }
    else
    {
        if ((VeTIDR_b_EngTrqHVBattLoFailCritMet) && rtb_OR6)
        {
            /* UnitDelay: '<S73>/Unit Delay' incorporates:
             *  Constant: '<S73>/Constant Value1'
             *  Sum: '<S73>/Subtraction'
             *  Switch: '<S73>/Switch2'
             */
            TIDR_ac_DW.UnitDelay_DSTATE_l = (uint16)(((uint32)((uint16)1U)) +
                ((uint32)TIDR_ac_DW.UnitDelay_DSTATE_l));
        }
    }

    /* End of Switch: '<S73>/Switch1' */
    /* End of Outputs for SubSystem: '<S68>/Counter Reset  Enabled ' */

    /* RelationalOperator: '<S28>/Comparison1' incorporates:
     *  Abs: '<S28>/Abs'
     *  Lookup_n-D: '<S81>/Vector'
     *  SignalConversion generated from: '<S1>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     *  Sum: '<S28>/Sum1'
     */
    VeTIDR_b_EngTrqHVBattPassCritMet = (fabsf
        (rtb_TmpSignalConversionAtVeETQR_M_EngTrq -
         rtb_TmpSignalConversionAtVeTITR_M_SnsdEn) <= look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B, ((const float32 *)
        &(KxTIDR_M_EngTrqDeltaPassThrsh[0])), ((const float32 *)
        &(KtTIDR_M_EngTrqDeltaPassThrsh[0])), 9U));

    /* Logic: '<S27>/OR5' incorporates:
     *  Constant: '<S11>/TRUE Constant1'
     *  Logic: '<S20>/OR5'
     */
    tmpRead = ((VeTIDR_b_EngTrqHVBattEnbl) && (true));

    /* UnitDelay: '<S69>/Unit Delay1' */
    rtb_Logical3 = TIDR_ac_DW.UnitDelay1_DSTATE_o;

    /* Logic: '<S69>/Fail Counter Reset' incorporates:
     *  Logic: '<S27>/OR1'
     *  Logic: '<S27>/OR2'
     *  UnitDelay: '<S27>/Unit Delay1'
     *  UnitDelay: '<S69>/Unit Delay'
     *  UnitDelay: '<S69>/Unit Delay1'
     */
    rtb_AND_a = (((TIDR_ac_DW.UnitDelay1_DSTATE_o) ||
                  (rtb_VariantMerge_For_Variant_Source_Va_0 ||
                   (TIDR_ac_DW.UnitDelay1_DSTATE_on))) ||
                 (TIDR_ac_DW.UnitDelay_DSTATE_f5));

    /* Outputs for Atomic SubSystem: '<S69>/Counter Reset  Enabled ' */
    /* Switch: '<S75>/Switch1' incorporates:
     *  Constant: '<S75>/Constant Value2'
     *  Logic: '<S27>/OR5'
     *  Logic: '<S69>/NOT6'
     *  Switch: '<S75>/Switch2'
     *  UnitDelay: '<S75>/Unit Delay'
     */
    if (rtb_AND_a)
    {
        TIDR_ac_DW.UnitDelay_DSTATE_d = ((uint16)0U);
    }
    else
    {
        if ((VeTIDR_b_EngTrqHVBattPassCritMet) && tmpRead)
        {
            /* UnitDelay: '<S75>/Unit Delay' incorporates:
             *  Constant: '<S75>/Constant Value1'
             *  Sum: '<S75>/Subtraction'
             *  Switch: '<S75>/Switch2'
             */
            TIDR_ac_DW.UnitDelay_DSTATE_d = (uint16)(((uint32)((uint16)1U)) +
                ((uint32)TIDR_ac_DW.UnitDelay_DSTATE_d));
        }
    }

    /* End of Switch: '<S75>/Switch1' */
    /* End of Outputs for SubSystem: '<S69>/Counter Reset  Enabled ' */

    /* RelationalOperator: '<S69>/Greater Than or Equal ' incorporates:
     *  Constant: '<S22>/Calib'
     *  UnitDelay: '<S69>/Unit Delay1'
     *  UnitDelay: '<S75>/Unit Delay'
     */
    TIDR_ac_DW.UnitDelay1_DSTATE_o = (TIDR_ac_DW.UnitDelay_DSTATE_d >=
        KeTIDR_Cnt_EngTrqHVBattPassLmt);

    /* Switch: '<S78>/Switch1' incorporates:
     *  Constant: '<S71>/Constant Value'
     *  DataStoreWrite: '<S11>/Data Store Write1'
     *  Switch: '<S77>/Switch1'
     *  UnitDelay: '<S69>/Unit Delay1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        TIDR_ac_DW.NeTIDR_Cnt_EngTrqLoFlt_MFOP = ((uint16)0U);
    }
    else
    {
        if (TIDR_ac_DW.UnitDelay1_DSTATE_o)
        {
            /* MinMax: '<S71>/Minimum2' incorporates:
             *  DataStoreRead: '<S11>/Data Store Read3'
             *  Switch: '<S77>/Switch1'
             *  UnitDelay: '<S73>/Unit Delay'
             */
            if (TIDR_ac_DW.UnitDelay_DSTATE_l >
                    TIDR_ac_DW.NeTIDR_Cnt_EngTrqLoFlt_MFOP)
            {
                /* DataStoreWrite: '<S11>/Data Store Write1' incorporates:
                 *  Switch: '<S77>/Switch1'
                 */
                TIDR_ac_DW.NeTIDR_Cnt_EngTrqLoFlt_MFOP =
                    TIDR_ac_DW.UnitDelay_DSTATE_l;
            }

            /* End of MinMax: '<S71>/Minimum2' */
        }
    }

    /* End of Switch: '<S78>/Switch1' */

    /* RelationalOperator: '<S19>/Comparison1' incorporates:
     *  Lookup_n-D: '<S52>/Vector'
     *  SignalConversion generated from: '<S1>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     *  SignalConversion generated from: '<S1>/VeTITR_dn_NiDot'
     */
    VeTIDR_b_EngTrqHVBattHiFailCritMet = (VeTIDR_b_EngTrqHVBattLoFailCritMet_tmp
        >= look2_iflf_binlca_16a(rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B,
        rtb_TmpSignalConversionAtVeTITR_dn_NiDot, ((const float32 *)
        &(KxTIDR_M_EngTrqHiFailThrsh[0])), ((const float32 *)
        &(KyTIDR_M_EngTrqHiFailThrsh[0])), ((const float32 *)
        &(KtTIDR_M_EngTrqHiFailThrsh[0])), (const uint32*)TIDR_ac_ConstP.pooled2,
        9U));

    /* RelationalOperator: '<S19>/Comparison2' incorporates:
     *  Lookup_n-D: '<S51>/Vector'
     *  SignalConversion generated from: '<S1>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     */
    VeTIDR_b_EngTrqHVBattHiFailEnbl = (rtb_TmpSignalConversionAtVeBPCR_I_HV_Bat <=
        look1_iflf_binlca_16a(rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B, ((const
        float32 *)&(KxTIDR_I_BatCurrHiFailThrsh[0])), ((const float32 *)
        &(KtTIDR_I_BatCurrHiFailThrsh[0])), 9U));

    /* Logic: '<S20>/OR6' */
    rtb_OR6_g = ((VeTIDR_b_EngTrqHVBattHiFailEnbl) && (VeTIDR_b_EngTrqHVBattEnbl));

    /* Logic: '<S53>/Fail Counter Reset' incorporates:
     *  Logic: '<S20>/OR4'
     *  UnitDelay: '<S20>/Unit Delay'
     *  UnitDelay: '<S53>/Unit Delay'
     *  UnitDelay: '<S53>/Unit Delay1'
     */
    rtb_FailCounterReset_c = (((TIDR_ac_DW.UnitDelay1_DSTATE_m) ||
        (rtb_VariantMerge_For_Variant_Source_Va_0 ||
         (TIDR_ac_DW.UnitDelay_DSTATE_ex))) || (TIDR_ac_DW.UnitDelay_DSTATE_ll));

    /* Outputs for Atomic SubSystem: '<S53>/Counter Reset  Enabled ' */
    /* Switch: '<S58>/Switch1' incorporates:
     *  Constant: '<S58>/Constant Value2'
     *  Logic: '<S53>/NOT6'
     *  Switch: '<S58>/Switch2'
     *  UnitDelay: '<S58>/Unit Delay'
     */
    if (rtb_FailCounterReset_c)
    {
        TIDR_ac_DW.UnitDelay_DSTATE_gg = ((uint16)0U);
    }
    else
    {
        if ((VeTIDR_b_EngTrqHVBattHiFailCritMet) && rtb_OR6_g)
        {
            /* UnitDelay: '<S58>/Unit Delay' incorporates:
             *  Constant: '<S58>/Constant Value1'
             *  Sum: '<S58>/Subtraction'
             *  Switch: '<S58>/Switch2'
             */
            TIDR_ac_DW.UnitDelay_DSTATE_gg = (uint16)(((uint32)((uint16)1U)) +
                ((uint32)TIDR_ac_DW.UnitDelay_DSTATE_gg));
        }
    }

    /* End of Switch: '<S58>/Switch1' */
    /* End of Outputs for SubSystem: '<S53>/Counter Reset  Enabled ' */

    /* UnitDelay: '<S54>/Unit Delay1' */
    rtb_UnitDelay1_c = TIDR_ac_DW.UnitDelay1_DSTATE_j;

    /* Logic: '<S54>/Fail Counter Reset' incorporates:
     *  Logic: '<S20>/OR1'
     *  UnitDelay: '<S20>/Unit Delay1'
     *  UnitDelay: '<S54>/Unit Delay'
     *  UnitDelay: '<S54>/Unit Delay1'
     */
    rtb_FailCounterReset_m = (((TIDR_ac_DW.UnitDelay1_DSTATE_j) ||
        (rtb_VariantMerge_For_Variant_Source_Va_0 ||
         (TIDR_ac_DW.UnitDelay1_DSTATE_m0))) || (TIDR_ac_DW.UnitDelay_DSTATE_j));

    /* Outputs for Atomic SubSystem: '<S54>/Counter Reset  Enabled ' */
    /* Switch: '<S60>/Switch1' incorporates:
     *  Constant: '<S60>/Constant Value2'
     *  Logic: '<S54>/NOT6'
     *  Switch: '<S60>/Switch2'
     *  UnitDelay: '<S60>/Unit Delay'
     */
    if (rtb_FailCounterReset_m)
    {
        TIDR_ac_DW.UnitDelay_DSTATE_f = ((uint16)0U);
    }
    else
    {
        if ((VeTIDR_b_EngTrqHVBattPassCritMet) && tmpRead)
        {
            /* UnitDelay: '<S60>/Unit Delay' incorporates:
             *  Constant: '<S60>/Constant Value1'
             *  Sum: '<S60>/Subtraction'
             *  Switch: '<S60>/Switch2'
             */
            TIDR_ac_DW.UnitDelay_DSTATE_f = (uint16)(((uint32)((uint16)1U)) +
                ((uint32)TIDR_ac_DW.UnitDelay_DSTATE_f));
        }
    }

    /* End of Switch: '<S60>/Switch1' */
    /* End of Outputs for SubSystem: '<S54>/Counter Reset  Enabled ' */

    /* RelationalOperator: '<S54>/Greater Than or Equal ' incorporates:
     *  Constant: '<S22>/Calib'
     *  UnitDelay: '<S54>/Unit Delay1'
     *  UnitDelay: '<S60>/Unit Delay'
     */
    TIDR_ac_DW.UnitDelay1_DSTATE_j = (TIDR_ac_DW.UnitDelay_DSTATE_f >=
        KeTIDR_Cnt_EngTrqHVBattPassLmt);

    /* Switch: '<S63>/Switch1' incorporates:
     *  Constant: '<S56>/Constant Value'
     *  DataStoreWrite: '<S11>/Data Store Write2'
     *  Switch: '<S62>/Switch1'
     *  UnitDelay: '<S54>/Unit Delay1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        TIDR_ac_DW.NeTIDR_Cnt_EngTrqHiFlt_MFOP = ((uint16)0U);
    }
    else
    {
        if (TIDR_ac_DW.UnitDelay1_DSTATE_j)
        {
            /* MinMax: '<S56>/Minimum2' incorporates:
             *  DataStoreRead: '<S11>/Data Store Read1'
             *  Switch: '<S62>/Switch1'
             *  UnitDelay: '<S58>/Unit Delay'
             */
            if (TIDR_ac_DW.UnitDelay_DSTATE_gg >
                    TIDR_ac_DW.NeTIDR_Cnt_EngTrqHiFlt_MFOP)
            {
                /* DataStoreWrite: '<S11>/Data Store Write2' incorporates:
                 *  Switch: '<S62>/Switch1'
                 */
                TIDR_ac_DW.NeTIDR_Cnt_EngTrqHiFlt_MFOP =
                    TIDR_ac_DW.UnitDelay_DSTATE_gg;
            }

            /* End of MinMax: '<S56>/Minimum2' */
        }
    }

    /* End of Switch: '<S63>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S53>/Counter Reset  Enabled 1' */
    /* Switch: '<S59>/Switch1' incorporates:
     *  Constant: '<S59>/Constant Value2'
     *  Switch: '<S59>/Switch2'
     *  UnitDelay: '<S59>/Unit Delay'
     */
    if (rtb_FailCounterReset_c)
    {
        TIDR_ac_DW.UnitDelay_DSTATE_ln = ((uint16)0U);
    }
    else
    {
        if (rtb_OR6_g)
        {
            /* UnitDelay: '<S59>/Unit Delay' incorporates:
             *  Constant: '<S59>/Constant Value1'
             *  Sum: '<S59>/Subtraction'
             *  Switch: '<S59>/Switch2'
             */
            TIDR_ac_DW.UnitDelay_DSTATE_ln = (uint16)(((uint32)((uint16)1U)) +
                ((uint32)TIDR_ac_DW.UnitDelay_DSTATE_ln));
        }
    }

    /* End of Switch: '<S59>/Switch1' */
    /* End of Outputs for SubSystem: '<S53>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S53>/Greater Than or Equal ' incorporates:
     *  Constant: '<S21>/Calib'
     *  UnitDelay: '<S20>/Unit Delay1'
     *  UnitDelay: '<S58>/Unit Delay'
     */
    TIDR_ac_DW.UnitDelay1_DSTATE_m0 = (TIDR_ac_DW.UnitDelay_DSTATE_gg >=
        KeTIDR_Cnt_EngTrqHVBattFailLmt);

    /* Switch: '<S65>/Switch1' incorporates:
     *  Constant: '<S57>/Constant Value'
     *  DataStoreWrite: '<S11>/Data Store Write3'
     *  Switch: '<S64>/Switch1'
     *  UnitDelay: '<S20>/Unit Delay1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        TIDR_ac_DW.NeTIDR_Cnt_EngTrqHiFlt_MSOF = ((uint16)65535U);
    }
    else
    {
        if (TIDR_ac_DW.UnitDelay1_DSTATE_m0)
        {
            /* MinMax: '<S57>/Minimum1' incorporates:
             *  DataStoreRead: '<S11>/Data Store Read2'
             *  Switch: '<S64>/Switch1'
             *  UnitDelay: '<S59>/Unit Delay'
             */
            if (TIDR_ac_DW.UnitDelay_DSTATE_ln <
                    TIDR_ac_DW.NeTIDR_Cnt_EngTrqHiFlt_MSOF)
            {
                /* DataStoreWrite: '<S11>/Data Store Write3' incorporates:
                 *  Switch: '<S64>/Switch1'
                 */
                TIDR_ac_DW.NeTIDR_Cnt_EngTrqHiFlt_MSOF =
                    TIDR_ac_DW.UnitDelay_DSTATE_ln;
            }

            /* End of MinMax: '<S57>/Minimum1' */
        }
    }

    /* End of Switch: '<S65>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S68>/Counter Reset  Enabled 1' */
    /* Switch: '<S74>/Switch1' incorporates:
     *  Constant: '<S74>/Constant Value2'
     *  Switch: '<S74>/Switch2'
     *  UnitDelay: '<S74>/Unit Delay'
     */
    if (rtb_FailCounterReset)
    {
        TIDR_ac_DW.UnitDelay_DSTATE_g = ((uint16)0U);
    }
    else
    {
        if (rtb_OR6)
        {
            /* UnitDelay: '<S74>/Unit Delay' incorporates:
             *  Constant: '<S74>/Constant Value1'
             *  Sum: '<S74>/Subtraction'
             *  Switch: '<S74>/Switch2'
             */
            TIDR_ac_DW.UnitDelay_DSTATE_g = (uint16)(((uint32)((uint16)1U)) +
                ((uint32)TIDR_ac_DW.UnitDelay_DSTATE_g));
        }
    }

    /* End of Switch: '<S74>/Switch1' */
    /* End of Outputs for SubSystem: '<S68>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S68>/Greater Than or Equal ' incorporates:
     *  Constant: '<S21>/Calib'
     *  UnitDelay: '<S27>/Unit Delay1'
     *  UnitDelay: '<S73>/Unit Delay'
     */
    TIDR_ac_DW.UnitDelay1_DSTATE_on = (TIDR_ac_DW.UnitDelay_DSTATE_l >=
        KeTIDR_Cnt_EngTrqHVBattFailLmt);

    /* Switch: '<S80>/Switch1' incorporates:
     *  Constant: '<S72>/Constant Value'
     *  DataStoreWrite: '<S11>/Data Store Write4'
     *  Switch: '<S79>/Switch1'
     *  UnitDelay: '<S27>/Unit Delay1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        TIDR_ac_DW.NeTIDR_Cnt_EngTrqLoFlt_MSOF = ((uint16)65535U);
    }
    else
    {
        if (TIDR_ac_DW.UnitDelay1_DSTATE_on)
        {
            /* MinMax: '<S72>/Minimum1' incorporates:
             *  DataStoreRead: '<S11>/Data Store Read4'
             *  Switch: '<S79>/Switch1'
             *  UnitDelay: '<S74>/Unit Delay'
             */
            if (TIDR_ac_DW.UnitDelay_DSTATE_g <
                    TIDR_ac_DW.NeTIDR_Cnt_EngTrqLoFlt_MSOF)
            {
                /* DataStoreWrite: '<S11>/Data Store Write4' incorporates:
                 *  Switch: '<S79>/Switch1'
                 */
                TIDR_ac_DW.NeTIDR_Cnt_EngTrqLoFlt_MSOF =
                    TIDR_ac_DW.UnitDelay_DSTATE_g;
            }

            /* End of MinMax: '<S72>/Minimum1' */
        }
    }

    /* End of Switch: '<S80>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S11>/Event_EngTorqPerfHi_ReportTestFailed_2' incorporates:
     *  EnablePort: '<S14>/Enable'
     */
    if ((KeTIDR_b_EnblP1B12) && (TIDR_ac_DW.UnitDelay1_DSTATE_m0))
    {
        /* DataStoreWrite: '<S14>/VeTIDR_e_FaultSts_EngTorqPerfHi' incorporates:
         *  Constant: '<S34>/Constant'
         */
        TIDR_ac_DW.VeTIDR_e_FaultSts_EngTorqPerfHi = CeDFIB_e_Fail;
    }

    /* End of Outputs for SubSystem: '<S11>/Event_EngTorqPerfHi_ReportTestFailed_2' */

    /* Outputs for Enabled SubSystem: '<S11>/Event_EngTorqPerfHi_ReportTestPassed_3' incorporates:
     *  EnablePort: '<S15>/Enable'
     */
    if ((KeTIDR_b_EnblP1B12) && (TIDR_ac_DW.UnitDelay1_DSTATE_j))
    {
        /* DataStoreWrite: '<S15>/VeTIDR_e_FaultSts_EngTorqPerfHi' incorporates:
         *  Constant: '<S35>/Constant'
         */
        TIDR_ac_DW.VeTIDR_e_FaultSts_EngTorqPerfHi = CeDFIB_e_Pass;
    }

    /* End of Outputs for SubSystem: '<S11>/Event_EngTorqPerfHi_ReportTestPassed_3' */

    /* Outputs for Enabled SubSystem: '<S11>/Event_EngTorqPerfLo_ReportTestFailed_1' incorporates:
     *  EnablePort: '<S16>/Enable'
     */
    if ((KeTIDR_b_EnblP1B11) && (TIDR_ac_DW.UnitDelay1_DSTATE_on))
    {
        /* DataStoreWrite: '<S16>/VeTIDR_e_FaultSts_EngTorqPerfLo' incorporates:
         *  Constant: '<S36>/Constant'
         */
        TIDR_ac_DW.VeTIDR_e_FaultSts_EngTorqPerfLo = CeDFIB_e_Fail;
    }

    /* End of Outputs for SubSystem: '<S11>/Event_EngTorqPerfLo_ReportTestFailed_1' */

    /* Outputs for Enabled SubSystem: '<S11>/Event_EngTorqPerfLo_ReportTestPassed_4' incorporates:
     *  EnablePort: '<S17>/Enable'
     */
    if ((KeTIDR_b_EnblP1B11) && (TIDR_ac_DW.UnitDelay1_DSTATE_o))
    {
        /* DataStoreWrite: '<S17>/VeTIDR_e_FaultSts_EngTorqPerfLo' incorporates:
         *  Constant: '<S37>/Constant'
         */
        TIDR_ac_DW.VeTIDR_e_FaultSts_EngTorqPerfLo = CeDFIB_e_Pass;
    }

    /* End of Outputs for SubSystem: '<S11>/Event_EngTorqPerfLo_ReportTestPassed_4' */

    /* Logic: '<S53>/NOT4' incorporates:
     *  Constant: '<S24>/Calib'
     *  Constant: '<S25>/Calib'
     *  Logic: '<S30>/Logical3'
     *  Logic: '<S31>/Logical3'
     *  Logic: '<S32>/Logical3'
     *  Logic: '<S33>/Logical3'
     *  Logic: '<S53>/NOT1'
     *  Logic: '<S53>/NOT2'
     *  UnitDelay: '<S20>/Unit Delay1'
     *  UnitDelay: '<S27>/Unit Delay1'
     *  UnitDelay: '<S53>/Unit Delay1'
     *  UnitDelay: '<S54>/Unit Delay1'
     *  UnitDelay: '<S69>/Unit Delay1'
     */
    rtb_NOT4 = (rtb_OR6_g && ((!rtb_OR6_g) || (!TIDR_ac_DW.UnitDelay1_DSTATE_m)));

    /* Logic: '<S53>/NOT5' incorporates:
     *  Constant: '<S23>/Calib'
     *  Logic: '<S53>/NOT3'
     *  RelationalOperator: '<S53>/Less Than  or Equal'
     *  UnitDelay: '<S20>/Unit Delay1'
     *  UnitDelay: '<S53>/Unit Delay'
     *  UnitDelay: '<S59>/Unit Delay'
     */
    TIDR_ac_DW.UnitDelay_DSTATE_ll = ((!TIDR_ac_DW.UnitDelay1_DSTATE_m0) &&
        (TIDR_ac_DW.UnitDelay_DSTATE_ln >= KeTIDR_Cnt_EngTrqHVBattSmplLmt));

    /* Outputs for Atomic SubSystem: '<S54>/Counter Reset  Enabled 1' */
    /* Switch: '<S61>/Switch1' incorporates:
     *  Constant: '<S61>/Constant Value2'
     *  Switch: '<S61>/Switch2'
     *  UnitDelay: '<S61>/Unit Delay'
     */
    if (rtb_FailCounterReset_m)
    {
        TIDR_ac_DW.UnitDelay_DSTATE_m = ((uint16)0U);
    }
    else
    {
        if (tmpRead)
        {
            /* UnitDelay: '<S61>/Unit Delay' incorporates:
             *  Constant: '<S61>/Constant Value1'
             *  Sum: '<S61>/Subtraction'
             *  Switch: '<S61>/Switch2'
             */
            TIDR_ac_DW.UnitDelay_DSTATE_m = (uint16)(((uint32)((uint16)1U)) +
                ((uint32)TIDR_ac_DW.UnitDelay_DSTATE_m));
        }
    }

    /* End of Switch: '<S61>/Switch1' */
    /* End of Outputs for SubSystem: '<S54>/Counter Reset  Enabled 1' */

    /* Logic: '<S54>/NOT4' incorporates:
     *  Logic: '<S54>/NOT1'
     *  Logic: '<S54>/NOT2'
     */
    rtb_NOT4_g = (tmpRead && ((!tmpRead) || (!rtb_UnitDelay1_c)));

    /* Logic: '<S54>/NOT3' incorporates:
     *  Logic: '<S20>/NOT4'
     *  UnitDelay: '<S54>/Unit Delay1'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_PostCo = !TIDR_ac_DW.UnitDelay1_DSTATE_j;

    /* Logic: '<S54>/NOT5' incorporates:
     *  Constant: '<S23>/Calib'
     *  Logic: '<S54>/NOT3'
     *  RelationalOperator: '<S54>/Less Than  or Equal'
     *  UnitDelay: '<S54>/Unit Delay'
     *  UnitDelay: '<S61>/Unit Delay'
     */
    TIDR_ac_DW.UnitDelay_DSTATE_j = (rtb_TmpSignalConversionAtVeDFIR_b_PostCo &&
        (TIDR_ac_DW.UnitDelay_DSTATE_m >= KeTIDR_Cnt_EngTrqHVBattSmplLmt));

    /* Outputs for Atomic SubSystem: '<S20>/Signal Latch On With Reset' */
    /* Logic: '<S55>/OR1' incorporates:
     *  Logic: '<S20>/NOT4'
     *  Logic: '<S55>/NOT'
     *  Logic: '<S55>/OR'
     *  UnitDelay: '<S20>/Unit Delay1'
     *  UnitDelay: '<S55>/Unit Delay'
     */
    VeTIDR_b_EngTrqHVBattHiFail = ((TIDR_ac_DW.UnitDelay1_DSTATE_m0) ||
        (((!rtb_VariantMerge_For_Variant_Source_Va_0) &&
          rtb_TmpSignalConversionAtVeDFIR_b_PostCo) &&
         (VeTIDR_b_EngTrqHVBattHiFail)));

    /* End of Outputs for SubSystem: '<S20>/Signal Latch On With Reset' */

    /* Logic: '<S68>/NOT4' incorporates:
     *  Logic: '<S68>/NOT1'
     *  Logic: '<S68>/NOT2'
     *  UnitDelay: '<S68>/Unit Delay1'
     */
    rtb_NOT4_i = (rtb_OR6 && ((!rtb_OR6) || (!TIDR_ac_DW.UnitDelay1_DSTATE)));

    /* Logic: '<S68>/NOT5' incorporates:
     *  Constant: '<S23>/Calib'
     *  Logic: '<S68>/NOT3'
     *  RelationalOperator: '<S68>/Less Than  or Equal'
     *  UnitDelay: '<S27>/Unit Delay1'
     *  UnitDelay: '<S68>/Unit Delay'
     *  UnitDelay: '<S74>/Unit Delay'
     */
    TIDR_ac_DW.UnitDelay_DSTATE_n = ((!TIDR_ac_DW.UnitDelay1_DSTATE_on) &&
        (TIDR_ac_DW.UnitDelay_DSTATE_g >= KeTIDR_Cnt_EngTrqHVBattSmplLmt));

    /* Outputs for Atomic SubSystem: '<S69>/Counter Reset  Enabled 1' */
    /* Switch: '<S76>/Switch1' incorporates:
     *  Constant: '<S76>/Constant Value2'
     *  Logic: '<S27>/OR5'
     *  Switch: '<S76>/Switch2'
     *  UnitDelay: '<S76>/Unit Delay'
     */
    if (rtb_AND_a)
    {
        TIDR_ac_DW.UnitDelay_DSTATE_e = ((uint16)0U);
    }
    else
    {
        if (tmpRead)
        {
            /* UnitDelay: '<S76>/Unit Delay' incorporates:
             *  Constant: '<S76>/Constant Value1'
             *  Sum: '<S76>/Subtraction'
             *  Switch: '<S76>/Switch2'
             */
            TIDR_ac_DW.UnitDelay_DSTATE_e = (uint16)(((uint32)((uint16)1U)) +
                ((uint32)TIDR_ac_DW.UnitDelay_DSTATE_e));
        }
    }

    /* End of Switch: '<S76>/Switch1' */
    /* End of Outputs for SubSystem: '<S69>/Counter Reset  Enabled 1' */

    /* Logic: '<S69>/NOT4' incorporates:
     *  Logic: '<S27>/OR5'
     *  Logic: '<S69>/NOT1'
     *  Logic: '<S69>/NOT2'
     */
    rtb_NOT4_l = (tmpRead && ((!tmpRead) || (!rtb_Logical3)));

    /* Logic: '<S69>/NOT3' incorporates:
     *  Logic: '<S27>/NOT4'
     *  UnitDelay: '<S69>/Unit Delay1'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_PostCo = !TIDR_ac_DW.UnitDelay1_DSTATE_o;

    /* Logic: '<S69>/NOT5' incorporates:
     *  Constant: '<S23>/Calib'
     *  Logic: '<S69>/NOT3'
     *  RelationalOperator: '<S69>/Less Than  or Equal'
     *  UnitDelay: '<S69>/Unit Delay'
     *  UnitDelay: '<S76>/Unit Delay'
     */
    TIDR_ac_DW.UnitDelay_DSTATE_f5 = (rtb_TmpSignalConversionAtVeDFIR_b_PostCo &&
        (TIDR_ac_DW.UnitDelay_DSTATE_e >= KeTIDR_Cnt_EngTrqHVBattSmplLmt));

    /* Outputs for Atomic SubSystem: '<S27>/Signal Latch On With Reset' */
    /* Logic: '<S70>/OR1' incorporates:
     *  Logic: '<S27>/NOT4'
     *  Logic: '<S27>/OR2'
     *  Logic: '<S70>/NOT'
     *  Logic: '<S70>/OR'
     *  UnitDelay: '<S27>/Unit Delay1'
     *  UnitDelay: '<S70>/Unit Delay'
     */
    TIDR_ac_DW.UnitDelay_DSTATE_fy = ((TIDR_ac_DW.UnitDelay1_DSTATE_on) ||
        (((!rtb_VariantMerge_For_Variant_Source_Va_0) &&
          rtb_TmpSignalConversionAtVeDFIR_b_PostCo) &&
         (TIDR_ac_DW.UnitDelay_DSTATE_fy)));

    /* End of Outputs for SubSystem: '<S27>/Signal Latch On With Reset' */

    /* Outputs for Atomic SubSystem: '<S29>/Hysteresis' */
    /* Switch: '<S82>/Switch1' incorporates:
     *  Constant: '<S82>/Constant Value'
     *  Constant: '<S83>/Calib'
     *  Constant: '<S84>/Calib'
     *  RelationalOperator: '<S82>/Greater  Than'
     *  RelationalOperator: '<S82>/Greater  Than1'
     *  Switch: '<S82>/Switch2'
     *  UnitDelay: '<S82>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B > KeTIDR_Pct_BatSOC_RSP)
    {
        TIDR_ac_DW.UnitDelay_DSTATE_k = true;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B < KeTIDR_Pct_BatSOC_LSP)
        {
            /* Switch: '<S82>/Switch2' incorporates:
             *  Constant: '<S82>/Constant Value1'
             *  UnitDelay: '<S82>/Unit Delay'
             */
            TIDR_ac_DW.UnitDelay_DSTATE_k = false;
        }
    }

    /* End of Switch: '<S82>/Switch1' */
    /* End of Outputs for SubSystem: '<S29>/Hysteresis' */

    /* Update for UnitDelay: '<S68>/Unit Delay1' incorporates:
     *  UnitDelay: '<S27>/Unit Delay1'
     */
    TIDR_ac_DW.UnitDelay1_DSTATE = TIDR_ac_DW.UnitDelay1_DSTATE_on;

    /* Update for UnitDelay: '<S27>/Unit Delay' incorporates:
     *  UnitDelay: '<S69>/Unit Delay1'
     */
    TIDR_ac_DW.UnitDelay_DSTATE_c = TIDR_ac_DW.UnitDelay1_DSTATE_o;

    /* Update for UnitDelay: '<S53>/Unit Delay1' incorporates:
     *  UnitDelay: '<S20>/Unit Delay1'
     */
    TIDR_ac_DW.UnitDelay1_DSTATE_m = TIDR_ac_DW.UnitDelay1_DSTATE_m0;

    /* Update for UnitDelay: '<S20>/Unit Delay' incorporates:
     *  UnitDelay: '<S54>/Unit Delay1'
     */
    TIDR_ac_DW.UnitDelay_DSTATE_ex = TIDR_ac_DW.UnitDelay1_DSTATE_j;

    /* VariantMerge generated from: '<S5>/Variant Source' incorporates:
     *  Logic: '<S29>/Logical'
     *  UnitDelay: '<S82>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_PostCo = TIDR_ac_DW.UnitDelay_DSTATE_fy;
    rtb_VariantMerge_For_Variant_Source_Va_0 = ((VeTIDR_b_EngTrqHVBattHiFail) &&
        (TIDR_ac_DW.UnitDelay_DSTATE_k));

    /* End of Outputs for SubSystem: '<S5>/EngTorqPerfDiag' */
#else

    /* VariantMerge generated from: '<S5>/Variant Source' incorporates:
     *  Constant: '<S12>/FALSE Constant'
     *  SignalConversion generated from: '<S5>/Variant Source'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_PostCo = false;
    rtb_VariantMerge_For_Variant_Source_Va_0 = false;

#endif

    /* End of SignalConversion generated from: '<S1>/VeBPCR_I_HV_BatCurr' */
#if Rte_SysCon_Variant_TIDR_2

    /* Outputs for Enabled SubSystem: '<S4>/HybridPerfDiag' */
    /* Outputs for Enabled SubSystem: '<S4>/HybridPerfDiag' incorporates:
     *  EnablePort: '<S6>/Enable'
     */
    /* Constant: '<S4>/TRUE Constant' */
    if (true)
    {
        /* Inport: '<Root>/VeESSR_b_P1C64_Failed' */
        (void)Rte_Read_VeESSR_b_P1C64_Failed_Value(&tmpRead_4);

        /* Outputs for Enabled SubSystem: '<S6>/Event_HybSysPerf1_ReportTestFailed_5' incorporates:
         *  EnablePort: '<S85>/Enable'
         */
        if (tmpRead_4)
        {
            /* DataStoreWrite: '<S85>/VeTIDR_e_FaultSts_HybSysPerf1' incorporates:
             *  Constant: '<S91>/Constant'
             */
            TIDR_ac_DW.VeTIDR_e_FaultSts_HybSysPerf1 = CeDFIB_e_Fail;
        }

        /* End of Outputs for SubSystem: '<S6>/Event_HybSysPerf1_ReportTestFailed_5' */

        /* Inport: '<Root>/VeESSR_b_P1C65_Failed' */
        (void)Rte_Read_VeESSR_b_P1C65_Failed_Value(&tmpRead_5);

        /* Outputs for Enabled SubSystem: '<S6>/Event_HybSysPerf2_ReportTestFailed_6' incorporates:
         *  EnablePort: '<S87>/Enable'
         */
        if (tmpRead_5)
        {
            /* DataStoreWrite: '<S87>/VeTIDR_e_FaultSts_HybSysPerf2' incorporates:
             *  Constant: '<S93>/Constant'
             */
            TIDR_ac_DW.VeTIDR_e_FaultSts_HybSysPerf2 = CeDFIB_e_Fail;
        }

        /* End of Outputs for SubSystem: '<S6>/Event_HybSysPerf2_ReportTestFailed_6' */

        /* Inport: '<Root>/VeESSR_b_P1C68_Failed' */
        (void)Rte_Read_VeESSR_b_P1C68_Failed_Value(&tmpRead_6);

        /* Outputs for Enabled SubSystem: '<S6>/Event_HybSysPerf5_ReportTestFailed_7' incorporates:
         *  EnablePort: '<S89>/Enable'
         */
        if (tmpRead_6)
        {
            /* DataStoreWrite: '<S89>/VeTIDR_e_FaultSts_HybSysPerf5' incorporates:
             *  Constant: '<S95>/Constant'
             */
            TIDR_ac_DW.VeTIDR_e_FaultSts_HybSysPerf5 = CeDFIB_e_Fail;
        }

        /* End of Outputs for SubSystem: '<S6>/Event_HybSysPerf5_ReportTestFailed_7' */

        /* Inport: '<Root>/VeESSR_b_P1C64_Passed' */
        (void)Rte_Read_VeESSR_b_P1C64_Passed_Value(&tmpRead_7);

        /* Outputs for Enabled SubSystem: '<S6>/Event_HybSysPerf1_ReportTestPassed_8' incorporates:
         *  EnablePort: '<S86>/Enable'
         */
        if (tmpRead_7)
        {
            /* DataStoreWrite: '<S86>/VeTIDR_e_FaultSts_HybSysPerf1' incorporates:
             *  Constant: '<S92>/Constant'
             */
            TIDR_ac_DW.VeTIDR_e_FaultSts_HybSysPerf1 = CeDFIB_e_Pass;
        }

        /* End of Outputs for SubSystem: '<S6>/Event_HybSysPerf1_ReportTestPassed_8' */

        /* Inport: '<Root>/VeESSR_b_P1C65_Passed' */
        (void)Rte_Read_VeESSR_b_P1C65_Passed_Value(&tmpRead_8);

        /* Outputs for Enabled SubSystem: '<S6>/Event_HybSysPerf2_ReportTestPassed_9' incorporates:
         *  EnablePort: '<S88>/Enable'
         */
        if (tmpRead_8)
        {
            /* DataStoreWrite: '<S88>/VeTIDR_e_FaultSts_HybSysPerf2' incorporates:
             *  Constant: '<S94>/Constant'
             */
            TIDR_ac_DW.VeTIDR_e_FaultSts_HybSysPerf2 = CeDFIB_e_Pass;
        }

        /* End of Outputs for SubSystem: '<S6>/Event_HybSysPerf2_ReportTestPassed_9' */

        /* Inport: '<Root>/VeESSR_b_P1C68_Passed' */
        (void)Rte_Read_VeESSR_b_P1C68_Passed_Value(&tmpRead_9);

        /* Outputs for Enabled SubSystem: '<S6>/Event_HybSysPerf5_ReportTestPassed_10' incorporates:
         *  EnablePort: '<S90>/Enable'
         */
        if (tmpRead_9)
        {
            /* DataStoreWrite: '<S90>/VeTIDR_e_FaultSts_HybSysPerf5' incorporates:
             *  Constant: '<S96>/Constant'
             */
            TIDR_ac_DW.VeTIDR_e_FaultSts_HybSysPerf5 = CeDFIB_e_Pass;
        }

        /* End of Outputs for SubSystem: '<S6>/Event_HybSysPerf5_ReportTestPassed_10' */
    }

    /* End of Constant: '<S4>/TRUE Constant' */
    /* End of Outputs for SubSystem: '<S4>/HybridPerfDiag' */
#endif

    /* Outport: '<Root>/VeTIDR_b_ActEngTrqPerfHigh_P1B12' incorporates:
     *  Logic: '<S10>/AND'
     *  SignalConversion generated from: '<S1>/ActEngTrqPerfHighP1B12'
     */
    (void)Rte_Write_VeTIDR_b_ActEngTrqPerfHigh_P1B12_Value(false);

    /* Outport: '<Root>/VeTIDR_b_ActEngTrqPerfLow_P1B11' incorporates:
     *  Logic: '<S9>/AND'
     *  SignalConversion generated from: '<S1>/ActEngTrqPerfLowP1B11'
     */
    (void)Rte_Write_VeTIDR_b_ActEngTrqPerfLow_P1B11_Value(false);

    /* Outport: '<Root>/VeTIDR_b_EngTrqHVBattHiFA' incorporates:
     *  Logic: '<S8>/AND'
     *  SignalConversion generated from: '<S1>/TIDR_b_EngTrqHVBattHi_FA'
     */
    (void)Rte_Write_VeTIDR_b_EngTrqHVBattHiFA_Value
        (rtb_VariantMerge_For_Variant_Source_Va_0);

    /* Outport: '<Root>/VeTIDR_b_EngTrqHVBattLoFA' incorporates:
     *  Logic: '<S7>/AND'
     *  SignalConversion generated from: '<S1>/TIDR_b_EngTrqHVBattLo_FA'
     */
    (void)Rte_Write_VeTIDR_b_EngTrqHVBattLoFA_Value
        (rtb_TmpSignalConversionAtVeDFIR_b_PostCo);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeTIDR_e_FaultSts_EngTorqPerfHi' incorporates:
     *  DataStoreRead: '<S1>/DSR_VeTIDR_e_FaultSts_EngTorqPerfHi'
     */
    (void)Rte_Write_VeTIDR_e_FaultSts_EngTorqPerfHi_Value
        (TIDR_ac_DW.VeTIDR_e_FaultSts_EngTorqPerfHi);

    /* Outport: '<Root>/VeTIDR_e_FaultSts_EngTorqPerfLo' incorporates:
     *  DataStoreRead: '<S1>/DSR_VeTIDR_e_FaultSts_EngTorqPerfLo'
     */
    (void)Rte_Write_VeTIDR_e_FaultSts_EngTorqPerfLo_Value
        (TIDR_ac_DW.VeTIDR_e_FaultSts_EngTorqPerfLo);

    /* Outport: '<Root>/VeTIDR_e_FaultSts_HybSysPerf1' incorporates:
     *  DataStoreRead: '<S1>/DSR_VeTIDR_e_FaultSts_HybSysPerf1'
     */
    (void)Rte_Write_VeTIDR_e_FaultSts_HybSysPerf1_Value
        (TIDR_ac_DW.VeTIDR_e_FaultSts_HybSysPerf1);

    /* Outport: '<Root>/VeTIDR_e_FaultSts_HybSysPerf2' incorporates:
     *  DataStoreRead: '<S1>/DSR_VeTIDR_e_FaultSts_HybSysPerf2'
     */
    (void)Rte_Write_VeTIDR_e_FaultSts_HybSysPerf2_Value
        (TIDR_ac_DW.VeTIDR_e_FaultSts_HybSysPerf2);

    /* Outport: '<Root>/VeTIDR_e_FaultSts_HybSysPerf5' incorporates:
     *  DataStoreRead: '<S1>/DSR_VeTIDR_e_FaultSts_HybSysPerf5'
     */
    (void)Rte_Write_VeTIDR_e_FaultSts_HybSysPerf5_Value
        (TIDR_ac_DW.VeTIDR_e_FaultSts_HybSysPerf5);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Output function */
FUNC(void, TIDR_CODE) TIDR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/TIDR_PwrOff'
     */
    /* Outport: '<Root>/NeTIDR_Cnt_EngTrqHiFlt_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeTIDR_Cnt_EngTrqHiFlt_MFOP'
     */
    (void)Rte_Write_NeTIDR_Cnt_EngTrqHiFlt_MFOP_NeTIDR_Cnt_EngTrqHiFlt_MFOP
        (TIDR_ac_DW.NeTIDR_Cnt_EngTrqHiFlt_MFOP);

    /* Outport: '<Root>/NeTIDR_Cnt_EngTrqHiFlt_MSOF_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeTIDR_Cnt_EngTrqHiFlt_MSOF'
     */
    (void)Rte_Write_NeTIDR_Cnt_EngTrqHiFlt_MSOF_NeTIDR_Cnt_EngTrqHiFlt_MSOF
        (TIDR_ac_DW.NeTIDR_Cnt_EngTrqHiFlt_MSOF);

    /* Outport: '<Root>/NeTIDR_Cnt_EngTrqLoFlt_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeTIDR_Cnt_EngTrqLoFlt_MFOP'
     */
    (void)Rte_Write_NeTIDR_Cnt_EngTrqLoFlt_MFOP_NeTIDR_Cnt_EngTrqLoFlt_MFOP
        (TIDR_ac_DW.NeTIDR_Cnt_EngTrqLoFlt_MFOP);

    /* Outport: '<Root>/NeTIDR_Cnt_EngTrqLoFlt_MSOF_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeTIDR_Cnt_EngTrqLoFlt_MSOF'
     */
    (void)Rte_Write_NeTIDR_Cnt_EngTrqLoFlt_MSOF_NeTIDR_Cnt_EngTrqLoFlt_MSOF
        (TIDR_ac_DW.NeTIDR_Cnt_EngTrqLoFlt_MSOF);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, TIDR_CODE) TIDR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/TIDR_PwrOn'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/DSM_Init'
     */
    /* DataStoreWrite: '<S97>/NeTIDR_Cnt_EngTrqLoFlt_MSOF' incorporates:
     *  Inport: '<Root>/NeTIDR_Cnt_EngTrqLoFlt_MSOF_PM_In'
     */
    (void)Rte_Read_NeTIDR_Cnt_EngTrqLoFlt_MSOF_Rx_NeTIDR_Cnt_EngTrqLoFlt_MSOF
        (&TIDR_ac_DW.NeTIDR_Cnt_EngTrqLoFlt_MSOF);

    /* DataStoreWrite: '<S97>/NeTIDR_Cnt_EngTrqLoFlt_MFOP' incorporates:
     *  Inport: '<Root>/NeTIDR_Cnt_EngTrqLoFlt_MFOP_PM_In'
     */
    (void)Rte_Read_NeTIDR_Cnt_EngTrqLoFlt_MFOP_Rx_NeTIDR_Cnt_EngTrqLoFlt_MFOP
        (&TIDR_ac_DW.NeTIDR_Cnt_EngTrqLoFlt_MFOP);

    /* DataStoreWrite: '<S97>/NeTIDR_Cnt_EngTrqHiFlt_MSOF' incorporates:
     *  Inport: '<Root>/NeTIDR_Cnt_EngTrqHiFlt_MSOF_PM_In'
     */
    (void)Rte_Read_NeTIDR_Cnt_EngTrqHiFlt_MSOF_Rx_NeTIDR_Cnt_EngTrqHiFlt_MSOF
        (&TIDR_ac_DW.NeTIDR_Cnt_EngTrqHiFlt_MSOF);

    /* DataStoreWrite: '<S97>/NeTIDR_Cnt_EngTrqHiFlt_MFOP' incorporates:
     *  Inport: '<Root>/NeTIDR_Cnt_EngTrqHiFlt_MFOP_PM_In'
     */
    (void)Rte_Read_NeTIDR_Cnt_EngTrqHiFlt_MFOP_Rx_NeTIDR_Cnt_EngTrqHiFlt_MFOP
        (&TIDR_ac_DW.NeTIDR_Cnt_EngTrqHiFlt_MFOP);

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S98>/VeTIDR_b_EngTrqHVBattLoFA_Out_Init' */
    TIDR_ac_B.OutportBufferForVeTIDR_b_EngTrqHVBattLoF = TIDR_ac_ConstB.Const1;

    /* SignalConversion generated from: '<S98>/VeTIDR_b_EngTrqHVBattHiFA_Out_Init' */
    TIDR_ac_B.OutportBufferForVeTIDR_b_EngTrqHVBattHiF = TIDR_ac_ConstB.Const2;

    /* SignalConversion generated from: '<S98>/VeTIDR_b_ActEngTrqPerfLow_P1B11_Out_Init' */
    TIDR_ac_B.OutportBufferForVeTIDR_b_ActEngTrqPerfLo = TIDR_ac_ConstB.Const3;

    /* SignalConversion generated from: '<S98>/VeTIDR_b_ActEngTrqPerfHigh_P1B12_Out_Init' */
    TIDR_ac_B.OutportBufferForVeTIDR_b_ActEngTrqPerfHi = TIDR_ac_ConstB.Const4;

    /* SignalConversion generated from: '<S98>/VeTIDR_e_FaultSts_EngTorqPerfHi' incorporates:
     *  Constant: '<S99>/Constant'
     */
    TIDR_ac_B.OutportBufferForVeTIDR_e_FaultSts_EngTor = TIDR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S98>/VeTIDR_e_FaultSts_EngTorqPerfLo' incorporates:
     *  Constant: '<S100>/Constant'
     */
    TIDR_ac_B.OutportBufferForVeTIDR_e_FaultSts_EngT_a =
        TIDR_ac_ConstB.Constant_e;

    /* SignalConversion generated from: '<S98>/VeTIDR_e_FaultSts_HybSysPerf1' incorporates:
     *  Constant: '<S101>/Constant'
     */
    TIDR_ac_B.OutportBufferForVeTIDR_e_FaultSts_HybSys =
        TIDR_ac_ConstB.Constant_i;

    /* SignalConversion generated from: '<S98>/VeTIDR_e_FaultSts_HybSysPerf2' incorporates:
     *  Constant: '<S102>/Constant'
     */
    TIDR_ac_B.OutportBufferForVeTIDR_e_FaultSts_HybS_o =
        TIDR_ac_ConstB.Constant_b;

    /* SignalConversion generated from: '<S98>/VeTIDR_e_FaultSts_HybSysPerf5' incorporates:
     *  Constant: '<S103>/Constant'
     */
    TIDR_ac_B.OutportBufferForVeTIDR_e_FaultSts_HybS_p =
        TIDR_ac_ConstB.Constant_d;

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Outport: '<Root>/VeTIDR_e_FaultSts_EngTorqPerfHi' incorporates:
     *  SignalConversion generated from: '<S3>/R_VeTIDR_e_FaultSts_EngTorqPerfHi'
     *  SignalConversion generated from: '<S98>/VeTIDR_e_FaultSts_EngTorqPerfHi'
     */
    (void)Rte_Write_VeTIDR_e_FaultSts_EngTorqPerfHi_Value
        (TIDR_ac_B.OutportBufferForVeTIDR_e_FaultSts_EngTor);

    /* Outport: '<Root>/VeTIDR_e_FaultSts_EngTorqPerfLo' incorporates:
     *  SignalConversion generated from: '<S3>/R_VeTIDR_e_FaultSts_EngTorqPerfLo'
     *  SignalConversion generated from: '<S98>/VeTIDR_e_FaultSts_EngTorqPerfLo'
     */
    (void)Rte_Write_VeTIDR_e_FaultSts_EngTorqPerfLo_Value
        (TIDR_ac_B.OutportBufferForVeTIDR_e_FaultSts_EngT_a);

    /* Outport: '<Root>/VeTIDR_e_FaultSts_HybSysPerf1' incorporates:
     *  SignalConversion generated from: '<S3>/R_VeTIDR_e_FaultSts_HybSysPerf1'
     *  SignalConversion generated from: '<S98>/VeTIDR_e_FaultSts_HybSysPerf1'
     */
    (void)Rte_Write_VeTIDR_e_FaultSts_HybSysPerf1_Value
        (TIDR_ac_B.OutportBufferForVeTIDR_e_FaultSts_HybSys);

    /* Outport: '<Root>/VeTIDR_e_FaultSts_HybSysPerf2' incorporates:
     *  SignalConversion generated from: '<S3>/R_VeTIDR_e_FaultSts_HybSysPerf2'
     *  SignalConversion generated from: '<S98>/VeTIDR_e_FaultSts_HybSysPerf2'
     */
    (void)Rte_Write_VeTIDR_e_FaultSts_HybSysPerf2_Value
        (TIDR_ac_B.OutportBufferForVeTIDR_e_FaultSts_HybS_o);

    /* Outport: '<Root>/VeTIDR_e_FaultSts_HybSysPerf5' incorporates:
     *  SignalConversion generated from: '<S3>/R_VeTIDR_e_FaultSts_HybSysPerf5'
     *  SignalConversion generated from: '<S98>/VeTIDR_e_FaultSts_HybSysPerf5'
     */
    (void)Rte_Write_VeTIDR_e_FaultSts_HybSysPerf5_Value
        (TIDR_ac_B.OutportBufferForVeTIDR_e_FaultSts_HybS_p);

    /* Outport: '<Root>/VeTIDR_b_ActEngTrqPerfHigh_P1B12' incorporates:
     *  SignalConversion generated from: '<S3>/VeTIDR_b_ActEngTrqPerfHigh_P1B12_Out_Init'
     */
    (void)Rte_Write_VeTIDR_b_ActEngTrqPerfHigh_P1B12_Value
        (TIDR_ac_B.OutportBufferForVeTIDR_b_ActEngTrqPerfHi);

    /* Outport: '<Root>/VeTIDR_b_ActEngTrqPerfLow_P1B11' incorporates:
     *  SignalConversion generated from: '<S3>/VeTIDR_b_ActEngTrqPerfLow_P1B11_Out_Init'
     */
    (void)Rte_Write_VeTIDR_b_ActEngTrqPerfLow_P1B11_Value
        (TIDR_ac_B.OutportBufferForVeTIDR_b_ActEngTrqPerfLo);

    /* Outport: '<Root>/VeTIDR_b_EngTrqHVBattHiFA' incorporates:
     *  SignalConversion generated from: '<S3>/VeTIDR_b_EngTrqHVBattHiFA_Out_Init'
     */
    (void)Rte_Write_VeTIDR_b_EngTrqHVBattHiFA_Value
        (TIDR_ac_B.OutportBufferForVeTIDR_b_EngTrqHVBattHiF);

    /* Outport: '<Root>/VeTIDR_b_EngTrqHVBattLoFA' incorporates:
     *  SignalConversion generated from: '<S3>/VeTIDR_b_EngTrqHVBattLoFA_Out_Init'
     */
    (void)Rte_Write_VeTIDR_b_EngTrqHVBattLoFA_Value
        (TIDR_ac_B.OutportBufferForVeTIDR_b_EngTrqHVBattLoF);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, TIDR_CODE) TIDR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/TIDR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S98>/VeTIDR_b_EngTrqHVBattLoFA_Out_Init' */
    TIDR_ac_B.OutportBufferForVeTIDR_b_EngTrqHVBattLoF = TIDR_ac_ConstB.Const1;

    /* SystemInitialize for SignalConversion generated from: '<S98>/VeTIDR_b_EngTrqHVBattHiFA_Out_Init' */
    TIDR_ac_B.OutportBufferForVeTIDR_b_EngTrqHVBattHiF = TIDR_ac_ConstB.Const2;

    /* SystemInitialize for SignalConversion generated from: '<S98>/VeTIDR_b_ActEngTrqPerfLow_P1B11_Out_Init' */
    TIDR_ac_B.OutportBufferForVeTIDR_b_ActEngTrqPerfLo = TIDR_ac_ConstB.Const3;

    /* SystemInitialize for SignalConversion generated from: '<S98>/VeTIDR_b_ActEngTrqPerfHigh_P1B12_Out_Init' */
    TIDR_ac_B.OutportBufferForVeTIDR_b_ActEngTrqPerfHi = TIDR_ac_ConstB.Const4;

    /* SystemInitialize for SignalConversion generated from: '<S98>/VeTIDR_e_FaultSts_EngTorqPerfHi' incorporates:
     *  Constant: '<S99>/Constant'
     */
    TIDR_ac_B.OutportBufferForVeTIDR_e_FaultSts_EngTor = TIDR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S98>/VeTIDR_e_FaultSts_EngTorqPerfLo' incorporates:
     *  Constant: '<S100>/Constant'
     */
    TIDR_ac_B.OutportBufferForVeTIDR_e_FaultSts_EngT_a =
        TIDR_ac_ConstB.Constant_e;

    /* SystemInitialize for SignalConversion generated from: '<S98>/VeTIDR_e_FaultSts_HybSysPerf1' incorporates:
     *  Constant: '<S101>/Constant'
     */
    TIDR_ac_B.OutportBufferForVeTIDR_e_FaultSts_HybSys =
        TIDR_ac_ConstB.Constant_i;

    /* SystemInitialize for SignalConversion generated from: '<S98>/VeTIDR_e_FaultSts_HybSysPerf2' incorporates:
     *  Constant: '<S102>/Constant'
     */
    TIDR_ac_B.OutportBufferForVeTIDR_e_FaultSts_HybS_o =
        TIDR_ac_ConstB.Constant_b;

    /* SystemInitialize for SignalConversion generated from: '<S98>/VeTIDR_e_FaultSts_HybSysPerf5' incorporates:
     *  Constant: '<S103>/Constant'
     */
    TIDR_ac_B.OutportBufferForVeTIDR_e_FaultSts_HybS_p =
        TIDR_ac_ConstB.Constant_d;

    /* End of SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Outport: '<Root>/VeTIDR_b_EngTrqHVBattLoFA' incorporates:
     *  Merge: '<Root>/Merge_Outport_1'
     */
    (void)Rte_Write_VeTIDR_b_EngTrqHVBattLoFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeTIDR_b_EngTrqHVBattHiFA' incorporates:
     *  Merge: '<Root>/Merge_Outport_2'
     */
    (void)Rte_Write_VeTIDR_b_EngTrqHVBattHiFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeTIDR_b_ActEngTrqPerfLow_P1B11' incorporates:
     *  Merge: '<Root>/Merge_Outport_3'
     */
    (void)Rte_Write_VeTIDR_b_ActEngTrqPerfLow_P1B11_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeTIDR_b_ActEngTrqPerfHigh_P1B12' incorporates:
     *  Merge: '<Root>/Merge_Outport_4'
     */
    (void)Rte_Write_VeTIDR_b_ActEngTrqPerfHigh_P1B12_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeTIDR_e_FaultSts_EngTorqPerfHi' incorporates:
     *  Merge: '<Root>/M_VeTIDR_e_FaultSts_EngTorqPerfHi'
     */
    (void)Rte_Write_VeTIDR_e_FaultSts_EngTorqPerfHi_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeTIDR_e_FaultSts_EngTorqPerfLo' incorporates:
     *  Merge: '<Root>/M_VeTIDR_e_FaultSts_EngTorqPerfLo'
     */
    (void)Rte_Write_VeTIDR_e_FaultSts_EngTorqPerfLo_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeTIDR_e_FaultSts_HybSysPerf1' incorporates:
     *  Merge: '<Root>/M_VeTIDR_e_FaultSts_HybSysPerf1'
     */
    (void)Rte_Write_VeTIDR_e_FaultSts_HybSysPerf1_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeTIDR_e_FaultSts_HybSysPerf2' incorporates:
     *  Merge: '<Root>/M_VeTIDR_e_FaultSts_HybSysPerf2'
     */
    (void)Rte_Write_VeTIDR_e_FaultSts_HybSysPerf2_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeTIDR_e_FaultSts_HybSysPerf5' incorporates:
     *  Merge: '<Root>/M_VeTIDR_e_FaultSts_HybSysPerf5'
     */
    (void)Rte_Write_VeTIDR_e_FaultSts_HybSysPerf5_Value(CeDFIB_e_Init);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
