/*
 * File: VTXR_ac.c
 *
 * Code generated for Simulink model 'VTXR_ac'.
 *
 * Model version                  : 9.228
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 20:08:58 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "VTXR_ac.h"

/* Named constants for Chart: '<S21>/VTXC_StateMachine' */
#if Rte_SysCon_Variant_VTXR_HMIIntrfce || Rte_SysCon_Variant_VTXR_NoHMIIntrfce
#define VTXR_ac_IN_DefaultMd           ((uint8)1U)
#endif

#if Rte_SysCon_Variant_VTXR_HMIIntrfce || Rte_SysCon_Variant_VTXR_NoHMIIntrfce
#define VTXR_ac_IN_ElectricMd          ((uint8)2U)
#endif

#if Rte_SysCon_Variant_VTXR_HMIIntrfce
#define VTXR_ac_IN_HybridMd            ((uint8)3U)
#endif

/* Named constants for Chart: '<S73>/VTXC_StateMachine' */
#if Rte_SysCon_Variant_VTXR_NoHMIIntrfce
#define VTXR_ac_IN_GenMd               ((uint8)3U)
#endif

#if Rte_SysCon_Variant_VTXR_NoHMIIntrfce
#define VTXR_ac_IN_HybridMd_a          ((uint8)4U)
#endif

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_VTXR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_VTXR_NoHMIIntrfce

static volatile CONST(float32, VTXR_VAR_INIT) HeVTXR_t_MedTEB_dT = 0.01F;/* Referenced by: '<S167>/Calib' */

#endif

#if Rte_SysCon_Variant_VTXR_HMIIntrfce

static volatile CONST(float32, VTXR_VAR_INIT) KeVTXR_Pct_MinSOCDelta4HybMd =
    5.0F;                              /* Referenced by: '<S59>/Calib' */

#endif

static volatile CONST(float32, VTXR_VAR_INIT) KeVTXR_Pct_MinSOCDflt = 20.0F;/* Referenced by:
                                                                      * '<S180>/Calib'
                                                                      * '<S191>/Calib'
                                                                      * '<S192>/Calib'
                                                                      * '<S193>/Calib'
                                                                      * '<S194>/Calib'
                                                                      */

#if Rte_SysCon_Variant_VTXR_EnblMinSOCInpt

static volatile CONST(float32, VTXR_VAR_INIT) KeVTXR_Pct_MinSOCDfltNotInPark =
    0.0F;                              /* Referenced by: '<S183>/Calib' */

#endif

#if !Rte_SysCon_Variant_VTXR_HMIIntrfce || Rte_SysCon_Variant_VTXR_NoHMIIntrfce

static volatile CONST(float32, VTXR_VAR_INIT) KeVTXR_Pct_TgtSOCDflt = 20.0F;/* Referenced by:
                                                                      * '<S156>/Calib'
                                                                      * '<S97>/Calib'
                                                                      * '<S101>/Calib'
                                                                      * '<S154>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_VTXR_NoHMIIntrfce

static volatile CONST(float32, VTXR_VAR_INIT) KeVTXR_Pct_TgtSOCGenMd = 60.0F;/* Referenced by: '<S134>/Calib' */

#endif

#if Rte_SysCon_Variant_VTXR_HMIIntrfce

static volatile CONST(float32, VTXR_VAR_INIT) KeVTXR_Pct_TgtSOCHybMd = 30.0F;/* Referenced by: '<S65>/Calib' */

#endif

#if Rte_SysCon_Variant_VTXR_EnblMinSOCInpt || Rte_SysCon_Variant_VTXR_HMIIntrfce || Rte_SysCon_Variant_VTXR_NoHMIIntrfce || Rte_SysCon_Variant_VTXR_PowPanelEqupd

static volatile CONST(boolean, VTXR_VAR_INIT) KeVTXR_b_ByPassPRNDL = 0;/* Referenced by:
                                                                      * '<S184>/Calib'
                                                                      * '<S200>/Calib'
                                                                      * '<S212>/Calib'
                                                                      * '<S217>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_VTXR_NoHMIIntrfce

static volatile CONST(boolean, VTXR_VAR_INIT) KeVTXR_b_DsblHybBttn = 0;/* Referenced by: '<S213>/Calib' */

#endif

#if Rte_SysCon_Variant_VTXR_EnblMinSOCInpt || Rte_SysCon_Variant_VTXR_HMIIntrfce || Rte_SysCon_Variant_VTXR_PowPanelEqupd

static volatile CONST(boolean, VTXR_VAR_INIT) KeVTXR_b_UseV2HParam = 0;/* Referenced by:
                                                                      * '<S185>/Calib'
                                                                      * '<S201>/Calib'
                                                                      * '<S218>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_VTXR_EnblMinSOCInpt || Rte_SysCon_Variant_VTXR_HMIIntrfce || Rte_SysCon_Variant_VTXR_PowPanelEqupd

static volatile CONST(boolean, VTXR_VAR_INIT) KeVTXR_b_UseV2LParam = 0;/* Referenced by:
                                                                      * '<S186>/Calib'
                                                                      * '<S202>/Calib'
                                                                      * '<S219>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_VTXR_EnblMinSOCInpt || Rte_SysCon_Variant_VTXR_HMIIntrfce || Rte_SysCon_Variant_VTXR_PowPanelEqupd

static volatile CONST(boolean, VTXR_VAR_INIT) KeVTXR_b_UseV2VParam = 0;/* Referenced by:
                                                                      * '<S187>/Calib'
                                                                      * '<S203>/Calib'
                                                                      * '<S220>/Calib'
                                                                      */

#endif

#if !Rte_SysCon_Variant_VTXR_HMIIntrfce && !Rte_SysCon_Variant_VTXR_NoHMIIntrfce

static volatile CONST(TeVTXR_e_PowerPanelMd, VTXR_VAR_INIT) KeVTXR_e_PowPanlMdNF
    = CeVTXR_e_ElectricMd;             /* Referenced by: '<S157>/Calib' */

#endif

#if Rte_SysCon_Variant_VTXR_HMIIntrfce || Rte_SysCon_Variant_VTXR_NoHMIIntrfce

static volatile CONST(uint32, VTXR_VAR_INIT) KeVTXR_g_SelStrtDsAllwRsn = 4688U;/* Referenced by:
                                                                      * '<S49>/Calib'
                                                                      * '<S114>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_VTXR_NoHMIIntrfce

static volatile CONST(float32, VTXR_VAR_INIT) KeVTXR_t_MaxTm4LEDBlink = 5.0F;/* Referenced by: '<S168>/Calib' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_VTXR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_VTXR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(float32, VTXR_VAR_INIT) VeVTXR_Pct_HVBattMinSOC_DS;/* '<Root>/DSM_11' */
static VAR(float32, VTXR_VAR_INIT) VeVTXR_Pct_HVBattTgtSOC_DS;/* '<Root>/DSM_3' */
static VAR(boolean, VTXR_VAR_INIT) VeVTXR_b_BlinkDtct_DS;/* '<Root>/DSM_8' */
static VAR(boolean, VTXR_VAR_INIT) VeVTXR_b_BlinkLED_DS;/* '<Root>/DSM_4' */
static VAR(boolean, VTXR_VAR_INIT) VeVTXR_b_ButtnPressd_DS;/* '<Root>/DSM_9' */

#if Rte_SysCon_Variant_VTXR_HMIIntrfce || Rte_SysCon_Variant_VTXR_NoHMIIntrfce

static VAR(boolean, VTXR_VAR_INIT) VeVTXR_b_HybButtnONFnl;/* '<S3>/VarSS_HybBtnProc' */

#endif

#if Rte_SysCon_Variant_VTXR_PowPanelEqupd

static VAR(boolean, VTXR_VAR_INIT) VeVTXR_b_PowPanelActvIN;/* '<S214>/AND1' */

#endif

static VAR(boolean, VTXR_VAR_INIT) VeVTXR_b_RemStpTrg_DS;/* '<Root>/DSM_10' */
static VAR(TeAECR_e_LEDCmd, VTXR_VAR_INIT) VeVTXR_e_HybButtonLEDSt_DS;/* '<Root>/DSM_7' */

#if Rte_SysCon_Variant_VTXR_NoHMIIntrfce

static VAR(TeBRKR_e_AeCoastSwitchStat, VTXR_VAR_INIT) VeVTXR_e_HybButtonStatFnl;/* '<S196>/Switch' */

#endif

static VAR(TeVTXR_e_PowerPanelMd, VTXR_VAR_INIT) VeVTXR_e_PowerPanelMd_DS;/* '<Root>/DSM_2' */

#if Rte_SysCon_Variant_VTXR_HMIIntrfce || Rte_SysCon_Variant_VTXR_NoHMIIntrfce

static VAR(TeVTXR_e_STMTrigger, VTXR_VAR_INIT) VeVTXR_e_STMTrigger_DS;/* '<Root>/DSM_1' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_VTXR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_VTXR
#include "MemMap.h"

CONST(ConstB_VTXR_ac_T, VTXR_VAR_INIT) VTXR_ac_ConstB =
{
    CeVTXR_e_DefaultMd,                /* '<S225>/Const1' */
    CeAECR_e_LEDOff                    /* '<S225>/Const2' */
};

#define STOP_SEC_CONST_UNSPECIFIED_VTXR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_VTXR
#include "MemMap.h"

VAR(B_VTXR_ac_T, VTXR_VAR_INIT) VTXR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_VTXR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_VTXR
#include "MemMap.h"

VAR(DW_VTXR_ac_T, VTXR_VAR_INIT) VTXR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_VTXR
#include "MemMap.h"
#if Rte_SysCon_Variant_VTXR_EnblMinSOCInpt

static FUNC(void, VTXR_CODE_LOCAL) VTXR_ac_V2H_MiN_SOC_Slct(VAR(float32,
    AUTOMATIC) rtu_SOC_IN, VAR(boolean, AUTOMATIC) rtu_FltIn, P2VAR(float32,
    AUTOMATIC, VTXR_VAR_INIT) rty_SOC_Out);

#endif

#if Rte_SysCon_Variant_VTXR_HMIIntrfce

static FUNC(void, VTXR_CODE_LOCAL) VTXR_ac_V2H_Mode_Req_Slct(VAR(boolean,
    AUTOMATIC) rtu_Md_IN, VAR(boolean, AUTOMATIC) rtu_FltIn, P2VAR(boolean,
    AUTOMATIC, VTXR_VAR_INIT) rty_Md_Out);

#endif

#if Rte_SysCon_Variant_VTXR_HMIIntrfce

static FUNC(void, VTXR_CODE_LOCAL) VTXR_ac_DfltMdEnt(void);

#endif

#if Rte_SysCon_Variant_VTXR_HMIIntrfce

static FUNC(void, VTXR_CODE_LOCAL) VTXR_ac_DfltMdDur(VAR(TeESSR_e_EngStartStopSt,
    AUTOMATIC) rtu_EssSt, VAR(boolean, AUTOMATIC) rtu_PPanlActv, VAR(boolean,
    AUTOMATIC) rtu_HybButtonON, VAR(boolean, AUTOMATIC) rtu_StrtDsAllw, VAR
    (boolean, AUTOMATIC) rtu_PSA);

#endif

#if Rte_SysCon_Variant_VTXR_HMIIntrfce

static FUNC(void, VTXR_CODE_LOCAL) VTXR_ac_ElecMdEnt(void);

#endif

#if Rte_SysCon_Variant_VTXR_HMIIntrfce || Rte_SysCon_Variant_VTXR_NoHMIIntrfce

static FUNC(void, VTXR_CODE_LOCAL) VTXR_ac_DftlMd(void);

#endif

#if Rte_SysCon_Variant_VTXR_HMIIntrfce || Rte_SysCon_Variant_VTXR_NoHMIIntrfce

static FUNC(void, VTXR_CODE_LOCAL) VTXR_ac_HybMdEntry(void);

#endif

#if Rte_SysCon_Variant_VTXR_HMIIntrfce

static FUNC(void, VTXR_CODE_LOCAL) VTXR_ac_ElectricMdDur(VAR
    (TeESSR_e_EngStartStopSt, AUTOMATIC) rtu_EssSt, VAR(boolean, AUTOMATIC)
    rtu_PPanelActv, VAR(boolean, AUTOMATIC) rtu_HybButtonON, VAR(boolean,
    AUTOMATIC) rtu_StrtDsAllw, VAR(boolean, AUTOMATIC) rtu_PSA);

#endif

#if Rte_SysCon_Variant_VTXR_HMIIntrfce

static FUNC(void, VTXR_CODE_LOCAL) VTXR_ac_HybridMdEnt(void);

#endif

#if Rte_SysCon_Variant_VTXR_HMIIntrfce

static FUNC(void, VTXR_CODE_LOCAL) VTXR_ac_HybridMdDur(VAR
    (TeESSR_e_EngStartStopSt, AUTOMATIC) rtu_EssSt, VAR(boolean, AUTOMATIC)
    rtu_PPanelActv, VAR(boolean, AUTOMATIC) rtu_HybButtonON, VAR(boolean,
    AUTOMATIC) rtu_StrtDsAllw, VAR(boolean, AUTOMATIC) rtu_PSA, VAR(float32,
    AUTOMATIC) rtu_HVBattSOC);

#endif

#if Rte_SysCon_Variant_VTXR_HMIIntrfce || Rte_SysCon_Variant_VTXR_NoHMIIntrfce

static FUNC(void, VTXR_CODE_LOCAL) VTXR_ac_FaultChks(VAR(uint32, AUTOMATIC)
    rtu_StrtDisAllwRsn, P2VAR(B_FaultChks_VTXR_ac_T, AUTOMATIC, VTXR_VAR_INIT)
    localB);

#endif

#if Rte_SysCon_Variant_VTXR_NoHMIIntrfce

static FUNC(void, VTXR_CODE_LOCAL) VTXR_ac_DfltMdEnt_n(void);

#endif

#if Rte_SysCon_Variant_VTXR_NoHMIIntrfce

static FUNC(void, VTXR_CODE_LOCAL) VTXR_ac_SetBlink(VAR(boolean, AUTOMATIC)
    rtu_Enable);

#endif

#if Rte_SysCon_Variant_VTXR_NoHMIIntrfce

static FUNC(void, VTXR_CODE_LOCAL) VTXR_ac_DfltMdDur_b(VAR
    (TeESSR_e_EngStartStopSt, AUTOMATIC) rtu_EssSt, VAR(boolean, AUTOMATIC)
    rtu_PPanlActv, VAR(boolean, AUTOMATIC) rtu_HybButtonON, VAR(boolean,
    AUTOMATIC) rtu_StrtDsAllw, VAR(boolean, AUTOMATIC) rtu_PSA, P2VAR
    (DW_DfltMdDur_VTXR_ac_f_T, AUTOMATIC, VTXR_VAR_INIT) localDW);

#endif

#if Rte_SysCon_Variant_VTXR_NoHMIIntrfce

static FUNC(void, VTXR_CODE_LOCAL) VTXR_ac_ElecMdEnt_c(void);

#endif

#if Rte_SysCon_Variant_VTXR_NoHMIIntrfce

static FUNC(void, VTXR_CODE_LOCAL) VTXR_ac_ElectricMdDur_b(VAR
    (TeESSR_e_EngStartStopSt, AUTOMATIC) rtu_EssSt, VAR(boolean, AUTOMATIC)
    rtu_PPanelActv, VAR(boolean, AUTOMATIC) rtu_HybButtonON, VAR(boolean,
    AUTOMATIC) rtu_StrtDsAllw, VAR(boolean, AUTOMATIC) rtu_PSA, P2VAR
    (DW_ElectricMdDur_VTXR_ac_l_T, AUTOMATIC, VTXR_VAR_INIT) localDW);

#endif

#if Rte_SysCon_Variant_VTXR_NoHMIIntrfce

static FUNC(void, VTXR_CODE_LOCAL) VTXR_ac_HybridMdEnt_c(void);

#endif

#if Rte_SysCon_Variant_VTXR_NoHMIIntrfce

static FUNC(void, VTXR_CODE_LOCAL) VTXR_ac_DfltMd(void);

#endif

#if Rte_SysCon_Variant_VTXR_NoHMIIntrfce

static FUNC(void, VTXR_CODE_LOCAL) VTXR_ac_ElecMd(void);

#endif

#if Rte_SysCon_Variant_VTXR_NoHMIIntrfce

static FUNC(void, VTXR_CODE_LOCAL) VTXR_ac_Do_Nothing(void);

#endif

#if Rte_SysCon_Variant_VTXR_NoHMIIntrfce

static FUNC(void, VTXR_CODE_LOCAL) VTXR_ac_HybridMdDur_f(VAR
    (TeESSR_e_EngStartStopSt, AUTOMATIC) rtu_EssSt, VAR(boolean, AUTOMATIC)
    rtu_PPanelActv, VAR(boolean, AUTOMATIC) rtu_HybButtonON, VAR(boolean,
    AUTOMATIC) rtu_StrtDsAllw, VAR(boolean, AUTOMATIC) rtu_PSA, P2VAR
    (DW_HybridMdDur_VTXR_ac_c_T, AUTOMATIC, VTXR_VAR_INIT) localDW);

#endif

#if Rte_SysCon_Variant_VTXR_NoHMIIntrfce

static FUNC(void, VTXR_CODE_LOCAL) VTXR_ac_GenMdEnt(void);

#endif

#if Rte_SysCon_Variant_VTXR_NoHMIIntrfce

static FUNC(void, VTXR_CODE_LOCAL) VTXR_ac_GenMdDuring(VAR
    (TeESSR_e_EngStartStopSt, AUTOMATIC) rtu_EssSt, VAR(boolean, AUTOMATIC)
    rtu_PPanelActv, VAR(boolean, AUTOMATIC) rtu_HybButtonON, VAR(boolean,
    AUTOMATIC) rtu_StrtDsAllw, VAR(boolean, AUTOMATIC) rtu_PSA, P2VAR
    (DW_GenMdDuring_VTXR_ac_T, AUTOMATIC, VTXR_VAR_INIT) localDW);

#endif

/*
 * Output and update for action system:
 *    '<S179>/V2H_MiN_SOC_Slct'
 *    '<S179>/V2L_MiN_SOC_Slct'
 *    '<S179>/V2V_MiN_SOC_Slct'
 */
