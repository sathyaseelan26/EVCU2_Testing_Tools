/*
 * File: TPDR_ac.c
 *
 * Code generated for Simulink model 'TPDR_ac'.
 *
 * Model version                  : 9.18
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 19:48:05 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TPDR_ac.h"
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
#define START_SEC_CALIB_UNSPECIFIED_TPDR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(float32, TPDR_VAR_INIT) HaTPDR_K_DistMatrix[28] =
{
    0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 1.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S104>/Calib' */

static volatile CONST(float32, TPDR_VAR_INIT) KeTPDR_P_BattHeatTgtMet_Htroff =
    200.0F;                            /* Referenced by: '<S102>/Calib' */
static volatile CONST(float32, TPDR_VAR_INIT) KeTPDR_P_BattHeatTgtMet_Htron =
    450.0F;                            /* Referenced by: '<S103>/Calib' */
static volatile CONST(float32, TPDR_VAR_INIT) KeTPDR_P_BattOnlyHeatPwr_MaxLim =
    7000.0F;                           /* Referenced by:
                                        * '<S23>/Calib'
                                        * '<S43>/Calib'
                                        */
static volatile CONST(float32, TPDR_VAR_INIT) KeTPDR_P_BattOnlyHeatPwr_MinLim =
    0.0F;                              /* Referenced by: '<S24>/Calib' */
static volatile CONST(float32, TPDR_VAR_INIT)
    KeTPDR_P_BattOnlyHeatPwr_MinLim_HtrOff = 600.0F;/* Referenced by:
                                                     * '<S55>/Calib'
                                                     * '<S89>/Calib'
                                                     */
static volatile CONST(float32, TPDR_VAR_INIT)
    KeTPDR_P_BattOnlyHeatPwr_MinLim_HtrOn = 670.0F;/* Referenced by:
                                                    * '<S56>/Calib'
                                                    * '<S90>/Calib'
                                                    */
static volatile CONST(float32, TPDR_VAR_INIT) KeTPDR_P_DstbtdCoolPwr_MaxLim =
    7500.0F;                           /* Referenced by:
                                        * '<S25>/Calib'
                                        * '<S44>/Calib'
                                        */
static volatile CONST(float32, TPDR_VAR_INIT) KeTPDR_P_DstbtdCoolPwr_MinLim =
    0.0F;                              /* Referenced by: '<S26>/Calib' */
static volatile CONST(float32, TPDR_VAR_INIT) KeTPDR_P_HTCLHeatTgtMet_Htroff =
    200.0F;                            /* Referenced by: '<S94>/Calib' */
static volatile CONST(float32, TPDR_VAR_INIT) KeTPDR_P_HTCLHeatTgtMet_Htron =
    750.0F;                            /* Referenced by: '<S95>/Calib' */
static volatile CONST(float32, TPDR_VAR_INIT) KeTPDR_P_MaxBattActvHeatPwr =
    10000.0F;                          /* Referenced by: '<S40>/Calib' */
static volatile CONST(float32, TPDR_VAR_INIT) KeTPDR_P_MaxCabActvHeatPwr =
    10000.0F;                          /* Referenced by: '<S37>/Calib' */
static volatile CONST(float32, TPDR_VAR_INIT) KeTPDR_P_MinBattActvHeatPwr = 0.0F;/* Referenced by: '<S41>/Calib' */
static volatile CONST(float32, TPDR_VAR_INIT) KeTPDR_P_MinCabActvHeatPwr = 0.0F;/* Referenced by: '<S38>/Calib' */
static volatile CONST(float32, TPDR_VAR_INIT) KeTPDR_P_Rat_EAC_PwrBdgt_Avail_D =
    0.0F;                              /* Referenced by: '<S7>/Calib' */
static volatile CONST(float32, TPDR_VAR_INIT) KeTPDR_P_RearHtrPwr_MaxLim =
    7000.0F;                           /* Referenced by:
                                        * '<S27>/Calib'
                                        * '<S45>/Calib'
                                        */
static volatile CONST(float32, TPDR_VAR_INIT) KeTPDR_P_RearHtrPwr_MinLim = 0.0F;/* Referenced by: '<S28>/Calib' */
static volatile CONST(float32, TPDR_VAR_INIT) KeTPDR_P_RearHtr_PwrBdgt_Avail_D =
    500.0F;                            /* Referenced by: '<S9>/Calib' */
static volatile CONST(float32, TPDR_VAR_INIT)
    KeTPDR_P_Shrd_orCabOnlyHeatPwr_MaxLim = 7000.0F;/* Referenced by:
                                                     * '<S29>/Calib'
                                                     * '<S46>/Calib'
                                                     */
static volatile CONST(float32, TPDR_VAR_INIT)
    KeTPDR_P_Shrd_orCabOnlyHeatPwr_MinLim = 0.0F;/* Referenced by: '<S30>/Calib' */
static volatile CONST(float32, TPDR_VAR_INIT) KeTPDR_P_SupportBothCabHtrs_MaxHys
    = 7000.0F;                         /* Referenced by: '<S57>/Calib' */
static volatile CONST(float32, TPDR_VAR_INIT) KeTPDR_P_SupportBothCabHtrs_MinHys
    = 0.0F;                            /* Referenced by: '<S58>/Calib' */
static volatile CONST(float32, TPDR_VAR_INIT) KeTPDR_P_SupportBothHtrs_MaxHys =
    1200.0F;                           /* Referenced by: '<S97>/Calib' */
static volatile CONST(float32, TPDR_VAR_INIT) KeTPDR_P_SupportBothHtrs_MinHys =
    1000.0F;                           /* Referenced by: '<S98>/Calib' */
static volatile CONST(boolean, TPDR_VAR_INIT) KeTPDR_b_BattCoolReqOvrrd = 0;/* Referenced by: '<S134>/Calib' */
static volatile CONST(boolean, TPDR_VAR_INIT)
    KeTPDR_b_Enable_Realctn_of_Act_Excess = 1;/* Referenced by: '<S19>/Calib' */
static volatile CONST(boolean, TPDR_VAR_INIT)
    KeTPDR_b_EnblHtrMngnmnt_PerWup_DualHtrs = 1;/* Referenced by: '<S59>/Calib' */
static volatile CONST(boolean, TPDR_VAR_INIT) KeTPDR_b_OvrrdCabNotAllow4Pwr = 0;/* Referenced by: '<S135>/Calib' */
static volatile CONST(boolean, TPDR_VAR_INIT)
    KeTPDR_b_PerWupHtrToggle_MappingBattHtr = 1;/* Referenced by: '<S66>/Calib' */
static volatile CONST(boolean, TPDR_VAR_INIT) KeTPDR_b_Rat_EAC_PwrBdgt_Avail_SD =
    0;                                 /* Referenced by: '<S8>/Calib' */
static volatile CONST(boolean, TPDR_VAR_INIT) KeTPDR_b_RearHtr_PwrBdgt_Avail_SD =
    0;                                 /* Referenced by: '<S10>/Calib' */
static volatile CONST(boolean, TPDR_VAR_INIT)
    KeTPDR_b_SetCabHeatAllw_4BattHeatAllw = 1;/* Referenced by: '<S136>/Calib' */
static volatile CONST(boolean, TPDR_VAR_INIT) KeTPDR_b_Use_CellTempMax_BattTemp =
    0;                                 /* Referenced by: '<S114>/Calib' */
static volatile CONST(float32, TPDR_VAR_INIT) KeTPDR_r_CabinHeatRatioMax = 1.0F;/* Referenced by: '<S115>/Calib' */
static volatile CONST(float32, TPDR_VAR_INIT) KeTPDR_r_CabinHeatRatioMin = 0.0F;/* Referenced by: '<S116>/Calib' */
static volatile CONST(float32, TPDR_VAR_INIT) KeTPDR_r_HeatPumpRatioMax = 1.0F;/* Referenced by: '<S117>/Calib' */
static volatile CONST(float32, TPDR_VAR_INIT) KeTPDR_r_HeatPumpRatioMin = 0.0F;/* Referenced by: '<S118>/Calib' */
static volatile CONST(float32, TPDR_VAR_INIT) KeTPDR_t_Htr1EnableTmr_PerWup =
    36000.0F;                          /* Referenced by: '<S67>/Calib' */
static volatile CONST(float32, TPDR_VAR_INIT) KeTPDR_t_Htr2EnableTmr_PerWup =
    9000.0F;                           /* Referenced by: '<S68>/Calib' */
static volatile CONST(float32, TPDR_VAR_INIT) KtTPDR_r_BattHeatUsageRatio[20] =
{
    0.0F, 0.05F, 0.1F, 0.2F, 0.0F, 0.05F, 0.1F, 0.2F, 0.0F, 0.05F, 0.1F, 0.2F,
    0.0F, 0.05F, 0.1F, 0.2F, 0.0F, 0.05F, 0.1F, 0.2F
} ;                                    /* Referenced by: '<S125>/Vector' */

static volatile CONST(float32, TPDR_VAR_INIT) KtTPDR_r_EDUHeatUsageRatio[20] =
{
    0.0F, 0.05F, 0.1F, 0.3F, 0.0F, 0.05F, 0.1F, 0.3F, 0.0F, 0.05F, 0.1F, 0.3F,
    0.0F, 0.05F, 0.1F, 0.3F, 0.0F, 0.05F, 0.1F, 0.3F
} ;                                    /* Referenced by: '<S126>/Vector' */

static volatile CONST(float32, TPDR_VAR_INIT) KtTPDR_r_HeatPumpRatio[25] =
{
    0.1F, 0.3F, 0.3F, 0.5F, 0.8F, 0.1F, 0.3F, 0.3F, 0.5F, 0.8F, 0.1F, 0.3F, 0.3F,
    0.5F, 0.8F, 0.1F, 0.3F, 0.3F, 0.5F, 0.8F, 0.1F, 0.3F, 0.3F, 0.5F, 0.8F
} ;                                    /* Referenced by: '<S127>/Vector' */

static volatile CONST(float32, TPDR_VAR_INIT) KxTPDR_r_BattHeatUsageRatio[4] =
{
    0.0F, 5.0F, 10.0F, 40.0F
} ;                                    /* Referenced by: '<S125>/Vector' */

static volatile CONST(float32, TPDR_VAR_INIT) KxTPDR_r_EDUHeatUsageRatio[4] =
{
    0.0F, 10.0F, 20.0F, 50.0F
} ;                                    /* Referenced by: '<S126>/Vector' */

static volatile CONST(float32, TPDR_VAR_INIT) KxTPDR_r_HeatPumpRatio[5] =
{
    -15.0F, -10.0F, 0.0F, 10.0F, 20.0F
} ;                                    /* Referenced by: '<S127>/Vector' */

static volatile CONST(float32, TPDR_VAR_INIT) KyTPDR_r_BattHeatUsageRatio[5] =
{
    0.0F, 10.0F, 20.0F, 30.0F, 40.0F
} ;                                    /* Referenced by: '<S125>/Vector' */

static volatile CONST(float32, TPDR_VAR_INIT) KyTPDR_r_EDUHeatUsageRatio[5] =
{
    0.0F, 10.0F, 20.0F, 30.0F, 40.0F
} ;                                    /* Referenced by: '<S126>/Vector' */

static volatile CONST(float32, TPDR_VAR_INIT) KyTPDR_r_HeatPumpRatio[5] =
{
    0.0F, 10.0F, 20.0F, 30.0F, 40.0F
} ;                                    /* Referenced by: '<S127>/Vector' */

