/*
 * File: PSMR_ac.c
 *
 * Code generated for Simulink model 'PSMR_ac'.
 *
 * Model version                  : 9.149
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 18:42:29 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PSMR_ac.h"
#include "look1_iflf_binlcapw.h"

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_PSMR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(uint8, PSMR_VAR_INIT) KePSMR_Cnt_Lv2PVCohCntrDec = 1U;/* Referenced by: '<S94>/Calib' */
static volatile CONST(uint8, PSMR_VAR_INIT) KePSMR_Cnt_Lv2PVCohCntrInc = 2U;/* Referenced by: '<S93>/Calib' */
static volatile CONST(uint8, PSMR_VAR_INIT) KePSMR_Cnt_Lv2PVCohCntrLim = 40U;/* Referenced by: '<S95>/Calib' */
static volatile CONST(uint8, PSMR_VAR_INIT) KePSMR_Cnt_Lv2Pv1Faulty = 3U;/* Referenced by: '<S86>/Calib' */
static volatile CONST(uint8, PSMR_VAR_INIT) KePSMR_Cnt_Lv2Pv2Faulty = 3U;/* Referenced by: '<S78>/Calib' */
static volatile CONST(uint8, PSMR_VAR_INIT) KePSMR_Cnt_PdlPosDiffFlt = 3U;/* Referenced by: '<S38>/Calib' */
static volatile CONST(float32, PSMR_VAR_INIT) KePSMR_Pct_Lv2Lv1PdlPosDiff =
    15.0F;                             /* Referenced by: '<S37>/Calib' */
static volatile CONST(float32, PSMR_VAR_INIT) KePSMR_Pct_Lv2PvBrkRampDec = 10.0F;/* Referenced by: '<S39>/Calib' */
static volatile CONST(float32, PSMR_VAR_INIT) KePSMR_U_Lv2PV1MaxClip = 5.0F;/* Referenced by: '<S84>/Calib' */
static volatile CONST(float32, PSMR_VAR_INIT) KePSMR_U_Lv2PV1MinClip = 0.0F;/* Referenced by: '<S85>/Calib' */
static volatile CONST(float32, PSMR_VAR_INIT) KePSMR_U_Lv2PV1Offset = 1.099F;/* Referenced by: '<S74>/Calib' */
static volatile CONST(float32, PSMR_VAR_INIT) KePSMR_U_Lv2PV2MaxClip = 5.0F;/* Referenced by: '<S76>/Calib' */
static volatile CONST(float32, PSMR_VAR_INIT) KePSMR_U_Lv2PV2MinClip = 0.0F;/* Referenced by: '<S77>/Calib' */
static volatile CONST(float32, PSMR_VAR_INIT) KePSMR_U_Lv2PV2Offset = 0.557F;/* Referenced by: '<S81>/Calib' */
static volatile CONST(float32, PSMR_VAR_INIT) KePSMR_U_Lv2PV2Slope = 2.0F;/* Referenced by: '<S80>/Calib' */
static volatile CONST(float32, PSMR_VAR_INIT) KePSMR_U_Lv2PVCohLim = 0.5F;/* Referenced by: '<S92>/Calib' */
static volatile CONST(float32, PSMR_VAR_INIT) KePSMR_U_Lv2PVSIdlePosn = 0.0F;/* Referenced by: '<S48>/Calib' */
static volatile CONST(float32, PSMR_VAR_INIT) KePSMR_U_Lv2PVSLHMax = 5.0F;/* Referenced by: '<S18>/Calib' */
static volatile CONST(float32, PSMR_VAR_INIT) KePSMR_U_Lv2PVTrqRampDec = 0.35F;/* Referenced by: '<S53>/Calib' */
static volatile CONST(float32, PSMR_VAR_INIT) KePSMR_U_Lv2PVTrqRampInc = 0.1F;/* Referenced by: '<S54>/Calib' */
static volatile CONST(float32, PSMR_VAR_INIT) KePSMR_U_Lv2PVTrqRampMultMin =
    0.45F;                             /* Referenced by: '<S55>/Calib' */
static volatile CONST(float32, PSMR_VAR_INIT) KePSMR_U_Lv2Pv1Max = 4.8F;/* Referenced by: '<S79>/Calib' */
static volatile CONST(float32, PSMR_VAR_INIT) KePSMR_U_Lv2Pv1Min = 0.1F;/* Referenced by: '<S75>/Calib' */
static volatile CONST(float32, PSMR_VAR_INIT) KePSMR_U_Lv2Pv2Max = 2.6F;/* Referenced by: '<S83>/Calib' */
static volatile CONST(float32, PSMR_VAR_INIT) KePSMR_U_Lv2Pv2Min = 0.05F;/* Referenced by: '<S82>/Calib' */
static volatile CONST(boolean, PSMR_VAR_INIT) KePSMR_b_BTOFltEnable = 1;/* Referenced by: '<S40>/Calib' */
static volatile CONST(boolean, PSMR_VAR_INIT)
    KePSMR_b_CANVehSpdNotVld_PVTrqRampMultMinDsbl = 0;/* Referenced by: '<S56>/Calib' */
static volatile CONST(boolean, PSMR_VAR_INIT) KePSMR_b_DisblMtrMdMonitor = 0;/* Referenced by: '<S96>/Calib' */
static volatile CONST(boolean, PSMR_VAR_INIT) KePSMR_b_KeySts_OvrdEnbl = 0;/* Referenced by: '<S64>/Calib' */
static volatile CONST(boolean, PSMR_VAR_INIT) KePSMR_b_LTIR_Present = 0;/* Referenced by: '<S65>/Calib' */
static volatile CONST(boolean, PSMR_VAR_INIT)
    KePSMR_b_Lv1SpdRatFlt_PVTrqRampMultMinDsbl = 0;/* Referenced by: '<S57>/Calib' */
static volatile CONST(boolean, PSMR_VAR_INIT) KePSMR_b_PdlPosDiffActive = 1;/* Referenced by: '<S36>/Calib' */
static volatile CONST(sint16, PSMR_VAR_INIT) KePSMR_e_KeySts_OvrdVal = 1;/* Referenced by: '<S63>/Calib' */
static volatile CONST(float32, PSMR_VAR_INIT) KePSMR_k_PVSNormFiltrCoeff = 0.1F;/* Referenced by: '<S35>/Calib' */
static volatile CONST(float32, PSMR_VAR_INIT) KtPSMR_Pct_PtcPdlPct[9] =
{
    0.0F, 12.5F, 25.0F, 37.5F, 50.0F, 62.5F, 75.0F, 87.5F, 100.0F
} ;                                    /* Referenced by: '<S42>/Vector' */

static volatile CONST(float32, PSMR_VAR_INIT) KtPSMR_U_Lv2PVTrqRampMultMinTbl[3]
    =
{
    0.8F, 0.36F, 0.26F
} ;                                    /* Referenced by: '<S59>/Vector' */