#if Rte_SysCon_Variant_VTXR_EnblMinSOCInpt

static FUNC(void, VTXR_CODE_LOCAL) VTXR_ac_V2H_MiN_SOC_Slct(VAR(float32,
    AUTOMATIC) rtu_SOC_IN, VAR(boolean, AUTOMATIC) rtu_FltIn, P2VAR(float32,
    AUTOMATIC, VTXR_VAR_INIT) rty_SOC_Out)
{
    /* Switch: '<S188>/Switch' incorporates:
     *  Constant: '<S192>/Calib'
     */
    if (rtu_FltIn)
    {
        *rty_SOC_Out = KeVTXR_Pct_MinSOCDflt;
    }
    else
    {
        *rty_SOC_Out = rtu_SOC_IN;
    }

    /* End of Switch: '<S188>/Switch' */
}

#endif

/*
 * Output and update for action system:
 *    '<S195>/V2H_Mode_Req_Slct'
 *    '<S195>/V2L_Mode_Req_Slct'
 *    '<S195>/V2V_Mode_Req_Slct'
 */
#if Rte_SysCon_Variant_VTXR_HMIIntrfce

static FUNC(void, VTXR_CODE_LOCAL) VTXR_ac_V2H_Mode_Req_Slct(VAR(boolean,
    AUTOMATIC) rtu_Md_IN, VAR(boolean, AUTOMATIC) rtu_FltIn, P2VAR(boolean,
    AUTOMATIC, VTXR_VAR_INIT) rty_Md_Out)
{
    /* Switch: '<S204>/Switch' */
    *rty_Md_Out = ((!rtu_FltIn) && rtu_Md_IN);
}

#endif

/* Output and update for function-call system: '<S17>/DfltMdEnt' */
#if Rte_SysCon_Variant_VTXR_HMIIntrfce

static FUNC(void, VTXR_CODE_LOCAL) VTXR_ac_DfltMdEnt(void)
{
    /* DataStoreWrite: '<S23>/Data Store Write2' incorporates:
     *  Constant: '<S36>/Constant'
     */
    VeVTXR_e_PowerPanelMd_DS = CeVTXR_e_DefaultMd;

    /* DataStoreWrite: '<S23>/Data Store Write1' incorporates:
     *  DataStoreRead: '<S23>/Data Store Read'
     */
    VeVTXR_Pct_HVBattTgtSOC_DS = VeVTXR_Pct_HVBattMinSOC_DS;
}

#endif

/* Output and update for function-call system: '<S17>/DfltMdDur' */
#if Rte_SysCon_Variant_VTXR_HMIIntrfce

static FUNC(void, VTXR_CODE_LOCAL) VTXR_ac_DfltMdDur(VAR(TeESSR_e_EngStartStopSt,
    AUTOMATIC) rtu_EssSt, VAR(boolean, AUTOMATIC) rtu_PPanlActv, VAR(boolean,
    AUTOMATIC) rtu_HybButtonON, VAR(boolean, AUTOMATIC) rtu_StrtDsAllw, VAR
    (boolean, AUTOMATIC) rtu_PSA)
{
    boolean tmp;

    /* Outputs for IfAction SubSystem: '<S22>/Do_Nothing' incorporates:
     *  ActionPort: '<S24>/Action Port'
     */
    /* If: '<S22>/StateTransition' incorporates:
     *  Constant: '<S31>/Constant'
     *  Constant: '<S34>/Constant'
     *  Constant: '<S35>/Constant'
     *  Logic: '<S24>/Logical6'
     *  Logic: '<S25>/AND'
     *  Logic: '<S25>/AND1'
     *  Logic: '<S25>/AND2'
     *  Logic: '<S28>/AND'
     *  Logic: '<S28>/AND1'
     *  Logic: '<S28>/AND2'
     *  Logic: '<S28>/AND3'
     *  RelationalOperator: '<S25>/Greater Than or Equal '
     *  RelationalOperator: '<S28>/Greater Than or Equal '
     *  RelationalOperator: '<S28>/Greater Than or Equal 1'
     */
    tmp = !rtu_HybButtonON;

    /* End of Outputs for SubSystem: '<S22>/Do_Nothing' */
    if ((rtu_PPanlActv && (tmp || rtu_StrtDsAllw)) && (CeESSR_e_EngOff ==
            ((uint32)rtu_EssSt)))
    {
        /* Outputs for IfAction SubSystem: '<S22>/ElectricMd' incorporates:
         *  ActionPort: '<S26>/Action Port'
         */
        /* DataStoreWrite: '<S26>/Data Store Write1' incorporates:
         *  Constant: '<S26>/Constant'
         */
        VeVTXR_b_RemStpTrg_DS = false;

        /* DataStoreWrite: '<S26>/Data Store Write' incorporates:
         *  Constant: '<S32>/Constant'
         */
        VeVTXR_e_STMTrigger_DS = CeVTXR_e_ElecMdTrg;

        /* End of Outputs for SubSystem: '<S22>/ElectricMd' */
    }
    else if ((rtu_PPanlActv && ((rtu_HybButtonON && (!rtu_StrtDsAllw)) &&
                                ((CeESSR_e_EngRunning == ((uint32)rtu_EssSt)) ||
                (((uint32)rtu_EssSt) == CeESSR_e_EngOff)))) && rtu_PSA)
    {
        /* Outputs for IfAction SubSystem: '<S22>/HybMd' incorporates:
         *  ActionPort: '<S27>/Action Port'
         */
        /* DataStoreWrite: '<S27>/Data Store Write1' incorporates:
         *  Constant: '<S27>/Constant'
         */
        VeVTXR_b_RemStpTrg_DS = false;

        /* DataStoreWrite: '<S27>/Data Store Write' incorporates:
         *  Constant: '<S33>/Constant'
         */
        VeVTXR_e_STMTrigger_DS = CeVTXR_e_HybMdTrg;

        /* End of Outputs for SubSystem: '<S22>/HybMd' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S22>/Do_Nothing' incorporates:
         *  ActionPort: '<S24>/Action Port'
         */
        /* Logic: '<S24>/Logical2' incorporates:
         *  Constant: '<S30>/Constant'
         *  DataStoreWrite: '<S24>/Data Store Write1'
         *  RelationalOperator: '<S24>/Greater Than or Equal 1'
         */
        VeVTXR_b_RemStpTrg_DS = (((tmp && rtu_PSA) && (((uint32)rtu_EssSt) !=
            CeESSR_e_EngOff)) && rtu_PPanlActv);

        /* DataStoreWrite: '<S24>/Data Store Write' incorporates:
         *  Constant: '<S29>/Constant'
         */
        VeVTXR_e_STMTrigger_DS = CeVTXR_e_InactiveTrg;

        /* DataStoreWrite: '<S24>/Data Store Write2' incorporates:
         *  DataStoreRead: '<S24>/Data Store Read'
         */
        VeVTXR_Pct_HVBattTgtSOC_DS = VeVTXR_Pct_HVBattMinSOC_DS;

        /* End of Outputs for SubSystem: '<S22>/Do_Nothing' */
    }

    /* End of If: '<S22>/StateTransition' */
}

#endif

/* Output and update for function-call system: '<S18>/ElecMdEnt' */
#if Rte_SysCon_Variant_VTXR_HMIIntrfce

static FUNC(void, VTXR_CODE_LOCAL) VTXR_ac_ElecMdEnt(void)
{
    /* DataStoreWrite: '<S37>/Data Store Write2' incorporates:
     *  Constant: '<S39>/Constant'
     */
    VeVTXR_e_PowerPanelMd_DS = CeVTXR_e_ElectricMd;

    /* DataStoreWrite: '<S37>/Data Store Write1' incorporates:
     *  DataStoreRead: '<S37>/Data Store Read'
     */
    VeVTXR_Pct_HVBattTgtSOC_DS = VeVTXR_Pct_HVBattMinSOC_DS;
}

#endif

/*
 * Output and update for action system:
 *    '<S38>/DftlMd'
 *    '<S99>/DftlMd'
 */
#if Rte_SysCon_Variant_VTXR_HMIIntrfce || Rte_SysCon_Variant_VTXR_NoHMIIntrfce

static FUNC(void, VTXR_CODE_LOCAL) VTXR_ac_DftlMd(void)
{
    /* DataStoreWrite: '<S40>/Data Store Write' incorporates:
     *  Constant: '<S44>/Constant'
     */
    VeVTXR_e_STMTrigger_DS = CeVTXR_e_DfltMdTrg;
}

#endif

/*
 * Output and update for action system:
 *    '<S38>/HybMdEntry'
 *    '<S99>/HybMdEntry'
 */
#if Rte_SysCon_Variant_VTXR_HMIIntrfce || Rte_SysCon_Variant_VTXR_NoHMIIntrfce

static FUNC(void, VTXR_CODE_LOCAL) VTXR_ac_HybMdEntry(void)
{
    /* DataStoreWrite: '<S43>/Data Store Write' incorporates:
     *  Constant: '<S47>/Constant'
     */
    VeVTXR_e_STMTrigger_DS = CeVTXR_e_HybMdTrg;
}

#endif

/* Output and update for function-call system: '<S18>/ElectricMdDur' */
#if Rte_SysCon_Variant_VTXR_HMIIntrfce

static FUNC(void, VTXR_CODE_LOCAL) VTXR_ac_ElectricMdDur(VAR
    (TeESSR_e_EngStartStopSt, AUTOMATIC) rtu_EssSt, VAR(boolean, AUTOMATIC)
    rtu_PPanelActv, VAR(boolean, AUTOMATIC) rtu_HybButtonON, VAR(boolean,
    AUTOMATIC) rtu_StrtDsAllw, VAR(boolean, AUTOMATIC) rtu_PSA)
{
    /* If: '<S38>/If' incorporates:
     *  Constant: '<S46>/Constant'
     *  Logic: '<S38>/AND'
     *  Logic: '<S42>/AND'
     *  Logic: '<S42>/AND1'
     *  Logic: '<S42>/AND2'
     *  RelationalOperator: '<S42>/Greater Than or Equal '
     */
    if (!rtu_PPanelActv)
    {
        /* Outputs for IfAction SubSystem: '<S38>/DftlMd' incorporates:
         *  ActionPort: '<S40>/Action Port'
         */
        VTXR_ac_DftlMd();

        /* End of Outputs for SubSystem: '<S38>/DftlMd' */
    }
    else if ((((uint32)rtu_EssSt) == CeESSR_e_EngOff) && ((rtu_HybButtonON &&
               (!rtu_StrtDsAllw)) && rtu_PSA))
    {
        /* Outputs for IfAction SubSystem: '<S38>/HybMdEntry' incorporates:
         *  ActionPort: '<S43>/Action Port'
         */
        VTXR_ac_HybMdEntry();

        /* End of Outputs for SubSystem: '<S38>/HybMdEntry' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S38>/Do_Nothing' incorporates:
         *  ActionPort: '<S41>/Action Port'
         */
        /* DataStoreWrite: '<S41>/Data Store Write' incorporates:
         *  Constant: '<S45>/Constant'
         */
        VeVTXR_e_STMTrigger_DS = CeVTXR_e_InactiveTrg;

        /* DataStoreWrite: '<S41>/Data Store Write1' incorporates:
         *  DataStoreRead: '<S41>/Data Store Read'
         */
        VeVTXR_Pct_HVBattTgtSOC_DS = VeVTXR_Pct_HVBattMinSOC_DS;

        /* End of Outputs for SubSystem: '<S38>/Do_Nothing' */
    }

    /* End of If: '<S38>/If' */
}

#endif

/* Output and update for function-call system: '<S20>/HybridMdEnt' */
#if Rte_SysCon_Variant_VTXR_HMIIntrfce

static FUNC(void, VTXR_CODE_LOCAL) VTXR_ac_HybridMdEnt(void)
{
    /* DataStoreWrite: '<S51>/Data Store Write2' incorporates:
     *  Constant: '<S66>/Constant'
     */
    VeVTXR_e_PowerPanelMd_DS = CeVTXR_e_HybridMd;

    /* DataStoreWrite: '<S51>/Data Store Write1' incorporates:
     *  DataStoreRead: '<S51>/Data Store Read'
     */
    VeVTXR_Pct_HVBattTgtSOC_DS = VeVTXR_Pct_HVBattMinSOC_DS;
}

#endif

/* Output and update for function-call system: '<S20>/HybridMdDur' */
#if Rte_SysCon_Variant_VTXR_HMIIntrfce

static FUNC(void, VTXR_CODE_LOCAL) VTXR_ac_HybridMdDur(VAR
    (TeESSR_e_EngStartStopSt, AUTOMATIC) rtu_EssSt, VAR(boolean, AUTOMATIC)
    rtu_PPanelActv, VAR(boolean, AUTOMATIC) rtu_HybButtonON, VAR(boolean,
    AUTOMATIC) rtu_StrtDsAllw, VAR(boolean, AUTOMATIC) rtu_PSA, VAR(float32,
    AUTOMATIC) rtu_HVBattSOC)
{
    boolean rtb_Equal5;
    boolean tmp;

    /* RelationalOperator: '<S50>/Equal5' incorporates:
     *  Constant: '<S52>/Constant'
     */
    rtb_Equal5 = (CeESSR_e_EngOff == ((uint32)rtu_EssSt));

    /* If: '<S50>/If' incorporates:
     *  Logic: '<S54>/Logical3'
     *  Logic: '<S58>/Logical1'
     *  Logic: '<S58>/Logical2'
     *  Logic: '<S58>/Logical3'
     *  Logic: '<S58>/Logical5'
     *  Logic: '<S58>/Logical6'
     */
    if (!rtu_PPanelActv)
    {
        /* Outputs for IfAction SubSystem: '<S50>/DfltMd' incorporates:
         *  ActionPort: '<S53>/Action Port'
         */
        /* DataStoreWrite: '<S53>/Data Store Write' incorporates:
         *  Constant: '<S62>/Constant'
         */
        VeVTXR_e_STMTrigger_DS = CeVTXR_e_DfltMdTrg;

        /* DataStoreWrite: '<S53>/Data Store Write4' incorporates:
         *  Constant: '<S53>/FALSE Constant1'
         */
        VeVTXR_b_RemStpTrg_DS = false;

        /* End of Outputs for SubSystem: '<S50>/DfltMd' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S50>/Do_Nothing' incorporates:
         *  ActionPort: '<S56>/Action Port'
         */
        /* Logic: '<S58>/Logical6' incorporates:
         *  Logic: '<S56>/Logical6'
         */
        tmp = !rtu_HybButtonON;

        /* End of Outputs for SubSystem: '<S50>/Do_Nothing' */
        if (rtb_Equal5 && ((tmp || rtu_StrtDsAllw) || (!rtu_PSA)))
        {
            /* Outputs for IfAction SubSystem: '<S50>/ElecMd' incorporates:
             *  ActionPort: '<S57>/Action Port'
             */
            /* DataStoreWrite: '<S57>/Data Store Write1' incorporates:
             *  Constant: '<S57>/Constant'
             */
            VeVTXR_b_RemStpTrg_DS = false;

            /* DataStoreWrite: '<S57>/Data Store Write' incorporates:
             *  Constant: '<S64>/Constant'
             */
            VeVTXR_e_STMTrigger_DS = CeVTXR_e_ElecMdTrg;

            /* End of Outputs for SubSystem: '<S50>/ElecMd' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S50>/Do_Nothing' incorporates:
             *  ActionPort: '<S56>/Action Port'
             */
            /* Logic: '<S56>/Logical2' incorporates:
             *  DataStoreWrite: '<S56>/Data Store Write'
             *  Logic: '<S56>/Logical1'
             */
            VeVTXR_b_RemStpTrg_DS = ((tmp && rtu_PSA) && (!rtb_Equal5));

            /* DataStoreWrite: '<S56>/Dsw_STMTrigger' incorporates:
             *  Constant: '<S63>/Constant'
             */
            VeVTXR_e_STMTrigger_DS = CeVTXR_e_InactiveTrg;

            /* End of Outputs for SubSystem: '<S50>/Do_Nothing' */
        }
    }

    /* End of If: '<S50>/If' */

    /* If: '<S50>/If1' incorporates:
     *  Constant: '<S59>/Calib'
     *  DataStoreRead: '<S50>/Data Store Read'
     *  DataStoreRead: '<S50>/Data Store Read1'
     *  RelationalOperator: '<S50>/Comparison'
     *  RelationalOperator: '<S50>/Comparison1'
     *  Sum: '<S50>/Sum'
     */
    if (rtu_HVBattSOC <= (VeVTXR_Pct_HVBattMinSOC_DS +
                          KeVTXR_Pct_MinSOCDelta4HybMd))
    {
        /* Outputs for IfAction SubSystem: '<S50>/Set_MaxAsTgtSOC' incorporates:
         *  ActionPort: '<S60>/Action Port'
         */
        /* DataStoreWrite: '<S60>/Data Store Write2' incorporates:
         *  Constant: '<S65>/Calib'
         */
        VeVTXR_Pct_HVBattTgtSOC_DS = KeVTXR_Pct_TgtSOCHybMd;

        /* End of Outputs for SubSystem: '<S50>/Set_MaxAsTgtSOC' */
    }
    else
    {
        if (rtu_HVBattSOC >= VeVTXR_Pct_HVBattTgtSOC_DS)
        {
            /* Outputs for IfAction SubSystem: '<S50>/Set_MinAsTgtSOC' incorporates:
             *  ActionPort: '<S61>/Action Port'
             */
            /* DataStoreWrite: '<S61>/Data Store Write1' */
            VeVTXR_Pct_HVBattTgtSOC_DS = VeVTXR_Pct_HVBattMinSOC_DS;

            /* End of Outputs for SubSystem: '<S50>/Set_MinAsTgtSOC' */
        }
    }

    /* End of If: '<S50>/If1' */
}

#endif

/*
 * Output and update for function-call system:
 *    '<S14>/FaultChks'
 *    '<S15>/FaultChks'
 */
#if Rte_SysCon_Variant_VTXR_HMIIntrfce || Rte_SysCon_Variant_VTXR_NoHMIIntrfce

