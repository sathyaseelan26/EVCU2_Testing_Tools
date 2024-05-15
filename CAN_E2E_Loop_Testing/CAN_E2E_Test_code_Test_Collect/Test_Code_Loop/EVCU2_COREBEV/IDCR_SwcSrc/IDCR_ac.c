/*
 * File: IDCR_ac.c
 *
 * Code generated for Simulink model 'IDCR_ac'.
 *
 * Model version                  : 9.533
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 14:07:53 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "IDCR_ac.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_IDCR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(boolean, IDCR_VAR_INIT) KaIDCR_b_EVSELmtAchvd_Map[4] =
{
    0, 1, 0, 0
} ;                                    /* Referenced by:
                                        * '<S669>/Calib'
                                        * '<S672>/Calib'
                                        * '<S674>/Calib'
                                        */

static volatile CONST(boolean, IDCR_VAR_INIT) KaIDCR_b_SocAccuracy_Map[2] =
{
    0, 1
} ;                                    /* Referenced by:
                                        * '<S747>/Calib'
                                        * '<S507>/Calib'
                                        */

static volatile CONST(TeOBCR_e_ChrgrModeStat_OBCM, IDCR_VAR_INIT)
    KaIDCR_e_ChrgrModeStat_Map[8] =
{
    CeOBCR_e_Idle_OBCM, CeOBCR_e_Heater_OBCM, CeOBCR_e_Charge_OBCM,
    CeOBCR_e_Dischrg_OBCM, CeOBCR_e_AC_GRD, CeOBCR_e_UTC_OBCM,
    CeOBCR_e_Stop_OBCM, CeOBCR_e_ForceShtDwn
};               /* Referenced by: '<S283>/PokeIDCR_e_ChrgrModeStat_OBCMChrt' */

static volatile CONST(TeIDCR_e_EVSEIsolSts, IDCR_VAR_INIT)
    KaIDCR_e_EVSEIsolSts_Map[8] =
{
    CeIDCR_e_EVSEIsolSts_Invalid, CeIDCR_e_EVSEIsolSts_Valid_Safe,
    CeIDCR_e_EVSEIsolSts_Warning, CeIDCR_e_EVSEIsolSts_Fault,
    CeIDCR_e_EVSEIsolSts_No_IMD, CeIDCR_e_EVSEIsolSts_SNA,
    CeIDCR_e_EVSEIsolSts_SNA, CeIDCR_e_EVSEIsolSts_SNA
};                                     /* Referenced by: '<S735>/Calib' */

static volatile CONST(TeOBCR_e_EVSE_PilotStat_OBCM, IDCR_VAR_INIT)
    KaIDCR_e_EVSEStat_Map[6] =
{
    CeOBCR_e_NO_EVSE_OBCM, CeOBCR_e_CP_DET_EVSE_OBCM, CeOBCR_e_VOOR_EVSE_OBCM,
    CeOBCR_e_EVSE_NO_AC, CeOBCR_e_EVSE_HW_Flt, CeOBCR_e_EVSE_Flt
};              /* Referenced by: '<S294>/PokeIDCR_e_EVSE_PilotStat_OBCMChrt' */

static volatile CONST(sint16, IDCR_VAR_INIT) KaIDCR_e_J1772Stat_Map[7] =
{
    0, 1, 2, 3, 4, 5, 7
} ;                       /* Referenced by: '<S305>/PokeIDCR_e_J1772StatChrt' */

static volatile CONST(TeIDCR_e_OBCM_Charger_Ready, IDCR_VAR_INIT)
    KaIDCR_e_OBCM_Charger_Ready_Map[4] =
{
    CeIDCR_e_CR_WU_FLT, CeIDCR_e_CR_OFF, CeIDCR_e_CR_ON, CeIDCR_e_CR_SNA
};               /* Referenced by: '<S310>/PokeIDCR_e_OBCM_Charger_ReadyChrt' */

static volatile CONST(TeOBCR_e_ProxStat_OBCM, IDCR_VAR_INIT)
    KaIDCR_e_ProxStat_Map[8] =
{
    CeOBCR_e_ProxLo_OBCM, CeOBCR_e_ProxOut_OBCM, CeOBCR_e_ProxIn_OBCM,
    CeOBCR_e_ProxUN_OBCM, CeOBCR_e_ProxLo_OBCM, CeOBCR_e_ProxLo_OBCM,
    CeOBCR_e_ProxVOOR_OBCM, CeOBCR_e_ProxHi_OBCM
};                         /* Referenced by: '<S314>/PokeIDCR_e_ProxStatChrt' */

static volatile CONST(TeIDCR_e_SDP_Sts, IDCR_VAR_INIT) KaIDCR_e_SDPSts_Map[4] =
{
    CeIDCR_e_SDPSts_NoConnEst, CeIDCR_e_SDPSts_ConnEst,
    CeIDCR_e_SDPSts_NotInitialized, CeIDCR_e_SDPSts_SNA
};                                     /* Referenced by: '<S767>/Calib' */

static volatile CONST(TeIDCR_e_SLACSts, IDCR_VAR_INIT) KaIDCR_e_SLACSts_Map[8] =
{
    CeIDCR_e_SLACSts_EVSE_NtFnd, CeIDCR_e_SLACSts_EVSE_PtntllyFnd,
    CeIDCR_e_SLACSts_EVSE_Fnd, CeIDCR_e_SLACSts_NotInitialized,
    CeIDCR_e_SLACSts_SNA, CeIDCR_e_SLACSts_SNA, CeIDCR_e_SLACSts_SNA,
    CeIDCR_e_SLACSts_SNA
};                                     /* Referenced by: '<S769>/Calib' */

static volatile CONST(sint16, IDCR_VAR_INIT) KaIDCR_e_TxMessRq_Map[26] =
{
    0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21,
    22, 23, 24, 31
} ;                                    /* Referenced by: '<S777>/Calib' */

static volatile CONST(float32, IDCR_VAR_INIT) KeIDCR_I_APM_HV_CurrentDflt = 0.0F;/* Referenced by:
                                                                      * '<S8>/FsftIDCR_I_APM_HV_CurrentChrt'
                                                                      * '<S158>/PokeIDCR_I_APM_HV_CurrentChrt'
                                                                      */
static volatile CONST(float32, IDCR_VAR_INIT) KeIDCR_I_IBSSgnlDvidrI1 = 1024.0F;/* Referenced by: '<S519>/Calib' */
static volatile CONST(float32, IDCR_VAR_INIT) KeIDCR_I_IBSSgnlDvidrI1500 = 16.0F;/* Referenced by: '<S521>/Calib' */
static volatile CONST(float32, IDCR_VAR_INIT) KeIDCR_I_IBSSgnlDvidrI200 = 128.0F;/* Referenced by: '<S523>/Calib' */
static volatile CONST(float32, IDCR_VAR_INIT) KeIDCR_I_IBSSgnlOffSetI1 = 0.0F;/* Referenced by: '<S520>/Calib' */
static volatile CONST(float32, IDCR_VAR_INIT) KeIDCR_I_IBSSgnlOffSetI1500 = 0.0F;/* Referenced by: '<S522>/Calib' */
static volatile CONST(float32, IDCR_VAR_INIT) KeIDCR_I_IBSSgnlOffSetI200 = 0.0F;/* Referenced by: '<S524>/Calib' */
static volatile CONST(float32, IDCR_VAR_INIT) KeIDCR_K_Default309h_Value = 0.0F;/* Referenced by:
                                                                      * '<S155>/PokeIDCR_I_ACSideCurr_L2Chrt'
                                                                      * '<S156>/PokeIDCR_I_ACSideCurr_L3Chrt'
                                                                      * '<S157>/PokeIDCR_I_AC_Side_CurrChrt'
                                                                      * '<S161>/PokeIDCR_I_BattSide_CurrChrt'
                                                                      * '<S162>/PokeIDCR_I_ChrgCrntAvailChrt'
                                                                      * '<S193>/PokeIDCR_U_ACSideVolt_L2Chrt'
                                                                      * '<S194>/PokeIDCR_U_ACSideVolt_L3Chrt'
                                                                      * '<S195>/PokeIDCR_U_AC_InputVltOBCMChrt'
                                                                      * '<S201>/PokeIDCR_U_BattSideVoltChrt'
                                                                      */
static volatile CONST(float32, IDCR_VAR_INIT) KeIDCR_K_Default3CEh_Value = 0.0F;
                 /* Referenced by: '<S173>/PokeIDCR_I_J1772InputCrntAvalChrt' */
static volatile CONST(float32, IDCR_VAR_INIT) KeIDCR_K_Default3D0h_Value = 0.0F;
                        /* Referenced by: '<S163>/PokeIDCR_I_ChrgCurrentChrt' */
static volatile CONST(float32, IDCR_VAR_INIT) KeIDCR_Pct_GenRgSPDtyCycReqDflt =
    0.0F;         /* Referenced by: '<S29>/FsftIDCR_Pct_GenRgSPDtyCycReqChrt' */
static volatile CONST(float32, IDCR_VAR_INIT) KeIDCR_T_APM_HeatPlateTempDflt =
    30.0F;                             /* Referenced by: '<S547>/Calib' */
static volatile CONST(boolean, IDCR_VAR_INIT) KeIDCR_b_AC_LnHi_Inverted = 0;/* Referenced by: '<S658>/Calib' */
static volatile CONST(boolean, IDCR_VAR_INIT) KeIDCR_b_AC_LnLow_Inverted = 0;/* Referenced by: '<S660>/Calib' */
static volatile CONST(boolean, IDCR_VAR_INIT) KeIDCR_b_IBSSgnlConvRequired = 0;/* Referenced by: '<S515>/Calib' */
static volatile CONST(boolean, IDCR_VAR_INIT) KeIDCR_b_IBS_I_Batt_P1P4_GC = 0;/* Referenced by: '<S510>/Calib' */
static volatile CONST(TeOBCR_e_ChrgFailSts, IDCR_VAR_INIT) KeIDCR_e_ChrgFailSts =
    CeOBCR_e_No_FLT;    /* Referenced by: '<S282>/PokeIDCR_e_ChrgFailStsChrt' */
static volatile CONST(TeOBCR_e_ChrgFailSts, IDCR_VAR_INIT)
    KeIDCR_e_ChrgFailSts_Map[8] =
{
    CeOBCR_e_No_FLT, CeOBCR_e_Flt_ChrgAlwd, CeOBCR_e_Flt_ChrgNotAlwd,
    CeOBCR_e_Flt_ChrgTerm, CeOBCR_e_Flt_AC_Fail_DC_Allwd, CeOBCR_e_Flt_SNA,
    CeOBCR_e_Flt_SNA, CeOBCR_e_Flt_SNA
};                      /* Referenced by: '<S282>/PokeIDCR_e_ChrgFailStsChrt' */

static volatile CONST(TeOBCR_e_ChrgrModeStat_OBCM, IDCR_VAR_INIT)
    KeIDCR_e_ChrgrModeStat = CeOBCR_e_Idle_OBCM;
                 /* Referenced by: '<S283>/PokeIDCR_e_ChrgrModeStat_OBCMChrt' */
static volatile CONST(TeOBCR_e_EVSE_PilotStat_OBCM, IDCR_VAR_INIT)
    KeIDCR_e_EVSEStat = CeOBCR_e_NO_EVSE_OBCM;
                /* Referenced by: '<S294>/PokeIDCR_e_EVSE_PilotStat_OBCMChrt' */
static volatile CONST(TeGENR_e_IBS_I_Range, IDCR_VAR_INIT)
    KeIDCR_e_IBS_I_RANGE_SNA = CeGENR_e_IBS_I_Range_SNA;
                        /* Referenced by: '<S301>/PokeIDCR_e_IBS_I_RANGEChrt' */
static volatile CONST(TeOBCR_e_ProxStat_OBCM, IDCR_VAR_INIT)
    KeIDCR_e_Init_ProxStat = CeOBCR_e_ProxOut_OBCM;/* Referenced by: '<S582>/Calib' */
static volatile CONST(sint16, IDCR_VAR_INIT) KeIDCR_e_J1772Stat = 0;
                          /* Referenced by: '<S305>/PokeIDCR_e_J1772StatChrt' */
static volatile CONST(TeIDCR_e_OBCM_Charger_Ready, IDCR_VAR_INIT)
    KeIDCR_e_OBCM_Charger_Ready = CeIDCR_e_CR_ON;
                 /* Referenced by: '<S310>/PokeIDCR_e_OBCM_Charger_ReadyChrt' */
static volatile CONST(TeOBCR_e_ProxStat_OBCM, IDCR_VAR_INIT) KeIDCR_e_ProxStat =
    CeOBCR_e_ProxOut_OBCM; /* Referenced by: '<S314>/PokeIDCR_e_ProxStatChrt' */
static volatile CONST(sint16, IDCR_VAR_INIT) KeIDCR_i_IDCM_DCCA_HLC = 2;/* Referenced by: '<S794>/Calib' */

#define STOP_SEC_CALIB_UNSPECIFIED_IDCR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_IDCR
#include "MemMap.h"

CONST(ConstB_IDCR_ac_T, IDCR_VAR_INIT) IDCR_ac_ConstB =
{
    0U,                                /* '<S529>/Constant Value93' */
    0.0F,                              /* '<S531>/Const1' */
    0.0F,                              /* '<S531>/Const4' */
    1.0F,                              /* '<S530>/Constant Value11' */
    0.0F,                              /* '<S530>/Constant Value4' */
    0.0F,                              /* '<S532>/Constant Value31' */
    0.0F,                              /* '<S532>/Constant Value2' */
    0.0F,                              /* '<S532>/Constant Value6' */
    0.0F,                              /* '<S532>/Constant Value17' */
    0.0F,                              /* '<S532>/Constant Value19' */
    0.0F,                              /* '<S532>/Constant Value21' */
    0.0F,                              /* '<S532>/Constant Value23' */
    0.0F,                              /* '<S532>/Constant Value25' */
    0.0F,                              /* '<S532>/Constant Value26' */
    0.0F,                              /* '<S532>/Constant Value28' */
    0.0F,                              /* '<S532>/Constant Value32' */
    0.0F,                              /* '<S532>/Constant Value36' */
    0.0F,                              /* '<S532>/Constant Value40' */
    0.0F,                              /* '<S532>/Constant Value42' */
    0.0F,                              /* '<S532>/Constant Value50' */
    0.0F,                              /* '<S532>/Constant Value52' */
    0.0F,                              /* '<S532>/Constant Value55' */
    0.0F,                              /* '<S527>/Constant Value' */
    0.0F,                              /* '<S527>/Constant Value4' */
    0.0F,                              /* '<S527>/Constant Value8' */
    0.0F,                              /* '<S527>/Constant Value10' */
    0.0F,                              /* '<S527>/Constant Value12' */
    0.0F,                              /* '<S527>/Constant Value14' */
    0.0F,                              /* '<S527>/Constant Value16' */
    0.0F,                              /* '<S527>/Constant Value18' */
    0.0F,                              /* '<S527>/Constant Value20' */
    0.0F,                              /* '<S527>/Constant Value22' */
    0.0F,                              /* '<S527>/Constant Value49' */
    0.0F,                              /* '<S526>/Constant Value24' */
    0.0F,                              /* '<S526>/Constant Value27' */
    0.0F,                              /* '<S526>/Constant Value1' */
    0.0F,                              /* '<S526>/Constant Value2' */
    0.0F,                              /* '<S526>/Constant Value30' */
    0.0F,                              /* '<S526>/Constant Value4' */
    0.0F,                              /* '<S526>/Constant Value34' */
    0.0F,                              /* '<S526>/Constant Value37' */
    0.0F,                              /* '<S526>/Constant Value26' */
    0.0F,                              /* '<S526>/Constant Value35' */
    0.0F,                              /* '<S526>/Constant Value18' */
    0.0F,                              /* '<S526>/Constant Value41' */
    0.0F,                              /* '<S526>/Constant Value36' */
    0.0F,                              /* '<S526>/Constant Value40' */
    0.0F,                              /* '<S526>/Constant Value14' */
    0.0F,                              /* '<S526>/Constant Value42' */
    0.0F,                              /* '<S526>/Constant Value43' */
    0.0F,                              /* '<S526>/Constant Value22' */
    0.0F,                              /* '<S526>/Constant Value53' */
    0.0F,                              /* '<S526>/Constant Value20' */
    0.0F,                              /* '<S526>/Constant Value19' */
    0.0F,                              /* '<S526>/Constant Value45' */
    0.0F,                              /* '<S526>/Constant Value52' */
    0.0F,                              /* '<S526>/Constant Value50' */
    0.0F,                              /* '<S526>/Constant Value21' */
    0.0F,                              /* '<S529>/Constant Value34' */
    0.0F,                              /* '<S529>/Constant Value37' */
    0.0F,                              /* '<S529>/Constant Value18' */
    0.0F,                              /* '<S529>/Constant Value41' */
    0.0F,                              /* '<S529>/Constant Value22' */
    0.0F,                              /* '<S529>/Constant Value53' */
    0.0F,                              /* '<S529>/Constant Value52' */
    0.0F,                              /* '<S529>/Constant Value28' */
    0.0F,                              /* '<S529>/Constant Value24' */
    0.0F,                              /* '<S529>/Constant Value27' */
    0.0F,                              /* '<S529>/Constant Value40' */
    0.0F,                              /* '<S529>/Constant Value42' */
    0.0F,                              /* '<S529>/Constant Value51' */
    0.0F,                              /* '<S529>/Constant Value68' */
    0U,                                /* '<S532>/Constant Value3' */
    0U,                                /* '<S532>/Constant Value4' */
    0U,                                /* '<S532>/Constant Value38' */
    0U,                                /* '<S527>/Constant Value27' */
    0U,                                /* '<S526>/Constant Value66' */
    0U,                                /* '<S529>/Constant Value71' */
    0,                                 /* '<S526>/Constant Value39' */
    0,                                 /* '<S526>/Constant Value23' */
    0,                                 /* '<S529>/Constant Value59' */
    0,                                 /* '<S529>/Constant Value57' */
    0U,                                /* '<S530>/Constant Value13' */
    0U,                                /* '<S532>/Constant Value1' */
    0U,                                /* '<S526>/Constant Value51' */
    0U,                                /* '<S526>/Constant Value62' */
    0U,                                /* '<S526>/Constant Value64' */
    0U,                                /* '<S526>/Constant Value70' */
    0U,                                /* '<S526>/Constant Value72' */
    0,                                 /* '<S531>/Const2' */
    0,                                 /* '<S531>/Const3' */
    0,                                 /* '<S531>/Const5' */
    0,                                 /* '<S530>/Constant Value' */
    0,                                 /* '<S530>/Constant Value1' */
    0,                                 /* '<S530>/Constant Value5' */
    1,                                 /* '<S530>/Constant Value8' */
    0,                                 /* '<S530>/Constant Value6' */
    1,                                 /* '<S530>/Constant Value9' */
    0,                                 /* '<S530>/Constant Value2' */
    0,                                 /* '<S530>/Constant Value10' */
    0,                                 /* '<S530>/Constant Value3' */
    0,                                 /* '<S530>/Constant Value12' */
    0,                                 /* '<S530>/Constant Value18' */
    0,                                 /* '<S530>/Constant Value7' */
    0,                                 /* '<S530>/Constant Value14' */
    0,                                 /* '<S530>/Constant Value15' */
    0,                                 /* '<S530>/Constant Value16' */
    0,                                 /* '<S530>/Constant Value17' */
    0,                                 /* '<S532>/Constant Value' */
    0,                                 /* '<S532>/Constant Value7' */
    0,                                 /* '<S532>/Constant Value8' */
    0,                                 /* '<S532>/Constant Value9' */
    0,                                 /* '<S532>/Constant Value10' */
    0,                                 /* '<S532>/Constant Value11' */
    0,                                 /* '<S532>/Constant Value12' */
    0,                                 /* '<S532>/Constant Value13' */
    0,                                 /* '<S532>/Constant Value14' */
    0,                                 /* '<S532>/Constant Value5' */
    0,                                 /* '<S532>/Constant Value15' */
    0,                                 /* '<S532>/Constant Value16' */
    0,                                 /* '<S532>/Constant Value18' */
    0,                                 /* '<S532>/Constant Value20' */
    0,                                 /* '<S532>/Constant Value22' */
    0,                                 /* '<S532>/Constant Value24' */
    0,                                 /* '<S532>/Constant Value27' */
    0,                                 /* '<S532>/Constant Value29' */
    0,                                 /* '<S532>/Constant Value30' */
    0,                                 /* '<S532>/Constant Value33' */
    0,                                 /* '<S532>/Constant Value34' */
    0,                                 /* '<S532>/Constant Value35' */
    0,                                 /* '<S532>/Constant Value37' */
    0,                                 /* '<S532>/Constant Value39' */
    0,                                 /* '<S532>/Constant Value41' */
    0,                                 /* '<S532>/Constant Value43' */
    0,                                 /* '<S532>/Constant Value44' */
    0,                                 /* '<S532>/Constant Value45' */
    0,                                 /* '<S532>/Constant Value46' */
    0,                                 /* '<S532>/Constant Value47' */
    0,                                 /* '<S532>/Constant Value48' */
    0,                                 /* '<S532>/Constant Value49' */
    0,                                 /* '<S532>/Constant Value51' */
    0,                                 /* '<S532>/Constant Value53' */
    0,                                 /* '<S532>/Constant Value54' */
    0,                                 /* '<S532>/Constant Value56' */
    0,                                 /* '<S532>/Constant Value57' */
    0,                                 /* '<S528>/Constant Value' */
    0,                                 /* '<S528>/Constant Value31' */
    0,                                 /* '<S528>/Constant Value1' */
    0,                                 /* '<S527>/Constant Value2' */
    0,                                 /* '<S527>/Constant Value1' */
    0,                                 /* '<S527>/Constant Value3' */
    0,                                 /* '<S527>/Constant Value5' */
    0,                                 /* '<S527>/Constant Value6' */
    0,                                 /* '<S527>/Constant Value7' */
    0,                                 /* '<S527>/Constant Value9' */
    0,                                 /* '<S527>/Constant Value11' */
    0,                                 /* '<S527>/Constant Value13' */
    0,                                 /* '<S527>/Constant Value15' */
    0,                                 /* '<S527>/Constant Value17' */
    0,                                 /* '<S527>/Constant Value19' */
    0,                                 /* '<S527>/Constant Value21' */
    0,                                 /* '<S527>/Constant Value23' */
    0,                                 /* '<S527>/Constant Value24' */
    0,                                 /* '<S527>/Constant Value25' */
    0,                                 /* '<S527>/Constant Value26' */
    0,                                 /* '<S527>/Constant Value28' */
    0,                                 /* '<S527>/Constant Value29' */
    0,                                 /* '<S527>/Constant Value30' */
    0,                                 /* '<S527>/Constant Value31' */
    0,                                 /* '<S527>/Constant Value32' */
    0,                                 /* '<S527>/Constant Value33' */
    0,                                 /* '<S527>/Constant Value34' */
    0,                                 /* '<S527>/Constant Value35' */
    0,                                 /* '<S527>/Constant Value36' */
    0,                                 /* '<S527>/Constant Value37' */
    0,                                 /* '<S527>/Constant Value38' */
    0,                                 /* '<S527>/Constant Value39' */
    0,                                 /* '<S527>/Constant Value40' */
    0,                                 /* '<S527>/Constant Value43' */
    0,                                 /* '<S527>/Constant Value41' */
    0,                                 /* '<S527>/Constant Value42' */
    0,                                 /* '<S527>/Constant Value44' */
    0,                                 /* '<S527>/Constant Value45' */
    0,                                 /* '<S527>/Constant Value46' */
    0,                                 /* '<S527>/Constant Value47' */
    0,                                 /* '<S527>/Constant Value48' */
    0,                                 /* '<S527>/Constant Value50' */
    0,                                 /* '<S526>/Constant Value31' */
    0,                                 /* '<S526>/Constant Value32' */
    0,                                 /* '<S526>/Constant Value33' */
    0,                                 /* '<S526>/Constant Value3' */
    0,                                 /* '<S526>/Constant Value5' */
    0,                                 /* '<S526>/Constant Value11' */
    0,                                 /* '<S526>/Constant Value10' */
    0,                                 /* '<S526>/Constant Value9' */
    0,                                 /* '<S526>/Constant Value8' */
    0,                                 /* '<S526>/Constant Value7' */
    0,                                 /* '<S526>/Constant Value6' */
    0,                                 /* '<S526>/Constant Value58' */
    0,                                 /* '<S526>/Constant Value44' */
    0,                                 /* '<S526>/Constant Value25' */
    0,                                 /* '<S526>/Constant Value29' */
    0,                                 /* '<S526>/Constant Value12' */
    0,                                 /* '<S526>/Constant Value28' */
    0,                                 /* '<S526>/Constant Value48' */
    0,                                 /* '<S526>/Constant Value38' */
    0,                                 /* '<S526>/Constant Value46' */
    0,                                 /* '<S526>/Constant Value47' */
    0,                                 /* '<S526>/Constant Value13' */
    0,                                 /* '<S526>/Constant Value15' */
    0,                                 /* '<S526>/Constant Value16' */
    0,                                 /* '<S526>/Constant Value17' */
    0,                                 /* '<S526>/Constant Value49' */
    0,                                 /* '<S526>/Constant Value54' */
    0,                                 /* '<S526>/Constant Value55' */
    0,                                 /* '<S526>/Constant Value60' */
    0,                                 /* '<S526>/Constant Value61' */
    0,                                 /* '<S526>/Constant Value56' */
    0,                                 /* '<S526>/Constant Value57' */
    0,                                 /* '<S526>/Constant' */
    0,                                 /* '<S526>/Constant1' */
    0,                                 /* '<S526>/Constant2' */
    0,                                 /* '<S526>/Constant Value59' */
    0,                                 /* '<S526>/Constant3' */
    0,                                 /* '<S526>/Constant Value63' */
    0,                                 /* '<S526>/Constant Value65' */
    0,                                 /* '<S526>/Constant Value67' */
    0,                                 /* '<S526>/Constant Value68' */
    0,                                 /* '<S526>/Constant Value69' */
    0,                                 /* '<S526>/Constant4' */
    0,                                 /* '<S526>/Constant Value71' */
    0,                                 /* '<S526>/Constant Value73' */
    0,                                 /* '<S529>/Constant Value' */
    0,                                 /* '<S529>/Constant Value31' */
    0,                                 /* '<S529>/Constant Value1' */
    0,                                 /* '<S529>/Constant Value32' */
    0,                                 /* '<S529>/Constant Value2' */
    0,                                 /* '<S529>/Constant Value33' */
    0,                                 /* '<S529>/Constant Value3' */
    0,                                 /* '<S529>/Constant Value4' */
    0,                                 /* '<S529>/Constant Value35' */
    0,                                 /* '<S529>/Constant Value5' */
    0,                                 /* '<S529>/Constant Value36' */
    0,                                 /* '<S529>/Constant Value11' */
    0,                                 /* '<S529>/Constant Value10' */
    0,                                 /* '<S529>/Constant Value26' */
    0,                                 /* '<S529>/Constant Value9' */
    0,                                 /* '<S529>/Constant Value39' */
    0,                                 /* '<S529>/Constant Value8' */
    0,                                 /* '<S529>/Constant Value7' */
    0,                                 /* '<S529>/Constant Value6' */
    0,                                 /* '<S529>/Constant Value13' */
    0,                                 /* '<S529>/Constant Value14' */
    0,                                 /* '<S529>/Constant Value15' */
    0,                                 /* '<S529>/Constant Value16' */
    0,                                 /* '<S529>/Constant Value17' */
    0,                                 /* '<S529>/Constant Value56' */
    0,                                 /* '<S529>/Constant Value23' */
    0,                                 /* '<S529>/Constant Value21' */
    0,                                 /* '<S529>/Constant Value20' */
    0,                                 /* '<S529>/Constant Value19' */
    0,                                 /* '<S529>/Constant Value25' */
    0,                                 /* '<S529>/Constant Value38' */
    0,                                 /* '<S529>/Constant Value29' */
    0,                                 /* '<S529>/Constant Value12' */
    0,                                 /* '<S529>/Constant Value43' */
    0,                                 /* '<S529>/Constant Value45' */
    0,                                 /* '<S529>/Constant Value44' */
    0,                                 /* '<S529>/Constant Value30' */
    0,                                 /* '<S529>/Constant Value46' */
    0,                                 /* '<S529>/Constant Value76' */
    0,                                 /* '<S529>/Constant Value47' */
    0,                                 /* '<S529>/Constant Value48' */
    0,                                 /* '<S529>/Constant Value49' */
    0,                                 /* '<S529>/Constant Value50' */
    0,                                 /* '<S529>/Constant Value54' */
    0,                                 /* '<S529>/Constant Value55' */
    0,                                 /* '<S529>/Constant Value58' */
    0,                                 /* '<S529>/Constant Value60' */
    0,                                 /* '<S529>/Constant Value61' */
    0,                                 /* '<S529>/Constant Value62' */
    0,                                 /* '<S529>/Constant Value63' */
    0,                                 /* '<S529>/Constant Value64' */
    0,                                 /* '<S529>/Constant Value65' */
    0,                                 /* '<S529>/Constant Value66' */
    0,                                 /* '<S529>/Constant Value67' */
    0,                                 /* '<S529>/Constant Value69' */
    0,                                 /* '<S529>/Constant Value70' */
    0,                                 /* '<S529>/Constant Value72' */
    0,                                 /* '<S529>/Constant Value73' */
    0,                                 /* '<S529>/Constant Value74' */
    0,                                 /* '<S529>/Constant Value75' */
    0,                                 /* '<S529>/Constant Value77' */
    0,                                 /* '<S529>/Constant Value78' */
    0,                                 /* '<S529>/Constant Value79' */
    0,                                 /* '<S529>/Constant Value80' */
    0,                                 /* '<S529>/Constant Value81' */
    0,                                 /* '<S529>/Constant Value82' */
    0,                                 /* '<S529>/Constant Value83' */
    0,                                 /* '<S529>/Constant Value84' */
    0,                                 /* '<S529>/Constant Value85' */
    0,                                 /* '<S529>/Constant Value86' */
    0,                                 /* '<S529>/Constant Value87' */
    0,                                 /* '<S529>/Constant Value88' */
    0,                                 /* '<S529>/Constant Value89' */
    0,                                 /* '<S529>/Constant Value90' */
    0,                                 /* '<S529>/Constant Value91' */
    0,                                 /* '<S529>/Constant Value92' */
    0,                                 /* '<S529>/Constant Value94' */
    CeVTLR_e_No_Fault,                 /* '<S589>/Constant' */
    CeVTLR_e_No_Fault,                 /* '<S587>/Constant' */
    CeODCR_e_Return_ECU_Cntrl,         /* '<S544>/Constant' */
    CeOBCR_e_NO_EVSE_OBCM,             /* '<S575>/Constant' */
    CeOBCR_e_Idle_OBCM,                /* '<S576>/Constant' */
    CeOBCR_e_No_FLT,                   /* '<S574>/Constant' */
    CeIDCR_e_No_Request,               /* '<S593>/Constant' */
    CeIDCR_e_No_FAULT,                 /* '<S591>/Constant' */
    CeIDCR_e_No_Fault,                 /* '<S588>/Constant' */
    CeIDCR_e_No_Derating,              /* '<S586>/Constant' */
    CeIDCR_e_No_Derating,              /* '<S590>/Constant' */
    CeIDCR_e_NoRequest,                /* '<S554>/Constant' */
    CeIDCR_e_NoRequest,                /* '<S555>/Constant' */
    CeIDCR_e_GBTRes_EVSE_Not_Connected,/* '<S581>/Constant' */
    CeIDCR_e_GBTReq_EVSE_Not_Connected,/* '<S579>/Constant' */
    CeIDCR_e_Not_Performed,            /* '<S585>/Constant' */
    CeIDCR_e_Not_Performed,            /* '<S537>/Constant' */
    CeIDCR_e_SLACSts_EVSE_NtFnd,       /* '<S562>/Constant' */
    CeIDCR_e_SDPSts_NoConnEst,         /* '<S561>/Constant' */
    CeIDCR_e_RC_OK,                    /* '<S553>/Constant' */
    CeIDCR_e_CC_LO,                    /* '<S578>/Constant' */
    CeIDCR_e_Absent,                   /* '<S584>/Constant' */
    CeIDCR_e_OffrdPayOptn_NoPaySel,    /* '<S556>/Constant' */
    CeIDCR_e_EnrgyTxType_NoEnrgyTxType,/* '<S559>/Constant' */
    CeIDCR_e_CR_OFF,                   /* '<S563>/Constant' */
    CeIDCR_e_OBCM_CSSts_CS_IN,         /* '<S573>/Constant' */
    CeIDCR_e_CP3Sts_Charge_perm_dis,   /* '<S572>/Constant' */
    CeIDCR_e_CP2Sts_EVSE_not_ready,    /* '<S571>/Constant' */
    CeIDCR_e_CP1Sts_NO_EVSE,           /* '<S570>/Constant' */
    CeIDCR_e_No_V2G_comm,              /* '<S564>/Constant' */
    CeIDCR_e_OK,                       /* '<S536>/Constant' */
    CeIDCR_e_ExtChargerSts_Standby,    /* '<S569>/Constant' */
    CeIDCR_e_OfferedServiceNone,       /* '<S565>/Constant' */
    CeIDCR_e_No_Error,                 /* '<S567>/Constant' */
    CeIDCR_e_No_Chrg_Stp_Cntrl,        /* '<S566>/Constant' */
    CeIDCR_e_EVSEStsCode_ChrgrStndbyNtRdy,/* '<S558>/Constant' */
    CeIDCR_e_None,                     /* '<S583>/Constant' */
    CeIDCR_e_EVSEIsolSts_Invalid,      /* '<S557>/Constant' */
    CeIDCR_e_EVCCFail_None,            /* '<S550>/Constant' */
    CeIDCR_e_Charger_Not_Available,    /* '<S568>/Constant' */
    CeIDCR_e_GBT_No_FLT,               /* '<S577>/Constant' */
    CeIDCR_e_CHAdeMO_0_9_n_earlier,    /* '<S560>/Constant' */
    CeHVTR_e_IntrlkNotSourced,         /* '<S592>/Constant' */
    CeHVTR_e_IntrlkNotSourced,         /* '<S533>/Constant' */
    CeHVTR_e_IntrlkNotSourced,         /* '<S534>/Constant' */
    CeHVTR_e_IntrlkNotSourced,         /* '<S580>/Constant' */
    CeGENR_e_Range_I1,                 /* '<S545>/Constant' */
    CeGENR_e_IBSCurStatus_NO_ERROR,    /* '<S546>/Constant' */
    CeGENR_e_BattTempSts_Fail_NtPrsnt, /* '<S542>/Constant' */
    CeGENR_e_No_Derating,              /* '<S543>/Constant' */
    CeGENR_e_Default,                  /* '<S541>/Constant' */
    CeGENR_e_FailureType_NoFailure,    /* '<S538>/Constant' */
    CeGENR_e_NoFailure,                /* '<S540>/Constant' */
    CeGENR_e_NoFailure,                /* '<S539>/Constant' */
    CeBPCR_e_DefaultThrmlRnawy         /* '<S535>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_IDCR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_IDCR
#include "MemMap.h"

VAR(B_IDCR_ac_T, IDCR_VAR_INIT) IDCR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_IDCR
#include "MemMap.h"

static FUNC(void, IDCR_CODE_LOCAL) FsftIDCR_cmp_ISO15118_EVSETimeStampChrt(P2VAR
    (B_FsftIDCR_cmp_ISO15118_EVSETimeStampC_T, AUTOMATIC, IDCR_VAR_INIT) localB);
static FUNC(void, IDCR_CODE_LOCAL) IDCR_ac_FsftIDCR_e_V2XInterlockStsChrt(P2VAR
    (B_FsftIDCR_e_V2XInterlockStsChrt_IDCR__T, AUTOMATIC, IDCR_VAR_INIT) localB);

/* Forward declaration for local functions */
static uint8 IDCR_ac_safe_cast_to_TeIDCR_e_TxMsgSt(uint8 input);

/*
 * Output and update for atomic system:
 *    '<S101>/FsftIDCR_cmp_ISO15118_EVSETimeStampChrt'
 *    '<S67>/FsftIDCR_b_EVSE_Service1_FreeChrt'
 */
static FUNC(void, IDCR_CODE_LOCAL) FsftIDCR_cmp_ISO15118_EVSETimeStampChrt(P2VAR
    (B_FsftIDCR_cmp_ISO15118_EVSETimeStampC_T, AUTOMATIC, IDCR_VAR_INIT) localB)
{
    /* Chart: '<S101>/FsftIDCR_cmp_ISO15118_EVSETimeStampChrt' */
    /* Gateway: FsftIDCR_cmp_ISO15118_EVSETimeStamp/FsftIDCR_cmp_ISO15118_EVSETimeStampChrt */
    /* During: FsftIDCR_cmp_ISO15118_EVSETimeStamp/FsftIDCR_cmp_ISO15118_EVSETimeStampChrt */
    /* Entry Internal: FsftIDCR_cmp_ISO15118_EVSETimeStamp/FsftIDCR_cmp_ISO15118_EVSETimeStampChrt */
    /* Transition: '<S456>:2' */
    localB->LeIDCR_b_EVSE_Service1_Free_FA_out = true;
}

/*
 * Output and update for atomic system:
 *    '<S136>/FsftIDCR_e_V2XInterlockStsChrt'
 *    '<S137>/FsftIDCR_e_V2XModeFeedbackChrt'
 */
static FUNC(void, IDCR_CODE_LOCAL) IDCR_ac_FsftIDCR_e_V2XInterlockStsChrt(P2VAR
    (B_FsftIDCR_e_V2XInterlockStsChrt_IDCR__T, AUTOMATIC, IDCR_VAR_INIT) localB)
{
    /* Chart: '<S136>/FsftIDCR_e_V2XInterlockStsChrt' */
    /* Gateway: FsftIDCR_e_V2XInterlockSts/FsftIDCR_e_V2XInterlockStsChrt */
    /* During: FsftIDCR_e_V2XInterlockSts/FsftIDCR_e_V2XInterlockStsChrt */
    /* Entry Internal: FsftIDCR_e_V2XInterlockSts/FsftIDCR_e_V2XInterlockStsChrt */
    /* Transition: '<S491>:2' */
    localB->LeIDCR_b_V2XInterlockStsFA_out = true;
}

static uint8 IDCR_ac_safe_cast_to_TeIDCR_e_TxMsgSt(uint8 input)
{
    uint8 y;

    /* Initialize output value to default value for TeIDCR_e_TxMsgSt (CeIDCR_e_NoRequest) */
    y = 0U;
    if ((((sint32)input) <= 24) || (((sint32)input) == 31))
    {
        /* Set output value to input value if it is a member of TeIDCR_e_TxMsgSt */
        y = input;
    }

    return y;
}

/* Model step function for TID1 */
FUNC(void, IDCR_CODE) IDCR_MedTED(void) /* Explicit Task: MedTED */
{
    float32 Switch16;
    TeGENR_e_IBS_I_Range tmp;
    TePRXR_e_Plug_and_Charge tmpRead;
    boolean VeIDCR_b_IBS_I_Batt_FA;
    boolean VeIDCR_b_IBS_I_Batt_SgnlRcvd;
    boolean rtb_Logical;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/IDCR_MedTED'
     */
    /* S-Function (fcgen): '<S149>/FcnCallGen' incorporates:
     *  SubSystem: '<S149>/IBattConv'
     */
    /* Switch: '<S505>/Switch17' incorporates:
     *  Constant: '<S510>/Calib'
     *  Switch: '<S505>/Switch1'
     *  Switch: '<S505>/Switch16'
     */
    if (KeIDCR_b_IBS_I_Batt_P1P4_GC)
    {
        /* Switch: '<S505>/Switch17' incorporates:
         *  Merge: '<Root>/Merge_38'
         *  SignalConversion generated from: '<S149>/VeIDCR_b_IBS_b_Batt_2FA_read'
         */
        VeIDCR_b_IBS_I_Batt_FA =
            Rte_IrvRead_IDCR_MedTED_VeIDCR_b_IBS_b_Batt_2FA_write_IRV();

        /* Switch: '<S505>/Switch1' incorporates:
         *  Merge: '<Root>/Merge_39'
         *  SignalConversion generated from: '<S149>/VeIDCR_b_IBS_b_Batt_2Sgnl_Rcvd_read'
         */
        VeIDCR_b_IBS_I_Batt_SgnlRcvd =
            Rte_IrvRead_IDCR_MedTED_VeIDCR_b_IBS_b_Batt_2Sgnl_Rcvd_write_IRV();

        /* Switch: '<S505>/Switch16' incorporates:
         *  Merge: '<Root>/Merge_37'
         *  SignalConversion generated from: '<S149>/VeIDCR_I_IBS_I_Batt_2_read'
         */
        Switch16 = Rte_IrvRead_IDCR_MedTED_IBS_I_Batt_2_Init_write_IRV();
    }
    else
    {
        /* Switch: '<S505>/Switch17' incorporates:
         *  Merge: '<Root>/Merge_26'
         *  SignalConversion generated from: '<S149>/VeIDCR_b_IBS_b_BattFA_read'
         */
        VeIDCR_b_IBS_I_Batt_FA =
            Rte_IrvRead_IDCR_MedTED_VeIDCR_b_IBS_b_BattFA_write_IRV();

        /* Switch: '<S505>/Switch1' incorporates:
         *  Merge: '<Root>/Merge_27'
         *  SignalConversion generated from: '<S149>/VeIDCR_b_IBS_b_BattSgnl_Rcvd_read'
         */
        VeIDCR_b_IBS_I_Batt_SgnlRcvd =
            Rte_IrvRead_IDCR_MedTED_VeIDCR_b_IBS_b_BattSgnl_Rcvd_write_IRV();

        /* Switch: '<S505>/Switch16' incorporates:
         *  Merge: '<Root>/Merge_25'
         *  SignalConversion generated from: '<S149>/VeIDCR_I_IBS_I_Batt_read'
         */
        Switch16 = Rte_IrvRead_IDCR_MedTED_IBS_I_Batt_Init_write_IRV();
    }

    /* End of Switch: '<S505>/Switch17' */

    /* Logic: '<S505>/Logical' incorporates:
     *  Constant: '<S508>/Constant'
     *  Logic: '<S505>/Logical2'
     *  Logic: '<S505>/Logical3'
     *  Merge: '<Root>/Merge_29_Irv'
     *  Merge: '<Root>/Merge_30_Irv'
     *  Merge: '<Root>/Merge_31_Irv'
     *  RelationalOperator: '<S505>/Comparison4'
     *  SignalConversion generated from: '<S149>/VeIDCR_b_IBS_Current_StatusFA_read'
     *  SignalConversion generated from: '<S149>/VeIDCR_b_IBS_I_RANGEFA_read'
     *  SignalConversion generated from: '<S149>/VeIDCR_e_IBS_Current_Status_read'
     */
    rtb_Logical = (((((!VeIDCR_b_IBS_I_Batt_FA) &&
                      (!Rte_IrvRead_IDCR_MedTED_VeIDCR_b_IBS_I_RANGEFA_write_IRV
                       ())) &&
                     (!Rte_IrvRead_IDCR_MedTED_VeIDCR_b_IBS_Current_StatusFA_write_IRV
                      ())) && VeIDCR_b_IBS_I_Batt_SgnlRcvd) &&
                   (Rte_IrvRead_IDCR_MedTED_IBS_Current_Status_Init_write_IRV() ==
                    CeGENR_e_IBSCurStatus_NO_ERROR));

    /* If: '<S505>/If' */
    if (rtb_Logical)
    {
        /* Outputs for IfAction SubSystem: '<S505>/IBattConv' incorporates:
         *  ActionPort: '<S509>/Action Port'
         */
        /* If: '<S509>/If1' incorporates:
         *  Constant: '<S511>/Constant'
         *  Constant: '<S512>/Constant'
         *  Constant: '<S513>/Constant'
         *  Constant: '<S515>/Calib'
         *  Logic: '<S509>/Logical1'
         *  RelationalOperator: '<S509>/Comparison1'
         *  RelationalOperator: '<S509>/Comparison2'
         *  RelationalOperator: '<S509>/Comparison3'
         */
        if (!KeIDCR_b_IBSSgnlConvRequired)
        {
            /* Outputs for IfAction SubSystem: '<S509>/IBatt' incorporates:
             *  ActionPort: '<S514>/Action Port'
             */
            /* Merge: '<S509>/Merge1' incorporates:
             *  Inport: '<S514>/IBS_I_BATT'
             */
            IDCR_ac_B.Merge1 = Switch16;

            /* End of Outputs for SubSystem: '<S509>/IBatt' */
        }
        else
        {
            /* RelationalOperator: '<S509>/Comparison3' incorporates:
             *  Merge: '<Root>/Merge_28_Irv'
             *  RelationalOperator: '<S509>/Comparison1'
             *  RelationalOperator: '<S509>/Comparison2'
             *  SignalConversion generated from: '<S149>/VeIDCR_e_IBS_I_RANGE_read'
             */
            tmp = Rte_IrvRead_IDCR_MedTED_IBS_I_RANGE_Init_write_IRV();
            if (tmp == CeGENR_e_Range_I1)
            {
                /* Outputs for IfAction SubSystem: '<S509>/Range_I1' incorporates:
                 *  ActionPort: '<S516>/Action Port'
                 */
                /* Merge: '<S509>/Merge1' incorporates:
                 *  Constant: '<S519>/Calib'
                 *  Constant: '<S520>/Calib'
                 *  Product: '<S516>/Product1'
                 *  Sum: '<S516>/Sum1'
                 */
                IDCR_ac_B.Merge1 = (Switch16 - KeIDCR_I_IBSSgnlOffSetI1) /
                    KeIDCR_I_IBSSgnlDvidrI1;

                /* End of Outputs for SubSystem: '<S509>/Range_I1' */
            }
            else if (tmp == CeGENR_e_Range_I200)
            {
                /* Outputs for IfAction SubSystem: '<S509>/Range_I200' incorporates:
                 *  ActionPort: '<S518>/Action Port'
                 */
                /* Merge: '<S509>/Merge1' incorporates:
                 *  Constant: '<S523>/Calib'
                 *  Constant: '<S524>/Calib'
                 *  Product: '<S518>/Product1'
                 *  Sum: '<S518>/Sum1'
                 */
                IDCR_ac_B.Merge1 = (Switch16 - KeIDCR_I_IBSSgnlOffSetI200) /
                    KeIDCR_I_IBSSgnlDvidrI200;

                /* End of Outputs for SubSystem: '<S509>/Range_I200' */
            }
            else
            {
                if (tmp == CeGENR_e_Range_I1500)
                {
                    /* Outputs for IfAction SubSystem: '<S509>/Range_I1500' incorporates:
                     *  ActionPort: '<S517>/Action Port'
                     */
                    /* Merge: '<S509>/Merge1' incorporates:
                     *  Constant: '<S521>/Calib'
                     *  Constant: '<S522>/Calib'
                     *  Product: '<S517>/Product1'
                     *  Sum: '<S517>/Sum1'
                     */
                    IDCR_ac_B.Merge1 = (Switch16 - KeIDCR_I_IBSSgnlOffSetI1500) /
                        KeIDCR_I_IBSSgnlDvidrI1500;

                    /* End of Outputs for SubSystem: '<S509>/Range_I1500' */
                }
            }
        }

        /* End of If: '<S509>/If1' */
        /* End of Outputs for SubSystem: '<S505>/IBattConv' */
    }

    /* End of If: '<S505>/If' */
    /* End of Outputs for S-Function (fcgen): '<S149>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VePRXR_e_Plug_and_Charge' */
    (void)Rte_Read_VePRXR_e_Plug_and_Charge_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/IDCR_MedTED'
     */
    /* Outport: '<Root>/VeIDCR_I_IBS_I_Batt' incorporates:
     *  SignalConversion generated from: '<S149>/IBS_I_Batt'
     */
    (void)Rte_Write_VeIDCR_I_IBS_I_Batt_Value(Switch16);

    /* Outport: '<Root>/VeIDCR_b_IBS_I_Batt_FA' incorporates:
     *  SignalConversion generated from: '<S149>/IBS_I_Batt_FA'
     */
    (void)Rte_Write_VeIDCR_b_IBS_I_Batt_FA_Value(VeIDCR_b_IBS_I_Batt_FA);

    /* Outport: '<Root>/VeIDCR_b_IBS_I_Batt_SgnlRcvd' incorporates:
     *  SignalConversion generated from: '<S149>/IBS_I_Batt_SgnlRcvd'
     */
    (void)Rte_Write_VeIDCR_b_IBS_I_Batt_SgnlRcvd_Value
        (VeIDCR_b_IBS_I_Batt_SgnlRcvd);

    /* Outport: '<Root>/VeIDCR_I_IBS_I_Converted' incorporates:
     *  SignalConversion generated from: '<S149>/IBS_I_Converted'
     */
    (void)Rte_Write_VeIDCR_I_IBS_I_Converted_Value(IDCR_ac_B.Merge1);

    /* S-Function (fcgen): '<S149>/FcnCallGen' incorporates:
     *  SubSystem: '<S149>/IBattConv'
     */
    /* Outport: '<Root>/VeIDCR_b_IBS_I_Converted_FA' incorporates:
     *  Logic: '<S505>/Logical1'
     *  SignalConversion generated from: '<S149>/IBS_I_Converted_FA'
     */
    (void)Rte_Write_VeIDCR_b_IBS_I_Converted_FA_Value(!rtb_Logical);

    /* S-Function (fcgen): '<S149>/FcnCallGen' incorporates:
     *  SubSystem: '<S149>/BattSocAccuracy_for_ESS'
     */
    /* Outport: '<Root>/VeIDCR_b_IBS_BattSOC_FA' incorporates:
     *  Constant: '<S507>/Calib'
     *  Logic: '<S504>/Logical Operator'
     *  Logic: '<S504>/Logical Operator1'
     *  Logic: '<S504>/Logical Operator2'
     *  Logic: '<S504>/Logical Operator3'
     *  Merge: '<Root>/Merge_20'
     *  Merge: '<Root>/Merge_244'
     *  SignalConversion generated from: '<S149>/VeIDCR_b_IBS_BattSOC_FA'
     *  SignalConversion generated from: '<S149>/BattSocAcc'
     *  SignalConversion generated from: '<S149>/IBS_BattSOC_FA'
     */
    (void)Rte_Write_VeIDCR_b_IBS_BattSOC_FA_Value
        ((Rte_IrvRead_IDCR_MedTED_VeIDCR_b_IBS_BattSOCFA_write_IRV()) ||
         ((!Rte_IrvRead_IDCR_MedTED_IBS_BattSOCAcc_Init_IRV_IRV()) &&
          (KaIDCR_b_SocAccuracy_Map[0] != KaIDCR_b_SocAccuracy_Map[1])));

    /* S-Function (fcgen): '<S149>/FcnCallGen' incorporates:
     *  SubSystem: '<S149>/Proxi'
     */
    /* Outport: '<Root>/VeIDCR_e_PROXY_Plug_and_Charge' incorporates:
     *  DataTypeConversion: '<S525>/DataTypeConversion'
     *  Inport: '<Root>/VePRXR_e_Plug_and_Charge'
     *  SignalConversion generated from: '<S149>/VeIDCR_e_PROXY_Plug_and_Charge'
     */
    (void)Rte_Write_VeIDCR_e_PROXY_Plug_and_Charge_Value
        ((TeIDCR_e_Plug_and_Charge)tmpRead);

    /* End of Outputs for S-Function (fcgen): '<S149>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_E_EVSE_EnrgyToBeDlvrd(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_E_EVSE_EnrgyToBeDlvrd' */
    /* Outport: '<Root>/VeIDCR_b_EVSE_EnrgyToBeDlvrd_FA' incorporates:
     *  Chart: '<S1>/FsftIDCR_E_EVSE_EnrgyToBeDlvrdChrt'
     *  SignalConversion generated from: '<S1>/VeIDCR_b_EVSE_EnrgyToBeDlvrdFA'
     */
    /* Gateway: FsftIDCR_E_EVSE_EnrgyToBeDlvrd/FsftIDCR_E_EVSE_EnrgyToBeDlvrdChrt */
    /* During: FsftIDCR_E_EVSE_EnrgyToBeDlvrd/FsftIDCR_E_EVSE_EnrgyToBeDlvrdChrt */
    /* Entry Internal: FsftIDCR_E_EVSE_EnrgyToBeDlvrd/FsftIDCR_E_EVSE_EnrgyToBeDlvrdChrt */
    /* Transition: '<S356>:2' */
    (void)Rte_Write_VeIDCR_b_EVSE_EnrgyToBeDlvrd_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_E_EVSE_EnrgyToBeDlvrd' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_I_ACOutCurrent1(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_I_ACOutCurrent1' */
    /* Outport: '<Root>/VeIDCR_b_ACOutCurrent1_FA' incorporates:
     *  Chart: '<S2>/FsftIDCR_I_ACOutCurrent1Chrt'
     *  SignalConversion generated from: '<S2>/VeIDCR_b_ACOutCurrent1FA'
     */
    /* Gateway: FsftIDCR_I_ACOutCurrent1/FsftIDCR_I_ACOutCurrent1Chrt */
    /* During: FsftIDCR_I_ACOutCurrent1/FsftIDCR_I_ACOutCurrent1Chrt */
    /* Entry Internal: FsftIDCR_I_ACOutCurrent1/FsftIDCR_I_ACOutCurrent1Chrt */
    /* Transition: '<S357>:2' */
    (void)Rte_Write_VeIDCR_b_ACOutCurrent1_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_I_ACOutCurrent1' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_I_ACOutCurrent2(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_I_ACOutCurrent2' */
    /* Outport: '<Root>/VeIDCR_b_ACOutCurrent2_FA' incorporates:
     *  Chart: '<S3>/FsftIDCR_I_ACOutCurrent2Chrt'
     *  SignalConversion generated from: '<S3>/VeIDCR_b_ACOutCurrent2FA'
     */
    /* Gateway: FsftIDCR_I_ACOutCurrent2/FsftIDCR_I_ACOutCurrent2Chrt */
    /* During: FsftIDCR_I_ACOutCurrent2/FsftIDCR_I_ACOutCurrent2Chrt */
    /* Entry Internal: FsftIDCR_I_ACOutCurrent2/FsftIDCR_I_ACOutCurrent2Chrt */
    /* Transition: '<S358>:2' */
    (void)Rte_Write_VeIDCR_b_ACOutCurrent2_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_I_ACOutCurrent2' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_I_ACOutCurrent3(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_I_ACOutCurrent3' */
    /* Outport: '<Root>/VeIDCR_b_ACOutCurrent3_FA' incorporates:
     *  Chart: '<S4>/FsftIDCR_I_ACOutCurrent3Chrt'
     *  SignalConversion generated from: '<S4>/VeIDCR_b_ACOutCurrent3FA'
     */
    /* Gateway: FsftIDCR_I_ACOutCurrent3/FsftIDCR_I_ACOutCurrent3Chrt */
    /* During: FsftIDCR_I_ACOutCurrent3/FsftIDCR_I_ACOutCurrent3Chrt */
    /* Entry Internal: FsftIDCR_I_ACOutCurrent3/FsftIDCR_I_ACOutCurrent3Chrt */
    /* Transition: '<S359>:2' */
    (void)Rte_Write_VeIDCR_b_ACOutCurrent3_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_I_ACOutCurrent3' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_I_ACSideCurr_L2(void)
{
    /* local block i/o variables */
    boolean rtb_LeIDCR_b_ACSideCurr_L2FA_out_h;

    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_I_ACSideCurr_L2' */
    /* Chart: '<S5>/FsftIDCR_I_ACSideCurr_L2Chrt' */
    /* Gateway: FsftIDCR_I_ACSideCurr_L2/FsftIDCR_I_ACSideCurr_L2Chrt */
    /* During: FsftIDCR_I_ACSideCurr_L2/FsftIDCR_I_ACSideCurr_L2Chrt */
    /* Entry Internal: FsftIDCR_I_ACSideCurr_L2/FsftIDCR_I_ACSideCurr_L2Chrt */
    /* Transition: '<S360>:2' */
    rtb_LeIDCR_b_ACSideCurr_L2FA_out_h = true;

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_I_ACSideCurr_L2' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_I_ACSideCurr_L3(void)
{
    /* local block i/o variables */
    boolean rtb_LeIDCR_b_ACSideCurr_L3FA_out_k;

    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_I_ACSideCurr_L3' */
    /* Chart: '<S6>/FsftIDCR_I_ACSideCurr_L3Chrt' */
    /* Gateway: FsftIDCR_I_ACSideCurr_L3/FsftIDCR_I_ACSideCurr_L3Chrt */
    /* During: FsftIDCR_I_ACSideCurr_L3/FsftIDCR_I_ACSideCurr_L3Chrt */
    /* Entry Internal: FsftIDCR_I_ACSideCurr_L3/FsftIDCR_I_ACSideCurr_L3Chrt */
    /* Transition: '<S361>:2' */
    rtb_LeIDCR_b_ACSideCurr_L3FA_out_k = true;

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_I_ACSideCurr_L3' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_I_AC_Side_Curr(void)
{
    /* local block i/o variables */
    boolean rtb_LeIDCR_b_AC_Side_CurrFA_out_p;

    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_I_AC_Side_Curr' */
    /* Chart: '<S7>/FsftIDCR_I_AC_Side_CurrChrt' */
    /* Gateway: FsftIDCR_I_AC_Side_Curr/FsftIDCR_I_AC_Side_CurrChrt */
    /* During: FsftIDCR_I_AC_Side_Curr/FsftIDCR_I_AC_Side_CurrChrt */
    /* Entry Internal: FsftIDCR_I_AC_Side_Curr/FsftIDCR_I_AC_Side_CurrChrt */
    /* Transition: '<S362>:2' */
    rtb_LeIDCR_b_AC_Side_CurrFA_out_p = true;

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_I_AC_Side_Curr' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_I_APM_HV_Current(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_I_APM_HV_Current' */
    /* Outport: '<Root>/VeIDCR_I_APM_HV_Current' incorporates:
     *  Chart: '<S8>/FsftIDCR_I_APM_HV_CurrentChrt'
     *  SignalConversion generated from: '<S8>/VeIDCR_I_APM_HV_Current'
     */
    /* Gateway: FsftIDCR_I_APM_HV_Current/FsftIDCR_I_APM_HV_CurrentChrt */
    /* During: FsftIDCR_I_APM_HV_Current/FsftIDCR_I_APM_HV_CurrentChrt */
    /* Entry Internal: FsftIDCR_I_APM_HV_Current/FsftIDCR_I_APM_HV_CurrentChrt */
    /* Transition: '<S363>:2' */
    (void)Rte_Write_VeIDCR_I_APM_HV_Current_Value(KeIDCR_I_APM_HV_CurrentDflt);

    /* Outport: '<Root>/VeIDCR_b_APM_HV_CurrentFA' incorporates:
     *  Chart: '<S8>/FsftIDCR_I_APM_HV_CurrentChrt'
     *  SignalConversion generated from: '<S8>/VeIDCR_b_APM_HV_CurrentFA'
     */
    (void)Rte_Write_VeIDCR_b_APM_HV_CurrentFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_I_APM_HV_Current' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_I_APM_LV_Current(void)
{
    /* local block i/o variables */
    boolean rtb_LeIDCR_b_APM_LV_CurrentFA_out_i;

    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_I_APM_LV_Current' */
    /* Chart: '<S9>/FsftIDCR_I_APM_LV_CurrentChrt' */
    /* Gateway: FsftIDCR_I_APM_LV_Current/FsftIDCR_I_APM_LV_CurrentChrt */
    /* During: FsftIDCR_I_APM_LV_Current/FsftIDCR_I_APM_LV_CurrentChrt */
    /* Entry Internal: FsftIDCR_I_APM_LV_Current/FsftIDCR_I_APM_LV_CurrentChrt */
    /* Transition: '<S364>:2' */
    rtb_LeIDCR_b_APM_LV_CurrentFA_out_i = true;

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_I_APM_LV_Current' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_I_AcOutCurrent(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_I_AcOutCurrent' */
    /* Outport: '<Root>/VeIDCR_b_AcOutCurrent_FA' incorporates:
     *  Chart: '<S10>/FsftIDCR_I_AcOutCurrentChrt'
     *  SignalConversion generated from: '<S10>/VeIDCR_b_AcOutCurrentFA'
     */
    /* Gateway: FsftIDCR_I_AcOutCurrent/FsftIDCR_I_AcOutCurrentChrt */
    /* During: FsftIDCR_I_AcOutCurrent/FsftIDCR_I_AcOutCurrentChrt */
    /* Entry Internal: FsftIDCR_I_AcOutCurrent/FsftIDCR_I_AcOutCurrentChrt */
    /* Transition: '<S365>:2' */
    (void)Rte_Write_VeIDCR_b_AcOutCurrent_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_I_AcOutCurrent' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_I_BattSide_Curr(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_I_BattSide_Curr' */
    /* Outport: '<Root>/VeIDCR_b_BattSide_CurrFA' incorporates:
     *  Chart: '<S11>/FsftIDCR_I_BattSide_CurrChrt'
     *  SignalConversion generated from: '<S11>/VeIDCR_b_BattSide_CurrFA'
     */
    /* Gateway: FsftIDCR_I_BattSide_Curr/FsftIDCR_I_BattSide_CurrChrt */
    /* During: FsftIDCR_I_BattSide_Curr/FsftIDCR_I_BattSide_CurrChrt */
    /* Entry Internal: FsftIDCR_I_BattSide_Curr/FsftIDCR_I_BattSide_CurrChrt */
    /* Transition: '<S366>:2' */
    (void)Rte_Write_VeIDCR_b_BattSide_CurrFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_I_BattSide_Curr' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_I_ChrgCrntAvail(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_I_ChrgCrntAvail' */
    /* Outport: '<Root>/VeIDCR_b_ChrgCrntAvailFA' incorporates:
     *  Chart: '<S12>/FsftIDCR_I_ChrgCrntAvailChrt'
     *  SignalConversion generated from: '<S12>/VeIDCR_b_ChrgCrntAvailFA'
     */
    /* Gateway: FsftIDCR_I_ChrgCrntAvail/FsftIDCR_I_ChrgCrntAvailChrt */
    /* During: FsftIDCR_I_ChrgCrntAvail/FsftIDCR_I_ChrgCrntAvailChrt */
    /* Entry Internal: FsftIDCR_I_ChrgCrntAvail/FsftIDCR_I_ChrgCrntAvailChrt */
    /* Transition: '<S367>:2' */
    (void)Rte_Write_VeIDCR_b_ChrgCrntAvailFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_I_ChrgCrntAvail' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_I_ChrgCurrent(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_I_ChrgCurrent' */
    /* Outport: '<Root>/VeIDCR_b_ChrgCurrent_FA' incorporates:
     *  Chart: '<S13>/FsftIDCR_I_ChrgCurrentChrt'
     *  SignalConversion generated from: '<S13>/VeIDCR_b_ChrgCurrentFA'
     */
    /* Gateway: FsftIDCR_I_ChrgCurrent/FsftIDCR_I_ChrgCurrentChrt */
    /* During: FsftIDCR_I_ChrgCurrent/FsftIDCR_I_ChrgCurrentChrt */
    /* Entry Internal: FsftIDCR_I_ChrgCurrent/FsftIDCR_I_ChrgCurrentChrt */
    /* Transition: '<S368>:2' */
    (void)Rte_Write_VeIDCR_b_ChrgCurrent_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_I_ChrgCurrent' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_I_DCInCurrent(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_I_DCInCurrent' */
    /* Outport: '<Root>/VeIDCR_b_DCInputCurrent_FA' incorporates:
     *  Chart: '<S14>/FsftIDCR_I_DCInCurrentChrt'
     *  SignalConversion generated from: '<S14>/VeIDCR_b_DCInCurrentFA'
     */
    /* Gateway: FsftIDCR_I_DCInCurrent/FsftIDCR_I_DCInCurrentChrt */
    /* During: FsftIDCR_I_DCInCurrent/FsftIDCR_I_DCInCurrentChrt */
    /* Entry Internal: FsftIDCR_I_DCInCurrent/FsftIDCR_I_DCInCurrentChrt */
    /* Transition: '<S369>:2' */
    (void)Rte_Write_VeIDCR_b_DCInputCurrent_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_I_DCInCurrent' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_I_EVSECurr_RegTol(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_I_EVSECurr_RegTol' */
    /* Outport: '<Root>/VeIDCR_b_EVSECurr_RegTol_FA' incorporates:
     *  Chart: '<S15>/FsftIDCR_I_EVSECurr_RegTolChrt'
     *  SignalConversion generated from: '<S15>/VeIDCR_b_EVSECurr_RegTolFA'
     */
    /* Gateway: FsftIDCR_I_EVSECurr_RegTol/FsftIDCR_I_EVSECurr_RegTolChrt */
    /* During: FsftIDCR_I_EVSECurr_RegTol/FsftIDCR_I_EVSECurr_RegTolChrt */
    /* Entry Internal: FsftIDCR_I_EVSECurr_RegTol/FsftIDCR_I_EVSECurr_RegTolChrt */
    /* Transition: '<S370>:2' */
    (void)Rte_Write_VeIDCR_b_EVSECurr_RegTol_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_I_EVSECurr_RegTol' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_I_EVSEMaxCurrLmt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_I_EVSEMaxCurrLmt' */
    /* Outport: '<Root>/VeIDCR_b_EVSEMaxCurrLmt_FA' incorporates:
     *  Chart: '<S16>/FsftIDCR_I_EVSEMaxCurrLmtChrt'
     *  SignalConversion generated from: '<S16>/VeIDCR_b_EVSEMaxCurrLmtFA'
     */
    /* Gateway: FsftIDCR_I_EVSEMaxCurrLmt/FsftIDCR_I_EVSEMaxCurrLmtChrt */
    /* During: FsftIDCR_I_EVSEMaxCurrLmt/FsftIDCR_I_EVSEMaxCurrLmtChrt */
    /* Entry Internal: FsftIDCR_I_EVSEMaxCurrLmt/FsftIDCR_I_EVSEMaxCurrLmtChrt */
    /* Transition: '<S371>:2' */
    (void)Rte_Write_VeIDCR_b_EVSEMaxCurrLmt_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_I_EVSEMaxCurrLmt' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_I_EVSEMinCurrLmt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_I_EVSEMinCurrLmt' */
    /* Outport: '<Root>/VeIDCR_b_EVSEMinCurrLmt_FA' incorporates:
     *  Chart: '<S17>/FsftIDCR_I_EVSEMinCurrLmtChrt'
     *  SignalConversion generated from: '<S17>/VeIDCR_b_EVSEMinCurrLmtFA'
     */
    /* Gateway: FsftIDCR_I_EVSEMinCurrLmt/FsftIDCR_I_EVSEMinCurrLmtChrt */
    /* During: FsftIDCR_I_EVSEMinCurrLmt/FsftIDCR_I_EVSEMinCurrLmtChrt */
    /* Entry Internal: FsftIDCR_I_EVSEMinCurrLmt/FsftIDCR_I_EVSEMinCurrLmtChrt */
    /* Transition: '<S372>:2' */
    (void)Rte_Write_VeIDCR_b_EVSEMinCurrLmt_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_I_EVSEMinCurrLmt' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_I_EVSEOutputCurr(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_I_EVSEOutputCurr' */
    /* Outport: '<Root>/VeIDCR_b_EVSEOutputCurr_FA' incorporates:
     *  Chart: '<S18>/FsftIDCR_I_EVSEOutputCurrChrt'
     *  SignalConversion generated from: '<S18>/VeIDCR_b_EVSEOutputCurrFA'
     */
    /* Gateway: FsftIDCR_I_EVSEOutputCurr/FsftIDCR_I_EVSEOutputCurrChrt */
    /* During: FsftIDCR_I_EVSEOutputCurr/FsftIDCR_I_EVSEOutputCurrChrt */
    /* Entry Internal: FsftIDCR_I_EVSEOutputCurr/FsftIDCR_I_EVSEOutputCurrChrt */
    /* Transition: '<S373>:2' */
    (void)Rte_Write_VeIDCR_b_EVSEOutputCurr_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_I_EVSEOutputCurr' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_I_EVSEPeakCurrRip(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_I_EVSEPeakCurrRip' */
    /* Outport: '<Root>/VeIDCR_b_EVSEPeakCurrRip_FA' incorporates:
     *  Chart: '<S19>/FsftIDCR_I_EVSEPeakCurrRipChrt'
     *  SignalConversion generated from: '<S19>/VeIDCR_b_EVSEPeakCurrRipFA'
     */
    /* Gateway: FsftIDCR_I_EVSEPeakCurrRip/FsftIDCR_I_EVSEPeakCurrRipChrt */
    /* During: FsftIDCR_I_EVSEPeakCurrRip/FsftIDCR_I_EVSEPeakCurrRipChrt */
    /* Entry Internal: FsftIDCR_I_EVSEPeakCurrRip/FsftIDCR_I_EVSEPeakCurrRipChrt */
    /* Transition: '<S374>:2' */
    (void)Rte_Write_VeIDCR_b_EVSEPeakCurrRip_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_I_EVSEPeakCurrRip' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_I_IdcHvSetPFdbk(void)
{
    /* local block i/o variables */
    boolean rtb_LeIDCR_b_IdcHvSetPFdbkFA_out_i;

    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_I_IdcHvSetPFdbk' */
    /* Chart: '<S20>/FsftIDCR_I_IdcHvSetPFdbkChrt' */
    /* Gateway: FsftIDCR_I_IdcHvSetPFdbk/FsftIDCR_I_IdcHvSetPFdbkChrt */
    /* During: FsftIDCR_I_IdcHvSetPFdbk/FsftIDCR_I_IdcHvSetPFdbkChrt */
    /* Entry Internal: FsftIDCR_I_IdcHvSetPFdbk/FsftIDCR_I_IdcHvSetPFdbkChrt */
    /* Transition: '<S375>:2' */
    rtb_LeIDCR_b_IdcHvSetPFdbkFA_out_i = true;

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_I_IdcHvSetPFdbk' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_I_J1772InputCrntAval(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_I_J1772InputCrntAval' */
    /* Outport: '<Root>/VeIDCR_b_J1772InputCrntAvalFA' incorporates:
     *  Chart: '<S21>/FsftIDCR_I_J1772InputCrntAvalChrt'
     *  SignalConversion generated from: '<S21>/VeIDCR_b_J1772InputCrntAvalFA'
     */
    /* Gateway: FsftIDCR_I_J1772InputCrntAval/FsftIDCR_I_J1772InputCrntAvalChrt */
    /* During: FsftIDCR_I_J1772InputCrntAval/FsftIDCR_I_J1772InputCrntAvalChrt */
    /* Entry Internal: FsftIDCR_I_J1772InputCrntAval/FsftIDCR_I_J1772InputCrntAvalChrt */
    /* Transition: '<S376>:2' */
    (void)Rte_Write_VeIDCR_b_J1772InputCrntAvalFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_I_J1772InputCrntAval' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_I_V2L_DischargeCurrent(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_I_V2L_DischargeCurrent' */
    /* Outport: '<Root>/VeIDCR_b_V2L_DischargeCurrentFA' incorporates:
     *  Chart: '<S22>/FsftIDCR_I_V2L_DischargeCurrentChrt'
     *  SignalConversion generated from: '<S22>/VeIDCR_b_V2L_DischargeCurrentFA'
     */
    /* Gateway: FsftIDCR_I_V2L_DischargeCurrent/FsftIDCR_I_V2L_DischargeCurrentChrt */
    /* During: FsftIDCR_I_V2L_DischargeCurrent/FsftIDCR_I_V2L_DischargeCurrentChrt */
    /* Entry Internal: FsftIDCR_I_V2L_DischargeCurrent/FsftIDCR_I_V2L_DischargeCurrentChrt */
    /* Transition: '<S377>:2' */
    (void)Rte_Write_VeIDCR_b_V2L_DischargeCurrentFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_I_V2L_DischargeCurrent' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_I_V2XInCurrent(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_I_V2XInCurrent' */
    /* Outport: '<Root>/VeIDCR_b_V2X_InputCurrent_FA' incorporates:
     *  Chart: '<S23>/FsftIDCR_I_V2XInCurrentChrt'
     *  SignalConversion generated from: '<S23>/VeIDCR_b_V2XInCurrentFA'
     */
    /* Gateway: FsftIDCR_I_V2XInCurrent/FsftIDCR_I_V2XInCurrentChrt */
    /* During: FsftIDCR_I_V2XInCurrent/FsftIDCR_I_V2XInCurrentChrt */
    /* Entry Internal: FsftIDCR_I_V2XInCurrent/FsftIDCR_I_V2XInCurrentChrt */
    /* Transition: '<S378>:2' */
    (void)Rte_Write_VeIDCR_b_V2X_InputCurrent_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_I_V2XInCurrent' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_P_APM_InputPower(void)
{
    /* local block i/o variables */
    boolean rtb_LeIDCR_b_APM_InputPowerFA_out_f;

    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_P_APM_InputPower' */
    /* Chart: '<S24>/FsftIDCR_P_APM_InputPowerChrt' */
    /* Gateway: FsftIDCR_P_APM_InputPower/FsftIDCR_P_APM_InputPowerChrt */
    /* During: FsftIDCR_P_APM_InputPower/FsftIDCR_P_APM_InputPowerChrt */
    /* Entry Internal: FsftIDCR_P_APM_InputPower/FsftIDCR_P_APM_InputPowerChrt */
    /* Transition: '<S379>:2' */
    rtb_LeIDCR_b_APM_InputPowerFA_out_f = true;

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_P_APM_InputPower' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_P_APM_OutputPower(void)
{
    /* local block i/o variables */
    boolean rtb_LeIDCR_b_APM_OutputPowerFA_out_h;

    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_P_APM_OutputPower' */
    /* Chart: '<S25>/FsftIDCR_P_APM_OutputPowerChrt' */
    /* Gateway: FsftIDCR_P_APM_OutputPower/FsftIDCR_P_APM_OutputPowerChrt */
    /* During: FsftIDCR_P_APM_OutputPower/FsftIDCR_P_APM_OutputPowerChrt */
    /* Entry Internal: FsftIDCR_P_APM_OutputPower/FsftIDCR_P_APM_OutputPowerChrt */
    /* Transition: '<S380>:2' */
    rtb_LeIDCR_b_APM_OutputPowerFA_out_h = true;

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_P_APM_OutputPower' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_P_APM_PwrLoss(void)
{
    /* local block i/o variables */
    boolean rtb_LeIDCR_b_APM_PwrLossFA_out_o;

    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_P_APM_PwrLoss' */
    /* Chart: '<S26>/FsftIDCR_P_APM_PwrLossChrt' */
    /* Gateway: FsftIDCR_P_APM_PwrLoss/FsftIDCR_P_APM_PwrLossChrt */
    /* During: FsftIDCR_P_APM_PwrLoss/FsftIDCR_P_APM_PwrLossChrt */
    /* Entry Internal: FsftIDCR_P_APM_PwrLoss/FsftIDCR_P_APM_PwrLossChrt */
    /* Transition: '<S381>:2' */
    rtb_LeIDCR_b_APM_PwrLossFA_out_o = true;

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_P_APM_PwrLoss' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_P_AvailablePower(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_P_AvailablePower' */
    /* Outport: '<Root>/VeIDCR_b_AvailablePower_FA' incorporates:
     *  Chart: '<S27>/FsftIDCR_P_AvailablePowerChrt'
     *  SignalConversion generated from: '<S27>/VeIDCR_b_AvailablePowerFA'
     */
    /* Gateway: FsftIDCR_P_AvailablePower/FsftIDCR_P_AvailablePowerChrt */
    /* During: FsftIDCR_P_AvailablePower/FsftIDCR_P_AvailablePowerChrt */
    /* Entry Internal: FsftIDCR_P_AvailablePower/FsftIDCR_P_AvailablePowerChrt */
    /* Transition: '<S382>:2' */
    (void)Rte_Write_VeIDCR_b_AvailablePower_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_P_AvailablePower' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_P_EVSEMaxPwrLmt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_P_EVSEMaxPwrLmt' */
    /* Outport: '<Root>/VeIDCR_b_EVSEMaxPwrLmt_FA' incorporates:
     *  Chart: '<S28>/FsftIDCR_P_EVSEMaxPwrLmtChrt'
     *  SignalConversion generated from: '<S28>/VeIDCR_b_EVSEMaxPwrLmtFA'
     */
    /* Gateway: FsftIDCR_P_EVSEMaxPwrLmt/FsftIDCR_P_EVSEMaxPwrLmtChrt */
    /* During: FsftIDCR_P_EVSEMaxPwrLmt/FsftIDCR_P_EVSEMaxPwrLmtChrt */
    /* Entry Internal: FsftIDCR_P_EVSEMaxPwrLmt/FsftIDCR_P_EVSEMaxPwrLmtChrt */
    /* Transition: '<S383>:2' */
    (void)Rte_Write_VeIDCR_b_EVSEMaxPwrLmt_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_P_EVSEMaxPwrLmt' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_Pct_GenRgSPDtyCycReq(void)
{
    /* local block i/o variables */
    float32 rtb_LeIDCR_Pct_GenRgSPDtyCycReq_out_o;

    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_Pct_GenRgSPDtyCycReq' */
    /* Chart: '<S29>/FsftIDCR_Pct_GenRgSPDtyCycReqChrt' */
    /* Gateway: FsftIDCR_Pct_GenRgSPDtyCycReq/FsftIDCR_Pct_GenRgSPDtyCycReqChrt */
    /* During: FsftIDCR_Pct_GenRgSPDtyCycReq/FsftIDCR_Pct_GenRgSPDtyCycReqChrt */
    /* Entry Internal: FsftIDCR_Pct_GenRgSPDtyCycReq/FsftIDCR_Pct_GenRgSPDtyCycReqChrt */
    /* Transition: '<S384>:2' */
    rtb_LeIDCR_Pct_GenRgSPDtyCycReq_out_o = KeIDCR_Pct_GenRgSPDtyCycReqDflt;

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_Pct_GenRgSPDtyCycReq' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_Pct_IBS_BattSOC(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_Pct_IBS_BattSOC' */
    /* Merge: '<Root>/Merge_20' incorporates:
     *  Chart: '<S30>/FsftIDCR_Pct_IBS_BattSOCChrt'
     *  SignalConversion generated from: '<S30>/VeIDCR_b_IBS_BattSOCFA_write'
     */
    /* Gateway: FsftIDCR_Pct_IBS_BattSOC/FsftIDCR_Pct_IBS_BattSOCChrt */
    /* During: FsftIDCR_Pct_IBS_BattSOC/FsftIDCR_Pct_IBS_BattSOCChrt */
    /* Entry Internal: FsftIDCR_Pct_IBS_BattSOC/FsftIDCR_Pct_IBS_BattSOCChrt */
    /* Transition: '<S385>:2' */
    Rte_IrvWrite_FsftIDCR_Pct_IBS_BattSOC_VeIDCR_b_IBS_BattSOCFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_Pct_IBS_BattSOC' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_Pct_UtilPctOfDCDC(void)
{
    /* local block i/o variables */
    boolean rtb_LeIDCR_b_UtilPctOfDCDCFA_out_e;

    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_Pct_UtilPctOfDCDC' */
    /* Chart: '<S31>/FsftIDCR_Pct_UtilPctOfDCDCChrt' */
    /* Gateway: FsftIDCR_Pct_UtilPctOfDCDC/FsftIDCR_Pct_UtilPctOfDCDCChrt */
    /* During: FsftIDCR_Pct_UtilPctOfDCDC/FsftIDCR_Pct_UtilPctOfDCDCChrt */
    /* Entry Internal: FsftIDCR_Pct_UtilPctOfDCDC/FsftIDCR_Pct_UtilPctOfDCDCChrt */
    /* Transition: '<S386>:2' */
    rtb_LeIDCR_b_UtilPctOfDCDCFA_out_e = true;

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_Pct_UtilPctOfDCDC' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_T_APM_TempColdPlate(void)
{
    /* local block i/o variables */
    boolean rtb_LeIDCR_b_APM_TempColdPlateFA_out_l;

    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_T_APM_TempColdPlate' */
    /* Chart: '<S32>/FsftIDCR_T_APM_TempColdPlateChrt' */
    /* Gateway: FsftIDCR_T_APM_TempColdPlate/FsftIDCR_T_APM_TempColdPlateChrt */
    /* During: FsftIDCR_T_APM_TempColdPlate/FsftIDCR_T_APM_TempColdPlateChrt */
    /* Entry Internal: FsftIDCR_T_APM_TempColdPlate/FsftIDCR_T_APM_TempColdPlateChrt */
    /* Transition: '<S387>:2' */
    rtb_LeIDCR_b_APM_TempColdPlateFA_out_l = true;

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_T_APM_TempColdPlate' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_T_Temp1(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_T_Temp1' */
    /* Outport: '<Root>/VeIDCR_b_APMTemp1_FA' incorporates:
     *  Chart: '<S33>/FsftIDCR_T_Temp1Chrt'
     *  SignalConversion generated from: '<S33>/VeIDCR_b_Temp1FA'
     */
    /* Gateway: FsftIDCR_T_Temp1/FsftIDCR_T_Temp1Chrt */
    /* During: FsftIDCR_T_Temp1/FsftIDCR_T_Temp1Chrt */
    /* Entry Internal: FsftIDCR_T_Temp1/FsftIDCR_T_Temp1Chrt */
    /* Transition: '<S388>:2' */
    (void)Rte_Write_VeIDCR_b_APMTemp1_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_T_Temp1' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_T_Temp2(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_T_Temp2' */
    /* Outport: '<Root>/VeIDCR_b_APMTemp2_FA' incorporates:
     *  Chart: '<S34>/FsftIDCR_T_Temp2Chrt'
     *  SignalConversion generated from: '<S34>/VeIDCR_b_Temp2FA'
     */
    /* Gateway: FsftIDCR_T_Temp2/FsftIDCR_T_Temp2Chrt */
    /* During: FsftIDCR_T_Temp2/FsftIDCR_T_Temp2Chrt */
    /* Entry Internal: FsftIDCR_T_Temp2/FsftIDCR_T_Temp2Chrt */
    /* Transition: '<S389>:2' */
    (void)Rte_Write_VeIDCR_b_APMTemp2_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_T_Temp2' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_U_ACOutVoltage1(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_U_ACOutVoltage1' */
    /* Outport: '<Root>/VeIDCR_b_ACOutVoltage1_FA' incorporates:
     *  Chart: '<S35>/FsftIDCR_U_ACOutVoltage1Chrt'
     *  SignalConversion generated from: '<S35>/VeIDCR_b_ACOutVoltage1FA'
     */
    /* Gateway: FsftIDCR_U_ACOutVoltage1/FsftIDCR_U_ACOutVoltage1Chrt */
    /* During: FsftIDCR_U_ACOutVoltage1/FsftIDCR_U_ACOutVoltage1Chrt */
    /* Entry Internal: FsftIDCR_U_ACOutVoltage1/FsftIDCR_U_ACOutVoltage1Chrt */
    /* Transition: '<S390>:2' */
    (void)Rte_Write_VeIDCR_b_ACOutVoltage1_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_U_ACOutVoltage1' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_U_ACOutVoltage2(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_U_ACOutVoltage2' */
    /* Outport: '<Root>/VeIDCR_b_ACOutVoltage2_FA' incorporates:
     *  Chart: '<S36>/FsftIDCR_U_ACOutVoltage2Chrt'
     *  SignalConversion generated from: '<S36>/VeIDCR_b_ACOutVoltage2FA'
     */
    /* Gateway: FsftIDCR_U_ACOutVoltage2/FsftIDCR_U_ACOutVoltage2Chrt */
    /* During: FsftIDCR_U_ACOutVoltage2/FsftIDCR_U_ACOutVoltage2Chrt */
    /* Entry Internal: FsftIDCR_U_ACOutVoltage2/FsftIDCR_U_ACOutVoltage2Chrt */
    /* Transition: '<S391>:2' */
    (void)Rte_Write_VeIDCR_b_ACOutVoltage2_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_U_ACOutVoltage2' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_U_ACOutVoltage3(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_U_ACOutVoltage3' */
    /* Outport: '<Root>/VeIDCR_b_ACOutVoltage3_FA' incorporates:
     *  Chart: '<S37>/FsftIDCR_U_ACOutVoltage3Chrt'
     *  SignalConversion generated from: '<S37>/VeIDCR_b_ACOutVoltage3FA'
     */
    /* Gateway: FsftIDCR_U_ACOutVoltage3/FsftIDCR_U_ACOutVoltage3Chrt */
    /* During: FsftIDCR_U_ACOutVoltage3/FsftIDCR_U_ACOutVoltage3Chrt */
    /* Entry Internal: FsftIDCR_U_ACOutVoltage3/FsftIDCR_U_ACOutVoltage3Chrt */
    /* Transition: '<S392>:2' */
    (void)Rte_Write_VeIDCR_b_ACOutVoltage3_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_U_ACOutVoltage3' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_U_ACSideVolt_L2(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_U_ACSideVolt_L2' */
    /* Outport: '<Root>/VeIDCR_b_ACSideVolt_L2FA' incorporates:
     *  Chart: '<S38>/FsftIDCR_U_ACSideVolt_L2Chrt'
     *  SignalConversion generated from: '<S38>/VeIDCR_b_ACSideVolt_L2FA'
     */
    /* Gateway: FsftIDCR_U_ACSideVolt_L2/FsftIDCR_U_ACSideVolt_L2Chrt */
    /* During: FsftIDCR_U_ACSideVolt_L2/FsftIDCR_U_ACSideVolt_L2Chrt */
    /* Entry Internal: FsftIDCR_U_ACSideVolt_L2/FsftIDCR_U_ACSideVolt_L2Chrt */
    /* Transition: '<S393>:2' */
    (void)Rte_Write_VeIDCR_b_ACSideVolt_L2FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_U_ACSideVolt_L2' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_U_ACSideVolt_L3(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_U_ACSideVolt_L3' */
    /* Outport: '<Root>/VeIDCR_b_ACSideVolt_L3FA' incorporates:
     *  Chart: '<S39>/FsftIDCR_U_ACSideVolt_L3Chrt'
     *  SignalConversion generated from: '<S39>/VeIDCR_b_ACSideVolt_L3FA'
     */
    /* Gateway: FsftIDCR_U_ACSideVolt_L3/FsftIDCR_U_ACSideVolt_L3Chrt */
    /* During: FsftIDCR_U_ACSideVolt_L3/FsftIDCR_U_ACSideVolt_L3Chrt */
    /* Entry Internal: FsftIDCR_U_ACSideVolt_L3/FsftIDCR_U_ACSideVolt_L3Chrt */
    /* Transition: '<S394>:2' */
    (void)Rte_Write_VeIDCR_b_ACSideVolt_L3FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_U_ACSideVolt_L3' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_U_AC_InputVltOBCM(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_U_AC_InputVltOBCM' */
    /* Outport: '<Root>/VeIDCR_b_AC_InputVltOBCMFA' incorporates:
     *  Chart: '<S40>/FsftIDCR_U_AC_InputVltOBCMChrt'
     *  SignalConversion generated from: '<S40>/VeIDCR_b_AC_InputVltOBCMFA'
     */
    /* Gateway: FsftIDCR_U_AC_InputVltOBCM/FsftIDCR_U_AC_InputVltOBCMChrt */
    /* During: FsftIDCR_U_AC_InputVltOBCM/FsftIDCR_U_AC_InputVltOBCMChrt */
    /* Entry Internal: FsftIDCR_U_AC_InputVltOBCM/FsftIDCR_U_AC_InputVltOBCMChrt */
    /* Transition: '<S395>:2' */
    (void)Rte_Write_VeIDCR_b_AC_InputVltOBCMFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_U_AC_InputVltOBCM' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_U_APM_HV_Voltage(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_U_APM_HV_Voltage' */
    /* Outport: '<Root>/VeIDCR_b_APM_HV_VoltageFA' incorporates:
     *  Chart: '<S41>/FsftIDCR_U_APM_HV_VoltageChrt'
     *  SignalConversion generated from: '<S41>/VeIDCR_b_APM_HV_VoltageFA'
     */
    /* Gateway: FsftIDCR_U_APM_HV_Voltage/FsftIDCR_U_APM_HV_VoltageChrt */
    /* During: FsftIDCR_U_APM_HV_Voltage/FsftIDCR_U_APM_HV_VoltageChrt */
    /* Entry Internal: FsftIDCR_U_APM_HV_Voltage/FsftIDCR_U_APM_HV_VoltageChrt */
    /* Transition: '<S396>:2' */
    (void)Rte_Write_VeIDCR_b_APM_HV_VoltageFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_U_APM_HV_Voltage' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_U_APM_HvVsetPFdbk(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_U_APM_HvVsetPFdbk' */
    /* Outport: '<Root>/VeIDCR_b_APM_HvVsetPFdbk_FA' incorporates:
     *  Chart: '<S42>/FsftIDCR_U_APM_HvVsetPFdbkChrt'
     *  SignalConversion generated from: '<S42>/VeIDCR_b_APM_HvVsetPFdbkFA'
     */
    /* Gateway: FsftIDCR_U_APM_HvVsetPFdbk/FsftIDCR_U_APM_HvVsetPFdbkChrt */
    /* During: FsftIDCR_U_APM_HvVsetPFdbk/FsftIDCR_U_APM_HvVsetPFdbkChrt */
    /* Entry Internal: FsftIDCR_U_APM_HvVsetPFdbk/FsftIDCR_U_APM_HvVsetPFdbkChrt */
    /* Transition: '<S397>:2' */
    (void)Rte_Write_VeIDCR_b_APM_HvVsetPFdbk_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_U_APM_HvVsetPFdbk' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_U_APM_LV_Voltage(void)
{
    /* local block i/o variables */
    boolean rtb_LeIDCR_b_APM_LV_VoltageFA_out_d;

    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_U_APM_LV_Voltage' */
    /* Chart: '<S43>/FsftIDCR_U_APM_LV_VoltageChrt' */
    /* Gateway: FsftIDCR_U_APM_LV_Voltage/FsftIDCR_U_APM_LV_VoltageChrt */
    /* During: FsftIDCR_U_APM_LV_Voltage/FsftIDCR_U_APM_LV_VoltageChrt */
    /* Entry Internal: FsftIDCR_U_APM_LV_Voltage/FsftIDCR_U_APM_LV_VoltageChrt */
    /* Transition: '<S398>:2' */
    rtb_LeIDCR_b_APM_LV_VoltageFA_out_d = true;

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_U_APM_LV_Voltage' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_U_APM_LvIsetPFdbk(void)
{
    /* local block i/o variables */
    boolean rtb_LeIDCR_b_APM_LvIsetPFdbkFA_out_g;

    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_U_APM_LvIsetPFdbk' */
    /* Chart: '<S44>/FsftIDCR_U_APM_LvIsetPFdbkChrt' */
    /* Gateway: FsftIDCR_U_APM_LvIsetPFdbk/FsftIDCR_U_APM_LvIsetPFdbkChrt */
    /* During: FsftIDCR_U_APM_LvIsetPFdbk/FsftIDCR_U_APM_LvIsetPFdbkChrt */
    /* Entry Internal: FsftIDCR_U_APM_LvIsetPFdbk/FsftIDCR_U_APM_LvIsetPFdbkChrt */
    /* Transition: '<S399>:2' */
    rtb_LeIDCR_b_APM_LvIsetPFdbkFA_out_g = true;

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_U_APM_LvIsetPFdbk' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_U_AcOutVoltage(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_U_AcOutVoltage' */
    /* Outport: '<Root>/VeIDCR_b_AcOutVoltage_FA' incorporates:
     *  Chart: '<S45>/FsftIDCR_U_AcOutVoltageChrt'
     *  SignalConversion generated from: '<S45>/VeIDCR_b_AcOutVoltageFA'
     */
    /* Gateway: FsftIDCR_U_AcOutVoltage/FsftIDCR_U_AcOutVoltageChrt */
    /* During: FsftIDCR_U_AcOutVoltage/FsftIDCR_U_AcOutVoltageChrt */
    /* Entry Internal: FsftIDCR_U_AcOutVoltage/FsftIDCR_U_AcOutVoltageChrt */
    /* Transition: '<S400>:2' */
    (void)Rte_Write_VeIDCR_b_AcOutVoltage_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_U_AcOutVoltage' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_U_BattSideVolt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_U_BattSideVolt' */
    /* Outport: '<Root>/VeIDCR_b_BattSide_VoltFA' incorporates:
     *  Chart: '<S46>/FsftIDCR_U_BattSideVoltChrt'
     *  SignalConversion generated from: '<S46>/VeIDCR_b_BattSideVoltFA'
     */
    /* Gateway: FsftIDCR_U_BattSideVolt/FsftIDCR_U_BattSideVoltChrt */
    /* During: FsftIDCR_U_BattSideVolt/FsftIDCR_U_BattSideVoltChrt */
    /* Entry Internal: FsftIDCR_U_BattSideVolt/FsftIDCR_U_BattSideVoltChrt */
    /* Transition: '<S401>:2' */
    (void)Rte_Write_VeIDCR_b_BattSide_VoltFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_U_BattSideVolt' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_U_DCInVoltage(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_U_DCInVoltage' */
    /* Outport: '<Root>/VeIDCR_b_DCInputVoltage_FA' incorporates:
     *  Chart: '<S47>/FsftIDCR_U_DCInVoltageChrt'
     *  SignalConversion generated from: '<S47>/VeIDCR_b_DCInVoltageFA'
     */
    /* Gateway: FsftIDCR_U_DCInVoltage/FsftIDCR_U_DCInVoltageChrt */
    /* During: FsftIDCR_U_DCInVoltage/FsftIDCR_U_DCInVoltageChrt */
    /* Entry Internal: FsftIDCR_U_DCInVoltage/FsftIDCR_U_DCInVoltageChrt */
    /* Transition: '<S402>:2' */
    (void)Rte_Write_VeIDCR_b_DCInputVoltage_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_U_DCInVoltage' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_U_EVRDesVSetP(void)
{
    /* local block i/o variables */
    boolean rtb_LeIDCR_b_EVRDesVSetPFA_out_k;

    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_U_EVRDesVSetP' */
    /* Chart: '<S48>/FsftIDCR_U_EVRDesVSetPChrt' */
    /* Gateway: FsftIDCR_U_EVRDesVSetP/FsftIDCR_U_EVRDesVSetPChrt */
    /* During: FsftIDCR_U_EVRDesVSetP/FsftIDCR_U_EVRDesVSetPChrt */
    /* Entry Internal: FsftIDCR_U_EVRDesVSetP/FsftIDCR_U_EVRDesVSetPChrt */
    /* Transition: '<S403>:2' */
    rtb_LeIDCR_b_EVRDesVSetPFA_out_k = true;

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_U_EVRDesVSetP' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_U_EVSEMaxVoltLmt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_U_EVSEMaxVoltLmt' */
    /* Outport: '<Root>/VeIDCR_b_EVSEMaxVoltLmt_FA' incorporates:
     *  Chart: '<S49>/FsftIDCR_U_EVSEMaxVoltLmtChrt'
     *  SignalConversion generated from: '<S49>/VeIDCR_b_EVSEMaxVoltLmtFA'
     */
    /* Gateway: FsftIDCR_U_EVSEMaxVoltLmt/FsftIDCR_U_EVSEMaxVoltLmtChrt */
    /* During: FsftIDCR_U_EVSEMaxVoltLmt/FsftIDCR_U_EVSEMaxVoltLmtChrt */
    /* Entry Internal: FsftIDCR_U_EVSEMaxVoltLmt/FsftIDCR_U_EVSEMaxVoltLmtChrt */
    /* Transition: '<S404>:2' */
    (void)Rte_Write_VeIDCR_b_EVSEMaxVoltLmt_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_U_EVSEMaxVoltLmt' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_U_EVSEMinVoltLmt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_U_EVSEMinVoltLmt' */
    /* Outport: '<Root>/VeIDCR_b_EVSEMinVoltLmt_FA' incorporates:
     *  Chart: '<S50>/FsftIDCR_U_EVSEMinVoltLmtChrt'
     *  SignalConversion generated from: '<S50>/VeIDCR_b_EVSEMinVoltLmtFA'
     */
    /* Gateway: FsftIDCR_U_EVSEMinVoltLmt/FsftIDCR_U_EVSEMinVoltLmtChrt */
    /* During: FsftIDCR_U_EVSEMinVoltLmt/FsftIDCR_U_EVSEMinVoltLmtChrt */
    /* Entry Internal: FsftIDCR_U_EVSEMinVoltLmt/FsftIDCR_U_EVSEMinVoltLmtChrt */
    /* Transition: '<S405>:2' */
    (void)Rte_Write_VeIDCR_b_EVSEMinVoltLmt_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_U_EVSEMinVoltLmt' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_U_EVSEOutputVolt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_U_EVSEOutputVolt' */
    /* Outport: '<Root>/VeIDCR_b_EVSEOutputVolt_FA' incorporates:
     *  Chart: '<S51>/FsftIDCR_U_EVSEOutputVoltChrt'
     *  SignalConversion generated from: '<S51>/VeIDCR_b_EVSEOutputVoltFA'
     */
    /* Gateway: FsftIDCR_U_EVSEOutputVolt/FsftIDCR_U_EVSEOutputVoltChrt */
    /* During: FsftIDCR_U_EVSEOutputVolt/FsftIDCR_U_EVSEOutputVoltChrt */
    /* Entry Internal: FsftIDCR_U_EVSEOutputVolt/FsftIDCR_U_EVSEOutputVoltChrt */
    /* Transition: '<S406>:2' */
    (void)Rte_Write_VeIDCR_b_EVSEOutputVolt_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_U_EVSEOutputVolt' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_U_EVSE_ThrshldVoltage(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_U_EVSE_ThrshldVoltage' */
    /* Outport: '<Root>/VeIDCR_b_EVSE_ThrshldVoltage_FA' incorporates:
     *  Chart: '<S52>/FsftIDCR_U_EVSE_ThrshldVoltageChrt'
     *  SignalConversion generated from: '<S52>/VeIDCR_b_EVSE_ThrshldVoltage_FA'
     */
    /* Gateway: FsftIDCR_U_EVSE_ThrshldVoltage/FsftIDCR_U_EVSE_ThrshldVoltageChrt */
    /* During: FsftIDCR_U_EVSE_ThrshldVoltage/FsftIDCR_U_EVSE_ThrshldVoltageChrt */
    /* Entry Internal: FsftIDCR_U_EVSE_ThrshldVoltage/FsftIDCR_U_EVSE_ThrshldVoltageChrt */
    /* Transition: '<S407>:2' */
    (void)Rte_Write_VeIDCR_b_EVSE_ThrshldVoltage_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_U_EVSE_ThrshldVoltage' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_U_IBS_BattVolt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_U_IBS_BattVolt' */
    /* Outport: '<Root>/VeIDCR_b_IBS_BattVolt_FA' incorporates:
     *  Chart: '<S53>/FsftIDCR_U_IBS_BattVoltChrt'
     *  SignalConversion generated from: '<S53>/VeIDCR_b_IBS_BattVoltFA'
     */
    /* Gateway: FsftIDCR_U_IBS_BattVolt/FsftIDCR_U_IBS_BattVoltChrt */
    /* During: FsftIDCR_U_IBS_BattVolt/FsftIDCR_U_IBS_BattVoltChrt */
    /* Entry Internal: FsftIDCR_U_IBS_BattVolt/FsftIDCR_U_IBS_BattVoltChrt */
    /* Transition: '<S408>:2' */
    (void)Rte_Write_VeIDCR_b_IBS_BattVolt_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_U_IBS_BattVolt' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_U_OBC_Prox(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_U_OBC_Prox' */
    /* Outport: '<Root>/VeIDCR_b_OBC_Prox_FA' incorporates:
     *  Chart: '<S54>/FsftIDCR_U_OBC_ProxChrt'
     *  SignalConversion generated from: '<S54>/VeIDCR_b_OBC_ProxFA'
     */
    /* Gateway: FsftIDCR_U_OBC_Prox/FsftIDCR_U_OBC_ProxChrt */
    /* During: FsftIDCR_U_OBC_Prox/FsftIDCR_U_OBC_ProxChrt */
    /* Entry Internal: FsftIDCR_U_OBC_Prox/FsftIDCR_U_OBC_ProxChrt */
    /* Transition: '<S409>:2' */
    (void)Rte_Write_VeIDCR_b_OBC_Prox_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_U_OBC_Prox' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_U_V2XInVoltage(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_U_V2XInVoltage' */
    /* Outport: '<Root>/VeIDCR_b_V2X_InputVoltage_FA' incorporates:
     *  Chart: '<S55>/FsftIDCR_U_V2XInVoltageChrt'
     *  SignalConversion generated from: '<S55>/VeIDCR_b_V2XInVoltageFA'
     */
    /* Gateway: FsftIDCR_U_V2XInVoltage/FsftIDCR_U_V2XInVoltageChrt */
    /* During: FsftIDCR_U_V2XInVoltage/FsftIDCR_U_V2XInVoltageChrt */
    /* Entry Internal: FsftIDCR_U_V2XInVoltage/FsftIDCR_U_V2XInVoltageChrt */
    /* Transition: '<S410>:2' */
    (void)Rte_Write_VeIDCR_b_V2X_InputVoltage_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_U_V2XInVoltage' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_U_V2XLVFeed(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_U_V2XLVFeed' */
    /* Outport: '<Root>/VeIDCR_b_V2X_LVFeed_FA' incorporates:
     *  Chart: '<S56>/FsftIDCR_U_V2XLVFeedChrt'
     *  SignalConversion generated from: '<S56>/VeIDCR_b_V2XLVFeedFA'
     */
    /* Gateway: FsftIDCR_U_V2XLVFeed/FsftIDCR_U_V2XLVFeedChrt */
    /* During: FsftIDCR_U_V2XLVFeed/FsftIDCR_U_V2XLVFeedChrt */
    /* Entry Internal: FsftIDCR_U_V2XLVFeed/FsftIDCR_U_V2XLVFeedChrt */
    /* Transition: '<S411>:2' */
    (void)Rte_Write_VeIDCR_b_V2X_LVFeed_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_U_V2XLVFeed' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_W_EVSE_SASPmax(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_W_EVSE_SASPmax' */
    /* Outport: '<Root>/VeIDCR_b_EVSE_SASPmaxFA' incorporates:
     *  Chart: '<S57>/FsftIDCR_W_EVSE_SASPmaxChrt'
     *  SignalConversion generated from: '<S57>/VeIDCR_b_EVSE_SASPmaxFA'
     */
    /* Gateway: FsftIDCR_W_EVSE_SASPmax/FsftIDCR_W_EVSE_SASPmaxChrt */
    /* During: FsftIDCR_W_EVSE_SASPmax/FsftIDCR_W_EVSE_SASPmaxChrt */
    /* Entry Internal: FsftIDCR_W_EVSE_SASPmax/FsftIDCR_W_EVSE_SASPmaxChrt */
    /* Transition: '<S412>:2' */
    (void)Rte_Write_VeIDCR_b_EVSE_SASPmaxFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_W_EVSE_SASPmax' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_b_DC_Isolation_Disable_Cmd(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_b_DC_Isolation_Disable_Cmd' */
    /* Outport: '<Root>/VeIDCR_b_DC_Isolation_Disable_Cmd_FA' incorporates:
     *  Chart: '<S58>/FsftIDCR_b_DC_Isolation_Disable_CmdChrt'
     *  SignalConversion generated from: '<S58>/VeIDCR_b_DC_Isolation_Disable_Cmd_FA'
     */
    /* Gateway: FsftIDCR_b_DC_Isolation_Disable_Cmd/FsftIDCR_b_DC_Isolation_Disable_CmdChrt */
    /* During: FsftIDCR_b_DC_Isolation_Disable_Cmd/FsftIDCR_b_DC_Isolation_Disable_CmdChrt */
    /* Entry Internal: FsftIDCR_b_DC_Isolation_Disable_Cmd/FsftIDCR_b_DC_Isolation_Disable_CmdChrt */
    /* Transition: '<S413>:2' */
    (void)Rte_Write_VeIDCR_b_DC_Isolation_Disable_Cmd_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_b_DC_Isolation_Disable_Cmd' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_b_EVCC_FailureSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_b_EVCC_FailureSts' */
    /* Outport: '<Root>/VeIDCR_b_EVCC_FailureSts_FA' incorporates:
     *  Chart: '<S59>/FsftIDCR_b_EVCC_FailureStsChrt'
     *  SignalConversion generated from: '<S59>/VeIDCR_b_EVCC_FailureSts_FA'
     */
    /* Gateway: FsftIDCR_b_EVCC_FailureSts/FsftIDCR_b_EVCC_FailureStsChrt */
    /* During: FsftIDCR_b_EVCC_FailureSts/FsftIDCR_b_EVCC_FailureStsChrt */
    /* Entry Internal: FsftIDCR_b_EVCC_FailureSts/FsftIDCR_b_EVCC_FailureStsChrt */
    /* Transition: '<S414>:2' */
    (void)Rte_Write_VeIDCR_b_EVCC_FailureSts_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_b_EVCC_FailureSts' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_b_EVSEIsolSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_b_EVSEIsolSts' */
    /* Outport: '<Root>/VeIDCR_b_EVSEIsolSts_FA' incorporates:
     *  Chart: '<S60>/FsftIDCR_b_EVSEIsolStsChrt'
     *  SignalConversion generated from: '<S60>/VeIDCR_b_EVSEIsolStsFA'
     */
    /* Gateway: FsftIDCR_b_EVSEIsolSts/FsftIDCR_b_EVSEIsolStsChrt */
    /* During: FsftIDCR_b_EVSEIsolSts/FsftIDCR_b_EVSEIsolStsChrt */
    /* Entry Internal: FsftIDCR_b_EVSEIsolSts/FsftIDCR_b_EVSEIsolStsChrt */
    /* Transition: '<S415>:2' */
    (void)Rte_Write_VeIDCR_b_EVSEIsolSts_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_b_EVSEIsolSts' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_b_EVSE_ChargingSystemError(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_b_EVSE_ChargingSystemError' */
    /* Outport: '<Root>/VeIDCR_b_EVSE_ChargingSystemError_FA' incorporates:
     *  Chart: '<S61>/FsftIDCR_b_EVSE_ChargingSystemErrorChrt'
     *  SignalConversion generated from: '<S61>/VeIDCR_b_EVSE_ChargingSystemError_FA'
     */
    /* Gateway: FsftIDCR_b_EVSE_ChargingSystemError/FsftIDCR_b_EVSE_ChargingSystemErrorChrt */
    /* During: FsftIDCR_b_EVSE_ChargingSystemError/FsftIDCR_b_EVSE_ChargingSystemErrorChrt */
    /* Entry Internal: FsftIDCR_b_EVSE_ChargingSystemError/FsftIDCR_b_EVSE_ChargingSystemErrorChrt */
    /* Transition: '<S416>:2' */
    (void)Rte_Write_VeIDCR_b_EVSE_ChargingSystemError_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_b_EVSE_ChargingSystemError' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_b_EVSE_EnergizingState(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_b_EVSE_EnergizingState' */
    /* Outport: '<Root>/VeIDCR_b_EVSE_EnergizingState_FA' incorporates:
     *  Chart: '<S62>/FsftIDCR_b_EVSE_EnergizingStateChrt'
     *  SignalConversion generated from: '<S62>/VeIDCR_b_EVSE_EnergizingState_FA'
     */
    /* Gateway: FsftIDCR_b_EVSE_EnergizingState/FsftIDCR_b_EVSE_EnergizingStateChrt */
    /* During: FsftIDCR_b_EVSE_EnergizingState/FsftIDCR_b_EVSE_EnergizingStateChrt */
    /* Entry Internal: FsftIDCR_b_EVSE_EnergizingState/FsftIDCR_b_EVSE_EnergizingStateChrt */
    /* Transition: '<S417>:2' */
    (void)Rte_Write_VeIDCR_b_EVSE_EnergizingState_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_b_EVSE_EnergizingState' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_b_EVSE_Offered_AC_Single_Phase(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_b_EVSE_Offered_AC_Single_Phase' */
    /* Outport: '<Root>/VeIDCR_b_EVSE_Offered_AC_Single_Phase_FA' incorporates:
     *  Chart: '<S63>/FsftIDCR_b_EVSE_Offered_AC_Single_PhaseChrt'
     *  SignalConversion generated from: '<S63>/VeIDCR_b_EVSE_Offered_AC_Single_Phase_FA'
     */
    /* Gateway: FsftIDCR_b_EVSE_Offered_AC_Single_Phase/FsftIDCR_b_EVSE_Offered_AC_Single_PhaseChrt */
    /* During: FsftIDCR_b_EVSE_Offered_AC_Single_Phase/FsftIDCR_b_EVSE_Offered_AC_Single_PhaseChrt */
    /* Entry Internal: FsftIDCR_b_EVSE_Offered_AC_Single_Phase/FsftIDCR_b_EVSE_Offered_AC_Single_PhaseChrt */
    /* Transition: '<S418>:2' */
    (void)Rte_Write_VeIDCR_b_EVSE_Offered_AC_Single_Phase_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_b_EVSE_Offered_AC_Single_Phase' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_b_EVSE_Offered_AC_Three_Phase(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_b_EVSE_Offered_AC_Three_Phase' */
    /* Outport: '<Root>/VeIDCR_b_EVSE_Offered_AC_Three_Phase_FA' incorporates:
     *  Chart: '<S64>/FsftIDCR_b_EVSE_Offered_AC_Three_PhaseChrt'
     *  SignalConversion generated from: '<S64>/VeIDCR_b_EVSE_Offered_AC_Three_Phase_FA'
     */
    /* Gateway: FsftIDCR_b_EVSE_Offered_AC_Three_Phase/FsftIDCR_b_EVSE_Offered_AC_Three_PhaseChrt */
    /* During: FsftIDCR_b_EVSE_Offered_AC_Three_Phase/FsftIDCR_b_EVSE_Offered_AC_Three_PhaseChrt */
    /* Entry Internal: FsftIDCR_b_EVSE_Offered_AC_Three_Phase/FsftIDCR_b_EVSE_Offered_AC_Three_PhaseChrt */
    /* Transition: '<S419>:2' */
    (void)Rte_Write_VeIDCR_b_EVSE_Offered_AC_Three_Phase_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_b_EVSE_Offered_AC_Three_Phase' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_b_EVSE_Offered_DC_Extended(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_b_EVSE_Offered_DC_Extended' */
    /* Outport: '<Root>/VeIDCR_b_EVSE_Offered_DC_Extended_FA' incorporates:
     *  Chart: '<S65>/FsftIDCR_b_EVSE_Offered_DC_ExtendedChrt'
     *  SignalConversion generated from: '<S65>/VeIDCR_b_EVSE_Offered_DC_Extended_FA'
     */
    /* Gateway: FsftIDCR_b_EVSE_Offered_DC_Extended/FsftIDCR_b_EVSE_Offered_DC_ExtendedChrt */
    /* During: FsftIDCR_b_EVSE_Offered_DC_Extended/FsftIDCR_b_EVSE_Offered_DC_ExtendedChrt */
    /* Entry Internal: FsftIDCR_b_EVSE_Offered_DC_Extended/FsftIDCR_b_EVSE_Offered_DC_ExtendedChrt */
    /* Transition: '<S420>:2' */
    (void)Rte_Write_VeIDCR_b_EVSE_Offered_DC_Extended_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_b_EVSE_Offered_DC_Extended' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_b_EVSE_Service1_Charging(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_b_EVSE_Service1_Charging' */
    /* Outport: '<Root>/VeIDCR_b_EVSE_Service1_Charging_FA' incorporates:
     *  Chart: '<S66>/FsftIDCR_b_EVSE_Service1_ChargingChrt'
     *  SignalConversion generated from: '<S66>/VeIDCR_b_EVSE_Service1_Charging_FA'
     */
    /* Gateway: FsftIDCR_b_EVSE_Service1_Charging/FsftIDCR_b_EVSE_Service1_ChargingChrt */
    /* During: FsftIDCR_b_EVSE_Service1_Charging/FsftIDCR_b_EVSE_Service1_ChargingChrt */
    /* Entry Internal: FsftIDCR_b_EVSE_Service1_Charging/FsftIDCR_b_EVSE_Service1_ChargingChrt */
    /* Transition: '<S421>:2' */
    (void)Rte_Write_VeIDCR_b_EVSE_Service1_Charging_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_b_EVSE_Service1_Charging' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_b_EVSE_Service1_Free(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_b_EVSE_Service1_Free' */
    /* Chart: '<S67>/FsftIDCR_b_EVSE_Service1_FreeChrt' */
    FsftIDCR_cmp_ISO15118_EVSETimeStampChrt
        (&IDCR_ac_B.sf_FsftIDCR_b_EVSE_Service1_FreeChrt);

    /* Outport: '<Root>/VeIDCR_b_EVSE_Service1_Free_FA' incorporates:
     *  SignalConversion generated from: '<S67>/VeIDCR_b_EVSE_Service1_Free_FA'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_Service1_Free_FA_Value
        (IDCR_ac_B.sf_FsftIDCR_b_EVSE_Service1_FreeChrt.LeIDCR_b_EVSE_Service1_Free_FA_out);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_b_EVSE_Service1_Free' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_b_IBS_BattTemp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_b_IBS_BattTemp' */
    /* Outport: '<Root>/VeIDCR_b_IBS_BattTemp_FA' incorporates:
     *  Chart: '<S68>/FsftIDCR_b_IBS_BattTempChrt'
     *  SignalConversion generated from: '<S68>/VeIDCR_b_IBS_BattTempFA'
     */
    /* Gateway: FsftIDCR_b_IBS_BattTemp/FsftIDCR_b_IBS_BattTempChrt */
    /* During: FsftIDCR_b_IBS_BattTemp/FsftIDCR_b_IBS_BattTempChrt */
    /* Entry Internal: FsftIDCR_b_IBS_BattTemp/FsftIDCR_b_IBS_BattTempChrt */
    /* Transition: '<S423>:2' */
    (void)Rte_Write_VeIDCR_b_IBS_BattTemp_FA_Value(true);

    /* Outport: '<Root>/VeIDCR_b_IBS_BattTemp_SgnlRcvd' incorporates:
     *  Chart: '<S68>/FsftIDCR_b_IBS_BattTempChrt'
     *  SignalConversion generated from: '<S68>/VeIDCR_b_IBS_BattTempSgnl_Rcvd'
     */
    (void)Rte_Write_VeIDCR_b_IBS_BattTemp_SgnlRcvd_Value(false);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_b_IBS_BattTemp' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_b_IBS_b_Batt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_b_IBS_b_Batt' */
    /* Merge: '<Root>/Merge_26' incorporates:
     *  Chart: '<S69>/FsftIDCR_b_IBS_b_BattChrt'
     *  SignalConversion generated from: '<S69>/VeIDCR_b_IBS_b_BattFA_write'
     */
    /* Gateway: FsftIDCR_b_IBS_b_Batt/FsftIDCR_b_IBS_b_BattChrt */
    /* During: FsftIDCR_b_IBS_b_Batt/FsftIDCR_b_IBS_b_BattChrt */
    /* Entry Internal: FsftIDCR_b_IBS_b_Batt/FsftIDCR_b_IBS_b_BattChrt */
    /* Transition: '<S424>:2' */
    Rte_IrvWrite_FsftIDCR_b_IBS_b_Batt_VeIDCR_b_IBS_b_BattFA_write_IRV(true);

    /* Merge: '<Root>/Merge_27' incorporates:
     *  Chart: '<S69>/FsftIDCR_b_IBS_b_BattChrt'
     *  SignalConversion generated from: '<S69>/VeIDCR_b_IBS_b_BattSgnl_Rcvd_write'
     */
    Rte_IrvWrite_FsftIDCR_b_IBS_b_Batt_VeIDCR_b_IBS_b_BattSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_b_IBS_b_Batt' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_b_IBS_b_Batt_2(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_b_IBS_b_Batt_2' */
    /* Merge: '<Root>/Merge_38' incorporates:
     *  Chart: '<S70>/FsftIDCR_b_IBS_b_Batt_2Chrt'
     *  SignalConversion generated from: '<S70>/VeIDCR_b_IBS_b_Batt_2FA_write'
     */
    /* Gateway: FsftIDCR_b_IBS_b_Batt_2/FsftIDCR_b_IBS_b_Batt_2Chrt */
    /* During: FsftIDCR_b_IBS_b_Batt_2/FsftIDCR_b_IBS_b_Batt_2Chrt */
    /* Entry Internal: FsftIDCR_b_IBS_b_Batt_2/FsftIDCR_b_IBS_b_Batt_2Chrt */
    /* Transition: '<S425>:2' */
    Rte_IrvWrite_FsftIDCR_b_IBS_b_Batt_2_VeIDCR_b_IBS_b_Batt_2FA_write_IRV(true);

    /* Merge: '<Root>/Merge_39' incorporates:
     *  Chart: '<S70>/FsftIDCR_b_IBS_b_Batt_2Chrt'
     *  SignalConversion generated from: '<S70>/VeIDCR_b_IBS_b_Batt_2Sgnl_Rcvd_write'
     */
    Rte_IrvWrite_FsftIDCR_b_IBS_b_Batt_2_VeIDCR_b_IBS_b_Batt_2Sgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_b_IBS_b_Batt_2' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_b_IDCM_GFCI_FaultSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_b_IDCM_GFCI_FaultSts' */
    /* Outport: '<Root>/VeIDCR_b_IDCM_GFCI_Fault_Status_FA' incorporates:
     *  Chart: '<S71>/FsftIDCR_b_IDCM_GFCI_FaultStsChrt'
     *  SignalConversion generated from: '<S71>/VeIDCR_b_IDCM_GFCI_FaultSts_FA'
     */
    /* Gateway: FsftIDCR_b_IDCM_GFCI_FaultSts/FsftIDCR_b_IDCM_GFCI_FaultStsChrt */
    /* During: FsftIDCR_b_IDCM_GFCI_FaultSts/FsftIDCR_b_IDCM_GFCI_FaultStsChrt */
    /* Entry Internal: FsftIDCR_b_IDCM_GFCI_FaultSts/FsftIDCR_b_IDCM_GFCI_FaultStsChrt */
    /* Transition: '<S426>:2' */
    (void)Rte_Write_VeIDCR_b_IDCM_GFCI_Fault_Status_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_b_IDCM_GFCI_FaultSts' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_b_IDCM_Wakeup_HCP(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_b_IDCM_Wakeup_HCP' */
    /* Outport: '<Root>/VeIDCR_b_IDCM_Wakeup_HCP_FA' incorporates:
     *  Chart: '<S72>/FsftIDCR_b_IDCM_Wakeup_HCPChrt'
     *  SignalConversion generated from: '<S72>/VeIDCR_b_IDCM_Wakeup_HCP_FA'
     */
    /* Gateway: FsftIDCR_b_IDCM_Wakeup_HCP/FsftIDCR_b_IDCM_Wakeup_HCPChrt */
    /* During: FsftIDCR_b_IDCM_Wakeup_HCP/FsftIDCR_b_IDCM_Wakeup_HCPChrt */
    /* Entry Internal: FsftIDCR_b_IDCM_Wakeup_HCP/FsftIDCR_b_IDCM_Wakeup_HCPChrt */
    /* Transition: '<S427>:2' */
    (void)Rte_Write_VeIDCR_b_IDCM_Wakeup_HCP_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_b_IDCM_Wakeup_HCP' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_b_ISO15118_TLS_Offered(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_b_ISO15118_TLS_Offered' */
    /* Outport: '<Root>/VeIDCR_b_ISO15118_TLS_Offered_FA' incorporates:
     *  Chart: '<S73>/FsftIDCR_b_ISO15118_TLS_OfferedChrt'
     *  SignalConversion generated from: '<S73>/VeIDCR_b_ISO15118_TLS_Offered_FA'
     */
    /* Gateway: FsftIDCR_b_ISO15118_TLS_Offered/FsftIDCR_b_ISO15118_TLS_OfferedChrt */
    /* During: FsftIDCR_b_ISO15118_TLS_Offered/FsftIDCR_b_ISO15118_TLS_OfferedChrt */
    /* Entry Internal: FsftIDCR_b_ISO15118_TLS_Offered/FsftIDCR_b_ISO15118_TLS_OfferedChrt */
    /* Transition: '<S428>:2' */
    (void)Rte_Write_VeIDCR_b_ISO15118_TLS_Offered_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_b_ISO15118_TLS_Offered' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_b_J1772_S2_StatusFA(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_b_J1772_S2_StatusFA' */
    /* Outport: '<Root>/VeIDCR_b_J1772_S2_StatusFA' incorporates:
     *  Chart: '<S74>/FsftIDCR_b_J1772_S2_StatusFAChrt'
     *  SignalConversion generated from: '<S74>/VeIDCR_b_J1772_S2_StatusFAFA'
     */
    /* Gateway: FsftIDCR_b_J1772_S2_StatusFA/FsftIDCR_b_J1772_S2_StatusFAChrt */
    /* During: FsftIDCR_b_J1772_S2_StatusFA/FsftIDCR_b_J1772_S2_StatusFAChrt */
    /* Entry Internal: FsftIDCR_b_J1772_S2_StatusFA/FsftIDCR_b_J1772_S2_StatusFAChrt */
    /* Transition: '<S429>:2' */
    (void)Rte_Write_VeIDCR_b_J1772_S2_StatusFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_b_J1772_S2_StatusFA' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_b_OBCM_Timeout(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_b_OBCM_Timeout' */
    /* Outport: '<Root>/VeIDCR_b_OBCM_Timeout_FA' incorporates:
     *  Chart: '<S75>/FsftIDCR_b_OBCM_TimeoutChrt'
     *  SignalConversion generated from: '<S75>/VeIDCR_b_OBCM_Timeout_FA'
     */
    /* Gateway: FsftIDCR_b_OBCM_Timeout/FsftIDCR_b_OBCM_TimeoutChrt */
    /* During: FsftIDCR_b_OBCM_Timeout/FsftIDCR_b_OBCM_TimeoutChrt */
    /* Entry Internal: FsftIDCR_b_OBCM_Timeout/FsftIDCR_b_OBCM_TimeoutChrt */
    /* Transition: '<S430>:2' */
    (void)Rte_Write_VeIDCR_b_OBCM_Timeout_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_b_OBCM_Timeout' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_b_OffrdEnrgyTxType(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_b_OffrdEnrgyTxType' */
    /* Outport: '<Root>/VeIDCR_b_OffrdEnrgyTxType_FA' incorporates:
     *  Chart: '<S76>/FsftIDCR_b_OffrdEnrgyTxTypeChrt'
     *  SignalConversion generated from: '<S76>/VeIDCR_b_OffrdEnrgyTxTypeFA'
     */
    /* Gateway: FsftIDCR_b_OffrdEnrgyTxType/FsftIDCR_b_OffrdEnrgyTxTypeChrt */
    /* During: FsftIDCR_b_OffrdEnrgyTxType/FsftIDCR_b_OffrdEnrgyTxTypeChrt */
    /* Entry Internal: FsftIDCR_b_OffrdEnrgyTxType/FsftIDCR_b_OffrdEnrgyTxTypeChrt */
    /* Transition: '<S431>:2' */
    (void)Rte_Write_VeIDCR_b_OffrdEnrgyTxType_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_b_OffrdEnrgyTxType' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_b_OffrdPayOptn(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_b_OffrdPayOptn' */
    /* Outport: '<Root>/VeIDCR_b_OffrdPayOptn_FA' incorporates:
     *  Chart: '<S77>/FsftIDCR_b_OffrdPayOptnChrt'
     *  SignalConversion generated from: '<S77>/VeIDCR_b_OffrdPayOptnFA'
     */
    /* Gateway: FsftIDCR_b_OffrdPayOptn/FsftIDCR_b_OffrdPayOptnChrt */
    /* During: FsftIDCR_b_OffrdPayOptn/FsftIDCR_b_OffrdPayOptnChrt */
    /* Entry Internal: FsftIDCR_b_OffrdPayOptn/FsftIDCR_b_OffrdPayOptnChrt */
    /* Transition: '<S432>:2' */
    (void)Rte_Write_VeIDCR_b_OffrdPayOptn_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_b_OffrdPayOptn' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_b_PlugAndChargeReq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_b_PlugAndChargeReq' */
    /* Outport: '<Root>/VeIDCR_b_PlugAndChargeReq_FA' incorporates:
     *  Chart: '<S78>/FsftIDCR_b_PlugAndChargeReqChrt'
     *  SignalConversion generated from: '<S78>/VeIDCR_b_PlugAndChargeReqFA'
     */
    /* Gateway: FsftIDCR_b_PlugAndChargeReq/FsftIDCR_b_PlugAndChargeReqChrt */
    /* During: FsftIDCR_b_PlugAndChargeReq/FsftIDCR_b_PlugAndChargeReqChrt */
    /* Entry Internal: FsftIDCR_b_PlugAndChargeReq/FsftIDCR_b_PlugAndChargeReqChrt */
    /* Transition: '<S433>:2' */
    (void)Rte_Write_VeIDCR_b_PlugAndChargeReq_FA_Value(true);

    /* Outport: '<Root>/VeIDCR_b_PlugAndChargeReq_SgnlRcvd' incorporates:
     *  Chart: '<S78>/FsftIDCR_b_PlugAndChargeReqChrt'
     *  SignalConversion generated from: '<S78>/VeIDCR_b_PlugAndChargeReq_Sgnl_Rcvd'
     */
    (void)Rte_Write_VeIDCR_b_PlugAndChargeReq_SgnlRcvd_Value(false);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_b_PlugAndChargeReq' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_b_ReceiptRequired(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_b_ReceiptRequired' */
    /* Outport: '<Root>/VeIDCR_b_ReceiptRequired_FA' incorporates:
     *  Chart: '<S79>/FsftIDCR_b_ReceiptRequiredChrt'
     *  SignalConversion generated from: '<S79>/VeIDCR_b_ReceiptRequired_FA'
     */
    /* Gateway: FsftIDCR_b_ReceiptRequired/FsftIDCR_b_ReceiptRequiredChrt */
    /* During: FsftIDCR_b_ReceiptRequired/FsftIDCR_b_ReceiptRequiredChrt */
    /* Entry Internal: FsftIDCR_b_ReceiptRequired/FsftIDCR_b_ReceiptRequiredChrt */
    /* Transition: '<S434>:2' */
    (void)Rte_Write_VeIDCR_b_ReceiptRequired_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_b_ReceiptRequired' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_b_Resp_Code(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_b_Resp_Code' */
    /* Outport: '<Root>/VeIDCR_b_Response_Code_FA' incorporates:
     *  Chart: '<S80>/FsftIDCR_b_Resp_CodeChrt'
     *  SignalConversion generated from: '<S80>/VeIDCR_b_Resp_CodeFA'
     */
    /* Gateway: FsftIDCR_b_Resp_Code/FsftIDCR_b_Resp_CodeChrt */
    /* During: FsftIDCR_b_Resp_Code/FsftIDCR_b_Resp_CodeChrt */
    /* Entry Internal: FsftIDCR_b_Resp_Code/FsftIDCR_b_Resp_CodeChrt */
    /* Transition: '<S435>:2' */
    (void)Rte_Write_VeIDCR_b_Response_Code_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_b_Resp_Code' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_b_SDP_Sts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_b_SDP_Sts' */
    /* Outport: '<Root>/VeIDCR_b_SDP_Sts_FA' incorporates:
     *  Chart: '<S81>/FsftIDCR_b_SDP_StsChrt'
     *  SignalConversion generated from: '<S81>/VeIDCR_b_SDP_StsFA'
     */
    /* Gateway: FsftIDCR_b_SDP_Sts/FsftIDCR_b_SDP_StsChrt */
    /* During: FsftIDCR_b_SDP_Sts/FsftIDCR_b_SDP_StsChrt */
    /* Entry Internal: FsftIDCR_b_SDP_Sts/FsftIDCR_b_SDP_StsChrt */
    /* Transition: '<S436>:2' */
    (void)Rte_Write_VeIDCR_b_SDP_Sts_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_b_SDP_Sts' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_b_SLAC_Sts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_b_SLAC_Sts' */
    /* Outport: '<Root>/VeIDCR_b_SLACSts_FA' incorporates:
     *  Chart: '<S82>/FsftIDCR_b_SLAC_StsChrt'
     *  SignalConversion generated from: '<S82>/VeIDCR_b_SLAC_StsFA'
     */
    /* Gateway: FsftIDCR_b_SLAC_Sts/FsftIDCR_b_SLAC_StsChrt */
    /* During: FsftIDCR_b_SLAC_Sts/FsftIDCR_b_SLAC_StsChrt */
    /* Entry Internal: FsftIDCR_b_SLAC_Sts/FsftIDCR_b_SLAC_StsChrt */
    /* Transition: '<S437>:2' */
    (void)Rte_Write_VeIDCR_b_SLACSts_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_b_SLAC_Sts' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_b_SupProtoNm(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_b_SupProtoNm' */
    /* Outport: '<Root>/VeIDCR_b_SupProtoNm_FA' incorporates:
     *  Chart: '<S83>/FsftIDCR_b_SupProtoNmChrt'
     *  SignalConversion generated from: '<S83>/VeIDCR_b_SupProtoNmFA'
     */
    /* Gateway: FsftIDCR_b_SupProtoNm/FsftIDCR_b_SupProtoNmChrt */
    /* During: FsftIDCR_b_SupProtoNm/FsftIDCR_b_SupProtoNmChrt */
    /* Entry Internal: FsftIDCR_b_SupProtoNm/FsftIDCR_b_SupProtoNmChrt */
    /* Transition: '<S438>:2' */
    (void)Rte_Write_VeIDCR_b_SupProtoNm_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_b_SupProtoNm' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_b_SupSchemaID(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_b_SupSchemaID' */
    /* Outport: '<Root>/VeIDCR_b_SupSchemaID_FA' incorporates:
     *  Chart: '<S84>/FsftIDCR_b_SupSchemaIDChrt'
     *  SignalConversion generated from: '<S84>/VeIDCR_b_SupSchemaIDFA'
     */
    /* Gateway: FsftIDCR_b_SupSchemaID/FsftIDCR_b_SupSchemaIDChrt */
    /* During: FsftIDCR_b_SupSchemaID/FsftIDCR_b_SupSchemaIDChrt */
    /* Entry Internal: FsftIDCR_b_SupSchemaID/FsftIDCR_b_SupSchemaIDChrt */
    /* Transition: '<S439>:2' */
    (void)Rte_Write_VeIDCR_b_SupSchemaID_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_b_SupSchemaID' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_b_SupVerNumMajor(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_b_SupVerNumMajor' */
    /* Outport: '<Root>/VeIDCR_b_SupVerNumMajor_FA' incorporates:
     *  Chart: '<S85>/FsftIDCR_b_SupVerNumMajorChrt'
     *  SignalConversion generated from: '<S85>/VeIDCR_b_SupVerNumMajorFA'
     */
    /* Gateway: FsftIDCR_b_SupVerNumMajor/FsftIDCR_b_SupVerNumMajorChrt */
    /* During: FsftIDCR_b_SupVerNumMajor/FsftIDCR_b_SupVerNumMajorChrt */
    /* Entry Internal: FsftIDCR_b_SupVerNumMajor/FsftIDCR_b_SupVerNumMajorChrt */
    /* Transition: '<S440>:2' */
    (void)Rte_Write_VeIDCR_b_SupVerNumMajor_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_b_SupVerNumMajor' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_b_SupVerNumMinor(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_b_SupVerNumMinor' */
    /* Outport: '<Root>/VeIDCR_b_SupVerNumMinor_FA' incorporates:
     *  Chart: '<S86>/FsftIDCR_b_SupVerNumMinorChrt'
     *  SignalConversion generated from: '<S86>/VeIDCR_b_SupVerNumMinorFA'
     */
    /* Gateway: FsftIDCR_b_SupVerNumMinor/FsftIDCR_b_SupVerNumMinorChrt */
    /* During: FsftIDCR_b_SupVerNumMinor/FsftIDCR_b_SupVerNumMinorChrt */
    /* Entry Internal: FsftIDCR_b_SupVerNumMinor/FsftIDCR_b_SupVerNumMinorChrt */
    /* Transition: '<S441>:2' */
    (void)Rte_Write_VeIDCR_b_SupVerNumMinor_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_b_SupVerNumMinor' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_b_TxMessageRequest(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_b_TxMessageRequest' */
    /* Outport: '<Root>/VeIDCR_b_TxMsgRequest_FA' incorporates:
     *  Chart: '<S87>/FsftIDCR_b_TxMessageRequestChrt'
     *  SignalConversion generated from: '<S87>/VeIDCR_b_TxMessageRequestFA'
     */
    /* Gateway: FsftIDCR_b_TxMessageRequest/FsftIDCR_b_TxMessageRequestChrt */
    /* During: FsftIDCR_b_TxMessageRequest/FsftIDCR_b_TxMessageRequestChrt */
    /* Entry Internal: FsftIDCR_b_TxMessageRequest/FsftIDCR_b_TxMessageRequestChrt */
    /* Transition: '<S442>:2' */
    (void)Rte_Write_VeIDCR_b_TxMsgRequest_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_b_TxMessageRequest' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_b_TxMessageResponse(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_b_TxMessageResponse' */
    /* Outport: '<Root>/VeIDCR_b_TxMsgResponse_FA' incorporates:
     *  Chart: '<S88>/FsftIDCR_b_TxMessageResponseChrt'
     *  SignalConversion generated from: '<S88>/VeIDCR_b_TxMessageResponseFA'
     */
    /* Gateway: FsftIDCR_b_TxMessageResponse/FsftIDCR_b_TxMessageResponseChrt */
    /* During: FsftIDCR_b_TxMessageResponse/FsftIDCR_b_TxMessageResponseChrt */
    /* Entry Internal: FsftIDCR_b_TxMessageResponse/FsftIDCR_b_TxMessageResponseChrt */
    /* Transition: '<S443>:2' */
    (void)Rte_Write_VeIDCR_b_TxMsgResponse_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_b_TxMessageResponse' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_b_V2L_Detected(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_b_V2L_Detected' */
    /* Outport: '<Root>/VeIDCR_b_V2L_DetectedFA' incorporates:
     *  Chart: '<S89>/FsftIDCR_b_V2L_DetectedChrt'
     *  SignalConversion generated from: '<S89>/VeIDCR_b_V2L_DetectedFA'
     */
    /* Gateway: FsftIDCR_b_V2L_Detected/FsftIDCR_b_V2L_DetectedChrt */
    /* During: FsftIDCR_b_V2L_Detected/FsftIDCR_b_V2L_DetectedChrt */
    /* Entry Internal: FsftIDCR_b_V2L_Detected/FsftIDCR_b_V2L_DetectedChrt */
    /* Transition: '<S444>:2' */
    (void)Rte_Write_VeIDCR_b_V2L_DetectedFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_b_V2L_Detected' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_b_V2L_DischargeDeratingRsn(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_b_V2L_DischargeDeratingRsn' */
    /* Outport: '<Root>/VeIDCR_b_V2L_DischargeDeratingRsnFA' incorporates:
     *  Chart: '<S90>/FsftIDCR_b_V2L_DischargeDeratingRsnChrt'
     *  SignalConversion generated from: '<S90>/VeIDCR_b_V2L_DischargeDeratingRsnFA'
     */
    /* Gateway: FsftIDCR_b_V2L_DischargeDeratingRsn/FsftIDCR_b_V2L_DischargeDeratingRsnChrt */
    /* During: FsftIDCR_b_V2L_DischargeDeratingRsn/FsftIDCR_b_V2L_DischargeDeratingRsnChrt */
    /* Entry Internal: FsftIDCR_b_V2L_DischargeDeratingRsn/FsftIDCR_b_V2L_DischargeDeratingRsnChrt */
    /* Transition: '<S445>:2' */
    (void)Rte_Write_VeIDCR_b_V2L_DischargeDeratingRsnFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_b_V2L_DischargeDeratingRsn' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_b_V2L_DischargeFailSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_b_V2L_DischargeFailSts' */
    /* Outport: '<Root>/VeIDCR_b_V2L_DischargeFailStsFA' incorporates:
     *  Chart: '<S91>/FsftIDCR_b_V2L_DischargeFailStsChrt'
     *  SignalConversion generated from: '<S91>/VeIDCR_b_V2L_DischargeFailStsFA'
     */
    /* Gateway: FsftIDCR_b_V2L_DischargeFailSts/FsftIDCR_b_V2L_DischargeFailStsChrt */
    /* During: FsftIDCR_b_V2L_DischargeFailSts/FsftIDCR_b_V2L_DischargeFailStsChrt */
    /* Entry Internal: FsftIDCR_b_V2L_DischargeFailSts/FsftIDCR_b_V2L_DischargeFailStsChrt */
    /* Transition: '<S446>:2' */
    (void)Rte_Write_VeIDCR_b_V2L_DischargeFailStsFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_b_V2L_DischargeFailSts' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_b_V2L_DischargeFaultRsn(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_b_V2L_DischargeFaultRsn' */
    /* Outport: '<Root>/VeIDCR_b_V2L_DischargeFaultRsnFA' incorporates:
     *  Chart: '<S92>/FsftIDCR_b_V2L_DischargeFaultRsnChrt'
     *  SignalConversion generated from: '<S92>/VeIDCR_b_V2L_DischargeFaultRsnFA'
     */
    /* Gateway: FsftIDCR_b_V2L_DischargeFaultRsn/FsftIDCR_b_V2L_DischargeFaultRsnChrt */
    /* During: FsftIDCR_b_V2L_DischargeFaultRsn/FsftIDCR_b_V2L_DischargeFaultRsnChrt */
    /* Entry Internal: FsftIDCR_b_V2L_DischargeFaultRsn/FsftIDCR_b_V2L_DischargeFaultRsnChrt */
    /* Transition: '<S447>:2' */
    (void)Rte_Write_VeIDCR_b_V2L_DischargeFaultRsnFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_b_V2L_DischargeFaultRsn' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_b_V2L_DischargeVoltage(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_b_V2L_DischargeVoltage' */
    /* Outport: '<Root>/VeIDCR_b_V2L_DischargeVoltageFA' incorporates:
     *  Chart: '<S93>/FsftIDCR_b_V2L_DischargeVoltageChrt'
     *  SignalConversion generated from: '<S93>/VeIDCR_b_V2L_DischargeVoltageFA'
     */
    /* Gateway: FsftIDCR_b_V2L_DischargeVoltage/FsftIDCR_b_V2L_DischargeVoltageChrt */
    /* During: FsftIDCR_b_V2L_DischargeVoltage/FsftIDCR_b_V2L_DischargeVoltageChrt */
    /* Entry Internal: FsftIDCR_b_V2L_DischargeVoltage/FsftIDCR_b_V2L_DischargeVoltageChrt */
    /* Transition: '<S448>:2' */
    (void)Rte_Write_VeIDCR_b_V2L_DischargeVoltageFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_b_V2L_DischargeVoltage' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_b_V2L_Output_Frequency(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_b_V2L_Output_Frequency' */
    /* Outport: '<Root>/VeIDCR_b_V2L_Output_FrequencyFA' incorporates:
     *  Chart: '<S94>/FsftIDCR_b_V2L_Output_FrequencyChrt'
     *  SignalConversion generated from: '<S94>/VeIDCR_b_V2L_Output_FrequencyFA'
     */
    /* Gateway: FsftIDCR_b_V2L_Output_Frequency/FsftIDCR_b_V2L_Output_FrequencyChrt */
    /* During: FsftIDCR_b_V2L_Output_Frequency/FsftIDCR_b_V2L_Output_FrequencyChrt */
    /* Entry Internal: FsftIDCR_b_V2L_Output_Frequency/FsftIDCR_b_V2L_Output_FrequencyChrt */
    /* Transition: '<S449>:2' */
    (void)Rte_Write_VeIDCR_b_V2L_Output_FrequencyFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_b_V2L_Output_Frequency' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_b_V2L_Pilot_Frequency(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_b_V2L_Pilot_Frequency' */
    /* Outport: '<Root>/VeIDCR_b_V2L_Pilot_FrequencyFA' incorporates:
     *  Chart: '<S95>/FsftIDCR_b_V2L_Pilot_FrequencyChrt'
     *  SignalConversion generated from: '<S95>/VeIDCR_b_V2L_Pilot_FrequencyFA'
     */
    /* Gateway: FsftIDCR_b_V2L_Pilot_Frequency/FsftIDCR_b_V2L_Pilot_FrequencyChrt */
    /* During: FsftIDCR_b_V2L_Pilot_Frequency/FsftIDCR_b_V2L_Pilot_FrequencyChrt */
    /* Entry Internal: FsftIDCR_b_V2L_Pilot_Frequency/FsftIDCR_b_V2L_Pilot_FrequencyChrt */
    /* Transition: '<S450>:2' */
    (void)Rte_Write_VeIDCR_b_V2L_Pilot_FrequencyFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_b_V2L_Pilot_Frequency' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_b_V2XDerateSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_b_V2XDerateSts' */
    /* Outport: '<Root>/VeIDCR_b_V2X_DerateSts_FA' incorporates:
     *  Chart: '<S96>/FsftIDCR_b_V2XDerateStsChrt'
     *  SignalConversion generated from: '<S96>/VeIDCR_b_V2XDerateStsFA'
     */
    /* Gateway: FsftIDCR_b_V2XDerateSts/FsftIDCR_b_V2XDerateStsChrt */
    /* During: FsftIDCR_b_V2XDerateSts/FsftIDCR_b_V2XDerateStsChrt */
    /* Entry Internal: FsftIDCR_b_V2XDerateSts/FsftIDCR_b_V2XDerateStsChrt */
    /* Transition: '<S451>:2' */
    (void)Rte_Write_VeIDCR_b_V2X_DerateSts_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_b_V2XDerateSts' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_b_V2XFailSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_b_V2XFailSts' */
    /* Outport: '<Root>/VeIDCR_b_V2X_FailSts_FA' incorporates:
     *  Chart: '<S97>/FsftIDCR_b_V2XFailStsChrt'
     *  SignalConversion generated from: '<S97>/VeIDCR_b_V2XFailStsFA'
     */
    /* Gateway: FsftIDCR_b_V2XFailSts/FsftIDCR_b_V2XFailStsChrt */
    /* During: FsftIDCR_b_V2XFailSts/FsftIDCR_b_V2XFailStsChrt */
    /* Entry Internal: FsftIDCR_b_V2XFailSts/FsftIDCR_b_V2XFailStsChrt */
    /* Transition: '<S452>:2' */
    (void)Rte_Write_VeIDCR_b_V2X_FailSts_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_b_V2XFailSts' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_b_V2XSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_b_V2XSts' */
    /* Outport: '<Root>/VeIDCR_b_V2X_Sts_FA' incorporates:
     *  Chart: '<S98>/FsftIDCR_b_V2XStsChrt'
     *  SignalConversion generated from: '<S98>/VeIDCR_b_V2XStsFA'
     */
    /* Gateway: FsftIDCR_b_V2XSts/FsftIDCR_b_V2XStsChrt */
    /* During: FsftIDCR_b_V2XSts/FsftIDCR_b_V2XStsChrt */
    /* Entry Internal: FsftIDCR_b_V2XSts/FsftIDCR_b_V2XStsChrt */
    /* Transition: '<S453>:2' */
    (void)Rte_Write_VeIDCR_b_V2X_Sts_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_b_V2XSts' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_b_V2X_EVSE_Service_5_Free(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_b_V2X_EVSE_Service_5_Free' */
    /* Outport: '<Root>/VeIDCR_b_V2X_EVSE_Service_5_Free_FA' incorporates:
     *  Chart: '<S99>/FsftIDCR_b_V2X_EVSE_Service_5_FreeChrt'
     *  SignalConversion generated from: '<S99>/VeIDCR_b_V2X_EVSE_Service_5_Free_FA'
     */
    /* Gateway: FsftIDCR_b_V2X_EVSE_Service_5_Free/FsftIDCR_b_V2X_EVSE_Service_5_FreeChrt */
    /* During: FsftIDCR_b_V2X_EVSE_Service_5_Free/FsftIDCR_b_V2X_EVSE_Service_5_FreeChrt */
    /* Entry Internal: FsftIDCR_b_V2X_EVSE_Service_5_Free/FsftIDCR_b_V2X_EVSE_Service_5_FreeChrt */
    /* Transition: '<S454>:2' */
    (void)Rte_Write_VeIDCR_b_V2X_EVSE_Service_5_Free_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_b_V2X_EVSE_Service_5_Free' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_b_V2X_EVSE_Service_5_V2H(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_b_V2X_EVSE_Service_5_V2H' */
    /* Outport: '<Root>/VeIDCR_b_V2X_EVSE_Service_5_V2H_FA' incorporates:
     *  Chart: '<S100>/FsftIDCR_b_V2X_EVSE_Service_5_V2HChrt'
     *  SignalConversion generated from: '<S100>/VeIDCR_b_V2X_EVSE_Service_5_V2H_FA'
     */
    /* Gateway: FsftIDCR_b_V2X_EVSE_Service_5_V2H/FsftIDCR_b_V2X_EVSE_Service_5_V2HChrt */
    /* During: FsftIDCR_b_V2X_EVSE_Service_5_V2H/FsftIDCR_b_V2X_EVSE_Service_5_V2HChrt */
    /* Entry Internal: FsftIDCR_b_V2X_EVSE_Service_5_V2H/FsftIDCR_b_V2X_EVSE_Service_5_V2HChrt */
    /* Transition: '<S455>:2' */
    (void)Rte_Write_VeIDCR_b_V2X_EVSE_Service_5_V2H_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_b_V2X_EVSE_Service_5_V2H' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_cmp_ISO15118_EVSETimeStamp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_cmp_ISO15118_EVSETimeStamp' */
    /* Chart: '<S101>/FsftIDCR_cmp_ISO15118_EVSETimeStampChrt' */
    FsftIDCR_cmp_ISO15118_EVSETimeStampChrt
        (&IDCR_ac_B.sf_FsftIDCR_cmp_ISO15118_EVSETimeStampCh);

    /* Outport: '<Root>/VeIDCR_b_ISO15118_EVSETimeStamp_FA' incorporates:
     *  SignalConversion generated from: '<S101>/VeIDCR_b_ISO15118_EVSETimeStamp_FA'
     */
    (void)Rte_Write_VeIDCR_b_ISO15118_EVSETimeStamp_FA_Value
        (IDCR_ac_B.sf_FsftIDCR_cmp_ISO15118_EVSETimeStampCh.LeIDCR_b_EVSE_Service1_Free_FA_out);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_cmp_ISO15118_EVSETimeStamp' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_d_EVSE_Accepted_Protocol(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_d_EVSE_Accepted_Protocol' */
    /* Outport: '<Root>/VeIDCR_b_EVSE_Accepted_Protocol_FA' incorporates:
     *  Chart: '<S102>/FsftIDCR_d_EVSE_Accepted_ProtocolChrt'
     *  SignalConversion generated from: '<S102>/VeIDCR_b_EVSE_Accepted_ProtocolFree_FA'
     */
    /* Gateway: FsftIDCR_d_EVSE_Accepted_Protocol/FsftIDCR_d_EVSE_Accepted_ProtocolChrt */
    /* During: FsftIDCR_d_EVSE_Accepted_Protocol/FsftIDCR_d_EVSE_Accepted_ProtocolChrt */
    /* Entry Internal: FsftIDCR_d_EVSE_Accepted_Protocol/FsftIDCR_d_EVSE_Accepted_ProtocolChrt */
    /* Transition: '<S457>:2' */
    (void)Rte_Write_VeIDCR_b_EVSE_Accepted_Protocol_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_d_EVSE_Accepted_Protocol' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_d_ISO15118_ServiceID(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_d_ISO15118_ServiceID' */
    /* Outport: '<Root>/VeIDCR_b_ISO15118_ServiceID_FA' incorporates:
     *  Chart: '<S103>/FsftIDCR_d_ISO15118_ServiceIDChrt'
     *  SignalConversion generated from: '<S103>/VeIDCR_b_ISO15118_ServiceID_FA'
     */
    /* Gateway: FsftIDCR_d_ISO15118_ServiceID/FsftIDCR_d_ISO15118_ServiceIDChrt */
    /* During: FsftIDCR_d_ISO15118_ServiceID/FsftIDCR_d_ISO15118_ServiceIDChrt */
    /* Entry Internal: FsftIDCR_d_ISO15118_ServiceID/FsftIDCR_d_ISO15118_ServiceIDChrt */
    /* Transition: '<S458>:2' */
    (void)Rte_Write_VeIDCR_b_ISO15118_ServiceID_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_d_ISO15118_ServiceID' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_e_APM2InterlockSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_e_APM2InterlockSts' */
    /* Outport: '<Root>/VeIDCR_b_APM2InterlockSts_FA' incorporates:
     *  Chart: '<S104>/FsftIDCR_e_APM2InterlockStsChrt'
     *  SignalConversion generated from: '<S104>/VeIDCR_b_APM2InterlockStsFA'
     */
    /* Gateway: FsftIDCR_e_APM2InterlockSts/FsftIDCR_e_APM2InterlockStsChrt */
    /* During: FsftIDCR_e_APM2InterlockSts/FsftIDCR_e_APM2InterlockStsChrt */
    /* Entry Internal: FsftIDCR_e_APM2InterlockSts/FsftIDCR_e_APM2InterlockStsChrt */
    /* Transition: '<S459>:2' */
    (void)Rte_Write_VeIDCR_b_APM2InterlockSts_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_e_APM2InterlockSts' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_e_APM3InterlockSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_e_APM3InterlockSts' */
    /* Outport: '<Root>/VeIDCR_b_APM3InterlockSts_FA' incorporates:
     *  Chart: '<S105>/FsftIDCR_e_APM3InterlockStsChrt'
     *  SignalConversion generated from: '<S105>/VeIDCR_b_APM3InterlockStsFA'
     */
    /* Gateway: FsftIDCR_e_APM3InterlockSts/FsftIDCR_e_APM3InterlockStsChrt */
    /* During: FsftIDCR_e_APM3InterlockSts/FsftIDCR_e_APM3InterlockStsChrt */
    /* Entry Internal: FsftIDCR_e_APM3InterlockSts/FsftIDCR_e_APM3InterlockStsChrt */
    /* Transition: '<S460>:2' */
    (void)Rte_Write_VeIDCR_b_APM3InterlockSts_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_e_APM3InterlockSts' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_e_Charger_WeldingDetectAvail(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_e_Charger_WeldingDetectAvail' */
    /* Outport: '<Root>/VeIDCR_b_Charger_WeldingDetectAvail_FA' incorporates:
     *  Chart: '<S106>/FsftIDCR_e_Charger_WeldingDetectAvailChrt'
     *  SignalConversion generated from: '<S106>/VeIDCR_b_Charger_WeldingDetectAvail_FA'
     */
    /* Gateway: FsftIDCR_e_Charger_WeldingDetectAvail/FsftIDCR_e_Charger_WeldingDetectAvailChrt */
    /* During: FsftIDCR_e_Charger_WeldingDetectAvail/FsftIDCR_e_Charger_WeldingDetectAvailChrt */
    /* Entry Internal: FsftIDCR_e_Charger_WeldingDetectAvail/FsftIDCR_e_Charger_WeldingDetectAvailChrt */
    /* Transition: '<S461>:2' */
    (void)Rte_Write_VeIDCR_b_Charger_WeldingDetectAvail_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_e_Charger_WeldingDetectAvail' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_e_ChrgrModeStat_OBCM(void)
{
    /* local block i/o variables */
    boolean rtb_LeIDCR_b_ChrgrModeStat_OBCMFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_e_ChrgrModeStat_OBCM' */
    /* Chart: '<S107>/FsftIDCR_e_ChrgrModeStat_OBCMChrt' */
    /* Gateway: FsftIDCR_e_ChrgrModeStat_OBCM/FsftIDCR_e_ChrgrModeStat_OBCMChrt */
    /* During: FsftIDCR_e_ChrgrModeStat_OBCM/FsftIDCR_e_ChrgrModeStat_OBCMChrt */
    /* Entry Internal: FsftIDCR_e_ChrgrModeStat_OBCM/FsftIDCR_e_ChrgrModeStat_OBCMChrt */
    /* Transition: '<S462>:2' */
    rtb_LeIDCR_b_ChrgrModeStat_OBCMFA_out = true;

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_e_ChrgrModeStat_OBCM' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_e_Chrgr_FaultStates(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_e_Chrgr_FaultStates' */
    /* Outport: '<Root>/VeIDCR_b_Chrgr_FaultStatesFA' incorporates:
     *  Chart: '<S108>/FsftIDCR_e_Chrgr_FaultStatesChrt'
     *  SignalConversion generated from: '<S108>/VeIDCR_b_Chrgr_FaultStatesFA'
     */
    /* Gateway: FsftIDCR_e_Chrgr_FaultStates/FsftIDCR_e_Chrgr_FaultStatesChrt */
    /* During: FsftIDCR_e_Chrgr_FaultStates/FsftIDCR_e_Chrgr_FaultStatesChrt */
    /* Entry Internal: FsftIDCR_e_Chrgr_FaultStates/FsftIDCR_e_Chrgr_FaultStatesChrt */
    /* Transition: '<S463>:2' */
    (void)Rte_Write_VeIDCR_b_Chrgr_FaultStatesFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_e_Chrgr_FaultStates' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_e_DschrgFaultSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_e_DschrgFaultSts' */
    /* Outport: '<Root>/VeIDCR_b_DschrgFaultSts_FA' incorporates:
     *  Chart: '<S109>/FsftIDCR_e_DschrgFaultStsChrt'
     *  SignalConversion generated from: '<S109>/VeIDCR_b_DschrgFaultStsFA'
     */
    /* Gateway: FsftIDCR_e_DschrgFaultSts/FsftIDCR_e_DschrgFaultStsChrt */
    /* During: FsftIDCR_e_DschrgFaultSts/FsftIDCR_e_DschrgFaultStsChrt */
    /* Entry Internal: FsftIDCR_e_DschrgFaultSts/FsftIDCR_e_DschrgFaultStsChrt */
    /* Transition: '<S464>:2' */
    (void)Rte_Write_VeIDCR_b_DschrgFaultSts_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_e_DschrgFaultSts' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_e_EVCC_FailureRsn(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_e_EVCC_FailureRsn' */
    /* Outport: '<Root>/VeIDCR_b_EVCC_FailureRsnFA' incorporates:
     *  Chart: '<S110>/FsftIDCR_e_EVCC_FailureRsnChrt'
     *  SignalConversion generated from: '<S110>/VeIDCR_b_EVCC_FailureRsn'
     */
    /* Gateway: FsftIDCR_e_EVCC_FailureRsn/FsftIDCR_e_EVCC_FailureRsnChrt */
    /* During: FsftIDCR_e_EVCC_FailureRsn/FsftIDCR_e_EVCC_FailureRsnChrt */
    /* Entry Internal: FsftIDCR_e_EVCC_FailureRsn/FsftIDCR_e_EVCC_FailureRsnChrt */
    /* Transition: '<S465>:2' */
    (void)Rte_Write_VeIDCR_b_EVCC_FailureRsnFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_e_EVCC_FailureRsn' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_e_EVSE_CHAdeMOProtocol(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_e_EVSE_CHAdeMOProtocol' */
    /* Outport: '<Root>/VeIDCR_b_EVSE_CHAdeMOProtocol_FA' incorporates:
     *  Chart: '<S111>/FsftIDCR_e_EVSE_CHAdeMOProtocolChrt'
     *  SignalConversion generated from: '<S111>/VeIDCR_b_EVSE_CHAdeMOProtocol_FA'
     */
    /* Gateway: FsftIDCR_e_EVSE_CHAdeMOProtocol/FsftIDCR_e_EVSE_CHAdeMOProtocolChrt */
    /* During: FsftIDCR_e_EVSE_CHAdeMOProtocol/FsftIDCR_e_EVSE_CHAdeMOProtocolChrt */
    /* Entry Internal: FsftIDCR_e_EVSE_CHAdeMOProtocol/FsftIDCR_e_EVSE_CHAdeMOProtocolChrt */
    /* Transition: '<S466>:2' */
    (void)Rte_Write_VeIDCR_b_EVSE_CHAdeMOProtocol_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_e_EVSE_CHAdeMOProtocol' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_e_EVSE_ChrgStopControl(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_e_EVSE_ChrgStopControl' */
    /* Outport: '<Root>/VeIDCR_b_EVSE_ChrgStopControl_FA' incorporates:
     *  Chart: '<S112>/FsftIDCR_e_EVSE_ChrgStopControlChrt'
     *  SignalConversion generated from: '<S112>/VeIDCR_b_EVSE_ChrgStopControl_FA'
     */
    /* Gateway: FsftIDCR_e_EVSE_ChrgStopControl/FsftIDCR_e_EVSE_ChrgStopControlChrt */
    /* During: FsftIDCR_e_EVSE_ChrgStopControl/FsftIDCR_e_EVSE_ChrgStopControlChrt */
    /* Entry Internal: FsftIDCR_e_EVSE_ChrgStopControl/FsftIDCR_e_EVSE_ChrgStopControlChrt */
    /* Transition: '<S467>:2' */
    (void)Rte_Write_VeIDCR_b_EVSE_ChrgStopControl_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_e_EVSE_ChrgStopControl' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_e_EVSE_Error(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_e_EVSE_Error' */
    /* Outport: '<Root>/VeIDCR_b_EVSE_Error_FA' incorporates:
     *  Chart: '<S113>/FsftIDCR_e_EVSE_ErrorChrt'
     *  SignalConversion generated from: '<S113>/VeIDCR_b_EVSE_Error_FA'
     */
    /* Gateway: FsftIDCR_e_EVSE_Error/FsftIDCR_e_EVSE_ErrorChrt */
    /* During: FsftIDCR_e_EVSE_Error/FsftIDCR_e_EVSE_ErrorChrt */
    /* Entry Internal: FsftIDCR_e_EVSE_Error/FsftIDCR_e_EVSE_ErrorChrt */
    /* Transition: '<S468>:2' */
    (void)Rte_Write_VeIDCR_b_EVSE_Error_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_e_EVSE_Error' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_e_EVSE_Notification(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_e_EVSE_Notification' */
    /* Outport: '<Root>/VeIDCR_b_EVSENotificationFA' incorporates:
     *  Chart: '<S114>/FsftIDCR_e_EVSE_NotificationChrt'
     *  SignalConversion generated from: '<S114>/VeIDCR_b_EVSE_NotificationFA'
     */
    /* Gateway: FsftIDCR_e_EVSE_Notification/FsftIDCR_e_EVSE_NotificationChrt */
    /* During: FsftIDCR_e_EVSE_Notification/FsftIDCR_e_EVSE_NotificationChrt */
    /* Entry Internal: FsftIDCR_e_EVSE_Notification/FsftIDCR_e_EVSE_NotificationChrt */
    /* Transition: '<S469>:2' */
    (void)Rte_Write_VeIDCR_b_EVSENotificationFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_e_EVSE_Notification' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_e_EVSE_OfferedService(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_e_EVSE_OfferedService' */
    /* Outport: '<Root>/VeIDCR_b_EVSE_OfferedService_FA' incorporates:
     *  Chart: '<S115>/FsftIDCR_e_EVSE_OfferedServiceChrt'
     *  SignalConversion generated from: '<S115>/VeIDCR_b_EVSE_OfferedService_FA'
     */
    /* Gateway: FsftIDCR_e_EVSE_OfferedService/FsftIDCR_e_EVSE_OfferedServiceChrt */
    /* During: FsftIDCR_e_EVSE_OfferedService/FsftIDCR_e_EVSE_OfferedServiceChrt */
    /* Entry Internal: FsftIDCR_e_EVSE_OfferedService/FsftIDCR_e_EVSE_OfferedServiceChrt */
    /* Transition: '<S470>:2' */
    (void)Rte_Write_VeIDCR_b_EVSE_OfferedService_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_e_EVSE_OfferedService' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_e_EVSE_PilotStat_OBCM(void)
{
    /* local block i/o variables */
    boolean rtb_LeIDCR_b_EVSE_PilotStat_OBCMFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_e_EVSE_PilotStat_OBCM' */
    /* Chart: '<S116>/FsftIDCR_e_EVSE_PilotStat_OBCMChrt' */
    /* Gateway: FsftIDCR_e_EVSE_PilotStat_OBCM/FsftIDCR_e_EVSE_PilotStat_OBCMChrt */
    /* During: FsftIDCR_e_EVSE_PilotStat_OBCM/FsftIDCR_e_EVSE_PilotStat_OBCMChrt */
    /* Entry Internal: FsftIDCR_e_EVSE_PilotStat_OBCM/FsftIDCR_e_EVSE_PilotStat_OBCMChrt */
    /* Transition: '<S471>:2' */
    rtb_LeIDCR_b_EVSE_PilotStat_OBCMFA_out = true;

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_e_EVSE_PilotStat_OBCM' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_e_EVSE_TLS_CONNECTION(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_e_EVSE_TLS_CONNECTION' */
    /* Outport: '<Root>/VeIDCR_b_TLS_ConnectionFA' incorporates:
     *  Chart: '<S117>/FsftIDCR_e_EVSE_TLS_CONNECTIONChrt'
     *  SignalConversion generated from: '<S117>/VeIDCR_b_EVSE_TLS_CONNECTIONFA'
     */
    /* Gateway: FsftIDCR_e_EVSE_TLS_CONNECTION/FsftIDCR_e_EVSE_TLS_CONNECTIONChrt */
    /* During: FsftIDCR_e_EVSE_TLS_CONNECTION/FsftIDCR_e_EVSE_TLS_CONNECTIONChrt */
    /* Entry Internal: FsftIDCR_e_EVSE_TLS_CONNECTION/FsftIDCR_e_EVSE_TLS_CONNECTIONChrt */
    /* Transition: '<S472>:2' */
    (void)Rte_Write_VeIDCR_b_TLS_ConnectionFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_e_EVSE_TLS_CONNECTION' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_e_ExtChargerSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_e_ExtChargerSts' */
    /* Outport: '<Root>/VeIDCR_b_ExtChargerSts_FA' incorporates:
     *  Chart: '<S118>/FsftIDCR_e_ExtChargerStsChrt'
     *  SignalConversion generated from: '<S118>/VeIDCR_b_ExtChargerSts_FA'
     */
    /* Gateway: FsftIDCR_e_ExtChargerSts/FsftIDCR_e_ExtChargerStsChrt */
    /* During: FsftIDCR_e_ExtChargerSts/FsftIDCR_e_ExtChargerStsChrt */
    /* Entry Internal: FsftIDCR_e_ExtChargerSts/FsftIDCR_e_ExtChargerStsChrt */
    /* Transition: '<S473>:2' */
    (void)Rte_Write_VeIDCR_b_ExtChargerSts_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_e_ExtChargerSts' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_e_IBS_Current_Status(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_e_IBS_Current_Status' */
    /* Outport: '<Root>/VeIDCR_b_IBS_Current_Status_FA' incorporates:
     *  Chart: '<S119>/FsftIDCR_e_IBS_Current_StatusChrt'
     *  SignalConversion generated from: '<S119>/VeIDCR_b_IBS_Current_StatusFA'
     */
    /* Gateway: FsftIDCR_e_IBS_Current_Status/FsftIDCR_e_IBS_Current_StatusChrt */
    /* During: FsftIDCR_e_IBS_Current_Status/FsftIDCR_e_IBS_Current_StatusChrt */
    /* Entry Internal: FsftIDCR_e_IBS_Current_Status/FsftIDCR_e_IBS_Current_StatusChrt */
    /* Transition: '<S474>:2' */
    (void)Rte_Write_VeIDCR_b_IBS_Current_Status_FA_Value(true);

    /* Merge: '<Root>/Merge_31_Irv' incorporates:
     *  Chart: '<S119>/FsftIDCR_e_IBS_Current_StatusChrt'
     *  SignalConversion generated from: '<S119>/VeIDCR_b_IBS_Current_StatusFA_write'
     */
    Rte_IrvWrite_FsftIDCR_e_IBS_Current_Status_VeIDCR_b_IBS_Current_StatusFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_e_IBS_Current_Status' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_e_IBS_I_RANGE(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_e_IBS_I_RANGE' */
    /* Outport: '<Root>/VeIDCR_b_IBS_I_RANGE_FA' incorporates:
     *  Chart: '<S120>/FsftIDCR_e_IBS_I_RANGEChrt'
     *  SignalConversion generated from: '<S120>/VeIDCR_b_IBS_I_RANGEFA'
     */
    /* Gateway: FsftIDCR_e_IBS_I_RANGE/FsftIDCR_e_IBS_I_RANGEChrt */
    /* During: FsftIDCR_e_IBS_I_RANGE/FsftIDCR_e_IBS_I_RANGEChrt */
    /* Entry Internal: FsftIDCR_e_IBS_I_RANGE/FsftIDCR_e_IBS_I_RANGEChrt */
    /* Transition: '<S475>:2' */
    (void)Rte_Write_VeIDCR_b_IBS_I_RANGE_FA_Value(true);

    /* Merge: '<Root>/Merge_29_Irv' incorporates:
     *  Chart: '<S120>/FsftIDCR_e_IBS_I_RANGEChrt'
     *  SignalConversion generated from: '<S120>/VeIDCR_b_IBS_I_RANGEFA_write'
     */
    Rte_IrvWrite_FsftIDCR_e_IBS_I_RANGE_VeIDCR_b_IBS_I_RANGEFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_e_IBS_I_RANGE' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_e_ISO15118_MessageResponse(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_e_ISO15118_MessageResponse' */
    /* Outport: '<Root>/VeIDCR_b_ISO15118_MessageResponse_FA' incorporates:
     *  Chart: '<S121>/FsftIDCR_e_ISO15118_MessageResponseChrt'
     *  SignalConversion generated from: '<S121>/VeIDCR_b_ISO15118_MessageResponse_FA'
     */
    /* Gateway: FsftIDCR_e_ISO15118_MessageResponse/FsftIDCR_e_ISO15118_MessageResponseChrt */
    /* During: FsftIDCR_e_ISO15118_MessageResponse/FsftIDCR_e_ISO15118_MessageResponseChrt */
    /* Entry Internal: FsftIDCR_e_ISO15118_MessageResponse/FsftIDCR_e_ISO15118_MessageResponseChrt */
    /* Transition: '<S476>:2' */
    (void)Rte_Write_VeIDCR_b_ISO15118_MessageResponse_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_e_ISO15118_MessageResponse' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_e_ISO15118_ResponseCode(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_e_ISO15118_ResponseCode' */
    /* Outport: '<Root>/VeIDCR_b_ISO15118_ResponseCode_FA' incorporates:
     *  Chart: '<S122>/FsftIDCR_e_ISO15118_ResponseCodeChrt'
     *  SignalConversion generated from: '<S122>/VeIDCR_b_ISO15118_ResponseCode_FA'
     */
    /* Gateway: FsftIDCR_e_ISO15118_ResponseCode/FsftIDCR_e_ISO15118_ResponseCodeChrt */
    /* During: FsftIDCR_e_ISO15118_ResponseCode/FsftIDCR_e_ISO15118_ResponseCodeChrt */
    /* Entry Internal: FsftIDCR_e_ISO15118_ResponseCode/FsftIDCR_e_ISO15118_ResponseCodeChrt */
    /* Transition: '<S477>:2' */
    (void)Rte_Write_VeIDCR_b_ISO15118_ResponseCode_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_e_ISO15118_ResponseCode' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_e_ISO15118_TLS_Status(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_e_ISO15118_TLS_Status' */
    /* Outport: '<Root>/VeIDCR_b_ISO15118_TLS_Status_FA' incorporates:
     *  Chart: '<S123>/FsftIDCR_e_ISO15118_TLS_StatusChrt'
     *  SignalConversion generated from: '<S123>/VeIDCR_b_ISO15118_TLS_Status_FA'
     */
    /* Gateway: FsftIDCR_e_ISO15118_TLS_Status/FsftIDCR_e_ISO15118_TLS_StatusChrt */
    /* During: FsftIDCR_e_ISO15118_TLS_Status/FsftIDCR_e_ISO15118_TLS_StatusChrt */
    /* Entry Internal: FsftIDCR_e_ISO15118_TLS_Status/FsftIDCR_e_ISO15118_TLS_StatusChrt */
    /* Transition: '<S478>:2' */
    (void)Rte_Write_VeIDCR_b_ISO15118_TLS_Status_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_e_ISO15118_TLS_Status' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_e_J1772Stat(void)
{
    /* local block i/o variables */
    boolean rtb_LeIDCR_b_J1772StatFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_e_J1772Stat' */
    /* Chart: '<S124>/FsftIDCR_e_J1772StatChrt' */
    /* Gateway: FsftIDCR_e_J1772Stat/FsftIDCR_e_J1772StatChrt */
    /* During: FsftIDCR_e_J1772Stat/FsftIDCR_e_J1772StatChrt */
    /* Entry Internal: FsftIDCR_e_J1772Stat/FsftIDCR_e_J1772StatChrt */
    /* Transition: '<S479>:2' */
    rtb_LeIDCR_b_J1772StatFA_out = true;

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_e_J1772Stat' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_e_OBCM_CP1Sts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_e_OBCM_CP1Sts' */
    /* Outport: '<Root>/VeIDCR_b_OBCM_CP1Sts_FA' incorporates:
     *  Chart: '<S125>/FsftIDCR_e_OBCM_CP1StsChrt'
     *  SignalConversion generated from: '<S125>/VeIDCR_b_OBCM_CP1Sts_FA'
     */
    /* Gateway: FsftIDCR_e_OBCM_CP1Sts/FsftIDCR_e_OBCM_CP1StsChrt */
    /* During: FsftIDCR_e_OBCM_CP1Sts/FsftIDCR_e_OBCM_CP1StsChrt */
    /* Entry Internal: FsftIDCR_e_OBCM_CP1Sts/FsftIDCR_e_OBCM_CP1StsChrt */
    /* Transition: '<S480>:2' */
    (void)Rte_Write_VeIDCR_b_OBCM_CP1Sts_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_e_OBCM_CP1Sts' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_e_OBCM_CP2Sts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_e_OBCM_CP2Sts' */
    /* Outport: '<Root>/VeIDCR_b_OBCM_CP2Sts_FA' incorporates:
     *  Chart: '<S126>/FsftIDCR_e_OBCM_CP2StsChrt'
     *  SignalConversion generated from: '<S126>/VeIDCR_b_OBCM_CP2Sts_FA'
     */
    /* Gateway: FsftIDCR_e_OBCM_CP2Sts/FsftIDCR_e_OBCM_CP2StsChrt */
    /* During: FsftIDCR_e_OBCM_CP2Sts/FsftIDCR_e_OBCM_CP2StsChrt */
    /* Entry Internal: FsftIDCR_e_OBCM_CP2Sts/FsftIDCR_e_OBCM_CP2StsChrt */
    /* Transition: '<S481>:2' */
    (void)Rte_Write_VeIDCR_b_OBCM_CP2Sts_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_e_OBCM_CP2Sts' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_e_OBCM_CP3Sts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_e_OBCM_CP3Sts' */
    /* Outport: '<Root>/VeIDCR_b_OBCM_CP3Sts_FA' incorporates:
     *  Chart: '<S127>/FsftIDCR_e_OBCM_CP3StsChrt'
     *  SignalConversion generated from: '<S127>/VeIDCR_b_OBCM_CP3Sts_FA'
     */
    /* Gateway: FsftIDCR_e_OBCM_CP3Sts/FsftIDCR_e_OBCM_CP3StsChrt */
    /* During: FsftIDCR_e_OBCM_CP3Sts/FsftIDCR_e_OBCM_CP3StsChrt */
    /* Entry Internal: FsftIDCR_e_OBCM_CP3Sts/FsftIDCR_e_OBCM_CP3StsChrt */
    /* Transition: '<S482>:2' */
    (void)Rte_Write_VeIDCR_b_OBCM_CP3Sts_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_e_OBCM_CP3Sts' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_e_OBCM_CSSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_e_OBCM_CSSts' */
    /* Outport: '<Root>/VeIDCR_b_OBCM_CSSts_FA' incorporates:
     *  Chart: '<S128>/FsftIDCR_e_OBCM_CSStsChrt'
     *  SignalConversion generated from: '<S128>/VeIDCR_b_OBCM_CSSts_FA'
     */
    /* Gateway: FsftIDCR_e_OBCM_CSSts/FsftIDCR_e_OBCM_CSStsChrt */
    /* During: FsftIDCR_e_OBCM_CSSts/FsftIDCR_e_OBCM_CSStsChrt */
    /* Entry Internal: FsftIDCR_e_OBCM_CSSts/FsftIDCR_e_OBCM_CSStsChrt */
    /* Transition: '<S483>:2' */
    (void)Rte_Write_VeIDCR_b_OBCM_CSSts_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_e_OBCM_CSSts' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_e_OBCM_Charger_Ready(void)
{
    /* local block i/o variables */
    boolean rtb_LeIDCR_b_OBCM_Charger_ReadyFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_e_OBCM_Charger_Ready' */
    /* Chart: '<S129>/FsftIDCR_e_OBCM_Charger_ReadyChrt' */
    /* Gateway: FsftIDCR_e_OBCM_Charger_Ready/FsftIDCR_e_OBCM_Charger_ReadyChrt */
    /* During: FsftIDCR_e_OBCM_Charger_Ready/FsftIDCR_e_OBCM_Charger_ReadyChrt */
    /* Entry Internal: FsftIDCR_e_OBCM_Charger_Ready/FsftIDCR_e_OBCM_Charger_ReadyChrt */
    /* Transition: '<S484>:2' */
    rtb_LeIDCR_b_OBCM_Charger_ReadyFA_out = true;

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_e_OBCM_Charger_Ready' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_e_OBCM_HVILSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_e_OBCM_HVILSts' */
    /* Outport: '<Root>/VeIDCR_b_OBCM_HVILStsFA' incorporates:
     *  Chart: '<S130>/FsftIDCR_e_OBCM_HVILStsChrt'
     *  SignalConversion generated from: '<S130>/VeIDCR_b_OBCM_HVILStsFA'
     */
    /* Gateway: FsftIDCR_e_OBCM_HVILSts/FsftIDCR_e_OBCM_HVILStsChrt */
    /* During: FsftIDCR_e_OBCM_HVILSts/FsftIDCR_e_OBCM_HVILStsChrt */
    /* Entry Internal: FsftIDCR_e_OBCM_HVILSts/FsftIDCR_e_OBCM_HVILStsChrt */
    /* Transition: '<S485>:2' */
    (void)Rte_Write_VeIDCR_b_OBCM_HVILStsFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_e_OBCM_HVILSts' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_e_ProxStat(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_e_ProxStat' */
    /* Outport: '<Root>/VeIDCR_b_ProxStatFA' incorporates:
     *  Chart: '<S131>/FsftIDCR_e_ProxStatChrt'
     *  SignalConversion generated from: '<S131>/VeIDCR_b_ProxStatFA'
     */
    /* Gateway: FsftIDCR_e_ProxStat/FsftIDCR_e_ProxStatChrt */
    /* During: FsftIDCR_e_ProxStat/FsftIDCR_e_ProxStatChrt */
    /* Entry Internal: FsftIDCR_e_ProxStat/FsftIDCR_e_ProxStatChrt */
    /* Transition: '<S486>:2' */
    (void)Rte_Write_VeIDCR_b_ProxStatFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_e_ProxStat' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_e_TxGBTMsgRequest(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_e_TxGBTMsgRequest' */
    /* Outport: '<Root>/VeIDCR_b_TxGBTMsgRequestFA' incorporates:
     *  Chart: '<S132>/FsftIDCR_e_TxGBTMsgRequestChrt'
     *  SignalConversion generated from: '<S132>/VeIDCR_b_TxGBTMsgRequestFA'
     */
    /* Gateway: FsftIDCR_e_TxGBTMsgRequest/FsftIDCR_e_TxGBTMsgRequestChrt */
    /* During: FsftIDCR_e_TxGBTMsgRequest/FsftIDCR_e_TxGBTMsgRequestChrt */
    /* Entry Internal: FsftIDCR_e_TxGBTMsgRequest/FsftIDCR_e_TxGBTMsgRequestChrt */
    /* Transition: '<S487>:2' */
    (void)Rte_Write_VeIDCR_b_TxGBTMsgRequestFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_e_TxGBTMsgRequest' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_e_TxGBTMsgResponse(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_e_TxGBTMsgResponse' */
    /* Outport: '<Root>/VeIDCR_b_TxGBTMsgResponseFA' incorporates:
     *  Chart: '<S133>/FsftIDCR_e_TxGBTMsgResponseChrt'
     *  SignalConversion generated from: '<S133>/VeIDCR_b_TxGBTMsgResponseFA'
     */
    /* Gateway: FsftIDCR_e_TxGBTMsgResponse/FsftIDCR_e_TxGBTMsgResponseChrt */
    /* During: FsftIDCR_e_TxGBTMsgResponse/FsftIDCR_e_TxGBTMsgResponseChrt */
    /* Entry Internal: FsftIDCR_e_TxGBTMsgResponse/FsftIDCR_e_TxGBTMsgResponseChrt */
    /* Transition: '<S488>:2' */
    (void)Rte_Write_VeIDCR_b_TxGBTMsgResponseFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_e_TxGBTMsgResponse' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_e_V2XDerateRsn(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_e_V2XDerateRsn' */
    /* Outport: '<Root>/VeIDCR_b_V2X_DerateRsn_FA' incorporates:
     *  Chart: '<S134>/FsftIDCR_e_V2XDerateRsnChrt'
     *  SignalConversion generated from: '<S134>/VeIDCR_b_V2XDerateRsnFA'
     */
    /* Gateway: FsftIDCR_e_V2XDerateRsn/FsftIDCR_e_V2XDerateRsnChrt */
    /* During: FsftIDCR_e_V2XDerateRsn/FsftIDCR_e_V2XDerateRsnChrt */
    /* Entry Internal: FsftIDCR_e_V2XDerateRsn/FsftIDCR_e_V2XDerateRsnChrt */
    /* Transition: '<S489>:2' */
    (void)Rte_Write_VeIDCR_b_V2X_DerateRsn_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_e_V2XDerateRsn' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_e_V2XFaultRsn(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_e_V2XFaultRsn' */
    /* Outport: '<Root>/VeIDCR_b_V2X_FaultRsn_FA' incorporates:
     *  Chart: '<S135>/FsftIDCR_e_V2XFaultRsnChrt'
     *  SignalConversion generated from: '<S135>/VeIDCR_b_V2XFaultRsnFA'
     */
    /* Gateway: FsftIDCR_e_V2XFaultRsn/FsftIDCR_e_V2XFaultRsnChrt */
    /* During: FsftIDCR_e_V2XFaultRsn/FsftIDCR_e_V2XFaultRsnChrt */
    /* Entry Internal: FsftIDCR_e_V2XFaultRsn/FsftIDCR_e_V2XFaultRsnChrt */
    /* Transition: '<S490>:2' */
    (void)Rte_Write_VeIDCR_b_V2X_FaultRsn_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_e_V2XFaultRsn' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_e_V2XInterlockSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_e_V2XInterlockSts' */
    /* Chart: '<S136>/FsftIDCR_e_V2XInterlockStsChrt' */
    IDCR_ac_FsftIDCR_e_V2XInterlockStsChrt
        (&IDCR_ac_B.sf_FsftIDCR_e_V2XInterlockStsChrt);

    /* Outport: '<Root>/VeIDCR_b_V2X_InterlockSts_FA' incorporates:
     *  SignalConversion generated from: '<S136>/VeIDCR_b_V2XInterlockStsFA'
     */
    (void)Rte_Write_VeIDCR_b_V2X_InterlockSts_FA_Value
        (IDCR_ac_B.sf_FsftIDCR_e_V2XInterlockStsChrt.LeIDCR_b_V2XInterlockStsFA_out);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_e_V2XInterlockSts' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_e_V2XModeFeedback(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_e_V2XModeFeedback' */
    /* Chart: '<S137>/FsftIDCR_e_V2XModeFeedbackChrt' */
    IDCR_ac_FsftIDCR_e_V2XInterlockStsChrt
        (&IDCR_ac_B.sf_FsftIDCR_e_V2XModeFeedbackChrt);

    /* Outport: '<Root>/VeIDCR_b_V2X_ModeFeedback_FA' incorporates:
     *  SignalConversion generated from: '<S137>/VeIDCR_b_V2XModeFeedbackFA'
     */
    (void)Rte_Write_VeIDCR_b_V2X_ModeFeedback_FA_Value
        (IDCR_ac_B.sf_FsftIDCR_e_V2XModeFeedbackChrt.LeIDCR_b_V2XInterlockStsFA_out);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_e_V2XModeFeedback' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_f_ACOutFreq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_f_ACOutFreq' */
    /* Outport: '<Root>/VeIDCR_b_ACOutFreq_FA' incorporates:
     *  Chart: '<S138>/FsftIDCR_f_ACOutFreqChrt'
     *  SignalConversion generated from: '<S138>/VeIDCR_b_ACOutFreqFA'
     */
    /* Gateway: FsftIDCR_f_ACOutFreq/FsftIDCR_f_ACOutFreqChrt */
    /* During: FsftIDCR_f_ACOutFreq/FsftIDCR_f_ACOutFreqChrt */
    /* Entry Internal: FsftIDCR_f_ACOutFreq/FsftIDCR_f_ACOutFreqChrt */
    /* Transition: '<S493>:2' */
    (void)Rte_Write_VeIDCR_b_ACOutFreq_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_f_ACOutFreq' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_f_AcOutFrequency(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_f_AcOutFrequency' */
    /* Outport: '<Root>/VeIDCR_b_AcOutFrequency_FA' incorporates:
     *  Chart: '<S139>/FsftIDCR_f_AcOutFrequencyChrt'
     *  SignalConversion generated from: '<S139>/VeIDCR_b_AcOutFrequencyFA'
     */
    /* Gateway: FsftIDCR_f_AcOutFrequency/FsftIDCR_f_AcOutFrequencyChrt */
    /* During: FsftIDCR_f_AcOutFrequency/FsftIDCR_f_AcOutFrequencyChrt */
    /* Entry Internal: FsftIDCR_f_AcOutFrequency/FsftIDCR_f_AcOutFrequencyChrt */
    /* Transition: '<S494>:2' */
    (void)Rte_Write_VeIDCR_b_AcOutFrequency_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_f_AcOutFrequency' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_f_V2XFrequency(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_f_V2XFrequency' */
    /* Outport: '<Root>/VeIDCR_b_V2X_Frequency_FA' incorporates:
     *  Chart: '<S140>/FsftIDCR_f_V2XFrequencyChrt'
     *  SignalConversion generated from: '<S140>/VeIDCR_b_V2XFrequencyFA'
     */
    /* Gateway: FsftIDCR_f_V2XFrequency/FsftIDCR_f_V2XFrequencyChrt */
    /* During: FsftIDCR_f_V2XFrequency/FsftIDCR_f_V2XFrequencyChrt */
    /* Entry Internal: FsftIDCR_f_V2XFrequency/FsftIDCR_f_V2XFrequencyChrt */
    /* Transition: '<S495>:2' */
    (void)Rte_Write_VeIDCR_b_V2X_Frequency_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_f_V2XFrequency' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_g_HVCMS_EVSEID(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_g_HVCMS_EVSEID' */
    /* Outport: '<Root>/VeIDCR_b_HVCMS_EVSEID_FA' incorporates:
     *  Chart: '<S141>/FsftIDCR_g_HVCMS_EVSEIDChrt'
     *  SignalConversion generated from: '<S141>/VeIDCR_b_HVCMS_EVSEID_FA'
     */
    /* Gateway: FsftIDCR_g_HVCMS_EVSEID/FsftIDCR_g_HVCMS_EVSEIDChrt */
    /* During: FsftIDCR_g_HVCMS_EVSEID/FsftIDCR_g_HVCMS_EVSEIDChrt */
    /* Entry Internal: FsftIDCR_g_HVCMS_EVSEID/FsftIDCR_g_HVCMS_EVSEIDChrt */
    /* Transition: '<S496>:2' */
    (void)Rte_Write_VeIDCR_b_HVCMS_EVSEID_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_g_HVCMS_EVSEID' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_i_ISO15118_SAScheduleTupleID(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_i_ISO15118_SAScheduleTupleID' */
    /* Outport: '<Root>/VeIDCR_b_ISO15118_SAScheduleTupleID_FA' incorporates:
     *  Chart: '<S142>/FsftIDCR_i_ISO15118_SAScheduleTupleIDChrt'
     *  SignalConversion generated from: '<S142>/VeIDCR_b_ISO15118_SAScheduleTupleID_FA'
     */
    /* Gateway: FsftIDCR_i_ISO15118_SAScheduleTupleID/FsftIDCR_i_ISO15118_SAScheduleTupleIDChrt */
    /* During: FsftIDCR_i_ISO15118_SAScheduleTupleID/FsftIDCR_i_ISO15118_SAScheduleTupleIDChrt */
    /* Entry Internal: FsftIDCR_i_ISO15118_SAScheduleTupleID/FsftIDCR_i_ISO15118_SAScheduleTupleIDChrt */
    /* Transition: '<S497>:2' */
    (void)Rte_Write_VeIDCR_b_ISO15118_SAScheduleTupleID_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_i_ISO15118_SAScheduleTupleID' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_i_SAScheduleTupleID(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_i_SAScheduleTupleID' */
    /* Outport: '<Root>/VeIDCR_b_SAScheduleTupleIDFA' incorporates:
     *  Chart: '<S143>/FsftIDCR_i_SAScheduleTupleIDChrt'
     *  SignalConversion generated from: '<S143>/VeIDCR_b_SAScheduleTupleIDFA'
     */
    /* Gateway: FsftIDCR_i_SAScheduleTupleID/FsftIDCR_i_SAScheduleTupleIDChrt */
    /* During: FsftIDCR_i_SAScheduleTupleID/FsftIDCR_i_SAScheduleTupleIDChrt */
    /* Entry Internal: FsftIDCR_i_SAScheduleTupleID/FsftIDCR_i_SAScheduleTupleIDChrt */
    /* Transition: '<S498>:2' */
    (void)Rte_Write_VeIDCR_b_SAScheduleTupleIDFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_i_SAScheduleTupleID' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_t_EVSE_NotificationMaxDelay(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_t_EVSE_NotificationMaxDelay' */
    /* Outport: '<Root>/VeIDCR_b_EVSE_NotificationMaxDelayFA' incorporates:
     *  Chart: '<S144>/FsftIDCR_t_EVSE_NotificationMaxDelayChrt'
     *  SignalConversion generated from: '<S144>/VeIDCR_b_EVSE_NotificationMaxDelayFA'
     */
    /* Gateway: FsftIDCR_t_EVSE_NotificationMaxDelay/FsftIDCR_t_EVSE_NotificationMaxDelayChrt */
    /* During: FsftIDCR_t_EVSE_NotificationMaxDelay/FsftIDCR_t_EVSE_NotificationMaxDelayChrt */
    /* Entry Internal: FsftIDCR_t_EVSE_NotificationMaxDelay/FsftIDCR_t_EVSE_NotificationMaxDelayChrt */
    /* Transition: '<S499>:2' */
    (void)Rte_Write_VeIDCR_b_EVSE_NotificationMaxDelayFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_t_EVSE_NotificationMaxDelay' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_t_ISO15118_NotificationMaxDelay(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_t_ISO15118_NotificationMaxDelay' */
    /* Outport: '<Root>/VeIDCR_b_ISO15118_NotificationMaxDelay_FA' incorporates:
     *  Chart: '<S145>/FsftIDCR_t_ISO15118_NotificationMaxDelayChrt'
     *  SignalConversion generated from: '<S145>/VeIDCR_b_ISO15118_NotificationMaxDelay_FA'
     */
    /* Gateway: FsftIDCR_t_ISO15118_NotificationMaxDelay/FsftIDCR_t_ISO15118_NotificationMaxDelayChrt */
    /* During: FsftIDCR_t_ISO15118_NotificationMaxDelay/FsftIDCR_t_ISO15118_NotificationMaxDelayChrt */
    /* Entry Internal: FsftIDCR_t_ISO15118_NotificationMaxDelay/FsftIDCR_t_ISO15118_NotificationMaxDelayChrt */
    /* Transition: '<S500>:2' */
    (void)Rte_Write_VeIDCR_b_ISO15118_NotificationMaxDelay_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_t_ISO15118_NotificationMaxDelay' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_y_ISO15118_SchemaID(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_y_ISO15118_SchemaID' */
    /* Outport: '<Root>/VeIDCR_b_ISO15118_SchemaID_FA' incorporates:
     *  Chart: '<S146>/FsftIDCR_b_ISO15118_SchemaIDChrt'
     *  SignalConversion generated from: '<S146>/VeIDCR_b_ISO15118_SchemaID_FA'
     */
    /* Gateway: FsftIDCR_y_ISO15118_SchemaID/FsftIDCR_b_ISO15118_SchemaIDChrt */
    /* During: FsftIDCR_y_ISO15118_SchemaID/FsftIDCR_b_ISO15118_SchemaIDChrt */
    /* Entry Internal: FsftIDCR_y_ISO15118_SchemaID/FsftIDCR_b_ISO15118_SchemaIDChrt */
    /* Transition: '<S501>:2' */
    (void)Rte_Write_VeIDCR_b_ISO15118_SchemaID_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_y_ISO15118_SchemaID' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_y_ISO15118_VersionNumMajor(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_y_ISO15118_VersionNumMajor' */
    /* Outport: '<Root>/VeIDCR_b_ISO15118_VersionNumMajor_FA' incorporates:
     *  Chart: '<S147>/FsftIDCR_y_VersionNumMajorChrt'
     *  SignalConversion generated from: '<S147>/VeIDCR_b_VersionNumMajor_FA'
     */
    /* Gateway: FsftIDCR_y_ISO15118_VersionNumMajor/FsftIDCR_y_VersionNumMajorChrt */
    /* During: FsftIDCR_y_ISO15118_VersionNumMajor/FsftIDCR_y_VersionNumMajorChrt */
    /* Entry Internal: FsftIDCR_y_ISO15118_VersionNumMajor/FsftIDCR_y_VersionNumMajorChrt */
    /* Transition: '<S502>:2' */
    (void)Rte_Write_VeIDCR_b_ISO15118_VersionNumMajor_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_y_ISO15118_VersionNumMajor' */
}

/* Output function */
FUNC(void, IDCR_CODE) FsftIDCR_y_ISO15118_VersionNumMinor(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIDCR_y_ISO15118_VersionNumMinor' */
    /* Outport: '<Root>/VeIDCR_b_ISO15118_VersionNumMinor_FA' incorporates:
     *  Chart: '<S148>/FsftIDCR_y_ISO15118_VersionNumMinorChrt'
     *  SignalConversion generated from: '<S148>/VeIDCR_b_ISO15118_VersionNumMinor_FA'
     */
    /* Gateway: FsftIDCR_y_ISO15118_VersionNumMinor/FsftIDCR_y_ISO15118_VersionNumMinorChrt */
    /* During: FsftIDCR_y_ISO15118_VersionNumMinor/FsftIDCR_y_ISO15118_VersionNumMinorChrt */
    /* Entry Internal: FsftIDCR_y_ISO15118_VersionNumMinor/FsftIDCR_y_ISO15118_VersionNumMinorChrt */
    /* Transition: '<S503>:2' */
    (void)Rte_Write_VeIDCR_b_ISO15118_VersionNumMinor_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIDCR_y_ISO15118_VersionNumMinor' */
}

/* Output function */
FUNC(void, IDCR_CODE) IOControl_APM_Status(void)
{
    TeDCAB_e_IOControlOpType rtb_TmpSignalConversionAtVeDCAB_e_IOCont;
    TeODCR_e_IO_CntrlSt rtb_TmpSignalConversionAtVeDCAB;
    uint8 tmpRead;

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_APM_Status' incorporates:
     *  SubSystem: '<Root>/Runnable_APM_Status'
     */
    /* SignalConversion generated from: '<S351>/VeDCAB_e_IOControl_APM_Status_Op' incorporates:
     *  Inport: '<Root>/VeDCAB_e_IOControl_APM_Status_Op'
     */
    (void)Rte_Read_VeDCAB_e_IOControl_APM_Status_Op_Value
        (&rtb_TmpSignalConversionAtVeDCAB_e_IOCont);

    /* Switch: '<S351>/Switch' incorporates:
     *  Constant: '<S805>/Constant'
     *  Constant: '<S809>/Constant'
     *  Constant: '<S810>/Constant'
     *  RelationalOperator: '<S351>/Equal'
     *  RelationalOperator: '<S351>/Equal1'
     *  RelationalOperator: '<S351>/Equal2'
     *  Switch: '<S351>/Switch1'
     *  Switch: '<S351>/Switch2'
     */
    if (rtb_TmpSignalConversionAtVeDCAB_e_IOCont == CeDCAB_e_IO_ShortTermAdj)
    {
        /* Outport: '<Root>/VeIDCR_e_DVC_APMSts' incorporates:
         *  Constant: '<S806>/Constant'
         */
        (void)Rte_Write_VeIDCR_e_DVC_APMSts_Value(CeODCR_e_ShortTermAdjust);
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeDCAB_e_IOCont ==
                CeDCAB_e_IO_FreezeCurrentSt)
        {
            /* Switch: '<S351>/Switch2' incorporates:
             *  Constant: '<S811>/Constant'
             */
            rtb_TmpSignalConversionAtVeDCAB = CeODCR_e_FreezeCurrentSt;
        }
        else if (rtb_TmpSignalConversionAtVeDCAB_e_IOCont ==
                 CeDCAB_e_IO_ResetToDefault)
        {
            /* Switch: '<S351>/Switch1' incorporates:
             *  Constant: '<S807>/Constant'
             *  Switch: '<S351>/Switch2'
             */
            rtb_TmpSignalConversionAtVeDCAB = CeODCR_e_Return_Default_Cntrl;
        }
        else
        {
            /* Switch: '<S351>/Switch2' incorporates:
             *  Constant: '<S808>/Constant'
             *  Switch: '<S351>/Switch1'
             */
            rtb_TmpSignalConversionAtVeDCAB = CeODCR_e_Return_ECU_Cntrl;
        }

        /* Outport: '<Root>/VeIDCR_e_DVC_APMSts' incorporates:
         *  Constant: '<S809>/Constant'
         *  RelationalOperator: '<S351>/Equal1'
         *  Switch: '<S351>/Switch1'
         *  Switch: '<S351>/Switch2'
         */
        (void)Rte_Write_VeIDCR_e_DVC_APMSts_Value
            (rtb_TmpSignalConversionAtVeDCAB);
    }

    /* End of Switch: '<S351>/Switch' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_APM_Status' */

    /* Inport: '<Root>/VeDCAB_y_IOCtrlD012APMSts' */
    (void)Rte_Read_VeDCAB_y_IOCtrlD012APMSts_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_APM_Status' incorporates:
     *  SubSystem: '<Root>/Runnable_APM_Status'
     */
    /* Outport: '<Root>/VeIDCR_y_APMSts' incorporates:
     *  SignalConversion generated from: '<S351>/VeDCAB_y_IOCtrlD012APMSts'
     */
    (void)Rte_Write_VeIDCR_y_APMSts_Value(tmpRead);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_APM_Status' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_E_EVSE_EnrgyToBeDlvrd(VAR(float32, AUTOMATIC)
    LeIDCR_E_EVSE_EnrgyToBeDlvrd, VAR(boolean, AUTOMATIC)
    LeIDCR_b_EVSE_EnrgyToBeDlvrdFA)
{
    boolean rtb_LeIDCR_b_EVSE_EnrgyToBeDlvrdFA_out_h;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_E_EVSE_EnrgyToBeDlvrd' */
    /* Chart: '<S151>/PokeIDCR_E_EVSE_EnrgyToBeDlvrdChrt' incorporates:
     *  SignalConversion generated from: '<S151>/LeIDCR_E_EVSE_EnrgyToBeDlvrd'
     *  SignalConversion generated from: '<S151>/LeIDCR_b_EVSE_EnrgyToBeDlvrdFA'
     */
    /* Gateway: PokeIDCR_E_EVSE_EnrgyToBeDlvrd/PokeIDCR_E_EVSE_EnrgyToBeDlvrdChrt */
    /* During: PokeIDCR_E_EVSE_EnrgyToBeDlvrd/PokeIDCR_E_EVSE_EnrgyToBeDlvrdChrt */
    /* Entry Internal: PokeIDCR_E_EVSE_EnrgyToBeDlvrd/PokeIDCR_E_EVSE_EnrgyToBeDlvrdChrt */
    /* Transition: '<S594>:2' */
    if (!LeIDCR_b_EVSE_EnrgyToBeDlvrdFA)
    {
        /* Transition: '<S594>:3' */
        /* Transition: '<S594>:15' */
        IDCR_ac_B.LeIDCR_E_EVSE_EnrgyToBeDlvrd_out =
            LeIDCR_E_EVSE_EnrgyToBeDlvrd;
        rtb_LeIDCR_b_EVSE_EnrgyToBeDlvrdFA_out_h = false;

        /* Transition: '<S594>:18' */
    }
    else
    {
        /* Transition: '<S594>:4' */
        rtb_LeIDCR_b_EVSE_EnrgyToBeDlvrdFA_out_h = true;
    }

    /* End of Chart: '<S151>/PokeIDCR_E_EVSE_EnrgyToBeDlvrdChrt' */

    /* Outport: '<Root>/VeIDCR_E_EVSE_EnrgyToBeDlvrd' incorporates:
     *  SignalConversion generated from: '<S151>/VeIDCR_E_EVSE_EnrgyToBeDlvrd'
     */
    (void)Rte_Write_VeIDCR_E_EVSE_EnrgyToBeDlvrd_Value
        (IDCR_ac_B.LeIDCR_E_EVSE_EnrgyToBeDlvrd_out);

    /* Outport: '<Root>/VeIDCR_b_EVSE_EnrgyToBeDlvrd_FA' incorporates:
     *  SignalConversion generated from: '<S151>/VeIDCR_b_EVSE_EnrgyToBeDlvrdFA'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_EnrgyToBeDlvrd_FA_Value
        (rtb_LeIDCR_b_EVSE_EnrgyToBeDlvrdFA_out_h);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_E_EVSE_EnrgyToBeDlvrd' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_I_ACOutCurrent1(VAR(float32, AUTOMATIC)
    LeIDCR_I_ACOutCurrent1, VAR(boolean, AUTOMATIC) LeIDCR_b_ACOutCurrent1FA)
{
    boolean rtb_LeIDCR_b_ACOutCurrent1FA_out_c;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_I_ACOutCurrent1' */
    /* Chart: '<S152>/PokeIDCR_I_ACOutCurrent1Chrt' incorporates:
     *  SignalConversion generated from: '<S152>/LeIDCR_f_ACOutFreq1'
     *  SignalConversion generated from: '<S152>/LeIDCR_f_ACOutFreq'
     */
    /* Gateway: PokeIDCR_I_ACOutCurrent1/PokeIDCR_I_ACOutCurrent1Chrt */
    /* During: PokeIDCR_I_ACOutCurrent1/PokeIDCR_I_ACOutCurrent1Chrt */
    /* Entry Internal: PokeIDCR_I_ACOutCurrent1/PokeIDCR_I_ACOutCurrent1Chrt */
    /* Transition: '<S595>:22' */
    if (!LeIDCR_b_ACOutCurrent1FA)
    {
        /* Transition: '<S595>:23' */
        /* Transition: '<S595>:27' */
        IDCR_ac_B.LeIDCR_I_ACOutCurrent1_out = LeIDCR_I_ACOutCurrent1;
        rtb_LeIDCR_b_ACOutCurrent1FA_out_c = false;

        /* Transition: '<S595>:21' */
    }
    else
    {
        /* Transition: '<S595>:24' */
        rtb_LeIDCR_b_ACOutCurrent1FA_out_c = true;
    }

    /* End of Chart: '<S152>/PokeIDCR_I_ACOutCurrent1Chrt' */

    /* Outport: '<Root>/VeIDCR_I_ACOutCurrent1' incorporates:
     *  SignalConversion generated from: '<S152>/VeIDCR_I_ACOutCurrent1'
     */
    (void)Rte_Write_VeIDCR_I_ACOutCurrent1_Value
        (IDCR_ac_B.LeIDCR_I_ACOutCurrent1_out);

    /* Outport: '<Root>/VeIDCR_b_ACOutCurrent1_FA' incorporates:
     *  SignalConversion generated from: '<S152>/VeIDCR_b_ACOutCurrent1FA'
     */
    (void)Rte_Write_VeIDCR_b_ACOutCurrent1_FA_Value
        (rtb_LeIDCR_b_ACOutCurrent1FA_out_c);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_I_ACOutCurrent1' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_I_ACOutCurrent2(VAR(float32, AUTOMATIC)
    LeIDCR_I_ACOutCurrent2, VAR(boolean, AUTOMATIC) LeIDCR_b_ACOutCurrent2FA)
{
    boolean rtb_LeIDCR_b_ACOutCurrent2FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_I_ACOutCurrent2' */
    /* Chart: '<S153>/PokeIDCR_I_ACOutCurrent2Chrt' incorporates:
     *  SignalConversion generated from: '<S153>/LeIDCR_f_ACOutFreq1'
     *  SignalConversion generated from: '<S153>/LeIDCR_f_ACOutFreq'
     */
    /* Gateway: PokeIDCR_I_ACOutCurrent2/PokeIDCR_I_ACOutCurrent2Chrt */
    /* During: PokeIDCR_I_ACOutCurrent2/PokeIDCR_I_ACOutCurrent2Chrt */
    /* Entry Internal: PokeIDCR_I_ACOutCurrent2/PokeIDCR_I_ACOutCurrent2Chrt */
    /* Transition: '<S596>:22' */
    if (!LeIDCR_b_ACOutCurrent2FA)
    {
        /* Transition: '<S596>:23' */
        /* Transition: '<S596>:27' */
        IDCR_ac_B.LeIDCR_I_ACOutCurrent2_out = LeIDCR_I_ACOutCurrent2;
        rtb_LeIDCR_b_ACOutCurrent2FA_out = false;

        /* Transition: '<S596>:21' */
    }
    else
    {
        /* Transition: '<S596>:24' */
        rtb_LeIDCR_b_ACOutCurrent2FA_out = true;
    }

    /* End of Chart: '<S153>/PokeIDCR_I_ACOutCurrent2Chrt' */

    /* Outport: '<Root>/VeIDCR_I_ACOutCurrent2' incorporates:
     *  SignalConversion generated from: '<S153>/VeIDCR_I_ACOutCurrent2'
     */
    (void)Rte_Write_VeIDCR_I_ACOutCurrent2_Value
        (IDCR_ac_B.LeIDCR_I_ACOutCurrent2_out);

    /* Outport: '<Root>/VeIDCR_b_ACOutCurrent2_FA' incorporates:
     *  SignalConversion generated from: '<S153>/VeIDCR_b_ACOutCurrent2FA'
     */
    (void)Rte_Write_VeIDCR_b_ACOutCurrent2_FA_Value
        (rtb_LeIDCR_b_ACOutCurrent2FA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_I_ACOutCurrent2' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_I_ACOutCurrent3(VAR(float32, AUTOMATIC)
    LeIDCR_I_ACOutCurrent3, VAR(boolean, AUTOMATIC) LeIDCR_b_ACOutCurrent3FA)
{
    boolean rtb_LeIDCR_b_ACOutCurrent3FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_I_ACOutCurrent3' */
    /* Chart: '<S154>/PokeIDCR_I_ACOutCurrent3Chrt' incorporates:
     *  SignalConversion generated from: '<S154>/LeIDCR_f_ACOutFreq1'
     *  SignalConversion generated from: '<S154>/LeIDCR_f_ACOutFreq'
     */
    /* Gateway: PokeIDCR_I_ACOutCurrent3/PokeIDCR_I_ACOutCurrent3Chrt */
    /* During: PokeIDCR_I_ACOutCurrent3/PokeIDCR_I_ACOutCurrent3Chrt */
    /* Entry Internal: PokeIDCR_I_ACOutCurrent3/PokeIDCR_I_ACOutCurrent3Chrt */
    /* Transition: '<S597>:22' */
    if (!LeIDCR_b_ACOutCurrent3FA)
    {
        /* Transition: '<S597>:23' */
        /* Transition: '<S597>:27' */
        IDCR_ac_B.LeIDCR_I_ACOutCurrent3_out = LeIDCR_I_ACOutCurrent3;
        rtb_LeIDCR_b_ACOutCurrent3FA_out = false;

        /* Transition: '<S597>:21' */
    }
    else
    {
        /* Transition: '<S597>:24' */
        rtb_LeIDCR_b_ACOutCurrent3FA_out = true;
    }

    /* End of Chart: '<S154>/PokeIDCR_I_ACOutCurrent3Chrt' */

    /* Outport: '<Root>/VeIDCR_I_ACOutCurrent3' incorporates:
     *  SignalConversion generated from: '<S154>/VeIDCR_I_ACOutCurrent3'
     */
    (void)Rte_Write_VeIDCR_I_ACOutCurrent3_Value
        (IDCR_ac_B.LeIDCR_I_ACOutCurrent3_out);

    /* Outport: '<Root>/VeIDCR_b_ACOutCurrent3_FA' incorporates:
     *  SignalConversion generated from: '<S154>/VeIDCR_b_ACOutCurrent3FA'
     */
    (void)Rte_Write_VeIDCR_b_ACOutCurrent3_FA_Value
        (rtb_LeIDCR_b_ACOutCurrent3FA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_I_ACOutCurrent3' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_I_ACSideCurr_L2(VAR(float32, AUTOMATIC)
    LeIDCR_I_ACSideCurr_L2, VAR(boolean, AUTOMATIC) LeIDCR_b_ACSideCurr_L2FA)
{
    /* local block i/o variables */
    boolean rtb_LeIDCR_b_ACSideCurr_L2FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_I_ACSideCurr_L2' */
    /* Chart: '<S155>/PokeIDCR_I_ACSideCurr_L2Chrt' incorporates:
     *  SignalConversion generated from: '<S155>/LeIDCR_b_ACSideCurr_L2FA'
     */
    /* Gateway: PokeIDCR_I_ACSideCurr_L2/PokeIDCR_I_ACSideCurr_L2Chrt */
    /* During: PokeIDCR_I_ACSideCurr_L2/PokeIDCR_I_ACSideCurr_L2Chrt */
    /* Entry Internal: PokeIDCR_I_ACSideCurr_L2/PokeIDCR_I_ACSideCurr_L2Chrt */
    /* Transition: '<S598>:2' */
    if (!LeIDCR_b_ACSideCurr_L2FA)
    {
        /* SignalConversion generated from: '<S155>/VeIDCR_I_ACSideCurr_L2' incorporates:
         *  Outport: '<Root>/VeIDCR_I_ACSideCurr_L2'
         *  SignalConversion generated from: '<S155>/LeIDCR_I_ACSideCurr_L2'
         */
        /* Transition: '<S598>:3' */
        /* Transition: '<S598>:15' */
        (void)Rte_Write_VeIDCR_I_ACSideCurr_L2_Value(LeIDCR_I_ACSideCurr_L2);
        rtb_LeIDCR_b_ACSideCurr_L2FA_out = false;

        /* Transition: '<S598>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S155>/VeIDCR_I_ACSideCurr_L2' incorporates:
         *  Outport: '<Root>/VeIDCR_I_ACSideCurr_L2'
         */
        /* Transition: '<S598>:4' */
        (void)Rte_Write_VeIDCR_I_ACSideCurr_L2_Value(KeIDCR_K_Default309h_Value);
        rtb_LeIDCR_b_ACSideCurr_L2FA_out = true;
    }

    /* End of Chart: '<S155>/PokeIDCR_I_ACSideCurr_L2Chrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_I_ACSideCurr_L2' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_I_ACSideCurr_L3(VAR(float32, AUTOMATIC)
    LeIDCR_I_ACSideCurr_L3, VAR(boolean, AUTOMATIC) LeIDCR_b_ACSideCurr_L3FA)
{
    /* local block i/o variables */
    boolean rtb_LeIDCR_b_ACSideCurr_L3FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_I_ACSideCurr_L3' */
    /* Chart: '<S156>/PokeIDCR_I_ACSideCurr_L3Chrt' incorporates:
     *  SignalConversion generated from: '<S156>/LeIDCR_b_ACSideCurr_L3FA'
     */
    /* Gateway: PokeIDCR_I_ACSideCurr_L3/PokeIDCR_I_ACSideCurr_L3Chrt */
    /* During: PokeIDCR_I_ACSideCurr_L3/PokeIDCR_I_ACSideCurr_L3Chrt */
    /* Entry Internal: PokeIDCR_I_ACSideCurr_L3/PokeIDCR_I_ACSideCurr_L3Chrt */
    /* Transition: '<S599>:2' */
    if (!LeIDCR_b_ACSideCurr_L3FA)
    {
        /* SignalConversion generated from: '<S156>/VeIDCR_I_ACSideCurr_L3' incorporates:
         *  Outport: '<Root>/VeIDCR_I_ACSideCurr_L3'
         *  SignalConversion generated from: '<S156>/LeIDCR_I_ACSideCurr_L3'
         */
        /* Transition: '<S599>:3' */
        /* Transition: '<S599>:15' */
        (void)Rte_Write_VeIDCR_I_ACSideCurr_L3_Value(LeIDCR_I_ACSideCurr_L3);
        rtb_LeIDCR_b_ACSideCurr_L3FA_out = false;

        /* Transition: '<S599>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S156>/VeIDCR_I_ACSideCurr_L3' incorporates:
         *  Outport: '<Root>/VeIDCR_I_ACSideCurr_L3'
         */
        /* Transition: '<S599>:4' */
        (void)Rte_Write_VeIDCR_I_ACSideCurr_L3_Value(KeIDCR_K_Default309h_Value);
        rtb_LeIDCR_b_ACSideCurr_L3FA_out = true;
    }

    /* End of Chart: '<S156>/PokeIDCR_I_ACSideCurr_L3Chrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_I_ACSideCurr_L3' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_I_AC_Side_Curr(VAR(float32, AUTOMATIC)
    LeIDCR_I_AC_Side_Curr, VAR(boolean, AUTOMATIC) LeIDCR_b_AC_Side_CurrFA)
{
    /* local block i/o variables */
    boolean rtb_LeIDCR_b_AC_Side_CurrFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_I_AC_Side_Curr' */
    /* Chart: '<S157>/PokeIDCR_I_AC_Side_CurrChrt' incorporates:
     *  SignalConversion generated from: '<S157>/LeIDCR_b_AC_Side_CurrFA'
     */
    /* Gateway: PokeIDCR_I_AC_Side_Curr/PokeIDCR_I_AC_Side_CurrChrt */
    /* During: PokeIDCR_I_AC_Side_Curr/PokeIDCR_I_AC_Side_CurrChrt */
    /* Entry Internal: PokeIDCR_I_AC_Side_Curr/PokeIDCR_I_AC_Side_CurrChrt */
    /* Transition: '<S600>:2' */
    if (!LeIDCR_b_AC_Side_CurrFA)
    {
        /* SignalConversion generated from: '<S157>/VeIDCR_I_AC_Side_Curr' incorporates:
         *  Outport: '<Root>/VeIDCR_I_AC_Side_Curr'
         *  SignalConversion generated from: '<S157>/LeIDCR_I_AC_Side_Curr'
         */
        /* Transition: '<S600>:3' */
        /* Transition: '<S600>:15' */
        (void)Rte_Write_VeIDCR_I_AC_Side_Curr_Value(LeIDCR_I_AC_Side_Curr);
        rtb_LeIDCR_b_AC_Side_CurrFA_out = false;

        /* Transition: '<S600>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S157>/VeIDCR_I_AC_Side_Curr' incorporates:
         *  Outport: '<Root>/VeIDCR_I_AC_Side_Curr'
         */
        /* Transition: '<S600>:4' */
        (void)Rte_Write_VeIDCR_I_AC_Side_Curr_Value(KeIDCR_K_Default309h_Value);
        rtb_LeIDCR_b_AC_Side_CurrFA_out = true;
    }

    /* End of Chart: '<S157>/PokeIDCR_I_AC_Side_CurrChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_I_AC_Side_Curr' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_I_APM_HV_Current(VAR(float32, AUTOMATIC)
    LeIDCR_I_APM_HV_Current, VAR(boolean, AUTOMATIC) LeIDCR_b_APM_HV_CurrentFA)
{
    boolean rtb_LeIDCR_b_APM_HV_CurrentFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_I_APM_HV_Current' */
    /* Chart: '<S158>/PokeIDCR_I_APM_HV_CurrentChrt' incorporates:
     *  SignalConversion generated from: '<S158>/LeIDCR_b_APM_HV_CurrentFA'
     */
    /* Gateway: PokeIDCR_I_APM_HV_Current/PokeIDCR_I_APM_HV_CurrentChrt */
    /* During: PokeIDCR_I_APM_HV_Current/PokeIDCR_I_APM_HV_CurrentChrt */
    /* Entry Internal: PokeIDCR_I_APM_HV_Current/PokeIDCR_I_APM_HV_CurrentChrt */
    /* Transition: '<S601>:2' */
    if (!LeIDCR_b_APM_HV_CurrentFA)
    {
        /* SignalConversion generated from: '<S158>/VeIDCR_I_APM_HV_Current' incorporates:
         *  Outport: '<Root>/VeIDCR_I_APM_HV_Current'
         *  SignalConversion generated from: '<S158>/LeIDCR_I_APM_HV_Current'
         */
        /* Transition: '<S601>:3' */
        /* Transition: '<S601>:15' */
        (void)Rte_Write_VeIDCR_I_APM_HV_Current_Value(LeIDCR_I_APM_HV_Current);
        rtb_LeIDCR_b_APM_HV_CurrentFA_out = false;

        /* Transition: '<S601>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S158>/VeIDCR_I_APM_HV_Current' incorporates:
         *  Outport: '<Root>/VeIDCR_I_APM_HV_Current'
         */
        /* Transition: '<S601>:4' */
        (void)Rte_Write_VeIDCR_I_APM_HV_Current_Value
            (KeIDCR_I_APM_HV_CurrentDflt);
        rtb_LeIDCR_b_APM_HV_CurrentFA_out = true;
    }

    /* End of Chart: '<S158>/PokeIDCR_I_APM_HV_CurrentChrt' */

    /* Outport: '<Root>/VeIDCR_b_APM_HV_CurrentFA' incorporates:
     *  SignalConversion generated from: '<S158>/VeIDCR_b_APM_HV_CurrentFA'
     */
    (void)Rte_Write_VeIDCR_b_APM_HV_CurrentFA_Value
        (rtb_LeIDCR_b_APM_HV_CurrentFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_I_APM_HV_Current' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_I_APM_LV_Current(VAR(float32, AUTOMATIC)
    LeIDCR_I_APM_LV_Current, VAR(boolean, AUTOMATIC) LeIDCR_b_APM_LV_CurrentFA)
{
    /* local block i/o variables */
    boolean rtb_LeIDCR_b_APM_LV_CurrentFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_I_APM_LV_Current' */
    /* Chart: '<S159>/PokeIDCR_I_APM_LV_CurrentChrt' incorporates:
     *  SignalConversion generated from: '<S159>/LeIDCR_I_APM_LV_Current'
     *  SignalConversion generated from: '<S159>/LeIDCR_b_APM_LV_CurrentFA'
     */
    /* Gateway: PokeIDCR_I_APM_LV_Current/PokeIDCR_I_APM_LV_CurrentChrt */
    /* During: PokeIDCR_I_APM_LV_Current/PokeIDCR_I_APM_LV_CurrentChrt */
    /* Entry Internal: PokeIDCR_I_APM_LV_Current/PokeIDCR_I_APM_LV_CurrentChrt */
    /* Transition: '<S602>:2' */
    if (!LeIDCR_b_APM_LV_CurrentFA)
    {
        /* Transition: '<S602>:3' */
        /* Transition: '<S602>:15' */
        IDCR_ac_B.LeIDCR_I_APM_LV_Current_out = LeIDCR_I_APM_LV_Current;
        rtb_LeIDCR_b_APM_LV_CurrentFA_out = false;

        /* Transition: '<S602>:18' */
    }
    else
    {
        /* Transition: '<S602>:4' */
        rtb_LeIDCR_b_APM_LV_CurrentFA_out = true;
    }

    /* End of Chart: '<S159>/PokeIDCR_I_APM_LV_CurrentChrt' */

    /* Outport: '<Root>/VeIDCR_I_APM_LV_Current' incorporates:
     *  SignalConversion generated from: '<S159>/VeIDCR_I_APM_LV_Current'
     */
    (void)Rte_Write_VeIDCR_I_APM_LV_Current_Value
        (IDCR_ac_B.LeIDCR_I_APM_LV_Current_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_I_APM_LV_Current' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_I_AcOutCurrent(VAR(float32, AUTOMATIC)
    LeIDCR_I_AcOutCurrent, VAR(boolean, AUTOMATIC) LeIDCR_b_AcOutCurrentFA)
{
    boolean rtb_LeIDCR_b_AcOutCurrentFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_I_AcOutCurrent' */
    /* Chart: '<S160>/PokeIDCR_I_AcOutCurrentChrt' incorporates:
     *  SignalConversion generated from: '<S160>/LeIDCR_f_ACOutFreq1'
     *  SignalConversion generated from: '<S160>/LeIDCR_f_ACOutFreq'
     */
    /* Gateway: PokeIDCR_I_AcOutCurrent/PokeIDCR_I_AcOutCurrentChrt */
    /* During: PokeIDCR_I_AcOutCurrent/PokeIDCR_I_AcOutCurrentChrt */
    /* Entry Internal: PokeIDCR_I_AcOutCurrent/PokeIDCR_I_AcOutCurrentChrt */
    /* Transition: '<S603>:22' */
    if (!LeIDCR_b_AcOutCurrentFA)
    {
        /* Transition: '<S603>:23' */
        /* Transition: '<S603>:27' */
        IDCR_ac_B.LeIDCR_I_AcOutCurrent_out = LeIDCR_I_AcOutCurrent;
        rtb_LeIDCR_b_AcOutCurrentFA_out = false;

        /* Transition: '<S603>:21' */
    }
    else
    {
        /* Transition: '<S603>:24' */
        rtb_LeIDCR_b_AcOutCurrentFA_out = true;
    }

    /* End of Chart: '<S160>/PokeIDCR_I_AcOutCurrentChrt' */

    /* Outport: '<Root>/VeIDCR_I_AcOutCurrent' incorporates:
     *  SignalConversion generated from: '<S160>/VeIDCR_I_AcOutCurrent'
     */
    (void)Rte_Write_VeIDCR_I_AcOutCurrent_Value
        (IDCR_ac_B.LeIDCR_I_AcOutCurrent_out);

    /* Outport: '<Root>/VeIDCR_b_AcOutCurrent_FA' incorporates:
     *  SignalConversion generated from: '<S160>/VeIDCR_b_AcOutCurrentFA'
     */
    (void)Rte_Write_VeIDCR_b_AcOutCurrent_FA_Value
        (rtb_LeIDCR_b_AcOutCurrentFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_I_AcOutCurrent' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_I_BattSide_Curr(VAR(float32, AUTOMATIC)
    LeIDCR_I_BattSide_Curr, VAR(boolean, AUTOMATIC) LeIDCR_b_BattSide_CurrFA)
{
    boolean rtb_LeIDCR_b_BattSide_CurrFA_out_n;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_I_BattSide_Curr' */
    /* Chart: '<S161>/PokeIDCR_I_BattSide_CurrChrt' incorporates:
     *  SignalConversion generated from: '<S161>/LeIDCR_b_BattSide_CurrFA'
     */
    /* Gateway: PokeIDCR_I_BattSide_Curr/PokeIDCR_I_BattSide_CurrChrt */
    /* During: PokeIDCR_I_BattSide_Curr/PokeIDCR_I_BattSide_CurrChrt */
    /* Entry Internal: PokeIDCR_I_BattSide_Curr/PokeIDCR_I_BattSide_CurrChrt */
    /* Transition: '<S604>:2' */
    if (!LeIDCR_b_BattSide_CurrFA)
    {
        /* SignalConversion generated from: '<S161>/VeIDCR_I_BattSide_Curr' incorporates:
         *  Outport: '<Root>/VeIDCR_I_BattSide_Curr'
         *  SignalConversion generated from: '<S161>/LeIDCR_I_BattSide_Curr'
         */
        /* Transition: '<S604>:3' */
        /* Transition: '<S604>:15' */
        (void)Rte_Write_VeIDCR_I_BattSide_Curr_Value(LeIDCR_I_BattSide_Curr);
        rtb_LeIDCR_b_BattSide_CurrFA_out_n = false;

        /* Transition: '<S604>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S161>/VeIDCR_I_BattSide_Curr' incorporates:
         *  Outport: '<Root>/VeIDCR_I_BattSide_Curr'
         */
        /* Transition: '<S604>:4' */
        (void)Rte_Write_VeIDCR_I_BattSide_Curr_Value(KeIDCR_K_Default309h_Value);
        rtb_LeIDCR_b_BattSide_CurrFA_out_n = true;
    }

    /* End of Chart: '<S161>/PokeIDCR_I_BattSide_CurrChrt' */

    /* Outport: '<Root>/VeIDCR_b_BattSide_CurrFA' incorporates:
     *  SignalConversion generated from: '<S161>/VeIDCR_b_BattSide_CurrFA'
     */
    (void)Rte_Write_VeIDCR_b_BattSide_CurrFA_Value
        (rtb_LeIDCR_b_BattSide_CurrFA_out_n);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_I_BattSide_Curr' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_I_ChrgCrntAvail(VAR(float32, AUTOMATIC)
    LeIDCR_I_ChrgCrntAvail, VAR(boolean, AUTOMATIC) LeIDCR_b_ChrgCrntAvailFA)
{
    boolean rtb_LeIDCR_b_ChrgCrntAvailFA_out_m;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_I_ChrgCrntAvail' */
    /* Chart: '<S162>/PokeIDCR_I_ChrgCrntAvailChrt' incorporates:
     *  SignalConversion generated from: '<S162>/LeIDCR_b_ChrgCrntAvailFA'
     */
    /* Gateway: PokeIDCR_I_ChrgCrntAvail/PokeIDCR_I_ChrgCrntAvailChrt */
    /* During: PokeIDCR_I_ChrgCrntAvail/PokeIDCR_I_ChrgCrntAvailChrt */
    /* Entry Internal: PokeIDCR_I_ChrgCrntAvail/PokeIDCR_I_ChrgCrntAvailChrt */
    /* Transition: '<S605>:2' */
    if (!LeIDCR_b_ChrgCrntAvailFA)
    {
        /* SignalConversion generated from: '<S162>/VeIDCR_I_ChrgCrntAvail' incorporates:
         *  Outport: '<Root>/VeIDCR_I_ChrgCrntAvail'
         *  SignalConversion generated from: '<S162>/LeIDCR_I_ChrgCrntAvail'
         */
        /* Transition: '<S605>:3' */
        /* Transition: '<S605>:15' */
        (void)Rte_Write_VeIDCR_I_ChrgCrntAvail_Value(LeIDCR_I_ChrgCrntAvail);
        rtb_LeIDCR_b_ChrgCrntAvailFA_out_m = false;

        /* Transition: '<S605>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S162>/VeIDCR_I_ChrgCrntAvail' incorporates:
         *  Outport: '<Root>/VeIDCR_I_ChrgCrntAvail'
         */
        /* Transition: '<S605>:4' */
        (void)Rte_Write_VeIDCR_I_ChrgCrntAvail_Value(KeIDCR_K_Default309h_Value);
        rtb_LeIDCR_b_ChrgCrntAvailFA_out_m = true;
    }

    /* End of Chart: '<S162>/PokeIDCR_I_ChrgCrntAvailChrt' */

    /* Outport: '<Root>/VeIDCR_b_ChrgCrntAvailFA' incorporates:
     *  SignalConversion generated from: '<S162>/VeIDCR_b_ChrgCrntAvailFA'
     */
    (void)Rte_Write_VeIDCR_b_ChrgCrntAvailFA_Value
        (rtb_LeIDCR_b_ChrgCrntAvailFA_out_m);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_I_ChrgCrntAvail' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_I_ChrgCurrent(VAR(float32, AUTOMATIC)
    LeIDCR_I_ChrgCurrent, VAR(boolean, AUTOMATIC) LeIDCR_b_ChrgCurrentFA)
{
    boolean rtb_LeIDCR_b_ChrgCurrentFA_out_n;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_I_ChrgCurrent' */
    /* Chart: '<S163>/PokeIDCR_I_ChrgCurrentChrt' incorporates:
     *  SignalConversion generated from: '<S163>/LeIDCR_b_ChrgCurrentFA'
     */
    /* Gateway: PokeIDCR_I_ChrgCurrent/PokeIDCR_I_ChrgCurrentChrt */
    /* During: PokeIDCR_I_ChrgCurrent/PokeIDCR_I_ChrgCurrentChrt */
    /* Entry Internal: PokeIDCR_I_ChrgCurrent/PokeIDCR_I_ChrgCurrentChrt */
    /* Transition: '<S606>:2' */
    if (!LeIDCR_b_ChrgCurrentFA)
    {
        /* SignalConversion generated from: '<S163>/VeIDCR_I_ChrgCurrent' incorporates:
         *  Outport: '<Root>/VeIDCR_I_ChrgCurrent'
         *  SignalConversion generated from: '<S163>/LeIDCR_I_ChrgCurrent'
         */
        /* Transition: '<S606>:3' */
        /* Transition: '<S606>:15' */
        (void)Rte_Write_VeIDCR_I_ChrgCurrent_Value(LeIDCR_I_ChrgCurrent);
        rtb_LeIDCR_b_ChrgCurrentFA_out_n = false;

        /* Transition: '<S606>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S163>/VeIDCR_I_ChrgCurrent' incorporates:
         *  Outport: '<Root>/VeIDCR_I_ChrgCurrent'
         */
        /* Transition: '<S606>:4' */
        (void)Rte_Write_VeIDCR_I_ChrgCurrent_Value(KeIDCR_K_Default3D0h_Value);
        rtb_LeIDCR_b_ChrgCurrentFA_out_n = true;
    }

    /* End of Chart: '<S163>/PokeIDCR_I_ChrgCurrentChrt' */

    /* Outport: '<Root>/VeIDCR_b_ChrgCurrent_FA' incorporates:
     *  SignalConversion generated from: '<S163>/VeIDCR_b_ChrgCurrentFA'
     */
    (void)Rte_Write_VeIDCR_b_ChrgCurrent_FA_Value
        (rtb_LeIDCR_b_ChrgCurrentFA_out_n);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_I_ChrgCurrent' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_I_DCInCurrent(VAR(float32, AUTOMATIC)
    LeIDCR_I_DCInCurrent, VAR(boolean, AUTOMATIC) LeIDCR_b_DCInCurrentFA)
{
    boolean rtb_LeIDCR_b_DCInCurrentFA_out_p;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_I_DCInCurrent' */
    /* Chart: '<S164>/PokeIDCR_I_DCInCurrentChrt' incorporates:
     *  SignalConversion generated from: '<S164>/LeIDCR_f_ACOutFreq1'
     *  SignalConversion generated from: '<S164>/LeIDCR_f_ACOutFreq'
     */
    /* Gateway: PokeIDCR_I_DCInCurrent/PokeIDCR_I_DCInCurrentChrt */
    /* During: PokeIDCR_I_DCInCurrent/PokeIDCR_I_DCInCurrentChrt */
    /* Entry Internal: PokeIDCR_I_DCInCurrent/PokeIDCR_I_DCInCurrentChrt */
    /* Transition: '<S607>:22' */
    if (!LeIDCR_b_DCInCurrentFA)
    {
        /* Transition: '<S607>:23' */
        /* Transition: '<S607>:27' */
        IDCR_ac_B.LeIDCR_I_DCInCurrent_out = LeIDCR_I_DCInCurrent;
        rtb_LeIDCR_b_DCInCurrentFA_out_p = false;

        /* Transition: '<S607>:21' */
    }
    else
    {
        /* Transition: '<S607>:24' */
        rtb_LeIDCR_b_DCInCurrentFA_out_p = true;
    }

    /* End of Chart: '<S164>/PokeIDCR_I_DCInCurrentChrt' */

    /* Outport: '<Root>/VeIDCR_I_DCInputCurrent' incorporates:
     *  SignalConversion generated from: '<S164>/VeIDCR_I_DCInCurrent'
     */
    (void)Rte_Write_VeIDCR_I_DCInputCurrent_Value
        (IDCR_ac_B.LeIDCR_I_DCInCurrent_out);

    /* Outport: '<Root>/VeIDCR_b_DCInputCurrent_FA' incorporates:
     *  SignalConversion generated from: '<S164>/VeIDCR_b_DCInCurrentFA'
     */
    (void)Rte_Write_VeIDCR_b_DCInputCurrent_FA_Value
        (rtb_LeIDCR_b_DCInCurrentFA_out_p);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_I_DCInCurrent' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_I_EVSECurr_RegTol(VAR(float32, AUTOMATIC)
    LeIDCR_I_EVSECurr_RegTol, VAR(boolean, AUTOMATIC) LeIDCR_b_EVSECurr_RegTolFA)
{
    boolean rtb_LeIDCR_b_EVSECurr_RegTolFA_out_m;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_I_EVSECurr_RegTol' */
    /* Chart: '<S165>/PokeIDCR_I_EVSECurr_RegTolChrt' incorporates:
     *  SignalConversion generated from: '<S165>/LeIDCR_I_EVSECurr_RegTol'
     *  SignalConversion generated from: '<S165>/LeIDCR_b_EVSECurr_RegTolFA'
     */
    /* Gateway: PokeIDCR_I_EVSECurr_RegTol/PokeIDCR_I_EVSECurr_RegTolChrt */
    /* During: PokeIDCR_I_EVSECurr_RegTol/PokeIDCR_I_EVSECurr_RegTolChrt */
    /* Entry Internal: PokeIDCR_I_EVSECurr_RegTol/PokeIDCR_I_EVSECurr_RegTolChrt */
    /* Transition: '<S608>:2' */
    if (!LeIDCR_b_EVSECurr_RegTolFA)
    {
        /* Transition: '<S608>:3' */
        /* Transition: '<S608>:15' */
        IDCR_ac_B.LeIDCR_I_EVSECurr_RegTol_out = LeIDCR_I_EVSECurr_RegTol;
        rtb_LeIDCR_b_EVSECurr_RegTolFA_out_m = false;

        /* Transition: '<S608>:18' */
    }
    else
    {
        /* Transition: '<S608>:4' */
        rtb_LeIDCR_b_EVSECurr_RegTolFA_out_m = true;
    }

    /* End of Chart: '<S165>/PokeIDCR_I_EVSECurr_RegTolChrt' */

    /* Outport: '<Root>/VeIDCR_I_EVSECurr_RegTol' incorporates:
     *  SignalConversion generated from: '<S165>/VeIDCR_I_EVSECurr_RegTol'
     */
    (void)Rte_Write_VeIDCR_I_EVSECurr_RegTol_Value
        (IDCR_ac_B.LeIDCR_I_EVSECurr_RegTol_out);

    /* Outport: '<Root>/VeIDCR_b_EVSECurr_RegTol_FA' incorporates:
     *  SignalConversion generated from: '<S165>/VeIDCR_b_EVSECurr_RegTolFA'
     */
    (void)Rte_Write_VeIDCR_b_EVSECurr_RegTol_FA_Value
        (rtb_LeIDCR_b_EVSECurr_RegTolFA_out_m);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_I_EVSECurr_RegTol' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_I_EVSEMaxCurrLmt(VAR(float32, AUTOMATIC)
    LeIDCR_I_EVSEMaxCurrLmt, VAR(boolean, AUTOMATIC) LeIDCR_b_EVSEMaxCurrLmtFA)
{
    boolean rtb_LeIDCR_b_EVSEMaxCurrLmtFA_out_n;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_I_EVSEMaxCurrLmt' */
    /* Chart: '<S166>/PokeIDCR_I_EVSEMaxCurrLmtChrt' incorporates:
     *  SignalConversion generated from: '<S166>/LeIDCR_I_EVSEMaxCurrLmt'
     *  SignalConversion generated from: '<S166>/LeIDCR_b_EVSEMaxCurrLmtFA'
     */
    /* Gateway: PokeIDCR_I_EVSEMaxCurrLmt/PokeIDCR_I_EVSEMaxCurrLmtChrt */
    /* During: PokeIDCR_I_EVSEMaxCurrLmt/PokeIDCR_I_EVSEMaxCurrLmtChrt */
    /* Entry Internal: PokeIDCR_I_EVSEMaxCurrLmt/PokeIDCR_I_EVSEMaxCurrLmtChrt */
    /* Transition: '<S609>:2' */
    if (!LeIDCR_b_EVSEMaxCurrLmtFA)
    {
        /* Transition: '<S609>:3' */
        /* Transition: '<S609>:15' */
        IDCR_ac_B.LeIDCR_I_EVSEMaxCurrLmt_out = LeIDCR_I_EVSEMaxCurrLmt;
        rtb_LeIDCR_b_EVSEMaxCurrLmtFA_out_n = false;

        /* Transition: '<S609>:18' */
    }
    else
    {
        /* Transition: '<S609>:4' */
        rtb_LeIDCR_b_EVSEMaxCurrLmtFA_out_n = true;
    }

    /* End of Chart: '<S166>/PokeIDCR_I_EVSEMaxCurrLmtChrt' */

    /* Outport: '<Root>/VeIDCR_I_EVSEMaxCurrLmt' incorporates:
     *  SignalConversion generated from: '<S166>/VeIDCR_I_EVSEMaxCurrLmt'
     */
    (void)Rte_Write_VeIDCR_I_EVSEMaxCurrLmt_Value
        (IDCR_ac_B.LeIDCR_I_EVSEMaxCurrLmt_out);

    /* Outport: '<Root>/VeIDCR_b_EVSEMaxCurrLmt_FA' incorporates:
     *  SignalConversion generated from: '<S166>/VeIDCR_b_EVSEMaxCurrLmtFA'
     */
    (void)Rte_Write_VeIDCR_b_EVSEMaxCurrLmt_FA_Value
        (rtb_LeIDCR_b_EVSEMaxCurrLmtFA_out_n);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_I_EVSEMaxCurrLmt' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_I_EVSEMinCurrLmt(VAR(float32, AUTOMATIC)
    LeIDCR_I_EVSEMinCurrLmt, VAR(boolean, AUTOMATIC) LeIDCR_b_EVSEMinCurrLmtFA)
{
    boolean rtb_LeIDCR_b_EVSEMinCurrLmtFA_out_b;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_I_EVSEMinCurrLmt' */
    /* Chart: '<S167>/PokeIDCR_I_EVSEMinCurrLmtChrt' incorporates:
     *  SignalConversion generated from: '<S167>/LeIDCR_I_EVSEMinCurrLmt'
     *  SignalConversion generated from: '<S167>/LeIDCR_b_EVSEMinCurrLmtFA'
     */
    /* Gateway: PokeIDCR_I_EVSEMinCurrLmt/PokeIDCR_I_EVSEMinCurrLmtChrt */
    /* During: PokeIDCR_I_EVSEMinCurrLmt/PokeIDCR_I_EVSEMinCurrLmtChrt */
    /* Entry Internal: PokeIDCR_I_EVSEMinCurrLmt/PokeIDCR_I_EVSEMinCurrLmtChrt */
    /* Transition: '<S610>:2' */
    if (!LeIDCR_b_EVSEMinCurrLmtFA)
    {
        /* Transition: '<S610>:3' */
        /* Transition: '<S610>:15' */
        IDCR_ac_B.LeIDCR_I_EVSEMinCurrLmt_out = LeIDCR_I_EVSEMinCurrLmt;
        rtb_LeIDCR_b_EVSEMinCurrLmtFA_out_b = false;

        /* Transition: '<S610>:18' */
    }
    else
    {
        /* Transition: '<S610>:4' */
        rtb_LeIDCR_b_EVSEMinCurrLmtFA_out_b = true;
    }

    /* End of Chart: '<S167>/PokeIDCR_I_EVSEMinCurrLmtChrt' */

    /* Outport: '<Root>/VeIDCR_I_EVSEMinCurrLmt' incorporates:
     *  SignalConversion generated from: '<S167>/VeIDCR_I_EVSEMinCurrLmt'
     */
    (void)Rte_Write_VeIDCR_I_EVSEMinCurrLmt_Value
        (IDCR_ac_B.LeIDCR_I_EVSEMinCurrLmt_out);

    /* Outport: '<Root>/VeIDCR_b_EVSEMinCurrLmt_FA' incorporates:
     *  SignalConversion generated from: '<S167>/VeIDCR_b_EVSEMinCurrLmtFA'
     */
    (void)Rte_Write_VeIDCR_b_EVSEMinCurrLmt_FA_Value
        (rtb_LeIDCR_b_EVSEMinCurrLmtFA_out_b);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_I_EVSEMinCurrLmt' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_I_EVSEOutputCurr(VAR(float32, AUTOMATIC)
    LeIDCR_I_EVSEOutputCurr, VAR(boolean, AUTOMATIC) LeIDCR_b_EVSEOutputCurrFA)
{
    boolean rtb_LeIDCR_b_EVSEOutputCurrFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_I_EVSEOutputCurr' */
    /* Chart: '<S168>/PokeIDCR_I_EVSEOutputCurrChrt' incorporates:
     *  SignalConversion generated from: '<S168>/LeIDCR_I_EVSEOutputCurr'
     *  SignalConversion generated from: '<S168>/LeIDCR_b_EVSEOutputCurrFA'
     */
    /* Gateway: PokeIDCR_I_EVSEOutputCurr/PokeIDCR_I_EVSEOutputCurrChrt */
    /* During: PokeIDCR_I_EVSEOutputCurr/PokeIDCR_I_EVSEOutputCurrChrt */
    /* Entry Internal: PokeIDCR_I_EVSEOutputCurr/PokeIDCR_I_EVSEOutputCurrChrt */
    /* Transition: '<S611>:2' */
    if (!LeIDCR_b_EVSEOutputCurrFA)
    {
        /* Transition: '<S611>:3' */
        /* Transition: '<S611>:15' */
        IDCR_ac_B.LeIDCR_I_EVSEOutputCurr_out = LeIDCR_I_EVSEOutputCurr;
        rtb_LeIDCR_b_EVSEOutputCurrFA_out = false;

        /* Transition: '<S611>:18' */
    }
    else
    {
        /* Transition: '<S611>:4' */
        rtb_LeIDCR_b_EVSEOutputCurrFA_out = true;
    }

    /* End of Chart: '<S168>/PokeIDCR_I_EVSEOutputCurrChrt' */

    /* Outport: '<Root>/VeIDCR_I_EVSEOutputCurr' incorporates:
     *  SignalConversion generated from: '<S168>/VeIDCR_I_EVSEOutputCurr'
     */
    (void)Rte_Write_VeIDCR_I_EVSEOutputCurr_Value
        (IDCR_ac_B.LeIDCR_I_EVSEOutputCurr_out);

    /* Outport: '<Root>/VeIDCR_b_EVSEOutputCurr_FA' incorporates:
     *  SignalConversion generated from: '<S168>/VeIDCR_b_EVSEOutputCurrFA'
     */
    (void)Rte_Write_VeIDCR_b_EVSEOutputCurr_FA_Value
        (rtb_LeIDCR_b_EVSEOutputCurrFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_I_EVSEOutputCurr' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_I_EVSEPeakCurrRip(VAR(float32, AUTOMATIC)
    LeIDCR_I_EVSEPeakCurrRip, VAR(boolean, AUTOMATIC) LeIDCR_b_EVSEPeakCurrRipFA)
{
    boolean rtb_LeIDCR_b_EVSEPeakCurrRipFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_I_EVSEPeakCurrRip' */
    /* Chart: '<S169>/PokeIDCR_I_EVSEPeakCurrRipChrt' incorporates:
     *  SignalConversion generated from: '<S169>/LeIDCR_I_EVSEPeakCurrRip'
     *  SignalConversion generated from: '<S169>/LeIDCR_b_EVSEPeakCurrRipFA'
     */
    /* Gateway: PokeIDCR_I_EVSEPeakCurrRip/PokeIDCR_I_EVSEPeakCurrRipChrt */
    /* During: PokeIDCR_I_EVSEPeakCurrRip/PokeIDCR_I_EVSEPeakCurrRipChrt */
    /* Entry Internal: PokeIDCR_I_EVSEPeakCurrRip/PokeIDCR_I_EVSEPeakCurrRipChrt */
    /* Transition: '<S612>:2' */
    if (!LeIDCR_b_EVSEPeakCurrRipFA)
    {
        /* Transition: '<S612>:3' */
        /* Transition: '<S612>:15' */
        IDCR_ac_B.LeIDCR_I_EVSEPeakCurrRip_out = LeIDCR_I_EVSEPeakCurrRip;
        rtb_LeIDCR_b_EVSEPeakCurrRipFA_out = false;

        /* Transition: '<S612>:18' */
    }
    else
    {
        /* Transition: '<S612>:4' */
        rtb_LeIDCR_b_EVSEPeakCurrRipFA_out = true;
    }

    /* End of Chart: '<S169>/PokeIDCR_I_EVSEPeakCurrRipChrt' */

    /* Outport: '<Root>/VeIDCR_I_EVSEPeakCurrRip' incorporates:
     *  SignalConversion generated from: '<S169>/VeIDCR_I_EVSEPeakCurrRip'
     */
    (void)Rte_Write_VeIDCR_I_EVSEPeakCurrRip_Value
        (IDCR_ac_B.LeIDCR_I_EVSEPeakCurrRip_out);

    /* Outport: '<Root>/VeIDCR_b_EVSEPeakCurrRip_FA' incorporates:
     *  SignalConversion generated from: '<S169>/VeIDCR_b_EVSEPeakCurrRipFA'
     */
    (void)Rte_Write_VeIDCR_b_EVSEPeakCurrRip_FA_Value
        (rtb_LeIDCR_b_EVSEPeakCurrRipFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_I_EVSEPeakCurrRip' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_I_IBS_I_Batt(VAR(float32, AUTOMATIC)
    LeIDCR_I_IBS_I_Batt, VAR(boolean, AUTOMATIC) LeIDCR_b_IBS_b_BattFA)
{
    boolean rtb_LeIDCR_b_IBS_b_BattFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_I_IBS_I_Batt' */
    /* Chart: '<S170>/PokeIDCR_I_IBS_I_BattChrt' incorporates:
     *  SignalConversion generated from: '<S170>/LeIDCR_I_IBS_I_Batt'
     *  SignalConversion generated from: '<S170>/LeIDCR_b_IBS_b_BattFA'
     */
    /* Gateway: PokeIDCR_I_IBS_I_Batt/PokeIDCR_I_IBS_I_BattChrt */
    /* During: PokeIDCR_I_IBS_I_Batt/PokeIDCR_I_IBS_I_BattChrt */
    /* Entry Internal: PokeIDCR_I_IBS_I_Batt/PokeIDCR_I_IBS_I_BattChrt */
    /* Transition: '<S613>:2' */
    if (!LeIDCR_b_IBS_b_BattFA)
    {
        /* Transition: '<S613>:3' */
        /* Transition: '<S613>:15' */
        IDCR_ac_B.LeIDCR_I_IBS_I_Batt_out = LeIDCR_I_IBS_I_Batt;
        rtb_LeIDCR_b_IBS_b_BattFA_out = false;
        IDCR_ac_B.LeIDCR_b_IBS_b_BattSgnl_Rcvd = true;

        /* Transition: '<S613>:18' */
    }
    else
    {
        /* Transition: '<S613>:4' */
        rtb_LeIDCR_b_IBS_b_BattFA_out = true;
    }

    /* End of Chart: '<S170>/PokeIDCR_I_IBS_I_BattChrt' */

    /* Merge: '<Root>/Merge_25' incorporates:
     *  SignalConversion generated from: '<S170>/VeIDCR_I_IBS_I_Batt_write'
     * */
    Rte_IrvWrite_PokeIDCR_I_IBS_I_Batt_IBS_I_Batt_Init_write_IRV
        (IDCR_ac_B.LeIDCR_I_IBS_I_Batt_out);

    /* Merge: '<Root>/Merge_26' incorporates:
     *  SignalConversion generated from: '<S170>/VeIDCR_b_IBS_b_BattFA_write'
     * */
    Rte_IrvWrite_PokeIDCR_I_IBS_I_Batt_VeIDCR_b_IBS_b_BattFA_write_IRV
        (rtb_LeIDCR_b_IBS_b_BattFA_out);

    /* Merge: '<Root>/Merge_27' incorporates:
     *  SignalConversion generated from: '<S170>/VeIDCR_b_IBS_b_BattSgnl_Rcvd_write'
     * */
    Rte_IrvWrite_PokeIDCR_I_IBS_I_Batt_VeIDCR_b_IBS_b_BattSgnl_Rcvd_write_IRV
        (IDCR_ac_B.LeIDCR_b_IBS_b_BattSgnl_Rcvd);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_I_IBS_I_Batt' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_I_IBS_I_Batt_2(VAR(float32, AUTOMATIC)
    LeIDCR_I_IBS_I_Batt_2, VAR(boolean, AUTOMATIC) LeIDCR_b_IBS_b_Batt_2FA)
{
    boolean rtb_LeIDCR_b_IBS_b_Batt_2FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_I_IBS_I_Batt_2' */
    /* Chart: '<S171>/PokeIDCR_I_IBS_I_Batt_2Chrt' incorporates:
     *  SignalConversion generated from: '<S171>/LeIDCR_I_IBS_I_Batt_2'
     *  SignalConversion generated from: '<S171>/LeIDCR_b_IBS_b_Batt_2FA'
     */
    /* Gateway: PokeIDCR_I_IBS_I_Batt_2/PokeIDCR_I_IBS_I_Batt_2Chrt */
    /* During: PokeIDCR_I_IBS_I_Batt_2/PokeIDCR_I_IBS_I_Batt_2Chrt */
    /* Entry Internal: PokeIDCR_I_IBS_I_Batt_2/PokeIDCR_I_IBS_I_Batt_2Chrt */
    /* Transition: '<S614>:2' */
    if (!LeIDCR_b_IBS_b_Batt_2FA)
    {
        /* Transition: '<S614>:3' */
        /* Transition: '<S614>:15' */
        IDCR_ac_B.LeIDCR_I_IBS_I_Batt_2_out = LeIDCR_I_IBS_I_Batt_2;
        rtb_LeIDCR_b_IBS_b_Batt_2FA_out = false;
        IDCR_ac_B.LeIDCR_b_IBS_b_Batt_2Sgnl_Rcvd = true;

        /* Transition: '<S614>:18' */
    }
    else
    {
        /* Transition: '<S614>:4' */
        rtb_LeIDCR_b_IBS_b_Batt_2FA_out = true;
    }

    /* End of Chart: '<S171>/PokeIDCR_I_IBS_I_Batt_2Chrt' */

    /* Merge: '<Root>/Merge_37' incorporates:
     *  SignalConversion generated from: '<S171>/VeIDCR_I_IBS_I_Batt_2_write'
     * */
    Rte_IrvWrite_PokeIDCR_I_IBS_I_Batt_2_IBS_I_Batt_2_Init_write_IRV
        (IDCR_ac_B.LeIDCR_I_IBS_I_Batt_2_out);

    /* Merge: '<Root>/Merge_38' incorporates:
     *  SignalConversion generated from: '<S171>/VeIDCR_b_IBS_b_Batt_2FA_write'
     * */
    Rte_IrvWrite_PokeIDCR_I_IBS_I_Batt_2_VeIDCR_b_IBS_b_Batt_2FA_write_IRV
        (rtb_LeIDCR_b_IBS_b_Batt_2FA_out);

    /* Merge: '<Root>/Merge_39' incorporates:
     *  SignalConversion generated from: '<S171>/VeIDCR_b_IBS_b_Batt_2Sgnl_Rcvd_write'
     * */
    Rte_IrvWrite_PokeIDCR_I_IBS_I_Batt_2_VeIDCR_b_IBS_b_Batt_2Sgnl_Rcvd_write_IRV
        (IDCR_ac_B.LeIDCR_b_IBS_b_Batt_2Sgnl_Rcvd);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_I_IBS_I_Batt_2' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_I_IdcHvSetPFdbk(VAR(float32, AUTOMATIC)
    LeIDCR_I_IdcHvSetPFdbk, VAR(boolean, AUTOMATIC) LeIDCR_b_IdcHvSetPFdbkFA)
{
    /* local block i/o variables */
    boolean rtb_LeIDCR_b_IdcHvSetPFdbkFA_out;
    UNUSED_PARAMETER(LeIDCR_I_IdcHvSetPFdbk);

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_I_IdcHvSetPFdbk' */
    /* Chart: '<S172>/PokeIDCR_I_IdcHvSetPFdbkChrt' incorporates:
     *  SignalConversion generated from: '<S172>/LeIDCR_b_IdcHvSetPFdbkFA'
     */
    /* Gateway: PokeIDCR_I_IdcHvSetPFdbk/PokeIDCR_I_IdcHvSetPFdbkChrt */
    /* During: PokeIDCR_I_IdcHvSetPFdbk/PokeIDCR_I_IdcHvSetPFdbkChrt */
    /* Entry Internal: PokeIDCR_I_IdcHvSetPFdbk/PokeIDCR_I_IdcHvSetPFdbkChrt */
    /* Transition: '<S615>:2' */
    if (!LeIDCR_b_IdcHvSetPFdbkFA)
    {
        /* Transition: '<S615>:3' */
        /* Transition: '<S615>:15' */
        rtb_LeIDCR_b_IdcHvSetPFdbkFA_out = false;

        /* Transition: '<S615>:18' */
    }
    else
    {
        /* Transition: '<S615>:4' */
        rtb_LeIDCR_b_IdcHvSetPFdbkFA_out = true;
    }

    /* End of Chart: '<S172>/PokeIDCR_I_IdcHvSetPFdbkChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_I_IdcHvSetPFdbk' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_I_J1772InputCrntAval(VAR(float32, AUTOMATIC)
    LeIDCR_I_J1772InputCrntAval, VAR(boolean, AUTOMATIC)
    LeIDCR_b_J1772InputCrntAvalFA)
{
    boolean rtb_LeIDCR_b_J1772InputCrntAvalFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_I_J1772InputCrntAval' */
    /* Chart: '<S173>/PokeIDCR_I_J1772InputCrntAvalChrt' incorporates:
     *  SignalConversion generated from: '<S173>/LeIDCR_b_J1772InputCrntAvalFA'
     */
    /* Gateway: PokeIDCR_I_J1772InputCrntAval/PokeIDCR_I_J1772InputCrntAvalChrt */
    /* During: PokeIDCR_I_J1772InputCrntAval/PokeIDCR_I_J1772InputCrntAvalChrt */
    /* Entry Internal: PokeIDCR_I_J1772InputCrntAval/PokeIDCR_I_J1772InputCrntAvalChrt */
    /* Transition: '<S616>:2' */
    if (!LeIDCR_b_J1772InputCrntAvalFA)
    {
        /* SignalConversion generated from: '<S173>/VeIDCR_I_J1772InputCrntAval' incorporates:
         *  Outport: '<Root>/VeIDCR_I_J1772InputCrntAval'
         *  SignalConversion generated from: '<S173>/LeIDCR_I_J1772InputCrntAval'
         */
        /* Transition: '<S616>:3' */
        /* Transition: '<S616>:15' */
        (void)Rte_Write_VeIDCR_I_J1772InputCrntAval_Value
            (LeIDCR_I_J1772InputCrntAval);
        rtb_LeIDCR_b_J1772InputCrntAvalFA_out = false;

        /* Transition: '<S616>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S173>/VeIDCR_I_J1772InputCrntAval' incorporates:
         *  Outport: '<Root>/VeIDCR_I_J1772InputCrntAval'
         */
        /* Transition: '<S616>:4' */
        (void)Rte_Write_VeIDCR_I_J1772InputCrntAval_Value
            (KeIDCR_K_Default3CEh_Value);
        rtb_LeIDCR_b_J1772InputCrntAvalFA_out = true;
    }

    /* End of Chart: '<S173>/PokeIDCR_I_J1772InputCrntAvalChrt' */

    /* Outport: '<Root>/VeIDCR_b_J1772InputCrntAvalFA' incorporates:
     *  SignalConversion generated from: '<S173>/VeIDCR_b_J1772InputCrntAvalFA'
     */
    (void)Rte_Write_VeIDCR_b_J1772InputCrntAvalFA_Value
        (rtb_LeIDCR_b_J1772InputCrntAvalFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_I_J1772InputCrntAval' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_I_V2L_DischargeCurrent(VAR(float32, AUTOMATIC)
    LeIDCR_I_V2L_DischargeCurrent, VAR(boolean, AUTOMATIC)
    LeIDCR_b_V2L_DischargeCurrentFA)
{
    boolean rtb_LeIDCR_b_V2L_DischargeCurrentFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_I_V2L_DischargeCurrent' */
    /* Chart: '<S174>/PokeIDCR_I_V2L_DischargeCurrentChrt' incorporates:
     *  SignalConversion generated from: '<S174>/LeIDCR_I_V2L_DischargeCurrent'
     *  SignalConversion generated from: '<S174>/LeIDCR_b_V2L_DischargeCurrentFA'
     */
    /* Gateway: PokeIDCR_I_V2L_DischargeCurrent/PokeIDCR_I_V2L_DischargeCurrentChrt */
    /* During: PokeIDCR_I_V2L_DischargeCurrent/PokeIDCR_I_V2L_DischargeCurrentChrt */
    /* Entry Internal: PokeIDCR_I_V2L_DischargeCurrent/PokeIDCR_I_V2L_DischargeCurrentChrt */
    /* Transition: '<S617>:2' */
    if (!LeIDCR_b_V2L_DischargeCurrentFA)
    {
        /* Transition: '<S617>:3' */
        /* Transition: '<S617>:15' */
        IDCR_ac_B.LeIDCR_I_V2L_DischargeCurrent_out =
            LeIDCR_I_V2L_DischargeCurrent;
        rtb_LeIDCR_b_V2L_DischargeCurrentFA_out = false;

        /* Transition: '<S617>:18' */
    }
    else
    {
        /* Transition: '<S617>:4' */
        rtb_LeIDCR_b_V2L_DischargeCurrentFA_out = true;
    }

    /* End of Chart: '<S174>/PokeIDCR_I_V2L_DischargeCurrentChrt' */

    /* Outport: '<Root>/VeIDCR_I_V2L_DischargeCurrent' incorporates:
     *  SignalConversion generated from: '<S174>/VeIDCR_I_V2L_DischargeCurrent'
     */
    (void)Rte_Write_VeIDCR_I_V2L_DischargeCurrent_Value
        (IDCR_ac_B.LeIDCR_I_V2L_DischargeCurrent_out);

    /* Outport: '<Root>/VeIDCR_b_V2L_DischargeCurrentFA' incorporates:
     *  SignalConversion generated from: '<S174>/VeIDCR_b_V2L_DischargeCurrentFA'
     */
    (void)Rte_Write_VeIDCR_b_V2L_DischargeCurrentFA_Value
        (rtb_LeIDCR_b_V2L_DischargeCurrentFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_I_V2L_DischargeCurrent' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_I_V2XInCurrent(VAR(float32, AUTOMATIC)
    LeIDCR_I_V2XInCurrent, VAR(boolean, AUTOMATIC) LeIDCR_b_V2XInCurrentFA)
{
    boolean rtb_LeIDCR_b_V2XInCurrentFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_I_V2XInCurrent' */
    /* Chart: '<S175>/PokeIDCR_I_V2XInCurrentChrt' incorporates:
     *  SignalConversion generated from: '<S175>/LeIDCR_f_ACOutFreq1'
     *  SignalConversion generated from: '<S175>/LeIDCR_f_ACOutFreq'
     */
    /* Gateway: PokeIDCR_I_V2XInCurrent/PokeIDCR_I_V2XInCurrentChrt */
    /* During: PokeIDCR_I_V2XInCurrent/PokeIDCR_I_V2XInCurrentChrt */
    /* Entry Internal: PokeIDCR_I_V2XInCurrent/PokeIDCR_I_V2XInCurrentChrt */
    /* Transition: '<S618>:22' */
    if (!LeIDCR_b_V2XInCurrentFA)
    {
        /* Transition: '<S618>:23' */
        /* Transition: '<S618>:27' */
        IDCR_ac_B.LeIDCR_I_V2XInCurrent_out = LeIDCR_I_V2XInCurrent;
        rtb_LeIDCR_b_V2XInCurrentFA_out = false;

        /* Transition: '<S618>:21' */
    }
    else
    {
        /* Transition: '<S618>:24' */
        rtb_LeIDCR_b_V2XInCurrentFA_out = true;
    }

    /* End of Chart: '<S175>/PokeIDCR_I_V2XInCurrentChrt' */

    /* Outport: '<Root>/VeIDCR_I_V2X_InputCurrent' incorporates:
     *  SignalConversion generated from: '<S175>/VeIDCR_I_V2XInCurrent'
     */
    (void)Rte_Write_VeIDCR_I_V2X_InputCurrent_Value
        (IDCR_ac_B.LeIDCR_I_V2XInCurrent_out);

    /* Outport: '<Root>/VeIDCR_b_V2X_InputCurrent_FA' incorporates:
     *  SignalConversion generated from: '<S175>/VeIDCR_b_V2XInCurrentFA'
     */
    (void)Rte_Write_VeIDCR_b_V2X_InputCurrent_FA_Value
        (rtb_LeIDCR_b_V2XInCurrentFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_I_V2XInCurrent' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_K_Service_ID(VAR(sint16, AUTOMATIC)
    LeIDCR_K_Service_ID)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_K_Service_ID' */
    /* Outport: '<Root>/VeIDCR_K_Service_ID' incorporates:
     *  Chart: '<S176>/PokeIDCR_K_Service_IDChrt'
     *  SignalConversion generated from: '<S176>/VeIDCR_K_Service_ID'
     *  SignalConversion generated from: '<S176>/LeIDCR_K_Service_ID'
     */
    /* Gateway: PokeIDCR_K_Service_ID/PokeIDCR_K_Service_IDChrt */
    /* During: PokeIDCR_K_Service_ID/PokeIDCR_K_Service_IDChrt */
    /* Entry Internal: PokeIDCR_K_Service_ID/PokeIDCR_K_Service_IDChrt */
    /* Transition: '<S619>:2' */
    (void)Rte_Write_VeIDCR_K_Service_ID_Value((uint16)LeIDCR_K_Service_ID);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_K_Service_ID' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_P_APM_DeratingPower(VAR(float32, AUTOMATIC)
    LeIDCR_P_APM_DeratingPower)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_P_APM_DeratingPower' */
    /* Outport: '<Root>/VeIDCR_P_APM_DeratePwr' incorporates:
     *  SignalConversion generated from: '<S177>/VeIDCR_P_APM_DeratingPower'
     *  SignalConversion generated from: '<S177>/LeIDCR_P_APM_DeratingPower'
     */
    /* Gateway: PokeIDCR_P_APM_DeratingPower/PokeIDCR_P_APM_DeratingPowerChrt */
    /* During: PokeIDCR_P_APM_DeratingPower/PokeIDCR_P_APM_DeratingPowerChrt */
    /* Entry Internal: PokeIDCR_P_APM_DeratingPower/PokeIDCR_P_APM_DeratingPowerChrt */
    /* Transition: '<S620>:2' */
    (void)Rte_Write_VeIDCR_P_APM_DeratePwr_Value(LeIDCR_P_APM_DeratingPower);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_P_APM_DeratingPower' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_P_APM_InputPower(VAR(float32, AUTOMATIC)
    LeIDCR_P_APM_InputPower, VAR(boolean, AUTOMATIC) LeIDCR_b_APM_InputPowerFA)
{
    /* local block i/o variables */
    boolean rtb_LeIDCR_b_APM_InputPowerFA_out;
    UNUSED_PARAMETER(LeIDCR_P_APM_InputPower);

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_P_APM_InputPower' */
    /* Chart: '<S178>/PokeIDCR_P_APM_InputPowerChrt' incorporates:
     *  SignalConversion generated from: '<S178>/LeIDCR_b_APM_InputPowerFA'
     */
    /* Gateway: PokeIDCR_P_APM_InputPower/PokeIDCR_P_APM_InputPowerChrt */
    /* During: PokeIDCR_P_APM_InputPower/PokeIDCR_P_APM_InputPowerChrt */
    /* Entry Internal: PokeIDCR_P_APM_InputPower/PokeIDCR_P_APM_InputPowerChrt */
    /* Transition: '<S621>:2' */
    if (!LeIDCR_b_APM_InputPowerFA)
    {
        /* Transition: '<S621>:3' */
        /* Transition: '<S621>:15' */
        rtb_LeIDCR_b_APM_InputPowerFA_out = false;

        /* Transition: '<S621>:18' */
    }
    else
    {
        /* Transition: '<S621>:4' */
        rtb_LeIDCR_b_APM_InputPowerFA_out = true;
    }

    /* End of Chart: '<S178>/PokeIDCR_P_APM_InputPowerChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_P_APM_InputPower' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_P_APM_OutputPower(VAR(float32, AUTOMATIC)
    LeIDCR_P_APM_OutputPower, VAR(boolean, AUTOMATIC) LeIDCR_b_APM_OutputPowerFA)
{
    /* local block i/o variables */
    boolean rtb_LeIDCR_b_APM_OutputPowerFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_P_APM_OutputPower' */
    /* Chart: '<S179>/PokeIDCR_P_APM_OutputPowerChrt' incorporates:
     *  SignalConversion generated from: '<S179>/LeIDCR_P_APM_OutputPower'
     *  SignalConversion generated from: '<S179>/LeIDCR_b_APM_OutputPowerFA'
     */
    /* Gateway: PokeIDCR_P_APM_OutputPower/PokeIDCR_P_APM_OutputPowerChrt */
    /* During: PokeIDCR_P_APM_OutputPower/PokeIDCR_P_APM_OutputPowerChrt */
    /* Entry Internal: PokeIDCR_P_APM_OutputPower/PokeIDCR_P_APM_OutputPowerChrt */
    /* Transition: '<S622>:2' */
    if (!LeIDCR_b_APM_OutputPowerFA)
    {
        /* Transition: '<S622>:3' */
        /* Transition: '<S622>:15' */
        IDCR_ac_B.LeIDCR_P_APM_OutputPower_out = LeIDCR_P_APM_OutputPower;
        rtb_LeIDCR_b_APM_OutputPowerFA_out = false;

        /* Transition: '<S622>:18' */
    }
    else
    {
        /* Transition: '<S622>:4' */
        rtb_LeIDCR_b_APM_OutputPowerFA_out = true;
    }

    /* End of Chart: '<S179>/PokeIDCR_P_APM_OutputPowerChrt' */

    /* Outport: '<Root>/VeIDCR_P_APM_OutputPwr' incorporates:
     *  SignalConversion generated from: '<S179>/VeIDCR_P_APM_OutputPower'
     */
    (void)Rte_Write_VeIDCR_P_APM_OutputPwr_Value
        (IDCR_ac_B.LeIDCR_P_APM_OutputPower_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_P_APM_OutputPower' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_P_APM_PwrLoss(VAR(float32, AUTOMATIC)
    LeIDCR_P_APM_PwrLoss, VAR(boolean, AUTOMATIC) LeIDCR_b_APM_PwrLossFA)
{
    /* local block i/o variables */
    boolean rtb_LeIDCR_b_APM_PwrLossFA_out;
    UNUSED_PARAMETER(LeIDCR_P_APM_PwrLoss);

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_P_APM_PwrLoss' */
    /* Chart: '<S180>/PokeIDCR_P_APM_PwrLossChrt' incorporates:
     *  SignalConversion generated from: '<S180>/LeIDCR_b_APM_PwrLossFA'
     */
    /* Gateway: PokeIDCR_P_APM_PwrLoss/PokeIDCR_P_APM_PwrLossChrt */
    /* During: PokeIDCR_P_APM_PwrLoss/PokeIDCR_P_APM_PwrLossChrt */
    /* Entry Internal: PokeIDCR_P_APM_PwrLoss/PokeIDCR_P_APM_PwrLossChrt */
    /* Transition: '<S623>:2' */
    if (!LeIDCR_b_APM_PwrLossFA)
    {
        /* Transition: '<S623>:3' */
        /* Transition: '<S623>:15' */
        rtb_LeIDCR_b_APM_PwrLossFA_out = false;

        /* Transition: '<S623>:18' */
    }
    else
    {
        /* Transition: '<S623>:4' */
        rtb_LeIDCR_b_APM_PwrLossFA_out = true;
    }

    /* End of Chart: '<S180>/PokeIDCR_P_APM_PwrLossChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_P_APM_PwrLoss' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_P_AvailablePower(VAR(float32, AUTOMATIC)
    LeIDCR_P_AvailablePower, VAR(boolean, AUTOMATIC) LeIDCR_b_AvailablePowerFA)
{
    boolean rtb_LeIDCR_b_AvailablePowerFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_P_AvailablePower' */
    /* Chart: '<S181>/PokeIDCR_P_AvailablePowerChrt' incorporates:
     *  SignalConversion generated from: '<S181>/LeIDCR_f_ACOutFreq1'
     *  SignalConversion generated from: '<S181>/LeIDCR_f_ACOutFreq'
     */
    /* Gateway: PokeIDCR_P_AvailablePower/PokeIDCR_P_AvailablePowerChrt */
    /* During: PokeIDCR_P_AvailablePower/PokeIDCR_P_AvailablePowerChrt */
    /* Entry Internal: PokeIDCR_P_AvailablePower/PokeIDCR_P_AvailablePowerChrt */
    /* Transition: '<S624>:22' */
    if (!LeIDCR_b_AvailablePowerFA)
    {
        /* Transition: '<S624>:23' */
        /* Transition: '<S624>:27' */
        IDCR_ac_B.LeIDCR_P_AvailablePower_out = LeIDCR_P_AvailablePower;
        rtb_LeIDCR_b_AvailablePowerFA_out = false;

        /* Transition: '<S624>:21' */
    }
    else
    {
        /* Transition: '<S624>:24' */
        rtb_LeIDCR_b_AvailablePowerFA_out = true;
    }

    /* End of Chart: '<S181>/PokeIDCR_P_AvailablePowerChrt' */

    /* Outport: '<Root>/VeIDCR_P_AvailablePower' incorporates:
     *  SignalConversion generated from: '<S181>/VeIDCR_P_AvailablePower'
     */
    (void)Rte_Write_VeIDCR_P_AvailablePower_Value
        (IDCR_ac_B.LeIDCR_P_AvailablePower_out);

    /* Outport: '<Root>/VeIDCR_b_AvailablePower_FA' incorporates:
     *  SignalConversion generated from: '<S181>/VeIDCR_b_AvailablePowerFA'
     */
    (void)Rte_Write_VeIDCR_b_AvailablePower_FA_Value
        (rtb_LeIDCR_b_AvailablePowerFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_P_AvailablePower' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_P_EVSEMaxPwrLmt(VAR(float32, AUTOMATIC)
    LeIDCR_P_EVSEMaxPwrLmt, VAR(boolean, AUTOMATIC) LeIDCR_b_EVSEMaxPwrLmtFA)
{
    boolean rtb_LeIDCR_b_EVSEMaxPwrLmtFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_P_EVSEMaxPwrLmt' */
    /* Chart: '<S182>/PokeIDCR_P_EVSEMaxPwrLmtChrt' incorporates:
     *  SignalConversion generated from: '<S182>/LeIDCR_P_EVSEMaxPwrLmt'
     *  SignalConversion generated from: '<S182>/LeIDCR_b_EVSEMaxPwrLmtFA'
     */
    /* Gateway: PokeIDCR_P_EVSEMaxPwrLmt/PokeIDCR_P_EVSEMaxPwrLmtChrt */
    /* During: PokeIDCR_P_EVSEMaxPwrLmt/PokeIDCR_P_EVSEMaxPwrLmtChrt */
    /* Entry Internal: PokeIDCR_P_EVSEMaxPwrLmt/PokeIDCR_P_EVSEMaxPwrLmtChrt */
    /* Transition: '<S625>:2' */
    if (!LeIDCR_b_EVSEMaxPwrLmtFA)
    {
        /* Transition: '<S625>:3' */
        /* Transition: '<S625>:15' */
        IDCR_ac_B.LeIDCR_P_EVSEMaxPwrLmt_out = LeIDCR_P_EVSEMaxPwrLmt;
        rtb_LeIDCR_b_EVSEMaxPwrLmtFA_out = false;

        /* Transition: '<S625>:18' */
    }
    else
    {
        /* Transition: '<S625>:4' */
        rtb_LeIDCR_b_EVSEMaxPwrLmtFA_out = true;
    }

    /* End of Chart: '<S182>/PokeIDCR_P_EVSEMaxPwrLmtChrt' */

    /* Outport: '<Root>/VeIDCR_P_EVSEMaxPwrLmt' incorporates:
     *  SignalConversion generated from: '<S182>/VeIDCR_P_EVSEMaxPwrLmt'
     */
    (void)Rte_Write_VeIDCR_P_EVSEMaxPwrLmt_Value
        (IDCR_ac_B.LeIDCR_P_EVSEMaxPwrLmt_out);

    /* Outport: '<Root>/VeIDCR_b_EVSEMaxPwrLmt_FA' incorporates:
     *  SignalConversion generated from: '<S182>/VeIDCR_b_EVSEMaxPwrLmtFA'
     */
    (void)Rte_Write_VeIDCR_b_EVSEMaxPwrLmt_FA_Value
        (rtb_LeIDCR_b_EVSEMaxPwrLmtFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_P_EVSEMaxPwrLmt' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_Pct_GenRgSPDtyCycReq(VAR(float32, AUTOMATIC)
    LeIDCR_Pct_GenRgSPDtyCycReq)
{
    /* local block i/o variables */
    float32 rtb_LeIDCR_Pct_GenRgSPDtyCycReq_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_Pct_GenRgSPDtyCycReq' */
    /* Chart: '<S183>/PokeIDCR_Pct_GenRgSPDtyCycReqChrt' incorporates:
     *  SignalConversion generated from: '<S183>/LeIDCR_Pct_GenRgSPDtyCycReq'
     */
    /* Gateway: PokeIDCR_Pct_GenRgSPDtyCycReq/PokeIDCR_Pct_GenRgSPDtyCycReqChrt */
    /* During: PokeIDCR_Pct_GenRgSPDtyCycReq/PokeIDCR_Pct_GenRgSPDtyCycReqChrt */
    /* Entry Internal: PokeIDCR_Pct_GenRgSPDtyCycReq/PokeIDCR_Pct_GenRgSPDtyCycReqChrt */
    /* Transition: '<S626>:2' */
    rtb_LeIDCR_Pct_GenRgSPDtyCycReq_out = LeIDCR_Pct_GenRgSPDtyCycReq;

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_Pct_GenRgSPDtyCycReq' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_Pct_IBS_BattSOC(VAR(float32, AUTOMATIC)
    LeIDCR_Pct_IBS_BattSOC, VAR(boolean, AUTOMATIC) LeIDCR_b_IBS_BattSOCFA)
{
    boolean rtb_LeIDCR_b_IBS_BattSOCFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_Pct_IBS_BattSOC' */
    /* Chart: '<S184>/PokeIDCR_Pct_IBS_BattSOCChrt' incorporates:
     *  SignalConversion generated from: '<S184>/LeIDCR_Pct_IBS_BattSOC'
     *  SignalConversion generated from: '<S184>/LeIDCR_b_IBS_BattSOCFA'
     */
    /* Gateway: PokeIDCR_Pct_IBS_BattSOC/PokeIDCR_Pct_IBS_BattSOCChrt */
    /* During: PokeIDCR_Pct_IBS_BattSOC/PokeIDCR_Pct_IBS_BattSOCChrt */
    /* Entry Internal: PokeIDCR_Pct_IBS_BattSOC/PokeIDCR_Pct_IBS_BattSOCChrt */
    /* Transition: '<S627>:2' */
    if (!LeIDCR_b_IBS_BattSOCFA)
    {
        /* Transition: '<S627>:3' */
        /* Transition: '<S627>:15' */
        IDCR_ac_B.LeIDCR_Pct_IBS_BattSOC_out = LeIDCR_Pct_IBS_BattSOC;
        rtb_LeIDCR_b_IBS_BattSOCFA_out = false;

        /* Transition: '<S627>:18' */
    }
    else
    {
        /* Transition: '<S627>:4' */
        rtb_LeIDCR_b_IBS_BattSOCFA_out = true;
    }

    /* End of Chart: '<S184>/PokeIDCR_Pct_IBS_BattSOCChrt' */

    /* Outport: '<Root>/VeIDCR_Pct_IBS_BattSOC' incorporates:
     *  SignalConversion generated from: '<S184>/VeIDCR_Pct_IBS_BattSOC'
     */
    (void)Rte_Write_VeIDCR_Pct_IBS_BattSOC_Value
        (IDCR_ac_B.LeIDCR_Pct_IBS_BattSOC_out);

    /* Merge: '<Root>/Merge_20' incorporates:
     *  SignalConversion generated from: '<S184>/VeIDCR_b_IBS_BattSOCFA_write'
     * */
    Rte_IrvWrite_PokeIDCR_Pct_IBS_BattSOC_VeIDCR_b_IBS_BattSOCFA_write_IRV
        (rtb_LeIDCR_b_IBS_BattSOCFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_Pct_IBS_BattSOC' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_Pct_UtilPctOfDCDC(VAR(float32, AUTOMATIC)
    LeIDCR_Pct_UtilPctOfDCDC, VAR(boolean, AUTOMATIC) LeIDCR_b_UtilPctOfDCDCFA)
{
    /* local block i/o variables */
    boolean rtb_LeIDCR_b_UtilPctOfDCDCFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_Pct_UtilPctOfDCDC' */
    /* Chart: '<S185>/PokeIDCR_Pct_UtilPctOfDCDCChrt' incorporates:
     *  SignalConversion generated from: '<S185>/LeIDCR_Pct_UtilPctOfDCDC'
     *  SignalConversion generated from: '<S185>/LeIDCR_b_UtilPctOfDCDCFA'
     */
    /* Gateway: PokeIDCR_Pct_UtilPctOfDCDC/PokeIDCR_Pct_UtilPctOfDCDCChrt */
    /* During: PokeIDCR_Pct_UtilPctOfDCDC/PokeIDCR_Pct_UtilPctOfDCDCChrt */
    /* Entry Internal: PokeIDCR_Pct_UtilPctOfDCDC/PokeIDCR_Pct_UtilPctOfDCDCChrt */
    /* Transition: '<S628>:2' */
    if (!LeIDCR_b_UtilPctOfDCDCFA)
    {
        /* Transition: '<S628>:3' */
        /* Transition: '<S628>:15' */
        IDCR_ac_B.LeIDCR_Pct_UtilPctOfDCDC_out = LeIDCR_Pct_UtilPctOfDCDC;
        rtb_LeIDCR_b_UtilPctOfDCDCFA_out = false;

        /* Transition: '<S628>:18' */
    }
    else
    {
        /* Transition: '<S628>:4' */
        rtb_LeIDCR_b_UtilPctOfDCDCFA_out = true;
    }

    /* End of Chart: '<S185>/PokeIDCR_Pct_UtilPctOfDCDCChrt' */

    /* Outport: '<Root>/VeIDCR_Pct_UtilPctOfDCDC' incorporates:
     *  SignalConversion generated from: '<S185>/VeIDCR_Pct_UtilPctOfDCDC'
     */
    (void)Rte_Write_VeIDCR_Pct_UtilPctOfDCDC_Value
        (IDCR_ac_B.LeIDCR_Pct_UtilPctOfDCDC_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_Pct_UtilPctOfDCDC' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_T_APM_OutletCoolantTemp(VAR(float32, AUTOMATIC)
    LeIDCR_T_APM_OutletCoolantTemp)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_T_APM_OutletCoolantTemp' */
    /* Outport: '<Root>/VeIDCR_T_APM_OutletCoolantTemp' incorporates:
     *  SignalConversion generated from: '<S186>/VeIDCR_T_APM_OutletCoolantTemp'
     *  SignalConversion generated from: '<S186>/LeIDCR_T_APM_OutletCoolantTemp'
     */
    /* Gateway: PokeIDCR_T_APM_OutletCoolantTemp/PokeIDCR_T_APM_OutletCoolantTempChrt */
    /* During: PokeIDCR_T_APM_OutletCoolantTemp/PokeIDCR_T_APM_OutletCoolantTempChrt */
    /* Entry Internal: PokeIDCR_T_APM_OutletCoolantTemp/PokeIDCR_T_APM_OutletCoolantTempChrt */
    /* Transition: '<S629>:2' */
    (void)Rte_Write_VeIDCR_T_APM_OutletCoolantTemp_Value
        (LeIDCR_T_APM_OutletCoolantTemp);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_T_APM_OutletCoolantTemp' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_T_APM_TempColdPlate(VAR(float32, AUTOMATIC)
    LeIDCR_T_APM_TempColdPlate, VAR(boolean, AUTOMATIC)
    LeIDCR_b_APM_TempColdPlateFA)
{
    /* local block i/o variables */
    boolean rtb_LeIDCR_b_APM_TempColdPlateFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_T_APM_TempColdPlate' */
    /* Chart: '<S187>/PokeIDCR_T_APM_TempColdPlateChrt' incorporates:
     *  SignalConversion generated from: '<S187>/LeIDCR_T_APM_TempColdPlate'
     *  SignalConversion generated from: '<S187>/LeIDCR_b_APM_TempColdPlateFA'
     */
    /* Gateway: PokeIDCR_T_APM_TempColdPlate/PokeIDCR_T_APM_TempColdPlateChrt */
    /* During: PokeIDCR_T_APM_TempColdPlate/PokeIDCR_T_APM_TempColdPlateChrt */
    /* Entry Internal: PokeIDCR_T_APM_TempColdPlate/PokeIDCR_T_APM_TempColdPlateChrt */
    /* Transition: '<S630>:2' */
    if (!LeIDCR_b_APM_TempColdPlateFA)
    {
        /* Transition: '<S630>:3' */
        /* Transition: '<S630>:15' */
        IDCR_ac_B.LeIDCR_T_APM_TempColdPlate_out = LeIDCR_T_APM_TempColdPlate;
        rtb_LeIDCR_b_APM_TempColdPlateFA_out = false;

        /* Transition: '<S630>:18' */
    }
    else
    {
        /* Transition: '<S630>:4' */
        rtb_LeIDCR_b_APM_TempColdPlateFA_out = true;
    }

    /* End of Chart: '<S187>/PokeIDCR_T_APM_TempColdPlateChrt' */

    /* Outport: '<Root>/VeIDCR_T_APM_HeatPlateTemp' incorporates:
     *  SignalConversion generated from: '<S187>/VeIDCR_T_APM_TempColdPlate'
     */
    (void)Rte_Write_VeIDCR_T_APM_HeatPlateTemp_Value
        (IDCR_ac_B.LeIDCR_T_APM_TempColdPlate_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_T_APM_TempColdPlate' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_T_Temp1(VAR(float32, AUTOMATIC) LeIDCR_T_Temp1,
    VAR(boolean, AUTOMATIC) LeIDCR_b_Temp1FA)
{
    boolean rtb_LeIDCR_b_Temp1FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_T_Temp1' */
    /* Chart: '<S188>/PokeIDCR_T_Temp1Chrt' incorporates:
     *  SignalConversion generated from: '<S188>/LeIDCR_T_Temp1'
     *  SignalConversion generated from: '<S188>/LeIDCR_b_Temp1FA'
     */
    /* Gateway: PokeIDCR_T_Temp1/PokeIDCR_T_Temp1Chrt */
    /* During: PokeIDCR_T_Temp1/PokeIDCR_T_Temp1Chrt */
    /* Entry Internal: PokeIDCR_T_Temp1/PokeIDCR_T_Temp1Chrt */
    /* Transition: '<S631>:2' */
    if (!LeIDCR_b_Temp1FA)
    {
        /* Transition: '<S631>:3' */
        /* Transition: '<S631>:15' */
        IDCR_ac_B.LeIDCR_T_Temp1_out = LeIDCR_T_Temp1;
        rtb_LeIDCR_b_Temp1FA_out = false;

        /* Transition: '<S631>:18' */
    }
    else
    {
        /* Transition: '<S631>:4' */
        rtb_LeIDCR_b_Temp1FA_out = true;
    }

    /* End of Chart: '<S188>/PokeIDCR_T_Temp1Chrt' */

    /* Outport: '<Root>/VeIDCR_T_APMTemp1' incorporates:
     *  SignalConversion generated from: '<S188>/VeIDCR_T_Temp1'
     */
    (void)Rte_Write_VeIDCR_T_APMTemp1_Value(IDCR_ac_B.LeIDCR_T_Temp1_out);

    /* Outport: '<Root>/VeIDCR_b_APMTemp1_FA' incorporates:
     *  SignalConversion generated from: '<S188>/VeIDCR_b_Temp1FA'
     */
    (void)Rte_Write_VeIDCR_b_APMTemp1_FA_Value(rtb_LeIDCR_b_Temp1FA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_T_Temp1' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_T_Temp2(VAR(float32, AUTOMATIC) LeIDCR_T_Temp2,
    VAR(boolean, AUTOMATIC) LeIDCR_b_Temp2FA)
{
    boolean rtb_LeIDCR_b_Temp2FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_T_Temp2' */
    /* Chart: '<S189>/PokeIDCR_T_Temp2Chrt' incorporates:
     *  SignalConversion generated from: '<S189>/LeIDCR_T_Temp2'
     *  SignalConversion generated from: '<S189>/LeIDCR_b_Temp2FA'
     */
    /* Gateway: PokeIDCR_T_Temp2/PokeIDCR_T_Temp2Chrt */
    /* During: PokeIDCR_T_Temp2/PokeIDCR_T_Temp2Chrt */
    /* Entry Internal: PokeIDCR_T_Temp2/PokeIDCR_T_Temp2Chrt */
    /* Transition: '<S632>:2' */
    if (!LeIDCR_b_Temp2FA)
    {
        /* Transition: '<S632>:3' */
        /* Transition: '<S632>:15' */
        IDCR_ac_B.LeIDCR_T_Temp2_out = LeIDCR_T_Temp2;
        rtb_LeIDCR_b_Temp2FA_out = false;

        /* Transition: '<S632>:18' */
    }
    else
    {
        /* Transition: '<S632>:4' */
        rtb_LeIDCR_b_Temp2FA_out = true;
    }

    /* End of Chart: '<S189>/PokeIDCR_T_Temp2Chrt' */

    /* Outport: '<Root>/VeIDCR_T_APMTemp2' incorporates:
     *  SignalConversion generated from: '<S189>/VeIDCR_T_Temp2'
     */
    (void)Rte_Write_VeIDCR_T_APMTemp2_Value(IDCR_ac_B.LeIDCR_T_Temp2_out);

    /* Outport: '<Root>/VeIDCR_b_APMTemp2_FA' incorporates:
     *  SignalConversion generated from: '<S189>/VeIDCR_b_Temp2FA'
     */
    (void)Rte_Write_VeIDCR_b_APMTemp2_FA_Value(rtb_LeIDCR_b_Temp2FA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_T_Temp2' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_U_ACOutVoltage1(VAR(float32, AUTOMATIC)
    LeIDCR_U_ACOutVoltage1, VAR(boolean, AUTOMATIC) LeIDCR_b_ACOutVoltage1FA)
{
    boolean rtb_LeIDCR_b_ACOutVoltage1FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_U_ACOutVoltage1' */
    /* Chart: '<S190>/PokeIDCR_U_ACOutVoltage1Chrt' incorporates:
     *  SignalConversion generated from: '<S190>/LeIDCR_f_ACOutFreq1'
     *  SignalConversion generated from: '<S190>/LeIDCR_f_ACOutFreq'
     */
    /* Gateway: PokeIDCR_U_ACOutVoltage1/PokeIDCR_U_ACOutVoltage1Chrt */
    /* During: PokeIDCR_U_ACOutVoltage1/PokeIDCR_U_ACOutVoltage1Chrt */
    /* Entry Internal: PokeIDCR_U_ACOutVoltage1/PokeIDCR_U_ACOutVoltage1Chrt */
    /* Transition: '<S633>:22' */
    if (!LeIDCR_b_ACOutVoltage1FA)
    {
        /* Transition: '<S633>:23' */
        /* Transition: '<S633>:27' */
        IDCR_ac_B.LeIDCR_U_ACOutVoltage1_out = LeIDCR_U_ACOutVoltage1;
        rtb_LeIDCR_b_ACOutVoltage1FA_out = false;

        /* Transition: '<S633>:21' */
    }
    else
    {
        /* Transition: '<S633>:24' */
        rtb_LeIDCR_b_ACOutVoltage1FA_out = true;
    }

    /* End of Chart: '<S190>/PokeIDCR_U_ACOutVoltage1Chrt' */

    /* Outport: '<Root>/VeIDCR_U_ACOutVoltage1' incorporates:
     *  SignalConversion generated from: '<S190>/VeIDCR_U_ACOutVoltage1'
     */
    (void)Rte_Write_VeIDCR_U_ACOutVoltage1_Value
        (IDCR_ac_B.LeIDCR_U_ACOutVoltage1_out);

    /* Outport: '<Root>/VeIDCR_b_ACOutVoltage1_FA' incorporates:
     *  SignalConversion generated from: '<S190>/VeIDCR_b_ACOutVoltage1FA'
     */
    (void)Rte_Write_VeIDCR_b_ACOutVoltage1_FA_Value
        (rtb_LeIDCR_b_ACOutVoltage1FA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_U_ACOutVoltage1' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_U_ACOutVoltage2(VAR(float32, AUTOMATIC)
    LeIDCR_U_ACOutVoltage2, VAR(boolean, AUTOMATIC) LeIDCR_b_ACOutVoltage2FA)
{
    boolean rtb_LeIDCR_b_ACOutVoltage2FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_U_ACOutVoltage2' */
    /* Chart: '<S191>/PokeIDCR_U_ACOutVoltage2Chrt' incorporates:
     *  SignalConversion generated from: '<S191>/LeIDCR_f_ACOutFreq1'
     *  SignalConversion generated from: '<S191>/LeIDCR_f_ACOutFreq'
     */
    /* Gateway: PokeIDCR_U_ACOutVoltage2/PokeIDCR_U_ACOutVoltage2Chrt */
    /* During: PokeIDCR_U_ACOutVoltage2/PokeIDCR_U_ACOutVoltage2Chrt */
    /* Entry Internal: PokeIDCR_U_ACOutVoltage2/PokeIDCR_U_ACOutVoltage2Chrt */
    /* Transition: '<S634>:22' */
    if (!LeIDCR_b_ACOutVoltage2FA)
    {
        /* Transition: '<S634>:23' */
        /* Transition: '<S634>:27' */
        IDCR_ac_B.LeIDCR_U_ACOutVoltage2_out = LeIDCR_U_ACOutVoltage2;
        rtb_LeIDCR_b_ACOutVoltage2FA_out = false;

        /* Transition: '<S634>:21' */
    }
    else
    {
        /* Transition: '<S634>:24' */
        rtb_LeIDCR_b_ACOutVoltage2FA_out = true;
    }

    /* End of Chart: '<S191>/PokeIDCR_U_ACOutVoltage2Chrt' */

    /* Outport: '<Root>/VeIDCR_U_ACOutVoltage2' incorporates:
     *  SignalConversion generated from: '<S191>/VeIDCR_U_ACOutVoltage2'
     */
    (void)Rte_Write_VeIDCR_U_ACOutVoltage2_Value
        (IDCR_ac_B.LeIDCR_U_ACOutVoltage2_out);

    /* Outport: '<Root>/VeIDCR_b_ACOutVoltage2_FA' incorporates:
     *  SignalConversion generated from: '<S191>/VeIDCR_b_ACOutVoltage2FA'
     */
    (void)Rte_Write_VeIDCR_b_ACOutVoltage2_FA_Value
        (rtb_LeIDCR_b_ACOutVoltage2FA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_U_ACOutVoltage2' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_U_ACOutVoltage3(VAR(float32, AUTOMATIC)
    LeIDCR_U_ACOutVoltage3, VAR(boolean, AUTOMATIC) LeIDCR_b_ACOutVoltage3FA)
{
    boolean rtb_LeIDCR_b_ACOutVoltage3FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_U_ACOutVoltage3' */
    /* Chart: '<S192>/PokeIDCR_U_ACOutVoltage3Chrt' incorporates:
     *  SignalConversion generated from: '<S192>/LeIDCR_f_ACOutFreq1'
     *  SignalConversion generated from: '<S192>/LeIDCR_f_ACOutFreq'
     */
    /* Gateway: PokeIDCR_U_ACOutVoltage3/PokeIDCR_U_ACOutVoltage3Chrt */
    /* During: PokeIDCR_U_ACOutVoltage3/PokeIDCR_U_ACOutVoltage3Chrt */
    /* Entry Internal: PokeIDCR_U_ACOutVoltage3/PokeIDCR_U_ACOutVoltage3Chrt */
    /* Transition: '<S635>:22' */
    if (!LeIDCR_b_ACOutVoltage3FA)
    {
        /* Transition: '<S635>:23' */
        /* Transition: '<S635>:27' */
        IDCR_ac_B.LeIDCR_U_ACOutVoltage3_out = LeIDCR_U_ACOutVoltage3;
        rtb_LeIDCR_b_ACOutVoltage3FA_out = false;

        /* Transition: '<S635>:21' */
    }
    else
    {
        /* Transition: '<S635>:24' */
        rtb_LeIDCR_b_ACOutVoltage3FA_out = true;
    }

    /* End of Chart: '<S192>/PokeIDCR_U_ACOutVoltage3Chrt' */

    /* Outport: '<Root>/VeIDCR_U_ACOutVoltage3' incorporates:
     *  SignalConversion generated from: '<S192>/VeIDCR_U_ACOutVoltage3'
     */
    (void)Rte_Write_VeIDCR_U_ACOutVoltage3_Value
        (IDCR_ac_B.LeIDCR_U_ACOutVoltage3_out);

    /* Outport: '<Root>/VeIDCR_b_ACOutVoltage3_FA' incorporates:
     *  SignalConversion generated from: '<S192>/VeIDCR_b_ACOutVoltage3FA'
     */
    (void)Rte_Write_VeIDCR_b_ACOutVoltage3_FA_Value
        (rtb_LeIDCR_b_ACOutVoltage3FA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_U_ACOutVoltage3' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_U_ACSideVolt_L2(VAR(float32, AUTOMATIC)
    LeIDCR_U_ACSideVolt_L2, VAR(boolean, AUTOMATIC) LeIDCR_b_ACSideVolt_L2FA)
{
    boolean rtb_LeIDCR_b_ACSideVolt_L2FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_U_ACSideVolt_L2' */
    /* Chart: '<S193>/PokeIDCR_U_ACSideVolt_L2Chrt' incorporates:
     *  SignalConversion generated from: '<S193>/LeIDCR_b_ACSideVolt_L2FA'
     */
    /* Gateway: PokeIDCR_U_ACSideVolt_L2/PokeIDCR_U_ACSideVolt_L2Chrt */
    /* During: PokeIDCR_U_ACSideVolt_L2/PokeIDCR_U_ACSideVolt_L2Chrt */
    /* Entry Internal: PokeIDCR_U_ACSideVolt_L2/PokeIDCR_U_ACSideVolt_L2Chrt */
    /* Transition: '<S636>:2' */
    if (!LeIDCR_b_ACSideVolt_L2FA)
    {
        /* SignalConversion generated from: '<S193>/VeIDCR_U_ACSideVolt_L2' incorporates:
         *  Outport: '<Root>/VeIDCR_U_ACSideVolt_L2'
         *  SignalConversion generated from: '<S193>/LeIDCR_U_ACSideVolt_L2'
         */
        /* Transition: '<S636>:3' */
        /* Transition: '<S636>:15' */
        (void)Rte_Write_VeIDCR_U_ACSideVolt_L2_Value(LeIDCR_U_ACSideVolt_L2);
        rtb_LeIDCR_b_ACSideVolt_L2FA_out = false;

        /* Transition: '<S636>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S193>/VeIDCR_U_ACSideVolt_L2' incorporates:
         *  Outport: '<Root>/VeIDCR_U_ACSideVolt_L2'
         */
        /* Transition: '<S636>:4' */
        (void)Rte_Write_VeIDCR_U_ACSideVolt_L2_Value(KeIDCR_K_Default309h_Value);
        rtb_LeIDCR_b_ACSideVolt_L2FA_out = true;
    }

    /* End of Chart: '<S193>/PokeIDCR_U_ACSideVolt_L2Chrt' */

    /* Outport: '<Root>/VeIDCR_b_ACSideVolt_L2FA' incorporates:
     *  SignalConversion generated from: '<S193>/VeIDCR_b_ACSideVolt_L2FA'
     */
    (void)Rte_Write_VeIDCR_b_ACSideVolt_L2FA_Value
        (rtb_LeIDCR_b_ACSideVolt_L2FA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_U_ACSideVolt_L2' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_U_ACSideVolt_L3(VAR(float32, AUTOMATIC)
    LeIDCR_U_ACSideVolt_L3, VAR(boolean, AUTOMATIC) LeIDCR_b_ACSideVolt_L3FA)
{
    boolean rtb_LeIDCR_b_ACSideVolt_L3FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_U_ACSideVolt_L3' */
    /* Chart: '<S194>/PokeIDCR_U_ACSideVolt_L3Chrt' incorporates:
     *  SignalConversion generated from: '<S194>/LeIDCR_b_ACSideVolt_L3FA'
     */
    /* Gateway: PokeIDCR_U_ACSideVolt_L3/PokeIDCR_U_ACSideVolt_L3Chrt */
    /* During: PokeIDCR_U_ACSideVolt_L3/PokeIDCR_U_ACSideVolt_L3Chrt */
    /* Entry Internal: PokeIDCR_U_ACSideVolt_L3/PokeIDCR_U_ACSideVolt_L3Chrt */
    /* Transition: '<S637>:2' */
    if (!LeIDCR_b_ACSideVolt_L3FA)
    {
        /* SignalConversion generated from: '<S194>/VeIDCR_U_ACSideVolt_L3' incorporates:
         *  Outport: '<Root>/VeIDCR_U_ACSideVolt_L3'
         *  SignalConversion generated from: '<S194>/LeIDCR_U_ACSideVolt_L3'
         */
        /* Transition: '<S637>:3' */
        /* Transition: '<S637>:15' */
        (void)Rte_Write_VeIDCR_U_ACSideVolt_L3_Value(LeIDCR_U_ACSideVolt_L3);
        rtb_LeIDCR_b_ACSideVolt_L3FA_out = false;

        /* Transition: '<S637>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S194>/VeIDCR_U_ACSideVolt_L3' incorporates:
         *  Outport: '<Root>/VeIDCR_U_ACSideVolt_L3'
         */
        /* Transition: '<S637>:4' */
        (void)Rte_Write_VeIDCR_U_ACSideVolt_L3_Value(KeIDCR_K_Default309h_Value);
        rtb_LeIDCR_b_ACSideVolt_L3FA_out = true;
    }

    /* End of Chart: '<S194>/PokeIDCR_U_ACSideVolt_L3Chrt' */

    /* Outport: '<Root>/VeIDCR_b_ACSideVolt_L3FA' incorporates:
     *  SignalConversion generated from: '<S194>/VeIDCR_b_ACSideVolt_L3FA'
     */
    (void)Rte_Write_VeIDCR_b_ACSideVolt_L3FA_Value
        (rtb_LeIDCR_b_ACSideVolt_L3FA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_U_ACSideVolt_L3' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_U_AC_InputVltOBCM(VAR(float32, AUTOMATIC)
    LeIDCR_U_AC_InputVltOBCM, VAR(boolean, AUTOMATIC) LeIDCR_b_AC_InputVltOBCMFA)
{
    boolean rtb_LeIDCR_b_AC_InputVltOBCMFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_U_AC_InputVltOBCM' */
    /* Chart: '<S195>/PokeIDCR_U_AC_InputVltOBCMChrt' incorporates:
     *  SignalConversion generated from: '<S195>/LeIDCR_b_AC_InputVltOBCMFA'
     */
    /* Gateway: PokeIDCR_U_AC_InputVltOBCM/PokeIDCR_U_AC_InputVltOBCMChrt */
    /* During: PokeIDCR_U_AC_InputVltOBCM/PokeIDCR_U_AC_InputVltOBCMChrt */
    /* Entry Internal: PokeIDCR_U_AC_InputVltOBCM/PokeIDCR_U_AC_InputVltOBCMChrt */
    /* Transition: '<S638>:2' */
    if (!LeIDCR_b_AC_InputVltOBCMFA)
    {
        /* SignalConversion generated from: '<S195>/VeIDCR_U_AC_InputVltOBCM' incorporates:
         *  Outport: '<Root>/VeIDCR_U_AC_InputVltOBCM'
         *  SignalConversion generated from: '<S195>/LeIDCR_U_AC_InputVltOBCM'
         */
        /* Transition: '<S638>:3' */
        /* Transition: '<S638>:15' */
        (void)Rte_Write_VeIDCR_U_AC_InputVltOBCM_Value(LeIDCR_U_AC_InputVltOBCM);
        rtb_LeIDCR_b_AC_InputVltOBCMFA_out = false;

        /* Transition: '<S638>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S195>/VeIDCR_U_AC_InputVltOBCM' incorporates:
         *  Outport: '<Root>/VeIDCR_U_AC_InputVltOBCM'
         */
        /* Transition: '<S638>:4' */
        (void)Rte_Write_VeIDCR_U_AC_InputVltOBCM_Value
            (KeIDCR_K_Default309h_Value);
        rtb_LeIDCR_b_AC_InputVltOBCMFA_out = true;
    }

    /* End of Chart: '<S195>/PokeIDCR_U_AC_InputVltOBCMChrt' */

    /* Outport: '<Root>/VeIDCR_b_AC_InputVltOBCMFA' incorporates:
     *  SignalConversion generated from: '<S195>/VeIDCR_b_AC_InputVltOBCMFA'
     */
    (void)Rte_Write_VeIDCR_b_AC_InputVltOBCMFA_Value
        (rtb_LeIDCR_b_AC_InputVltOBCMFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_U_AC_InputVltOBCM' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_U_APM_HV_Voltage(VAR(float32, AUTOMATIC)
    LeIDCR_U_APM_HV_Voltage, VAR(boolean, AUTOMATIC) LeIDCR_b_APM_HV_VoltageFA)
{
    boolean rtb_LeIDCR_b_APM_HV_VoltageFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_U_APM_HV_Voltage' */
    /* Chart: '<S196>/PokeIDCR_U_APM_HV_VoltageChrt' incorporates:
     *  SignalConversion generated from: '<S196>/LeIDCR_U_APM_HV_Voltage'
     *  SignalConversion generated from: '<S196>/LeIDCR_b_APM_HV_VoltageFA'
     */
    /* Gateway: PokeIDCR_U_APM_HV_Voltage/PokeIDCR_U_APM_HV_VoltageChrt */
    /* During: PokeIDCR_U_APM_HV_Voltage/PokeIDCR_U_APM_HV_VoltageChrt */
    /* Entry Internal: PokeIDCR_U_APM_HV_Voltage/PokeIDCR_U_APM_HV_VoltageChrt */
    /* Transition: '<S639>:2' */
    if (!LeIDCR_b_APM_HV_VoltageFA)
    {
        /* Transition: '<S639>:3' */
        /* Transition: '<S639>:15' */
        IDCR_ac_B.LeIDCR_U_APM_HV_Voltage_out = LeIDCR_U_APM_HV_Voltage;
        rtb_LeIDCR_b_APM_HV_VoltageFA_out = false;

        /* Transition: '<S639>:18' */
    }
    else
    {
        /* Transition: '<S639>:4' */
        rtb_LeIDCR_b_APM_HV_VoltageFA_out = true;
    }

    /* End of Chart: '<S196>/PokeIDCR_U_APM_HV_VoltageChrt' */

    /* Outport: '<Root>/VeIDCR_U_APM_HV_Voltage' incorporates:
     *  SignalConversion generated from: '<S196>/VeIDCR_U_APM_HV_Voltage'
     */
    (void)Rte_Write_VeIDCR_U_APM_HV_Voltage_Value
        (IDCR_ac_B.LeIDCR_U_APM_HV_Voltage_out);

    /* Outport: '<Root>/VeIDCR_b_APM_HV_VoltageFA' incorporates:
     *  SignalConversion generated from: '<S196>/VeIDCR_b_APM_HV_VoltageFA'
     */
    (void)Rte_Write_VeIDCR_b_APM_HV_VoltageFA_Value
        (rtb_LeIDCR_b_APM_HV_VoltageFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_U_APM_HV_Voltage' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_U_APM_HvVsetPFdbk(VAR(float32, AUTOMATIC)
    LeIDCR_U_APM_HvVsetPFdbk, VAR(boolean, AUTOMATIC) LeIDCR_b_APM_HvVsetPFdbkFA)
{
    boolean rtb_LeIDCR_b_APM_HvVsetPFdbkFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_U_APM_HvVsetPFdbk' */
    /* Chart: '<S197>/PokeIDCR_U_APM_HvVsetPFdbkChrt' incorporates:
     *  SignalConversion generated from: '<S197>/LeIDCR_U_APM_HvVsetPFdbk'
     *  SignalConversion generated from: '<S197>/LeIDCR_b_APM_HvVsetPFdbkFA'
     */
    /* Gateway: PokeIDCR_U_APM_HvVsetPFdbk/PokeIDCR_U_APM_HvVsetPFdbkChrt */
    /* During: PokeIDCR_U_APM_HvVsetPFdbk/PokeIDCR_U_APM_HvVsetPFdbkChrt */
    /* Entry Internal: PokeIDCR_U_APM_HvVsetPFdbk/PokeIDCR_U_APM_HvVsetPFdbkChrt */
    /* Transition: '<S640>:2' */
    if (!LeIDCR_b_APM_HvVsetPFdbkFA)
    {
        /* Transition: '<S640>:3' */
        /* Transition: '<S640>:15' */
        IDCR_ac_B.LeIDCR_U_APM_HvVsetPFdbk_out = LeIDCR_U_APM_HvVsetPFdbk;
        rtb_LeIDCR_b_APM_HvVsetPFdbkFA_out = false;

        /* Transition: '<S640>:18' */
    }
    else
    {
        /* Transition: '<S640>:4' */
        rtb_LeIDCR_b_APM_HvVsetPFdbkFA_out = true;
    }

    /* End of Chart: '<S197>/PokeIDCR_U_APM_HvVsetPFdbkChrt' */

    /* Outport: '<Root>/VeIDCR_U_APM_HvVsetPFdbk' incorporates:
     *  SignalConversion generated from: '<S197>/VeIDCR_U_APM_HvVsetPFdbk'
     */
    (void)Rte_Write_VeIDCR_U_APM_HvVsetPFdbk_Value
        (IDCR_ac_B.LeIDCR_U_APM_HvVsetPFdbk_out);

    /* Outport: '<Root>/VeIDCR_b_APM_HvVsetPFdbk_FA' incorporates:
     *  SignalConversion generated from: '<S197>/VeIDCR_b_APM_HvVsetPFdbkFA'
     */
    (void)Rte_Write_VeIDCR_b_APM_HvVsetPFdbk_FA_Value
        (rtb_LeIDCR_b_APM_HvVsetPFdbkFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_U_APM_HvVsetPFdbk' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_U_APM_LV_Voltage(VAR(float32, AUTOMATIC)
    LeIDCR_U_APM_LV_Voltage, VAR(boolean, AUTOMATIC) LeIDCR_b_APM_LV_VoltageFA)
{
    /* local block i/o variables */
    boolean rtb_LeIDCR_b_APM_LV_VoltageFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_U_APM_LV_Voltage' */
    /* Chart: '<S198>/PokeIDCR_U_APM_LV_VoltageChrt' incorporates:
     *  SignalConversion generated from: '<S198>/LeIDCR_U_APM_LV_Voltage'
     *  SignalConversion generated from: '<S198>/LeIDCR_b_APM_LV_VoltageFA'
     */
    /* Gateway: PokeIDCR_U_APM_LV_Voltage/PokeIDCR_U_APM_LV_VoltageChrt */
    /* During: PokeIDCR_U_APM_LV_Voltage/PokeIDCR_U_APM_LV_VoltageChrt */
    /* Entry Internal: PokeIDCR_U_APM_LV_Voltage/PokeIDCR_U_APM_LV_VoltageChrt */
    /* Transition: '<S641>:2' */
    if (!LeIDCR_b_APM_LV_VoltageFA)
    {
        /* Transition: '<S641>:3' */
        /* Transition: '<S641>:15' */
        IDCR_ac_B.LeIDCR_U_APM_LV_Voltage_out = LeIDCR_U_APM_LV_Voltage;
        rtb_LeIDCR_b_APM_LV_VoltageFA_out = false;

        /* Transition: '<S641>:18' */
    }
    else
    {
        /* Transition: '<S641>:4' */
        rtb_LeIDCR_b_APM_LV_VoltageFA_out = true;
    }

    /* End of Chart: '<S198>/PokeIDCR_U_APM_LV_VoltageChrt' */

    /* Outport: '<Root>/VeIDCR_U_APM_LV_Voltage' incorporates:
     *  SignalConversion generated from: '<S198>/VeIDCR_U_APM_LV_Voltage'
     */
    (void)Rte_Write_VeIDCR_U_APM_LV_Voltage_Value
        (IDCR_ac_B.LeIDCR_U_APM_LV_Voltage_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_U_APM_LV_Voltage' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_U_APM_LvIsetPFdbk(VAR(float32, AUTOMATIC)
    LeIDCR_U_APM_LvIsetPFdbk, VAR(boolean, AUTOMATIC) LeIDCR_b_APM_LvIsetPFdbkFA)
{
    /* local block i/o variables */
    boolean rtb_LeIDCR_b_APM_LvIsetPFdbkFA_out;
    UNUSED_PARAMETER(LeIDCR_U_APM_LvIsetPFdbk);

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_U_APM_LvIsetPFdbk' */
    /* Chart: '<S199>/PokeIDCR_U_APM_LvIsetPFdbkChrt' incorporates:
     *  SignalConversion generated from: '<S199>/LeIDCR_b_APM_LvIsetPFdbkFA'
     */
    /* Gateway: PokeIDCR_U_APM_LvIsetPFdbk/PokeIDCR_U_APM_LvIsetPFdbkChrt */
    /* During: PokeIDCR_U_APM_LvIsetPFdbk/PokeIDCR_U_APM_LvIsetPFdbkChrt */
    /* Entry Internal: PokeIDCR_U_APM_LvIsetPFdbk/PokeIDCR_U_APM_LvIsetPFdbkChrt */
    /* Transition: '<S642>:2' */
    if (!LeIDCR_b_APM_LvIsetPFdbkFA)
    {
        /* Transition: '<S642>:3' */
        /* Transition: '<S642>:15' */
        rtb_LeIDCR_b_APM_LvIsetPFdbkFA_out = false;

        /* Transition: '<S642>:18' */
    }
    else
    {
        /* Transition: '<S642>:4' */
        rtb_LeIDCR_b_APM_LvIsetPFdbkFA_out = true;
    }

    /* End of Chart: '<S199>/PokeIDCR_U_APM_LvIsetPFdbkChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_U_APM_LvIsetPFdbk' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_U_AcOutVoltage(VAR(float32, AUTOMATIC)
    LeIDCR_U_AcOutVoltage, VAR(boolean, AUTOMATIC) LeIDCR_b_AcOutVoltageFA)
{
    boolean rtb_LeIDCR_b_AcOutVoltageFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_U_AcOutVoltage' */
    /* Chart: '<S200>/PokeIDCR_U_AcOutVoltageChrt' incorporates:
     *  SignalConversion generated from: '<S200>/LeIDCR_f_ACOutFreq1'
     *  SignalConversion generated from: '<S200>/LeIDCR_f_ACOutFreq'
     */
    /* Gateway: PokeIDCR_U_AcOutVoltage/PokeIDCR_U_AcOutVoltageChrt */
    /* During: PokeIDCR_U_AcOutVoltage/PokeIDCR_U_AcOutVoltageChrt */
    /* Entry Internal: PokeIDCR_U_AcOutVoltage/PokeIDCR_U_AcOutVoltageChrt */
    /* Transition: '<S643>:22' */
    if (!LeIDCR_b_AcOutVoltageFA)
    {
        /* Transition: '<S643>:23' */
        /* Transition: '<S643>:27' */
        IDCR_ac_B.LeIDCR_U_AcOutVoltage_out = LeIDCR_U_AcOutVoltage;
        rtb_LeIDCR_b_AcOutVoltageFA_out = false;

        /* Transition: '<S643>:21' */
    }
    else
    {
        /* Transition: '<S643>:24' */
        rtb_LeIDCR_b_AcOutVoltageFA_out = true;
    }

    /* End of Chart: '<S200>/PokeIDCR_U_AcOutVoltageChrt' */

    /* Outport: '<Root>/VeIDCR_U_AcOutVoltage' incorporates:
     *  SignalConversion generated from: '<S200>/VeIDCR_U_AcOutVoltage'
     */
    (void)Rte_Write_VeIDCR_U_AcOutVoltage_Value
        (IDCR_ac_B.LeIDCR_U_AcOutVoltage_out);

    /* Outport: '<Root>/VeIDCR_b_AcOutVoltage_FA' incorporates:
     *  SignalConversion generated from: '<S200>/VeIDCR_b_AcOutVoltageFA'
     */
    (void)Rte_Write_VeIDCR_b_AcOutVoltage_FA_Value
        (rtb_LeIDCR_b_AcOutVoltageFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_U_AcOutVoltage' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_U_BattSideVolt(VAR(float32, AUTOMATIC)
    LeIDCR_U_BattSideVolt, VAR(boolean, AUTOMATIC) LeIDCR_b_BattSideVoltFA)
{
    boolean rtb_LeIDCR_b_BattSideVoltFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_U_BattSideVolt' */
    /* Chart: '<S201>/PokeIDCR_U_BattSideVoltChrt' incorporates:
     *  SignalConversion generated from: '<S201>/LeIDCR_b_BattSideVoltFA'
     */
    /* Gateway: PokeIDCR_U_BattSideVolt/PokeIDCR_U_BattSideVoltChrt */
    /* During: PokeIDCR_U_BattSideVolt/PokeIDCR_U_BattSideVoltChrt */
    /* Entry Internal: PokeIDCR_U_BattSideVolt/PokeIDCR_U_BattSideVoltChrt */
    /* Transition: '<S644>:2' */
    if (!LeIDCR_b_BattSideVoltFA)
    {
        /* SignalConversion generated from: '<S201>/VeIDCR_U_BattSideVolt' incorporates:
         *  Outport: '<Root>/VeIDCR_U_BattSideVolt'
         *  SignalConversion generated from: '<S201>/LeIDCR_U_BattSideVolt'
         */
        /* Transition: '<S644>:3' */
        /* Transition: '<S644>:15' */
        (void)Rte_Write_VeIDCR_U_BattSideVolt_Value(LeIDCR_U_BattSideVolt);
        rtb_LeIDCR_b_BattSideVoltFA_out = false;

        /* Transition: '<S644>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S201>/VeIDCR_U_BattSideVolt' incorporates:
         *  Outport: '<Root>/VeIDCR_U_BattSideVolt'
         */
        /* Transition: '<S644>:4' */
        (void)Rte_Write_VeIDCR_U_BattSideVolt_Value(KeIDCR_K_Default309h_Value);
        rtb_LeIDCR_b_BattSideVoltFA_out = true;
    }

    /* End of Chart: '<S201>/PokeIDCR_U_BattSideVoltChrt' */

    /* Outport: '<Root>/VeIDCR_b_BattSide_VoltFA' incorporates:
     *  SignalConversion generated from: '<S201>/VeIDCR_b_BattSideVoltFA'
     */
    (void)Rte_Write_VeIDCR_b_BattSide_VoltFA_Value
        (rtb_LeIDCR_b_BattSideVoltFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_U_BattSideVolt' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_U_DCInVoltage(VAR(float32, AUTOMATIC)
    LeIDCR_U_DCInVoltage, VAR(boolean, AUTOMATIC) LeIDCR_b_DCInVoltageFA)
{
    boolean rtb_LeIDCR_b_DCInVoltageFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_U_DCInVoltage' */
    /* Chart: '<S202>/PokeIDCR_U_DCInVoltageChrt' incorporates:
     *  SignalConversion generated from: '<S202>/LeIDCR_f_ACOutFreq1'
     *  SignalConversion generated from: '<S202>/LeIDCR_f_ACOutFreq'
     */
    /* Gateway: PokeIDCR_U_DCInVoltage/PokeIDCR_U_DCInVoltageChrt */
    /* During: PokeIDCR_U_DCInVoltage/PokeIDCR_U_DCInVoltageChrt */
    /* Entry Internal: PokeIDCR_U_DCInVoltage/PokeIDCR_U_DCInVoltageChrt */
    /* Transition: '<S645>:22' */
    if (!LeIDCR_b_DCInVoltageFA)
    {
        /* Transition: '<S645>:23' */
        /* Transition: '<S645>:27' */
        IDCR_ac_B.LeIDCR_U_DCInVoltage_out = LeIDCR_U_DCInVoltage;
        rtb_LeIDCR_b_DCInVoltageFA_out = false;

        /* Transition: '<S645>:21' */
    }
    else
    {
        /* Transition: '<S645>:24' */
        rtb_LeIDCR_b_DCInVoltageFA_out = true;
    }

    /* End of Chart: '<S202>/PokeIDCR_U_DCInVoltageChrt' */

    /* Outport: '<Root>/VeIDCR_U_DCInputVoltage' incorporates:
     *  SignalConversion generated from: '<S202>/VeIDCR_U_DCInVoltage'
     */
    (void)Rte_Write_VeIDCR_U_DCInputVoltage_Value
        (IDCR_ac_B.LeIDCR_U_DCInVoltage_out);

    /* Outport: '<Root>/VeIDCR_b_DCInputVoltage_FA' incorporates:
     *  SignalConversion generated from: '<S202>/VeIDCR_b_DCInVoltageFA'
     */
    (void)Rte_Write_VeIDCR_b_DCInputVoltage_FA_Value
        (rtb_LeIDCR_b_DCInVoltageFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_U_DCInVoltage' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_U_EVRDesVSetP(VAR(float32, AUTOMATIC)
    LeIDCR_U_EVRDesVSetP, VAR(boolean, AUTOMATIC) LeIDCR_b_EVRDesVSetPFA)
{
    /* local block i/o variables */
    boolean rtb_LeIDCR_b_EVRDesVSetPFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_U_EVRDesVSetP' */
    /* Chart: '<S203>/PokeIDCR_U_EVRDesVSetPChrt' incorporates:
     *  SignalConversion generated from: '<S203>/LeIDCR_U_EVRDesVSetP'
     *  SignalConversion generated from: '<S203>/LeIDCR_b_EVRDesVSetPFA'
     */
    /* Gateway: PokeIDCR_U_EVRDesVSetP/PokeIDCR_U_EVRDesVSetPChrt */
    /* During: PokeIDCR_U_EVRDesVSetP/PokeIDCR_U_EVRDesVSetPChrt */
    /* Entry Internal: PokeIDCR_U_EVRDesVSetP/PokeIDCR_U_EVRDesVSetPChrt */
    /* Transition: '<S646>:2' */
    if (!LeIDCR_b_EVRDesVSetPFA)
    {
        /* Transition: '<S646>:3' */
        /* Transition: '<S646>:15' */
        IDCR_ac_B.LeIDCR_U_EVRDesVSetP_out = LeIDCR_U_EVRDesVSetP;
        rtb_LeIDCR_b_EVRDesVSetPFA_out = false;

        /* Transition: '<S646>:18' */
    }
    else
    {
        /* Transition: '<S646>:4' */
        rtb_LeIDCR_b_EVRDesVSetPFA_out = true;
    }

    /* End of Chart: '<S203>/PokeIDCR_U_EVRDesVSetPChrt' */

    /* Outport: '<Root>/VeIDCR_U_EVRDesVSetP' incorporates:
     *  SignalConversion generated from: '<S203>/VeIDCR_U_EVRDesVSetP'
     */
    (void)Rte_Write_VeIDCR_U_EVRDesVSetP_Value
        (IDCR_ac_B.LeIDCR_U_EVRDesVSetP_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_U_EVRDesVSetP' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_U_EVSEMaxVoltLmt(VAR(float32, AUTOMATIC)
    LeIDCR_U_EVSEMaxVoltLmt, VAR(boolean, AUTOMATIC) LeIDCR_b_EVSEMaxVoltLmtFA)
{
    boolean rtb_LeIDCR_b_EVSEMaxVoltLmtFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_U_EVSEMaxVoltLmt' */
    /* Chart: '<S204>/PokeIDCR_U_EVSEMaxVoltLmtChrt' incorporates:
     *  SignalConversion generated from: '<S204>/LeIDCR_U_EVSEMaxVoltLmt'
     *  SignalConversion generated from: '<S204>/LeIDCR_b_EVSEMaxVoltLmtFA'
     */
    /* Gateway: PokeIDCR_U_EVSEMaxVoltLmt/PokeIDCR_U_EVSEMaxVoltLmtChrt */
    /* During: PokeIDCR_U_EVSEMaxVoltLmt/PokeIDCR_U_EVSEMaxVoltLmtChrt */
    /* Entry Internal: PokeIDCR_U_EVSEMaxVoltLmt/PokeIDCR_U_EVSEMaxVoltLmtChrt */
    /* Transition: '<S647>:2' */
    if (!LeIDCR_b_EVSEMaxVoltLmtFA)
    {
        /* Transition: '<S647>:3' */
        /* Transition: '<S647>:15' */
        IDCR_ac_B.LeIDCR_U_EVSEMaxVoltLmt_out = LeIDCR_U_EVSEMaxVoltLmt;
        rtb_LeIDCR_b_EVSEMaxVoltLmtFA_out = false;

        /* Transition: '<S647>:18' */
    }
    else
    {
        /* Transition: '<S647>:4' */
        rtb_LeIDCR_b_EVSEMaxVoltLmtFA_out = true;
    }

    /* End of Chart: '<S204>/PokeIDCR_U_EVSEMaxVoltLmtChrt' */

    /* Outport: '<Root>/VeIDCR_U_EVSEMaxVoltLmt' incorporates:
     *  SignalConversion generated from: '<S204>/VeIDCR_U_EVSEMaxVoltLmt'
     */
    (void)Rte_Write_VeIDCR_U_EVSEMaxVoltLmt_Value
        (IDCR_ac_B.LeIDCR_U_EVSEMaxVoltLmt_out);

    /* Outport: '<Root>/VeIDCR_b_EVSEMaxVoltLmt_FA' incorporates:
     *  SignalConversion generated from: '<S204>/VeIDCR_b_EVSEMaxVoltLmtFA'
     */
    (void)Rte_Write_VeIDCR_b_EVSEMaxVoltLmt_FA_Value
        (rtb_LeIDCR_b_EVSEMaxVoltLmtFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_U_EVSEMaxVoltLmt' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_U_EVSEMinVoltLmt(VAR(float32, AUTOMATIC)
    LeIDCR_U_EVSEMinVoltLmt, VAR(boolean, AUTOMATIC) LeIDCR_b_EVSEMinVoltLmtFA)
{
    boolean rtb_LeIDCR_b_EVSEMinVoltLmtFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_U_EVSEMinVoltLmt' */
    /* Chart: '<S205>/PokeIDCR_U_EVSEMinVoltLmtChrt' incorporates:
     *  SignalConversion generated from: '<S205>/LeIDCR_U_EVSEMinVoltLmt'
     *  SignalConversion generated from: '<S205>/LeIDCR_b_EVSEMinVoltLmtFA'
     */
    /* Gateway: PokeIDCR_U_EVSEMinVoltLmt/PokeIDCR_U_EVSEMinVoltLmtChrt */
    /* During: PokeIDCR_U_EVSEMinVoltLmt/PokeIDCR_U_EVSEMinVoltLmtChrt */
    /* Entry Internal: PokeIDCR_U_EVSEMinVoltLmt/PokeIDCR_U_EVSEMinVoltLmtChrt */
    /* Transition: '<S648>:2' */
    if (!LeIDCR_b_EVSEMinVoltLmtFA)
    {
        /* Transition: '<S648>:3' */
        /* Transition: '<S648>:15' */
        IDCR_ac_B.LeIDCR_U_EVSEMinVoltLmt_out = LeIDCR_U_EVSEMinVoltLmt;
        rtb_LeIDCR_b_EVSEMinVoltLmtFA_out = false;

        /* Transition: '<S648>:18' */
    }
    else
    {
        /* Transition: '<S648>:4' */
        rtb_LeIDCR_b_EVSEMinVoltLmtFA_out = true;
    }

    /* End of Chart: '<S205>/PokeIDCR_U_EVSEMinVoltLmtChrt' */

    /* Outport: '<Root>/VeIDCR_U_EVSEMinVoltLmt' incorporates:
     *  SignalConversion generated from: '<S205>/VeIDCR_U_EVSEMinVoltLmt'
     */
    (void)Rte_Write_VeIDCR_U_EVSEMinVoltLmt_Value
        (IDCR_ac_B.LeIDCR_U_EVSEMinVoltLmt_out);

    /* Outport: '<Root>/VeIDCR_b_EVSEMinVoltLmt_FA' incorporates:
     *  SignalConversion generated from: '<S205>/VeIDCR_b_EVSEMinVoltLmtFA'
     */
    (void)Rte_Write_VeIDCR_b_EVSEMinVoltLmt_FA_Value
        (rtb_LeIDCR_b_EVSEMinVoltLmtFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_U_EVSEMinVoltLmt' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_U_EVSEOutputVolt(VAR(float32, AUTOMATIC)
    LeIDCR_U_EVSEOutputVolt, VAR(boolean, AUTOMATIC) LeIDCR_b_EVSEOutputVoltFA)
{
    boolean rtb_LeIDCR_b_EVSEOutputVoltFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_U_EVSEOutputVolt' */
    /* Chart: '<S206>/PokeIDCR_U_EVSEOutputVoltChrt' incorporates:
     *  SignalConversion generated from: '<S206>/LeIDCR_U_EVSEOutputVolt'
     *  SignalConversion generated from: '<S206>/LeIDCR_b_EVSEOutputVoltFA'
     */
    /* Gateway: PokeIDCR_U_EVSEOutputVolt/PokeIDCR_U_EVSEOutputVoltChrt */
    /* During: PokeIDCR_U_EVSEOutputVolt/PokeIDCR_U_EVSEOutputVoltChrt */
    /* Entry Internal: PokeIDCR_U_EVSEOutputVolt/PokeIDCR_U_EVSEOutputVoltChrt */
    /* Transition: '<S649>:2' */
    if (!LeIDCR_b_EVSEOutputVoltFA)
    {
        /* Transition: '<S649>:3' */
        /* Transition: '<S649>:15' */
        IDCR_ac_B.LeIDCR_U_EVSEOutputVolt_out = LeIDCR_U_EVSEOutputVolt;
        rtb_LeIDCR_b_EVSEOutputVoltFA_out = false;

        /* Transition: '<S649>:18' */
    }
    else
    {
        /* Transition: '<S649>:4' */
        rtb_LeIDCR_b_EVSEOutputVoltFA_out = true;
    }

    /* End of Chart: '<S206>/PokeIDCR_U_EVSEOutputVoltChrt' */

    /* Outport: '<Root>/VeIDCR_U_EVSEOutputVolt' incorporates:
     *  SignalConversion generated from: '<S206>/VeIDCR_U_EVSEOutputVolt'
     */
    (void)Rte_Write_VeIDCR_U_EVSEOutputVolt_Value
        (IDCR_ac_B.LeIDCR_U_EVSEOutputVolt_out);

    /* Outport: '<Root>/VeIDCR_b_EVSEOutputVolt_FA' incorporates:
     *  SignalConversion generated from: '<S206>/VeIDCR_b_EVSEOutputVoltFA'
     */
    (void)Rte_Write_VeIDCR_b_EVSEOutputVolt_FA_Value
        (rtb_LeIDCR_b_EVSEOutputVoltFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_U_EVSEOutputVolt' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_U_EVSE_ThrshldVoltage(VAR(float32, AUTOMATIC)
    LeIDCR_U_EVSE_ThrshldVoltage, VAR(boolean, AUTOMATIC)
    LeIDCR_b_EVSE_ThrshldVoltage_FA)
{
    boolean rtb_LeIDCR_b_EVSE_ThrshldVoltage_FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_U_EVSE_ThrshldVoltage' */
    /* Chart: '<S207>/PokeIDCR_U_EVSE_ThrshldVoltageChrt' incorporates:
     *  SignalConversion generated from: '<S207>/LeIDCR_f_ACOutFreq1'
     *  SignalConversion generated from: '<S207>/LeIDCR_f_ACOutFreq'
     */
    /* Gateway: PokeIDCR_U_EVSE_ThrshldVoltage/PokeIDCR_U_EVSE_ThrshldVoltageChrt */
    /* During: PokeIDCR_U_EVSE_ThrshldVoltage/PokeIDCR_U_EVSE_ThrshldVoltageChrt */
    /* Entry Internal: PokeIDCR_U_EVSE_ThrshldVoltage/PokeIDCR_U_EVSE_ThrshldVoltageChrt */
    /* Transition: '<S650>:22' */
    if (!LeIDCR_b_EVSE_ThrshldVoltage_FA)
    {
        /* Transition: '<S650>:23' */
        /* Transition: '<S650>:27' */
        IDCR_ac_B.LeIDCR_U_EVSE_ThrshldVoltage_out =
            LeIDCR_U_EVSE_ThrshldVoltage;
        rtb_LeIDCR_b_EVSE_ThrshldVoltage_FA_out = false;

        /* Transition: '<S650>:21' */
    }
    else
    {
        /* Transition: '<S650>:24' */
        rtb_LeIDCR_b_EVSE_ThrshldVoltage_FA_out = true;
    }

    /* End of Chart: '<S207>/PokeIDCR_U_EVSE_ThrshldVoltageChrt' */

    /* Outport: '<Root>/VeIDCR_U_EVSE_ThrshldVoltage' incorporates:
     *  SignalConversion generated from: '<S207>/VeIDCR_U_EVSE_ThrshldVoltage'
     */
    (void)Rte_Write_VeIDCR_U_EVSE_ThrshldVoltage_Value
        (IDCR_ac_B.LeIDCR_U_EVSE_ThrshldVoltage_out);

    /* Outport: '<Root>/VeIDCR_b_EVSE_ThrshldVoltage_FA' incorporates:
     *  SignalConversion generated from: '<S207>/VeIDCR_b_EVSE_ThrshldVoltage_FA'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_ThrshldVoltage_FA_Value
        (rtb_LeIDCR_b_EVSE_ThrshldVoltage_FA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_U_EVSE_ThrshldVoltage' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_U_IBS_BattVolt(VAR(float32, AUTOMATIC)
    LeIDCR_U_IBS_BattVolt, VAR(boolean, AUTOMATIC) LeIDCR_b_IBS_BattVoltFA)
{
    boolean rtb_LeIDCR_b_IBS_BattVoltFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_U_IBS_BattVolt' */
    /* Chart: '<S208>/PokeIDCR_U_IBS_BattVoltChrt' incorporates:
     *  SignalConversion generated from: '<S208>/LeIDCR_U_IBS_BattVolt'
     *  SignalConversion generated from: '<S208>/LeIDCR_b_IBS_BattVoltFA'
     */
    /* Gateway: PokeIDCR_U_IBS_BattVolt/PokeIDCR_U_IBS_BattVoltChrt */
    /* During: PokeIDCR_U_IBS_BattVolt/PokeIDCR_U_IBS_BattVoltChrt */
    /* Entry Internal: PokeIDCR_U_IBS_BattVolt/PokeIDCR_U_IBS_BattVoltChrt */
    /* Transition: '<S651>:2' */
    if (!LeIDCR_b_IBS_BattVoltFA)
    {
        /* Transition: '<S651>:3' */
        /* Transition: '<S651>:15' */
        IDCR_ac_B.LeIDCR_U_IBS_BattVolt_out = LeIDCR_U_IBS_BattVolt;
        rtb_LeIDCR_b_IBS_BattVoltFA_out = false;

        /* Transition: '<S651>:18' */
    }
    else
    {
        /* Transition: '<S651>:4' */
        rtb_LeIDCR_b_IBS_BattVoltFA_out = true;
    }

    /* End of Chart: '<S208>/PokeIDCR_U_IBS_BattVoltChrt' */

    /* Outport: '<Root>/VeIDCR_U_IBS_BattVolt' incorporates:
     *  SignalConversion generated from: '<S208>/VeIDCR_U_IBS_BattVolt'
     */
    (void)Rte_Write_VeIDCR_U_IBS_BattVolt_Value
        (IDCR_ac_B.LeIDCR_U_IBS_BattVolt_out);

    /* Outport: '<Root>/VeIDCR_b_IBS_BattVolt_FA' incorporates:
     *  SignalConversion generated from: '<S208>/VeIDCR_b_IBS_BattVoltFA'
     */
    (void)Rte_Write_VeIDCR_b_IBS_BattVolt_FA_Value
        (rtb_LeIDCR_b_IBS_BattVoltFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_U_IBS_BattVolt' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_U_OBC_Prox(VAR(float32, AUTOMATIC)
    LeIDCR_U_OBC_Prox, VAR(boolean, AUTOMATIC) LeIDCR_b_OBC_ProxFA)
{
    boolean rtb_LeIDCR_b_OBC_ProxFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_U_OBC_Prox' */
    /* Chart: '<S209>/PokeIDCR_U_OBC_ProxChrt' incorporates:
     *  SignalConversion generated from: '<S209>/LeIDCR_U_OBC_Prox'
     *  SignalConversion generated from: '<S209>/LeIDCR_b_OBC_ProxFA'
     */
    /* Gateway: PokeIDCR_U_OBC_Prox/PokeIDCR_U_OBC_ProxChrt */
    /* During: PokeIDCR_U_OBC_Prox/PokeIDCR_U_OBC_ProxChrt */
    /* Entry Internal: PokeIDCR_U_OBC_Prox/PokeIDCR_U_OBC_ProxChrt */
    /* Transition: '<S652>:22' */
    if (!LeIDCR_b_OBC_ProxFA)
    {
        /* Transition: '<S652>:23' */
        /* Transition: '<S652>:27' */
        IDCR_ac_B.LeIDCR_U_OBC_Prox_out = LeIDCR_U_OBC_Prox;
        rtb_LeIDCR_b_OBC_ProxFA_out = false;

        /* Transition: '<S652>:21' */
    }
    else
    {
        /* Transition: '<S652>:24' */
        rtb_LeIDCR_b_OBC_ProxFA_out = true;
    }

    /* End of Chart: '<S209>/PokeIDCR_U_OBC_ProxChrt' */

    /* Outport: '<Root>/VeIDCR_U_OBC_Prox' incorporates:
     *  SignalConversion generated from: '<S209>/VeIDCR_U_OBC_Prox'
     */
    (void)Rte_Write_VeIDCR_U_OBC_Prox_Value(IDCR_ac_B.LeIDCR_U_OBC_Prox_out);

    /* Outport: '<Root>/VeIDCR_b_OBC_Prox_FA' incorporates:
     *  SignalConversion generated from: '<S209>/VeIDCR_b_OBC_ProxFA'
     */
    (void)Rte_Write_VeIDCR_b_OBC_Prox_FA_Value(rtb_LeIDCR_b_OBC_ProxFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_U_OBC_Prox' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_U_V2L_DischargeVoltage(VAR(float32, AUTOMATIC)
    LeIDCR_U_V2L_DischargeVoltage)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_U_V2L_DischargeVoltage' */
    /* Outport: '<Root>/VeIDCR_U_V2L_DischargeVoltage' incorporates:
     *  SignalConversion generated from: '<S210>/VeIDCR_U_V2L_DischargeVoltage'
     *  SignalConversion generated from: '<S210>/LeIDCR_U_V2L_DischargeVoltage'
     */
    /* Gateway: PokeIDCR_U_V2L_DischargeVoltage/PokeIDCR_U_V2L_DischargeVoltageChrt */
    /* During: PokeIDCR_U_V2L_DischargeVoltage/PokeIDCR_U_V2L_DischargeVoltageChrt */
    /* Entry Internal: PokeIDCR_U_V2L_DischargeVoltage/PokeIDCR_U_V2L_DischargeVoltageChrt */
    /* Transition: '<S653>:2' */
    (void)Rte_Write_VeIDCR_U_V2L_DischargeVoltage_Value
        (LeIDCR_U_V2L_DischargeVoltage);

    /* Outport: '<Root>/VeIDCR_b_V2L_DischargeVoltageFA' incorporates:
     *  Chart: '<S210>/PokeIDCR_U_V2L_DischargeVoltageChrt'
     *  SignalConversion generated from: '<S210>/VeIDCR_b_V2L_DischargeVoltageFA'
     */
    (void)Rte_Write_VeIDCR_b_V2L_DischargeVoltageFA_Value(false);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_U_V2L_DischargeVoltage' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_U_V2XInVoltage(VAR(float32, AUTOMATIC)
    LeIDCR_U_V2XInVoltage, VAR(boolean, AUTOMATIC) LeIDCR_b_V2XInVoltageFA)
{
    boolean rtb_LeIDCR_b_V2XInVoltageFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_U_V2XInVoltage' */
    /* Chart: '<S211>/PokeIDCR_U_V2XInVoltageChrt' incorporates:
     *  SignalConversion generated from: '<S211>/LeIDCR_f_ACOutFreq1'
     *  SignalConversion generated from: '<S211>/LeIDCR_f_ACOutFreq'
     */
    /* Gateway: PokeIDCR_U_V2XInVoltage/PokeIDCR_U_V2XInVoltageChrt */
    /* During: PokeIDCR_U_V2XInVoltage/PokeIDCR_U_V2XInVoltageChrt */
    /* Entry Internal: PokeIDCR_U_V2XInVoltage/PokeIDCR_U_V2XInVoltageChrt */
    /* Transition: '<S654>:22' */
    if (!LeIDCR_b_V2XInVoltageFA)
    {
        /* Transition: '<S654>:23' */
        /* Transition: '<S654>:27' */
        IDCR_ac_B.LeIDCR_U_V2XInVoltage_out = LeIDCR_U_V2XInVoltage;
        rtb_LeIDCR_b_V2XInVoltageFA_out = false;

        /* Transition: '<S654>:21' */
    }
    else
    {
        /* Transition: '<S654>:24' */
        rtb_LeIDCR_b_V2XInVoltageFA_out = true;
    }

    /* End of Chart: '<S211>/PokeIDCR_U_V2XInVoltageChrt' */

    /* Outport: '<Root>/VeIDCR_U_V2X_InputVoltage' incorporates:
     *  SignalConversion generated from: '<S211>/VeIDCR_U_V2XInVoltage'
     */
    (void)Rte_Write_VeIDCR_U_V2X_InputVoltage_Value
        (IDCR_ac_B.LeIDCR_U_V2XInVoltage_out);

    /* Outport: '<Root>/VeIDCR_b_V2X_InputVoltage_FA' incorporates:
     *  SignalConversion generated from: '<S211>/VeIDCR_b_V2XInVoltageFA'
     */
    (void)Rte_Write_VeIDCR_b_V2X_InputVoltage_FA_Value
        (rtb_LeIDCR_b_V2XInVoltageFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_U_V2XInVoltage' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_U_V2XLVFeed(VAR(float32, AUTOMATIC)
    LeIDCR_U_V2XLVFeed, VAR(boolean, AUTOMATIC) LeIDCR_b_V2XLVFeedFA)
{
    boolean rtb_LeIDCR_b_V2XLVFeedFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_U_V2XLVFeed' */
    /* Chart: '<S212>/PokeIDCR_U_V2XLVFeedChrt' incorporates:
     *  SignalConversion generated from: '<S212>/LeIDCR_f_ACOutFreq1'
     *  SignalConversion generated from: '<S212>/LeIDCR_f_ACOutFreq'
     */
    /* Gateway: PokeIDCR_U_V2XLVFeed/PokeIDCR_U_V2XLVFeedChrt */
    /* During: PokeIDCR_U_V2XLVFeed/PokeIDCR_U_V2XLVFeedChrt */
    /* Entry Internal: PokeIDCR_U_V2XLVFeed/PokeIDCR_U_V2XLVFeedChrt */
    /* Transition: '<S655>:22' */
    if (!LeIDCR_b_V2XLVFeedFA)
    {
        /* Transition: '<S655>:23' */
        /* Transition: '<S655>:27' */
        IDCR_ac_B.LeIDCR_U_V2XLVFeed_out = LeIDCR_U_V2XLVFeed;
        rtb_LeIDCR_b_V2XLVFeedFA_out = false;

        /* Transition: '<S655>:21' */
    }
    else
    {
        /* Transition: '<S655>:24' */
        rtb_LeIDCR_b_V2XLVFeedFA_out = true;
    }

    /* End of Chart: '<S212>/PokeIDCR_U_V2XLVFeedChrt' */

    /* Outport: '<Root>/VeIDCR_U_V2X_LVFeed' incorporates:
     *  SignalConversion generated from: '<S212>/VeIDCR_U_V2XLVFeed'
     */
    (void)Rte_Write_VeIDCR_U_V2X_LVFeed_Value(IDCR_ac_B.LeIDCR_U_V2XLVFeed_out);

    /* Outport: '<Root>/VeIDCR_b_V2X_LVFeed_FA' incorporates:
     *  SignalConversion generated from: '<S212>/VeIDCR_b_V2XLVFeedFA'
     */
    (void)Rte_Write_VeIDCR_b_V2X_LVFeed_FA_Value(rtb_LeIDCR_b_V2XLVFeedFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_U_V2XLVFeed' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_U_VdcHvFdbk(VAR(float32, AUTOMATIC)
    LeIDCR_U_VdcHvFdbk)
{
    /* local block i/o variables */
    float32 rtb_LeIDCR_U_VdcHvFdbk_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_U_VdcHvFdbk' */
    /* Chart: '<S213>/PokeIDCR_U_VdcHvFdbkChrt' incorporates:
     *  SignalConversion generated from: '<S213>/LeIDCR_U_VdcHvFdbk'
     */
    /* Gateway: PokeIDCR_U_VdcHvFdbk/PokeIDCR_U_VdcHvFdbkChrt */
    /* During: PokeIDCR_U_VdcHvFdbk/PokeIDCR_U_VdcHvFdbkChrt */
    /* Entry Internal: PokeIDCR_U_VdcHvFdbk/PokeIDCR_U_VdcHvFdbkChrt */
    /* Transition: '<S656>:2' */
    rtb_LeIDCR_U_VdcHvFdbk_out = LeIDCR_U_VdcHvFdbk;

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_U_VdcHvFdbk' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_W_EVSE_SASPmax(VAR(float32, AUTOMATIC)
    LeIDCR_W_EVSE_SASPmax)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_W_EVSE_SASPmax' */
    /* Outport: '<Root>/VeIDCR_W_EVSE_SASPmax' incorporates:
     *  SignalConversion generated from: '<S214>/VeIDCR_W_EVSE_SASPmax'
     *  SignalConversion generated from: '<S214>/LeIDCR_W_EVSE_SASPmax'
     */
    /* Gateway: PokeIDCR_W_EVSE_SASPmax/PokeIDCR_W_EVSE_SASPmaxChrt */
    /* During: PokeIDCR_W_EVSE_SASPmax/PokeIDCR_W_EVSE_SASPmaxChrt */
    /* Entry Internal: PokeIDCR_W_EVSE_SASPmax/PokeIDCR_W_EVSE_SASPmaxChrt */
    /* Transition: '<S657>:2' */
    (void)Rte_Write_VeIDCR_W_EVSE_SASPmax_Value(LeIDCR_W_EVSE_SASPmax);

    /* Outport: '<Root>/VeIDCR_b_EVSE_SASPmaxFA' incorporates:
     *  Chart: '<S214>/PokeIDCR_W_EVSE_SASPmaxChrt'
     *  SignalConversion generated from: '<S214>/VeIDCR_b_EVSE_SASPmaxFA'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_SASPmaxFA_Value(false);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_W_EVSE_SASPmax' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_AC_LnHi(VAR(boolean, AUTOMATIC)
    LeIDCR_b_AC_LnHi)
{
    boolean rtb_LeIDCR_b_AC_LnHi_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_AC_LnHi' */
    /* Chart: '<S215>/PokeIDCR_b_AC_LnHiChrt' incorporates:
     *  Constant: '<S658>/Calib'
     *  SignalConversion generated from: '<S215>/LeIDCR_b_AC_LnHi'
     */
    /* Gateway: PokeIDCR_b_AC_LnHi/PokeIDCR_b_AC_LnHiChrt */
    /* During: PokeIDCR_b_AC_LnHi/PokeIDCR_b_AC_LnHiChrt */
    /* Entry Internal: PokeIDCR_b_AC_LnHi/PokeIDCR_b_AC_LnHiChrt */
    /* Transition: '<S659>:20' */
    if (!KeIDCR_b_AC_LnHi_Inverted)
    {
        /* Transition: '<S659>:24' */
        /* Transition: '<S659>:27' */
        rtb_LeIDCR_b_AC_LnHi_out = LeIDCR_b_AC_LnHi;

        /* Transition: '<S659>:22' */
    }
    else
    {
        /* Transition: '<S659>:26' */
        rtb_LeIDCR_b_AC_LnHi_out = !LeIDCR_b_AC_LnHi;
    }

    /* End of Chart: '<S215>/PokeIDCR_b_AC_LnHiChrt' */

    /* Outport: '<Root>/VeIDCR_b_AC_LnHi' incorporates:
     *  SignalConversion generated from: '<S215>/VeIDCR_b_AC_LnHi'
     */
    (void)Rte_Write_VeIDCR_b_AC_LnHi_Value(rtb_LeIDCR_b_AC_LnHi_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_AC_LnHi' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_AC_LnLow(VAR(boolean, AUTOMATIC)
    LeIDCR_b_AC_LnLow)
{
    boolean rtb_LeIDCR_b_AC_LnLow_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_AC_LnLow' */
    /* Chart: '<S216>/PokeIDCR_b_AC_LnLowChrt' incorporates:
     *  Constant: '<S660>/Calib'
     *  SignalConversion generated from: '<S216>/LeIDCR_b_AC_LnLow'
     */
    /* Gateway: PokeIDCR_b_AC_LnLow/PokeIDCR_b_AC_LnLowChrt */
    /* During: PokeIDCR_b_AC_LnLow/PokeIDCR_b_AC_LnLowChrt */
    /* Entry Internal: PokeIDCR_b_AC_LnLow/PokeIDCR_b_AC_LnLowChrt */
    /* Transition: '<S661>:26' */
    if (!KeIDCR_b_AC_LnLow_Inverted)
    {
        /* Transition: '<S661>:24' */
        /* Transition: '<S661>:23' */
        rtb_LeIDCR_b_AC_LnLow_out = LeIDCR_b_AC_LnLow;

        /* Transition: '<S661>:21' */
    }
    else
    {
        /* Transition: '<S661>:22' */
        rtb_LeIDCR_b_AC_LnLow_out = !LeIDCR_b_AC_LnLow;
    }

    /* End of Chart: '<S216>/PokeIDCR_b_AC_LnLowChrt' */

    /* Outport: '<Root>/VeIDCR_b_AC_LnLow' incorporates:
     *  SignalConversion generated from: '<S216>/VeIDCR_b_AC_LnLow'
     */
    (void)Rte_Write_VeIDCR_b_AC_LnLow_Value(rtb_LeIDCR_b_AC_LnLow_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_AC_LnLow' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_BattNotDetctd(VAR(boolean, AUTOMATIC)
    LeIDCR_b_BattNotDetctd)
{
    /* local block i/o variables */
    boolean rtb_LeIDCR_b_BattNotDetctd_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_BattNotDetctd' */
    /* Chart: '<S217>/PokeIDCR_b_BattNotDetctdChrt' incorporates:
     *  SignalConversion generated from: '<S217>/LeIDCR_b_BattNotDetctd'
     */
    /* Gateway: PokeIDCR_b_BattNotDetctd/PokeIDCR_b_BattNotDetctdChrt */
    /* During: PokeIDCR_b_BattNotDetctd/PokeIDCR_b_BattNotDetctdChrt */
    /* Entry Internal: PokeIDCR_b_BattNotDetctd/PokeIDCR_b_BattNotDetctdChrt */
    /* Transition: '<S662>:2' */
    rtb_LeIDCR_b_BattNotDetctd_out = LeIDCR_b_BattNotDetctd;

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_BattNotDetctd' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_ChgEnblSts(VAR(boolean, AUTOMATIC)
    LeIDCR_b_ChgEnblSts)
{
    /* local block i/o variables */
    boolean rtb_LeIDCR_b_ChgEnblSts_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_ChgEnblSts' */
    /* Chart: '<S218>/PokeIDCR_b_ChgEnblStsChrt' incorporates:
     *  SignalConversion generated from: '<S218>/LeIDCR_b_ChgEnblSts'
     */
    /* Gateway: PokeIDCR_b_ChgEnblSts/PokeIDCR_b_ChgEnblStsChrt */
    /* During: PokeIDCR_b_ChgEnblSts/PokeIDCR_b_ChgEnblStsChrt */
    /* Entry Internal: PokeIDCR_b_ChgEnblSts/PokeIDCR_b_ChgEnblStsChrt */
    /* Transition: '<S663>:2' */
    rtb_LeIDCR_b_ChgEnblSts_out = LeIDCR_b_ChgEnblSts;

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_ChgEnblSts' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_ChrgEnblOBCM(VAR(boolean, AUTOMATIC)
    LeIDCR_b_ChrgEnblOBCM)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_ChrgEnblOBCM' */
    /* Outport: '<Root>/VeIDCR_b_ChrgEnblOBCM' incorporates:
     *  SignalConversion generated from: '<S219>/VeIDCR_b_ChrgEnblOBCM'
     *  SignalConversion generated from: '<S219>/LeIDCR_b_ChrgEnblOBCM'
     */
    /* Gateway: PokeIDCR_b_ChrgEnblOBCM/PokeIDCR_b_ChrgEnblOBCMChrt */
    /* During: PokeIDCR_b_ChrgEnblOBCM/PokeIDCR_b_ChrgEnblOBCMChrt */
    /* Entry Internal: PokeIDCR_b_ChrgEnblOBCM/PokeIDCR_b_ChrgEnblOBCMChrt */
    /* Transition: '<S664>:2' */
    (void)Rte_Write_VeIDCR_b_ChrgEnblOBCM_Value(LeIDCR_b_ChrgEnblOBCM);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_ChrgEnblOBCM' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_ChrgFail_On_OBCM(VAR(boolean, AUTOMATIC)
    LeIDCR_b_ChrgFail_On_OBCM)
{
    /* local block i/o variables */
    boolean rtb_LeIDCR_b_ChrgFail_On_OBCM_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_ChrgFail_On_OBCM' */
    /* Chart: '<S220>/PokeIDCR_b_ChrgFail_On_OBCMChrt' incorporates:
     *  SignalConversion generated from: '<S220>/LeIDCR_b_ChrgFail_On_OBCM'
     */
    /* Gateway: PokeIDCR_b_ChrgFail_On_OBCM/PokeIDCR_b_ChrgFail_On_OBCMChrt */
    /* During: PokeIDCR_b_ChrgFail_On_OBCM/PokeIDCR_b_ChrgFail_On_OBCMChrt */
    /* Entry Internal: PokeIDCR_b_ChrgFail_On_OBCM/PokeIDCR_b_ChrgFail_On_OBCMChrt */
    /* Transition: '<S665>:2' */
    rtb_LeIDCR_b_ChrgFail_On_OBCM_out = LeIDCR_b_ChrgFail_On_OBCM;

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_ChrgFail_On_OBCM' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_DC_Isolation_Disable_Cmd(VAR(boolean, AUTOMATIC)
    LeIDCR_b_DC_Isolation_Disable_Cmd, VAR(boolean, AUTOMATIC)
    LeIDCR_b_DC_Isolation_Disable_Cmd_FA)
{
    boolean rtb_LeIDCR_b_DC_Isolation_Disable_Cmd_FA;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_DC_Isolation_Disable_Cmd' */
    /* Chart: '<S221>/PokeIDCR_b_DC_Isolation_Disable_CmdChrt' incorporates:
     *  SignalConversion generated from: '<S221>/LeIDCR_b_EVSE_ChargingSystemError'
     *  SignalConversion generated from: '<S221>/LeIDCR_b_EVSE_ChargingSystemError_FA'
     */
    /* Gateway: PokeIDCR_b_DC_Isolation_Disable_Cmd/PokeIDCR_b_DC_Isolation_Disable_CmdChrt */
    /* During: PokeIDCR_b_DC_Isolation_Disable_Cmd/PokeIDCR_b_DC_Isolation_Disable_CmdChrt */
    /* Entry Internal: PokeIDCR_b_DC_Isolation_Disable_Cmd/PokeIDCR_b_DC_Isolation_Disable_CmdChrt */
    /* Transition: '<S666>:2' */
    if (!LeIDCR_b_DC_Isolation_Disable_Cmd_FA)
    {
        /* Transition: '<S666>:23' */
        /* Transition: '<S666>:26' */
        IDCR_ac_B.LeIDCR_b_DC_Isolation_Disable_Cmd_out =
            LeIDCR_b_DC_Isolation_Disable_Cmd;
        rtb_LeIDCR_b_DC_Isolation_Disable_Cmd_FA = false;
    }
    else
    {
        /* Transition: '<S666>:27' */
        rtb_LeIDCR_b_DC_Isolation_Disable_Cmd_FA = true;

        /* Transition: '<S666>:28' */
    }

    /* End of Chart: '<S221>/PokeIDCR_b_DC_Isolation_Disable_CmdChrt' */

    /* Outport: '<Root>/VeIDCR_b_DC_Isolation_Disable_Cmd' incorporates:
     *  SignalConversion generated from: '<S221>/VeIDCR_b_DC_Isolation_Disable_Cmd'
     */
    (void)Rte_Write_VeIDCR_b_DC_Isolation_Disable_Cmd_Value
        (IDCR_ac_B.LeIDCR_b_DC_Isolation_Disable_Cmd_out);

    /* Outport: '<Root>/VeIDCR_b_DC_Isolation_Disable_Cmd_FA' incorporates:
     *  SignalConversion generated from: '<S221>/VeIDCR_b_DC_Isolation_Disable_Cmd_FA'
     */
    (void)Rte_Write_VeIDCR_b_DC_Isolation_Disable_Cmd_FA_Value
        (rtb_LeIDCR_b_DC_Isolation_Disable_Cmd_FA);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_DC_Isolation_Disable_Cmd' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_DC_TimeOut(VAR(boolean, AUTOMATIC)
    LeIDCR_b_DC_TimeOut)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_DC_TimeOut' */
    /* Outport: '<Root>/VeIDCR_b_DC_TimeOut' incorporates:
     *  SignalConversion generated from: '<S222>/VeIDCR_b_DC_TimeOut'
     *  SignalConversion generated from: '<S222>/LeIDCR_b_DC_TimeOut'
     */
    /* Gateway: PokeIDCR_b_DC_TimeOut/PokeIDCR_b_DC_TimeOutChrt */
    /* During: PokeIDCR_b_DC_TimeOut/PokeIDCR_b_DC_TimeOutChrt */
    /* Entry Internal: PokeIDCR_b_DC_TimeOut/PokeIDCR_b_DC_TimeOutChrt */
    /* Transition: '<S667>:2' */
    (void)Rte_Write_VeIDCR_b_DC_TimeOut_Value(LeIDCR_b_DC_TimeOut);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_DC_TimeOut' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_EVCC_FailureSts(VAR(boolean, AUTOMATIC)
    LeIDCR_b_EVCC_FailureSts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_EVCC_FailureSts' */
    /* Outport: '<Root>/VeIDCR_b_EVCC_FailureSts' incorporates:
     *  SignalConversion generated from: '<S223>/VeIDCR_b_EVCC_FailureSts'
     *  SignalConversion generated from: '<S223>/LeIDCR_b_EVCC_FailureSts'
     */
    /* Gateway: PokeIDCR_b_EVCC_FailureSts/PokeIDCR_b_EVCC_FailureStsChrt */
    /* During: PokeIDCR_b_EVCC_FailureSts/PokeIDCR_b_EVCC_FailureStsChrt */
    /* Entry Internal: PokeIDCR_b_EVCC_FailureSts/PokeIDCR_b_EVCC_FailureStsChrt */
    /* Transition: '<S668>:2' */
    (void)Rte_Write_VeIDCR_b_EVCC_FailureSts_Value(LeIDCR_b_EVCC_FailureSts);

    /* Outport: '<Root>/VeIDCR_b_EVCC_FailureSts_FA' incorporates:
     *  Chart: '<S223>/PokeIDCR_b_EVCC_FailureStsChrt'
     *  SignalConversion generated from: '<S223>/VeIDCR_b_EVCC_FailureSts_FA'
     */
    (void)Rte_Write_VeIDCR_b_EVCC_FailureSts_FA_Value(false);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_EVCC_FailureSts' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_EVSECurrLmtAchvd(VAR(uint8, AUTOMATIC)
    LeIDCR_b_EVSECurrLmtAchvd)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_EVSECurrLmtAchvd' */
    /* Outport: '<Root>/VeIDCR_b_EVSECurrLmtAchvd' incorporates:
     *  Chart: '<S224>/PokeIDCR_b_EVSECurrLmtAchvdChrt'
     *  Constant: '<S669>/Calib'
     *  SignalConversion generated from: '<S224>/VeIDCR_b_EVSECurrLmtAchvd'
     *  SignalConversion generated from: '<S224>/LeIDCR_b_EVSECurrLmtAchvd'
     */
    /* Gateway: PokeIDCR_b_EVSECurrLmtAchvd/PokeIDCR_b_EVSECurrLmtAchvdChrt */
    /* During: PokeIDCR_b_EVSECurrLmtAchvd/PokeIDCR_b_EVSECurrLmtAchvdChrt */
    /* Entry Internal: PokeIDCR_b_EVSECurrLmtAchvd/PokeIDCR_b_EVSECurrLmtAchvdChrt */
    /* Transition: '<S670>:2' */
    (void)Rte_Write_VeIDCR_b_EVSECurrLmtAchvd_Value(KaIDCR_b_EVSELmtAchvd_Map
        [(LeIDCR_b_EVSECurrLmtAchvd)]);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_EVSECurrLmtAchvd' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_EVSEProcessing(VAR(boolean, AUTOMATIC)
    LeIDCR_b_EVSEProcessing)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_EVSEProcessing' */
    /* Outport: '<Root>/VeIDCR_b_EVSEProcessing' incorporates:
     *  SignalConversion generated from: '<S225>/VeIDCR_b_EVSEProcessing'
     *  SignalConversion generated from: '<S225>/LeIDCR_b_EVSEProcessing'
     */
    /* Gateway: PokeIDCR_b_EVSEProcessing/PokeIDCR_b_EVSEProcessingChrt */
    /* During: PokeIDCR_b_EVSEProcessing/PokeIDCR_b_EVSEProcessingChrt */
    /* Entry Internal: PokeIDCR_b_EVSEProcessing/PokeIDCR_b_EVSEProcessingChrt */
    /* Transition: '<S671>:2' */
    (void)Rte_Write_VeIDCR_b_EVSEProcessing_Value(LeIDCR_b_EVSEProcessing);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_EVSEProcessing' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_EVSEPwrLmtAchvd(VAR(uint8, AUTOMATIC)
    LeIDCR_b_EVSEPwrLmtAchvd)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_EVSEPwrLmtAchvd' */
    /* Outport: '<Root>/VeIDCR_b_EVSEPwrLmtAchvd' incorporates:
     *  Chart: '<S226>/PokeIDCR_b_EVSEPwrLmtAchvdChrt'
     *  Constant: '<S672>/Calib'
     *  SignalConversion generated from: '<S226>/VeIDCR_b_EVSEPwrLmtAchvd'
     *  SignalConversion generated from: '<S226>/LeIDCR_b_EVSEPwrLmtAchvd'
     */
    /* Gateway: PokeIDCR_b_EVSEPwrLmtAchvd/PokeIDCR_b_EVSEPwrLmtAchvdChrt */
    /* During: PokeIDCR_b_EVSEPwrLmtAchvd/PokeIDCR_b_EVSEPwrLmtAchvdChrt */
    /* Entry Internal: PokeIDCR_b_EVSEPwrLmtAchvd/PokeIDCR_b_EVSEPwrLmtAchvdChrt */
    /* Transition: '<S673>:2' */
    (void)Rte_Write_VeIDCR_b_EVSEPwrLmtAchvd_Value(KaIDCR_b_EVSELmtAchvd_Map
        [(LeIDCR_b_EVSEPwrLmtAchvd)]);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_EVSEPwrLmtAchvd' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_EVSEVoltLmtAchvd(VAR(uint8, AUTOMATIC)
    LeIDCR_b_EVSEVoltLmtAchvd)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_EVSEVoltLmtAchvd' */
    /* Outport: '<Root>/VeIDCR_b_EVSEVoltLmtAchvd' incorporates:
     *  Chart: '<S227>/PokeIDCR_b_EVSEVoltLmtAchvdChrt'
     *  Constant: '<S674>/Calib'
     *  SignalConversion generated from: '<S227>/VeIDCR_b_EVSEVoltLmtAchvd'
     *  SignalConversion generated from: '<S227>/LeIDCR_b_EVSEVoltLmtAchvd'
     */
    /* Gateway: PokeIDCR_b_EVSEVoltLmtAchvd/PokeIDCR_b_EVSEVoltLmtAchvdChrt */
    /* During: PokeIDCR_b_EVSEVoltLmtAchvd/PokeIDCR_b_EVSEVoltLmtAchvdChrt */
    /* Entry Internal: PokeIDCR_b_EVSEVoltLmtAchvd/PokeIDCR_b_EVSEVoltLmtAchvdChrt */
    /* Transition: '<S675>:2' */
    (void)Rte_Write_VeIDCR_b_EVSEVoltLmtAchvd_Value(KaIDCR_b_EVSELmtAchvd_Map
        [(LeIDCR_b_EVSEVoltLmtAchvd)]);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_EVSEVoltLmtAchvd' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_EVSE_ChargingSystemError(VAR(boolean, AUTOMATIC)
    LeIDCR_b_EVSE_ChargingSystemError, VAR(boolean, AUTOMATIC)
    LeIDCR_b_EVSE_ChargingSystemError_FA)
{
    boolean rtb_LeIDCR_b_EVSE_ChargingSystemError_ou;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_EVSE_ChargingSystemError' */
    /* Chart: '<S228>/PokeIDCR_b_EVSE_ChargingSystemErrorChrt' incorporates:
     *  SignalConversion generated from: '<S228>/LeIDCR_b_V2L_Detected1'
     *  SignalConversion generated from: '<S228>/LeIDCR_b_V2L_Detected'
     */
    /* Gateway: PokeIDCR_b_EVSE_ChargingSystemError/PokeIDCR_b_EVSE_ChargingSystemErrorChrt */
    /* During: PokeIDCR_b_EVSE_ChargingSystemError/PokeIDCR_b_EVSE_ChargingSystemErrorChrt */
    /* Entry Internal: PokeIDCR_b_EVSE_ChargingSystemError/PokeIDCR_b_EVSE_ChargingSystemErrorChrt */
    /* Transition: '<S676>:2' */
    if (!LeIDCR_b_EVSE_ChargingSystemError_FA)
    {
        /* Transition: '<S676>:23' */
        /* Transition: '<S676>:26' */
        rtb_LeIDCR_b_EVSE_ChargingSystemError_ou =
            LeIDCR_b_EVSE_ChargingSystemError;
        IDCR_ac_B.LeIDCR_b_EVSE_ChargingSystemError_FA_out = false;
    }
    else
    {
        /* Transition: '<S676>:27' */
        rtb_LeIDCR_b_EVSE_ChargingSystemError_ou = true;

        /* Transition: '<S676>:28' */
    }

    /* End of Chart: '<S228>/PokeIDCR_b_EVSE_ChargingSystemErrorChrt' */

    /* Outport: '<Root>/VeIDCR_b_EVSE_ChargingSystemError' incorporates:
     *  SignalConversion generated from: '<S228>/VeIDCR_b_EVSE_ChargingSystemError'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_ChargingSystemError_Value
        (rtb_LeIDCR_b_EVSE_ChargingSystemError_ou);

    /* Outport: '<Root>/VeIDCR_b_EVSE_ChargingSystemError_FA' incorporates:
     *  SignalConversion generated from: '<S228>/VeIDCR_b_EVSE_ChargingSystemError_FA'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_ChargingSystemError_FA_Value
        (IDCR_ac_B.LeIDCR_b_EVSE_ChargingSystemError_FA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_EVSE_ChargingSystemError' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_EVSE_EnergizingState(VAR(boolean, AUTOMATIC)
    LeIDCR_b_EVSE_EnergizingState, VAR(boolean, AUTOMATIC)
    LeIDCR_b_EVSE_EnergizingState_FA)
{
    boolean rtb_LeIDCR_b_EVSE_EnergizingState_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_EVSE_EnergizingState' */
    /* Chart: '<S229>/PokeIDCR_b_EVSE_EnergizingStateChrt' incorporates:
     *  SignalConversion generated from: '<S229>/LeIDCR_b_EVSE_ChargingSystemError'
     *  SignalConversion generated from: '<S229>/LeIDCR_b_EVSE_ChargingSystemError_FA'
     */
    /* Gateway: PokeIDCR_b_EVSE_EnergizingState/PokeIDCR_b_EVSE_EnergizingStateChrt */
    /* During: PokeIDCR_b_EVSE_EnergizingState/PokeIDCR_b_EVSE_EnergizingStateChrt */
    /* Entry Internal: PokeIDCR_b_EVSE_EnergizingState/PokeIDCR_b_EVSE_EnergizingStateChrt */
    /* Transition: '<S677>:2' */
    if (!LeIDCR_b_EVSE_EnergizingState_FA)
    {
        /* Transition: '<S677>:23' */
        /* Transition: '<S677>:26' */
        rtb_LeIDCR_b_EVSE_EnergizingState_out = LeIDCR_b_EVSE_EnergizingState;
        IDCR_ac_B.LeIDCR_b_EVSE_EnergizingState_FA_out = false;
    }
    else
    {
        /* Transition: '<S677>:27' */
        rtb_LeIDCR_b_EVSE_EnergizingState_out = true;

        /* Transition: '<S677>:28' */
    }

    /* End of Chart: '<S229>/PokeIDCR_b_EVSE_EnergizingStateChrt' */

    /* Outport: '<Root>/VeIDCR_b_EVSE_EnergizingState' incorporates:
     *  SignalConversion generated from: '<S229>/VeIDCR_b_EVSE_EnergizingState'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_EnergizingState_Value
        (rtb_LeIDCR_b_EVSE_EnergizingState_out);

    /* Outport: '<Root>/VeIDCR_b_EVSE_EnergizingState_FA' incorporates:
     *  SignalConversion generated from: '<S229>/VeIDCR_b_EVSE_EnergizingState_FA'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_EnergizingState_FA_Value
        (IDCR_ac_B.LeIDCR_b_EVSE_EnergizingState_FA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_EVSE_EnergizingState' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_EVSE_FreeService(VAR(boolean, AUTOMATIC)
    LeIDCR_b_EVSE_FreeService)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_EVSE_FreeService' */
    /* Outport: '<Root>/VeIDCR_b_EVSE_FreeService' incorporates:
     *  SignalConversion generated from: '<S230>/VeIDCR_b_EVSE_FreeService'
     *  SignalConversion generated from: '<S230>/LeIDCR_b_EVSE_FreeService'
     */
    /* Gateway: PokeIDCR_b_EVSE_FreeService/PokeIDCR_b_EVSE_FreeServiceChrt */
    /* During: PokeIDCR_b_EVSE_FreeService/PokeIDCR_b_EVSE_FreeServiceChrt */
    /* Entry Internal: PokeIDCR_b_EVSE_FreeService/PokeIDCR_b_EVSE_FreeServiceChrt */
    /* Transition: '<S678>:2' */
    (void)Rte_Write_VeIDCR_b_EVSE_FreeService_Value(LeIDCR_b_EVSE_FreeService);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_EVSE_FreeService' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_EVSE_OfferedPaymentContract(VAR(boolean,
    AUTOMATIC) LeIDCR_b_EVSE_OfferedPaymentContract)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_EVSE_OfferedPaymentContract' */
    /* Outport: '<Root>/VeIDCR_b_OfferedPaymentContract' incorporates:
     *  SignalConversion generated from: '<S231>/VeIDCR_b_EVSE_OfferedPaymentContract'
     *  SignalConversion generated from: '<S231>/LeIDCR_b_EVSE_OfferedPaymentContract'
     */
    /* Gateway: PokeIDCR_b_EVSE_OfferedPaymentContract/PokeIDCR_b_EVSE_OfferedPaymentContractChrt */
    /* During: PokeIDCR_b_EVSE_OfferedPaymentContract/PokeIDCR_b_EVSE_OfferedPaymentContractChrt */
    /* Entry Internal: PokeIDCR_b_EVSE_OfferedPaymentContract/PokeIDCR_b_EVSE_OfferedPaymentContractChrt */
    /* Transition: '<S679>:2' */
    (void)Rte_Write_VeIDCR_b_OfferedPaymentContract_Value
        (LeIDCR_b_EVSE_OfferedPaymentContract);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_EVSE_OfferedPaymentContract' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_EVSE_OfferedPaymentEIM(VAR(boolean, AUTOMATIC)
    LeIDCR_b_EVSE_OfferedPaymentEIM)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_EVSE_OfferedPaymentEIM' */
    /* Outport: '<Root>/VeIDCR_b_OfferedPaymentEIM' incorporates:
     *  SignalConversion generated from: '<S232>/VeIDCR_b_EVSE_OfferedPaymentEIM'
     *  SignalConversion generated from: '<S232>/LeIDCR_b_EVSE_OfferedPaymentEIM'
     */
    /* Gateway: PokeIDCR_b_EVSE_OfferedPaymentEIM/PokeIDCR_b_EVSE_OfferedPaymentEIMChrt */
    /* During: PokeIDCR_b_EVSE_OfferedPaymentEIM/PokeIDCR_b_EVSE_OfferedPaymentEIMChrt */
    /* Entry Internal: PokeIDCR_b_EVSE_OfferedPaymentEIM/PokeIDCR_b_EVSE_OfferedPaymentEIMChrt */
    /* Transition: '<S680>:2' */
    (void)Rte_Write_VeIDCR_b_OfferedPaymentEIM_Value
        (LeIDCR_b_EVSE_OfferedPaymentEIM);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_EVSE_OfferedPaymentEIM' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_EVSE_Offered_AC_Single_Phase(VAR(boolean,
    AUTOMATIC) LeIDCR_b_EVSE_Offered_AC_Single_Phase, VAR(boolean, AUTOMATIC)
    LeIDCR_b_EVSE_Offered_AC_Single_Phase_FA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_EVSE_Offered_AC_Single_Phase' */
    /* Outport: '<Root>/VeIDCR_b_EVSE_Offered_AC_Single_Phase' incorporates:
     *  SignalConversion generated from: '<S233>/VeIDCR_b_EVSE_Offered_AC_Single_Phase'
     *  SignalConversion generated from: '<S233>/LeIDCR_b_V2L_Detected'
     */
    /* Gateway: PokeIDCR_b_EVSE_Offered_AC_Single_Phase/PokeIDCR_b_EVSE_Offered_AC_Single_PhaseChrt */
    /* During: PokeIDCR_b_EVSE_Offered_AC_Single_Phase/PokeIDCR_b_EVSE_Offered_AC_Single_PhaseChrt */
    /* Entry Internal: PokeIDCR_b_EVSE_Offered_AC_Single_Phase/PokeIDCR_b_EVSE_Offered_AC_Single_PhaseChrt */
    /* Transition: '<S681>:2' */
    (void)Rte_Write_VeIDCR_b_EVSE_Offered_AC_Single_Phase_Value
        (LeIDCR_b_EVSE_Offered_AC_Single_Phase);

    /* Outport: '<Root>/VeIDCR_b_EVSE_Offered_AC_Single_Phase_FA' incorporates:
     *  SignalConversion generated from: '<S233>/VeIDCR_b_EVSE_Offered_AC_Single_Phase_FA'
     *  SignalConversion generated from: '<S233>/LeIDCR_b_V2L_Detected1'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_Offered_AC_Single_Phase_FA_Value
        (LeIDCR_b_EVSE_Offered_AC_Single_Phase_FA);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_EVSE_Offered_AC_Single_Phase' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_EVSE_Offered_AC_Three_Phase(VAR(boolean,
    AUTOMATIC) LeIDCR_b_EVSE_Offered_AC_Three_Phase, VAR(boolean, AUTOMATIC)
    LeIDCR_b_EVSE_Offered_AC_Three_Phase_FA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_EVSE_Offered_AC_Three_Phase' */
    /* Outport: '<Root>/VeIDCR_b_EVSE_Offered_AC_Three_Phase' incorporates:
     *  SignalConversion generated from: '<S234>/VeIDCR_b_EVSE_Offered_AC_Three_Phase'
     *  SignalConversion generated from: '<S234>/LeIDCR_b_V2L_Detected'
     */
    /* Gateway: PokeIDCR_b_EVSE_Offered_AC_Three_Phase/PokeIDCR_b_EVSE_Offered_AC_Three_PhaseChrt */
    /* During: PokeIDCR_b_EVSE_Offered_AC_Three_Phase/PokeIDCR_b_EVSE_Offered_AC_Three_PhaseChrt */
    /* Entry Internal: PokeIDCR_b_EVSE_Offered_AC_Three_Phase/PokeIDCR_b_EVSE_Offered_AC_Three_PhaseChrt */
    /* Transition: '<S682>:2' */
    (void)Rte_Write_VeIDCR_b_EVSE_Offered_AC_Three_Phase_Value
        (LeIDCR_b_EVSE_Offered_AC_Three_Phase);

    /* Outport: '<Root>/VeIDCR_b_EVSE_Offered_AC_Three_Phase_FA' incorporates:
     *  SignalConversion generated from: '<S234>/VeIDCR_b_EVSE_Offered_AC_Three_Phase_FA'
     *  SignalConversion generated from: '<S234>/LeIDCR_b_V2L_Detected1'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_Offered_AC_Three_Phase_FA_Value
        (LeIDCR_b_EVSE_Offered_AC_Three_Phase_FA);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_EVSE_Offered_AC_Three_Phase' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_EVSE_Offered_DC_Extended(VAR(boolean, AUTOMATIC)
    LeIDCR_b_EVSE_Offered_DC_Extended, VAR(boolean, AUTOMATIC)
    LeIDCR_b_EVSE_Offered_DC_Extended_FA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_EVSE_Offered_DC_Extended' */
    /* Outport: '<Root>/VeIDCR_b_EVSE_Offered_DC_Extended' incorporates:
     *  SignalConversion generated from: '<S235>/VeIDCR_b_EVSE_Offered_DC_Extended'
     *  SignalConversion generated from: '<S235>/LeIDCR_b_V2L_Detected'
     */
    /* Gateway: PokeIDCR_b_EVSE_Offered_DC_Extended/PokeIDCR_b_EVSE_Offered_DC_ExtendedChrt */
    /* During: PokeIDCR_b_EVSE_Offered_DC_Extended/PokeIDCR_b_EVSE_Offered_DC_ExtendedChrt */
    /* Entry Internal: PokeIDCR_b_EVSE_Offered_DC_Extended/PokeIDCR_b_EVSE_Offered_DC_ExtendedChrt */
    /* Transition: '<S683>:2' */
    (void)Rte_Write_VeIDCR_b_EVSE_Offered_DC_Extended_Value
        (LeIDCR_b_EVSE_Offered_DC_Extended);

    /* Outport: '<Root>/VeIDCR_b_EVSE_Offered_DC_Extended_FA' incorporates:
     *  SignalConversion generated from: '<S235>/VeIDCR_b_EVSE_Offered_DC_Extended_FA'
     *  SignalConversion generated from: '<S235>/LeIDCR_b_V2L_Detected1'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_Offered_DC_Extended_FA_Value
        (LeIDCR_b_EVSE_Offered_DC_Extended_FA);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_EVSE_Offered_DC_Extended' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_EVSE_Service1_Charging(VAR(boolean, AUTOMATIC)
    LeIDCR_b_EVSE_Service1_Charging, VAR(boolean, AUTOMATIC)
    LeIDCR_b_EVSE_Service1_Charging_FA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_EVSE_Service1_Charging' */
    /* Outport: '<Root>/VeIDCR_b_EVSE_Service1_Charging' incorporates:
     *  SignalConversion generated from: '<S236>/VeIDCR_b_EVSE_Service1_Charging'
     *  SignalConversion generated from: '<S236>/LeIDCR_b_V2L_Detected'
     */
    /* Gateway: PokeIDCR_b_EVSE_Service1_Charging/PokeIDCR_b_EVSE_Service1_ChargingChrt */
    /* During: PokeIDCR_b_EVSE_Service1_Charging/PokeIDCR_b_EVSE_Service1_ChargingChrt */
    /* Entry Internal: PokeIDCR_b_EVSE_Service1_Charging/PokeIDCR_b_EVSE_Service1_ChargingChrt */
    /* Transition: '<S684>:2' */
    (void)Rte_Write_VeIDCR_b_EVSE_Service1_Charging_Value
        (LeIDCR_b_EVSE_Service1_Charging);

    /* Outport: '<Root>/VeIDCR_b_EVSE_Service1_Charging_FA' incorporates:
     *  SignalConversion generated from: '<S236>/VeIDCR_b_EVSE_Service1_Charging_FA'
     *  SignalConversion generated from: '<S236>/LeIDCR_b_V2L_Detected1'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_Service1_Charging_FA_Value
        (LeIDCR_b_EVSE_Service1_Charging_FA);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_EVSE_Service1_Charging' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_EVSE_Service1_Free(VAR(boolean, AUTOMATIC)
    LeIDCR_b_EVSE_Service1_Free, VAR(boolean, AUTOMATIC)
    LeIDCR_b_EVSE_Service1_Free_FA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_EVSE_Service1_Free' */
    /* Outport: '<Root>/VeIDCR_b_EVSE_Service1_Free' incorporates:
     *  SignalConversion generated from: '<S237>/VeIDCR_b_EVSE_Service1_Free'
     *  SignalConversion generated from: '<S237>/LeIDCR_b_V2L_Detected'
     */
    /* Gateway: PokeIDCR_b_EVSE_Service1_Free/PokeIDCR_b_EVSE_Service1_FreeChrt */
    /* During: PokeIDCR_b_EVSE_Service1_Free/PokeIDCR_b_EVSE_Service1_FreeChrt */
    /* Entry Internal: PokeIDCR_b_EVSE_Service1_Free/PokeIDCR_b_EVSE_Service1_FreeChrt */
    /* Transition: '<S685>:2' */
    (void)Rte_Write_VeIDCR_b_EVSE_Service1_Free_Value
        (LeIDCR_b_EVSE_Service1_Free);

    /* Outport: '<Root>/VeIDCR_b_EVSE_Service1_Free_FA' incorporates:
     *  SignalConversion generated from: '<S237>/VeIDCR_b_EVSE_Service1_Free_FA'
     *  SignalConversion generated from: '<S237>/LeIDCR_b_V2L_Detected1'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_Service1_Free_FA_Value
        (LeIDCR_b_EVSE_Service1_Free_FA);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_EVSE_Service1_Free' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_EVSE_Service2_Certificate(VAR(boolean,
    AUTOMATIC) LeIDCR_b_EVSE_Service2_Certificate)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_EVSE_Service2_Certificate' */
    /* Outport: '<Root>/VeIDCR_b_Service2_Certificate' incorporates:
     *  SignalConversion generated from: '<S238>/VeIDCR_b_EVSE_Service2_Certificate'
     *  SignalConversion generated from: '<S238>/LeIDCR_b_EVSE_Service2_Certificate'
     */
    /* Gateway: PokeIDCR_b_EVSE_Service2_Certificate/PokeIDCR_b_EVSE_Service2_CertificateChrt */
    /* During: PokeIDCR_b_EVSE_Service2_Certificate/PokeIDCR_b_EVSE_Service2_CertificateChrt */
    /* Entry Internal: PokeIDCR_b_EVSE_Service2_Certificate/PokeIDCR_b_EVSE_Service2_CertificateChrt */
    /* Transition: '<S686>:2' */
    (void)Rte_Write_VeIDCR_b_Service2_Certificate_Value
        (LeIDCR_b_EVSE_Service2_Certificate);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_EVSE_Service2_Certificate' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_EVSE_Supported_DIN(VAR(boolean, AUTOMATIC)
    LeIDCR_b_EVSE_Supported_DIN)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_EVSE_Supported_DIN' */
    /* Outport: '<Root>/VeIDCR_b_EVSEsupported_DIN' incorporates:
     *  SignalConversion generated from: '<S239>/VeIDCR_b_EVSE_Supported_DIN'
     *  SignalConversion generated from: '<S239>/LeIDCR_b_EVSE_Supported_DIN'
     */
    /* Gateway: PokeIDCR_b_EVSE_Supported_DIN/PokeIDCR_b_EVSE_Supported_DINChrt */
    /* During: PokeIDCR_b_EVSE_Supported_DIN/PokeIDCR_b_EVSE_Supported_DINChrt */
    /* Entry Internal: PokeIDCR_b_EVSE_Supported_DIN/PokeIDCR_b_EVSE_Supported_DINChrt */
    /* Transition: '<S687>:2' */
    (void)Rte_Write_VeIDCR_b_EVSEsupported_DIN_Value(LeIDCR_b_EVSE_Supported_DIN);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_EVSE_Supported_DIN' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_EVSE_Supported_ISO1(VAR(boolean, AUTOMATIC)
    LeIDCR_b_EVSE_Supported_ISO1)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_EVSE_Supported_ISO1' */
    /* Outport: '<Root>/VeIDCR_b_EVSEsupported_ISO1' incorporates:
     *  SignalConversion generated from: '<S240>/VeIDCR_b_EVSE_Supported_ISO1'
     *  SignalConversion generated from: '<S240>/LeIDCR_b_EVSE_Supported_ISO1'
     */
    /* Gateway: PokeIDCR_b_EVSE_Supported_ISO1/PokeIDCR_b_EVSE_Supported_ISO1Chrt */
    /* During: PokeIDCR_b_EVSE_Supported_ISO1/PokeIDCR_b_EVSE_Supported_ISO1Chrt */
    /* Entry Internal: PokeIDCR_b_EVSE_Supported_ISO1/PokeIDCR_b_EVSE_Supported_ISO1Chrt */
    /* Transition: '<S688>:2' */
    (void)Rte_Write_VeIDCR_b_EVSEsupported_ISO1_Value
        (LeIDCR_b_EVSE_Supported_ISO1);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_EVSE_Supported_ISO1' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_EVSE_TLS_OFFERED(VAR(boolean, AUTOMATIC)
    LeIDCR_b_EVSE_TLS_OFFERED)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_EVSE_TLS_OFFERED' */
    /* Outport: '<Root>/VeIDCR_b_TLS_Offered' incorporates:
     *  SignalConversion generated from: '<S241>/VeIDCR_b_EVSE_TLS_OFFERED'
     *  SignalConversion generated from: '<S241>/LeIDCR_b_EVSE_TLS_OFFERED'
     */
    /* Gateway: PokeIDCR_b_EVSE_TLS_OFFERED/PokeIDCR_b_EVSE_TLS_OFFEREDChrt */
    /* During: PokeIDCR_b_EVSE_TLS_OFFERED/PokeIDCR_b_EVSE_TLS_OFFEREDChrt */
    /* Entry Internal: PokeIDCR_b_EVSE_TLS_OFFERED/PokeIDCR_b_EVSE_TLS_OFFEREDChrt */
    /* Transition: '<S689>:2' */
    (void)Rte_Write_VeIDCR_b_TLS_Offered_Value(LeIDCR_b_EVSE_TLS_OFFERED);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_EVSE_TLS_OFFERED' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_EVSer_On_OBCM(VAR(boolean, AUTOMATIC)
    LeIDCR_b_EVSer_On_OBCM)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_EVSer_On_OBCM' */
    /* Outport: '<Root>/VeIDCR_b_EVSer_On_OBCM' incorporates:
     *  SignalConversion generated from: '<S242>/VeIDCR_b_EVSer_On_OBCM'
     *  SignalConversion generated from: '<S242>/LeIDCR_b_EVSer_On_OBCM'
     */
    /* Gateway: PokeIDCR_b_EVSer_On_OBCM/PokeIDCR_b_EVSer_On_OBCMChrt */
    /* During: PokeIDCR_b_EVSer_On_OBCM/PokeIDCR_b_EVSer_On_OBCMChrt */
    /* Entry Internal: PokeIDCR_b_EVSer_On_OBCM/PokeIDCR_b_EVSer_On_OBCMChrt */
    /* Transition: '<S690>:2' */
    (void)Rte_Write_VeIDCR_b_EVSer_On_OBCM_Value(LeIDCR_b_EVSer_On_OBCM);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_EVSer_On_OBCM' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_GBT_EVSE_Charge_Permitting(VAR(boolean,
    AUTOMATIC) LeIDCR_b_GBT_EVSE_Charge_Permitting)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_GBT_EVSE_Charge_Permitting' */
    /* Outport: '<Root>/VeIDCR_b_GBT_EVSEChrgPermitting' incorporates:
     *  SignalConversion generated from: '<S243>/VeIDCR_b_GBT_EVSE_Charge_Permitting'
     *  SignalConversion generated from: '<S243>/LeIDCR_b_GBT_EVSE_Charge_Permitting'
     */
    /* Gateway: PokeIDCR_b_GBT_EVSE_Charge_Permitting/PokeIDCR_b_GBT_EVSE_Charge_PermittingChrt */
    /* During: PokeIDCR_b_GBT_EVSE_Charge_Permitting/PokeIDCR_b_GBT_EVSE_Charge_PermittingChrt */
    /* Entry Internal: PokeIDCR_b_GBT_EVSE_Charge_Permitting/PokeIDCR_b_GBT_EVSE_Charge_PermittingChrt */
    /* Transition: '<S691>:2' */
    (void)Rte_Write_VeIDCR_b_GBT_EVSEChrgPermitting_Value
        (LeIDCR_b_GBT_EVSE_Charge_Permitting);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_GBT_EVSE_Charge_Permitting' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_HVBatPerWU12VChrg(VAR(boolean, AUTOMATIC)
    LeIDCR_b_HVBatPerWU12VChrg)
{
    /* local block i/o variables */
    boolean rtb_LeIDCR_b_HVBatPerWU12VChrg_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_HVBatPerWU12VChrg' */
    /* Chart: '<S244>/PokeIDCR_b_HVBatPerWU12VChrgChrt' incorporates:
     *  SignalConversion generated from: '<S244>/LeIDCR_b_HVBatPerWU12VChrg'
     */
    /* Gateway: PokeIDCR_b_HVBatPerWU12VChrg/PokeIDCR_b_HVBatPerWU12VChrgChrt */
    /* During: PokeIDCR_b_HVBatPerWU12VChrg/PokeIDCR_b_HVBatPerWU12VChrgChrt */
    /* Entry Internal: PokeIDCR_b_HVBatPerWU12VChrg/PokeIDCR_b_HVBatPerWU12VChrgChrt */
    /* Transition: '<S692>:2' */
    rtb_LeIDCR_b_HVBatPerWU12VChrg_out = LeIDCR_b_HVBatPerWU12VChrg;

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_HVBatPerWU12VChrg' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_HVIL_A_Failed(VAR(boolean, AUTOMATIC)
    LeIDCR_b_HVIL_A_Failed)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_HVIL_A_Failed' */
    /* Outport: '<Root>/VeIDCR_b_HVIL_A_Failed' incorporates:
     *  SignalConversion generated from: '<S245>/VeIDCR_b_HVIL_A_Failed'
     *  SignalConversion generated from: '<S245>/LeIDCR_b_HVIL_A_Failed'
     */
    /* Gateway: PokeIDCR_b_HVIL_A_Failed/PokeIDCR_b_HVIL_A_FailedChrt */
    /* During: PokeIDCR_b_HVIL_A_Failed/PokeIDCR_b_HVIL_A_FailedChrt */
    /* Entry Internal: PokeIDCR_b_HVIL_A_Failed/PokeIDCR_b_HVIL_A_FailedChrt */
    /* Transition: '<S693>:2' */
    (void)Rte_Write_VeIDCR_b_HVIL_A_Failed_Value(LeIDCR_b_HVIL_A_Failed);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_HVIL_A_Failed' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_HVIL_B_Failed(VAR(boolean, AUTOMATIC)
    LeIDCR_b_HVIL_B_Failed)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_HVIL_B_Failed' */
    /* Outport: '<Root>/VeIDCR_b_HVIL_B_Failed' incorporates:
     *  SignalConversion generated from: '<S246>/VeIDCR_b_HVIL_B_Failed'
     *  SignalConversion generated from: '<S246>/LeIDCR_b_HVIL_B_Failed'
     */
    /* Gateway: PokeIDCR_b_HVIL_B_Failed/PokeIDCR_b_HVIL_B_FailedChrt */
    /* During: PokeIDCR_b_HVIL_B_Failed/PokeIDCR_b_HVIL_B_FailedChrt */
    /* Entry Internal: PokeIDCR_b_HVIL_B_Failed/PokeIDCR_b_HVIL_B_FailedChrt */
    /* Transition: '<S694>:2' */
    (void)Rte_Write_VeIDCR_b_HVIL_B_Failed_Value(LeIDCR_b_HVIL_B_Failed);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_HVIL_B_Failed' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_HVIL_C_Failed(VAR(boolean, AUTOMATIC)
    LeIDCR_b_HVIL_C_Failed)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_HVIL_C_Failed' */
    /* Outport: '<Root>/VeIDCR_b_HVIL_C_Failed' incorporates:
     *  SignalConversion generated from: '<S247>/VeIDCR_b_HVIL_C_Failed'
     *  SignalConversion generated from: '<S247>/LeIDCR_b_HVIL_C_Failed'
     */
    /* Gateway: PokeIDCR_b_HVIL_C_Failed/PokeIDCR_b_HVIL_C_FailedChrt */
    /* During: PokeIDCR_b_HVIL_C_Failed/PokeIDCR_b_HVIL_C_FailedChrt */
    /* Entry Internal: PokeIDCR_b_HVIL_C_Failed/PokeIDCR_b_HVIL_C_FailedChrt */
    /* Transition: '<S695>:2' */
    (void)Rte_Write_VeIDCR_b_HVIL_C_Failed_Value(LeIDCR_b_HVIL_C_Failed);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_HVIL_C_Failed' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_HvOverVStatus(VAR(boolean, AUTOMATIC)
    LeIDCR_b_HvOverVStatus)
{
    /* local block i/o variables */
    boolean rtb_LeIDCR_b_HvOverVStatus_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_HvOverVStatus' */
    /* Chart: '<S248>/PokeIDCR_b_HvOverVStatusChrt' incorporates:
     *  SignalConversion generated from: '<S248>/LeIDCR_b_HvOverVStatus'
     */
    /* Gateway: PokeIDCR_b_HvOverVStatus/PokeIDCR_b_HvOverVStatusChrt */
    /* During: PokeIDCR_b_HvOverVStatus/PokeIDCR_b_HvOverVStatusChrt */
    /* Entry Internal: PokeIDCR_b_HvOverVStatus/PokeIDCR_b_HvOverVStatusChrt */
    /* Transition: '<S696>:2' */
    rtb_LeIDCR_b_HvOverVStatus_out = LeIDCR_b_HvOverVStatus;

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_HvOverVStatus' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_HvTooHighIStatus(VAR(boolean, AUTOMATIC)
    LeIDCR_b_HvTooHighIStatus)
{
    /* local block i/o variables */
    boolean rtb_LeIDCR_b_HvTooHighIStatus_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_HvTooHighIStatus' */
    /* Chart: '<S249>/PokeIDCR_b_HvTooHighIStatusChrt' incorporates:
     *  SignalConversion generated from: '<S249>/LeIDCR_b_HvTooHighIStatus'
     */
    /* Gateway: PokeIDCR_b_HvTooHighIStatus/PokeIDCR_b_HvTooHighIStatusChrt */
    /* During: PokeIDCR_b_HvTooHighIStatus/PokeIDCR_b_HvTooHighIStatusChrt */
    /* Entry Internal: PokeIDCR_b_HvTooHighIStatus/PokeIDCR_b_HvTooHighIStatusChrt */
    /* Transition: '<S697>:2' */
    rtb_LeIDCR_b_HvTooHighIStatus_out = LeIDCR_b_HvTooHighIStatus;

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_HvTooHighIStatus' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_HvTooLowVStatus(VAR(boolean, AUTOMATIC)
    LeIDCR_b_HvTooLowVStatus)
{
    /* local block i/o variables */
    boolean rtb_LeIDCR_b_HvTooLowVStatus_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_HvTooLowVStatus' */
    /* Chart: '<S250>/PokeIDCR_b_HvTooLowVStatusChrt' incorporates:
     *  SignalConversion generated from: '<S250>/LeIDCR_b_HvTooLowVStatus'
     */
    /* Gateway: PokeIDCR_b_HvTooLowVStatus/PokeIDCR_b_HvTooLowVStatusChrt */
    /* During: PokeIDCR_b_HvTooLowVStatus/PokeIDCR_b_HvTooLowVStatusChrt */
    /* Entry Internal: PokeIDCR_b_HvTooLowVStatus/PokeIDCR_b_HvTooLowVStatusChrt */
    /* Transition: '<S698>:2' */
    rtb_LeIDCR_b_HvTooLowVStatus_out = LeIDCR_b_HvTooLowVStatus;

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_HvTooLowVStatus' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_IDCM_DCCA(VAR(boolean, AUTOMATIC)
    LeIDCR_b_IDCM_DCCA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_IDCM_DCCA' */
    /* Outport: '<Root>/VeIDCR_b_IDCM_DCCA' incorporates:
     *  SignalConversion generated from: '<S251>/VeIDCR_b_IDCM_DCCA'
     *  SignalConversion generated from: '<S251>/LeIDCR_b_IDCM_DCCA'
     */
    /* Gateway: PokeIDCR_b_IDCM_DCCA/PokeIDCR_b_IDCM_DCCAChrt */
    /* During: PokeIDCR_b_IDCM_DCCA/PokeIDCR_b_IDCM_DCCAChrt */
    /* Entry Internal: PokeIDCR_b_IDCM_DCCA/PokeIDCR_b_IDCM_DCCAChrt */
    /* Transition: '<S699>:2' */
    (void)Rte_Write_VeIDCR_b_IDCM_DCCA_Value(LeIDCR_b_IDCM_DCCA);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_IDCM_DCCA' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_IDCM_GFCI_FaultSts(VAR(boolean, AUTOMATIC)
    LeIDCR_b_IDCM_GFCI_FaultSts, VAR(boolean, AUTOMATIC)
    LeIDCR_b_IDCM_GFCI_FaultSts_FA)
{
    boolean rtb_LeIDCR_b_IDCM_GFCI_FaultSts_FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_IDCM_GFCI_FaultSts' */
    /* Chart: '<S252>/PokeIDCR_b_IDCM_GFCI_FaultStsChrt' incorporates:
     *  SignalConversion generated from: '<S252>/LeIDCR_b_V2L_Detected1'
     *  SignalConversion generated from: '<S252>/LeIDCR_b_V2L_Detected'
     */
    /* Gateway: PokeIDCR_b_IDCM_GFCI_FaultSts/PokeIDCR_b_IDCM_GFCI_FaultStsChrt */
    /* During: PokeIDCR_b_IDCM_GFCI_FaultSts/PokeIDCR_b_IDCM_GFCI_FaultStsChrt */
    /* Entry Internal: PokeIDCR_b_IDCM_GFCI_FaultSts/PokeIDCR_b_IDCM_GFCI_FaultStsChrt */
    /* Transition: '<S700>:2' */
    if (!LeIDCR_b_IDCM_GFCI_FaultSts_FA)
    {
        /* Transition: '<S700>:23' */
        /* Transition: '<S700>:26' */
        IDCR_ac_B.LeIDCR_b_IDCM_GFCI_FaultSts_out = LeIDCR_b_IDCM_GFCI_FaultSts;
        rtb_LeIDCR_b_IDCM_GFCI_FaultSts_FA_out = false;
    }
    else
    {
        /* Transition: '<S700>:27' */
        rtb_LeIDCR_b_IDCM_GFCI_FaultSts_FA_out = true;

        /* Transition: '<S700>:28' */
    }

    /* End of Chart: '<S252>/PokeIDCR_b_IDCM_GFCI_FaultStsChrt' */

    /* Outport: '<Root>/VeIDCR_b_IDCM_GFCI_Fault_Status' incorporates:
     *  SignalConversion generated from: '<S252>/VeIDCR_b_IDCM_GFCI_FaultSts'
     */
    (void)Rte_Write_VeIDCR_b_IDCM_GFCI_Fault_Status_Value
        (IDCR_ac_B.LeIDCR_b_IDCM_GFCI_FaultSts_out);

    /* Outport: '<Root>/VeIDCR_b_IDCM_GFCI_Fault_Status_FA' incorporates:
     *  SignalConversion generated from: '<S252>/VeIDCR_b_IDCM_GFCI_FaultSts_FA'
     */
    (void)Rte_Write_VeIDCR_b_IDCM_GFCI_Fault_Status_FA_Value
        (rtb_LeIDCR_b_IDCM_GFCI_FaultSts_FA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_IDCM_GFCI_FaultSts' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_IDCM_Wakeup_HCP(VAR(boolean, AUTOMATIC)
    LeIDCR_b_IDCM_Wakeup_HCP, VAR(boolean, AUTOMATIC)
    LeIDCR_b_IDCM_Wakeup_HCP_FA)
{
    boolean rtb_LeIDCR_b_IDCM_Wakeup_HCP_FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_IDCM_Wakeup_HCP' */
    /* Chart: '<S253>/PokeIDCR_b_IDCM_Wakeup_HCPChrt' incorporates:
     *  SignalConversion generated from: '<S253>/LeIDCR_b_EVSE_ChargingSystemError'
     *  SignalConversion generated from: '<S253>/LeIDCR_b_EVSE_ChargingSystemError_FA'
     */
    /* Gateway: PokeIDCR_b_IDCM_Wakeup_HCP/PokeIDCR_b_IDCM_Wakeup_HCPChrt */
    /* During: PokeIDCR_b_IDCM_Wakeup_HCP/PokeIDCR_b_IDCM_Wakeup_HCPChrt */
    /* Entry Internal: PokeIDCR_b_IDCM_Wakeup_HCP/PokeIDCR_b_IDCM_Wakeup_HCPChrt */
    /* Transition: '<S701>:2' */
    if (!LeIDCR_b_IDCM_Wakeup_HCP_FA)
    {
        /* Transition: '<S701>:23' */
        /* Transition: '<S701>:26' */
        IDCR_ac_B.LeIDCR_b_IDCM_Wakeup_HCP_out = LeIDCR_b_IDCM_Wakeup_HCP;
        rtb_LeIDCR_b_IDCM_Wakeup_HCP_FA_out = false;
    }
    else
    {
        /* Transition: '<S701>:27' */
        rtb_LeIDCR_b_IDCM_Wakeup_HCP_FA_out = true;

        /* Transition: '<S701>:28' */
    }

    /* End of Chart: '<S253>/PokeIDCR_b_IDCM_Wakeup_HCPChrt' */

    /* Outport: '<Root>/VeIDCR_b_IDCM_Wakeup_HCP' incorporates:
     *  SignalConversion generated from: '<S253>/VeIDCR_b_IDCM_Wakeup_HCP'
     */
    (void)Rte_Write_VeIDCR_b_IDCM_Wakeup_HCP_Value
        (IDCR_ac_B.LeIDCR_b_IDCM_Wakeup_HCP_out);

    /* Outport: '<Root>/VeIDCR_b_IDCM_Wakeup_HCP_FA' incorporates:
     *  SignalConversion generated from: '<S253>/VeIDCR_b_IDCM_Wakeup_HCP_FA'
     */
    (void)Rte_Write_VeIDCR_b_IDCM_Wakeup_HCP_FA_Value
        (rtb_LeIDCR_b_IDCM_Wakeup_HCP_FA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_IDCM_Wakeup_HCP' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_ISO15118_TLS_Offered(VAR(boolean, AUTOMATIC)
    LeIDCR_b_ISO15118_TLS_Offered, VAR(boolean, AUTOMATIC)
    LeIDCR_b_ISO15118_TLS_Offered_FA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_ISO15118_TLS_Offered' */
    /* Outport: '<Root>/VeIDCR_b_ISO15118_TLS_Offered' incorporates:
     *  SignalConversion generated from: '<S254>/VeIDCR_b_ISO15118_TLS_Offered'
     *  SignalConversion generated from: '<S254>/LeIDCR_b_V2L_Detected'
     */
    /* Gateway: PokeIDCR_b_ISO15118_TLS_Offered/PokeIDCR_b_ISO15118_TLS_OfferedChrt */
    /* During: PokeIDCR_b_ISO15118_TLS_Offered/PokeIDCR_b_ISO15118_TLS_OfferedChrt */
    /* Entry Internal: PokeIDCR_b_ISO15118_TLS_Offered/PokeIDCR_b_ISO15118_TLS_OfferedChrt */
    /* Transition: '<S702>:2' */
    (void)Rte_Write_VeIDCR_b_ISO15118_TLS_Offered_Value
        (LeIDCR_b_ISO15118_TLS_Offered);

    /* Outport: '<Root>/VeIDCR_b_ISO15118_TLS_Offered_FA' incorporates:
     *  SignalConversion generated from: '<S254>/VeIDCR_b_ISO15118_TLS_Offered_FA'
     *  SignalConversion generated from: '<S254>/LeIDCR_b_V2L_Detected1'
     */
    (void)Rte_Write_VeIDCR_b_ISO15118_TLS_Offered_FA_Value
        (LeIDCR_b_ISO15118_TLS_Offered_FA);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_ISO15118_TLS_Offered' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_J1772_S2_Status(VAR(boolean, AUTOMATIC)
    LeIDCR_b_J1772_S2_Status, VAR(boolean, AUTOMATIC) LeIDCR_b_J1772_S2_StatusFA)
{
    boolean rtb_LeIDCR_b_J1772_S2_StatusFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_J1772_S2_Status' */
    /* Chart: '<S255>/PokeIDCR_b_J1772_S2_StatusChrt' incorporates:
     *  SignalConversion generated from: '<S255>/LeIDCR_b_J1772_S2_StatusFA'
     *  SignalConversion generated from: '<S255>/LeIDCR_b_J1772_S2_Status'
     */
    /* Gateway: PokeIDCR_b_J1772_S2_Status/PokeIDCR_b_J1772_S2_StatusChrt */
    /* During: PokeIDCR_b_J1772_S2_Status/PokeIDCR_b_J1772_S2_StatusChrt */
    /* Entry Internal: PokeIDCR_b_J1772_S2_Status/PokeIDCR_b_J1772_S2_StatusChrt */
    /* Transition: '<S703>:2' */
    if (!LeIDCR_b_J1772_S2_StatusFA)
    {
        /* Transition: '<S703>:3' */
        /* Transition: '<S703>:15' */
        IDCR_ac_B.LeIDCR_b_J1772_S2_Status_out = LeIDCR_b_J1772_S2_Status;
        rtb_LeIDCR_b_J1772_S2_StatusFA_out = false;

        /* Transition: '<S703>:18' */
    }
    else
    {
        /* Transition: '<S703>:4' */
        rtb_LeIDCR_b_J1772_S2_StatusFA_out = true;
    }

    /* End of Chart: '<S255>/PokeIDCR_b_J1772_S2_StatusChrt' */

    /* Outport: '<Root>/VeIDCR_b_J1772_S2_Status' incorporates:
     *  SignalConversion generated from: '<S255>/VeIDCR_b_J1772_S2_Status'
     */
    (void)Rte_Write_VeIDCR_b_J1772_S2_Status_Value
        (IDCR_ac_B.LeIDCR_b_J1772_S2_Status_out);

    /* Outport: '<Root>/VeIDCR_b_J1772_S2_StatusFA' incorporates:
     *  SignalConversion generated from: '<S255>/VeIDCR_b_J1772_S2_StatusFA'
     */
    (void)Rte_Write_VeIDCR_b_J1772_S2_StatusFA_Value
        (rtb_LeIDCR_b_J1772_S2_StatusFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_J1772_S2_Status' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_LvHighVStatus(VAR(boolean, AUTOMATIC)
    LeIDCR_b_LvHighVStatus)
{
    /* local block i/o variables */
    boolean rtb_LeIDCR_b_LvHighVStatus_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_LvHighVStatus' */
    /* Chart: '<S256>/PokeIDCR_b_LvHighVStatusChrt' incorporates:
     *  SignalConversion generated from: '<S256>/LeIDCR_b_LvHighVStatus'
     */
    /* Gateway: PokeIDCR_b_LvHighVStatus/PokeIDCR_b_LvHighVStatusChrt */
    /* During: PokeIDCR_b_LvHighVStatus/PokeIDCR_b_LvHighVStatusChrt */
    /* Entry Internal: PokeIDCR_b_LvHighVStatus/PokeIDCR_b_LvHighVStatusChrt */
    /* Transition: '<S704>:2' */
    rtb_LeIDCR_b_LvHighVStatus_out = LeIDCR_b_LvHighVStatus;

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_LvHighVStatus' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_LvTooHighIStatus(VAR(boolean, AUTOMATIC)
    LeIDCR_b_LvTooHighIStatus)
{
    /* local block i/o variables */
    boolean rtb_LeIDCR_b_LvTooHighIStatus_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_LvTooHighIStatus' */
    /* Chart: '<S257>/PokeIDCR_b_LvTooHighIStatusChrt' incorporates:
     *  SignalConversion generated from: '<S257>/LeIDCR_b_LvTooHighIStatus'
     */
    /* Gateway: PokeIDCR_b_LvTooHighIStatus/PokeIDCR_b_LvTooHighIStatusChrt */
    /* During: PokeIDCR_b_LvTooHighIStatus/PokeIDCR_b_LvTooHighIStatusChrt */
    /* Entry Internal: PokeIDCR_b_LvTooHighIStatus/PokeIDCR_b_LvTooHighIStatusChrt */
    /* Transition: '<S705>:2' */
    rtb_LeIDCR_b_LvTooHighIStatus_out = LeIDCR_b_LvTooHighIStatus;

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_LvTooHighIStatus' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_LvTooLowVStatus(VAR(boolean, AUTOMATIC)
    LeIDCR_b_LvTooLowVStatus)
{
    /* local block i/o variables */
    boolean rtb_LeIDCR_b_LvTooLowVStatus_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_LvTooLowVStatus' */
    /* Chart: '<S258>/PokeIDCR_b_LvTooLowVStatusChrt' incorporates:
     *  SignalConversion generated from: '<S258>/LeIDCR_b_LvTooLowVStatus'
     */
    /* Gateway: PokeIDCR_b_LvTooLowVStatus/PokeIDCR_b_LvTooLowVStatusChrt */
    /* During: PokeIDCR_b_LvTooLowVStatus/PokeIDCR_b_LvTooLowVStatusChrt */
    /* Entry Internal: PokeIDCR_b_LvTooLowVStatus/PokeIDCR_b_LvTooLowVStatusChrt */
    /* Transition: '<S706>:2' */
    rtb_LeIDCR_b_LvTooLowVStatus_out = LeIDCR_b_LvTooLowVStatus;

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_LvTooLowVStatus' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_OBCM_Timeout(VAR(boolean, AUTOMATIC)
    LeIDCR_b_OBCM_Timeout)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_OBCM_Timeout' */
    /* Outport: '<Root>/VeIDCR_b_OBCM_TimeOut' incorporates:
     *  SignalConversion generated from: '<S259>/VeIDCR_b_OBCM_Timeout'
     *  SignalConversion generated from: '<S259>/LeIDCR_b_OBCM_Timeout'
     */
    /* Gateway: PokeIDCR_b_OBCM_Timeout/PokeIDCR_b_OBCM_TimeoutChrt */
    /* During: PokeIDCR_b_OBCM_Timeout/PokeIDCR_b_OBCM_TimeoutChrt */
    /* Entry Internal: PokeIDCR_b_OBCM_Timeout/PokeIDCR_b_OBCM_TimeoutChrt */
    /* Transition: '<S707>:2' */
    (void)Rte_Write_VeIDCR_b_OBCM_TimeOut_Value(LeIDCR_b_OBCM_Timeout);

    /* Outport: '<Root>/VeIDCR_b_OBCM_Timeout_FA' incorporates:
     *  Chart: '<S259>/PokeIDCR_b_OBCM_TimeoutChrt'
     *  SignalConversion generated from: '<S259>/VeIDCR_b_OBCM_Timeout_FA'
     */
    (void)Rte_Write_VeIDCR_b_OBCM_Timeout_FA_Value(false);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_OBCM_Timeout' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_PlugAndChargeReq(VAR(boolean, AUTOMATIC)
    LeIDCR_b_PlugAndChargeReq, VAR(boolean, AUTOMATIC)
    LeIDCR_b_PlugAndChargeReqFA)
{
    boolean rtb_LeIDCR_b_PlugAndChargeReqFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_PlugAndChargeReq' */
    /* Chart: '<S260>/PokeIDCR_b_PlugAndChargeReqChrt' incorporates:
     *  SignalConversion generated from: '<S260>/LeIDCR_b_PlugAndChargeReqFA'
     *  SignalConversion generated from: '<S260>/LeIDCR_b_PlugAndChargeReq'
     */
    /* Gateway: PokeIDCR_b_PlugAndChargeReq/PokeIDCR_b_PlugAndChargeReqChrt */
    /* During: PokeIDCR_b_PlugAndChargeReq/PokeIDCR_b_PlugAndChargeReqChrt */
    /* Entry Internal: PokeIDCR_b_PlugAndChargeReq/PokeIDCR_b_PlugAndChargeReqChrt */
    /* Transition: '<S708>:22' */
    if (!LeIDCR_b_PlugAndChargeReqFA)
    {
        /* Transition: '<S708>:23' */
        /* Transition: '<S708>:27' */
        IDCR_ac_B.LeIDCR_b_PlugAndChargeReq_out = LeIDCR_b_PlugAndChargeReq;
        rtb_LeIDCR_b_PlugAndChargeReqFA_out = false;
        IDCR_ac_B.LeIDCR_b_PlugAndCharge_Sgnl_Rcvd = true;

        /* Transition: '<S708>:21' */
    }
    else
    {
        /* Transition: '<S708>:24' */
        rtb_LeIDCR_b_PlugAndChargeReqFA_out = true;
    }

    /* End of Chart: '<S260>/PokeIDCR_b_PlugAndChargeReqChrt' */

    /* Outport: '<Root>/VeIDCR_b_PlugAndChargeReq' incorporates:
     *  SignalConversion generated from: '<S260>/VeIDCR_b_PlugAndChargeReq'
     */
    (void)Rte_Write_VeIDCR_b_PlugAndChargeReq_Value
        (IDCR_ac_B.LeIDCR_b_PlugAndChargeReq_out);

    /* Outport: '<Root>/VeIDCR_b_PlugAndChargeReq_FA' incorporates:
     *  SignalConversion generated from: '<S260>/VeIDCR_b_PlugAndChargeReqFA'
     */
    (void)Rte_Write_VeIDCR_b_PlugAndChargeReq_FA_Value
        (rtb_LeIDCR_b_PlugAndChargeReqFA_out);

    /* Outport: '<Root>/VeIDCR_b_PlugAndChargeReq_SgnlRcvd' incorporates:
     *  SignalConversion generated from: '<S260>/VeIDCR_b_PlugAndChargeReq_Sgnl_Rcvd'
     */
    (void)Rte_Write_VeIDCR_b_PlugAndChargeReq_SgnlRcvd_Value
        (IDCR_ac_B.LeIDCR_b_PlugAndCharge_Sgnl_Rcvd);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_PlugAndChargeReq' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_ReceiptRequired(VAR(boolean, AUTOMATIC)
    LeIDCR_b_ReceiptRequired)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_ReceiptRequired' */
    /* Outport: '<Root>/VeIDCR_b_ReceiptRequired' incorporates:
     *  SignalConversion generated from: '<S261>/VeIDCR_b_ReceiptRequired'
     *  SignalConversion generated from: '<S261>/LeIDCR_b_ReceiptRequired'
     */
    /* Gateway: PokeIDCR_b_ReceiptRequired/PokeIDCR_b_ReceiptRequiredChrt */
    /* During: PokeIDCR_b_ReceiptRequired/PokeIDCR_b_ReceiptRequiredChrt */
    /* Entry Internal: PokeIDCR_b_ReceiptRequired/PokeIDCR_b_ReceiptRequiredChrt */
    /* Transition: '<S709>:2' */
    (void)Rte_Write_VeIDCR_b_ReceiptRequired_Value(LeIDCR_b_ReceiptRequired);

    /* Outport: '<Root>/VeIDCR_b_ReceiptRequired_FA' incorporates:
     *  Chart: '<S261>/PokeIDCR_b_ReceiptRequiredChrt'
     *  SignalConversion generated from: '<S261>/VeIDCR_b_ReceiptRequired_FA'
     */
    (void)Rte_Write_VeIDCR_b_ReceiptRequired_FA_Value(false);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_ReceiptRequired' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_StatusACPresent(VAR(boolean, AUTOMATIC)
    LeIDCR_b_StatusACPresent)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_StatusACPresent' */
    /* Outport: '<Root>/VeIDCR_b_StatusACPresent' incorporates:
     *  SignalConversion generated from: '<S262>/VeIDCR_b_StatusACPresent'
     *  SignalConversion generated from: '<S262>/LeIDCR_b_StatusACPresent'
     */
    /* Gateway: PokeIDCR_b_StatusACPresent/PokeIDCR_b_StatusACPresentChrt */
    /* During: PokeIDCR_b_StatusACPresent/PokeIDCR_b_StatusACPresentChrt */
    /* Entry Internal: PokeIDCR_b_StatusACPresent/PokeIDCR_b_StatusACPresentChrt */
    /* Transition: '<S710>:2' */
    (void)Rte_Write_VeIDCR_b_StatusACPresent_Value(LeIDCR_b_StatusACPresent);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_StatusACPresent' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_TCPCommTerminated(VAR(boolean, AUTOMATIC)
    LeIDCR_b_TCPCommTerminated)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_TCPCommTerminated' */
    /* Outport: '<Root>/VeIDCR_b_TCPCommTerminated' incorporates:
     *  SignalConversion generated from: '<S263>/VeIDCR_b_TCPCommTerminated'
     *  SignalConversion generated from: '<S263>/LeIDCR_b_TCPCommTerminated'
     */
    /* Gateway: PokeIDCR_b_TCPCommTerminated/PokeIDCR_b_TCPCommTerminatedChrt */
    /* During: PokeIDCR_b_TCPCommTerminated/PokeIDCR_b_TCPCommTerminatedChrt */
    /* Entry Internal: PokeIDCR_b_TCPCommTerminated/PokeIDCR_b_TCPCommTerminatedChrt */
    /* Transition: '<S711>:2' */
    (void)Rte_Write_VeIDCR_b_TCPCommTerminated_Value(LeIDCR_b_TCPCommTerminated);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_TCPCommTerminated' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_V2L_Detected(VAR(boolean, AUTOMATIC)
    LeIDCR_b_V2L_Detected)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_V2L_Detected' */
    /* Outport: '<Root>/VeIDCR_b_V2L_Detected' incorporates:
     *  SignalConversion generated from: '<S264>/VeIDCR_b_V2L_Detected'
     *  SignalConversion generated from: '<S264>/LeIDCR_b_V2L_Detected'
     */
    /* Gateway: PokeIDCR_b_V2L_Detected/PokeIDCR_b_V2L_DetectedChrt */
    /* During: PokeIDCR_b_V2L_Detected/PokeIDCR_b_V2L_DetectedChrt */
    /* Entry Internal: PokeIDCR_b_V2L_Detected/PokeIDCR_b_V2L_DetectedChrt */
    /* Transition: '<S712>:2' */
    (void)Rte_Write_VeIDCR_b_V2L_Detected_Value(LeIDCR_b_V2L_Detected);

    /* Outport: '<Root>/VeIDCR_b_V2L_DetectedFA' incorporates:
     *  Chart: '<S264>/PokeIDCR_b_V2L_DetectedChrt'
     *  SignalConversion generated from: '<S264>/VeIDCR_b_V2L_DetectedFA'
     */
    (void)Rte_Write_VeIDCR_b_V2L_DetectedFA_Value(false);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_V2L_Detected' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_V2XDerateSts(VAR(boolean, AUTOMATIC)
    LeIDCR_b_V2XDerateSts, VAR(boolean, AUTOMATIC) LeIDCR_b_V2XDerateStsFA)
{
    boolean rtb_LeIDCR_b_V2XDerateStsFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_V2XDerateSts' */
    /* Chart: '<S265>/PokeIDCR_b_V2XDerateStsChrt' incorporates:
     *  SignalConversion generated from: '<S265>/LeIDCR_f_ACOutFreq1'
     *  SignalConversion generated from: '<S265>/LeIDCR_f_ACOutFreq'
     */
    /* Gateway: PokeIDCR_b_V2XDerateSts/PokeIDCR_b_V2XDerateStsChrt */
    /* During: PokeIDCR_b_V2XDerateSts/PokeIDCR_b_V2XDerateStsChrt */
    /* Entry Internal: PokeIDCR_b_V2XDerateSts/PokeIDCR_b_V2XDerateStsChrt */
    /* Transition: '<S713>:22' */
    if (!LeIDCR_b_V2XDerateStsFA)
    {
        /* Transition: '<S713>:23' */
        /* Transition: '<S713>:27' */
        IDCR_ac_B.LeIDCR_b_V2XDerateSts_out = LeIDCR_b_V2XDerateSts;
        rtb_LeIDCR_b_V2XDerateStsFA_out = false;

        /* Transition: '<S713>:21' */
    }
    else
    {
        /* Transition: '<S713>:24' */
        rtb_LeIDCR_b_V2XDerateStsFA_out = true;
    }

    /* End of Chart: '<S265>/PokeIDCR_b_V2XDerateStsChrt' */

    /* Outport: '<Root>/VeIDCR_b_V2X_DerateSts' incorporates:
     *  SignalConversion generated from: '<S265>/VeIDCR_b_V2XSts'
     */
    (void)Rte_Write_VeIDCR_b_V2X_DerateSts_Value
        (IDCR_ac_B.LeIDCR_b_V2XDerateSts_out);

    /* Outport: '<Root>/VeIDCR_b_V2X_DerateSts_FA' incorporates:
     *  SignalConversion generated from: '<S265>/VeIDCR_b_V2XStsFA'
     */
    (void)Rte_Write_VeIDCR_b_V2X_DerateSts_FA_Value
        (rtb_LeIDCR_b_V2XDerateStsFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_V2XDerateSts' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_V2XFailSts(VAR(boolean, AUTOMATIC)
    LeIDCR_b_V2XFailSts, VAR(boolean, AUTOMATIC) LeIDCR_b_V2XFailStsFA)
{
    boolean rtb_LeIDCR_b_V2XFailStsFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_V2XFailSts' */
    /* Chart: '<S266>/PokeIDCR_b_V2XFailStsChrt' incorporates:
     *  SignalConversion generated from: '<S266>/LeIDCR_f_ACOutFreq1'
     *  SignalConversion generated from: '<S266>/LeIDCR_f_ACOutFreq'
     */
    /* Gateway: PokeIDCR_b_V2XFailSts/PokeIDCR_b_V2XFailStsChrt */
    /* During: PokeIDCR_b_V2XFailSts/PokeIDCR_b_V2XFailStsChrt */
    /* Entry Internal: PokeIDCR_b_V2XFailSts/PokeIDCR_b_V2XFailStsChrt */
    /* Transition: '<S714>:22' */
    if (!LeIDCR_b_V2XFailStsFA)
    {
        /* Transition: '<S714>:23' */
        /* Transition: '<S714>:27' */
        IDCR_ac_B.LeIDCR_b_V2XFailSts_out = LeIDCR_b_V2XFailSts;
        rtb_LeIDCR_b_V2XFailStsFA_out = false;

        /* Transition: '<S714>:21' */
    }
    else
    {
        /* Transition: '<S714>:24' */
        rtb_LeIDCR_b_V2XFailStsFA_out = true;
    }

    /* End of Chart: '<S266>/PokeIDCR_b_V2XFailStsChrt' */

    /* Outport: '<Root>/VeIDCR_b_V2X_FailSts' incorporates:
     *  SignalConversion generated from: '<S266>/VeIDCR_b_V2XFailSts'
     */
    (void)Rte_Write_VeIDCR_b_V2X_FailSts_Value(IDCR_ac_B.LeIDCR_b_V2XFailSts_out);

    /* Outport: '<Root>/VeIDCR_b_V2X_FailSts_FA' incorporates:
     *  SignalConversion generated from: '<S266>/VeIDCR_b_V2XFailStsFA'
     */
    (void)Rte_Write_VeIDCR_b_V2X_FailSts_FA_Value(rtb_LeIDCR_b_V2XFailStsFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_V2XFailSts' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_V2XSts(VAR(boolean, AUTOMATIC) LeIDCR_b_V2XSts,
    VAR(boolean, AUTOMATIC) LeIDCR_b_V2XStsFA)
{
    boolean rtb_LeIDCR_b_V2XStsFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_V2XSts' */
    /* Chart: '<S267>/PokeIDCR_b_V2XStsChrt' incorporates:
     *  SignalConversion generated from: '<S267>/LeIDCR_f_ACOutFreq1'
     *  SignalConversion generated from: '<S267>/LeIDCR_f_ACOutFreq'
     */
    /* Gateway: PokeIDCR_b_V2XSts/PokeIDCR_b_V2XStsChrt */
    /* During: PokeIDCR_b_V2XSts/PokeIDCR_b_V2XStsChrt */
    /* Entry Internal: PokeIDCR_b_V2XSts/PokeIDCR_b_V2XStsChrt */
    /* Transition: '<S715>:22' */
    if (!LeIDCR_b_V2XStsFA)
    {
        /* Transition: '<S715>:23' */
        /* Transition: '<S715>:27' */
        IDCR_ac_B.LeIDCR_b_V2XSts_out = LeIDCR_b_V2XSts;
        rtb_LeIDCR_b_V2XStsFA_out = false;

        /* Transition: '<S715>:21' */
    }
    else
    {
        /* Transition: '<S715>:24' */
        rtb_LeIDCR_b_V2XStsFA_out = true;
    }

    /* End of Chart: '<S267>/PokeIDCR_b_V2XStsChrt' */

    /* Outport: '<Root>/VeIDCR_b_V2X_Sts' incorporates:
     *  SignalConversion generated from: '<S267>/VeIDCR_b_V2XSts'
     */
    (void)Rte_Write_VeIDCR_b_V2X_Sts_Value(IDCR_ac_B.LeIDCR_b_V2XSts_out);

    /* Outport: '<Root>/VeIDCR_b_V2X_Sts_FA' incorporates:
     *  SignalConversion generated from: '<S267>/VeIDCR_b_V2XStsFA'
     */
    (void)Rte_Write_VeIDCR_b_V2X_Sts_FA_Value(rtb_LeIDCR_b_V2XStsFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_V2XSts' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_V2X_EVSE_Service_5_Free(VAR(boolean, AUTOMATIC)
    LeIDCR_b_V2X_EVSE_Service_5_Free, VAR(boolean, AUTOMATIC)
    LeIDCR_b_V2X_EVSE_Service_5_Free_FA)
{
    boolean rtb_LeIDCR_b_V2X_EVSE_Service_5_Free_FA_;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_V2X_EVSE_Service_5_Free' */
    /* Chart: '<S268>/PokeIDCR_b_V2X_EVSE_Service_5_FreeChrt' incorporates:
     *  SignalConversion generated from: '<S268>/LeIDCR_b_EVSE_ChargingSystemError'
     *  SignalConversion generated from: '<S268>/LeIDCR_b_EVSE_ChargingSystemError_FA'
     */
    /* Gateway: PokeIDCR_b_V2X_EVSE_Service_5_Free/PokeIDCR_b_V2X_EVSE_Service_5_FreeChrt */
    /* During: PokeIDCR_b_V2X_EVSE_Service_5_Free/PokeIDCR_b_V2X_EVSE_Service_5_FreeChrt */
    /* Entry Internal: PokeIDCR_b_V2X_EVSE_Service_5_Free/PokeIDCR_b_V2X_EVSE_Service_5_FreeChrt */
    /* Transition: '<S716>:2' */
    if (!LeIDCR_b_V2X_EVSE_Service_5_Free_FA)
    {
        /* Transition: '<S716>:23' */
        /* Transition: '<S716>:26' */
        IDCR_ac_B.LeIDCR_b_V2X_EVSE_Service_5_Free_out =
            LeIDCR_b_V2X_EVSE_Service_5_Free;
        rtb_LeIDCR_b_V2X_EVSE_Service_5_Free_FA_ = false;
    }
    else
    {
        /* Transition: '<S716>:27' */
        rtb_LeIDCR_b_V2X_EVSE_Service_5_Free_FA_ = true;

        /* Transition: '<S716>:28' */
    }

    /* End of Chart: '<S268>/PokeIDCR_b_V2X_EVSE_Service_5_FreeChrt' */

    /* Outport: '<Root>/VeIDCR_b_V2X_EVSE_Service_5_Free' incorporates:
     *  SignalConversion generated from: '<S268>/VeIDCR_b_V2X_EVSE_Service_5_Free'
     */
    (void)Rte_Write_VeIDCR_b_V2X_EVSE_Service_5_Free_Value
        (IDCR_ac_B.LeIDCR_b_V2X_EVSE_Service_5_Free_out);

    /* Outport: '<Root>/VeIDCR_b_V2X_EVSE_Service_5_Free_FA' incorporates:
     *  SignalConversion generated from: '<S268>/VeIDCR_b_V2X_EVSE_Service_5_Free_FA'
     */
    (void)Rte_Write_VeIDCR_b_V2X_EVSE_Service_5_Free_FA_Value
        (rtb_LeIDCR_b_V2X_EVSE_Service_5_Free_FA_);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_V2X_EVSE_Service_5_Free' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_b_V2X_EVSE_Service_5_V2H(VAR(boolean, AUTOMATIC)
    LeIDCR_b_V2X_EVSE_Service_5_V2H, VAR(boolean, AUTOMATIC)
    LeIDCR_b_V2X_EVSE_Service_5_V2H_FA)
{
    boolean rtb_LeIDCR_b_V2X_EVSE_Service_5_V2H_FA_o;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_b_V2X_EVSE_Service_5_V2H' */
    /* Chart: '<S269>/PokeIDCR_b_V2X_EVSE_Service_5_V2HChrt' incorporates:
     *  SignalConversion generated from: '<S269>/LeIDCR_b_EVSE_ChargingSystemError'
     *  SignalConversion generated from: '<S269>/LeIDCR_b_EVSE_ChargingSystemError_FA'
     */
    /* Gateway: PokeIDCR_b_V2X_EVSE_Service_5_V2H/PokeIDCR_b_V2X_EVSE_Service_5_V2HChrt */
    /* During: PokeIDCR_b_V2X_EVSE_Service_5_V2H/PokeIDCR_b_V2X_EVSE_Service_5_V2HChrt */
    /* Entry Internal: PokeIDCR_b_V2X_EVSE_Service_5_V2H/PokeIDCR_b_V2X_EVSE_Service_5_V2HChrt */
    /* Transition: '<S717>:2' */
    if (!LeIDCR_b_V2X_EVSE_Service_5_V2H_FA)
    {
        /* Transition: '<S717>:23' */
        /* Transition: '<S717>:26' */
        IDCR_ac_B.LeIDCR_b_V2X_EVSE_Service_5_V2H_out =
            LeIDCR_b_V2X_EVSE_Service_5_V2H;
        rtb_LeIDCR_b_V2X_EVSE_Service_5_V2H_FA_o = false;
    }
    else
    {
        /* Transition: '<S717>:27' */
        rtb_LeIDCR_b_V2X_EVSE_Service_5_V2H_FA_o = true;

        /* Transition: '<S717>:28' */
    }

    /* End of Chart: '<S269>/PokeIDCR_b_V2X_EVSE_Service_5_V2HChrt' */

    /* Outport: '<Root>/VeIDCR_b_V2X_EVSE_Service_5_V2H' incorporates:
     *  SignalConversion generated from: '<S269>/VeIDCR_b_V2X_EVSE_Service_5_V2H'
     */
    (void)Rte_Write_VeIDCR_b_V2X_EVSE_Service_5_V2H_Value
        (IDCR_ac_B.LeIDCR_b_V2X_EVSE_Service_5_V2H_out);

    /* Outport: '<Root>/VeIDCR_b_V2X_EVSE_Service_5_V2H_FA' incorporates:
     *  SignalConversion generated from: '<S269>/VeIDCR_b_V2X_EVSE_Service_5_V2H_FA'
     */
    (void)Rte_Write_VeIDCR_b_V2X_EVSE_Service_5_V2H_FA_Value
        (rtb_LeIDCR_b_V2X_EVSE_Service_5_V2H_FA_o);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_b_V2X_EVSE_Service_5_V2H' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_cmp_ISO15118_EVSETimeStamp(VAR(float32, AUTOMATIC)
    LeIDCR_cmp_ISO15118_EVSETimeStamp, VAR(boolean, AUTOMATIC)
    LeIDCR_b_ISO15118_EVSETimeStamp_FA)
{
    boolean rtb_LeIDCR_b_ISO15118_EVSETimeStamp_FA_o;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_cmp_ISO15118_EVSETimeStamp' */
    /* Chart: '<S270>/PokeIDCR_cmp_ISO15118_EVSETimeStampChrt' incorporates:
     *  SignalConversion generated from: '<S270>/LeIDCR_b_ACSideCurr_L2FA'
     */
    /* Gateway: PokeIDCR_cmp_ISO15118_EVSETimeStamp/PokeIDCR_cmp_ISO15118_EVSETimeStampChrt */
    /* During: PokeIDCR_cmp_ISO15118_EVSETimeStamp/PokeIDCR_cmp_ISO15118_EVSETimeStampChrt */
    /* Entry Internal: PokeIDCR_cmp_ISO15118_EVSETimeStamp/PokeIDCR_cmp_ISO15118_EVSETimeStampChrt */
    /* Transition: '<S718>:2' */
    if (!LeIDCR_b_ISO15118_EVSETimeStamp_FA)
    {
        /* Transition: '<S718>:3' */
        /* Transition: '<S718>:15' */
        rtb_LeIDCR_b_ISO15118_EVSETimeStamp_FA_o = false;

        /* Transition: '<S718>:18' */
    }
    else
    {
        /* Transition: '<S718>:4' */
        rtb_LeIDCR_b_ISO15118_EVSETimeStamp_FA_o = true;
    }

    /* End of Chart: '<S270>/PokeIDCR_cmp_ISO15118_EVSETimeStampChrt' */

    /* Outport: '<Root>/VeIDCR_cmp_ISO15118_EVSETimeStamp' incorporates:
     *  SignalConversion generated from: '<S270>/VeIDCR_cmp_ISO15118_EVSETimeStamp'
     *  SignalConversion generated from: '<S270>/LeIDCR_I_ACSideCurr_L2'
     */
    (void)Rte_Write_VeIDCR_cmp_ISO15118_EVSETimeStamp_Value
        (LeIDCR_cmp_ISO15118_EVSETimeStamp);

    /* Outport: '<Root>/VeIDCR_b_ISO15118_EVSETimeStamp_FA' incorporates:
     *  SignalConversion generated from: '<S270>/VeIDCR_cmp_ISO15118_EVSETimeStamp_FA'
     */
    (void)Rte_Write_VeIDCR_b_ISO15118_EVSETimeStamp_FA_Value
        (rtb_LeIDCR_b_ISO15118_EVSETimeStamp_FA_o);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_cmp_ISO15118_EVSETimeStamp' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_d_EVSE_Accepted_Protocol(VAR(uint16, AUTOMATIC)
    LeIDCR_d_EVSE_Accepted_Protocol, VAR(boolean, AUTOMATIC)
    LeIDCR_b_EVSE_Accepted_Protocol_FA)
{
    boolean rtb_LeIDCR_b_EVSE_Accepted_Protocol_FA_e;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_d_EVSE_Accepted_Protocol' */
    /* Chart: '<S271>/PokeIDCR_d_EVSE_Accepted_ProtocolChrt' incorporates:
     *  SignalConversion generated from: '<S271>/LeIDCR_b_ACSideCurr_L2FA'
     */
    /* Gateway: PokeIDCR_d_EVSE_Accepted_Protocol/PokeIDCR_d_EVSE_Accepted_ProtocolChrt */
    /* During: PokeIDCR_d_EVSE_Accepted_Protocol/PokeIDCR_d_EVSE_Accepted_ProtocolChrt */
    /* Entry Internal: PokeIDCR_d_EVSE_Accepted_Protocol/PokeIDCR_d_EVSE_Accepted_ProtocolChrt */
    /* Transition: '<S719>:2' */
    if (!LeIDCR_b_EVSE_Accepted_Protocol_FA)
    {
        /* Transition: '<S719>:3' */
        /* Transition: '<S719>:15' */
        rtb_LeIDCR_b_EVSE_Accepted_Protocol_FA_e = false;

        /* Transition: '<S719>:18' */
    }
    else
    {
        /* Transition: '<S719>:4' */
        rtb_LeIDCR_b_EVSE_Accepted_Protocol_FA_e = true;
    }

    /* End of Chart: '<S271>/PokeIDCR_d_EVSE_Accepted_ProtocolChrt' */

    /* Outport: '<Root>/VeIDCR_b_EVSE_Accepted_Protocol_FA' incorporates:
     *  SignalConversion generated from: '<S271>/VeIDCR_b_EVSE_Accepted_Protocol_FA'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_Accepted_Protocol_FA_Value
        (rtb_LeIDCR_b_EVSE_Accepted_Protocol_FA_e);

    /* Outport: '<Root>/VeIDCR_d_EVSE_Accepted_Protocol' incorporates:
     *  SignalConversion generated from: '<S271>/VeIDCR_d_EVSE_Accepted_Protocol'
     *  SignalConversion generated from: '<S271>/LeIDCR_I_ACSideCurr_L2'
     */
    (void)Rte_Write_VeIDCR_d_EVSE_Accepted_Protocol_Value
        (LeIDCR_d_EVSE_Accepted_Protocol);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_d_EVSE_Accepted_Protocol' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_d_ISO15118_ServiceID(VAR(uint16, AUTOMATIC)
    LeIDCR_d_ISO15118_ServiceID, VAR(boolean, AUTOMATIC)
    LeIDCR_b_ISO15118_ServiceID_FA)
{
    boolean rtb_LeIDCR_b_ISO15118_ServiceID_FA_out_b;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_d_ISO15118_ServiceID' */
    /* Chart: '<S272>/PokeIDCR_d_ISO15118_ServiceIDChrt' incorporates:
     *  SignalConversion generated from: '<S272>/LeIDCR_b_ACSideCurr_L2FA'
     */
    /* Gateway: PokeIDCR_d_ISO15118_ServiceID/PokeIDCR_d_ISO15118_ServiceIDChrt */
    /* During: PokeIDCR_d_ISO15118_ServiceID/PokeIDCR_d_ISO15118_ServiceIDChrt */
    /* Entry Internal: PokeIDCR_d_ISO15118_ServiceID/PokeIDCR_d_ISO15118_ServiceIDChrt */
    /* Transition: '<S720>:2' */
    if (!LeIDCR_b_ISO15118_ServiceID_FA)
    {
        /* Transition: '<S720>:3' */
        /* Transition: '<S720>:15' */
        rtb_LeIDCR_b_ISO15118_ServiceID_FA_out_b = false;

        /* Transition: '<S720>:18' */
    }
    else
    {
        /* Transition: '<S720>:4' */
        rtb_LeIDCR_b_ISO15118_ServiceID_FA_out_b = true;
    }

    /* End of Chart: '<S272>/PokeIDCR_d_ISO15118_ServiceIDChrt' */

    /* Outport: '<Root>/VeIDCR_b_ISO15118_ServiceID_FA' incorporates:
     *  SignalConversion generated from: '<S272>/VeIDCR_b_ISO15118_ServiceID_FA'
     */
    (void)Rte_Write_VeIDCR_b_ISO15118_ServiceID_FA_Value
        (rtb_LeIDCR_b_ISO15118_ServiceID_FA_out_b);

    /* Outport: '<Root>/VeIDCR_d_ISO15118_ServiceID' incorporates:
     *  SignalConversion generated from: '<S272>/VeIDCR_d_ISO15118_ServiceID'
     *  SignalConversion generated from: '<S272>/LeIDCR_I_ACSideCurr_L2'
     */
    (void)Rte_Write_VeIDCR_d_ISO15118_ServiceID_Value
        (LeIDCR_d_ISO15118_ServiceID);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_d_ISO15118_ServiceID' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_APM2InterlockSts(VAR(TeHVTR_e_HV_IntrlkStat,
    AUTOMATIC) LeIDCR_e_APM2InterlockSts, VAR(boolean, AUTOMATIC)
    LeIDCR_b_APM2InterlockStsFA)
{
    boolean rtb_LeIDCR_b_APM2InterlockStsFA_out_o;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_APM2InterlockSts' */
    /* Chart: '<S273>/PokeIDCR_e_APM2InterlockStsChrt' incorporates:
     *  SignalConversion generated from: '<S273>/LeIDCR_b_APM2InterlockStsFA'
     *  SignalConversion generated from: '<S273>/LeIDCR_e_APM2InterlockSts'
     */
    /* Gateway: PokeIDCR_e_APM2InterlockSts/PokeIDCR_e_APM2InterlockStsChrt */
    /* During: PokeIDCR_e_APM2InterlockSts/PokeIDCR_e_APM2InterlockStsChrt */
    /* Entry Internal: PokeIDCR_e_APM2InterlockSts/PokeIDCR_e_APM2InterlockStsChrt */
    /* Transition: '<S721>:22' */
    if (!LeIDCR_b_APM2InterlockStsFA)
    {
        /* Transition: '<S721>:23' */
        /* Transition: '<S721>:27' */
        IDCR_ac_B.LeIDCR_e_APM2InterlockSts_out = LeIDCR_e_APM2InterlockSts;
        rtb_LeIDCR_b_APM2InterlockStsFA_out_o = false;

        /* Transition: '<S721>:21' */
    }
    else
    {
        /* Transition: '<S721>:24' */
        rtb_LeIDCR_b_APM2InterlockStsFA_out_o = true;
    }

    /* End of Chart: '<S273>/PokeIDCR_e_APM2InterlockStsChrt' */

    /* Outport: '<Root>/VeIDCR_b_APM2InterlockSts_FA' incorporates:
     *  SignalConversion generated from: '<S273>/VeIDCR_b_APM2InterlockStsFA'
     */
    (void)Rte_Write_VeIDCR_b_APM2InterlockSts_FA_Value
        (rtb_LeIDCR_b_APM2InterlockStsFA_out_o);

    /* Outport: '<Root>/VeIDCR_e_APM2InterlockSts' incorporates:
     *  SignalConversion generated from: '<S273>/VeIDCR_e_APM2InterlockSts'
     */
    (void)Rte_Write_VeIDCR_e_APM2InterlockSts_Value
        (IDCR_ac_B.LeIDCR_e_APM2InterlockSts_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_APM2InterlockSts' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_APM3InterlockSts(VAR(TeHVTR_e_HV_IntrlkStat,
    AUTOMATIC) LeIDCR_e_APM3InterlockSts, VAR(boolean, AUTOMATIC)
    LeIDCR_b_APM3InterlockStsFA)
{
    boolean rtb_LeIDCR_b_APM3InterlockStsFA_out_a;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_APM3InterlockSts' */
    /* Chart: '<S274>/PokeIDCR_e_APM3InterlockStsChrt' incorporates:
     *  SignalConversion generated from: '<S274>/LeIDCR_b_APM3InterlockStsFA'
     *  SignalConversion generated from: '<S274>/LeIDCR_e_APM3InterlockSts'
     */
    /* Gateway: PokeIDCR_e_APM3InterlockSts/PokeIDCR_e_APM3InterlockStsChrt */
    /* During: PokeIDCR_e_APM3InterlockSts/PokeIDCR_e_APM3InterlockStsChrt */
    /* Entry Internal: PokeIDCR_e_APM3InterlockSts/PokeIDCR_e_APM3InterlockStsChrt */
    /* Transition: '<S722>:22' */
    if (!LeIDCR_b_APM3InterlockStsFA)
    {
        /* Transition: '<S722>:23' */
        /* Transition: '<S722>:27' */
        IDCR_ac_B.LeIDCR_e_APM3InterlockSts_out = LeIDCR_e_APM3InterlockSts;
        rtb_LeIDCR_b_APM3InterlockStsFA_out_a = false;

        /* Transition: '<S722>:21' */
    }
    else
    {
        /* Transition: '<S722>:24' */
        rtb_LeIDCR_b_APM3InterlockStsFA_out_a = true;
    }

    /* End of Chart: '<S274>/PokeIDCR_e_APM3InterlockStsChrt' */

    /* Outport: '<Root>/VeIDCR_b_APM3InterlockSts_FA' incorporates:
     *  SignalConversion generated from: '<S274>/VeIDCR_b_APM3nterlockStsFA'
     */
    (void)Rte_Write_VeIDCR_b_APM3InterlockSts_FA_Value
        (rtb_LeIDCR_b_APM3InterlockStsFA_out_a);

    /* Outport: '<Root>/VeIDCR_e_APM3InterlockSts' incorporates:
     *  SignalConversion generated from: '<S274>/VeIDCR_e_APM3InterlockSts'
     */
    (void)Rte_Write_VeIDCR_e_APM3InterlockSts_Value
        (IDCR_ac_B.LeIDCR_e_APM3InterlockSts_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_APM3InterlockSts' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_APM_DeratingModeStatus(VAR
    (TeGENR_e_DeratingModeStatus, AUTOMATIC) LeIDCR_e_APM_DeratingModeStatus)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_APM_DeratingModeStatus' */
    /* Outport: '<Root>/VeIDCR_e_APM_DeratingModeStatus' incorporates:
     *  SignalConversion generated from: '<S275>/VeIDCR_e_APM_DeratingModeStatus'
     *  SignalConversion generated from: '<S275>/LeIDCR_e_APM_DeratingModeStatus'
     */
    /* Gateway: PokeIDCR_e_APM_DeratingModeStatus/PokeIDCR_e_APM_DeratingModeStatusChrt */
    /* During: PokeIDCR_e_APM_DeratingModeStatus/PokeIDCR_e_APM_DeratingModeStatusChrt */
    /* Entry Internal: PokeIDCR_e_APM_DeratingModeStatus/PokeIDCR_e_APM_DeratingModeStatusChrt */
    /* Transition: '<S723>:2' */
    (void)Rte_Write_VeIDCR_e_APM_DeratingModeStatus_Value
        (LeIDCR_e_APM_DeratingModeStatus);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_APM_DeratingModeStatus' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_APM_DeratingReason(VAR(sint16, AUTOMATIC)
    LeIDCR_e_APM_DeratingReason)
{
    /* local block i/o variables */
    sint16 rtb_LeIDCR_e_APM_DeratingReason_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_APM_DeratingReason' */
    /* Chart: '<S276>/PokeIDCR_e_APM_DeratingReasonChrt' incorporates:
     *  SignalConversion generated from: '<S276>/LeIDCR_e_APM_DeratingReason'
     */
    /* Gateway: PokeIDCR_e_APM_DeratingReason/PokeIDCR_e_APM_DeratingReasonChrt */
    /* During: PokeIDCR_e_APM_DeratingReason/PokeIDCR_e_APM_DeratingReasonChrt */
    /* Entry Internal: PokeIDCR_e_APM_DeratingReason/PokeIDCR_e_APM_DeratingReasonChrt */
    /* Transition: '<S724>:2' */
    rtb_LeIDCR_e_APM_DeratingReason_out = LeIDCR_e_APM_DeratingReason;

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_APM_DeratingReason' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_APM_FailureModeStatus(VAR
    (TeGENR_e_APM_FailureModeStatus, AUTOMATIC) LeIDCR_e_APM_FailureModeStatus)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_APM_FailureModeStatus' */
    /* Outport: '<Root>/VeIDCR_e_APM_FailureModeStatus' incorporates:
     *  SignalConversion generated from: '<S277>/VeIDCR_e_APM_FailureModeStatus'
     *  SignalConversion generated from: '<S277>/LeIDCR_e_APM_FailureModeStatus'
     */
    /* Gateway: PokeIDCR_e_APM_FailureModeStatus/PokeIDCR_e_APM_FailureModeStatusChrt */
    /* During: PokeIDCR_e_APM_FailureModeStatus/PokeIDCR_e_APM_FailureModeStatusChrt */
    /* Entry Internal: PokeIDCR_e_APM_FailureModeStatus/PokeIDCR_e_APM_FailureModeStatusChrt */
    /* Transition: '<S725>:2' */
    (void)Rte_Write_VeIDCR_e_APM_FailureModeStatus_Value
        (LeIDCR_e_APM_FailureModeStatus);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_APM_FailureModeStatus' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_APM_FailureReason(VAR
    (TeGENR_e_APM_FailureModeStatus, AUTOMATIC) LeIDCR_e_APM_FailureReason)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_APM_FailureReason' */
    /* Outport: '<Root>/VeIDCR_e_APM_FailureReason' incorporates:
     *  SignalConversion generated from: '<S278>/VeIDCR_e_APM_FailureReason'
     *  SignalConversion generated from: '<S278>/LeIDCR_e_APM_FailureReason'
     */
    /* Gateway: PokeIDCR_e_APM_FailureReason/PokeIDCR_e_APM_FailureReasonChrt */
    /* During: PokeIDCR_e_APM_FailureReason/PokeIDCR_e_APM_FailureReasonChrt */
    /* Entry Internal: PokeIDCR_e_APM_FailureReason/PokeIDCR_e_APM_FailureReasonChrt */
    /* Transition: '<S726>:2' */
    (void)Rte_Write_VeIDCR_e_APM_FailureReason_Value(LeIDCR_e_APM_FailureReason);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_APM_FailureReason' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_APM_FailureType(VAR(TeGENR_e_APM_FailureType,
    AUTOMATIC) LeIDCR_e_APM_FailureType, VAR(boolean, AUTOMATIC)
    LeIDCR_b_APM_FailureType_FA)
{
    boolean rtb_LeIDCR_b_APM_FailureType_FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_APM_FailureType' */
    /* Chart: '<S279>/PokeIDCR_e_APM_FailureTypeChrt' incorporates:
     *  SignalConversion generated from: '<S279>/LeIDCR_e_APM_FailureType1'
     */
    /* Gateway: PokeIDCR_e_APM_FailureType/PokeIDCR_e_APM_FailureTypeChrt */
    /* During: PokeIDCR_e_APM_FailureType/PokeIDCR_e_APM_FailureTypeChrt */
    /* Entry Internal: PokeIDCR_e_APM_FailureType/PokeIDCR_e_APM_FailureTypeChrt */
    /* Transition: '<S727>:2' */
    if (!LeIDCR_b_APM_FailureType_FA)
    {
        /* Transition: '<S727>:25' */
        /* Transition: '<S727>:26' */
        rtb_LeIDCR_b_APM_FailureType_FA_out = false;

        /* Transition: '<S727>:27' */
    }
    else
    {
        /* Transition: '<S727>:24' */
        rtb_LeIDCR_b_APM_FailureType_FA_out = true;
    }

    /* End of Chart: '<S279>/PokeIDCR_e_APM_FailureTypeChrt' */

    /* Outport: '<Root>/VeIDCR_b_APM_FailureType_FA' incorporates:
     *  SignalConversion generated from: '<S279>/VeIDCR_b_APM_FailureType_FA'
     */
    (void)Rte_Write_VeIDCR_b_APM_FailureType_FA_Value
        (rtb_LeIDCR_b_APM_FailureType_FA_out);

    /* Outport: '<Root>/VeIDCR_e_APM_FailureType' incorporates:
     *  SignalConversion generated from: '<S279>/VeIDCR_e_APM_FailureType'
     *  SignalConversion generated from: '<S279>/LeIDCR_e_APM_FailureType'
     */
    (void)Rte_Write_VeIDCR_e_APM_FailureType_Value(LeIDCR_e_APM_FailureType);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_APM_FailureType' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_APM_ThermalRunaway(VAR
    (TeBPCR_e_ThrmlRnawy_WarnSts, AUTOMATIC) LeIDCR_e_APM_ThermalRunaway)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_APM_ThermalRunaway' */
    /* Outport: '<Root>/VeIDCR_e_APM_ThermalRunaway' incorporates:
     *  SignalConversion generated from: '<S280>/VeIDCR_e_APM_ThermalRunaway'
     *  SignalConversion generated from: '<S280>/LeIDCR_f_V2L_Pilot_Frequency'
     */
    /* Gateway: PokeIDCR_e_APM_ThermalRunaway/PokeIDCR_e_APM_ThermalRunawayChrt */
    /* During: PokeIDCR_e_APM_ThermalRunaway/PokeIDCR_e_APM_ThermalRunawayChrt */
    /* Entry Internal: PokeIDCR_e_APM_ThermalRunaway/PokeIDCR_e_APM_ThermalRunawayChrt */
    /* Transition: '<S728>:2' */
    (void)Rte_Write_VeIDCR_e_APM_ThermalRunaway_Value
        (LeIDCR_e_APM_ThermalRunaway);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_APM_ThermalRunaway' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_Charger_WeldingDetectAvail(VAR
    (TeIDCR_e_Charger_WeldDetAvail, AUTOMATIC)
    LeIDCR_e_Charger_WeldingDetectAvail, VAR(boolean, AUTOMATIC)
    LeIDCR_b_Charger_WeldingDetectAvail_FA)
{
    boolean rtb_LeIDCR_b_Charger_WeldingDetectAvai_d;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_Charger_WeldingDetectAvail' */
    /* Chart: '<S281>/PokeIDCR_e_Charger_WeldingDetectAvailChrt' incorporates:
     *  SignalConversion generated from: '<S281>/LeIDCR_b_V2L_DischargeFaultRsnFA'
     *  SignalConversion generated from: '<S281>/LeIDCR_e_V2L_DischargeFaultRsn'
     */
    /* Gateway: PokeIDCR_e_Charger_WeldingDetectAvail/PokeIDCR_e_Charger_WeldingDetectAvailChrt */
    /* During: PokeIDCR_e_Charger_WeldingDetectAvail/PokeIDCR_e_Charger_WeldingDetectAvailChrt */
    /* Entry Internal: PokeIDCR_e_Charger_WeldingDetectAvail/PokeIDCR_e_Charger_WeldingDetectAvailChrt */
    /* Transition: '<S729>:2' */
    if (!LeIDCR_b_Charger_WeldingDetectAvail_FA)
    {
        /* Transition: '<S729>:3' */
        /* Transition: '<S729>:15' */
        IDCR_ac_B.LeIDCR_e_Charger_WeldingDetectAvail_out =
            LeIDCR_e_Charger_WeldingDetectAvail;
        rtb_LeIDCR_b_Charger_WeldingDetectAvai_d = false;

        /* Transition: '<S729>:18' */
    }
    else
    {
        /* Transition: '<S729>:4' */
        rtb_LeIDCR_b_Charger_WeldingDetectAvai_d = true;
    }

    /* End of Chart: '<S281>/PokeIDCR_e_Charger_WeldingDetectAvailChrt' */

    /* Outport: '<Root>/VeIDCR_b_Charger_WeldingDetectAvail_FA' incorporates:
     *  SignalConversion generated from: '<S281>/VeIDCR_b_Charger_WeldingDetectAvail_FA'
     */
    (void)Rte_Write_VeIDCR_b_Charger_WeldingDetectAvail_FA_Value
        (rtb_LeIDCR_b_Charger_WeldingDetectAvai_d);

    /* Outport: '<Root>/VeIDCR_e_Charger_WeldingDetectAvail' incorporates:
     *  SignalConversion generated from: '<S281>/VeIDCR_e_Charger_WeldingDetectAvail'
     */
    (void)Rte_Write_VeIDCR_e_Charger_WeldingDetectAvail_Value
        (IDCR_ac_B.LeIDCR_e_Charger_WeldingDetectAvail_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_Charger_WeldingDetectAvail' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_ChrgFailSts(VAR(sint16, AUTOMATIC)
    LeIDCR_e_ChrgFailSts, VAR(boolean, AUTOMATIC) LeIDCR_b_ChrgFailStsFA)
{
    TeOBCR_e_ChrgFailSts rtb_LeIDCR_e_ChrgFailSts_out;
    boolean rtb_LeIDCR_b_ChrgFailStsFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_ChrgFailSts' */
    /* Chart: '<S282>/PokeIDCR_e_ChrgFailStsChrt' incorporates:
     *  SignalConversion generated from: '<S282>/LeIDCR_b_ChrgFailStsFA'
     *  SignalConversion generated from: '<S282>/LeIDCR_e_ChrgFailSts'
     */
    /* Gateway: PokeIDCR_e_ChrgFailSts/PokeIDCR_e_ChrgFailStsChrt */
    /* During: PokeIDCR_e_ChrgFailSts/PokeIDCR_e_ChrgFailStsChrt */
    /* Entry Internal: PokeIDCR_e_ChrgFailSts/PokeIDCR_e_ChrgFailStsChrt */
    /* Transition: '<S730>:2' */
    if (!LeIDCR_b_ChrgFailStsFA)
    {
        /* Transition: '<S730>:3' */
        /* Transition: '<S730>:15' */
        rtb_LeIDCR_e_ChrgFailSts_out = KeIDCR_e_ChrgFailSts_Map
            [(LeIDCR_e_ChrgFailSts)];
        rtb_LeIDCR_b_ChrgFailStsFA_out = false;

        /* Transition: '<S730>:18' */
    }
    else
    {
        /* Transition: '<S730>:4' */
        rtb_LeIDCR_e_ChrgFailSts_out = KeIDCR_e_ChrgFailSts;
        rtb_LeIDCR_b_ChrgFailStsFA_out = true;
    }

    /* End of Chart: '<S282>/PokeIDCR_e_ChrgFailStsChrt' */

    /* Outport: '<Root>/VeIDCR_b_ChrgFailStsFA' incorporates:
     *  SignalConversion generated from: '<S282>/VeIDCR_b_ChrgFailStsFA'
     */
    (void)Rte_Write_VeIDCR_b_ChrgFailStsFA_Value(rtb_LeIDCR_b_ChrgFailStsFA_out);

    /* Outport: '<Root>/VeIDCR_e_ChrgFailSts' incorporates:
     *  SignalConversion generated from: '<S282>/VeIDCR_e_ChrgFailSts'
     */
    (void)Rte_Write_VeIDCR_e_ChrgFailSts_Value(rtb_LeIDCR_e_ChrgFailSts_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_ChrgFailSts' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_ChrgrModeStat_OBCM(VAR(sint16, AUTOMATIC)
    LeIDCR_e_ChrgrModeStat_OBCM, VAR(boolean, AUTOMATIC)
    LeIDCR_b_ChrgrModeStat_OBCMFA)
{
    /* local block i/o variables */
    boolean rtb_LeIDCR_b_ChrgrModeStat_OBCMFA_out_n;
    TeOBCR_e_ChrgrModeStat_OBCM rtb_LeIDCR_e_ChrgrModeStat_OBCM_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_ChrgrModeStat_OBCM' */
    /* Chart: '<S283>/PokeIDCR_e_ChrgrModeStat_OBCMChrt' incorporates:
     *  SignalConversion generated from: '<S283>/LeIDCR_b_ChrgrModeStat_OBCMFA'
     *  SignalConversion generated from: '<S283>/LeIDCR_e_ChrgrModeStat_OBCM'
     */
    /* Gateway: PokeIDCR_e_ChrgrModeStat_OBCM/PokeIDCR_e_ChrgrModeStat_OBCMChrt */
    /* During: PokeIDCR_e_ChrgrModeStat_OBCM/PokeIDCR_e_ChrgrModeStat_OBCMChrt */
    /* Entry Internal: PokeIDCR_e_ChrgrModeStat_OBCM/PokeIDCR_e_ChrgrModeStat_OBCMChrt */
    /* Transition: '<S731>:2' */
    if (!LeIDCR_b_ChrgrModeStat_OBCMFA)
    {
        /* Transition: '<S731>:3' */
        /* Transition: '<S731>:15' */
        rtb_LeIDCR_e_ChrgrModeStat_OBCM_out = KaIDCR_e_ChrgrModeStat_Map
            [(LeIDCR_e_ChrgrModeStat_OBCM)];
        rtb_LeIDCR_b_ChrgrModeStat_OBCMFA_out_n = false;

        /* Transition: '<S731>:18' */
    }
    else
    {
        /* Transition: '<S731>:4' */
        rtb_LeIDCR_e_ChrgrModeStat_OBCM_out = KeIDCR_e_ChrgrModeStat;
        rtb_LeIDCR_b_ChrgrModeStat_OBCMFA_out_n = true;
    }

    /* End of Chart: '<S283>/PokeIDCR_e_ChrgrModeStat_OBCMChrt' */

    /* Outport: '<Root>/VeIDCR_e_ChrgrModeStat_OBCM' incorporates:
     *  SignalConversion generated from: '<S283>/VeIDCR_e_ChrgrModeStat_OBCM'
     */
    (void)Rte_Write_VeIDCR_e_ChrgrModeStat_OBCM_Value
        (rtb_LeIDCR_e_ChrgrModeStat_OBCM_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_ChrgrModeStat_OBCM' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_Chrgr_FaultStates(VAR
    (TeIDCR_e_Charger_FaultStates, AUTOMATIC) LeIDCR_e_Chrgr_FaultStates, VAR
    (boolean, AUTOMATIC) LeIDCR_b_Chrgr_FaultStatesFA)
{
    boolean rtb_LeIDCR_b_Chrgr_FaultStatesFA_out_b;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_Chrgr_FaultStates' */
    /* Chart: '<S284>/PokeIDCR_e_Chrgr_FaultStatesChrt' incorporates:
     *  SignalConversion generated from: '<S284>/LeIDCR_b_Chrgr_FaultStatesFA'
     *  SignalConversion generated from: '<S284>/LeIDCR_e_Chrgr_FaultStates'
     */
    /* Gateway: PokeIDCR_e_Chrgr_FaultStates/PokeIDCR_e_Chrgr_FaultStatesChrt */
    /* During: PokeIDCR_e_Chrgr_FaultStates/PokeIDCR_e_Chrgr_FaultStatesChrt */
    /* Entry Internal: PokeIDCR_e_Chrgr_FaultStates/PokeIDCR_e_Chrgr_FaultStatesChrt */
    /* Transition: '<S732>:2' */
    if (!LeIDCR_b_Chrgr_FaultStatesFA)
    {
        /* Transition: '<S732>:3' */
        /* Transition: '<S732>:15' */
        IDCR_ac_B.LeIDCR_e_Chrgr_FaultStates_out = LeIDCR_e_Chrgr_FaultStates;
        rtb_LeIDCR_b_Chrgr_FaultStatesFA_out_b = false;

        /* Transition: '<S732>:18' */
    }
    else
    {
        /* Transition: '<S732>:4' */
        rtb_LeIDCR_b_Chrgr_FaultStatesFA_out_b = true;
    }

    /* End of Chart: '<S284>/PokeIDCR_e_Chrgr_FaultStatesChrt' */

    /* Outport: '<Root>/VeIDCR_b_Chrgr_FaultStatesFA' incorporates:
     *  SignalConversion generated from: '<S284>/VeIDCR_b_Chrgr_FaultStatesFA'
     */
    (void)Rte_Write_VeIDCR_b_Chrgr_FaultStatesFA_Value
        (rtb_LeIDCR_b_Chrgr_FaultStatesFA_out_b);

    /* Outport: '<Root>/VeIDCR_e_Chrgr_FaultStates' incorporates:
     *  SignalConversion generated from: '<S284>/VeIDCR_e_Chrgr_FaultStates'
     */
    (void)Rte_Write_VeIDCR_e_Chrgr_FaultStates_Value
        (IDCR_ac_B.LeIDCR_e_Chrgr_FaultStates_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_Chrgr_FaultStates' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_DschrgFaultSts(VAR(TeVTLR_e_DisChrgFailSts,
    AUTOMATIC) LeIDCR_e_DschrgFaultSts, VAR(boolean, AUTOMATIC)
    LeIDCR_b_DschrgFaultStsFA)
{
    boolean rtb_LeIDCR_b_DschrgFaultStsFA_out_b;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_DschrgFaultSts' */
    /* Chart: '<S285>/PokeIDCR_e_DschrgFaultStsChrt' incorporates:
     *  SignalConversion generated from: '<S285>/LeIDCR_f_ACOutFreq1'
     *  SignalConversion generated from: '<S285>/LeIDCR_f_ACOutFreq'
     */
    /* Gateway: PokeIDCR_e_DschrgFaultSts/PokeIDCR_e_DschrgFaultStsChrt */
    /* During: PokeIDCR_e_DschrgFaultSts/PokeIDCR_e_DschrgFaultStsChrt */
    /* Entry Internal: PokeIDCR_e_DschrgFaultSts/PokeIDCR_e_DschrgFaultStsChrt */
    /* Transition: '<S733>:22' */
    if (!LeIDCR_b_DschrgFaultStsFA)
    {
        /* Transition: '<S733>:23' */
        /* Transition: '<S733>:27' */
        IDCR_ac_B.LeIDCR_e_DschrgFaultSts_out = LeIDCR_e_DschrgFaultSts;
        rtb_LeIDCR_b_DschrgFaultStsFA_out_b = false;

        /* Transition: '<S733>:21' */
    }
    else
    {
        /* Transition: '<S733>:24' */
        rtb_LeIDCR_b_DschrgFaultStsFA_out_b = true;
    }

    /* End of Chart: '<S285>/PokeIDCR_e_DschrgFaultStsChrt' */

    /* Outport: '<Root>/VeIDCR_b_DschrgFaultSts_FA' incorporates:
     *  SignalConversion generated from: '<S285>/VeIDCR_b_DschrgFaultStsFA'
     */
    (void)Rte_Write_VeIDCR_b_DschrgFaultSts_FA_Value
        (rtb_LeIDCR_b_DschrgFaultStsFA_out_b);

    /* Outport: '<Root>/VeIDCR_e_DschrgFaultSts' incorporates:
     *  SignalConversion generated from: '<S285>/VeIDCR_e_DschrgFaultSts'
     */
    (void)Rte_Write_VeIDCR_e_DschrgFaultSts_Value
        (IDCR_ac_B.LeIDCR_e_DschrgFaultSts_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_DschrgFaultSts' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_EVCC_FailureRsn(VAR(TeIDCR_e_EVCCFailRsn,
    AUTOMATIC) LeIDCR_e_EVCC_FailureRsn, VAR(boolean, AUTOMATIC)
    LeIDCR_b_EVCC_FailureRsnFA)
{
    boolean rtb_LeIDCR_b_EVCC_FailureRsnFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_EVCC_FailureRsn' */
    /* Chart: '<S286>/PokeIDCR_e_EVCC_FailureRsnChrt' incorporates:
     *  SignalConversion generated from: '<S286>/LeIDCR_b_EVCC_FailureRsnFA'
     *  SignalConversion generated from: '<S286>/LeIDCR_e_EVCC_FailureRsn'
     */
    /* Gateway: PokeIDCR_e_EVCC_FailureRsn/PokeIDCR_e_EVCC_FailureRsnChrt */
    /* During: PokeIDCR_e_EVCC_FailureRsn/PokeIDCR_e_EVCC_FailureRsnChrt */
    /* Entry Internal: PokeIDCR_e_EVCC_FailureRsn/PokeIDCR_e_EVCC_FailureRsnChrt */
    /* Transition: '<S734>:2' */
    if (!LeIDCR_b_EVCC_FailureRsnFA)
    {
        /* Transition: '<S734>:3' */
        /* Transition: '<S734>:15' */
        IDCR_ac_B.LeIDCR_e_EVCC_FailureRsn_out = LeIDCR_e_EVCC_FailureRsn;
        rtb_LeIDCR_b_EVCC_FailureRsnFA_out = false;

        /* Transition: '<S734>:18' */
    }
    else
    {
        /* Transition: '<S734>:4' */
        rtb_LeIDCR_b_EVCC_FailureRsnFA_out = true;
    }

    /* End of Chart: '<S286>/PokeIDCR_e_EVCC_FailureRsnChrt' */

    /* Outport: '<Root>/VeIDCR_b_EVCC_FailureRsnFA' incorporates:
     *  SignalConversion generated from: '<S286>/VeIDCR_b_EVCC_FailureRsnFA'
     */
    (void)Rte_Write_VeIDCR_b_EVCC_FailureRsnFA_Value
        (rtb_LeIDCR_b_EVCC_FailureRsnFA_out);

    /* Outport: '<Root>/VeIDCR_e_EVCC_FailureRsn' incorporates:
     *  SignalConversion generated from: '<S286>/VeIDCR_e_EVCC_FailureRsn'
     */
    (void)Rte_Write_VeIDCR_e_EVCC_FailureRsn_Value
        (IDCR_ac_B.LeIDCR_e_EVCC_FailureRsn_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_EVCC_FailureRsn' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_EVSEIsolSts(VAR(sint16, AUTOMATIC)
    LeIDCR_e_EVSEIsolSts, VAR(boolean, AUTOMATIC) LeIDCR_b_EVSEIsolStsFA)
{
    boolean rtb_LeIDCR_b_EVSEIsolStsFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_EVSEIsolSts' */
    /* Chart: '<S287>/PokeIDCR_e_EVSEIsolStsChrt' incorporates:
     *  Constant: '<S735>/Calib'
     *  SignalConversion generated from: '<S287>/LeIDCR_b_EVSEIsolStsFA'
     *  SignalConversion generated from: '<S287>/LeIDCR_e_EVSEIsolSts'
     */
    /* Gateway: PokeIDCR_e_EVSEIsolSts/PokeIDCR_e_EVSEIsolStsChrt */
    /* During: PokeIDCR_e_EVSEIsolSts/PokeIDCR_e_EVSEIsolStsChrt */
    /* Entry Internal: PokeIDCR_e_EVSEIsolSts/PokeIDCR_e_EVSEIsolStsChrt */
    /* Transition: '<S736>:2' */
    if (!LeIDCR_b_EVSEIsolStsFA)
    {
        /* Transition: '<S736>:3' */
        /* Transition: '<S736>:15' */
        IDCR_ac_B.LeIDCR_e_EVSEIsolSts_out = KaIDCR_e_EVSEIsolSts_Map
            [(LeIDCR_e_EVSEIsolSts)];
        rtb_LeIDCR_b_EVSEIsolStsFA_out = false;

        /* Transition: '<S736>:18' */
    }
    else
    {
        /* Transition: '<S736>:4' */
        rtb_LeIDCR_b_EVSEIsolStsFA_out = true;
    }

    /* End of Chart: '<S287>/PokeIDCR_e_EVSEIsolStsChrt' */

    /* Outport: '<Root>/VeIDCR_b_EVSEIsolSts_FA' incorporates:
     *  SignalConversion generated from: '<S287>/VeIDCR_b_EVSEIsolStsFA'
     */
    (void)Rte_Write_VeIDCR_b_EVSEIsolSts_FA_Value(rtb_LeIDCR_b_EVSEIsolStsFA_out);

    /* Outport: '<Root>/VeIDCR_e_EVSEIsolSts' incorporates:
     *  SignalConversion generated from: '<S287>/VeIDCR_e_EVSEIsolSts'
     */
    (void)Rte_Write_VeIDCR_e_EVSEIsolSts_Value
        (IDCR_ac_B.LeIDCR_e_EVSEIsolSts_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_EVSEIsolSts' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_EVSEStsCode(VAR(TeIDCR_e_EVSEStsCode, AUTOMATIC)
    LeIDCR_e_EVSEStsCode)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_EVSEStsCode' */
    /* Outport: '<Root>/VeIDCR_e_EVSEStsCode' incorporates:
     *  SignalConversion generated from: '<S288>/VeIDCR_e_EVSEStsCode'
     *  SignalConversion generated from: '<S288>/LeIDCR_e_EVSEStsCode'
     */
    /* Gateway: PokeIDCR_e_EVSEStsCode/PokeIDCR_e_EVSEStsCodeChrt */
    /* During: PokeIDCR_e_EVSEStsCode/PokeIDCR_e_EVSEStsCodeChrt */
    /* Entry Internal: PokeIDCR_e_EVSEStsCode/PokeIDCR_e_EVSEStsCodeChrt */
    /* Transition: '<S737>:2' */
    (void)Rte_Write_VeIDCR_e_EVSEStsCode_Value(LeIDCR_e_EVSEStsCode);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_EVSEStsCode' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_EVSE_CHAdeMOProtocol(VAR(TeIDCR_e_CHAdeMOPrtcl,
    AUTOMATIC) LeIDCR_e_EVSE_CHAdeMOProtocol, VAR(boolean, AUTOMATIC)
    LeIDCR_b_EVSE_CHAdeMOProtocol_FA)
{
    boolean rtb_LeIDCR_b_EVSE_CHAdeMOProtocol_FA_o_k;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_EVSE_CHAdeMOProtocol' */
    /* Chart: '<S289>/PokeIDCR_e_EVSE_CHAdeMOProtocolChrt' incorporates:
     *  SignalConversion generated from: '<S289>/LeIDCR_b_V2L_DischargeFaultRsnFA'
     *  SignalConversion generated from: '<S289>/LeIDCR_e_V2L_DischargeFaultRsn'
     */
    /* Gateway: PokeIDCR_e_EVSE_CHAdeMOProtocol/PokeIDCR_e_EVSE_CHAdeMOProtocolChrt */
    /* During: PokeIDCR_e_EVSE_CHAdeMOProtocol/PokeIDCR_e_EVSE_CHAdeMOProtocolChrt */
    /* Entry Internal: PokeIDCR_e_EVSE_CHAdeMOProtocol/PokeIDCR_e_EVSE_CHAdeMOProtocolChrt */
    /* Transition: '<S738>:2' */
    if (!LeIDCR_b_EVSE_CHAdeMOProtocol_FA)
    {
        /* Transition: '<S738>:3' */
        /* Transition: '<S738>:15' */
        IDCR_ac_B.LeIDCR_e_EVSE_CHAdeMOProtocol_out =
            LeIDCR_e_EVSE_CHAdeMOProtocol;
        rtb_LeIDCR_b_EVSE_CHAdeMOProtocol_FA_o_k = false;

        /* Transition: '<S738>:18' */
    }
    else
    {
        /* Transition: '<S738>:4' */
        rtb_LeIDCR_b_EVSE_CHAdeMOProtocol_FA_o_k = true;
    }

    /* End of Chart: '<S289>/PokeIDCR_e_EVSE_CHAdeMOProtocolChrt' */

    /* Outport: '<Root>/VeIDCR_b_EVSE_CHAdeMOProtocol_FA' incorporates:
     *  SignalConversion generated from: '<S289>/VeIDCR_b_EVSE_CHAdeMOProtocol_FA'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_CHAdeMOProtocol_FA_Value
        (rtb_LeIDCR_b_EVSE_CHAdeMOProtocol_FA_o_k);

    /* Outport: '<Root>/VeIDCR_e_EVSE_CHAdeMOProtocol' incorporates:
     *  SignalConversion generated from: '<S289>/VeIDCR_e_EVSE_CHAdeMOProtocol'
     */
    (void)Rte_Write_VeIDCR_e_EVSE_CHAdeMOProtocol_Value
        (IDCR_ac_B.LeIDCR_e_EVSE_CHAdeMOProtocol_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_EVSE_CHAdeMOProtocol' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_EVSE_ChrgStopControl(VAR
    (TeIDCR_e_EVSE_ChrgStopControl, AUTOMATIC) LeIDCR_e_EVSE_ChrgStopControl,
    VAR(boolean, AUTOMATIC) LeIDCR_b_EVSE_ChrgStopControl_FA)
{
    boolean rtb_LeIDCR_b_EVSE_ChrgStopControl_FA_o_j;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_EVSE_ChrgStopControl' */
    /* Chart: '<S290>/PokeIDCR_e_EVSE_ChrgStopControlChrt' incorporates:
     *  SignalConversion generated from: '<S290>/LeIDCR_b_ACSideCurr_L2FA'
     */
    /* Gateway: PokeIDCR_e_EVSE_ChrgStopControl/PokeIDCR_e_EVSE_ChrgStopControlChrt */
    /* During: PokeIDCR_e_EVSE_ChrgStopControl/PokeIDCR_e_EVSE_ChrgStopControlChrt */
    /* Entry Internal: PokeIDCR_e_EVSE_ChrgStopControl/PokeIDCR_e_EVSE_ChrgStopControlChrt */
    /* Transition: '<S739>:2' */
    if (!LeIDCR_b_EVSE_ChrgStopControl_FA)
    {
        /* Transition: '<S739>:3' */
        /* Transition: '<S739>:15' */
        rtb_LeIDCR_b_EVSE_ChrgStopControl_FA_o_j = false;

        /* Transition: '<S739>:18' */
    }
    else
    {
        /* Transition: '<S739>:4' */
        rtb_LeIDCR_b_EVSE_ChrgStopControl_FA_o_j = true;
    }

    /* End of Chart: '<S290>/PokeIDCR_e_EVSE_ChrgStopControlChrt' */

    /* Outport: '<Root>/VeIDCR_b_EVSE_ChrgStopControl_FA' incorporates:
     *  SignalConversion generated from: '<S290>/VeIDCR_b_EVSE_ChrgStopControl_FA'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_ChrgStopControl_FA_Value
        (rtb_LeIDCR_b_EVSE_ChrgStopControl_FA_o_j);

    /* Outport: '<Root>/VeIDCR_e_EVSE_ChrgStopControl' incorporates:
     *  SignalConversion generated from: '<S290>/VeIDCR_e_EVSE_ChrgStopControl'
     *  SignalConversion generated from: '<S290>/LeIDCR_I_ACSideCurr_L2'
     */
    (void)Rte_Write_VeIDCR_e_EVSE_ChrgStopControl_Value
        (LeIDCR_e_EVSE_ChrgStopControl);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_EVSE_ChrgStopControl' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_EVSE_Error(VAR(TeIDCR_e_EVSE_Error, AUTOMATIC)
    LeIDCR_e_EVSE_Error, VAR(boolean, AUTOMATIC) LeIDCR_b_EVSE_Error_FA)
{
    boolean rtb_LeIDCR_b_EVSE_Error_FA_out_h;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_EVSE_Error' */
    /* Chart: '<S291>/PokeIDCR_e_EVSE_ErrorChrt' incorporates:
     *  SignalConversion generated from: '<S291>/LeIDCR_b_ACSideCurr_L2FA'
     */
    /* Gateway: PokeIDCR_e_EVSE_Error/PokeIDCR_e_EVSE_ErrorChrt */
    /* During: PokeIDCR_e_EVSE_Error/PokeIDCR_e_EVSE_ErrorChrt */
    /* Entry Internal: PokeIDCR_e_EVSE_Error/PokeIDCR_e_EVSE_ErrorChrt */
    /* Transition: '<S740>:2' */
    if (!LeIDCR_b_EVSE_Error_FA)
    {
        /* Transition: '<S740>:3' */
        /* Transition: '<S740>:15' */
        rtb_LeIDCR_b_EVSE_Error_FA_out_h = false;

        /* Transition: '<S740>:18' */
    }
    else
    {
        /* Transition: '<S740>:4' */
        rtb_LeIDCR_b_EVSE_Error_FA_out_h = true;
    }

    /* End of Chart: '<S291>/PokeIDCR_e_EVSE_ErrorChrt' */

    /* Outport: '<Root>/VeIDCR_b_EVSE_Error_FA' incorporates:
     *  SignalConversion generated from: '<S291>/VeIDCR_b_EVSE_Error_FA'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_Error_FA_Value
        (rtb_LeIDCR_b_EVSE_Error_FA_out_h);

    /* Outport: '<Root>/VeIDCR_e_EVSE_Error' incorporates:
     *  SignalConversion generated from: '<S291>/VeIDCR_e_EVSE_Error'
     *  SignalConversion generated from: '<S291>/LeIDCR_I_ACSideCurr_L2'
     */
    (void)Rte_Write_VeIDCR_e_EVSE_Error_Value(LeIDCR_e_EVSE_Error);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_EVSE_Error' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_EVSE_Notification(VAR(TeIDCR_e_EVSENotification,
    AUTOMATIC) LeIDCR_e_EVSE_Notification)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_EVSE_Notification' */
    /* Outport: '<Root>/VeIDCR_b_EVSENotificationFA' incorporates:
     *  Chart: '<S292>/PokeIDCR_e_EVSE_NotificationChrt'
     *  SignalConversion generated from: '<S292>/VeIDCR_b_EVSE_NotificationFA'
     */
    /* Gateway: PokeIDCR_e_EVSE_Notification/PokeIDCR_e_EVSE_NotificationChrt */
    /* During: PokeIDCR_e_EVSE_Notification/PokeIDCR_e_EVSE_NotificationChrt */
    /* Entry Internal: PokeIDCR_e_EVSE_Notification/PokeIDCR_e_EVSE_NotificationChrt */
    /* Transition: '<S741>:2' */
    (void)Rte_Write_VeIDCR_b_EVSENotificationFA_Value(false);

    /* Outport: '<Root>/VeIDCR_e_EVSENotification' incorporates:
     *  SignalConversion generated from: '<S292>/VeIDCR_e_EVSE_Notification'
     *  SignalConversion generated from: '<S292>/LeIDCR_e_EVSE_Notification'
     */
    (void)Rte_Write_VeIDCR_e_EVSENotification_Value(LeIDCR_e_EVSE_Notification);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_EVSE_Notification' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_EVSE_OfferedService(VAR
    (TeIDCR_e_EVSE_OfferedService, AUTOMATIC) LeIDCR_e_EVSE_OfferedService, VAR
    (boolean, AUTOMATIC) LeIDCR_b_EVSE_OfferedService_FA)
{
    boolean rtb_LeIDCR_b_EVSE_OfferedService_FA_ou_c;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_EVSE_OfferedService' */
    /* Chart: '<S293>/PokeIDCR_e_EVSE_OfferedServiceChrt' incorporates:
     *  SignalConversion generated from: '<S293>/LeIDCR_I_ACSideCurr_L2'
     *  SignalConversion generated from: '<S293>/LeIDCR_b_ACSideCurr_L2FA'
     */
    /* Gateway: PokeIDCR_e_EVSE_OfferedService/PokeIDCR_e_EVSE_OfferedServiceChrt */
    /* During: PokeIDCR_e_EVSE_OfferedService/PokeIDCR_e_EVSE_OfferedServiceChrt */
    /* Entry Internal: PokeIDCR_e_EVSE_OfferedService/PokeIDCR_e_EVSE_OfferedServiceChrt */
    /* Transition: '<S742>:2' */
    if (!LeIDCR_b_EVSE_OfferedService_FA)
    {
        /* Transition: '<S742>:3' */
        /* Transition: '<S742>:15' */
        IDCR_ac_B.LeIDCR_e_EVSE_OfferedService_out =
            LeIDCR_e_EVSE_OfferedService;
        rtb_LeIDCR_b_EVSE_OfferedService_FA_ou_c = false;

        /* Transition: '<S742>:18' */
    }
    else
    {
        /* Transition: '<S742>:4' */
        rtb_LeIDCR_b_EVSE_OfferedService_FA_ou_c = true;
    }

    /* End of Chart: '<S293>/PokeIDCR_e_EVSE_OfferedServiceChrt' */

    /* Outport: '<Root>/VeIDCR_b_EVSE_OfferedService_FA' incorporates:
     *  SignalConversion generated from: '<S293>/VeIDCR_b_EVSE_OfferedService_FA'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_OfferedService_FA_Value
        (rtb_LeIDCR_b_EVSE_OfferedService_FA_ou_c);

    /* Outport: '<Root>/VeIDCR_e_EVSE_OfferedService' incorporates:
     *  SignalConversion generated from: '<S293>/VeIDCR_e_EVSE_OfferedService'
     */
    (void)Rte_Write_VeIDCR_e_EVSE_OfferedService_Value
        (IDCR_ac_B.LeIDCR_e_EVSE_OfferedService_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_EVSE_OfferedService' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_EVSE_PilotStat_OBCM(VAR(sint16, AUTOMATIC)
    LeIDCR_e_EVSE_PilotStat_OBCM, VAR(boolean, AUTOMATIC)
    LeIDCR_b_EVSE_PilotStat_OBCMFA)
{
    /* local block i/o variables */
    boolean rtb_LeIDCR_b_EVSE_PilotStat_OBCMFA_out_m;
    TeOBCR_e_EVSE_PilotStat_OBCM rtb_LeIDCR_e_EVSE_PilotStat_OBCM_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_EVSE_PilotStat_OBCM' */
    /* Chart: '<S294>/PokeIDCR_e_EVSE_PilotStat_OBCMChrt' incorporates:
     *  SignalConversion generated from: '<S294>/LeIDCR_b_EVSE_PilotStat_OBCMFA'
     *  SignalConversion generated from: '<S294>/LeIDCR_e_EVSE_PilotStat_OBCM'
     */
    /* Gateway: PokeIDCR_e_EVSE_PilotStat_OBCM/PokeIDCR_e_EVSE_PilotStat_OBCMChrt */
    /* During: PokeIDCR_e_EVSE_PilotStat_OBCM/PokeIDCR_e_EVSE_PilotStat_OBCMChrt */
    /* Entry Internal: PokeIDCR_e_EVSE_PilotStat_OBCM/PokeIDCR_e_EVSE_PilotStat_OBCMChrt */
    /* Transition: '<S743>:2' */
    if (!LeIDCR_b_EVSE_PilotStat_OBCMFA)
    {
        /* Transition: '<S743>:3' */
        /* Transition: '<S743>:15' */
        rtb_LeIDCR_e_EVSE_PilotStat_OBCM_out = KaIDCR_e_EVSEStat_Map
            [(LeIDCR_e_EVSE_PilotStat_OBCM)];
        rtb_LeIDCR_b_EVSE_PilotStat_OBCMFA_out_m = false;

        /* Transition: '<S743>:18' */
    }
    else
    {
        /* Transition: '<S743>:4' */
        rtb_LeIDCR_e_EVSE_PilotStat_OBCM_out = KeIDCR_e_EVSEStat;
        rtb_LeIDCR_b_EVSE_PilotStat_OBCMFA_out_m = true;
    }

    /* End of Chart: '<S294>/PokeIDCR_e_EVSE_PilotStat_OBCMChrt' */

    /* Outport: '<Root>/VeIDCR_e_EVSE_PilotStat_OBCM' incorporates:
     *  SignalConversion generated from: '<S294>/VeIDCR_e_EVSE_PilotStat_OBCM'
     */
    (void)Rte_Write_VeIDCR_e_EVSE_PilotStat_OBCM_Value
        (rtb_LeIDCR_e_EVSE_PilotStat_OBCM_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_EVSE_PilotStat_OBCM' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_EVSE_TLS_CONNECTION(VAR(TeIDCR_e_TLS_Connection,
    AUTOMATIC) LeIDCR_e_EVSE_TLS_CONNECTION)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_EVSE_TLS_CONNECTION' */
    /* Outport: '<Root>/VeIDCR_b_TLS_ConnectionFA' incorporates:
     *  Chart: '<S295>/PokeIDCR_e_EVSE_TLS_CONNECTIONChrt'
     *  SignalConversion generated from: '<S295>/VeIDCR_b_EVSE_TLS_CONNECTION_FA'
     */
    /* Gateway: PokeIDCR_e_EVSE_TLS_CONNECTION/PokeIDCR_e_EVSE_TLS_CONNECTIONChrt */
    /* During: PokeIDCR_e_EVSE_TLS_CONNECTION/PokeIDCR_e_EVSE_TLS_CONNECTIONChrt */
    /* Entry Internal: PokeIDCR_e_EVSE_TLS_CONNECTION/PokeIDCR_e_EVSE_TLS_CONNECTIONChrt */
    /* Transition: '<S744>:2' */
    (void)Rte_Write_VeIDCR_b_TLS_ConnectionFA_Value(false);

    /* Outport: '<Root>/VeIDCR_e_TLS_Connection' incorporates:
     *  SignalConversion generated from: '<S295>/VeIDCR_e_EVSE_TLS_CONNECTION'
     *  SignalConversion generated from: '<S295>/LeIDCR_e_EVSE_TLS_CONNECTION'
     */
    (void)Rte_Write_VeIDCR_e_TLS_Connection_Value(LeIDCR_e_EVSE_TLS_CONNECTION);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_EVSE_TLS_CONNECTION' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_ExtChargerSts(VAR(TeIDCR_e_ExtChargerSts,
    AUTOMATIC) LeIDCR_e_ExtChargerSts, VAR(boolean, AUTOMATIC)
    LeIDCR_b_ExtChargerSts_FA)
{
    boolean rtb_LeIDCR_b_ExtChargerSts_FA_out_d;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_ExtChargerSts' */
    /* Chart: '<S296>/PokeIDCR_e_ExtChargerStsChrt' incorporates:
     *  SignalConversion generated from: '<S296>/LeIDCR_b_V2L_DischargeFaultRsnFA'
     *  SignalConversion generated from: '<S296>/LeIDCR_e_V2L_DischargeFaultRsn'
     */
    /* Gateway: PokeIDCR_e_ExtChargerSts/PokeIDCR_e_ExtChargerStsChrt */
    /* During: PokeIDCR_e_ExtChargerSts/PokeIDCR_e_ExtChargerStsChrt */
    /* Entry Internal: PokeIDCR_e_ExtChargerSts/PokeIDCR_e_ExtChargerStsChrt */
    /* Transition: '<S745>:2' */
    if (!LeIDCR_b_ExtChargerSts_FA)
    {
        /* Transition: '<S745>:3' */
        /* Transition: '<S745>:15' */
        IDCR_ac_B.LeIDCR_e_ExtChargerSts_out = LeIDCR_e_ExtChargerSts;
        rtb_LeIDCR_b_ExtChargerSts_FA_out_d = false;

        /* Transition: '<S745>:18' */
    }
    else
    {
        /* Transition: '<S745>:4' */
        rtb_LeIDCR_b_ExtChargerSts_FA_out_d = true;
    }

    /* End of Chart: '<S296>/PokeIDCR_e_ExtChargerStsChrt' */

    /* Outport: '<Root>/VeIDCR_b_ExtChargerSts_FA' incorporates:
     *  SignalConversion generated from: '<S296>/VeIDCR_b_ExtChargerSts_FA'
     */
    (void)Rte_Write_VeIDCR_b_ExtChargerSts_FA_Value
        (rtb_LeIDCR_b_ExtChargerSts_FA_out_d);

    /* Outport: '<Root>/VeIDCR_e_ExtChargerSts' incorporates:
     *  SignalConversion generated from: '<S296>/VeIDCR_e_ExtChargerSts'
     */
    (void)Rte_Write_VeIDCR_e_ExtChargerSts_Value
        (IDCR_ac_B.LeIDCR_e_ExtChargerSts_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_ExtChargerSts' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_IBS_BattSocAcc(VAR(sint16, AUTOMATIC)
    LeIDCR_e_IBS_BattSocAcc)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_IBS_BattSocAcc' */
    /* Outport: '<Root>/VeIDCR_b_BattSocAcc' incorporates:
     *  Chart: '<S297>/PokeIDCR_e_IBS_BattSocAccChrt'
     *  Constant: '<S747>/Calib'
     *  SignalConversion generated from: '<S297>/VeIDCR_e_IBS_BattSocAcc'
     *  SignalConversion generated from: '<S297>/LeIDCR_e_IBS_BattSocAcc'
     */
    /* Gateway: PokeIDCR_e_IBS_BattSocAcc/PokeIDCR_e_IBS_BattSocAccChrt */
    /* During: PokeIDCR_e_IBS_BattSocAcc/PokeIDCR_e_IBS_BattSocAccChrt */
    /* Entry Internal: PokeIDCR_e_IBS_BattSocAcc/PokeIDCR_e_IBS_BattSocAccChrt */
    /* Transition: '<S746>:2' */
    (void)Rte_Write_VeIDCR_b_BattSocAcc_Value(KaIDCR_b_SocAccuracy_Map
        [(LeIDCR_e_IBS_BattSocAcc)]);

    /* Merge: '<Root>/Merge_244' incorporates:
     *  Chart: '<S297>/PokeIDCR_e_IBS_BattSocAccChrt'
     *  Constant: '<S747>/Calib'
     *  SignalConversion generated from: '<S297>/LeIDCR_e_IBS_BattSocAcc'
     *  SignalConversion generated from: '<S297>/VeIDCR_e_IBS_BattSocAcc_write'
     */
    Rte_IrvWrite_PokeIDCR_e_IBS_BattSocAcc_IBS_BattSOCAcc_Init_IRV_IRV
        (KaIDCR_b_SocAccuracy_Map[(LeIDCR_e_IBS_BattSocAcc)]);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_IBS_BattSocAcc' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_IBS_BattTempSts(VAR(TeGENR_e_IBS_BattTempSts,
    AUTOMATIC) LeIDCR_e_IBS_BattTempSts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_IBS_BattTempSts' */
    /* Outport: '<Root>/VeIDCR_e_IBS_BattTempFailSts' incorporates:
     *  SignalConversion generated from: '<S298>/VeIDCR_e_IBS_BattTempSts'
     *  SignalConversion generated from: '<S298>/LeIDCR_e_IBS_BattTempSts'
     */
    /* Gateway: PokeIDCR_e_IBS_BattTempSts/PokeIDCR_e_IBS_BattTempStsChrt */
    /* During: PokeIDCR_e_IBS_BattTempSts/PokeIDCR_e_IBS_BattTempStsChrt */
    /* Entry Internal: PokeIDCR_e_IBS_BattTempSts/PokeIDCR_e_IBS_BattTempStsChrt */
    /* Transition: '<S748>:2' */
    (void)Rte_Write_VeIDCR_e_IBS_BattTempFailSts_Value(LeIDCR_e_IBS_BattTempSts);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_IBS_BattTempSts' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_IBS_BattVoltSts(VAR(sint16, AUTOMATIC)
    LeIDCR_e_IBS_BattVoltSts)
{
    /* local block i/o variables */
    sint16 rtb_LeIDCR_e_IBS_BattVoltSts_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_IBS_BattVoltSts' */
    /* Chart: '<S299>/PokeIDCR_e_IBS_BattVoltStsChrt' incorporates:
     *  SignalConversion generated from: '<S299>/LeIDCR_e_IBS_BattVoltSts'
     */
    /* Gateway: PokeIDCR_e_IBS_BattVoltSts/PokeIDCR_e_IBS_BattVoltStsChrt */
    /* During: PokeIDCR_e_IBS_BattVoltSts/PokeIDCR_e_IBS_BattVoltStsChrt */
    /* Entry Internal: PokeIDCR_e_IBS_BattVoltSts/PokeIDCR_e_IBS_BattVoltStsChrt */
    /* Transition: '<S749>:2' */
    rtb_LeIDCR_e_IBS_BattVoltSts_out = LeIDCR_e_IBS_BattVoltSts;

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_IBS_BattVoltSts' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_IBS_Current_Status(VAR
    (TeGENR_e_IBS_Current_Status, AUTOMATIC) LeIDCR_e_IBS_Current_Status)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_IBS_Current_Status' */
    /* Outport: '<Root>/VeIDCR_b_IBS_Current_Status_FA' incorporates:
     *  Chart: '<S300>/PokeIDCR_e_IBS_Current_StatusChrt'
     *  SignalConversion generated from: '<S300>/VeIDCR_b_IBS_Current_StatusFA'
     */
    /* Gateway: PokeIDCR_e_IBS_Current_Status/PokeIDCR_e_IBS_Current_StatusChrt */
    /* During: PokeIDCR_e_IBS_Current_Status/PokeIDCR_e_IBS_Current_StatusChrt */
    /* Entry Internal: PokeIDCR_e_IBS_Current_Status/PokeIDCR_e_IBS_Current_StatusChrt */
    /* Transition: '<S750>:2' */
    (void)Rte_Write_VeIDCR_b_IBS_Current_Status_FA_Value(false);

    /* Outport: '<Root>/VeIDCR_e_IBS_Current_Status' incorporates:
     *  SignalConversion generated from: '<S300>/VeIDCR_e_IBS_Current_Status'
     *  SignalConversion generated from: '<S300>/LeIDCR_e_IBS_Current_Status'
     */
    (void)Rte_Write_VeIDCR_e_IBS_Current_Status_Value
        (LeIDCR_e_IBS_Current_Status);

    /* Merge: '<Root>/Merge_31_Irv' incorporates:
     *  Chart: '<S300>/PokeIDCR_e_IBS_Current_StatusChrt'
     *  SignalConversion generated from: '<S300>/VeIDCR_b_IBS_Current_StatusFA_write'
     */
    Rte_IrvWrite_PokeIDCR_e_IBS_Current_Status_VeIDCR_b_IBS_Current_StatusFA_write_IRV
        (false);

    /* Merge: '<Root>/Merge_30_Irv' incorporates:
     *  SignalConversion generated from: '<S300>/LeIDCR_e_IBS_Current_Status'
     *  SignalConversion generated from: '<S300>/VeIDCR_e_IBS_Current_Status_write'
     */
    Rte_IrvWrite_PokeIDCR_e_IBS_Current_Status_IBS_Current_Status_Init_write_IRV
        (LeIDCR_e_IBS_Current_Status);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_IBS_Current_Status' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_IBS_I_RANGE(VAR(TeGENR_e_IBS_I_Range, AUTOMATIC)
    LeIDCR_e_IBS_I_RANGE, VAR(boolean, AUTOMATIC) LeIDCR_b_IBS_I_RANGEFA)
{
    TeGENR_e_IBS_I_Range rtb_LeIDCR_e_IBS_I_RANGE_out;
    boolean rtb_LeIDCR_b_IBS_I_RANGEFA_out_i;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_IBS_I_RANGE' */
    /* Chart: '<S301>/PokeIDCR_e_IBS_I_RANGEChrt' incorporates:
     *  SignalConversion generated from: '<S301>/LeIDCR_b_IBS_I_RANGEFA'
     *  SignalConversion generated from: '<S301>/LeIDCR_e_IBS_I_RANGE'
     */
    /* Gateway: PokeIDCR_e_IBS_I_RANGE/PokeIDCR_e_IBS_I_RANGEChrt */
    /* During: PokeIDCR_e_IBS_I_RANGE/PokeIDCR_e_IBS_I_RANGEChrt */
    /* Entry Internal: PokeIDCR_e_IBS_I_RANGE/PokeIDCR_e_IBS_I_RANGEChrt */
    /* Transition: '<S751>:2' */
    if (!LeIDCR_b_IBS_I_RANGEFA)
    {
        /* Transition: '<S751>:3' */
        /* Transition: '<S751>:15' */
        rtb_LeIDCR_e_IBS_I_RANGE_out = LeIDCR_e_IBS_I_RANGE;
        rtb_LeIDCR_b_IBS_I_RANGEFA_out_i = false;

        /* Transition: '<S751>:18' */
    }
    else
    {
        /* Transition: '<S751>:4' */
        rtb_LeIDCR_e_IBS_I_RANGE_out = KeIDCR_e_IBS_I_RANGE_SNA;
        rtb_LeIDCR_b_IBS_I_RANGEFA_out_i = true;
    }

    /* End of Chart: '<S301>/PokeIDCR_e_IBS_I_RANGEChrt' */

    /* Outport: '<Root>/VeIDCR_b_IBS_I_RANGE_FA' incorporates:
     *  SignalConversion generated from: '<S301>/VeIDCR_b_IBS_I_RANGEFA'
     */
    (void)Rte_Write_VeIDCR_b_IBS_I_RANGE_FA_Value
        (rtb_LeIDCR_b_IBS_I_RANGEFA_out_i);

    /* Outport: '<Root>/VeIDCR_e_IBS_I_RANGE' incorporates:
     *  SignalConversion generated from: '<S301>/VeIDCR_e_IBS_I_RANGE'
     */
    (void)Rte_Write_VeIDCR_e_IBS_I_RANGE_Value(rtb_LeIDCR_e_IBS_I_RANGE_out);

    /* Merge: '<Root>/Merge_29_Irv' incorporates:
     *  SignalConversion generated from: '<S301>/VeIDCR_b_IBS_I_RANGEFA_write'
     * */
    Rte_IrvWrite_PokeIDCR_e_IBS_I_RANGE_VeIDCR_b_IBS_I_RANGEFA_write_IRV
        (rtb_LeIDCR_b_IBS_I_RANGEFA_out_i);

    /* Merge: '<Root>/Merge_28_Irv' incorporates:
     *  SignalConversion generated from: '<S301>/VeIDCR_e_IBS_I_RANGE_write'
     * */
    Rte_IrvWrite_PokeIDCR_e_IBS_I_RANGE_IBS_I_RANGE_Init_write_IRV
        (rtb_LeIDCR_e_IBS_I_RANGE_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_IBS_I_RANGE' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_ISO15118_MessageResponse(VAR
    (TeIDCR_e_MessageResponse, AUTOMATIC) LeIDCR_e_ISO15118_MessageResponse, VAR
    (boolean, AUTOMATIC) LeIDCR_b_ISO15118_MessageResponse_FA)
{
    boolean rtb_LeIDCR_b_ISO15118_MessageResponse__h;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_ISO15118_MessageResponse' */
    /* Chart: '<S302>/PokeIDCR_e_ISO15118_MessageResponseChrt' incorporates:
     *  SignalConversion generated from: '<S302>/LeIDCR_b_ACSideCurr_L2FA'
     */
    /* Gateway: PokeIDCR_e_ISO15118_MessageResponse/PokeIDCR_e_ISO15118_MessageResponseChrt */
    /* During: PokeIDCR_e_ISO15118_MessageResponse/PokeIDCR_e_ISO15118_MessageResponseChrt */
    /* Entry Internal: PokeIDCR_e_ISO15118_MessageResponse/PokeIDCR_e_ISO15118_MessageResponseChrt */
    /* Transition: '<S752>:2' */
    if (!LeIDCR_b_ISO15118_MessageResponse_FA)
    {
        /* Transition: '<S752>:3' */
        /* Transition: '<S752>:15' */
        rtb_LeIDCR_b_ISO15118_MessageResponse__h = false;

        /* Transition: '<S752>:18' */
    }
    else
    {
        /* Transition: '<S752>:4' */
        rtb_LeIDCR_b_ISO15118_MessageResponse__h = true;
    }

    /* End of Chart: '<S302>/PokeIDCR_e_ISO15118_MessageResponseChrt' */

    /* Outport: '<Root>/VeIDCR_b_ISO15118_MessageResponse_FA' incorporates:
     *  SignalConversion generated from: '<S302>/VeIDCR_b_ISO15118_MessageResponse_FA'
     */
    (void)Rte_Write_VeIDCR_b_ISO15118_MessageResponse_FA_Value
        (rtb_LeIDCR_b_ISO15118_MessageResponse__h);

    /* Outport: '<Root>/VeIDCR_e_ISO15118_MessageResponse' incorporates:
     *  SignalConversion generated from: '<S302>/VeIDCR_e_ISO15118_MessageResponse'
     *  SignalConversion generated from: '<S302>/LeIDCR_I_ACSideCurr_L2'
     */
    (void)Rte_Write_VeIDCR_e_ISO15118_MessageResponse_Value
        (LeIDCR_e_ISO15118_MessageResponse);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_ISO15118_MessageResponse' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_ISO15118_ResponseCode(VAR
    (TeIDCR_e_ISOResponseCode, AUTOMATIC) LeIDCR_e_ISO15118_ResponseCode, VAR
    (boolean, AUTOMATIC) LeIDCR_b_ISO15118_ResponseCode_FA)
{
    boolean rtb_LeIDCR_b_ISO15118_ResponseCode_FA__j;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_ISO15118_ResponseCode' */
    /* Chart: '<S303>/PokeIDCR_e_ISO15118_ResponseCodeChrt' incorporates:
     *  SignalConversion generated from: '<S303>/LeIDCR_b_ACSideCurr_L2FA'
     */
    /* Gateway: PokeIDCR_e_ISO15118_ResponseCode/PokeIDCR_e_ISO15118_ResponseCodeChrt */
    /* During: PokeIDCR_e_ISO15118_ResponseCode/PokeIDCR_e_ISO15118_ResponseCodeChrt */
    /* Entry Internal: PokeIDCR_e_ISO15118_ResponseCode/PokeIDCR_e_ISO15118_ResponseCodeChrt */
    /* Transition: '<S753>:2' */
    if (!LeIDCR_b_ISO15118_ResponseCode_FA)
    {
        /* Transition: '<S753>:3' */
        /* Transition: '<S753>:15' */
        rtb_LeIDCR_b_ISO15118_ResponseCode_FA__j = false;

        /* Transition: '<S753>:18' */
    }
    else
    {
        /* Transition: '<S753>:4' */
        rtb_LeIDCR_b_ISO15118_ResponseCode_FA__j = true;
    }

    /* End of Chart: '<S303>/PokeIDCR_e_ISO15118_ResponseCodeChrt' */

    /* Outport: '<Root>/VeIDCR_b_ISO15118_ResponseCode_FA' incorporates:
     *  SignalConversion generated from: '<S303>/VeIDCR_b_ISO15118_ResponseCode_FA'
     */
    (void)Rte_Write_VeIDCR_b_ISO15118_ResponseCode_FA_Value
        (rtb_LeIDCR_b_ISO15118_ResponseCode_FA__j);

    /* Outport: '<Root>/VeIDCR_e_ISO15118_ResponseCode' incorporates:
     *  SignalConversion generated from: '<S303>/VeIDCR_e_ISO15118_ResponseCode'
     *  SignalConversion generated from: '<S303>/LeIDCR_I_ACSideCurr_L2'
     */
    (void)Rte_Write_VeIDCR_e_ISO15118_ResponseCode_Value
        (LeIDCR_e_ISO15118_ResponseCode);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_ISO15118_ResponseCode' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_ISO15118_TLS_Status(VAR(TeIDCR_e_TLS_Connection,
    AUTOMATIC) LeIDCR_e_ISO15118_TLS_Status, VAR(boolean, AUTOMATIC)
    LeIDCR_b_ISO15118_TLS_Status_FA)
{
    boolean rtb_LeIDCR_b_ISO15118_TLS_Status_FA_ou_f;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_ISO15118_TLS_Status' */
    /* Chart: '<S304>/PokeIDCR_e_ISO15118_TLS_StatusChrt' incorporates:
     *  SignalConversion generated from: '<S304>/LeIDCR_b_ACSideCurr_L2FA'
     */
    /* Gateway: PokeIDCR_e_ISO15118_TLS_Status/PokeIDCR_e_ISO15118_TLS_StatusChrt */
    /* During: PokeIDCR_e_ISO15118_TLS_Status/PokeIDCR_e_ISO15118_TLS_StatusChrt */
    /* Entry Internal: PokeIDCR_e_ISO15118_TLS_Status/PokeIDCR_e_ISO15118_TLS_StatusChrt */
    /* Transition: '<S754>:2' */
    if (!LeIDCR_b_ISO15118_TLS_Status_FA)
    {
        /* Transition: '<S754>:3' */
        /* Transition: '<S754>:15' */
        rtb_LeIDCR_b_ISO15118_TLS_Status_FA_ou_f = false;

        /* Transition: '<S754>:18' */
    }
    else
    {
        /* Transition: '<S754>:4' */
        rtb_LeIDCR_b_ISO15118_TLS_Status_FA_ou_f = true;
    }

    /* End of Chart: '<S304>/PokeIDCR_e_ISO15118_TLS_StatusChrt' */

    /* Outport: '<Root>/VeIDCR_b_ISO15118_TLS_Status_FA' incorporates:
     *  SignalConversion generated from: '<S304>/VeIDCR_b_ISO15118_TLS_Status_FA'
     */
    (void)Rte_Write_VeIDCR_b_ISO15118_TLS_Status_FA_Value
        (rtb_LeIDCR_b_ISO15118_TLS_Status_FA_ou_f);

    /* Outport: '<Root>/VeIDCR_e_ISO15118_TLS_Status' incorporates:
     *  SignalConversion generated from: '<S304>/VeIDCR_e_ISO15118_TLS_Status'
     *  SignalConversion generated from: '<S304>/LeIDCR_I_ACSideCurr_L2'
     */
    (void)Rte_Write_VeIDCR_e_ISO15118_TLS_Status_Value
        (LeIDCR_e_ISO15118_TLS_Status);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_ISO15118_TLS_Status' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_J1772Stat(VAR(sint16, AUTOMATIC)
    LeIDCR_e_J1772Stat, VAR(boolean, AUTOMATIC) LeIDCR_b_J1772StatFA)
{
    /* local block i/o variables */
    sint16 rtb_LeIDCR_e_J1772Stat_out;
    boolean rtb_LeIDCR_b_J1772StatFA_out_p;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_J1772Stat' */
    /* Chart: '<S305>/PokeIDCR_e_J1772StatChrt' incorporates:
     *  SignalConversion generated from: '<S305>/LeIDCR_b_J1772StatFA'
     *  SignalConversion generated from: '<S305>/LeIDCR_e_J1772Stat'
     */
    /* Gateway: PokeIDCR_e_J1772Stat/PokeIDCR_e_J1772StatChrt */
    /* During: PokeIDCR_e_J1772Stat/PokeIDCR_e_J1772StatChrt */
    /* Entry Internal: PokeIDCR_e_J1772Stat/PokeIDCR_e_J1772StatChrt */
    /* Transition: '<S755>:2' */
    if (!LeIDCR_b_J1772StatFA)
    {
        /* Transition: '<S755>:3' */
        /* Transition: '<S755>:15' */
        rtb_LeIDCR_e_J1772Stat_out = KaIDCR_e_J1772Stat_Map[(LeIDCR_e_J1772Stat)];
        rtb_LeIDCR_b_J1772StatFA_out_p = false;

        /* Transition: '<S755>:18' */
    }
    else
    {
        /* Transition: '<S755>:4' */
        rtb_LeIDCR_e_J1772Stat_out = KeIDCR_e_J1772Stat;
        rtb_LeIDCR_b_J1772StatFA_out_p = true;
    }

    /* End of Chart: '<S305>/PokeIDCR_e_J1772StatChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_J1772Stat' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_OBCM_CP1Sts(VAR(TeIDCR_e_OBCM_CP1Sts, AUTOMATIC)
    LeIDCR_e_OBCM_CP1Sts, VAR(boolean, AUTOMATIC) LeIDCR_b_OBCM_CP1Sts_FA)
{
    boolean rtb_LeIDCR_b_OBCM_CP1Sts_FA_out_l;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_OBCM_CP1Sts' */
    /* Chart: '<S306>/PokeIDCR_e_OBCM_CP1StsChrt' incorporates:
     *  SignalConversion generated from: '<S306>/LeIDCR_b_V2L_DischargeFaultRsnFA'
     *  SignalConversion generated from: '<S306>/LeIDCR_e_V2L_DischargeFaultRsn'
     */
    /* Gateway: PokeIDCR_e_OBCM_CP1Sts/PokeIDCR_e_OBCM_CP1StsChrt */
    /* During: PokeIDCR_e_OBCM_CP1Sts/PokeIDCR_e_OBCM_CP1StsChrt */
    /* Entry Internal: PokeIDCR_e_OBCM_CP1Sts/PokeIDCR_e_OBCM_CP1StsChrt */
    /* Transition: '<S756>:2' */
    if (!LeIDCR_b_OBCM_CP1Sts_FA)
    {
        /* Transition: '<S756>:3' */
        /* Transition: '<S756>:15' */
        IDCR_ac_B.LeIDCR_e_OBCM_CP1Sts_out = LeIDCR_e_OBCM_CP1Sts;
        rtb_LeIDCR_b_OBCM_CP1Sts_FA_out_l = false;

        /* Transition: '<S756>:18' */
    }
    else
    {
        /* Transition: '<S756>:4' */
        rtb_LeIDCR_b_OBCM_CP1Sts_FA_out_l = true;
    }

    /* End of Chart: '<S306>/PokeIDCR_e_OBCM_CP1StsChrt' */

    /* Outport: '<Root>/VeIDCR_b_OBCM_CP1Sts_FA' incorporates:
     *  SignalConversion generated from: '<S306>/VeIDCR_b_OBCM_CP1Sts_FA'
     */
    (void)Rte_Write_VeIDCR_b_OBCM_CP1Sts_FA_Value
        (rtb_LeIDCR_b_OBCM_CP1Sts_FA_out_l);

    /* Outport: '<Root>/VeIDCR_e_OBCM_CP1Sts' incorporates:
     *  SignalConversion generated from: '<S306>/VeIDCR_e_OBCM_CP1Sts'
     */
    (void)Rte_Write_VeIDCR_e_OBCM_CP1Sts_Value
        (IDCR_ac_B.LeIDCR_e_OBCM_CP1Sts_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_OBCM_CP1Sts' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_OBCM_CP2Sts(VAR(TeIDCR_e_OBCM_CP2Sts, AUTOMATIC)
    LeIDCR_e_OBCM_CP2Sts, VAR(boolean, AUTOMATIC) LeIDCR_b_OBCM_CP2Sts_FA)
{
    boolean rtb_LeIDCR_b_OBCM_CP2Sts_FA_out_h;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_OBCM_CP2Sts' */
    /* Chart: '<S307>/PokeIDCR_e_OBCM_CP2StsChrt' incorporates:
     *  SignalConversion generated from: '<S307>/LeIDCR_b_V2L_DischargeFaultRsnFA'
     *  SignalConversion generated from: '<S307>/LeIDCR_e_V2L_DischargeFaultRsn'
     */
    /* Gateway: PokeIDCR_e_OBCM_CP2Sts/PokeIDCR_e_OBCM_CP2StsChrt */
    /* During: PokeIDCR_e_OBCM_CP2Sts/PokeIDCR_e_OBCM_CP2StsChrt */
    /* Entry Internal: PokeIDCR_e_OBCM_CP2Sts/PokeIDCR_e_OBCM_CP2StsChrt */
    /* Transition: '<S757>:2' */
    if (!LeIDCR_b_OBCM_CP2Sts_FA)
    {
        /* Transition: '<S757>:3' */
        /* Transition: '<S757>:15' */
        IDCR_ac_B.LeIDCR_e_OBCM_CP2Sts_out = LeIDCR_e_OBCM_CP2Sts;
        rtb_LeIDCR_b_OBCM_CP2Sts_FA_out_h = false;

        /* Transition: '<S757>:18' */
    }
    else
    {
        /* Transition: '<S757>:4' */
        rtb_LeIDCR_b_OBCM_CP2Sts_FA_out_h = true;
    }

    /* End of Chart: '<S307>/PokeIDCR_e_OBCM_CP2StsChrt' */

    /* Outport: '<Root>/VeIDCR_b_OBCM_CP2Sts_FA' incorporates:
     *  SignalConversion generated from: '<S307>/VeIDCR_b_OBCM_CP2Sts_FA'
     */
    (void)Rte_Write_VeIDCR_b_OBCM_CP2Sts_FA_Value
        (rtb_LeIDCR_b_OBCM_CP2Sts_FA_out_h);

    /* Outport: '<Root>/VeIDCR_e_OBCM_CP2Sts' incorporates:
     *  SignalConversion generated from: '<S307>/VeIDCR_e_OBCM_CP2Sts'
     */
    (void)Rte_Write_VeIDCR_e_OBCM_CP2Sts_Value
        (IDCR_ac_B.LeIDCR_e_OBCM_CP2Sts_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_OBCM_CP2Sts' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_OBCM_CP3Sts(VAR(TeIDCR_e_OBCM_CP3Sts, AUTOMATIC)
    LeIDCR_e_OBCM_CP3Sts, VAR(boolean, AUTOMATIC) LeIDCR_b_OBCM_CP3Sts_FA)
{
    boolean rtb_LeIDCR_b_OBCM_CP3Sts_FA_out_f;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_OBCM_CP3Sts' */
    /* Chart: '<S308>/PokeIDCR_e_OBCM_CP3StsChrt' incorporates:
     *  SignalConversion generated from: '<S308>/LeIDCR_b_V2L_DischargeFaultRsnFA'
     *  SignalConversion generated from: '<S308>/LeIDCR_e_V2L_DischargeFaultRsn'
     */
    /* Gateway: PokeIDCR_e_OBCM_CP3Sts/PokeIDCR_e_OBCM_CP3StsChrt */
    /* During: PokeIDCR_e_OBCM_CP3Sts/PokeIDCR_e_OBCM_CP3StsChrt */
    /* Entry Internal: PokeIDCR_e_OBCM_CP3Sts/PokeIDCR_e_OBCM_CP3StsChrt */
    /* Transition: '<S758>:2' */
    if (!LeIDCR_b_OBCM_CP3Sts_FA)
    {
        /* Transition: '<S758>:3' */
        /* Transition: '<S758>:15' */
        IDCR_ac_B.LeIDCR_e_OBCM_CP3Sts_out = LeIDCR_e_OBCM_CP3Sts;
        rtb_LeIDCR_b_OBCM_CP3Sts_FA_out_f = false;

        /* Transition: '<S758>:18' */
    }
    else
    {
        /* Transition: '<S758>:4' */
        rtb_LeIDCR_b_OBCM_CP3Sts_FA_out_f = true;
    }

    /* End of Chart: '<S308>/PokeIDCR_e_OBCM_CP3StsChrt' */

    /* Outport: '<Root>/VeIDCR_b_OBCM_CP3Sts_FA' incorporates:
     *  SignalConversion generated from: '<S308>/VeIDCR_b_OBCM_CP3Sts_FA'
     */
    (void)Rte_Write_VeIDCR_b_OBCM_CP3Sts_FA_Value
        (rtb_LeIDCR_b_OBCM_CP3Sts_FA_out_f);

    /* Outport: '<Root>/VeIDCR_e_OBCM_CP3Sts' incorporates:
     *  SignalConversion generated from: '<S308>/VeIDCR_e_OBCM_CP3Sts'
     */
    (void)Rte_Write_VeIDCR_e_OBCM_CP3Sts_Value
        (IDCR_ac_B.LeIDCR_e_OBCM_CP3Sts_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_OBCM_CP3Sts' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_OBCM_CSSts(VAR(TeIDCR_e_OBCM_CSSts, AUTOMATIC)
    LeIDCR_e_OBCM_CSSts, VAR(boolean, AUTOMATIC) LeIDCR_b_OBCM_CSSts_FA)
{
    boolean rtb_LeIDCR_b_OBCM_CSSts_FA_out_o;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_OBCM_CSSts' */
    /* Chart: '<S309>/PokeIDCR_e_OBCM_CSStsChrt' incorporates:
     *  SignalConversion generated from: '<S309>/LeIDCR_b_V2L_DischargeFaultRsnFA'
     *  SignalConversion generated from: '<S309>/LeIDCR_e_V2L_DischargeFaultRsn'
     */
    /* Gateway: PokeIDCR_e_OBCM_CSSts/PokeIDCR_e_OBCM_CSStsChrt */
    /* During: PokeIDCR_e_OBCM_CSSts/PokeIDCR_e_OBCM_CSStsChrt */
    /* Entry Internal: PokeIDCR_e_OBCM_CSSts/PokeIDCR_e_OBCM_CSStsChrt */
    /* Transition: '<S759>:2' */
    if (!LeIDCR_b_OBCM_CSSts_FA)
    {
        /* Transition: '<S759>:3' */
        /* Transition: '<S759>:15' */
        IDCR_ac_B.LeIDCR_e_OBCM_CSSts_out = LeIDCR_e_OBCM_CSSts;
        rtb_LeIDCR_b_OBCM_CSSts_FA_out_o = false;

        /* Transition: '<S759>:18' */
    }
    else
    {
        /* Transition: '<S759>:4' */
        rtb_LeIDCR_b_OBCM_CSSts_FA_out_o = true;
    }

    /* End of Chart: '<S309>/PokeIDCR_e_OBCM_CSStsChrt' */

    /* Outport: '<Root>/VeIDCR_b_OBCM_CSSts_FA' incorporates:
     *  SignalConversion generated from: '<S309>/VeIDCR_b_OBCM_CSSts_FA'
     */
    (void)Rte_Write_VeIDCR_b_OBCM_CSSts_FA_Value
        (rtb_LeIDCR_b_OBCM_CSSts_FA_out_o);

    /* Outport: '<Root>/VeIDCR_e_OBCM_CSSts' incorporates:
     *  SignalConversion generated from: '<S309>/VeIDCR_e_OBCM_CSSts'
     */
    (void)Rte_Write_VeIDCR_e_OBCM_CSSts_Value(IDCR_ac_B.LeIDCR_e_OBCM_CSSts_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_OBCM_CSSts' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_OBCM_Charger_Ready(VAR
    (TeIDCR_e_OBCM_Charger_Ready, AUTOMATIC) LeIDCR_e_OBCM_Charger_Ready, VAR
    (boolean, AUTOMATIC) LeIDCR_b_OBCM_Charger_ReadyFA)
{
    /* local block i/o variables */
    boolean rtb_LeIDCR_b_OBCM_Charger_ReadyFA_out_l;
    TeIDCR_e_OBCM_Charger_Ready rtb_LeIDCR_e_OBCM_Charger_Ready_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_OBCM_Charger_Ready' */
    /* Chart: '<S310>/PokeIDCR_e_OBCM_Charger_ReadyChrt' incorporates:
     *  SignalConversion generated from: '<S310>/LeIDCR_b_OBCM_Charger_ReadyFA'
     *  SignalConversion generated from: '<S310>/LeIDCR_e_OBCM_Charger_Ready'
     */
    /* Gateway: PokeIDCR_e_OBCM_Charger_Ready/PokeIDCR_e_OBCM_Charger_ReadyChrt */
    /* During: PokeIDCR_e_OBCM_Charger_Ready/PokeIDCR_e_OBCM_Charger_ReadyChrt */
    /* Entry Internal: PokeIDCR_e_OBCM_Charger_Ready/PokeIDCR_e_OBCM_Charger_ReadyChrt */
    /* Transition: '<S760>:2' */
    if (!LeIDCR_b_OBCM_Charger_ReadyFA)
    {
        /* Transition: '<S760>:3' */
        /* Transition: '<S760>:15' */
        rtb_LeIDCR_e_OBCM_Charger_Ready_out = KaIDCR_e_OBCM_Charger_Ready_Map
            [(LeIDCR_e_OBCM_Charger_Ready)];
        rtb_LeIDCR_b_OBCM_Charger_ReadyFA_out_l = false;

        /* Transition: '<S760>:18' */
    }
    else
    {
        /* Transition: '<S760>:4' */
        rtb_LeIDCR_e_OBCM_Charger_Ready_out = KeIDCR_e_OBCM_Charger_Ready;
        rtb_LeIDCR_b_OBCM_Charger_ReadyFA_out_l = true;
    }

    /* End of Chart: '<S310>/PokeIDCR_e_OBCM_Charger_ReadyChrt' */

    /* Outport: '<Root>/VeIDCR_e_OBCM_Chrgr_Rdy' incorporates:
     *  SignalConversion generated from: '<S310>/VeIDCR_e_OBCM_Charger_Ready'
     */
    (void)Rte_Write_VeIDCR_e_OBCM_Chrgr_Rdy_Value
        (rtb_LeIDCR_e_OBCM_Charger_Ready_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_OBCM_Charger_Ready' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_OBCM_HVILSts(VAR(TeHVTR_e_HV_IntrlkStat,
    AUTOMATIC) LeIDCR_e_OBCM_HVILSts, VAR(boolean, AUTOMATIC)
    LeIDCR_b_OBCM_HVILStsFA)
{
    boolean rtb_LeIDCR_b_OBCM_HVILStsFA_out_p;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_OBCM_HVILSts' */
    /* Chart: '<S311>/PokeIDCR_e_OBCM_HVILStsChrt' incorporates:
     *  SignalConversion generated from: '<S311>/LeIDCR_b_OBCM_HVILStsFA'
     */
    /* Gateway: PokeIDCR_e_OBCM_HVILSts/PokeIDCR_e_OBCM_HVILStsChrt */
    /* During: PokeIDCR_e_OBCM_HVILSts/PokeIDCR_e_OBCM_HVILStsChrt */
    /* Entry Internal: PokeIDCR_e_OBCM_HVILSts/PokeIDCR_e_OBCM_HVILStsChrt */
    /* Transition: '<S761>:2' */
    if (!LeIDCR_b_OBCM_HVILStsFA)
    {
        /* SignalConversion generated from: '<S311>/VeIDCR_e_OBCM_HVILSts' incorporates:
         *  Outport: '<Root>/VeIDCR_e_OBCM_HVILSts'
         *  SignalConversion generated from: '<S311>/LeIDCR_e_OBCM_HVILSts'
         */
        /* Transition: '<S761>:3' */
        /* Transition: '<S761>:15' */
        (void)Rte_Write_VeIDCR_e_OBCM_HVILSts_Value(LeIDCR_e_OBCM_HVILSts);
        rtb_LeIDCR_b_OBCM_HVILStsFA_out_p = false;

        /* Transition: '<S761>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S311>/VeIDCR_e_OBCM_HVILSts' incorporates:
         *  Outport: '<Root>/VeIDCR_e_OBCM_HVILSts'
         *  SignalConversion generated from: '<S311>/LeIDCR_e_OBCM_HVILSts'
         */
        /* Transition: '<S761>:4' */
        (void)Rte_Write_VeIDCR_e_OBCM_HVILSts_Value(LeIDCR_e_OBCM_HVILSts);
        rtb_LeIDCR_b_OBCM_HVILStsFA_out_p = true;
    }

    /* End of Chart: '<S311>/PokeIDCR_e_OBCM_HVILStsChrt' */

    /* Outport: '<Root>/VeIDCR_b_OBCM_HVILStsFA' incorporates:
     *  SignalConversion generated from: '<S311>/VeIDCR_b_OBCM_HVILStsFA'
     */
    (void)Rte_Write_VeIDCR_b_OBCM_HVILStsFA_Value
        (rtb_LeIDCR_b_OBCM_HVILStsFA_out_p);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_OBCM_HVILSts' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_OffrdEnrgyTxType(VAR(TeIDCR_e_OffrdEnrgyTxType,
    AUTOMATIC) LeIDCR_e_OffrdEnrgyTxType)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_OffrdEnrgyTxType' */
    /* Outport: '<Root>/VeIDCR_b_OffrdEnrgyTxType_FA' incorporates:
     *  Chart: '<S312>/PokeIDCR_e_OffrdEnrgyTxTypeChrt'
     *  SignalConversion generated from: '<S312>/VeIDCR_b_OffrdEnrgyTxTypeFA'
     */
    /* Gateway: PokeIDCR_e_OffrdEnrgyTxType/PokeIDCR_e_OffrdEnrgyTxTypeChrt */
    /* During: PokeIDCR_e_OffrdEnrgyTxType/PokeIDCR_e_OffrdEnrgyTxTypeChrt */
    /* Entry Internal: PokeIDCR_e_OffrdEnrgyTxType/PokeIDCR_e_OffrdEnrgyTxTypeChrt */
    /* Transition: '<S762>:2' */
    (void)Rte_Write_VeIDCR_b_OffrdEnrgyTxType_FA_Value(false);

    /* Outport: '<Root>/VeIDCR_e_OffrdEnrgyTxType' incorporates:
     *  SignalConversion generated from: '<S312>/VeIDCR_e_OffrdEnrgyTxType'
     *  SignalConversion generated from: '<S312>/LeIDCR_e_OffrdEnrgyTxType'
     */
    (void)Rte_Write_VeIDCR_e_OffrdEnrgyTxType_Value(LeIDCR_e_OffrdEnrgyTxType);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_OffrdEnrgyTxType' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_OffrdPayOptn(VAR(TeIDCR_e_OffrdPayOptn,
    AUTOMATIC) LeIDCR_e_OffrdPayOptn)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_OffrdPayOptn' */
    /* Outport: '<Root>/VeIDCR_b_OffrdPayOptn_FA' incorporates:
     *  Chart: '<S313>/PokeIDCR_e_OffrdPayOptnChrt'
     *  SignalConversion generated from: '<S313>/VeIDCR_b_OffrdPayOptnFA'
     */
    /* Gateway: PokeIDCR_e_OffrdPayOptn/PokeIDCR_e_OffrdPayOptnChrt */
    /* During: PokeIDCR_e_OffrdPayOptn/PokeIDCR_e_OffrdPayOptnChrt */
    /* Entry Internal: PokeIDCR_e_OffrdPayOptn/PokeIDCR_e_OffrdPayOptnChrt */
    /* Transition: '<S763>:2' */
    (void)Rte_Write_VeIDCR_b_OffrdPayOptn_FA_Value(false);

    /* Outport: '<Root>/VeIDCR_e_OffrdPayOptn' incorporates:
     *  SignalConversion generated from: '<S313>/VeIDCR_e_OffrdPayOptn'
     *  SignalConversion generated from: '<S313>/LeIDCR_e_OffrdPayOptn'
     */
    (void)Rte_Write_VeIDCR_e_OffrdPayOptn_Value(LeIDCR_e_OffrdPayOptn);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_OffrdPayOptn' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_ProxStat(VAR(sint16, AUTOMATIC)
    LeIDCR_e_ProxStat, VAR(boolean, AUTOMATIC) LeIDCR_b_ProxStatFA)
{
    TeOBCR_e_ProxStat_OBCM rtb_LeIDCR_e_ProxStat_out;
    boolean rtb_LeIDCR_b_ProxStatFA_out_e;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_ProxStat' */
    /* Chart: '<S314>/PokeIDCR_e_ProxStatChrt' incorporates:
     *  SignalConversion generated from: '<S314>/LeIDCR_b_ProxStatFA'
     *  SignalConversion generated from: '<S314>/LeIDCR_e_ProxStat'
     */
    /* Gateway: PokeIDCR_e_ProxStat/PokeIDCR_e_ProxStatChrt */
    /* During: PokeIDCR_e_ProxStat/PokeIDCR_e_ProxStatChrt */
    /* Entry Internal: PokeIDCR_e_ProxStat/PokeIDCR_e_ProxStatChrt */
    /* Transition: '<S764>:2' */
    if (!LeIDCR_b_ProxStatFA)
    {
        /* Transition: '<S764>:3' */
        /* Transition: '<S764>:15' */
        rtb_LeIDCR_e_ProxStat_out = KaIDCR_e_ProxStat_Map[(LeIDCR_e_ProxStat)];
        rtb_LeIDCR_b_ProxStatFA_out_e = false;

        /* Transition: '<S764>:18' */
    }
    else
    {
        /* Transition: '<S764>:4' */
        rtb_LeIDCR_e_ProxStat_out = KeIDCR_e_ProxStat;
        rtb_LeIDCR_b_ProxStatFA_out_e = true;
    }

    /* End of Chart: '<S314>/PokeIDCR_e_ProxStatChrt' */

    /* Outport: '<Root>/VeIDCR_b_ProxStatFA' incorporates:
     *  SignalConversion generated from: '<S314>/VeIDCR_b_ProxStatFA'
     */
    (void)Rte_Write_VeIDCR_b_ProxStatFA_Value(rtb_LeIDCR_b_ProxStatFA_out_e);

    /* Outport: '<Root>/VeIDCR_e_ProxStat' incorporates:
     *  SignalConversion generated from: '<S314>/VeIDCR_e_ProxStat'
     */
    (void)Rte_Write_VeIDCR_e_ProxStat_Value(rtb_LeIDCR_e_ProxStat_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_ProxStat' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_Prox_GBT(VAR(TeIDCR_e_Prox_GBT, AUTOMATIC)
    LeIDCR_e_Prox_GBT)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_Prox_GBT' */
    /* Outport: '<Root>/VeIDCR_e_Prox_GBT' incorporates:
     *  SignalConversion generated from: '<S315>/VeIDCR_e_Prox_GBT'
     *  SignalConversion generated from: '<S315>/LeIDCR_e_Prox_GBT'
     */
    /* Gateway: PokeIDCR_e_Prox_GBT/PokeIDCR_e_Prox_GBTChrt */
    /* During: PokeIDCR_e_Prox_GBT/PokeIDCR_e_Prox_GBTChrt */
    /* Entry Internal: PokeIDCR_e_Prox_GBT/PokeIDCR_e_Prox_GBTChrt */
    /* Transition: '<S765>:2' */
    (void)Rte_Write_VeIDCR_e_Prox_GBT_Value(LeIDCR_e_Prox_GBT);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_Prox_GBT' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_Resp_Code(VAR(TeIDCR_e_RC, AUTOMATIC)
    LeIDCR_e_Resp_Code, VAR(boolean, AUTOMATIC) LeIDCR_b_Resp_CodeFA)
{
    boolean rtb_LeIDCR_b_Resp_CodeFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_Resp_Code' */
    /* Chart: '<S316>/PokeIDCR_e_Resp_CodeChrt' incorporates:
     *  SignalConversion generated from: '<S316>/LeIDCR_b_Resp_CodeFA'
     *  SignalConversion generated from: '<S316>/LeIDCR_e_Resp_Code'
     */
    /* Gateway: PokeIDCR_e_Resp_Code/PokeIDCR_e_Resp_CodeChrt */
    /* During: PokeIDCR_e_Resp_Code/PokeIDCR_e_Resp_CodeChrt */
    /* Entry Internal: PokeIDCR_e_Resp_Code/PokeIDCR_e_Resp_CodeChrt */
    /* Transition: '<S766>:2' */
    if (!LeIDCR_b_Resp_CodeFA)
    {
        /* Transition: '<S766>:3' */
        /* Transition: '<S766>:15' */
        IDCR_ac_B.LeIDCR_e_Resp_Code_out = LeIDCR_e_Resp_Code;
        rtb_LeIDCR_b_Resp_CodeFA_out = false;

        /* Transition: '<S766>:18' */
    }
    else
    {
        /* Transition: '<S766>:4' */
        rtb_LeIDCR_b_Resp_CodeFA_out = true;
    }

    /* End of Chart: '<S316>/PokeIDCR_e_Resp_CodeChrt' */

    /* Outport: '<Root>/VeIDCR_b_Response_Code_FA' incorporates:
     *  SignalConversion generated from: '<S316>/VeIDCR_b_Resp_CodeFA'
     */
    (void)Rte_Write_VeIDCR_b_Response_Code_FA_Value(rtb_LeIDCR_b_Resp_CodeFA_out);

    /* Outport: '<Root>/VeIDCR_e_Response_Code' incorporates:
     *  SignalConversion generated from: '<S316>/VeIDCR_e_Resp_Code'
     */
    (void)Rte_Write_VeIDCR_e_Response_Code_Value
        (IDCR_ac_B.LeIDCR_e_Resp_Code_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_Resp_Code' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_SDP_Sts(VAR(TeIDCR_e_SDP_Sts, AUTOMATIC)
    LeIDCR_e_SDP_Sts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_SDP_Sts' */
    /* Outport: '<Root>/VeIDCR_e_SDP_Sts' incorporates:
     *  Chart: '<S317>/PokeIDCR_e_SDP_StsChrt'
     *  Constant: '<S767>/Calib'
     *  SignalConversion generated from: '<S317>/VeIDCR_e_SDP_Sts'
     *  SignalConversion generated from: '<S317>/LeIDCR_e_SDP_Sts'
     */
    /* Gateway: PokeIDCR_e_SDP_Sts/PokeIDCR_e_SDP_StsChrt */
    /* During: PokeIDCR_e_SDP_Sts/PokeIDCR_e_SDP_StsChrt */
    /* Entry Internal: PokeIDCR_e_SDP_Sts/PokeIDCR_e_SDP_StsChrt */
    /* Transition: '<S768>:2' */
    (void)Rte_Write_VeIDCR_e_SDP_Sts_Value(KaIDCR_e_SDPSts_Map[(LeIDCR_e_SDP_Sts)]);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_SDP_Sts' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_SLAC_Sts(VAR(sint16, AUTOMATIC)
    LeIDCR_e_SLAC_Sts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_SLAC_Sts' */
    /* Outport: '<Root>/VeIDCR_e_SLACSts' incorporates:
     *  Chart: '<S318>/PokeIDCR_e_SLAC_StsChrt'
     *  Constant: '<S769>/Calib'
     *  SignalConversion generated from: '<S318>/VeIDCR_e_SLAC_Sts'
     *  SignalConversion generated from: '<S318>/LeIDCR_e_SLAC_Sts'
     */
    /* Gateway: PokeIDCR_e_SLAC_Sts/PokeIDCR_e_SLAC_StsChrt */
    /* During: PokeIDCR_e_SLAC_Sts/PokeIDCR_e_SLAC_StsChrt */
    /* Entry Internal: PokeIDCR_e_SLAC_Sts/PokeIDCR_e_SLAC_StsChrt */
    /* Transition: '<S770>:2' */
    (void)Rte_Write_VeIDCR_e_SLACSts_Value(KaIDCR_e_SLACSts_Map
        [(LeIDCR_e_SLAC_Sts)]);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_SLAC_Sts' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_SupProtoNm(VAR(sint16, AUTOMATIC)
    LeIDCR_e_SupProtoNm)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_SupProtoNm' */
    /* Outport: '<Root>/VeIDCR_e_SupProtoNm' incorporates:
     *  SignalConversion generated from: '<S319>/VeIDCR_e_SupProtoNm'
     *  SignalConversion generated from: '<S319>/LeIDCR_e_SupProtoNm'
     */
    /* Gateway: PokeIDCR_e_SupProtoNm/PokeIDCR_e_SupProtoNmChrt */
    /* During: PokeIDCR_e_SupProtoNm/PokeIDCR_e_SupProtoNmChrt */
    /* Entry Internal: PokeIDCR_e_SupProtoNm/PokeIDCR_e_SupProtoNmChrt */
    /* Transition: '<S771>:2' */
    (void)Rte_Write_VeIDCR_e_SupProtoNm_Value(LeIDCR_e_SupProtoNm);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_SupProtoNm' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_SupSchemaID(VAR(sint16, AUTOMATIC)
    LeIDCR_e_SupSchemaID)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_SupSchemaID' */
    /* Outport: '<Root>/VeIDCR_e_SupSchemaID' incorporates:
     *  SignalConversion generated from: '<S320>/VeIDCR_e_SupSchemaID'
     *  SignalConversion generated from: '<S320>/LeIDCR_e_SupSchemaID'
     */
    /* Gateway: PokeIDCR_e_SupSchemaID/PokeIDCR_e_SupSchemaIDChrt */
    /* During: PokeIDCR_e_SupSchemaID/PokeIDCR_e_SupSchemaIDChrt */
    /* Entry Internal: PokeIDCR_e_SupSchemaID/PokeIDCR_e_SupSchemaIDChrt */
    /* Transition: '<S772>:2' */
    (void)Rte_Write_VeIDCR_e_SupSchemaID_Value(LeIDCR_e_SupSchemaID);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_SupSchemaID' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_SupVerNumMajor(VAR(sint16, AUTOMATIC)
    LeIDCR_e_SupVerNumMajor)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_SupVerNumMajor' */
    /* Outport: '<Root>/VeIDCR_e_SupVerNumMajor' incorporates:
     *  SignalConversion generated from: '<S321>/VeIDCR_e_SupVerNumMajor'
     *  SignalConversion generated from: '<S321>/LeIDCR_e_SupVerNumMajor'
     */
    /* Gateway: PokeIDCR_e_SupVerNumMajor/PokeIDCR_e_SupVerNumMajorChrt */
    /* During: PokeIDCR_e_SupVerNumMajor/PokeIDCR_e_SupVerNumMajorChrt */
    /* Entry Internal: PokeIDCR_e_SupVerNumMajor/PokeIDCR_e_SupVerNumMajorChrt */
    /* Transition: '<S773>:2' */
    (void)Rte_Write_VeIDCR_e_SupVerNumMajor_Value(LeIDCR_e_SupVerNumMajor);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_SupVerNumMajor' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_SupVerNumMinor(VAR(sint16, AUTOMATIC)
    LeIDCR_e_SupVerNumMinor)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_SupVerNumMinor' */
    /* Outport: '<Root>/VeIDCR_e_SupVerNumMinor' incorporates:
     *  SignalConversion generated from: '<S322>/VeIDCR_e_SupVerNumMinor'
     *  SignalConversion generated from: '<S322>/LeIDCR_e_SupVerNumMinor'
     */
    /* Gateway: PokeIDCR_e_SupVerNumMinor/PokeIDCR_e_SupVerNumMinorChrt */
    /* During: PokeIDCR_e_SupVerNumMinor/PokeIDCR_e_SupVerNumMinorChrt */
    /* Entry Internal: PokeIDCR_e_SupVerNumMinor/PokeIDCR_e_SupVerNumMinorChrt */
    /* Transition: '<S774>:2' */
    (void)Rte_Write_VeIDCR_e_SupVerNumMinor_Value(LeIDCR_e_SupVerNumMinor);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_SupVerNumMinor' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_TxGBTMsgRequest(VAR
    (TeIDCR_e_TxGBTMessageRequest, AUTOMATIC) LeIDCR_e_TxGBTMsgRequest, VAR
    (boolean, AUTOMATIC) LeIDCR_b_TxGBTMsgRequestFA)
{
    boolean rtb_LeIDCR_b_TxGBTMsgRequestFA_out_c;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_TxGBTMsgRequest' */
    /* Chart: '<S323>/PokeIDCR_e_TxGBTMsgRequestChrt' incorporates:
     *  SignalConversion generated from: '<S323>/LeIDCR_b_TxGBTMsgRequestFA'
     *  SignalConversion generated from: '<S323>/LeIDCR_e_TxGBTMsgRequest'
     */
    /* Gateway: PokeIDCR_e_TxGBTMsgRequest/PokeIDCR_e_TxGBTMsgRequestChrt */
    /* During: PokeIDCR_e_TxGBTMsgRequest/PokeIDCR_e_TxGBTMsgRequestChrt */
    /* Entry Internal: PokeIDCR_e_TxGBTMsgRequest/PokeIDCR_e_TxGBTMsgRequestChrt */
    /* Transition: '<S775>:2' */
    if (!LeIDCR_b_TxGBTMsgRequestFA)
    {
        /* Transition: '<S775>:3' */
        /* Transition: '<S775>:15' */
        IDCR_ac_B.LeIDCR_e_TxGBTMsgRequest_out = LeIDCR_e_TxGBTMsgRequest;
        rtb_LeIDCR_b_TxGBTMsgRequestFA_out_c = false;

        /* Transition: '<S775>:18' */
    }
    else
    {
        /* Transition: '<S775>:4' */
        rtb_LeIDCR_b_TxGBTMsgRequestFA_out_c = true;
    }

    /* End of Chart: '<S323>/PokeIDCR_e_TxGBTMsgRequestChrt' */

    /* Outport: '<Root>/VeIDCR_b_TxGBTMsgRequestFA' incorporates:
     *  SignalConversion generated from: '<S323>/VeIDCR_b_TxGBTMsgRequestFA'
     */
    (void)Rte_Write_VeIDCR_b_TxGBTMsgRequestFA_Value
        (rtb_LeIDCR_b_TxGBTMsgRequestFA_out_c);

    /* Outport: '<Root>/VeIDCR_e_TxGBTMsgRequest' incorporates:
     *  SignalConversion generated from: '<S323>/VeIDCR_e_TxGBTMsgRequest'
     */
    (void)Rte_Write_VeIDCR_e_TxGBTMsgRequest_Value
        (IDCR_ac_B.LeIDCR_e_TxGBTMsgRequest_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_TxGBTMsgRequest' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_TxGBTMsgResponse(VAR
    (TeIDCR_e_TxGBTMessageResponse, AUTOMATIC) LeIDCR_e_TxGBTMsgResponse, VAR
    (boolean, AUTOMATIC) LeIDCR_b_TxGBTMsgResponseFA)
{
    boolean rtb_LeIDCR_b_TxGBTMsgResponseFA_out_a;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_TxGBTMsgResponse' */
    /* Chart: '<S324>/PokeIDCR_e_TxGBTMsgResponseChrt' incorporates:
     *  SignalConversion generated from: '<S324>/LeIDCR_b_TxGBTMsgResponseFA'
     *  SignalConversion generated from: '<S324>/LeIDCR_e_TxGBTMsgResponse'
     */
    /* Gateway: PokeIDCR_e_TxGBTMsgResponse/PokeIDCR_e_TxGBTMsgResponseChrt */
    /* During: PokeIDCR_e_TxGBTMsgResponse/PokeIDCR_e_TxGBTMsgResponseChrt */
    /* Entry Internal: PokeIDCR_e_TxGBTMsgResponse/PokeIDCR_e_TxGBTMsgResponseChrt */
    /* Transition: '<S776>:2' */
    if (!LeIDCR_b_TxGBTMsgResponseFA)
    {
        /* Transition: '<S776>:3' */
        /* Transition: '<S776>:15' */
        IDCR_ac_B.LeIDCR_e_TxGBTMsgResponse_out = LeIDCR_e_TxGBTMsgResponse;
        rtb_LeIDCR_b_TxGBTMsgResponseFA_out_a = false;

        /* Transition: '<S776>:18' */
    }
    else
    {
        /* Transition: '<S776>:4' */
        rtb_LeIDCR_b_TxGBTMsgResponseFA_out_a = true;
    }

    /* End of Chart: '<S324>/PokeIDCR_e_TxGBTMsgResponseChrt' */

    /* Outport: '<Root>/VeIDCR_b_TxGBTMsgResponseFA' incorporates:
     *  SignalConversion generated from: '<S324>/VeIDCR_b_TxGBTMsgResponseFA'
     */
    (void)Rte_Write_VeIDCR_b_TxGBTMsgResponseFA_Value
        (rtb_LeIDCR_b_TxGBTMsgResponseFA_out_a);

    /* Outport: '<Root>/VeIDCR_e_TxGBTMsgResponse' incorporates:
     *  SignalConversion generated from: '<S324>/VeIDCR_e_TxGBTMsgResponse'
     */
    (void)Rte_Write_VeIDCR_e_TxGBTMsgResponse_Value
        (IDCR_ac_B.LeIDCR_e_TxGBTMsgResponse_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_TxGBTMsgResponse' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_TxMessageRequest(VAR(sint16, AUTOMATIC)
    LeIDCR_e_TxMessageRequest, VAR(boolean, AUTOMATIC)
    LeIDCR_b_TxMessageRequestFA)
{
    boolean rtb_LeIDCR_b_TxMessageRequestFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_TxMessageRequest' */
    /* Chart: '<S325>/PokeIDCR_e_TxMessageRequestChrt' incorporates:
     *  Constant: '<S777>/Calib'
     *  SignalConversion generated from: '<S325>/LeIDCR_b_TxMessageRequestFA'
     *  SignalConversion generated from: '<S325>/LeIDCR_e_TxMessageRequest'
     */
    /* Gateway: PokeIDCR_e_TxMessageRequest/PokeIDCR_e_TxMessageRequestChrt */
    /* During: PokeIDCR_e_TxMessageRequest/PokeIDCR_e_TxMessageRequestChrt */
    /* Entry Internal: PokeIDCR_e_TxMessageRequest/PokeIDCR_e_TxMessageRequestChrt */
    /* Transition: '<S778>:2' */
    if (!LeIDCR_b_TxMessageRequestFA)
    {
        /* Transition: '<S778>:3' */
        /* Transition: '<S778>:15' */
        IDCR_ac_B.LeIDCR_e_TxMessageRequest_out = (TeIDCR_e_TxMsgSt)
            IDCR_ac_safe_cast_to_TeIDCR_e_TxMsgSt((uint8)KaIDCR_e_TxMessRq_Map
            [(LeIDCR_e_TxMessageRequest)]);
        rtb_LeIDCR_b_TxMessageRequestFA_out = false;

        /* Transition: '<S778>:18' */
    }
    else
    {
        /* Transition: '<S778>:4' */
        rtb_LeIDCR_b_TxMessageRequestFA_out = true;
    }

    /* End of Chart: '<S325>/PokeIDCR_e_TxMessageRequestChrt' */

    /* Outport: '<Root>/VeIDCR_b_TxMsgRequest_FA' incorporates:
     *  SignalConversion generated from: '<S325>/VeIDCR_b_TxMessageRequestFA'
     */
    (void)Rte_Write_VeIDCR_b_TxMsgRequest_FA_Value
        (rtb_LeIDCR_b_TxMessageRequestFA_out);

    /* Outport: '<Root>/VeIDCR_e_TxMsgRequest' incorporates:
     *  SignalConversion generated from: '<S325>/VeIDCR_e_TxMessageRequest'
     */
    (void)Rte_Write_VeIDCR_e_TxMsgRequest_Value
        (IDCR_ac_B.LeIDCR_e_TxMessageRequest_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_TxMessageRequest' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_TxMessageResponse(VAR(TeIDCR_e_TxMsgSt,
    AUTOMATIC) LeIDCR_e_TxMessageResponse, VAR(boolean, AUTOMATIC)
    LeIDCR_b_TxMessageResponseFA)
{
    boolean rtb_LeIDCR_b_TxMessageResponseFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_TxMessageResponse' */
    /* Chart: '<S326>/PokeIDCR_e_TxMessageResponseChrt' incorporates:
     *  SignalConversion generated from: '<S326>/LeIDCR_b_TxMessageResponseFA'
     *  SignalConversion generated from: '<S326>/LeIDCR_e_TxMessageResponse'
     */
    /* Gateway: PokeIDCR_e_TxMessageResponse/PokeIDCR_e_TxMessageResponseChrt */
    /* During: PokeIDCR_e_TxMessageResponse/PokeIDCR_e_TxMessageResponseChrt */
    /* Entry Internal: PokeIDCR_e_TxMessageResponse/PokeIDCR_e_TxMessageResponseChrt */
    /* Transition: '<S779>:2' */
    if (!LeIDCR_b_TxMessageResponseFA)
    {
        /* Transition: '<S779>:3' */
        /* Transition: '<S779>:15' */
        IDCR_ac_B.LeIDCR_e_TxMessageResponse_out = LeIDCR_e_TxMessageResponse;
        rtb_LeIDCR_b_TxMessageResponseFA_out = false;

        /* Transition: '<S779>:18' */
    }
    else
    {
        /* Transition: '<S779>:4' */
        rtb_LeIDCR_b_TxMessageResponseFA_out = true;
    }

    /* End of Chart: '<S326>/PokeIDCR_e_TxMessageResponseChrt' */

    /* Outport: '<Root>/VeIDCR_b_TxMsgResponse_FA' incorporates:
     *  SignalConversion generated from: '<S326>/VeIDCR_b_TxMessageResponseFA'
     */
    (void)Rte_Write_VeIDCR_b_TxMsgResponse_FA_Value
        (rtb_LeIDCR_b_TxMessageResponseFA_out);

    /* Outport: '<Root>/VeIDCR_e_TxMsgResponse' incorporates:
     *  SignalConversion generated from: '<S326>/VeIDCR_e_TxMessageResponse'
     */
    (void)Rte_Write_VeIDCR_e_TxMsgResponse_Value
        (IDCR_ac_B.LeIDCR_e_TxMessageResponse_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_TxMessageResponse' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_V2L_DischargeDeratingRsn(VAR
    (TeIDCR_e_V2L_DischargeDeratingRsn, AUTOMATIC)
    LeIDCR_e_V2L_DischargeDeratingRsn)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_V2L_DischargeDeratingRsn' */
    /* Outport: '<Root>/VeIDCR_b_V2L_DischargeDeratingRsnFA' incorporates:
     *  Chart: '<S327>/PokeIDCR_e_V2L_DischargeDeratingRsnChrt'
     *  SignalConversion generated from: '<S327>/VeIDCR_b_V2L_DischargeDeratingRsnFA'
     */
    /* Gateway: PokeIDCR_e_V2L_DischargeDeratingRsn/PokeIDCR_e_V2L_DischargeDeratingRsnChrt */
    /* During: PokeIDCR_e_V2L_DischargeDeratingRsn/PokeIDCR_e_V2L_DischargeDeratingRsnChrt */
    /* Entry Internal: PokeIDCR_e_V2L_DischargeDeratingRsn/PokeIDCR_e_V2L_DischargeDeratingRsnChrt */
    /* Transition: '<S780>:2' */
    (void)Rte_Write_VeIDCR_b_V2L_DischargeDeratingRsnFA_Value(false);

    /* Outport: '<Root>/VeIDCR_e_V2L_DischargeDeratingRsn' incorporates:
     *  SignalConversion generated from: '<S327>/VeIDCR_e_V2L_DischargeDeratingRsn'
     *  SignalConversion generated from: '<S327>/LeIDCR_e_V2L_DischargeDeratingRsn'
     */
    (void)Rte_Write_VeIDCR_e_V2L_DischargeDeratingRsn_Value
        (LeIDCR_e_V2L_DischargeDeratingRsn);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_V2L_DischargeDeratingRsn' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_V2L_DischargeFailSts(VAR
    (TeVTLR_e_DisChrgFailSts, AUTOMATIC) LeIDCR_e_V2L_DischargeFailSts, VAR
    (boolean, AUTOMATIC) LeIDCR_b_V2L_DischargeFailStsFA)
{
    boolean rtb_LeIDCR_b_V2L_DischargeFailStsFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_V2L_DischargeFailSts' */
    /* Chart: '<S328>/PokeIDCR_e_V2L_DischargeFailStsChrt' incorporates:
     *  SignalConversion generated from: '<S328>/LeIDCR_b_V2L_DischargeFailStsFA'
     *  SignalConversion generated from: '<S328>/LeIDCR_e_V2L_DischargeFailSts'
     */
    /* Gateway: PokeIDCR_e_V2L_DischargeFailSts/PokeIDCR_e_V2L_DischargeFailStsChrt */
    /* During: PokeIDCR_e_V2L_DischargeFailSts/PokeIDCR_e_V2L_DischargeFailStsChrt */
    /* Entry Internal: PokeIDCR_e_V2L_DischargeFailSts/PokeIDCR_e_V2L_DischargeFailStsChrt */
    /* Transition: '<S781>:2' */
    if (!LeIDCR_b_V2L_DischargeFailStsFA)
    {
        /* Transition: '<S781>:3' */
        /* Transition: '<S781>:15' */
        IDCR_ac_B.LeIDCR_e_V2L_DischargeFailSts_out =
            LeIDCR_e_V2L_DischargeFailSts;
        rtb_LeIDCR_b_V2L_DischargeFailStsFA_out = false;

        /* Transition: '<S781>:18' */
    }
    else
    {
        /* Transition: '<S781>:4' */
        rtb_LeIDCR_b_V2L_DischargeFailStsFA_out = true;
    }

    /* End of Chart: '<S328>/PokeIDCR_e_V2L_DischargeFailStsChrt' */

    /* Outport: '<Root>/VeIDCR_b_V2L_DischargeFailStsFA' incorporates:
     *  SignalConversion generated from: '<S328>/VeIDCR_b_V2L_DischargeFailStsFA'
     */
    (void)Rte_Write_VeIDCR_b_V2L_DischargeFailStsFA_Value
        (rtb_LeIDCR_b_V2L_DischargeFailStsFA_out);

    /* Outport: '<Root>/VeIDCR_e_V2L_DischargeFailSts' incorporates:
     *  SignalConversion generated from: '<S328>/VeIDCR_e_V2L_DischargeFailSts'
     */
    (void)Rte_Write_VeIDCR_e_V2L_DischargeFailSts_Value
        (IDCR_ac_B.LeIDCR_e_V2L_DischargeFailSts_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_V2L_DischargeFailSts' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_V2L_DischargeFaultRsn(VAR
    (TeIDCR_e_V2L_DischargeFaultRsn, AUTOMATIC) LeIDCR_e_V2L_DischargeFaultRsn,
    VAR(boolean, AUTOMATIC) LeIDCR_b_V2L_DischargeFaultRsnFA)
{
    boolean rtb_LeIDCR_b_V2L_DischargeFaultRsnFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_V2L_DischargeFaultRsn' */
    /* Chart: '<S329>/PokeIDCR_e_V2L_DischargeFaultRsnChrt' incorporates:
     *  SignalConversion generated from: '<S329>/LeIDCR_b_V2L_DischargeFaultRsnFA'
     *  SignalConversion generated from: '<S329>/LeIDCR_e_V2L_DischargeFaultRsn'
     */
    /* Gateway: PokeIDCR_e_V2L_DischargeFaultRsn/PokeIDCR_e_V2L_DischargeFaultRsnChrt */
    /* During: PokeIDCR_e_V2L_DischargeFaultRsn/PokeIDCR_e_V2L_DischargeFaultRsnChrt */
    /* Entry Internal: PokeIDCR_e_V2L_DischargeFaultRsn/PokeIDCR_e_V2L_DischargeFaultRsnChrt */
    /* Transition: '<S782>:2' */
    if (!LeIDCR_b_V2L_DischargeFaultRsnFA)
    {
        /* Transition: '<S782>:3' */
        /* Transition: '<S782>:15' */
        IDCR_ac_B.LeIDCR_e_V2L_DischargeFaultRsn_out =
            LeIDCR_e_V2L_DischargeFaultRsn;
        rtb_LeIDCR_b_V2L_DischargeFaultRsnFA_out = false;

        /* Transition: '<S782>:18' */
    }
    else
    {
        /* Transition: '<S782>:4' */
        rtb_LeIDCR_b_V2L_DischargeFaultRsnFA_out = true;
    }

    /* End of Chart: '<S329>/PokeIDCR_e_V2L_DischargeFaultRsnChrt' */

    /* Outport: '<Root>/VeIDCR_b_V2L_DischargeFaultRsnFA' incorporates:
     *  SignalConversion generated from: '<S329>/VeIDCR_b_V2L_DischargeFaultRsnFA'
     */
    (void)Rte_Write_VeIDCR_b_V2L_DischargeFaultRsnFA_Value
        (rtb_LeIDCR_b_V2L_DischargeFaultRsnFA_out);

    /* Outport: '<Root>/VeIDCR_e_V2L_DischargeFaultRsn' incorporates:
     *  SignalConversion generated from: '<S329>/VeIDCR_e_V2L_DischargeFaultRsn'
     */
    (void)Rte_Write_VeIDCR_e_V2L_DischargeFaultRsn_Value
        (IDCR_ac_B.LeIDCR_e_V2L_DischargeFaultRsn_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_V2L_DischargeFaultRsn' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_V2XDerateRsn(VAR
    (TeIDCR_e_V2L_DischargeDeratingRsn, AUTOMATIC) LeIDCR_e_V2XDerateRsn, VAR
    (boolean, AUTOMATIC) LeIDCR_b_V2XDerateRsnFA)
{
    boolean rtb_LeIDCR_b_V2XDerateRsnFA_out_p;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_V2XDerateRsn' */
    /* Chart: '<S330>/PokeIDCR_e_V2XDerateRsnChrt' incorporates:
     *  SignalConversion generated from: '<S330>/LeIDCR_f_ACOutFreq1'
     *  SignalConversion generated from: '<S330>/LeIDCR_f_ACOutFreq'
     */
    /* Gateway: PokeIDCR_e_V2XDerateRsn/PokeIDCR_e_V2XDerateRsnChrt */
    /* During: PokeIDCR_e_V2XDerateRsn/PokeIDCR_e_V2XDerateRsnChrt */
    /* Entry Internal: PokeIDCR_e_V2XDerateRsn/PokeIDCR_e_V2XDerateRsnChrt */
    /* Transition: '<S783>:22' */
    if (!LeIDCR_b_V2XDerateRsnFA)
    {
        /* Transition: '<S783>:23' */
        /* Transition: '<S783>:27' */
        IDCR_ac_B.LeIDCR_e_V2XDerateRsn_out = LeIDCR_e_V2XDerateRsn;
        rtb_LeIDCR_b_V2XDerateRsnFA_out_p = false;

        /* Transition: '<S783>:21' */
    }
    else
    {
        /* Transition: '<S783>:24' */
        rtb_LeIDCR_b_V2XDerateRsnFA_out_p = true;
    }

    /* End of Chart: '<S330>/PokeIDCR_e_V2XDerateRsnChrt' */

    /* Outport: '<Root>/VeIDCR_b_V2X_DerateRsn_FA' incorporates:
     *  SignalConversion generated from: '<S330>/VeIDCR_b_V2XDerateRsnFA'
     */
    (void)Rte_Write_VeIDCR_b_V2X_DerateRsn_FA_Value
        (rtb_LeIDCR_b_V2XDerateRsnFA_out_p);

    /* Outport: '<Root>/VeIDCR_e_V2X_DerateRsn' incorporates:
     *  SignalConversion generated from: '<S330>/VeIDCR_e_V2XDerateRsn'
     */
    (void)Rte_Write_VeIDCR_e_V2X_DerateRsn_Value
        (IDCR_ac_B.LeIDCR_e_V2XDerateRsn_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_V2XDerateRsn' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_V2XFaultRsn(VAR(TeIDCR_e_V2X_FaultRsn,
    AUTOMATIC) LeIDCR_e_V2XFaultRsn, VAR(boolean, AUTOMATIC)
    LeIDCR_b_V2XFaultRsnFA)
{
    boolean rtb_LeIDCR_b_V2XFaultRsnFA_out_k;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_V2XFaultRsn' */
    /* Chart: '<S331>/PokeIDCR_e_V2XFaultRsnChrt' incorporates:
     *  SignalConversion generated from: '<S331>/LeIDCR_b_V2XFaultRsnFA'
     *  SignalConversion generated from: '<S331>/LeIDCR_e_V2XFaultRsn'
     */
    /* Gateway: PokeIDCR_e_V2XFaultRsn/PokeIDCR_e_V2XFaultRsnChrt */
    /* During: PokeIDCR_e_V2XFaultRsn/PokeIDCR_e_V2XFaultRsnChrt */
    /* Entry Internal: PokeIDCR_e_V2XFaultRsn/PokeIDCR_e_V2XFaultRsnChrt */
    /* Transition: '<S784>:22' */
    if (!LeIDCR_b_V2XFaultRsnFA)
    {
        /* Transition: '<S784>:23' */
        /* Transition: '<S784>:27' */
        IDCR_ac_B.LeIDCR_e_V2XFaultRsn_out = LeIDCR_e_V2XFaultRsn;
        rtb_LeIDCR_b_V2XFaultRsnFA_out_k = false;

        /* Transition: '<S784>:21' */
    }
    else
    {
        /* Transition: '<S784>:24' */
        rtb_LeIDCR_b_V2XFaultRsnFA_out_k = true;
    }

    /* End of Chart: '<S331>/PokeIDCR_e_V2XFaultRsnChrt' */

    /* Outport: '<Root>/VeIDCR_b_V2X_FaultRsn_FA' incorporates:
     *  SignalConversion generated from: '<S331>/VeIDCR_b_V2XFaultRsnFA'
     */
    (void)Rte_Write_VeIDCR_b_V2X_FaultRsn_FA_Value
        (rtb_LeIDCR_b_V2XFaultRsnFA_out_k);

    /* Outport: '<Root>/VeIDCR_e_V2X_FaultRsn' incorporates:
     *  SignalConversion generated from: '<S331>/VeIDCR_e_V2XFaultRsn'
     */
    (void)Rte_Write_VeIDCR_e_V2X_FaultRsn_Value
        (IDCR_ac_B.LeIDCR_e_V2XFaultRsn_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_V2XFaultRsn' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_V2XInterlockSts(VAR(TeHVTR_e_HV_IntrlkStat,
    AUTOMATIC) LeIDCR_e_V2XInterlockSts, VAR(boolean, AUTOMATIC)
    LeIDCR_b_V2XInterlockStsFA)
{
    boolean rtb_LeIDCR_b_V2XInterlockStsFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_V2XInterlockSts' */
    /* Chart: '<S332>/PokeIDCR_e_V2XInterlockStsChrt' incorporates:
     *  SignalConversion generated from: '<S332>/LeIDCR_b_V2XFaultRsnFA'
     *  SignalConversion generated from: '<S332>/LeIDCR_e_V2XFaultRsn'
     */
    /* Gateway: PokeIDCR_e_V2XInterlockSts/PokeIDCR_e_V2XInterlockStsChrt */
    /* During: PokeIDCR_e_V2XInterlockSts/PokeIDCR_e_V2XInterlockStsChrt */
    /* Entry Internal: PokeIDCR_e_V2XInterlockSts/PokeIDCR_e_V2XInterlockStsChrt */
    /* Transition: '<S785>:22' */
    if (!LeIDCR_b_V2XInterlockStsFA)
    {
        /* Transition: '<S785>:23' */
        /* Transition: '<S785>:27' */
        IDCR_ac_B.LeIDCR_e_V2XInterlockSts_out = LeIDCR_e_V2XInterlockSts;
        rtb_LeIDCR_b_V2XInterlockStsFA_out = false;

        /* Transition: '<S785>:21' */
    }
    else
    {
        /* Transition: '<S785>:24' */
        rtb_LeIDCR_b_V2XInterlockStsFA_out = true;
    }

    /* End of Chart: '<S332>/PokeIDCR_e_V2XInterlockStsChrt' */

    /* Outport: '<Root>/VeIDCR_b_V2X_InterlockSts_FA' incorporates:
     *  SignalConversion generated from: '<S332>/VeIDCR_b_V2XInterlockStsFA'
     */
    (void)Rte_Write_VeIDCR_b_V2X_InterlockSts_FA_Value
        (rtb_LeIDCR_b_V2XInterlockStsFA_out);

    /* Outport: '<Root>/VeIDCR_e_V2X_InterlockSts' incorporates:
     *  SignalConversion generated from: '<S332>/VeIDCR_e_V2XInterlockSts'
     */
    (void)Rte_Write_VeIDCR_e_V2X_InterlockSts_Value
        (IDCR_ac_B.LeIDCR_e_V2XInterlockSts_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_V2XInterlockSts' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_V2XModeFeedback(VAR(TeIDCR_e_V2X_ModeFeedback,
    AUTOMATIC) LeIDCR_e_V2XModeFeedback, VAR(boolean, AUTOMATIC)
    LeIDCR_b_V2XModeFeedbackFA)
{
    boolean rtb_LeIDCR_b_V2XModeFeedbackFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_V2XModeFeedback' */
    /* Chart: '<S333>/PokeIDCR_e_V2XModeFeedbackChrt' incorporates:
     *  SignalConversion generated from: '<S333>/LeIDCR_b_V2XFaultRsnFA'
     *  SignalConversion generated from: '<S333>/LeIDCR_e_V2XFaultRsn'
     */
    /* Gateway: PokeIDCR_e_V2XModeFeedback/PokeIDCR_e_V2XModeFeedbackChrt */
    /* During: PokeIDCR_e_V2XModeFeedback/PokeIDCR_e_V2XModeFeedbackChrt */
    /* Entry Internal: PokeIDCR_e_V2XModeFeedback/PokeIDCR_e_V2XModeFeedbackChrt */
    /* Transition: '<S786>:22' */
    if (!LeIDCR_b_V2XModeFeedbackFA)
    {
        /* Transition: '<S786>:23' */
        /* Transition: '<S786>:27' */
        IDCR_ac_B.LeIDCR_e_V2XModeFeedback_out = LeIDCR_e_V2XModeFeedback;
        rtb_LeIDCR_b_V2XModeFeedbackFA_out = false;

        /* Transition: '<S786>:21' */
    }
    else
    {
        /* Transition: '<S786>:24' */
        rtb_LeIDCR_b_V2XModeFeedbackFA_out = true;
    }

    /* End of Chart: '<S333>/PokeIDCR_e_V2XModeFeedbackChrt' */

    /* Outport: '<Root>/VeIDCR_b_V2X_ModeFeedback_FA' incorporates:
     *  SignalConversion generated from: '<S333>/VeIDCR_b_V2XModeFeedbackFA'
     */
    (void)Rte_Write_VeIDCR_b_V2X_ModeFeedback_FA_Value
        (rtb_LeIDCR_b_V2XModeFeedbackFA_out);

    /* Outport: '<Root>/VeIDCR_e_V2X_ModeFeedback' incorporates:
     *  SignalConversion generated from: '<S333>/VeIDCR_e_V2XModeFeedback'
     */
    (void)Rte_Write_VeIDCR_e_V2X_ModeFeedback_Value
        (IDCR_ac_B.LeIDCR_e_V2XModeFeedback_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_V2XModeFeedback' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_e_stModeRqAPM(VAR(TeGENR_e_APM_OperMode,
    AUTOMATIC) LeIDCR_e_stModeRqAPM)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_e_stModeRqAPM' */
    /* Outport: '<Root>/VeIDCR_e_stModeRqAPM' incorporates:
     *  SignalConversion generated from: '<S334>/VeIDCR_e_stModeRqAPM'
     *  SignalConversion generated from: '<S334>/LeIDCR_e_stModeRqAPM'
     */
    /* Gateway: PokeIDCR_e_stModeRqAPM/PokeIDCR_e_stModeRqAPMChrt */
    /* During: PokeIDCR_e_stModeRqAPM/PokeIDCR_e_stModeRqAPMChrt */
    /* Entry Internal: PokeIDCR_e_stModeRqAPM/PokeIDCR_e_stModeRqAPMChrt */
    /* Transition: '<S787>:2' */
    (void)Rte_Write_VeIDCR_e_stModeRqAPM_Value(LeIDCR_e_stModeRqAPM);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_e_stModeRqAPM' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_f_ACOutFreq(VAR(uint8, AUTOMATIC)
    LeIDCR_f_ACOutFreq, VAR(boolean, AUTOMATIC) LeIDCR_b_ACOutFreqFA)
{
    boolean rtb_LeIDCR_b_ACOutFreqFA_out_m;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_f_ACOutFreq' */
    /* Chart: '<S335>/PokeIDCR_f_ACOutFreqChrt' incorporates:
     *  SignalConversion generated from: '<S335>/LeIDCR_f_ACOutFreq1'
     *  SignalConversion generated from: '<S335>/LeIDCR_f_ACOutFreq'
     */
    /* Gateway: PokeIDCR_f_ACOutFreq/PokeIDCR_f_ACOutFreqChrt */
    /* During: PokeIDCR_f_ACOutFreq/PokeIDCR_f_ACOutFreqChrt */
    /* Entry Internal: PokeIDCR_f_ACOutFreq/PokeIDCR_f_ACOutFreqChrt */
    /* Transition: '<S788>:22' */
    if (!LeIDCR_b_ACOutFreqFA)
    {
        /* Transition: '<S788>:23' */
        /* Transition: '<S788>:27' */
        IDCR_ac_B.LeIDCR_f_ACOutFreq_out = LeIDCR_f_ACOutFreq;
        rtb_LeIDCR_b_ACOutFreqFA_out_m = false;

        /* Transition: '<S788>:21' */
    }
    else
    {
        /* Transition: '<S788>:24' */
        rtb_LeIDCR_b_ACOutFreqFA_out_m = true;
    }

    /* End of Chart: '<S335>/PokeIDCR_f_ACOutFreqChrt' */

    /* Outport: '<Root>/VeIDCR_b_ACOutFreq_FA' incorporates:
     *  SignalConversion generated from: '<S335>/VeIDCR_b_ACOutFreqFA'
     */
    (void)Rte_Write_VeIDCR_b_ACOutFreq_FA_Value(rtb_LeIDCR_b_ACOutFreqFA_out_m);

    /* Outport: '<Root>/VeIDCR_f_ACOutFreq' incorporates:
     *  SignalConversion generated from: '<S335>/VeIDCR_f_ACOutFreq'
     */
    (void)Rte_Write_VeIDCR_f_ACOutFreq_Value(IDCR_ac_B.LeIDCR_f_ACOutFreq_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_f_ACOutFreq' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_f_AcOutFrequency(VAR(uint16, AUTOMATIC)
    LeIDCR_f_AcOutFrequency, VAR(boolean, AUTOMATIC) LeIDCR_b_AcOutFrequencyFA)
{
    boolean rtb_LeIDCR_b_AcOutFrequencyFA_out_l;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_f_AcOutFrequency' */
    /* Chart: '<S336>/PokeIDCR_f_AcOutFrequencyChrt' incorporates:
     *  SignalConversion generated from: '<S336>/LeIDCR_f_ACOutFreq1'
     *  SignalConversion generated from: '<S336>/LeIDCR_f_ACOutFreq'
     */
    /* Gateway: PokeIDCR_f_AcOutFrequency/PokeIDCR_f_AcOutFrequencyChrt */
    /* During: PokeIDCR_f_AcOutFrequency/PokeIDCR_f_AcOutFrequencyChrt */
    /* Entry Internal: PokeIDCR_f_AcOutFrequency/PokeIDCR_f_AcOutFrequencyChrt */
    /* Transition: '<S789>:22' */
    if (!LeIDCR_b_AcOutFrequencyFA)
    {
        /* Transition: '<S789>:23' */
        /* Transition: '<S789>:27' */
        IDCR_ac_B.LeIDCR_f_AcOutFrequency_out = LeIDCR_f_AcOutFrequency;
        rtb_LeIDCR_b_AcOutFrequencyFA_out_l = false;

        /* Transition: '<S789>:21' */
    }
    else
    {
        /* Transition: '<S789>:24' */
        rtb_LeIDCR_b_AcOutFrequencyFA_out_l = true;
    }

    /* End of Chart: '<S336>/PokeIDCR_f_AcOutFrequencyChrt' */

    /* Outport: '<Root>/VeIDCR_b_AcOutFrequency_FA' incorporates:
     *  SignalConversion generated from: '<S336>/VeIDCR_b_AcOutFrequencyFA'
     */
    (void)Rte_Write_VeIDCR_b_AcOutFrequency_FA_Value
        (rtb_LeIDCR_b_AcOutFrequencyFA_out_l);

    /* Outport: '<Root>/VeIDCR_f_AcOutFrequency' incorporates:
     *  SignalConversion generated from: '<S336>/VeIDCR_f_AcOutFrequency'
     */
    (void)Rte_Write_VeIDCR_f_AcOutFrequency_Value
        (IDCR_ac_B.LeIDCR_f_AcOutFrequency_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_f_AcOutFrequency' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_f_V2L_Output_Frequency(VAR(uint16, AUTOMATIC)
    LeIDCR_f_V2L_Output_Frequency)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_f_V2L_Output_Frequency' */
    /* Outport: '<Root>/VeIDCR_b_V2L_Output_FrequencyFA' incorporates:
     *  Chart: '<S337>/PokeIDCR_f_V2L_Output_FrequencyChrt'
     *  SignalConversion generated from: '<S337>/VeIDCR_b_V2L_Output_FrequencyFA'
     */
    /* Gateway: PokeIDCR_f_V2L_Output_Frequency/PokeIDCR_f_V2L_Output_FrequencyChrt */
    /* During: PokeIDCR_f_V2L_Output_Frequency/PokeIDCR_f_V2L_Output_FrequencyChrt */
    /* Entry Internal: PokeIDCR_f_V2L_Output_Frequency/PokeIDCR_f_V2L_Output_FrequencyChrt */
    /* Transition: '<S790>:2' */
    (void)Rte_Write_VeIDCR_b_V2L_Output_FrequencyFA_Value(false);

    /* Outport: '<Root>/VeIDCR_f_V2L_Output_Frequency' incorporates:
     *  SignalConversion generated from: '<S337>/VeIDCR_f_V2L_Output_Frequency'
     *  SignalConversion generated from: '<S337>/LeIDCR_f_V2L_Output_Frequency'
     */
    (void)Rte_Write_VeIDCR_f_V2L_Output_Frequency_Value
        (LeIDCR_f_V2L_Output_Frequency);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_f_V2L_Output_Frequency' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_f_V2L_Pilot_Frequency(VAR(sint16, AUTOMATIC)
    LeIDCR_f_V2L_Pilot_Frequency)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_f_V2L_Pilot_Frequency' */
    /* Outport: '<Root>/VeIDCR_b_V2L_Pilot_FrequencyFA' incorporates:
     *  Chart: '<S338>/PokeIDCR_f_V2L_Pilot_FrequencyChrt'
     *  SignalConversion generated from: '<S338>/VeIDCR_b_V2L_Pilot_FrequencyFA'
     */
    /* Gateway: PokeIDCR_f_V2L_Pilot_Frequency/PokeIDCR_f_V2L_Pilot_FrequencyChrt */
    /* During: PokeIDCR_f_V2L_Pilot_Frequency/PokeIDCR_f_V2L_Pilot_FrequencyChrt */
    /* Entry Internal: PokeIDCR_f_V2L_Pilot_Frequency/PokeIDCR_f_V2L_Pilot_FrequencyChrt */
    /* Transition: '<S791>:2' */
    (void)Rte_Write_VeIDCR_b_V2L_Pilot_FrequencyFA_Value(false);

    /* Outport: '<Root>/VeIDCR_f_V2L_Pilot_Frequency' incorporates:
     *  Chart: '<S338>/PokeIDCR_f_V2L_Pilot_FrequencyChrt'
     *  SignalConversion generated from: '<S338>/VeIDCR_f_V2L_Pilot_Frequency'
     *  SignalConversion generated from: '<S338>/LeIDCR_f_V2L_Pilot_Frequency'
     */
    (void)Rte_Write_VeIDCR_f_V2L_Pilot_Frequency_Value((uint16)
        LeIDCR_f_V2L_Pilot_Frequency);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_f_V2L_Pilot_Frequency' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_f_V2XFrequency(VAR(float32, AUTOMATIC)
    LeIDCR_f_V2XFrequency, VAR(boolean, AUTOMATIC) LeIDCR_b_V2XFrequencyFA)
{
    boolean rtb_LeIDCR_b_V2XFrequencyFA_out_m;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_f_V2XFrequency' */
    /* Chart: '<S339>/PokeIDCR_f_V2XFrequencyChrt' incorporates:
     *  SignalConversion generated from: '<S339>/LeIDCR_f_ACOutFreq1'
     *  SignalConversion generated from: '<S339>/LeIDCR_f_ACOutFreq'
     */
    /* Gateway: PokeIDCR_f_V2XFrequency/PokeIDCR_f_V2XFrequencyChrt */
    /* During: PokeIDCR_f_V2XFrequency/PokeIDCR_f_V2XFrequencyChrt */
    /* Entry Internal: PokeIDCR_f_V2XFrequency/PokeIDCR_f_V2XFrequencyChrt */
    /* Transition: '<S792>:22' */
    if (!LeIDCR_b_V2XFrequencyFA)
    {
        /* Transition: '<S792>:23' */
        /* Transition: '<S792>:27' */
        IDCR_ac_B.LeIDCR_f_V2XFrequency_out = LeIDCR_f_V2XFrequency;
        rtb_LeIDCR_b_V2XFrequencyFA_out_m = false;

        /* Transition: '<S792>:21' */
    }
    else
    {
        /* Transition: '<S792>:24' */
        rtb_LeIDCR_b_V2XFrequencyFA_out_m = true;
    }

    /* End of Chart: '<S339>/PokeIDCR_f_V2XFrequencyChrt' */

    /* Outport: '<Root>/VeIDCR_b_V2X_Frequency_FA' incorporates:
     *  SignalConversion generated from: '<S339>/VeIDCR_b_V2XFrequencyFA'
     */
    (void)Rte_Write_VeIDCR_b_V2X_Frequency_FA_Value
        (rtb_LeIDCR_b_V2XFrequencyFA_out_m);

    /* Outport: '<Root>/VeIDCR_f_V2X_Frequency' incorporates:
     *  SignalConversion generated from: '<S339>/VeIDCR_f_V2XFrequency'
     */
    (void)Rte_Write_VeIDCR_f_V2X_Frequency_Value
        (IDCR_ac_B.LeIDCR_f_V2XFrequency_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_f_V2XFrequency' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_g_HVCMS_EVSEID(VAR(uint32, AUTOMATIC)
    LeIDCR_g_HVCMS_EVSEID, VAR(boolean, AUTOMATIC) LeIDCR_b_HVCMS_EVSEID_FA)
{
    boolean rtb_LeIDCR_b_HVCMS_EVSEID_FA_out_d;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_g_HVCMS_EVSEID' */
    /* Chart: '<S340>/PokeIDCR_g_HVCMS_EVSEIDChrt' incorporates:
     *  SignalConversion generated from: '<S340>/LeIDCR_b_EVSE_ChargingSystemError'
     *  SignalConversion generated from: '<S340>/LeIDCR_b_EVSE_ChargingSystemError_FA'
     */
    /* Gateway: PokeIDCR_g_HVCMS_EVSEID/PokeIDCR_g_HVCMS_EVSEIDChrt */
    /* During: PokeIDCR_g_HVCMS_EVSEID/PokeIDCR_g_HVCMS_EVSEIDChrt */
    /* Entry Internal: PokeIDCR_g_HVCMS_EVSEID/PokeIDCR_g_HVCMS_EVSEIDChrt */
    /* Transition: '<S793>:2' */
    if (!LeIDCR_b_HVCMS_EVSEID_FA)
    {
        /* Transition: '<S793>:23' */
        /* Transition: '<S793>:26' */
        IDCR_ac_B.LeIDCR_g_HVCMS_EVSEID_out = LeIDCR_g_HVCMS_EVSEID;
        rtb_LeIDCR_b_HVCMS_EVSEID_FA_out_d = false;
    }
    else
    {
        /* Transition: '<S793>:27' */
        rtb_LeIDCR_b_HVCMS_EVSEID_FA_out_d = true;

        /* Transition: '<S793>:28' */
    }

    /* End of Chart: '<S340>/PokeIDCR_g_HVCMS_EVSEIDChrt' */

    /* Outport: '<Root>/VeIDCR_b_HVCMS_EVSEID_FA' incorporates:
     *  SignalConversion generated from: '<S340>/VeIDCR_b_HVCMS_EVSEID_FA'
     */
    (void)Rte_Write_VeIDCR_b_HVCMS_EVSEID_FA_Value
        (rtb_LeIDCR_b_HVCMS_EVSEID_FA_out_d);

    /* Outport: '<Root>/VeIDCR_g_HVCMS_EVSEID' incorporates:
     *  SignalConversion generated from: '<S340>/VeIDCR_g_HVCMS_EVSEID'
     */
    (void)Rte_Write_VeIDCR_g_HVCMS_EVSEID_Value
        (IDCR_ac_B.LeIDCR_g_HVCMS_EVSEID_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_g_HVCMS_EVSEID' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_i_IDCM_DCCA_M182(VAR(sint16, AUTOMATIC)
    LeIDCR_i_IDCM_DCCA_M182)
{
    boolean rtb_LeIDCR_b_IDCM_DCCA_M182_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_i_IDCM_DCCA_M182' */
    /* Chart: '<S341>/PokeIDCR_i_IDCM_DCCA_M182Chrt' incorporates:
     *  Constant: '<S794>/Calib'
     *  SignalConversion generated from: '<S341>/LeIDCR_i_IDCM_DCCA_M182'
     */
    /* Gateway: PokeIDCR_i_IDCM_DCCA_M182/PokeIDCR_i_IDCM_DCCA_M182Chrt */
    /* During: PokeIDCR_i_IDCM_DCCA_M182/PokeIDCR_i_IDCM_DCCA_M182Chrt */
    /* Entry Internal: PokeIDCR_i_IDCM_DCCA_M182/PokeIDCR_i_IDCM_DCCA_M182Chrt */
    /* Transition: '<S795>:2' */
    if (LeIDCR_i_IDCM_DCCA_M182 == KeIDCR_i_IDCM_DCCA_HLC)
    {
        /* Transition: '<S795>:24' */
        /* Transition: '<S795>:22' */
        rtb_LeIDCR_b_IDCM_DCCA_M182_out = true;
    }
    else
    {
        /* Transition: '<S795>:23' */
        rtb_LeIDCR_b_IDCM_DCCA_M182_out = false;

        /* Transition: '<S795>:21' */
    }

    /* End of Chart: '<S341>/PokeIDCR_i_IDCM_DCCA_M182Chrt' */

    /* Outport: '<Root>/VeIDCR_b_IDCM_DCCA' incorporates:
     *  SignalConversion generated from: '<S341>/VeIDCR_b_IDCM_DCCA_M182'
     */
    (void)Rte_Write_VeIDCR_b_IDCM_DCCA_Value(rtb_LeIDCR_b_IDCM_DCCA_M182_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_i_IDCM_DCCA_M182' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_i_ISO15118_SAScheduleTupleID(VAR(uint8, AUTOMATIC)
    LeIDCR_i_ISO15118_SAScheduleTupleID, VAR(boolean, AUTOMATIC)
    LeIDCR_b_ISO15118_SAScheduleTupleID_FA)
{
    boolean rtb_LeIDCR_b_ISO15118_SAScheduleTupleI_a;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_i_ISO15118_SAScheduleTupleID' */
    /* Chart: '<S342>/PokeIDCR_i_ISO15118_SAScheduleTupleIDChrt' incorporates:
     *  SignalConversion generated from: '<S342>/LeIDCR_b_ACSideCurr_L2FA'
     */
    /* Gateway: PokeIDCR_i_ISO15118_SAScheduleTupleID/PokeIDCR_i_ISO15118_SAScheduleTupleIDChrt */
    /* During: PokeIDCR_i_ISO15118_SAScheduleTupleID/PokeIDCR_i_ISO15118_SAScheduleTupleIDChrt */
    /* Entry Internal: PokeIDCR_i_ISO15118_SAScheduleTupleID/PokeIDCR_i_ISO15118_SAScheduleTupleIDChrt */
    /* Transition: '<S796>:2' */
    if (!LeIDCR_b_ISO15118_SAScheduleTupleID_FA)
    {
        /* Transition: '<S796>:3' */
        /* Transition: '<S796>:15' */
        rtb_LeIDCR_b_ISO15118_SAScheduleTupleI_a = false;

        /* Transition: '<S796>:18' */
    }
    else
    {
        /* Transition: '<S796>:4' */
        rtb_LeIDCR_b_ISO15118_SAScheduleTupleI_a = true;
    }

    /* End of Chart: '<S342>/PokeIDCR_i_ISO15118_SAScheduleTupleIDChrt' */

    /* Outport: '<Root>/VeIDCR_b_ISO15118_SAScheduleTupleID_FA' incorporates:
     *  SignalConversion generated from: '<S342>/VeIDCR_b_ISO15118_SAScheduleTupleID_FA'
     */
    (void)Rte_Write_VeIDCR_b_ISO15118_SAScheduleTupleID_FA_Value
        (rtb_LeIDCR_b_ISO15118_SAScheduleTupleI_a);

    /* Outport: '<Root>/VeIDCR_i_ISO15118_SAScheduleTupleID' incorporates:
     *  SignalConversion generated from: '<S342>/VeIDCR_i_ISO15118_SAScheduleTupleID'
     *  SignalConversion generated from: '<S342>/LeIDCR_I_ACSideCurr_L2'
     */
    (void)Rte_Write_VeIDCR_i_ISO15118_SAScheduleTupleID_Value
        (LeIDCR_i_ISO15118_SAScheduleTupleID);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_i_ISO15118_SAScheduleTupleID' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_i_SAScheduleTupleID(VAR(uint16, AUTOMATIC)
    LeIDCR_i_SAScheduleTupleID)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_i_SAScheduleTupleID' */
    /* Outport: '<Root>/VeIDCR_b_SAScheduleTupleIDFA' incorporates:
     *  Chart: '<S343>/PokeIDCR_i_SAScheduleTupleIDChrt'
     *  SignalConversion generated from: '<S343>/VeIDCR_b_SAScheduleTupleIDFA'
     */
    /* Gateway: PokeIDCR_i_SAScheduleTupleID/PokeIDCR_i_SAScheduleTupleIDChrt */
    /* During: PokeIDCR_i_SAScheduleTupleID/PokeIDCR_i_SAScheduleTupleIDChrt */
    /* Entry Internal: PokeIDCR_i_SAScheduleTupleID/PokeIDCR_i_SAScheduleTupleIDChrt */
    /* Transition: '<S797>:2' */
    (void)Rte_Write_VeIDCR_b_SAScheduleTupleIDFA_Value(false);

    /* Outport: '<Root>/VeIDCR_i_SAScheduleTupleID' incorporates:
     *  Chart: '<S343>/PokeIDCR_i_SAScheduleTupleIDChrt'
     *  SignalConversion generated from: '<S343>/VeIDCR_i_SAScheduleTupleID'
     *  SignalConversion generated from: '<S343>/LeIDCR_i_SAScheduleTupleID'
     */
    (void)Rte_Write_VeIDCR_i_SAScheduleTupleID_Value((uint8)
        LeIDCR_i_SAScheduleTupleID);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_i_SAScheduleTupleID' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_t_EVSE_NotificationMaxDelay(VAR(float32,
    AUTOMATIC) LeIDCR_t_EVSE_NotificationMaxDelay)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_t_EVSE_NotificationMaxDelay' */
    /* Outport: '<Root>/VeIDCR_b_EVSE_NotificationMaxDelayFA' incorporates:
     *  Chart: '<S344>/PokeIDCR_t_EVSE_NotificationMaxDelayChrt'
     *  SignalConversion generated from: '<S344>/VeIDCR_b_EVSE_NotificationMaxDelayFA'
     */
    /* Gateway: PokeIDCR_t_EVSE_NotificationMaxDelay/PokeIDCR_t_EVSE_NotificationMaxDelayChrt */
    /* During: PokeIDCR_t_EVSE_NotificationMaxDelay/PokeIDCR_t_EVSE_NotificationMaxDelayChrt */
    /* Entry Internal: PokeIDCR_t_EVSE_NotificationMaxDelay/PokeIDCR_t_EVSE_NotificationMaxDelayChrt */
    /* Transition: '<S798>:2' */
    (void)Rte_Write_VeIDCR_b_EVSE_NotificationMaxDelayFA_Value(false);

    /* Outport: '<Root>/VeIDCR_t_EVSE_NotificationMaxDelay' incorporates:
     *  SignalConversion generated from: '<S344>/VeIDCR_t_EVSE_NotificationMaxDelay'
     *  SignalConversion generated from: '<S344>/LeIDCR_t_EVSE_NotificationMaxDelay'
     */
    (void)Rte_Write_VeIDCR_t_EVSE_NotificationMaxDelay_Value
        (LeIDCR_t_EVSE_NotificationMaxDelay);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_t_EVSE_NotificationMaxDelay' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_t_IBS2_BattTemp(VAR(float32, AUTOMATIC)
    LeIDCR_t_IBS2_BattTemp)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_t_IBS2_BattTemp' */
    /* Outport: '<Root>/VeIDCR_T_IBS2_Temp' incorporates:
     *  SignalConversion generated from: '<S345>/VeIDCR_t_IBS2_BattTemp'
     *  SignalConversion generated from: '<S345>/LeIDCR_t_IBS2_BattTemp'
     */
    /* Gateway: PokeIDCR_t_IBS2_BattTemp/PokeIDCR_t_IBS2_BattTempChrt */
    /* During: PokeIDCR_t_IBS2_BattTemp/PokeIDCR_t_IBS2_BattTempChrt */
    /* Entry Internal: PokeIDCR_t_IBS2_BattTemp/PokeIDCR_t_IBS2_BattTempChrt */
    /* Transition: '<S799>:2' */
    (void)Rte_Write_VeIDCR_T_IBS2_Temp_Value(LeIDCR_t_IBS2_BattTemp);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_t_IBS2_BattTemp' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_t_IBS_BattTemp(VAR(float32, AUTOMATIC)
    LeIDCR_t_IBS_BattTemp, VAR(boolean, AUTOMATIC) LeIDCR_b_IBS_BattTempFA)
{
    boolean rtb_LeIDCR_b_IBS_BattTempFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_t_IBS_BattTemp' */
    /* Chart: '<S346>/PokeIDCR_t_IBS_BattTempChrt' incorporates:
     *  SignalConversion generated from: '<S346>/LeIDCR_b_IBS_BattTempFA'
     *  SignalConversion generated from: '<S346>/LeIDCR_t_IBS_BattTemp'
     */
    /* Gateway: PokeIDCR_t_IBS_BattTemp/PokeIDCR_t_IBS_BattTempChrt */
    /* During: PokeIDCR_t_IBS_BattTemp/PokeIDCR_t_IBS_BattTempChrt */
    /* Entry Internal: PokeIDCR_t_IBS_BattTemp/PokeIDCR_t_IBS_BattTempChrt */
    /* Transition: '<S800>:2' */
    if (!LeIDCR_b_IBS_BattTempFA)
    {
        /* Transition: '<S800>:3' */
        /* Transition: '<S800>:15' */
        IDCR_ac_B.LeIDCR_t_IBS_BattTemp_out = LeIDCR_t_IBS_BattTemp;
        rtb_LeIDCR_b_IBS_BattTempFA_out = false;
        IDCR_ac_B.LeIDCR_b_IBS_BattTempSgnl_Rcvd = true;

        /* Transition: '<S800>:18' */
    }
    else
    {
        /* Transition: '<S800>:4' */
        rtb_LeIDCR_b_IBS_BattTempFA_out = true;
    }

    /* End of Chart: '<S346>/PokeIDCR_t_IBS_BattTempChrt' */

    /* Outport: '<Root>/VeIDCR_b_IBS_BattTemp_FA' incorporates:
     *  SignalConversion generated from: '<S346>/VeIDCR_b_IBS_BattTempFA'
     */
    (void)Rte_Write_VeIDCR_b_IBS_BattTemp_FA_Value
        (rtb_LeIDCR_b_IBS_BattTempFA_out);

    /* Outport: '<Root>/VeIDCR_b_IBS_BattTemp_SgnlRcvd' incorporates:
     *  SignalConversion generated from: '<S346>/VeIDCR_b_IBS_BattTempSgnl_Rcvd'
     */
    (void)Rte_Write_VeIDCR_b_IBS_BattTemp_SgnlRcvd_Value
        (IDCR_ac_B.LeIDCR_b_IBS_BattTempSgnl_Rcvd);

    /* Outport: '<Root>/VeIDCR_T_IBS_BattTemp' incorporates:
     *  SignalConversion generated from: '<S346>/VeIDCR_t_IBS_BattTemp'
     */
    (void)Rte_Write_VeIDCR_T_IBS_BattTemp_Value
        (IDCR_ac_B.LeIDCR_t_IBS_BattTemp_out);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_t_IBS_BattTemp' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_t_ISO15118_NotificationMaxDelay(VAR(float32,
    AUTOMATIC) LeIDCR_t_ISO15118_NotificationMaxDelay, VAR(boolean, AUTOMATIC)
    LeIDCR_b_ISO15118_NotificationMaxDelay_FA)
{
    boolean rtb_LeIDCR_b_ISO15118_NotificationMaxD_e;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_t_ISO15118_NotificationMaxDelay' */
    /* Chart: '<S347>/PokeIDCR_t_ISO15118_NotificationMaxDelayChrt' incorporates:
     *  SignalConversion generated from: '<S347>/LeIDCR_b_ACSideCurr_L2FA'
     */
    /* Gateway: PokeIDCR_t_ISO15118_NotificationMaxDelay/PokeIDCR_t_ISO15118_NotificationMaxDelayChrt */
    /* During: PokeIDCR_t_ISO15118_NotificationMaxDelay/PokeIDCR_t_ISO15118_NotificationMaxDelayChrt */
    /* Entry Internal: PokeIDCR_t_ISO15118_NotificationMaxDelay/PokeIDCR_t_ISO15118_NotificationMaxDelayChrt */
    /* Transition: '<S801>:2' */
    if (!LeIDCR_b_ISO15118_NotificationMaxDelay_FA)
    {
        /* Transition: '<S801>:3' */
        /* Transition: '<S801>:15' */
        rtb_LeIDCR_b_ISO15118_NotificationMaxD_e = false;

        /* Transition: '<S801>:18' */
    }
    else
    {
        /* Transition: '<S801>:4' */
        rtb_LeIDCR_b_ISO15118_NotificationMaxD_e = true;
    }

    /* End of Chart: '<S347>/PokeIDCR_t_ISO15118_NotificationMaxDelayChrt' */

    /* Outport: '<Root>/VeIDCR_b_ISO15118_NotificationMaxDelay_FA' incorporates:
     *  SignalConversion generated from: '<S347>/VeIDCR_b_ISO15118_NotificationMaxDelay_FA'
     */
    (void)Rte_Write_VeIDCR_b_ISO15118_NotificationMaxDelay_FA_Value
        (rtb_LeIDCR_b_ISO15118_NotificationMaxD_e);

    /* Outport: '<Root>/VeIDCR_t_ISO15118_NotificationMaxDelay' incorporates:
     *  SignalConversion generated from: '<S347>/VeIDCR_t_ISO15118_NotificationMaxDelay'
     *  SignalConversion generated from: '<S347>/LeIDCR_I_ACSideCurr_L2'
     */
    (void)Rte_Write_VeIDCR_t_ISO15118_NotificationMaxDelay_Value
        (LeIDCR_t_ISO15118_NotificationMaxDelay);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_t_ISO15118_NotificationMaxDelay' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_y_ISO15118_SchemaID(VAR(uint8, AUTOMATIC)
    LeIDCR_y_ISO15118_SchemaID, VAR(boolean, AUTOMATIC)
    LeIDCR_b_ISO15118_SchemaID_FA)
{
    boolean rtb_LeIDCR_b_ISO15118_SchemaID_FA_out_g;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_y_ISO15118_SchemaID' */
    /* Chart: '<S348>/PokeIDCR_y_ISO15118_SchemaIDChrt' incorporates:
     *  SignalConversion generated from: '<S348>/LeIDCR_b_ACSideCurr_L2FA'
     */
    /* Gateway: PokeIDCR_y_ISO15118_SchemaID/PokeIDCR_y_ISO15118_SchemaIDChrt */
    /* During: PokeIDCR_y_ISO15118_SchemaID/PokeIDCR_y_ISO15118_SchemaIDChrt */
    /* Entry Internal: PokeIDCR_y_ISO15118_SchemaID/PokeIDCR_y_ISO15118_SchemaIDChrt */
    /* Transition: '<S802>:2' */
    if (!LeIDCR_b_ISO15118_SchemaID_FA)
    {
        /* Transition: '<S802>:3' */
        /* Transition: '<S802>:15' */
        rtb_LeIDCR_b_ISO15118_SchemaID_FA_out_g = false;

        /* Transition: '<S802>:18' */
    }
    else
    {
        /* Transition: '<S802>:4' */
        rtb_LeIDCR_b_ISO15118_SchemaID_FA_out_g = true;
    }

    /* End of Chart: '<S348>/PokeIDCR_y_ISO15118_SchemaIDChrt' */

    /* Outport: '<Root>/VeIDCR_b_ISO15118_SchemaID_FA' incorporates:
     *  SignalConversion generated from: '<S348>/VeIDCR_b_ISO15118_SchemaID_FA'
     */
    (void)Rte_Write_VeIDCR_b_ISO15118_SchemaID_FA_Value
        (rtb_LeIDCR_b_ISO15118_SchemaID_FA_out_g);

    /* Outport: '<Root>/VeIDCR_y_ISO15118_SchemaID' incorporates:
     *  SignalConversion generated from: '<S348>/VeIDCR_y_ISO15118_SchemaID'
     *  SignalConversion generated from: '<S348>/LeIDCR_I_ACSideCurr_L2'
     */
    (void)Rte_Write_VeIDCR_y_ISO15118_SchemaID_Value(LeIDCR_y_ISO15118_SchemaID);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_y_ISO15118_SchemaID' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_y_ISO15118_VersionNumMajor(VAR(uint8, AUTOMATIC)
    LeIDCR_y_ISO15118_VersionNumMajor, VAR(boolean, AUTOMATIC)
    LeIDCR_b_ISO15118_VersionNumMajor_FA)
{
    boolean rtb_LeIDCR_b_VersionNumMajor_FA_out_d;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_y_ISO15118_VersionNumMajor' */
    /* Chart: '<S349>/PokeIDCR_y_VersionNumMajorChrt' incorporates:
     *  SignalConversion generated from: '<S349>/LeIDCR_b_ACSideCurr_L2FA'
     */
    /* Gateway: PokeIDCR_y_ISO15118_VersionNumMajor/PokeIDCR_y_VersionNumMajorChrt */
    /* During: PokeIDCR_y_ISO15118_VersionNumMajor/PokeIDCR_y_VersionNumMajorChrt */
    /* Entry Internal: PokeIDCR_y_ISO15118_VersionNumMajor/PokeIDCR_y_VersionNumMajorChrt */
    /* Transition: '<S803>:2' */
    if (!LeIDCR_b_ISO15118_VersionNumMajor_FA)
    {
        /* Transition: '<S803>:3' */
        /* Transition: '<S803>:15' */
        rtb_LeIDCR_b_VersionNumMajor_FA_out_d = false;

        /* Transition: '<S803>:18' */
    }
    else
    {
        /* Transition: '<S803>:4' */
        rtb_LeIDCR_b_VersionNumMajor_FA_out_d = true;
    }

    /* End of Chart: '<S349>/PokeIDCR_y_VersionNumMajorChrt' */

    /* Outport: '<Root>/VeIDCR_b_ISO15118_VersionNumMajor_FA' incorporates:
     *  SignalConversion generated from: '<S349>/VeIDCR_b_VersionNumMajor_FA'
     */
    (void)Rte_Write_VeIDCR_b_ISO15118_VersionNumMajor_FA_Value
        (rtb_LeIDCR_b_VersionNumMajor_FA_out_d);

    /* Outport: '<Root>/VeIDCR_y_ISO15118_VersionNumMajor' incorporates:
     *  SignalConversion generated from: '<S349>/VeIDCR_y_VersionNumMajor'
     *  SignalConversion generated from: '<S349>/LeIDCR_I_ACSideCurr_L2'
     */
    (void)Rte_Write_VeIDCR_y_ISO15118_VersionNumMajor_Value
        (LeIDCR_y_ISO15118_VersionNumMajor);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_y_ISO15118_VersionNumMajor' */
}

/* Output function */
FUNC(void, IDCR_CODE) PokeIDCR_y_ISO15118_VersionNumMinor(VAR(uint8, AUTOMATIC)
    LeIDCR_y_ISO15118_VersionNumMinor, VAR(boolean, AUTOMATIC)
    LeIDCR_b_ISO15118_VersionNumMinor_FA)
{
    boolean rtb_LeIDCR_b_ISO15118_VersionNumMinor__e;

    /* Outputs for Function Call SubSystem: '<Root>/PokeIDCR_y_ISO15118_VersionNumMinor' */
    /* Chart: '<S350>/PokeIDCR_y_ISO15118_VersionNumMinorChrt' incorporates:
     *  SignalConversion generated from: '<S350>/LeIDCR_b_ACSideCurr_L2FA'
     */
    /* Gateway: PokeIDCR_y_ISO15118_VersionNumMinor/PokeIDCR_y_ISO15118_VersionNumMinorChrt */
    /* During: PokeIDCR_y_ISO15118_VersionNumMinor/PokeIDCR_y_ISO15118_VersionNumMinorChrt */
    /* Entry Internal: PokeIDCR_y_ISO15118_VersionNumMinor/PokeIDCR_y_ISO15118_VersionNumMinorChrt */
    /* Transition: '<S804>:2' */
    if (!LeIDCR_b_ISO15118_VersionNumMinor_FA)
    {
        /* Transition: '<S804>:3' */
        /* Transition: '<S804>:15' */
        rtb_LeIDCR_b_ISO15118_VersionNumMinor__e = false;

        /* Transition: '<S804>:18' */
    }
    else
    {
        /* Transition: '<S804>:4' */
        rtb_LeIDCR_b_ISO15118_VersionNumMinor__e = true;
    }

    /* End of Chart: '<S350>/PokeIDCR_y_ISO15118_VersionNumMinorChrt' */

    /* Outport: '<Root>/VeIDCR_b_ISO15118_VersionNumMinor_FA' incorporates:
     *  SignalConversion generated from: '<S350>/VeIDCR_b_ISO15118_VersionNumMinor_FA'
     */
    (void)Rte_Write_VeIDCR_b_ISO15118_VersionNumMinor_FA_Value
        (rtb_LeIDCR_b_ISO15118_VersionNumMinor__e);

    /* Outport: '<Root>/VeIDCR_y_ISO15118_VersionNumMinor' incorporates:
     *  SignalConversion generated from: '<S350>/VeIDCR_y_ISO15118_VersionNumMinor'
     *  SignalConversion generated from: '<S350>/LeIDCR_I_ACSideCurr_L2'
     */
    (void)Rte_Write_VeIDCR_y_ISO15118_VersionNumMinor_Value
        (LeIDCR_y_ISO15118_VersionNumMinor);

    /* End of Outputs for SubSystem: '<Root>/PokeIDCR_y_ISO15118_VersionNumMinor' */
}

/* Output function */
FUNC(void, IDCR_CODE) IDCR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/IDCR_PwrOn'
     */
    /* S-Function (fcgen): '<S150>/FcnCallGen' incorporates:
     *  SubSystem: '<S150>/InitBlock'
     */
    /* SignalConversion generated from: '<S529>/ChrgFailSts_Init' incorporates:
     *  Constant: '<S574>/Constant'
     */
    IDCR_ac_B.OutportBufferForChrgFailSts_Init = IDCR_ac_ConstB.Constant_h;

    /* SignalConversion generated from: '<S529>/ChrgFailStsFA_Init' */
    IDCR_ac_B.OutportBufferForChrgFailStsFA_Init =
        IDCR_ac_ConstB.ConstantValue_n;

    /* SignalConversion generated from: '<S529>/J1772_S2_Status_Init' */
    IDCR_ac_B.OutportBufferForJ1772_S2_Status_Init =
        IDCR_ac_ConstB.ConstantValue31_dl;

    /* SignalConversion generated from: '<S529>/J1772_S2_StatusFA_Init' */
    IDCR_ac_B.OutportBufferForJ1772_S2_StatusFA_Init =
        IDCR_ac_ConstB.ConstantValue1_or;

    /* SignalConversion generated from: '<S529>/ChrgFail_On_OBCM_Init' */
    IDCR_ac_B.OutportBufferForChrgFail_On_OBCM_Init =
        IDCR_ac_ConstB.ConstantValue32_a;

    /* SignalConversion generated from: '<S529>/ChrgFail_On_OBCMFA_Init' */
    IDCR_ac_B.OutportBufferForChrgFail_On_OBCMFA_Init =
        IDCR_ac_ConstB.ConstantValue2_p;

    /* SignalConversion generated from: '<S529>/StatusACPresent_Init' */
    IDCR_ac_B.OutportBufferForStatusACPresent_Init =
        IDCR_ac_ConstB.ConstantValue33_h;

    /* SignalConversion generated from: '<S529>/StatusACPresentFA_Init' */
    IDCR_ac_B.OutportBufferForStatusACPresentFA_Init =
        IDCR_ac_ConstB.ConstantValue3_d;

    /* SignalConversion generated from: '<S529>/ChrgCurrentInput_Init' */
    IDCR_ac_B.OutportBufferForChrgCurrentInput_Init =
        IDCR_ac_ConstB.ConstantValue34_n;

    /* SignalConversion generated from: '<S529>/ChrgCurrentFAInput_Init' */
    IDCR_ac_B.OutportBufferForChrgCurrentFAInput_Init =
        IDCR_ac_ConstB.ConstantValue4_j;

    /* SignalConversion generated from: '<S529>/ChgEnblSts_Init' */
    IDCR_ac_B.OutportBufferForChgEnblSts_Init = IDCR_ac_ConstB.ConstantValue35_h;

    /* SignalConversion generated from: '<S529>/ChgEnblStsFA_Init' */
    IDCR_ac_B.OutportBufferForChgEnblStsFA_Init =
        IDCR_ac_ConstB.ConstantValue5_n;

    /* SignalConversion generated from: '<S529>/AC_LnHi_Init' */
    IDCR_ac_B.OutportBufferForAC_LnHi_Init = IDCR_ac_ConstB.ConstantValue36_p;

    /* SignalConversion generated from: '<S529>/AC_LnHiFA_Init' */
    IDCR_ac_B.OutportBufferForAC_LnHiFA_Init = IDCR_ac_ConstB.ConstantValue11_f;

    /* SignalConversion generated from: '<S529>/J1772InputCrntAval_Init' */
    IDCR_ac_B.OutportBufferForJ1772InputCrntAval_Init =
        IDCR_ac_ConstB.ConstantValue37_n;

    /* SignalConversion generated from: '<S529>/J1772InputCrntAvalFA_Init' */
    IDCR_ac_B.OutportBufferForJ1772InputCrntAvalFA_Ini =
        IDCR_ac_ConstB.ConstantValue10_l;

    /* SignalConversion generated from: '<S529>/BattNotDetctd_Init' */
    IDCR_ac_B.OutportBufferForBattNotDetctd_Init =
        IDCR_ac_ConstB.ConstantValue26_c;

    /* SignalConversion generated from: '<S529>/BattNotDetctdFA_Init' */
    IDCR_ac_B.OutportBufferForBattNotDetctdFA_Init =
        IDCR_ac_ConstB.ConstantValue9_i;

    /* SignalConversion generated from: '<S529>/AC_LnLow_Init' */
    IDCR_ac_B.OutportBufferForAC_LnLow_Init = IDCR_ac_ConstB.ConstantValue39_l;

    /* SignalConversion generated from: '<S529>/AC_LnLowFA_Init' */
    IDCR_ac_B.OutportBufferForAC_LnLowFA_Init = IDCR_ac_ConstB.ConstantValue8_f;

    /* SignalConversion generated from: '<S529>/BattSide_Curr_Init' */
    IDCR_ac_B.OutportBufferForBattSide_Curr_Init =
        IDCR_ac_ConstB.ConstantValue18_h;

    /* SignalConversion generated from: '<S529>/BattSide_CurrFA_Init' */
    IDCR_ac_B.OutportBufferForBattSide_CurrFA_Init =
        IDCR_ac_ConstB.ConstantValue7_k;

    /* SignalConversion generated from: '<S529>/ChrgCrntAvail_Init' */
    IDCR_ac_B.OutportBufferForChrgCrntAvail_Init =
        IDCR_ac_ConstB.ConstantValue41_g;

    /* SignalConversion generated from: '<S529>/ChrgCrntAvailFA_Init' */
    IDCR_ac_B.OutportBufferForChrgCrntAvailFA_Init =
        IDCR_ac_ConstB.ConstantValue6_co;

    /* SignalConversion generated from: '<S529>/EVSE_PilotStat_OBCM_Init' incorporates:
     *  Constant: '<S575>/Constant'
     */
    IDCR_ac_B.OutportBufferForEVSE_PilotStat_OBCM_Init =
        IDCR_ac_ConstB.Constant_o;

    /* SignalConversion generated from: '<S529>/EVSE_PilotStat_OBCMFA_Init' */
    IDCR_ac_B.OutportBufferForEVSE_PilotStat_OBCMFA_In =
        IDCR_ac_ConstB.ConstantValue13_nl;

    /* SignalConversion generated from: '<S529>/ProxStat_Init' incorporates:
     *  Constant: '<S582>/Calib'
     */
    IDCR_ac_B.OutportBufferForProxStat_Init = KeIDCR_e_Init_ProxStat;

    /* SignalConversion generated from: '<S529>/ProxStatFA_Init' */
    IDCR_ac_B.OutportBufferForProxStatFA_Init = IDCR_ac_ConstB.ConstantValue14_m;

    /* SignalConversion generated from: '<S529>/J1772Stat_Init' */
    IDCR_ac_B.OutportBufferForJ1772Stat_Init = IDCR_ac_ConstB.ConstantValue59;

    /* SignalConversion generated from: '<S529>/J1772StatFA_Init' */
    IDCR_ac_B.OutportBufferForJ1772StatFA_Init =
        IDCR_ac_ConstB.ConstantValue15_e;

    /* SignalConversion generated from: '<S529>/ChrgrModeStat_OBCM_Init' incorporates:
     *  Constant: '<S576>/Constant'
     */
    IDCR_ac_B.OutportBufferForChrgrModeStat_OBCM_Init =
        IDCR_ac_ConstB.Constant_k;

    /* SignalConversion generated from: '<S529>/ChrgrModeStat_OBCMFA_Init' */
    IDCR_ac_B.OutportBufferForChrgrModeStat_OBCMFA_Ini =
        IDCR_ac_ConstB.ConstantValue16_n;

    /* SignalConversion generated from: '<S529>/OBCM_Charger_Ready_Init' */
    IDCR_ac_B.OutportBufferForOBCM_Charger_Ready_Init =
        IDCR_ac_ConstB.ConstantValue57;

    /* SignalConversion generated from: '<S529>/OBCM_Charger_ReadyFA_Init' */
    IDCR_ac_B.OutportBufferForOBCM_Charger_ReadyFA_Ini =
        IDCR_ac_ConstB.ConstantValue17_a;

    /* SignalConversion generated from: '<S529>/ChrgEnblOBCM_Init' */
    IDCR_ac_B.OutportBufferForChrgEnblOBCM_Init =
        IDCR_ac_ConstB.ConstantValue56_f;

    /* SignalConversion generated from: '<S529>/ChrgEnblOBCMFA_Init' */
    IDCR_ac_B.OutportBufferForChrgEnblOBCMFA_Init =
        IDCR_ac_ConstB.ConstantValue23_l;

    /* SignalConversion generated from: '<S529>/AC_InputVltOBCM_Init' */
    IDCR_ac_B.OutportBufferForAC_InputVltOBCM_Init =
        IDCR_ac_ConstB.ConstantValue22_h;

    /* SignalConversion generated from: '<S529>/AC_InputVltOBCMFA_Init' */
    IDCR_ac_B.OutportBufferForAC_InputVltOBCMFA_Init =
        IDCR_ac_ConstB.ConstantValue21_n;

    /* SignalConversion generated from: '<S529>/BattSideVolt_Init' */
    IDCR_ac_B.OutportBufferForBattSideVolt_Init =
        IDCR_ac_ConstB.ConstantValue53_c;

    /* SignalConversion generated from: '<S529>/BattSideVoltFA_Init' */
    IDCR_ac_B.OutportBufferForBattSideVoltFA_Init =
        IDCR_ac_ConstB.ConstantValue20_d;

    /* SignalConversion generated from: '<S529>/AC_Side_Curr_Init' */
    IDCR_ac_B.OutportBufferForAC_Side_Curr_Init =
        IDCR_ac_ConstB.ConstantValue52_n;

    /* SignalConversion generated from: '<S529>/AC_Side_CurrFA_Init' */
    IDCR_ac_B.OutportBufferForAC_Side_CurrFA_Init =
        IDCR_ac_ConstB.ConstantValue19_j;

    /* SignalConversion generated from: '<S529>/RdyForChrgFA_Init' */
    IDCR_ac_B.OutportBufferForRdyForChrgFA_Init =
        IDCR_ac_ConstB.ConstantValue25_pq;

    /* SignalConversion generated from: '<S529>/BalMd_Init' */
    IDCR_ac_B.OutportBufferForBalMd_Init = IDCR_ac_ConstB.ConstantValue38_i;

    /* SignalConversion generated from: '<S529>/BalMdFA_Init' */
    IDCR_ac_B.OutportBufferForBalMdFA_Init = IDCR_ac_ConstB.ConstantValue29_pa;

    /* SignalConversion generated from: '<S529>/Pct_SOC_REM_Setpt_Init' */
    IDCR_ac_B.OutportBufferForPct_SOC_REM_Setpt_Init =
        IDCR_ac_ConstB.ConstantValue28_k;

    /* SignalConversion generated from: '<S529>/SOC_REM_SetptFA_Init' */
    IDCR_ac_B.OutportBufferForSOC_REM_SetptFA_Init =
        IDCR_ac_ConstB.ConstantValue12_h;

    /* SignalConversion generated from: '<S529>/ACSideVolt_L2_Init' */
    IDCR_ac_B.OutportBufferForACSideVolt_L2_Init =
        IDCR_ac_ConstB.ConstantValue24_g;

    /* SignalConversion generated from: '<S529>/ACSideVolt_L2FA_Init' */
    IDCR_ac_B.OutportBufferForACSideVolt_L2FA_Init =
        IDCR_ac_ConstB.ConstantValue43_o;

    /* SignalConversion generated from: '<S529>/ACSideVolt_L3_Init' */
    IDCR_ac_B.OutportBufferForACSideVolt_L3_Init =
        IDCR_ac_ConstB.ConstantValue27_k;

    /* SignalConversion generated from: '<S529>/ACSideVolt_L3FA_Init' */
    IDCR_ac_B.OutportBufferForACSideVolt_L3FA_Init =
        IDCR_ac_ConstB.ConstantValue45_f;

    /* SignalConversion generated from: '<S529>/ACSideCurr_L2_Init' */
    IDCR_ac_B.OutportBufferForACSideCurr_L2_Init =
        IDCR_ac_ConstB.ConstantValue40_nx;

    /* SignalConversion generated from: '<S529>/ACSideCurr_L3_Init' */
    IDCR_ac_B.OutportBufferForACSideCurr_L3_Init =
        IDCR_ac_ConstB.ConstantValue42_l;

    /* SignalConversion generated from: '<S529>/OBCM_Chrgr_Rdy' incorporates:
     *  Constant: '<S563>/Constant'
     */
    IDCR_ac_B.OutportBufferForOBCM_Chrgr_Rdy = IDCR_ac_ConstB.Constant_dt;

    /* SignalConversion generated from: '<S529>/OBCM_HVILSts_Init' incorporates:
     *  Constant: '<S580>/Constant'
     */
    IDCR_ac_B.OutportBufferForOBCM_HVILSts_Init = IDCR_ac_ConstB.Constant_lf;

    /* SignalConversion generated from: '<S529>/OBCM_HVILStsFA_Init' */
    IDCR_ac_B.OutportBufferForOBCM_HVILStsFA_Init =
        IDCR_ac_ConstB.ConstantValue44_d;

    /* SignalConversion generated from: '<S529>/EVSer_On_OBCM_Init' */
    IDCR_ac_B.OutportBufferForEVSer_On_OBCM_Init =
        IDCR_ac_ConstB.ConstantValue30_au;

    /* SignalConversion generated from: '<S529>/OBCM_Timeout_Init' */
    IDCR_ac_B.OutportBufferForOBCM_Timeout_Init =
        IDCR_ac_ConstB.ConstantValue46_i;

    /* SignalConversion generated from: '<S529>/OBCM_Timeout_FA_Init' */
    IDCR_ac_B.OutportBufferForOBCM_Timeout_FA_Init =
        IDCR_ac_ConstB.ConstantValue76;

    /* SignalConversion generated from: '<S529>/Chrgr_FaultStates_Init' incorporates:
     *  Constant: '<S577>/Constant'
     */
    IDCR_ac_B.OutportBufferForChrgr_FaultStates_Init =
        IDCR_ac_ConstB.Constant_ap;

    /* SignalConversion generated from: '<S529>/Chrgr_FaultStatesFA_Init' */
    IDCR_ac_B.OutportBufferForChrgr_FaultStatesFA_Init =
        IDCR_ac_ConstB.ConstantValue47_e;

    /* SignalConversion generated from: '<S529>/Prox_GBT_Init' incorporates:
     *  Constant: '<S578>/Constant'
     */
    IDCR_ac_B.OutportBufferForProx_GBT_Init = IDCR_ac_ConstB.Constant_dm;

    /* SignalConversion generated from: '<S529>/TxGBTMsgRequest_Init' incorporates:
     *  Constant: '<S579>/Constant'
     */
    IDCR_ac_B.OutportBufferForTxGBTMsgRequest_Init = IDCR_ac_ConstB.Constant_km;

    /* SignalConversion generated from: '<S529>/TxGBTMsgRequestFA_Init' */
    IDCR_ac_B.OutportBufferForTxGBTMsgRequestFA_Init =
        IDCR_ac_ConstB.ConstantValue48_b;

    /* SignalConversion generated from: '<S529>/TxGBTMsgResponse_Init' incorporates:
     *  Constant: '<S581>/Constant'
     */
    IDCR_ac_B.OutportBufferForTxGBTMsgResponse_Init = IDCR_ac_ConstB.Constant_l;

    /* SignalConversion generated from: '<S529>/TxGBTMsgResponseFA_Init' */
    IDCR_ac_B.OutportBufferForTxGBTMsgResponseFA_Init =
        IDCR_ac_ConstB.ConstantValue49_j;

    /* SignalConversion generated from: '<S529>/GBT_EVSEChrgPermitting_Init' */
    IDCR_ac_B.OutportBufferForGBT_EVSEChrgPermitting_I =
        IDCR_ac_ConstB.ConstantValue50_g;

    /* SignalConversion generated from: '<S529>/OBC_Prox_Init' */
    IDCR_ac_B.OutportBufferForOBC_Prox_Init = IDCR_ac_ConstB.ConstantValue51;

    /* SignalConversion generated from: '<S529>/OBC_ProxFA_Init' */
    IDCR_ac_B.OutportBufferForOBC_ProxFA_Init = IDCR_ac_ConstB.ConstantValue54_n;

    /* SignalConversion generated from: '<S529>/EVSE_Offered_AC_Single_Phase_Init' */
    IDCR_ac_B.OutportBufferForEVSE_Offered_AC_Single_P =
        IDCR_ac_ConstB.ConstantValue55_m;

    /* SignalConversion generated from: '<S529>/EVSE_Offered_AC_Single_Phase_FA_Init' */
    IDCR_ac_B.OutportBufferForEVSE_Offered_AC_Single_d =
        IDCR_ac_ConstB.ConstantValue58_k;

    /* SignalConversion generated from: '<S529>/EVSE_Offered_AC_Three_Phase_Init' */
    IDCR_ac_B.OutportBufferForEVSE_Offered_AC_Three_Ph =
        IDCR_ac_ConstB.ConstantValue60_h;

    /* SignalConversion generated from: '<S529>/EVSE_Offered_AC_Three_Phase_FA_Init' */
    IDCR_ac_B.OutportBufferForEVSE_Offered_AC_Three__p =
        IDCR_ac_ConstB.ConstantValue61_n;

    /* SignalConversion generated from: '<S529>/EVSE_Offered_DC_Extended_Init' */
    IDCR_ac_B.OutportBufferForEVSE_Offered_DC_Extended =
        IDCR_ac_ConstB.ConstantValue62_c;

    /* SignalConversion generated from: '<S529>/EVSE_Offered_DC_Extended_FA_Init' */
    IDCR_ac_B.OutportBufferForEVSE_Offered_DC_Extend_f =
        IDCR_ac_ConstB.ConstantValue63_h;

    /* SignalConversion generated from: '<S529>/EVSE_Service1_Charging_Init' */
    IDCR_ac_B.OutportBufferForEVSE_Service1_Charging_I =
        IDCR_ac_ConstB.ConstantValue64_b;

    /* SignalConversion generated from: '<S529>/EVSE_Service1_Charging_FA_Init' */
    IDCR_ac_B.OutportBufferForEVSE_Service1_Charging_F =
        IDCR_ac_ConstB.ConstantValue65_l;

    /* SignalConversion generated from: '<S529>/EVSE_Service1_Free_Init' */
    IDCR_ac_B.OutportBufferForEVSE_Service1_Free_Init =
        IDCR_ac_ConstB.ConstantValue66_g;

    /* SignalConversion generated from: '<S529>/EVSE_Service1_Free_FA_Init' */
    IDCR_ac_B.OutportBufferForEVSE_Service1_Free_FA_In =
        IDCR_ac_ConstB.ConstantValue67_n;

    /* SignalConversion generated from: '<S529>/ISO15118_EVSETimeStamp_Init' */
    IDCR_ac_B.OutportBufferForISO15118_EVSETimeStamp_I =
        IDCR_ac_ConstB.ConstantValue68;

    /* SignalConversion generated from: '<S529>/ISO15118_EVSETimeStamp_FA_Init' */
    IDCR_ac_B.OutportBufferForISO15118_EVSETimeStamp_F =
        IDCR_ac_ConstB.ConstantValue69_g;

    /* SignalConversion generated from: '<S529>/ISO15118_MessageResponse_Init' incorporates:
     *  Constant: '<S564>/Constant'
     */
    IDCR_ac_B.OutportBufferForISO15118_MessageRespon_b =
        IDCR_ac_ConstB.Constant_jg;

    /* SignalConversion generated from: '<S529>/ISO15118_MessageResponse_FA_Init' */
    IDCR_ac_B.OutportBufferForISO15118_MessageResponse =
        IDCR_ac_ConstB.ConstantValue70_l;

    /* SignalConversion generated from: '<S529>/EVSE_Accepted_Protocol_Init' */
    IDCR_ac_B.OutportBufferForEVSE_Accepted_Protocol_I =
        IDCR_ac_ConstB.ConstantValue71;

    /* SignalConversion generated from: '<S529>/EVSE_Accepted_ProtocolFA_Init' */
    IDCR_ac_B.OutportBufferForEVSE_Accepted_ProtocolFA =
        IDCR_ac_ConstB.ConstantValue72_j;

    /* SignalConversion generated from: '<S529>/EVSE_OfferedService_Init' incorporates:
     *  Constant: '<S565>/Constant'
     */
    IDCR_ac_B.OutportBufferForEVSE_OfferedService_Init =
        IDCR_ac_ConstB.Constant_k1;

    /* SignalConversion generated from: '<S529>/EVSE_OfferedService_FA_Init' */
    IDCR_ac_B.OutportBufferForEVSE_OfferedService_FA_I =
        IDCR_ac_ConstB.ConstantValue73_k;

    /* SignalConversion generated from: '<S529>/EVSE_ChrgStopControl_Init' incorporates:
     *  Constant: '<S566>/Constant'
     */
    IDCR_ac_B.OutportBufferForEVSE_ChrgStopControl_Ini =
        IDCR_ac_ConstB.Constant_pe;

    /* SignalConversion generated from: '<S529>/EVSE_ChrgStopControl_FA_Init' */
    IDCR_ac_B.OutportBufferForEVSE_ChrgStopControl_FA_ =
        IDCR_ac_ConstB.ConstantValue74;

    /* SignalConversion generated from: '<S529>/EVSE_Error_Init' incorporates:
     *  Constant: '<S567>/Constant'
     */
    IDCR_ac_B.OutportBufferForEVSE_Error_Init = IDCR_ac_ConstB.Constant_m2;

    /* SignalConversion generated from: '<S529>/EVSE_Error_FA_Init' */
    IDCR_ac_B.OutportBufferForEVSE_Error_FA_Init =
        IDCR_ac_ConstB.ConstantValue75;

    /* SignalConversion generated from: '<S529>/IDCM_GFCI_Fault_Status_Init' */
    IDCR_ac_B.OutportBufferForIDCM_GFCI_Fault_Status_I =
        IDCR_ac_ConstB.ConstantValue77;

    /* SignalConversion generated from: '<S529>/IDCM_GFCI_Fault_Status_FA_Init' */
    IDCR_ac_B.OutportBufferForIDCM_GFCI_Fault_Status_F =
        IDCR_ac_ConstB.ConstantValue78;

    /* SignalConversion generated from: '<S529>/Charger_WeldingDetectAvail_Init' incorporates:
     *  Constant: '<S568>/Constant'
     */
    IDCR_ac_B.OutportBufferForCharger_WeldingDetectA_m =
        IDCR_ac_ConstB.Constant_g;

    /* SignalConversion generated from: '<S529>/Charger_WeldingDetectAvail_FA_Init' */
    IDCR_ac_B.OutportBufferForCharger_WeldingDetectAva =
        IDCR_ac_ConstB.ConstantValue79;

    /* SignalConversion generated from: '<S529>/ExtChargerSts_Init' incorporates:
     *  Constant: '<S569>/Constant'
     */
    IDCR_ac_B.OutportBufferForExtChargerSts_Init = IDCR_ac_ConstB.Constant_ao;

    /* SignalConversion generated from: '<S529>/ExtChargerSts_FA_Init' */
    IDCR_ac_B.OutportBufferForExtChargerSts_FA_Init =
        IDCR_ac_ConstB.ConstantValue80;

    /* SignalConversion generated from: '<S529>/OBCM_CP1Sts_Init' incorporates:
     *  Constant: '<S570>/Constant'
     */
    IDCR_ac_B.OutportBufferForOBCM_CP1Sts_Init = IDCR_ac_ConstB.Constant_ex;

    /* SignalConversion generated from: '<S529>/OBCM_CP1Sts_FA_Init' */
    IDCR_ac_B.OutportBufferForOBCM_CP1Sts_FA_Init =
        IDCR_ac_ConstB.ConstantValue81;

    /* SignalConversion generated from: '<S529>/OBCM_CP2Sts_Init' incorporates:
     *  Constant: '<S571>/Constant'
     */
    IDCR_ac_B.OutportBufferForOBCM_CP2Sts_Init = IDCR_ac_ConstB.Constant_i1;

    /* SignalConversion generated from: '<S529>/OBCM_CP2Sts_FA_Init' */
    IDCR_ac_B.OutportBufferForOBCM_CP2Sts_FA_Init =
        IDCR_ac_ConstB.ConstantValue82;

    /* SignalConversion generated from: '<S529>/OBCM_CP3Sts_Init' incorporates:
     *  Constant: '<S572>/Constant'
     */
    IDCR_ac_B.OutportBufferForOBCM_CP3Sts_Init = IDCR_ac_ConstB.Constant_dw;

    /* SignalConversion generated from: '<S529>/OBCM_CP3Sts_FA_Init' */
    IDCR_ac_B.OutportBufferForOBCM_CP3Sts_FA_Init =
        IDCR_ac_ConstB.ConstantValue83;

    /* SignalConversion generated from: '<S529>/OBCM_CSSts_Init' incorporates:
     *  Constant: '<S573>/Constant'
     */
    IDCR_ac_B.OutportBufferForOBCM_CSSts_Init = IDCR_ac_ConstB.Constant_ml;

    /* SignalConversion generated from: '<S529>/OBCM_CSSts_FA_Init' */
    IDCR_ac_B.OutportBufferForOBCM_CSSts_FA_Init =
        IDCR_ac_ConstB.ConstantValue84;

    /* SignalConversion generated from: '<S529>/V2X_EVSE_Service_5_Free_Init' */
    IDCR_ac_B.OutportBufferForV2X_EVSE_Service_5_Free_ =
        IDCR_ac_ConstB.ConstantValue85;

    /* SignalConversion generated from: '<S529>/V2X_EVSE_Service_5_Free_FA_Init' */
    IDCR_ac_B.OutportBufferForV2X_EVSE_Service_5_Fre_j =
        IDCR_ac_ConstB.ConstantValue86;

    /* SignalConversion generated from: '<S529>/IDCM_Wakeup_HCP_Init' */
    IDCR_ac_B.OutportBufferForIDCM_Wakeup_HCP_Init =
        IDCR_ac_ConstB.ConstantValue87;

    /* SignalConversion generated from: '<S529>/IDCM_Wakeup_HCP_FA_Init' */
    IDCR_ac_B.OutportBufferForIDCM_Wakeup_HCP_FA_Init =
        IDCR_ac_ConstB.ConstantValue88;

    /* SignalConversion generated from: '<S529>/DC_Isolation_Disable_Cmd_Init' */
    IDCR_ac_B.OutportBufferForDC_Isolation_Disable_Cmd =
        IDCR_ac_ConstB.ConstantValue89;

    /* SignalConversion generated from: '<S529>/DC_Isolation_Disable_Cmd_FA_Init' */
    IDCR_ac_B.OutportBufferForDC_Isolation_Disable_C_b =
        IDCR_ac_ConstB.ConstantValue90;

    /* SignalConversion generated from: '<S529>/V2X_EVSE_Service_5_V2H_Init' */
    IDCR_ac_B.OutportBufferForV2X_EVSE_Service_5_V2H_I =
        IDCR_ac_ConstB.ConstantValue91;

    /* SignalConversion generated from: '<S529>/V2X_EVSE_Service_5_V2H_FA_Init' */
    IDCR_ac_B.OutportBufferForV2X_EVSE_Service_5_V2H_F =
        IDCR_ac_ConstB.ConstantValue92;

    /* SignalConversion generated from: '<S529>/HVCMS_EVSEID_Init' */
    IDCR_ac_B.OutportBufferForHVCMS_EVSEID_Init = IDCR_ac_ConstB.ConstantValue93;

    /* SignalConversion generated from: '<S529>/HVCMS_EVSEID_FA_Init' */
    IDCR_ac_B.OutportBufferForHVCMS_EVSEID_FA_Init =
        IDCR_ac_ConstB.ConstantValue94;

    /* S-Function (fcgen): '<S150>/FcnCallGen' incorporates:
     *  SubSystem: '<S150>/APM_Interface__InitBlock'
     */
    /* SignalConversion generated from: '<S526>/IDCRgSPDtyCycReq_Init' */
    IDCR_ac_B.OutportBufferForIDCRgSPDtyCycReq_Init =
        IDCR_ac_ConstB.ConstantValue24;

    /* SignalConversion generated from: '<S526>/APM_HeatPlateTemp_Init' incorporates:
     *  Constant: '<S547>/Calib'
     */
    IDCR_ac_B.OutportBufferForAPM_HeatPlateTemp_Init =
        KeIDCR_T_APM_HeatPlateTempDflt;

    /* SignalConversion generated from: '<S526>/APM_HeatPlateTempFA_Init' */
    IDCR_ac_B.OutportBufferForAPM_HeatPlateTempFA_Init =
        IDCR_ac_ConstB.ConstantValue31_d;

    /* SignalConversion generated from: '<S526>/APM_LvIsetPFdbk_Init' */
    IDCR_ac_B.OutportBufferForAPM_LvIsetPFdbk_Init =
        IDCR_ac_ConstB.ConstantValue27;

    /* SignalConversion generated from: '<S526>/APM_LvIsetPFdbkFA_Init' */
    IDCR_ac_B.OutportBufferForAPM_LvIsetPFdbkFA_Init =
        IDCR_ac_ConstB.ConstantValue32_o;

    /* SignalConversion generated from: '<S526>/IdcHvSetPFdbk_Init' */
    IDCR_ac_B.OutportBufferForIdcHvSetPFdbk_Init = IDCR_ac_ConstB.ConstantValue1;

    /* SignalConversion generated from: '<S526>/IdcHvSetPFdbkFA_Init' */
    IDCR_ac_B.OutportBufferForIdcHvSetPFdbkFA_Init =
        IDCR_ac_ConstB.ConstantValue33_i;

    /* SignalConversion generated from: '<S526>/APM_HV_Voltage_Init' */
    IDCR_ac_B.OutportBufferForAPM_HV_Voltage_Init =
        IDCR_ac_ConstB.ConstantValue2_j;

    /* SignalConversion generated from: '<S526>/APM_HV_VoltageFA_Init' */
    IDCR_ac_B.OutportBufferForAPM_HV_VoltageFA_Init =
        IDCR_ac_ConstB.ConstantValue3_k;

    /* SignalConversion generated from: '<S526>/APM_HvVsetPFdbk_Init' */
    IDCR_ac_B.OutportBufferForAPM_HvVsetPFdbk_Init =
        IDCR_ac_ConstB.ConstantValue30;

    /* SignalConversion generated from: '<S526>/APM_OutputPower_Init' */
    IDCR_ac_B.OutportBufferForAPM_OutputPower_Init =
        IDCR_ac_ConstB.ConstantValue4_c;

    /* SignalConversion generated from: '<S526>/APM_OutputPowerFA_Init' */
    IDCR_ac_B.OutportBufferForAPM_OutputPowerFA_Init =
        IDCR_ac_ConstB.ConstantValue5_a;

    /* SignalConversion generated from: '<S526>/APM_InputPower_Init' */
    IDCR_ac_B.OutportBufferForAPM_InputPower_Init =
        IDCR_ac_ConstB.ConstantValue34;

    /* SignalConversion generated from: '<S526>/APM_InputPowerFA_Init' */
    IDCR_ac_B.OutportBufferForAPM_InputPowerFA_Init =
        IDCR_ac_ConstB.ConstantValue11_b;

    /* SignalConversion generated from: '<S526>/APM_HV_Current_Init' */
    IDCR_ac_B.OutportBufferForAPM_HV_Current_Init =
        IDCR_ac_ConstB.ConstantValue37;

    /* SignalConversion generated from: '<S526>/APM_HV_CurrentFA_Init' */
    IDCR_ac_B.OutportBufferForAPM_HV_CurrentFA_Init =
        IDCR_ac_ConstB.ConstantValue10_p;

    /* SignalConversion generated from: '<S526>/APM_LV_Voltage_Init' */
    IDCR_ac_B.OutportBufferForAPM_LV_Voltage_Init =
        IDCR_ac_ConstB.ConstantValue26_a;

    /* SignalConversion generated from: '<S526>/APM_LV_VoltageFA_Init' */
    IDCR_ac_B.OutportBufferForAPM_LV_VoltageFA_Init =
        IDCR_ac_ConstB.ConstantValue9_m;

    /* SignalConversion generated from: '<S526>/APM_LV_Current_Init' */
    IDCR_ac_B.OutportBufferForAPM_LV_Current_Init =
        IDCR_ac_ConstB.ConstantValue35;

    /* SignalConversion generated from: '<S526>/APM_LV_CurrentFA_Init' */
    IDCR_ac_B.OutportBufferForAPM_LV_CurrentFA_Init =
        IDCR_ac_ConstB.ConstantValue8_b;

    /* SignalConversion generated from: '<S526>/APM_PwrLoss_Init' */
    IDCR_ac_B.OutportBufferForAPM_PwrLoss_Init =
        IDCR_ac_ConstB.ConstantValue18_d;

    /* SignalConversion generated from: '<S526>/APM_PwrLossFA_Init' */
    IDCR_ac_B.OutportBufferForAPM_PwrLossFA_Init =
        IDCR_ac_ConstB.ConstantValue7_c;

    /* SignalConversion generated from: '<S526>/EVRDesVSetP_Init' */
    IDCR_ac_B.OutportBufferForEVRDesVSetP_Init = IDCR_ac_ConstB.ConstantValue41;

    /* SignalConversion generated from: '<S526>/EVRDesVSetPFA_Init' */
    IDCR_ac_B.OutportBufferForEVRDesVSetPFA_Init =
        IDCR_ac_ConstB.ConstantValue6_p;

    /* SignalConversion generated from: '<S526>/VdcHvFdbk_Init' */
    IDCR_ac_B.OutportBufferForVdcHvFdbk_Init = IDCR_ac_ConstB.ConstantValue36_m;

    /* SignalConversion generated from: '<S526>/stModeRqAPM_Init' incorporates:
     *  Constant: '<S541>/Constant'
     */
    IDCR_ac_B.OutportBufferForstModeRqAPM_Init = IDCR_ac_ConstB.Constant_d4;

    /* SignalConversion generated from: '<S526>/APM_DeratingReason_Init' */
    IDCR_ac_B.OutportBufferForAPM_DeratingReason_Init =
        IDCR_ac_ConstB.ConstantValue39;

    /* SignalConversion generated from: '<S526>/APM_OutletCoolantTemp_Init' */
    IDCR_ac_B.OutportBufferForAPM_OutletCoolantTemp_In =
        IDCR_ac_ConstB.ConstantValue40_n;

    /* SignalConversion generated from: '<S526>/APM_DeratingPower_Init' */
    IDCR_ac_B.OutportBufferForAPM_DeratingPower_Init =
        IDCR_ac_ConstB.ConstantValue14_e;

    /* SignalConversion generated from: '<S526>/APM_FailureModeStatus_Init' incorporates:
     *  Constant: '<S540>/Constant'
     */
    IDCR_ac_B.OutportBufferForAPM_FailureModeStatus_In =
        IDCR_ac_ConstB.Constant_hk;

    /* SignalConversion generated from: '<S526>/APM_DeratingModeStatus_Init' incorporates:
     *  Constant: '<S543>/Constant'
     */
    IDCR_ac_B.OutportBufferForAPM_DeratingModeStatus_I =
        IDCR_ac_ConstB.Constant_ar;

    /* SignalConversion generated from: '<S526>/APM_FailureReason_Init' incorporates:
     *  Constant: '<S539>/Constant'
     */
    IDCR_ac_B.OutportBufferForAPM_FailureReason_Init =
        IDCR_ac_ConstB.Constant_ab;

    /* SignalConversion generated from: '<S526>/IBS_BattTemp_Init' */
    IDCR_ac_B.OutportBufferForIBS_BattTemp_Init =
        IDCR_ac_ConstB.ConstantValue42_m;

    /* SignalConversion generated from: '<S526>/IBS_BattTempSts_Init' incorporates:
     *  Constant: '<S542>/Constant'
     */
    IDCR_ac_B.OutportBufferForIBS_BattTempSts_Init = IDCR_ac_ConstB.Constant_og;

    /* SignalConversion generated from: '<S526>/IBS_BattVolt_Init' */
    IDCR_ac_B.OutportBufferForIBS_BattVolt_Init = IDCR_ac_ConstB.ConstantValue43;

    /* SignalConversion generated from: '<S526>/IBS_BattVoltSts_Init' */
    IDCR_ac_B.OutportBufferForIBS_BattVoltSts_Init =
        IDCR_ac_ConstB.ConstantValue23_a;

    /* SignalConversion generated from: '<S526>/IBS_BattSOC_Init' */
    IDCR_ac_B.OutportBufferForIBS_BattSOC_Init =
        IDCR_ac_ConstB.ConstantValue22_d;

    /* SignalConversion generated from: '<S526>/IBS_BattSocAcc_Init' */
    IDCR_ac_B.OutportBufferForIBS_BattSocAcc_Init =
        IDCR_ac_ConstB.ConstantValue58;

    /* SignalConversion generated from: '<S526>/IBS2_BattTemp_Init' */
    IDCR_ac_B.OutportBufferForIBS2_BattTemp_Init =
        IDCR_ac_ConstB.ConstantValue53;

    /* SignalConversion generated from: '<S526>/APMTemp1_Init' */
    IDCR_ac_B.OutportBufferForAPMTemp1_Init = IDCR_ac_ConstB.ConstantValue20_g;

    /* SignalConversion generated from: '<S526>/APMTemp1_FA_Init' */
    IDCR_ac_B.OutportBufferForAPMTemp1_FA_Init =
        IDCR_ac_ConstB.ConstantValue44_ey;

    /* SignalConversion generated from: '<S526>/APMTemp2_Init' */
    IDCR_ac_B.OutportBufferForAPMTemp2_Init = IDCR_ac_ConstB.ConstantValue19_b;

    /* SignalConversion generated from: '<S526>/APMTemp2_FA_Init' */
    IDCR_ac_B.OutportBufferForAPMTemp2_FA_Init =
        IDCR_ac_ConstB.ConstantValue25_p;

    /* SignalConversion generated from: '<S526>/UtilPctOfDCDC_Init' */
    IDCR_ac_B.OutportBufferForUtilPctOfDCDC_Init =
        IDCR_ac_ConstB.ConstantValue45;

    /* SignalConversion generated from: '<S526>/UtilPctOfDCDC_FA_Init' */
    IDCR_ac_B.OutportBufferForUtilPctOfDCDC_FA_Init =
        IDCR_ac_ConstB.ConstantValue29_d;

    /* SignalConversion generated from: '<S526>/HvTooHighIStatus_Init' */
    IDCR_ac_B.OutportBufferForHvTooHighIStatus_Init =
        IDCR_ac_ConstB.ConstantValue12_eu;

    /* SignalConversion generated from: '<S526>/HvTooLowVStatus_Init' */
    IDCR_ac_B.OutportBufferForHvTooLowVStatus_Init =
        IDCR_ac_ConstB.ConstantValue28_o;

    /* SignalConversion generated from: '<S526>/HvOverVStatus_Init' */
    IDCR_ac_B.OutportBufferForHvOverVStatus_Init =
        IDCR_ac_ConstB.ConstantValue48_a;

    /* SignalConversion generated from: '<S526>/LvTooHighIStatus_Init' */
    IDCR_ac_B.OutportBufferForLvTooHighIStatus_Init =
        IDCR_ac_ConstB.ConstantValue38_m;

    /* SignalConversion generated from: '<S526>/LvTooLowVStatus_Init' */
    IDCR_ac_B.OutportBufferForLvTooLowVStatus_Init =
        IDCR_ac_ConstB.ConstantValue46_e;

    /* SignalConversion generated from: '<S526>/LvHighVStatus_Init' */
    IDCR_ac_B.OutportBufferForLvHighVStatus_Init =
        IDCR_ac_ConstB.ConstantValue47_c;

    /* SignalConversion generated from: '<S526>/APMFailureType' incorporates:
     *  Constant: '<S538>/Constant'
     */
    IDCR_ac_B.OutportBufferForAPMFailureType = IDCR_ac_ConstB.Constant_a5;

    /* SignalConversion generated from: '<S526>/IBS_BattTemp_FA_Init' */
    IDCR_ac_B.OutportBufferForIBS_BattTemp_FA_Init =
        IDCR_ac_ConstB.ConstantValue13_h;

    /* SignalConversion generated from: '<S526>/IBS_BattTemp_SgnlRcvd_Init' */
    IDCR_ac_B.OutportBufferForIBS_BattTemp_SgnlRcvd_In =
        IDCR_ac_ConstB.ConstantValue15_m;

    /* SignalConversion generated from: '<S526>/IBS_Volt_FA_Init' */
    IDCR_ac_B.OutportBufferForIBS_Volt_FA_Init =
        IDCR_ac_ConstB.ConstantValue16_dz;

    /* SignalConversion generated from: '<S526>/IBS_BattTemp_SOC_FA_Init' */
    IDCR_ac_B.OutportBufferForIBS_BattTemp_SOC_FA_Init =
        IDCR_ac_ConstB.ConstantValue17_o;

    /* SignalConversion generated from: '<S526>/APM_HvVsetPFdbk_FA_Init' */
    IDCR_ac_B.OutportBufferForAPM_HvVsetPFdbk_FA_Init =
        IDCR_ac_ConstB.ConstantValue49_a;

    /* SignalConversion generated from: '<S526>/IBS_I_Batt_Init' */
    IDCR_ac_B.OutportBufferForIBS_I_Batt_Init = IDCR_ac_ConstB.ConstantValue52_d;

    /* SignalConversion generated from: '<S526>/IBS_I_Batt_FA_Init' */
    IDCR_ac_B.OutportBufferForIBS_I_Batt_FA_Init =
        IDCR_ac_ConstB.ConstantValue54_d;

    /* SignalConversion generated from: '<S526>/IBS_I_Batt_SnglRcvd_Init' */
    IDCR_ac_B.OutportBufferForIBS_I_Batt_SnglRcvd_Init =
        IDCR_ac_ConstB.ConstantValue55_g;

    /* SignalConversion generated from: '<S526>/IBS_I_Batt_2_Init' */
    IDCR_ac_B.OutportBufferForIBS_I_Batt_2_Init =
        IDCR_ac_ConstB.ConstantValue50_c;

    /* SignalConversion generated from: '<S526>/IBS_I_Batt_2_FA_Init' */
    IDCR_ac_B.OutportBufferForIBS_I_Batt_2_FA_Init =
        IDCR_ac_ConstB.ConstantValue60;

    /* SignalConversion generated from: '<S526>/IBS_I_Batt_2_SnglRcvd_Init' */
    IDCR_ac_B.OutportBufferForIBS_I_Batt_2_SnglRcvd_In =
        IDCR_ac_ConstB.ConstantValue61;

    /* SignalConversion generated from: '<S526>/IBS_I_RANGE_Init' incorporates:
     *  Constant: '<S545>/Constant'
     */
    IDCR_ac_B.OutportBufferForIBS_I_RANGE_Init = IDCR_ac_ConstB.Constant_ov;

    /* SignalConversion generated from: '<S526>/IBS_I_RANGE_FA_Init' */
    IDCR_ac_B.OutportBufferForIBS_I_RANGE_FA_Init =
        IDCR_ac_ConstB.ConstantValue56_l;

    /* SignalConversion generated from: '<S526>/IBS_Current_Status_Init' incorporates:
     *  Constant: '<S546>/Constant'
     */
    IDCR_ac_B.OutportBufferForIBS_Current_Status_Init =
        IDCR_ac_ConstB.Constant_mgm;

    /* SignalConversion generated from: '<S526>/IBS_Current_Status_FA_Init' */
    IDCR_ac_B.OutportBufferForIBS_Current_Status_FA_In =
        IDCR_ac_ConstB.ConstantValue57_h;

    /* SignalConversion generated from: '<S526>/DVC_APMSts_Init' incorporates:
     *  Constant: '<S544>/Constant'
     */
    IDCR_ac_B.OutportBufferForDVC_APMSts_Init = IDCR_ac_ConstB.Constant_j;

    /* SignalConversion generated from: '<S526>/APMSts_Init' */
    IDCR_ac_B.OutportBufferForAPMSts_Init = IDCR_ac_ConstB.ConstantValue51_j;

    /* SignalConversion generated from: '<S526>/APM2InterlockSts_Init' incorporates:
     *  Constant: '<S533>/Constant'
     */
    IDCR_ac_B.OutportBufferForAPM2InterlockSts_Init = IDCR_ac_ConstB.Constant_lt;

    /* SignalConversion generated from: '<S526>/APM2InterlockSts_FA_Init' */
    IDCR_ac_B.OutportBufferForAPM2InterlockSts_FA_Init = IDCR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S526>/APM3InterlockSts_Init' incorporates:
     *  Constant: '<S534>/Constant'
     */
    IDCR_ac_B.OutportBufferForAPM3InterlockSts_Init = IDCR_ac_ConstB.Constant_pj;

    /* SignalConversion generated from: '<S526>/APM3InterlockSts_FA_Init' */
    IDCR_ac_B.OutportBufferForAPM3InterlockSts_FA_Init =
        IDCR_ac_ConstB.Constant1;

    /* SignalConversion generated from: '<S526>/APM_ThermalRunaway_Init' incorporates:
     *  Constant: '<S535>/Constant'
     */
    IDCR_ac_B.OutportBufferForAPM_ThermalRunaway_Init =
        IDCR_ac_ConstB.Constant_ij;

    /* SignalConversion generated from: '<S526>/APMFailureType_FA_Init' */
    IDCR_ac_B.OutportBufferForAPMFailureType_FA_Init = IDCR_ac_ConstB.Constant2;

    /* SignalConversion generated from: '<S526>/ISO15118_NotificationMaxDelay_Init' */
    IDCR_ac_B.OutportBufferForISO15118_NotificationMax =
        IDCR_ac_ConstB.ConstantValue21_c;

    /* SignalConversion generated from: '<S526>/ISO15118_NotificationMaxDelay_FA_Init' */
    IDCR_ac_B.OutportBufferForISO15118_NotificationM_l =
        IDCR_ac_ConstB.ConstantValue59_p;

    /* SignalConversion generated from: '<S526>/ISO15118_ResponseCode_Init' incorporates:
     *  Constant: '<S536>/Constant'
     */
    IDCR_ac_B.OutportBufferForISO15118_ResponseCode_In =
        IDCR_ac_ConstB.Constant_dq;

    /* SignalConversion generated from: '<S526>/ISO15118_ResponseCode_FA_Init' */
    IDCR_ac_B.OutportBufferForISO15118_ResponseCode_FA =
        IDCR_ac_ConstB.Constant3;

    /* SignalConversion generated from: '<S526>/ISO15118_SAScheduleTupleID_Init' */
    IDCR_ac_B.OutportBufferForISO15118_SAScheduleTuple =
        IDCR_ac_ConstB.ConstantValue62;

    /* SignalConversion generated from: '<S526>/ISO15118_SAScheduleTupleID_FA_Init' */
    IDCR_ac_B.OutportBufferForISO15118_SAScheduleTup_d =
        IDCR_ac_ConstB.ConstantValue63;

    /* SignalConversion generated from: '<S526>/ISO15118_SchemaID_Init' */
    IDCR_ac_B.OutportBufferForISO15118_SchemaID_Init =
        IDCR_ac_ConstB.ConstantValue64;

    /* SignalConversion generated from: '<S526>/ISO15118_SchemaID_FA_Init' */
    IDCR_ac_B.OutportBufferForISO15118_SchemaID_FA_Ini =
        IDCR_ac_ConstB.ConstantValue65;

    /* SignalConversion generated from: '<S526>/ISO15118_ServiceID_Init' */
    IDCR_ac_B.OutportBufferForISO15118_ServiceID_Init =
        IDCR_ac_ConstB.ConstantValue66;

    /* SignalConversion generated from: '<S526>/ISO15118_ServiceID_FA_Init' */
    IDCR_ac_B.OutportBufferForISO15118_ServiceID_FA_In =
        IDCR_ac_ConstB.ConstantValue67;

    /* SignalConversion generated from: '<S526>/ISO15118_TLS_Offered_Init' */
    IDCR_ac_B.OutportBufferForISO15118_TLS_Offered_Ini =
        IDCR_ac_ConstB.ConstantValue68_h;

    /* SignalConversion generated from: '<S526>/ISO15118_TLS_Offered_FA_Init' */
    IDCR_ac_B.OutportBufferForISO15118_TLS_Offered_FA_ =
        IDCR_ac_ConstB.ConstantValue69;

    /* SignalConversion generated from: '<S526>/ISO15118_TLS_Status_Init' incorporates:
     *  Constant: '<S537>/Constant'
     */
    IDCR_ac_B.OutportBufferForISO15118_TLS_Status_Init =
        IDCR_ac_ConstB.Constant_b;

    /* SignalConversion generated from: '<S526>/ISO15118_TLS_Status_FA_Init' */
    IDCR_ac_B.OutportBufferForISO15118_TLS_Status_FA_I =
        IDCR_ac_ConstB.Constant4;

    /* SignalConversion generated from: '<S526>/ISO15118_VersionNumMajor_Init' */
    IDCR_ac_B.OutportBufferForISO15118_VersionNumMajor =
        IDCR_ac_ConstB.ConstantValue70;

    /* SignalConversion generated from: '<S526>/ISO15118_VersionNumMajor_FA_Init' */
    IDCR_ac_B.OutportBufferForISO15118_VersionNumMaj_f =
        IDCR_ac_ConstB.ConstantValue71_i;

    /* SignalConversion generated from: '<S526>/ISO15118_VersionNumMinor_Init' */
    IDCR_ac_B.OutportBufferForISO15118_VersionNumMinor =
        IDCR_ac_ConstB.ConstantValue72;

    /* SignalConversion generated from: '<S526>/ISO15118_VersionNumMinor_FA_Init' */
    IDCR_ac_B.OutportBufferForISO15118_VersionNumMin_e =
        IDCR_ac_ConstB.ConstantValue73;

    /* S-Function (fcgen): '<S150>/FcnCallGen' incorporates:
     *  SubSystem: '<S150>/EVCC__InitBlock'
     */
    /* SignalConversion generated from: '<S527>/DC_TimeOut' */
    IDCR_ac_B.OutportBufferForDC_TimeOut = IDCR_ac_ConstB.ConstantValue2_k;

    /* SignalConversion generated from: '<S527>/EVSECurrLmtAchvd' */
    IDCR_ac_B.OutportBufferForEVSECurrLmtAchvd = IDCR_ac_ConstB.ConstantValue1_c;

    /* SignalConversion generated from: '<S527>/EVSEOutputCurr' */
    IDCR_ac_B.OutportBufferForEVSEOutputCurr = IDCR_ac_ConstB.ConstantValue;

    /* SignalConversion generated from: '<S527>/EVSEOutputCurr_FA' */
    IDCR_ac_B.OutportBufferForEVSEOutputCurr_FA =
        IDCR_ac_ConstB.ConstantValue3_b;

    /* SignalConversion generated from: '<S527>/EVSEOutputVolt' */
    IDCR_ac_B.OutportBufferForEVSEOutputVolt = IDCR_ac_ConstB.ConstantValue4_k;

    /* SignalConversion generated from: '<S527>/EVSEOutputVolt_FA' */
    IDCR_ac_B.OutportBufferForEVSEOutputVolt_FA =
        IDCR_ac_ConstB.ConstantValue5_d;

    /* SignalConversion generated from: '<S527>/EVSEPwrLmtAchvd' */
    IDCR_ac_B.OutportBufferForEVSEPwrLmtAchvd = IDCR_ac_ConstB.ConstantValue6_i;

    /* SignalConversion generated from: '<S527>/EVSEVoltLmtAchvd' */
    IDCR_ac_B.OutportBufferForEVSEVoltLmtAchvd = IDCR_ac_ConstB.ConstantValue7_i;

    /* SignalConversion generated from: '<S527>/EVSE_EnrgyToBeDlvrd' */
    IDCR_ac_B.OutportBufferForEVSE_EnrgyToBeDlvrd =
        IDCR_ac_ConstB.ConstantValue8;

    /* SignalConversion generated from: '<S527>/EVSE_EnrgyToBeDlvrd_FA' */
    IDCR_ac_B.OutportBufferForEVSE_EnrgyToBeDlvrd_FA =
        IDCR_ac_ConstB.ConstantValue9_h;

    /* SignalConversion generated from: '<S527>/EVSEMaxPwrLmt' */
    IDCR_ac_B.OutportBufferForEVSEMaxPwrLmt = IDCR_ac_ConstB.ConstantValue10;

    /* SignalConversion generated from: '<S527>/EVSEMaxPwrLmt_FA' */
    IDCR_ac_B.OutportBufferForEVSEMaxPwrLmt_FA =
        IDCR_ac_ConstB.ConstantValue11_p;

    /* SignalConversion generated from: '<S527>/EVSECurr_RegTol' */
    IDCR_ac_B.OutportBufferForEVSECurr_RegTol = IDCR_ac_ConstB.ConstantValue12;

    /* SignalConversion generated from: '<S527>/EVSECurr_RegTol_FA' */
    IDCR_ac_B.OutportBufferForEVSECurr_RegTol_FA =
        IDCR_ac_ConstB.ConstantValue13_j;

    /* SignalConversion generated from: '<S527>/EVSEPeakCurrRip' */
    IDCR_ac_B.OutportBufferForEVSEPeakCurrRip = IDCR_ac_ConstB.ConstantValue14;

    /* SignalConversion generated from: '<S527>/EVSEPeakCurrRip_FA' */
    IDCR_ac_B.OutportBufferForEVSEPeakCurrRip_FA =
        IDCR_ac_ConstB.ConstantValue15_ay;

    /* SignalConversion generated from: '<S527>/EVSEMaxCurrLmt' */
    IDCR_ac_B.OutportBufferForEVSEMaxCurrLmt = IDCR_ac_ConstB.ConstantValue16;

    /* SignalConversion generated from: '<S527>/EVSEMaxCurrLmt_FA' */
    IDCR_ac_B.OutportBufferForEVSEMaxCurrLmt_FA =
        IDCR_ac_ConstB.ConstantValue17_n;

    /* SignalConversion generated from: '<S527>/EVSEMaxVoltLmt' */
    IDCR_ac_B.OutportBufferForEVSEMaxVoltLmt = IDCR_ac_ConstB.ConstantValue18;

    /* SignalConversion generated from: '<S527>/EVSEMaxVoltLmt_FA' */
    IDCR_ac_B.OutportBufferForEVSEMaxVoltLmt_FA =
        IDCR_ac_ConstB.ConstantValue19_p;

    /* SignalConversion generated from: '<S527>/EVSEMinCurrLmt' */
    IDCR_ac_B.OutportBufferForEVSEMinCurrLmt = IDCR_ac_ConstB.ConstantValue20;

    /* SignalConversion generated from: '<S527>/EVSEMinCurrLmt_FA' */
    IDCR_ac_B.OutportBufferForEVSEMinCurrLmt_FA =
        IDCR_ac_ConstB.ConstantValue21_h;

    /* SignalConversion generated from: '<S527>/EVSEMinVoltLmt' */
    IDCR_ac_B.OutportBufferForEVSEMinVoltLmt = IDCR_ac_ConstB.ConstantValue22;

    /* SignalConversion generated from: '<S527>/EVSEMinVoltLmt_FA' */
    IDCR_ac_B.OutportBufferForEVSEMinVoltLmt_FA =
        IDCR_ac_ConstB.ConstantValue23_k;

    /* SignalConversion generated from: '<S527>/EVSE_FreeService' */
    IDCR_ac_B.OutportBufferForEVSE_FreeService =
        IDCR_ac_ConstB.ConstantValue24_g1;

    /* SignalConversion generated from: '<S527>/EVSEProcessing' */
    IDCR_ac_B.OutportBufferForEVSEProcessing = IDCR_ac_ConstB.ConstantValue25_g;

    /* SignalConversion generated from: '<S527>/IDCM_DCCA' */
    IDCR_ac_B.OutportBufferForIDCM_DCCA = IDCR_ac_ConstB.ConstantValue26_p;

    /* SignalConversion generated from: '<S527>/Service_ID' */
    IDCR_ac_B.OutportBufferForService_ID = IDCR_ac_ConstB.ConstantValue27_f;

    /* SignalConversion generated from: '<S527>/Response_Code' incorporates:
     *  Constant: '<S553>/Constant'
     */
    IDCR_ac_B.OutportBufferForResponse_Code = IDCR_ac_ConstB.Constant_a;

    /* SignalConversion generated from: '<S527>/Response_Code_FA' */
    IDCR_ac_B.OutportBufferForResponse_Code_FA =
        IDCR_ac_ConstB.ConstantValue28_b;

    /* SignalConversion generated from: '<S527>/TxMsgRequest' incorporates:
     *  Constant: '<S554>/Constant'
     */
    IDCR_ac_B.OutportBufferForTxMsgRequest = IDCR_ac_ConstB.Constant_nw;

    /* SignalConversion generated from: '<S527>/TxMsgRequest_FA' */
    IDCR_ac_B.OutportBufferForTxMsgRequest_FA = IDCR_ac_ConstB.ConstantValue29_p;

    /* SignalConversion generated from: '<S527>/EVSEIsolSts' incorporates:
     *  Constant: '<S557>/Constant'
     */
    IDCR_ac_B.OutportBufferForEVSEIsolSts = IDCR_ac_ConstB.Constant_ob;

    /* SignalConversion generated from: '<S527>/EVSEIsolSts_FA' */
    IDCR_ac_B.OutportBufferForEVSEIsolSts_FA = IDCR_ac_ConstB.ConstantValue30_p;

    /* SignalConversion generated from: '<S527>/EVSEStsCode' incorporates:
     *  Constant: '<S558>/Constant'
     */
    IDCR_ac_B.OutportBufferForEVSEStsCode = IDCR_ac_ConstB.Constant_nr;

    /* SignalConversion generated from: '<S527>/OffrdEnrgyTxType' incorporates:
     *  Constant: '<S559>/Constant'
     */
    IDCR_ac_B.OutportBufferForOffrdEnrgyTxType = IDCR_ac_ConstB.Constant_dj;

    /* SignalConversion generated from: '<S527>/OffrdEnrgyTxType_FA' */
    IDCR_ac_B.OutportBufferForOffrdEnrgyTxType_FA =
        IDCR_ac_ConstB.ConstantValue31_p;

    /* SignalConversion generated from: '<S527>/OffrdPayOptn' incorporates:
     *  Constant: '<S556>/Constant'
     */
    IDCR_ac_B.OutportBufferForOffrdPayOptn = IDCR_ac_ConstB.Constant_oy;

    /* SignalConversion generated from: '<S527>/OffrdPayOptn_FA' */
    IDCR_ac_B.OutportBufferForOffrdPayOptn_FA = IDCR_ac_ConstB.ConstantValue32_d;

    /* SignalConversion generated from: '<S527>/SDP_Sts' incorporates:
     *  Constant: '<S561>/Constant'
     */
    IDCR_ac_B.OutportBufferForSDP_Sts = IDCR_ac_ConstB.Constant_h3;

    /* SignalConversion generated from: '<S527>/SDP_Sts_FA' */
    IDCR_ac_B.OutportBufferForSDP_Sts_FA = IDCR_ac_ConstB.ConstantValue33_o;

    /* SignalConversion generated from: '<S527>/SLACSts' incorporates:
     *  Constant: '<S562>/Constant'
     */
    IDCR_ac_B.OutportBufferForSLACSts = IDCR_ac_ConstB.Constant_hx;

    /* SignalConversion generated from: '<S527>/SLACSts_FA' */
    IDCR_ac_B.OutportBufferForSLACSts_FA = IDCR_ac_ConstB.ConstantValue34_nt;

    /* SignalConversion generated from: '<S527>/SupProtoNm_FA' */
    IDCR_ac_B.OutportBufferForSupProtoNm_FA = IDCR_ac_ConstB.ConstantValue35_g;

    /* SignalConversion generated from: '<S527>/SupSchemaID_FA' */
    IDCR_ac_B.OutportBufferForSupSchemaID_FA = IDCR_ac_ConstB.ConstantValue36_l;

    /* SignalConversion generated from: '<S527>/SupVerNumMajor_FA' */
    IDCR_ac_B.OutportBufferForSupVerNumMajor_FA =
        IDCR_ac_ConstB.ConstantValue37_f;

    /* SignalConversion generated from: '<S527>/SupVerNumMinor_FA' */
    IDCR_ac_B.OutportBufferForSupVerNumMinor_FA =
        IDCR_ac_ConstB.ConstantValue38_j;

    /* SignalConversion generated from: '<S527>/EVCC_FailureRsn' incorporates:
     *  Constant: '<S550>/Constant'
     */
    IDCR_ac_B.OutportBufferForEVCC_FailureRsn = IDCR_ac_ConstB.Constant_e0;

    /* SignalConversion generated from: '<S527>/EVCC_FailureRsn_FA' */
    IDCR_ac_B.OutportBufferForEVCC_FailureRsn_FA =
        IDCR_ac_ConstB.ConstantValue39_g;

    /* SignalConversion generated from: '<S527>/EVCC_FailureSts' */
    IDCR_ac_B.OutportBufferForEVCC_FailureSts = IDCR_ac_ConstB.ConstantValue40_i;

    /* SignalConversion generated from: '<S527>/EVCC_FailureSts_FA' */
    IDCR_ac_B.OutportBufferForEVCC_FailureSts_FA =
        IDCR_ac_ConstB.ConstantValue43_h;

    /* SignalConversion generated from: '<S527>/TCPCommTerminated' */
    IDCR_ac_B.OutportBufferForTCPCommTerminated =
        IDCR_ac_ConstB.ConstantValue41_p;

    /* SignalConversion generated from: '<S527>/TxMsgResponse' incorporates:
     *  Constant: '<S555>/Constant'
     */
    IDCR_ac_B.OutportBufferForTxMsgResponse = IDCR_ac_ConstB.Constant_po;

    /* SignalConversion generated from: '<S527>/TxMsgResponse_FA' */
    IDCR_ac_B.OutportBufferForTxMsgResponse_FA =
        IDCR_ac_ConstB.ConstantValue42_a;

    /* SignalConversion generated from: '<S527>/EVSE_CHAdeMOProtocol_Init' incorporates:
     *  Constant: '<S560>/Constant'
     */
    IDCR_ac_B.OutportBufferForEVSE_CHAdeMOProtocol_Ini =
        IDCR_ac_ConstB.Constant_j4;

    /* SignalConversion generated from: '<S527>/EVSE_CHAdeMOProtocol_FA_Init' */
    IDCR_ac_B.OutportBufferForEVSE_CHAdeMOProtocol_FA_ =
        IDCR_ac_ConstB.ConstantValue44_e;

    /* SignalConversion generated from: '<S527>/EVSE_ChargingSystemError_Init' */
    IDCR_ac_B.OutportBufferForEVSE_ChargingSystemError =
        IDCR_ac_ConstB.ConstantValue45_k;

    /* SignalConversion generated from: '<S527>/EVSE_ChargingSystemError_FA_Init' */
    IDCR_ac_B.OutportBufferForEVSE_ChargingSystemErr_d =
        IDCR_ac_ConstB.ConstantValue46_h;

    /* SignalConversion generated from: '<S527>/EVSE_EnergizingState_Init' */
    IDCR_ac_B.OutportBufferForEVSE_EnergizingState_Ini =
        IDCR_ac_ConstB.ConstantValue47_b;

    /* SignalConversion generated from: '<S527>/EVSE_EnergizingState_FA_Init' */
    IDCR_ac_B.OutportBufferForEVSE_EnergizingState_FA_ =
        IDCR_ac_ConstB.ConstantValue48_d;

    /* SignalConversion generated from: '<S527>/EVSE_ThrshldVoltage_Init' */
    IDCR_ac_B.OutportBufferForEVSE_ThrshldVoltage_Init =
        IDCR_ac_ConstB.ConstantValue49;

    /* SignalConversion generated from: '<S527>/EVSE_ThrshldVoltage_FA_Init' */
    IDCR_ac_B.OutportBufferForEVSE_ThrshldVoltage_FA_I =
        IDCR_ac_ConstB.ConstantValue50_c5;

    /* S-Function (fcgen): '<S150>/FcnCallGen' incorporates:
     *  SubSystem: '<S150>/HVIL__InitBlock'
     */
    /* SignalConversion generated from: '<S528>/HVIL_A_Failed_Init' */
    IDCR_ac_B.OutportBufferForHVIL_A_Failed_Init =
        IDCR_ac_ConstB.ConstantValue_i;

    /* SignalConversion generated from: '<S528>/HVIL_B_Failed_Init' */
    IDCR_ac_B.OutportBufferForHVIL_B_Failed_Init =
        IDCR_ac_ConstB.ConstantValue31_n;

    /* SignalConversion generated from: '<S528>/HVIL_C_Failed_Init' */
    IDCR_ac_B.OutportBufferForHVIL_C_Failed_Init =
        IDCR_ac_ConstB.ConstantValue1_o;

    /* S-Function (fcgen): '<S150>/FcnCallGen' incorporates:
     *  SubSystem: '<S150>/V2L__InitBlock'
     */
    /* SignalConversion generated from: '<S532>/V2L_Detected' */
    IDCR_ac_B.OutportBufferForV2L_Detected = IDCR_ac_ConstB.ConstantValue_m;

    /* SignalConversion generated from: '<S532>/V2L_DetectedFA' */
    IDCR_ac_B.OutportBufferForV2L_DetectedFA = IDCR_ac_ConstB.ConstantValue7_a;

    /* SignalConversion generated from: '<S532>/V2L_DischargeCurrent' */
    IDCR_ac_B.OutportBufferForV2L_DischargeCurrent =
        IDCR_ac_ConstB.ConstantValue31;

    /* SignalConversion generated from: '<S532>/V2L_DischargeCurrentFA' */
    IDCR_ac_B.OutportBufferForV2L_DischargeCurrentFA =
        IDCR_ac_ConstB.ConstantValue8_g;

    /* SignalConversion generated from: '<S532>/V2L_DischargeDeratingRsn' incorporates:
     *  Constant: '<S586>/Constant'
     */
    IDCR_ac_B.OutportBufferForV2L_DischargeDeratingR_p =
        IDCR_ac_ConstB.Constant_n;

    /* SignalConversion generated from: '<S532>/V2L_DischargeDeratingRsnFA' */
    IDCR_ac_B.OutportBufferForV2L_DischargeDeratingRsn =
        IDCR_ac_ConstB.ConstantValue9_j;

    /* SignalConversion generated from: '<S532>/V2L_DischargeVoltage' */
    IDCR_ac_B.OutportBufferForV2L_DischargeVoltage =
        IDCR_ac_ConstB.ConstantValue2;

    /* SignalConversion generated from: '<S532>/V2L_DischargeVoltageFA' */
    IDCR_ac_B.OutportBufferForV2L_DischargeVoltageFA =
        IDCR_ac_ConstB.ConstantValue10_ib;

    /* SignalConversion generated from: '<S532>/V2L_Output_Frequency' */
    IDCR_ac_B.OutportBufferForV2L_Output_Frequency =
        IDCR_ac_ConstB.ConstantValue3;

    /* SignalConversion generated from: '<S532>/V2L_Output_FrequencyFA' */
    IDCR_ac_B.OutportBufferForV2L_Output_FrequencyFA =
        IDCR_ac_ConstB.ConstantValue11_j;

    /* SignalConversion generated from: '<S532>/V2L_Pilot_Frequency' */
    IDCR_ac_B.OutportBufferForV2L_Pilot_Frequency =
        IDCR_ac_ConstB.ConstantValue4_cl;

    /* SignalConversion generated from: '<S532>/V2L_Pilot_FrequencyFA' */
    IDCR_ac_B.OutportBufferForV2L_Pilot_FrequencyFA =
        IDCR_ac_ConstB.ConstantValue12_b;

    /* SignalConversion generated from: '<S532>/V2L_DischargeFailSts' incorporates:
     *  Constant: '<S589>/Constant'
     */
    IDCR_ac_B.OutportBufferForV2L_DischargeFailSts = IDCR_ac_ConstB.Constant_c;

    /* SignalConversion generated from: '<S532>/V2L_DischargeFailStsFA' */
    IDCR_ac_B.OutportBufferForV2L_DischargeFailStsFA =
        IDCR_ac_ConstB.ConstantValue13_n;

    /* SignalConversion generated from: '<S532>/V2L_DischargeFaultRsn' incorporates:
     *  Constant: '<S588>/Constant'
     */
    IDCR_ac_B.OutportBufferForV2L_DischargeFaultRsn = IDCR_ac_ConstB.Constant_pg;

    /* SignalConversion generated from: '<S532>/V2L_DischargeFaultRsnFA' */
    IDCR_ac_B.OutportBufferForV2L_DischargeFaultRsnFA =
        IDCR_ac_ConstB.ConstantValue14_g;

    /* SignalConversion generated from: '<S532>/ACOutFreq' */
    IDCR_ac_B.OutportBufferForACOutFreq = IDCR_ac_ConstB.ConstantValue1_n;

    /* SignalConversion generated from: '<S532>/ACOutFreqFA' */
    IDCR_ac_B.OutportBufferForACOutFreqFA = IDCR_ac_ConstB.ConstantValue5_j;

    /* SignalConversion generated from: '<S532>/ACOutCurrent1' */
    IDCR_ac_B.OutportBufferForACOutCurrent1 = IDCR_ac_ConstB.ConstantValue6;

    /* SignalConversion generated from: '<S532>/OutCurrent1FA' */
    IDCR_ac_B.OutportBufferForOutCurrent1FA = IDCR_ac_ConstB.ConstantValue15_a;

    /* SignalConversion generated from: '<S532>/ACOutCurrent2' */
    IDCR_ac_B.OutportBufferForACOutCurrent2 = IDCR_ac_ConstB.ConstantValue17;

    /* SignalConversion generated from: '<S532>/OutCurrent2FA' */
    IDCR_ac_B.OutportBufferForOutCurrent2FA = IDCR_ac_ConstB.ConstantValue16_d;

    /* SignalConversion generated from: '<S532>/ACOutCurrent3' */
    IDCR_ac_B.OutportBufferForACOutCurrent3 = IDCR_ac_ConstB.ConstantValue19;

    /* SignalConversion generated from: '<S532>/OutCurrent3FA' */
    IDCR_ac_B.OutportBufferForOutCurrent3FA = IDCR_ac_ConstB.ConstantValue18_e;

    /* SignalConversion generated from: '<S532>/ACOutVoltage1' */
    IDCR_ac_B.OutportBufferForACOutVoltage1 = IDCR_ac_ConstB.ConstantValue21;

    /* SignalConversion generated from: '<S532>/ACOutVoltage1FA' */
    IDCR_ac_B.OutportBufferForACOutVoltage1FA = IDCR_ac_ConstB.ConstantValue20_o;

    /* SignalConversion generated from: '<S532>/ACOutVoltage2' */
    IDCR_ac_B.OutportBufferForACOutVoltage2 = IDCR_ac_ConstB.ConstantValue23;

    /* SignalConversion generated from: '<S532>/ACOutVoltage2FA' */
    IDCR_ac_B.OutportBufferForACOutVoltage2FA = IDCR_ac_ConstB.ConstantValue22_j;

    /* SignalConversion generated from: '<S532>/ACOutVoltage3' */
    IDCR_ac_B.OutportBufferForACOutVoltage3 = IDCR_ac_ConstB.ConstantValue25;

    /* SignalConversion generated from: '<S532>/ACOutVoltage3FA' */
    IDCR_ac_B.OutportBufferForACOutVoltage3FA = IDCR_ac_ConstB.ConstantValue24_m;

    /* SignalConversion generated from: '<S532>/DCInCurrent' */
    IDCR_ac_B.OutportBufferForDCInCurrent = IDCR_ac_ConstB.ConstantValue26;

    /* SignalConversion generated from: '<S532>/DCInCurrentFA' */
    IDCR_ac_B.OutportBufferForDCInCurrentFA = IDCR_ac_ConstB.ConstantValue27_i;

    /* SignalConversion generated from: '<S532>/DCInVoltage' */
    IDCR_ac_B.OutportBufferForDCInVoltage = IDCR_ac_ConstB.ConstantValue28;

    /* SignalConversion generated from: '<S532>/DCInVoltageFA' */
    IDCR_ac_B.OutportBufferForDCInVoltageFA = IDCR_ac_ConstB.ConstantValue29;

    /* SignalConversion generated from: '<S532>/DschrgFaultSts' incorporates:
     *  Constant: '<S587>/Constant'
     */
    IDCR_ac_B.OutportBufferForDschrgFaultSts = IDCR_ac_ConstB.Constant_p;

    /* SignalConversion generated from: '<S532>/DschrgFaultStsFA' */
    IDCR_ac_B.OutportBufferForDschrgFaultStsFA =
        IDCR_ac_ConstB.ConstantValue30_a;

    /* SignalConversion generated from: '<S532>/V2XFrequency' */
    IDCR_ac_B.OutportBufferForV2XFrequency = IDCR_ac_ConstB.ConstantValue32;

    /* SignalConversion generated from: '<S532>/V2XFrequencyFA' */
    IDCR_ac_B.OutportBufferForV2XFrequencyFA = IDCR_ac_ConstB.ConstantValue33;

    /* SignalConversion generated from: '<S532>/V2XSts' */
    IDCR_ac_B.OutportBufferForV2XSts = IDCR_ac_ConstB.ConstantValue34_i;

    /* SignalConversion generated from: '<S532>/V2XStsFA' */
    IDCR_ac_B.OutportBufferForV2XStsFA = IDCR_ac_ConstB.ConstantValue35_k;

    /* SignalConversion generated from: '<S532>/AcOutCurrent' */
    IDCR_ac_B.OutportBufferForAcOutCurrent = IDCR_ac_ConstB.ConstantValue36;

    /* SignalConversion generated from: '<S532>/AcOutCurrentFA' */
    IDCR_ac_B.OutportBufferForAcOutCurrentFA = IDCR_ac_ConstB.ConstantValue37_e;

    /* SignalConversion generated from: '<S532>/AcOutFrequency' */
    IDCR_ac_B.OutportBufferForAcOutFrequency = IDCR_ac_ConstB.ConstantValue38;

    /* SignalConversion generated from: '<S532>/AcOutFrequencyFA' */
    IDCR_ac_B.OutportBufferForAcOutFrequencyFA =
        IDCR_ac_ConstB.ConstantValue39_k;

    /* SignalConversion generated from: '<S532>/AcOutVoltage' */
    IDCR_ac_B.OutportBufferForAcOutVoltage = IDCR_ac_ConstB.ConstantValue40;

    /* SignalConversion generated from: '<S532>/AcOutVoltageFA' */
    IDCR_ac_B.OutportBufferForAcOutVoltageFA = IDCR_ac_ConstB.ConstantValue41_i;

    /* SignalConversion generated from: '<S532>/AvailablePower' */
    IDCR_ac_B.OutportBufferForAvailablePower = IDCR_ac_ConstB.ConstantValue42;

    /* SignalConversion generated from: '<S532>/AvailablePowerFA' */
    IDCR_ac_B.OutportBufferForAvailablePowerFA =
        IDCR_ac_ConstB.ConstantValue43_d;

    /* SignalConversion generated from: '<S532>/V2XDerateRsn' incorporates:
     *  Constant: '<S590>/Constant'
     */
    IDCR_ac_B.OutportBufferForV2XDerateRsn = IDCR_ac_ConstB.Constant_m;

    /* SignalConversion generated from: '<S532>/V2XDerateRsnFA' */
    IDCR_ac_B.OutportBufferForV2XDerateRsnFA = IDCR_ac_ConstB.ConstantValue44;

    /* SignalConversion generated from: '<S532>/V2XDerateSts' */
    IDCR_ac_B.OutportBufferForV2XDerateSts = IDCR_ac_ConstB.ConstantValue45_g;

    /* SignalConversion generated from: '<S532>/V2XDerateStsFA' */
    IDCR_ac_B.OutportBufferForV2XDerateStsFA = IDCR_ac_ConstB.ConstantValue46;

    /* SignalConversion generated from: '<S532>/V2XFailSts' */
    IDCR_ac_B.OutportBufferForV2XFailSts = IDCR_ac_ConstB.ConstantValue47;

    /* SignalConversion generated from: '<S532>/V2XFailStsFA' */
    IDCR_ac_B.OutportBufferForV2XFailStsFA = IDCR_ac_ConstB.ConstantValue48;

    /* SignalConversion generated from: '<S532>/V2XFaultRsn' incorporates:
     *  Constant: '<S591>/Constant'
     */
    IDCR_ac_B.OutportBufferForV2XFaultRsn = IDCR_ac_ConstB.Constant_d;

    /* SignalConversion generated from: '<S532>/V2XFaultRsnFA' */
    IDCR_ac_B.OutportBufferForV2XFaultRsnFA = IDCR_ac_ConstB.ConstantValue49_d;

    /* SignalConversion generated from: '<S532>/V2XInCurrent' */
    IDCR_ac_B.OutportBufferForV2XInCurrent = IDCR_ac_ConstB.ConstantValue50;

    /* SignalConversion generated from: '<S532>/V2XInCurrentFA' */
    IDCR_ac_B.OutportBufferForV2XInCurrentFA = IDCR_ac_ConstB.ConstantValue51_f;

    /* SignalConversion generated from: '<S532>/V2XInVoltage' */
    IDCR_ac_B.OutportBufferForV2XInVoltage = IDCR_ac_ConstB.ConstantValue52;

    /* SignalConversion generated from: '<S532>/V2XInVoltageFA' */
    IDCR_ac_B.OutportBufferForV2XInVoltageFA = IDCR_ac_ConstB.ConstantValue53_p;

    /* SignalConversion generated from: '<S532>/V2XInterlockSts' incorporates:
     *  Constant: '<S592>/Constant'
     */
    IDCR_ac_B.OutportBufferForV2XInterlockSts = IDCR_ac_ConstB.Constant_mg;

    /* SignalConversion generated from: '<S532>/V2XInterlockStsFA' */
    IDCR_ac_B.OutportBufferForV2XInterlockStsFA = IDCR_ac_ConstB.ConstantValue54;

    /* SignalConversion generated from: '<S532>/V2XLVFeed' */
    IDCR_ac_B.OutportBufferForV2XLVFeed = IDCR_ac_ConstB.ConstantValue55;

    /* SignalConversion generated from: '<S532>/V2XLVFeedFA' */
    IDCR_ac_B.OutportBufferForV2XLVFeedFA = IDCR_ac_ConstB.ConstantValue56;

    /* SignalConversion generated from: '<S532>/V2XModeFeedback' incorporates:
     *  Constant: '<S593>/Constant'
     */
    IDCR_ac_B.OutportBufferForV2XModeFeedback = IDCR_ac_ConstB.Constant_e;

    /* SignalConversion generated from: '<S532>/V2XModeFeedbackFA' */
    IDCR_ac_B.OutportBufferForV2XModeFeedbackFA =
        IDCR_ac_ConstB.ConstantValue57_o;

    /* S-Function (fcgen): '<S150>/FcnCallGen' incorporates:
     *  SubSystem: '<S150>/PnC__InitBlock'
     */
    /* SignalConversion generated from: '<S530>/TLS_Offered' */
    IDCR_ac_B.OutportBufferForTLS_Offered = IDCR_ac_ConstB.ConstantValue_d;

    /* SignalConversion generated from: '<S530>/TLS_Connection' incorporates:
     *  Constant: '<S585>/Constant'
     */
    IDCR_ac_B.OutportBufferForTLS_Connection = IDCR_ac_ConstB.Constant_f;

    /* SignalConversion generated from: '<S530>/TLS_ConnectionFA' */
    IDCR_ac_B.OutportBufferForTLS_ConnectionFA = IDCR_ac_ConstB.ConstantValue1_h;

    /* SignalConversion generated from: '<S530>/EVSE_Supported_ISO1' */
    IDCR_ac_B.OutportBufferForEVSE_Supported_ISO1 =
        IDCR_ac_ConstB.ConstantValue5;

    /* SignalConversion generated from: '<S530>/EVSE_Supported_DIN' */
    IDCR_ac_B.OutportBufferForEVSE_Supported_DIN =
        IDCR_ac_ConstB.ConstantValue8_h;

    /* SignalConversion generated from: '<S530>/EVSE_OfferedPaymentContract' */
    IDCR_ac_B.OutportBufferForEVSE_OfferedPaymentContr =
        IDCR_ac_ConstB.ConstantValue6_c;

    /* SignalConversion generated from: '<S530>/EVSE_OfferedPaymentEIM' */
    IDCR_ac_B.OutportBufferForEVSE_OfferedPaymentEIM =
        IDCR_ac_ConstB.ConstantValue9;

    /* SignalConversion generated from: '<S530>/EVSE_Service2_Certificate' */
    IDCR_ac_B.OutportBufferForEVSE_Service2_Certificat =
        IDCR_ac_ConstB.ConstantValue2_h;

    /* SignalConversion generated from: '<S530>/EVSE_Notification' incorporates:
     *  Constant: '<S583>/Constant'
     */
    IDCR_ac_B.OutportBufferForEVSE_Notification = IDCR_ac_ConstB.Constant_kv;

    /* SignalConversion generated from: '<S530>/EVSE_NotificationFA' */
    IDCR_ac_B.OutportBufferForEVSE_NotificationFA =
        IDCR_ac_ConstB.ConstantValue10_i;

    /* SignalConversion generated from: '<S530>/EVSE_NotificationMaxDelay' */
    IDCR_ac_B.OutportBufferForEVSE_NotificationMaxDela =
        IDCR_ac_ConstB.ConstantValue11;

    /* SignalConversion generated from: '<S530>/EVSE_NotificationMaxDelayFA' */
    IDCR_ac_B.OutportBufferForEVSE_NotificationMaxDe_f =
        IDCR_ac_ConstB.ConstantValue3_n;

    /* SignalConversion generated from: '<S530>/ReceiptRequired' */
    IDCR_ac_B.OutportBufferForReceiptRequired = IDCR_ac_ConstB.ConstantValue12_e;

    /* SignalConversion generated from: '<S530>/ReceiptRequired_FA' */
    IDCR_ac_B.OutportBufferForReceiptRequired_FA =
        IDCR_ac_ConstB.ConstantValue18_j;

    /* SignalConversion generated from: '<S530>/EVSE_SASPmax' */
    IDCR_ac_B.OutportBufferForEVSE_SASPmax = IDCR_ac_ConstB.ConstantValue4;

    /* SignalConversion generated from: '<S530>/EVSE_SASPmaxFA' */
    IDCR_ac_B.OutportBufferForEVSE_SASPmaxFA = IDCR_ac_ConstB.ConstantValue7;

    /* SignalConversion generated from: '<S530>/SAScheduleTupleID' */
    IDCR_ac_B.OutportBufferForSAScheduleTupleID = IDCR_ac_ConstB.ConstantValue13;

    /* SignalConversion generated from: '<S530>/SAScheduleTupleIDFA' */
    IDCR_ac_B.OutportBufferForSAScheduleTupleIDFA =
        IDCR_ac_ConstB.ConstantValue14_c;

    /* SignalConversion generated from: '<S530>/PROXY_Plug_and_Charge' incorporates:
     *  Constant: '<S584>/Constant'
     */
    IDCR_ac_B.OutportBufferForPROXY_Plug_and_Charge = IDCR_ac_ConstB.Constant_i;

    /* SignalConversion generated from: '<S530>/PlugAndChargeReq_Init' */
    IDCR_ac_B.OutportBufferForPlugAndChargeReq_Init =
        IDCR_ac_ConstB.ConstantValue15;

    /* SignalConversion generated from: '<S530>/PlugAndChargeReqFA_Init' */
    IDCR_ac_B.OutportBufferForPlugAndChargeReqFA_Init =
        IDCR_ac_ConstB.ConstantValue16_f;

    /* SignalConversion generated from: '<S530>/PlugAndChargeReq_SgnlRcvd_Init' */
    IDCR_ac_B.OutportBufferForPlugAndChargeReq_SgnlRcv =
        IDCR_ac_ConstB.ConstantValue17_p;

    /* S-Function (fcgen): '<S150>/FcnCallGen' incorporates:
     *  SubSystem: '<S150>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S531>/VeIDCR_I_IBS_I_Batt_Out_Init' */
    IDCR_ac_B.OutportBufferForVeIDCR_I_IBS_I_Batt_Out_ = IDCR_ac_ConstB.Const1;

    /* SignalConversion generated from: '<S531>/VeIDCR_b_IBS_I_Batt_FA_Out_Init' */
    IDCR_ac_B.OutportBufferForVeIDCR_b_IBS_I_Batt_FA_O = IDCR_ac_ConstB.Const2;

    /* SignalConversion generated from: '<S531>/VeIDCR_b_IBS_I_Batt_SgnlRcvd_Out_Init' */
    IDCR_ac_B.OutportBufferForVeIDCR_b_IBS_I_Batt_Sgnl = IDCR_ac_ConstB.Const3;

    /* SignalConversion generated from: '<S531>/VeIDCR_I_IBS_I_Converted_Out_Init' */
    IDCR_ac_B.OutportBufferForVeIDCR_I_IBS_I_Converted = IDCR_ac_ConstB.Const4;

    /* SignalConversion generated from: '<S531>/VeIDCR_b_IBS_I_Converted_FA_Out_Init' */
    IDCR_ac_B.OutportBufferForVeIDCR_b_IBS_I_Converted = IDCR_ac_ConstB.Const5;

    /* End of Outputs for S-Function (fcgen): '<S150>/FcnCallGen' */

    /* Outport: '<Root>/VeIDCR_I_ACOutCurrent1' incorporates:
     *  SignalConversion generated from: '<S150>/ACOutCurrent1'
     */
    (void)Rte_Write_VeIDCR_I_ACOutCurrent1_Value
        (IDCR_ac_B.OutportBufferForACOutCurrent1);

    /* Outport: '<Root>/VeIDCR_b_ACOutCurrent1_FA' incorporates:
     *  SignalConversion generated from: '<S150>/ACOutCurrent1FA'
     */
    (void)Rte_Write_VeIDCR_b_ACOutCurrent1_FA_Value
        (IDCR_ac_B.OutportBufferForOutCurrent1FA);

    /* Outport: '<Root>/VeIDCR_I_ACOutCurrent2' incorporates:
     *  SignalConversion generated from: '<S150>/ACOutCurrent2'
     */
    (void)Rte_Write_VeIDCR_I_ACOutCurrent2_Value
        (IDCR_ac_B.OutportBufferForACOutCurrent2);

    /* Outport: '<Root>/VeIDCR_b_ACOutCurrent2_FA' incorporates:
     *  SignalConversion generated from: '<S150>/ACOutCurrent2FA'
     */
    (void)Rte_Write_VeIDCR_b_ACOutCurrent2_FA_Value
        (IDCR_ac_B.OutportBufferForOutCurrent2FA);

    /* Outport: '<Root>/VeIDCR_I_ACOutCurrent3' incorporates:
     *  SignalConversion generated from: '<S150>/ACOutCurrent3'
     */
    (void)Rte_Write_VeIDCR_I_ACOutCurrent3_Value
        (IDCR_ac_B.OutportBufferForACOutCurrent3);

    /* Outport: '<Root>/VeIDCR_b_ACOutCurrent3_FA' incorporates:
     *  SignalConversion generated from: '<S150>/ACOutCurrent3FA'
     */
    (void)Rte_Write_VeIDCR_b_ACOutCurrent3_FA_Value
        (IDCR_ac_B.OutportBufferForOutCurrent3FA);

    /* Outport: '<Root>/VeIDCR_f_ACOutFreq' incorporates:
     *  SignalConversion generated from: '<S150>/ACOutFreq'
     */
    (void)Rte_Write_VeIDCR_f_ACOutFreq_Value(IDCR_ac_B.OutportBufferForACOutFreq);

    /* Outport: '<Root>/VeIDCR_b_ACOutFreq_FA' incorporates:
     *  SignalConversion generated from: '<S150>/ACOutFreqFA'
     */
    (void)Rte_Write_VeIDCR_b_ACOutFreq_FA_Value
        (IDCR_ac_B.OutportBufferForACOutFreqFA);

    /* Outport: '<Root>/VeIDCR_U_ACOutVoltage1' incorporates:
     *  SignalConversion generated from: '<S150>/ACOutVoltage1'
     */
    (void)Rte_Write_VeIDCR_U_ACOutVoltage1_Value
        (IDCR_ac_B.OutportBufferForACOutVoltage1);

    /* Outport: '<Root>/VeIDCR_b_ACOutVoltage1_FA' incorporates:
     *  SignalConversion generated from: '<S150>/ACOutVoltage1FA'
     */
    (void)Rte_Write_VeIDCR_b_ACOutVoltage1_FA_Value
        (IDCR_ac_B.OutportBufferForACOutVoltage1FA);

    /* Outport: '<Root>/VeIDCR_U_ACOutVoltage2' incorporates:
     *  SignalConversion generated from: '<S150>/ACOutVoltage2'
     */
    (void)Rte_Write_VeIDCR_U_ACOutVoltage2_Value
        (IDCR_ac_B.OutportBufferForACOutVoltage2);

    /* Outport: '<Root>/VeIDCR_b_ACOutVoltage2_FA' incorporates:
     *  SignalConversion generated from: '<S150>/ACOutVoltage2FA'
     */
    (void)Rte_Write_VeIDCR_b_ACOutVoltage2_FA_Value
        (IDCR_ac_B.OutportBufferForACOutVoltage2FA);

    /* Outport: '<Root>/VeIDCR_U_ACOutVoltage3' incorporates:
     *  SignalConversion generated from: '<S150>/ACOutVoltage3'
     */
    (void)Rte_Write_VeIDCR_U_ACOutVoltage3_Value
        (IDCR_ac_B.OutportBufferForACOutVoltage3);

    /* Outport: '<Root>/VeIDCR_b_ACOutVoltage3_FA' incorporates:
     *  SignalConversion generated from: '<S150>/ACOutVoltage3FA'
     */
    (void)Rte_Write_VeIDCR_b_ACOutVoltage3_FA_Value
        (IDCR_ac_B.OutportBufferForACOutVoltage3FA);

    /* Outport: '<Root>/VeIDCR_I_ACSideCurr_L2' incorporates:
     *  SignalConversion generated from: '<S150>/ACSideCurr_L2_Init'
     */
    (void)Rte_Write_VeIDCR_I_ACSideCurr_L2_Value
        (IDCR_ac_B.OutportBufferForACSideCurr_L2_Init);

    /* Outport: '<Root>/VeIDCR_I_ACSideCurr_L3' incorporates:
     *  SignalConversion generated from: '<S150>/ACSideCurr_L3_Init'
     */
    (void)Rte_Write_VeIDCR_I_ACSideCurr_L3_Value
        (IDCR_ac_B.OutportBufferForACSideCurr_L3_Init);

    /* Outport: '<Root>/VeIDCR_b_ACSideVolt_L2FA' incorporates:
     *  SignalConversion generated from: '<S150>/ACSideVolt_L2FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_ACSideVolt_L2FA_Value
        (IDCR_ac_B.OutportBufferForACSideVolt_L2FA_Init);

    /* Outport: '<Root>/VeIDCR_U_ACSideVolt_L2' incorporates:
     *  SignalConversion generated from: '<S150>/ACSideVolt_L2_Init'
     */
    (void)Rte_Write_VeIDCR_U_ACSideVolt_L2_Value
        (IDCR_ac_B.OutportBufferForACSideVolt_L2_Init);

    /* Outport: '<Root>/VeIDCR_b_ACSideVolt_L3FA' incorporates:
     *  SignalConversion generated from: '<S150>/ACSideVolt_L3FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_ACSideVolt_L3FA_Value
        (IDCR_ac_B.OutportBufferForACSideVolt_L3FA_Init);

    /* Outport: '<Root>/VeIDCR_U_ACSideVolt_L3' incorporates:
     *  SignalConversion generated from: '<S150>/ACSideVolt_L3_Init'
     */
    (void)Rte_Write_VeIDCR_U_ACSideVolt_L3_Value
        (IDCR_ac_B.OutportBufferForACSideVolt_L3_Init);

    /* Outport: '<Root>/VeIDCR_b_AC_InputVltOBCMFA' incorporates:
     *  SignalConversion generated from: '<S150>/AC_InputVltOBCMFA_Init'
     */
    (void)Rte_Write_VeIDCR_b_AC_InputVltOBCMFA_Value
        (IDCR_ac_B.OutportBufferForAC_InputVltOBCMFA_Init);

    /* Outport: '<Root>/VeIDCR_U_AC_InputVltOBCM' incorporates:
     *  SignalConversion generated from: '<S150>/AC_InputVltOBCM_Init'
     */
    (void)Rte_Write_VeIDCR_U_AC_InputVltOBCM_Value
        (IDCR_ac_B.OutportBufferForAC_InputVltOBCM_Init);

    /* Outport: '<Root>/VeIDCR_b_AC_LnHi' incorporates:
     *  SignalConversion generated from: '<S150>/AC_LnHi_Init'
     */
    (void)Rte_Write_VeIDCR_b_AC_LnHi_Value
        (IDCR_ac_B.OutportBufferForAC_LnHi_Init);

    /* Outport: '<Root>/VeIDCR_b_AC_LnLow' incorporates:
     *  SignalConversion generated from: '<S150>/AC_LnLow_Init'
     */
    (void)Rte_Write_VeIDCR_b_AC_LnLow_Value
        (IDCR_ac_B.OutportBufferForAC_LnLow_Init);

    /* Outport: '<Root>/VeIDCR_I_AC_Side_Curr' incorporates:
     *  SignalConversion generated from: '<S150>/AC_Side_Curr_Init'
     */
    (void)Rte_Write_VeIDCR_I_AC_Side_Curr_Value
        (IDCR_ac_B.OutportBufferForAC_Side_Curr_Init);

    /* Outport: '<Root>/VeIDCR_b_APM2InterlockSts_FA' incorporates:
     *  SignalConversion generated from: '<S150>/APM2InterlockSts_FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_APM2InterlockSts_FA_Value
        (IDCR_ac_B.OutportBufferForAPM2InterlockSts_FA_Init);

    /* Outport: '<Root>/VeIDCR_e_APM2InterlockSts' incorporates:
     *  SignalConversion generated from: '<S150>/APM2InterlockSts_Init'
     *  SignalConversion generated from: '<S526>/APM2InterlockSts_Init'
     */
    (void)Rte_Write_VeIDCR_e_APM2InterlockSts_Value
        (IDCR_ac_B.OutportBufferForAPM2InterlockSts_Init);

    /* Outport: '<Root>/VeIDCR_b_APM3InterlockSts_FA' incorporates:
     *  SignalConversion generated from: '<S150>/APM3InterlockSts_FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_APM3InterlockSts_FA_Value
        (IDCR_ac_B.OutportBufferForAPM3InterlockSts_FA_Init);

    /* Outport: '<Root>/VeIDCR_e_APM3InterlockSts' incorporates:
     *  SignalConversion generated from: '<S150>/APM3InterlockSts_Init'
     *  SignalConversion generated from: '<S526>/APM3InterlockSts_Init'
     */
    (void)Rte_Write_VeIDCR_e_APM3InterlockSts_Value
        (IDCR_ac_B.OutportBufferForAPM3InterlockSts_Init);

    /* Outport: '<Root>/VeIDCR_e_APM_FailureType' incorporates:
     *  SignalConversion generated from: '<S150>/APMFailureType'
     *  SignalConversion generated from: '<S526>/APMFailureType'
     */
    (void)Rte_Write_VeIDCR_e_APM_FailureType_Value
        (IDCR_ac_B.OutportBufferForAPMFailureType);

    /* Outport: '<Root>/VeIDCR_b_APM_FailureType_FA' incorporates:
     *  SignalConversion generated from: '<S150>/APMFailureType_FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_APM_FailureType_FA_Value
        (IDCR_ac_B.OutportBufferForAPMFailureType_FA_Init);

    /* Outport: '<Root>/VeIDCR_y_APMSts' incorporates:
     *  SignalConversion generated from: '<S150>/APMSts_Init'
     */
    (void)Rte_Write_VeIDCR_y_APMSts_Value(IDCR_ac_B.OutportBufferForAPMSts_Init);

    /* Outport: '<Root>/VeIDCR_b_APMTemp1_FA' incorporates:
     *  SignalConversion generated from: '<S150>/APMTemp1_FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_APMTemp1_FA_Value
        (IDCR_ac_B.OutportBufferForAPMTemp1_FA_Init);

    /* Outport: '<Root>/VeIDCR_T_APMTemp1' incorporates:
     *  SignalConversion generated from: '<S150>/APMTemp1_Init'
     */
    (void)Rte_Write_VeIDCR_T_APMTemp1_Value
        (IDCR_ac_B.OutportBufferForAPMTemp1_Init);

    /* Outport: '<Root>/VeIDCR_b_APMTemp2_FA' incorporates:
     *  SignalConversion generated from: '<S150>/APMTemp2_FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_APMTemp2_FA_Value
        (IDCR_ac_B.OutportBufferForAPMTemp2_FA_Init);

    /* Outport: '<Root>/VeIDCR_T_APMTemp2' incorporates:
     *  SignalConversion generated from: '<S150>/APMTemp2_Init'
     */
    (void)Rte_Write_VeIDCR_T_APMTemp2_Value
        (IDCR_ac_B.OutportBufferForAPMTemp2_Init);

    /* Outport: '<Root>/VeIDCR_e_APM_DeratingModeStatus' incorporates:
     *  SignalConversion generated from: '<S150>/APM_DeratingModeStatus_Init'
     *  SignalConversion generated from: '<S526>/APM_DeratingModeStatus_Init'
     */
    (void)Rte_Write_VeIDCR_e_APM_DeratingModeStatus_Value
        (IDCR_ac_B.OutportBufferForAPM_DeratingModeStatus_I);

    /* Outport: '<Root>/VeIDCR_P_APM_DeratePwr' incorporates:
     *  SignalConversion generated from: '<S150>/APM_DeratingPower_Init'
     */
    (void)Rte_Write_VeIDCR_P_APM_DeratePwr_Value
        (IDCR_ac_B.OutportBufferForAPM_DeratingPower_Init);

    /* Outport: '<Root>/VeIDCR_e_APM_FailureModeStatus' incorporates:
     *  SignalConversion generated from: '<S150>/APM_FailureModeStatus_Init'
     *  SignalConversion generated from: '<S526>/APM_FailureModeStatus_Init'
     */
    (void)Rte_Write_VeIDCR_e_APM_FailureModeStatus_Value
        (IDCR_ac_B.OutportBufferForAPM_FailureModeStatus_In);

    /* Outport: '<Root>/VeIDCR_e_APM_FailureReason' incorporates:
     *  SignalConversion generated from: '<S150>/APM_FailureReason_Init'
     *  SignalConversion generated from: '<S526>/APM_FailureReason_Init'
     */
    (void)Rte_Write_VeIDCR_e_APM_FailureReason_Value
        (IDCR_ac_B.OutportBufferForAPM_FailureReason_Init);

    /* Outport: '<Root>/VeIDCR_b_APM_HV_CurrentFA' incorporates:
     *  SignalConversion generated from: '<S150>/APM_HV_CurrentFA_Init'
     */
    (void)Rte_Write_VeIDCR_b_APM_HV_CurrentFA_Value
        (IDCR_ac_B.OutportBufferForAPM_HV_CurrentFA_Init);

    /* Outport: '<Root>/VeIDCR_I_APM_HV_Current' incorporates:
     *  SignalConversion generated from: '<S150>/APM_HV_Current_Init'
     */
    (void)Rte_Write_VeIDCR_I_APM_HV_Current_Value
        (IDCR_ac_B.OutportBufferForAPM_HV_Current_Init);

    /* Outport: '<Root>/VeIDCR_b_APM_HV_VoltageFA' incorporates:
     *  SignalConversion generated from: '<S150>/APM_HV_VoltageFA_Init'
     */
    (void)Rte_Write_VeIDCR_b_APM_HV_VoltageFA_Value
        (IDCR_ac_B.OutportBufferForAPM_HV_VoltageFA_Init);

    /* Outport: '<Root>/VeIDCR_U_APM_HV_Voltage' incorporates:
     *  SignalConversion generated from: '<S150>/APM_HV_Voltage_Init'
     */
    (void)Rte_Write_VeIDCR_U_APM_HV_Voltage_Value
        (IDCR_ac_B.OutportBufferForAPM_HV_Voltage_Init);

    /* Outport: '<Root>/VeIDCR_T_APM_HeatPlateTemp' incorporates:
     *  SignalConversion generated from: '<S150>/APM_HeatPlateTemp_Init'
     */
    (void)Rte_Write_VeIDCR_T_APM_HeatPlateTemp_Value
        (IDCR_ac_B.OutportBufferForAPM_HeatPlateTemp_Init);

    /* Outport: '<Root>/VeIDCR_b_APM_HvVsetPFdbk_FA' incorporates:
     *  SignalConversion generated from: '<S150>/APM_HvVsetPFdbk_FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_APM_HvVsetPFdbk_FA_Value
        (IDCR_ac_B.OutportBufferForAPM_HvVsetPFdbk_FA_Init);

    /* Outport: '<Root>/VeIDCR_U_APM_HvVsetPFdbk' incorporates:
     *  SignalConversion generated from: '<S150>/APM_HvVsetPFdbk_Init'
     */
    (void)Rte_Write_VeIDCR_U_APM_HvVsetPFdbk_Value
        (IDCR_ac_B.OutportBufferForAPM_HvVsetPFdbk_Init);

    /* Outport: '<Root>/VeIDCR_I_APM_LV_Current' incorporates:
     *  SignalConversion generated from: '<S150>/APM_LV_Current_Init'
     */
    (void)Rte_Write_VeIDCR_I_APM_LV_Current_Value
        (IDCR_ac_B.OutportBufferForAPM_LV_Current_Init);

    /* Outport: '<Root>/VeIDCR_U_APM_LV_Voltage' incorporates:
     *  SignalConversion generated from: '<S150>/APM_LV_Voltage_Init'
     */
    (void)Rte_Write_VeIDCR_U_APM_LV_Voltage_Value
        (IDCR_ac_B.OutportBufferForAPM_LV_Voltage_Init);

    /* Outport: '<Root>/VeIDCR_T_APM_OutletCoolantTemp' incorporates:
     *  SignalConversion generated from: '<S150>/APM_OutletCoolantTemp_Init'
     */
    (void)Rte_Write_VeIDCR_T_APM_OutletCoolantTemp_Value
        (IDCR_ac_B.OutportBufferForAPM_OutletCoolantTemp_In);

    /* Outport: '<Root>/VeIDCR_P_APM_OutputPwr' incorporates:
     *  SignalConversion generated from: '<S150>/APM_OutputPower_Init'
     */
    (void)Rte_Write_VeIDCR_P_APM_OutputPwr_Value
        (IDCR_ac_B.OutportBufferForAPM_OutputPower_Init);

    /* Outport: '<Root>/VeIDCR_e_APM_ThermalRunaway' incorporates:
     *  SignalConversion generated from: '<S150>/APM_ThermalRunaway_Init'
     *  SignalConversion generated from: '<S526>/APM_ThermalRunaway_Init'
     */
    (void)Rte_Write_VeIDCR_e_APM_ThermalRunaway_Value
        (IDCR_ac_B.OutportBufferForAPM_ThermalRunaway_Init);

    /* Outport: '<Root>/VeIDCR_I_AcOutCurrent' incorporates:
     *  SignalConversion generated from: '<S150>/AcOutCurrent'
     */
    (void)Rte_Write_VeIDCR_I_AcOutCurrent_Value
        (IDCR_ac_B.OutportBufferForAcOutCurrent);

    /* Outport: '<Root>/VeIDCR_b_AcOutCurrent_FA' incorporates:
     *  SignalConversion generated from: '<S150>/AcOutCurrentFA'
     */
    (void)Rte_Write_VeIDCR_b_AcOutCurrent_FA_Value
        (IDCR_ac_B.OutportBufferForAcOutCurrentFA);

    /* Outport: '<Root>/VeIDCR_f_AcOutFrequency' incorporates:
     *  SignalConversion generated from: '<S150>/AcOutFrequency'
     */
    (void)Rte_Write_VeIDCR_f_AcOutFrequency_Value
        (IDCR_ac_B.OutportBufferForAcOutFrequency);

    /* Outport: '<Root>/VeIDCR_b_AcOutFrequency_FA' incorporates:
     *  SignalConversion generated from: '<S150>/AcOutFrequencyFA'
     */
    (void)Rte_Write_VeIDCR_b_AcOutFrequency_FA_Value
        (IDCR_ac_B.OutportBufferForAcOutFrequencyFA);

    /* Outport: '<Root>/VeIDCR_U_AcOutVoltage' incorporates:
     *  SignalConversion generated from: '<S150>/AcOutVoltage'
     */
    (void)Rte_Write_VeIDCR_U_AcOutVoltage_Value
        (IDCR_ac_B.OutportBufferForAcOutVoltage);

    /* Outport: '<Root>/VeIDCR_b_AcOutVoltage_FA' incorporates:
     *  SignalConversion generated from: '<S150>/AcOutVoltageFA'
     */
    (void)Rte_Write_VeIDCR_b_AcOutVoltage_FA_Value
        (IDCR_ac_B.OutportBufferForAcOutVoltageFA);

    /* Outport: '<Root>/VeIDCR_P_AvailablePower' incorporates:
     *  SignalConversion generated from: '<S150>/AvailablePower'
     */
    (void)Rte_Write_VeIDCR_P_AvailablePower_Value
        (IDCR_ac_B.OutportBufferForAvailablePower);

    /* Outport: '<Root>/VeIDCR_b_AvailablePower_FA' incorporates:
     *  SignalConversion generated from: '<S150>/AvailablePowerFA'
     */
    (void)Rte_Write_VeIDCR_b_AvailablePower_FA_Value
        (IDCR_ac_B.OutportBufferForAvailablePowerFA);

    /* Outport: '<Root>/VeIDCR_b_BattSide_VoltFA' incorporates:
     *  SignalConversion generated from: '<S150>/BattSideVoltFA_Init'
     */
    (void)Rte_Write_VeIDCR_b_BattSide_VoltFA_Value
        (IDCR_ac_B.OutportBufferForBattSideVoltFA_Init);

    /* Outport: '<Root>/VeIDCR_U_BattSideVolt' incorporates:
     *  SignalConversion generated from: '<S150>/BattSideVolt_Init'
     */
    (void)Rte_Write_VeIDCR_U_BattSideVolt_Value
        (IDCR_ac_B.OutportBufferForBattSideVolt_Init);

    /* Outport: '<Root>/VeIDCR_b_BattSide_CurrFA' incorporates:
     *  SignalConversion generated from: '<S150>/BattSide_CurrFA_Init'
     */
    (void)Rte_Write_VeIDCR_b_BattSide_CurrFA_Value
        (IDCR_ac_B.OutportBufferForBattSide_CurrFA_Init);

    /* Outport: '<Root>/VeIDCR_I_BattSide_Curr' incorporates:
     *  SignalConversion generated from: '<S150>/BattSide_Curr_Init'
     */
    (void)Rte_Write_VeIDCR_I_BattSide_Curr_Value
        (IDCR_ac_B.OutportBufferForBattSide_Curr_Init);

    /* Outport: '<Root>/VeIDCR_b_Charger_WeldingDetectAvail_FA' incorporates:
     *  SignalConversion generated from: '<S150>/Charger_WeldingDetectAvail_FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_Charger_WeldingDetectAvail_FA_Value
        (IDCR_ac_B.OutportBufferForCharger_WeldingDetectAva);

    /* Outport: '<Root>/VeIDCR_e_Charger_WeldingDetectAvail' incorporates:
     *  SignalConversion generated from: '<S150>/Charger_WeldingDetectAvail_Init'
     *  SignalConversion generated from: '<S529>/Charger_WeldingDetectAvail_Init'
     */
    (void)Rte_Write_VeIDCR_e_Charger_WeldingDetectAvail_Value
        (IDCR_ac_B.OutportBufferForCharger_WeldingDetectA_m);

    /* Outport: '<Root>/VeIDCR_b_ChrgCrntAvailFA' incorporates:
     *  SignalConversion generated from: '<S150>/ChrgCrntAvailFA_Init'
     */
    (void)Rte_Write_VeIDCR_b_ChrgCrntAvailFA_Value
        (IDCR_ac_B.OutportBufferForChrgCrntAvailFA_Init);

    /* Outport: '<Root>/VeIDCR_I_ChrgCrntAvail' incorporates:
     *  SignalConversion generated from: '<S150>/ChrgCrntAvail_Init'
     */
    (void)Rte_Write_VeIDCR_I_ChrgCrntAvail_Value
        (IDCR_ac_B.OutportBufferForChrgCrntAvail_Init);

    /* Outport: '<Root>/VeIDCR_b_ChrgCurrent_FA' incorporates:
     *  SignalConversion generated from: '<S150>/ChrgCurrentFAInput_Init'
     */
    (void)Rte_Write_VeIDCR_b_ChrgCurrent_FA_Value
        (IDCR_ac_B.OutportBufferForChrgCurrentFAInput_Init);

    /* Outport: '<Root>/VeIDCR_I_ChrgCurrent' incorporates:
     *  SignalConversion generated from: '<S150>/ChrgCurrentInput_Init'
     */
    (void)Rte_Write_VeIDCR_I_ChrgCurrent_Value
        (IDCR_ac_B.OutportBufferForChrgCurrentInput_Init);

    /* Outport: '<Root>/VeIDCR_b_ChrgEnblOBCM' incorporates:
     *  SignalConversion generated from: '<S150>/ChrgEnblOBCM_Init'
     */
    (void)Rte_Write_VeIDCR_b_ChrgEnblOBCM_Value
        (IDCR_ac_B.OutportBufferForChrgEnblOBCM_Init);

    /* Outport: '<Root>/VeIDCR_b_ChrgFailStsFA' incorporates:
     *  SignalConversion generated from: '<S150>/ChrgFailStsFA_Init'
     */
    (void)Rte_Write_VeIDCR_b_ChrgFailStsFA_Value
        (IDCR_ac_B.OutportBufferForChrgFailStsFA_Init);

    /* Outport: '<Root>/VeIDCR_e_ChrgFailSts' incorporates:
     *  SignalConversion generated from: '<S150>/ChrgFailSts_Init'
     *  SignalConversion generated from: '<S529>/ChrgFailSts_Init'
     */
    (void)Rte_Write_VeIDCR_e_ChrgFailSts_Value
        (IDCR_ac_B.OutportBufferForChrgFailSts_Init);

    /* Outport: '<Root>/VeIDCR_e_ChrgrModeStat_OBCM' incorporates:
     *  SignalConversion generated from: '<S150>/ChrgrModeStat_OBCM_Init'
     *  SignalConversion generated from: '<S529>/ChrgrModeStat_OBCM_Init'
     */
    (void)Rte_Write_VeIDCR_e_ChrgrModeStat_OBCM_Value
        (IDCR_ac_B.OutportBufferForChrgrModeStat_OBCM_Init);

    /* Outport: '<Root>/VeIDCR_b_Chrgr_FaultStatesFA' incorporates:
     *  SignalConversion generated from: '<S150>/Chrgr_FaultStatesFA_Init'
     */
    (void)Rte_Write_VeIDCR_b_Chrgr_FaultStatesFA_Value
        (IDCR_ac_B.OutportBufferForChrgr_FaultStatesFA_Init);

    /* Outport: '<Root>/VeIDCR_e_Chrgr_FaultStates' incorporates:
     *  SignalConversion generated from: '<S150>/Chrgr_FaultStates_Init'
     *  SignalConversion generated from: '<S529>/Chrgr_FaultStates_Init'
     */
    (void)Rte_Write_VeIDCR_e_Chrgr_FaultStates_Value
        (IDCR_ac_B.OutportBufferForChrgr_FaultStates_Init);

    /* Outport: '<Root>/VeIDCR_I_DCInputCurrent' incorporates:
     *  SignalConversion generated from: '<S150>/DCInCurrent'
     */
    (void)Rte_Write_VeIDCR_I_DCInputCurrent_Value
        (IDCR_ac_B.OutportBufferForDCInCurrent);

    /* Outport: '<Root>/VeIDCR_b_DCInputCurrent_FA' incorporates:
     *  SignalConversion generated from: '<S150>/DCInCurrentFA'
     */
    (void)Rte_Write_VeIDCR_b_DCInputCurrent_FA_Value
        (IDCR_ac_B.OutportBufferForDCInCurrentFA);

    /* Outport: '<Root>/VeIDCR_U_DCInputVoltage' incorporates:
     *  SignalConversion generated from: '<S150>/DCInVoltage'
     */
    (void)Rte_Write_VeIDCR_U_DCInputVoltage_Value
        (IDCR_ac_B.OutportBufferForDCInVoltage);

    /* Outport: '<Root>/VeIDCR_b_DCInputVoltage_FA' incorporates:
     *  SignalConversion generated from: '<S150>/DCInVoltageFA'
     */
    (void)Rte_Write_VeIDCR_b_DCInputVoltage_FA_Value
        (IDCR_ac_B.OutportBufferForDCInVoltageFA);

    /* Outport: '<Root>/VeIDCR_b_DC_Isolation_Disable_Cmd_FA' incorporates:
     *  SignalConversion generated from: '<S150>/DC_Isolation_Disable_Cmd_FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_DC_Isolation_Disable_Cmd_FA_Value
        (IDCR_ac_B.OutportBufferForDC_Isolation_Disable_C_b);

    /* Outport: '<Root>/VeIDCR_b_DC_Isolation_Disable_Cmd' incorporates:
     *  SignalConversion generated from: '<S150>/DC_Isolation_Disable_Cmd_Init'
     */
    (void)Rte_Write_VeIDCR_b_DC_Isolation_Disable_Cmd_Value
        (IDCR_ac_B.OutportBufferForDC_Isolation_Disable_Cmd);

    /* Outport: '<Root>/VeIDCR_b_DC_TimeOut' incorporates:
     *  SignalConversion generated from: '<S150>/DC_TimeOut'
     */
    (void)Rte_Write_VeIDCR_b_DC_TimeOut_Value
        (IDCR_ac_B.OutportBufferForDC_TimeOut);

    /* Outport: '<Root>/VeIDCR_e_DVC_APMSts' incorporates:
     *  SignalConversion generated from: '<S150>/DVC_APMSts_Init'
     *  SignalConversion generated from: '<S526>/DVC_APMSts_Init'
     */
    (void)Rte_Write_VeIDCR_e_DVC_APMSts_Value
        (IDCR_ac_B.OutportBufferForDVC_APMSts_Init);

    /* Outport: '<Root>/VeIDCR_e_DschrgFaultSts' incorporates:
     *  SignalConversion generated from: '<S150>/DschrgFaultSts'
     *  SignalConversion generated from: '<S532>/DschrgFaultSts'
     */
    (void)Rte_Write_VeIDCR_e_DschrgFaultSts_Value
        (IDCR_ac_B.OutportBufferForDschrgFaultSts);

    /* Outport: '<Root>/VeIDCR_b_DschrgFaultSts_FA' incorporates:
     *  SignalConversion generated from: '<S150>/DschrgFaultStsFA'
     */
    (void)Rte_Write_VeIDCR_b_DschrgFaultSts_FA_Value
        (IDCR_ac_B.OutportBufferForDschrgFaultStsFA);

    /* Outport: '<Root>/VeIDCR_e_EVCC_FailureRsn' incorporates:
     *  SignalConversion generated from: '<S150>/EVCC_FailureRsn'
     *  SignalConversion generated from: '<S527>/EVCC_FailureRsn'
     */
    (void)Rte_Write_VeIDCR_e_EVCC_FailureRsn_Value
        (IDCR_ac_B.OutportBufferForEVCC_FailureRsn);

    /* Outport: '<Root>/VeIDCR_b_EVCC_FailureRsnFA' incorporates:
     *  SignalConversion generated from: '<S150>/EVCC_FailureRsn_FA'
     */
    (void)Rte_Write_VeIDCR_b_EVCC_FailureRsnFA_Value
        (IDCR_ac_B.OutportBufferForEVCC_FailureRsn_FA);

    /* Outport: '<Root>/VeIDCR_b_EVCC_FailureSts' incorporates:
     *  SignalConversion generated from: '<S150>/EVCC_FailureSts'
     */
    (void)Rte_Write_VeIDCR_b_EVCC_FailureSts_Value
        (IDCR_ac_B.OutportBufferForEVCC_FailureSts);

    /* Outport: '<Root>/VeIDCR_b_EVCC_FailureSts_FA' incorporates:
     *  SignalConversion generated from: '<S150>/EVCC_FailureSts1'
     */
    (void)Rte_Write_VeIDCR_b_EVCC_FailureSts_FA_Value
        (IDCR_ac_B.OutportBufferForEVCC_FailureSts_FA);

    /* Outport: '<Root>/VeIDCR_U_EVRDesVSetP' incorporates:
     *  SignalConversion generated from: '<S150>/EVRDesVSetP_Init'
     */
    (void)Rte_Write_VeIDCR_U_EVRDesVSetP_Value
        (IDCR_ac_B.OutportBufferForEVRDesVSetP_Init);

    /* Outport: '<Root>/VeIDCR_b_EVSECurrLmtAchvd' incorporates:
     *  SignalConversion generated from: '<S150>/EVSECurrLmtAchvd'
     */
    (void)Rte_Write_VeIDCR_b_EVSECurrLmtAchvd_Value
        (IDCR_ac_B.OutportBufferForEVSECurrLmtAchvd);

    /* Outport: '<Root>/VeIDCR_I_EVSECurr_RegTol' incorporates:
     *  SignalConversion generated from: '<S150>/EVSECurr_RegTol'
     */
    (void)Rte_Write_VeIDCR_I_EVSECurr_RegTol_Value
        (IDCR_ac_B.OutportBufferForEVSECurr_RegTol);

    /* Outport: '<Root>/VeIDCR_b_EVSECurr_RegTol_FA' incorporates:
     *  SignalConversion generated from: '<S150>/EVSECurr_RegTol_FA'
     */
    (void)Rte_Write_VeIDCR_b_EVSECurr_RegTol_FA_Value
        (IDCR_ac_B.OutportBufferForEVSECurr_RegTol_FA);

    /* Outport: '<Root>/VeIDCR_e_EVSEIsolSts' incorporates:
     *  SignalConversion generated from: '<S150>/EVSEIsolSts'
     *  SignalConversion generated from: '<S527>/EVSEIsolSts'
     */
    (void)Rte_Write_VeIDCR_e_EVSEIsolSts_Value
        (IDCR_ac_B.OutportBufferForEVSEIsolSts);

    /* Outport: '<Root>/VeIDCR_b_EVSEIsolSts_FA' incorporates:
     *  SignalConversion generated from: '<S150>/EVSEIsolSts_FA'
     */
    (void)Rte_Write_VeIDCR_b_EVSEIsolSts_FA_Value
        (IDCR_ac_B.OutportBufferForEVSEIsolSts_FA);

    /* Outport: '<Root>/VeIDCR_I_EVSEMaxCurrLmt' incorporates:
     *  SignalConversion generated from: '<S150>/EVSEMaxCurrLmt'
     */
    (void)Rte_Write_VeIDCR_I_EVSEMaxCurrLmt_Value
        (IDCR_ac_B.OutportBufferForEVSEMaxCurrLmt);

    /* Outport: '<Root>/VeIDCR_b_EVSEMaxCurrLmt_FA' incorporates:
     *  SignalConversion generated from: '<S150>/EVSEMaxCurrLmt_FA'
     */
    (void)Rte_Write_VeIDCR_b_EVSEMaxCurrLmt_FA_Value
        (IDCR_ac_B.OutportBufferForEVSEMaxCurrLmt_FA);

    /* Outport: '<Root>/VeIDCR_P_EVSEMaxPwrLmt' incorporates:
     *  SignalConversion generated from: '<S150>/EVSEMaxPwrLmt'
     */
    (void)Rte_Write_VeIDCR_P_EVSEMaxPwrLmt_Value
        (IDCR_ac_B.OutportBufferForEVSEMaxPwrLmt);

    /* Outport: '<Root>/VeIDCR_b_EVSEMaxPwrLmt_FA' incorporates:
     *  SignalConversion generated from: '<S150>/EVSEMaxPwrLmt_FA'
     */
    (void)Rte_Write_VeIDCR_b_EVSEMaxPwrLmt_FA_Value
        (IDCR_ac_B.OutportBufferForEVSEMaxPwrLmt_FA);

    /* Outport: '<Root>/VeIDCR_U_EVSEMaxVoltLmt' incorporates:
     *  SignalConversion generated from: '<S150>/EVSEMaxVoltLmt'
     */
    (void)Rte_Write_VeIDCR_U_EVSEMaxVoltLmt_Value
        (IDCR_ac_B.OutportBufferForEVSEMaxVoltLmt);

    /* Outport: '<Root>/VeIDCR_b_EVSEMaxVoltLmt_FA' incorporates:
     *  SignalConversion generated from: '<S150>/EVSEMaxVoltLmt_FA'
     */
    (void)Rte_Write_VeIDCR_b_EVSEMaxVoltLmt_FA_Value
        (IDCR_ac_B.OutportBufferForEVSEMaxVoltLmt_FA);

    /* Outport: '<Root>/VeIDCR_I_EVSEMinCurrLmt' incorporates:
     *  SignalConversion generated from: '<S150>/EVSEMinCurrLmt'
     */
    (void)Rte_Write_VeIDCR_I_EVSEMinCurrLmt_Value
        (IDCR_ac_B.OutportBufferForEVSEMinCurrLmt);

    /* Outport: '<Root>/VeIDCR_b_EVSEMinCurrLmt_FA' incorporates:
     *  SignalConversion generated from: '<S150>/EVSEMinCurrLmt_FA'
     */
    (void)Rte_Write_VeIDCR_b_EVSEMinCurrLmt_FA_Value
        (IDCR_ac_B.OutportBufferForEVSEMinCurrLmt_FA);

    /* Outport: '<Root>/VeIDCR_U_EVSEMinVoltLmt' incorporates:
     *  SignalConversion generated from: '<S150>/EVSEMinVoltLmt'
     */
    (void)Rte_Write_VeIDCR_U_EVSEMinVoltLmt_Value
        (IDCR_ac_B.OutportBufferForEVSEMinVoltLmt);

    /* Outport: '<Root>/VeIDCR_b_EVSEMinVoltLmt_FA' incorporates:
     *  SignalConversion generated from: '<S150>/EVSEMinVoltLmt_FA'
     */
    (void)Rte_Write_VeIDCR_b_EVSEMinVoltLmt_FA_Value
        (IDCR_ac_B.OutportBufferForEVSEMinVoltLmt_FA);

    /* Outport: '<Root>/VeIDCR_I_EVSEOutputCurr' incorporates:
     *  SignalConversion generated from: '<S150>/EVSEOutputCurr'
     */
    (void)Rte_Write_VeIDCR_I_EVSEOutputCurr_Value
        (IDCR_ac_B.OutportBufferForEVSEOutputCurr);

    /* Outport: '<Root>/VeIDCR_b_EVSEOutputCurr_FA' incorporates:
     *  SignalConversion generated from: '<S150>/EVSEOutputCurr_FA'
     */
    (void)Rte_Write_VeIDCR_b_EVSEOutputCurr_FA_Value
        (IDCR_ac_B.OutportBufferForEVSEOutputCurr_FA);

    /* Outport: '<Root>/VeIDCR_U_EVSEOutputVolt' incorporates:
     *  SignalConversion generated from: '<S150>/EVSEOutputVolt'
     */
    (void)Rte_Write_VeIDCR_U_EVSEOutputVolt_Value
        (IDCR_ac_B.OutportBufferForEVSEOutputVolt);

    /* Outport: '<Root>/VeIDCR_b_EVSEOutputVolt_FA' incorporates:
     *  SignalConversion generated from: '<S150>/EVSEOutputVolt_FA'
     */
    (void)Rte_Write_VeIDCR_b_EVSEOutputVolt_FA_Value
        (IDCR_ac_B.OutportBufferForEVSEOutputVolt_FA);

    /* Outport: '<Root>/VeIDCR_I_EVSEPeakCurrRip' incorporates:
     *  SignalConversion generated from: '<S150>/EVSEPeakCurrRip'
     */
    (void)Rte_Write_VeIDCR_I_EVSEPeakCurrRip_Value
        (IDCR_ac_B.OutportBufferForEVSEPeakCurrRip);

    /* Outport: '<Root>/VeIDCR_b_EVSEPeakCurrRip_FA' incorporates:
     *  SignalConversion generated from: '<S150>/EVSEPeakCurrRip_FA'
     */
    (void)Rte_Write_VeIDCR_b_EVSEPeakCurrRip_FA_Value
        (IDCR_ac_B.OutportBufferForEVSEPeakCurrRip_FA);

    /* Outport: '<Root>/VeIDCR_b_EVSEProcessing' incorporates:
     *  SignalConversion generated from: '<S150>/EVSEProcessing'
     */
    (void)Rte_Write_VeIDCR_b_EVSEProcessing_Value
        (IDCR_ac_B.OutportBufferForEVSEProcessing);

    /* Outport: '<Root>/VeIDCR_b_EVSEPwrLmtAchvd' incorporates:
     *  SignalConversion generated from: '<S150>/EVSEPwrLmtAchvd'
     */
    (void)Rte_Write_VeIDCR_b_EVSEPwrLmtAchvd_Value
        (IDCR_ac_B.OutportBufferForEVSEPwrLmtAchvd);

    /* Outport: '<Root>/VeIDCR_e_EVSEStsCode' incorporates:
     *  SignalConversion generated from: '<S150>/EVSEStsCode'
     *  SignalConversion generated from: '<S527>/EVSEStsCode'
     */
    (void)Rte_Write_VeIDCR_e_EVSEStsCode_Value
        (IDCR_ac_B.OutportBufferForEVSEStsCode);

    /* Outport: '<Root>/VeIDCR_b_EVSEVoltLmtAchvd' incorporates:
     *  SignalConversion generated from: '<S150>/EVSEVoltLmtAchvd'
     */
    (void)Rte_Write_VeIDCR_b_EVSEVoltLmtAchvd_Value
        (IDCR_ac_B.OutportBufferForEVSEVoltLmtAchvd);

    /* Outport: '<Root>/VeIDCR_b_EVSE_Accepted_Protocol_FA' incorporates:
     *  SignalConversion generated from: '<S150>/EVSE_Accepted_ProtocolFA_Init'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_Accepted_Protocol_FA_Value
        (IDCR_ac_B.OutportBufferForEVSE_Accepted_ProtocolFA);

    /* Outport: '<Root>/VeIDCR_d_EVSE_Accepted_Protocol' incorporates:
     *  SignalConversion generated from: '<S150>/EVSE_Accepted_Protocol_Init'
     */
    (void)Rte_Write_VeIDCR_d_EVSE_Accepted_Protocol_Value
        (IDCR_ac_B.OutportBufferForEVSE_Accepted_Protocol_I);

    /* Outport: '<Root>/VeIDCR_b_EVSE_CHAdeMOProtocol_FA' incorporates:
     *  SignalConversion generated from: '<S150>/EVSE_CHAdeMOProtocol_FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_CHAdeMOProtocol_FA_Value
        (IDCR_ac_B.OutportBufferForEVSE_CHAdeMOProtocol_FA_);

    /* Outport: '<Root>/VeIDCR_e_EVSE_CHAdeMOProtocol' incorporates:
     *  SignalConversion generated from: '<S150>/EVSE_CHAdeMOProtocol_Init'
     *  SignalConversion generated from: '<S527>/EVSE_CHAdeMOProtocol_Init'
     */
    (void)Rte_Write_VeIDCR_e_EVSE_CHAdeMOProtocol_Value
        (IDCR_ac_B.OutportBufferForEVSE_CHAdeMOProtocol_Ini);

    /* Outport: '<Root>/VeIDCR_b_EVSE_ChargingSystemError_FA' incorporates:
     *  SignalConversion generated from: '<S150>/EVSE_ChargingSystemError_FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_ChargingSystemError_FA_Value
        (IDCR_ac_B.OutportBufferForEVSE_ChargingSystemErr_d);

    /* Outport: '<Root>/VeIDCR_b_EVSE_ChargingSystemError' incorporates:
     *  SignalConversion generated from: '<S150>/EVSE_ChargingSystemError_Init'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_ChargingSystemError_Value
        (IDCR_ac_B.OutportBufferForEVSE_ChargingSystemError);

    /* Outport: '<Root>/VeIDCR_b_EVSE_ChrgStopControl_FA' incorporates:
     *  SignalConversion generated from: '<S150>/EVSE_ChrgStopControl_FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_ChrgStopControl_FA_Value
        (IDCR_ac_B.OutportBufferForEVSE_ChrgStopControl_FA_);

    /* Outport: '<Root>/VeIDCR_e_EVSE_ChrgStopControl' incorporates:
     *  SignalConversion generated from: '<S150>/EVSE_ChrgStopControl_Init'
     *  SignalConversion generated from: '<S529>/EVSE_ChrgStopControl_Init'
     */
    (void)Rte_Write_VeIDCR_e_EVSE_ChrgStopControl_Value
        (IDCR_ac_B.OutportBufferForEVSE_ChrgStopControl_Ini);

    /* Outport: '<Root>/VeIDCR_b_EVSE_EnergizingState_FA' incorporates:
     *  SignalConversion generated from: '<S150>/EVSE_EnergizingState_FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_EnergizingState_FA_Value
        (IDCR_ac_B.OutportBufferForEVSE_EnergizingState_FA_);

    /* Outport: '<Root>/VeIDCR_b_EVSE_EnergizingState' incorporates:
     *  SignalConversion generated from: '<S150>/EVSE_EnergizingState_Init'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_EnergizingState_Value
        (IDCR_ac_B.OutportBufferForEVSE_EnergizingState_Ini);

    /* Outport: '<Root>/VeIDCR_E_EVSE_EnrgyToBeDlvrd' incorporates:
     *  SignalConversion generated from: '<S150>/EVSE_EnrgyToBeDlvrd'
     */
    (void)Rte_Write_VeIDCR_E_EVSE_EnrgyToBeDlvrd_Value
        (IDCR_ac_B.OutportBufferForEVSE_EnrgyToBeDlvrd);

    /* Outport: '<Root>/VeIDCR_b_EVSE_EnrgyToBeDlvrd_FA' incorporates:
     *  SignalConversion generated from: '<S150>/EVSE_EnrgyToBeDlvrd_FA'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_EnrgyToBeDlvrd_FA_Value
        (IDCR_ac_B.OutportBufferForEVSE_EnrgyToBeDlvrd_FA);

    /* Outport: '<Root>/VeIDCR_b_EVSE_Error_FA' incorporates:
     *  SignalConversion generated from: '<S150>/EVSE_Error_FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_Error_FA_Value
        (IDCR_ac_B.OutportBufferForEVSE_Error_FA_Init);

    /* Outport: '<Root>/VeIDCR_e_EVSE_Error' incorporates:
     *  SignalConversion generated from: '<S150>/EVSE_Error_Init'
     *  SignalConversion generated from: '<S529>/EVSE_Error_Init'
     */
    (void)Rte_Write_VeIDCR_e_EVSE_Error_Value
        (IDCR_ac_B.OutportBufferForEVSE_Error_Init);

    /* Outport: '<Root>/VeIDCR_b_EVSE_FreeService' incorporates:
     *  SignalConversion generated from: '<S150>/EVSE_FreeService'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_FreeService_Value
        (IDCR_ac_B.OutportBufferForEVSE_FreeService);

    /* Outport: '<Root>/VeIDCR_e_EVSENotification' incorporates:
     *  SignalConversion generated from: '<S150>/EVSE_Notification'
     *  SignalConversion generated from: '<S530>/EVSE_Notification'
     */
    (void)Rte_Write_VeIDCR_e_EVSENotification_Value
        (IDCR_ac_B.OutportBufferForEVSE_Notification);

    /* Outport: '<Root>/VeIDCR_b_EVSENotificationFA' incorporates:
     *  SignalConversion generated from: '<S150>/EVSE_NotificationFA'
     */
    (void)Rte_Write_VeIDCR_b_EVSENotificationFA_Value
        (IDCR_ac_B.OutportBufferForEVSE_NotificationFA);

    /* Outport: '<Root>/VeIDCR_t_EVSE_NotificationMaxDelay' incorporates:
     *  SignalConversion generated from: '<S150>/EVSE_NotificationMaxDelay'
     */
    (void)Rte_Write_VeIDCR_t_EVSE_NotificationMaxDelay_Value
        (IDCR_ac_B.OutportBufferForEVSE_NotificationMaxDela);

    /* Outport: '<Root>/VeIDCR_b_EVSE_NotificationMaxDelayFA' incorporates:
     *  SignalConversion generated from: '<S150>/EVSE_NotificationMaxDelayFA'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_NotificationMaxDelayFA_Value
        (IDCR_ac_B.OutportBufferForEVSE_NotificationMaxDe_f);

    /* Outport: '<Root>/VeIDCR_b_OfferedPaymentContract' incorporates:
     *  SignalConversion generated from: '<S150>/EVSE_OfferedPaymentContract'
     */
    (void)Rte_Write_VeIDCR_b_OfferedPaymentContract_Value
        (IDCR_ac_B.OutportBufferForEVSE_OfferedPaymentContr);

    /* Outport: '<Root>/VeIDCR_b_OfferedPaymentEIM' incorporates:
     *  SignalConversion generated from: '<S150>/EVSE_OfferedPaymentEIM'
     */
    (void)Rte_Write_VeIDCR_b_OfferedPaymentEIM_Value
        (IDCR_ac_B.OutportBufferForEVSE_OfferedPaymentEIM);

    /* Outport: '<Root>/VeIDCR_b_EVSE_OfferedService_FA' incorporates:
     *  SignalConversion generated from: '<S150>/EVSE_OfferedService_FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_OfferedService_FA_Value
        (IDCR_ac_B.OutportBufferForEVSE_OfferedService_FA_I);

    /* Outport: '<Root>/VeIDCR_e_EVSE_OfferedService' incorporates:
     *  SignalConversion generated from: '<S150>/EVSE_OfferedService_Init'
     *  SignalConversion generated from: '<S529>/EVSE_OfferedService_Init'
     */
    (void)Rte_Write_VeIDCR_e_EVSE_OfferedService_Value
        (IDCR_ac_B.OutportBufferForEVSE_OfferedService_Init);

    /* Outport: '<Root>/VeIDCR_b_EVSE_Offered_AC_Single_Phase_FA' incorporates:
     *  SignalConversion generated from: '<S150>/EVSE_Offered_AC_Single_Phase_FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_Offered_AC_Single_Phase_FA_Value
        (IDCR_ac_B.OutportBufferForEVSE_Offered_AC_Single_d);

    /* Outport: '<Root>/VeIDCR_b_EVSE_Offered_AC_Single_Phase' incorporates:
     *  SignalConversion generated from: '<S150>/EVSE_Offered_AC_Single_Phase_Init'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_Offered_AC_Single_Phase_Value
        (IDCR_ac_B.OutportBufferForEVSE_Offered_AC_Single_P);

    /* Outport: '<Root>/VeIDCR_b_EVSE_Offered_AC_Three_Phase_FA' incorporates:
     *  SignalConversion generated from: '<S150>/EVSE_Offered_AC_Three_Phase_FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_Offered_AC_Three_Phase_FA_Value
        (IDCR_ac_B.OutportBufferForEVSE_Offered_AC_Three__p);

    /* Outport: '<Root>/VeIDCR_b_EVSE_Offered_AC_Three_Phase' incorporates:
     *  SignalConversion generated from: '<S150>/EVSE_Offered_AC_Three_Phase_Init'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_Offered_AC_Three_Phase_Value
        (IDCR_ac_B.OutportBufferForEVSE_Offered_AC_Three_Ph);

    /* Outport: '<Root>/VeIDCR_b_EVSE_Offered_DC_Extended_FA' incorporates:
     *  SignalConversion generated from: '<S150>/EVSE_Offered_DC_Extended_FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_Offered_DC_Extended_FA_Value
        (IDCR_ac_B.OutportBufferForEVSE_Offered_DC_Extend_f);

    /* Outport: '<Root>/VeIDCR_b_EVSE_Offered_DC_Extended' incorporates:
     *  SignalConversion generated from: '<S150>/EVSE_Offered_DC_Extended_Init'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_Offered_DC_Extended_Value
        (IDCR_ac_B.OutportBufferForEVSE_Offered_DC_Extended);

    /* Outport: '<Root>/VeIDCR_e_EVSE_PilotStat_OBCM' incorporates:
     *  SignalConversion generated from: '<S150>/EVSE_PilotStat_OBCM_Init'
     *  SignalConversion generated from: '<S529>/EVSE_PilotStat_OBCM_Init'
     */
    (void)Rte_Write_VeIDCR_e_EVSE_PilotStat_OBCM_Value
        (IDCR_ac_B.OutportBufferForEVSE_PilotStat_OBCM_Init);

    /* Outport: '<Root>/VeIDCR_W_EVSE_SASPmax' incorporates:
     *  SignalConversion generated from: '<S150>/EVSE_SASPmax'
     */
    (void)Rte_Write_VeIDCR_W_EVSE_SASPmax_Value
        (IDCR_ac_B.OutportBufferForEVSE_SASPmax);

    /* Outport: '<Root>/VeIDCR_b_EVSE_SASPmaxFA' incorporates:
     *  SignalConversion generated from: '<S150>/EVSE_SASPmaxFA'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_SASPmaxFA_Value
        (IDCR_ac_B.OutportBufferForEVSE_SASPmaxFA);

    /* Outport: '<Root>/VeIDCR_b_EVSE_Service1_Charging_FA' incorporates:
     *  SignalConversion generated from: '<S150>/EVSE_Service1_Charging_FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_Service1_Charging_FA_Value
        (IDCR_ac_B.OutportBufferForEVSE_Service1_Charging_F);

    /* Outport: '<Root>/VeIDCR_b_EVSE_Service1_Charging' incorporates:
     *  SignalConversion generated from: '<S150>/EVSE_Service1_Charging_Init'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_Service1_Charging_Value
        (IDCR_ac_B.OutportBufferForEVSE_Service1_Charging_I);

    /* Outport: '<Root>/VeIDCR_b_EVSE_Service1_Free_FA' incorporates:
     *  SignalConversion generated from: '<S150>/EVSE_Service1_Free_FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_Service1_Free_FA_Value
        (IDCR_ac_B.OutportBufferForEVSE_Service1_Free_FA_In);

    /* Outport: '<Root>/VeIDCR_b_EVSE_Service1_Free' incorporates:
     *  SignalConversion generated from: '<S150>/EVSE_Service1_Free_Init'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_Service1_Free_Value
        (IDCR_ac_B.OutportBufferForEVSE_Service1_Free_Init);

    /* Outport: '<Root>/VeIDCR_b_Service2_Certificate' incorporates:
     *  SignalConversion generated from: '<S150>/EVSE_Service2_Certificate'
     */
    (void)Rte_Write_VeIDCR_b_Service2_Certificate_Value
        (IDCR_ac_B.OutportBufferForEVSE_Service2_Certificat);

    /* Outport: '<Root>/VeIDCR_b_EVSEsupported_DIN' incorporates:
     *  SignalConversion generated from: '<S150>/EVSE_Supported_DIN'
     */
    (void)Rte_Write_VeIDCR_b_EVSEsupported_DIN_Value
        (IDCR_ac_B.OutportBufferForEVSE_Supported_DIN);

    /* Outport: '<Root>/VeIDCR_b_EVSEsupported_ISO1' incorporates:
     *  SignalConversion generated from: '<S150>/EVSE_Supported_ISO1'
     */
    (void)Rte_Write_VeIDCR_b_EVSEsupported_ISO1_Value
        (IDCR_ac_B.OutportBufferForEVSE_Supported_ISO1);

    /* Outport: '<Root>/VeIDCR_b_EVSE_ThrshldVoltage_FA' incorporates:
     *  SignalConversion generated from: '<S150>/EVSE_ThrshldVoltage_FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_ThrshldVoltage_FA_Value
        (IDCR_ac_B.OutportBufferForEVSE_ThrshldVoltage_FA_I);

    /* Outport: '<Root>/VeIDCR_U_EVSE_ThrshldVoltage' incorporates:
     *  SignalConversion generated from: '<S150>/EVSE_ThrshldVoltage_Init'
     */
    (void)Rte_Write_VeIDCR_U_EVSE_ThrshldVoltage_Value
        (IDCR_ac_B.OutportBufferForEVSE_ThrshldVoltage_Init);

    /* Outport: '<Root>/VeIDCR_b_EVSer_On_OBCM' incorporates:
     *  SignalConversion generated from: '<S150>/EVSer_On_OBCM_Init'
     */
    (void)Rte_Write_VeIDCR_b_EVSer_On_OBCM_Value
        (IDCR_ac_B.OutportBufferForEVSer_On_OBCM_Init);

    /* Outport: '<Root>/VeIDCR_b_ExtChargerSts_FA' incorporates:
     *  SignalConversion generated from: '<S150>/ExtChargerSts_FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_ExtChargerSts_FA_Value
        (IDCR_ac_B.OutportBufferForExtChargerSts_FA_Init);

    /* Outport: '<Root>/VeIDCR_e_ExtChargerSts' incorporates:
     *  SignalConversion generated from: '<S150>/ExtChargerSts_Init'
     *  SignalConversion generated from: '<S529>/ExtChargerSts_Init'
     */
    (void)Rte_Write_VeIDCR_e_ExtChargerSts_Value
        (IDCR_ac_B.OutportBufferForExtChargerSts_Init);

    /* Outport: '<Root>/VeIDCR_b_GBT_EVSEChrgPermitting' incorporates:
     *  SignalConversion generated from: '<S150>/GBT_EVSEChrgPermitting_Init'
     */
    (void)Rte_Write_VeIDCR_b_GBT_EVSEChrgPermitting_Value
        (IDCR_ac_B.OutportBufferForGBT_EVSEChrgPermitting_I);

    /* Outport: '<Root>/VeIDCR_b_HVCMS_EVSEID_FA' incorporates:
     *  SignalConversion generated from: '<S150>/HVCMS_EVSEID_FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_HVCMS_EVSEID_FA_Value
        (IDCR_ac_B.OutportBufferForHVCMS_EVSEID_FA_Init);

    /* Outport: '<Root>/VeIDCR_g_HVCMS_EVSEID' incorporates:
     *  SignalConversion generated from: '<S150>/HVCMS_EVSEID_Init'
     */
    (void)Rte_Write_VeIDCR_g_HVCMS_EVSEID_Value
        (IDCR_ac_B.OutportBufferForHVCMS_EVSEID_Init);

    /* Outport: '<Root>/VeIDCR_b_HVIL_A_Failed' incorporates:
     *  SignalConversion generated from: '<S150>/HVIL_A_Failed_Init'
     */
    (void)Rte_Write_VeIDCR_b_HVIL_A_Failed_Value
        (IDCR_ac_B.OutportBufferForHVIL_A_Failed_Init);

    /* Outport: '<Root>/VeIDCR_b_HVIL_B_Failed' incorporates:
     *  SignalConversion generated from: '<S150>/HVIL_B_Failed_Init'
     */
    (void)Rte_Write_VeIDCR_b_HVIL_B_Failed_Value
        (IDCR_ac_B.OutportBufferForHVIL_B_Failed_Init);

    /* Outport: '<Root>/VeIDCR_b_HVIL_C_Failed' incorporates:
     *  SignalConversion generated from: '<S150>/HVIL_C_Failed_Init'
     */
    (void)Rte_Write_VeIDCR_b_HVIL_C_Failed_Value
        (IDCR_ac_B.OutportBufferForHVIL_C_Failed_Init);

    /* Outport: '<Root>/VeIDCR_T_IBS2_Temp' incorporates:
     *  SignalConversion generated from: '<S150>/IBS2_BattTemp_Init'
     */
    (void)Rte_Write_VeIDCR_T_IBS2_Temp_Value
        (IDCR_ac_B.OutportBufferForIBS2_BattTemp_Init);

    /* Outport: '<Root>/VeIDCR_b_BattSocAcc' incorporates:
     *  SignalConversion generated from: '<S150>/IBS_BattSOCAcc_Init'
     */
    (void)Rte_Write_VeIDCR_b_BattSocAcc_Value
        (IDCR_ac_B.OutportBufferForIBS_BattSocAcc_Init);

    /* Outport: '<Root>/VeIDCR_Pct_IBS_BattSOC' incorporates:
     *  SignalConversion generated from: '<S150>/IBS_BattSOC_Init'
     */
    (void)Rte_Write_VeIDCR_Pct_IBS_BattSOC_Value
        (IDCR_ac_B.OutportBufferForIBS_BattSOC_Init);

    /* Outport: '<Root>/VeIDCR_e_IBS_BattTempFailSts' incorporates:
     *  SignalConversion generated from: '<S150>/IBS_BattTempSts_Init'
     *  SignalConversion generated from: '<S526>/IBS_BattTempSts_Init'
     */
    (void)Rte_Write_VeIDCR_e_IBS_BattTempFailSts_Value
        (IDCR_ac_B.OutportBufferForIBS_BattTempSts_Init);

    /* Outport: '<Root>/VeIDCR_b_IBS_BattTemp_FA' incorporates:
     *  SignalConversion generated from: '<S150>/IBS_BattTemp_FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_IBS_BattTemp_FA_Value
        (IDCR_ac_B.OutportBufferForIBS_BattTemp_FA_Init);

    /* Outport: '<Root>/VeIDCR_T_IBS_BattTemp' incorporates:
     *  SignalConversion generated from: '<S150>/IBS_BattTemp_Init'
     */
    (void)Rte_Write_VeIDCR_T_IBS_BattTemp_Value
        (IDCR_ac_B.OutportBufferForIBS_BattTemp_Init);

    /* Outport: '<Root>/VeIDCR_b_IBS_BattSOC_FA' incorporates:
     *  SignalConversion generated from: '<S150>/IBS_BattTemp_SOC_FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_IBS_BattSOC_FA_Value
        (IDCR_ac_B.OutportBufferForIBS_BattTemp_SOC_FA_Init);

    /* Outport: '<Root>/VeIDCR_b_IBS_BattTemp_SgnlRcvd' incorporates:
     *  SignalConversion generated from: '<S150>/IBS_BattTemp_SgnlRcvd_Init'
     */
    (void)Rte_Write_VeIDCR_b_IBS_BattTemp_SgnlRcvd_Value
        (IDCR_ac_B.OutportBufferForIBS_BattTemp_SgnlRcvd_In);

    /* Outport: '<Root>/VeIDCR_U_IBS_BattVolt' incorporates:
     *  SignalConversion generated from: '<S150>/IBS_BattVolt_Init'
     */
    (void)Rte_Write_VeIDCR_U_IBS_BattVolt_Value
        (IDCR_ac_B.OutportBufferForIBS_BattVolt_Init);

    /* Outport: '<Root>/VeIDCR_b_IBS_Current_Status_FA' incorporates:
     *  SignalConversion generated from: '<S150>/IBS_Current_Status_FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_IBS_Current_Status_FA_Value
        (IDCR_ac_B.OutportBufferForIBS_Current_Status_FA_In);

    /* Outport: '<Root>/VeIDCR_e_IBS_Current_Status' incorporates:
     *  SignalConversion generated from: '<S150>/IBS_Current_Status_Init'
     *  SignalConversion generated from: '<S526>/IBS_Current_Status_Init'
     */
    (void)Rte_Write_VeIDCR_e_IBS_Current_Status_Value
        (IDCR_ac_B.OutportBufferForIBS_Current_Status_Init);

    /* Outport: '<Root>/VeIDCR_b_IBS_I_RANGE_FA' incorporates:
     *  SignalConversion generated from: '<S150>/IBS_I_RANGE_FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_IBS_I_RANGE_FA_Value
        (IDCR_ac_B.OutportBufferForIBS_I_RANGE_FA_Init);

    /* Outport: '<Root>/VeIDCR_e_IBS_I_RANGE' incorporates:
     *  SignalConversion generated from: '<S150>/IBS_I_RANGE_Init'
     *  SignalConversion generated from: '<S526>/IBS_I_RANGE_Init'
     */
    (void)Rte_Write_VeIDCR_e_IBS_I_RANGE_Value
        (IDCR_ac_B.OutportBufferForIBS_I_RANGE_Init);

    /* Outport: '<Root>/VeIDCR_b_IBS_BattVolt_FA' incorporates:
     *  SignalConversion generated from: '<S150>/IBS_Volt_FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_IBS_BattVolt_FA_Value
        (IDCR_ac_B.OutportBufferForIBS_Volt_FA_Init);

    /* Outport: '<Root>/VeIDCR_b_IDCM_DCCA' incorporates:
     *  SignalConversion generated from: '<S150>/IDCM_DCCA'
     */
    (void)Rte_Write_VeIDCR_b_IDCM_DCCA_Value(IDCR_ac_B.OutportBufferForIDCM_DCCA);

    /* Outport: '<Root>/VeIDCR_b_IDCM_GFCI_Fault_Status_FA' incorporates:
     *  SignalConversion generated from: '<S150>/IDCM_GFCI_Fault_Status_FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_IDCM_GFCI_Fault_Status_FA_Value
        (IDCR_ac_B.OutportBufferForIDCM_GFCI_Fault_Status_F);

    /* Outport: '<Root>/VeIDCR_b_IDCM_GFCI_Fault_Status' incorporates:
     *  SignalConversion generated from: '<S150>/IDCM_GFCI_Fault_Status_Init'
     */
    (void)Rte_Write_VeIDCR_b_IDCM_GFCI_Fault_Status_Value
        (IDCR_ac_B.OutportBufferForIDCM_GFCI_Fault_Status_I);

    /* Outport: '<Root>/VeIDCR_b_IDCM_Wakeup_HCP_FA' incorporates:
     *  SignalConversion generated from: '<S150>/IDCM_Wakeup_HCP_FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_IDCM_Wakeup_HCP_FA_Value
        (IDCR_ac_B.OutportBufferForIDCM_Wakeup_HCP_FA_Init);

    /* Outport: '<Root>/VeIDCR_b_IDCM_Wakeup_HCP' incorporates:
     *  SignalConversion generated from: '<S150>/IDCM_Wakeup_HCP_Init'
     */
    (void)Rte_Write_VeIDCR_b_IDCM_Wakeup_HCP_Value
        (IDCR_ac_B.OutportBufferForIDCM_Wakeup_HCP_Init);

    /* Outport: '<Root>/VeIDCR_b_ISO15118_EVSETimeStamp_FA' incorporates:
     *  SignalConversion generated from: '<S150>/ISO15118_EVSETimeStamp_FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_ISO15118_EVSETimeStamp_FA_Value
        (IDCR_ac_B.OutportBufferForISO15118_EVSETimeStamp_F);

    /* Outport: '<Root>/VeIDCR_cmp_ISO15118_EVSETimeStamp' incorporates:
     *  SignalConversion generated from: '<S150>/ISO15118_EVSETimeStamp_Init'
     */
    (void)Rte_Write_VeIDCR_cmp_ISO15118_EVSETimeStamp_Value
        (IDCR_ac_B.OutportBufferForISO15118_EVSETimeStamp_I);

    /* Outport: '<Root>/VeIDCR_b_ISO15118_MessageResponse_FA' incorporates:
     *  SignalConversion generated from: '<S150>/ISO15118_MessageResponse_FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_ISO15118_MessageResponse_FA_Value
        (IDCR_ac_B.OutportBufferForISO15118_MessageResponse);

    /* Outport: '<Root>/VeIDCR_e_ISO15118_MessageResponse' incorporates:
     *  SignalConversion generated from: '<S150>/ISO15118_MessageResponse_Init'
     *  SignalConversion generated from: '<S529>/ISO15118_MessageResponse_Init'
     */
    (void)Rte_Write_VeIDCR_e_ISO15118_MessageResponse_Value
        (IDCR_ac_B.OutportBufferForISO15118_MessageRespon_b);

    /* Outport: '<Root>/VeIDCR_b_ISO15118_NotificationMaxDelay_FA' incorporates:
     *  SignalConversion generated from: '<S150>/ISO15118_NotificationMaxDelay_FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_ISO15118_NotificationMaxDelay_FA_Value
        (IDCR_ac_B.OutportBufferForISO15118_NotificationM_l);

    /* Outport: '<Root>/VeIDCR_t_ISO15118_NotificationMaxDelay' incorporates:
     *  SignalConversion generated from: '<S150>/ISO15118_NotificationMaxDelay_Init'
     */
    (void)Rte_Write_VeIDCR_t_ISO15118_NotificationMaxDelay_Value
        (IDCR_ac_B.OutportBufferForISO15118_NotificationMax);

    /* Outport: '<Root>/VeIDCR_b_ISO15118_ResponseCode_FA' incorporates:
     *  SignalConversion generated from: '<S150>/ISO15118_ResponseCode_FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_ISO15118_ResponseCode_FA_Value
        (IDCR_ac_B.OutportBufferForISO15118_ResponseCode_FA);

    /* Outport: '<Root>/VeIDCR_e_ISO15118_ResponseCode' incorporates:
     *  SignalConversion generated from: '<S150>/ISO15118_ResponseCode_Init'
     *  SignalConversion generated from: '<S526>/ISO15118_ResponseCode_Init'
     */
    (void)Rte_Write_VeIDCR_e_ISO15118_ResponseCode_Value
        (IDCR_ac_B.OutportBufferForISO15118_ResponseCode_In);

    /* Outport: '<Root>/VeIDCR_b_ISO15118_SAScheduleTupleID_FA' incorporates:
     *  SignalConversion generated from: '<S150>/ISO15118_SAScheduleTupleID_FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_ISO15118_SAScheduleTupleID_FA_Value
        (IDCR_ac_B.OutportBufferForISO15118_SAScheduleTup_d);

    /* Outport: '<Root>/VeIDCR_i_ISO15118_SAScheduleTupleID' incorporates:
     *  SignalConversion generated from: '<S150>/ISO15118_SAScheduleTupleID_Init'
     */
    (void)Rte_Write_VeIDCR_i_ISO15118_SAScheduleTupleID_Value
        (IDCR_ac_B.OutportBufferForISO15118_SAScheduleTuple);

    /* Outport: '<Root>/VeIDCR_b_ISO15118_SchemaID_FA' incorporates:
     *  SignalConversion generated from: '<S150>/ISO15118_SchemaID_FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_ISO15118_SchemaID_FA_Value
        (IDCR_ac_B.OutportBufferForISO15118_SchemaID_FA_Ini);

    /* Outport: '<Root>/VeIDCR_y_ISO15118_SchemaID' incorporates:
     *  SignalConversion generated from: '<S150>/ISO15118_SchemaID_Init'
     */
    (void)Rte_Write_VeIDCR_y_ISO15118_SchemaID_Value
        (IDCR_ac_B.OutportBufferForISO15118_SchemaID_Init);

    /* Outport: '<Root>/VeIDCR_b_ISO15118_ServiceID_FA' incorporates:
     *  SignalConversion generated from: '<S150>/ISO15118_ServiceID_FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_ISO15118_ServiceID_FA_Value
        (IDCR_ac_B.OutportBufferForISO15118_ServiceID_FA_In);

    /* Outport: '<Root>/VeIDCR_d_ISO15118_ServiceID' incorporates:
     *  SignalConversion generated from: '<S150>/ISO15118_ServiceID_Init'
     */
    (void)Rte_Write_VeIDCR_d_ISO15118_ServiceID_Value
        (IDCR_ac_B.OutportBufferForISO15118_ServiceID_Init);

    /* Outport: '<Root>/VeIDCR_b_ISO15118_TLS_Offered_FA' incorporates:
     *  SignalConversion generated from: '<S150>/ISO15118_TLS_Offered_FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_ISO15118_TLS_Offered_FA_Value
        (IDCR_ac_B.OutportBufferForISO15118_TLS_Offered_FA_);

    /* Outport: '<Root>/VeIDCR_b_ISO15118_TLS_Offered' incorporates:
     *  SignalConversion generated from: '<S150>/ISO15118_TLS_Offered_Init'
     */
    (void)Rte_Write_VeIDCR_b_ISO15118_TLS_Offered_Value
        (IDCR_ac_B.OutportBufferForISO15118_TLS_Offered_Ini);

    /* Outport: '<Root>/VeIDCR_b_ISO15118_TLS_Status_FA' incorporates:
     *  SignalConversion generated from: '<S150>/ISO15118_TLS_Status_FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_ISO15118_TLS_Status_FA_Value
        (IDCR_ac_B.OutportBufferForISO15118_TLS_Status_FA_I);

    /* Outport: '<Root>/VeIDCR_e_ISO15118_TLS_Status' incorporates:
     *  SignalConversion generated from: '<S150>/ISO15118_TLS_Status_Init'
     *  SignalConversion generated from: '<S526>/ISO15118_TLS_Status_Init'
     */
    (void)Rte_Write_VeIDCR_e_ISO15118_TLS_Status_Value
        (IDCR_ac_B.OutportBufferForISO15118_TLS_Status_Init);

    /* Outport: '<Root>/VeIDCR_b_ISO15118_VersionNumMajor_FA' incorporates:
     *  SignalConversion generated from: '<S150>/ISO15118_VersionNumMajor_FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_ISO15118_VersionNumMajor_FA_Value
        (IDCR_ac_B.OutportBufferForISO15118_VersionNumMaj_f);

    /* Outport: '<Root>/VeIDCR_y_ISO15118_VersionNumMajor' incorporates:
     *  SignalConversion generated from: '<S150>/ISO15118_VersionNumMajor_Init'
     */
    (void)Rte_Write_VeIDCR_y_ISO15118_VersionNumMajor_Value
        (IDCR_ac_B.OutportBufferForISO15118_VersionNumMajor);

    /* Outport: '<Root>/VeIDCR_b_ISO15118_VersionNumMinor_FA' incorporates:
     *  SignalConversion generated from: '<S150>/ISO15118_VersionNumMinor_FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_ISO15118_VersionNumMinor_FA_Value
        (IDCR_ac_B.OutportBufferForISO15118_VersionNumMin_e);

    /* Outport: '<Root>/VeIDCR_y_ISO15118_VersionNumMinor' incorporates:
     *  SignalConversion generated from: '<S150>/ISO15118_VersionNumMinor_Init'
     */
    (void)Rte_Write_VeIDCR_y_ISO15118_VersionNumMinor_Value
        (IDCR_ac_B.OutportBufferForISO15118_VersionNumMinor);

    /* Outport: '<Root>/VeIDCR_b_J1772InputCrntAvalFA' incorporates:
     *  SignalConversion generated from: '<S150>/J1772InputCrntAvalFA_Init'
     */
    (void)Rte_Write_VeIDCR_b_J1772InputCrntAvalFA_Value
        (IDCR_ac_B.OutportBufferForJ1772InputCrntAvalFA_Ini);

    /* Outport: '<Root>/VeIDCR_I_J1772InputCrntAval' incorporates:
     *  SignalConversion generated from: '<S150>/J1772InputCrntAval_Init'
     */
    (void)Rte_Write_VeIDCR_I_J1772InputCrntAval_Value
        (IDCR_ac_B.OutportBufferForJ1772InputCrntAval_Init);

    /* Outport: '<Root>/VeIDCR_b_J1772_S2_StatusFA' incorporates:
     *  SignalConversion generated from: '<S150>/J1772_S2_StatusFA_Init'
     */
    (void)Rte_Write_VeIDCR_b_J1772_S2_StatusFA_Value
        (IDCR_ac_B.OutportBufferForJ1772_S2_StatusFA_Init);

    /* Outport: '<Root>/VeIDCR_b_J1772_S2_Status' incorporates:
     *  SignalConversion generated from: '<S150>/J1772_S2_Status_Init'
     */
    (void)Rte_Write_VeIDCR_b_J1772_S2_Status_Value
        (IDCR_ac_B.OutportBufferForJ1772_S2_Status_Init);

    /* Outport: '<Root>/VeIDCR_b_OBCM_CP1Sts_FA' incorporates:
     *  SignalConversion generated from: '<S150>/OBCM_CP1Sts_FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_OBCM_CP1Sts_FA_Value
        (IDCR_ac_B.OutportBufferForOBCM_CP1Sts_FA_Init);

    /* Outport: '<Root>/VeIDCR_e_OBCM_CP1Sts' incorporates:
     *  SignalConversion generated from: '<S150>/OBCM_CP1Sts_Init'
     *  SignalConversion generated from: '<S529>/OBCM_CP1Sts_Init'
     */
    (void)Rte_Write_VeIDCR_e_OBCM_CP1Sts_Value
        (IDCR_ac_B.OutportBufferForOBCM_CP1Sts_Init);

    /* Outport: '<Root>/VeIDCR_b_OBCM_CP2Sts_FA' incorporates:
     *  SignalConversion generated from: '<S150>/OBCM_CP2Sts_FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_OBCM_CP2Sts_FA_Value
        (IDCR_ac_B.OutportBufferForOBCM_CP2Sts_FA_Init);

    /* Outport: '<Root>/VeIDCR_e_OBCM_CP2Sts' incorporates:
     *  SignalConversion generated from: '<S150>/OBCM_CP2Sts_Init'
     *  SignalConversion generated from: '<S529>/OBCM_CP2Sts_Init'
     */
    (void)Rte_Write_VeIDCR_e_OBCM_CP2Sts_Value
        (IDCR_ac_B.OutportBufferForOBCM_CP2Sts_Init);

    /* Outport: '<Root>/VeIDCR_b_OBCM_CP3Sts_FA' incorporates:
     *  SignalConversion generated from: '<S150>/OBCM_CP3Sts_FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_OBCM_CP3Sts_FA_Value
        (IDCR_ac_B.OutportBufferForOBCM_CP3Sts_FA_Init);

    /* Outport: '<Root>/VeIDCR_e_OBCM_CP3Sts' incorporates:
     *  SignalConversion generated from: '<S150>/OBCM_CP3Sts_Init'
     *  SignalConversion generated from: '<S529>/OBCM_CP3Sts_Init'
     */
    (void)Rte_Write_VeIDCR_e_OBCM_CP3Sts_Value
        (IDCR_ac_B.OutportBufferForOBCM_CP3Sts_Init);

    /* Outport: '<Root>/VeIDCR_b_OBCM_CSSts_FA' incorporates:
     *  SignalConversion generated from: '<S150>/OBCM_CSSts_FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_OBCM_CSSts_FA_Value
        (IDCR_ac_B.OutportBufferForOBCM_CSSts_FA_Init);

    /* Outport: '<Root>/VeIDCR_e_OBCM_CSSts' incorporates:
     *  SignalConversion generated from: '<S150>/OBCM_CSSts_Init'
     *  SignalConversion generated from: '<S529>/OBCM_CSSts_Init'
     */
    (void)Rte_Write_VeIDCR_e_OBCM_CSSts_Value
        (IDCR_ac_B.OutportBufferForOBCM_CSSts_Init);

    /* Outport: '<Root>/VeIDCR_e_OBCM_Chrgr_Rdy' incorporates:
     *  SignalConversion generated from: '<S150>/OBCM_Chrgr_Rdy'
     *  SignalConversion generated from: '<S529>/OBCM_Chrgr_Rdy'
     */
    (void)Rte_Write_VeIDCR_e_OBCM_Chrgr_Rdy_Value
        (IDCR_ac_B.OutportBufferForOBCM_Chrgr_Rdy);

    /* Outport: '<Root>/VeIDCR_b_OBCM_HVILStsFA' incorporates:
     *  SignalConversion generated from: '<S150>/OBCM_HVILStsFA_Init'
     */
    (void)Rte_Write_VeIDCR_b_OBCM_HVILStsFA_Value
        (IDCR_ac_B.OutportBufferForOBCM_HVILStsFA_Init);

    /* Outport: '<Root>/VeIDCR_e_OBCM_HVILSts' incorporates:
     *  SignalConversion generated from: '<S150>/OBCM_HVILSts_Init'
     *  SignalConversion generated from: '<S529>/OBCM_HVILSts_Init'
     */
    (void)Rte_Write_VeIDCR_e_OBCM_HVILSts_Value
        (IDCR_ac_B.OutportBufferForOBCM_HVILSts_Init);

    /* Outport: '<Root>/VeIDCR_b_OBCM_Timeout_FA' incorporates:
     *  SignalConversion generated from: '<S150>/OBCM_Timeout_FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_OBCM_Timeout_FA_Value
        (IDCR_ac_B.OutportBufferForOBCM_Timeout_FA_Init);

    /* Outport: '<Root>/VeIDCR_b_OBCM_TimeOut' incorporates:
     *  SignalConversion generated from: '<S150>/OBCM_Timeout_Init'
     */
    (void)Rte_Write_VeIDCR_b_OBCM_TimeOut_Value
        (IDCR_ac_B.OutportBufferForOBCM_Timeout_Init);

    /* Outport: '<Root>/VeIDCR_b_OBC_Prox_FA' incorporates:
     *  SignalConversion generated from: '<S150>/OBC_ProxFA_Init'
     */
    (void)Rte_Write_VeIDCR_b_OBC_Prox_FA_Value
        (IDCR_ac_B.OutportBufferForOBC_ProxFA_Init);

    /* Outport: '<Root>/VeIDCR_U_OBC_Prox' incorporates:
     *  SignalConversion generated from: '<S150>/OBC_Prox_Init'
     */
    (void)Rte_Write_VeIDCR_U_OBC_Prox_Value
        (IDCR_ac_B.OutportBufferForOBC_Prox_Init);

    /* Outport: '<Root>/VeIDCR_e_OffrdEnrgyTxType' incorporates:
     *  SignalConversion generated from: '<S150>/OffrdEnrgyTxType'
     *  SignalConversion generated from: '<S527>/OffrdEnrgyTxType'
     */
    (void)Rte_Write_VeIDCR_e_OffrdEnrgyTxType_Value
        (IDCR_ac_B.OutportBufferForOffrdEnrgyTxType);

    /* Outport: '<Root>/VeIDCR_b_OffrdEnrgyTxType_FA' incorporates:
     *  SignalConversion generated from: '<S150>/OffrdEnrgyTxType_FA'
     */
    (void)Rte_Write_VeIDCR_b_OffrdEnrgyTxType_FA_Value
        (IDCR_ac_B.OutportBufferForOffrdEnrgyTxType_FA);

    /* Outport: '<Root>/VeIDCR_e_OffrdPayOptn' incorporates:
     *  SignalConversion generated from: '<S150>/OffrdPayOptn'
     *  SignalConversion generated from: '<S527>/OffrdPayOptn'
     */
    (void)Rte_Write_VeIDCR_e_OffrdPayOptn_Value
        (IDCR_ac_B.OutportBufferForOffrdPayOptn);

    /* Outport: '<Root>/VeIDCR_b_OffrdPayOptn_FA' incorporates:
     *  SignalConversion generated from: '<S150>/OffrdPayOptn_FA'
     */
    (void)Rte_Write_VeIDCR_b_OffrdPayOptn_FA_Value
        (IDCR_ac_B.OutportBufferForOffrdPayOptn_FA);

    /* Outport: '<Root>/VeIDCR_e_PROXY_Plug_and_Charge' incorporates:
     *  SignalConversion generated from: '<S150>/PROXY_Plug_and_Charge'
     *  SignalConversion generated from: '<S530>/PROXY_Plug_and_Charge'
     */
    (void)Rte_Write_VeIDCR_e_PROXY_Plug_and_Charge_Value
        (IDCR_ac_B.OutportBufferForPROXY_Plug_and_Charge);

    /* Outport: '<Root>/VeIDCR_b_PlugAndChargeReq_FA' incorporates:
     *  SignalConversion generated from: '<S150>/PlugAndChargeReqFA_Init'
     */
    (void)Rte_Write_VeIDCR_b_PlugAndChargeReq_FA_Value
        (IDCR_ac_B.OutportBufferForPlugAndChargeReqFA_Init);

    /* Outport: '<Root>/VeIDCR_b_PlugAndChargeReq' incorporates:
     *  SignalConversion generated from: '<S150>/PlugAndChargeReq_Init'
     */
    (void)Rte_Write_VeIDCR_b_PlugAndChargeReq_Value
        (IDCR_ac_B.OutportBufferForPlugAndChargeReq_Init);

    /* Outport: '<Root>/VeIDCR_b_PlugAndChargeReq_SgnlRcvd' incorporates:
     *  SignalConversion generated from: '<S150>/PlugAndChargeReq_SgnlRcvd_Init'
     */
    (void)Rte_Write_VeIDCR_b_PlugAndChargeReq_SgnlRcvd_Value
        (IDCR_ac_B.OutportBufferForPlugAndChargeReq_SgnlRcv);

    /* Outport: '<Root>/VeIDCR_b_ProxStatFA' incorporates:
     *  SignalConversion generated from: '<S150>/ProxStatFA_Init'
     */
    (void)Rte_Write_VeIDCR_b_ProxStatFA_Value
        (IDCR_ac_B.OutportBufferForProxStatFA_Init);

    /* Outport: '<Root>/VeIDCR_e_ProxStat' incorporates:
     *  SignalConversion generated from: '<S150>/ProxStat_Init'
     *  SignalConversion generated from: '<S529>/ProxStat_Init'
     */
    (void)Rte_Write_VeIDCR_e_ProxStat_Value
        (IDCR_ac_B.OutportBufferForProxStat_Init);

    /* Outport: '<Root>/VeIDCR_e_Prox_GBT' incorporates:
     *  SignalConversion generated from: '<S150>/Prox_GBT_Init'
     *  SignalConversion generated from: '<S529>/Prox_GBT_Init'
     */
    (void)Rte_Write_VeIDCR_e_Prox_GBT_Value
        (IDCR_ac_B.OutportBufferForProx_GBT_Init);

    /* Outport: '<Root>/VeIDCR_b_ReceiptRequired' incorporates:
     *  SignalConversion generated from: '<S150>/ReceiptRequired'
     */
    (void)Rte_Write_VeIDCR_b_ReceiptRequired_Value
        (IDCR_ac_B.OutportBufferForReceiptRequired);

    /* Outport: '<Root>/VeIDCR_b_ReceiptRequired_FA' incorporates:
     *  SignalConversion generated from: '<S150>/ReceiptRequired_FA'
     */
    (void)Rte_Write_VeIDCR_b_ReceiptRequired_FA_Value
        (IDCR_ac_B.OutportBufferForReceiptRequired_FA);

    /* Outport: '<Root>/VeIDCR_e_Response_Code' incorporates:
     *  SignalConversion generated from: '<S150>/Response_Code'
     *  SignalConversion generated from: '<S527>/Response_Code'
     */
    (void)Rte_Write_VeIDCR_e_Response_Code_Value
        (IDCR_ac_B.OutportBufferForResponse_Code);

    /* Outport: '<Root>/VeIDCR_b_Response_Code_FA' incorporates:
     *  SignalConversion generated from: '<S150>/Response_Code_FA'
     */
    (void)Rte_Write_VeIDCR_b_Response_Code_FA_Value
        (IDCR_ac_B.OutportBufferForResponse_Code_FA);

    /* Outport: '<Root>/VeIDCR_i_SAScheduleTupleID' incorporates:
     *  SignalConversion generated from: '<S150>/SAScheduleTupleID'
     */
    (void)Rte_Write_VeIDCR_i_SAScheduleTupleID_Value
        (IDCR_ac_B.OutportBufferForSAScheduleTupleID);

    /* Outport: '<Root>/VeIDCR_b_SAScheduleTupleIDFA' incorporates:
     *  SignalConversion generated from: '<S150>/SAScheduleTupleIDFA'
     */
    (void)Rte_Write_VeIDCR_b_SAScheduleTupleIDFA_Value
        (IDCR_ac_B.OutportBufferForSAScheduleTupleIDFA);

    /* Outport: '<Root>/VeIDCR_e_SDP_Sts' incorporates:
     *  SignalConversion generated from: '<S150>/SDP_Sts'
     *  SignalConversion generated from: '<S527>/SDP_Sts'
     */
    (void)Rte_Write_VeIDCR_e_SDP_Sts_Value(IDCR_ac_B.OutportBufferForSDP_Sts);

    /* Outport: '<Root>/VeIDCR_b_SDP_Sts_FA' incorporates:
     *  SignalConversion generated from: '<S150>/SDP_Sts_FA'
     */
    (void)Rte_Write_VeIDCR_b_SDP_Sts_FA_Value
        (IDCR_ac_B.OutportBufferForSDP_Sts_FA);

    /* Outport: '<Root>/VeIDCR_e_SLACSts' incorporates:
     *  SignalConversion generated from: '<S150>/SLACSts'
     *  SignalConversion generated from: '<S527>/SLACSts'
     */
    (void)Rte_Write_VeIDCR_e_SLACSts_Value(IDCR_ac_B.OutportBufferForSLACSts);

    /* Outport: '<Root>/VeIDCR_b_SLACSts_FA' incorporates:
     *  SignalConversion generated from: '<S150>/SLACSts_FA'
     */
    (void)Rte_Write_VeIDCR_b_SLACSts_FA_Value
        (IDCR_ac_B.OutportBufferForSLACSts_FA);

    /* Outport: '<Root>/VeIDCR_K_Service_ID' incorporates:
     *  SignalConversion generated from: '<S150>/Service_ID'
     */
    (void)Rte_Write_VeIDCR_K_Service_ID_Value
        (IDCR_ac_B.OutportBufferForService_ID);

    /* Outport: '<Root>/VeIDCR_b_StatusACPresent' incorporates:
     *  SignalConversion generated from: '<S150>/StatusACPresent_Init'
     */
    (void)Rte_Write_VeIDCR_b_StatusACPresent_Value
        (IDCR_ac_B.OutportBufferForStatusACPresent_Init);

    /* S-Function (fcgen): '<S150>/FcnCallGen' incorporates:
     *  SubSystem: '<S150>/EVCC__InitBlock'
     */
    /* Outport: '<Root>/VeIDCR_e_SupProtoNm' incorporates:
     *  Constant: '<S551>/Constant'
     *  DataTypeConversion: '<S527>/DTCBlk26'
     *  SignalConversion generated from: '<S150>/SupProtoNm'
     */
    (void)Rte_Write_VeIDCR_e_SupProtoNm_Value((sint16)
        CeIDCR_e_SupProtoNm_NoProto);

    /* End of Outputs for S-Function (fcgen): '<S150>/FcnCallGen' */

    /* Outport: '<Root>/VeIDCR_b_SupProtoNm_FA' incorporates:
     *  SignalConversion generated from: '<S150>/SupProtoNm_FA'
     */
    (void)Rte_Write_VeIDCR_b_SupProtoNm_FA_Value
        (IDCR_ac_B.OutportBufferForSupProtoNm_FA);

    /* S-Function (fcgen): '<S150>/FcnCallGen' incorporates:
     *  SubSystem: '<S150>/EVCC__InitBlock'
     */
    /* Outport: '<Root>/VeIDCR_e_SupSchemaID' incorporates:
     *  Constant: '<S552>/Constant'
     *  DataTypeConversion: '<S527>/DTCBlk27'
     *  SignalConversion generated from: '<S150>/SupSchemaID'
     */
    (void)Rte_Write_VeIDCR_e_SupSchemaID_Value((sint16)CeIDCR_e_SupSchemaID_NoID);

    /* End of Outputs for S-Function (fcgen): '<S150>/FcnCallGen' */

    /* Outport: '<Root>/VeIDCR_b_SupSchemaID_FA' incorporates:
     *  SignalConversion generated from: '<S150>/SupSchemaID_FA'
     */
    (void)Rte_Write_VeIDCR_b_SupSchemaID_FA_Value
        (IDCR_ac_B.OutportBufferForSupSchemaID_FA);

    /* S-Function (fcgen): '<S150>/FcnCallGen' incorporates:
     *  SubSystem: '<S150>/EVCC__InitBlock'
     */
    /* Outport: '<Root>/VeIDCR_e_SupVerNumMajor' incorporates:
     *  Constant: '<S548>/Constant'
     *  DataTypeConversion: '<S527>/DTCBlk16'
     *  SignalConversion generated from: '<S150>/SupVerNumMajor'
     */
    (void)Rte_Write_VeIDCR_e_SupVerNumMajor_Value((sint16)
        CeIDCR_e_SupVerNum_NoVer);

    /* End of Outputs for S-Function (fcgen): '<S150>/FcnCallGen' */

    /* Outport: '<Root>/VeIDCR_b_SupVerNumMajor_FA' incorporates:
     *  SignalConversion generated from: '<S150>/SupVerNumMajor_FA'
     */
    (void)Rte_Write_VeIDCR_b_SupVerNumMajor_FA_Value
        (IDCR_ac_B.OutportBufferForSupVerNumMajor_FA);

    /* S-Function (fcgen): '<S150>/FcnCallGen' incorporates:
     *  SubSystem: '<S150>/EVCC__InitBlock'
     */
    /* Outport: '<Root>/VeIDCR_e_SupVerNumMinor' incorporates:
     *  Constant: '<S549>/Constant'
     *  DataTypeConversion: '<S527>/DTCBlk17'
     *  SignalConversion generated from: '<S150>/SupVerNumMinor'
     */
    (void)Rte_Write_VeIDCR_e_SupVerNumMinor_Value((sint16)
        CeIDCR_e_SupVerNum_NoVer);

    /* End of Outputs for S-Function (fcgen): '<S150>/FcnCallGen' */

    /* Outport: '<Root>/VeIDCR_b_SupVerNumMinor_FA' incorporates:
     *  SignalConversion generated from: '<S150>/SupVerNumMinor_FA'
     */
    (void)Rte_Write_VeIDCR_b_SupVerNumMinor_FA_Value
        (IDCR_ac_B.OutportBufferForSupVerNumMinor_FA);

    /* Outport: '<Root>/VeIDCR_b_TCPCommTerminated' incorporates:
     *  SignalConversion generated from: '<S150>/TCPCommTerminated'
     */
    (void)Rte_Write_VeIDCR_b_TCPCommTerminated_Value
        (IDCR_ac_B.OutportBufferForTCPCommTerminated);

    /* Outport: '<Root>/VeIDCR_e_TLS_Connection' incorporates:
     *  SignalConversion generated from: '<S150>/TLS_Connection'
     *  SignalConversion generated from: '<S530>/TLS_Connection'
     */
    (void)Rte_Write_VeIDCR_e_TLS_Connection_Value
        (IDCR_ac_B.OutportBufferForTLS_Connection);

    /* Outport: '<Root>/VeIDCR_b_TLS_ConnectionFA' incorporates:
     *  SignalConversion generated from: '<S150>/TLS_ConnectionFA'
     */
    (void)Rte_Write_VeIDCR_b_TLS_ConnectionFA_Value
        (IDCR_ac_B.OutportBufferForTLS_ConnectionFA);

    /* Outport: '<Root>/VeIDCR_b_TLS_Offered' incorporates:
     *  SignalConversion generated from: '<S150>/TLS_Offered'
     */
    (void)Rte_Write_VeIDCR_b_TLS_Offered_Value
        (IDCR_ac_B.OutportBufferForTLS_Offered);

    /* Outport: '<Root>/VeIDCR_b_TxGBTMsgRequestFA' incorporates:
     *  SignalConversion generated from: '<S150>/TxGBTMsgRequestFA_Init'
     */
    (void)Rte_Write_VeIDCR_b_TxGBTMsgRequestFA_Value
        (IDCR_ac_B.OutportBufferForTxGBTMsgRequestFA_Init);

    /* Outport: '<Root>/VeIDCR_e_TxGBTMsgRequest' incorporates:
     *  SignalConversion generated from: '<S150>/TxGBTMsgRequest_Init'
     *  SignalConversion generated from: '<S529>/TxGBTMsgRequest_Init'
     */
    (void)Rte_Write_VeIDCR_e_TxGBTMsgRequest_Value
        (IDCR_ac_B.OutportBufferForTxGBTMsgRequest_Init);

    /* Outport: '<Root>/VeIDCR_b_TxGBTMsgResponseFA' incorporates:
     *  SignalConversion generated from: '<S150>/TxGBTMsgResponseFA_Init'
     */
    (void)Rte_Write_VeIDCR_b_TxGBTMsgResponseFA_Value
        (IDCR_ac_B.OutportBufferForTxGBTMsgResponseFA_Init);

    /* Outport: '<Root>/VeIDCR_e_TxGBTMsgResponse' incorporates:
     *  SignalConversion generated from: '<S150>/TxGBTMsgResponse_Init'
     *  SignalConversion generated from: '<S529>/TxGBTMsgResponse_Init'
     */
    (void)Rte_Write_VeIDCR_e_TxGBTMsgResponse_Value
        (IDCR_ac_B.OutportBufferForTxGBTMsgResponse_Init);

    /* Outport: '<Root>/VeIDCR_e_TxMsgRequest' incorporates:
     *  SignalConversion generated from: '<S150>/TxMsgRequest'
     *  SignalConversion generated from: '<S527>/TxMsgRequest'
     */
    (void)Rte_Write_VeIDCR_e_TxMsgRequest_Value
        (IDCR_ac_B.OutportBufferForTxMsgRequest);

    /* Outport: '<Root>/VeIDCR_b_TxMsgRequest_FA' incorporates:
     *  SignalConversion generated from: '<S150>/TxMsgRequest_FA'
     */
    (void)Rte_Write_VeIDCR_b_TxMsgRequest_FA_Value
        (IDCR_ac_B.OutportBufferForTxMsgRequest_FA);

    /* Outport: '<Root>/VeIDCR_e_TxMsgResponse' incorporates:
     *  SignalConversion generated from: '<S150>/TxMsgResponse'
     *  SignalConversion generated from: '<S527>/TxMsgResponse'
     */
    (void)Rte_Write_VeIDCR_e_TxMsgResponse_Value
        (IDCR_ac_B.OutportBufferForTxMsgResponse);

    /* Outport: '<Root>/VeIDCR_b_TxMsgResponse_FA' incorporates:
     *  SignalConversion generated from: '<S150>/TxMsgResponse_FA'
     */
    (void)Rte_Write_VeIDCR_b_TxMsgResponse_FA_Value
        (IDCR_ac_B.OutportBufferForTxMsgResponse_FA);

    /* Outport: '<Root>/VeIDCR_Pct_UtilPctOfDCDC' incorporates:
     *  SignalConversion generated from: '<S150>/UtilPctOfDCDC_Init'
     */
    (void)Rte_Write_VeIDCR_Pct_UtilPctOfDCDC_Value
        (IDCR_ac_B.OutportBufferForUtilPctOfDCDC_Init);

    /* Outport: '<Root>/VeIDCR_b_V2L_Detected' incorporates:
     *  SignalConversion generated from: '<S150>/V2L_Detected'
     */
    (void)Rte_Write_VeIDCR_b_V2L_Detected_Value
        (IDCR_ac_B.OutportBufferForV2L_Detected);

    /* Outport: '<Root>/VeIDCR_b_V2L_DetectedFA' incorporates:
     *  SignalConversion generated from: '<S150>/V2L_DetectedFA'
     */
    (void)Rte_Write_VeIDCR_b_V2L_DetectedFA_Value
        (IDCR_ac_B.OutportBufferForV2L_DetectedFA);

    /* Outport: '<Root>/VeIDCR_I_V2L_DischargeCurrent' incorporates:
     *  SignalConversion generated from: '<S150>/V2L_DischargeCurrent'
     */
    (void)Rte_Write_VeIDCR_I_V2L_DischargeCurrent_Value
        (IDCR_ac_B.OutportBufferForV2L_DischargeCurrent);

    /* Outport: '<Root>/VeIDCR_b_V2L_DischargeCurrentFA' incorporates:
     *  SignalConversion generated from: '<S150>/V2L_DischargeCurrentFA'
     */
    (void)Rte_Write_VeIDCR_b_V2L_DischargeCurrentFA_Value
        (IDCR_ac_B.OutportBufferForV2L_DischargeCurrentFA);

    /* Outport: '<Root>/VeIDCR_e_V2L_DischargeDeratingRsn' incorporates:
     *  SignalConversion generated from: '<S150>/V2L_DischargeDeratingRsn'
     *  SignalConversion generated from: '<S532>/V2L_DischargeDeratingRsn'
     */
    (void)Rte_Write_VeIDCR_e_V2L_DischargeDeratingRsn_Value
        (IDCR_ac_B.OutportBufferForV2L_DischargeDeratingR_p);

    /* Outport: '<Root>/VeIDCR_b_V2L_DischargeDeratingRsnFA' incorporates:
     *  SignalConversion generated from: '<S150>/V2L_DischargeDeratingRsnFA'
     */
    (void)Rte_Write_VeIDCR_b_V2L_DischargeDeratingRsnFA_Value
        (IDCR_ac_B.OutportBufferForV2L_DischargeDeratingRsn);

    /* Outport: '<Root>/VeIDCR_e_V2L_DischargeFailSts' incorporates:
     *  SignalConversion generated from: '<S150>/V2L_DischargeFailSts'
     *  SignalConversion generated from: '<S532>/V2L_DischargeFailSts'
     */
    (void)Rte_Write_VeIDCR_e_V2L_DischargeFailSts_Value
        (IDCR_ac_B.OutportBufferForV2L_DischargeFailSts);

    /* Outport: '<Root>/VeIDCR_b_V2L_DischargeFailStsFA' incorporates:
     *  SignalConversion generated from: '<S150>/V2L_DischargeFailStsFA'
     */
    (void)Rte_Write_VeIDCR_b_V2L_DischargeFailStsFA_Value
        (IDCR_ac_B.OutportBufferForV2L_DischargeFailStsFA);

    /* Outport: '<Root>/VeIDCR_e_V2L_DischargeFaultRsn' incorporates:
     *  SignalConversion generated from: '<S150>/V2L_DischargeFaultRsn'
     *  SignalConversion generated from: '<S532>/V2L_DischargeFaultRsn'
     */
    (void)Rte_Write_VeIDCR_e_V2L_DischargeFaultRsn_Value
        (IDCR_ac_B.OutportBufferForV2L_DischargeFaultRsn);

    /* Outport: '<Root>/VeIDCR_b_V2L_DischargeFaultRsnFA' incorporates:
     *  SignalConversion generated from: '<S150>/V2L_DischargeFaultRsnFA'
     */
    (void)Rte_Write_VeIDCR_b_V2L_DischargeFaultRsnFA_Value
        (IDCR_ac_B.OutportBufferForV2L_DischargeFaultRsnFA);

    /* Outport: '<Root>/VeIDCR_U_V2L_DischargeVoltage' incorporates:
     *  SignalConversion generated from: '<S150>/V2L_DischargeVoltage'
     */
    (void)Rte_Write_VeIDCR_U_V2L_DischargeVoltage_Value
        (IDCR_ac_B.OutportBufferForV2L_DischargeVoltage);

    /* Outport: '<Root>/VeIDCR_b_V2L_DischargeVoltageFA' incorporates:
     *  SignalConversion generated from: '<S150>/V2L_DischargeVoltageFA'
     */
    (void)Rte_Write_VeIDCR_b_V2L_DischargeVoltageFA_Value
        (IDCR_ac_B.OutportBufferForV2L_DischargeVoltageFA);

    /* Outport: '<Root>/VeIDCR_f_V2L_Output_Frequency' incorporates:
     *  SignalConversion generated from: '<S150>/V2L_Output_Frequency'
     */
    (void)Rte_Write_VeIDCR_f_V2L_Output_Frequency_Value
        (IDCR_ac_B.OutportBufferForV2L_Output_Frequency);

    /* Outport: '<Root>/VeIDCR_b_V2L_Output_FrequencyFA' incorporates:
     *  SignalConversion generated from: '<S150>/V2L_Output_FrequencyFA'
     */
    (void)Rte_Write_VeIDCR_b_V2L_Output_FrequencyFA_Value
        (IDCR_ac_B.OutportBufferForV2L_Output_FrequencyFA);

    /* Outport: '<Root>/VeIDCR_f_V2L_Pilot_Frequency' incorporates:
     *  SignalConversion generated from: '<S150>/V2L_Pilot_Frequency'
     */
    (void)Rte_Write_VeIDCR_f_V2L_Pilot_Frequency_Value
        (IDCR_ac_B.OutportBufferForV2L_Pilot_Frequency);

    /* Outport: '<Root>/VeIDCR_b_V2L_Pilot_FrequencyFA' incorporates:
     *  SignalConversion generated from: '<S150>/V2L_Pilot_FrequencyFA'
     */
    (void)Rte_Write_VeIDCR_b_V2L_Pilot_FrequencyFA_Value
        (IDCR_ac_B.OutportBufferForV2L_Pilot_FrequencyFA);

    /* Outport: '<Root>/VeIDCR_e_V2X_DerateRsn' incorporates:
     *  SignalConversion generated from: '<S150>/V2XDerateRsn'
     *  SignalConversion generated from: '<S532>/V2XDerateRsn'
     */
    (void)Rte_Write_VeIDCR_e_V2X_DerateRsn_Value
        (IDCR_ac_B.OutportBufferForV2XDerateRsn);

    /* Outport: '<Root>/VeIDCR_b_V2X_DerateRsn_FA' incorporates:
     *  SignalConversion generated from: '<S150>/V2XDerateRsnFA'
     */
    (void)Rte_Write_VeIDCR_b_V2X_DerateRsn_FA_Value
        (IDCR_ac_B.OutportBufferForV2XDerateRsnFA);

    /* Outport: '<Root>/VeIDCR_b_V2X_DerateSts' incorporates:
     *  SignalConversion generated from: '<S150>/V2XDerateSts'
     */
    (void)Rte_Write_VeIDCR_b_V2X_DerateSts_Value
        (IDCR_ac_B.OutportBufferForV2XDerateSts);

    /* Outport: '<Root>/VeIDCR_b_V2X_DerateSts_FA' incorporates:
     *  SignalConversion generated from: '<S150>/V2XDerateStsFA'
     */
    (void)Rte_Write_VeIDCR_b_V2X_DerateSts_FA_Value
        (IDCR_ac_B.OutportBufferForV2XDerateStsFA);

    /* Outport: '<Root>/VeIDCR_b_V2X_FailSts' incorporates:
     *  SignalConversion generated from: '<S150>/V2XFailSts'
     */
    (void)Rte_Write_VeIDCR_b_V2X_FailSts_Value
        (IDCR_ac_B.OutportBufferForV2XFailSts);

    /* Outport: '<Root>/VeIDCR_b_V2X_FailSts_FA' incorporates:
     *  SignalConversion generated from: '<S150>/V2XFailStsFA'
     */
    (void)Rte_Write_VeIDCR_b_V2X_FailSts_FA_Value
        (IDCR_ac_B.OutportBufferForV2XFailStsFA);

    /* Outport: '<Root>/VeIDCR_e_V2X_FaultRsn' incorporates:
     *  SignalConversion generated from: '<S150>/V2XFaultRsn'
     *  SignalConversion generated from: '<S532>/V2XFaultRsn'
     */
    (void)Rte_Write_VeIDCR_e_V2X_FaultRsn_Value
        (IDCR_ac_B.OutportBufferForV2XFaultRsn);

    /* Outport: '<Root>/VeIDCR_b_V2X_FaultRsn_FA' incorporates:
     *  SignalConversion generated from: '<S150>/V2XFaultRsnFA'
     */
    (void)Rte_Write_VeIDCR_b_V2X_FaultRsn_FA_Value
        (IDCR_ac_B.OutportBufferForV2XFaultRsnFA);

    /* Outport: '<Root>/VeIDCR_f_V2X_Frequency' incorporates:
     *  SignalConversion generated from: '<S150>/V2XFrequency'
     */
    (void)Rte_Write_VeIDCR_f_V2X_Frequency_Value
        (IDCR_ac_B.OutportBufferForV2XFrequency);

    /* Outport: '<Root>/VeIDCR_b_V2X_Frequency_FA' incorporates:
     *  SignalConversion generated from: '<S150>/V2XFrequencyFA'
     */
    (void)Rte_Write_VeIDCR_b_V2X_Frequency_FA_Value
        (IDCR_ac_B.OutportBufferForV2XFrequencyFA);

    /* Outport: '<Root>/VeIDCR_I_V2X_InputCurrent' incorporates:
     *  SignalConversion generated from: '<S150>/V2XInCurrent'
     */
    (void)Rte_Write_VeIDCR_I_V2X_InputCurrent_Value
        (IDCR_ac_B.OutportBufferForV2XInCurrent);

    /* Outport: '<Root>/VeIDCR_b_V2X_InputCurrent_FA' incorporates:
     *  SignalConversion generated from: '<S150>/V2XInCurrentFA'
     */
    (void)Rte_Write_VeIDCR_b_V2X_InputCurrent_FA_Value
        (IDCR_ac_B.OutportBufferForV2XInCurrentFA);

    /* Outport: '<Root>/VeIDCR_U_V2X_InputVoltage' incorporates:
     *  SignalConversion generated from: '<S150>/V2XInVoltage'
     */
    (void)Rte_Write_VeIDCR_U_V2X_InputVoltage_Value
        (IDCR_ac_B.OutportBufferForV2XInVoltage);

    /* Outport: '<Root>/VeIDCR_b_V2X_InputVoltage_FA' incorporates:
     *  SignalConversion generated from: '<S150>/V2XInVoltageFA'
     */
    (void)Rte_Write_VeIDCR_b_V2X_InputVoltage_FA_Value
        (IDCR_ac_B.OutportBufferForV2XInVoltageFA);

    /* Outport: '<Root>/VeIDCR_e_V2X_InterlockSts' incorporates:
     *  SignalConversion generated from: '<S150>/V2XInterlockSts'
     *  SignalConversion generated from: '<S532>/V2XInterlockSts'
     */
    (void)Rte_Write_VeIDCR_e_V2X_InterlockSts_Value
        (IDCR_ac_B.OutportBufferForV2XInterlockSts);

    /* Outport: '<Root>/VeIDCR_b_V2X_InterlockSts_FA' incorporates:
     *  SignalConversion generated from: '<S150>/V2XInterlockStsFA'
     */
    (void)Rte_Write_VeIDCR_b_V2X_InterlockSts_FA_Value
        (IDCR_ac_B.OutportBufferForV2XInterlockStsFA);

    /* Outport: '<Root>/VeIDCR_U_V2X_LVFeed' incorporates:
     *  SignalConversion generated from: '<S150>/V2XLVFeed'
     */
    (void)Rte_Write_VeIDCR_U_V2X_LVFeed_Value
        (IDCR_ac_B.OutportBufferForV2XLVFeed);

    /* Outport: '<Root>/VeIDCR_b_V2X_LVFeed_FA' incorporates:
     *  SignalConversion generated from: '<S150>/V2XLVFeedFA'
     */
    (void)Rte_Write_VeIDCR_b_V2X_LVFeed_FA_Value
        (IDCR_ac_B.OutportBufferForV2XLVFeedFA);

    /* Outport: '<Root>/VeIDCR_e_V2X_ModeFeedback' incorporates:
     *  SignalConversion generated from: '<S150>/V2XModeFeedback'
     *  SignalConversion generated from: '<S532>/V2XModeFeedback'
     */
    (void)Rte_Write_VeIDCR_e_V2X_ModeFeedback_Value
        (IDCR_ac_B.OutportBufferForV2XModeFeedback);

    /* Outport: '<Root>/VeIDCR_b_V2X_ModeFeedback_FA' incorporates:
     *  SignalConversion generated from: '<S150>/V2XModeFeedbackFA'
     */
    (void)Rte_Write_VeIDCR_b_V2X_ModeFeedback_FA_Value
        (IDCR_ac_B.OutportBufferForV2XModeFeedbackFA);

    /* Outport: '<Root>/VeIDCR_b_V2X_Sts' incorporates:
     *  SignalConversion generated from: '<S150>/V2XSts'
     */
    (void)Rte_Write_VeIDCR_b_V2X_Sts_Value(IDCR_ac_B.OutportBufferForV2XSts);

    /* Outport: '<Root>/VeIDCR_b_V2X_Sts_FA' incorporates:
     *  SignalConversion generated from: '<S150>/V2XStsFA'
     */
    (void)Rte_Write_VeIDCR_b_V2X_Sts_FA_Value(IDCR_ac_B.OutportBufferForV2XStsFA);

    /* Outport: '<Root>/VeIDCR_b_V2X_EVSE_Service_5_Free_FA' incorporates:
     *  SignalConversion generated from: '<S150>/V2X_EVSE_Service_5_Free_FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_V2X_EVSE_Service_5_Free_FA_Value
        (IDCR_ac_B.OutportBufferForV2X_EVSE_Service_5_Fre_j);

    /* Outport: '<Root>/VeIDCR_b_V2X_EVSE_Service_5_Free' incorporates:
     *  SignalConversion generated from: '<S150>/V2X_EVSE_Service_5_Free_Init'
     */
    (void)Rte_Write_VeIDCR_b_V2X_EVSE_Service_5_Free_Value
        (IDCR_ac_B.OutportBufferForV2X_EVSE_Service_5_Free_);

    /* Outport: '<Root>/VeIDCR_b_V2X_EVSE_Service_5_V2H_FA' incorporates:
     *  SignalConversion generated from: '<S150>/V2X_EVSE_Service_5_V2H_FA_Init'
     */
    (void)Rte_Write_VeIDCR_b_V2X_EVSE_Service_5_V2H_FA_Value
        (IDCR_ac_B.OutportBufferForV2X_EVSE_Service_5_V2H_F);

    /* Outport: '<Root>/VeIDCR_b_V2X_EVSE_Service_5_V2H' incorporates:
     *  SignalConversion generated from: '<S150>/V2X_EVSE_Service_5_V2H_Init'
     */
    (void)Rte_Write_VeIDCR_b_V2X_EVSE_Service_5_V2H_Value
        (IDCR_ac_B.OutportBufferForV2X_EVSE_Service_5_V2H_I);

    /* Outport: '<Root>/VeIDCR_I_IBS_I_Batt' incorporates:
     *  SignalConversion generated from: '<S150>/VeIDCR_I_IBS_I_Batt_Out_Init'
     */
    (void)Rte_Write_VeIDCR_I_IBS_I_Batt_Value
        (IDCR_ac_B.OutportBufferForVeIDCR_I_IBS_I_Batt_Out_);

    /* Outport: '<Root>/VeIDCR_I_IBS_I_Converted' incorporates:
     *  SignalConversion generated from: '<S150>/VeIDCR_I_IBS_I_Converted_Out_Init'
     */
    (void)Rte_Write_VeIDCR_I_IBS_I_Converted_Value
        (IDCR_ac_B.OutportBufferForVeIDCR_I_IBS_I_Converted);

    /* Outport: '<Root>/VeIDCR_b_IBS_I_Batt_FA' incorporates:
     *  SignalConversion generated from: '<S150>/VeIDCR_b_IBS_I_Batt_FA_Out_Init'
     */
    (void)Rte_Write_VeIDCR_b_IBS_I_Batt_FA_Value
        (IDCR_ac_B.OutportBufferForVeIDCR_b_IBS_I_Batt_FA_O);

    /* Outport: '<Root>/VeIDCR_b_IBS_I_Batt_SgnlRcvd' incorporates:
     *  SignalConversion generated from: '<S150>/VeIDCR_b_IBS_I_Batt_SgnlRcvd_Out_Init'
     */
    (void)Rte_Write_VeIDCR_b_IBS_I_Batt_SgnlRcvd_Value
        (IDCR_ac_B.OutportBufferForVeIDCR_b_IBS_I_Batt_Sgnl);

    /* Outport: '<Root>/VeIDCR_b_IBS_I_Converted_FA' incorporates:
     *  SignalConversion generated from: '<S150>/VeIDCR_b_IBS_I_Converted_FA_Out_Init'
     */
    (void)Rte_Write_VeIDCR_b_IBS_I_Converted_FA_Value
        (IDCR_ac_B.OutportBufferForVeIDCR_b_IBS_I_Converted);

    /* Outport: '<Root>/VeIDCR_e_stModeRqAPM' incorporates:
     *  SignalConversion generated from: '<S150>/stModeRqAPM_Init'
     *  SignalConversion generated from: '<S526>/stModeRqAPM_Init'
     */
    (void)Rte_Write_VeIDCR_e_stModeRqAPM_Value
        (IDCR_ac_B.OutportBufferForstModeRqAPM_Init);

    /* Merge: '<Root>/Merge_244' incorporates:
     *  SignalConversion generated from: '<S150>/IBS_BattSOCAcc_Init_IRV'
     * */
    Rte_IrvWrite_IDCR_PwrOn_IBS_BattSOCAcc_Init_IRV_IRV
        (IDCR_ac_B.OutportBufferForIBS_BattSocAcc_Init);

    /* Merge: '<Root>/Merge_20' incorporates:
     *  SignalConversion generated from: '<S150>/IBS_BattTemp_SOC_FA_Init_IRV'
     * */
    Rte_IrvWrite_IDCR_PwrOn_VeIDCR_b_IBS_BattSOCFA_write_IRV
        (IDCR_ac_B.OutportBufferForIBS_BattTemp_SOC_FA_Init);

    /* Merge: '<Root>/Merge_31_Irv' incorporates:
     *  SignalConversion generated from: '<S150>/IBS_Current_Status_FA_Init_write'
     * */
    Rte_IrvWrite_IDCR_PwrOn_VeIDCR_b_IBS_Current_StatusFA_write_IRV
        (IDCR_ac_B.OutportBufferForIBS_Current_Status_FA_In);

    /* Merge: '<Root>/Merge_30_Irv' incorporates:
     *  SignalConversion generated from: '<S150>/IBS_Current_Status_Init_write'
     *  SignalConversion generated from: '<S526>/IBS_Current_Status_Init'
     * */
    Rte_IrvWrite_IDCR_PwrOn_IBS_Current_Status_Init_write_IRV
        (IDCR_ac_B.OutportBufferForIBS_Current_Status_Init);

    /* Merge: '<Root>/Merge_38' incorporates:
     *  SignalConversion generated from: '<S150>/IBS_I_Batt_2_FA_Init_write'
     * */
    Rte_IrvWrite_IDCR_PwrOn_VeIDCR_b_IBS_b_Batt_2FA_write_IRV
        (IDCR_ac_B.OutportBufferForIBS_I_Batt_2_FA_Init);

    /* Merge: '<Root>/Merge_37' incorporates:
     *  SignalConversion generated from: '<S150>/IBS_I_Batt_2_Init_write'
     * */
    Rte_IrvWrite_IDCR_PwrOn_IBS_I_Batt_2_Init_write_IRV
        (IDCR_ac_B.OutportBufferForIBS_I_Batt_2_Init);

    /* Merge: '<Root>/Merge_39' incorporates:
     *  SignalConversion generated from: '<S150>/IBS_I_Batt_2_SnglRcvd_Init_write'
     * */
    Rte_IrvWrite_IDCR_PwrOn_VeIDCR_b_IBS_b_Batt_2Sgnl_Rcvd_write_IRV
        (IDCR_ac_B.OutportBufferForIBS_I_Batt_2_SnglRcvd_In);

    /* Merge: '<Root>/Merge_26' incorporates:
     *  SignalConversion generated from: '<S150>/IBS_I_Batt_FA_Init_write'
     * */
    Rte_IrvWrite_IDCR_PwrOn_VeIDCR_b_IBS_b_BattFA_write_IRV
        (IDCR_ac_B.OutportBufferForIBS_I_Batt_FA_Init);

    /* Merge: '<Root>/Merge_25' incorporates:
     *  SignalConversion generated from: '<S150>/IBS_I_Batt_Init_write'
     * */
    Rte_IrvWrite_IDCR_PwrOn_IBS_I_Batt_Init_write_IRV
        (IDCR_ac_B.OutportBufferForIBS_I_Batt_Init);

    /* Merge: '<Root>/Merge_27' incorporates:
     *  SignalConversion generated from: '<S150>/IBS_I_Batt_SnglRcvd_Init_write'
     * */
    Rte_IrvWrite_IDCR_PwrOn_VeIDCR_b_IBS_b_BattSgnl_Rcvd_write_IRV
        (IDCR_ac_B.OutportBufferForIBS_I_Batt_SnglRcvd_Init);

    /* Merge: '<Root>/Merge_29_Irv' incorporates:
     *  SignalConversion generated from: '<S150>/IBS_I_RANGE_FA_Init_write'
     * */
    Rte_IrvWrite_IDCR_PwrOn_VeIDCR_b_IBS_I_RANGEFA_write_IRV
        (IDCR_ac_B.OutportBufferForIBS_I_RANGE_FA_Init);

    /* Merge: '<Root>/Merge_28_Irv' incorporates:
     *  SignalConversion generated from: '<S150>/IBS_I_RANGE_Init_write'
     *  SignalConversion generated from: '<S526>/IBS_I_RANGE_Init'
     * */
    Rte_IrvWrite_IDCR_PwrOn_IBS_I_RANGE_Init_write_IRV
        (IDCR_ac_B.OutportBufferForIBS_I_RANGE_Init);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Output function */
FUNC(void, IDCR_CODE) TmotIDCR_I_IBS_I_Batt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotIDCR_I_IBS_I_Batt' */
    /* Merge: '<Root>/Merge_27' incorporates:
     *  Chart: '<S352>/TmotIDCR_I_IBS_I_BattChrt'
     *  SignalConversion generated from: '<S352>/VeIDCR_I_IBS_I_BattSgnl_Rcvd_write'
     */
    /* Gateway: TmotIDCR_I_IBS_I_Batt/TmotIDCR_I_IBS_I_BattChrt */
    /* During: TmotIDCR_I_IBS_I_Batt/TmotIDCR_I_IBS_I_BattChrt */
    /* Entry Internal: TmotIDCR_I_IBS_I_Batt/TmotIDCR_I_IBS_I_BattChrt */
    /* Transition: '<S812>:2' */
    Rte_IrvWrite_TmotIDCR_I_IBS_I_Batt_VeIDCR_b_IBS_b_BattSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotIDCR_I_IBS_I_Batt' */
}

/* Output function */
FUNC(void, IDCR_CODE) TmotIDCR_I_IBS_I_Batt_2(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotIDCR_I_IBS_I_Batt_2' */
    /* Merge: '<Root>/Merge_39' incorporates:
     *  Chart: '<S353>/TmotIDCR_I_IBS_I_Batt_2Chrt'
     *  SignalConversion generated from: '<S353>/VeIDCR_I_IBS_I_Batt_2Sgnl_Rcvd_write'
     */
    /* Gateway: TmotIDCR_I_IBS_I_Batt_2/TmotIDCR_I_IBS_I_Batt_2Chrt */
    /* During: TmotIDCR_I_IBS_I_Batt_2/TmotIDCR_I_IBS_I_Batt_2Chrt */
    /* Entry Internal: TmotIDCR_I_IBS_I_Batt_2/TmotIDCR_I_IBS_I_Batt_2Chrt */
    /* Transition: '<S813>:2' */
    Rte_IrvWrite_TmotIDCR_I_IBS_I_Batt_2_VeIDCR_b_IBS_b_Batt_2Sgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotIDCR_I_IBS_I_Batt_2' */
}

/* Output function */
FUNC(void, IDCR_CODE) TmotIDCR_b_IBS_BattTemp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotIDCR_b_IBS_BattTemp' */
    /* Outport: '<Root>/VeIDCR_b_IBS_BattTemp_SgnlRcvd' incorporates:
     *  Chart: '<S354>/TmotIDCR_b_IBS_BattTempChrt'
     *  SignalConversion generated from: '<S354>/VeIDCR_b_IBS_BattTempSgnl_Rcvd'
     */
    /* Gateway: TmotIDCR_b_IBS_BattTemp/TmotIDCR_b_IBS_BattTempChrt */
    /* During: TmotIDCR_b_IBS_BattTemp/TmotIDCR_b_IBS_BattTempChrt */
    /* Entry Internal: TmotIDCR_b_IBS_BattTemp/TmotIDCR_b_IBS_BattTempChrt */
    /* Transition: '<S814>:2' */
    (void)Rte_Write_VeIDCR_b_IBS_BattTemp_SgnlRcvd_Value(false);

    /* End of Outputs for SubSystem: '<Root>/TmotIDCR_b_IBS_BattTemp' */
}

/* Output function */
FUNC(void, IDCR_CODE) TmotIDCR_b_PlugAndChargeReq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotIDCR_b_PlugAndChargeReq' */
    /* Outport: '<Root>/VeIDCR_b_PlugAndChargeReq_SgnlRcvd' incorporates:
     *  Chart: '<S355>/TmotIDCR_b_PlugAndChargeReqChrt'
     *  SignalConversion generated from: '<S355>/VeIDCR_b_PlugAndChargeReq_Sgnl_Rcvd'
     */
    /* Gateway: TmotIDCR_b_PlugAndChargeReq/TmotIDCR_b_PlugAndChargeReqChrt */
    /* During: TmotIDCR_b_PlugAndChargeReq/TmotIDCR_b_PlugAndChargeReqChrt */
    /* Entry Internal: TmotIDCR_b_PlugAndChargeReq/TmotIDCR_b_PlugAndChargeReqChrt */
    /* Transition: '<S815>:2' */
    (void)Rte_Write_VeIDCR_b_PlugAndChargeReq_SgnlRcvd_Value(false);

    /* End of Outputs for SubSystem: '<Root>/TmotIDCR_b_PlugAndChargeReq' */
}

/* Model initialize function */
FUNC(void, IDCR_CODE) IDCR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */
    {
        IDCR_ac_B.OutportBufferForEVSEStsCode = CeIDCR_e_EVSEStsCode_No_Data;
    }

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/IDCR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S150>/FcnCallGen' incorporates:
     *  SubSystem: '<S150>/InitBlock'
     */
    /* SystemInitialize for SignalConversion generated from: '<S529>/ChrgFailSts_Init' incorporates:
     *  Constant: '<S574>/Constant'
     */
    IDCR_ac_B.OutportBufferForChrgFailSts_Init = IDCR_ac_ConstB.Constant_h;

    /* SystemInitialize for SignalConversion generated from: '<S529>/ChrgFailStsFA_Init' */
    IDCR_ac_B.OutportBufferForChrgFailStsFA_Init =
        IDCR_ac_ConstB.ConstantValue_n;

    /* SystemInitialize for SignalConversion generated from: '<S529>/J1772_S2_Status_Init' */
    IDCR_ac_B.OutportBufferForJ1772_S2_Status_Init =
        IDCR_ac_ConstB.ConstantValue31_dl;

    /* SystemInitialize for SignalConversion generated from: '<S529>/J1772_S2_StatusFA_Init' */
    IDCR_ac_B.OutportBufferForJ1772_S2_StatusFA_Init =
        IDCR_ac_ConstB.ConstantValue1_or;

    /* SystemInitialize for SignalConversion generated from: '<S529>/ChrgFail_On_OBCM_Init' */
    IDCR_ac_B.OutportBufferForChrgFail_On_OBCM_Init =
        IDCR_ac_ConstB.ConstantValue32_a;

    /* SystemInitialize for SignalConversion generated from: '<S529>/ChrgFail_On_OBCMFA_Init' */
    IDCR_ac_B.OutportBufferForChrgFail_On_OBCMFA_Init =
        IDCR_ac_ConstB.ConstantValue2_p;

    /* SystemInitialize for SignalConversion generated from: '<S529>/StatusACPresent_Init' */
    IDCR_ac_B.OutportBufferForStatusACPresent_Init =
        IDCR_ac_ConstB.ConstantValue33_h;

    /* SystemInitialize for SignalConversion generated from: '<S529>/StatusACPresentFA_Init' */
    IDCR_ac_B.OutportBufferForStatusACPresentFA_Init =
        IDCR_ac_ConstB.ConstantValue3_d;

    /* SystemInitialize for SignalConversion generated from: '<S529>/ChrgCurrentInput_Init' */
    IDCR_ac_B.OutportBufferForChrgCurrentInput_Init =
        IDCR_ac_ConstB.ConstantValue34_n;

    /* SystemInitialize for SignalConversion generated from: '<S529>/ChrgCurrentFAInput_Init' */
    IDCR_ac_B.OutportBufferForChrgCurrentFAInput_Init =
        IDCR_ac_ConstB.ConstantValue4_j;

    /* SystemInitialize for SignalConversion generated from: '<S529>/ChgEnblSts_Init' */
    IDCR_ac_B.OutportBufferForChgEnblSts_Init = IDCR_ac_ConstB.ConstantValue35_h;

    /* SystemInitialize for SignalConversion generated from: '<S529>/ChgEnblStsFA_Init' */
    IDCR_ac_B.OutportBufferForChgEnblStsFA_Init =
        IDCR_ac_ConstB.ConstantValue5_n;

    /* SystemInitialize for SignalConversion generated from: '<S529>/AC_LnHi_Init' */
    IDCR_ac_B.OutportBufferForAC_LnHi_Init = IDCR_ac_ConstB.ConstantValue36_p;

    /* SystemInitialize for SignalConversion generated from: '<S529>/AC_LnHiFA_Init' */
    IDCR_ac_B.OutportBufferForAC_LnHiFA_Init = IDCR_ac_ConstB.ConstantValue11_f;

    /* SystemInitialize for SignalConversion generated from: '<S529>/J1772InputCrntAval_Init' */
    IDCR_ac_B.OutportBufferForJ1772InputCrntAval_Init =
        IDCR_ac_ConstB.ConstantValue37_n;

    /* SystemInitialize for SignalConversion generated from: '<S529>/J1772InputCrntAvalFA_Init' */
    IDCR_ac_B.OutportBufferForJ1772InputCrntAvalFA_Ini =
        IDCR_ac_ConstB.ConstantValue10_l;

    /* SystemInitialize for SignalConversion generated from: '<S529>/BattNotDetctd_Init' */
    IDCR_ac_B.OutportBufferForBattNotDetctd_Init =
        IDCR_ac_ConstB.ConstantValue26_c;

    /* SystemInitialize for SignalConversion generated from: '<S529>/BattNotDetctdFA_Init' */
    IDCR_ac_B.OutportBufferForBattNotDetctdFA_Init =
        IDCR_ac_ConstB.ConstantValue9_i;

    /* SystemInitialize for SignalConversion generated from: '<S529>/AC_LnLow_Init' */
    IDCR_ac_B.OutportBufferForAC_LnLow_Init = IDCR_ac_ConstB.ConstantValue39_l;

    /* SystemInitialize for SignalConversion generated from: '<S529>/AC_LnLowFA_Init' */
    IDCR_ac_B.OutportBufferForAC_LnLowFA_Init = IDCR_ac_ConstB.ConstantValue8_f;

    /* SystemInitialize for SignalConversion generated from: '<S529>/BattSide_Curr_Init' */
    IDCR_ac_B.OutportBufferForBattSide_Curr_Init =
        IDCR_ac_ConstB.ConstantValue18_h;

    /* SystemInitialize for SignalConversion generated from: '<S529>/BattSide_CurrFA_Init' */
    IDCR_ac_B.OutportBufferForBattSide_CurrFA_Init =
        IDCR_ac_ConstB.ConstantValue7_k;

    /* SystemInitialize for SignalConversion generated from: '<S529>/ChrgCrntAvail_Init' */
    IDCR_ac_B.OutportBufferForChrgCrntAvail_Init =
        IDCR_ac_ConstB.ConstantValue41_g;

    /* SystemInitialize for SignalConversion generated from: '<S529>/ChrgCrntAvailFA_Init' */
    IDCR_ac_B.OutportBufferForChrgCrntAvailFA_Init =
        IDCR_ac_ConstB.ConstantValue6_co;

    /* SystemInitialize for SignalConversion generated from: '<S529>/EVSE_PilotStat_OBCM_Init' incorporates:
     *  Constant: '<S575>/Constant'
     */
    IDCR_ac_B.OutportBufferForEVSE_PilotStat_OBCM_Init =
        IDCR_ac_ConstB.Constant_o;

    /* SystemInitialize for SignalConversion generated from: '<S529>/EVSE_PilotStat_OBCMFA_Init' */
    IDCR_ac_B.OutportBufferForEVSE_PilotStat_OBCMFA_In =
        IDCR_ac_ConstB.ConstantValue13_nl;

    /* SystemInitialize for SignalConversion generated from: '<S529>/ProxStat_Init' incorporates:
     *  Constant: '<S582>/Calib'
     */
    IDCR_ac_B.OutportBufferForProxStat_Init = KeIDCR_e_Init_ProxStat;

    /* SystemInitialize for SignalConversion generated from: '<S529>/ProxStatFA_Init' */
    IDCR_ac_B.OutportBufferForProxStatFA_Init = IDCR_ac_ConstB.ConstantValue14_m;

    /* SystemInitialize for SignalConversion generated from: '<S529>/J1772Stat_Init' */
    IDCR_ac_B.OutportBufferForJ1772Stat_Init = IDCR_ac_ConstB.ConstantValue59;

    /* SystemInitialize for SignalConversion generated from: '<S529>/J1772StatFA_Init' */
    IDCR_ac_B.OutportBufferForJ1772StatFA_Init =
        IDCR_ac_ConstB.ConstantValue15_e;

    /* SystemInitialize for SignalConversion generated from: '<S529>/ChrgrModeStat_OBCM_Init' incorporates:
     *  Constant: '<S576>/Constant'
     */
    IDCR_ac_B.OutportBufferForChrgrModeStat_OBCM_Init =
        IDCR_ac_ConstB.Constant_k;

    /* SystemInitialize for SignalConversion generated from: '<S529>/ChrgrModeStat_OBCMFA_Init' */
    IDCR_ac_B.OutportBufferForChrgrModeStat_OBCMFA_Ini =
        IDCR_ac_ConstB.ConstantValue16_n;

    /* SystemInitialize for SignalConversion generated from: '<S529>/OBCM_Charger_Ready_Init' */
    IDCR_ac_B.OutportBufferForOBCM_Charger_Ready_Init =
        IDCR_ac_ConstB.ConstantValue57;

    /* SystemInitialize for SignalConversion generated from: '<S529>/OBCM_Charger_ReadyFA_Init' */
    IDCR_ac_B.OutportBufferForOBCM_Charger_ReadyFA_Ini =
        IDCR_ac_ConstB.ConstantValue17_a;

    /* SystemInitialize for SignalConversion generated from: '<S529>/ChrgEnblOBCM_Init' */
    IDCR_ac_B.OutportBufferForChrgEnblOBCM_Init =
        IDCR_ac_ConstB.ConstantValue56_f;

    /* SystemInitialize for SignalConversion generated from: '<S529>/ChrgEnblOBCMFA_Init' */
    IDCR_ac_B.OutportBufferForChrgEnblOBCMFA_Init =
        IDCR_ac_ConstB.ConstantValue23_l;

    /* SystemInitialize for SignalConversion generated from: '<S529>/AC_InputVltOBCM_Init' */
    IDCR_ac_B.OutportBufferForAC_InputVltOBCM_Init =
        IDCR_ac_ConstB.ConstantValue22_h;

    /* SystemInitialize for SignalConversion generated from: '<S529>/AC_InputVltOBCMFA_Init' */
    IDCR_ac_B.OutportBufferForAC_InputVltOBCMFA_Init =
        IDCR_ac_ConstB.ConstantValue21_n;

    /* SystemInitialize for SignalConversion generated from: '<S529>/BattSideVolt_Init' */
    IDCR_ac_B.OutportBufferForBattSideVolt_Init =
        IDCR_ac_ConstB.ConstantValue53_c;

    /* SystemInitialize for SignalConversion generated from: '<S529>/BattSideVoltFA_Init' */
    IDCR_ac_B.OutportBufferForBattSideVoltFA_Init =
        IDCR_ac_ConstB.ConstantValue20_d;

    /* SystemInitialize for SignalConversion generated from: '<S529>/AC_Side_Curr_Init' */
    IDCR_ac_B.OutportBufferForAC_Side_Curr_Init =
        IDCR_ac_ConstB.ConstantValue52_n;

    /* SystemInitialize for SignalConversion generated from: '<S529>/AC_Side_CurrFA_Init' */
    IDCR_ac_B.OutportBufferForAC_Side_CurrFA_Init =
        IDCR_ac_ConstB.ConstantValue19_j;

    /* SystemInitialize for SignalConversion generated from: '<S529>/RdyForChrgFA_Init' */
    IDCR_ac_B.OutportBufferForRdyForChrgFA_Init =
        IDCR_ac_ConstB.ConstantValue25_pq;

    /* SystemInitialize for SignalConversion generated from: '<S529>/BalMd_Init' */
    IDCR_ac_B.OutportBufferForBalMd_Init = IDCR_ac_ConstB.ConstantValue38_i;

    /* SystemInitialize for SignalConversion generated from: '<S529>/BalMdFA_Init' */
    IDCR_ac_B.OutportBufferForBalMdFA_Init = IDCR_ac_ConstB.ConstantValue29_pa;

    /* SystemInitialize for SignalConversion generated from: '<S529>/Pct_SOC_REM_Setpt_Init' */
    IDCR_ac_B.OutportBufferForPct_SOC_REM_Setpt_Init =
        IDCR_ac_ConstB.ConstantValue28_k;

    /* SystemInitialize for SignalConversion generated from: '<S529>/SOC_REM_SetptFA_Init' */
    IDCR_ac_B.OutportBufferForSOC_REM_SetptFA_Init =
        IDCR_ac_ConstB.ConstantValue12_h;

    /* SystemInitialize for SignalConversion generated from: '<S529>/ACSideVolt_L2_Init' */
    IDCR_ac_B.OutportBufferForACSideVolt_L2_Init =
        IDCR_ac_ConstB.ConstantValue24_g;

    /* SystemInitialize for SignalConversion generated from: '<S529>/ACSideVolt_L2FA_Init' */
    IDCR_ac_B.OutportBufferForACSideVolt_L2FA_Init =
        IDCR_ac_ConstB.ConstantValue43_o;

    /* SystemInitialize for SignalConversion generated from: '<S529>/ACSideVolt_L3_Init' */
    IDCR_ac_B.OutportBufferForACSideVolt_L3_Init =
        IDCR_ac_ConstB.ConstantValue27_k;

    /* SystemInitialize for SignalConversion generated from: '<S529>/ACSideVolt_L3FA_Init' */
    IDCR_ac_B.OutportBufferForACSideVolt_L3FA_Init =
        IDCR_ac_ConstB.ConstantValue45_f;

    /* SystemInitialize for SignalConversion generated from: '<S529>/ACSideCurr_L2_Init' */
    IDCR_ac_B.OutportBufferForACSideCurr_L2_Init =
        IDCR_ac_ConstB.ConstantValue40_nx;

    /* SystemInitialize for SignalConversion generated from: '<S529>/ACSideCurr_L3_Init' */
    IDCR_ac_B.OutportBufferForACSideCurr_L3_Init =
        IDCR_ac_ConstB.ConstantValue42_l;

    /* SystemInitialize for SignalConversion generated from: '<S529>/OBCM_Chrgr_Rdy' incorporates:
     *  Constant: '<S563>/Constant'
     */
    IDCR_ac_B.OutportBufferForOBCM_Chrgr_Rdy = IDCR_ac_ConstB.Constant_dt;

    /* SystemInitialize for SignalConversion generated from: '<S529>/OBCM_HVILSts_Init' incorporates:
     *  Constant: '<S580>/Constant'
     */
    IDCR_ac_B.OutportBufferForOBCM_HVILSts_Init = IDCR_ac_ConstB.Constant_lf;

    /* SystemInitialize for SignalConversion generated from: '<S529>/OBCM_HVILStsFA_Init' */
    IDCR_ac_B.OutportBufferForOBCM_HVILStsFA_Init =
        IDCR_ac_ConstB.ConstantValue44_d;

    /* SystemInitialize for SignalConversion generated from: '<S529>/EVSer_On_OBCM_Init' */
    IDCR_ac_B.OutportBufferForEVSer_On_OBCM_Init =
        IDCR_ac_ConstB.ConstantValue30_au;

    /* SystemInitialize for SignalConversion generated from: '<S529>/OBCM_Timeout_Init' */
    IDCR_ac_B.OutportBufferForOBCM_Timeout_Init =
        IDCR_ac_ConstB.ConstantValue46_i;

    /* SystemInitialize for SignalConversion generated from: '<S529>/OBCM_Timeout_FA_Init' */
    IDCR_ac_B.OutportBufferForOBCM_Timeout_FA_Init =
        IDCR_ac_ConstB.ConstantValue76;

    /* SystemInitialize for SignalConversion generated from: '<S529>/Chrgr_FaultStates_Init' incorporates:
     *  Constant: '<S577>/Constant'
     */
    IDCR_ac_B.OutportBufferForChrgr_FaultStates_Init =
        IDCR_ac_ConstB.Constant_ap;

    /* SystemInitialize for SignalConversion generated from: '<S529>/Chrgr_FaultStatesFA_Init' */
    IDCR_ac_B.OutportBufferForChrgr_FaultStatesFA_Init =
        IDCR_ac_ConstB.ConstantValue47_e;

    /* SystemInitialize for SignalConversion generated from: '<S529>/Prox_GBT_Init' incorporates:
     *  Constant: '<S578>/Constant'
     */
    IDCR_ac_B.OutportBufferForProx_GBT_Init = IDCR_ac_ConstB.Constant_dm;

    /* SystemInitialize for SignalConversion generated from: '<S529>/TxGBTMsgRequest_Init' incorporates:
     *  Constant: '<S579>/Constant'
     */
    IDCR_ac_B.OutportBufferForTxGBTMsgRequest_Init = IDCR_ac_ConstB.Constant_km;

    /* SystemInitialize for SignalConversion generated from: '<S529>/TxGBTMsgRequestFA_Init' */
    IDCR_ac_B.OutportBufferForTxGBTMsgRequestFA_Init =
        IDCR_ac_ConstB.ConstantValue48_b;

    /* SystemInitialize for SignalConversion generated from: '<S529>/TxGBTMsgResponse_Init' incorporates:
     *  Constant: '<S581>/Constant'
     */
    IDCR_ac_B.OutportBufferForTxGBTMsgResponse_Init = IDCR_ac_ConstB.Constant_l;

    /* SystemInitialize for SignalConversion generated from: '<S529>/TxGBTMsgResponseFA_Init' */
    IDCR_ac_B.OutportBufferForTxGBTMsgResponseFA_Init =
        IDCR_ac_ConstB.ConstantValue49_j;

    /* SystemInitialize for SignalConversion generated from: '<S529>/GBT_EVSEChrgPermitting_Init' */
    IDCR_ac_B.OutportBufferForGBT_EVSEChrgPermitting_I =
        IDCR_ac_ConstB.ConstantValue50_g;

    /* SystemInitialize for SignalConversion generated from: '<S529>/OBC_Prox_Init' */
    IDCR_ac_B.OutportBufferForOBC_Prox_Init = IDCR_ac_ConstB.ConstantValue51;

    /* SystemInitialize for SignalConversion generated from: '<S529>/OBC_ProxFA_Init' */
    IDCR_ac_B.OutportBufferForOBC_ProxFA_Init = IDCR_ac_ConstB.ConstantValue54_n;

    /* SystemInitialize for SignalConversion generated from: '<S529>/EVSE_Offered_AC_Single_Phase_Init' */
    IDCR_ac_B.OutportBufferForEVSE_Offered_AC_Single_P =
        IDCR_ac_ConstB.ConstantValue55_m;

    /* SystemInitialize for SignalConversion generated from: '<S529>/EVSE_Offered_AC_Single_Phase_FA_Init' */
    IDCR_ac_B.OutportBufferForEVSE_Offered_AC_Single_d =
        IDCR_ac_ConstB.ConstantValue58_k;

    /* SystemInitialize for SignalConversion generated from: '<S529>/EVSE_Offered_AC_Three_Phase_Init' */
    IDCR_ac_B.OutportBufferForEVSE_Offered_AC_Three_Ph =
        IDCR_ac_ConstB.ConstantValue60_h;

    /* SystemInitialize for SignalConversion generated from: '<S529>/EVSE_Offered_AC_Three_Phase_FA_Init' */
    IDCR_ac_B.OutportBufferForEVSE_Offered_AC_Three__p =
        IDCR_ac_ConstB.ConstantValue61_n;

    /* SystemInitialize for SignalConversion generated from: '<S529>/EVSE_Offered_DC_Extended_Init' */
    IDCR_ac_B.OutportBufferForEVSE_Offered_DC_Extended =
        IDCR_ac_ConstB.ConstantValue62_c;

    /* SystemInitialize for SignalConversion generated from: '<S529>/EVSE_Offered_DC_Extended_FA_Init' */
    IDCR_ac_B.OutportBufferForEVSE_Offered_DC_Extend_f =
        IDCR_ac_ConstB.ConstantValue63_h;

    /* SystemInitialize for SignalConversion generated from: '<S529>/EVSE_Service1_Charging_Init' */
    IDCR_ac_B.OutportBufferForEVSE_Service1_Charging_I =
        IDCR_ac_ConstB.ConstantValue64_b;

    /* SystemInitialize for SignalConversion generated from: '<S529>/EVSE_Service1_Charging_FA_Init' */
    IDCR_ac_B.OutportBufferForEVSE_Service1_Charging_F =
        IDCR_ac_ConstB.ConstantValue65_l;

    /* SystemInitialize for SignalConversion generated from: '<S529>/EVSE_Service1_Free_Init' */
    IDCR_ac_B.OutportBufferForEVSE_Service1_Free_Init =
        IDCR_ac_ConstB.ConstantValue66_g;

    /* SystemInitialize for SignalConversion generated from: '<S529>/EVSE_Service1_Free_FA_Init' */
    IDCR_ac_B.OutportBufferForEVSE_Service1_Free_FA_In =
        IDCR_ac_ConstB.ConstantValue67_n;

    /* SystemInitialize for SignalConversion generated from: '<S529>/ISO15118_EVSETimeStamp_Init' */
    IDCR_ac_B.OutportBufferForISO15118_EVSETimeStamp_I =
        IDCR_ac_ConstB.ConstantValue68;

    /* SystemInitialize for SignalConversion generated from: '<S529>/ISO15118_EVSETimeStamp_FA_Init' */
    IDCR_ac_B.OutportBufferForISO15118_EVSETimeStamp_F =
        IDCR_ac_ConstB.ConstantValue69_g;

    /* SystemInitialize for SignalConversion generated from: '<S529>/ISO15118_MessageResponse_Init' incorporates:
     *  Constant: '<S564>/Constant'
     */
    IDCR_ac_B.OutportBufferForISO15118_MessageRespon_b =
        IDCR_ac_ConstB.Constant_jg;

    /* SystemInitialize for SignalConversion generated from: '<S529>/ISO15118_MessageResponse_FA_Init' */
    IDCR_ac_B.OutportBufferForISO15118_MessageResponse =
        IDCR_ac_ConstB.ConstantValue70_l;

    /* SystemInitialize for SignalConversion generated from: '<S529>/EVSE_Accepted_Protocol_Init' */
    IDCR_ac_B.OutportBufferForEVSE_Accepted_Protocol_I =
        IDCR_ac_ConstB.ConstantValue71;

    /* SystemInitialize for SignalConversion generated from: '<S529>/EVSE_Accepted_ProtocolFA_Init' */
    IDCR_ac_B.OutportBufferForEVSE_Accepted_ProtocolFA =
        IDCR_ac_ConstB.ConstantValue72_j;

    /* SystemInitialize for SignalConversion generated from: '<S529>/EVSE_OfferedService_Init' incorporates:
     *  Constant: '<S565>/Constant'
     */
    IDCR_ac_B.OutportBufferForEVSE_OfferedService_Init =
        IDCR_ac_ConstB.Constant_k1;

    /* SystemInitialize for SignalConversion generated from: '<S529>/EVSE_OfferedService_FA_Init' */
    IDCR_ac_B.OutportBufferForEVSE_OfferedService_FA_I =
        IDCR_ac_ConstB.ConstantValue73_k;

    /* SystemInitialize for SignalConversion generated from: '<S529>/EVSE_ChrgStopControl_Init' incorporates:
     *  Constant: '<S566>/Constant'
     */
    IDCR_ac_B.OutportBufferForEVSE_ChrgStopControl_Ini =
        IDCR_ac_ConstB.Constant_pe;

    /* SystemInitialize for SignalConversion generated from: '<S529>/EVSE_ChrgStopControl_FA_Init' */
    IDCR_ac_B.OutportBufferForEVSE_ChrgStopControl_FA_ =
        IDCR_ac_ConstB.ConstantValue74;

    /* SystemInitialize for SignalConversion generated from: '<S529>/EVSE_Error_Init' incorporates:
     *  Constant: '<S567>/Constant'
     */
    IDCR_ac_B.OutportBufferForEVSE_Error_Init = IDCR_ac_ConstB.Constant_m2;

    /* SystemInitialize for SignalConversion generated from: '<S529>/EVSE_Error_FA_Init' */
    IDCR_ac_B.OutportBufferForEVSE_Error_FA_Init =
        IDCR_ac_ConstB.ConstantValue75;

    /* SystemInitialize for SignalConversion generated from: '<S529>/IDCM_GFCI_Fault_Status_Init' */
    IDCR_ac_B.OutportBufferForIDCM_GFCI_Fault_Status_I =
        IDCR_ac_ConstB.ConstantValue77;

    /* SystemInitialize for SignalConversion generated from: '<S529>/IDCM_GFCI_Fault_Status_FA_Init' */
    IDCR_ac_B.OutportBufferForIDCM_GFCI_Fault_Status_F =
        IDCR_ac_ConstB.ConstantValue78;

    /* SystemInitialize for SignalConversion generated from: '<S529>/Charger_WeldingDetectAvail_Init' incorporates:
     *  Constant: '<S568>/Constant'
     */
    IDCR_ac_B.OutportBufferForCharger_WeldingDetectA_m =
        IDCR_ac_ConstB.Constant_g;

    /* SystemInitialize for SignalConversion generated from: '<S529>/Charger_WeldingDetectAvail_FA_Init' */
    IDCR_ac_B.OutportBufferForCharger_WeldingDetectAva =
        IDCR_ac_ConstB.ConstantValue79;

    /* SystemInitialize for SignalConversion generated from: '<S529>/ExtChargerSts_Init' incorporates:
     *  Constant: '<S569>/Constant'
     */
    IDCR_ac_B.OutportBufferForExtChargerSts_Init = IDCR_ac_ConstB.Constant_ao;

    /* SystemInitialize for SignalConversion generated from: '<S529>/ExtChargerSts_FA_Init' */
    IDCR_ac_B.OutportBufferForExtChargerSts_FA_Init =
        IDCR_ac_ConstB.ConstantValue80;

    /* SystemInitialize for SignalConversion generated from: '<S529>/OBCM_CP1Sts_Init' incorporates:
     *  Constant: '<S570>/Constant'
     */
    IDCR_ac_B.OutportBufferForOBCM_CP1Sts_Init = IDCR_ac_ConstB.Constant_ex;

    /* SystemInitialize for SignalConversion generated from: '<S529>/OBCM_CP1Sts_FA_Init' */
    IDCR_ac_B.OutportBufferForOBCM_CP1Sts_FA_Init =
        IDCR_ac_ConstB.ConstantValue81;

    /* SystemInitialize for SignalConversion generated from: '<S529>/OBCM_CP2Sts_Init' incorporates:
     *  Constant: '<S571>/Constant'
     */
    IDCR_ac_B.OutportBufferForOBCM_CP2Sts_Init = IDCR_ac_ConstB.Constant_i1;

    /* SystemInitialize for SignalConversion generated from: '<S529>/OBCM_CP2Sts_FA_Init' */
    IDCR_ac_B.OutportBufferForOBCM_CP2Sts_FA_Init =
        IDCR_ac_ConstB.ConstantValue82;

    /* SystemInitialize for SignalConversion generated from: '<S529>/OBCM_CP3Sts_Init' incorporates:
     *  Constant: '<S572>/Constant'
     */
    IDCR_ac_B.OutportBufferForOBCM_CP3Sts_Init = IDCR_ac_ConstB.Constant_dw;

    /* SystemInitialize for SignalConversion generated from: '<S529>/OBCM_CP3Sts_FA_Init' */
    IDCR_ac_B.OutportBufferForOBCM_CP3Sts_FA_Init =
        IDCR_ac_ConstB.ConstantValue83;

    /* SystemInitialize for SignalConversion generated from: '<S529>/OBCM_CSSts_Init' incorporates:
     *  Constant: '<S573>/Constant'
     */
    IDCR_ac_B.OutportBufferForOBCM_CSSts_Init = IDCR_ac_ConstB.Constant_ml;

    /* SystemInitialize for SignalConversion generated from: '<S529>/OBCM_CSSts_FA_Init' */
    IDCR_ac_B.OutportBufferForOBCM_CSSts_FA_Init =
        IDCR_ac_ConstB.ConstantValue84;

    /* SystemInitialize for SignalConversion generated from: '<S529>/V2X_EVSE_Service_5_Free_Init' */
    IDCR_ac_B.OutportBufferForV2X_EVSE_Service_5_Free_ =
        IDCR_ac_ConstB.ConstantValue85;

    /* SystemInitialize for SignalConversion generated from: '<S529>/V2X_EVSE_Service_5_Free_FA_Init' */
    IDCR_ac_B.OutportBufferForV2X_EVSE_Service_5_Fre_j =
        IDCR_ac_ConstB.ConstantValue86;

    /* SystemInitialize for SignalConversion generated from: '<S529>/IDCM_Wakeup_HCP_Init' */
    IDCR_ac_B.OutportBufferForIDCM_Wakeup_HCP_Init =
        IDCR_ac_ConstB.ConstantValue87;

    /* SystemInitialize for SignalConversion generated from: '<S529>/IDCM_Wakeup_HCP_FA_Init' */
    IDCR_ac_B.OutportBufferForIDCM_Wakeup_HCP_FA_Init =
        IDCR_ac_ConstB.ConstantValue88;

    /* SystemInitialize for SignalConversion generated from: '<S529>/DC_Isolation_Disable_Cmd_Init' */
    IDCR_ac_B.OutportBufferForDC_Isolation_Disable_Cmd =
        IDCR_ac_ConstB.ConstantValue89;

    /* SystemInitialize for SignalConversion generated from: '<S529>/DC_Isolation_Disable_Cmd_FA_Init' */
    IDCR_ac_B.OutportBufferForDC_Isolation_Disable_C_b =
        IDCR_ac_ConstB.ConstantValue90;

    /* SystemInitialize for SignalConversion generated from: '<S529>/V2X_EVSE_Service_5_V2H_Init' */
    IDCR_ac_B.OutportBufferForV2X_EVSE_Service_5_V2H_I =
        IDCR_ac_ConstB.ConstantValue91;

    /* SystemInitialize for SignalConversion generated from: '<S529>/V2X_EVSE_Service_5_V2H_FA_Init' */
    IDCR_ac_B.OutportBufferForV2X_EVSE_Service_5_V2H_F =
        IDCR_ac_ConstB.ConstantValue92;

    /* SystemInitialize for SignalConversion generated from: '<S529>/HVCMS_EVSEID_Init' */
    IDCR_ac_B.OutportBufferForHVCMS_EVSEID_Init = IDCR_ac_ConstB.ConstantValue93;

    /* SystemInitialize for SignalConversion generated from: '<S529>/HVCMS_EVSEID_FA_Init' */
    IDCR_ac_B.OutportBufferForHVCMS_EVSEID_FA_Init =
        IDCR_ac_ConstB.ConstantValue94;

    /* SystemInitialize for S-Function (fcgen): '<S150>/FcnCallGen' incorporates:
     *  SubSystem: '<S150>/APM_Interface__InitBlock'
     */
    /* SystemInitialize for SignalConversion generated from: '<S526>/IDCRgSPDtyCycReq_Init' */
    IDCR_ac_B.OutportBufferForIDCRgSPDtyCycReq_Init =
        IDCR_ac_ConstB.ConstantValue24;

    /* SystemInitialize for SignalConversion generated from: '<S526>/APM_HeatPlateTemp_Init' incorporates:
     *  Constant: '<S547>/Calib'
     */
    IDCR_ac_B.OutportBufferForAPM_HeatPlateTemp_Init =
        KeIDCR_T_APM_HeatPlateTempDflt;

    /* SystemInitialize for SignalConversion generated from: '<S526>/APM_HeatPlateTempFA_Init' */
    IDCR_ac_B.OutportBufferForAPM_HeatPlateTempFA_Init =
        IDCR_ac_ConstB.ConstantValue31_d;

    /* SystemInitialize for SignalConversion generated from: '<S526>/APM_LvIsetPFdbk_Init' */
    IDCR_ac_B.OutportBufferForAPM_LvIsetPFdbk_Init =
        IDCR_ac_ConstB.ConstantValue27;

    /* SystemInitialize for SignalConversion generated from: '<S526>/APM_LvIsetPFdbkFA_Init' */
    IDCR_ac_B.OutportBufferForAPM_LvIsetPFdbkFA_Init =
        IDCR_ac_ConstB.ConstantValue32_o;

    /* SystemInitialize for SignalConversion generated from: '<S526>/IdcHvSetPFdbk_Init' */
    IDCR_ac_B.OutportBufferForIdcHvSetPFdbk_Init = IDCR_ac_ConstB.ConstantValue1;

    /* SystemInitialize for SignalConversion generated from: '<S526>/IdcHvSetPFdbkFA_Init' */
    IDCR_ac_B.OutportBufferForIdcHvSetPFdbkFA_Init =
        IDCR_ac_ConstB.ConstantValue33_i;

    /* SystemInitialize for SignalConversion generated from: '<S526>/APM_HV_Voltage_Init' */
    IDCR_ac_B.OutportBufferForAPM_HV_Voltage_Init =
        IDCR_ac_ConstB.ConstantValue2_j;

    /* SystemInitialize for SignalConversion generated from: '<S526>/APM_HV_VoltageFA_Init' */
    IDCR_ac_B.OutportBufferForAPM_HV_VoltageFA_Init =
        IDCR_ac_ConstB.ConstantValue3_k;

    /* SystemInitialize for SignalConversion generated from: '<S526>/APM_HvVsetPFdbk_Init' */
    IDCR_ac_B.OutportBufferForAPM_HvVsetPFdbk_Init =
        IDCR_ac_ConstB.ConstantValue30;

    /* SystemInitialize for SignalConversion generated from: '<S526>/APM_OutputPower_Init' */
    IDCR_ac_B.OutportBufferForAPM_OutputPower_Init =
        IDCR_ac_ConstB.ConstantValue4_c;

    /* SystemInitialize for SignalConversion generated from: '<S526>/APM_OutputPowerFA_Init' */
    IDCR_ac_B.OutportBufferForAPM_OutputPowerFA_Init =
        IDCR_ac_ConstB.ConstantValue5_a;

    /* SystemInitialize for SignalConversion generated from: '<S526>/APM_InputPower_Init' */
    IDCR_ac_B.OutportBufferForAPM_InputPower_Init =
        IDCR_ac_ConstB.ConstantValue34;

    /* SystemInitialize for SignalConversion generated from: '<S526>/APM_InputPowerFA_Init' */
    IDCR_ac_B.OutportBufferForAPM_InputPowerFA_Init =
        IDCR_ac_ConstB.ConstantValue11_b;

    /* SystemInitialize for SignalConversion generated from: '<S526>/APM_HV_Current_Init' */
    IDCR_ac_B.OutportBufferForAPM_HV_Current_Init =
        IDCR_ac_ConstB.ConstantValue37;

    /* SystemInitialize for SignalConversion generated from: '<S526>/APM_HV_CurrentFA_Init' */
    IDCR_ac_B.OutportBufferForAPM_HV_CurrentFA_Init =
        IDCR_ac_ConstB.ConstantValue10_p;

    /* SystemInitialize for SignalConversion generated from: '<S526>/APM_LV_Voltage_Init' */
    IDCR_ac_B.OutportBufferForAPM_LV_Voltage_Init =
        IDCR_ac_ConstB.ConstantValue26_a;

    /* SystemInitialize for SignalConversion generated from: '<S526>/APM_LV_VoltageFA_Init' */
    IDCR_ac_B.OutportBufferForAPM_LV_VoltageFA_Init =
        IDCR_ac_ConstB.ConstantValue9_m;

    /* SystemInitialize for SignalConversion generated from: '<S526>/APM_LV_Current_Init' */
    IDCR_ac_B.OutportBufferForAPM_LV_Current_Init =
        IDCR_ac_ConstB.ConstantValue35;

    /* SystemInitialize for SignalConversion generated from: '<S526>/APM_LV_CurrentFA_Init' */
    IDCR_ac_B.OutportBufferForAPM_LV_CurrentFA_Init =
        IDCR_ac_ConstB.ConstantValue8_b;

    /* SystemInitialize for SignalConversion generated from: '<S526>/APM_PwrLoss_Init' */
    IDCR_ac_B.OutportBufferForAPM_PwrLoss_Init =
        IDCR_ac_ConstB.ConstantValue18_d;

    /* SystemInitialize for SignalConversion generated from: '<S526>/APM_PwrLossFA_Init' */
    IDCR_ac_B.OutportBufferForAPM_PwrLossFA_Init =
        IDCR_ac_ConstB.ConstantValue7_c;

    /* SystemInitialize for SignalConversion generated from: '<S526>/EVRDesVSetP_Init' */
    IDCR_ac_B.OutportBufferForEVRDesVSetP_Init = IDCR_ac_ConstB.ConstantValue41;

    /* SystemInitialize for SignalConversion generated from: '<S526>/EVRDesVSetPFA_Init' */
    IDCR_ac_B.OutportBufferForEVRDesVSetPFA_Init =
        IDCR_ac_ConstB.ConstantValue6_p;

    /* SystemInitialize for SignalConversion generated from: '<S526>/VdcHvFdbk_Init' */
    IDCR_ac_B.OutportBufferForVdcHvFdbk_Init = IDCR_ac_ConstB.ConstantValue36_m;

    /* SystemInitialize for SignalConversion generated from: '<S526>/stModeRqAPM_Init' incorporates:
     *  Constant: '<S541>/Constant'
     */
    IDCR_ac_B.OutportBufferForstModeRqAPM_Init = IDCR_ac_ConstB.Constant_d4;

    /* SystemInitialize for SignalConversion generated from: '<S526>/APM_DeratingReason_Init' */
    IDCR_ac_B.OutportBufferForAPM_DeratingReason_Init =
        IDCR_ac_ConstB.ConstantValue39;

    /* SystemInitialize for SignalConversion generated from: '<S526>/APM_OutletCoolantTemp_Init' */
    IDCR_ac_B.OutportBufferForAPM_OutletCoolantTemp_In =
        IDCR_ac_ConstB.ConstantValue40_n;

    /* SystemInitialize for SignalConversion generated from: '<S526>/APM_DeratingPower_Init' */
    IDCR_ac_B.OutportBufferForAPM_DeratingPower_Init =
        IDCR_ac_ConstB.ConstantValue14_e;

    /* SystemInitialize for SignalConversion generated from: '<S526>/APM_FailureModeStatus_Init' incorporates:
     *  Constant: '<S540>/Constant'
     */
    IDCR_ac_B.OutportBufferForAPM_FailureModeStatus_In =
        IDCR_ac_ConstB.Constant_hk;

    /* SystemInitialize for SignalConversion generated from: '<S526>/APM_DeratingModeStatus_Init' incorporates:
     *  Constant: '<S543>/Constant'
     */
    IDCR_ac_B.OutportBufferForAPM_DeratingModeStatus_I =
        IDCR_ac_ConstB.Constant_ar;

    /* SystemInitialize for SignalConversion generated from: '<S526>/APM_FailureReason_Init' incorporates:
     *  Constant: '<S539>/Constant'
     */
    IDCR_ac_B.OutportBufferForAPM_FailureReason_Init =
        IDCR_ac_ConstB.Constant_ab;

    /* SystemInitialize for SignalConversion generated from: '<S526>/IBS_BattTemp_Init' */
    IDCR_ac_B.OutportBufferForIBS_BattTemp_Init =
        IDCR_ac_ConstB.ConstantValue42_m;

    /* SystemInitialize for SignalConversion generated from: '<S526>/IBS_BattTempSts_Init' incorporates:
     *  Constant: '<S542>/Constant'
     */
    IDCR_ac_B.OutportBufferForIBS_BattTempSts_Init = IDCR_ac_ConstB.Constant_og;

    /* SystemInitialize for SignalConversion generated from: '<S526>/IBS_BattVolt_Init' */
    IDCR_ac_B.OutportBufferForIBS_BattVolt_Init = IDCR_ac_ConstB.ConstantValue43;

    /* SystemInitialize for SignalConversion generated from: '<S526>/IBS_BattVoltSts_Init' */
    IDCR_ac_B.OutportBufferForIBS_BattVoltSts_Init =
        IDCR_ac_ConstB.ConstantValue23_a;

    /* SystemInitialize for SignalConversion generated from: '<S526>/IBS_BattSOC_Init' */
    IDCR_ac_B.OutportBufferForIBS_BattSOC_Init =
        IDCR_ac_ConstB.ConstantValue22_d;

    /* SystemInitialize for SignalConversion generated from: '<S526>/IBS_BattSocAcc_Init' */
    IDCR_ac_B.OutportBufferForIBS_BattSocAcc_Init =
        IDCR_ac_ConstB.ConstantValue58;

    /* SystemInitialize for SignalConversion generated from: '<S526>/IBS2_BattTemp_Init' */
    IDCR_ac_B.OutportBufferForIBS2_BattTemp_Init =
        IDCR_ac_ConstB.ConstantValue53;

    /* SystemInitialize for SignalConversion generated from: '<S526>/APMTemp1_Init' */
    IDCR_ac_B.OutportBufferForAPMTemp1_Init = IDCR_ac_ConstB.ConstantValue20_g;

    /* SystemInitialize for SignalConversion generated from: '<S526>/APMTemp1_FA_Init' */
    IDCR_ac_B.OutportBufferForAPMTemp1_FA_Init =
        IDCR_ac_ConstB.ConstantValue44_ey;

    /* SystemInitialize for SignalConversion generated from: '<S526>/APMTemp2_Init' */
    IDCR_ac_B.OutportBufferForAPMTemp2_Init = IDCR_ac_ConstB.ConstantValue19_b;

    /* SystemInitialize for SignalConversion generated from: '<S526>/APMTemp2_FA_Init' */
    IDCR_ac_B.OutportBufferForAPMTemp2_FA_Init =
        IDCR_ac_ConstB.ConstantValue25_p;

    /* SystemInitialize for SignalConversion generated from: '<S526>/UtilPctOfDCDC_Init' */
    IDCR_ac_B.OutportBufferForUtilPctOfDCDC_Init =
        IDCR_ac_ConstB.ConstantValue45;

    /* SystemInitialize for SignalConversion generated from: '<S526>/UtilPctOfDCDC_FA_Init' */
    IDCR_ac_B.OutportBufferForUtilPctOfDCDC_FA_Init =
        IDCR_ac_ConstB.ConstantValue29_d;

    /* SystemInitialize for SignalConversion generated from: '<S526>/HvTooHighIStatus_Init' */
    IDCR_ac_B.OutportBufferForHvTooHighIStatus_Init =
        IDCR_ac_ConstB.ConstantValue12_eu;

    /* SystemInitialize for SignalConversion generated from: '<S526>/HvTooLowVStatus_Init' */
    IDCR_ac_B.OutportBufferForHvTooLowVStatus_Init =
        IDCR_ac_ConstB.ConstantValue28_o;

    /* SystemInitialize for SignalConversion generated from: '<S526>/HvOverVStatus_Init' */
    IDCR_ac_B.OutportBufferForHvOverVStatus_Init =
        IDCR_ac_ConstB.ConstantValue48_a;

    /* SystemInitialize for SignalConversion generated from: '<S526>/LvTooHighIStatus_Init' */
    IDCR_ac_B.OutportBufferForLvTooHighIStatus_Init =
        IDCR_ac_ConstB.ConstantValue38_m;

    /* SystemInitialize for SignalConversion generated from: '<S526>/LvTooLowVStatus_Init' */
    IDCR_ac_B.OutportBufferForLvTooLowVStatus_Init =
        IDCR_ac_ConstB.ConstantValue46_e;

    /* SystemInitialize for SignalConversion generated from: '<S526>/LvHighVStatus_Init' */
    IDCR_ac_B.OutportBufferForLvHighVStatus_Init =
        IDCR_ac_ConstB.ConstantValue47_c;

    /* SystemInitialize for SignalConversion generated from: '<S526>/APMFailureType' incorporates:
     *  Constant: '<S538>/Constant'
     */
    IDCR_ac_B.OutportBufferForAPMFailureType = IDCR_ac_ConstB.Constant_a5;

    /* SystemInitialize for SignalConversion generated from: '<S526>/IBS_BattTemp_FA_Init' */
    IDCR_ac_B.OutportBufferForIBS_BattTemp_FA_Init =
        IDCR_ac_ConstB.ConstantValue13_h;

    /* SystemInitialize for SignalConversion generated from: '<S526>/IBS_BattTemp_SgnlRcvd_Init' */
    IDCR_ac_B.OutportBufferForIBS_BattTemp_SgnlRcvd_In =
        IDCR_ac_ConstB.ConstantValue15_m;

    /* SystemInitialize for SignalConversion generated from: '<S526>/IBS_Volt_FA_Init' */
    IDCR_ac_B.OutportBufferForIBS_Volt_FA_Init =
        IDCR_ac_ConstB.ConstantValue16_dz;

    /* SystemInitialize for SignalConversion generated from: '<S526>/IBS_BattTemp_SOC_FA_Init' */
    IDCR_ac_B.OutportBufferForIBS_BattTemp_SOC_FA_Init =
        IDCR_ac_ConstB.ConstantValue17_o;

    /* SystemInitialize for SignalConversion generated from: '<S526>/APM_HvVsetPFdbk_FA_Init' */
    IDCR_ac_B.OutportBufferForAPM_HvVsetPFdbk_FA_Init =
        IDCR_ac_ConstB.ConstantValue49_a;

    /* SystemInitialize for SignalConversion generated from: '<S526>/IBS_I_Batt_Init' */
    IDCR_ac_B.OutportBufferForIBS_I_Batt_Init = IDCR_ac_ConstB.ConstantValue52_d;

    /* SystemInitialize for SignalConversion generated from: '<S526>/IBS_I_Batt_FA_Init' */
    IDCR_ac_B.OutportBufferForIBS_I_Batt_FA_Init =
        IDCR_ac_ConstB.ConstantValue54_d;

    /* SystemInitialize for SignalConversion generated from: '<S526>/IBS_I_Batt_SnglRcvd_Init' */
    IDCR_ac_B.OutportBufferForIBS_I_Batt_SnglRcvd_Init =
        IDCR_ac_ConstB.ConstantValue55_g;

    /* SystemInitialize for SignalConversion generated from: '<S526>/IBS_I_Batt_2_Init' */
    IDCR_ac_B.OutportBufferForIBS_I_Batt_2_Init =
        IDCR_ac_ConstB.ConstantValue50_c;

    /* SystemInitialize for SignalConversion generated from: '<S526>/IBS_I_Batt_2_FA_Init' */
    IDCR_ac_B.OutportBufferForIBS_I_Batt_2_FA_Init =
        IDCR_ac_ConstB.ConstantValue60;

    /* SystemInitialize for SignalConversion generated from: '<S526>/IBS_I_Batt_2_SnglRcvd_Init' */
    IDCR_ac_B.OutportBufferForIBS_I_Batt_2_SnglRcvd_In =
        IDCR_ac_ConstB.ConstantValue61;

    /* SystemInitialize for SignalConversion generated from: '<S526>/IBS_I_RANGE_Init' incorporates:
     *  Constant: '<S545>/Constant'
     */
    IDCR_ac_B.OutportBufferForIBS_I_RANGE_Init = IDCR_ac_ConstB.Constant_ov;

    /* SystemInitialize for SignalConversion generated from: '<S526>/IBS_I_RANGE_FA_Init' */
    IDCR_ac_B.OutportBufferForIBS_I_RANGE_FA_Init =
        IDCR_ac_ConstB.ConstantValue56_l;

    /* SystemInitialize for SignalConversion generated from: '<S526>/IBS_Current_Status_Init' incorporates:
     *  Constant: '<S546>/Constant'
     */
    IDCR_ac_B.OutportBufferForIBS_Current_Status_Init =
        IDCR_ac_ConstB.Constant_mgm;

    /* SystemInitialize for SignalConversion generated from: '<S526>/IBS_Current_Status_FA_Init' */
    IDCR_ac_B.OutportBufferForIBS_Current_Status_FA_In =
        IDCR_ac_ConstB.ConstantValue57_h;

    /* SystemInitialize for SignalConversion generated from: '<S526>/DVC_APMSts_Init' incorporates:
     *  Constant: '<S544>/Constant'
     */
    IDCR_ac_B.OutportBufferForDVC_APMSts_Init = IDCR_ac_ConstB.Constant_j;

    /* SystemInitialize for SignalConversion generated from: '<S526>/APMSts_Init' */
    IDCR_ac_B.OutportBufferForAPMSts_Init = IDCR_ac_ConstB.ConstantValue51_j;

    /* SystemInitialize for SignalConversion generated from: '<S526>/APM2InterlockSts_Init' incorporates:
     *  Constant: '<S533>/Constant'
     */
    IDCR_ac_B.OutportBufferForAPM2InterlockSts_Init = IDCR_ac_ConstB.Constant_lt;

    /* SystemInitialize for SignalConversion generated from: '<S526>/APM2InterlockSts_FA_Init' */
    IDCR_ac_B.OutportBufferForAPM2InterlockSts_FA_Init = IDCR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S526>/APM3InterlockSts_Init' incorporates:
     *  Constant: '<S534>/Constant'
     */
    IDCR_ac_B.OutportBufferForAPM3InterlockSts_Init = IDCR_ac_ConstB.Constant_pj;

    /* SystemInitialize for SignalConversion generated from: '<S526>/APM3InterlockSts_FA_Init' */
    IDCR_ac_B.OutportBufferForAPM3InterlockSts_FA_Init =
        IDCR_ac_ConstB.Constant1;

    /* SystemInitialize for SignalConversion generated from: '<S526>/APM_ThermalRunaway_Init' incorporates:
     *  Constant: '<S535>/Constant'
     */
    IDCR_ac_B.OutportBufferForAPM_ThermalRunaway_Init =
        IDCR_ac_ConstB.Constant_ij;

    /* SystemInitialize for SignalConversion generated from: '<S526>/APMFailureType_FA_Init' */
    IDCR_ac_B.OutportBufferForAPMFailureType_FA_Init = IDCR_ac_ConstB.Constant2;

    /* SystemInitialize for SignalConversion generated from: '<S526>/ISO15118_NotificationMaxDelay_Init' */
    IDCR_ac_B.OutportBufferForISO15118_NotificationMax =
        IDCR_ac_ConstB.ConstantValue21_c;

    /* SystemInitialize for SignalConversion generated from: '<S526>/ISO15118_NotificationMaxDelay_FA_Init' */
    IDCR_ac_B.OutportBufferForISO15118_NotificationM_l =
        IDCR_ac_ConstB.ConstantValue59_p;

    /* SystemInitialize for SignalConversion generated from: '<S526>/ISO15118_ResponseCode_Init' incorporates:
     *  Constant: '<S536>/Constant'
     */
    IDCR_ac_B.OutportBufferForISO15118_ResponseCode_In =
        IDCR_ac_ConstB.Constant_dq;

    /* SystemInitialize for SignalConversion generated from: '<S526>/ISO15118_ResponseCode_FA_Init' */
    IDCR_ac_B.OutportBufferForISO15118_ResponseCode_FA =
        IDCR_ac_ConstB.Constant3;

    /* SystemInitialize for SignalConversion generated from: '<S526>/ISO15118_SAScheduleTupleID_Init' */
    IDCR_ac_B.OutportBufferForISO15118_SAScheduleTuple =
        IDCR_ac_ConstB.ConstantValue62;

    /* SystemInitialize for SignalConversion generated from: '<S526>/ISO15118_SAScheduleTupleID_FA_Init' */
    IDCR_ac_B.OutportBufferForISO15118_SAScheduleTup_d =
        IDCR_ac_ConstB.ConstantValue63;

    /* SystemInitialize for SignalConversion generated from: '<S526>/ISO15118_SchemaID_Init' */
    IDCR_ac_B.OutportBufferForISO15118_SchemaID_Init =
        IDCR_ac_ConstB.ConstantValue64;

    /* SystemInitialize for SignalConversion generated from: '<S526>/ISO15118_SchemaID_FA_Init' */
    IDCR_ac_B.OutportBufferForISO15118_SchemaID_FA_Ini =
        IDCR_ac_ConstB.ConstantValue65;

    /* SystemInitialize for SignalConversion generated from: '<S526>/ISO15118_ServiceID_Init' */
    IDCR_ac_B.OutportBufferForISO15118_ServiceID_Init =
        IDCR_ac_ConstB.ConstantValue66;

    /* SystemInitialize for SignalConversion generated from: '<S526>/ISO15118_ServiceID_FA_Init' */
    IDCR_ac_B.OutportBufferForISO15118_ServiceID_FA_In =
        IDCR_ac_ConstB.ConstantValue67;

    /* SystemInitialize for SignalConversion generated from: '<S526>/ISO15118_TLS_Offered_Init' */
    IDCR_ac_B.OutportBufferForISO15118_TLS_Offered_Ini =
        IDCR_ac_ConstB.ConstantValue68_h;

    /* SystemInitialize for SignalConversion generated from: '<S526>/ISO15118_TLS_Offered_FA_Init' */
    IDCR_ac_B.OutportBufferForISO15118_TLS_Offered_FA_ =
        IDCR_ac_ConstB.ConstantValue69;

    /* SystemInitialize for SignalConversion generated from: '<S526>/ISO15118_TLS_Status_Init' incorporates:
     *  Constant: '<S537>/Constant'
     */
    IDCR_ac_B.OutportBufferForISO15118_TLS_Status_Init =
        IDCR_ac_ConstB.Constant_b;

    /* SystemInitialize for SignalConversion generated from: '<S526>/ISO15118_TLS_Status_FA_Init' */
    IDCR_ac_B.OutportBufferForISO15118_TLS_Status_FA_I =
        IDCR_ac_ConstB.Constant4;

    /* SystemInitialize for SignalConversion generated from: '<S526>/ISO15118_VersionNumMajor_Init' */
    IDCR_ac_B.OutportBufferForISO15118_VersionNumMajor =
        IDCR_ac_ConstB.ConstantValue70;

    /* SystemInitialize for SignalConversion generated from: '<S526>/ISO15118_VersionNumMajor_FA_Init' */
    IDCR_ac_B.OutportBufferForISO15118_VersionNumMaj_f =
        IDCR_ac_ConstB.ConstantValue71_i;

    /* SystemInitialize for SignalConversion generated from: '<S526>/ISO15118_VersionNumMinor_Init' */
    IDCR_ac_B.OutportBufferForISO15118_VersionNumMinor =
        IDCR_ac_ConstB.ConstantValue72;

    /* SystemInitialize for SignalConversion generated from: '<S526>/ISO15118_VersionNumMinor_FA_Init' */
    IDCR_ac_B.OutportBufferForISO15118_VersionNumMin_e =
        IDCR_ac_ConstB.ConstantValue73;

    /* SystemInitialize for S-Function (fcgen): '<S150>/FcnCallGen' incorporates:
     *  SubSystem: '<S150>/EVCC__InitBlock'
     */
    /* SystemInitialize for SignalConversion generated from: '<S527>/DC_TimeOut' */
    IDCR_ac_B.OutportBufferForDC_TimeOut = IDCR_ac_ConstB.ConstantValue2_k;

    /* SystemInitialize for SignalConversion generated from: '<S527>/EVSECurrLmtAchvd' */
    IDCR_ac_B.OutportBufferForEVSECurrLmtAchvd = IDCR_ac_ConstB.ConstantValue1_c;

    /* SystemInitialize for SignalConversion generated from: '<S527>/EVSEOutputCurr' */
    IDCR_ac_B.OutportBufferForEVSEOutputCurr = IDCR_ac_ConstB.ConstantValue;

    /* SystemInitialize for SignalConversion generated from: '<S527>/EVSEOutputCurr_FA' */
    IDCR_ac_B.OutportBufferForEVSEOutputCurr_FA =
        IDCR_ac_ConstB.ConstantValue3_b;

    /* SystemInitialize for SignalConversion generated from: '<S527>/EVSEOutputVolt' */
    IDCR_ac_B.OutportBufferForEVSEOutputVolt = IDCR_ac_ConstB.ConstantValue4_k;

    /* SystemInitialize for SignalConversion generated from: '<S527>/EVSEOutputVolt_FA' */
    IDCR_ac_B.OutportBufferForEVSEOutputVolt_FA =
        IDCR_ac_ConstB.ConstantValue5_d;

    /* SystemInitialize for SignalConversion generated from: '<S527>/EVSEPwrLmtAchvd' */
    IDCR_ac_B.OutportBufferForEVSEPwrLmtAchvd = IDCR_ac_ConstB.ConstantValue6_i;

    /* SystemInitialize for SignalConversion generated from: '<S527>/EVSEVoltLmtAchvd' */
    IDCR_ac_B.OutportBufferForEVSEVoltLmtAchvd = IDCR_ac_ConstB.ConstantValue7_i;

    /* SystemInitialize for SignalConversion generated from: '<S527>/EVSE_EnrgyToBeDlvrd' */
    IDCR_ac_B.OutportBufferForEVSE_EnrgyToBeDlvrd =
        IDCR_ac_ConstB.ConstantValue8;

    /* SystemInitialize for SignalConversion generated from: '<S527>/EVSE_EnrgyToBeDlvrd_FA' */
    IDCR_ac_B.OutportBufferForEVSE_EnrgyToBeDlvrd_FA =
        IDCR_ac_ConstB.ConstantValue9_h;

    /* SystemInitialize for SignalConversion generated from: '<S527>/EVSEMaxPwrLmt' */
    IDCR_ac_B.OutportBufferForEVSEMaxPwrLmt = IDCR_ac_ConstB.ConstantValue10;

    /* SystemInitialize for SignalConversion generated from: '<S527>/EVSEMaxPwrLmt_FA' */
    IDCR_ac_B.OutportBufferForEVSEMaxPwrLmt_FA =
        IDCR_ac_ConstB.ConstantValue11_p;

    /* SystemInitialize for SignalConversion generated from: '<S527>/EVSECurr_RegTol' */
    IDCR_ac_B.OutportBufferForEVSECurr_RegTol = IDCR_ac_ConstB.ConstantValue12;

    /* SystemInitialize for SignalConversion generated from: '<S527>/EVSECurr_RegTol_FA' */
    IDCR_ac_B.OutportBufferForEVSECurr_RegTol_FA =
        IDCR_ac_ConstB.ConstantValue13_j;

    /* SystemInitialize for SignalConversion generated from: '<S527>/EVSEPeakCurrRip' */
    IDCR_ac_B.OutportBufferForEVSEPeakCurrRip = IDCR_ac_ConstB.ConstantValue14;

    /* SystemInitialize for SignalConversion generated from: '<S527>/EVSEPeakCurrRip_FA' */
    IDCR_ac_B.OutportBufferForEVSEPeakCurrRip_FA =
        IDCR_ac_ConstB.ConstantValue15_ay;

    /* SystemInitialize for SignalConversion generated from: '<S527>/EVSEMaxCurrLmt' */
    IDCR_ac_B.OutportBufferForEVSEMaxCurrLmt = IDCR_ac_ConstB.ConstantValue16;

    /* SystemInitialize for SignalConversion generated from: '<S527>/EVSEMaxCurrLmt_FA' */
    IDCR_ac_B.OutportBufferForEVSEMaxCurrLmt_FA =
        IDCR_ac_ConstB.ConstantValue17_n;

    /* SystemInitialize for SignalConversion generated from: '<S527>/EVSEMaxVoltLmt' */
    IDCR_ac_B.OutportBufferForEVSEMaxVoltLmt = IDCR_ac_ConstB.ConstantValue18;

    /* SystemInitialize for SignalConversion generated from: '<S527>/EVSEMaxVoltLmt_FA' */
    IDCR_ac_B.OutportBufferForEVSEMaxVoltLmt_FA =
        IDCR_ac_ConstB.ConstantValue19_p;

    /* SystemInitialize for SignalConversion generated from: '<S527>/EVSEMinCurrLmt' */
    IDCR_ac_B.OutportBufferForEVSEMinCurrLmt = IDCR_ac_ConstB.ConstantValue20;

    /* SystemInitialize for SignalConversion generated from: '<S527>/EVSEMinCurrLmt_FA' */
    IDCR_ac_B.OutportBufferForEVSEMinCurrLmt_FA =
        IDCR_ac_ConstB.ConstantValue21_h;

    /* SystemInitialize for SignalConversion generated from: '<S527>/EVSEMinVoltLmt' */
    IDCR_ac_B.OutportBufferForEVSEMinVoltLmt = IDCR_ac_ConstB.ConstantValue22;

    /* SystemInitialize for SignalConversion generated from: '<S527>/EVSEMinVoltLmt_FA' */
    IDCR_ac_B.OutportBufferForEVSEMinVoltLmt_FA =
        IDCR_ac_ConstB.ConstantValue23_k;

    /* SystemInitialize for SignalConversion generated from: '<S527>/EVSE_FreeService' */
    IDCR_ac_B.OutportBufferForEVSE_FreeService =
        IDCR_ac_ConstB.ConstantValue24_g1;

    /* SystemInitialize for SignalConversion generated from: '<S527>/EVSEProcessing' */
    IDCR_ac_B.OutportBufferForEVSEProcessing = IDCR_ac_ConstB.ConstantValue25_g;

    /* SystemInitialize for SignalConversion generated from: '<S527>/IDCM_DCCA' */
    IDCR_ac_B.OutportBufferForIDCM_DCCA = IDCR_ac_ConstB.ConstantValue26_p;

    /* SystemInitialize for SignalConversion generated from: '<S527>/Service_ID' */
    IDCR_ac_B.OutportBufferForService_ID = IDCR_ac_ConstB.ConstantValue27_f;

    /* SystemInitialize for SignalConversion generated from: '<S527>/Response_Code' incorporates:
     *  Constant: '<S553>/Constant'
     */
    IDCR_ac_B.OutportBufferForResponse_Code = IDCR_ac_ConstB.Constant_a;

    /* SystemInitialize for SignalConversion generated from: '<S527>/Response_Code_FA' */
    IDCR_ac_B.OutportBufferForResponse_Code_FA =
        IDCR_ac_ConstB.ConstantValue28_b;

    /* SystemInitialize for SignalConversion generated from: '<S527>/TxMsgRequest' incorporates:
     *  Constant: '<S554>/Constant'
     */
    IDCR_ac_B.OutportBufferForTxMsgRequest = IDCR_ac_ConstB.Constant_nw;

    /* SystemInitialize for SignalConversion generated from: '<S527>/TxMsgRequest_FA' */
    IDCR_ac_B.OutportBufferForTxMsgRequest_FA = IDCR_ac_ConstB.ConstantValue29_p;

    /* SystemInitialize for SignalConversion generated from: '<S527>/EVSEIsolSts' incorporates:
     *  Constant: '<S557>/Constant'
     */
    IDCR_ac_B.OutportBufferForEVSEIsolSts = IDCR_ac_ConstB.Constant_ob;

    /* SystemInitialize for SignalConversion generated from: '<S527>/EVSEIsolSts_FA' */
    IDCR_ac_B.OutportBufferForEVSEIsolSts_FA = IDCR_ac_ConstB.ConstantValue30_p;

    /* SystemInitialize for SignalConversion generated from: '<S527>/EVSEStsCode' incorporates:
     *  Constant: '<S558>/Constant'
     */
    IDCR_ac_B.OutportBufferForEVSEStsCode = IDCR_ac_ConstB.Constant_nr;

    /* SystemInitialize for SignalConversion generated from: '<S527>/OffrdEnrgyTxType' incorporates:
     *  Constant: '<S559>/Constant'
     */
    IDCR_ac_B.OutportBufferForOffrdEnrgyTxType = IDCR_ac_ConstB.Constant_dj;

    /* SystemInitialize for SignalConversion generated from: '<S527>/OffrdEnrgyTxType_FA' */
    IDCR_ac_B.OutportBufferForOffrdEnrgyTxType_FA =
        IDCR_ac_ConstB.ConstantValue31_p;

    /* SystemInitialize for SignalConversion generated from: '<S527>/OffrdPayOptn' incorporates:
     *  Constant: '<S556>/Constant'
     */
    IDCR_ac_B.OutportBufferForOffrdPayOptn = IDCR_ac_ConstB.Constant_oy;

    /* SystemInitialize for SignalConversion generated from: '<S527>/OffrdPayOptn_FA' */
    IDCR_ac_B.OutportBufferForOffrdPayOptn_FA = IDCR_ac_ConstB.ConstantValue32_d;

    /* SystemInitialize for SignalConversion generated from: '<S527>/SDP_Sts' incorporates:
     *  Constant: '<S561>/Constant'
     */
    IDCR_ac_B.OutportBufferForSDP_Sts = IDCR_ac_ConstB.Constant_h3;

    /* SystemInitialize for SignalConversion generated from: '<S527>/SDP_Sts_FA' */
    IDCR_ac_B.OutportBufferForSDP_Sts_FA = IDCR_ac_ConstB.ConstantValue33_o;

    /* SystemInitialize for SignalConversion generated from: '<S527>/SLACSts' incorporates:
     *  Constant: '<S562>/Constant'
     */
    IDCR_ac_B.OutportBufferForSLACSts = IDCR_ac_ConstB.Constant_hx;

    /* SystemInitialize for SignalConversion generated from: '<S527>/SLACSts_FA' */
    IDCR_ac_B.OutportBufferForSLACSts_FA = IDCR_ac_ConstB.ConstantValue34_nt;

    /* SystemInitialize for SignalConversion generated from: '<S527>/SupProtoNm_FA' */
    IDCR_ac_B.OutportBufferForSupProtoNm_FA = IDCR_ac_ConstB.ConstantValue35_g;

    /* SystemInitialize for SignalConversion generated from: '<S527>/SupSchemaID_FA' */
    IDCR_ac_B.OutportBufferForSupSchemaID_FA = IDCR_ac_ConstB.ConstantValue36_l;

    /* SystemInitialize for SignalConversion generated from: '<S527>/SupVerNumMajor_FA' */
    IDCR_ac_B.OutportBufferForSupVerNumMajor_FA =
        IDCR_ac_ConstB.ConstantValue37_f;

    /* SystemInitialize for SignalConversion generated from: '<S527>/SupVerNumMinor_FA' */
    IDCR_ac_B.OutportBufferForSupVerNumMinor_FA =
        IDCR_ac_ConstB.ConstantValue38_j;

    /* SystemInitialize for SignalConversion generated from: '<S527>/EVCC_FailureRsn' incorporates:
     *  Constant: '<S550>/Constant'
     */
    IDCR_ac_B.OutportBufferForEVCC_FailureRsn = IDCR_ac_ConstB.Constant_e0;

    /* SystemInitialize for SignalConversion generated from: '<S527>/EVCC_FailureRsn_FA' */
    IDCR_ac_B.OutportBufferForEVCC_FailureRsn_FA =
        IDCR_ac_ConstB.ConstantValue39_g;

    /* SystemInitialize for SignalConversion generated from: '<S527>/EVCC_FailureSts' */
    IDCR_ac_B.OutportBufferForEVCC_FailureSts = IDCR_ac_ConstB.ConstantValue40_i;

    /* SystemInitialize for SignalConversion generated from: '<S527>/EVCC_FailureSts_FA' */
    IDCR_ac_B.OutportBufferForEVCC_FailureSts_FA =
        IDCR_ac_ConstB.ConstantValue43_h;

    /* SystemInitialize for SignalConversion generated from: '<S527>/TCPCommTerminated' */
    IDCR_ac_B.OutportBufferForTCPCommTerminated =
        IDCR_ac_ConstB.ConstantValue41_p;

    /* SystemInitialize for SignalConversion generated from: '<S527>/TxMsgResponse' incorporates:
     *  Constant: '<S555>/Constant'
     */
    IDCR_ac_B.OutportBufferForTxMsgResponse = IDCR_ac_ConstB.Constant_po;

    /* SystemInitialize for SignalConversion generated from: '<S527>/TxMsgResponse_FA' */
    IDCR_ac_B.OutportBufferForTxMsgResponse_FA =
        IDCR_ac_ConstB.ConstantValue42_a;

    /* SystemInitialize for SignalConversion generated from: '<S527>/EVSE_CHAdeMOProtocol_Init' incorporates:
     *  Constant: '<S560>/Constant'
     */
    IDCR_ac_B.OutportBufferForEVSE_CHAdeMOProtocol_Ini =
        IDCR_ac_ConstB.Constant_j4;

    /* SystemInitialize for SignalConversion generated from: '<S527>/EVSE_CHAdeMOProtocol_FA_Init' */
    IDCR_ac_B.OutportBufferForEVSE_CHAdeMOProtocol_FA_ =
        IDCR_ac_ConstB.ConstantValue44_e;

    /* SystemInitialize for SignalConversion generated from: '<S527>/EVSE_ChargingSystemError_Init' */
    IDCR_ac_B.OutportBufferForEVSE_ChargingSystemError =
        IDCR_ac_ConstB.ConstantValue45_k;

    /* SystemInitialize for SignalConversion generated from: '<S527>/EVSE_ChargingSystemError_FA_Init' */
    IDCR_ac_B.OutportBufferForEVSE_ChargingSystemErr_d =
        IDCR_ac_ConstB.ConstantValue46_h;

    /* SystemInitialize for SignalConversion generated from: '<S527>/EVSE_EnergizingState_Init' */
    IDCR_ac_B.OutportBufferForEVSE_EnergizingState_Ini =
        IDCR_ac_ConstB.ConstantValue47_b;

    /* SystemInitialize for SignalConversion generated from: '<S527>/EVSE_EnergizingState_FA_Init' */
    IDCR_ac_B.OutportBufferForEVSE_EnergizingState_FA_ =
        IDCR_ac_ConstB.ConstantValue48_d;

    /* SystemInitialize for SignalConversion generated from: '<S527>/EVSE_ThrshldVoltage_Init' */
    IDCR_ac_B.OutportBufferForEVSE_ThrshldVoltage_Init =
        IDCR_ac_ConstB.ConstantValue49;

    /* SystemInitialize for SignalConversion generated from: '<S527>/EVSE_ThrshldVoltage_FA_Init' */
    IDCR_ac_B.OutportBufferForEVSE_ThrshldVoltage_FA_I =
        IDCR_ac_ConstB.ConstantValue50_c5;

    /* SystemInitialize for S-Function (fcgen): '<S150>/FcnCallGen' incorporates:
     *  SubSystem: '<S150>/HVIL__InitBlock'
     */
    /* SystemInitialize for SignalConversion generated from: '<S528>/HVIL_A_Failed_Init' */
    IDCR_ac_B.OutportBufferForHVIL_A_Failed_Init =
        IDCR_ac_ConstB.ConstantValue_i;

    /* SystemInitialize for SignalConversion generated from: '<S528>/HVIL_B_Failed_Init' */
    IDCR_ac_B.OutportBufferForHVIL_B_Failed_Init =
        IDCR_ac_ConstB.ConstantValue31_n;

    /* SystemInitialize for SignalConversion generated from: '<S528>/HVIL_C_Failed_Init' */
    IDCR_ac_B.OutportBufferForHVIL_C_Failed_Init =
        IDCR_ac_ConstB.ConstantValue1_o;

    /* SystemInitialize for S-Function (fcgen): '<S150>/FcnCallGen' incorporates:
     *  SubSystem: '<S150>/V2L__InitBlock'
     */
    /* SystemInitialize for SignalConversion generated from: '<S532>/V2L_Detected' */
    IDCR_ac_B.OutportBufferForV2L_Detected = IDCR_ac_ConstB.ConstantValue_m;

    /* SystemInitialize for SignalConversion generated from: '<S532>/V2L_DetectedFA' */
    IDCR_ac_B.OutportBufferForV2L_DetectedFA = IDCR_ac_ConstB.ConstantValue7_a;

    /* SystemInitialize for SignalConversion generated from: '<S532>/V2L_DischargeCurrent' */
    IDCR_ac_B.OutportBufferForV2L_DischargeCurrent =
        IDCR_ac_ConstB.ConstantValue31;

    /* SystemInitialize for SignalConversion generated from: '<S532>/V2L_DischargeCurrentFA' */
    IDCR_ac_B.OutportBufferForV2L_DischargeCurrentFA =
        IDCR_ac_ConstB.ConstantValue8_g;

    /* SystemInitialize for SignalConversion generated from: '<S532>/V2L_DischargeDeratingRsn' incorporates:
     *  Constant: '<S586>/Constant'
     */
    IDCR_ac_B.OutportBufferForV2L_DischargeDeratingR_p =
        IDCR_ac_ConstB.Constant_n;

    /* SystemInitialize for SignalConversion generated from: '<S532>/V2L_DischargeDeratingRsnFA' */
    IDCR_ac_B.OutportBufferForV2L_DischargeDeratingRsn =
        IDCR_ac_ConstB.ConstantValue9_j;

    /* SystemInitialize for SignalConversion generated from: '<S532>/V2L_DischargeVoltage' */
    IDCR_ac_B.OutportBufferForV2L_DischargeVoltage =
        IDCR_ac_ConstB.ConstantValue2;

    /* SystemInitialize for SignalConversion generated from: '<S532>/V2L_DischargeVoltageFA' */
    IDCR_ac_B.OutportBufferForV2L_DischargeVoltageFA =
        IDCR_ac_ConstB.ConstantValue10_ib;

    /* SystemInitialize for SignalConversion generated from: '<S532>/V2L_Output_Frequency' */
    IDCR_ac_B.OutportBufferForV2L_Output_Frequency =
        IDCR_ac_ConstB.ConstantValue3;

    /* SystemInitialize for SignalConversion generated from: '<S532>/V2L_Output_FrequencyFA' */
    IDCR_ac_B.OutportBufferForV2L_Output_FrequencyFA =
        IDCR_ac_ConstB.ConstantValue11_j;

    /* SystemInitialize for SignalConversion generated from: '<S532>/V2L_Pilot_Frequency' */
    IDCR_ac_B.OutportBufferForV2L_Pilot_Frequency =
        IDCR_ac_ConstB.ConstantValue4_cl;

    /* SystemInitialize for SignalConversion generated from: '<S532>/V2L_Pilot_FrequencyFA' */
    IDCR_ac_B.OutportBufferForV2L_Pilot_FrequencyFA =
        IDCR_ac_ConstB.ConstantValue12_b;

    /* SystemInitialize for SignalConversion generated from: '<S532>/V2L_DischargeFailSts' incorporates:
     *  Constant: '<S589>/Constant'
     */
    IDCR_ac_B.OutportBufferForV2L_DischargeFailSts = IDCR_ac_ConstB.Constant_c;

    /* SystemInitialize for SignalConversion generated from: '<S532>/V2L_DischargeFailStsFA' */
    IDCR_ac_B.OutportBufferForV2L_DischargeFailStsFA =
        IDCR_ac_ConstB.ConstantValue13_n;

    /* SystemInitialize for SignalConversion generated from: '<S532>/V2L_DischargeFaultRsn' incorporates:
     *  Constant: '<S588>/Constant'
     */
    IDCR_ac_B.OutportBufferForV2L_DischargeFaultRsn = IDCR_ac_ConstB.Constant_pg;

    /* SystemInitialize for SignalConversion generated from: '<S532>/V2L_DischargeFaultRsnFA' */
    IDCR_ac_B.OutportBufferForV2L_DischargeFaultRsnFA =
        IDCR_ac_ConstB.ConstantValue14_g;

    /* SystemInitialize for SignalConversion generated from: '<S532>/ACOutFreq' */
    IDCR_ac_B.OutportBufferForACOutFreq = IDCR_ac_ConstB.ConstantValue1_n;

    /* SystemInitialize for SignalConversion generated from: '<S532>/ACOutFreqFA' */
    IDCR_ac_B.OutportBufferForACOutFreqFA = IDCR_ac_ConstB.ConstantValue5_j;

    /* SystemInitialize for SignalConversion generated from: '<S532>/ACOutCurrent1' */
    IDCR_ac_B.OutportBufferForACOutCurrent1 = IDCR_ac_ConstB.ConstantValue6;

    /* SystemInitialize for SignalConversion generated from: '<S532>/OutCurrent1FA' */
    IDCR_ac_B.OutportBufferForOutCurrent1FA = IDCR_ac_ConstB.ConstantValue15_a;

    /* SystemInitialize for SignalConversion generated from: '<S532>/ACOutCurrent2' */
    IDCR_ac_B.OutportBufferForACOutCurrent2 = IDCR_ac_ConstB.ConstantValue17;

    /* SystemInitialize for SignalConversion generated from: '<S532>/OutCurrent2FA' */
    IDCR_ac_B.OutportBufferForOutCurrent2FA = IDCR_ac_ConstB.ConstantValue16_d;

    /* SystemInitialize for SignalConversion generated from: '<S532>/ACOutCurrent3' */
    IDCR_ac_B.OutportBufferForACOutCurrent3 = IDCR_ac_ConstB.ConstantValue19;

    /* SystemInitialize for SignalConversion generated from: '<S532>/OutCurrent3FA' */
    IDCR_ac_B.OutportBufferForOutCurrent3FA = IDCR_ac_ConstB.ConstantValue18_e;

    /* SystemInitialize for SignalConversion generated from: '<S532>/ACOutVoltage1' */
    IDCR_ac_B.OutportBufferForACOutVoltage1 = IDCR_ac_ConstB.ConstantValue21;

    /* SystemInitialize for SignalConversion generated from: '<S532>/ACOutVoltage1FA' */
    IDCR_ac_B.OutportBufferForACOutVoltage1FA = IDCR_ac_ConstB.ConstantValue20_o;

    /* SystemInitialize for SignalConversion generated from: '<S532>/ACOutVoltage2' */
    IDCR_ac_B.OutportBufferForACOutVoltage2 = IDCR_ac_ConstB.ConstantValue23;

    /* SystemInitialize for SignalConversion generated from: '<S532>/ACOutVoltage2FA' */
    IDCR_ac_B.OutportBufferForACOutVoltage2FA = IDCR_ac_ConstB.ConstantValue22_j;

    /* SystemInitialize for SignalConversion generated from: '<S532>/ACOutVoltage3' */
    IDCR_ac_B.OutportBufferForACOutVoltage3 = IDCR_ac_ConstB.ConstantValue25;

    /* SystemInitialize for SignalConversion generated from: '<S532>/ACOutVoltage3FA' */
    IDCR_ac_B.OutportBufferForACOutVoltage3FA = IDCR_ac_ConstB.ConstantValue24_m;

    /* SystemInitialize for SignalConversion generated from: '<S532>/DCInCurrent' */
    IDCR_ac_B.OutportBufferForDCInCurrent = IDCR_ac_ConstB.ConstantValue26;

    /* SystemInitialize for SignalConversion generated from: '<S532>/DCInCurrentFA' */
    IDCR_ac_B.OutportBufferForDCInCurrentFA = IDCR_ac_ConstB.ConstantValue27_i;

    /* SystemInitialize for SignalConversion generated from: '<S532>/DCInVoltage' */
    IDCR_ac_B.OutportBufferForDCInVoltage = IDCR_ac_ConstB.ConstantValue28;

    /* SystemInitialize for SignalConversion generated from: '<S532>/DCInVoltageFA' */
    IDCR_ac_B.OutportBufferForDCInVoltageFA = IDCR_ac_ConstB.ConstantValue29;

    /* SystemInitialize for SignalConversion generated from: '<S532>/DschrgFaultSts' incorporates:
     *  Constant: '<S587>/Constant'
     */
    IDCR_ac_B.OutportBufferForDschrgFaultSts = IDCR_ac_ConstB.Constant_p;

    /* SystemInitialize for SignalConversion generated from: '<S532>/DschrgFaultStsFA' */
    IDCR_ac_B.OutportBufferForDschrgFaultStsFA =
        IDCR_ac_ConstB.ConstantValue30_a;

    /* SystemInitialize for SignalConversion generated from: '<S532>/V2XFrequency' */
    IDCR_ac_B.OutportBufferForV2XFrequency = IDCR_ac_ConstB.ConstantValue32;

    /* SystemInitialize for SignalConversion generated from: '<S532>/V2XFrequencyFA' */
    IDCR_ac_B.OutportBufferForV2XFrequencyFA = IDCR_ac_ConstB.ConstantValue33;

    /* SystemInitialize for SignalConversion generated from: '<S532>/V2XSts' */
    IDCR_ac_B.OutportBufferForV2XSts = IDCR_ac_ConstB.ConstantValue34_i;

    /* SystemInitialize for SignalConversion generated from: '<S532>/V2XStsFA' */
    IDCR_ac_B.OutportBufferForV2XStsFA = IDCR_ac_ConstB.ConstantValue35_k;

    /* SystemInitialize for SignalConversion generated from: '<S532>/AcOutCurrent' */
    IDCR_ac_B.OutportBufferForAcOutCurrent = IDCR_ac_ConstB.ConstantValue36;

    /* SystemInitialize for SignalConversion generated from: '<S532>/AcOutCurrentFA' */
    IDCR_ac_B.OutportBufferForAcOutCurrentFA = IDCR_ac_ConstB.ConstantValue37_e;

    /* SystemInitialize for SignalConversion generated from: '<S532>/AcOutFrequency' */
    IDCR_ac_B.OutportBufferForAcOutFrequency = IDCR_ac_ConstB.ConstantValue38;

    /* SystemInitialize for SignalConversion generated from: '<S532>/AcOutFrequencyFA' */
    IDCR_ac_B.OutportBufferForAcOutFrequencyFA =
        IDCR_ac_ConstB.ConstantValue39_k;

    /* SystemInitialize for SignalConversion generated from: '<S532>/AcOutVoltage' */
    IDCR_ac_B.OutportBufferForAcOutVoltage = IDCR_ac_ConstB.ConstantValue40;

    /* SystemInitialize for SignalConversion generated from: '<S532>/AcOutVoltageFA' */
    IDCR_ac_B.OutportBufferForAcOutVoltageFA = IDCR_ac_ConstB.ConstantValue41_i;

    /* SystemInitialize for SignalConversion generated from: '<S532>/AvailablePower' */
    IDCR_ac_B.OutportBufferForAvailablePower = IDCR_ac_ConstB.ConstantValue42;

    /* SystemInitialize for SignalConversion generated from: '<S532>/AvailablePowerFA' */
    IDCR_ac_B.OutportBufferForAvailablePowerFA =
        IDCR_ac_ConstB.ConstantValue43_d;

    /* SystemInitialize for SignalConversion generated from: '<S532>/V2XDerateRsn' incorporates:
     *  Constant: '<S590>/Constant'
     */
    IDCR_ac_B.OutportBufferForV2XDerateRsn = IDCR_ac_ConstB.Constant_m;

    /* SystemInitialize for SignalConversion generated from: '<S532>/V2XDerateRsnFA' */
    IDCR_ac_B.OutportBufferForV2XDerateRsnFA = IDCR_ac_ConstB.ConstantValue44;

    /* SystemInitialize for SignalConversion generated from: '<S532>/V2XDerateSts' */
    IDCR_ac_B.OutportBufferForV2XDerateSts = IDCR_ac_ConstB.ConstantValue45_g;

    /* SystemInitialize for SignalConversion generated from: '<S532>/V2XDerateStsFA' */
    IDCR_ac_B.OutportBufferForV2XDerateStsFA = IDCR_ac_ConstB.ConstantValue46;

    /* SystemInitialize for SignalConversion generated from: '<S532>/V2XFailSts' */
    IDCR_ac_B.OutportBufferForV2XFailSts = IDCR_ac_ConstB.ConstantValue47;

    /* SystemInitialize for SignalConversion generated from: '<S532>/V2XFailStsFA' */
    IDCR_ac_B.OutportBufferForV2XFailStsFA = IDCR_ac_ConstB.ConstantValue48;

    /* SystemInitialize for SignalConversion generated from: '<S532>/V2XFaultRsn' incorporates:
     *  Constant: '<S591>/Constant'
     */
    IDCR_ac_B.OutportBufferForV2XFaultRsn = IDCR_ac_ConstB.Constant_d;

    /* SystemInitialize for SignalConversion generated from: '<S532>/V2XFaultRsnFA' */
    IDCR_ac_B.OutportBufferForV2XFaultRsnFA = IDCR_ac_ConstB.ConstantValue49_d;

    /* SystemInitialize for SignalConversion generated from: '<S532>/V2XInCurrent' */
    IDCR_ac_B.OutportBufferForV2XInCurrent = IDCR_ac_ConstB.ConstantValue50;

    /* SystemInitialize for SignalConversion generated from: '<S532>/V2XInCurrentFA' */
    IDCR_ac_B.OutportBufferForV2XInCurrentFA = IDCR_ac_ConstB.ConstantValue51_f;

    /* SystemInitialize for SignalConversion generated from: '<S532>/V2XInVoltage' */
    IDCR_ac_B.OutportBufferForV2XInVoltage = IDCR_ac_ConstB.ConstantValue52;

    /* SystemInitialize for SignalConversion generated from: '<S532>/V2XInVoltageFA' */
    IDCR_ac_B.OutportBufferForV2XInVoltageFA = IDCR_ac_ConstB.ConstantValue53_p;

    /* SystemInitialize for SignalConversion generated from: '<S532>/V2XInterlockSts' incorporates:
     *  Constant: '<S592>/Constant'
     */
    IDCR_ac_B.OutportBufferForV2XInterlockSts = IDCR_ac_ConstB.Constant_mg;

    /* SystemInitialize for SignalConversion generated from: '<S532>/V2XInterlockStsFA' */
    IDCR_ac_B.OutportBufferForV2XInterlockStsFA = IDCR_ac_ConstB.ConstantValue54;

    /* SystemInitialize for SignalConversion generated from: '<S532>/V2XLVFeed' */
    IDCR_ac_B.OutportBufferForV2XLVFeed = IDCR_ac_ConstB.ConstantValue55;

    /* SystemInitialize for SignalConversion generated from: '<S532>/V2XLVFeedFA' */
    IDCR_ac_B.OutportBufferForV2XLVFeedFA = IDCR_ac_ConstB.ConstantValue56;

    /* SystemInitialize for SignalConversion generated from: '<S532>/V2XModeFeedback' incorporates:
     *  Constant: '<S593>/Constant'
     */
    IDCR_ac_B.OutportBufferForV2XModeFeedback = IDCR_ac_ConstB.Constant_e;

    /* SystemInitialize for SignalConversion generated from: '<S532>/V2XModeFeedbackFA' */
    IDCR_ac_B.OutportBufferForV2XModeFeedbackFA =
        IDCR_ac_ConstB.ConstantValue57_o;

    /* SystemInitialize for S-Function (fcgen): '<S150>/FcnCallGen' incorporates:
     *  SubSystem: '<S150>/PnC__InitBlock'
     */
    /* SystemInitialize for SignalConversion generated from: '<S530>/TLS_Offered' */
    IDCR_ac_B.OutportBufferForTLS_Offered = IDCR_ac_ConstB.ConstantValue_d;

    /* SystemInitialize for SignalConversion generated from: '<S530>/TLS_Connection' incorporates:
     *  Constant: '<S585>/Constant'
     */
    IDCR_ac_B.OutportBufferForTLS_Connection = IDCR_ac_ConstB.Constant_f;

    /* SystemInitialize for SignalConversion generated from: '<S530>/TLS_ConnectionFA' */
    IDCR_ac_B.OutportBufferForTLS_ConnectionFA = IDCR_ac_ConstB.ConstantValue1_h;

    /* SystemInitialize for SignalConversion generated from: '<S530>/EVSE_Supported_ISO1' */
    IDCR_ac_B.OutportBufferForEVSE_Supported_ISO1 =
        IDCR_ac_ConstB.ConstantValue5;

    /* SystemInitialize for SignalConversion generated from: '<S530>/EVSE_Supported_DIN' */
    IDCR_ac_B.OutportBufferForEVSE_Supported_DIN =
        IDCR_ac_ConstB.ConstantValue8_h;

    /* SystemInitialize for SignalConversion generated from: '<S530>/EVSE_OfferedPaymentContract' */
    IDCR_ac_B.OutportBufferForEVSE_OfferedPaymentContr =
        IDCR_ac_ConstB.ConstantValue6_c;

    /* SystemInitialize for SignalConversion generated from: '<S530>/EVSE_OfferedPaymentEIM' */
    IDCR_ac_B.OutportBufferForEVSE_OfferedPaymentEIM =
        IDCR_ac_ConstB.ConstantValue9;

    /* SystemInitialize for SignalConversion generated from: '<S530>/EVSE_Service2_Certificate' */
    IDCR_ac_B.OutportBufferForEVSE_Service2_Certificat =
        IDCR_ac_ConstB.ConstantValue2_h;

    /* SystemInitialize for SignalConversion generated from: '<S530>/EVSE_Notification' incorporates:
     *  Constant: '<S583>/Constant'
     */
    IDCR_ac_B.OutportBufferForEVSE_Notification = IDCR_ac_ConstB.Constant_kv;

    /* SystemInitialize for SignalConversion generated from: '<S530>/EVSE_NotificationFA' */
    IDCR_ac_B.OutportBufferForEVSE_NotificationFA =
        IDCR_ac_ConstB.ConstantValue10_i;

    /* SystemInitialize for SignalConversion generated from: '<S530>/EVSE_NotificationMaxDelay' */
    IDCR_ac_B.OutportBufferForEVSE_NotificationMaxDela =
        IDCR_ac_ConstB.ConstantValue11;

    /* SystemInitialize for SignalConversion generated from: '<S530>/EVSE_NotificationMaxDelayFA' */
    IDCR_ac_B.OutportBufferForEVSE_NotificationMaxDe_f =
        IDCR_ac_ConstB.ConstantValue3_n;

    /* SystemInitialize for SignalConversion generated from: '<S530>/ReceiptRequired' */
    IDCR_ac_B.OutportBufferForReceiptRequired = IDCR_ac_ConstB.ConstantValue12_e;

    /* SystemInitialize for SignalConversion generated from: '<S530>/ReceiptRequired_FA' */
    IDCR_ac_B.OutportBufferForReceiptRequired_FA =
        IDCR_ac_ConstB.ConstantValue18_j;

    /* SystemInitialize for SignalConversion generated from: '<S530>/EVSE_SASPmax' */
    IDCR_ac_B.OutportBufferForEVSE_SASPmax = IDCR_ac_ConstB.ConstantValue4;

    /* SystemInitialize for SignalConversion generated from: '<S530>/EVSE_SASPmaxFA' */
    IDCR_ac_B.OutportBufferForEVSE_SASPmaxFA = IDCR_ac_ConstB.ConstantValue7;

    /* SystemInitialize for SignalConversion generated from: '<S530>/SAScheduleTupleID' */
    IDCR_ac_B.OutportBufferForSAScheduleTupleID = IDCR_ac_ConstB.ConstantValue13;

    /* SystemInitialize for SignalConversion generated from: '<S530>/SAScheduleTupleIDFA' */
    IDCR_ac_B.OutportBufferForSAScheduleTupleIDFA =
        IDCR_ac_ConstB.ConstantValue14_c;

    /* SystemInitialize for SignalConversion generated from: '<S530>/PROXY_Plug_and_Charge' incorporates:
     *  Constant: '<S584>/Constant'
     */
    IDCR_ac_B.OutportBufferForPROXY_Plug_and_Charge = IDCR_ac_ConstB.Constant_i;

    /* SystemInitialize for SignalConversion generated from: '<S530>/PlugAndChargeReq_Init' */
    IDCR_ac_B.OutportBufferForPlugAndChargeReq_Init =
        IDCR_ac_ConstB.ConstantValue15;

    /* SystemInitialize for SignalConversion generated from: '<S530>/PlugAndChargeReqFA_Init' */
    IDCR_ac_B.OutportBufferForPlugAndChargeReqFA_Init =
        IDCR_ac_ConstB.ConstantValue16_f;

    /* SystemInitialize for SignalConversion generated from: '<S530>/PlugAndChargeReq_SgnlRcvd_Init' */
    IDCR_ac_B.OutportBufferForPlugAndChargeReq_SgnlRcv =
        IDCR_ac_ConstB.ConstantValue17_p;

    /* SystemInitialize for S-Function (fcgen): '<S150>/FcnCallGen' incorporates:
     *  SubSystem: '<S150>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S531>/VeIDCR_I_IBS_I_Batt_Out_Init' */
    IDCR_ac_B.OutportBufferForVeIDCR_I_IBS_I_Batt_Out_ = IDCR_ac_ConstB.Const1;

    /* SystemInitialize for SignalConversion generated from: '<S531>/VeIDCR_b_IBS_I_Batt_FA_Out_Init' */
    IDCR_ac_B.OutportBufferForVeIDCR_b_IBS_I_Batt_FA_O = IDCR_ac_ConstB.Const2;

    /* SystemInitialize for SignalConversion generated from: '<S531>/VeIDCR_b_IBS_I_Batt_SgnlRcvd_Out_Init' */
    IDCR_ac_B.OutportBufferForVeIDCR_b_IBS_I_Batt_Sgnl = IDCR_ac_ConstB.Const3;

    /* SystemInitialize for SignalConversion generated from: '<S531>/VeIDCR_I_IBS_I_Converted_Out_Init' */
    IDCR_ac_B.OutportBufferForVeIDCR_I_IBS_I_Converted = IDCR_ac_ConstB.Const4;

    /* SystemInitialize for SignalConversion generated from: '<S531>/VeIDCR_b_IBS_I_Converted_FA_Out_Init' */
    IDCR_ac_B.OutportBufferForVeIDCR_b_IBS_I_Converted = IDCR_ac_ConstB.Const5;

    /* End of SystemInitialize for S-Function (fcgen): '<S150>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_ChrgFailSts' incorporates:
     *  Merge: '<Root>/Merge_138'
     */
    (void)Rte_Write_VeIDCR_e_ChrgFailSts_Value(CeOBCR_e_No_FLT);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_J1772_S2_Status' incorporates:
     *  Merge: '<Root>/Merge_179'
     */
    (void)Rte_Write_VeIDCR_b_J1772_S2_Status_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_J1772_S2_StatusFA' incorporates:
     *  Merge: '<Root>/Merge_180'
     */
    (void)Rte_Write_VeIDCR_b_J1772_S2_StatusFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_StatusACPresent' incorporates:
     *  Merge: '<Root>/Merge_141'
     */
    (void)Rte_Write_VeIDCR_b_StatusACPresent_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_AC_LnHi' incorporates:
     *  Merge: '<Root>/Merge_146'
     */
    (void)Rte_Write_VeIDCR_b_AC_LnHi_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_I_J1772InputCrntAval' incorporates:
     *  Merge: '<Root>/Merge_152'
     */
    (void)Rte_Write_VeIDCR_I_J1772InputCrntAval_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_AC_LnLow' incorporates:
     *  Merge: '<Root>/Merge_168'
     */
    (void)Rte_Write_VeIDCR_b_AC_LnLow_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_I_BattSide_Curr' incorporates:
     *  Merge: '<Root>/Merge_155'
     */
    (void)Rte_Write_VeIDCR_I_BattSide_Curr_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_I_ChrgCrntAvail' incorporates:
     *  Merge: '<Root>/Merge_157'
     */
    (void)Rte_Write_VeIDCR_I_ChrgCrntAvail_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_ChrgCrntAvailFA' incorporates:
     *  Merge: '<Root>/Merge_158'
     */
    (void)Rte_Write_VeIDCR_b_ChrgCrntAvailFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_EVSE_PilotStat_OBCM' incorporates:
     *  Merge: '<Root>/Merge_163'
     */
    (void)Rte_Write_VeIDCR_e_EVSE_PilotStat_OBCM_Value(CeOBCR_e_NO_EVSE_OBCM);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_ProxStat' incorporates:
     *  Merge: '<Root>/Merge_165'
     */
    (void)Rte_Write_VeIDCR_e_ProxStat_Value(CeOBCR_e_ProxLo_OBCM);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_ProxStatFA' incorporates:
     *  Merge: '<Root>/Merge_159'
     */
    (void)Rte_Write_VeIDCR_b_ProxStatFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_ChrgEnblOBCM' incorporates:
     *  Merge: '<Root>/Merge_171'
     */
    (void)Rte_Write_VeIDCR_b_ChrgEnblOBCM_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_ChrgrModeStat_OBCM' incorporates:
     *  Merge: '<Root>/Merge_176'
     */
    (void)Rte_Write_VeIDCR_e_ChrgrModeStat_OBCM_Value(CeOBCR_e_Idle_OBCM);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_U_AC_InputVltOBCM' incorporates:
     *  Merge: '<Root>/Merge_174'
     */
    (void)Rte_Write_VeIDCR_U_AC_InputVltOBCM_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_I_AC_Side_Curr' incorporates:
     *  Merge: '<Root>/Merge_175'
     */
    (void)Rte_Write_VeIDCR_I_AC_Side_Curr_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_U_APM_HV_Voltage' incorporates:
     *  Merge: '<Root>/Merge_8'
     */
    (void)Rte_Write_VeIDCR_U_APM_HV_Voltage_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_APM_HV_VoltageFA' incorporates:
     *  Merge: '<Root>/Merge_1'
     */
    (void)Rte_Write_VeIDCR_b_APM_HV_VoltageFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_U_APM_HvVsetPFdbk' incorporates:
     *  Merge: '<Root>/Merge_12'
     */
    (void)Rte_Write_VeIDCR_U_APM_HvVsetPFdbk_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_U_EVRDesVSetP' incorporates:
     *  Merge: '<Root>/Merge_23'
     */
    (void)Rte_Write_VeIDCR_U_EVRDesVSetP_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_I_APM_HV_Current' incorporates:
     *  Merge: '<Root>/Merge_34'
     */
    (void)Rte_Write_VeIDCR_I_APM_HV_Current_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_APM_HV_CurrentFA' incorporates:
     *  Merge: '<Root>/Merge_40'
     */
    (void)Rte_Write_VeIDCR_b_APM_HV_CurrentFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_U_APM_LV_Voltage' incorporates:
     *  Merge: '<Root>/Merge_41'
     */
    (void)Rte_Write_VeIDCR_U_APM_LV_Voltage_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_I_APM_LV_Current' incorporates:
     *  Merge: '<Root>/Merge_42'
     */
    (void)Rte_Write_VeIDCR_I_APM_LV_Current_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_T_APM_HeatPlateTemp' incorporates:
     *  Merge: '<Root>/Merge_43'
     */
    (void)Rte_Write_VeIDCR_T_APM_HeatPlateTemp_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_stModeRqAPM' incorporates:
     *  Merge: '<Root>/Merge_44'
     */
    (void)Rte_Write_VeIDCR_e_stModeRqAPM_Value(CeGENR_e_Default);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_T_APM_OutletCoolantTemp' incorporates:
     *  Merge: '<Root>/Merge_2'
     */
    (void)Rte_Write_VeIDCR_T_APM_OutletCoolantTemp_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_APM_FailureReason' incorporates:
     *  Merge: '<Root>/Merge_3'
     */
    (void)Rte_Write_VeIDCR_e_APM_FailureReason_Value(CeGENR_e_NoFailure);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_APM_FailureModeStatus' incorporates:
     *  Merge: '<Root>/Merge_4'
     */
    (void)Rte_Write_VeIDCR_e_APM_FailureModeStatus_Value(CeGENR_e_NoFailure);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_U_IBS_BattVolt' incorporates:
     *  Merge: '<Root>/Merge_6'
     */
    (void)Rte_Write_VeIDCR_U_IBS_BattVolt_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_Pct_IBS_BattSOC' incorporates:
     *  Merge: '<Root>/Merge_7'
     */
    (void)Rte_Write_VeIDCR_Pct_IBS_BattSOC_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_T_IBS2_Temp' incorporates:
     *  Merge: '<Root>/Merge_9'
     */
    (void)Rte_Write_VeIDCR_T_IBS2_Temp_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_APM_FailureType' incorporates:
     *  Merge: '<Root>/Merge_10'
     */
    (void)Rte_Write_VeIDCR_e_APM_FailureType_Value
        (CeGENR_e_FailureType_NoFailure);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_T_APMTemp1' incorporates:
     *  Merge: '<Root>/Merge_11'
     */
    (void)Rte_Write_VeIDCR_T_APMTemp1_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_APMTemp1_FA' incorporates:
     *  Merge: '<Root>/Merge_13'
     */
    (void)Rte_Write_VeIDCR_b_APMTemp1_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_T_APMTemp2' incorporates:
     *  Merge: '<Root>/Merge_14'
     */
    (void)Rte_Write_VeIDCR_T_APMTemp2_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_APMTemp2_FA' incorporates:
     *  Merge: '<Root>/Merge_15'
     */
    (void)Rte_Write_VeIDCR_b_APMTemp2_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_I_ChrgCurrent' incorporates:
     *  Merge: '<Root>/Merge_139'
     */
    (void)Rte_Write_VeIDCR_I_ChrgCurrent_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_ChrgCurrent_FA' incorporates:
     *  Merge: '<Root>/Merge_150'
     */
    (void)Rte_Write_VeIDCR_b_ChrgCurrent_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_U_ACSideVolt_L2' incorporates:
     *  Merge: '<Root>/Merge_161'
     */
    (void)Rte_Write_VeIDCR_U_ACSideVolt_L2_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_U_ACSideVolt_L3' incorporates:
     *  Merge: '<Root>/Merge_172'
     */
    (void)Rte_Write_VeIDCR_U_ACSideVolt_L3_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_I_ACSideCurr_L2' incorporates:
     *  Merge: '<Root>/Merge_177'
     */
    (void)Rte_Write_VeIDCR_I_ACSideCurr_L2_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_I_ACSideCurr_L3' incorporates:
     *  Merge: '<Root>/Merge_178'
     */
    (void)Rte_Write_VeIDCR_I_ACSideCurr_L3_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_OBCM_Chrgr_Rdy' incorporates:
     *  Merge: '<Root>/Merge_181'
     */
    (void)Rte_Write_VeIDCR_e_OBCM_Chrgr_Rdy_Value(CeIDCR_e_CR_WU_FLT);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_DC_TimeOut' incorporates:
     *  Merge: '<Root>/Merge_61'
     */
    (void)Rte_Write_VeIDCR_b_DC_TimeOut_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_EVSECurrLmtAchvd' incorporates:
     *  Merge: '<Root>/Merge_62'
     */
    (void)Rte_Write_VeIDCR_b_EVSECurrLmtAchvd_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_I_EVSEOutputCurr' incorporates:
     *  Merge: '<Root>/Merge_73'
     */
    (void)Rte_Write_VeIDCR_I_EVSEOutputCurr_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_EVSEOutputCurr_FA' incorporates:
     *  Merge: '<Root>/Merge_84'
     */
    (void)Rte_Write_VeIDCR_b_EVSEOutputCurr_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_U_EVSEOutputVolt' incorporates:
     *  Merge: '<Root>/Merge_95'
     */
    (void)Rte_Write_VeIDCR_U_EVSEOutputVolt_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_EVSEOutputVolt_FA' incorporates:
     *  Merge: '<Root>/Merge_106'
     */
    (void)Rte_Write_VeIDCR_b_EVSEOutputVolt_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_EVSEPwrLmtAchvd' incorporates:
     *  Merge: '<Root>/Merge_114'
     */
    (void)Rte_Write_VeIDCR_b_EVSEPwrLmtAchvd_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_EVSEVoltLmtAchvd' incorporates:
     *  Merge: '<Root>/Merge_115'
     */
    (void)Rte_Write_VeIDCR_b_EVSEVoltLmtAchvd_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_E_EVSE_EnrgyToBeDlvrd' incorporates:
     *  Merge: '<Root>/Merge_116'
     */
    (void)Rte_Write_VeIDCR_E_EVSE_EnrgyToBeDlvrd_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_EVSE_EnrgyToBeDlvrd_FA' incorporates:
     *  Merge: '<Root>/Merge_117'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_EnrgyToBeDlvrd_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_P_EVSEMaxPwrLmt' incorporates:
     *  Merge: '<Root>/Merge_63'
     */
    (void)Rte_Write_VeIDCR_P_EVSEMaxPwrLmt_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_EVSEMaxPwrLmt_FA' incorporates:
     *  Merge: '<Root>/Merge_64'
     */
    (void)Rte_Write_VeIDCR_b_EVSEMaxPwrLmt_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_I_EVSECurr_RegTol' incorporates:
     *  Merge: '<Root>/Merge_65'
     */
    (void)Rte_Write_VeIDCR_I_EVSECurr_RegTol_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_EVSECurr_RegTol_FA' incorporates:
     *  Merge: '<Root>/Merge_66'
     */
    (void)Rte_Write_VeIDCR_b_EVSECurr_RegTol_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_I_EVSEPeakCurrRip' incorporates:
     *  Merge: '<Root>/Merge_69'
     */
    (void)Rte_Write_VeIDCR_I_EVSEPeakCurrRip_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_EVSEPeakCurrRip_FA' incorporates:
     *  Merge: '<Root>/Merge_70'
     */
    (void)Rte_Write_VeIDCR_b_EVSEPeakCurrRip_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_I_EVSEMaxCurrLmt' incorporates:
     *  Merge: '<Root>/Merge_71'
     */
    (void)Rte_Write_VeIDCR_I_EVSEMaxCurrLmt_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_EVSEMaxCurrLmt_FA' incorporates:
     *  Merge: '<Root>/Merge_72'
     */
    (void)Rte_Write_VeIDCR_b_EVSEMaxCurrLmt_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_U_EVSEMaxVoltLmt' incorporates:
     *  Merge: '<Root>/Merge_74'
     */
    (void)Rte_Write_VeIDCR_U_EVSEMaxVoltLmt_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_EVSEMaxVoltLmt_FA' incorporates:
     *  Merge: '<Root>/Merge_75'
     */
    (void)Rte_Write_VeIDCR_b_EVSEMaxVoltLmt_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_I_EVSEMinCurrLmt' incorporates:
     *  Merge: '<Root>/Merge_76'
     */
    (void)Rte_Write_VeIDCR_I_EVSEMinCurrLmt_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_EVSEMinCurrLmt_FA' incorporates:
     *  Merge: '<Root>/Merge_77'
     */
    (void)Rte_Write_VeIDCR_b_EVSEMinCurrLmt_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_U_EVSEMinVoltLmt' incorporates:
     *  Merge: '<Root>/Merge_67'
     */
    (void)Rte_Write_VeIDCR_U_EVSEMinVoltLmt_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_EVSEMinVoltLmt_FA' incorporates:
     *  Merge: '<Root>/Merge_68'
     */
    (void)Rte_Write_VeIDCR_b_EVSEMinVoltLmt_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_EVSE_FreeService' incorporates:
     *  Merge: '<Root>/Merge_78'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_FreeService_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_EVSEProcessing' incorporates:
     *  Merge: '<Root>/Merge_79'
     */
    (void)Rte_Write_VeIDCR_b_EVSEProcessing_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_IDCM_DCCA' incorporates:
     *  Merge: '<Root>/Merge_91'
     */
    (void)Rte_Write_VeIDCR_b_IDCM_DCCA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_K_Service_ID' incorporates:
     *  Merge: '<Root>/Merge_97'
     */
    (void)Rte_Write_VeIDCR_K_Service_ID_Value(((uint16)0U));

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_Response_Code' incorporates:
     *  Merge: '<Root>/Merge_98'
     */
    (void)Rte_Write_VeIDCR_e_Response_Code_Value(CeIDCR_e_RC_OK);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_Response_Code_FA' incorporates:
     *  Merge: '<Root>/Merge_99'
     */
    (void)Rte_Write_VeIDCR_b_Response_Code_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_TxMsgRequest' incorporates:
     *  Merge: '<Root>/Merge_100'
     */
    (void)Rte_Write_VeIDCR_e_TxMsgRequest_Value(CeIDCR_e_NoRequest);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_TxMsgRequest_FA' incorporates:
     *  Merge: '<Root>/Merge_101'
     */
    (void)Rte_Write_VeIDCR_b_TxMsgRequest_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_EVSEIsolSts' incorporates:
     *  Merge: '<Root>/Merge_102'
     */
    (void)Rte_Write_VeIDCR_e_EVSEIsolSts_Value(CeIDCR_e_EVSEIsolSts_Invalid);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_EVSEIsolSts_FA' incorporates:
     *  Merge: '<Root>/Merge_103'
     */
    (void)Rte_Write_VeIDCR_b_EVSEIsolSts_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_EVSEStsCode' incorporates:
     *  Merge: '<Root>/Merge_80'
     */
    (void)Rte_Write_VeIDCR_e_EVSEStsCode_Value(CeIDCR_e_EVSEStsCode_No_Data);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_OffrdEnrgyTxType' incorporates:
     *  Merge: '<Root>/Merge_81'
     */
    (void)Rte_Write_VeIDCR_e_OffrdEnrgyTxType_Value
        (CeIDCR_e_EnrgyTxType_NoEnrgyTxType);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_OffrdEnrgyTxType_FA' incorporates:
     *  Merge: '<Root>/Merge_82'
     */
    (void)Rte_Write_VeIDCR_b_OffrdEnrgyTxType_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_OffrdPayOptn' incorporates:
     *  Merge: '<Root>/Merge_83'
     */
    (void)Rte_Write_VeIDCR_e_OffrdPayOptn_Value(CeIDCR_e_OffrdPayOptn_NoPaySel);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_OffrdPayOptn_FA' incorporates:
     *  Merge: '<Root>/Merge_87'
     */
    (void)Rte_Write_VeIDCR_b_OffrdPayOptn_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_SDP_Sts' incorporates:
     *  Merge: '<Root>/Merge_88'
     */
    (void)Rte_Write_VeIDCR_e_SDP_Sts_Value(CeIDCR_e_SDPSts_NoConnEst);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_SDP_Sts_FA' incorporates:
     *  Merge: '<Root>/Merge_89'
     */
    (void)Rte_Write_VeIDCR_b_SDP_Sts_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_SLACSts' incorporates:
     *  Merge: '<Root>/Merge_90'
     */
    (void)Rte_Write_VeIDCR_e_SLACSts_Value(CeIDCR_e_SLACSts_EVSE_NtFnd);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_SLACSts_FA' incorporates:
     *  Merge: '<Root>/Merge_92'
     */
    (void)Rte_Write_VeIDCR_b_SLACSts_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_SupProtoNm' incorporates:
     *  Merge: '<Root>/Merge_93'
     */
    (void)Rte_Write_VeIDCR_e_SupProtoNm_Value(0);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_SupProtoNm_FA' incorporates:
     *  Merge: '<Root>/Merge_94'
     */
    (void)Rte_Write_VeIDCR_b_SupProtoNm_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_SupSchemaID' incorporates:
     *  Merge: '<Root>/Merge_96'
     */
    (void)Rte_Write_VeIDCR_e_SupSchemaID_Value(0);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_SupSchemaID_FA' incorporates:
     *  Merge: '<Root>/Merge_85'
     */
    (void)Rte_Write_VeIDCR_b_SupSchemaID_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_SupVerNumMajor' incorporates:
     *  Merge: '<Root>/Merge_86'
     */
    (void)Rte_Write_VeIDCR_e_SupVerNumMajor_Value(0);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_SupVerNumMajor_FA' incorporates:
     *  Merge: '<Root>/Merge_107'
     */
    (void)Rte_Write_VeIDCR_b_SupVerNumMajor_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_SupVerNumMinor' incorporates:
     *  Merge: '<Root>/Merge_104'
     */
    (void)Rte_Write_VeIDCR_e_SupVerNumMinor_Value(0);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_SupVerNumMinor_FA' incorporates:
     *  Merge: '<Root>/Merge_105'
     */
    (void)Rte_Write_VeIDCR_b_SupVerNumMinor_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_EVCC_FailureRsn' incorporates:
     *  Merge: '<Root>/Merge_108'
     */
    (void)Rte_Write_VeIDCR_e_EVCC_FailureRsn_Value(CeIDCR_e_EVCCFail_None);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_EVCC_FailureRsnFA' incorporates:
     *  Merge: '<Root>/Merge_111'
     */
    (void)Rte_Write_VeIDCR_b_EVCC_FailureRsnFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_EVCC_FailureSts' incorporates:
     *  Merge: '<Root>/Merge_109'
     */
    (void)Rte_Write_VeIDCR_b_EVCC_FailureSts_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_TCPCommTerminated' incorporates:
     *  Merge: '<Root>/Merge_110'
     */
    (void)Rte_Write_VeIDCR_b_TCPCommTerminated_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_J1772InputCrntAvalFA' incorporates:
     *  Merge: '<Root>/Merge_140'
     */
    (void)Rte_Write_VeIDCR_b_J1772InputCrntAvalFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_ChrgFailStsFA' incorporates:
     *  Merge: '<Root>/Merge_142'
     */
    (void)Rte_Write_VeIDCR_b_ChrgFailStsFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_BattSide_CurrFA' incorporates:
     *  Merge: '<Root>/Merge_143'
     */
    (void)Rte_Write_VeIDCR_b_BattSide_CurrFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_BattSide_VoltFA' incorporates:
     *  Merge: '<Root>/Merge_144'
     */
    (void)Rte_Write_VeIDCR_b_BattSide_VoltFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_AC_InputVltOBCMFA' incorporates:
     *  Merge: '<Root>/Merge_145'
     */
    (void)Rte_Write_VeIDCR_b_AC_InputVltOBCMFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_TxMsgResponse' incorporates:
     *  Merge: '<Root>/Merge_112'
     */
    (void)Rte_Write_VeIDCR_e_TxMsgResponse_Value(CeIDCR_e_NoRequest);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_TxMsgResponse_FA' incorporates:
     *  Merge: '<Root>/Merge_113'
     */
    (void)Rte_Write_VeIDCR_b_TxMsgResponse_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_IBS_BattTempFailSts' incorporates:
     *  Merge: '<Root>/Merge_5'
     */
    (void)Rte_Write_VeIDCR_e_IBS_BattTempFailSts_Value
        (CeGENR_e_BattTempSts_Fail_NtPrsnt);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_T_IBS_BattTemp' incorporates:
     *  Merge: '<Root>/Merge_16'
     */
    (void)Rte_Write_VeIDCR_T_IBS_BattTemp_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_IBS_BattTemp_FA' incorporates:
     *  Merge: '<Root>/Merge_17'
     */
    (void)Rte_Write_VeIDCR_b_IBS_BattTemp_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_IBS_BattTemp_SgnlRcvd' incorporates:
     *  Merge: '<Root>/Merge_18'
     */
    (void)Rte_Write_VeIDCR_b_IBS_BattTemp_SgnlRcvd_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_APM_HvVsetPFdbk_FA' incorporates:
     *  Merge: '<Root>/Merge_21'
     */
    (void)Rte_Write_VeIDCR_b_APM_HvVsetPFdbk_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_IBS_BattVolt_FA' incorporates:
     *  Merge: '<Root>/Merge_19'
     */
    (void)Rte_Write_VeIDCR_b_IBS_BattVolt_FA_Value(false);

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/IDCR_MedTED'
     */
    /* SystemInitialize for S-Function (fcgen): '<S149>/FcnCallGen' incorporates:
     *  SubSystem: '<S149>/IBattConv'
     */
    /* SystemInitialize for IfAction SubSystem: '<S505>/IBattConv' */
    /* SystemInitialize for Merge: '<S509>/Merge1' */
    IDCR_ac_B.Merge1 = 0.0F;

    /* End of SystemInitialize for SubSystem: '<S505>/IBattConv' */
    /* End of SystemInitialize for S-Function (fcgen): '<S149>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_IBS_BattSOC_FA' incorporates:
     *  Merge: '<Root>/Merge_243'
     */
    (void)Rte_Write_VeIDCR_b_IBS_BattSOC_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_HVIL_A_Failed' incorporates:
     *  Merge: '<Root>/Merge_135'
     */
    (void)Rte_Write_VeIDCR_b_HVIL_A_Failed_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_HVIL_B_Failed' incorporates:
     *  Merge: '<Root>/Merge_136'
     */
    (void)Rte_Write_VeIDCR_b_HVIL_B_Failed_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_HVIL_C_Failed' incorporates:
     *  Merge: '<Root>/Merge_137'
     */
    (void)Rte_Write_VeIDCR_b_HVIL_C_Failed_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_I_IBS_I_Batt' incorporates:
     *  Merge: '<Root>/Merge_Outport_118'
     */
    (void)Rte_Write_VeIDCR_I_IBS_I_Batt_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_IBS_I_Batt_FA' incorporates:
     *  Merge: '<Root>/Merge_Outport_119'
     */
    (void)Rte_Write_VeIDCR_b_IBS_I_Batt_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_IBS_I_Batt_SgnlRcvd' incorporates:
     *  Merge: '<Root>/Merge_Outport_120'
     */
    (void)Rte_Write_VeIDCR_b_IBS_I_Batt_SgnlRcvd_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_IBS_I_RANGE' incorporates:
     *  Merge: '<Root>/Merge_28'
     */
    (void)Rte_Write_VeIDCR_e_IBS_I_RANGE_Value(CeGENR_e_Range_I1);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_IBS_I_RANGE_FA' incorporates:
     *  Merge: '<Root>/Merge_29'
     */
    (void)Rte_Write_VeIDCR_b_IBS_I_RANGE_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_IBS_Current_Status' incorporates:
     *  Merge: '<Root>/Merge_30'
     */
    (void)Rte_Write_VeIDCR_e_IBS_Current_Status_Value
        (CeGENR_e_IBSCurStatus_NO_ERROR);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_IBS_Current_Status_FA' incorporates:
     *  Merge: '<Root>/Merge_31'
     */
    (void)Rte_Write_VeIDCR_b_IBS_Current_Status_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_DVC_APMSts' incorporates:
     *  Merge: '<Root>/Merge_22'
     */
    (void)Rte_Write_VeIDCR_e_DVC_APMSts_Value(CeODCR_e_Return_ECU_Cntrl);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_y_APMSts' incorporates:
     *  Merge: '<Root>/Merge_24'
     */
    (void)Rte_Write_VeIDCR_y_APMSts_Value(((uint8)0U));

    /* SystemInitialize for Outport: '<Root>/VeIDCR_Pct_UtilPctOfDCDC' incorporates:
     *  Merge: '<Root>/Merge_32'
     */
    (void)Rte_Write_VeIDCR_Pct_UtilPctOfDCDC_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_P_APM_OutputPwr' incorporates:
     *  Merge: '<Root>/Merge_33'
     */
    (void)Rte_Write_VeIDCR_P_APM_OutputPwr_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_P_APM_DeratePwr' incorporates:
     *  Merge: '<Root>/Merge_35'
     */
    (void)Rte_Write_VeIDCR_P_APM_DeratePwr_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_APM_DeratingModeStatus' incorporates:
     *  Merge: '<Root>/Merge_36'
     */
    (void)Rte_Write_VeIDCR_e_APM_DeratingModeStatus_Value(CeGENR_e_No_Derating);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_OBCM_HVILSts' incorporates:
     *  Merge: '<Root>/Merge_147'
     */
    (void)Rte_Write_VeIDCR_e_OBCM_HVILSts_Value(CeHVTR_e_IntrlkNotSourced);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_OBCM_HVILStsFA' incorporates:
     *  Merge: '<Root>/Merge_148'
     */
    (void)Rte_Write_VeIDCR_b_OBCM_HVILStsFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_I_IBS_I_Converted' incorporates:
     *  Merge: '<Root>/Merge_Outport_133'
     */
    (void)Rte_Write_VeIDCR_I_IBS_I_Converted_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_IBS_I_Converted_FA' incorporates:
     *  Merge: '<Root>/Merge_Outport_134'
     */
    (void)Rte_Write_VeIDCR_b_IBS_I_Converted_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_U_BattSideVolt' incorporates:
     *  Merge: '<Root>/Merge_149'
     */
    (void)Rte_Write_VeIDCR_U_BattSideVolt_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_EVSer_On_OBCM' incorporates:
     *  Merge: '<Root>/Merge_151'
     */
    (void)Rte_Write_VeIDCR_b_EVSer_On_OBCM_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_ACSideVolt_L2FA' incorporates:
     *  Merge: '<Root>/Merge_153'
     */
    (void)Rte_Write_VeIDCR_b_ACSideVolt_L2FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_ACSideVolt_L3FA' incorporates:
     *  Merge: '<Root>/Merge_154'
     */
    (void)Rte_Write_VeIDCR_b_ACSideVolt_L3FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_OBCM_TimeOut' incorporates:
     *  Merge: '<Root>/Merge_156'
     */
    (void)Rte_Write_VeIDCR_b_OBCM_TimeOut_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_Chrgr_FaultStates' incorporates:
     *  Merge: '<Root>/Merge_160'
     */
    (void)Rte_Write_VeIDCR_e_Chrgr_FaultStates_Value(CeIDCR_e_GBT_No_FLT);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_Chrgr_FaultStatesFA' incorporates:
     *  Merge: '<Root>/Merge_162'
     */
    (void)Rte_Write_VeIDCR_b_Chrgr_FaultStatesFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_Prox_GBT' incorporates:
     *  Merge: '<Root>/Merge_164'
     */
    (void)Rte_Write_VeIDCR_e_Prox_GBT_Value(CeIDCR_e_CC_LO);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_TxGBTMsgRequest' incorporates:
     *  Merge: '<Root>/Merge_166'
     */
    (void)Rte_Write_VeIDCR_e_TxGBTMsgRequest_Value
        (CeIDCR_e_GBTReq_EVSE_Not_Connected);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_TxGBTMsgRequestFA' incorporates:
     *  Merge: '<Root>/Merge_167'
     */
    (void)Rte_Write_VeIDCR_b_TxGBTMsgRequestFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_TxGBTMsgResponse' incorporates:
     *  Merge: '<Root>/Merge_169'
     */
    (void)Rte_Write_VeIDCR_e_TxGBTMsgResponse_Value
        (CeIDCR_e_GBTRes_EVSE_Not_Connected);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_TxGBTMsgResponseFA' incorporates:
     *  Merge: '<Root>/Merge_170'
     */
    (void)Rte_Write_VeIDCR_b_TxGBTMsgResponseFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_GBT_EVSEChrgPermitting' incorporates:
     *  Merge: '<Root>/Merge_173'
     */
    (void)Rte_Write_VeIDCR_b_GBT_EVSEChrgPermitting_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_V2L_Detected' incorporates:
     *  Merge: '<Root>/Merge_219'
     */
    (void)Rte_Write_VeIDCR_b_V2L_Detected_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_V2L_DetectedFA' incorporates:
     *  Merge: '<Root>/Merge_228'
     */
    (void)Rte_Write_VeIDCR_b_V2L_DetectedFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_I_V2L_DischargeCurrent' incorporates:
     *  Merge: '<Root>/Merge_226'
     */
    (void)Rte_Write_VeIDCR_I_V2L_DischargeCurrent_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_V2L_DischargeCurrentFA' incorporates:
     *  Merge: '<Root>/Merge_227'
     */
    (void)Rte_Write_VeIDCR_b_V2L_DischargeCurrentFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_V2L_DischargeDeratingRsn' incorporates:
     *  Merge: '<Root>/Merge_229'
     */
    (void)Rte_Write_VeIDCR_e_V2L_DischargeDeratingRsn_Value(CeIDCR_e_No_Derating);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_V2L_DischargeDeratingRsnFA' incorporates:
     *  Merge: '<Root>/Merge_230'
     */
    (void)Rte_Write_VeIDCR_b_V2L_DischargeDeratingRsnFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_U_V2L_DischargeVoltage' incorporates:
     *  Merge: '<Root>/Merge_231'
     */
    (void)Rte_Write_VeIDCR_U_V2L_DischargeVoltage_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_V2L_DischargeVoltageFA' incorporates:
     *  Merge: '<Root>/Merge_232'
     */
    (void)Rte_Write_VeIDCR_b_V2L_DischargeVoltageFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_f_V2L_Output_Frequency' incorporates:
     *  Merge: '<Root>/Merge_233'
     */
    (void)Rte_Write_VeIDCR_f_V2L_Output_Frequency_Value(((uint16)0U));

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_V2L_Output_FrequencyFA' incorporates:
     *  Merge: '<Root>/Merge_234'
     */
    (void)Rte_Write_VeIDCR_b_V2L_Output_FrequencyFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_f_V2L_Pilot_Frequency' incorporates:
     *  Merge: '<Root>/Merge_220'
     */
    (void)Rte_Write_VeIDCR_f_V2L_Pilot_Frequency_Value(((uint16)0U));

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_V2L_Pilot_FrequencyFA' incorporates:
     *  Merge: '<Root>/Merge_221'
     */
    (void)Rte_Write_VeIDCR_b_V2L_Pilot_FrequencyFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_V2L_DischargeFailSts' incorporates:
     *  Merge: '<Root>/Merge_222'
     */
    (void)Rte_Write_VeIDCR_e_V2L_DischargeFailSts_Value(CeVTLR_e_No_Fault);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_V2L_DischargeFailStsFA' incorporates:
     *  Merge: '<Root>/Merge_223'
     */
    (void)Rte_Write_VeIDCR_b_V2L_DischargeFailStsFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_V2L_DischargeFaultRsn' incorporates:
     *  Merge: '<Root>/Merge_224'
     */
    (void)Rte_Write_VeIDCR_e_V2L_DischargeFaultRsn_Value(CeIDCR_e_No_Fault);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_V2L_DischargeFaultRsnFA' incorporates:
     *  Merge: '<Root>/Merge_225'
     */
    (void)Rte_Write_VeIDCR_b_V2L_DischargeFaultRsnFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_TLS_Offered' incorporates:
     *  Merge: '<Root>/Merge_196'
     */
    (void)Rte_Write_VeIDCR_b_TLS_Offered_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_TLS_Connection' incorporates:
     *  Merge: '<Root>/Merge_207'
     */
    (void)Rte_Write_VeIDCR_e_TLS_Connection_Value(CeIDCR_e_Not_Performed);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_TLS_ConnectionFA' incorporates:
     *  Merge: '<Root>/Merge_203'
     */
    (void)Rte_Write_VeIDCR_b_TLS_ConnectionFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_EVSEsupported_ISO1' incorporates:
     *  Merge: '<Root>/Merge_206'
     */
    (void)Rte_Write_VeIDCR_b_EVSEsupported_ISO1_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_EVSEsupported_DIN' incorporates:
     *  Merge: '<Root>/Merge_208'
     */
    (void)Rte_Write_VeIDCR_b_EVSEsupported_DIN_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_OfferedPaymentContract' incorporates:
     *  Merge: '<Root>/Merge_209'
     */
    (void)Rte_Write_VeIDCR_b_OfferedPaymentContract_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_OfferedPaymentEIM' incorporates:
     *  Merge: '<Root>/Merge_210'
     */
    (void)Rte_Write_VeIDCR_b_OfferedPaymentEIM_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_Service2_Certificate' incorporates:
     *  Merge: '<Root>/Merge_211'
     */
    (void)Rte_Write_VeIDCR_b_Service2_Certificate_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_EVSENotification' incorporates:
     *  Merge: '<Root>/Merge_212'
     */
    (void)Rte_Write_VeIDCR_e_EVSENotification_Value(CeIDCR_e_None);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_EVSENotificationFA' incorporates:
     *  Merge: '<Root>/Merge_213'
     */
    (void)Rte_Write_VeIDCR_b_EVSENotificationFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_t_EVSE_NotificationMaxDelay' incorporates:
     *  Merge: '<Root>/Merge_197'
     */
    (void)Rte_Write_VeIDCR_t_EVSE_NotificationMaxDelay_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_EVSE_NotificationMaxDelayFA' incorporates:
     *  Merge: '<Root>/Merge_198'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_NotificationMaxDelayFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_ReceiptRequired' incorporates:
     *  Merge: '<Root>/Merge_199'
     */
    (void)Rte_Write_VeIDCR_b_ReceiptRequired_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_W_EVSE_SASPmax' incorporates:
     *  Merge: '<Root>/Merge_200'
     */
    (void)Rte_Write_VeIDCR_W_EVSE_SASPmax_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_EVSE_SASPmaxFA' incorporates:
     *  Merge: '<Root>/Merge_201'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_SASPmaxFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_i_SAScheduleTupleID' incorporates:
     *  Merge: '<Root>/Merge_202'
     */
    (void)Rte_Write_VeIDCR_i_SAScheduleTupleID_Value(((uint8)0U));

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_SAScheduleTupleIDFA' incorporates:
     *  Merge: '<Root>/Merge_204'
     */
    (void)Rte_Write_VeIDCR_b_SAScheduleTupleIDFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_PROXY_Plug_and_Charge' incorporates:
     *  Merge: '<Root>/Merge_205'
     */
    (void)Rte_Write_VeIDCR_e_PROXY_Plug_and_Charge_Value(CeIDCR_e_Absent);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_f_ACOutFreq' incorporates:
     *  Merge: '<Root>/Merge_45'
     */
    (void)Rte_Write_VeIDCR_f_ACOutFreq_Value(((uint8)0U));

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_ACOutFreq_FA' incorporates:
     *  Merge: '<Root>/Merge_46'
     */
    (void)Rte_Write_VeIDCR_b_ACOutFreq_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_I_ACOutCurrent1' incorporates:
     *  Merge: '<Root>/Merge_47'
     */
    (void)Rte_Write_VeIDCR_I_ACOutCurrent1_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_ACOutCurrent1_FA' incorporates:
     *  Merge: '<Root>/Merge_48'
     */
    (void)Rte_Write_VeIDCR_b_ACOutCurrent1_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_I_ACOutCurrent2' incorporates:
     *  Merge: '<Root>/Merge_49'
     */
    (void)Rte_Write_VeIDCR_I_ACOutCurrent2_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_ACOutCurrent2_FA' incorporates:
     *  Merge: '<Root>/Merge_50'
     */
    (void)Rte_Write_VeIDCR_b_ACOutCurrent2_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_I_ACOutCurrent3' incorporates:
     *  Merge: '<Root>/Merge_51'
     */
    (void)Rte_Write_VeIDCR_I_ACOutCurrent3_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_ACOutCurrent3_FA' incorporates:
     *  Merge: '<Root>/Merge_52'
     */
    (void)Rte_Write_VeIDCR_b_ACOutCurrent3_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_U_ACOutVoltage1' incorporates:
     *  Merge: '<Root>/Merge_53'
     */
    (void)Rte_Write_VeIDCR_U_ACOutVoltage1_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_ACOutVoltage1_FA' incorporates:
     *  Merge: '<Root>/Merge_54'
     */
    (void)Rte_Write_VeIDCR_b_ACOutVoltage1_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_U_ACOutVoltage2' incorporates:
     *  Merge: '<Root>/Merge_55'
     */
    (void)Rte_Write_VeIDCR_U_ACOutVoltage2_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_ACOutVoltage2_FA' incorporates:
     *  Merge: '<Root>/Merge_56'
     */
    (void)Rte_Write_VeIDCR_b_ACOutVoltage2_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_U_ACOutVoltage3' incorporates:
     *  Merge: '<Root>/Merge_57'
     */
    (void)Rte_Write_VeIDCR_U_ACOutVoltage3_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_ACOutVoltage3_FA' incorporates:
     *  Merge: '<Root>/Merge_58'
     */
    (void)Rte_Write_VeIDCR_b_ACOutVoltage3_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_I_DCInputCurrent' incorporates:
     *  Merge: '<Root>/Merge_59'
     */
    (void)Rte_Write_VeIDCR_I_DCInputCurrent_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_DCInputCurrent_FA' incorporates:
     *  Merge: '<Root>/Merge_60'
     */
    (void)Rte_Write_VeIDCR_b_DCInputCurrent_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_U_DCInputVoltage' incorporates:
     *  Merge: '<Root>/Merge_118'
     */
    (void)Rte_Write_VeIDCR_U_DCInputVoltage_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_DCInputVoltage_FA' incorporates:
     *  Merge: '<Root>/Merge_119'
     */
    (void)Rte_Write_VeIDCR_b_DCInputVoltage_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_DschrgFaultSts' incorporates:
     *  Merge: '<Root>/Merge_120'
     */
    (void)Rte_Write_VeIDCR_e_DschrgFaultSts_Value(CeVTLR_e_No_Fault);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_DschrgFaultSts_FA' incorporates:
     *  Merge: '<Root>/Merge_121'
     */
    (void)Rte_Write_VeIDCR_b_DschrgFaultSts_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_f_V2X_Frequency' incorporates:
     *  Merge: '<Root>/Merge_122'
     */
    (void)Rte_Write_VeIDCR_f_V2X_Frequency_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_V2X_Frequency_FA' incorporates:
     *  Merge: '<Root>/Merge_123'
     */
    (void)Rte_Write_VeIDCR_b_V2X_Frequency_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_V2X_Sts' incorporates:
     *  Merge: '<Root>/Merge_124'
     */
    (void)Rte_Write_VeIDCR_b_V2X_Sts_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_V2X_Sts_FA' incorporates:
     *  Merge: '<Root>/Merge_125'
     */
    (void)Rte_Write_VeIDCR_b_V2X_Sts_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_I_AcOutCurrent' incorporates:
     *  Merge: '<Root>/Merge_126'
     */
    (void)Rte_Write_VeIDCR_I_AcOutCurrent_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_AcOutCurrent_FA' incorporates:
     *  Merge: '<Root>/Merge_127'
     */
    (void)Rte_Write_VeIDCR_b_AcOutCurrent_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_f_AcOutFrequency' incorporates:
     *  Merge: '<Root>/Merge_128'
     */
    (void)Rte_Write_VeIDCR_f_AcOutFrequency_Value(((uint16)0U));

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_AcOutFrequency_FA' incorporates:
     *  Merge: '<Root>/Merge_129'
     */
    (void)Rte_Write_VeIDCR_b_AcOutFrequency_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_U_AcOutVoltage' incorporates:
     *  Merge: '<Root>/Merge_130'
     */
    (void)Rte_Write_VeIDCR_U_AcOutVoltage_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_AcOutVoltage_FA' incorporates:
     *  Merge: '<Root>/Merge_131'
     */
    (void)Rte_Write_VeIDCR_b_AcOutVoltage_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_P_AvailablePower' incorporates:
     *  Merge: '<Root>/Merge_132'
     */
    (void)Rte_Write_VeIDCR_P_AvailablePower_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_AvailablePower_FA' incorporates:
     *  Merge: '<Root>/Merge_133'
     */
    (void)Rte_Write_VeIDCR_b_AvailablePower_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_V2X_DerateRsn' incorporates:
     *  Merge: '<Root>/Merge_134'
     */
    (void)Rte_Write_VeIDCR_e_V2X_DerateRsn_Value(CeIDCR_e_No_Derating);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_V2X_DerateRsn_FA' incorporates:
     *  Merge: '<Root>/Merge_182'
     */
    (void)Rte_Write_VeIDCR_b_V2X_DerateRsn_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_V2X_DerateSts' incorporates:
     *  Merge: '<Root>/Merge_183'
     */
    (void)Rte_Write_VeIDCR_b_V2X_DerateSts_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_V2X_DerateSts_FA' incorporates:
     *  Merge: '<Root>/Merge_184'
     */
    (void)Rte_Write_VeIDCR_b_V2X_DerateSts_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_V2X_FailSts' incorporates:
     *  Merge: '<Root>/Merge_185'
     */
    (void)Rte_Write_VeIDCR_b_V2X_FailSts_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_V2X_FailSts_FA' incorporates:
     *  Merge: '<Root>/Merge_186'
     */
    (void)Rte_Write_VeIDCR_b_V2X_FailSts_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_V2X_FaultRsn' incorporates:
     *  Merge: '<Root>/Merge_187'
     */
    (void)Rte_Write_VeIDCR_e_V2X_FaultRsn_Value(CeIDCR_e_No_FAULT);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_V2X_FaultRsn_FA' incorporates:
     *  Merge: '<Root>/Merge_188'
     */
    (void)Rte_Write_VeIDCR_b_V2X_FaultRsn_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_I_V2X_InputCurrent' incorporates:
     *  Merge: '<Root>/Merge_189'
     */
    (void)Rte_Write_VeIDCR_I_V2X_InputCurrent_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_V2X_InputCurrent_FA' incorporates:
     *  Merge: '<Root>/Merge_190'
     */
    (void)Rte_Write_VeIDCR_b_V2X_InputCurrent_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_U_V2X_InputVoltage' incorporates:
     *  Merge: '<Root>/Merge_191'
     */
    (void)Rte_Write_VeIDCR_U_V2X_InputVoltage_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_V2X_InputVoltage_FA' incorporates:
     *  Merge: '<Root>/Merge_192'
     */
    (void)Rte_Write_VeIDCR_b_V2X_InputVoltage_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_V2X_InterlockSts' incorporates:
     *  Merge: '<Root>/Merge_193'
     */
    (void)Rte_Write_VeIDCR_e_V2X_InterlockSts_Value(CeHVTR_e_IntrlkNotSourced);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_V2X_InterlockSts_FA' incorporates:
     *  Merge: '<Root>/Merge_194'
     */
    (void)Rte_Write_VeIDCR_b_V2X_InterlockSts_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_U_V2X_LVFeed' incorporates:
     *  Merge: '<Root>/Merge_195'
     */
    (void)Rte_Write_VeIDCR_U_V2X_LVFeed_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_V2X_LVFeed_FA' incorporates:
     *  Merge: '<Root>/Merge_214'
     */
    (void)Rte_Write_VeIDCR_b_V2X_LVFeed_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_V2X_ModeFeedback' incorporates:
     *  Merge: '<Root>/Merge_215'
     */
    (void)Rte_Write_VeIDCR_e_V2X_ModeFeedback_Value(CeIDCR_e_No_Request);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_V2X_ModeFeedback_FA' incorporates:
     *  Merge: '<Root>/Merge_216'
     */
    (void)Rte_Write_VeIDCR_b_V2X_ModeFeedback_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_BattSocAcc' incorporates:
     *  Merge: '<Root>/Merge_217'
     */
    (void)Rte_Write_VeIDCR_b_BattSocAcc_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_APM2InterlockSts' incorporates:
     *  Merge: '<Root>/Merge_218'
     */
    (void)Rte_Write_VeIDCR_e_APM2InterlockSts_Value(CeHVTR_e_IntrlkNotSourced);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_APM2InterlockSts_FA' incorporates:
     *  Merge: '<Root>/Merge_235'
     */
    (void)Rte_Write_VeIDCR_b_APM2InterlockSts_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_APM3InterlockSts' incorporates:
     *  Merge: '<Root>/Merge_236'
     */
    (void)Rte_Write_VeIDCR_e_APM3InterlockSts_Value(CeHVTR_e_IntrlkNotSourced);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_APM3InterlockSts_FA' incorporates:
     *  Merge: '<Root>/Merge_237'
     */
    (void)Rte_Write_VeIDCR_b_APM3InterlockSts_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_U_OBC_Prox' incorporates:
     *  Merge: '<Root>/Merge_238'
     */
    (void)Rte_Write_VeIDCR_U_OBC_Prox_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_OBC_Prox_FA' incorporates:
     *  Merge: '<Root>/Merge_239'
     */
    (void)Rte_Write_VeIDCR_b_OBC_Prox_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_PlugAndChargeReq' incorporates:
     *  Merge: '<Root>/Merge_240'
     */
    (void)Rte_Write_VeIDCR_b_PlugAndChargeReq_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_PlugAndChargeReq_FA' incorporates:
     *  Merge: '<Root>/Merge_241'
     */
    (void)Rte_Write_VeIDCR_b_PlugAndChargeReq_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_PlugAndChargeReq_SgnlRcvd' incorporates:
     *  Merge: '<Root>/Merge_242'
     */
    (void)Rte_Write_VeIDCR_b_PlugAndChargeReq_SgnlRcvd_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_APM_ThermalRunaway' incorporates:
     *  Merge: '<Root>/Merge_245'
     */
    (void)Rte_Write_VeIDCR_e_APM_ThermalRunaway_Value(CeBPCR_e_DefaultThrmlRnawy);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_APM_FailureType_FA' incorporates:
     *  Merge: '<Root>/Merge_246'
     */
    (void)Rte_Write_VeIDCR_b_APM_FailureType_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_EVSE_Offered_AC_Single_Phase' incorporates:
     *  Merge: '<Root>/Merge_247'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_Offered_AC_Single_Phase_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_EVSE_Offered_AC_Single_Phase_FA' incorporates:
     *  Merge: '<Root>/Merge_248'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_Offered_AC_Single_Phase_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_EVSE_Offered_AC_Three_Phase' incorporates:
     *  Merge: '<Root>/Merge_249'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_Offered_AC_Three_Phase_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_EVSE_Offered_AC_Three_Phase_FA' incorporates:
     *  Merge: '<Root>/Merge_250'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_Offered_AC_Three_Phase_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_EVSE_Offered_DC_Extended' incorporates:
     *  Merge: '<Root>/Merge_251'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_Offered_DC_Extended_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_EVSE_Offered_DC_Extended_FA' incorporates:
     *  Merge: '<Root>/Merge_252'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_Offered_DC_Extended_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_EVSE_Service1_Charging' incorporates:
     *  Merge: '<Root>/Merge_253'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_Service1_Charging_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_EVSE_Service1_Charging_FA' incorporates:
     *  Merge: '<Root>/Merge_254'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_Service1_Charging_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_EVSE_Service1_Free' incorporates:
     *  Merge: '<Root>/Merge_255'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_Service1_Free_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_EVSE_Service1_Free_FA' incorporates:
     *  Merge: '<Root>/Merge_256'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_Service1_Free_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_cmp_ISO15118_EVSETimeStamp' incorporates:
     *  Merge: '<Root>/Merge_257'
     */
    (void)Rte_Write_VeIDCR_cmp_ISO15118_EVSETimeStamp_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_ISO15118_EVSETimeStamp_FA' incorporates:
     *  Merge: '<Root>/Merge_258'
     */
    (void)Rte_Write_VeIDCR_b_ISO15118_EVSETimeStamp_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_ISO15118_MessageResponse' incorporates:
     *  Merge: '<Root>/Merge_259'
     */
    (void)Rte_Write_VeIDCR_e_ISO15118_MessageResponse_Value(CeIDCR_e_No_V2G_comm);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_ISO15118_MessageResponse_FA' incorporates:
     *  Merge: '<Root>/Merge_260'
     */
    (void)Rte_Write_VeIDCR_b_ISO15118_MessageResponse_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_t_ISO15118_NotificationMaxDelay' incorporates:
     *  Merge: '<Root>/Merge_261'
     */
    (void)Rte_Write_VeIDCR_t_ISO15118_NotificationMaxDelay_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_ISO15118_NotificationMaxDelay_FA' incorporates:
     *  Merge: '<Root>/Merge_262'
     */
    (void)Rte_Write_VeIDCR_b_ISO15118_NotificationMaxDelay_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_ISO15118_ResponseCode' incorporates:
     *  Merge: '<Root>/Merge_263'
     */
    (void)Rte_Write_VeIDCR_e_ISO15118_ResponseCode_Value(CeIDCR_e_OK);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_ISO15118_ResponseCode_FA' incorporates:
     *  Merge: '<Root>/Merge_264'
     */
    (void)Rte_Write_VeIDCR_b_ISO15118_ResponseCode_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_i_ISO15118_SAScheduleTupleID' incorporates:
     *  Merge: '<Root>/Merge_265'
     */
    (void)Rte_Write_VeIDCR_i_ISO15118_SAScheduleTupleID_Value(((uint8)0U));

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_ISO15118_SAScheduleTupleID_FA' incorporates:
     *  Merge: '<Root>/Merge_266'
     */
    (void)Rte_Write_VeIDCR_b_ISO15118_SAScheduleTupleID_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_y_ISO15118_SchemaID' incorporates:
     *  Merge: '<Root>/Merge_267'
     */
    (void)Rte_Write_VeIDCR_y_ISO15118_SchemaID_Value(((uint8)0U));

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_ISO15118_SchemaID_FA' incorporates:
     *  Merge: '<Root>/Merge_268'
     */
    (void)Rte_Write_VeIDCR_b_ISO15118_SchemaID_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_d_ISO15118_ServiceID' incorporates:
     *  Merge: '<Root>/Merge_269'
     */
    (void)Rte_Write_VeIDCR_d_ISO15118_ServiceID_Value(((uint16)0U));

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_ISO15118_ServiceID_FA' incorporates:
     *  Merge: '<Root>/Merge_270'
     */
    (void)Rte_Write_VeIDCR_b_ISO15118_ServiceID_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_ISO15118_TLS_Offered' incorporates:
     *  Merge: '<Root>/Merge_271'
     */
    (void)Rte_Write_VeIDCR_b_ISO15118_TLS_Offered_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_ISO15118_TLS_Offered_FA' incorporates:
     *  Merge: '<Root>/Merge_272'
     */
    (void)Rte_Write_VeIDCR_b_ISO15118_TLS_Offered_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_ISO15118_TLS_Status' incorporates:
     *  Merge: '<Root>/Merge_273'
     */
    (void)Rte_Write_VeIDCR_e_ISO15118_TLS_Status_Value(CeIDCR_e_Not_Performed);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_ISO15118_TLS_Status_FA' incorporates:
     *  Merge: '<Root>/Merge_274'
     */
    (void)Rte_Write_VeIDCR_b_ISO15118_TLS_Status_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_y_ISO15118_VersionNumMajor' incorporates:
     *  Merge: '<Root>/Merge_275'
     */
    (void)Rte_Write_VeIDCR_y_ISO15118_VersionNumMajor_Value(((uint8)0U));

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_ISO15118_VersionNumMajor_FA' incorporates:
     *  Merge: '<Root>/Merge_276'
     */
    (void)Rte_Write_VeIDCR_b_ISO15118_VersionNumMajor_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_y_ISO15118_VersionNumMinor' incorporates:
     *  Merge: '<Root>/Merge_277'
     */
    (void)Rte_Write_VeIDCR_y_ISO15118_VersionNumMinor_Value(((uint8)0U));

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_ISO15118_VersionNumMinor_FA' incorporates:
     *  Merge: '<Root>/Merge_278'
     */
    (void)Rte_Write_VeIDCR_b_ISO15118_VersionNumMinor_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_d_EVSE_Accepted_Protocol' incorporates:
     *  Merge: '<Root>/Merge_279'
     */
    (void)Rte_Write_VeIDCR_d_EVSE_Accepted_Protocol_Value(((uint16)0U));

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_EVSE_Accepted_Protocol_FA' incorporates:
     *  Merge: '<Root>/Merge_280'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_Accepted_Protocol_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_EVSE_OfferedService' incorporates:
     *  Merge: '<Root>/Merge_281'
     */
    (void)Rte_Write_VeIDCR_e_EVSE_OfferedService_Value
        (CeIDCR_e_OfferedServiceNone);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_EVSE_OfferedService_FA' incorporates:
     *  Merge: '<Root>/Merge_282'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_OfferedService_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_EVSE_ChrgStopControl' incorporates:
     *  Merge: '<Root>/Merge_285'
     */
    (void)Rte_Write_VeIDCR_e_EVSE_ChrgStopControl_Value
        (CeIDCR_e_No_Chrg_Stp_Cntrl);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_EVSE_ChrgStopControl_FA' incorporates:
     *  Merge: '<Root>/Merge_286'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_ChrgStopControl_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_EVSE_Error' incorporates:
     *  Merge: '<Root>/Merge_287'
     */
    (void)Rte_Write_VeIDCR_e_EVSE_Error_Value(CeIDCR_e_No_Error);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_EVSE_Error_FA' incorporates:
     *  Merge: '<Root>/Merge_288'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_Error_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_ReceiptRequired_FA' incorporates:
     *  Merge: '<Root>/Merge_283'
     */
    (void)Rte_Write_VeIDCR_b_ReceiptRequired_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_EVCC_FailureSts_FA' incorporates:
     *  Merge: '<Root>/Merge_284'
     */
    (void)Rte_Write_VeIDCR_b_EVCC_FailureSts_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_OBCM_Timeout_FA' incorporates:
     *  Merge: '<Root>/Merge_289'
     */
    (void)Rte_Write_VeIDCR_b_OBCM_Timeout_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_IDCM_GFCI_Fault_Status' incorporates:
     *  Merge: '<Root>/Merge_306'
     */
    (void)Rte_Write_VeIDCR_b_IDCM_GFCI_Fault_Status_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_IDCM_GFCI_Fault_Status_FA' incorporates:
     *  Merge: '<Root>/Merge_290'
     */
    (void)Rte_Write_VeIDCR_b_IDCM_GFCI_Fault_Status_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_EVSE_CHAdeMOProtocol' incorporates:
     *  Merge: '<Root>/Merge_307'
     */
    (void)Rte_Write_VeIDCR_e_EVSE_CHAdeMOProtocol_Value
        (CeIDCR_e_CHAdeMO_0_9_n_earlier);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_EVSE_CHAdeMOProtocol_FA' incorporates:
     *  Merge: '<Root>/Merge_291'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_CHAdeMOProtocol_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_EVSE_ChargingSystemError' incorporates:
     *  Merge: '<Root>/Merge_308'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_ChargingSystemError_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_EVSE_ChargingSystemError_FA' incorporates:
     *  Merge: '<Root>/Merge_292'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_ChargingSystemError_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_EVSE_EnergizingState' incorporates:
     *  Merge: '<Root>/Merge_309'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_EnergizingState_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_EVSE_EnergizingState_FA' incorporates:
     *  Merge: '<Root>/Merge_293'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_EnergizingState_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_U_EVSE_ThrshldVoltage' incorporates:
     *  Merge: '<Root>/Merge_310'
     */
    (void)Rte_Write_VeIDCR_U_EVSE_ThrshldVoltage_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_EVSE_ThrshldVoltage_FA' incorporates:
     *  Merge: '<Root>/Merge_294'
     */
    (void)Rte_Write_VeIDCR_b_EVSE_ThrshldVoltage_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_Charger_WeldingDetectAvail' incorporates:
     *  Merge: '<Root>/Merge_311'
     */
    (void)Rte_Write_VeIDCR_e_Charger_WeldingDetectAvail_Value
        (CeIDCR_e_Charger_Not_Available);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_Charger_WeldingDetectAvail_FA' incorporates:
     *  Merge: '<Root>/Merge_295'
     */
    (void)Rte_Write_VeIDCR_b_Charger_WeldingDetectAvail_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_ExtChargerSts' incorporates:
     *  Merge: '<Root>/Merge_312'
     */
    (void)Rte_Write_VeIDCR_e_ExtChargerSts_Value(CeIDCR_e_ExtChargerSts_Standby);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_ExtChargerSts_FA' incorporates:
     *  Merge: '<Root>/Merge_296'
     */
    (void)Rte_Write_VeIDCR_b_ExtChargerSts_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_OBCM_CP1Sts' incorporates:
     *  Merge: '<Root>/Merge_313'
     */
    (void)Rte_Write_VeIDCR_e_OBCM_CP1Sts_Value(CeIDCR_e_CP1Sts_NO_EVSE);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_OBCM_CP1Sts_FA' incorporates:
     *  Merge: '<Root>/Merge_297'
     */
    (void)Rte_Write_VeIDCR_b_OBCM_CP1Sts_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_OBCM_CP2Sts' incorporates:
     *  Merge: '<Root>/Merge_314'
     */
    (void)Rte_Write_VeIDCR_e_OBCM_CP2Sts_Value(CeIDCR_e_CP2Sts_EVSE_not_ready);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_OBCM_CP2Sts_FA' incorporates:
     *  Merge: '<Root>/Merge_298'
     */
    (void)Rte_Write_VeIDCR_b_OBCM_CP2Sts_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_OBCM_CP3Sts' incorporates:
     *  Merge: '<Root>/Merge_315'
     */
    (void)Rte_Write_VeIDCR_e_OBCM_CP3Sts_Value(CeIDCR_e_CP3Sts_Charge_perm_dis);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_OBCM_CP3Sts_FA' incorporates:
     *  Merge: '<Root>/Merge_299'
     */
    (void)Rte_Write_VeIDCR_b_OBCM_CP3Sts_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_e_OBCM_CSSts' incorporates:
     *  Merge: '<Root>/Merge_316'
     */
    (void)Rte_Write_VeIDCR_e_OBCM_CSSts_Value(CeIDCR_e_OBCM_CSSts_CS_IN);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_OBCM_CSSts_FA' incorporates:
     *  Merge: '<Root>/Merge_300'
     */
    (void)Rte_Write_VeIDCR_b_OBCM_CSSts_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_V2X_EVSE_Service_5_Free' incorporates:
     *  Merge: '<Root>/Merge_317'
     */
    (void)Rte_Write_VeIDCR_b_V2X_EVSE_Service_5_Free_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_V2X_EVSE_Service_5_Free_FA' incorporates:
     *  Merge: '<Root>/Merge_301'
     */
    (void)Rte_Write_VeIDCR_b_V2X_EVSE_Service_5_Free_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_IDCM_Wakeup_HCP' incorporates:
     *  Merge: '<Root>/Merge_318'
     */
    (void)Rte_Write_VeIDCR_b_IDCM_Wakeup_HCP_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_IDCM_Wakeup_HCP_FA' incorporates:
     *  Merge: '<Root>/Merge_302'
     */
    (void)Rte_Write_VeIDCR_b_IDCM_Wakeup_HCP_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_DC_Isolation_Disable_Cmd' incorporates:
     *  Merge: '<Root>/Merge_319'
     */
    (void)Rte_Write_VeIDCR_b_DC_Isolation_Disable_Cmd_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_DC_Isolation_Disable_Cmd_FA' incorporates:
     *  Merge: '<Root>/Merge_303'
     */
    (void)Rte_Write_VeIDCR_b_DC_Isolation_Disable_Cmd_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_V2X_EVSE_Service_5_V2H' incorporates:
     *  Merge: '<Root>/Merge_320'
     */
    (void)Rte_Write_VeIDCR_b_V2X_EVSE_Service_5_V2H_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_V2X_EVSE_Service_5_V2H_FA' incorporates:
     *  Merge: '<Root>/Merge_304'
     */
    (void)Rte_Write_VeIDCR_b_V2X_EVSE_Service_5_V2H_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_g_HVCMS_EVSEID' incorporates:
     *  Merge: '<Root>/Merge_321'
     */
    (void)Rte_Write_VeIDCR_g_HVCMS_EVSEID_Value(0U);

    /* SystemInitialize for Outport: '<Root>/VeIDCR_b_HVCMS_EVSEID_FA' incorporates:
     *  Merge: '<Root>/Merge_305'
     */
    (void)Rte_Write_VeIDCR_b_HVCMS_EVSEID_FA_Value(false);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