static volatile CONST(float32, PSMR_VAR_INIT) KtPSMR_k_DelpvsFiltConstDr[7] =
{
    0.4F, 1.0F, 0.0F, 0.1F, 0.4F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S41>/Vector' */

static volatile CONST(float32, PSMR_VAR_INIT) KxPSMR_Pct_PtcPdlPct[9] =
{
    0.0F, 0.33F, 0.66F, 0.99F, 1.32F, 1.65F, 1.98F, 2.31F, 3.3F
} ;                                    /* Referenced by: '<S42>/Vector' */

static volatile CONST(float32, PSMR_VAR_INIT) KxPSMR_U_Lv2PVTrqRampMultMinTbl[3]
    =
{
    0.0F, 3.0F, 60.0F
} ;                                    /* Referenced by: '<S59>/Vector' */

static volatile CONST(float32, PSMR_VAR_INIT) KxPSMR_k_DelpvsFiltConstDr[7] =
{
    -10.0F, -5.0F, 0.0F, 5.0F, 10.0F, 20.0F, 30.0F
} ;                                    /* Referenced by: '<S41>/Vector' */

#define STOP_SEC_CALIB_UNSPECIFIED_PSMR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PSMR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(uint16, PSMR_VAR_INIT) VePSMC_Cnt_Lv2Lv1PdlPosDiffFltActive;/* '<S31>/Switch1' */
static VAR(float32, PSMR_VAR_INIT) VePSMC_Pct_AccelPedalEffPosRaw;/* '<S42>/Vector' */
static VAR(float32, PSMR_VAR_INIT) VePSMC_U_Lv2DelPVSHiRes;/* '<S47>/Unit Delay1' */
static VAR(float32, PSMR_VAR_INIT) VePSMC_U_Lv2PVNorm;/* '<S13>/Switch' */
static VAR(float32, PSMR_VAR_INIT) VePSMC_U_Lv2PVSNormPreLimit;/* '<S17>/CheckPVSNoFault' */
static VAR(float32, PSMR_VAR_INIT) VePSMC_U_Lv2PVTrqRamp;/* '<S47>/Dec_if_Enabled_else_inc' */
static VAR(float32, PSMR_VAR_INIT) VePSMC_U_Lv2PVTrqRampMult;/* '<S47>/Switch1' */
static VAR(float32, PSMR_VAR_INIT) VePSMC_U_Lv2PVTrqRampMultMin;/* '<S59>/Vector' */
static VAR(float32, PSMR_VAR_INIT) VePSMC_U_MaxofTrqRamp;/* '<S51>/Switch' */
static VAR(float32, PSMR_VAR_INIT) VePSMC_U_MinDelPVSHiRes;/* '<S52>/Switch' */
static VAR(float32, PSMR_VAR_INIT) VePSMC_U_PV12Limit;/* '<S16>/LimiterSwitch1' */
static VAR(float32, PSMR_VAR_INIT) VePSMC_U_PV1Limit;/* '<S14>/LimiterSwitch1' */
static VAR(float32, PSMR_VAR_INIT) VePSMC_U_PV2Limit;/* '<S15>/LimiterSwitch1' */
static VAR(float32, PSMR_VAR_INIT) VePSMC_U_PVSNormFiltd;/* '<S32>/Switch1' */
static VAR(float32, PSMR_VAR_INIT) VePSMC_U_PVSNormFiltd_Arb;/* '<S33>/Switch' */
static VAR(boolean, PSMR_VAR_INIT) VePSMC_b_Lv1IPFailed;/* '<S8>/LV1_IP_FAILED' */
static VAR(boolean, PSMR_VAR_INIT) VePSMC_b_Lv1PV1PV2Failed;/* '<S8>/Any_Level_1_Failure' */
static VAR(boolean, PSMR_VAR_INIT) VePSMC_b_Lv2KeyInRun;/* '<S60>/CompareRUN' */
static VAR(boolean, PSMR_VAR_INIT) VePSMC_b_Lv2Lv1PdlPosDiffFltActive;/* '<S29>/Switch1' */
static VAR(boolean, PSMR_VAR_INIT) VePSMC_b_Lv2Lv1PdlPosDiffFltActiveArb;/* '<S10>/Comparison13' */
static VAR(boolean, PSMR_VAR_INIT) VePSMC_b_Lv2PV1Faulty;/* '<S68>/Logical1' */
static VAR(boolean, PSMR_VAR_INIT) VePSMC_b_Lv2PV2Faulty;/* '<S68>/Logical2' */
static VAR(boolean, PSMR_VAR_INIT) VePSMC_b_Lv2PVS1CntrRst;/* '<S88>/passDBCparam2' */
static VAR(boolean, PSMR_VAR_INIT) VePSMC_b_Lv2PVS2CntrRst;/* '<S89>/passDBCparam2' */
static VAR(boolean, PSMR_VAR_INIT) VePSMC_b_Lv2PVSCohCntrRst;/* '<S90>/passDBCparam2' */
static VAR(boolean, PSMR_VAR_INIT) VePSMC_b_Lv2PVTrqRampActive;/* '<S58>/Logical1' */
static VAR(boolean, PSMR_VAR_INIT) VePSMC_b_Lv2PVTrqRampMultFailed;/* '<S47>/LogicalOperator4' */
static VAR(boolean, PSMR_VAR_INIT) VePSMC_b_Lv2ResetPsmrMdDiagCntr;/* '<S60>/Logical1' */
static VAR(boolean, PSMR_VAR_INIT) VePSMC_b_MaxPV1Faulty;/* '<S68>/Comparison' */
static VAR(boolean, PSMR_VAR_INIT) VePSMC_b_MaxPV2Faulty;/* '<S68>/Comparison1' */
static VAR(boolean, PSMR_VAR_INIT) VePSMC_b_MinPV1Faulty;/* '<S68>/Comparison2' */
static VAR(boolean, PSMR_VAR_INIT) VePSMC_b_MinPV2Faulty;/* '<S68>/Comparison3' */
static VAR(boolean, PSMR_VAR_INIT) VePSMC_b_P060D_Fail;/* '<S67>/DBC_Conditions1' */
static VAR(boolean, PSMR_VAR_INIT) VePSMC_b_P060D_Init;/* '<S67>/DBC_Conditions' */
static VAR(boolean, PSMR_VAR_INIT) VePSMC_b_P060D_Pass;/* '<S67>/DBC_Conditions2' */
static VAR(boolean, PSMR_VAR_INIT) VePSMC_b_PV1FailSts;/* '<S8>/Logical1' */
static VAR(boolean, PSMR_VAR_INIT) VePSMC_b_PV1_OUT5VFail;
                                      /* '<S8>/PV1_or_Primary_5V_ref_Failure' */
static VAR(boolean, PSMR_VAR_INIT) VePSMC_b_PV2FailSts;/* '<S8>/Logical2' */
static VAR(boolean, PSMR_VAR_INIT) VePSMC_b_PV2_AUX5VFail;/* '<S8>/PV2_or_Aux_5V_ref_Failure' */
static VAR(boolean, PSMR_VAR_INIT) VePSMC_b_PVCohFailSts;/* '<S8>/Logical3' */
static VAR(TeDFIB_e_FaultDebounceStatus, PSMR_VAR_INIT)
    VePSMC_e_Lv2FaultSts_CM_APP_SysPerf_PVS1;/* '<S97>/Switch1' */
static VAR(TeDFIB_e_FaultDebounceStatus, PSMR_VAR_INIT)
    VePSMC_e_Lv2FaultSts_CM_APP_SysPerf_PVS2;/* '<S105>/Switch1' */
static VAR(TeDFIB_e_FaultDebounceStatus, PSMR_VAR_INIT)
    VePSMC_e_Lv2FaultSts_CM_APP_SysPerf_PVSCoh;/* '<S113>/Switch1' */
static VAR(TePSMR_e_LV2PVSMode, PSMR_VAR_INIT) VePSMC_e_Lv2PVSModeInterm;/* '<S9>/CheckPVNoFault' */
static VAR(float32, PSMR_VAR_INIT) VePSMC_k_PVSNormFiltrCoeff;/* '<S26>/Switch1' */
static VAR(uint8, PSMR_VAR_INIT) VePSMD_Cnt_Lv2PVS1Failing;/* '<S88>/Switch2' */
static VAR(uint8, PSMR_VAR_INIT) VePSMD_Cnt_Lv2PVS2Failing;/* '<S89>/Switch2' */
static VAR(uint8, PSMR_VAR_INIT) VePSMD_Cnt_Lv2PVSCohFailing;/* '<S90>/Switch2' */
static VAR(float32, PSMR_VAR_INIT) VePSMD_U_Lv2PV1Norm;/* '<S68>/LV2_PV1_NORM' */
static VAR(float32, PSMR_VAR_INIT) VePSMD_U_Lv2PV2Norm;/* '<S68>/PV2_Offset' */
static VAR(float32, PSMR_VAR_INIT) VePSMD_U_Lv2PV2Offset;/* '<S68>/LV2_PV2_NORM' */
static VAR(boolean, PSMR_VAR_INIT) VePSMD_b_Lv2MdVldFltRst;/* '<S69>/ResetCheck' */
static VAR(boolean, PSMR_VAR_INIT) VePSMD_b_Lv2PVS1Failing;/* '<S68>/Comparison4' */
static VAR(boolean, PSMR_VAR_INIT) VePSMD_b_Lv2PVS2Failing;/* '<S68>/Comparison5' */
static VAR(boolean, PSMR_VAR_INIT) VePSMD_b_Lv2PVSDiffFailing;/* '<S69>/LV2_PVS_FAILING' */
static VAR(TeLTIR_e_KeySts, PSMR_VAR_INIT) VePSMI_e_Lv2KeySts;/* '<S60>/Bypass' */
static VAR(float32, PSMR_VAR_INIT) VePSMR_Pct_Lv2Lv1AccelPdlPosDiff;/* '<S30>/LV2_Abs_switch' */
static VAR(float32, PSMR_VAR_INIT) VePSMR_U_Lv2PVSDiff;/* '<S87>/LV2_Abs_switch' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PSMR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_PSMR
#include "MemMap.h"

CONST(ConstB_PSMR_ac_T, PSMR_VAR_INIT) PSMR_ac_ConstB =
{
    CePSMR_e_NO_Fault,                 /* '<S132>/Constant' */
    CeDFIB_e_Init                      /* '<S131>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_PSMR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PSMR
#include "MemMap.h"

VAR(B_PSMR_ac_T, PSMR_VAR_INIT) PSMR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PSMR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PSMR
#include "MemMap.h"

VAR(DW_PSMR_ac_T, PSMR_VAR_INIT) PSMR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PSMR
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, PSMR_CODE) PSMR_MedTED(void) /* Explicit Task: MedTED */
{
    float32 Switch1_j;
    float32 VePSMR_U_Lv2PVSNorm_temp;
    float32 rtb_Sum1_k;
    float32 rtb_TmpSignalConversionAtVeAPSR;
    float32 rtb_TmpSignalConversionAtVeHWIO;
    float32 rtb_TmpSignalConversionAtVeHW_j;
    float32 rtb_TmpSignalConversionAtVeSSMR;
    float32 rtb_VePSMC_Pct_AccelPedalEffPos;
    uint32 rtb_TmpSignalConversionAtVeAP_f;
    uint16 rtb_Switch_d;
    TePSMR_e_LV2PVSMode rtb_CheckIP;
    TeSTMR_e_Lv2BrkPdlStat tmpRead_3;
    uint8 rtb_Inc_Cntr_a;
    uint8 rtb_TmpSignalConversionAtVeDMAB;
    uint8 rtb_UnitDelay_g;
    boolean VePSMR_b_Lv2AccelPdlPosFlt_temp;
    boolean VePSMR_b_Lv2Lv1PdlPosDiffFlt_te;
    boolean rtb_TmpSignalConversionAtVeAP_c;
    boolean rtb_TmpSignalConversionAtVeAP_e;
    boolean rtb_TmpSignalConversionAtVeAP_m;
    boolean tmpRead;
    boolean tmpRead_0;
    boolean tmpRead_1;
    boolean tmpRead_2;
    boolean tmpRead_4;
    boolean tmpRead_5;
    boolean tmpRead_6;
    boolean tmpRead_7;
    boolean tmpRead_8;
    boolean tmpRead_9;
    boolean tmpRead_a;
    boolean tmpRead_b;
    boolean tmpRead_c;

    /* Inport: '<Root>/VeLTIR_b_Lv2KeySts_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2KeySts_FA_Value(&VePSMR_b_Lv2Lv1PdlPosDiffFlt_te);

    /* Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl' */
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value
        (&VePSMR_b_Lv2AccelPdlPosFlt_temp);

    /* Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe' */
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value(&tmpRead_c);

    /* Inport: '<Root>/VeDFIR_b_DiagSystemDsbl' */
    (void)Rte_Read_VeDFIR_b_DiagSystemDsbl_Value(&tmpRead_b);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/PSMR_MedTEB'
     */
    /* SignalConversion generated from: '<S1>/VeHWIO_U_Lv2RAWPVS1' incorporates:
     *  Inport: '<Root>/VeHWIO_U_Lv2RAWPVS1'
     */
    (void)Rte_Read_VeHWIO_U_Lv2RAWPVS1_Value(&rtb_TmpSignalConversionAtVeHWIO);

    /* SignalConversion generated from: '<S1>/VeHWIO_U_Lv2RAWPVS2' incorporates:
     *  Inport: '<Root>/VeHWIO_U_Lv2RAWPVS2'
     */
    (void)Rte_Read_VeHWIO_U_Lv2RAWPVS2_Value(&rtb_TmpSignalConversionAtVeHW_j);

    /* SignalConversion generated from: '<S1>/VeAPSR_b_Lv1PvBrkActive' incorporates:
     *  Inport: '<Root>/VeAPSR_b_Lv1PvBrkActive'
     */
    (void)Rte_Read_VeAPSR_b_Lv1PvBrkActive_Value
        (&rtb_TmpSignalConversionAtVeAP_c);

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_CM_APP_SysPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CM_APP_SysPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CM_APP_SysPerf_Value
        (&rtb_TmpSignalConversionAtVeDMAB);

    /* SignalConversion generated from: '<S1>/VeAPSR_b_Lv1PvCohFailed' incorporates:
     *  Inport: '<Root>/VeAPSR_b_Lv1PvCohFailed'
     */
    (void)Rte_Read_VeAPSR_b_Lv1PvCohFailed_Value
        (&rtb_TmpSignalConversionAtVeAP_e);

    /* SignalConversion generated from: '<S1>/VeAPSR_b_Lv1PvTrqLimitReq' incorporates:
     *  Inport: '<Root>/VeAPSR_b_Lv1PvTrqLimitReq'
     */
    (void)Rte_Read_VeAPSR_b_Lv1PvTrqLimitReq_Value
        (&rtb_TmpSignalConversionAtVeAP_m);

    /* SignalConversion generated from: '<S1>/VeSSMR_v_VehSpd' incorporates:
     *  Inport: '<Root>/VeSSMR_v_VehSpd'
     */
    (void)Rte_Read_VeSSMR_v_VehSpd_Value(&rtb_TmpSignalConversionAtVeSSMR);

    /* SignalConversion generated from: '<S1>/VeAPSR_Pct_AccelPedalEffPosition' incorporates:
     *  Inport: '<Root>/VeAPSR_Pct_AccelPedalEffPosition'
     */
    (void)Rte_Read_VeAPSR_Pct_AccelPedalEffPosition_Value
        (&rtb_TmpSignalConversionAtVeAPSR);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/PSMR_MedTEB_StartCheckpoint'
     */
    /* FunctionCaller: '<S6>/PSMR_MedTEB_StartCheckpoint' */
    Rte_Call_PSMR_MedTEB_StartCheckpoint_CheckpointReached();

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/PSMI_Proc'
     */
    /* Logic: '<S60>/Logical1' incorporates:
     *  Constant: '<S65>/Calib'
     *  Logic: '<S60>/Logical2'
     */
    VePSMC_b_Lv2ResetPsmrMdDiagCntr = (((tmpRead_b || tmpRead_c) ||
        VePSMR_b_Lv2AccelPdlPosFlt_temp) || ((KePSMR_b_LTIR_Present) &&
        VePSMR_b_Lv2Lv1PdlPosDiffFlt_te));

    /* Switch: '<S60>/Bypass' incorporates:
     *  Constant: '<S64>/Calib'
     */
    if (KePSMR_b_KeySts_OvrdEnbl)
    {
        /* Switch: '<S60>/Bypass' incorporates:
         *  Constant: '<S63>/Calib'
         *  DataTypeConversion: '<S61>/DataTypeConversion'
         */
        VePSMI_e_Lv2KeySts = (TeLTIR_e_KeySts)KePSMR_e_KeySts_OvrdVal;
    }
    else
    {
        /* Switch: '<S60>/Bypass' incorporates:
         *  Inport: '<Root>/VeLTIR_e_Lv2KeySts'
         */
        (void)Rte_Read_VeLTIR_e_Lv2KeySts_Value((&(VePSMI_e_Lv2KeySts)));
    }

    /* End of Switch: '<S60>/Bypass' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeAPSR_b_Lv1Pv2MaxIPFailed' */
    (void)Rte_Read_VeAPSR_b_Lv1Pv2MaxIPFailed_Value(&tmpRead_9);

    /* Inport: '<Root>/VeAPSR_b_Lv1Pv2MinIPFailed' */
    (void)Rte_Read_VeAPSR_b_Lv1Pv2MinIPFailed_Value(&tmpRead_8);

    /* Inport: '<Root>/VeAPSR_b_Lv1Pv1MaxIPFailed' */
    (void)Rte_Read_VeAPSR_b_Lv1Pv1MaxIPFailed_Value(&tmpRead_7);

    /* Inport: '<Root>/VeAPSR_b_Lv1Pv1MinIPFailed' */
    (void)Rte_Read_VeAPSR_b_Lv1Pv1MinIPFailed_Value(&tmpRead_6);

    /* Inport: '<Root>/VeAPSR_b_Lv1Pv2LimFailed' */
    (void)Rte_Read_VeAPSR_b_Lv1Pv2LimFailed_Value(&tmpRead_2);

    /* Inport: '<Root>/VeAPSR_b_Lv1Pv1LimFailed' */
    (void)Rte_Read_VeAPSR_b_Lv1Pv1LimFailed_Value(&tmpRead_1);

    /* Inport: '<Root>/VeAPSR_b_Failed5VRefOut' */
    (void)Rte_Read_VeAPSR_b_Failed5VRefOut_Value(&tmpRead_0);

    /* Inport: '<Root>/VeAPSR_b_Failed5VRefAux' */
    (void)Rte_Read_VeAPSR_b_Failed5VRefAux_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/PSMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/PSMI_Proc'
     */
    /* RelationalOperator: '<S60>/CompareRUN' incorporates:
     *  Constant: '<S62>/Constant'
     *  Switch: '<S60>/Bypass'
     */
    VePSMC_b_Lv2KeyInRun = (((uint32)VePSMI_e_Lv2KeySts) == CeLTIR_e_IGN_RUN);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/PSMC_Proc'
     */
    /* Outputs for Atomic SubSystem: '<S3>/CalculateLv2Pedal' */
    /* Logic: '<S8>/PV2_or_Aux_5V_ref_Failure' */
    VePSMC_b_PV2_AUX5VFail = (tmpRead || tmpRead_2);

    /* Logic: '<S8>/PV1_or_Primary_5V_ref_Failure' */
    VePSMC_b_PV1_OUT5VFail = (tmpRead_0 || tmpRead_1);

    /* Logic: '<S8>/Any_Level_1_Failure' */
    VePSMC_b_Lv1PV1PV2Failed = ((rtb_TmpSignalConversionAtVeAP_e ||
        (VePSMC_b_PV2_AUX5VFail)) || (VePSMC_b_PV1_OUT5VFail));

    /* Logic: '<S8>/LV1_IP_FAILED' */
    VePSMC_b_Lv1IPFailed = (((tmpRead_6 || tmpRead_7) || tmpRead_8) || tmpRead_9);

    /* Logic: '<S8>/Logical1' */
    VePSMC_b_PV1FailSts = ((VePSMC_b_PV1_OUT5VFail) || (PSMR_ac_B.Switch3));

    /* Logic: '<S8>/Logical2' */
    VePSMC_b_PV2FailSts = ((VePSMC_b_PV2_AUX5VFail) || (PSMR_ac_B.Switch3_o));

    /* Logic: '<S8>/Logical3' */
    VePSMC_b_PVCohFailSts = (rtb_TmpSignalConversionAtVeAP_e ||
        (PSMR_ac_B.Switch3_j));

    /* Logic: '<S9>/PV_Fail_Check' incorporates:
     *  Logic: '<S9>/NotPV1Fail2'
     *  Logic: '<S9>/NotPV2Fail2'
     *  Logic: '<S9>/PV_Fail_Check1'
     *  Switch: '<S9>/CheckPV2'
     *  Switch: '<S9>/CheckPVCoh'
     *  Switch: '<S9>/CheckPVNoFault'
     */
    VePSMR_b_Lv2Lv1PdlPosDiffFlt_te = !VePSMC_b_PV1FailSts;
    VePSMR_b_Lv2AccelPdlPosFlt_temp = !VePSMC_b_PV2FailSts;
    tmpRead_c = (VePSMR_b_Lv2Lv1PdlPosDiffFlt_te &&
                 VePSMR_b_Lv2AccelPdlPosFlt_temp);

    /* Switch: '<S9>/CheckPVNoFault' incorporates:
     *  Logic: '<S9>/PV_Fail_Check'
     *  Logic: '<S9>/PV_Fail_Check1'
     *  Logic: '<S9>/PV_Fail_Check2'
     *  Logic: '<S9>/PV_Fail_Check3'
     *  Switch: '<S9>/CheckPV1'
     *  Switch: '<S9>/CheckPV2'
     *  Switch: '<S9>/CheckPVCoh'
     */
    if (tmpRead_c && (!VePSMC_b_PVCohFailSts))
    {
        /* Switch: '<S9>/CheckPVNoFault' incorporates:
         *  Constant: '<S19>/Constant'
         */
        VePSMC_e_Lv2PVSModeInterm = CePSMR_e_NO_Fault;
    }
    else if (tmpRead_c && (VePSMC_b_PVCohFailSts))
    {
        /* Switch: '<S9>/CheckPVCoh' incorporates:
         *  Constant: '<S20>/Constant'
         *  Switch: '<S9>/CheckPVNoFault'
         */
        VePSMC_e_Lv2PVSModeInterm = CePSMR_e_PVS_Incoh;
    }
    else if (VePSMR_b_Lv2Lv1PdlPosDiffFlt_te && (VePSMC_b_PV2FailSts))
    {
        /* Switch: '<S9>/CheckPV2' incorporates:
         *  Constant: '<S21>/Constant'
         *  Switch: '<S9>/CheckPVCoh'
         *  Switch: '<S9>/CheckPVNoFault'
         */
        VePSMC_e_Lv2PVSModeInterm = CePSMR_e_PVS2Faulty;
    }
    else if ((VePSMC_b_PV1FailSts) && VePSMR_b_Lv2AccelPdlPosFlt_temp)
    {
        /* Switch: '<S9>/CheckPV1' incorporates:
         *  Constant: '<S22>/Constant'
         *  Switch: '<S9>/CheckPV2'
         *  Switch: '<S9>/CheckPVCoh'
         *  Switch: '<S9>/CheckPVNoFault'
         */
        VePSMC_e_Lv2PVSModeInterm = CePSMR_e_PVS1Faulty;
    }
    else
    {
        /* Switch: '<S9>/CheckPVNoFault' incorporates:
         *  Constant: '<S23>/Constant'
         *  Switch: '<S9>/CheckPV1'
         *  Switch: '<S9>/CheckPV2'
         *  Switch: '<S9>/CheckPVCoh'
         */
        VePSMC_e_Lv2PVSModeInterm = CePSMR_e_NotValid;
    }

    /* End of Outputs for SubSystem: '<S3>/CalculateLv2Pedal' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeSTMR_e_BrkPdlStat' */
    (void)Rte_Read_VeSTMR_e_BrkPdlStat_Value(&tmpRead_3);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/PSMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/PSMC_Proc'
     */
    /* Outputs for Atomic SubSystem: '<S3>/CalculateLv2Pedal' */
    /* Switch: '<S8>/CheckIP' */
    if (VePSMC_b_Lv1IPFailed)
    {
        /* Switch: '<S8>/CheckIP' incorporates:
         *  Constant: '<S12>/Constant'
         */
        rtb_CheckIP = CePSMR_e_Lv2PVSZeroTrqReq;
    }
    else
    {
        /* Switch: '<S8>/CheckIP' incorporates:
         *  Switch: '<S9>/CheckPVNoFault'
         */
        rtb_CheckIP = VePSMC_e_Lv2PVSModeInterm;
    }

    /* End of Switch: '<S8>/CheckIP' */
    /* End of Outputs for SubSystem: '<S3>/CalculateLv2Pedal' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeSSMR_b_VehSpdFA' */
    (void)Rte_Read_VeSSMR_b_VehSpdFA_Value(&tmpRead_a);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/PSMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/PSMC_Proc'
     */
    /* Outputs for Atomic SubSystem: '<S3>/CalculateLv2Pedal' */
    /* Switch: '<S26>/Switch1' */
    if (tmpRead_a)
    {
        /* Switch: '<S26>/Switch1' incorporates:
         *  Constant: '<S35>/Calib'
         */
        VePSMC_k_PVSNormFiltrCoeff = KePSMR_k_PVSNormFiltrCoeff;
    }
    else
    {
        /* Switch: '<S26>/Switch1' incorporates:
         *  Lookup_n-D: '<S41>/Vector'
         *  SignalConversion generated from: '<S1>/VeSSMR_v_VehSpd'
         */
        VePSMC_k_PVSNormFiltrCoeff = look1_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeSSMR, ((const float32 *)
              &(KxPSMR_k_DelpvsFiltConstDr[0])), ((const float32 *)
              &(KtPSMR_k_DelpvsFiltConstDr[0])), 6U);
    }

    /* End of Switch: '<S26>/Switch1' */

    /* UnitDelay: '<S47>/Unit Delay1' */
    VePSMC_U_Lv2DelPVSHiRes = PSMR_ac_DW.VePSMC_U_Lv2DelPVSHiRes_Prev;

    /* Outputs for Atomic SubSystem: '<S8>/MinMaxLimiter' */
    /* Switch: '<S14>/LimiterSwitch' incorporates:
     *  Constant: '<S18>/Calib'
     *  RelationalOperator: '<S14>/Relational_Operator'
     */
    if (KePSMR_U_Lv2PVSLHMax < PSMR_ac_B.VePSMR_U_Lv2PV1Normal_intermedi)
    {
        /* Switch: '<S34>/LimiterSwitch' */
        rtb_VePSMC_Pct_AccelPedalEffPos = KePSMR_U_Lv2PVSLHMax;
    }
    else
    {
        /* Switch: '<S34>/LimiterSwitch' */
        rtb_VePSMC_Pct_AccelPedalEffPos =
            PSMR_ac_B.VePSMR_U_Lv2PV1Normal_intermedi;
    }

    /* End of Switch: '<S14>/LimiterSwitch' */

    /* Switch: '<S14>/LimiterSwitch1' incorporates:
     *  Constant: '<S8>/FixedOne'
     *  RelationalOperator: '<S14>/Relational_Operator1'
     */
    if (rtb_VePSMC_Pct_AccelPedalEffPos > 0.0F)
    {
        /* Switch: '<S14>/LimiterSwitch1' */
        VePSMC_U_PV1Limit = rtb_VePSMC_Pct_AccelPedalEffPos;
    }
    else
    {
        /* Switch: '<S14>/LimiterSwitch1' */
        VePSMC_U_PV1Limit = 0.0F;
    }

    /* End of Switch: '<S14>/LimiterSwitch1' */
    /* End of Outputs for SubSystem: '<S8>/MinMaxLimiter' */

    /* Outputs for Atomic SubSystem: '<S8>/MinMaxLimiter1' */
    /* Switch: '<S15>/LimiterSwitch' incorporates:
     *  Constant: '<S18>/Calib'
     *  RelationalOperator: '<S15>/Relational_Operator'
     */
    if (KePSMR_U_Lv2PVSLHMax < PSMR_ac_B.VePSMR_U_Lv2PV2Normal_intermedi)
    {
        /* Switch: '<S34>/LimiterSwitch' */
        rtb_VePSMC_Pct_AccelPedalEffPos = KePSMR_U_Lv2PVSLHMax;
    }
    else
    {
        /* Switch: '<S34>/LimiterSwitch' */
        rtb_VePSMC_Pct_AccelPedalEffPos =
            PSMR_ac_B.VePSMR_U_Lv2PV2Normal_intermedi;
    }

    /* End of Switch: '<S15>/LimiterSwitch' */

    /* Switch: '<S15>/LimiterSwitch1' incorporates:
     *  Constant: '<S8>/FixedOne1'
     *  RelationalOperator: '<S15>/Relational_Operator1'
     */
    if (rtb_VePSMC_Pct_AccelPedalEffPos > 0.0F)
    {
        /* Switch: '<S15>/LimiterSwitch1' */
        VePSMC_U_PV2Limit = rtb_VePSMC_Pct_AccelPedalEffPos;
    }
    else
    {
        /* Switch: '<S15>/LimiterSwitch1' */
        VePSMC_U_PV2Limit = 0.0F;
    }

    /* End of Switch: '<S15>/LimiterSwitch1' */
    /* End of Outputs for SubSystem: '<S8>/MinMaxLimiter1' */

    /* Switch: '<S13>/Switch' incorporates:
     *  RelationalOperator: '<S13>/Comparison'
     */
    if (PSMR_ac_B.VePSMR_U_Lv2PV1Normal_intermedi <
            PSMR_ac_B.VePSMR_U_Lv2PV2Normal_intermedi)
    {
        /* Switch: '<S13>/Switch' */
        VePSMC_U_Lv2PVNorm = PSMR_ac_B.VePSMR_U_Lv2PV1Normal_intermedi;
    }
    else
    {
        /* Switch: '<S13>/Switch' */
        VePSMC_U_Lv2PVNorm = PSMR_ac_B.VePSMR_U_Lv2PV2Normal_intermedi;
    }

    /* End of Switch: '<S13>/Switch' */

    /* Outputs for Atomic SubSystem: '<S8>/MinMaxLimiter2' */
    /* Switch: '<S16>/LimiterSwitch' incorporates:
     *  Constant: '<S18>/Calib'
     *  RelationalOperator: '<S16>/Relational_Operator'
     */
    if (KePSMR_U_Lv2PVSLHMax < VePSMC_U_Lv2PVNorm)
    {
        /* Switch: '<S34>/LimiterSwitch' */
        rtb_VePSMC_Pct_AccelPedalEffPos = KePSMR_U_Lv2PVSLHMax;
    }
    else
    {
        /* Switch: '<S34>/LimiterSwitch' */
        rtb_VePSMC_Pct_AccelPedalEffPos = VePSMC_U_Lv2PVNorm;
    }

    /* End of Switch: '<S16>/LimiterSwitch' */

    /* Switch: '<S16>/LimiterSwitch1' incorporates:
     *  Constant: '<S8>/FixedOne2'
     *  RelationalOperator: '<S16>/Relational_Operator1'
     */
    if (rtb_VePSMC_Pct_AccelPedalEffPos > 0.0F)
    {
        /* Switch: '<S16>/LimiterSwitch1' */
        VePSMC_U_PV12Limit = rtb_VePSMC_Pct_AccelPedalEffPos;
    }
    else
    {
        /* Switch: '<S16>/LimiterSwitch1' */
        VePSMC_U_PV12Limit = 0.0F;
    }

    /* End of Switch: '<S16>/LimiterSwitch1' */
    /* End of Outputs for SubSystem: '<S8>/MinMaxLimiter2' */

    /* Switch: '<S17>/CheckPVSNoFault' incorporates:
     *  Constant: '<S43>/Constant'
     *  Constant: '<S44>/Constant'
     *  Constant: '<S45>/Constant'
     *  Constant: '<S46>/Constant'
     *  RelationalOperator: '<S17>/Comparison1'
     *  RelationalOperator: '<S17>/Comparison2'
     *  RelationalOperator: '<S17>/Comparison3'
     *  RelationalOperator: '<S17>/Comparison4'
     *  Switch: '<S17>/CheckPVS1'
     *  Switch: '<S17>/CheckPVS2'
     *  Switch: '<S17>/CheckPVSCoh'
     *  Switch: '<S17>/CheckPVSFailAll'
     */
    if (((uint32)rtb_CheckIP) == CePSMR_e_NO_Fault)
    {
        /* Switch: '<S17>/CheckPVSNoFault' */
        VePSMC_U_Lv2PVSNormPreLimit = PSMR_ac_B.VePSMR_U_Lv2PV1Normal_intermedi;
    }
    else if (((uint32)rtb_CheckIP) == CePSMR_e_PVS2Faulty)
    {
        /* Switch: '<S17>/CheckPVS2' incorporates:
         *  Switch: '<S17>/CheckPVSNoFault'
         */
        VePSMC_U_Lv2PVSNormPreLimit = VePSMC_U_PV1Limit;
    }
    else if (((uint32)rtb_CheckIP) == CePSMR_e_PVS1Faulty)
    {
        /* Switch: '<S17>/CheckPVS1' incorporates:
         *  Switch: '<S17>/CheckPVS2'
         *  Switch: '<S17>/CheckPVSNoFault'
         */
        VePSMC_U_Lv2PVSNormPreLimit = VePSMC_U_PV2Limit;
    }
    else if (((uint32)rtb_CheckIP) == CePSMR_e_PVS_Incoh)
    {
        /* Switch: '<S17>/CheckPVSCoh' incorporates:
         *  Switch: '<S17>/CheckPVS1'
         *  Switch: '<S17>/CheckPVS2'
         *  Switch: '<S17>/CheckPVSNoFault'
         */
        VePSMC_U_Lv2PVSNormPreLimit = VePSMC_U_PV12Limit;
    }
    else if (PSMR_ac_B.VePSMR_b_Lv2PVSFailed_temp)
    {
        /* Switch: '<S17>/CheckPVSFailAll' incorporates:
         *  Switch: '<S17>/CheckPVS1'
         *  Switch: '<S17>/CheckPVS2'
         *  Switch: '<S17>/CheckPVSCoh'
         *  Switch: '<S17>/CheckPVSNoFault'
         */
        VePSMC_U_Lv2PVSNormPreLimit = VePSMC_U_PV12Limit;
    }
    else
    {
        /* Switch: '<S17>/CheckPVSNoFault' incorporates:
         *  Constant: '<S48>/Calib'
         *  Switch: '<S17>/CheckPVS1'
         *  Switch: '<S17>/CheckPVS2'
         *  Switch: '<S17>/CheckPVSCoh'
         *  Switch: '<S17>/CheckPVSFailAll'
         */
        VePSMC_U_Lv2PVSNormPreLimit = KePSMR_U_Lv2PVSIdlePosn;
    }

    /* End of Switch: '<S17>/CheckPVSNoFault' */

    /* Logic: '<S58>/Logical1' incorporates:
     *  Constant: '<S49>/Constant'
     *  Logic: '<S58>/AND'
     *  Logic: '<S58>/NOT'
     *  RelationalOperator: '<S49>/Compare'
     *  UnitDelay: '<S58>/Unit Delay1'
     */
    VePSMC_b_Lv2PVTrqRampActive = (rtb_TmpSignalConversionAtVeAP_m ||
        ((VePSMC_U_Lv2DelPVSHiRes < 1.0F) &&
         (PSMR_ac_DW.VePSMR_b_Lv2PVTrqRampActive_Pre)));

    /* Switch: '<S47>/LimitedDELPVS' */
    if (VePSMC_b_Lv2PVTrqRampActive)
    {
        /* Switch: '<S47>/LimitedDELPVS' incorporates:
         *  Product: '<S47>/Prduct'
         */
        VePSMR_U_Lv2PVSNorm_temp = VePSMC_U_Lv2DelPVSHiRes *
            VePSMC_U_Lv2PVSNormPreLimit;
    }
    else
    {
        /* Switch: '<S47>/LimitedDELPVS' */
        VePSMR_U_Lv2PVSNorm_temp = VePSMC_U_Lv2PVSNormPreLimit;
    }

    /* End of Switch: '<S47>/LimitedDELPVS' */

    /* Outputs for Atomic SubSystem: '<S10>/LV2_Digital_Lowpass_Reset_Enabled' */
    /* Switch: '<S34>/LimiterSwitch' incorporates:
     *  UnitDelay: '<S32>/Unit Delay'
     */
    rtb_VePSMC_Pct_AccelPedalEffPos = PSMR_ac_DW.VePSMC_U_PVSNormFiltd_prev;

    /* Switch: '<S32>/Switch1' incorporates:
     *  Product: '<S32>/Multiplication'
     *  Sum: '<S32>/Subtraction'
     *  Sum: '<S32>/Summation'
     */
    VePSMC_U_PVSNormFiltd = ((VePSMR_U_Lv2PVSNorm_temp -
        rtb_VePSMC_Pct_AccelPedalEffPos) * VePSMC_k_PVSNormFiltrCoeff) +
        rtb_VePSMC_Pct_AccelPedalEffPos;

    /* Update for UnitDelay: '<S32>/Unit Delay' */
    PSMR_ac_DW.VePSMC_U_PVSNormFiltd_prev = VePSMC_U_PVSNormFiltd;

    /* End of Outputs for SubSystem: '<S10>/LV2_Digital_Lowpass_Reset_Enabled' */

    /* Switch: '<S33>/Switch' incorporates:
     *  RelationalOperator: '<S33>/Comparison'
     */
    if (VePSMC_U_PVSNormFiltd < VePSMR_U_Lv2PVSNorm_temp)
    {
        /* Switch: '<S33>/Switch' */
        VePSMC_U_PVSNormFiltd_Arb = VePSMC_U_PVSNormFiltd;
    }
    else
    {
        /* Switch: '<S33>/Switch' */
        VePSMC_U_PVSNormFiltd_Arb = VePSMR_U_Lv2PVSNorm_temp;
    }

    /* End of Switch: '<S33>/Switch' */

    /* Lookup_n-D: '<S42>/Vector' incorporates:
     *  Switch: '<S33>/Switch'
     */
    VePSMC_Pct_AccelPedalEffPosRaw = look1_iflf_binlcapw
        (VePSMC_U_PVSNormFiltd_Arb, ((const float32 *)&(KxPSMR_Pct_PtcPdlPct[0])),
         ((const float32 *)&(KtPSMR_Pct_PtcPdlPct[0])), 8U);

    /* Switch: '<S10>/CheckBTO' incorporates:
     *  Constant: '<S25>/Constant'
     *  Inport: '<Root>/VeSTMR_e_BrkPdlStat'
     *  Logic: '<S10>/Logical3'
     *  RelationalOperator: '<S10>/BrkAppld'
     */
    if ((((uint32)tmpRead_3) != CeSTMR_e_BrkNotAppld) &&
            rtb_TmpSignalConversionAtVeAP_c)
    {
        /* Switch: '<S10>/CheckBTO' incorporates:
         *  Constant: '<S39>/Calib'
         *  Sum: '<S10>/Sum2'
         *  UnitDelay: '<S10>/Unit_Delay'
         */
        rtb_VePSMC_Pct_AccelPedalEffPos =
            PSMR_ac_DW.VePSMR_Pct_Lv2AccelPedalEffPosi -
            KePSMR_Pct_Lv2PvBrkRampDec;
    }
    else
    {
        /* Switch: '<S10>/CheckBTO' */
        rtb_VePSMC_Pct_AccelPedalEffPos = VePSMC_Pct_AccelPedalEffPosRaw;
    }

    /* End of Switch: '<S10>/CheckBTO' */

    /* Outputs for Atomic SubSystem: '<S10>/MinMaxLimiter' */
    /* Switch: '<S34>/LimiterSwitch' incorporates:
     *  Constant: '<S10>/ConstantValue2'
     *  RelationalOperator: '<S34>/Relational_Operator'
     */
    if (100.0F < rtb_VePSMC_Pct_AccelPedalEffPos)
    {
        /* Switch: '<S34>/LimiterSwitch' */
        rtb_VePSMC_Pct_AccelPedalEffPos = 100.0F;
    }

    /* End of Switch: '<S34>/LimiterSwitch' */

    /* Switch: '<S34>/LimiterSwitch1' incorporates:
     *  Constant: '<S10>/ConstantValue1'
     *  RelationalOperator: '<S34>/Relational_Operator1'
     */
    if (rtb_VePSMC_Pct_AccelPedalEffPos <= 0.0F)
    {
        /* Switch: '<S34>/LimiterSwitch1' */
        rtb_VePSMC_Pct_AccelPedalEffPos = 0.0F;
    }

    /* End of Switch: '<S34>/LimiterSwitch1' */
    /* End of Outputs for SubSystem: '<S10>/MinMaxLimiter' */

    /* Sum: '<S10>/Sum1' */
    rtb_Sum1_k = rtb_TmpSignalConversionAtVeAPSR -
        rtb_VePSMC_Pct_AccelPedalEffPos;

    /* Switch: '<S30>/LV2_Abs_switch' incorporates:
     *  Constant: '<S30>/Constant Value1'
     *  RelationalOperator: '<S30>/Comparison'
     */
    if (rtb_Sum1_k < 0.0F)
    {
        /* Switch: '<S30>/LV2_Abs_switch' incorporates:
         *  Product: '<S30>/Product'
         */
        VePSMR_Pct_Lv2Lv1AccelPdlPosDiff = -rtb_Sum1_k;
    }
    else
    {
        /* Switch: '<S30>/LV2_Abs_switch' */
        VePSMR_Pct_Lv2Lv1AccelPdlPosDiff = rtb_Sum1_k;
    }

    /* End of Switch: '<S30>/LV2_Abs_switch' */

    /* RelationalOperator: '<S10>/CheckDiff' incorporates:
     *  Constant: '<S37>/Calib'
     */
    VePSMR_b_Lv2Lv1PdlPosDiffFlt_te = (VePSMR_Pct_Lv2Lv1AccelPdlPosDiff >
        KePSMR_Pct_Lv2Lv1PdlPosDiff);

    /* Switch: '<S29>/Switch1' incorporates:
     *  Constant: '<S40>/Calib'
     */
    if (KePSMR_b_BTOFltEnable)
    {
        /* Switch: '<S29>/Switch1' incorporates:
         *  Constant: '<S36>/Calib'
         *  Logic: '<S10>/Logical2'
         *  Logic: '<S10>/Logical4'
         *  Logic: '<S10>/Logical5'
         */
        VePSMC_b_Lv2Lv1PdlPosDiffFltActive = ((!rtb_TmpSignalConversionAtVeAP_c)
            && ((KePSMR_b_PdlPosDiffActive) && VePSMR_b_Lv2Lv1PdlPosDiffFlt_te));
    }
    else
    {
        /* Switch: '<S29>/Switch1' incorporates:
         *  Constant: '<S36>/Calib'
         *  Logic: '<S10>/Logical2'
         */
        VePSMC_b_Lv2Lv1PdlPosDiffFltActive = ((KePSMR_b_PdlPosDiffActive) &&
            VePSMR_b_Lv2Lv1PdlPosDiffFlt_te);
    }

    /* End of Switch: '<S29>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S10>/LV2_Counter_Reset_Enabled' */
    /* Switch: '<S31>/Switch2' incorporates:
     *  Logic: '<S10>/Logical9'
     *  Switch: '<S31>/Switch1'
     */
    if (!VePSMC_b_Lv2Lv1PdlPosDiffFltActive)
    {
        /* Switch: '<S31>/Switch1' incorporates:
         *  Constant: '<S31>/Constant Value2'
         */
        VePSMC_Cnt_Lv2Lv1PdlPosDiffFltActive = 0U;
    }
    else
    {
        /* Switch: '<S31>/Switch1' incorporates:
         *  Constant: '<S31>/Constant Value1'
         *  Sum: '<S31>/Subtraction'
         *  Switch: '<S31>/Switch2'
         *  UnitDelay: '<S31>/Unit Delay'
         */
        VePSMC_Cnt_Lv2Lv1PdlPosDiffFltActive = (uint16)(((uint32)
            PSMR_ac_DW.VePSMC_Cnt_Lv2Lv1PdlPosDiffFltA) + 1U);
    }

    /* End of Switch: '<S31>/Switch2' */
    /* End of Outputs for SubSystem: '<S10>/LV2_Counter_Reset_Enabled' */
    /* End of Outputs for SubSystem: '<S3>/CalculateLv2Pedal' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeDTRR_Pct_AccelPdlVirtActPosn' */
    (void)Rte_Read_VeDTRR_Pct_AccelPdlVirtActPosn_Value(&Switch1_j);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/PSMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/PSMC_Proc'
     */
    /* Outputs for Atomic SubSystem: '<S3>/CalculateLv2Pedal' */
    /* Outputs for Atomic SubSystem: '<S10>/LV2_Counter_Reset_Enabled' */
    /* Update for UnitDelay: '<S31>/Unit Delay' */
    PSMR_ac_DW.VePSMC_Cnt_Lv2Lv1PdlPosDiffFltA =
        VePSMC_Cnt_Lv2Lv1PdlPosDiffFltActive;

    /* End of Outputs for SubSystem: '<S10>/LV2_Counter_Reset_Enabled' */

    /* RelationalOperator: '<S10>/Comparison13' incorporates:
     *  Constant: '<S38>/Calib'
     */
    VePSMC_b_Lv2Lv1PdlPosDiffFltActiveArb =
        (VePSMC_Cnt_Lv2Lv1PdlPosDiffFltActive >= ((uint16)
          KePSMR_Cnt_PdlPosDiffFlt));

    /* Switch: '<S27>/Switch1' incorporates:
     *  Switch: '<S28>/Switch1'
     */
    if (PSMR_ac_B.VePSMR_b_Lv2PVSFailed_temp)
    {
        /* Switch: '<S27>/Switch1' */
        rtb_TmpSignalConversionAtVeAPSR = rtb_VePSMC_Pct_AccelPedalEffPos;

        /* Switch: '<S28>/Switch1' */
        Switch1_j = rtb_VePSMC_Pct_AccelPedalEffPos;
    }

    /* End of Switch: '<S27>/Switch1' */

    /* Logic: '<S10>/Logical1' */
    VePSMR_b_Lv2AccelPdlPosFlt_temp = (((PSMR_ac_B.VePSMR_b_Lv2PVSFailed_temp) ||
        (VePSMC_b_Lv1PV1PV2Failed)) || (VePSMC_b_Lv2Lv1PdlPosDiffFltActiveArb));

    /* Switch: '<S47>/Dec_if_Enabled_else_inc' incorporates:
     *  Constant: '<S50>/Constant'
     *  RelationalOperator: '<S50>/Compare'
     *  Switch: '<S47>/Switch'
     */
    if (rtb_TmpSignalConversionAtVeAP_m)
    {
        /* Switch: '<S47>/Dec_if_Enabled_else_inc' incorporates:
         *  Constant: '<S53>/Calib'
         *  Sum: '<S47>/Dec'
         */
        VePSMC_U_Lv2PVTrqRamp = VePSMC_U_Lv2DelPVSHiRes -
            KePSMR_U_Lv2PVTrqRampDec;
    }
    else if (VePSMC_U_Lv2PVSNormPreLimit == 0.0F)
    {
        /* Switch: '<S47>/Switch' incorporates:
         *  Switch: '<S47>/Dec_if_Enabled_else_inc'
         */
        VePSMC_U_Lv2PVTrqRamp = VePSMC_U_Lv2DelPVSHiRes;
    }
    else
    {
        /* Switch: '<S47>/Dec_if_Enabled_else_inc' incorporates:
         *  Constant: '<S54>/Calib'
         *  Sum: '<S47>/Inc'
         *  Switch: '<S47>/Switch'
         */
        VePSMC_U_Lv2PVTrqRamp = VePSMC_U_Lv2DelPVSHiRes +
            KePSMR_U_Lv2PVTrqRampInc;
    }

    /* End of Switch: '<S47>/Dec_if_Enabled_else_inc' */
    /* End of Outputs for SubSystem: '<S3>/CalculateLv2Pedal' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeSSMR_b_VehSpdRatFailed' */
    (void)Rte_Read_VeSSMR_b_VehSpdRatFailed_Value(&tmpRead_5);

    /* Inport: '<Root>/VeSSMR_b_CANVehSpdNotValid' */
    (void)Rte_Read_VeSSMR_b_CANVehSpdNotValid_Value(&tmpRead_4);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/PSMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/PSMC_Proc'
     */
    /* Outputs for Atomic SubSystem: '<S3>/CalculateLv2Pedal' */
    /* Logic: '<S47>/LogicalOperator4' incorporates:
     *  Constant: '<S56>/Calib'
     *  Constant: '<S57>/Calib'
     *  Logic: '<S47>/LogicalOperator2'
     *  Logic: '<S47>/LogicalOperator3'
     */
    VePSMC_b_Lv2PVTrqRampMultFailed = ((tmpRead_4 &&
        (KePSMR_b_CANVehSpdNotVld_PVTrqRampMultMinDsbl)) || (tmpRead_5 &&
        (KePSMR_b_Lv1SpdRatFlt_PVTrqRampMultMinDsbl)));

    /* Lookup_n-D: '<S59>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeSSMR_v_VehSpd'
     */
    VePSMC_U_Lv2PVTrqRampMultMin = look1_iflf_binlcapw
        (rtb_TmpSignalConversionAtVeSSMR, ((const float32 *)
          &(KxPSMR_U_Lv2PVTrqRampMultMinTbl[0])), ((const float32 *)
          &(KtPSMR_U_Lv2PVTrqRampMultMinTbl[0])), 2U);

    /* Switch: '<S47>/Switch1' */
    if (VePSMC_b_Lv2PVTrqRampMultFailed)
    {
        /* Switch: '<S47>/Switch1' incorporates:
         *  Constant: '<S55>/Calib'
         */
        VePSMC_U_Lv2PVTrqRampMult = KePSMR_U_Lv2PVTrqRampMultMin;
    }
    else
    {
        /* Switch: '<S47>/Switch1' */
        VePSMC_U_Lv2PVTrqRampMult = VePSMC_U_Lv2PVTrqRampMultMin;
    }

    /* End of Switch: '<S47>/Switch1' */

    /* Switch: '<S51>/Switch' incorporates:
     *  RelationalOperator: '<S51>/Comparison'
     */
    if (VePSMC_U_Lv2PVTrqRamp > VePSMC_U_Lv2PVTrqRampMult)
    {
        /* Switch: '<S51>/Switch' */
        VePSMC_U_MaxofTrqRamp = VePSMC_U_Lv2PVTrqRamp;
    }
    else
    {
        /* Switch: '<S51>/Switch' */
        VePSMC_U_MaxofTrqRamp = VePSMC_U_Lv2PVTrqRampMult;
    }

    /* End of Switch: '<S51>/Switch' */

    /* Switch: '<S52>/Switch' incorporates:
     *  Constant: '<S47>/FixedOne'
     *  RelationalOperator: '<S52>/Comparison'
     */
    if (1.0F < VePSMC_U_MaxofTrqRamp)
    {
        /* Switch: '<S52>/Switch' */
        VePSMC_U_MinDelPVSHiRes = 1.0F;
    }
    else
    {
        /* Switch: '<S52>/Switch' */
        VePSMC_U_MinDelPVSHiRes = VePSMC_U_MaxofTrqRamp;
    }

    /* End of Switch: '<S52>/Switch' */
    /* End of Outputs for SubSystem: '<S3>/CalculateLv2Pedal' */

    /* Update for Atomic SubSystem: '<S3>/CalculateLv2Pedal' */
    /* Update for UnitDelay: '<S10>/Unit_Delay' */
    PSMR_ac_DW.VePSMR_Pct_Lv2AccelPedalEffPosi = rtb_VePSMC_Pct_AccelPedalEffPos;

    /* Update for UnitDelay: '<S47>/Unit Delay1' */
    PSMR_ac_DW.VePSMC_U_Lv2DelPVSHiRes_Prev = VePSMC_U_MinDelPVSHiRes;

    /* Update for UnitDelay: '<S58>/Unit Delay1' */
    PSMR_ac_DW.VePSMR_b_Lv2PVTrqRampActive_Pre = VePSMC_b_Lv2PVTrqRampActive;

    /* End of Update for SubSystem: '<S3>/CalculateLv2Pedal' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/PSMI_Proc2'
     */
    /* Outputs for Atomic SubSystem: '<S5>/CheckLv2PedalDiagnostic' */
    /* RelationalOperator: '<S68>/Comparison' incorporates:
     *  Constant: '<S79>/Calib'
     */
    VePSMC_b_MaxPV1Faulty = (rtb_TmpSignalConversionAtVeHWIO >
        KePSMR_U_Lv2Pv1Max);

    /* RelationalOperator: '<S68>/Comparison2' incorporates:
     *  Constant: '<S75>/Calib'
     */
    VePSMC_b_MinPV1Faulty = (rtb_TmpSignalConversionAtVeHWIO <
        KePSMR_U_Lv2Pv1Min);

    /* Logic: '<S68>/Logical1' */
    VePSMC_b_Lv2PV1Faulty = ((VePSMC_b_MinPV1Faulty) || (VePSMC_b_MaxPV1Faulty));

    /* Outputs for Atomic SubSystem: '<S68>/Counter_Reset_Enabled' */
    /* Switch: '<S70>/Switch2' incorporates:
     *  Logic: '<S68>/Logical3'
     *  Switch: '<S70>/Switch'
     */
    if (!VePSMC_b_Lv2PV1Faulty)
    {
        /* Switch: '<S70>/Switch' incorporates:
         *  Constant: '<S70>/Constant Value2'
         */
        rtb_Switch_d = 0U;
    }
    else
    {
        /* Switch: '<S70>/Switch' incorporates:
         *  Constant: '<S70>/Constant Value1'
         *  Sum: '<S70>/Subtraction'
         *  Switch: '<S70>/Switch2'
         *  UnitDelay: '<S70>/Unit Delay'
         */
        rtb_Switch_d = (uint16)(((uint32)PSMR_ac_DW.UnitDelay_DSTATE_a) + 1U);
    }

    /* End of Switch: '<S70>/Switch2' */

    /* Update for UnitDelay: '<S70>/Unit Delay' */
    PSMR_ac_DW.UnitDelay_DSTATE_a = rtb_Switch_d;

    /* End of Outputs for SubSystem: '<S68>/Counter_Reset_Enabled' */

    /* RelationalOperator: '<S68>/Comparison4' incorporates:
     *  Constant: '<S86>/Calib'
     */
    VePSMD_b_Lv2PVS1Failing = (rtb_Switch_d >= ((uint16)KePSMR_Cnt_Lv2Pv1Faulty));

    /* Sum: '<S68>/LV2_PV1_NORM' incorporates:
     *  Constant: '<S74>/Calib'
     */
    VePSMD_U_Lv2PV1Norm = rtb_TmpSignalConversionAtVeHWIO -
        KePSMR_U_Lv2PV1Offset;

    /* Outputs for Atomic SubSystem: '<S68>/MinMaxLimiter' */
    /* Switch: '<S72>/LimiterSwitch' incorporates:
     *  Constant: '<S84>/Calib'
     *  RelationalOperator: '<S72>/Relational_Operator'
     */
    if (KePSMR_U_Lv2PV1MaxClip < VePSMD_U_Lv2PV1Norm)
    {
        /* Switch: '<S73>/LimiterSwitch' */
        rtb_TmpSignalConversionAtVeHWIO = KePSMR_U_Lv2PV1MaxClip;
    }
    else
    {
        /* Switch: '<S73>/LimiterSwitch' */
        rtb_TmpSignalConversionAtVeHWIO = VePSMD_U_Lv2PV1Norm;
    }

    /* End of Switch: '<S72>/LimiterSwitch' */

    /* Switch: '<S72>/LimiterSwitch1' incorporates:
     *  Constant: '<S85>/Calib'
     *  RelationalOperator: '<S72>/Relational_Operator1'
     */
    if (rtb_TmpSignalConversionAtVeHWIO > KePSMR_U_Lv2PV1MinClip)
    {
        /* Switch: '<S72>/LimiterSwitch1' */
        PSMR_ac_B.VePSMR_U_Lv2PV1Normal_intermedi =
            rtb_TmpSignalConversionAtVeHWIO;
    }
    else
    {
        /* Switch: '<S72>/LimiterSwitch1' */
        PSMR_ac_B.VePSMR_U_Lv2PV1Normal_intermedi = KePSMR_U_Lv2PV1MinClip;
    }

    /* End of Switch: '<S72>/LimiterSwitch1' */
    /* End of Outputs for SubSystem: '<S68>/MinMaxLimiter' */

    /* RelationalOperator: '<S68>/Comparison1' incorporates:
     *  Constant: '<S83>/Calib'
     */
    VePSMC_b_MaxPV2Faulty = (rtb_TmpSignalConversionAtVeHW_j >
        KePSMR_U_Lv2Pv2Max);

    /* RelationalOperator: '<S68>/Comparison3' incorporates:
     *  Constant: '<S82>/Calib'
     */
    VePSMC_b_MinPV2Faulty = (rtb_TmpSignalConversionAtVeHW_j <
        KePSMR_U_Lv2Pv2Min);

    /* Logic: '<S68>/Logical2' */
    VePSMC_b_Lv2PV2Faulty = ((VePSMC_b_MinPV2Faulty) || (VePSMC_b_MaxPV2Faulty));

    /* Outputs for Atomic SubSystem: '<S68>/Counter_Reset_Enabled1' */
    /* Switch: '<S71>/Switch2' incorporates:
     *  Logic: '<S68>/Logical4'
     *  Switch: '<S71>/Switch'
     */
    if (!VePSMC_b_Lv2PV2Faulty)
    {
        /* Switch: '<S71>/Switch' incorporates:
         *  Constant: '<S71>/Constant Value2'
         */
        rtb_Switch_d = 0U;
    }
    else
    {
        /* Switch: '<S71>/Switch' incorporates:
         *  Constant: '<S71>/Constant Value1'
         *  Sum: '<S71>/Subtraction'
         *  Switch: '<S71>/Switch2'
         *  UnitDelay: '<S71>/Unit Delay'
         */
        rtb_Switch_d = (uint16)(((uint32)PSMR_ac_DW.UnitDelay_DSTATE) + 1U);
    }

    /* End of Switch: '<S71>/Switch2' */

    /* Update for UnitDelay: '<S71>/Unit Delay' */
    PSMR_ac_DW.UnitDelay_DSTATE = rtb_Switch_d;

    /* End of Outputs for SubSystem: '<S68>/Counter_Reset_Enabled1' */

    /* RelationalOperator: '<S68>/Comparison5' incorporates:
     *  Constant: '<S78>/Calib'
     */
    VePSMD_b_Lv2PVS2Failing = (rtb_Switch_d >= ((uint16)KePSMR_Cnt_Lv2Pv2Faulty));

    /* Product: '<S68>/LV2_PV2_NORM' incorporates:
     *  Constant: '<S80>/Calib'
     */
    VePSMD_U_Lv2PV2Offset = rtb_TmpSignalConversionAtVeHW_j *
        KePSMR_U_Lv2PV2Slope;

    /* Sum: '<S68>/PV2_Offset' incorporates:
     *  Constant: '<S81>/Calib'
     */
    VePSMD_U_Lv2PV2Norm = VePSMD_U_Lv2PV2Offset - KePSMR_U_Lv2PV2Offset;

    /* Outputs for Atomic SubSystem: '<S68>/MinMaxLimiter1' */
    /* Switch: '<S73>/LimiterSwitch' incorporates:
     *  Constant: '<S76>/Calib'
     *  RelationalOperator: '<S73>/Relational_Operator'
     */
    if (KePSMR_U_Lv2PV2MaxClip < VePSMD_U_Lv2PV2Norm)
    {
        /* Switch: '<S73>/LimiterSwitch' */
        rtb_TmpSignalConversionAtVeHWIO = KePSMR_U_Lv2PV2MaxClip;
    }
    else
    {
        /* Switch: '<S73>/LimiterSwitch' */
        rtb_TmpSignalConversionAtVeHWIO = VePSMD_U_Lv2PV2Norm;
    }

    /* End of Switch: '<S73>/LimiterSwitch' */

    /* Switch: '<S73>/LimiterSwitch1' incorporates:
     *  Constant: '<S77>/Calib'
     *  RelationalOperator: '<S73>/Relational_Operator1'
     */
    if (rtb_TmpSignalConversionAtVeHWIO > KePSMR_U_Lv2PV2MinClip)
    {
        /* Switch: '<S73>/LimiterSwitch1' */
        PSMR_ac_B.VePSMR_U_Lv2PV2Normal_intermedi =
            rtb_TmpSignalConversionAtVeHWIO;
    }
    else
    {
        /* Switch: '<S73>/LimiterSwitch1' */
        PSMR_ac_B.VePSMR_U_Lv2PV2Normal_intermedi = KePSMR_U_Lv2PV2MinClip;
    }

    /* End of Switch: '<S73>/LimiterSwitch1' */
    /* End of Outputs for SubSystem: '<S68>/MinMaxLimiter1' */

    /* Outputs for Enabled SubSystem: '<S66>/MonitorLv2PedalPos' incorporates:
     *  EnablePort: '<S69>/Enable'
     */
    /* Logic: '<S66>/DisableLV2PVS' */
    if ((!VePSMC_b_Lv1PV1PV2Failed) && (!rtb_TmpSignalConversionAtVeAP_c))
    {
        /* Sum: '<S69>/Sum1' */
        rtb_TmpSignalConversionAtVeHW_j =
            PSMR_ac_B.VePSMR_U_Lv2PV1Normal_intermedi -
            PSMR_ac_B.VePSMR_U_Lv2PV2Normal_intermedi;

        /* Switch: '<S87>/LV2_Abs_switch' incorporates:
         *  Constant: '<S87>/Constant Value1'
         *  RelationalOperator: '<S87>/Comparison'
         */
        if (rtb_TmpSignalConversionAtVeHW_j < 0.0F)
        {
            /* Switch: '<S87>/LV2_Abs_switch' incorporates:
             *  Product: '<S87>/Product'
             */
            VePSMR_U_Lv2PVSDiff = -rtb_TmpSignalConversionAtVeHW_j;
        }
        else
        {
            /* Switch: '<S87>/LV2_Abs_switch' */
            VePSMR_U_Lv2PVSDiff = rtb_TmpSignalConversionAtVeHW_j;
        }

        /* End of Switch: '<S87>/LV2_Abs_switch' */

        /* UnitDelay: '<S88>/UnitDelay' */
        rtb_UnitDelay_g = PSMR_ac_DW.UnitDelay_DSTATE_f;

        /* Switch: '<S88>/dec_if_Ok_else_inc' incorporates:
         *  Constant: '<S94>/Calib'
         *  MinMax: '<S88>/FixPtMinax'
         */
        if (VePSMD_b_Lv2PVS1Failing)
        {
            /* Sum: '<S88>/Inc_Cntr' incorporates:
             *  Constant: '<S93>/Calib'
             */
            rtb_Inc_Cntr_a = (uint8)(((uint32)rtb_UnitDelay_g) + ((uint32)
                KePSMR_Cnt_Lv2PVCohCntrInc));

            /* Switch: '<S88>/Switch1' incorporates:
             *  RelationalOperator: '<S88>/Relational_Operator'
             */
            if (rtb_Inc_Cntr_a < rtb_UnitDelay_g)
            {
                /* Switch: '<S88>/dec_if_Ok_else_inc' incorporates:
                 *  Constant: '<S88>/CounterMax'
                 */
                rtb_UnitDelay_g = MAX_uint8_T;
            }
            else
            {
                /* Switch: '<S88>/dec_if_Ok_else_inc' */
                rtb_UnitDelay_g = rtb_Inc_Cntr_a;
            }

            /* End of Switch: '<S88>/Switch1' */
        }
        else
        {
            if (rtb_UnitDelay_g <= KePSMR_Cnt_Lv2PVCohCntrDec)
            {
                /* MinMax: '<S88>/FixPtMinax' incorporates:
                 *  Constant: '<S94>/Calib'
                 */
                rtb_UnitDelay_g = KePSMR_Cnt_Lv2PVCohCntrDec;
            }

            /* Switch: '<S88>/dec_if_Ok_else_inc' incorporates:
             *  Constant: '<S94>/Calib'
             *  Sum: '<S88>/Dec_Cntr'
             */
            rtb_UnitDelay_g -= KePSMR_Cnt_Lv2PVCohCntrDec;
        }

        /* End of Switch: '<S88>/dec_if_Ok_else_inc' */

        /* Logic: '<S69>/ResetCheck' incorporates:
         *  Constant: '<S96>/Calib'
         *  Logic: '<S91>/AND1'
         *  Logic: '<S91>/OR2'
         *  UnitDelay: '<S91>/Unit Delay'
         */
        VePSMD_b_Lv2MdVldFltRst = (((KePSMR_b_DisblMtrMdMonitor) ||
            (VePSMC_b_Lv2ResetPsmrMdDiagCntr)) || ((VePSMC_b_Lv2KeyInRun) &&
            (!PSMR_ac_DW.VePSMC_b_Lv2KeyInRunPrev)));

        /* S-Function (sfix_bitop): '<S88>/Bit6' incorporates:
         *  S-Function (sfix_bitop): '<S89>/Bit6'
         *  S-Function (sfix_bitop): '<S90>/Bit6'
         */
        rtb_TmpSignalConversionAtVeAP_f = ((uint32)
            rtb_TmpSignalConversionAtVeDMAB) & 64U;

        /* RelationalOperator: '<S102>/Compare' incorporates:
         *  Constant: '<S102>/Constant'
         *  S-Function (sfix_bitop): '<S88>/Bit6'
         */
        rtb_TmpSignalConversionAtVeAP_c = (rtb_TmpSignalConversionAtVeAP_f == 0U);

        /* Outputs for Atomic SubSystem: '<S88>/EdgeFalling' */
        /* Logic: '<S98>/AND' incorporates:
         *  Logic: '<S98>/OR1'
         *  UnitDelay: '<S98>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeAP_m = ((!rtb_TmpSignalConversionAtVeAP_c) &&
            (PSMR_ac_DW.UnitDelay_DSTATE_n));

        /* Update for UnitDelay: '<S98>/Unit Delay' */
        PSMR_ac_DW.UnitDelay_DSTATE_n = rtb_TmpSignalConversionAtVeAP_c;

        /* End of Outputs for SubSystem: '<S88>/EdgeFalling' */

        /* Logic: '<S88>/passDBCparam2' */
        VePSMC_b_Lv2PVS1CntrRst = ((VePSMD_b_Lv2MdVldFltRst) ||
            rtb_TmpSignalConversionAtVeAP_m);

        /* Switch: '<S88>/Switch2' incorporates:
         *  Switch: '<S88>/Switch3'
         *  Switch: '<S97>/Switch1'
         */
        if (VePSMC_b_Lv2PVS1CntrRst)
        {
            /* Switch: '<S88>/Switch2' incorporates:
             *  Constant: '<S88>/ResetZero'
             */
            VePSMD_Cnt_Lv2PVS1Failing = 0U;

            /* Switch: '<S88>/Switch3' incorporates:
             *  Constant: '<S88>/ResetZero1'
             */
            PSMR_ac_B.Switch3 = false;

            /* Switch: '<S97>/Switch1' incorporates:
             *  Constant: '<S100>/Constant'
             */
            VePSMC_e_Lv2FaultSts_CM_APP_SysPerf_PVS1 = CeDFIB_e_Init;
        }
        else
        {
            /* Switch: '<S88>/Switch2' */
            VePSMD_Cnt_Lv2PVS1Failing = rtb_UnitDelay_g;

            /* Switch: '<S88>/Switch3' incorporates:
             *  Constant: '<S95>/Calib'
             *  Logic: '<S88>/Cntr_fail'
             *  RelationalOperator: '<S88>/Enough_counts_to_Fail'
             *  UnitDelay: '<S88>/UnitDelay1'
             */
            PSMR_ac_B.Switch3 = ((rtb_UnitDelay_g >= KePSMR_Cnt_Lv2PVCohCntrLim)
                                 || (PSMR_ac_DW.UnitDelay1_DSTATE));

            /* Switch: '<S97>/Switch2' incorporates:
             *  Constant: '<S103>/Constant'
             *  RelationalOperator: '<S103>/Compare'
             *  Switch: '<S97>/Switch3'
             */
            if (PSMR_ac_B.Switch3)
            {
                /* Switch: '<S97>/Switch1' incorporates:
                 *  Constant: '<S99>/Constant'
                 *  Switch: '<S97>/Switch2'
                 */
                VePSMC_e_Lv2FaultSts_CM_APP_SysPerf_PVS1 = CeDFIB_e_Fail;
            }
            else if (((sint32)VePSMD_Cnt_Lv2PVS1Failing) == 0)
            {
                /* Switch: '<S97>/Switch3' incorporates:
                 *  Constant: '<S101>/Constant'
                 *  Switch: '<S97>/Switch1'
                 */
                VePSMC_e_Lv2FaultSts_CM_APP_SysPerf_PVS1 = CeDFIB_e_Pass;
            }
            else
            {
                /* Switch: '<S97>/Switch1' incorporates:
                 *  Switch: '<S97>/Switch3'
                 *  UnitDelay: '<S97>/UnitDelay'
                 */
                VePSMC_e_Lv2FaultSts_CM_APP_SysPerf_PVS1 =
                    PSMR_ac_DW.UnitDelay_DSTATE_b;
            }

            /* End of Switch: '<S97>/Switch2' */
        }

        /* End of Switch: '<S88>/Switch2' */

        /* UnitDelay: '<S89>/UnitDelay' */
        rtb_UnitDelay_g = PSMR_ac_DW.UnitDelay_DSTATE_h;

        /* Switch: '<S89>/dec_if_Ok_else_inc' incorporates:
         *  Constant: '<S94>/Calib'
         *  MinMax: '<S89>/FixPtMinax'
         */
        if (VePSMD_b_Lv2PVS2Failing)
        {
            /* Sum: '<S89>/Inc_Cntr' incorporates:
             *  Constant: '<S93>/Calib'
             */
            rtb_Inc_Cntr_a = (uint8)(((uint32)rtb_UnitDelay_g) + ((uint32)
                KePSMR_Cnt_Lv2PVCohCntrInc));

            /* Switch: '<S89>/Switch1' incorporates:
             *  RelationalOperator: '<S89>/Relational_Operator'
             */
            if (rtb_Inc_Cntr_a < rtb_UnitDelay_g)
            {
                /* Switch: '<S89>/dec_if_Ok_else_inc' incorporates:
                 *  Constant: '<S89>/CounterMax'
                 */
                rtb_UnitDelay_g = MAX_uint8_T;
            }
            else
            {
                /* Switch: '<S89>/dec_if_Ok_else_inc' */
                rtb_UnitDelay_g = rtb_Inc_Cntr_a;
            }

            /* End of Switch: '<S89>/Switch1' */
        }
        else
        {
            if (rtb_UnitDelay_g <= KePSMR_Cnt_Lv2PVCohCntrDec)
            {
                /* MinMax: '<S89>/FixPtMinax' incorporates:
                 *  Constant: '<S94>/Calib'
                 */
                rtb_UnitDelay_g = KePSMR_Cnt_Lv2PVCohCntrDec;
            }

            /* Switch: '<S89>/dec_if_Ok_else_inc' incorporates:
             *  Constant: '<S94>/Calib'
             *  Sum: '<S89>/Dec_Cntr'
             */
            rtb_UnitDelay_g -= KePSMR_Cnt_Lv2PVCohCntrDec;
        }

        /* End of Switch: '<S89>/dec_if_Ok_else_inc' */

        /* RelationalOperator: '<S110>/Compare' incorporates:
         *  Constant: '<S110>/Constant'
         */
        rtb_TmpSignalConversionAtVeAP_c = (rtb_TmpSignalConversionAtVeAP_f == 0U);

        /* Outputs for Atomic SubSystem: '<S89>/EdgeFalling' */
        /* Logic: '<S106>/AND' incorporates:
         *  Logic: '<S106>/OR1'
         *  UnitDelay: '<S106>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeAP_m = ((!rtb_TmpSignalConversionAtVeAP_c) &&
            (PSMR_ac_DW.UnitDelay_DSTATE_o));

        /* Update for UnitDelay: '<S106>/Unit Delay' */
        PSMR_ac_DW.UnitDelay_DSTATE_o = rtb_TmpSignalConversionAtVeAP_c;

        /* End of Outputs for SubSystem: '<S89>/EdgeFalling' */

        /* Logic: '<S89>/passDBCparam2' */
        VePSMC_b_Lv2PVS2CntrRst = ((VePSMD_b_Lv2MdVldFltRst) ||
            rtb_TmpSignalConversionAtVeAP_m);

        /* Switch: '<S89>/Switch2' incorporates:
         *  Switch: '<S105>/Switch1'
         *  Switch: '<S89>/Switch3'
         */
        if (VePSMC_b_Lv2PVS2CntrRst)
        {
            /* Switch: '<S89>/Switch2' incorporates:
             *  Constant: '<S89>/ResetZero'
             */
            VePSMD_Cnt_Lv2PVS2Failing = 0U;

            /* Switch: '<S89>/Switch3' incorporates:
             *  Constant: '<S89>/ResetZero1'
             */
            PSMR_ac_B.Switch3_o = false;

            /* Switch: '<S105>/Switch1' incorporates:
             *  Constant: '<S108>/Constant'
             */
            VePSMC_e_Lv2FaultSts_CM_APP_SysPerf_PVS2 = CeDFIB_e_Init;
        }
        else
        {
            /* Switch: '<S89>/Switch2' */
            VePSMD_Cnt_Lv2PVS2Failing = rtb_UnitDelay_g;

            /* Switch: '<S89>/Switch3' incorporates:
             *  Constant: '<S95>/Calib'
             *  Logic: '<S89>/Cntr_fail'
             *  RelationalOperator: '<S89>/Enough_counts_to_Fail'
             *  UnitDelay: '<S89>/UnitDelay1'
             */
            PSMR_ac_B.Switch3_o = ((rtb_UnitDelay_g >=
                                    KePSMR_Cnt_Lv2PVCohCntrLim) ||
                                   (PSMR_ac_DW.UnitDelay1_DSTATE_e));

            /* Switch: '<S105>/Switch2' incorporates:
             *  Constant: '<S111>/Constant'
             *  RelationalOperator: '<S111>/Compare'
             *  Switch: '<S105>/Switch3'
             */
            if (PSMR_ac_B.Switch3_o)
            {
                /* Switch: '<S105>/Switch1' incorporates:
                 *  Constant: '<S107>/Constant'
                 *  Switch: '<S105>/Switch2'
                 */
                VePSMC_e_Lv2FaultSts_CM_APP_SysPerf_PVS2 = CeDFIB_e_Fail;
            }
            else if (((sint32)VePSMD_Cnt_Lv2PVS2Failing) == 0)
            {
                /* Switch: '<S105>/Switch3' incorporates:
                 *  Constant: '<S109>/Constant'
                 *  Switch: '<S105>/Switch1'
                 */
                VePSMC_e_Lv2FaultSts_CM_APP_SysPerf_PVS2 = CeDFIB_e_Pass;
            }
            else
            {
                /* Switch: '<S105>/Switch1' incorporates:
                 *  Switch: '<S105>/Switch3'
                 *  UnitDelay: '<S105>/UnitDelay'
                 */
                VePSMC_e_Lv2FaultSts_CM_APP_SysPerf_PVS2 =
                    PSMR_ac_DW.UnitDelay_DSTATE_l;
            }

            /* End of Switch: '<S105>/Switch2' */
        }

        /* End of Switch: '<S89>/Switch2' */

        /* UnitDelay: '<S90>/UnitDelay' */
        rtb_UnitDelay_g = PSMR_ac_DW.UnitDelay_DSTATE_d;

        /* RelationalOperator: '<S69>/LV2_PVS_FAILING' incorporates:
         *  Constant: '<S92>/Calib'
         */
        VePSMD_b_Lv2PVSDiffFailing = (VePSMR_U_Lv2PVSDiff >=
            KePSMR_U_Lv2PVCohLim);

        /* Switch: '<S90>/dec_if_Ok_else_inc' incorporates:
         *  Constant: '<S94>/Calib'
         *  MinMax: '<S90>/FixPtMinax'
         */
        if (VePSMD_b_Lv2PVSDiffFailing)
        {
            /* Sum: '<S90>/Inc_Cntr' incorporates:
             *  Constant: '<S93>/Calib'
             */
            rtb_Inc_Cntr_a = (uint8)(((uint32)rtb_UnitDelay_g) + ((uint32)
                KePSMR_Cnt_Lv2PVCohCntrInc));

            /* Switch: '<S90>/Switch1' incorporates:
             *  RelationalOperator: '<S90>/Relational_Operator'
             */
            if (rtb_Inc_Cntr_a < rtb_UnitDelay_g)
            {
                /* Switch: '<S90>/dec_if_Ok_else_inc' incorporates:
                 *  Constant: '<S90>/CounterMax'
                 */
                rtb_UnitDelay_g = MAX_uint8_T;
            }
            else
            {
                /* Switch: '<S90>/dec_if_Ok_else_inc' */
                rtb_UnitDelay_g = rtb_Inc_Cntr_a;
            }

            /* End of Switch: '<S90>/Switch1' */
        }
        else
        {
            if (rtb_UnitDelay_g <= KePSMR_Cnt_Lv2PVCohCntrDec)
            {
                /* MinMax: '<S90>/FixPtMinax' incorporates:
                 *  Constant: '<S94>/Calib'
                 */
                rtb_UnitDelay_g = KePSMR_Cnt_Lv2PVCohCntrDec;
            }

            /* Switch: '<S90>/dec_if_Ok_else_inc' incorporates:
             *  Constant: '<S94>/Calib'
             *  Sum: '<S90>/Dec_Cntr'
             */
            rtb_UnitDelay_g -= KePSMR_Cnt_Lv2PVCohCntrDec;
        }

        /* End of Switch: '<S90>/dec_if_Ok_else_inc' */

        /* RelationalOperator: '<S118>/Compare' incorporates:
         *  Constant: '<S118>/Constant'
         */
        rtb_TmpSignalConversionAtVeAP_c = (rtb_TmpSignalConversionAtVeAP_f == 0U);

        /* Outputs for Atomic SubSystem: '<S90>/EdgeFalling' */
        /* Logic: '<S114>/AND' incorporates:
         *  Logic: '<S114>/OR1'
         *  UnitDelay: '<S114>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeAP_m = ((!rtb_TmpSignalConversionAtVeAP_c) &&
            (PSMR_ac_DW.UnitDelay_DSTATE_p));

        /* Update for UnitDelay: '<S114>/Unit Delay' */
        PSMR_ac_DW.UnitDelay_DSTATE_p = rtb_TmpSignalConversionAtVeAP_c;

        /* End of Outputs for SubSystem: '<S90>/EdgeFalling' */

        /* Logic: '<S90>/passDBCparam2' */
        VePSMC_b_Lv2PVSCohCntrRst = ((VePSMD_b_Lv2MdVldFltRst) ||
            rtb_TmpSignalConversionAtVeAP_m);

        /* Switch: '<S90>/Switch2' incorporates:
         *  Switch: '<S113>/Switch1'
         *  Switch: '<S90>/Switch3'
         */
        if (VePSMC_b_Lv2PVSCohCntrRst)
        {
            /* Switch: '<S90>/Switch2' incorporates:
             *  Constant: '<S90>/ResetZero'
             */
            VePSMD_Cnt_Lv2PVSCohFailing = 0U;

            /* Switch: '<S90>/Switch3' incorporates:
             *  Constant: '<S90>/ResetZero1'
             */
            PSMR_ac_B.Switch3_j = false;

            /* Switch: '<S113>/Switch1' incorporates:
             *  Constant: '<S116>/Constant'
             */
            VePSMC_e_Lv2FaultSts_CM_APP_SysPerf_PVSCoh = CeDFIB_e_Init;
        }
        else
        {
            /* Switch: '<S90>/Switch2' */
            VePSMD_Cnt_Lv2PVSCohFailing = rtb_UnitDelay_g;

            /* Switch: '<S90>/Switch3' incorporates:
             *  Constant: '<S95>/Calib'
             *  Logic: '<S90>/Cntr_fail'
             *  RelationalOperator: '<S90>/Enough_counts_to_Fail'
             *  UnitDelay: '<S90>/UnitDelay1'
             */
            PSMR_ac_B.Switch3_j = ((rtb_UnitDelay_g >=
                                    KePSMR_Cnt_Lv2PVCohCntrLim) ||
                                   (PSMR_ac_DW.UnitDelay1_DSTATE_p));

            /* Switch: '<S113>/Switch2' incorporates:
             *  Constant: '<S119>/Constant'
             *  RelationalOperator: '<S119>/Compare'
             *  Switch: '<S113>/Switch3'
             */
            if (PSMR_ac_B.Switch3_j)
            {
                /* Switch: '<S113>/Switch1' incorporates:
                 *  Constant: '<S115>/Constant'
                 *  Switch: '<S113>/Switch2'
                 */
                VePSMC_e_Lv2FaultSts_CM_APP_SysPerf_PVSCoh = CeDFIB_e_Fail;
            }
            else if (((sint32)VePSMD_Cnt_Lv2PVSCohFailing) == 0)
            {
                /* Switch: '<S113>/Switch3' incorporates:
                 *  Constant: '<S117>/Constant'
                 *  Switch: '<S113>/Switch1'
                 */
                VePSMC_e_Lv2FaultSts_CM_APP_SysPerf_PVSCoh = CeDFIB_e_Pass;
            }
            else
            {
                /* Switch: '<S113>/Switch1' incorporates:
                 *  Switch: '<S113>/Switch3'
                 *  UnitDelay: '<S113>/UnitDelay'
                 */
                VePSMC_e_Lv2FaultSts_CM_APP_SysPerf_PVSCoh =
                    PSMR_ac_DW.UnitDelay_DSTATE_h5;
            }

            /* End of Switch: '<S113>/Switch2' */
        }

        /* End of Switch: '<S90>/Switch2' */

        /* Logic: '<S69>/PVS_Failed' */
        PSMR_ac_B.VePSMR_b_Lv2PVSFailed_temp = (((PSMR_ac_B.Switch3_j) ||
            (PSMR_ac_B.Switch3)) || (PSMR_ac_B.Switch3_o));

        /* Update for UnitDelay: '<S88>/UnitDelay' */
        PSMR_ac_DW.UnitDelay_DSTATE_f = VePSMD_Cnt_Lv2PVS1Failing;

        /* Update for UnitDelay: '<S88>/UnitDelay1' */
        PSMR_ac_DW.UnitDelay1_DSTATE = PSMR_ac_B.Switch3;

        /* Update for UnitDelay: '<S91>/Unit Delay' */
        PSMR_ac_DW.VePSMC_b_Lv2KeyInRunPrev = VePSMC_b_Lv2KeyInRun;

        /* Update for UnitDelay: '<S97>/UnitDelay' incorporates:
         *  DataTypeConversion: '<S97>/UNIT8'
         *  Switch: '<S97>/Switch1'
         */
        PSMR_ac_DW.UnitDelay_DSTATE_b = (uint8)
            VePSMC_e_Lv2FaultSts_CM_APP_SysPerf_PVS1;

        /* Update for UnitDelay: '<S89>/UnitDelay' */
        PSMR_ac_DW.UnitDelay_DSTATE_h = VePSMD_Cnt_Lv2PVS2Failing;

        /* Update for UnitDelay: '<S89>/UnitDelay1' */
        PSMR_ac_DW.UnitDelay1_DSTATE_e = PSMR_ac_B.Switch3_o;

        /* Update for UnitDelay: '<S105>/UnitDelay' incorporates:
         *  DataTypeConversion: '<S105>/UNIT8'
         *  Switch: '<S105>/Switch1'
         */
        PSMR_ac_DW.UnitDelay_DSTATE_l = (uint8)
            VePSMC_e_Lv2FaultSts_CM_APP_SysPerf_PVS2;

        /* Update for UnitDelay: '<S90>/UnitDelay' */
        PSMR_ac_DW.UnitDelay_DSTATE_d = VePSMD_Cnt_Lv2PVSCohFailing;

        /* Update for UnitDelay: '<S90>/UnitDelay1' */
        PSMR_ac_DW.UnitDelay1_DSTATE_p = PSMR_ac_B.Switch3_j;

        /* Update for UnitDelay: '<S113>/UnitDelay' incorporates:
         *  DataTypeConversion: '<S113>/UNIT8'
         *  Switch: '<S113>/Switch1'
         */
        PSMR_ac_DW.UnitDelay_DSTATE_h5 = (uint8)
            VePSMC_e_Lv2FaultSts_CM_APP_SysPerf_PVSCoh;
    }

    /* End of Logic: '<S66>/DisableLV2PVS' */
    /* End of Outputs for SubSystem: '<S66>/MonitorLv2PedalPos' */
    /* End of Outputs for SubSystem: '<S5>/CheckLv2PedalDiagnostic' */

    /* Logic: '<S67>/DBC_Conditions' incorporates:
     *  Constant: '<S125>/Constant'
     *  RelationalOperator: '<S125>/Compare'
     */
    VePSMC_b_P060D_Init = (((((uint32)VePSMC_e_Lv2FaultSts_CM_APP_SysPerf_PVSCoh)
        == CeDFIB_e_Init) || (((uint32)VePSMC_e_Lv2FaultSts_CM_APP_SysPerf_PVS1)
        == CeDFIB_e_Init)) || (((uint32)VePSMC_e_Lv2FaultSts_CM_APP_SysPerf_PVS2)
                            == CeDFIB_e_Init));

    /* Logic: '<S67>/DBC_Conditions1' incorporates:
     *  Constant: '<S124>/Constant'
     *  RelationalOperator: '<S124>/Compare'
     *  RelationalOperator: '<S125>/Compare'
     */
    VePSMC_b_P060D_Fail = (((((uint32)VePSMC_e_Lv2FaultSts_CM_APP_SysPerf_PVSCoh)
        == CeDFIB_e_Fail) || (((uint32)VePSMC_e_Lv2FaultSts_CM_APP_SysPerf_PVS1)
        == CeDFIB_e_Fail)) || (((uint32)VePSMC_e_Lv2FaultSts_CM_APP_SysPerf_PVS2)
                            == CeDFIB_e_Fail));

    /* Logic: '<S67>/DBC_Conditions2' incorporates:
     *  Constant: '<S126>/Constant'
     *  RelationalOperator: '<S125>/Compare'
     *  RelationalOperator: '<S126>/Compare'
     */
    VePSMC_b_P060D_Pass = (((((uint32)VePSMC_e_Lv2FaultSts_CM_APP_SysPerf_PVSCoh)
        == CeDFIB_e_Pass) && (((uint32)VePSMC_e_Lv2FaultSts_CM_APP_SysPerf_PVS1)
        == CeDFIB_e_Pass)) && (((uint32)VePSMC_e_Lv2FaultSts_CM_APP_SysPerf_PVS2)
                            == CeDFIB_e_Pass));

    /* If: '<S67>/Determine_P060D_Status' */
    if (VePSMC_b_P060D_Init)
    {
        /* Outputs for IfAction SubSystem: '<S67>/Event_CM_APP_SysPerf_ReportTestInit' incorporates:
         *  ActionPort: '<S122>/ActionPort'
         */
        /* DataStoreWrite: '<S122>/VeDFIR_FaultSts_CM_APP_SysPerf' incorporates:
         *  Constant: '<S128>/Constant'
         */
        PSMR_ac_DW.VeDFIR_FaultSts_CM_APP_SysPerf = CeDFIB_e_Init;

        /* End of Outputs for SubSystem: '<S67>/Event_CM_APP_SysPerf_ReportTestInit' */
    }
    else if (VePSMC_b_P060D_Fail)
    {
        /* Outputs for IfAction SubSystem: '<S67>/Event_CM_APP_SysPerf_ReportTestFailed' incorporates:
         *  ActionPort: '<S121>/ActionPort'
         */
        /* DataStoreWrite: '<S121>/VeDFIR_FaultSts_CM_APP_SysPerf' incorporates:
         *  Constant: '<S127>/Constant'
         */
        PSMR_ac_DW.VeDFIR_FaultSts_CM_APP_SysPerf = CeDFIB_e_Fail;

        /* End of Outputs for SubSystem: '<S67>/Event_CM_APP_SysPerf_ReportTestFailed' */
    }
    else
    {
        if (VePSMC_b_P060D_Pass)
        {
            /* Outputs for IfAction SubSystem: '<S67>/Event_CM_APP_SysPerf_ReportTestPassed' incorporates:
             *  ActionPort: '<S123>/ActionPort'
             */
            /* DataStoreWrite: '<S123>/VeDFIR_FaultSts_CM_APP_SysPerf' incorporates:
             *  Constant: '<S129>/Constant'
             */
            PSMR_ac_DW.VeDFIR_FaultSts_CM_APP_SysPerf = CeDFIB_e_Pass;

            /* End of Outputs for SubSystem: '<S67>/Event_CM_APP_SysPerf_ReportTestPassed' */
        }
    }

    /* End of If: '<S67>/Determine_P060D_Status' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VePSMR_Pct_Lv2AccelPdlPos' incorporates:
     *  SignalConversion generated from: '<S1>/VePSMR_Pct_Lv2AccelPdlPos'
     */
    (void)Rte_Write_VePSMR_Pct_Lv2AccelPdlPos_Value
        (rtb_TmpSignalConversionAtVeAPSR);

    /* Outport: '<Root>/VePSMR_Pct_Lv2AccelPdlVirtActPosn' incorporates:
     *  SignalConversion generated from: '<S1>/VePSMR_Pct_Lv2AccelPdlVirtActPosn'
     */
    (void)Rte_Write_VePSMR_Pct_Lv2AccelPdlVirtActPosn_Value(Switch1_j);

    /* Outport: '<Root>/VePSMR_Pct_Lv2AccelPedalEffPosition' incorporates:
     *  SignalConversion generated from: '<S1>/VePSMR_Pct_Lv2AccelPedalEffPosition'
     */
    (void)Rte_Write_VePSMR_Pct_Lv2AccelPedalEffPosition_Value
        (rtb_VePSMC_Pct_AccelPedalEffPos);

    /* Outport: '<Root>/VePSMR_U_Lv2PV1Norm' incorporates:
     *  SignalConversion generated from: '<S1>/VePSMR_U_Lv2PV1Norm'
     */
    (void)Rte_Write_VePSMR_U_Lv2PV1Norm_Value
        (PSMR_ac_B.VePSMR_U_Lv2PV1Normal_intermedi);

    /* Outport: '<Root>/VePSMR_U_Lv2PV2Norm' incorporates:
     *  SignalConversion generated from: '<S1>/VePSMR_U_Lv2PV2Norm'
     */
    (void)Rte_Write_VePSMR_U_Lv2PV2Norm_Value
        (PSMR_ac_B.VePSMR_U_Lv2PV2Normal_intermedi);

    /* Outport: '<Root>/VePSMR_U_Lv2PVSNorm' incorporates:
     *  SignalConversion generated from: '<S1>/VePSMR_U_Lv2PVSNorm'
     */
    (void)Rte_Write_VePSMR_U_Lv2PVSNorm_Value(VePSMR_U_Lv2PVSNorm_temp);

    /* Outport: '<Root>/VePSMR_b_Lv2AccelPdlPosFlt' incorporates:
     *  SignalConversion generated from: '<S1>/VePSMR_b_Lv2AccelPdlPosFlt'
     */
    (void)Rte_Write_VePSMR_b_Lv2AccelPdlPosFlt_Value
        (VePSMR_b_Lv2AccelPdlPosFlt_temp);

    /* Outport: '<Root>/VePSMR_b_Lv2Lv1PdlPosDiffFlt' incorporates:
     *  SignalConversion generated from: '<S1>/VePSMR_b_Lv2Lv1PdlPosDiffFlt'
     */
    (void)Rte_Write_VePSMR_b_Lv2Lv1PdlPosDiffFlt_Value
        (VePSMR_b_Lv2Lv1PdlPosDiffFlt_te);

    /* Outport: '<Root>/VePSMR_b_Lv2PVS1Failed' incorporates:
     *  SignalConversion generated from: '<S1>/VePSMR_b_Lv2PVS1Failed'
     */
    (void)Rte_Write_VePSMR_b_Lv2PVS1Failed_Value(PSMR_ac_B.Switch3);

    /* Outport: '<Root>/VePSMR_b_Lv2PVS2Failed' incorporates:
     *  SignalConversion generated from: '<S1>/VePSMR_b_Lv2PVS2Failed'
     */
    (void)Rte_Write_VePSMR_b_Lv2PVS2Failed_Value(PSMR_ac_B.Switch3_o);

    /* Outport: '<Root>/VePSMR_b_Lv2PVSCohFailed' incorporates:
     *  SignalConversion generated from: '<S1>/VePSMR_b_Lv2PVSCohFailed'
     */
    (void)Rte_Write_VePSMR_b_Lv2PVSCohFailed_Value(PSMR_ac_B.Switch3_j);

    /* Outport: '<Root>/VePSMR_b_Lv2PVSFailed' incorporates:
     *  SignalConversion generated from: '<S1>/VePSMR_b_Lv2PVSFailed'
     */
    (void)Rte_Write_VePSMR_b_Lv2PVSFailed_Value
        (PSMR_ac_B.VePSMR_b_Lv2PVSFailed_temp);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/PSMC_Proc'
     */
    /* Outputs for Atomic SubSystem: '<S3>/CalculateLv2Pedal' */
    /* Outport: '<Root>/VePSMR_e_Lv2PVSMode' incorporates:
     *  DataTypeConversion: '<S11>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/VePSMR_e_Lv2PVSMode'
     *  Switch: '<S8>/CheckIP'
     */
    (void)Rte_Write_VePSMR_e_Lv2PVSMode_Value(rtb_CheckIP);

    /* End of Outputs for SubSystem: '<S3>/CalculateLv2Pedal' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VePSMR_e_FaultSts_CM_APP_SysPerf' incorporates:
     *  DataStoreRead: '<S1>/DSR_VeDFIR_FaultSts_CM_APP_SysPerf'
     */
    (void)Rte_Write_VePSMR_e_FaultSts_CM_APP_SysPerf_Value
        (PSMR_ac_DW.VeDFIR_FaultSts_CM_APP_SysPerf);

    /* Outputs for Atomic SubSystem: '<S1>/PSMR_MedTEB_StopCheckpoint' */
    /* FunctionCaller: '<S7>/PSMR_MedTEB_StopCheckpoint' */
    Rte_Call_PSMR_MedTEB_StopCheckpoint_CheckpointReached();

    /* End of Outputs for SubSystem: '<S1>/PSMR_MedTEB_StopCheckpoint' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
}

/* Output function */
FUNC(void, PSMR_CODE) PSMR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/PSMR_PwrOn'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S130>/VePSMR_b_Lv2AccelPdlPosFlt_Init' */
    PSMR_ac_B.OutportBufferForVePSMR_b_Lv2Acc = false;

    /* SignalConversion generated from: '<S130>/VePSMR_b_Lv2Lv1PdlPosDiffFlt_Init' */
    PSMR_ac_B.OutportBufferForVePSMR_b_Lv2Lv1 = false;

    /* SignalConversion generated from: '<S130>/VePSMR_b_Lv2PVS1Failed_Init' */
    PSMR_ac_B.OutportBufferForVePSMR_b_Lv2PVS = false;

    /* SignalConversion generated from: '<S130>/VePSMR_b_Lv2PVS2Failed_Init' */
    PSMR_ac_B.OutportBufferForVePSMR_b_Lv2P_n = false;

    /* SignalConversion generated from: '<S130>/VePSMR_b_Lv2PVSCohFailed_Init' */
    PSMR_ac_B.OutportBufferForVePSMR_b_Lv2P_k = false;

    /* SignalConversion generated from: '<S130>/VePSMR_b_Lv2PVSFailed_Init' */
    PSMR_ac_B.OutportBufferForVePSMR_b_Lv2_n3 = false;

    /* SignalConversion generated from: '<S130>/VePSMR_e_Lv2PVSMode_Init' incorporates:
     *  Constant: '<S132>/Constant'
     */
    PSMR_ac_B.OutportBufferForVePSMR_e_Lv2PVS = PSMR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S130>/VePSMR_Pct_Lv2AccelPdlPos_Init' */
    PSMR_ac_B.OutportBufferForVePSMR_Pct_Lv2A = 0.0F;

    /* SignalConversion generated from: '<S130>/VePSMR_Pct_Lv2AccelPdlVirtActPosn_Init' */
    PSMR_ac_B.OutportBufferForVePSMR_Pct_Lv_h = 0.0F;

    /* SignalConversion generated from: '<S130>/VePSMR_Pct_Lv2AccelPedalEffPosition_Init' */
    PSMR_ac_B.OutportBufferForVePSMR_Pct_Lv_a = 0.0F;

    /* SignalConversion generated from: '<S130>/VePSMR_U_Lv2PV1Norm_Init' */
    PSMR_ac_B.OutportBufferForVePSMR_U_Lv2PV1 = 0.0F;

    /* SignalConversion generated from: '<S130>/VePSMR_U_Lv2PV2Norm_Init' */
    PSMR_ac_B.OutportBufferForVePSMR_U_Lv2PV2 = 0.0F;

    /* SignalConversion generated from: '<S130>/VePSMR_U_Lv2PVSNorm_Init' */
    PSMR_ac_B.OutportBufferForVePSMR_U_Lv2PVS = 0.0F;

    /* SignalConversion generated from: '<S130>/VeDFIR_FaultSts_CM_APP_SysPerf_Init' incorporates:
     *  Constant: '<S131>/Constant'
     */
    PSMR_ac_B.OutportBufferForVeDFIR_FaultSts = PSMR_ac_ConstB.Constant_i;

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VePSMR_e_FaultSts_CM_APP_SysPerf' incorporates:
     *  SignalConversion generated from: '<S130>/VeDFIR_FaultSts_CM_APP_SysPerf_Init'
     *  SignalConversion generated from: '<S2>/VeDFIR_FaultSts_CM_APP_SysPerf_Init'
     */
    (void)Rte_Write_VePSMR_e_FaultSts_CM_APP_SysPerf_Value
        (PSMR_ac_B.OutportBufferForVeDFIR_FaultSts);

    /* Outport: '<Root>/VePSMR_Pct_Lv2AccelPdlPos' incorporates:
     *  SignalConversion generated from: '<S2>/VePSMR_Pct_Lv2AccelPdlPos_Init'
     */
    (void)Rte_Write_VePSMR_Pct_Lv2AccelPdlPos_Value
        (PSMR_ac_B.OutportBufferForVePSMR_Pct_Lv2A);

    /* Outport: '<Root>/VePSMR_Pct_Lv2AccelPdlVirtActPosn' incorporates:
     *  SignalConversion generated from: '<S2>/VePSMR_Pct_Lv2AccelPdlVirtActPosn_Init'
     */
    (void)Rte_Write_VePSMR_Pct_Lv2AccelPdlVirtActPosn_Value
        (PSMR_ac_B.OutportBufferForVePSMR_Pct_Lv_h);

    /* Outport: '<Root>/VePSMR_Pct_Lv2AccelPedalEffPosition' incorporates:
     *  SignalConversion generated from: '<S2>/VePSMR_Pct_Lv2AccelPedalEffPosition_Init'
     */
    (void)Rte_Write_VePSMR_Pct_Lv2AccelPedalEffPosition_Value
        (PSMR_ac_B.OutportBufferForVePSMR_Pct_Lv_a);

    /* Outport: '<Root>/VePSMR_U_Lv2PV1Norm' incorporates:
     *  SignalConversion generated from: '<S2>/VePSMR_U_Lv2PV1Norm_Init'
     */
    (void)Rte_Write_VePSMR_U_Lv2PV1Norm_Value
        (PSMR_ac_B.OutportBufferForVePSMR_U_Lv2PV1);

    /* Outport: '<Root>/VePSMR_U_Lv2PV2Norm' incorporates:
     *  SignalConversion generated from: '<S2>/VePSMR_U_Lv2PV2Norm_Init'
     */
    (void)Rte_Write_VePSMR_U_Lv2PV2Norm_Value
        (PSMR_ac_B.OutportBufferForVePSMR_U_Lv2PV2);

    /* Outport: '<Root>/VePSMR_U_Lv2PVSNorm' incorporates:
     *  SignalConversion generated from: '<S2>/VePSMR_U_Lv2PVSNorm_Init'
     */
    (void)Rte_Write_VePSMR_U_Lv2PVSNorm_Value
        (PSMR_ac_B.OutportBufferForVePSMR_U_Lv2PVS);

    /* Outport: '<Root>/VePSMR_b_Lv2AccelPdlPosFlt' incorporates:
     *  SignalConversion generated from: '<S2>/VePSMR_b_Lv2AccelPdlPosFlt_Init'
     */
    (void)Rte_Write_VePSMR_b_Lv2AccelPdlPosFlt_Value
        (PSMR_ac_B.OutportBufferForVePSMR_b_Lv2Acc);

    /* Outport: '<Root>/VePSMR_b_Lv2Lv1PdlPosDiffFlt' incorporates:
     *  SignalConversion generated from: '<S2>/VePSMR_b_Lv2Lv1PdlPosDiffFlt_Init'
     */
    (void)Rte_Write_VePSMR_b_Lv2Lv1PdlPosDiffFlt_Value
        (PSMR_ac_B.OutportBufferForVePSMR_b_Lv2Lv1);

    /* Outport: '<Root>/VePSMR_b_Lv2PVS1Failed' incorporates:
     *  SignalConversion generated from: '<S2>/VePSMR_b_Lv2PVS1Failed_Init'
     */
    (void)Rte_Write_VePSMR_b_Lv2PVS1Failed_Value
        (PSMR_ac_B.OutportBufferForVePSMR_b_Lv2PVS);

    /* Outport: '<Root>/VePSMR_b_Lv2PVS2Failed' incorporates:
     *  SignalConversion generated from: '<S2>/VePSMR_b_Lv2PVS2Failed_Init'
     */
    (void)Rte_Write_VePSMR_b_Lv2PVS2Failed_Value
        (PSMR_ac_B.OutportBufferForVePSMR_b_Lv2P_n);

    /* Outport: '<Root>/VePSMR_b_Lv2PVSCohFailed' incorporates:
     *  SignalConversion generated from: '<S2>/VePSMR_b_Lv2PVSCohFailed_Init'
     */
    (void)Rte_Write_VePSMR_b_Lv2PVSCohFailed_Value
        (PSMR_ac_B.OutportBufferForVePSMR_b_Lv2P_k);

    /* Outport: '<Root>/VePSMR_b_Lv2PVSFailed' incorporates:
     *  SignalConversion generated from: '<S2>/VePSMR_b_Lv2PVSFailed_Init'
     */
    (void)Rte_Write_VePSMR_b_Lv2PVSFailed_Value
        (PSMR_ac_B.OutportBufferForVePSMR_b_Lv2_n3);

    /* Outport: '<Root>/VePSMR_e_Lv2PVSMode' incorporates:
     *  SignalConversion generated from: '<S130>/VePSMR_e_Lv2PVSMode_Init'
     *  SignalConversion generated from: '<S2>/VePSMR_e_Lv2PVSMode_Init'
     */
    (void)Rte_Write_VePSMR_e_Lv2PVSMode_Value
        (PSMR_ac_B.OutportBufferForVePSMR_e_Lv2PVS);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, PSMR_CODE) PSMR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */

    /* custom signals */
    VePSMI_e_Lv2KeySts = CeLTIR_e_IGN_LK;

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/PSMR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S130>/VePSMR_e_Lv2PVSMode_Init' incorporates:
     *  Constant: '<S132>/Constant'
     */
    PSMR_ac_B.OutportBufferForVePSMR_e_Lv2PVS = PSMR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S130>/VeDFIR_FaultSts_CM_APP_SysPerf_Init' incorporates:
     *  Constant: '<S131>/Constant'
     */
    PSMR_ac_B.OutportBufferForVeDFIR_FaultSts = PSMR_ac_ConstB.Constant_i;

    /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Outport: '<Root>/VePSMR_e_Lv2PVSMode' incorporates:
     *  Merge: '<Root>/Merge'
     */
    (void)Rte_Write_VePSMR_e_Lv2PVSMode_Value(CePSMR_e_NO_Fault);

    /* SystemInitialize for Outport: '<Root>/VePSMR_e_FaultSts_CM_APP_SysPerf' incorporates:
     *  Merge: '<Root>/Merge10'
     */
    (void)Rte_Write_VePSMR_e_FaultSts_CM_APP_SysPerf_Value(CeDFIB_e_Init);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