static FUNC(void, VTXR_CODE_LOCAL) VTXR_ac_FaultChks(VAR(uint32, AUTOMATIC)
    rtu_StrtDisAllwRsn, P2VAR(B_FaultChks_VTXR_ac_T, AUTOMATIC, VTXR_VAR_INIT)
    localB)
{
    /* RelationalOperator: '<S48>/Comparison1' incorporates:
     *  Constant: '<S48>/Constant Value'
     *  Constant: '<S49>/Calib'
     *  S-Function (sfix_bitop): '<S48>/Bitwise Logical Operator1'
     */
    localB->LeVTXR_b_StrtDsAllw = ((rtu_StrtDisAllwRsn &
        KeVTXR_g_SelStrtDsAllwRsn) > 0U);
}

#endif

/* Output and update for function-call system: '<S68>/DfltMdEnt' */
#if Rte_SysCon_Variant_VTXR_NoHMIIntrfce

static FUNC(void, VTXR_CODE_LOCAL) VTXR_ac_DfltMdEnt_n(void)
{
    /* DataStoreWrite: '<S75>/Data Store Write2' incorporates:
     *  Constant: '<S96>/Constant'
     */
    VeVTXR_e_PowerPanelMd_DS = CeVTXR_e_DefaultMd;

    /* DataStoreWrite: '<S75>/Data Store Write1' incorporates:
     *  Constant: '<S97>/Calib'
     */
    VeVTXR_Pct_HVBattTgtSOC_DS = KeVTXR_Pct_TgtSOCDflt;
}

#endif

/*
 * Output and update for enable system:
 *    '<S83>/SetBlink'
 *    '<S106>/SetBlink'
 *    '<S146>/SetBlink'
 *    '<S123>/SetBlink'
 */
#if Rte_SysCon_Variant_VTXR_NoHMIIntrfce

static FUNC(void, VTXR_CODE_LOCAL) VTXR_ac_SetBlink(VAR(boolean, AUTOMATIC)
    rtu_Enable)
{
    /* Outputs for Enabled SubSystem: '<S83>/SetBlink' incorporates:
     *  EnablePort: '<S95>/Enable'
     */
    if (rtu_Enable)
    {
        /* DataStoreWrite: '<S95>/Dsw_STMTrigger' incorporates:
         *  Constant: '<S95>/TRUE Constant'
         */
        VeVTXR_b_BlinkLED_DS = true;

        /* DataStoreWrite: '<S95>/Dsw_STMTrigger1' incorporates:
         *  Constant: '<S95>/TRUE Constant'
         */
        VeVTXR_b_BlinkDtct_DS = true;
    }

    /* End of Outputs for SubSystem: '<S83>/SetBlink' */
}

#endif

/* Output and update for function-call system: '<S68>/DfltMdDur' */
#if Rte_SysCon_Variant_VTXR_NoHMIIntrfce

static FUNC(void, VTXR_CODE_LOCAL) VTXR_ac_DfltMdDur_b(VAR
    (TeESSR_e_EngStartStopSt, AUTOMATIC) rtu_EssSt, VAR(boolean, AUTOMATIC)
    rtu_PPanlActv, VAR(boolean, AUTOMATIC) rtu_HybButtonON, VAR(boolean,
    AUTOMATIC) rtu_StrtDsAllw, VAR(boolean, AUTOMATIC) rtu_PSA, P2VAR
    (DW_DfltMdDur_VTXR_ac_f_T, AUTOMATIC, VTXR_VAR_INIT) localDW)
{
    boolean rtb_AND6_g;
    boolean rtb_OR1_ap;

    /* Logic: '<S77>/AND1' incorporates:
     *  Logic: '<S80>/AND1'
     */
    rtb_AND6_g = !rtu_HybButtonON;

    /* If: '<S74>/StateTransition' incorporates:
     *  Constant: '<S85>/Constant'
     *  Constant: '<S88>/Constant'
     *  Constant: '<S90>/Constant'
     *  Constant: '<S91>/Constant'
     *  Logic: '<S77>/AND'
     *  Logic: '<S77>/AND1'
     *  Logic: '<S77>/AND2'
     *  Logic: '<S80>/AND'
     *  Logic: '<S82>/AND'
     *  Logic: '<S82>/AND1'
     *  Logic: '<S82>/AND2'
     *  Logic: '<S82>/AND3'
     *  RelationalOperator: '<S77>/Greater Than or Equal '
     *  RelationalOperator: '<S80>/Greater Than or Equal '
     *  RelationalOperator: '<S82>/Greater Than or Equal '
     *  RelationalOperator: '<S82>/Greater Than or Equal 1'
     */
    if ((rtu_PPanlActv && (rtb_AND6_g || rtu_StrtDsAllw)) && (CeESSR_e_EngOff ==
         ((uint32)rtu_EssSt)))
    {
        /* Outputs for IfAction SubSystem: '<S74>/Do_Nothing' incorporates:
         *  ActionPort: '<S76>/Action Port'
         */
        /* Outputs for IfAction SubSystem: '<S74>/HybMd' incorporates:
         *  ActionPort: '<S81>/Action Port'
         */
        /* Outputs for IfAction SubSystem: '<S74>/GenMd' incorporates:
         *  ActionPort: '<S79>/Action Port'
         */
        /* Outputs for IfAction SubSystem: '<S74>/ElectricMd' incorporates:
         *  ActionPort: '<S78>/Action Port'
         */
        /* DataStoreWrite: '<S78>/Data Store Write' incorporates:
         *  Constant: '<S86>/Constant'
         *  DataStoreWrite: '<S76>/Data Store Write'
         *  DataStoreWrite: '<S79>/Data Store Write'
         *  DataStoreWrite: '<S81>/Data Store Write'
         */
        VeVTXR_e_STMTrigger_DS = CeVTXR_e_ElecMdTrg;

        /* End of Outputs for SubSystem: '<S74>/ElectricMd' */
        /* End of Outputs for SubSystem: '<S74>/GenMd' */
        /* End of Outputs for SubSystem: '<S74>/HybMd' */
        /* End of Outputs for SubSystem: '<S74>/Do_Nothing' */
    }
    else if (((rtu_PPanlActv && rtb_AND6_g) && (CeESSR_e_EngRunning == ((uint32)
                rtu_EssSt))) && rtu_PSA)
    {
        /* Outputs for IfAction SubSystem: '<S74>/Do_Nothing' incorporates:
         *  ActionPort: '<S76>/Action Port'
         */
        /* Outputs for IfAction SubSystem: '<S74>/HybMd' incorporates:
         *  ActionPort: '<S81>/Action Port'
         */
        /* Outputs for IfAction SubSystem: '<S74>/GenMd' incorporates:
         *  ActionPort: '<S79>/Action Port'
         */
        /* Outputs for IfAction SubSystem: '<S74>/ElectricMd' incorporates:
         *  ActionPort: '<S78>/Action Port'
         */
        /* DataStoreWrite: '<S78>/Data Store Write' incorporates:
         *  Constant: '<S87>/Constant'
         *  DataStoreWrite: '<S76>/Data Store Write'
         *  DataStoreWrite: '<S79>/Data Store Write'
         *  DataStoreWrite: '<S81>/Data Store Write'
         */
        VeVTXR_e_STMTrigger_DS = CeVTXR_e_GenMdTrg;

        /* End of Outputs for SubSystem: '<S74>/ElectricMd' */
        /* End of Outputs for SubSystem: '<S74>/GenMd' */
        /* End of Outputs for SubSystem: '<S74>/HybMd' */
        /* End of Outputs for SubSystem: '<S74>/Do_Nothing' */
    }
    else if ((rtu_PPanlActv && ((rtu_HybButtonON && (!rtu_StrtDsAllw)) &&
                                ((CeESSR_e_EngRunning == ((uint32)rtu_EssSt)) ||
                (((uint32)rtu_EssSt) == CeESSR_e_EngOff)))) && rtu_PSA)
    {
        /* Outputs for IfAction SubSystem: '<S74>/Do_Nothing' incorporates:
         *  ActionPort: '<S76>/Action Port'
         */
        /* Outputs for IfAction SubSystem: '<S74>/HybMd' incorporates:
         *  ActionPort: '<S81>/Action Port'
         */
        /* Outputs for IfAction SubSystem: '<S74>/GenMd' incorporates:
         *  ActionPort: '<S79>/Action Port'
         */
        /* Outputs for IfAction SubSystem: '<S74>/ElectricMd' incorporates:
         *  ActionPort: '<S78>/Action Port'
         */
        /* DataStoreWrite: '<S78>/Data Store Write' incorporates:
         *  Constant: '<S89>/Constant'
         *  DataStoreWrite: '<S76>/Data Store Write'
         *  DataStoreWrite: '<S79>/Data Store Write'
         *  DataStoreWrite: '<S81>/Data Store Write'
         */
        VeVTXR_e_STMTrigger_DS = CeVTXR_e_HybMdTrg;

        /* End of Outputs for SubSystem: '<S74>/ElectricMd' */
        /* End of Outputs for SubSystem: '<S74>/GenMd' */
        /* End of Outputs for SubSystem: '<S74>/HybMd' */
        /* End of Outputs for SubSystem: '<S74>/Do_Nothing' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S74>/Do_Nothing' incorporates:
         *  ActionPort: '<S76>/Action Port'
         */
        /* Outputs for IfAction SubSystem: '<S74>/HybMd' incorporates:
         *  ActionPort: '<S81>/Action Port'
         */
        /* Outputs for IfAction SubSystem: '<S74>/GenMd' incorporates:
         *  ActionPort: '<S79>/Action Port'
         */
        /* Outputs for IfAction SubSystem: '<S74>/ElectricMd' incorporates:
         *  ActionPort: '<S78>/Action Port'
         */
        /* DataStoreWrite: '<S78>/Data Store Write' incorporates:
         *  Constant: '<S84>/Constant'
         *  DataStoreWrite: '<S76>/Data Store Write'
         *  DataStoreWrite: '<S79>/Data Store Write'
         *  DataStoreWrite: '<S81>/Data Store Write'
         */
        VeVTXR_e_STMTrigger_DS = CeVTXR_e_InactiveTrg;

        /* End of Outputs for SubSystem: '<S74>/ElectricMd' */
        /* End of Outputs for SubSystem: '<S74>/GenMd' */
        /* End of Outputs for SubSystem: '<S74>/HybMd' */
        /* End of Outputs for SubSystem: '<S74>/Do_Nothing' */
    }

    /* End of If: '<S74>/StateTransition' */

    /* Logic: '<S83>/AND6' incorporates:
     *  Constant: '<S92>/Constant'
     *  Constant: '<S93>/Constant'
     *  Logic: '<S83>/AND3'
     *  Logic: '<S83>/AND4'
     *  Logic: '<S83>/AND5'
     *  RelationalOperator: '<S83>/Greater Than or Equal '
     *  RelationalOperator: '<S83>/Greater Than or Equal 1'
     */
    rtb_AND6_g = (((rtu_StrtDsAllw || ((CeESSR_e_EngRunning != ((uint32)
                       rtu_EssSt)) && (((uint32)rtu_EssSt) != CeESSR_e_EngOff)))
                   && rtu_PPanlActv) && rtu_HybButtonON);

    /* Outputs for Atomic SubSystem: '<S83>/EdgeRising' */
    /* Logic: '<S94>/OR1' incorporates:
     *  UnitDelay: '<S94>/Unit Delay'
     */
    rtb_OR1_ap = !localDW->UnitDelay_DSTATE;

    /* Update for UnitDelay: '<S94>/Unit Delay' */
    localDW->UnitDelay_DSTATE = rtb_AND6_g;

    /* Outputs for Enabled SubSystem: '<S83>/SetBlink' */
    /* Logic: '<S94>/AND' */
    VTXR_ac_SetBlink(rtb_AND6_g && rtb_OR1_ap);

    /* End of Outputs for SubSystem: '<S83>/SetBlink' */
    /* End of Outputs for SubSystem: '<S83>/EdgeRising' */
}

#endif

/* Output and update for function-call system: '<S69>/ElecMdEnt' */
#if Rte_SysCon_Variant_VTXR_NoHMIIntrfce

static FUNC(void, VTXR_CODE_LOCAL) VTXR_ac_ElecMdEnt_c(void)
{
    /* DataStoreWrite: '<S98>/Data Store Write2' incorporates:
     *  Constant: '<S100>/Constant'
     */
    VeVTXR_e_PowerPanelMd_DS = CeVTXR_e_ElectricMd;

    /* DataStoreWrite: '<S98>/Data Store Write1' incorporates:
     *  Constant: '<S101>/Calib'
     */
    VeVTXR_Pct_HVBattTgtSOC_DS = KeVTXR_Pct_TgtSOCDflt;
}

#endif

/* Output and update for function-call system: '<S69>/ElectricMdDur' */
#if Rte_SysCon_Variant_VTXR_NoHMIIntrfce

static FUNC(void, VTXR_CODE_LOCAL) VTXR_ac_ElectricMdDur_b(VAR
    (TeESSR_e_EngStartStopSt, AUTOMATIC) rtu_EssSt, VAR(boolean, AUTOMATIC)
    rtu_PPanelActv, VAR(boolean, AUTOMATIC) rtu_HybButtonON, VAR(boolean,
    AUTOMATIC) rtu_StrtDsAllw, VAR(boolean, AUTOMATIC) rtu_PSA, P2VAR
    (DW_ElectricMdDur_VTXR_ac_l_T, AUTOMATIC, VTXR_VAR_INIT) localDW)
{
    boolean rtb_AND_f;
    boolean rtb_OR1_ad;

    /* If: '<S99>/If' incorporates:
     *  Constant: '<S109>/Constant'
     *  Logic: '<S104>/AND'
     *  Logic: '<S104>/AND1'
     *  Logic: '<S104>/AND2'
     *  Logic: '<S99>/AND'
     *  RelationalOperator: '<S104>/Greater Than or Equal '
     */
    if (!rtu_PPanelActv)
    {
        /* Outputs for IfAction SubSystem: '<S99>/DftlMd' incorporates:
         *  ActionPort: '<S102>/Action Port'
         */
        VTXR_ac_DftlMd();

        /* End of Outputs for SubSystem: '<S99>/DftlMd' */
    }
    else if ((((uint32)rtu_EssSt) == CeESSR_e_EngOff) && ((rtu_HybButtonON &&
               (!rtu_StrtDsAllw)) && rtu_PSA))
    {
        /* Outputs for IfAction SubSystem: '<S99>/HybMdEntry' incorporates:
         *  ActionPort: '<S105>/Action Port'
         */
        VTXR_ac_HybMdEntry();

        /* End of Outputs for SubSystem: '<S99>/HybMdEntry' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S99>/Do_Nothing' incorporates:
         *  ActionPort: '<S103>/Action Port'
         */
        /* DataStoreWrite: '<S103>/Data Store Write' incorporates:
         *  Constant: '<S108>/Constant'
         */
        VeVTXR_e_STMTrigger_DS = CeVTXR_e_InactiveTrg;

        /* End of Outputs for SubSystem: '<S99>/Do_Nothing' */
    }

    /* End of If: '<S99>/If' */

    /* Logic: '<S106>/AND' incorporates:
     *  Logic: '<S106>/AND3'
     *  Logic: '<S106>/AND4'
     */
    rtb_AND_f = ((rtu_PPanelActv && rtu_HybButtonON) && (rtu_StrtDsAllw ||
                  (!rtu_PSA)));

    /* Outputs for Atomic SubSystem: '<S106>/EdgeRising' */
    /* Logic: '<S111>/OR1' incorporates:
     *  UnitDelay: '<S111>/Unit Delay'
     */
    rtb_OR1_ad = !localDW->UnitDelay_DSTATE;

    /* Update for UnitDelay: '<S111>/Unit Delay' */
    localDW->UnitDelay_DSTATE = rtb_AND_f;

    /* Outputs for Enabled SubSystem: '<S106>/SetBlink' */
    /* Logic: '<S111>/AND' */
    VTXR_ac_SetBlink(rtb_AND_f && rtb_OR1_ad);

    /* End of Outputs for SubSystem: '<S106>/SetBlink' */
    /* End of Outputs for SubSystem: '<S106>/EdgeRising' */
}

#endif

/* Output and update for function-call system: '<S72>/HybridMdEnt' */
#if Rte_SysCon_Variant_VTXR_NoHMIIntrfce

static FUNC(void, VTXR_CODE_LOCAL) VTXR_ac_HybridMdEnt_c(void)
{
    /* DataStoreWrite: '<S136>/Data Store Write2' incorporates:
     *  Constant: '<S153>/Constant'
     */
    VeVTXR_e_PowerPanelMd_DS = CeVTXR_e_HybridMd;

    /* DataStoreWrite: '<S136>/Data Store Write1' incorporates:
     *  Constant: '<S154>/Calib'
     */
    VeVTXR_Pct_HVBattTgtSOC_DS = KeVTXR_Pct_TgtSOCDflt;

    /* DataStoreWrite: '<S136>/Dsw_STMTrigger' incorporates:
     *  Constant: '<S136>/FALSE Constant'
     */
    VeVTXR_b_BlinkLED_DS = false;
}

#endif

/*
 * Output and update for action system:
 *    '<S135>/DfltMd'
 *    '<S115>/DfltMd'
 */
#if Rte_SysCon_Variant_VTXR_NoHMIIntrfce

static FUNC(void, VTXR_CODE_LOCAL) VTXR_ac_DfltMd(void)
{
    /* DataStoreWrite: '<S139>/Data Store Write' incorporates:
     *  Constant: '<S147>/Constant'
     */
    VeVTXR_e_STMTrigger_DS = CeVTXR_e_DfltMdTrg;
}

#endif

/*
 * Output and update for action system:
 *    '<S135>/ElecMd'
 *    '<S115>/ElecMd'
 */
#if Rte_SysCon_Variant_VTXR_NoHMIIntrfce

static FUNC(void, VTXR_CODE_LOCAL) VTXR_ac_ElecMd(void)
{
    /* DataStoreWrite: '<S142>/Data Store Write' incorporates:
     *  Constant: '<S149>/Constant'
     */
    VeVTXR_e_STMTrigger_DS = CeVTXR_e_ElecMdTrg;
}

#endif

/*
 * Output and update for action system:
 *    '<S135>/Do_Nothing'
 *    '<S115>/Do_Nothing'
 */
#if Rte_SysCon_Variant_VTXR_NoHMIIntrfce