#define STOP_SEC_CALIB_UNSPECIFIED_TPDR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TPDR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(float32, TPDR_VAR_INIT) VaTPDR_P_ActrPwrBdgt_Fnl[4];/* '<S11>/Switch1' */
static VAR(float32, TPDR_VAR_INIT) VaTPDR_P_ActrPwrBdgt_Int[4];/* '<S11>/Product1' */
static VAR(float32, TPDR_VAR_INIT) VaTPDR_P_ActrPwrBdgt_Optimized[4];/* '<S48>/Gain' */
static VAR(float32, TPDR_VAR_INIT) VaTPDR_P_PowerRequests[7];/* '<S22>/Gain' */
static VAR(float32, TPDR_VAR_INIT) VaTPDR_P_PwrRqst_Adjusted[7];/* '<S17>/Array_Assignment1' */
static VAR(float32, TPDR_VAR_INIT) VaTPDR_i_Mode_With_Priority[7];/* '<S124>/Gain' */
static VAR(boolean, TPDR_VAR_INIT) VaTPDR_i_Mode_Without_Priority[7];/* '<S123>/Gain' */
static VAR(boolean, TPDR_VAR_INIT) VeTPDR_P_BattHtrTgtMet;/* '<S63>/Logical Operator3' */
static VAR(float32, TPDR_VAR_INIT) VeTPDR_P_BattSprtHtrPwrRatLim_B4Hys;/* '<S53>/Switch1' */
static VAR(float32, TPDR_VAR_INIT) VeTPDR_P_BattSprtHtrPwrRatLim_PerWupLowPwr;/* '<S60>/Merge2' */
static VAR(boolean, TPDR_VAR_INIT) VeTPDR_P_CabOrShrdHtrTgtMet;/* '<S61>/Logical Operator2' */
static VAR(float32, TPDR_VAR_INIT) VeTPDR_P_CompressorPowerBudget;/* '<S33>/Switch' */
static VAR(boolean, TPDR_VAR_INIT) VeTPDR_P_LowBudget_BattHtrDisabled;/* '<S73>/Logical Operator10' */
static VAR(boolean, TPDR_VAR_INIT) VeTPDR_P_PerWupHtrMngmnt_EnblHtr1;/* '<S64>/Logical Operator10' */
static VAR(boolean, TPDR_VAR_INIT) VeTPDR_P_PerWupHtrMngmnt_EnblHtr1Tmr;/* '<S86>/Switch1' */
static VAR(boolean, TPDR_VAR_INIT) VeTPDR_P_PerWupHtrMngmnt_EnblHtr2;/* '<S65>/Logical Operator11' */
static VAR(boolean, TPDR_VAR_INIT) VeTPDR_P_PerWupHtrMngmnt_EnblHtr2Tmr;/* '<S87>/Switch1' */
static VAR(boolean, TPDR_VAR_INIT) VeTPDR_P_PerWup_LowBudget_EnbldHtrMngmnt;/* '<S21>/Logical Operator10' */
static VAR(float32, TPDR_VAR_INIT) VeTPDR_P_PriortzdNetHtrPwrBudget;/* '<S21>/Add1' */
static VAR(float32, TPDR_VAR_INIT) VeTPDR_P_PriortzdRearHtrPwrBudget;/* '<S34>/Switch' */
static VAR(float32, TPDR_VAR_INIT) VeTPDR_P_PriortzdShrdCabHtrPwrBudget_B4Hys;/* '<S32>/Switch' */
static VAR(float32, TPDR_VAR_INIT) VeTPDR_P_PriortzdSprtBattHtrPwrBudget_B4Hys;/* '<S31>/Switch' */
static VAR(float32, TPDR_VAR_INIT) VeTPDR_P_RearHtrPowerBudget;/* '<S21>/Switch1' */
static VAR(float32, TPDR_VAR_INIT) VeTPDR_P_SharedHtrPwrRatLim_B4Hys;/* '<S54>/Switch1' */
static VAR(float32, TPDR_VAR_INIT) VeTPDR_P_SharedHtrPwrRatLim_PerWupLowPwr;/* '<S60>/Merge3' */
static VAR(boolean, TPDR_VAR_INIT) VeTPDR_P_UnabletoSupportBothHtrs;/* '<S62>/Logical Operator10' */
static VAR(sint16, TPDR_VAR_INIT) VeTPDR_P_debugHtrMngnmnt_Tmrbased;/* '<S60>/Merge' */
static VAR(boolean, TPDR_VAR_INIT) VeTPDR_b_Battery_Cool_Allowed;/* '<S128>/Logical_Operator3' */
static VAR(boolean, TPDR_VAR_INIT) VeTPDR_b_Battery_Heat_Allowed;/* '<S128>/Logical_Operator4' */
static VAR(boolean, TPDR_VAR_INIT) VeTPDR_b_CabinCondAllowed;/* '<S129>/Logical Operator' */
static VAR(boolean, TPDR_VAR_INIT) VeTPDR_b_Cabin_Cool_Allowed;/* '<S138>/Gain' */
static VAR(boolean, TPDR_VAR_INIT) VeTPDR_b_Cabin_Heat_Allowed;/* '<S137>/Gain' */
static VAR(boolean, TPDR_VAR_INIT) VeTPDR_b_FrontCabHtrSupportOnly;/* '<S21>/Logical Operator1' */
static VAR(boolean, TPDR_VAR_INIT) VeTPDR_b_HeatPmp_or_Deice_Actv;/* '<S13>/Logical Operator4' */
static VAR(boolean, TPDR_VAR_INIT) VeTPDR_b_HeatPump_Cabin_Allowed;/* '<S139>/Gain' */
static VAR(boolean, TPDR_VAR_INIT) VeTPDR_b_RearHeater_Cabin_Allowed;/* '<S140>/Gain' */
static VAR(float32, TPDR_VAR_INIT) VeTPDR_r_FrontCabHtrRatio;/* '<S120>/Switch' */
static VAR(float32, TPDR_VAR_INIT) VeTPDR_r_HeatPumpPriorityRatio;/* '<S119>/Switch' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TPDR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_TPDR
#include "MemMap.h"

CONST(ConstB_TPDR_ac_T, TPDR_VAR_INIT) TPDR_ac_ConstB =
{
    0.0F,                              /* '<S141>/Const1' */
    0.0F,                              /* '<S141>/Const2' */
    0.0F,                              /* '<S141>/Const3' */
    0.0F,                              /* '<S141>/Const4' */

    {
        0, 0, 0, 0, 0, 0, 0
    }                                  /* '<S12>/MATLAB_Function' */
};

#define STOP_SEC_CONST_UNSPECIFIED_TPDR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_TPDR
#include "MemMap.h"

CONST(ConstP_TPDR_ac_T, TPDR_VAR_INIT) TPDR_ac_ConstP =
{
    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S125>/Vector'
     *   '<S126>/Vector'
     */
    {
        3U, 4U
    },

    /* Computed Parameter: Vector_maxIndex
     * Referenced by: '<S127>/Vector'
     */
    {
        4U, 4U
    }
};

#define STOP_SEC_CONST_UNSPECIFIED_TPDR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TPDR
#include "MemMap.h"

VAR(B_TPDR_ac_T, TPDR_VAR_INIT) TPDR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TPDR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TPDR
#include "MemMap.h"

