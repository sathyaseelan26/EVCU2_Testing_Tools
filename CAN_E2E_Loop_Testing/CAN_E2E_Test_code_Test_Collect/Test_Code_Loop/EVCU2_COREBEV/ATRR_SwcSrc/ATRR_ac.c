/*
 * File: ATRR_ac.c
 *
 * Code generated for Simulink model 'ATRR_ac'.
 *
 * Model version                  : 9.151
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:06:44 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ATRR_ac.h"
#include "look1_iflf_binlca_16a.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_ATRR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(float32, ATRR_VAR_INIT) HeATRR_M_OvrdTransToMaxValue =
    99999.0F;                          /* Referenced by: '<S26>/Calib' */
static volatile CONST(float32, ATRR_VAR_INIT) HeATRR_M_OvrdTransToMinValue =
    -99999.0F;                         /* Referenced by: '<S27>/Calib' */
static volatile CONST(boolean, ATRR_VAR_INIT) HeATRR_b_OvrdTransToLimits = 0;/* Referenced by: '<S28>/Calib' */
static volatile CONST(boolean, ATRR_VAR_INIT) HeATRR_b_PrdtdSEMTrqEnbl = 1;/* Referenced by: '<S148>/Calib' */
static volatile CONST(uint16, ATRR_VAR_INIT) HeATRR_g_ToClipOvrd_C = 65535U;/* Referenced by: '<S56>/Calib' */
static volatile CONST(float32, ATRR_VAR_INIT) KeATRR_M_BrkFrcTrq = 0.0F;/* Referenced by: '<S192>/Calib' */
static volatile CONST(float32, ATRR_VAR_INIT) KeATRR_M_BrkTotalTrq = 0.0F;/* Referenced by: '<S193>/Calib' */
static volatile CONST(float32, ATRR_VAR_INIT) KeATRR_M_MinCreepWheelTrq = 0.0F;/* Referenced by: '<S171>/Calib' */

#if Rte_SysCon_Variant_ATRR_RaceStart_Enabled

static volatile CONST(float32, ATRR_VAR_INIT) KeATRR_M_RaceStartAccPdlThreshLSP =
    101.0F;                            /* Referenced by: '<S108>/Calib' */

#endif

#if Rte_SysCon_Variant_ATRR_RaceStart_Enabled

static volatile CONST(float32, ATRR_VAR_INIT) KeATRR_M_RaceStartAccPdlThreshRSP =
    101.0F;                            /* Referenced by: '<S109>/Calib' */

#endif

#if Rte_SysCon_Variant_ATRR_RaceStart_Enabled

static volatile CONST(float32, ATRR_VAR_INIT) KeATRR_M_RaceStartNetTrqThreshLSP =
    99999.0F;                          /* Referenced by: '<S110>/Calib' */

#endif

#if Rte_SysCon_Variant_ATRR_RaceStart_Enabled

static volatile CONST(float32, ATRR_VAR_INIT) KeATRR_M_RaceStartNetTrqThreshRSP =
    99999.0F;                          /* Referenced by: '<S111>/Calib' */

#endif

static volatile CONST(float32, ATRR_VAR_INIT) KeATRR_M_RegenReq = 0.0F;/* Referenced by: '<S194>/Calib' */
static volatile CONST(float32, ATRR_VAR_INIT) KeATRR_M_SEM_ActiveThrhd = 1.5F;/* Referenced by: '<S134>/Calib' */
static volatile CONST(float32, ATRR_VAR_INIT) KeATRR_M_TCMSumTrqFast = 0.0F;/* Referenced by: '<S135>/Calib' */
static volatile CONST(float32, ATRR_VAR_INIT) KeATRR_M_ToCombDlyNegRst = -5.0F;/* Referenced by: '<S153>/Calib' */
static volatile CONST(float32, ATRR_VAR_INIT) KeATRR_M_ToCombDlyPosRst = 5.0F;/* Referenced by: '<S154>/Calib' */
static volatile CONST(float32, ATRR_VAR_INIT) KeATRR_M_UndrShtTorqArbLSP = 2.0F;/* Referenced by: '<S172>/Calib' */
static volatile CONST(float32, ATRR_VAR_INIT) KeATRR_M_UndrShtTorqArbRSP = 5.0F;/* Referenced by: '<S173>/Calib' */
static volatile CONST(boolean, ATRR_VAR_INIT) KeATRR_b_BSM_TactFstDsbl = 0;/* Referenced by:
                                                                      * '<S132>/Calib'
                                                                      * '<S149>/Calib'
                                                                      */
static volatile CONST(boolean, ATRR_VAR_INIT) KeATRR_b_EnblTrqRtLmt_SEM = 0;/* Referenced by: '<S136>/Calib' */
static volatile CONST(boolean, ATRR_VAR_INIT) KeATRR_b_OITR_SrcManSelc = 1;/* Referenced by: '<S137>/Calib' */
static volatile CONST(boolean, ATRR_VAR_INIT) KeATRR_b_OITR_SrcManSlw = 0;/* Referenced by: '<S138>/Calib' */
static volatile CONST(boolean, ATRR_VAR_INIT) KeATRR_b_OvrdBrkFrcTrq = 0;/* Referenced by: '<S195>/Calib' */
static volatile CONST(boolean, ATRR_VAR_INIT) KeATRR_b_OvrdBrkTotalTrq = 0;/* Referenced by: '<S196>/Calib' */
static volatile CONST(boolean, ATRR_VAR_INIT) KeATRR_b_OvrdCombRatio = 0;/* Referenced by: '<S174>/Calib' */
static volatile CONST(boolean, ATRR_VAR_INIT) KeATRR_b_OvrdMinCreepWheelTrq = 0;/* Referenced by: '<S175>/Calib' */
static volatile CONST(boolean, ATRR_VAR_INIT) KeATRR_b_OvrdRegenReq = 0;/* Referenced by: '<S197>/Calib' */
static volatile CONST(boolean, ATRR_VAR_INIT) KeATRR_b_OvrdTCMSumTrqFast = 0;/* Referenced by: '<S139>/Calib' */
static volatile CONST(boolean, ATRR_VAR_INIT) KeATRR_b_PRNDL_Arb_NtlOff = 1;/* Referenced by: '<S80>/Calib' */
static volatile CONST(boolean, ATRR_VAR_INIT) KeATRR_b_PRNDL_Arb_ParkOff = 1;/* Referenced by: '<S81>/Calib' */
static volatile CONST(boolean, ATRR_VAR_INIT) KeATRR_b_QudrntPrtctn_ByPass = 1;/* Referenced by: '<S82>/Calib' */
static volatile CONST(boolean, ATRR_VAR_INIT) KeATRR_b_SEM_TactFstDsbl = 0;/* Referenced by:
                                                                      * '<S133>/Calib'
                                                                      * '<S150>/Calib'
                                                                      */
static volatile CONST(boolean, ATRR_VAR_INIT) KeATRR_b_TTC_CalcEnbl = 1;/* Referenced by: '<S10>/Calib' */
static volatile CONST(uint8, ATRR_VAR_INIT) KeATRR_cnt_numofcyl = 4U;/* Referenced by: '<S155>/Calib' */
static volatile CONST(float32, ATRR_VAR_INIT) KeATRR_k_CmbDlySettlgTmFact = 4.0F;/* Referenced by: '<S156>/Calib' */
static volatile CONST(float32, ATRR_VAR_INIT) KeATRR_n_QudrntPrtctn_D_LSP =
    -0.8F;                             /* Referenced by: '<S83>/Calib' */
static volatile CONST(float32, ATRR_VAR_INIT) KeATRR_n_QudrntPrtctn_D_RSP =
    -0.5F;                             /* Referenced by: '<S84>/Calib' */
static volatile CONST(float32, ATRR_VAR_INIT) KeATRR_n_QudrntPrtctn_R_LSP = 0.5F;/* Referenced by: '<S85>/Calib' */
static volatile CONST(float32, ATRR_VAR_INIT) KeATRR_n_QudrntPrtctn_R_RSP = 0.8F;/* Referenced by: '<S86>/Calib' */
static volatile CONST(float32, ATRR_VAR_INIT) KeATRR_r_CombRatio = 0.0F;/* Referenced by: '<S176>/Calib' */
static volatile CONST(float32, ATRR_VAR_INIT) KeATRR_t_CombDelayDisblTime =
    0.001F;                            /* Referenced by: '<S157>/Calib' */
static volatile CONST(float32, ATRR_VAR_INIT) KeATRR_t_DT = 0.0125F;/* Referenced by:
                                                                     * '<S87>/Calib'
                                                                     * '<S112>/Calib'
                                                                     * '<S158>/Calib'
                                                                     */
static volatile CONST(float32, ATRR_VAR_INIT) KeATRR_t_QudrntPrtctn_Blnd = 0.1F;/* Referenced by: '<S88>/Calib' */
static volatile CONST(float32, ATRR_VAR_INIT) KeATRR_t_QudrntPrtctn_Blnd_PN =
    0.1F;                              /* Referenced by: '<S89>/Calib' */

#if Rte_SysCon_Variant_ATRR_RaceStart_Enabled

static volatile CONST(float32, ATRR_VAR_INIT) KeATRR_t_RaceStartLaunch_HTDR =
    0.0F;                              /* Referenced by: '<S113>/Calib' */

#endif

#if Rte_SysCon_Variant_ATRR_RaceStart_Enabled

static volatile CONST(float32, ATRR_VAR_INIT) KeATRR_t_RaceStartLaunch_OITR =
    0.0F;                              /* Referenced by: '<S114>/Calib' */

#endif

#if Rte_SysCon_Variant_ATRR_RaceStart_Enabled

static volatile CONST(float32, ATRR_VAR_INIT) KeATRR_t_RaceStartPrep_HTDR = 0.0F;/* Referenced by: '<S115>/Calib' */

#endif

#if Rte_SysCon_Variant_ATRR_RaceStart_Enabled

static volatile CONST(float32, ATRR_VAR_INIT) KeATRR_t_RaceStartPrep_OITR = 0.0F;/* Referenced by: '<S116>/Calib' */

#endif

#if Rte_SysCon_Variant_ATRR_RaceStart_Enabled

static volatile CONST(float32, ATRR_VAR_INIT) KeATRR_v_RaceStartSpdThreshLSP =
    -999.0F;                           /* Referenced by: '<S117>/Calib' */

#endif

#if Rte_SysCon_Variant_ATRR_RaceStart_Enabled

static volatile CONST(float32, ATRR_VAR_INIT) KeATRR_v_RaceStartSpdThreshRSP =
    -999.0F;                           /* Referenced by: '<S118>/Calib' */

#endif

#if Rte_SysCon_Variant_ATRR_RaceStart_Enabled

static volatile CONST(float32, ATRR_VAR_INIT) KeATRR_v_RstSpdThresh = -999.0F;/* Referenced by: '<S119>/Calib' */

#endif

#if Rte_SysCon_Variant_ATRR_RaceStart_Enabled

static volatile CONST(float32, ATRR_VAR_INIT) KtATRR_M_RaceStartPrep[7] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S120>/Vector' */

#endif

#if Rte_SysCon_Variant_ATRR_RaceStart_Enabled

static volatile CONST(float32, ATRR_VAR_INIT) KxATRR_M_RaceStartPrep[7] =
{
    0.0F, 100.0F, 200.0F, 300.0F, 400.0F, 500.0F, 600.0F
} ;                                    /* Referenced by: '<S120>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_ATRR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ATRR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(float32, ATRR_VAR_INIT) VeATRC_M_HTDRTrqReqWithSEMArb;/* '<S142>/Gain' */
static VAR(float32, ATRR_VAR_INIT) VeATRC_M_OutTrqReqImmWithoutSEM;/* '<S9>/MinMax33' */
static VAR(float32, ATRR_VAR_INIT) VeATRC_M_OutputTorqReqImmedOITR;/* '<S141>/Gain' */
static VAR(float32, ATRR_VAR_INIT) VeATRC_M_OutputTorqueReqHTDRCnvt;/* '<S9>/MinMax17' */
static VAR(float32, ATRR_VAR_INIT) VeATRC_M_ToArb_xSEM;/* '<S9>/MinMax16' */
static VAR(float32, ATRR_VAR_INIT) VeATRC_M_ToCombDlyDelta[2];/* '<S143>/Sum1' */
static VAR(float32, ATRR_VAR_INIT) VeATRC_M_ToCombustionDlyd[2];/* '<S143>/Sum2' */
static VAR(float32, ATRR_VAR_INIT) VeATRC_M_ToRawExp_Tact;/* '<S9>/MinMax23' */
static VAR(float32, ATRR_VAR_INIT) VeATRC_M_ToReqImmdCnvt;/* '<S183>/Switch2' */
static VAR(float32, ATRR_VAR_INIT) VeATRC_M_ToReqPot_Cnvt;/* '<S9>/MinMax11' */
static VAR(float32, ATRR_VAR_INIT) VeATRC_M_ToReqPrdctdShaped_Tact;/* '<S9>/MinMax12' */
static VAR(float32, ATRR_VAR_INIT) VeATRC_M_ToReqPrdctd_Tact;/* '<S9>/MinMax6' */
static VAR(float32, ATRR_VAR_INIT) VeATRC_M_ToReq_PreSEM;/* '<S9>/MinMax3' */
static VAR(float32, ATRR_VAR_INIT) VeATRC_M_To_xSEMxUndSht;/* '<S9>/MinMax35' */
static VAR(boolean, ATRR_VAR_INIT) VeATRC_b_CombDlyFiltEnbl[2];/* '<S163>/OR1' */
static VAR(boolean, ATRR_VAR_INIT) VeATRC_b_GrgShft_Act;/* '<S57>/Logical11' */
static VAR(boolean, ATRR_VAR_INIT) VeATRC_b_NegSpeed_inD;/* '<S57>/Logical2' */
static VAR(boolean, ATRR_VAR_INIT) VeATRC_b_PRNDLBlend_Act;/* '<S74>/Comparison2' */
static VAR(boolean, ATRR_VAR_INIT) VeATRC_b_PosSpeed_inR;/* '<S57>/Logical1' */
static VAR(float32, ATRR_VAR_INIT) VeATRC_k_ToCombFiltCoeff[2];/* '<S143>/Switch3' */
static VAR(float32, ATRR_VAR_INIT) VeATRC_r_TransOut2Wheel;/* '<S4>/Product1' */
static VAR(float32, ATRR_VAR_INIT) VeATRR_M_ToReqImmedOITR;/* '<S9>/MinMax8' */
static VAR(boolean, ATRR_VAR_INIT) VeATRR_b_GrgShftBlend_Act;/* '<S90>/OR1' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ATRR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ATRR
#include "MemMap.h"

VAR(DW_ATRR_ac_T, ATRR_VAR_INIT) ATRR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ATRR
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, ATRR_CODE) ATRR_MedTEB(void) /* Explicit Task: MedTEB */
{
    float32 tmpRead_0;
    float32 tmpRead_2;
    TeTRNR_e_TCMGearStat tmpRead_3;
    boolean tmpRead;
    boolean tmpRead_1;

#if Rte_SysCon_Variant_ATRR_RaceStart_Enabled

    TeBRKR_e_BrkPdl_Stat tmpRead_4;

#endif

    float32 rtb_Max1[6];
    float32 rtb_Max2[4];
    float32 rtb_Gain_o;
    float32 rtb_MinMax5;
    float32 rtb_MinMax7;
    float32 rtb_Switch13;
    float32 rtb_Switch1_nva;
    float32 rtb_TmpSignalConversionAtVeCTCR_M_MinCre;
    float32 rtb_TmpSignalConversionAtVeTINR_r_TCMTra;
    float32 rtb_TmpSignalConversionAtVeTTQR_M_TCMSum;
    float32 rtb_TmpSignalConversionAtVeVSDR_n_PrimNo;
    float32 rtb_TmpSignalConversionAtVeWTAR_M_OutTrq;
    float32 rtb_TmpSignalConversionAtVeWTAR_M_ToRe_p;
    float32 rtb_TmpSignalConversionAtVeWTAR_r_PRNDL_;
    float32 rtb_VariantMergeForOutportOITRTrqReqTact;
    float32 rtb_VeATRR_r_Tact2Wheel;
    boolean rtb_Comparison1_iu;
    boolean rtb_Equal2;
    boolean rtb_Equal3;
    boolean rtb_Logical7;
    boolean rtb_OR1_e;
    boolean rtb_VeATRR_b_TrqRtLmtEnbld_SEM;

#if Rte_SysCon_Variant_ATRR_RTC_On

    float32 rtb_TmpSignalConversionAtVeTCCR_r_RampFa;

#endif

    float32 rtb_Gain_b;
    float32 rtb_Gain_c;
    float32 rtb_Gain_la;
    float32 rtb_Switch1_bi;
    float32 rtb_Switch1_c2;
    float32 rtb_Switch1_cnx;
    float32 rtb_Switch1_cv;
    float32 rtb_Switch1_ig;
    float32 rtb_Switch1_l3;
    float32 rtb_Switch1_ll;
    float32 rtb_Switch1_md;
    float32 rtb_TmpSignalConversionAtVeAPSR_Pct_Acce;
    float32 rtb_TmpSignalConversionAtVeBTQR_M_DrvrIn;
    float32 rtb_TmpSignalConversionAtVeCSVR_v_VehSpd;
    float32 rtb_TmpSignalConversionAtVeTTIR_M_PumpTr;
    float32 rtb_TmpSignalConversionAtVeVSDR_n_NTurbO;
    float32 rtb_Vector_ak;
    float32 rtb_Vector_fl;
    float32 rtb_Vector_k;

#if Rte_SysCon_Variant_ATRR_RaceStart_Enabled

    boolean rtb_NotEqual_eh;

#endif

#if Rte_SysCon_Variant_ATRR_RaceStart_Enabled

    float32 rtb_Switch2_hr[2];

#endif

#if Rte_SysCon_Variant_ATRR_RaceStart_Enabled

    boolean rtb_OR1_c;

#endif

    sint32 i;
    float32 rtb_Maximum_b;
    float32 rtb_MinMax18;
    float32 rtb_MinMax1_b;
    float32 rtb_MinMax25;
    float32 rtb_MinMax28;
    float32 rtb_Switch2_aa_idx_0;
    float32 rtb_Switch2_aa_idx_1;
    float32 rtb_Switch2_g0;
    float32 rtb_Switch3_b_idx_0;
    float32 rtb_Switch3_b_idx_4;
    float32 rtb_Switch3_gco;
    float32 rtb_Switch4_a;
    float32 rtb_Switch_l_idx_0;
    float32 rtb_TmpSignalConversionAtVeBTQR_M_DrvInt;
    float32 rtb_TmpSignalConversionAtVeDTRR_M_AxleTr;
    float32 rtb_TmpSignalConversionAtVeSCCR_M_Output;
    float32 rtb_TmpSignalConversionAtVeTTQR_M_SumMax;
    float32 rtb_TmpSignalConversionAtVeWTAR_M_MinPed;
    float32 rtb_TmpSignalConversionAtVeWTAR_M_MinPre;
    float32 rtb_TmpSignalConversionAtVeWTAR_M_ToReqP;
    float32 rtb_TmpSignalConversionAtVeWTAR_M_ToReqS;
    float32 rtb_TmpSignalConversionAtVeWTAR_M_Typ1Ma;
    float32 rtb_TmpSignalConversionAtVeWTAR_M_Typ1Mi;
    float32 rtb_Vector_a;
    TeDTRR_e_SumFWIDFst rtb_TmpSignalConversionAtVeDTRR_e_SumFWI;
    TeTINR_e_TCM_TrqCntrlModeReq rtb_TmpSignalConversionAtVeTTQR_e_TCMT_m;
    TeTINR_e_TCM_TrqCntrlModeReq rtb_TmpSignalConversionAtVeTTQR_e_TCMTrq;
    TeTRGR_e_TransRangeState rtb_TmpSignalConversionAtVeTRGR_e_VldtdT;
    TeWTAR_e_PedalTrqArb rtb_Switch2_bv;

#if Rte_SysCon_Variant_ATRR_RTC_On

    float32 rtb_Switch1_bm_0;

#endif

    boolean tmp;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/ATRR_MedTEB'
     */
    /* SignalConversion generated from: '<S1>/VeVSDR_n_NTurb' incorporates:
     *  SignalConversion generated from: '<S1>/VeTCCR_r_RampFactor'
     */
#if Rte_SysCon_Variant_ATRR_RTC_On

    /* SignalConversion generated from: '<S1>/VeVSDR_n_NTurb' incorporates:
     *  Inport: '<Root>/VeVSDR_n_NTurb'
     */
    (void)Rte_Read_VeVSDR_n_NTurb_Value
        (&rtb_TmpSignalConversionAtVeVSDR_n_NTurbO);

    /* SignalConversion generated from: '<S1>/VeTCCR_r_RampFactor' incorporates:
     *  Inport: '<Root>/VeTCCR_r_RampFactor'
     */
    (void)Rte_Read_VeTCCR_r_RampFactor_Value
        (&rtb_TmpSignalConversionAtVeTCCR_r_RampFa);

#endif

    /* End of SignalConversion generated from: '<S1>/VeVSDR_n_NTurb' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeFWDR_r_Axle_Ratio' */
    (void)Rte_Read_VeFWDR_r_Axle_Ratio_Value(&rtb_Vector_fl);

    /* Inport: '<Root>/VeFWDR_r_TCaseRatio' */
    (void)Rte_Read_VeFWDR_r_TCaseRatio_Value(&rtb_Gain_o);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/ATRR_MedTEB'
     */
    /* Product: '<S4>/Product1' */
    VeATRC_r_TransOut2Wheel = rtb_Gain_o * rtb_Vector_fl;

    /* SignalConversion generated from: '<S1>/VeTINR_r_TCMTransTrqRatio' incorporates:
     *  Inport: '<Root>/VeTINR_r_TCMTransTrqRatio'
     */
    (void)Rte_Read_VeTINR_r_TCMTransTrqRatio_Value
        (&rtb_TmpSignalConversionAtVeTINR_r_TCMTra);

    /* Switch: '<S4>/Switch4' incorporates:
     *  Constant: '<S17>/Constant'
     *  Constant: '<S18>/Constant'
     *  Constant: '<S20>/Calib'
     *  Constant: '<S23>/Calib'
     *  Inport: '<Root>/VeTINR_r_Mech_DrivelineRatio'
     *  Logic: '<S4>/Logical'
     *  RelationalOperator: '<S4>/Comparison1'
     *  RelationalOperator: '<S4>/Comparison4'
     *  Switch: '<S4>/Switch1'
     */
    if (Rte_Prm_HeATRR_b_BSGConvByps_HeATRR_b_BSGConvByps() || (((uint32)
            Rte_Prm_HeTSXR_e_All_TactToDomain_HeTSXR_e_All_TactToDomain()) ==
            CeTSXR_e_AxleDomain))
    {
        /* Switch: '<S4>/Switch4' incorporates:
         *  Constant: '<S4>/ConstantValue13'
         */
        rtb_VeATRR_r_Tact2Wheel = 1.0F;
    }
    else if (((uint32)
              Rte_Prm_HeTSXR_e_All_TactToDomain_HeTSXR_e_All_TactToDomain()) ==
             CeTSXR_e_TransOutDomain)
    {
        /* Switch: '<S4>/Switch4' incorporates:
         *  Switch: '<S4>/Switch1'
         */
        rtb_VeATRR_r_Tact2Wheel = VeATRC_r_TransOut2Wheel;
    }
    else
    {
        (void)Rte_Read_VeTINR_r_Mech_DrivelineRatio_Value
            (&rtb_VeATRR_r_Tact2Wheel);

        /* Switch: '<S4>/Switch3' incorporates:
         *  Constant: '<S21>/Calib'
         *  Inport: '<Root>/VeTINR_r_Mech_DrivelineRatio'
         *  Switch: '<S4>/Switch1'
         */
        if (!Rte_Prm_HeATRR_b_RTC_Enbl_HeATRR_b_RTC_Enbl())
        {
            /* Switch: '<S4>/Switch4' incorporates:
             *  Switch: '<S4>/Switch1'
             */
            rtb_VeATRR_r_Tact2Wheel = rtb_TmpSignalConversionAtVeTINR_r_TCMTra;
        }

        /* End of Switch: '<S4>/Switch3' */
    }

    /* End of Switch: '<S4>/Switch4' */

    /* SignalConversion generated from: '<S1>/VeSCCR_M_OutputTorqueLimit' incorporates:
     *  Inport: '<Root>/VeSCCR_M_OutputTorqueLimit'
     */
    (void)Rte_Read_VeSCCR_M_OutputTorqueLimit_Value
        (&rtb_TmpSignalConversionAtVeSCCR_M_Output);

    /* Switch: '<S32>/Switch' incorporates:
     *  Constant: '<S32>/ConstantValue4'
     *  Constant: '<S37>/Constant Value'
     *  RelationalOperator: '<S32>/GreaterThan1'
     *  RelationalOperator: '<S37>/Not Equal'
     *  Switch: '<S37>/Switch1'
     */
    if (rtb_VeATRR_r_Tact2Wheel < 0.01F)
    {
        /* Switch: '<S32>/Switch' incorporates:
         *  Constant: '<S32>/ConstantValue2'
         */
        rtb_TmpSignalConversionAtVeSCCR_M_Output = 0.0F;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S32>/ProtectedDivision2' */
        if (rtb_TmpSignalConversionAtVeSCCR_M_Output != 0.0F)
        {
            /* Switch: '<S32>/Switch' incorporates:
             *  Product: '<S37>/Division'
             *  Switch: '<S37>/Switch1'
             */
            rtb_TmpSignalConversionAtVeSCCR_M_Output /= rtb_VeATRR_r_Tact2Wheel;
        }
        else
        {
            /* Switch: '<S32>/Switch' incorporates:
             *  Constant: '<S37>/Constant Value4'
             *  Switch: '<S37>/Switch1'
             *  Switch: '<S37>/Switch2'
             *  Switch: '<S37>/Switch3'
             */
            rtb_TmpSignalConversionAtVeSCCR_M_Output = 0.0F;
        }

        /* End of Outputs for SubSystem: '<S32>/ProtectedDivision2' */
    }

    /* End of Switch: '<S32>/Switch' */

    /* Outputs for Atomic SubSystem: '<S32>/VariantSubsystem' */
#if Rte_SysCon_Variant_ATRR_RTC_On

    /* Outputs for Atomic SubSystem: '<S38>/RTC_on' */
    /* Gain: '<S48>/Gain' incorporates:
     *  Lookup_n-D: '<S50>/Vector'
     *  SignalConversion generated from: '<S1>/VeTCCR_r_RampFactor'
     */
    rtb_Gain_o = 0.5F * look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeTCCR_r_RampFa,
         (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsB_KxHSCR_r_TCC_TturbFromNC2_CoeffsB
          ()),
         (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsB_KtHSCR_r_TCC_TturbFromNC2_CoeffsB
          ()), 21U);

    /* Lookup_n-D: '<S49>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeTCCR_r_RampFactor'
     */
    rtb_Vector_fl = look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeTCCR_r_RampFa,
         (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsA_KxHSCR_r_TCC_TturbFromNC2_CoeffsA
          ()),
         (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsA_KtHSCR_r_TCC_TturbFromNC2_CoeffsA
          ()), 21U);

    /* Outputs for Atomic SubSystem: '<S48>/Protected Division1' */
    /* Switch: '<S52>/Switch1' incorporates:
     *  Constant: '<S52>/Constant Value'
     *  Constant: '<S52>/Constant Value1'
     *  Constant: '<S52>/Constant Value2'
     *  Constant: '<S52>/Constant Value3'
     *  Logic: '<S52>/AND'
     *  RelationalOperator: '<S52>/Greater Than or Equal '
     *  RelationalOperator: '<S52>/Greater Than or Equal 1'
     *  RelationalOperator: '<S52>/Not Equal'
     *  RelationalOperator: '<S52>/Not Equal1'
     *  Switch: '<S52>/Switch2'
     *  Switch: '<S52>/Switch3'
     */
    if ((rtb_Gain_o != 0.0F) && (rtb_Vector_fl != 0.0F))
    {
        /* Switch: '<S52>/Switch1' incorporates:
         *  Product: '<S52>/Division'
         */
        rtb_Switch1_nva = rtb_Gain_o / rtb_Vector_fl;
    }
    else if (rtb_Gain_o > 0.0F)
    {
        /* Switch: '<S52>/Switch2' incorporates:
         *  Constant: '<S52>/MAXFLOAT'
         *  Switch: '<S52>/Switch1'
         */
        rtb_Switch1_nva = 3.402823466E+38F;
    }
    else if (rtb_Gain_o < 0.0F)
    {
        /* Switch: '<S52>/Switch3' incorporates:
         *  Constant: '<S52>/MINFLOAT'
         *  Switch: '<S52>/Switch1'
         *  Switch: '<S52>/Switch2'
         */
        rtb_Switch1_nva = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S52>/Switch1' incorporates:
         *  Constant: '<S52>/Constant Value4'
         *  Switch: '<S52>/Switch2'
         *  Switch: '<S52>/Switch3'
         */
        rtb_Switch1_nva = 0.0F;
    }

    /* End of Switch: '<S52>/Switch1' */
    /* End of Outputs for SubSystem: '<S48>/Protected Division1' */

    /* Product: '<S48>/Product1' */
    rtb_Gain_o *= rtb_Gain_o;

    /* Outputs for Atomic SubSystem: '<S48>/Protected Division2' */
    /* Switch: '<S53>/Switch1' incorporates:
     *  Constant: '<S53>/Constant Value'
     *  Constant: '<S53>/Constant Value1'
     *  Constant: '<S53>/Constant Value2'
     *  Constant: '<S53>/Constant Value3'
     *  Logic: '<S53>/AND'
     *  RelationalOperator: '<S53>/Greater Than or Equal '
     *  RelationalOperator: '<S53>/Greater Than or Equal 1'
     *  RelationalOperator: '<S53>/Not Equal'
     *  RelationalOperator: '<S53>/Not Equal1'
     *  Switch: '<S53>/Switch2'
     *  Switch: '<S53>/Switch3'
     */
    if ((rtb_Gain_o != 0.0F) && (rtb_Vector_fl != 0.0F))
    {
        /* Switch: '<S53>/Switch1' incorporates:
         *  Product: '<S53>/Division'
         */
        rtb_Gain_o /= rtb_Vector_fl;
    }
    else if (rtb_Gain_o > 0.0F)
    {
        /* Switch: '<S53>/Switch2' incorporates:
         *  Constant: '<S53>/MAXFLOAT'
         *  Switch: '<S53>/Switch1'
         */
        rtb_Gain_o = 3.402823466E+38F;
    }
    else if (rtb_Gain_o < 0.0F)
    {
        /* Switch: '<S53>/Switch3' incorporates:
         *  Constant: '<S53>/MINFLOAT'
         *  Switch: '<S53>/Switch1'
         *  Switch: '<S53>/Switch2'
         */
        rtb_Gain_o = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S53>/Switch1' incorporates:
         *  Constant: '<S53>/Constant Value4'
         *  Switch: '<S53>/Switch2'
         *  Switch: '<S53>/Switch3'
         */
        rtb_Gain_o = 0.0F;
    }

    /* End of Switch: '<S53>/Switch1' */
    /* End of Outputs for SubSystem: '<S48>/Protected Division2' */

    /* Outputs for Atomic SubSystem: '<S48>/Protected Division4' */
    /* Switch: '<S54>/Switch1' incorporates:
     *  Constant: '<S54>/Constant Value1'
     *  RelationalOperator: '<S54>/Not Equal1'
     */
    if (rtb_Vector_fl != 0.0F)
    {
        /* Switch: '<S54>/Switch1' incorporates:
         *  Constant: '<S48>/Constant Value2'
         *  Product: '<S54>/Division'
         */
        rtb_Vector_fl = 1.0F / rtb_Vector_fl;
    }
    else
    {
        /* Switch: '<S54>/Switch1' */
        rtb_Vector_fl = 3.402823466E+38F;
    }

    /* End of Switch: '<S54>/Switch1' */
    /* End of Outputs for SubSystem: '<S48>/Protected Division4' */

    /* Signum: '<S47>/Signum' */
    if (rtb_Vector_fl < 0.0F)
    {
        rtb_Switch1_bm_0 = -1.0F;
    }
    else if (rtb_Vector_fl > 0.0F)
    {
        rtb_Switch1_bm_0 = 1.0F;
    }
    else
    {
        rtb_Switch1_bm_0 = rtb_Vector_fl;
    }

    /* End of Signum: '<S47>/Signum' */

    /* Sum: '<S47>/Sum3' incorporates:
     *  Constant: '<S47>/Constant Value'
     *  Gain: '<S48>/Gain1'
     *  Lookup_n-D: '<S51>/Vector'
     *  MinMax: '<S47>/MinMax1'
     *  Product: '<S47>/Product'
     *  Product: '<S47>/Product1'
     *  SignalConversion generated from: '<S1>/VeTCCR_r_RampFactor'
     *  Sqrt: '<S47>/Square Root'
     *  Sum: '<S47>/Sum2'
     *  Sum: '<S48>/Sum1'
     */
    rtb_Switch1_nva = ((sqrtf(fmaxf((rtb_TmpSignalConversionAtVeSCCR_M_Output -
                           (look1_iflf_binlca_16a
                            (rtb_TmpSignalConversionAtVeTCCR_r_RampFa,
        (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsC_KxHSCR_r_TCC_TturbFromNC2_CoeffsC
         ()),
        (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsC_KtHSCR_r_TCC_TturbFromNC2_CoeffsC
         ()), 3U) - rtb_Gain_o)) * rtb_Vector_fl, 0.0F)) * rtb_Switch1_bm_0) + (
                        -rtb_Switch1_nva)) +
        rtb_TmpSignalConversionAtVeTCCR_r_RampFa;

    /* Outputs for Atomic SubSystem: '<S42>/Protected Division3' */
    /* Switch: '<S45>/Switch1' incorporates:
     *  Constant: '<S45>/Constant Value'
     *  Constant: '<S45>/Constant Value1'
     *  Constant: '<S45>/Constant Value2'
     *  Constant: '<S45>/Constant Value3'
     *  Logic: '<S45>/AND'
     *  RelationalOperator: '<S45>/Greater Than or Equal '
     *  RelationalOperator: '<S45>/Greater Than or Equal 1'
     *  RelationalOperator: '<S45>/Not Equal'
     *  RelationalOperator: '<S45>/Not Equal1'
     *  Switch: '<S45>/Switch2'
     *  Switch: '<S45>/Switch3'
     */
    if ((rtb_TmpSignalConversionAtVeTCCR_r_RampFa != 0.0F) && (rtb_Switch1_nva
            != 0.0F))
    {
        /* Switch: '<S45>/Switch1' incorporates:
         *  Product: '<S45>/Division'
         */
        rtb_Switch1_nva = rtb_TmpSignalConversionAtVeTCCR_r_RampFa /
            rtb_Switch1_nva;
    }
    else if (rtb_TmpSignalConversionAtVeTCCR_r_RampFa > 0.0F)
    {
        /* Switch: '<S45>/Switch2' incorporates:
         *  Constant: '<S45>/MAXFLOAT'
         *  Switch: '<S45>/Switch1'
         */
        rtb_Switch1_nva = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtVeTCCR_r_RampFa < 0.0F)
    {
        /* Switch: '<S45>/Switch3' incorporates:
         *  Constant: '<S45>/MINFLOAT'
         *  Switch: '<S45>/Switch1'
         *  Switch: '<S45>/Switch2'
         */
        rtb_Switch1_nva = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S45>/Switch1' incorporates:
         *  Constant: '<S45>/Constant Value4'
         *  Switch: '<S45>/Switch2'
         *  Switch: '<S45>/Switch3'
         */
        rtb_Switch1_nva = 0.0F;
    }

    /* End of Switch: '<S45>/Switch1' */
    /* End of Outputs for SubSystem: '<S42>/Protected Division3' */

    /* Lookup_n-D: '<S43>/Vector' incorporates:
     *  Switch: '<S45>/Switch1'
     */
    rtb_Switch1_nva = look1_iflf_binlca_16a(rtb_Switch1_nva,
        (Rte_Prm_KxHSCR_r_TCC_TorqRatio_KxHSCR_r_TCC_TorqRatio()),
        (Rte_Prm_KtHSCR_r_TCC_TorqRatio_KtHSCR_r_TCC_TorqRatio()), 17U);

    /* Outputs for Atomic SubSystem: '<S42>/Protected Division1' */
    /* Switch: '<S44>/Switch1' incorporates:
     *  Constant: '<S44>/Constant Value'
     *  Constant: '<S44>/Constant Value1'
     *  Constant: '<S44>/Constant Value2'
     *  Constant: '<S44>/Constant Value3'
     *  Logic: '<S44>/AND'
     *  RelationalOperator: '<S44>/Greater Than or Equal '
     *  RelationalOperator: '<S44>/Greater Than or Equal 1'
     *  RelationalOperator: '<S44>/Not Equal'
     *  RelationalOperator: '<S44>/Not Equal1'
     *  Switch: '<S44>/Switch2'
     *  Switch: '<S44>/Switch3'
     */
    if ((rtb_TmpSignalConversionAtVeSCCR_M_Output != 0.0F) && (rtb_Switch1_nva
            != 0.0F))
    {
        /* Switch: '<S44>/Switch1' incorporates:
         *  Product: '<S44>/Division'
         */
        rtb_Switch1_nva = rtb_TmpSignalConversionAtVeSCCR_M_Output /
            rtb_Switch1_nva;
    }
    else if (rtb_TmpSignalConversionAtVeSCCR_M_Output > 0.0F)
    {
        /* Switch: '<S44>/Switch2' incorporates:
         *  Constant: '<S44>/MAXFLOAT'
         *  Switch: '<S44>/Switch1'
         */
        rtb_Switch1_nva = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtVeSCCR_M_Output < 0.0F)
    {
        /* Switch: '<S44>/Switch3' incorporates:
         *  Constant: '<S44>/MINFLOAT'
         *  Switch: '<S44>/Switch1'
         *  Switch: '<S44>/Switch2'
         */
        rtb_Switch1_nva = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S44>/Switch1' incorporates:
         *  Constant: '<S44>/Constant Value4'
         *  Switch: '<S44>/Switch2'
         *  Switch: '<S44>/Switch3'
         */
        rtb_Switch1_nva = 0.0F;
    }

    /* End of Switch: '<S44>/Switch1' */
    /* End of Outputs for SubSystem: '<S42>/Protected Division1' */

    /* VariantMerge generated from: '<S38>/T_imp' incorporates:
     *  Product: '<S41>/Product4'
     *  Sum: '<S41>/Sum4'
     *  Sum: '<S41>/Sum5'
     */
    rtb_Switch1_nva = ((rtb_Switch1_nva -
                        rtb_TmpSignalConversionAtVeSCCR_M_Output) *
                       rtb_TmpSignalConversionAtVeVSDR_n_NTurbO) +
        rtb_TmpSignalConversionAtVeSCCR_M_Output;

    /* End of Outputs for SubSystem: '<S38>/RTC_on' */
#else

    /* Outputs for Atomic SubSystem: '<S38>/RTC_off' */
    /* VariantMerge generated from: '<S38>/T_imp' incorporates:
     *  Inport: '<S39>/T_turb'
     */
    rtb_Switch1_nva = rtb_TmpSignalConversionAtVeSCCR_M_Output;

    /* End of Outputs for SubSystem: '<S38>/RTC_off' */
#endif

    /* End of Outputs for SubSystem: '<S32>/VariantSubsystem' */

    /* SignalConversion generated from: '<S1>/VeTTIR_M_PumpTrqOnImpShaft' incorporates:
     *  Inport: '<Root>/VeTTIR_M_PumpTrqOnImpShaft'
     */
    (void)Rte_Read_VeTTIR_M_PumpTrqOnImpShaft_Value
        (&rtb_TmpSignalConversionAtVeTTIR_M_PumpTr);

    /* Logic: '<S32>/Logical2' incorporates:
     *  Constant: '<S34>/Calib'
     *  Logic: '<S183>/Logical2'
     *  Logic: '<S184>/Logical2'
     *  Logic: '<S185>/Logical2'
     *  Logic: '<S186>/Logical2'
     *  Logic: '<S187>/Logical2'
     *  Logic: '<S188>/Logical2'
     *  Logic: '<S189>/Logical2'
     *  Logic: '<S190>/Logical2'
     *  Logic: '<S191>/Logical2'
     *  Logic: '<S203>/Logical2'
     *  Logic: '<S204>/Logical2'
     */
    tmp = !Rte_Prm_HeATRR_b_BSGConvByps_HeATRR_b_BSGConvByps();

    /* Switch: '<S32>/Switch2' incorporates:
     *  Constant: '<S33>/Constant'
     *  Logic: '<S32>/Logical1'
     *  Logic: '<S32>/Logical2'
     *  RelationalOperator: '<S32>/Comparison2'
     */
    if ((((uint32)Rte_Prm_HeTSXR_e_All_TactToDomain_HeTSXR_e_All_TactToDomain())
         == CeTSXR_e_SumDomain) && tmp)
    {
        /* Switch: '<S32>/Switch3' incorporates:
         *  Constant: '<S35>/Calib'
         */
        if (Rte_Prm_HeATRR_b_RTC_Enbl_HeATRR_b_RTC_Enbl())
        {
            rtb_TmpSignalConversionAtVeSCCR_M_Output = rtb_Switch1_nva;
        }

        /* End of Switch: '<S32>/Switch3' */

        /* Switch: '<S32>/Switch2' incorporates:
         *  Sum: '<S32>/Sum'
         */
        rtb_TmpSignalConversionAtVeSCCR_M_Output +=
            rtb_TmpSignalConversionAtVeTTIR_M_PumpTr;
    }

    /* End of Switch: '<S32>/Switch2' */

    /* SignalConversion generated from: '<S1>/VeTTQR_M_SumMaxTrqDsrd' incorporates:
     *  Inport: '<Root>/VeTTQR_M_SumMaxTrqDsrd'
     */
    (void)Rte_Read_VeTTQR_M_SumMaxTrqDsrd_Value
        (&rtb_TmpSignalConversionAtVeTTQR_M_SumMax);

    /* Switch: '<S5>/Switch' incorporates:
     *  Constant: '<S24>/Constant'
     *  Constant: '<S25>/Constant'
     *  Constant: '<S28>/Calib'
     *  Inport: '<Root>/VeTTIR_M_MaxLmtAxleTrq'
     *  Inport: '<Root>/VeTTIR_M_MinLmtAxleTrq'
     *  Inport: '<Root>/VeTTQR_M_SumMinTrqDsrd'
     *  RelationalOperator: '<S5>/Comparison1'
     *  RelationalOperator: '<S5>/Comparison4'
     *  Switch: '<S5>/Switch2'
     *  Switch: '<S5>/Switch3'
     */
    if (HeATRR_b_OvrdTransToLimits)
    {
        /* Switch: '<S5>/Switch' incorporates:
         *  Constant: '<S26>/Calib'
         *  Constant: '<S27>/Calib'
         */
        rtb_Switch_l_idx_0 = HeATRR_M_OvrdTransToMaxValue;
        rtb_TmpSignalConversionAtVeSCCR_M_Output = HeATRR_M_OvrdTransToMinValue;
    }
    else if (((uint32)
              Rte_Prm_HeTSXR_e_All_TactToDomain_HeTSXR_e_All_TactToDomain()) ==
             CeTSXR_e_AxleDomain)
    {
        (void)Rte_Read_VeTTIR_M_MinLmtAxleTrq_Value(&rtb_MinMax1_b);
        (void)Rte_Read_VeTTIR_M_MaxLmtAxleTrq_Value(&rtb_Switch_l_idx_0);

        /* Switch: '<S5>/Switch' incorporates:
         *  Gain: '<S5>/Gain'
         *  Inport: '<Root>/VeTTIR_M_MaxLmtAxleTrq'
         *  Inport: '<Root>/VeTTIR_M_MinLmtAxleTrq'
         *  MinMax: '<S5>/MinMax1'
         *  MinMax: '<S5>/MinMax2'
         *  Switch: '<S5>/Switch2'
         */
        rtb_Switch_l_idx_0 = fminf(rtb_TmpSignalConversionAtVeSCCR_M_Output,
            rtb_Switch_l_idx_0);
        rtb_TmpSignalConversionAtVeSCCR_M_Output = fmaxf
            (-rtb_TmpSignalConversionAtVeSCCR_M_Output, rtb_MinMax1_b);
    }
    else if (((uint32)
              Rte_Prm_HeTSXR_e_All_TactToDomain_HeTSXR_e_All_TactToDomain()) ==
             CeTSXR_e_TransOutDomain)
    {
        /* Switch: '<S5>/Switch' incorporates:
         *  Gain: '<S5>/Gain'
         *  Switch: '<S5>/Switch2'
         *  Switch: '<S5>/Switch3'
         */
        rtb_Switch_l_idx_0 = rtb_TmpSignalConversionAtVeSCCR_M_Output;
        rtb_TmpSignalConversionAtVeSCCR_M_Output =
            -rtb_TmpSignalConversionAtVeSCCR_M_Output;
    }
    else
    {
        (void)Rte_Read_VeTTQR_M_SumMinTrqDsrd_Value(&rtb_MinMax1_b);

        /* Switch: '<S5>/Switch' incorporates:
         *  Gain: '<S5>/Gain'
         *  Inport: '<Root>/VeTTQR_M_SumMinTrqDsrd'
         *  MinMax: '<S5>/MinMax11'
         *  MinMax: '<S5>/MinMax4'
         *  Switch: '<S5>/Switch2'
         *  Switch: '<S5>/Switch3'
         */
        rtb_Switch_l_idx_0 = fminf(rtb_TmpSignalConversionAtVeSCCR_M_Output,
            rtb_TmpSignalConversionAtVeTTQR_M_SumMax);
        rtb_TmpSignalConversionAtVeSCCR_M_Output = fmaxf
            (-rtb_TmpSignalConversionAtVeSCCR_M_Output, rtb_MinMax1_b);
    }

    /* End of Switch: '<S5>/Switch' */

    /* SignalConversion generated from: '<S1>/VeWTAR_M_Typ1Max' incorporates:
     *  Inport: '<Root>/VeWTAR_M_Typ1Max'
     */
    (void)Rte_Read_VeWTAR_M_Typ1Max_Value
        (&rtb_TmpSignalConversionAtVeWTAR_M_Typ1Ma);

    /* SignalConversion generated from: '<S1>/VeWTAR_M_Typ1Min' incorporates:
     *  Inport: '<Root>/VeWTAR_M_Typ1Min'
     */
    (void)Rte_Read_VeWTAR_M_Typ1Min_Value
        (&rtb_TmpSignalConversionAtVeWTAR_M_Typ1Mi);

    /* SignalConversion generated from: '<S1>/VeWTAR_M_ToReqPot' incorporates:
     *  Inport: '<Root>/VeWTAR_M_ToReqPot'
     */
    (void)Rte_Read_VeWTAR_M_ToReqPot_Value
        (&rtb_TmpSignalConversionAtVeWTAR_M_ToReqP);

    /* Switch: '<S184>/Switch' incorporates:
     *  Constant: '<S184>/ConstantValue4'
     *  RelationalOperator: '<S184>/GreaterThan1'
     */
    if (rtb_VeATRR_r_Tact2Wheel < 0.01F)
    {
        /* Switch: '<S184>/Switch' incorporates:
         *  Constant: '<S184>/ConstantValue2'
         */
        rtb_MinMax1_b = 0.0F;
    }
    else
    {
        /* MinMax: '<S9>/MinMax1' incorporates:
         *  MinMax: '<S9>/MinMax2'
         */
        rtb_MinMax1_b = fminf(rtb_TmpSignalConversionAtVeWTAR_M_Typ1Ma, fmaxf
                              (rtb_TmpSignalConversionAtVeWTAR_M_Typ1Mi,
                               rtb_TmpSignalConversionAtVeWTAR_M_ToReqP));

        /* Outputs for Atomic SubSystem: '<S184>/ProtectedDivision2' */
        /* Switch: '<S275>/Switch1' incorporates:
         *  Constant: '<S275>/Constant Value'
         *  RelationalOperator: '<S275>/Not Equal'
         */
        if (rtb_MinMax1_b != 0.0F)
        {
            /* Switch: '<S184>/Switch' incorporates:
             *  Product: '<S275>/Division'
             *  Switch: '<S275>/Switch1'
             */
            rtb_MinMax1_b /= rtb_VeATRR_r_Tact2Wheel;
        }
        else
        {
            /* Switch: '<S184>/Switch' incorporates:
             *  Constant: '<S275>/Constant Value4'
             *  Switch: '<S275>/Switch2'
             *  Switch: '<S275>/Switch3'
             */
            rtb_MinMax1_b = 0.0F;
        }

        /* End of Switch: '<S275>/Switch1' */
        /* End of Outputs for SubSystem: '<S184>/ProtectedDivision2' */
    }

    /* End of Switch: '<S184>/Switch' */

    /* Outputs for Atomic SubSystem: '<S184>/VariantSubsystem' */
#if Rte_SysCon_Variant_ATRR_RTC_On

    /* Outputs for Atomic SubSystem: '<S276>/RTC_on' */
    /* Gain: '<S286>/Gain' incorporates:
     *  Lookup_n-D: '<S288>/Vector'
     *  SignalConversion generated from: '<S1>/VeTCCR_r_RampFactor'
     */
    rtb_Vector_fl = 0.5F * look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeTCCR_r_RampFa,
         (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsB_KxHSCR_r_TCC_TturbFromNC2_CoeffsB
          ()),
         (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsB_KtHSCR_r_TCC_TturbFromNC2_CoeffsB
          ()), 21U);

    /* Lookup_n-D: '<S287>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeTCCR_r_RampFactor'
     */
    rtb_Switch1_nva = look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeTCCR_r_RampFa,
         (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsA_KxHSCR_r_TCC_TturbFromNC2_CoeffsA
          ()),
         (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsA_KtHSCR_r_TCC_TturbFromNC2_CoeffsA
          ()), 21U);

    /* Outputs for Atomic SubSystem: '<S286>/Protected Division1' */
    /* Switch: '<S290>/Switch1' incorporates:
     *  Constant: '<S290>/Constant Value'
     *  Constant: '<S290>/Constant Value1'
     *  Constant: '<S290>/Constant Value2'
     *  Constant: '<S290>/Constant Value3'
     *  Logic: '<S290>/AND'
     *  RelationalOperator: '<S290>/Greater Than or Equal '
     *  RelationalOperator: '<S290>/Greater Than or Equal 1'
     *  RelationalOperator: '<S290>/Not Equal'
     *  RelationalOperator: '<S290>/Not Equal1'
     *  Switch: '<S290>/Switch2'
     *  Switch: '<S290>/Switch3'
     */
    if ((rtb_Vector_fl != 0.0F) && (rtb_Switch1_nva != 0.0F))
    {
        /* Switch: '<S290>/Switch1' incorporates:
         *  Product: '<S290>/Division'
         */
        rtb_Switch1_ig = rtb_Vector_fl / rtb_Switch1_nva;
    }
    else if (rtb_Vector_fl > 0.0F)
    {
        /* Switch: '<S290>/Switch2' incorporates:
         *  Constant: '<S290>/MAXFLOAT'
         *  Switch: '<S290>/Switch1'
         */
        rtb_Switch1_ig = 3.402823466E+38F;
    }
    else if (rtb_Vector_fl < 0.0F)
    {
        /* Switch: '<S290>/Switch3' incorporates:
         *  Constant: '<S290>/MINFLOAT'
         *  Switch: '<S290>/Switch1'
         *  Switch: '<S290>/Switch2'
         */
        rtb_Switch1_ig = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S290>/Switch1' incorporates:
         *  Constant: '<S290>/Constant Value4'
         *  Switch: '<S290>/Switch2'
         *  Switch: '<S290>/Switch3'
         */
        rtb_Switch1_ig = 0.0F;
    }

    /* End of Switch: '<S290>/Switch1' */
    /* End of Outputs for SubSystem: '<S286>/Protected Division1' */

    /* Product: '<S286>/Product1' */
    rtb_Vector_fl *= rtb_Vector_fl;

    /* Outputs for Atomic SubSystem: '<S286>/Protected Division2' */
    /* Switch: '<S291>/Switch1' incorporates:
     *  Constant: '<S291>/Constant Value'
     *  Constant: '<S291>/Constant Value1'
     *  Constant: '<S291>/Constant Value2'
     *  Constant: '<S291>/Constant Value3'
     *  Logic: '<S291>/AND'
     *  RelationalOperator: '<S291>/Greater Than or Equal '
     *  RelationalOperator: '<S291>/Greater Than or Equal 1'
     *  RelationalOperator: '<S291>/Not Equal'
     *  RelationalOperator: '<S291>/Not Equal1'
     *  Switch: '<S291>/Switch2'
     *  Switch: '<S291>/Switch3'
     */
    if ((rtb_Vector_fl != 0.0F) && (rtb_Switch1_nva != 0.0F))
    {
        /* Switch: '<S291>/Switch1' incorporates:
         *  Product: '<S291>/Division'
         */
        rtb_Vector_fl /= rtb_Switch1_nva;
    }
    else if (rtb_Vector_fl > 0.0F)
    {
        /* Switch: '<S291>/Switch2' incorporates:
         *  Constant: '<S291>/MAXFLOAT'
         *  Switch: '<S291>/Switch1'
         */
        rtb_Vector_fl = 3.402823466E+38F;
    }
    else if (rtb_Vector_fl < 0.0F)
    {
        /* Switch: '<S291>/Switch3' incorporates:
         *  Constant: '<S291>/MINFLOAT'
         *  Switch: '<S291>/Switch1'
         *  Switch: '<S291>/Switch2'
         */
        rtb_Vector_fl = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S291>/Switch1' incorporates:
         *  Constant: '<S291>/Constant Value4'
         *  Switch: '<S291>/Switch2'
         *  Switch: '<S291>/Switch3'
         */
        rtb_Vector_fl = 0.0F;
    }

    /* End of Switch: '<S291>/Switch1' */
    /* End of Outputs for SubSystem: '<S286>/Protected Division2' */

    /* Outputs for Atomic SubSystem: '<S286>/Protected Division4' */
    /* Switch: '<S292>/Switch1' incorporates:
     *  Constant: '<S292>/Constant Value1'
     *  RelationalOperator: '<S292>/Not Equal1'
     */
    if (rtb_Switch1_nva != 0.0F)
    {
        /* Switch: '<S292>/Switch1' incorporates:
         *  Constant: '<S286>/Constant Value2'
         *  Product: '<S292>/Division'
         */
        rtb_Switch1_nva = 1.0F / rtb_Switch1_nva;
    }
    else
    {
        /* Switch: '<S292>/Switch1' */
        rtb_Switch1_nva = 3.402823466E+38F;
    }

    /* End of Switch: '<S292>/Switch1' */
    /* End of Outputs for SubSystem: '<S286>/Protected Division4' */

    /* Signum: '<S285>/Signum' */
    if (rtb_Switch1_nva < 0.0F)
    {
        rtb_Gain_o = -1.0F;
    }
    else if (rtb_Switch1_nva > 0.0F)
    {
        rtb_Gain_o = 1.0F;
    }
    else
    {
        rtb_Gain_o = rtb_Switch1_nva;
    }

    /* End of Signum: '<S285>/Signum' */

    /* Sum: '<S285>/Sum3' incorporates:
     *  Constant: '<S285>/Constant Value'
     *  Gain: '<S286>/Gain1'
     *  Lookup_n-D: '<S289>/Vector'
     *  MinMax: '<S285>/MinMax1'
     *  Product: '<S285>/Product'
     *  Product: '<S285>/Product1'
     *  SignalConversion generated from: '<S1>/VeTCCR_r_RampFactor'
     *  Sqrt: '<S285>/Square Root'
     *  Sum: '<S285>/Sum2'
     *  Sum: '<S286>/Sum1'
     */
    rtb_Switch1_ig = ((sqrtf(fmaxf((rtb_MinMax1_b - (look1_iflf_binlca_16a
                           (rtb_TmpSignalConversionAtVeTCCR_r_RampFa,
                            (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsC_KxHSCR_r_TCC_TturbFromNC2_CoeffsC
        ()), (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsC_KtHSCR_r_TCC_TturbFromNC2_CoeffsC
              ()), 3U) - rtb_Vector_fl)) * rtb_Switch1_nva, 0.0F)) * rtb_Gain_o)
                      + (-rtb_Switch1_ig)) +
        rtb_TmpSignalConversionAtVeTCCR_r_RampFa;

    /* Outputs for Atomic SubSystem: '<S280>/Protected Division3' */
    /* Switch: '<S283>/Switch1' incorporates:
     *  Constant: '<S283>/Constant Value'
     *  Constant: '<S283>/Constant Value1'
     *  Constant: '<S283>/Constant Value2'
     *  Constant: '<S283>/Constant Value3'
     *  Logic: '<S283>/AND'
     *  RelationalOperator: '<S283>/Greater Than or Equal '
     *  RelationalOperator: '<S283>/Greater Than or Equal 1'
     *  RelationalOperator: '<S283>/Not Equal'
     *  RelationalOperator: '<S283>/Not Equal1'
     *  Switch: '<S283>/Switch2'
     *  Switch: '<S283>/Switch3'
     */
    if ((rtb_TmpSignalConversionAtVeTCCR_r_RampFa != 0.0F) && (rtb_Switch1_ig !=
         0.0F))
    {
        /* Switch: '<S283>/Switch1' incorporates:
         *  Product: '<S283>/Division'
         */
        rtb_Switch1_ig = rtb_TmpSignalConversionAtVeTCCR_r_RampFa /
            rtb_Switch1_ig;
    }
    else if (rtb_TmpSignalConversionAtVeTCCR_r_RampFa > 0.0F)
    {
        /* Switch: '<S283>/Switch2' incorporates:
         *  Constant: '<S283>/MAXFLOAT'
         *  Switch: '<S283>/Switch1'
         */
        rtb_Switch1_ig = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtVeTCCR_r_RampFa < 0.0F)
    {
        /* Switch: '<S283>/Switch3' incorporates:
         *  Constant: '<S283>/MINFLOAT'
         *  Switch: '<S283>/Switch1'
         *  Switch: '<S283>/Switch2'
         */
        rtb_Switch1_ig = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S283>/Switch1' incorporates:
         *  Constant: '<S283>/Constant Value4'
         *  Switch: '<S283>/Switch2'
         *  Switch: '<S283>/Switch3'
         */
        rtb_Switch1_ig = 0.0F;
    }

    /* End of Switch: '<S283>/Switch1' */
    /* End of Outputs for SubSystem: '<S280>/Protected Division3' */

    /* Lookup_n-D: '<S281>/Vector' incorporates:
     *  Switch: '<S283>/Switch1'
     */
    rtb_Switch1_ig = look1_iflf_binlca_16a(rtb_Switch1_ig,
        (Rte_Prm_KxHSCR_r_TCC_TorqRatio_KxHSCR_r_TCC_TorqRatio()),
        (Rte_Prm_KtHSCR_r_TCC_TorqRatio_KtHSCR_r_TCC_TorqRatio()), 17U);

    /* Outputs for Atomic SubSystem: '<S280>/Protected Division1' */
    /* Switch: '<S282>/Switch1' incorporates:
     *  Constant: '<S282>/Constant Value'
     *  Constant: '<S282>/Constant Value1'
     *  Constant: '<S282>/Constant Value2'
     *  Constant: '<S282>/Constant Value3'
     *  Logic: '<S282>/AND'
     *  RelationalOperator: '<S282>/Greater Than or Equal '
     *  RelationalOperator: '<S282>/Greater Than or Equal 1'
     *  RelationalOperator: '<S282>/Not Equal'
     *  RelationalOperator: '<S282>/Not Equal1'
     *  Switch: '<S282>/Switch2'
     *  Switch: '<S282>/Switch3'
     */
    if ((rtb_MinMax1_b != 0.0F) && (rtb_Switch1_ig != 0.0F))
    {
        /* Switch: '<S282>/Switch1' incorporates:
         *  Product: '<S282>/Division'
         */
        rtb_Switch1_ig = rtb_MinMax1_b / rtb_Switch1_ig;
    }
    else if (rtb_MinMax1_b > 0.0F)
    {
        /* Switch: '<S282>/Switch2' incorporates:
         *  Constant: '<S282>/MAXFLOAT'
         *  Switch: '<S282>/Switch1'
         */
        rtb_Switch1_ig = 3.402823466E+38F;
    }
    else if (rtb_MinMax1_b < 0.0F)
    {
        /* Switch: '<S282>/Switch3' incorporates:
         *  Constant: '<S282>/MINFLOAT'
         *  Switch: '<S282>/Switch1'
         *  Switch: '<S282>/Switch2'
         */
        rtb_Switch1_ig = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S282>/Switch1' incorporates:
         *  Constant: '<S282>/Constant Value4'
         *  Switch: '<S282>/Switch2'
         *  Switch: '<S282>/Switch3'
         */
        rtb_Switch1_ig = 0.0F;
    }

    /* End of Switch: '<S282>/Switch1' */
    /* End of Outputs for SubSystem: '<S280>/Protected Division1' */

    /* VariantMerge generated from: '<S276>/T_imp' incorporates:
     *  Product: '<S279>/Product4'
     *  Sum: '<S279>/Sum4'
     *  Sum: '<S279>/Sum5'
     */
    rtb_Switch1_ig = ((rtb_Switch1_ig - rtb_MinMax1_b) *
                      rtb_TmpSignalConversionAtVeVSDR_n_NTurbO) + rtb_MinMax1_b;

    /* End of Outputs for SubSystem: '<S276>/RTC_on' */
#else

    /* Outputs for Atomic SubSystem: '<S276>/RTC_off' */
    /* VariantMerge generated from: '<S276>/T_imp' incorporates:
     *  Inport: '<S277>/T_turb'
     */
    rtb_Switch1_ig = rtb_MinMax1_b;

    /* End of Outputs for SubSystem: '<S276>/RTC_off' */
#endif

    /* End of Outputs for SubSystem: '<S184>/VariantSubsystem' */

    /* Switch: '<S184>/Switch2' incorporates:
     *  Constant: '<S271>/Constant'
     *  Logic: '<S184>/Logical1'
     *  RelationalOperator: '<S184>/Comparison2'
     */
    if ((((uint32)Rte_Prm_HeTSXR_e_All_TactToDomain_HeTSXR_e_All_TactToDomain())
         == CeTSXR_e_SumDomain) && tmp)
    {
        /* Switch: '<S184>/Switch3' incorporates:
         *  Constant: '<S273>/Calib'
         */
        if (Rte_Prm_HeATRR_b_RTC_Enbl_HeATRR_b_RTC_Enbl())
        {
            rtb_MinMax1_b = rtb_Switch1_ig;
        }

        /* End of Switch: '<S184>/Switch3' */

        /* MinMax: '<S9>/MinMax34' incorporates:
         *  Sum: '<S184>/Sum'
         */
        rtb_MinMax1_b += rtb_TmpSignalConversionAtVeTTIR_M_PumpTr;
    }

    /* End of Switch: '<S184>/Switch2' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCTCR_M_MinCreepFWTrqTgt' */
    (void)Rte_Read_VeCTCR_M_MinCreepFWTrqTgt_Value(&rtb_Vector_ak);

    /* Inport: '<Root>/VeWTAR_M_ToReqOITR' */
    (void)Rte_Read_VeWTAR_M_ToReqOITR_Value(&rtb_MinMax7);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/ATRR_MedTEB'
     */
    /* MinMax: '<S9>/MinMax34' incorporates:
     *  MinMax: '<S9>/MinMax4'
     */
    rtb_MinMax1_b = fminf(rtb_Switch_l_idx_0, rtb_MinMax1_b);

    /* MinMax: '<S9>/MinMax11' */
    VeATRC_M_ToReqPot_Cnvt = fmaxf(fmaxf(rtb_Vector_ak,
        rtb_TmpSignalConversionAtVeSCCR_M_Output), rtb_MinMax1_b);

    /* SignalConversion generated from: '<S1>/VeCTCR_M_MinCreepFWTrq' incorporates:
     *  Inport: '<Root>/VeCTCR_M_MinCreepFWTrq'
     */
    (void)Rte_Read_VeCTCR_M_MinCreepFWTrq_Value
        (&rtb_TmpSignalConversionAtVeCTCR_M_MinCre);

    /* MinMax: '<S9>/MinMax7' incorporates:
     *  MinMax: '<S9>/MinMax9'
     */
    rtb_MinMax7 = fminf(rtb_TmpSignalConversionAtVeWTAR_M_Typ1Ma, fmaxf
                        (rtb_TmpSignalConversionAtVeWTAR_M_Typ1Mi, rtb_MinMax7));

    /* Switch: '<S185>/Switch' incorporates:
     *  Constant: '<S185>/ConstantValue4'
     *  Constant: '<S297>/Constant Value'
     *  RelationalOperator: '<S185>/GreaterThan1'
     *  RelationalOperator: '<S297>/Not Equal'
     *  Switch: '<S297>/Switch1'
     */
    if (rtb_VeATRR_r_Tact2Wheel < 0.01F)
    {
        /* Switch: '<S185>/Switch' incorporates:
         *  Constant: '<S185>/ConstantValue2'
         */
        rtb_MinMax1_b = 0.0F;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S185>/ProtectedDivision2' */
        if (rtb_MinMax7 != 0.0F)
        {
            /* Switch: '<S185>/Switch' incorporates:
             *  Product: '<S297>/Division'
             *  Switch: '<S297>/Switch1'
             */
            rtb_MinMax1_b = rtb_MinMax7 / rtb_VeATRR_r_Tact2Wheel;
        }
        else
        {
            /* Switch: '<S185>/Switch' incorporates:
             *  Constant: '<S297>/Constant Value4'
             *  Switch: '<S297>/Switch1'
             *  Switch: '<S297>/Switch2'
             *  Switch: '<S297>/Switch3'
             */
            rtb_MinMax1_b = 0.0F;
        }

        /* End of Outputs for SubSystem: '<S185>/ProtectedDivision2' */
    }

    /* End of Switch: '<S185>/Switch' */

    /* Outputs for Atomic SubSystem: '<S185>/VariantSubsystem' */
#if Rte_SysCon_Variant_ATRR_RTC_On

    /* Outputs for Atomic SubSystem: '<S298>/RTC_on' */
    /* Gain: '<S308>/Gain' incorporates:
     *  Lookup_n-D: '<S310>/Vector'
     *  SignalConversion generated from: '<S1>/VeTCCR_r_RampFactor'
     */
    rtb_Switch1_ig = 0.5F * look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeTCCR_r_RampFa,
         (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsB_KxHSCR_r_TCC_TturbFromNC2_CoeffsB
          ()),
         (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsB_KtHSCR_r_TCC_TturbFromNC2_CoeffsB
          ()), 21U);

    /* Lookup_n-D: '<S309>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeTCCR_r_RampFactor'
     */
    rtb_Vector_ak = look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeTCCR_r_RampFa,
         (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsA_KxHSCR_r_TCC_TturbFromNC2_CoeffsA
          ()),
         (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsA_KtHSCR_r_TCC_TturbFromNC2_CoeffsA
          ()), 21U);

    /* Outputs for Atomic SubSystem: '<S308>/Protected Division1' */
    /* Switch: '<S312>/Switch1' incorporates:
     *  Constant: '<S312>/Constant Value'
     *  Constant: '<S312>/Constant Value1'
     *  Constant: '<S312>/Constant Value2'
     *  Constant: '<S312>/Constant Value3'
     *  Logic: '<S312>/AND'
     *  RelationalOperator: '<S312>/Greater Than or Equal '
     *  RelationalOperator: '<S312>/Greater Than or Equal 1'
     *  RelationalOperator: '<S312>/Not Equal'
     *  RelationalOperator: '<S312>/Not Equal1'
     *  Switch: '<S312>/Switch2'
     *  Switch: '<S312>/Switch3'
     */
    if ((rtb_Switch1_ig != 0.0F) && (rtb_Vector_ak != 0.0F))
    {
        /* Switch: '<S312>/Switch1' incorporates:
         *  Product: '<S312>/Division'
         */
        rtb_Switch1_cv = rtb_Switch1_ig / rtb_Vector_ak;
    }
    else if (rtb_Switch1_ig > 0.0F)
    {
        /* Switch: '<S312>/Switch2' incorporates:
         *  Constant: '<S312>/MAXFLOAT'
         *  Switch: '<S312>/Switch1'
         */
        rtb_Switch1_cv = 3.402823466E+38F;
    }
    else if (rtb_Switch1_ig < 0.0F)
    {
        /* Switch: '<S312>/Switch3' incorporates:
         *  Constant: '<S312>/MINFLOAT'
         *  Switch: '<S312>/Switch1'
         *  Switch: '<S312>/Switch2'
         */
        rtb_Switch1_cv = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S312>/Switch1' incorporates:
         *  Constant: '<S312>/Constant Value4'
         *  Switch: '<S312>/Switch2'
         *  Switch: '<S312>/Switch3'
         */
        rtb_Switch1_cv = 0.0F;
    }

    /* End of Switch: '<S312>/Switch1' */
    /* End of Outputs for SubSystem: '<S308>/Protected Division1' */

    /* Product: '<S308>/Product1' */
    rtb_Switch1_ig *= rtb_Switch1_ig;

    /* Outputs for Atomic SubSystem: '<S308>/Protected Division2' */
    /* Switch: '<S313>/Switch1' incorporates:
     *  Constant: '<S313>/Constant Value'
     *  Constant: '<S313>/Constant Value1'
     *  Constant: '<S313>/Constant Value2'
     *  Constant: '<S313>/Constant Value3'
     *  Logic: '<S313>/AND'
     *  RelationalOperator: '<S313>/Greater Than or Equal '
     *  RelationalOperator: '<S313>/Greater Than or Equal 1'
     *  RelationalOperator: '<S313>/Not Equal'
     *  RelationalOperator: '<S313>/Not Equal1'
     *  Switch: '<S313>/Switch2'
     *  Switch: '<S313>/Switch3'
     */
    if ((rtb_Switch1_ig != 0.0F) && (rtb_Vector_ak != 0.0F))
    {
        /* Switch: '<S313>/Switch1' incorporates:
         *  Product: '<S313>/Division'
         */
        rtb_Switch1_ig /= rtb_Vector_ak;
    }
    else if (rtb_Switch1_ig > 0.0F)
    {
        /* Switch: '<S313>/Switch2' incorporates:
         *  Constant: '<S313>/MAXFLOAT'
         *  Switch: '<S313>/Switch1'
         */
        rtb_Switch1_ig = 3.402823466E+38F;
    }
    else if (rtb_Switch1_ig < 0.0F)
    {
        /* Switch: '<S313>/Switch3' incorporates:
         *  Constant: '<S313>/MINFLOAT'
         *  Switch: '<S313>/Switch1'
         *  Switch: '<S313>/Switch2'
         */
        rtb_Switch1_ig = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S313>/Switch1' incorporates:
         *  Constant: '<S313>/Constant Value4'
         *  Switch: '<S313>/Switch2'
         *  Switch: '<S313>/Switch3'
         */
        rtb_Switch1_ig = 0.0F;
    }

    /* End of Switch: '<S313>/Switch1' */
    /* End of Outputs for SubSystem: '<S308>/Protected Division2' */

    /* Outputs for Atomic SubSystem: '<S308>/Protected Division4' */
    /* Switch: '<S314>/Switch1' incorporates:
     *  Constant: '<S314>/Constant Value1'
     *  RelationalOperator: '<S314>/Not Equal1'
     */
    if (rtb_Vector_ak != 0.0F)
    {
        /* Switch: '<S314>/Switch1' incorporates:
         *  Constant: '<S308>/Constant Value2'
         *  Product: '<S314>/Division'
         */
        rtb_Vector_ak = 1.0F / rtb_Vector_ak;
    }
    else
    {
        /* Switch: '<S314>/Switch1' */
        rtb_Vector_ak = 3.402823466E+38F;
    }

    /* End of Switch: '<S314>/Switch1' */
    /* End of Outputs for SubSystem: '<S308>/Protected Division4' */

    /* Signum: '<S307>/Signum' */
    if (rtb_Vector_ak < 0.0F)
    {
        rtb_Switch1_nva = -1.0F;
    }
    else if (rtb_Vector_ak > 0.0F)
    {
        rtb_Switch1_nva = 1.0F;
    }
    else
    {
        rtb_Switch1_nva = rtb_Vector_ak;
    }

    /* End of Signum: '<S307>/Signum' */

    /* Sum: '<S307>/Sum3' incorporates:
     *  Constant: '<S307>/Constant Value'
     *  Gain: '<S308>/Gain1'
     *  Lookup_n-D: '<S311>/Vector'
     *  MinMax: '<S307>/MinMax1'
     *  Product: '<S307>/Product'
     *  Product: '<S307>/Product1'
     *  SignalConversion generated from: '<S1>/VeTCCR_r_RampFactor'
     *  Sqrt: '<S307>/Square Root'
     *  Sum: '<S307>/Sum2'
     *  Sum: '<S308>/Sum1'
     */
    rtb_Switch1_cv = ((sqrtf(fmaxf((rtb_MinMax1_b - (look1_iflf_binlca_16a
                           (rtb_TmpSignalConversionAtVeTCCR_r_RampFa,
                            (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsC_KxHSCR_r_TCC_TturbFromNC2_CoeffsC
        ()), (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsC_KtHSCR_r_TCC_TturbFromNC2_CoeffsC
              ()), 3U) - rtb_Switch1_ig)) * rtb_Vector_ak, 0.0F)) *
                       rtb_Switch1_nva) + (-rtb_Switch1_cv)) +
        rtb_TmpSignalConversionAtVeTCCR_r_RampFa;

    /* Outputs for Atomic SubSystem: '<S302>/Protected Division3' */
    /* Switch: '<S305>/Switch1' incorporates:
     *  Constant: '<S305>/Constant Value'
     *  Constant: '<S305>/Constant Value1'
     *  Constant: '<S305>/Constant Value2'
     *  Constant: '<S305>/Constant Value3'
     *  Logic: '<S305>/AND'
     *  RelationalOperator: '<S305>/Greater Than or Equal '
     *  RelationalOperator: '<S305>/Greater Than or Equal 1'
     *  RelationalOperator: '<S305>/Not Equal'
     *  RelationalOperator: '<S305>/Not Equal1'
     *  Switch: '<S305>/Switch2'
     *  Switch: '<S305>/Switch3'
     */
    if ((rtb_TmpSignalConversionAtVeTCCR_r_RampFa != 0.0F) && (rtb_Switch1_cv !=
         0.0F))
    {
        /* Switch: '<S305>/Switch1' incorporates:
         *  Product: '<S305>/Division'
         */
        rtb_Switch1_cv = rtb_TmpSignalConversionAtVeTCCR_r_RampFa /
            rtb_Switch1_cv;
    }
    else if (rtb_TmpSignalConversionAtVeTCCR_r_RampFa > 0.0F)
    {
        /* Switch: '<S305>/Switch2' incorporates:
         *  Constant: '<S305>/MAXFLOAT'
         *  Switch: '<S305>/Switch1'
         */
        rtb_Switch1_cv = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtVeTCCR_r_RampFa < 0.0F)
    {
        /* Switch: '<S305>/Switch3' incorporates:
         *  Constant: '<S305>/MINFLOAT'
         *  Switch: '<S305>/Switch1'
         *  Switch: '<S305>/Switch2'
         */
        rtb_Switch1_cv = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S305>/Switch1' incorporates:
         *  Constant: '<S305>/Constant Value4'
         *  Switch: '<S305>/Switch2'
         *  Switch: '<S305>/Switch3'
         */
        rtb_Switch1_cv = 0.0F;
    }

    /* End of Switch: '<S305>/Switch1' */
    /* End of Outputs for SubSystem: '<S302>/Protected Division3' */

    /* Lookup_n-D: '<S303>/Vector' incorporates:
     *  Switch: '<S305>/Switch1'
     */
    rtb_Switch1_cv = look1_iflf_binlca_16a(rtb_Switch1_cv,
        (Rte_Prm_KxHSCR_r_TCC_TorqRatio_KxHSCR_r_TCC_TorqRatio()),
        (Rte_Prm_KtHSCR_r_TCC_TorqRatio_KtHSCR_r_TCC_TorqRatio()), 17U);

    /* Outputs for Atomic SubSystem: '<S302>/Protected Division1' */
    /* Switch: '<S304>/Switch1' incorporates:
     *  Constant: '<S304>/Constant Value'
     *  Constant: '<S304>/Constant Value1'
     *  Constant: '<S304>/Constant Value2'
     *  Constant: '<S304>/Constant Value3'
     *  Logic: '<S304>/AND'
     *  RelationalOperator: '<S304>/Greater Than or Equal '
     *  RelationalOperator: '<S304>/Greater Than or Equal 1'
     *  RelationalOperator: '<S304>/Not Equal'
     *  RelationalOperator: '<S304>/Not Equal1'
     *  Switch: '<S304>/Switch2'
     *  Switch: '<S304>/Switch3'
     */
    if ((rtb_MinMax1_b != 0.0F) && (rtb_Switch1_cv != 0.0F))
    {
        /* Switch: '<S304>/Switch1' incorporates:
         *  Product: '<S304>/Division'
         */
        rtb_Switch1_cv = rtb_MinMax1_b / rtb_Switch1_cv;
    }
    else if (rtb_MinMax1_b > 0.0F)
    {
        /* Switch: '<S304>/Switch2' incorporates:
         *  Constant: '<S304>/MAXFLOAT'
         *  Switch: '<S304>/Switch1'
         */
        rtb_Switch1_cv = 3.402823466E+38F;
    }
    else if (rtb_MinMax1_b < 0.0F)
    {
        /* Switch: '<S304>/Switch3' incorporates:
         *  Constant: '<S304>/MINFLOAT'
         *  Switch: '<S304>/Switch1'
         *  Switch: '<S304>/Switch2'
         */
        rtb_Switch1_cv = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S304>/Switch1' incorporates:
         *  Constant: '<S304>/Constant Value4'
         *  Switch: '<S304>/Switch2'
         *  Switch: '<S304>/Switch3'
         */
        rtb_Switch1_cv = 0.0F;
    }

    /* End of Switch: '<S304>/Switch1' */
    /* End of Outputs for SubSystem: '<S302>/Protected Division1' */

    /* VariantMerge generated from: '<S298>/T_imp' incorporates:
     *  Product: '<S301>/Product4'
     *  Sum: '<S301>/Sum4'
     *  Sum: '<S301>/Sum5'
     */
    rtb_Switch1_cv = ((rtb_Switch1_cv - rtb_MinMax1_b) *
                      rtb_TmpSignalConversionAtVeVSDR_n_NTurbO) + rtb_MinMax1_b;

    /* End of Outputs for SubSystem: '<S298>/RTC_on' */
#else

    /* Outputs for Atomic SubSystem: '<S298>/RTC_off' */
    /* VariantMerge generated from: '<S298>/T_imp' incorporates:
     *  Inport: '<S299>/T_turb'
     */
    rtb_Switch1_cv = rtb_MinMax1_b;

    /* End of Outputs for SubSystem: '<S298>/RTC_off' */
#endif

    /* End of Outputs for SubSystem: '<S185>/VariantSubsystem' */

    /* Switch: '<S185>/Switch2' incorporates:
     *  Constant: '<S293>/Constant'
     *  Logic: '<S185>/Logical1'
     *  RelationalOperator: '<S185>/Comparison2'
     */
    if ((((uint32)Rte_Prm_HeTSXR_e_All_TactToDomain_HeTSXR_e_All_TactToDomain())
         == CeTSXR_e_SumDomain) && tmp)
    {
        /* Switch: '<S185>/Switch3' incorporates:
         *  Constant: '<S295>/Calib'
         */
        if (Rte_Prm_HeATRR_b_RTC_Enbl_HeATRR_b_RTC_Enbl())
        {
            rtb_MinMax1_b = rtb_Switch1_cv;
        }

        /* End of Switch: '<S185>/Switch3' */

        /* MinMax: '<S9>/MinMax34' incorporates:
         *  Sum: '<S185>/Sum'
         */
        rtb_MinMax1_b += rtb_TmpSignalConversionAtVeTTIR_M_PumpTr;
    }

    /* End of Switch: '<S185>/Switch2' */

    /* MinMax: '<S9>/MinMax34' incorporates:
     *  MinMax: '<S9>/MinMax10'
     */
    rtb_MinMax1_b = fminf(rtb_Switch_l_idx_0, rtb_MinMax1_b);

    /* MinMax: '<S9>/MinMax3' incorporates:
     *  MinMax: '<S9>/MinMax12'
     *  MinMax: '<S9>/MinMax17'
     *  MinMax: '<S9>/MinMax6'
     */
    rtb_Switch1_cv = fmaxf(rtb_TmpSignalConversionAtVeCTCR_M_MinCre,
                           rtb_TmpSignalConversionAtVeSCCR_M_Output);

    /* MinMax: '<S9>/MinMax3' */
    VeATRC_M_ToReq_PreSEM = fmaxf(rtb_Switch1_cv, rtb_MinMax1_b);

    /* SignalConversion generated from: '<S1>/VeWTAR_M_OutTrqReqHTDR_ASL' incorporates:
     *  Inport: '<Root>/VeWTAR_M_OutTrqReqHTDR_ASL'
     */
    (void)Rte_Read_VeWTAR_M_OutTrqReqHTDR_ASL_Value
        (&rtb_TmpSignalConversionAtVeWTAR_M_OutTrq);

    /* Switch: '<S186>/Switch' incorporates:
     *  Constant: '<S186>/ConstantValue4'
     *  RelationalOperator: '<S186>/GreaterThan1'
     */
    if (rtb_VeATRR_r_Tact2Wheel < 0.01F)
    {
        /* Switch: '<S186>/Switch' incorporates:
         *  Constant: '<S186>/ConstantValue2'
         */
        rtb_MinMax1_b = 0.0F;
    }
    else
    {
        /* MinMax: '<S9>/MinMax13' incorporates:
         *  MinMax: '<S9>/MinMax14'
         */
        rtb_MinMax1_b = fminf(rtb_TmpSignalConversionAtVeWTAR_M_Typ1Ma, fmaxf
                              (rtb_TmpSignalConversionAtVeWTAR_M_Typ1Mi,
                               rtb_TmpSignalConversionAtVeWTAR_M_OutTrq));

        /* Outputs for Atomic SubSystem: '<S186>/ProtectedDivision2' */
        /* Switch: '<S319>/Switch1' incorporates:
         *  Constant: '<S319>/Constant Value'
         *  RelationalOperator: '<S319>/Not Equal'
         */
        if (rtb_MinMax1_b != 0.0F)
        {
            /* Switch: '<S186>/Switch' incorporates:
             *  Product: '<S319>/Division'
             *  Switch: '<S319>/Switch1'
             */
            rtb_MinMax1_b /= rtb_VeATRR_r_Tact2Wheel;
        }
        else
        {
            /* Switch: '<S186>/Switch' incorporates:
             *  Constant: '<S319>/Constant Value4'
             *  Switch: '<S319>/Switch2'
             *  Switch: '<S319>/Switch3'
             */
            rtb_MinMax1_b = 0.0F;
        }

        /* End of Switch: '<S319>/Switch1' */
        /* End of Outputs for SubSystem: '<S186>/ProtectedDivision2' */
    }

    /* End of Switch: '<S186>/Switch' */

    /* Outputs for Atomic SubSystem: '<S186>/VariantSubsystem' */
#if Rte_SysCon_Variant_ATRR_RTC_On

    /* Outputs for Atomic SubSystem: '<S320>/RTC_on' */
    /* Gain: '<S330>/Gain' incorporates:
     *  Lookup_n-D: '<S332>/Vector'
     *  SignalConversion generated from: '<S1>/VeTCCR_r_RampFactor'
     */
    rtb_Switch1_ig = 0.5F * look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeTCCR_r_RampFa,
         (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsB_KxHSCR_r_TCC_TturbFromNC2_CoeffsB
          ()),
         (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsB_KtHSCR_r_TCC_TturbFromNC2_CoeffsB
          ()), 21U);

    /* Lookup_n-D: '<S331>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeTCCR_r_RampFactor'
     */
    rtb_Vector_ak = look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeTCCR_r_RampFa,
         (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsA_KxHSCR_r_TCC_TturbFromNC2_CoeffsA
          ()),
         (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsA_KtHSCR_r_TCC_TturbFromNC2_CoeffsA
          ()), 21U);

    /* Outputs for Atomic SubSystem: '<S330>/Protected Division1' */
    /* Switch: '<S334>/Switch1' incorporates:
     *  Constant: '<S334>/Constant Value'
     *  Constant: '<S334>/Constant Value1'
     *  Constant: '<S334>/Constant Value2'
     *  Constant: '<S334>/Constant Value3'
     *  Logic: '<S334>/AND'
     *  RelationalOperator: '<S334>/Greater Than or Equal '
     *  RelationalOperator: '<S334>/Greater Than or Equal 1'
     *  RelationalOperator: '<S334>/Not Equal'
     *  RelationalOperator: '<S334>/Not Equal1'
     *  Switch: '<S334>/Switch2'
     *  Switch: '<S334>/Switch3'
     */
    if ((rtb_Switch1_ig != 0.0F) && (rtb_Vector_ak != 0.0F))
    {
        /* Switch: '<S334>/Switch1' incorporates:
         *  Product: '<S334>/Division'
         */
        rtb_Switch1_bi = rtb_Switch1_ig / rtb_Vector_ak;
    }
    else if (rtb_Switch1_ig > 0.0F)
    {
        /* Switch: '<S334>/Switch2' incorporates:
         *  Constant: '<S334>/MAXFLOAT'
         *  Switch: '<S334>/Switch1'
         */
        rtb_Switch1_bi = 3.402823466E+38F;
    }
    else if (rtb_Switch1_ig < 0.0F)
    {
        /* Switch: '<S334>/Switch3' incorporates:
         *  Constant: '<S334>/MINFLOAT'
         *  Switch: '<S334>/Switch1'
         *  Switch: '<S334>/Switch2'
         */
        rtb_Switch1_bi = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S334>/Switch1' incorporates:
         *  Constant: '<S334>/Constant Value4'
         *  Switch: '<S334>/Switch2'
         *  Switch: '<S334>/Switch3'
         */
        rtb_Switch1_bi = 0.0F;
    }

    /* End of Switch: '<S334>/Switch1' */
    /* End of Outputs for SubSystem: '<S330>/Protected Division1' */

    /* Product: '<S330>/Product1' */
    rtb_Switch1_ig *= rtb_Switch1_ig;

    /* Outputs for Atomic SubSystem: '<S330>/Protected Division2' */
    /* Switch: '<S335>/Switch1' incorporates:
     *  Constant: '<S335>/Constant Value'
     *  Constant: '<S335>/Constant Value1'
     *  Constant: '<S335>/Constant Value2'
     *  Constant: '<S335>/Constant Value3'
     *  Logic: '<S335>/AND'
     *  RelationalOperator: '<S335>/Greater Than or Equal '
     *  RelationalOperator: '<S335>/Greater Than or Equal 1'
     *  RelationalOperator: '<S335>/Not Equal'
     *  RelationalOperator: '<S335>/Not Equal1'
     *  Switch: '<S335>/Switch2'
     *  Switch: '<S335>/Switch3'
     */
    if ((rtb_Switch1_ig != 0.0F) && (rtb_Vector_ak != 0.0F))
    {
        /* Switch: '<S335>/Switch1' incorporates:
         *  Product: '<S335>/Division'
         */
        rtb_Switch1_ig /= rtb_Vector_ak;
    }
    else if (rtb_Switch1_ig > 0.0F)
    {
        /* Switch: '<S335>/Switch2' incorporates:
         *  Constant: '<S335>/MAXFLOAT'
         *  Switch: '<S335>/Switch1'
         */
        rtb_Switch1_ig = 3.402823466E+38F;
    }
    else if (rtb_Switch1_ig < 0.0F)
    {
        /* Switch: '<S335>/Switch3' incorporates:
         *  Constant: '<S335>/MINFLOAT'
         *  Switch: '<S335>/Switch1'
         *  Switch: '<S335>/Switch2'
         */
        rtb_Switch1_ig = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S335>/Switch1' incorporates:
         *  Constant: '<S335>/Constant Value4'
         *  Switch: '<S335>/Switch2'
         *  Switch: '<S335>/Switch3'
         */
        rtb_Switch1_ig = 0.0F;
    }

    /* End of Switch: '<S335>/Switch1' */
    /* End of Outputs for SubSystem: '<S330>/Protected Division2' */

    /* Outputs for Atomic SubSystem: '<S330>/Protected Division4' */
    /* Switch: '<S336>/Switch1' incorporates:
     *  Constant: '<S336>/Constant Value1'
     *  RelationalOperator: '<S336>/Not Equal1'
     */
    if (rtb_Vector_ak != 0.0F)
    {
        /* Switch: '<S336>/Switch1' incorporates:
         *  Constant: '<S330>/Constant Value2'
         *  Product: '<S336>/Division'
         */
        rtb_Vector_ak = 1.0F / rtb_Vector_ak;
    }
    else
    {
        /* Switch: '<S336>/Switch1' */
        rtb_Vector_ak = 3.402823466E+38F;
    }

    /* End of Switch: '<S336>/Switch1' */
    /* End of Outputs for SubSystem: '<S330>/Protected Division4' */

    /* Signum: '<S329>/Signum' */
    if (rtb_Vector_ak < 0.0F)
    {
        rtb_Switch1_nva = -1.0F;
    }
    else if (rtb_Vector_ak > 0.0F)
    {
        rtb_Switch1_nva = 1.0F;
    }
    else
    {
        rtb_Switch1_nva = rtb_Vector_ak;
    }

    /* End of Signum: '<S329>/Signum' */

    /* Sum: '<S329>/Sum3' incorporates:
     *  Constant: '<S329>/Constant Value'
     *  Gain: '<S330>/Gain1'
     *  Lookup_n-D: '<S333>/Vector'
     *  MinMax: '<S329>/MinMax1'
     *  Product: '<S329>/Product'
     *  Product: '<S329>/Product1'
     *  SignalConversion generated from: '<S1>/VeTCCR_r_RampFactor'
     *  Sqrt: '<S329>/Square Root'
     *  Sum: '<S329>/Sum2'
     *  Sum: '<S330>/Sum1'
     */
    rtb_Switch1_bi = ((sqrtf(fmaxf((rtb_MinMax1_b - (look1_iflf_binlca_16a
                           (rtb_TmpSignalConversionAtVeTCCR_r_RampFa,
                            (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsC_KxHSCR_r_TCC_TturbFromNC2_CoeffsC
        ()), (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsC_KtHSCR_r_TCC_TturbFromNC2_CoeffsC
              ()), 3U) - rtb_Switch1_ig)) * rtb_Vector_ak, 0.0F)) *
                       rtb_Switch1_nva) + (-rtb_Switch1_bi)) +
        rtb_TmpSignalConversionAtVeTCCR_r_RampFa;

    /* Outputs for Atomic SubSystem: '<S324>/Protected Division3' */
    /* Switch: '<S327>/Switch1' incorporates:
     *  Constant: '<S327>/Constant Value'
     *  Constant: '<S327>/Constant Value1'
     *  Constant: '<S327>/Constant Value2'
     *  Constant: '<S327>/Constant Value3'
     *  Logic: '<S327>/AND'
     *  RelationalOperator: '<S327>/Greater Than or Equal '
     *  RelationalOperator: '<S327>/Greater Than or Equal 1'
     *  RelationalOperator: '<S327>/Not Equal'
     *  RelationalOperator: '<S327>/Not Equal1'
     *  Switch: '<S327>/Switch2'
     *  Switch: '<S327>/Switch3'
     */
    if ((rtb_TmpSignalConversionAtVeTCCR_r_RampFa != 0.0F) && (rtb_Switch1_bi !=
         0.0F))
    {
        /* Switch: '<S327>/Switch1' incorporates:
         *  Product: '<S327>/Division'
         */
        rtb_Switch1_bi = rtb_TmpSignalConversionAtVeTCCR_r_RampFa /
            rtb_Switch1_bi;
    }
    else if (rtb_TmpSignalConversionAtVeTCCR_r_RampFa > 0.0F)
    {
        /* Switch: '<S327>/Switch2' incorporates:
         *  Constant: '<S327>/MAXFLOAT'
         *  Switch: '<S327>/Switch1'
         */
        rtb_Switch1_bi = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtVeTCCR_r_RampFa < 0.0F)
    {
        /* Switch: '<S327>/Switch3' incorporates:
         *  Constant: '<S327>/MINFLOAT'
         *  Switch: '<S327>/Switch1'
         *  Switch: '<S327>/Switch2'
         */
        rtb_Switch1_bi = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S327>/Switch1' incorporates:
         *  Constant: '<S327>/Constant Value4'
         *  Switch: '<S327>/Switch2'
         *  Switch: '<S327>/Switch3'
         */
        rtb_Switch1_bi = 0.0F;
    }

    /* End of Switch: '<S327>/Switch1' */
    /* End of Outputs for SubSystem: '<S324>/Protected Division3' */

    /* Lookup_n-D: '<S325>/Vector' incorporates:
     *  Switch: '<S327>/Switch1'
     */
    rtb_Switch1_bi = look1_iflf_binlca_16a(rtb_Switch1_bi,
        (Rte_Prm_KxHSCR_r_TCC_TorqRatio_KxHSCR_r_TCC_TorqRatio()),
        (Rte_Prm_KtHSCR_r_TCC_TorqRatio_KtHSCR_r_TCC_TorqRatio()), 17U);

    /* Outputs for Atomic SubSystem: '<S324>/Protected Division1' */
    /* Switch: '<S326>/Switch1' incorporates:
     *  Constant: '<S326>/Constant Value'
     *  Constant: '<S326>/Constant Value1'
     *  Constant: '<S326>/Constant Value2'
     *  Constant: '<S326>/Constant Value3'
     *  Logic: '<S326>/AND'
     *  RelationalOperator: '<S326>/Greater Than or Equal '
     *  RelationalOperator: '<S326>/Greater Than or Equal 1'
     *  RelationalOperator: '<S326>/Not Equal'
     *  RelationalOperator: '<S326>/Not Equal1'
     *  Switch: '<S326>/Switch2'
     *  Switch: '<S326>/Switch3'
     */
    if ((rtb_MinMax1_b != 0.0F) && (rtb_Switch1_bi != 0.0F))
    {
        /* Switch: '<S326>/Switch1' incorporates:
         *  Product: '<S326>/Division'
         */
        rtb_Switch1_bi = rtb_MinMax1_b / rtb_Switch1_bi;
    }
    else if (rtb_MinMax1_b > 0.0F)
    {
        /* Switch: '<S326>/Switch2' incorporates:
         *  Constant: '<S326>/MAXFLOAT'
         *  Switch: '<S326>/Switch1'
         */
        rtb_Switch1_bi = 3.402823466E+38F;
    }
    else if (rtb_MinMax1_b < 0.0F)
    {
        /* Switch: '<S326>/Switch3' incorporates:
         *  Constant: '<S326>/MINFLOAT'
         *  Switch: '<S326>/Switch1'
         *  Switch: '<S326>/Switch2'
         */
        rtb_Switch1_bi = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S326>/Switch1' incorporates:
         *  Constant: '<S326>/Constant Value4'
         *  Switch: '<S326>/Switch2'
         *  Switch: '<S326>/Switch3'
         */
        rtb_Switch1_bi = 0.0F;
    }

    /* End of Switch: '<S326>/Switch1' */
    /* End of Outputs for SubSystem: '<S324>/Protected Division1' */

    /* VariantMerge generated from: '<S320>/T_imp' incorporates:
     *  Product: '<S323>/Product4'
     *  Sum: '<S323>/Sum4'
     *  Sum: '<S323>/Sum5'
     */
    rtb_Switch1_bi = ((rtb_Switch1_bi - rtb_MinMax1_b) *
                      rtb_TmpSignalConversionAtVeVSDR_n_NTurbO) + rtb_MinMax1_b;

    /* End of Outputs for SubSystem: '<S320>/RTC_on' */
#else

    /* Outputs for Atomic SubSystem: '<S320>/RTC_off' */
    /* VariantMerge generated from: '<S320>/T_imp' incorporates:
     *  Inport: '<S321>/T_turb'
     */
    rtb_Switch1_bi = rtb_MinMax1_b;

    /* End of Outputs for SubSystem: '<S320>/RTC_off' */
#endif

    /* End of Outputs for SubSystem: '<S186>/VariantSubsystem' */

    /* Switch: '<S186>/Switch2' incorporates:
     *  Constant: '<S315>/Constant'
     *  Logic: '<S186>/Logical1'
     *  RelationalOperator: '<S186>/Comparison2'
     */
    if ((((uint32)Rte_Prm_HeTSXR_e_All_TactToDomain_HeTSXR_e_All_TactToDomain())
         == CeTSXR_e_SumDomain) && tmp)
    {
        /* Switch: '<S186>/Switch3' incorporates:
         *  Constant: '<S317>/Calib'
         */
        if (Rte_Prm_HeATRR_b_RTC_Enbl_HeATRR_b_RTC_Enbl())
        {
            rtb_MinMax1_b = rtb_Switch1_bi;
        }

        /* End of Switch: '<S186>/Switch3' */

        /* MinMax: '<S9>/MinMax34' incorporates:
         *  Sum: '<S186>/Sum'
         */
        rtb_MinMax1_b += rtb_TmpSignalConversionAtVeTTIR_M_PumpTr;
    }

    /* End of Switch: '<S186>/Switch2' */

    /* MinMax: '<S9>/MinMax34' incorporates:
     *  MinMax: '<S9>/MinMax31'
     */
    rtb_MinMax1_b = fminf(rtb_Switch_l_idx_0, rtb_MinMax1_b);

    /* MinMax: '<S9>/MinMax17' */
    VeATRC_M_OutputTorqueReqHTDRCnvt = fmaxf(rtb_Switch1_cv, rtb_MinMax1_b);

    /* Switch: '<S189>/Switch' incorporates:
     *  Constant: '<S189>/ConstantValue4'
     *  Inport: '<Root>/VeWTAR_M_ToAxle_xSEM'
     *  RelationalOperator: '<S189>/GreaterThan1'
     */
    if (rtb_VeATRR_r_Tact2Wheel < 0.01F)
    {
        /* Switch: '<S189>/Switch' incorporates:
         *  Constant: '<S189>/ConstantValue2'
         */
        rtb_MinMax1_b = 0.0F;
    }
    else
    {
        (void)Rte_Read_VeWTAR_M_ToAxle_xSEM_Value(&rtb_Vector_k);

        /* MinMax: '<S9>/MinMax29' incorporates:
         *  Inport: '<Root>/VeWTAR_M_ToAxle_xSEM'
         *  MinMax: '<S9>/MinMax30'
         */
        rtb_MinMax1_b = fminf(rtb_TmpSignalConversionAtVeWTAR_M_Typ1Ma, fmaxf
                              (rtb_TmpSignalConversionAtVeWTAR_M_Typ1Mi,
                               rtb_Vector_k));

        /* Outputs for Atomic SubSystem: '<S189>/ProtectedDivision2' */
        /* Switch: '<S385>/Switch1' incorporates:
         *  Constant: '<S385>/Constant Value'
         *  RelationalOperator: '<S385>/Not Equal'
         */
        if (rtb_MinMax1_b != 0.0F)
        {
            /* Switch: '<S189>/Switch' incorporates:
             *  Product: '<S385>/Division'
             *  Switch: '<S385>/Switch1'
             */
            rtb_MinMax1_b /= rtb_VeATRR_r_Tact2Wheel;
        }
        else
        {
            /* Switch: '<S189>/Switch' incorporates:
             *  Constant: '<S385>/Constant Value4'
             *  Switch: '<S385>/Switch2'
             *  Switch: '<S385>/Switch3'
             */
            rtb_MinMax1_b = 0.0F;
        }

        /* End of Switch: '<S385>/Switch1' */
        /* End of Outputs for SubSystem: '<S189>/ProtectedDivision2' */
    }

    /* End of Switch: '<S189>/Switch' */

    /* Outputs for Atomic SubSystem: '<S189>/VariantSubsystem' */
#if Rte_SysCon_Variant_ATRR_RTC_On

    /* Outputs for Atomic SubSystem: '<S386>/RTC_on' */
    /* Gain: '<S396>/Gain' incorporates:
     *  Lookup_n-D: '<S398>/Vector'
     *  SignalConversion generated from: '<S1>/VeTCCR_r_RampFactor'
     */
    rtb_Switch1_bi = 0.5F * look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeTCCR_r_RampFa,
         (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsB_KxHSCR_r_TCC_TturbFromNC2_CoeffsB
          ()),
         (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsB_KtHSCR_r_TCC_TturbFromNC2_CoeffsB
          ()), 21U);

    /* Lookup_n-D: '<S397>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeTCCR_r_RampFactor'
     */
    rtb_Vector_k = look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeTCCR_r_RampFa,
         (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsA_KxHSCR_r_TCC_TturbFromNC2_CoeffsA
          ()),
         (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsA_KtHSCR_r_TCC_TturbFromNC2_CoeffsA
          ()), 21U);

    /* Outputs for Atomic SubSystem: '<S396>/Protected Division1' */
    /* Switch: '<S400>/Switch1' incorporates:
     *  Constant: '<S400>/Constant Value'
     *  Constant: '<S400>/Constant Value1'
     *  Constant: '<S400>/Constant Value2'
     *  Constant: '<S400>/Constant Value3'
     *  Logic: '<S400>/AND'
     *  RelationalOperator: '<S400>/Greater Than or Equal '
     *  RelationalOperator: '<S400>/Greater Than or Equal 1'
     *  RelationalOperator: '<S400>/Not Equal'
     *  RelationalOperator: '<S400>/Not Equal1'
     *  Switch: '<S400>/Switch2'
     *  Switch: '<S400>/Switch3'
     */
    if ((rtb_Switch1_bi != 0.0F) && (rtb_Vector_k != 0.0F))
    {
        /* Switch: '<S400>/Switch1' incorporates:
         *  Product: '<S400>/Division'
         */
        rtb_Switch1_l3 = rtb_Switch1_bi / rtb_Vector_k;
    }
    else if (rtb_Switch1_bi > 0.0F)
    {
        /* Switch: '<S400>/Switch2' incorporates:
         *  Constant: '<S400>/MAXFLOAT'
         *  Switch: '<S400>/Switch1'
         */
        rtb_Switch1_l3 = 3.402823466E+38F;
    }
    else if (rtb_Switch1_bi < 0.0F)
    {
        /* Switch: '<S400>/Switch3' incorporates:
         *  Constant: '<S400>/MINFLOAT'
         *  Switch: '<S400>/Switch1'
         *  Switch: '<S400>/Switch2'
         */
        rtb_Switch1_l3 = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S400>/Switch1' incorporates:
         *  Constant: '<S400>/Constant Value4'
         *  Switch: '<S400>/Switch2'
         *  Switch: '<S400>/Switch3'
         */
        rtb_Switch1_l3 = 0.0F;
    }

    /* End of Switch: '<S400>/Switch1' */
    /* End of Outputs for SubSystem: '<S396>/Protected Division1' */

    /* Product: '<S396>/Product1' */
    rtb_Switch1_bi *= rtb_Switch1_bi;

    /* Outputs for Atomic SubSystem: '<S396>/Protected Division2' */
    /* Switch: '<S401>/Switch1' incorporates:
     *  Constant: '<S401>/Constant Value'
     *  Constant: '<S401>/Constant Value1'
     *  Constant: '<S401>/Constant Value2'
     *  Constant: '<S401>/Constant Value3'
     *  Logic: '<S401>/AND'
     *  RelationalOperator: '<S401>/Greater Than or Equal '
     *  RelationalOperator: '<S401>/Greater Than or Equal 1'
     *  RelationalOperator: '<S401>/Not Equal'
     *  RelationalOperator: '<S401>/Not Equal1'
     *  Switch: '<S401>/Switch2'
     *  Switch: '<S401>/Switch3'
     */
    if ((rtb_Switch1_bi != 0.0F) && (rtb_Vector_k != 0.0F))
    {
        /* Switch: '<S401>/Switch1' incorporates:
         *  Product: '<S401>/Division'
         */
        rtb_Switch1_bi /= rtb_Vector_k;
    }
    else if (rtb_Switch1_bi > 0.0F)
    {
        /* Switch: '<S401>/Switch2' incorporates:
         *  Constant: '<S401>/MAXFLOAT'
         *  Switch: '<S401>/Switch1'
         */
        rtb_Switch1_bi = 3.402823466E+38F;
    }
    else if (rtb_Switch1_bi < 0.0F)
    {
        /* Switch: '<S401>/Switch3' incorporates:
         *  Constant: '<S401>/MINFLOAT'
         *  Switch: '<S401>/Switch1'
         *  Switch: '<S401>/Switch2'
         */
        rtb_Switch1_bi = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S401>/Switch1' incorporates:
         *  Constant: '<S401>/Constant Value4'
         *  Switch: '<S401>/Switch2'
         *  Switch: '<S401>/Switch3'
         */
        rtb_Switch1_bi = 0.0F;
    }

    /* End of Switch: '<S401>/Switch1' */
    /* End of Outputs for SubSystem: '<S396>/Protected Division2' */

    /* Outputs for Atomic SubSystem: '<S396>/Protected Division4' */
    /* Switch: '<S402>/Switch1' incorporates:
     *  Constant: '<S402>/Constant Value1'
     *  RelationalOperator: '<S402>/Not Equal1'
     */
    if (rtb_Vector_k != 0.0F)
    {
        /* Switch: '<S402>/Switch1' incorporates:
         *  Constant: '<S396>/Constant Value2'
         *  Product: '<S402>/Division'
         */
        rtb_Vector_k = 1.0F / rtb_Vector_k;
    }
    else
    {
        /* Switch: '<S402>/Switch1' */
        rtb_Vector_k = 3.402823466E+38F;
    }

    /* End of Switch: '<S402>/Switch1' */
    /* End of Outputs for SubSystem: '<S396>/Protected Division4' */

    /* Signum: '<S395>/Signum' */
    if (rtb_Vector_k < 0.0F)
    {
        rtb_Vector_ak = -1.0F;
    }
    else if (rtb_Vector_k > 0.0F)
    {
        rtb_Vector_ak = 1.0F;
    }
    else
    {
        rtb_Vector_ak = rtb_Vector_k;
    }

    /* End of Signum: '<S395>/Signum' */

    /* Sum: '<S395>/Sum3' incorporates:
     *  Constant: '<S395>/Constant Value'
     *  Gain: '<S396>/Gain1'
     *  Lookup_n-D: '<S399>/Vector'
     *  MinMax: '<S395>/MinMax1'
     *  Product: '<S395>/Product'
     *  Product: '<S395>/Product1'
     *  SignalConversion generated from: '<S1>/VeTCCR_r_RampFactor'
     *  Sqrt: '<S395>/Square Root'
     *  Sum: '<S395>/Sum2'
     *  Sum: '<S396>/Sum1'
     */
    rtb_Switch1_l3 = ((sqrtf(fmaxf((rtb_MinMax1_b - (look1_iflf_binlca_16a
                           (rtb_TmpSignalConversionAtVeTCCR_r_RampFa,
                            (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsC_KxHSCR_r_TCC_TturbFromNC2_CoeffsC
        ()), (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsC_KtHSCR_r_TCC_TturbFromNC2_CoeffsC
              ()), 3U) - rtb_Switch1_bi)) * rtb_Vector_k, 0.0F)) * rtb_Vector_ak)
                      + (-rtb_Switch1_l3)) +
        rtb_TmpSignalConversionAtVeTCCR_r_RampFa;

    /* Outputs for Atomic SubSystem: '<S390>/Protected Division3' */
    /* Switch: '<S393>/Switch1' incorporates:
     *  Constant: '<S393>/Constant Value'
     *  Constant: '<S393>/Constant Value1'
     *  Constant: '<S393>/Constant Value2'
     *  Constant: '<S393>/Constant Value3'
     *  Logic: '<S393>/AND'
     *  RelationalOperator: '<S393>/Greater Than or Equal '
     *  RelationalOperator: '<S393>/Greater Than or Equal 1'
     *  RelationalOperator: '<S393>/Not Equal'
     *  RelationalOperator: '<S393>/Not Equal1'
     *  Switch: '<S393>/Switch2'
     *  Switch: '<S393>/Switch3'
     */
    if ((rtb_TmpSignalConversionAtVeTCCR_r_RampFa != 0.0F) && (rtb_Switch1_l3 !=
         0.0F))
    {
        /* Switch: '<S393>/Switch1' incorporates:
         *  Product: '<S393>/Division'
         */
        rtb_Switch1_l3 = rtb_TmpSignalConversionAtVeTCCR_r_RampFa /
            rtb_Switch1_l3;
    }
    else if (rtb_TmpSignalConversionAtVeTCCR_r_RampFa > 0.0F)
    {
        /* Switch: '<S393>/Switch2' incorporates:
         *  Constant: '<S393>/MAXFLOAT'
         *  Switch: '<S393>/Switch1'
         */
        rtb_Switch1_l3 = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtVeTCCR_r_RampFa < 0.0F)
    {
        /* Switch: '<S393>/Switch3' incorporates:
         *  Constant: '<S393>/MINFLOAT'
         *  Switch: '<S393>/Switch1'
         *  Switch: '<S393>/Switch2'
         */
        rtb_Switch1_l3 = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S393>/Switch1' incorporates:
         *  Constant: '<S393>/Constant Value4'
         *  Switch: '<S393>/Switch2'
         *  Switch: '<S393>/Switch3'
         */
        rtb_Switch1_l3 = 0.0F;
    }

    /* End of Switch: '<S393>/Switch1' */
    /* End of Outputs for SubSystem: '<S390>/Protected Division3' */

    /* Lookup_n-D: '<S391>/Vector' incorporates:
     *  Switch: '<S393>/Switch1'
     */
    rtb_Switch1_l3 = look1_iflf_binlca_16a(rtb_Switch1_l3,
        (Rte_Prm_KxHSCR_r_TCC_TorqRatio_KxHSCR_r_TCC_TorqRatio()),
        (Rte_Prm_KtHSCR_r_TCC_TorqRatio_KtHSCR_r_TCC_TorqRatio()), 17U);

    /* Outputs for Atomic SubSystem: '<S390>/Protected Division1' */
    /* Switch: '<S392>/Switch1' incorporates:
     *  Constant: '<S392>/Constant Value'
     *  Constant: '<S392>/Constant Value1'
     *  Constant: '<S392>/Constant Value2'
     *  Constant: '<S392>/Constant Value3'
     *  Logic: '<S392>/AND'
     *  RelationalOperator: '<S392>/Greater Than or Equal '
     *  RelationalOperator: '<S392>/Greater Than or Equal 1'
     *  RelationalOperator: '<S392>/Not Equal'
     *  RelationalOperator: '<S392>/Not Equal1'
     *  Switch: '<S392>/Switch2'
     *  Switch: '<S392>/Switch3'
     */
    if ((rtb_MinMax1_b != 0.0F) && (rtb_Switch1_l3 != 0.0F))
    {
        /* Switch: '<S392>/Switch1' incorporates:
         *  Product: '<S392>/Division'
         */
        rtb_Switch1_l3 = rtb_MinMax1_b / rtb_Switch1_l3;
    }
    else if (rtb_MinMax1_b > 0.0F)
    {
        /* Switch: '<S392>/Switch2' incorporates:
         *  Constant: '<S392>/MAXFLOAT'
         *  Switch: '<S392>/Switch1'
         */
        rtb_Switch1_l3 = 3.402823466E+38F;
    }
    else if (rtb_MinMax1_b < 0.0F)
    {
        /* Switch: '<S392>/Switch3' incorporates:
         *  Constant: '<S392>/MINFLOAT'
         *  Switch: '<S392>/Switch1'
         *  Switch: '<S392>/Switch2'
         */
        rtb_Switch1_l3 = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S392>/Switch1' incorporates:
         *  Constant: '<S392>/Constant Value4'
         *  Switch: '<S392>/Switch2'
         *  Switch: '<S392>/Switch3'
         */
        rtb_Switch1_l3 = 0.0F;
    }

    /* End of Switch: '<S392>/Switch1' */
    /* End of Outputs for SubSystem: '<S390>/Protected Division1' */

    /* VariantMerge generated from: '<S386>/T_imp' incorporates:
     *  Product: '<S389>/Product4'
     *  Sum: '<S389>/Sum4'
     *  Sum: '<S389>/Sum5'
     */
    rtb_Switch1_l3 = ((rtb_Switch1_l3 - rtb_MinMax1_b) *
                      rtb_TmpSignalConversionAtVeVSDR_n_NTurbO) + rtb_MinMax1_b;

    /* End of Outputs for SubSystem: '<S386>/RTC_on' */
#else

    /* Outputs for Atomic SubSystem: '<S386>/RTC_off' */
    /* VariantMerge generated from: '<S386>/T_imp' incorporates:
     *  Inport: '<S387>/T_turb'
     */
    rtb_Switch1_l3 = rtb_MinMax1_b;

    /* End of Outputs for SubSystem: '<S386>/RTC_off' */
#endif

    /* End of Outputs for SubSystem: '<S189>/VariantSubsystem' */

    /* Switch: '<S189>/Switch2' incorporates:
     *  Constant: '<S381>/Constant'
     *  Logic: '<S189>/Logical1'
     *  RelationalOperator: '<S189>/Comparison2'
     */
    if ((((uint32)Rte_Prm_HeTSXR_e_All_TactToDomain_HeTSXR_e_All_TactToDomain())
         == CeTSXR_e_SumDomain) && tmp)
    {
        /* Switch: '<S189>/Switch3' incorporates:
         *  Constant: '<S383>/Calib'
         */
        if (Rte_Prm_HeATRR_b_RTC_Enbl_HeATRR_b_RTC_Enbl())
        {
            rtb_MinMax1_b = rtb_Switch1_l3;
        }

        /* End of Switch: '<S189>/Switch3' */

        /* MinMax: '<S9>/MinMax34' incorporates:
         *  Sum: '<S189>/Sum'
         */
        rtb_MinMax1_b += rtb_TmpSignalConversionAtVeTTIR_M_PumpTr;
    }

    /* End of Switch: '<S189>/Switch2' */

    /* MinMax: '<S9>/MinMax34' */
    rtb_MinMax1_b = fminf(rtb_Switch_l_idx_0, rtb_MinMax1_b);

    /* MinMax: '<S9>/MinMax35' */
    VeATRC_M_To_xSEMxUndSht = fmaxf(rtb_TmpSignalConversionAtVeSCCR_M_Output,
        rtb_MinMax1_b);

    /* MinMax: '<S9>/MinMax33' */
    VeATRC_M_OutTrqReqImmWithoutSEM = fmaxf
        (rtb_TmpSignalConversionAtVeCTCR_M_MinCre, VeATRC_M_To_xSEMxUndSht);

    /* Switch: '<S190>/Switch' incorporates:
     *  Constant: '<S190>/ConstantValue4'
     *  Inport: '<Root>/VeWTAR_M_ToNet_Arb_xSEM_OvrSpd'
     *  RelationalOperator: '<S190>/GreaterThan1'
     */
    if (rtb_VeATRR_r_Tact2Wheel < 0.01F)
    {
        /* Switch: '<S190>/Switch' incorporates:
         *  Constant: '<S190>/ConstantValue2'
         */
        rtb_MinMax25 = 0.0F;
    }
    else
    {
        (void)Rte_Read_VeWTAR_M_ToNet_Arb_xSEM_OvrSpd_Value(&rtb_MinMax25);

        /* MinMax: '<S9>/MinMax25' incorporates:
         *  Inport: '<Root>/VeWTAR_M_ToNet_Arb_xSEM_OvrSpd'
         *  MinMax: '<S9>/MinMax27'
         */
        rtb_MinMax25 = fminf(rtb_TmpSignalConversionAtVeWTAR_M_Typ1Ma, fmaxf
                             (rtb_TmpSignalConversionAtVeWTAR_M_Typ1Mi,
                              rtb_MinMax25));

        /* Outputs for Atomic SubSystem: '<S190>/ProtectedDivision2' */
        /* Switch: '<S407>/Switch1' incorporates:
         *  Constant: '<S407>/Constant Value'
         *  RelationalOperator: '<S407>/Not Equal'
         */
        if (rtb_MinMax25 != 0.0F)
        {
            /* Switch: '<S190>/Switch' incorporates:
             *  Product: '<S407>/Division'
             *  Switch: '<S407>/Switch1'
             */
            rtb_MinMax25 /= rtb_VeATRR_r_Tact2Wheel;
        }
        else
        {
            /* Switch: '<S190>/Switch' incorporates:
             *  Constant: '<S407>/Constant Value4'
             *  Switch: '<S407>/Switch2'
             *  Switch: '<S407>/Switch3'
             */
            rtb_MinMax25 = 0.0F;
        }

        /* End of Switch: '<S407>/Switch1' */
        /* End of Outputs for SubSystem: '<S190>/ProtectedDivision2' */
    }

    /* End of Switch: '<S190>/Switch' */

    /* Outputs for Atomic SubSystem: '<S190>/VariantSubsystem' */
#if Rte_SysCon_Variant_ATRR_RTC_On

    /* Outputs for Atomic SubSystem: '<S408>/RTC_on' */
    /* Gain: '<S418>/Gain' incorporates:
     *  Lookup_n-D: '<S420>/Vector'
     *  SignalConversion generated from: '<S1>/VeTCCR_r_RampFactor'
     */
    rtb_Vector_k = 0.5F * look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeTCCR_r_RampFa,
         (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsB_KxHSCR_r_TCC_TturbFromNC2_CoeffsB
          ()),
         (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsB_KtHSCR_r_TCC_TturbFromNC2_CoeffsB
          ()), 21U);

    /* Lookup_n-D: '<S419>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeTCCR_r_RampFactor'
     */
    rtb_Switch1_l3 = look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeTCCR_r_RampFa,
         (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsA_KxHSCR_r_TCC_TturbFromNC2_CoeffsA
          ()),
         (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsA_KtHSCR_r_TCC_TturbFromNC2_CoeffsA
          ()), 21U);

    /* Outputs for Atomic SubSystem: '<S418>/Protected Division1' */
    /* Switch: '<S422>/Switch1' incorporates:
     *  Constant: '<S422>/Constant Value'
     *  Constant: '<S422>/Constant Value1'
     *  Constant: '<S422>/Constant Value2'
     *  Constant: '<S422>/Constant Value3'
     *  Logic: '<S422>/AND'
     *  RelationalOperator: '<S422>/Greater Than or Equal '
     *  RelationalOperator: '<S422>/Greater Than or Equal 1'
     *  RelationalOperator: '<S422>/Not Equal'
     *  RelationalOperator: '<S422>/Not Equal1'
     *  Switch: '<S422>/Switch2'
     *  Switch: '<S422>/Switch3'
     */
    if ((rtb_Vector_k != 0.0F) && (rtb_Switch1_l3 != 0.0F))
    {
        /* Switch: '<S422>/Switch1' incorporates:
         *  Product: '<S422>/Division'
         */
        rtb_Switch1_ll = rtb_Vector_k / rtb_Switch1_l3;
    }
    else if (rtb_Vector_k > 0.0F)
    {
        /* Switch: '<S422>/Switch2' incorporates:
         *  Constant: '<S422>/MAXFLOAT'
         *  Switch: '<S422>/Switch1'
         */
        rtb_Switch1_ll = 3.402823466E+38F;
    }
    else if (rtb_Vector_k < 0.0F)
    {
        /* Switch: '<S422>/Switch3' incorporates:
         *  Constant: '<S422>/MINFLOAT'
         *  Switch: '<S422>/Switch1'
         *  Switch: '<S422>/Switch2'
         */
        rtb_Switch1_ll = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S422>/Switch1' incorporates:
         *  Constant: '<S422>/Constant Value4'
         *  Switch: '<S422>/Switch2'
         *  Switch: '<S422>/Switch3'
         */
        rtb_Switch1_ll = 0.0F;
    }

    /* End of Switch: '<S422>/Switch1' */
    /* End of Outputs for SubSystem: '<S418>/Protected Division1' */

    /* Product: '<S418>/Product1' */
    rtb_Vector_k *= rtb_Vector_k;

    /* Outputs for Atomic SubSystem: '<S418>/Protected Division2' */
    /* Switch: '<S423>/Switch1' incorporates:
     *  Constant: '<S423>/Constant Value'
     *  Constant: '<S423>/Constant Value1'
     *  Constant: '<S423>/Constant Value2'
     *  Constant: '<S423>/Constant Value3'
     *  Logic: '<S423>/AND'
     *  RelationalOperator: '<S423>/Greater Than or Equal '
     *  RelationalOperator: '<S423>/Greater Than or Equal 1'
     *  RelationalOperator: '<S423>/Not Equal'
     *  RelationalOperator: '<S423>/Not Equal1'
     *  Switch: '<S423>/Switch2'
     *  Switch: '<S423>/Switch3'
     */
    if ((rtb_Vector_k != 0.0F) && (rtb_Switch1_l3 != 0.0F))
    {
        /* Switch: '<S423>/Switch1' incorporates:
         *  Product: '<S423>/Division'
         */
        rtb_Vector_k /= rtb_Switch1_l3;
    }
    else if (rtb_Vector_k > 0.0F)
    {
        /* Switch: '<S423>/Switch2' incorporates:
         *  Constant: '<S423>/MAXFLOAT'
         *  Switch: '<S423>/Switch1'
         */
        rtb_Vector_k = 3.402823466E+38F;
    }
    else if (rtb_Vector_k < 0.0F)
    {
        /* Switch: '<S423>/Switch3' incorporates:
         *  Constant: '<S423>/MINFLOAT'
         *  Switch: '<S423>/Switch1'
         *  Switch: '<S423>/Switch2'
         */
        rtb_Vector_k = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S423>/Switch1' incorporates:
         *  Constant: '<S423>/Constant Value4'
         *  Switch: '<S423>/Switch2'
         *  Switch: '<S423>/Switch3'
         */
        rtb_Vector_k = 0.0F;
    }

    /* End of Switch: '<S423>/Switch1' */
    /* End of Outputs for SubSystem: '<S418>/Protected Division2' */

    /* Outputs for Atomic SubSystem: '<S418>/Protected Division4' */
    /* Switch: '<S424>/Switch1' incorporates:
     *  Constant: '<S424>/Constant Value1'
     *  RelationalOperator: '<S424>/Not Equal1'
     */
    if (rtb_Switch1_l3 != 0.0F)
    {
        /* Switch: '<S424>/Switch1' incorporates:
         *  Constant: '<S418>/Constant Value2'
         *  Product: '<S424>/Division'
         */
        rtb_Switch1_l3 = 1.0F / rtb_Switch1_l3;
    }
    else
    {
        /* Switch: '<S424>/Switch1' */
        rtb_Switch1_l3 = 3.402823466E+38F;
    }

    /* End of Switch: '<S424>/Switch1' */
    /* End of Outputs for SubSystem: '<S418>/Protected Division4' */

    /* Signum: '<S417>/Signum' */
    if (rtb_Switch1_l3 < 0.0F)
    {
        rtb_Switch1_bi = -1.0F;
    }
    else if (rtb_Switch1_l3 > 0.0F)
    {
        rtb_Switch1_bi = 1.0F;
    }
    else
    {
        rtb_Switch1_bi = rtb_Switch1_l3;
    }

    /* End of Signum: '<S417>/Signum' */

    /* Sum: '<S417>/Sum3' incorporates:
     *  Constant: '<S417>/Constant Value'
     *  Gain: '<S418>/Gain1'
     *  Lookup_n-D: '<S421>/Vector'
     *  MinMax: '<S417>/MinMax1'
     *  Product: '<S417>/Product'
     *  Product: '<S417>/Product1'
     *  SignalConversion generated from: '<S1>/VeTCCR_r_RampFactor'
     *  Sqrt: '<S417>/Square Root'
     *  Sum: '<S417>/Sum2'
     *  Sum: '<S418>/Sum1'
     */
    rtb_Switch1_ll = ((sqrtf(fmaxf((rtb_MinMax25 - (look1_iflf_binlca_16a
                           (rtb_TmpSignalConversionAtVeTCCR_r_RampFa,
                            (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsC_KxHSCR_r_TCC_TturbFromNC2_CoeffsC
        ()), (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsC_KtHSCR_r_TCC_TturbFromNC2_CoeffsC
              ()), 3U) - rtb_Vector_k)) * rtb_Switch1_l3, 0.0F)) *
                       rtb_Switch1_bi) + (-rtb_Switch1_ll)) +
        rtb_TmpSignalConversionAtVeTCCR_r_RampFa;

    /* Outputs for Atomic SubSystem: '<S412>/Protected Division3' */
    /* Switch: '<S415>/Switch1' incorporates:
     *  Constant: '<S415>/Constant Value'
     *  Constant: '<S415>/Constant Value1'
     *  Constant: '<S415>/Constant Value2'
     *  Constant: '<S415>/Constant Value3'
     *  Logic: '<S415>/AND'
     *  RelationalOperator: '<S415>/Greater Than or Equal '
     *  RelationalOperator: '<S415>/Greater Than or Equal 1'
     *  RelationalOperator: '<S415>/Not Equal'
     *  RelationalOperator: '<S415>/Not Equal1'
     *  Switch: '<S415>/Switch2'
     *  Switch: '<S415>/Switch3'
     */
    if ((rtb_TmpSignalConversionAtVeTCCR_r_RampFa != 0.0F) && (rtb_Switch1_ll !=
         0.0F))
    {
        /* Switch: '<S415>/Switch1' incorporates:
         *  Product: '<S415>/Division'
         */
        rtb_Switch1_ll = rtb_TmpSignalConversionAtVeTCCR_r_RampFa /
            rtb_Switch1_ll;
    }
    else if (rtb_TmpSignalConversionAtVeTCCR_r_RampFa > 0.0F)
    {
        /* Switch: '<S415>/Switch2' incorporates:
         *  Constant: '<S415>/MAXFLOAT'
         *  Switch: '<S415>/Switch1'
         */
        rtb_Switch1_ll = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtVeTCCR_r_RampFa < 0.0F)
    {
        /* Switch: '<S415>/Switch3' incorporates:
         *  Constant: '<S415>/MINFLOAT'
         *  Switch: '<S415>/Switch1'
         *  Switch: '<S415>/Switch2'
         */
        rtb_Switch1_ll = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S415>/Switch1' incorporates:
         *  Constant: '<S415>/Constant Value4'
         *  Switch: '<S415>/Switch2'
         *  Switch: '<S415>/Switch3'
         */
        rtb_Switch1_ll = 0.0F;
    }

    /* End of Switch: '<S415>/Switch1' */
    /* End of Outputs for SubSystem: '<S412>/Protected Division3' */

    /* Lookup_n-D: '<S413>/Vector' incorporates:
     *  Switch: '<S415>/Switch1'
     */
    rtb_Switch1_ll = look1_iflf_binlca_16a(rtb_Switch1_ll,
        (Rte_Prm_KxHSCR_r_TCC_TorqRatio_KxHSCR_r_TCC_TorqRatio()),
        (Rte_Prm_KtHSCR_r_TCC_TorqRatio_KtHSCR_r_TCC_TorqRatio()), 17U);

    /* Outputs for Atomic SubSystem: '<S412>/Protected Division1' */
    /* Switch: '<S414>/Switch1' incorporates:
     *  Constant: '<S414>/Constant Value'
     *  Constant: '<S414>/Constant Value1'
     *  Constant: '<S414>/Constant Value2'
     *  Constant: '<S414>/Constant Value3'
     *  Logic: '<S414>/AND'
     *  RelationalOperator: '<S414>/Greater Than or Equal '
     *  RelationalOperator: '<S414>/Greater Than or Equal 1'
     *  RelationalOperator: '<S414>/Not Equal'
     *  RelationalOperator: '<S414>/Not Equal1'
     *  Switch: '<S414>/Switch2'
     *  Switch: '<S414>/Switch3'
     */
    if ((rtb_MinMax25 != 0.0F) && (rtb_Switch1_ll != 0.0F))
    {
        /* Switch: '<S414>/Switch1' incorporates:
         *  Product: '<S414>/Division'
         */
        rtb_Switch1_ll = rtb_MinMax25 / rtb_Switch1_ll;
    }
    else if (rtb_MinMax25 > 0.0F)
    {
        /* Switch: '<S414>/Switch2' incorporates:
         *  Constant: '<S414>/MAXFLOAT'
         *  Switch: '<S414>/Switch1'
         */
        rtb_Switch1_ll = 3.402823466E+38F;
    }
    else if (rtb_MinMax25 < 0.0F)
    {
        /* Switch: '<S414>/Switch3' incorporates:
         *  Constant: '<S414>/MINFLOAT'
         *  Switch: '<S414>/Switch1'
         *  Switch: '<S414>/Switch2'
         */
        rtb_Switch1_ll = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S414>/Switch1' incorporates:
         *  Constant: '<S414>/Constant Value4'
         *  Switch: '<S414>/Switch2'
         *  Switch: '<S414>/Switch3'
         */
        rtb_Switch1_ll = 0.0F;
    }

    /* End of Switch: '<S414>/Switch1' */
    /* End of Outputs for SubSystem: '<S412>/Protected Division1' */

    /* VariantMerge generated from: '<S408>/T_imp' incorporates:
     *  Product: '<S411>/Product4'
     *  Sum: '<S411>/Sum4'
     *  Sum: '<S411>/Sum5'
     */
    rtb_Switch1_ll = ((rtb_Switch1_ll - rtb_MinMax25) *
                      rtb_TmpSignalConversionAtVeVSDR_n_NTurbO) + rtb_MinMax25;

    /* End of Outputs for SubSystem: '<S408>/RTC_on' */
#else

    /* Outputs for Atomic SubSystem: '<S408>/RTC_off' */
    /* VariantMerge generated from: '<S408>/T_imp' incorporates:
     *  Inport: '<S409>/T_turb'
     */
    rtb_Switch1_ll = rtb_MinMax25;

    /* End of Outputs for SubSystem: '<S408>/RTC_off' */
#endif

    /* End of Outputs for SubSystem: '<S190>/VariantSubsystem' */

    /* Switch: '<S190>/Switch2' incorporates:
     *  Constant: '<S403>/Constant'
     *  Logic: '<S190>/Logical1'
     *  RelationalOperator: '<S190>/Comparison2'
     */
    if ((((uint32)Rte_Prm_HeTSXR_e_All_TactToDomain_HeTSXR_e_All_TactToDomain())
         == CeTSXR_e_SumDomain) && tmp)
    {
        /* Switch: '<S190>/Switch3' incorporates:
         *  Constant: '<S405>/Calib'
         */
        if (Rte_Prm_HeATRR_b_RTC_Enbl_HeATRR_b_RTC_Enbl())
        {
            rtb_MinMax25 = rtb_Switch1_ll;
        }

        /* End of Switch: '<S190>/Switch3' */

        /* Switch: '<S203>/Switch2' incorporates:
         *  Sum: '<S190>/Sum'
         */
        rtb_MinMax25 += rtb_TmpSignalConversionAtVeTTIR_M_PumpTr;
    }

    /* End of Switch: '<S190>/Switch2' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSCCR_M_ESCSumMin' */
    (void)Rte_Read_VeSCCR_M_ESCSumMin_Value(&rtb_Gain_b);

    /* Inport: '<Root>/VeSCCR_M_ESCSumMax' */
    (void)Rte_Read_VeSCCR_M_ESCSumMax_Value(&rtb_MinMax5);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/ATRR_MedTEB'
     */
    /* Switch: '<S203>/Switch2' incorporates:
     *  MinMax: '<S9>/MinMax36'
     */
    rtb_MinMax25 = fminf(rtb_Switch_l_idx_0, rtb_MinMax25);

    /* MinMax: '<S9>/MinMax16' */
    VeATRC_M_ToArb_xSEM = fmaxf(rtb_TmpSignalConversionAtVeSCCR_M_Output,
        rtb_MinMax25);

    /* MinMax: '<S3>/Max1' incorporates:
     *  MinMax: '<S3>/Max'
     *  MinMax: '<S3>/Min'
     */
    rtb_Max1[0] = fminf(rtb_TmpSignalConversionAtVeTTQR_M_SumMax, fmaxf(fmaxf
                         (rtb_Gain_b, fminf(fminf(rtb_MinMax5,
                            VeATRC_M_ToReqPot_Cnvt), rtb_Switch_l_idx_0)),
                         rtb_TmpSignalConversionAtVeSCCR_M_Output));
    rtb_Max1[1] = fminf(rtb_TmpSignalConversionAtVeTTQR_M_SumMax, fmaxf(fmaxf
                         (rtb_Gain_b, fminf(fminf(rtb_MinMax5,
                            VeATRC_M_ToReq_PreSEM), rtb_Switch_l_idx_0)),
                         rtb_TmpSignalConversionAtVeSCCR_M_Output));
    rtb_Max1[2] = fminf(rtb_TmpSignalConversionAtVeTTQR_M_SumMax, fmaxf(fmaxf
                         (rtb_Gain_b, fminf(fminf(rtb_MinMax5,
                            VeATRC_M_OutputTorqueReqHTDRCnvt),
                           rtb_Switch_l_idx_0)),
                         rtb_TmpSignalConversionAtVeSCCR_M_Output));
    rtb_Max1[3] = fminf(rtb_TmpSignalConversionAtVeTTQR_M_SumMax, fmaxf(fmaxf
                         (rtb_Gain_b, fminf(fminf(rtb_MinMax5,
                            VeATRC_M_OutTrqReqImmWithoutSEM), rtb_Switch_l_idx_0)),
                         rtb_TmpSignalConversionAtVeSCCR_M_Output));
    rtb_Max1[4] = fminf(rtb_TmpSignalConversionAtVeTTQR_M_SumMax, fmaxf(fmaxf
                         (rtb_Gain_b, fminf(fminf(rtb_MinMax5,
                            VeATRC_M_To_xSEMxUndSht), rtb_Switch_l_idx_0)),
                         rtb_TmpSignalConversionAtVeSCCR_M_Output));
    rtb_Max1[5] = fminf(rtb_TmpSignalConversionAtVeTTQR_M_SumMax, fmaxf(fmaxf
                         (rtb_Gain_b, fminf(fminf(rtb_MinMax5,
                            VeATRC_M_ToArb_xSEM), rtb_Switch_l_idx_0)),
                         rtb_TmpSignalConversionAtVeSCCR_M_Output));
    for (i = 0; i < 4; i++)
    {
        /* MinMax: '<S3>/Max2' */
        rtb_Max2[i] = fmaxf(rtb_TmpSignalConversionAtVeCTCR_M_MinCre, rtb_Max1[i]);
    }

    /* Switch: '<S188>/Switch' incorporates:
     *  Constant: '<S188>/ConstantValue4'
     *  Inport: '<Root>/VeWTAR_M_Raw_Prdctd_Tact'
     *  RelationalOperator: '<S188>/GreaterThan1'
     */
    if (rtb_VeATRR_r_Tact2Wheel < 0.01F)
    {
        /* Switch: '<S188>/Switch' incorporates:
         *  Constant: '<S188>/ConstantValue2'
         */
        rtb_MinMax25 = 0.0F;
    }
    else
    {
        (void)Rte_Read_VeWTAR_M_Raw_Prdctd_Tact_Value(&rtb_Switch2_aa_idx_0);

        /* MinMax: '<S9>/MinMax24' incorporates:
         *  Inport: '<Root>/VeWTAR_M_Raw_Prdctd_Tact'
         *  MinMax: '<S9>/MinMax26'
         */
        rtb_MinMax25 = fminf(rtb_TmpSignalConversionAtVeWTAR_M_Typ1Ma, fmaxf
                             (rtb_TmpSignalConversionAtVeWTAR_M_Typ1Mi,
                              rtb_Switch2_aa_idx_0));

        /* Outputs for Atomic SubSystem: '<S188>/ProtectedDivision2' */
        /* Switch: '<S363>/Switch1' incorporates:
         *  Constant: '<S363>/Constant Value'
         *  RelationalOperator: '<S363>/Not Equal'
         */
        if (rtb_MinMax25 != 0.0F)
        {
            /* Switch: '<S188>/Switch' incorporates:
             *  Product: '<S363>/Division'
             *  Switch: '<S363>/Switch1'
             */
            rtb_MinMax25 /= rtb_VeATRR_r_Tact2Wheel;
        }
        else
        {
            /* Switch: '<S188>/Switch' incorporates:
             *  Constant: '<S363>/Constant Value4'
             *  Switch: '<S363>/Switch2'
             *  Switch: '<S363>/Switch3'
             */
            rtb_MinMax25 = 0.0F;
        }

        /* End of Switch: '<S363>/Switch1' */
        /* End of Outputs for SubSystem: '<S188>/ProtectedDivision2' */
    }

    /* End of Switch: '<S188>/Switch' */

    /* Outputs for Atomic SubSystem: '<S188>/VariantSubsystem' */
#if Rte_SysCon_Variant_ATRR_RTC_On

    /* Outputs for Atomic SubSystem: '<S364>/RTC_on' */
    /* Gain: '<S374>/Gain' incorporates:
     *  Lookup_n-D: '<S376>/Vector'
     *  SignalConversion generated from: '<S1>/VeTCCR_r_RampFactor'
     */
    rtb_Gain_b = 0.5F * look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeTCCR_r_RampFa,
         (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsB_KxHSCR_r_TCC_TturbFromNC2_CoeffsB
          ()),
         (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsB_KtHSCR_r_TCC_TturbFromNC2_CoeffsB
          ()), 21U);

    /* Lookup_n-D: '<S375>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeTCCR_r_RampFactor'
     */
    rtb_TmpSignalConversionAtVeTTQR_M_SumMax = look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeTCCR_r_RampFa,
         (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsA_KxHSCR_r_TCC_TturbFromNC2_CoeffsA
          ()),
         (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsA_KtHSCR_r_TCC_TturbFromNC2_CoeffsA
          ()), 21U);

    /* Outputs for Atomic SubSystem: '<S374>/Protected Division1' */
    /* Switch: '<S378>/Switch1' incorporates:
     *  Constant: '<S378>/Constant Value'
     *  Constant: '<S378>/Constant Value1'
     *  Constant: '<S378>/Constant Value2'
     *  Constant: '<S378>/Constant Value3'
     *  Logic: '<S378>/AND'
     *  RelationalOperator: '<S378>/Greater Than or Equal '
     *  RelationalOperator: '<S378>/Greater Than or Equal 1'
     *  RelationalOperator: '<S378>/Not Equal'
     *  RelationalOperator: '<S378>/Not Equal1'
     *  Switch: '<S378>/Switch2'
     *  Switch: '<S378>/Switch3'
     */
    if ((rtb_Gain_b != 0.0F) && (rtb_TmpSignalConversionAtVeTTQR_M_SumMax !=
            0.0F))
    {
        /* Switch: '<S378>/Switch1' incorporates:
         *  Product: '<S378>/Division'
         */
        rtb_Switch1_md = rtb_Gain_b / rtb_TmpSignalConversionAtVeTTQR_M_SumMax;
    }
    else if (rtb_Gain_b > 0.0F)
    {
        /* Switch: '<S378>/Switch2' incorporates:
         *  Constant: '<S378>/MAXFLOAT'
         *  Switch: '<S378>/Switch1'
         */
        rtb_Switch1_md = 3.402823466E+38F;
    }
    else if (rtb_Gain_b < 0.0F)
    {
        /* Switch: '<S378>/Switch3' incorporates:
         *  Constant: '<S378>/MINFLOAT'
         *  Switch: '<S378>/Switch1'
         *  Switch: '<S378>/Switch2'
         */
        rtb_Switch1_md = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S378>/Switch1' incorporates:
         *  Constant: '<S378>/Constant Value4'
         *  Switch: '<S378>/Switch2'
         *  Switch: '<S378>/Switch3'
         */
        rtb_Switch1_md = 0.0F;
    }

    /* End of Switch: '<S378>/Switch1' */
    /* End of Outputs for SubSystem: '<S374>/Protected Division1' */

    /* Product: '<S374>/Product1' */
    rtb_Gain_b *= rtb_Gain_b;

    /* Outputs for Atomic SubSystem: '<S374>/Protected Division2' */
    /* Switch: '<S379>/Switch1' incorporates:
     *  Constant: '<S379>/Constant Value'
     *  Constant: '<S379>/Constant Value1'
     *  Constant: '<S379>/Constant Value2'
     *  Constant: '<S379>/Constant Value3'
     *  Logic: '<S379>/AND'
     *  RelationalOperator: '<S379>/Greater Than or Equal '
     *  RelationalOperator: '<S379>/Greater Than or Equal 1'
     *  RelationalOperator: '<S379>/Not Equal'
     *  RelationalOperator: '<S379>/Not Equal1'
     *  Switch: '<S379>/Switch2'
     *  Switch: '<S379>/Switch3'
     */
    if ((rtb_Gain_b != 0.0F) && (rtb_TmpSignalConversionAtVeTTQR_M_SumMax !=
            0.0F))
    {
        /* Switch: '<S379>/Switch1' incorporates:
         *  Product: '<S379>/Division'
         */
        rtb_Gain_b /= rtb_TmpSignalConversionAtVeTTQR_M_SumMax;
    }
    else if (rtb_Gain_b > 0.0F)
    {
        /* Switch: '<S379>/Switch2' incorporates:
         *  Constant: '<S379>/MAXFLOAT'
         *  Switch: '<S379>/Switch1'
         */
        rtb_Gain_b = 3.402823466E+38F;
    }
    else if (rtb_Gain_b < 0.0F)
    {
        /* Switch: '<S379>/Switch3' incorporates:
         *  Constant: '<S379>/MINFLOAT'
         *  Switch: '<S379>/Switch1'
         *  Switch: '<S379>/Switch2'
         */
        rtb_Gain_b = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S379>/Switch1' incorporates:
         *  Constant: '<S379>/Constant Value4'
         *  Switch: '<S379>/Switch2'
         *  Switch: '<S379>/Switch3'
         */
        rtb_Gain_b = 0.0F;
    }

    /* End of Switch: '<S379>/Switch1' */
    /* End of Outputs for SubSystem: '<S374>/Protected Division2' */

    /* Outputs for Atomic SubSystem: '<S374>/Protected Division4' */
    /* Switch: '<S380>/Switch1' incorporates:
     *  Constant: '<S380>/Constant Value1'
     *  RelationalOperator: '<S380>/Not Equal1'
     */
    if (rtb_TmpSignalConversionAtVeTTQR_M_SumMax != 0.0F)
    {
        /* Switch: '<S380>/Switch1' incorporates:
         *  Constant: '<S374>/Constant Value2'
         *  Product: '<S380>/Division'
         */
        rtb_TmpSignalConversionAtVeTTQR_M_SumMax = 1.0F /
            rtb_TmpSignalConversionAtVeTTQR_M_SumMax;
    }
    else
    {
        /* Switch: '<S380>/Switch1' */
        rtb_TmpSignalConversionAtVeTTQR_M_SumMax = 3.402823466E+38F;
    }

    /* End of Switch: '<S380>/Switch1' */
    /* End of Outputs for SubSystem: '<S374>/Protected Division4' */

    /* Signum: '<S373>/Signum' */
    if (rtb_TmpSignalConversionAtVeTTQR_M_SumMax < 0.0F)
    {
        rtb_MinMax5 = -1.0F;
    }
    else if (rtb_TmpSignalConversionAtVeTTQR_M_SumMax > 0.0F)
    {
        rtb_MinMax5 = 1.0F;
    }
    else
    {
        rtb_MinMax5 = rtb_TmpSignalConversionAtVeTTQR_M_SumMax;
    }

    /* End of Signum: '<S373>/Signum' */

    /* Sum: '<S373>/Sum3' incorporates:
     *  Constant: '<S373>/Constant Value'
     *  Gain: '<S374>/Gain1'
     *  Lookup_n-D: '<S377>/Vector'
     *  MinMax: '<S373>/MinMax1'
     *  Product: '<S373>/Product'
     *  Product: '<S373>/Product1'
     *  SignalConversion generated from: '<S1>/VeTCCR_r_RampFactor'
     *  Sqrt: '<S373>/Square Root'
     *  Sum: '<S373>/Sum2'
     *  Sum: '<S374>/Sum1'
     */
    rtb_Switch1_md = ((sqrtf(fmaxf((rtb_MinMax25 - (look1_iflf_binlca_16a
                           (rtb_TmpSignalConversionAtVeTCCR_r_RampFa,
                            (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsC_KxHSCR_r_TCC_TturbFromNC2_CoeffsC
        ()), (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsC_KtHSCR_r_TCC_TturbFromNC2_CoeffsC
              ()), 3U) - rtb_Gain_b)) * rtb_TmpSignalConversionAtVeTTQR_M_SumMax,
                         0.0F)) * rtb_MinMax5) + (-rtb_Switch1_md)) +
        rtb_TmpSignalConversionAtVeTCCR_r_RampFa;

    /* Outputs for Atomic SubSystem: '<S368>/Protected Division3' */
    /* Switch: '<S371>/Switch1' incorporates:
     *  Constant: '<S371>/Constant Value'
     *  Constant: '<S371>/Constant Value1'
     *  Constant: '<S371>/Constant Value2'
     *  Constant: '<S371>/Constant Value3'
     *  Logic: '<S371>/AND'
     *  RelationalOperator: '<S371>/Greater Than or Equal '
     *  RelationalOperator: '<S371>/Greater Than or Equal 1'
     *  RelationalOperator: '<S371>/Not Equal'
     *  RelationalOperator: '<S371>/Not Equal1'
     *  Switch: '<S371>/Switch2'
     *  Switch: '<S371>/Switch3'
     */
    if ((rtb_TmpSignalConversionAtVeTCCR_r_RampFa != 0.0F) && (rtb_Switch1_md !=
         0.0F))
    {
        /* Switch: '<S371>/Switch1' incorporates:
         *  Product: '<S371>/Division'
         */
        rtb_Switch1_md = rtb_TmpSignalConversionAtVeTCCR_r_RampFa /
            rtb_Switch1_md;
    }
    else if (rtb_TmpSignalConversionAtVeTCCR_r_RampFa > 0.0F)
    {
        /* Switch: '<S371>/Switch2' incorporates:
         *  Constant: '<S371>/MAXFLOAT'
         *  Switch: '<S371>/Switch1'
         */
        rtb_Switch1_md = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtVeTCCR_r_RampFa < 0.0F)
    {
        /* Switch: '<S371>/Switch3' incorporates:
         *  Constant: '<S371>/MINFLOAT'
         *  Switch: '<S371>/Switch1'
         *  Switch: '<S371>/Switch2'
         */
        rtb_Switch1_md = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S371>/Switch1' incorporates:
         *  Constant: '<S371>/Constant Value4'
         *  Switch: '<S371>/Switch2'
         *  Switch: '<S371>/Switch3'
         */
        rtb_Switch1_md = 0.0F;
    }

    /* End of Switch: '<S371>/Switch1' */
    /* End of Outputs for SubSystem: '<S368>/Protected Division3' */

    /* Lookup_n-D: '<S369>/Vector' incorporates:
     *  Switch: '<S371>/Switch1'
     */
    rtb_Switch1_md = look1_iflf_binlca_16a(rtb_Switch1_md,
        (Rte_Prm_KxHSCR_r_TCC_TorqRatio_KxHSCR_r_TCC_TorqRatio()),
        (Rte_Prm_KtHSCR_r_TCC_TorqRatio_KtHSCR_r_TCC_TorqRatio()), 17U);

    /* Outputs for Atomic SubSystem: '<S368>/Protected Division1' */
    /* Switch: '<S370>/Switch1' incorporates:
     *  Constant: '<S370>/Constant Value'
     *  Constant: '<S370>/Constant Value1'
     *  Constant: '<S370>/Constant Value2'
     *  Constant: '<S370>/Constant Value3'
     *  Logic: '<S370>/AND'
     *  RelationalOperator: '<S370>/Greater Than or Equal '
     *  RelationalOperator: '<S370>/Greater Than or Equal 1'
     *  RelationalOperator: '<S370>/Not Equal'
     *  RelationalOperator: '<S370>/Not Equal1'
     *  Switch: '<S370>/Switch2'
     *  Switch: '<S370>/Switch3'
     */
    if ((rtb_MinMax25 != 0.0F) && (rtb_Switch1_md != 0.0F))
    {
        /* Switch: '<S370>/Switch1' incorporates:
         *  Product: '<S370>/Division'
         */
        rtb_Switch1_md = rtb_MinMax25 / rtb_Switch1_md;
    }
    else if (rtb_MinMax25 > 0.0F)
    {
        /* Switch: '<S370>/Switch2' incorporates:
         *  Constant: '<S370>/MAXFLOAT'
         *  Switch: '<S370>/Switch1'
         */
        rtb_Switch1_md = 3.402823466E+38F;
    }
    else if (rtb_MinMax25 < 0.0F)
    {
        /* Switch: '<S370>/Switch3' incorporates:
         *  Constant: '<S370>/MINFLOAT'
         *  Switch: '<S370>/Switch1'
         *  Switch: '<S370>/Switch2'
         */
        rtb_Switch1_md = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S370>/Switch1' incorporates:
         *  Constant: '<S370>/Constant Value4'
         *  Switch: '<S370>/Switch2'
         *  Switch: '<S370>/Switch3'
         */
        rtb_Switch1_md = 0.0F;
    }

    /* End of Switch: '<S370>/Switch1' */
    /* End of Outputs for SubSystem: '<S368>/Protected Division1' */

    /* VariantMerge generated from: '<S364>/T_imp' incorporates:
     *  Product: '<S367>/Product4'
     *  Sum: '<S367>/Sum4'
     *  Sum: '<S367>/Sum5'
     */
    rtb_Switch1_md = ((rtb_Switch1_md - rtb_MinMax25) *
                      rtb_TmpSignalConversionAtVeVSDR_n_NTurbO) + rtb_MinMax25;

    /* End of Outputs for SubSystem: '<S364>/RTC_on' */
#else

    /* Outputs for Atomic SubSystem: '<S364>/RTC_off' */
    /* VariantMerge generated from: '<S364>/T_imp' incorporates:
     *  Inport: '<S365>/T_turb'
     */
    rtb_Switch1_md = rtb_MinMax25;

    /* End of Outputs for SubSystem: '<S364>/RTC_off' */
#endif

    /* End of Outputs for SubSystem: '<S188>/VariantSubsystem' */

    /* Switch: '<S188>/Switch2' incorporates:
     *  Constant: '<S359>/Constant'
     *  Logic: '<S188>/Logical1'
     *  RelationalOperator: '<S188>/Comparison2'
     */
    if ((((uint32)Rte_Prm_HeTSXR_e_All_TactToDomain_HeTSXR_e_All_TactToDomain())
         == CeTSXR_e_SumDomain) && tmp)
    {
        /* Switch: '<S188>/Switch3' incorporates:
         *  Constant: '<S361>/Calib'
         */
        if (Rte_Prm_HeATRR_b_RTC_Enbl_HeATRR_b_RTC_Enbl())
        {
            rtb_MinMax25 = rtb_Switch1_md;
        }

        /* End of Switch: '<S188>/Switch3' */

        /* Switch: '<S203>/Switch2' incorporates:
         *  Sum: '<S188>/Sum'
         */
        rtb_MinMax25 += rtb_TmpSignalConversionAtVeTTIR_M_PumpTr;
    }

    /* End of Switch: '<S188>/Switch2' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeTISR_n_InputSpeed' */
    (void)Rte_Read_VeTISR_n_InputSpeed_Value(&rtb_Switch2_aa_idx_1);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/ATRR_MedTEB'
     */
    /* Switch: '<S203>/Switch2' incorporates:
     *  MinMax: '<S9>/MinMax15'
     */
    rtb_MinMax25 = fminf(rtb_Switch_l_idx_0, rtb_MinMax25);

    /* MinMax: '<S9>/MinMax12' */
    VeATRC_M_ToReqPrdctdShaped_Tact = fmaxf(rtb_Switch1_cv, rtb_MinMax25);

    /* Switch: '<S3>/Switch' incorporates:
     *  Constant: '<S10>/Calib'
     */
    if (KeATRR_b_TTC_CalcEnbl)
    {
        /* Switch: '<S3>/Switch' */
        rtb_TmpSignalConversionAtVeTTQR_M_SumMax =
            VeATRC_M_OutputTorqueReqHTDRCnvt;
    }
    else
    {
        /* Switch: '<S3>/Switch' */
        rtb_TmpSignalConversionAtVeTTQR_M_SumMax =
            VeATRC_M_ToReqPrdctdShaped_Tact;
    }

    /* End of Switch: '<S3>/Switch' */

    /* Switch: '<S4>/Switch2' incorporates:
     *  Constant: '<S19>/Constant'
     *  Constant: '<S20>/Calib'
     *  Constant: '<S22>/Calib'
     *  Logic: '<S4>/Logical1'
     *  RelationalOperator: '<S4>/Comparison2'
     */
    if ((CeTSXR_e_AxleDomain == ((uint32)
            Rte_Prm_HeTSXR_e_All_StratToDomain_HeTSXR_e_All_StratToDomain())) ||
        Rte_Prm_HeATRR_b_BSGConvByps_HeATRR_b_BSGConvByps())
    {
        /* Switch: '<S4>/Switch2' incorporates:
         *  Constant: '<S4>/ConstantValue1'
         */
        rtb_Switch1_md = 1.0F;
    }
    else
    {
        /* Switch: '<S4>/Switch2' */
        rtb_Switch1_md = VeATRC_r_TransOut2Wheel;
    }

    /* End of Switch: '<S4>/Switch2' */

    /* Switch: '<S4>/Switch5' incorporates:
     *  Constant: '<S21>/Calib'
     */
    if (!Rte_Prm_HeATRR_b_RTC_Enbl_HeATRR_b_RTC_Enbl())
    {
        /* Switch: '<S4>/Switch5' */
        rtb_TmpSignalConversionAtVeTINR_r_TCMTra = rtb_VeATRR_r_Tact2Wheel;
    }

    /* End of Switch: '<S4>/Switch5' */

    /* Outport: '<Root>/VeATRR_M_MaxTransTo' incorporates:
     *  Gain: '<S30>/Gain'
     */
    (void)Rte_Write_VeATRR_M_MaxTransTo_Value(rtb_Switch_l_idx_0);

    /* Outport: '<Root>/VeATRR_M_MinTransTo' incorporates:
     *  Gain: '<S31>/Gain'
     */
    (void)Rte_Write_VeATRR_M_MinTransTo_Value
        (rtb_TmpSignalConversionAtVeSCCR_M_Output);

    /* Product: '<S143>/Product4' incorporates:
     *  Constant: '<S155>/Calib'
     */
    rtb_MinMax25 = rtb_Switch2_aa_idx_1 * ((float32)KeATRR_cnt_numofcyl);

    /* Outputs for Atomic SubSystem: '<S143>/ProtectedDivision2' */
    /* Switch: '<S162>/Switch1' incorporates:
     *  Constant: '<S162>/Constant Value1'
     *  RelationalOperator: '<S162>/Not Equal1'
     */
    if (rtb_MinMax25 != 0.0F)
    {
        /* Switch: '<S162>/Switch1' incorporates:
         *  Constant: '<S143>/ConstantValue9'
         *  Product: '<S162>/Division'
         */
        rtb_Switch1_ll = 120.0F / rtb_MinMax25;
    }
    else
    {
        /* Switch: '<S162>/Switch1' */
        rtb_Switch1_ll = 3.402823466E+38F;
    }

    /* End of Switch: '<S162>/Switch1' */
    /* End of Outputs for SubSystem: '<S143>/ProtectedDivision2' */

    /* Outport: '<Root>/VeATRR_t_EngCombstnDelay' incorporates:
     *  SignalConversion generated from: '<S1>/EngCombustionDelay'
     */
    (void)Rte_Write_VeATRR_t_EngCombstnDelay_Value(rtb_Switch1_ll);

    /* SignalConversion generated from: '<S1>/VeTTQR_M_TCMSumTrqReqFast' incorporates:
     *  Inport: '<Root>/VeTTQR_M_TCMSumTrqReqFast'
     */
    (void)Rte_Read_VeTTQR_M_TCMSumTrqReqFast_Value
        (&rtb_TmpSignalConversionAtVeTTQR_M_TCMSum);

    /* Switch: '<S8>/Switch9' incorporates:
     *  Constant: '<S135>/Calib'
     *  Constant: '<S139>/Calib'
     */
    if (KeATRR_b_OvrdTCMSumTrqFast)
    {
        rtb_MinMax5 = KeATRR_M_TCMSumTrqFast;
    }
    else
    {
        rtb_MinMax5 = rtb_TmpSignalConversionAtVeTTQR_M_TCMSum;
    }

    /* End of Switch: '<S8>/Switch9' */

    /* MinMax: '<S8>/MinMax5' */
    rtb_MinMax5 = fmaxf(rtb_MinMax5, rtb_TmpSignalConversionAtVeCTCR_M_MinCre);

    /* Logic: '<S8>/Logical' incorporates:
     *  Constant: '<S136>/Calib'
     *  RelationalOperator: '<S8>/Comparison2'
     */
    rtb_VeATRR_b_TrqRtLmtEnbld_SEM = ((KeATRR_b_EnblTrqRtLmt_SEM) &&
        (rtb_MinMax5 < rtb_Max2[2]));

    /* Outport: '<Root>/VeATRR_b_TrqRtLmtEnbld_SEM' incorporates:
     *  SignalConversion generated from: '<S1>/TorqueRtLmt_SEM'
     */
    (void)Rte_Write_VeATRR_b_TrqRtLmtEnbld_SEM_Value
        (rtb_VeATRR_b_TrqRtLmtEnbld_SEM);

    /* SignalConversion generated from: '<S1>/VeDTRR_e_SumFWIDFst' incorporates:
     *  Inport: '<Root>/VeDTRR_e_SumFWIDFst'
     */
    (void)Rte_Read_VeDTRR_e_SumFWIDFst_Value
        (&rtb_TmpSignalConversionAtVeDTRR_e_SumFWI);

    /* Switch: '<S8>/Switch5' incorporates:
     *  Constant: '<S130>/Constant'
     *  Constant: '<S131>/Constant'
     *  Constant: '<S137>/Calib'
     *  Constant: '<S138>/Calib'
     *  Logic: '<S8>/Logical2'
     *  RelationalOperator: '<S8>/Comparison5'
     *  RelationalOperator: '<S8>/Comparison6'
     */
    if (KeATRR_b_OITR_SrcManSelc)
    {
        rtb_Comparison1_iu = KeATRR_b_OITR_SrcManSlw;
    }
    else
    {
        rtb_Comparison1_iu = ((((uint32)rtb_TmpSignalConversionAtVeDTRR_e_SumFWI)
                               == CeDTRR_e_Pedal_Cruise) || (((uint32)
                                rtb_TmpSignalConversionAtVeDTRR_e_SumFWI) ==
                               CeDTRR_e_Potential));
    }

    /* End of Switch: '<S8>/Switch5' */

    /* Switch: '<S8>/Switch1' */
    if (rtb_Comparison1_iu)
    {
        /* Switch: '<S8>/Switch1' */
        VeATRC_M_OutputTorqReqImmedOITR = VeATRC_M_ToReqPot_Cnvt;
        rtb_Gain_b = rtb_Max2[0];
    }
    else
    {
        /* Switch: '<S8>/Switch1' */
        VeATRC_M_OutputTorqReqImmedOITR = rtb_Max2[1];
        rtb_Gain_b = VeATRC_M_ToReq_PreSEM;
    }

    /* End of Switch: '<S8>/Switch1' */

    /* SignalConversion generated from: '<S1>/VeTTQR_e_TCMTrqCntrlMdFst' incorporates:
     *  Inport: '<Root>/VeTTQR_e_TCMTrqCntrlMdFst'
     */
    (void)Rte_Read_VeTTQR_e_TCMTrqCntrlMdFst_Value
        (&rtb_TmpSignalConversionAtVeTTQR_e_TCMTrq);

    /* Switch: '<S140>/Switch2' incorporates:
     *  Constant: '<S144>/Constant'
     *  Constant: '<S145>/Constant'
     *  Constant: '<S149>/Calib'
     *  Logic: '<S140>/Logical2'
     *  RelationalOperator: '<S140>/Comparison5'
     *  RelationalOperator: '<S140>/Comparison6'
     *  Switch: '<S140>/Switch1'
     */
    if ((((uint32)rtb_TmpSignalConversionAtVeTTQR_e_TCMTrq) == CeTINR_e_TrqInc) ||
        (((uint32)rtb_TmpSignalConversionAtVeTTQR_e_TCMTrq) == CeTINR_e_TrqDec))
    {
        /* Switch: '<S140>/Switch5' incorporates:
         *  Constant: '<S150>/Calib'
         */
        if (KeATRR_b_SEM_TactFstDsbl)
        {
            /* Switch: '<S140>/Switch1' incorporates:
             *  Constant: '<S149>/Calib'
             */
            if (KeATRR_b_BSM_TactFstDsbl)
            {
                /* Switch: '<S140>/Switch2' */
                rtb_Switch2_aa_idx_0 = VeATRC_M_OutputTorqReqImmedOITR;
            }
            else
            {
                /* Switch: '<S140>/Switch2' */
                rtb_Switch2_aa_idx_0 = rtb_Gain_b;
            }
        }
        else
        {
            /* Switch: '<S140>/Switch2' */
            rtb_Switch2_aa_idx_0 = rtb_MinMax5;
        }

        /* Switch: '<S140>/Switch2' incorporates:
         *  Switch: '<S140>/Switch5'
         */
        rtb_Switch2_aa_idx_1 = rtb_MinMax5;
    }
    else
    {
        if (KeATRR_b_BSM_TactFstDsbl)
        {
            /* Switch: '<S140>/Switch1' incorporates:
             *  Switch: '<S140>/Switch2'
             */
            rtb_Switch2_aa_idx_0 = VeATRC_M_OutputTorqReqImmedOITR;
        }
        else
        {
            /* Switch: '<S140>/Switch2' incorporates:
             *  Switch: '<S140>/Switch1'
             */
            rtb_Switch2_aa_idx_0 = rtb_Gain_b;
        }

        /* Switch: '<S140>/Switch2' */
        rtb_Switch2_aa_idx_1 = rtb_Max2[2];
    }

    /* End of Switch: '<S140>/Switch2' */

    /* RelationalOperator: '<S8>/Comparison1' incorporates:
     *  Abs: '<S8>/Abs'
     *  Constant: '<S134>/Calib'
     *  Sum: '<S8>/Sum3'
     */
    rtb_Comparison1_iu = (KeATRR_M_SEM_ActiveThrhd > fabsf(rtb_Switch2_aa_idx_1
                           - rtb_TmpSignalConversionAtVeTTQR_M_TCMSum));

    /* Outport: '<Root>/VeATRR_b_SEM_Act' incorporates:
     *  SignalConversion generated from: '<S1>/VeATRC_b_SEM_Act'
     */
    (void)Rte_Write_VeATRR_b_SEM_Act_Value(rtb_Comparison1_iu);

    /* SignalConversion generated from: '<S1>/VeWTAR_M_MinPreConvsn' incorporates:
     *  Inport: '<Root>/VeWTAR_M_MinPreConvsn'
     */
    (void)Rte_Read_VeWTAR_M_MinPreConvsn_Value
        (&rtb_TmpSignalConversionAtVeWTAR_M_MinPre);

    /* Switch: '<S203>/Switch' incorporates:
     *  Constant: '<S203>/ConstantValue4'
     *  Constant: '<S209>/Constant Value'
     *  RelationalOperator: '<S203>/GreaterThan1'
     *  RelationalOperator: '<S209>/Not Equal'
     *  Switch: '<S209>/Switch1'
     */
    if (rtb_VeATRR_r_Tact2Wheel < 0.01F)
    {
        /* Switch: '<S203>/Switch' incorporates:
         *  Constant: '<S203>/ConstantValue2'
         */
        rtb_MinMax25 = 0.0F;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S203>/ProtectedDivision2' */
        if (rtb_TmpSignalConversionAtVeWTAR_M_MinPre != 0.0F)
        {
            /* Switch: '<S203>/Switch' incorporates:
             *  Product: '<S209>/Division'
             *  Switch: '<S209>/Switch1'
             */
            rtb_MinMax25 = rtb_TmpSignalConversionAtVeWTAR_M_MinPre /
                rtb_VeATRR_r_Tact2Wheel;
        }
        else
        {
            /* Switch: '<S203>/Switch' incorporates:
             *  Constant: '<S209>/Constant Value4'
             *  Switch: '<S209>/Switch1'
             *  Switch: '<S209>/Switch2'
             *  Switch: '<S209>/Switch3'
             */
            rtb_MinMax25 = 0.0F;
        }

        /* End of Outputs for SubSystem: '<S203>/ProtectedDivision2' */
    }

    /* End of Switch: '<S203>/Switch' */

    /* Outputs for Atomic SubSystem: '<S203>/VariantSubsystem' */
#if Rte_SysCon_Variant_ATRR_RTC_On

    /* Outputs for Atomic SubSystem: '<S210>/RTC_on' */
    /* Gain: '<S220>/Gain' incorporates:
     *  Lookup_n-D: '<S222>/Vector'
     *  SignalConversion generated from: '<S1>/VeTCCR_r_RampFactor'
     */
    rtb_Gain_c = 0.5F * look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeTCCR_r_RampFa,
         (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsB_KxHSCR_r_TCC_TturbFromNC2_CoeffsB
          ()),
         (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsB_KtHSCR_r_TCC_TturbFromNC2_CoeffsB
          ()), 21U);

    /* Lookup_n-D: '<S221>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeTCCR_r_RampFactor'
     */
    rtb_TmpSignalConversionAtVeWTAR_M_MinPre = look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeTCCR_r_RampFa,
         (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsA_KxHSCR_r_TCC_TturbFromNC2_CoeffsA
          ()),
         (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsA_KtHSCR_r_TCC_TturbFromNC2_CoeffsA
          ()), 21U);

    /* Outputs for Atomic SubSystem: '<S220>/Protected Division1' */
    /* Switch: '<S224>/Switch1' incorporates:
     *  Constant: '<S224>/Constant Value'
     *  Constant: '<S224>/Constant Value1'
     *  Constant: '<S224>/Constant Value2'
     *  Constant: '<S224>/Constant Value3'
     *  Logic: '<S224>/AND'
     *  RelationalOperator: '<S224>/Greater Than or Equal '
     *  RelationalOperator: '<S224>/Greater Than or Equal 1'
     *  RelationalOperator: '<S224>/Not Equal'
     *  RelationalOperator: '<S224>/Not Equal1'
     *  Switch: '<S224>/Switch2'
     *  Switch: '<S224>/Switch3'
     */
    if ((rtb_Gain_c != 0.0F) && (rtb_TmpSignalConversionAtVeWTAR_M_MinPre !=
            0.0F))
    {
        /* Switch: '<S224>/Switch1' incorporates:
         *  Product: '<S224>/Division'
         */
        rtb_TmpSignalConversionAtVeTTQR_M_TCMSum = rtb_Gain_c /
            rtb_TmpSignalConversionAtVeWTAR_M_MinPre;
    }
    else if (rtb_Gain_c > 0.0F)
    {
        /* Switch: '<S224>/Switch2' incorporates:
         *  Constant: '<S224>/MAXFLOAT'
         *  Switch: '<S224>/Switch1'
         */
        rtb_TmpSignalConversionAtVeTTQR_M_TCMSum = 3.402823466E+38F;
    }
    else if (rtb_Gain_c < 0.0F)
    {
        /* Switch: '<S224>/Switch3' incorporates:
         *  Constant: '<S224>/MINFLOAT'
         *  Switch: '<S224>/Switch1'
         *  Switch: '<S224>/Switch2'
         */
        rtb_TmpSignalConversionAtVeTTQR_M_TCMSum = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S224>/Switch1' incorporates:
         *  Constant: '<S224>/Constant Value4'
         *  Switch: '<S224>/Switch2'
         *  Switch: '<S224>/Switch3'
         */
        rtb_TmpSignalConversionAtVeTTQR_M_TCMSum = 0.0F;
    }

    /* End of Switch: '<S224>/Switch1' */
    /* End of Outputs for SubSystem: '<S220>/Protected Division1' */

    /* Product: '<S220>/Product1' */
    rtb_Gain_c *= rtb_Gain_c;

    /* Outputs for Atomic SubSystem: '<S220>/Protected Division2' */
    /* Switch: '<S225>/Switch1' incorporates:
     *  Constant: '<S225>/Constant Value'
     *  Constant: '<S225>/Constant Value1'
     *  Constant: '<S225>/Constant Value2'
     *  Constant: '<S225>/Constant Value3'
     *  Logic: '<S225>/AND'
     *  RelationalOperator: '<S225>/Greater Than or Equal '
     *  RelationalOperator: '<S225>/Greater Than or Equal 1'
     *  RelationalOperator: '<S225>/Not Equal'
     *  RelationalOperator: '<S225>/Not Equal1'
     *  Switch: '<S225>/Switch2'
     *  Switch: '<S225>/Switch3'
     */
    if ((rtb_Gain_c != 0.0F) && (rtb_TmpSignalConversionAtVeWTAR_M_MinPre !=
            0.0F))
    {
        /* Switch: '<S225>/Switch1' incorporates:
         *  Product: '<S225>/Division'
         */
        rtb_Gain_c /= rtb_TmpSignalConversionAtVeWTAR_M_MinPre;
    }
    else if (rtb_Gain_c > 0.0F)
    {
        /* Switch: '<S225>/Switch2' incorporates:
         *  Constant: '<S225>/MAXFLOAT'
         *  Switch: '<S225>/Switch1'
         */
        rtb_Gain_c = 3.402823466E+38F;
    }
    else if (rtb_Gain_c < 0.0F)
    {
        /* Switch: '<S225>/Switch3' incorporates:
         *  Constant: '<S225>/MINFLOAT'
         *  Switch: '<S225>/Switch1'
         *  Switch: '<S225>/Switch2'
         */
        rtb_Gain_c = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S225>/Switch1' incorporates:
         *  Constant: '<S225>/Constant Value4'
         *  Switch: '<S225>/Switch2'
         *  Switch: '<S225>/Switch3'
         */
        rtb_Gain_c = 0.0F;
    }

    /* End of Switch: '<S225>/Switch1' */
    /* End of Outputs for SubSystem: '<S220>/Protected Division2' */

    /* Outputs for Atomic SubSystem: '<S220>/Protected Division4' */
    /* Switch: '<S226>/Switch1' incorporates:
     *  Constant: '<S226>/Constant Value1'
     *  RelationalOperator: '<S226>/Not Equal1'
     */
    if (rtb_TmpSignalConversionAtVeWTAR_M_MinPre != 0.0F)
    {
        /* Switch: '<S226>/Switch1' incorporates:
         *  Constant: '<S220>/Constant Value2'
         *  Product: '<S226>/Division'
         */
        rtb_TmpSignalConversionAtVeWTAR_M_MinPre = 1.0F /
            rtb_TmpSignalConversionAtVeWTAR_M_MinPre;
    }
    else
    {
        /* Switch: '<S226>/Switch1' */
        rtb_TmpSignalConversionAtVeWTAR_M_MinPre = 3.402823466E+38F;
    }

    /* End of Switch: '<S226>/Switch1' */
    /* End of Outputs for SubSystem: '<S220>/Protected Division4' */

    /* Signum: '<S219>/Signum' */
    if (rtb_TmpSignalConversionAtVeWTAR_M_MinPre < 0.0F)
    {
        rtb_Switch1_l3 = -1.0F;
    }
    else if (rtb_TmpSignalConversionAtVeWTAR_M_MinPre > 0.0F)
    {
        rtb_Switch1_l3 = 1.0F;
    }
    else
    {
        rtb_Switch1_l3 = rtb_TmpSignalConversionAtVeWTAR_M_MinPre;
    }

    /* End of Signum: '<S219>/Signum' */

    /* Sum: '<S219>/Sum3' incorporates:
     *  Constant: '<S219>/Constant Value'
     *  Gain: '<S220>/Gain1'
     *  Lookup_n-D: '<S223>/Vector'
     *  MinMax: '<S219>/MinMax1'
     *  Product: '<S219>/Product'
     *  Product: '<S219>/Product1'
     *  SignalConversion generated from: '<S1>/VeTCCR_r_RampFactor'
     *  Sqrt: '<S219>/Square Root'
     *  Sum: '<S219>/Sum2'
     *  Sum: '<S220>/Sum1'
     */
    rtb_TmpSignalConversionAtVeTTQR_M_TCMSum = ((sqrtf(fmaxf((rtb_MinMax25 -
        (look1_iflf_binlca_16a(rtb_TmpSignalConversionAtVeTCCR_r_RampFa,
        (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsC_KxHSCR_r_TCC_TturbFromNC2_CoeffsC
         ()),
        (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsC_KtHSCR_r_TCC_TturbFromNC2_CoeffsC
         ()), 3U) - rtb_Gain_c)) * rtb_TmpSignalConversionAtVeWTAR_M_MinPre,
        0.0F)) * rtb_Switch1_l3) + (-rtb_TmpSignalConversionAtVeTTQR_M_TCMSum))
        + rtb_TmpSignalConversionAtVeTCCR_r_RampFa;

    /* Outputs for Atomic SubSystem: '<S214>/Protected Division3' */
    /* Switch: '<S217>/Switch1' incorporates:
     *  Constant: '<S217>/Constant Value'
     *  Constant: '<S217>/Constant Value1'
     *  Constant: '<S217>/Constant Value2'
     *  Constant: '<S217>/Constant Value3'
     *  Logic: '<S217>/AND'
     *  RelationalOperator: '<S217>/Greater Than or Equal '
     *  RelationalOperator: '<S217>/Greater Than or Equal 1'
     *  RelationalOperator: '<S217>/Not Equal'
     *  RelationalOperator: '<S217>/Not Equal1'
     *  Switch: '<S217>/Switch2'
     *  Switch: '<S217>/Switch3'
     */
    if ((rtb_TmpSignalConversionAtVeTCCR_r_RampFa != 0.0F) &&
            (rtb_TmpSignalConversionAtVeTTQR_M_TCMSum != 0.0F))
    {
        /* Switch: '<S217>/Switch1' incorporates:
         *  Product: '<S217>/Division'
         */
        rtb_TmpSignalConversionAtVeTTQR_M_TCMSum =
            rtb_TmpSignalConversionAtVeTCCR_r_RampFa /
            rtb_TmpSignalConversionAtVeTTQR_M_TCMSum;
    }
    else if (rtb_TmpSignalConversionAtVeTCCR_r_RampFa > 0.0F)
    {
        /* Switch: '<S217>/Switch2' incorporates:
         *  Constant: '<S217>/MAXFLOAT'
         *  Switch: '<S217>/Switch1'
         */
        rtb_TmpSignalConversionAtVeTTQR_M_TCMSum = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtVeTCCR_r_RampFa < 0.0F)
    {
        /* Switch: '<S217>/Switch3' incorporates:
         *  Constant: '<S217>/MINFLOAT'
         *  Switch: '<S217>/Switch1'
         *  Switch: '<S217>/Switch2'
         */
        rtb_TmpSignalConversionAtVeTTQR_M_TCMSum = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S217>/Switch1' incorporates:
         *  Constant: '<S217>/Constant Value4'
         *  Switch: '<S217>/Switch2'
         *  Switch: '<S217>/Switch3'
         */
        rtb_TmpSignalConversionAtVeTTQR_M_TCMSum = 0.0F;
    }

    /* End of Switch: '<S217>/Switch1' */
    /* End of Outputs for SubSystem: '<S214>/Protected Division3' */

    /* Lookup_n-D: '<S215>/Vector' incorporates:
     *  Switch: '<S217>/Switch1'
     */
    rtb_TmpSignalConversionAtVeTTQR_M_TCMSum = look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeTTQR_M_TCMSum,
         (Rte_Prm_KxHSCR_r_TCC_TorqRatio_KxHSCR_r_TCC_TorqRatio()),
         (Rte_Prm_KtHSCR_r_TCC_TorqRatio_KtHSCR_r_TCC_TorqRatio()), 17U);

    /* Outputs for Atomic SubSystem: '<S214>/Protected Division1' */
    /* Switch: '<S216>/Switch1' incorporates:
     *  Constant: '<S216>/Constant Value'
     *  Constant: '<S216>/Constant Value1'
     *  Constant: '<S216>/Constant Value2'
     *  Constant: '<S216>/Constant Value3'
     *  Logic: '<S216>/AND'
     *  RelationalOperator: '<S216>/Greater Than or Equal '
     *  RelationalOperator: '<S216>/Greater Than or Equal 1'
     *  RelationalOperator: '<S216>/Not Equal'
     *  RelationalOperator: '<S216>/Not Equal1'
     *  Switch: '<S216>/Switch2'
     *  Switch: '<S216>/Switch3'
     */
    if ((rtb_MinMax25 != 0.0F) && (rtb_TmpSignalConversionAtVeTTQR_M_TCMSum !=
            0.0F))
    {
        /* Switch: '<S216>/Switch1' incorporates:
         *  Product: '<S216>/Division'
         */
        rtb_TmpSignalConversionAtVeTTQR_M_TCMSum = rtb_MinMax25 /
            rtb_TmpSignalConversionAtVeTTQR_M_TCMSum;
    }
    else if (rtb_MinMax25 > 0.0F)
    {
        /* Switch: '<S216>/Switch2' incorporates:
         *  Constant: '<S216>/MAXFLOAT'
         *  Switch: '<S216>/Switch1'
         */
        rtb_TmpSignalConversionAtVeTTQR_M_TCMSum = 3.402823466E+38F;
    }
    else if (rtb_MinMax25 < 0.0F)
    {
        /* Switch: '<S216>/Switch3' incorporates:
         *  Constant: '<S216>/MINFLOAT'
         *  Switch: '<S216>/Switch1'
         *  Switch: '<S216>/Switch2'
         */
        rtb_TmpSignalConversionAtVeTTQR_M_TCMSum = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S216>/Switch1' incorporates:
         *  Constant: '<S216>/Constant Value4'
         *  Switch: '<S216>/Switch2'
         *  Switch: '<S216>/Switch3'
         */
        rtb_TmpSignalConversionAtVeTTQR_M_TCMSum = 0.0F;
    }

    /* End of Switch: '<S216>/Switch1' */
    /* End of Outputs for SubSystem: '<S214>/Protected Division1' */

    /* VariantMerge generated from: '<S210>/T_imp' incorporates:
     *  Product: '<S213>/Product4'
     *  Sum: '<S213>/Sum4'
     *  Sum: '<S213>/Sum5'
     */
    rtb_Gain_c = ((rtb_TmpSignalConversionAtVeTTQR_M_TCMSum - rtb_MinMax25) *
                  rtb_TmpSignalConversionAtVeVSDR_n_NTurbO) + rtb_MinMax25;

    /* End of Outputs for SubSystem: '<S210>/RTC_on' */
#else

    /* Outputs for Atomic SubSystem: '<S210>/RTC_off' */
    /* VariantMerge generated from: '<S210>/T_imp' incorporates:
     *  Inport: '<S211>/T_turb'
     */
    rtb_Gain_c = rtb_MinMax25;

    /* End of Outputs for SubSystem: '<S210>/RTC_off' */
#endif

    /* End of Outputs for SubSystem: '<S203>/VariantSubsystem' */

    /* Switch: '<S203>/Switch2' incorporates:
     *  Constant: '<S205>/Constant'
     *  Logic: '<S203>/Logical1'
     *  RelationalOperator: '<S203>/Comparison2'
     */
    if ((((uint32)Rte_Prm_HeTSXR_e_All_TactToDomain_HeTSXR_e_All_TactToDomain())
         == CeTSXR_e_SumDomain) && tmp)
    {
        /* Switch: '<S203>/Switch3' incorporates:
         *  Constant: '<S207>/Calib'
         */
        if (Rte_Prm_HeATRR_b_RTC_Enbl_HeATRR_b_RTC_Enbl())
        {
            rtb_MinMax25 = rtb_Gain_c;
        }

        /* End of Switch: '<S203>/Switch3' */

        /* Switch: '<S203>/Switch2' incorporates:
         *  Sum: '<S203>/Sum'
         */
        rtb_MinMax25 += rtb_TmpSignalConversionAtVeTTIR_M_PumpTr;
    }

    /* End of Switch: '<S203>/Switch2' */

    /* Outport: '<Root>/VeATRR_M_MinPedal_Tact_xUndrSht' incorporates:
     *  SignalConversion generated from: '<S1>/VeATRR_M_MinPedal_Tact_xUndrSht'
     */
    (void)Rte_Write_VeATRR_M_MinPedal_Tact_xUndrSht_Value(rtb_MinMax25);

    /* Outport: '<Root>/VeATRR_r_Brk2Wheel' incorporates:
     *  SignalConversion generated from: '<S1>/VeATRR_r_Brk2Wheel'
     */
    (void)Rte_Write_VeATRR_r_Brk2Wheel_Value
        (rtb_TmpSignalConversionAtVeTINR_r_TCMTra);

    /* Outport: '<Root>/VeATRR_r_Strat2Wheel' incorporates:
     *  SignalConversion generated from: '<S1>/VeATRR_r_Strat2Wheel'
     */
    (void)Rte_Write_VeATRR_r_Strat2Wheel_Value(rtb_Switch1_md);

    /* Outport: '<Root>/VeATRR_r_Tact2Wheel' incorporates:
     *  SignalConversion generated from: '<S1>/VeATRR_r_Tact2Wheel'
     */
    (void)Rte_Write_VeATRR_r_Tact2Wheel_Value(rtb_VeATRR_r_Tact2Wheel);

    /* SignalConversion generated from: '<S1>/VeWTAR_M_ToReqPark' incorporates:
     *  Inport: '<Root>/VeWTAR_M_ToReqPark'
     */
    (void)Rte_Read_VeWTAR_M_ToReqPark_Value
        (&rtb_TmpSignalConversionAtVeWTAR_M_ToRe_p);

    /* SignalConversion generated from: '<S1>/VeWTAR_M_ToReqStgc_PostLim' incorporates:
     *  Inport: '<Root>/VeWTAR_M_ToReqStgc_PostLim'
     */
    (void)Rte_Read_VeWTAR_M_ToReqStgc_PostLim_Value
        (&rtb_TmpSignalConversionAtVeWTAR_M_ToReqS);

    /* Switch: '<S9>/Switch8' incorporates:
     *  Constant: '<S179>/Constant Value'
     *  Constant: '<S9>/ConstantValue14'
     *  RelationalOperator: '<S179>/Not Equal'
     *  RelationalOperator: '<S9>/GreaterThan7'
     *  Switch: '<S179>/Switch1'
     */
    if (rtb_Switch1_md < 0.01F)
    {
        /* Switch: '<S9>/Switch8' incorporates:
         *  Constant: '<S9>/ConstantValue16'
         */
        rtb_TmpSignalConversionAtVeWTAR_M_ToReqS = 0.0F;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S9>/ProtectedDivision6' */
        if (rtb_TmpSignalConversionAtVeWTAR_M_ToReqS != 0.0F)
        {
            /* Switch: '<S9>/Switch8' incorporates:
             *  Product: '<S179>/Division'
             *  Switch: '<S179>/Switch1'
             */
            rtb_TmpSignalConversionAtVeWTAR_M_ToReqS /= rtb_Switch1_md;
        }
        else
        {
            /* Switch: '<S9>/Switch8' incorporates:
             *  Constant: '<S179>/Constant Value4'
             *  Switch: '<S179>/Switch1'
             *  Switch: '<S179>/Switch2'
             *  Switch: '<S179>/Switch3'
             */
            rtb_TmpSignalConversionAtVeWTAR_M_ToReqS = 0.0F;
        }

        /* End of Outputs for SubSystem: '<S9>/ProtectedDivision6' */
    }

    /* End of Switch: '<S9>/Switch8' */

    /* SignalConversion generated from: '<S1>/VeWTAR_r_PRNDL_Coeff' incorporates:
     *  Inport: '<Root>/VeWTAR_r_PRNDL_Coeff'
     */
    (void)Rte_Read_VeWTAR_r_PRNDL_Coeff_Value
        (&rtb_TmpSignalConversionAtVeWTAR_r_PRNDL_);

    /* RelationalOperator: '<S57>/Equal2' incorporates:
     *  Constant: '<S57>/ConstantValue2'
     */
    rtb_Equal2 = (rtb_TmpSignalConversionAtVeWTAR_r_PRNDL_ < -0.5F);

    /* RelationalOperator: '<S57>/Equal3' incorporates:
     *  Constant: '<S57>/ConstantValue3'
     */
    rtb_Equal3 = (rtb_TmpSignalConversionAtVeWTAR_r_PRNDL_ > 0.5F);

    /* SignalConversion generated from: '<S1>/VeTRGR_e_VldtdTransRngSt' incorporates:
     *  Inport: '<Root>/VeTRGR_e_VldtdTransRngSt'
     */
    (void)Rte_Read_VeTRGR_e_VldtdTransRngSt_Value
        (&rtb_TmpSignalConversionAtVeTRGR_e_VldtdT);

    /* Logic: '<S57>/Logical7' incorporates:
     *  Constant: '<S75>/Constant'
     *  Constant: '<S76>/Constant'
     *  Constant: '<S80>/Calib'
     *  Constant: '<S81>/Calib'
     *  Logic: '<S57>/Logical10'
     *  Logic: '<S57>/Logical9'
     *  RelationalOperator: '<S57>/Equal4'
     *  RelationalOperator: '<S57>/Equal6'
     */
    rtb_Logical7 = (((KeATRR_b_PRNDL_Arb_ParkOff) && (((uint32)
                       rtb_TmpSignalConversionAtVeTRGR_e_VldtdT) ==
                      CeTRGR_e_TransRangePark)) || ((KeATRR_b_PRNDL_Arb_NtlOff) &&
                     (((uint32)rtb_TmpSignalConversionAtVeTRGR_e_VldtdT) ==
                      CeTRGR_e_TransRangeNeutral)));

    /* Outputs for Atomic SubSystem: '<S57>/EdgeRising' */
    /* Logic: '<S77>/OR1' incorporates:
     *  UnitDelay: '<S77>/Unit Delay'
     */
    rtb_OR1_e = !ATRR_ac_DW.UnitDelay_DSTATE_o;

    /* Update for UnitDelay: '<S77>/Unit Delay' */
    ATRR_ac_DW.UnitDelay_DSTATE_o = rtb_Logical7;

    /* Logic: '<S57>/Logical11' incorporates:
     *  Constant: '<S57>/ConstantValue2'
     *  Constant: '<S57>/ConstantValue3'
     *  Logic: '<S57>/Logical3'
     *  Logic: '<S57>/Logical5'
     *  Logic: '<S57>/Logical6'
     *  Logic: '<S57>/Logical8'
     *  Logic: '<S77>/AND'
     *  RelationalOperator: '<S57>/Equal1'
     *  RelationalOperator: '<S57>/Equal5'
     *  UnitDelay: '<S57>/UnitDelay2'
     *  UnitDelay: '<S57>/UnitDelay3'
     */
    VeATRC_b_GrgShft_Act = (((rtb_Equal2 && (ATRR_ac_DW.UnitDelay2_DSTATE >=
        -0.5F)) || (rtb_Equal3 && (ATRR_ac_DW.UnitDelay3_DSTATE <= 0.5F))) ||
                            (rtb_Logical7 && rtb_OR1_e));

    /* End of Outputs for SubSystem: '<S57>/EdgeRising' */

    /* Switch: '<S74>/Switch2' incorporates:
     *  Switch: '<S57>/Switch4'
     *  Switch: '<S74>/Switch3'
     *  UnitDelay: '<S57>/UnitDelay1'
     *  UnitDelay: '<S74>/UnitDelay'
     */
    if (VeATRC_b_GrgShft_Act)
    {
        for (i = 0; i < 13; i++)
        {
            ATRR_ac_DW.UnitDelay_DSTATE[i] = ATRR_ac_DW.UnitDelay1_DSTATE[i];
        }

        /* Switch: '<S187>/Switch2' incorporates:
         *  Constant: '<S74>/ConstantValue4'
         *  UnitDelay: '<S57>/UnitDelay1'
         *  UnitDelay: '<S74>/UnitDelay'
         */
        rtb_TmpSignalConversionAtVeTTQR_M_TCMSum = 0.0F;
    }
    else
    {
        if (rtb_Logical7)
        {
            /* Switch: '<S57>/Switch4' incorporates:
             *  Constant: '<S89>/Calib'
             */
            rtb_TmpSignalConversionAtVeTTQR_M_TCMSum =
                KeATRR_t_QudrntPrtctn_Blnd_PN;
        }
        else
        {
            /* Switch: '<S57>/Switch4' incorporates:
             *  Constant: '<S88>/Calib'
             */
            rtb_TmpSignalConversionAtVeTTQR_M_TCMSum =
                KeATRR_t_QudrntPrtctn_Blnd;
        }

        /* MinMax: '<S74>/Maximum' incorporates:
         *  Constant: '<S87>/Calib'
         */
        rtb_TmpSignalConversionAtVeTTQR_M_TCMSum = fmaxf(KeATRR_t_DT,
            rtb_TmpSignalConversionAtVeTTQR_M_TCMSum);

        /* Outputs for Atomic SubSystem: '<S74>/ProtectedDivision' */
        /* Switch: '<S92>/Switch1' incorporates:
         *  Constant: '<S87>/Calib'
         *  Constant: '<S92>/Constant Value'
         *  Constant: '<S92>/Constant Value1'
         *  Constant: '<S92>/Constant Value2'
         *  Constant: '<S92>/Constant Value3'
         *  Logic: '<S92>/AND'
         *  RelationalOperator: '<S92>/Greater Than or Equal '
         *  RelationalOperator: '<S92>/Greater Than or Equal 1'
         *  RelationalOperator: '<S92>/Not Equal'
         *  RelationalOperator: '<S92>/Not Equal1'
         *  Switch: '<S92>/Switch2'
         *  Switch: '<S92>/Switch3'
         */
        if ((KeATRR_t_DT != 0.0F) && (rtb_TmpSignalConversionAtVeTTQR_M_TCMSum
                != 0.0F))
        {
            /* Switch: '<S92>/Switch1' incorporates:
             *  Product: '<S92>/Division'
             */
            rtb_TmpSignalConversionAtVeTTQR_M_TCMSum = KeATRR_t_DT /
                rtb_TmpSignalConversionAtVeTTQR_M_TCMSum;
        }
        else if (KeATRR_t_DT > 0.0F)
        {
            /* Switch: '<S92>/Switch2' incorporates:
             *  Constant: '<S92>/MAXFLOAT'
             *  Switch: '<S92>/Switch1'
             */
            rtb_TmpSignalConversionAtVeTTQR_M_TCMSum = 3.402823466E+38F;
        }
        else if (KeATRR_t_DT < 0.0F)
        {
            /* Switch: '<S92>/Switch3' incorporates:
             *  Constant: '<S92>/MINFLOAT'
             *  Switch: '<S92>/Switch1'
             *  Switch: '<S92>/Switch2'
             */
            rtb_TmpSignalConversionAtVeTTQR_M_TCMSum = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S92>/Switch1' incorporates:
             *  Constant: '<S92>/Constant Value4'
             *  Switch: '<S92>/Switch2'
             *  Switch: '<S92>/Switch3'
             */
            rtb_TmpSignalConversionAtVeTTQR_M_TCMSum = 0.0F;
        }

        /* End of Switch: '<S92>/Switch1' */
        /* End of Outputs for SubSystem: '<S74>/ProtectedDivision' */

        /* Switch: '<S187>/Switch2' incorporates:
         *  Sum: '<S74>/Summation1'
         *  UnitDelay: '<S74>/UnitDelay1'
         */
        rtb_TmpSignalConversionAtVeTTQR_M_TCMSum +=
            ATRR_ac_DW.UnitDelay1_DSTATE_m;
    }

    /* End of Switch: '<S74>/Switch2' */

    /* MinMax: '<S74>/MinMax' incorporates:
     *  Constant: '<S74>/ConstantValue2'
     *  UnitDelay: '<S74>/UnitDelay1'
     */
    ATRR_ac_DW.UnitDelay1_DSTATE_m = fminf
        (rtb_TmpSignalConversionAtVeTTQR_M_TCMSum, 1.0F);

    /* RelationalOperator: '<S74>/Comparison2' incorporates:
     *  Constant: '<S74>/ConstantValue1'
     *  UnitDelay: '<S74>/UnitDelay1'
     */
    VeATRC_b_PRNDLBlend_Act = (ATRR_ac_DW.UnitDelay1_DSTATE_m < 1.0F);

    /* Outputs for Atomic SubSystem: '<S57>/SignalLatchOnWithReset' */
    /* Logic: '<S90>/OR1' incorporates:
     *  Logic: '<S57>/Logical12'
     *  Logic: '<S90>/OR'
     *  UnitDelay: '<S90>/Unit Delay'
     */
    VeATRR_b_GrgShftBlend_Act = ((VeATRC_b_GrgShft_Act) ||
        ((VeATRC_b_PRNDLBlend_Act) && (VeATRR_b_GrgShftBlend_Act)));

    /* End of Outputs for SubSystem: '<S57>/SignalLatchOnWithReset' */

    /* Switch: '<S183>/Switch' incorporates:
     *  Constant: '<S183>/ConstantValue4'
     *  Inport: '<Root>/VeWTAR_M_ToReqImmd'
     *  RelationalOperator: '<S183>/GreaterThan1'
     */
    if (rtb_VeATRR_r_Tact2Wheel < 0.01F)
    {
        /* Switch: '<S183>/Switch3' incorporates:
         *  Constant: '<S183>/ConstantValue2'
         *  Switch: '<S183>/Switch'
         */
        VeATRC_M_ToReqImmdCnvt = 0.0F;
    }
    else
    {
        (void)Rte_Read_VeWTAR_M_ToReqImmd_Value(&rtb_MinMax18);

        /* MinMax: '<S9>/MinMax18' incorporates:
         *  Inport: '<Root>/VeWTAR_M_ToReqImmd'
         *  MinMax: '<S9>/MinMax5'
         */
        rtb_MinMax18 = fminf(rtb_TmpSignalConversionAtVeWTAR_M_Typ1Ma, fmaxf
                             (rtb_TmpSignalConversionAtVeWTAR_M_Typ1Mi,
                              rtb_MinMax18));

        /* Outputs for Atomic SubSystem: '<S183>/ProtectedDivision2' */
        /* Switch: '<S253>/Switch1' incorporates:
         *  Constant: '<S253>/Constant Value'
         *  RelationalOperator: '<S253>/Not Equal'
         */
        if (rtb_MinMax18 != 0.0F)
        {
            /* Switch: '<S183>/Switch3' incorporates:
             *  Product: '<S253>/Division'
             *  Switch: '<S183>/Switch'
             *  Switch: '<S253>/Switch1'
             */
            VeATRC_M_ToReqImmdCnvt = rtb_MinMax18 / rtb_VeATRR_r_Tact2Wheel;
        }
        else
        {
            /* Switch: '<S183>/Switch3' incorporates:
             *  Constant: '<S253>/Constant Value4'
             *  Switch: '<S183>/Switch'
             *  Switch: '<S253>/Switch2'
             *  Switch: '<S253>/Switch3'
             */
            VeATRC_M_ToReqImmdCnvt = 0.0F;
        }

        /* End of Switch: '<S253>/Switch1' */
        /* End of Outputs for SubSystem: '<S183>/ProtectedDivision2' */
    }

    /* End of Switch: '<S183>/Switch' */

    /* Outputs for Atomic SubSystem: '<S183>/VariantSubsystem' */
#if Rte_SysCon_Variant_ATRR_RTC_On

    /* Outputs for Atomic SubSystem: '<S254>/RTC_on' */
    /* Gain: '<S264>/Gain' incorporates:
     *  Lookup_n-D: '<S266>/Vector'
     *  SignalConversion generated from: '<S1>/VeTCCR_r_RampFactor'
     */
    rtb_TmpSignalConversionAtVeTTQR_M_TCMSum = 0.5F * look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeTCCR_r_RampFa,
         (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsB_KxHSCR_r_TCC_TturbFromNC2_CoeffsB
          ()),
         (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsB_KtHSCR_r_TCC_TturbFromNC2_CoeffsB
          ()), 21U);

    /* Lookup_n-D: '<S265>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeTCCR_r_RampFactor'
     */
    rtb_MinMax18 = look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeTCCR_r_RampFa,
         (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsA_KxHSCR_r_TCC_TturbFromNC2_CoeffsA
          ()),
         (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsA_KtHSCR_r_TCC_TturbFromNC2_CoeffsA
          ()), 21U);

    /* Outputs for Atomic SubSystem: '<S264>/Protected Division1' */
    /* Switch: '<S268>/Switch1' incorporates:
     *  Constant: '<S268>/Constant Value'
     *  Constant: '<S268>/Constant Value1'
     *  Constant: '<S268>/Constant Value2'
     *  Constant: '<S268>/Constant Value3'
     *  Logic: '<S268>/AND'
     *  RelationalOperator: '<S268>/Greater Than or Equal '
     *  RelationalOperator: '<S268>/Greater Than or Equal 1'
     *  RelationalOperator: '<S268>/Not Equal'
     *  RelationalOperator: '<S268>/Not Equal1'
     *  Switch: '<S268>/Switch2'
     *  Switch: '<S268>/Switch3'
     */
    if ((rtb_TmpSignalConversionAtVeTTQR_M_TCMSum != 0.0F) && (rtb_MinMax18 !=
            0.0F))
    {
        /* Switch: '<S268>/Switch1' incorporates:
         *  Product: '<S268>/Division'
         */
        rtb_Switch1_cnx = rtb_TmpSignalConversionAtVeTTQR_M_TCMSum /
            rtb_MinMax18;
    }
    else if (rtb_TmpSignalConversionAtVeTTQR_M_TCMSum > 0.0F)
    {
        /* Switch: '<S268>/Switch2' incorporates:
         *  Constant: '<S268>/MAXFLOAT'
         *  Switch: '<S268>/Switch1'
         */
        rtb_Switch1_cnx = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtVeTTQR_M_TCMSum < 0.0F)
    {
        /* Switch: '<S268>/Switch3' incorporates:
         *  Constant: '<S268>/MINFLOAT'
         *  Switch: '<S268>/Switch1'
         *  Switch: '<S268>/Switch2'
         */
        rtb_Switch1_cnx = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S268>/Switch1' incorporates:
         *  Constant: '<S268>/Constant Value4'
         *  Switch: '<S268>/Switch2'
         *  Switch: '<S268>/Switch3'
         */
        rtb_Switch1_cnx = 0.0F;
    }

    /* End of Switch: '<S268>/Switch1' */
    /* End of Outputs for SubSystem: '<S264>/Protected Division1' */

    /* Product: '<S264>/Product1' */
    rtb_TmpSignalConversionAtVeTTQR_M_TCMSum *=
        rtb_TmpSignalConversionAtVeTTQR_M_TCMSum;

    /* Outputs for Atomic SubSystem: '<S264>/Protected Division2' */
    /* Switch: '<S269>/Switch1' incorporates:
     *  Constant: '<S269>/Constant Value'
     *  Constant: '<S269>/Constant Value1'
     *  Constant: '<S269>/Constant Value2'
     *  Constant: '<S269>/Constant Value3'
     *  Logic: '<S269>/AND'
     *  RelationalOperator: '<S269>/Greater Than or Equal '
     *  RelationalOperator: '<S269>/Greater Than or Equal 1'
     *  RelationalOperator: '<S269>/Not Equal'
     *  RelationalOperator: '<S269>/Not Equal1'
     *  Switch: '<S269>/Switch2'
     *  Switch: '<S269>/Switch3'
     */
    if ((rtb_TmpSignalConversionAtVeTTQR_M_TCMSum != 0.0F) && (rtb_MinMax18 !=
            0.0F))
    {
        /* Switch: '<S269>/Switch1' incorporates:
         *  Product: '<S269>/Division'
         */
        rtb_TmpSignalConversionAtVeTTQR_M_TCMSum /= rtb_MinMax18;
    }
    else if (rtb_TmpSignalConversionAtVeTTQR_M_TCMSum > 0.0F)
    {
        /* Switch: '<S269>/Switch2' incorporates:
         *  Constant: '<S269>/MAXFLOAT'
         *  Switch: '<S269>/Switch1'
         */
        rtb_TmpSignalConversionAtVeTTQR_M_TCMSum = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtVeTTQR_M_TCMSum < 0.0F)
    {
        /* Switch: '<S269>/Switch3' incorporates:
         *  Constant: '<S269>/MINFLOAT'
         *  Switch: '<S269>/Switch1'
         *  Switch: '<S269>/Switch2'
         */
        rtb_TmpSignalConversionAtVeTTQR_M_TCMSum = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S269>/Switch1' incorporates:
         *  Constant: '<S269>/Constant Value4'
         *  Switch: '<S269>/Switch2'
         *  Switch: '<S269>/Switch3'
         */
        rtb_TmpSignalConversionAtVeTTQR_M_TCMSum = 0.0F;
    }

    /* End of Switch: '<S269>/Switch1' */
    /* End of Outputs for SubSystem: '<S264>/Protected Division2' */

    /* Outputs for Atomic SubSystem: '<S264>/Protected Division4' */
    /* Switch: '<S270>/Switch1' incorporates:
     *  Constant: '<S270>/Constant Value1'
     *  RelationalOperator: '<S270>/Not Equal1'
     */
    if (rtb_MinMax18 != 0.0F)
    {
        /* Switch: '<S270>/Switch1' incorporates:
         *  Constant: '<S264>/Constant Value2'
         *  Product: '<S270>/Division'
         */
        rtb_MinMax18 = 1.0F / rtb_MinMax18;
    }
    else
    {
        /* Switch: '<S270>/Switch1' */
        rtb_MinMax18 = 3.402823466E+38F;
    }

    /* End of Switch: '<S270>/Switch1' */
    /* End of Outputs for SubSystem: '<S264>/Protected Division4' */

    /* Signum: '<S263>/Signum' */
    if (rtb_MinMax18 < 0.0F)
    {
        rtb_TmpSignalConversionAtVeWTAR_M_MinPre = -1.0F;
    }
    else if (rtb_MinMax18 > 0.0F)
    {
        rtb_TmpSignalConversionAtVeWTAR_M_MinPre = 1.0F;
    }
    else
    {
        rtb_TmpSignalConversionAtVeWTAR_M_MinPre = rtb_MinMax18;
    }

    /* End of Signum: '<S263>/Signum' */

    /* Sum: '<S263>/Sum3' incorporates:
     *  Constant: '<S263>/Constant Value'
     *  Gain: '<S264>/Gain1'
     *  Lookup_n-D: '<S267>/Vector'
     *  MinMax: '<S263>/MinMax1'
     *  Product: '<S263>/Product'
     *  Product: '<S263>/Product1'
     *  SignalConversion generated from: '<S1>/VeTCCR_r_RampFactor'
     *  Sqrt: '<S263>/Square Root'
     *  Sum: '<S263>/Sum2'
     *  Sum: '<S264>/Sum1'
     */
    rtb_Switch1_cnx = ((sqrtf(fmaxf((VeATRC_M_ToReqImmdCnvt -
                           (look1_iflf_binlca_16a
                            (rtb_TmpSignalConversionAtVeTCCR_r_RampFa,
        (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsC_KxHSCR_r_TCC_TturbFromNC2_CoeffsC
         ()),
        (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsC_KtHSCR_r_TCC_TturbFromNC2_CoeffsC
         ()), 3U) - rtb_TmpSignalConversionAtVeTTQR_M_TCMSum)) * rtb_MinMax18,
                          0.0F)) * rtb_TmpSignalConversionAtVeWTAR_M_MinPre) + (
                        -rtb_Switch1_cnx)) +
        rtb_TmpSignalConversionAtVeTCCR_r_RampFa;

    /* Outputs for Atomic SubSystem: '<S258>/Protected Division3' */
    /* Switch: '<S261>/Switch1' incorporates:
     *  Constant: '<S261>/Constant Value'
     *  Constant: '<S261>/Constant Value1'
     *  Constant: '<S261>/Constant Value2'
     *  Constant: '<S261>/Constant Value3'
     *  Logic: '<S261>/AND'
     *  RelationalOperator: '<S261>/Greater Than or Equal '
     *  RelationalOperator: '<S261>/Greater Than or Equal 1'
     *  RelationalOperator: '<S261>/Not Equal'
     *  RelationalOperator: '<S261>/Not Equal1'
     *  Switch: '<S261>/Switch2'
     *  Switch: '<S261>/Switch3'
     */
    if ((rtb_TmpSignalConversionAtVeTCCR_r_RampFa != 0.0F) && (rtb_Switch1_cnx
            != 0.0F))
    {
        /* Switch: '<S261>/Switch1' incorporates:
         *  Product: '<S261>/Division'
         */
        rtb_Switch1_cnx = rtb_TmpSignalConversionAtVeTCCR_r_RampFa /
            rtb_Switch1_cnx;
    }
    else if (rtb_TmpSignalConversionAtVeTCCR_r_RampFa > 0.0F)
    {
        /* Switch: '<S261>/Switch2' incorporates:
         *  Constant: '<S261>/MAXFLOAT'
         *  Switch: '<S261>/Switch1'
         */
        rtb_Switch1_cnx = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtVeTCCR_r_RampFa < 0.0F)
    {
        /* Switch: '<S261>/Switch3' incorporates:
         *  Constant: '<S261>/MINFLOAT'
         *  Switch: '<S261>/Switch1'
         *  Switch: '<S261>/Switch2'
         */
        rtb_Switch1_cnx = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S261>/Switch1' incorporates:
         *  Constant: '<S261>/Constant Value4'
         *  Switch: '<S261>/Switch2'
         *  Switch: '<S261>/Switch3'
         */
        rtb_Switch1_cnx = 0.0F;
    }

    /* End of Switch: '<S261>/Switch1' */
    /* End of Outputs for SubSystem: '<S258>/Protected Division3' */

    /* Lookup_n-D: '<S259>/Vector' incorporates:
     *  Switch: '<S261>/Switch1'
     */
    rtb_Switch1_cnx = look1_iflf_binlca_16a(rtb_Switch1_cnx,
        (Rte_Prm_KxHSCR_r_TCC_TorqRatio_KxHSCR_r_TCC_TorqRatio()),
        (Rte_Prm_KtHSCR_r_TCC_TorqRatio_KtHSCR_r_TCC_TorqRatio()), 17U);

    /* Outputs for Atomic SubSystem: '<S258>/Protected Division1' */
    /* Switch: '<S260>/Switch1' incorporates:
     *  Constant: '<S260>/Constant Value'
     *  Constant: '<S260>/Constant Value1'
     *  Constant: '<S260>/Constant Value2'
     *  Constant: '<S260>/Constant Value3'
     *  Logic: '<S260>/AND'
     *  RelationalOperator: '<S260>/Greater Than or Equal '
     *  RelationalOperator: '<S260>/Greater Than or Equal 1'
     *  RelationalOperator: '<S260>/Not Equal'
     *  RelationalOperator: '<S260>/Not Equal1'
     *  Switch: '<S260>/Switch2'
     *  Switch: '<S260>/Switch3'
     */
    if ((VeATRC_M_ToReqImmdCnvt != 0.0F) && (rtb_Switch1_cnx != 0.0F))
    {
        /* Switch: '<S260>/Switch1' incorporates:
         *  Product: '<S260>/Division'
         */
        rtb_Switch1_cnx = VeATRC_M_ToReqImmdCnvt / rtb_Switch1_cnx;
    }
    else if (VeATRC_M_ToReqImmdCnvt > 0.0F)
    {
        /* Switch: '<S260>/Switch2' incorporates:
         *  Constant: '<S260>/MAXFLOAT'
         *  Switch: '<S260>/Switch1'
         */
        rtb_Switch1_cnx = 3.402823466E+38F;
    }
    else if (VeATRC_M_ToReqImmdCnvt < 0.0F)
    {
        /* Switch: '<S260>/Switch3' incorporates:
         *  Constant: '<S260>/MINFLOAT'
         *  Switch: '<S260>/Switch1'
         *  Switch: '<S260>/Switch2'
         */
        rtb_Switch1_cnx = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S260>/Switch1' incorporates:
         *  Constant: '<S260>/Constant Value4'
         *  Switch: '<S260>/Switch2'
         *  Switch: '<S260>/Switch3'
         */
        rtb_Switch1_cnx = 0.0F;
    }

    /* End of Switch: '<S260>/Switch1' */
    /* End of Outputs for SubSystem: '<S258>/Protected Division1' */

    /* VariantMerge generated from: '<S254>/T_imp' incorporates:
     *  Product: '<S257>/Product4'
     *  Sum: '<S257>/Sum4'
     *  Sum: '<S257>/Sum5'
     */
    rtb_Switch1_cnx = ((rtb_Switch1_cnx - VeATRC_M_ToReqImmdCnvt) *
                       rtb_TmpSignalConversionAtVeVSDR_n_NTurbO) +
        VeATRC_M_ToReqImmdCnvt;

    /* End of Outputs for SubSystem: '<S254>/RTC_on' */
#else

    /* Outputs for Atomic SubSystem: '<S254>/RTC_off' */
    /* VariantMerge generated from: '<S254>/T_imp' incorporates:
     *  Inport: '<S255>/T_turb'
     */
    rtb_Switch1_cnx = VeATRC_M_ToReqImmdCnvt;

    /* End of Outputs for SubSystem: '<S254>/RTC_off' */
#endif

    /* End of Outputs for SubSystem: '<S183>/VariantSubsystem' */

    /* Switch: '<S183>/Switch2' incorporates:
     *  Constant: '<S249>/Constant'
     *  Logic: '<S183>/Logical1'
     *  RelationalOperator: '<S183>/Comparison2'
     */
    if ((((uint32)Rte_Prm_HeTSXR_e_All_TactToDomain_HeTSXR_e_All_TactToDomain())
         == CeTSXR_e_SumDomain) && tmp)
    {
        /* Switch: '<S183>/Switch3' incorporates:
         *  Constant: '<S251>/Calib'
         *  Sum: '<S183>/Sum'
         *  Switch: '<S183>/Switch2'
         */
        if (Rte_Prm_HeATRR_b_RTC_Enbl_HeATRR_b_RTC_Enbl())
        {
            VeATRC_M_ToReqImmdCnvt = rtb_Switch1_cnx;
        }

        VeATRC_M_ToReqImmdCnvt = VeATRC_M_ToReqImmdCnvt +
            rtb_TmpSignalConversionAtVeTTIR_M_PumpTr;
    }

    /* End of Switch: '<S183>/Switch2' */

    /* Switch: '<S143>/Switch1' incorporates:
     *  Constant: '<S156>/Calib'
     *  Constant: '<S157>/Calib'
     *  Constant: '<S160>/Constant Value'
     *  Constant: '<S160>/Constant Value1'
     *  Constant: '<S160>/Constant Value2'
     *  Constant: '<S160>/Constant Value3'
     *  Logic: '<S160>/AND'
     *  RelationalOperator: '<S143>/Comparison2'
     *  RelationalOperator: '<S160>/Greater Than or Equal '
     *  RelationalOperator: '<S160>/Greater Than or Equal 1'
     *  RelationalOperator: '<S160>/Not Equal'
     *  RelationalOperator: '<S160>/Not Equal1'
     *  Switch: '<S160>/Switch1'
     *  Switch: '<S160>/Switch2'
     *  Switch: '<S160>/Switch3'
     */
    if (rtb_Switch1_ll <= KeATRR_t_CombDelayDisblTime)
    {
        /* Switch: '<S187>/Switch2' incorporates:
         *  Constant: '<S143>/ConstantValue2'
         */
        rtb_TmpSignalConversionAtVeTTQR_M_TCMSum = 1.0F;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S143>/ProtectedDivision' */
        if ((KeATRR_k_CmbDlySettlgTmFact != 0.0F) && (rtb_Switch1_ll != 0.0F))
        {
            /* Switch: '<S160>/Switch1' incorporates:
             *  Constant: '<S156>/Calib'
             *  Product: '<S160>/Division'
             */
            rtb_Switch1_cnx = KeATRR_k_CmbDlySettlgTmFact / rtb_Switch1_ll;
        }
        else if (KeATRR_k_CmbDlySettlgTmFact > 0.0F)
        {
            /* Switch: '<S160>/Switch2' incorporates:
             *  Constant: '<S160>/MAXFLOAT'
             *  Switch: '<S160>/Switch1'
             */
            rtb_Switch1_cnx = 3.402823466E+38F;
        }
        else if (KeATRR_k_CmbDlySettlgTmFact < 0.0F)
        {
            /* Switch: '<S160>/Switch3' incorporates:
             *  Constant: '<S160>/MINFLOAT'
             *  Switch: '<S160>/Switch1'
             *  Switch: '<S160>/Switch2'
             */
            rtb_Switch1_cnx = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S160>/Switch1' incorporates:
             *  Constant: '<S160>/Constant Value4'
             *  Switch: '<S160>/Switch2'
             *  Switch: '<S160>/Switch3'
             */
            rtb_Switch1_cnx = 0.0F;
        }

        /* End of Outputs for SubSystem: '<S143>/ProtectedDivision' */

        /* Product: '<S143>/Product7' incorporates:
         *  Constant: '<S156>/Calib'
         *  Constant: '<S158>/Calib'
         *  Constant: '<S160>/Constant Value2'
         *  Constant: '<S160>/Constant Value3'
         *  Product: '<S143>/Product8'
         *  RelationalOperator: '<S160>/Greater Than or Equal '
         *  RelationalOperator: '<S160>/Greater Than or Equal 1'
         *  Switch: '<S160>/Switch1'
         *  Switch: '<S160>/Switch2'
         *  Switch: '<S160>/Switch3'
         */
        rtb_Switch1_cnx *= KeATRR_t_DT;

        /* Outputs for Atomic SubSystem: '<S143>/ProtectedDivision1' */
        /* Switch: '<S161>/Switch1' incorporates:
         *  Constant: '<S143>/ConstantValue5'
         *  Constant: '<S161>/Constant Value'
         *  Constant: '<S161>/Constant Value1'
         *  Constant: '<S161>/Constant Value2'
         *  Constant: '<S161>/Constant Value3'
         *  Logic: '<S161>/AND'
         *  Product: '<S143>/Product7'
         *  RelationalOperator: '<S161>/Greater Than or Equal '
         *  RelationalOperator: '<S161>/Greater Than or Equal 1'
         *  RelationalOperator: '<S161>/Not Equal'
         *  RelationalOperator: '<S161>/Not Equal1'
         *  Sum: '<S143>/Sum3'
         *  Switch: '<S161>/Switch2'
         *  Switch: '<S161>/Switch3'
         */
        if ((rtb_Switch1_cnx != 0.0F) && ((rtb_Switch1_cnx + 1.0F) != 0.0F))
        {
            /* Switch: '<S161>/Switch1' incorporates:
             *  Product: '<S161>/Division'
             */
            rtb_TmpSignalConversionAtVeTTQR_M_TCMSum = rtb_Switch1_cnx /
                (rtb_Switch1_cnx + 1.0F);
        }
        else if (rtb_Switch1_cnx > 0.0F)
        {
            /* Switch: '<S161>/Switch2' incorporates:
             *  Constant: '<S161>/MAXFLOAT'
             *  Switch: '<S161>/Switch1'
             */
            rtb_TmpSignalConversionAtVeTTQR_M_TCMSum = 3.402823466E+38F;
        }
        else if (rtb_Switch1_cnx < 0.0F)
        {
            /* Switch: '<S161>/Switch3' incorporates:
             *  Constant: '<S161>/MINFLOAT'
             *  Switch: '<S161>/Switch1'
             *  Switch: '<S161>/Switch2'
             */
            rtb_TmpSignalConversionAtVeTTQR_M_TCMSum = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S161>/Switch1' incorporates:
             *  Constant: '<S161>/Constant Value4'
             *  Switch: '<S161>/Switch2'
             *  Switch: '<S161>/Switch3'
             */
            rtb_TmpSignalConversionAtVeTTQR_M_TCMSum = 0.0F;
        }

        /* End of Switch: '<S161>/Switch1' */
        /* End of Outputs for SubSystem: '<S143>/ProtectedDivision1' */

        /* Outputs for Atomic SubSystem: '<S143>/Limiter' */
        /* Switch: '<S159>/Switch1' incorporates:
         *  Constant: '<S143>/ConstantValue6'
         *  RelationalOperator: '<S159>/Relational Operator'
         */
        if (1.0F < rtb_TmpSignalConversionAtVeTTQR_M_TCMSum)
        {
            /* Switch: '<S159>/Switch1' */
            rtb_TmpSignalConversionAtVeTTQR_M_TCMSum = 1.0F;
        }

        /* End of Switch: '<S159>/Switch1' */

        /* Switch: '<S159>/Switch' incorporates:
         *  Constant: '<S143>/ConstantValue7'
         *  RelationalOperator: '<S159>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeTTQR_M_TCMSum <= 0.0F)
        {
            /* Switch: '<S187>/Switch2' */
            rtb_TmpSignalConversionAtVeTTQR_M_TCMSum = 0.0F;
        }

        /* End of Switch: '<S159>/Switch' */
        /* End of Outputs for SubSystem: '<S143>/Limiter' */
    }

    /* End of Switch: '<S143>/Switch1' */

    /* Switch: '<S8>/Switch4' incorporates:
     *  Constant: '<S133>/Calib'
     */
    if (KeATRR_b_SEM_TactFstDsbl)
    {
        /* Switch: '<S8>/Switch6' incorporates:
         *  Constant: '<S132>/Calib'
         */
        if (KeATRR_b_BSM_TactFstDsbl)
        {
            /* Switch: '<S8>/Switch4' */
            rtb_Switch1_cnx = VeATRC_M_OutputTorqueReqHTDRCnvt;
        }
        else
        {
            /* Switch: '<S8>/Switch4' */
            rtb_Switch1_cnx = rtb_Max2[2];
        }

        /* End of Switch: '<S8>/Switch6' */
    }
    else
    {
        /* Switch: '<S8>/Switch4' */
        rtb_Switch1_cnx = rtb_Switch2_aa_idx_1;
    }

    /* End of Switch: '<S8>/Switch4' */

    /* Outputs for Atomic SubSystem: '<S143>/EdgeRising' */
    /* Logic: '<S152>/AND' incorporates:
     *  Logic: '<S152>/OR1'
     *  UnitDelay: '<S152>/Unit Delay'
     */
    rtb_OR1_e = !ATRR_ac_DW.UnitDelay_DSTATE_hd;

    /* Update for UnitDelay: '<S152>/Unit Delay' incorporates:
     *  Constant: '<S143>/TRUEConstant1'
     */
    ATRR_ac_DW.UnitDelay_DSTATE_hd = true;

    /* End of Outputs for SubSystem: '<S143>/EdgeRising' */

    /* Switch: '<S164>/Switch1' */
    if (rtb_OR1_e)
    {
        /* Switch: '<S164>/Switch1' */
        ATRR_ac_DW.UnitDelay_DSTATE_h[0] = rtb_Switch1_cnx;
        ATRR_ac_DW.UnitDelay_DSTATE_h[1] = rtb_Switch2_aa_idx_1;
    }

    /* End of Switch: '<S164>/Switch1' */

    /* Sum: '<S143>/Sum1' */
    VeATRC_M_ToCombDlyDelta[0] = rtb_Switch1_cnx -
        ATRR_ac_DW.UnitDelay_DSTATE_h[0];
    VeATRC_M_ToCombDlyDelta[1] = rtb_Switch2_aa_idx_1 -
        ATRR_ac_DW.UnitDelay_DSTATE_h[1];

    /* Outputs for Atomic SubSystem: '<S143>/SignalLatchOnWithReset' */
    for (i = 0; i < 2; i++)
    {
        /* Outputs for Atomic SubSystem: '<S143>/ClosedInterval' */
        /* Logic: '<S163>/OR1' incorporates:
         *  Constant: '<S153>/Calib'
         *  Constant: '<S154>/Calib'
         *  Logic: '<S143>/Logical3'
         *  Logic: '<S143>/Logical4'
         *  Logic: '<S151>/Logical Operator'
         *  Logic: '<S163>/NOT'
         *  Logic: '<S163>/OR'
         *  RelationalOperator: '<S151>/Relatonal Operator'
         *  RelationalOperator: '<S151>/Relatonal Operator1'
         */
        VeATRC_b_CombDlyFiltEnbl[(i)] = (rtb_VeATRR_b_TrqRtLmtEnbld_SEM ||
            ((rtb_VeATRR_b_TrqRtLmtEnbld_SEM || ((VeATRC_M_ToCombDlyDelta[(i)] <
            KeATRR_M_ToCombDlyNegRst) || (VeATRC_M_ToCombDlyDelta[(i)] >
            KeATRR_M_ToCombDlyPosRst))) && (VeATRC_b_CombDlyFiltEnbl[(i)])));

        /* End of Outputs for SubSystem: '<S143>/ClosedInterval' */

        /* Switch: '<S143>/Switch3' */
        if (VeATRC_b_CombDlyFiltEnbl[(i)])
        {
            /* Switch: '<S143>/Switch3' */
            VeATRC_k_ToCombFiltCoeff[(i)] =
                rtb_TmpSignalConversionAtVeTTQR_M_TCMSum;
        }
        else
        {
            /* Switch: '<S143>/Switch3' incorporates:
             *  Constant: '<S143>/ConstantValue8'
             */
            VeATRC_k_ToCombFiltCoeff[(i)] = 1.0F;
        }

        /* End of Switch: '<S143>/Switch3' */

        /* Sum: '<S143>/Sum2' incorporates:
         *  Product: '<S143>/Product'
         */
        VeATRC_M_ToCombustionDlyd[(i)] = (VeATRC_k_ToCombFiltCoeff[(i)] *
            VeATRC_M_ToCombDlyDelta[(i)]) + ATRR_ac_DW.UnitDelay_DSTATE_h[i];
    }

    /* End of Outputs for SubSystem: '<S143>/SignalLatchOnWithReset' */

    /* MinMax: '<S8>/MinMax1' */
    rtb_MinMax18 = fmaxf(rtb_Switch2_aa_idx_0, VeATRC_M_ToCombustionDlyd[0]);

    /* Gain: '<S142>/Gain' */
    VeATRC_M_HTDRTrqReqWithSEMArb = VeATRC_M_ToCombustionDlyd[1];

    /* SignalConversion generated from: '<S1>/VeAPSR_Pct_AccelPedalEffPosition' incorporates:
     *  SignalConversion generated from: '<S1>/VeCSVR_v_VehSpd'
     */
#if Rte_SysCon_Variant_ATRR_RaceStart_Enabled

    /* SignalConversion generated from: '<S1>/VeAPSR_Pct_AccelPedalEffPosition' incorporates:
     *  Inport: '<Root>/VeAPSR_Pct_AccelPedalEffPosition'
     */
    (void)Rte_Read_VeAPSR_Pct_AccelPedalEffPosition_Value
        (&rtb_TmpSignalConversionAtVeAPSR_Pct_Acce);

    /* SignalConversion generated from: '<S1>/VeCSVR_v_VehSpd' incorporates:
     *  Inport: '<Root>/VeCSVR_v_VehSpd'
     */
    (void)Rte_Read_VeCSVR_v_VehSpd_Value
        (&rtb_TmpSignalConversionAtVeCSVR_v_VehSpd);

#endif

    /* End of SignalConversion generated from: '<S1>/VeAPSR_Pct_AccelPedalEffPosition' */

    /* SignalConversion generated from: '<S1>/VeBTQR_M_DrvrIntndedTotBrkTrq' incorporates:
     *  Inport: '<Root>/VeBTQR_M_DrvrIntndedTotBrkTrq'
     */
    (void)Rte_Read_VeBTQR_M_DrvrIntndedTotBrkTrq_Value
        (&rtb_TmpSignalConversionAtVeBTQR_M_DrvrIn);

    /* Outputs for Atomic SubSystem: '<S1>/RaceStartDetermination' */
#if Rte_SysCon_Variant_ATRR_RaceStart_Enabled

    /* Outputs for Atomic SubSystem: '<S7>/RaceStartDetermination' */
    /* Outputs for Atomic SubSystem: '<S94>/Hysteresis' */
    /* Switch: '<S105>/Switch1' incorporates:
     *  Constant: '<S105>/Constant Value'
     *  Constant: '<S108>/Calib'
     *  Constant: '<S109>/Calib'
     *  RelationalOperator: '<S105>/Greater  Than'
     *  RelationalOperator: '<S105>/Greater  Than1'
     *  UnitDelay: '<S105>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeAPSR_Pct_Acce >
            KeATRR_M_RaceStartAccPdlThreshRSP)
    {
        ATRR_ac_DW.UnitDelay_DSTATE_hg = true;
    }
    else
    {
        ATRR_ac_DW.UnitDelay_DSTATE_hg =
            ((rtb_TmpSignalConversionAtVeAPSR_Pct_Acce >=
              KeATRR_M_RaceStartAccPdlThreshLSP) &&
             (ATRR_ac_DW.UnitDelay_DSTATE_hg));
    }

    /* End of Switch: '<S105>/Switch1' */
    /* End of Outputs for SubSystem: '<S94>/Hysteresis' */

    /* Outputs for Atomic SubSystem: '<S94>/Hysteresis1' */
    /* Switch: '<S106>/Switch1' incorporates:
     *  Constant: '<S106>/Constant Value'
     *  Constant: '<S117>/Calib'
     *  Constant: '<S118>/Calib'
     *  RelationalOperator: '<S106>/Greater  Than'
     *  RelationalOperator: '<S106>/Greater  Than1'
     *  UnitDelay: '<S106>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeCSVR_v_VehSpd >
            KeATRR_v_RaceStartSpdThreshRSP)
    {
        ATRR_ac_DW.UnitDelay_DSTATE_p4 = true;
    }
    else
    {
        ATRR_ac_DW.UnitDelay_DSTATE_p4 =
            ((rtb_TmpSignalConversionAtVeCSVR_v_VehSpd >=
              KeATRR_v_RaceStartSpdThreshLSP) && (ATRR_ac_DW.UnitDelay_DSTATE_p4));
    }

    /* End of Switch: '<S106>/Switch1' */
    /* End of Outputs for SubSystem: '<S94>/Hysteresis1' */

    /* Outputs for Atomic SubSystem: '<S94>/Hysteresis2' */
    /* Switch: '<S107>/Switch1' incorporates:
     *  Constant: '<S107>/Constant Value'
     *  Constant: '<S110>/Calib'
     *  Constant: '<S111>/Calib'
     *  RelationalOperator: '<S107>/Greater  Than'
     *  RelationalOperator: '<S107>/Greater  Than1'
     *  UnitDelay: '<S107>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeBTQR_M_DrvrIn >
            KeATRR_M_RaceStartNetTrqThreshRSP)
    {
        ATRR_ac_DW.UnitDelay_DSTATE_l = true;
    }
    else
    {
        ATRR_ac_DW.UnitDelay_DSTATE_l =
            ((rtb_TmpSignalConversionAtVeBTQR_M_DrvrIn >=
              KeATRR_M_RaceStartNetTrqThreshLSP) &&
             (ATRR_ac_DW.UnitDelay_DSTATE_l));
    }

    /* End of Switch: '<S107>/Switch1' */
    /* End of Outputs for SubSystem: '<S94>/Hysteresis2' */

    /* Inport: '<Root>/VeSRAR_b_Disable_RaceStart' */
    (void)Rte_Read_VeSRAR_b_Disable_RaceStart_Value(&rtb_NotEqual_eh);

    /* Inport: '<Root>/VeBRKR_e_BrkPedalDscrtInpt' */
    (void)Rte_Read_VeBRKR_e_BrkPedalDscrtInpt_Value(&tmpRead_4);

    /* Logic: '<S94>/Logical4' incorporates:
     *  Constant: '<S102>/Constant'
     *  Constant: '<S103>/Constant'
     *  Constant: '<S104>/Constant'
     *  Constant: '<S97>/Constant'
     *  Inport: '<Root>/VeBRKR_e_BrkPedalDscrtInpt'
     *  Logic: '<S94>/Logical2'
     *  Logic: '<S94>/Logical3'
     *  Logic: '<S94>/Logical6'
     *  Logic: '<S94>/Logical8'
     *  RelationalOperator: '<S94>/Comparison1'
     *  RelationalOperator: '<S94>/Comparison2'
     *  RelationalOperator: '<S94>/Comparison4'
     *  RelationalOperator: '<S94>/Comparison5'
     *  UnitDelay: '<S105>/Unit Delay'
     *  UnitDelay: '<S106>/Unit Delay'
     *  UnitDelay: '<S107>/Unit Delay'
     */
    rtb_VeATRR_b_TrqRtLmtEnbld_SEM = (((((ATRR_ac_DW.UnitDelay_DSTATE_hg) &&
        (!ATRR_ac_DW.UnitDelay_DSTATE_p4)) && ((ATRR_ac_DW.UnitDelay_DSTATE_l) &&
        (((uint32)tmpRead_4) == CeBRKR_e_BrkApplied))) && (((((uint32)
        rtb_TmpSignalConversionAtVeTRGR_e_VldtdT) == CeTRGR_e_TransRangeDrive) ||
        (((uint32)rtb_TmpSignalConversionAtVeTRGR_e_VldtdT) ==
         CeTRGR_e_TransRangeDrive1)) || (((uint32)
        rtb_TmpSignalConversionAtVeTRGR_e_VldtdT) == CeTRGR_e_TransRangeDrive2)))
        && (!rtb_NotEqual_eh));

    /* Outputs for Atomic SubSystem: '<S94>/EdgeBi' */
    /* RelationalOperator: '<S99>/Not Equal' incorporates:
     *  UnitDelay: '<S99>/Unit Delay'
     */
    rtb_NotEqual_eh = (rtb_VeATRR_b_TrqRtLmtEnbld_SEM !=
                       ATRR_ac_DW.UnitDelay_DSTATE_c);

    /* Update for UnitDelay: '<S99>/Unit Delay' */
    ATRR_ac_DW.UnitDelay_DSTATE_c = rtb_VeATRR_b_TrqRtLmtEnbld_SEM;

    /* End of Outputs for SubSystem: '<S94>/EdgeBi' */

    /* Switch: '<S95>/Switch3' incorporates:
     *  Switch: '<S94>/Switch1'
     */
    if (rtb_NotEqual_eh)
    {
        /* Switch: '<S95>/Switch1' incorporates:
         *  Constant: '<S95>/Constant Value4'
         *  UnitDelay: '<S95>/Unit Delay3'
         */
        ATRR_ac_DW.UnitDelay3_DSTATE_h = 0.0F;
    }
    else
    {
        if (rtb_VeATRR_b_TrqRtLmtEnbld_SEM)
        {
            /* Switch: '<S94>/Switch1' incorporates:
             *  Constant: '<S116>/Calib'
             */
            rtb_Maximum_b = KeATRR_t_RaceStartPrep_OITR;
        }
        else
        {
            /* Switch: '<S94>/Switch1' incorporates:
             *  Constant: '<S114>/Calib'
             */
            rtb_Maximum_b = KeATRR_t_RaceStartLaunch_OITR;
        }

        /* MinMax: '<S95>/Maximum' incorporates:
         *  Constant: '<S112>/Calib'
         */
        rtb_Maximum_b = fmaxf(KeATRR_t_DT, rtb_Maximum_b);

        /* Outputs for Atomic SubSystem: '<S95>/Protected Division1' */
        /* Switch: '<S126>/Switch1' incorporates:
         *  Constant: '<S112>/Calib'
         *  Constant: '<S126>/Constant Value'
         *  Constant: '<S126>/Constant Value1'
         *  Constant: '<S126>/Constant Value2'
         *  Constant: '<S126>/Constant Value3'
         *  Logic: '<S126>/AND'
         *  RelationalOperator: '<S126>/Greater Than or Equal '
         *  RelationalOperator: '<S126>/Greater Than or Equal 1'
         *  RelationalOperator: '<S126>/Not Equal'
         *  RelationalOperator: '<S126>/Not Equal1'
         *  Switch: '<S126>/Switch2'
         *  Switch: '<S126>/Switch3'
         */
        if ((KeATRR_t_DT != 0.0F) && (rtb_Maximum_b != 0.0F))
        {
            /* Switch: '<S126>/Switch1' incorporates:
             *  Product: '<S126>/Division'
             */
            rtb_Maximum_b = KeATRR_t_DT / rtb_Maximum_b;
        }
        else if (KeATRR_t_DT > 0.0F)
        {
            /* Switch: '<S126>/Switch2' incorporates:
             *  Constant: '<S126>/MAXFLOAT'
             *  Switch: '<S126>/Switch1'
             */
            rtb_Maximum_b = 3.402823466E+38F;
        }
        else if (KeATRR_t_DT < 0.0F)
        {
            /* Switch: '<S126>/Switch3' incorporates:
             *  Constant: '<S126>/MINFLOAT'
             *  Switch: '<S126>/Switch1'
             *  Switch: '<S126>/Switch2'
             */
            rtb_Maximum_b = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S126>/Switch1' incorporates:
             *  Constant: '<S126>/Constant Value4'
             *  Switch: '<S126>/Switch2'
             *  Switch: '<S126>/Switch3'
             */
            rtb_Maximum_b = 0.0F;
        }

        /* End of Switch: '<S126>/Switch1' */
        /* End of Outputs for SubSystem: '<S95>/Protected Division1' */

        /* Switch: '<S95>/Switch1' incorporates:
         *  Constant: '<S95>/Constant Value2'
         *  Constant: '<S95>/Constant Value3'
         *  MinMax: '<S95>/MinMax'
         *  Sum: '<S95>/Summation1'
         *  UnitDelay: '<S95>/Unit Delay1'
         *  UnitDelay: '<S95>/Unit Delay3'
         */
        if (!ATRR_ac_DW.UnitDelay1_DSTATE_k)
        {
            ATRR_ac_DW.UnitDelay3_DSTATE_h = 1.0F;
        }

        ATRR_ac_DW.UnitDelay3_DSTATE_h = fminf(ATRR_ac_DW.UnitDelay3_DSTATE_h +
            rtb_Maximum_b, 1.0F);
    }

    /* End of Switch: '<S95>/Switch3' */
    for (i = 0; i < 2; i++)
    {
        /* Switch: '<S95>/Switch2' */
        if (rtb_NotEqual_eh)
        {
            /* Switch: '<S95>/Switch2' incorporates:
             *  UnitDelay: '<S94>/UnitDelay'
             */
            rtb_Switch2_hr[i] = ATRR_ac_DW.UnitDelay_DSTATE_p[i];
        }
        else
        {
            /* Switch: '<S95>/Switch2' incorporates:
             *  UnitDelay: '<S95>/Unit Delay'
             */
            rtb_Switch2_hr[i] = ATRR_ac_DW.UnitDelay_DSTATE_f[i];
        }

        /* End of Switch: '<S95>/Switch2' */
    }

    /* Logic: '<S94>/Logical5' incorporates:
     *  Constant: '<S119>/Calib'
     *  RelationalOperator: '<S94>/Comparison3'
     */
    rtb_NotEqual_eh = (rtb_VeATRR_b_TrqRtLmtEnbld_SEM &&
                       (rtb_TmpSignalConversionAtVeCSVR_v_VehSpd <=
                        KeATRR_v_RstSpdThresh));

    /* Outputs for Atomic SubSystem: '<S94>/EdgeRising' */
    /* Logic: '<S101>/OR1' incorporates:
     *  UnitDelay: '<S101>/Unit Delay'
     */
    rtb_OR1_c = !ATRR_ac_DW.UnitDelay_DSTATE_fm;

    /* Update for UnitDelay: '<S101>/Unit Delay' */
    ATRR_ac_DW.UnitDelay_DSTATE_fm = rtb_NotEqual_eh;

    /* Outputs for Atomic SubSystem: '<S94>/CounterResetEnabled' */
    /* Switch: '<S98>/Switch' incorporates:
     *  Constant: '<S98>/Constant Value2'
     *  Logic: '<S101>/AND'
     *  Switch: '<S98>/Switch2'
     *  UnitDelay: '<S98>/Unit Delay'
     */
    if (rtb_NotEqual_eh && rtb_OR1_c)
    {
        ATRR_ac_DW.UnitDelay_DSTATE_g = 0U;
    }
    else
    {
        if (rtb_NotEqual_eh)
        {
            /* UnitDelay: '<S98>/Unit Delay' incorporates:
             *  Constant: '<S98>/Constant Value1'
             *  Sum: '<S98>/Subtraction'
             *  Switch: '<S98>/Switch2'
             */
            ATRR_ac_DW.UnitDelay_DSTATE_g = (uint16)(((uint32)
                ATRR_ac_DW.UnitDelay_DSTATE_g) + 1U);
        }
    }

    /* End of Switch: '<S98>/Switch' */
    /* End of Outputs for SubSystem: '<S94>/CounterResetEnabled' */
    /* End of Outputs for SubSystem: '<S94>/EdgeRising' */

    /* Switch: '<S94>/Switch4' incorporates:
     *  Lookup_n-D: '<S120>/Vector'
     *  MinMax: '<S94>/MinMax'
     *  Product: '<S94>/Product'
     *  UnitDelay: '<S98>/Unit Delay'
     */
    rtb_Switch4_a = fminf(look1_iflf_binlca_16a((float32)
                           ATRR_ac_DW.UnitDelay_DSTATE_g, ((const float32 *)
                            &(KxATRR_M_RaceStartPrep[0])), ((const float32 *)
                            &(KtATRR_M_RaceStartPrep[0])), 6U),
                          rtb_TmpSignalConversionAtVeWTAR_M_ToReqP);

    /* Switch: '<S94>/Switch2' incorporates:
     *  UnitDelay: '<S95>/Unit Delay'
     */
    if (rtb_VeATRR_b_TrqRtLmtEnbld_SEM)
    {
        ATRR_ac_DW.UnitDelay_DSTATE_f[0] = rtb_Switch4_a;
        ATRR_ac_DW.UnitDelay_DSTATE_f[1] = rtb_Switch4_a;
    }
    else
    {
        ATRR_ac_DW.UnitDelay_DSTATE_f[0] = VeATRC_M_OutputTorqReqImmedOITR;
        ATRR_ac_DW.UnitDelay_DSTATE_f[1] = rtb_MinMax18;
    }

    /* End of Switch: '<S94>/Switch2' */

    /* Sum: '<S95>/Summation' incorporates:
     *  Constant: '<S95>/Constant Value'
     *  Product: '<S95>/Multiplication'
     *  Product: '<S95>/Multiplication3'
     *  Sum: '<S95>/Subtraction'
     *  UnitDelay: '<S94>/UnitDelay'
     *  UnitDelay: '<S95>/Unit Delay'
     *  UnitDelay: '<S95>/Unit Delay3'
     */
    for (i = 0; i < 2; i++)
    {
        ATRR_ac_DW.UnitDelay_DSTATE_p[i] = ((1.0F -
            ATRR_ac_DW.UnitDelay3_DSTATE_h) * rtb_Switch2_hr[i]) +
            (ATRR_ac_DW.UnitDelay3_DSTATE_h * ATRR_ac_DW.UnitDelay_DSTATE_f[i]);
    }

    /* End of Sum: '<S95>/Summation' */

    /* Outputs for Atomic SubSystem: '<S94>/EdgeBi1' */
    /* RelationalOperator: '<S100>/Not Equal' incorporates:
     *  UnitDelay: '<S100>/Unit Delay'
     */
    rtb_NotEqual_eh = (rtb_VeATRR_b_TrqRtLmtEnbld_SEM !=
                       ATRR_ac_DW.UnitDelay_DSTATE_gj);

    /* Update for UnitDelay: '<S100>/Unit Delay' */
    ATRR_ac_DW.UnitDelay_DSTATE_gj = rtb_VeATRR_b_TrqRtLmtEnbld_SEM;

    /* End of Outputs for SubSystem: '<S94>/EdgeBi1' */

    /* Switch: '<S96>/Switch2' incorporates:
     *  Switch: '<S94>/Switch3'
     *  Switch: '<S96>/Switch3'
     *  UnitDelay: '<S94>/UnitDelay1'
     *  UnitDelay: '<S96>/Unit Delay'
     */
    if (rtb_NotEqual_eh)
    {
        ATRR_ac_DW.UnitDelay_DSTATE_k = ATRR_ac_DW.UnitDelay1_DSTATE_e;

        /* Switch: '<S96>/Switch1' incorporates:
         *  Constant: '<S96>/Constant Value4'
         *  UnitDelay: '<S94>/UnitDelay1'
         *  UnitDelay: '<S96>/Unit Delay'
         *  UnitDelay: '<S96>/Unit Delay3'
         */
        ATRR_ac_DW.UnitDelay3_DSTATE_g = 0.0F;
    }
    else
    {
        if (rtb_VeATRR_b_TrqRtLmtEnbld_SEM)
        {
            /* Switch: '<S94>/Switch3' incorporates:
             *  Constant: '<S115>/Calib'
             */
            rtb_Maximum_b = KeATRR_t_RaceStartPrep_HTDR;
        }
        else
        {
            /* Switch: '<S94>/Switch3' incorporates:
             *  Constant: '<S113>/Calib'
             */
            rtb_Maximum_b = KeATRR_t_RaceStartLaunch_HTDR;
        }

        /* MinMax: '<S96>/Maximum' incorporates:
         *  Constant: '<S112>/Calib'
         */
        rtb_Maximum_b = fmaxf(KeATRR_t_DT, rtb_Maximum_b);

        /* Outputs for Atomic SubSystem: '<S96>/Protected Division1' */
        /* Switch: '<S127>/Switch1' incorporates:
         *  Constant: '<S112>/Calib'
         *  Constant: '<S127>/Constant Value'
         *  Constant: '<S127>/Constant Value1'
         *  Constant: '<S127>/Constant Value2'
         *  Constant: '<S127>/Constant Value3'
         *  Logic: '<S127>/AND'
         *  RelationalOperator: '<S127>/Greater Than or Equal '
         *  RelationalOperator: '<S127>/Greater Than or Equal 1'
         *  RelationalOperator: '<S127>/Not Equal'
         *  RelationalOperator: '<S127>/Not Equal1'
         *  Switch: '<S127>/Switch2'
         *  Switch: '<S127>/Switch3'
         */
        if ((KeATRR_t_DT != 0.0F) && (rtb_Maximum_b != 0.0F))
        {
            /* Switch: '<S127>/Switch1' incorporates:
             *  Product: '<S127>/Division'
             */
            rtb_Maximum_b = KeATRR_t_DT / rtb_Maximum_b;
        }
        else if (KeATRR_t_DT > 0.0F)
        {
            /* Switch: '<S127>/Switch2' incorporates:
             *  Constant: '<S127>/MAXFLOAT'
             *  Switch: '<S127>/Switch1'
             */
            rtb_Maximum_b = 3.402823466E+38F;
        }
        else if (KeATRR_t_DT < 0.0F)
        {
            /* Switch: '<S127>/Switch3' incorporates:
             *  Constant: '<S127>/MINFLOAT'
             *  Switch: '<S127>/Switch1'
             *  Switch: '<S127>/Switch2'
             */
            rtb_Maximum_b = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S127>/Switch1' incorporates:
             *  Constant: '<S127>/Constant Value4'
             *  Switch: '<S127>/Switch2'
             *  Switch: '<S127>/Switch3'
             */
            rtb_Maximum_b = 0.0F;
        }

        /* End of Switch: '<S127>/Switch1' */
        /* End of Outputs for SubSystem: '<S96>/Protected Division1' */

        /* Switch: '<S96>/Switch1' incorporates:
         *  Constant: '<S96>/Constant Value2'
         *  Constant: '<S96>/Constant Value3'
         *  MinMax: '<S96>/MinMax'
         *  Sum: '<S96>/Summation1'
         *  UnitDelay: '<S96>/Unit Delay1'
         *  UnitDelay: '<S96>/Unit Delay3'
         */
        if (!ATRR_ac_DW.UnitDelay1_DSTATE_d)
        {
            ATRR_ac_DW.UnitDelay3_DSTATE_g = 1.0F;
        }

        ATRR_ac_DW.UnitDelay3_DSTATE_g = fminf(ATRR_ac_DW.UnitDelay3_DSTATE_g +
            rtb_Maximum_b, 1.0F);
    }

    /* End of Switch: '<S96>/Switch2' */

    /* Switch: '<S94>/Switch4' */
    if (!rtb_VeATRR_b_TrqRtLmtEnbld_SEM)
    {
        /* Switch: '<S94>/Switch4' */
        rtb_Switch4_a = VeATRC_M_HTDRTrqReqWithSEMArb;
    }

    /* End of Switch: '<S94>/Switch4' */

    /* Sum: '<S96>/Summation' incorporates:
     *  Constant: '<S96>/Constant Value'
     *  Product: '<S96>/Multiplication'
     *  Product: '<S96>/Multiplication3'
     *  Sum: '<S96>/Subtraction'
     *  UnitDelay: '<S94>/UnitDelay1'
     *  UnitDelay: '<S96>/Unit Delay'
     *  UnitDelay: '<S96>/Unit Delay3'
     */
    ATRR_ac_DW.UnitDelay1_DSTATE_e = ((1.0F - ATRR_ac_DW.UnitDelay3_DSTATE_g) *
        ATRR_ac_DW.UnitDelay_DSTATE_k) + (ATRR_ac_DW.UnitDelay3_DSTATE_g *
        rtb_Switch4_a);

    /* Outport: '<Root>/VeATRR_b_RaceStrtPrepPhsActv' incorporates:
     *  Gain: '<S121>/Gain'
     */
    (void)Rte_Write_VeATRR_b_RaceStrtPrepPhsActv_Value
        (rtb_VeATRR_b_TrqRtLmtEnbld_SEM);

    /* VariantMerge generated from: '<S7>/ToReqImmedOITR_PostRaceStrt' incorporates:
     *  Gain: '<S122>/Gain'
     *  UnitDelay: '<S94>/UnitDelay'
     */
    rtb_Maximum_b = ATRR_ac_DW.UnitDelay_DSTATE_p[0];

    /* VariantMerge generated from: '<S7>/OutputTorqueReqHTDR_PostRaceStrt' incorporates:
     *  Gain: '<S123>/Gain'
     *  UnitDelay: '<S94>/UnitDelay1'
     */
    rtb_Switch4_a = ATRR_ac_DW.UnitDelay1_DSTATE_e;

    /* Outport: '<Root>/VeATRR_b_RaceStrtActv' incorporates:
     *  Constant: '<S95>/Constant Value1'
     *  Gain: '<S124>/Gain'
     *  Logic: '<S94>/Logical7'
     *  RelationalOperator: '<S95>/Comparison2'
     *  UnitDelay: '<S95>/Unit Delay3'
     */
    (void)Rte_Write_VeATRR_b_RaceStrtActv_Value(rtb_VeATRR_b_TrqRtLmtEnbld_SEM ||
        (ATRR_ac_DW.UnitDelay3_DSTATE_h < 1.0F));

    /* VariantMerge generated from: '<S7>/OITRTrqReqTact_PostRaceStrt' incorporates:
     *  Gain: '<S125>/Gain'
     *  UnitDelay: '<S94>/UnitDelay'
     */
    rtb_VariantMergeForOutportOITRTrqReqTact = ATRR_ac_DW.UnitDelay_DSTATE_p[1];

    /* Update for UnitDelay: '<S95>/Unit Delay1' incorporates:
     *  Constant: '<S95>/Constant Value5'
     */
    ATRR_ac_DW.UnitDelay1_DSTATE_k = true;

    /* Update for UnitDelay: '<S95>/Unit Delay' */
    for (i = 0; i < 2; i++)
    {
        ATRR_ac_DW.UnitDelay_DSTATE_f[i] = rtb_Switch2_hr[i];
    }

    /* End of Update for UnitDelay: '<S95>/Unit Delay' */

    /* Update for UnitDelay: '<S96>/Unit Delay1' incorporates:
     *  Constant: '<S96>/Constant Value5'
     */
    ATRR_ac_DW.UnitDelay1_DSTATE_d = true;

    /* End of Outputs for SubSystem: '<S7>/RaceStartDetermination' */
    /* End of Outputs for SubSystem: '<S1>/RaceStartDetermination' */
#else

    /* Outputs for Atomic SubSystem: '<S7>/PassThrough' */
    /* VariantMerge generated from: '<S7>/ToReqImmedOITR_PostRaceStrt' incorporates:
     *  Inport: '<S93>/ToReqImmedOITR_PreRaceStrt'
     */
    rtb_Maximum_b = VeATRC_M_OutputTorqReqImmedOITR;

    /* VariantMerge generated from: '<S7>/OITRTrqReqTact_PostRaceStrt' incorporates:
     *  Inport: '<S93>/OITRTrqReqTact_PreRaceStrt'
     */
    rtb_VariantMergeForOutportOITRTrqReqTact = rtb_MinMax18;

    /* VariantMerge generated from: '<S7>/OutputTorqueReqHTDR_PostRaceStrt' incorporates:
     *  Inport: '<S93>/OutputTorqueReqHTDR_PreRaceStrt'
     */
    rtb_Switch4_a = VeATRC_M_HTDRTrqReqWithSEMArb;

    /* Outport: '<Root>/VeATRR_b_RaceStrtActv' incorporates:
     *  Constant: '<S93>/Constant'
     */
    (void)Rte_Write_VeATRR_b_RaceStrtActv_Value(false);

    /* Outport: '<Root>/VeATRR_b_RaceStrtPrepPhsActv' incorporates:
     *  Constant: '<S93>/Constant1'
     */
    (void)Rte_Write_VeATRR_b_RaceStrtPrepPhsActv_Value(false);

    /* End of Outputs for SubSystem: '<S7>/PassThrough' */
#endif

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeTRNR_e_TargetGear' */
    (void)Rte_Read_VeTRNR_e_TargetGear_Value(&tmpRead_3);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/ATRR_MedTEB'
     */
    /* Product: '<S9>/Product1' incorporates:
     *  Constant: '<S170>/Calib'
     *  DataTypeConversion: '<S9>/DataTypeConversion'
     *  Inport: '<Root>/VeTRNR_e_TargetGear'
     *  Selector: '<S9>/Ta2Tmx1'
     */
    rtb_TmpSignalConversionAtVeWTAR_M_ToReqP = ((float32)
        (Rte_Prm_KaTSXR_r_TCMGearRatios_KaTSXR_r_TCMGearRatios())[tmpRead_3]) *
        VeATRC_r_TransOut2Wheel;

    /* Switch: '<S191>/Switch' incorporates:
     *  Constant: '<S191>/ConstantValue4'
     *  Inport: '<Root>/VeWTAR_M_PostThermPrt'
     *  RelationalOperator: '<S191>/GreaterThan1'
     */
    if (rtb_TmpSignalConversionAtVeWTAR_M_ToReqP < 0.01F)
    {
        /* Switch: '<S191>/Switch' incorporates:
         *  Constant: '<S191>/ConstantValue2'
         */
        rtb_TmpSignalConversionAtVeTTQR_M_TCMSum = 0.0F;
    }
    else
    {
        (void)Rte_Read_VeWTAR_M_PostThermPrt_Value(&rtb_MinMax28);

        /* MinMax: '<S9>/MinMax28' incorporates:
         *  Inport: '<Root>/VeWTAR_M_PostThermPrt'
         *  MinMax: '<S9>/MinMax32'
         */
        rtb_MinMax28 = fminf(rtb_TmpSignalConversionAtVeWTAR_M_Typ1Ma, fmaxf
                             (rtb_TmpSignalConversionAtVeWTAR_M_Typ1Mi,
                              rtb_MinMax28));

        /* Outputs for Atomic SubSystem: '<S191>/ProtectedDivision2' */
        /* Switch: '<S429>/Switch1' incorporates:
         *  Constant: '<S429>/Constant Value'
         *  RelationalOperator: '<S429>/Not Equal'
         */
        if (rtb_MinMax28 != 0.0F)
        {
            /* Switch: '<S191>/Switch' incorporates:
             *  Product: '<S429>/Division'
             *  Switch: '<S429>/Switch1'
             */
            rtb_TmpSignalConversionAtVeTTQR_M_TCMSum = rtb_MinMax28 /
                rtb_TmpSignalConversionAtVeWTAR_M_ToReqP;
        }
        else
        {
            /* Switch: '<S191>/Switch' incorporates:
             *  Constant: '<S429>/Constant Value4'
             *  Switch: '<S429>/Switch2'
             *  Switch: '<S429>/Switch3'
             */
            rtb_TmpSignalConversionAtVeTTQR_M_TCMSum = 0.0F;
        }

        /* End of Switch: '<S429>/Switch1' */
        /* End of Outputs for SubSystem: '<S191>/ProtectedDivision2' */
    }

    /* End of Switch: '<S191>/Switch' */

    /* Outputs for Atomic SubSystem: '<S191>/VariantSubsystem' */
#if Rte_SysCon_Variant_ATRR_RTC_On

    /* Outputs for Atomic SubSystem: '<S430>/RTC_on' */
    /* Gain: '<S440>/Gain' incorporates:
     *  Lookup_n-D: '<S442>/Vector'
     *  SignalConversion generated from: '<S1>/VeTCCR_r_RampFactor'
     */
    rtb_TmpSignalConversionAtVeWTAR_M_ToReqP = 0.5F * look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeTCCR_r_RampFa,
         (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsB_KxHSCR_r_TCC_TturbFromNC2_CoeffsB
          ()),
         (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsB_KtHSCR_r_TCC_TturbFromNC2_CoeffsB
          ()), 21U);

    /* Lookup_n-D: '<S441>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeTCCR_r_RampFactor'
     */
    rtb_MinMax28 = look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeTCCR_r_RampFa,
         (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsA_KxHSCR_r_TCC_TturbFromNC2_CoeffsA
          ()),
         (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsA_KtHSCR_r_TCC_TturbFromNC2_CoeffsA
          ()), 21U);

    /* Outputs for Atomic SubSystem: '<S440>/Protected Division1' */
    /* Switch: '<S444>/Switch1' incorporates:
     *  Constant: '<S444>/Constant Value'
     *  Constant: '<S444>/Constant Value1'
     *  Constant: '<S444>/Constant Value2'
     *  Constant: '<S444>/Constant Value3'
     *  Logic: '<S444>/AND'
     *  RelationalOperator: '<S444>/Greater Than or Equal '
     *  RelationalOperator: '<S444>/Greater Than or Equal 1'
     *  RelationalOperator: '<S444>/Not Equal'
     *  RelationalOperator: '<S444>/Not Equal1'
     *  Switch: '<S444>/Switch2'
     *  Switch: '<S444>/Switch3'
     */
    if ((rtb_TmpSignalConversionAtVeWTAR_M_ToReqP != 0.0F) && (rtb_MinMax28 !=
            0.0F))
    {
        /* Switch: '<S444>/Switch1' incorporates:
         *  Product: '<S444>/Division'
         */
        rtb_Switch1_c2 = rtb_TmpSignalConversionAtVeWTAR_M_ToReqP / rtb_MinMax28;
    }
    else if (rtb_TmpSignalConversionAtVeWTAR_M_ToReqP > 0.0F)
    {
        /* Switch: '<S444>/Switch2' incorporates:
         *  Constant: '<S444>/MAXFLOAT'
         *  Switch: '<S444>/Switch1'
         */
        rtb_Switch1_c2 = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtVeWTAR_M_ToReqP < 0.0F)
    {
        /* Switch: '<S444>/Switch3' incorporates:
         *  Constant: '<S444>/MINFLOAT'
         *  Switch: '<S444>/Switch1'
         *  Switch: '<S444>/Switch2'
         */
        rtb_Switch1_c2 = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S444>/Switch1' incorporates:
         *  Constant: '<S444>/Constant Value4'
         *  Switch: '<S444>/Switch2'
         *  Switch: '<S444>/Switch3'
         */
        rtb_Switch1_c2 = 0.0F;
    }

    /* End of Switch: '<S444>/Switch1' */
    /* End of Outputs for SubSystem: '<S440>/Protected Division1' */

    /* Product: '<S440>/Product1' */
    rtb_TmpSignalConversionAtVeWTAR_M_ToReqP *=
        rtb_TmpSignalConversionAtVeWTAR_M_ToReqP;

    /* Outputs for Atomic SubSystem: '<S440>/Protected Division2' */
    /* Switch: '<S445>/Switch1' incorporates:
     *  Constant: '<S445>/Constant Value'
     *  Constant: '<S445>/Constant Value1'
     *  Constant: '<S445>/Constant Value2'
     *  Constant: '<S445>/Constant Value3'
     *  Logic: '<S445>/AND'
     *  RelationalOperator: '<S445>/Greater Than or Equal '
     *  RelationalOperator: '<S445>/Greater Than or Equal 1'
     *  RelationalOperator: '<S445>/Not Equal'
     *  RelationalOperator: '<S445>/Not Equal1'
     *  Switch: '<S445>/Switch2'
     *  Switch: '<S445>/Switch3'
     */
    if ((rtb_TmpSignalConversionAtVeWTAR_M_ToReqP != 0.0F) && (rtb_MinMax28 !=
            0.0F))
    {
        /* Switch: '<S445>/Switch1' incorporates:
         *  Product: '<S445>/Division'
         */
        rtb_TmpSignalConversionAtVeWTAR_M_ToReqP /= rtb_MinMax28;
    }
    else if (rtb_TmpSignalConversionAtVeWTAR_M_ToReqP > 0.0F)
    {
        /* Switch: '<S445>/Switch2' incorporates:
         *  Constant: '<S445>/MAXFLOAT'
         *  Switch: '<S445>/Switch1'
         */
        rtb_TmpSignalConversionAtVeWTAR_M_ToReqP = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtVeWTAR_M_ToReqP < 0.0F)
    {
        /* Switch: '<S445>/Switch3' incorporates:
         *  Constant: '<S445>/MINFLOAT'
         *  Switch: '<S445>/Switch1'
         *  Switch: '<S445>/Switch2'
         */
        rtb_TmpSignalConversionAtVeWTAR_M_ToReqP = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S445>/Switch1' incorporates:
         *  Constant: '<S445>/Constant Value4'
         *  Switch: '<S445>/Switch2'
         *  Switch: '<S445>/Switch3'
         */
        rtb_TmpSignalConversionAtVeWTAR_M_ToReqP = 0.0F;
    }

    /* End of Switch: '<S445>/Switch1' */
    /* End of Outputs for SubSystem: '<S440>/Protected Division2' */

    /* Outputs for Atomic SubSystem: '<S440>/Protected Division4' */
    /* Switch: '<S446>/Switch1' incorporates:
     *  Constant: '<S446>/Constant Value1'
     *  RelationalOperator: '<S446>/Not Equal1'
     */
    if (rtb_MinMax28 != 0.0F)
    {
        /* Switch: '<S446>/Switch1' incorporates:
         *  Constant: '<S440>/Constant Value2'
         *  Product: '<S446>/Division'
         */
        rtb_MinMax28 = 1.0F / rtb_MinMax28;
    }
    else
    {
        /* Switch: '<S446>/Switch1' */
        rtb_MinMax28 = 3.402823466E+38F;
    }

    /* End of Switch: '<S446>/Switch1' */
    /* End of Outputs for SubSystem: '<S440>/Protected Division4' */

    /* Signum: '<S439>/Signum' */
    if (rtb_MinMax28 < 0.0F)
    {
        rtb_TmpSignalConversionAtVeCSVR_v_VehSpd = -1.0F;
    }
    else if (rtb_MinMax28 > 0.0F)
    {
        rtb_TmpSignalConversionAtVeCSVR_v_VehSpd = 1.0F;
    }
    else
    {
        rtb_TmpSignalConversionAtVeCSVR_v_VehSpd = rtb_MinMax28;
    }

    /* End of Signum: '<S439>/Signum' */

    /* Sum: '<S439>/Sum3' incorporates:
     *  Constant: '<S439>/Constant Value'
     *  Gain: '<S440>/Gain1'
     *  Lookup_n-D: '<S443>/Vector'
     *  MinMax: '<S439>/MinMax1'
     *  Product: '<S439>/Product'
     *  Product: '<S439>/Product1'
     *  SignalConversion generated from: '<S1>/VeTCCR_r_RampFactor'
     *  Sqrt: '<S439>/Square Root'
     *  Sum: '<S439>/Sum2'
     *  Sum: '<S440>/Sum1'
     */
    rtb_Switch1_c2 = ((sqrtf(fmaxf((rtb_TmpSignalConversionAtVeTTQR_M_TCMSum -
                          (look1_iflf_binlca_16a
                           (rtb_TmpSignalConversionAtVeTCCR_r_RampFa,
                            (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsC_KxHSCR_r_TCC_TturbFromNC2_CoeffsC
        ()), (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsC_KtHSCR_r_TCC_TturbFromNC2_CoeffsC
              ()), 3U) - rtb_TmpSignalConversionAtVeWTAR_M_ToReqP)) *
                         rtb_MinMax28, 0.0F)) *
                       rtb_TmpSignalConversionAtVeCSVR_v_VehSpd) +
                      (-rtb_Switch1_c2)) +
        rtb_TmpSignalConversionAtVeTCCR_r_RampFa;

    /* Outputs for Atomic SubSystem: '<S434>/Protected Division3' */
    /* Switch: '<S437>/Switch1' incorporates:
     *  Constant: '<S437>/Constant Value'
     *  Constant: '<S437>/Constant Value1'
     *  Constant: '<S437>/Constant Value2'
     *  Constant: '<S437>/Constant Value3'
     *  Logic: '<S437>/AND'
     *  RelationalOperator: '<S437>/Greater Than or Equal '
     *  RelationalOperator: '<S437>/Greater Than or Equal 1'
     *  RelationalOperator: '<S437>/Not Equal'
     *  RelationalOperator: '<S437>/Not Equal1'
     *  Switch: '<S437>/Switch2'
     *  Switch: '<S437>/Switch3'
     */
    if ((rtb_TmpSignalConversionAtVeTCCR_r_RampFa != 0.0F) && (rtb_Switch1_c2 !=
         0.0F))
    {
        /* Switch: '<S437>/Switch1' incorporates:
         *  Product: '<S437>/Division'
         */
        rtb_Switch1_c2 = rtb_TmpSignalConversionAtVeTCCR_r_RampFa /
            rtb_Switch1_c2;
    }
    else if (rtb_TmpSignalConversionAtVeTCCR_r_RampFa > 0.0F)
    {
        /* Switch: '<S437>/Switch2' incorporates:
         *  Constant: '<S437>/MAXFLOAT'
         *  Switch: '<S437>/Switch1'
         */
        rtb_Switch1_c2 = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtVeTCCR_r_RampFa < 0.0F)
    {
        /* Switch: '<S437>/Switch3' incorporates:
         *  Constant: '<S437>/MINFLOAT'
         *  Switch: '<S437>/Switch1'
         *  Switch: '<S437>/Switch2'
         */
        rtb_Switch1_c2 = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S437>/Switch1' incorporates:
         *  Constant: '<S437>/Constant Value4'
         *  Switch: '<S437>/Switch2'
         *  Switch: '<S437>/Switch3'
         */
        rtb_Switch1_c2 = 0.0F;
    }

    /* End of Switch: '<S437>/Switch1' */
    /* End of Outputs for SubSystem: '<S434>/Protected Division3' */

    /* Lookup_n-D: '<S435>/Vector' incorporates:
     *  Switch: '<S437>/Switch1'
     */
    rtb_Switch1_c2 = look1_iflf_binlca_16a(rtb_Switch1_c2,
        (Rte_Prm_KxHSCR_r_TCC_TorqRatio_KxHSCR_r_TCC_TorqRatio()),
        (Rte_Prm_KtHSCR_r_TCC_TorqRatio_KtHSCR_r_TCC_TorqRatio()), 17U);

    /* Outputs for Atomic SubSystem: '<S434>/Protected Division1' */
    /* Switch: '<S436>/Switch1' incorporates:
     *  Constant: '<S436>/Constant Value'
     *  Constant: '<S436>/Constant Value1'
     *  Constant: '<S436>/Constant Value2'
     *  Constant: '<S436>/Constant Value3'
     *  Logic: '<S436>/AND'
     *  RelationalOperator: '<S436>/Greater Than or Equal '
     *  RelationalOperator: '<S436>/Greater Than or Equal 1'
     *  RelationalOperator: '<S436>/Not Equal'
     *  RelationalOperator: '<S436>/Not Equal1'
     *  Switch: '<S436>/Switch2'
     *  Switch: '<S436>/Switch3'
     */
    if ((rtb_TmpSignalConversionAtVeTTQR_M_TCMSum != 0.0F) && (rtb_Switch1_c2 !=
         0.0F))
    {
        /* Switch: '<S436>/Switch1' incorporates:
         *  Product: '<S436>/Division'
         */
        rtb_Switch1_c2 = rtb_TmpSignalConversionAtVeTTQR_M_TCMSum /
            rtb_Switch1_c2;
    }
    else if (rtb_TmpSignalConversionAtVeTTQR_M_TCMSum > 0.0F)
    {
        /* Switch: '<S436>/Switch2' incorporates:
         *  Constant: '<S436>/MAXFLOAT'
         *  Switch: '<S436>/Switch1'
         */
        rtb_Switch1_c2 = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtVeTTQR_M_TCMSum < 0.0F)
    {
        /* Switch: '<S436>/Switch3' incorporates:
         *  Constant: '<S436>/MINFLOAT'
         *  Switch: '<S436>/Switch1'
         *  Switch: '<S436>/Switch2'
         */
        rtb_Switch1_c2 = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S436>/Switch1' incorporates:
         *  Constant: '<S436>/Constant Value4'
         *  Switch: '<S436>/Switch2'
         *  Switch: '<S436>/Switch3'
         */
        rtb_Switch1_c2 = 0.0F;
    }

    /* End of Switch: '<S436>/Switch1' */
    /* End of Outputs for SubSystem: '<S434>/Protected Division1' */

    /* VariantMerge generated from: '<S430>/T_imp' incorporates:
     *  Product: '<S433>/Product4'
     *  Sum: '<S433>/Sum4'
     *  Sum: '<S433>/Sum5'
     */
    rtb_Switch1_c2 = ((rtb_Switch1_c2 - rtb_TmpSignalConversionAtVeTTQR_M_TCMSum)
                      * rtb_TmpSignalConversionAtVeVSDR_n_NTurbO) +
        rtb_TmpSignalConversionAtVeTTQR_M_TCMSum;

    /* End of Outputs for SubSystem: '<S430>/RTC_on' */
#else

    /* Outputs for Atomic SubSystem: '<S430>/RTC_off' */
    /* VariantMerge generated from: '<S430>/T_imp' incorporates:
     *  Inport: '<S431>/T_turb'
     */
    rtb_Switch1_c2 = rtb_TmpSignalConversionAtVeTTQR_M_TCMSum;

    /* End of Outputs for SubSystem: '<S430>/RTC_off' */
#endif

    /* End of Outputs for SubSystem: '<S191>/VariantSubsystem' */

    /* Switch: '<S191>/Switch2' incorporates:
     *  Constant: '<S425>/Constant'
     *  Logic: '<S191>/Logical1'
     *  RelationalOperator: '<S191>/Comparison2'
     */
    if ((((uint32)Rte_Prm_HeTSXR_e_All_TactToDomain_HeTSXR_e_All_TactToDomain())
         == CeTSXR_e_SumDomain) && tmp)
    {
        /* Switch: '<S191>/Switch3' incorporates:
         *  Constant: '<S427>/Calib'
         */
        if (Rte_Prm_HeATRR_b_RTC_Enbl_HeATRR_b_RTC_Enbl())
        {
            rtb_TmpSignalConversionAtVeTTQR_M_TCMSum = rtb_Switch1_c2;
        }

        /* End of Switch: '<S191>/Switch3' */

        /* Switch: '<S187>/Switch2' incorporates:
         *  Sum: '<S191>/Sum'
         */
        rtb_TmpSignalConversionAtVeTTQR_M_TCMSum +=
            rtb_TmpSignalConversionAtVeTTIR_M_PumpTr;
    }

    /* End of Switch: '<S191>/Switch2' */

    /* Switch: '<S187>/Switch2' incorporates:
     *  MinMax: '<S9>/MinMax37'
     */
    rtb_TmpSignalConversionAtVeTTQR_M_TCMSum = fminf(rtb_Switch_l_idx_0,
        rtb_TmpSignalConversionAtVeTTQR_M_TCMSum);

    /* MinMax: '<S9>/MinMax23' */
    VeATRC_M_ToRawExp_Tact = fmaxf(rtb_TmpSignalConversionAtVeSCCR_M_Output,
        rtb_TmpSignalConversionAtVeTTQR_M_TCMSum);

    /* Switch: '<S187>/Switch' incorporates:
     *  Constant: '<S187>/ConstantValue4'
     *  Inport: '<Root>/VeWTAR_M_ToReqPrdctd'
     *  RelationalOperator: '<S187>/GreaterThan1'
     */
    if (rtb_VeATRR_r_Tact2Wheel < 0.01F)
    {
        /* Switch: '<S187>/Switch' incorporates:
         *  Constant: '<S187>/ConstantValue2'
         */
        rtb_TmpSignalConversionAtVeTTQR_M_TCMSum = 0.0F;
    }
    else
    {
        (void)Rte_Read_VeWTAR_M_ToReqPrdctd_Value(&rtb_Switch3_b_idx_4);

        /* MinMax: '<S9>/MinMax19' incorporates:
         *  Inport: '<Root>/VeWTAR_M_ToReqPrdctd'
         *  MinMax: '<S9>/MinMax20'
         */
        rtb_TmpSignalConversionAtVeWTAR_M_Typ1Ma = fminf
            (rtb_TmpSignalConversionAtVeWTAR_M_Typ1Ma, fmaxf
             (rtb_TmpSignalConversionAtVeWTAR_M_Typ1Mi, rtb_Switch3_b_idx_4));

        /* Outputs for Atomic SubSystem: '<S187>/ProtectedDivision2' */
        /* Switch: '<S341>/Switch1' incorporates:
         *  Constant: '<S341>/Constant Value'
         *  RelationalOperator: '<S341>/Not Equal'
         */
        if (rtb_TmpSignalConversionAtVeWTAR_M_Typ1Ma != 0.0F)
        {
            /* Switch: '<S187>/Switch' incorporates:
             *  Product: '<S341>/Division'
             *  Switch: '<S341>/Switch1'
             */
            rtb_TmpSignalConversionAtVeTTQR_M_TCMSum =
                rtb_TmpSignalConversionAtVeWTAR_M_Typ1Ma /
                rtb_VeATRR_r_Tact2Wheel;
        }
        else
        {
            /* Switch: '<S187>/Switch' incorporates:
             *  Constant: '<S341>/Constant Value4'
             *  Switch: '<S341>/Switch2'
             *  Switch: '<S341>/Switch3'
             */
            rtb_TmpSignalConversionAtVeTTQR_M_TCMSum = 0.0F;
        }

        /* End of Switch: '<S341>/Switch1' */
        /* End of Outputs for SubSystem: '<S187>/ProtectedDivision2' */
    }

    /* End of Switch: '<S187>/Switch' */

    /* Outputs for Atomic SubSystem: '<S187>/VariantSubsystem' */
#if Rte_SysCon_Variant_ATRR_RTC_On

    /* Outputs for Atomic SubSystem: '<S342>/RTC_on' */
    /* Gain: '<S352>/Gain' incorporates:
     *  Lookup_n-D: '<S354>/Vector'
     *  SignalConversion generated from: '<S1>/VeTCCR_r_RampFactor'
     */
    rtb_Gain_la = 0.5F * look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeTCCR_r_RampFa,
         (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsB_KxHSCR_r_TCC_TturbFromNC2_CoeffsB
          ()),
         (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsB_KtHSCR_r_TCC_TturbFromNC2_CoeffsB
          ()), 21U);

    /* Lookup_n-D: '<S353>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeTCCR_r_RampFactor'
     */
    rtb_TmpSignalConversionAtVeWTAR_M_Typ1Mi = look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeTCCR_r_RampFa,
         (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsA_KxHSCR_r_TCC_TturbFromNC2_CoeffsA
          ()),
         (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsA_KtHSCR_r_TCC_TturbFromNC2_CoeffsA
          ()), 21U);

    /* Outputs for Atomic SubSystem: '<S352>/Protected Division1' */
    /* Switch: '<S356>/Switch1' incorporates:
     *  Constant: '<S356>/Constant Value'
     *  Constant: '<S356>/Constant Value1'
     *  Constant: '<S356>/Constant Value2'
     *  Constant: '<S356>/Constant Value3'
     *  Logic: '<S356>/AND'
     *  RelationalOperator: '<S356>/Greater Than or Equal '
     *  RelationalOperator: '<S356>/Greater Than or Equal 1'
     *  RelationalOperator: '<S356>/Not Equal'
     *  RelationalOperator: '<S356>/Not Equal1'
     *  Switch: '<S356>/Switch2'
     *  Switch: '<S356>/Switch3'
     */
    if ((rtb_Gain_la != 0.0F) && (rtb_TmpSignalConversionAtVeWTAR_M_Typ1Mi !=
            0.0F))
    {
        /* Switch: '<S356>/Switch1' incorporates:
         *  Product: '<S356>/Division'
         */
        rtb_TmpSignalConversionAtVeWTAR_M_Typ1Ma = rtb_Gain_la /
            rtb_TmpSignalConversionAtVeWTAR_M_Typ1Mi;
    }
    else if (rtb_Gain_la > 0.0F)
    {
        /* Switch: '<S356>/Switch2' incorporates:
         *  Constant: '<S356>/MAXFLOAT'
         *  Switch: '<S356>/Switch1'
         */
        rtb_TmpSignalConversionAtVeWTAR_M_Typ1Ma = 3.402823466E+38F;
    }
    else if (rtb_Gain_la < 0.0F)
    {
        /* Switch: '<S356>/Switch3' incorporates:
         *  Constant: '<S356>/MINFLOAT'
         *  Switch: '<S356>/Switch1'
         *  Switch: '<S356>/Switch2'
         */
        rtb_TmpSignalConversionAtVeWTAR_M_Typ1Ma = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S356>/Switch1' incorporates:
         *  Constant: '<S356>/Constant Value4'
         *  Switch: '<S356>/Switch2'
         *  Switch: '<S356>/Switch3'
         */
        rtb_TmpSignalConversionAtVeWTAR_M_Typ1Ma = 0.0F;
    }

    /* End of Switch: '<S356>/Switch1' */
    /* End of Outputs for SubSystem: '<S352>/Protected Division1' */

    /* Product: '<S352>/Product1' */
    rtb_Gain_la *= rtb_Gain_la;

    /* Outputs for Atomic SubSystem: '<S352>/Protected Division2' */
    /* Switch: '<S357>/Switch1' incorporates:
     *  Constant: '<S357>/Constant Value'
     *  Constant: '<S357>/Constant Value1'
     *  Constant: '<S357>/Constant Value2'
     *  Constant: '<S357>/Constant Value3'
     *  Logic: '<S357>/AND'
     *  RelationalOperator: '<S357>/Greater Than or Equal '
     *  RelationalOperator: '<S357>/Greater Than or Equal 1'
     *  RelationalOperator: '<S357>/Not Equal'
     *  RelationalOperator: '<S357>/Not Equal1'
     *  Switch: '<S357>/Switch2'
     *  Switch: '<S357>/Switch3'
     */
    if ((rtb_Gain_la != 0.0F) && (rtb_TmpSignalConversionAtVeWTAR_M_Typ1Mi !=
            0.0F))
    {
        /* Switch: '<S357>/Switch1' incorporates:
         *  Product: '<S357>/Division'
         */
        rtb_Gain_la /= rtb_TmpSignalConversionAtVeWTAR_M_Typ1Mi;
    }
    else if (rtb_Gain_la > 0.0F)
    {
        /* Switch: '<S357>/Switch2' incorporates:
         *  Constant: '<S357>/MAXFLOAT'
         *  Switch: '<S357>/Switch1'
         */
        rtb_Gain_la = 3.402823466E+38F;
    }
    else if (rtb_Gain_la < 0.0F)
    {
        /* Switch: '<S357>/Switch3' incorporates:
         *  Constant: '<S357>/MINFLOAT'
         *  Switch: '<S357>/Switch1'
         *  Switch: '<S357>/Switch2'
         */
        rtb_Gain_la = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S357>/Switch1' incorporates:
         *  Constant: '<S357>/Constant Value4'
         *  Switch: '<S357>/Switch2'
         *  Switch: '<S357>/Switch3'
         */
        rtb_Gain_la = 0.0F;
    }

    /* End of Switch: '<S357>/Switch1' */
    /* End of Outputs for SubSystem: '<S352>/Protected Division2' */

    /* Outputs for Atomic SubSystem: '<S352>/Protected Division4' */
    /* Switch: '<S358>/Switch1' incorporates:
     *  Constant: '<S358>/Constant Value1'
     *  RelationalOperator: '<S358>/Not Equal1'
     */
    if (rtb_TmpSignalConversionAtVeWTAR_M_Typ1Mi != 0.0F)
    {
        /* Switch: '<S358>/Switch1' incorporates:
         *  Constant: '<S352>/Constant Value2'
         *  Product: '<S358>/Division'
         */
        rtb_TmpSignalConversionAtVeWTAR_M_Typ1Mi = 1.0F /
            rtb_TmpSignalConversionAtVeWTAR_M_Typ1Mi;
    }
    else
    {
        /* Switch: '<S358>/Switch1' */
        rtb_TmpSignalConversionAtVeWTAR_M_Typ1Mi = 3.402823466E+38F;
    }

    /* End of Switch: '<S358>/Switch1' */
    /* End of Outputs for SubSystem: '<S352>/Protected Division4' */

    /* Signum: '<S351>/Signum' */
    if (rtb_TmpSignalConversionAtVeWTAR_M_Typ1Mi < 0.0F)
    {
        rtb_Switch3_b_idx_4 = -1.0F;
    }
    else if (rtb_TmpSignalConversionAtVeWTAR_M_Typ1Mi > 0.0F)
    {
        rtb_Switch3_b_idx_4 = 1.0F;
    }
    else
    {
        rtb_Switch3_b_idx_4 = rtb_TmpSignalConversionAtVeWTAR_M_Typ1Mi;
    }

    /* End of Signum: '<S351>/Signum' */

    /* Sum: '<S351>/Sum3' incorporates:
     *  Constant: '<S351>/Constant Value'
     *  Gain: '<S352>/Gain1'
     *  Lookup_n-D: '<S355>/Vector'
     *  MinMax: '<S351>/MinMax1'
     *  Product: '<S351>/Product'
     *  Product: '<S351>/Product1'
     *  SignalConversion generated from: '<S1>/VeTCCR_r_RampFactor'
     *  Sqrt: '<S351>/Square Root'
     *  Sum: '<S351>/Sum2'
     *  Sum: '<S352>/Sum1'
     */
    rtb_TmpSignalConversionAtVeWTAR_M_Typ1Ma = ((sqrtf(fmaxf
        ((rtb_TmpSignalConversionAtVeTTQR_M_TCMSum - (look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeTCCR_r_RampFa,
         (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsC_KxHSCR_r_TCC_TturbFromNC2_CoeffsC
          ()),
         (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsC_KtHSCR_r_TCC_TturbFromNC2_CoeffsC
          ()), 3U) - rtb_Gain_la)) * rtb_TmpSignalConversionAtVeWTAR_M_Typ1Mi,
         0.0F)) * rtb_Switch3_b_idx_4) +
        (-rtb_TmpSignalConversionAtVeWTAR_M_Typ1Ma)) +
        rtb_TmpSignalConversionAtVeTCCR_r_RampFa;

    /* Outputs for Atomic SubSystem: '<S346>/Protected Division3' */
    /* Switch: '<S349>/Switch1' incorporates:
     *  Constant: '<S349>/Constant Value'
     *  Constant: '<S349>/Constant Value1'
     *  Constant: '<S349>/Constant Value2'
     *  Constant: '<S349>/Constant Value3'
     *  Logic: '<S349>/AND'
     *  RelationalOperator: '<S349>/Greater Than or Equal '
     *  RelationalOperator: '<S349>/Greater Than or Equal 1'
     *  RelationalOperator: '<S349>/Not Equal'
     *  RelationalOperator: '<S349>/Not Equal1'
     *  Switch: '<S349>/Switch2'
     *  Switch: '<S349>/Switch3'
     */
    if ((rtb_TmpSignalConversionAtVeTCCR_r_RampFa != 0.0F) &&
            (rtb_TmpSignalConversionAtVeWTAR_M_Typ1Ma != 0.0F))
    {
        /* Switch: '<S349>/Switch1' incorporates:
         *  Product: '<S349>/Division'
         */
        rtb_TmpSignalConversionAtVeWTAR_M_Typ1Ma =
            rtb_TmpSignalConversionAtVeTCCR_r_RampFa /
            rtb_TmpSignalConversionAtVeWTAR_M_Typ1Ma;
    }
    else if (rtb_TmpSignalConversionAtVeTCCR_r_RampFa > 0.0F)
    {
        /* Switch: '<S349>/Switch2' incorporates:
         *  Constant: '<S349>/MAXFLOAT'
         *  Switch: '<S349>/Switch1'
         */
        rtb_TmpSignalConversionAtVeWTAR_M_Typ1Ma = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtVeTCCR_r_RampFa < 0.0F)
    {
        /* Switch: '<S349>/Switch3' incorporates:
         *  Constant: '<S349>/MINFLOAT'
         *  Switch: '<S349>/Switch1'
         *  Switch: '<S349>/Switch2'
         */
        rtb_TmpSignalConversionAtVeWTAR_M_Typ1Ma = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S349>/Switch1' incorporates:
         *  Constant: '<S349>/Constant Value4'
         *  Switch: '<S349>/Switch2'
         *  Switch: '<S349>/Switch3'
         */
        rtb_TmpSignalConversionAtVeWTAR_M_Typ1Ma = 0.0F;
    }

    /* End of Switch: '<S349>/Switch1' */
    /* End of Outputs for SubSystem: '<S346>/Protected Division3' */

    /* Lookup_n-D: '<S347>/Vector' incorporates:
     *  Switch: '<S349>/Switch1'
     */
    rtb_TmpSignalConversionAtVeWTAR_M_Typ1Ma = look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeWTAR_M_Typ1Ma,
         (Rte_Prm_KxHSCR_r_TCC_TorqRatio_KxHSCR_r_TCC_TorqRatio()),
         (Rte_Prm_KtHSCR_r_TCC_TorqRatio_KtHSCR_r_TCC_TorqRatio()), 17U);

    /* Outputs for Atomic SubSystem: '<S346>/Protected Division1' */
    /* Switch: '<S348>/Switch1' incorporates:
     *  Constant: '<S348>/Constant Value'
     *  Constant: '<S348>/Constant Value1'
     *  Constant: '<S348>/Constant Value2'
     *  Constant: '<S348>/Constant Value3'
     *  Logic: '<S348>/AND'
     *  RelationalOperator: '<S348>/Greater Than or Equal '
     *  RelationalOperator: '<S348>/Greater Than or Equal 1'
     *  RelationalOperator: '<S348>/Not Equal'
     *  RelationalOperator: '<S348>/Not Equal1'
     *  Switch: '<S348>/Switch2'
     *  Switch: '<S348>/Switch3'
     */
    if ((rtb_TmpSignalConversionAtVeTTQR_M_TCMSum != 0.0F) &&
            (rtb_TmpSignalConversionAtVeWTAR_M_Typ1Ma != 0.0F))
    {
        /* Switch: '<S348>/Switch1' incorporates:
         *  Product: '<S348>/Division'
         */
        rtb_TmpSignalConversionAtVeWTAR_M_Typ1Ma =
            rtb_TmpSignalConversionAtVeTTQR_M_TCMSum /
            rtb_TmpSignalConversionAtVeWTAR_M_Typ1Ma;
    }
    else if (rtb_TmpSignalConversionAtVeTTQR_M_TCMSum > 0.0F)
    {
        /* Switch: '<S348>/Switch2' incorporates:
         *  Constant: '<S348>/MAXFLOAT'
         *  Switch: '<S348>/Switch1'
         */
        rtb_TmpSignalConversionAtVeWTAR_M_Typ1Ma = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtVeTTQR_M_TCMSum < 0.0F)
    {
        /* Switch: '<S348>/Switch3' incorporates:
         *  Constant: '<S348>/MINFLOAT'
         *  Switch: '<S348>/Switch1'
         *  Switch: '<S348>/Switch2'
         */
        rtb_TmpSignalConversionAtVeWTAR_M_Typ1Ma = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S348>/Switch1' incorporates:
         *  Constant: '<S348>/Constant Value4'
         *  Switch: '<S348>/Switch2'
         *  Switch: '<S348>/Switch3'
         */
        rtb_TmpSignalConversionAtVeWTAR_M_Typ1Ma = 0.0F;
    }

    /* End of Switch: '<S348>/Switch1' */
    /* End of Outputs for SubSystem: '<S346>/Protected Division1' */

    /* VariantMerge generated from: '<S342>/T_imp' incorporates:
     *  Product: '<S345>/Product4'
     *  Sum: '<S345>/Sum4'
     *  Sum: '<S345>/Sum5'
     */
    rtb_Gain_la = ((rtb_TmpSignalConversionAtVeWTAR_M_Typ1Ma -
                    rtb_TmpSignalConversionAtVeTTQR_M_TCMSum) *
                   rtb_TmpSignalConversionAtVeVSDR_n_NTurbO) +
        rtb_TmpSignalConversionAtVeTTQR_M_TCMSum;

    /* End of Outputs for SubSystem: '<S342>/RTC_on' */
#else

    /* Outputs for Atomic SubSystem: '<S342>/RTC_off' */
    /* VariantMerge generated from: '<S342>/T_imp' incorporates:
     *  Inport: '<S343>/T_turb'
     */
    rtb_Gain_la = rtb_TmpSignalConversionAtVeTTQR_M_TCMSum;

    /* End of Outputs for SubSystem: '<S342>/RTC_off' */
#endif

    /* End of Outputs for SubSystem: '<S187>/VariantSubsystem' */

    /* Switch: '<S187>/Switch2' incorporates:
     *  Constant: '<S337>/Constant'
     *  Logic: '<S187>/Logical1'
     *  RelationalOperator: '<S187>/Comparison2'
     */
    if ((((uint32)Rte_Prm_HeTSXR_e_All_TactToDomain_HeTSXR_e_All_TactToDomain())
         == CeTSXR_e_SumDomain) && tmp)
    {
        /* Switch: '<S187>/Switch3' incorporates:
         *  Constant: '<S339>/Calib'
         */
        if (Rte_Prm_HeATRR_b_RTC_Enbl_HeATRR_b_RTC_Enbl())
        {
            rtb_TmpSignalConversionAtVeTTQR_M_TCMSum = rtb_Gain_la;
        }

        /* End of Switch: '<S187>/Switch3' */

        /* Switch: '<S187>/Switch2' incorporates:
         *  Sum: '<S187>/Sum'
         */
        rtb_TmpSignalConversionAtVeTTQR_M_TCMSum +=
            rtb_TmpSignalConversionAtVeTTIR_M_PumpTr;
    }

    /* End of Switch: '<S187>/Switch2' */

    /* MinMax: '<S9>/MinMax6' incorporates:
     *  MinMax: '<S9>/MinMax22'
     */
    VeATRC_M_ToReqPrdctd_Tact = fmaxf(rtb_Switch1_cv, fminf(rtb_Switch_l_idx_0,
        rtb_TmpSignalConversionAtVeTTQR_M_TCMSum));

    /* SignalConversion generated from: '<S1>/VeTTQR_e_TCMTrqCntrlMdSlw' incorporates:
     *  Inport: '<Root>/VeTTQR_e_TCMTrqCntrlMdSlw'
     */
    (void)Rte_Read_VeTTQR_e_TCMTrqCntrlMdSlw_Value
        (&rtb_TmpSignalConversionAtVeTTQR_e_TCMT_m);

    /* Switch: '<S140>/Switch3' incorporates:
     *  Constant: '<S146>/Constant'
     *  Constant: '<S147>/Constant'
     *  Inport: '<Root>/VeTTQR_M_TCMSumTrqReqSlow'
     *  Logic: '<S140>/Logical5'
     *  RelationalOperator: '<S140>/Comparison7'
     *  RelationalOperator: '<S140>/Comparison8'
     *  SignalConversion generated from: '<S1>/VeTTQR_e_TCMTrqCntrlMdSlw'
     */
    if ((((uint32)rtb_TmpSignalConversionAtVeTTQR_e_TCMT_m) == CeTINR_e_TrqInc) ||
        (((uint32)rtb_TmpSignalConversionAtVeTTQR_e_TCMT_m) == CeTINR_e_TrqDec))
    {
        (void)Rte_Read_VeTTQR_M_TCMSumTrqReqSlow_Value(&rtb_Switch3_b_idx_0);

        /* Switch: '<S140>/Switch10' incorporates:
         *  Constant: '<S148>/Calib'
         *  Inport: '<Root>/VeTTQR_M_TCMSumTrqReqSlow'
         */
        if (HeATRR_b_PrdtdSEMTrqEnbl)
        {
            /* Switch: '<S140>/Switch3' */
            rtb_Gain_b = rtb_Switch3_b_idx_0;
        }
        else
        {
            /* Switch: '<S140>/Switch3' */
            rtb_Gain_b = rtb_MinMax5;
        }

        /* End of Switch: '<S140>/Switch10' */
    }

    /* End of Switch: '<S140>/Switch3' */

    /* Switch: '<S57>/Switch3' */
    if (VeATRR_b_GrgShftBlend_Act)
    {
        /* Switch: '<S57>/Switch1' incorporates:
         *  Constant: '<S91>/ConstantValue1'
         */
        if (VeATRR_b_GrgShftBlend_Act)
        {
            rtb_MinMax5 = 0.0F;
        }
        else
        {
            rtb_MinMax5 = VeATRC_M_ToReqImmdCnvt;
        }

        /* Switch: '<S57>/Switch3' incorporates:
         *  Constant: '<S74>/ConstantValue'
         *  Product: '<S74>/Multiplication'
         *  Product: '<S74>/Multiplication3'
         *  Sum: '<S74>/Subtraction'
         *  Sum: '<S74>/Summation'
         *  UnitDelay: '<S74>/UnitDelay'
         *  UnitDelay: '<S74>/UnitDelay1'
         */
        rtb_Switch3_b_idx_0 = ((1.0F - ATRR_ac_DW.UnitDelay1_DSTATE_m) *
                               ATRR_ac_DW.UnitDelay_DSTATE[0]) +
            (ATRR_ac_DW.UnitDelay1_DSTATE_m * rtb_MinMax5);

        /* Switch: '<S57>/Switch1' incorporates:
         *  Constant: '<S91>/ConstantValue1'
         */
        if (VeATRR_b_GrgShftBlend_Act)
        {
            rtb_MinMax5 = 0.0F;
        }
        else
        {
            rtb_MinMax5 = rtb_TmpSignalConversionAtVeWTAR_M_ToReqS;
        }

        /* Switch: '<S57>/Switch3' incorporates:
         *  Constant: '<S74>/ConstantValue'
         *  Product: '<S74>/Multiplication'
         *  Product: '<S74>/Multiplication3'
         *  Sum: '<S74>/Subtraction'
         *  Sum: '<S74>/Summation'
         *  UnitDelay: '<S74>/UnitDelay'
         *  UnitDelay: '<S74>/UnitDelay1'
         */
        rtb_TmpSignalConversionAtVeWTAR_M_Typ1Ma = ((1.0F -
            ATRR_ac_DW.UnitDelay1_DSTATE_m) * ATRR_ac_DW.UnitDelay_DSTATE[1]) +
            (ATRR_ac_DW.UnitDelay1_DSTATE_m * rtb_MinMax5);

        /* Switch: '<S57>/Switch1' incorporates:
         *  Constant: '<S91>/ConstantValue1'
         */
        if (VeATRR_b_GrgShftBlend_Act)
        {
            rtb_MinMax5 = 0.0F;
        }
        else
        {
            rtb_MinMax5 = rtb_Maximum_b;
        }

        /* Switch: '<S57>/Switch3' incorporates:
         *  Constant: '<S74>/ConstantValue'
         *  Product: '<S74>/Multiplication'
         *  Product: '<S74>/Multiplication3'
         *  Sum: '<S74>/Subtraction'
         *  Sum: '<S74>/Summation'
         *  UnitDelay: '<S74>/UnitDelay'
         *  UnitDelay: '<S74>/UnitDelay1'
         */
        rtb_TmpSignalConversionAtVeWTAR_M_Typ1Mi = ((1.0F -
            ATRR_ac_DW.UnitDelay1_DSTATE_m) * ATRR_ac_DW.UnitDelay_DSTATE[2]) +
            (ATRR_ac_DW.UnitDelay1_DSTATE_m * rtb_MinMax5);

        /* Switch: '<S57>/Switch1' incorporates:
         *  Constant: '<S91>/ConstantValue1'
         */
        if (VeATRR_b_GrgShftBlend_Act)
        {
            rtb_MinMax5 = 0.0F;
        }
        else
        {
            rtb_MinMax5 = rtb_Switch4_a;
        }

        /* Switch: '<S57>/Switch3' incorporates:
         *  Constant: '<S74>/ConstantValue'
         *  Product: '<S74>/Multiplication'
         *  Product: '<S74>/Multiplication3'
         *  Sum: '<S74>/Subtraction'
         *  Sum: '<S74>/Summation'
         *  UnitDelay: '<S74>/UnitDelay'
         *  UnitDelay: '<S74>/UnitDelay1'
         */
        rtb_Gain_la = ((1.0F - ATRR_ac_DW.UnitDelay1_DSTATE_m) *
                       ATRR_ac_DW.UnitDelay_DSTATE[3]) +
            (ATRR_ac_DW.UnitDelay1_DSTATE_m * rtb_MinMax5);

        /* Switch: '<S57>/Switch1' incorporates:
         *  Constant: '<S91>/ConstantValue1'
         */
        if (VeATRR_b_GrgShftBlend_Act)
        {
            rtb_MinMax5 = 0.0F;
        }
        else
        {
            rtb_MinMax5 = rtb_Max2[3];
        }

        /* Switch: '<S57>/Switch3' incorporates:
         *  Constant: '<S74>/ConstantValue'
         *  Product: '<S74>/Multiplication'
         *  Product: '<S74>/Multiplication3'
         *  Sum: '<S74>/Subtraction'
         *  Sum: '<S74>/Summation'
         *  UnitDelay: '<S74>/UnitDelay'
         *  UnitDelay: '<S74>/UnitDelay1'
         */
        rtb_Switch3_b_idx_4 = ((1.0F - ATRR_ac_DW.UnitDelay1_DSTATE_m) *
                               ATRR_ac_DW.UnitDelay_DSTATE[4]) +
            (ATRR_ac_DW.UnitDelay1_DSTATE_m * rtb_MinMax5);

        /* Switch: '<S57>/Switch1' incorporates:
         *  Constant: '<S91>/ConstantValue1'
         */
        if (VeATRR_b_GrgShftBlend_Act)
        {
            rtb_MinMax5 = 0.0F;
        }
        else
        {
            rtb_MinMax5 = VeATRC_M_ToReqPot_Cnvt;
        }

        /* Switch: '<S57>/Switch3' incorporates:
         *  Constant: '<S74>/ConstantValue'
         *  Product: '<S74>/Multiplication'
         *  Product: '<S74>/Multiplication3'
         *  Sum: '<S74>/Subtraction'
         *  Sum: '<S74>/Summation'
         *  UnitDelay: '<S74>/UnitDelay'
         *  UnitDelay: '<S74>/UnitDelay1'
         */
        rtb_Switch_l_idx_0 = ((1.0F - ATRR_ac_DW.UnitDelay1_DSTATE_m) *
                              ATRR_ac_DW.UnitDelay_DSTATE[5]) +
            (ATRR_ac_DW.UnitDelay1_DSTATE_m * rtb_MinMax5);

        /* Switch: '<S57>/Switch1' incorporates:
         *  Constant: '<S91>/ConstantValue1'
         */
        if (VeATRR_b_GrgShftBlend_Act)
        {
            rtb_MinMax5 = 0.0F;
        }
        else
        {
            rtb_MinMax5 = rtb_VariantMergeForOutportOITRTrqReqTact;
        }

        /* Switch: '<S57>/Switch3' incorporates:
         *  Constant: '<S74>/ConstantValue'
         *  Product: '<S74>/Multiplication'
         *  Product: '<S74>/Multiplication3'
         *  Sum: '<S74>/Subtraction'
         *  Sum: '<S74>/Summation'
         *  UnitDelay: '<S74>/UnitDelay'
         *  UnitDelay: '<S74>/UnitDelay1'
         */
        rtb_Switch1_c2 = ((1.0F - ATRR_ac_DW.UnitDelay1_DSTATE_m) *
                          ATRR_ac_DW.UnitDelay_DSTATE[6]) +
            (ATRR_ac_DW.UnitDelay1_DSTATE_m * rtb_MinMax5);

        /* Switch: '<S57>/Switch1' incorporates:
         *  Constant: '<S91>/ConstantValue1'
         */
        if (VeATRR_b_GrgShftBlend_Act)
        {
            rtb_MinMax5 = 0.0F;
        }
        else
        {
            rtb_MinMax5 = rtb_Max1[5];
        }

        /* Switch: '<S57>/Switch3' incorporates:
         *  Constant: '<S74>/ConstantValue'
         *  Product: '<S74>/Multiplication'
         *  Product: '<S74>/Multiplication3'
         *  Sum: '<S74>/Subtraction'
         *  Sum: '<S74>/Summation'
         *  UnitDelay: '<S74>/UnitDelay'
         *  UnitDelay: '<S74>/UnitDelay1'
         */
        rtb_MinMax28 = ((1.0F - ATRR_ac_DW.UnitDelay1_DSTATE_m) *
                        ATRR_ac_DW.UnitDelay_DSTATE[7]) +
            (ATRR_ac_DW.UnitDelay1_DSTATE_m * rtb_MinMax5);

        /* Switch: '<S57>/Switch1' incorporates:
         *  Constant: '<S91>/ConstantValue1'
         */
        if (VeATRR_b_GrgShftBlend_Act)
        {
            rtb_MinMax5 = 0.0F;
        }
        else
        {
            rtb_MinMax5 = rtb_Max1[4];
        }

        /* Switch: '<S57>/Switch3' incorporates:
         *  Constant: '<S74>/ConstantValue'
         *  Product: '<S74>/Multiplication'
         *  Product: '<S74>/Multiplication3'
         *  Sum: '<S74>/Subtraction'
         *  Sum: '<S74>/Summation'
         *  UnitDelay: '<S74>/UnitDelay'
         *  UnitDelay: '<S74>/UnitDelay1'
         */
        rtb_TmpSignalConversionAtVeWTAR_M_ToReqP = ((1.0F -
            ATRR_ac_DW.UnitDelay1_DSTATE_m) * ATRR_ac_DW.UnitDelay_DSTATE[8]) +
            (ATRR_ac_DW.UnitDelay1_DSTATE_m * rtb_MinMax5);

        /* Switch: '<S57>/Switch1' incorporates:
         *  Constant: '<S91>/ConstantValue1'
         */
        if (VeATRR_b_GrgShftBlend_Act)
        {
            rtb_MinMax5 = 0.0F;
        }
        else
        {
            rtb_MinMax5 = rtb_TmpSignalConversionAtVeTTQR_M_SumMax;
        }

        /* Switch: '<S57>/Switch3' incorporates:
         *  Constant: '<S74>/ConstantValue'
         *  Product: '<S74>/Multiplication'
         *  Product: '<S74>/Multiplication3'
         *  Sum: '<S74>/Subtraction'
         *  Sum: '<S74>/Summation'
         *  UnitDelay: '<S74>/UnitDelay'
         *  UnitDelay: '<S74>/UnitDelay1'
         */
        rtb_TmpSignalConversionAtVeSCCR_M_Output = ((1.0F -
            ATRR_ac_DW.UnitDelay1_DSTATE_m) * ATRR_ac_DW.UnitDelay_DSTATE[9]) +
            (ATRR_ac_DW.UnitDelay1_DSTATE_m * rtb_MinMax5);

        /* Switch: '<S57>/Switch1' incorporates:
         *  Constant: '<S91>/ConstantValue1'
         */
        if (VeATRR_b_GrgShftBlend_Act)
        {
            rtb_MinMax5 = 0.0F;
        }
        else
        {
            rtb_MinMax5 = VeATRC_M_ToRawExp_Tact;
        }

        /* Switch: '<S57>/Switch3' incorporates:
         *  Constant: '<S74>/ConstantValue'
         *  Product: '<S74>/Multiplication'
         *  Product: '<S74>/Multiplication3'
         *  Sum: '<S74>/Subtraction'
         *  Sum: '<S74>/Summation'
         *  UnitDelay: '<S74>/UnitDelay'
         *  UnitDelay: '<S74>/UnitDelay1'
         */
        rtb_TmpSignalConversionAtVeCSVR_v_VehSpd = ((1.0F -
            ATRR_ac_DW.UnitDelay1_DSTATE_m) * ATRR_ac_DW.UnitDelay_DSTATE[10]) +
            (ATRR_ac_DW.UnitDelay1_DSTATE_m * rtb_MinMax5);

        /* Switch: '<S57>/Switch1' incorporates:
         *  Constant: '<S91>/ConstantValue1'
         */
        if (VeATRR_b_GrgShftBlend_Act)
        {
            rtb_MinMax5 = 0.0F;
        }
        else
        {
            rtb_MinMax5 = VeATRC_M_ToReqPrdctd_Tact;
        }

        /* Switch: '<S57>/Switch3' incorporates:
         *  Constant: '<S74>/ConstantValue'
         *  Product: '<S74>/Multiplication'
         *  Product: '<S74>/Multiplication3'
         *  Sum: '<S74>/Subtraction'
         *  Sum: '<S74>/Summation'
         *  UnitDelay: '<S74>/UnitDelay'
         *  UnitDelay: '<S74>/UnitDelay1'
         */
        rtb_TmpSignalConversionAtVeAPSR_Pct_Acce = ((1.0F -
            ATRR_ac_DW.UnitDelay1_DSTATE_m) * ATRR_ac_DW.UnitDelay_DSTATE[11]) +
            (ATRR_ac_DW.UnitDelay1_DSTATE_m * rtb_MinMax5);

        /* Switch: '<S57>/Switch1' incorporates:
         *  Constant: '<S91>/ConstantValue1'
         */
        if (VeATRR_b_GrgShftBlend_Act)
        {
            rtb_MinMax5 = 0.0F;
        }
        else
        {
            rtb_MinMax5 = rtb_Gain_b;
        }

        /* Switch: '<S57>/Switch3' incorporates:
         *  Constant: '<S74>/ConstantValue'
         *  Product: '<S74>/Multiplication'
         *  Product: '<S74>/Multiplication3'
         *  Sum: '<S74>/Subtraction'
         *  Sum: '<S74>/Summation'
         *  UnitDelay: '<S74>/UnitDelay'
         *  UnitDelay: '<S74>/UnitDelay1'
         */
        rtb_Switch1_cv = ((1.0F - ATRR_ac_DW.UnitDelay1_DSTATE_m) *
                          ATRR_ac_DW.UnitDelay_DSTATE[12]) +
            (ATRR_ac_DW.UnitDelay1_DSTATE_m * rtb_MinMax5);
    }
    else
    {
        /* Switch: '<S57>/Switch3' incorporates:
         *  Constant: '<S91>/ConstantValue1'
         */
        rtb_Switch3_b_idx_0 = 0.0F;
        rtb_TmpSignalConversionAtVeWTAR_M_Typ1Ma = 0.0F;
        rtb_TmpSignalConversionAtVeWTAR_M_Typ1Mi = 0.0F;
        rtb_Gain_la = 0.0F;
        rtb_Switch3_b_idx_4 = 0.0F;
        rtb_Switch_l_idx_0 = 0.0F;
        rtb_Switch1_c2 = 0.0F;
        rtb_MinMax28 = 0.0F;
        rtb_TmpSignalConversionAtVeWTAR_M_ToReqP = 0.0F;
        rtb_TmpSignalConversionAtVeSCCR_M_Output = 0.0F;
        rtb_TmpSignalConversionAtVeCSVR_v_VehSpd = 0.0F;
        rtb_TmpSignalConversionAtVeAPSR_Pct_Acce = 0.0F;
        rtb_Switch1_cv = 0.0F;
    }

    /* End of Switch: '<S57>/Switch3' */

    /* SignalConversion generated from: '<S1>/VeVSDR_n_PrimNoSgndFltrd' incorporates:
     *  Inport: '<Root>/VeVSDR_n_PrimNoSgndFltrd'
     */
    (void)Rte_Read_VeVSDR_n_PrimNoSgndFltrd_Value
        (&rtb_TmpSignalConversionAtVeVSDR_n_PrimNo);

    /* Outputs for Atomic SubSystem: '<S57>/Hysteresis' */
    /* Switch: '<S78>/Switch1' incorporates:
     *  Constant: '<S78>/Constant Value'
     *  Constant: '<S85>/Calib'
     *  Constant: '<S86>/Calib'
     *  RelationalOperator: '<S78>/Greater  Than'
     *  RelationalOperator: '<S78>/Greater  Than1'
     *  UnitDelay: '<S78>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeVSDR_n_PrimNo > KeATRR_n_QudrntPrtctn_R_RSP)
    {
        ATRR_ac_DW.UnitDelay_DSTATE_b = true;
    }
    else
    {
        ATRR_ac_DW.UnitDelay_DSTATE_b =
            ((rtb_TmpSignalConversionAtVeVSDR_n_PrimNo >=
              KeATRR_n_QudrntPrtctn_R_LSP) && (ATRR_ac_DW.UnitDelay_DSTATE_b));
    }

    /* End of Switch: '<S78>/Switch1' */
    /* End of Outputs for SubSystem: '<S57>/Hysteresis' */

    /* Logic: '<S57>/Logical1' incorporates:
     *  UnitDelay: '<S78>/Unit Delay'
     */
    VeATRC_b_PosSpeed_inR = ((ATRR_ac_DW.UnitDelay_DSTATE_b) && rtb_Equal2);

    /* Outputs for Atomic SubSystem: '<S57>/Hysteresis1' */
    /* Switch: '<S79>/Switch1' incorporates:
     *  Constant: '<S79>/Constant Value'
     *  Constant: '<S83>/Calib'
     *  Constant: '<S84>/Calib'
     *  RelationalOperator: '<S79>/Greater  Than'
     *  RelationalOperator: '<S79>/Greater  Than1'
     *  UnitDelay: '<S79>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeVSDR_n_PrimNo > KeATRR_n_QudrntPrtctn_D_RSP)
    {
        ATRR_ac_DW.UnitDelay_DSTATE_pc = true;
    }
    else
    {
        ATRR_ac_DW.UnitDelay_DSTATE_pc =
            ((rtb_TmpSignalConversionAtVeVSDR_n_PrimNo >=
              KeATRR_n_QudrntPrtctn_D_LSP) && (ATRR_ac_DW.UnitDelay_DSTATE_pc));
    }

    /* End of Switch: '<S79>/Switch1' */
    /* End of Outputs for SubSystem: '<S57>/Hysteresis1' */

    /* Logic: '<S57>/Logical2' incorporates:
     *  Logic: '<S57>/Logical4'
     *  UnitDelay: '<S79>/Unit Delay'
     */
    VeATRC_b_NegSpeed_inD = ((!ATRR_ac_DW.UnitDelay_DSTATE_pc) && rtb_Equal3);

    /* Switch: '<S57>/Switch7' incorporates:
     *  Constant: '<S82>/Calib'
     *  Logic: '<S57>/Logical13'
     *  Logic: '<S57>/Logical14'
     *  MinMax: '<S57>/MinMax5'
     *  Switch: '<S57>/Switch2'
     *  Switch: '<S57>/Switch9'
     *  UnitDelay: '<S57>/UnitDelay1'
     */
    if ((VeATRC_b_PosSpeed_inR) && (KeATRR_b_QudrntPrtctn_ByPass))
    {
        ATRR_ac_DW.UnitDelay1_DSTATE[0] = fminf(rtb_Switch3_b_idx_0,
            VeATRC_M_ToReqImmdCnvt);
        ATRR_ac_DW.UnitDelay1_DSTATE[1] = fminf
            (rtb_TmpSignalConversionAtVeWTAR_M_Typ1Ma,
             rtb_TmpSignalConversionAtVeWTAR_M_ToReqS);
        ATRR_ac_DW.UnitDelay1_DSTATE[2] = fminf
            (rtb_TmpSignalConversionAtVeWTAR_M_Typ1Mi, rtb_Maximum_b);
        ATRR_ac_DW.UnitDelay1_DSTATE[3] = fminf(rtb_Gain_la, rtb_Switch4_a);
        ATRR_ac_DW.UnitDelay1_DSTATE[4] = fminf(rtb_Switch3_b_idx_4, rtb_Max2[3]);
        ATRR_ac_DW.UnitDelay1_DSTATE[5] = fminf(rtb_Switch_l_idx_0,
            VeATRC_M_ToReqPot_Cnvt);
        ATRR_ac_DW.UnitDelay1_DSTATE[6] = fminf(rtb_Switch1_c2,
            rtb_VariantMergeForOutportOITRTrqReqTact);
        ATRR_ac_DW.UnitDelay1_DSTATE[7] = fminf(rtb_MinMax28, rtb_Max1[5]);
        ATRR_ac_DW.UnitDelay1_DSTATE[8] = fminf
            (rtb_TmpSignalConversionAtVeWTAR_M_ToReqP, rtb_Max1[4]);
        ATRR_ac_DW.UnitDelay1_DSTATE[9] = fminf
            (rtb_TmpSignalConversionAtVeSCCR_M_Output,
             rtb_TmpSignalConversionAtVeTTQR_M_SumMax);
        ATRR_ac_DW.UnitDelay1_DSTATE[10] = fminf
            (rtb_TmpSignalConversionAtVeCSVR_v_VehSpd, VeATRC_M_ToRawExp_Tact);
        ATRR_ac_DW.UnitDelay1_DSTATE[11] = fminf
            (rtb_TmpSignalConversionAtVeAPSR_Pct_Acce, VeATRC_M_ToReqPrdctd_Tact);
        ATRR_ac_DW.UnitDelay1_DSTATE[12] = fminf(rtb_Switch1_cv, rtb_Gain_b);
    }
    else if ((VeATRC_b_NegSpeed_inD) && (KeATRR_b_QudrntPrtctn_ByPass))
    {
        /* UnitDelay: '<S57>/UnitDelay1' incorporates:
         *  MinMax: '<S57>/MinMax6'
         *  Switch: '<S57>/Switch9'
         */
        ATRR_ac_DW.UnitDelay1_DSTATE[0] = fmaxf(VeATRC_M_ToReqImmdCnvt,
            rtb_Switch3_b_idx_0);
        ATRR_ac_DW.UnitDelay1_DSTATE[1] = fmaxf
            (rtb_TmpSignalConversionAtVeWTAR_M_ToReqS,
             rtb_TmpSignalConversionAtVeWTAR_M_Typ1Ma);
        ATRR_ac_DW.UnitDelay1_DSTATE[2] = fmaxf(rtb_Maximum_b,
            rtb_TmpSignalConversionAtVeWTAR_M_Typ1Mi);
        ATRR_ac_DW.UnitDelay1_DSTATE[3] = fmaxf(rtb_Switch4_a, rtb_Gain_la);
        ATRR_ac_DW.UnitDelay1_DSTATE[4] = fmaxf(rtb_Max2[3], rtb_Switch3_b_idx_4);
        ATRR_ac_DW.UnitDelay1_DSTATE[5] = fmaxf(VeATRC_M_ToReqPot_Cnvt,
            rtb_Switch_l_idx_0);
        ATRR_ac_DW.UnitDelay1_DSTATE[6] = fmaxf
            (rtb_VariantMergeForOutportOITRTrqReqTact, rtb_Switch1_c2);
        ATRR_ac_DW.UnitDelay1_DSTATE[7] = fmaxf(rtb_Max1[5], rtb_MinMax28);
        ATRR_ac_DW.UnitDelay1_DSTATE[8] = fmaxf(rtb_Max1[4],
            rtb_TmpSignalConversionAtVeWTAR_M_ToReqP);
        ATRR_ac_DW.UnitDelay1_DSTATE[9] = fmaxf
            (rtb_TmpSignalConversionAtVeTTQR_M_SumMax,
             rtb_TmpSignalConversionAtVeSCCR_M_Output);
        ATRR_ac_DW.UnitDelay1_DSTATE[10] = fmaxf(VeATRC_M_ToRawExp_Tact,
            rtb_TmpSignalConversionAtVeCSVR_v_VehSpd);
        ATRR_ac_DW.UnitDelay1_DSTATE[11] = fmaxf(VeATRC_M_ToReqPrdctd_Tact,
            rtb_TmpSignalConversionAtVeAPSR_Pct_Acce);
        ATRR_ac_DW.UnitDelay1_DSTATE[12] = fmaxf(rtb_Gain_b, rtb_Switch1_cv);
    }
    else if (rtb_Logical7)
    {
        /* Switch: '<S57>/Switch2' incorporates:
         *  Switch: '<S57>/Switch9'
         *  UnitDelay: '<S57>/UnitDelay1'
         */
        ATRR_ac_DW.UnitDelay1_DSTATE[0] = rtb_Switch3_b_idx_0;
        ATRR_ac_DW.UnitDelay1_DSTATE[1] =
            rtb_TmpSignalConversionAtVeWTAR_M_Typ1Ma;
        ATRR_ac_DW.UnitDelay1_DSTATE[2] =
            rtb_TmpSignalConversionAtVeWTAR_M_Typ1Mi;
        ATRR_ac_DW.UnitDelay1_DSTATE[3] = rtb_Gain_la;
        ATRR_ac_DW.UnitDelay1_DSTATE[4] = rtb_Switch3_b_idx_4;
        ATRR_ac_DW.UnitDelay1_DSTATE[5] = rtb_Switch_l_idx_0;
        ATRR_ac_DW.UnitDelay1_DSTATE[6] = rtb_Switch1_c2;
        ATRR_ac_DW.UnitDelay1_DSTATE[7] = rtb_MinMax28;
        ATRR_ac_DW.UnitDelay1_DSTATE[8] =
            rtb_TmpSignalConversionAtVeWTAR_M_ToReqP;
        ATRR_ac_DW.UnitDelay1_DSTATE[9] =
            rtb_TmpSignalConversionAtVeSCCR_M_Output;
        ATRR_ac_DW.UnitDelay1_DSTATE[10] =
            rtb_TmpSignalConversionAtVeCSVR_v_VehSpd;
        ATRR_ac_DW.UnitDelay1_DSTATE[11] =
            rtb_TmpSignalConversionAtVeAPSR_Pct_Acce;
        ATRR_ac_DW.UnitDelay1_DSTATE[12] = rtb_Switch1_cv;
    }
    else
    {
        /* UnitDelay: '<S57>/UnitDelay1' incorporates:
         *  Switch: '<S57>/Switch2'
         *  Switch: '<S57>/Switch9'
         */
        ATRR_ac_DW.UnitDelay1_DSTATE[0] = VeATRC_M_ToReqImmdCnvt;
        ATRR_ac_DW.UnitDelay1_DSTATE[1] =
            rtb_TmpSignalConversionAtVeWTAR_M_ToReqS;
        ATRR_ac_DW.UnitDelay1_DSTATE[2] = rtb_Maximum_b;
        ATRR_ac_DW.UnitDelay1_DSTATE[3] = rtb_Switch4_a;
        ATRR_ac_DW.UnitDelay1_DSTATE[4] = rtb_Max2[3];
        ATRR_ac_DW.UnitDelay1_DSTATE[5] = VeATRC_M_ToReqPot_Cnvt;
        ATRR_ac_DW.UnitDelay1_DSTATE[6] =
            rtb_VariantMergeForOutportOITRTrqReqTact;
        ATRR_ac_DW.UnitDelay1_DSTATE[7] = rtb_Max1[5];
        ATRR_ac_DW.UnitDelay1_DSTATE[8] = rtb_Max1[4];
        ATRR_ac_DW.UnitDelay1_DSTATE[9] =
            rtb_TmpSignalConversionAtVeTTQR_M_SumMax;
        ATRR_ac_DW.UnitDelay1_DSTATE[10] = VeATRC_M_ToRawExp_Tact;
        ATRR_ac_DW.UnitDelay1_DSTATE[11] = VeATRC_M_ToReqPrdctd_Tact;
        ATRR_ac_DW.UnitDelay1_DSTATE[12] = rtb_Gain_b;
    }

    /* End of Switch: '<S57>/Switch7' */

    /* Switch: '<S6>/Switch1' incorporates:
     *  Constant: '<S55>/Constant25'
     *  Constant: '<S56>/Calib'
     *  Constant: '<S59>/Constant'
     *  RelationalOperator: '<S59>/Compare'
     *  S-Function (sfix_bitop): '<S55>/Bitwise Logical Operator1'
     *  UnitDelay: '<S57>/UnitDelay1'
     */
    if ((((sint32)HeATRR_g_ToClipOvrd_C) & 2) <= 0)
    {
        rtb_TmpSignalConversionAtVeWTAR_M_ToReqS = ATRR_ac_DW.UnitDelay1_DSTATE
            [1];
    }

    /* End of Switch: '<S6>/Switch1' */

    /* Outport: '<Root>/VeATRR_M_ToReqPrdctd_Stgc' incorporates:
     *  Sum: '<S6>/Subtraction'
     */
    (void)Rte_Write_VeATRR_M_ToReqPrdctd_Stgc_Value
        (rtb_TmpSignalConversionAtVeWTAR_M_ToRe_p +
         rtb_TmpSignalConversionAtVeWTAR_M_ToReqS);

    /* Switch: '<S6>/Switch2' incorporates:
     *  Constant: '<S55>/Constant26'
     *  Constant: '<S56>/Calib'
     *  Constant: '<S66>/Constant'
     *  RelationalOperator: '<S66>/Compare'
     *  S-Function (sfix_bitop): '<S55>/Bitwise Logical Operator2'
     *  UnitDelay: '<S57>/UnitDelay1'
     */
    if ((((sint32)HeATRR_g_ToClipOvrd_C) & 4) <= 0)
    {
        rtb_Maximum_b = ATRR_ac_DW.UnitDelay1_DSTATE[2];
    }

    /* End of Switch: '<S6>/Switch2' */

    /* Outport: '<Root>/VeATRR_M_OutputTorqReqImmedOITR' incorporates:
     *  Sum: '<S6>/Subtraction1'
     */
    (void)Rte_Write_VeATRR_M_OutputTorqReqImmedOITR_Value
        (rtb_TmpSignalConversionAtVeWTAR_M_ToRe_p + rtb_Maximum_b);

    /* Switch: '<S6>/Switch3' incorporates:
     *  Constant: '<S55>/Constant27'
     *  Constant: '<S56>/Calib'
     *  Constant: '<S67>/Constant'
     *  RelationalOperator: '<S67>/Compare'
     *  S-Function (sfix_bitop): '<S55>/Bitwise Logical Operator3'
     *  UnitDelay: '<S57>/UnitDelay1'
     */
    if ((((sint32)HeATRR_g_ToClipOvrd_C) & 8) <= 0)
    {
        rtb_Switch4_a = ATRR_ac_DW.UnitDelay1_DSTATE[3];
    }

    /* End of Switch: '<S6>/Switch3' */

    /* Outport: '<Root>/VeATRR_M_OutputTorqReqImmedHTDR' incorporates:
     *  Sum: '<S6>/Subtraction2'
     */
    (void)Rte_Write_VeATRR_M_OutputTorqReqImmedHTDR_Value
        (rtb_TmpSignalConversionAtVeWTAR_M_ToRe_p + rtb_Switch4_a);

    /* Switch: '<S6>/Switch5' incorporates:
     *  Constant: '<S55>/Constant29'
     *  Constant: '<S56>/Calib'
     *  Constant: '<S70>/Constant'
     *  RelationalOperator: '<S70>/Compare'
     *  S-Function (sfix_bitop): '<S55>/Bitwise Logical Operator5'
     *  UnitDelay: '<S57>/UnitDelay1'
     */
    if ((((sint32)HeATRR_g_ToClipOvrd_C) & 32) > 0)
    {
        rtb_MinMax5 = VeATRC_M_ToReqPot_Cnvt;
    }
    else
    {
        rtb_MinMax5 = ATRR_ac_DW.UnitDelay1_DSTATE[5];
    }

    /* End of Switch: '<S6>/Switch5' */

    /* Outport: '<Root>/VeATRR_M_OutputTorqReqPot' incorporates:
     *  Sum: '<S6>/Subtraction3'
     */
    (void)Rte_Write_VeATRR_M_OutputTorqReqPot_Value
        (rtb_TmpSignalConversionAtVeWTAR_M_ToRe_p + rtb_MinMax5);

    /* Switch: '<S6>/Switch6' incorporates:
     *  Constant: '<S55>/Constant30'
     *  Constant: '<S56>/Calib'
     *  Constant: '<S69>/Constant'
     *  RelationalOperator: '<S69>/Compare'
     *  S-Function (sfix_bitop): '<S55>/Bitwise Logical Operator6'
     *  UnitDelay: '<S57>/UnitDelay1'
     */
    if ((((sint32)HeATRR_g_ToClipOvrd_C) & 64) <= 0)
    {
        rtb_VariantMergeForOutportOITRTrqReqTact = ATRR_ac_DW.UnitDelay1_DSTATE
            [6];
    }

    /* End of Switch: '<S6>/Switch6' */

    /* Outport: '<Root>/VeATRR_M_OutTorqReqImmed_TactOITR' incorporates:
     *  Sum: '<S6>/Subtraction4'
     */
    (void)Rte_Write_VeATRR_M_OutTorqReqImmed_TactOITR_Value
        (rtb_TmpSignalConversionAtVeWTAR_M_ToRe_p +
         rtb_VariantMergeForOutportOITRTrqReqTact);

    /* Switch: '<S6>/Switch10' incorporates:
     *  Constant: '<S55>/Constant32'
     *  Constant: '<S56>/Calib'
     *  Constant: '<S72>/Constant'
     *  RelationalOperator: '<S72>/Compare'
     *  S-Function (sfix_bitop): '<S55>/Bitwise Logical Operator8'
     */
    if ((((sint32)HeATRR_g_ToClipOvrd_C) & 256) > 0)
    {
        /* Outport: '<Root>/VeATRR_M_To_xSEMxUndSht' */
        (void)Rte_Write_VeATRR_M_To_xSEMxUndSht_Value(rtb_Max1[4]);
    }
    else
    {
        /* Outport: '<Root>/VeATRR_M_To_xSEMxUndSht' incorporates:
         *  UnitDelay: '<S57>/UnitDelay1'
         */
        (void)Rte_Write_VeATRR_M_To_xSEMxUndSht_Value
            (ATRR_ac_DW.UnitDelay1_DSTATE[8]);
    }

    /* End of Switch: '<S6>/Switch10' */

    /* Switch: '<S6>/Switch11' incorporates:
     *  Constant: '<S55>/Constant18'
     *  Constant: '<S56>/Calib'
     *  Constant: '<S73>/Constant'
     *  RelationalOperator: '<S73>/Compare'
     *  S-Function (sfix_bitop): '<S55>/Bitwise Logical Operator9'
     */
    if ((((sint32)HeATRR_g_ToClipOvrd_C) & 512) > 0)
    {
        /* Outport: '<Root>/VeATRR_M_ToReqPrdctdShaped_Tact' */
        (void)Rte_Write_VeATRR_M_ToReqPrdctdShaped_Tact_Value
            (rtb_TmpSignalConversionAtVeTTQR_M_SumMax);
    }
    else
    {
        /* Outport: '<Root>/VeATRR_M_ToReqPrdctdShaped_Tact' incorporates:
         *  UnitDelay: '<S57>/UnitDelay1'
         */
        (void)Rte_Write_VeATRR_M_ToReqPrdctdShaped_Tact_Value
            (ATRR_ac_DW.UnitDelay1_DSTATE[9]);
    }

    /* End of Switch: '<S6>/Switch11' */

    /* Switch: '<S6>/Switch12' incorporates:
     *  Constant: '<S55>/Constant19'
     *  Constant: '<S56>/Calib'
     *  Constant: '<S60>/Constant'
     *  RelationalOperator: '<S60>/Compare'
     *  S-Function (sfix_bitop): '<S55>/Bitwise Logical Operator10'
     */
    if ((((sint32)HeATRR_g_ToClipOvrd_C) & 1024) > 0)
    {
        /* Outport: '<Root>/VeATRR_M_ToRawExp_Tact' */
        (void)Rte_Write_VeATRR_M_ToRawExp_Tact_Value(VeATRC_M_ToRawExp_Tact);
    }
    else
    {
        /* Outport: '<Root>/VeATRR_M_ToRawExp_Tact' incorporates:
         *  UnitDelay: '<S57>/UnitDelay1'
         */
        (void)Rte_Write_VeATRR_M_ToRawExp_Tact_Value
            (ATRR_ac_DW.UnitDelay1_DSTATE[10]);
    }

    /* End of Switch: '<S6>/Switch12' */

    /* Switch: '<S6>/Switch13' incorporates:
     *  Constant: '<S55>/Constant20'
     *  Constant: '<S56>/Calib'
     *  Constant: '<S61>/Constant'
     *  RelationalOperator: '<S61>/Compare'
     *  S-Function (sfix_bitop): '<S55>/Bitwise Logical Operator11'
     */
    if ((((sint32)HeATRR_g_ToClipOvrd_C) & 2048) > 0)
    {
        /* Outport: '<Root>/VeATRR_M_ToReqPrdctd_Tact' */
        (void)Rte_Write_VeATRR_M_ToReqPrdctd_Tact_Value
            (VeATRC_M_ToReqPrdctd_Tact);
    }
    else
    {
        /* Outport: '<Root>/VeATRR_M_ToReqPrdctd_Tact' incorporates:
         *  UnitDelay: '<S57>/UnitDelay1'
         */
        (void)Rte_Write_VeATRR_M_ToReqPrdctd_Tact_Value
            (ATRR_ac_DW.UnitDelay1_DSTATE[11]);
    }

    /* End of Switch: '<S6>/Switch13' */

    /* Switch: '<S6>/Switch4' incorporates:
     *  Constant: '<S55>/Constant28'
     *  Constant: '<S56>/Calib'
     *  Constant: '<S71>/Constant'
     *  RelationalOperator: '<S71>/Compare'
     *  S-Function (sfix_bitop): '<S55>/Bitwise Logical Operator4'
     */
    if ((((sint32)HeATRR_g_ToClipOvrd_C) & 16) > 0)
    {
        /* Outport: '<Root>/VeATRR_M_OutTrqReqImmWithoutSEM' */
        (void)Rte_Write_VeATRR_M_OutTrqReqImmWithoutSEM_Value(rtb_Max2[3]);
    }
    else
    {
        /* Outport: '<Root>/VeATRR_M_OutTrqReqImmWithoutSEM' incorporates:
         *  UnitDelay: '<S57>/UnitDelay1'
         */
        (void)Rte_Write_VeATRR_M_OutTrqReqImmWithoutSEM_Value
            (ATRR_ac_DW.UnitDelay1_DSTATE[4]);
    }

    /* End of Switch: '<S6>/Switch4' */

    /* Switch: '<S6>/Switch7' incorporates:
     *  Constant: '<S55>/Constant21'
     *  Constant: '<S56>/Calib'
     *  Constant: '<S65>/Constant'
     *  RelationalOperator: '<S65>/Compare'
     *  S-Function (sfix_bitop): '<S55>/Bitwise Logical Operator12'
     */
    if ((((sint32)HeATRR_g_ToClipOvrd_C) & 4096) > 0)
    {
        /* Outport: '<Root>/VeATRR_M_OutTorqReqPrdctd_TactOITR' */
        (void)Rte_Write_VeATRR_M_OutTorqReqPrdctd_TactOITR_Value(rtb_Gain_b);
    }
    else
    {
        /* Outport: '<Root>/VeATRR_M_OutTorqReqPrdctd_TactOITR' incorporates:
         *  UnitDelay: '<S57>/UnitDelay1'
         */
        (void)Rte_Write_VeATRR_M_OutTorqReqPrdctd_TactOITR_Value
            (ATRR_ac_DW.UnitDelay1_DSTATE[12]);
    }

    /* End of Switch: '<S6>/Switch7' */

    /* Switch: '<S6>/Switch8' incorporates:
     *  Constant: '<S55>/Constant31'
     *  Constant: '<S56>/Calib'
     *  Constant: '<S68>/Constant'
     *  RelationalOperator: '<S68>/Compare'
     *  S-Function (sfix_bitop): '<S55>/Bitwise Logical Operator7'
     */
    if ((((sint32)HeATRR_g_ToClipOvrd_C) & 128) > 0)
    {
        /* Outport: '<Root>/VeATRR_M_ToArb_xSEM' */
        (void)Rte_Write_VeATRR_M_ToArb_xSEM_Value(rtb_Max1[5]);
    }
    else
    {
        /* Outport: '<Root>/VeATRR_M_ToArb_xSEM' incorporates:
         *  UnitDelay: '<S57>/UnitDelay1'
         */
        (void)Rte_Write_VeATRR_M_ToArb_xSEM_Value(ATRR_ac_DW.UnitDelay1_DSTATE[7]);
    }

    /* End of Switch: '<S6>/Switch8' */

    /* Switch: '<S6>/Switch9' incorporates:
     *  Constant: '<S55>/Constant17'
     *  Constant: '<S56>/Calib'
     *  Constant: '<S58>/Constant'
     *  RelationalOperator: '<S58>/Compare'
     *  S-Function (sfix_bitop): '<S55>/Bitwise Logical Operator'
     */
    if ((((sint32)HeATRR_g_ToClipOvrd_C) & 1) > 0)
    {
        /* Outport: '<Root>/VeATRR_M_OutputTorqReqImmed' */
        (void)Rte_Write_VeATRR_M_OutputTorqReqImmed_Value(VeATRC_M_ToReqImmdCnvt);
    }
    else
    {
        /* Outport: '<Root>/VeATRR_M_OutputTorqReqImmed' incorporates:
         *  UnitDelay: '<S57>/UnitDelay1'
         */
        (void)Rte_Write_VeATRR_M_OutputTorqReqImmed_Value
            (ATRR_ac_DW.UnitDelay1_DSTATE[0]);
    }

    /* End of Switch: '<S6>/Switch9' */

    /* Sum: '<S9>/Sum3' */
    rtb_TmpSignalConversionAtVeWTAR_M_ToRe_p =
        rtb_TmpSignalConversionAtVeCTCR_M_MinCre - rtb_MinMax1_b;

    /* Outputs for Atomic SubSystem: '<S9>/Hysteresis' */
    /* Switch: '<S169>/Switch1' incorporates:
     *  Constant: '<S169>/Constant Value'
     *  Constant: '<S172>/Calib'
     *  Constant: '<S173>/Calib'
     *  RelationalOperator: '<S169>/Greater  Than'
     *  RelationalOperator: '<S169>/Greater  Than1'
     *  UnitDelay: '<S169>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeWTAR_M_ToRe_p > KeATRR_M_UndrShtTorqArbRSP)
    {
        ATRR_ac_DW.UnitDelay_DSTATE_a = true;
    }
    else
    {
        ATRR_ac_DW.UnitDelay_DSTATE_a =
            ((rtb_TmpSignalConversionAtVeWTAR_M_ToRe_p >=
              KeATRR_M_UndrShtTorqArbLSP) && (ATRR_ac_DW.UnitDelay_DSTATE_a));
    }

    /* End of Switch: '<S169>/Switch1' */
    /* End of Outputs for SubSystem: '<S9>/Hysteresis' */

    /* Switch: '<S8>/Switch3' incorporates:
     *  Inport: '<Root>/VeWTAR_b_IsToRequestClipped'
     */
    if (rtb_Comparison1_iu)
    {
        /* DataTypeConversion: '<S128>/DataTypeConversion' incorporates:
         *  Constant: '<S129>/Constant'
         *  Outport: '<Root>/VeATRR_e_TrqArb'
         *  Switch: '<S8>/Switch3'
         */
        (void)Rte_Write_VeATRR_e_TrqArb_Value(CeWTAR_e_TransTorque);
    }
    else
    {
        (void)Rte_Read_VeWTAR_b_IsToRequestClipped_Value(&tmpRead);

        /* Switch: '<S9>/Switch2' incorporates:
         *  Inport: '<Root>/VeWTAR_b_IsToRequestClipped'
         *  Inport: '<Root>/VeWTAR_e_TrqArb'
         */
        if (tmpRead)
        {
            /* Switch: '<S9>/Switch2' incorporates:
             *  Constant: '<S168>/Constant'
             */
            rtb_Switch2_bv = CeWTAR_e_OvrRevPtn;
        }
        else
        {
            (void)Rte_Read_VeWTAR_e_TrqArb_Value(&rtb_Switch2_bv);

            /* Switch: '<S9>/Switch12' incorporates:
             *  Inport: '<Root>/VeWTAR_e_TrqArb'
             *  UnitDelay: '<S169>/Unit Delay'
             */
            if (ATRR_ac_DW.UnitDelay_DSTATE_a)
            {
                /* Switch: '<S9>/Switch2' incorporates:
                 *  Constant: '<S167>/Constant'
                 */
                rtb_Switch2_bv = CeWTAR_e_UndrShtPrt;
            }

            /* End of Switch: '<S9>/Switch12' */
        }

        /* End of Switch: '<S9>/Switch2' */

        /* DataTypeConversion: '<S128>/DataTypeConversion' incorporates:
         *  Outport: '<Root>/VeATRR_e_TrqArb'
         *  Switch: '<S8>/Switch3'
         *  Switch: '<S9>/Switch2'
         */
        (void)Rte_Write_VeATRR_e_TrqArb_Value(rtb_Switch2_bv);
    }

    /* End of Switch: '<S8>/Switch3' */

    /* Switch: '<S164>/Switch3' incorporates:
     *  UnitDelay: '<S164>/Unit Delay'
     */
    if (rtb_OR1_e)
    {
        ATRR_ac_DW.UnitDelay_DSTATE_h[0] = rtb_Switch1_cnx;
        ATRR_ac_DW.UnitDelay_DSTATE_h[1] = rtb_Switch2_aa_idx_1;
    }
    else
    {
        ATRR_ac_DW.UnitDelay_DSTATE_h[0] = VeATRC_M_ToCombustionDlyd[0];
        ATRR_ac_DW.UnitDelay_DSTATE_h[1] = VeATRC_M_ToCombustionDlyd[1];
    }

    /* End of Switch: '<S164>/Switch3' */

    /* SignalConversion generated from: '<S1>/VeBTQR_M_DrvIntndTotBrkOutTorqILE' incorporates:
     *  Inport: '<Root>/VeBTQR_M_DrvIntndTotBrkOutTorqILE'
     */
    (void)Rte_Read_VeBTQR_M_DrvIntndTotBrkOutTorqILE_Value
        (&rtb_TmpSignalConversionAtVeBTQR_M_DrvInt);

    /* SignalConversion generated from: '<S1>/VeDTRR_M_AxleTrqReqMax' incorporates:
     *  Inport: '<Root>/VeDTRR_M_AxleTrqReqMax'
     */
    (void)Rte_Read_VeDTRR_M_AxleTrqReqMax_Value
        (&rtb_TmpSignalConversionAtVeDTRR_M_AxleTr);

    /* SignalConversion generated from: '<S1>/VeWTAR_M_MinPedal_StgcAxle' incorporates:
     *  Inport: '<Root>/VeWTAR_M_MinPedal_StgcAxle'
     */
    (void)Rte_Read_VeWTAR_M_MinPedal_StgcAxle_Value
        (&rtb_TmpSignalConversionAtVeWTAR_M_MinPed);

    /* Outport: '<Root>/VeATRR_M_To_Tact_xMaxTrqDsrd' incorporates:
     *  MinMax: '<S9>/MinMax21'
     */
    (void)Rte_Write_VeATRR_M_To_Tact_xMaxTrqDsrd_Value(fmaxf
        (rtb_TmpSignalConversionAtVeCTCR_M_MinCre,
         rtb_TmpSignalConversionAtVeTTQR_M_TCMSum));

    /* Switch: '<S9>/Switch15' incorporates:
     *  Constant: '<S174>/Calib'
     */
    if (KeATRR_b_OvrdCombRatio)
    {
        /* Switch: '<S9>/Switch15' incorporates:
         *  Constant: '<S176>/Calib'
         */
        rtb_TmpSignalConversionAtVeWTAR_M_ToRe_p = KeATRR_r_CombRatio;
    }
    else
    {
        /* Switch: '<S9>/Switch15' */
        rtb_TmpSignalConversionAtVeWTAR_M_ToRe_p = VeATRC_r_TransOut2Wheel;
    }

    /* End of Switch: '<S9>/Switch15' */

    /* Outputs for Atomic SubSystem: '<S9>/ProtectedDivision8' */
    /* Switch: '<S180>/Switch1' incorporates:
     *  Constant: '<S180>/Constant Value'
     *  Constant: '<S180>/Constant Value1'
     *  Constant: '<S180>/Constant Value2'
     *  Constant: '<S180>/Constant Value3'
     *  Logic: '<S180>/AND'
     *  RelationalOperator: '<S180>/Greater Than or Equal '
     *  RelationalOperator: '<S180>/Greater Than or Equal 1'
     *  RelationalOperator: '<S180>/Not Equal'
     *  RelationalOperator: '<S180>/Not Equal1'
     *  Switch: '<S180>/Switch2'
     *  Switch: '<S180>/Switch3'
     */
    if ((rtb_MinMax7 != 0.0F) && (rtb_TmpSignalConversionAtVeWTAR_M_ToRe_p !=
            0.0F))
    {
        /* Switch: '<S180>/Switch1' incorporates:
         *  Product: '<S180>/Division'
         */
        rtb_TmpSignalConversionAtVeVSDR_n_PrimNo = rtb_MinMax7 /
            rtb_TmpSignalConversionAtVeWTAR_M_ToRe_p;
    }
    else if (rtb_MinMax7 > 0.0F)
    {
        /* Switch: '<S180>/Switch2' incorporates:
         *  Constant: '<S180>/MAXFLOAT'
         *  Switch: '<S180>/Switch1'
         */
        rtb_TmpSignalConversionAtVeVSDR_n_PrimNo = 3.402823466E+38F;
    }
    else if (rtb_MinMax7 < 0.0F)
    {
        /* Switch: '<S180>/Switch3' incorporates:
         *  Constant: '<S180>/MINFLOAT'
         *  Switch: '<S180>/Switch1'
         *  Switch: '<S180>/Switch2'
         */
        rtb_TmpSignalConversionAtVeVSDR_n_PrimNo = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S180>/Switch1' incorporates:
         *  Constant: '<S180>/Constant Value4'
         *  Switch: '<S180>/Switch2'
         *  Switch: '<S180>/Switch3'
         */
        rtb_TmpSignalConversionAtVeVSDR_n_PrimNo = 0.0F;
    }

    /* End of Switch: '<S180>/Switch1' */
    /* End of Outputs for SubSystem: '<S9>/ProtectedDivision8' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCTCR_M_MinCreepWheelTrq' */
    (void)Rte_Read_VeCTCR_M_MinCreepWheelTrq_Value(&rtb_Switch13);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/ATRR_MedTEB'
     */
    /* Switch: '<S9>/Switch13' incorporates:
     *  Constant: '<S175>/Calib'
     */
    if (KeATRR_b_OvrdMinCreepWheelTrq)
    {
        /* Switch: '<S9>/Switch13' incorporates:
         *  Constant: '<S171>/Calib'
         */
        rtb_Switch13 = KeATRR_M_MinCreepWheelTrq;
    }

    /* End of Switch: '<S9>/Switch13' */

    /* Outputs for Atomic SubSystem: '<S9>/ProtectedDivision11' */
    /* Switch: '<S178>/Switch1' incorporates:
     *  Constant: '<S178>/Constant Value'
     *  Constant: '<S178>/Constant Value1'
     *  Constant: '<S178>/Constant Value2'
     *  Constant: '<S178>/Constant Value3'
     *  Logic: '<S178>/AND'
     *  RelationalOperator: '<S178>/Greater Than or Equal '
     *  RelationalOperator: '<S178>/Greater Than or Equal 1'
     *  RelationalOperator: '<S178>/Not Equal'
     *  RelationalOperator: '<S178>/Not Equal1'
     *  Switch: '<S178>/Switch2'
     *  Switch: '<S178>/Switch3'
     */
    if ((rtb_Switch13 != 0.0F) && (rtb_TmpSignalConversionAtVeWTAR_M_ToRe_p !=
            0.0F))
    {
        /* Switch: '<S178>/Switch1' incorporates:
         *  Product: '<S178>/Division'
         */
        rtb_Switch13 /= rtb_TmpSignalConversionAtVeWTAR_M_ToRe_p;
    }
    else if (rtb_Switch13 > 0.0F)
    {
        /* Switch: '<S178>/Switch2' incorporates:
         *  Constant: '<S178>/MAXFLOAT'
         *  Switch: '<S178>/Switch1'
         */
        rtb_Switch13 = 3.402823466E+38F;
    }
    else if (rtb_Switch13 < 0.0F)
    {
        /* Switch: '<S178>/Switch3' incorporates:
         *  Constant: '<S178>/MINFLOAT'
         *  Switch: '<S178>/Switch1'
         *  Switch: '<S178>/Switch2'
         */
        rtb_Switch13 = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S178>/Switch1' incorporates:
         *  Constant: '<S178>/Constant Value4'
         *  Switch: '<S178>/Switch2'
         *  Switch: '<S178>/Switch3'
         */
        rtb_Switch13 = 0.0F;
    }

    /* End of Switch: '<S178>/Switch1' */
    /* End of Outputs for SubSystem: '<S9>/ProtectedDivision11' */

    /* MinMax: '<S9>/MinMax8' */
    VeATRR_M_ToReqImmedOITR = fmaxf(rtb_TmpSignalConversionAtVeVSDR_n_PrimNo,
        rtb_Switch13);

    /* Switch: '<S177>/Switch2' incorporates:
     *  Constant: '<S177>/ConstantValue5'
     *  Constant: '<S202>/Constant Value'
     *  RelationalOperator: '<S177>/GreaterThan2'
     *  RelationalOperator: '<S202>/Not Equal'
     *  Switch: '<S202>/Switch1'
     */
    if (rtb_Switch1_md < 0.01F)
    {
        /* Outport: '<Root>/VeATRR_M_MinPedal_Stgc' incorporates:
         *  Constant: '<S177>/ConstantValue1'
         */
        (void)Rte_Write_VeATRR_M_MinPedal_Stgc_Value(0.0F);
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S177>/ProtectedDivision2' */
        if (rtb_TmpSignalConversionAtVeWTAR_M_MinPed != 0.0F)
        {
            /* Switch: '<S202>/Switch1' incorporates:
             *  Product: '<S202>/Division'
             */
            rtb_TmpSignalConversionAtVeWTAR_M_MinPed /= rtb_Switch1_md;
        }
        else
        {
            /* Switch: '<S202>/Switch1' incorporates:
             *  Constant: '<S202>/Constant Value4'
             *  Switch: '<S202>/Switch2'
             *  Switch: '<S202>/Switch3'
             */
            rtb_TmpSignalConversionAtVeWTAR_M_MinPed = 0.0F;
        }

        /* End of Outputs for SubSystem: '<S177>/ProtectedDivision2' */

        /* Outport: '<Root>/VeATRR_M_MinPedal_Stgc' */
        (void)Rte_Write_VeATRR_M_MinPedal_Stgc_Value
            (rtb_TmpSignalConversionAtVeWTAR_M_MinPed);
    }

    /* End of Switch: '<S177>/Switch2' */

    /* Outport: '<Root>/VeATRR_M_MinPedal_Tact' incorporates:
     *  MinMax: '<S177>/MinMax1'
     */
    (void)Rte_Write_VeATRR_M_MinPedal_Tact_Value(fmaxf
        (rtb_TmpSignalConversionAtVeCTCR_M_MinCre, rtb_MinMax25));

    /* Switch: '<S204>/Switch' incorporates:
     *  Constant: '<S204>/ConstantValue4'
     *  Constant: '<S231>/Constant Value'
     *  RelationalOperator: '<S204>/GreaterThan1'
     *  RelationalOperator: '<S231>/Not Equal'
     *  Switch: '<S231>/Switch1'
     */
    if (rtb_VeATRR_r_Tact2Wheel < 0.01F)
    {
        /* Switch: '<S204>/Switch' incorporates:
         *  Constant: '<S204>/ConstantValue2'
         */
        rtb_VeATRR_r_Tact2Wheel = 0.0F;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S204>/ProtectedDivision2' */
        if (rtb_TmpSignalConversionAtVeDTRR_M_AxleTr != 0.0F)
        {
            /* Switch: '<S204>/Switch' incorporates:
             *  Product: '<S231>/Division'
             *  Switch: '<S231>/Switch1'
             */
            rtb_VeATRR_r_Tact2Wheel = rtb_TmpSignalConversionAtVeDTRR_M_AxleTr /
                rtb_VeATRR_r_Tact2Wheel;
        }
        else
        {
            /* Switch: '<S204>/Switch' incorporates:
             *  Constant: '<S231>/Constant Value4'
             *  Switch: '<S231>/Switch1'
             *  Switch: '<S231>/Switch2'
             *  Switch: '<S231>/Switch3'
             */
            rtb_VeATRR_r_Tact2Wheel = 0.0F;
        }

        /* End of Outputs for SubSystem: '<S204>/ProtectedDivision2' */
    }

    /* End of Switch: '<S204>/Switch' */

    /* Outputs for Atomic SubSystem: '<S204>/VariantSubsystem' */
#if Rte_SysCon_Variant_ATRR_RTC_On

    /* Outputs for Atomic SubSystem: '<S232>/RTC_on' */
    /* Gain: '<S242>/Gain' incorporates:
     *  Lookup_n-D: '<S244>/Vector'
     *  SignalConversion generated from: '<S1>/VeTCCR_r_RampFactor'
     */
    rtb_TmpSignalConversionAtVeDTRR_M_AxleTr = 0.5F * look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeTCCR_r_RampFa,
         (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsB_KxHSCR_r_TCC_TturbFromNC2_CoeffsB
          ()),
         (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsB_KtHSCR_r_TCC_TturbFromNC2_CoeffsB
          ()), 21U);

    /* Lookup_n-D: '<S243>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeTCCR_r_RampFactor'
     */
    rtb_Vector_a = look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeTCCR_r_RampFa,
         (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsA_KxHSCR_r_TCC_TturbFromNC2_CoeffsA
          ()),
         (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsA_KtHSCR_r_TCC_TturbFromNC2_CoeffsA
          ()), 21U);

    /* Outputs for Atomic SubSystem: '<S242>/Protected Division1' */
    /* Switch: '<S246>/Switch1' incorporates:
     *  Constant: '<S246>/Constant Value'
     *  Constant: '<S246>/Constant Value1'
     *  Constant: '<S246>/Constant Value2'
     *  Constant: '<S246>/Constant Value3'
     *  Logic: '<S246>/AND'
     *  RelationalOperator: '<S246>/Greater Than or Equal '
     *  RelationalOperator: '<S246>/Greater Than or Equal 1'
     *  RelationalOperator: '<S246>/Not Equal'
     *  RelationalOperator: '<S246>/Not Equal1'
     *  Switch: '<S246>/Switch2'
     *  Switch: '<S246>/Switch3'
     */
    if ((rtb_TmpSignalConversionAtVeDTRR_M_AxleTr != 0.0F) && (rtb_Vector_a !=
            0.0F))
    {
        /* Switch: '<S246>/Switch1' incorporates:
         *  Product: '<S246>/Division'
         */
        rtb_TmpSignalConversionAtVeCTCR_M_MinCre =
            rtb_TmpSignalConversionAtVeDTRR_M_AxleTr / rtb_Vector_a;
    }
    else if (rtb_TmpSignalConversionAtVeDTRR_M_AxleTr > 0.0F)
    {
        /* Switch: '<S246>/Switch2' incorporates:
         *  Constant: '<S246>/MAXFLOAT'
         *  Switch: '<S246>/Switch1'
         */
        rtb_TmpSignalConversionAtVeCTCR_M_MinCre = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtVeDTRR_M_AxleTr < 0.0F)
    {
        /* Switch: '<S246>/Switch3' incorporates:
         *  Constant: '<S246>/MINFLOAT'
         *  Switch: '<S246>/Switch1'
         *  Switch: '<S246>/Switch2'
         */
        rtb_TmpSignalConversionAtVeCTCR_M_MinCre = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S246>/Switch1' incorporates:
         *  Constant: '<S246>/Constant Value4'
         *  Switch: '<S246>/Switch2'
         *  Switch: '<S246>/Switch3'
         */
        rtb_TmpSignalConversionAtVeCTCR_M_MinCre = 0.0F;
    }

    /* End of Switch: '<S246>/Switch1' */
    /* End of Outputs for SubSystem: '<S242>/Protected Division1' */

    /* Product: '<S242>/Product1' */
    rtb_TmpSignalConversionAtVeDTRR_M_AxleTr *=
        rtb_TmpSignalConversionAtVeDTRR_M_AxleTr;

    /* Outputs for Atomic SubSystem: '<S242>/Protected Division2' */
    /* Switch: '<S247>/Switch1' incorporates:
     *  Constant: '<S247>/Constant Value'
     *  Constant: '<S247>/Constant Value1'
     *  Constant: '<S247>/Constant Value2'
     *  Constant: '<S247>/Constant Value3'
     *  Logic: '<S247>/AND'
     *  RelationalOperator: '<S247>/Greater Than or Equal '
     *  RelationalOperator: '<S247>/Greater Than or Equal 1'
     *  RelationalOperator: '<S247>/Not Equal'
     *  RelationalOperator: '<S247>/Not Equal1'
     *  Switch: '<S247>/Switch2'
     *  Switch: '<S247>/Switch3'
     */
    if ((rtb_TmpSignalConversionAtVeDTRR_M_AxleTr != 0.0F) && (rtb_Vector_a !=
            0.0F))
    {
        /* Switch: '<S247>/Switch1' incorporates:
         *  Product: '<S247>/Division'
         */
        rtb_TmpSignalConversionAtVeDTRR_M_AxleTr /= rtb_Vector_a;
    }
    else if (rtb_TmpSignalConversionAtVeDTRR_M_AxleTr > 0.0F)
    {
        /* Switch: '<S247>/Switch2' incorporates:
         *  Constant: '<S247>/MAXFLOAT'
         *  Switch: '<S247>/Switch1'
         */
        rtb_TmpSignalConversionAtVeDTRR_M_AxleTr = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtVeDTRR_M_AxleTr < 0.0F)
    {
        /* Switch: '<S247>/Switch3' incorporates:
         *  Constant: '<S247>/MINFLOAT'
         *  Switch: '<S247>/Switch1'
         *  Switch: '<S247>/Switch2'
         */
        rtb_TmpSignalConversionAtVeDTRR_M_AxleTr = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S247>/Switch1' incorporates:
         *  Constant: '<S247>/Constant Value4'
         *  Switch: '<S247>/Switch2'
         *  Switch: '<S247>/Switch3'
         */
        rtb_TmpSignalConversionAtVeDTRR_M_AxleTr = 0.0F;
    }

    /* End of Switch: '<S247>/Switch1' */
    /* End of Outputs for SubSystem: '<S242>/Protected Division2' */

    /* Outputs for Atomic SubSystem: '<S242>/Protected Division4' */
    /* Switch: '<S248>/Switch1' incorporates:
     *  Constant: '<S248>/Constant Value1'
     *  RelationalOperator: '<S248>/Not Equal1'
     */
    if (rtb_Vector_a != 0.0F)
    {
        /* Switch: '<S248>/Switch1' incorporates:
         *  Constant: '<S242>/Constant Value2'
         *  Product: '<S248>/Division'
         */
        rtb_Vector_a = 1.0F / rtb_Vector_a;
    }
    else
    {
        /* Switch: '<S248>/Switch1' */
        rtb_Vector_a = 3.402823466E+38F;
    }

    /* End of Switch: '<S248>/Switch1' */
    /* End of Outputs for SubSystem: '<S242>/Protected Division4' */

    /* Signum: '<S241>/Signum' */
    if (rtb_Vector_a < 0.0F)
    {
        rtb_TmpSignalConversionAtVeWTAR_M_MinPed = -1.0F;
    }
    else if (rtb_Vector_a > 0.0F)
    {
        rtb_TmpSignalConversionAtVeWTAR_M_MinPed = 1.0F;
    }
    else
    {
        rtb_TmpSignalConversionAtVeWTAR_M_MinPed = rtb_Vector_a;
    }

    /* End of Signum: '<S241>/Signum' */

    /* Sum: '<S241>/Sum3' incorporates:
     *  Constant: '<S241>/Constant Value'
     *  Gain: '<S242>/Gain1'
     *  Lookup_n-D: '<S245>/Vector'
     *  MinMax: '<S241>/MinMax1'
     *  Product: '<S241>/Product'
     *  Product: '<S241>/Product1'
     *  SignalConversion generated from: '<S1>/VeTCCR_r_RampFactor'
     *  Sqrt: '<S241>/Square Root'
     *  Sum: '<S241>/Sum2'
     *  Sum: '<S242>/Sum1'
     */
    rtb_TmpSignalConversionAtVeCTCR_M_MinCre = ((sqrtf(fmaxf
        ((rtb_VeATRR_r_Tact2Wheel - (look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeTCCR_r_RampFa,
         (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsC_KxHSCR_r_TCC_TturbFromNC2_CoeffsC
          ()),
         (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsC_KtHSCR_r_TCC_TturbFromNC2_CoeffsC
          ()), 3U) - rtb_TmpSignalConversionAtVeDTRR_M_AxleTr)) * rtb_Vector_a,
         0.0F)) * rtb_TmpSignalConversionAtVeWTAR_M_MinPed) +
        (-rtb_TmpSignalConversionAtVeCTCR_M_MinCre)) +
        rtb_TmpSignalConversionAtVeTCCR_r_RampFa;

    /* Outputs for Atomic SubSystem: '<S236>/Protected Division3' */
    /* Switch: '<S239>/Switch1' incorporates:
     *  Constant: '<S239>/Constant Value'
     *  Constant: '<S239>/Constant Value1'
     *  Constant: '<S239>/Constant Value2'
     *  Constant: '<S239>/Constant Value3'
     *  Logic: '<S239>/AND'
     *  RelationalOperator: '<S239>/Greater Than or Equal '
     *  RelationalOperator: '<S239>/Greater Than or Equal 1'
     *  RelationalOperator: '<S239>/Not Equal'
     *  RelationalOperator: '<S239>/Not Equal1'
     *  Switch: '<S239>/Switch2'
     *  Switch: '<S239>/Switch3'
     */
    if ((rtb_TmpSignalConversionAtVeTCCR_r_RampFa != 0.0F) &&
            (rtb_TmpSignalConversionAtVeCTCR_M_MinCre != 0.0F))
    {
        /* Switch: '<S239>/Switch1' incorporates:
         *  Product: '<S239>/Division'
         */
        rtb_TmpSignalConversionAtVeTCCR_r_RampFa /=
            rtb_TmpSignalConversionAtVeCTCR_M_MinCre;
    }
    else if (rtb_TmpSignalConversionAtVeTCCR_r_RampFa > 0.0F)
    {
        /* Switch: '<S239>/Switch2' incorporates:
         *  Constant: '<S239>/MAXFLOAT'
         *  Switch: '<S239>/Switch1'
         */
        rtb_TmpSignalConversionAtVeTCCR_r_RampFa = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtVeTCCR_r_RampFa < 0.0F)
    {
        /* Switch: '<S239>/Switch3' incorporates:
         *  Constant: '<S239>/MINFLOAT'
         *  Switch: '<S239>/Switch1'
         *  Switch: '<S239>/Switch2'
         */
        rtb_TmpSignalConversionAtVeTCCR_r_RampFa = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S239>/Switch1' incorporates:
         *  Constant: '<S239>/Constant Value4'
         *  Switch: '<S239>/Switch2'
         *  Switch: '<S239>/Switch3'
         */
        rtb_TmpSignalConversionAtVeTCCR_r_RampFa = 0.0F;
    }

    /* End of Switch: '<S239>/Switch1' */
    /* End of Outputs for SubSystem: '<S236>/Protected Division3' */

    /* Lookup_n-D: '<S237>/Vector' incorporates:
     *  Switch: '<S239>/Switch1'
     */
    rtb_TmpSignalConversionAtVeTCCR_r_RampFa = look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeTCCR_r_RampFa,
         (Rte_Prm_KxHSCR_r_TCC_TorqRatio_KxHSCR_r_TCC_TorqRatio()),
         (Rte_Prm_KtHSCR_r_TCC_TorqRatio_KtHSCR_r_TCC_TorqRatio()), 17U);

    /* Outputs for Atomic SubSystem: '<S236>/Protected Division1' */
    /* Switch: '<S238>/Switch1' incorporates:
     *  Constant: '<S238>/Constant Value'
     *  Constant: '<S238>/Constant Value1'
     *  Constant: '<S238>/Constant Value2'
     *  Constant: '<S238>/Constant Value3'
     *  Logic: '<S238>/AND'
     *  RelationalOperator: '<S238>/Greater Than or Equal '
     *  RelationalOperator: '<S238>/Greater Than or Equal 1'
     *  RelationalOperator: '<S238>/Not Equal'
     *  RelationalOperator: '<S238>/Not Equal1'
     *  Switch: '<S238>/Switch2'
     *  Switch: '<S238>/Switch3'
     */
    if ((rtb_VeATRR_r_Tact2Wheel != 0.0F) &&
            (rtb_TmpSignalConversionAtVeTCCR_r_RampFa != 0.0F))
    {
        /* Switch: '<S238>/Switch1' incorporates:
         *  Product: '<S238>/Division'
         */
        rtb_TmpSignalConversionAtVeTCCR_r_RampFa = rtb_VeATRR_r_Tact2Wheel /
            rtb_TmpSignalConversionAtVeTCCR_r_RampFa;
    }
    else if (rtb_VeATRR_r_Tact2Wheel > 0.0F)
    {
        /* Switch: '<S238>/Switch2' incorporates:
         *  Constant: '<S238>/MAXFLOAT'
         *  Switch: '<S238>/Switch1'
         */
        rtb_TmpSignalConversionAtVeTCCR_r_RampFa = 3.402823466E+38F;
    }
    else if (rtb_VeATRR_r_Tact2Wheel < 0.0F)
    {
        /* Switch: '<S238>/Switch3' incorporates:
         *  Constant: '<S238>/MINFLOAT'
         *  Switch: '<S238>/Switch1'
         *  Switch: '<S238>/Switch2'
         */
        rtb_TmpSignalConversionAtVeTCCR_r_RampFa = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S238>/Switch1' incorporates:
         *  Constant: '<S238>/Constant Value4'
         *  Switch: '<S238>/Switch2'
         *  Switch: '<S238>/Switch3'
         */
        rtb_TmpSignalConversionAtVeTCCR_r_RampFa = 0.0F;
    }

    /* End of Switch: '<S238>/Switch1' */
    /* End of Outputs for SubSystem: '<S236>/Protected Division1' */

    /* VariantMerge generated from: '<S232>/T_imp' incorporates:
     *  Product: '<S235>/Product4'
     *  Sum: '<S235>/Sum4'
     *  Sum: '<S235>/Sum5'
     */
    rtb_Vector_a = ((rtb_TmpSignalConversionAtVeTCCR_r_RampFa -
                     rtb_VeATRR_r_Tact2Wheel) *
                    rtb_TmpSignalConversionAtVeVSDR_n_NTurbO) +
        rtb_VeATRR_r_Tact2Wheel;

    /* End of Outputs for SubSystem: '<S232>/RTC_on' */
#else

    /* Outputs for Atomic SubSystem: '<S232>/RTC_off' */
    /* VariantMerge generated from: '<S232>/T_imp' incorporates:
     *  Inport: '<S233>/T_turb'
     */
    rtb_Vector_a = rtb_VeATRR_r_Tact2Wheel;

    /* End of Outputs for SubSystem: '<S232>/RTC_off' */
#endif

    /* End of Outputs for SubSystem: '<S204>/VariantSubsystem' */

    /* Switch: '<S204>/Switch2' incorporates:
     *  Constant: '<S227>/Constant'
     *  Logic: '<S204>/Logical1'
     *  RelationalOperator: '<S204>/Comparison2'
     */
    if ((((uint32)Rte_Prm_HeTSXR_e_All_TactToDomain_HeTSXR_e_All_TactToDomain())
         == CeTSXR_e_SumDomain) && tmp)
    {
        /* Switch: '<S204>/Switch3' incorporates:
         *  Constant: '<S229>/Calib'
         */
        if (Rte_Prm_HeATRR_b_RTC_Enbl_HeATRR_b_RTC_Enbl())
        {
            rtb_VeATRR_r_Tact2Wheel = rtb_Vector_a;
        }

        /* End of Switch: '<S204>/Switch3' */

        /* Outport: '<Root>/VeATRR_M_MaxPedal_Tact' incorporates:
         *  Sum: '<S204>/Sum'
         */
        (void)Rte_Write_VeATRR_M_MaxPedal_Tact_Value(rtb_VeATRR_r_Tact2Wheel +
            rtb_TmpSignalConversionAtVeTTIR_M_PumpTr);
    }
    else
    {
        /* Outport: '<Root>/VeATRR_M_MaxPedal_Tact' */
        (void)Rte_Write_VeATRR_M_MaxPedal_Tact_Value(rtb_VeATRR_r_Tact2Wheel);
    }

    /* End of Switch: '<S204>/Switch2' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeWTAR_k_PRNDL_Coeff_Phy' */
    (void)Rte_Read_VeWTAR_k_PRNDL_Coeff_Phy_Value(&tmpRead_0);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/ATRR_MedTEB'
     */
    /* Outport: '<Root>/VeATRR_M_ToReqImmedOITR_Phy' incorporates:
     *  Product: '<S9>/Multiplication3'
     */
    (void)Rte_Write_VeATRR_M_ToReqImmedOITR_Phy_Value((tmpRead_0 *
        rtb_TmpSignalConversionAtVeWTAR_r_PRNDL_) * VeATRR_M_ToReqImmedOITR);

    /* Outport: '<Root>/VeATRR_M_OutTrqReqHTDR_ASL' incorporates:
     *  Gain: '<S181>/Gain'
     */
    (void)Rte_Write_VeATRR_M_OutTrqReqHTDR_ASL_Value
        (rtb_TmpSignalConversionAtVeWTAR_M_OutTrq);

    /* Switch: '<S166>/Switch17' incorporates:
     *  Constant: '<S166>/ConstantValue4'
     *  Inport: '<Root>/VeBTQR_M_DrvrIntndedFricBrkTrq'
     *  Inport: '<Root>/VeBTQR_M_RegenBrkAxleTrqReq'
     *  RelationalOperator: '<S166>/GreaterThan1'
     *  Switch: '<S166>/Switch4'
     *  Switch: '<S166>/Switch5'
     *  Switch: '<S166>/Switch6'
     */
    if (rtb_TmpSignalConversionAtVeTINR_r_TCMTra < 0.01F)
    {
        /* Outport: '<Root>/VeATRR_M_OutReqBrakeTorq' incorporates:
         *  Constant: '<S166>/ConstantValue7'
         */
        (void)Rte_Write_VeATRR_M_OutReqBrakeTorq_Value(0.0F);

        /* Outport: '<Root>/VeATRR_M_DrvIntndTotBrkOutTorq' incorporates:
         *  Constant: '<S166>/ConstantValue2'
         */
        (void)Rte_Write_VeATRR_M_DrvIntndTotBrkOutTorq_Value(0.0F);

        /* Outport: '<Root>/VeATRR_M_DrvIntndTotBrkOutTorqILE' incorporates:
         *  Constant: '<S166>/ConstantValue5'
         */
        (void)Rte_Write_VeATRR_M_DrvIntndTotBrkOutTorqILE_Value(0.0F);

        /* Outport: '<Root>/VeATRR_M_OutCommndTotBrkFricTorq' incorporates:
         *  Constant: '<S166>/ConstantValue8'
         */
        (void)Rte_Write_VeATRR_M_OutCommndTotBrkFricTorq_Value(0.0F);
    }
    else
    {
        (void)Rte_Read_VeBTQR_M_RegenBrkAxleTrqReq_Value(&rtb_Switch3_gco);

        /* Switch: '<S166>/Switch3' incorporates:
         *  Constant: '<S197>/Calib'
         *  Inport: '<Root>/VeBTQR_M_RegenBrkAxleTrqReq'
         */
        if (KeATRR_b_OvrdRegenReq)
        {
            /* Switch: '<S166>/Switch3' incorporates:
             *  Constant: '<S194>/Calib'
             */
            rtb_Switch3_gco = KeATRR_M_RegenReq;
        }

        /* End of Switch: '<S166>/Switch3' */

        /* Outputs for Atomic SubSystem: '<S166>/ProtectedDivision2' */
        /* Switch: '<S199>/Switch1' incorporates:
         *  Constant: '<S199>/Constant Value'
         *  RelationalOperator: '<S199>/Not Equal'
         */
        if (rtb_Switch3_gco != 0.0F)
        {
            /* Switch: '<S199>/Switch1' incorporates:
             *  Product: '<S199>/Division'
             */
            rtb_TmpSignalConversionAtVeVSDR_n_NTurbO = rtb_Switch3_gco /
                rtb_TmpSignalConversionAtVeTINR_r_TCMTra;
        }
        else
        {
            /* Switch: '<S199>/Switch1' incorporates:
             *  Constant: '<S199>/Constant Value4'
             *  Switch: '<S199>/Switch2'
             *  Switch: '<S199>/Switch3'
             */
            rtb_TmpSignalConversionAtVeVSDR_n_NTurbO = 0.0F;
        }

        /* End of Switch: '<S199>/Switch1' */
        /* End of Outputs for SubSystem: '<S166>/ProtectedDivision2' */

        /* Outport: '<Root>/VeATRR_M_OutReqBrakeTorq' */
        (void)Rte_Write_VeATRR_M_OutReqBrakeTorq_Value
            (rtb_TmpSignalConversionAtVeVSDR_n_NTurbO);

        /* Switch: '<S166>/Switch1' incorporates:
         *  Constant: '<S196>/Calib'
         */
        if (KeATRR_b_OvrdBrkTotalTrq)
        {
            /* Switch: '<S166>/Switch1' incorporates:
             *  Constant: '<S193>/Calib'
             */
            rtb_TmpSignalConversionAtVeBTQR_M_DrvrIn = KeATRR_M_BrkTotalTrq;
        }

        /* End of Switch: '<S166>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S166>/ProtectedDivision1' */
        /* Switch: '<S198>/Switch1' incorporates:
         *  Constant: '<S198>/Constant Value'
         *  RelationalOperator: '<S198>/Not Equal'
         */
        if (rtb_TmpSignalConversionAtVeBTQR_M_DrvrIn != 0.0F)
        {
            /* Switch: '<S198>/Switch1' incorporates:
             *  Product: '<S198>/Division'
             */
            rtb_TmpSignalConversionAtVeVSDR_n_NTurbO =
                rtb_TmpSignalConversionAtVeBTQR_M_DrvrIn /
                rtb_TmpSignalConversionAtVeTINR_r_TCMTra;
        }
        else
        {
            /* Switch: '<S198>/Switch1' incorporates:
             *  Constant: '<S198>/Constant Value4'
             *  Switch: '<S198>/Switch2'
             *  Switch: '<S198>/Switch3'
             */
            rtb_TmpSignalConversionAtVeVSDR_n_NTurbO = 0.0F;
        }

        /* End of Switch: '<S198>/Switch1' */
        /* End of Outputs for SubSystem: '<S166>/ProtectedDivision1' */

        /* Outport: '<Root>/VeATRR_M_DrvIntndTotBrkOutTorq' */
        (void)Rte_Write_VeATRR_M_DrvIntndTotBrkOutTorq_Value
            (rtb_TmpSignalConversionAtVeVSDR_n_NTurbO);

        /* Outputs for Atomic SubSystem: '<S166>/ProtectedDivision3' */
        /* Switch: '<S200>/Switch1' incorporates:
         *  Constant: '<S200>/Constant Value'
         *  RelationalOperator: '<S200>/Not Equal'
         */
        if (rtb_TmpSignalConversionAtVeBTQR_M_DrvInt != 0.0F)
        {
            /* Switch: '<S200>/Switch1' incorporates:
             *  Product: '<S200>/Division'
             */
            rtb_TmpSignalConversionAtVeVSDR_n_NTurbO =
                rtb_TmpSignalConversionAtVeBTQR_M_DrvInt /
                rtb_TmpSignalConversionAtVeTINR_r_TCMTra;
        }
        else
        {
            /* Switch: '<S200>/Switch1' incorporates:
             *  Constant: '<S200>/Constant Value4'
             *  Switch: '<S200>/Switch2'
             *  Switch: '<S200>/Switch3'
             */
            rtb_TmpSignalConversionAtVeVSDR_n_NTurbO = 0.0F;
        }

        /* End of Switch: '<S200>/Switch1' */
        /* End of Outputs for SubSystem: '<S166>/ProtectedDivision3' */

        /* Outport: '<Root>/VeATRR_M_DrvIntndTotBrkOutTorqILE' */
        (void)Rte_Write_VeATRR_M_DrvIntndTotBrkOutTorqILE_Value
            (rtb_TmpSignalConversionAtVeVSDR_n_NTurbO);
        (void)Rte_Read_VeBTQR_M_DrvrIntndedFricBrkTrq_Value(&rtb_Switch2_g0);

        /* Switch: '<S166>/Switch2' incorporates:
         *  Constant: '<S195>/Calib'
         *  Inport: '<Root>/VeBTQR_M_DrvrIntndedFricBrkTrq'
         */
        if (KeATRR_b_OvrdBrkFrcTrq)
        {
            /* Switch: '<S166>/Switch2' incorporates:
             *  Constant: '<S192>/Calib'
             */
            rtb_Switch2_g0 = KeATRR_M_BrkFrcTrq;
        }

        /* End of Switch: '<S166>/Switch2' */

        /* Outputs for Atomic SubSystem: '<S166>/ProtectedDivision4' */
        /* Switch: '<S201>/Switch1' incorporates:
         *  Constant: '<S201>/Constant Value'
         *  RelationalOperator: '<S201>/Not Equal'
         */
        if (rtb_Switch2_g0 != 0.0F)
        {
            /* Switch: '<S201>/Switch1' incorporates:
             *  Product: '<S201>/Division'
             */
            rtb_TmpSignalConversionAtVeTINR_r_TCMTra = rtb_Switch2_g0 /
                rtb_TmpSignalConversionAtVeTINR_r_TCMTra;
        }
        else
        {
            /* Switch: '<S201>/Switch1' incorporates:
             *  Constant: '<S201>/Constant Value4'
             *  Switch: '<S201>/Switch2'
             *  Switch: '<S201>/Switch3'
             */
            rtb_TmpSignalConversionAtVeTINR_r_TCMTra = 0.0F;
        }

        /* End of Switch: '<S201>/Switch1' */
        /* End of Outputs for SubSystem: '<S166>/ProtectedDivision4' */

        /* Outport: '<Root>/VeATRR_M_OutCommndTotBrkFricTorq' */
        (void)Rte_Write_VeATRR_M_OutCommndTotBrkFricTorq_Value
            (rtb_TmpSignalConversionAtVeTINR_r_TCMTra);
    }

    /* End of Switch: '<S166>/Switch17' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeWTAR_M_ToArb_ESC' */
    (void)Rte_Read_VeWTAR_M_ToArb_ESC_Value(&tmpRead_2);

    /* Inport: '<Root>/VeWTAR_b_ASL_Active' */
    (void)Rte_Read_VeWTAR_b_ASL_Active_Value(&tmpRead_1);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/ATRR_MedTEB'
     */
    /* Outport: '<Root>/VeATRR_b_ASL_Active' incorporates:
     *  Logic: '<S165>/AND'
     */
    (void)Rte_Write_VeATRR_b_ASL_Active_Value(tmpRead_1);

    /* Outport: '<Root>/VeATRR_M_ToArb_ESC' incorporates:
     *  Gain: '<S182>/Gain'
     */
    (void)Rte_Write_VeATRR_M_ToArb_ESC_Value(tmpRead_2);

    /* Update for UnitDelay: '<S57>/UnitDelay2' */
    ATRR_ac_DW.UnitDelay2_DSTATE = rtb_TmpSignalConversionAtVeWTAR_r_PRNDL_;

    /* Update for UnitDelay: '<S57>/UnitDelay3' */
    ATRR_ac_DW.UnitDelay3_DSTATE = rtb_TmpSignalConversionAtVeWTAR_r_PRNDL_;

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Output function */
FUNC(void, ATRR_CODE) ATRR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/ATRR_PwrOn'
     */
    /* Outport: '<Root>/VeATRR_M_To_Tact_xMaxTrqDsrd' incorporates:
     *  Constant: '<S2>/Const1'
     *  SignalConversion generated from: '<S2>/VeATRR_M_To_Tact_xMaxTrqDsrd_Out_Init'
     */
    (void)Rte_Write_VeATRR_M_To_Tact_xMaxTrqDsrd_Value(0.0F);

    /* Outport: '<Root>/VeATRR_t_EngCombstnDelay' incorporates:
     *  Constant: '<S2>/Const2'
     *  SignalConversion generated from: '<S2>/VeATRR_t_EngCombstnDelay_Out_Init'
     */
    (void)Rte_Write_VeATRR_t_EngCombstnDelay_Value(0.0F);

    /* Outport: '<Root>/VeATRR_b_TrqRtLmtEnbld_SEM' incorporates:
     *  Constant: '<S2>/Const3'
     *  SignalConversion generated from: '<S2>/VeATRR_b_TrqRtLmtEnbld_SEM_Out_Init'
     */
    (void)Rte_Write_VeATRR_b_TrqRtLmtEnbld_SEM_Value(false);

    /* Outport: '<Root>/VeATRR_M_ToArb_xSEM' incorporates:
     *  Constant: '<S2>/Const4'
     *  SignalConversion generated from: '<S2>/VeATRR_M_ToArb_xSEM_Out_Init'
     */
    (void)Rte_Write_VeATRR_M_ToArb_xSEM_Value(0.0F);

    /* Outport: '<Root>/VeATRR_M_To_xSEMxUndSht' incorporates:
     *  Constant: '<S2>/Const5'
     *  SignalConversion generated from: '<S2>/VeATRR_M_To_xSEMxUndSht_Out_Init'
     */
    (void)Rte_Write_VeATRR_M_To_xSEMxUndSht_Value(0.0F);

    /* Outport: '<Root>/VeATRR_M_ToReqPrdctdShaped_Tact' incorporates:
     *  Constant: '<S2>/Const6'
     *  SignalConversion generated from: '<S2>/VeATRR_M_ToReqPrdctdShaped_Tact_Out_Init'
     */
    (void)Rte_Write_VeATRR_M_ToReqPrdctdShaped_Tact_Value(0.0F);

    /* Outport: '<Root>/VeATRR_M_ToRawExp_Tact' incorporates:
     *  Constant: '<S2>/Const7'
     *  SignalConversion generated from: '<S2>/VeATRR_M_ToRawExp_Tact_Out_Init'
     */
    (void)Rte_Write_VeATRR_M_ToRawExp_Tact_Value(0.0F);

    /* Outport: '<Root>/VeATRR_M_ToReqPrdctd_Tact' incorporates:
     *  Constant: '<S2>/Const8'
     *  SignalConversion generated from: '<S2>/VeATRR_M_ToReqPrdctd_Tact_Out_Init'
     */
    (void)Rte_Write_VeATRR_M_ToReqPrdctd_Tact_Value(0.0F);

    /* Outport: '<Root>/VeATRR_M_ToReqPrdctd_Stgc' incorporates:
     *  Constant: '<S2>/Const9'
     *  SignalConversion generated from: '<S2>/VeATRR_M_ToReqPrdctd_Stgc_Out_Init'
     */
    (void)Rte_Write_VeATRR_M_ToReqPrdctd_Stgc_Value(0.0F);

    /* Outport: '<Root>/VeATRR_M_OutCommndTotBrkFricTorq' incorporates:
     *  Constant: '<S2>/Const10'
     *  SignalConversion generated from: '<S2>/VeATRR_M_OutCommndTotBrkFricTorq_Out_Init'
     */
    (void)Rte_Write_VeATRR_M_OutCommndTotBrkFricTorq_Value(0.0F);

    /* Outport: '<Root>/VeATRR_M_OutReqBrakeTorq' incorporates:
     *  Constant: '<S2>/Const11'
     *  SignalConversion generated from: '<S2>/VeATRR_M_OutReqBrakeTorq_Out_Init'
     */
    (void)Rte_Write_VeATRR_M_OutReqBrakeTorq_Value(0.0F);

    /* Outport: '<Root>/VeATRR_M_DrvIntndTotBrkOutTorqILE' incorporates:
     *  Constant: '<S2>/Const12'
     *  SignalConversion generated from: '<S2>/VeATRR_M_DrvIntndTotBrkOutTorqILE_Out_Init'
     */
    (void)Rte_Write_VeATRR_M_DrvIntndTotBrkOutTorqILE_Value(0.0F);

    /* Outport: '<Root>/VeATRR_M_MinPedal_Tact' incorporates:
     *  Constant: '<S2>/Const13'
     *  SignalConversion generated from: '<S2>/VeATRR_M_MinPedal_Tact_Out_Init'
     */
    (void)Rte_Write_VeATRR_M_MinPedal_Tact_Value(0.0F);

    /* Outport: '<Root>/VeATRR_M_MaxPedal_Tact' incorporates:
     *  Constant: '<S2>/Const14'
     *  SignalConversion generated from: '<S2>/VeATRR_M_MaxPedal_Tact_Out_Init'
     */
    (void)Rte_Write_VeATRR_M_MaxPedal_Tact_Value(0.0F);

    /* Outport: '<Root>/VeATRR_M_MinPedal_Tact_xUndrSht' incorporates:
     *  Constant: '<S2>/Const15'
     *  SignalConversion generated from: '<S2>/VeATRR_M_MinPedal_Tact_xUndrSht_Out_Init'
     */
    (void)Rte_Write_VeATRR_M_MinPedal_Tact_xUndrSht_Value(0.0F);

    /* Outport: '<Root>/VeATRR_M_ToReqImmedOITR_Phy' incorporates:
     *  Constant: '<S2>/Const16'
     *  SignalConversion generated from: '<S2>/VeATRR_M_ToReqImmedOITR_Phy_Out_Init'
     */
    (void)Rte_Write_VeATRR_M_ToReqImmedOITR_Phy_Value(0.0F);

    /* Outport: '<Root>/VeATRR_b_ASL_Active' incorporates:
     *  Constant: '<S2>/Const17'
     *  SignalConversion generated from: '<S2>/VeATRR_b_ASL_Active_Out_Init'
     */
    (void)Rte_Write_VeATRR_b_ASL_Active_Value(false);

    /* Outport: '<Root>/VeATRR_M_ToArb_ESC' incorporates:
     *  Constant: '<S2>/Const18'
     *  SignalConversion generated from: '<S2>/VeATRR_M_ToArb_ESC_Out_Init'
     */
    (void)Rte_Write_VeATRR_M_ToArb_ESC_Value(0.0F);

    /* Outport: '<Root>/VeATRR_M_OutTrqReqHTDR_ASL' incorporates:
     *  Constant: '<S2>/Const19'
     *  SignalConversion generated from: '<S2>/VeATRR_M_OutTrqReqHTDR_ASL_Out_Init'
     */
    (void)Rte_Write_VeATRR_M_OutTrqReqHTDR_ASL_Value(0.0F);

    /* Outport: '<Root>/VeATRR_b_SEM_Act' incorporates:
     *  Constant: '<S2>/Const20'
     *  SignalConversion generated from: '<S2>/VeATRR_b_SEM_Act_Out_Init'
     */
    (void)Rte_Write_VeATRR_b_SEM_Act_Value(false);

    /* Outport: '<Root>/VeATRR_r_Strat2Wheel' incorporates:
     *  Constant: '<S2>/Const21'
     *  SignalConversion generated from: '<S2>/VeATRR_r_Strat2Wheel_Out_Init'
     */
    (void)Rte_Write_VeATRR_r_Strat2Wheel_Value(0.0F);

    /* Outport: '<Root>/VeATRR_r_Tact2Wheel' incorporates:
     *  Constant: '<S2>/Const22'
     *  SignalConversion generated from: '<S2>/VeATRR_r_Tact2Wheel_Out_Init'
     */
    (void)Rte_Write_VeATRR_r_Tact2Wheel_Value(0.0F);

    /* Outport: '<Root>/VeATRR_r_Brk2Wheel' incorporates:
     *  Constant: '<S2>/Const23'
     *  SignalConversion generated from: '<S2>/VeATRR_r_Brk2Wheel_Out_Init'
     */
    (void)Rte_Write_VeATRR_r_Brk2Wheel_Value(0.0F);

    /* Outport: '<Root>/VeATRR_b_RaceStrtActv' incorporates:
     *  Constant: '<S2>/Const24'
     *  SignalConversion generated from: '<S2>/VeATRR_b_RaceStrtActv_Out_Init'
     */
    (void)Rte_Write_VeATRR_b_RaceStrtActv_Value(false);

    /* Outport: '<Root>/VeATRR_b_RaceStrtPrepPhsActv' incorporates:
     *  Constant: '<S2>/Const25'
     *  SignalConversion generated from: '<S2>/VeATRR_b_RaceStrtPrepPhsActv_Out_Init'
     */
    (void)Rte_Write_VeATRR_b_RaceStrtPrepPhsActv_Value(false);

    /* Outport: '<Root>/VeATRR_M_MaxTransTo' incorporates:
     *  Constant: '<S2>/ConstantValue16'
     *  SignalConversion generated from: '<S2>/VeATRR_M_MaxTransTo_Out_Init'
     */
    (void)Rte_Write_VeATRR_M_MaxTransTo_Value(99999.0F);

    /* Outport: '<Root>/VeATRR_M_MinTransTo' incorporates:
     *  Constant: '<S2>/ConstantValue17'
     *  SignalConversion generated from: '<S2>/VeATRR_M_MinTransTo_Out_Init'
     */
    (void)Rte_Write_VeATRR_M_MinTransTo_Value(-99999.0F);

    /* Outport: '<Root>/VeATRR_e_TrqArb' incorporates:
     *  Constant: '<S447>/Constant'
     *  SignalConversion generated from: '<S2>/ArbTyp_out'
     */
    (void)Rte_Write_VeATRR_e_TrqArb_Value(CeWTAR_e_ECM_TorqReqst);

    /* Outport: '<Root>/VeATRR_M_OutTorqReqPrdctd_TactOITR' incorporates:
     *  Constant: '<S2>/ConstantValue1'
     *  SignalConversion generated from: '<S2>/OITRTrqPredTact'
     */
    (void)Rte_Write_VeATRR_M_OutTorqReqPrdctd_TactOITR_Value(0.0F);

    /* Outport: '<Root>/VeATRR_M_OutputTorqReqImmedHTDR' incorporates:
     *  Constant: '<S2>/ConstantValue2'
     *  SignalConversion generated from: '<S2>/OutTrqReqHTDR'
     */
    (void)Rte_Write_VeATRR_M_OutputTorqReqImmedHTDR_Value(0.0F);

    /* Outport: '<Root>/VeATRR_M_OutputTorqReqImmed' incorporates:
     *  Constant: '<S2>/ConstantValue3'
     *  SignalConversion generated from: '<S2>/ToReqImmd_out'
     */
    (void)Rte_Write_VeATRR_M_OutputTorqReqImmed_Value(0.0F);

    /* Outport: '<Root>/VeATRR_M_OutputTorqReqImmedOITR' incorporates:
     *  Constant: '<S2>/ConstantValue4'
     *  SignalConversion generated from: '<S2>/ToReqOITR_out'
     */
    (void)Rte_Write_VeATRR_M_OutputTorqReqImmedOITR_Value(0.0F);

    /* Outport: '<Root>/VeATRR_M_OutTrqReqImmWithoutSEM' incorporates:
     *  Constant: '<S2>/ConstantValue5'
     *  SignalConversion generated from: '<S2>/To_xSEM'
     */
    (void)Rte_Write_VeATRR_M_OutTrqReqImmWithoutSEM_Value(0.0F);

    /* Outport: '<Root>/VeATRR_M_OutputTorqReqPot' incorporates:
     *  Constant: '<S2>/ConstantValue8'
     *  SignalConversion generated from: '<S2>/ToPot'
     */
    (void)Rte_Write_VeATRR_M_OutputTorqReqPot_Value(0.0F);

    /* Outport: '<Root>/VeATRR_M_OutTorqReqImmed_TactOITR' incorporates:
     *  Constant: '<S2>/ConstantValue10'
     *  SignalConversion generated from: '<S2>/OITRTrqReqTact'
     */
    (void)Rte_Write_VeATRR_M_OutTorqReqImmed_TactOITR_Value(0.0F);

    /* Outport: '<Root>/VeATRR_M_DrvIntndTotBrkOutTorq' incorporates:
     *  Constant: '<S2>/ConstantValue7'
     *  SignalConversion generated from: '<S2>/Brk_FW'
     */
    (void)Rte_Write_VeATRR_M_DrvIntndTotBrkOutTorq_Value(0.0F);

    /* Outport: '<Root>/VeATRR_M_MinPedal_Stgc' incorporates:
     *  Constant: '<S2>/ConstantValue6'
     *  SignalConversion generated from: '<S2>/Min_Stgc'
     */
    (void)Rte_Write_VeATRR_M_MinPedal_Stgc_Value(0.0F);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, ATRR_CODE) ATRR_ac_Init(void)
{
    /* SystemInitialize for Outport: '<Root>/VeATRR_e_TrqArb' incorporates:
     *  Merge: '<Root>/Merge_1'
     */
    (void)Rte_Write_VeATRR_e_TrqArb_Value(CeWTAR_e_ECM_TorqReqst);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