static FUNC(void, VTXR_CODE_LOCAL) VTXR_ac_Do_Nothing(void)
{
    /* DataStoreWrite: '<S141>/Dsw_STMTrigger' incorporates:
     *  Constant: '<S148>/Constant'
     */
    VeVTXR_e_STMTrigger_DS = CeVTXR_e_InactiveTrg;
}

#endif

/* Output and update for function-call system: '<S72>/HybridMdDur' */
#if Rte_SysCon_Variant_VTXR_NoHMIIntrfce

static FUNC(void, VTXR_CODE_LOCAL) VTXR_ac_HybridMdDur_f(VAR
    (TeESSR_e_EngStartStopSt, AUTOMATIC) rtu_EssSt, VAR(boolean, AUTOMATIC)
    rtu_PPanelActv, VAR(boolean, AUTOMATIC) rtu_HybButtonON, VAR(boolean,
    AUTOMATIC) rtu_StrtDsAllw, VAR(boolean, AUTOMATIC) rtu_PSA, P2VAR
    (DW_HybridMdDur_VTXR_ac_c_T, AUTOMATIC, VTXR_VAR_INIT) localDW)
{
    boolean rtb_Logical5;
    boolean rtb_OR1_c;

    /* If: '<S135>/If' incorporates:
     *  Constant: '<S137>/Constant'
     *  Constant: '<S138>/Constant'
     *  Logic: '<S140>/Logical3'
     *  Logic: '<S143>/Logical1'
     *  Logic: '<S143>/Logical2'
     *  Logic: '<S143>/Logical3'
     *  Logic: '<S143>/Logical5'
     *  Logic: '<S143>/Logical6'
     *  Logic: '<S145>/Logical7'
     *  RelationalOperator: '<S135>/Equal2'
     *  RelationalOperator: '<S135>/Equal5'
     */
    if (!rtu_PPanelActv)
    {
        /* Outputs for IfAction SubSystem: '<S135>/DfltMd' incorporates:
         *  ActionPort: '<S139>/Action Port'
         */
        VTXR_ac_DfltMd();

        /* End of Outputs for SubSystem: '<S135>/DfltMd' */
    }
    else
    {
        /* Logic: '<S143>/Logical6' incorporates:
         *  Logic: '<S145>/Logical9'
         */
        rtb_Logical5 = !rtu_HybButtonON;
        if ((CeESSR_e_EngOff == ((uint32)rtu_EssSt)) && ((rtb_Logical5 ||
                rtu_StrtDsAllw) || (!rtu_PSA)))
        {
            /* Outputs for IfAction SubSystem: '<S135>/ElecMd' incorporates:
             *  ActionPort: '<S142>/Action Port'
             */
            VTXR_ac_ElecMd();

            /* End of Outputs for SubSystem: '<S135>/ElecMd' */
        }
        else if (((((uint32)rtu_EssSt) == CeESSR_e_EngRunning) && rtb_Logical5) &&
                 rtu_PSA)
        {
            /* Outputs for IfAction SubSystem: '<S135>/GenMd' incorporates:
             *  ActionPort: '<S144>/Action Port'
             */
            /* DataStoreWrite: '<S144>/Dsw_STMTrigger' incorporates:
             *  Constant: '<S150>/Constant'
             */
            VeVTXR_e_STMTrigger_DS = CeVTXR_e_GenMdTrg;

            /* End of Outputs for SubSystem: '<S135>/GenMd' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S135>/Do_Nothing' incorporates:
             *  ActionPort: '<S141>/Action Port'
             */
            VTXR_ac_Do_Nothing();

            /* End of Outputs for SubSystem: '<S135>/Do_Nothing' */
        }
    }

    /* End of If: '<S135>/If' */

    /* Logic: '<S146>/Logical5' */
    rtb_Logical5 = ((rtu_PPanelActv && rtu_HybButtonON) && rtu_StrtDsAllw);

    /* Outputs for Atomic SubSystem: '<S146>/EdgeRising' */
    /* Logic: '<S151>/OR1' incorporates:
     *  UnitDelay: '<S151>/Unit Delay'
     */
    rtb_OR1_c = !localDW->UnitDelay_DSTATE;

    /* Update for UnitDelay: '<S151>/Unit Delay' */
    localDW->UnitDelay_DSTATE = rtb_Logical5;

    /* Outputs for Enabled SubSystem: '<S146>/SetBlink' */
    /* Logic: '<S151>/AND' */
    VTXR_ac_SetBlink(rtb_Logical5 && rtb_OR1_c);

    /* End of Outputs for SubSystem: '<S146>/SetBlink' */
    /* End of Outputs for SubSystem: '<S146>/EdgeRising' */
}

#endif

/* Output and update for function-call system: '<S71>/GenMdEnt' */
#if Rte_SysCon_Variant_VTXR_NoHMIIntrfce

static FUNC(void, VTXR_CODE_LOCAL) VTXR_ac_GenMdEnt(void)
{
    /* DataStoreWrite: '<S116>/Data Store Write2' incorporates:
     *  Constant: '<S133>/Constant'
     */
    VeVTXR_e_PowerPanelMd_DS = CeVTXR_e_GeneratorMd;

    /* DataStoreWrite: '<S116>/Data Store Write1' incorporates:
     *  Constant: '<S134>/Calib'
     */
    VeVTXR_Pct_HVBattTgtSOC_DS = KeVTXR_Pct_TgtSOCGenMd;
}

#endif

/* Output and update for function-call system: '<S71>/GenMdDuring' */
#if Rte_SysCon_Variant_VTXR_NoHMIIntrfce

static FUNC(void, VTXR_CODE_LOCAL) VTXR_ac_GenMdDuring(VAR
    (TeESSR_e_EngStartStopSt, AUTOMATIC) rtu_EssSt, VAR(boolean, AUTOMATIC)
    rtu_PPanelActv, VAR(boolean, AUTOMATIC) rtu_HybButtonON, VAR(boolean,
    AUTOMATIC) rtu_StrtDsAllw, VAR(boolean, AUTOMATIC) rtu_PSA, P2VAR
    (DW_GenMdDuring_VTXR_ac_T, AUTOMATIC, VTXR_VAR_INIT) localDW)
{
    boolean rtb_OR1_f;
    boolean rtb_UnitDelay_i2;

    /* UnitDelay: '<S131>/Unit Delay' incorporates:
     *  Constant: '<S117>/Constant'
     *  RelationalOperator: '<S115>/Equal2'
     */
    rtb_UnitDelay_i2 = (((uint32)rtu_EssSt) == CeESSR_e_EngOff);

    /* If: '<S115>/If' incorporates:
     *  Constant: '<S128>/Constant'
     *  Logic: '<S115>/Logical4'
     *  Logic: '<S122>/Logical1'
     *  Logic: '<S122>/Logical5'
     *  Logic: '<S122>/Logical7'
     *  RelationalOperator: '<S122>/Equal1'
     */
    if (!rtu_PPanelActv)
    {
        /* Outputs for IfAction SubSystem: '<S115>/DfltMd' incorporates:
         *  ActionPort: '<S118>/Action Port'
         */
        VTXR_ac_DfltMd();

        /* End of Outputs for SubSystem: '<S115>/DfltMd' */
    }
    else if (((rtu_HybButtonON && ((((uint32)rtu_EssSt) == CeESSR_e_EngRunning) ||
                rtb_UnitDelay_i2)) && (!rtu_StrtDsAllw)) && rtu_PSA)
    {
        /* Outputs for IfAction SubSystem: '<S115>/HybMdTrg' incorporates:
         *  ActionPort: '<S121>/Action Port'
         */
        /* DataStoreWrite: '<S121>/Dsw_STMTrigger' incorporates:
         *  Constant: '<S127>/Constant'
         */
        VeVTXR_e_STMTrigger_DS = CeVTXR_e_HybMdTrg;

        /* End of Outputs for SubSystem: '<S115>/HybMdTrg' */
    }
    else if (rtb_UnitDelay_i2)
    {
        /* Outputs for IfAction SubSystem: '<S115>/ElecMd' incorporates:
         *  ActionPort: '<S120>/Action Port'
         */
        VTXR_ac_ElecMd();

        /* End of Outputs for SubSystem: '<S115>/ElecMd' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S115>/Do_Nothing' incorporates:
         *  ActionPort: '<S119>/Action Port'
         */
        VTXR_ac_Do_Nothing();

        /* End of Outputs for SubSystem: '<S115>/Do_Nothing' */
    }

    /* End of If: '<S115>/If' */

    /* Logic: '<S123>/Logical2' incorporates:
     *  Constant: '<S129>/Constant'
     *  Constant: '<S130>/Constant'
     *  Logic: '<S123>/Logical3'
     *  Logic: '<S123>/Logical8'
     *  RelationalOperator: '<S123>/Equal3'
     *  RelationalOperator: '<S123>/Equal4'
     */
    rtb_UnitDelay_i2 = ((rtu_HybButtonON && (((((uint32)rtu_EssSt) !=
                            CeESSR_e_EngOff) && (((uint32)rtu_EssSt) !=
                            CeESSR_e_EngRunning)) || rtu_StrtDsAllw)) &&
                        rtu_PPanelActv);

    /* Outputs for Atomic SubSystem: '<S123>/EdgeRising' */
    /* Logic: '<S131>/OR1' incorporates:
     *  UnitDelay: '<S131>/Unit Delay'
     */
    rtb_OR1_f = !localDW->UnitDelay_DSTATE;

    /* Update for UnitDelay: '<S131>/Unit Delay' */
    localDW->UnitDelay_DSTATE = rtb_UnitDelay_i2;

    /* Outputs for Enabled SubSystem: '<S123>/SetBlink' */
    /* Logic: '<S131>/AND' */
    VTXR_ac_SetBlink(rtb_UnitDelay_i2 && rtb_OR1_f);

    /* End of Outputs for SubSystem: '<S123>/SetBlink' */
    /* End of Outputs for SubSystem: '<S123>/EdgeRising' */
}

#endif