VAR(DW_TPDR_ac_T, TPDR_VAR_INIT) TPDR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TPDR
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, TPDR_CODE) TPDR_MedTEH(void) /* Explicit Task: MedTEH */
{
    /* local block i/o variables */
    boolean rtb_TerminatorDecouplingSignalConv131;
    sint32 i;
    sint32 rtb_Add_tmp;
    float32 rtb_VeTPDR_Dist_Matrix[28];
    float32 tmp[7];
    float32 P_A_modif[4];
    float32 varargin_2[4];
    float32 Deficient_Act_Power;
    float32 Total_Scale_Factors;
    float32 rtb_TmpSignalConversionAtVeCTRR_P_RearHe;
    float32 rtb_TmpSignalConversionAtVeTHMR_P_CabHea;
    float32 rtb_TmpSignalConversionAtVeTHMR_T_AHPInl;
    float32 tmpRead;
    float32 tmpRead_0;
    float32 tmpRead_1;
    float32 tmpRead_3;
    float32 tmpRead_4;
    float32 tmpRead_7;
    float32 tmpRead_8;
    float32 tmpRead_b;
    float32 tmpRead_e;
    float32 tmpRead_f;
    float32 tmpRead_g;
    float32 tmpRead_h;
    float32 tmpRead_i;
    TeAVTR_e_EVA_ThermalState rtb_TmpSignalConversionAtVeAVTR_e_EVA_Th;
    TeTHMR_e_BatThrmlSt tmpRead_d;
    TeTHMR_e_CabHeatThrmlMode tmpRead_a;
    TeTHMR_e_LTCLThermalMode tmpRead_c;
    TeTPCR_e_PerWup_BattEngCond rtb_TmpSignalConversionAtVeTPCR_e_PerWup;
    boolean rtb_AND_d;
    boolean rtb_LogicalOperator11_f;
    boolean rtb_OR1_k;
    boolean rtb_TmpSignalConversionAtVeBTRR_b_BattCo;
    boolean rtb_TmpSignalConversionAtVeTHMR_b_BattAl;
    boolean rtb_TmpSignalConversionAtVeTHMR_b_PerWup;
    boolean rtb_TmpSignalConversionAtVeTHMR_b_RS_N_O;
    boolean tmpRead_2;
    boolean tmpRead_5;
    boolean tmpRead_6;
    boolean tmpRead_9;
    boolean tmpRead_j;
    boolean tmpRead_k;

    /* Inport: '<Root>/VeTHMR_b_CabAllowed' */
    (void)Rte_Read_VeTHMR_b_CabAllowed_Value(&tmpRead_6);

    /* Inport: '<Root>/VeTHMR_b_CabReq_NotAllow' */
    (void)Rte_Read_VeTHMR_b_CabReq_NotAllow_Value(&tmpRead_5);

    /* Inport: '<Root>/VeBTRR_b_BattHeatReq' */
    (void)Rte_Read_VeBTRR_b_BattHeatReq_Value(&tmpRead_2);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/TPDR_MedTEH'
     */
    /* SignalConversion generated from: '<S1>/VeTHMR_b_BattAllowed' incorporates:
     *  Inport: '<Root>/VeTHMR_b_BattAllowed'
     */
    (void)Rte_Read_VeTHMR_b_BattAllowed_Value
        (&rtb_TmpSignalConversionAtVeTHMR_b_BattAl);

    /* SignalConversion generated from: '<S1>/VeAVTR_e_EVA_ThrmlState' incorporates:
     *  Inport: '<Root>/VeAVTR_e_EVA_ThrmlState'
     */
    (void)Rte_Read_VeAVTR_e_EVA_ThrmlState_Value
        (&rtb_TmpSignalConversionAtVeAVTR_e_EVA_Th);

    /* SignalConversion generated from: '<S1>/VeTHMR_b_RS_N_Or_NrmlPerWp' incorporates:
     *  Inport: '<Root>/VeTHMR_b_RS_N_Or_NrmlPerWp'
     */
    (void)Rte_Read_VeTHMR_b_RS_N_Or_NrmlPerWp_Value
        (&rtb_TmpSignalConversionAtVeTHMR_b_RS_N_O);

    /* SignalConversion generated from: '<S1>/VeTHMR_b_PerWup_EngtoCond' incorporates:
     *  Inport: '<Root>/VeTHMR_b_PerWup_EngtoCond'
     */
    (void)Rte_Read_VeTHMR_b_PerWup_EngtoCond_Value
        (&rtb_TmpSignalConversionAtVeTHMR_b_PerWup);

    /* SignalConversion generated from: '<S1>/VeTPCR_e_PerWup_BattEngCond_State' incorporates:
     *  Inport: '<Root>/VeTPCR_e_PerWup_BattEngCond_State'
     */
    (void)Rte_Read_VeTPCR_e_PerWup_BattEngCond_State_Value
        (&rtb_TmpSignalConversionAtVeTPCR_e_PerWup);

    /* SignalConversion generated from: '<S1>/VeBTRR_b_BattCoolReq' incorporates:
     *  Inport: '<Root>/VeBTRR_b_BattCoolReq'
     */
    (void)Rte_Read_VeBTRR_b_BattCoolReq_Value
        (&rtb_TmpSignalConversionAtVeBTRR_b_BattCo);

    /* SignalConversion generated from: '<S1>/VeTHMR_P_CabHeatPwrNeed' incorporates:
     *  Inport: '<Root>/VeTHMR_P_CabHeatPwrNeed'
     */
    (void)Rte_Read_VeTHMR_P_CabHeatPwrNeed_Value
        (&rtb_TmpSignalConversionAtVeTHMR_P_CabHea);

    /* SignalConversion generated from: '<S1>/VeTHMR_T_AHPInletTempArb' incorporates:
     *  Inport: '<Root>/VeTHMR_T_AHPInletTempArb'
     */
    (void)Rte_Read_VeTHMR_T_AHPInletTempArb_Value
        (&rtb_TmpSignalConversionAtVeTHMR_T_AHPInl);

    /* SignalConversion generated from: '<S1>/VeCTRR_P_RearHeaterPwrReq' incorporates:
     *  Inport: '<Root>/VeCTRR_P_RearHeaterPwrReq'
     */
    (void)Rte_Read_VeCTRR_P_RearHeaterPwrReq_Value
        (&rtb_TmpSignalConversionAtVeCTRR_P_RearHe);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Power_Distribution'
     */
    /* Logic: '<S129>/Logical Operator' incorporates:
     *  Constant: '<S135>/Calib'
     *  Logic: '<S129>/Logical Operator1'
     *  Logic: '<S129>/Logical Operator2'
     */
    VeTPDR_b_CabinCondAllowed = (((KeTPDR_b_OvrrdCabNotAllow4Pwr) || (!tmpRead_5))
        && tmpRead_6);

    /* Gain: '<S138>/Gain' */
    VeTPDR_b_Cabin_Cool_Allowed = ((true) && (VeTPDR_b_CabinCondAllowed));

    /* Logic: '<S128>/Logical_Operator4' incorporates:
     *  Constant: '<S131>/Constant'
     *  Constant: '<S134>/Calib'
     *  Logic: '<S128>/Logical_Operator'
     *  Logic: '<S128>/Logical_Operator2'
     *  Logic: '<S128>/Logical_Operator5'
     *  RelationalOperator: '<S128>/Relational Operator'
     */
    VeTPDR_b_Battery_Heat_Allowed = (((rtb_TmpSignalConversionAtVeTHMR_b_BattAl &&
        tmpRead_2) && ((!rtb_TmpSignalConversionAtVeBTRR_b_BattCo) ||
                       (KeTPDR_b_BattCoolReqOvrrd))) ||
        (rtb_TmpSignalConversionAtVeAVTR_e_EVA_Th == CeAVTR_e_EVA_Heat));

    /* SignalConversion generated from: '<S129>/Variant Source' */
#if Rte_SysCon_Variant_TPDR_1

    /* Logic: '<S21>/Logical Operator11' incorporates:
     *  Constant: '<S129>/Constant'
     */
    rtb_LogicalOperator11_f = false;

#else

    /* Logic: '<S21>/Logical Operator11' incorporates:
     *  Constant: '<S129>/Constant1'
     *  SignalConversion generated from: '<S129>/Variant Source'
     */
    rtb_LogicalOperator11_f = true;

#endif

    /* End of SignalConversion generated from: '<S129>/Variant Source' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

    /* Inport: '<Root>/VeTHMR_b_FCHeatAllwd' */
    (void)Rte_Read_VeTHMR_b_FCHeatAllwd_Value(&tmpRead_k);

    /* Inport: '<Root>/VeCTRR_b_RearHeaterReq' */
    (void)Rte_Read_VeCTRR_b_RearHeaterReq_Value(&tmpRead_j);

    /* Inport: '<Root>/VeTHMR_e_CabHeatThermalMode' */
    (void)Rte_Read_VeTHMR_e_CabHeatThermalMode_Value(&tmpRead_a);

    /* Inport: '<Root>/VeTHMR_b_DeiceActv' */
    (void)Rte_Read_VeTHMR_b_DeiceActv_Value(&tmpRead_9);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/TPDR_MedTEH'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Power_Distribution'
     */
    /* Gain: '<S137>/Gain' incorporates:
     *  Constant: '<S136>/Calib'
     *  Logic: '<S129>/Logical Operator5'
     *  Logic: '<S129>/Logical Operator6'
     *  Logic: '<S129>/Logical Operator7'
     */
    VeTPDR_b_Cabin_Heat_Allowed = ((true) && (((VeTPDR_b_CabinCondAllowed) ||
        ((KeTPDR_b_SetCabHeatAllw_4BattHeatAllw) &&
         (VeTPDR_b_Battery_Heat_Allowed))) || (rtb_LogicalOperator11_f &&
        tmpRead_k)));

    /* Logic: '<S128>/Logical_Operator3' incorporates:
     *  Constant: '<S132>/Constant'
     *  Constant: '<S133>/Constant'
     *  Logic: '<S128>/Logical Operator7'
     *  Logic: '<S128>/Logical_Operator1'
     *  RelationalOperator: '<S128>/Comparison4'
     *  RelationalOperator: '<S128>/Comparison5'
     */
    VeTPDR_b_Battery_Cool_Allowed = (((CeAVTR_e_EVA_Cool ==
        rtb_TmpSignalConversionAtVeAVTR_e_EVA_Th) ||
        (rtb_TmpSignalConversionAtVeAVTR_e_EVA_Th == CeAVTR_e_EVA_MaxCool)) ||
        (rtb_TmpSignalConversionAtVeTHMR_b_BattAl &&
         rtb_TmpSignalConversionAtVeBTRR_b_BattCo));

    /* RelationalOperator: '<S13>/Comparison4' incorporates:
     *  Constant: '<S106>/Constant'
     *  Inport: '<Root>/VeTHMR_e_CabHeatThermalMode'
     */
    rtb_LogicalOperator11_f = (tmpRead_a == CeTHMR_e_HeatPump);

    /* Logic: '<S13>/Logical Operator4' */
    VeTPDR_b_HeatPmp_or_Deice_Actv = (tmpRead_9 || rtb_LogicalOperator11_f);

    /* Gain: '<S139>/Gain' incorporates:
     *  Logic: '<S129>/Logical Operator3'
     */
    VeTPDR_b_HeatPump_Cabin_Allowed = ((true) && ((VeTPDR_b_CabinCondAllowed) &&
        (VeTPDR_b_HeatPmp_or_Deice_Actv)));

    /* Gain: '<S140>/Gain' incorporates:
     *  Logic: '<S129>/Logical Operator4'
     */
    VeTPDR_b_RearHeater_Cabin_Allowed = ((true) && ((VeTPDR_b_CabinCondAllowed) &&
        tmpRead_j));

    /* Gain: '<S123>/Gain' incorporates:
     *  SignalConversion generated from: '<S123>/Gain'
     */
    VaTPDR_i_Mode_Without_Priority[0] = ((true) && (VeTPDR_b_Cabin_Cool_Allowed));
    VaTPDR_i_Mode_Without_Priority[1] = ((true) && (VeTPDR_b_Cabin_Heat_Allowed));
    VaTPDR_i_Mode_Without_Priority[2] = ((true) &&
        (VeTPDR_b_Battery_Cool_Allowed));
    VaTPDR_i_Mode_Without_Priority[3] = ((true) &&
        (VeTPDR_b_Battery_Heat_Allowed));
    VaTPDR_i_Mode_Without_Priority[4] = ((true) &&
        rtb_TmpSignalConversionAtVeTHMR_b_PerWup);
    VaTPDR_i_Mode_Without_Priority[5] = ((true) &&
        (VeTPDR_b_HeatPump_Cabin_Allowed));
    VaTPDR_i_Mode_Without_Priority[6] = ((true) &&
        (VeTPDR_b_RearHeater_Cabin_Allowed));

    /* MATLAB Function: '<S12>/MATLAB_Function' incorporates:
     *  Constant: '<S104>/Calib'
     *  Constant: '<S12>/TPDR_C_Cnt_SizeofRequest'
     */
    /* MATLAB Function 'TPDR_MedTEH/Power_Distribution/Distribution_Matrices/MATLAB_Function': '<S105>:1' */
    /* '<S105>:1:39' */
    /* '<S105>:1:46' */
    /* '<S105>:1:3' */
    memcpy(&rtb_VeTPDR_Dist_Matrix[0], ((const float32 *)&(HaTPDR_K_DistMatrix[0])),
           28U * (sizeof(float32)));

    /* '<S105>:1:36' */
    for (i = 1; (i - 1) < ((sint32)((uint8)7U)); i++)
    {
        /* '<S105>:1:36' */
        if (!VaTPDR_i_Mode_Without_Priority[((sint32)((uint8)i)) - 1])
        {
            /* '<S105>:1:38' */
            /* '<S105>:1:39' */
            for (rtb_Add_tmp = 0; rtb_Add_tmp < 4; rtb_Add_tmp++)
            {
                rtb_VeTPDR_Dist_Matrix[rtb_Add_tmp + ((((sint32)((uint8)i)) - 1)
                    * 4)] = 0.0F;
            }
        }
    }

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

    /* Inport: '<Root>/VeTHMR_b_BattSharedHeaterAllowed' */
    (void)Rte_Read_VeTHMR_b_BattSharedHeaterAllowed_Value(&rtb_OR1_k);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/TPDR_MedTEH'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Power_Distribution'
     */
    /* MATLAB Function: '<S12>/MATLAB_Function' incorporates:
     *  Constant: '<S12>/TPDR_C_Cnt_Number_of_Actuators'
     */
    if (rtb_OR1_k)
    {
        /* '<S105>:1:45' */
        /* '<S105>:1:46' */
        for (rtb_Add_tmp = 0; rtb_Add_tmp < 7; rtb_Add_tmp++)
        {
            rtb_VeTPDR_Dist_Matrix[rtb_Add_tmp * 4] = 0.0F;
        }
    }
    else
    {
        /* '<S105>:1:49' */
        rtb_VeTPDR_Dist_Matrix[13] = 0.0F;
    }

    /* '<S105>:1:59' */
    for (i = 1; (i - 1) < ((sint32)((uint8)4U)); i++)
    {
        /* '<S105>:1:59' */
        if (TPDR_ac_ConstB.TmpSignalConversionAtSFunctionInport[((sint32)((uint8)
                i)) - 1])
        {
            /* '<S105>:1:61' */
            /* '<S105>:1:62' */
            for (rtb_Add_tmp = 0; rtb_Add_tmp < 7; rtb_Add_tmp++)
            {
                rtb_VeTPDR_Dist_Matrix[(((sint32)((uint8)i)) + (rtb_Add_tmp * 4))
                    - 1] = 0.0F;
            }
        }
    }

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

    /* Inport: '<Root>/VeCTRR_P_HeatPmpPwrNeed' */
    (void)Rte_Read_VeCTRR_P_HeatPmpPwrNeed_Value(&tmpRead_b);

    /* Inport: '<Root>/VeTHMR_P_PerWup_EngHeatNeed' */
    (void)Rte_Read_VeTHMR_P_PerWup_EngHeatNeed_Value(&tmpRead_4);

    /* Inport: '<Root>/VeBTRR_P_BatHeatPwr_NeedLimtd' */
    (void)Rte_Read_VeBTRR_P_BatHeatPwr_NeedLimtd_Value(&tmpRead_1);

    /* Inport: '<Root>/VeCTRR_P_CabCoolPwrNeed' */
    (void)Rte_Read_VeCTRR_P_CabCoolPwrNeed_Value(&tmpRead_0);

    /* Inport: '<Root>/VeBTRR_P_BattCoolPwrNeedLim' */
    (void)Rte_Read_VeBTRR_P_BattCoolPwrNeedLim_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/TPDR_MedTEH'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Power_Distribution'
     */
    /* Gain: '<S22>/Gain' */
    VaTPDR_P_PowerRequests[0] = 1.0F * tmpRead_0;
    VaTPDR_P_PowerRequests[1] = 1.0F * rtb_TmpSignalConversionAtVeTHMR_P_CabHea;
    VaTPDR_P_PowerRequests[2] = 1.0F * tmpRead;
    VaTPDR_P_PowerRequests[3] = 1.0F * tmpRead_1;
    VaTPDR_P_PowerRequests[4] = 1.0F * tmpRead_4;
    VaTPDR_P_PowerRequests[5] = 1.0F * tmpRead_b;
    VaTPDR_P_PowerRequests[6] = 1.0F * rtb_TmpSignalConversionAtVeCTRR_P_RearHe;

    /* Switch: '<S17>/Switch1' incorporates:
     *  Inport: '<Root>/VeTHMR_P_EDU_Heat_Cabin_Available'
     *  Inport: '<Root>/VeTHMR_P_EnginePwr_Available'
     *  Inport: '<Root>/VeTHMR_P_WCondCabHeat_Avail'
     */
    if (rtb_TmpSignalConversionAtVeTHMR_b_RS_N_O)
    {
        /* Switch: '<S21>/Switch' incorporates:
         *  Constant: '<S17>/Constant1'
         */
        VeTPDR_P_SharedHtrPwrRatLim_B4Hys = 0.0F;
    }
    else
    {
        (void)Rte_Read_VeTHMR_P_WCondCabHeat_Avail_Value(&tmpRead_e);
        (void)Rte_Read_VeTHMR_P_EDU_Heat_Cabin_Available_Value(&tmpRead_7);
        (void)Rte_Read_VeTHMR_P_EnginePwr_Available_Value(&tmpRead_3);

        /* Switch: '<S21>/Switch' incorporates:
         *  Inport: '<Root>/VeTHMR_P_EDU_Heat_Cabin_Available'
         *  Inport: '<Root>/VeTHMR_P_EnginePwr_Available'
         *  Inport: '<Root>/VeTHMR_P_WCondCabHeat_Avail'
         *  Sum: '<S4>/Add'
         */
        VeTPDR_P_SharedHtrPwrRatLim_B4Hys = (tmpRead_3 + tmpRead_7) + tmpRead_e;
    }

    /* End of Switch: '<S17>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

    /* Inport: '<Root>/VeTHMR_P_EDU_Heat_Battery_Available' */
    (void)Rte_Read_VeTHMR_P_EDU_Heat_Battery_Available_Value(&tmpRead_8);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/TPDR_MedTEH'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Power_Distribution'
     */
    /* Outputs for Atomic SubSystem: '<S35>/Limiter1' */
    /* MultiPortSwitch: '<S17>/Index_Vector' incorporates:
     *  Assignment: '<S17>/Array_Assignment'
     *  Constant: '<S17>/Constant'
     *  Switch: '<S39>/Switch'
     */
    rtb_Add_tmp = ((sint32)((uint8)2U)) - 1;

    /* End of Outputs for SubSystem: '<S35>/Limiter1' */

    /* Sum: '<S17>/Add' incorporates:
     *  MultiPortSwitch: '<S17>/Index_Vector'
     */
    VeTPDR_P_SharedHtrPwrRatLim_B4Hys = VaTPDR_P_PowerRequests[(rtb_Add_tmp)] -
        VeTPDR_P_SharedHtrPwrRatLim_B4Hys;

    /* Outputs for Atomic SubSystem: '<S35>/Limiter1' */
    /* Switch: '<S39>/Switch1' incorporates:
     *  Constant: '<S37>/Calib'
     *  RelationalOperator: '<S39>/Relational Operator'
     */
    if (KeTPDR_P_MaxCabActvHeatPwr < VeTPDR_P_SharedHtrPwrRatLim_B4Hys)
    {
        /* Switch: '<S21>/Switch' */
        VeTPDR_P_SharedHtrPwrRatLim_B4Hys = KeTPDR_P_MaxCabActvHeatPwr;
    }

    /* End of Switch: '<S39>/Switch1' */
    /* End of Outputs for SubSystem: '<S35>/Limiter1' */
    for (i = 0; i < 7; i++)
    {
        /* Assignment: '<S17>/Array_Assignment' */
        VaTPDR_P_PwrRqst_Adjusted[(i)] = VaTPDR_P_PowerRequests[(i)];
    }

    /* Outputs for Atomic SubSystem: '<S35>/Limiter1' */
    /* Switch: '<S39>/Switch' incorporates:
     *  Constant: '<S38>/Calib'
     *  RelationalOperator: '<S39>/Relational Operator1'
     */
    if (VeTPDR_P_SharedHtrPwrRatLim_B4Hys > KeTPDR_P_MinCabActvHeatPwr)
    {
        /* Assignment: '<S17>/Array_Assignment' */
        VaTPDR_P_PwrRqst_Adjusted[(rtb_Add_tmp)] =
            VeTPDR_P_SharedHtrPwrRatLim_B4Hys;
    }
    else
    {
        /* Assignment: '<S17>/Array_Assignment' */
        VaTPDR_P_PwrRqst_Adjusted[(rtb_Add_tmp)] = KeTPDR_P_MinCabActvHeatPwr;
    }

    /* End of Outputs for SubSystem: '<S35>/Limiter1' */

    /* Sum: '<S17>/Add1' incorporates:
     *  Constant: '<S17>/Constant3'
     *  MultiPortSwitch: '<S17>/Index_Vector1'
     */
    VeTPDR_P_SharedHtrPwrRatLim_B4Hys = VaTPDR_P_PwrRqst_Adjusted[((sint32)
        ((uint8)4U)) - 1] - tmpRead_8;

    /* Outputs for Atomic SubSystem: '<S36>/Limiter' */
    /* Switch: '<S42>/Switch1' incorporates:
     *  Constant: '<S40>/Calib'
     *  RelationalOperator: '<S42>/Relational Operator'
     */
    if (KeTPDR_P_MaxBattActvHeatPwr < VeTPDR_P_SharedHtrPwrRatLim_B4Hys)
    {
        /* Switch: '<S21>/Switch' */
        VeTPDR_P_SharedHtrPwrRatLim_B4Hys = KeTPDR_P_MaxBattActvHeatPwr;
    }

    /* End of Switch: '<S42>/Switch1' */

    /* Switch: '<S42>/Switch' incorporates:
     *  Constant: '<S41>/Calib'
     *  RelationalOperator: '<S42>/Relational Operator1'
     */
    if (VeTPDR_P_SharedHtrPwrRatLim_B4Hys > KeTPDR_P_MinBattActvHeatPwr)
    {
        /* Assignment: '<S17>/Array_Assignment1' incorporates:
         *  Constant: '<S17>/Constant4'
         */
        VaTPDR_P_PwrRqst_Adjusted[((sint32)((uint8)4U)) - 1] =
            VeTPDR_P_SharedHtrPwrRatLim_B4Hys;
    }
    else
    {
        /* Assignment: '<S17>/Array_Assignment1' incorporates:
         *  Constant: '<S17>/Constant4'
         */
        VaTPDR_P_PwrRqst_Adjusted[((sint32)((uint8)4U)) - 1] =
            KeTPDR_P_MinBattActvHeatPwr;
    }

    /* End of Switch: '<S42>/Switch' */
    /* End of Outputs for SubSystem: '<S36>/Limiter' */
    for (rtb_Add_tmp = 0; rtb_Add_tmp < 4; rtb_Add_tmp++)
    {
        /* Product: '<S11>/Product1' */
        VaTPDR_P_ActrPwrBdgt_Int[(rtb_Add_tmp)] = 0.0F;
        for (i = 0; i < 7; i++)
        {
            VaTPDR_P_ActrPwrBdgt_Int[(rtb_Add_tmp)] = (rtb_VeTPDR_Dist_Matrix[(i
                * 4) + rtb_Add_tmp] * VaTPDR_P_PwrRqst_Adjusted[(i)]) +
                VaTPDR_P_ActrPwrBdgt_Int[(rtb_Add_tmp)];
        }

        /* End of Product: '<S11>/Product1' */
    }

    /* Outputs for Enabled SubSystem: '<S107>/HeatPumpRatio' incorporates:
     *  EnablePort: '<S113>/Enable'
     */
    if (rtb_LogicalOperator11_f)
    {
        /* Inport: '<Root>/VeAATR_T_EstAmbAirTemp' */
        (void)Rte_Read_VeAATR_T_EstAmbAirTemp_Value(&tmpRead_f);

        /* Lookup_n-D: '<S127>/Vector' incorporates:
         *  Inport: '<Root>/VeAATR_T_EstAmbAirTemp'
         *  SignalConversion generated from: '<S1>/VeTHMR_T_AHPInletTempArb'
         */
        TPDR_ac_B.Vector_m = look2_iflf_binlca_16a(tmpRead_f,
            rtb_TmpSignalConversionAtVeTHMR_T_AHPInl, ((const float32 *)
            &(KxTPDR_r_HeatPumpRatio[0])), ((const float32 *)
            &(KyTPDR_r_HeatPumpRatio[0])), ((const float32 *)
            &(KtTPDR_r_HeatPumpRatio[0])), (const uint32*)
            TPDR_ac_ConstP.Vector_maxIndex, 5U);
    }

    /* End of Outputs for SubSystem: '<S107>/HeatPumpRatio' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

    /* Inport: '<Root>/VeTHMR_e_LTCLThrmlMode' */
    (void)Rte_Read_VeTHMR_e_LTCLThrmlMode_Value(&tmpRead_c);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/TPDR_MedTEH'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Power_Distribution'
     */
    /* Outputs for Enabled SubSystem: '<S107>/EDUHeatUsageRatio' incorporates:
     *  EnablePort: '<S110>/Enable'
     */
    /* RelationalOperator: '<S107>/Comparison4' incorporates:
     *  Constant: '<S111>/Constant'
     *  Inport: '<Root>/VeTHMR_e_LTCLThrmlMode'
     *  Inport: '<Root>/VeTMIR_T_OnBrdChrg_ClntTmpIn'
     */
    if (tmpRead_c == CeTHMR_e_LTCLActvWasteHeatRcvry)
    {
        (void)Rte_Read_VeTMIR_T_OnBrdChrg_ClntTmpIn_Value(&tmpRead_g);

        /* Lookup_n-D: '<S126>/Vector' incorporates:
         *  Inport: '<Root>/VeTMIR_T_OnBrdChrg_ClntTmpIn'
         *  SignalConversion generated from: '<S1>/VeTHMR_T_AHPInletTempArb'
         */
        TPDR_ac_B.Vector_b = look2_iflf_binlca_16a(tmpRead_g,
            rtb_TmpSignalConversionAtVeTHMR_T_AHPInl, ((const float32 *)
            &(KxTPDR_r_EDUHeatUsageRatio[0])), ((const float32 *)
            &(KyTPDR_r_EDUHeatUsageRatio[0])), ((const float32 *)
            &(KtTPDR_r_EDUHeatUsageRatio[0])), (const uint32*)
            TPDR_ac_ConstP.pooled3, 4U);
    }

    /* End of RelationalOperator: '<S107>/Comparison4' */
    /* End of Outputs for SubSystem: '<S107>/EDUHeatUsageRatio' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

    /* Inport: '<Root>/VeTRIR_T_HV_BatClntTmpOut' */
    (void)Rte_Read_VeTRIR_T_HV_BatClntTmpOut_Value(&tmpRead_i);

    /* Inport: '<Root>/VeBTRR_T_CellTempMaxUsed' */
    (void)Rte_Read_VeBTRR_T_CellTempMaxUsed_Value(&tmpRead_h);

    /* Inport: '<Root>/VeTHMR_e_BatThrmlSt' */
    (void)Rte_Read_VeTHMR_e_BatThrmlSt_Value(&tmpRead_d);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/TPDR_MedTEH'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Power_Distribution'
     */
    /* Outputs for Enabled SubSystem: '<S107>/BattHeatUsageRatio' incorporates:
     *  EnablePort: '<S108>/Enable'
     */
    /* RelationalOperator: '<S107>/Comparison1' incorporates:
     *  Constant: '<S112>/Constant'
     *  Inport: '<Root>/VeTHMR_e_BatThrmlSt'
     */
    if (tmpRead_d == CeTHMR_e_BTLActvWasteHeatRcvry)
    {
        /* Switch: '<S107>/Switch' incorporates:
         *  Constant: '<S114>/Calib'
         */
        if (KeTPDR_b_Use_CellTempMax_BattTemp)
        {
            tmpRead_i = tmpRead_h;
        }

        /* End of Switch: '<S107>/Switch' */

        /* Lookup_n-D: '<S125>/Vector' incorporates:
         *  SignalConversion generated from: '<S1>/VeTHMR_T_AHPInletTempArb'
         */
        TPDR_ac_B.Vector_j = look2_iflf_binlca_16a(tmpRead_i,
            rtb_TmpSignalConversionAtVeTHMR_T_AHPInl, ((const float32 *)
            &(KxTPDR_r_BattHeatUsageRatio[0])), ((const float32 *)
            &(KyTPDR_r_BattHeatUsageRatio[0])), ((const float32 *)
            &(KtTPDR_r_BattHeatUsageRatio[0])), (const uint32*)
            TPDR_ac_ConstP.pooled3, 4U);
    }

    /* End of RelationalOperator: '<S107>/Comparison1' */
    /* End of Outputs for SubSystem: '<S107>/BattHeatUsageRatio' */

    /* Sum: '<S107>/Sum1' */
    VeTPDR_P_SharedHtrPwrRatLim_B4Hys = (TPDR_ac_B.Vector_m + TPDR_ac_B.Vector_b)
        + TPDR_ac_B.Vector_j;

    /* Outputs for Atomic SubSystem: '<S107>/Limiter' */
    /* Switch: '<S119>/Switch1' incorporates:
     *  Constant: '<S117>/Calib'
     *  RelationalOperator: '<S119>/Relational Operator'
     */
    if (KeTPDR_r_HeatPumpRatioMax < VeTPDR_P_SharedHtrPwrRatLim_B4Hys)
    {
        /* Switch: '<S21>/Switch' */
        VeTPDR_P_SharedHtrPwrRatLim_B4Hys = KeTPDR_r_HeatPumpRatioMax;
    }

    /* End of Switch: '<S119>/Switch1' */

    /* Switch: '<S119>/Switch' incorporates:
     *  Constant: '<S118>/Calib'
     *  RelationalOperator: '<S119>/Relational Operator1'
     */
    if (VeTPDR_P_SharedHtrPwrRatLim_B4Hys > KeTPDR_r_HeatPumpRatioMin)
    {
        /* Switch: '<S119>/Switch' */
        VeTPDR_r_HeatPumpPriorityRatio = VeTPDR_P_SharedHtrPwrRatLim_B4Hys;
    }
    else
    {
        /* Switch: '<S119>/Switch' */
        VeTPDR_r_HeatPumpPriorityRatio = KeTPDR_r_HeatPumpRatioMin;
    }

    /* End of Switch: '<S119>/Switch' */
    /* End of Outputs for SubSystem: '<S107>/Limiter' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

    /* Inport: '<Root>/VeTAIR_b_WinshldDfrst' */
    (void)Rte_Read_VeTAIR_b_WinshldDfrst_Value(&rtb_AND_d);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/TPDR_MedTEH'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Power_Distribution'
     */
    /* Switch: '<S107>/Switch1' */
    if (rtb_AND_d)
    {
        /* Sum: '<S107>/Sum' */
        rtb_TmpSignalConversionAtVeCTRR_P_RearHe +=
            rtb_TmpSignalConversionAtVeTHMR_P_CabHea;

        /* Outputs for Atomic SubSystem: '<S107>/Protected Division' */
        /* Switch: '<S122>/Switch1' incorporates:
         *  Constant: '<S122>/Constant Value'
         *  Constant: '<S122>/Constant Value1'
         *  Constant: '<S122>/Constant Value2'
         *  Constant: '<S122>/Constant Value3'
         *  Logic: '<S122>/AND'
         *  RelationalOperator: '<S122>/Greater Than or Equal '
         *  RelationalOperator: '<S122>/Greater Than or Equal 1'
         *  RelationalOperator: '<S122>/Not Equal'
         *  RelationalOperator: '<S122>/Not Equal1'
         *  Switch: '<S122>/Switch2'
         *  Switch: '<S122>/Switch3'
         */
        if ((rtb_TmpSignalConversionAtVeTHMR_P_CabHea != 0.0F) &&
                (rtb_TmpSignalConversionAtVeCTRR_P_RearHe != 0.0F))
        {
            /* Switch: '<S107>/Switch1' incorporates:
             *  Product: '<S122>/Division'
             *  Switch: '<S122>/Switch1'
             */
            VeTPDR_P_SharedHtrPwrRatLim_B4Hys =
                rtb_TmpSignalConversionAtVeTHMR_P_CabHea /
                rtb_TmpSignalConversionAtVeCTRR_P_RearHe;
        }
        else if (rtb_TmpSignalConversionAtVeTHMR_P_CabHea > 0.0F)
        {
            /* Switch: '<S122>/Switch2' incorporates:
             *  Constant: '<S122>/MAXFLOAT'
             *  Switch: '<S107>/Switch1'
             */
            VeTPDR_P_SharedHtrPwrRatLim_B4Hys = 3.402823466E+38F;
        }
        else if (rtb_TmpSignalConversionAtVeTHMR_P_CabHea < 0.0F)
        {
            /* Switch: '<S122>/Switch3' incorporates:
             *  Constant: '<S122>/MINFLOAT'
             *  Switch: '<S107>/Switch1'
             *  Switch: '<S122>/Switch2'
             */
            VeTPDR_P_SharedHtrPwrRatLim_B4Hys = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S107>/Switch1' incorporates:
             *  Constant: '<S122>/Constant Value4'
             *  Switch: '<S122>/Switch2'
             *  Switch: '<S122>/Switch3'
             */
            VeTPDR_P_SharedHtrPwrRatLim_B4Hys = 0.0F;
        }

        /* End of Switch: '<S122>/Switch1' */
        /* End of Outputs for SubSystem: '<S107>/Protected Division' */
    }
    else
    {
        /* Switch: '<S107>/Switch1' incorporates:
         *  Constant: '<S107>/Constant Value'
         */
        VeTPDR_P_SharedHtrPwrRatLim_B4Hys = 0.5F;
    }

    /* End of Switch: '<S107>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

    /* Inport: '<Root>/VeTHMR_r_BattCabPriority_Ratio' */
    (void)Rte_Read_VeTHMR_r_BattCabPriority_Ratio_Value(&Total_Scale_Factors);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/TPDR_MedTEH'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Power_Distribution'
     */
    /* Outputs for Atomic SubSystem: '<S107>/Limiter1' */
    /* Switch: '<S120>/Switch1' incorporates:
     *  Constant: '<S115>/Calib'
     *  RelationalOperator: '<S120>/Relational Operator'
     */
    if (KeTPDR_r_CabinHeatRatioMax < VeTPDR_P_SharedHtrPwrRatLim_B4Hys)
    {
        /* Switch: '<S21>/Switch' */
        VeTPDR_P_SharedHtrPwrRatLim_B4Hys = KeTPDR_r_CabinHeatRatioMax;
    }

    /* End of Switch: '<S120>/Switch1' */

    /* Switch: '<S120>/Switch' incorporates:
     *  Constant: '<S116>/Calib'
     *  RelationalOperator: '<S120>/Relational Operator1'
     */
    if (VeTPDR_P_SharedHtrPwrRatLim_B4Hys > KeTPDR_r_CabinHeatRatioMin)
    {
        /* Switch: '<S120>/Switch' */
        VeTPDR_r_FrontCabHtrRatio = VeTPDR_P_SharedHtrPwrRatLim_B4Hys;
    }
    else
    {
        /* Switch: '<S120>/Switch' */
        VeTPDR_r_FrontCabHtrRatio = KeTPDR_r_CabinHeatRatioMin;
    }

    /* End of Switch: '<S120>/Switch' */
    /* End of Outputs for SubSystem: '<S107>/Limiter1' */

    /* MATLAB Function: '<S107>/Create_Priority_Vector' incorporates:
     *  Constant: '<S107>/TPDR_C_Cnt_SizeofRequest'
     *  SignalConversion generated from: '<S109>/ SFunction '
     */
    /* MATLAB Function 'TPDR_MedTEH/Power_Distribution/Mode_Selection_Vector/Priority_Assignment/Create_Priority_Vector': '<S109>:1' */
    /* '<S109>:1:4' */
    VaTPDR_i_Mode_With_Priority[0] = (float32)(VeTPDR_b_Cabin_Cool_Allowed ?
        1.0F : 0.0F);
    VaTPDR_i_Mode_With_Priority[1] = (float32)(VeTPDR_b_Cabin_Heat_Allowed ?
        1.0F : 0.0F);
    VaTPDR_i_Mode_With_Priority[2] = (float32)(VeTPDR_b_Battery_Cool_Allowed ?
        1.0F : 0.0F);
    VaTPDR_i_Mode_With_Priority[3] = (float32)(VeTPDR_b_Battery_Heat_Allowed ?
        1.0F : 0.0F);
    VaTPDR_i_Mode_With_Priority[4] = (float32)
        (rtb_TmpSignalConversionAtVeTHMR_b_PerWup ? 1.0F : 0.0F);

    /* '<S109>:1:6' */
    /* '<S109>:1:14' */
    VaTPDR_i_Mode_With_Priority[2] = Total_Scale_Factors *
        VaTPDR_i_Mode_With_Priority[2];

    /* '<S109>:1:15' */
    VaTPDR_i_Mode_With_Priority[3] = Total_Scale_Factors *
        VaTPDR_i_Mode_With_Priority[3];

    /* '<S109>:1:18' */
    VaTPDR_i_Mode_With_Priority[0] = (1.0F - Total_Scale_Factors) *
        VaTPDR_i_Mode_With_Priority[0];

    /* '<S109>:1:19' */
    VaTPDR_i_Mode_With_Priority[1] = (1.0F - Total_Scale_Factors) *
        VaTPDR_i_Mode_With_Priority[1];

    /* '<S109>:1:39' */
    VaTPDR_i_Mode_With_Priority[5] = VeTPDR_r_HeatPumpPriorityRatio *
        VaTPDR_i_Mode_With_Priority[1];

    /* '<S109>:1:40' */
    VaTPDR_i_Mode_With_Priority[1] = (1.0F - VeTPDR_r_HeatPumpPriorityRatio) *
        VaTPDR_i_Mode_With_Priority[1];

    /* '<S109>:1:43' */
    VaTPDR_i_Mode_With_Priority[6] = (1.0F - VeTPDR_r_FrontCabHtrRatio) *
        VaTPDR_i_Mode_With_Priority[1];

    /* '<S109>:1:44' */
    VaTPDR_i_Mode_With_Priority[1] = VeTPDR_r_FrontCabHtrRatio *
        VaTPDR_i_Mode_With_Priority[1];

    /* '<S109>:1:50' */
    Total_Scale_Factors = 0.0F;

    /* '<S109>:1:51' */
    for (i = 0; i < ((sint32)((uint8)7U)); i++)
    {
        /* '<S109>:1:51' */
        /* '<S109>:1:52' */
        Total_Scale_Factors += VaTPDR_i_Mode_With_Priority[(i)];
    }

    if (Total_Scale_Factors > 0.0F)
    {
        /* '<S109>:1:55' */
        /* '<S109>:1:56' */
        for (rtb_Add_tmp = 0; rtb_Add_tmp < 7; rtb_Add_tmp++)
        {
            VaTPDR_i_Mode_With_Priority[(rtb_Add_tmp)] =
                VaTPDR_i_Mode_With_Priority[(rtb_Add_tmp)] / Total_Scale_Factors;
        }
    }

    /* End of MATLAB Function: '<S107>/Create_Priority_Vector' */
    for (rtb_Add_tmp = 0; rtb_Add_tmp < 7; rtb_Add_tmp++)
    {
        /* Gain: '<S124>/Gain' */
        VaTPDR_i_Mode_With_Priority[(rtb_Add_tmp)] = 1.0F *
            VaTPDR_i_Mode_With_Priority[(rtb_Add_tmp)];
    }

    /* MATLAB Function: '<S11>/Calculate_the_final_power_outputs' incorporates:
     *  Constant: '<S11>/TPDR_C_Cnt_Number_of_Actuators'
     */
    /* MATLAB Function 'TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Calculate_the_final_power_outputs': '<S18>:1' */
    /* '<S18>:1:10' */
    Total_Scale_Factors = 0.0F;

    /* '<S18>:1:11' */
    for (i = 0; i < ((sint32)((uint8)4U)); i++)
    {
        /* '<S18>:1:11' */
        /* '<S18>:1:12' */
        Total_Scale_Factors += VaTPDR_P_ActrPwrBdgt_Int[(i)];
    }

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

    /* Inport: '<Root>/VeTHMR_P_PwrBdgt_PwrLimitAvail' */
    (void)Rte_Read_VeTHMR_P_PwrBdgt_PwrLimitAvail_Value(&Deficient_Act_Power);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/TPDR_MedTEH'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Power_Distribution'
     */
    /* MATLAB Function: '<S11>/Calculate_the_final_power_outputs' incorporates:
     *  Constant: '<S11>/TPDR_C_Cnt_Number_of_Actuators'
     */
    if (Total_Scale_Factors > Deficient_Act_Power)
    {
        /* '<S18>:1:15' */
        /* '<S18>:1:17' */
        for (rtb_Add_tmp = 0; rtb_Add_tmp < 7; rtb_Add_tmp++)
        {
            tmp[rtb_Add_tmp] = VaTPDR_i_Mode_With_Priority[(rtb_Add_tmp)] *
                VaTPDR_P_PwrRqst_Adjusted[(rtb_Add_tmp)];
        }

        for (rtb_Add_tmp = 0; rtb_Add_tmp < 4; rtb_Add_tmp++)
        {
            VaTPDR_P_ActrPwrBdgt_Fnl[(rtb_Add_tmp)] = 0.0F;
            for (i = 0; i < 7; i++)
            {
                VaTPDR_P_ActrPwrBdgt_Fnl[(rtb_Add_tmp)] =
                    (rtb_VeTPDR_Dist_Matrix[(i * 4) + rtb_Add_tmp] * tmp[i]) +
                    VaTPDR_P_ActrPwrBdgt_Fnl[(rtb_Add_tmp)];
            }
        }

        /* '<S18>:1:19' */
        for (i = 1; (i - 1) < ((sint32)((uint8)4U)); i++)
        {
            /* '<S18>:1:19' */
            if (VaTPDR_P_ActrPwrBdgt_Fnl[((sint32)((uint8)i)) - 1] < 0.0F)
            {
                /* '<S18>:1:20' */
                /* '<S18>:1:21' */
                VaTPDR_P_ActrPwrBdgt_Fnl[((sint32)((uint8)i)) - 1] = 0.0F;
            }
        }

        /* '<S18>:1:25' */
        Total_Scale_Factors = 0.0F;

        /* '<S18>:1:27' */
        for (rtb_Add_tmp = 0; rtb_Add_tmp < ((sint32)((uint8)4U)); rtb_Add_tmp++)
        {
            /* '<S18>:1:27' */
            /* '<S18>:1:28' */
            Total_Scale_Factors += VaTPDR_P_ActrPwrBdgt_Fnl[(rtb_Add_tmp)];
        }

        if (Total_Scale_Factors > 0.0F)
        {
            /* '<S18>:1:32' */
            /* '<S18>:1:33' */
            Deficient_Act_Power /= Total_Scale_Factors;
            for (rtb_Add_tmp = 0; rtb_Add_tmp < 4; rtb_Add_tmp++)
            {
                VaTPDR_P_ActrPwrBdgt_Fnl[(rtb_Add_tmp)] = Deficient_Act_Power *
                    VaTPDR_P_ActrPwrBdgt_Fnl[(rtb_Add_tmp)];
            }
        }
        else
        {
            /* '<S18>:1:35' */
            for (i = 0; i < 4; i++)
            {
                VaTPDR_P_ActrPwrBdgt_Fnl[(i)] = 0.0F;
            }
        }

        /* '<S18>:1:38' */
    }
    else
    {
        if (Total_Scale_Factors > 0.0F)
        {
            /* '<S18>:1:42' */
            /* '<S18>:1:43' */
            Deficient_Act_Power /= Total_Scale_Factors;
            for (i = 0; i < 4; i++)
            {
                VaTPDR_P_ActrPwrBdgt_Fnl[(i)] = Deficient_Act_Power *
                    VaTPDR_P_ActrPwrBdgt_Int[(i)];
            }
        }
        else
        {
            /* '<S18>:1:46' */
            for (i = 0; i < 4; i++)
            {
                VaTPDR_P_ActrPwrBdgt_Fnl[(i)] = 0.0F;
            }
        }

        /* '<S18>:1:50' */
    }

    /* MATLAB Function: '<S20>/MATLAB_Function' incorporates:
     *  Constant: '<S43>/Calib'
     *  Constant: '<S44>/Calib'
     *  Constant: '<S45>/Calib'
     *  Constant: '<S46>/Calib'
     */
    /* MATLAB Function 'TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Overlimit_Modification/MATLAB_Function': '<S47>:1' */
    /* '<S47>:1:5' */
    /* '<S47>:1:7' */
    Deficient_Act_Power = 0.0F;

    /* '<S47>:1:9' */
    varargin_2[0] = KeTPDR_P_BattOnlyHeatPwr_MaxLim;
    varargin_2[1] = KeTPDR_P_Shrd_orCabOnlyHeatPwr_MaxLim;
    varargin_2[2] = KeTPDR_P_DstbtdCoolPwr_MaxLim;
    varargin_2[3] = KeTPDR_P_RearHtrPwr_MaxLim;

    /* '<S47>:1:13' */
    /* '<S47>:1:15' */
    Total_Scale_Factors = 0.0F;

    /* '<S47>:1:17' */
    for (i = 0; i < 4; i++)
    {
        P_A_modif[i] = 0.0F;
        VaTPDR_P_ActrPwrBdgt_Optimized[(i)] = fmaxf(VaTPDR_P_ActrPwrBdgt_Fnl[(i)]
            - fminf(VaTPDR_P_ActrPwrBdgt_Int[(i)], varargin_2[i]), 0.0F);

        /* '<S47>:1:17' */
        /* '<S47>:1:19' */
        Total_Scale_Factors += VaTPDR_P_ActrPwrBdgt_Optimized[(i)];
        if (VaTPDR_P_ActrPwrBdgt_Optimized[(i)] == 0.0F)
        {
            /* '<S47>:1:21' */
            if (VaTPDR_P_ActrPwrBdgt_Int[(i)] != 0.0F)
            {
                /* '<S47>:1:21' */
                /* '<S47>:1:22' */
                Deficient_Act_Power += VaTPDR_P_ActrPwrBdgt_Int[(i)];
            }
        }
    }

    /* '<S47>:1:28' */
    /* '<S47>:1:36' */
    for (i = 0; i < 4; i++)
    {
        rtb_TmpSignalConversionAtVeTHMR_P_CabHea = P_A_modif[i];

        /* '<S47>:1:28' */
        if (VaTPDR_P_ActrPwrBdgt_Optimized[(i)] > 0.0F)
        {
            /* '<S47>:1:29' */
            /* '<S47>:1:30' */
            rtb_TmpSignalConversionAtVeTHMR_P_CabHea = 0.0F;
        }
        else if (VaTPDR_P_ActrPwrBdgt_Int[(i)] == 0.0F)
        {
            /* '<S47>:1:29' */
            /* '<S47>:1:30' */
            rtb_TmpSignalConversionAtVeTHMR_P_CabHea = 0.0F;
        }
        else
        {
            if (Deficient_Act_Power > 0.0F)
            {
                /* '<S47>:1:31' */
                /* '<S47>:1:32' */
                rtb_TmpSignalConversionAtVeTHMR_P_CabHea =
                    (VaTPDR_P_ActrPwrBdgt_Int[(i)] / Deficient_Act_Power) *
                    Total_Scale_Factors;
            }
        }

        VaTPDR_P_ActrPwrBdgt_Optimized[(i)] = (VaTPDR_P_ActrPwrBdgt_Fnl[(i)] -
            VaTPDR_P_ActrPwrBdgt_Optimized[(i)]) +
            rtb_TmpSignalConversionAtVeTHMR_P_CabHea;

        /* Gain: '<S48>/Gain' */
        VaTPDR_P_ActrPwrBdgt_Optimized[(i)] = 1.0F *
            VaTPDR_P_ActrPwrBdgt_Optimized[(i)];

        /* Switch: '<S11>/Switch1' incorporates:
         *  Constant: '<S19>/Calib'
         */
        if (KeTPDR_b_Enable_Realctn_of_Act_Excess)
        {
            /* Switch: '<S11>/Switch1' */
            VaTPDR_P_ActrPwrBdgt_Fnl[(i)] = VaTPDR_P_ActrPwrBdgt_Optimized[(i)];
        }

        /* End of Switch: '<S11>/Switch1' */
        P_A_modif[i] = rtb_TmpSignalConversionAtVeTHMR_P_CabHea;
    }

    /* End of MATLAB Function: '<S20>/MATLAB_Function' */

    /* Outputs for Atomic SubSystem: '<S16>/Limiter1' */
    /* Switch: '<S31>/Switch1' incorporates:
     *  Constant: '<S23>/Calib'
     *  RelationalOperator: '<S31>/Relational Operator'
     */
    if (KeTPDR_P_BattOnlyHeatPwr_MaxLim < VaTPDR_P_ActrPwrBdgt_Fnl[0])
    {
        /* Switch: '<S21>/Switch' */
        VeTPDR_P_SharedHtrPwrRatLim_B4Hys = KeTPDR_P_BattOnlyHeatPwr_MaxLim;
    }
    else
    {
        /* Switch: '<S21>/Switch' */
        VeTPDR_P_SharedHtrPwrRatLim_B4Hys = VaTPDR_P_ActrPwrBdgt_Fnl[0];
    }

    /* End of Switch: '<S31>/Switch1' */

    /* Switch: '<S31>/Switch' incorporates:
     *  Constant: '<S24>/Calib'
     *  RelationalOperator: '<S31>/Relational Operator1'
     */
    if (VeTPDR_P_SharedHtrPwrRatLim_B4Hys > KeTPDR_P_BattOnlyHeatPwr_MinLim)
    {
        /* Switch: '<S31>/Switch' */
        VeTPDR_P_PriortzdSprtBattHtrPwrBudget_B4Hys =
            VeTPDR_P_SharedHtrPwrRatLim_B4Hys;
    }
    else
    {
        /* Switch: '<S31>/Switch' */
        VeTPDR_P_PriortzdSprtBattHtrPwrBudget_B4Hys =
            KeTPDR_P_BattOnlyHeatPwr_MinLim;
    }

    /* End of Switch: '<S31>/Switch' */
    /* End of Outputs for SubSystem: '<S16>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S16>/Limiter2' */
    /* Switch: '<S32>/Switch1' incorporates:
     *  Constant: '<S29>/Calib'
     *  RelationalOperator: '<S32>/Relational Operator'
     */
    if (KeTPDR_P_Shrd_orCabOnlyHeatPwr_MaxLim < VaTPDR_P_ActrPwrBdgt_Fnl[1])
    {
        /* Switch: '<S21>/Switch' */
        VeTPDR_P_SharedHtrPwrRatLim_B4Hys =
            KeTPDR_P_Shrd_orCabOnlyHeatPwr_MaxLim;
    }
    else
    {
        /* Switch: '<S21>/Switch' */
        VeTPDR_P_SharedHtrPwrRatLim_B4Hys = VaTPDR_P_ActrPwrBdgt_Fnl[1];
    }

    /* End of Switch: '<S32>/Switch1' */

    /* Switch: '<S32>/Switch' incorporates:
     *  Constant: '<S30>/Calib'
     *  RelationalOperator: '<S32>/Relational Operator1'
     */
    if (VeTPDR_P_SharedHtrPwrRatLim_B4Hys >
            KeTPDR_P_Shrd_orCabOnlyHeatPwr_MinLim)
    {
        /* Switch: '<S32>/Switch' */
        VeTPDR_P_PriortzdShrdCabHtrPwrBudget_B4Hys =
            VeTPDR_P_SharedHtrPwrRatLim_B4Hys;
    }
    else
    {
        /* Switch: '<S32>/Switch' */
        VeTPDR_P_PriortzdShrdCabHtrPwrBudget_B4Hys =
            KeTPDR_P_Shrd_orCabOnlyHeatPwr_MinLim;
    }

    /* End of Switch: '<S32>/Switch' */
    /* End of Outputs for SubSystem: '<S16>/Limiter2' */

    /* Outputs for Atomic SubSystem: '<S16>/Limiter3' */
    /* Switch: '<S33>/Switch1' incorporates:
     *  Constant: '<S25>/Calib'
     *  RelationalOperator: '<S33>/Relational Operator'
     */
    if (KeTPDR_P_DstbtdCoolPwr_MaxLim < VaTPDR_P_ActrPwrBdgt_Fnl[2])
    {
        /* Switch: '<S21>/Switch' */
        VeTPDR_P_SharedHtrPwrRatLim_B4Hys = KeTPDR_P_DstbtdCoolPwr_MaxLim;
    }
    else
    {
        /* Switch: '<S21>/Switch' */
        VeTPDR_P_SharedHtrPwrRatLim_B4Hys = VaTPDR_P_ActrPwrBdgt_Fnl[2];
    }

    /* End of Switch: '<S33>/Switch1' */

    /* Switch: '<S33>/Switch' incorporates:
     *  Constant: '<S26>/Calib'
     *  RelationalOperator: '<S33>/Relational Operator1'
     */
    if (VeTPDR_P_SharedHtrPwrRatLim_B4Hys > KeTPDR_P_DstbtdCoolPwr_MinLim)
    {
        /* Switch: '<S33>/Switch' */
        VeTPDR_P_CompressorPowerBudget = VeTPDR_P_SharedHtrPwrRatLim_B4Hys;
    }
    else
    {
        /* Switch: '<S33>/Switch' */
        VeTPDR_P_CompressorPowerBudget = KeTPDR_P_DstbtdCoolPwr_MinLim;
    }

    /* End of Switch: '<S33>/Switch' */
    /* End of Outputs for SubSystem: '<S16>/Limiter3' */

    /* Outputs for Atomic SubSystem: '<S16>/Limiter4' */
    /* Switch: '<S34>/Switch1' incorporates:
     *  Constant: '<S27>/Calib'
     *  RelationalOperator: '<S34>/Relational Operator'
     */
    if (KeTPDR_P_RearHtrPwr_MaxLim < VaTPDR_P_ActrPwrBdgt_Fnl[3])
    {
        /* Switch: '<S21>/Switch' */
        VeTPDR_P_SharedHtrPwrRatLim_B4Hys = KeTPDR_P_RearHtrPwr_MaxLim;
    }
    else
    {
        /* Switch: '<S21>/Switch' */
        VeTPDR_P_SharedHtrPwrRatLim_B4Hys = VaTPDR_P_ActrPwrBdgt_Fnl[3];
    }

    /* End of Switch: '<S34>/Switch1' */

    /* Switch: '<S34>/Switch' incorporates:
     *  Constant: '<S28>/Calib'
     *  RelationalOperator: '<S34>/Relational Operator1'
     */
    if (VeTPDR_P_SharedHtrPwrRatLim_B4Hys > KeTPDR_P_RearHtrPwr_MinLim)
    {
        /* Switch: '<S34>/Switch' */
        VeTPDR_P_PriortzdRearHtrPwrBudget = VeTPDR_P_SharedHtrPwrRatLim_B4Hys;
    }
    else
    {
        /* Switch: '<S34>/Switch' */
        VeTPDR_P_PriortzdRearHtrPwrBudget = KeTPDR_P_RearHtrPwr_MinLim;
    }

    /* End of Switch: '<S34>/Switch' */
    /* End of Outputs for SubSystem: '<S16>/Limiter4' */

    /* Sum: '<S21>/Add' */
    Deficient_Act_Power = VaTPDR_P_PwrRqst_Adjusted[2] +
        VaTPDR_P_PwrRqst_Adjusted[6];

    /* Sum: '<S21>/Add2' */
    VeTPDR_P_SharedHtrPwrRatLim_B4Hys =
        VeTPDR_P_PriortzdShrdCabHtrPwrBudget_B4Hys +
        VeTPDR_P_PriortzdRearHtrPwrBudget;

    /* Outputs for Atomic SubSystem: '<S21>/Hysteresis1' */
    /* Switch: '<S50>/Switch1' incorporates:
     *  Constant: '<S50>/Constant Value'
     *  Constant: '<S57>/Calib'
     *  Constant: '<S58>/Calib'
     *  RelationalOperator: '<S50>/Greater  Than'
     *  RelationalOperator: '<S50>/Greater  Than1'
     *  Switch: '<S50>/Switch2'
     *  UnitDelay: '<S50>/Unit Delay'
     */
    if (VeTPDR_P_SharedHtrPwrRatLim_B4Hys > KeTPDR_P_SupportBothCabHtrs_MaxHys)
    {
        TPDR_ac_DW.UnitDelay_DSTATE_m = true;
    }
    else
    {
        if (VeTPDR_P_SharedHtrPwrRatLim_B4Hys <
                KeTPDR_P_SupportBothCabHtrs_MinHys)
        {
            /* Switch: '<S50>/Switch2' incorporates:
             *  Constant: '<S50>/Constant Value1'
             *  UnitDelay: '<S50>/Unit Delay'
             */
            TPDR_ac_DW.UnitDelay_DSTATE_m = false;
        }
    }

    /* End of Switch: '<S50>/Switch1' */
    /* End of Outputs for SubSystem: '<S21>/Hysteresis1' */

    /* Logic: '<S21>/Logical Operator1' incorporates:
     *  UnitDelay: '<S50>/Unit Delay'
     */
    VeTPDR_b_FrontCabHtrSupportOnly = !TPDR_ac_DW.UnitDelay_DSTATE_m;

    /* Switch: '<S21>/Switch' */
    if (!VeTPDR_b_FrontCabHtrSupportOnly)
    {
        /* Switch: '<S21>/Switch' */
        VeTPDR_P_SharedHtrPwrRatLim_B4Hys =
            VeTPDR_P_PriortzdShrdCabHtrPwrBudget_B4Hys;
    }

    /* End of Switch: '<S21>/Switch' */

    /* Sum: '<S21>/Add1' */
    VeTPDR_P_PriortzdNetHtrPwrBudget = VeTPDR_P_SharedHtrPwrRatLim_B4Hys +
        VeTPDR_P_PriortzdSprtBattHtrPwrBudget_B4Hys;

    /* Outputs for Atomic SubSystem: '<S63>/Hysteresis' */
    /* Switch: '<S101>/Switch1' incorporates:
     *  Constant: '<S101>/Constant Value'
     *  Constant: '<S102>/Calib'
     *  Constant: '<S103>/Calib'
     *  RelationalOperator: '<S101>/Greater  Than'
     *  RelationalOperator: '<S101>/Greater  Than1'
     *  Switch: '<S101>/Switch2'
     *  UnitDelay: '<S101>/Unit Delay'
     */
    if (VaTPDR_P_PwrRqst_Adjusted[5] > KeTPDR_P_BattHeatTgtMet_Htron)
    {
        TPDR_ac_DW.UnitDelay_DSTATE_l = true;
    }
    else
    {
        if (VaTPDR_P_PwrRqst_Adjusted[5] < KeTPDR_P_BattHeatTgtMet_Htroff)
        {
            /* Switch: '<S101>/Switch2' incorporates:
             *  Constant: '<S101>/Constant Value1'
             *  UnitDelay: '<S101>/Unit Delay'
             */
            TPDR_ac_DW.UnitDelay_DSTATE_l = false;
        }
    }

    /* End of Switch: '<S101>/Switch1' */
    /* End of Outputs for SubSystem: '<S63>/Hysteresis' */

    /* Logic: '<S63>/Logical Operator3' incorporates:
     *  Constant: '<S100>/Constant'
     *  Constant: '<S99>/Constant'
     *  Logic: '<S63>/Logical Operator1'
     *  Logic: '<S63>/Logical Operator2'
     *  RelationalOperator: '<S63>/Relational Operator'
     *  RelationalOperator: '<S63>/Relational Operator1'
     *  UnitDelay: '<S101>/Unit Delay'
     */
    VeTPDR_P_BattHtrTgtMet = ((!TPDR_ac_DW.UnitDelay_DSTATE_l) ||
        ((CeTPCR_e_BattOnly_Cond != rtb_TmpSignalConversionAtVeTPCR_e_PerWup) &&
         (rtb_TmpSignalConversionAtVeTPCR_e_PerWup !=
          CeTPCR_e_Both_Eng_N_Bat_Cond)));

    /* Outputs for Atomic SubSystem: '<S73>/Hysteresis' */
    /* Switch: '<S88>/Switch1' incorporates:
     *  Constant: '<S88>/Constant Value'
     *  Constant: '<S89>/Calib'
     *  Constant: '<S90>/Calib'
     *  RelationalOperator: '<S88>/Greater  Than'
     *  RelationalOperator: '<S88>/Greater  Than1'
     *  Switch: '<S88>/Switch2'
     *  UnitDelay: '<S88>/Unit Delay'
     */
    if (VeTPDR_P_PriortzdNetHtrPwrBudget > KeTPDR_P_BattOnlyHeatPwr_MinLim_HtrOn)
    {
        TPDR_ac_DW.UnitDelay_DSTATE_d = true;
    }
    else
    {
        if (VeTPDR_P_PriortzdNetHtrPwrBudget <
                KeTPDR_P_BattOnlyHeatPwr_MinLim_HtrOff)
        {
            /* Switch: '<S88>/Switch2' incorporates:
             *  Constant: '<S88>/Constant Value1'
             *  UnitDelay: '<S88>/Unit Delay'
             */
            TPDR_ac_DW.UnitDelay_DSTATE_d = false;
        }
    }

    /* End of Switch: '<S88>/Switch1' */
    /* End of Outputs for SubSystem: '<S73>/Hysteresis' */

    /* Logic: '<S73>/Logical Operator10' incorporates:
     *  UnitDelay: '<S88>/Unit Delay'
     */
    VeTPDR_P_LowBudget_BattHtrDisabled = !TPDR_ac_DW.UnitDelay_DSTATE_d;

    /* Outputs for Atomic SubSystem: '<S61>/Hysteresis' */
    /* Switch: '<S93>/Switch1' incorporates:
     *  Constant: '<S93>/Constant Value'
     *  Constant: '<S94>/Calib'
     *  Constant: '<S95>/Calib'
     *  RelationalOperator: '<S93>/Greater  Than'
     *  RelationalOperator: '<S93>/Greater  Than1'
     *  Switch: '<S93>/Switch2'
     *  UnitDelay: '<S93>/Unit Delay'
     */
    if (Deficient_Act_Power > KeTPDR_P_HTCLHeatTgtMet_Htron)
    {
        TPDR_ac_DW.UnitDelay_DSTATE_c = true;
    }
    else
    {
        if (Deficient_Act_Power < KeTPDR_P_HTCLHeatTgtMet_Htroff)
        {
            /* Switch: '<S93>/Switch2' incorporates:
             *  Constant: '<S93>/Constant Value1'
             *  UnitDelay: '<S93>/Unit Delay'
             */
            TPDR_ac_DW.UnitDelay_DSTATE_c = false;
        }
    }

    /* End of Switch: '<S93>/Switch1' */
    /* End of Outputs for SubSystem: '<S61>/Hysteresis' */

    /* Logic: '<S61>/Logical Operator2' incorporates:
     *  Constant: '<S92>/Constant'
     *  Logic: '<S61>/Logical Operator1'
     *  Logic: '<S61>/Logical Operator3'
     *  RelationalOperator: '<S61>/Relational Operator2'
     *  RelationalOperator: '<S61>/Relational Operator3'
     *  UnitDelay: '<S93>/Unit Delay'
     */
    VeTPDR_P_CabOrShrdHtrTgtMet = ((!TPDR_ac_DW.UnitDelay_DSTATE_c) ||
        ((CeTPCR_e_EngOnly_Cond != rtb_TmpSignalConversionAtVeTPCR_e_PerWup) &&
         (rtb_TmpSignalConversionAtVeTPCR_e_PerWup !=
          CeTPCR_e_Both_Eng_N_Bat_Cond)));

    /* Switch: '<S86>/Switch1' incorporates:
     *  Constant: '<S66>/Calib'
     */
    if (KeTPDR_b_PerWupHtrToggle_MappingBattHtr)
    {
        /* Switch: '<S86>/Switch1' incorporates:
         *  Logic: '<S71>/Logical Operator'
         *  Logic: '<S71>/Logical Operator10'
         *  Logic: '<S71>/Logical Operator4'
         */
        VeTPDR_P_PerWupHtrMngmnt_EnblHtr1Tmr = ((!VeTPDR_P_BattHtrTgtMet) &&
            (!VeTPDR_P_LowBudget_BattHtrDisabled));
    }
    else
    {
        /* Switch: '<S86>/Switch1' incorporates:
         *  Logic: '<S71>/Logical Operator7'
         */
        VeTPDR_P_PerWupHtrMngmnt_EnblHtr1Tmr = !VeTPDR_P_CabOrShrdHtrTgtMet;
    }

    /* End of Switch: '<S86>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S62>/Hysteresis' */
    /* Switch: '<S96>/Switch1' incorporates:
     *  Constant: '<S96>/Constant Value'
     *  Constant: '<S97>/Calib'
     *  Constant: '<S98>/Calib'
     *  RelationalOperator: '<S96>/Greater  Than'
     *  RelationalOperator: '<S96>/Greater  Than1'
     *  Switch: '<S96>/Switch2'
     *  UnitDelay: '<S96>/Unit Delay'
     */
    if (VeTPDR_P_PriortzdNetHtrPwrBudget > KeTPDR_P_SupportBothHtrs_MaxHys)
    {
        TPDR_ac_DW.UnitDelay_DSTATE_p = true;
    }
    else
    {
        if (VeTPDR_P_PriortzdNetHtrPwrBudget < KeTPDR_P_SupportBothHtrs_MinHys)
        {
            /* Switch: '<S96>/Switch2' incorporates:
             *  Constant: '<S96>/Constant Value1'
             *  UnitDelay: '<S96>/Unit Delay'
             */
            TPDR_ac_DW.UnitDelay_DSTATE_p = false;
        }
    }

    /* End of Switch: '<S96>/Switch1' */
    /* End of Outputs for SubSystem: '<S62>/Hysteresis' */

    /* Logic: '<S62>/Logical Operator10' incorporates:
     *  UnitDelay: '<S96>/Unit Delay'
     */
    VeTPDR_P_UnabletoSupportBothHtrs = !TPDR_ac_DW.UnitDelay_DSTATE_p;

    /* Logic: '<S60>/Logical Operator9' */
    rtb_LogicalOperator11_f = ((VeTPDR_P_PerWupHtrMngmnt_EnblHtr1Tmr) &&
        (VeTPDR_P_UnabletoSupportBothHtrs));

    /* Outputs for Atomic SubSystem: '<S64>/EdgeRising5' */
    /* Logic: '<S76>/OR1' incorporates:
     *  UnitDelay: '<S76>/Unit Delay'
     */
    rtb_OR1_k = !TPDR_ac_DW.UnitDelay_DSTATE_gv;

    /* Update for UnitDelay: '<S76>/Unit Delay' */
    TPDR_ac_DW.UnitDelay_DSTATE_gv = rtb_LogicalOperator11_f;

    /* End of Outputs for SubSystem: '<S64>/EdgeRising5' */

    /* Outputs for Atomic SubSystem: '<S64>/EdgeFalling1' */
    /* Logic: '<S74>/AND' incorporates:
     *  Logic: '<S74>/OR1'
     *  UnitDelay: '<S74>/Unit Delay'
     */
    rtb_AND_d = ((!VeTPDR_P_PerWupHtrMngmnt_EnblHtr2) &&
                 (TPDR_ac_DW.UnitDelay_DSTATE_hx));

    /* Update for UnitDelay: '<S74>/Unit Delay' */
    TPDR_ac_DW.UnitDelay_DSTATE_hx = VeTPDR_P_PerWupHtrMngmnt_EnblHtr2;

    /* End of Outputs for SubSystem: '<S64>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S64>/EdgeRising5' */
    /* Logic: '<S64>/Logical Operator3' incorporates:
     *  Logic: '<S76>/AND'
     */
    rtb_OR1_k = ((rtb_LogicalOperator11_f && rtb_OR1_k) || rtb_AND_d);

    /* End of Outputs for SubSystem: '<S64>/EdgeRising5' */

    /* Outputs for Atomic SubSystem: '<S64>/EdgeRising' */
    /* Logic: '<S75>/OR1' incorporates:
     *  UnitDelay: '<S75>/Unit Delay'
     */
    rtb_AND_d = !TPDR_ac_DW.UnitDelay_DSTATE_h;

    /* Update for UnitDelay: '<S75>/Unit Delay' */
    TPDR_ac_DW.UnitDelay_DSTATE_h = rtb_OR1_k;

    /* Outputs for Atomic SubSystem: '<S64>/Htr1Tmr' */
    /* Switch: '<S77>/Switch1' incorporates:
     *  Constant: '<S67>/Calib'
     *  Constant: '<S77>/Constant Value3'
     *  Logic: '<S75>/AND'
     *  Logic: '<S77>/AND'
     *  RelationalOperator: '<S77>/Greater  Than'
     *  Switch: '<S77>/Switch2'
     *  UnitDelay: '<S77>/Unit Delay'
     */
    if (rtb_OR1_k && rtb_AND_d)
    {
        TPDR_ac_DW.UnitDelay_DSTATE_b = KeTPDR_t_Htr1EnableTmr_PerWup;
    }
    else
    {
        if (rtb_LogicalOperator11_f && (TPDR_ac_DW.UnitDelay_DSTATE_b > 0.0F))
        {
            /* UnitDelay: '<S77>/Unit Delay' incorporates:
             *  Constant: '<S77>/Constant Value1'
             *  Sum: '<S77>/Subtraction'
             *  Switch: '<S77>/Switch2'
             */
            TPDR_ac_DW.UnitDelay_DSTATE_b -= 1.0F;
        }
    }

    /* End of Switch: '<S77>/Switch1' */
    /* End of Outputs for SubSystem: '<S64>/EdgeRising' */

    /* Logic: '<S64>/Logical Operator10' incorporates:
     *  Constant: '<S77>/Constant Value2'
     *  RelationalOperator: '<S77>/Greater  Than1'
     *  UnitDelay: '<S77>/Unit Delay'
     */
    VeTPDR_P_PerWupHtrMngmnt_EnblHtr1 = (rtb_LogicalOperator11_f &&
        (TPDR_ac_DW.UnitDelay_DSTATE_b > 0.0F));

    /* End of Outputs for SubSystem: '<S64>/Htr1Tmr' */

    /* Switch: '<S87>/Switch1' incorporates:
     *  Constant: '<S66>/Calib'
     */
    if (KeTPDR_b_PerWupHtrToggle_MappingBattHtr)
    {
        /* Switch: '<S87>/Switch1' incorporates:
         *  Logic: '<S72>/Logical Operator15'
         */
        VeTPDR_P_PerWupHtrMngmnt_EnblHtr2Tmr = !VeTPDR_P_CabOrShrdHtrTgtMet;
    }
    else
    {
        /* Switch: '<S87>/Switch1' incorporates:
         *  Logic: '<S72>/Logical Operator11'
         *  Logic: '<S72>/Logical Operator12'
         *  Logic: '<S72>/Logical Operator13'
         */
        VeTPDR_P_PerWupHtrMngmnt_EnblHtr2Tmr = ((!VeTPDR_P_BattHtrTgtMet) &&
            (!VeTPDR_P_LowBudget_BattHtrDisabled));
    }

    /* End of Switch: '<S87>/Switch1' */

    /* Logic: '<S60>/Logical Operator8' */
    rtb_LogicalOperator11_f = ((VeTPDR_P_PerWupHtrMngmnt_EnblHtr2Tmr) &&
        (VeTPDR_P_UnabletoSupportBothHtrs));

    /* Outputs for Atomic SubSystem: '<S65>/EdgeRising4' */
    /* Logic: '<S80>/OR1' incorporates:
     *  UnitDelay: '<S80>/Unit Delay'
     */
    rtb_OR1_k = !TPDR_ac_DW.UnitDelay_DSTATE_o;

    /* Update for UnitDelay: '<S80>/Unit Delay' */
    TPDR_ac_DW.UnitDelay_DSTATE_o = rtb_LogicalOperator11_f;

    /* End of Outputs for SubSystem: '<S65>/EdgeRising4' */

    /* Outputs for Atomic SubSystem: '<S65>/EdgeFalling' */
    /* Logic: '<S78>/AND' incorporates:
     *  Delay: '<S65>/Delay1'
     *  Logic: '<S78>/OR1'
     *  UnitDelay: '<S78>/Unit Delay'
     */
    rtb_AND_d = ((!TPDR_ac_DW.Delay1_DSTATE) && (TPDR_ac_DW.UnitDelay_DSTATE_g));

    /* Update for UnitDelay: '<S78>/Unit Delay' incorporates:
     *  Delay: '<S65>/Delay1'
     */
    TPDR_ac_DW.UnitDelay_DSTATE_g = TPDR_ac_DW.Delay1_DSTATE;

    /* End of Outputs for SubSystem: '<S65>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S65>/EdgeRising4' */
    /* Logic: '<S65>/Logical Operator2' incorporates:
     *  Logic: '<S80>/AND'
     */
    rtb_OR1_k = ((rtb_LogicalOperator11_f && rtb_OR1_k) || rtb_AND_d);

    /* End of Outputs for SubSystem: '<S65>/EdgeRising4' */

    /* Outputs for Atomic SubSystem: '<S65>/EdgeRising1' */
    /* Logic: '<S79>/OR1' incorporates:
     *  UnitDelay: '<S79>/Unit Delay'
     */
    rtb_AND_d = !TPDR_ac_DW.UnitDelay_DSTATE_ly;

    /* Update for UnitDelay: '<S79>/Unit Delay' */
    TPDR_ac_DW.UnitDelay_DSTATE_ly = rtb_OR1_k;

    /* Outputs for Atomic SubSystem: '<S65>/Htr2Tmr' */
    /* Switch: '<S81>/Switch1' incorporates:
     *  Constant: '<S68>/Calib'
     *  Constant: '<S81>/Constant Value3'
     *  Logic: '<S79>/AND'
     *  Logic: '<S81>/AND'
     *  RelationalOperator: '<S81>/Greater  Than'
     *  Switch: '<S81>/Switch2'
     *  UnitDelay: '<S81>/Unit Delay'
     */
    if (rtb_OR1_k && rtb_AND_d)
    {
        TPDR_ac_DW.UnitDelay_DSTATE = KeTPDR_t_Htr2EnableTmr_PerWup;
    }
    else
    {
        if (rtb_LogicalOperator11_f && (TPDR_ac_DW.UnitDelay_DSTATE > 0.0F))
        {
            /* UnitDelay: '<S81>/Unit Delay' incorporates:
             *  Constant: '<S81>/Constant Value1'
             *  Sum: '<S81>/Subtraction'
             *  Switch: '<S81>/Switch2'
             */
            TPDR_ac_DW.UnitDelay_DSTATE -= 1.0F;
        }
    }

    /* End of Switch: '<S81>/Switch1' */
    /* End of Outputs for SubSystem: '<S65>/EdgeRising1' */

    /* Logic: '<S65>/Logical Operator11' incorporates:
     *  Constant: '<S81>/Constant Value2'
     *  RelationalOperator: '<S81>/Greater  Than1'
     *  UnitDelay: '<S81>/Unit Delay'
     */
    VeTPDR_P_PerWupHtrMngmnt_EnblHtr2 = (rtb_LogicalOperator11_f &&
        (TPDR_ac_DW.UnitDelay_DSTATE > 0.0F));

    /* End of Outputs for SubSystem: '<S65>/Htr2Tmr' */

    /* If: '<S60>/If' */
    if (VeTPDR_P_PerWupHtrMngmnt_EnblHtr1)
    {
        /* Outputs for IfAction SubSystem: '<S60>/RunHtr1' incorporates:
         *  ActionPort: '<S69>/Action Port'
         */
        /* Switch: '<S82>/Switch1' incorporates:
         *  Constant: '<S66>/Calib'
         *  Switch: '<S83>/Switch1'
         */
        if (KeTPDR_b_PerWupHtrToggle_MappingBattHtr)
        {
            /* Merge: '<S60>/Merge3' incorporates:
             *  Constant: '<S69>/Constant2'
             */
            VeTPDR_P_SharedHtrPwrRatLim_PerWupLowPwr = 0.0F;

            /* Merge: '<S60>/Merge2' */
            VeTPDR_P_BattSprtHtrPwrRatLim_PerWupLowPwr =
                VeTPDR_P_PriortzdNetHtrPwrBudget;
        }
        else
        {
            /* Merge: '<S60>/Merge3' */
            VeTPDR_P_SharedHtrPwrRatLim_PerWupLowPwr =
                VeTPDR_P_PriortzdNetHtrPwrBudget;

            /* Merge: '<S60>/Merge2' incorporates:
             *  Constant: '<S69>/Constant1'
             */
            VeTPDR_P_BattSprtHtrPwrRatLim_PerWupLowPwr = 0.0F;
        }

        /* End of Switch: '<S82>/Switch1' */

        /* Merge: '<S60>/Merge' incorporates:
         *  Constant: '<S69>/Constant3'
         *  SignalConversion generated from: '<S69>/Out1'
         */
        VeTPDR_P_debugHtrMngnmnt_Tmrbased = 1;

        /* End of Outputs for SubSystem: '<S60>/RunHtr1' */
    }
    else
    {
        if (VeTPDR_P_PerWupHtrMngmnt_EnblHtr2)
        {
            /* Outputs for IfAction SubSystem: '<S60>/RunHtr2' incorporates:
             *  ActionPort: '<S70>/Action Port'
             */
            /* Switch: '<S84>/Switch1' incorporates:
             *  Constant: '<S66>/Calib'
             *  Logic: '<S70>/Logical Operator'
             *  Switch: '<S85>/Switch1'
             */
            if (!KeTPDR_b_PerWupHtrToggle_MappingBattHtr)
            {
                /* Merge: '<S60>/Merge3' incorporates:
                 *  Constant: '<S70>/Constant2'
                 */
                VeTPDR_P_SharedHtrPwrRatLim_PerWupLowPwr = 0.0F;

                /* Merge: '<S60>/Merge2' */
                VeTPDR_P_BattSprtHtrPwrRatLim_PerWupLowPwr =
                    VeTPDR_P_PriortzdNetHtrPwrBudget;
            }
            else
            {
                /* Merge: '<S60>/Merge3' */
                VeTPDR_P_SharedHtrPwrRatLim_PerWupLowPwr =
                    VeTPDR_P_PriortzdNetHtrPwrBudget;

                /* Merge: '<S60>/Merge2' incorporates:
                 *  Constant: '<S70>/Constant1'
                 */
                VeTPDR_P_BattSprtHtrPwrRatLim_PerWupLowPwr = 0.0F;
            }

            /* End of Switch: '<S84>/Switch1' */

            /* Merge: '<S60>/Merge' incorporates:
             *  Constant: '<S70>/Constant3'
             *  SignalConversion generated from: '<S70>/Out1'
             */
            VeTPDR_P_debugHtrMngnmnt_Tmrbased = 2;

            /* End of Outputs for SubSystem: '<S60>/RunHtr2' */
        }
    }

    /* End of If: '<S60>/If' */

    /* Logic: '<S21>/Logical Operator10' incorporates:
     *  Constant: '<S59>/Calib'
     */
    VeTPDR_P_PerWup_LowBudget_EnbldHtrMngmnt =
        (((KeTPDR_b_EnblHtrMngnmnt_PerWup_DualHtrs) &&
          (VeTPDR_P_UnabletoSupportBothHtrs)) &&
         rtb_TmpSignalConversionAtVeTHMR_b_PerWup);

    /* Switch: '<S53>/Switch1' */
    if (VeTPDR_P_PerWup_LowBudget_EnbldHtrMngmnt)
    {
        /* Switch: '<S53>/Switch1' */
        VeTPDR_P_BattSprtHtrPwrRatLim_B4Hys =
            VeTPDR_P_BattSprtHtrPwrRatLim_PerWupLowPwr;
    }
    else
    {
        /* Switch: '<S53>/Switch1' */
        VeTPDR_P_BattSprtHtrPwrRatLim_B4Hys =
            VeTPDR_P_PriortzdSprtBattHtrPwrBudget_B4Hys;
    }

    /* End of Switch: '<S53>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S21>/Hysteresis' */
    /* Switch: '<S49>/Switch1' incorporates:
     *  Constant: '<S49>/Constant Value'
     *  Constant: '<S55>/Calib'
     *  Constant: '<S56>/Calib'
     *  RelationalOperator: '<S49>/Greater  Than'
     *  RelationalOperator: '<S49>/Greater  Than1'
     *  Switch: '<S49>/Switch2'
     *  UnitDelay: '<S49>/Unit Delay'
     */
    if (VeTPDR_P_BattSprtHtrPwrRatLim_B4Hys >
            KeTPDR_P_BattOnlyHeatPwr_MinLim_HtrOn)
    {
        TPDR_ac_DW.UnitDelay_DSTATE_lys = true;
    }
    else
    {
        if (VeTPDR_P_BattSprtHtrPwrRatLim_B4Hys <
                KeTPDR_P_BattOnlyHeatPwr_MinLim_HtrOff)
        {
            /* Switch: '<S49>/Switch2' incorporates:
             *  Constant: '<S49>/Constant Value1'
             *  UnitDelay: '<S49>/Unit Delay'
             */
            TPDR_ac_DW.UnitDelay_DSTATE_lys = false;
        }
    }

    /* End of Switch: '<S49>/Switch1' */
    /* End of Outputs for SubSystem: '<S21>/Hysteresis' */

    /* Logic: '<S21>/Logical Operator11' incorporates:
     *  UnitDelay: '<S49>/Unit Delay'
     */
    rtb_LogicalOperator11_f = !TPDR_ac_DW.UnitDelay_DSTATE_lys;

    /* Switch: '<S54>/Switch1' */
    if (VeTPDR_P_PerWup_LowBudget_EnbldHtrMngmnt)
    {
        /* Switch: '<S54>/Switch1' */
        VeTPDR_P_SharedHtrPwrRatLim_B4Hys =
            VeTPDR_P_SharedHtrPwrRatLim_PerWupLowPwr;
    }

    /* End of Switch: '<S54>/Switch1' */

    /* Switch: '<S21>/Switch1' */
    if (VeTPDR_b_FrontCabHtrSupportOnly)
    {
        /* Switch: '<S21>/Switch1' incorporates:
         *  Constant: '<S21>/Constant Value'
         */
        VeTPDR_P_RearHtrPowerBudget = 0.0F;
    }
    else
    {
        /* Switch: '<S21>/Switch1' */
        VeTPDR_P_RearHtrPowerBudget = VeTPDR_P_PriortzdRearHtrPwrBudget;
    }

    /* End of Switch: '<S21>/Switch1' */

    /* SignalConversion: '<S130>/TerminatorDecouplingSignalConv131' */
    rtb_TerminatorDecouplingSignalConv131 =
        rtb_TmpSignalConversionAtVeTHMR_b_RS_N_O;

    /* Update for Delay: '<S65>/Delay1' */
    TPDR_ac_DW.Delay1_DSTATE = VeTPDR_P_PerWupHtrMngmnt_EnblHtr1;

    /* Switch: '<S51>/Switch1' */
    if (rtb_LogicalOperator11_f)
    {
        /* Outport: '<Root>/VeTPDR_P_BattHeater_PwrBdgt_Avail' incorporates:
         *  Constant: '<S21>/Constant Value4'
         *  SignalConversion generated from: '<S1>/BatteryHeater_Allowed_PowAmount'
         */
        (void)Rte_Write_VeTPDR_P_BattHeater_PwrBdgt_Avail_Value(0.0F);
    }
    else
    {
        /* Outport: '<Root>/VeTPDR_P_BattHeater_PwrBdgt_Avail' incorporates:
         *  SignalConversion generated from: '<S1>/BatteryHeater_Allowed_PowAmount'
         */
        (void)Rte_Write_VeTPDR_P_BattHeater_PwrBdgt_Avail_Value
            (VeTPDR_P_BattSprtHtrPwrRatLim_B4Hys);
    }

    /* End of Switch: '<S51>/Switch1' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Overwrite_Block'
     */
    /* Switch: '<S5>/Switch1' incorporates:
     *  Constant: '<S8>/Calib'
     */
    if (KeTPDR_b_Rat_EAC_PwrBdgt_Avail_SD)
    {
        /* Outport: '<Root>/VeTPDR_P_Rat_EAC_PwrBdgt_Avail' incorporates:
         *  Constant: '<S7>/Calib'
         *  SignalConversion generated from: '<S1>/Rat_EAC_PwrBdgt_Avail'
         */
        (void)Rte_Write_VeTPDR_P_Rat_EAC_PwrBdgt_Avail_Value
            (KeTPDR_P_Rat_EAC_PwrBdgt_Avail_D);
    }
    else
    {
        /* Outport: '<Root>/VeTPDR_P_Rat_EAC_PwrBdgt_Avail' incorporates:
         *  SignalConversion generated from: '<S1>/Rat_EAC_PwrBdgt_Avail'
         */
        (void)Rte_Write_VeTPDR_P_Rat_EAC_PwrBdgt_Avail_Value
            (VeTPDR_P_CompressorPowerBudget);
    }

    /* End of Switch: '<S5>/Switch1' */

    /* Switch: '<S6>/Switch1' incorporates:
     *  Constant: '<S10>/Calib'
     */
    if (KeTPDR_b_RearHtr_PwrBdgt_Avail_SD)
    {
        /* Outport: '<Root>/VeTPDR_P_RearHtr_PwrBdgt_Avail' incorporates:
         *  Constant: '<S9>/Calib'
         *  SignalConversion generated from: '<S1>/RearHtr_PwrBdgt_Avail'
         */
        (void)Rte_Write_VeTPDR_P_RearHtr_PwrBdgt_Avail_Value
            (KeTPDR_P_RearHtr_PwrBdgt_Avail_D);
    }
    else
    {
        /* Outport: '<Root>/VeTPDR_P_RearHtr_PwrBdgt_Avail' incorporates:
         *  SignalConversion generated from: '<S1>/RearHtr_PwrBdgt_Avail'
         */
        (void)Rte_Write_VeTPDR_P_RearHtr_PwrBdgt_Avail_Value
            (VeTPDR_P_RearHtrPowerBudget);
    }

    /* End of Switch: '<S6>/Switch1' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Power_Distribution'
     */
    /* Switch: '<S52>/Switch1' */
    if (rtb_LogicalOperator11_f)
    {
        /* Outport: '<Root>/VeTPDR_P_CabinHeater_PwrBdgt_Avail' incorporates:
         *  SignalConversion generated from: '<S1>/SharedHeater_Allowed_PowAmount'
         */
        (void)Rte_Write_VeTPDR_P_CabinHeater_PwrBdgt_Avail_Value
            (VeTPDR_P_PriortzdNetHtrPwrBudget);
    }
    else
    {
        /* Outport: '<Root>/VeTPDR_P_CabinHeater_PwrBdgt_Avail' incorporates:
         *  SignalConversion generated from: '<S1>/SharedHeater_Allowed_PowAmount'
         */
        (void)Rte_Write_VeTPDR_P_CabinHeater_PwrBdgt_Avail_Value
            (VeTPDR_P_SharedHtrPwrRatLim_B4Hys);
    }

    /* End of Switch: '<S52>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
}

/* Output function */
FUNC(void, TPDR_CODE) TPDR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/TPDR_PwrOn'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S141>/VeTPDR_P_Rat_EAC_PwrBdgt_Avail_Out_Init' */
    TPDR_ac_B.OutportBufferForVeTPDR_P_Rat_EAC_PwrBdgt = TPDR_ac_ConstB.Const1;

    /* SignalConversion generated from: '<S141>/VeTPDR_P_CabinHeater_PwrBdgt_Avail_Out_Init' */
    TPDR_ac_B.OutportBufferForVeTPDR_P_CabinHeater_Pwr = TPDR_ac_ConstB.Const2;

    /* SignalConversion generated from: '<S141>/VeTPDR_P_BattHeater_PwrBdgt_Avail_Out_Init' */
    TPDR_ac_B.OutportBufferForVeTPDR_P_BattHeater_PwrB = TPDR_ac_ConstB.Const3;

    /* SignalConversion generated from: '<S141>/VeTPDR_P_RearHtr_PwrBdgt_Avail_Out_Init' */
    TPDR_ac_B.OutportBufferForVeTPDR_P_RearHtr_PwrBdgt = TPDR_ac_ConstB.Const4;

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeTPDR_P_BattHeater_PwrBdgt_Avail' incorporates:
     *  SignalConversion generated from: '<S2>/VeTPDR_P_BattHeater_PwrBdgt_Avail_Out_Init'
     */
    (void)Rte_Write_VeTPDR_P_BattHeater_PwrBdgt_Avail_Value
        (TPDR_ac_B.OutportBufferForVeTPDR_P_BattHeater_PwrB);

    /* Outport: '<Root>/VeTPDR_P_CabinHeater_PwrBdgt_Avail' incorporates:
     *  SignalConversion generated from: '<S2>/VeTPDR_P_CabinHeater_PwrBdgt_Avail_Out_Init'
     */
    (void)Rte_Write_VeTPDR_P_CabinHeater_PwrBdgt_Avail_Value
        (TPDR_ac_B.OutportBufferForVeTPDR_P_CabinHeater_Pwr);

    /* Outport: '<Root>/VeTPDR_P_Rat_EAC_PwrBdgt_Avail' incorporates:
     *  SignalConversion generated from: '<S2>/VeTPDR_P_Rat_EAC_PwrBdgt_Avail_Out_Init'
     */
    (void)Rte_Write_VeTPDR_P_Rat_EAC_PwrBdgt_Avail_Value
        (TPDR_ac_B.OutportBufferForVeTPDR_P_Rat_EAC_PwrBdgt);

    /* Outport: '<Root>/VeTPDR_P_RearHtr_PwrBdgt_Avail' incorporates:
     *  SignalConversion generated from: '<S2>/VeTPDR_P_RearHtr_PwrBdgt_Avail_Out_Init'
     */
    (void)Rte_Write_VeTPDR_P_RearHtr_PwrBdgt_Avail_Value
        (TPDR_ac_B.OutportBufferForVeTPDR_P_RearHtr_PwrBdgt);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, TPDR_CODE) TPDR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/TPDR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S141>/VeTPDR_P_Rat_EAC_PwrBdgt_Avail_Out_Init' */
    TPDR_ac_B.OutportBufferForVeTPDR_P_Rat_EAC_PwrBdgt = TPDR_ac_ConstB.Const1;

    /* SystemInitialize for SignalConversion generated from: '<S141>/VeTPDR_P_CabinHeater_PwrBdgt_Avail_Out_Init' */
    TPDR_ac_B.OutportBufferForVeTPDR_P_CabinHeater_Pwr = TPDR_ac_ConstB.Const2;

    /* SystemInitialize for SignalConversion generated from: '<S141>/VeTPDR_P_BattHeater_PwrBdgt_Avail_Out_Init' */
    TPDR_ac_B.OutportBufferForVeTPDR_P_BattHeater_PwrB = TPDR_ac_ConstB.Const3;

    /* SystemInitialize for SignalConversion generated from: '<S141>/VeTPDR_P_RearHtr_PwrBdgt_Avail_Out_Init' */
    TPDR_ac_B.OutportBufferForVeTPDR_P_RearHtr_PwrBdgt = TPDR_ac_ConstB.Const4;

    /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/TPDR_MedTEH'
     */
    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Power_Distribution'
     */
    /* SystemInitialize for Merge: '<S60>/Merge' */
    VeTPDR_P_debugHtrMngnmnt_Tmrbased = 0;

    /* SystemInitialize for Merge: '<S60>/Merge2' */
    VeTPDR_P_BattSprtHtrPwrRatLim_PerWupLowPwr = 0.0F;

    /* SystemInitialize for Merge: '<S60>/Merge3' */
    VeTPDR_P_SharedHtrPwrRatLim_PerWupLowPwr = 0.0F;

    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

    /* SystemInitialize for Outport: '<Root>/VeTPDR_P_Rat_EAC_PwrBdgt_Avail' incorporates:
     *  Merge: '<Root>/Merge_Outport_1'
     */
    (void)Rte_Write_VeTPDR_P_Rat_EAC_PwrBdgt_Avail_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeTPDR_P_CabinHeater_PwrBdgt_Avail' incorporates:
     *  Merge: '<Root>/Merge_Outport_2'
     */
    (void)Rte_Write_VeTPDR_P_CabinHeater_PwrBdgt_Avail_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeTPDR_P_BattHeater_PwrBdgt_Avail' incorporates:
     *  Merge: '<Root>/Merge_Outport_3'
     */
    (void)Rte_Write_VeTPDR_P_BattHeater_PwrBdgt_Avail_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeTPDR_P_RearHtr_PwrBdgt_Avail' incorporates:
     *  Merge: '<Root>/Merge_Outport_4'
     */
    (void)Rte_Write_VeTPDR_P_RearHtr_PwrBdgt_Avail_Value(0.0F);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