/* Model step function for TID1 */
FUNC(void, VTXR_CODE) VTXR_MedTEB(void) /* Explicit Task: MedTEB */
{

#if !Rte_SysCon_Variant_VTXR_HMIIntrfce && Rte_SysCon_Variant_VTXR_NoHMIIntrfce

    boolean tmpRead;

#endif

#if !Rte_SysCon_Variant_VTXR_HMIIntrfce && Rte_SysCon_Variant_VTXR_NoHMIIntrfce

    boolean tmpRead_0;

#endif

#if Rte_SysCon_Variant_VTXR_HMIIntrfce

    boolean tmpRead_1;

#endif

#if Rte_SysCon_Variant_VTXR_HMIIntrfce

    boolean tmpRead_2;

#endif

#if Rte_SysCon_Variant_VTXR_EnblMinSOCInpt

    float32 tmpRead_3;

#endif

#if Rte_SysCon_Variant_VTXR_PowPanelEqupd

    boolean tmpRead_4;

#endif

#if Rte_SysCon_Variant_VTXR_PowPanelEqupd

    boolean tmpRead_5;

#endif

#if Rte_SysCon_Variant_VTXR_PowPanelEqupd

    boolean tmpRead_6;

#endif

#if Rte_SysCon_Variant_VTXR_PowPanelEqupd

    boolean tmpRead_7;

#endif

#if Rte_SysCon_Variant_VTXR_EnblMinSOCInpt || Rte_SysCon_Variant_VTXR_HMIIntrfce

    boolean rtb_Merge_Outport_1_i;

#endif

#if !Rte_SysCon_Variant_VTXR_HMIIntrfce && Rte_SysCon_Variant_VTXR_NoHMIIntrfce

    boolean rtb_AND1_m;

#endif

#if Rte_SysCon_Variant_VTXR_HMIIntrfce || Rte_SysCon_Variant_VTXR_NoHMIIntrfce || Rte_SysCon_Variant_VTXR_PowPanelEqupd

    boolean rtb_TmpSignalConversionAtVeRTMR_b_InPlan;

#endif

#if !Rte_SysCon_Variant_VTXR_HMIIntrfce && Rte_SysCon_Variant_VTXR_NoHMIIntrfce

    boolean rtb_OR1_b;

#endif

#if Rte_SysCon_Variant_VTXR_NoHMIIntrfce || Rte_SysCon_Variant_VTXR_PowPanelEqupd

    boolean rtb_TmpSignalConversionAtVeVTLR_b_V2LPlu;

#endif

#if Rte_SysCon_Variant_VTXR_EnblMinSOCInpt || Rte_SysCon_Variant_VTXR_HMIIntrfce || Rte_SysCon_Variant_VTXR_NoHMIIntrfce || Rte_SysCon_Variant_VTXR_PowPanelEqupd

    TeTRGR_e_TransRangeState rtb_TmpSignalConversionAtVeTRGR_e_VldtdT;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/VTXR_MedTEB'
     */
    /* SignalConversion generated from: '<S1>/VeVTLR_b_V2LPlugIn_Auth' */
#if Rte_SysCon_Variant_VTXR_PowPanelEqupd

    /* SignalConversion generated from: '<S1>/VeVTLR_b_V2LPlugIn_Auth' incorporates:
     *  Inport: '<Root>/VeVTLR_b_V2LPlugIn_Auth'
     */
    (void)Rte_Read_VeVTLR_b_V2LPlugIn_Auth_Value
        (&rtb_TmpSignalConversionAtVeVTLR_b_V2LPlu);

#endif

    /* End of SignalConversion generated from: '<S1>/VeVTLR_b_V2LPlugIn_Auth' */

    /* SignalConversion generated from: '<S1>/VeRTMR_b_InPlantMode' */
#if Rte_SysCon_Variant_VTXR_HMIIntrfce || Rte_SysCon_Variant_VTXR_NoHMIIntrfce || Rte_SysCon_Variant_VTXR_PowPanelEqupd

    /* SignalConversion generated from: '<S1>/VeRTMR_b_InPlantMode' incorporates:
     *  Inport: '<Root>/VeRTMR_b_InPlantMode'
     */
    (void)Rte_Read_VeRTMR_b_InPlantMode_Value
        (&rtb_TmpSignalConversionAtVeRTMR_b_InPlan);

#endif

    /* End of SignalConversion generated from: '<S1>/VeRTMR_b_InPlantMode' */

    /* SignalConversion generated from: '<S1>/VeTRGR_e_VldtdTransRngSt' */
#if Rte_SysCon_Variant_VTXR_EnblMinSOCInpt || Rte_SysCon_Variant_VTXR_HMIIntrfce || Rte_SysCon_Variant_VTXR_NoHMIIntrfce || Rte_SysCon_Variant_VTXR_PowPanelEqupd

    /* SignalConversion generated from: '<S1>/VeTRGR_e_VldtdTransRngSt' incorporates:
     *  Inport: '<Root>/VeTRGR_e_VldtdTransRngSt'
     */
    (void)Rte_Read_VeTRGR_e_VldtdTransRngSt_Value
        (&rtb_TmpSignalConversionAtVeTRGR_e_VldtdT);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTRGR_e_VldtdTransRngSt' */

    /* SignalConversion generated from: '<S1>/VeESSR_e_EngStartStopSt' incorporates:
     *  SignalConversion generated from: '<S1>/VeHPMR_b_PropSysActv'
     *  SignalConversion generated from: '<S1>/VeSTRR_g_StrtDisAllowRsn'
     */
#if Rte_SysCon_Variant_VTXR_HMIIntrfce || Rte_SysCon_Variant_VTXR_NoHMIIntrfce

    /* SignalConversion generated from: '<S1>/VeESSR_e_EngStartStopSt' incorporates:
     *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
     */
    (void)Rte_Read_VeESSR_e_EngStartStopSt_Value
        (&VTXR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt);

    /* SignalConversion generated from: '<S1>/VeSTRR_g_StrtDisAllowRsn' incorporates:
     *  Inport: '<Root>/VeSTRR_g_StrtDisAllowRsn'
     */
    (void)Rte_Read_VeSTRR_g_StrtDisAllowRsn_Value
        (&VTXR_ac_B.TmpSignalConversionAtVeSTRR_g_StrtDisAll);

    /* SignalConversion generated from: '<S1>/VeHPMR_b_PropSysActv' incorporates:
     *  Inport: '<Root>/VeHPMR_b_PropSysActv'
     */
    (void)Rte_Read_VeHPMR_b_PropSysActv_Value
        (&VTXR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct);

#endif

    /* End of SignalConversion generated from: '<S1>/VeESSR_e_EngStartStopSt' */

    /* SignalConversion generated from: '<S1>/VeBPCR_Pct_HV_BatPackSOC_Arb' */
#if Rte_SysCon_Variant_VTXR_HMIIntrfce

    /* SignalConversion generated from: '<S1>/VeBPCR_Pct_HV_BatPackSOC_Arb' incorporates:
     *  Inport: '<Root>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     */
    (void)Rte_Read_VeBPCR_Pct_HV_BatPackSOC_Arb_Value
        (&VTXR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa);

#endif

    /* End of SignalConversion generated from: '<S1>/VeBPCR_Pct_HV_BatPackSOC_Arb' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/VTXC_PreProc'
     */
    /* Outputs for Atomic SubSystem: '<S6>/SoC_Slct' */
#if Rte_SysCon_Variant_VTXR_EnblMinSOCInpt

    /* Outputs for Atomic SubSystem: '<S175>/SoC_4fm_HMI' */
    /* If: '<S179>/If' incorporates:
     *  Constant: '<S185>/Calib'
     *  Constant: '<S186>/Calib'
     *  Constant: '<S187>/Calib'
     *  Inport: '<Root>/VeCITR_Pct_V2HRsrvBatt'
     *  Inport: '<Root>/VeCITR_Pct_V2LRsrvBatt'
     *  Inport: '<Root>/VeCITR_Pct_V2VRsrvBatt'
     *  Inport: '<Root>/VeCITR_b_V2HRsrvBattFA'
     *  Inport: '<Root>/VeCITR_b_V2LRsrvBattFA'
     *  Inport: '<Root>/VeCITR_b_V2VRsrvBattFA'
     */
    if (KeVTXR_b_UseV2HParam)
    {
        (void)Rte_Read_VeCITR_b_V2HRsrvBattFA_Value(&rtb_Merge_Outport_1_i);
        (void)Rte_Read_VeCITR_Pct_V2HRsrvBatt_Value(&tmpRead_3);

        /* Outputs for IfAction SubSystem: '<S179>/V2H_MiN_SOC_Slct' incorporates:
         *  ActionPort: '<S188>/Action Port'
         */
        VTXR_ac_V2H_MiN_SOC_Slct(tmpRead_3, rtb_Merge_Outport_1_i,
            (&(VeVTXR_Pct_HVBattMinSOC_DS)));

        /* End of Outputs for SubSystem: '<S179>/V2H_MiN_SOC_Slct' */
    }
    else if (KeVTXR_b_UseV2LParam)
    {
        (void)Rte_Read_VeCITR_b_V2LRsrvBattFA_Value(&rtb_Merge_Outport_1_i);
        (void)Rte_Read_VeCITR_Pct_V2LRsrvBatt_Value(&tmpRead_3);

        /* Outputs for IfAction SubSystem: '<S179>/V2L_MiN_SOC_Slct' incorporates:
         *  ActionPort: '<S189>/Action Port'
         */
        VTXR_ac_V2H_MiN_SOC_Slct(tmpRead_3, rtb_Merge_Outport_1_i,
            (&(VeVTXR_Pct_HVBattMinSOC_DS)));

        /* End of Outputs for SubSystem: '<S179>/V2L_MiN_SOC_Slct' */
    }
    else if (KeVTXR_b_UseV2VParam)
    {
        (void)Rte_Read_VeCITR_b_V2VRsrvBattFA_Value(&rtb_Merge_Outport_1_i);
        (void)Rte_Read_VeCITR_Pct_V2VRsrvBatt_Value(&tmpRead_3);

        /* Outputs for IfAction SubSystem: '<S179>/V2V_MiN_SOC_Slct' incorporates:
         *  ActionPort: '<S190>/Action Port'
         */
        VTXR_ac_V2H_MiN_SOC_Slct(tmpRead_3, rtb_Merge_Outport_1_i,
            (&(VeVTXR_Pct_HVBattMinSOC_DS)));

        /* End of Outputs for SubSystem: '<S179>/V2V_MiN_SOC_Slct' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S179>/Dflt_MiN_SOC_Slct' incorporates:
         *  ActionPort: '<S182>/Action Port'
         */
        /* Merge: '<S179>/Merge_Outport_1' incorporates:
         *  Constant: '<S191>/Calib'
         *  SignalConversion generated from: '<S182>/SOC_Out'
         */
        VeVTXR_Pct_HVBattMinSOC_DS = KeVTXR_Pct_MinSOCDflt;

        /* End of Outputs for SubSystem: '<S179>/Dflt_MiN_SOC_Slct' */
    }

    /* End of If: '<S179>/If' */

    /* Switch: '<S179>/Switch' incorporates:
     *  Constant: '<S181>/Constant'
     *  Constant: '<S184>/Calib'
     *  Logic: '<S179>/AND5'
     *  RelationalOperator: '<S179>/Greater Than or Equal '
     *  SignalConversion generated from: '<S1>/VeTRGR_e_VldtdTransRngSt'
     */
    if ((CeTRGR_e_TransRangePark != ((uint32)
            rtb_TmpSignalConversionAtVeTRGR_e_VldtdT)) && (!KeVTXR_b_ByPassPRNDL))
    {
        /* VariantMerge generated from: '<S175>/MinSoC' incorporates:
         *  Constant: '<S183>/Calib'
         */
        VeVTXR_Pct_HVBattMinSOC_DS = KeVTXR_Pct_MinSOCDfltNotInPark;
    }

    /* End of Switch: '<S179>/Switch' */
    /* End of Outputs for SubSystem: '<S175>/SoC_4fm_HMI' */
#else

    /* Outputs for Atomic SubSystem: '<S175>/No_SoC_inpt' */
    /* VariantMerge generated from: '<S175>/MinSoC' incorporates:
     *  Constant: '<S180>/Calib'
     */
    VeVTXR_Pct_HVBattMinSOC_DS = KeVTXR_Pct_MinSOCDflt;

    /* End of Outputs for SubSystem: '<S175>/No_SoC_inpt' */
#endif

    /* End of Outputs for SubSystem: '<S6>/SoC_Slct' */

    /* Outputs for Atomic SubSystem: '<S6>/VarSS_HMI_NonHMI' */
#if Rte_SysCon_Variant_VTXR_HMIIntrfce

    /* Outputs for Atomic SubSystem: '<S176>/HMI' */
    /* If: '<S195>/If' incorporates:
     *  Constant: '<S201>/Calib'
     *  Constant: '<S202>/Calib'
     *  Constant: '<S203>/Calib'
     *  Inport: '<Root>/VeCITR_b_V2HModeReq'
     *  Inport: '<Root>/VeCITR_b_V2HModeReqFA'
     *  Inport: '<Root>/VeCITR_b_V2LModeReq'
     *  Inport: '<Root>/VeCITR_b_V2LModeReqFA'
     *  Inport: '<Root>/VeCITR_b_V2VModeReq'
     *  Inport: '<Root>/VeCITR_b_V2VModeReqFA'
     */
    if (KeVTXR_b_UseV2HParam)
    {
        (void)Rte_Read_VeCITR_b_V2HModeReqFA_Value(&tmpRead_2);
        (void)Rte_Read_VeCITR_b_V2HModeReq_Value(&tmpRead_1);

        /* Outputs for IfAction SubSystem: '<S195>/V2H_Mode_Req_Slct' incorporates:
         *  ActionPort: '<S204>/Action Port'
         */
        VTXR_ac_V2H_Mode_Req_Slct(tmpRead_1, tmpRead_2, &rtb_Merge_Outport_1_i);

        /* End of Outputs for SubSystem: '<S195>/V2H_Mode_Req_Slct' */
    }
    else if (KeVTXR_b_UseV2LParam)
    {
        (void)Rte_Read_VeCITR_b_V2LModeReqFA_Value(&tmpRead_2);
        (void)Rte_Read_VeCITR_b_V2LModeReq_Value(&tmpRead_1);

        /* Outputs for IfAction SubSystem: '<S195>/V2L_Mode_Req_Slct' incorporates:
         *  ActionPort: '<S205>/Action Port'
         */
        VTXR_ac_V2H_Mode_Req_Slct(tmpRead_1, tmpRead_2, &rtb_Merge_Outport_1_i);

        /* End of Outputs for SubSystem: '<S195>/V2L_Mode_Req_Slct' */
    }
    else if (KeVTXR_b_UseV2VParam)
    {
        (void)Rte_Read_VeCITR_b_V2VModeReqFA_Value(&tmpRead_2);
        (void)Rte_Read_VeCITR_b_V2VModeReq_Value(&tmpRead_1);

        /* Outputs for IfAction SubSystem: '<S195>/V2V_Mode_Req_Slct' incorporates:
         *  ActionPort: '<S206>/Action Port'
         */
        VTXR_ac_V2H_Mode_Req_Slct(tmpRead_1, tmpRead_2, &rtb_Merge_Outport_1_i);

        /* End of Outputs for SubSystem: '<S195>/V2V_Mode_Req_Slct' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S195>/Dflt_Mode_Req_Slct' incorporates:
         *  ActionPort: '<S199>/Action Port'
         */
        /* Merge: '<S195>/Merge_Outport_1' incorporates:
         *  Constant: '<S199>/FALSE Constant1'
         *  SignalConversion generated from: '<S199>/Md_Out'
         */
        rtb_Merge_Outport_1_i = false;

        /* End of Outputs for SubSystem: '<S195>/Dflt_Mode_Req_Slct' */
    }

    /* End of If: '<S195>/If' */

    /* Logic: '<S195>/AND1' incorporates:
     *  Constant: '<S198>/Constant'
     *  Constant: '<S200>/Calib'
     *  DataStoreWrite: '<S195>/Data Store Write'
     *  Logic: '<S195>/AND5'
     *  RelationalOperator: '<S195>/Greater Than or Equal 1'
     *  SignalConversion generated from: '<S1>/VeTRGR_e_VldtdTransRngSt'
     */
    VeVTXR_b_ButtnPressd_DS = (((CeTRGR_e_TransRangePark == ((uint32)
        rtb_TmpSignalConversionAtVeTRGR_e_VldtdT)) || (KeVTXR_b_ByPassPRNDL)) &&
        rtb_Merge_Outport_1_i);

    /* End of Outputs for SubSystem: '<S176>/HMI' */
#elif Rte_SysCon_Variant_VTXR_NoHMIIntrfce

    /* Outputs for Atomic SubSystem: '<S176>/Non_HMI' */
    /* Inport: '<Root>/VeBRKR_b_AeCoastSwitchStatC2FA' */
    (void)Rte_Read_VeBRKR_b_AeCoastSwitchStatC2FA_Value(&rtb_AND1_m);

    /* Inport: '<Root>/VeBRKR_b_AeCoastSwitchStatC1FA' */
    (void)Rte_Read_VeBRKR_b_AeCoastSwitchStatC1FA_Value(&rtb_OR1_b);

    /* Inport: '<Root>/VeBRKR_b_AeCoastSwitchFA' */
    (void)Rte_Read_VeBRKR_b_AeCoastSwitchFA_Value(&tmpRead_0);

    /* Inport: '<Root>/VeBRKR_b_AeCoastSwitchStatFA' */
    (void)Rte_Read_VeBRKR_b_AeCoastSwitchStatFA_Value(&tmpRead);

    /* Inport: '<Root>/VeBRKR_e_AeCoastSwitchStat' */
    (void)Rte_Read_VeBRKR_e_AeCoastSwitchStat_Value((&(VeVTXR_e_HybButtonStatFnl)));

    /* Switch: '<S196>/Switch' incorporates:
     *  Constant: '<S213>/Calib'
     *  Logic: '<S196>/Logical1'
     */
    if ((((tmpRead || tmpRead_0) || rtb_OR1_b) || rtb_AND1_m) ||
            (KeVTXR_b_DsblHybBttn))
    {
        /* Switch: '<S196>/Switch' incorporates:
         *  Constant: '<S208>/Constant'
         *  Inport: '<Root>/VeBRKR_e_AeCoastSwitchStat'
         */
        VeVTXR_e_HybButtonStatFnl = CeBRKR_e_Button_Unpressed;
    }

    /* End of Switch: '<S196>/Switch' */

    /* Logic: '<S196>/AND1' incorporates:
     *  Constant: '<S209>/Constant'
     *  Constant: '<S210>/Constant'
     *  Constant: '<S212>/Calib'
     *  Logic: '<S196>/AND5'
     *  RelationalOperator: '<S196>/Greater Than or Equal '
     *  RelationalOperator: '<S196>/Greater Than or Equal 1'
     *  SignalConversion generated from: '<S1>/VeTRGR_e_VldtdTransRngSt'
     *  Switch: '<S196>/Switch'
     */
    rtb_AND1_m = (((CeTRGR_e_TransRangePark == ((uint32)
                     rtb_TmpSignalConversionAtVeTRGR_e_VldtdT)) ||
                   (KeVTXR_b_ByPassPRNDL)) && (CeBRKR_e_Button_Pressed ==
                   ((uint32)VeVTXR_e_HybButtonStatFnl)));

    /* Outputs for Atomic SubSystem: '<S196>/EdgeRising' */
    /* Logic: '<S211>/OR1' incorporates:
     *  UnitDelay: '<S211>/Unit Delay'
     */
    rtb_OR1_b = !VTXR_ac_DW.UnitDelay_DSTATE_i;

    /* Update for UnitDelay: '<S211>/Unit Delay' */
    VTXR_ac_DW.UnitDelay_DSTATE_i = rtb_AND1_m;

    /* Outputs for Enabled SubSystem: '<S196>/ButnPrsNOPrs' incorporates:
     *  EnablePort: '<S207>/Enable'
     */
    /* Logic: '<S211>/AND' */
    if (rtb_AND1_m && rtb_OR1_b)
    {
        /* DataStoreWrite: '<S207>/Data Store Write' incorporates:
         *  DataStoreRead: '<S207>/Data Store Read1'
         *  Logic: '<S207>/AND1'
         */
        VeVTXR_b_ButtnPressd_DS = !VeVTXR_b_ButtnPressd_DS;
    }

    /* End of Logic: '<S211>/AND' */
    /* End of Outputs for SubSystem: '<S196>/ButnPrsNOPrs' */
    /* End of Outputs for SubSystem: '<S196>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S176>/Non_HMI' */
#else

    /* Outputs for Atomic SubSystem: '<S176>/PP_Inactv' */
    /* DataStoreWrite: '<S197>/Data Store Write' incorporates:
     *  Constant: '<S197>/FALSE Constant'
     */
    VeVTXR_b_ButtnPressd_DS = false;

    /* End of Outputs for SubSystem: '<S176>/PP_Inactv' */
#endif

    /* End of Outputs for SubSystem: '<S6>/VarSS_HMI_NonHMI' */

    /* Outputs for Atomic SubSystem: '<S6>/VarSS_PP_Active' */
#if Rte_SysCon_Variant_VTXR_PowPanelEqupd

    /* Outputs for Atomic SubSystem: '<S177>/PP_Actv' */
    /* Inport: '<Root>/VeVTLR_b_OnboardPP2_Dtctd' */
    (void)Rte_Read_VeVTLR_b_OnboardPP2_Dtctd_Value(&tmpRead_7);

    /* Inport: '<Root>/VeVTLR_b_OnboardPP1_Dtctd' */
    (void)Rte_Read_VeVTLR_b_OnboardPP1_Dtctd_Value(&tmpRead_6);

    /* Inport: '<Root>/VeVDVR_b_V2VPlugIn_Auth' */
    (void)Rte_Read_VeVDVR_b_V2VPlugIn_Auth_Value(&tmpRead_5);

    /* Inport: '<Root>/VeHSWR_b_HoodOpen' */
    (void)Rte_Read_VeHSWR_b_HoodOpen_Value(&tmpRead_4);

    /* If: '<S214>/If' incorporates:
     *  Constant: '<S218>/Calib'
     *  Constant: '<S219>/Calib'
     *  Constant: '<S220>/Calib'
     *  Inport: '<S224>/V2VAuth'
     *  Logic: '<S223>/AND4'
     */
    if (!KeVTXR_b_UseV2HParam)
    {
        if (KeVTXR_b_UseV2LParam)
        {
            /* Outputs for IfAction SubSystem: '<S214>/V2L_PP_Auth' incorporates:
             *  ActionPort: '<S223>/Action Port'
             */
            rtb_TmpSignalConversionAtVeVTLR_b_V2LPlu = (tmpRead_6 || tmpRead_7);

            /* End of Outputs for SubSystem: '<S214>/V2L_PP_Auth' */
        }
        else
        {
            if (KeVTXR_b_UseV2VParam)
            {
                /* Outputs for IfAction SubSystem: '<S214>/V2V_PP_Auth' incorporates:
                 *  ActionPort: '<S224>/Action Port'
                 */
                rtb_TmpSignalConversionAtVeVTLR_b_V2LPlu = tmpRead_5;

                /* End of Outputs for SubSystem: '<S214>/V2V_PP_Auth' */
            }
        }
    }

    /* End of If: '<S214>/If' */

    /* Logic: '<S214>/AND1' incorporates:
     *  Logic: '<S214>/AND2'
     *  Logic: '<S214>/AND3'
     */
    VeVTXR_b_PowPanelActvIN = (((!rtb_TmpSignalConversionAtVeRTMR_b_InPlan) &&
        rtb_TmpSignalConversionAtVeVTLR_b_V2LPlu) && (!tmpRead_4));

    /* VariantMerge generated from: '<S177>/PPActv' incorporates:
     *  Constant: '<S216>/Constant'
     *  Constant: '<S217>/Calib'
     *  Logic: '<S214>/AND4'
     *  Logic: '<S214>/AND5'
     *  RelationalOperator: '<S214>/Greater Than or Equal '
     *  SignalConversion generated from: '<S1>/VeTRGR_e_VldtdTransRngSt'
     */
    VTXR_ac_B.VariantMergeForOutportPPActv = (((CeTRGR_e_TransRangePark ==
        ((uint32)rtb_TmpSignalConversionAtVeTRGR_e_VldtdT)) ||
        (KeVTXR_b_ByPassPRNDL)) && (VeVTXR_b_PowPanelActvIN));

    /* End of Outputs for SubSystem: '<S177>/PP_Actv' */
#else

    /* Outputs for Atomic SubSystem: '<S177>/PP_Inactv' */
    /* VariantMerge generated from: '<S177>/PPActv' incorporates:
     *  Constant: '<S215>/FALSE Constant'
     */
    VTXR_ac_B.VariantMergeForOutportPPActv = false;

    /* End of Outputs for SubSystem: '<S177>/PP_Inactv' */
#endif

    /* End of Outputs for SubSystem: '<S6>/VarSS_PP_Active' */
#if Rte_SysCon_Variant_VTXR_HMIIntrfce || Rte_SysCon_Variant_VTXR_NoHMIIntrfce

    /* Outputs for Function Call SubSystem: '<S1>/VTXC_ButtonProc' */
    /* Outputs for Atomic SubSystem: '<S3>/VarSS_HybBtnProc' */
#if Rte_SysCon_Variant_VTXR_HMIIntrfce

    /* Outputs for Atomic SubSystem: '<S8>/HMI_ButtonProc' */
    /* VariantMerge generated from: '<S8>/ButtonON' incorporates:
     *  DataStoreRead: '<S9>/Data Store Read1'
     *  Logic: '<S9>/AND2'
     */
    VeVTXR_b_HybButtnONFnl = (((VTXR_ac_B.VariantMergeForOutportPPActv) &&
        (VeVTXR_b_ButtnPressd_DS)) &&
        (VTXR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct));

    /* End of Outputs for SubSystem: '<S8>/HMI_ButtonProc' */
#elif Rte_SysCon_Variant_VTXR_NoHMIIntrfce

    /* Outputs for Atomic SubSystem: '<S8>/NonHMI_ButtonProc' */
    /* VariantMerge generated from: '<S8>/ButtonON' incorporates:
     *  DataStoreRead: '<S10>/Data Store Read'
     *  DataStoreRead: '<S10>/Data Store Read1'
     *  Logic: '<S10>/AND2'
     *  Logic: '<S10>/AND5'
     *  Logic: '<S10>/AND6'
     */
    VeVTXR_b_HybButtnONFnl = ((VTXR_ac_B.VariantMergeForOutportPPActv) &&
        ((VeVTXR_b_ButtnPressd_DS) && (!VeVTXR_b_BlinkLED_DS)));

    /* Outputs for Atomic SubSystem: '<S10>/EdgeFalling' */
    /* Logic: '<S11>/AND' incorporates:
     *  Logic: '<S11>/OR1'
     *  UnitDelay: '<S11>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeVTLR_b_V2LPlu =
        ((!VTXR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct) &&
         (VTXR_ac_DW.UnitDelay_DSTATE_h));

    /* Update for UnitDelay: '<S11>/Unit Delay' */
    VTXR_ac_DW.UnitDelay_DSTATE_h =
        VTXR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct;

    /* End of Outputs for SubSystem: '<S10>/EdgeFalling' */

    /* Outputs for Enabled SubSystem: '<S10>/Fnl_Button_Off' incorporates:
     *  EnablePort: '<S12>/Enable'
     */
    /* DataStoreWrite: '<S12>/Data Store Write' incorporates:
     *  Logic: '<S10>/AND1'
     *  Logic: '<S10>/AND3'
     */
    VeVTXR_b_ButtnPressd_DS = (((VeVTXR_b_HybButtnONFnl) &&
        (!rtb_TmpSignalConversionAtVeVTLR_b_V2LPlu)) && (VeVTXR_b_ButtnPressd_DS));

    /* End of Outputs for SubSystem: '<S10>/Fnl_Button_Off' */
    /* End of Outputs for SubSystem: '<S8>/NonHMI_ButtonProc' */
#endif

    /* End of Outputs for SubSystem: '<S3>/VarSS_HybBtnProc' */
    /* End of Outputs for SubSystem: '<S1>/VTXC_ButtonProc' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
#endif

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/VTXC_ExecSTM'
     */
    /* Outputs for Atomic SubSystem: '<S4>/VarSS_PP_STM' */
#if Rte_SysCon_Variant_VTXR_HMIIntrfce

    /* Outputs for Atomic SubSystem: '<S13>/HMI_PP' */
    /* Chart: '<S21>/VTXC_StateMachine' incorporates:
     *  DataStoreRead: '<S21>/Dsr_STMTrigger'
     */
    /* Gateway: VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/VTXC_STM/VTXC_StateMachine */
    /* During: VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/VTXC_STM/VTXC_StateMachine */
    if (((uint32)VTXR_ac_DW.is_active_c3_VTXR_ac) == 0U)
    {
        /* Entry: VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/VTXC_STM/VTXC_StateMachine */
        VTXR_ac_DW.is_active_c3_VTXR_ac = 1U;

        /* Entry Internal: VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/VTXC_STM/VTXC_StateMachine */
        /* Transition: '<S67>:6' */
        VTXR_ac_DW.is_c3_VTXR_ac = VTXR_ac_IN_DefaultMd;

        /* Outputs for Function Call SubSystem: '<S14>/FaultChks' */
        /* Entry 'DefaultMd': '<S67>:5' */
        /* Event: '<S67>:30' */
        VTXR_ac_FaultChks(VTXR_ac_B.TmpSignalConversionAtVeSTRR_g_StrtDisAll,
                          &VTXR_ac_B.FaultChks);

        /* End of Outputs for SubSystem: '<S14>/FaultChks' */

        /* Outputs for Function Call SubSystem: '<S17>/DfltMdEnt' */
        /* Event: '<S67>:31' */
        VTXR_ac_DfltMdEnt();

        /* End of Outputs for SubSystem: '<S17>/DfltMdEnt' */

        /* Outputs for Function Call SubSystem: '<S17>/DfltMdDur' */
        /* Event: '<S67>:32' */
        VTXR_ac_DfltMdDur(VTXR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt,
                          VTXR_ac_B.VariantMergeForOutportPPActv,
                          VeVTXR_b_HybButtnONFnl,
                          VTXR_ac_B.FaultChks.LeVTXR_b_StrtDsAllw,
                          VTXR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct);

        /* End of Outputs for SubSystem: '<S17>/DfltMdDur' */
    }
    else
    {
        switch (VTXR_ac_DW.is_c3_VTXR_ac)
        {
          case VTXR_ac_IN_DefaultMd:
            /* During 'DefaultMd': '<S67>:5' */
            switch (VeVTXR_e_STMTrigger_DS)
            {
              case CeVTXR_e_ElecMdTrg:
                /* Transition: '<S67>:12' */
                VTXR_ac_DW.is_c3_VTXR_ac = VTXR_ac_IN_ElectricMd;

                /* Outputs for Function Call SubSystem: '<S14>/FaultChks' */
                /* Entry 'ElectricMd': '<S67>:1' */
                /* Event: '<S67>:30' */
                VTXR_ac_FaultChks
                    (VTXR_ac_B.TmpSignalConversionAtVeSTRR_g_StrtDisAll,
                     &VTXR_ac_B.FaultChks);

                /* End of Outputs for SubSystem: '<S14>/FaultChks' */

                /* Outputs for Function Call SubSystem: '<S18>/ElecMdEnt' */
                /* Event: '<S67>:38' */
                VTXR_ac_ElecMdEnt();

                /* End of Outputs for SubSystem: '<S18>/ElecMdEnt' */

                /* Outputs for Function Call SubSystem: '<S18>/ElectricMdDur' */
                /* Event: '<S67>:25' */
                VTXR_ac_ElectricMdDur
                    (VTXR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt,
                     VTXR_ac_B.VariantMergeForOutportPPActv,
                     VeVTXR_b_HybButtnONFnl,
                     VTXR_ac_B.FaultChks.LeVTXR_b_StrtDsAllw,
                     VTXR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct);

                /* End of Outputs for SubSystem: '<S18>/ElectricMdDur' */
                break;

              case CeVTXR_e_HybMdTrg:
                /* Transition: '<S67>:17' */
                VTXR_ac_DW.is_c3_VTXR_ac = VTXR_ac_IN_HybridMd;

                /* Outputs for Function Call SubSystem: '<S14>/FaultChks' */
                /* Entry 'HybridMd': '<S67>:3' */
                /* Event: '<S67>:30' */
                VTXR_ac_FaultChks
                    (VTXR_ac_B.TmpSignalConversionAtVeSTRR_g_StrtDisAll,
                     &VTXR_ac_B.FaultChks);

                /* End of Outputs for SubSystem: '<S14>/FaultChks' */

                /* Outputs for Function Call SubSystem: '<S20>/HybridMdEnt' */
                /* Event: '<S67>:26' */
                VTXR_ac_HybridMdEnt();

                /* End of Outputs for SubSystem: '<S20>/HybridMdEnt' */

                /* Outputs for Function Call SubSystem: '<S20>/HybridMdDur' */
                /* Event: '<S67>:27' */
                VTXR_ac_HybridMdDur
                    (VTXR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt,
                     VTXR_ac_B.VariantMergeForOutportPPActv,
                     VeVTXR_b_HybButtnONFnl,
                     VTXR_ac_B.FaultChks.LeVTXR_b_StrtDsAllw,
                     VTXR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     VTXR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa);

                /* End of Outputs for SubSystem: '<S20>/HybridMdDur' */
                break;

              default:
                /* Outputs for Function Call SubSystem: '<S14>/FaultChks' */
                /* Event: '<S67>:30' */
                VTXR_ac_FaultChks
                    (VTXR_ac_B.TmpSignalConversionAtVeSTRR_g_StrtDisAll,
                     &VTXR_ac_B.FaultChks);

                /* End of Outputs for SubSystem: '<S14>/FaultChks' */

                /* Outputs for Function Call SubSystem: '<S17>/DfltMdDur' */
                /* Event: '<S67>:32' */
                VTXR_ac_DfltMdDur
                    (VTXR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt,
                     VTXR_ac_B.VariantMergeForOutportPPActv,
                     VeVTXR_b_HybButtnONFnl,
                     VTXR_ac_B.FaultChks.LeVTXR_b_StrtDsAllw,
                     VTXR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct);

                /* End of Outputs for SubSystem: '<S17>/DfltMdDur' */
                break;
            }
            break;

          case VTXR_ac_IN_ElectricMd:
            /* During 'ElectricMd': '<S67>:1' */
            switch (VeVTXR_e_STMTrigger_DS)
            {
              case CeVTXR_e_HybMdTrg:
                /* Transition: '<S67>:7' */
                VTXR_ac_DW.is_c3_VTXR_ac = VTXR_ac_IN_HybridMd;

                /* Outputs for Function Call SubSystem: '<S14>/FaultChks' */
                /* Entry 'HybridMd': '<S67>:3' */
                /* Event: '<S67>:30' */
                VTXR_ac_FaultChks
                    (VTXR_ac_B.TmpSignalConversionAtVeSTRR_g_StrtDisAll,
                     &VTXR_ac_B.FaultChks);

                /* End of Outputs for SubSystem: '<S14>/FaultChks' */

                /* Outputs for Function Call SubSystem: '<S20>/HybridMdEnt' */
                /* Event: '<S67>:26' */
                VTXR_ac_HybridMdEnt();

                /* End of Outputs for SubSystem: '<S20>/HybridMdEnt' */

                /* Outputs for Function Call SubSystem: '<S20>/HybridMdDur' */
                /* Event: '<S67>:27' */
                VTXR_ac_HybridMdDur
                    (VTXR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt,
                     VTXR_ac_B.VariantMergeForOutportPPActv,
                     VeVTXR_b_HybButtnONFnl,
                     VTXR_ac_B.FaultChks.LeVTXR_b_StrtDsAllw,
                     VTXR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     VTXR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa);

                /* End of Outputs for SubSystem: '<S20>/HybridMdDur' */
                break;

              case CeVTXR_e_DfltMdTrg:
                /* Transition: '<S67>:16' */
                VTXR_ac_DW.is_c3_VTXR_ac = VTXR_ac_IN_DefaultMd;

                /* Outputs for Function Call SubSystem: '<S14>/FaultChks' */
                /* Entry 'DefaultMd': '<S67>:5' */
                /* Event: '<S67>:30' */
                VTXR_ac_FaultChks
                    (VTXR_ac_B.TmpSignalConversionAtVeSTRR_g_StrtDisAll,
                     &VTXR_ac_B.FaultChks);

                /* End of Outputs for SubSystem: '<S14>/FaultChks' */

                /* Outputs for Function Call SubSystem: '<S17>/DfltMdEnt' */
                /* Event: '<S67>:31' */
                VTXR_ac_DfltMdEnt();

                /* End of Outputs for SubSystem: '<S17>/DfltMdEnt' */

                /* Outputs for Function Call SubSystem: '<S17>/DfltMdDur' */
                /* Event: '<S67>:32' */
                VTXR_ac_DfltMdDur
                    (VTXR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt,
                     VTXR_ac_B.VariantMergeForOutportPPActv,
                     VeVTXR_b_HybButtnONFnl,
                     VTXR_ac_B.FaultChks.LeVTXR_b_StrtDsAllw,
                     VTXR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct);

                /* End of Outputs for SubSystem: '<S17>/DfltMdDur' */
                break;

              default:
                /* Outputs for Function Call SubSystem: '<S14>/FaultChks' */
                /* Event: '<S67>:30' */
                VTXR_ac_FaultChks
                    (VTXR_ac_B.TmpSignalConversionAtVeSTRR_g_StrtDisAll,
                     &VTXR_ac_B.FaultChks);

                /* End of Outputs for SubSystem: '<S14>/FaultChks' */

                /* Outputs for Function Call SubSystem: '<S18>/ElectricMdDur' */
                /* Event: '<S67>:25' */
                VTXR_ac_ElectricMdDur
                    (VTXR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt,
                     VTXR_ac_B.VariantMergeForOutportPPActv,
                     VeVTXR_b_HybButtnONFnl,
                     VTXR_ac_B.FaultChks.LeVTXR_b_StrtDsAllw,
                     VTXR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct);

                /* End of Outputs for SubSystem: '<S18>/ElectricMdDur' */
                break;
            }
            break;

          default:
            /* During 'HybridMd': '<S67>:3' */
            switch (VeVTXR_e_STMTrigger_DS)
            {
              case CeVTXR_e_DfltMdTrg:
                /* Transition: '<S67>:15' */
                VTXR_ac_DW.is_c3_VTXR_ac = VTXR_ac_IN_DefaultMd;

                /* Outputs for Function Call SubSystem: '<S14>/FaultChks' */
                /* Entry 'DefaultMd': '<S67>:5' */
                /* Event: '<S67>:30' */
                VTXR_ac_FaultChks
                    (VTXR_ac_B.TmpSignalConversionAtVeSTRR_g_StrtDisAll,
                     &VTXR_ac_B.FaultChks);

                /* End of Outputs for SubSystem: '<S14>/FaultChks' */

                /* Outputs for Function Call SubSystem: '<S17>/DfltMdEnt' */
                /* Event: '<S67>:31' */
                VTXR_ac_DfltMdEnt();

                /* End of Outputs for SubSystem: '<S17>/DfltMdEnt' */

                /* Outputs for Function Call SubSystem: '<S17>/DfltMdDur' */
                /* Event: '<S67>:32' */
                VTXR_ac_DfltMdDur
                    (VTXR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt,
                     VTXR_ac_B.VariantMergeForOutportPPActv,
                     VeVTXR_b_HybButtnONFnl,
                     VTXR_ac_B.FaultChks.LeVTXR_b_StrtDsAllw,
                     VTXR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct);

                /* End of Outputs for SubSystem: '<S17>/DfltMdDur' */
                break;

              case CeVTXR_e_ElecMdTrg:
                /* Transition: '<S67>:37' */
                VTXR_ac_DW.is_c3_VTXR_ac = VTXR_ac_IN_ElectricMd;

                /* Outputs for Function Call SubSystem: '<S14>/FaultChks' */
                /* Entry 'ElectricMd': '<S67>:1' */
                /* Event: '<S67>:30' */
                VTXR_ac_FaultChks
                    (VTXR_ac_B.TmpSignalConversionAtVeSTRR_g_StrtDisAll,
                     &VTXR_ac_B.FaultChks);

                /* End of Outputs for SubSystem: '<S14>/FaultChks' */

                /* Outputs for Function Call SubSystem: '<S18>/ElecMdEnt' */
                /* Event: '<S67>:38' */
                VTXR_ac_ElecMdEnt();

                /* End of Outputs for SubSystem: '<S18>/ElecMdEnt' */

                /* Outputs for Function Call SubSystem: '<S18>/ElectricMdDur' */
                /* Event: '<S67>:25' */
                VTXR_ac_ElectricMdDur
                    (VTXR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt,
                     VTXR_ac_B.VariantMergeForOutportPPActv,
                     VeVTXR_b_HybButtnONFnl,
                     VTXR_ac_B.FaultChks.LeVTXR_b_StrtDsAllw,
                     VTXR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct);

                /* End of Outputs for SubSystem: '<S18>/ElectricMdDur' */
                break;

              default:
                /* Outputs for Function Call SubSystem: '<S14>/FaultChks' */
                /* Event: '<S67>:30' */
                VTXR_ac_FaultChks
                    (VTXR_ac_B.TmpSignalConversionAtVeSTRR_g_StrtDisAll,
                     &VTXR_ac_B.FaultChks);

                /* End of Outputs for SubSystem: '<S14>/FaultChks' */

                /* Outputs for Function Call SubSystem: '<S20>/HybridMdDur' */
                /* Event: '<S67>:27' */
                VTXR_ac_HybridMdDur
                    (VTXR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt,
                     VTXR_ac_B.VariantMergeForOutportPPActv,
                     VeVTXR_b_HybButtnONFnl,
                     VTXR_ac_B.FaultChks.LeVTXR_b_StrtDsAllw,
                     VTXR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     VTXR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa);

                /* End of Outputs for SubSystem: '<S20>/HybridMdDur' */
                break;
            }
            break;
        }
    }

    /* End of Chart: '<S21>/VTXC_StateMachine' */
    /* End of Outputs for SubSystem: '<S13>/HMI_PP' */
#elif Rte_SysCon_Variant_VTXR_NoHMIIntrfce

    /* Outputs for Atomic SubSystem: '<S13>/Non_HMI_PP' */
    /* Chart: '<S73>/VTXC_StateMachine' incorporates:
     *  DataStoreRead: '<S73>/Dsr_STMTrigger'
     */
    /* Gateway: VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/VTXC_STM/VTXC_StateMachine */
    /* During: VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/VTXC_STM/VTXC_StateMachine */
    if (((uint32)VTXR_ac_DW.is_active_c2_VTXR_ac) == 0U)
    {
        /* Entry: VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/VTXC_STM/VTXC_StateMachine */
        VTXR_ac_DW.is_active_c2_VTXR_ac = 1U;

        /* Entry Internal: VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/VTXC_STM/VTXC_StateMachine */
        /* Transition: '<S155>:6' */
        VTXR_ac_DW.is_c2_VTXR_ac = VTXR_ac_IN_DefaultMd;

        /* Outputs for Function Call SubSystem: '<S15>/FaultChks' */
        /* Entry 'DefaultMd': '<S155>:5' */
        /* Event: '<S155>:30' */
        VTXR_ac_FaultChks(VTXR_ac_B.TmpSignalConversionAtVeSTRR_g_StrtDisAll,
                          &VTXR_ac_B.FaultChks_eu);

        /* End of Outputs for SubSystem: '<S15>/FaultChks' */

        /* Outputs for Function Call SubSystem: '<S68>/DfltMdEnt' */
        /* Event: '<S155>:31' */
        VTXR_ac_DfltMdEnt_n();

        /* End of Outputs for SubSystem: '<S68>/DfltMdEnt' */

        /* Outputs for Function Call SubSystem: '<S68>/DfltMdDur' */
        /* Event: '<S155>:32' */
        VTXR_ac_DfltMdDur_b(VTXR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt,
                            VTXR_ac_B.VariantMergeForOutportPPActv,
                            VeVTXR_b_HybButtnONFnl,
                            VTXR_ac_B.FaultChks_eu.LeVTXR_b_StrtDsAllw,
                            VTXR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                            &VTXR_ac_DW.DfltMdDur_b);

        /* End of Outputs for SubSystem: '<S68>/DfltMdDur' */
    }
    else
    {
        switch (VTXR_ac_DW.is_c2_VTXR_ac)
        {
          case VTXR_ac_IN_DefaultMd:
            /* During 'DefaultMd': '<S155>:5' */
            switch (VeVTXR_e_STMTrigger_DS)
            {
              case CeVTXR_e_ElecMdTrg:
                /* Transition: '<S155>:12' */
                VTXR_ac_DW.is_c2_VTXR_ac = VTXR_ac_IN_ElectricMd;

                /* Outputs for Function Call SubSystem: '<S15>/FaultChks' */
                /* Entry 'ElectricMd': '<S155>:1' */
                /* Event: '<S155>:30' */
                VTXR_ac_FaultChks
                    (VTXR_ac_B.TmpSignalConversionAtVeSTRR_g_StrtDisAll,
                     &VTXR_ac_B.FaultChks_eu);

                /* End of Outputs for SubSystem: '<S15>/FaultChks' */

                /* Outputs for Function Call SubSystem: '<S69>/ElecMdEnt' */
                /* Event: '<S155>:38' */
                VTXR_ac_ElecMdEnt_c();

                /* End of Outputs for SubSystem: '<S69>/ElecMdEnt' */

                /* Outputs for Function Call SubSystem: '<S69>/ElectricMdDur' */
                /* Event: '<S155>:25' */
                VTXR_ac_ElectricMdDur_b
                    (VTXR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt,
                     VTXR_ac_B.VariantMergeForOutportPPActv,
                     VeVTXR_b_HybButtnONFnl,
                     VTXR_ac_B.FaultChks_eu.LeVTXR_b_StrtDsAllw,
                     VTXR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     &VTXR_ac_DW.ElectricMdDur_b);

                /* End of Outputs for SubSystem: '<S69>/ElectricMdDur' */
                break;

              case CeVTXR_e_GenMdTrg:
                /* Transition: '<S155>:41' */
                VTXR_ac_DW.is_c2_VTXR_ac = VTXR_ac_IN_GenMd;

                /* Outputs for Function Call SubSystem: '<S15>/FaultChks' */
                /* Entry 'GenMd': '<S155>:4' */
                /* Event: '<S155>:30' */
                VTXR_ac_FaultChks
                    (VTXR_ac_B.TmpSignalConversionAtVeSTRR_g_StrtDisAll,
                     &VTXR_ac_B.FaultChks_eu);

                /* End of Outputs for SubSystem: '<S15>/FaultChks' */

                /* Outputs for Function Call SubSystem: '<S71>/GenMdEnt' */
                /* Event: '<S155>:39' */
                VTXR_ac_GenMdEnt();

                /* End of Outputs for SubSystem: '<S71>/GenMdEnt' */

                /* Outputs for Function Call SubSystem: '<S71>/GenMdDuring' */
                /* Event: '<S155>:29' */
                VTXR_ac_GenMdDuring
                    (VTXR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt,
                     VTXR_ac_B.VariantMergeForOutportPPActv,
                     VeVTXR_b_HybButtnONFnl,
                     VTXR_ac_B.FaultChks_eu.LeVTXR_b_StrtDsAllw,
                     VTXR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     &VTXR_ac_DW.GenMdDuring);

                /* End of Outputs for SubSystem: '<S71>/GenMdDuring' */
                break;

              case CeVTXR_e_HybMdTrg:
                /* Transition: '<S155>:17' */
                VTXR_ac_DW.is_c2_VTXR_ac = VTXR_ac_IN_HybridMd_a;

                /* Outputs for Function Call SubSystem: '<S15>/FaultChks' */
                /* Entry 'HybridMd': '<S155>:3' */
                /* Event: '<S155>:30' */
                VTXR_ac_FaultChks
                    (VTXR_ac_B.TmpSignalConversionAtVeSTRR_g_StrtDisAll,
                     &VTXR_ac_B.FaultChks_eu);

                /* End of Outputs for SubSystem: '<S15>/FaultChks' */

                /* Outputs for Function Call SubSystem: '<S72>/HybridMdEnt' */
                /* Event: '<S155>:26' */
                VTXR_ac_HybridMdEnt_c();

                /* End of Outputs for SubSystem: '<S72>/HybridMdEnt' */

                /* Outputs for Function Call SubSystem: '<S72>/HybridMdDur' */
                /* Event: '<S155>:27' */
                VTXR_ac_HybridMdDur_f
                    (VTXR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt,
                     VTXR_ac_B.VariantMergeForOutportPPActv,
                     VeVTXR_b_HybButtnONFnl,
                     VTXR_ac_B.FaultChks_eu.LeVTXR_b_StrtDsAllw,
                     VTXR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     &VTXR_ac_DW.HybridMdDur_f);

                /* End of Outputs for SubSystem: '<S72>/HybridMdDur' */
                break;

              default:
                /* Outputs for Function Call SubSystem: '<S15>/FaultChks' */
                /* Event: '<S155>:30' */
                VTXR_ac_FaultChks
                    (VTXR_ac_B.TmpSignalConversionAtVeSTRR_g_StrtDisAll,
                     &VTXR_ac_B.FaultChks_eu);

                /* End of Outputs for SubSystem: '<S15>/FaultChks' */

                /* Outputs for Function Call SubSystem: '<S68>/DfltMdDur' */
                /* Event: '<S155>:32' */
                VTXR_ac_DfltMdDur_b
                    (VTXR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt,
                     VTXR_ac_B.VariantMergeForOutportPPActv,
                     VeVTXR_b_HybButtnONFnl,
                     VTXR_ac_B.FaultChks_eu.LeVTXR_b_StrtDsAllw,
                     VTXR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     &VTXR_ac_DW.DfltMdDur_b);

                /* End of Outputs for SubSystem: '<S68>/DfltMdDur' */
                break;
            }
            break;

          case VTXR_ac_IN_ElectricMd:
            /* During 'ElectricMd': '<S155>:1' */
            switch (VeVTXR_e_STMTrigger_DS)
            {
              case CeVTXR_e_HybMdTrg:
                /* Transition: '<S155>:7' */
                VTXR_ac_DW.is_c2_VTXR_ac = VTXR_ac_IN_HybridMd_a;

                /* Outputs for Function Call SubSystem: '<S15>/FaultChks' */
                /* Entry 'HybridMd': '<S155>:3' */
                /* Event: '<S155>:30' */
                VTXR_ac_FaultChks
                    (VTXR_ac_B.TmpSignalConversionAtVeSTRR_g_StrtDisAll,
                     &VTXR_ac_B.FaultChks_eu);

                /* End of Outputs for SubSystem: '<S15>/FaultChks' */

                /* Outputs for Function Call SubSystem: '<S72>/HybridMdEnt' */
                /* Event: '<S155>:26' */
                VTXR_ac_HybridMdEnt_c();

                /* End of Outputs for SubSystem: '<S72>/HybridMdEnt' */

                /* Outputs for Function Call SubSystem: '<S72>/HybridMdDur' */
                /* Event: '<S155>:27' */
                VTXR_ac_HybridMdDur_f
                    (VTXR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt,
                     VTXR_ac_B.VariantMergeForOutportPPActv,
                     VeVTXR_b_HybButtnONFnl,
                     VTXR_ac_B.FaultChks_eu.LeVTXR_b_StrtDsAllw,
                     VTXR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     &VTXR_ac_DW.HybridMdDur_f);

                /* End of Outputs for SubSystem: '<S72>/HybridMdDur' */
                break;

              case CeVTXR_e_DfltMdTrg:
                /* Transition: '<S155>:16' */
                VTXR_ac_DW.is_c2_VTXR_ac = VTXR_ac_IN_DefaultMd;

                /* Outputs for Function Call SubSystem: '<S15>/FaultChks' */
                /* Entry 'DefaultMd': '<S155>:5' */
                /* Event: '<S155>:30' */
                VTXR_ac_FaultChks
                    (VTXR_ac_B.TmpSignalConversionAtVeSTRR_g_StrtDisAll,
                     &VTXR_ac_B.FaultChks_eu);

                /* End of Outputs for SubSystem: '<S15>/FaultChks' */

                /* Outputs for Function Call SubSystem: '<S68>/DfltMdEnt' */
                /* Event: '<S155>:31' */
                VTXR_ac_DfltMdEnt_n();

                /* End of Outputs for SubSystem: '<S68>/DfltMdEnt' */

                /* Outputs for Function Call SubSystem: '<S68>/DfltMdDur' */
                /* Event: '<S155>:32' */
                VTXR_ac_DfltMdDur_b
                    (VTXR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt,
                     VTXR_ac_B.VariantMergeForOutportPPActv,
                     VeVTXR_b_HybButtnONFnl,
                     VTXR_ac_B.FaultChks_eu.LeVTXR_b_StrtDsAllw,
                     VTXR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     &VTXR_ac_DW.DfltMdDur_b);

                /* End of Outputs for SubSystem: '<S68>/DfltMdDur' */
                break;

              default:
                /* Outputs for Function Call SubSystem: '<S15>/FaultChks' */
                /* Event: '<S155>:30' */
                VTXR_ac_FaultChks
                    (VTXR_ac_B.TmpSignalConversionAtVeSTRR_g_StrtDisAll,
                     &VTXR_ac_B.FaultChks_eu);

                /* End of Outputs for SubSystem: '<S15>/FaultChks' */

                /* Outputs for Function Call SubSystem: '<S69>/ElectricMdDur' */
                /* Event: '<S155>:25' */
                VTXR_ac_ElectricMdDur_b
                    (VTXR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt,
                     VTXR_ac_B.VariantMergeForOutportPPActv,
                     VeVTXR_b_HybButtnONFnl,
                     VTXR_ac_B.FaultChks_eu.LeVTXR_b_StrtDsAllw,
                     VTXR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     &VTXR_ac_DW.ElectricMdDur_b);

                /* End of Outputs for SubSystem: '<S69>/ElectricMdDur' */
                break;
            }
            break;

          case VTXR_ac_IN_GenMd:
            /* During 'GenMd': '<S155>:4' */
            switch (VeVTXR_e_STMTrigger_DS)
            {
              case CeVTXR_e_DfltMdTrg:
                /* Transition: '<S155>:13' */
                VTXR_ac_DW.is_c2_VTXR_ac = VTXR_ac_IN_DefaultMd;

                /* Outputs for Function Call SubSystem: '<S15>/FaultChks' */
                /* Entry 'DefaultMd': '<S155>:5' */
                /* Event: '<S155>:30' */
                VTXR_ac_FaultChks
                    (VTXR_ac_B.TmpSignalConversionAtVeSTRR_g_StrtDisAll,
                     &VTXR_ac_B.FaultChks_eu);

                /* End of Outputs for SubSystem: '<S15>/FaultChks' */

                /* Outputs for Function Call SubSystem: '<S68>/DfltMdEnt' */
                /* Event: '<S155>:31' */
                VTXR_ac_DfltMdEnt_n();

                /* End of Outputs for SubSystem: '<S68>/DfltMdEnt' */

                /* Outputs for Function Call SubSystem: '<S68>/DfltMdDur' */
                /* Event: '<S155>:32' */
                VTXR_ac_DfltMdDur_b
                    (VTXR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt,
                     VTXR_ac_B.VariantMergeForOutportPPActv,
                     VeVTXR_b_HybButtnONFnl,
                     VTXR_ac_B.FaultChks_eu.LeVTXR_b_StrtDsAllw,
                     VTXR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     &VTXR_ac_DW.DfltMdDur_b);

                /* End of Outputs for SubSystem: '<S68>/DfltMdDur' */
                break;

              case CeVTXR_e_HybMdTrg:
                /* Transition: '<S155>:18' */
                VTXR_ac_DW.is_c2_VTXR_ac = VTXR_ac_IN_HybridMd_a;

                /* Outputs for Function Call SubSystem: '<S15>/FaultChks' */
                /* Entry 'HybridMd': '<S155>:3' */
                /* Event: '<S155>:30' */
                VTXR_ac_FaultChks
                    (VTXR_ac_B.TmpSignalConversionAtVeSTRR_g_StrtDisAll,
                     &VTXR_ac_B.FaultChks_eu);

                /* End of Outputs for SubSystem: '<S15>/FaultChks' */

                /* Outputs for Function Call SubSystem: '<S72>/HybridMdEnt' */
                /* Event: '<S155>:26' */
                VTXR_ac_HybridMdEnt_c();

                /* End of Outputs for SubSystem: '<S72>/HybridMdEnt' */

                /* Outputs for Function Call SubSystem: '<S72>/HybridMdDur' */
                /* Event: '<S155>:27' */
                VTXR_ac_HybridMdDur_f
                    (VTXR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt,
                     VTXR_ac_B.VariantMergeForOutportPPActv,
                     VeVTXR_b_HybButtnONFnl,
                     VTXR_ac_B.FaultChks_eu.LeVTXR_b_StrtDsAllw,
                     VTXR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     &VTXR_ac_DW.HybridMdDur_f);

                /* End of Outputs for SubSystem: '<S72>/HybridMdDur' */
                break;

              case CeVTXR_e_ElecMdTrg:
                /* Transition: '<S155>:10' */
                VTXR_ac_DW.is_c2_VTXR_ac = VTXR_ac_IN_ElectricMd;

                /* Outputs for Function Call SubSystem: '<S15>/FaultChks' */
                /* Entry 'ElectricMd': '<S155>:1' */
                /* Event: '<S155>:30' */
                VTXR_ac_FaultChks
                    (VTXR_ac_B.TmpSignalConversionAtVeSTRR_g_StrtDisAll,
                     &VTXR_ac_B.FaultChks_eu);

                /* End of Outputs for SubSystem: '<S15>/FaultChks' */

                /* Outputs for Function Call SubSystem: '<S69>/ElecMdEnt' */
                /* Event: '<S155>:38' */
                VTXR_ac_ElecMdEnt_c();

                /* End of Outputs for SubSystem: '<S69>/ElecMdEnt' */

                /* Outputs for Function Call SubSystem: '<S69>/ElectricMdDur' */
                /* Event: '<S155>:25' */
                VTXR_ac_ElectricMdDur_b
                    (VTXR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt,
                     VTXR_ac_B.VariantMergeForOutportPPActv,
                     VeVTXR_b_HybButtnONFnl,
                     VTXR_ac_B.FaultChks_eu.LeVTXR_b_StrtDsAllw,
                     VTXR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     &VTXR_ac_DW.ElectricMdDur_b);

                /* End of Outputs for SubSystem: '<S69>/ElectricMdDur' */
                break;

              default:
                /* Outputs for Function Call SubSystem: '<S15>/FaultChks' */
                /* Event: '<S155>:30' */
                VTXR_ac_FaultChks
                    (VTXR_ac_B.TmpSignalConversionAtVeSTRR_g_StrtDisAll,
                     &VTXR_ac_B.FaultChks_eu);

                /* End of Outputs for SubSystem: '<S15>/FaultChks' */

                /* Outputs for Function Call SubSystem: '<S71>/GenMdDuring' */
                /* Event: '<S155>:29' */
                VTXR_ac_GenMdDuring
                    (VTXR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt,
                     VTXR_ac_B.VariantMergeForOutportPPActv,
                     VeVTXR_b_HybButtnONFnl,
                     VTXR_ac_B.FaultChks_eu.LeVTXR_b_StrtDsAllw,
                     VTXR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     &VTXR_ac_DW.GenMdDuring);

                /* End of Outputs for SubSystem: '<S71>/GenMdDuring' */
                break;
            }
            break;

          default:
            /* During 'HybridMd': '<S155>:3' */
            switch (VeVTXR_e_STMTrigger_DS)
            {
              case CeVTXR_e_GenMdTrg:
                /* Transition: '<S155>:11' */
                VTXR_ac_DW.is_c2_VTXR_ac = VTXR_ac_IN_GenMd;

                /* Outputs for Function Call SubSystem: '<S15>/FaultChks' */
                /* Entry 'GenMd': '<S155>:4' */
                /* Event: '<S155>:30' */
                VTXR_ac_FaultChks
                    (VTXR_ac_B.TmpSignalConversionAtVeSTRR_g_StrtDisAll,
                     &VTXR_ac_B.FaultChks_eu);

                /* End of Outputs for SubSystem: '<S15>/FaultChks' */

                /* Outputs for Function Call SubSystem: '<S71>/GenMdEnt' */
                /* Event: '<S155>:39' */
                VTXR_ac_GenMdEnt();

                /* End of Outputs for SubSystem: '<S71>/GenMdEnt' */

                /* Outputs for Function Call SubSystem: '<S71>/GenMdDuring' */
                /* Event: '<S155>:29' */
                VTXR_ac_GenMdDuring
                    (VTXR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt,
                     VTXR_ac_B.VariantMergeForOutportPPActv,
                     VeVTXR_b_HybButtnONFnl,
                     VTXR_ac_B.FaultChks_eu.LeVTXR_b_StrtDsAllw,
                     VTXR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     &VTXR_ac_DW.GenMdDuring);

                /* End of Outputs for SubSystem: '<S71>/GenMdDuring' */
                break;

              case CeVTXR_e_DfltMdTrg:
                /* Transition: '<S155>:15' */
                VTXR_ac_DW.is_c2_VTXR_ac = VTXR_ac_IN_DefaultMd;

                /* Outputs for Function Call SubSystem: '<S15>/FaultChks' */
                /* Entry 'DefaultMd': '<S155>:5' */
                /* Event: '<S155>:30' */
                VTXR_ac_FaultChks
                    (VTXR_ac_B.TmpSignalConversionAtVeSTRR_g_StrtDisAll,
                     &VTXR_ac_B.FaultChks_eu);

                /* End of Outputs for SubSystem: '<S15>/FaultChks' */

                /* Outputs for Function Call SubSystem: '<S68>/DfltMdEnt' */
                /* Event: '<S155>:31' */
                VTXR_ac_DfltMdEnt_n();

                /* End of Outputs for SubSystem: '<S68>/DfltMdEnt' */

                /* Outputs for Function Call SubSystem: '<S68>/DfltMdDur' */
                /* Event: '<S155>:32' */
                VTXR_ac_DfltMdDur_b
                    (VTXR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt,
                     VTXR_ac_B.VariantMergeForOutportPPActv,
                     VeVTXR_b_HybButtnONFnl,
                     VTXR_ac_B.FaultChks_eu.LeVTXR_b_StrtDsAllw,
                     VTXR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     &VTXR_ac_DW.DfltMdDur_b);

                /* End of Outputs for SubSystem: '<S68>/DfltMdDur' */
                break;

              case CeVTXR_e_ElecMdTrg:
                /* Transition: '<S155>:37' */
                VTXR_ac_DW.is_c2_VTXR_ac = VTXR_ac_IN_ElectricMd;

                /* Outputs for Function Call SubSystem: '<S15>/FaultChks' */
                /* Entry 'ElectricMd': '<S155>:1' */
                /* Event: '<S155>:30' */
                VTXR_ac_FaultChks
                    (VTXR_ac_B.TmpSignalConversionAtVeSTRR_g_StrtDisAll,
                     &VTXR_ac_B.FaultChks_eu);

                /* End of Outputs for SubSystem: '<S15>/FaultChks' */

                /* Outputs for Function Call SubSystem: '<S69>/ElecMdEnt' */
                /* Event: '<S155>:38' */
                VTXR_ac_ElecMdEnt_c();

                /* End of Outputs for SubSystem: '<S69>/ElecMdEnt' */

                /* Outputs for Function Call SubSystem: '<S69>/ElectricMdDur' */
                /* Event: '<S155>:25' */
                VTXR_ac_ElectricMdDur_b
                    (VTXR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt,
                     VTXR_ac_B.VariantMergeForOutportPPActv,
                     VeVTXR_b_HybButtnONFnl,
                     VTXR_ac_B.FaultChks_eu.LeVTXR_b_StrtDsAllw,
                     VTXR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     &VTXR_ac_DW.ElectricMdDur_b);

                /* End of Outputs for SubSystem: '<S69>/ElectricMdDur' */
                break;

              default:
                /* Outputs for Function Call SubSystem: '<S15>/FaultChks' */
                /* Event: '<S155>:30' */
                VTXR_ac_FaultChks
                    (VTXR_ac_B.TmpSignalConversionAtVeSTRR_g_StrtDisAll,
                     &VTXR_ac_B.FaultChks_eu);

                /* End of Outputs for SubSystem: '<S15>/FaultChks' */

                /* Outputs for Function Call SubSystem: '<S72>/HybridMdDur' */
                /* Event: '<S155>:27' */
                VTXR_ac_HybridMdDur_f
                    (VTXR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt,
                     VTXR_ac_B.VariantMergeForOutportPPActv,
                     VeVTXR_b_HybButtnONFnl,
                     VTXR_ac_B.FaultChks_eu.LeVTXR_b_StrtDsAllw,
                     VTXR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     &VTXR_ac_DW.HybridMdDur_f);

                /* End of Outputs for SubSystem: '<S72>/HybridMdDur' */
                break;
            }
            break;
        }
    }

    /* End of Chart: '<S73>/VTXC_StateMachine' */
    /* End of Outputs for SubSystem: '<S13>/Non_HMI_PP' */
#else

    /* Outputs for Atomic SubSystem: '<S13>/PPInaktv' */
    /* DataStoreWrite: '<S16>/Data Store Write1' incorporates:
     *  Constant: '<S156>/Calib'
     */
    VeVTXR_Pct_HVBattTgtSOC_DS = KeVTXR_Pct_TgtSOCDflt;

    /* DataStoreWrite: '<S16>/Data Store Write2' incorporates:
     *  Constant: '<S157>/Calib'
     */
    VeVTXR_e_PowerPanelMd_DS = KeVTXR_e_PowPanlMdNF;

    /* DataStoreWrite: '<S16>/Data Store Write4' incorporates:
     *  Constant: '<S16>/TRUE Constant2'
     */
    VeVTXR_b_RemStpTrg_DS = false;

    /* DataStoreWrite: '<S16>/Dsw_STMTrigger' incorporates:
     *  Constant: '<S16>/TRUE Constant'
     */
    VeVTXR_b_BlinkLED_DS = false;

    /* DataStoreWrite: '<S16>/Dsw_STMTrigger1' incorporates:
     *  Constant: '<S16>/TRUE Constant1'
     */
    VeVTXR_b_BlinkDtct_DS = false;

    /* End of Outputs for SubSystem: '<S13>/PPInaktv' */
#endif

    /* End of Outputs for SubSystem: '<S4>/VarSS_PP_STM' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/VTXC_PostProc'
     */
    /* Outputs for Atomic SubSystem: '<S5>/VarSS_PostProc_PP' */
#if Rte_SysCon_Variant_VTXR_NoHMIIntrfce

    /* Outputs for Atomic SubSystem: '<S158>/Non_HMI_PP' */
    /* If: '<S159>/If' incorporates:
     *  Constant: '<S162>/Constant'
     *  DataStoreRead: '<S159>/Data Store Read1'
     *  DataStoreRead: '<S159>/Data Store Read6'
     *  RelationalOperator: '<S159>/Greater Than or Equal 2'
     */
    if (VeVTXR_b_BlinkLED_DS)
    {
        /* Outputs for IfAction SubSystem: '<S159>/Blink' incorporates:
         *  ActionPort: '<S161>/Action Port'
         */
        /* Logic: '<S161>/AND3' */
        rtb_TmpSignalConversionAtVeVTLR_b_V2LPlu =
            !VTXR_ac_B.VariantMergeForOutportPPActv;

        /* Outputs for Atomic SubSystem: '<S161>/Stop Watch Reset Enabled' */
        /* Switch: '<S171>/Switch1' incorporates:
         *  Constant: '<S167>/Calib'
         *  Constant: '<S171>/Constant Value2'
         *  DataStoreRead: '<S161>/Data Store Read'
         *  Logic: '<S161>/AND2'
         *  Sum: '<S171>/Subtraction'
         *  UnitDelay: '<S171>/Unit Delay'
         */
        if (rtb_TmpSignalConversionAtVeVTLR_b_V2LPlu || (VeVTXR_b_BlinkDtct_DS))
        {
            VTXR_ac_DW.UnitDelay_DSTATE = 0.0F;
        }
        else
        {
            VTXR_ac_DW.UnitDelay_DSTATE += HeVTXR_t_MedTEB_dT;
        }

        /* End of Switch: '<S171>/Switch1' */
        /* End of Outputs for SubSystem: '<S161>/Stop Watch Reset Enabled' */

        /* Switch: '<S161>/Switch' incorporates:
         *  Constant: '<S168>/Calib'
         *  RelationalOperator: '<S161>/Greater Than or Equal 2'
         *  UnitDelay: '<S171>/Unit Delay'
         */
        if (VTXR_ac_DW.UnitDelay_DSTATE <= KeVTXR_t_MaxTm4LEDBlink)
        {
            /* RelationalOperator: '<S161>/Greater Than or Equal 1' incorporates:
             *  Constant: '<S166>/Constant'
             *  DataStoreWrite: '<S161>/Data Store Write'
             *  Switch: '<S161>/Switch'
             */
            VeVTXR_e_HybButtonLEDSt_DS = CeAECR_e_LEDBlink;
        }
        else
        {
            /* RelationalOperator: '<S161>/Greater Than or Equal 1' incorporates:
             *  Constant: '<S165>/Constant'
             *  DataStoreWrite: '<S161>/Data Store Write'
             *  Switch: '<S161>/Switch'
             */
            VeVTXR_e_HybButtonLEDSt_DS = CeAECR_e_LEDOff;
        }

        /* End of Switch: '<S161>/Switch' */

        /* Outputs for Enabled SubSystem: '<S161>/ResetBlink' incorporates:
         *  EnablePort: '<S169>/Enable'
         */
        /* DataStoreWrite: '<S169>/Data Store Write1' incorporates:
         *  Constant: '<S165>/Constant'
         *  Logic: '<S161>/AND1'
         *  RelationalOperator: '<S161>/Greater Than or Equal 1'
         */
        VeVTXR_b_BlinkLED_DS = (((((uint32)VeVTXR_e_HybButtonLEDSt_DS) !=
            CeAECR_e_LEDOff) && (!rtb_TmpSignalConversionAtVeVTLR_b_V2LPlu)) &&
                                (VeVTXR_b_BlinkLED_DS));

        /* End of Outputs for SubSystem: '<S161>/ResetBlink' */

        /* Outputs for Enabled SubSystem: '<S161>/ResetBlinkDtct' incorporates:
         *  EnablePort: '<S170>/Enable'
         */
        /* DataStoreWrite: '<S170>/Data Store Write3' incorporates:
         *  Constant: '<S166>/Constant'
         *  RelationalOperator: '<S161>/Greater Than or Equal 3'
         */
        VeVTXR_b_BlinkDtct_DS = ((CeAECR_e_LEDBlink != ((uint32)
            VeVTXR_e_HybButtonLEDSt_DS)) && (VeVTXR_b_BlinkDtct_DS));

        /* End of Outputs for SubSystem: '<S161>/ResetBlinkDtct' */
        /* End of Outputs for SubSystem: '<S159>/Blink' */
    }
    else if (((uint32)VeVTXR_e_PowerPanelMd_DS) == CeVTXR_e_HybridMd)
    {
        /* Outputs for IfAction SubSystem: '<S159>/ON' incorporates:
         *  ActionPort: '<S164>/Action Port'
         */
        /* RelationalOperator: '<S161>/Greater Than or Equal 1' incorporates:
         *  Constant: '<S173>/Constant'
         *  DataStoreWrite: '<S164>/Data Store Write1'
         */
        VeVTXR_e_HybButtonLEDSt_DS = CeAECR_e_LEDCont;

        /* DataStoreWrite: '<S164>/Data Store Write2' incorporates:
         *  Constant: '<S164>/FALSE Constant'
         */
        VeVTXR_b_BlinkLED_DS = false;

        /* DataStoreWrite: '<S164>/Data Store Write3' incorporates:
         *  Constant: '<S164>/FALSE Constant2'
         */
        VeVTXR_b_BlinkDtct_DS = false;

        /* End of Outputs for SubSystem: '<S159>/ON' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S159>/OFF' incorporates:
         *  ActionPort: '<S163>/Action Port'
         */
        /* RelationalOperator: '<S161>/Greater Than or Equal 1' incorporates:
         *  Constant: '<S172>/Constant'
         *  DataStoreWrite: '<S163>/Data Store Write1'
         */
        VeVTXR_e_HybButtonLEDSt_DS = CeAECR_e_LEDOff;

        /* DataStoreWrite: '<S163>/Data Store Write2' incorporates:
         *  Constant: '<S163>/FALSE Constant'
         */
        VeVTXR_b_BlinkLED_DS = false;

        /* DataStoreWrite: '<S163>/Data Store Write3' incorporates:
         *  Constant: '<S163>/FALSE Constant2'
         */
        VeVTXR_b_BlinkDtct_DS = false;

        /* End of Outputs for SubSystem: '<S159>/OFF' */
    }

    /* End of If: '<S159>/If' */
    /* End of Outputs for SubSystem: '<S158>/Non_HMI_PP' */
#else

    /* Outputs for Atomic SubSystem: '<S158>/PPInaktv' */
    /* RelationalOperator: '<S161>/Greater Than or Equal 1' incorporates:
     *  Constant: '<S174>/Constant'
     *  DataStoreWrite: '<S160>/Data Store Write1'
     */
    VeVTXR_e_HybButtonLEDSt_DS = CeAECR_e_LEDOff;

    /* End of Outputs for SubSystem: '<S158>/PPInaktv' */
#endif

    /* End of Outputs for SubSystem: '<S5>/VarSS_PostProc_PP' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/VTXO_Outputs'
     */
    /* Outport: '<Root>/VeVTXR_Pct_HVBattTgtSOC' incorporates:
     *  DataStoreRead: '<S7>/Data Store Read'
     *  SignalConversion generated from: '<S1>/VeVTXR_Pct_HVBattTgtSOC'
     */
    (void)Rte_Write_VeVTXR_Pct_HVBattTgtSOC_Value(VeVTXR_Pct_HVBattTgtSOC_DS);

    /* Outport: '<Root>/VeVTXR_b_PowPnlRemStpFnl' incorporates:
     *  DataStoreRead: '<S7>/Data Store Read8'
     *  SignalConversion generated from: '<S1>/VeVTXR_b_PowPnlRemStpFnl'
     */
    (void)Rte_Write_VeVTXR_b_PowPnlRemStpFnl_Value(VeVTXR_b_RemStpTrg_DS);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeVTXR_b_PowerPanelSts' incorporates:
     *  SignalConversion generated from: '<S1>/VeVTXR_b_PowerPanelSts'
     */
    (void)Rte_Write_VeVTXR_b_PowerPanelSts_Value
        (VTXR_ac_B.VariantMergeForOutportPPActv);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/VTXO_Outputs'
     */
    /* Outport: '<Root>/VeVTXR_e_HybButtonLEDSt' incorporates:
     *  DataStoreRead: '<S7>/Data Store Read5'
     *  SignalConversion generated from: '<S1>/VeVTXR_e_HybButtonLEDSt'
     */
    (void)Rte_Write_VeVTXR_e_HybButtonLEDSt_Value(VeVTXR_e_HybButtonLEDSt_DS);

    /* Outport: '<Root>/VeVTXR_e_PowerPanelMd' incorporates:
     *  DataStoreRead: '<S7>/Data Store Read2'
     *  SignalConversion generated from: '<S1>/VeVTXR_e_PowerPanelMd'
     */
    (void)Rte_Write_VeVTXR_e_PowerPanelMd_Value(VeVTXR_e_PowerPanelMd_DS);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Output function */
FUNC(void, VTXR_CODE) VTXR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/VTXR_PwrOn'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S225>/VeVTXR_e_PowerPanelMd_Out_Init' incorporates:
     *  Constant: '<S225>/Const1'
     */
    VTXR_ac_B.OutportBufferForVeVTXR_e_PowerPanelMd_Ou = VTXR_ac_ConstB.Const1;

    /* SignalConversion generated from: '<S225>/VeVTXR_e_HybButtonLEDSt_Out_Init' incorporates:
     *  Constant: '<S225>/Const2'
     */
    VTXR_ac_B.OutportBufferForVeVTXR_e_HybButtonLEDSt_ = VTXR_ac_ConstB.Const2;

    /* SignalConversion generated from: '<S225>/VeVTXR_Pct_HVBattTgtSOC_Out_Init' */
    VTXR_ac_B.OutportBufferForVeVTXR_Pct_HVBattTgtSOC_ = 0.0F;

    /* SignalConversion generated from: '<S225>/VeVTXR_b_PowerPanelSts_Out_Init' */
    VTXR_ac_B.OutportBufferForVeVTXR_b_PowerPanelSts_O = false;

    /* SignalConversion generated from: '<S225>/VeVTXR_b_PowPnlRemStpFnl_Out_Init' */
    VTXR_ac_B.OutportBufferForVeVTXR_b_PowPnlRemStpFnl = false;

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeVTXR_Pct_HVBattTgtSOC' incorporates:
     *  SignalConversion generated from: '<S2>/VeVTXR_Pct_HVBattTgtSOC_Out_Init'
     */
    (void)Rte_Write_VeVTXR_Pct_HVBattTgtSOC_Value
        (VTXR_ac_B.OutportBufferForVeVTXR_Pct_HVBattTgtSOC_);

    /* Outport: '<Root>/VeVTXR_b_PowPnlRemStpFnl' incorporates:
     *  SignalConversion generated from: '<S2>/VeVTXR_b_PowPnlRemStpFnl_Out_Init'
     */
    (void)Rte_Write_VeVTXR_b_PowPnlRemStpFnl_Value
        (VTXR_ac_B.OutportBufferForVeVTXR_b_PowPnlRemStpFnl);

    /* Outport: '<Root>/VeVTXR_b_PowerPanelSts' incorporates:
     *  SignalConversion generated from: '<S2>/VeVTXR_b_PowerPanelSts_Out_Init'
     */
    (void)Rte_Write_VeVTXR_b_PowerPanelSts_Value
        (VTXR_ac_B.OutportBufferForVeVTXR_b_PowerPanelSts_O);

    /* Outport: '<Root>/VeVTXR_e_HybButtonLEDSt' incorporates:
     *  SignalConversion generated from: '<S225>/VeVTXR_e_HybButtonLEDSt_Out_Init'
     *  SignalConversion generated from: '<S2>/VeVTXR_e_HybButtonLEDSt_Out_Init'
     */
    (void)Rte_Write_VeVTXR_e_HybButtonLEDSt_Value
        (VTXR_ac_B.OutportBufferForVeVTXR_e_HybButtonLEDSt_);

    /* Outport: '<Root>/VeVTXR_e_PowerPanelMd' incorporates:
     *  SignalConversion generated from: '<S225>/VeVTXR_e_PowerPanelMd_Out_Init'
     *  SignalConversion generated from: '<S2>/VeVTXR_e_PowerPanelMd_Out_Init'
     */
    (void)Rte_Write_VeVTXR_e_PowerPanelMd_Value
        (VTXR_ac_B.OutportBufferForVeVTXR_e_PowerPanelMd_Ou);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, VTXR_CODE) VTXR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/VTXR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S225>/VeVTXR_e_PowerPanelMd_Out_Init' incorporates:
     *  Constant: '<S225>/Const1'
     */
    VTXR_ac_B.OutportBufferForVeVTXR_e_PowerPanelMd_Ou = VTXR_ac_ConstB.Const1;

    /* SystemInitialize for SignalConversion generated from: '<S225>/VeVTXR_e_HybButtonLEDSt_Out_Init' incorporates:
     *  Constant: '<S225>/Const2'
     */
    VTXR_ac_B.OutportBufferForVeVTXR_e_HybButtonLEDSt_ = VTXR_ac_ConstB.Const2;

    /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Outport: '<Root>/VeVTXR_e_PowerPanelMd' incorporates:
     *  Merge: '<Root>/Merge_Outport_1'
     */
    (void)Rte_Write_VeVTXR_e_PowerPanelMd_Value(CeVTXR_e_DefaultMd);

    /* SystemInitialize for Outport: '<Root>/VeVTXR_e_HybButtonLEDSt' incorporates:
     *  Merge: '<Root>/Merge_Outport_2'
     */
    (void)Rte_Write_VeVTXR_e_HybButtonLEDSt_Value(CeAECR_e_LEDOff);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
